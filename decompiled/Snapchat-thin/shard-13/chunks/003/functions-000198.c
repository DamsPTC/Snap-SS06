/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10a37eae8; end: 10a37eb2f;  */

undefined8 * FUN_10a37eae8(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_FUN_110bc8410;
  FUN_10a37eb70(param_1 + 3);
  return param_1;
}



/* Entry: 10a37eb30; end: 10a37eb3f;  */

void FUN_10a37eb30(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110bc8410;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10a37eb40; end: 10a37eb5f;  */

void FUN_10a37eb40(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110bc8410;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a37eb60; end: 10a37eb6f;  */

void FUN_10a37eb60(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010a37eb68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 10a37eb70; end: 10a37ec13;  */

undefined8
FUN_10a37eb70(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  plVar5 = (long *)param_4[1];
  uStack_28 = param_4[1];
  uStack_30 = *param_4;
  if (plVar5 != (long *)0x0) {
    plVar1 = plVar5 + 1;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  FUN_10aa8a690(param_1,0,&uStack_30);
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



/* Entry: 10a37ec14; end: 10a37eda3;  */

void FUN_10a37ec14(undefined8 *param_1,undefined8 param_2)

{
  long *plVar1;
  undefined8 *puStack_90;
  undefined8 *puStack_88;
  int aiStack_80 [2];
  undefined8 *puStack_78;
  int aiStack_70 [2];
  undefined8 *puStack_68;
  undefined8 **ppuStack_60;
  long *plStack_58;
  undefined1 *puStack_50;
  undefined4 **ppuStack_48;
  int *piStack_40;
  undefined8 uStack_38;
  
  func_0x000109884c0c(&ppuStack_60,param_1 + 1,*param_1);
  func_0x000109884820(&puStack_88,&ppuStack_60,*param_1);
  if (ppuStack_60 != (undefined8 **)0x0) {
    (*(code *)**ppuStack_60)();
  }
  (**(code **)(*(long *)*param_1 + 0x30))(&puStack_90);
  plVar1 = (long *)*param_1;
  FUN_10a37eda4(aiStack_70,plVar1,param_2);
  uStack_38 = 1;
  piStack_40 = aiStack_70;
  (**(code **)(*plVar1 + 0x58))(plVar1);
  ppuStack_60 = &puStack_88;
  ppuStack_48 = &piStack_40;
  plStack_58 = plVar1;
  puStack_50 = (undefined1 *)&puStack_90;
  func_0x0001098960c0(aiStack_80);
  if ((3 < aiStack_80[0]) && (puStack_78 != (undefined8 *)0x0)) {
    (**(code **)*puStack_78)();
  }
  if ((3 < aiStack_70[0]) && (puStack_68 != (undefined8 *)0x0)) {
    (**(code **)*puStack_68)();
  }
  if (puStack_90 != (undefined8 *)0x0) {
    (**(code **)*puStack_90)();
  }
  if (puStack_88 != (undefined8 *)0x0) {
    (**(code **)*puStack_88)();
  }
  return;
}



/* Entry: 10a37eda4; end: 10a37ee27;  */

void FUN_10a37eda4(undefined8 param_1,undefined8 *param_2)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  undefined8 uStack_30;
  long *plStack_28;
  
  plStack_28 = (long *)param_2[1];
  uStack_30 = *param_2;
  if (param_2[1] != 0) {
    plVar1 = (long *)(param_2[1] + 8);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = *plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  FUN_10a052f68(param_1,&uStack_30);
  plVar1 = plStack_28;
  if (plStack_28 != (long *)0x0) {
    plVar2 = plStack_28 + 1;
    do {
      lVar5 = *plVar2;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar4) {
        *plVar2 = lVar5 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar5 == 0) {
      (**(code **)(*plStack_28 + 0x10))(plStack_28);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar1);
    }
  }
  return;
}



/* Entry: 10a37ee28; end: 10a37ee37;  */

void FUN_10a37ee28(long param_1)

{
  undefined8 *puVar1;
  long *plVar2;
  undefined8 *puStack_90;
  undefined8 *puStack_88;
  int aiStack_80 [2];
  undefined8 *puStack_78;
  int aiStack_70 [2];
  undefined8 *puStack_68;
  undefined8 **ppuStack_60;
  long *plStack_58;
  undefined1 *puStack_50;
  undefined4 **ppuStack_48;
  int *piStack_40;
  undefined8 uStack_38;
  
  puVar1 = *(undefined8 **)(param_1 + 0x10);
  func_0x000109884c0c(&ppuStack_60,puVar1 + 1,*puVar1);
  func_0x000109884820(&puStack_88,&ppuStack_60,*puVar1);
  if (ppuStack_60 != (undefined8 **)0x0) {
    (*(code *)**ppuStack_60)();
  }
  (**(code **)(*(long *)*puVar1 + 0x30))(&puStack_90);
  plVar2 = (long *)*puVar1;
  FUN_10a37eda4(aiStack_70,plVar2,param_1 + 0x20);
  uStack_38 = 1;
  piStack_40 = aiStack_70;
  (**(code **)(*plVar2 + 0x58))(plVar2);
  ppuStack_60 = &puStack_88;
  ppuStack_48 = &piStack_40;
  plStack_58 = plVar2;
  puStack_50 = (undefined1 *)&puStack_90;
  func_0x0001098960c0(aiStack_80);
  if ((3 < aiStack_80[0]) && (puStack_78 != (undefined8 *)0x0)) {
    (**(code **)*puStack_78)();
  }
  if ((3 < aiStack_70[0]) && (puStack_68 != (undefined8 *)0x0)) {
    (**(code **)*puStack_68)();
  }
  if (puStack_90 != (undefined8 *)0x0) {
    (**(code **)*puStack_90)();
  }
  if (puStack_88 != (undefined8 *)0x0) {
    (**(code **)*puStack_88)();
  }
  return;
}



/* Entry: 10a37ee38; end: 10a37ee5f;  */

long FUN_10a37ee38(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  FUN_10a37eea0(param_1 + 0x18);
  plVar5 = *(long **)(param_1 + 0x10);
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
  return param_1 + 8;
}



/* Entry: 10a37ee60; end: 10a37ee9f;  */

void FUN_10a37ee60(undefined8 *param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined8 uVar5;
  
  *param_1 = &PTR_FUN_110bc7600;
  uVar5 = *(undefined8 *)(param_2 + 8);
  param_1[2] = *(undefined8 *)(param_2 + 0x10);
  param_1[1] = uVar5;
  *(undefined8 *)(param_2 + 8) = 0;
  *(undefined8 *)(param_2 + 0x10) = 0;
  lVar4 = *(long *)(param_2 + 0x20);
  uVar5 = *(undefined8 *)(param_2 + 0x18);
  param_1[4] = *(undefined8 *)(param_2 + 0x20);
  param_1[3] = uVar5;
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



/* Entry: 10a37eea0; end: 10a37ef77;  */

long FUN_10a37eea0(long param_1)

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



/* Entry: 10a37ef78; end: 10a37f02f;  */

void FUN_10a37ef78(undefined8 *param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined8 uVar5;
  
  *param_1 = &PTR_DAT_110bc7618;
  uVar5 = *(undefined8 *)(param_2 + 8);
  param_1[2] = *(undefined8 *)(param_2 + 0x10);
  param_1[1] = uVar5;
  lVar4 = *(long *)(param_2 + 0x18);
  param_1[3] = lVar4;
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
  lVar4 = *(long *)(param_2 + 0x28);
  uVar5 = *(undefined8 *)(param_2 + 0x20);
  param_1[5] = *(undefined8 *)(param_2 + 0x28);
  param_1[4] = uVar5;
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



/* Entry: 10a37f030; end: 10a37f19f;  */

void FUN_10a37f030(undefined8 param_1,long param_2)

{
  long *plVar1;
  long *plVar2;
  undefined8 uVar3;
  char cVar4;
  bool bVar5;
  undefined8 **ppuVar6;
  long lVar7;
  undefined8 *puVar8;
  undefined8 uStack_d8;
  undefined8 *apuStack_d0 [7];
  undefined8 uStack_98;
  long *plStack_90;
  undefined8 uStack_88;
  undefined8 *apuStack_80 [7];
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar8 = *(undefined8 **)(param_2 + 0x10);
  uVar3 = *puVar8;
  uStack_d8 = puVar8[1];
  (**(code **)(puVar8[2] + 0x18))(apuStack_d0);
  plStack_90 = (long *)puVar8[10];
  uStack_98 = puVar8[9];
  if (puVar8[10] != 0) {
    plVar1 = (long *)(puVar8[10] + 8);
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar5) {
        *plVar1 = *plVar1 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  uStack_88 = puVar8[0xb];
  (**(code **)(puVar8[0xc] + 0x18))(apuStack_80,puVar8 + 0xc);
  FUN_10a340648(uVar3,param_1,&uStack_d8);
  (*(code *)*apuStack_80[0])(apuStack_80);
  plVar1 = plStack_90;
  if (plStack_90 != (long *)0x0) {
    plVar2 = plStack_90 + 1;
    do {
      lVar7 = *plVar2;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar5) {
        *plVar2 = lVar7 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar7 == 0) {
      (**(code **)(*plStack_90 + 0x10))(plStack_90);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar1);
    }
  }
  ppuVar6 = apuStack_d0;
  (*(code *)*apuStack_d0[0])();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  (*(code *)*apuStack_80[0])(apuStack_80);
  func_0x00010a07a8a8(&uStack_98);
  (*(code *)*apuStack_d0[0])(apuStack_d0);
  __Unwind_Resume();
  puVar8 = ppuVar6[1];
  if (puVar8 != (undefined8 *)0x0) {
    (**(code **)puVar8[0xc])();
    func_0x00010a07a8a8(puVar8 + 9);
    (**(code **)puVar8[2])();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(puVar8);
    return;
  }
  return;
}



/* Entry: 10a37f1a0; end: 10a37f1f7;  */

void FUN_10a37f1a0(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 8);
  if (lVar1 != 0) {
    (*(code *)**(undefined8 **)(lVar1 + 0x60))();
    func_0x00010a07a8a8(lVar1 + 0x48);
    (*(code *)**(undefined8 **)(lVar1 + 0x10))();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(lVar1);
    return;
  }
  return;
}



/* Entry: 10a37f1f8; end: 10a37f20f;  */

void FUN_10a37f1f8(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_2[1] = 0;
  return;
}



/* Entry: 10a37f210; end: 10a37f2ff;  */

void FUN_10a37f210(undefined8 *param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  
  puVar6 = *(undefined8 **)(param_2 + 8);
  *param_1 = &PTR_FUN_110bc7638;
  puVar4 = (undefined8 *)0x98;
  __Znwm();
  *puVar4 = *puVar6;
  puVar4[1] = puVar6[1];
  (**(code **)(puVar6[2] + 0x18))(puVar4 + 2);
  lVar5 = puVar6[10];
  uVar7 = puVar6[9];
  puVar4[10] = puVar6[10];
  puVar4[9] = uVar7;
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
  puVar4[0xb] = puVar6[0xb];
  (**(code **)(puVar6[0xc] + 0x18))(puVar4 + 0xc,puVar6 + 0xc);
  param_1[1] = puVar4;
  return;
}



/* Entry: 10a37f300; end: 10a37f707;  */

long * FUN_10a37f300(long *param_1,undefined8 param_2,long *param_3)

{
  ulong uVar1;
  code *pcVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  long *plVar10;
  long *plVar11;
  long *plVar12;
  long *plVar13;
  long *unaff_x25;
  ulong uVar14;
  
  plVar8 = param_1;
  func_0x000107c2b05c();
  plVar13 = (long *)param_1[1];
  if (plVar13 != (long *)0x0) {
    uVar14 = (long)plVar13 - 1;
    if (((ulong)plVar13 & uVar14) == 0) {
      unaff_x25 = (long *)(uVar14 & (ulong)plVar8);
    }
    else {
      unaff_x25 = plVar8;
      if (plVar13 <= plVar8) {
        uVar1 = 0;
        if (plVar13 != (long *)0x0) {
          uVar1 = (ulong)plVar8 / (ulong)plVar13;
        }
        unaff_x25 = (long *)((long)plVar8 - uVar1 * (long)plVar13);
      }
    }
    plVar5 = *(long **)(*param_1 + (long)unaff_x25 * 8);
    if (plVar5 != (long *)0x0) {
      for (plVar5 = (long *)*plVar5; plVar5 != (long *)0x0; plVar5 = (long *)*plVar5) {
        plVar6 = (long *)plVar5[1];
        if (plVar6 == plVar8) {
          plVar6 = param_1;
          func_0x000107c2b068(param_1,plVar5 + 2,param_2);
          if (((ulong)plVar6 & 1) != 0) {
            return plVar5;
          }
        }
        else {
          if (((ulong)plVar13 & uVar14) == 0) {
            plVar6 = (long *)((ulong)plVar6 & uVar14);
          }
          else if (plVar13 <= plVar6) {
            uVar1 = 0;
            if (plVar13 != (long *)0x0) {
              uVar1 = (ulong)plVar6 / (ulong)plVar13;
            }
            plVar6 = (long *)((long)plVar6 - uVar1 * (long)plVar13);
          }
          if (plVar6 != unaff_x25) break;
        }
      }
    }
  }
  plVar5 = (long *)0x40;
  __Znwm();
  *plVar5 = 0;
  plVar5[1] = (long)plVar8;
  if (*(char *)((long)param_3 + 0x17) < '\0') {
    func_0x000107c3192c(plVar5 + 2,*param_3,param_3[1]);
  }
  else {
    lVar3 = *param_3;
    plVar5[3] = param_3[1];
    plVar5[2] = lVar3;
    plVar5[4] = param_3[2];
  }
  plVar5[5] = 0;
  plVar5[6] = 0;
  plVar5[7] = 0;
  if ((plVar13 != (long *)0x0) &&
     ((float)(param_1[3] + 1) <= *(float *)(param_1 + 4) * (float)plVar13)) goto LAB_10a37f618;
  uVar14 = 1;
  if ((long *)0x2 < plVar13) {
    uVar14 = (ulong)(((ulong)plVar13 & (long)plVar13 - 1U) != 0);
  }
  plVar6 = (long *)(uVar14 | (long)plVar13 << 1);
  plVar13 = (long *)(long)((float)(param_1[3] + 1) / *(float *)(param_1 + 4));
  if (plVar6 <= plVar13) {
    plVar6 = plVar13;
  }
  if ((long)plVar6 - 1U == 0) {
    plVar6 = (long *)0x2;
  }
  else if (((ulong)plVar6 & (long)plVar6 - 1U) != 0) {
    __ZNSt3__112__next_primeEm();
  }
  plVar13 = (long *)param_1[1];
  if (plVar13 < plVar6) {
LAB_10a37f4a0:
    if ((ulong)plVar6 >> 0x3d != 0) {
      func_0x000109ffded8();
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10a37f6f0);
      (*pcVar2)();
    }
    lVar3 = (long)plVar6 << 3;
    __Znwm();
    lVar4 = *param_1;
    *param_1 = lVar3;
    if (lVar4 != 0) {
      __ZdlPv();
    }
    plVar13 = (long *)0x0;
    param_1[1] = (long)plVar6;
    do {
      *(undefined8 *)(*param_1 + (long)plVar13 * 8) = 0;
      plVar13 = (long *)((long)plVar13 + 1);
    } while (plVar6 != plVar13);
    plVar7 = (long *)param_1[2];
    plVar13 = plVar6;
    if (plVar7 != (long *)0x0) {
      plVar9 = (long *)plVar7[1];
      uVar14 = (long)plVar6 - 1;
      if (((ulong)plVar6 & uVar14) == 0) {
        plVar9 = (long *)((ulong)plVar9 & uVar14);
      }
      else if (plVar6 <= plVar9) {
        uVar1 = 0;
        if (plVar6 != (long *)0x0) {
          uVar1 = (ulong)plVar9 / (ulong)plVar6;
        }
        plVar9 = (long *)((long)plVar9 - uVar1 * (long)plVar6);
      }
      *(long **)(*param_1 + (long)plVar9 * 8) = param_1 + 2;
      plVar10 = (long *)*plVar7;
      while (plVar10 != (long *)0x0) {
        plVar12 = (long *)plVar10[1];
        if (((ulong)plVar6 & uVar14) == 0) {
          plVar12 = (long *)((ulong)plVar12 & uVar14);
        }
        else if (plVar6 <= plVar12) {
          uVar1 = 0;
          if (plVar6 != (long *)0x0) {
            uVar1 = (ulong)plVar12 / (ulong)plVar6;
          }
          plVar12 = (long *)((long)plVar12 - uVar1 * (long)plVar6);
        }
        plVar11 = plVar10;
        if (plVar12 != plVar9) {
          lVar3 = *param_1;
          if (*(long *)(lVar3 + (long)plVar12 * 8) == 0) {
            *(long **)(lVar3 + (long)plVar12 * 8) = plVar7;
            plVar9 = plVar12;
          }
          else {
            *plVar7 = *plVar10;
            *plVar10 = **(undefined8 **)(lVar3 + (long)plVar12 * 8);
            **(long **)(lVar3 + (long)plVar12 * 8) = (long)plVar10;
            plVar11 = plVar7;
          }
        }
        plVar7 = plVar11;
        plVar10 = (long *)*plVar11;
      }
    }
  }
  else if (plVar6 < plVar13) {
    plVar7 = (long *)(long)((float)(ulong)param_1[3] / *(float *)(param_1 + 4));
    if ((plVar13 < (long *)0x3) || (((ulong)plVar13 & (long)plVar13 - 1U) != 0)) {
      __ZNSt3__112__next_primeEm();
    }
    else if ((long *)0x1 < plVar7) {
      plVar7 = (long *)(1L << (-LZCOUNT((long)plVar7 + -1) & 0x3fU));
    }
    if (plVar6 <= plVar7) {
      plVar6 = plVar7;
    }
    if (plVar6 < plVar13) {
      if (plVar6 != (long *)0x0) goto LAB_10a37f4a0;
      lVar3 = *param_1;
      *param_1 = 0;
      if (lVar3 != 0) {
        __ZdlPv();
      }
      param_1[1] = 0;
      plVar13 = (long *)0x0;
    }
    else {
      plVar13 = (long *)param_1[1];
    }
  }
  if (((ulong)plVar13 & (long)plVar13 - 1U) == 0) {
    unaff_x25 = (long *)((long)plVar13 - 1U & (ulong)plVar8);
  }
  else {
    unaff_x25 = plVar8;
    if (plVar13 <= plVar8) {
      uVar14 = 0;
      if (plVar13 != (long *)0x0) {
        uVar14 = (ulong)plVar8 / (ulong)plVar13;
      }
      unaff_x25 = (long *)((long)plVar8 - uVar14 * (long)plVar13);
    }
  }
LAB_10a37f618:
  lVar3 = *param_1;
  plVar8 = *(long **)(lVar3 + (long)unaff_x25 * 8);
  if (plVar8 == (long *)0x0) {
    plVar8 = param_1 + 2;
    *plVar5 = *plVar8;
    *plVar8 = (long)plVar5;
    *(long **)(lVar3 + (long)unaff_x25 * 8) = plVar8;
    if (*plVar5 != 0) {
      plVar8 = *(long **)(*plVar5 + 8);
      if (((ulong)plVar13 & (long)plVar13 - 1U) == 0) {
        plVar8 = (long *)((ulong)plVar8 & (long)plVar13 - 1U);
      }
      else if (plVar13 <= plVar8) {
        uVar14 = 0;
        if (plVar13 != (long *)0x0) {
          uVar14 = (ulong)plVar8 / (ulong)plVar13;
        }
        plVar8 = (long *)((long)plVar8 - uVar14 * (long)plVar13);
      }
      *(long **)(*param_1 + (long)plVar8 * 8) = plVar5;
    }
  }
  else {
    *plVar5 = *plVar8;
    *plVar8 = (long)plVar5;
  }
  param_1[3] = param_1[3] + 1;
  return plVar5;
}



/* Entry: 10a37f708; end: 10a37f74f;  */

void FUN_10a37f708(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
    if ((char)param_1[2] == '\x01') {
      func_0x00010a35537c(lVar1 + 0x10);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(lVar1);
    return;
  }
  return;
}



/* Entry: 10a37f750; end: 10a37fbbb;  */

long * FUN_10a37f750(long param_1,long param_2)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long lVar4;
  long *plVar5;
  long unaff_x19;
  undefined8 *puVar6;
  undefined8 *puVar7;
  long *plVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lStack_f8;
  long *plStack_f0;
  undefined8 auStack_e8 [2];
  char cStack_d1;
  undefined8 auStack_d0 [2];
  char cStack_b9;
  undefined8 uStack_b8;
  char cStack_a1;
  undefined1 auStack_98 [8];
  undefined8 *apuStack_90 [7];
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar3 = *(long **)(param_2 + 0x20);
  plVar5 = plVar3;
  if ((plVar3 != (long *)0x0) &&
     (__ZNSt3__119__shared_weak_count4lockEv(), plVar5 = plVar3, unaff_x19 = param_2,
     plStack_f0 = plVar3, plVar3 != (long *)0x0)) {
    lStack_f8 = *(long *)(param_2 + 0x18);
    if (lStack_f8 != 0) {
      plVar8 = *(long **)(*(long *)(param_2 + 0x10) + 0x18);
      plVar5 = plVar8 + 1;
      lVar9 = *plVar8;
      param_2 = lVar9 + 0x118;
      FUN_10a37f300(param_2,plVar5,plVar5);
      lVar4 = *(long *)(*(long *)(lVar9 + 0x100) + 0x100);
      if (((uint)*(undefined8 *)(*(long *)(lVar4 + 0x1a8) + 0x10) >> 1 & 1) == 0) {
        FUN_10a296138(auStack_98,lVar4,&UNK_10f651b03,0x20);
        if (*(long *)(param_1 + 0x28) == 0) {
          if (*(char *)(param_1 + 0x18) == '\x01') {
            lVar4 = (long)*(char *)((long)plVar8 + 0x1f);
            if (lVar4 < 0) {
              plVar5 = (long *)plVar8[1];
              lVar4 = plVar8[2];
            }
            FUN_10a0f2510(plVar5,lVar4);
            puVar7 = auStack_d0;
            FUN_10a0ff18c(puVar7,param_1,2);
            puVar6 = (undefined8 *)plVar8[5];
            if ((undefined8 *)plVar8[5] == (undefined8 *)0x0) {
              __ZNSt3__16chrono12steady_clock3nowEv();
              puVar6 = puVar7;
            }
            lVar11 = plVar8[4];
            lVar4 = *(long *)(lVar9 + 0x100);
            func_0x000107c2b054(auStack_e8,&UNK_10f651b24);
            if (lVar4 != 0) {
              FUN_10a76bf18((double)((long)puVar6 - lVar11) / 1000000000.0,
                            *(undefined8 *)(lVar4 + 0x8d8),auStack_e8);
            }
            if (cStack_d1 < '\0') {
              __ZdlPv(auStack_e8[0]);
            }
            puVar6 = *(undefined8 **)(param_2 + 0x30);
            for (puVar7 = *(undefined8 **)(param_2 + 0x28); puVar7 != puVar6; puVar7 = puVar7 + 0x12
                ) {
              (*(code *)*puVar7)(auStack_d0,plVar5,0,puVar7);
            }
            if (cStack_a1 < '\0') {
              __ZdlPv(uStack_b8);
            }
            if (cStack_b9 < '\0') {
              __ZdlPv(auStack_d0[0]);
            }
          }
          else {
            lVar9 = *(long *)(param_2 + 0x30);
            for (lVar4 = *(long *)(param_2 + 0x28); lVar4 != lVar9; lVar4 = lVar4 + 0x90) {
              puVar7 = *(undefined8 **)(lVar4 + 0x40);
              func_0x000107c2b054(auStack_d0,&UNK_10f651b7f);
              if (puVar7 == (undefined8 *)0x0 || *(char *)(puVar7 + 8) != '\x02') {
                if (puVar7 != (undefined8 *)0x0 && *(char *)(puVar7 + 8) == '\x01') {
                  (*(code *)*puVar7)(auStack_d0,puVar7);
                }
              }
              else {
                FUN_10a05aad0(puVar7,auStack_d0);
              }
              if (cStack_b9 < '\0') {
                __ZdlPv(auStack_d0[0]);
              }
            }
          }
        }
        else {
          lVar11 = plVar8[5];
          if (plVar8[5] == 0) {
            __ZNSt3__16chrono12steady_clock3nowEv();
            lVar11 = lVar4;
          }
          lVar10 = plVar8[4];
          lVar4 = *(long *)(lVar9 + 0x100);
          func_0x000107c2b054(auStack_d0,&UNK_10f651b24);
          if (lVar4 != 0) {
            FUN_10a76bf18((double)(lVar11 - lVar10) / 1000000000.0,*(undefined8 *)(lVar4 + 0x8d8),
                          auStack_d0);
          }
          if (cStack_b9 < '\0') {
            __ZdlPv(auStack_d0[0]);
          }
          lVar9 = *(long *)(param_2 + 0x30);
          for (lVar4 = *(long *)(param_2 + 0x28); lVar4 != lVar9; lVar4 = lVar4 + 0x90) {
            if (*(char *)(*(long *)(lVar4 + 0x58) + 8) == '\x01') {
              (**(code **)(lVar4 + 0x50))(param_1 + 0x20);
            }
            else {
              puVar7 = *(undefined8 **)(lVar4 + 0x40);
              func_0x000107c2b054(auStack_d0,&UNK_10f651b4d);
              if (puVar7 == (undefined8 *)0x0 || *(char *)(puVar7 + 8) != '\x02') {
                if ((puVar7 != (undefined8 *)0x0) && (*(char *)(puVar7 + 8) == '\x01')) {
                  (*(code *)*puVar7)(auStack_d0,puVar7);
                }
              }
              else {
                FUN_10a05aad0(puVar7,auStack_d0);
              }
              if (cStack_b9 < '\0') {
                __ZdlPv(auStack_d0[0]);
              }
            }
            plVar3 = plStack_f0;
          }
        }
        FUN_10a352278(param_2 + 0x28,*(undefined8 *)(param_2 + 0x28));
        FUN_10a044790(auStack_98);
        (*(code *)*apuStack_90[0])(apuStack_90);
        plVar5 = (long *)(param_2 + 0x28);
        FUN_10a352278(plVar5,*(undefined8 *)(param_2 + 0x28));
        unaff_x19 = param_2;
        if (plVar3 == (long *)0x0) goto LAB_10a37fad8;
      }
      else {
        plVar5 = (long *)(param_2 + 0x28);
        FUN_10a352278(plVar5,*(undefined8 *)(param_2 + 0x28));
      }
    }
    plVar8 = plVar3 + 1;
    do {
      lVar4 = *plVar8;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar2) {
        *plVar8 = lVar4 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    unaff_x19 = param_2;
    if (lVar4 == 0) {
      (**(code **)(*plVar3 + 0x10))(plVar3);
      __ZNSt3__119__shared_weak_count14__release_weakEv();
      plVar5 = plVar3;
    }
  }
LAB_10a37fad8:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_58) {
    ___stack_chk_fail();
    if (cStack_d1 < '\0') {
      __ZdlPv(auStack_e8[0]);
    }
    FUN_10a0ff214(auStack_d0);
    FUN_10a044790(auStack_98);
    (*(code *)*apuStack_90[0])(apuStack_90);
    FUN_10a352278(unaff_x19 + 0x28,*(undefined8 *)(unaff_x19 + 0x28));
    func_0x00010a05a86c(&lStack_f8);
    __Unwind_Resume();
    plVar3 = (long *)plVar5[3];
    if (plVar3 != (long *)0x0) {
      __ZNSt3__119__shared_weak_count4lockEv();
      if (plVar3 != (long *)0x0) {
        if (plVar5[2] != 0) {
          FUN_10a05c0fc(plVar5[2],plVar5[1]);
        }
        plVar8 = plVar3 + 1;
        do {
          lVar4 = *plVar8;
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(plVar8,0x10);
          if (bVar2) {
            *plVar8 = lVar4 + -1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
        if (lVar4 == 0) {
          (**(code **)(*plVar3 + 0x10))(plVar3);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar3);
        }
      }
      if (plVar5[3] != 0) {
        __ZNSt3__119__shared_weak_count14__release_weakEv();
      }
    }
    return plVar5 + 1;
  }
  return plVar5;
}



/* Entry: 10a37fbbc; end: 10a37fbe7;  */

undefined8 * FUN_10a37fbbc(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  
  plVar4 = *(long **)(param_1 + 0x18);
  if (plVar4 != (long *)0x0) {
    __ZNSt3__119__shared_weak_count4lockEv();
    if (plVar4 != (long *)0x0) {
      if (*(long *)(param_1 + 0x10) != 0) {
        FUN_10a05c0fc(*(long *)(param_1 + 0x10),*(undefined8 *)(param_1 + 8));
      }
      plVar1 = plVar4 + 1;
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
        (**(code **)(*plVar4 + 0x10))(plVar4);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
      }
    }
    if (*(long *)(param_1 + 0x18) != 0) {
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
  }
  return (undefined8 *)(param_1 + 8);
}



/* Entry: 10a37fbe8; end: 10a37fc3f;  */

long FUN_10a37fbe8(long param_1)

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



/* Entry: 10a37fc40; end: 10a37fc4f;  */

void FUN_10a37fc40(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110bc8098;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10a37fc50; end: 10a37fc6f;  */

void FUN_10a37fc50(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110bc8098;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a37fc70; end: 10a37fc7f;  */

void FUN_10a37fc70(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010a37fc78. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 10a37fc80; end: 10a38004f;  */

void FUN_10a37fc80(undefined1 *param_1,code **param_2)

{
  long *plVar1;
  undefined ***pppuVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  code **ppcVar6;
  code **ppcVar7;
  code *pcVar8;
  long *plVar9;
  code **ppcVar10;
  undefined ***pppuVar11;
  undefined ***pppuVar12;
  code **ppcVar13;
  code **ppcVar14;
  long lVar15;
  undefined **ppuVar16;
  code **unaff_x21;
  code *unaff_x22;
  code *pcVar17;
  undefined8 *puStack_1f0;
  undefined8 *puStack_1e8;
  int aiStack_1e0 [2];
  undefined8 *puStack_1d8;
  int aiStack_1d0 [2];
  undefined8 *puStack_1c8;
  undefined8 **ppuStack_1c0;
  undefined **ppuStack_1b8;
  undefined1 *puStack_1b0;
  int **ppiStack_1a8;
  int *piStack_1a0;
  undefined8 uStack_198;
  code *pcStack_190;
  code **ppcStack_188;
  code **ppcStack_180;
  undefined ***pppuStack_178;
  undefined1 **ppuStack_170;
  code *pcStack_168;
  code *pcStack_158;
  undefined ***pppuStack_150;
  code *pcStack_148;
  undefined ***pppuStack_140;
  code *pcStack_138;
  undefined **ppuStack_130;
  code *pcStack_128;
  code *pcStack_120;
  code *pcStack_118;
  undefined ***pppuStack_110;
  long lStack_f8;
  code *pcStack_f0;
  code **ppcStack_e8;
  undefined1 *puStack_e0;
  code **ppcStack_d8;
  undefined1 *puStack_d0;
  code *pcStack_c8;
  code *pcStack_c0;
  code **ppcStack_b8;
  code *pcStack_b0;
  long *plStack_a8;
  char cStack_99;
  code *pcStack_98;
  long *plStack_90;
  undefined1 auStack_88 [8];
  code *apcStack_80 [7];
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppcVar6 = (code **)param_2[4];
  ppcVar7 = ppcVar6;
  ppcVar13 = param_2;
  if ((ppcVar6 != (code **)0x0) &&
     (__ZNSt3__119__shared_weak_count4lockEv(), ppcVar7 = ppcVar6, unaff_x21 = param_2,
     ppcStack_b8 = ppcVar6, ppcVar6 != (code **)0x0)) {
    pcStack_c0 = param_2[3];
    if (pcStack_c0 != (code *)0x0) {
      param_2 = *(code ***)(param_2[2] + 0x18);
      unaff_x22 = *param_2;
      ppcVar7 = *(code ***)(*(long *)(unaff_x22 + 0x100) + 0x100);
      if (((uint)*(undefined8 *)(ppcVar7[0x35] + 0x10) >> 1 & 1) == 0) {
        FUN_10a296138(auStack_88,ppcVar7,&UNK_10f651ba8,0x1e);
        if (param_1[0x48] == '\x01') {
          func_0x000107c2b054(&pcStack_b0,&UNK_10f64efef);
          pcVar17 = (code *)(param_1 + 0x18);
          FUN_10a00d0e0(&pcStack_98,pcVar17,param_2 + 3,&pcStack_b0);
          if (cStack_99 < '\0') {
            pcVar17 = pcStack_b0;
            __ZdlPv(pcStack_b0);
          }
          pcVar8 = param_2[2];
          if (param_2[2] == (code *)0x0) {
            __ZNSt3__16chrono12steady_clock3nowEv();
            pcVar8 = pcVar17;
          }
          pcVar17 = param_2[1];
          lVar15 = *(long *)(unaff_x22 + 0x100);
          ppcVar13 = (code **)&UNK_10f651bc7;
          func_0x000107c2b054(&pcStack_b0);
          if (lVar15 != 0) {
            ppcVar13 = &pcStack_b0;
            FUN_10a76bf18((double)((long)pcVar8 - (long)pcVar17) / 1000000000.0,
                          *(undefined8 *)(lVar15 + 0x8d8));
          }
          if (cStack_99 < '\0') {
            __ZdlPv(pcStack_b0);
          }
          plVar9 = plStack_90;
          pcVar17 = pcStack_98;
          pcStack_b0 = pcStack_98;
          plStack_a8 = plStack_90;
          pcStack_98 = (code *)0x0;
          plStack_90 = (long *)0x0;
          if (99 < *(int *)(*(long *)(*(long *)(unaff_x22 + 0x100) + 0x100) + 0x288)) {
            pcVar8 = (code *)0x38;
            __Znwm();
            *(undefined8 *)(pcVar8 + 0x20) = 0;
            *(undefined8 *)(pcVar8 + 0x18) = 0;
            *(undefined8 *)(pcVar8 + 0x10) = 0;
            *(undefined8 *)(pcVar8 + 8) = 0;
            *(undefined ***)pcVar8 = &PTR_DAT_110baea40;
            *(code **)(pcVar8 + 0x28) = pcVar17;
            *(long **)(pcVar8 + 0x30) = plVar9;
            pcStack_b0 = (code *)0x0;
            plStack_a8 = (long *)0x0;
            plVar9 = (long *)0x20;
            __Znwm();
            *plVar9 = (long)&PTR_FUN_110bb2238;
            plVar9[1] = 0;
            plVar9[2] = 0;
            plVar9[3] = (long)pcVar8;
            pcStack_b0 = pcVar8;
            plStack_a8 = plVar9;
          }
          ppcVar7 = (code **)param_2[6];
          if ((ppcVar7 == (code **)0x0) || (*(code *)(ppcVar7 + 8) != (code)0x2)) {
            if ((ppcVar7 != (code **)0x0) && (*(code *)(ppcVar7 + 8) == (code)0x1)) {
              (**ppcVar7)(&pcStack_b0);
              ppcVar13 = ppcVar7;
            }
          }
          else {
            ppcVar13 = &pcStack_b0;
            FUN_10a380050(ppcVar7);
          }
          plVar9 = plStack_a8;
          if (plStack_a8 != (long *)0x0) {
            plVar1 = plStack_a8 + 1;
            do {
              lVar15 = *plVar1;
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
              if (bVar4) {
                *plVar1 = lVar15 + -1;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
            if (lVar15 == 0) {
              (**(code **)(*plStack_a8 + 0x10))(plStack_a8);
              __ZNSt3__119__shared_weak_count14__release_weakEv(plVar9);
            }
          }
          plVar9 = plStack_90;
          ppcVar6 = ppcStack_b8;
          if (plStack_90 != (long *)0x0) {
            plVar1 = plStack_90 + 1;
            do {
              lVar15 = *plVar1;
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
              if (bVar4) {
                *plVar1 = lVar15 + -1;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
            if (lVar15 == 0) {
              (**(code **)(*plStack_90 + 0x10))(plStack_90);
              __ZNSt3__119__shared_weak_count14__release_weakEv(plVar9);
              ppcVar6 = ppcStack_b8;
            }
          }
        }
        else {
          ppcVar7 = (code **)param_2[8];
          ppcVar13 = (code **)&UNK_10f651bee;
          func_0x000107c2b054(&pcStack_b0);
          if (ppcVar7 == (code **)0x0 || *(code *)(ppcVar7 + 8) != (code)0x2) {
            if (ppcVar7 != (code **)0x0 && *(code *)(ppcVar7 + 8) == (code)0x1) {
              (**ppcVar7)(&pcStack_b0);
              ppcVar13 = ppcVar7;
            }
          }
          else {
            ppcVar13 = &pcStack_b0;
            FUN_10a05aad0(ppcVar7);
          }
          if (cStack_99 < '\0') {
            __ZdlPv(pcStack_b0);
          }
        }
        param_1 = auStack_88;
        FUN_10a044790(auStack_88);
        ppcVar7 = apcStack_80;
        (**(code **)apcStack_80[0])();
        unaff_x21 = param_2;
        if (ppcVar6 == (code **)0x0) goto LAB_10a37ff78;
      }
    }
    ppcVar10 = ppcVar6 + 1;
    do {
      pcVar17 = *ppcVar10;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(ppcVar10,0x10);
      if (bVar4) {
        *ppcVar10 = pcVar17 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    unaff_x21 = param_2;
    if (pcVar17 == (code *)0x0) {
      (**(code **)(*ppcVar6 + 0x10))(ppcVar6);
      __ZNSt3__119__shared_weak_count14__release_weakEv();
      ppcVar7 = ppcVar6;
    }
  }
LAB_10a37ff78:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010a1f32ac(param_1);
  func_0x00010a1f6f04(&pcStack_b0);
  func_0x00010a36fe78(&pcStack_98);
  FUN_10a044790(auStack_88);
  (**(code **)apcStack_80[0])(apcStack_80);
  func_0x00010a05a86c(&pcStack_c0);
  ppcVar10 = ppcVar7;
  __Unwind_Resume();
  pcStack_c8 = FUN_10a380050;
  lStack_f8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppcVar6 = ppcVar10;
  ppcVar14 = ppcVar13;
  pcStack_f0 = unaff_x22;
  ppcStack_e8 = unaff_x21;
  puStack_e0 = auStack_88;
  ppcStack_d8 = ppcVar7;
  puStack_d0 = &stack0xfffffffffffffff0;
  FUN_10a688b40();
  if (ppcVar6 == (code **)0x0) {
    ppcVar7 = (code **)0x0;
    pppuStack_178 = (undefined ***)0x0;
    if (ppcVar14 != (code **)0x0) {
      pcStack_120 = ppcVar10[1];
      pcStack_128 = *ppcVar10;
      if (ppcVar10[1] != (code *)0x0) {
        pcVar17 = ppcVar10[1] + 8;
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(pcVar17,0x10);
          if (bVar4) {
            *(long *)pcVar17 = *(long *)pcVar17 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
      pcStack_148 = *ppcVar13;
      pppuVar11 = (undefined ***)ppcVar13[1];
      if (pppuVar11 != (undefined ***)0x0) {
        pppuVar12 = pppuVar11 + 1;
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(pppuVar12,0x10);
          if (bVar4) {
            *pppuVar12 = (undefined **)((long)*pppuVar12 + 1);
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
      pcStack_138 = FUN_10a38046c;
      ppuStack_130 = &PTR_FUN_110bc7670;
      pcStack_158 = (code *)0x0;
      pppuStack_150 = (undefined ***)0x0;
      if (pppuVar11 != (undefined ***)0x0) {
        pppuVar12 = pppuVar11 + 1;
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(pppuVar12,0x10);
          if (bVar4) {
            *pppuVar12 = (undefined **)((long)*pppuVar12 + 1);
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
      ppcVar6 = &pcStack_158;
      ppcVar10 = &pcStack_138;
      ppcVar7 = &pcStack_138;
      pppuStack_140 = pppuVar11;
      pcStack_118 = pcStack_148;
      pppuStack_110 = pppuVar11;
      FUN_10a4634ec(ppcVar14,ppcVar7);
      pppuVar12 = &ppuStack_130;
      (*(code *)*ppuStack_130)();
      if (pppuVar11 != (undefined ***)0x0) {
        pppuVar2 = pppuVar11 + 1;
        do {
          ppuVar16 = *pppuVar2;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(pppuVar2,0x10);
          if (bVar4) {
            *pppuVar2 = (undefined **)((long)ppuVar16 + -1);
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (ppuVar16 == (undefined **)0x0) {
          (*(code *)(*pppuVar11)[2])(pppuVar11);
          __ZNSt3__119__shared_weak_count14__release_weakEv();
          pppuVar12 = pppuVar11;
        }
      }
      pppuVar11 = pppuStack_150;
      pppuStack_178 = pppuVar12;
      if (pppuStack_150 != (undefined ***)0x0) {
        pppuVar12 = pppuStack_150 + 1;
        do {
          ppuVar16 = *pppuVar12;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(pppuVar12,0x10);
          if (bVar4) {
            *pppuVar12 = (undefined **)((long)ppuVar16 + -1);
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (ppuVar16 == (undefined **)0x0) {
          (*(code *)(*pppuStack_150)[2])(pppuStack_150);
          __ZNSt3__119__shared_weak_count14__release_weakEv();
          pppuStack_178 = pppuVar11;
        }
      }
    }
  }
  else {
    *ppcVar6 = (code *)CONCAT44((int)((ulong)*ppcVar6 >> 0x20) + 1,(int)*ppcVar6 + 1);
    pppuVar11 = (undefined ***)*ppcVar10;
    FUN_10a380240(pppuVar11,ppcVar13);
    iVar5 = *(int *)((long)ppcVar6 + 4) + -1;
    *(int *)((long)ppcVar6 + 4) = iVar5;
    pppuStack_178 = pppuVar11;
    ppcVar7 = ppcVar13;
    if (iVar5 == 0) {
      *(undefined4 *)ppcVar6 = 0;
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_f8) {
    return;
  }
  ___stack_chk_fail();
  (*(code *)*ppuStack_130)(ppcVar10 + 1);
  func_0x00010a1f6f04(ppcVar6 + 2);
  func_0x00010a004dac(&pcStack_158);
  pppuVar11 = pppuStack_178;
  __Unwind_Resume();
  pcStack_168 = FUN_10a380240;
  pcStack_190 = unaff_x22;
  ppcStack_188 = ppcVar10;
  ppcStack_180 = ppcVar6;
  ppuStack_170 = &puStack_d0;
  func_0x000109884c0c(&ppuStack_1c0,pppuVar11 + 1,*pppuVar11);
  func_0x000109884820(&puStack_1e8,&ppuStack_1c0,*pppuVar11);
  if (ppuStack_1c0 != (undefined8 **)0x0) {
    (*(code *)**ppuStack_1c0)();
  }
  (**(code **)(**pppuVar11 + 0x30))(&puStack_1f0);
  ppuVar16 = *pppuVar11;
  FUN_10a3803d0(aiStack_1d0,ppuVar16,ppcVar7);
  uStack_198 = 1;
  piStack_1a0 = aiStack_1d0;
  (**(code **)(*ppuVar16 + 0x58))(ppuVar16);
  ppuStack_1c0 = &puStack_1e8;
  ppiStack_1a8 = &piStack_1a0;
  ppuStack_1b8 = ppuVar16;
  puStack_1b0 = (undefined1 *)&puStack_1f0;
  func_0x0001098960c0(aiStack_1e0);
  if ((3 < aiStack_1e0[0]) && (puStack_1d8 != (undefined8 *)0x0)) {
    (**(code **)*puStack_1d8)();
  }
  if ((3 < aiStack_1d0[0]) && (puStack_1c8 != (undefined8 *)0x0)) {
    (**(code **)*puStack_1c8)();
  }
  if (puStack_1f0 != (undefined8 *)0x0) {
    (**(code **)*puStack_1f0)();
  }
  if (puStack_1e8 != (undefined8 *)0x0) {
    (**(code **)*puStack_1e8)();
  }
  return;
}



/* Entry: 10a380050; end: 10a38023f;  */

void FUN_10a380050(code **param_1,code **param_2)

{
  code *pcVar1;
  undefined ***pppuVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  code **ppcVar6;
  undefined ***pppuVar7;
  undefined ***pppuVar8;
  code **ppcVar9;
  code **ppcVar10;
  undefined **ppuVar11;
  undefined8 *puStack_130;
  undefined8 *puStack_128;
  int aiStack_120 [2];
  undefined8 *puStack_118;
  int aiStack_110 [2];
  undefined8 *puStack_108;
  undefined8 **ppuStack_100;
  undefined **ppuStack_f8;
  undefined1 *puStack_f0;
  int **ppiStack_e8;
  int *piStack_e0;
  undefined8 uStack_d8;
  code *pcStack_98;
  undefined ***pppuStack_90;
  code *pcStack_88;
  undefined ***pppuStack_80;
  code *pcStack_78;
  undefined **ppuStack_70;
  code *pcStack_68;
  code *pcStack_60;
  code *pcStack_58;
  undefined ***pppuStack_50;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppcVar6 = param_1;
  ppcVar9 = param_2;
  FUN_10a688b40();
  if (ppcVar6 == (code **)0x0) {
    ppcVar10 = (code **)0x0;
    pppuVar7 = (undefined ***)0x0;
    if (ppcVar9 != (code **)0x0) {
      pcStack_60 = param_1[1];
      pcStack_68 = *param_1;
      if (param_1[1] != (code *)0x0) {
        pcVar1 = param_1[1] + 8;
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(pcVar1,0x10);
          if (bVar4) {
            *(long *)pcVar1 = *(long *)pcVar1 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
      pcStack_88 = *param_2;
      pppuVar8 = (undefined ***)param_2[1];
      if (pppuVar8 != (undefined ***)0x0) {
        pppuVar7 = pppuVar8 + 1;
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(pppuVar7,0x10);
          if (bVar4) {
            *pppuVar7 = (undefined **)((long)*pppuVar7 + 1);
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
      pcStack_78 = FUN_10a38046c;
      ppuStack_70 = &PTR_FUN_110bc7670;
      pcStack_98 = (code *)0x0;
      pppuStack_90 = (undefined ***)0x0;
      if (pppuVar8 != (undefined ***)0x0) {
        pppuVar7 = pppuVar8 + 1;
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(pppuVar7,0x10);
          if (bVar4) {
            *pppuVar7 = (undefined **)((long)*pppuVar7 + 1);
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
      ppcVar6 = &pcStack_98;
      param_1 = &pcStack_78;
      ppcVar10 = &pcStack_78;
      pppuStack_80 = pppuVar8;
      pcStack_58 = pcStack_88;
      pppuStack_50 = pppuVar8;
      FUN_10a4634ec(ppcVar9,ppcVar10);
      pppuVar7 = &ppuStack_70;
      (*(code *)*ppuStack_70)();
      if (pppuVar8 != (undefined ***)0x0) {
        pppuVar2 = pppuVar8 + 1;
        do {
          ppuVar11 = *pppuVar2;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(pppuVar2,0x10);
          if (bVar4) {
            *pppuVar2 = (undefined **)((long)ppuVar11 + -1);
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (ppuVar11 == (undefined **)0x0) {
          (*(code *)(*pppuVar8)[2])(pppuVar8);
          __ZNSt3__119__shared_weak_count14__release_weakEv();
          pppuVar7 = pppuVar8;
        }
      }
      pppuVar8 = pppuStack_90;
      if (pppuStack_90 != (undefined ***)0x0) {
        pppuVar2 = pppuStack_90 + 1;
        do {
          ppuVar11 = *pppuVar2;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(pppuVar2,0x10);
          if (bVar4) {
            *pppuVar2 = (undefined **)((long)ppuVar11 + -1);
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (ppuVar11 == (undefined **)0x0) {
          (*(code *)(*pppuStack_90)[2])(pppuStack_90);
          __ZNSt3__119__shared_weak_count14__release_weakEv();
          pppuVar7 = pppuVar8;
        }
      }
    }
  }
  else {
    *ppcVar6 = (code *)CONCAT44((int)((ulong)*ppcVar6 >> 0x20) + 1,(int)*ppcVar6 + 1);
    pppuVar7 = (undefined ***)*param_1;
    FUN_10a380240(pppuVar7,param_2);
    iVar5 = *(int *)((long)ppcVar6 + 4) + -1;
    *(int *)((long)ppcVar6 + 4) = iVar5;
    ppcVar10 = param_2;
    if (iVar5 == 0) {
      *(undefined4 *)ppcVar6 = 0;
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return;
  }
  ___stack_chk_fail();
  (*(code *)*ppuStack_70)(param_1 + 1);
  func_0x00010a1f6f04(ppcVar6 + 2);
  func_0x00010a004dac(&pcStack_98);
  __Unwind_Resume();
  func_0x000109884c0c(&ppuStack_100,pppuVar7 + 1,*pppuVar7);
  func_0x000109884820(&puStack_128,&ppuStack_100,*pppuVar7);
  if (ppuStack_100 != (undefined8 **)0x0) {
    (*(code *)**ppuStack_100)();
  }
  (**(code **)(**pppuVar7 + 0x30))(&puStack_130);
  ppuVar11 = *pppuVar7;
  FUN_10a3803d0(aiStack_110,ppuVar11,ppcVar10);
  uStack_d8 = 1;
  piStack_e0 = aiStack_110;
  (**(code **)(*ppuVar11 + 0x58))(ppuVar11);
  ppuStack_100 = &puStack_128;
  ppiStack_e8 = &piStack_e0;
  ppuStack_f8 = ppuVar11;
  puStack_f0 = (undefined1 *)&puStack_130;
  func_0x0001098960c0(aiStack_120);
  if ((3 < aiStack_120[0]) && (puStack_118 != (undefined8 *)0x0)) {
    (**(code **)*puStack_118)();
  }
  if ((3 < aiStack_110[0]) && (puStack_108 != (undefined8 *)0x0)) {
    (**(code **)*puStack_108)();
  }
  if (puStack_130 != (undefined8 *)0x0) {
    (**(code **)*puStack_130)();
  }
  if (puStack_128 != (undefined8 *)0x0) {
    (**(code **)*puStack_128)();
  }
  return;
}



/* Entry: 10a380240; end: 10a3803cf;  */

void FUN_10a380240(undefined8 *param_1,undefined8 param_2)

{
  long *plVar1;
  undefined8 *puStack_90;
  undefined8 *puStack_88;
  int aiStack_80 [2];
  undefined8 *puStack_78;
  int aiStack_70 [2];
  undefined8 *puStack_68;
  undefined8 **ppuStack_60;
  long *plStack_58;
  undefined1 *puStack_50;
  undefined4 **ppuStack_48;
  int *piStack_40;
  undefined8 uStack_38;
  
  func_0x000109884c0c(&ppuStack_60,param_1 + 1,*param_1);
  func_0x000109884820(&puStack_88,&ppuStack_60,*param_1);
  if (ppuStack_60 != (undefined8 **)0x0) {
    (*(code *)**ppuStack_60)();
  }
  (**(code **)(*(long *)*param_1 + 0x30))(&puStack_90);
  plVar1 = (long *)*param_1;
  FUN_10a3803d0(aiStack_70,plVar1,param_2);
  uStack_38 = 1;
  piStack_40 = aiStack_70;
  (**(code **)(*plVar1 + 0x58))(plVar1);
  ppuStack_60 = &puStack_88;
  ppuStack_48 = &piStack_40;
  plStack_58 = plVar1;
  puStack_50 = (undefined1 *)&puStack_90;
  func_0x0001098960c0(aiStack_80);
  if ((3 < aiStack_80[0]) && (puStack_78 != (undefined8 *)0x0)) {
    (**(code **)*puStack_78)();
  }
  if ((3 < aiStack_70[0]) && (puStack_68 != (undefined8 *)0x0)) {
    (**(code **)*puStack_68)();
  }
  if (puStack_90 != (undefined8 *)0x0) {
    (**(code **)*puStack_90)();
  }
  if (puStack_88 != (undefined8 *)0x0) {
    (**(code **)*puStack_88)();
  }
  return;
}



/* Entry: 10a3803d0; end: 10a38046b;  */

void FUN_10a3803d0(undefined8 param_1,undefined8 *param_2)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  undefined **ppuStack_38;
  undefined8 uStack_30;
  long *plStack_28;
  
  plStack_28 = (long *)param_2[1];
  uStack_30 = *param_2;
  if (param_2[1] != 0) {
    plVar1 = (long *)(param_2[1] + 8);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = *plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  ppuStack_38 = &PTR_DAT_110c5ef50;
  func_0x000109899de4(param_1,&uStack_30,&ppuStack_38,0,0);
  plVar1 = plStack_28;
  if (plStack_28 != (long *)0x0) {
    plVar2 = plStack_28 + 1;
    do {
      lVar5 = *plVar2;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar4) {
        *plVar2 = lVar5 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar5 == 0) {
      (**(code **)(*plStack_28 + 0x10))(plStack_28);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar1);
    }
  }
  return;
}



/* Entry: 10a38046c; end: 10a38047b;  */

void FUN_10a38046c(long param_1)

{
  undefined8 *puVar1;
  long *plVar2;
  undefined8 *puStack_90;
  undefined8 *puStack_88;
  int aiStack_80 [2];
  undefined8 *puStack_78;
  int aiStack_70 [2];
  undefined8 *puStack_68;
  undefined8 **ppuStack_60;
  long *plStack_58;
  undefined1 *puStack_50;
  undefined4 **ppuStack_48;
  int *piStack_40;
  undefined8 uStack_38;
  
  puVar1 = *(undefined8 **)(param_1 + 0x10);
  func_0x000109884c0c(&ppuStack_60,puVar1 + 1,*puVar1);
  func_0x000109884820(&puStack_88,&ppuStack_60,*puVar1);
  if (ppuStack_60 != (undefined8 **)0x0) {
    (*(code *)**ppuStack_60)();
  }
  (**(code **)(*(long *)*puVar1 + 0x30))(&puStack_90);
  plVar2 = (long *)*puVar1;
  FUN_10a3803d0(aiStack_70,plVar2,param_1 + 0x20);
  uStack_38 = 1;
  piStack_40 = aiStack_70;
  (**(code **)(*plVar2 + 0x58))(plVar2);
  ppuStack_60 = &puStack_88;
  ppuStack_48 = &piStack_40;
  plStack_58 = plVar2;
  puStack_50 = (undefined1 *)&puStack_90;
  func_0x0001098960c0(aiStack_80);
  if ((3 < aiStack_80[0]) && (puStack_78 != (undefined8 *)0x0)) {
    (**(code **)*puStack_78)();
  }
  if ((3 < aiStack_70[0]) && (puStack_68 != (undefined8 *)0x0)) {
    (**(code **)*puStack_68)();
  }
  if (puStack_90 != (undefined8 *)0x0) {
    (**(code **)*puStack_90)();
  }
  if (puStack_88 != (undefined8 *)0x0) {
    (**(code **)*puStack_88)();
  }
  return;
}



/* Entry: 10a38047c; end: 10a3804a3;  */

long FUN_10a38047c(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  func_0x00010a1f6f04(param_1 + 0x18);
  plVar5 = *(long **)(param_1 + 0x10);
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
  return param_1 + 8;
}



/* Entry: 10a3804a4; end: 10a38050f;  */

void FUN_10a3804a4(undefined8 *param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined8 uVar5;
  
  *param_1 = &PTR_FUN_110bc7670;
  uVar5 = *(undefined8 *)(param_2 + 8);
  param_1[2] = *(undefined8 *)(param_2 + 0x10);
  param_1[1] = uVar5;
  *(undefined8 *)(param_2 + 8) = 0;
  *(undefined8 *)(param_2 + 0x10) = 0;
  lVar4 = *(long *)(param_2 + 0x20);
  uVar5 = *(undefined8 *)(param_2 + 0x18);
  param_1[4] = *(undefined8 *)(param_2 + 0x20);
  param_1[3] = uVar5;
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



/* Entry: 10a380510; end: 10a3808d7;  */

undefined8 ** FUN_10a380510(long param_1,long param_2)

{
  undefined8 **ppuVar1;
  char cVar2;
  bool bVar3;
  undefined8 **ppuVar4;
  undefined8 **ppuVar5;
  undefined8 *puVar6;
  long *plVar7;
  undefined8 *puVar8;
  long lVar9;
  long *plVar10;
  long lVar11;
  long lVar12;
  long lStack_c0;
  undefined8 **ppuStack_b8;
  undefined8 *puStack_b0;
  long *plStack_a8;
  char cStack_99;
  undefined8 *puStack_98;
  long *plStack_90;
  undefined1 auStack_88 [8];
  undefined8 *apuStack_80 [7];
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar4 = *(undefined8 ***)(param_2 + 0x20);
  ppuVar5 = ppuVar4;
  if ((ppuVar4 != (undefined8 **)0x0) &&
     (__ZNSt3__119__shared_weak_count4lockEv(), ppuVar5 = ppuVar4, ppuStack_b8 = ppuVar4,
     ppuVar4 != (undefined8 **)0x0)) {
    lStack_c0 = *(long *)(param_2 + 0x18);
    if (lStack_c0 != 0) {
      plVar10 = *(long **)(*(long *)(param_2 + 0x10) + 0x18);
      lVar11 = *plVar10;
      ppuVar5 = *(undefined8 ***)(*(long *)(lVar11 + 0x100) + 0x100);
      if (((uint)ppuVar5[0x35][2] >> 1 & 1) == 0) {
        FUN_10a296138(auStack_88,ppuVar5,&UNK_10f651c27,0x1e);
        if (*(char *)(param_1 + 0x48) == '\x01') {
          func_0x000107c2b054(&puStack_b0,&UNK_10f64efef);
          puVar8 = (undefined8 *)(param_1 + 0x18);
          FUN_10a00d0e0(&puStack_98,puVar8,plVar10 + 3,&puStack_b0);
          if (cStack_99 < '\0') {
            puVar8 = puStack_b0;
            __ZdlPv(puStack_b0);
          }
          puVar6 = (undefined8 *)plVar10[2];
          if ((undefined8 *)plVar10[2] == (undefined8 *)0x0) {
            __ZNSt3__16chrono12steady_clock3nowEv();
            puVar6 = puVar8;
          }
          lVar12 = plVar10[1];
          lVar9 = *(long *)(lVar11 + 0x100);
          func_0x000107c2b054(&puStack_b0,&UNK_10f651c46);
          if (lVar9 != 0) {
            FUN_10a76bf18((double)((long)puVar6 - lVar12) / 1000000000.0,
                          *(undefined8 *)(lVar9 + 0x8d8),&puStack_b0);
          }
          if (cStack_99 < '\0') {
            __ZdlPv(puStack_b0);
          }
          plVar7 = plStack_90;
          puVar8 = puStack_98;
          puStack_b0 = puStack_98;
          plStack_a8 = plStack_90;
          puStack_98 = (undefined8 *)0x0;
          plStack_90 = (long *)0x0;
          if (99 < *(int *)(*(long *)(*(long *)(lVar11 + 0x100) + 0x100) + 0x288)) {
            puVar6 = (undefined8 *)0x38;
            __Znwm();
            puVar6[4] = 0;
            puVar6[3] = 0;
            puVar6[2] = 0;
            puVar6[1] = 0;
            *puVar6 = &PTR_DAT_110baea40;
            puVar6[5] = puVar8;
            puVar6[6] = plVar7;
            puStack_b0 = (undefined8 *)0x0;
            plStack_a8 = (long *)0x0;
            plVar7 = (long *)0x20;
            __Znwm();
            *plVar7 = (long)&PTR_FUN_110bb2238;
            plVar7[1] = 0;
            plVar7[2] = 0;
            plVar7[3] = (long)puVar6;
            puStack_b0 = puVar6;
            plStack_a8 = plVar7;
          }
          puVar8 = (undefined8 *)plVar10[6];
          if (puVar8 != (undefined8 *)0x0) {
            if (*(char *)(puVar8 + 8) == '\x01') {
              (*(code *)*puVar8)(&puStack_b0,puVar8);
            }
            else if (*(char *)(puVar8 + 8) == '\x02') {
              FUN_10a380050(puVar8,&puStack_b0);
            }
          }
          plVar10 = plStack_a8;
          if (plStack_a8 != (long *)0x0) {
            plVar7 = plStack_a8 + 1;
            do {
              lVar11 = *plVar7;
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(plVar7,0x10);
              if (bVar3) {
                *plVar7 = lVar11 + -1;
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
            if (lVar11 == 0) {
              (**(code **)(*plStack_a8 + 0x10))(plStack_a8);
              __ZNSt3__119__shared_weak_count14__release_weakEv(plVar10);
            }
          }
          plVar10 = plStack_90;
          ppuVar4 = ppuStack_b8;
          if (plStack_90 != (long *)0x0) {
            plVar7 = plStack_90 + 1;
            do {
              lVar11 = *plVar7;
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(plVar7,0x10);
              if (bVar3) {
                *plVar7 = lVar11 + -1;
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
            if (lVar11 == 0) {
              (**(code **)(*plStack_90 + 0x10))(plStack_90);
              __ZNSt3__119__shared_weak_count14__release_weakEv(plVar10);
              ppuVar4 = ppuStack_b8;
            }
          }
        }
        else {
          puVar8 = (undefined8 *)plVar10[8];
          if (puVar8 != (undefined8 *)0x0) {
            func_0x000107c2b054(&puStack_b0,&UNK_10f651c6d);
            if (*(char *)(puVar8 + 8) == '\x01') {
              (*(code *)*puVar8)(&puStack_b0,puVar8);
            }
            else if (*(char *)(puVar8 + 8) == '\x02') {
              FUN_10a05aad0(puVar8,&puStack_b0);
            }
            if (cStack_99 < '\0') {
              __ZdlPv(puStack_b0);
            }
          }
        }
        FUN_10a044790(auStack_88);
        ppuVar5 = apuStack_80;
        (*(code *)*apuStack_80[0])();
        if (ppuVar4 == (undefined8 **)0x0) goto LAB_10a380800;
      }
    }
    ppuVar1 = ppuVar4 + 1;
    do {
      puVar8 = *ppuVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(ppuVar1,0x10);
      if (bVar3) {
        *ppuVar1 = (undefined8 *)((long)puVar8 + -1);
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (puVar8 == (undefined8 *)0x0) {
      (*(code *)(*ppuVar4)[2])(ppuVar4);
      __ZNSt3__119__shared_weak_count14__release_weakEv();
      ppuVar5 = ppuVar4;
    }
  }
LAB_10a380800:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_48) {
    ___stack_chk_fail();
    func_0x00010a1f6f04(&puStack_b0);
    func_0x00010a36fe78(&puStack_98);
    FUN_10a044790(auStack_88);
    (*(code *)*apuStack_80[0])(apuStack_80);
    func_0x00010a05a86c(&lStack_c0);
    __Unwind_Resume();
    plVar10 = ppuVar5[3];
    if (plVar10 != (long *)0x0) {
      __ZNSt3__119__shared_weak_count4lockEv();
      if (plVar10 != (long *)0x0) {
        if (ppuVar5[2] != (undefined8 *)0x0) {
          FUN_10a05c0fc(ppuVar5[2],ppuVar5[1]);
        }
        plVar7 = plVar10 + 1;
        do {
          lVar11 = *plVar7;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar7,0x10);
          if (bVar3) {
            *plVar7 = lVar11 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar11 == 0) {
          (**(code **)(*plVar10 + 0x10))(plVar10);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar10);
        }
      }
      if (ppuVar5[3] != (undefined8 *)0x0) {
        __ZNSt3__119__shared_weak_count14__release_weakEv();
      }
    }
    return ppuVar5 + 1;
  }
  return ppuVar5;
}



/* Entry: 10a3808d8; end: 10a380903;  */

undefined8 * FUN_10a3808d8(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  
  plVar4 = *(long **)(param_1 + 0x18);
  if (plVar4 != (long *)0x0) {
    __ZNSt3__119__shared_weak_count4lockEv();
    if (plVar4 != (long *)0x0) {
      if (*(long *)(param_1 + 0x10) != 0) {
        FUN_10a05c0fc(*(long *)(param_1 + 0x10),*(undefined8 *)(param_1 + 8));
      }
      plVar1 = plVar4 + 1;
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
        (**(code **)(*plVar4 + 0x10))(plVar4);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
      }
    }
    if (*(long *)(param_1 + 0x18) != 0) {
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
  }
  return (undefined8 *)(param_1 + 8);
}



/* Entry: 10a380904; end: 10a380cf3;  */

/* WARNING: Possible PIC construction at 0x00010a380ce8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010a380cec) */
/* WARNING: Removing unreachable block (ram,0x00010a380d0c) */
/* WARNING: Removing unreachable block (ram,0x00010a380d1c) */
/* WARNING: Removing unreachable block (ram,0x00010a380d44) */
/* WARNING: Removing unreachable block (ram,0x00010a380d50) */
/* WARNING: Removing unreachable block (ram,0x00010a380e68) */
/* WARNING: Removing unreachable block (ram,0x00010a380da4) */
/* WARNING: Removing unreachable block (ram,0x00010a380dbc) */
/* WARNING: Removing unreachable block (ram,0x00010a380dfc) */
/* WARNING: Removing unreachable block (ram,0x00010a380e04) */
/* WARNING: Removing unreachable block (ram,0x00010a380e1c) */
/* WARNING: Removing unreachable block (ram,0x00010a380e20) */
/* WARNING: Removing unreachable block (ram,0x00010a380e28) */
/* WARNING: Removing unreachable block (ram,0x00010a380e30) */
/* WARNING: Removing unreachable block (ram,0x00010a380e34) */
/* WARNING: Removing unreachable block (ram,0x00010a380e4c) */
/* WARNING: Removing unreachable block (ram,0x00010a380d38) */

void FUN_10a380904(undefined8 param_1,long *param_2,undefined8 param_3,int *param_4,ulong param_5)

{
  undefined1 *puVar1;
  int *piVar2;
  ulong *puVar3;
  int *piVar4;
  char cVar5;
  bool bVar6;
  int iVar7;
  byte bVar8;
  code *pcVar9;
  long lVar10;
  long *plVar11;
  long *plVar12;
  long *plVar13;
  ulong uVar14;
  ulong uVar15;
  long *unaff_x19;
  long *unaff_x20;
  undefined8 unaff_x21;
  long lVar16;
  long unaff_x22;
  long lVar17;
  long lVar18;
  long lVar19;
  ulong unaff_x23;
  ulong uVar20;
  long lVar21;
  ulong unaff_x24;
  ulong uVar22;
  int *unaff_x25;
  undefined8 unaff_x26;
  undefined8 unaff_x27;
  undefined8 unaff_x28;
  undefined1 *unaff_x29;
  undefined8 unaff_x30;
  long *plStack_f0;
  ulong uStack_e8;
  int iStack_e0;
  undefined8 *puStack_d8;
  byte bStack_d0;
  int aiStack_c8 [2];
  undefined8 *puStack_c0;
  ulong uStack_b8;
  int aiStack_b0 [2];
  undefined8 *puStack_a8;
  undefined1 uStack_a0;
  ulong uStack_98;
  int aiStack_90 [2];
  undefined8 *puStack_88;
  char cStack_80;
  undefined1 auStack_78 [24];
  byte bStack_60;
  long lStack_58;
  
  puVar1 = &stack0xfffffffffffffff0;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar11 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar11[0x59] < 8) {
    plVar11[plVar11[0x59] + 0x4e] = plVar11[0x5a];
    plVar11[0x59] = plVar11[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar11 + 0x4b);
  }
  plVar12 = param_2;
  FUN_10a380cf4(param_2,param_3);
  FUN_10a055264(param_5);
  aiStack_c8[0] = 0;
  piVar2 = aiStack_c8;
  piVar4 = piVar2;
  if (param_5 != 0) {
    piVar4 = param_4;
  }
  func_0x00010a0580bc(auStack_78,param_2,piVar4);
  piVar4 = piVar2;
  if (1 < param_5) {
    piVar4 = param_4 + 4;
  }
  plVar13 = param_2;
  func_0x00010a058028(&uStack_e8,param_2,piVar4);
  bVar8 = bStack_d0;
  iVar7 = iStack_e0;
  uVar22 = 0;
  uStack_b8 = uStack_b8 & 0xffffffffffffff00;
  uStack_a0 = 0;
  uVar20 = (ulong)bStack_d0;
  if (bStack_d0 == 1) {
    uStack_b8 = uStack_e8;
    aiStack_b0[0] = iStack_e0;
    if (iStack_e0 == 3) {
      puStack_a8 = puStack_d8;
    }
    else if (iStack_e0 == 2) {
      puStack_a8 = (undefined8 *)CONCAT71(puStack_a8._1_7_,puStack_d8._0_1_);
    }
    else if (3 < iStack_e0) {
      puStack_a8 = puStack_d8;
      puStack_d8 = (undefined8 *)0x0;
    }
    iStack_e0 = 0;
    uStack_a0 = 1;
    uVar22 = (ulong)(3 < iVar7);
  }
  FUN_10a3c8488();
  if ((int)plVar13[3] < 0x135) {
    FUN_10a345c64(plVar12);
    lVar17 = plVar12[0x28];
    uStack_98 = uStack_98 & 0xffffffffffffff00;
    cStack_80 = 0;
    if (bVar8 != 0) {
      uStack_98 = uStack_b8;
      func_0x0001098849a4(aiStack_90,uStack_b8,aiStack_b0);
    }
    cStack_80 = bVar8 != 0;
    FUN_10a00bcd0(&plStack_f0,lVar17,auStack_78,&uStack_98);
    if (((cStack_80 == '\x01') && (3 < aiStack_90[0])) && (puStack_88 != (undefined8 *)0x0)) {
      (**(code **)*puStack_88)();
    }
    if ((((uint)uVar22 & (uint)bVar8) == 1) && (puStack_a8 != (undefined8 *)0x0)) {
      (**(code **)*puStack_a8)();
    }
    if (((bStack_d0 == 1) && (3 < iStack_e0)) && (puStack_d8 != (undefined8 *)0x0)) {
      (**(code **)*puStack_d8)();
    }
    if ((ulong)bStack_60 < 3) {
      (*(code *)(&PTR_FUN_110b9ebd0)[bStack_60])(auStack_78);
      if ((3 < aiStack_c8[0]) && (puStack_c0 != (undefined8 *)0x0)) {
        (**(code **)*puStack_c0)();
      }
      FUN_10a05528c(param_1,param_2,&plStack_f0);
      plVar12 = plStack_f0;
      if (plStack_f0 != (long *)0x0) {
        puVar3 = (ulong *)(plStack_f0 + 1);
        do {
          uVar15 = *puVar3;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(puVar3,0x10);
          if (bVar6) {
            *puVar3 = uVar15 - 4;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if ((uVar15 & 0x1fffffffc) == 4) {
          do {
            uVar15 = *puVar3;
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(puVar3,0x10);
            if (bVar6) {
              *puVar3 = uVar15 - 1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (uVar15 - 1 == 0) {
            (**(code **)(*plStack_f0 + 8))();
            plVar12 = plStack_f0;
          }
        }
      }
      if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_58) {
        ___stack_chk_fail();
        if (((cStack_80 == '\x01') && (3 < aiStack_90[0])) && (puStack_88 != (undefined8 *)0x0)) {
          (**(code **)*puStack_88)();
        }
        if ((((uint)uVar22 & (uint)bVar8) == 1) && (puStack_a8 != (undefined8 *)0x0)) {
          (**(code **)*puStack_a8)();
        }
        if (((bStack_d0 == 1) && (3 < iStack_e0)) && (puStack_d8 != (undefined8 *)0x0)) {
          (**(code **)*puStack_d8)();
        }
        if (2 < (ulong)bStack_60) goto LAB_10a380cdc;
        (*(code *)(&PTR_FUN_110b9ebd0)[bStack_60])(auStack_78);
        if ((3 < aiStack_c8[0]) && (puStack_c0 != (undefined8 *)0x0)) {
          (**(code **)*puStack_c0)();
        }
        unaff_x30 = 0x10a380cec;
        register0x00000008 = (BADSPACEBASE *)&plStack_f0;
        unaff_x19 = plVar11;
        unaff_x20 = plVar12;
        unaff_x21 = param_1;
        unaff_x22 = lVar17;
        unaff_x23 = uVar20;
        unaff_x24 = uVar22;
        unaff_x25 = piVar2;
        unaff_x29 = puVar1;
      }
      plVar12 = plVar11 + 0x4b;
      lVar17 = plVar11[0x59];
      uVar20 = lVar17 - 1;
      plVar11[0x59] = uVar20;
      if (uVar20 < 8) {
        uVar20 = plVar12[lVar17 + 2];
        if (plVar11[0x5a] == uVar20) {
          return;
        }
      }
      else {
        uVar20 = *(ulong *)(plVar11[0x57] + -8);
        plVar11[0x57] = plVar11[0x57] + -8;
        if (plVar11[0x5a] == uVar20) {
          return;
        }
      }
      *(undefined8 *)((long)register0x00000008 + -0x60) = unaff_x28;
      *(undefined8 *)((long)register0x00000008 + -0x58) = unaff_x27;
      *(undefined8 *)((long)register0x00000008 + -0x50) = unaff_x26;
      *(int **)((long)register0x00000008 + -0x48) = unaff_x25;
      *(ulong *)((long)register0x00000008 + -0x40) = unaff_x24;
      *(ulong *)((long)register0x00000008 + -0x38) = unaff_x23;
      *(long *)((long)register0x00000008 + -0x30) = unaff_x22;
      *(undefined8 *)((long)register0x00000008 + -0x28) = unaff_x21;
      *(long **)((long)register0x00000008 + -0x20) = unaff_x20;
      *(long **)((long)register0x00000008 + -0x18) = unaff_x19;
      *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
      *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
      lVar17 = *plVar12;
      lVar19 = plVar11[0x4c];
      lVar16 = lVar19 - lVar17;
      uVar22 = lVar16 >> 4;
      if (uVar22 < uVar20) {
        uVar15 = uVar20 - uVar22;
        lVar21 = plVar11[0x4d];
        if ((ulong)(lVar21 - lVar19 >> 4) < uVar15) {
          if (uVar20 >> 0x3c == 0) {
            uVar14 = lVar21 - lVar17 >> 3;
            if (uVar14 <= uVar20) {
              uVar14 = uVar20;
            }
            if (0x7fffffffffffffef < (ulong)(lVar21 - lVar17)) {
              uVar14 = 0xfffffffffffffff;
            }
            *(long **)((long)register0x00000008 + -0x68) = plVar12;
            if (uVar14 >> 0x3c == 0) {
              lVar10 = uVar14 << 4;
              __Znwm();
              lVar19 = lVar10 + lVar16;
              _bzero(lVar19,uVar15 * 0x10);
              lVar18 = lVar19 + uVar22 * -0x10;
              _memcpy(lVar18,lVar17,lVar16);
              *plVar12 = lVar18;
              plVar11[0x4c] = lVar19 + uVar15 * 0x10;
              plVar11[0x4d] = lVar10 + uVar14 * 0x10;
              *(long *)((long)register0x00000008 + -0x78) = lVar17;
              *(long *)((long)register0x00000008 + -0x70) = lVar21;
              *(long *)((long)register0x00000008 + -0x88) = lVar17;
              *(long *)((long)register0x00000008 + -0x80) = lVar17;
              func_0x00010988c1b8((undefined1 *)((long)register0x00000008 + -0x88));
              goto code_r0x00010988c138;
            }
            func_0x000104c4f740();
          }
          else {
            func_0x00010988c1a4();
          }
                    /* WARNING: Does not return */
          pcVar9 = (code *)SoftwareBreakpoint(1,0x10988c16c);
          (*pcVar9)();
        }
        _bzero(lVar19,uVar15 * 0x10);
        plVar11[0x4c] = lVar19 + uVar15 * 0x10;
      }
      else if (uVar20 < uVar22) {
        lVar17 = lVar17 + uVar20 * 0x10;
        while (lVar19 != lVar17) {
          lVar19 = lVar19 + -0x10;
          func_0x00010988c204(lVar19);
        }
        plVar11[0x4c] = lVar17;
      }
code_r0x00010988c138:
      plVar11[0x5a] = uVar20;
      return;
    }
  }
  else {
    FUN_10a00946c(&UNK_10f6501ff);
  }
LAB_10a380cdc:
                    /* WARNING: Does not return */
  pcVar9 = (code *)SoftwareBreakpoint(1,0x10a380ce0);
  (*pcVar9)();
}



/* Entry: 10a380cf4; end: 10a380d5b;  */

void FUN_10a380cf4(undefined **param_1,undefined **param_2,undefined **param_3,undefined8 param_4)

{
  char cVar1;
  bool bVar2;
  code *pcVar3;
  long lVar4;
  undefined **ppuVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  ulong uVar9;
  undefined8 extraout_x8;
  ulong uVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  ulong uVar16;
  ulong uVar17;
  long lStack_a8;
  long lStack_a0;
  long lStack_98;
  long lStack_90;
  long *plStack_88;
  long *in_stack_ffffffffffffff80;
  undefined8 in_stack_ffffffffffffff88;
  long in_stack_ffffffffffffff98;
  
  ppuVar5 = param_1;
  func_0x000109898688();
  if (ppuVar5 != (undefined **)0x0) {
    FUN_10a053854(param_1,ppuVar5);
    param_2 = ppuVar5;
    if (param_1 != (undefined **)0x0) {
      param_2 = &PTR_DAT_110b178e0;
      param_3 = &PTR_DAT_110bc56b8;
      param_4 = 0x10;
      ___dynamic_cast();
      if (param_1 != (undefined **)0x0) {
        return;
      }
    }
    func_0x00010988bd28(&UNK_10f685496);
  }
  plVar6 = (long *)&UNK_10f68f52e;
  func_0x00010988bd28();
  plVar7 = plVar6;
  (**(code **)(*plVar6 + 0x58))();
  if ((ulong)plVar7[0x59] < 8) {
    plVar7[plVar7[0x59] + 0x4e] = plVar7[0x5a];
    plVar7[0x59] = plVar7[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar7 + 0x4b);
  }
  plVar8 = plVar6;
  FUN_10a380cf4(plVar6,param_2);
  FUN_10a0584c8(param_4);
  func_0x000109898570(&stack0xffffffffffffff88,plVar6,param_3);
  FUN_10a347380(&plStack_88,plVar8,&stack0xffffffffffffff88);
  if (in_stack_ffffffffffffff98 < 0) {
    __ZdlPv(in_stack_ffffffffffffff88);
  }
  FUN_10a059f1c(extraout_x8,plVar6,&plStack_88);
  if (in_stack_ffffffffffffff80 != (long *)0x0) {
    plVar6 = in_stack_ffffffffffffff80 + 1;
    do {
      lVar11 = *plVar6;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar2) {
        *plVar6 = lVar11 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar11 == 0) {
      (**(code **)(*in_stack_ffffffffffffff80 + 0x10))(in_stack_ffffffffffffff80);
      __ZNSt3__119__shared_weak_count14__release_weakEv(in_stack_ffffffffffffff80);
    }
  }
  plVar6 = plVar7 + 0x4b;
  lVar11 = plVar7[0x59];
  uVar9 = lVar11 - 1;
  plVar7[0x59] = uVar9;
  if (uVar9 < 8) {
    uVar9 = plVar6[lVar11 + 2];
    if (plVar7[0x5a] == uVar9) {
      return;
    }
  }
  else {
    uVar9 = *(ulong *)(plVar7[0x57] + -8);
    plVar7[0x57] = plVar7[0x57] + -8;
    if (plVar7[0x5a] == uVar9) {
      return;
    }
  }
  lVar11 = *plVar6;
  lVar14 = plVar7[0x4c];
  lVar12 = lVar14 - lVar11;
  uVar16 = lVar12 >> 4;
  if (uVar16 < uVar9) {
    uVar17 = uVar9 - uVar16;
    lVar15 = plVar7[0x4d];
    if ((ulong)(lVar15 - lVar14 >> 4) < uVar17) {
      if (uVar9 >> 0x3c == 0) {
        uVar10 = lVar15 - lVar11 >> 3;
        if (uVar10 <= uVar9) {
          uVar10 = uVar9;
        }
        if (0x7fffffffffffffef < (ulong)(lVar15 - lVar11)) {
          uVar10 = 0xfffffffffffffff;
        }
        plStack_88 = plVar6;
        if (uVar10 >> 0x3c == 0) {
          lVar4 = uVar10 << 4;
          __Znwm();
          lVar14 = lVar4 + lVar12;
          _bzero(lVar14,uVar17 * 0x10);
          lVar13 = lVar14 + uVar16 * -0x10;
          _memcpy(lVar13,lVar11,lVar12);
          *plVar6 = lVar13;
          plVar7[0x4c] = lVar14 + uVar17 * 0x10;
          plVar7[0x4d] = lVar4 + uVar10 * 0x10;
          lStack_a8 = lVar11;
          lStack_a0 = lVar11;
          lStack_98 = lVar11;
          lStack_90 = lVar15;
          func_0x00010988c1b8(&lStack_a8);
          goto code_r0x00010988c138;
        }
        func_0x000104c4f740();
      }
      else {
        func_0x00010988c1a4();
      }
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar3)();
    }
    _bzero(lVar14,uVar17 * 0x10);
    plVar7[0x4c] = lVar14 + uVar17 * 0x10;
  }
  else if (uVar9 < uVar16) {
    lVar11 = lVar11 + uVar9 * 0x10;
    while (lVar14 != lVar11) {
      lVar14 = lVar14 + -0x10;
      func_0x00010988c204(lVar14);
    }
    plVar7[0x4c] = lVar11;
  }
code_r0x00010988c138:
  plVar7[0x5a] = uVar9;
  return;
}



/* Entry: 10a380d5c; end: 10a380e9f;  */

void FUN_10a380d5c(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  char cVar1;
  bool bVar2;
  code *pcVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  ulong uVar14;
  ulong uVar15;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long *plStack_68;
  long *in_stack_ffffffffffffffa0;
  undefined8 in_stack_ffffffffffffffa8;
  long in_stack_ffffffffffffffb8;
  
  plVar5 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar5[0x59] < 8) {
    plVar5[plVar5[0x59] + 0x4e] = plVar5[0x5a];
    plVar5[0x59] = plVar5[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar5 + 0x4b);
  }
  plVar6 = param_2;
  FUN_10a380cf4(param_2,param_3);
  FUN_10a0584c8(param_5);
  func_0x000109898570(&stack0xffffffffffffffa8,param_2,param_4);
  FUN_10a347380(&plStack_68,plVar6,&stack0xffffffffffffffa8);
  if (in_stack_ffffffffffffffb8 < 0) {
    __ZdlPv(in_stack_ffffffffffffffa8);
  }
  FUN_10a059f1c(param_1,param_2,&plStack_68);
  if (in_stack_ffffffffffffffa0 != (long *)0x0) {
    plVar6 = in_stack_ffffffffffffffa0 + 1;
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
      (**(code **)(*in_stack_ffffffffffffffa0 + 0x10))(in_stack_ffffffffffffffa0);
      __ZNSt3__119__shared_weak_count14__release_weakEv(in_stack_ffffffffffffffa0);
    }
  }
  plVar6 = plVar5 + 0x4b;
  lVar9 = plVar5[0x59];
  uVar7 = lVar9 - 1;
  plVar5[0x59] = uVar7;
  if (uVar7 < 8) {
    uVar7 = plVar6[lVar9 + 2];
    if (plVar5[0x5a] == uVar7) {
      return;
    }
  }
  else {
    uVar7 = *(ulong *)(plVar5[0x57] + -8);
    plVar5[0x57] = plVar5[0x57] + -8;
    if (plVar5[0x5a] == uVar7) {
      return;
    }
  }
  lVar9 = *plVar6;
  lVar12 = plVar5[0x4c];
  lVar10 = lVar12 - lVar9;
  uVar14 = lVar10 >> 4;
  if (uVar14 < uVar7) {
    uVar15 = uVar7 - uVar14;
    lVar13 = plVar5[0x4d];
    if ((ulong)(lVar13 - lVar12 >> 4) < uVar15) {
      if (uVar7 >> 0x3c == 0) {
        uVar8 = lVar13 - lVar9 >> 3;
        if (uVar8 <= uVar7) {
          uVar8 = uVar7;
        }
        if (0x7fffffffffffffef < (ulong)(lVar13 - lVar9)) {
          uVar8 = 0xfffffffffffffff;
        }
        plStack_68 = plVar6;
        if (uVar8 >> 0x3c == 0) {
          lVar4 = uVar8 << 4;
          __Znwm();
          lVar12 = lVar4 + lVar10;
          _bzero(lVar12,uVar15 * 0x10);
          lVar11 = lVar12 + uVar14 * -0x10;
          _memcpy(lVar11,lVar9,lVar10);
          *plVar6 = lVar11;
          plVar5[0x4c] = lVar12 + uVar15 * 0x10;
          plVar5[0x4d] = lVar4 + uVar8 * 0x10;
          lStack_88 = lVar9;
          lStack_80 = lVar9;
          lStack_78 = lVar9;
          lStack_70 = lVar13;
          func_0x00010988c1b8(&lStack_88);
          goto code_r0x00010988c138;
        }
        func_0x000104c4f740();
      }
      else {
        func_0x00010988c1a4();
      }
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar3)();
    }
    _bzero(lVar12,uVar15 * 0x10);
    plVar5[0x4c] = lVar12 + uVar15 * 0x10;
  }
  else if (uVar7 < uVar14) {
    lVar9 = lVar9 + uVar7 * 0x10;
    while (lVar12 != lVar9) {
      lVar12 = lVar12 + -0x10;
      func_0x00010988c204(lVar12);
    }
    plVar5[0x4c] = lVar9;
  }
code_r0x00010988c138:
  plVar5[0x5a] = uVar7;
  return;
}



/* Entry: 10a380ea0; end: 10a38193b;  */

/* WARNING: Removing unreachable block (ram,0x00010a381454) */
/* WARNING: Removing unreachable block (ram,0x00010a3811c0) */
/* WARNING: Removing unreachable block (ram,0x00010a3811d0) */
/* WARNING: Removing unreachable block (ram,0x00010a381474) */

void FUN_10a380ea0(undefined8 param_1,long *param_2,undefined8 param_3,long param_4,
                  undefined8 param_5)

{
  byte bVar1;
  char cVar2;
  bool bVar3;
  undefined8 ******ppppppuVar4;
  ulong **ppuVar5;
  code *pcVar6;
  long lVar7;
  long *plVar8;
  long *plVar9;
  ulong uVar10;
  ulong **ppuVar11;
  long *plVar12;
  undefined8 *puVar13;
  undefined8 **ppuVar14;
  undefined *puVar15;
  ulong ***pppuVar16;
  undefined8 ***pppuVar17;
  ulong uVar18;
  ulong ***pppuVar19;
  long lVar20;
  long lVar21;
  ulong uVar22;
  long lVar23;
  long lVar24;
  undefined1 uVar25;
  ulong uVar26;
  ulong uVar27;
  undefined1 auStack_2a8 [8];
  undefined1 auStack_2a0 [8];
  undefined8 *****pppppuStack_298;
  ulong uStack_290;
  byte bStack_281;
  ulong **ppuStack_280;
  undefined8 *puStack_278;
  undefined8 *puStack_270;
  long lStack_268;
  undefined4 uStack_260;
  undefined8 *****pppppuStack_250;
  ulong uStack_248;
  byte bStack_239;
  undefined8 *****pppppuStack_238;
  ulong uStack_230;
  byte bStack_221;
  undefined8 *****pppppuStack_220;
  ulong uStack_218;
  byte bStack_209;
  undefined8 *puStack_208;
  undefined8 uStack_200;
  long lStack_1f8;
  undefined8 *puStack_1f0;
  long *plStack_1e8;
  undefined8 *puStack_1e0;
  ulong *puStack_1d0;
  ulong *puStack_1c8;
  ulong *puStack_1c0;
  long lStack_1b0;
  long *plStack_1a8;
  ulong *puStack_1a0;
  ulong *puStack_198;
  ulong *puStack_190;
  long lStack_180;
  undefined8 uStack_170;
  undefined1 uStack_160;
  char cStack_159;
  undefined8 uStack_158;
  char cStack_141;
  ulong **ppuStack_140;
  ulong uStack_138;
  undefined8 *puStack_130;
  long lStack_128;
  undefined4 uStack_120;
  ulong **ppuStack_110;
  undefined8 **ppuStack_108;
  undefined8 **ppuStack_100;
  byte bStack_f8;
  char cStack_f0;
  undefined8 **ppuStack_e0;
  undefined8 **ppuStack_d8;
  undefined8 **ppuStack_d0;
  byte bStack_c8;
  char cStack_c0;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar8 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar8[0x59] < 8) {
    plVar8[plVar8[0x59] + 0x4e] = plVar8[0x5a];
    plVar8[0x59] = plVar8[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar8 + 0x4b);
  }
  plVar9 = param_2;
  FUN_10a380cf4(param_2,param_3);
  FUN_10a38193c(param_5);
  func_0x000109898570(&pppppuStack_298,param_2,param_4);
  FUN_10a381960(auStack_2a8,param_2,param_4 + 0x10);
  if (*(int *)((long)plVar9 + 0x124) != 1) {
    uVar10 = plVar9[10];
    FUN_10a3df7b0(uVar10,2);
    if ((uVar10 & 1) != 0) goto LAB_10a380f70;
LAB_10a38172c:
    FUN_10a00946c(&UNK_10f65027a);
    goto LAB_10a3817c4;
  }
LAB_10a380f70:
  lStack_128 = 0;
  puStack_130 = (undefined8 *)0x0;
  uStack_138 = 0;
  ppuStack_140 = (ulong **)0x0;
  uStack_120 = 0x3f800000;
  puStack_1d0 = (ulong *)auStack_2a8;
  FUN_10a0512e4(&puStack_1a0,&puStack_1d0);
  func_0x00010a051364(&ppuStack_e0,&puStack_1d0);
  while( true ) {
    ppuVar11 = &puStack_1a0;
    func_0x00010937c708(ppuVar11,&ppuStack_e0);
    if ((int)ppuVar11 != 0) break;
    ppuVar11 = &puStack_1a0;
    func_0x00010937c560();
    bVar1 = *(byte *)ppuVar11;
    if ((4 < bVar1 || (1 << (ulong)(bVar1 & 0x1f) & 0x19U) == 0) && (3 < bVar1 - 5)) {
      ppuVar11 = &puStack_1a0;
      FUN_10a0513d8(ppuVar11);
      __ZNSt3__1plIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_12basic_stringIT_T0_T1_EEPKS6_RKS9_
                (&ppuStack_110,&UNK_10f63464f,ppuVar11);
      FUN_10a0029c0(&ppuStack_110);
      goto LAB_10a3817c4;
    }
    ppuVar11 = &puStack_1a0;
    func_0x00010937c560();
    if (*(char *)ppuVar11 == '\x03') {
      func_0x00010937c560(&puStack_1a0);
      func_0x00010937c804(&ppuStack_110);
      ppuVar11 = &puStack_1a0;
      FUN_10a0513d8();
      pppuVar16 = &ppuStack_140;
      ppuStack_280 = ppuVar11;
      FUN_109cf993c(pppuVar16,ppuVar11,&UNK_10dd5b8f9,&ppuStack_280,&puStack_1f0);
      if (*(char *)((long)pppuVar16 + 0x3f) < '\0') {
        __ZdlPv(pppuVar16[5]);
      }
      ppuVar11 = ppuStack_110;
      pppuVar16[6] = ppuStack_108;
      pppuVar16[5] = ppuVar11;
      pppuVar16[7] = ppuStack_100;
    }
    else {
      ppuVar11 = &puStack_1a0;
      func_0x00010937c560();
      if (*(byte *)ppuVar11 - 5 < 2) {
        func_0x00010937c560(&puStack_1a0);
        func_0x00010937ba88();
        uVar25 = SUB81(ppuStack_110,0);
        ppuVar11 = &puStack_1a0;
        FUN_10a0513d8();
        pppuVar16 = &ppuStack_140;
        ppuStack_110 = ppuVar11;
        FUN_109cf993c(pppuVar16,ppuVar11,&UNK_10dd5b8f9,&ppuStack_110,&ppuStack_280);
LAB_10a381168:
        if (*(char *)((long)pppuVar16 + 0x3f) < '\0') {
          pppuVar19 = (ulong ***)pppuVar16[5];
          pppuVar16[6] = (ulong **)0x1;
        }
        else {
          pppuVar19 = pppuVar16 + 5;
          *(undefined1 *)((long)pppuVar16 + 0x3f) = 1;
        }
        *(undefined1 *)pppuVar19 = uVar25;
      }
      else {
        ppuVar11 = &puStack_1a0;
        func_0x00010937c560();
        if (2 < *(byte *)ppuVar11 - 5) {
          ppuVar11 = &puStack_1a0;
          func_0x00010937c560();
          if (*(char *)ppuVar11 == '\x04') {
            func_0x00010937c560(&puStack_1a0);
            func_0x00010938d198();
            uVar25 = ppuStack_110._0_1_;
            ppuVar11 = &puStack_1a0;
            FUN_10a0513d8();
            pppuVar16 = &ppuStack_140;
            ppuStack_110 = ppuVar11;
            FUN_109cf993c(pppuVar16,ppuVar11,&UNK_10dd5b8f9,&ppuStack_110,&ppuStack_280);
            goto LAB_10a381168;
          }
          ppuVar11 = &puStack_1a0;
          FUN_10a0513d8(ppuVar11);
          __ZNSt3__1plIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_12basic_stringIT_T0_T1_EEPKS6_RKS9_
                    (&ppuStack_110,&UNK_10f6503df,ppuVar11);
          FUN_10a0029c0(&ppuStack_110);
          goto LAB_10a3817c4;
        }
        func_0x00010937c560(&puStack_1a0);
        func_0x00010949aadc();
        ppuVar5 = ppuStack_110;
        ppuVar11 = &puStack_1a0;
        FUN_10a0513d8();
        pppuVar16 = &ppuStack_140;
        ppuStack_110 = ppuVar11;
        FUN_109cf993c(pppuVar16,ppuVar11,&UNK_10dd5b8f9,&ppuStack_110,&ppuStack_280);
        if (*(char *)((long)pppuVar16 + 0x3f) < '\0') {
          pppuVar19 = (ulong ***)pppuVar16[5];
          pppuVar16[6] = (ulong **)0x1;
        }
        else {
          pppuVar19 = pppuVar16 + 5;
          *(undefined1 *)((long)pppuVar16 + 0x3f) = 1;
        }
        *(char *)pppuVar19 = (char)(int)(double)ppuVar5;
      }
      *(undefined1 *)((long)pppuVar19 + 1) = 0;
    }
    func_0x00010937c698(&puStack_1a0);
    lStack_180 = lStack_180 + 1;
  }
  if (cStack_141 < '\0') {
    __ZdlPv(uStack_158);
  }
  if (cStack_159 < '\0') {
    __ZdlPv(uStack_170);
  }
  lStack_1b0 = 0;
  plStack_1a8 = (long *)0x0;
  plVar12 = (long *)plVar9[0x1e];
  if (plVar12 == (long *)0x0) {
LAB_10a3812bc:
    puVar15 = &UNK_10f631051;
  }
  else {
    __ZNSt3__119__shared_weak_count4lockEv();
    if (plVar12 != (long *)0x0) {
      lStack_1b0 = plVar9[0x1d];
    }
    plStack_1a8 = plVar12;
    if (lStack_1b0 == 0) goto LAB_10a3812bc;
    uVar10 = uStack_290;
    if (-1 < (char)bStack_281) {
      uVar10 = (ulong)bStack_281;
    }
    if (uVar10 == 0) {
      puVar15 = &UNK_10f650404;
    }
    else {
      lVar20 = (long)*(char *)((long)plVar9 + 0x11f);
      if (lVar20 < 0) {
        lVar20 = plVar9[0x22];
      }
      if (lVar20 != 0) {
        puVar13 = (undefined8 *)0x19;
        __Znwm();
        lStack_1f8 = -0x7fffffffffffffe7;
        uStack_200 = 0x17;
        puVar13[1] = 0x6970612d65746f6d;
        *puVar13 = 0x65722f2f3a707061;
        *(undefined8 *)((long)puVar13 + 0xf) = 0x6d61657274732d69;
        *(undefined1 *)((long)puVar13 + 0x17) = 0;
        ppuVar14 = &puStack_208;
        puStack_208 = puVar13;
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm(ppuVar14,"/",1)
        ;
        plStack_1e8 = ppuVar14[1];
        puStack_1f0 = *ppuVar14;
        puStack_1e0 = ppuVar14[2];
        ppuVar14[1] = (undefined8 *)0x0;
        ppuVar14[2] = (undefined8 *)0x0;
        *ppuVar14 = (undefined8 *)0x0;
        lVar20 = (long)*(char *)((long)plVar9 + 0x11f);
        if (lVar20 < 0) {
          plVar12 = (long *)plVar9[0x21];
          lVar20 = plVar9[0x22];
        }
        else {
          plVar12 = plVar9 + 0x21;
        }
        FUN_10a3bf790(&pppppuStack_220,plVar12,lVar20);
        ppppppuVar4 = (undefined8 ******)pppppuStack_220;
        if (-1 < (char)bStack_209) {
          uStack_218 = (ulong)bStack_209;
          ppppppuVar4 = &pppppuStack_220;
        }
        ppuVar14 = &puStack_1f0;
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                  (ppuVar14,ppppppuVar4,uStack_218);
        puStack_278 = ppuVar14[1];
        ppuStack_280 = (ulong **)*ppuVar14;
        puStack_270 = ppuVar14[2];
        ppuVar14[1] = (undefined8 *)0x0;
        ppuVar14[2] = (undefined8 *)0x0;
        *ppuVar14 = (undefined8 *)0x0;
        pppuVar16 = &ppuStack_280;
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                  (pppuVar16,"/",1);
        ppuStack_108 = pppuVar16[1];
        ppuStack_110 = *pppuVar16;
        ppuStack_100 = pppuVar16[2];
        pppuVar16[1] = (ulong **)0x0;
        pppuVar16[2] = (ulong **)0x0;
        *pppuVar16 = (ulong **)0x0;
        ppppppuVar4 = (undefined8 ******)pppppuStack_298;
        if (-1 < (char)bStack_281) {
          uStack_290 = (ulong)bStack_281;
          ppppppuVar4 = &pppppuStack_298;
        }
        FUN_10a3bf790(&pppppuStack_238,ppppppuVar4,uStack_290);
        ppppppuVar4 = (undefined8 ******)pppppuStack_238;
        if (-1 < (char)bStack_221) {
          uStack_230 = (ulong)bStack_221;
          ppppppuVar4 = &pppppuStack_238;
        }
        pppuVar16 = &ppuStack_110;
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                  (pppuVar16,ppppppuVar4,uStack_230);
        ppuStack_d8 = pppuVar16[1];
        ppuStack_e0 = *pppuVar16;
        ppuStack_d0 = pppuVar16[2];
        pppuVar16[1] = (ulong **)0x0;
        pppuVar16[2] = (ulong **)0x0;
        *pppuVar16 = (ulong **)0x0;
        pppuVar17 = &ppuStack_e0;
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                  (pppuVar17,&UNK_10f650450,9);
        puStack_198 = (ulong *)pppuVar17[1];
        puStack_1a0 = (ulong *)*pppuVar17;
        puStack_190 = (ulong *)pppuVar17[2];
        pppuVar17[1] = (undefined8 **)0x0;
        pppuVar17[2] = (undefined8 **)0x0;
        *pppuVar17 = (undefined8 **)0x0;
        lVar21 = *(long *)(plVar9[0x1c] + 0x100);
        lVar20 = (long)*(char *)(lVar21 + 0x21f);
        if (lVar20 < 0) {
          lVar23 = *(long *)(lVar21 + 0x208);
          lVar20 = *(long *)(lVar21 + 0x210);
        }
        else {
          lVar23 = lVar21 + 0x208;
        }
        FUN_10a3bf790(&pppppuStack_250,lVar23,lVar20);
        ppppppuVar4 = (undefined8 ******)pppppuStack_250;
        if (-1 < (char)bStack_239) {
          uStack_248 = (ulong)bStack_239;
          ppppppuVar4 = &pppppuStack_250;
        }
        ppuVar11 = &puStack_1a0;
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                  (ppuVar11,ppppppuVar4,uStack_248);
        puStack_1c8 = ppuVar11[1];
        puStack_1d0 = *ppuVar11;
        puStack_1c0 = ppuVar11[2];
        ppuVar11[1] = (ulong *)0x0;
        ppuVar11[2] = (ulong *)0x0;
        *ppuVar11 = (ulong *)0x0;
        if ((char)bStack_239 < '\0') {
          __ZdlPv(pppppuStack_250);
        }
        if ((long)puStack_190 < 0) {
          __ZdlPv(puStack_1a0);
        }
        if ((char)bStack_221 < '\0') {
          __ZdlPv(pppppuStack_238);
        }
        if ((long)puStack_270 < 0) {
          __ZdlPv(ppuStack_280);
        }
        if ((char)bStack_209 < '\0') {
          __ZdlPv(pppppuStack_220);
        }
        if ((long)puStack_1e0 < 0) {
          __ZdlPv(puStack_1f0);
        }
        if (lStack_1f8 < 0) {
          __ZdlPv(puStack_208);
        }
        puStack_278 = (undefined8 *)uStack_138;
        ppuStack_280 = ppuStack_140;
        ppuStack_e0 = (undefined8 **)((ulong)ppuStack_e0 & 0xffffffffffffff00);
        cStack_c0 = '\0';
        lVar20 = plVar9[0x1c];
        ppuStack_110 = (ulong **)((ulong)ppuStack_110 & 0xffffffffffffff00);
        cStack_f0 = '\0';
        puStack_1a0 = (ulong *)((ulong)puStack_1a0 & 0xffffffffffffff00);
        uStack_160 = 0;
        ppuStack_140 = (ulong **)0x0;
        uStack_138 = 0;
        puStack_270 = puStack_130;
        lStack_268 = lStack_128;
        uStack_260 = uStack_120;
        if (lStack_128 != 0) {
          uVar10 = puStack_130[1];
          if (((ulong)puStack_278 & (long)puStack_278 - 1U) == 0) {
            uVar10 = uVar10 & (long)puStack_278 - 1U;
          }
          else if (puStack_278 <= uVar10) {
            uVar26 = 0;
            if (puStack_278 != (undefined8 *)0x0) {
              uVar26 = uVar10 / (ulong)puStack_278;
            }
            uVar10 = uVar10 - uVar26 * (long)puStack_278;
          }
          ppuStack_280[uVar10] = (ulong *)&puStack_270;
          puStack_130 = (undefined8 *)0x0;
          lStack_128 = 0;
        }
        FUN_10a9744c4(&puStack_1f0,&puStack_1d0,&lStack_1b0,lVar20,&ppuStack_110,&puStack_1a0,
                      &ppuStack_280);
        func_0x000104c4f944(&ppuStack_280);
        FUN_10a042530(&puStack_1a0);
        if (cStack_f0 == '\x01') {
          if (2 < (ulong)bStack_f8) goto LAB_10a3817c4;
          (*(code *)(&PTR_FUN_110b9f188)[bStack_f8])(&ppuStack_110);
        }
        if (cStack_c0 == '\x01') {
          if (2 < (ulong)bStack_c8) goto LAB_10a3817c4;
          (*(code *)(&PTR_FUN_110b9f188)[bStack_c8])(&ppuStack_e0);
        }
        if ((long)puStack_1c0 < 0) {
          __ZdlPv(puStack_1d0);
        }
        plVar9 = plStack_1a8;
        if (plStack_1a8 != (long *)0x0) {
          plVar12 = plStack_1a8 + 1;
          do {
            lVar20 = *plVar12;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar12,0x10);
            if (bVar3) {
              *plVar12 = lVar20 + -1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (lVar20 == 0) {
            (**(code **)(*plStack_1a8 + 0x10))(plStack_1a8);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar9);
          }
        }
        func_0x000104c4f944(&ppuStack_140);
        func_0x000109380ffc(auStack_2a0,auStack_2a8[0]);
        if ((char)bStack_281 < '\0') {
          __ZdlPv(pppppuStack_298);
        }
        FUN_10a059f1c(param_1,param_2,&puStack_1f0);
        plVar9 = plStack_1e8;
        if (plStack_1e8 != (long *)0x0) {
          plVar12 = plStack_1e8 + 1;
          do {
            lVar20 = *plVar12;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar12,0x10);
            if (bVar3) {
              *plVar12 = lVar20 + -1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (lVar20 == 0) {
            (**(code **)(*plStack_1e8 + 0x10))(plStack_1e8);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar9);
          }
        }
        if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_78) {
          plVar9 = plVar8 + 0x4b;
          lVar20 = plVar8[0x59];
          uVar10 = lVar20 - 1;
          plVar8[0x59] = uVar10;
          if (uVar10 < 8) {
            uVar10 = plVar9[lVar20 + 2];
            if (plVar8[0x5a] == uVar10) {
              return;
            }
          }
          else {
            uVar10 = *(ulong *)(plVar8[0x57] + -8);
            plVar8[0x57] = plVar8[0x57] + -8;
            if (plVar8[0x5a] == uVar10) {
              return;
            }
          }
          lVar20 = *plVar9;
          lVar21 = plVar8[0x4c];
          lVar23 = lVar21 - lVar20;
          uVar26 = lVar23 >> 4;
          if (uVar26 < uVar10) {
            uVar27 = uVar10 - uVar26;
            if ((ulong)(plVar8[0x4d] - lVar21 >> 4) < uVar27) {
              if (uVar10 >> 0x3c == 0) {
                uVar18 = plVar8[0x4d] - lVar20;
                uVar22 = (long)uVar18 >> 3;
                if (uVar22 <= uVar10) {
                  uVar22 = uVar10;
                }
                if (0x7fffffffffffffef < uVar18) {
                  uVar22 = 0xfffffffffffffff;
                }
                if (uVar22 >> 0x3c == 0) {
                  lVar7 = uVar22 << 4;
                  __Znwm();
                  lVar21 = lVar7 + lVar23;
                  _bzero(lVar21,uVar27 * 0x10);
                  lVar24 = lVar21 + uVar26 * -0x10;
                  _memcpy(lVar24,lVar20,lVar23);
                  *plVar9 = lVar24;
                  plVar8[0x4c] = lVar21 + uVar27 * 0x10;
                  plVar8[0x4d] = lVar7 + uVar22 * 0x10;
                  lStack_88 = lVar20;
                  lStack_80 = lVar20;
                  lStack_78 = lVar20;
                  func_0x00010988c1b8(&lStack_88);
                  goto code_r0x00010988c138;
                }
                func_0x000104c4f740();
              }
              else {
                func_0x00010988c1a4();
              }
                    /* WARNING: Does not return */
              pcVar6 = (code *)SoftwareBreakpoint(1,0x10988c16c);
              (*pcVar6)();
            }
            _bzero(lVar21,uVar27 * 0x10);
            plVar8[0x4c] = lVar21 + uVar27 * 0x10;
          }
          else if (uVar10 < uVar26) {
            lVar20 = lVar20 + uVar10 * 0x10;
            while (lVar21 != lVar20) {
              lVar21 = lVar21 + -0x10;
              func_0x00010988c204(lVar21);
            }
            plVar8[0x4c] = lVar20;
          }
code_r0x00010988c138:
          plVar8[0x5a] = uVar10;
          return;
        }
        ___stack_chk_fail();
        goto LAB_10a38172c;
      }
      puVar15 = &UNK_10f650427;
    }
  }
  FUN_10a00946c(puVar15);
LAB_10a3817c4:
                    /* WARNING: Does not return */
  pcVar6 = (code *)SoftwareBreakpoint(1,0x10a3817c8);
  (*pcVar6)();
}



/* Entry: 10a38193c; end: 10a38195f;  */

void FUN_10a38193c(undefined8 param_1)

{
  long *plVar1;
  undefined8 *puVar2;
  long *plVar3;
  undefined8 extraout_x8;
  long lVar4;
  undefined8 extraout_x8_00;
  int aiStack_e8 [2];
  undefined8 *puStack_e0;
  undefined8 *puStack_d8;
  undefined8 *puStack_d0;
  int iStack_c8;
  undefined4 uStack_c4;
  undefined8 *puStack_c0;
  int iStack_b8;
  undefined4 uStack_b4;
  undefined8 *puStack_b0;
  long lStack_a8;
  long *aplStack_70 [2];
  char cStack_59;
  long alStack_58 [3];
  long *plStack_40;
  long lStack_38;
  
  if ((int)param_1 == 2) {
    return;
  }
  FUN_10a052ee0(2,0,param_1);
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  FUN_10a381a5c(aplStack_70);
  plStack_40 = (long *)0x0;
  plVar3 = alStack_58;
  FUN_109fc89b4(extraout_x8,aplStack_70,plVar3,1,0);
  plVar1 = plStack_40;
  if (plStack_40 == alStack_58) {
    lVar4 = 0x20;
LAB_10a3819c8:
    (**(code **)(*plStack_40 + lVar4))();
  }
  else if (plStack_40 != (long *)0x0) {
    lVar4 = 0x28;
    goto LAB_10a3819c8;
  }
  if (cStack_59 < '\0') {
    plVar1 = aplStack_70[0];
    __ZdlPv();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return;
  }
  ___stack_chk_fail();
  if (plStack_40 == alStack_58) {
    lVar4 = 0x20;
  }
  else {
    if (plStack_40 == (long *)0x0) goto LAB_10a381a3c;
    lVar4 = 0x28;
  }
  (**(code **)(*plStack_40 + lVar4))();
LAB_10a381a3c:
  if (cStack_59 < '\0') {
    __ZdlPv(aplStack_70[0]);
  }
  __Unwind_Resume();
  lStack_a8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  (**(code **)(*plVar1 + 0x30))(&iStack_b8);
  func_0x000109880f00(&iStack_c8,&iStack_b8,plVar1,&UNK_10f581e96);
  func_0x0001098811a4(&puStack_d0,&iStack_c8,plVar1,&UNK_10f651ca6);
  if ((undefined8 *)CONCAT44(uStack_c4,iStack_c8) != (undefined8 *)0x0) {
    (*(code *)**(undefined8 **)CONCAT44(uStack_c4,iStack_c8))();
  }
  if ((undefined8 *)CONCAT44(uStack_b4,iStack_b8) != (undefined8 *)0x0) {
    (*(code *)**(undefined8 **)CONCAT44(uStack_b4,iStack_b8))();
  }
  func_0x0001098849a4(&iStack_b8,plVar1,plVar3);
  iStack_c8 = 0;
  (**(code **)(*plVar1 + 0x2a8))(aiStack_e8,plVar1,&puStack_d0,&iStack_c8,&iStack_b8,1);
  if ((3 < iStack_c8) && (puStack_c0 != (undefined8 *)0x0)) {
    (**(code **)*puStack_c0)();
  }
  if ((3 < iStack_b8) && (puStack_b0 != (undefined8 *)0x0)) {
    (**(code **)*puStack_b0)();
  }
  func_0x000109885044(&puStack_d8,aiStack_e8,plVar1);
  (**(code **)(*plVar1 + 0x138))(extraout_x8_00,plVar1,&puStack_d8);
  if (puStack_d8 != (undefined8 *)0x0) {
    (**(code **)*puStack_d8)();
  }
  if ((3 < aiStack_e8[0]) && (puStack_e0 != (undefined8 *)0x0)) {
    (**(code **)*puStack_e0)();
  }
  puVar2 = puStack_d0;
  if (puStack_d0 != (undefined8 *)0x0) {
    (**(code **)*puStack_d0)();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_a8) {
    ___stack_chk_fail();
    if (puStack_d8 != (undefined8 *)0x0) {
      (**(code **)*puStack_d8)();
    }
    if ((3 < aiStack_e8[0]) && (puStack_e0 != (undefined8 *)0x0)) {
      (**(code **)*puStack_e0)();
    }
    do {
      if (puStack_d0 != (undefined8 *)0x0) {
        (**(code **)*puStack_d0)();
      }
      __Unwind_Resume(puVar2);
      if ((undefined8 *)CONCAT44(uStack_c4,iStack_c8) != (undefined8 *)0x0) {
        (*(code *)**(undefined8 **)CONCAT44(uStack_c4,iStack_c8))();
      }
      puStack_d0 = (undefined8 *)CONCAT44(uStack_b4,iStack_b8);
    } while( true );
  }
  return;
}



/* Entry: 10a381960; end: 10a381a5b;  */

void FUN_10a381960(undefined8 param_1)

{
  long *plVar1;
  undefined8 *puVar2;
  long *plVar3;
  long lVar4;
  undefined8 extraout_x8;
  int aiStack_d8 [2];
  undefined8 *puStack_d0;
  undefined8 *puStack_c8;
  undefined8 *puStack_c0;
  int iStack_b8;
  undefined4 uStack_b4;
  undefined8 *puStack_b0;
  int iStack_a8;
  undefined4 uStack_a4;
  undefined8 *puStack_a0;
  long lStack_98;
  long *aplStack_60 [2];
  char cStack_49;
  long alStack_48 [3];
  long *plStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  FUN_10a381a5c(aplStack_60);
  plStack_30 = (long *)0x0;
  plVar3 = alStack_48;
  FUN_109fc89b4(param_1,aplStack_60,plVar3,1,0);
  plVar1 = plStack_30;
  if (plStack_30 == alStack_48) {
    lVar4 = 0x20;
LAB_10a3819c8:
    (**(code **)(*plStack_30 + lVar4))();
  }
  else if (plStack_30 != (long *)0x0) {
    lVar4 = 0x28;
    goto LAB_10a3819c8;
  }
  if (cStack_49 < '\0') {
    plVar1 = aplStack_60[0];
    __ZdlPv();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return;
  }
  ___stack_chk_fail();
  if (plStack_30 == alStack_48) {
    lVar4 = 0x20;
  }
  else {
    if (plStack_30 == (long *)0x0) goto LAB_10a381a3c;
    lVar4 = 0x28;
  }
  (**(code **)(*plStack_30 + lVar4))();
LAB_10a381a3c:
  if (cStack_49 < '\0') {
    __ZdlPv(aplStack_60[0]);
  }
  __Unwind_Resume();
  lStack_98 = *(long *)PTR____stack_chk_guard_11034bdc0;
  (**(code **)(*plVar1 + 0x30))(&iStack_a8);
  func_0x000109880f00(&iStack_b8,&iStack_a8,plVar1,&UNK_10f581e96);
  func_0x0001098811a4(&puStack_c0,&iStack_b8,plVar1,&UNK_10f651ca6);
  if ((undefined8 *)CONCAT44(uStack_b4,iStack_b8) != (undefined8 *)0x0) {
    (*(code *)**(undefined8 **)CONCAT44(uStack_b4,iStack_b8))();
  }
  if ((undefined8 *)CONCAT44(uStack_a4,iStack_a8) != (undefined8 *)0x0) {
    (*(code *)**(undefined8 **)CONCAT44(uStack_a4,iStack_a8))();
  }
  func_0x0001098849a4(&iStack_a8,plVar1,plVar3);
  iStack_b8 = 0;
  (**(code **)(*plVar1 + 0x2a8))(aiStack_d8,plVar1,&puStack_c0,&iStack_b8,&iStack_a8,1);
  if ((3 < iStack_b8) && (puStack_b0 != (undefined8 *)0x0)) {
    (**(code **)*puStack_b0)();
  }
  if ((3 < iStack_a8) && (puStack_a0 != (undefined8 *)0x0)) {
    (**(code **)*puStack_a0)();
  }
  func_0x000109885044(&puStack_c8,aiStack_d8,plVar1);
  (**(code **)(*plVar1 + 0x138))(extraout_x8,plVar1,&puStack_c8);
  if (puStack_c8 != (undefined8 *)0x0) {
    (**(code **)*puStack_c8)();
  }
  if ((3 < aiStack_d8[0]) && (puStack_d0 != (undefined8 *)0x0)) {
    (**(code **)*puStack_d0)();
  }
  puVar2 = puStack_c0;
  if (puStack_c0 != (undefined8 *)0x0) {
    (**(code **)*puStack_c0)();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_98) {
    ___stack_chk_fail();
    if (puStack_c8 != (undefined8 *)0x0) {
      (**(code **)*puStack_c8)();
    }
    if ((3 < aiStack_d8[0]) && (puStack_d0 != (undefined8 *)0x0)) {
      (**(code **)*puStack_d0)();
    }
    do {
      if (puStack_c0 != (undefined8 *)0x0) {
        (**(code **)*puStack_c0)();
      }
      __Unwind_Resume(puVar2);
      if ((undefined8 *)CONCAT44(uStack_b4,iStack_b8) != (undefined8 *)0x0) {
        (*(code *)**(undefined8 **)CONCAT44(uStack_b4,iStack_b8))();
      }
      puStack_c0 = (undefined8 *)CONCAT44(uStack_a4,iStack_a8);
    } while( true );
  }
  return;
}



/* Entry: 10a381a5c; end: 10a381ccf;  */

void FUN_10a381a5c(undefined8 param_1,long *param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  int aiStack_78 [2];
  undefined8 *puStack_70;
  undefined8 *puStack_68;
  undefined8 *puStack_60;
  int iStack_58;
  undefined4 uStack_54;
  undefined8 *puStack_50;
  int iStack_48;
  undefined4 uStack_44;
  undefined8 *puStack_40;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  (**(code **)(*param_2 + 0x30))(&iStack_48);
  func_0x000109880f00(&iStack_58,&iStack_48,param_2,&UNK_10f581e96);
  func_0x0001098811a4(&puStack_60,&iStack_58,param_2,&UNK_10f651ca6);
  if ((undefined8 *)CONCAT44(uStack_54,iStack_58) != (undefined8 *)0x0) {
    (*(code *)**(undefined8 **)CONCAT44(uStack_54,iStack_58))();
  }
  if ((undefined8 *)CONCAT44(uStack_44,iStack_48) != (undefined8 *)0x0) {
    (*(code *)**(undefined8 **)CONCAT44(uStack_44,iStack_48))();
  }
  func_0x0001098849a4(&iStack_48,param_2,param_3);
  iStack_58 = 0;
  (**(code **)(*param_2 + 0x2a8))(aiStack_78,param_2,&puStack_60,&iStack_58,&iStack_48,1);
  if ((3 < iStack_58) && (puStack_50 != (undefined8 *)0x0)) {
    (**(code **)*puStack_50)();
  }
  if ((3 < iStack_48) && (puStack_40 != (undefined8 *)0x0)) {
    (**(code **)*puStack_40)();
  }
  func_0x000109885044(&puStack_68,aiStack_78,param_2);
  (**(code **)(*param_2 + 0x138))(param_1,param_2,&puStack_68);
  if (puStack_68 != (undefined8 *)0x0) {
    (**(code **)*puStack_68)();
  }
  if ((3 < aiStack_78[0]) && (puStack_70 != (undefined8 *)0x0)) {
    (**(code **)*puStack_70)();
  }
  puVar1 = puStack_60;
  if (puStack_60 != (undefined8 *)0x0) {
    (**(code **)*puStack_60)();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_38) {
    ___stack_chk_fail();
    if (puStack_68 != (undefined8 *)0x0) {
      (**(code **)*puStack_68)();
    }
    if ((3 < aiStack_78[0]) && (puStack_70 != (undefined8 *)0x0)) {
      (**(code **)*puStack_70)();
    }
    do {
      if (puStack_60 != (undefined8 *)0x0) {
        (**(code **)*puStack_60)();
      }
      __Unwind_Resume(puVar1);
      if ((undefined8 *)CONCAT44(uStack_54,iStack_58) != (undefined8 *)0x0) {
        (*(code *)**(undefined8 **)CONCAT44(uStack_54,iStack_58))();
      }
      puStack_60 = (undefined8 *)CONCAT44(uStack_44,iStack_48);
    } while( true );
  }
  return;
}



/* Entry: 10a381cd0; end: 10a381e73;  */

void FUN_10a381cd0(undefined4 *param_1,long *param_2,undefined8 param_3,long param_4,
                  undefined8 param_5)

{
  char cVar1;
  bool bVar2;
  code *pcVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  ulong uVar14;
  ulong uVar15;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long *plStack_68;
  long *in_stack_ffffffffffffffa8;
  long *in_stack_ffffffffffffffb8;
  
  plVar5 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar5[0x59] < 8) {
    plVar5[plVar5[0x59] + 0x4e] = plVar5[0x5a];
    plVar5[0x59] = plVar5[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar5 + 0x4b);
  }
  plVar6 = param_2;
  FUN_10a380cf4(param_2,param_3);
  FUN_10a058b78(param_5);
  FUN_10a058b9c(&stack0xffffffffffffffb0,param_2,param_4);
  FUN_10a058cac(&stack0xffffffffffffffa0,param_2,param_4 + 0x10);
  FUN_10a3c8488();
  if (0x134 < (int)param_2[3]) {
    FUN_10a00946c(&UNK_10f650236);
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x10a381e40);
    (*pcVar3)();
  }
  FUN_10a345c64(plVar6);
  FUN_10a00d150(plVar6[0x28],&stack0xffffffffffffffb0,&stack0xffffffffffffffa0,plVar6 + 0x21);
  if (in_stack_ffffffffffffffa8 != (long *)0x0) {
    plVar6 = in_stack_ffffffffffffffa8 + 1;
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
      (**(code **)(*in_stack_ffffffffffffffa8 + 0x10))(in_stack_ffffffffffffffa8);
      __ZNSt3__119__shared_weak_count14__release_weakEv(in_stack_ffffffffffffffa8);
    }
  }
  if (in_stack_ffffffffffffffb8 != (long *)0x0) {
    plVar6 = in_stack_ffffffffffffffb8 + 1;
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
      (**(code **)(*in_stack_ffffffffffffffb8 + 0x10))(in_stack_ffffffffffffffb8);
      __ZNSt3__119__shared_weak_count14__release_weakEv(in_stack_ffffffffffffffb8);
    }
  }
  *param_1 = 0;
  plVar6 = plVar5 + 0x4b;
  lVar9 = plVar5[0x59];
  uVar7 = lVar9 - 1;
  plVar5[0x59] = uVar7;
  if (uVar7 < 8) {
    uVar7 = plVar6[lVar9 + 2];
    if (plVar5[0x5a] == uVar7) {
      return;
    }
  }
  else {
    uVar7 = *(ulong *)(plVar5[0x57] + -8);
    plVar5[0x57] = plVar5[0x57] + -8;
    if (plVar5[0x5a] == uVar7) {
      return;
    }
  }
  lVar9 = *plVar6;
  lVar12 = plVar5[0x4c];
  lVar10 = lVar12 - lVar9;
  uVar14 = lVar10 >> 4;
  if (uVar14 < uVar7) {
    uVar15 = uVar7 - uVar14;
    lVar13 = plVar5[0x4d];
    if ((ulong)(lVar13 - lVar12 >> 4) < uVar15) {
      if (uVar7 >> 0x3c == 0) {
        uVar8 = lVar13 - lVar9 >> 3;
        if (uVar8 <= uVar7) {
          uVar8 = uVar7;
        }
        if (0x7fffffffffffffef < (ulong)(lVar13 - lVar9)) {
          uVar8 = 0xfffffffffffffff;
        }
        plStack_68 = plVar6;
        if (uVar8 >> 0x3c == 0) {
          lVar4 = uVar8 << 4;
          __Znwm();
          lVar12 = lVar4 + lVar10;
          _bzero(lVar12,uVar15 * 0x10);
          lVar11 = lVar12 + uVar14 * -0x10;
          _memcpy(lVar11,lVar9,lVar10);
          *plVar6 = lVar11;
          plVar5[0x4c] = lVar12 + uVar15 * 0x10;
          plVar5[0x4d] = lVar4 + uVar8 * 0x10;
          lStack_88 = lVar9;
          lStack_80 = lVar9;
          lStack_78 = lVar9;
          lStack_70 = lVar13;
          func_0x00010988c1b8(&lStack_88);
          goto code_r0x00010988c138;
        }
        func_0x000104c4f740();
      }
      else {
        func_0x00010988c1a4();
      }
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar3)();
    }
    _bzero(lVar12,uVar15 * 0x10);
    plVar5[0x4c] = lVar12 + uVar15 * 0x10;
  }
  else if (uVar7 < uVar14) {
    lVar9 = lVar9 + uVar7 * 0x10;
    while (lVar12 != lVar9) {
      lVar12 = lVar12 + -0x10;
      func_0x00010988c204(lVar12);
    }
    plVar5[0x4c] = lVar9;
  }
code_r0x00010988c138:
  plVar5[0x5a] = uVar7;
  return;
}



/* Entry: 10a381e74; end: 10a381fef;  */

void FUN_10a381e74(undefined4 *param_1,long *param_2,undefined8 param_3,long param_4,
                  undefined8 param_5)

{
  char cVar1;
  bool bVar2;
  code *pcVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  ulong uVar14;
  ulong uVar15;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long *plStack_68;
  long *in_stack_ffffffffffffffa8;
  long *in_stack_ffffffffffffffb8;
  
  plVar5 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar5[0x59] < 8) {
    plVar5[plVar5[0x59] + 0x4e] = plVar5[0x5a];
    plVar5[0x59] = plVar5[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar5 + 0x4b);
  }
  plVar6 = param_2;
  FUN_10a380cf4(param_2,param_3);
  FUN_10a381ff0(param_5);
  FUN_10a382014(&stack0xffffffffffffffb0,param_2,param_4);
  FUN_10a382110(&stack0xffffffffffffffa0,param_2,*(undefined4 *)(param_4 + 0x10),
                *(undefined8 *)(param_4 + 0x18));
  FUN_10a342ec0(plVar6,&stack0xffffffffffffffb0,&stack0xffffffffffffffa0);
  if (in_stack_ffffffffffffffa8 != (long *)0x0) {
    plVar6 = in_stack_ffffffffffffffa8 + 1;
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
      (**(code **)(*in_stack_ffffffffffffffa8 + 0x10))(in_stack_ffffffffffffffa8);
      __ZNSt3__119__shared_weak_count14__release_weakEv(in_stack_ffffffffffffffa8);
    }
  }
  if (in_stack_ffffffffffffffb8 != (long *)0x0) {
    plVar6 = in_stack_ffffffffffffffb8 + 1;
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
      (**(code **)(*in_stack_ffffffffffffffb8 + 0x10))(in_stack_ffffffffffffffb8);
      __ZNSt3__119__shared_weak_count14__release_weakEv(in_stack_ffffffffffffffb8);
    }
  }
  *param_1 = 0;
  plVar6 = plVar5 + 0x4b;
  lVar9 = plVar5[0x59];
  uVar7 = lVar9 - 1;
  plVar5[0x59] = uVar7;
  if (uVar7 < 8) {
    uVar7 = plVar6[lVar9 + 2];
    if (plVar5[0x5a] == uVar7) {
      return;
    }
  }
  else {
    uVar7 = *(ulong *)(plVar5[0x57] + -8);
    plVar5[0x57] = plVar5[0x57] + -8;
    if (plVar5[0x5a] == uVar7) {
      return;
    }
  }
  lVar9 = *plVar6;
  lVar12 = plVar5[0x4c];
  lVar10 = lVar12 - lVar9;
  uVar14 = lVar10 >> 4;
  if (uVar14 < uVar7) {
    uVar15 = uVar7 - uVar14;
    lVar13 = plVar5[0x4d];
    if ((ulong)(lVar13 - lVar12 >> 4) < uVar15) {
      if (uVar7 >> 0x3c == 0) {
        uVar8 = lVar13 - lVar9 >> 3;
        if (uVar8 <= uVar7) {
          uVar8 = uVar7;
        }
        if (0x7fffffffffffffef < (ulong)(lVar13 - lVar9)) {
          uVar8 = 0xfffffffffffffff;
        }
        plStack_68 = plVar6;
        if (uVar8 >> 0x3c == 0) {
          lVar4 = uVar8 << 4;
          __Znwm();
          lVar12 = lVar4 + lVar10;
          _bzero(lVar12,uVar15 * 0x10);
          lVar11 = lVar12 + uVar14 * -0x10;
          _memcpy(lVar11,lVar9,lVar10);
          *plVar6 = lVar11;
          plVar5[0x4c] = lVar12 + uVar15 * 0x10;
          plVar5[0x4d] = lVar4 + uVar8 * 0x10;
          lStack_88 = lVar9;
          lStack_80 = lVar9;
          lStack_78 = lVar9;
          lStack_70 = lVar13;
          func_0x00010988c1b8(&lStack_88);
          goto code_r0x00010988c138;
        }
        func_0x000104c4f740();
      }
      else {
        func_0x00010988c1a4();
      }
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar3)();
    }
    _bzero(lVar12,uVar15 * 0x10);
    plVar5[0x4c] = lVar12 + uVar15 * 0x10;
  }
  else if (uVar7 < uVar14) {
    lVar9 = lVar9 + uVar7 * 0x10;
    while (lVar12 != lVar9) {
      lVar12 = lVar12 + -0x10;
      func_0x00010988c204(lVar12);
    }
    plVar5[0x4c] = lVar9;
  }
code_r0x00010988c138:
  plVar5[0x5a] = uVar7;
  return;
}



/* Entry: 10a381ff0; end: 10a382013;  */

void FUN_10a381ff0(int *param_1)

{
  char cVar1;
  bool bVar2;
  code *pcVar3;
  long *plVar4;
  long lVar5;
  long *plVar6;
  long lStack_40;
  long *plStack_38;
  
  if ((int)param_1 == 2) {
    return;
  }
  plVar4 = (long *)0x2;
  lVar5 = 0;
  FUN_10a052ee0();
  if (*param_1 != 1) {
    func_0x000109898688(lVar5,param_1);
    if (lVar5 == 0) {
      func_0x00010988bd28(&UNK_10f68f52e);
    }
    else {
      func_0x00010989879c(&lStack_40);
      plVar6 = plVar4;
      if ((lStack_40 != 0) &&
         (___dynamic_cast(lStack_40,&PTR_DAT_110b178e0,&PTR_DAT_110c351c8,0), lStack_40 != 0)) {
        *plVar4 = lStack_40;
        plVar4[1] = (long)plStack_38;
        plVar6 = &lStack_40;
      }
      *plVar6 = 0;
      plVar6[1] = 0;
      if (plStack_38 != (long *)0x0) {
        plVar6 = plStack_38 + 1;
        do {
          lVar5 = *plVar6;
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
          if (bVar2) {
            *plVar6 = lVar5 + -1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
        if (lVar5 == 0) {
          (**(code **)(*plStack_38 + 0x10))(plStack_38);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_38);
        }
      }
      if (*plVar4 != 0) {
        return;
      }
    }
    func_0x00010988bd28(&UNK_10f58251f);
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x10a3820fc);
    (*pcVar3)();
  }
  *plVar4 = 0;
  plVar4[1] = 0;
  return;
}



/* Entry: 10a382014; end: 10a38210f;  */

void FUN_10a382014(long *param_1,long param_2,int *param_3)

{
  char cVar1;
  bool bVar2;
  code *pcVar3;
  long *plVar4;
  long lVar5;
  long lStack_30;
  long *plStack_28;
  
  if (*param_3 == 1) {
    *param_1 = 0;
    param_1[1] = 0;
    return;
  }
  func_0x000109898688(param_2,param_3);
  if (param_2 == 0) {
    func_0x00010988bd28(&UNK_10f68f52e);
  }
  else {
    func_0x00010989879c(&lStack_30);
    plVar4 = param_1;
    if ((lStack_30 != 0) &&
       (___dynamic_cast(lStack_30,&PTR_DAT_110b178e0,&PTR_DAT_110c351c8,0), lStack_30 != 0)) {
      *param_1 = lStack_30;
      param_1[1] = (long)plStack_28;
      plVar4 = &lStack_30;
    }
    *plVar4 = 0;
    plVar4[1] = 0;
    if (plStack_28 != (long *)0x0) {
      plVar4 = plStack_28 + 1;
      do {
        lVar5 = *plVar4;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
        if (bVar2) {
          *plVar4 = lVar5 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (lVar5 == 0) {
        (**(code **)(*plStack_28 + 0x10))(plStack_28);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_28);
      }
    }
    if (*param_1 != 0) {
      return;
    }
  }
  func_0x00010988bd28(&UNK_10f58251f);
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x10a3820fc);
  (*pcVar3)();
}



/* Entry: 10a382110; end: 10a3822d3;  */

void FUN_10a382110(undefined8 *param_1,long *param_2,int param_3,undefined8 param_4)

{
  char cVar1;
  bool bVar2;
  code *pcVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  undefined8 *puVar7;
  undefined8 uStack_70;
  long lStack_68;
  undefined8 uStack_60;
  long lStack_58;
  long *plStack_50;
  int iStack_48;
  long *plStack_40;
  long *plStack_38;
  
  if (param_3 == 7) {
    plVar4 = param_2;
    (**(code **)(*param_2 + 0x98))(param_2,param_4);
    plVar5 = param_2;
    plStack_38 = plVar4;
    (**(code **)(*param_2 + 0x228))(param_2,&plStack_38);
    if ((int)plVar5 != 0) {
      plVar4 = param_2;
      (**(code **)(*param_2 + 0x58))();
      lVar6 = plVar4[0x48];
      if ((lVar6 == 0) ||
         (___dynamic_cast(lVar6,&PTR_DAT_110b9fb60,&PTR_DAT_110b9fb70,0), plVar4 = plStack_38,
         lVar6 == 0)) goto LAB_10a382294;
      plStack_38 = (long *)0x0;
      iStack_48 = 7;
      plStack_40 = plVar4;
      plStack_50 = param_2;
      FUN_10a688ac0(&uStack_70,&plStack_50,*(undefined8 *)(lVar6 + 8));
      if ((3 < iStack_48) && (plStack_40 != (long *)0x0)) {
        (**(code **)*plStack_40)();
      }
    }
    if (plStack_38 != (long *)0x0) {
      (**(code **)*plStack_38)();
    }
    if (((ulong)plVar5 & 1) != 0) {
      puVar7 = (undefined8 *)0x60;
      __Znwm();
      puVar7[1] = 0;
      puVar7[2] = 0;
      *puVar7 = &PTR_FUN_110b9f318;
      puVar7[4] = lStack_68;
      puVar7[3] = uStack_70;
      if (lStack_68 != 0) {
        plVar4 = (long *)(lStack_68 + 8);
        do {
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
          if (bVar2) {
            *plVar4 = *plVar4 + 1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
      }
      puVar7[6] = lStack_58;
      puVar7[5] = uStack_60;
      if (lStack_58 != 0) {
        plVar4 = (long *)(lStack_58 + 0x10);
        do {
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
          if (bVar2) {
            *plVar4 = *plVar4 + 1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
      }
      *(undefined1 *)(puVar7 + 0xb) = 2;
      *param_1 = puVar7 + 3;
      param_1[1] = puVar7;
      FUN_10a688c1c(&uStack_70);
      return;
    }
  }
  func_0x00010988bd28(&UNK_10f6347ad);
LAB_10a382294:
  func_0x00010988bd28(&UNK_10f685540);
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x10a3822a4);
  (*pcVar3)();
}



/* Entry: 10a3822d4; end: 10a38264f;  */

void FUN_10a3822d4(undefined4 *param_1,long *param_2,undefined8 param_3,long param_4,
                  undefined8 param_5)

{
  long lVar1;
  char cVar2;
  bool bVar3;
  undefined8 ****ppppuVar4;
  code *pcVar5;
  long lVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  long *plVar10;
  undefined **ppuVar11;
  ulong uVar12;
  ulong uVar13;
  long lVar14;
  long lVar15;
  long *plVar16;
  long lVar17;
  ulong uVar18;
  ulong uVar19;
  undefined8 ***pppuStack_a8;
  ulong uStack_a0;
  ulong uStack_98;
  undefined1 auStack_90 [8];
  long *plStack_88;
  long *plStack_80;
  long *plStack_78;
  long lStack_70;
  long *plStack_68;
  long in_stack_ffffffffffffffb0;
  long *in_stack_ffffffffffffffb8;
  
  plVar7 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar7[0x59] < 8) {
    plVar7[plVar7[0x59] + 0x4e] = plVar7[0x5a];
    plVar7[0x59] = plVar7[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar7 + 0x4b);
  }
  plVar8 = param_2;
  FUN_10a380cf4(param_2,param_3);
  FUN_10a381ff0(param_5);
  FUN_10a382014(&plStack_80,param_2,param_4);
  FUN_10a382110(auStack_90,param_2,*(undefined4 *)(param_4 + 0x10),*(undefined8 *)(param_4 + 0x18));
  plVar9 = plVar8;
  FUN_10a3444b8();
  if (((ulong)plVar9 & 1) == 0) {
    FUN_10a00946c(&UNK_10f65027a);
                    /* WARNING: Does not return */
    pcVar5 = (code *)SoftwareBreakpoint(1,0x10a3825dc);
    (*pcVar5)();
  }
  FUN_10a34458c(&stack0xffffffffffffffb0,plVar8,&plStack_80,auStack_90);
  if (in_stack_ffffffffffffffb0 == 0) {
    pppuStack_a8 = (undefined8 ****)0x0;
    uStack_a0 = 0;
    uStack_98 = 0;
  }
  else {
    plVar10 = (long *)plVar8[0x1e];
    plVar9 = (long *)0x0;
    if (((plVar10 == (long *)0x0) ||
        (__ZNSt3__119__shared_weak_count4lockEv(), plVar9 = plVar10, plVar10 == (long *)0x0)) ||
       (plVar16 = (long *)plVar8[0x1d], plVar16 == (long *)0x0)) {
      plVar10 = plVar9;
      ppuVar11 = &PTR_PTR_113301b20;
      FUN_10ae079a0(0,&PTR_PTR_113301b20);
      FUN_10ae07cd4(ppuVar11,&PTR_PTR_113301b20);
      pppuStack_a8 = (undefined8 ****)0x0;
      uStack_a0 = 0;
      uStack_98 = 0;
    }
    else {
      func_0x000107c2a6b0(plVar8 + 0x25,in_stack_ffffffffffffffb0,in_stack_ffffffffffffffb0);
      if (in_stack_ffffffffffffffb8 != (long *)0x0) {
        plVar8 = in_stack_ffffffffffffffb8 + 1;
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar8,0x10);
          if (bVar3) {
            *plVar8 = *plVar8 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      plStack_68 = in_stack_ffffffffffffffb8;
      (**(code **)(*plVar16 + 0x10))(&pppuStack_a8,plVar16,&lStack_70);
      plVar8 = plStack_68;
      if (plStack_68 != (long *)0x0) {
        plVar9 = plStack_68 + 1;
        do {
          lVar14 = *plVar9;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
          if (bVar3) {
            *plVar9 = lVar14 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar14 == 0) {
          (**(code **)(*plStack_68 + 0x10))(plStack_68);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar8);
        }
      }
    }
    if (plVar10 != (long *)0x0) {
      plVar8 = plVar10 + 1;
      do {
        lVar14 = *plVar8;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar8,0x10);
        if (bVar3) {
          *plVar8 = lVar14 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar14 == 0) {
        (**(code **)(*plVar10 + 0x10))(plVar10);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar10);
      }
    }
  }
  if (in_stack_ffffffffffffffb8 != (long *)0x0) {
    plVar8 = in_stack_ffffffffffffffb8 + 1;
    do {
      lVar14 = *plVar8;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar3) {
        *plVar8 = lVar14 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar14 == 0) {
      (**(code **)(*in_stack_ffffffffffffffb8 + 0x10))(in_stack_ffffffffffffffb8);
      __ZNSt3__119__shared_weak_count14__release_weakEv(in_stack_ffffffffffffffb8);
    }
  }
  if (plStack_88 != (long *)0x0) {
    plVar8 = plStack_88 + 1;
    do {
      lVar14 = *plVar8;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar3) {
        *plVar8 = lVar14 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar14 == 0) {
      (**(code **)(*plStack_88 + 0x10))(plStack_88);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_88);
    }
  }
  if (plStack_78 != (long *)0x0) {
    plVar8 = plStack_78 + 1;
    do {
      lVar14 = *plVar8;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar3) {
        *plVar8 = lVar14 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar14 == 0) {
      (**(code **)(*plStack_78 + 0x10))(plStack_78);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_78);
    }
  }
  uVar12 = uStack_a0;
  ppppuVar4 = (undefined8 ****)pppuStack_a8;
  if (-1 < (long)uStack_98) {
    uVar12 = uStack_98 >> 0x38;
    ppppuVar4 = &pppuStack_a8;
  }
  (**(code **)(*param_2 + 0x128))(&stack0xffffffffffffffb0,param_2,ppppuVar4,uVar12);
  *param_1 = 6;
  *(long *)(param_1 + 2) = in_stack_ffffffffffffffb0;
  if ((long)uStack_98 < 0) {
    __ZdlPv(pppuStack_a8);
  }
  plVar8 = plVar7 + 0x4b;
  lVar14 = plVar7[0x59];
  uVar12 = lVar14 - 1;
  plVar7[0x59] = uVar12;
  if (uVar12 < 8) {
    uVar12 = plVar8[lVar14 + 2];
    if (plVar7[0x5a] == uVar12) {
      return;
    }
  }
  else {
    uVar12 = *(ulong *)(plVar7[0x57] + -8);
    plVar7[0x57] = plVar7[0x57] + -8;
    if (plVar7[0x5a] == uVar12) {
      return;
    }
  }
  plVar9 = (long *)*plVar8;
  plVar10 = (long *)plVar7[0x4c];
  lVar14 = (long)plVar10 - (long)plVar9;
  uVar18 = lVar14 >> 4;
  if (uVar18 < uVar12) {
    uVar19 = uVar12 - uVar18;
    lVar17 = plVar7[0x4d];
    if ((ulong)(lVar17 - (long)plVar10 >> 4) < uVar19) {
      if (uVar12 >> 0x3c == 0) {
        uVar13 = lVar17 - (long)plVar9 >> 3;
        if (uVar13 <= uVar12) {
          uVar13 = uVar12;
        }
        if (0x7fffffffffffffef < (ulong)(lVar17 - (long)plVar9)) {
          uVar13 = 0xfffffffffffffff;
        }
        plStack_68 = plVar8;
        if (uVar13 >> 0x3c == 0) {
          lVar6 = uVar13 << 4;
          __Znwm();
          lVar1 = lVar6 + lVar14;
          _bzero(lVar1,uVar19 * 0x10);
          lVar15 = lVar1 + uVar18 * -0x10;
          _memcpy(lVar15,plVar9,lVar14);
          *plVar8 = lVar15;
          plVar7[0x4c] = lVar1 + uVar19 * 0x10;
          plVar7[0x4d] = lVar6 + uVar13 * 0x10;
          plStack_88 = plVar9;
          plStack_80 = plVar9;
          plStack_78 = plVar9;
          lStack_70 = lVar17;
          func_0x00010988c1b8(&plStack_88);
          goto code_r0x00010988c138;
        }
        func_0x000104c4f740();
      }
      else {
        func_0x00010988c1a4();
      }
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar5)();
    }
    _bzero(plVar10,uVar19 * 0x10);
    plVar7[0x4c] = (long)(plVar10 + uVar19 * 2);
  }
  else if (uVar12 < uVar18) {
    while (plVar10 != plVar9 + uVar12 * 2) {
      plVar10 = plVar10 + -2;
      func_0x00010988c204(plVar10);
    }
    plVar7[0x4c] = (long)(plVar9 + uVar12 * 2);
  }
code_r0x00010988c138:
  plVar7[0x5a] = uVar12;
  return;
}



/* Entry: 10a382650; end: 10a382793;  */

void FUN_10a382650(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  char cVar1;
  bool bVar2;
  code *pcVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  ulong uVar14;
  ulong uVar15;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long *plStack_68;
  long *in_stack_ffffffffffffffa0;
  undefined8 in_stack_ffffffffffffffa8;
  long in_stack_ffffffffffffffb8;
  
  plVar5 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar5[0x59] < 8) {
    plVar5[plVar5[0x59] + 0x4e] = plVar5[0x5a];
    plVar5[0x59] = plVar5[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar5 + 0x4b);
  }
  plVar6 = param_2;
  FUN_10a380cf4(param_2,param_3);
  FUN_10a0584c8(param_5);
  func_0x000109898570(&stack0xffffffffffffffa8,param_2,param_4);
  FUN_10a3472d0(&plStack_68,plVar6,&stack0xffffffffffffffa8);
  if (in_stack_ffffffffffffffb8 < 0) {
    __ZdlPv(in_stack_ffffffffffffffa8);
  }
  FUN_10a0584ec(param_1,param_2,&plStack_68);
  if (in_stack_ffffffffffffffa0 != (long *)0x0) {
    plVar6 = in_stack_ffffffffffffffa0 + 1;
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
      (**(code **)(*in_stack_ffffffffffffffa0 + 0x10))(in_stack_ffffffffffffffa0);
      __ZNSt3__119__shared_weak_count14__release_weakEv(in_stack_ffffffffffffffa0);
    }
  }
  plVar6 = plVar5 + 0x4b;
  lVar9 = plVar5[0x59];
  uVar7 = lVar9 - 1;
  plVar5[0x59] = uVar7;
  if (uVar7 < 8) {
    uVar7 = plVar6[lVar9 + 2];
    if (plVar5[0x5a] == uVar7) {
      return;
    }
  }
  else {
    uVar7 = *(ulong *)(plVar5[0x57] + -8);
    plVar5[0x57] = plVar5[0x57] + -8;
    if (plVar5[0x5a] == uVar7) {
      return;
    }
  }
  lVar9 = *plVar6;
  lVar12 = plVar5[0x4c];
  lVar10 = lVar12 - lVar9;
  uVar14 = lVar10 >> 4;
  if (uVar14 < uVar7) {
    uVar15 = uVar7 - uVar14;
    lVar13 = plVar5[0x4d];
    if ((ulong)(lVar13 - lVar12 >> 4) < uVar15) {
      if (uVar7 >> 0x3c == 0) {
        uVar8 = lVar13 - lVar9 >> 3;
        if (uVar8 <= uVar7) {
          uVar8 = uVar7;
        }
        if (0x7fffffffffffffef < (ulong)(lVar13 - lVar9)) {
          uVar8 = 0xfffffffffffffff;
        }
        plStack_68 = plVar6;
        if (uVar8 >> 0x3c == 0) {
          lVar4 = uVar8 << 4;
          __Znwm();
          lVar12 = lVar4 + lVar10;
          _bzero(lVar12,uVar15 * 0x10);
          lVar11 = lVar12 + uVar14 * -0x10;
          _memcpy(lVar11,lVar9,lVar10);
          *plVar6 = lVar11;
          plVar5[0x4c] = lVar12 + uVar15 * 0x10;
          plVar5[0x4d] = lVar4 + uVar8 * 0x10;
          lStack_88 = lVar9;
          lStack_80 = lVar9;
          lStack_78 = lVar9;
          lStack_70 = lVar13;
          func_0x00010988c1b8(&lStack_88);
          goto code_r0x00010988c138;
        }
        func_0x000104c4f740();
      }
      else {
        func_0x00010988c1a4();
      }
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar3)();
    }
    _bzero(lVar12,uVar15 * 0x10);
    plVar5[0x4c] = lVar12 + uVar15 * 0x10;
  }
  else if (uVar7 < uVar14) {
    lVar9 = lVar9 + uVar7 * 0x10;
    while (lVar12 != lVar9) {
      lVar12 = lVar12 + -0x10;
      func_0x00010988c204(lVar12);
    }
    plVar5[0x4c] = lVar9;
  }
code_r0x00010988c138:
  plVar5[0x5a] = uVar7;
  return;
}



/* Entry: 10a382794; end: 10a38284b;  */

void FUN_10a382794(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long *plStack_68;
  
  plVar4 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar4[0x59] < 8) {
    plVar4[plVar4[0x59] + 0x4e] = plVar4[0x5a];
    plVar4[0x59] = plVar4[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar4 + 0x4b);
  }
  FUN_10a38284c(param_1,param_2,FUN_10a346038,0,param_3,param_4,param_5);
  plVar1 = plVar4 + 0x4b;
  lVar5 = plVar4[0x59];
  uVar6 = lVar5 - 1;
  plVar4[0x59] = uVar6;
  if (uVar6 < 8) {
    uVar6 = plVar1[lVar5 + 2];
    if (plVar4[0x5a] == uVar6) {
      return;
    }
  }
  else {
    uVar6 = *(ulong *)(plVar4[0x57] + -8);
    plVar4[0x57] = plVar4[0x57] + -8;
    if (plVar4[0x5a] == uVar6) {
      return;
    }
  }
  lVar5 = *plVar1;
  lVar10 = plVar4[0x4c];
  lVar8 = lVar10 - lVar5;
  uVar12 = lVar8 >> 4;
  if (uVar12 < uVar6) {
    uVar13 = uVar6 - uVar12;
    lVar11 = plVar4[0x4d];
    if ((ulong)(lVar11 - lVar10 >> 4) < uVar13) {
      if (uVar6 >> 0x3c == 0) {
        uVar7 = lVar11 - lVar5 >> 3;
        if (uVar7 <= uVar6) {
          uVar7 = uVar6;
        }
        if (0x7fffffffffffffef < (ulong)(lVar11 - lVar5)) {
          uVar7 = 0xfffffffffffffff;
        }
        plStack_68 = plVar1;
        if (uVar7 >> 0x3c == 0) {
          lVar3 = uVar7 << 4;
          __Znwm();
          lVar10 = lVar3 + lVar8;
          _bzero(lVar10,uVar13 * 0x10);
          lVar9 = lVar10 + uVar12 * -0x10;
          _memcpy(lVar9,lVar5,lVar8);
          *plVar1 = lVar9;
          plVar4[0x4c] = lVar10 + uVar13 * 0x10;
          plVar4[0x4d] = lVar3 + uVar7 * 0x10;
          lStack_88 = lVar5;
          lStack_80 = lVar5;
          lStack_78 = lVar5;
          lStack_70 = lVar11;
          func_0x00010988c1b8(&lStack_88);
          goto code_r0x00010988c138;
        }
        func_0x000104c4f740();
      }
      else {
        func_0x00010988c1a4();
      }
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar2)();
    }
    _bzero(lVar10,uVar13 * 0x10);
    plVar4[0x4c] = lVar10 + uVar13 * 0x10;
  }
  else if (uVar6 < uVar12) {
    lVar5 = lVar5 + uVar6 * 0x10;
    while (lVar10 != lVar5) {
      lVar10 = lVar10 + -0x10;
      func_0x00010988c204(lVar10);
    }
    plVar4[0x4c] = lVar5;
  }
code_r0x00010988c138:
  plVar4[0x5a] = uVar6;
  return;
}



/* Entry: 10a38284c; end: 10a38290b;  */

void FUN_10a38284c(undefined4 *param_1,long param_2,code *param_3,ulong param_4,undefined8 param_5,
                  undefined8 param_6,undefined8 param_7)

{
  long *plVar1;
  long lVar2;
  undefined8 auStack_68 [2];
  char cStack_51;
  
  lVar2 = param_2;
  FUN_10a380cf4(param_2,param_5);
  FUN_10a0584c8(param_7);
  func_0x000109898570(auStack_68,param_2,param_6);
  plVar1 = (long *)(lVar2 + ((long)param_4 >> 1));
  if ((param_4 & 1) != 0) {
    param_3 = *(code **)(*plVar1 + ((ulong)param_3 & 0xffffffff));
  }
  (*param_3)(plVar1,auStack_68);
  if (cStack_51 < '\0') {
    __ZdlPv(auStack_68[0]);
  }
  *param_1 = 0;
  return;
}



/* Entry: 10a38290c; end: 10a3829c3;  */

void FUN_10a38290c(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long *plStack_68;
  
  plVar4 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar4[0x59] < 8) {
    plVar4[plVar4[0x59] + 0x4e] = plVar4[0x5a];
    plVar4[0x59] = plVar4[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar4 + 0x4b);
  }
  FUN_10a3829c4(param_1,param_2,FUN_10a346134,0,param_3,param_4,param_5);
  plVar1 = plVar4 + 0x4b;
  lVar5 = plVar4[0x59];
  uVar6 = lVar5 - 1;
  plVar4[0x59] = uVar6;
  if (uVar6 < 8) {
    uVar6 = plVar1[lVar5 + 2];
    if (plVar4[0x5a] == uVar6) {
      return;
    }
  }
  else {
    uVar6 = *(ulong *)(plVar4[0x57] + -8);
    plVar4[0x57] = plVar4[0x57] + -8;
    if (plVar4[0x5a] == uVar6) {
      return;
    }
  }
  lVar5 = *plVar1;
  lVar10 = plVar4[0x4c];
  lVar8 = lVar10 - lVar5;
  uVar12 = lVar8 >> 4;
  if (uVar12 < uVar6) {
    uVar13 = uVar6 - uVar12;
    lVar11 = plVar4[0x4d];
    if ((ulong)(lVar11 - lVar10 >> 4) < uVar13) {
      if (uVar6 >> 0x3c == 0) {
        uVar7 = lVar11 - lVar5 >> 3;
        if (uVar7 <= uVar6) {
          uVar7 = uVar6;
        }
        if (0x7fffffffffffffef < (ulong)(lVar11 - lVar5)) {
          uVar7 = 0xfffffffffffffff;
        }
        plStack_68 = plVar1;
        if (uVar7 >> 0x3c == 0) {
          lVar3 = uVar7 << 4;
          __Znwm();
          lVar10 = lVar3 + lVar8;
          _bzero(lVar10,uVar13 * 0x10);
          lVar9 = lVar10 + uVar12 * -0x10;
          _memcpy(lVar9,lVar5,lVar8);
          *plVar1 = lVar9;
          plVar4[0x4c] = lVar10 + uVar13 * 0x10;
          plVar4[0x4d] = lVar3 + uVar7 * 0x10;
          lStack_88 = lVar5;
          lStack_80 = lVar5;
          lStack_78 = lVar5;
          lStack_70 = lVar11;
          func_0x00010988c1b8(&lStack_88);
          goto code_r0x00010988c138;
        }
        func_0x000104c4f740();
      }
      else {
        func_0x00010988c1a4();
      }
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar2)();
    }
    _bzero(lVar10,uVar13 * 0x10);
    plVar4[0x4c] = lVar10 + uVar13 * 0x10;
  }
  else if (uVar6 < uVar12) {
    lVar5 = lVar5 + uVar6 * 0x10;
    while (lVar10 != lVar5) {
      lVar10 = lVar10 + -0x10;
      func_0x00010988c204(lVar10);
    }
    plVar4[0x4c] = lVar5;
  }
code_r0x00010988c138:
  plVar4[0x5a] = uVar6;
  return;
}



/* Entry: 10a3829c4; end: 10a382c23;  */

void FUN_10a3829c4(undefined4 *param_1,long *param_2,code *param_3,ulong param_4,undefined8 param_5,
                  int *param_6,undefined8 param_7)

{
  char cVar1;
  bool bVar2;
  code *pcVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  long *plVar7;
  long *plStack_a0;
  long *plStack_98;
  long lStack_90;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long *plStack_70;
  int iStack_68;
  long *plStack_60;
  long *plStack_58;
  
  plVar4 = param_2;
  FUN_10a380cf4(param_2,param_5);
  FUN_10a382c24(param_7);
  if (*param_6 == 7) {
    plVar7 = param_2;
    (**(code **)(*param_2 + 0x98))(param_2,*(undefined8 *)(param_6 + 2));
    plVar5 = param_2;
    plStack_58 = plVar7;
    (**(code **)(*param_2 + 0x228))(param_2,&plStack_58);
    if ((int)plVar5 != 0) {
      plVar7 = param_2;
      (**(code **)(*param_2 + 0x58))();
      lVar6 = plVar7[0x48];
      if ((lVar6 == 0) ||
         (___dynamic_cast(lVar6,&PTR_DAT_110b9fb60,&PTR_DAT_110b9fb70,0), lVar6 == 0))
      goto LAB_10a382bd4;
      plStack_60 = plStack_58;
      plStack_58 = (long *)0x0;
      iStack_68 = 7;
      plStack_70 = param_2;
      FUN_10a688ac0(&lStack_90,&plStack_70,*(undefined8 *)(lVar6 + 8));
      if ((3 < iStack_68) && (plStack_60 != (long *)0x0)) {
        (**(code **)*plStack_60)();
      }
    }
    if (plStack_58 != (long *)0x0) {
      (**(code **)*plStack_58)();
    }
    if (((ulong)plVar5 & 1) != 0) {
      plVar7 = (long *)0x60;
      __Znwm();
      plVar7[1] = 0;
      plVar7[2] = 0;
      *plVar7 = (long)&PTR_FUN_110bc76c8;
      plStack_a0 = plVar7 + 3;
      plVar7[4] = lStack_88;
      *plStack_a0 = lStack_90;
      if (lStack_88 != 0) {
        plVar5 = (long *)(lStack_88 + 8);
        do {
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
          if (bVar2) {
            *plVar5 = *plVar5 + 1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
      }
      plVar7[6] = lStack_78;
      plVar7[5] = lStack_80;
      if (lStack_78 != 0) {
        plVar5 = (long *)(lStack_78 + 0x10);
        do {
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
          if (bVar2) {
            *plVar5 = *plVar5 + 1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
      }
      *(undefined1 *)(plVar7 + 0xb) = 2;
      plStack_98 = plVar7;
      FUN_10a688c1c(&lStack_90);
      plVar4 = (long *)((long)plVar4 + ((long)param_4 >> 1));
      if ((param_4 & 1) != 0) {
        param_3 = *(code **)(*plVar4 + ((ulong)param_3 & 0xffffffff));
      }
      (*param_3)(plVar4,&plStack_a0);
      plVar4 = plStack_98;
      if (plStack_98 != (long *)0x0) {
        plVar7 = plStack_98 + 1;
        do {
          lVar6 = *plVar7;
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(plVar7,0x10);
          if (bVar2) {
            *plVar7 = lVar6 + -1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
        if (lVar6 == 0) {
          (**(code **)(*plStack_98 + 0x10))(plStack_98);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
        }
      }
      *param_1 = 0;
      return;
    }
  }
  func_0x00010988bd28(&UNK_10f6347ad);
LAB_10a382bd4:
  func_0x00010988bd28(&UNK_10f685540);
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x10a382be4);
  (*pcVar3)();
}



/* Entry: 10a382c24; end: 10a382c47;  */

void FUN_10a382c24(undefined8 param_1)

{
  undefined8 *puVar1;
  
  if ((int)param_1 == 1) {
    return;
  }
  puVar1 = (undefined8 *)0x1;
  FUN_10a052ee0(1,0,param_1);
  *puVar1 = &PTR_FUN_110bc76c8;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10a382c48; end: 10a382c57;  */

void FUN_10a382c48(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110bc76c8;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10a382c58; end: 10a382c77;  */

void FUN_10a382c58(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110bc76c8;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a382c78; end: 10a382c9f;  */

undefined1  [16] FUN_10a382c78(long param_1)

{
  long *plVar1;
  byte bVar2;
  char cVar3;
  bool bVar4;
  code *UNRECOVERED_JUMPTABLE;
  undefined8 *puVar5;
  undefined **ppuVar6;
  long *plVar7;
  undefined8 uVar8;
  long lVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  code *pcStack_78;
  undefined **ppuStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  long lStack_38;
  
  bVar2 = *(byte *)(param_1 + 0x58);
  if (3 < (ulong)bVar2) {
                    /* WARNING: Does not return */
    UNRECOVERED_JUMPTABLE = (code *)SoftwareBreakpoint(1,0x10a382c9c);
    (*UNRECOVERED_JUMPTABLE)();
  }
  auVar10._8_8_ = (code **)(&PTR_FUN_110b9a040)[bVar2];
  puVar5 = (undefined8 *)(param_1 + 0x18);
  switch(bVar2) {
  case 0:
    auVar10._0_8_ = puVar5;
    return auVar10;
  case 1:
    puVar5 = (undefined8 *)(param_1 + 0x20);
    UNRECOVERED_JUMPTABLE = *(code **)*puVar5;
                    /* WARNING: Could not recover jumptable at 0x00010a00496c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)();
    auVar11._8_8_ = UNRECOVERED_JUMPTABLE;
    auVar11._0_8_ = puVar5;
    return auVar11;
  case 3:
    auVar12._8_8_ = auVar10._8_8_;
    auVar12._0_8_ = puVar5;
    return auVar12;
  }
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar6 = &PTR___tlv_bootstrap_11340df48;
  (*(code *)PTR___tlv_bootstrap_11340df48)();
  if (((*ppuVar6 == (undefined *)0x0) &&
      (plVar7 = *(long **)(param_1 + 0x30), plVar7 != (long *)0x0)) &&
     (__ZNSt3__119__shared_weak_count4lockEv(), plVar7 != (long *)0x0)) {
    if (*(long *)(param_1 + 0x28) != 0) {
      uVar8 = *(undefined8 *)(*(long *)(param_1 + 0x28) + 0x870);
      uStack_60 = *(undefined8 *)(param_1 + 0x20);
      uStack_68 = *puVar5;
      *puVar5 = 0;
      *(undefined8 *)(param_1 + 0x20) = 0;
      pcStack_78 = FUN_10a69fabc;
      ppuStack_70 = &PTR_DAT_110c0ce80;
      auVar10._8_8_ = &pcStack_78;
      FUN_10a4634ec(uVar8);
      (*(code *)*ppuStack_70)(&ppuStack_70);
    }
    plVar1 = plVar7 + 1;
    do {
      lVar9 = *plVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = lVar9 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar9 == 0) {
      (**(code **)(*plVar7 + 0x10))(plVar7);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
    }
  }
  if (*(long *)(param_1 + 0x30) != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  func_0x00010a004dac(puVar5);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    auVar13._8_8_ = auVar10._8_8_;
    auVar13._0_8_ = puVar5;
    return auVar13;
  }
  ___stack_chk_fail();
  if ((int)auVar10._8_8_ == 0) {
    __Unwind_Resume();
  }
  func_0x000104bd46a0();
  auVar14._8_8_ = 0x18;
  auVar14._0_8_ = &UNK_10f66c09c;
  return auVar14;
}



/* Entry: 10a382ca0; end: 10a382d57;  */

void FUN_10a382ca0(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long *plStack_68;
  
  plVar4 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar4[0x59] < 8) {
    plVar4[plVar4[0x59] + 0x4e] = plVar4[0x5a];
    plVar4[0x59] = plVar4[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar4 + 0x4b);
  }
  FUN_10a3829c4(param_1,param_2,FUN_10a3468d4,0,param_3,param_4,param_5);
  plVar1 = plVar4 + 0x4b;
  lVar5 = plVar4[0x59];
  uVar6 = lVar5 - 1;
  plVar4[0x59] = uVar6;
  if (uVar6 < 8) {
    uVar6 = plVar1[lVar5 + 2];
    if (plVar4[0x5a] == uVar6) {
      return;
    }
  }
  else {
    uVar6 = *(ulong *)(plVar4[0x57] + -8);
    plVar4[0x57] = plVar4[0x57] + -8;
    if (plVar4[0x5a] == uVar6) {
      return;
    }
  }
  lVar5 = *plVar1;
  lVar10 = plVar4[0x4c];
  lVar8 = lVar10 - lVar5;
  uVar12 = lVar8 >> 4;
  if (uVar12 < uVar6) {
    uVar13 = uVar6 - uVar12;
    lVar11 = plVar4[0x4d];
    if ((ulong)(lVar11 - lVar10 >> 4) < uVar13) {
      if (uVar6 >> 0x3c == 0) {
        uVar7 = lVar11 - lVar5 >> 3;
        if (uVar7 <= uVar6) {
          uVar7 = uVar6;
        }
        if (0x7fffffffffffffef < (ulong)(lVar11 - lVar5)) {
          uVar7 = 0xfffffffffffffff;
        }
        plStack_68 = plVar1;
        if (uVar7 >> 0x3c == 0) {
          lVar3 = uVar7 << 4;
          __Znwm();
          lVar10 = lVar3 + lVar8;
          _bzero(lVar10,uVar13 * 0x10);
          lVar9 = lVar10 + uVar12 * -0x10;
          _memcpy(lVar9,lVar5,lVar8);
          *plVar1 = lVar9;
          plVar4[0x4c] = lVar10 + uVar13 * 0x10;
          plVar4[0x4d] = lVar3 + uVar7 * 0x10;
          lStack_88 = lVar5;
          lStack_80 = lVar5;
          lStack_78 = lVar5;
          lStack_70 = lVar11;
          func_0x00010988c1b8(&lStack_88);
          goto code_r0x00010988c138;
        }
        func_0x000104c4f740();
      }
      else {
        func_0x00010988c1a4();
      }
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar2)();
    }
    _bzero(lVar10,uVar13 * 0x10);
    plVar4[0x4c] = lVar10 + uVar13 * 0x10;
  }
  else if (uVar6 < uVar12) {
    lVar5 = lVar5 + uVar6 * 0x10;
    while (lVar10 != lVar5) {
      lVar10 = lVar10 + -0x10;
      func_0x00010988c204(lVar10);
    }
    plVar4[0x4c] = lVar5;
  }
code_r0x00010988c138:
  plVar4[0x5a] = uVar6;
  return;
}



/* Entry: 10a382d58; end: 10a382e73;  */

void FUN_10a382d58(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  char cVar1;
  bool bVar2;
  code *pcVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  ulong uVar14;
  ulong uVar15;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long *plStack_68;
  long *in_stack_ffffffffffffffb8;
  
  plVar5 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar5[0x59] < 8) {
    plVar5[plVar5[0x59] + 0x4e] = plVar5[0x5a];
    plVar5[0x59] = plVar5[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar5 + 0x4b);
  }
  plVar6 = param_2;
  FUN_10a380cf4(param_2,param_3);
  FUN_10a382e74(param_5);
  FUN_10a382e98(&stack0xffffffffffffffb0,param_2,param_4);
  FUN_10a346c40(plVar6,&stack0xffffffffffffffb0);
  if (in_stack_ffffffffffffffb8 != (long *)0x0) {
    plVar6 = in_stack_ffffffffffffffb8 + 1;
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
      (**(code **)(*in_stack_ffffffffffffffb8 + 0x10))(in_stack_ffffffffffffffb8);
      __ZNSt3__119__shared_weak_count14__release_weakEv(in_stack_ffffffffffffffb8);
    }
  }
  *param_1 = 0;
  plVar6 = plVar5 + 0x4b;
  lVar9 = plVar5[0x59];
  uVar7 = lVar9 - 1;
  plVar5[0x59] = uVar7;
  if (uVar7 < 8) {
    uVar7 = plVar6[lVar9 + 2];
    if (plVar5[0x5a] == uVar7) {
      return;
    }
  }
  else {
    uVar7 = *(ulong *)(plVar5[0x57] + -8);
    plVar5[0x57] = plVar5[0x57] + -8;
    if (plVar5[0x5a] == uVar7) {
      return;
    }
  }
  lVar9 = *plVar6;
  lVar12 = plVar5[0x4c];
  lVar10 = lVar12 - lVar9;
  uVar14 = lVar10 >> 4;
  if (uVar14 < uVar7) {
    uVar15 = uVar7 - uVar14;
    lVar13 = plVar5[0x4d];
    if ((ulong)(lVar13 - lVar12 >> 4) < uVar15) {
      if (uVar7 >> 0x3c == 0) {
        uVar8 = lVar13 - lVar9 >> 3;
        if (uVar8 <= uVar7) {
          uVar8 = uVar7;
        }
        if (0x7fffffffffffffef < (ulong)(lVar13 - lVar9)) {
          uVar8 = 0xfffffffffffffff;
        }
        plStack_68 = plVar6;
        if (uVar8 >> 0x3c == 0) {
          lVar4 = uVar8 << 4;
          __Znwm();
          lVar12 = lVar4 + lVar10;
          _bzero(lVar12,uVar15 * 0x10);
          lVar11 = lVar12 + uVar14 * -0x10;
          _memcpy(lVar11,lVar9,lVar10);
          *plVar6 = lVar11;
          plVar5[0x4c] = lVar12 + uVar15 * 0x10;
          plVar5[0x4d] = lVar4 + uVar8 * 0x10;
          lStack_88 = lVar9;
          lStack_80 = lVar9;
          lStack_78 = lVar9;
          lStack_70 = lVar13;
          func_0x00010988c1b8(&lStack_88);
          goto code_r0x00010988c138;
        }
        func_0x000104c4f740();
      }
      else {
        func_0x00010988c1a4();
      }
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar3)();
    }
    _bzero(lVar12,uVar15 * 0x10);
    plVar5[0x4c] = lVar12 + uVar15 * 0x10;
  }
  else if (uVar7 < uVar14) {
    lVar9 = lVar9 + uVar7 * 0x10;
    while (lVar12 != lVar9) {
      lVar12 = lVar12 + -0x10;
      func_0x00010988c204(lVar12);
    }
    plVar5[0x4c] = lVar9;
  }
code_r0x00010988c138:
  plVar5[0x5a] = uVar7;
  return;
}



/* Entry: 10a382e74; end: 10a382e97;  */

void FUN_10a382e74(undefined8 param_1)

{
  undefined8 extraout_x8;
  undefined1 auStack_58 [39];
  undefined1 uStack_31;
  
  if ((int)param_1 == 1) {
    return;
  }
  FUN_10a052ee0(1,0,param_1);
  FUN_10a086014(auStack_58);
  FUN_10a382ef0(extraout_x8,&uStack_31,auStack_58);
  FUN_10a688c1c(auStack_58);
  return;
}



/* Entry: 10a382e98; end: 10a382eef;  */

void FUN_10a382e98(undefined8 param_1)

{
  undefined1 auStack_48 [39];
  undefined1 uStack_21;
  
  FUN_10a086014(auStack_48);
  FUN_10a382ef0(param_1,&uStack_21,auStack_48);
  FUN_10a688c1c(auStack_48);
  return;
}



/* Entry: 10a382ef0; end: 10a382f47;  */

void FUN_10a382ef0(long *param_1)

{
  long lVar1;
  
  lVar1 = 0x60;
  __Znwm();
  FUN_10a382f48();
  *param_1 = lVar1 + 0x18;
  param_1[1] = lVar1;
  return;
}



/* Entry: 10a382f48; end: 10a382fc3;  */

void FUN_10a382f48(undefined8 *param_1,undefined8 *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined8 uVar5;
  
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_DAT_110bc8970;
  *(undefined1 *)(param_1 + 0xb) = 3;
  lVar4 = param_2[1];
  uVar5 = *param_2;
  param_1[4] = param_2[1];
  param_1[3] = uVar5;
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
  lVar4 = param_2[3];
  uVar5 = param_2[2];
  param_1[6] = param_2[3];
  param_1[5] = uVar5;
  if (lVar4 != 0) {
    plVar1 = (long *)(lVar4 + 0x10);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  *(undefined1 *)(param_1 + 0xb) = 2;
  return;
}



/* Entry: 10a382fc4; end: 10a382fe3;  */

void FUN_10a382fc4(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110bc8970;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a382fe4; end: 10a38300b;  */

undefined1  [16] FUN_10a382fe4(long param_1)

{
  long *plVar1;
  byte bVar2;
  char cVar3;
  bool bVar4;
  code *UNRECOVERED_JUMPTABLE;
  undefined8 *puVar5;
  undefined **ppuVar6;
  long *plVar7;
  undefined8 uVar8;
  long lVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  code *pcStack_78;
  undefined **ppuStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  long lStack_38;
  
  bVar2 = *(byte *)(param_1 + 0x58);
  if (3 < (ulong)bVar2) {
                    /* WARNING: Does not return */
    UNRECOVERED_JUMPTABLE = (code *)SoftwareBreakpoint(1,0x10a383008);
    (*UNRECOVERED_JUMPTABLE)();
  }
  auVar10._8_8_ = (code **)(&PTR_FUN_110b9a040)[bVar2];
  puVar5 = (undefined8 *)(param_1 + 0x18);
  switch(bVar2) {
  case 0:
    auVar10._0_8_ = puVar5;
    return auVar10;
  case 1:
    puVar5 = (undefined8 *)(param_1 + 0x20);
    UNRECOVERED_JUMPTABLE = *(code **)*puVar5;
                    /* WARNING: Could not recover jumptable at 0x00010a00496c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)();
    auVar11._8_8_ = UNRECOVERED_JUMPTABLE;
    auVar11._0_8_ = puVar5;
    return auVar11;
  case 3:
    auVar12._8_8_ = auVar10._8_8_;
    auVar12._0_8_ = puVar5;
    return auVar12;
  }
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar6 = &PTR___tlv_bootstrap_11340df48;
  (*(code *)PTR___tlv_bootstrap_11340df48)();
  if (((*ppuVar6 == (undefined *)0x0) &&
      (plVar7 = *(long **)(param_1 + 0x30), plVar7 != (long *)0x0)) &&
     (__ZNSt3__119__shared_weak_count4lockEv(), plVar7 != (long *)0x0)) {
    if (*(long *)(param_1 + 0x28) != 0) {
      uVar8 = *(undefined8 *)(*(long *)(param_1 + 0x28) + 0x870);
      uStack_60 = *(undefined8 *)(param_1 + 0x20);
      uStack_68 = *puVar5;
      *puVar5 = 0;
      *(undefined8 *)(param_1 + 0x20) = 0;
      pcStack_78 = FUN_10a69fabc;
      ppuStack_70 = &PTR_DAT_110c0ce80;
      auVar10._8_8_ = &pcStack_78;
      FUN_10a4634ec(uVar8);
      (*(code *)*ppuStack_70)(&ppuStack_70);
    }
    plVar1 = plVar7 + 1;
    do {
      lVar9 = *plVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = lVar9 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar9 == 0) {
      (**(code **)(*plVar7 + 0x10))(plVar7);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
    }
  }
  if (*(long *)(param_1 + 0x30) != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  func_0x00010a004dac(puVar5);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    auVar13._8_8_ = auVar10._8_8_;
    auVar13._0_8_ = puVar5;
    return auVar13;
  }
  ___stack_chk_fail();
  if ((int)auVar10._8_8_ == 0) {
    __Unwind_Resume();
  }
  func_0x000104bd46a0();
  auVar14._8_8_ = 0x18;
  auVar14._0_8_ = &UNK_10f66c09c;
  return auVar14;
}



/* Entry: 10a38300c; end: 10a383413;  */

void FUN_10a38300c(undefined4 *param_1,long *param_2,undefined8 param_3,long param_4,
                  undefined8 param_5)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  char cVar4;
  bool bVar5;
  undefined8 uVar6;
  long *plVar7;
  code *pcVar8;
  long lVar9;
  long *plVar10;
  long *plVar11;
  long lVar12;
  ulong uVar13;
  ulong uVar14;
  long lVar15;
  long lVar16;
  long *plVar17;
  ulong uVar18;
  ulong uVar19;
  undefined8 uStack_f0;
  long *plStack_e8;
  long *plStack_e0;
  long *plStack_d8;
  long lStack_d0;
  long *plStack_c8;
  undefined8 uStack_c0;
  long *plStack_b8;
  long *plStack_b0;
  long *plStack_a8;
  long lStack_a0;
  long *plStack_98;
  undefined8 uStack_90;
  long *plStack_88;
  long *plStack_80;
  long *plStack_78;
  long lStack_70;
  long *plStack_68;
  
  plVar10 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar10[0x59] < 8) {
    plVar10[plVar10[0x59] + 0x4e] = plVar10[0x5a];
    plVar10[0x59] = plVar10[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar10 + 0x4b);
  }
  plVar11 = param_2;
  FUN_10a380cf4(param_2,param_3);
  FUN_10a059260(param_5);
  FUN_10a059284(&lStack_d0,param_2,param_4);
  FUN_10a0592fc(&plStack_e0,param_2,param_4 + 0x10);
  FUN_10a059354(&uStack_f0,param_2,param_4 + 0x20);
  plVar1 = plStack_c8;
  lVar15 = lStack_d0;
  plVar3 = plStack_d8;
  plVar7 = plStack_e0;
  plVar17 = plStack_e8;
  uVar6 = uStack_f0;
  lStack_a0 = lStack_d0;
  plStack_98 = plStack_c8;
  lStack_d0 = 0;
  plStack_c8 = (long *)0x0;
  plStack_b0 = plStack_e0;
  plStack_a8 = plStack_d8;
  plStack_e0 = (long *)0x0;
  plStack_d8 = (long *)0x0;
  uStack_c0 = uStack_f0;
  plStack_b8 = plStack_e8;
  uStack_f0 = 0;
  plStack_e8 = (long *)0x0;
  FUN_10a3c8488();
  if (0x134 < (int)param_2[3]) {
    FUN_10a00946c(&UNK_10f65035f);
                    /* WARNING: Does not return */
    pcVar8 = (code *)SoftwareBreakpoint(1,0x10a383398);
    (*pcVar8)();
  }
  FUN_10a345c64(plVar11);
  lVar12 = plVar11[0x28];
  lStack_70 = lVar15;
  plStack_68 = plVar1;
  if (plVar1 != (long *)0x0) {
    plVar1 = plVar1 + 1;
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar5) {
        *plVar1 = *plVar1 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  plStack_80 = plVar7;
  plStack_78 = plVar3;
  if (plVar3 != (long *)0x0) {
    plVar3 = plVar3 + 1;
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar3,0x10);
      if (bVar5) {
        *plVar3 = *plVar3 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  uStack_90 = uVar6;
  plStack_88 = plVar17;
  if (plVar17 != (long *)0x0) {
    plVar1 = plVar17 + 1;
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar5) {
        *plVar1 = *plVar1 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  FUN_10a00b408(lVar12,&lStack_70,&plStack_80,&uStack_90);
  plVar1 = plStack_88;
  if (plStack_88 != (long *)0x0) {
    plVar3 = plStack_88 + 1;
    do {
      lVar15 = *plVar3;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar3,0x10);
      if (bVar5) {
        *plVar3 = lVar15 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar15 == 0) {
      (**(code **)(*plStack_88 + 0x10))(plStack_88);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar1);
    }
  }
  plVar1 = plStack_78;
  if (plStack_78 != (long *)0x0) {
    plVar3 = plStack_78 + 1;
    do {
      lVar15 = *plVar3;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar3,0x10);
      if (bVar5) {
        *plVar3 = lVar15 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar15 == 0) {
      (**(code **)(*plStack_78 + 0x10))(plStack_78);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar1);
    }
  }
  plVar1 = plStack_68;
  if (plStack_68 != (long *)0x0) {
    plVar3 = plStack_68 + 1;
    do {
      lVar15 = *plVar3;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar3,0x10);
      if (bVar5) {
        *plVar3 = lVar15 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar15 == 0) {
      (**(code **)(*plStack_68 + 0x10))(plStack_68);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar1);
    }
  }
  if (plVar17 != (long *)0x0) {
    plVar1 = plVar17 + 1;
    do {
      lVar15 = *plVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar5) {
        *plVar1 = lVar15 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar15 == 0) {
      (**(code **)(*plVar17 + 0x10))(plVar17);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar17);
    }
  }
  plVar1 = plStack_a8;
  if (plStack_a8 != (long *)0x0) {
    plVar3 = plStack_a8 + 1;
    do {
      lVar15 = *plVar3;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar3,0x10);
      if (bVar5) {
        *plVar3 = lVar15 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar15 == 0) {
      (**(code **)(*plStack_a8 + 0x10))(plStack_a8);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar1);
    }
  }
  plVar1 = plStack_98;
  if (plStack_98 != (long *)0x0) {
    plVar3 = plStack_98 + 1;
    do {
      lVar15 = *plVar3;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar3,0x10);
      if (bVar5) {
        *plVar3 = lVar15 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar15 == 0) {
      (**(code **)(*plStack_98 + 0x10))(plStack_98);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar1);
    }
  }
  plVar1 = plStack_e8;
  if (plStack_e8 != (long *)0x0) {
    plVar3 = plStack_e8 + 1;
    do {
      lVar15 = *plVar3;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar3,0x10);
      if (bVar5) {
        *plVar3 = lVar15 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar15 == 0) {
      (**(code **)(*plStack_e8 + 0x10))(plStack_e8);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar1);
    }
  }
  plVar1 = plStack_d8;
  if (plStack_d8 != (long *)0x0) {
    plVar3 = plStack_d8 + 1;
    do {
      lVar15 = *plVar3;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar3,0x10);
      if (bVar5) {
        *plVar3 = lVar15 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar15 == 0) {
      (**(code **)(*plStack_d8 + 0x10))(plStack_d8);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar1);
    }
  }
  plVar1 = plStack_c8;
  if (plStack_c8 != (long *)0x0) {
    plVar3 = plStack_c8 + 1;
    do {
      lVar15 = *plVar3;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar3,0x10);
      if (bVar5) {
        *plVar3 = lVar15 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar15 == 0) {
      (**(code **)(*plStack_c8 + 0x10))(plStack_c8);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar1);
    }
  }
  *param_1 = 0;
  plVar1 = plVar10 + 0x4b;
  lVar15 = plVar10[0x59];
  uVar13 = lVar15 - 1;
  plVar10[0x59] = uVar13;
  if (uVar13 < 8) {
    uVar13 = plVar1[lVar15 + 2];
    if (plVar10[0x5a] == uVar13) {
      return;
    }
  }
  else {
    uVar13 = *(ulong *)(plVar10[0x57] + -8);
    plVar10[0x57] = plVar10[0x57] + -8;
    if (plVar10[0x5a] == uVar13) {
      return;
    }
  }
  plVar3 = (long *)*plVar1;
  plVar17 = (long *)plVar10[0x4c];
  lVar15 = (long)plVar17 - (long)plVar3;
  uVar18 = lVar15 >> 4;
  if (uVar18 < uVar13) {
    uVar19 = uVar13 - uVar18;
    lVar12 = plVar10[0x4d];
    if ((ulong)(lVar12 - (long)plVar17 >> 4) < uVar19) {
      if (uVar13 >> 0x3c == 0) {
        uVar14 = lVar12 - (long)plVar3 >> 3;
        if (uVar14 <= uVar13) {
          uVar14 = uVar13;
        }
        if (0x7fffffffffffffef < (ulong)(lVar12 - (long)plVar3)) {
          uVar14 = 0xfffffffffffffff;
        }
        plStack_68 = plVar1;
        if (uVar14 >> 0x3c == 0) {
          lVar9 = uVar14 << 4;
          __Znwm();
          lVar2 = lVar9 + lVar15;
          _bzero(lVar2,uVar19 * 0x10);
          lVar16 = lVar2 + uVar18 * -0x10;
          _memcpy(lVar16,plVar3,lVar15);
          *plVar1 = lVar16;
          plVar10[0x4c] = lVar2 + uVar19 * 0x10;
          plVar10[0x4d] = lVar9 + uVar14 * 0x10;
          plStack_88 = plVar3;
          plStack_80 = plVar3;
          plStack_78 = plVar3;
          lStack_70 = lVar12;
          func_0x00010988c1b8(&plStack_88);
          goto code_r0x00010988c138;
        }
        func_0x000104c4f740();
      }
      else {
        func_0x00010988c1a4();
      }
                    /* WARNING: Does not return */
      pcVar8 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar8)();
    }
    _bzero(plVar17,uVar19 * 0x10);
    plVar10[0x4c] = (long)(plVar17 + uVar19 * 2);
  }
  else if (uVar13 < uVar18) {
    while (plVar17 != plVar3 + uVar13 * 2) {
      plVar17 = plVar17 + -2;
      func_0x00010988c204(plVar17);
    }
    plVar10[0x4c] = (long)(plVar3 + uVar13 * 2);
  }
code_r0x00010988c138:
  plVar10[0x5a] = uVar13;
  return;
}



/* Entry: 10a383414; end: 10a38341b;  */

void FUN_10a383414(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbce60. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5__110346350)
            (param_1 + 0x108);
  return;
}



/* Entry: 10a38341c; end: 10a383547;  */

void FUN_10a38341c(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  code *pcVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  undefined *puVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  ulong uVar14;
  ulong uVar15;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long *plStack_68;
  
  plVar3 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar3[0x59] < 8) {
    plVar3[plVar3[0x59] + 0x4e] = plVar3[0x5a];
    plVar3[0x59] = plVar3[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar3 + 0x4b);
  }
  plVar4 = param_2;
  func_0x000109898688(param_2,param_3);
  if (plVar4 == (long *)0x0) {
    puVar6 = &UNK_10f68f52e;
  }
  else {
    plVar5 = param_2;
    FUN_10a052c2c(param_2,plVar4);
    if ((plVar5 != (long *)0x0) && (___dynamic_cast(), plVar5 != (long *)0x0)) {
      FUN_10a052e3c(param_5);
      uVar8 = plVar5[0x22];
      plVar4 = (long *)plVar5[0x21];
      if (-1 < (char)*(byte *)((long)plVar5 + 0x11f)) {
        uVar8 = (ulong)*(byte *)((long)plVar5 + 0x11f);
        plVar4 = plVar5 + 0x21;
      }
      (**(code **)(*param_2 + 0x128))(param_1 + 2,param_2,plVar4,uVar8);
      *param_1 = 6;
      plVar4 = plVar3 + 0x4b;
      lVar7 = plVar3[0x59];
      uVar8 = lVar7 - 1;
      plVar3[0x59] = uVar8;
      if (uVar8 < 8) {
        uVar8 = plVar4[lVar7 + 2];
        if (plVar3[0x5a] == uVar8) {
          return;
        }
      }
      else {
        uVar8 = *(ulong *)(plVar3[0x57] + -8);
        plVar3[0x57] = plVar3[0x57] + -8;
        if (plVar3[0x5a] == uVar8) {
          return;
        }
      }
      lVar7 = *plVar4;
      lVar12 = plVar3[0x4c];
      lVar10 = lVar12 - lVar7;
      uVar14 = lVar10 >> 4;
      if (uVar14 < uVar8) {
        uVar15 = uVar8 - uVar14;
        lVar13 = plVar3[0x4d];
        if ((ulong)(lVar13 - lVar12 >> 4) < uVar15) {
          if (uVar8 >> 0x3c == 0) {
            uVar9 = lVar13 - lVar7 >> 3;
            if (uVar9 <= uVar8) {
              uVar9 = uVar8;
            }
            if (0x7fffffffffffffef < (ulong)(lVar13 - lVar7)) {
              uVar9 = 0xfffffffffffffff;
            }
            plStack_68 = plVar4;
            if (uVar9 >> 0x3c == 0) {
              lVar2 = uVar9 << 4;
              __Znwm();
              lVar12 = lVar2 + lVar10;
              _bzero(lVar12,uVar15 * 0x10);
              lVar11 = lVar12 + uVar14 * -0x10;
              _memcpy(lVar11,lVar7,lVar10);
              *plVar4 = lVar11;
              plVar3[0x4c] = lVar12 + uVar15 * 0x10;
              plVar3[0x4d] = lVar2 + uVar9 * 0x10;
              lStack_88 = lVar7;
              lStack_80 = lVar7;
              lStack_78 = lVar7;
              lStack_70 = lVar13;
              func_0x00010988c1b8(&lStack_88);
              goto code_r0x00010988c138;
            }
            func_0x000104c4f740();
          }
          else {
            func_0x00010988c1a4();
          }
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x10988c16c);
          (*pcVar1)();
        }
        _bzero(lVar12,uVar15 * 0x10);
        plVar3[0x4c] = lVar12 + uVar15 * 0x10;
      }
      else if (uVar8 < uVar14) {
        lVar7 = lVar7 + uVar8 * 0x10;
        while (lVar12 != lVar7) {
          lVar12 = lVar12 + -0x10;
          func_0x00010988c204(lVar12);
        }
        plVar3[0x4c] = lVar7;
      }
code_r0x00010988c138:
      plVar3[0x5a] = uVar8;
      return;
    }
    puVar6 = &UNK_10f685496;
  }
  func_0x00010988bd28(puVar6);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10a383534);
  (*pcVar1)();
}



/* Entry: 10a383548; end: 10a3835ff;  */

void FUN_10a383548(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long *plStack_68;
  
  plVar4 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar4[0x59] < 8) {
    plVar4[plVar4[0x59] + 0x4e] = plVar4[0x5a];
    plVar4[0x59] = plVar4[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar4 + 0x4b);
  }
  FUN_10a38284c(param_1,param_2,FUN_10a383414,0,param_3,param_4,param_5);
  plVar1 = plVar4 + 0x4b;
  lVar5 = plVar4[0x59];
  uVar6 = lVar5 - 1;
  plVar4[0x59] = uVar6;
  if (uVar6 < 8) {
    uVar6 = plVar1[lVar5 + 2];
    if (plVar4[0x5a] == uVar6) {
      return;
    }
  }
  else {
    uVar6 = *(ulong *)(plVar4[0x57] + -8);
    plVar4[0x57] = plVar4[0x57] + -8;
    if (plVar4[0x5a] == uVar6) {
      return;
    }
  }
  lVar5 = *plVar1;
  lVar10 = plVar4[0x4c];
  lVar8 = lVar10 - lVar5;
  uVar12 = lVar8 >> 4;
  if (uVar12 < uVar6) {
    uVar13 = uVar6 - uVar12;
    lVar11 = plVar4[0x4d];
    if ((ulong)(lVar11 - lVar10 >> 4) < uVar13) {
      if (uVar6 >> 0x3c == 0) {
        uVar7 = lVar11 - lVar5 >> 3;
        if (uVar7 <= uVar6) {
          uVar7 = uVar6;
        }
        if (0x7fffffffffffffef < (ulong)(lVar11 - lVar5)) {
          uVar7 = 0xfffffffffffffff;
        }
        plStack_68 = plVar1;
        if (uVar7 >> 0x3c == 0) {
          lVar3 = uVar7 << 4;
          __Znwm();
          lVar10 = lVar3 + lVar8;
          _bzero(lVar10,uVar13 * 0x10);
          lVar9 = lVar10 + uVar12 * -0x10;
          _memcpy(lVar9,lVar5,lVar8);
          *plVar1 = lVar9;
          plVar4[0x4c] = lVar10 + uVar13 * 0x10;
          plVar4[0x4d] = lVar3 + uVar7 * 0x10;
          lStack_88 = lVar5;
          lStack_80 = lVar5;
          lStack_78 = lVar5;
          lStack_70 = lVar11;
          func_0x00010988c1b8(&lStack_88);
          goto code_r0x00010988c138;
        }
        func_0x000104c4f740();
      }
      else {
        func_0x00010988c1a4();
      }
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar2)();
    }
    _bzero(lVar10,uVar13 * 0x10);
    plVar4[0x4c] = lVar10 + uVar13 * 0x10;
  }
  else if (uVar6 < uVar12) {
    lVar5 = lVar5 + uVar6 * 0x10;
    while (lVar10 != lVar5) {
      lVar10 = lVar10 + -0x10;
      func_0x00010988c204(lVar10);
    }
    plVar4[0x4c] = lVar5;
  }
code_r0x00010988c138:
  plVar4[0x5a] = uVar6;
  return;
}



/* Entry: 10a383600; end: 10a3836bf;  */

void FUN_10a383600(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long *plVar1;
  code *pcStack_48;
  
  plVar1 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar1[0x59] < 8) {
    plVar1[plVar1[0x59] + 0x4e] = plVar1[0x5a];
    plVar1[0x59] = plVar1[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar1 + 0x4b);
  }
  pcStack_48 = FUN_10a34732c;
  FUN_10a05a2e0(param_1,param_2,&pcStack_48,param_4,param_5);
  func_0x00010988c170(plVar1 + 0x4b);
  return;
}



/* Entry: 10a3836c0; end: 10a38385f;  */

long FUN_10a3836c0(long param_1)

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



/* Entry: 10a383860; end: 10a383a63;  */

void FUN_10a383860(undefined8 *param_1,undefined8 *param_2)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  long *plVar6;
  undefined8 *puStack_90;
  undefined8 *puStack_88;
  int aiStack_80 [2];
  undefined8 *puStack_78;
  undefined *puStack_70;
  undefined8 *puStack_68;
  undefined8 **ppuStack_60;
  long *plStack_58;
  undefined1 *puStack_50;
  undefined ***pppuStack_48;
  undefined **ppuStack_40;
  undefined8 uStack_38;
  
  func_0x000109884c0c(&ppuStack_60,param_1 + 1,*param_1);
  func_0x000109884820(&puStack_88,&ppuStack_60,*param_1);
  if (ppuStack_60 != (undefined8 **)0x0) {
    (*(code *)**ppuStack_60)();
  }
  (**(code **)(*(long *)*param_1 + 0x30))(&puStack_90);
  plVar6 = (long *)*param_1;
  plStack_58 = (long *)param_2[1];
  ppuStack_60 = (undefined8 **)*param_2;
  if (param_2[1] != 0) {
    plVar1 = (long *)(param_2[1] + 8);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = *plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  ppuStack_40 = &PTR_DAT_110c351e0;
  func_0x000109899de4(&puStack_70,plVar6,&ppuStack_60,&ppuStack_40,0,0);
  plVar1 = plStack_58;
  if (plStack_58 != (long *)0x0) {
    plVar2 = plStack_58 + 1;
    do {
      lVar5 = *plVar2;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar4) {
        *plVar2 = lVar5 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar5 == 0) {
      (**(code **)(*plStack_58 + 0x10))(plStack_58);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar1);
    }
  }
  uStack_38 = 1;
  ppuStack_40 = &puStack_70;
  (**(code **)(*plVar6 + 0x58))(plVar6);
  ppuStack_60 = &puStack_88;
  plStack_58 = plVar6;
  puStack_50 = (undefined1 *)&puStack_90;
  pppuStack_48 = &ppuStack_40;
  func_0x0001098960c0(aiStack_80);
  if ((3 < aiStack_80[0]) && (puStack_78 != (undefined8 *)0x0)) {
    (**(code **)*puStack_78)();
  }
  if ((3 < (int)puStack_70) && (puStack_68 != (undefined8 *)0x0)) {
    (**(code **)*puStack_68)();
  }
  if (puStack_90 != (undefined8 *)0x0) {
    (**(code **)*puStack_90)();
  }
  if (puStack_88 != (undefined8 *)0x0) {
    (**(code **)*puStack_88)();
  }
  return;
}



/* Entry: 10a383a64; end: 10a383a73;  */

void FUN_10a383a64(long param_1)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  undefined8 *puVar5;
  long lVar6;
  long *plVar7;
  undefined8 *puStack_90;
  undefined8 *puStack_88;
  int aiStack_80 [2];
  undefined8 *puStack_78;
  undefined *puStack_70;
  undefined8 *puStack_68;
  undefined8 **ppuStack_60;
  long *plStack_58;
  undefined1 *puStack_50;
  undefined ***pppuStack_48;
  undefined **ppuStack_40;
  undefined8 uStack_38;
  
  puVar5 = *(undefined8 **)(param_1 + 0x10);
  func_0x000109884c0c(&ppuStack_60,puVar5 + 1,*puVar5);
  func_0x000109884820(&puStack_88,&ppuStack_60,*puVar5);
  if (ppuStack_60 != (undefined8 **)0x0) {
    (*(code *)**ppuStack_60)();
  }
  (**(code **)(*(long *)*puVar5 + 0x30))(&puStack_90);
  plVar7 = (long *)*puVar5;
  plStack_58 = *(long **)(param_1 + 0x28);
  ppuStack_60 = *(undefined8 ***)(param_1 + 0x20);
  if (*(long *)(param_1 + 0x28) != 0) {
    plVar1 = (long *)(*(long *)(param_1 + 0x28) + 8);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = *plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  ppuStack_40 = &PTR_DAT_110c351e0;
  func_0x000109899de4(&puStack_70,plVar7,&ppuStack_60,&ppuStack_40,0,0);
  plVar1 = plStack_58;
  if (plStack_58 != (long *)0x0) {
    plVar2 = plStack_58 + 1;
    do {
      lVar6 = *plVar2;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar4) {
        *plVar2 = lVar6 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar6 == 0) {
      (**(code **)(*plStack_58 + 0x10))(plStack_58);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar1);
    }
  }
  uStack_38 = 1;
  ppuStack_40 = &puStack_70;
  (**(code **)(*plVar7 + 0x58))(plVar7);
  ppuStack_60 = &puStack_88;
  plStack_58 = plVar7;
  puStack_50 = (undefined1 *)&puStack_90;
  pppuStack_48 = &ppuStack_40;
  func_0x0001098960c0(aiStack_80);
  if ((3 < aiStack_80[0]) && (puStack_78 != (undefined8 *)0x0)) {
    (**(code **)*puStack_78)();
  }
  if ((3 < (int)puStack_70) && (puStack_68 != (undefined8 *)0x0)) {
    (**(code **)*puStack_68)();
  }
  if (puStack_90 != (undefined8 *)0x0) {
    (**(code **)*puStack_90)();
  }
  if (puStack_88 != (undefined8 *)0x0) {
    (**(code **)*puStack_88)();
  }
  return;
}



/* Entry: 10a383a74; end: 10a383a9b;  */

long FUN_10a383a74(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  func_0x00010a083f00(param_1 + 0x18);
  plVar5 = *(long **)(param_1 + 0x10);
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
  return param_1 + 8;
}



/* Entry: 10a383a9c; end: 10a383adb;  */

void FUN_10a383a9c(undefined8 *param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined8 uVar5;
  
  *param_1 = &PTR_FUN_110bc7708;
  uVar5 = *(undefined8 *)(param_2 + 8);
  param_1[2] = *(undefined8 *)(param_2 + 0x10);
  param_1[1] = uVar5;
  *(undefined8 *)(param_2 + 8) = 0;
  *(undefined8 *)(param_2 + 0x10) = 0;
  lVar4 = *(long *)(param_2 + 0x20);
  uVar5 = *(undefined8 *)(param_2 + 0x18);
  param_1[4] = *(undefined8 *)(param_2 + 0x20);
  param_1[3] = uVar5;
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



/* Entry: 10a383adc; end: 10a384db7;  */

void FUN_10a383adc(undefined8 *param_1,long param_2)

{
  long lVar1;
  ulong ****ppppuVar2;
  ulong *puVar3;
  undefined8 *****pppppuVar4;
  undefined8 *****pppppuVar5;
  ulong ****ppppuVar6;
  char cVar7;
  bool bVar8;
  ulong ***pppuVar9;
  code *pcVar10;
  long *plVar11;
  undefined1 *puVar12;
  long *plVar13;
  long lVar14;
  undefined8 *****pppppuVar15;
  ulong *****pppppuVar16;
  undefined **ppuVar17;
  long *plVar18;
  long lVar19;
  undefined8 *puVar20;
  long *plVar21;
  long *plVar22;
  ulong uVar23;
  ulong ***pppuVar24;
  ulong uVar25;
  ulong *****pppppuVar26;
  long lVar27;
  ulong *****pppppuVar28;
  ulong uVar29;
  long lVar30;
  long *plVar31;
  long *unaff_x25;
  ulong ****ppppuVar32;
  long *plStack_2c8;
  ulong ****ppppuStack_2c0;
  ulong ****ppppuStack_2b8;
  ulong ****ppppuStack_2b0;
  ulong ****ppppuStack_2a0;
  ulong ****ppppuStack_298;
  ulong ****ppppuStack_290;
  long alStack_288 [5];
  ulong ***pppuStack_260;
  ulong ***pppuStack_258;
  char cStack_249;
  ulong ***pppuStack_240;
  ulong ***pppuStack_238;
  undefined8 ****ppppuStack_228;
  undefined8 ****ppppuStack_220;
  undefined8 uStack_218;
  undefined8 ****ppppuStack_210;
  undefined8 ****ppppuStack_208;
  char cStack_1f9;
  undefined8 ****ppppuStack_1f0;
  undefined8 ****ppppuStack_1e8;
  undefined8 uStack_1e0;
  long lStack_1d0;
  long *plStack_1c8;
  long *plStack_1c0;
  long lStack_1b8;
  float fStack_1b0;
  long lStack_1a0;
  long *plStack_198;
  long *plStack_190;
  long *plStack_188;
  long *plStack_178;
  long *plStack_170;
  ulong ****ppppuStack_160;
  ulong ****ppppuStack_158;
  ulong ****ppppuStack_150;
  ulong ****ppppuStack_148;
  ulong ****ppppuStack_140;
  undefined8 uStack_130;
  undefined8 uStack_128;
  long lStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  long lStack_108;
  int iStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined1 auStack_e8 [56];
  undefined8 uStack_b0;
  undefined4 uStack_a8;
  undefined1 auStack_a0 [48];
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plStack_2c8 = (long *)0x0;
  plVar11 = *(long **)(param_2 + 0x20);
  if (((plVar11 != (long *)0x0) &&
      (__ZNSt3__119__shared_weak_count4lockEv(), plStack_2c8 = plVar11, plVar11 != (long *)0x0)) &&
     (*(long *)(param_2 + 0x18) != 0)) {
    lVar30 = *(long *)(param_2 + 0x10);
    uStack_128 = param_1[1];
    uStack_130 = *param_1;
    lStack_120 = param_1[2];
    *param_1 = 0;
    param_1[1] = 0;
    uStack_110 = param_1[4];
    uStack_118 = param_1[3];
    lStack_108 = param_1[5];
    param_1[2] = 0;
    param_1[3] = 0;
    param_1[4] = 0;
    param_1[5] = 0;
    iStack_100 = *(int *)(param_1 + 6);
    uStack_f8 = param_1[7];
    uStack_f0 = param_1[8];
    param_1[7] = 0;
    (**(code **)(param_1[9] + 0x10))(auStack_e8,param_1 + 9);
    uStack_b0 = param_1[0x10];
    uStack_a8 = *(undefined4 *)(param_1 + 0x11);
    FUN_10a0424c4(auStack_a0,param_1 + 0x12);
    if (iStack_100 - 200U < 100) {
      func_0x000107c2b054(&ppppuStack_160,&UNK_10e4af073);
      puVar12 = auStack_a0;
      func_0x000104c5e210(puVar12,&ppppuStack_160);
      if ((long)ppppuStack_150 < 0) {
        __ZdlPv(ppppuStack_160);
      }
      if (puVar12 == (undefined1 *)0x0) {
        ppuVar17 = &PTR_PTR_113301c70;
        FUN_10ae079a0();
        FUN_10ae07cd4(ppuVar17,&PTR_PTR_113301c70);
        ppppuStack_158 = (ulong ****)0x0;
        ppppuStack_160 = (ulong ****)0x0;
        ppppuStack_148 = (ulong ****)0x0;
        ppppuStack_150 = (ulong ****)0x0;
        ppppuStack_140 = (ulong ****)CONCAT44(ppppuStack_140._4_4_,0x3f800000);
        func_0x000107c2b054(&lStack_1d0,&UNK_10f64efef);
        alStack_288[0] = 0;
        alStack_288[1] = 0;
        alStack_288[2] = 0;
        FUN_10a3455fc(&plStack_178,10,&ppppuStack_160,&lStack_1d0,alStack_288,0);
        plStack_190 = alStack_288;
        FUN_10a352c44(&plStack_190);
        if ((long)plStack_1c0 < 0) {
          __ZdlPv(lStack_1d0);
        }
        func_0x000104c4f944(&ppppuStack_160);
        FUN_10a34576c(*(undefined8 *)(lVar30 + 0x18),&plStack_178);
        if (plStack_170 != (long *)0x0) {
          plVar11 = plStack_170 + 1;
          do {
            lVar30 = *plVar11;
            cVar7 = '\x01';
            bVar8 = (bool)ExclusiveMonitorPass(plVar11,0x10);
            if (bVar8) {
              *plVar11 = lVar30 + -1;
              cVar7 = ExclusiveMonitorsStatus();
            }
          } while (cVar7 != '\0');
          goto LAB_10a383e98;
        }
      }
      else {
        puVar12 = puVar12 + 0x28;
        __ZNSt3__14stoiERKNS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEPmi
                  (puVar12,0,10);
        func_0x000107c2791c(alStack_288,auStack_a0);
        func_0x000107c2b054(&ppppuStack_160,&UNK_10e4af073);
        FUN_10a05be70(alStack_288,&ppppuStack_160);
        if ((long)ppppuStack_150 < 0) {
          __ZdlPv(ppppuStack_160);
        }
        ppppuStack_2a0 = (ulong ****)0x0;
        ppppuStack_298 = (ulong ****)0x0;
        ppppuStack_290 = (ulong ****)0x0;
        plVar11 = alStack_288;
        func_0x000104c5e210(plVar11,&UNK_10e4af088);
        if (plVar11 != (long *)0x0) {
          ppppuStack_160 = (ulong ****)&UNK_10e4af088;
          plVar11 = alStack_288;
          FUN_109cf993c(plVar11,&UNK_10e4af088,&UNK_10dd5b8f9,&ppppuStack_160,&ppppuStack_210);
          lVar19 = (long)*(char *)((long)plVar11 + 0x3f);
          if (lVar19 < 0) {
            lVar19 = plVar11[6];
          }
          if (lVar19 != 0) {
            ppppuStack_160 = (ulong ****)&UNK_10e4af088;
            plVar11 = alStack_288;
            FUN_109cf993c(plVar11,&UNK_10e4af088,&UNK_10dd5b8f9,&ppppuStack_160,&ppppuStack_228);
            lVar19 = (long)*(char *)((long)plVar11 + 0x3f);
            if (lVar19 < 0) {
              plVar18 = (long *)plVar11[5];
              lVar19 = plVar11[6];
            }
            else {
              plVar18 = plVar11 + 5;
            }
            ppppuStack_2c0 = (ulong ****)0x0;
            ppppuStack_2b8 = (ulong ****)0x0;
            ppppuStack_2b0 = (ulong ****)0x0;
            FUN_10a3474a4(&plStack_178,plVar18,lVar19,&DAT_10f68e8ee,1);
            plVar11 = plStack_170;
            if (plStack_178 != plStack_170) {
              plVar18 = plStack_178;
              do {
                FUN_10a3474a4(&plStack_190,*plVar18,plVar18[1],";",1);
                if (plStack_190 == plStack_188) {
LAB_10a3846b0:
                  if (plStack_190 != (long *)0x0) {
                    plStack_188 = plStack_190;
                    __ZdlPv();
                  }
                  break;
                }
                plStack_198 = (long *)plStack_190[1];
                lStack_1a0 = *plStack_190;
                plVar22 = &lStack_1a0;
                FUN_10a166af4(plVar22,"<",0);
                if (plVar22 == (long *)0xffffffffffffffff) goto LAB_10a3846b0;
                plVar13 = &lStack_1a0;
                FUN_10a166af4(plVar13,">",0);
                lVar27 = lStack_1a0;
                if (plVar13 == (long *)0xffffffffffffffff) goto LAB_10a3846b0;
                if (plStack_198 <= plVar22) goto LAB_10a38485c;
                lVar1 = (long)plVar22 + 1;
                pppppuVar4 = (undefined8 *****)((long)plStack_198 - lVar1);
                if ((undefined8 *****)((long)plVar13 - lVar1) <=
                    (undefined8 *****)((long)plStack_198 - lVar1)) {
                  pppppuVar4 = (undefined8 *****)((long)plVar13 - lVar1);
                }
                plStack_1c8 = (long *)0x0;
                lStack_1d0 = 0;
                lStack_1b8 = 0;
                plStack_1c0 = (long *)0x0;
                fStack_1b0 = 1.0;
                if (0x10 < (ulong)((long)plStack_188 - (long)plStack_190)) {
                  uVar25 = 1;
                  do {
                    FUN_10a3474a4(&ppppuStack_160,plStack_190[uVar25 * 2],
                                  (plStack_190 + uVar25 * 2)[1],"=",1);
                    ppppuVar2 = ppppuStack_160;
                    if ((long)ppppuStack_158 - (long)ppppuStack_160 == 0x20) {
                      plVar22 = &lStack_1d0;
                      FUN_10a054838(plVar22,*ppppuStack_160,ppppuStack_160[1]);
                      plVar13 = plStack_1c8;
                      if (plStack_1c8 != (long *)0x0) {
                        uVar29 = (long)plStack_1c8 - 1;
                        if (((ulong)plStack_1c8 & uVar29) == 0) {
                          unaff_x25 = (long *)(uVar29 & (ulong)plVar22);
                        }
                        else {
                          unaff_x25 = plVar22;
                          if (plStack_1c8 <= plVar22) {
                            uVar23 = 0;
                            if (plStack_1c8 != (long *)0x0) {
                              uVar23 = (ulong)plVar22 / (ulong)plStack_1c8;
                            }
                            unaff_x25 = (long *)((long)plVar22 - uVar23 * (long)plStack_1c8);
                          }
                        }
                        puVar20 = *(undefined8 **)(lStack_1d0 + (long)unaff_x25 * 8);
                        if ((puVar20 != (undefined8 *)0x0) &&
                           (plVar31 = (long *)*puVar20, plVar31 != (long *)0x0)) {
                          ppppuVar32 = (ulong ****)*ppppuVar2;
                          ppppuVar6 = (ulong ****)ppppuVar2[1];
                          do {
                            plVar21 = (long *)plVar31[1];
                            if (plVar21 == plVar22) {
                              if ((ulong ****)plVar31[3] == ppppuVar6) {
                                lVar14 = plVar31[2];
                                _memcmp(lVar14,ppppuVar32,ppppuVar6);
                                if ((int)lVar14 == 0) goto LAB_10a3841bc;
                              }
                            }
                            else {
                              if (((ulong)plVar13 & uVar29) == 0) {
                                plVar21 = (long *)((ulong)plVar21 & uVar29);
                              }
                              else if (plVar13 <= plVar21) {
                                uVar23 = 0;
                                if (plVar13 != (long *)0x0) {
                                  uVar23 = (ulong)plVar21 / (ulong)plVar13;
                                }
                                plVar21 = (long *)((long)plVar21 - uVar23 * (long)plVar13);
                              }
                              if (plVar21 != unaff_x25) break;
                            }
                            plVar31 = (long *)*plVar31;
                          } while (plVar31 != (long *)0x0);
                        }
                      }
                      plVar31 = (long *)0x30;
                      __Znwm();
                      *plVar31 = 0;
                      plVar31[1] = (long)plVar22;
                      ppppuVar32 = (ulong ****)*ppppuVar2;
                      plVar31[3] = (long)ppppuVar2[1];
                      plVar31[2] = (long)ppppuVar32;
                      plVar31[4] = 0;
                      plVar31[5] = 0;
                      if ((plVar13 == (long *)0x0) ||
                         (fStack_1b0 * (float)plVar13 < (float)(lStack_1b8 + 1))) {
                        uVar29 = 1;
                        if ((long *)0x2 < plVar13) {
                          uVar29 = (ulong)(((ulong)plVar13 & (long)plVar13 - 1U) != 0);
                        }
                        uVar29 = uVar29 | (long)plVar13 << 1;
                        uVar23 = (ulong)((float)(lStack_1b8 + 1) / fStack_1b0);
                        if (uVar29 <= uVar23) {
                          uVar29 = uVar23;
                        }
                        FUN_109f6f564(&lStack_1d0,uVar29);
                        plVar13 = plStack_1c8;
                        if (((ulong)plStack_1c8 & (long)plStack_1c8 - 1U) == 0) {
                          unaff_x25 = (long *)((long)plStack_1c8 - 1U & (ulong)plVar22);
                        }
                        else {
                          unaff_x25 = plVar22;
                          if (plStack_1c8 <= plVar22) {
                            uVar29 = 0;
                            if (plStack_1c8 != (long *)0x0) {
                              uVar29 = (ulong)plVar22 / (ulong)plStack_1c8;
                            }
                            unaff_x25 = (long *)((long)plVar22 - uVar29 * (long)plStack_1c8);
                          }
                        }
                      }
                      plVar22 = *(long **)(lStack_1d0 + (long)unaff_x25 * 8);
                      if (plVar22 == (long *)0x0) {
                        *plVar31 = (long)plStack_1c0;
                        *(long ***)(lStack_1d0 + (long)unaff_x25 * 8) = &plStack_1c0;
                        plStack_1c0 = plVar31;
                        if (*plVar31 != 0) {
                          plVar22 = *(long **)(*plVar31 + 8);
                          if (((ulong)plVar13 & (long)plVar13 - 1U) == 0) {
                            plVar22 = (long *)((ulong)plVar22 & (long)plVar13 - 1U);
                          }
                          else if (plVar13 <= plVar22) {
                            uVar29 = 0;
                            if (plVar13 != (long *)0x0) {
                              uVar29 = (ulong)plVar22 / (ulong)plVar13;
                            }
                            plVar22 = (long *)((long)plVar22 - uVar29 * (long)plVar13);
                          }
                          plVar22 = (long *)(lStack_1d0 + (long)plVar22 * 8);
                          goto LAB_10a3841ac;
                        }
                      }
                      else {
                        *plVar31 = *plVar22;
LAB_10a3841ac:
                        *plVar22 = (long)plVar31;
                      }
                      lStack_1b8 = lStack_1b8 + 1;
LAB_10a3841bc:
                      ppppuVar32 = (ulong ****)ppppuVar2[2];
                      plVar31[5] = (long)ppppuVar2[3];
                      plVar31[4] = (long)ppppuVar32;
                    }
                    if ((ulong *****)ppppuStack_160 != (ulong *****)0x0) {
                      ppppuStack_158 = ppppuStack_160;
                      __ZdlPv(ppppuStack_160);
                    }
                    uVar25 = uVar25 + 1;
                  } while (uVar25 < (ulong)((long)plStack_188 - (long)plStack_190 >> 4));
                }
                plVar22 = &lStack_1d0;
                FUN_10a38666c(plVar22,"key",3);
                if ((plVar22 != (long *)0x0) && (plVar22[5] != 0)) {
                  func_0x000107c2b054(&ppppuStack_1f0,&UNK_10f64efef);
                  plVar13 = &lStack_1d0;
                  FUN_10a38666c(plVar13,"iv",2);
                  if ((plVar13 == (long *)0x0) || (plVar13[5] == 0)) {
                    bVar8 = false;
                  }
                  else {
                    FUN_10a0f14fc(&ppppuStack_160,plVar13[4],plVar13[5],1);
                    if ((long)ppppuStack_158 - (long)ppppuStack_160 != 0x10) {
                      FUN_10a386760(&UNK_10f65127b,0x1b);
                      goto LAB_10a3848c4;
                    }
                    ppppuStack_208 = (undefined8 ****)ppppuStack_160[1];
                    ppppuStack_210 = (undefined8 ****)*ppppuStack_160;
                    if ((long)uStack_1e0 < 0) {
                      __ZdlPv(ppppuStack_1f0);
                      ppppuStack_1e8 = ppppuStack_208;
                      ppppuStack_1f0 = ppppuStack_210;
                      uStack_1e0._0_7_ = (uint7)uStack_1e0 & 0xffffffffffff00;
                      uStack_1e0 = CONCAT17(0x10,(uint7)uStack_1e0);
                      if ((ulong *****)ppppuStack_160 != (ulong *****)0x0) goto LAB_10a38447c;
                    }
                    else {
                      ppppuStack_1e8 = (undefined8 ****)ppppuStack_160[1];
                      ppppuStack_1f0 = (undefined8 ****)*ppppuStack_160;
                      uStack_1e0._0_7_ = (uint7)uStack_1e0 & 0xffffffffffff00;
                      uStack_1e0 = CONCAT17(0x10,(uint7)uStack_1e0);
LAB_10a38447c:
                      ppppuStack_158 = ppppuStack_160;
                      __ZdlPv();
                    }
                    bVar8 = true;
                  }
                  FUN_10a0f14fc(&ppppuStack_210,plVar22[4],plVar22[5],1);
                  if (bVar8) {
                    if ((long)ppppuStack_208 - (long)ppppuStack_210 == 0x20) {
LAB_10a3844b8:
                      if (pppppuVar4 < (undefined8 *****)0x7ffffffffffffff8) {
                        if (pppppuVar4 < (undefined8 *****)0x17) {
                          uStack_218 = CONCAT17((char)pppppuVar4,(undefined7)uStack_218);
                          pppppuVar15 = &ppppuStack_228;
                          if (pppppuVar4 != (undefined8 *****)0x0) goto LAB_10a384508;
                        }
                        else {
                          pppppuVar5 = (undefined8 *****)0x19;
                          if (((ulong)pppppuVar4 | 7) != 0x17) {
                            pppppuVar5 = (undefined8 *****)(((ulong)pppppuVar4 | 7) + 1);
                          }
                          pppppuVar15 = pppppuVar5;
                          __Znwm();
                          uStack_218 = (ulong)pppppuVar5 | 0x8000000000000000;
                          ppppuStack_228 = pppppuVar15;
                          ppppuStack_220 = pppppuVar4;
LAB_10a384508:
                          _memmove(pppppuVar15,lVar27 + lVar1,pppppuVar4);
                        }
                        *(undefined1 *)((long)pppppuVar15 + (long)pppppuVar4) = 0;
                        FUN_109ffe064(&pppuStack_260,ppppuStack_210,
                                      (long)ppppuStack_208 - (long)ppppuStack_210);
                        FUN_10a00d0e0(&pppuStack_240,&ppppuStack_228,&pppuStack_260,&ppppuStack_1f0)
                        ;
                        if (ppppuStack_2b8 < ppppuStack_2b0) {
                          ppppuStack_2b8[1] = pppuStack_238;
                          *ppppuStack_2b8 = pppuStack_240;
                          pppuStack_240 = (ulong ***)0x0;
                          pppuStack_238 = (ulong ***)0x0;
                          ppppuStack_2b8 = ppppuStack_2b8 + 2;
                        }
                        else {
                          lVar27 = (long)ppppuStack_2b8 - (long)ppppuStack_2c0;
                          uVar25 = (lVar27 >> 4) + 1;
                          if (uVar25 >> 0x3c != 0) {
                            FUN_10a352bfc();
                            goto LAB_10a3848c4;
                          }
                          uVar29 = (long)ppppuStack_2b0 - (long)ppppuStack_2c0 >> 3;
                          if (uVar29 <= uVar25) {
                            uVar29 = uVar25;
                          }
                          if (0x7fffffffffffffef <
                              (ulong)((long)ppppuStack_2b0 - (long)ppppuStack_2c0)) {
                            uVar29 = 0xfffffffffffffff;
                          }
                          ppppuStack_140 = (ulong ****)&ppppuStack_2c0;
                          pppppuVar16 = &ppppuStack_2c0;
                          FUN_10a352c10();
                          ppppuVar2 = ppppuStack_2c0;
                          puVar3 = (ulong *)((long)pppppuVar16 + lVar27);
                          pppppuVar28 = (ulong *****)
                                        ((long)puVar3 -
                                        ((long)ppppuStack_2b8 - (long)ppppuStack_2c0));
                          pppppuVar26 = (ulong *****)(puVar3 + 2);
                          puVar3[1] = (ulong)pppuStack_238;
                          *puVar3 = (ulong)pppuStack_240;
                          pppuStack_240 = (ulong ***)0x0;
                          pppuStack_238 = (ulong ***)0x0;
                          _memcpy(pppppuVar28,ppppuVar2);
                          ppppuStack_150 = ppppuStack_2c0;
                          ppppuStack_148 = ppppuStack_2b0;
                          ppppuStack_160 = ppppuStack_2c0;
                          ppppuStack_158 = ppppuStack_2c0;
                          ppppuStack_2c0 = (ulong ****)pppppuVar28;
                          ppppuStack_2b8 = (ulong ****)pppppuVar26;
                          ppppuStack_2b0 = (ulong ****)(pppppuVar16 + uVar29 * 2);
                          func_0x00010a353050(&ppppuStack_160);
                          pppuVar9 = pppuStack_238;
                          ppppuStack_2b8 = (ulong ****)pppppuVar26;
                          if ((ulong ****)pppuStack_238 != (ulong ****)0x0) {
                            ppppuVar2 = (ulong ****)(pppuStack_238 + 1);
                            do {
                              pppuVar24 = *ppppuVar2;
                              cVar7 = '\x01';
                              bVar8 = (bool)ExclusiveMonitorPass(ppppuVar2,0x10);
                              if (bVar8) {
                                *ppppuVar2 = (ulong ***)((long)pppuVar24 + -1);
                                cVar7 = ExclusiveMonitorsStatus();
                              }
                            } while (cVar7 != '\0');
                            if (pppuVar24 == (ulong ***)0x0) {
                              (*(code *)(*pppuStack_238)[2])(pppuStack_238);
                              __ZNSt3__119__shared_weak_count14__release_weakEv(pppuVar9);
                            }
                          }
                        }
                        if (cStack_249 < '\0') {
                          __ZdlPv(pppuStack_260);
                        }
                        if ((long)uStack_218 < 0) {
                          __ZdlPv(ppppuStack_228);
                        }
                        if ((undefined8 *****)ppppuStack_210 != (undefined8 *****)0x0) {
                          ppppuStack_208 = ppppuStack_210;
                          goto LAB_10a38466c;
                        }
                        goto LAB_10a384670;
                      }
                      func_0x000109ffde50();
                      goto LAB_10a3848c4;
                    }
                  }
                  else if ((long)ppppuStack_208 - (long)ppppuStack_210 == 0x10) goto LAB_10a3844b8;
                  FUN_10a386760(&UNK_10f65127b,0x1b);
                  goto LAB_10a3848c4;
                }
                if ((undefined8 *****)0x7ffffffffffffff7 < pppppuVar4) {
                  func_0x000109ffde50();
                  goto LAB_10a3848c4;
                }
                if (pppppuVar4 < (undefined8 *****)0x17) {
                  uStack_1e0 = CONCAT17((char)pppppuVar4,(uint7)uStack_1e0);
                  pppppuVar15 = &ppppuStack_1f0;
                  if (pppppuVar4 != (undefined8 *****)0x0) goto LAB_10a3842f0;
                }
                else {
                  pppppuVar5 = (undefined8 *****)0x19;
                  if (((ulong)pppppuVar4 | 7) != 0x17) {
                    pppppuVar5 = (undefined8 *****)(((ulong)pppppuVar4 | 7) + 1);
                  }
                  pppppuVar15 = pppppuVar5;
                  __Znwm();
                  uStack_1e0 = (ulong)pppppuVar5 | 0x8000000000000000;
                  ppppuStack_1f0 = pppppuVar15;
                  ppppuStack_1e8 = pppppuVar4;
LAB_10a3842f0:
                  _memmove(pppppuVar15,lVar27 + lVar1,pppppuVar4);
                }
                *(undefined1 *)((long)pppppuVar15 + (long)pppppuVar4) = 0;
                func_0x000107c2b054(&ppppuStack_210,&UNK_10f64efef);
                func_0x000107c2b054(&ppppuStack_228,&UNK_10f64efef);
                FUN_10a00d0e0(&pppuStack_260,&ppppuStack_1f0,&ppppuStack_210,&ppppuStack_228);
                if (ppppuStack_2b8 < ppppuStack_2b0) {
                  ppppuStack_2b8[1] = pppuStack_258;
                  *ppppuStack_2b8 = pppuStack_260;
                  pppuStack_260 = (ulong ***)0x0;
                  pppuStack_258 = (ulong ***)0x0;
                  ppppuStack_2b8 = ppppuStack_2b8 + 2;
                }
                else {
                  lVar27 = (long)ppppuStack_2b8 - (long)ppppuStack_2c0;
                  uVar25 = (lVar27 >> 4) + 1;
                  if (uVar25 >> 0x3c != 0) {
                    FUN_10a352bfc();
                    goto LAB_10a3848c4;
                  }
                  uVar29 = (long)ppppuStack_2b0 - (long)ppppuStack_2c0 >> 3;
                  if (uVar29 <= uVar25) {
                    uVar29 = uVar25;
                  }
                  if (0x7fffffffffffffef < (ulong)((long)ppppuStack_2b0 - (long)ppppuStack_2c0)) {
                    uVar29 = 0xfffffffffffffff;
                  }
                  ppppuStack_140 = (ulong ****)&ppppuStack_2c0;
                  pppppuVar16 = &ppppuStack_2c0;
                  FUN_10a352c10();
                  ppppuVar2 = ppppuStack_2c0;
                  puVar3 = (ulong *)((long)pppppuVar16 + lVar27);
                  pppppuVar28 = (ulong *****)
                                ((long)puVar3 - ((long)ppppuStack_2b8 - (long)ppppuStack_2c0));
                  pppppuVar26 = (ulong *****)(puVar3 + 2);
                  puVar3[1] = (ulong)pppuStack_258;
                  *puVar3 = (ulong)pppuStack_260;
                  pppuStack_260 = (ulong ***)0x0;
                  pppuStack_258 = (ulong ***)0x0;
                  _memcpy(pppppuVar28,ppppuVar2);
                  ppppuStack_150 = ppppuStack_2c0;
                  ppppuStack_148 = ppppuStack_2b0;
                  ppppuStack_160 = ppppuStack_2c0;
                  ppppuStack_158 = ppppuStack_2c0;
                  ppppuStack_2c0 = (ulong ****)pppppuVar28;
                  ppppuStack_2b8 = (ulong ****)pppppuVar26;
                  ppppuStack_2b0 = (ulong ****)(pppppuVar16 + uVar29 * 2);
                  func_0x00010a353050(&ppppuStack_160);
                  pppuVar9 = pppuStack_258;
                  ppppuStack_2b8 = (ulong ****)pppppuVar26;
                  if ((ulong ****)pppuStack_258 != (ulong ****)0x0) {
                    ppppuVar2 = (ulong ****)(pppuStack_258 + 1);
                    do {
                      pppuVar24 = *ppppuVar2;
                      cVar7 = '\x01';
                      bVar8 = (bool)ExclusiveMonitorPass(ppppuVar2,0x10);
                      if (bVar8) {
                        *ppppuVar2 = (ulong ***)((long)pppuVar24 + -1);
                        cVar7 = ExclusiveMonitorsStatus();
                      }
                    } while (cVar7 != '\0');
                    if (pppuVar24 == (ulong ***)0x0) {
                      (*(code *)(*pppuStack_258)[2])(pppuStack_258);
                      __ZNSt3__119__shared_weak_count14__release_weakEv(pppuVar9);
                    }
                  }
                }
                if ((long)uStack_218 < 0) {
                  __ZdlPv(ppppuStack_228);
                }
                if (cStack_1f9 < '\0') {
LAB_10a38466c:
                  __ZdlPv(ppppuStack_210);
                }
LAB_10a384670:
                if ((long)uStack_1e0 < 0) {
                  __ZdlPv(ppppuStack_1f0);
                }
                func_0x000109f6f4d4(&lStack_1d0);
                if (plStack_190 != (long *)0x0) {
                  plStack_188 = plStack_190;
                  __ZdlPv();
                }
                plVar18 = plVar18 + 2;
              } while (plVar18 != plVar11);
            }
            if ((lVar19 != 0) && (ppppuStack_2c0 == ppppuStack_2b8)) {
              FUN_10a386760(&UNK_10f651297,0x21);
              goto LAB_10a3848c4;
            }
            if (plStack_178 != (long *)0x0) {
              plStack_170 = plStack_178;
              __ZdlPv();
            }
            FUN_10a352aec(&ppppuStack_2a0);
            ppppuStack_298 = ppppuStack_2b8;
            ppppuStack_2a0 = ppppuStack_2c0;
            ppppuStack_290 = ppppuStack_2b0;
            ppppuStack_2b8 = (ulong ****)0x0;
            ppppuStack_2b0 = (ulong ****)0x0;
            ppppuStack_2c0 = (ulong ****)0x0;
            ppppuStack_160 = (ulong ****)&ppppuStack_2c0;
            FUN_10a352c44(&ppppuStack_160);
            FUN_10a05be70(alStack_288,&UNK_10e4af088);
          }
        }
        FUN_109ffe064(&ppppuStack_160,uStack_f8,uStack_b0);
        FUN_10a3455fc(&lStack_1d0,(int)puVar12,alStack_288,&ppppuStack_160,&ppppuStack_2a0,
                      *(undefined1 *)(lVar30 + 0x30));
        if ((long)ppppuStack_150 < 0) {
          __ZdlPv(ppppuStack_160);
        }
        FUN_10a34576c(*(undefined8 *)(lVar30 + 0x18),&lStack_1d0);
        plVar11 = plStack_1c8;
        if (plStack_1c8 != (long *)0x0) {
          plVar18 = plStack_1c8 + 1;
          do {
            lVar30 = *plVar18;
            cVar7 = '\x01';
            bVar8 = (bool)ExclusiveMonitorPass(plVar18,0x10);
            if (bVar8) {
              *plVar18 = lVar30 + -1;
              cVar7 = ExclusiveMonitorsStatus();
            }
          } while (cVar7 != '\0');
          if (lVar30 == 0) {
            (**(code **)(*plStack_1c8 + 0x10))(plStack_1c8);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar11);
          }
        }
        ppppuStack_160 = (ulong ****)&ppppuStack_2a0;
        FUN_10a352c44(&ppppuStack_160);
        func_0x000104c4f944(alStack_288);
      }
    }
    else {
      func_0x00010ae02ecc(0,iStack_100);
      FUN_10ae03140();
      ppuVar17 = &PTR_PTR_113301e18;
      FUN_10ae079a0();
      func_0x00010ae02edc();
      FUN_10ae0314c();
      FUN_10ae07cd4(ppuVar17,&PTR_PTR_113301e18);
      ppppuStack_158 = (ulong ****)0x0;
      ppppuStack_160 = (ulong ****)0x0;
      ppppuStack_148 = (ulong ****)0x0;
      ppppuStack_150 = (ulong ****)0x0;
      ppppuStack_140 = (ulong ****)CONCAT44(ppppuStack_140._4_4_,0x3f800000);
      func_0x000107c2b054(&lStack_1d0,&UNK_10f64efef);
      alStack_288[0] = 0;
      alStack_288[1] = 0;
      alStack_288[2] = 0;
      FUN_10a3455fc(&plStack_178,10,&ppppuStack_160,&lStack_1d0,alStack_288,0);
      plStack_190 = alStack_288;
      FUN_10a352c44(&plStack_190);
      if ((long)plStack_1c0 < 0) {
        __ZdlPv(lStack_1d0);
      }
      func_0x000104c4f944(&ppppuStack_160);
      FUN_10a34576c(*(undefined8 *)(lVar30 + 0x18),&plStack_178);
      if (plStack_170 != (long *)0x0) {
        plVar11 = plStack_170 + 1;
        do {
          lVar30 = *plVar11;
          cVar7 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(plVar11,0x10);
          if (bVar8) {
            *plVar11 = lVar30 + -1;
            cVar7 = ExclusiveMonitorsStatus();
          }
        } while (cVar7 != '\0');
LAB_10a383e98:
        plVar11 = plStack_170;
        if (lVar30 == 0) {
          (**(code **)(*plStack_170 + 0x10))(plStack_170);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar11);
        }
      }
    }
    func_0x000104c4f944(auStack_a0);
    FUN_10a042634(&uStack_f8);
    if (lStack_108 < 0) {
      __ZdlPv(uStack_118);
    }
    if (lStack_120 < 0) {
      __ZdlPv(uStack_130);
    }
  }
  if (plStack_2c8 != (long *)0x0) {
    plVar11 = plStack_2c8 + 1;
    do {
      lVar30 = *plVar11;
      cVar7 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(plVar11,0x10);
      if (bVar8) {
        *plVar11 = lVar30 + -1;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
    if (lVar30 == 0) {
      (**(code **)(*plStack_2c8 + 0x10))(plStack_2c8);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_2c8);
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
LAB_10a38485c:
  FUN_109ffdddc(&UNK_10f2fca6e);
LAB_10a3848c4:
                    /* WARNING: Does not return */
  pcVar10 = (code *)SoftwareBreakpoint(1,0x10a3848c8);
  (*pcVar10)();
}



/* Entry: 10a384db8; end: 10a384e5f;  */

undefined * FUN_10a384db8(undefined8 param_1)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  int iVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puStack_918;
  undefined8 uStack_910;
  undefined1 uStack_908;
  undefined *puStack_900;
  undefined8 uStack_8f8;
  undefined1 uStack_8f0;
  undefined **ppuStack_8e8;
  undefined *puStack_8e0;
  undefined *puStack_8d8;
  ulong uStack_8d0;
  ulong uStack_8c8;
  ulong uStack_8c0;
  undefined4 uStack_8b8;
  undefined **ppuStack_8b0;
  undefined *puStack_8a8;
  undefined8 uStack_8a0;
  undefined1 uStack_898;
  undefined *puStack_890;
  undefined8 uStack_888;
  undefined1 uStack_880;
  int iStack_878;
  undefined1 auStack_870 [1024];
  undefined1 auStack_470 [1024];
  long lStack_70;
  
  FUN_10ae030a0(0,param_1);
  ppuVar6 = &PTR_PTR_113301a98;
  ppuVar5 = ppuVar6;
  FUN_10ae079a0();
  FUN_10ae030d8();
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar3 = (undefined *)0x0;
  if (ppuVar5 != (undefined **)0x0) {
    FUN_10ae03188(&puStack_8a8,auStack_470,0x400,auStack_870,0x400,ppuVar5[0x13],ppuVar5[0xf],
                  ppuVar5 + 0x14,0x400);
    puStack_918 = puStack_890;
    uStack_910 = uStack_888;
    puStack_900 = puStack_8a8;
    uStack_8f8 = uStack_8a0;
    uStack_908 = uStack_880;
    if (iStack_878 != 0) {
      puStack_918 = &UNK_10f6c352e;
      uStack_910 = 0x10;
      puStack_900 = &UNK_10f6c352e;
      uStack_8f8 = 0x10;
      uStack_908 = 0;
      uStack_898 = 0;
    }
    puVar8 = ppuVar5[0x12];
    puVar7 = ppuVar5[0xb];
    uVar1 = 0;
    _clock_gettime_nsec_np();
    uVar2 = uVar1;
    _pthread_self();
    _pthread_mach_thread_np();
    ppuStack_8e8 = ppuVar5 + 1;
    uStack_8b8 = *(undefined4 *)(ppuVar5 + 0xe);
    uStack_8c0 = uVar2 & 0xffffffff;
    ppuStack_8b0 = ppuVar5 + 0x10;
    puVar3 = *ppuVar5;
    ppuVar6 = (undefined **)&ppuStack_8e8;
    uStack_8f0 = uStack_898;
    puStack_8e0 = puVar7;
    puStack_8d8 = puVar8;
    uStack_8d0 = (ulong)(puVar8 != (undefined *)0x0);
    uStack_8c8 = uVar1;
    FUN_10ae0784c(puVar3,ppuVar6,&puStack_900,&puStack_918);
  }
  iVar4 = (int)ppuVar6;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_70) {
    ___stack_chk_fail();
    if (iVar4 == 0) {
      __Unwind_Resume();
    }
    func_0x000104bd46a0();
    func_0x00010ae087bc();
    FUN_10ae07e54(puVar3);
    return puVar3;
  }
  return puVar3;
}



/* Entry: 10a384e60; end: 10a384edb;  */

long FUN_10a384e60(undefined8 *param_1,long *param_2)

{
  ulong uVar1;
  undefined8 *puVar2;
  long lVar3;
  long lVar4;
  
  uVar1 = param_1[1];
  puVar2 = (undefined8 *)*param_1;
  if (-1 < (char)*(byte *)((long)param_1 + 0x17)) {
    uVar1 = (ulong)*(byte *)((long)param_1 + 0x17);
    puVar2 = param_1;
  }
  lVar3 = 0;
  FUN_10ae03140(0,puVar2,uVar1);
  lVar4 = 0x11330a9e0;
  if (*param_2 != 0) {
    lVar4 = *param_2;
  }
  _strlen(lVar4);
  return lVar3 + lVar4 + 1;
}



/* Entry: 10a384edc; end: 10a384f07;  */

undefined8 * FUN_10a384edc(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  
  plVar4 = *(long **)(param_1 + 0x18);
  if (plVar4 != (long *)0x0) {
    __ZNSt3__119__shared_weak_count4lockEv();
    if (plVar4 != (long *)0x0) {
      if (*(long *)(param_1 + 0x10) != 0) {
        FUN_10a05c0fc(*(long *)(param_1 + 0x10),*(undefined8 *)(param_1 + 8));
      }
      plVar1 = plVar4 + 1;
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
        (**(code **)(*plVar4 + 0x10))(plVar4);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
      }
    }
    if (*(long *)(param_1 + 0x18) != 0) {
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
  }
  return (undefined8 *)(param_1 + 8);
}



/* Entry: 10a384f08; end: 10a384f37;  */

void FUN_10a384f08(undefined4 param_1,undefined8 param_2,long param_3)

{
  undefined4 uStack_14;
  
  uStack_14 = param_1;
  FUN_10a384f38(*(undefined8 *)(param_3 + 0x10),&uStack_14,param_2);
  return;
}



/* Entry: 10a384f38; end: 10a3851ab;  */

void FUN_10a384f38(undefined ***param_1,undefined ***param_2,undefined8 *param_3)

{
  ulong uVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  undefined ***pppuVar5;
  undefined ***pppuVar6;
  undefined ***pppuVar7;
  undefined ***pppuVar8;
  undefined ***pppuVar9;
  undefined8 *puVar10;
  long lVar11;
  undefined ***unaff_x20;
  undefined **ppuVar12;
  undefined8 *puStack_160;
  undefined8 *puStack_158;
  int aiStack_150 [2];
  undefined8 *puStack_148;
  undefined4 auStack_140 [2];
  double dStack_138;
  int aiStack_130 [2];
  long lStack_128;
  undefined8 **ppuStack_120;
  undefined **ppuStack_118;
  undefined1 *puStack_110;
  undefined4 **ppuStack_108;
  undefined4 *puStack_100;
  undefined8 uStack_f8;
  undefined ***pppuStack_f0;
  undefined ***pppuStack_e8;
  undefined ***pppuStack_e0;
  undefined ***pppuStack_d8;
  undefined1 *puStack_d0;
  code *pcStack_c8;
  undefined **ppuStack_c0;
  undefined ***pppuStack_b8;
  uint uStack_b0;
  undefined ***apppuStack_a8 [2];
  char cStack_91;
  char cStack_90;
  undefined **ppuStack_88;
  undefined **ppuStack_80;
  undefined ***pppuStack_78;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pppuVar8 = param_2;
  puVar10 = param_3;
  pppuVar7 = param_2;
  if ((param_1 == (undefined ***)0x0) || (*(char *)(param_1 + 8) != '\x02')) {
    pppuVar6 = param_1;
    if ((param_1 != (undefined ***)0x0) && (*(char *)(param_1 + 8) == '\x01')) {
      pppuVar6 = (undefined ***)(ulong)*(uint *)param_2;
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
                    /* WARNING: Could not recover jumptable at 0x00010a38500c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)*param_1)(pppuVar6,param_3,param_1);
        return;
      }
      goto LAB_10a38513c;
    }
  }
  else {
    pppuVar5 = param_1;
    pppuVar9 = param_2;
    FUN_10a688b40();
    if (pppuVar5 == (undefined ***)0x0) {
      pppuVar6 = (undefined ***)0x0;
      pppuVar8 = (undefined ***)0x0;
      unaff_x20 = pppuVar9;
      if (pppuVar9 != (undefined ***)0x0) {
        pppuStack_b8 = (undefined ***)param_1[1];
        ppuStack_c0 = *param_1;
        if (param_1[1] != (undefined **)0x0) {
          ppuVar12 = param_1[1] + 1;
          do {
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(ppuVar12,0x10);
            if (bVar3) {
              *ppuVar12 = *ppuVar12 + 1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
        }
        uStack_b0 = *(uint *)param_2;
        FUN_10a1ccb30(apppuStack_a8,param_3);
        ppuStack_88 = (undefined **)FUN_10a385420;
        ppuStack_80 = &PTR_FUN_110bc7738;
        pppuVar7 = (undefined ***)0x38;
        __Znwm();
        pppuVar7[1] = (undefined **)pppuStack_b8;
        *pppuVar7 = ppuStack_c0;
        ppuStack_c0 = (undefined **)0x0;
        pppuStack_b8 = (undefined ***)0x0;
        *(uint *)(pppuVar7 + 2) = uStack_b0;
        FUN_10a1ccb30(pppuVar7 + 3,apppuStack_a8);
        param_1 = &ppuStack_88;
        pppuVar8 = &ppuStack_88;
        pppuStack_78 = pppuVar7;
        FUN_10a4634ec(pppuVar9);
        pppuVar6 = &ppuStack_80;
        (*(code *)*ppuStack_80)();
        if ((cStack_90 == '\x01') && (cStack_91 < '\0')) {
          __ZdlPv();
          pppuVar6 = apppuStack_a8[0];
        }
        pppuVar5 = pppuStack_b8;
        if (pppuStack_b8 != (undefined ***)0x0) {
          pppuVar9 = pppuStack_b8 + 1;
          do {
            ppuVar12 = *pppuVar9;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(pppuVar9,0x10);
            if (bVar3) {
              *pppuVar9 = (undefined **)((long)ppuVar12 + -1);
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (ppuVar12 == (undefined **)0x0) {
            (*(code *)(*pppuStack_b8)[2])(pppuStack_b8);
            __ZNSt3__119__shared_weak_count14__release_weakEv();
            pppuVar6 = pppuVar5;
          }
        }
      }
    }
    else {
      *pppuVar5 = (undefined **)CONCAT44((int)((ulong)*pppuVar5 >> 0x20) + 1,(int)*pppuVar5 + 1);
      pppuVar6 = (undefined ***)*param_1;
      FUN_10a3851ac();
      iVar4 = *(int *)((long)pppuVar5 + 4) + -1;
      *(int *)((long)pppuVar5 + 4) = iVar4;
      puVar10 = param_3;
      if (iVar4 == 0) {
        *(undefined4 *)pppuVar5 = 0;
      }
    }
  }
  param_2 = pppuVar8;
  param_3 = puVar10;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
LAB_10a38513c:
  ___stack_chk_fail();
  (*(code *)*ppuStack_80)(param_1 + 1);
  FUN_10a3853e4(&ppuStack_c0);
  pppuVar8 = pppuVar6;
  __Unwind_Resume();
  pcStack_c8 = FUN_10a3851ac;
  pppuStack_f0 = param_1;
  pppuStack_e8 = pppuVar7;
  pppuStack_e0 = unaff_x20;
  pppuStack_d8 = pppuVar6;
  puStack_d0 = &stack0xfffffffffffffff0;
  func_0x000109884c0c(&ppuStack_120,pppuVar8 + 1,*pppuVar8);
  func_0x000109884820(&puStack_158,&ppuStack_120,*pppuVar8);
  if (ppuStack_120 != (undefined8 **)0x0) {
    (*(code *)**ppuStack_120)();
  }
  (**(code **)(**pppuVar8 + 0x30))(&puStack_160);
  ppuVar12 = *pppuVar8;
  auStack_140[0] = 3;
  dStack_138 = (double)(int)*(uint *)param_2;
  if (*(char *)(param_3 + 3) == '\x01') {
    uVar1 = param_3[1];
    puVar10 = (undefined8 *)*param_3;
    if (-1 < (char)*(byte *)((long)param_3 + 0x17)) {
      uVar1 = (ulong)*(byte *)((long)param_3 + 0x17);
      puVar10 = param_3;
    }
    (**(code **)(*ppuVar12 + 0x128))(&lStack_128,ppuVar12,puVar10,uVar1);
    aiStack_130[0] = 6;
  }
  else {
    aiStack_130[0] = 1;
  }
  puStack_100 = auStack_140;
  uStack_f8 = 2;
  (**(code **)(*ppuVar12 + 0x58))(ppuVar12);
  ppuStack_120 = &puStack_158;
  ppuStack_108 = &puStack_100;
  ppuStack_118 = ppuVar12;
  puStack_110 = (undefined1 *)&puStack_160;
  func_0x0001098960c0(aiStack_150);
  if ((3 < aiStack_150[0]) && (puStack_148 != (undefined8 *)0x0)) {
    (**(code **)*puStack_148)();
  }
  lVar11 = 0;
  do {
    if ((3 < *(int *)((long)aiStack_130 + lVar11)) &&
       (*(undefined8 **)((long)&lStack_128 + lVar11) != (undefined8 *)0x0)) {
      (**(code **)**(undefined8 **)((long)&lStack_128 + lVar11))();
    }
    lVar11 = lVar11 + -0x10;
  } while (lVar11 != -0x20);
  if (puStack_160 != (undefined8 *)0x0) {
    (**(code **)*puStack_160)();
  }
  if (puStack_158 != (undefined8 *)0x0) {
    (**(code **)*puStack_158)();
  }
  return;
}



/* Entry: 10a3851ac; end: 10a3853e3;  */

void FUN_10a3851ac(undefined8 *param_1,int *param_2,undefined8 *param_3)

{
  ulong uVar1;
  undefined8 *puVar2;
  long lVar3;
  long *plVar4;
  undefined8 *puStack_a0;
  undefined8 *puStack_98;
  int aiStack_90 [2];
  undefined8 *puStack_88;
  undefined4 auStack_80 [2];
  double dStack_78;
  int aiStack_70 [2];
  long lStack_68;
  undefined8 **ppuStack_60;
  long *plStack_58;
  undefined1 *puStack_50;
  undefined4 **ppuStack_48;
  undefined4 *puStack_40;
  undefined8 uStack_38;
  
  func_0x000109884c0c(&ppuStack_60,param_1 + 1,*param_1);
  func_0x000109884820(&puStack_98,&ppuStack_60,*param_1);
  if (ppuStack_60 != (undefined8 **)0x0) {
    (*(code *)**ppuStack_60)();
  }
  (**(code **)(*(long *)*param_1 + 0x30))(&puStack_a0);
  plVar4 = (long *)*param_1;
  auStack_80[0] = 3;
  dStack_78 = (double)*param_2;
  if (*(char *)(param_3 + 3) == '\x01') {
    uVar1 = param_3[1];
    puVar2 = (undefined8 *)*param_3;
    if (-1 < (char)*(byte *)((long)param_3 + 0x17)) {
      uVar1 = (ulong)*(byte *)((long)param_3 + 0x17);
      puVar2 = param_3;
    }
    (**(code **)(*plVar4 + 0x128))(&lStack_68,plVar4,puVar2,uVar1);
    aiStack_70[0] = 6;
  }
  else {
    aiStack_70[0] = 1;
  }
  puStack_40 = auStack_80;
  uStack_38 = 2;
  (**(code **)(*plVar4 + 0x58))(plVar4);
  ppuStack_60 = &puStack_98;
  ppuStack_48 = &puStack_40;
  plStack_58 = plVar4;
  puStack_50 = (undefined1 *)&puStack_a0;
  func_0x0001098960c0(aiStack_90);
  if ((3 < aiStack_90[0]) && (puStack_88 != (undefined8 *)0x0)) {
    (**(code **)*puStack_88)();
  }
  lVar3 = 0;
  do {
    if ((3 < *(int *)((long)aiStack_70 + lVar3)) &&
       (*(undefined8 **)((long)&lStack_68 + lVar3) != (undefined8 *)0x0)) {
      (**(code **)**(undefined8 **)((long)&lStack_68 + lVar3))();
    }
    lVar3 = lVar3 + -0x10;
  } while (lVar3 != -0x20);
  if (puStack_a0 != (undefined8 *)0x0) {
    (**(code **)*puStack_a0)();
  }
  if (puStack_98 != (undefined8 *)0x0) {
    (**(code **)*puStack_98)();
  }
  return;
}



/* Entry: 10a3853e4; end: 10a38541f;  */

long FUN_10a3853e4(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  if ((*(char *)(param_1 + 0x30) == '\x01') && (*(char *)(param_1 + 0x2f) < '\0')) {
    __ZdlPv(*(undefined8 *)(param_1 + 0x18));
  }
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



/* Entry: 10a385420; end: 10a38542f;  */

void FUN_10a385420(long param_1)

{
  ulong uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  long lVar4;
  long *plVar5;
  undefined8 *puStack_a0;
  undefined8 *puStack_98;
  int aiStack_90 [2];
  undefined8 *puStack_88;
  undefined4 auStack_80 [2];
  double dStack_78;
  int aiStack_70 [2];
  long lStack_68;
  undefined8 **ppuStack_60;
  long *plStack_58;
  undefined1 *puStack_50;
  undefined4 **ppuStack_48;
  undefined4 *puStack_40;
  undefined8 uStack_38;
  
  puVar3 = *(undefined8 **)(param_1 + 0x10);
  puVar2 = (undefined8 *)*puVar3;
  func_0x000109884c0c(&ppuStack_60,puVar2 + 1,*puVar2);
  func_0x000109884820(&puStack_98,&ppuStack_60,*puVar2);
  if (ppuStack_60 != (undefined8 **)0x0) {
    (*(code *)**ppuStack_60)();
  }
  (**(code **)(*(long *)*puVar2 + 0x30))(&puStack_a0);
  plVar5 = (long *)*puVar2;
  auStack_80[0] = 3;
  dStack_78 = (double)*(int *)(puVar3 + 2);
  if (*(char *)(puVar3 + 6) == '\x01') {
    uVar1 = puVar3[4];
    puVar2 = (undefined8 *)puVar3[3];
    if (-1 < (char)*(byte *)((long)puVar3 + 0x2f)) {
      uVar1 = (ulong)*(byte *)((long)puVar3 + 0x2f);
      puVar2 = puVar3 + 3;
    }
    (**(code **)(*plVar5 + 0x128))(&lStack_68,plVar5,puVar2,uVar1);
    aiStack_70[0] = 6;
  }
  else {
    aiStack_70[0] = 1;
  }
  puStack_40 = auStack_80;
  uStack_38 = 2;
  (**(code **)(*plVar5 + 0x58))(plVar5);
  ppuStack_60 = &puStack_98;
  ppuStack_48 = &puStack_40;
  plStack_58 = plVar5;
  puStack_50 = (undefined1 *)&puStack_a0;
  func_0x0001098960c0(aiStack_90);
  if ((3 < aiStack_90[0]) && (puStack_88 != (undefined8 *)0x0)) {
    (**(code **)*puStack_88)();
  }
  lVar4 = 0;
  do {
    if ((3 < *(int *)((long)aiStack_70 + lVar4)) &&
       (*(undefined8 **)((long)&lStack_68 + lVar4) != (undefined8 *)0x0)) {
      (**(code **)**(undefined8 **)((long)&lStack_68 + lVar4))();
    }
    lVar4 = lVar4 + -0x10;
  } while (lVar4 != -0x20);
  if (puStack_a0 != (undefined8 *)0x0) {
    (**(code **)*puStack_a0)();
  }
  if (puStack_98 != (undefined8 *)0x0) {
    (**(code **)*puStack_98)();
  }
  return;
}



/* Entry: 10a385430; end: 10a38547f;  */

void FUN_10a385430(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 8);
  if (lVar1 != 0) {
    if ((*(char *)(lVar1 + 0x30) == '\x01') && (*(char *)(lVar1 + 0x2f) < '\0')) {
      __ZdlPv(*(undefined8 *)(lVar1 + 0x18));
    }
    func_0x00010a004dac(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10a385480; end: 10a385507;  */

void FUN_10a385480(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_2[1] = 0;
  return;
}



/* Entry: 10a385508; end: 10a385773;  */

void FUN_10a385508(long ***param_1,long ***param_2,undefined8 *param_3)

{
  long ***ppplVar1;
  uint uVar2;
  char cVar3;
  bool bVar4;
  long ***ppplVar5;
  undefined ***pppuVar6;
  long ***ppplVar7;
  long ***ppplVar8;
  undefined **ppuVar9;
  long **pplVar10;
  long ***unaff_x21;
  long *unaff_x22;
  long lVar11;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  long lStack_1a0;
  char cStack_198;
  long *plStack_190;
  long ***ppplStack_188;
  long ***ppplStack_180;
  long **pplStack_178;
  undefined1 *puStack_170;
  code *pcStack_168;
  long **pplStack_158;
  long **pplStack_150;
  undefined **ppuStack_148;
  undefined8 uStack_140;
  undefined *puStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  long lStack_118;
  long **pplStack_110;
  long lStack_108;
  long **pplStack_100;
  long **pplStack_f8;
  long **pplStack_f0;
  long **pplStack_e8;
  long **pplStack_e0;
  long **pplStack_d8;
  int iStack_d0;
  long **pplStack_c8;
  long **pplStack_c0;
  undefined1 auStack_b8 [56];
  long **pplStack_80;
  undefined4 uStack_78;
  undefined1 auStack_70 [40];
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppplVar5 = (long ***)param_2[4];
  ppplVar7 = ppplVar5;
  ppplVar8 = param_2;
  if (ppplVar5 != (long ***)0x0) {
    __ZNSt3__119__shared_weak_count4lockEv();
    ppplVar7 = ppplVar5;
    unaff_x21 = param_2;
    pplStack_150 = (long **)ppplVar5;
    if (ppplVar5 != (long ***)0x0) {
      pplStack_158 = param_2[3];
      if (pplStack_158 != (long **)0x0) {
        unaff_x22 = param_2[2][3];
        pplStack_f8 = param_1[1];
        pplStack_100 = *param_1;
        pplStack_f0 = param_1[2];
        *param_1 = (long **)0x0;
        param_1[1] = (long **)0x0;
        pplStack_e0 = param_1[4];
        pplStack_e8 = param_1[3];
        pplStack_d8 = param_1[5];
        param_1[2] = (long **)0x0;
        param_1[3] = (long **)0x0;
        param_1[4] = (long **)0x0;
        param_1[5] = (long **)0x0;
        iStack_d0 = *(int *)(param_1 + 6);
        param_2 = &pplStack_100;
        pplStack_c8 = param_1[7];
        pplStack_c0 = param_1[8];
        param_1[7] = (long **)0x0;
        (*(code *)param_1[9][2])(auStack_b8,param_1 + 9);
        pplStack_80 = param_1[0x10];
        uStack_78 = *(undefined4 *)(param_1 + 0x11);
        FUN_10a0424c4(auStack_70,param_1 + 0x12);
        lVar11 = *unaff_x22;
        uStack_128 = 0;
        uStack_120 = 0;
        lStack_118 = 0;
        if (iStack_d0 - 200U < 100) {
          lStack_108 = (long)(int)pplStack_80;
          ppuStack_148 = &PTR_DAT_110b1ac18;
          uStack_140 = 0;
          puStack_138 = &DAT_11383d918;
          uStack_130 = 0;
          pplStack_110 = pplStack_c8;
          pppuVar6 = &ppuStack_148;
          func_0x000107c30348(pppuVar6,&pplStack_110);
          if ((int)pppuVar6 == 0) {
            ppuVar9 = &PTR_PTR_113301b60;
            FUN_10ae079a0(0,&PTR_PTR_113301b60);
            FUN_10ae07cd4(ppuVar9,&PTR_PTR_113301b60);
            param_1 = (long ***)0x0;
          }
          else {
            uVar2 = 0;
            if ((int)uStack_130 - 1U < 4) {
              uVar2 = (int)uStack_130 + 1;
            }
            param_1 = (long ***)(ulong)uVar2;
            __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
                      (&uStack_128,(ulong)puStack_138 & 0xfffffffffffffffc);
          }
          func_0x0001098d8570(&ppuStack_148);
        }
        else {
          param_1 = (long ***)0x0;
        }
        *(int *)(lVar11 + 0x120) = (int)param_1;
        param_3 = &uStack_128;
        ppplVar8 = param_1;
        FUN_10a385774(unaff_x22 + 1,param_1);
        if (lStack_118 < 0) {
          __ZdlPv(uStack_128);
        }
        func_0x000104c4f944(auStack_70);
        ppplVar7 = &pplStack_c8;
        FUN_10a042634();
        if ((long)pplStack_d8 < 0) {
          ppplVar7 = (long ***)pplStack_e8;
          __ZdlPv();
        }
        if ((long)pplStack_f0 < 0) {
          ppplVar7 = (long ***)pplStack_100;
          __ZdlPv();
        }
      }
      ppplVar1 = ppplVar5 + 1;
      do {
        pplVar10 = *ppplVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(ppplVar1,0x10);
        if (bVar4) {
          *ppplVar1 = (long **)((long)pplVar10 + -1);
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      unaff_x21 = param_2;
      if (pplVar10 == (long **)0x0) {
        (*(code *)(*ppplVar5)[2])(ppplVar5);
        __ZNSt3__119__shared_weak_count14__release_weakEv();
        ppplVar7 = ppplVar5;
      }
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  func_0x0001098d8570(&ppuStack_148);
  if (lStack_118 < 0) {
    __ZdlPv(uStack_128);
  }
  FUN_10a05bd10(&pplStack_100);
  func_0x00010a05a86c(&pplStack_158);
  ppplVar5 = ppplVar7;
  __Unwind_Resume();
  pcStack_168 = FUN_10a385774;
  pplVar10 = *ppplVar5;
  plStack_190 = unaff_x22;
  ppplStack_188 = unaff_x21;
  ppplStack_180 = param_1;
  pplStack_178 = (long **)ppplVar7;
  puStack_170 = &stack0xfffffffffffffff0;
  if (*(char *)((long)param_3 + 0x17) < '\0') {
    func_0x000107c3192c(&uStack_1b0,*param_3,param_3[1]);
  }
  else {
    uStack_1a8 = param_3[1];
    uStack_1b0 = *param_3;
    lStack_1a0 = param_3[2];
  }
  cStack_198 = '\x01';
  (*(code *)pplVar10)(ppplVar8,&uStack_1b0,ppplVar5);
  if ((cStack_198 == '\x01') && (lStack_1a0 < 0)) {
    __ZdlPv(uStack_1b0);
  }
  return;
}



/* Entry: 10a385774; end: 10a38582b;  */

void FUN_10a385774(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  code *pcVar1;
  undefined8 uStack_50;
  undefined8 uStack_48;
  long lStack_40;
  char cStack_38;
  
  pcVar1 = (code *)*param_1;
  if (*(char *)((long)param_3 + 0x17) < '\0') {
    func_0x000107c3192c(&uStack_50,*param_3,param_3[1]);
  }
  else {
    uStack_48 = param_3[1];
    uStack_50 = *param_3;
    lStack_40 = param_3[2];
  }
  cStack_38 = '\x01';
  (*pcVar1)(param_2,&uStack_50,param_1);
  if ((cStack_38 == '\x01') && (lStack_40 < 0)) {
    __ZdlPv(uStack_50);
  }
  return;
}



/* Entry: 10a38582c; end: 10a385857;  */

undefined8 * FUN_10a38582c(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  
  plVar4 = *(long **)(param_1 + 0x18);
  if (plVar4 != (long *)0x0) {
    __ZNSt3__119__shared_weak_count4lockEv();
    if (plVar4 != (long *)0x0) {
      if (*(long *)(param_1 + 0x10) != 0) {
        FUN_10a05c0fc(*(long *)(param_1 + 0x10),*(undefined8 *)(param_1 + 8));
      }
      plVar1 = plVar4 + 1;
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
        (**(code **)(*plVar4 + 0x10))(plVar4);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
      }
    }
    if (*(long *)(param_1 + 0x18) != 0) {
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
  }
  return (undefined8 *)(param_1 + 8);
}



/* Entry: 10a385858; end: 10a385d87;  */

undefined *** FUN_10a385858(undefined ***param_1,long param_2,long param_3)

{
  undefined ***pppuVar1;
  char cVar2;
  bool bVar3;
  undefined4 uVar4;
  undefined ***pppuVar5;
  long *plVar6;
  ulong uVar7;
  ulong uVar8;
  int iVar9;
  undefined **ppuVar10;
  undefined **ppuVar11;
  long lVar12;
  undefined **ppuVar13;
  undefined ***pppuVar14;
  undefined8 *puVar15;
  undefined *puVar16;
  long *unaff_x24;
  long *plVar17;
  long lVar18;
  undefined *puVar19;
  undefined *puStack_918;
  undefined8 uStack_910;
  undefined1 uStack_908;
  undefined *puStack_900;
  undefined8 uStack_8f8;
  undefined1 uStack_8f0;
  undefined **ppuStack_8e8;
  undefined *puStack_8e0;
  undefined *puStack_8d8;
  ulong uStack_8d0;
  ulong uStack_8c8;
  ulong uStack_8c0;
  undefined4 uStack_8b8;
  undefined **ppuStack_8b0;
  undefined *puStack_8a8;
  undefined8 uStack_8a0;
  undefined1 uStack_898;
  undefined *puStack_890;
  undefined8 uStack_888;
  undefined1 uStack_880;
  int iStack_878;
  undefined1 auStack_870 [1024];
  undefined1 auStack_470 [508];
  undefined4 uStack_274;
  undefined1 *puStack_270;
  code *pcStack_268;
  long lStack_260;
  ulong uStack_258;
  code **ppcStack_250;
  undefined8 uStack_240;
  undefined ***pppuStack_238;
  uint uStack_22c;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined **ppuStack_210;
  long *plStack_208;
  undefined **ppuStack_200;
  undefined8 uStack_1f8;
  undefined *puStack_1f0;
  undefined4 uStack_1e8;
  undefined8 *puStack_1e0;
  long *plStack_1d8;
  code *pcStack_1d0;
  undefined **ppuStack_1c8;
  undefined8 uStack_1c0;
  undefined ***pppuStack_1b8;
  long lStack_190;
  code *pcStack_188;
  undefined8 *apuStack_180 [7];
  undefined **ppuStack_148;
  undefined8 uStack_140;
  long alStack_138 [7];
  undefined8 uStack_100;
  code *pcStack_f8;
  undefined **ppuStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined **ppuStack_b8;
  long *plStack_b0;
  undefined1 auStack_a8 [56];
  long lStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_22c = (uint)param_1;
  if (uStack_22c < 6) {
    if ((1 << (ulong)(uStack_22c & 0x1f) & 0x35U) == 0) {
      if (uStack_22c != 3) goto LAB_10a385950;
      lVar12 = *(long *)(param_3 + 0x10);
      uStack_240 = *(undefined8 *)(param_3 + 0x18);
      pppuVar14 = *(undefined ****)(param_3 + 0x20);
      if (pppuVar14 == (undefined ***)0x0) {
        pppuStack_1b8 = (undefined ***)0x0;
      }
      else {
        pppuVar5 = pppuVar14 + 1;
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(pppuVar5,0x10);
          if (bVar3) {
            *pppuVar5 = (undefined **)((long)*pppuVar5 + 1);
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(pppuVar5,0x10);
          if (bVar3) {
            *pppuVar5 = (undefined **)((long)*pppuVar5 + 1);
            cVar2 = ExclusiveMonitorsStatus();
          }
          pppuStack_1b8 = pppuVar14;
        } while (cVar2 != '\0');
      }
      ppuStack_1c8 = &PTR_FUN_110bc7788;
      param_1 = &ppuStack_1c8;
      plStack_1d8 = (long *)0x0;
      pcStack_1d0 = FUN_10a385d88;
      puStack_1e0 = (undefined8 *)0x0;
      plVar6 = *(long **)(lVar12 + 0xf0);
      param_2 = param_3;
      pppuStack_238 = pppuVar14;
      uStack_1c0 = uStack_240;
      if (((plVar6 == (long *)0x0) ||
          (__ZNSt3__119__shared_weak_count4lockEv(), param_2 = param_3, plStack_1d8 = plVar6,
          plVar6 == (long *)0x0)) ||
         (puVar15 = *(undefined8 **)(lVar12 + 0xe8), puStack_1e0 = puVar15,
         puVar15 == (undefined8 *)0x0)) {
        plVar6 = plStack_1d8;
        ppuVar11 = &PTR_PTR_113301b20;
        ppuVar13 = ppuVar11;
        FUN_10ae079a0(0,&PTR_PTR_113301b20);
        FUN_10ae07cd4(ppuVar13,&PTR_PTR_113301b20);
      }
      else {
        *(undefined4 *)(lVar12 + 0x120) = 1;
        ppuStack_200 = &PTR_DAT_110b1abc8;
        uStack_1f8 = 0;
        puStack_1f0 = &DAT_11383d918;
        uStack_1e8 = 0;
        func_0x000107c30248(&puStack_1f0,lVar12 + 0x108,0);
        FUN_10a3bf4bc(&ppuStack_148,&ppuStack_200);
        pcStack_188 = pcStack_1d0;
        unaff_x24 = &lStack_190;
        lStack_190 = lVar12;
        (*(code *)ppuStack_1c8[2])(apuStack_180,&ppuStack_1c8);
        lVar18 = *(long *)(*(long *)(lVar12 + 0xe0) + 0x100);
        FUN_10a346a60(&uStack_228,*(undefined8 *)(lVar12 + 0xf8),&lStack_190);
        plVar6 = (long *)0x138;
        __Znwm();
        ppuStack_b8 = ppuStack_148;
        plVar17 = plVar6 + 1;
        *plVar17 = 0;
        plVar6[2] = 0;
        *plVar6 = (long)&PTR_FUN_110b9f3b0;
        ppuVar13 = (undefined **)(plVar6 + 3);
        ppuStack_148 = (undefined **)0x0;
        plStack_b0 = (long *)uStack_140;
        (**(code **)(alStack_138[0] + 0x10))(auStack_a8,alStack_138);
        lStack_70 = uStack_100;
        uStack_258 = *(ulong *)(lVar18 + 0x210);
        lStack_260 = *(long *)(lVar18 + 0x208);
        if (-1 < (char)*(byte *)(lVar18 + 0x21f)) {
          uStack_258 = (ulong)*(byte *)(lVar18 + 0x21f);
          lStack_260 = lVar18 + 0x208;
        }
        ppcStack_250 = &pcStack_f8;
        pcStack_f8 = FUN_10a385ea0;
        ppuStack_f0 = &PTR_FUN_110bc77c8;
        uStack_e8 = uStack_228;
        uStack_d8 = uStack_218;
        uStack_e0 = uStack_220;
        uStack_220 = 0;
        uStack_218 = 0;
        param_2 = 0x23;
        FUN_10a23708c(ppuVar13,&UNK_10e4ac7bc,0x23,"POST",4,&ppuStack_b8,0);
        (*(code *)*ppuStack_f0)(&ppuStack_f0);
        FUN_10a042634(&ppuStack_b8);
        ppuStack_210 = ppuVar13;
        plStack_208 = plVar6;
        FUN_10a346bc0(&uStack_228);
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar17,0x10);
          if (bVar3) {
            *plVar17 = *plVar17 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        ppuVar11 = (undefined **)&ppuStack_b8;
        ppuStack_b8 = ppuVar13;
        plStack_b0 = plVar6;
        (**(code **)*puVar15)(puVar15,ppuVar11);
        plVar6 = plStack_b0;
        if (plStack_b0 != (long *)0x0) {
          plVar17 = plStack_b0 + 1;
          do {
            lVar12 = *plVar17;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar17,0x10);
            if (bVar3) {
              *plVar17 = lVar12 + -1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (lVar12 == 0) {
            (**(code **)(*plStack_b0 + 0x10))(plStack_b0);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
          }
        }
        plVar6 = plStack_208;
        if (plStack_208 != (long *)0x0) {
          plVar17 = plStack_208 + 1;
          do {
            lVar12 = *plVar17;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar17,0x10);
            if (bVar3) {
              *plVar17 = lVar12 + -1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (lVar12 == 0) {
            (**(code **)(*plStack_208 + 0x10))(plStack_208);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
          }
        }
        (*(code *)*apuStack_180[0])(apuStack_180);
        FUN_10a042634(&ppuStack_148);
        func_0x0001098d8740(&ppuStack_200);
        plVar6 = plStack_1d8;
      }
      if (plVar6 != (long *)0x0) {
        plVar17 = plVar6 + 1;
        do {
          lVar12 = *plVar17;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar17,0x10);
          if (bVar3) {
            *plVar17 = lVar12 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar12 == 0) {
          (**(code **)(*plVar6 + 0x10))(plVar6);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
        }
      }
      pppuVar5 = param_1;
      (*(code *)*ppuStack_1c8)();
      if (pppuVar14 != (undefined ***)0x0) {
        pppuVar1 = pppuVar14 + 1;
        do {
          ppuVar13 = *pppuVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(pppuVar1,0x10);
          if (bVar3) {
            *pppuVar1 = (undefined **)((long)ppuVar13 + -1);
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (ppuVar13 == (undefined **)0x0) {
          (*(code *)(*pppuVar14)[2])(pppuVar14);
          __ZNSt3__119__shared_weak_count14__release_weakEv();
          pppuVar5 = pppuVar14;
        }
      }
    }
    else {
      pppuVar5 = *(undefined ****)(param_3 + 0x18);
      ppuVar11 = (undefined **)&uStack_22c;
      FUN_10a384f38(pppuVar5,ppuVar11);
    }
    param_3 = param_2;
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
      return pppuVar5;
    }
  }
  else {
LAB_10a385950:
    pppuVar5 = (undefined ***)0x0;
    func_0x00010ae02ecc(0,param_1);
    ppuVar13 = &PTR_PTR_113301ba8;
    ppuVar10 = ppuVar13;
    FUN_10ae079a0();
    ppuVar11 = (undefined **)param_1;
    func_0x00010ae02edc();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
      lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
      pppuVar5 = (undefined ***)0x0;
      if (ppuVar10 != (undefined **)0x0) {
        FUN_10ae03188(&puStack_8a8,auStack_470,0x400,auStack_870,0x400,ppuVar10[0x13],ppuVar10[0xf],
                      ppuVar10 + 0x14,0x400);
        puStack_918 = puStack_890;
        uStack_910 = uStack_888;
        puStack_900 = puStack_8a8;
        uStack_8f8 = uStack_8a0;
        uStack_908 = uStack_880;
        if (iStack_878 != 0) {
          puStack_918 = &UNK_10f6c352e;
          uStack_910 = 0x10;
          puStack_900 = &UNK_10f6c352e;
          uStack_8f8 = 0x10;
          uStack_908 = 0;
          uStack_898 = 0;
        }
        puVar19 = ppuVar10[0x12];
        puVar16 = ppuVar10[0xb];
        uVar7 = 0;
        _clock_gettime_nsec_np();
        uVar8 = uVar7;
        _pthread_self();
        _pthread_mach_thread_np();
        ppuStack_8e8 = ppuVar10 + 1;
        uStack_8b8 = *(undefined4 *)(ppuVar10 + 0xe);
        uStack_8c0 = uVar8 & 0xffffffff;
        ppuStack_8b0 = ppuVar10 + 0x10;
        pppuVar5 = (undefined ***)*ppuVar10;
        ppuVar13 = (undefined **)&ppuStack_8e8;
        uStack_8f0 = uStack_898;
        puStack_8e0 = puVar16;
        puStack_8d8 = puVar19;
        uStack_8d0 = (ulong)(puVar19 != (undefined *)0x0);
        uStack_8c8 = uVar7;
        FUN_10ae0784c(pppuVar5,ppuVar13,&puStack_900,&puStack_918);
      }
      iVar9 = (int)ppuVar13;
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
        return pppuVar5;
      }
      ___stack_chk_fail();
      if (iVar9 == 0) {
        __Unwind_Resume();
      }
      func_0x000104bd46a0();
      func_0x00010ae087bc();
      FUN_10ae07e54(pppuVar5);
      return pppuVar5;
    }
  }
  uVar4 = SUB84(pppuVar5,0);
  ___stack_chk_fail();
  FUN_10a05bd88(&ppuStack_b8);
  FUN_10a05bd88(&ppuStack_210);
  (*(code *)*apuStack_180[0])(unaff_x24 + 2);
  FUN_10a042634(&ppuStack_148);
  func_0x0001098d8740(&ppuStack_200);
  func_0x00010a05a8c4(&puStack_1e0);
  (*(code *)*ppuStack_1c8)(param_1);
  FUN_10a352eb0(&uStack_240);
  uStack_274 = uVar4;
  __Unwind_Resume();
  pcStack_268 = FUN_10a385d88;
  pppuVar5 = *(undefined ****)(param_3 + 0x10);
  puStack_270 = &stack0xfffffffffffffff0;
  FUN_10a384f38(pppuVar5,&uStack_274,ppuVar11);
  return pppuVar5;
}



/* Entry: 10a385d88; end: 10a385db7;  */

void FUN_10a385d88(undefined4 param_1,undefined8 param_2,long param_3)

{
  undefined4 uStack_14;
  
  uStack_14 = param_1;
  FUN_10a384f38(*(undefined8 *)(param_3 + 0x10),&uStack_14,param_2);
  return;
}



/* Entry: 10a385db8; end: 10a385e9f;  */

long FUN_10a385db8(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  plVar5 = *(long **)(param_1 + 0x10);
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
  return param_1 + 8;
}



/* Entry: 10a385ea0; end: 10a38610b;  */

long * FUN_10a385ea0(long *param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  undefined ***pppuVar5;
  undefined **ppuVar6;
  int iVar7;
  long *plVar8;
  long lVar9;
  long lStack_158;
  long *plStack_150;
  undefined **ppuStack_148;
  undefined8 uStack_140;
  undefined *puStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  long lStack_118;
  long lStack_110;
  long lStack_108;
  long *plStack_100;
  long lStack_f8;
  long lStack_f0;
  long *plStack_e8;
  long lStack_e0;
  long lStack_d8;
  int iStack_d0;
  long lStack_c8;
  long lStack_c0;
  undefined1 auStack_b8 [56];
  long lStack_80;
  undefined4 uStack_78;
  undefined1 auStack_70 [40];
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar4 = *(long **)(param_2 + 0x20);
  plVar8 = plVar4;
  if (plVar4 != (long *)0x0) {
    __ZNSt3__119__shared_weak_count4lockEv();
    plVar8 = plVar4;
    plStack_150 = plVar4;
    if (plVar4 != (long *)0x0) {
      lStack_158 = *(long *)(param_2 + 0x18);
      if (lStack_158 != 0) {
        plVar8 = *(long **)(*(long *)(param_2 + 0x10) + 0x18);
        lStack_f8 = param_1[1];
        plStack_100 = (long *)*param_1;
        lStack_f0 = param_1[2];
        *param_1 = 0;
        param_1[1] = 0;
        lStack_e0 = param_1[4];
        plStack_e8 = (long *)param_1[3];
        lStack_d8 = param_1[5];
        param_1[2] = 0;
        param_1[3] = 0;
        param_1[4] = 0;
        param_1[5] = 0;
        iStack_d0 = (int)param_1[6];
        lStack_c8 = param_1[7];
        lStack_c0 = param_1[8];
        param_1[7] = 0;
        (**(code **)(param_1[9] + 0x10))(auStack_b8,param_1 + 9);
        lStack_80 = param_1[0x10];
        uStack_78 = (undefined4)param_1[0x11];
        FUN_10a0424c4(auStack_70,param_1 + 0x12);
        lVar9 = *plVar8;
        uStack_128 = 0;
        uStack_120 = 0;
        lStack_118 = 0;
        if (iStack_d0 - 200U < 100) {
          lStack_108 = (long)(int)lStack_80;
          ppuStack_148 = &PTR_DAT_110b1ab78;
          uStack_140 = 0;
          puStack_138 = &DAT_11383d918;
          uStack_130 = 0;
          lStack_110 = lStack_c8;
          pppuVar5 = &ppuStack_148;
          func_0x000107c30348(pppuVar5,&lStack_110);
          if ((int)pppuVar5 == 0) {
            ppuVar6 = &PTR_PTR_113301bd8;
            FUN_10ae079a0(0,&PTR_PTR_113301bd8);
            FUN_10ae07cd4(ppuVar6,&PTR_PTR_113301bd8);
            iVar7 = 0;
          }
          else {
            iVar7 = 0;
            if ((int)uStack_130 - 1U < 4) {
              iVar7 = (int)uStack_130 + 1;
            }
            __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
                      (&uStack_128,(ulong)puStack_138 & 0xfffffffffffffffc);
          }
          func_0x0001098d88d4(&ppuStack_148);
        }
        else {
          iVar7 = 0;
        }
        *(int *)(lVar9 + 0x120) = iVar7;
        FUN_10a385774(plVar8 + 1,iVar7,&uStack_128);
        if (lStack_118 < 0) {
          __ZdlPv(uStack_128);
        }
        func_0x000104c4f944(auStack_70);
        plVar8 = &lStack_c8;
        FUN_10a042634();
        if (lStack_d8 < 0) {
          plVar8 = plStack_e8;
          __ZdlPv();
        }
        if (lStack_f0 < 0) {
          plVar8 = plStack_100;
          __ZdlPv();
        }
      }
      plVar1 = plVar4 + 1;
      do {
        lVar9 = *plVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = lVar9 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar9 == 0) {
        (**(code **)(*plVar4 + 0x10))(plVar4);
        __ZNSt3__119__shared_weak_count14__release_weakEv();
        plVar8 = plVar4;
      }
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return plVar8;
  }
  ___stack_chk_fail();
  func_0x0001098d88d4(&ppuStack_148);
  if (lStack_118 < 0) {
    __ZdlPv(uStack_128);
  }
  FUN_10a05bd10(&plStack_100);
  func_0x00010a05a86c(&lStack_158);
  __Unwind_Resume();
  plVar4 = (long *)plVar8[3];
  if (plVar4 != (long *)0x0) {
    __ZNSt3__119__shared_weak_count4lockEv();
    if (plVar4 != (long *)0x0) {
      if (plVar8[2] != 0) {
        FUN_10a05c0fc(plVar8[2],plVar8[1]);
      }
      plVar1 = plVar4 + 1;
      do {
        lVar9 = *plVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = lVar9 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar9 == 0) {
        (**(code **)(*plVar4 + 0x10))(plVar4);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
      }
    }
    if (plVar8[3] != 0) {
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
  }
  return plVar8 + 1;
}



/* Entry: 10a38610c; end: 10a386137;  */

undefined8 * FUN_10a38610c(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  
  plVar4 = *(long **)(param_1 + 0x18);
  if (plVar4 != (long *)0x0) {
    __ZNSt3__119__shared_weak_count4lockEv();
    if (plVar4 != (long *)0x0) {
      if (*(long *)(param_1 + 0x10) != 0) {
        FUN_10a05c0fc(*(long *)(param_1 + 0x10),*(undefined8 *)(param_1 + 8));
      }
      plVar1 = plVar4 + 1;
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
        (**(code **)(*plVar4 + 0x10))(plVar4);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
      }
    }
    if (*(long *)(param_1 + 0x18) != 0) {
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
  }
  return (undefined8 *)(param_1 + 8);
}



/* Entry: 10a386138; end: 10a3862d3;  */

long * FUN_10a386138(long *param_1,long param_2)

{
  long *plVar1;
  undefined8 uVar2;
  char cVar3;
  bool bVar4;
  long *plVar5;
  long *plVar6;
  long lVar7;
  long lStack_118;
  long *plStack_110;
  undefined1 uStack_101;
  long *plStack_100;
  long lStack_f8;
  long lStack_f0;
  long *plStack_e8;
  long lStack_e0;
  long lStack_d8;
  int iStack_d0;
  long lStack_c8;
  long lStack_c0;
  undefined1 auStack_b8 [56];
  long lStack_80;
  undefined4 uStack_78;
  undefined1 auStack_70 [40];
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar5 = *(long **)(param_2 + 0x20);
  plVar6 = plVar5;
  if (plVar5 != (long *)0x0) {
    __ZNSt3__119__shared_weak_count4lockEv();
    plVar6 = plVar5;
    plStack_110 = plVar5;
    if (plVar5 != (long *)0x0) {
      lStack_118 = *(long *)(param_2 + 0x18);
      if (lStack_118 != 0) {
        lVar7 = *(long *)(param_2 + 0x10);
        lStack_f8 = param_1[1];
        plStack_100 = (long *)*param_1;
        lStack_f0 = param_1[2];
        *param_1 = 0;
        param_1[1] = 0;
        lStack_e0 = param_1[4];
        plStack_e8 = (long *)param_1[3];
        lStack_d8 = param_1[5];
        param_1[2] = 0;
        param_1[3] = 0;
        param_1[4] = 0;
        param_1[5] = 0;
        iStack_d0 = (int)param_1[6];
        lStack_c8 = param_1[7];
        lStack_c0 = param_1[8];
        param_1[7] = 0;
        (**(code **)(param_1[9] + 0x10))(auStack_b8,param_1 + 9);
        lStack_80 = param_1[0x10];
        uStack_78 = (undefined4)param_1[0x11];
        FUN_10a0424c4(auStack_70,param_1 + 0x12);
        uVar2 = *(undefined8 *)(lVar7 + 0x20);
        *(undefined4 *)(*(long *)(lVar7 + 0x18) + 0x120) = 0;
        uStack_101 = iStack_d0 == 200;
        FUN_10a087a3c(uVar2,&uStack_101);
        func_0x000104c4f944(auStack_70);
        plVar6 = &lStack_c8;
        FUN_10a042634();
        if (lStack_d8 < 0) {
          plVar6 = plStack_e8;
          __ZdlPv();
        }
        if (lStack_f0 < 0) {
          plVar6 = plStack_100;
          __ZdlPv();
        }
      }
      plVar1 = plVar5 + 1;
      do {
        lVar7 = *plVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar4) {
          *plVar1 = lVar7 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar7 == 0) {
        (**(code **)(*plVar5 + 0x10))(plVar5);
        __ZNSt3__119__shared_weak_count14__release_weakEv();
        plVar6 = plVar5;
      }
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return plVar6;
  }
  ___stack_chk_fail();
  FUN_10a05bd10(&plStack_100);
  func_0x00010a05a86c(&lStack_118);
  __Unwind_Resume();
  plVar5 = (long *)plVar6[3];
  if (plVar5 != (long *)0x0) {
    __ZNSt3__119__shared_weak_count4lockEv();
    if (plVar5 != (long *)0x0) {
      if (plVar6[2] != 0) {
        FUN_10a05c0fc(plVar6[2],plVar6[1]);
      }
      plVar1 = plVar5 + 1;
      do {
        lVar7 = *plVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar4) {
          *plVar1 = lVar7 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar7 == 0) {
        (**(code **)(*plVar5 + 0x10))(plVar5);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
      }
    }
    if (plVar6[3] != 0) {
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
  }
  return plVar6 + 1;
}



/* Entry: 10a3862d4; end: 10a3862ff;  */

undefined8 * FUN_10a3862d4(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  
  plVar4 = *(long **)(param_1 + 0x18);
  if (plVar4 != (long *)0x0) {
    __ZNSt3__119__shared_weak_count4lockEv();
    if (plVar4 != (long *)0x0) {
      if (*(long *)(param_1 + 0x10) != 0) {
        FUN_10a05c0fc(*(long *)(param_1 + 0x10),*(undefined8 *)(param_1 + 8));
      }
      plVar1 = plVar4 + 1;
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
        (**(code **)(*plVar4 + 0x10))(plVar4);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
      }
    }
    if (*(long *)(param_1 + 0x18) != 0) {
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
  }
  return (undefined8 *)(param_1 + 8);
}



/* Entry: 10a386300; end: 10a386463;  */

void FUN_10a386300(long *param_1,long *param_2)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  long lStack_40;
  long *plStack_38;
  long *plStack_30;
  long *plStack_28;
  
  plVar3 = (long *)0x90;
  __Znwm();
  plVar4 = plVar3 + 1;
  *plVar4 = 0;
  *plVar3 = (long)&PTR_FUN_110b9fe30;
  lStack_40 = *param_2;
  plStack_30 = plVar3 + 3;
  plVar3[4] = param_2[1];
  *plStack_30 = lStack_40;
  plVar3[2] = 0;
  *param_2 = 0;
  param_2[1] = 0;
  plVar3[5] = 0;
  plVar3[6] = 0;
  plVar3[7] = 0x32aaaba7;
  plVar3[9] = 0;
  plVar3[8] = 0;
  plVar3[0xb] = 0;
  plVar3[10] = 0;
  plVar3[0xd] = 0;
  plVar3[0xc] = 0;
  plVar3[0xf] = 0;
  plVar3[0xe] = 0;
  plVar3[0x11] = 0;
  plVar3[0x10] = 0;
  *param_1 = lStack_40;
  param_1[1] = (long)plVar3;
  do {
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
    if (bVar2) {
      *plVar4 = *plVar4 + 1;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  do {
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
    if (bVar2) {
      *plVar4 = *plVar4 + 1;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  plStack_38 = plVar3;
  plStack_28 = plVar3;
  func_0x00010a053e8c(plStack_30,&lStack_40);
  plVar3 = plStack_38;
  if (plStack_38 != (long *)0x0) {
    plVar4 = plStack_38 + 1;
    do {
      lVar5 = *plVar4;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
      if (bVar2) {
        *plVar4 = lVar5 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar5 == 0) {
      (**(code **)(*plStack_38 + 0x10))(plStack_38);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar3);
    }
  }
  if (*plStack_30 != 0) {
    func_0x00010a053ee8(*plStack_30,&plStack_30);
  }
  plVar3 = plStack_28;
  if (plStack_28 != (long *)0x0) {
    plVar4 = plStack_28 + 1;
    do {
      lVar5 = *plVar4;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
      if (bVar2) {
        *plVar4 = lVar5 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar5 == 0) {
      (**(code **)(*plStack_28 + 0x10))(plStack_28);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar3);
    }
  }
  return;
}



/* Entry: 10a386464; end: 10a386583;  */

void FUN_10a386464(long param_1,undefined8 *param_2,undefined8 param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  lVar4 = param_2[1];
  if ((lVar4 == 0) || (*(long *)(lVar4 + 8) == -1)) {
    plVar5 = *(long **)(param_1 + 8);
    if (plVar5 != (long *)0x0) {
      plVar1 = plVar5 + 1;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = *plVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      plVar1 = plVar5 + 2;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = *plVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      lVar4 = param_2[1];
    }
    *param_2 = param_3;
    param_2[1] = plVar5;
    if (lVar4 != 0) {
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
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
  }
  return;
}



/* Entry: 10a386584; end: 10a3865c3;  */

void FUN_10a386584(long param_1)

{
  FUN_10aa88d20(param_1 + 0x20,*(undefined8 *)(param_1 + 0x18));
  if (*(long *)(param_1 + 0x28) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZNSt3__119__shared_weak_count14__release_weakEv_110346648)();
    return;
  }
  return;
}



/* Entry: 10a3865c4; end: 10a3865ff;  */

long FUN_10a3865c4(long param_1,undefined8 param_2)

{
  FUN_10a042ab0(param_2,&PTR_DAT_110bc7848);
  param_1 = param_1 + 0x20;
  if ((int)param_2 == 0) {
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 10a386600; end: 10a386613;  */

void FUN_10a386600(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a386614; end: 10a386633;  */

void FUN_10a386614(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110bc7868;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}


