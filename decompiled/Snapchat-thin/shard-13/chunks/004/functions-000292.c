/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10a5ccb8c; end: 10a5ccbaf;  */

long FUN_10a5ccb8c(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  
  if ((int)param_1 == 1) {
    return param_1;
  }
  lVar4 = 1;
  FUN_10a052ee0(1,0,param_1);
  plVar6 = *(long **)(lVar4 + 8);
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
  return lVar4;
}



/* Entry: 10a5ccbb0; end: 10a5ccc07;  */

long FUN_10a5ccbb0(long param_1)

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



/* Entry: 10a5ccc08; end: 10a5cccbf;  */

void FUN_10a5ccc08(undefined8 param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  undefined8 uVar6;
  
  plVar4 = *(long **)(param_2 + 0x20);
  if (plVar4 != (long *)0x0) {
    uVar6 = *(undefined8 *)(param_2 + 0x10);
    __ZNSt3__119__shared_weak_count4lockEv();
    if (plVar4 != (long *)0x0) {
      if (*(long *)(param_2 + 0x18) != 0) {
        FUN_10a5a1898(uVar6,param_1);
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
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR___ZNSt3__119__shared_weak_count14__release_weakEv_110346648)(plVar4);
        return;
      }
    }
  }
  return;
}



/* Entry: 10a5cccc0; end: 10a5ccd2b;  */

void FUN_10a5cccc0(long param_1)

{
  if (*(long *)(param_1 + 0x18) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZNSt3__119__shared_weak_count14__release_weakEv_110346648)();
    return;
  }
  return;
}



/* Entry: 10a5ccd2c; end: 10a5cce23;  */

long * FUN_10a5ccd2c(long *param_1,uint param_2,undefined8 param_3,long *param_4)

{
  undefined8 *puVar1;
  char cVar2;
  long *plVar3;
  code **ppcVar4;
  code *pcStack_98;
  undefined **ppuStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = (undefined8 *)0x158;
  __Znwm();
  puVar1[1] = 0;
  puVar1[2] = 0;
  *puVar1 = &PTR_FUN_110be7500;
  plVar3 = puVar1 + 3;
  uStack_60 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_78 = 0;
  uStack_80 = 0;
  uStack_88 = 0;
  pcStack_98 = FUN_10a4ba630;
  ppuStack_90 = &PTR_DAT_110950c70;
  ppcVar4 = &pcStack_98;
  FUN_10a5cce24(plVar3,param_2 & 1,param_3);
  (*(code *)*ppuStack_90)(&ppuStack_90);
  *param_1 = (long)plVar3;
  param_1[1] = (long)puVar1;
  cVar2 = (char)puVar1 + '@';
  FUN_10a4ba650();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return param_1;
  }
  ___stack_chk_fail();
  *(undefined1 *)(param_1 + 4) = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  *param_1 = (long)&PTR_FUN_110c6c330;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = (long)&PTR_DAT_110c6c3a0;
  param_1[8] = 0;
  param_1[7] = 0;
  param_1[10] = 0;
  param_1[9] = 0;
  *(undefined4 *)(param_1 + 0xb) = 0x3f800000;
  *(char *)(param_1 + 0xc) = cVar2;
  *(undefined4 *)((long)param_1 + 100) = 0;
  *(undefined2 *)(param_1 + 0xd) = 0;
  *(undefined8 *)((long)param_1 + 0x74) = 0;
  *(undefined8 *)((long)param_1 + 0x6c) = 0;
  *(undefined4 *)((long)param_1 + 0x7c) = 0;
  param_1[0x10] = *plVar3;
  (**(code **)(plVar3[1] + 0x10))(param_1 + 0x11,plVar3 + 1);
  param_1[0x18] = *param_4;
  (**(code **)(param_4[1] + 0x10))(param_1 + 0x19,param_4 + 1);
  param_1[0x20] = (long)*ppcVar4;
  (**(code **)(ppcVar4[1] + 0x10))(param_1 + 0x21,ppcVar4 + 1);
  return param_1;
}



/* Entry: 10a5cce24; end: 10a5cceef;  */

undefined8 *
FUN_10a5cce24(undefined8 *param_1,undefined1 param_2,undefined8 *param_3,undefined8 *param_4,
             undefined8 *param_5)

{
  *(undefined1 *)(param_1 + 4) = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  *param_1 = &PTR_FUN_110c6c330;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = &PTR_DAT_110c6c3a0;
  param_1[8] = 0;
  param_1[7] = 0;
  param_1[10] = 0;
  param_1[9] = 0;
  *(undefined4 *)(param_1 + 0xb) = 0x3f800000;
  *(undefined1 *)(param_1 + 0xc) = param_2;
  *(undefined4 *)((long)param_1 + 100) = 0;
  *(undefined2 *)(param_1 + 0xd) = 0;
  *(undefined8 *)((long)param_1 + 0x74) = 0;
  *(undefined8 *)((long)param_1 + 0x6c) = 0;
  *(undefined4 *)((long)param_1 + 0x7c) = 0;
  param_1[0x10] = *param_3;
  (**(code **)(param_3[1] + 0x10))(param_1 + 0x11,param_3 + 1);
  param_1[0x18] = *param_4;
  (**(code **)(param_4[1] + 0x10))(param_1 + 0x19,param_4 + 1);
  param_1[0x20] = *param_5;
  (**(code **)(param_5[1] + 0x10))(param_1 + 0x21,param_5 + 1);
  return param_1;
}



/* Entry: 10a5ccef0; end: 10a5cceff;  */

void FUN_10a5ccef0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110bf8458;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10a5ccf00; end: 10a5ccf1f;  */

void FUN_10a5ccf00(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110bf8458;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a5ccf20; end: 10a5ccf2f;  */

void FUN_10a5ccf20(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010a5ccf28. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 10a5ccf30; end: 10a5ccfdf;  */

void FUN_10a5ccf30(long param_1,undefined8 *param_2,undefined8 param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  if ((param_2 != (undefined8 *)0x0) &&
     ((lVar4 = param_2[1], lVar4 == 0 || (*(long *)(lVar4 + 8) == -1)))) {
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



/* Entry: 10a5ccfe0; end: 10a5cd083;  */

void FUN_10a5ccfe0(undefined8 *param_1,undefined8 *param_2)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  code *pcVar5;
  long lVar6;
  undefined8 uStack_30;
  long *plStack_28;
  
  pcVar5 = (code *)*param_1;
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
  (*pcVar5)(&uStack_30,param_1);
  plVar1 = plStack_28;
  if (plStack_28 != (long *)0x0) {
    plVar2 = plStack_28 + 1;
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
      (**(code **)(*plStack_28 + 0x10))(plStack_28);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar1);
    }
  }
  return;
}



/* Entry: 10a5cd084; end: 10a5cd273;  */

void FUN_10a5cd084(code **param_1,code **param_2)

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
  undefined8 *puStack_d0;
  undefined8 *puStack_c8;
  code **ppcStack_c0;
  undefined ***pppuStack_b8;
  undefined1 *puStack_b0;
  code *pcStack_a8;
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
      pcStack_78 = FUN_10a5cd440;
      ppuStack_70 = &PTR_FUN_110bf8368;
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
    FUN_10a5cd274(pppuVar7,param_2);
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
  FUN_10a297544(ppcVar6 + 2);
  func_0x00010a004dac(&pcStack_98);
  pppuVar8 = pppuVar7;
  __Unwind_Resume();
  pcStack_a8 = FUN_10a5cd274;
  ppcStack_c0 = ppcVar6;
  pppuStack_b8 = pppuVar7;
  puStack_b0 = &stack0xfffffffffffffff0;
  func_0x000109884c0c(&puStack_d0,pppuVar8 + 1,*pppuVar8);
  func_0x000109884820(&puStack_c8,&puStack_d0,*pppuVar8);
  if (puStack_d0 != (undefined8 *)0x0) {
    (**(code **)*puStack_d0)();
  }
  (**(code **)(**pppuVar8 + 0x30))(&puStack_d0);
  FUN_10a5cd360(*pppuVar8,&puStack_d0,&puStack_c8,ppcVar10);
  if (puStack_d0 != (undefined8 *)0x0) {
    (**(code **)*puStack_d0)();
  }
  if (puStack_c8 != (undefined8 *)0x0) {
    (**(code **)*puStack_c8)();
  }
  return;
}



/* Entry: 10a5cd274; end: 10a5cd35f;  */

void FUN_10a5cd274(undefined8 *param_1,undefined8 param_2)

{
  undefined8 *puStack_30;
  undefined8 *puStack_28;
  
  func_0x000109884c0c(&puStack_30,param_1 + 1,*param_1);
  func_0x000109884820(&puStack_28,&puStack_30,*param_1);
  if (puStack_30 != (undefined8 *)0x0) {
    (**(code **)*puStack_30)();
  }
  (**(code **)(*(long *)*param_1 + 0x30))(&puStack_30);
  FUN_10a5cd360(*param_1,&puStack_30,&puStack_28,param_2);
  if (puStack_30 != (undefined8 *)0x0) {
    (**(code **)*puStack_30)();
  }
  if (puStack_28 != (undefined8 *)0x0) {
    (**(code **)*puStack_28)();
  }
  return;
}



/* Entry: 10a5cd360; end: 10a5cd43f;  */

void FUN_10a5cd360(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int aiStack_80 [2];
  undefined8 *puStack_78;
  int aiStack_70 [2];
  undefined8 *puStack_68;
  undefined8 uStack_60;
  long *plStack_58;
  undefined8 uStack_50;
  undefined4 **ppuStack_48;
  int *piStack_40;
  undefined8 uStack_38;
  
  func_0x00010a5cc6a4(aiStack_70,param_1,param_4);
  uStack_38 = 1;
  piStack_40 = aiStack_70;
  (**(code **)(*param_1 + 0x58))(param_1);
  ppuStack_48 = &piStack_40;
  uStack_60 = param_3;
  plStack_58 = param_1;
  uStack_50 = param_2;
  func_0x0001098960c0(aiStack_80);
  if ((3 < aiStack_80[0]) && (puStack_78 != (undefined8 *)0x0)) {
    (**(code **)*puStack_78)();
  }
  if ((3 < aiStack_70[0]) && (puStack_68 != (undefined8 *)0x0)) {
    (**(code **)*puStack_68)();
  }
  return;
}



/* Entry: 10a5cd440; end: 10a5cd44f;  */

void FUN_10a5cd440(long param_1)

{
  undefined8 *puVar1;
  undefined8 *puStack_30;
  undefined8 *puStack_28;
  
  puVar1 = *(undefined8 **)(param_1 + 0x10);
  func_0x000109884c0c(&puStack_30,puVar1 + 1,*puVar1);
  func_0x000109884820(&puStack_28,&puStack_30,*puVar1);
  if (puStack_30 != (undefined8 *)0x0) {
    (**(code **)*puStack_30)();
  }
  (**(code **)(*(long *)*puVar1 + 0x30))(&puStack_30);
  FUN_10a5cd360(*puVar1,&puStack_30,&puStack_28,param_1 + 0x20);
  if (puStack_30 != (undefined8 *)0x0) {
    (**(code **)*puStack_30)();
  }
  if (puStack_28 != (undefined8 *)0x0) {
    (**(code **)*puStack_28)();
  }
  return;
}



/* Entry: 10a5cd450; end: 10a5cd477;  */

