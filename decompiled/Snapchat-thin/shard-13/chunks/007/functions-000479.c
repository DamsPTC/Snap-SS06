/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10ab5bc40; end: 10ab5bc5f;  */

void FUN_10ab5bc40(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c4b098;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10ab5bc60; end: 10ab5bc6f;  */

void FUN_10ab5bc60(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010ab5bc68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 10ab5bc70; end: 10ab5be5f;  */

void FUN_10ab5bc70(code **param_1,code **param_2)

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
      pcStack_78 = FUN_10ab5c090;
      ppuStack_70 = &PTR_FUN_110c4b0d8;
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
      FUN_10a4634ec();
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
    FUN_10ab5be60();
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
  FUN_10ab5c108(ppcVar6 + 2);
  func_0x00010a004dac(&pcStack_98);
  __Unwind_Resume();
  func_0x000109884c0c(&ppuStack_100,pppuVar7 + 1,*pppuVar7);
  func_0x000109884820(&puStack_128,&ppuStack_100,*pppuVar7);
  if (ppuStack_100 != (undefined8 **)0x0) {
    (*(code *)**ppuStack_100)();
  }
  (**(code **)(**pppuVar7 + 0x30))(&puStack_130);
  ppuVar11 = *pppuVar7;
  FUN_10ab5bff0(aiStack_110,ppuVar11,*ppcVar10,ppcVar10[1]);
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



/* Entry: 10ab5be60; end: 10ab5bfef;  */

void FUN_10ab5be60(undefined8 *param_1,undefined8 *param_2)

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
  FUN_10ab5bff0(aiStack_70,plVar1,*param_2,param_2[1]);
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



/* Entry: 10ab5bff0; end: 10ab5c08f;  */

void FUN_10ab5bff0(undefined8 param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  undefined **ppuStack_38;
  undefined8 uStack_30;
  long *plStack_28;
  
  if (param_4 != (long *)0x0) {
    plVar1 = param_4 + 1;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = *plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  ppuStack_38 = &PTR_DAT_110c4a6f8;
  uStack_30 = param_3;
  plStack_28 = param_4;
  func_0x000109899de4(param_1,param_2,&uStack_30,&ppuStack_38,0,0);
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



/* Entry: 10ab5c090; end: 10ab5c09f;  */

void FUN_10ab5c090(long param_1)

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
  FUN_10ab5bff0(aiStack_70,plVar2,*(undefined8 *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x28));
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



/* Entry: 10ab5c0a0; end: 10ab5c0c7;  */

long FUN_10ab5c0a0(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  FUN_10ab5c108(param_1 + 0x18);
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



/* Entry: 10ab5c0c8; end: 10ab5c107;  */

void FUN_10ab5c0c8(undefined8 *param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined8 uVar5;
  
  *param_1 = &PTR_FUN_110c4b0d8;
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



/* Entry: 10ab5c108; end: 10ab5c15f;  */

long FUN_10ab5c108(long param_1)

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



/* Entry: 10ab5c160; end: 10ab5c18b;  */

undefined8 * FUN_10ab5c160(long param_1)

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



/* Entry: 10ab5c18c; end: 10ab5c51b;  */

void FUN_10ab5c18c(undefined ******param_1,undefined ******param_2)

{
  undefined ******ppppppuVar1;
  undefined4 uVar2;
  byte bVar3;
  char cVar4;
  bool bVar5;
  int iVar6;
  undefined ******ppppppuVar7;
  undefined ******ppppppuVar8;
  undefined ****ppppuVar9;
  undefined ****ppppuVar10;
  undefined ******ppppppuVar11;
  undefined ******unaff_x20;
  undefined *****pppppuVar12;
  undefined *****unaff_x22;
  undefined *****pppppuVar13;
  undefined8 *puStack_160;
  undefined **ppuStack_158;
  int aiStack_150 [2];
  undefined8 *puStack_148;
  undefined *puStack_140;
  undefined8 *puStack_138;
  undefined ****ppppuStack_130;
  undefined ****ppppuStack_128;
  undefined1 *puStack_120;
  undefined ***pppuStack_118;
  undefined **ppuStack_110;
  undefined8 uStack_108;
  undefined ****ppppuStack_100;
  undefined ****ppppuStack_f8;
  undefined *****pppppuStack_f0;
  undefined *****pppppuStack_e8;
  undefined1 *puStack_e0;
  code *pcStack_d8;
  undefined *****pppppuStack_d0;
  undefined *****pppppuStack_c8;
  undefined1 uStack_ba;
  undefined1 uStack_b9;
  undefined ****ppppuStack_b8;
  undefined *****pppppuStack_b0;
  undefined *****pppppuStack_a8;
  undefined *****pppppuStack_a0;
  undefined ****ppppuStack_98;
  undefined *****pppppuStack_90;
  undefined ****ppppuStack_88;
  undefined ****ppppuStack_80;
  undefined *****pppppuStack_78;
  undefined *****pppppuStack_70;
  long lStack_58;
  
  ppppppuVar7 = &pppppuStack_d0;
  ppppppuVar8 = &pppppuStack_d0;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppppppuVar11 = (undefined ******)param_2[2];
  pppppuVar12 = *param_1;
  if (pppppuVar12 == (undefined *****)0x0) {
    pppppuStack_d0 = (undefined *****)0x0;
    pppppuStack_c8 = (undefined *****)0x0;
    pppppuVar12 = (undefined *****)0x0;
  }
  else {
    ppppuStack_98 = (undefined ****)0x0;
    pppppuStack_90 = (undefined *****)0x0;
    ppppuVar9 = pppppuVar12[3];
    if (ppppuVar9 != (undefined ****)0x0) {
      uStack_ba = *(undefined1 *)(ppppuVar9 + 0x13);
      param_2 = (undefined ******)(ppppuVar9 + 3);
      FUN_10a8a7c1c(&ppppuStack_b8,&uStack_b9,param_2,ppppuVar9 + 6,ppppuVar9 + 0xf,&uStack_ba);
      ppppuStack_98 = ppppuStack_b8;
      pppppuStack_90 = pppppuStack_b0;
    }
    unaff_x20 = (undefined ******)pppppuStack_90;
    ppppuVar9 = ppppuStack_98;
    pppppuVar13 = (undefined *****)pppppuVar12[5];
    uVar2 = *(undefined4 *)(pppppuVar12 + 6);
    unaff_x22 = (undefined *****)pppppuVar12[7];
    bVar3 = *(byte *)(pppppuVar12 + 8);
    pppppuVar12 = (undefined *****)(ulong)bVar3;
    param_1 = (undefined ******)0x60;
    __Znwm();
    param_1[1] = (undefined *****)0x0;
    param_1[2] = (undefined *****)0x0;
    *param_1 = (undefined *****)&PTR_DAT_110c4b030;
    pppppuStack_d0 = (undefined *****)(param_1 + 3);
    *pppppuStack_d0 = (undefined ****)&PTR_DAT_110c49520;
    param_1[4] = (undefined *****)0x0;
    param_1[5] = (undefined *****)0x0;
    param_1[6] = (undefined *****)ppppuVar9;
    param_1[7] = (undefined *****)unaff_x20;
    pppppuStack_c8 = (undefined *****)param_1;
    if (unaff_x20 == (undefined ******)0x0) {
      param_1[8] = pppppuVar13;
      *(undefined4 *)(param_1 + 9) = uVar2;
      param_1[10] = unaff_x22;
      *(byte *)(param_1 + 0xb) = bVar3;
    }
    else {
      ppppppuVar1 = unaff_x20 + 1;
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(ppppppuVar1,0x10);
        if (bVar5) {
          *ppppppuVar1 = (undefined *****)((long)*ppppppuVar1 + 1);
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      param_1[8] = pppppuVar13;
      *(undefined4 *)(param_1 + 9) = uVar2;
      param_1[10] = unaff_x22;
      *(byte *)(param_1 + 0xb) = bVar3;
      do {
        pppppuVar13 = *ppppppuVar1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(ppppppuVar1,0x10);
        if (bVar5) {
          *ppppppuVar1 = (undefined *****)((long)pppppuVar13 + -1);
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (pppppuVar13 == (undefined *****)0x0) {
        (*(code *)(*unaff_x20)[2])(unaff_x20);
        param_1 = unaff_x20;
        __ZNSt3__119__shared_weak_count14__release_weakEv();
      }
    }
  }
  if (ppppppuVar11 == (undefined ******)0x0 || *(char *)(ppppppuVar11 + 8) != '\x02') {
    ppppppuVar8 = param_2;
    if ((ppppppuVar11 != (undefined ******)0x0) && (*(char *)(ppppppuVar11 + 8) == '\x01')) {
      (*(code *)*ppppppuVar11)();
      param_1 = ppppppuVar7;
      ppppppuVar8 = ppppppuVar11;
    }
  }
  else {
    unaff_x20 = ppppppuVar11;
    FUN_10a688b40();
    ppppppuVar7 = (undefined ******)pppppuStack_c8;
    if (unaff_x20 == (undefined ******)0x0) {
      ppppppuVar8 = (undefined ******)0x0;
      param_1 = (undefined ******)0x0;
      if (param_2 != (undefined ******)0x0) {
        ppppuStack_80 = (undefined ****)ppppppuVar11[1];
        ppppuStack_88 = (undefined ****)*ppppppuVar11;
        if (ppppppuVar11[1] != (undefined *****)0x0) {
          pppppuVar12 = ppppppuVar11[1] + 1;
          do {
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(pppppuVar12,0x10);
            if (bVar5) {
              *pppppuVar12 = (undefined ****)((long)*pppppuVar12 + 1);
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
        }
        pppppuStack_a8 = pppppuStack_d0;
        pppppuStack_a0 = pppppuStack_c8;
        if ((undefined ******)pppppuStack_c8 != (undefined ******)0x0) {
          ppppppuVar8 = (undefined ******)(pppppuStack_c8 + 1);
          do {
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(ppppppuVar8,0x10);
            if (bVar5) {
              *ppppppuVar8 = (undefined *****)((long)*ppppppuVar8 + 1);
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
        }
        ppppuStack_98 = (undefined ****)FUN_10ab5c720;
        pppppuStack_90 = (undefined *****)&PTR_FUN_110c4b108;
        ppppuStack_b8 = (undefined ****)0x0;
        pppppuStack_b0 = (undefined *****)0x0;
        pppppuStack_78 = pppppuStack_d0;
        pppppuStack_70 = pppppuStack_c8;
        if ((undefined ******)pppppuStack_c8 != (undefined ******)0x0) {
          ppppppuVar8 = (undefined ******)(pppppuStack_c8 + 1);
          do {
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(ppppppuVar8,0x10);
            if (bVar5) {
              *ppppppuVar8 = (undefined *****)((long)*ppppppuVar8 + 1);
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
        }
        unaff_x20 = (undefined ******)&ppppuStack_b8;
        pppppuVar12 = &ppppuStack_98;
        ppppppuVar8 = (undefined ******)&ppppuStack_98;
        FUN_10a4634ec();
        param_1 = &pppppuStack_90;
        (*(code *)*pppppuStack_90)();
        if (ppppppuVar7 != (undefined ******)0x0) {
          ppppppuVar11 = ppppppuVar7 + 1;
          do {
            pppppuVar13 = *ppppppuVar11;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(ppppppuVar11,0x10);
            if (bVar5) {
              *ppppppuVar11 = (undefined *****)((long)pppppuVar13 + -1);
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (pppppuVar13 == (undefined *****)0x0) {
            (*(code *)(*ppppppuVar7)[2])(ppppppuVar7);
            __ZNSt3__119__shared_weak_count14__release_weakEv();
            param_1 = ppppppuVar7;
          }
        }
        ppppppuVar7 = (undefined ******)pppppuStack_b0;
        if ((undefined ******)pppppuStack_b0 != (undefined ******)0x0) {
          ppppppuVar11 = (undefined ******)(pppppuStack_b0 + 1);
          do {
            pppppuVar13 = *ppppppuVar11;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(ppppppuVar11,0x10);
            if (bVar5) {
              *ppppppuVar11 = (undefined *****)((long)pppppuVar13 + -1);
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (pppppuVar13 == (undefined *****)0x0) {
            (*(code *)(*pppppuStack_b0)[2])(pppppuStack_b0);
            __ZNSt3__119__shared_weak_count14__release_weakEv();
            param_1 = ppppppuVar7;
          }
        }
      }
    }
    else {
      *unaff_x20 = (undefined *****)
                   CONCAT44((int)((ulong)*unaff_x20 >> 0x20) + 1,(int)*unaff_x20 + 1);
      param_1 = (undefined ******)*ppppppuVar11;
      FUN_10ab5c51c();
      iVar6 = *(int *)((long)unaff_x20 + 4) + -1;
      *(int *)((long)unaff_x20 + 4) = iVar6;
      if (iVar6 == 0) {
        *(undefined4 *)unaff_x20 = 0;
      }
    }
  }
  ppppppuVar7 = (undefined ******)pppppuStack_c8;
  pppppuStack_e8 = (undefined *****)param_1;
  if ((undefined ******)pppppuStack_c8 != (undefined ******)0x0) {
    ppppppuVar11 = (undefined ******)(pppppuStack_c8 + 1);
    do {
      pppppuVar13 = *ppppppuVar11;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(ppppppuVar11,0x10);
      if (bVar5) {
        *ppppppuVar11 = (undefined *****)((long)pppppuVar13 + -1);
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (pppppuVar13 == (undefined *****)0x0) {
      (*(code *)(*pppppuStack_c8)[2])(pppppuStack_c8);
      __ZNSt3__119__shared_weak_count14__release_weakEv();
      pppppuStack_e8 = (undefined *****)ppppppuVar7;
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  (*(code *)*pppppuStack_90)(pppppuVar12 + 1);
  FUN_10ab5b52c(unaff_x20 + 2);
  func_0x00010a004dac(&ppppuStack_b8);
  FUN_10ab5b52c(&pppppuStack_d0);
  ppppppuVar7 = (undefined ******)pppppuStack_e8;
  __Unwind_Resume();
  pcStack_d8 = FUN_10ab5c51c;
  ppppuStack_100 = (undefined ****)unaff_x22;
  ppppuStack_f8 = (undefined ****)pppppuVar12;
  pppppuStack_f0 = (undefined *****)unaff_x20;
  puStack_e0 = &stack0xfffffffffffffff0;
  func_0x000109884c0c(&ppppuStack_130,ppppppuVar7 + 1,*ppppppuVar7);
  func_0x000109884820(&ppuStack_158,&ppppuStack_130,*ppppppuVar7);
  if (ppppuStack_130 != (undefined ****)0x0) {
    (*(code *)**ppppuStack_130)();
  }
  (*(code *)(**ppppppuVar7)[6])(&puStack_160);
  pppppuVar12 = *ppppppuVar7;
  ppppuStack_128 = (undefined ****)ppppppuVar8[1];
  ppppuStack_130 = (undefined ****)*ppppppuVar8;
  if (ppppppuVar8[1] != (undefined *****)0x0) {
    pppppuVar13 = ppppppuVar8[1] + 1;
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(pppppuVar13,0x10);
      if (bVar5) {
        *pppppuVar13 = (undefined ****)((long)*pppppuVar13 + 1);
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  ppuStack_110 = &PTR_DAT_110c4a710;
  func_0x000109899de4(&puStack_140,pppppuVar12,&ppppuStack_130,&ppuStack_110,0,0);
  ppppuVar9 = ppppuStack_128;
  if ((undefined *****)ppppuStack_128 != (undefined *****)0x0) {
    pppppuVar13 = (undefined *****)(ppppuStack_128 + 1);
    do {
      ppppuVar10 = *pppppuVar13;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(pppppuVar13,0x10);
      if (bVar5) {
        *pppppuVar13 = (undefined ****)((long)ppppuVar10 + -1);
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (ppppuVar10 == (undefined ****)0x0) {
      (*(code *)(*ppppuStack_128)[2])(ppppuStack_128);
      __ZNSt3__119__shared_weak_count14__release_weakEv(ppppuVar9);
    }
  }
  uStack_108 = 1;
  ppuStack_110 = &puStack_140;
  (*(code *)(*pppppuVar12)[0xb])(pppppuVar12);
  ppppuStack_130 = (undefined ****)&ppuStack_158;
  ppppuStack_128 = (undefined ****)pppppuVar12;
  puStack_120 = (undefined1 *)&puStack_160;
  pppuStack_118 = &ppuStack_110;
  func_0x0001098960c0(aiStack_150);
  if ((3 < aiStack_150[0]) && (puStack_148 != (undefined8 *)0x0)) {
    (**(code **)*puStack_148)();
  }
  if ((3 < (int)puStack_140) && (puStack_138 != (undefined8 *)0x0)) {
    (**(code **)*puStack_138)();
  }
  if (puStack_160 != (undefined8 *)0x0) {
    (**(code **)*puStack_160)();
  }
  if ((undefined ***)ppuStack_158 != (undefined ***)0x0) {
    (**(code **)*ppuStack_158)();
  }
  return;
}



/* Entry: 10ab5c51c; end: 10ab5c71f;  */

void FUN_10ab5c51c(undefined8 *param_1,undefined8 *param_2)

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
  ppuStack_40 = &PTR_DAT_110c4a710;
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



/* Entry: 10ab5c720; end: 10ab5c72f;  */

void FUN_10ab5c720(long param_1)

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
  ppuStack_40 = &PTR_DAT_110c4a710;
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



/* Entry: 10ab5c730; end: 10ab5c757;  */

long FUN_10ab5c730(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  FUN_10ab5b52c(param_1 + 0x18);
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



/* Entry: 10ab5c758; end: 10ab5c807;  */

void FUN_10ab5c758(undefined8 *param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined8 uVar5;
  
  *param_1 = &PTR_FUN_110c4b108;
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



/* Entry: 10ab5c808; end: 10ab5d07f;  */

void FUN_10ab5c808(undefined8 *param_1,long param_2)

{
  ulong *puVar1;
  long *plVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  byte bVar7;
  byte bVar8;
  char cVar9;
  bool bVar10;
  code *pcVar11;
  long *plVar12;
  undefined ***pppuVar13;
  undefined8 *puVar14;
  long *plVar15;
  undefined8 in_x6;
  undefined8 in_x7;
  ulong uVar16;
  long lVar17;
  ulong uVar18;
  long *plVar19;
  undefined8 *puVar20;
  long *plVar21;
  long lVar22;
  ulong *puVar23;
  long *plStack_218;
  long *plStack_1d8;
  long *plStack_1d0;
  byte bStack_1c8;
  long *plStack_1c0;
  long *plStack_1b8;
  long *plStack_1b0;
  undefined **ppuStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  ulong uStack_190;
  undefined8 uStack_188;
  undefined4 uStack_180;
  undefined4 uStack_17c;
  undefined4 uStack_178;
  undefined8 uStack_174;
  long lStack_168;
  long *plStack_160;
  long *plStack_158;
  long *plStack_150;
  long *plStack_148;
  long *plStack_140;
  long **pplStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  long lStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  long lStack_108;
  int iStack_100;
  long *plStack_f8;
  undefined8 uStack_f0;
  undefined1 auStack_e8 [56];
  undefined8 uStack_b0;
  undefined4 uStack_a8;
  undefined1 auStack_a0 [40];
  long lStack_78;
  
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plStack_218 = (long *)0x0;
  plVar12 = *(long **)(param_2 + 0x20);
  if (((plVar12 == (long *)0x0) ||
      (__ZNSt3__119__shared_weak_count4lockEv(), plStack_218 = plVar12, plVar12 == (long *)0x0)) ||
     (*(long *)(param_2 + 0x18) == 0)) goto LAB_10ab5cf54;
  lVar22 = *(long *)(param_2 + 0x10);
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
  plStack_f8 = (long *)param_1[7];
  uStack_f0 = param_1[8];
  param_1[7] = 0;
  (**(code **)(param_1[9] + 0x10))(auStack_e8,param_1 + 9);
  uStack_b0 = param_1[0x10];
  uStack_a8 = *(undefined4 *)(param_1 + 0x11);
  FUN_10a0424c4(auStack_a0,param_1 + 0x12);
  lVar17 = *(long *)(lVar22 + 0x18);
  plVar12 = *(long **)(lVar17 + 0x80);
  if ((plVar12 != (long *)0x0) &&
     (__ZNSt3__119__shared_weak_count4lockEv(), plStack_160 = plVar12, plVar12 != (long *)0x0)) {
    lVar17 = *(long *)(lVar17 + 0x78);
    lStack_168 = lVar17;
    if (lVar17 != 0) {
      if (iStack_100 - 200U < 100) {
        ppuStack_1a8 = &PTR_FUN_110c77ce8;
        uStack_1a0 = 0;
        uStack_190 = 0;
        uStack_198 = 0;
        uStack_180 = 0;
        uStack_188 = 0;
        uStack_174 = 0;
        uStack_17c = 0;
        uStack_178 = 0;
        plStack_150 = (long *)(long)(int)uStack_b0;
        plStack_158 = plStack_f8;
        pppuVar13 = &ppuStack_1a8;
        func_0x000107c30348(pppuVar13,&plStack_158);
        if (((ulong)pppuVar13 & 1) == 0) {
          if ((bRam000000011330a9e8 & 1) != 0) {
            func_0x00010ae06f08(0,1,&UNK_10f69231b,&UNK_10f693551,0xc3,&UNK_10f693506);
          }
          plStack_158 = (long *)CONCAT44(plStack_158._4_4_,1);
          FUN_10ab403b4(*(undefined8 *)(lVar22 + 0x30),&plStack_158);
          FUN_10ae0a0c4(&ppuStack_1a8);
        }
        else {
          plStack_1c0 = (long *)0x0;
          plStack_1b8 = (long *)0x0;
          plStack_1b0 = (long *)0x0;
          plStack_1d8 = (long *)((ulong)plStack_1d8 & 0xffffffffffffff00);
          bStack_1c8 = 0;
          lVar4 = *(long *)(lVar17 + 0x108);
          plVar12 = *(long **)(lVar17 + 0x110);
          if (plVar12 != (long *)0x0) {
            plVar6 = plVar12 + 1;
            do {
              cVar9 = '\x01';
              bVar10 = (bool)ExclusiveMonitorPass(plVar6,0x10);
              if (bVar10) {
                *plVar6 = *plVar6 + 1;
                cVar9 = ExclusiveMonitorsStatus();
              }
            } while (cVar9 != '\0');
          }
          if ((int)uStack_188 < 1) {
            uVar16 = 0;
          }
          else {
            FUN_10ab5d080(&plStack_1c0);
            puVar23 = &uStack_190;
            if ((uStack_190 & 1) != 0) {
              puVar23 = (ulong *)(uStack_190 + 7);
            }
            uVar16 = (ulong)(int)uStack_188;
            if ((int)uStack_188 != 0) {
              puVar1 = puVar23 + uVar16;
              do {
                uVar18 = *puVar23;
                puVar20 = (undefined8 *)(*(ulong *)(uVar18 + 0x10) & 0xfffffffffffffffc);
                bVar7 = *(byte *)((long)puVar20 + 0x17);
                uVar16 = puVar20[1];
                if (-1 < (char)bVar7) {
                  uVar16 = (ulong)bVar7;
                }
                bVar8 = *(byte *)(lVar4 + 0x2f);
                uVar3 = *(ulong *)(lVar4 + 0x20);
                if (-1 < (char)bVar8) {
                  uVar3 = (ulong)bVar8;
                }
                if (uVar16 == uVar3) {
                  puVar14 = (undefined8 *)*puVar20;
                  if (-1 < (char)bVar7) {
                    puVar14 = puVar20;
                  }
                  plVar6 = (long *)*(long *)(lVar4 + 0x18);
                  if (-1 < (char)bVar8) {
                    plVar6 = (long *)(lVar4 + 0x18);
                  }
                  _memcmp(puVar14,plVar6);
                  if ((int)puVar14 != 0) goto LAB_10ab5ca1c;
                  FUN_10ab5d580(&plStack_158,lVar4,plVar12,uVar18);
                  plVar15 = plStack_150;
                  plStack_1d8 = plStack_158;
                  plVar6 = plStack_1d0;
                  if (bStack_1c8 == 1) {
                    plStack_158 = (long *)0x0;
                    plStack_150 = (long *)0x0;
                    plStack_1d0 = plVar15;
                    if (plVar6 != (long *)0x0) {
                      plVar15 = plVar6 + 1;
                      do {
                        lVar17 = *plVar15;
                        cVar9 = '\x01';
                        bVar10 = (bool)ExclusiveMonitorPass(plVar15,0x10);
                        if (bVar10) {
                          *plVar15 = lVar17 + -1;
                          cVar9 = ExclusiveMonitorsStatus();
                        }
                      } while (cVar9 != '\0');
                      if (lVar17 == 0) {
                        (**(code **)(*plVar6 + 0x10))(plVar6);
                        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
                      }
                    }
                  }
                  else {
                    plStack_1d0 = plStack_150;
                    plStack_158 = (long *)0x0;
                    plStack_150 = (long *)0x0;
                    bStack_1c8 = 1;
                  }
                  plVar6 = plStack_150;
                  if (plStack_150 != (long *)0x0) {
                    plVar15 = plStack_150 + 1;
                    do {
                      lVar17 = *plVar15;
                      cVar9 = '\x01';
                      bVar10 = (bool)ExclusiveMonitorPass(plVar15,0x10);
                      if (bVar10) {
                        *plVar15 = lVar17 + -1;
                        cVar9 = ExclusiveMonitorsStatus();
                      }
                    } while (cVar9 != '\0');
                    if (lVar17 == 0) {
                      (**(code **)(*plStack_150 + 0x10))(plStack_150);
                      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
                    }
                  }
                  if ((bStack_1c8 & 1) == 0) {
                    FUN_10a04f808();
                    goto LAB_10ab5cfd4;
                  }
                  plStack_1d8[7] = *(long *)(uVar18 + 0x40);
                  *(undefined1 *)(plStack_1d8 + 8) = 1;
                }
                else {
LAB_10ab5ca1c:
                  lVar17 = lStack_168 + 0x118;
                  FUN_10ab5ee58();
                  if (lVar17 == 0) {
                    if ((bRam000000011330a9e8 & 1) != 0) {
                      func_0x00010ae06f08(0,1,&UNK_10f69231b,&UNK_10f693551,0xd8,&UNK_10f693690);
                    }
                  }
                  else {
                    lVar5 = *(long *)(lVar17 + 0x28);
                    plVar6 = *(long **)(lVar17 + 0x30);
                    if (plVar6 != (long *)0x0) {
                      plVar15 = plVar6 + 1;
                      do {
                        cVar9 = '\x01';
                        bVar10 = (bool)ExclusiveMonitorPass(plVar15,0x10);
                        if (bVar10) {
                          *plVar15 = *plVar15 + 1;
                          cVar9 = ExclusiveMonitorsStatus();
                        }
                      } while (cVar9 != '\0');
                    }
                    plVar15 = (long *)0x60;
                    __Znwm();
                    plVar21 = plVar15 + 1;
                    *plVar21 = 0;
                    plVar15[2] = 0;
                    *plVar15 = (long)&PTR_FUN_110c4b098;
                    if (plVar6 == (long *)0x0) {
                      plVar15[3] = (long)&PTR_FUN_110c494c8;
                      plVar15[4] = 0;
                      plVar15[5] = 0;
                      plVar15[6] = lVar5;
                      plVar15[7] = 0;
                      plVar15[8] = *(long *)(uVar18 + 0x48);
                      *(undefined4 *)(plVar15 + 9) = *(undefined4 *)(uVar18 + 0x50);
                      *(undefined1 *)(plVar15 + 10) = 0;
                      *(undefined1 *)(plVar15 + 0xb) = 0;
                    }
                    else {
                      plVar2 = plVar6 + 1;
                      do {
                        cVar9 = '\x01';
                        bVar10 = (bool)ExclusiveMonitorPass(plVar2,0x10);
                        if (bVar10) {
                          *plVar2 = *plVar2 + 1;
                          cVar9 = ExclusiveMonitorsStatus();
                        }
                      } while (cVar9 != '\0');
                      plVar15[3] = (long)&PTR_FUN_110c494c8;
                      plVar15[4] = 0;
                      plVar15[5] = 0;
                      plVar15[6] = lVar5;
                      plVar15[7] = (long)plVar6;
                      do {
                        cVar9 = '\x01';
                        bVar10 = (bool)ExclusiveMonitorPass(plVar2,0x10);
                        if (bVar10) {
                          *plVar2 = *plVar2 + 1;
                          cVar9 = ExclusiveMonitorsStatus();
                        }
                      } while (cVar9 != '\0');
                      plVar15[8] = *(long *)(uVar18 + 0x48);
                      *(undefined4 *)(plVar15 + 9) = *(undefined4 *)(uVar18 + 0x50);
                      *(undefined1 *)(plVar15 + 10) = 0;
                      *(undefined1 *)(plVar15 + 0xb) = 0;
                      do {
                        lVar17 = *plVar2;
                        cVar9 = '\x01';
                        bVar10 = (bool)ExclusiveMonitorPass(plVar2,0x10);
                        if (bVar10) {
                          *plVar2 = lVar17 + -1;
                          cVar9 = ExclusiveMonitorsStatus();
                        }
                      } while (cVar9 != '\0');
                      if (lVar17 == 0) {
                        (**(code **)(*plVar6 + 0x10))(plVar6);
                        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
                      }
                    }
                    if (plStack_1b8 < plStack_1b0) {
                      *plStack_1b8 = (long)(plVar15 + 3);
                      plStack_1b8[1] = (long)plVar15;
                      do {
                        cVar9 = '\x01';
                        bVar10 = (bool)ExclusiveMonitorPass(plVar21,0x10);
                        if (bVar10) {
                          *plVar21 = *plVar21 + 1;
                          cVar9 = ExclusiveMonitorsStatus();
                        }
                      } while (cVar9 != '\0');
                      plStack_1b8 = plStack_1b8 + 2;
                    }
                    else {
                      lVar17 = (long)plStack_1b8 - (long)plStack_1c0;
                      uVar16 = (lVar17 >> 4) + 1;
                      if (uVar16 >> 0x3c != 0) goto LAB_10ab5cfc8;
                      uVar18 = (long)plStack_1b0 - (long)plStack_1c0 >> 3;
                      if (uVar18 <= uVar16) {
                        uVar18 = uVar16;
                      }
                      if (0x7fffffffffffffef < (ulong)((long)plStack_1b0 - (long)plStack_1c0)) {
                        uVar18 = 0xfffffffffffffff;
                      }
                      pplStack_138 = &plStack_1c0;
                      FUN_10ab5d500();
                      plVar2 = (long *)(uVar18 + lVar17);
                      *plVar2 = (long)(plVar15 + 3);
                      plVar2[1] = (long)plVar15;
                      do {
                        cVar9 = '\x01';
                        bVar10 = (bool)ExclusiveMonitorPass(plVar21,0x10);
                        if (bVar10) {
                          *plVar21 = *plVar21 + 1;
                          cVar9 = ExclusiveMonitorsStatus();
                        }
                      } while (cVar9 != '\0');
                      plVar19 = (long *)((long)plVar2 - ((long)plStack_1b8 - (long)plStack_1c0));
                      _memcpy(plVar19);
                      plStack_148 = plStack_1c0;
                      plStack_140 = plStack_1b0;
                      plStack_158 = plStack_1c0;
                      plStack_150 = plStack_1c0;
                      plStack_1c0 = plVar19;
                      plStack_1b8 = plVar2 + 2;
                      plStack_1b0 = (long *)(uVar18 + (long)puVar20 * 0x10);
                      func_0x00010ab5d534(&plStack_158);
                      plStack_1b8 = plVar2 + 2;
                    }
                    do {
                      lVar17 = *plVar21;
                      cVar9 = '\x01';
                      bVar10 = (bool)ExclusiveMonitorPass(plVar21,0x10);
                      if (bVar10) {
                        *plVar21 = lVar17 + -1;
                        cVar9 = ExclusiveMonitorsStatus();
                      }
                    } while (cVar9 != '\0');
                    if (lVar17 == 0) {
                      (**(code **)(*plVar15 + 0x10))(plVar15);
                      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar15);
                    }
                    if (plVar6 != (long *)0x0) {
                      plVar15 = plVar6 + 1;
                      do {
                        lVar17 = *plVar15;
                        cVar9 = '\x01';
                        bVar10 = (bool)ExclusiveMonitorPass(plVar15,0x10);
                        if (bVar10) {
                          *plVar15 = lVar17 + -1;
                          cVar9 = ExclusiveMonitorsStatus();
                        }
                      } while (cVar9 != '\0');
                      if (lVar17 == 0) {
                        (**(code **)(*plVar6 + 0x10))(plVar6);
                        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
                      }
                    }
                  }
                }
                puVar23 = puVar23 + 1;
              } while (puVar23 != puVar1);
              uVar16 = (ulong)bStack_1c8;
            }
          }
          if ((plStack_1c0 == plStack_1b8) && ((uVar16 & 1) == 0)) {
            plStack_158 = (long *)CONCAT44(plStack_158._4_4_,1);
            FUN_10ab403b4(*(undefined8 *)(lVar22 + 0x30),&plStack_158);
          }
          else {
            FUN_10ab5d110(*(undefined8 *)(lVar22 + 0x20),&plStack_1c0,&plStack_1d8);
          }
          if (plVar12 != (long *)0x0) {
            plVar6 = plVar12 + 1;
            do {
              lVar17 = *plVar6;
              cVar9 = '\x01';
              bVar10 = (bool)ExclusiveMonitorPass(plVar6,0x10);
              if (bVar10) {
                *plVar6 = lVar17 + -1;
                cVar9 = ExclusiveMonitorsStatus();
              }
            } while (cVar9 != '\0');
            if (lVar17 == 0) {
              (**(code **)(*plVar12 + 0x10))(plVar12);
              __ZNSt3__119__shared_weak_count14__release_weakEv(plVar12);
            }
          }
          plVar12 = plStack_1d0;
          if ((bStack_1c8 == 1) && (plStack_1d0 != (long *)0x0)) {
            plVar6 = plStack_1d0 + 1;
            do {
              lVar17 = *plVar6;
              cVar9 = '\x01';
              bVar10 = (bool)ExclusiveMonitorPass(plVar6,0x10);
              if (bVar10) {
                *plVar6 = lVar17 + -1;
                cVar9 = ExclusiveMonitorsStatus();
              }
            } while (cVar9 != '\0');
            if (lVar17 == 0) {
              (**(code **)(*plStack_1d0 + 0x10))(plStack_1d0);
              __ZNSt3__119__shared_weak_count14__release_weakEv(plVar12);
            }
          }
          FUN_10ab5d9c0(&plStack_1c0);
          plVar12 = plStack_160;
          FUN_10ae0a0c4(&ppuStack_1a8);
          if (plVar12 == (long *)0x0) goto LAB_10ab5cf24;
        }
      }
      else {
        if ((bRam000000011330a9e8 & 1) != 0) {
          func_0x00010ae06f08(0,1,&UNK_10f69231b,&UNK_10f693551,0xbb,&UNK_10f693639,in_x6,in_x7,
                              iStack_100);
        }
        ppuStack_1a8 = (undefined **)CONCAT44(ppuStack_1a8._4_4_,1);
        FUN_10ab403b4(*(undefined8 *)(lVar22 + 0x30),&ppuStack_1a8);
      }
    }
    plVar6 = plVar12 + 1;
    do {
      lVar17 = *plVar6;
      cVar9 = '\x01';
      bVar10 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar10) {
        *plVar6 = lVar17 + -1;
        cVar9 = ExclusiveMonitorsStatus();
      }
    } while (cVar9 != '\0');
    if (lVar17 == 0) {
      (**(code **)(*plVar12 + 0x10))(plVar12);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar12);
    }
  }
LAB_10ab5cf24:
  func_0x000104c4f944(auStack_a0);
  FUN_10a042634(&plStack_f8);
  if (lStack_108 < 0) {
    __ZdlPv(uStack_118);
  }
  if (lStack_120 < 0) {
    __ZdlPv(uStack_130);
  }
LAB_10ab5cf54:
  if (plStack_218 != (long *)0x0) {
    plVar12 = plStack_218 + 1;
    do {
      lVar17 = *plVar12;
      cVar9 = '\x01';
      bVar10 = (bool)ExclusiveMonitorPass(plVar12,0x10);
      if (bVar10) {
        *plVar12 = lVar17 + -1;
        cVar9 = ExclusiveMonitorsStatus();
      }
    } while (cVar9 != '\0');
    if (lVar17 == 0) {
      (**(code **)(*plStack_218 + 0x10))(plStack_218);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_218);
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_78) {
    return;
  }
  ___stack_chk_fail();
LAB_10ab5cfc8:
  FUN_10ab5d4ec();
LAB_10ab5cfd4:
                    /* WARNING: Does not return */
  pcVar11 = (code *)SoftwareBreakpoint(1,0x10ab5cfd8);
  (*pcVar11)();
}



/* Entry: 10ab5d080; end: 10ab5d10f;  */

void FUN_10ab5d080(long *param_1,ulong param_2)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  long lStack_58;
  long lStack_50;
  long lStack_48;
  long lStack_40;
  long *plStack_38;
  
  lVar2 = *param_1;
  if ((ulong)(param_1[2] - lVar2 >> 4) < param_2) {
    lVar3 = param_1[1];
    uVar1 = param_2;
    plStack_38 = param_1;
    FUN_10ab5d500();
    lVar2 = param_2 + (lVar3 - lVar2);
    lVar3 = lVar2 - (param_1[1] - *param_1);
    _memcpy(lVar3);
    lStack_58 = *param_1;
    *param_1 = lVar3;
    param_1[1] = lVar2;
    lStack_40 = param_1[2];
    param_1[2] = param_2 + uVar1 * 0x10;
    lStack_50 = lStack_58;
    lStack_48 = lStack_58;
    func_0x00010ab5d534(&lStack_58);
  }
  return;
}



/* Entry: 10ab5d110; end: 10ab5d4eb;  */

undefined1  [16] FUN_10ab5d110(code **param_1,code **param_2,ulong *param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  ulong uVar5;
  code **ppcVar6;
  code **ppcVar7;
  undefined8 *puVar8;
  long *plVar9;
  long lVar10;
  code **ppcVar11;
  code **ppcVar12;
  long lVar13;
  code *pcVar14;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  code *pcStack_d0;
  code **ppcStack_c8;
  code *pcStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  ulong uStack_a8;
  long *plStack_a0;
  char cStack_98;
  code *pcStack_88;
  undefined **ppuStack_80;
  undefined8 *puStack_78;
  long lStack_48;
  
  ppcVar6 = &pcStack_d0;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppcVar12 = param_2;
  if ((param_1 == (code **)0x0) || (*(char *)(param_1 + 8) != '\x02')) {
    ppcVar7 = param_1;
    if ((param_1 != (code **)0x0) && (*(char *)(param_1 + 8) == '\x01')) {
      pcVar14 = *param_1;
      ppuStack_80 = (undefined **)0x0;
      puStack_78 = (undefined8 *)0x0;
      pcStack_88 = (code *)0x0;
      FUN_10ab5d91c(&pcStack_88,*param_2,param_2[1],(long)param_2[1] - (long)*param_2 >> 4);
      pcStack_d0 = (code *)((ulong)pcStack_d0 & 0xffffffffffffff00);
      uVar5 = (ulong)pcStack_c0 >> 8;
      pcStack_c0 = (code *)((ulong)pcStack_c0 & 0xffffffffffffff00);
      if ((char)param_3[2] == '\x01') {
        ppcStack_c8 = (code **)param_3[1];
        pcStack_d0 = (code *)*param_3;
        if (param_3[1] != 0) {
          plVar9 = (long *)(param_3[1] + 8);
          do {
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
            if (bVar3) {
              *plVar9 = *plVar9 + 1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
        }
        pcStack_c0 = (code *)CONCAT71((int7)uVar5,1);
      }
      (*pcVar14)(&pcStack_88,&pcStack_d0,param_1);
      ppcVar7 = ppcStack_c8;
      ppcVar12 = ppcVar6;
      if (((char)pcStack_c0 == '\x01') && (ppcStack_c8 != (code **)0x0)) {
        ppcVar11 = ppcStack_c8 + 1;
        do {
          pcVar14 = *ppcVar11;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(ppcVar11,0x10);
          if (bVar3) {
            *ppcVar11 = pcVar14 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (pcVar14 == (code *)0x0) {
          (**(code **)(*ppcStack_c8 + 0x10))(ppcStack_c8);
          __ZNSt3__119__shared_weak_count14__release_weakEv(ppcVar7);
          ppcVar12 = ppcVar6;
        }
      }
      ppcVar7 = &pcStack_88;
      FUN_10ab5d9c0();
    }
  }
  else {
    ppcVar6 = param_1;
    ppcVar11 = param_2;
    FUN_10a688b40();
    if (ppcVar6 == (code **)0x0) {
      ppcVar7 = (code **)0x0;
      ppcVar12 = (code **)0x0;
      if (ppcVar11 != (code **)0x0) {
        ppcStack_c8 = (code **)param_1[1];
        pcStack_d0 = *param_1;
        if (param_1[1] != (code *)0x0) {
          pcVar14 = param_1[1] + 8;
          do {
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(pcVar14,0x10);
            if (bVar3) {
              *(long *)pcVar14 = *(long *)pcVar14 + 1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
        }
        pcStack_c0 = (code *)0x0;
        uStack_b8 = 0;
        uStack_b0 = 0;
        FUN_10ab5d91c(&pcStack_c0,*param_2,param_2[1],(long)param_2[1] - (long)*param_2 >> 4);
        uStack_a8 = uStack_a8 & 0xffffffffffffff00;
        cStack_98 = '\0';
        if ((char)param_3[2] == '\x01') {
          plStack_a0 = (long *)param_3[1];
          uStack_a8 = *param_3;
          if (param_3[1] != 0) {
            plVar9 = (long *)(param_3[1] + 8);
            do {
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
              if (bVar3) {
                *plVar9 = *plVar9 + 1;
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
          }
          cStack_98 = '\x01';
        }
        pcStack_88 = FUN_10ab5da1c;
        ppuStack_80 = &PTR_FUN_110c4b140;
        puVar8 = (undefined8 *)0x40;
        __Znwm();
        puVar8[1] = ppcStack_c8;
        *puVar8 = pcStack_d0;
        pcStack_d0 = (code *)0x0;
        ppcStack_c8 = (code **)0x0;
        puVar8[3] = 0;
        puVar8[4] = 0;
        puVar8[2] = 0;
        FUN_10ab5d91c();
        *(undefined1 *)(puVar8 + 5) = 0;
        *(undefined1 *)(puVar8 + 7) = 0;
        if (cStack_98 == '\x01') {
          puVar8[6] = plStack_a0;
          puVar8[5] = uStack_a8;
          if (plStack_a0 != (long *)0x0) {
            plVar9 = plStack_a0 + 1;
            do {
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
              if (bVar3) {
                *plVar9 = *plVar9 + 1;
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
          }
          *(undefined1 *)(puVar8 + 7) = 1;
        }
        param_2 = &pcStack_88;
        ppcVar12 = &pcStack_88;
        puStack_78 = puVar8;
        FUN_10a4634ec(ppcVar11,ppcVar12);
        (*(code *)*ppuStack_80)(&ppuStack_80);
        plVar9 = plStack_a0;
        if ((cStack_98 == '\x01') && (plStack_a0 != (long *)0x0)) {
          plVar1 = plStack_a0 + 1;
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
            (**(code **)(*plStack_a0 + 0x10))(plStack_a0);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar9);
          }
        }
        ppcVar7 = &pcStack_c0;
        FUN_10ab5d9c0();
        ppcVar6 = ppcStack_c8;
        if (ppcStack_c8 != (code **)0x0) {
          ppcVar11 = ppcStack_c8 + 1;
          do {
            pcVar14 = *ppcVar11;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(ppcVar11,0x10);
            if (bVar3) {
              *ppcVar11 = pcVar14 + -1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (pcVar14 == (code *)0x0) {
            (**(code **)(*ppcStack_c8 + 0x10))(ppcStack_c8);
            __ZNSt3__119__shared_weak_count14__release_weakEv();
            ppcVar7 = ppcVar6;
          }
        }
      }
    }
    else {
      *ppcVar6 = (code *)CONCAT44((int)((ulong)*ppcVar6 >> 0x20) + 1,(int)*ppcVar6 + 1);
      ppcVar7 = (code **)*param_1;
      FUN_10ab5d614(ppcVar7,param_2,param_3);
      iVar4 = *(int *)((long)ppcVar6 + 4) + -1;
      *(int *)((long)ppcVar6 + 4) = iVar4;
      if (iVar4 == 0) {
        *(undefined4 *)ppcVar6 = 0;
      }
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    auVar15._8_8_ = ppcVar12;
    auVar15._0_8_ = ppcVar7;
    return auVar15;
  }
  ___stack_chk_fail();
  (*(code *)*ppuStack_80)(param_2 + 1);
  FUN_10ab5d8e0(&pcStack_d0);
  __Unwind_Resume(ppcVar7);
  plVar9 = (long *)&DAT_10f62a4d8;
  FUN_109ffde64();
  if ((ulong)plVar9 >> 0x3c == 0) {
    lVar10 = (long)plVar9 << 4;
    __Znwm(lVar10);
    auVar16._8_8_ = plVar9;
    auVar16._0_8_ = lVar10;
    return auVar16;
  }
  func_0x000109ffded8();
  lVar10 = plVar9[1];
  lVar13 = plVar9[2];
  while (lVar13 != lVar10) {
    plVar9[2] = lVar13 + -0x10;
    FUN_10ab5c108();
    lVar13 = plVar9[2];
  }
  if (*plVar9 != 0) {
    __ZdlPv();
  }
  auVar17._8_8_ = ppcVar12;
  auVar17._0_8_ = plVar9;
  return auVar17;
}



/* Entry: 10ab5d4ec; end: 10ab5d4ff;  */

undefined1  [16] FUN_10ab5d4ec(undefined8 param_1,undefined8 param_2)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  
  plVar1 = (long *)&DAT_10f62a4d8;
  FUN_109ffde64();
  if ((ulong)plVar1 >> 0x3c == 0) {
    lVar2 = (long)plVar1 << 4;
    __Znwm(lVar2);
    auVar4._8_8_ = plVar1;
    auVar4._0_8_ = lVar2;
    return auVar4;
  }
  func_0x000109ffded8();
  lVar2 = plVar1[1];
  lVar3 = plVar1[2];
  while (lVar3 != lVar2) {
    plVar1[2] = lVar3 + -0x10;
    FUN_10ab5c108();
    lVar3 = plVar1[2];
  }
  if (*plVar1 != 0) {
    __ZdlPv();
  }
  auVar5._8_8_ = param_2;
  auVar5._0_8_ = plVar1;
  return auVar5;
}



/* Entry: 10ab5d500; end: 10ab5d57f;  */

undefined1  [16] FUN_10ab5d500(long *param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  
  if ((ulong)param_1 >> 0x3c == 0) {
    lVar1 = (long)param_1 << 4;
    __Znwm(lVar1);
    auVar3._8_8_ = param_1;
    auVar3._0_8_ = lVar1;
    return auVar3;
  }
  func_0x000109ffded8();
  lVar1 = param_1[1];
  lVar2 = param_1[2];
  while (lVar2 != lVar1) {
    param_1[2] = lVar2 + -0x10;
    FUN_10ab5c108();
    lVar2 = param_1[2];
  }
  if (*param_1 != 0) {
    __ZdlPv();
  }
  auVar4._8_8_ = param_2;
  auVar4._0_8_ = param_1;
  return auVar4;
}



/* Entry: 10ab5d580; end: 10ab5d613;  */

void FUN_10ab5d580(undefined8 *param_1,undefined8 param_2,long param_3,long param_4)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  
  puVar4 = (undefined8 *)0x60;
  __Znwm();
  puVar4[1] = 0;
  puVar4[2] = 0;
  *puVar4 = &PTR_FUN_110c4b098;
  puVar4[3] = &PTR_FUN_110c494c8;
  puVar4[4] = 0;
  puVar4[5] = 0;
  puVar4[6] = param_2;
  puVar4[7] = param_3;
  if (param_3 != 0) {
    plVar1 = (long *)(param_3 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  puVar4[8] = *(undefined8 *)(param_4 + 0x48);
  *(undefined4 *)(puVar4 + 9) = *(undefined4 *)(param_4 + 0x50);
  *(undefined1 *)(puVar4 + 10) = 0;
  *(undefined1 *)(puVar4 + 0xb) = 0;
  *param_1 = puVar4 + 3;
  param_1[1] = puVar4;
  return;
}



/* Entry: 10ab5d614; end: 10ab5d8df;  */

void FUN_10ab5d614(undefined8 *param_1,long *param_2,undefined8 *param_3)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 *puStack_b0;
  undefined8 *puStack_a8;
  int aiStack_a0 [2];
  undefined8 *puStack_98;
  undefined4 auStack_90 [2];
  undefined8 **ppuStack_88;
  int aiStack_80 [2];
  long lStack_78;
  undefined8 **ppuStack_70;
  long *plStack_68;
  undefined1 *puStack_60;
  undefined8 **ppuStack_58;
  undefined8 **ppuStack_50;
  undefined8 uStack_48;
  
  func_0x000109884c0c(&ppuStack_70,param_1 + 1,*param_1);
  func_0x000109884820(&puStack_a8,&ppuStack_70,*param_1);
  if (ppuStack_70 != (undefined8 **)0x0) {
    (*(code *)**ppuStack_70)();
  }
  (**(code **)(*(long *)*param_1 + 0x30))(&puStack_b0);
  plVar2 = (long *)*param_1;
  lVar1 = *param_2;
  lVar4 = param_2[1];
  lVar3 = lVar4 - lVar1 >> 4;
  (**(code **)(*plVar2 + 600))(&ppuStack_70,plVar2,lVar3);
  ppuStack_50 = ppuStack_70;
  if (lVar4 != lVar1) {
    lVar4 = 0;
    puVar5 = (undefined8 *)(lVar1 + 8);
    do {
      FUN_10ab5bff0(&ppuStack_70,plVar2,puVar5[-1],*puVar5);
      (**(code **)(*plVar2 + 0x290))(plVar2,&ppuStack_50,lVar4,&ppuStack_70);
      if ((3 < (int)ppuStack_70) && (plStack_68 != (undefined8 *)0x0)) {
        (**(code **)*plStack_68)();
      }
      puVar5 = puVar5 + 2;
      lVar4 = lVar4 + 1;
    } while (lVar3 != lVar4);
  }
  auStack_90[0] = 7;
  ppuStack_88 = ppuStack_50;
  if ((*(byte *)(param_3 + 2) & 1) == 0) {
    aiStack_80[0] = 1;
  }
  else {
    FUN_10ab5bff0(aiStack_80,plVar2,*param_3,param_3[1]);
  }
  ppuStack_50 = (undefined8 **)auStack_90;
  uStack_48 = 2;
  (**(code **)(*plVar2 + 0x58))(plVar2);
  ppuStack_70 = &puStack_a8;
  ppuStack_58 = &ppuStack_50;
  plStack_68 = plVar2;
  puStack_60 = (undefined1 *)&puStack_b0;
  func_0x0001098960c0(aiStack_a0);
  if ((3 < aiStack_a0[0]) && (puStack_98 != (undefined8 *)0x0)) {
    (**(code **)*puStack_98)();
  }
  lVar1 = 0;
  do {
    if ((3 < *(int *)((long)aiStack_80 + lVar1)) &&
       (*(undefined8 **)((long)&lStack_78 + lVar1) != (undefined8 *)0x0)) {
      (**(code **)**(undefined8 **)((long)&lStack_78 + lVar1))();
    }
    lVar1 = lVar1 + -0x10;
  } while (lVar1 != -0x20);
  if (puStack_b0 != (undefined8 *)0x0) {
    (**(code **)*puStack_b0)();
  }
  if (puStack_a8 != (undefined8 *)0x0) {
    (**(code **)*puStack_a8)();
  }
  return;
}



/* Entry: 10ab5d8e0; end: 10ab5d91b;  */

long FUN_10ab5d8e0(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  if (*(char *)(param_1 + 0x38) == '\x01') {
    FUN_10ab5c108(param_1 + 0x28);
  }
  FUN_10ab5d9c0(param_1 + 0x10);
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



/* Entry: 10ab5d91c; end: 10ab5d9bf;  */

void FUN_10ab5d91c(ulong *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  undefined8 *puVar5;
  long lVar6;
  undefined8 uVar7;
  
  if (param_4 != (undefined8 *)0x0) {
    if ((ulong)param_4 >> 0x3c != 0) {
      FUN_10ab5d4ec();
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x10ab5d9ac);
      (*pcVar4)();
    }
    puVar5 = param_2;
    FUN_10ab5d500();
    *param_1 = (ulong)param_4;
    param_1[1] = (ulong)param_4;
    param_1[2] = (ulong)(param_4 + (long)puVar5 * 2);
    for (; param_2 != param_3; param_2 = param_2 + 2) {
      lVar6 = param_2[1];
      uVar7 = *param_2;
      param_4[1] = param_2[1];
      *param_4 = uVar7;
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
      param_4 = param_4 + 2;
    }
    param_1[1] = (ulong)param_4;
  }
  return;
}



/* Entry: 10ab5d9c0; end: 10ab5da1b;  */

void FUN_10ab5d9c0(long *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar3 = *param_1;
  if (lVar3 != 0) {
    lVar1 = param_1[1];
    lVar2 = lVar3;
    if (lVar1 != lVar3) {
      do {
        lVar1 = lVar1 + -0x10;
        FUN_10ab5c108();
      } while (lVar1 != lVar3);
      lVar2 = *param_1;
    }
    param_1[1] = lVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(lVar2);
    return;
  }
  return;
}



/* Entry: 10ab5da1c; end: 10ab5da2b;  */

void FUN_10ab5da1c(long param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  undefined8 *puStack_b0;
  undefined8 *puStack_a8;
  int aiStack_a0 [2];
  undefined8 *puStack_98;
  undefined4 auStack_90 [2];
  undefined8 **ppuStack_88;
  int aiStack_80 [2];
  long lStack_78;
  undefined8 **ppuStack_70;
  long *plStack_68;
  undefined1 *puStack_60;
  undefined8 **ppuStack_58;
  undefined8 **ppuStack_50;
  undefined8 uStack_48;
  
  puVar2 = *(undefined8 **)(param_1 + 0x10);
  puVar1 = (undefined8 *)*puVar2;
  func_0x000109884c0c(&ppuStack_70,puVar1 + 1,*puVar1);
  func_0x000109884820(&puStack_a8,&ppuStack_70,*puVar1);
  if (ppuStack_70 != (undefined8 **)0x0) {
    (*(code *)**ppuStack_70)();
  }
  (**(code **)(*(long *)*puVar1 + 0x30))(&puStack_b0);
  plVar4 = (long *)*puVar1;
  lVar3 = puVar2[2];
  lVar6 = puVar2[3];
  lVar5 = lVar6 - lVar3 >> 4;
  (**(code **)(*plVar4 + 600))(&ppuStack_70,plVar4,lVar5);
  ppuStack_50 = ppuStack_70;
  if (lVar6 != lVar3) {
    lVar6 = 0;
    puVar1 = (undefined8 *)(lVar3 + 8);
    do {
      FUN_10ab5bff0(&ppuStack_70,plVar4,puVar1[-1],*puVar1);
      (**(code **)(*plVar4 + 0x290))(plVar4,&ppuStack_50,lVar6,&ppuStack_70);
      if ((3 < (int)ppuStack_70) && (plStack_68 != (undefined8 *)0x0)) {
        (**(code **)*plStack_68)();
      }
      puVar1 = puVar1 + 2;
      lVar6 = lVar6 + 1;
    } while (lVar5 != lVar6);
  }
  auStack_90[0] = 7;
  ppuStack_88 = ppuStack_50;
  if ((*(byte *)(puVar2 + 7) & 1) == 0) {
    aiStack_80[0] = 1;
  }
  else {
    FUN_10ab5bff0(aiStack_80,plVar4,puVar2[5],puVar2[6]);
  }
  ppuStack_50 = (undefined8 **)auStack_90;
  uStack_48 = 2;
  (**(code **)(*plVar4 + 0x58))(plVar4);
  ppuStack_70 = &puStack_a8;
  ppuStack_58 = &ppuStack_50;
  plStack_68 = plVar4;
  puStack_60 = (undefined1 *)&puStack_b0;
  func_0x0001098960c0(aiStack_a0);
  if ((3 < aiStack_a0[0]) && (puStack_98 != (undefined8 *)0x0)) {
    (**(code **)*puStack_98)();
  }
  lVar3 = 0;
  do {
    if ((3 < *(int *)((long)aiStack_80 + lVar3)) &&
       (*(undefined8 **)((long)&lStack_78 + lVar3) != (undefined8 *)0x0)) {
      (**(code **)**(undefined8 **)((long)&lStack_78 + lVar3))();
    }
    lVar3 = lVar3 + -0x10;
  } while (lVar3 != -0x20);
  if (puStack_b0 != (undefined8 *)0x0) {
    (**(code **)*puStack_b0)();
  }
  if (puStack_a8 != (undefined8 *)0x0) {
    (**(code **)*puStack_a8)();
  }
  return;
}



/* Entry: 10ab5da2c; end: 10ab5da7b;  */

void FUN_10ab5da2c(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 8);
  if (lVar1 != 0) {
    if (*(char *)(lVar1 + 0x38) == '\x01') {
      FUN_10ab5c108(lVar1 + 0x28);
    }
    FUN_10ab5d9c0(lVar1 + 0x10);
    func_0x00010a004dac(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10ab5da7c; end: 10ab5dabf;  */

void FUN_10ab5da7c(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_2[1] = 0;
  return;
}



/* Entry: 10ab5dac0; end: 10ab5e58b;  */

void FUN_10ab5dac0(undefined8 *param_1,long param_2)

{
  ulong *puVar1;
  ulong uVar2;
  byte bVar3;
  byte bVar4;
  char cVar5;
  bool bVar6;
  long lVar7;
  code *pcVar8;
  long *plVar9;
  undefined ***pppuVar10;
  undefined8 *puVar11;
  long *plVar12;
  ulong uVar13;
  ulong *puVar14;
  undefined **ppuVar15;
  ulong uVar16;
  long lVar17;
  undefined8 *puVar18;
  long *plVar19;
  long *plVar20;
  long lVar21;
  ulong *puVar22;
  long *plStack_2b8;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  long lStack_2a0;
  char cStack_298;
  undefined1 uStack_290;
  undefined7 uStack_28f;
  long *plStack_288;
  char cStack_279;
  char cStack_278;
  undefined8 uStack_270;
  undefined1 uStack_268;
  char cStack_259;
  char cStack_258;
  long *plStack_248;
  long *plStack_240;
  long *plStack_238;
  long *plStack_230;
  long **pplStack_228;
  undefined1 uStack_208;
  long *plStack_200;
  long *plStack_1f8;
  long lStack_1f0;
  long *plStack_1e8;
  long *plStack_1e0;
  long *plStack_1d8;
  byte bStack_1d0;
  long *plStack_1c8;
  long *plStack_1c0;
  long *plStack_1b8;
  undefined **ppuStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  ulong uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  long lStack_178;
  long *plStack_170;
  undefined2 uStack_166;
  undefined1 auStack_164 [16];
  undefined1 uStack_154;
  ulong uStack_150;
  ulong uStack_148;
  ulong uStack_140;
  char cStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  long lStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  long lStack_108;
  int iStack_100;
  long *plStack_f8;
  undefined8 uStack_f0;
  undefined1 auStack_e8 [56];
  undefined8 uStack_b0;
  undefined4 uStack_a8;
  undefined1 auStack_a0 [48];
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plStack_2b8 = (long *)0x0;
  plVar9 = *(long **)(param_2 + 0x20);
  if (((plVar9 == (long *)0x0) ||
      (__ZNSt3__119__shared_weak_count4lockEv(), plStack_2b8 = plVar9, plVar9 == (long *)0x0)) ||
     (*(long *)(param_2 + 0x18) == 0)) goto LAB_10ab5e3d0;
  lVar21 = *(long *)(param_2 + 0x10);
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
  plStack_f8 = (long *)param_1[7];
  uStack_f0 = param_1[8];
  param_1[7] = 0;
  (**(code **)(param_1[9] + 0x10))(auStack_e8,param_1 + 9);
  uStack_b0 = param_1[0x10];
  uStack_a8 = *(undefined4 *)(param_1 + 0x11);
  FUN_10a0424c4(auStack_a0,param_1 + 0x12);
  lVar17 = *(long *)(lVar21 + 0x18);
  plVar9 = *(long **)(lVar17 + 0x80);
  if ((plVar9 != (long *)0x0) &&
     (__ZNSt3__119__shared_weak_count4lockEv(), plStack_170 = plVar9, plVar9 != (long *)0x0)) {
    lVar17 = *(long *)(lVar17 + 0x78);
    lStack_178 = lVar17;
    if (lVar17 != 0) {
      if (iStack_100 - 200U < 100) {
        ppuStack_1b0 = &PTR_FUN_110c77d38;
        uStack_1a8 = 0;
        uStack_198 = 0;
        uStack_1a0 = 0;
        uStack_188 = 0;
        uStack_190 = 0;
        uStack_180 = 0;
        plStack_240 = (long *)(long)(int)uStack_b0;
        plStack_248 = plStack_f8;
        pppuVar10 = &ppuStack_1b0;
        func_0x000107c30348(pppuVar10,&plStack_248);
        if (((ulong)pppuVar10 & 1) == 0) {
          if ((bRam000000011330a9e8 & 1) != 0) {
            func_0x00010ae06f08(0,1,&UNK_10f69231b,&UNK_10f6936b8,0x10d,&UNK_10f693506);
          }
          plStack_248 = (long *)CONCAT44(plStack_248._4_4_,1);
          FUN_10ab403b4(*(undefined8 *)(lVar21 + 0x30),&plStack_248);
          FUN_10ae0a578(&ppuStack_1b0);
        }
        else {
          plStack_1c8 = (long *)0x0;
          plStack_1c0 = (long *)0x0;
          plStack_1b8 = (long *)0x0;
          plStack_1e0 = (long *)((ulong)plStack_1e0 & 0xffffffffffffff00);
          bStack_1d0 = 0;
          lStack_1f0 = *(long *)(lVar17 + 0x108);
          plStack_1e8 = *(long **)(lVar17 + 0x110);
          if (plStack_1e8 != (long *)0x0) {
            plVar9 = plStack_1e8 + 1;
            do {
              cVar5 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(plVar9,0x10);
              if (bVar6) {
                *plVar9 = *plVar9 + 1;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
          }
          if ((int)uStack_190 < 1) {
            uVar13 = 0;
          }
          else {
            FUN_10ab5d080(&plStack_1c8);
            puVar22 = &uStack_198;
            if ((uStack_198 & 1) != 0) {
              puVar22 = (ulong *)(uStack_198 + 7);
            }
            uVar13 = (ulong)(int)uStack_190;
            if ((int)uStack_190 != 0) {
              puVar1 = puVar22 + uVar13;
              do {
                lVar17 = lStack_1f0;
                uVar16 = *puVar22;
                puVar18 = (undefined8 *)(*(ulong *)(uVar16 + 0x10) & 0xfffffffffffffffc);
                bVar3 = *(byte *)((long)puVar18 + 0x17);
                uVar13 = puVar18[1];
                if (-1 < (char)bVar3) {
                  uVar13 = (ulong)bVar3;
                }
                bVar4 = *(byte *)(lStack_1f0 + 0x2f);
                uVar2 = *(ulong *)(lStack_1f0 + 0x20);
                if (-1 < (char)bVar4) {
                  uVar2 = (ulong)bVar4;
                }
                if (uVar13 == uVar2) {
                  puVar11 = (undefined8 *)*puVar18;
                  if (-1 < (char)bVar3) {
                    puVar11 = puVar18;
                  }
                  plVar9 = (long *)*(long *)(lStack_1f0 + 0x18);
                  if (-1 < (char)bVar4) {
                    plVar9 = (long *)(lStack_1f0 + 0x18);
                  }
                  _memcmp(puVar11,plVar9);
                  if ((int)puVar11 != 0) goto LAB_10ab5dcd4;
                  FUN_10ab5d580(&plStack_248,lVar17,plStack_1e8,uVar16);
                  plVar9 = plStack_1d8;
                  plStack_1d8 = plStack_240;
                  plStack_1e0 = plStack_248;
                  if (bStack_1d0 == 1) {
                    plStack_248 = (long *)0x0;
                    plStack_240 = (long *)0x0;
                    if (plVar9 != (long *)0x0) {
                      plVar12 = plVar9 + 1;
                      do {
                        lVar17 = *plVar12;
                        cVar5 = '\x01';
                        bVar6 = (bool)ExclusiveMonitorPass(plVar12,0x10);
                        if (bVar6) {
                          *plVar12 = lVar17 + -1;
                          cVar5 = ExclusiveMonitorsStatus();
                        }
                      } while (cVar5 != '\0');
                      if (lVar17 == 0) {
                        (**(code **)(*plVar9 + 0x10))(plVar9);
                        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar9);
                      }
                    }
                  }
                  else {
                    plStack_248 = (long *)0x0;
                    plStack_240 = (long *)0x0;
                    bStack_1d0 = 1;
                  }
                  plVar9 = plStack_240;
                  if (plStack_240 != (long *)0x0) {
                    plVar12 = plStack_240 + 1;
                    do {
                      lVar17 = *plVar12;
                      cVar5 = '\x01';
                      bVar6 = (bool)ExclusiveMonitorPass(plVar12,0x10);
                      if (bVar6) {
                        *plVar12 = lVar17 + -1;
                        cVar5 = ExclusiveMonitorsStatus();
                      }
                    } while (cVar5 != '\0');
                    if (lVar17 == 0) {
                      (**(code **)(*plStack_240 + 0x10))(plStack_240);
                      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar9);
                    }
                  }
                  if ((bStack_1d0 & 1) == 0) {
                    FUN_10a04f808();
                    goto LAB_10ab5e450;
                  }
                  plStack_1e0[7] = *(long *)(uVar16 + 0x40);
                  *(undefined1 *)(plStack_1e0 + 8) = 1;
                }
                else {
LAB_10ab5dcd4:
                  lVar7 = lStack_178;
                  plStack_200 = (long *)0x0;
                  plStack_1f8 = (long *)0x0;
                  lVar17 = lStack_178 + 0x118;
                  FUN_10ab5ee58(lVar17,puVar18);
                  if (lVar17 == 0) {
                    plStack_248 = (long *)((ulong)plStack_248 & 0xffffffffffffff00);
                    uStack_208 = 0;
                    puVar14 = (ulong *)(*(ulong *)(uVar16 + 0x30) & 0xfffffffffffffffc);
                    cVar5 = *(char *)((long)puVar14 + 0x17);
                    if (cVar5 < '\0') {
                      if (puVar14[1] != 0) goto LAB_10ab5ddec;
                    }
                    else if (cVar5 != '\0') {
LAB_10ab5ddec:
                      puVar18 = (undefined8 *)(*(ulong *)(uVar16 + 0x38) & 0xfffffffffffffffc);
                      lVar17 = (long)*(char *)((long)puVar18 + 0x17);
                      if (lVar17 < 0) {
                        lVar17 = puVar18[1];
                      }
                      if (lVar17 != 0) {
                        if (cVar5 < '\0') {
                          func_0x000107c3192c(&uStack_150,*puVar14,puVar14[1]);
                          puVar18 = (undefined8 *)(*(ulong *)(uVar16 + 0x38) & 0xfffffffffffffffc);
                        }
                        else {
                          uStack_148 = puVar14[1];
                          uStack_150 = *puVar14;
                          uStack_140 = puVar14[2];
                        }
                        cStack_138 = '\x01';
                        if (*(char *)((long)puVar18 + 0x17) < '\0') {
                          func_0x000107c3192c(&uStack_2b0,*puVar18,puVar18[1]);
                        }
                        else {
                          uStack_2a8 = puVar18[1];
                          uStack_2b0 = *puVar18;
                          lStack_2a0 = puVar18[2];
                        }
                        cStack_298 = '\x01';
                        FUN_10a29fefc(&uStack_290,&uStack_150,&uStack_2b0);
                        FUN_10a29fe34(&plStack_248,&uStack_290);
                        if ((cStack_258 == '\x01') && (cStack_259 < '\0')) {
                          __ZdlPv(uStack_270);
                        }
                        if ((cStack_278 == '\x01') && (cStack_279 < '\0')) {
                          __ZdlPv(CONCAT71(uStack_28f,uStack_290));
                        }
                        if ((cStack_298 == '\x01') && (lStack_2a0 < 0)) {
                          __ZdlPv(uStack_2b0);
                        }
                        if ((cStack_138 == '\x01') && ((long)uStack_140 < 0)) {
                          __ZdlPv(uStack_150);
                        }
                      }
                    }
                    uVar13 = *(ulong *)(uVar16 + 0x10);
                    if (*(int *)(*(long *)(lVar7 + 0x50) + 0xe30) == 2) {
                      uStack_2b0 = 0;
                      uStack_2a8 = 0;
                      lStack_2a0 = 0;
                      plVar12 = (long *)0x138;
                      __Znwm();
                      plVar12[1] = 0;
                      plVar12[2] = 0;
                      *plVar12 = (long)&PTR_FUN_110bbad38;
                      plVar9 = plVar12 + 3;
                      uStack_150 = uStack_150 & 0xffffffffffffff00;
                      cStack_138 = '\0';
                      auStack_164[0] = 0;
                      uStack_154 = 0;
                      uStack_166 = 0;
                      uStack_290 = 0;
                      uStack_268 = 0;
                      FUN_10a247268(plVar9,uVar13 & 0xfffffffffffffffc,&uStack_2b0,&uStack_150,
                                    &plStack_248,auStack_164,&uStack_166,1,&uStack_290);
                      ppuVar15 = &PTR_DAT_110bb5d70;
                    }
                    else {
                      uStack_2b0 = 0;
                      uStack_2a8 = 0;
                      lStack_2a0 = 0;
                      plVar12 = (long *)0x138;
                      __Znwm();
                      plVar12[1] = 0;
                      plVar12[2] = 0;
                      *plVar12 = (long)&PTR_DAT_110bbad88;
                      plVar9 = plVar12 + 3;
                      uStack_150 = uStack_150 & 0xffffffffffffff00;
                      cStack_138 = '\0';
                      uStack_290 = 0;
                      uStack_268 = 0;
                      auStack_164[0] = 0;
                      uStack_154 = 0;
                      uStack_166 = 0;
                      FUN_10a247268(plVar9,uVar13 & 0xfffffffffffffffc,&uStack_2b0,&uStack_150,
                                    &plStack_248,auStack_164,&uStack_166,0,&uStack_290);
                      ppuVar15 = &PTR_DAT_110bb5d18;
                    }
                    *plVar9 = (long)ppuVar15;
                    if ((cStack_138 == '\x01') && ((long)uStack_140 < 0)) {
                      __ZdlPv(uStack_150);
                    }
                    plStack_200 = plVar9;
                    plStack_1f8 = plVar12;
                    FUN_10a26a30c(&plStack_248);
                  }
                  else {
                    plStack_200 = *(long **)(lVar17 + 0x28);
                    plVar9 = *(long **)(lVar17 + 0x30);
                    if (plVar9 == (long *)0x0) {
                      plStack_1f8 = (long *)0x0;
                    }
                    else {
                      plVar12 = plVar9 + 1;
                      do {
                        cVar5 = '\x01';
                        bVar6 = (bool)ExclusiveMonitorPass(plVar12,0x10);
                        if (bVar6) {
                          *plVar12 = *plVar12 + 1;
                          cVar5 = ExclusiveMonitorsStatus();
                        }
                      } while (cVar5 != '\0');
                      do {
                        cVar5 = '\x01';
                        bVar6 = (bool)ExclusiveMonitorPass(plVar12,0x10);
                        if (bVar6) {
                          *plVar12 = *plVar12 + 1;
                          cVar5 = ExclusiveMonitorsStatus();
                        }
                      } while (cVar5 != '\0');
                      plVar12 = plVar9 + 1;
                      do {
                        lVar17 = *plVar12;
                        cVar5 = '\x01';
                        bVar6 = (bool)ExclusiveMonitorPass(plVar12,0x10);
                        if (bVar6) {
                          *plVar12 = lVar17 + -1;
                          cVar5 = ExclusiveMonitorsStatus();
                        }
                      } while (cVar5 != '\0');
                      plStack_1f8 = plVar9;
                      if (lVar17 == 0) {
                        (**(code **)(*plVar9 + 0x10))(plVar9);
                        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar9);
                      }
                    }
                  }
                  plVar9 = plStack_200;
                  FUN_10ab5d580(&uStack_290,plStack_200,plStack_1f8,uVar16);
                  if (plStack_1c0 < plStack_1b8) {
                    plStack_1c0[1] = (long)plStack_288;
                    *plStack_1c0 = CONCAT71(uStack_28f,uStack_290);
                    if (plStack_288 != (long *)0x0) {
                      plVar9 = plStack_288 + 1;
                      do {
                        cVar5 = '\x01';
                        bVar6 = (bool)ExclusiveMonitorPass(plVar9,0x10);
                        if (bVar6) {
                          *plVar9 = *plVar9 + 1;
                          cVar5 = ExclusiveMonitorsStatus();
                        }
                      } while (cVar5 != '\0');
                    }
                    plVar20 = plStack_1c0 + 2;
                    plVar12 = plStack_288;
                  }
                  else {
                    lVar17 = (long)plStack_1c0 - (long)plStack_1c8;
                    uVar13 = (lVar17 >> 4) + 1;
                    if (uVar13 >> 0x3c != 0) goto LAB_10ab5e444;
                    uVar16 = (long)plStack_1b8 - (long)plStack_1c8 >> 3;
                    if (uVar16 <= uVar13) {
                      uVar16 = uVar13;
                    }
                    if (0x7fffffffffffffef < (ulong)((long)plStack_1b8 - (long)plStack_1c8)) {
                      uVar16 = 0xfffffffffffffff;
                    }
                    pplStack_228 = &plStack_1c8;
                    FUN_10ab5d500();
                    plVar12 = plStack_288;
                    puVar18 = (undefined8 *)(uVar16 + lVar17);
                    puVar18[1] = plStack_288;
                    *puVar18 = CONCAT71(uStack_28f,uStack_290);
                    if (plStack_288 != (long *)0x0) {
                      plVar20 = plStack_288 + 1;
                      do {
                        cVar5 = '\x01';
                        bVar6 = (bool)ExclusiveMonitorPass(plVar20,0x10);
                        if (bVar6) {
                          *plVar20 = *plVar20 + 1;
                          cVar5 = ExclusiveMonitorsStatus();
                        }
                      } while (cVar5 != '\0');
                    }
                    plVar20 = puVar18 + 2;
                    plVar19 = (long *)((long)puVar18 - ((long)plStack_1c0 - (long)plStack_1c8));
                    _memcpy(plVar19);
                    plStack_238 = plStack_1c8;
                    plStack_230 = plStack_1b8;
                    plStack_248 = plStack_1c8;
                    plStack_240 = plStack_1c8;
                    plStack_1c8 = plVar19;
                    plStack_1c0 = plVar20;
                    plStack_1b8 = (long *)(uVar16 + (long)plVar9 * 0x10);
                    func_0x00010ab5d534(&plStack_248);
                  }
                  plStack_1c0 = plVar20;
                  if (plVar12 != (long *)0x0) {
                    plVar9 = plVar12 + 1;
                    do {
                      lVar17 = *plVar9;
                      cVar5 = '\x01';
                      bVar6 = (bool)ExclusiveMonitorPass(plVar9,0x10);
                      if (bVar6) {
                        *plVar9 = lVar17 + -1;
                        cVar5 = ExclusiveMonitorsStatus();
                      }
                    } while (cVar5 != '\0');
                    if (lVar17 == 0) {
                      (**(code **)(*plVar12 + 0x10))(plVar12);
                      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar12);
                    }
                  }
                  plVar9 = plStack_1f8;
                  if (plStack_1f8 != (long *)0x0) {
                    plVar12 = plStack_1f8 + 1;
                    do {
                      lVar17 = *plVar12;
                      cVar5 = '\x01';
                      bVar6 = (bool)ExclusiveMonitorPass(plVar12,0x10);
                      if (bVar6) {
                        *plVar12 = lVar17 + -1;
                        cVar5 = ExclusiveMonitorsStatus();
                      }
                    } while (cVar5 != '\0');
                    if (lVar17 == 0) {
                      (**(code **)(*plStack_1f8 + 0x10))(plStack_1f8);
                      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar9);
                    }
                  }
                }
                puVar22 = puVar22 + 1;
              } while (puVar22 != puVar1);
              uVar13 = (ulong)bStack_1d0;
            }
          }
          if ((plStack_1c8 == plStack_1c0) && ((uVar13 & 1) == 0)) {
            plStack_248 = (long *)CONCAT44(plStack_248._4_4_,1);
            FUN_10ab403b4(*(undefined8 *)(lVar21 + 0x30),&plStack_248);
          }
          else {
            FUN_10ab5d110(*(undefined8 *)(lVar21 + 0x20),&plStack_1c8,&plStack_1e0);
          }
          plVar9 = plStack_1e8;
          if (plStack_1e8 != (long *)0x0) {
            plVar12 = plStack_1e8 + 1;
            do {
              lVar17 = *plVar12;
              cVar5 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(plVar12,0x10);
              if (bVar6) {
                *plVar12 = lVar17 + -1;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
            if (lVar17 == 0) {
              (**(code **)(*plStack_1e8 + 0x10))(plStack_1e8);
              __ZNSt3__119__shared_weak_count14__release_weakEv(plVar9);
            }
          }
          plVar9 = plStack_1d8;
          if ((bStack_1d0 == 1) && (plStack_1d8 != (long *)0x0)) {
            plVar12 = plStack_1d8 + 1;
            do {
              lVar17 = *plVar12;
              cVar5 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(plVar12,0x10);
              if (bVar6) {
                *plVar12 = lVar17 + -1;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
            if (lVar17 == 0) {
              (**(code **)(*plStack_1d8 + 0x10))(plStack_1d8);
              __ZNSt3__119__shared_weak_count14__release_weakEv(plVar9);
            }
          }
          FUN_10ab5d9c0(&plStack_1c8);
          plVar9 = plStack_170;
          FUN_10ae0a578(&ppuStack_1b0);
          if (plVar9 == (long *)0x0) goto LAB_10ab5e3a0;
        }
      }
      else {
        if ((bRam000000011330a9e8 & 1) != 0) {
          func_0x00010ae06f08(0,1,&UNK_10f69231b,&UNK_10f6936b8,0x105,&UNK_10f69379f);
        }
        plStack_248 = (long *)CONCAT44(plStack_248._4_4_,1);
        FUN_10ab403b4(*(undefined8 *)(lVar21 + 0x30),&plStack_248);
      }
    }
    plVar12 = plVar9 + 1;
    do {
      lVar17 = *plVar12;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar12,0x10);
      if (bVar6) {
        *plVar12 = lVar17 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (lVar17 == 0) {
      (**(code **)(*plVar9 + 0x10))(plVar9);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar9);
    }
  }
LAB_10ab5e3a0:
  func_0x000104c4f944(auStack_a0);
  FUN_10a042634(&plStack_f8);
  if (lStack_108 < 0) {
    __ZdlPv(uStack_118);
  }
  if (lStack_120 < 0) {
    __ZdlPv(uStack_130);
  }
LAB_10ab5e3d0:
  if (plStack_2b8 != (long *)0x0) {
    plVar9 = plStack_2b8 + 1;
    do {
      lVar17 = *plVar9;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar6) {
        *plVar9 = lVar17 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (lVar17 == 0) {
      (**(code **)(*plStack_2b8 + 0x10))(plStack_2b8);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_2b8);
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
LAB_10ab5e444:
  FUN_10ab5d4ec();
LAB_10ab5e450:
                    /* WARNING: Does not return */
  pcVar8 = (code *)SoftwareBreakpoint(1,0x10ab5e454);
  (*pcVar8)();
}



/* Entry: 10ab5e58c; end: 10ab5e5b7;  */

undefined8 * FUN_10ab5e58c(long param_1)

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



/* Entry: 10ab5e5b8; end: 10ab5e903;  */

void FUN_10ab5e5b8(undefined8 *param_1,long param_2)

{
  ulong uVar1;
  long *plVar2;
  byte bVar3;
  char cVar4;
  undefined8 ******ppppppuVar5;
  code *pcVar6;
  bool bVar7;
  long **pplVar8;
  undefined8 *******pppppppuVar9;
  long *plVar10;
  long *plVar11;
  long lVar12;
  long *plVar13;
  undefined *puVar14;
  ulong uVar15;
  long lVar16;
  long lVar17;
  ulong uVar18;
  undefined8 *puVar19;
  long *plVar20;
  long *plVar21;
  long *plVar22;
  long lVar23;
  undefined8 ******ppppppuVar24;
  undefined8 ******ppppppuVar25;
  long lStack_d8;
  long *plStack_d0;
  undefined8 ******ppppppuStack_c8;
  long *plStack_c0;
  long *plStack_b8;
  long *plStack_b0;
  undefined8 uStack_a8;
  long *plStack_a0;
  long *plStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined8 ******ppppppuStack_80;
  long *plStack_78;
  long *plStack_70;
  
  lVar16 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar21 = *(long **)(param_2 + 0x10);
  lVar17 = *plVar21;
  if (*(int *)(*(long *)(lVar17 + 0x50) + 0xe30) == 2) {
    FUN_10a8a70cc(lVar17 + 0x108,param_1);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar16) {
      lVar16 = plVar21[2];
      if (*(char *)(lVar16 + 0x2f) < '\0') {
        if (*(long *)(lVar16 + 0x20) == 0) goto LAB_10ab41260;
      }
      else if (*(char *)(lVar16 + 0x2f) == '\0') goto LAB_10ab41260;
      if (*(long *)(lVar16 + 0x30) < 1) {
LAB_10ab41260:
        puVar19 = (undefined8 *)plVar21[6];
        func_0x000107c2b054(&ppppppuStack_80,&UNK_10f6930f8);
        if ((puVar19 == (undefined8 *)0x0) || (*(char *)(puVar19 + 8) != '\x02')) {
          if ((puVar19 != (undefined8 *)0x0) && (*(char *)(puVar19 + 8) == '\x01')) {
            (*(code *)*puVar19)(&ppppppuStack_80,puVar19);
          }
        }
        else {
          FUN_10a05aad0(puVar19,&ppppppuStack_80);
        }
LAB_10ab41668:
        if ((long)plStack_70 < 0) {
          __ZdlPv(ppppppuStack_80);
        }
        return;
      }
      plStack_d0 = (long *)plVar21[1];
      lVar17 = *(long *)(plStack_d0[10] + 0x100);
      plVar22 = (long *)(lVar17 + 0x208);
      plVar20 = (long *)plStack_d0[0x1e];
      plVar10 = (long *)plStack_d0[0x1f];
      lVar16 = lVar17;
      if (plVar20 != plVar10) {
        do {
          uStack_a8 = CONCAT17(1,(undefined7)uStack_a8);
          plStack_b8 = (long *)CONCAT62(plStack_b8._2_6_,0x23);
          uVar1 = *(ulong *)(lVar17 + 0x210);
          plVar13 = *(long **)(lVar17 + 0x208);
          if (-1 < (char)*(byte *)(lVar17 + 0x21f)) {
            uVar1 = (ulong)*(byte *)(lVar17 + 0x21f);
            plVar13 = plVar22;
          }
          pplVar8 = &plStack_b8;
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6insertEmPKcm
                    (pplVar8,0,plVar13,uVar1);
          plStack_98 = pplVar8[1];
          plStack_a0 = *pplVar8;
          uStack_90 = pplVar8[2];
          pplVar8[1] = (long *)0x0;
          pplVar8[2] = (long *)0x0;
          *pplVar8 = (long *)0x0;
          lVar16 = plVar21[2];
          uVar1 = *(ulong *)(lVar16 + 0x20);
          plVar13 = (long *)*(long *)(lVar16 + 0x18);
          if (-1 < (char)*(byte *)(lVar16 + 0x2f)) {
            uVar1 = (ulong)*(byte *)(lVar16 + 0x2f);
            plVar13 = (long *)(lVar16 + 0x18);
          }
          pplVar8 = &plStack_a0;
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                    (pplVar8,plVar13,uVar1);
          plStack_70 = pplVar8[2];
          plStack_78 = pplVar8[1];
          ppppppuStack_80 = (undefined8 ******)*pplVar8;
          pplVar8[1] = (long *)0x0;
          pplVar8[2] = (long *)0x0;
          *pplVar8 = (long *)0x0;
          plVar11 = plStack_70;
          lVar16 = *plVar20;
          plVar13 = plStack_78;
          if (-1 < (long)plStack_70) {
            plVar13 = (long *)((ulong)plStack_70 >> 0x38);
          }
          bVar3 = *(byte *)(lVar16 + 0x47);
          plVar2 = *(long **)(lVar16 + 0x38);
          if (-1 < (char)bVar3) {
            plVar2 = (long *)(ulong)bVar3;
          }
          if (plVar13 == plVar2) {
            pppppppuVar9 = (undefined8 *******)ppppppuStack_80;
            if (-1 < (long)plStack_70) {
              pppppppuVar9 = &ppppppuStack_80;
            }
            plVar13 = (long *)*(long *)(lVar16 + 0x30);
            if (-1 < (char)bVar3) {
              plVar13 = (long *)(lVar16 + 0x30);
            }
            _memcmp(pppppppuVar9,plVar13);
            bVar7 = (int)pppppppuVar9 == 0;
          }
          else {
            bVar7 = false;
          }
          if ((long)plVar11 < 0) {
            __ZdlPv(ppppppuStack_80);
          }
          if ((long)uStack_90 < 0) {
            __ZdlPv(plStack_a0);
          }
          if (uStack_a8 < 0) {
            __ZdlPv(plStack_b8);
          }
          if (bVar7) {
            if ((*(long *)(plVar21[2] + 0x30) == (long)*(int *)(*plVar20 + 0x48)) &&
               (*(int *)(plVar21[2] + 0x38) == *(int *)(*plVar20 + 0x4c))) {
              FUN_10ab54988(plVar21[4],plVar20);
              return;
            }
            puVar19 = (undefined8 *)plVar21[6];
            func_0x000107c2b054(&ppppppuStack_80,&UNK_10f693138);
            if ((puVar19 == (undefined8 *)0x0) || (*(char *)(puVar19 + 8) != '\x02')) {
              if ((puVar19 != (undefined8 *)0x0) && (*(char *)(puVar19 + 8) == '\x01')) {
                (*(code *)*puVar19)(&ppppppuStack_80,puVar19);
              }
            }
            else {
              FUN_10a05aad0(puVar19,&ppppppuStack_80);
            }
            goto LAB_10ab41668;
          }
          plVar20 = plVar20 + 2;
        } while (plVar20 != plVar10);
        lVar16 = *(long *)(plStack_d0[10] + 0x100);
      }
      plVar20 = plStack_d0;
      plVar10 = *(long **)(lVar16 + 0x1c8);
      (**(code **)(*plVar10 + 0x60))();
      (**(code **)(*plVar20 + 0x50))(&ppppppuStack_80,plVar20);
      plVar20 = plStack_78;
      ppppppuStack_c8 = ppppppuStack_80;
      plStack_c0 = plStack_78;
      if (plStack_78 == (long *)0x0) {
        plVar20 = (long *)0x0;
      }
      else {
        plVar13 = plStack_78 + 1;
        do {
          cVar4 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(plVar13,0x10);
          if (bVar7) {
            *plVar13 = *plVar13 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (plStack_78 != (long *)0x0) {
          plVar13 = plStack_78 + 1;
          do {
            lVar16 = *plVar13;
            cVar4 = '\x01';
            bVar7 = (bool)ExclusiveMonitorPass(plVar13,0x10);
            if (bVar7) {
              *plVar13 = lVar16 + -1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (lVar16 == 0) {
            (**(code **)(*plStack_78 + 0x10))(plStack_78);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar20);
            plVar20 = plStack_c0;
          }
        }
      }
      ppppppuVar5 = ppppppuStack_c8;
      plVar11 = (long *)0xb0;
      __Znwm();
      plVar11[1] = 0;
      plVar11[2] = 0;
      *plVar11 = (long)&PTR_DAT_110c4a990;
      plVar13 = plVar11 + 3;
      if (plVar20 != (long *)0x0) {
        plVar2 = plVar20 + 2;
        do {
          cVar4 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(plVar2,0x10);
          if (bVar7) {
            *plVar2 = *plVar2 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
      }
      plVar11[4] = 0;
      plVar11[5] = 0;
      plVar11[3] = (long)&PTR_FUN_110c495d0;
      lVar16 = plVar21[2];
      if (*(char *)(lVar16 + 0x2f) < '\0') {
        func_0x000107c3192c(plVar11 + 6,*(undefined8 *)(lVar16 + 0x18),
                            *(undefined8 *)(lVar16 + 0x20));
      }
      else {
        lVar12 = *(long *)(lVar16 + 0x20);
        lVar23 = *(long *)(lVar16 + 0x18);
        plVar11[8] = *(long *)(lVar16 + 0x28);
        plVar11[7] = lVar12;
        plVar11[6] = lVar23;
      }
      uStack_90 = (long *)CONCAT17(1,(undefined7)uStack_90);
      plStack_a0 = (long *)CONCAT62(plStack_a0._2_6_,0x23);
      uVar1 = *(ulong *)(lVar17 + 0x210);
      plVar2 = *(long **)(lVar17 + 0x208);
      if (-1 < (char)*(byte *)(lVar17 + 0x21f)) {
        uVar1 = (ulong)*(byte *)(lVar17 + 0x21f);
        plVar2 = plVar22;
      }
      pplVar8 = &plStack_a0;
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6insertEmPKcm
                (pplVar8,0,plVar2,uVar1);
      plStack_78 = pplVar8[1];
      ppppppuStack_80 = (undefined8 ******)*pplVar8;
      plStack_70 = pplVar8[2];
      pplVar8[1] = (long *)0x0;
      pplVar8[2] = (long *)0x0;
      *pplVar8 = (long *)0x0;
      lVar16 = plVar21[2];
      uVar1 = *(ulong *)(lVar16 + 0x20);
      plVar2 = (long *)*(long *)(lVar16 + 0x18);
      if (-1 < (char)*(byte *)(lVar16 + 0x2f)) {
        uVar1 = (ulong)*(byte *)(lVar16 + 0x2f);
        plVar2 = (long *)(lVar16 + 0x18);
      }
      pppppppuVar9 = &ppppppuStack_80;
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                (pppppppuVar9,plVar2,uVar1);
      ppppppuVar25 = pppppppuVar9[1];
      ppppppuVar24 = *pppppppuVar9;
      plVar11[0xb] = (long)pppppppuVar9[2];
      plVar11[10] = (long)ppppppuVar25;
      plVar11[9] = (long)ppppppuVar24;
      pppppppuVar9[1] = (undefined8 ******)0x0;
      pppppppuVar9[2] = (undefined8 ******)0x0;
      *pppppppuVar9 = (undefined8 ******)0x0;
      if ((long)plStack_70 < 0) {
        __ZdlPv(ppppppuStack_80);
      }
      if ((long)uStack_90 < 0) {
        __ZdlPv(plStack_a0);
      }
      lVar16 = plVar21[2];
      *(int *)(plVar11 + 0xc) = (int)*(undefined8 *)(lVar16 + 0x30);
      *(undefined4 *)((long)plVar11 + 100) = *(undefined4 *)(lVar16 + 0x38);
      if (*(char *)(lVar17 + 0x21f) < '\0') {
        func_0x000107c3192c(plVar11 + 0xd,*(undefined8 *)(lVar17 + 0x208),
                            *(undefined8 *)(lVar17 + 0x210));
      }
      else {
        lVar23 = *(long *)(lVar17 + 0x210);
        lVar16 = *plVar22;
        plVar11[0xf] = *(long *)(lVar17 + 0x218);
        plVar11[0xe] = lVar23;
        plVar11[0xd] = lVar16;
      }
      plVar22 = plStack_d0;
      lVar16 = plVar10[1];
      lVar17 = *plVar10;
      plVar11[0x11] = plVar10[1];
      plVar11[0x10] = lVar17;
      if (lVar16 != 0) {
        plVar10 = (long *)(lVar16 + 0x10);
        do {
          cVar4 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(plVar10,0x10);
          if (bVar7) {
            *plVar10 = *plVar10 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
      }
      plVar11[0x12] = (long)ppppppuVar5;
      plVar11[0x13] = (long)plVar20;
      if (plVar20 != (long *)0x0) {
        plVar10 = plVar20 + 2;
        do {
          cVar4 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(plVar10,0x10);
          if (bVar7) {
            *plVar10 = *plVar10 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
      }
      FUN_10a05a5d4(plVar11 + 0x14,&ppppppuStack_80);
      plStack_b0 = plVar11;
      if (plVar20 != (long *)0x0) {
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar20);
        plVar10 = plVar20 + 1;
        do {
          lVar16 = *plVar10;
          cVar4 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(plVar10,0x10);
          if (bVar7) {
            *plVar10 = lVar16 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (lVar16 == 0) {
          plStack_b8 = plVar13;
          (**(code **)(*plVar20 + 0x10))(plVar20);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar20);
          plVar13 = plStack_b8;
        }
      }
      plStack_b8 = plVar13;
      plVar10 = plStack_b0;
      plVar13 = plStack_b8;
      plVar20 = (long *)plVar22[0x1f];
      if (plVar20 < (long *)plVar22[0x20]) {
        *plVar20 = (long)plStack_b8;
        plVar20[1] = (long)plStack_b0;
        if (plStack_b0 != (long *)0x0) {
          plVar10 = plStack_b0 + 1;
          do {
            cVar4 = '\x01';
            bVar7 = (bool)ExclusiveMonitorPass(plVar10,0x10);
            if (bVar7) {
              *plVar10 = *plVar10 + 1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
        }
        plVar20 = plVar20 + 2;
LAB_10ab415cc:
        plVar22[0x1f] = (long)plVar20;
        FUN_10ab54988(plVar21[4],&plStack_b8);
        plVar21 = plStack_b0;
        if (plStack_b0 == (long *)0x0) {
          return;
        }
        plVar22 = plStack_b0 + 1;
        do {
          lVar16 = *plVar22;
          cVar4 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(plVar22,0x10);
          if (bVar7) {
            *plVar22 = lVar16 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (lVar16 != 0) {
          return;
        }
        (**(code **)(*plStack_b0 + 0x10))(plStack_b0);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar21);
        return;
      }
      lVar16 = plVar22[0x1e];
      lVar17 = (long)plVar20 - lVar16;
      lVar23 = lVar17 >> 4;
      uVar1 = lVar23 + 1;
      if (uVar1 >> 0x3c == 0) {
        uVar15 = plVar22[0x20] - lVar16;
        uVar18 = (long)uVar15 >> 3;
        if (uVar18 <= uVar1) {
          uVar18 = uVar1;
        }
        if (0x7fffffffffffffef < uVar15) {
          uVar18 = 0xfffffffffffffff;
        }
        if (uVar18 >> 0x3c == 0) {
          lVar12 = uVar18 << 4;
          __Znwm();
          plVar11 = (long *)(lVar12 + lVar17);
          *plVar11 = (long)plVar13;
          plVar11[1] = (long)plVar10;
          if (plVar10 != (long *)0x0) {
            plVar10 = plVar10 + 1;
            do {
              cVar4 = '\x01';
              bVar7 = (bool)ExclusiveMonitorPass(plVar10,0x10);
              if (bVar7) {
                *plVar10 = *plVar10 + 1;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
            lVar16 = plVar22[0x1e];
            lVar17 = plVar22[0x1f] - lVar16;
            lVar23 = lVar17 >> 4;
          }
          plVar20 = plVar11 + 2;
          _memcpy(plVar11 + lVar23 * -2,lVar16,lVar17);
          plVar22[0x1e] = (long)(plVar11 + lVar23 * -2);
          plVar22[0x1f] = (long)plVar20;
          plVar22[0x20] = lVar12 + uVar18 * 0x10;
          if (lVar16 != 0) {
            __ZdlPv(lVar16);
          }
          goto LAB_10ab415cc;
        }
        func_0x000109ffded8();
      }
      else {
        FUN_10ab54f10();
      }
                    /* WARNING: Does not return */
      pcVar6 = (code *)SoftwareBreakpoint(1,0x10ab416a8);
      (*pcVar6)();
    }
LAB_10ab5e8c4:
    ___stack_chk_fail();
  }
  else {
    plVar22 = *(long **)(*(long *)(lVar17 + 0x50) + 0xaa0);
    ppppppuStack_c8 = (undefined8 ******)param_1[1];
    plStack_d0 = (long *)*param_1;
    if (param_1[1] != 0) {
      plVar20 = (long *)(param_1[1] + 8);
      do {
        cVar4 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(plVar20,0x10);
        if (bVar7) {
          *plVar20 = *plVar20 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
    plStack_b8 = (long *)plVar21[2];
    plStack_c0 = (long *)plVar21[1];
    plStack_b0 = (long *)plVar21[3];
    if (plStack_b0 != (long *)0x0) {
      plVar20 = plStack_b0 + 1;
      do {
        cVar4 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(plVar20,0x10);
        if (bVar7) {
          *plVar20 = *plVar20 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
    plStack_a0 = (long *)plVar21[5];
    uStack_a8 = plVar21[4];
    if (plVar21[5] != 0) {
      plVar20 = (long *)(plVar21[5] + 8);
      do {
        cVar4 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(plVar20,0x10);
        if (bVar7) {
          *plVar20 = *plVar20 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
    plVar20 = (long *)plVar21[7];
    uStack_90 = (long *)plVar21[7];
    plStack_98 = (long *)plVar21[6];
    if (plVar20 != (long *)0x0) {
      plVar21 = plVar20 + 1;
      do {
        cVar4 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(plVar21,0x10);
        if (bVar7) {
          *plVar21 = *plVar21 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
    plVar21 = plVar22 + 9;
    lStack_d8 = lVar17;
    FUN_10a1cda24(plVar21,&PTR_DAT_110c4b188);
    if (plVar21 != (long *)0x0) {
      pcStack_88 = (code *)&DAT_10f359e34;
      ppppppuStack_80 = (undefined8 *******)0xa;
      FUN_10a2677b4(plVar22[0x11],&pcStack_88);
      plVar10 = (long *)plVar21[4];
      if ((plVar10 == (long *)0x0) ||
         (plVar13 = plVar10, ___dynamic_cast(plVar10,&PTR_DAT_110bbadc8,&PTR_DAT_110bbadf8,0),
         plVar13 == (long *)0x0)) {
        puVar14 = &UNK_10f64983a;
        goto LAB_10ab5e8d0;
      }
      pcStack_88 = FUN_10ab5e944;
      FUN_10ab5ec04(&ppppppuStack_80,&lStack_d8);
      FUN_10a2a65b4(plVar13,&pcStack_88);
      (*(code *)*ppppppuStack_80)(&ppppppuStack_80);
      (**(code **)(*plVar10 + 0x10))(plVar10);
      plVar21 = (long *)plVar21[4];
      (**(code **)(*plVar21 + 0x18))();
      if ((int)plVar21 != 0) {
        (**(code **)(*(long *)((long)plVar22 + *(long *)(*plVar22 + -0x18)) + 0x28))
                  ((long)plVar22 + *(long *)(*plVar22 + -0x18));
      }
      if (plVar20 != (long *)0x0) {
        plVar21 = plVar20 + 1;
        do {
          lVar17 = *plVar21;
          cVar4 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(plVar21,0x10);
          if (bVar7) {
            *plVar21 = lVar17 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (lVar17 == 0) {
          (**(code **)(*plVar20 + 0x10))(plVar20);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar20);
        }
      }
      plVar21 = plStack_a0;
      if (plStack_a0 != (long *)0x0) {
        plVar22 = plStack_a0 + 1;
        do {
          lVar17 = *plVar22;
          cVar4 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(plVar22,0x10);
          if (bVar7) {
            *plVar22 = lVar17 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (lVar17 == 0) {
          (**(code **)(*plStack_a0 + 0x10))(plStack_a0);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar21);
        }
      }
      plVar21 = plStack_b0;
      if (plStack_b0 != (long *)0x0) {
        plVar22 = plStack_b0 + 1;
        do {
          lVar17 = *plVar22;
          cVar4 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(plVar22,0x10);
          if (bVar7) {
            *plVar22 = lVar17 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (lVar17 == 0) {
          (**(code **)(*plStack_b0 + 0x10))(plStack_b0);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar21);
        }
      }
      ppppppuVar5 = ppppppuStack_c8;
      if (ppppppuStack_c8 != (undefined8 ******)0x0) {
        plVar21 = (long *)(ppppppuStack_c8 + 1);
        do {
          lVar17 = *plVar21;
          cVar4 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(plVar21,0x10);
          if (bVar7) {
            *plVar21 = lVar17 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (lVar17 == 0) {
          (**(code **)((long)*ppppppuStack_c8 + 0x10))(ppppppuStack_c8);
          __ZNSt3__119__shared_weak_count14__release_weakEv(ppppppuVar5);
        }
      }
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar16) {
        return;
      }
      goto LAB_10ab5e8c4;
    }
  }
  puVar14 = &UNK_10f64981f;
LAB_10ab5e8d0:
  FUN_10a00946c(puVar14);
                    /* WARNING: Does not return */
  pcVar6 = (code *)SoftwareBreakpoint(1,0x10ab5e8d8);
  (*pcVar6)();
}



/* Entry: 10ab5e904; end: 10ab5e943;  */

long FUN_10ab5e904(long param_1)

{
  func_0x00010a07a8a8(param_1 + 0x40);
  FUN_10ab54f24(param_1 + 0x30);
  func_0x00010ab54f7c(param_1 + 0x20);
  FUN_10a29f714(param_1 + 8);
  return param_1;
}



/* Entry: 10ab5e944; end: 10ab5ec03;  */

void FUN_10ab5e944(long *param_1,long param_2)

{
  long *plVar1;
  long *plVar2;
  byte bVar3;
  char cVar4;
  code *pcVar5;
  bool bVar6;
  long **pplVar7;
  long *******ppppppplVar8;
  long *plVar9;
  long lVar10;
  long *plVar11;
  long *plVar12;
  ulong uVar13;
  ulong uVar14;
  long lVar15;
  long *plVar16;
  undefined8 *puVar17;
  long *plVar18;
  ulong uVar19;
  long *unaff_x22;
  long lVar20;
  long lVar21;
  long ******pppppplVar22;
  long *plVar23;
  float fVar24;
  long ******pppppplVar25;
  long *****ppppplVar26;
  long ******pppppplVar27;
  long *****ppppplVar28;
  long *plStack_b8;
  long *plStack_b0;
  char cStack_a1;
  long *plStack_a0;
  long *plStack_98;
  undefined8 uStack_90;
  long *plStack_88;
  long ******pppppplStack_80;
  long *plStack_78;
  long *plStack_70;
  undefined8 uStack_68;
  
  plStack_88 = *(long **)(param_2 + 0x10);
  lVar20 = *plStack_88;
  FUN_10a8a70cc(lVar20 + 0x108,plStack_88 + 1);
  ppppppplVar8 = (long *******)*param_1;
  pppppplStack_80 = (long ******)param_1[1];
  if (ppppppplVar8 != (long *******)pppppplStack_80) {
    plVar1 = (long *)(lVar20 + 0x118);
    plVar18 = (long *)(lVar20 + 0x128);
    do {
      pppppplVar22 = *ppppppplVar8;
      plVar16 = plVar1;
      func_0x000107c2b05c(plVar1,pppppplVar22 + 3);
      plVar23 = *(long **)(lVar20 + 0x120);
      if (plVar23 != (long *)0x0) {
        uVar19 = (long)plVar23 - 1;
        if (((ulong)plVar23 & uVar19) == 0) {
          unaff_x22 = (long *)(uVar19 & (ulong)plVar16);
        }
        else {
          unaff_x22 = plVar16;
          if (plVar23 <= plVar16) {
            uVar14 = 0;
            if (plVar23 != (long *)0x0) {
              uVar14 = (ulong)plVar16 / (ulong)plVar23;
            }
            unaff_x22 = (long *)((long)plVar16 - uVar14 * (long)plVar23);
          }
        }
        plVar11 = *(long **)(*plVar1 + (long)unaff_x22 * 8);
        if (plVar11 != (long *)0x0) {
          for (plVar11 = (long *)*plVar11; plVar11 != (long *)0x0; plVar11 = (long *)*plVar11) {
            plVar12 = (long *)plVar11[1];
            if (plVar12 == plVar16) {
              plVar12 = plVar1;
              func_0x000107c2b068(plVar1,plVar11 + 2,pppppplVar22 + 3);
              if (((ulong)plVar12 & 1) != 0) goto LAB_10ab5ebb0;
            }
            else {
              if (((ulong)plVar23 & uVar19) == 0) {
                plVar12 = (long *)((ulong)plVar12 & uVar19);
              }
              else if (plVar23 <= plVar12) {
                uVar14 = 0;
                if (plVar23 != (long *)0x0) {
                  uVar14 = (ulong)plVar12 / (ulong)plVar23;
                }
                plVar12 = (long *)((long)plVar12 - uVar14 * (long)plVar23);
              }
              if (plVar12 != unaff_x22) break;
            }
          }
        }
      }
      plVar11 = (long *)0x38;
      __Znwm();
      uStack_68 = 0;
      *plVar11 = 0;
      plVar11[1] = (long)plVar16;
      plStack_78 = plVar11;
      plStack_70 = plVar1;
      if (*(char *)((long)pppppplVar22 + 0x2f) < '\0') {
        func_0x000107c3192c(plVar11 + 2,pppppplVar22[3],pppppplVar22[4]);
      }
      else {
        ppppplVar28 = pppppplVar22[4];
        ppppplVar26 = pppppplVar22[3];
        plVar11[4] = (long)pppppplVar22[5];
        plVar11[3] = (long)ppppplVar28;
        plVar11[2] = (long)ppppplVar26;
      }
      pppppplVar22 = ppppppplVar8[1];
      pppppplVar25 = *ppppppplVar8;
      plVar11[6] = (long)ppppppplVar8[1];
      plVar11[5] = (long)pppppplVar25;
      if (pppppplVar22 != (long ******)0x0) {
        pppppplVar22 = pppppplVar22 + 1;
        do {
          cVar4 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(pppppplVar22,0x10);
          if (bVar6) {
            *pppppplVar22 = (long *****)((long)*pppppplVar22 + 1);
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
      }
      uStack_68 = CONCAT71(uStack_68._1_7_,1);
      fVar24 = (float)(*(long *)(lVar20 + 0x130) + 1);
      if ((plVar23 == (long *)0x0) || (*(float *)(lVar20 + 0x138) * (float)plVar23 < fVar24)) {
        uVar19 = 1;
        if ((long *)0x2 < plVar23) {
          uVar19 = (ulong)(((ulong)plVar23 & (long)plVar23 - 1U) != 0);
        }
        uVar19 = uVar19 | (long)plVar23 << 1;
        uVar14 = (ulong)(fVar24 / *(float *)(lVar20 + 0x138));
        if (uVar19 <= uVar14) {
          uVar19 = uVar14;
        }
        FUN_10a540688(plVar1,uVar19);
        plVar23 = *(long **)(lVar20 + 0x120);
        if (((ulong)plVar23 & (long)plVar23 - 1U) == 0) {
          unaff_x22 = (long *)((long)plVar23 - 1U & (ulong)plVar16);
        }
        else {
          unaff_x22 = plVar16;
          if (plVar23 <= plVar16) {
            uVar19 = 0;
            if (plVar23 != (long *)0x0) {
              uVar19 = (ulong)plVar16 / (ulong)plVar23;
            }
            unaff_x22 = (long *)((long)plVar16 - uVar19 * (long)plVar23);
          }
        }
      }
      lVar15 = *plVar1;
      plVar16 = *(long **)(lVar15 + (long)unaff_x22 * 8);
      if (plVar16 == (long *)0x0) {
        *plStack_78 = *plVar18;
        *plVar18 = (long)plStack_78;
        *(long **)(lVar15 + (long)unaff_x22 * 8) = plVar18;
        if (*plStack_78 != 0) {
          plVar16 = *(long **)(*plStack_78 + 8);
          if (((ulong)plVar23 & (long)plVar23 - 1U) == 0) {
            plVar16 = (long *)((ulong)plVar16 & (long)plVar23 - 1U);
          }
          else if (plVar23 <= plVar16) {
            uVar19 = 0;
            if (plVar23 != (long *)0x0) {
              uVar19 = (ulong)plVar16 / (ulong)plVar23;
            }
            plVar16 = (long *)((long)plVar16 - uVar19 * (long)plVar23);
          }
          *(long **)(*plVar1 + (long)plVar16 * 8) = plStack_78;
        }
      }
      else {
        *plStack_78 = *plVar16;
        *plVar16 = (long)plStack_78;
      }
      *(long *)(lVar20 + 0x130) = *(long *)(lVar20 + 0x130) + 1;
LAB_10ab5ebb0:
      ppppppplVar8 = ppppppplVar8 + 2;
    } while (ppppppplVar8 != (long *******)pppppplStack_80);
  }
  plVar1 = plStack_88;
  lVar20 = plStack_88[4];
  if (*(char *)(lVar20 + 0x2f) < '\0') {
    if (*(long *)(lVar20 + 0x20) == 0) goto LAB_10ab41260;
  }
  else if (*(char *)(lVar20 + 0x2f) == '\0') goto LAB_10ab41260;
  if (*(long *)(lVar20 + 0x30) < 1) {
LAB_10ab41260:
    puVar17 = (undefined8 *)plStack_88[8];
    func_0x000107c2b054(&pppppplStack_80,&UNK_10f6930f8);
    if ((puVar17 == (undefined8 *)0x0) || (*(char *)(puVar17 + 8) != '\x02')) {
      if ((puVar17 != (undefined8 *)0x0) && (*(char *)(puVar17 + 8) == '\x01')) {
        (*(code *)*puVar17)(&pppppplStack_80,puVar17);
      }
    }
    else {
      FUN_10a05aad0(puVar17,&pppppplStack_80);
    }
LAB_10ab41668:
    if ((long)plStack_70 < 0) {
      __ZdlPv(pppppplStack_80);
    }
    return;
  }
  plVar11 = (long *)plStack_88[3];
  lVar15 = *(long *)(plVar11[10] + 0x100);
  plVar18 = (long *)(lVar15 + 0x208);
  plVar16 = (long *)plVar11[0x1e];
  plVar23 = (long *)plVar11[0x1f];
  lVar20 = lVar15;
  if (plVar16 != plVar23) {
    do {
      cStack_a1 = '\x01';
      plStack_b8 = (long *)CONCAT62(plStack_b8._2_6_,0x23);
      uVar19 = *(ulong *)(lVar15 + 0x210);
      plVar12 = *(long **)(lVar15 + 0x208);
      if (-1 < (char)*(byte *)(lVar15 + 0x21f)) {
        uVar19 = (ulong)*(byte *)(lVar15 + 0x21f);
        plVar12 = plVar18;
      }
      pplVar7 = &plStack_b8;
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6insertEmPKcm
                (pplVar7,0,plVar12,uVar19);
      plStack_98 = pplVar7[1];
      plStack_a0 = *pplVar7;
      uStack_90 = pplVar7[2];
      pplVar7[1] = (long *)0x0;
      pplVar7[2] = (long *)0x0;
      *pplVar7 = (long *)0x0;
      lVar20 = plVar1[4];
      uVar19 = *(ulong *)(lVar20 + 0x20);
      plVar12 = (long *)*(long *)(lVar20 + 0x18);
      if (-1 < (char)*(byte *)(lVar20 + 0x2f)) {
        uVar19 = (ulong)*(byte *)(lVar20 + 0x2f);
        plVar12 = (long *)(lVar20 + 0x18);
      }
      pplVar7 = &plStack_a0;
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                (pplVar7,plVar12,uVar19);
      plStack_70 = pplVar7[2];
      plStack_78 = pplVar7[1];
      pppppplStack_80 = (long ******)*pplVar7;
      pplVar7[1] = (long *)0x0;
      pplVar7[2] = (long *)0x0;
      *pplVar7 = (long *)0x0;
      plVar9 = plStack_70;
      lVar20 = *plVar16;
      plVar12 = plStack_78;
      if (-1 < (long)plStack_70) {
        plVar12 = (long *)((ulong)plStack_70 >> 0x38);
      }
      bVar3 = *(byte *)(lVar20 + 0x47);
      plVar2 = *(long **)(lVar20 + 0x38);
      if (-1 < (char)bVar3) {
        plVar2 = (long *)(ulong)bVar3;
      }
      if (plVar12 == plVar2) {
        ppppppplVar8 = (long *******)pppppplStack_80;
        if (-1 < (long)plStack_70) {
          ppppppplVar8 = &pppppplStack_80;
        }
        plVar12 = (long *)*(long *)(lVar20 + 0x30);
        if (-1 < (char)bVar3) {
          plVar12 = (long *)(lVar20 + 0x30);
        }
        _memcmp(ppppppplVar8,plVar12);
        bVar6 = (int)ppppppplVar8 == 0;
      }
      else {
        bVar6 = false;
      }
      if ((long)plVar9 < 0) {
        __ZdlPv(pppppplStack_80);
      }
      if ((long)uStack_90 < 0) {
        __ZdlPv(plStack_a0);
      }
      if (cStack_a1 < '\0') {
        __ZdlPv(plStack_b8);
      }
      if (bVar6) {
        if ((*(long *)(plVar1[4] + 0x30) == (long)*(int *)(*plVar16 + 0x48)) &&
           (*(int *)(plVar1[4] + 0x38) == *(int *)(*plVar16 + 0x4c))) {
          FUN_10ab54988(plVar1[6],plVar16);
          return;
        }
        puVar17 = (undefined8 *)plVar1[8];
        func_0x000107c2b054(&pppppplStack_80,&UNK_10f693138);
        if ((puVar17 == (undefined8 *)0x0) || (*(char *)(puVar17 + 8) != '\x02')) {
          if ((puVar17 != (undefined8 *)0x0) && (*(char *)(puVar17 + 8) == '\x01')) {
            (*(code *)*puVar17)(&pppppplStack_80,puVar17);
          }
        }
        else {
          FUN_10a05aad0(puVar17,&pppppplStack_80);
        }
        goto LAB_10ab41668;
      }
      plVar16 = plVar16 + 2;
    } while (plVar16 != plVar23);
    lVar20 = *(long *)(plVar11[10] + 0x100);
  }
  plVar23 = *(long **)(lVar20 + 0x1c8);
  (**(code **)(*plVar23 + 0x60))();
  (**(code **)(*plVar11 + 0x50))(&pppppplStack_80,plVar11);
  plVar16 = plStack_78;
  pppppplVar22 = pppppplStack_80;
  if (plStack_78 == (long *)0x0) {
    plVar16 = (long *)0x0;
  }
  else {
    plVar12 = plStack_78 + 1;
    do {
      cVar4 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar12,0x10);
      if (bVar6) {
        *plVar12 = *plVar12 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (plStack_78 != (long *)0x0) {
      plVar12 = plStack_78 + 1;
      do {
        lVar20 = *plVar12;
        cVar4 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar12,0x10);
        if (bVar6) {
          *plVar12 = lVar20 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (lVar20 == 0) {
        (**(code **)(*plStack_78 + 0x10))(plStack_78);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar16);
      }
    }
  }
  plVar9 = (long *)0xb0;
  __Znwm();
  plVar9[1] = 0;
  plVar9[2] = 0;
  *plVar9 = (long)&PTR_DAT_110c4a990;
  plVar12 = plVar9 + 3;
  if (plVar16 != (long *)0x0) {
    plVar2 = plVar16 + 2;
    do {
      cVar4 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar6) {
        *plVar2 = *plVar2 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  plVar9[4] = 0;
  plVar9[5] = 0;
  plVar9[3] = (long)&PTR_FUN_110c495d0;
  lVar20 = plVar1[4];
  if (*(char *)(lVar20 + 0x2f) < '\0') {
    func_0x000107c3192c(plVar9 + 6,*(undefined8 *)(lVar20 + 0x18),*(undefined8 *)(lVar20 + 0x20));
  }
  else {
    lVar10 = *(long *)(lVar20 + 0x20);
    lVar21 = *(long *)(lVar20 + 0x18);
    plVar9[8] = *(long *)(lVar20 + 0x28);
    plVar9[7] = lVar10;
    plVar9[6] = lVar21;
  }
  uStack_90 = (long *)CONCAT17(1,(undefined7)uStack_90);
  plStack_a0 = (long *)CONCAT62(plStack_a0._2_6_,0x23);
  uVar19 = *(ulong *)(lVar15 + 0x210);
  plVar2 = *(long **)(lVar15 + 0x208);
  if (-1 < (char)*(byte *)(lVar15 + 0x21f)) {
    uVar19 = (ulong)*(byte *)(lVar15 + 0x21f);
    plVar2 = plVar18;
  }
  pplVar7 = &plStack_a0;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6insertEmPKcm
            (pplVar7,0,plVar2,uVar19);
  plStack_78 = pplVar7[1];
  pppppplStack_80 = (long ******)*pplVar7;
  plStack_70 = pplVar7[2];
  pplVar7[1] = (long *)0x0;
  pplVar7[2] = (long *)0x0;
  *pplVar7 = (long *)0x0;
  lVar20 = plVar1[4];
  uVar19 = *(ulong *)(lVar20 + 0x20);
  plVar2 = (long *)*(long *)(lVar20 + 0x18);
  if (-1 < (char)*(byte *)(lVar20 + 0x2f)) {
    uVar19 = (ulong)*(byte *)(lVar20 + 0x2f);
    plVar2 = (long *)(lVar20 + 0x18);
  }
  ppppppplVar8 = &pppppplStack_80;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (ppppppplVar8,plVar2,uVar19);
  pppppplVar27 = ppppppplVar8[1];
  pppppplVar25 = *ppppppplVar8;
  plVar9[0xb] = (long)ppppppplVar8[2];
  plVar9[10] = (long)pppppplVar27;
  plVar9[9] = (long)pppppplVar25;
  ppppppplVar8[1] = (long ******)0x0;
  ppppppplVar8[2] = (long ******)0x0;
  *ppppppplVar8 = (long ******)0x0;
  if ((long)plStack_70 < 0) {
    __ZdlPv(pppppplStack_80);
  }
  if ((long)uStack_90 < 0) {
    __ZdlPv(plStack_a0);
  }
  lVar20 = plVar1[4];
  *(int *)(plVar9 + 0xc) = (int)*(undefined8 *)(lVar20 + 0x30);
  *(undefined4 *)((long)plVar9 + 100) = *(undefined4 *)(lVar20 + 0x38);
  if (*(char *)(lVar15 + 0x21f) < '\0') {
    func_0x000107c3192c(plVar9 + 0xd,*(undefined8 *)(lVar15 + 0x208),*(undefined8 *)(lVar15 + 0x210)
                       );
  }
  else {
    lVar21 = *(long *)(lVar15 + 0x210);
    lVar20 = *plVar18;
    plVar9[0xf] = *(long *)(lVar15 + 0x218);
    plVar9[0xe] = lVar21;
    plVar9[0xd] = lVar20;
  }
  lVar20 = plVar23[1];
  lVar15 = *plVar23;
  plVar9[0x11] = plVar23[1];
  plVar9[0x10] = lVar15;
  if (lVar20 != 0) {
    plVar18 = (long *)(lVar20 + 0x10);
    do {
      cVar4 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar18,0x10);
      if (bVar6) {
        *plVar18 = *plVar18 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  plVar9[0x12] = (long)pppppplVar22;
  plVar9[0x13] = (long)plVar16;
  if (plVar16 != (long *)0x0) {
    plVar18 = plVar16 + 2;
    do {
      cVar4 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar18,0x10);
      if (bVar6) {
        *plVar18 = *plVar18 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  FUN_10a05a5d4(plVar9 + 0x14,&pppppplStack_80);
  plStack_b0 = plVar9;
  if (plVar16 != (long *)0x0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv(plVar16);
    plVar18 = plVar16 + 1;
    do {
      lVar20 = *plVar18;
      cVar4 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar18,0x10);
      if (bVar6) {
        *plVar18 = lVar20 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar20 == 0) {
      plStack_b8 = plVar12;
      (**(code **)(*plVar16 + 0x10))(plVar16);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar16);
      plVar12 = plStack_b8;
    }
  }
  plStack_b8 = plVar12;
  plVar16 = plStack_b0;
  plVar23 = plStack_b8;
  plVar18 = (long *)plVar11[0x1f];
  if (plVar18 < (long *)plVar11[0x20]) {
    *plVar18 = (long)plStack_b8;
    plVar18[1] = (long)plStack_b0;
    if (plStack_b0 != (long *)0x0) {
      plVar16 = plStack_b0 + 1;
      do {
        cVar4 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar16,0x10);
        if (bVar6) {
          *plVar16 = *plVar16 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
    plVar18 = plVar18 + 2;
LAB_10ab415cc:
    plVar11[0x1f] = (long)plVar18;
    FUN_10ab54988(plVar1[6],&plStack_b8);
    plVar1 = plStack_b0;
    if (plStack_b0 == (long *)0x0) {
      return;
    }
    plVar18 = plStack_b0 + 1;
    do {
      lVar20 = *plVar18;
      cVar4 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar18,0x10);
      if (bVar6) {
        *plVar18 = lVar20 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar20 != 0) {
      return;
    }
    (**(code **)(*plStack_b0 + 0x10))(plStack_b0);
    __ZNSt3__119__shared_weak_count14__release_weakEv(plVar1);
    return;
  }
  lVar20 = plVar11[0x1e];
  lVar15 = (long)plVar18 - lVar20;
  lVar21 = lVar15 >> 4;
  uVar19 = lVar21 + 1;
  if (uVar19 >> 0x3c == 0) {
    uVar13 = plVar11[0x20] - lVar20;
    uVar14 = (long)uVar13 >> 3;
    if (uVar14 <= uVar19) {
      uVar14 = uVar19;
    }
    if (0x7fffffffffffffef < uVar13) {
      uVar14 = 0xfffffffffffffff;
    }
    if (uVar14 >> 0x3c == 0) {
      lVar10 = uVar14 << 4;
      __Znwm();
      plVar12 = (long *)(lVar10 + lVar15);
      *plVar12 = (long)plVar23;
      plVar12[1] = (long)plVar16;
      if (plVar16 != (long *)0x0) {
        plVar16 = plVar16 + 1;
        do {
          cVar4 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar16,0x10);
          if (bVar6) {
            *plVar16 = *plVar16 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        lVar20 = plVar11[0x1e];
        lVar15 = plVar11[0x1f] - lVar20;
        lVar21 = lVar15 >> 4;
      }
      plVar18 = plVar12 + 2;
      _memcpy(plVar12 + lVar21 * -2,lVar20,lVar15);
      plVar11[0x1e] = (long)(plVar12 + lVar21 * -2);
      plVar11[0x1f] = (long)plVar18;
      plVar11[0x20] = lVar10 + uVar14 * 0x10;
      if (lVar20 != 0) {
        __ZdlPv(lVar20);
      }
      goto LAB_10ab415cc;
    }
    func_0x000109ffded8();
  }
  else {
    FUN_10ab54f10();
  }
                    /* WARNING: Does not return */
  pcVar5 = (code *)SoftwareBreakpoint(1,0x10ab416a8);
  (*pcVar5)();
}



/* Entry: 10ab5ec04; end: 10ab5ed27;  */

undefined8 * FUN_10ab5ec04(undefined8 *param_1,undefined8 *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 uVar6;
  
  *param_1 = &PTR_DAT_110c4b198;
  puVar4 = (undefined8 *)0x50;
  __Znwm();
  uVar6 = *param_2;
  puVar4[1] = param_2[1];
  *puVar4 = uVar6;
  lVar5 = param_2[2];
  puVar4[2] = lVar5;
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
  uVar6 = param_2[3];
  puVar4[4] = param_2[4];
  puVar4[3] = uVar6;
  lVar5 = param_2[5];
  puVar4[5] = lVar5;
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
  lVar5 = param_2[7];
  uVar6 = param_2[6];
  puVar4[7] = param_2[7];
  puVar4[6] = uVar6;
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
  lVar5 = param_2[9];
  uVar6 = param_2[8];
  puVar4[9] = param_2[9];
  puVar4[8] = uVar6;
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
  param_1[1] = puVar4;
  return param_1;
}



/* Entry: 10ab5ed28; end: 10ab5ed47;  */

void FUN_10ab5ed28(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_2[1] = 0;
  return;
}



/* Entry: 10ab5ed48; end: 10ab5ee37;  */

undefined8 * FUN_10ab5ed48(undefined8 *param_1,undefined8 *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  *param_1 = &PTR_DAT_110c4b1b8;
  puVar4 = (undefined8 *)0x40;
  __Znwm();
  lVar5 = param_2[3];
  uVar6 = *param_2;
  uVar8 = param_2[3];
  uVar7 = param_2[2];
  puVar4[1] = param_2[1];
  *puVar4 = uVar6;
  puVar4[3] = uVar8;
  puVar4[2] = uVar7;
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
  lVar5 = param_2[5];
  uVar6 = param_2[4];
  puVar4[5] = param_2[5];
  puVar4[4] = uVar6;
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
  lVar5 = param_2[7];
  uVar6 = param_2[6];
  puVar4[7] = param_2[7];
  puVar4[6] = uVar6;
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
  param_1[1] = puVar4;
  return param_1;
}



/* Entry: 10ab5ee38; end: 10ab5ee57;  */

void FUN_10ab5ee38(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_2[1] = 0;
  return;
}



/* Entry: 10ab5ee58; end: 10ab5ef3b;  */

long FUN_10ab5ee58(long *param_1,undefined8 param_2)

{
  ulong uVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  ulong uVar6;
  long *plVar7;
  
  plVar2 = param_1;
  func_0x000107c2b05c();
  plVar5 = (long *)param_1[1];
  if (plVar5 != (long *)0x0) {
    uVar6 = (long)plVar5 - 1;
    if (((ulong)plVar5 & uVar6) == 0) {
      plVar7 = (long *)(uVar6 & (ulong)plVar2);
    }
    else {
      plVar7 = plVar2;
      if (plVar5 <= plVar2) {
        uVar1 = 0;
        if (plVar5 != (long *)0x0) {
          uVar1 = (ulong)plVar2 / (ulong)plVar5;
        }
        plVar7 = (long *)((long)plVar2 - uVar1 * (long)plVar5);
      }
    }
    plVar3 = *(long **)(*param_1 + (long)plVar7 * 8);
    if (plVar3 != (long *)0x0) {
      plVar3 = (long *)*plVar3;
      do {
        if (plVar3 == (long *)0x0) {
          return 0;
        }
        plVar4 = (long *)plVar3[1];
        if (plVar2 == plVar4) {
          plVar4 = param_1;
          func_0x000107c2b068(param_1,plVar3 + 2,param_2);
          if (((ulong)plVar4 & 1) != 0) {
            return (long)plVar3;
          }
        }
        else {
          if (((ulong)plVar5 & uVar6) == 0) {
            plVar4 = (long *)((ulong)plVar4 & uVar6);
          }
          else if (plVar5 <= plVar4) {
            uVar1 = 0;
            if (plVar5 != (long *)0x0) {
              uVar1 = (ulong)plVar4 / (ulong)plVar5;
            }
            plVar4 = (long *)((long)plVar4 - uVar1 * (long)plVar5);
          }
          if (plVar4 != plVar7) {
            return 0;
          }
        }
        plVar3 = (long *)*plVar3;
      } while( true );
    }
  }
  return 0;
}



/* Entry: 10ab5ef3c; end: 10ab5f037;  */

undefined1  [16] FUN_10ab5ef3c(ulong param_1,undefined8 *param_2,ulong param_3)

{
  undefined *puVar1;
  ulong uVar2;
  undefined1 auVar3 [16];
  undefined **ppuStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined4 uStack_90;
  undefined8 uStack_8c;
  undefined4 uStack_84;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined4 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined **ppuStack_40;
  undefined8 uStack_38;
  
  *(undefined ***)(param_1 + 0x1b0) = &PTR_DAT_110c4a788;
  puVar1 = &UNK_10f692150;
  if ((undefined *)*param_2 != (undefined *)0x0) {
    puVar1 = (undefined *)*param_2;
  }
  func_0x000107c2c4dc(param_1 + 0x1b8,puVar1);
  ppuStack_a8 = (undefined **)*param_2;
  uStack_a0 = 0;
  uStack_98 = 0;
  uStack_90 = (undefined4)param_3;
  uStack_8c = param_2[1];
  uStack_84 = *(undefined4 *)(param_2 + 2);
  uStack_78 = 0;
  uStack_80 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_60 = param_2[7];
  uStack_58 = *(undefined4 *)(param_2 + 8);
  uStack_50 = 0;
  uStack_48 = 0;
  func_0x00010a052690(param_1 + 0x168,&ppuStack_a8);
  uVar2 = param_1;
  FUN_10a0051e8(param_1,param_3,*(undefined4 *)(param_2 + 1),*(undefined4 *)(param_2 + 8),
                *(undefined4 *)((long)param_2 + 0xc),*(undefined4 *)(param_2 + 2));
  if ((uVar2 & 1) == 0) {
    ppuStack_40 = &PTR_DAT_110c4a788;
    uStack_38 = 0;
    ppuStack_a8 = &PTR_DAT_110c46558;
    uStack_a0 = 0;
    uStack_98 = CONCAT71(uStack_98._1_7_,1);
    func_0x0001098949cc(param_1,*param_2,&ppuStack_40,&ppuStack_a8);
  }
  auVar3._8_8_ = param_3 & 0xffffffff | (ulong)*(uint *)(param_2 + 1) << 0x20;
  auVar3._0_8_ = param_1;
  return auVar3;
}



/* Entry: 10ab5f038; end: 10ab5f0f3;  */

void FUN_10ab5f038(ulong param_1)

{
  long lVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  code *pcVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  ulong uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  
  *(undefined **)(param_1 + 0x1b0) = PTR___ZTIDn_1103469e8;
  lVar1 = *(long *)(param_1 + 0x170);
  if (*(long *)(param_1 + 0x168) != lVar1) {
    uStack_88 = *(undefined8 *)(lVar1 + -0x60);
    uStack_90 = *(undefined8 *)(lVar1 + -0x68);
    uStack_68 = *(undefined8 *)(lVar1 + -0x40);
    uVar6 = *(ulong *)(lVar1 + -0x48);
    uVar7 = *(ulong *)(lVar1 + -0x50);
    uStack_80 = *(undefined8 *)(lVar1 + -0x58);
    uStack_58 = *(undefined8 *)(lVar1 + -0x30);
    uStack_60 = *(undefined8 *)(lVar1 + -0x38);
    uStack_48 = *(undefined8 *)(lVar1 + -0x20);
    uStack_50 = *(undefined8 *)(lVar1 + -0x28);
    uStack_30 = *(undefined8 *)(lVar1 + -8);
    uStack_38 = *(undefined8 *)(lVar1 + -0x10);
    uStack_40 = *(ulong *)(lVar1 + -0x18);
    *(long *)(param_1 + 0x170) = lVar1 + -0x68;
    uStack_78._4_4_ = (undefined4)(uVar7 >> 0x20);
    uVar2 = uStack_78._4_4_;
    uStack_70._4_4_ = (undefined4)(uVar6 >> 0x20);
    uVar3 = uStack_70._4_4_;
    uVar5 = param_1;
    uStack_78 = uVar7;
    uStack_70 = uVar6;
    FUN_10a0051e8(param_1,uVar7 & 0xffffffff,uVar2,uStack_40 & 0xffffffff,uVar6 & 0xffffffff,uVar3);
    if ((uVar5 & 1) == 0) {
      func_0x000109894f40(param_1,0);
      FUN_10a054234(param_1,&uStack_90,param_1 + 0x1b8,&UNK_10f693174,0x1b);
      FUN_10a05431c(param_1);
    }
    return;
  }
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x10ab5f0f4);
  (*pcVar4)();
}



/* Entry: 10ab5f0f4; end: 10ab5f257;  */

void FUN_10ab5f0f4(long *param_1,long *param_2)

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



/* Entry: 10ab5f258; end: 10ab5f377;  */

void FUN_10ab5f258(long param_1,undefined8 *param_2,undefined8 param_3)

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



/* Entry: 10ab5f378; end: 10ab5f3b7;  */

void FUN_10ab5f378(long param_1)

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



/* Entry: 10ab5f3b8; end: 10ab5f3f3;  */

long FUN_10ab5f3b8(long param_1,undefined8 param_2)

{
  FUN_10a042ab0(param_2,&PTR_DAT_110c4b228);
  param_1 = param_1 + 0x20;
  if ((int)param_2 == 0) {
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 10ab5f3f4; end: 10ab5f407;  */

void FUN_10ab5f3f4(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10ab5f408; end: 10ab5f427;  */

void FUN_10ab5f408(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110c4b248;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10ab5f428; end: 10ab5f437;  */

void FUN_10ab5f428(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010ab5f430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 10ab5f438; end: 10ab5f533;  */

undefined1  [16] FUN_10ab5f438(ulong param_1,undefined8 *param_2,ulong param_3)

{
  undefined *puVar1;
  ulong uVar2;
  undefined1 auVar3 [16];
  undefined **ppuStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined4 uStack_90;
  undefined8 uStack_8c;
  undefined4 uStack_84;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined4 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined **ppuStack_40;
  undefined8 uStack_38;
  
  *(undefined ***)(param_1 + 0x1b0) = &PTR_DAT_110c4a7a0;
  puVar1 = &UNK_10f692150;
  if ((undefined *)*param_2 != (undefined *)0x0) {
    puVar1 = (undefined *)*param_2;
  }
  func_0x000107c2c4dc(param_1 + 0x1b8,puVar1);
  ppuStack_a8 = (undefined **)*param_2;
  uStack_a0 = 0;
  uStack_98 = 0;
  uStack_90 = (undefined4)param_3;
  uStack_8c = param_2[1];
  uStack_84 = *(undefined4 *)(param_2 + 2);
  uStack_78 = 0;
  uStack_80 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_60 = param_2[7];
  uStack_58 = *(undefined4 *)(param_2 + 8);
  uStack_50 = 0;
  uStack_48 = 0;
  func_0x00010a052690(param_1 + 0x168,&ppuStack_a8);
  uVar2 = param_1;
  FUN_10a0051e8(param_1,param_3,*(undefined4 *)(param_2 + 1),*(undefined4 *)(param_2 + 8),
                *(undefined4 *)((long)param_2 + 0xc),*(undefined4 *)(param_2 + 2));
  if ((uVar2 & 1) == 0) {
    ppuStack_40 = &PTR_DAT_110c4a7a0;
    uStack_38 = 0;
    ppuStack_a8 = &PTR_DAT_110c41a28;
    uStack_a0 = 0;
    uStack_98 = CONCAT71(uStack_98._1_7_,1);
    func_0x0001098949cc(param_1,*param_2,&ppuStack_40,&ppuStack_a8);
  }
  auVar3._8_8_ = param_3 & 0xffffffff | (ulong)*(uint *)(param_2 + 1) << 0x20;
  auVar3._0_8_ = param_1;
  return auVar3;
}



/* Entry: 10ab5f534; end: 10ab5f597;  */

ulong FUN_10ab5f534(ulong param_1,undefined8 *param_2)

{
  code *pcVar1;
  ulong uVar2;
  
  uVar2 = param_1;
  FUN_10a0051e8(param_1,*(undefined4 *)(param_2 + 3),*(undefined4 *)((long)param_2 + 0x1c),
                *(undefined4 *)(param_2 + 10),*(undefined4 *)(param_2 + 4),
                *(undefined4 *)((long)param_2 + 0x24));
  if ((uVar2 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10ab5f598);
      (*pcVar1)();
    }
    FUN_10a054dac(param_1,*param_2,FUN_10ab5f598,1,*(undefined8 *)(param_1 + 0x40));
  }
  return param_1;
}



/* Entry: 10ab5f598; end: 10ab5f6e7;  */

void FUN_10ab5f598(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  char cVar1;
  bool bVar2;
  code *pcVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  undefined *puVar8;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  ulong uVar16;
  ulong uVar17;
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
  func_0x000109898688(param_2,param_3);
  if (plVar6 == (long *)0x0) {
    puVar8 = &UNK_10f68f52e;
  }
  else {
    plVar7 = param_2;
    FUN_10a053854(param_2,plVar6);
    if ((plVar7 != (long *)0x0) && (___dynamic_cast(), plVar7 != (long *)0x0)) {
      FUN_10a052e3c(param_5);
      FUN_10ab42bac(&stack0xffffffffffffffb0,plVar7);
      func_0x00010a98baa0(param_1,param_2,&stack0xffffffffffffffb0);
      if (in_stack_ffffffffffffffb8 != (long *)0x0) {
        plVar6 = in_stack_ffffffffffffffb8 + 1;
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
          (**(code **)(*in_stack_ffffffffffffffb8 + 0x10))(in_stack_ffffffffffffffb8);
          __ZNSt3__119__shared_weak_count14__release_weakEv(in_stack_ffffffffffffffb8);
        }
      }
      plVar6 = plVar5 + 0x4b;
      lVar11 = plVar5[0x59];
      uVar9 = lVar11 - 1;
      plVar5[0x59] = uVar9;
      if (uVar9 < 8) {
        uVar9 = plVar6[lVar11 + 2];
        if (plVar5[0x5a] == uVar9) {
          return;
        }
      }
      else {
        uVar9 = *(ulong *)(plVar5[0x57] + -8);
        plVar5[0x57] = plVar5[0x57] + -8;
        if (plVar5[0x5a] == uVar9) {
          return;
        }
      }
      lVar11 = *plVar6;
      lVar14 = plVar5[0x4c];
      lVar12 = lVar14 - lVar11;
      uVar16 = lVar12 >> 4;
      if (uVar16 < uVar9) {
        uVar17 = uVar9 - uVar16;
        lVar15 = plVar5[0x4d];
        if ((ulong)(lVar15 - lVar14 >> 4) < uVar17) {
          if (uVar9 >> 0x3c == 0) {
            uVar10 = lVar15 - lVar11 >> 3;
            if (uVar10 <= uVar9) {
              uVar10 = uVar9;
            }
            if (0x7fffffffffffffef < (ulong)(lVar15 - lVar11)) {
              uVar10 = 0xfffffffffffffff;
            }
            plStack_68 = plVar6;
            if (uVar10 >> 0x3c == 0) {
              lVar4 = uVar10 << 4;
              __Znwm();
              lVar14 = lVar4 + lVar12;
              _bzero(lVar14,uVar17 * 0x10);
              lVar13 = lVar14 + uVar16 * -0x10;
              _memcpy(lVar13,lVar11,lVar12);
              *plVar6 = lVar13;
              plVar5[0x4c] = lVar14 + uVar17 * 0x10;
              plVar5[0x4d] = lVar4 + uVar10 * 0x10;
              lStack_88 = lVar11;
              lStack_80 = lVar11;
              lStack_78 = lVar11;
              lStack_70 = lVar15;
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
        _bzero(lVar14,uVar17 * 0x10);
        plVar5[0x4c] = lVar14 + uVar17 * 0x10;
      }
      else if (uVar9 < uVar16) {
        lVar11 = lVar11 + uVar9 * 0x10;
        while (lVar14 != lVar11) {
          lVar14 = lVar14 + -0x10;
          func_0x00010988c204(lVar14);
        }
        plVar5[0x4c] = lVar11;
      }
code_r0x00010988c138:
      plVar5[0x5a] = uVar9;
      return;
    }
    puVar8 = &UNK_10f685496;
  }
  func_0x00010988bd28(puVar8);
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x10ab5f6d4);
  (*pcVar3)();
}



/* Entry: 10ab5f6e8; end: 10ab5f73b;  */

ulong FUN_10ab5f6e8(ulong param_1,undefined8 *param_2)

{
  ulong uVar1;
  
  uVar1 = param_1;
  FUN_10a0051e8(param_1,*(undefined4 *)(param_2 + 3),*(undefined4 *)((long)param_2 + 0x1c),
                *(undefined4 *)(param_2 + 10),*(undefined4 *)(param_2 + 4),
                *(undefined4 *)((long)param_2 + 0x24));
  if ((uVar1 & 1) == 0) {
    FUN_10a0605c4(param_1,*param_2,FUN_10ab5f73c,0);
  }
  return param_1;
}



/* Entry: 10ab5f73c; end: 10ab5f867;  */

void FUN_10ab5f73c(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
      uVar8 = plVar5[0x1f];
      plVar4 = (long *)plVar5[0x1e];
      if (-1 < (char)*(byte *)((long)plVar5 + 0x107)) {
        uVar8 = (ulong)*(byte *)((long)plVar5 + 0x107);
        plVar4 = plVar5 + 0x1e;
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
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10ab5f854);
  (*pcVar1)();
}



/* Entry: 10ab5f868; end: 10ab5f923;  */

void FUN_10ab5f868(ulong param_1)

{
  long lVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  code *pcVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  ulong uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  
  *(undefined **)(param_1 + 0x1b0) = PTR___ZTIDn_1103469e8;
  lVar1 = *(long *)(param_1 + 0x170);
  if (*(long *)(param_1 + 0x168) != lVar1) {
    uStack_88 = *(undefined8 *)(lVar1 + -0x60);
    uStack_90 = *(undefined8 *)(lVar1 + -0x68);
    uStack_68 = *(undefined8 *)(lVar1 + -0x40);
    uVar6 = *(ulong *)(lVar1 + -0x48);
    uVar7 = *(ulong *)(lVar1 + -0x50);
    uStack_80 = *(undefined8 *)(lVar1 + -0x58);
    uStack_58 = *(undefined8 *)(lVar1 + -0x30);
    uStack_60 = *(undefined8 *)(lVar1 + -0x38);
    uStack_48 = *(undefined8 *)(lVar1 + -0x20);
    uStack_50 = *(undefined8 *)(lVar1 + -0x28);
    uStack_30 = *(undefined8 *)(lVar1 + -8);
    uStack_38 = *(undefined8 *)(lVar1 + -0x10);
    uStack_40 = *(ulong *)(lVar1 + -0x18);
    *(long *)(param_1 + 0x170) = lVar1 + -0x68;
    uStack_78._4_4_ = (undefined4)(uVar7 >> 0x20);
    uVar2 = uStack_78._4_4_;
    uStack_70._4_4_ = (undefined4)(uVar6 >> 0x20);
    uVar3 = uStack_70._4_4_;
    uVar5 = param_1;
    uStack_78 = uVar7;
    uStack_70 = uVar6;
    FUN_10a0051e8(param_1,uVar7 & 0xffffffff,uVar2,uStack_40 & 0xffffffff,uVar6 & 0xffffffff,uVar3);
    if ((uVar5 & 1) == 0) {
      func_0x000109894f40(param_1,0);
      FUN_10a054234(param_1,&uStack_90,param_1 + 0x1b8,&UNK_10f693190,0x1d);
      FUN_10a05431c(param_1);
    }
    return;
  }
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x10ab5f924);
  (*pcVar4)();
}



/* Entry: 10ab5f924; end: 10ab5fa87;  */

void FUN_10ab5f924(long *param_1,long *param_2)

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



/* Entry: 10ab5fa88; end: 10ab5fba7;  */

void FUN_10ab5fa88(long param_1,undefined8 *param_2,undefined8 param_3)

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



/* Entry: 10ab5fba8; end: 10ab5fbe7;  */

void FUN_10ab5fba8(long param_1)

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



/* Entry: 10ab5fbe8; end: 10ab5fc23;  */

long FUN_10ab5fbe8(long param_1,undefined8 param_2)

{
  FUN_10a042ab0(param_2,&PTR_DAT_110c4b2d8);
  param_1 = param_1 + 0x20;
  if ((int)param_2 == 0) {
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 10ab5fc24; end: 10ab5fc37;  */

void FUN_10ab5fc24(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10ab5fc38; end: 10ab5fc57;  */

void FUN_10ab5fc38(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110c4b2f8;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10ab5fc58; end: 10ab5fc67;  */

void FUN_10ab5fc58(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010ab5fc60. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 10ab5fc68; end: 10ab5fcbf;  */

long FUN_10ab5fc68(long param_1)

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



/* Entry: 10ab5fcc0; end: 10ab5fdbb;  */

undefined1  [16] FUN_10ab5fcc0(ulong param_1,undefined8 *param_2,ulong param_3)

{
  undefined *puVar1;
  ulong uVar2;
  undefined1 auVar3 [16];
  undefined **ppuStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined4 uStack_90;
  undefined8 uStack_8c;
  undefined4 uStack_84;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined4 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined **ppuStack_40;
  undefined8 uStack_38;
  
  *(undefined ***)(param_1 + 0x1b0) = &PTR_DAT_110c4a838;
  puVar1 = &UNK_10f692150;
  if ((undefined *)*param_2 != (undefined *)0x0) {
    puVar1 = (undefined *)*param_2;
  }
  func_0x000107c2c4dc(param_1 + 0x1b8,puVar1);
  ppuStack_a8 = (undefined **)*param_2;
  uStack_a0 = 0;
  uStack_98 = 0;
  uStack_90 = (undefined4)param_3;
  uStack_8c = param_2[1];
  uStack_84 = *(undefined4 *)(param_2 + 2);
  uStack_78 = 0;
  uStack_80 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_60 = param_2[7];
  uStack_58 = *(undefined4 *)(param_2 + 8);
  uStack_50 = 0;
  uStack_48 = 0;
  func_0x00010a052690(param_1 + 0x168,&ppuStack_a8);
  uVar2 = param_1;
  FUN_10a0051e8(param_1,param_3,*(undefined4 *)(param_2 + 1),*(undefined4 *)(param_2 + 8),
                *(undefined4 *)((long)param_2 + 0xc),*(undefined4 *)(param_2 + 2));
  if ((uVar2 & 1) == 0) {
    ppuStack_40 = &PTR_DAT_110c4a838;
    uStack_38 = 0;
    ppuStack_a8 = &PTR_DAT_110c42c58;
    uStack_a0 = 0;
    uStack_98 = CONCAT71(uStack_98._1_7_,1);
    func_0x0001098949cc(param_1,*param_2,&ppuStack_40,&ppuStack_a8);
  }
  auVar3._8_8_ = param_3 & 0xffffffff | (ulong)*(uint *)(param_2 + 1) << 0x20;
  auVar3._0_8_ = param_1;
  return auVar3;
}



/* Entry: 10ab5fdbc; end: 10ab5fe0f;  */

ulong FUN_10ab5fdbc(ulong param_1,undefined8 *param_2)

{
  ulong uVar1;
  
  uVar1 = param_1;
  FUN_10a0051e8(param_1,*(undefined4 *)(param_2 + 3),*(undefined4 *)((long)param_2 + 0x1c),
                *(undefined4 *)(param_2 + 10),*(undefined4 *)(param_2 + 4),
                *(undefined4 *)((long)param_2 + 0x24));
  if ((uVar1 & 1) == 0) {
    FUN_10a0605c4(param_1,*param_2,FUN_10ab5fe10,0);
  }
  return param_1;
}



/* Entry: 10ab5fe10; end: 10ab5ff17;  */

void FUN_10ab5fe10(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  long in_stack_ffffffffffffffa8;
  long in_stack_ffffffffffffffb0;
  
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
  FUN_10ab5ff18(param_2,param_3);
  FUN_10a052e3c(param_5);
  FUN_10ab431e0(&stack0xffffffffffffffa8,plVar4);
  FUN_10a3699ec(param_1,param_2,in_stack_ffffffffffffffa8,
                (in_stack_ffffffffffffffb0 - in_stack_ffffffffffffffa8 >> 2) * -0x5555555555555555);
  if (in_stack_ffffffffffffffa8 != 0) {
    __ZdlPv();
  }
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



/* Entry: 10ab5ff18; end: 10ab5ffd3;  */

undefined ** FUN_10ab5ff18(undefined **param_1,undefined **param_2)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  
  ppuVar1 = param_1;
  func_0x000109898688();
  if (ppuVar1 != (undefined **)0x0) {
    FUN_10a052c2c();
    param_2 = ppuVar1;
    if (param_1 != (undefined **)0x0) {
      param_2 = &PTR_DAT_110b178e0;
      ___dynamic_cast();
      if (param_1 != (undefined **)0x0) {
        return param_1;
      }
    }
    func_0x00010988bd28(&UNK_10f685496);
  }
  ppuVar1 = (undefined **)&UNK_10f68f52e;
  func_0x00010988bd28();
  ppuVar2 = ppuVar1;
  FUN_10a0051e8();
  if (((ulong)ppuVar2 & 1) == 0) {
    FUN_10a0605c4(ppuVar1,*param_2,FUN_10ab5ffd4,0);
  }
  return ppuVar1;
}



/* Entry: 10ab5ffd4; end: 10ab60203;  */

void FUN_10ab5ffd4(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long *plVar1;
  undefined **ppuVar2;
  undefined *puVar3;
  char cVar4;
  bool bVar5;
  code *pcVar6;
  long *plVar7;
  undefined *puVar8;
  ulong uVar9;
  long lVar10;
  undefined *puVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  undefined *puVar15;
  long *plVar16;
  long lStack_98;
  long lStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  undefined8 *puStack_78;
  long lStack_70;
  undefined **ppuStack_68;
  long in_stack_ffffffffffffffa0;
  
  plVar7 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar7[0x59] < 8) {
    plVar7[plVar7[0x59] + 0x4e] = plVar7[0x5a];
    plVar7[0x59] = plVar7[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar7 + 0x4b);
  }
  plVar16 = param_2;
  FUN_10ab5ff18(param_2,param_3);
  FUN_10a052e3c(param_5);
  FUN_10ab4329c(&lStack_98,plVar16);
  lVar13 = lStack_90 - lStack_98 >> 4;
  (**(code **)(*param_2 + 600))(&stack0xffffffffffffffa0,param_2,lVar13);
  lStack_70 = in_stack_ffffffffffffffa0;
  if (lStack_90 != lStack_98) {
    lVar14 = 0;
    do {
      lVar12 = lStack_98 + lVar14 * 0x10;
      lVar10 = *(long *)(lVar12 + 8);
      plVar16 = *(long **)(lVar12 + 8);
      if (lVar10 != 0) {
        plVar1 = (long *)(lVar10 + 8);
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar5) {
            *plVar1 = *plVar1 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
      }
      ppuStack_68 = &PTR_DAT_110bd3188;
      func_0x000109899de4(&puStack_80,param_2,&stack0xffffffffffffffa0,&ppuStack_68,0,0);
      if (plVar16 != (long *)0x0) {
        plVar1 = plVar16 + 1;
        do {
          lVar12 = *plVar1;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar5) {
            *plVar1 = lVar12 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (lVar12 == 0) {
          (**(code **)(*plVar16 + 0x10))(plVar16);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar16);
        }
      }
      (**(code **)(*param_2 + 0x290))(param_2,&lStack_70,lVar14,&puStack_80);
      if ((3 < (int)puStack_80) && (puStack_78 != (undefined8 *)0x0)) {
        (**(code **)*puStack_78)();
      }
      lVar14 = lVar14 + 1;
    } while (lVar14 != lVar13);
  }
  *param_1 = 7;
  *(long *)(param_1 + 2) = lStack_70;
  func_0x00010ab55068(&lStack_98);
  ppuVar2 = (undefined **)(plVar7 + 0x4b);
  lVar13 = plVar7[0x59];
  uVar9 = lVar13 - 1;
  plVar7[0x59] = uVar9;
  if (uVar9 < 8) {
    puVar8 = ppuVar2[lVar13 + 2];
    if ((undefined *)plVar7[0x5a] == puVar8) {
      return;
    }
  }
  else {
    puVar8 = *(undefined **)(plVar7[0x57] + -8);
    plVar7[0x57] = (long)(plVar7[0x57] + -8);
    if ((undefined *)plVar7[0x5a] == puVar8) {
      return;
    }
  }
  puVar3 = *ppuVar2;
  puVar11 = (undefined *)plVar7[0x4c];
  lVar13 = (long)puVar11 - (long)puVar3;
  puVar15 = (undefined *)(lVar13 >> 4);
  if (puVar15 < puVar8) {
    uVar9 = (long)puVar8 - (long)puVar15;
    lVar14 = plVar7[0x4d];
    if ((ulong)(lVar14 - (long)puVar11 >> 4) < uVar9) {
      if ((ulong)puVar8 >> 0x3c == 0) {
        puVar11 = (undefined *)(lVar14 - (long)puVar3 >> 3);
        if (puVar11 <= puVar8) {
          puVar11 = puVar8;
        }
        if (0x7fffffffffffffef < (ulong)(lVar14 - (long)puVar3)) {
          puVar11 = (undefined *)0xfffffffffffffff;
        }
        ppuStack_68 = ppuVar2;
        if ((ulong)puVar11 >> 0x3c == 0) {
          lVar10 = (long)puVar11 << 4;
          __Znwm();
          lVar12 = lVar10 + lVar13;
          _bzero(lVar12,uVar9 * 0x10);
          puVar15 = (undefined *)(lVar12 + (long)puVar15 * -0x10);
          _memcpy(puVar15,puVar3,lVar13);
          *ppuVar2 = puVar15;
          plVar7[0x4c] = lVar12 + uVar9 * 0x10;
          plVar7[0x4d] = lVar10 + (long)puVar11 * 0x10;
          puStack_88 = puVar3;
          puStack_80 = puVar3;
          puStack_78 = (undefined8 *)puVar3;
          lStack_70 = lVar14;
          func_0x00010988c1b8(&puStack_88);
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
    _bzero(puVar11,uVar9 * 0x10);
    plVar7[0x4c] = (long)(puVar11 + uVar9 * 0x10);
  }
  else if (puVar8 < puVar15) {
    while (puVar11 != puVar3 + (long)puVar8 * 0x10) {
      puVar11 = puVar11 + -0x10;
      func_0x00010988c204(puVar11);
    }
    plVar7[0x4c] = (long)(puVar3 + (long)puVar8 * 0x10);
  }
code_r0x00010988c138:
  plVar7[0x5a] = (long)puVar8;
  return;
}



/* Entry: 10ab60204; end: 10ab60317;  */

void FUN_10ab60204(ulong param_1)

{
  long lVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  code *pcVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  ulong uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  
  *(undefined **)(param_1 + 0x1b0) = PTR___ZTIDn_1103469e8;
  lVar1 = *(long *)(param_1 + 0x170);
  if (*(long *)(param_1 + 0x168) != lVar1) {
    uStack_88 = *(undefined8 *)(lVar1 + -0x60);
    uStack_90 = *(undefined8 *)(lVar1 + -0x68);
    uStack_68 = *(undefined8 *)(lVar1 + -0x40);
    uVar6 = *(ulong *)(lVar1 + -0x48);
    uVar7 = *(ulong *)(lVar1 + -0x50);
    uStack_80 = *(undefined8 *)(lVar1 + -0x58);
    uStack_58 = *(undefined8 *)(lVar1 + -0x30);
    uStack_60 = *(undefined8 *)(lVar1 + -0x38);
    uStack_48 = *(undefined8 *)(lVar1 + -0x20);
    uStack_50 = *(undefined8 *)(lVar1 + -0x28);
    uStack_30 = *(undefined8 *)(lVar1 + -8);
    uStack_38 = *(undefined8 *)(lVar1 + -0x10);
    uStack_40 = *(ulong *)(lVar1 + -0x18);
    *(long *)(param_1 + 0x170) = lVar1 + -0x68;
    uStack_78._4_4_ = (undefined4)(uVar7 >> 0x20);
    uVar2 = uStack_78._4_4_;
    uStack_70._4_4_ = (undefined4)(uVar6 >> 0x20);
    uVar3 = uStack_70._4_4_;
    uVar5 = param_1;
    uStack_78 = uVar7;
    uStack_70 = uVar6;
    FUN_10a0051e8(param_1,uVar7 & 0xffffffff,uVar2,uStack_40 & 0xffffffff,uVar6 & 0xffffffff,uVar3);
    if ((uVar5 & 1) == 0) {
      func_0x000109894f40(param_1,0);
      FUN_10a054234(param_1,&uStack_90,param_1 + 0x1b8,&UNK_10f6931c0,0x17);
      FUN_10a05431c(param_1);
    }
    return;
  }
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x10ab602c0);
  (*pcVar4)();
}



/* Entry: 10ab60318; end: 10ab60327;  */

void FUN_10ab60318(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c4b348;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10ab60328; end: 10ab60347;  */

void FUN_10ab60328(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c4b348;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10ab60348; end: 10ab6035f;  */

long FUN_10ab60348(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  *(undefined ***)(param_1 + 0x18) = &PTR_DAT_110b17898;
  plVar5 = *(long **)(param_1 + 0x28);
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
  return param_1 + 0x20;
}



/* Entry: 10ab60360; end: 10ab6045b;  */

undefined1  [16] FUN_10ab60360(ulong param_1,undefined8 *param_2,ulong param_3)

{
  undefined *puVar1;
  ulong uVar2;
  undefined1 auVar3 [16];
  undefined **ppuStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined4 uStack_90;
  undefined8 uStack_8c;
  undefined4 uStack_84;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined4 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined **ppuStack_40;
  undefined8 uStack_38;
  
  *(undefined ***)(param_1 + 0x1b0) = &PTR_DAT_110c4a850;
  puVar1 = &UNK_10f692150;
  if ((undefined *)*param_2 != (undefined *)0x0) {
    puVar1 = (undefined *)*param_2;
  }
  func_0x000107c2c4dc(param_1 + 0x1b8,puVar1);
  ppuStack_a8 = (undefined **)*param_2;
  uStack_a0 = 0;
  uStack_98 = 0;
  uStack_90 = (undefined4)param_3;
  uStack_8c = param_2[1];
  uStack_84 = *(undefined4 *)(param_2 + 2);
  uStack_78 = 0;
  uStack_80 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_60 = param_2[7];
  uStack_58 = *(undefined4 *)(param_2 + 8);
  uStack_50 = 0;
  uStack_48 = 0;
  func_0x00010a052690(param_1 + 0x168,&ppuStack_a8);
  uVar2 = param_1;
  FUN_10a0051e8(param_1,param_3,*(undefined4 *)(param_2 + 1),*(undefined4 *)(param_2 + 8),
                *(undefined4 *)((long)param_2 + 0xc),*(undefined4 *)(param_2 + 2));
  if ((uVar2 & 1) == 0) {
    ppuStack_40 = &PTR_DAT_110c4a850;
    uStack_38 = 0;
    ppuStack_a8 = &PTR_DAT_110c42c58;
    uStack_a0 = 0;
    uStack_98 = CONCAT71(uStack_98._1_7_,1);
    func_0x0001098949cc(param_1,*param_2,&ppuStack_40,&ppuStack_a8);
  }
  auVar3._8_8_ = param_3 & 0xffffffff | (ulong)*(uint *)(param_2 + 1) << 0x20;
  auVar3._0_8_ = param_1;
  return auVar3;
}



/* Entry: 10ab6045c; end: 10ab604bf;  */

ulong FUN_10ab6045c(ulong param_1,undefined8 *param_2)

{
  code *pcVar1;
  ulong uVar2;
  
  uVar2 = param_1;
  FUN_10a0051e8(param_1,*(undefined4 *)(param_2 + 3),*(undefined4 *)((long)param_2 + 0x1c),
                *(undefined4 *)(param_2 + 10),*(undefined4 *)(param_2 + 4),
                *(undefined4 *)((long)param_2 + 0x24));
  if ((uVar2 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10ab604c0);
      (*pcVar1)();
    }
    FUN_10a054dac(param_1,*param_2,FUN_10ab604c0,2,*(undefined8 *)(param_1 + 0x40));
  }
  return param_1;
}



/* Entry: 10ab604c0; end: 10ab6066b;  */

void FUN_10ab604c0(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined1 **ppuVar1;
  code *pcVar2;
  long lVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  undefined *puVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  undefined1 *puVar14;
  ulong uVar15;
  ulong uVar16;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  undefined1 *puStack_70;
  long *plStack_68;
  ulong in_stack_ffffffffffffffa0;
  undefined8 in_stack_ffffffffffffffa8;
  long in_stack_ffffffffffffffb8;
  
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
    puVar7 = &UNK_10f68f52e;
  }
  else {
    plVar6 = param_2;
    FUN_10a052c2c(param_2,plVar5);
    if ((plVar6 != (long *)0x0) && (___dynamic_cast(), plVar6 != (long *)0x0)) {
      FUN_10a0584c8(param_5);
      func_0x000109898570(&stack0xffffffffffffffa8,param_2,param_4);
      FUN_10ab4389c(&puStack_70,plVar6,&stack0xffffffffffffffa8);
      if (in_stack_ffffffffffffffb8 < 0) {
        __ZdlPv(in_stack_ffffffffffffffa8);
      }
      plVar5 = plStack_68;
      ppuVar1 = (undefined1 **)puStack_70;
      if (-1 < (long)in_stack_ffffffffffffffa0) {
        plVar5 = (long *)(in_stack_ffffffffffffffa0 >> 0x38);
        ppuVar1 = &puStack_70;
      }
      (**(code **)(*param_2 + 0x128))(&stack0xffffffffffffffa8,param_2,ppuVar1,plVar5);
      *param_1 = 6;
      *(undefined8 *)(param_1 + 2) = in_stack_ffffffffffffffa8;
      if ((long)in_stack_ffffffffffffffa0 < 0) {
        __ZdlPv(puStack_70);
      }
      plVar5 = plVar4 + 0x4b;
      lVar8 = plVar4[0x59];
      uVar9 = lVar8 - 1;
      plVar4[0x59] = uVar9;
      if (uVar9 < 8) {
        uVar9 = plVar5[lVar8 + 2];
        if (plVar4[0x5a] == uVar9) {
          return;
        }
      }
      else {
        uVar9 = *(ulong *)(plVar4[0x57] + -8);
        plVar4[0x57] = plVar4[0x57] + -8;
        if (plVar4[0x5a] == uVar9) {
          return;
        }
      }
      lVar8 = *plVar5;
      lVar13 = plVar4[0x4c];
      lVar11 = lVar13 - lVar8;
      uVar15 = lVar11 >> 4;
      if (uVar15 < uVar9) {
        uVar16 = uVar9 - uVar15;
        puVar14 = (undefined1 *)plVar4[0x4d];
        if ((ulong)((long)puVar14 - lVar13 >> 4) < uVar16) {
          if (uVar9 >> 0x3c == 0) {
            uVar10 = (long)puVar14 - lVar8 >> 3;
            if (uVar10 <= uVar9) {
              uVar10 = uVar9;
            }
            if (0x7fffffffffffffef < (ulong)((long)puVar14 - lVar8)) {
              uVar10 = 0xfffffffffffffff;
            }
            plStack_68 = plVar5;
            if (uVar10 >> 0x3c == 0) {
              lVar3 = uVar10 << 4;
              __Znwm();
              lVar13 = lVar3 + lVar11;
              _bzero(lVar13,uVar16 * 0x10);
              lVar12 = lVar13 + uVar15 * -0x10;
              _memcpy(lVar12,lVar8,lVar11);
              *plVar5 = lVar12;
              plVar4[0x4c] = lVar13 + uVar16 * 0x10;
              plVar4[0x4d] = lVar3 + uVar10 * 0x10;
              lStack_88 = lVar8;
              lStack_80 = lVar8;
              lStack_78 = lVar8;
              puStack_70 = puVar14;
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
        _bzero(lVar13,uVar16 * 0x10);
        plVar4[0x4c] = lVar13 + uVar16 * 0x10;
      }
      else if (uVar9 < uVar15) {
        lVar8 = lVar8 + uVar9 * 0x10;
        while (lVar13 != lVar8) {
          lVar13 = lVar13 + -0x10;
          func_0x00010988c204(lVar13);
        }
        plVar4[0x4c] = lVar8;
      }
code_r0x00010988c138:
      plVar4[0x5a] = uVar9;
      return;
    }
    puVar7 = &UNK_10f685496;
  }
  func_0x00010988bd28(puVar7);
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10ab6062c);
  (*pcVar2)();
}



/* Entry: 10ab6066c; end: 10ab60727;  */

void FUN_10ab6066c(ulong param_1)

{
  long lVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  code *pcVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  ulong uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  
  *(undefined **)(param_1 + 0x1b0) = PTR___ZTIDn_1103469e8;
  lVar1 = *(long *)(param_1 + 0x170);
  if (*(long *)(param_1 + 0x168) != lVar1) {
    uStack_88 = *(undefined8 *)(lVar1 + -0x60);
    uStack_90 = *(undefined8 *)(lVar1 + -0x68);
    uStack_68 = *(undefined8 *)(lVar1 + -0x40);
    uVar6 = *(ulong *)(lVar1 + -0x48);
    uVar7 = *(ulong *)(lVar1 + -0x50);
    uStack_80 = *(undefined8 *)(lVar1 + -0x58);
    uStack_58 = *(undefined8 *)(lVar1 + -0x30);
    uStack_60 = *(undefined8 *)(lVar1 + -0x38);
    uStack_48 = *(undefined8 *)(lVar1 + -0x20);
    uStack_50 = *(undefined8 *)(lVar1 + -0x28);
    uStack_30 = *(undefined8 *)(lVar1 + -8);
    uStack_38 = *(undefined8 *)(lVar1 + -0x10);
    uStack_40 = *(ulong *)(lVar1 + -0x18);
    *(long *)(param_1 + 0x170) = lVar1 + -0x68;
    uStack_78._4_4_ = (undefined4)(uVar7 >> 0x20);
    uVar2 = uStack_78._4_4_;
    uStack_70._4_4_ = (undefined4)(uVar6 >> 0x20);
    uVar3 = uStack_70._4_4_;
    uVar5 = param_1;
    uStack_78 = uVar7;
    uStack_70 = uVar6;
    FUN_10a0051e8(param_1,uVar7 & 0xffffffff,uVar2,uStack_40 & 0xffffffff,uVar6 & 0xffffffff,uVar3);
    if ((uVar5 & 1) == 0) {
      func_0x000109894f40(param_1,0);
      FUN_10a054234(param_1,&uStack_90,param_1 + 0x1b8,&UNK_10f6931d8,0x18);
      FUN_10a05431c(param_1);
    }
    return;
  }
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x10ab60728);
  (*pcVar4)();
}



/* Entry: 10ab60728; end: 10ab60817;  */

void FUN_10ab60728(undefined4 *param_1,float param_2,long *param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

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
  
  plVar4 = param_3;
  (**(code **)(*param_3 + 0x58))();
  if ((ulong)plVar4[0x59] < 8) {
    plVar4[plVar4[0x59] + 0x4e] = plVar4[0x5a];
    plVar4[0x59] = plVar4[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar4 + 0x4b);
  }
  FUN_10ab60818(param_3,param_4);
  FUN_10a052e3c(param_6);
  if ((long *)param_3[0x1c] == (long *)0x0) {
    FUN_10a0edfc4(&stack0xffffffffffffffb0);
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x10ab60804);
    (*pcVar2)();
  }
  (**(code **)(*(long *)param_3[0x1c] + 0x88))();
  *param_1 = 3;
  *(double *)(param_1 + 2) = (double)param_2;
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



/* Entry: 10ab60818; end: 10ab6087f;  */

void FUN_10ab60818(undefined **param_1,undefined **param_2,undefined **param_3,undefined8 param_4)

{
  code *pcVar1;
  long lVar2;
  undefined **ppuVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
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
  long lStack_a8;
  long lStack_a0;
  long lStack_98;
  long lStack_90;
  long *plStack_88;
  
  ppuVar3 = param_1;
  func_0x000109898688();
  if (ppuVar3 != (undefined **)0x0) {
    FUN_10a052c2c(param_1,ppuVar3);
    param_2 = ppuVar3;
    if (param_1 != (undefined **)0x0) {
      param_2 = &PTR_DAT_110b178e0;
      param_3 = &PTR_DAT_110c4a6a8;
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
  plVar4 = plVar6;
  (**(code **)(*plVar6 + 0x58))();
  if ((ulong)plVar4[0x59] < 8) {
    plVar4[plVar4[0x59] + 0x4e] = plVar4[0x5a];
    plVar4[0x59] = plVar4[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar4 + 0x4b);
  }
  plVar5 = plVar6;
  FUN_10ab609e0(plVar6,param_2);
  FUN_10ab60a48(param_4);
  func_0x000109898b88(&plStack_88,plVar6,param_3);
  func_0x000109898b88(&lStack_a0,plVar6,param_3 + 2);
  plVar6 = (long *)plVar5[0x1c];
  if (plVar6 == (long *)0x0) {
    FUN_10a0edfc4(&stack0xffffffffffffff90);
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10ab6099c);
    (*pcVar1)();
  }
  (**(code **)(*plVar6 + 0xa0))(plVar6,&plStack_88,&lStack_a0);
  if (lStack_a0 != 0) {
    lStack_98 = lStack_a0;
    __ZdlPv();
  }
  if (plStack_88 != (long *)0x0) {
    __ZdlPv();
  }
  *extraout_x8 = 0;
  plVar6 = plVar4 + 0x4b;
  lVar7 = plVar4[0x59];
  uVar8 = lVar7 - 1;
  plVar4[0x59] = uVar8;
  if (uVar8 < 8) {
    uVar8 = plVar6[lVar7 + 2];
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
  lVar7 = *plVar6;
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
        plStack_88 = plVar6;
        if (uVar9 >> 0x3c == 0) {
          lVar2 = uVar9 << 4;
          __Znwm();
          lVar12 = lVar2 + lVar10;
          _bzero(lVar12,uVar15 * 0x10);
          lVar11 = lVar12 + uVar14 * -0x10;
          _memcpy(lVar11,lVar7,lVar10);
          *plVar6 = lVar11;
          plVar4[0x4c] = lVar12 + uVar15 * 0x10;
          plVar4[0x4d] = lVar2 + uVar9 * 0x10;
          lStack_a8 = lVar7;
          lStack_a0 = lVar7;
          lStack_98 = lVar7;
          lStack_90 = lVar13;
          func_0x00010988c1b8(&lStack_a8);
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



/* Entry: 10ab60880; end: 10ab609df;  */

void FUN_10ab60880(undefined4 *param_1,long *param_2,undefined8 param_3,long param_4,
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
  FUN_10ab609e0(param_2,param_3);
  FUN_10ab60a48(param_5);
  func_0x000109898b88(&plStack_68,param_2,param_4);
  func_0x000109898b88(&lStack_80,param_2,param_4 + 0x10);
  plVar4 = (long *)plVar4[0x1c];
  if (plVar4 == (long *)0x0) {
    FUN_10a0edfc4(&stack0xffffffffffffffb0);
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10ab6099c);
    (*pcVar1)();
  }
  (**(code **)(*plVar4 + 0xa0))(plVar4,&plStack_68,&lStack_80);
  if (lStack_80 != 0) {
    lStack_78 = lStack_80;
    __ZdlPv();
  }
  if (plStack_68 != (long *)0x0) {
    __ZdlPv();
  }
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



/* Entry: 10ab609e0; end: 10ab60a47;  */

void FUN_10ab609e0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  code *pcVar1;
  long lVar2;
  undefined *puVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  undefined8 uVar7;
  long lVar8;
  ulong uVar9;
  undefined4 *extraout_x8;
  ulong uVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  ulong uVar15;
  ulong uVar16;
  long lStack_b8;
  long lStack_b0;
  long lStack_a8;
  long lStack_a0;
  long *plStack_98;
  undefined8 in_stack_ffffffffffffff78;
  long in_stack_ffffffffffffff88;
  
  lVar8 = param_1;
  func_0x000109898688();
  if (lVar8 != 0) {
    FUN_10a053854(param_1,lVar8);
    if (param_1 != 0) {
      param_4 = 0x10;
      ___dynamic_cast();
      if (param_1 != 0) {
        return;
      }
    }
    func_0x00010988bd28(&UNK_10f685496);
  }
  puVar3 = &UNK_10f68f52e;
  func_0x00010988bd28();
  if ((int)puVar3 == 2) {
    return;
  }
  plVar4 = (long *)0x2;
  uVar7 = 0;
  FUN_10a052ee0(2,0,puVar3);
  plVar5 = plVar4;
  (**(code **)(*plVar4 + 0x58))();
  if ((ulong)plVar5[0x59] < 8) {
    plVar5[plVar5[0x59] + 0x4e] = plVar5[0x5a];
    plVar5[0x59] = plVar5[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar5 + 0x4b);
  }
  plVar6 = plVar4;
  FUN_10ab609e0(plVar4,uVar7);
  FUN_10a0584c8(param_4);
  func_0x000109898570(&stack0xffffffffffffff78,plVar4,puVar3);
  func_0x00010ab4487c(plVar6,&stack0xffffffffffffff78);
  if (in_stack_ffffffffffffff88 < 0) {
    __ZdlPv(in_stack_ffffffffffffff78);
  }
  *extraout_x8 = 0;
  plVar4 = plVar5 + 0x4b;
  lVar8 = plVar5[0x59];
  uVar9 = lVar8 - 1;
  plVar5[0x59] = uVar9;
  if (uVar9 < 8) {
    uVar9 = plVar4[lVar8 + 2];
    if (plVar5[0x5a] == uVar9) {
      return;
    }
  }
  else {
    uVar9 = *(ulong *)(plVar5[0x57] + -8);
    plVar5[0x57] = plVar5[0x57] + -8;
    if (plVar5[0x5a] == uVar9) {
      return;
    }
  }
  lVar8 = *plVar4;
  lVar13 = plVar5[0x4c];
  lVar11 = lVar13 - lVar8;
  uVar15 = lVar11 >> 4;
  if (uVar15 < uVar9) {
    uVar16 = uVar9 - uVar15;
    lVar14 = plVar5[0x4d];
    if ((ulong)(lVar14 - lVar13 >> 4) < uVar16) {
      if (uVar9 >> 0x3c == 0) {
        uVar10 = lVar14 - lVar8 >> 3;
        if (uVar10 <= uVar9) {
          uVar10 = uVar9;
        }
        if (0x7fffffffffffffef < (ulong)(lVar14 - lVar8)) {
          uVar10 = 0xfffffffffffffff;
        }
        plStack_98 = plVar4;
        if (uVar10 >> 0x3c == 0) {
          lVar2 = uVar10 << 4;
          __Znwm();
          lVar13 = lVar2 + lVar11;
          _bzero(lVar13,uVar16 * 0x10);
          lVar12 = lVar13 + uVar15 * -0x10;
          _memcpy(lVar12,lVar8,lVar11);
          *plVar4 = lVar12;
          plVar5[0x4c] = lVar13 + uVar16 * 0x10;
          plVar5[0x4d] = lVar2 + uVar10 * 0x10;
          lStack_b8 = lVar8;
          lStack_b0 = lVar8;
          lStack_a8 = lVar8;
          lStack_a0 = lVar14;
          func_0x00010988c1b8(&lStack_b8);
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
    _bzero(lVar13,uVar16 * 0x10);
    plVar5[0x4c] = lVar13 + uVar16 * 0x10;
  }
  else if (uVar9 < uVar15) {
    lVar8 = lVar8 + uVar9 * 0x10;
    while (lVar13 != lVar8) {
      lVar13 = lVar13 + -0x10;
      func_0x00010988c204(lVar13);
    }
    plVar5[0x4c] = lVar8;
  }
code_r0x00010988c138:
  plVar5[0x5a] = uVar9;
  return;
}



/* Entry: 10ab60a48; end: 10ab60a6b;  */

void FUN_10ab60a48(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  code *pcVar1;
  long lVar2;
  long *plVar3;
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
  undefined8 in_stack_ffffffffffffff98;
  long in_stack_ffffffffffffffa8;
  
  if ((int)param_1 == 2) {
    return;
  }
  plVar3 = (long *)0x2;
  uVar6 = 0;
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
  plVar5 = plVar3;
  FUN_10ab609e0(plVar3,uVar6);
  FUN_10a0584c8(param_4);
  func_0x000109898570(&stack0xffffffffffffff98,plVar3,param_1);
  func_0x00010ab4487c(plVar5,&stack0xffffffffffffff98);
  if (in_stack_ffffffffffffffa8 < 0) {
    __ZdlPv(in_stack_ffffffffffffff98);
  }
  *extraout_x8 = 0;
  plVar3 = plVar4 + 0x4b;
  lVar7 = plVar4[0x59];
  uVar8 = lVar7 - 1;
  plVar4[0x59] = uVar8;
  if (uVar8 < 8) {
    uVar8 = plVar3[lVar7 + 2];
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
  lVar7 = *plVar3;
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
        plStack_78 = plVar3;
        if (uVar9 >> 0x3c == 0) {
          lVar2 = uVar9 << 4;
          __Znwm();
          lVar12 = lVar2 + lVar10;
          _bzero(lVar12,uVar15 * 0x10);
          lVar11 = lVar12 + uVar14 * -0x10;
          _memcpy(lVar11,lVar7,lVar10);
          *plVar3 = lVar11;
          plVar4[0x4c] = lVar12 + uVar15 * 0x10;
          plVar4[0x4d] = lVar2 + uVar9 * 0x10;
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
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar1)();
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



/* Entry: 10ab60a6c; end: 10ab60b67;  */

void FUN_10ab60a6c(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  undefined8 in_stack_ffffffffffffffa8;
  long in_stack_ffffffffffffffb8;
  
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
  FUN_10ab609e0(param_2,param_3);
  FUN_10a0584c8(param_5);
  func_0x000109898570(&stack0xffffffffffffffa8,param_2,param_4);
  func_0x00010ab4487c(plVar4,&stack0xffffffffffffffa8);
  if (in_stack_ffffffffffffffb8 < 0) {
    __ZdlPv(in_stack_ffffffffffffffa8);
  }
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



/* Entry: 10ab60b68; end: 10ab60c23;  */

void FUN_10ab60b68(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  float fVar14;
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
  FUN_10ab60818(param_2,param_3);
  FUN_10a052e3c(param_5);
  fVar14 = *(float *)(param_2 + 0x1e);
  *param_1 = 3;
  *(double *)(param_1 + 2) = (double)fVar14;
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



/* Entry: 10ab60c24; end: 10ab60d27;  */

void FUN_10ab60c24(undefined4 *param_1,long *param_2,undefined8 param_3,int *param_4,
                  undefined8 param_5)

{
  long *plVar1;
  float fVar2;
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
  FUN_10ab609e0(param_2,param_3);
  FUN_10a05ed04(param_5);
  if (*param_4 != 3) {
    func_0x00010988bd28(&UNK_10f68f550);
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x10ab60d14);
    (*pcVar3)();
  }
  fVar2 = (float)*(double *)(param_4 + 2);
  if (0x7fefffffffffffff < (ulong)ABS(*(double *)(param_4 + 2))) {
    fVar2 = 0.0;
  }
  *(float *)(param_2 + 0x1e) = fVar2;
  if ((long *)param_2[0x1c] != (long *)0x0) {
    (**(code **)(*(long *)param_2[0x1c] + 0xc0))();
  }
  *param_1 = 0;
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



/* Entry: 10ab60d28; end: 10ab60e1b;  */

void FUN_10ab60d28(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  FUN_10ab60818(param_2,param_3);
  FUN_10a052e3c(param_5);
  plVar4 = (long *)param_2[0x1c];
  if (plVar4 == (long *)0x0) {
    FUN_10a0edfc4(&stack0xffffffffffffffb0);
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10ab60e08);
    (*pcVar1)();
  }
  (**(code **)(*plVar4 + 0x90))();
  *param_1 = 2;
  *(bool *)(param_1 + 2) = (int)plVar4 != 0;
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



/* Entry: 10ab60e1c; end: 10ab60ee3;  */

void FUN_10ab60e1c(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  FUN_10ab609e0(param_2,param_3);
  FUN_10a065020(param_5);
  func_0x00010989847c(param_2,param_4);
  FUN_10ab447e8(plVar4,param_2);
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



/* Entry: 10ab60ee4; end: 10ab60fd3;  */

void FUN_10ab60ee4(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  FUN_10ab60818(param_2,param_3);
  FUN_10a052e3c(param_5);
  plVar4 = (long *)param_2[0x1c];
  if (plVar4 == (long *)0x0) {
    FUN_10a0edfc4(&stack0xffffffffffffffb0);
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10ab60fc0);
    (*pcVar1)();
  }
  (**(code **)(*plVar4 + 0x90))();
  *param_1 = 3;
  *(double *)(param_1 + 2) = (double)(int)plVar4;
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



/* Entry: 10ab60fd4; end: 10ab6109b;  */

void FUN_10ab60fd4(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  FUN_10ab609e0(param_2,param_3);
  FUN_10ab6109c(param_5);
  func_0x000109898518(param_2,param_4);
  func_0x00010ab4483c(plVar4,param_2);
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



/* Entry: 10ab6109c; end: 10ab610bf;  */

void FUN_10ab6109c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  undefined8 extraout_x8;
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
  long lStack_88;
  long lStack_80;
  long *plStack_78;
  long *in_stack_ffffffffffffffa8;
  
  if ((int)param_1 == 1) {
    return;
  }
  plVar5 = (long *)0x1;
  uVar8 = 0;
  FUN_10a052ee0(1,0,param_1);
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
  FUN_10ab611c4(plVar5,uVar8);
  FUN_10a052e3c(param_4);
  FUN_10ab45840(&stack0xffffffffffffffa0,plVar7);
  FUN_10a066960(extraout_x8,plVar5,&stack0xffffffffffffffa0);
  if (in_stack_ffffffffffffffa8 != (long *)0x0) {
    plVar5 = in_stack_ffffffffffffffa8 + 1;
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
      (**(code **)(*in_stack_ffffffffffffffa8 + 0x10))(in_stack_ffffffffffffffa8);
      __ZNSt3__119__shared_weak_count14__release_weakEv(in_stack_ffffffffffffffa8);
    }
  }
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
          lStack_88 = lVar11;
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



/* Entry: 10ab610c0; end: 10ab611c3;  */

void FUN_10ab610c0(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  FUN_10ab611c4(param_2,param_3);
  FUN_10a052e3c(param_5);
  FUN_10ab45840(&stack0xffffffffffffffb0,plVar6);
  FUN_10a066960(param_1,param_2,&stack0xffffffffffffffb0);
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



/* Entry: 10ab611c4; end: 10ab6122b;  */

void FUN_10ab611c4(undefined **param_1,undefined **param_2,undefined8 param_3,undefined8 param_4)

{
  code *pcVar1;
  long lVar2;
  undefined **ppuVar3;
  long *plVar4;
  long *plVar5;
  ulong uVar6;
  undefined4 *extraout_x8;
  long lVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  ulong uVar14;
  long lStack_a8;
  long lStack_a0;
  long lStack_98;
  long lStack_90;
  long *plStack_88;
  
  ppuVar3 = param_1;
  func_0x000109898688();
  if (ppuVar3 != (undefined **)0x0) {
    FUN_10a052c2c(param_1,ppuVar3);
    param_2 = ppuVar3;
    if (param_1 != (undefined **)0x0) {
      param_2 = &PTR_DAT_110b178e0;
      param_4 = 0x10;
      ___dynamic_cast();
      if (param_1 != (undefined **)0x0) {
        return;
      }
    }
    func_0x00010988bd28(&UNK_10f685496);
  }
  plVar4 = (long *)&UNK_10f68f52e;
  func_0x00010988bd28();
  plVar5 = plVar4;
  (**(code **)(*plVar4 + 0x58))();
  if ((ulong)plVar5[0x59] < 8) {
    plVar5[plVar5[0x59] + 0x4e] = plVar5[0x5a];
    plVar5[0x59] = plVar5[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar5 + 0x4b);
  }
  FUN_10ab611c4(plVar4,param_2);
  FUN_10a052e3c(param_4);
  lVar7 = plVar4[0x46];
  lVar9 = plVar4[0x45];
  *extraout_x8 = 3;
  *(double *)(extraout_x8 + 2) = (double)(ulong)(lVar7 - lVar9 >> 4);
  plVar4 = plVar5 + 0x4b;
  lVar7 = plVar5[0x59];
  uVar6 = lVar7 - 1;
  plVar5[0x59] = uVar6;
  if (uVar6 < 8) {
    uVar6 = plVar4[lVar7 + 2];
    if (plVar5[0x5a] == uVar6) {
      return;
    }
  }
  else {
    uVar6 = *(ulong *)(plVar5[0x57] + -8);
    plVar5[0x57] = plVar5[0x57] + -8;
    if (plVar5[0x5a] == uVar6) {
      return;
    }
  }
  lVar7 = *plVar4;
  lVar9 = plVar5[0x4c];
  lVar10 = lVar9 - lVar7;
  uVar13 = lVar10 >> 4;
  if (uVar13 < uVar6) {
    uVar14 = uVar6 - uVar13;
    lVar12 = plVar5[0x4d];
    if ((ulong)(lVar12 - lVar9 >> 4) < uVar14) {
      if (uVar6 >> 0x3c == 0) {
        uVar8 = lVar12 - lVar7 >> 3;
        if (uVar8 <= uVar6) {
          uVar8 = uVar6;
        }
        if (0x7fffffffffffffef < (ulong)(lVar12 - lVar7)) {
          uVar8 = 0xfffffffffffffff;
        }
        plStack_88 = plVar4;
        if (uVar8 >> 0x3c == 0) {
          lVar2 = uVar8 << 4;
          __Znwm();
          lVar9 = lVar2 + lVar10;
          _bzero(lVar9,uVar14 * 0x10);
          lVar11 = lVar9 + uVar13 * -0x10;
          _memcpy(lVar11,lVar7,lVar10);
          *plVar4 = lVar11;
          plVar5[0x4c] = lVar9 + uVar14 * 0x10;
          plVar5[0x4d] = lVar2 + uVar8 * 0x10;
          lStack_a8 = lVar7;
          lStack_a0 = lVar7;
          lStack_98 = lVar7;
          lStack_90 = lVar12;
          func_0x00010988c1b8(&lStack_a8);
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
    _bzero(lVar9,uVar14 * 0x10);
    plVar5[0x4c] = lVar9 + uVar14 * 0x10;
  }
  else if (uVar6 < uVar13) {
    lVar7 = lVar7 + uVar6 * 0x10;
    while (lVar9 != lVar7) {
      lVar9 = lVar9 + -0x10;
      func_0x00010988c204(lVar9);
    }
    plVar5[0x4c] = lVar7;
  }
code_r0x00010988c138:
  plVar5[0x5a] = uVar6;
  return;
}



/* Entry: 10ab6122c; end: 10ab612f3;  */

void FUN_10ab6122c(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  long *plVar4;
  ulong uVar5;
  long lVar6;
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
  FUN_10ab611c4(param_2,param_3);
  FUN_10a052e3c(param_5);
  lVar6 = param_2[0x46];
  lVar8 = param_2[0x45];
  *param_1 = 3;
  *(double *)(param_1 + 2) = (double)(ulong)(lVar6 - lVar8 >> 4);
  plVar1 = plVar4 + 0x4b;
  lVar6 = plVar4[0x59];
  uVar5 = lVar6 - 1;
  plVar4[0x59] = uVar5;
  if (uVar5 < 8) {
    uVar5 = plVar1[lVar6 + 2];
    if (plVar4[0x5a] == uVar5) {
      return;
    }
  }
  else {
    uVar5 = *(ulong *)(plVar4[0x57] + -8);
    plVar4[0x57] = plVar4[0x57] + -8;
    if (plVar4[0x5a] == uVar5) {
      return;
    }
  }
  lVar6 = *plVar1;
  lVar8 = plVar4[0x4c];
  lVar9 = lVar8 - lVar6;
  uVar12 = lVar9 >> 4;
  if (uVar12 < uVar5) {
    uVar13 = uVar5 - uVar12;
    lVar11 = plVar4[0x4d];
    if ((ulong)(lVar11 - lVar8 >> 4) < uVar13) {
      if (uVar5 >> 0x3c == 0) {
        uVar7 = lVar11 - lVar6 >> 3;
        if (uVar7 <= uVar5) {
          uVar7 = uVar5;
        }
        if (0x7fffffffffffffef < (ulong)(lVar11 - lVar6)) {
          uVar7 = 0xfffffffffffffff;
        }
        plStack_68 = plVar1;
        if (uVar7 >> 0x3c == 0) {
          lVar3 = uVar7 << 4;
          __Znwm();
          lVar8 = lVar3 + lVar9;
          _bzero(lVar8,uVar13 * 0x10);
          lVar10 = lVar8 + uVar12 * -0x10;
          _memcpy(lVar10,lVar6,lVar9);
          *plVar1 = lVar10;
          plVar4[0x4c] = lVar8 + uVar13 * 0x10;
          plVar4[0x4d] = lVar3 + uVar7 * 0x10;
          lStack_88 = lVar6;
          lStack_80 = lVar6;
          lStack_78 = lVar6;
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
    _bzero(lVar8,uVar13 * 0x10);
    plVar4[0x4c] = lVar8 + uVar13 * 0x10;
  }
  else if (uVar5 < uVar12) {
    lVar6 = lVar6 + uVar5 * 0x10;
    while (lVar8 != lVar6) {
      lVar8 = lVar8 + -0x10;
      func_0x00010988c204(lVar8);
    }
    plVar4[0x4c] = lVar6;
  }
code_r0x00010988c138:
  plVar4[0x5a] = uVar5;
  return;
}



/* Entry: 10ab612f4; end: 10ab613df;  */

void FUN_10ab612f4(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  code *pcVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
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
  FUN_10ab611c4(param_2,param_3);
  FUN_10a136258(param_5);
  plVar5 = param_2;
  func_0x00010a13627c(param_2,param_4);
  if ((long *)(plVar4[0x46] - plVar4[0x45] >> 4) <= plVar5) {
    FUN_10a00946c(&UNK_10f6921f0);
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10ab613cc);
    (*pcVar1)();
  }
  FUN_10a2f50c8(param_1,param_2,plVar4[0x45] + (long)plVar5 * 0x10);
  plVar4 = plVar3 + 0x4b;
  lVar6 = plVar3[0x59];
  uVar7 = lVar6 - 1;
  plVar3[0x59] = uVar7;
  if (uVar7 < 8) {
    uVar7 = plVar4[lVar6 + 2];
    if (plVar3[0x5a] == uVar7) {
      return;
    }
  }
  else {
    uVar7 = *(ulong *)(plVar3[0x57] + -8);
    plVar3[0x57] = plVar3[0x57] + -8;
    if (plVar3[0x5a] == uVar7) {
      return;
    }
  }
  lVar6 = *plVar4;
  lVar11 = plVar3[0x4c];
  lVar9 = lVar11 - lVar6;
  uVar13 = lVar9 >> 4;
  if (uVar13 < uVar7) {
    uVar14 = uVar7 - uVar13;
    lVar12 = plVar3[0x4d];
    if ((ulong)(lVar12 - lVar11 >> 4) < uVar14) {
      if (uVar7 >> 0x3c == 0) {
        uVar8 = lVar12 - lVar6 >> 3;
        if (uVar8 <= uVar7) {
          uVar8 = uVar7;
        }
        if (0x7fffffffffffffef < (ulong)(lVar12 - lVar6)) {
          uVar8 = 0xfffffffffffffff;
        }
        plStack_68 = plVar4;
        if (uVar8 >> 0x3c == 0) {
          lVar2 = uVar8 << 4;
          __Znwm();
          lVar11 = lVar2 + lVar9;
          _bzero(lVar11,uVar14 * 0x10);
          lVar10 = lVar11 + uVar13 * -0x10;
          _memcpy(lVar10,lVar6,lVar9);
          *plVar4 = lVar10;
          plVar3[0x4c] = lVar11 + uVar14 * 0x10;
          plVar3[0x4d] = lVar2 + uVar8 * 0x10;
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
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar1)();
    }
    _bzero(lVar11,uVar14 * 0x10);
    plVar3[0x4c] = lVar11 + uVar14 * 0x10;
  }
  else if (uVar7 < uVar13) {
    lVar6 = lVar6 + uVar7 * 0x10;
    while (lVar11 != lVar6) {
      lVar11 = lVar11 + -0x10;
      func_0x00010988c204(lVar11);
    }
    plVar3[0x4c] = lVar6;
  }
code_r0x00010988c138:
  plVar3[0x5a] = uVar7;
  return;
}



/* Entry: 10ab613e0; end: 10ab61513;  */

void FUN_10ab613e0(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  long lVar5;
  long *plVar6;
  ulong uVar7;
  long lVar8;
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
  long *plVar16;
  
  plVar6 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar6[0x59] < 8) {
    plVar6[plVar6[0x59] + 0x4e] = plVar6[0x5a];
    plVar6[0x59] = plVar6[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar6 + 0x4b);
  }
  plVar16 = param_2;
  FUN_10ab611c4(param_2,param_3);
  FUN_10a052e3c(param_5);
  lVar8 = plVar16[0x45];
  if (lVar8 == plVar16[0x46]) {
    plVar16 = (long *)0x0;
  }
  else {
    plVar16 = *(long **)(lVar8 + 8);
    if (*(long *)(lVar8 + 8) != 0) {
      plVar1 = (long *)(*(long *)(lVar8 + 8) + 8);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = *plVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
  }
  func_0x00010a35fc10(param_1,param_2,&stack0xffffffffffffffb0);
  if (plVar16 != (long *)0x0) {
    plVar1 = plVar16 + 1;
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
      (**(code **)(*plVar16 + 0x10))(plVar16);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar16);
    }
  }
  plVar16 = plVar6 + 0x4b;
  lVar8 = plVar6[0x59];
  uVar7 = lVar8 - 1;
  plVar6[0x59] = uVar7;
  if (uVar7 < 8) {
    uVar7 = plVar16[lVar8 + 2];
    if (plVar6[0x5a] == uVar7) {
      return;
    }
  }
  else {
    uVar7 = *(ulong *)(plVar6[0x57] + -8);
    plVar6[0x57] = plVar6[0x57] + -8;
    if (plVar6[0x5a] == uVar7) {
      return;
    }
  }
  lVar8 = *plVar16;
  lVar12 = plVar6[0x4c];
  lVar10 = lVar12 - lVar8;
  uVar14 = lVar10 >> 4;
  if (uVar14 < uVar7) {
    uVar15 = uVar7 - uVar14;
    lVar13 = plVar6[0x4d];
    if ((ulong)(lVar13 - lVar12 >> 4) < uVar15) {
      if (uVar7 >> 0x3c == 0) {
        uVar9 = lVar13 - lVar8 >> 3;
        if (uVar9 <= uVar7) {
          uVar9 = uVar7;
        }
        if (0x7fffffffffffffef < (ulong)(lVar13 - lVar8)) {
          uVar9 = 0xfffffffffffffff;
        }
        plStack_68 = plVar16;
        if (uVar9 >> 0x3c == 0) {
          lVar5 = uVar9 << 4;
          __Znwm();
          lVar12 = lVar5 + lVar10;
          _bzero(lVar12,uVar15 * 0x10);
          lVar11 = lVar12 + uVar14 * -0x10;
          _memcpy(lVar11,lVar8,lVar10);
          *plVar16 = lVar11;
          plVar6[0x4c] = lVar12 + uVar15 * 0x10;
          plVar6[0x4d] = lVar5 + uVar9 * 0x10;
          lStack_88 = lVar8;
          lStack_80 = lVar8;
          lStack_78 = lVar8;
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
      pcVar4 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar4)();
    }
    _bzero(lVar12,uVar15 * 0x10);
    plVar6[0x4c] = lVar12 + uVar15 * 0x10;
  }
  else if (uVar7 < uVar14) {
    lVar8 = lVar8 + uVar7 * 0x10;
    while (lVar12 != lVar8) {
      lVar12 = lVar12 + -0x10;
      func_0x00010988c204(lVar12);
    }
    plVar6[0x4c] = lVar8;
  }
code_r0x00010988c138:
  plVar6[0x5a] = uVar7;
  return;
}



/* Entry: 10ab61514; end: 10ab616c7;  */

/* WARNING: Removing unreachable block (ram,0x00010ab61624) */
/* WARNING: Removing unreachable block (ram,0x00010ab61628) */
/* WARNING: Removing unreachable block (ram,0x00010ab61630) */
/* WARNING: Removing unreachable block (ram,0x00010ab61638) */
/* WARNING: Removing unreachable block (ram,0x00010ab6163c) */

void FUN_10ab61514(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  char cVar1;
  bool bVar2;
  code *pcVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  undefined *puVar8;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  ulong uVar16;
  ulong uVar17;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long *plStack_68;
  long *in_stack_ffffffffffffffa8;
  
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
  func_0x000109898688(param_2,param_3);
  if (plVar6 == (long *)0x0) {
    puVar8 = &UNK_10f68f52e;
  }
  else {
    plVar7 = param_2;
    FUN_10a053854(param_2,plVar6);
    if ((plVar7 != (long *)0x0) && (___dynamic_cast(), plVar7 != (long *)0x0)) {
      FUN_10ab616c8(param_5);
      FUN_10a2f5190(&stack0xffffffffffffffa0,param_2,param_4);
      FUN_10ab46b84(plVar7,&stack0xffffffffffffffb0);
      if (in_stack_ffffffffffffffa8 != (long *)0x0) {
        plVar6 = in_stack_ffffffffffffffa8 + 1;
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
          (**(code **)(*in_stack_ffffffffffffffa8 + 0x10))(in_stack_ffffffffffffffa8);
          __ZNSt3__119__shared_weak_count14__release_weakEv(in_stack_ffffffffffffffa8);
        }
      }
      *param_1 = 0;
      plVar6 = plVar5 + 0x4b;
      lVar11 = plVar5[0x59];
      uVar9 = lVar11 - 1;
      plVar5[0x59] = uVar9;
      if (uVar9 < 8) {
        uVar9 = plVar6[lVar11 + 2];
        if (plVar5[0x5a] == uVar9) {
          return;
        }
      }
      else {
        uVar9 = *(ulong *)(plVar5[0x57] + -8);
        plVar5[0x57] = plVar5[0x57] + -8;
        if (plVar5[0x5a] == uVar9) {
          return;
        }
      }
      lVar11 = *plVar6;
      lVar14 = plVar5[0x4c];
      lVar12 = lVar14 - lVar11;
      uVar16 = lVar12 >> 4;
      if (uVar16 < uVar9) {
        uVar17 = uVar9 - uVar16;
        lVar15 = plVar5[0x4d];
        if ((ulong)(lVar15 - lVar14 >> 4) < uVar17) {
          if (uVar9 >> 0x3c == 0) {
            uVar10 = lVar15 - lVar11 >> 3;
            if (uVar10 <= uVar9) {
              uVar10 = uVar9;
            }
            if (0x7fffffffffffffef < (ulong)(lVar15 - lVar11)) {
              uVar10 = 0xfffffffffffffff;
            }
            plStack_68 = plVar6;
            if (uVar10 >> 0x3c == 0) {
              lVar4 = uVar10 << 4;
              __Znwm();
              lVar14 = lVar4 + lVar12;
              _bzero(lVar14,uVar17 * 0x10);
              lVar13 = lVar14 + uVar16 * -0x10;
              _memcpy(lVar13,lVar11,lVar12);
              *plVar6 = lVar13;
              plVar5[0x4c] = lVar14 + uVar17 * 0x10;
              plVar5[0x4d] = lVar4 + uVar10 * 0x10;
              lStack_88 = lVar11;
              lStack_80 = lVar11;
              lStack_78 = lVar11;
              lStack_70 = lVar15;
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
        _bzero(lVar14,uVar17 * 0x10);
        plVar5[0x4c] = lVar14 + uVar17 * 0x10;
      }
      else if (uVar9 < uVar16) {
        lVar11 = lVar11 + uVar9 * 0x10;
        while (lVar14 != lVar11) {
          lVar14 = lVar14 + -0x10;
          func_0x00010988c204(lVar14);
        }
        plVar5[0x4c] = lVar11;
      }
code_r0x00010988c138:
      plVar5[0x5a] = uVar9;
      return;
    }
    puVar8 = &UNK_10f685496;
  }
  func_0x00010988bd28(puVar8);
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x10ab6169c);
  (*pcVar3)();
}



/* Entry: 10ab616c8; end: 10ab616eb;  */

void FUN_10ab616c8(undefined8 param_1)

{
  if ((int)param_1 == 1) {
    return;
  }
  FUN_10a052ee0(1,0,param_1);
  return;
}



/* Entry: 10ab616ec; end: 10ab616ef;  */

void FUN_10ab616ec(void)

{
  return;
}



/* Entry: 10ab616f0; end: 10ab6174f;  */

void FUN_10ab616f0(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 8);
  if (lVar1 != 0) {
    FUN_10a044790(lVar1 + 0x40);
    (*(code *)**(undefined8 **)(lVar1 + 0x48))();
    FUN_10a044790(lVar1);
    (*(code *)**(undefined8 **)(lVar1 + 8))();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(lVar1);
    return;
  }
  return;
}



/* Entry: 10ab61750; end: 10ab6176b;  */

void FUN_10ab61750(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_2[1] = 0;
  return;
}



/* Entry: 10ab6176c; end: 10ab61793;  */

void FUN_10ab6176c(long param_1)

{
  long lStack_18;
  
  lStack_18 = param_1 + 8;
  FUN_10a3a7a08(&lStack_18);
  return;
}



/* Entry: 10ab61794; end: 10ab617bf;  */

void FUN_10ab61794(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  
  *param_1 = &PTR_FUN_110c4b3a0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  uVar1 = *(undefined8 *)(param_2 + 8);
  param_1[2] = *(undefined8 *)(param_2 + 0x10);
  param_1[1] = uVar1;
  param_1[3] = *(undefined8 *)(param_2 + 0x18);
  *(undefined8 *)(param_2 + 8) = 0;
  *(undefined8 *)(param_2 + 0x10) = 0;
  *(undefined8 *)(param_2 + 0x18) = 0;
  return;
}



/* Entry: 10ab617c0; end: 10ab6185f;  */

void FUN_10ab617c0(long *param_1,long *param_2,long param_3,long *param_4,long param_5)

{
  long lVar1;
  long lVar2;
  
  lVar2 = *param_1 - (ulong)uRam00000001133006e0;
  if (param_5 != 0) {
    lVar1 = 0;
    if (*param_1 != 0) {
      lVar1 = lVar2 + 0xe0;
    }
    param_5 = param_5 << 4;
    do {
      if (*param_4 != 0) {
        func_0x00010a1bf190(*param_4 + 0xd0,lVar1);
      }
      param_4 = param_4 + 2;
      param_5 = param_5 + -0x10;
    } while (param_5 != 0);
  }
  if (param_3 != 0) {
    param_3 = param_3 << 4;
    do {
      if (*param_2 != 0) {
        func_0x00010a1bf34c(*param_2 + 0xd0,lVar2 + 0xe0);
      }
      param_2 = param_2 + 2;
      param_3 = param_3 + -0x10;
    } while (param_3 != 0);
  }
  return;
}