long FUN_10a5cd450(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  FUN_10a297544(param_1 + 0x18);
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



/* Entry: 10a5cd478; end: 10a5cd4b7;  */

void FUN_10a5cd478(undefined8 *param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined8 uVar5;
  
  *param_1 = &PTR_FUN_110bf8368;
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



/* Entry: 10a5cd4b8; end: 10a5cd51f;  */

void FUN_10a5cd4b8(undefined8 *param_1,undefined8 param_2,long param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  plVar5 = (long *)param_1[1];
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined1 *)(*(long *)(param_3 + 0x10) + 0x94) = 1;
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



/* Entry: 10a5cd520; end: 10a5cd553;  */

void FUN_10a5cd520(void)

{
  return;
}



/* Entry: 10a5cd554; end: 10a5cd5bb;  */

void FUN_10a5cd554(undefined8 *param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  plVar5 = (long *)param_1[1];
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined1 *)(*(long *)(param_2 + 0x10) + 0x94) = 1;
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



/* Entry: 10a5cd5bc; end: 10a5cd5ff;  */

void FUN_10a5cd5bc(void)

{
  return;
}



/* Entry: 10a5cd600; end: 10a5cd657;  */

void FUN_10a5cd600(long *param_1,long param_2)

{
  code *pcVar1;
  long lVar2;
  
  lVar2 = *param_1;
  *param_1 = param_2;
  if (lVar2 == 0) {
    return;
  }
  if ((ulong)*(byte *)(lVar2 + 8) < 4) {
    (*(code *)(&PTR_DAT_110bf7e78)[*(byte *)(lVar2 + 8)])(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(lVar2);
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10a5cd658);
  (*pcVar1)();
}



/* Entry: 10a5cd658; end: 10a5cd67f;  */

void FUN_10a5cd658(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 != 0) {
    FUN_10a5cd680();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10a5cd680; end: 10a5cd707;  */

long FUN_10a5cd680(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  long *plVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  
  if (*(long *)(param_1 + 0x40) != 0) {
    *(long *)(param_1 + 0x48) = *(long *)(param_1 + 0x40);
    __ZdlPv();
  }
  lVar4 = *(long *)(param_1 + 0x18);
  if (*(long *)(param_1 + 0x20) != lVar4) {
    uVar2 = *(ulong *)(param_1 + 0x30);
    plVar5 = (long *)(lVar4 + (uVar2 / 0x66) * 8);
    plVar3 = (long *)*plVar5;
    uVar1 = *(long *)(param_1 + 0x38) + uVar2;
    lVar4 = *(long *)(lVar4 + (uVar1 / 0x66) * 8);
    plVar6 = plVar3 + (uVar2 % 0x66) * 5;
    while (plVar6 != (long *)(lVar4 + (uVar1 % 0x66) * 0x28)) {
      if (((int)plVar6[2] != 0) && ((char)plVar6[1] == '\x01')) {
        (**(code **)(*plVar6 + 0x50))(*(byte *)((long)plVar6 + 9) + 1);
        *(undefined4 *)((long)plVar6 + 0xc) = 0;
        plVar3 = (long *)*plVar5;
      }
      plVar6 = plVar6 + 5;
      if ((long)plVar6 - (long)plVar3 == 0xff0) {
        plVar5 = plVar5 + 1;
        plVar3 = (long *)*plVar5;
        plVar6 = plVar3;
      }
    }
  }
  FUN_10a322c4c(param_1 + 0x10);
  return param_1;
}



/* Entry: 10a5cd708; end: 10a5cd8cf;  */

undefined * FUN_10a5cd708(undefined8 *param_1)

{
  undefined8 *puVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  int iVar5;
  undefined **ppuVar6;
  undefined **ppuVar7;
  undefined *puVar8;
  undefined *puVar9;
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
  
  uVar3 = param_1[1];
  puVar1 = (undefined8 *)*param_1;
  if (-1 < (char)*(byte *)((long)param_1 + 0x17)) {
    uVar3 = (ulong)*(byte *)((long)param_1 + 0x17);
    puVar1 = param_1;
  }
  FUN_10ae03140(0,puVar1,uVar3);
  FUN_10ae03140();
  FUN_10ae03140();
  ppuVar7 = &PTR_PTR_1133028c8;
  ppuVar6 = ppuVar7;
  FUN_10ae079a0();
  FUN_10ae0314c();
  FUN_10ae0314c();
  FUN_10ae0314c();
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar4 = (undefined *)0x0;
  if (ppuVar6 != (undefined **)0x0) {
    FUN_10ae03188(&puStack_8a8,auStack_470,0x400,auStack_870,0x400,ppuVar6[0x13],ppuVar6[0xf],
                  ppuVar6 + 0x14,0x400);
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
    puVar9 = ppuVar6[0x12];
    puVar8 = ppuVar6[0xb];
    uVar2 = 0;
    _clock_gettime_nsec_np();
    uVar3 = uVar2;
    _pthread_self();
    _pthread_mach_thread_np();
    ppuStack_8e8 = ppuVar6 + 1;
    uStack_8b8 = *(undefined4 *)(ppuVar6 + 0xe);
    uStack_8c0 = uVar3 & 0xffffffff;
    ppuStack_8b0 = ppuVar6 + 0x10;
    puVar4 = *ppuVar6;
    ppuVar7 = (undefined **)&ppuStack_8e8;
    uStack_8f0 = uStack_898;
    puStack_8e0 = puVar8;
    puStack_8d8 = puVar9;
    uStack_8d0 = (ulong)(puVar9 != (undefined *)0x0);
    uStack_8c8 = uVar2;
    FUN_10ae0784c(puVar4,ppuVar7,&puStack_900,&puStack_918);
  }
  iVar5 = (int)ppuVar7;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_70) {
    ___stack_chk_fail();
    if (iVar5 == 0) {
      __Unwind_Resume();
    }
    func_0x000104bd46a0();
    func_0x00010ae087bc();
    FUN_10ae07e54(puVar4);
    return puVar4;
  }
  return puVar4;
}



/* Entry: 10a5cd8d0; end: 10a5cda13;  */

void FUN_10a5cd8d0(undefined8 param_1,undefined8 *param_2)

{
  if (param_2 != (undefined8 *)0x0) {
    FUN_10a5cd8d0(param_1,*param_2);
    FUN_10a5cd8d0(param_1,param_2[1]);
    func_0x00010a5cd918(param_2 + 4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(param_2);
    return;
  }
  return;
}



/* Entry: 10a5cda14; end: 10a5cdb63;  */

void FUN_10a5cda14(long *param_1)

{
  char cVar1;
  bool bVar2;
  code *pcVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  plVar4 = (long *)param_1[1];
  if (plVar4 != (long *)0x0) {
    __ZNSt3__119__shared_weak_count4lockEv();
    if (plVar4 != (long *)0x0) {
      lVar7 = *param_1;
      if (lVar7 != 0) {
        __ZNSt3__15mutex4lockEv(lVar7 + 0x40);
        if (*(long *)(lVar7 + 0x18) != 0) {
          lVar6 = *(long *)(lVar7 + 0x20);
          __ZNSt3__15mutex4lockEv(lVar6);
          *(undefined8 *)(lVar6 + 0x138) = 0;
          uStack_68 = *(undefined8 *)(lVar6 + 0x148);
          uStack_70 = *(undefined8 *)(lVar6 + 0x140);
          uStack_58 = *(undefined8 *)(lVar6 + 0x158);
          uStack_60 = *(undefined8 *)(lVar6 + 0x150);
          *(undefined8 *)(lVar6 + 0x148) = 0;
          *(undefined8 *)(lVar6 + 0x140) = 0;
          *(undefined8 *)(lVar6 + 0x158) = 0;
          *(undefined8 *)(lVar6 + 0x150) = 0;
          lVar8 = *(long *)(lVar6 + 0x168);
          uStack_48 = *(undefined8 *)(lVar6 + 0x168);
          uStack_50 = *(undefined8 *)(lVar6 + 0x160);
          *(undefined8 *)(lVar6 + 0x160) = 0;
          *(undefined8 *)(lVar6 + 0x168) = 0;
          __ZNSt3__15mutex6unlockEv(lVar6);
          if (lVar8 != 0) {
            plVar5 = *(long **)(lVar7 + 0x18);
            if (plVar5 == (long *)0x0) {
              FUN_10a06186c();
                    /* WARNING: Does not return */
              pcVar3 = (code *)SoftwareBreakpoint(1,0x10a5cdb24);
              (*pcVar3)();
            }
            (**(code **)(*plVar5 + 0x30))(plVar5,&uStack_70);
          }
          FUN_10a5c93e4(&uStack_70);
        }
        __ZNSt3__15mutex6unlockEv(lVar7 + 0x40);
      }
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
  }
  (*(code *)param_1[3])(param_1);
  return;
}



/* Entry: 10a5cdb64; end: 10a5cdbcb;  */

void FUN_10a5cdb64(long param_1)

{
  if (param_1 != 0) {
    if (*(long *)(param_1 + 8) != 0) {
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(param_1);
    return;
  }
  return;
}



/* Entry: 10a5cdbcc; end: 10a5cddcb;  */

char * FUN_10a5cdbcc(char *param_1)

{
  long lVar1;
  undefined4 uVar2;
  undefined2 uVar3;
  ulong uVar4;
  ulong uVar5;
  byte bVar6;
  undefined *puVar7;
  code *pcVar8;
  undefined **ppuVar9;
  undefined **ppuVar10;
  long *plVar11;
  undefined **ppuVar12;
  long lVar13;
  undefined1 uVar14;
  long *plVar15;
  ulong uVar16;
  ulong uVar17;
  
  puVar7 = PTR___tlv_bootstrap_11340d750;
  if (*param_1 == '\x01') {
    ppuVar12 = &PTR___tlv_bootstrap_11340d750;
    ppuVar9 = ppuVar12;
    (*(code *)PTR___tlv_bootstrap_11340d750)();
    ppuVar10 = &PTR___tlv_bootstrap_11340d738;
    if (((ulong)*ppuVar9 & 1) == 0) {
      ppuVar9 = ppuVar10;
      (*(code *)PTR___tlv_bootstrap_11340d738)(&PTR___tlv_bootstrap_11340d738);
      __tlv_atexit(0x10a132a8c,ppuVar9,0x100000000);
      (*(code *)puVar7)();
      *(undefined1 *)ppuVar12 = 1;
    }
    (*(code *)PTR___tlv_bootstrap_11340d738)();
    plVar15 = (long *)ppuVar10[2];
    if (plVar15 != (long *)0x0) {
      lVar13 = plVar15[1];
      bVar6 = *(byte *)(lVar13 + 0x42) | *(byte *)(lVar13 + 0x43);
      if ((((bVar6 & 1) != 0) || ((*(byte *)(lVar13 + 0x3f) & 1) != 0)) ||
         (*(char *)(lVar13 + 0x40) == '\x01')) {
        uVar17 = cntfrq_el0;
        InstructionSynchronizationBarrier();
        uVar16 = cntvct_el0;
        if (uVar17 != 1000000000) {
          uVar4 = 0;
          if (uVar17 != 0) {
            uVar4 = uVar16 / uVar17;
          }
          uVar5 = 0;
          if (uVar17 != 0) {
            uVar5 = ((uVar16 - uVar4 * uVar17) * 1000000000) / uVar17;
          }
          uVar16 = uVar5 + uVar4 * 1000000000;
        }
        if (*(char *)(plVar15[1] + 0x40) == '\x01') {
          uVar17 = *(ulong *)(param_1 + 8);
          if (uVar17 <= uVar16) {
            lVar13 = *plVar15;
            __ZNSt3__15mutex4lockEv(lVar13 + 0x180);
            FUN_10a15387c((double)(uVar16 - uVar17),lVar13,lVar13 + 0x180,uVar17,uVar16);
            __ZNSt3__15mutex6unlockEv(lVar13 + 0x180);
          }
        }
        lVar13 = lRam00000001137eb468;
        if ((bVar6 & 1) != 0) {
          uVar2 = *(undefined4 *)(param_1 + 4);
          uVar3 = *(undefined2 *)(param_1 + 2);
          plVar11 = plVar15;
          FUN_10a1333cc();
          if (plVar11 != (long *)0x0) {
            uVar14 = 6;
            if (lRam00000001137eb468 != lVar13) {
              uVar14 = 8;
            }
            lVar1 = 0;
            if (lRam00000001137eb468 != lVar13) {
              lVar1 = lVar13;
            }
            *plVar11 = (long)&UNK_10f666c4f;
            plVar11[1] = lVar1;
            plVar11[2] = uVar16;
            *(undefined4 *)(plVar11 + 3) = uVar2;
            *(undefined2 *)((long)plVar11 + 0x1c) = uVar3;
            *(undefined1 *)((long)plVar11 + 0x1e) = uVar14;
            if ((*(byte *)(plVar15 + 0x38) & 1) == 0) {
                    /* WARNING: Does not return */
              pcVar8 = (code *)SoftwareBreakpoint(1,0x10a5cddc4);
              (*pcVar8)();
            }
            plVar15[0x18] = plVar15[0x18] + 1;
          }
        }
      }
      if (((*(char *)(plVar15[1] + 0x41) == '\x01') && (param_1[0x18] == '\x01')) &&
         (plVar15 = (long *)plVar15[0xb], plVar15 != (long *)0x0)) {
        (**(code **)(*plVar15 + 0x18))(plVar15,*(undefined8 *)(param_1 + 0x10));
      }
    }
  }
  return param_1;
}



/* Entry: 10a5cddcc; end: 10a5cde23;  */

long FUN_10a5cddcc(long param_1)

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



/* Entry: 10a5cde24; end: 10a5cde4f;  */

void FUN_10a5cde24(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  long lVar6;
  long lStack_30;
  long *plStack_28;
  
  puVar4 = *(undefined8 **)(*(long *)(*(long *)(param_1 + 0x10) + 0x108) + 0xd40);
  if (puVar4[3] != 0) {
    puVar5 = puVar4;
    __ZNSt3__16chrono12steady_clock3nowEv();
    *(double *)(puVar4[3] + 0x28) = (double)(long)puVar5;
  }
  FUN_10ad62f40(&lStack_30,*puVar4);
  if (lStack_30 != 0) {
    FUN_10ad63da4(lStack_30 + 0xc0);
  }
  if (plStack_28 != (long *)0x0) {
    plVar1 = plStack_28 + 1;
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
      (**(code **)(*plStack_28 + 0x10))(plStack_28);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___ZNSt3__119__shared_weak_count14__release_weakEv_110346648)(plStack_28);
      return;
    }
  }
  return;
}



/* Entry: 10a5cde50; end: 10a5cdf57;  */

long FUN_10a5cde50(long param_1)

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



/* Entry: 10a5cdf58; end: 10a5cdf67;  */

void FUN_10a5cdf58(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110bf7ec0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10a5cdf68; end: 10a5cdf87;  */

void FUN_10a5cdf68(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110bf7ec0;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a5cdf88; end: 10a5cdf93;  */

void FUN_10a5cdf88(long param_1)

{
  FUN_10ad5d35c();
  FUN_10ad5dc0c(param_1 + 0x58,*(undefined8 *)(param_1 + 0x60));
                    /* WARNING: Could not recover jumptable at 0x00010bdbd490. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__15mutexD1Ev_110346798)(param_1 + 0x18);
  return;
}



/* Entry: 10a5cdf94; end: 10a5ce007;  */

void FUN_10a5cdf94(undefined8 *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar1 = (undefined8 *)0x30;
  __Znwm();
  puVar1[1] = 0;
  puVar1[2] = 0;
  puVar2 = puVar1 + 3;
  *puVar1 = &PTR_FUN_110bf7a48;
  FUN_10a0982b0(puVar2,param_2);
  puVar1[3] = &PTR_DAT_110bf7a98;
  *param_1 = puVar2;
  param_1[1] = puVar1;
  return;
}



/* Entry: 10a5ce008; end: 10a5ce04f;  */

long * FUN_10a5ce008(long *param_1)

{
  long *plVar1;
  long lVar2;
  
  plVar1 = (long *)param_1[2];
  while (plVar1 != (long *)0x0) {
    plVar1 = (long *)*plVar1;
    __ZdlPv();
  }
  lVar2 = *param_1;
  *param_1 = 0;
  if (lVar2 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 10a5ce050; end: 10a5ce41f;  */

void FUN_10a5ce050(long *param_1,long param_2,long param_3)

{
  ulong uVar1;
  code *pcVar2;
  long lVar3;
  long lVar4;
  uint uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  long *plVar9;
  long *plVar10;
  ulong uVar11;
  long *plVar12;
  long *plVar13;
  ulong uVar14;
  ulong uVar15;
  ulong unaff_x24;
  
  uVar5 = (uint)((ulong)param_2 >> 0x20);
  uVar8 = ((ulong)(uint)((int)param_2 << 3) + 8 ^ (ulong)uVar5) * -0x622015f714c7d297;
  uVar8 = ((ulong)uVar5 ^ uVar8 >> 0x2f ^ uVar8) * -0x622015f714c7d297;
  uVar15 = (uVar8 ^ uVar8 >> 0x2f) * -0x622015f714c7d297;
  uVar8 = param_1[1];
  if (uVar8 != 0) {
    uVar6 = uVar8 - 1;
    if ((uVar8 & uVar6) == 0) {
      unaff_x24 = uVar6 & uVar15;
    }
    else {
      unaff_x24 = uVar15;
      if (uVar8 <= uVar15) {
        uVar11 = 0;
        if (uVar8 != 0) {
          uVar11 = uVar15 / uVar8;
        }
        unaff_x24 = uVar15 - uVar11 * uVar8;
      }
    }
    plVar9 = *(long **)(*param_1 + unaff_x24 * 8);
    if (plVar9 != (long *)0x0) {
      do {
        while( true ) {
          plVar9 = (long *)*plVar9;
          if (plVar9 == (long *)0x0) goto LAB_10a5ce130;
          uVar11 = plVar9[1];
          if (uVar11 != uVar15) break;
          if (plVar9[2] == param_2) {
            return;
          }
        }
        if ((uVar8 & uVar6) == 0) {
          uVar11 = uVar11 & uVar6;
        }
        else if (uVar8 <= uVar11) {
          uVar7 = 0;
          if (uVar8 != 0) {
            uVar7 = uVar11 / uVar8;
          }
          uVar11 = uVar11 - uVar7 * uVar8;
        }
      } while (uVar11 == unaff_x24);
    }
  }
LAB_10a5ce130:
  plVar9 = (long *)0x18;
  __Znwm();
  *plVar9 = 0;
  plVar9[1] = uVar15;
  plVar9[2] = param_3;
  if ((uVar8 == 0) || (*(float *)(param_1 + 4) * (float)uVar8 < (float)(param_1[3] + 1))) {
    uVar6 = 1;
    if (2 < uVar8) {
      uVar6 = (ulong)((uVar8 & uVar8 - 1) != 0);
    }
    uVar6 = uVar6 | uVar8 << 1;
    uVar11 = (ulong)((float)(param_1[3] + 1) / *(float *)(param_1 + 4));
    if (uVar6 <= uVar11) {
      uVar6 = uVar11;
    }
    if (uVar6 - 1 == 0) {
      uVar6 = 2;
    }
    else if ((uVar6 & uVar6 - 1) != 0) {
      __ZNSt3__112__next_primeEm();
      uVar8 = param_1[1];
    }
    if (uVar8 < uVar6) {
LAB_10a5ce1c8:
      if (uVar6 >> 0x3d != 0) {
        func_0x000109ffded8();
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x10a5ce40c);
        (*pcVar2)();
      }
      lVar3 = uVar6 << 3;
      __Znwm();
      lVar4 = *param_1;
      *param_1 = lVar3;
      if (lVar4 != 0) {
        __ZdlPv();
      }
      uVar8 = 0;
      param_1[1] = uVar6;
      do {
        *(undefined8 *)(*param_1 + uVar8 * 8) = 0;
        uVar8 = uVar8 + 1;
      } while (uVar6 != uVar8);
      plVar10 = (long *)param_1[2];
      uVar8 = uVar6;
      if (plVar10 != (long *)0x0) {
        uVar11 = plVar10[1];
        uVar7 = uVar6 - 1;
        if ((uVar6 & uVar7) == 0) {
          uVar11 = uVar11 & uVar7;
        }
        else if (uVar6 <= uVar11) {
          uVar14 = 0;
          if (uVar6 != 0) {
            uVar14 = uVar11 / uVar6;
          }
          uVar11 = uVar11 - uVar14 * uVar6;
        }
        *(long **)(*param_1 + uVar11 * 8) = param_1 + 2;
        plVar12 = (long *)*plVar10;
        while (plVar12 != (long *)0x0) {
          uVar14 = plVar12[1];
          if ((uVar6 & uVar7) == 0) {
            uVar14 = uVar14 & uVar7;
          }
          else if (uVar6 <= uVar14) {
            uVar1 = 0;
            if (uVar6 != 0) {
              uVar1 = uVar14 / uVar6;
            }
            uVar14 = uVar14 - uVar1 * uVar6;
          }
          plVar13 = plVar12;
          if (uVar14 != uVar11) {
            lVar3 = *param_1;
            if (*(long *)(lVar3 + uVar14 * 8) == 0) {
              *(long **)(lVar3 + uVar14 * 8) = plVar10;
              uVar11 = uVar14;
            }
            else {
              *plVar10 = *plVar12;
              *plVar12 = **(undefined8 **)(lVar3 + uVar14 * 8);
              **(long **)(lVar3 + uVar14 * 8) = (long)plVar12;
              plVar13 = plVar10;
            }
          }
          plVar10 = plVar13;
          plVar12 = (long *)*plVar13;
        }
      }
    }
    else if (uVar6 < uVar8) {
      uVar11 = (ulong)((float)(ulong)param_1[3] / *(float *)(param_1 + 4));
      if ((uVar8 < 3) || ((uVar8 & uVar8 - 1) != 0)) {
        __ZNSt3__112__next_primeEm();
      }
      else if (1 < uVar11) {
        uVar11 = 1L << (-LZCOUNT(uVar11 - 1) & 0x3fU);
      }
      if (uVar6 <= uVar11) {
        uVar6 = uVar11;
      }
      if (uVar6 < uVar8) {
        if (uVar6 != 0) goto LAB_10a5ce1c8;
        lVar3 = *param_1;
        *param_1 = 0;
        if (lVar3 != 0) {
          __ZdlPv();
        }
        param_1[1] = 0;
        uVar8 = 0;
      }
      else {
        uVar8 = param_1[1];
      }
    }
    if ((uVar8 & uVar8 - 1) == 0) {
      unaff_x24 = uVar8 - 1 & uVar15;
    }
    else {
      unaff_x24 = uVar15;
      if (uVar8 <= uVar15) {
        uVar6 = 0;
        if (uVar8 != 0) {
          uVar6 = uVar15 / uVar8;
        }
        unaff_x24 = uVar15 - uVar6 * uVar8;
      }
    }
  }
  lVar3 = *param_1;
  plVar10 = *(long **)(lVar3 + unaff_x24 * 8);
  if (plVar10 == (long *)0x0) {
    plVar10 = param_1 + 2;
    *plVar9 = *plVar10;
    *plVar10 = (long)plVar9;
    *(long **)(lVar3 + unaff_x24 * 8) = plVar10;
    if (*plVar9 == 0) goto LAB_10a5ce3a8;
    uVar15 = *(ulong *)(*plVar9 + 8);
    if ((uVar8 & uVar8 - 1) == 0) {
      uVar15 = uVar15 & uVar8 - 1;
    }
    else if (uVar8 <= uVar15) {
      uVar6 = 0;
      if (uVar8 != 0) {
        uVar6 = uVar15 / uVar8;
      }
      uVar15 = uVar15 - uVar6 * uVar8;
    }
    plVar10 = (long *)(*param_1 + uVar15 * 8);
  }
  else {
    *plVar9 = *plVar10;
  }
  *plVar10 = (long)plVar9;
LAB_10a5ce3a8:
  param_1[3] = param_1[3] + 1;
  return;
}



/* Entry: 10a5ce420; end: 10a5ce477;  */

long FUN_10a5ce420(long param_1)

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



/* Entry: 10a5ce478; end: 10a5ce487;  */

void FUN_10a5ce478(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110bf7f10;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10a5ce488; end: 10a5ce4a7;  */

void FUN_10a5ce488(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110bf7f10;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a5ce4a8; end: 10a5ce5e7;  */

long FUN_10a5ce4a8(long param_1)

{
  long *plVar1;
  
  if (*(long *)(param_1 + 0x248) != 0) {
    *(long *)(param_1 + 0x250) = *(long *)(param_1 + 0x248);
    __ZdlPv();
  }
  if (*(long *)(param_1 + 0x230) != 0) {
    *(long *)(param_1 + 0x238) = *(long *)(param_1 + 0x230);
    __ZdlPv();
  }
  if (*(long *)(param_1 + 0x218) != 0) {
    *(long *)(param_1 + 0x220) = *(long *)(param_1 + 0x218);
    __ZdlPv();
  }
  if (*(long *)(param_1 + 0x200) != 0) {
    *(long *)(param_1 + 0x208) = *(long *)(param_1 + 0x200);
    __ZdlPv();
  }
  plVar1 = *(long **)(param_1 + 0x198);
  *(undefined8 *)(param_1 + 0x198) = 0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = *(long **)(param_1 + 400);
  *(undefined8 *)(param_1 + 400) = 0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = *(long **)(param_1 + 0x188);
  *(undefined8 *)(param_1 + 0x188) = 0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  FUN_10a5bcdcc(param_1 + 0x160);
  func_0x00010a5bcd0c(param_1 + 0x138);
  func_0x00010a5bcccc(param_1 + 0x120,*(undefined8 *)(param_1 + 0x128));
  FUN_10a5bcdcc(param_1 + 0xd0);
  func_0x00010a5bcd0c(param_1 + 0xa8);
  func_0x00010a5bcccc(param_1 + 0x90,*(undefined8 *)(param_1 + 0x98));
  return param_1 + 0x18;
}



/* Entry: 10a5ce5e8; end: 10a5ce62f;  */

void FUN_10a5ce5e8(ulong param_1,long param_2)

{
  if ((param_1 & 1) != 0) {
    FUN_10a044790(param_2 + 0x30);
    (*(code *)**(undefined8 **)(param_2 + 0x38))();
    FUN_10a0617bc(param_2 + 0x20);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_2);
  return;
}



/* Entry: 10a5ce630; end: 10a5ce6eb;  */

void FUN_10a5ce630(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long *plVar1;
  char cVar2;
  code *pcVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  ulong uVar14;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long *plStack_68;
  
  plVar5 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar5[0x59] < 8) {
    plVar5[plVar5[0x59] + 0x4e] = plVar5[0x5a];
    plVar5[0x59] = plVar5[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar5 + 0x4b);
  }
  FUN_10a5ce7ac(param_2,param_3);
  FUN_10a052e3c(param_5);
  cVar2 = *(char *)((long)param_2 + 0x21);
  *param_1 = 3;
  *(double *)(param_1 + 2) = (double)(int)cVar2;
  plVar1 = plVar5 + 0x4b;
  lVar6 = plVar5[0x59];
  uVar7 = lVar6 - 1;
  plVar5[0x59] = uVar7;
  if (uVar7 < 8) {
    uVar7 = plVar1[lVar6 + 2];
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
  lVar6 = *plVar1;
  lVar11 = plVar5[0x4c];
  lVar9 = lVar11 - lVar6;
  uVar13 = lVar9 >> 4;
  if (uVar13 < uVar7) {
    uVar14 = uVar7 - uVar13;
    lVar12 = plVar5[0x4d];
    if ((ulong)(lVar12 - lVar11 >> 4) < uVar14) {
      if (uVar7 >> 0x3c == 0) {
        uVar8 = lVar12 - lVar6 >> 3;
        if (uVar8 <= uVar7) {
          uVar8 = uVar7;
        }
        if (0x7fffffffffffffef < (ulong)(lVar12 - lVar6)) {
          uVar8 = 0xfffffffffffffff;
        }
        plStack_68 = plVar1;
        if (uVar8 >> 0x3c == 0) {
          lVar4 = uVar8 << 4;
          __Znwm();
          lVar11 = lVar4 + lVar9;
          _bzero(lVar11,uVar14 * 0x10);
          lVar10 = lVar11 + uVar13 * -0x10;
          _memcpy(lVar10,lVar6,lVar9);
          *plVar1 = lVar10;
          plVar5[0x4c] = lVar11 + uVar14 * 0x10;
          plVar5[0x4d] = lVar4 + uVar8 * 0x10;
          lStack_88 = lVar6;
          lStack_80 = lVar6;
          lStack_78 = lVar6;
          lStack_70 = lVar12;
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
    _bzero(lVar11,uVar14 * 0x10);
    plVar5[0x4c] = lVar11 + uVar14 * 0x10;
  }
  else if (uVar7 < uVar13) {
    lVar6 = lVar6 + uVar7 * 0x10;
    while (lVar11 != lVar6) {
      lVar11 = lVar11 + -0x10;
      func_0x00010988c204(lVar11);
    }
    plVar5[0x4c] = lVar6;
  }
code_r0x00010988c138:
  plVar5[0x5a] = uVar7;
  return;
}



/* Entry: 10a5ce6ec; end: 10a5ce7ab;  */

void FUN_10a5ce6ec(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  code *pcVar1;
  long lVar2;
  long *plVar3;
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
  func_0x00010a5ce814(param_2,param_3);
  FUN_10a5ce87c(param_5);
  func_0x00010a5ce8a0(param_2,param_4);
  *(char *)((long)plVar4 + 0x21) = (char)param_2;
  *param_1 = 0;
  plVar4 = plVar3 + 0x4b;
  lVar5 = plVar3[0x59];
  uVar6 = lVar5 - 1;
  plVar3[0x59] = uVar6;
  if (uVar6 < 8) {
    uVar6 = plVar4[lVar5 + 2];
    if (plVar3[0x5a] == uVar6) {
      return;
    }
  }
  else {
    uVar6 = *(ulong *)(plVar3[0x57] + -8);
    plVar3[0x57] = plVar3[0x57] + -8;
    if (plVar3[0x5a] == uVar6) {
      return;
    }
  }
  lVar5 = *plVar4;
  lVar10 = plVar3[0x4c];
  lVar8 = lVar10 - lVar5;
  uVar12 = lVar8 >> 4;
  if (uVar12 < uVar6) {
    uVar13 = uVar6 - uVar12;
    lVar11 = plVar3[0x4d];
    if ((ulong)(lVar11 - lVar10 >> 4) < uVar13) {
      if (uVar6 >> 0x3c == 0) {
        uVar7 = lVar11 - lVar5 >> 3;
        if (uVar7 <= uVar6) {
          uVar7 = uVar6;
        }
        if (0x7fffffffffffffef < (ulong)(lVar11 - lVar5)) {
          uVar7 = 0xfffffffffffffff;
        }
        plStack_68 = plVar4;
        if (uVar7 >> 0x3c == 0) {
          lVar2 = uVar7 << 4;
          __Znwm();
          lVar10 = lVar2 + lVar8;
          _bzero(lVar10,uVar13 * 0x10);
          lVar9 = lVar10 + uVar12 * -0x10;
          _memcpy(lVar9,lVar5,lVar8);
          *plVar4 = lVar9;
          plVar3[0x4c] = lVar10 + uVar13 * 0x10;
          plVar3[0x4d] = lVar2 + uVar7 * 0x10;
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
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar1)();
    }
    _bzero(lVar10,uVar13 * 0x10);
    plVar3[0x4c] = lVar10 + uVar13 * 0x10;
  }
  else if (uVar6 < uVar12) {
    lVar5 = lVar5 + uVar6 * 0x10;
    while (lVar10 != lVar5) {
      lVar10 = lVar10 + -0x10;
      func_0x00010988c204(lVar10);
    }
    plVar3[0x4c] = lVar5;
  }
code_r0x00010988c138:
  plVar3[0x5a] = uVar6;
  return;
}



/* Entry: 10a5ce7ac; end: 10a5ce87b;  */

long * FUN_10a5ce7ac(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  long *plVar2;
  char cVar3;
  code *pcVar4;
  long lVar5;
  long *plVar6;
  long *plVar7;
  int *piVar8;
  long lVar9;
  ulong uVar10;
  undefined4 *extraout_x8;
  char cVar11;
  ulong uVar12;
  long lVar13;
  long lVar14;
  long *plVar15;
  long lVar16;
  ulong uVar17;
  ulong uVar18;
  double dVar19;
  long lStack_e8;
  long lStack_e0;
  long lStack_d8;
  long lStack_d0;
  long *plStack_c8;
  
  plVar6 = param_1;
  func_0x000109898688();
  if (plVar6 != (long *)0x0) {
    FUN_10a052c2c(param_1,plVar6);
    if (param_1 != (long *)0x0) {
      param_4 = 0;
      ___dynamic_cast();
      if (param_1 != (long *)0x0) {
        return param_1;
      }
    }
    func_0x00010988bd28(&UNK_10f685496);
  }
  plVar6 = (long *)&UNK_10f68f52e;
  func_0x00010988bd28();
  plVar7 = plVar6;
  func_0x000109898688();
  if (plVar7 != (long *)0x0) {
    FUN_10a053854(plVar6,plVar7);
    if (plVar6 != (long *)0x0) {
      param_4 = 0;
      ___dynamic_cast();
      if (plVar6 != (long *)0x0) {
        return plVar6;
      }
    }
    func_0x00010988bd28(&UNK_10f685496);
  }
  plVar6 = (long *)&UNK_10f68f52e;
  func_0x00010988bd28();
  if ((int)plVar6 == 1) {
    return plVar6;
  }
  piVar8 = (int *)0x0;
  FUN_10a052ee0(1,0,plVar6);
  if (*piVar8 == 3) {
    dVar19 = *(double *)(piVar8 + 2);
    cVar11 = '\x7f';
    if (dVar19 <= 0.0) {
      cVar11 = -0x80;
    }
    cVar3 = '\0';
    if (!NAN(dVar19)) {
      cVar3 = cVar11;
    }
    cVar11 = (char)(int)dVar19;
    if (0x7fefffffffffffff < (ulong)ABS(dVar19)) {
      cVar11 = cVar3;
    }
    return (long *)(ulong)(uint)(int)cVar11;
  }
  plVar6 = (long *)&UNK_10f68f550;
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
  FUN_10a5ce7ac(plVar6,piVar8);
  FUN_10a052e3c(param_4);
  cVar11 = *(char *)((long)plVar6 + 0x22);
  *extraout_x8 = 3;
  *(double *)(extraout_x8 + 2) = (double)(int)cVar11;
  plVar6 = plVar7 + 0x4b;
  lVar9 = plVar7[0x59];
  uVar10 = lVar9 - 1;
  plVar7[0x59] = uVar10;
  if (uVar10 < 8) {
    uVar10 = plVar6[lVar9 + 2];
    if (plVar7[0x5a] == uVar10) {
      return plVar6;
    }
  }
  else {
    uVar10 = *(ulong *)(plVar7[0x57] + -8);
    plVar7[0x57] = plVar7[0x57] + -8;
    if (plVar7[0x5a] == uVar10) {
      return plVar6;
    }
  }
  lVar9 = *plVar6;
  plVar15 = (long *)plVar7[0x4c];
  lVar13 = (long)plVar15 - lVar9;
  uVar17 = lVar13 >> 4;
  if (uVar17 < uVar10) {
    uVar18 = uVar10 - uVar17;
    lVar16 = plVar7[0x4d];
    if ((ulong)(lVar16 - (long)plVar15 >> 4) < uVar18) {
      if (uVar10 >> 0x3c == 0) {
        uVar12 = lVar16 - lVar9 >> 3;
        if (uVar12 <= uVar10) {
          uVar12 = uVar10;
        }
        if (0x7fffffffffffffef < (ulong)(lVar16 - lVar9)) {
          uVar12 = 0xfffffffffffffff;
        }
        plStack_c8 = plVar6;
        if (uVar12 >> 0x3c == 0) {
          lVar5 = uVar12 << 4;
          __Znwm();
          lVar1 = lVar5 + lVar13;
          _bzero(lVar1,uVar18 * 0x10);
          lVar14 = lVar1 + uVar17 * -0x10;
          _memcpy(lVar14,lVar9,lVar13);
          *plVar6 = lVar14;
          plVar7[0x4c] = lVar1 + uVar18 * 0x10;
          plVar7[0x4d] = lVar5 + uVar12 * 0x10;
          plVar6 = &lStack_e8;
          lStack_e8 = lVar9;
          lStack_e0 = lVar9;
          lStack_d8 = lVar9;
          lStack_d0 = lVar16;
          func_0x00010988c1b8(plVar6);
          goto code_r0x00010988c138;
        }
        func_0x000104c4f740();
      }
      else {
        func_0x00010988c1a4();
      }
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar4)();
    }
    plVar6 = plVar15;
    _bzero(plVar15,uVar18 * 0x10);
    plVar7[0x4c] = (long)(plVar15 + uVar18 * 2);
  }
  else if (uVar10 < uVar17) {
    plVar2 = (long *)(lVar9 + uVar10 * 0x10);
    while (plVar15 != plVar2) {
      plVar15 = plVar15 + -2;
      plVar6 = plVar15;
      func_0x00010988c204(plVar15);
    }
    plVar7[0x4c] = (long)plVar2;
  }
code_r0x00010988c138:
  plVar7[0x5a] = uVar10;
  return plVar6;
}



/* Entry: 10a5ce87c; end: 10a5ce8fb;  */

long * FUN_10a5ce87c(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  long *plVar2;
  char cVar3;
  code *pcVar4;
  long lVar5;
  long *plVar6;
  long *plVar7;
  int *piVar8;
  long lVar9;
  ulong uVar10;
  undefined4 *extraout_x8;
  char cVar11;
  ulong uVar12;
  long lVar13;
  long lVar14;
  long *plVar15;
  long lVar16;
  ulong uVar17;
  ulong uVar18;
  double dVar19;
  long lStack_a8;
  long lStack_a0;
  long lStack_98;
  long lStack_90;
  long *plStack_88;
  
  if ((int)param_1 == 1) {
    return param_1;
  }
  piVar8 = (int *)0x0;
  FUN_10a052ee0(1,0,param_1);
  if (*piVar8 == 3) {
    dVar19 = *(double *)(piVar8 + 2);
    cVar11 = '\x7f';
    if (dVar19 <= 0.0) {
      cVar11 = -0x80;
    }
    cVar3 = '\0';
    if (!NAN(dVar19)) {
      cVar3 = cVar11;
    }
    cVar11 = (char)(int)dVar19;
    if (0x7fefffffffffffff < (ulong)ABS(dVar19)) {
      cVar11 = cVar3;
    }
    return (long *)(ulong)(uint)(int)cVar11;
  }
  plVar6 = (long *)&UNK_10f68f550;
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
  FUN_10a5ce7ac(plVar6,piVar8);
  FUN_10a052e3c(param_4);
  cVar11 = *(char *)((long)plVar6 + 0x22);
  *extraout_x8 = 3;
  *(double *)(extraout_x8 + 2) = (double)(int)cVar11;
  plVar6 = plVar7 + 0x4b;
  lVar9 = plVar7[0x59];
  uVar10 = lVar9 - 1;
  plVar7[0x59] = uVar10;
  if (uVar10 < 8) {
    uVar10 = plVar6[lVar9 + 2];
    if (plVar7[0x5a] == uVar10) {
      return plVar6;
    }
  }
  else {
    uVar10 = *(ulong *)(plVar7[0x57] + -8);
    plVar7[0x57] = plVar7[0x57] + -8;
    if (plVar7[0x5a] == uVar10) {
      return plVar6;
    }
  }
  lVar9 = *plVar6;
  plVar15 = (long *)plVar7[0x4c];
  lVar13 = (long)plVar15 - lVar9;
  uVar17 = lVar13 >> 4;
  if (uVar17 < uVar10) {
    uVar18 = uVar10 - uVar17;
    lVar16 = plVar7[0x4d];
    if ((ulong)(lVar16 - (long)plVar15 >> 4) < uVar18) {
      if (uVar10 >> 0x3c == 0) {
        uVar12 = lVar16 - lVar9 >> 3;
        if (uVar12 <= uVar10) {
          uVar12 = uVar10;
        }
        if (0x7fffffffffffffef < (ulong)(lVar16 - lVar9)) {
          uVar12 = 0xfffffffffffffff;
        }
        plStack_88 = plVar6;
        if (uVar12 >> 0x3c == 0) {
          lVar5 = uVar12 << 4;
          __Znwm();
          lVar1 = lVar5 + lVar13;
          _bzero(lVar1,uVar18 * 0x10);
          lVar14 = lVar1 + uVar17 * -0x10;
          _memcpy(lVar14,lVar9,lVar13);
          *plVar6 = lVar14;
          plVar7[0x4c] = lVar1 + uVar18 * 0x10;
          plVar7[0x4d] = lVar5 + uVar12 * 0x10;
          plVar6 = &lStack_a8;
          lStack_a8 = lVar9;
          lStack_a0 = lVar9;
          lStack_98 = lVar9;
          lStack_90 = lVar16;
          func_0x00010988c1b8(plVar6);
          goto code_r0x00010988c138;
        }
        func_0x000104c4f740();
      }
      else {
        func_0x00010988c1a4();
      }
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar4)();
    }
    plVar6 = plVar15;
    _bzero(plVar15,uVar18 * 0x10);
    plVar7[0x4c] = (long)(plVar15 + uVar18 * 2);
  }
  else if (uVar10 < uVar17) {
    plVar2 = (long *)(lVar9 + uVar10 * 0x10);
    while (plVar15 != plVar2) {
      plVar15 = plVar15 + -2;
      plVar6 = plVar15;
      func_0x00010988c204(plVar15);
    }
    plVar7[0x4c] = (long)plVar2;
  }
code_r0x00010988c138:
  plVar7[0x5a] = uVar10;
  return plVar6;
}



/* Entry: 10a5ce8fc; end: 10a5ce9b7;  */

void FUN_10a5ce8fc(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long *plVar1;
  char cVar2;
  code *pcVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  ulong uVar14;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long *plStack_68;
  
  plVar5 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar5[0x59] < 8) {
    plVar5[plVar5[0x59] + 0x4e] = plVar5[0x5a];
    plVar5[0x59] = plVar5[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar5 + 0x4b);
  }
  FUN_10a5ce7ac(param_2,param_3);
  FUN_10a052e3c(param_5);
  cVar2 = *(char *)((long)param_2 + 0x22);
  *param_1 = 3;
  *(double *)(param_1 + 2) = (double)(int)cVar2;
  plVar1 = plVar5 + 0x4b;
  lVar6 = plVar5[0x59];
  uVar7 = lVar6 - 1;
  plVar5[0x59] = uVar7;
  if (uVar7 < 8) {
    uVar7 = plVar1[lVar6 + 2];
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
  lVar6 = *plVar1;
  lVar11 = plVar5[0x4c];
  lVar9 = lVar11 - lVar6;
  uVar13 = lVar9 >> 4;
  if (uVar13 < uVar7) {
    uVar14 = uVar7 - uVar13;
    lVar12 = plVar5[0x4d];
    if ((ulong)(lVar12 - lVar11 >> 4) < uVar14) {
      if (uVar7 >> 0x3c == 0) {
        uVar8 = lVar12 - lVar6 >> 3;
        if (uVar8 <= uVar7) {
          uVar8 = uVar7;
        }
        if (0x7fffffffffffffef < (ulong)(lVar12 - lVar6)) {
          uVar8 = 0xfffffffffffffff;
        }
        plStack_68 = plVar1;
        if (uVar8 >> 0x3c == 0) {
          lVar4 = uVar8 << 4;
          __Znwm();
          lVar11 = lVar4 + lVar9;
          _bzero(lVar11,uVar14 * 0x10);
          lVar10 = lVar11 + uVar13 * -0x10;
          _memcpy(lVar10,lVar6,lVar9);
          *plVar1 = lVar10;
          plVar5[0x4c] = lVar11 + uVar14 * 0x10;
          plVar5[0x4d] = lVar4 + uVar8 * 0x10;
          lStack_88 = lVar6;
          lStack_80 = lVar6;
          lStack_78 = lVar6;
          lStack_70 = lVar12;
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
    _bzero(lVar11,uVar14 * 0x10);
    plVar5[0x4c] = lVar11 + uVar14 * 0x10;
  }
  else if (uVar7 < uVar13) {
    lVar6 = lVar6 + uVar7 * 0x10;
    while (lVar11 != lVar6) {
      lVar11 = lVar11 + -0x10;
      func_0x00010988c204(lVar11);
    }
    plVar5[0x4c] = lVar6;
  }
code_r0x00010988c138:
  plVar5[0x5a] = uVar7;
  return;
}



/* Entry: 10a5ce9b8; end: 10a5cea77;  */

void FUN_10a5ce9b8(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  code *pcVar1;
  long lVar2;
  long *plVar3;
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
  func_0x00010a5ce814(param_2,param_3);
  FUN_10a5cea78(param_5);
  func_0x00010a5ce8a0(param_2,param_4);
  *(char *)((long)plVar4 + 0x22) = (char)param_2;
  *param_1 = 0;
  plVar4 = plVar3 + 0x4b;
  lVar5 = plVar3[0x59];
  uVar6 = lVar5 - 1;
  plVar3[0x59] = uVar6;
  if (uVar6 < 8) {
    uVar6 = plVar4[lVar5 + 2];
    if (plVar3[0x5a] == uVar6) {
      return;
    }
  }
  else {
    uVar6 = *(ulong *)(plVar3[0x57] + -8);
    plVar3[0x57] = plVar3[0x57] + -8;
    if (plVar3[0x5a] == uVar6) {
      return;
    }
  }
  lVar5 = *plVar4;
  lVar10 = plVar3[0x4c];
  lVar8 = lVar10 - lVar5;
  uVar12 = lVar8 >> 4;
  if (uVar12 < uVar6) {
    uVar13 = uVar6 - uVar12;
    lVar11 = plVar3[0x4d];
    if ((ulong)(lVar11 - lVar10 >> 4) < uVar13) {
      if (uVar6 >> 0x3c == 0) {
        uVar7 = lVar11 - lVar5 >> 3;
        if (uVar7 <= uVar6) {
          uVar7 = uVar6;
        }
        if (0x7fffffffffffffef < (ulong)(lVar11 - lVar5)) {
          uVar7 = 0xfffffffffffffff;
        }
        plStack_68 = plVar4;
        if (uVar7 >> 0x3c == 0) {
          lVar2 = uVar7 << 4;
          __Znwm();
          lVar10 = lVar2 + lVar8;
          _bzero(lVar10,uVar13 * 0x10);
          lVar9 = lVar10 + uVar12 * -0x10;
          _memcpy(lVar9,lVar5,lVar8);
          *plVar4 = lVar9;
          plVar3[0x4c] = lVar10 + uVar13 * 0x10;
          plVar3[0x4d] = lVar2 + uVar7 * 0x10;
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
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar1)();
    }
    _bzero(lVar10,uVar13 * 0x10);
    plVar3[0x4c] = lVar10 + uVar13 * 0x10;
  }
  else if (uVar6 < uVar12) {
    lVar5 = lVar5 + uVar6 * 0x10;
    while (lVar10 != lVar5) {
      lVar10 = lVar10 + -0x10;
      func_0x00010988c204(lVar10);
    }
    plVar3[0x4c] = lVar5;
  }
code_r0x00010988c138:
  plVar3[0x5a] = uVar6;
  return;
}



/* Entry: 10a5cea78; end: 10a5cea9b;  */

void FUN_10a5cea78(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  char cVar1;
  code *pcVar2;
  long lVar3;
  long *plVar4;
  long *plVar5;
  undefined8 uVar6;
  long lVar7;
  ulong uVar8;
  undefined4 *extraout_x8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  ulong uVar14;
  ulong uVar15;
  long lStack_98;
  long lStack_90;
  long lStack_88;
  long lStack_80;
  long *plStack_78;
  
  if ((int)param_1 == 1) {
    return;
  }
  plVar4 = (long *)0x1;
  uVar6 = 0;
  FUN_10a052ee0(1,0,param_1);
  plVar5 = plVar4;
  (**(code **)(*plVar4 + 0x58))();
  if ((ulong)plVar5[0x59] < 8) {
    plVar5[plVar5[0x59] + 0x4e] = plVar5[0x5a];
    plVar5[0x59] = plVar5[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar5 + 0x4b);
  }
  FUN_10a5ce7ac(plVar4,uVar6);
  FUN_10a052e3c(param_4);
  cVar1 = *(char *)((long)plVar4 + 0x23);
  *extraout_x8 = 3;
  *(double *)(extraout_x8 + 2) = (double)(int)cVar1;
  plVar4 = plVar5 + 0x4b;
  lVar7 = plVar5[0x59];
  uVar8 = lVar7 - 1;
  plVar5[0x59] = uVar8;
  if (uVar8 < 8) {
    uVar8 = plVar4[lVar7 + 2];
    if (plVar5[0x5a] == uVar8) {
      return;
    }
  }
  else {
    uVar8 = *(ulong *)(plVar5[0x57] + -8);
    plVar5[0x57] = plVar5[0x57] + -8;
    if (plVar5[0x5a] == uVar8) {
      return;
    }
  }
  lVar7 = *plVar4;
  lVar12 = plVar5[0x4c];
  lVar10 = lVar12 - lVar7;
  uVar14 = lVar10 >> 4;
  if (uVar14 < uVar8) {
    uVar15 = uVar8 - uVar14;
    lVar13 = plVar5[0x4d];
    if ((ulong)(lVar13 - lVar12 >> 4) < uVar15) {
      if (uVar8 >> 0x3c == 0) {
        uVar9 = lVar13 - lVar7 >> 3;
        if (uVar9 <= uVar8) {
          uVar9 = uVar8;
        }
        if (0x7fffffffffffffef < (ulong)(lVar13 - lVar7)) {
          uVar9 = 0xfffffffffffffff;
        }
        plStack_78 = plVar4;
        if (uVar9 >> 0x3c == 0) {
          lVar3 = uVar9 << 4;
          __Znwm();
          lVar12 = lVar3 + lVar10;
          _bzero(lVar12,uVar15 * 0x10);
          lVar11 = lVar12 + uVar14 * -0x10;
          _memcpy(lVar11,lVar7,lVar10);
          *plVar4 = lVar11;
          plVar5[0x4c] = lVar12 + uVar15 * 0x10;
          plVar5[0x4d] = lVar3 + uVar9 * 0x10;
          lStack_98 = lVar7;
          lStack_90 = lVar7;
          lStack_88 = lVar7;
          lStack_80 = lVar13;
          func_0x00010988c1b8(&lStack_98);
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
    _bzero(lVar12,uVar15 * 0x10);
    plVar5[0x4c] = lVar12 + uVar15 * 0x10;
  }
  else if (uVar8 < uVar14) {
    lVar7 = lVar7 + uVar8 * 0x10;
    while (lVar12 != lVar7) {
      lVar12 = lVar12 + -0x10;
      func_0x00010988c204(lVar12);
    }
    plVar5[0x4c] = lVar7;
  }
code_r0x00010988c138:
  plVar5[0x5a] = uVar8;
  return;
}



/* Entry: 10a5cea9c; end: 10a5ceb57;  */

void FUN_10a5cea9c(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long *plVar1;
  char cVar2;
  code *pcVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  ulong uVar14;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long *plStack_68;
  
  plVar5 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar5[0x59] < 8) {
    plVar5[plVar5[0x59] + 0x4e] = plVar5[0x5a];
    plVar5[0x59] = plVar5[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar5 + 0x4b);
  }
  FUN_10a5ce7ac(param_2,param_3);
  FUN_10a052e3c(param_5);
  cVar2 = *(char *)((long)param_2 + 0x23);
  *param_1 = 3;
  *(double *)(param_1 + 2) = (double)(int)cVar2;
  plVar1 = plVar5 + 0x4b;
  lVar6 = plVar5[0x59];
  uVar7 = lVar6 - 1;
  plVar5[0x59] = uVar7;
  if (uVar7 < 8) {
    uVar7 = plVar1[lVar6 + 2];
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
  lVar6 = *plVar1;
  lVar11 = plVar5[0x4c];
  lVar9 = lVar11 - lVar6;
  uVar13 = lVar9 >> 4;
  if (uVar13 < uVar7) {
    uVar14 = uVar7 - uVar13;
    lVar12 = plVar5[0x4d];
    if ((ulong)(lVar12 - lVar11 >> 4) < uVar14) {
      if (uVar7 >> 0x3c == 0) {
        uVar8 = lVar12 - lVar6 >> 3;
        if (uVar8 <= uVar7) {
          uVar8 = uVar7;
        }
        if (0x7fffffffffffffef < (ulong)(lVar12 - lVar6)) {
          uVar8 = 0xfffffffffffffff;
        }
        plStack_68 = plVar1;
        if (uVar8 >> 0x3c == 0) {
          lVar4 = uVar8 << 4;
          __Znwm();
          lVar11 = lVar4 + lVar9;
          _bzero(lVar11,uVar14 * 0x10);
          lVar10 = lVar11 + uVar13 * -0x10;
          _memcpy(lVar10,lVar6,lVar9);
          *plVar1 = lVar10;
          plVar5[0x4c] = lVar11 + uVar14 * 0x10;
          plVar5[0x4d] = lVar4 + uVar8 * 0x10;
          lStack_88 = lVar6;
          lStack_80 = lVar6;
          lStack_78 = lVar6;
          lStack_70 = lVar12;
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
    _bzero(lVar11,uVar14 * 0x10);
    plVar5[0x4c] = lVar11 + uVar14 * 0x10;
  }
  else if (uVar7 < uVar13) {
    lVar6 = lVar6 + uVar7 * 0x10;
    while (lVar11 != lVar6) {
      lVar11 = lVar11 + -0x10;
      func_0x00010988c204(lVar11);
    }
    plVar5[0x4c] = lVar6;
  }
code_r0x00010988c138:
  plVar5[0x5a] = uVar7;
  return;
}



/* Entry: 10a5ceb58; end: 10a5cec17;  */

void FUN_10a5ceb58(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  code *pcVar1;
  long lVar2;
  long *plVar3;
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
  func_0x00010a5ce814(param_2,param_3);
  FUN_10a5cec18(param_5);
  func_0x00010a5ce8a0(param_2,param_4);
  *(char *)((long)plVar4 + 0x23) = (char)param_2;
  *param_1 = 0;
  plVar4 = plVar3 + 0x4b;
  lVar5 = plVar3[0x59];
  uVar6 = lVar5 - 1;
  plVar3[0x59] = uVar6;
  if (uVar6 < 8) {
    uVar6 = plVar4[lVar5 + 2];
    if (plVar3[0x5a] == uVar6) {
      return;
    }
  }
  else {
    uVar6 = *(ulong *)(plVar3[0x57] + -8);
    plVar3[0x57] = plVar3[0x57] + -8;
    if (plVar3[0x5a] == uVar6) {
      return;
    }
  }
  lVar5 = *plVar4;
  lVar10 = plVar3[0x4c];
  lVar8 = lVar10 - lVar5;
  uVar12 = lVar8 >> 4;
  if (uVar12 < uVar6) {
    uVar13 = uVar6 - uVar12;
    lVar11 = plVar3[0x4d];
    if ((ulong)(lVar11 - lVar10 >> 4) < uVar13) {
      if (uVar6 >> 0x3c == 0) {
        uVar7 = lVar11 - lVar5 >> 3;
        if (uVar7 <= uVar6) {
          uVar7 = uVar6;
        }
        if (0x7fffffffffffffef < (ulong)(lVar11 - lVar5)) {
          uVar7 = 0xfffffffffffffff;
        }
        plStack_68 = plVar4;
        if (uVar7 >> 0x3c == 0) {
          lVar2 = uVar7 << 4;
          __Znwm();
          lVar10 = lVar2 + lVar8;
          _bzero(lVar10,uVar13 * 0x10);
          lVar9 = lVar10 + uVar12 * -0x10;
          _memcpy(lVar9,lVar5,lVar8);
          *plVar4 = lVar9;
          plVar3[0x4c] = lVar10 + uVar13 * 0x10;
          plVar3[0x4d] = lVar2 + uVar7 * 0x10;
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
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar1)();
    }
    _bzero(lVar10,uVar13 * 0x10);
    plVar3[0x4c] = lVar10 + uVar13 * 0x10;
  }
  else if (uVar6 < uVar12) {
    lVar5 = lVar5 + uVar6 * 0x10;
    while (lVar10 != lVar5) {
      lVar10 = lVar10 + -0x10;
      func_0x00010988c204(lVar10);
    }
    plVar3[0x4c] = lVar5;
  }
code_r0x00010988c138:
  plVar3[0x5a] = uVar6;
  return;
}



/* Entry: 10a5cec18; end: 10a5cec3b;  */

void FUN_10a5cec18(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  char cVar1;
  code *pcVar2;
  long lVar3;
  long *plVar4;
  long *plVar5;
  undefined8 uVar6;
  long lVar7;
  ulong uVar8;
  undefined4 *extraout_x8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  ulong uVar14;
  ulong uVar15;
  long lStack_98;
  long lStack_90;
  long lStack_88;
  long lStack_80;
  long *plStack_78;
  
  if ((int)param_1 == 1) {
    return;
  }
  plVar4 = (long *)0x1;
  uVar6 = 0;
  FUN_10a052ee0(1,0,param_1);
  plVar5 = plVar4;
  (**(code **)(*plVar4 + 0x58))();
  if ((ulong)plVar5[0x59] < 8) {
    plVar5[plVar5[0x59] + 0x4e] = plVar5[0x5a];
    plVar5[0x59] = plVar5[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar5 + 0x4b);
  }
  FUN_10a5ce7ac(plVar4,uVar6);
  FUN_10a052e3c(param_4);
  cVar1 = *(char *)((long)plVar4 + 0x24);
  *extraout_x8 = 3;
  *(double *)(extraout_x8 + 2) = (double)(int)cVar1;
  plVar4 = plVar5 + 0x4b;
  lVar7 = plVar5[0x59];
  uVar8 = lVar7 - 1;
  plVar5[0x59] = uVar8;
  if (uVar8 < 8) {
    uVar8 = plVar4[lVar7 + 2];
    if (plVar5[0x5a] == uVar8) {
      return;
    }
  }
  else {
    uVar8 = *(ulong *)(plVar5[0x57] + -8);
    plVar5[0x57] = plVar5[0x57] + -8;
    if (plVar5[0x5a] == uVar8) {
      return;
    }
  }
  lVar7 = *plVar4;
  lVar12 = plVar5[0x4c];
  lVar10 = lVar12 - lVar7;
  uVar14 = lVar10 >> 4;
  if (uVar14 < uVar8) {
    uVar15 = uVar8 - uVar14;
    lVar13 = plVar5[0x4d];
    if ((ulong)(lVar13 - lVar12 >> 4) < uVar15) {
      if (uVar8 >> 0x3c == 0) {
        uVar9 = lVar13 - lVar7 >> 3;
        if (uVar9 <= uVar8) {
          uVar9 = uVar8;
        }
        if (0x7fffffffffffffef < (ulong)(lVar13 - lVar7)) {
          uVar9 = 0xfffffffffffffff;
        }
        plStack_78 = plVar4;
        if (uVar9 >> 0x3c == 0) {
          lVar3 = uVar9 << 4;
          __Znwm();
          lVar12 = lVar3 + lVar10;
          _bzero(lVar12,uVar15 * 0x10);
          lVar11 = lVar12 + uVar14 * -0x10;
          _memcpy(lVar11,lVar7,lVar10);
          *plVar4 = lVar11;
          plVar5[0x4c] = lVar12 + uVar15 * 0x10;
          plVar5[0x4d] = lVar3 + uVar9 * 0x10;
          lStack_98 = lVar7;
          lStack_90 = lVar7;
          lStack_88 = lVar7;
          lStack_80 = lVar13;
          func_0x00010988c1b8(&lStack_98);
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
    _bzero(lVar12,uVar15 * 0x10);
    plVar5[0x4c] = lVar12 + uVar15 * 0x10;
  }
  else if (uVar8 < uVar14) {
    lVar7 = lVar7 + uVar8 * 0x10;
    while (lVar12 != lVar7) {
      lVar12 = lVar12 + -0x10;
      func_0x00010988c204(lVar12);
    }
    plVar5[0x4c] = lVar7;
  }
code_r0x00010988c138:
  plVar5[0x5a] = uVar8;
  return;
}



/* Entry: 10a5cec3c; end: 10a5cecf7;  */

void FUN_10a5cec3c(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long *plVar1;
  char cVar2;
  code *pcVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  ulong uVar14;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long *plStack_68;
  
  plVar5 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar5[0x59] < 8) {
    plVar5[plVar5[0x59] + 0x4e] = plVar5[0x5a];
    plVar5[0x59] = plVar5[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar5 + 0x4b);
  }
  FUN_10a5ce7ac(param_2,param_3);
  FUN_10a052e3c(param_5);
  cVar2 = *(char *)((long)param_2 + 0x24);
  *param_1 = 3;
  *(double *)(param_1 + 2) = (double)(int)cVar2;
  plVar1 = plVar5 + 0x4b;
  lVar6 = plVar5[0x59];
  uVar7 = lVar6 - 1;
  plVar5[0x59] = uVar7;
  if (uVar7 < 8) {
    uVar7 = plVar1[lVar6 + 2];
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
  lVar6 = *plVar1;
  lVar11 = plVar5[0x4c];
  lVar9 = lVar11 - lVar6;
  uVar13 = lVar9 >> 4;
  if (uVar13 < uVar7) {
    uVar14 = uVar7 - uVar13;
    lVar12 = plVar5[0x4d];
    if ((ulong)(lVar12 - lVar11 >> 4) < uVar14) {
      if (uVar7 >> 0x3c == 0) {
        uVar8 = lVar12 - lVar6 >> 3;
        if (uVar8 <= uVar7) {
          uVar8 = uVar7;
        }
        if (0x7fffffffffffffef < (ulong)(lVar12 - lVar6)) {
          uVar8 = 0xfffffffffffffff;
        }
        plStack_68 = plVar1;
        if (uVar8 >> 0x3c == 0) {
          lVar4 = uVar8 << 4;
          __Znwm();
          lVar11 = lVar4 + lVar9;
          _bzero(lVar11,uVar14 * 0x10);
          lVar10 = lVar11 + uVar13 * -0x10;
          _memcpy(lVar10,lVar6,lVar9);
          *plVar1 = lVar10;
          plVar5[0x4c] = lVar11 + uVar14 * 0x10;
          plVar5[0x4d] = lVar4 + uVar8 * 0x10;
          lStack_88 = lVar6;
          lStack_80 = lVar6;
          lStack_78 = lVar6;
          lStack_70 = lVar12;
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
    _bzero(lVar11,uVar14 * 0x10);
    plVar5[0x4c] = lVar11 + uVar14 * 0x10;
  }
  else if (uVar7 < uVar13) {
    lVar6 = lVar6 + uVar7 * 0x10;
    while (lVar11 != lVar6) {
      lVar11 = lVar11 + -0x10;
      func_0x00010988c204(lVar11);
    }
    plVar5[0x4c] = lVar6;
  }
code_r0x00010988c138:
  plVar5[0x5a] = uVar7;
  return;
}



/* Entry: 10a5cecf8; end: 10a5cedb7;  */

void FUN_10a5cecf8(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  code *pcVar1;
  long lVar2;
  long *plVar3;
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
  func_0x00010a5ce814(param_2,param_3);
  FUN_10a5cedb8(param_5);
  func_0x00010a5ce8a0(param_2,param_4);
  *(char *)((long)plVar4 + 0x24) = (char)param_2;
  *param_1 = 0;
  plVar4 = plVar3 + 0x4b;
  lVar5 = plVar3[0x59];
  uVar6 = lVar5 - 1;
  plVar3[0x59] = uVar6;
  if (uVar6 < 8) {
    uVar6 = plVar4[lVar5 + 2];
    if (plVar3[0x5a] == uVar6) {
      return;
    }
  }
  else {
    uVar6 = *(ulong *)(plVar3[0x57] + -8);
    plVar3[0x57] = plVar3[0x57] + -8;
    if (plVar3[0x5a] == uVar6) {
      return;
    }
  }
  lVar5 = *plVar4;
  lVar10 = plVar3[0x4c];
  lVar8 = lVar10 - lVar5;
  uVar12 = lVar8 >> 4;
  if (uVar12 < uVar6) {
    uVar13 = uVar6 - uVar12;
    lVar11 = plVar3[0x4d];
    if ((ulong)(lVar11 - lVar10 >> 4) < uVar13) {
      if (uVar6 >> 0x3c == 0) {
        uVar7 = lVar11 - lVar5 >> 3;
        if (uVar7 <= uVar6) {
          uVar7 = uVar6;
        }
        if (0x7fffffffffffffef < (ulong)(lVar11 - lVar5)) {
          uVar7 = 0xfffffffffffffff;
        }
        plStack_68 = plVar4;
        if (uVar7 >> 0x3c == 0) {
          lVar2 = uVar7 << 4;
          __Znwm();
          lVar10 = lVar2 + lVar8;
          _bzero(lVar10,uVar13 * 0x10);
          lVar9 = lVar10 + uVar12 * -0x10;
          _memcpy(lVar9,lVar5,lVar8);
          *plVar4 = lVar9;
          plVar3[0x4c] = lVar10 + uVar13 * 0x10;
          plVar3[0x4d] = lVar2 + uVar7 * 0x10;
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
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar1)();
    }
    _bzero(lVar10,uVar13 * 0x10);
    plVar3[0x4c] = lVar10 + uVar13 * 0x10;
  }
  else if (uVar6 < uVar12) {
    lVar5 = lVar5 + uVar6 * 0x10;
    while (lVar10 != lVar5) {
      lVar10 = lVar10 + -0x10;
      func_0x00010988c204(lVar10);
    }
    plVar3[0x4c] = lVar5;
  }
code_r0x00010988c138:
  plVar3[0x5a] = uVar6;
  return;
}



/* Entry: 10a5cedb8; end: 10a5ceddb;  */

void FUN_10a5cedb8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 uVar1;
  code *pcVar2;
  long lVar3;
  long *plVar4;
  long *plVar5;
  undefined8 uVar6;
  long lVar7;
  ulong uVar8;
  undefined4 *extraout_x8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  ulong uVar14;
  ulong uVar15;
  long lStack_98;
  long lStack_90;
  long lStack_88;
  long lStack_80;
  long *plStack_78;
  
  if ((int)param_1 == 1) {
    return;
  }
  plVar4 = (long *)0x1;
  uVar6 = 0;
  FUN_10a052ee0(1,0,param_1);
  plVar5 = plVar4;
  (**(code **)(*plVar4 + 0x58))();
  if ((ulong)plVar5[0x59] < 8) {
    plVar5[plVar5[0x59] + 0x4e] = plVar5[0x5a];
    plVar5[0x59] = plVar5[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar5 + 0x4b);
  }
  FUN_10a5ce7ac(plVar4,uVar6);
  FUN_10a052e3c(param_4);
  uVar1 = *(undefined1 *)((long)plVar4 + 0x25);
  *extraout_x8 = 2;
  *(undefined1 *)(extraout_x8 + 2) = uVar1;
  plVar4 = plVar5 + 0x4b;
  lVar7 = plVar5[0x59];
  uVar8 = lVar7 - 1;
  plVar5[0x59] = uVar8;
  if (uVar8 < 8) {
    uVar8 = plVar4[lVar7 + 2];
    if (plVar5[0x5a] == uVar8) {
      return;
    }
  }
  else {
    uVar8 = *(ulong *)(plVar5[0x57] + -8);
    plVar5[0x57] = plVar5[0x57] + -8;
    if (plVar5[0x5a] == uVar8) {
      return;
    }
  }
  lVar7 = *plVar4;
  lVar12 = plVar5[0x4c];
  lVar10 = lVar12 - lVar7;
  uVar14 = lVar10 >> 4;
  if (uVar14 < uVar8) {
    uVar15 = uVar8 - uVar14;
    lVar13 = plVar5[0x4d];
    if ((ulong)(lVar13 - lVar12 >> 4) < uVar15) {
      if (uVar8 >> 0x3c == 0) {
        uVar9 = lVar13 - lVar7 >> 3;
        if (uVar9 <= uVar8) {
          uVar9 = uVar8;
        }
        if (0x7fffffffffffffef < (ulong)(lVar13 - lVar7)) {
          uVar9 = 0xfffffffffffffff;
        }
        plStack_78 = plVar4;
        if (uVar9 >> 0x3c == 0) {
          lVar3 = uVar9 << 4;
          __Znwm();
          lVar12 = lVar3 + lVar10;
          _bzero(lVar12,uVar15 * 0x10);
          lVar11 = lVar12 + uVar14 * -0x10;
          _memcpy(lVar11,lVar7,lVar10);
          *plVar4 = lVar11;
          plVar5[0x4c] = lVar12 + uVar15 * 0x10;
          plVar5[0x4d] = lVar3 + uVar9 * 0x10;
          lStack_98 = lVar7;
          lStack_90 = lVar7;
          lStack_88 = lVar7;
          lStack_80 = lVar13;
          func_0x00010988c1b8(&lStack_98);
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
    _bzero(lVar12,uVar15 * 0x10);
    plVar5[0x4c] = lVar12 + uVar15 * 0x10;
  }
  else if (uVar8 < uVar14) {
    lVar7 = lVar7 + uVar8 * 0x10;
    while (lVar12 != lVar7) {
      lVar12 = lVar12 + -0x10;
      func_0x00010988c204(lVar12);
    }
    plVar5[0x4c] = lVar7;
  }
code_r0x00010988c138:
  plVar5[0x5a] = uVar8;
  return;
}



/* Entry: 10a5ceddc; end: 10a5cee93;  */

void FUN_10a5ceddc(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long *plVar1;
  undefined1 uVar2;
  code *pcVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  ulong uVar14;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long *plStack_68;
  
  plVar5 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar5[0x59] < 8) {
    plVar5[plVar5[0x59] + 0x4e] = plVar5[0x5a];
    plVar5[0x59] = plVar5[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar5 + 0x4b);
  }
  FUN_10a5ce7ac(param_2,param_3);
  FUN_10a052e3c(param_5);
  uVar2 = *(undefined1 *)((long)param_2 + 0x25);
  *param_1 = 2;
  *(undefined1 *)(param_1 + 2) = uVar2;
  plVar1 = plVar5 + 0x4b;
  lVar6 = plVar5[0x59];
  uVar7 = lVar6 - 1;
  plVar5[0x59] = uVar7;
  if (uVar7 < 8) {
    uVar7 = plVar1[lVar6 + 2];
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
  lVar6 = *plVar1;
  lVar11 = plVar5[0x4c];
  lVar9 = lVar11 - lVar6;
  uVar13 = lVar9 >> 4;
  if (uVar13 < uVar7) {
    uVar14 = uVar7 - uVar13;
    lVar12 = plVar5[0x4d];
    if ((ulong)(lVar12 - lVar11 >> 4) < uVar14) {
      if (uVar7 >> 0x3c == 0) {
        uVar8 = lVar12 - lVar6 >> 3;
        if (uVar8 <= uVar7) {
          uVar8 = uVar7;
        }
        if (0x7fffffffffffffef < (ulong)(lVar12 - lVar6)) {
          uVar8 = 0xfffffffffffffff;
        }
        plStack_68 = plVar1;
        if (uVar8 >> 0x3c == 0) {
          lVar4 = uVar8 << 4;
          __Znwm();
          lVar11 = lVar4 + lVar9;
          _bzero(lVar11,uVar14 * 0x10);
          lVar10 = lVar11 + uVar13 * -0x10;
          _memcpy(lVar10,lVar6,lVar9);
          *plVar1 = lVar10;
          plVar5[0x4c] = lVar11 + uVar14 * 0x10;
          plVar5[0x4d] = lVar4 + uVar8 * 0x10;
          lStack_88 = lVar6;
          lStack_80 = lVar6;
          lStack_78 = lVar6;
          lStack_70 = lVar12;
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
    _bzero(lVar11,uVar14 * 0x10);
    plVar5[0x4c] = lVar11 + uVar14 * 0x10;
  }
  else if (uVar7 < uVar13) {
    lVar6 = lVar6 + uVar7 * 0x10;
    while (lVar11 != lVar6) {
      lVar11 = lVar11 + -0x10;
      func_0x00010988c204(lVar11);
    }
    plVar5[0x4c] = lVar6;
  }
code_r0x00010988c138:
  plVar5[0x5a] = uVar7;
  return;
}



/* Entry: 10a5cee94; end: 10a5cef53;  */

void FUN_10a5cee94(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  code *pcVar1;
  long lVar2;
  long *plVar3;
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
  func_0x00010a5ce814(param_2,param_3);
  FUN_10a065020(param_5);
  func_0x00010989847c(param_2,param_4);
  *(char *)((long)plVar4 + 0x25) = (char)param_2;
  *param_1 = 0;
  plVar4 = plVar3 + 0x4b;
  lVar5 = plVar3[0x59];
  uVar6 = lVar5 - 1;
  plVar3[0x59] = uVar6;
  if (uVar6 < 8) {
    uVar6 = plVar4[lVar5 + 2];
    if (plVar3[0x5a] == uVar6) {
      return;
    }
  }
  else {
    uVar6 = *(ulong *)(plVar3[0x57] + -8);
    plVar3[0x57] = plVar3[0x57] + -8;
    if (plVar3[0x5a] == uVar6) {
      return;
    }
  }
  lVar5 = *plVar4;
  lVar10 = plVar3[0x4c];
  lVar8 = lVar10 - lVar5;
  uVar12 = lVar8 >> 4;
  if (uVar12 < uVar6) {
    uVar13 = uVar6 - uVar12;
    lVar11 = plVar3[0x4d];
    if ((ulong)(lVar11 - lVar10 >> 4) < uVar13) {
      if (uVar6 >> 0x3c == 0) {
        uVar7 = lVar11 - lVar5 >> 3;
        if (uVar7 <= uVar6) {
          uVar7 = uVar6;
        }
        if (0x7fffffffffffffef < (ulong)(lVar11 - lVar5)) {
          uVar7 = 0xfffffffffffffff;
        }
        plStack_68 = plVar4;
        if (uVar7 >> 0x3c == 0) {
          lVar2 = uVar7 << 4;
          __Znwm();
          lVar10 = lVar2 + lVar8;
          _bzero(lVar10,uVar13 * 0x10);
          lVar9 = lVar10 + uVar12 * -0x10;
          _memcpy(lVar9,lVar5,lVar8);
          *plVar4 = lVar9;
          plVar3[0x4c] = lVar10 + uVar13 * 0x10;
          plVar3[0x4d] = lVar2 + uVar7 * 0x10;
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
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar1)();
    }
    _bzero(lVar10,uVar13 * 0x10);
    plVar3[0x4c] = lVar10 + uVar13 * 0x10;
  }
  else if (uVar6 < uVar12) {
    lVar5 = lVar5 + uVar6 * 0x10;
    while (lVar10 != lVar5) {
      lVar10 = lVar10 + -0x10;
      func_0x00010988c204(lVar10);
    }
    plVar3[0x4c] = lVar5;
  }
code_r0x00010988c138:
  plVar3[0x5a] = uVar6;
  return;
}



/* Entry: 10a5cef54; end: 10a5cf0af;  */

void FUN_10a5cef54(undefined8 *param_1,undefined8 param_2,int param_3)

{
  code *pcVar1;
  int aiStack_20 [2];
  undefined8 *puStack_18;
  
  if (param_1[2] != param_1[3]) {
    aiStack_20[0] = 3;
    puStack_18 = (undefined8 *)(double)param_3;
    FUN_10a005308(param_1[3] + -8,*param_1,param_2,aiStack_20);
    if ((3 < aiStack_20[0]) && (puStack_18 != (undefined8 *)0x0)) {
      (**(code **)*puStack_18)();
    }
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10a5cefc8);
  (*pcVar1)();
}



/* Entry: 10a5cf0b0; end: 10a5cf107;  */

long FUN_10a5cf0b0(long param_1)

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



/* Entry: 10a5cf108; end: 10a5cf117;  */

void FUN_10a5cf108(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110bf7f78;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10a5cf118; end: 10a5cf137;  */

void FUN_10a5cf118(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110bf7f78;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a5cf138; end: 10a5cf187;  */

long FUN_10a5cf138(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  
  plVar4 = *(long **)(param_1 + 0x58);
  while (plVar4 != (long *)0x0) {
    plVar4 = (long *)*plVar4;
    __ZdlPv();
  }
  lVar5 = *(long *)(param_1 + 0x48);
  *(undefined8 *)(param_1 + 0x48) = 0;
  if (lVar5 != 0) {
    __ZdlPv();
  }
  FUN_10a0617bc(param_1 + 0x30);
  plVar4 = *(long **)(param_1 + 0x28);
  if (plVar4 != (long *)0x0) {
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
  return param_1 + 0x20;
}



/* Entry: 10a5cf188; end: 10a5cf19b;  */

void FUN_10a5cf188(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a5cf19c; end: 10a5cf1bb;  */

void FUN_10a5cf19c(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110bf7fc8;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a5cf1bc; end: 10a5cf1f7;  */

void FUN_10a5cf1bc(long param_1)

{
  FUN_10a5ae930(param_1 + 0x18);
  if (*(long *)(param_1 + 0x30) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZNSt3__119__shared_weak_count14__release_weakEv_110346648)();
    return;
  }
  return;
}



/* Entry: 10a5cf1f8; end: 10a5cf1fb;  */

void FUN_10a5cf1f8(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a5cf1fc; end: 10a5cf2ab;  */

void FUN_10a5cf1fc(long param_1,undefined8 *param_2,undefined8 param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  if ((param_2 != (undefined8 *)0x0) &&
     ((lVar4 = param_2[1], lVar4 == 0 || (*(long *)(lVar4 + 8) == -1)))) {
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



/* Entry: 10a5cf2ac; end: 10a5cf6a7;  */

undefined1  [16] FUN_10a5cf2ac(long *param_1,long *param_2,undefined8 param_3,undefined8 *param_4)

{
  byte bVar1;
  ulong uVar2;
  code *pcVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  byte *pbVar7;
  undefined8 *puVar8;
  ulong uVar9;
  ulong uVar10;
  long *plVar11;
  long *plVar12;
  long *plVar13;
  ulong uVar14;
  long *plVar15;
  ulong uVar16;
  ulong uVar17;
  ulong unaff_x25;
  ulong uVar18;
  undefined1 auVar19 [16];
  
  uVar16 = *(ulong *)(*param_2 + 8);
  if ((long)uVar16 < 0) {
    pbVar7 = (byte *)(uVar16 & 0x7fffffffffffffff);
    uVar17 = 0x1505;
    do {
      uVar16 = uVar17;
      bVar1 = *pbVar7;
      pbVar7 = pbVar7 + 1;
      uVar17 = uVar16 * 0x21 ^ (ulong)bVar1;
    } while ((ulong)bVar1 != 0);
  }
  uVar17 = param_1[1];
  if (uVar17 != 0) {
    uVar18 = uVar17 - 1;
    if ((uVar17 & uVar18) == 0) {
      unaff_x25 = uVar18 & uVar16;
    }
    else {
      unaff_x25 = uVar16;
      if (uVar17 <= uVar16) {
        uVar9 = 0;
        if (uVar17 != 0) {
          uVar9 = uVar16 / uVar17;
        }
        unaff_x25 = uVar16 - uVar9 * uVar17;
      }
    }
    puVar8 = *(undefined8 **)(*param_1 + unaff_x25 * 8);
    if (puVar8 != (undefined8 *)0x0) {
      for (plVar15 = (long *)*puVar8; plVar15 != (long *)0x0; plVar15 = (long *)*plVar15) {
        uVar9 = plVar15[1];
        if (uVar9 == uVar16) {
          uVar9 = plVar15[2];
          FUN_10a042ab0(uVar9,*param_2);
          if ((uVar9 & 1) != 0) {
            uVar6 = 0;
            goto LAB_10a5cf628;
          }
        }
        else {
          if ((uVar17 & uVar18) == 0) {
            uVar9 = uVar9 & uVar18;
          }
          else if (uVar17 <= uVar9) {
            uVar10 = 0;
            if (uVar17 != 0) {
              uVar10 = uVar9 / uVar17;
            }
            uVar9 = uVar9 - uVar10 * uVar17;
          }
          if (uVar9 != unaff_x25) break;
        }
      }
    }
  }
  plVar15 = (long *)0x28;
  __Znwm();
  *plVar15 = 0;
  plVar15[1] = uVar16;
  plVar15[2] = *(long *)*param_4;
  plVar15[3] = (long)(plVar15 + 3);
  plVar15[4] = (long)(plVar15 + 3);
  if ((uVar17 == 0) || (*(float *)(param_1 + 4) * (float)uVar17 < (float)(param_1[3] + 1))) {
    uVar18 = 1;
    if (2 < uVar17) {
      uVar18 = (ulong)((uVar17 & uVar17 - 1) != 0);
    }
    uVar18 = uVar18 | uVar17 << 1;
    uVar17 = (ulong)((float)(param_1[3] + 1) / *(float *)(param_1 + 4));
    if (uVar18 <= uVar17) {
      uVar18 = uVar17;
    }
    if (uVar18 - 1 == 0) {
      uVar18 = 2;
    }
    else if ((uVar18 & uVar18 - 1) != 0) {
      __ZNSt3__112__next_primeEm();
    }
    uVar17 = param_1[1];
    if (uVar17 < uVar18) {
LAB_10a5cf438:
      if (uVar18 >> 0x3d != 0) {
        func_0x000109ffded8();
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x10a5cf690);
        (*pcVar3)();
      }
      lVar4 = uVar18 << 3;
      __Znwm();
      lVar5 = *param_1;
      *param_1 = lVar4;
      if (lVar5 != 0) {
        __ZdlPv();
      }
      uVar17 = 0;
      param_1[1] = uVar18;
      do {
        *(undefined8 *)(*param_1 + uVar17 * 8) = 0;
        uVar17 = uVar17 + 1;
      } while (uVar18 != uVar17);
      plVar11 = (long *)param_1[2];
      uVar17 = uVar18;
      if (plVar11 != (long *)0x0) {
        uVar9 = plVar11[1];
        uVar10 = uVar18 - 1;
        if ((uVar18 & uVar10) == 0) {
          uVar9 = uVar9 & uVar10;
        }
        else if (uVar18 <= uVar9) {
          uVar14 = 0;
          if (uVar18 != 0) {
            uVar14 = uVar9 / uVar18;
          }
          uVar9 = uVar9 - uVar14 * uVar18;
        }
        *(long **)(*param_1 + uVar9 * 8) = param_1 + 2;
        plVar12 = (long *)*plVar11;
        while (plVar12 != (long *)0x0) {
          uVar14 = plVar12[1];
          if ((uVar18 & uVar10) == 0) {
            uVar14 = uVar14 & uVar10;
          }
          else if (uVar18 <= uVar14) {
            uVar2 = 0;
            if (uVar18 != 0) {
              uVar2 = uVar14 / uVar18;
            }
            uVar14 = uVar14 - uVar2 * uVar18;
          }
          plVar13 = plVar12;
          if (uVar14 != uVar9) {
            lVar4 = *param_1;
            if (*(long *)(lVar4 + uVar14 * 8) == 0) {
              *(long **)(lVar4 + uVar14 * 8) = plVar11;
              uVar9 = uVar14;
            }
            else {
              *plVar11 = *plVar12;
              *plVar12 = **(undefined8 **)(lVar4 + uVar14 * 8);
              **(long **)(lVar4 + uVar14 * 8) = (long)plVar12;
              plVar13 = plVar11;
            }
          }
          plVar11 = plVar13;
          plVar12 = (long *)*plVar13;
        }
      }
    }
    else if (uVar18 < uVar17) {
      uVar9 = (ulong)((float)(ulong)param_1[3] / *(float *)(param_1 + 4));
      if ((uVar17 < 3) || ((uVar17 & uVar17 - 1) != 0)) {
        __ZNSt3__112__next_primeEm();
      }
      else if (1 < uVar9) {
        uVar9 = 1L << (-LZCOUNT(uVar9 - 1) & 0x3fU);
      }
      if (uVar18 <= uVar9) {
        uVar18 = uVar9;
      }
      if (uVar18 < uVar17) {
        if (uVar18 != 0) goto LAB_10a5cf438;
        lVar4 = *param_1;
        *param_1 = 0;
        if (lVar4 != 0) {
          __ZdlPv();
        }
        param_1[1] = 0;
        uVar17 = 0;
      }
      else {
        uVar17 = param_1[1];
      }
    }
    if ((uVar17 & uVar17 - 1) == 0) {
      unaff_x25 = uVar17 - 1 & uVar16;
    }
    else {
      unaff_x25 = uVar16;
      if (uVar17 <= uVar16) {
        uVar18 = 0;
        if (uVar17 != 0) {
          uVar18 = uVar16 / uVar17;
        }
        unaff_x25 = uVar16 - uVar18 * uVar17;
      }
    }
  }
  lVar4 = *param_1;
  plVar11 = *(long **)(lVar4 + unaff_x25 * 8);
  if (plVar11 == (long *)0x0) {
    plVar11 = param_1 + 2;
    *plVar15 = *plVar11;
    *plVar11 = (long)plVar15;
    *(long **)(lVar4 + unaff_x25 * 8) = plVar11;
    if (*plVar15 == 0) goto LAB_10a5cf618;
    uVar16 = *(ulong *)(*plVar15 + 8);
    if ((uVar17 & uVar17 - 1) == 0) {
      uVar16 = uVar16 & uVar17 - 1;
    }
    else if (uVar17 <= uVar16) {
      uVar18 = 0;
      if (uVar17 != 0) {
        uVar18 = uVar16 / uVar17;
      }
      uVar16 = uVar16 - uVar18 * uVar17;
    }
    plVar11 = (long *)(*param_1 + uVar16 * 8);
  }
  else {
    *plVar15 = *plVar11;
  }
  *plVar11 = (long)plVar15;
LAB_10a5cf618:
  param_1[3] = param_1[3] + 1;
  uVar6 = 1;
LAB_10a5cf628:
  auVar19._8_8_ = uVar6;
  auVar19._0_8_ = plVar15;
  return auVar19;
}



/* Entry: 10a5cf6a8; end: 10a5cf6e3;  */

void FUN_10a5cf6a8(ulong param_1,long param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  if ((param_1 & 1) != 0) {
    puVar1 = *(undefined8 **)(param_2 + 0x20);
    while (puVar1 != (undefined8 *)(param_2 + 0x18)) {
      puVar2 = (undefined8 *)puVar1[1];
      *puVar1 = 0;
      puVar1[1] = 0;
      puVar1[4] = 0;
      puVar1[5] = 0;
      *(undefined1 *)((long)puVar1 + 0x3c) = 0;
      puVar1 = puVar2;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_2);
  return;
}



/* Entry: 10a5cf6e4; end: 10a5cf77b;  */

long * FUN_10a5cf6e4(long *param_1)

{
  long lVar1;
  
  func_0x00010a5cf71c(param_1,param_1[2]);
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 10a5cf77c; end: 10a5cf86f;  */

long FUN_10a5cf77c(long *param_1,long *param_2)

{
  byte bVar1;
  ulong uVar2;
  byte *pbVar3;
  long *plVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  
  uVar6 = *(ulong *)(*param_2 + 8);
  if ((long)uVar6 < 0) {
    pbVar3 = (byte *)(uVar6 & 0x7fffffffffffffff);
    uVar7 = 0x1505;
    do {
      uVar6 = uVar7;
      bVar1 = *pbVar3;
      pbVar3 = pbVar3 + 1;
      uVar7 = uVar6 * 0x21 ^ (ulong)bVar1;
    } while ((ulong)bVar1 != 0);
  }
  uVar7 = param_1[1];
  if (uVar7 != 0) {
    uVar8 = uVar7 - 1;
    if ((uVar7 & uVar8) == 0) {
      uVar9 = uVar8 & uVar6;
    }
    else {
      uVar9 = uVar6;
      if (uVar7 <= uVar6) {
        uVar9 = 0;
        if (uVar7 != 0) {
          uVar9 = uVar6 / uVar7;
        }
        uVar9 = uVar6 - uVar9 * uVar7;
      }
    }
    plVar4 = *(long **)(*param_1 + uVar9 * 8);
    if (plVar4 != (long *)0x0) {
      plVar4 = (long *)*plVar4;
      do {
        if (plVar4 == (long *)0x0) {
          return 0;
        }
        uVar5 = plVar4[1];
        if (uVar6 == uVar5) {
          uVar5 = plVar4[2];
          FUN_10a042ab0(uVar5,*param_2);
          if ((uVar5 & 1) != 0) {
            return (long)plVar4;
          }
        }
        else {
          if ((uVar7 & uVar8) == 0) {
            uVar5 = uVar5 & uVar8;
          }
          else if (uVar7 <= uVar5) {
            uVar2 = 0;
            if (uVar7 != 0) {
              uVar2 = uVar5 / uVar7;
            }
            uVar5 = uVar5 - uVar2 * uVar7;
          }
          if (uVar5 != uVar9) {
            return 0;
          }
        }
        plVar4 = (long *)*plVar4;
      } while( true );
    }
  }
  return 0;
}



/* Entry: 10a5cf870; end: 10a5cfa23;  */

void FUN_10a5cf870(undefined4 *param_1,long *param_2,undefined8 param_3,long param_4,
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
  long *plStack_70;
  long *plStack_68;
  long *in_stack_ffffffffffffffa0;
  
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
  FUN_10a5cfa24(param_2,param_3);
  FUN_10a5cfa8c(param_5);
  func_0x000109898f04(&stack0xffffffffffffffa8,param_2,param_4);
  FUN_10a059354(&plStack_68,param_2,param_4 + 0x10);
  FUN_10a059354(&lStack_78,param_2,param_4 + 0x20);
  FUN_10a5af414(plVar6,&stack0xffffffffffffffa8,&plStack_68,&lStack_78);
  if (plStack_70 != (long *)0x0) {
    plVar6 = plStack_70 + 1;
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
      (**(code **)(*plStack_70 + 0x10))(plStack_70);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_70);
    }
  }
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
  plStack_68 = (long *)&stack0xffffffffffffffa8;
  FUN_10a0426d8(&plStack_68);
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
          plStack_70 = (long *)lVar13;
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



/* Entry: 10a5cfa24; end: 10a5cfa8b;  */

void FUN_10a5cfa24(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  char cVar1;
  bool bVar2;
  code *pcVar3;
  long lVar4;
  undefined *puVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  undefined8 uVar9;
  ulong uVar10;
  undefined4 *extraout_x8;
  ulong uVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  ulong uVar17;
  ulong uVar18;
  long lStack_b8;
  long lStack_b0;
  long *plStack_a8;
  long lStack_a0;
  long *plStack_98;
  
  lVar12 = param_1;
  func_0x000109898688();
  if (lVar12 != 0) {
    FUN_10a053854(param_1,lVar12);
    if (param_1 != 0) {
      param_4 = 0;
      ___dynamic_cast();
      if (param_1 != 0) {
        return;
      }
    }
    func_0x00010988bd28(&UNK_10f685496);
  }
  puVar5 = &UNK_10f68f52e;
  func_0x00010988bd28();
  if ((int)puVar5 == 3) {
    return;
  }
  plVar6 = (long *)0x3;
  uVar9 = 0;
  FUN_10a052ee0(3,0,puVar5);
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
  FUN_10a5cfa24(plVar6,uVar9);
  FUN_10a5cfc50(param_4);
  FUN_10a059354(&lStack_a0,plVar6,puVar5);
  FUN_10a059354(&lStack_b0,plVar6,puVar5 + 0x10);
  FUN_10a5af414(plVar8,&stack0xffffffffffffff70,&lStack_a0,&lStack_b0);
  FUN_10a0426d8(&stack0xffffffffffffff88);
  if (plStack_a8 != (long *)0x0) {
    plVar6 = plStack_a8 + 1;
    do {
      lVar12 = *plVar6;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar2) {
        *plVar6 = lVar12 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar12 == 0) {
      (**(code **)(*plStack_a8 + 0x10))(plStack_a8);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_a8);
    }
  }
  plVar6 = plStack_98;
  if (plStack_98 != (long *)0x0) {
    plVar8 = plStack_98 + 1;
    do {
      lVar12 = *plVar8;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar2) {
        *plVar8 = lVar12 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar12 == 0) {
      (**(code **)(*plStack_98 + 0x10))(plStack_98);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
    }
  }
  *extraout_x8 = 0;
  plVar6 = plVar7 + 0x4b;
  lVar12 = plVar7[0x59];
  uVar10 = lVar12 - 1;
  plVar7[0x59] = uVar10;
  if (uVar10 < 8) {
    uVar10 = plVar6[lVar12 + 2];
    if (plVar7[0x5a] == uVar10) {
      return;
    }
  }
  else {
    uVar10 = *(ulong *)(plVar7[0x57] + -8);
    plVar7[0x57] = plVar7[0x57] + -8;
    if (plVar7[0x5a] == uVar10) {
      return;
    }
  }
  lVar12 = *plVar6;
  lVar15 = plVar7[0x4c];
  lVar13 = lVar15 - lVar12;
  uVar17 = lVar13 >> 4;
  if (uVar17 < uVar10) {
    uVar18 = uVar10 - uVar17;
    lVar16 = plVar7[0x4d];
    if ((ulong)(lVar16 - lVar15 >> 4) < uVar18) {
      if (uVar10 >> 0x3c == 0) {
        uVar11 = lVar16 - lVar12 >> 3;
        if (uVar11 <= uVar10) {
          uVar11 = uVar10;
        }
        if (0x7fffffffffffffef < (ulong)(lVar16 - lVar12)) {
          uVar11 = 0xfffffffffffffff;
        }
        plStack_98 = plVar6;
        if (uVar11 >> 0x3c == 0) {
          lVar4 = uVar11 << 4;
          __Znwm();
          lVar15 = lVar4 + lVar13;
          _bzero(lVar15,uVar18 * 0x10);
          lVar14 = lVar15 + uVar17 * -0x10;
          _memcpy(lVar14,lVar12,lVar13);
          *plVar6 = lVar14;
          plVar7[0x4c] = lVar15 + uVar18 * 0x10;
          plVar7[0x4d] = lVar4 + uVar11 * 0x10;
          lStack_b8 = lVar12;
          lStack_b0 = lVar12;
          plStack_a8 = (long *)lVar12;
          lStack_a0 = lVar16;
          func_0x00010988c1b8(&lStack_b8);
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
    _bzero(lVar15,uVar18 * 0x10);
    plVar7[0x4c] = lVar15 + uVar18 * 0x10;
  }
  else if (uVar10 < uVar17) {
    lVar12 = lVar12 + uVar10 * 0x10;
    while (lVar15 != lVar12) {
      lVar15 = lVar15 + -0x10;
      func_0x00010988c204(lVar15);
    }
    plVar7[0x4c] = lVar12;
  }
code_r0x00010988c138:
  plVar7[0x5a] = uVar10;
  return;
}



/* Entry: 10a5cfa8c; end: 10a5cfaaf;  */

void FUN_10a5cfa8c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  char cVar1;
  bool bVar2;
  code *pcVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  undefined8 uVar8;
  ulong uVar9;
  undefined4 *extraout_x8;
  ulong uVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  ulong uVar16;
  ulong uVar17;
  long lStack_98;
  long lStack_90;
  long *plStack_88;
  long lStack_80;
  long *plStack_78;
  
  if ((int)param_1 == 3) {
    return;
  }
  plVar5 = (long *)0x3;
  uVar8 = 0;
  FUN_10a052ee0(3,0,param_1);
  plVar6 = plVar5;
  (**(code **)(*plVar5 + 0x58))();
  if ((ulong)plVar6[0x59] < 8) {
    plVar6[plVar6[0x59] + 0x4e] = plVar6[0x5a];
    plVar6[0x59] = plVar6[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar6 + 0x4b);
  }
  plVar7 = plVar5;
  FUN_10a5cfa24(plVar5,uVar8);
  FUN_10a5cfc50(param_4);
  FUN_10a059354(&lStack_80,plVar5,param_1);
  FUN_10a059354(&lStack_90,plVar5,param_1 + 0x10);
  FUN_10a5af414(plVar7,&stack0xffffffffffffff90,&lStack_80,&lStack_90);
  FUN_10a0426d8(&stack0xffffffffffffffa8);
  if (plStack_88 != (long *)0x0) {
    plVar5 = plStack_88 + 1;
    do {
      lVar11 = *plVar5;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar2) {
        *plVar5 = lVar11 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar11 == 0) {
      (**(code **)(*plStack_88 + 0x10))(plStack_88);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_88);
    }
  }
  plVar5 = plStack_78;
  if (plStack_78 != (long *)0x0) {
    plVar7 = plStack_78 + 1;
    do {
      lVar11 = *plVar7;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar2) {
        *plVar7 = lVar11 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar11 == 0) {
      (**(code **)(*plStack_78 + 0x10))(plStack_78);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
    }
  }
  *extraout_x8 = 0;
  plVar5 = plVar6 + 0x4b;
  lVar11 = plVar6[0x59];
  uVar9 = lVar11 - 1;
  plVar6[0x59] = uVar9;
  if (uVar9 < 8) {
    uVar9 = plVar5[lVar11 + 2];
    if (plVar6[0x5a] == uVar9) {
      return;
    }
  }
  else {
    uVar9 = *(ulong *)(plVar6[0x57] + -8);
    plVar6[0x57] = plVar6[0x57] + -8;
    if (plVar6[0x5a] == uVar9) {
      return;
    }
  }
  lVar11 = *plVar5;
  lVar14 = plVar6[0x4c];
  lVar12 = lVar14 - lVar11;
  uVar16 = lVar12 >> 4;
  if (uVar16 < uVar9) {
    uVar17 = uVar9 - uVar16;
    lVar15 = plVar6[0x4d];
    if ((ulong)(lVar15 - lVar14 >> 4) < uVar17) {
      if (uVar9 >> 0x3c == 0) {
        uVar10 = lVar15 - lVar11 >> 3;
        if (uVar10 <= uVar9) {
          uVar10 = uVar9;
        }
        if (0x7fffffffffffffef < (ulong)(lVar15 - lVar11)) {
          uVar10 = 0xfffffffffffffff;
        }
        plStack_78 = plVar5;
        if (uVar10 >> 0x3c == 0) {
          lVar4 = uVar10 << 4;
          __Znwm();
          lVar14 = lVar4 + lVar12;
          _bzero(lVar14,uVar17 * 0x10);
          lVar13 = lVar14 + uVar16 * -0x10;
          _memcpy(lVar13,lVar11,lVar12);
          *plVar5 = lVar13;
          plVar6[0x4c] = lVar14 + uVar17 * 0x10;
          plVar6[0x4d] = lVar4 + uVar10 * 0x10;
          lStack_98 = lVar11;
          lStack_90 = lVar11;
          plStack_88 = (long *)lVar11;
          lStack_80 = lVar15;
          func_0x00010988c1b8(&lStack_98);
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
    plVar6[0x4c] = lVar14 + uVar17 * 0x10;
  }
  else if (uVar9 < uVar16) {
    lVar11 = lVar11 + uVar9 * 0x10;
    while (lVar14 != lVar11) {
      lVar14 = lVar14 + -0x10;
      func_0x00010988c204(lVar14);
    }
    plVar6[0x4c] = lVar11;
  }
code_r0x00010988c138:
  plVar6[0x5a] = uVar9;
  return;
}



/* Entry: 10a5cfab0; end: 10a5cfc4f;  */

void FUN_10a5cfab0(undefined4 *param_1,long *param_2,undefined8 param_3,long param_4,
                  undefined8 param_5)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  long lVar5;
  long *plVar6;
  long *plVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  ulong uVar15;
  ulong uVar16;
  long lStack_88;
  long lStack_80;
  long *plStack_78;
  long lStack_70;
  long *plStack_68;
  
  plVar6 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar6[0x59] < 8) {
    plVar6[plVar6[0x59] + 0x4e] = plVar6[0x5a];
    plVar6[0x59] = plVar6[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar6 + 0x4b);
  }
  plVar7 = param_2;
  FUN_10a5cfa24(param_2,param_3);
  FUN_10a5cfc50(param_5);
  FUN_10a059354(&lStack_70,param_2,param_4);
  FUN_10a059354(&lStack_80,param_2,param_4 + 0x10);
  FUN_10a5af414(plVar7,&stack0xffffffffffffffa0,&lStack_70,&lStack_80);
  FUN_10a0426d8(&stack0xffffffffffffffb8);
  if (plStack_78 != (long *)0x0) {
    plVar7 = plStack_78 + 1;
    do {
      lVar10 = *plVar7;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar3) {
        *plVar7 = lVar10 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar10 == 0) {
      (**(code **)(*plStack_78 + 0x10))(plStack_78);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_78);
    }
  }
  plVar7 = plStack_68;
  if (plStack_68 != (long *)0x0) {
    plVar1 = plStack_68 + 1;
    do {
      lVar10 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar10 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar10 == 0) {
      (**(code **)(*plStack_68 + 0x10))(plStack_68);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
    }
  }
  *param_1 = 0;
  plVar7 = plVar6 + 0x4b;
  lVar10 = plVar6[0x59];
  uVar8 = lVar10 - 1;
  plVar6[0x59] = uVar8;
  if (uVar8 < 8) {
    uVar8 = plVar7[lVar10 + 2];
    if (plVar6[0x5a] == uVar8) {
      return;
    }
  }
  else {
    uVar8 = *(ulong *)(plVar6[0x57] + -8);
    plVar6[0x57] = plVar6[0x57] + -8;
    if (plVar6[0x5a] == uVar8) {
      return;
    }
  }
  lVar10 = *plVar7;
  lVar13 = plVar6[0x4c];
  lVar11 = lVar13 - lVar10;
  uVar15 = lVar11 >> 4;
  if (uVar15 < uVar8) {
    uVar16 = uVar8 - uVar15;
    lVar14 = plVar6[0x4d];
    if ((ulong)(lVar14 - lVar13 >> 4) < uVar16) {
      if (uVar8 >> 0x3c == 0) {
        uVar9 = lVar14 - lVar10 >> 3;
        if (uVar9 <= uVar8) {
          uVar9 = uVar8;
        }
        if (0x7fffffffffffffef < (ulong)(lVar14 - lVar10)) {
          uVar9 = 0xfffffffffffffff;
        }
        plStack_68 = plVar7;
        if (uVar9 >> 0x3c == 0) {
          lVar5 = uVar9 << 4;
          __Znwm();
          lVar13 = lVar5 + lVar11;
          _bzero(lVar13,uVar16 * 0x10);
          lVar12 = lVar13 + uVar15 * -0x10;
          _memcpy(lVar12,lVar10,lVar11);
          *plVar7 = lVar12;
          plVar6[0x4c] = lVar13 + uVar16 * 0x10;
          plVar6[0x4d] = lVar5 + uVar9 * 0x10;
          lStack_88 = lVar10;
          lStack_80 = lVar10;
          plStack_78 = (long *)lVar10;
          lStack_70 = lVar14;
          func_0x00010988c1b8(&lStack_88);
          goto code_r0x00010988c138;
        }
        func_0x000104c4f740();
      }
      else {
        func_0x00010988c1a4();
      }
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar4)();
    }
    _bzero(lVar13,uVar16 * 0x10);
    plVar6[0x4c] = lVar13 + uVar16 * 0x10;
  }
  else if (uVar8 < uVar15) {
    lVar10 = lVar10 + uVar8 * 0x10;
    while (lVar13 != lVar10) {
      lVar13 = lVar13 + -0x10;
      func_0x00010988c204(lVar13);
    }
    plVar6[0x4c] = lVar10;
  }
code_r0x00010988c138:
  plVar6[0x5a] = uVar8;
  return;
}



/* Entry: 10a5cfc50; end: 10a5cfc73;  */

void FUN_10a5cfc50(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  code *pcVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  undefined8 uVar5;
  long lVar6;
  ulong uVar7;
  undefined4 *extraout_x8;
  ulong uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  ulong uVar14;
  long lStack_98;
  long lStack_90;
  long lStack_88;
  long lStack_80;
  long *plStack_78;
  
  if ((int)param_1 == 2) {
    return;
  }
  plVar3 = (long *)0x2;
  uVar5 = 0;
  FUN_10a052ee0(2,0,param_1);
  plVar4 = plVar3;
  (**(code **)(*plVar3 + 0x58))();
  if ((ulong)plVar4[0x59] < 8) {
    plVar4[plVar4[0x59] + 0x4e] = plVar4[0x5a];
    plVar4[0x59] = plVar4[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar4 + 0x4b);
  }
  FUN_10a5cfa24(plVar3,uVar5);
  FUN_10a052e3c(param_4);
  FUN_10a5af0f4(plVar3);
  *extraout_x8 = 0;
  plVar3 = plVar4 + 0x4b;
  lVar6 = plVar4[0x59];
  uVar7 = lVar6 - 1;
  plVar4[0x59] = uVar7;
  if (uVar7 < 8) {
    uVar7 = plVar3[lVar6 + 2];
    if (plVar4[0x5a] == uVar7) {
      return;
    }
  }
  else {
    uVar7 = *(ulong *)(plVar4[0x57] + -8);
    plVar4[0x57] = plVar4[0x57] + -8;
    if (plVar4[0x5a] == uVar7) {
      return;
    }
  }
  lVar6 = *plVar3;
  lVar11 = plVar4[0x4c];
  lVar9 = lVar11 - lVar6;
  uVar13 = lVar9 >> 4;
  if (uVar13 < uVar7) {
    uVar14 = uVar7 - uVar13;
    lVar12 = plVar4[0x4d];
    if ((ulong)(lVar12 - lVar11 >> 4) < uVar14) {
      if (uVar7 >> 0x3c == 0) {
        uVar8 = lVar12 - lVar6 >> 3;
        if (uVar8 <= uVar7) {
          uVar8 = uVar7;
        }
        if (0x7fffffffffffffef < (ulong)(lVar12 - lVar6)) {
          uVar8 = 0xfffffffffffffff;
        }
        plStack_78 = plVar3;
        if (uVar8 >> 0x3c == 0) {
          lVar2 = uVar8 << 4;
          __Znwm();
          lVar11 = lVar2 + lVar9;
          _bzero(lVar11,uVar14 * 0x10);
          lVar10 = lVar11 + uVar13 * -0x10;
          _memcpy(lVar10,lVar6,lVar9);
          *plVar3 = lVar10;
          plVar4[0x4c] = lVar11 + uVar14 * 0x10;
          plVar4[0x4d] = lVar2 + uVar8 * 0x10;
          lStack_98 = lVar6;
          lStack_90 = lVar6;
          lStack_88 = lVar6;
          lStack_80 = lVar12;
          func_0x00010988c1b8(&lStack_98);
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
    _bzero(lVar11,uVar14 * 0x10);
    plVar4[0x4c] = lVar11 + uVar14 * 0x10;
  }
  else if (uVar7 < uVar13) {
    lVar6 = lVar6 + uVar7 * 0x10;
    while (lVar11 != lVar6) {
      lVar11 = lVar11 + -0x10;
      func_0x00010988c204(lVar11);
    }
    plVar4[0x4c] = lVar6;
  }
code_r0x00010988c138:
  plVar4[0x5a] = uVar7;
  return;
}



/* Entry: 10a5cfc74; end: 10a5cfd27;  */

void FUN_10a5cfc74(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  FUN_10a5cfa24(param_2,param_3);
  FUN_10a052e3c(param_5);
  FUN_10a5af0f4(param_2);
  *param_1 = 0;
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



/* Entry: 10a5cfd28; end: 10a5d0433;  */

/* WARNING: Possible PIC construction at 0x00010a5d0428: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010a5d042c) */
/* WARNING: Removing unreachable block (ram,0x00010a5d0500) */
/* WARNING: Removing unreachable block (ram,0x00010a5d0474) */
/* WARNING: Removing unreachable block (ram,0x00010a5d048c) */
/* WARNING: Removing unreachable block (ram,0x00010a5d0518) */
/* WARNING: Removing unreachable block (ram,0x00010a5d049c) */
/* WARNING: Removing unreachable block (ram,0x00010a5d04ac) */
/* WARNING: Removing unreachable block (ram,0x00010a5d050c) */
/* WARNING: Removing unreachable block (ram,0x00010a5d0520) */
/* WARNING: Removing unreachable block (ram,0x00010a5d04c8) */
/* WARNING: Removing unreachable block (ram,0x00010a5cffc4) */

void FUN_10a5cfd28(undefined4 *param_1,long *param_2,undefined8 param_3,long param_4,
                  undefined8 param_5)

{
  undefined1 *puVar1;
  code **ppcVar2;
  code **ppcVar3;
  long ***ppplVar4;
  long *plVar5;
  undefined *****pppppuVar6;
  char cVar7;
  bool bVar8;
  undefined8 ****ppppuVar9;
  code *pcVar10;
  long lVar11;
  long *plVar12;
  long *plVar13;
  undefined *****pppppuVar14;
  undefined ***pppuVar15;
  long *plVar16;
  ulong uVar17;
  long lVar18;
  ulong uVar19;
  undefined ****ppppuVar20;
  long *unaff_x19;
  undefined *****unaff_x20;
  undefined *****unaff_x21;
  long lVar21;
  long *unaff_x22;
  long lVar22;
  long lVar23;
  long ***unaff_x23;
  long lVar24;
  code **unaff_x24;
  undefined8 *puVar25;
  ulong uVar26;
  code **unaff_x25;
  ulong uVar27;
  long *unaff_x26;
  long *plVar28;
  undefined8 *unaff_x27;
  long unaff_x28;
  undefined1 *unaff_x29;
  undefined8 unaff_x30;
  long lStack_350;
  ulong uStack_348;
  undefined8 *puStack_340;
  undefined8 uStack_330;
  undefined ****ppppuStack_328;
  undefined8 uStack_320;
  undefined ****ppppuStack_318;
  undefined ****ppppuStack_308;
  ulong uStack_300;
  byte bStack_2f1;
  undefined8 uStack_2f0;
  undefined8 uStack_2e8;
  undefined8 uStack_2e0;
  long **pplStack_2d8;
  long *plStack_2d0;
  undefined8 ***pppuStack_2c8;
  ulong uStack_2c0;
  byte bStack_2b1;
  undefined ****ppppuStack_2b0;
  ulong uStack_2a8;
  undefined **ppuStack_2a0;
  undefined **ppuStack_298;
  undefined1 auStack_290 [56];
  undefined8 uStack_258;
  char cStack_241;
  undefined **appuStack_230 [19];
  long **pplStack_198;
  undefined8 uStack_190;
  long alStack_188 [7];
  undefined8 uStack_150;
  code *pcStack_148;
  undefined ***pppuStack_140;
  long *plStack_138;
  undefined8 uStack_130;
  undefined ****ppppuStack_128;
  undefined8 uStack_120;
  undefined ****ppppuStack_118;
  undefined8 uStack_108;
  undefined **ppuStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  long ***ppplStack_c8;
  long *plStack_c0;
  undefined1 auStack_b8 [7];
  byte bStack_b1;
  undefined8 uStack_80;
  long lStack_78;
  
  puVar1 = &stack0xfffffffffffffff0;
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar12 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar12[0x59] < 8) {
    plVar12[plVar12[0x59] + 0x4e] = plVar12[0x5a];
    plVar12[0x59] = plVar12[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar12 + 0x4b);
  }
  plVar13 = param_2;
  FUN_10a5cfa24(param_2,param_3);
  FUN_10a370168(param_5);
  func_0x000109898570(&ppppuStack_308,param_2,param_4);
  FUN_10a0592fc(&uStack_320,param_2,param_4 + 0x10);
  FUN_10a059354(&uStack_330,param_2,param_4 + 0x20);
  ppcVar2 = &pcStack_148;
  lVar22 = 0x50;
  puVar25 = (undefined8 *)&UNK_110bf7568;
  while( true ) {
    uStack_2a8 = uStack_300;
    ppppuStack_2b0 = ppppuStack_308;
    if (-1 < (char)bStack_2f1) {
      uStack_2a8 = (ulong)bStack_2f1;
      ppppuStack_2b0 = (undefined ****)&ppppuStack_308;
    }
    pppppuVar14 = &ppppuStack_2b0;
    FUN_10a0423ac(pppppuVar14,0,*puVar25,puVar25[-1],*puVar25);
    if ((int)pppppuVar14 == 0) break;
    puVar25 = puVar25 + 2;
    lVar22 = lVar22 + -0x10;
    if (lVar22 == 0) {
      __ZNSt3__1plIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_12basic_stringIT_T0_T1_EEPKS6_RKS9_
                (&ppppuStack_2b0,&UNK_10f665f18,&ppppuStack_308);
      FUN_10a0029c0(&ppppuStack_2b0);
                    /* WARNING: Does not return */
      pcVar10 = (code *)SoftwareBreakpoint(1,0x10a5cfe5c);
      (*pcVar10)();
    }
  }
  FUN_10a5d0764(plVar13 + 6,&uStack_320,&uStack_320);
  FUN_10a2ab4f0(plVar13 + 9,&uStack_330,&uStack_330);
  ppppuVar20 = ppppuStack_318;
  if ((undefined *****)ppppuStack_318 != (undefined *****)0x0) {
    pppppuVar14 = (undefined *****)(ppppuStack_318 + 2);
    do {
      cVar7 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(pppppuVar14,0x10);
      if (bVar8) {
        *pppppuVar14 = (undefined ****)((long)*pppppuVar14 + 1);
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
  }
  if ((undefined *****)ppppuStack_328 != (undefined *****)0x0) {
    pppppuVar14 = (undefined *****)(ppppuStack_328 + 2);
    do {
      cVar7 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(pppppuVar14,0x10);
      if (bVar8) {
        *pppppuVar14 = (undefined ****)((long)*pppppuVar14 + 1);
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
  }
  if ((undefined *****)ppppuStack_318 != (undefined *****)0x0) {
    pppppuVar14 = (undefined *****)(ppppuStack_318 + 2);
    do {
      cVar7 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(pppppuVar14,0x10);
      if (bVar8) {
        *pppppuVar14 = (undefined ****)((long)*pppppuVar14 + 1);
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
  }
  if ((undefined *****)ppppuStack_328 != (undefined *****)0x0) {
    pppppuVar14 = (undefined *****)(ppppuStack_328 + 2);
    do {
      cVar7 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(pppppuVar14,0x10);
      if (bVar8) {
        *pppppuVar14 = (undefined ****)((long)*pppppuVar14 + 1);
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
  }
  pcStack_148 = FUN_10a5d088c;
  pppuStack_140 = (undefined ***)&PTR_DAT_110bf8068;
  ppppuStack_128 = ppppuStack_318;
  uStack_130 = uStack_320;
  ppppuStack_118 = ppppuStack_328;
  uStack_120 = uStack_330;
  plStack_138 = plVar13;
  if ((undefined *****)ppppuStack_328 != (undefined *****)0x0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  if ((undefined *****)ppppuVar20 != (undefined *****)0x0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv(ppppuVar20);
  }
  ppcVar3 = &pcStack_148;
  FUN_109febc44(&ppppuStack_2b0);
  pppuVar15 = &ppuStack_2a0;
  FUN_10a002568(pppuVar15,&UNK_10f665f3d,9);
  FUN_10a002568();
  FUN_10a002568();
  __ZNSt3__19to_stringEi(&ppplStack_c8,*(undefined4 *)((long)plVar13 + 0x84));
  if (-1 < (char)bStack_b1) {
    plStack_c0 = (long *)(ulong)bStack_b1;
    ppplStack_c8 = (long ***)&ppplStack_c8;
  }
  FUN_10a002568(pppuVar15,ppplStack_c8,plStack_c0);
  FUN_10a002568();
  func_0x00010a002480(&pppuStack_2c8,&ppuStack_298,&ppplStack_c8);
  ppppuVar9 = (undefined8 ****)pppuStack_2c8;
  if (-1 < (char)bStack_2b1) {
    uStack_2c0 = (ulong)bStack_2b1;
    ppppuVar9 = &pppuStack_2c8;
  }
  FUN_10a3bf330(&pplStack_198,ppppuVar9,uStack_2c0);
  lVar22 = *(long *)(plVar13[3] + 0x100);
  FUN_10a00ce20(&uStack_2f0,plVar13[4],&pcStack_148);
  plVar16 = (long *)0x138;
  __Znwm();
  ppplStack_c8 = (long ***)pplStack_198;
  plVar28 = plVar16 + 1;
  *plVar28 = 0;
  plVar16[2] = 0;
  *plVar16 = (long)&PTR_FUN_110b9f3b0;
  ppplVar4 = (long ***)(plVar16 + 3);
  pplStack_198 = (long **)0x0;
  plStack_c0 = (long *)uStack_190;
  (**(code **)(alStack_188[0] + 0x10))(auStack_b8,alStack_188);
  uStack_80 = uStack_150;
  uStack_348 = *(ulong *)(lVar22 + 0x210);
  lStack_350 = *(long *)(lVar22 + 0x208);
  if (-1 < (char)*(byte *)(lVar22 + 0x21f)) {
    uStack_348 = (ulong)*(byte *)(lVar22 + 0x21f);
    lStack_350 = lVar22 + 0x208;
  }
  puVar25 = &uStack_108;
  uStack_108 = 0x10a05c39c;
  ppuStack_100 = &PTR_FUN_110b9f370;
  uStack_f8 = uStack_2f0;
  uStack_e8 = uStack_2e0;
  uStack_f0 = uStack_2e8;
  uStack_2e8 = 0;
  uStack_2e0 = 0;
  puStack_340 = puVar25;
  FUN_10a23708c(ppplVar4,&UNK_10f665f56,0x13,"POST",4,&ppplStack_c8,1);
  (*(code *)*ppuStack_100)(&ppuStack_100);
  FUN_10a042634(&ppplStack_c8);
  pplStack_2d8 = (long **)ppplVar4;
  plStack_2d0 = plVar16;
  func_0x00010a05c07c(&uStack_2f0);
  do {
    cVar7 = '\x01';
    bVar8 = (bool)ExclusiveMonitorPass(plVar28,0x10);
    if (bVar8) {
      *plVar28 = *plVar28 + 1;
      cVar7 = ExclusiveMonitorsStatus();
    }
  } while (cVar7 != '\0');
  ppplStack_c8 = ppplVar4;
  plStack_c0 = plVar16;
  FUN_10a5afb10(*(undefined8 *)(*(long *)(plVar13[3] + 0x100) + 0x1c8),&ppplStack_c8);
  do {
    lVar18 = *plVar28;
    cVar7 = '\x01';
    bVar8 = (bool)ExclusiveMonitorPass(plVar28,0x10);
    if (bVar8) {
      *plVar28 = lVar18 + -1;
      cVar7 = ExclusiveMonitorsStatus();
    }
  } while (cVar7 != '\0');
  if (lVar18 == 0) {
    (**(code **)(*plVar16 + 0x10))(plVar16);
    __ZNSt3__119__shared_weak_count14__release_weakEv(plVar16);
  }
  plVar13 = plStack_2d0;
  if (plStack_2d0 != (long *)0x0) {
    plVar5 = plStack_2d0 + 1;
    do {
      lVar18 = *plVar5;
      cVar7 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar8) {
        *plVar5 = lVar18 + -1;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
    if (lVar18 == 0) {
      (**(code **)(*plStack_2d0 + 0x10))(plStack_2d0);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar13);
    }
  }
  FUN_10a042634(&pplStack_198);
  if ((char)bStack_2b1 < '\0') {
    __ZdlPv(pppuStack_2c8);
  }
  ppppuStack_2b0 = (undefined ****)&PTR_SUB_1108a5a38;
  ppuStack_2a0 = &PTR_DAT_1108a5a60;
  appuStack_230[0] = &PTR_DAT_1108a5a88;
  ppuStack_298 = &PTR_DAT_11088d7b0;
  if (cStack_241 < '\0') {
    __ZdlPv(uStack_258);
  }
  ppuStack_298 = (undefined **)
                 (PTR___ZTVNSt3__115basic_streambufIcNS_11char_traitsIcEEEE_110346b20 + 0x10);
  __ZNSt3__16localeD1Ev(auStack_290);
  __ZNSt3__114basic_iostreamIcNS_11char_traitsIcEEED2Ev(&ppppuStack_2b0,&PTR_PTR_1108a5aa0);
  __ZNSt3__19basic_iosIcNS_11char_traitsIcEEED2Ev(appuStack_230);
  pppppuVar14 = (undefined *****)&pppuStack_140;
  (*(code *)*pppuStack_140)();
  if ((undefined *****)ppppuStack_328 != (undefined *****)0x0) {
    pppppuVar6 = (undefined *****)(ppppuStack_328 + 1);
    do {
      ppppuVar20 = *pppppuVar6;
      cVar7 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(pppppuVar6,0x10);
      if (bVar8) {
        *pppppuVar6 = (undefined ****)((long)ppppuVar20 + -1);
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
    if (ppppuVar20 == (undefined ****)0x0) {
      (*(code *)(*ppppuStack_328)[2])(ppppuStack_328);
      __ZNSt3__119__shared_weak_count14__release_weakEv();
      pppppuVar14 = (undefined *****)ppppuStack_328;
    }
  }
  if ((undefined *****)ppppuStack_318 != (undefined *****)0x0) {
    pppppuVar6 = (undefined *****)(ppppuStack_318 + 1);
    do {
      ppppuVar20 = *pppppuVar6;
      cVar7 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(pppppuVar6,0x10);
      if (bVar8) {
        *pppppuVar6 = (undefined ****)((long)ppppuVar20 + -1);
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
    if (ppppuVar20 == (undefined ****)0x0) {
      (*(code *)(*ppppuStack_318)[2])(ppppuStack_318);
      pppppuVar14 = (undefined *****)ppppuStack_318;
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
  }
  if ((char)bStack_2f1 < '\0') {
    pppppuVar14 = (undefined *****)ppppuStack_308;
    __ZdlPv();
  }
  *param_1 = 0;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_78) {
    ___stack_chk_fail();
    FUN_10a05bd88(&ppplStack_c8);
    FUN_10a05bd88(&pplStack_2d8);
    FUN_10a042634(&pplStack_198);
    if ((char)bStack_2b1 < '\0') {
      __ZdlPv(pppuStack_2c8);
    }
    func_0x000105673d7c(&ppppuStack_2b0);
    (*(code *)*pppuStack_140)(&pppuStack_140);
    func_0x00010a07a8a8(&uStack_330);
    FUN_10a0844ac(&uStack_320);
    if ((char)bStack_2f1 < '\0') {
      __ZdlPv(ppppuStack_308);
    }
    unaff_x30 = 0x10a5d042c;
    register0x00000008 = (BADSPACEBASE *)&lStack_350;
    unaff_x19 = plVar12;
    unaff_x20 = pppppuVar14;
    unaff_x21 = (undefined *****)ppppuStack_318;
    unaff_x22 = plVar16;
    unaff_x23 = ppplVar4;
    unaff_x24 = ppcVar3;
    unaff_x25 = ppcVar2;
    unaff_x26 = plVar28;
    unaff_x27 = puVar25;
    unaff_x28 = lVar22 + 0x208;
    unaff_x29 = puVar1;
  }
  plVar13 = plVar12 + 0x4b;
  lVar22 = plVar12[0x59];
  uVar17 = lVar22 - 1;
  plVar12[0x59] = uVar17;
  if (uVar17 < 8) {
    uVar17 = plVar13[lVar22 + 2];
    if (plVar12[0x5a] == uVar17) {
      return;
    }
  }
  else {
    uVar17 = *(ulong *)(plVar12[0x57] + -8);
    plVar12[0x57] = plVar12[0x57] + -8;
    if (plVar12[0x5a] == uVar17) {
      return;
    }
  }
  *(long *)((long)register0x00000008 + -0x60) = unaff_x28;
  *(undefined8 **)((long)register0x00000008 + -0x58) = unaff_x27;
  *(long **)((long)register0x00000008 + -0x50) = unaff_x26;
  *(code ***)((long)register0x00000008 + -0x48) = unaff_x25;
  *(code ***)((long)register0x00000008 + -0x40) = unaff_x24;
  *(long ****)((long)register0x00000008 + -0x38) = unaff_x23;
  *(long **)((long)register0x00000008 + -0x30) = unaff_x22;
  *(undefined ******)((long)register0x00000008 + -0x28) = unaff_x21;
  *(undefined ******)((long)register0x00000008 + -0x20) = unaff_x20;
  *(long **)((long)register0x00000008 + -0x18) = unaff_x19;
  *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
  *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
  lVar22 = *plVar13;
  lVar18 = plVar12[0x4c];
  lVar21 = lVar18 - lVar22;
  uVar26 = lVar21 >> 4;
  if (uVar26 < uVar17) {
    uVar27 = uVar17 - uVar26;
    lVar24 = plVar12[0x4d];
    if ((ulong)(lVar24 - lVar18 >> 4) < uVar27) {
      if (uVar17 >> 0x3c == 0) {
        uVar19 = lVar24 - lVar22 >> 3;
        if (uVar19 <= uVar17) {
          uVar19 = uVar17;
        }
        if (0x7fffffffffffffef < (ulong)(lVar24 - lVar22)) {
          uVar19 = 0xfffffffffffffff;
        }
        *(long **)((long)register0x00000008 + -0x68) = plVar13;
        if (uVar19 >> 0x3c == 0) {
          lVar11 = uVar19 << 4;
          __Znwm();
          lVar18 = lVar11 + lVar21;
          _bzero(lVar18,uVar27 * 0x10);
          lVar23 = lVar18 + uVar26 * -0x10;
          _memcpy(lVar23,lVar22,lVar21);
          *plVar13 = lVar23;
          plVar12[0x4c] = lVar18 + uVar27 * 0x10;
          plVar12[0x4d] = lVar11 + uVar19 * 0x10;
          *(long *)((long)register0x00000008 + -0x78) = lVar22;
          *(long *)((long)register0x00000008 + -0x70) = lVar24;
          *(long *)((long)register0x00000008 + -0x88) = lVar22;
          *(long *)((long)register0x00000008 + -0x80) = lVar22;
          func_0x00010988c1b8((undefined1 *)((long)register0x00000008 + -0x88));
          goto code_r0x00010988c138;
        }
        func_0x000104c4f740();
      }
      else {
        func_0x00010988c1a4();
      }
                    /* WARNING: Does not return */
      pcVar10 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar10)();
    }
    _bzero(lVar18,uVar27 * 0x10);
    plVar12[0x4c] = lVar18 + uVar27 * 0x10;
  }
  else if (uVar17 < uVar26) {
    lVar22 = lVar22 + uVar17 * 0x10;
    while (lVar18 != lVar22) {
      lVar18 = lVar18 + -0x10;
      func_0x00010988c204(lVar18);
    }
    plVar12[0x4c] = lVar22;
  }
code_r0x00010988c138:
  plVar12[0x5a] = uVar17;
  return;
}



/* Entry: 10a5d0434; end: 10a5d053b;  */

void FUN_10a5d0434(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  int iVar1;
  code *pcVar2;
  long lVar3;
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
  
  plVar4 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar4[0x59] < 8) {
    plVar4[plVar4[0x59] + 0x4e] = plVar4[0x5a];
    plVar4[0x59] = plVar4[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar4 + 0x4b);
  }
  plVar5 = param_2;
  func_0x000109898688(param_2,param_3);
  if (plVar5 == (long *)0x0) {
    puVar6 = &UNK_10f68f52e;
  }
  else {
    FUN_10a052c2c(param_2,plVar5);
    if ((param_2 != (long *)0x0) && (___dynamic_cast(), param_2 != (long *)0x0)) {
      FUN_10a052e3c(param_5);
      iVar1 = *(int *)((long)param_2 + 0x84);
      *param_1 = 3;
      *(double *)(param_1 + 2) = (double)iVar1;
      plVar5 = plVar4 + 0x4b;
      lVar7 = plVar4[0x59];
      uVar8 = lVar7 - 1;
      plVar4[0x59] = uVar8;
      if (uVar8 < 8) {
        uVar8 = plVar5[lVar7 + 2];
        if (plVar4[0x5a] == uVar8) {
          return;
        }
      }
      else {
        uVar8 = *(ulong *)(plVar4[0x57] + -8);
        plVar4[0x57] = plVar4[0x57] + -8;
        if (plVar4[0x5a] == uVar8) {
          return;
        }
      }
      lVar7 = *plVar5;
      lVar12 = plVar4[0x4c];
      lVar10 = lVar12 - lVar7;
      uVar14 = lVar10 >> 4;
      if (uVar14 < uVar8) {
        uVar15 = uVar8 - uVar14;
        lVar13 = plVar4[0x4d];
        if ((ulong)(lVar13 - lVar12 >> 4) < uVar15) {
          if (uVar8 >> 0x3c == 0) {
            uVar9 = lVar13 - lVar7 >> 3;
            if (uVar9 <= uVar8) {
              uVar9 = uVar8;
            }
            if (0x7fffffffffffffef < (ulong)(lVar13 - lVar7)) {
              uVar9 = 0xfffffffffffffff;
            }
            plStack_68 = plVar5;
            if (uVar9 >> 0x3c == 0) {
              lVar3 = uVar9 << 4;
              __Znwm();
              lVar12 = lVar3 + lVar10;
              _bzero(lVar12,uVar15 * 0x10);
              lVar11 = lVar12 + uVar14 * -0x10;
              _memcpy(lVar11,lVar7,lVar10);
              *plVar5 = lVar11;
              plVar4[0x4c] = lVar12 + uVar15 * 0x10;
              plVar4[0x4d] = lVar3 + uVar9 * 0x10;
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
          pcVar2 = (code *)SoftwareBreakpoint(1,0x10988c16c);
          (*pcVar2)();
        }
        _bzero(lVar12,uVar15 * 0x10);
        plVar4[0x4c] = lVar12 + uVar15 * 0x10;
      }
      else if (uVar8 < uVar14) {
        lVar7 = lVar7 + uVar8 * 0x10;
        while (lVar12 != lVar7) {
          lVar12 = lVar12 + -0x10;
          func_0x00010988c204(lVar12);
        }
        plVar4[0x4c] = lVar7;
      }
code_r0x00010988c138:
      plVar4[0x5a] = uVar8;
      return;
    }
    puVar6 = &UNK_10f685496;
  }
  func_0x00010988bd28(puVar6);
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10a5d0528);
  (*pcVar2)();
}



/* Entry: 10a5d053c; end: 10a5d05fb;  */

void FUN_10a5d053c(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  code *pcVar1;
  long lVar2;
  long *plVar3;
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
  FUN_10a5cfa24(param_2,param_3);
  FUN_10a076f00(param_5);
  func_0x000109898518(param_2,param_4);
  *(int *)((long)plVar4 + 0x84) = (int)param_2;
  *param_1 = 0;
  plVar4 = plVar3 + 0x4b;
  lVar5 = plVar3[0x59];
  uVar6 = lVar5 - 1;
  plVar3[0x59] = uVar6;
  if (uVar6 < 8) {
    uVar6 = plVar4[lVar5 + 2];
    if (plVar3[0x5a] == uVar6) {
      return;
    }
  }
  else {
    uVar6 = *(ulong *)(plVar3[0x57] + -8);
    plVar3[0x57] = plVar3[0x57] + -8;
    if (plVar3[0x5a] == uVar6) {
      return;
    }
  }
  lVar5 = *plVar4;
  lVar10 = plVar3[0x4c];
  lVar8 = lVar10 - lVar5;
  uVar12 = lVar8 >> 4;
  if (uVar12 < uVar6) {
    uVar13 = uVar6 - uVar12;
    lVar11 = plVar3[0x4d];
    if ((ulong)(lVar11 - lVar10 >> 4) < uVar13) {
      if (uVar6 >> 0x3c == 0) {
        uVar7 = lVar11 - lVar5 >> 3;
        if (uVar7 <= uVar6) {
          uVar7 = uVar6;
        }
        if (0x7fffffffffffffef < (ulong)(lVar11 - lVar5)) {
          uVar7 = 0xfffffffffffffff;
        }
        plStack_68 = plVar4;
        if (uVar7 >> 0x3c == 0) {
          lVar2 = uVar7 << 4;
          __Znwm();
          lVar10 = lVar2 + lVar8;
          _bzero(lVar10,uVar13 * 0x10);
          lVar9 = lVar10 + uVar12 * -0x10;
          _memcpy(lVar9,lVar5,lVar8);
          *plVar4 = lVar9;
          plVar3[0x4c] = lVar10 + uVar13 * 0x10;
          plVar3[0x4d] = lVar2 + uVar7 * 0x10;
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
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar1)();
    }
    _bzero(lVar10,uVar13 * 0x10);
    plVar3[0x4c] = lVar10 + uVar13 * 0x10;
  }
  else if (uVar6 < uVar12) {
    lVar5 = lVar5 + uVar6 * 0x10;
    while (lVar10 != lVar5) {
      lVar10 = lVar10 + -0x10;
      func_0x00010988c204(lVar10);
    }
    plVar3[0x4c] = lVar5;
  }
code_r0x00010988c138:
  plVar3[0x5a] = uVar6;
  return;
}



/* Entry: 10a5d05fc; end: 10a5d0643;  */

void FUN_10a5d05fc(undefined8 param_1,undefined8 *param_2)

{
  if (param_2 != (undefined8 *)0x0) {
    FUN_10a5d05fc(param_1,*param_2);
    FUN_10a5d05fc(param_1,param_2[1]);
    FUN_10a0844ac(param_2 + 4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(param_2);
    return;
  }
  return;
}



/* Entry: 10a5d0644; end: 10a5d0747;  */

void FUN_10a5d0644(long param_1,long param_2)

{
  undefined8 **ppuVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  long *plVar5;
  undefined8 **ppuVar6;
  undefined8 **ppuVar7;
  code **ppcVar8;
  code **ppcVar9;
  undefined8 *puVar10;
  long *plVar11;
  long lVar12;
  code **ppcVar13;
  undefined8 *puStack_d0;
  undefined8 *puStack_c8;
  code **ppcStack_c0;
  undefined8 **ppuStack_b8;
  undefined1 *puStack_b0;
  code *pcStack_a8;
  long lStack_a0;
  undefined8 **ppuStack_98;
  undefined8 **ppuStack_90;
  undefined8 uStack_88;
  long lStack_80;
  code *pcStack_78;
  undefined8 *apuStack_70 [7];
  long lStack_38;
  long in_stack_ffffffffffffffd8;
  
  lVar12 = *(long *)(param_2 + 0x10);
  if (*(int *)(param_1 + 0x30) - 200U < 100) {
    FUN_109ffe064(&lStack_38,*(undefined8 *)(param_1 + 0x38),*(undefined8 *)(param_1 + 0x80));
    puVar10 = *(undefined8 **)(lVar12 + 0x60);
    if (puVar10 == (undefined8 *)0x0 || *(char *)(puVar10 + 8) != '\x02') {
      if (puVar10 != (undefined8 *)0x0 && *(char *)(puVar10 + 8) == '\x01') {
        (*(code *)*puVar10)(&lStack_38,puVar10);
      }
    }
    else {
      FUN_10a05aad0(puVar10,&lStack_38);
    }
    if (in_stack_ffffffffffffffd8 < 0) {
      __ZdlPv(lStack_38);
    }
  }
  else {
    plVar11 = *(long **)(lVar12 + 0x70);
    if (plVar11 != (long *)0x0 && (char)plVar11[8] == '\x02') {
      ppcVar13 = (code **)(param_1 + 0x18);
      lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
      plVar5 = plVar11;
      ppcVar8 = ppcVar13;
      FUN_10a688b40();
      if (plVar5 == (long *)0x0) {
        ppcVar9 = (code **)0x0;
        ppuVar6 = (undefined8 **)0x0;
        if (ppcVar8 != (code **)0x0) {
          ppuStack_98 = (undefined8 **)plVar11[1];
          lStack_a0 = *plVar11;
          if (plVar11[1] != 0) {
            plVar11 = (long *)(plVar11[1] + 8);
            do {
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(plVar11,0x10);
              if (bVar3) {
                *plVar11 = *plVar11 + 1;
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
          }
          if (*(char *)(param_1 + 0x2f) < '\0') {
            func_0x000107c3192c(&ppuStack_90,*ppcVar13,*(undefined8 *)(param_1 + 0x20));
          }
          else {
            uStack_88 = *(undefined8 *)(param_1 + 0x20);
            ppuStack_90 = (undefined8 **)*ppcVar13;
            lStack_80 = *(long *)(param_1 + 0x28);
          }
          pcStack_78 = FUN_10a05aec4;
          ppcVar13 = &pcStack_78;
          FUN_10a05af2c(apuStack_70,&PTR_FUN_110b9f388,&lStack_a0);
          ppcVar9 = &pcStack_78;
          FUN_10a4634ec(ppcVar8,ppcVar9);
          ppuVar6 = apuStack_70;
          (*(code *)*apuStack_70[0])();
          if (lStack_80 < 0) {
            ppuVar6 = ppuStack_90;
            __ZdlPv();
          }
          ppuVar7 = ppuStack_98;
          if (ppuStack_98 != (undefined8 **)0x0) {
            ppuVar1 = ppuStack_98 + 1;
            do {
              puVar10 = *ppuVar1;
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(ppuVar1,0x10);
              if (bVar3) {
                *ppuVar1 = (undefined8 *)((long)puVar10 + -1);
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
            if (puVar10 == (undefined8 *)0x0) {
              (*(code *)(*ppuStack_98)[2])(ppuStack_98);
              __ZNSt3__119__shared_weak_count14__release_weakEv();
              ppuVar6 = ppuVar7;
            }
          }
        }
      }
      else {
        *plVar5 = CONCAT44((int)((ulong)*plVar5 >> 0x20) + 1,(int)*plVar5 + 1);
        ppuVar6 = (undefined8 **)*plVar11;
        ppcVar9 = ppcVar13;
        FUN_10a05aca4(ppuVar6,ppcVar13);
        iVar4 = *(int *)((long)plVar5 + 4) + -1;
        *(int *)((long)plVar5 + 4) = iVar4;
        if (iVar4 == 0) {
          *(undefined4 *)plVar5 = 0;
        }
      }
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
        return;
      }
      ___stack_chk_fail();
      func_0x00010a004dac(&lStack_a0);
      ppuVar7 = ppuVar6;
      __Unwind_Resume();
      pcStack_a8 = FUN_10a05aca4;
      ppcStack_c0 = ppcVar13;
      ppuStack_b8 = ppuVar6;
      puStack_b0 = &stack0xfffffffffffffff0;
      func_0x000109884c0c(&puStack_d0,ppuVar7 + 1,*ppuVar7);
      func_0x000109884820(&puStack_c8,&puStack_d0,*ppuVar7);
      if (puStack_d0 != (undefined8 *)0x0) {
        (**(code **)*puStack_d0)();
      }
      (**(code **)(**ppuVar7 + 0x30))(&puStack_d0);
      FUN_10a05adc0(*ppuVar7,&puStack_d0,&puStack_c8,ppcVar9);
      if (puStack_d0 != (undefined8 *)0x0) {
        (**(code **)*puStack_d0)();
      }
      if (puStack_c8 != (undefined8 *)0x0) {
        (**(code **)*puStack_c8)();
      }
      return;
    }
    if (plVar11 != (long *)0x0 && (char)plVar11[8] == '\x01') {
                    /* WARNING: Could not recover jumptable at 0x00010a5d06e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)*plVar11)(param_1 + 0x18,plVar11);
      return;
    }
  }
  return;
}



/* Entry: 10a5d0748; end: 10a5d0763;  */

void FUN_10a5d0748(void)

{
  return;
}



/* Entry: 10a5d0764; end: 10a5d0837;  */

undefined1  [16] FUN_10a5d0764(long param_1,long param_2,long *param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  undefined8 uVar5;
  long lVar6;
  long *plVar7;
  long *plVar8;
  long lVar9;
  undefined1 auVar10 [16];
  
  plVar7 = (long *)(param_1 + 8);
  plVar8 = plVar7;
  if ((long *)*plVar7 != (long *)0x0) {
    plVar4 = (long *)*plVar7;
    do {
      while (plVar7 = plVar4, (ulong)plVar7[5] <= *(ulong *)(param_2 + 8)) {
        if (*(ulong *)(param_2 + 8) <= (ulong)plVar7[5]) {
          uVar5 = 0;
          goto LAB_10a5d0820;
        }
        plVar4 = (long *)plVar7[1];
        if ((long *)plVar7[1] == (long *)0x0) {
          plVar8 = plVar7 + 1;
          goto LAB_10a5d07cc;
        }
      }
      plVar4 = (long *)*plVar7;
      plVar8 = plVar7;
    } while ((long *)*plVar7 != (long *)0x0);
  }
LAB_10a5d07cc:
  plVar4 = (long *)0x30;
  __Znwm();
  lVar6 = param_3[1];
  lVar9 = *param_3;
  plVar4[5] = param_3[1];
  plVar4[4] = lVar9;
  if (lVar6 != 0) {
    plVar1 = (long *)(lVar6 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  FUN_10a5d0838(param_1,plVar7,plVar8,plVar4);
  uVar5 = 1;
  plVar7 = plVar4;
LAB_10a5d0820:
  auVar10._8_8_ = uVar5;
  auVar10._0_8_ = plVar7;
  return auVar10;
}



/* Entry: 10a5d0838; end: 10a5d088b;  */

void FUN_10a5d0838(long *param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4)

{
  *param_4 = 0;
  param_4[1] = 0;
  param_4[2] = param_2;
  *param_3 = param_4;
  if (*(long *)*param_1 != 0) {
    *param_1 = *(long *)*param_1;
    param_4 = (undefined8 *)*param_3;
  }
  func_0x000107c2b058(param_1[1],param_4);
  param_1[2] = param_1[2] + 1;
  return;
}



/* Entry: 10a5d088c; end: 10a5d1127;  */

void FUN_10a5d088c(long *param_1,long param_2,undefined8 *param_3)

{
  char cVar1;
  bool bVar2;
  undefined8 ****ppppuVar3;
  long *plVar4;
  ulong uVar5;
  long *plVar6;
  ulong uVar7;
  long lVar8;
  undefined8 extraout_x8;
  undefined8 *puVar9;
  undefined8 uVar10;
  int iVar11;
  long ****pppplVar12;
  long lVar13;
  ulong *puVar14;
  long lVar15;
  undefined8 auStack_2a8 [2];
  char cStack_291;
  long lStack_290;
  long **pplStack_288;
  long ***ppplStack_280;
  long *plStack_278;
  undefined1 *puStack_270;
  code *pcStack_268;
  long lStack_260;
  long *plStack_258;
  char cStack_249;
  undefined8 uStack_248;
  char cStack_231;
  long lStack_220;
  long *plStack_218;
  undefined8 auStack_208 [2];
  char cStack_1f1;
  undefined8 uStack_1f0;
  char cStack_1d9;
  long lStack_1d0;
  long *plStack_1c8;
  long ***ppplStack_1b8;
  ulong uStack_1b0;
  byte bStack_1a1;
  undefined8 ***pppuStack_1a0;
  ulong uStack_198;
  byte bStack_189;
  byte abStack_188 [8];
  undefined1 auStack_180 [8];
  undefined8 auStack_178 [2];
  char cStack_161;
  undefined8 *puStack_160;
  long *plStack_158;
  long lStack_150;
  long *plStack_148;
  long *plStack_140;
  long lStack_138;
  long lStack_130;
  long *plStack_128;
  long lStack_120;
  long lStack_118;
  int iStack_110;
  long lStack_108;
  long lStack_100;
  undefined1 auStack_f8 [56];
  long lStack_c0;
  undefined4 uStack_b8;
  undefined1 auStack_b0 [40];
  long **applStack_88 [3];
  long ***ppplStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lStack_138 = param_1[1];
  plStack_140 = (long *)*param_1;
  lStack_130 = param_1[2];
  *param_1 = 0;
  param_1[1] = 0;
  lStack_120 = param_1[4];
  plStack_128 = (long *)param_1[3];
  param_1[2] = 0;
  param_1[3] = 0;
  lStack_118 = param_1[5];
  param_1[4] = 0;
  param_1[5] = 0;
  iStack_110 = (int)param_1[6];
  lStack_108 = param_1[7];
  lStack_100 = param_1[8];
  param_1[7] = 0;
  (**(code **)(param_1[9] + 0x10))(auStack_f8,param_1 + 9);
  lStack_c0 = param_1[0x10];
  uStack_b8 = (undefined4)param_1[0x11];
  FUN_10a0424c4(auStack_b0,param_1 + 0x12);
  lVar13 = *(long *)(param_2 + 0x10);
  lStack_150 = 0;
  plStack_148 = (long *)0x0;
  plVar4 = *(long **)(param_2 + 0x20);
  if ((plVar4 == (long *)0x0) ||
     (__ZNSt3__119__shared_weak_count4lockEv(), plStack_148 = plVar4, plVar4 == (long *)0x0)) {
    pppplVar12 = (long ****)0x1;
  }
  else {
    lStack_150 = *(long *)(param_2 + 0x18);
    pppplVar12 = (long ****)(ulong)(lStack_150 == 0);
  }
  puStack_160 = (undefined8 *)0x0;
  plStack_158 = (long *)0x0;
  plVar4 = *(long **)(param_2 + 0x30);
  if ((plVar4 == (long *)0x0) ||
     (__ZNSt3__119__shared_weak_count4lockEv(), plStack_158 = plVar4, plVar4 == (long *)0x0))
  goto LAB_10a5d0f08;
  puVar9 = *(undefined8 **)(param_2 + 0x28);
  iVar11 = (int)pppplVar12;
  if (puVar9 == (undefined8 *)0x0) {
    iVar11 = 1;
  }
  puStack_160 = puVar9;
  if (iVar11 != 0) goto LAB_10a5d0f08;
  if (iStack_110 - 200U < 100) {
    FUN_109ffe064(auStack_178,lStack_108,lStack_c0);
    ppplStack_70 = (long ***)0x0;
    pppplVar12 = (long ****)applStack_88;
    param_3 = (undefined8 *)0x0;
    FUN_109fc89b4(abStack_188,auStack_178,applStack_88,0,0);
    if ((long ****)ppplStack_70 == pppplVar12) {
      lVar8 = 0x20;
LAB_10a5d0a2c:
      (**(code **)((long)*ppplStack_70 + lVar8))();
    }
    else if ((long ****)ppplStack_70 != (long ****)0x0) {
      lVar8 = 0x28;
      goto LAB_10a5d0a2c;
    }
    puVar9 = puStack_160;
    if (abStack_188[0] == 9) {
      func_0x000107c2b054(auStack_208,&UNK_10f667258);
      if ((puVar9 == (undefined8 *)0x0) || (*(char *)(puVar9 + 8) != '\x02')) {
        if ((puVar9 != (undefined8 *)0x0) && (*(char *)(puVar9 + 8) == '\x01')) {
          (*(code *)*puVar9)(auStack_208,puVar9);
        }
      }
      else {
        FUN_10a05aad0(puVar9,auStack_208);
      }
      if (cStack_1f1 < '\0') {
        __ZdlPv(auStack_208[0]);
      }
      func_0x000109380ffc(auStack_180,abStack_188[0]);
      if (cStack_161 < '\0') {
        __ZdlPv(auStack_178[0]);
      }
      goto LAB_10a5d0f08;
    }
    func_0x000107c2b054(auStack_208,"path");
    param_3 = (undefined8 *)&UNK_10f66429f;
    FUN_10a5d1128(&pppuStack_1a0,abStack_188,auStack_208,&UNK_10f66429f);
    if (cStack_1f1 < '\0') {
      __ZdlPv(auStack_208[0]);
    }
    ppppuVar3 = (undefined8 ****)pppuStack_1a0;
    if (-1 < (char)bStack_189) {
      uStack_198 = (ulong)bStack_189;
      ppppuVar3 = &pppuStack_1a0;
    }
    FUN_10a1a5e64(&ppplStack_1b8,ppppuVar3,uStack_198);
    puVar9 = puStack_160;
    uVar7 = uStack_1b0;
    if (-1 < (char)bStack_1a1) {
      uVar7 = (ulong)bStack_1a1;
    }
    if (uVar7 == 0) {
      func_0x000107c2b054(auStack_208,&UNK_10f66727e);
      if ((puVar9 == (undefined8 *)0x0) || (*(char *)(puVar9 + 8) != '\x02')) {
        if ((puVar9 != (undefined8 *)0x0) && (*(char *)(puVar9 + 8) == '\x01')) {
          (*(code *)*puVar9)(auStack_208,puVar9);
        }
      }
      else {
        FUN_10a05aad0(puVar9,auStack_208);
      }
      if (cStack_1f1 < '\0') {
        __ZdlPv(auStack_208[0]);
      }
    }
    else {
      lStack_1d0 = 0;
      plStack_1c8 = (long *)0x0;
      FUN_10a0ff18c(auStack_208,&pppuStack_1a0,2);
      lVar8 = 0;
      pppplVar12 = (long ****)ppplStack_1b8;
      if (-1 < (char)bStack_1a1) {
        pppplVar12 = &ppplStack_1b8;
        uStack_1b0 = (ulong)bStack_1a1;
      }
      puVar14 = (ulong *)&UNK_110bf8028;
      lVar15 = 0x30;
      do {
        if (*puVar14 == uStack_1b0) {
          uVar5 = puVar14[-1];
          _memcmp(uVar5,pppplVar12,uStack_1b0);
          if ((int)uVar5 == 0) {
            lVar8 = lVar8 + 1;
          }
        }
        puVar14 = puVar14 + 2;
        lVar15 = lVar15 + -0x10;
      } while (lVar15 != 0);
      if (lVar8 == 0) {
        param_3 = auStack_208;
        FUN_10a5d1300(&lStack_260,*(undefined8 *)(lVar13 + 0x18),param_3);
        plVar4 = plStack_1c8;
        plStack_1c8 = plStack_258;
        lStack_1d0 = lStack_260;
        lStack_260 = 0;
        plStack_258 = (long *)0x0;
        if (plVar4 != (long *)0x0) {
          plVar6 = plVar4 + 1;
          do {
            lVar8 = *plVar6;
            cVar1 = '\x01';
            bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
            if (bVar2) {
              *plVar6 = lVar8 + -1;
              cVar1 = ExclusiveMonitorsStatus();
            }
          } while (cVar1 != '\0');
          if (lVar8 == 0) {
            (**(code **)(*plVar4 + 0x10))(plVar4);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
          }
        }
        plVar4 = plStack_258;
        if (plStack_258 != (long *)0x0) {
          plVar6 = plStack_258 + 1;
          do {
            lVar8 = *plVar6;
            cVar1 = '\x01';
            bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
            if (bVar2) {
              *plVar6 = lVar8 + -1;
              cVar1 = ExclusiveMonitorsStatus();
            }
          } while (cVar1 != '\0');
          if (lVar8 == 0) {
            (**(code **)(*plStack_258 + 0x10))(plStack_258);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
          }
        }
        plVar4 = plStack_1c8;
        if (plStack_1c8 == (long *)0x0) {
          *(undefined4 *)(lStack_1d0 + 0x340) = 0xffffffff;
          *(byte *)(lStack_1d0 + 0x358) = *(byte *)(lStack_1d0 + 0x358) & 0xfe;
        }
        else {
          plVar6 = plStack_1c8 + 1;
          do {
            cVar1 = '\x01';
            bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
            if (bVar2) {
              *plVar6 = *plVar6 + 1;
              cVar1 = ExclusiveMonitorsStatus();
            }
          } while (cVar1 != '\0');
          *(undefined4 *)(lStack_1d0 + 0x340) = 0xffffffff;
          *(byte *)(lStack_1d0 + 0x358) = *(byte *)(lStack_1d0 + 0x358) & 0xfe;
          do {
            lVar8 = *plVar6;
            cVar1 = '\x01';
            bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
            if (bVar2) {
              *plVar6 = lVar8 + -1;
              cVar1 = ExclusiveMonitorsStatus();
            }
          } while (cVar1 != '\0');
          if (lVar8 == 0) {
            (**(code **)(*plStack_1c8 + 0x10))(plStack_1c8);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
          }
        }
      }
      else {
        uVar10 = *(undefined8 *)(lVar13 + 0x18);
        FUN_10a0ff18c(&lStack_260,&pppuStack_1a0,2);
        param_3 = (undefined8 *)0x0;
        FUN_10ac5fb74(&lStack_220,uVar10,&lStack_260,0);
        plVar4 = plStack_1c8;
        plStack_1c8 = plStack_218;
        lStack_1d0 = lStack_220;
        lStack_220 = 0;
        plStack_218 = (long *)0x0;
        if (plVar4 != (long *)0x0) {
          plVar6 = plVar4 + 1;
          do {
            lVar8 = *plVar6;
            cVar1 = '\x01';
            bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
            if (bVar2) {
              *plVar6 = lVar8 + -1;
              cVar1 = ExclusiveMonitorsStatus();
            }
          } while (cVar1 != '\0');
          if (lVar8 == 0) {
            (**(code **)(*plVar4 + 0x10))(plVar4);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
          }
        }
        plVar4 = plStack_218;
        if (plStack_218 != (long *)0x0) {
          plVar6 = plStack_218 + 1;
          do {
            lVar8 = *plVar6;
            cVar1 = '\x01';
            bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
            if (bVar2) {
              *plVar6 = lVar8 + -1;
              cVar1 = ExclusiveMonitorsStatus();
            }
          } while (cVar1 != '\0');
          if (lVar8 == 0) {
            (**(code **)(*plStack_218 + 0x10))(plStack_218);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
          }
        }
        if (cStack_231 < '\0') {
          __ZdlPv(uStack_248);
        }
        if (cStack_249 < '\0') {
          __ZdlPv(lStack_260);
        }
      }
      FUN_10a5d11a8(&lStack_260,*(undefined8 *)(lVar13 + 0x18),&lStack_1d0);
      FUN_10a00bca8(lStack_150,&lStack_260);
      plVar4 = plStack_258;
      if (plStack_258 != (long *)0x0) {
        plVar6 = plStack_258 + 1;
        do {
          lVar8 = *plVar6;
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
          if (bVar2) {
            *plVar6 = lVar8 + -1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
        if (lVar8 == 0) {
          (**(code **)(*plStack_258 + 0x10))(plStack_258);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
        }
      }
      if (cStack_1d9 < '\0') {
        __ZdlPv(uStack_1f0);
      }
      if (cStack_1f1 < '\0') {
        __ZdlPv(auStack_208[0]);
      }
      plVar4 = plStack_1c8;
      if (plStack_1c8 != (long *)0x0) {
        plVar6 = plStack_1c8 + 1;
        do {
          lVar8 = *plVar6;
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
          if (bVar2) {
            *plVar6 = lVar8 + -1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
        if (lVar8 == 0) {
          (**(code **)(*plStack_1c8 + 0x10))(plStack_1c8);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
        }
      }
    }
    if ((char)bStack_1a1 < '\0') {
      __ZdlPv(ppplStack_1b8);
    }
    if ((char)bStack_189 < '\0') {
      __ZdlPv(pppuStack_1a0);
    }
    func_0x000109380ffc(auStack_180,abStack_188[0]);
    if (cStack_161 < '\0') {
      __ZdlPv(auStack_178[0]);
    }
    if (uVar7 == 0) goto LAB_10a5d0f08;
  }
  else {
    func_0x000107c2b054(auStack_208,&UNK_10f66729e);
    if (*(char *)(puVar9 + 8) == '\x01') {
      (*(code *)*puVar9)(auStack_208,puVar9);
    }
    else if (*(char *)(puVar9 + 8) == '\x02') {
      FUN_10a05aad0(puVar9,auStack_208);
    }
    if (cStack_1f1 < '\0') {
      __ZdlPv(auStack_208[0]);
    }
  }
  FUN_10a5d1930(lVar13 + 0x30,&lStack_150);
  func_0x00010a2abcd8(lVar13 + 0x48,&puStack_160);
LAB_10a5d0f08:
  plVar4 = plStack_158;
  if (plStack_158 != (long *)0x0) {
    plVar6 = plStack_158 + 1;
    do {
      lVar8 = *plVar6;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar2) {
        *plVar6 = lVar8 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar8 == 0) {
      (**(code **)(*plStack_158 + 0x10))(plStack_158);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
    }
  }
  plVar4 = plStack_148;
  if (plStack_148 != (long *)0x0) {
    plVar6 = plStack_148 + 1;
    do {
      lVar8 = *plVar6;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar2) {
        *plVar6 = lVar8 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar8 == 0) {
      (**(code **)(*plStack_148 + 0x10))(plStack_148);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
    }
  }
  func_0x000104c4f944(auStack_b0);
  plVar4 = &lStack_108;
  FUN_10a042634();
  if (lStack_118 < 0) {
    plVar4 = plStack_128;
    __ZdlPv();
  }
  if (lStack_130 < 0) {
    plVar4 = plStack_140;
    __ZdlPv();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  FUN_10a0ff214(auStack_208);
  FUN_10a05b1b0(&lStack_1d0);
  if ((char)bStack_1a1 < '\0') {
    __ZdlPv(ppplStack_1b8);
  }
  if ((char)bStack_189 < '\0') {
    __ZdlPv(pppuStack_1a0);
  }
  uVar7 = (ulong)abStack_188[0];
  func_0x000109380ffc(auStack_180,uVar7);
  if (cStack_161 < '\0') {
    __ZdlPv(auStack_178[0]);
  }
  func_0x00010a07a8a8(&puStack_160);
  FUN_10a0844ac(&lStack_150);
  FUN_10a05bd10(&plStack_140);
  plVar6 = plVar4;
  __Unwind_Resume(plVar4);
  pcStack_268 = FUN_10a5d1128;
  lStack_290 = lVar13;
  pplStack_288 = &plStack_140;
  ppplStack_280 = (long ***)pppplVar12;
  plStack_278 = plVar4;
  puStack_270 = &stack0xfffffffffffffff0;
  func_0x000107c2b054(auStack_2a8,param_3);
  func_0x000109494628(extraout_x8,plVar6,uVar7,auStack_2a8);
  if (cStack_291 < '\0') {
    __ZdlPv(auStack_2a8[0]);
  }
  return;
}



/* Entry: 10a5d1128; end: 10a5d11a7;  */

void FUN_10a5d1128(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 auStack_48 [2];
  char cStack_31;
  
  func_0x000107c2b054(auStack_48,param_4);
  func_0x000109494628(param_1,param_2,param_3,auStack_48);
  if (cStack_31 < '\0') {
    __ZdlPv(auStack_48[0]);
  }
  return;
}



/* Entry: 10a5d11a8; end: 10a5d12ff;  */

void FUN_10a5d11a8(undefined8 *param_1,long param_2,long *param_3)

{
  long *plVar1;
  undefined8 **ppuVar2;
  char cVar3;
  bool bVar4;
  undefined8 **ppuVar5;
  undefined8 **ppuVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  long lVar9;
  long *plVar10;
  undefined8 uStack_f0;
  long *plStack_e8;
  undefined8 uStack_a0;
  undefined8 *puStack_98;
  undefined8 **ppuStack_90;
  long lStack_88;
  undefined8 uStack_80;
  undefined8 **ppuStack_78;
  undefined1 auStack_70 [8];
  undefined8 *apuStack_68 [8];
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar10 = param_3;
  lStack_88 = param_2;
  if (param_2 == 0) {
    uStack_a0 = 0;
    FUN_10a5d15c8(&uStack_80,&uStack_a0,param_3);
    param_1[1] = ppuStack_78;
    *param_1 = uStack_80;
    if (ppuStack_78 != (undefined8 **)0x0) {
      ppuVar5 = ppuStack_78 + 1;
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(ppuVar5,0x10);
        if (bVar4) {
          *ppuVar5 = (undefined8 *)((long)*ppuVar5 + 1);
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    FUN_10a044790(auStack_70);
    ppuVar5 = apuStack_68;
    (*(code *)*apuStack_68[0])();
    if (ppuStack_78 == (undefined8 **)0x0) goto LAB_10a5d12b8;
    ppuVar2 = ppuStack_78 + 1;
    do {
      puVar8 = *ppuVar2;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(ppuVar2,0x10);
      if (bVar4) {
        *ppuVar2 = (undefined8 *)((long)puVar8 + -1);
        cVar3 = ExclusiveMonitorsStatus();
      }
      ppuVar6 = ppuStack_78;
    } while (cVar3 != '\0');
  }
  else {
    puStack_98 = *(undefined8 **)(param_2 + 0x858);
    ppuStack_90 = *(undefined8 ***)(param_2 + 0x860);
    if (ppuStack_90 != (undefined8 **)0x0) {
      ppuVar5 = ppuStack_90 + 1;
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(ppuVar5,0x10);
        if (bVar4) {
          *ppuVar5 = (undefined8 *)((long)*ppuVar5 + 1);
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    ppuVar5 = &puStack_98;
    param_3 = &lStack_88;
    FUN_10a5d13e0(param_1,ppuVar5,param_3);
    if (ppuStack_90 == (undefined8 **)0x0) goto LAB_10a5d12b8;
    ppuVar2 = ppuStack_90 + 1;
    do {
      puVar8 = *ppuVar2;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(ppuVar2,0x10);
      if (bVar4) {
        *ppuVar2 = (undefined8 *)((long)puVar8 + -1);
        cVar3 = ExclusiveMonitorsStatus();
      }
      ppuVar6 = ppuStack_90;
    } while (cVar3 != '\0');
  }
  if (puVar8 == (undefined8 *)0x0) {
    (*(code *)(*ppuVar6)[2])(ppuVar6);
    __ZNSt3__119__shared_weak_count14__release_weakEv();
    ppuVar5 = ppuVar6;
  }
LAB_10a5d12b8:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return;
  }
  ___stack_chk_fail();
  __Unwind_Resume();
  puVar7 = (undefined8 *)0x410;
  __Znwm();
  puVar7[1] = 0;
  puVar7[2] = 0;
  *puVar7 = &PTR_FUN_110bc8920;
  puVar8 = puVar7 + 3;
  uStack_f0 = 0;
  plStack_e8 = (long *)0x0;
  FUN_10ac8b384(puVar8,param_3,plVar10,&uStack_f0,1);
  plVar10 = plStack_e8;
  if (plStack_e8 != (long *)0x0) {
    plVar1 = plStack_e8 + 1;
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
      (**(code **)(*plStack_e8 + 0x10))(plStack_e8);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar10);
    }
  }
  *ppuVar5 = puVar8;
  ppuVar5[1] = puVar7;
  if ((puVar7 + 0xb != (long *)0x0) &&
     ((lVar9 = puVar7[0xc], lVar9 == 0 || (*(long *)(lVar9 + 8) == -1)))) {
    plVar10 = ppuVar5[1];
    if (plVar10 != (long *)0x0) {
      plVar1 = plVar10 + 1;
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar4) {
          *plVar1 = *plVar1 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      plVar1 = plVar10 + 2;
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar4) {
          *plVar1 = *plVar1 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      lVar9 = puVar7[0xc];
    }
    puVar7[0xb] = puVar8;
    puVar7[0xc] = plVar10;
    if (lVar9 != 0) {
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
    if (plVar10 != (long *)0x0) {
      plVar1 = plVar10 + 1;
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
        (**(code **)(*plVar10 + 0x10))(plVar10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR___ZNSt3__119__shared_weak_count14__release_weakEv_110346648)(plVar10);
        return;
      }
    }
  }
  return;
}



/* Entry: 10a5d1300; end: 10a5d13df;  */

void FUN_10a5d1300(long *param_1,undefined8 param_2,undefined8 param_3)

{
  long *plVar1;
  undefined8 *puVar2;
  char cVar3;
  bool bVar4;
  undefined8 *puVar5;
  long lVar6;
  long *plVar7;
  undefined8 uStack_50;
  long *plStack_48;
  
  puVar5 = (undefined8 *)0x410;
  __Znwm();
  puVar5[1] = 0;
  puVar5[2] = 0;
  *puVar5 = &PTR_FUN_110bc8920;
  puVar2 = puVar5 + 3;
  uStack_50 = 0;
  plStack_48 = (long *)0x0;
  FUN_10ac8b384(puVar2,param_2,param_3,&uStack_50,1);
  plVar7 = plStack_48;
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
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
    }
  }
  *param_1 = (long)puVar2;
  param_1[1] = (long)puVar5;
  if ((puVar5 + 0xb != (long *)0x0) &&
     ((lVar6 = puVar5[0xc], lVar6 == 0 || (*(long *)(lVar6 + 8) == -1)))) {
    plVar7 = (long *)param_1[1];
    if (plVar7 != (long *)0x0) {
      plVar1 = plVar7 + 1;
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar4) {
          *plVar1 = *plVar1 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      plVar1 = plVar7 + 2;
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar4) {
          *plVar1 = *plVar1 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      lVar6 = puVar5[0xc];
    }
    puVar5[0xb] = puVar2;
    puVar5[0xc] = plVar7;
    if (lVar6 != 0) {
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
    if (plVar7 != (long *)0x0) {
      plVar1 = plVar7 + 1;
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
        (**(code **)(*plVar7 + 0x10))(plVar7);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR___ZNSt3__119__shared_weak_count14__release_weakEv_110346648)(plVar7);
        return;
      }
    }
  }
  return;
}



/* Entry: 10a5d13e0; end: 10a5d15c7;  */

void FUN_10a5d13e0(long *param_1,long *param_2,undefined8 param_3,undefined8 param_4)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  long lStack_80;
  long *plStack_78;
  long lStack_70;
  long *plStack_68;
  long lStack_60;
  long *plStack_58;
  undefined1 auStack_50 [8];
  long *plStack_48;
  
  FUN_10a5d17b0(param_3,param_4);
  lStack_60 = *param_2;
  plStack_58 = (long *)param_2[1];
  lStack_70 = lStack_60;
  plStack_68 = plStack_58;
  if (plStack_58 != (long *)0x0) {
    plVar1 = plStack_58 + 1;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = *plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    plVar1 = plStack_58 + 2;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = *plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = *plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_58);
  }
  FUN_10a05b208(auStack_50,param_3,&lStack_60);
  FUN_10a05b04c(param_1,auStack_50);
  if (plStack_48 != (long *)0x0) {
    plVar1 = plStack_48 + 1;
    do {
      lVar5 = *plVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = lVar5 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar5 == 0) {
      (**(code **)(*plStack_48 + 0x10))(plStack_48);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_48);
    }
  }
  if (plStack_58 != (long *)0x0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  plVar1 = plStack_68;
  if (plStack_68 != (long *)0x0) {
    plVar2 = plStack_68 + 1;
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
      (**(code **)(*plStack_68 + 0x10))(plStack_68);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar1);
    }
  }
  lVar5 = *param_2;
  if ((lVar5 != 0) && (lStack_80 = *param_1, lStack_80 != 0)) {
    plStack_78 = (long *)param_1[1];
    if (plStack_78 != (long *)0x0) {
      plVar1 = plStack_78 + 1;
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar4) {
          *plVar1 = *plVar1 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    FUN_10aa88c30(lVar5,&lStack_80);
    plVar1 = plStack_78;
    if (plStack_78 != (long *)0x0) {
      plVar2 = plStack_78 + 1;
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
        (**(code **)(*plStack_78 + 0x10))(plStack_78);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar1);
      }
    }
  }
  return;
}



/* Entry: 10a5d15c8; end: 10a5d17af;  */

/* WARNING: Removing unreachable block (ram,0x00010a5d16dc) */
/* WARNING: Removing unreachable block (ram,0x00010a5d16e0) */
/* WARNING: Removing unreachable block (ram,0x00010a5d16e8) */
/* WARNING: Removing unreachable block (ram,0x00010a5d16f0) */
/* WARNING: Removing unreachable block (ram,0x00010a5d16f4) */

undefined *** FUN_10a5d15c8(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  bool bVar2;
  undefined ***pppuVar3;
  undefined ***pppuVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  undefined *puVar7;
  undefined **ppuVar8;
  undefined1 uStack_81;
  undefined8 uStack_80;
  undefined ***pppuStack_78;
  undefined1 uStack_69;
  undefined *puStack_68;
  undefined **ppuStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar5 = &uStack_81;
  FUN_10a5d181c(&puStack_68,&uStack_69,puVar5,param_2,param_3);
  FUN_10a05b04c(&uStack_80,&puStack_68);
  if (ppuStack_60 != (undefined **)0x0) {
    ppuVar8 = ppuStack_60 + 1;
    do {
      puVar7 = *ppuVar8;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(ppuVar8,0x10);
      if (bVar2) {
        *ppuVar8 = puVar7 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (puVar7 == (undefined *)0x0) {
      (**(code **)(*ppuStack_60 + 0x10))(ppuStack_60);
      __ZNSt3__119__shared_weak_count14__release_weakEv(ppuStack_60);
    }
  }
  if (pppuStack_78 == (undefined ***)0x0) {
    *param_1 = uStack_80;
    param_1[1] = 0;
  }
  else {
    pppuVar3 = pppuStack_78 + 1;
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(pppuVar3,0x10);
      if (bVar2) {
        *pppuVar3 = (undefined **)((long)*pppuVar3 + 1);
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    *param_1 = uStack_80;
    param_1[1] = pppuStack_78;
    if (pppuStack_78 != (undefined ***)0x0) {
      pppuVar3 = pppuStack_78 + 1;
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(pppuVar3,0x10);
        if (bVar2) {
          *pppuVar3 = (undefined **)((long)*pppuVar3 + 1);
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
  }
  pppuVar3 = &ppuStack_60;
  param_1[2] = FUN_10a5d18f8;
  param_1[3] = &PTR_DAT_110bf8050;
  param_1[4] = uStack_80;
  param_1[5] = pppuStack_78;
  uStack_50 = 0;
  uStack_58 = 0;
  puStack_68 = &UNK_1053a6a3c;
  ppuStack_60 = &PTR_DAT_110ae9180;
  FUN_10a044790(&puStack_68);
  (*(code *)*ppuStack_60)();
  if (pppuStack_78 != (undefined ***)0x0) {
    pppuVar4 = pppuStack_78 + 1;
    do {
      ppuVar8 = *pppuVar4;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(pppuVar4,0x10);
      if (bVar2) {
        *pppuVar4 = (undefined **)((long)ppuVar8 + -1);
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (ppuVar8 == (undefined **)0x0) {
      (*(code *)(*pppuStack_78)[2])(pppuStack_78);
      __ZNSt3__119__shared_weak_count14__release_weakEv();
      pppuVar3 = pppuStack_78;
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return pppuVar3;
  }
  ___stack_chk_fail();
  func_0x00010a05248c(&puStack_68);
  __Unwind_Resume();
  pppuVar4 = (undefined ***)0x2a8;
  puVar6 = puVar5;
  __Znwm(0x2a8);
  ppuVar8 = *pppuVar3;
  pppuVar3 = pppuVar4;
  func_0x00010a0fda30();
  FUN_10ab6a888(pppuVar4,ppuVar8,puVar5,pppuVar3,puVar6);
  return pppuVar4;
}



/* Entry: 10a5d17b0; end: 10a5d181b;  */

undefined8 FUN_10a5d17b0(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar1 = 0x2a8;
  uVar3 = param_2;
  __Znwm(0x2a8);
  uVar4 = *param_1;
  uVar2 = uVar1;
  func_0x00010a0fda30();
  FUN_10ab6a888(uVar1,uVar4,param_2,uVar2,uVar3);
  return uVar1;
}



/* Entry: 10a5d181c; end: 10a5d1893;  */

void FUN_10a5d181c(long *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  
  lVar5 = 0x2c0;
  __Znwm();
  FUN_10a5d1894();
  *param_1 = lVar5 + 0x18;
  param_1[1] = lVar5;
  if (((long *)(lVar5 + 0x40) != (long *)0x0) &&
     ((lVar4 = *(long *)(lVar5 + 0x48), lVar4 == 0 || (*(long *)(lVar4 + 8) == -1)))) {
    plVar6 = (long *)param_1[1];
    if (plVar6 != (long *)0x0) {
      plVar1 = plVar6 + 1;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = *plVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      plVar1 = plVar6 + 2;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = *plVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      lVar4 = *(long *)(lVar5 + 0x48);
    }
    *(long *)(lVar5 + 0x40) = lVar5 + 0x18;
    *(long **)(lVar5 + 0x48) = plVar6;
    if (lVar4 != 0) {
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
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
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR___ZNSt3__119__shared_weak_count14__release_weakEv_110346648)(plVar6);
        return;
      }
    }
  }
  return;
}



/* Entry: 10a5d1894; end: 10a5d18f7;  */

undefined8 *
FUN_10a5d1894(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_DAT_110b9fda0;
  puVar1 = param_1;
  func_0x00010a0fda30();
  FUN_10ab6a888(param_1 + 3,0,param_4,puVar1,param_2);
  return param_1;
}



/* Entry: 10a5d18f8; end: 10a5d192f;  */

void FUN_10a5d18f8(long param_1)

{
  ushort uVar1;
  long lVar2;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  lVar2 = *(long *)(param_1 + 0x10);
  if (lVar2 != 0) {
    uVar1 = *(ushort *)(lVar2 + 0x209);
    if ((uVar1 & 0x7f) != 0) {
      *(ushort *)(lVar2 + 0x209) = uVar1 & 0xff00 | uVar1 - 1 & 0x7f;
      uStack_28 = 0;
      uStack_30 = 0;
      uStack_18 = 0;
      uStack_20 = 0;
      uStack_48 = 0;
      uStack_50 = 0;
      uStack_38 = 0;
      uStack_40 = 0;
      uStack_58 = 0;
      uStack_60 = 0;
      *(undefined8 *)(lVar2 + 0x218) = 0;
      FUN_10a1cc408(lVar2 + 0x220,(ulong)&uStack_60 | 8);
    }
    return;
  }
  return;
}



/* Entry: 10a5d1930; end: 10a5d1a63;  */

undefined8 FUN_10a5d1930(long param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  
  plVar3 = (long *)(param_1 + 8);
  plVar4 = (long *)*plVar3;
  if (plVar4 == (long *)0x0) {
    return 0;
  }
  plVar5 = plVar3;
  do {
    lVar1 = 8;
    if (*(ulong *)(param_2 + 8) <= (ulong)plVar4[5]) {
      lVar1 = 0;
      plVar5 = plVar4;
    }
    plVar4 = *(long **)((long)plVar4 + lVar1);
  } while (plVar4 != (long *)0x0);
  if ((plVar5 == plVar3) || (*(ulong *)(param_2 + 8) < (ulong)plVar5[5])) {
    uVar2 = 0;
  }
  else {
    func_0x00010a5d19b8(param_1,plVar5);
    FUN_10a0844ac(plVar5 + 4);
    __ZdlPv(plVar5);
    uVar2 = 1;
  }
  return uVar2;
}



/* Entry: 10a5d1a64; end: 10a5d1acb;  */

void FUN_10a5d1a64(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  
  *param_1 = &PTR_DAT_110bf8068;
  uVar1 = *(undefined8 *)(param_2 + 8);
  param_1[2] = *(undefined8 *)(param_2 + 0x10);
  param_1[1] = uVar1;
  param_1[3] = *(undefined8 *)(param_2 + 0x18);
  *(undefined8 *)(param_2 + 0x10) = 0;
  *(undefined8 *)(param_2 + 0x18) = 0;
  uVar1 = *(undefined8 *)(param_2 + 0x20);
  param_1[5] = *(undefined8 *)(param_2 + 0x28);
  param_1[4] = uVar1;
  *(undefined8 *)(param_2 + 0x20) = 0;
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 10a5d1acc; end: 10a5d1adf;  */

long * FUN_10a5d1acc(void)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  
  plVar2 = (long *)&DAT_10f62a4d8;
  FUN_109ffde64();
  plVar4 = (long *)plVar2[1];
  plVar3 = (long *)*plVar2;
  for (plVar1 = plVar3; plVar1 != plVar4; plVar1 = plVar1 + 1) {
    if (*plVar1 != 0) {
      *(undefined8 *)(*plVar1 + 0x18) = 0;
    }
  }
  if (plVar3 != (long *)0x0) {
    plVar2[1] = (long)plVar3;
    __ZdlPv();
  }
  return plVar2;
}



/* Entry: 10a5d1ae0; end: 10a5d1b37;  */

long * FUN_10a5d1ae0(long *param_1)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  
  plVar3 = (long *)param_1[1];
  plVar2 = (long *)*param_1;
  for (plVar1 = plVar2; plVar1 != plVar3; plVar1 = plVar1 + 1) {
    if (*plVar1 != 0) {
      *(undefined8 *)(*plVar1 + 0x18) = 0;
    }
  }
  if (plVar2 != (long *)0x0) {
    param_1[1] = (long)plVar2;
    __ZdlPv();
  }
  return param_1;
}


