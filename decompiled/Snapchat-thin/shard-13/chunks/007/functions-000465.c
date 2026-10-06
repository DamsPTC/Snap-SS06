/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10aaf0d14; end: 10aaf0d53;  */

void FUN_10aaf0d14(long *param_1,code **param_2,undefined8 *param_3)

{
  undefined ***pppuVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  long *plVar5;
  undefined ***pppuVar6;
  undefined ***pppuVar7;
  code **ppcVar8;
  code **ppcVar9;
  undefined8 *puVar10;
  long lVar11;
  undefined **ppuVar12;
  undefined8 *puStack_160;
  undefined8 *puStack_158;
  int aiStack_150 [2];
  undefined8 *puStack_148;
  undefined1 auStack_140 [16];
  int aiStack_130 [2];
  long lStack_128;
  undefined8 **ppuStack_120;
  undefined **ppuStack_118;
  undefined1 *puStack_110;
  undefined1 **ppuStack_108;
  undefined1 *puStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_a8;
  undefined ***pppuStack_a0;
  code *pcStack_98;
  undefined ***pppuStack_90;
  undefined8 uStack_88;
  undefined ***pppuStack_80;
  code *pcStack_78;
  undefined **ppuStack_70;
  long lStack_68;
  long lStack_60;
  code *pcStack_58;
  undefined ***pppuStack_50;
  undefined8 uStack_48;
  undefined ***pppuStack_40;
  long lStack_38;
  
  if ((param_1 == (long *)0x0) || ((char)param_1[8] != '\x02')) {
    if ((param_1 != (long *)0x0) && ((char)param_1[8] == '\x01')) {
                    /* WARNING: Could not recover jumptable at 0x00010aaf0d4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)*param_1)(param_2,param_3,param_1);
      return;
    }
    return;
  }
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar5 = param_1;
  ppcVar8 = param_2;
  puVar10 = param_3;
  FUN_10a688b40();
  if (plVar5 == (long *)0x0) {
    ppcVar9 = (code **)0x0;
    pppuVar6 = (undefined ***)0x0;
    if (ppcVar8 != (code **)0x0) {
      lStack_60 = param_1[1];
      lStack_68 = *param_1;
      if (param_1[1] != 0) {
        plVar5 = (long *)(param_1[1] + 8);
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
          if (bVar3) {
            *plVar5 = *plVar5 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      pcStack_98 = *param_2;
      pppuStack_90 = (undefined ***)param_2[1];
      if (pppuStack_90 != (undefined ***)0x0) {
        pppuVar6 = pppuStack_90 + 1;
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(pppuVar6,0x10);
          if (bVar3) {
            *pppuVar6 = (undefined **)((long)*pppuVar6 + 1);
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      uStack_88 = *param_3;
      pppuVar7 = (undefined ***)param_3[1];
      if (pppuVar7 != (undefined ***)0x0) {
        pppuVar6 = pppuVar7 + 1;
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(pppuVar6,0x10);
          if (bVar3) {
            *pppuVar6 = (undefined **)((long)*pppuVar6 + 1);
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      pcStack_78 = FUN_10ab0408c;
      ppuStack_70 = &PTR_FUN_110c45e10;
      uStack_a8 = 0;
      pppuStack_a0 = (undefined ***)0x0;
      if (pppuStack_90 != (undefined ***)0x0) {
        pppuVar6 = pppuStack_90 + 1;
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(pppuVar6,0x10);
          if (bVar3) {
            *pppuVar6 = (undefined **)((long)*pppuVar6 + 1);
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      if (pppuVar7 != (undefined ***)0x0) {
        pppuVar6 = pppuVar7 + 1;
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(pppuVar6,0x10);
          if (bVar3) {
            *pppuVar6 = (undefined **)((long)*pppuVar6 + 1);
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      param_2 = &pcStack_78;
      ppcVar9 = &pcStack_78;
      pppuStack_80 = pppuVar7;
      pcStack_58 = pcStack_98;
      pppuStack_50 = pppuStack_90;
      uStack_48 = uStack_88;
      pppuStack_40 = pppuVar7;
      FUN_10a4634ec(ppcVar8,ppcVar9);
      pppuVar6 = &ppuStack_70;
      (*(code *)*ppuStack_70)();
      if (pppuVar7 != (undefined ***)0x0) {
        pppuVar1 = pppuVar7 + 1;
        do {
          ppuVar12 = *pppuVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(pppuVar1,0x10);
          if (bVar3) {
            *pppuVar1 = (undefined **)((long)ppuVar12 + -1);
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (ppuVar12 == (undefined **)0x0) {
          (*(code *)(*pppuVar7)[2])(pppuVar7);
          __ZNSt3__119__shared_weak_count14__release_weakEv();
          pppuVar6 = pppuVar7;
        }
      }
      pppuVar7 = pppuStack_90;
      if (pppuStack_90 != (undefined ***)0x0) {
        pppuVar1 = pppuStack_90 + 1;
        do {
          ppuVar12 = *pppuVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(pppuVar1,0x10);
          if (bVar3) {
            *pppuVar1 = (undefined **)((long)ppuVar12 + -1);
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (ppuVar12 == (undefined **)0x0) {
          (*(code *)(*pppuStack_90)[2])(pppuStack_90);
          __ZNSt3__119__shared_weak_count14__release_weakEv();
          pppuVar6 = pppuVar7;
        }
      }
      pppuVar7 = pppuStack_a0;
      if (pppuStack_a0 != (undefined ***)0x0) {
        pppuVar1 = pppuStack_a0 + 1;
        do {
          ppuVar12 = *pppuVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(pppuVar1,0x10);
          if (bVar3) {
            *pppuVar1 = (undefined **)((long)ppuVar12 + -1);
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (ppuVar12 == (undefined **)0x0) {
          (*(code *)(*pppuStack_a0)[2])(pppuStack_a0);
          __ZNSt3__119__shared_weak_count14__release_weakEv();
          pppuVar6 = pppuVar7;
        }
      }
    }
  }
  else {
    *plVar5 = CONCAT44((int)((ulong)*plVar5 >> 0x20) + 1,(int)*plVar5 + 1);
    pppuVar6 = (undefined ***)*param_1;
    ppcVar9 = param_2;
    FUN_10ab03e84(pppuVar6,param_2,param_3);
    iVar4 = *(int *)((long)plVar5 + 4) + -1;
    *(int *)((long)plVar5 + 4) = iVar4;
    puVar10 = param_3;
    if (iVar4 == 0) {
      *(undefined4 *)plVar5 = 0;
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return;
  }
  ___stack_chk_fail();
  (*(code *)*ppuStack_70)(param_2 + 1);
  FUN_10ab0405c(&uStack_a8);
  __Unwind_Resume();
  func_0x000109884c0c(&ppuStack_120,pppuVar6 + 1,*pppuVar6);
  func_0x000109884820(&puStack_158,&ppuStack_120,*pppuVar6);
  if (ppuStack_120 != (undefined8 **)0x0) {
    (*(code *)**ppuStack_120)();
  }
  (**(code **)(**pppuVar6 + 0x30))(&puStack_160);
  ppuVar12 = *pppuVar6;
  FUN_10a724820(auStack_140,ppuVar12,ppcVar9);
  FUN_10a05b924(aiStack_130,ppuVar12,puVar10);
  uStack_f8 = 2;
  puStack_100 = auStack_140;
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



/* Entry: 10aaf0d54; end: 10aaf0dcb;  */

long FUN_10aaf0d54(long param_1)

{
  func_0x00010ab03988(param_1 + 0x28);
  if (*(long *)(param_1 + 0x20) != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  if (*(long *)(param_1 + 0x10) != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  return param_1;
}



/* Entry: 10aaf0dcc; end: 10aaf100f;  */

void FUN_10aaf0dcc(undefined ***param_1,undefined ***param_2,undefined **UNRECOVERED_JUMPTABLE)

{
  undefined ***pppuVar1;
  undefined **ppuVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  undefined ***pppuVar6;
  undefined ***pppuVar7;
  undefined **ppuVar8;
  undefined ***pppuVar9;
  undefined **ppuVar10;
  undefined ***unaff_x20;
  undefined ***unaff_x21;
  undefined **ppuVar11;
  undefined **ppuStack_98;
  undefined ***pppuStack_90;
  undefined **ppuStack_88;
  undefined ***pppuStack_80;
  undefined **ppuStack_78;
  undefined **ppuStack_70;
  undefined **ppuStack_68;
  undefined **ppuStack_60;
  undefined **ppuStack_58;
  undefined ***pppuStack_50;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pppuVar6 = param_1;
  pppuVar9 = param_2;
  if (param_1 != (undefined ***)0x0) {
    unaff_x20 = param_1;
    if (*(char *)(param_1 + 8) == '\x01') {
      UNRECOVERED_JUMPTABLE = *param_1;
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
                    /* WARNING: Could not recover jumptable at 0x00010aaf0e88. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)UNRECOVERED_JUMPTABLE)(param_2,param_1);
        return;
      }
      goto LAB_10aaf0fc4;
    }
    if (*(char *)(param_1 + 8) == '\x02') {
      unaff_x21 = param_1;
      pppuVar7 = param_2;
      FUN_10a688b40();
      if (unaff_x21 == (undefined ***)0x0) {
        pppuVar9 = (undefined ***)0x0;
        pppuVar6 = (undefined ***)0x0;
        if (pppuVar7 != (undefined ***)0x0) {
          ppuStack_60 = param_1[1];
          ppuStack_68 = *param_1;
          if (param_1[1] != (undefined **)0x0) {
            ppuVar10 = param_1[1] + 1;
            do {
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(ppuVar10,0x10);
              if (bVar4) {
                *ppuVar10 = *ppuVar10 + 1;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
          }
          ppuStack_88 = *param_2;
          pppuVar7 = (undefined ***)param_2[1];
          if (pppuVar7 != (undefined ***)0x0) {
            pppuVar9 = pppuVar7 + 1;
            do {
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(pppuVar9,0x10);
              if (bVar4) {
                *pppuVar9 = (undefined **)((long)*pppuVar9 + 1);
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
          }
          ppuStack_78 = (undefined **)FUN_10ab044b8;
          ppuStack_70 = &PTR_FUN_110c45e28;
          ppuStack_98 = (undefined **)0x0;
          pppuStack_90 = (undefined ***)0x0;
          if (pppuVar7 != (undefined ***)0x0) {
            pppuVar9 = pppuVar7 + 1;
            do {
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(pppuVar9,0x10);
              if (bVar4) {
                *pppuVar9 = (undefined **)((long)*pppuVar9 + 1);
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
          }
          unaff_x20 = &ppuStack_98;
          unaff_x21 = &ppuStack_78;
          pppuVar9 = &ppuStack_78;
          pppuStack_80 = pppuVar7;
          ppuStack_58 = ppuStack_88;
          pppuStack_50 = pppuVar7;
          FUN_10a4634ec();
          pppuVar6 = &ppuStack_70;
          (*(code *)*ppuStack_70)();
          if (pppuVar7 != (undefined ***)0x0) {
            pppuVar1 = pppuVar7 + 1;
            do {
              ppuVar10 = *pppuVar1;
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(pppuVar1,0x10);
              if (bVar4) {
                *pppuVar1 = (undefined **)((long)ppuVar10 + -1);
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
            if (ppuVar10 == (undefined **)0x0) {
              (*(code *)(*pppuVar7)[2])(pppuVar7);
              __ZNSt3__119__shared_weak_count14__release_weakEv();
              pppuVar6 = pppuVar7;
            }
          }
          pppuVar7 = pppuStack_90;
          if (pppuStack_90 != (undefined ***)0x0) {
            pppuVar1 = pppuStack_90 + 1;
            do {
              ppuVar10 = *pppuVar1;
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(pppuVar1,0x10);
              if (bVar4) {
                *pppuVar1 = (undefined **)((long)ppuVar10 + -1);
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
            if (ppuVar10 == (undefined **)0x0) {
              (*(code *)(*pppuStack_90)[2])(pppuStack_90);
              __ZNSt3__119__shared_weak_count14__release_weakEv();
              pppuVar6 = pppuVar7;
            }
          }
        }
      }
      else {
        *unaff_x21 = (undefined **)
                     CONCAT44((int)((ulong)*unaff_x21 >> 0x20) + 1,(int)*unaff_x21 + 1);
        pppuVar6 = (undefined ***)*param_1;
        FUN_10ab042b4();
        iVar5 = *(int *)((long)unaff_x21 + 4) + -1;
        *(int *)((long)unaff_x21 + 4) = iVar5;
        pppuVar9 = param_2;
        if (iVar5 == 0) {
          *(undefined4 *)unaff_x21 = 0;
        }
      }
    }
  }
  param_1 = pppuVar6;
  param_2 = pppuVar9;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return;
  }
LAB_10aaf0fc4:
  ___stack_chk_fail();
  (*(code *)*ppuStack_70)(unaff_x21 + 1);
  FUN_10ab038d8(unaff_x20 + 2);
  func_0x00010a004dac(&ppuStack_98);
  __Unwind_Resume();
  __ZNSt3__115recursive_mutex4lockEv(param_2 + 2);
  ppuVar8 = (undefined **)0x48;
  __Znwm();
  ppuVar8[2] = (undefined *)&PTR_FUN_110c45b88;
  ppuVar8[3] = (undefined *)UNRECOVERED_JUMPTABLE;
  ppuVar10 = param_2[0xb];
  ppuVar11 = param_2[0xc];
  *ppuVar8 = (undefined *)(param_2 + 10);
  ppuVar8[1] = (undefined *)ppuVar10;
  *ppuVar10 = (undefined *)ppuVar8;
  param_2[0xb] = ppuVar8;
  param_2[0xc] = (undefined **)((long)ppuVar11 + 1);
  __ZNSt3__115recursive_mutex6unlockEv(param_2 + 2);
  ppuVar11 = param_2[1];
  ppuVar10 = *param_2;
  if (param_2[1] != (undefined **)0x0) {
    ppuVar2 = param_2[1] + 2;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(ppuVar2,0x10);
      if (bVar4) {
        *ppuVar2 = *ppuVar2 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  *param_1 = ppuVar8;
  param_1[2] = ppuVar11;
  param_1[1] = ppuVar10;
  return;
}



/* Entry: 10aaf1010; end: 10aaf10b7;  */

void FUN_10aaf1010(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  long *plVar1;
  undefined8 *puVar2;
  long lVar3;
  char cVar4;
  bool bVar5;
  long *plVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  __ZNSt3__115recursive_mutex4lockEv(param_2 + 2);
  plVar6 = (long *)0x48;
  __Znwm();
  plVar6[2] = (long)&PTR_FUN_110c45b88;
  plVar6[3] = param_3;
  puVar2 = (undefined8 *)param_2[0xb];
  lVar3 = param_2[0xc];
  *plVar6 = (long)(param_2 + 10);
  plVar6[1] = (long)puVar2;
  *puVar2 = plVar6;
  param_2[0xb] = plVar6;
  param_2[0xc] = lVar3 + 1;
  __ZNSt3__115recursive_mutex6unlockEv(param_2 + 2);
  uVar8 = param_2[1];
  uVar7 = *param_2;
  if (param_2[1] != 0) {
    plVar1 = (long *)(param_2[1] + 0x10);
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar5) {
        *plVar1 = *plVar1 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  *param_1 = plVar6;
  param_1[2] = uVar8;
  param_1[1] = uVar7;
  return;
}



/* Entry: 10aaf10b8; end: 10aaf1137;  */

undefined8 * FUN_10aaf10b8(undefined8 *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  
  plVar4 = (long *)param_1[2];
  if (plVar4 != (long *)0x0) {
    __ZNSt3__119__shared_weak_count4lockEv();
    if (plVar4 != (long *)0x0) {
      if (param_1[1] != 0) {
        FUN_10a05c0fc(param_1[1],*param_1);
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
    if (param_1[2] != 0) {
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
  }
  return param_1;
}



/* Entry: 10aaf1138; end: 10aaf1263;  */

void FUN_10aaf1138(long param_1,undefined8 param_2,long param_3)

{
  long *plVar1;
  undefined8 uVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  long *plVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puStack_48;
  undefined8 *puStack_40;
  undefined8 uStack_38;
  
  if (param_3 != 0) {
    plVar6 = (long *)(param_3 + 8);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar4) {
        *plVar6 = *plVar6 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  plVar6 = *(long **)(param_1 + 0x180);
  *(undefined8 *)(param_1 + 0x178) = param_2;
  *(long *)(param_1 + 0x180) = param_3;
  if (plVar6 != (long *)0x0) {
    plVar1 = plVar6 + 1;
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
      (**(code **)(*plVar6 + 0x10))(plVar6);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
    }
  }
  puVar7 = *(undefined8 **)(param_1 + 0x188);
  uStack_38 = *(undefined8 *)(param_1 + 0x198);
  puVar8 = *(undefined8 **)(param_1 + 400);
  *(undefined8 *)(param_1 + 400) = 0;
  *(undefined8 *)(param_1 + 0x198) = 0;
  *(undefined8 *)(param_1 + 0x188) = 0;
  puStack_48 = puVar7;
  puStack_40 = puVar8;
  for (; puVar7 != puVar8; puVar7 = puVar7 + 2) {
    uVar2 = *puVar7;
    plVar6 = (long *)puVar7[1];
    if (plVar6 != (long *)0x0) {
      plVar1 = plVar6 + 1;
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar4) {
          *plVar1 = *plVar1 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    FUN_10aaf0dcc(uVar2,param_1 + 0x178);
    if (plVar6 != (long *)0x0) {
      plVar1 = plVar6 + 1;
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
        (**(code **)(*plVar6 + 0x10))(plVar6);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
      }
    }
  }
  FUN_10aafcfb8(&puStack_48);
  return;
}



/* Entry: 10aaf1264; end: 10aaf13fb;  */

void FUN_10aaf1264(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  undefined8 uStack_30;
  long *plStack_28;
  
  if (*(long *)(param_1 + 0x110) != 0) {
    FUN_10a871f30();
  }
  uStack_30 = 0;
  plStack_28 = (long *)0x0;
  FUN_10a59e134(param_1 + 0x110,&uStack_30);
  plVar4 = plStack_28;
  if (plStack_28 != (long *)0x0) {
    plVar1 = plStack_28 + 1;
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
      (**(code **)(*plStack_28 + 0x10))(plStack_28);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
    }
  }
  uStack_30 = 0;
  plStack_28 = (long *)0x0;
  func_0x00010aaf1338(param_1 + 0x120,&uStack_30);
  plVar4 = plStack_28;
  if (plStack_28 != (long *)0x0) {
    plVar1 = plStack_28 + 1;
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
      (**(code **)(*plStack_28 + 0x10))(plStack_28);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
    }
  }
  *(undefined1 *)(param_1 + 0x140) = 0;
  *(undefined2 *)(param_1 + 0x170) = 0;
  FUN_10ab04c74(param_1 + 0x148);
  return;
}



/* Entry: 10aaf13fc; end: 10aaf15cb;  */

undefined8 * FUN_10aaf13fc(undefined8 *param_1,undefined8 *param_2,long *param_3)

{
  long *plVar1;
  long lVar2;
  char cVar3;
  bool bVar4;
  long *plVar5;
  undefined8 *puVar6;
  long lVar7;
  long *plVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  long lStack_a0;
  long *plStack_98;
  undefined **ppuStack_90;
  long lStack_88;
  long lStack_80;
  long *plStack_78;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  __ZNSt3__115recursive_mutex4lockEv(param_2 + 2);
  lVar7 = *param_3;
  lVar2 = param_3[1];
  plVar8 = (long *)param_3[2];
  if (plVar8 == (long *)0x0) {
    plStack_78 = (long *)0x0;
  }
  else {
    plVar5 = plVar8 + 1;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar4) {
        *plVar5 = *plVar5 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar4) {
        *plVar5 = *plVar5 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
      plStack_78 = plVar8;
    } while (cVar3 != '\0');
  }
  ppuStack_90 = &PTR_FUN_110c45bf0;
  plVar5 = (long *)0x48;
  lStack_a0 = lVar2;
  plStack_98 = plVar8;
  lStack_88 = lVar7;
  lStack_80 = lVar2;
  __Znwm();
  plVar5[2] = (long)&PTR_FUN_110c45bf0;
  plVar5[3] = lVar7;
  plVar5[4] = lVar2;
  plVar5[5] = (long)plVar8;
  if (plVar8 != (long *)0x0) {
    plVar1 = plVar8 + 1;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = *plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  puVar6 = (undefined8 *)param_2[0xb];
  lVar7 = param_2[0xc];
  *plVar5 = (long)(param_2 + 10);
  plVar5[1] = (long)puVar6;
  *puVar6 = plVar5;
  param_2[0xb] = plVar5;
  param_2[0xc] = lVar7 + 1;
  if (plVar8 != (long *)0x0) {
    plVar5 = plVar8 + 1;
    do {
      lVar7 = *plVar5;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar4) {
        *plVar5 = lVar7 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar7 == 0) {
      (**(code **)(*plVar8 + 0x10))(plVar8);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar8);
    }
    do {
      lVar7 = *plVar5;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar4) {
        *plVar5 = lVar7 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar7 == 0) {
      (**(code **)(*plVar8 + 0x10))(plVar8);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar8);
    }
  }
  uVar9 = param_2[0xb];
  puVar6 = param_2 + 2;
  __ZNSt3__115recursive_mutex6unlockEv();
  uVar11 = param_2[1];
  uVar10 = *param_2;
  if (param_2[1] != 0) {
    plVar8 = (long *)(param_2[1] + 0x10);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar4) {
        *plVar8 = *plVar8 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  *param_1 = uVar9;
  param_1[2] = uVar11;
  param_1[1] = uVar10;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_58) {
    ___stack_chk_fail();
    func_0x00010a042b54(&lStack_80);
    func_0x00010a042b54(&lStack_a0);
    __ZNSt3__115recursive_mutex6unlockEv(param_2 + 2);
    __Unwind_Resume();
    plVar8 = (long *)puVar6[2];
    if (plVar8 != (long *)0x0) {
      __ZNSt3__119__shared_weak_count4lockEv();
      if (plVar8 != (long *)0x0) {
        if (puVar6[1] != 0) {
          FUN_10a05c0fc(puVar6[1],*puVar6);
        }
        plVar5 = plVar8 + 1;
        do {
          lVar7 = *plVar5;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar5,0x10);
          if (bVar4) {
            *plVar5 = lVar7 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (lVar7 == 0) {
          (**(code **)(*plVar8 + 0x10))(plVar8);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar8);
        }
      }
      if (puVar6[2] != 0) {
        __ZNSt3__119__shared_weak_count14__release_weakEv();
      }
    }
    return puVar6;
  }
  return puVar6;
}



/* Entry: 10aaf15cc; end: 10aaf164b;  */

undefined8 * FUN_10aaf15cc(undefined8 *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  
  plVar4 = (long *)param_1[2];
  if (plVar4 != (long *)0x0) {
    __ZNSt3__119__shared_weak_count4lockEv();
    if (plVar4 != (long *)0x0) {
      if (param_1[1] != 0) {
        FUN_10a05c0fc(param_1[1],*param_1);
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
    if (param_1[2] != 0) {
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
  }
  return param_1;
}



/* Entry: 10aaf164c; end: 10aaf1adf;  */

/* WARNING: Removing unreachable block (ram,0x00010aaf178c) */
/* WARNING: Removing unreachable block (ram,0x00010aaf171c) */
/* WARNING: Removing unreachable block (ram,0x00010aaf17e8) */

void FUN_10aaf164c(long param_1,code **param_2,long param_3)

{
  code *pcVar1;
  ulong uVar2;
  undefined1 uVar3;
  char cVar4;
  bool bVar5;
  undefined4 *puVar6;
  undefined8 *puVar7;
  code **ppcVar8;
  code *pcVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  code *pcVar12;
  undefined8 in_x7;
  long lVar13;
  code *pcVar14;
  code *pcStack_170;
  code *pcStack_168;
  undefined1 uStack_160;
  undefined7 uStack_15f;
  code *pcStack_158;
  undefined8 uStack_150;
  code *pcStack_148;
  code *pcStack_140;
  undefined8 auStack_138 [2];
  long alStack_128 [7];
  undefined8 uStack_f0;
  code *pcStack_e8;
  undefined **ppuStack_e0;
  undefined8 uStack_d8;
  code *pcStack_d0;
  undefined8 uStack_c8;
  undefined4 uStack_a8;
  undefined1 uStack_a4;
  undefined1 uStack_a3;
  undefined2 uStack_a2;
  undefined5 uStack_a0;
  undefined1 uStack_9b;
  undefined2 uStack_9a;
  undefined1 auStack_98 [7];
  byte bStack_91;
  undefined8 uStack_60;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar13 = *(long *)(param_1 + 0x120);
  uVar2 = *(ulong *)(lVar13 + 0x3f8);
  if (-1 < (char)*(byte *)(lVar13 + 0x407)) {
    uVar2 = (ulong)*(byte *)(lVar13 + 0x407);
  }
  if (uVar2 == 0) {
    puVar11 = (undefined8 *)&UNK_10f68ee41;
    FUN_10a00946c();
    goto LAB_10aaf19f4;
  }
  pcStack_e8 = (code *)((ulong)pcStack_e8 & 0xffffffffffffff00);
  ppuStack_e0 = (undefined **)0x0;
  pcStack_158 = (code *)0x0;
  uStack_160 = 3;
  pcVar14 = (code *)(lVar13 + 0x3f0);
  func_0x00010938229c();
  bStack_91 = 0xd;
  uStack_a8 = 0x6461656c;
  uStack_a4 = 0x65;
  uStack_a3 = 0x72;
  uStack_a2 = 0x6f62;
  uStack_a0 = 0x6449647261;
  uStack_9b = 0;
  ppcVar8 = &pcStack_e8;
  pcStack_158 = pcVar14;
  func_0x0001095b7584(ppcVar8,&uStack_a8);
  uVar3 = *(undefined1 *)ppcVar8;
  *(undefined1 *)ppcVar8 = 3;
  pcVar14 = ppcVar8[1];
  uStack_160 = uVar3;
  ppcVar8[1] = pcStack_158;
  pcStack_158 = pcVar14;
  func_0x000109380ffc(&pcStack_158,uVar3);
  pcStack_148._0_1_ = 5;
  pcStack_140 = (code *)(long)(int)param_2;
  bStack_91 = 5;
  uStack_a8 = 0x726f6373;
  uStack_a4 = 0x65;
  uStack_a3 = 0;
  ppcVar8 = &pcStack_e8;
  func_0x0001095b7584(ppcVar8,&uStack_a8);
  uVar3 = *(undefined1 *)ppcVar8;
  *(undefined1 *)ppcVar8 = 5;
  pcStack_148 = (code *)CONCAT71(pcStack_148._1_7_,uVar3);
  pcVar14 = ppcVar8[1];
  ppcVar8[1] = pcStack_140;
  pcStack_140 = pcVar14;
  func_0x000109380ffc(&pcStack_140,uVar3);
  FUN_10a0c32e4(&uStack_a8,&pcStack_e8,0xffffffff,0x20,0,0);
  uVar2 = CONCAT26(uStack_9a,CONCAT15(uStack_9b,uStack_a0));
  puVar6 = (undefined4 *)CONCAT26(uStack_a2,CONCAT15(uStack_a3,CONCAT14(uStack_a4,uStack_a8)));
  if (-1 < (char)bStack_91) {
    uVar2 = (ulong)bStack_91;
    puVar6 = &uStack_a8;
  }
  FUN_10a3bf330(auStack_138,puVar6,uVar2);
  func_0x000109380ffc(&ppuStack_e0,(ulong)pcStack_e8 & 0xff);
  puVar11 = (undefined8 *)(param_1 + 0x1e0);
  if (*(char *)(param_1 + 0x1f7) < '\0') {
    if (*(long *)(param_1 + 0x1e8) == 0) goto LAB_10aaf19d8;
  }
  else if (*(char *)(param_1 + 0x1f7) == '\0') {
LAB_10aaf19d8:
    puVar11 = (undefined8 *)(*(long *)(*(long *)(param_1 + 0xf0) + 0x100) + 0x208);
  }
  FUN_10aaf1ae0(&uStack_160,*(undefined8 *)(param_1 + 0x130),param_1);
  pcVar9 = (code *)0x138;
  __Znwm();
  uVar10 = auStack_138[0];
  pcVar12 = pcVar9 + 8;
  *(long *)pcVar12 = 0;
  *(long *)(pcVar9 + 0x10) = 0;
  *(undefined ***)pcVar9 = &PTR_FUN_110b9f3b0;
  pcVar14 = pcVar9 + 0x18;
  auStack_138[0] = 0;
  uStack_a8 = (undefined4)uVar10;
  uStack_a4 = (undefined1)((ulong)uVar10 >> 0x20);
  uStack_a3 = (undefined1)((ulong)uVar10 >> 0x28);
  uStack_a2 = (undefined2)((ulong)uVar10 >> 0x30);
  uStack_a0 = (undefined5)auStack_138[1];
  uStack_9b = (undefined1)((ulong)auStack_138[1] >> 0x28);
  uStack_9a = (undefined2)((ulong)auStack_138[1] >> 0x30);
  (**(code **)(alStack_128[0] + 0x10))(auStack_98,alStack_128);
  uStack_60 = uStack_f0;
  uVar2 = puVar11[1];
  puVar7 = (undefined8 *)*puVar11;
  if (-1 < (char)*(byte *)((long)puVar11 + 0x17)) {
    uVar2 = (ulong)*(byte *)((long)puVar11 + 0x17);
    puVar7 = puVar11;
  }
  pcStack_e8 = FUN_10ab05048;
  ppuStack_e0 = &PTR_FUN_110c45e70;
  uStack_d8 = CONCAT71(uStack_15f,uStack_160);
  uStack_c8 = uStack_150;
  pcStack_d0 = pcStack_158;
  pcStack_158 = (code *)0x0;
  uStack_150 = 0;
  param_3 = 0x1e;
  FUN_10a23708c(pcVar14,&UNK_10e4f4a1a,0x1e,&UNK_10f647b49,4,&uStack_a8,1,in_x7,puVar7,uVar2,
                &pcStack_e8);
  (*(code *)*ppuStack_e0)(&ppuStack_e0);
  FUN_10a042634(&uStack_a8);
  pcStack_148 = pcVar14;
  pcStack_140 = pcVar9;
  FUN_10aaf1b88(&uStack_160);
  uVar10 = *(undefined8 *)(*(long *)(param_1 + 0xf0) + 0x940);
  do {
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(pcVar12,0x10);
    if (bVar5) {
      *(long *)pcVar12 = *(long *)pcVar12 + 1;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  param_2 = &pcStack_170;
  pcStack_170 = pcVar14;
  pcStack_168 = pcVar9;
  FUN_10a25f3f4(uVar10);
  do {
    lVar13 = *(long *)pcVar12;
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(pcVar12,0x10);
    if (bVar5) {
      *(long *)pcVar12 = lVar13 + -1;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  if (lVar13 == 0) {
    (**(code **)(*(long *)pcVar9 + 0x10))(pcVar9);
    __ZNSt3__119__shared_weak_count14__release_weakEv(pcVar9);
  }
  pcVar14 = pcStack_140;
  if (pcStack_140 != (code *)0x0) {
    pcVar9 = pcStack_140 + 8;
    do {
      lVar13 = *(long *)pcVar9;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(pcVar9,0x10);
      if (bVar5) {
        *(long *)pcVar9 = lVar13 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar13 == 0) {
      (**(code **)(*(long *)pcStack_140 + 0x10))(pcStack_140);
      __ZNSt3__119__shared_weak_count14__release_weakEv(pcVar14);
    }
  }
  puVar11 = auStack_138;
  FUN_10a042634();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
LAB_10aaf19f4:
  ___stack_chk_fail();
  FUN_10a05bd88(&pcStack_170);
  FUN_10a05bd88(&pcStack_148);
  FUN_10a042634(auStack_138);
  __Unwind_Resume();
  __ZNSt3__115recursive_mutex4lockEv(param_2 + 2);
  pcVar12 = (code *)0x48;
  __Znwm();
  *(undefined ***)(pcVar12 + 0x10) = &PTR_DAT_110c45c08;
  *(long *)(pcVar12 + 0x18) = param_3;
  pcVar14 = param_2[0xb];
  pcVar9 = param_2[0xc];
  *(code ***)pcVar12 = param_2 + 10;
  *(code **)(pcVar12 + 8) = pcVar14;
  *(code **)pcVar14 = pcVar12;
  param_2[0xb] = pcVar12;
  param_2[0xc] = pcVar9 + 1;
  __ZNSt3__115recursive_mutex6unlockEv(param_2 + 2);
  pcVar9 = param_2[1];
  pcVar14 = *param_2;
  if (param_2[1] != (code *)0x0) {
    pcVar1 = param_2[1] + 0x10;
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(pcVar1,0x10);
      if (bVar5) {
        *(long *)pcVar1 = *(long *)pcVar1 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  *puVar11 = pcVar12;
  puVar11[2] = pcVar9;
  puVar11[1] = pcVar14;
  return;
}



/* Entry: 10aaf1ae0; end: 10aaf1b87;  */

void FUN_10aaf1ae0(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  long *plVar1;
  undefined8 *puVar2;
  long lVar3;
  char cVar4;
  bool bVar5;
  long *plVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  __ZNSt3__115recursive_mutex4lockEv(param_2 + 2);
  plVar6 = (long *)0x48;
  __Znwm();
  plVar6[2] = (long)&PTR_DAT_110c45c08;
  plVar6[3] = param_3;
  puVar2 = (undefined8 *)param_2[0xb];
  lVar3 = param_2[0xc];
  *plVar6 = (long)(param_2 + 10);
  plVar6[1] = (long)puVar2;
  *puVar2 = plVar6;
  param_2[0xb] = plVar6;
  param_2[0xc] = lVar3 + 1;
  __ZNSt3__115recursive_mutex6unlockEv(param_2 + 2);
  uVar8 = param_2[1];
  uVar7 = *param_2;
  if (param_2[1] != 0) {
    plVar1 = (long *)(param_2[1] + 0x10);
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar5) {
        *plVar1 = *plVar1 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  *param_1 = plVar6;
  param_1[2] = uVar8;
  param_1[1] = uVar7;
  return;
}



/* Entry: 10aaf1b88; end: 10aaf1c07;  */

undefined8 * FUN_10aaf1b88(undefined8 *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  
  plVar4 = (long *)param_1[2];
  if (plVar4 != (long *)0x0) {
    __ZNSt3__119__shared_weak_count4lockEv();
    if (plVar4 != (long *)0x0) {
      if (param_1[1] != 0) {
        FUN_10a05c0fc(param_1[1],*param_1);
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
    if (param_1[2] != 0) {
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
  }
  return param_1;
}



/* Entry: 10aaf1c08; end: 10aaf1e7f;  */

void FUN_10aaf1c08(long param_1,undefined8 param_2,undefined8 *param_3)

{
  long *plVar1;
  undefined8 ****ppppuVar2;
  ulong uVar3;
  undefined8 *****pppppuVar4;
  char cVar5;
  bool bVar6;
  undefined8 *puVar7;
  code *pcVar8;
  undefined8 *****pppppuVar9;
  undefined8 ****ppppuVar10;
  undefined8 ****ppppuVar11;
  undefined **ppuVar12;
  undefined **ppuVar13;
  undefined8 ***pppuVar14;
  long lVar15;
  undefined8 ****ppppuStack_b8;
  undefined **ppuStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 ***pppuStack_98;
  undefined8 ***apppuStack_90 [8];
  byte bStack_50;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar3 = param_3[1];
  puVar7 = (undefined8 *)*param_3;
  if (-1 < (char)*(byte *)((long)param_3 + 0x17)) {
    uVar3 = (ulong)*(byte *)((long)param_3 + 0x17);
    puVar7 = param_3;
  }
  FUN_10ae03140(0,puVar7,uVar3);
  ppuVar13 = &PTR_PTR_113306930;
  ppuVar12 = ppuVar13;
  FUN_10ae079a0();
  FUN_10ae0314c();
  FUN_10ae07cd4(ppuVar12);
  pppuStack_98 = *(undefined8 ****)(param_1 + 0x118);
  uStack_a0 = *(undefined8 *)(param_1 + 0x110);
  if (*(long *)(param_1 + 0x118) != 0) {
    plVar1 = (long *)(*(long *)(param_1 + 0x118) + 8);
    do {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar6) {
        *plVar1 = *plVar1 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
  }
  lVar15 = *(long *)(param_1 + 0x120);
  bStack_50 = 3;
  ppppuStack_b8 = apppuStack_90;
  if (*(char *)(lVar15 + 0x388) == '\0') {
    bStack_50 = 0;
  }
  else {
    ppuVar13 = (undefined **)(lVar15 + 0x348);
    FUN_10a005398(&ppppuStack_b8);
    bStack_50 = *(byte *)(lVar15 + 0x388);
  }
  FUN_10aaf1264(param_1);
  FUN_10a85ec08(param_2);
  if ((undefined **)0x7ffffffffffffff7 < ppuVar13) {
    func_0x000109ffde50();
    goto LAB_10aaf1e7c;
  }
  if (ppuVar13 < (undefined **)0x17) {
    uStack_a8 = CONCAT17((char)ppuVar13,(undefined7)uStack_a8);
    pppppuVar9 = &ppppuStack_b8;
    if (ppuVar13 != (undefined **)0x0) goto LAB_10aaf1d58;
  }
  else {
    pppppuVar4 = (undefined8 *****)0x19;
    if (((ulong)ppuVar13 | 7) != 0x17) {
      pppppuVar4 = (undefined8 *****)(((ulong)ppuVar13 | 7) + 1);
    }
    pppppuVar9 = pppppuVar4;
    __Znwm();
    uStack_a8 = (ulong)pppppuVar4 | 0x8000000000000000;
    ppppuStack_b8 = pppppuVar9;
    ppuStack_b0 = ppuVar13;
LAB_10aaf1d58:
    _memmove(pppppuVar9,param_2,ppuVar13);
  }
  *(undefined1 *)((long)pppppuVar9 + (long)ppuVar13) = 0;
  FUN_10a899ea0(apppuStack_90,&uStack_a0,&ppppuStack_b8,param_3);
  if ((long)uStack_a8 < 0) {
    __ZdlPv(ppppuStack_b8);
  }
  if ((ulong)bStack_50 < 4) {
    ppppuVar10 = apppuStack_90;
    (*(code *)(&PTR_FUN_110b9a040)[bStack_50])(ppppuVar10);
    ppppuVar11 = (undefined8 ****)pppuStack_98;
    if ((undefined8 ****)pppuStack_98 != (undefined8 ****)0x0) {
      ppppuVar2 = (undefined8 ****)(pppuStack_98 + 1);
      do {
        pppuVar14 = *ppppuVar2;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(ppppuVar2,0x10);
        if (bVar6) {
          *ppppuVar2 = (undefined8 ***)((long)pppuVar14 + -1);
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (pppuVar14 == (undefined8 ***)0x0) {
        (*(code *)(*pppuStack_98)[2])(pppuStack_98);
        __ZNSt3__119__shared_weak_count14__release_weakEv(ppppuVar11);
        ppppuVar10 = ppppuVar11;
      }
    }
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
      return;
    }
    ___stack_chk_fail();
    FUN_10a5ca2e0(&uStack_a0);
    __Unwind_Resume(ppppuVar10);
  }
LAB_10aaf1e7c:
                    /* WARNING: Does not return */
  pcVar8 = (code *)SoftwareBreakpoint(1,0x10aaf1e80);
  (*pcVar8)();
}



/* Entry: 10aaf1e80; end: 10aaf207f;  */

/* WARNING: Removing unreachable block (ram,0x00010aaf1fb4) */
/* WARNING: Removing unreachable block (ram,0x00010aaf1fb8) */
/* WARNING: Removing unreachable block (ram,0x00010aaf1fd4) */

void FUN_10aaf1e80(undefined8 *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long *plVar3;
  code *pcVar4;
  long *plVar5;
  ulong uVar6;
  undefined8 *puVar7;
  long *plVar8;
  float fVar9;
  float fVar10;
  long *plStack_60;
  long *plStack_58;
  undefined8 uStack_50;
  undefined1 *puStack_48;
  
  plStack_60 = (long *)0x0;
  plStack_58 = (long *)0x0;
  uStack_50 = 0;
  _CGPathApply(param_2,&plStack_60,FUN_10aaf2080);
  plVar3 = plStack_58;
  plVar5 = plStack_60;
  plVar8 = plStack_60;
  if (plStack_60 == plStack_58) {
LAB_10aaf1f9c:
    if (plStack_58 < plVar8) {
LAB_10aaf2064:
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x10aaf2068);
      (*pcVar4)();
    }
    plVar5 = plStack_58;
    if (plVar8 != plStack_58) {
      while (plVar3 = plVar5, plVar5 = plVar8, plVar3 != plVar8) {
        plVar5 = plVar3 + -3;
        if (*plVar5 != 0) {
          plVar3[-2] = *plVar5;
          __ZdlPv();
        }
      }
    }
  }
  else {
    do {
      puVar1 = (undefined8 *)*plVar5;
      puVar2 = (undefined8 *)plVar5[1];
      for (uVar6 = plVar5[1] - (long)puVar1; 8 < uVar6; uVar6 = uVar6 - 8) {
        puVar7 = puVar2 + -1;
        if (puVar2 == puVar1) goto LAB_10aaf2064;
        fVar9 = (float)*puVar1 - (float)*puVar7;
        fVar10 = (float)((ulong)*puVar1 >> 0x20) - (float)((ulong)*puVar7 >> 0x20);
        if (0.0001 <= SQRT(fVar9 * fVar9 + fVar10 * fVar10)) break;
        plVar5[1] = (long)puVar7;
        puVar2 = puVar7;
      }
      plVar5 = plVar5 + 3;
    } while (plVar5 != plStack_58);
    do {
      if ((ulong)(plVar8[1] - *plVar8) < 0x11) {
        plVar5 = plVar8;
        if (plVar8 != plStack_58) {
          while (plVar5 = plVar5 + 3, plVar5 != plVar3) {
            if (0x10 < (ulong)(plVar5[1] - *plVar5)) {
              func_0x00010a69c034(plVar8,plVar5);
              plVar8 = plVar8 + 3;
            }
          }
        }
        goto LAB_10aaf1f9c;
      }
      plVar8 = plVar8 + 3;
      plVar5 = plStack_58;
    } while (plVar8 != plStack_58);
  }
  plStack_58 = plVar5;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  FUN_10a07b6ac(param_1,plStack_60,plStack_58,
                ((long)plStack_58 - (long)plStack_60 >> 3) * -0x5555555555555555);
  puStack_48 = (undefined1 *)&plStack_60;
  func_0x00010a050870(&puStack_48);
  return;
}



/* Entry: 10aaf2080; end: 10aaf23b3;  */

undefined1  [16]
FUN_10aaf2080(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             long *param_5,long *param_6,undefined8 param_7,long param_8,long param_9)

{
  undefined8 *puVar1;
  float *pfVar2;
  double dVar3;
  double dVar4;
  code *pcVar5;
  int iVar6;
  long *plVar7;
  long *plVar8;
  ulong uVar9;
  ulong uVar10;
  double *pdVar11;
  long lVar12;
  ulong uVar13;
  float *pfVar14;
  uint uVar15;
  long *plVar16;
  long lVar17;
  long *plVar18;
  undefined8 *puVar19;
  float fVar20;
  undefined4 uVar21;
  float fVar22;
  undefined4 uVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  float fVar27;
  undefined4 uVar28;
  undefined4 uVar29;
  double dVar30;
  float fVar31;
  undefined4 uVar32;
  undefined4 uVar33;
  undefined4 uVar34;
  undefined4 uVar35;
  undefined8 uVar36;
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  double dStack_120;
  double dStack_118;
  long lStack_110;
  long lStack_100;
  long lStack_f8;
  undefined2 uStack_ea;
  undefined1 *puStack_e8;
  long lStack_98;
  long lStack_90;
  long lStack_88;
  long lStack_80;
  long *plStack_78;
  
  uVar35 = (undefined4)((ulong)param_4 >> 0x20);
  uVar34 = (undefined4)param_4;
  uVar33 = (undefined4)((ulong)param_3 >> 0x20);
  uVar32 = (undefined4)param_3;
  uVar29 = (undefined4)((ulong)param_2 >> 0x20);
  uVar28 = (undefined4)param_2;
  iVar6 = (int)*param_6;
  if (iVar6 < 2) {
    if (iVar6 == 0) {
      puVar1 = (undefined8 *)param_5[1];
      if (puVar1 < (undefined8 *)param_5[2]) {
        puVar19 = puVar1 + 3;
        *puVar1 = 0;
        puVar1[1] = 0;
        puVar1[2] = 0;
      }
      else {
        lVar17 = (long)puVar1 - *param_5;
        uVar13 = (lVar17 >> 3) * -0x5555555555555555 + 1;
        if (0xaaaaaaaaaaaaaaa < uVar13) {
          FUN_10a0509ec();
          uStack_ea = (undefined2)param_9;
          plVar8 = param_5;
          FUN_10a32e56c();
          *plVar8 = (long)&PTR_FUN_110c44f28;
          plVar16 = plVar8 + 0x11;
          *plVar16 = 0;
          plVar8[0x12] = 0;
          plVar8[0x13] = 0;
          lVar17 = param_8;
          _CTFontCreatePathForGlyph(param_8,param_9,0);
          lStack_f8 = lVar17;
          if (lVar17 != 0) {
            iVar6 = 2;
            func_0x000107c31924(2,0x10,0,0);
            if (iVar6 == 0) {
              FUN_10aaf1e80(&dStack_120,lVar17);
              func_0x00010a050a44(plVar16);
              uVar21 = SUB84(dStack_120,0);
              uVar23 = (undefined4)((ulong)dStack_120 >> 0x20);
              param_5[0x12] = (long)dStack_118;
              param_5[0x11] = (long)dStack_120;
              param_5[0x13] = lStack_110;
              dStack_118 = 0.0;
              lStack_110 = 0;
              dStack_120 = 0.0;
              puStack_e8 = (undefined1 *)&dStack_120;
              func_0x00010a050870(&puStack_e8);
            }
            else {
              _CGPathCreateCopyByFlattening(0);
              lStack_100 = lVar17;
              if (lVar17 == 0) {
                FUN_10aa11020(&lStack_100);
                param_9 = lVar17;
                goto LAB_10aaf2550;
              }
              FUN_10aaf1e80(&dStack_120);
              func_0x00010a050a44(plVar16);
              uVar21 = SUB84(dStack_120,0);
              uVar23 = (undefined4)((ulong)dStack_120 >> 0x20);
              param_5[0x12] = (long)dStack_118;
              param_5[0x11] = (long)dStack_120;
              param_5[0x13] = lStack_110;
              dStack_118 = 0.0;
              lStack_110 = 0;
              dStack_120 = 0.0;
              puStack_e8 = (undefined1 *)&dStack_120;
              func_0x00010a050870(&puStack_e8);
              FUN_10aa11020(&lStack_100);
            }
            _CGPathGetBoundingBox(lStack_f8);
            plVar8 = (long *)param_5[0x11];
            plVar16 = (long *)param_5[0x12];
            if (plVar8 != plVar16) {
              do {
                pfVar2 = (float *)plVar8[1];
                for (pfVar14 = (float *)*plVar8; pfVar14 != pfVar2; pfVar14 = pfVar14 + 2) {
                  *pfVar14 = *pfVar14 - (float)(double)CONCAT44(uVar23,uVar21);
                }
                plVar8 = plVar8 + 3;
              } while (plVar8 != plVar16);
            }
            param_5[3] = 0;
            param_5[4] = (long)(double)CONCAT44(uVar29,uVar28);
            param_5[6] = (long)(double)(long)((double)CONCAT44(uVar29,uVar28) +
                                             (double)CONCAT44(uVar35,uVar34));
            param_5[5] = (long)(double)(long)(double)CONCAT44(uVar33,uVar32);
            param_9 = 1;
            _CTFontGetAdvancesForGlyphs(param_8,1,&uStack_ea,&dStack_120,1);
            param_5[7] = CONCAT44((float)dStack_118,(float)dStack_120);
          }
LAB_10aaf2550:
          FUN_10aa11020(&lStack_f8);
          auVar40._8_8_ = param_9;
          auVar40._0_8_ = param_5;
          return auVar40;
        }
        lVar12 = param_5[2] - *param_5 >> 3;
        uVar10 = lVar12 * 0x5555555555555556;
        if (uVar10 < uVar13 || uVar10 - uVar13 == 0) {
          uVar10 = uVar13;
        }
        if (0x555555555555554 < (ulong)(lVar12 * -0x5555555555555555)) {
          uVar10 = 0xaaaaaaaaaaaaaaa;
        }
        plStack_78 = param_5;
        if (uVar10 == 0) {
          plVar8 = (long *)0x0;
        }
        else {
          plVar8 = param_5;
          FUN_10a050a00();
        }
        puVar1 = (undefined8 *)((long)plVar8 + lVar17);
        puVar19 = puVar1 + 3;
        *puVar1 = 0;
        puVar1[1] = 0;
        puVar1[2] = 0;
        lVar17 = (long)puVar1 - (param_5[1] - *param_5);
        _memcpy(lVar17);
        lStack_98 = *param_5;
        *param_5 = lVar17;
        param_5[1] = (long)puVar19;
        lStack_80 = param_5[2];
        param_5[2] = (long)(plVar8 + uVar10 * 3);
        lStack_90 = lStack_98;
        lStack_88 = lStack_98;
        FUN_10a55bf18(&lStack_98);
      }
      param_5[1] = (long)puVar19;
      if ((undefined8 *)*param_5 == puVar19) {
LAB_10aaf23ac:
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x10aaf23b0);
        (*pcVar5)();
      }
    }
    else if ((iVar6 != 1) || (puVar19 = (undefined8 *)param_5[1], (undefined8 *)*param_5 == puVar19)
            ) goto LAB_10aaf2388;
    param_5 = puVar19 + -3;
    lStack_98 = CONCAT44((float)((double *)param_6[1])[1],(float)*(double *)param_6[1]);
    param_6 = &lStack_98;
    func_0x00010a558044(param_5,param_6);
  }
  else if (iVar6 == 2) {
    lVar17 = param_5[1];
    if (*param_5 != lVar17) {
      plVar8 = (long *)(lVar17 + -0x18);
      if (*plVar8 != *(long *)(lVar17 + -0x10)) {
        pdVar11 = (double *)param_6[1];
        uVar36 = *(undefined8 *)(*(long *)(lVar17 + -0x10) + -8);
        dVar24 = pdVar11[1];
        dVar3 = *pdVar11;
        dVar25 = pdVar11[3];
        dVar4 = pdVar11[2];
        uVar15 = 1;
        do {
          fVar20 = (float)uVar15 / 8.0;
          fVar22 = 1.0 - fVar20;
          fVar27 = fVar20 * (fVar22 + fVar22);
          lStack_98 = CONCAT44((float)dVar25 * fVar20 * fVar20 +
                               (float)((ulong)uVar36 >> 0x20) * fVar22 * fVar22 +
                               (float)dVar24 * fVar27,
                               (float)dVar4 * fVar20 * fVar20 +
                               (float)uVar36 * fVar22 * fVar22 + (float)dVar3 * fVar27);
          param_6 = &lStack_98;
          param_5 = plVar8;
          func_0x00010a558044(plVar8,param_6);
          uVar15 = uVar15 + 1;
        } while (uVar15 != 9);
      }
    }
  }
  else if (iVar6 == 3) {
    lVar17 = param_5[1];
    if (*param_5 != lVar17) {
      plVar8 = (long *)(lVar17 + -0x18);
      if (*plVar8 != *(long *)(lVar17 + -0x10)) {
        pdVar11 = (double *)param_6[1];
        uVar36 = *(undefined8 *)(*(long *)(lVar17 + -0x10) + -8);
        dVar25 = pdVar11[1];
        dVar3 = *pdVar11;
        dVar30 = pdVar11[3];
        dVar24 = pdVar11[2];
        dVar26 = pdVar11[5];
        dVar4 = pdVar11[4];
        uVar15 = 1;
        do {
          fVar20 = (float)uVar15 / 16.0;
          fVar22 = 1.0 - fVar20;
          fVar31 = fVar22 * fVar22 * fVar22;
          fVar27 = fVar20 * fVar22 * fVar22 * 3.0;
          fVar22 = fVar20 * fVar20 * fVar22 * 3.0;
          fVar20 = fVar20 * fVar20 * fVar20;
          lStack_98 = CONCAT44((float)dVar26 * fVar20 +
                               (float)dVar30 * fVar22 +
                               (float)((ulong)uVar36 >> 0x20) * fVar31 + (float)dVar25 * fVar27,
                               (float)dVar4 * fVar20 +
                               (float)dVar24 * fVar22 +
                               (float)uVar36 * fVar31 + (float)dVar3 * fVar27);
          param_6 = &lStack_98;
          param_5 = plVar8;
          func_0x00010a558044(plVar8,param_6);
          uVar15 = uVar15 + 1;
        } while (uVar15 != 0x11);
      }
    }
  }
  else if ((iVar6 == 4) &&
          (plVar8 = (long *)*param_5, plVar16 = (long *)param_5[1], param_5 = plVar16,
          plVar8 != plVar16)) {
    param_5 = plVar16 + -3;
    param_6 = (long *)*param_5;
    plVar8 = (long *)plVar16[-2];
    if (8 < (ulong)((long)plVar8 - (long)param_6)) {
      if (param_6 == plVar8) goto LAB_10aaf23ac;
      fVar20 = (float)*param_6 - (float)plVar8[-1];
      fVar22 = (float)((ulong)*param_6 >> 0x20) - (float)((ulong)plVar8[-1] >> 0x20);
      if (0.0001 < SQRT(fVar20 * fVar20 + fVar22 * fVar22)) {
        plVar8 = (long *)plVar16[-2];
        if (plVar8 < (long *)plVar16[-1]) {
          plVar18 = plVar8 + 1;
          *plVar8 = *param_6;
          plVar8 = param_5;
        }
        else {
          lVar17 = (long)plVar8 - *param_5;
          uVar13 = (lVar17 >> 3) + 1;
          if (uVar13 >> 0x3d != 0) {
            FUN_10a050828();
            auVar38._8_8_ = 0x11;
            auVar38._0_8_ = &UNK_10f64562b;
            return auVar38;
          }
          uVar9 = plVar16[-1] - *param_5;
          uVar10 = (long)uVar9 >> 2;
          if (uVar10 <= uVar13) {
            uVar10 = uVar13;
          }
          if (0x7ffffffffffffff7 < uVar9) {
            uVar10 = 0x1fffffffffffffff;
          }
          plVar7 = param_5;
          FUN_10a05083c();
          plVar8 = (long *)((long)plVar7 + lVar17);
          plVar18 = plVar8 + 1;
          *plVar8 = *param_6;
          param_6 = (long *)*param_5;
          lVar17 = (long)plVar8 - (plVar16[-2] - (long)param_6);
          _memcpy(lVar17);
          plVar8 = (long *)*param_5;
          *param_5 = lVar17;
          plVar16[-2] = (long)plVar18;
          plVar16[-1] = (long)(plVar7 + uVar10);
          if (plVar8 != (long *)0x0) {
            __ZdlPv();
          }
        }
        plVar16[-2] = (long)plVar18;
        auVar37._8_8_ = param_6;
        auVar37._0_8_ = plVar8;
        return auVar37;
      }
    }
  }
LAB_10aaf2388:
  auVar39._8_8_ = param_6;
  auVar39._0_8_ = param_5;
  return auVar39;
}



/* Entry: 10aaf23b4; end: 10aaf25bf;  */

undefined8 *
FUN_10aaf23b4(undefined8 param_1,double param_2,double param_3,double param_4,undefined8 *param_5,
             undefined8 param_6,undefined8 param_7,long param_8,undefined8 param_9)

{
  long *plVar1;
  float *pfVar2;
  int iVar3;
  undefined8 *puVar4;
  long lVar5;
  long *plVar6;
  float *pfVar7;
  undefined8 *puVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  double dStack_80;
  double dStack_78;
  undefined8 uStack_70;
  long lStack_60;
  long lStack_58;
  undefined2 uStack_4a;
  undefined1 *puStack_48;
  
  uStack_4a = (undefined2)param_9;
  puVar4 = param_5;
  FUN_10a32e56c();
  *puVar4 = &PTR_FUN_110c44f28;
  puVar8 = puVar4 + 0x11;
  *puVar8 = 0;
  puVar4[0x12] = 0;
  puVar4[0x13] = 0;
  lVar5 = param_8;
  _CTFontCreatePathForGlyph(param_8,param_9,0);
  lStack_58 = lVar5;
  if (lVar5 != 0) {
    iVar3 = 2;
    func_0x000107c31924(2,0x10,0,0);
    if (iVar3 == 0) {
      FUN_10aaf1e80(&dStack_80,lVar5);
      func_0x00010a050a44(puVar8);
      uVar9 = SUB84(dStack_80,0);
      uVar10 = (undefined4)((ulong)dStack_80 >> 0x20);
      param_5[0x12] = dStack_78;
      param_5[0x11] = dStack_80;
      param_5[0x13] = uStack_70;
      dStack_78 = 0.0;
      uStack_70 = 0;
      dStack_80 = 0.0;
      puStack_48 = (undefined1 *)&dStack_80;
      func_0x00010a050870(&puStack_48);
    }
    else {
      _CGPathCreateCopyByFlattening(0);
      lStack_60 = lVar5;
      if (lVar5 == 0) {
        FUN_10aa11020(&lStack_60);
        goto LAB_10aaf2550;
      }
      FUN_10aaf1e80(&dStack_80);
      func_0x00010a050a44(puVar8);
      uVar9 = SUB84(dStack_80,0);
      uVar10 = (undefined4)((ulong)dStack_80 >> 0x20);
      param_5[0x12] = dStack_78;
      param_5[0x11] = dStack_80;
      param_5[0x13] = uStack_70;
      dStack_78 = 0.0;
      uStack_70 = 0;
      dStack_80 = 0.0;
      puStack_48 = (undefined1 *)&dStack_80;
      func_0x00010a050870(&puStack_48);
      FUN_10aa11020(&lStack_60);
    }
    _CGPathGetBoundingBox(lStack_58);
    plVar6 = (long *)param_5[0x11];
    plVar1 = (long *)param_5[0x12];
    if (plVar6 != plVar1) {
      do {
        pfVar2 = (float *)plVar6[1];
        for (pfVar7 = (float *)*plVar6; pfVar7 != pfVar2; pfVar7 = pfVar7 + 2) {
          *pfVar7 = *pfVar7 - (float)(double)CONCAT44(uVar10,uVar9);
        }
        plVar6 = plVar6 + 3;
      } while (plVar6 != plVar1);
    }
    param_5[3] = 0;
    param_5[4] = (long)param_2;
    param_5[6] = (long)(double)(long)(param_2 + param_4);
    param_5[5] = (long)(double)(long)param_3;
    _CTFontGetAdvancesForGlyphs(param_8,1,&uStack_4a,&dStack_80,1);
    param_5[7] = CONCAT44((float)dStack_78,(float)dStack_80);
  }
LAB_10aaf2550:
  FUN_10aa11020(&lStack_58);
  return param_5;
}



/* Entry: 10aaf25c0; end: 10aaf26e3;  */

void FUN_10aaf25c0(long *param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined1 *puStack_48;
  
  lVar1 = *(long *)(param_2 + 0x88);
  lVar2 = *(long *)(param_2 + 0x90);
  if (lVar1 == lVar2) {
    *param_1 = 0;
    param_1[1] = 0;
  }
  else {
    puVar3 = (undefined8 *)0xc8;
    __Znwm();
    puVar3[1] = 0;
    puVar3[2] = 0;
    *puVar3 = &PTR_DAT_110c45e98;
    uStack_60 = 0;
    uStack_58 = 0;
    uStack_50 = 0;
    FUN_10a07b6ac(&uStack_60,lVar1,lVar2,(lVar2 - lVar1 >> 3) * -0x5555555555555555);
    FUN_10a5519c0(puVar3 + 3);
    puVar3[3] = &PTR_FUN_110c45ee8;
    puVar3[0x18] = uStack_50;
    lVar1 = *(long *)(param_2 + 0x18);
    lVar2 = *(long *)(param_2 + 0x20);
    puVar3[0x17] = uStack_58;
    puVar3[0x16] = uStack_60;
    uStack_60 = 0;
    uStack_58 = 0;
    *(float *)(puVar3 + 0xd) = (float)lVar1;
    *(float *)((long)puVar3 + 0x6c) = (float)lVar2;
    lVar1 = *(long *)(param_2 + 0x30);
    *(float *)(puVar3 + 0xe) = (float)*(long *)(param_2 + 0x28);
    *(float *)((long)puVar3 + 0x74) = (float)lVar1;
    uStack_50 = 0;
    puStack_48 = (undefined1 *)&uStack_60;
    func_0x00010a050870(&puStack_48);
    *param_1 = (long)(puVar3 + 3);
    param_1[1] = (long)puVar3;
  }
  return;
}



/* Entry: 10aaf26e4; end: 10aaf2717;  */

void FUN_10aaf26e4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd700. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___ZNSt3__1plIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_12basic_stringIT_T0_T1_EEPKS6_RKS9__110346968
  )(&UNK_10f68ee5b,param_1 + 0x68);
  return;
}



/* Entry: 10aaf2718; end: 10aaf27ff;  */

void FUN_10aaf2718(undefined8 param_1)

{
  undefined *puStack_90;
  undefined *puStack_88;
  undefined **ppuStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined4 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puStack_88 = (undefined *)0x0;
  ppuStack_80 = (undefined **)0xffffffff00000001;
  uStack_78 = CONCAT44(uStack_78._4_4_,0xffffffff);
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_50 = 0;
  uStack_48 = CONCAT44(uStack_48._4_4_,0xffffffff);
  FUN_10aaf2800(param_1,&puStack_88);
  FUN_10ab05650();
  ppuStack_80 = (undefined **)0x0;
  uStack_78 = 0;
  puStack_88 = &UNK_10f68ee72;
  uStack_68 = 0xffffffffffffffff;
  uStack_70 = 0x100000064;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_48 = 0;
  uStack_50 = 0;
  uStack_40 = 0;
  uStack_38 = 0xffffffff;
  uStack_30 = 0;
  uStack_28 = 0;
  func_0x00010a004eb4(param_1,&puStack_88);
  ppuStack_80 = &puStack_90;
  puStack_90 = &UNK_10f68ee8d;
  puStack_88 = &UNK_10f68ee7e;
  uStack_78 = 1;
  uStack_68 = 0xffffffffffffffff;
  uStack_70 = 0x100000064;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_48 = 0;
  uStack_50 = 0;
  uStack_40 = 0;
  uStack_38 = 0xffffffff;
  uStack_30 = 0;
  uStack_28 = 0;
  FUN_10aaf28d8(param_1,&puStack_88);
  func_0x00010a004064(param_1);
  return;
}



/* Entry: 10aaf2800; end: 10aaf28d7;  */

/* WARNING: Removing unreachable block (ram,0x00010aaf2898) */

undefined1  [16] FUN_10aaf2800(undefined8 param_1,long param_2)

{
  undefined1 **ppuVar1;
  undefined1 auVar2 [16];
  undefined1 *puStack_90;
  undefined8 uStack_88;
  undefined4 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined4 uStack_50;
  undefined1 auStack_48 [24];
  
  ppuVar1 = &puStack_90;
  func_0x000109887da8(auStack_48,&UNK_10f68f43b,0x11);
  uStack_88 = *(undefined8 *)(param_2 + 8);
  uStack_80 = *(undefined4 *)(param_2 + 0x10);
  uStack_70 = *(undefined8 *)(param_2 + 0x20);
  uStack_78 = *(undefined8 *)(param_2 + 0x18);
  uStack_60 = *(undefined8 *)(param_2 + 0x30);
  uStack_68 = *(undefined8 *)(param_2 + 0x28);
  uStack_58 = *(undefined8 *)(param_2 + 0x38);
  uStack_50 = *(undefined4 *)(param_2 + 0x40);
  puStack_90 = auStack_48;
  FUN_10ab05554(param_1,&puStack_90,100);
  auVar2._8_8_ = ppuVar1;
  auVar2._0_8_ = param_1;
  return auVar2;
}



/* Entry: 10aaf28d8; end: 10aaf293f;  */

ulong FUN_10aaf28d8(ulong param_1,undefined8 *param_2)

{
  code *pcVar1;
  ulong uVar2;
  
  uVar2 = param_1;
  FUN_10a0051e8(param_1,*(undefined4 *)(param_2 + 3),*(undefined4 *)((long)param_2 + 0x1c),
                *(undefined4 *)(param_2 + 10),*(undefined4 *)(param_2 + 4),
                *(undefined4 *)((long)param_2 + 0x24));
  if ((uVar2 & 1) == 0) {
    if (*(long *)(param_1 + 0x10) == *(long *)(param_1 + 0x18)) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10aaf2940);
      (*pcVar1)();
    }
    FUN_10a054dac(param_1,*param_2,FUN_10ab0570c,1,*(long *)(param_1 + 0x18) + -8);
  }
  return param_1;
}



/* Entry: 10aaf2940; end: 10aaf2a0b;  */

undefined8 * FUN_10aaf2940(undefined8 *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  
  puVar1 = param_1;
  FUN_10aa7093c();
  *puVar1 = &PTR_FUN_110c44f90;
  puVar1[2] = &PTR_DAT_110c45030;
  puVar1[7] = &PTR_DAT_110c45088;
  puVar1[0x1d] = 0;
  puVar1[0x1c] = 0;
  puVar1[0x1f] = 0;
  puVar1[0x1e] = 0;
  puVar1[0x20] = 0;
  *(undefined4 *)(puVar1 + 0x21) = 0x3f800000;
  puVar1[0x23] = 0;
  puVar1[0x22] = 0;
  puVar1[0x25] = 0;
  puVar1[0x24] = 0;
  *(undefined4 *)(puVar1 + 0x26) = 0x3f800000;
  puVar1[0x27] = 0;
  puVar1[0x28] = 0;
  puVar1 = (undefined8 *)0x30;
  __Znwm();
  *(undefined1 *)(puVar1 + 1) = 0;
  *puVar1 = &PTR_FUN_110bdbc08;
  puVar1[2] = 0;
  puVar1[3] = 0;
  param_1[0x1c] = puVar1;
  puVar1[4] = 0;
  puVar1[5] = param_2;
  return param_1;
}



/* Entry: 10aaf2a0c; end: 10aaf2a77;  */

undefined8 * FUN_10aaf2a0c(undefined8 *param_1)

{
  long *plVar1;
  
  *param_1 = &PTR_FUN_110c44f90;
  param_1[2] = &PTR_DAT_110c45030;
  param_1[7] = &PTR_DAT_110c45088;
  FUN_10a3b772c(param_1 + 0x27);
  func_0x00010ab05d6c(param_1 + 0x22);
  func_0x00010a3b77dc(param_1 + 0x1d);
  plVar1 = (long *)param_1[0x1c];
  param_1[0x1c] = 0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  *param_1 = &PTR_FUN_110c3ec18;
  param_1[2] = &PTR_DAT_110c3ecb8;
  param_1[7] = &PTR_DAT_110c3ed10;
  func_0x00010aa92258(param_1 + 0x1a);
  if (param_1[0x19] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  __ZNSt3__15mutexD1Ev(param_1 + 0x10);
  if (param_1[0xf] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  if (*(char *)((long)param_1 + 0x6f) < '\0') {
    __ZdlPv(param_1[0xb]);
  }
  if (param_1[6] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  param_1[2] = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + 3);
  return param_1;
}



/* Entry: 10aaf2a78; end: 10aaf2a8b;  */

undefined8 * FUN_10aaf2a78(undefined8 *param_1)

{
  long *plVar1;
  
  *param_1 = &PTR_FUN_110c44f90;
  param_1[2] = &PTR_DAT_110c45030;
  param_1[7] = &PTR_DAT_110c45088;
  FUN_10a3b772c(param_1 + 0x27);
  func_0x00010ab05d6c(param_1 + 0x22);
  func_0x00010a3b77dc(param_1 + 0x1d);
  plVar1 = (long *)param_1[0x1c];
  param_1[0x1c] = 0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  *param_1 = &PTR_FUN_110c3ec18;
  param_1[2] = &PTR_DAT_110c3ecb8;
  param_1[7] = &PTR_DAT_110c3ed10;
  func_0x00010aa92258(param_1 + 0x1a);
  if (param_1[0x19] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  __ZNSt3__15mutexD1Ev(param_1 + 0x10);
  if (param_1[0xf] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  if (*(char *)((long)param_1 + 0x6f) < '\0') {
    __ZdlPv(param_1[0xb]);
  }
  if (param_1[6] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  param_1[2] = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + 3);
  return param_1;
}



/* Entry: 10aaf2a8c; end: 10aaf2acf;  */

void FUN_10aaf2a8c(void)

{
  FUN_10aaf2a0c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10aaf2ad0; end: 10aaf2bff;  */

bool FUN_10aaf2ad0(ulong param_1,long *param_2,long param_3)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  bool bVar4;
  char cVar5;
  bool bVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  
  if (((param_3 == 0x11) &&
      ((*param_2 == 0x75432e7465737341 && param_2[1] == 0x657373416d6f7473) &&
       (char)param_2[2] == 't')) ||
     (uVar7 = param_1, func_0x00010aa7078c(param_1,param_2,param_3), (uVar7 & 1) != 0)) {
    return true;
  }
  lVar9 = *(long *)(param_1 + 0x138);
  if (lVar9 == 0) {
    return false;
  }
  lVar2 = *(long *)(lVar9 + 0xf0);
  plVar3 = *(long **)(lVar9 + 0xf8);
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
  if (lVar2 != 0) {
    lVar9 = (long)*(char *)(lVar2 + 0xaf);
    if (lVar9 < 0) {
      lVar8 = *(long *)(lVar2 + 0x98);
      lVar9 = *(long *)(lVar2 + 0xa0);
    }
    else {
      lVar8 = lVar2 + 0x98;
    }
    if (param_3 == lVar9) {
      _memcmp(param_2,lVar8,param_3);
      bVar6 = (int)param_2 == 0;
      goto joined_r0x00010aaf2bb8;
    }
  }
  bVar6 = false;
joined_r0x00010aaf2bb8:
  if (plVar3 != (long *)0x0) {
    plVar1 = plVar3 + 1;
    do {
      lVar9 = *plVar1;
      cVar5 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = lVar9 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (lVar9 == 0) {
      (**(code **)(*plVar3 + 0x10))(plVar3);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar3);
    }
  }
  return bVar6;
}



/* Entry: 10aaf2c00; end: 10aaf2c07;  */

bool FUN_10aaf2c00(long param_1,long *param_2,long param_3)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  bool bVar4;
  char cVar5;
  bool bVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  
  uVar7 = param_1 - 0x10;
  if (((param_3 == 0x11) &&
      ((*param_2 == 0x75432e7465737341 && param_2[1] == 0x657373416d6f7473) &&
       (char)param_2[2] == 't')) || (func_0x00010aa7078c(uVar7,param_2,param_3), (uVar7 & 1) != 0))
  {
    return true;
  }
  lVar9 = *(long *)(param_1 + 0x128);
  if (lVar9 == 0) {
    return false;
  }
  lVar2 = *(long *)(lVar9 + 0xf0);
  plVar3 = *(long **)(lVar9 + 0xf8);
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
  if (lVar2 != 0) {
    lVar9 = (long)*(char *)(lVar2 + 0xaf);
    if (lVar9 < 0) {
      lVar8 = *(long *)(lVar2 + 0x98);
      lVar9 = *(long *)(lVar2 + 0xa0);
    }
    else {
      lVar8 = lVar2 + 0x98;
    }
    if (param_3 == lVar9) {
      _memcmp(param_2,lVar8,param_3);
      bVar6 = (int)param_2 == 0;
      goto joined_r0x00010aaf2bb8;
    }
  }
  bVar6 = false;
joined_r0x00010aaf2bb8:
  if (plVar3 != (long *)0x0) {
    plVar1 = plVar3 + 1;
    do {
      lVar9 = *plVar1;
      cVar5 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = lVar9 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (lVar9 == 0) {
      (**(code **)(*plVar3 + 0x10))(plVar3);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar3);
    }
  }
  return bVar6;
}



/* Entry: 10aaf2c08; end: 10aaf3107;  */

long * FUN_10aaf2c08(long param_1,long *param_2)

{
  long *plVar1;
  long *plVar2;
  int iVar3;
  long lStack_190;
  long lStack_188;
  long lStack_180;
  long lStack_178;
  long lStack_170;
  long lStack_168;
  long lStack_160;
  long lStack_158;
  undefined7 uStack_150;
  char cStack_149;
  long lStack_148;
  long lStack_140;
  undefined7 uStack_138;
  char cStack_131;
  code *pcStack_130;
  undefined **ppuStack_128;
  long *plStack_120;
  code *pcStack_f0;
  undefined **ppuStack_e8;
  long lStack_e0;
  long lStack_d8;
  long lStack_d0;
  long lStack_c8;
  long lStack_b0;
  undefined **ppuStack_a8;
  long lStack_a0;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x00010aa70acc();
  (**(code **)(*param_2 + 0x1f8))(param_2,&PTR_DAT_110c45098,*(undefined8 *)(param_1 + 0xe0));
  plVar1 = &lStack_b0;
  lStack_b0 = 0x10ab05e1c;
  ppuStack_a8 = &PTR_FUN_110c45f50;
  lStack_a0 = param_1;
  FUN_10a3982fc(param_2,&PTR_DAT_110c450b8,&lStack_b0,0);
  (*(code *)*ppuStack_a8)(&ppuStack_a8);
  plVar2 = param_2;
  (**(code **)(*param_2 + 0x200))(param_2,&PTR_DAT_110c450d8);
  if ((int)plVar2 != 0) {
    (**(code **)(*param_2 + 0x210))(param_2,&PTR_DAT_110c450d8);
    plVar1 = param_2;
    (**(code **)(*param_2 + 0x208))();
    if ((int)plVar1 != 0) {
      iVar3 = 0;
      do {
        (**(code **)(*param_2 + 0x218))(param_2,iVar3);
        (**(code **)(*param_2 + 0xa0))(&lStack_148,param_2,&PTR_DAT_110c45c20);
        if (cStack_131 < '\0') {
          func_0x000107c3192c(&lStack_190,lStack_148,lStack_140);
        }
        else {
          lStack_188 = lStack_140;
          lStack_190 = lStack_148;
          lStack_180 = CONCAT17(cStack_131,uStack_138);
        }
        pcStack_f0 = FUN_10ab06300;
        ppuStack_e8 = &PTR_FUN_110c45f68;
        lStack_d0 = lStack_188;
        lStack_d8 = lStack_190;
        lStack_c8 = lStack_180;
        lStack_190 = 0;
        lStack_188 = 0;
        lStack_180 = 0;
        lStack_e0 = param_1;
        FUN_10a1f46a0(param_2,&PTR_DAT_110c450f8,&pcStack_f0,0);
        (*(code *)*ppuStack_e8)(&ppuStack_e8);
        if (lStack_180 < 0) {
          __ZdlPv(lStack_190);
        }
        (**(code **)(*param_2 + 0x220))(param_2);
        if (cStack_131 < '\0') {
          __ZdlPv(lStack_148);
        }
        iVar3 = iVar3 + 1;
      } while ((int)plVar1 != iVar3);
    }
    (**(code **)(*param_2 + 0x220))(param_2);
  }
  plVar2 = param_2;
  (**(code **)(*param_2 + 0x200))(param_2,&PTR_DAT_110c450f8);
  if ((int)plVar2 != 0) {
    (**(code **)(*param_2 + 0x210))(param_2,&PTR_DAT_110c450f8);
    plVar1 = param_2;
    (**(code **)(*param_2 + 0x208))();
    if ((int)plVar1 != 0) {
      iVar3 = 0;
      do {
        (**(code **)(*param_2 + 0x218))(param_2,iVar3);
        (**(code **)(*param_2 + 0xa0))(&lStack_148,param_2,&PTR_DAT_110c45c20);
        (**(code **)(*param_2 + 0xa8))(&lStack_160,param_2,&PTR_DAT_110c45118,&UNK_10f68e3e8,0);
        if (cStack_131 < '\0') {
          func_0x000107c3192c(&lStack_190,lStack_148,lStack_140);
        }
        else {
          lStack_188 = lStack_140;
          lStack_190 = lStack_148;
          lStack_180 = CONCAT17(cStack_131,uStack_138);
        }
        if (cStack_149 < '\0') {
          func_0x000107c3192c(&lStack_178,lStack_160,lStack_158);
        }
        else {
          lStack_170 = lStack_158;
          lStack_178 = lStack_160;
          lStack_168 = CONCAT17(cStack_149,uStack_150);
        }
        pcStack_130 = FUN_10ab06404;
        ppuStack_128 = &PTR_FUN_110c45f80;
        plVar2 = (long *)0x38;
        __Znwm();
        *plVar2 = param_1;
        plVar2[2] = lStack_188;
        plVar2[1] = lStack_190;
        plVar2[3] = lStack_180;
        lStack_190 = 0;
        lStack_188 = 0;
        plVar2[5] = lStack_170;
        plVar2[4] = lStack_178;
        plVar2[6] = lStack_168;
        lStack_180 = 0;
        lStack_178 = 0;
        lStack_170 = 0;
        lStack_168 = 0;
        plStack_120 = plVar2;
        FUN_10a1f46a0(param_2,&PTR_DAT_110c450f8,&pcStack_130,0);
        (*(code *)*ppuStack_128)(&ppuStack_128);
        if (lStack_168 < 0) {
          __ZdlPv(lStack_178);
        }
        if (lStack_180 < 0) {
          __ZdlPv(lStack_190);
        }
        (**(code **)(*param_2 + 0x220))(param_2);
        if (cStack_149 < '\0') {
          __ZdlPv(lStack_160);
        }
        if (cStack_131 < '\0') {
          __ZdlPv(lStack_148);
        }
        iVar3 = iVar3 + 1;
      } while ((int)plVar1 != iVar3);
    }
    (**(code **)(*param_2 + 0x220))();
    plVar2 = param_2;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return plVar2;
  }
  ___stack_chk_fail();
  (*(code *)*ppuStack_a8)(plVar1 + 1);
  __Unwind_Resume();
  if (*(char *)((long)plVar2 + 0x37) < '\0') {
    __ZdlPv(plVar2[4]);
  }
  if (*(char *)((long)plVar2 + 0x1f) < '\0') {
    __ZdlPv(plVar2[1]);
  }
  return plVar2;
}



/* Entry: 10aaf3108; end: 10aaf3147;  */

long FUN_10aaf3108(long param_1)

{
  if (*(char *)(param_1 + 0x37) < '\0') {
    __ZdlPv(*(undefined8 *)(param_1 + 0x20));
  }
  if (*(char *)(param_1 + 0x1f) < '\0') {
    __ZdlPv(*(undefined8 *)(param_1 + 8));
  }
  return param_1;
}



/* Entry: 10aaf3148; end: 10aaf32fb;  */

void FUN_10aaf3148(long param_1,long *param_2)

{
  long *plVar1;
  
  func_0x00010aa70b70();
  (**(code **)(*param_2 + 0x118))(param_2,&PTR_DAT_110c45098,*(undefined8 *)(param_1 + 0xe0));
  FUN_10a398908(param_2,&PTR_DAT_110c450b8,param_1 + 0x138,&UNK_10f68f46c,0x11);
  (**(code **)(*param_2 + 0x18))(param_2,&PTR_DAT_110c450d8);
  for (plVar1 = *(long **)(param_1 + 0x120); plVar1 != (long *)0x0; plVar1 = (long *)*plVar1) {
    (**(code **)(*param_2 + 0x10))(param_2);
    FUN_10a00d760(param_2,&PTR_DAT_110c45c20,plVar1 + 2);
    FUN_10a3989b0(param_2,&PTR_DAT_110c450f8,plVar1 + 5,&UNK_10f68e3e8,0);
    (**(code **)(*param_2 + 0x20))(param_2);
  }
  (**(code **)(*param_2 + 0x20))(param_2);
  (**(code **)(*param_2 + 0x18))(param_2,&PTR_DAT_110c450f8);
  for (plVar1 = *(long **)(param_1 + 0xf8); plVar1 != (long *)0x0; plVar1 = (long *)*plVar1) {
    (**(code **)(*param_2 + 0x10))(param_2);
    FUN_10a00d760(param_2,&PTR_DAT_110c45c20,plVar1 + 2);
    FUN_10a00d760(param_2,&PTR_DAT_110c45118,plVar1 + 5);
    FUN_10a398a58(param_2,&PTR_DAT_110c450f8,plVar1 + 8,&UNK_10f68e3e8,0);
    (**(code **)(*param_2 + 0x20))(param_2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010aaf32f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_2 + 0x20))(param_2);
  return;
}



/* Entry: 10aaf32fc; end: 10aaf39f3;  */

void FUN_10aaf32fc(long *param_1)

{
  long lVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  int iVar5;
  code *pcVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  long *plVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  long *plVar16;
  long lStack_d0;
  long *plStack_c8;
  long lStack_c0;
  long *plStack_b8;
  long *plStack_b0;
  long *plStack_a8;
  long *plStack_a0;
  long *plStack_98;
  long *plStack_90;
  long *plStack_88;
  undefined8 *puStack_80;
  long *plStack_78;
  int iStack_70;
  undefined4 uStack_6c;
  undefined1 uStack_68;
  undefined7 uStack_67;
  
  FUN_10aa891bc(&iStack_70);
  lVar13 = CONCAT44(uStack_6c,iStack_70);
  plVar16 = (long *)CONCAT71(uStack_67,uStack_68);
  if (plVar16 != (long *)0x0) {
    plVar7 = plVar16 + 1;
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
      (**(code **)(*plVar16 + 0x10))(plVar16);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar16);
    }
  }
  if (lVar13 == 0) {
    lVar11 = *(long *)(param_1[10] + 0x870);
    lVar13 = *(long *)(lVar11 + 0x68);
    __ZNSt3__115recursive_mutex4lockEv(lVar11 + 0x70);
    lVar13 = *(long *)(lVar13 + 0xb8);
    if ((*(byte *)(lVar13 + 0x1e0) & 1) == 0) goto LAB_10aaf3944;
    uVar14 = *(undefined8 *)(lVar13 + 0x50);
    (**(code **)(*param_1 + 0x50))(&iStack_70,param_1);
    uVar15 = CONCAT44(uStack_6c,iStack_70);
    plVar16 = (long *)CONCAT71(uStack_67,uStack_68);
    if (plVar16 != (long *)0x0) {
      plVar7 = plVar16 + 1;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar7,0x10);
        if (bVar3) {
          *plVar7 = *plVar7 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      plVar7 = (long *)CONCAT71(uStack_67,uStack_68);
      if (plVar7 != (long *)0x0) {
        plVar8 = plVar7 + 1;
        do {
          lVar13 = *plVar8;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar8,0x10);
          if (bVar3) {
            *plVar8 = lVar13 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar13 == 0) {
          (**(code **)(*plVar7 + 0x10))(plVar7);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
        }
      }
    }
    FUN_10ab05ce4(&iStack_70,uVar14,uVar15,plVar16);
    iVar5 = iStack_70;
    if (iStack_70 == 3) {
      puStack_80 = (undefined8 *)CONCAT71(uStack_67,uStack_68);
    }
    else if (iStack_70 == 2) {
      puStack_80 = (undefined8 *)CONCAT71(puStack_80._1_7_,uStack_68);
    }
    else if (3 < iStack_70) {
      puStack_80 = (undefined8 *)CONCAT71(uStack_67,uStack_68);
    }
    if (plVar16 != (long *)0x0) {
      plVar7 = plVar16 + 1;
      do {
        lVar13 = *plVar7;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar7,0x10);
        if (bVar3) {
          *plVar7 = lVar13 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar13 == 0) {
        (**(code **)(*plVar16 + 0x10))(plVar16);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar16);
      }
    }
    if ((3 < iVar5) && (puStack_80 != (undefined8 *)0x0)) {
      (**(code **)*puStack_80)();
    }
    __ZNSt3__115recursive_mutex6unlockEv(lVar11 + 0x70);
  }
  FUN_10aa891bc(&puStack_80,param_1);
  puVar4 = puStack_80;
  if (puStack_80 != (undefined8 *)0x0) {
    lVar13 = *(long *)(param_1[10] + 0x870);
    uVar15 = *(undefined8 *)(lVar13 + 0x68);
    __ZNSt3__115recursive_mutex4lockEv(lVar13 + 0x70);
    for (plVar16 = (long *)param_1[0x1f]; plVar16 != (long *)0x0; plVar16 = (long *)*plVar16) {
      plVar7 = (long *)plVar16[9];
      if ((plVar7 != (long *)0x0) &&
         (__ZNSt3__119__shared_weak_count4lockEv(), plStack_88 = plVar7, plVar7 != (long *)0x0)) {
        plVar8 = (long *)plVar16[8];
        plStack_90 = plVar8;
        if (plVar8 != (long *)0x0) {
          ___dynamic_cast(plVar8,&PTR_DAT_110bf32c0,&PTR_DAT_110bde410,0);
          if (plVar8 == (long *)0x0) {
            plStack_a0 = (long *)0x0;
            plStack_98 = (long *)0x0;
            plStack_b0 = (long *)0x0;
            plStack_a8 = (long *)0x0;
            FUN_10a39c058(puVar4,plVar16 + 2,plVar16 + 8);
          }
          else {
            plVar10 = plVar7 + 1;
            do {
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(plVar10,0x10);
              if (bVar3) {
                *plVar10 = *plVar10 + 1;
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
            plVar9 = plVar8;
            plStack_a0 = plVar8;
            plStack_98 = plVar7;
            ___dynamic_cast(plVar8,&PTR_DAT_110bde410,&PTR_DAT_110bde3f8,0);
            if (plVar9 == (long *)0x0) {
              plStack_b0 = (long *)0x0;
              plStack_a8 = (long *)0x0;
              (**(code **)(*plVar8 + 0x60))(plVar8,plVar16 + 2,puVar4,uVar15);
            }
            else {
              do {
                cVar2 = '\x01';
                bVar3 = (bool)ExclusiveMonitorPass(plVar10,0x10);
                if (bVar3) {
                  *plVar10 = *plVar10 + 1;
                  cVar2 = ExclusiveMonitorsStatus();
                }
              } while (cVar2 != '\0');
              lStack_c0 = 0;
              plStack_b8 = (long *)0x0;
              plVar10 = (long *)plVar9[0xb];
              plStack_b0 = plVar9;
              plStack_a8 = plVar7;
              if ((((plVar10 == (long *)0x0) ||
                   (__ZNSt3__119__shared_weak_count4lockEv(), plStack_b8 = plVar10,
                   plVar10 == (long *)0x0)) ||
                  (lVar11 = plVar9[10], lStack_c0 = lVar11, lVar11 == 0)) ||
                 (___dynamic_cast(lVar11,&PTR_DAT_110bf32c0,&PTR_DAT_110c42c58,0), lVar11 == 0)) {
                lStack_d0 = 0;
                plStack_c8 = (long *)0x0;
                (**(code **)(*plVar8 + 0x60))(plVar8,plVar16 + 2,puVar4,uVar15);
              }
              else {
                plVar7 = plVar10 + 1;
                do {
                  cVar2 = '\x01';
                  bVar3 = (bool)ExclusiveMonitorPass(plVar7,0x10);
                  if (bVar3) {
                    *plVar7 = *plVar7 + 1;
                    cVar2 = ExclusiveMonitorsStatus();
                  }
                } while (cVar2 != '\0');
                lStack_d0 = lVar11;
                plStack_c8 = plVar10;
                FUN_10a052f68(&iStack_70,*puVar4,&lStack_d0);
                FUN_10a3b6bb0(puVar4,plVar16 + 2,&iStack_70);
                if ((3 < iStack_70) &&
                   ((undefined8 *)CONCAT71(uStack_67,uStack_68) != (undefined8 *)0x0)) {
                  (*(code *)**(undefined8 **)CONCAT71(uStack_67,uStack_68))();
                }
              }
              plVar7 = plStack_c8;
              if (plStack_c8 != (long *)0x0) {
                plVar8 = plStack_c8 + 1;
                do {
                  lVar11 = *plVar8;
                  cVar2 = '\x01';
                  bVar3 = (bool)ExclusiveMonitorPass(plVar8,0x10);
                  if (bVar3) {
                    *plVar8 = lVar11 + -1;
                    cVar2 = ExclusiveMonitorsStatus();
                  }
                } while (cVar2 != '\0');
                if (lVar11 == 0) {
                  (**(code **)(*plStack_c8 + 0x10))(plStack_c8);
                  __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
                }
              }
              plVar7 = plStack_b8;
              if (plStack_b8 != (long *)0x0) {
                plVar8 = plStack_b8 + 1;
                do {
                  lVar11 = *plVar8;
                  cVar2 = '\x01';
                  bVar3 = (bool)ExclusiveMonitorPass(plVar8,0x10);
                  if (bVar3) {
                    *plVar8 = lVar11 + -1;
                    cVar2 = ExclusiveMonitorsStatus();
                  }
                } while (cVar2 != '\0');
                if (lVar11 == 0) {
                  (**(code **)(*plStack_b8 + 0x10))(plStack_b8);
                  __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
                }
              }
              plVar7 = plStack_a8;
              if (plStack_a8 != (long *)0x0) {
                plVar8 = plStack_a8 + 1;
                do {
                  lVar11 = *plVar8;
                  cVar2 = '\x01';
                  bVar3 = (bool)ExclusiveMonitorPass(plVar8,0x10);
                  if (bVar3) {
                    *plVar8 = lVar11 + -1;
                    cVar2 = ExclusiveMonitorsStatus();
                  }
                } while (cVar2 != '\0');
                if (lVar11 == 0) {
                  (**(code **)(*plStack_a8 + 0x10))(plStack_a8);
                  __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
                }
              }
            }
          }
          plVar7 = plStack_98;
          if (plStack_98 != (long *)0x0) {
            plVar8 = plStack_98 + 1;
            do {
              lVar11 = *plVar8;
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(plVar8,0x10);
              if (bVar3) {
                *plVar8 = lVar11 + -1;
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
            if (lVar11 == 0) {
              (**(code **)(*plStack_98 + 0x10))(plStack_98);
              __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
            }
          }
          if (plStack_88 == (long *)0x0) goto LAB_10aaf377c;
        }
        plVar8 = plStack_88;
        plVar7 = plStack_88 + 1;
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
          (**(code **)(*plStack_88 + 0x10))(plStack_88);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar8);
        }
      }
LAB_10aaf377c:
    }
    __ZNSt3__115recursive_mutex6unlockEv(lVar13 + 0x70);
  }
  if (plStack_78 != (long *)0x0) {
    plVar16 = plStack_78 + 1;
    do {
      lVar13 = *plVar16;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar16,0x10);
      if (bVar3) {
        *plVar16 = lVar13 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar13 == 0) {
      (**(code **)(*plStack_78 + 0x10))(plStack_78);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_78);
    }
  }
  if (param_1[0x27] != 0) {
    FUN_10aa891bc(&iStack_70,param_1);
    if (CONCAT44(uStack_6c,iStack_70) != 0) {
      uVar15 = *(undefined8 *)(param_1[10] + 0x870);
      plVar16 = (long *)0x1;
      FUN_10a2163b8(*(undefined8 *)(param_1[0x27] + 0xe0));
      if ((plVar16 != (long *)0x0) && (lVar13 = *plVar16, lVar13 != 0)) {
        lVar12 = param_1[0x27];
        lVar11 = (long)*(char *)(lVar12 + 0x13f);
        if (lVar11 < 0) {
          lVar11 = *(long *)(lVar12 + 0x130);
        }
        lVar1 = lVar13 + 0x40;
        if (lVar11 != 0) {
          lVar1 = lVar12 + 0x128;
        }
        if (*(int *)(lVar13 + 0x20) == 1) {
          if ((*(byte *)(lVar13 + 0x58) >> 2 & 1) != 0) {
LAB_10aaf3944:
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(1,0x10aaf3948);
            (*pcVar6)();
          }
          if ((*(byte *)(lVar13 + 0x58) >> 1 & 1) == 0) {
            FUN_10a462eec(uVar15,lVar13 + 0x28,lVar1,CONCAT44(uStack_6c,iStack_70));
          }
          else {
            cVar2 = *(char *)(lVar13 + 0x3f);
            lVar11 = *(long *)(lVar13 + 0x28);
            if (-1 < (long)cVar2) {
              lVar11 = lVar13 + 0x28;
            }
            lVar13 = *(long *)(lVar13 + 0x30);
            if (-1 < cVar2) {
              lVar13 = (long)cVar2;
            }
            FUN_10a46304c(uVar15,lVar11,lVar13,lVar1,CONCAT44(uStack_6c,iStack_70));
          }
        }
      }
    }
    plVar16 = (long *)CONCAT71(uStack_67,uStack_68);
    if (plVar16 != (long *)0x0) {
      plVar7 = plVar16 + 1;
      do {
        lVar13 = *plVar7;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar7,0x10);
        if (bVar3) {
          *plVar7 = lVar13 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar13 == 0) {
        (**(code **)(*plVar16 + 0x10))(plVar16);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar16);
      }
    }
  }
  return;
}



/* Entry: 10aaf39f4; end: 10aaf3ae7;  */

undefined8 * FUN_10aaf39f4(undefined8 *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long *plVar3;
  
  *(undefined1 *)(param_1 + 1) = 0;
  *param_1 = &PTR_FUN_110c45148;
  param_1[3] = 0;
  param_1[2] = 0;
  param_1[5] = 0;
  param_1[4] = 0;
  *(undefined4 *)(param_1 + 6) = 0x3f800000;
  param_1[8] = 0;
  param_1[7] = 0;
  param_1[10] = 0;
  param_1[9] = 0;
  *(undefined4 *)(param_1 + 0xb) = 0x3f800000;
  param_1[0xc] = 0;
  puVar1 = param_1;
  uVar2 = param_2;
  func_0x00010a0fda30();
  param_1[0xd] = puVar1;
  param_1[0xe] = uVar2;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = param_2;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x13] = 0;
  *(undefined1 *)(param_1 + 0x16) = 0;
  puVar1 = (undefined8 *)0x30;
  __Znwm();
  *(undefined1 *)(puVar1 + 1) = 0;
  *puVar1 = &PTR_FUN_110bdbc08;
  puVar1[3] = 0;
  puVar1[2] = 0;
  puVar1[5] = 0;
  puVar1[4] = 0;
  plVar3 = (long *)param_1[0xc];
  param_1[0xc] = puVar1;
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 8))(plVar3);
  }
  return param_1;
}



/* Entry: 10aaf3ae8; end: 10aaf3b5b;  */

undefined8 * FUN_10aaf3ae8(undefined8 *param_1)

{
  long *plVar1;
  
  *param_1 = &PTR_FUN_110c45148;
  if (*(char *)((long)param_1 + 0xaf) < '\0') {
    __ZdlPv(param_1[0x13]);
  }
  if (param_1[0xf] != 0) {
    param_1[0x10] = param_1[0xf];
    __ZdlPv();
  }
  plVar1 = (long *)param_1[0xc];
  param_1[0xc] = 0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  func_0x00010ab05d6c(param_1 + 7);
  FUN_10ab06960(param_1 + 2);
  return param_1;
}



/* Entry: 10aaf3b5c; end: 10aaf3b5f;  */

undefined8 * FUN_10aaf3b5c(undefined8 *param_1)

{
  long *plVar1;
  
  *param_1 = &PTR_FUN_110c45148;
  if (*(char *)((long)param_1 + 0xaf) < '\0') {
    __ZdlPv(param_1[0x13]);
  }
  if (param_1[0xf] != 0) {
    param_1[0x10] = param_1[0xf];
    __ZdlPv();
  }
  plVar1 = (long *)param_1[0xc];
  param_1[0xc] = 0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  func_0x00010ab05d6c(param_1 + 7);
  FUN_10ab06960(param_1 + 2);
  return param_1;
}



/* Entry: 10aaf3b60; end: 10aaf3b73;  */

void FUN_10aaf3b60(void)

{
  FUN_10aaf3ae8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10aaf3b74; end: 10aaf425f;  */

long * FUN_10aaf3b74(undefined8 *param_1,long *param_2)

{
  undefined8 *puVar1;
  long *plVar2;
  undefined8 **ppuVar3;
  undefined8 *puVar4;
  long *plVar5;
  undefined8 *puVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  undefined8 *puVar10;
  int iVar11;
  undefined8 *puStack_160;
  undefined8 *puStack_158;
  ulong uStack_150;
  long lStack_148;
  undefined8 **ppuStack_140;
  undefined8 uStack_138;
  long lStack_130;
  undefined1 uStack_128;
  undefined8 **ppuStack_120;
  undefined8 uStack_118;
  undefined7 uStack_110;
  char cStack_109;
  undefined8 *puStack_108;
  ulong uStack_100;
  long lStack_f8;
  code *pcStack_f0;
  undefined **ppuStack_e8;
  undefined8 *puStack_e0;
  undefined8 *puStack_d8;
  ulong uStack_d0;
  long lStack_c8;
  undefined1 uStack_c0;
  code *pcStack_b0;
  undefined **ppuStack_a8;
  undefined8 *puStack_a0;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  *(undefined8 *)(param_1[0xc] + 0x28) = param_1[0x12];
  plVar2 = param_2;
  (**(code **)(*param_2 + 0x200))(param_2,&PTR_DAT_110c45180);
  if ((int)plVar2 != 0) {
    (**(code **)(*param_2 + 0xa0))(&puStack_160,param_2,&PTR_DAT_110c45180);
    puVar6 = puStack_158;
    ppuVar3 = (undefined8 **)puStack_160;
    if (-1 < (long)uStack_150) {
      puVar6 = (undefined8 *)(uStack_150 >> 0x38);
      ppuVar3 = &puStack_160;
    }
    func_0x00010a0fe26c();
    param_1[0xd] = ppuVar3;
    param_1[0xe] = puVar6;
    if ((long)uStack_150 < 0) {
      __ZdlPv(puStack_160);
    }
  }
  puStack_108 = (undefined8 *)0x0;
  uStack_100 = 0;
  lStack_f8 = 0;
  (**(code **)(*param_2 + 0x68))(&puStack_160,param_2,&PTR_DAT_110c451a0,&puStack_108);
  ppuStack_120 = &puStack_108;
  FUN_10a0426d8(&ppuStack_120);
  puVar10 = param_1 + 0xf;
  param_1[0x10] = *puVar10;
  FUN_10a01e6ec(puVar10,((long)puStack_158 - (long)puStack_160 >> 3) * -0x5555555555555555);
  puVar1 = puStack_158;
  for (puVar6 = puStack_160; puVar6 != puVar1; puVar6 = puVar6 + 3) {
    uVar7 = (ulong)*(char *)((long)puVar6 + 0x17);
    puVar4 = puVar6;
    if ((long)uVar7 < 0) {
      uVar7 = puVar6[1];
      puVar4 = (undefined8 *)*puVar6;
    }
    func_0x00010a0fe26c();
    puStack_108 = puVar4;
    uStack_100 = uVar7;
    func_0x00010a01e778(puVar10,&puStack_108);
  }
  puStack_108 = &puStack_160;
  FUN_10a0426d8(&puStack_108);
  plVar2 = param_2;
  (**(code **)(*param_2 + 0x58))(param_2,&PTR_DAT_110c451c0,0);
  *(char *)(param_1 + 0x16) = (char)plVar2;
  (**(code **)(*param_2 + 0x1f8))(param_2,&PTR_DAT_110c451e0,param_1[0xc]);
  plVar2 = param_2;
  (**(code **)(*param_2 + 0x200))(param_2,&PTR_DAT_110c45200);
  if (((ulong)plVar2 & 1) != 0) {
    (**(code **)(*param_2 + 0x210))(param_2,&PTR_DAT_110c45200);
    plVar2 = param_2;
    (**(code **)(*param_2 + 0x208))();
    if (param_1[5] != 0) {
      func_0x00010ab06998(param_1 + 2,param_1[4]);
      param_1[4] = 0;
      lVar8 = param_1[3];
      if (lVar8 != 0) {
        lVar9 = 0;
        do {
          *(undefined8 *)(param_1[2] + lVar9 * 8) = 0;
          lVar9 = lVar9 + 1;
        } while (lVar8 != lVar9);
      }
      param_1[5] = 0;
    }
    if ((int)plVar2 != 0) {
      iVar11 = 0;
      do {
        (**(code **)(*param_2 + 0x218))(param_2,iVar11);
        (**(code **)(*param_2 + 0xa0))(&puStack_108,param_2,&PTR_DAT_110c45c20);
        (**(code **)(*param_2 + 0xa8))(&ppuStack_120,param_2,&PTR_DAT_110c45220,&UNK_10f68e3e8,0);
        plVar5 = param_2;
        (**(code **)(*param_2 + 0x58))(param_2,&PTR_DAT_110c45240,0);
        if (lStack_f8 < 0) {
          puStack_160 = param_1;
          func_0x000107c3192c(&puStack_158,puStack_108,uStack_100);
        }
        else {
          uStack_150 = uStack_100;
          puStack_158 = puStack_108;
          lStack_148 = lStack_f8;
          puStack_160 = param_1;
        }
        if (cStack_109 < '\0') {
          func_0x000107c3192c(&ppuStack_140,ppuStack_120,uStack_118);
        }
        else {
          uStack_138 = uStack_118;
          ppuStack_140 = ppuStack_120;
          lStack_130 = CONCAT17(cStack_109,uStack_110);
        }
        pcStack_b0 = FUN_10ab06ecc;
        ppuStack_a8 = &PTR_FUN_110c45fe8;
        puVar6 = (undefined8 *)0x40;
        uStack_128 = (char)plVar5;
        __Znwm();
        *puVar6 = puStack_160;
        puVar6[2] = uStack_150;
        puVar6[1] = puStack_158;
        puVar6[3] = lStack_148;
        puStack_158 = (undefined8 *)0x0;
        uStack_150 = 0;
        puVar6[5] = uStack_138;
        puVar6[4] = ppuStack_140;
        puVar6[6] = lStack_130;
        lStack_148 = 0;
        ppuStack_140 = (undefined8 **)0x0;
        uStack_138 = 0;
        lStack_130 = 0;
        *(char *)(puVar6 + 7) = (char)plVar5;
        puStack_a0 = puVar6;
        FUN_10a1f46a0(param_2,&PTR_DAT_110c45260,&pcStack_b0,0);
        (*(code *)*ppuStack_a8)(&ppuStack_a8);
        if (lStack_130 < 0) {
          __ZdlPv(ppuStack_140);
        }
        if (lStack_148 < 0) {
          __ZdlPv(puStack_158);
        }
        (**(code **)(*param_2 + 0x220))(param_2);
        if (cStack_109 < '\0') {
          __ZdlPv(ppuStack_120);
        }
        if (lStack_f8 < 0) {
          __ZdlPv(puStack_108);
        }
        iVar11 = iVar11 + 1;
      } while ((int)plVar2 != iVar11);
    }
    (**(code **)(*param_2 + 0x220))(param_2);
  }
  plVar2 = param_2;
  (**(code **)(*param_2 + 0x200))(param_2,&PTR_DAT_110c45280);
  if ((int)plVar2 != 0) {
    (**(code **)(*param_2 + 0x210))(param_2,&PTR_DAT_110c45280);
    plVar2 = param_2;
    (**(code **)(*param_2 + 0x208))();
    if (param_1[10] != 0) {
      func_0x00010ab05da4(param_1 + 7,param_1[9]);
      param_1[9] = 0;
      lVar8 = param_1[8];
      if (lVar8 != 0) {
        lVar9 = 0;
        do {
          *(undefined8 *)(param_1[7] + lVar9 * 8) = 0;
          lVar9 = lVar9 + 1;
        } while (lVar8 != lVar9);
      }
      param_1[10] = 0;
    }
    if ((int)plVar2 != 0) {
      iVar11 = 0;
      do {
        (**(code **)(*param_2 + 0x218))(param_2,iVar11);
        (**(code **)(*param_2 + 0xa0))(&puStack_108,param_2,&PTR_DAT_110c45c20);
        plVar5 = param_2;
        (**(code **)(*param_2 + 0x58))(param_2,&PTR_DAT_110c45240,0);
        if (lStack_f8 < 0) {
          puStack_160 = param_1;
          func_0x000107c3192c(&puStack_158,puStack_108,uStack_100);
        }
        else {
          uStack_150 = uStack_100;
          puStack_158 = puStack_108;
          lStack_148 = lStack_f8;
          puStack_160 = param_1;
        }
        uStack_c0 = SUB81(plVar5,0);
        ppuStack_140 = (undefined8 **)CONCAT71(ppuStack_140._1_7_,uStack_c0);
        pcStack_f0 = FUN_10ab07210;
        ppuStack_e8 = &PTR_FUN_110c46000;
        uStack_d0 = uStack_150;
        puStack_d8 = puStack_158;
        lStack_c8 = lStack_148;
        puStack_158 = (undefined8 *)0x0;
        uStack_150 = 0;
        lStack_148 = 0;
        puStack_e0 = puStack_160;
        FUN_10a1f46a0(param_2,&PTR_DAT_110c45260,&pcStack_f0,0);
        (*(code *)*ppuStack_e8)(&ppuStack_e8);
        if (lStack_148 < 0) {
          __ZdlPv(puStack_158);
        }
        (**(code **)(*param_2 + 0x220))(param_2);
        if (lStack_f8 < 0) {
          __ZdlPv(puStack_108);
        }
        iVar11 = iVar11 + 1;
      } while ((int)plVar2 != iVar11);
    }
    (**(code **)(*param_2 + 0x220))();
    plVar2 = param_2;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return plVar2;
  }
  ___stack_chk_fail();
  if ((long)uStack_150 < 0) {
    __ZdlPv(puStack_160);
  }
  __Unwind_Resume();
  if (*(char *)((long)plVar2 + 0x37) < '\0') {
    __ZdlPv(plVar2[4]);
  }
  if (*(char *)((long)plVar2 + 0x1f) < '\0') {
    __ZdlPv(plVar2[1]);
  }
  return plVar2;
}



/* Entry: 10aaf4260; end: 10aaf429f;  */

long FUN_10aaf4260(long param_1)

{
  if (*(char *)(param_1 + 0x37) < '\0') {
    __ZdlPv(*(undefined8 *)(param_1 + 0x20));
  }
  if (*(char *)(param_1 + 0x1f) < '\0') {
    __ZdlPv(*(undefined8 *)(param_1 + 8));
  }
  return param_1;
}



/* Entry: 10aaf42a0; end: 10aaf45db;  */

void FUN_10aaf42a0(long param_1,long *param_2)

{
  long lVar1;
  code *pcVar2;
  long lVar3;
  long *plVar4;
  undefined8 ***pppuStack_80;
  long lStack_78;
  char cStack_69;
  undefined8 ***pppuStack_68;
  long lStack_60;
  undefined8 uStack_58;
  
  FUN_10a0ffca4(&pppuStack_68,param_1 + 0x68);
  lStack_78 = (long)uStack_58._7_1_;
  pppuStack_80 = &pppuStack_68;
  if (lStack_78 < 0) {
    pppuStack_80 = pppuStack_68;
    lStack_78 = lStack_60;
    if (lStack_60 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10aaf458c);
      (*pcVar2)();
    }
  }
  (**(code **)(*param_2 + 0x30))(param_2,&PTR_DAT_110c45180,&pppuStack_80);
  if (uStack_58._7_1_ < '\0') {
    __ZdlPv(pppuStack_68);
  }
  if (*(char *)(param_1 + 0xb0) == '\x01') {
    (**(code **)(*param_2 + 0x70))(param_2,&PTR_DAT_110c451c0,1);
  }
  pppuStack_68 = (undefined8 ***)0x0;
  lStack_60 = 0;
  uStack_58 = 0;
  func_0x000107c31930(&pppuStack_68,*(long *)(param_1 + 0x80) - *(long *)(param_1 + 0x78) >> 4);
  lVar1 = *(long *)(param_1 + 0x80);
  for (lVar3 = *(long *)(param_1 + 0x78); lVar3 != lVar1; lVar3 = lVar3 + 0x10) {
    FUN_10a0ffca4(&pppuStack_80,lVar3);
    FUN_10a059fa0(&pppuStack_68,&pppuStack_80);
    if (cStack_69 < '\0') {
      __ZdlPv(pppuStack_80);
    }
  }
  (**(code **)(*param_2 + 0x138))(param_2,&PTR_DAT_110c451a0,&pppuStack_68);
  pppuStack_80 = &pppuStack_68;
  FUN_10a0426d8(&pppuStack_80);
  (**(code **)(*param_2 + 0x118))(param_2,&PTR_DAT_110c451e0,*(undefined8 *)(param_1 + 0x60));
  (**(code **)(*param_2 + 0x18))(param_2,&PTR_DAT_110c45200);
  for (plVar4 = *(long **)(param_1 + 0x20); plVar4 != (long *)0x0; plVar4 = (long *)*plVar4) {
    (**(code **)(*param_2 + 0x10))(param_2);
    FUN_10a00d760(param_2,&PTR_DAT_110c45c20,plVar4 + 2);
    FUN_10a00d760(param_2,&PTR_DAT_110c45220,plVar4 + 5);
    FUN_10a398a58(param_2,&PTR_DAT_110c45260,plVar4 + 8,&UNK_10f68e3e8,0);
    (**(code **)(*param_2 + 0x70))(param_2,&PTR_DAT_110c45240,*(undefined1 *)(plVar4 + 0xc));
    (**(code **)(*param_2 + 0x20))(param_2);
  }
  (**(code **)(*param_2 + 0x20))(param_2);
  (**(code **)(*param_2 + 0x18))(param_2,&PTR_DAT_110c45280);
  for (plVar4 = *(long **)(param_1 + 0x48); plVar4 != (long *)0x0; plVar4 = (long *)*plVar4) {
    (**(code **)(*param_2 + 0x10))(param_2);
    FUN_10a00d760(param_2,&PTR_DAT_110c45c20,plVar4 + 2);
    FUN_10a3989b0(param_2,&PTR_DAT_110c45260,plVar4 + 5,&UNK_10f68e3e8,0);
    (**(code **)(*param_2 + 0x70))(param_2,&PTR_DAT_110c45240,*(undefined1 *)(plVar4 + 7));
    (**(code **)(*param_2 + 0x20))(param_2);
  }
  (**(code **)(*param_2 + 0x20))(param_2);
  return;
}



/* Entry: 10aaf45dc; end: 10aaf466b;  */

undefined1  [16] FUN_10aaf45dc(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x19;
  auVar1._0_8_ = &UNK_10f66231f;
  return auVar1;
}



/* Entry: 10aaf466c; end: 10aaf4c17;  */

/* WARNING: Removing unreachable block (ram,0x00010aaf4d54) */

void FUN_10aaf466c(ulong param_1)

{
  undefined8 ****ppppuVar1;
  undefined8 ****ppppuVar2;
  char cVar3;
  bool bVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  code *pcVar7;
  ulong uVar8;
  long *plVar9;
  long *plVar10;
  undefined *puVar11;
  long *extraout_x8;
  long lVar12;
  long *plVar13;
  long lVar14;
  ulong uVar15;
  ulong uVar16;
  ulong uVar17;
  long *plStack_130;
  long *plStack_128;
  undefined8 ***apppuStack_c8 [2];
  char cStack_b1;
  undefined **ppuStack_b0;
  undefined8 uStack_a8;
  undefined8 ***pppuStack_a0;
  undefined **ppuStack_98;
  code *pcStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 uStack_48;
  undefined8 uStack_40;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x000109887da8(apppuStack_c8,&UNK_10f66231f,0x19);
  ppppuVar1 = (undefined8 ****)apppuStack_c8[0];
  if (-1 < cStack_b1) {
    ppppuVar1 = apppuStack_c8;
  }
  *(undefined ***)(param_1 + 0x1b0) = &PTR_DAT_110c45a58;
  ppppuVar2 = (undefined8 ****)&UNK_10f68e3e8;
  if (ppppuVar1 != (undefined8 ****)0x0) {
    ppppuVar2 = ppppuVar1;
  }
  func_0x000107c2c4dc(param_1 + 0x1b8,ppppuVar2);
  ppuStack_98 = (undefined **)0x0;
  pcStack_90 = (code *)0x0;
  uStack_80 = 0x4ffffffff;
  uStack_88 = 0x4000000064;
  uStack_70 = 0;
  puStack_78 = (undefined *)0x0;
  uStack_60 = 0;
  puStack_68 = (undefined *)0x0;
  uStack_58 = 0;
  uStack_54 = 0x141;
  uStack_50 = 0xffffffff;
  uStack_48 = 0;
  uStack_40 = 0;
  pppuStack_a0 = ppppuVar1;
  func_0x00010a052690(param_1 + 0x168,&pppuStack_a0);
  uVar8 = param_1;
  FUN_10a0051e8(param_1,100,0x40,0xffffffff,0xffffffff,4);
  if ((uVar8 & 1) == 0) {
    ppuStack_b0 = &PTR_DAT_110c45a58;
    uStack_a8 = 0;
    pppuStack_a0 = (undefined8 ***)&PTR_DAT_110bc8450;
    ppuStack_98 = (undefined **)0x0;
    pcStack_90 = (code *)CONCAT71(pcStack_90._1_7_,1);
    func_0x0001098949cc(param_1,ppppuVar1,&ppuStack_b0,&pppuStack_a0);
  }
  if (cStack_b1 < '\0') {
    __ZdlPv(apppuStack_c8[0]);
  }
  uVar8 = param_1;
  FUN_10a0051e8(param_1,0x19,0x440,0xffffffff,0xffffffff,4);
  if ((uVar8 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10aaf4bec;
    FUN_10a054dac(param_1,&UNK_10f657110,FUN_10ab07320,3,*(undefined8 *)(param_1 + 0x40));
  }
  uVar8 = param_1;
  FUN_10a0051e8(param_1,0x19,0x40,0xffffffff,0xffffffff,4);
  if ((uVar8 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10aaf4bec;
    FUN_10a054dac(param_1,&UNK_10f68ef42,FUN_10ab074e0,3,*(undefined8 *)(param_1 + 0x40));
  }
  uVar8 = param_1;
  FUN_10a0051e8(param_1,0x19,0x40,0xffffffff,0xffffffff,4);
  if ((uVar8 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10aaf4bec;
    FUN_10a054dac(param_1,&UNK_10f68ef5b,FUN_10ab0768c,1,*(undefined8 *)(param_1 + 0x40));
  }
  uVar8 = param_1;
  FUN_10a0051e8(param_1,0x19,0x40,0xffffffff,0xffffffff,4);
  if ((uVar8 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10aaf4bec;
    FUN_10a054dac(param_1,&UNK_10f68ef76,FUN_10ab07758,3,*(undefined8 *)(param_1 + 0x40));
  }
  uVar8 = param_1;
  FUN_10a0051e8(param_1,0x19,0x40,0xffffffff,0xffffffff,4);
  if ((uVar8 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10aaf4bec;
    FUN_10a054dac(param_1,&UNK_10f68ef89,FUN_10ab0796c,1,*(undefined8 *)(param_1 + 0x40));
  }
  uVar8 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar8 & 1) == 0) {
    FUN_10a052828(param_1,&UNK_10f68ef98,FUN_10ab07a38,FUN_10ab07af4);
  }
  uVar8 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar8 & 1) == 0) {
    FUN_10a052828(param_1,"scale",FUN_10ab07c40,FUN_10ab07d10);
  }
  uVar8 = param_1;
  FUN_10a0051e8(param_1,0x19,0x40,0xffffffff,0xffffffff,4);
  if ((uVar8 & 1) == 0) {
    FUN_10a052828(param_1,&UNK_10f68efa1,FUN_10ab07ed8,FUN_10ab07fa4);
  }
  uVar8 = param_1;
  FUN_10a0051e8(param_1,0x19,0x40,0xffffffff,0xffffffff,4);
  if ((uVar8 & 1) == 0) {
    FUN_10a052828(param_1,&UNK_10f68efaf,FUN_10ab08164,FUN_10ab08230);
  }
  uVar8 = param_1;
  FUN_10a0051e8(param_1,0x19,0x40,0xffffffff,0xffffffff,4);
  if ((uVar8 & 1) == 0) {
    FUN_10a052828(param_1,&UNK_10f68efbe,FUN_10ab082e8,FUN_10ab083b8);
  }
  uVar8 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar8 & 1) == 0) {
    FUN_10a052828(param_1,&UNK_10f68efd0,FUN_10ab08470,FUN_10ab08528);
  }
  *(undefined **)(param_1 + 0x1b0) = PTR___ZTIDn_1103469e8;
  lVar14 = *(long *)(param_1 + 0x170);
  if (*(long *)(param_1 + 0x168) == lVar14) {
LAB_10aaf4bec:
                    /* WARNING: Does not return */
    pcVar7 = (code *)SoftwareBreakpoint(1,0x10aaf4bf0);
    (*pcVar7)();
  }
  ppuStack_98 = *(undefined ***)(lVar14 + -0x60);
  pppuStack_a0 = *(undefined8 ****)(lVar14 + -0x68);
  puStack_78 = *(undefined **)(lVar14 + -0x40);
  uVar15 = *(ulong *)(lVar14 + -0x48);
  uVar16 = *(ulong *)(lVar14 + -0x50);
  pcStack_90 = *(code **)(lVar14 + -0x58);
  puStack_68 = *(undefined **)(lVar14 + -0x30);
  uStack_70 = *(undefined8 *)(lVar14 + -0x38);
  uStack_60 = *(undefined8 *)(lVar14 + -0x28);
  uStack_40 = *(undefined8 *)(lVar14 + -8);
  uStack_48 = *(undefined8 *)(lVar14 + -0x10);
  uVar17 = *(ulong *)(lVar14 + -0x18);
  uStack_58 = (undefined4)*(undefined8 *)(lVar14 + -0x20);
  uStack_54 = (undefined4)((ulong)*(undefined8 *)(lVar14 + -0x20) >> 0x20);
  uStack_50 = (undefined4)uVar17;
  uStack_4c = (undefined4)(uVar17 >> 0x20);
  *(long *)(param_1 + 0x170) = lVar14 + -0x68;
  uStack_88._4_4_ = (undefined4)(uVar16 >> 0x20);
  uVar5 = uStack_88._4_4_;
  uStack_80._4_4_ = (undefined4)(uVar15 >> 0x20);
  uVar6 = uStack_80._4_4_;
  uVar8 = param_1;
  uStack_88 = uVar16;
  uStack_80 = uVar15;
  FUN_10a0051e8(param_1,uVar16 & 0xffffffff,uVar5,uVar17 & 0xffffffff,uVar15 & 0xffffffff,uVar6);
  if ((uVar8 & 1) == 0) {
    func_0x000109894f40(param_1,0);
    FUN_10a054234(param_1,&pppuStack_a0,param_1 + 0x1b8,&UNK_10f66231f,0x19);
    FUN_10a05431c(param_1);
  }
  ppuStack_98 = (undefined **)0x0;
  pcStack_90 = (code *)0x0;
  pppuStack_a0 = (undefined8 ***)&UNK_10f68efd8;
  uStack_80 = 0x4ffffffff;
  uStack_88 = 0x4000000064;
  puStack_78 = &UNK_10f68e3e8;
  uStack_70 = 0;
  uStack_60 = 0;
  uStack_58 = 0;
  uStack_54 = 0;
  puStack_68 = &UNK_10f68e3e8;
  uStack_50 = 0xffffffff;
  uStack_48 = 0;
  uStack_40 = 0;
  func_0x00010a004eb4(param_1,&pppuStack_a0);
  puVar11 = (undefined *)0x64;
  uVar8 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar8 & 1) == 0) {
    pppuStack_a0 = (undefined8 ***)FUN_10ab08644;
    ppuStack_98 = &PTR_FUN_110c46018;
    pcStack_90 = FUN_10aaf4c18;
    if (*(long *)(param_1 + 0x10) == *(long *)(param_1 + 0x18)) goto LAB_10aaf4bec;
    puVar11 = &DAT_10f68efec;
    FUN_10a0544d8(param_1,&DAT_10f68efec,&pppuStack_a0,0,*(long *)(param_1 + 0x18) + -8);
    (*(code *)*ppuStack_98)(&ppuStack_98);
  }
  func_0x00010a004064();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return;
  }
  ___stack_chk_fail();
  if (cStack_b1 < '\0') {
    __ZdlPv(apppuStack_c8[0]);
  }
  __Unwind_Resume();
  if (param_1 == 0) {
    plVar9 = (long *)0x1e8;
    __Znwm();
    plVar9[1] = 0;
    plVar9[2] = 0;
    *plVar9 = (long)&PTR_DAT_110c460b8;
    plVar13 = plVar9 + 3;
    plVar10 = plVar9;
    func_0x00010a0fda30();
    FUN_10aaf4fd0(plVar13,0,plVar10,puVar11);
    plStack_130 = plVar13;
    plStack_128 = plVar9;
    FUN_10ab08954(&plStack_130,plVar9 + 8,plVar13);
    FUN_10ab087f0(extraout_x8,&plStack_130);
    plVar13 = plStack_128;
    if (plStack_128 != (long *)0x0) {
      plVar10 = plStack_128 + 1;
      do {
        lVar14 = *plVar10;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar10,0x10);
        if (bVar4) {
          *plVar10 = lVar14 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar14 == 0) {
        (**(code **)(*plStack_128 + 0x10))(plStack_128);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar13);
      }
    }
  }
  else {
    lVar14 = *(long *)(param_1 + 0x858);
    plVar13 = *(long **)(param_1 + 0x860);
    if (plVar13 != (long *)0x0) {
      plVar10 = plVar13 + 1;
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar10,0x10);
        if (bVar4) {
          *plVar10 = *plVar10 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    plVar9 = (long *)0x1d0;
    __Znwm();
    plVar10 = plVar9;
    func_0x00010a0fda30();
    FUN_10aaf4fd0(plVar9,param_1,plVar10,puVar11);
    if (plVar13 != (long *)0x0) {
      plVar10 = plVar13 + 1;
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar10,0x10);
        if (bVar4) {
          *plVar10 = *plVar10 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      plVar10 = plVar13 + 2;
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar10,0x10);
        if (bVar4) {
          *plVar10 = *plVar10 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar10,0x10);
        if (bVar4) {
          *plVar10 = *plVar10 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar13);
    }
    plVar10 = (long *)0x30;
    plStack_130 = plVar9;
    __Znwm();
    *plVar10 = (long)&PTR_DAT_110c46058;
    plVar10[1] = 0;
    plVar10[2] = 0;
    plVar10[3] = (long)plVar9;
    plVar10[4] = lVar14;
    plVar10[5] = (long)plVar13;
    plStack_128 = plVar10;
    FUN_10ab08954(&plStack_130,plVar9 + 5,plVar9);
    FUN_10ab087f0(extraout_x8,&plStack_130);
    plVar10 = plStack_128;
    if (plStack_128 != (long *)0x0) {
      plVar9 = plStack_128 + 1;
      do {
        lVar12 = *plVar9;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar9,0x10);
        if (bVar4) {
          *plVar9 = lVar12 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar12 == 0) {
        (**(code **)(*plStack_128 + 0x10))(plStack_128);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar10);
      }
    }
    if (plVar13 != (long *)0x0) {
      plVar10 = plVar13 + 1;
      do {
        lVar12 = *plVar10;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar10,0x10);
        if (bVar4) {
          *plVar10 = lVar12 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar12 == 0) {
        (**(code **)(*plVar13 + 0x10))(plVar13);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar13);
      }
    }
    if ((lVar14 != 0) && (plVar10 = (long *)*extraout_x8, plVar10 != (long *)0x0)) {
      plStack_128 = (long *)extraout_x8[1];
      if (plStack_128 != (long *)0x0) {
        plVar9 = plStack_128 + 1;
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar9,0x10);
          if (bVar4) {
            *plVar9 = *plVar9 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
      plStack_130 = plVar10;
      FUN_10aa88c30(lVar14,&plStack_130);
      plVar10 = plStack_128;
      if (plStack_128 != (long *)0x0) {
        plVar9 = plStack_128 + 1;
        do {
          lVar14 = *plVar9;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar9,0x10);
          if (bVar4) {
            *plVar9 = lVar14 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (lVar14 == 0) {
          (**(code **)(*plStack_128 + 0x10))(plStack_128);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar10);
        }
      }
    }
    if (plVar13 != (long *)0x0) {
      plVar10 = plVar13 + 1;
      do {
        lVar14 = *plVar10;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar10,0x10);
        if (bVar4) {
          *plVar10 = lVar14 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar14 == 0) {
        (**(code **)(*plVar13 + 0x10))(plVar13);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR___ZNSt3__119__shared_weak_count14__release_weakEv_110346648)(plVar13);
        return;
      }
    }
  }
  return;
}



/* Entry: 10aaf4c18; end: 10aaf4f9f;  */

/* WARNING: Removing unreachable block (ram,0x00010aaf4d54) */

void FUN_10aaf4c18(long *param_1,long param_2,undefined8 param_3)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  long *plStack_50;
  long *plStack_48;
  
  if (param_2 == 0) {
    plVar3 = (long *)0x1e8;
    __Znwm();
    plVar3[1] = 0;
    plVar3[2] = 0;
    *plVar3 = (long)&PTR_DAT_110c460b8;
    plVar6 = plVar3 + 3;
    plVar4 = plVar3;
    func_0x00010a0fda30();
    FUN_10aaf4fd0(plVar6,0,plVar4,param_3);
    plStack_50 = plVar6;
    plStack_48 = plVar3;
    FUN_10ab08954(&plStack_50,plVar3 + 8,plVar6);
    FUN_10ab087f0(param_1,&plStack_50);
    plVar6 = plStack_48;
    if (plStack_48 != (long *)0x0) {
      plVar4 = plStack_48 + 1;
      do {
        lVar7 = *plVar4;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
        if (bVar2) {
          *plVar4 = lVar7 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (lVar7 == 0) {
        (**(code **)(*plStack_48 + 0x10))(plStack_48);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
      }
    }
  }
  else {
    lVar7 = *(long *)(param_2 + 0x858);
    plVar6 = *(long **)(param_2 + 0x860);
    if (plVar6 != (long *)0x0) {
      plVar4 = plVar6 + 1;
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
        if (bVar2) {
          *plVar4 = *plVar4 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    plVar3 = (long *)0x1d0;
    __Znwm();
    plVar4 = plVar3;
    func_0x00010a0fda30();
    FUN_10aaf4fd0(plVar3,param_2,plVar4,param_3);
    if (plVar6 != (long *)0x0) {
      plVar4 = plVar6 + 1;
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
        if (bVar2) {
          *plVar4 = *plVar4 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      plVar4 = plVar6 + 2;
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
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
    }
    plVar4 = (long *)0x30;
    plStack_50 = plVar3;
    __Znwm();
    *plVar4 = (long)&PTR_DAT_110c46058;
    plVar4[1] = 0;
    plVar4[2] = 0;
    plVar4[3] = (long)plVar3;
    plVar4[4] = lVar7;
    plVar4[5] = (long)plVar6;
    plStack_48 = plVar4;
    FUN_10ab08954(&plStack_50,plVar3 + 5,plVar3);
    FUN_10ab087f0(param_1,&plStack_50);
    plVar4 = plStack_48;
    if (plStack_48 != (long *)0x0) {
      plVar3 = plStack_48 + 1;
      do {
        lVar5 = *plVar3;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
        if (bVar2) {
          *plVar3 = lVar5 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (lVar5 == 0) {
        (**(code **)(*plStack_48 + 0x10))(plStack_48);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
      }
    }
    if (plVar6 != (long *)0x0) {
      plVar4 = plVar6 + 1;
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
        (**(code **)(*plVar6 + 0x10))(plVar6);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
      }
    }
    if ((lVar7 != 0) && (plVar4 = (long *)*param_1, plVar4 != (long *)0x0)) {
      plStack_48 = (long *)param_1[1];
      if (plStack_48 != (long *)0x0) {
        plVar3 = plStack_48 + 1;
        do {
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
          if (bVar2) {
            *plVar3 = *plVar3 + 1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
      }
      plStack_50 = plVar4;
      FUN_10aa88c30(lVar7,&plStack_50);
      plVar4 = plStack_48;
      if (plStack_48 != (long *)0x0) {
        plVar3 = plStack_48 + 1;
        do {
          lVar7 = *plVar3;
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
          if (bVar2) {
            *plVar3 = lVar7 + -1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
        if (lVar7 == 0) {
          (**(code **)(*plStack_48 + 0x10))(plStack_48);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
        }
      }
    }
    if (plVar6 != (long *)0x0) {
      plVar4 = plVar6 + 1;
      do {
        lVar7 = *plVar4;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
        if (bVar2) {
          *plVar4 = lVar7 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (lVar7 == 0) {
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



/* Entry: 10aaf4fa0; end: 10aaf4fcf;  */

void FUN_10aaf4fa0(long param_1,undefined8 param_2)

{
  *(int *)(param_1 + 0xe4) = (int)param_2;
  *(char *)(param_1 + 0xe8) = (char)((ulong)param_2 >> 0x20);
  return;
}



/* Entry: 10aaf4fd0; end: 10aaf509f;  */

undefined8 * FUN_10aaf4fd0(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = param_1;
  FUN_10aa7093c();
  *puVar1 = &PTR_FUN_110c452b0;
  puVar1[2] = &PTR_DAT_110c45380;
  puVar1[7] = &PTR_DAT_110c453d8;
  *(undefined4 *)(puVar1 + 0x1c) = 1;
  *(undefined1 *)((long)puVar1 + 0xe4) = 0;
  *(undefined1 *)(puVar1 + 0x1d) = 0;
  *(undefined1 *)((long)puVar1 + 0xf4) = 0;
  puVar1[0x1f] = 0;
  puVar1[0x20] = 0;
  *(undefined4 *)((long)puVar1 + 0xec) = 0;
  *(undefined1 *)(puVar1 + 0x1e) = 0;
  func_0x000107c2b054(puVar1 + 0x21,&UNK_10f68e3e8);
  param_1[0x25] = 0;
  param_1[0x24] = 0;
  param_1[0x27] = 0;
  param_1[0x26] = 0;
  *(undefined4 *)(param_1 + 0x28) = 0x3f800000;
  *(undefined1 *)(param_1 + 0x29) = 0;
  *(undefined1 *)(param_1 + 0x2c) = 0;
  *(undefined1 *)(param_1 + 0x2d) = 1;
  *(undefined1 *)(param_1 + 0x2e) = 0;
  *(undefined1 *)(param_1 + 0x31) = 0;
  param_1[0x33] = 0;
  param_1[0x32] = 0;
  param_1[0x35] = 0;
  param_1[0x34] = 0;
  param_1[0x37] = 0;
  param_1[0x36] = 0;
  param_1[0x38] = 0;
  *(undefined4 *)(param_1 + 0x39) = 0x3f800000;
  return param_1;
}



/* Entry: 10aaf50a0; end: 10aaf5157;  */

void FUN_10aaf50a0(undefined8 *param_1)

{
  undefined8 *puStack_28;
  
  *param_1 = &PTR_FUN_110c452b0;
  param_1[2] = &PTR_DAT_110c45380;
  param_1[7] = &PTR_DAT_110c453d8;
  func_0x000107c2826c(param_1 + 0x35);
  puStack_28 = param_1 + 0x32;
  FUN_10a042144(&puStack_28);
  if ((*(char *)(param_1 + 0x31) == '\x01') && (param_1[0x2e] != 0)) {
    param_1[0x2f] = param_1[0x2e];
    __ZdlPv();
  }
  if ((*(char *)(param_1 + 0x2c) == '\x01') && (param_1[0x29] != 0)) {
    param_1[0x2a] = param_1[0x29];
    __ZdlPv();
  }
  func_0x000104c4f944(param_1 + 0x24);
  if (*(char *)((long)param_1 + 0x11f) < '\0') {
    __ZdlPv(param_1[0x21]);
  }
  func_0x00010a0524e4(param_1 + 0x1f);
  func_0x00010aa71c88(param_1);
  return;
}



/* Entry: 10aaf5158; end: 10aaf516b;  */

void FUN_10aaf5158(undefined8 *param_1)

{
  undefined8 *puStack_28;
  
  *param_1 = &PTR_FUN_110c452b0;
  param_1[2] = &PTR_DAT_110c45380;
  param_1[7] = &PTR_DAT_110c453d8;
  func_0x000107c2826c(param_1 + 0x35);
  puStack_28 = param_1 + 0x32;
  FUN_10a042144(&puStack_28);
  if ((*(char *)(param_1 + 0x31) == '\x01') && (param_1[0x2e] != 0)) {
    param_1[0x2f] = param_1[0x2e];
    __ZdlPv();
  }
  if ((*(char *)(param_1 + 0x2c) == '\x01') && (param_1[0x29] != 0)) {
    param_1[0x2a] = param_1[0x29];
    __ZdlPv();
  }
  func_0x000104c4f944(param_1 + 0x24);
  if (*(char *)((long)param_1 + 0x11f) < '\0') {
    __ZdlPv(param_1[0x21]);
  }
  func_0x00010a0524e4(param_1 + 0x1f);
  func_0x00010aa71c88(param_1);
  return;
}



/* Entry: 10aaf516c; end: 10aaf51af;  */

void FUN_10aaf516c(void)

{
  FUN_10aaf50a0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10aaf51b0; end: 10aaf526f;  */

void FUN_10aaf51b0(undefined8 param_1,undefined8 param_2)

{
  undefined **ppuVar1;
  char cVar2;
  bool bVar3;
  undefined ***pppuVar4;
  undefined ***pppuVar5;
  undefined **ppuVar6;
  undefined *puVar7;
  undefined **ppuStack_c0;
  undefined **ppuStack_b8;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined ***pppuStack_98;
  undefined1 *puStack_90;
  code *pcStack_88;
  undefined8 uStack_78;
  undefined **ppuStack_70;
  undefined8 uStack_68;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x00010aa70acc();
  uStack_78 = 0x10ab087c4;
  ppuStack_70 = &PTR_DAT_110c46030;
  ppuVar6 = &PTR_DAT_110c453e8;
  uStack_68 = param_1;
  FUN_10a7e353c(param_2,&PTR_DAT_110c453e8,&uStack_78,0);
  pppuVar4 = &ppuStack_70;
  (*(code *)*ppuStack_70)();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return;
  }
  ___stack_chk_fail();
  (*(code *)*ppuStack_70)(&ppuStack_70);
  pppuVar5 = pppuVar4;
  __Unwind_Resume();
  pcStack_88 = FUN_10aaf5270;
  uStack_a0 = param_1;
  pppuStack_98 = pppuVar4;
  puStack_90 = &stack0xfffffffffffffff0;
  func_0x00010aa70b70();
  puStack_b0 = &UNK_10f68f2ef;
  uStack_a8 = 0xe;
  ppuStack_b8 = pppuVar5[0x20];
  ppuStack_c0 = pppuVar5[0x1f];
  if (pppuVar5[0x20] != (undefined **)0x0) {
    ppuVar1 = pppuVar5[0x20] + 1;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(ppuVar1,0x10);
      if (bVar3) {
        *ppuVar1 = *ppuVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  (**(code **)(*ppuVar6 + 0x108))(ppuVar6,&PTR_DAT_110c453e8,&ppuStack_c0,&puStack_b0);
  ppuVar6 = ppuStack_b8;
  if (ppuStack_b8 != (undefined **)0x0) {
    ppuVar1 = ppuStack_b8 + 1;
    do {
      puVar7 = *ppuVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(ppuVar1,0x10);
      if (bVar3) {
        *ppuVar1 = puVar7 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (puVar7 == (undefined *)0x0) {
      (**(code **)(*ppuStack_b8 + 0x10))(ppuStack_b8);
      __ZNSt3__119__shared_weak_count14__release_weakEv(ppuVar6);
    }
  }
  return;
}



/* Entry: 10aaf5270; end: 10aaf538f;  */

void FUN_10aaf5270(long param_1,long *param_2)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  undefined8 uStack_40;
  long *plStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  func_0x00010aa70b70();
  puStack_30 = &UNK_10f68f2ef;
  uStack_28 = 0xe;
  plStack_38 = *(long **)(param_1 + 0x100);
  uStack_40 = *(undefined8 *)(param_1 + 0xf8);
  if (*(long *)(param_1 + 0x100) != 0) {
    plVar1 = (long *)(*(long *)(param_1 + 0x100) + 8);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = *plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  (**(code **)(*param_2 + 0x108))(param_2,&PTR_DAT_110c453e8,&uStack_40,&puStack_30);
  plVar1 = plStack_38;
  if (plStack_38 != (long *)0x0) {
    plVar2 = plStack_38 + 1;
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
      (**(code **)(*plStack_38 + 0x10))(plStack_38);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar1);
    }
  }
  return;
}



/* Entry: 10aaf5390; end: 10aaf55df;  */

void FUN_10aaf5390(undefined8 *param_1,long param_2)

{
  undefined4 uVar1;
  undefined1 uVar2;
  undefined1 *puVar3;
  long *plVar4;
  long *plVar5;
  undefined8 uVar6;
  undefined8 uStack_98;
  undefined8 uStack_90;
  long lStack_88;
  undefined1 uStack_80;
  long *plStack_78;
  undefined1 auStack_70 [8];
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  
  func_0x000107c2b054(&uStack_60,&UNK_10f68e3e8);
  if (*(long *)(param_2 + 0x138) != 0) {
    auStack_70[0] = 0;
    uStack_68 = 0;
    for (plVar5 = *(long **)(param_2 + 0x130); plVar5 != (long *)0x0; plVar5 = (long *)*plVar5) {
      plStack_78 = (long *)0x0;
      uStack_80 = 3;
      plVar4 = plVar5 + 5;
      func_0x00010938229c();
      puVar3 = auStack_70;
      plStack_78 = plVar4;
      func_0x0001095b7584(puVar3,plVar5 + 2);
      uVar2 = *puVar3;
      *puVar3 = uStack_80;
      plVar4 = *(long **)(puVar3 + 8);
      uStack_80 = uVar2;
      *(long **)(puVar3 + 8) = plStack_78;
      plStack_78 = plVar4;
      func_0x000109380ffc(&plStack_78);
    }
    uStack_50._7_1_ = (char)((ulong)uStack_50 >> 0x38);
    FUN_10a0c32e4(&uStack_98,auStack_70,0xffffffff,0x20,0,0);
    if (uStack_50._7_1_ < '\0') {
      __ZdlPv(uStack_60);
    }
    uStack_58 = uStack_90;
    uStack_60 = uStack_98;
    uStack_50 = lStack_88;
    func_0x000109380ffc(&uStack_68,auStack_70[0]);
  }
  if (*(char *)(param_2 + 0x11f) < '\0') {
    func_0x000107c3192c(param_1,*(undefined8 *)(param_2 + 0x108),*(undefined8 *)(param_2 + 0x110));
  }
  else {
    uVar6 = *(undefined8 *)(param_2 + 0x108);
    param_1[1] = *(undefined8 *)(param_2 + 0x110);
    *param_1 = uVar6;
    param_1[2] = *(undefined8 *)(param_2 + 0x118);
  }
  uVar1 = *(undefined4 *)(param_2 + 0xe0);
  *(undefined4 *)(param_1 + 3) = *(undefined4 *)(param_2 + 0xe4);
  *(undefined1 *)((long)param_1 + 0x1c) = *(undefined1 *)(param_2 + 0xe8);
  *(undefined4 *)(param_1 + 4) = uVar1;
  if (uStack_50 < 0) {
    func_0x000107c3192c(param_1 + 5,uStack_60,uStack_58);
  }
  else {
    param_1[6] = uStack_58;
    param_1[5] = uStack_60;
    param_1[7] = uStack_50;
  }
  *(undefined1 *)(param_1 + 10) = 0;
  uVar1 = *(undefined4 *)(param_2 + 0xf0);
  *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_2 + 0xec);
  *(undefined4 *)((long)param_1 + 0x44) = uVar1;
  *(undefined1 *)(param_1 + 9) = *(undefined1 *)(param_2 + 0xf4);
  *(undefined1 *)(param_1 + 0xd) = 0;
  *(undefined2 *)(param_1 + 0xe) = 0;
  *(undefined1 *)(param_1 + 0xf) = 0;
  *(undefined1 *)(param_1 + 0x12) = 0;
  if (*(char *)(param_2 + 0x160) == '\x01') {
    FUN_10a12d44c(param_1 + 10,param_2 + 0x148);
    *(ushort *)(param_1 + 0xe) = *(byte *)(param_2 + 0x168) | 0x100;
  }
  if (*(char *)(param_2 + 0x188) == '\x01') {
    FUN_10a12d44c(param_1 + 0xf,param_2 + 0x170);
  }
  if (uStack_50 < 0) {
    __ZdlPv(uStack_60);
  }
  return;
}



/* Entry: 10aaf55e0; end: 10aaf5827;  */

/* WARNING: Removing unreachable block (ram,0x00010aaf57d0) */

void FUN_10aaf55e0(long param_1)

{
  long *plVar1;
  ulong uVar2;
  undefined8 *puVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  long *plVar7;
  long *plVar8;
  undefined8 *extraout_x8;
  ulong uVar9;
  undefined8 uVar10;
  long lVar11;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined4 uStack_70;
  undefined8 uStack_6c;
  undefined8 uStack_64;
  undefined4 uStack_5c;
  long *plStack_58;
  long *plStack_50;
  long *plStack_48;
  long *plStack_40;
  long *plStack_38;
  
  lVar4 = *(long *)(param_1 + 0xf8);
  if (lVar4 != 0) {
    if (*(char *)(param_1 + 0x11f) < '\0') {
      if (*(long *)(param_1 + 0x110) != 0) {
        return;
      }
    }
    else if (*(char *)(param_1 + 0x11f) != '\0') {
      return;
    }
    func_0x00010aae9fd8();
    if (lVar4 != 0) {
      FUN_10a08d2e0(&uStack_98,lVar4 + 0x10);
      if (*(char *)(param_1 + 0x11f) < '\0') {
        __ZdlPv(*(undefined8 *)(param_1 + 0x108));
      }
      *(ulong *)(param_1 + 0x110) = CONCAT44(uStack_8c,uStack_90);
      *(undefined8 *)(param_1 + 0x108) = CONCAT44(uStack_94,uStack_98);
      *(ulong *)(param_1 + 0x118) = CONCAT44(uStack_84,uStack_88);
      lVar4 = *(long *)(param_1 + 400);
      lVar11 = *(long *)(param_1 + 0x198);
      while (lVar11 != lVar4) {
        lVar11 = lVar11 + -0x80;
        FUN_10a042100(lVar11);
      }
      plVar1 = (long *)(param_1 + 0x198);
      *(long *)(param_1 + 0x198) = lVar4;
      lVar4 = param_1 + 0x1a8;
      func_0x000107c283f4();
      uStack_98 = 0x3f800000;
      uStack_8c = 0;
      uStack_88 = 0;
      uStack_94 = 0;
      uStack_90 = 0;
      uStack_84 = 0x3f800000;
      uStack_80 = 0;
      uStack_78 = 0;
      uStack_70 = 0x3f800000;
      uStack_64 = 0;
      uStack_6c = 0;
      uStack_5c = 0x3f800000;
      uStack_9c = 0xffffffff;
      uVar2 = *(ulong *)(param_1 + 0x198);
      if (uVar2 < *(ulong *)(param_1 + 0x1a0)) {
        FUN_10aafd138(uVar2,0,&uStack_9c,&uStack_98);
        plVar8 = (long *)(uVar2 + 0x80);
        *plVar1 = (long)plVar8;
      }
      else {
        plVar8 = (long *)(param_1 + 400);
        lVar11 = uVar2 - *plVar8;
        uVar2 = (lVar11 >> 7) + 1;
        if (uVar2 >> 0x39 != 0) {
          FUN_10a041f68();
          *plVar1 = lVar11;
          __Unwind_Resume();
          *extraout_x8 = 0;
          extraout_x8[1] = 0;
          extraout_x8[2] = 0;
          lVar11 = *(long *)(lVar4 + 400);
          lVar4 = *(long *)(lVar4 + 0x198);
          lVar5 = lVar4 - lVar11 >> 7;
          if (lVar5 != 0) {
            FUN_10a041f30(extraout_x8,lVar5);
            puVar3 = extraout_x8;
            FUN_10a041fb0(extraout_x8,lVar11,lVar4,extraout_x8[1]);
            extraout_x8[1] = puVar3;
          }
          return;
        }
        uVar6 = *(ulong *)(param_1 + 0x1a0) - *plVar8;
        uVar9 = (long)uVar6 >> 6;
        if (uVar9 <= uVar2) {
          uVar9 = uVar2;
        }
        if (0x7fffffffffffff7f < uVar6) {
          uVar9 = 0x1ffffffffffffff;
        }
        plStack_38 = plVar8;
        if (uVar9 == 0) {
          plVar7 = (long *)0x0;
        }
        else {
          plVar7 = plVar8;
          FUN_10a041f7c();
        }
        lVar11 = (long)plVar7 + lVar11;
        plStack_40 = plVar7 + uVar9 * 0x10;
        plStack_58 = plVar7;
        plStack_50 = (long *)lVar11;
        plStack_48 = (long *)lVar11;
        FUN_10aafd138(lVar11,0,&uStack_9c,&uStack_98);
        plStack_48 = (long *)(lVar11 + 0x80);
        lVar11 = lVar11 + (*plVar8 - *plVar1);
        FUN_10a7fd788(plVar8,*plVar8,*plVar1,lVar11);
        plVar8 = plStack_48;
        plStack_58 = *(long **)(param_1 + 400);
        *(long *)(param_1 + 400) = lVar11;
        uVar10 = *(undefined8 *)(param_1 + 0x1a0);
        *(long **)(param_1 + 0x1a0) = plStack_40;
        *plVar1 = (long)plStack_48;
        plStack_50 = plStack_58;
        plStack_48 = plStack_58;
        plStack_40 = (long *)uVar10;
        func_0x00010a7fd838(&plStack_58);
      }
      *plVar1 = (long)plVar8;
      func_0x000107c2b054(&plStack_58,&DAT_10f68f0c6);
      func_0x00010726db4c(param_1 + 0x1a8,&plStack_58,&plStack_58);
    }
  }
  return;
}



/* Entry: 10aaf5828; end: 10aaf5843;  */

void FUN_10aaf5828(undefined8 *param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined8 *puVar3;
  long lVar4;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  lVar1 = *(long *)(param_2 + 400);
  lVar2 = *(long *)(param_2 + 0x198);
  lVar4 = lVar2 - lVar1 >> 7;
  if (lVar4 != 0) {
    FUN_10a041f30(param_1,lVar4);
    puVar3 = param_1;
    FUN_10a041fb0(param_1,lVar1,lVar2,param_1[1]);
    param_1[1] = puVar3;
  }
  return;
}



/* Entry: 10aaf5844; end: 10aaf5927;  */

undefined8 * FUN_10aaf5844(long param_1,undefined8 param_2,ulong param_3)

{
  undefined8 ***pppuVar1;
  undefined8 ***pppuVar2;
  undefined8 *puVar3;
  undefined8 *extraout_x8;
  undefined8 **ppuStack_58;
  ulong uStack_50;
  undefined8 uStack_48;
  
  if (0x7ffffffffffffff7 < param_3) {
    func_0x000109ffde50();
    if ((long)uStack_48 < 0) {
      __ZdlPv(ppuStack_58);
    }
    __Unwind_Resume(param_1);
    puVar3 = (undefined8 *)0x20;
    __Znwm();
    *extraout_x8 = puVar3;
    extraout_x8[2] = 0x8000000000000020;
    extraout_x8[1] = 0x19;
    puVar3[1] = 0x656a624f6d6f7473;
    *puVar3 = 0x75432e7465737341;
    *(undefined8 *)((long)puVar3 + 0x11) = 0x7465737341443374;
    *(undefined8 *)((long)puVar3 + 9) = 0x63656a624f6d6f74;
    *(undefined1 *)((long)puVar3 + 0x19) = 0;
    return puVar3;
  }
  if (param_3 < 0x17) {
    uStack_48 = CONCAT17((char)param_3,(undefined7)uStack_48);
    pppuVar2 = &ppuStack_58;
    if (param_3 == 0) goto LAB_10aaf58c4;
  }
  else {
    pppuVar1 = (undefined8 ***)0x19;
    if ((param_3 | 7) != 0x17) {
      pppuVar1 = (undefined8 ***)((param_3 | 7) + 1);
    }
    pppuVar2 = pppuVar1;
    __Znwm();
    uStack_48 = (ulong)pppuVar1 | 0x8000000000000000;
    ppuStack_58 = pppuVar2;
    uStack_50 = param_3;
  }
  _memmove(pppuVar2,param_2,param_3);
LAB_10aaf58c4:
  *(undefined1 *)((long)pppuVar2 + param_3) = 0;
  param_1 = param_1 + 0x1a8;
  func_0x0001067e045c(param_1,&ppuStack_58);
  if ((long)uStack_48 < 0) {
    __ZdlPv(ppuStack_58);
  }
  return (undefined8 *)(ulong)(param_1 != 0);
}



/* Entry: 10aaf5928; end: 10aaf59c7;  */

void FUN_10aaf5928(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)0x20;
  __Znwm();
  *param_1 = puVar1;
  param_1[2] = 0x8000000000000020;
  param_1[1] = 0x19;
  puVar1[1] = 0x656a624f6d6f7473;
  *puVar1 = 0x75432e7465737341;
  *(undefined8 *)((long)puVar1 + 0x11) = 0x7465737341443374;
  *(undefined8 *)((long)puVar1 + 9) = 0x63656a624f6d6f74;
  *(undefined1 *)((long)puVar1 + 0x19) = 0;
  return;
}



/* Entry: 10aaf59c8; end: 10aaf5acb;  */

void FUN_10aaf59c8(undefined8 *param_1,long *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 uVar4;
  long lVar5;
  undefined1 auStack_30 [8];
  long *plStack_28;
  
  (**(code **)(*param_2 + 0x50))(auStack_30);
  if (plStack_28 != (long *)0x0) {
    plVar1 = plStack_28 + 1;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (plStack_28 != (long *)0x0) {
      plVar1 = plStack_28 + 1;
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
        (**(code **)(*plStack_28 + 0x10))(plStack_28);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_28);
      }
    }
  }
  uVar4 = 0x68;
  __Znwm();
  FUN_10a11295c();
  *param_1 = uVar4;
  if (plStack_28 != (long *)0x0) {
    plVar1 = plStack_28 + 1;
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
      (**(code **)(*plStack_28 + 0x10))(plStack_28);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_28);
    }
  }
  return;
}



/* Entry: 10aaf5acc; end: 10aaf5b6f;  */

undefined1  [16] FUN_10aaf5acc(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x14;
  auVar1._0_8_ = &UNK_10f68f4c3;
  return auVar1;
}



/* Entry: 10aaf5b70; end: 10aaf5eb7;  */

void FUN_10aaf5b70(ulong param_1)

{
  undefined8 ***pppuVar1;
  undefined8 ***pppuVar2;
  long lVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  code *pcVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  undefined8 **appuStack_c8 [2];
  char cStack_b1;
  undefined **ppuStack_b0;
  undefined8 uStack_a8;
  undefined8 **ppuStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  func_0x000109887da8(appuStack_c8,&UNK_10f68f4c3,0x14);
  pppuVar1 = (undefined8 ***)appuStack_c8[0];
  if (-1 < cStack_b1) {
    pppuVar1 = appuStack_c8;
  }
  *(undefined ***)(param_1 + 0x1b0) = &PTR_DAT_110c46470;
  pppuVar2 = (undefined8 ***)&UNK_10f68e3e8;
  if (pppuVar1 != (undefined8 ***)0x0) {
    pppuVar2 = pppuVar1;
  }
  func_0x000107c2c4dc(param_1 + 0x1b8,pppuVar2);
  uStack_98 = 0;
  uStack_90 = 0;
  uStack_80 = 0xffffffffffffffff;
  uStack_88 = 0x100000064;
  uStack_70 = 0;
  uStack_78 = 0;
  uStack_60 = 0;
  uStack_68 = 0;
  uStack_58 = 0;
  uStack_54 = 0x174;
  uStack_50 = 0xffffffff;
  uStack_48 = 0;
  uStack_40 = 0;
  ppuStack_a0 = pppuVar1;
  func_0x00010a052690(param_1 + 0x168,&ppuStack_a0);
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    ppuStack_b0 = &PTR_DAT_110c46470;
    uStack_a8 = 0;
    ppuStack_a0 = (undefined8 **)&PTR_DAT_110b178e0;
    uStack_98 = 0;
    uStack_90 = CONCAT71(uStack_90._1_7_,1);
    func_0x0001098949cc(param_1,pppuVar1,&ppuStack_b0,&ppuStack_a0);
  }
  if (cStack_b1 < '\0') {
    __ZdlPv(appuStack_c8[0]);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a0605c4(param_1,&DAT_10f68f148,FUN_10ab08b34,0);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&DAT_10f68f0d4,FUN_10ab08cdc,FUN_10ab08d98);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,"width",FUN_10ab08f5c,FUN_10ab09018);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&DAT_10f68f153,FUN_10ab090d0,FUN_10ab0918c);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,"italic",FUN_10ab09244,FUN_10ab092fc);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&DAT_10f68f159,FUN_10ab093c4,FUN_10ab09480);
  }
  *(undefined **)(param_1 + 0x1b0) = PTR___ZTIDn_1103469e8;
  lVar3 = *(long *)(param_1 + 0x170);
  if (*(long *)(param_1 + 0x168) != lVar3) {
    uStack_98 = *(undefined8 *)(lVar3 + -0x60);
    ppuStack_a0 = *(undefined8 ***)(lVar3 + -0x68);
    uStack_78 = *(undefined8 *)(lVar3 + -0x40);
    uVar8 = *(ulong *)(lVar3 + -0x48);
    uVar9 = *(ulong *)(lVar3 + -0x50);
    uStack_90 = *(undefined8 *)(lVar3 + -0x58);
    uStack_68 = *(undefined8 *)(lVar3 + -0x30);
    uStack_70 = *(undefined8 *)(lVar3 + -0x38);
    uStack_60 = *(undefined8 *)(lVar3 + -0x28);
    uStack_40 = *(undefined8 *)(lVar3 + -8);
    uStack_48 = *(undefined8 *)(lVar3 + -0x10);
    uVar10 = *(ulong *)(lVar3 + -0x18);
    uStack_58 = (undefined4)*(undefined8 *)(lVar3 + -0x20);
    uStack_54 = (undefined4)((ulong)*(undefined8 *)(lVar3 + -0x20) >> 0x20);
    uStack_50 = (undefined4)uVar10;
    uStack_4c = (undefined4)(uVar10 >> 0x20);
    *(long *)(param_1 + 0x170) = lVar3 + -0x68;
    uStack_88._4_4_ = (undefined4)(uVar9 >> 0x20);
    uVar4 = uStack_88._4_4_;
    uStack_80._4_4_ = (undefined4)(uVar8 >> 0x20);
    uVar5 = uStack_80._4_4_;
    uVar7 = param_1;
    uStack_88 = uVar9;
    uStack_80 = uVar8;
    FUN_10a0051e8(param_1,uVar9 & 0xffffffff,uVar4,uVar10 & 0xffffffff,uVar8 & 0xffffffff,uVar5);
    if ((uVar7 & 1) == 0) {
      func_0x000109894f40(param_1,1);
      FUN_10a054234(param_1,&ppuStack_a0,param_1 + 0x1b8,&UNK_10f68f4c3,0x14);
      FUN_10a05431c(param_1);
    }
    return;
  }
                    /* WARNING: Does not return */
  pcVar6 = (code *)SoftwareBreakpoint(1,0x10aaf5e9c);
  (*pcVar6)();
}



/* Entry: 10aaf5eb8; end: 10aaf6173;  */

undefined8 * FUN_10aaf5eb8(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  long *plVar1;
  int *piVar2;
  int *piVar3;
  char cVar4;
  bool bVar5;
  long lVar6;
  int *piVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uStack_50;
  long *plStack_48;
  
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = &PTR_FUN_110c464b8;
  param_1[1] = &PTR_DAT_110c46510;
  uVar10 = param_3[1];
  uVar9 = *param_3;
  param_1[6] = param_3[2];
  param_1[5] = uVar10;
  param_1[4] = uVar9;
  param_3[1] = 0;
  param_3[2] = 0;
  *param_3 = 0;
  param_1[0xb] = 0;
  param_1[10] = 0;
  param_1[7] = 0x42c8000043c80000;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined1 *)((long)param_1 + 0x44) = 0;
  *(undefined4 *)(param_1 + 9) = 0x42400000;
  param_1[0xd] = 0;
  param_1[0xc] = 0;
  *(undefined4 *)(param_1 + 0xe) = 0x3f800000;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  if (param_2 != (undefined8 *)0x0) {
    FUN_10a9e1ad4(&uStack_50,param_2);
    if (plStack_48 != (long *)0x0) {
      plVar1 = plStack_48 + 2;
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar5) {
          *plVar1 = *plVar1 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
    lVar6 = param_1[0x10];
    param_1[0x10] = plStack_48;
    param_1[0xf] = uStack_50;
    if (lVar6 != 0) {
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
    if (plStack_48 != (long *)0x0) {
      plVar1 = plStack_48 + 1;
      do {
        lVar6 = *plVar1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar5) {
          *plVar1 = lVar6 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (lVar6 == 0) {
        (**(code **)(*plStack_48 + 0x10))(plStack_48);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_48);
      }
    }
    FUN_10ab19e5c();
    piVar3 = (int *)param_2[1];
    for (piVar2 = (int *)*param_2; piVar2 != piVar3; piVar2 = piVar2 + 0x10) {
      cVar4 = *(char *)((long)piVar2 + 0x17);
      lVar6 = (long)cVar4;
      piVar7 = piVar2;
      lVar8 = lVar6;
      if (lVar6 < 0) {
        piVar7 = *(int **)piVar2;
        lVar8 = *(long *)(piVar2 + 2);
      }
      if ((lVar8 == 4) && (*piVar7 == 0x74686777)) {
        *(int *)(param_1 + 7) = piVar2[0xd];
      }
      else {
        piVar7 = piVar2;
        lVar8 = lVar6;
        if (cVar4 < '\0') {
          piVar7 = *(int **)piVar2;
          lVar8 = *(long *)(piVar2 + 2);
        }
        if ((lVar8 == 4) && (*piVar7 == 0x68746477)) {
          *(int *)((long)param_1 + 0x3c) = piVar2[0xd];
        }
        else {
          piVar7 = piVar2;
          lVar8 = lVar6;
          if (cVar4 < '\0') {
            piVar7 = *(int **)piVar2;
            lVar8 = *(long *)(piVar2 + 2);
          }
          if ((lVar8 == 4) && (*piVar7 == 0x746e6c73)) {
            *(int *)(param_1 + 8) = piVar2[0xd];
          }
          else {
            piVar7 = piVar2;
            lVar8 = lVar6;
            if (cVar4 < '\0') {
              piVar7 = *(int **)piVar2;
              lVar8 = *(long *)(piVar2 + 2);
            }
            if ((lVar8 == 4) && (*piVar7 == 0x6c617469)) {
              *(bool *)((long)param_1 + 0x44) = 0.5 <= (float)piVar2[0xd];
            }
            else {
              piVar7 = piVar2;
              if (cVar4 < '\0') {
                lVar6 = *(long *)(piVar2 + 2);
                piVar7 = *(int **)piVar2;
              }
              if ((lVar6 == 4) && (*piVar7 == 0x7a73706f)) {
                *(int *)(param_1 + 9) = piVar2[0xd];
              }
            }
          }
        }
      }
    }
  }
  return param_1;
}



/* Entry: 10aaf6174; end: 10aaf621f;  */

void FUN_10aaf6174(long param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  undefined8 uStack_30;
  long *plStack_28;
  
  if (param_2 == 0) {
    uStack_30 = 0;
    plVar5 = (long *)0x0;
  }
  else {
    FUN_10a9e1ad4(&uStack_30,param_2);
    plVar5 = plStack_28;
    if (plStack_28 != (long *)0x0) {
      plVar1 = plStack_28 + 2;
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
  lVar4 = *(long *)(param_1 + 0x80);
  *(undefined8 *)(param_1 + 0x78) = uStack_30;
  *(long **)(param_1 + 0x80) = plVar5;
  if (lVar4 != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  if ((param_2 != 0) && (plStack_28 != (long *)0x0)) {
    plVar5 = plStack_28 + 1;
    do {
      lVar4 = *plVar5;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar3) {
        *plVar5 = lVar4 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar4 == 0) {
      (**(code **)(*plStack_28 + 0x10))(plStack_28);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_28);
    }
  }
  return;
}



/* Entry: 10aaf6220; end: 10aaf64bb;  */

void FUN_10aaf6220(undefined8 *param_1,long param_2,long *param_3)

{
  ulong uVar1;
  int *piVar2;
  byte bVar3;
  char cVar4;
  bool bVar5;
  int *piVar6;
  long lVar7;
  int *piVar8;
  long lVar9;
  int *piVar10;
  undefined4 uStack_74;
  
  piVar8 = (int *)param_3[1];
  piVar2 = (int *)*param_3;
  for (piVar10 = piVar2; piVar10 != piVar8; piVar10 = piVar10 + 0x10) {
    bVar3 = *(byte *)((long)piVar10 + 0x17);
    uVar1 = *(ulong *)(piVar10 + 2);
    if (-1 < (char)bVar3) {
      uVar1 = (ulong)bVar3;
    }
    if (uVar1 == 4) {
      piVar6 = *(int **)piVar10;
      if (-1 < (char)bVar3) {
        piVar6 = piVar10;
      }
      if (*piVar6 == 0x6c617469) {
        bVar5 = true;
        goto LAB_10aaf62b8;
      }
    }
  }
  bVar5 = false;
LAB_10aaf62b8:
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  func_0x0001073b504c(param_1,(long)piVar8 - (long)piVar2 >> 6);
  piVar10 = (int *)*param_3;
  piVar2 = (int *)param_3[1];
  if (piVar10 != piVar2) {
    do {
      cVar4 = *(char *)((long)piVar10 + 0x17);
      lVar7 = (long)cVar4;
      piVar8 = piVar10;
      lVar9 = lVar7;
      if (lVar7 < 0) {
        piVar8 = *(int **)piVar10;
        lVar9 = *(long *)(piVar10 + 2);
      }
      if ((lVar9 == 4) && (piVar6 = (int *)(param_2 + 0x38), *piVar8 == 0x74686777)) {
LAB_10aaf6434:
        FUN_10a0ca014(param_1,piVar6);
      }
      else {
        piVar8 = piVar10;
        lVar9 = lVar7;
        if (cVar4 < '\0') {
          piVar8 = *(int **)piVar10;
          lVar9 = *(long *)(piVar10 + 2);
        }
        if ((lVar9 == 4) && (piVar6 = (int *)(param_2 + 0x3c), *piVar8 == 0x68746477))
        goto LAB_10aaf6434;
        piVar8 = piVar10;
        lVar9 = lVar7;
        if (cVar4 < '\0') {
          piVar8 = *(int **)piVar10;
          lVar9 = *(long *)(piVar10 + 2);
        }
        if ((lVar9 == 4) && (*piVar8 == 0x746e6c73)) {
          piVar6 = (int *)(param_2 + 0x40);
          if ((!bVar5) && (piVar6 = piVar10 + 0xc, *(char *)(param_2 + 0x44) == '\0')) {
            piVar6 = (int *)(param_2 + 0x40);
          }
          goto LAB_10aaf6434;
        }
        piVar8 = piVar10;
        lVar9 = lVar7;
        if (cVar4 < '\0') {
          piVar8 = *(int **)piVar10;
          lVar9 = *(long *)(piVar10 + 2);
        }
        if ((lVar9 == 4) && (*piVar8 == 0x6c617469)) {
          uStack_74 = 0x3f800000;
          if (*(char *)(param_2 + 0x44) == '\0') {
            uStack_74 = 0;
          }
          FUN_10a001c34(param_1,&uStack_74);
        }
        else {
          piVar8 = piVar10;
          if (cVar4 < '\0') {
            lVar7 = *(long *)(piVar10 + 2);
            piVar8 = *(int **)piVar10;
          }
          if ((lVar7 == 4) && (piVar6 = (int *)(param_2 + 0x48), *piVar8 == 0x7a73706f))
          goto LAB_10aaf6434;
          lVar7 = param_2 + 0x50;
          func_0x0001094cb180(lVar7,piVar10);
          piVar8 = piVar10 + 0xd;
          if (lVar7 != 0) {
            piVar8 = (int *)(lVar7 + 0x28);
          }
          FUN_10a0ca014(param_1,piVar8);
        }
      }
      piVar10 = piVar10 + 0x10;
    } while (piVar10 != piVar2);
  }
  return;
}



/* Entry: 10aaf64bc; end: 10aaf673b;  */

void FUN_10aaf64bc(undefined4 param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  
  *(undefined4 *)(param_2 + 0x38) = param_1;
  plVar4 = *(long **)(param_2 + 0x80);
  if ((plVar4 != (long *)0x0) && (__ZNSt3__119__shared_weak_count4lockEv(), plVar4 != (long *)0x0))
  {
    lVar5 = *(long *)(param_2 + 0x78);
    if (lVar5 != 0) {
      *(long *)(lVar5 + 0x118) = *(long *)(lVar5 + 0x118) + 1;
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
  return;
}



/* Entry: 10aaf673c; end: 10aaf6923;  */

/* WARNING: Removing unreachable block (ram,0x00010a368114) */
/* WARNING: Removing unreachable block (ram,0x00010a36811c) */

void FUN_10aaf673c(long param_1,int *param_2,long param_3)

{
  int *piVar1;
  ulong uVar2;
  byte bVar3;
  char cVar4;
  bool bVar5;
  long *plVar6;
  long *plVar7;
  long lVar8;
  undefined4 uVar9;
  long *plStack_50;
  long *plStack_48;
  
  bVar3 = *(byte *)((long)param_2 + 0x17);
  uVar2 = *(ulong *)(param_2 + 2);
  if (-1 < (char)bVar3) {
    uVar2 = (ulong)bVar3;
  }
  if (uVar2 != 4) {
LAB_10aaf67ec:
    plVar6 = *(long **)(param_1 + 0x80);
    if ((plVar6 != (long *)0x0) && (__ZNSt3__119__shared_weak_count4lockEv(), plVar6 != (long *)0x0)
       ) {
      plVar7 = *(long **)(param_1 + 0x78);
      plStack_50 = plVar7;
      plStack_48 = plVar6;
      if (plVar7 != (long *)0x0) {
        FUN_10ab19e5c();
        uVar2 = *(ulong *)(param_2 + 2);
        piVar1 = *(int **)param_2;
        if (-1 < (char)*(byte *)((long)param_2 + 0x17)) {
          uVar2 = (ulong)*(byte *)((long)param_2 + 0x17);
          piVar1 = param_2;
        }
        lVar8 = *plVar7;
        FUN_10aaf6924(lVar8,plVar7[1],piVar1,uVar2);
        if (lVar8 != 0) {
          param_1 = param_1 + 0x50;
          func_0x0001094f1dec(param_1,param_2);
          lVar8 = lVar8 + 0x34;
          if (param_1 != 0) {
            lVar8 = param_1 + 0x28;
          }
          FUN_10a3680dc(param_3,lVar8);
        }
      }
      plVar7 = plVar6 + 1;
      do {
        lVar8 = *plVar7;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar7,0x10);
        if (bVar5) {
          *plVar7 = lVar8 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (lVar8 == 0) {
        (**(code **)(*plVar6 + 0x10))(plVar6);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
      }
    }
    return;
  }
  piVar1 = *(int **)param_2;
  if (-1 < (char)bVar3) {
    piVar1 = param_2;
  }
  if (((*piVar1 != 0x74686777) && (*piVar1 != 0x68746477)) && (*piVar1 != 0x746e6c73)) {
    if (*piVar1 == 0x6c617469) {
      uVar9 = 0x3f800000;
      if (*(char *)(param_1 + 0x44) == '\0') {
        uVar9 = 0;
      }
      plStack_50 = (long *)CONCAT44(plStack_50._4_4_,uVar9);
      FUN_10a3680dc(param_3,&plStack_50);
      return;
    }
    if (*piVar1 != 0x7a73706f) goto LAB_10aaf67ec;
  }
  func_0x0001098968d0(param_3 + 8,&stack0xffffffffffffffe0);
  return;
}



/* Entry: 10aaf6924; end: 10aaf69ab;  */

long * FUN_10aaf6924(long *param_1,long *param_2,undefined8 param_3,ulong param_4)

{
  ulong uVar1;
  long *plVar2;
  byte bVar3;
  undefined8 uVar4;
  long *plVar5;
  
  plVar5 = param_1;
  for (; param_1 != param_2; param_1 = param_1 + 8) {
    bVar3 = *(byte *)((long)param_1 + 0x17);
    uVar1 = param_1[1];
    if (-1 < (char)bVar3) {
      uVar1 = (ulong)bVar3;
    }
    if (param_4 == uVar1) {
      plVar5 = (long *)*param_1;
      if (-1 < (char)bVar3) {
        plVar5 = param_1;
      }
      uVar4 = param_3;
      _memcmp(param_3,plVar5,param_4);
      plVar5 = param_1;
      if ((int)uVar4 == 0) break;
    }
    plVar5 = param_2;
  }
  plVar2 = (long *)0x0;
  if (plVar5 != param_2) {
    plVar2 = plVar5;
  }
  return plVar2;
}



/* Entry: 10aaf69ac; end: 10aaf6c23;  */

void FUN_10aaf69ac(float param_1,long param_2,int *param_3,undefined8 param_4)

{
  int *piVar1;
  ulong uVar2;
  byte bVar3;
  char cVar4;
  bool bVar5;
  long *plVar6;
  long *plVar7;
  long lVar8;
  long *plVar9;
  undefined1 uStack_59;
  int *piStack_58;
  
  bVar3 = *(byte *)((long)param_3 + 0x17);
  uVar2 = *(ulong *)(param_3 + 2);
  if (-1 < (char)bVar3) {
    uVar2 = (ulong)bVar3;
  }
  if (uVar2 == 4) {
    piVar1 = *(int **)param_3;
    if (-1 < (char)bVar3) {
      piVar1 = param_3;
    }
    if (*piVar1 == 0x74686777) {
      FUN_10a36be44(param_4);
      *(float *)(param_2 + 0x38) = param_1;
      plVar6 = *(long **)(param_2 + 0x80);
      if ((plVar6 != (long *)0x0) &&
         (__ZNSt3__119__shared_weak_count4lockEv(), plVar6 != (long *)0x0)) {
        lVar8 = *(long *)(param_2 + 0x78);
        if (lVar8 != 0) {
          *(long *)(lVar8 + 0x118) = *(long *)(lVar8 + 0x118) + 1;
        }
        plVar9 = plVar6 + 1;
        do {
          lVar8 = *plVar9;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar9,0x10);
          if (bVar5) {
            *plVar9 = lVar8 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (lVar8 == 0) {
          (**(code **)(*plVar6 + 0x10))(plVar6);
code_r0x00010bdbd2cc:
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)PTR___ZNSt3__119__shared_weak_count14__release_weakEv_110346648)(plVar6);
          return;
        }
      }
      return;
    }
    if (*piVar1 == 0x68746477) {
      FUN_10a36be44(param_4);
      *(float *)(param_2 + 0x3c) = param_1;
      plVar6 = *(long **)(param_2 + 0x80);
      if ((plVar6 != (long *)0x0) &&
         (__ZNSt3__119__shared_weak_count4lockEv(), plVar6 != (long *)0x0)) {
        lVar8 = *(long *)(param_2 + 0x78);
        if (lVar8 != 0) {
          *(long *)(lVar8 + 0x118) = *(long *)(lVar8 + 0x118) + 1;
        }
        plVar9 = plVar6 + 1;
        do {
          lVar8 = *plVar9;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar9,0x10);
          if (bVar5) {
            *plVar9 = lVar8 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (lVar8 == 0) {
          (**(code **)(*plVar6 + 0x10))(plVar6);
          goto code_r0x00010bdbd2cc;
        }
      }
      return;
    }
    if (*piVar1 == 0x746e6c73) {
      FUN_10a36be44(param_4);
      *(float *)(param_2 + 0x40) = param_1;
      plVar6 = *(long **)(param_2 + 0x80);
      if ((plVar6 != (long *)0x0) &&
         (__ZNSt3__119__shared_weak_count4lockEv(), plVar6 != (long *)0x0)) {
        lVar8 = *(long *)(param_2 + 0x78);
        if (lVar8 != 0) {
          *(long *)(lVar8 + 0x118) = *(long *)(lVar8 + 0x118) + 1;
        }
        plVar9 = plVar6 + 1;
        do {
          lVar8 = *plVar9;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar9,0x10);
          if (bVar5) {
            *plVar9 = lVar8 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (lVar8 == 0) {
          (**(code **)(*plVar6 + 0x10))(plVar6);
          goto code_r0x00010bdbd2cc;
        }
      }
      return;
    }
    if (*piVar1 == 0x6c617469) {
      FUN_10a36be44(param_4);
      *(bool *)(param_2 + 0x44) = 0.5 <= param_1;
      plVar6 = *(long **)(param_2 + 0x80);
      if ((plVar6 != (long *)0x0) &&
         (__ZNSt3__119__shared_weak_count4lockEv(), plVar6 != (long *)0x0)) {
        lVar8 = *(long *)(param_2 + 0x78);
        if (lVar8 != 0) {
          *(long *)(lVar8 + 0x118) = *(long *)(lVar8 + 0x118) + 1;
        }
        plVar9 = plVar6 + 1;
        do {
          lVar8 = *plVar9;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar9,0x10);
          if (bVar5) {
            *plVar9 = lVar8 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (lVar8 == 0) {
          (**(code **)(*plVar6 + 0x10))(plVar6);
          goto code_r0x00010bdbd2cc;
        }
      }
      return;
    }
    if (*piVar1 == 0x7a73706f) {
      FUN_10a36be44(param_4);
      *(float *)(param_2 + 0x48) = param_1;
      plVar6 = *(long **)(param_2 + 0x80);
      if ((plVar6 != (long *)0x0) &&
         (__ZNSt3__119__shared_weak_count4lockEv(), plVar6 != (long *)0x0)) {
        lVar8 = *(long *)(param_2 + 0x78);
        if (lVar8 != 0) {
          *(long *)(lVar8 + 0x118) = *(long *)(lVar8 + 0x118) + 1;
        }
        plVar9 = plVar6 + 1;
        do {
          lVar8 = *plVar9;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar9,0x10);
          if (bVar5) {
            *plVar9 = lVar8 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (lVar8 == 0) {
          (**(code **)(*plVar6 + 0x10))(plVar6);
          goto code_r0x00010bdbd2cc;
        }
      }
      return;
    }
  }
  plVar6 = *(long **)(param_2 + 0x80);
  if ((plVar6 != (long *)0x0) && (__ZNSt3__119__shared_weak_count4lockEv(), plVar6 != (long *)0x0))
  {
    plVar9 = *(long **)(param_2 + 0x78);
    if (plVar9 != (long *)0x0) {
      plVar7 = plVar9;
      FUN_10ab19e5c();
      uVar2 = *(ulong *)(param_3 + 2);
      piVar1 = *(int **)param_3;
      if (-1 < (char)*(byte *)((long)param_3 + 0x17)) {
        uVar2 = (ulong)*(byte *)((long)param_3 + 0x17);
        piVar1 = param_3;
      }
      lVar8 = *plVar7;
      FUN_10aaf6924(lVar8,plVar7[1],piVar1,uVar2);
      if (lVar8 != 0) {
        FUN_10a36be44(param_4);
        param_2 = param_2 + 0x50;
        piStack_58 = param_3;
        func_0x0001094e6524(param_2,param_3,&UNK_10dd5b8f9,&piStack_58,&uStack_59);
        *(float *)(param_2 + 0x28) = param_1;
        plVar9[0x23] = plVar9[0x23] + 1;
      }
    }
    plVar9 = plVar6 + 1;
    do {
      lVar8 = *plVar9;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar5) {
        *plVar9 = lVar8 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar8 == 0) {
      (**(code **)(*plVar6 + 0x10))(plVar6);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
    }
  }
  return;
}



/* Entry: 10aaf6c24; end: 10aaf6d8b;  */

bool FUN_10aaf6c24(long param_1,int *param_2)

{
  ulong uVar1;
  char cVar2;
  bool bVar3;
  int *piVar4;
  bool bVar5;
  long *plVar6;
  long *plVar7;
  long lVar8;
  
  uVar1 = *(ulong *)(param_2 + 2);
  piVar4 = *(int **)param_2;
  if (-1 < (char)*(byte *)((long)param_2 + 0x17)) {
    uVar1 = (ulong)*(byte *)((long)param_2 + 0x17);
    piVar4 = param_2;
  }
  if ((uVar1 == 4) &&
     ((((*piVar4 == 0x74686777 || (*piVar4 == 0x68746477)) || (*piVar4 == 0x746e6c73)) ||
      ((*piVar4 == 0x6c617469 || (*piVar4 == 0x7a73706f)))))) {
    bVar5 = true;
  }
  else {
    plVar6 = *(long **)(param_1 + 0x80);
    if ((plVar6 == (long *)0x0) || (__ZNSt3__119__shared_weak_count4lockEv(), plVar6 == (long *)0x0)
       ) {
      bVar5 = false;
    }
    else {
      plVar7 = *(long **)(param_1 + 0x78);
      if (plVar7 == (long *)0x0) {
        bVar5 = false;
      }
      else {
        FUN_10ab19e5c();
        uVar1 = *(ulong *)(param_2 + 2);
        piVar4 = *(int **)param_2;
        if (-1 < (char)*(byte *)((long)param_2 + 0x17)) {
          uVar1 = (ulong)*(byte *)((long)param_2 + 0x17);
          piVar4 = param_2;
        }
        lVar8 = *plVar7;
        FUN_10aaf6924(lVar8,plVar7[1],piVar4,uVar1);
        bVar5 = lVar8 != 0;
      }
      plVar7 = plVar6 + 1;
      do {
        lVar8 = *plVar7;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar7,0x10);
        if (bVar3) {
          *plVar7 = lVar8 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar8 == 0) {
        (**(code **)(*plVar6 + 0x10))(plVar6);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
      }
    }
  }
  return bVar5;
}



/* Entry: 10aaf6d8c; end: 10aaf6f17;  */

void FUN_10aaf6d8c(undefined8 *param_1,long param_2)

{
  long *plVar1;
  int *piVar2;
  int *piVar3;
  char cVar4;
  bool bVar5;
  long *plVar6;
  undefined8 *puVar7;
  int *piVar8;
  long lVar9;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  plVar6 = *(long **)(param_2 + 0x80);
  if ((plVar6 != (long *)0x0) && (__ZNSt3__119__shared_weak_count4lockEv(), plVar6 != (long *)0x0))
  {
    puVar7 = *(undefined8 **)(param_2 + 0x78);
    if (puVar7 != (undefined8 *)0x0) {
      FUN_10ab19e5c();
      piVar3 = (int *)puVar7[1];
      for (piVar2 = (int *)*puVar7; piVar2 != piVar3; piVar2 = piVar2 + 0x10) {
        lVar9 = (long)*(char *)((long)piVar2 + 0x17);
        piVar8 = piVar2;
        if (lVar9 < 0) {
          lVar9 = *(long *)(piVar2 + 2);
          piVar8 = *(int **)piVar2;
        }
        if ((lVar9 != 4) ||
           ((((*piVar8 != 0x74686777 && (*piVar8 != 0x68746477)) && (*piVar8 != 0x746e6c73)) &&
            ((*piVar8 != 0x6c617469 && (*piVar8 != 0x7a73706f)))))) {
          FUN_10a0b4ec0(param_1,piVar2);
        }
      }
    }
    plVar1 = plVar6 + 1;
    do {
      lVar9 = *plVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar5) {
        *plVar1 = lVar9 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar9 == 0) {
      (**(code **)(*plVar6 + 0x10))(plVar6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___ZNSt3__119__shared_weak_count14__release_weakEv_110346648)(plVar6);
      return;
    }
  }
  return;
}



/* Entry: 10aaf6f18; end: 10aaf7993;  */

void FUN_10aaf6f18(long *param_1,long param_2)

{
  undefined8 *puVar1;
  char *pcVar2;
  undefined8 ******ppppppuVar3;
  int *piVar4;
  char cVar5;
  code *pcVar6;
  long *plVar7;
  long *plVar8;
  undefined8 *******pppppppuVar9;
  undefined8 *******pppppppuVar10;
  undefined8 *******pppppppuVar11;
  bool bVar12;
  long lVar13;
  int *piVar14;
  long lVar15;
  byte bVar16;
  int *piVar17;
  ulong uVar18;
  ulong uVar19;
  ulong uVar20;
  int iVar21;
  undefined8 ******ppppppuStack_e0;
  ulong uStack_d8;
  byte bStack_c9;
  undefined8 ******ppppppuStack_c8;
  ulong uStack_c0;
  byte bStack_b1;
  undefined8 ******ppppppuStack_b0;
  undefined8 *****pppppuStack_a8;
  undefined8 *****pppppuStack_a0;
  long *plStack_98;
  long *plStack_90;
  undefined8 ******ppppppuStack_88;
  ulong uStack_80;
  ulong uStack_78;
  
  uVar19 = *(ulong *)(param_2 + 0x28);
  if (-1 < (char)*(byte *)(param_2 + 0x37)) {
    uVar19 = (ulong)*(byte *)(param_2 + 0x37);
  }
  FUN_10a003c90(&ppppppuStack_88,uVar19 + 2,&ppppppuStack_b0);
  pppppppuVar11 = (undefined8 *******)ppppppuStack_88;
  if (-1 < (long)uStack_78) {
    pppppppuVar11 = &ppppppuStack_88;
  }
  if (uVar19 != 0) {
    plVar7 = (long *)*(long *)(param_2 + 0x20);
    if (-1 < *(char *)(param_2 + 0x37)) {
      plVar7 = (long *)(param_2 + 0x20);
    }
    _memmove(pppppppuVar11,plVar7,uVar19);
  }
  *(undefined2 *)((long)pppppppuVar11 + uVar19) = 0x7b20;
  *(undefined1 *)((undefined2 *)((long)pppppppuVar11 + uVar19) + 1) = 0;
  plStack_98 = (long *)0x0;
  plStack_90 = (long *)0x0;
  plVar7 = *(long **)(param_2 + 0x80);
  if (((plVar7 == (long *)0x0) ||
      (__ZNSt3__119__shared_weak_count4lockEv(), plStack_90 = plVar7, plVar7 == (long *)0x0)) ||
     (plVar8 = *(long **)(param_2 + 0x78), plStack_98 = plVar8, plVar8 == (long *)0x0)) {
    plVar7 = plStack_90;
    uVar19 = uStack_80;
    if (-1 < (long)uStack_78) {
      uVar19 = uStack_78 >> 0x38;
    }
    FUN_10a003c90(param_1,uVar19 + 0x38,&ppppppuStack_b0);
    plVar8 = (long *)*param_1;
    if (-1 < *(char *)((long)param_1 + 0x17)) {
      plVar8 = param_1;
    }
    if (uVar19 != 0) {
      pppppppuVar11 = (undefined8 *******)ppppppuStack_88;
      if (-1 < (long)uStack_78) {
        pppppppuVar11 = &ppppppuStack_88;
      }
      _memmove(plVar8,pppppppuVar11,uVar19);
    }
    puVar1 = (undefined8 *)((long)plVar8 + uVar19);
    puVar1[1] = 0x2073616820746e6f;
    *puVar1 = 0x4620676e696e776f;
    puVar1[3] = 0x202c6465796f7274;
    puVar1[2] = 0x736564206e656562;
    puVar1[5] = 0x76616e7520616d65;
    puVar1[4] = 0x6863732073697861;
    puVar1[6] = 0x7d656c62616c6961;
    *(undefined1 *)(puVar1 + 7) = 0;
  }
  else {
    FUN_10ab19e5c();
    piVar17 = (int *)*plVar8;
    piVar4 = (int *)plVar8[1];
    if (piVar17 != piVar4) {
      bVar12 = true;
      do {
        if (!bVar12) {
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                    (&ppppppuStack_88,&DAT_10f68f19e,2);
        }
        cVar5 = *(char *)((long)piVar17 + 0x17);
        lVar13 = (long)cVar5;
        piVar14 = piVar17;
        lVar15 = lVar13;
        if (lVar13 < 0) {
          piVar14 = *(int **)piVar17;
          lVar15 = *(long *)(piVar17 + 2);
        }
        if ((lVar15 == 4) && (*piVar14 == 0x74686777)) {
          __ZNSt3__19to_stringEf(&ppppppuStack_c8,*(undefined4 *)(param_2 + 0x38));
          bVar16 = bStack_b1;
          uVar18 = uStack_c0;
          pppppppuVar11 = (undefined8 *******)ppppppuStack_c8;
          uVar20 = (ulong)bStack_b1;
          uVar19 = uStack_c0;
          if (-1 < (char)bStack_b1) {
            uVar19 = uVar20;
          }
          if (uVar19 != 0) {
            pppppppuVar10 = (undefined8 *******)ppppppuStack_c8;
            if (-1 < (char)bStack_b1) {
              pppppppuVar10 = &ppppppuStack_c8;
            }
            pppppppuVar9 = pppppppuVar10;
            _memchr(pppppppuVar10,0x2e,uVar19);
            if ((pppppppuVar9 != (undefined8 *******)0x0) &&
               ((long)pppppppuVar9 - (long)pppppppuVar10 != 0xffffffffffffffff)) {
              do {
                if (uVar19 == 0) {
                  uVar19 = 0xffffffffffffffff;
                  break;
                }
                lVar13 = uVar19 - 1;
                uVar19 = uVar19 - 1;
              } while (*(char *)((long)pppppppuVar10 + lVar13) == '0');
              uVar19 = (uVar19 - (uVar19 == (long)pppppppuVar9 - (long)pppppppuVar10)) + 1;
              if ((char)bVar16 < '\0') {
                uVar20 = uVar19;
                if (uVar18 < uVar19) goto LAB_10aaf7894;
              }
              else {
                if (uVar20 < uVar19) {
LAB_10aaf7894:
                  FUN_109ffddc8();
LAB_10aaf78b0:
                    /* WARNING: Does not return */
                  pcVar6 = (code *)SoftwareBreakpoint(1,0x10aaf78b4);
                  (*pcVar6)();
                }
                bStack_b1 = (byte)uVar19;
                pppppppuVar11 = &ppppppuStack_c8;
                uVar20 = uStack_c0;
              }
              uStack_c0 = uVar20;
              *(undefined1 *)((long)pppppppuVar11 + uVar19) = 0;
            }
          }
          pppppppuVar11 = &ppppppuStack_c8;
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6insertEmPKcm
                    (pppppppuVar11,0,&UNK_10f68f1a1,8);
          pppppuStack_a8 = pppppppuVar11[1];
          ppppppuStack_b0 = *pppppppuVar11;
          pppppuStack_a0 = pppppppuVar11[2];
          pppppppuVar11[1] = (undefined8 ******)0x0;
          pppppppuVar11[2] = (undefined8 ******)0x0;
          *pppppppuVar11 = (undefined8 ******)0x0;
          ppppppuVar3 = (undefined8 ******)pppppuStack_a8;
          pppppppuVar11 = (undefined8 *******)ppppppuStack_b0;
          if (-1 < (long)pppppuStack_a0) {
            ppppppuVar3 = (undefined8 ******)((ulong)pppppuStack_a0 >> 0x38);
            pppppppuVar11 = &ppppppuStack_b0;
          }
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                    (&ppppppuStack_88,pppppppuVar11,ppppppuVar3);
LAB_10aaf7738:
          pppppppuVar11 = (undefined8 *******)ppppppuStack_b0;
          if ((long)pppppuStack_a0 < 0) {
LAB_10aaf7744:
            __ZdlPv(pppppppuVar11);
          }
        }
        else {
          piVar14 = piVar17;
          lVar15 = lVar13;
          if (cVar5 < '\0') {
            piVar14 = *(int **)piVar17;
            lVar15 = *(long *)(piVar17 + 2);
          }
          if ((lVar15 == 4) && (*piVar14 == 0x68746477)) {
            __ZNSt3__19to_stringEf(&ppppppuStack_c8,*(undefined4 *)(param_2 + 0x3c));
            bVar16 = bStack_b1;
            uVar18 = uStack_c0;
            pppppppuVar11 = (undefined8 *******)ppppppuStack_c8;
            uVar20 = (ulong)bStack_b1;
            uVar19 = uStack_c0;
            if (-1 < (char)bStack_b1) {
              uVar19 = uVar20;
            }
            if (uVar19 != 0) {
              pppppppuVar10 = (undefined8 *******)ppppppuStack_c8;
              if (-1 < (char)bStack_b1) {
                pppppppuVar10 = &ppppppuStack_c8;
              }
              pppppppuVar9 = pppppppuVar10;
              _memchr(pppppppuVar10,0x2e,uVar19);
              if ((pppppppuVar9 != (undefined8 *******)0x0) &&
                 ((long)pppppppuVar9 - (long)pppppppuVar10 != 0xffffffffffffffff)) {
                do {
                  if (uVar19 == 0) {
                    uVar19 = 0xffffffffffffffff;
                    break;
                  }
                  lVar13 = uVar19 - 1;
                  uVar19 = uVar19 - 1;
                } while (*(char *)((long)pppppppuVar10 + lVar13) == '0');
                uVar19 = (uVar19 - (uVar19 == (long)pppppppuVar9 - (long)pppppppuVar10)) + 1;
                if ((char)bVar16 < '\0') {
                  uVar20 = uVar19;
                  if (uVar18 < uVar19) goto LAB_10aaf789c;
                }
                else {
                  if (uVar20 < uVar19) {
LAB_10aaf789c:
                    FUN_109ffddc8();
                    goto LAB_10aaf78b0;
                  }
                  bStack_b1 = (byte)uVar19;
                  pppppppuVar11 = &ppppppuStack_c8;
                  uVar20 = uStack_c0;
                }
                uStack_c0 = uVar20;
                *(undefined1 *)((long)pppppppuVar11 + uVar19) = 0;
              }
            }
            pppppppuVar11 = &ppppppuStack_c8;
            __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6insertEmPKcm
                      (pppppppuVar11,0,&UNK_10f68f1aa,7);
            pppppuStack_a8 = pppppppuVar11[1];
            ppppppuStack_b0 = *pppppppuVar11;
            pppppuStack_a0 = pppppppuVar11[2];
            pppppppuVar11[1] = (undefined8 ******)0x0;
            pppppppuVar11[2] = (undefined8 ******)0x0;
            *pppppppuVar11 = (undefined8 ******)0x0;
            ppppppuVar3 = (undefined8 ******)pppppuStack_a8;
            pppppppuVar11 = (undefined8 *******)ppppppuStack_b0;
            if (-1 < (long)pppppuStack_a0) {
              ppppppuVar3 = (undefined8 ******)((ulong)pppppuStack_a0 >> 0x38);
              pppppppuVar11 = &ppppppuStack_b0;
            }
            __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                      (&ppppppuStack_88,pppppppuVar11,ppppppuVar3);
            goto LAB_10aaf7738;
          }
          piVar14 = piVar17;
          lVar15 = lVar13;
          if (cVar5 < '\0') {
            piVar14 = *(int **)piVar17;
            lVar15 = *(long *)(piVar17 + 2);
          }
          if ((lVar15 == 4) && (*piVar14 == 0x746e6c73)) {
            __ZNSt3__19to_stringEf(&ppppppuStack_c8,*(undefined4 *)(param_2 + 0x40));
            bVar16 = bStack_b1;
            uVar18 = uStack_c0;
            pppppppuVar11 = (undefined8 *******)ppppppuStack_c8;
            uVar20 = (ulong)bStack_b1;
            uVar19 = uStack_c0;
            if (-1 < (char)bStack_b1) {
              uVar19 = uVar20;
            }
            if (uVar19 != 0) {
              pppppppuVar10 = (undefined8 *******)ppppppuStack_c8;
              if (-1 < (char)bStack_b1) {
                pppppppuVar10 = &ppppppuStack_c8;
              }
              pppppppuVar9 = pppppppuVar10;
              _memchr(pppppppuVar10,0x2e,uVar19);
              if ((pppppppuVar9 != (undefined8 *******)0x0) &&
                 ((long)pppppppuVar9 - (long)pppppppuVar10 != 0xffffffffffffffff)) {
                do {
                  if (uVar19 == 0) {
                    uVar19 = 0xffffffffffffffff;
                    break;
                  }
                  lVar13 = uVar19 - 1;
                  uVar19 = uVar19 - 1;
                } while (*(char *)((long)pppppppuVar10 + lVar13) == '0');
                uVar19 = (uVar19 - (uVar19 == (long)pppppppuVar9 - (long)pppppppuVar10)) + 1;
                if ((char)bVar16 < '\0') {
                  uVar20 = uVar19;
                  if (uVar18 < uVar19) goto LAB_10aaf78a4;
                }
                else {
                  if (uVar20 < uVar19) {
LAB_10aaf78a4:
                    FUN_109ffddc8();
                    goto LAB_10aaf78b0;
                  }
                  bStack_b1 = (byte)uVar19;
                  pppppppuVar11 = &ppppppuStack_c8;
                  uVar20 = uStack_c0;
                }
                uStack_c0 = uVar20;
                *(undefined1 *)((long)pppppppuVar11 + uVar19) = 0;
              }
            }
            pppppppuVar11 = &ppppppuStack_c8;
            __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6insertEmPKcm
                      (pppppppuVar11,0,&UNK_10f68f1b2,7);
            pppppuStack_a8 = pppppppuVar11[1];
            ppppppuStack_b0 = *pppppppuVar11;
            pppppuStack_a0 = pppppppuVar11[2];
            pppppppuVar11[1] = (undefined8 ******)0x0;
            pppppppuVar11[2] = (undefined8 ******)0x0;
            *pppppppuVar11 = (undefined8 ******)0x0;
            ppppppuVar3 = (undefined8 ******)pppppuStack_a8;
            pppppppuVar11 = (undefined8 *******)ppppppuStack_b0;
            if (-1 < (long)pppppuStack_a0) {
              ppppppuVar3 = (undefined8 ******)((ulong)pppppuStack_a0 >> 0x38);
              pppppppuVar11 = &ppppppuStack_b0;
            }
            __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                      (&ppppppuStack_88,pppppppuVar11,ppppppuVar3);
            goto LAB_10aaf7738;
          }
          piVar14 = piVar17;
          lVar15 = lVar13;
          if (cVar5 < '\0') {
            piVar14 = *(int **)piVar17;
            lVar15 = *(long *)(piVar17 + 2);
          }
          if ((lVar15 == 4) && (*piVar14 == 0x6c617469)) {
            pcVar2 = "true";
            if (*(char *)(param_2 + 0x44) == '\0') {
              pcVar2 = "false";
            }
            func_0x000107c2b054(&ppppppuStack_c8,pcVar2);
            pppppppuVar11 = &ppppppuStack_c8;
            __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6insertEmPKcm
                      (pppppppuVar11,0,&UNK_10f68f1ba,8);
            pppppuStack_a8 = pppppppuVar11[1];
            ppppppuStack_b0 = *pppppppuVar11;
            pppppuStack_a0 = pppppppuVar11[2];
            pppppppuVar11[1] = (undefined8 ******)0x0;
            pppppppuVar11[2] = (undefined8 ******)0x0;
            *pppppppuVar11 = (undefined8 ******)0x0;
            ppppppuVar3 = (undefined8 ******)pppppuStack_a8;
            pppppppuVar11 = (undefined8 *******)ppppppuStack_b0;
            if (-1 < (long)pppppuStack_a0) {
              ppppppuVar3 = (undefined8 ******)((ulong)pppppuStack_a0 >> 0x38);
              pppppppuVar11 = &ppppppuStack_b0;
            }
            __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                      (&ppppppuStack_88,pppppppuVar11,ppppppuVar3);
            goto LAB_10aaf7738;
          }
          piVar14 = piVar17;
          if (cVar5 < '\0') {
            lVar13 = *(long *)(piVar17 + 2);
            piVar14 = *(int **)piVar17;
          }
          if ((lVar13 == 4) && (*piVar14 == 0x7a73706f)) {
            __ZNSt3__19to_stringEf(&ppppppuStack_c8,*(undefined4 *)(param_2 + 0x48));
            bVar16 = bStack_b1;
            uVar18 = uStack_c0;
            pppppppuVar11 = (undefined8 *******)ppppppuStack_c8;
            uVar20 = (ulong)bStack_b1;
            uVar19 = uStack_c0;
            if (-1 < (char)bStack_b1) {
              uVar19 = uVar20;
            }
            if (uVar19 != 0) {
              pppppppuVar10 = (undefined8 *******)ppppppuStack_c8;
              if (-1 < (char)bStack_b1) {
                pppppppuVar10 = &ppppppuStack_c8;
              }
              pppppppuVar9 = pppppppuVar10;
              _memchr(pppppppuVar10,0x2e,uVar19);
              if ((pppppppuVar9 != (undefined8 *******)0x0) &&
                 ((long)pppppppuVar9 - (long)pppppppuVar10 != 0xffffffffffffffff)) {
                do {
                  if (uVar19 == 0) {
                    uVar19 = 0xffffffffffffffff;
                    break;
                  }
                  lVar13 = uVar19 - 1;
                  uVar19 = uVar19 - 1;
                } while (*(char *)((long)pppppppuVar10 + lVar13) == '0');
                uVar19 = (uVar19 - (uVar19 == (long)pppppppuVar9 - (long)pppppppuVar10)) + 1;
                if ((char)bVar16 < '\0') {
                  uVar20 = uVar19;
                  if (uVar18 < uVar19) goto LAB_10aaf78ac;
                }
                else {
                  if (uVar20 < uVar19) {
LAB_10aaf78ac:
                    FUN_109ffddc8();
                    goto LAB_10aaf78b0;
                  }
                  bStack_b1 = (byte)uVar19;
                  pppppppuVar11 = &ppppppuStack_c8;
                  uVar20 = uStack_c0;
                }
                uStack_c0 = uVar20;
                *(undefined1 *)((long)pppppppuVar11 + uVar19) = 0;
              }
            }
            pppppppuVar11 = &ppppppuStack_c8;
            __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6insertEmPKcm
                      (pppppppuVar11,0,&UNK_10f68f1c3,0xd);
            pppppuStack_a8 = pppppppuVar11[1];
            ppppppuStack_b0 = *pppppppuVar11;
            pppppuStack_a0 = pppppppuVar11[2];
            pppppppuVar11[1] = (undefined8 ******)0x0;
            pppppppuVar11[2] = (undefined8 ******)0x0;
            *pppppppuVar11 = (undefined8 ******)0x0;
            ppppppuVar3 = (undefined8 ******)pppppuStack_a8;
            pppppppuVar11 = (undefined8 *******)ppppppuStack_b0;
            if (-1 < (long)pppppuStack_a0) {
              ppppppuVar3 = (undefined8 ******)((ulong)pppppuStack_a0 >> 0x38);
              pppppppuVar11 = &ppppppuStack_b0;
            }
            __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                      (&ppppppuStack_88,pppppppuVar11,ppppppuVar3);
            goto LAB_10aaf7738;
          }
          lVar13 = param_2 + 0x50;
          func_0x0001094f1dec(lVar13,piVar17);
          piVar14 = piVar17 + 0xd;
          if (lVar13 != 0) {
            piVar14 = (int *)(lVar13 + 0x28);
          }
          iVar21 = *piVar14;
          uVar19 = *(ulong *)(piVar17 + 2);
          if (-1 < (char)*(byte *)((long)piVar17 + 0x17)) {
            uVar19 = (ulong)*(byte *)((long)piVar17 + 0x17);
          }
          FUN_10a003c90(&ppppppuStack_c8,uVar19 + 2,&ppppppuStack_e0);
          pppppppuVar11 = (undefined8 *******)ppppppuStack_c8;
          if (-1 < (char)bStack_b1) {
            pppppppuVar11 = &ppppppuStack_c8;
          }
          if (uVar19 != 0) {
            piVar14 = *(int **)piVar17;
            if (-1 < *(char *)((long)piVar17 + 0x17)) {
              piVar14 = piVar17;
            }
            _memmove(pppppppuVar11,piVar14,uVar19);
          }
          *(undefined2 *)((long)pppppppuVar11 + uVar19) = 0x203a;
          *(undefined1 *)((undefined2 *)((long)pppppppuVar11 + uVar19) + 1) = 0;
          __ZNSt3__19to_stringEf(&ppppppuStack_e0,iVar21);
          bVar16 = bStack_c9;
          uVar18 = uStack_d8;
          pppppppuVar11 = (undefined8 *******)ppppppuStack_e0;
          uVar20 = (ulong)bStack_c9;
          uVar19 = uStack_d8;
          if (-1 < (char)bStack_c9) {
            uVar19 = uVar20;
          }
          if (uVar19 != 0) {
            pppppppuVar10 = (undefined8 *******)ppppppuStack_e0;
            if (-1 < (char)bStack_c9) {
              pppppppuVar10 = &ppppppuStack_e0;
            }
            pppppppuVar9 = pppppppuVar10;
            _memchr(pppppppuVar10,0x2e,uVar19);
            if ((pppppppuVar9 != (undefined8 *******)0x0) &&
               ((long)pppppppuVar9 - (long)pppppppuVar10 != 0xffffffffffffffff)) {
              do {
                if (uVar19 == 0) {
                  uVar19 = 0xffffffffffffffff;
                  break;
                }
                lVar13 = uVar19 - 1;
                uVar19 = uVar19 - 1;
              } while (*(char *)((long)pppppppuVar10 + lVar13) == '0');
              uVar19 = (uVar19 - (uVar19 == (long)pppppppuVar9 - (long)pppppppuVar10)) + 1;
              if ((char)bVar16 < '\0') {
                uVar20 = uVar19;
                if (uVar18 < uVar19) goto LAB_10aaf788c;
              }
              else {
                if (uVar20 < uVar19) {
LAB_10aaf788c:
                  FUN_109ffddc8();
                  goto LAB_10aaf78b0;
                }
                bStack_c9 = (byte)uVar19;
                pppppppuVar11 = &ppppppuStack_e0;
                uVar20 = uStack_d8;
              }
              uStack_d8 = uVar20;
              *(undefined1 *)((long)pppppppuVar11 + uVar19) = 0;
              uVar20 = (ulong)bStack_c9;
              pppppppuVar11 = (undefined8 *******)ppppppuStack_e0;
              uVar18 = uStack_d8;
              bVar16 = bStack_c9;
            }
          }
          if (-1 < (char)bVar16) {
            uVar18 = uVar20;
            pppppppuVar11 = &ppppppuStack_e0;
          }
          pppppppuVar10 = &ppppppuStack_c8;
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                    (pppppppuVar10,pppppppuVar11,uVar18);
          pppppuStack_a8 = pppppppuVar10[1];
          ppppppuStack_b0 = *pppppppuVar10;
          pppppuStack_a0 = pppppppuVar10[2];
          pppppppuVar10[1] = (undefined8 ******)0x0;
          pppppppuVar10[2] = (undefined8 ******)0x0;
          *pppppppuVar10 = (undefined8 ******)0x0;
          ppppppuVar3 = (undefined8 ******)pppppuStack_a8;
          pppppppuVar11 = (undefined8 *******)ppppppuStack_b0;
          if (-1 < (long)pppppuStack_a0) {
            ppppppuVar3 = (undefined8 ******)((ulong)pppppuStack_a0 >> 0x38);
            pppppppuVar11 = &ppppppuStack_b0;
          }
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                    (&ppppppuStack_88,pppppppuVar11,ppppppuVar3);
          if ((long)pppppuStack_a0 < 0) {
            __ZdlPv(ppppppuStack_b0);
          }
          pppppppuVar11 = (undefined8 *******)ppppppuStack_e0;
          if ((char)bStack_c9 < '\0') goto LAB_10aaf7744;
        }
        if ((char)bStack_b1 < '\0') {
          __ZdlPv(ppppppuStack_c8);
        }
        bVar12 = false;
        piVar17 = piVar17 + 0x10;
      } while (piVar17 != piVar4);
    }
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (&ppppppuStack_88,&DAT_10f2da10d,1);
    param_1[1] = uStack_80;
    *param_1 = (long)ppppppuStack_88;
    param_1[2] = uStack_78;
    uStack_80 = 0;
    uStack_78 = 0;
    ppppppuStack_88 = (undefined8 *******)0x0;
  }
  if (plVar7 != (long *)0x0) {
    plVar8 = plVar7 + 1;
    do {
      lVar13 = *plVar8;
      cVar5 = '\x01';
      bVar12 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar12) {
        *plVar8 = lVar13 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (lVar13 == 0) {
      (**(code **)(*plVar7 + 0x10))(plVar7);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
    }
  }
  if ((long)uStack_78 < 0) {
    __ZdlPv(ppppppuStack_88);
  }
  return;
}



/* Entry: 10aaf7994; end: 10aaf7a1f;  */

void FUN_10aaf7994(long *param_1,long param_2)

{
  undefined8 *puVar1;
  char *pcVar2;
  undefined8 ******ppppppuVar3;
  int *piVar4;
  char cVar5;
  code *pcVar6;
  long *plVar7;
  long *plVar8;
  undefined8 *******pppppppuVar9;
  undefined8 *******pppppppuVar10;
  undefined8 *******pppppppuVar11;
  bool bVar12;
  long lVar13;
  int *piVar14;
  long lVar15;
  byte bVar16;
  int *piVar17;
  ulong uVar18;
  ulong uVar19;
  ulong uVar20;
  int iVar21;
  undefined8 ******ppppppuStack_e0;
  ulong uStack_d8;
  byte bStack_c9;
  undefined8 ******ppppppuStack_c8;
  ulong uStack_c0;
  byte bStack_b1;
  undefined8 ******ppppppuStack_b0;
  undefined8 *****pppppuStack_a8;
  undefined8 *****pppppuStack_a0;
  long *plStack_98;
  long *plStack_90;
  undefined8 ******ppppppuStack_88;
  ulong uStack_80;
  ulong uStack_78;
  
  uVar19 = *(ulong *)(param_2 + 0x20);
  if (-1 < (char)*(byte *)(param_2 + 0x2f)) {
    uVar19 = (ulong)*(byte *)(param_2 + 0x2f);
  }
  FUN_10a003c90(&ppppppuStack_88,uVar19 + 2,&ppppppuStack_b0);
  pppppppuVar11 = (undefined8 *******)ppppppuStack_88;
  if (-1 < (long)uStack_78) {
    pppppppuVar11 = &ppppppuStack_88;
  }
  if (uVar19 != 0) {
    plVar7 = (long *)*(long *)(param_2 + 0x18);
    if (-1 < *(char *)(param_2 + 0x2f)) {
      plVar7 = (long *)(param_2 + 0x18);
    }
    _memmove(pppppppuVar11,plVar7,uVar19);
  }
  *(undefined2 *)((long)pppppppuVar11 + uVar19) = 0x7b20;
  *(undefined1 *)((undefined2 *)((long)pppppppuVar11 + uVar19) + 1) = 0;
  plStack_98 = (long *)0x0;
  plStack_90 = (long *)0x0;
  plVar7 = *(long **)(param_2 + 0x78);
  if (((plVar7 == (long *)0x0) ||
      (__ZNSt3__119__shared_weak_count4lockEv(), plStack_90 = plVar7, plVar7 == (long *)0x0)) ||
     (plVar8 = *(long **)(param_2 + 0x70), plStack_98 = plVar8, plVar8 == (long *)0x0)) {
    plVar7 = plStack_90;
    uVar19 = uStack_80;
    if (-1 < (long)uStack_78) {
      uVar19 = uStack_78 >> 0x38;
    }
    FUN_10a003c90(param_1,uVar19 + 0x38,&ppppppuStack_b0);
    plVar8 = (long *)*param_1;
    if (-1 < *(char *)((long)param_1 + 0x17)) {
      plVar8 = param_1;
    }
    if (uVar19 != 0) {
      pppppppuVar11 = (undefined8 *******)ppppppuStack_88;
      if (-1 < (long)uStack_78) {
        pppppppuVar11 = &ppppppuStack_88;
      }
      _memmove(plVar8,pppppppuVar11,uVar19);
    }
    puVar1 = (undefined8 *)((long)plVar8 + uVar19);
    puVar1[1] = 0x2073616820746e6f;
    *puVar1 = 0x4620676e696e776f;
    puVar1[3] = 0x202c6465796f7274;
    puVar1[2] = 0x736564206e656562;
    puVar1[5] = 0x76616e7520616d65;
    puVar1[4] = 0x6863732073697861;
    puVar1[6] = 0x7d656c62616c6961;
    *(undefined1 *)(puVar1 + 7) = 0;
  }
  else {
    FUN_10ab19e5c();
    piVar17 = (int *)*plVar8;
    piVar4 = (int *)plVar8[1];
    if (piVar17 != piVar4) {
      bVar12 = true;
      do {
        if (!bVar12) {
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                    (&ppppppuStack_88,&DAT_10f68f19e,2);
        }
        cVar5 = *(char *)((long)piVar17 + 0x17);
        lVar13 = (long)cVar5;
        piVar14 = piVar17;
        lVar15 = lVar13;
        if (lVar13 < 0) {
          piVar14 = *(int **)piVar17;
          lVar15 = *(long *)(piVar17 + 2);
        }
        if ((lVar15 == 4) && (*piVar14 == 0x74686777)) {
          __ZNSt3__19to_stringEf(&ppppppuStack_c8,*(undefined4 *)(param_2 + 0x30));
          bVar16 = bStack_b1;
          uVar18 = uStack_c0;
          pppppppuVar11 = (undefined8 *******)ppppppuStack_c8;
          uVar20 = (ulong)bStack_b1;
          uVar19 = uStack_c0;
          if (-1 < (char)bStack_b1) {
            uVar19 = uVar20;
          }
          if (uVar19 != 0) {
            pppppppuVar10 = (undefined8 *******)ppppppuStack_c8;
            if (-1 < (char)bStack_b1) {
              pppppppuVar10 = &ppppppuStack_c8;
            }
            pppppppuVar9 = pppppppuVar10;
            _memchr(pppppppuVar10,0x2e,uVar19);
            if ((pppppppuVar9 != (undefined8 *******)0x0) &&
               ((long)pppppppuVar9 - (long)pppppppuVar10 != 0xffffffffffffffff)) {
              do {
                if (uVar19 == 0) {
                  uVar19 = 0xffffffffffffffff;
                  break;
                }
                lVar13 = uVar19 - 1;
                uVar19 = uVar19 - 1;
              } while (*(char *)((long)pppppppuVar10 + lVar13) == '0');
              uVar19 = (uVar19 - (uVar19 == (long)pppppppuVar9 - (long)pppppppuVar10)) + 1;
              if ((char)bVar16 < '\0') {
                uVar20 = uVar19;
                if (uVar18 < uVar19) goto LAB_10aaf7894;
              }
              else {
                if (uVar20 < uVar19) {
LAB_10aaf7894:
                  FUN_109ffddc8();
LAB_10aaf78b0:
                    /* WARNING: Does not return */
                  pcVar6 = (code *)SoftwareBreakpoint(1,0x10aaf78b4);
                  (*pcVar6)();
                }
                bStack_b1 = (byte)uVar19;
                pppppppuVar11 = &ppppppuStack_c8;
                uVar20 = uStack_c0;
              }
              uStack_c0 = uVar20;
              *(undefined1 *)((long)pppppppuVar11 + uVar19) = 0;
            }
          }
          pppppppuVar11 = &ppppppuStack_c8;
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6insertEmPKcm
                    (pppppppuVar11,0,&UNK_10f68f1a1,8);
          pppppuStack_a8 = pppppppuVar11[1];
          ppppppuStack_b0 = *pppppppuVar11;
          pppppuStack_a0 = pppppppuVar11[2];
          pppppppuVar11[1] = (undefined8 ******)0x0;
          pppppppuVar11[2] = (undefined8 ******)0x0;
          *pppppppuVar11 = (undefined8 ******)0x0;
          ppppppuVar3 = (undefined8 ******)pppppuStack_a8;
          pppppppuVar11 = (undefined8 *******)ppppppuStack_b0;
          if (-1 < (long)pppppuStack_a0) {
            ppppppuVar3 = (undefined8 ******)((ulong)pppppuStack_a0 >> 0x38);
            pppppppuVar11 = &ppppppuStack_b0;
          }
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                    (&ppppppuStack_88,pppppppuVar11,ppppppuVar3);
LAB_10aaf7738:
          pppppppuVar11 = (undefined8 *******)ppppppuStack_b0;
          if ((long)pppppuStack_a0 < 0) {
LAB_10aaf7744:
            __ZdlPv(pppppppuVar11);
          }
        }
        else {
          piVar14 = piVar17;
          lVar15 = lVar13;
          if (cVar5 < '\0') {
            piVar14 = *(int **)piVar17;
            lVar15 = *(long *)(piVar17 + 2);
          }
          if ((lVar15 == 4) && (*piVar14 == 0x68746477)) {
            __ZNSt3__19to_stringEf(&ppppppuStack_c8,*(undefined4 *)(param_2 + 0x34));
            bVar16 = bStack_b1;
            uVar18 = uStack_c0;
            pppppppuVar11 = (undefined8 *******)ppppppuStack_c8;
            uVar20 = (ulong)bStack_b1;
            uVar19 = uStack_c0;
            if (-1 < (char)bStack_b1) {
              uVar19 = uVar20;
            }
            if (uVar19 != 0) {
              pppppppuVar10 = (undefined8 *******)ppppppuStack_c8;
              if (-1 < (char)bStack_b1) {
                pppppppuVar10 = &ppppppuStack_c8;
              }
              pppppppuVar9 = pppppppuVar10;
              _memchr(pppppppuVar10,0x2e,uVar19);
              if ((pppppppuVar9 != (undefined8 *******)0x0) &&
                 ((long)pppppppuVar9 - (long)pppppppuVar10 != 0xffffffffffffffff)) {
                do {
                  if (uVar19 == 0) {
                    uVar19 = 0xffffffffffffffff;
                    break;
                  }
                  lVar13 = uVar19 - 1;
                  uVar19 = uVar19 - 1;
                } while (*(char *)((long)pppppppuVar10 + lVar13) == '0');
                uVar19 = (uVar19 - (uVar19 == (long)pppppppuVar9 - (long)pppppppuVar10)) + 1;
                if ((char)bVar16 < '\0') {
                  uVar20 = uVar19;
                  if (uVar18 < uVar19) goto LAB_10aaf789c;
                }
                else {
                  if (uVar20 < uVar19) {
LAB_10aaf789c:
                    FUN_109ffddc8();
                    goto LAB_10aaf78b0;
                  }
                  bStack_b1 = (byte)uVar19;
                  pppppppuVar11 = &ppppppuStack_c8;
                  uVar20 = uStack_c0;
                }
                uStack_c0 = uVar20;
                *(undefined1 *)((long)pppppppuVar11 + uVar19) = 0;
              }
            }
            pppppppuVar11 = &ppppppuStack_c8;
            __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6insertEmPKcm
                      (pppppppuVar11,0,&UNK_10f68f1aa,7);
            pppppuStack_a8 = pppppppuVar11[1];
            ppppppuStack_b0 = *pppppppuVar11;
            pppppuStack_a0 = pppppppuVar11[2];
            pppppppuVar11[1] = (undefined8 ******)0x0;
            pppppppuVar11[2] = (undefined8 ******)0x0;
            *pppppppuVar11 = (undefined8 ******)0x0;
            ppppppuVar3 = (undefined8 ******)pppppuStack_a8;
            pppppppuVar11 = (undefined8 *******)ppppppuStack_b0;
            if (-1 < (long)pppppuStack_a0) {
              ppppppuVar3 = (undefined8 ******)((ulong)pppppuStack_a0 >> 0x38);
              pppppppuVar11 = &ppppppuStack_b0;
            }
            __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                      (&ppppppuStack_88,pppppppuVar11,ppppppuVar3);
            goto LAB_10aaf7738;
          }
          piVar14 = piVar17;
          lVar15 = lVar13;
          if (cVar5 < '\0') {
            piVar14 = *(int **)piVar17;
            lVar15 = *(long *)(piVar17 + 2);
          }
          if ((lVar15 == 4) && (*piVar14 == 0x746e6c73)) {
            __ZNSt3__19to_stringEf(&ppppppuStack_c8,*(undefined4 *)(param_2 + 0x38));
            bVar16 = bStack_b1;
            uVar18 = uStack_c0;
            pppppppuVar11 = (undefined8 *******)ppppppuStack_c8;
            uVar20 = (ulong)bStack_b1;
            uVar19 = uStack_c0;
            if (-1 < (char)bStack_b1) {
              uVar19 = uVar20;
            }
            if (uVar19 != 0) {
              pppppppuVar10 = (undefined8 *******)ppppppuStack_c8;
              if (-1 < (char)bStack_b1) {
                pppppppuVar10 = &ppppppuStack_c8;
              }
              pppppppuVar9 = pppppppuVar10;
              _memchr(pppppppuVar10,0x2e,uVar19);
              if ((pppppppuVar9 != (undefined8 *******)0x0) &&
                 ((long)pppppppuVar9 - (long)pppppppuVar10 != 0xffffffffffffffff)) {
                do {
                  if (uVar19 == 0) {
                    uVar19 = 0xffffffffffffffff;
                    break;
                  }
                  lVar13 = uVar19 - 1;
                  uVar19 = uVar19 - 1;
                } while (*(char *)((long)pppppppuVar10 + lVar13) == '0');
                uVar19 = (uVar19 - (uVar19 == (long)pppppppuVar9 - (long)pppppppuVar10)) + 1;
                if ((char)bVar16 < '\0') {
                  uVar20 = uVar19;
                  if (uVar18 < uVar19) goto LAB_10aaf78a4;
                }
                else {
                  if (uVar20 < uVar19) {
LAB_10aaf78a4:
                    FUN_109ffddc8();
                    goto LAB_10aaf78b0;
                  }
                  bStack_b1 = (byte)uVar19;
                  pppppppuVar11 = &ppppppuStack_c8;
                  uVar20 = uStack_c0;
                }
                uStack_c0 = uVar20;
                *(undefined1 *)((long)pppppppuVar11 + uVar19) = 0;
              }
            }
            pppppppuVar11 = &ppppppuStack_c8;
            __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6insertEmPKcm
                      (pppppppuVar11,0,&UNK_10f68f1b2,7);
            pppppuStack_a8 = pppppppuVar11[1];
            ppppppuStack_b0 = *pppppppuVar11;
            pppppuStack_a0 = pppppppuVar11[2];
            pppppppuVar11[1] = (undefined8 ******)0x0;
            pppppppuVar11[2] = (undefined8 ******)0x0;
            *pppppppuVar11 = (undefined8 ******)0x0;
            ppppppuVar3 = (undefined8 ******)pppppuStack_a8;
            pppppppuVar11 = (undefined8 *******)ppppppuStack_b0;
            if (-1 < (long)pppppuStack_a0) {
              ppppppuVar3 = (undefined8 ******)((ulong)pppppuStack_a0 >> 0x38);
              pppppppuVar11 = &ppppppuStack_b0;
            }
            __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                      (&ppppppuStack_88,pppppppuVar11,ppppppuVar3);
            goto LAB_10aaf7738;
          }
          piVar14 = piVar17;
          lVar15 = lVar13;
          if (cVar5 < '\0') {
            piVar14 = *(int **)piVar17;
            lVar15 = *(long *)(piVar17 + 2);
          }
          if ((lVar15 == 4) && (*piVar14 == 0x6c617469)) {
            pcVar2 = "true";
            if (*(char *)(param_2 + 0x3c) == '\0') {
              pcVar2 = "false";
            }
            func_0x000107c2b054(&ppppppuStack_c8,pcVar2);
            pppppppuVar11 = &ppppppuStack_c8;
            __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6insertEmPKcm
                      (pppppppuVar11,0,&UNK_10f68f1ba,8);
            pppppuStack_a8 = pppppppuVar11[1];
            ppppppuStack_b0 = *pppppppuVar11;
            pppppuStack_a0 = pppppppuVar11[2];
            pppppppuVar11[1] = (undefined8 ******)0x0;
            pppppppuVar11[2] = (undefined8 ******)0x0;
            *pppppppuVar11 = (undefined8 ******)0x0;
            ppppppuVar3 = (undefined8 ******)pppppuStack_a8;
            pppppppuVar11 = (undefined8 *******)ppppppuStack_b0;
            if (-1 < (long)pppppuStack_a0) {
              ppppppuVar3 = (undefined8 ******)((ulong)pppppuStack_a0 >> 0x38);
              pppppppuVar11 = &ppppppuStack_b0;
            }
            __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                      (&ppppppuStack_88,pppppppuVar11,ppppppuVar3);
            goto LAB_10aaf7738;
          }
          piVar14 = piVar17;
          if (cVar5 < '\0') {
            lVar13 = *(long *)(piVar17 + 2);
            piVar14 = *(int **)piVar17;
          }
          if ((lVar13 == 4) && (*piVar14 == 0x7a73706f)) {
            __ZNSt3__19to_stringEf(&ppppppuStack_c8,*(undefined4 *)(param_2 + 0x40));
            bVar16 = bStack_b1;
            uVar18 = uStack_c0;
            pppppppuVar11 = (undefined8 *******)ppppppuStack_c8;
            uVar20 = (ulong)bStack_b1;
            uVar19 = uStack_c0;
            if (-1 < (char)bStack_b1) {
              uVar19 = uVar20;
            }
            if (uVar19 != 0) {
              pppppppuVar10 = (undefined8 *******)ppppppuStack_c8;
              if (-1 < (char)bStack_b1) {
                pppppppuVar10 = &ppppppuStack_c8;
              }
              pppppppuVar9 = pppppppuVar10;
              _memchr(pppppppuVar10,0x2e,uVar19);
              if ((pppppppuVar9 != (undefined8 *******)0x0) &&
                 ((long)pppppppuVar9 - (long)pppppppuVar10 != 0xffffffffffffffff)) {
                do {
                  if (uVar19 == 0) {
                    uVar19 = 0xffffffffffffffff;
                    break;
                  }
                  lVar13 = uVar19 - 1;
                  uVar19 = uVar19 - 1;
                } while (*(char *)((long)pppppppuVar10 + lVar13) == '0');
                uVar19 = (uVar19 - (uVar19 == (long)pppppppuVar9 - (long)pppppppuVar10)) + 1;
                if ((char)bVar16 < '\0') {
                  uVar20 = uVar19;
                  if (uVar18 < uVar19) goto LAB_10aaf78ac;
                }
                else {
                  if (uVar20 < uVar19) {
LAB_10aaf78ac:
                    FUN_109ffddc8();
                    goto LAB_10aaf78b0;
                  }
                  bStack_b1 = (byte)uVar19;
                  pppppppuVar11 = &ppppppuStack_c8;
                  uVar20 = uStack_c0;
                }
                uStack_c0 = uVar20;
                *(undefined1 *)((long)pppppppuVar11 + uVar19) = 0;
              }
            }
            pppppppuVar11 = &ppppppuStack_c8;
            __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6insertEmPKcm
                      (pppppppuVar11,0,&UNK_10f68f1c3,0xd);
            pppppuStack_a8 = pppppppuVar11[1];
            ppppppuStack_b0 = *pppppppuVar11;
            pppppuStack_a0 = pppppppuVar11[2];
            pppppppuVar11[1] = (undefined8 ******)0x0;
            pppppppuVar11[2] = (undefined8 ******)0x0;
            *pppppppuVar11 = (undefined8 ******)0x0;
            ppppppuVar3 = (undefined8 ******)pppppuStack_a8;
            pppppppuVar11 = (undefined8 *******)ppppppuStack_b0;
            if (-1 < (long)pppppuStack_a0) {
              ppppppuVar3 = (undefined8 ******)((ulong)pppppuStack_a0 >> 0x38);
              pppppppuVar11 = &ppppppuStack_b0;
            }
            __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                      (&ppppppuStack_88,pppppppuVar11,ppppppuVar3);
            goto LAB_10aaf7738;
          }
          lVar13 = param_2 + 0x48;
          func_0x0001094f1dec(lVar13,piVar17);
          piVar14 = piVar17 + 0xd;
          if (lVar13 != 0) {
            piVar14 = (int *)(lVar13 + 0x28);
          }
          iVar21 = *piVar14;
          uVar19 = *(ulong *)(piVar17 + 2);
          if (-1 < (char)*(byte *)((long)piVar17 + 0x17)) {
            uVar19 = (ulong)*(byte *)((long)piVar17 + 0x17);
          }
          FUN_10a003c90(&ppppppuStack_c8,uVar19 + 2,&ppppppuStack_e0);
          pppppppuVar11 = (undefined8 *******)ppppppuStack_c8;
          if (-1 < (char)bStack_b1) {
            pppppppuVar11 = &ppppppuStack_c8;
          }
          if (uVar19 != 0) {
            piVar14 = *(int **)piVar17;
            if (-1 < *(char *)((long)piVar17 + 0x17)) {
              piVar14 = piVar17;
            }
            _memmove(pppppppuVar11,piVar14,uVar19);
          }
          *(undefined2 *)((long)pppppppuVar11 + uVar19) = 0x203a;
          *(undefined1 *)((undefined2 *)((long)pppppppuVar11 + uVar19) + 1) = 0;
          __ZNSt3__19to_stringEf(&ppppppuStack_e0,iVar21);
          bVar16 = bStack_c9;
          uVar18 = uStack_d8;
          pppppppuVar11 = (undefined8 *******)ppppppuStack_e0;
          uVar20 = (ulong)bStack_c9;
          uVar19 = uStack_d8;
          if (-1 < (char)bStack_c9) {
            uVar19 = uVar20;
          }
          if (uVar19 != 0) {
            pppppppuVar10 = (undefined8 *******)ppppppuStack_e0;
            if (-1 < (char)bStack_c9) {
              pppppppuVar10 = &ppppppuStack_e0;
            }
            pppppppuVar9 = pppppppuVar10;
            _memchr(pppppppuVar10,0x2e,uVar19);
            if ((pppppppuVar9 != (undefined8 *******)0x0) &&
               ((long)pppppppuVar9 - (long)pppppppuVar10 != 0xffffffffffffffff)) {
              do {
                if (uVar19 == 0) {
                  uVar19 = 0xffffffffffffffff;
                  break;
                }
                lVar13 = uVar19 - 1;
                uVar19 = uVar19 - 1;
              } while (*(char *)((long)pppppppuVar10 + lVar13) == '0');
              uVar19 = (uVar19 - (uVar19 == (long)pppppppuVar9 - (long)pppppppuVar10)) + 1;
              if ((char)bVar16 < '\0') {
                uVar20 = uVar19;
                if (uVar18 < uVar19) goto LAB_10aaf788c;
              }
              else {
                if (uVar20 < uVar19) {
LAB_10aaf788c:
                  FUN_109ffddc8();
                  goto LAB_10aaf78b0;
                }
                bStack_c9 = (byte)uVar19;
                pppppppuVar11 = &ppppppuStack_e0;
                uVar20 = uStack_d8;
              }
              uStack_d8 = uVar20;
              *(undefined1 *)((long)pppppppuVar11 + uVar19) = 0;
              uVar20 = (ulong)bStack_c9;
              pppppppuVar11 = (undefined8 *******)ppppppuStack_e0;
              uVar18 = uStack_d8;
              bVar16 = bStack_c9;
            }
          }
          if (-1 < (char)bVar16) {
            uVar18 = uVar20;
            pppppppuVar11 = &ppppppuStack_e0;
          }
          pppppppuVar10 = &ppppppuStack_c8;
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                    (pppppppuVar10,pppppppuVar11,uVar18);
          pppppuStack_a8 = pppppppuVar10[1];
          ppppppuStack_b0 = *pppppppuVar10;
          pppppuStack_a0 = pppppppuVar10[2];
          pppppppuVar10[1] = (undefined8 ******)0x0;
          pppppppuVar10[2] = (undefined8 ******)0x0;
          *pppppppuVar10 = (undefined8 ******)0x0;
          ppppppuVar3 = (undefined8 ******)pppppuStack_a8;
          pppppppuVar11 = (undefined8 *******)ppppppuStack_b0;
          if (-1 < (long)pppppuStack_a0) {
            ppppppuVar3 = (undefined8 ******)((ulong)pppppuStack_a0 >> 0x38);
            pppppppuVar11 = &ppppppuStack_b0;
          }
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                    (&ppppppuStack_88,pppppppuVar11,ppppppuVar3);
          if ((long)pppppuStack_a0 < 0) {
            __ZdlPv(ppppppuStack_b0);
          }
          pppppppuVar11 = (undefined8 *******)ppppppuStack_e0;
          if ((char)bStack_c9 < '\0') goto LAB_10aaf7744;
        }
        if ((char)bStack_b1 < '\0') {
          __ZdlPv(ppppppuStack_c8);
        }
        bVar12 = false;
        piVar17 = piVar17 + 0x10;
      } while (piVar17 != piVar4);
    }
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (&ppppppuStack_88,&DAT_10f2da10d,1);
    param_1[1] = uStack_80;
    *param_1 = (long)ppppppuStack_88;
    param_1[2] = uStack_78;
    uStack_80 = 0;
    uStack_78 = 0;
    ppppppuStack_88 = (undefined8 *******)0x0;
  }
  if (plVar7 != (long *)0x0) {
    plVar8 = plVar7 + 1;
    do {
      lVar13 = *plVar8;
      cVar5 = '\x01';
      bVar12 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar12) {
        *plVar8 = lVar13 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (lVar13 == 0) {
      (**(code **)(*plVar7 + 0x10))(plVar7);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
    }
  }
  if ((long)uStack_78 < 0) {
    __ZdlPv(ppppppuStack_88);
  }
  return;
}



/* Entry: 10aaf7a20; end: 10aaf7ac3;  */

void FUN_10aaf7a20(undefined8 param_1)

{
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined8 uStack_40;
  undefined4 uStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  puStack_88 = (undefined *)0x0;
  uStack_80 = 0xffffffff00000002;
  uStack_78 = CONCAT44(uStack_78._4_4_,0xffffffff);
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_50 = 0;
  uStack_4c = 0x124;
  uStack_48 = 0x13c;
  FUN_10aaf7ac4(param_1,&puStack_88);
  uStack_80 = 0;
  uStack_78 = 0;
  puStack_88 = &DAT_10f68f1d3;
  uStack_68 = 0xffffffffffffffff;
  uStack_70 = 0x100000019;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_48 = 0;
  uStack_44 = 0;
  uStack_50 = 0;
  uStack_4c = 0;
  uStack_40 = 0;
  uStack_38 = 0xffffffff;
  puStack_30 = &UNK_10f68e3e8;
  uStack_28 = 0;
  FUN_10ab09634();
  FUN_10ab09990(param_1);
  return;
}



/* Entry: 10aaf7ac4; end: 10aaf7b9b;  */

/* WARNING: Removing unreachable block (ram,0x00010aaf7b5c) */

undefined1  [16] FUN_10aaf7ac4(undefined8 param_1,long param_2)

{
  undefined1 **ppuVar1;
  undefined1 auVar2 [16];
  undefined1 *puStack_90;
  undefined8 uStack_88;
  undefined4 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined4 uStack_50;
  undefined1 auStack_48 [24];
  
  ppuVar1 = &puStack_90;
  func_0x000109887da8(auStack_48,&UNK_10f68f4e9,0x16);
  uStack_88 = *(undefined8 *)(param_2 + 8);
  uStack_80 = *(undefined4 *)(param_2 + 0x10);
  uStack_70 = *(undefined8 *)(param_2 + 0x20);
  uStack_78 = *(undefined8 *)(param_2 + 0x18);
  uStack_60 = *(undefined8 *)(param_2 + 0x30);
  uStack_68 = *(undefined8 *)(param_2 + 0x28);
  uStack_58 = *(undefined8 *)(param_2 + 0x38);
  uStack_50 = *(undefined4 *)(param_2 + 0x40);
  puStack_90 = auStack_48;
  FUN_10ab09538(param_1,&puStack_90,0x19);
  auVar2._8_8_ = ppuVar1;
  auVar2._0_8_ = param_1;
  return auVar2;
}



/* Entry: 10aaf7b9c; end: 10aaf7c23;  */

undefined8 * FUN_10aaf7b9c(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 uVar6;
  
  puVar4 = param_1;
  uVar6 = param_2;
  func_0x00010a0fda30();
  FUN_10aa7093c(param_1,param_2,puVar4,uVar6);
  *param_1 = &PTR_FUN_110c45788;
  param_1[2] = &PTR_DAT_110c45828;
  param_1[7] = &PTR_DAT_110c45880;
  lVar5 = param_3[1];
  uVar6 = *param_3;
  param_1[0x1d] = param_3[1];
  param_1[0x1c] = uVar6;
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
  return param_1;
}



/* Entry: 10aaf7c24; end: 10aaf7c8b;  */

undefined8 * FUN_10aaf7c24(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined1 uStack_21;
  
  puVar1 = param_1;
  FUN_10aa7093c();
  *puVar1 = &PTR_FUN_110c45788;
  puVar1[2] = &PTR_DAT_110c45828;
  puVar1[7] = &PTR_DAT_110c45880;
  func_0x00010a4ba53c(puVar1 + 0x1c,&uStack_21);
  return param_1;
}



/* Entry: 10aaf7c8c; end: 10aaf7d9b;  */

undefined8 * FUN_10aaf7c8c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c45788;
  param_1[2] = &PTR_DAT_110c45828;
  param_1[7] = &PTR_DAT_110c45880;
  FUN_10a297544(param_1 + 0x1c);
  *param_1 = &PTR_FUN_110c3ec18;
  param_1[2] = &PTR_DAT_110c3ecb8;
  param_1[7] = &PTR_DAT_110c3ed10;
  func_0x00010aa92258(param_1 + 0x1a);
  if (param_1[0x19] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  __ZNSt3__15mutexD1Ev(param_1 + 0x10);
  if (param_1[0xf] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  if (*(char *)((long)param_1 + 0x6f) < '\0') {
    __ZdlPv(param_1[0xb]);
  }
  if (param_1[6] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  param_1[2] = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + 3);
  return param_1;
}



/* Entry: 10aaf7d9c; end: 10aaf7dab;  */

void FUN_10aaf7d9c(undefined8 *param_1)

{
  param_1[-2] = &PTR_FUN_110c45788;
  *param_1 = &PTR_DAT_110c45828;
  param_1[5] = &PTR_DAT_110c45880;
  FUN_10a297544(param_1 + 0x1a);
  func_0x00010aa71c88(param_1 + -2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10aaf7dac; end: 10aaf81cf;  */

void FUN_10aaf7dac(undefined8 *param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  long *plStack_90;
  long *plStack_88;
  long lStack_80;
  long *plStack_78;
  long lStack_70;
  long *plStack_68;
  long *plStack_60;
  long *plStack_58;
  long lStack_50;
  long *plStack_48;
  
  lVar7 = *(long *)(param_2 + 0x50);
  if (lVar7 == 0) {
    plVar6 = (long *)0x108;
    __Znwm();
    plVar6[1] = 0;
    plVar6[2] = 0;
    *plVar6 = (long)&PTR_DAT_110c46168;
    plVar4 = plVar6 + 3;
    plVar5 = *(long **)(param_2 + 0xe8);
    plStack_48 = *(long **)(param_2 + 0xe8);
    lStack_50 = *(long *)(param_2 + 0xe0);
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
    FUN_10aaf7b9c(plVar4,0,&lStack_50);
    if (plVar5 != (long *)0x0) {
      plVar1 = plVar5 + 1;
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
        (**(code **)(*plVar5 + 0x10))(plVar5);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
      }
    }
    plStack_60 = plVar4;
    plStack_58 = plVar6;
    FUN_10ab09bb0(&plStack_60,plVar6 + 8,plVar4);
    FUN_10ab09a4c(&plStack_90,&plStack_60);
    if (plStack_58 == (long *)0x0) goto LAB_10aaf80f4;
    plVar4 = plStack_58 + 1;
    do {
      lVar7 = *plVar4;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar4,0x10);
      if (bVar3) {
        *plVar4 = lVar7 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
      plVar6 = plStack_58;
    } while (cVar2 != '\0');
  }
  else {
    lStack_80 = *(long *)(lVar7 + 0x858);
    plStack_78 = *(long **)(lVar7 + 0x860);
    if (plStack_78 != (long *)0x0) {
      plVar4 = plStack_78 + 1;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar4,0x10);
        if (bVar3) {
          *plVar4 = *plVar4 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    plVar6 = *(long **)(param_2 + 0xe8);
    uVar9 = *(undefined8 *)(param_2 + 0xe8);
    lVar8 = *(long *)(param_2 + 0xe0);
    plVar4 = (long *)0xf0;
    __Znwm();
    if (plVar6 != (long *)0x0) {
      plVar5 = plVar6 + 1;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
        if (bVar3) {
          *plVar5 = *plVar5 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    lStack_50 = lVar8;
    plStack_48 = (long *)uVar9;
    FUN_10aaf7b9c(plVar4,lVar7,&lStack_50);
    if (plVar6 != (long *)0x0) {
      plVar5 = plVar6 + 1;
      do {
        lVar7 = *plVar5;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
        if (bVar3) {
          *plVar5 = lVar7 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar7 == 0) {
        (**(code **)(*plVar6 + 0x10))(plVar6);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
      }
    }
    plVar6 = plStack_78;
    lVar7 = lStack_80;
    lStack_70 = lStack_80;
    plStack_68 = plStack_78;
    if (plStack_78 != (long *)0x0) {
      plVar5 = plStack_78 + 1;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
        if (bVar3) {
          *plVar5 = *plVar5 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      plVar5 = plStack_78 + 2;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
        if (bVar3) {
          *plVar5 = *plVar5 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
        if (bVar3) {
          *plVar5 = *plVar5 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_78);
    }
    lStack_50 = lVar7;
    plStack_48 = plVar6;
    plVar5 = (long *)0x30;
    plStack_60 = plVar4;
    __Znwm();
    lStack_50 = 0;
    plStack_48 = (long *)0x0;
    *plVar5 = (long)&PTR_DAT_110c46108;
    plVar5[1] = 0;
    plVar5[2] = 0;
    plVar5[3] = (long)plVar4;
    plVar5[4] = lVar7;
    plVar5[5] = (long)plVar6;
    plStack_58 = plVar5;
    FUN_10ab09bb0(&plStack_60,plVar4 + 5,plVar4);
    FUN_10ab09a4c(&plStack_90,&plStack_60);
    plVar4 = plStack_58;
    if (plStack_58 != (long *)0x0) {
      plVar6 = plStack_58 + 1;
      do {
        lVar7 = *plVar6;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
        if (bVar3) {
          *plVar6 = lVar7 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar7 == 0) {
        (**(code **)(*plStack_58 + 0x10))(plStack_58);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
      }
    }
    if (plStack_48 != (long *)0x0) {
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
    plVar4 = plStack_68;
    if (plStack_68 != (long *)0x0) {
      plVar6 = plStack_68 + 1;
      do {
        lVar7 = *plVar6;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
        if (bVar3) {
          *plVar6 = lVar7 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar7 == 0) {
        (**(code **)(*plStack_68 + 0x10))(plStack_68);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
      }
    }
    if ((lStack_80 != 0) && (plStack_90 != (long *)0x0)) {
      plStack_60 = plStack_90;
      plStack_58 = plStack_88;
      if (plStack_88 != (long *)0x0) {
        plVar4 = plStack_88 + 1;
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar4,0x10);
          if (bVar3) {
            *plVar4 = *plVar4 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      FUN_10aa88c30(lStack_80,&plStack_60);
      plVar4 = plStack_58;
      if (plStack_58 != (long *)0x0) {
        plVar6 = plStack_58 + 1;
        do {
          lVar7 = *plVar6;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
          if (bVar3) {
            *plVar6 = lVar7 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar7 == 0) {
          (**(code **)(*plStack_58 + 0x10))(plStack_58);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
        }
      }
    }
    if (plStack_78 == (long *)0x0) goto LAB_10aaf80f4;
    plVar4 = plStack_78 + 1;
    do {
      lVar7 = *plVar4;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar4,0x10);
      if (bVar3) {
        *plVar4 = lVar7 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
      plVar6 = plStack_78;
    } while (cVar2 != '\0');
  }
  if (lVar7 == 0) {
    (**(code **)(*plVar6 + 0x10))(plVar6);
    __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
  }
LAB_10aaf80f4:
  param_1[1] = plStack_88;
  *param_1 = plStack_90;
  return;
}



/* Entry: 10aaf81d0; end: 10aaf824b;  */

void FUN_10aaf81d0(long param_1,long *param_2)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  undefined1 auStack_48 [8];
  long *plStack_40;
  undefined1 uStack_31;
  
  func_0x00010aa70acc();
  plVar3 = param_2;
  (**(code **)(*param_2 + 0x200))();
  if ((int)plVar3 != 0) {
    func_0x00010a4ba53c(auStack_48,&uStack_31);
    FUN_10a4a09f8((long *)(param_1 + 0xe0),auStack_48);
    if (plStack_40 != (long *)0x0) {
      plVar3 = plStack_40 + 1;
      do {
        lVar5 = *plVar3;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
        if (bVar2) {
          *plVar3 = lVar5 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (lVar5 == 0) {
        (**(code **)(*plStack_40 + 0x10))(plStack_40);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_40);
      }
    }
    (**(code **)(*param_2 + 0x210))(param_2,&PTR_DAT_110c45c40);
    lVar4 = *(long *)(param_1 + 0xe0);
    lVar5 = 0;
    if (lVar4 != 0) {
      lVar5 = lVar4 + 0x18;
    }
    (**(code **)(*param_2 + 0x1e0))(param_2,lVar5);
    (**(code **)(*param_2 + 0x220))(param_2);
  }
  return;
}



/* Entry: 10aaf824c; end: 10aaf82cf;  */

undefined1  [16] FUN_10aaf824c(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0xb;
  auVar1._0_8_ = &UNK_10f68f500;
  return auVar1;
}



/* Entry: 10aaf82d0; end: 10aaf88b7;  */

void FUN_10aaf82d0(ulong param_1)

{
  undefined8 ***pppuVar1;
  undefined8 ***pppuVar2;
  long lVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  code *pcVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  undefined8 **appuStack_c8 [2];
  char cStack_b1;
  undefined **ppuStack_b0;
  undefined8 uStack_a8;
  undefined8 **ppuStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  ulong uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  func_0x000109887da8(appuStack_c8,&UNK_10f68f500,0xb);
  pppuVar1 = (undefined8 ***)appuStack_c8[0];
  if (-1 < cStack_b1) {
    pppuVar1 = appuStack_c8;
  }
  *(undefined ***)(param_1 + 0x1b0) = &PTR_DAT_110c46210;
  pppuVar2 = (undefined8 ***)&UNK_10f68e3e8;
  if (pppuVar1 != (undefined8 ***)0x0) {
    pppuVar2 = pppuVar1;
  }
  func_0x000107c2c4dc(param_1 + 0x1b8,pppuVar2);
  uStack_98 = 0;
  uStack_90 = 0;
  uStack_80 = 0xffffffffffffffff;
  uStack_88 = 0x100000064;
  uStack_70 = 0;
  uStack_78 = 0;
  uStack_60 = 0;
  uStack_68 = 0;
  uStack_58 = 0x1240000012f;
  uStack_50 = CONCAT44(uStack_50._4_4_,0xffffffff);
  uStack_48 = 0;
  uStack_40 = 0;
  ppuStack_a0 = pppuVar1;
  func_0x00010a052690(param_1 + 0x168,&ppuStack_a0);
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    ppuStack_b0 = &PTR_DAT_110c46210;
    uStack_a8 = 0;
    ppuStack_a0 = (undefined8 **)&PTR_DAT_110b178e0;
    uStack_98 = 0;
    uStack_90 = CONCAT71(uStack_90._1_7_,1);
    func_0x0001098949cc(param_1,pppuVar1,&ppuStack_b0,&ppuStack_a0);
  }
  if (cStack_b1 < '\0') {
    __ZdlPv(appuStack_c8[0]);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10aaf8898;
    FUN_10a054dac(param_1,"clear",FUN_10ab09de8,1,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10aaf8898;
    FUN_10a054dac(param_1,&UNK_10f6836df,FUN_10ab09f04,4,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10aaf8898;
    FUN_10a054dac(param_1,&UNK_10f68f1e0,FUN_10ab0a02c,5,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10aaf8898;
    FUN_10a054dac(param_1,&UNK_10f68f1f2,FUN_10ab0a168,3,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10aaf8898;
    FUN_10a054dac(param_1,&UNK_10f68f201,FUN_10ab0a2d4,4,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10aaf8898;
    FUN_10a054dac(param_1,&UNK_10f68f215,FUN_10ab0a4a4,4,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10aaf8898;
    FUN_10a054dac(param_1,&UNK_10f68f220,FUN_10ab0a57c,4,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10aaf8898;
    FUN_10a054dac(param_1,&UNK_10f68f230,FUN_10ab0a64c,6,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10aaf8898;
    FUN_10a054dac(param_1,&UNK_10f68f238,FUN_10ab0a86c,6,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,2,0,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10aaf8898;
    FUN_10a054dac(param_1,&UNK_10f68f245,FUN_10ab0a924,3,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,2,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10aaf8898;
    FUN_10a054dac(param_1,&UNK_10f68f260,FUN_10ab0aa0c,2,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&UNK_10f68f270,FUN_10ab0aac4,FUN_10ab0ab7c);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,2,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&DAT_10f68f27c,FUN_10ab0aca4,FUN_10ab0ad60);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,2,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&UNK_10f68f286,FUN_10ab0ae2c,FUN_10ab0aee8);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,2,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&UNK_10f68f291,FUN_10ab0afc0,FUN_10ab0b07c);
  }
  *(undefined **)(param_1 + 0x1b0) = PTR___ZTIDn_1103469e8;
  lVar3 = *(long *)(param_1 + 0x170);
  if (*(long *)(param_1 + 0x168) != lVar3) {
    uStack_98 = *(undefined8 *)(lVar3 + -0x60);
    ppuStack_a0 = *(undefined8 ***)(lVar3 + -0x68);
    uStack_78 = *(undefined8 *)(lVar3 + -0x40);
    uVar8 = *(ulong *)(lVar3 + -0x48);
    uVar9 = *(ulong *)(lVar3 + -0x50);
    uStack_90 = *(undefined8 *)(lVar3 + -0x58);
    uStack_68 = *(undefined8 *)(lVar3 + -0x30);
    uStack_70 = *(undefined8 *)(lVar3 + -0x38);
    uStack_58 = *(undefined8 *)(lVar3 + -0x20);
    uStack_60 = *(undefined8 *)(lVar3 + -0x28);
    uStack_40 = *(undefined8 *)(lVar3 + -8);
    uStack_48 = *(undefined8 *)(lVar3 + -0x10);
    uStack_50 = *(ulong *)(lVar3 + -0x18);
    *(long *)(param_1 + 0x170) = lVar3 + -0x68;
    uStack_88._4_4_ = (undefined4)(uVar9 >> 0x20);
    uVar4 = uStack_88._4_4_;
    uStack_80._4_4_ = (undefined4)(uVar8 >> 0x20);
    uVar5 = uStack_80._4_4_;
    uVar7 = param_1;
    uStack_88 = uVar9;
    uStack_80 = uVar8;
    FUN_10a0051e8(param_1,uVar9 & 0xffffffff,uVar4,uStack_50 & 0xffffffff,uVar8 & 0xffffffff,uVar5);
    if ((uVar7 & 1) == 0) {
      func_0x000109894f40(param_1,0);
      FUN_10a054234(param_1,&ppuStack_a0,param_1 + 0x1b8,&UNK_10f68f500,0xb);
      FUN_10a05431c(param_1);
    }
    return;
  }
LAB_10aaf8898:
                    /* WARNING: Does not return */
  pcVar6 = (code *)SoftwareBreakpoint(1,0x10aaf889c);
  (*pcVar6)();
}



/* Entry: 10aaf88b8; end: 10aaf8913;  */

undefined8 * FUN_10aaf88b8(undefined8 *param_1)

{
  long lVar1;
  
  *param_1 = &PTR_FUN_110c458a0;
  lVar1 = 0x30;
  do {
    FUN_10ab0b154((long)param_1 + lVar1,0);
    lVar1 = lVar1 + -8;
  } while (lVar1 != 0x18);
  *param_1 = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + 1);
  return param_1;
}



/* Entry: 10aaf8914; end: 10aaf8917;  */

undefined8 * FUN_10aaf8914(undefined8 *param_1)

{
  long lVar1;
  
  *param_1 = &PTR_FUN_110c458a0;
  lVar1 = 0x30;
  do {
    FUN_10ab0b154((long)param_1 + lVar1,0);
    lVar1 = lVar1 + -8;
  } while (lVar1 != 0x18);
  *param_1 = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + 1);
  return param_1;
}



/* Entry: 10aaf8918; end: 10aaf892b;  */

void FUN_10aaf8918(void)

{
  FUN_10aaf88b8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10aaf892c; end: 10aaf899b;  */

long FUN_10aaf892c(long param_1,ulong param_2)

{
  long lVar1;
  undefined8 uVar2;
  long *plVar3;
  undefined8 uStack_28;
  
  plVar3 = (long *)(param_1 + (param_2 & 0xffffffff) * 8 + 0x20);
  lVar1 = *plVar3;
  if (lVar1 == 0) {
    uVar2 = 0x70;
    __Znwm(0x70);
    FUN_10ab0b1b4();
    uStack_28 = 0;
    FUN_10ab0b154(plVar3,uVar2);
    FUN_10ab0b154(&uStack_28,0);
    lVar1 = *plVar3;
  }
  return lVar1;
}



/* Entry: 10aaf899c; end: 10aaf8b9f;  */

void FUN_10aaf899c(long param_1,undefined8 *param_2,float *param_3,float *param_4,float *param_5,
                  undefined8 *param_6,undefined8 param_7)

{
  long lVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  long lVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  lVar5 = 0;
  lVar1 = 1;
  if (((int)param_7 - 5U & 0xff) < 2) {
    lVar1 = 2;
  }
  do {
    uStack_68 = param_6[1];
    uStack_70 = *param_6;
    puVar3 = &uStack_70;
    FUN_10aaf8ba0(&uStack_70,param_7,lVar5,param_1 + 0x19);
    lVar2 = param_1;
    FUN_10aaf892c(param_1,puVar3);
    puVar3 = *(undefined8 **)(lVar2 + 0x58);
    uVar4 = 0x54;
    FUN_10a54c3a0(puVar3,0x54);
    fVar6 = *param_3;
    fVar7 = param_3[1];
    fVar8 = param_3[2];
    fVar9 = *(float *)(param_2 + 1);
    fVar10 = *(float *)(param_2 + 3);
    fVar11 = *(float *)(param_2 + 5);
    fVar12 = *(float *)(param_2 + 7);
    *puVar3 = CONCAT44((float)((ulong)*param_2 >> 0x20) * fVar6 +
                       (float)((ulong)param_2[2] >> 0x20) * fVar7 +
                       (float)((ulong)param_2[4] >> 0x20) * fVar8 +
                       (float)((ulong)param_2[6] >> 0x20),
                       (float)*param_2 * fVar6 + (float)param_2[2] * fVar7 +
                       (float)param_2[4] * fVar8 + (float)param_2[6]);
    *(float *)(puVar3 + 1) = fVar6 * fVar9 + fVar7 * fVar10 + fVar8 * fVar11 + fVar12;
    *(undefined8 *)((long)puVar3 + 0x14) = uStack_68;
    *(undefined8 *)((long)puVar3 + 0xc) = uStack_70;
    fVar6 = *param_4;
    fVar7 = param_4[1];
    fVar8 = param_4[2];
    fVar9 = *(float *)(param_2 + 1);
    fVar10 = *(float *)(param_2 + 3);
    fVar11 = *(float *)(param_2 + 5);
    fVar12 = *(float *)(param_2 + 7);
    *(ulong *)((long)puVar3 + 0x1c) =
         CONCAT44((float)((ulong)*param_2 >> 0x20) * fVar6 +
                  (float)((ulong)param_2[2] >> 0x20) * fVar7 +
                  (float)((ulong)param_2[4] >> 0x20) * fVar8 + (float)((ulong)param_2[6] >> 0x20),
                  (float)*param_2 * fVar6 + (float)param_2[2] * fVar7 +
                  (float)param_2[4] * fVar8 + (float)param_2[6]);
    *(float *)((long)puVar3 + 0x24) = fVar6 * fVar9 + fVar7 * fVar10 + fVar8 * fVar11 + fVar12;
    puVar3[6] = uStack_68;
    puVar3[5] = uStack_70;
    fVar6 = *param_5;
    fVar7 = param_5[1];
    fVar8 = param_5[2];
    fVar9 = *(float *)(param_2 + 1);
    fVar10 = *(float *)(param_2 + 3);
    fVar11 = *(float *)(param_2 + 5);
    fVar12 = *(float *)(param_2 + 7);
    puVar3[7] = CONCAT44((float)((ulong)*param_2 >> 0x20) * fVar6 +
                         (float)((ulong)param_2[2] >> 0x20) * fVar7 +
                         (float)((ulong)param_2[4] >> 0x20) * fVar8 +
                         (float)((ulong)param_2[6] >> 0x20),
                         (float)*param_2 * fVar6 + (float)param_2[2] * fVar7 +
                         (float)param_2[4] * fVar8 + (float)param_2[6]);
    *(float *)(puVar3 + 8) = fVar6 * fVar9 + fVar7 * fVar10 + fVar8 * fVar11 + fVar12;
    *(undefined8 *)((long)puVar3 + 0x4c) = uStack_68;
    *(undefined8 *)((long)puVar3 + 0x44) = uStack_70;
    FUN_10a54c4ac(*(undefined8 *)(lVar2 + 0x58),puVar3,uVar4);
    lVar5 = lVar5 + 1;
  } while (lVar1 != lVar5);
  return;
}



/* Entry: 10aaf8ba0; end: 10aaf8c7b;  */

uint FUN_10aaf8ba0(long param_1,int param_2,long param_3,byte *param_4)

{
  byte bVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  if (param_2 < 4) {
    if (param_2 == 0) {
      return (uint)(*(float *)(param_1 + 0xc) < 1.0);
    }
    if (param_2 == 1) {
      bVar1 = *param_4;
      if ((bVar1 >> 1 & 1) != 0) {
        return 0;
      }
      if ((bVar1 >> 2 & 1) == 0) {
        *(undefined4 *)(param_1 + 0xc) = 0x3f800000;
        bVar1 = *param_4;
      }
      return 2 - (bVar1 & 1);
    }
    return (uint)(param_2 == 3);
  }
  if (param_2 != 4) {
    if (param_2 == 5) {
      if (param_3 == 0) {
        return 0;
      }
      fVar2 = *(float *)(param_1 + 0xc);
    }
    else {
      if (param_2 != 6) {
        return 0;
      }
      fVar2 = *(float *)(param_1 + 0xc);
      if (param_3 == 0) {
        fVar4 = 1.0;
        if (fVar2 <= 1.0) {
          fVar4 = fVar2;
        }
        fVar3 = 0.0;
        if (0.0 <= fVar2) {
          fVar3 = fVar4;
        }
        *(float *)(param_1 + 0xc) = (fVar3 * 0.75) / (fVar3 * -0.25 + 1.0);
        return 1;
      }
    }
    *(float *)(param_1 + 0xc) = fVar2 * 0.25;
  }
  return 2;
}



/* Entry: 10aaf8c7c; end: 10aaf92af;  */

void FUN_10aaf8c7c(long param_1,undefined8 *param_2,long param_3,long param_4,ulong param_5,
                  long param_6,uint *param_7,undefined8 *param_8,char param_9)

{
  long lVar1;
  float *pfVar2;
  float *pfVar3;
  uint uVar4;
  uint uVar5;
  undefined4 uVar6;
  byte bVar7;
  byte bVar8;
  ushort uVar9;
  undefined4 uVar10;
  code *pcVar11;
  long lVar12;
  undefined8 *puVar13;
  long lVar14;
  undefined8 *puVar15;
  bool bVar16;
  ulong uVar17;
  uint *puVar18;
  int iVar19;
  ulong uVar20;
  float *pfVar21;
  undefined8 *puVar22;
  undefined8 *puVar23;
  undefined8 uVar24;
  long lVar25;
  long lVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  long lStack_98;
  long lStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined8 uStack_6c;
  
  bVar16 = false;
  lStack_98 = 0;
  lStack_90 = 0;
  uStack_88 = 0;
  uVar17 = 0;
  do {
    uVar20 = 0;
    pfVar21 = (float *)(param_2 + uVar17 * 2);
    do {
      iVar19 = (int)uVar20;
      pfVar3 = pfVar21;
      if (iVar19 == 1) {
        pfVar3 = pfVar21 + 1;
      }
      pfVar2 = pfVar21 + 2;
      if (iVar19 != 2) {
        pfVar2 = pfVar3;
      }
      pfVar3 = pfVar21 + 3;
      if (iVar19 != 3) {
        pfVar3 = pfVar2;
      }
      fVar27 = 1.0;
      if (uVar17 != uVar20) {
        fVar27 = 0.0;
      }
      lVar25 = param_4;
      if (1e-06 < ABS(*pfVar3 - fVar27)) {
        if ((!bVar16) && (func_0x0001096b5198(&lStack_98,param_5), lVar25 = lStack_98, param_5 != 0)
           ) {
          lVar26 = 0;
          uVar17 = 0;
          pfVar21 = (float *)(param_4 + 8);
          do {
            uVar20 = (lStack_90 - lStack_98 >> 2) * -0x5555555555555555;
            if (uVar20 < uVar17 || uVar20 - uVar17 == 0) {
                    /* WARNING: Does not return */
              pcVar11 = (code *)SoftwareBreakpoint(1,0x10aaf9288);
              (*pcVar11)();
            }
            fVar27 = *(float *)(param_2 + 1);
            fVar28 = pfVar21[-2];
            fVar29 = pfVar21[-1];
            fVar30 = *(float *)(param_2 + 3);
            fVar31 = *pfVar21;
            fVar32 = *(float *)(param_2 + 5);
            fVar33 = *(float *)(param_2 + 7);
            *(undefined8 *)(lStack_98 + lVar26) =
                 CONCAT44((float)((ulong)*param_2 >> 0x20) * fVar28 +
                          (float)((ulong)param_2[2] >> 0x20) * fVar29 +
                          (float)((ulong)param_2[4] >> 0x20) * fVar31 +
                          (float)((ulong)param_2[6] >> 0x20),
                          (float)*param_2 * fVar28 + (float)param_2[2] * fVar29 +
                          (float)param_2[4] * fVar31 + (float)param_2[6]);
            *(float *)((undefined8 *)(lStack_98 + lVar26) + 1) =
                 fVar28 * fVar27 + fVar29 * fVar30 + fVar31 * fVar32 + fVar33;
            uVar17 = uVar17 + 1;
            lVar26 = lVar26 + 0xc;
            pfVar21 = pfVar21 + 3;
            lVar25 = lStack_98;
          } while (param_5 != uVar17);
        }
        goto LAB_10aaf8e00;
      }
      uVar20 = uVar20 + 1;
    } while (uVar20 != 4);
    uVar20 = uVar17 + 1;
    bVar16 = 2 < uVar17;
    uVar17 = uVar20;
    if (uVar20 == 4) {
LAB_10aaf8e00:
      lVar26 = 0;
      lVar1 = 1;
      if ((byte)(param_9 - 5U) < 2) {
        lVar1 = 2;
      }
      do {
        uStack_a8 = param_8[1];
        uStack_b0 = *param_8;
        puVar13 = &uStack_b0;
        FUN_10aaf8ba0(puVar13,param_9,lVar26,param_1 + 0x19);
        lVar12 = param_1;
        FUN_10aaf892c(param_1,puVar13);
        puVar13 = *(undefined8 **)(lVar12 + 0x20);
        lVar14 = param_3 * 0xa8;
        FUN_10a54c3a0(puVar13,param_3 * 0xa8);
        uVar10 = uStack_70;
        uVar6 = uStack_74;
        uStack_70 = (undefined4)((ulong)uStack_b0 >> 0x20);
        uStack_74 = (undefined4)uStack_b0;
        if (param_6 == 1) {
          puVar15 = puVar13;
          puVar18 = param_7;
          if (param_3 != 0) {
            do {
              bVar7 = *(byte *)((long)puVar18 + 1);
              bVar8 = *(byte *)((long)puVar18 + 2);
              puVar22 = (undefined8 *)(lVar25 + (ulong)(byte)*puVar18 * 0xc);
              uVar24 = *puVar22;
              uVar6 = *(undefined4 *)(puVar22 + 1);
              *(undefined8 *)((long)puVar15 + 0x14) = uStack_a8;
              *(undefined8 *)((long)puVar15 + 0xc) = uStack_b0;
              puVar15[1] = CONCAT44(uStack_74,uVar6);
              *puVar15 = uVar24;
              puVar23 = (undefined8 *)(lVar25 + (ulong)bVar7 * 0xc);
              uVar24 = *puVar23;
              *(ulong *)((long)puVar15 + 0x24) = CONCAT44(uStack_74,*(undefined4 *)(puVar23 + 1));
              *(undefined8 *)((long)puVar15 + 0x1c) = uVar24;
              puVar15[6] = uStack_a8;
              puVar15[5] = uStack_b0;
              uVar24 = *puVar23;
              puVar15[8] = CONCAT44(uStack_74,*(undefined4 *)(puVar23 + 1));
              puVar15[7] = uVar24;
              *(undefined8 *)((long)puVar15 + 0x4c) = uStack_a8;
              *(undefined8 *)((long)puVar15 + 0x44) = uStack_b0;
              puVar23 = (undefined8 *)(lVar25 + (ulong)bVar8 * 0xc);
              uVar24 = *puVar23;
              *(ulong *)((long)puVar15 + 0x5c) = CONCAT44(uStack_74,*(undefined4 *)(puVar23 + 1));
              *(undefined8 *)((long)puVar15 + 0x54) = uVar24;
              puVar15[0xd] = uStack_a8;
              puVar15[0xc] = uStack_b0;
              uVar24 = *puVar23;
              puVar15[0xf] = CONCAT44(uStack_74,*(undefined4 *)(puVar23 + 1));
              puVar15[0xe] = uVar24;
              *(undefined8 *)((long)puVar15 + 0x84) = uStack_a8;
              *(undefined8 *)((long)puVar15 + 0x7c) = uStack_b0;
              uStack_80 = *puVar22;
              uStack_78 = *(undefined4 *)(puVar22 + 1);
              uStack_6c = uStack_a8;
              *(ulong *)((long)puVar15 + 0x94) = CONCAT44(uStack_74,uStack_78);
              *(undefined8 *)((long)puVar15 + 0x8c) = uStack_80;
              puVar15[0x14] = uStack_a8;
              puVar15[0x13] = uStack_b0;
              puVar18 = (uint *)((long)puVar18 + 3);
              puVar15 = puVar15 + 0x15;
              uVar6 = uStack_74;
              uVar10 = uStack_70;
            } while (puVar18 != (uint *)((long)param_7 + param_3 * 3));
          }
        }
        else if (param_6 == 2) {
          puVar15 = puVar13;
          puVar18 = param_7;
          if (param_3 * 6 != 0) {
            do {
              uVar9 = *(ushort *)((long)puVar18 + 2);
              uVar4 = puVar18[1];
              puVar22 = (undefined8 *)(lVar25 + (ulong)(ushort)*puVar18 * 0xc);
              uVar24 = *puVar22;
              uVar6 = *(undefined4 *)(puVar22 + 1);
              *(undefined8 *)((long)puVar15 + 0x14) = uStack_a8;
              *(undefined8 *)((long)puVar15 + 0xc) = uStack_b0;
              puVar15[1] = CONCAT44(uStack_74,uVar6);
              *puVar15 = uVar24;
              puVar23 = (undefined8 *)(lVar25 + (ulong)uVar9 * 0xc);
              uVar24 = *puVar23;
              *(ulong *)((long)puVar15 + 0x24) = CONCAT44(uStack_74,*(undefined4 *)(puVar23 + 1));
              *(undefined8 *)((long)puVar15 + 0x1c) = uVar24;
              puVar15[6] = uStack_a8;
              puVar15[5] = uStack_b0;
              uVar24 = *puVar23;
              puVar15[8] = CONCAT44(uStack_74,*(undefined4 *)(puVar23 + 1));
              puVar15[7] = uVar24;
              *(undefined8 *)((long)puVar15 + 0x4c) = uStack_a8;
              *(undefined8 *)((long)puVar15 + 0x44) = uStack_b0;
              puVar23 = (undefined8 *)(lVar25 + (ulong)(ushort)uVar4 * 0xc);
              uVar24 = *puVar23;
              *(ulong *)((long)puVar15 + 0x5c) = CONCAT44(uStack_74,*(undefined4 *)(puVar23 + 1));
              *(undefined8 *)((long)puVar15 + 0x54) = uVar24;
              puVar15[0xd] = uStack_a8;
              puVar15[0xc] = uStack_b0;
              uVar24 = *puVar23;
              puVar15[0xf] = CONCAT44(uStack_74,*(undefined4 *)(puVar23 + 1));
              puVar15[0xe] = uVar24;
              *(undefined8 *)((long)puVar15 + 0x84) = uStack_a8;
              *(undefined8 *)((long)puVar15 + 0x7c) = uStack_b0;
              uStack_80 = *puVar22;
              uStack_78 = *(undefined4 *)(puVar22 + 1);
              uStack_6c = uStack_a8;
              *(ulong *)((long)puVar15 + 0x94) = CONCAT44(uStack_74,uStack_78);
              *(undefined8 *)((long)puVar15 + 0x8c) = uStack_80;
              puVar15[0x14] = uStack_a8;
              puVar15[0x13] = uStack_b0;
              puVar18 = (uint *)((long)puVar18 + 6);
              puVar15 = puVar15 + 0x15;
              uVar6 = uStack_74;
              uVar10 = uStack_70;
            } while (puVar18 != (uint *)((long)param_7 + param_3 * 6));
          }
        }
        else if ((param_6 == 4) && (puVar15 = puVar13, puVar18 = param_7, param_3 * 0xc != 0)) {
          do {
            uVar4 = puVar18[1];
            uVar5 = puVar18[2];
            puVar22 = (undefined8 *)(lVar25 + (ulong)*puVar18 * 0xc);
            uVar24 = *puVar22;
            uVar6 = *(undefined4 *)(puVar22 + 1);
            *(undefined8 *)((long)puVar15 + 0x14) = uStack_a8;
            *(undefined8 *)((long)puVar15 + 0xc) = uStack_b0;
            puVar15[1] = CONCAT44(uStack_74,uVar6);
            *puVar15 = uVar24;
            puVar23 = (undefined8 *)(lVar25 + (ulong)uVar4 * 0xc);
            uVar24 = *puVar23;
            *(ulong *)((long)puVar15 + 0x24) = CONCAT44(uStack_74,*(undefined4 *)(puVar23 + 1));
            *(undefined8 *)((long)puVar15 + 0x1c) = uVar24;
            puVar15[6] = uStack_a8;
            puVar15[5] = uStack_b0;
            uVar24 = *puVar23;
            puVar15[8] = CONCAT44(uStack_74,*(undefined4 *)(puVar23 + 1));
            puVar15[7] = uVar24;
            *(undefined8 *)((long)puVar15 + 0x4c) = uStack_a8;
            *(undefined8 *)((long)puVar15 + 0x44) = uStack_b0;
            puVar23 = (undefined8 *)(lVar25 + (ulong)uVar5 * 0xc);
            uVar24 = *puVar23;
            *(ulong *)((long)puVar15 + 0x5c) = CONCAT44(uStack_74,*(undefined4 *)(puVar23 + 1));
            *(undefined8 *)((long)puVar15 + 0x54) = uVar24;
            puVar15[0xd] = uStack_a8;
            puVar15[0xc] = uStack_b0;
            uVar24 = *puVar23;
            puVar15[0xf] = CONCAT44(uStack_74,*(undefined4 *)(puVar23 + 1));
            puVar15[0xe] = uVar24;
            *(undefined8 *)((long)puVar15 + 0x84) = uStack_a8;
            *(undefined8 *)((long)puVar15 + 0x7c) = uStack_b0;
            uStack_80 = *puVar22;
            uStack_78 = *(undefined4 *)(puVar22 + 1);
            uStack_6c = uStack_a8;
            *(ulong *)((long)puVar15 + 0x94) = CONCAT44(uStack_74,uStack_78);
            *(undefined8 *)((long)puVar15 + 0x8c) = uStack_80;
            puVar15[0x14] = uStack_a8;
            puVar15[0x13] = uStack_b0;
            puVar18 = puVar18 + 3;
            puVar15 = puVar15 + 0x15;
            uVar6 = uStack_74;
            uVar10 = uStack_70;
          } while (puVar18 != param_7 + param_3 * 3);
        }
        uStack_70 = uVar10;
        uStack_74 = uVar6;
        FUN_10a54c4ac(*(undefined8 *)(lVar12 + 0x20),puVar13,lVar14);
        lVar26 = lVar26 + 1;
      } while (lVar26 != lVar1);
      if (lStack_98 != 0) {
        lStack_90 = lStack_98;
        __ZdlPv();
      }
      return;
    }
  } while( true );
}



/* Entry: 10aaf92b0; end: 10aaf962b;  */

void FUN_10aaf92b0(long param_1,undefined8 *param_2,long param_3,long param_4,ulong param_5,
                  long param_6,uint *param_7,undefined8 *param_8,char param_9)

{
  long lVar1;
  float *pfVar2;
  float *pfVar3;
  long lVar4;
  uint *puVar5;
  long lVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  code *pcVar9;
  undefined8 *puVar10;
  long lVar11;
  undefined8 *puVar12;
  long lVar13;
  bool bVar14;
  ulong uVar15;
  int iVar16;
  ulong uVar17;
  float *pfVar18;
  undefined8 *puVar19;
  long lVar20;
  long lVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  long lStack_98;
  long lStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined8 uStack_6c;
  
  bVar14 = false;
  lStack_98 = 0;
  lStack_90 = 0;
  uStack_88 = 0;
  uVar15 = 0;
  do {
    uVar17 = 0;
    pfVar18 = (float *)(param_2 + uVar15 * 2);
    do {
      iVar16 = (int)uVar17;
      pfVar3 = pfVar18;
      if (iVar16 == 1) {
        pfVar3 = pfVar18 + 1;
      }
      pfVar2 = pfVar18 + 2;
      if (iVar16 != 2) {
        pfVar2 = pfVar3;
      }
      pfVar3 = pfVar18 + 3;
      if (iVar16 != 3) {
        pfVar3 = pfVar2;
      }
      fVar22 = 1.0;
      if (uVar15 != uVar17) {
        fVar22 = 0.0;
      }
      lVar20 = param_4;
      if (1e-06 < ABS(*pfVar3 - fVar22)) {
        if ((!bVar14) && (func_0x0001096b5198(&lStack_98,param_5), lVar20 = lStack_98, param_5 != 0)
           ) {
          lVar21 = 0;
          uVar15 = 0;
          pfVar18 = (float *)(param_4 + 8);
          do {
            uVar17 = (lStack_90 - lStack_98 >> 2) * -0x5555555555555555;
            if (uVar17 < uVar15 || uVar17 - uVar15 == 0) {
                    /* WARNING: Does not return */
              pcVar9 = (code *)SoftwareBreakpoint(1,0x10aaf9604);
              (*pcVar9)();
            }
            fVar22 = *(float *)(param_2 + 1);
            fVar23 = pfVar18[-2];
            fVar24 = pfVar18[-1];
            fVar25 = *(float *)(param_2 + 3);
            fVar26 = *pfVar18;
            fVar27 = *(float *)(param_2 + 5);
            fVar28 = *(float *)(param_2 + 7);
            *(undefined8 *)(lStack_98 + lVar21) =
                 CONCAT44((float)((ulong)*param_2 >> 0x20) * fVar23 +
                          (float)((ulong)param_2[2] >> 0x20) * fVar24 +
                          (float)((ulong)param_2[4] >> 0x20) * fVar26 +
                          (float)((ulong)param_2[6] >> 0x20),
                          (float)*param_2 * fVar23 + (float)param_2[2] * fVar24 +
                          (float)param_2[4] * fVar26 + (float)param_2[6]);
            *(float *)((undefined8 *)(lStack_98 + lVar21) + 1) =
                 fVar23 * fVar22 + fVar24 * fVar25 + fVar26 * fVar27 + fVar28;
            uVar15 = uVar15 + 1;
            lVar21 = lVar21 + 0xc;
            pfVar18 = pfVar18 + 3;
            lVar20 = lStack_98;
          } while (param_5 != uVar15);
        }
        goto LAB_10aaf9430;
      }
      uVar17 = uVar17 + 1;
    } while (uVar17 != 4);
    uVar17 = uVar15 + 1;
    bVar14 = 2 < uVar15;
    uVar15 = uVar17;
    if (uVar17 == 4) {
LAB_10aaf9430:
      lVar21 = 0;
      lVar1 = 1;
      if ((byte)(param_9 - 5U) < 2) {
        lVar1 = 2;
      }
      do {
        uStack_a8 = param_8[1];
        uStack_b0 = *param_8;
        puVar10 = &uStack_b0;
        FUN_10aaf8ba0(puVar10,param_9,lVar21,param_1 + 0x19);
        lVar11 = param_1;
        FUN_10aaf892c(param_1,puVar10);
        puVar12 = *(undefined8 **)(lVar11 + 0x58);
        lVar13 = param_3 * 0x54;
        FUN_10a54c3a0(puVar12,param_3 * 0x54);
        uVar8 = uStack_70;
        uVar7 = uStack_74;
        uStack_74 = (undefined4)uStack_b0;
        uStack_70 = (undefined4)((ulong)uStack_b0 >> 0x20);
        puVar10 = puVar12;
        puVar5 = param_7;
        lVar4 = param_3 * 3;
        lVar6 = param_3;
        if (param_6 == 1) {
          while (lVar6 != 0) {
            puVar19 = (undefined8 *)(lVar20 + (ulong)(byte)*puVar5 * 0xc);
            uStack_80 = *puVar19;
            uStack_78 = *(undefined4 *)(puVar19 + 1);
            *(undefined8 *)((long)puVar10 + 0x14) = uStack_a8;
            *(undefined8 *)((long)puVar10 + 0xc) = uStack_b0;
            puVar10[1] = CONCAT44(uStack_74,uStack_78);
            *puVar10 = uStack_80;
            lVar4 = lVar4 + -1;
            puVar10 = (undefined8 *)((long)puVar10 + 0x1c);
            puVar5 = (uint *)((long)puVar5 + 1);
            uVar7 = uStack_74;
            uVar8 = uStack_70;
            uStack_6c = uStack_a8;
            lVar6 = lVar4;
          }
        }
        else {
          lVar4 = param_3 * 6;
          if (param_6 == 2) {
            for (; lVar4 != 0; lVar4 = lVar4 + -2) {
              puVar19 = (undefined8 *)(lVar20 + (ulong)(ushort)*puVar5 * 0xc);
              uStack_80 = *puVar19;
              uStack_78 = *(undefined4 *)(puVar19 + 1);
              *(undefined8 *)((long)puVar10 + 0x14) = uStack_a8;
              *(undefined8 *)((long)puVar10 + 0xc) = uStack_b0;
              puVar10[1] = CONCAT44(uStack_74,uStack_78);
              *puVar10 = uStack_80;
              puVar10 = (undefined8 *)((long)puVar10 + 0x1c);
              puVar5 = (uint *)((long)puVar5 + 2);
              uVar7 = uStack_74;
              uVar8 = uStack_70;
              uStack_6c = uStack_a8;
            }
          }
          else {
            lVar4 = param_3 * 0xc;
            if (param_6 == 4) {
              for (; lVar4 != 0; lVar4 = lVar4 + -4) {
                puVar19 = (undefined8 *)(lVar20 + (ulong)*puVar5 * 0xc);
                uStack_80 = *puVar19;
                uStack_78 = *(undefined4 *)(puVar19 + 1);
                *(undefined8 *)((long)puVar10 + 0x14) = uStack_a8;
                *(undefined8 *)((long)puVar10 + 0xc) = uStack_b0;
                puVar10[1] = CONCAT44(uStack_74,uStack_78);
                *puVar10 = uStack_80;
                puVar10 = (undefined8 *)((long)puVar10 + 0x1c);
                puVar5 = puVar5 + 1;
                uVar7 = uStack_74;
                uVar8 = uStack_70;
                uStack_6c = uStack_a8;
              }
            }
          }
        }
        uStack_70 = uVar8;
        uStack_74 = uVar7;
        FUN_10a54c4ac(*(undefined8 *)(lVar11 + 0x58),puVar12,lVar13);
        lVar21 = lVar21 + 1;
      } while (lVar21 != lVar1);
      if (lStack_98 != 0) {
        lStack_90 = lStack_98;
        __ZdlPv();
      }
      return;
    }
  } while( true );
}



/* Entry: 10aaf962c; end: 10aaf97c3;  */

void FUN_10aaf962c(long param_1,undefined8 *param_2,float *param_3,float *param_4,
                  undefined8 *param_5,undefined8 param_6)

{
  long lVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  long lVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  lVar5 = 0;
  lVar1 = 1;
  if (((int)param_6 - 5U & 0xff) < 2) {
    lVar1 = 2;
  }
  do {
    uStack_68 = param_5[1];
    uStack_70 = *param_5;
    puVar3 = &uStack_70;
    FUN_10aaf8ba0(&uStack_70,param_6,lVar5,param_1 + 0x19);
    lVar2 = param_1;
    FUN_10aaf892c(param_1,puVar3);
    puVar3 = *(undefined8 **)(lVar2 + 0x20);
    uVar4 = 0x38;
    FUN_10a54c3a0(puVar3,0x38);
    fVar6 = *param_3;
    fVar7 = param_3[1];
    fVar8 = param_3[2];
    fVar9 = *(float *)(param_2 + 1);
    fVar10 = *(float *)(param_2 + 3);
    fVar11 = *(float *)(param_2 + 5);
    fVar12 = *(float *)(param_2 + 7);
    *puVar3 = CONCAT44((float)((ulong)*param_2 >> 0x20) * fVar6 +
                       (float)((ulong)param_2[2] >> 0x20) * fVar7 +
                       (float)((ulong)param_2[4] >> 0x20) * fVar8 +
                       (float)((ulong)param_2[6] >> 0x20),
                       (float)*param_2 * fVar6 + (float)param_2[2] * fVar7 +
                       (float)param_2[4] * fVar8 + (float)param_2[6]);
    *(float *)(puVar3 + 1) = fVar6 * fVar9 + fVar7 * fVar10 + fVar8 * fVar11 + fVar12;
    *(undefined8 *)((long)puVar3 + 0x14) = uStack_68;
    *(undefined8 *)((long)puVar3 + 0xc) = uStack_70;
    fVar6 = *param_4;
    fVar7 = param_4[1];
    fVar8 = param_4[2];
    fVar9 = *(float *)(param_2 + 1);
    fVar10 = *(float *)(param_2 + 3);
    fVar11 = *(float *)(param_2 + 5);
    fVar12 = *(float *)(param_2 + 7);
    *(ulong *)((long)puVar3 + 0x1c) =
         CONCAT44((float)((ulong)*param_2 >> 0x20) * fVar6 +
                  (float)((ulong)param_2[2] >> 0x20) * fVar7 +
                  (float)((ulong)param_2[4] >> 0x20) * fVar8 + (float)((ulong)param_2[6] >> 0x20),
                  (float)*param_2 * fVar6 + (float)param_2[2] * fVar7 +
                  (float)param_2[4] * fVar8 + (float)param_2[6]);
    *(float *)((long)puVar3 + 0x24) = fVar6 * fVar9 + fVar7 * fVar10 + fVar8 * fVar11 + fVar12;
    puVar3[6] = uStack_68;
    puVar3[5] = uStack_70;
    FUN_10a54c4ac(*(undefined8 *)(lVar2 + 0x20),puVar3,uVar4);
    lVar5 = lVar5 + 1;
  } while (lVar1 != lVar5);
  return;
}



/* Entry: 10aaf97c4; end: 10aaf99bb;  */

void FUN_10aaf97c4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4,
                  undefined8 param_5,undefined8 param_6)

{
  long lVar1;
  undefined4 uVar2;
  ulong uVar3;
  code *pcVar4;
  undefined8 *puVar5;
  long lVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  ulong uVar9;
  undefined8 *puVar10;
  ulong uVar11;
  undefined8 *puVar12;
  ulong uVar13;
  undefined8 uVar14;
  long lVar15;
  undefined4 uStack_f4;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 *puStack_c8;
  undefined8 *puStack_c0;
  undefined1 auStack_b0 [64];
  undefined8 uStack_70;
  undefined4 uStack_68;
  
  uStack_70 = 0x3f800000;
  uStack_68 = 0;
  FUN_10aaf99bc(auStack_b0,param_2,param_3,param_6);
  FUN_10a1322a0(&puStack_c8,0x23);
  FUN_10aaf9b1c(0x3e37d3fb,puStack_c8,
                ((long)puStack_c0 - (long)puStack_c8 >> 2) * -0x5555555555555555,&uStack_70,
                auStack_b0);
  lVar15 = 0;
  lVar1 = 1;
  if (((int)param_5 - 5U & 0xff) < 2) {
    lVar1 = 2;
  }
  do {
    uStack_d8 = param_4[1];
    uStack_e0 = *param_4;
    puVar5 = &uStack_e0;
    FUN_10aaf8ba0(puVar5,param_5,lVar15,param_1 + 0x19);
    lVar6 = param_1;
    FUN_10aaf892c(param_1,puVar5);
    puVar7 = *(undefined8 **)(lVar6 + 0x20);
    uVar8 = 0x7a8;
    FUN_10a54c3a0(puVar7,0x7a8);
    uVar9 = ((long)puStack_c0 - (long)puStack_c8 >> 2) * -0x5555555555555555;
    puVar10 = puStack_c8;
    puVar5 = puVar7;
    uVar3 = 0;
    uVar13 = 0x22;
    do {
      uVar11 = uVar3;
      if (uVar9 < uVar13 || uVar9 - uVar13 == 0) {
LAB_10aaf9990:
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x10aaf9994);
        (*pcVar4)();
      }
      puVar12 = (undefined8 *)((long)puStack_c8 + uVar13 * 0xc);
      uVar14 = *puVar12;
      uVar2 = *(undefined4 *)(puVar12 + 1);
      uStack_f4 = (undefined4)uStack_e0;
      *(undefined8 *)((long)puVar5 + 0x14) = uStack_d8;
      *(undefined8 *)((long)puVar5 + 0xc) = uStack_e0;
      puVar5[1] = CONCAT44(uStack_f4,uVar2);
      *puVar5 = uVar14;
      if (uVar9 - uVar11 == 0) goto LAB_10aaf9990;
      uVar14 = *puVar10;
      uVar2 = *(undefined4 *)(puVar10 + 1);
      puVar5[6] = uStack_d8;
      puVar5[5] = uStack_e0;
      *(ulong *)((long)puVar5 + 0x24) = CONCAT44(uStack_f4,uVar2);
      *(undefined8 *)((long)puVar5 + 0x1c) = uVar14;
      puVar5 = puVar5 + 7;
      puVar10 = (undefined8 *)((long)puVar10 + 0xc);
      uVar3 = uVar11 + 1;
      uVar13 = uVar11;
    } while (uVar11 + 1 != 0x23);
    FUN_10a54c4ac(*(undefined8 *)(lVar6 + 0x20),puVar7,uVar8);
    lVar15 = lVar15 + 1;
    if (lVar15 == lVar1) {
      if (puStack_c8 != (undefined8 *)0x0) {
        puStack_c0 = puStack_c8;
        __ZdlPv();
      }
      return;
    }
  } while( true );
}



/* Entry: 10aaf99bc; end: 10aaf9b1b;  */

void FUN_10aaf99bc(float param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4,
                  ulong param_5)

{
  long lVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  undefined8 uVar7;
  float fStack_150;
  undefined8 uStack_14c;
  undefined8 uStack_144;
  float fStack_13c;
  undefined8 uStack_138;
  undefined8 uStack_130;
  float fStack_128;
  float fStack_124;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined4 uStack_110;
  undefined8 uStack_10c;
  undefined8 uStack_104;
  undefined4 uStack_fc;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  float fStack_d8;
  float fStack_d4;
  undefined8 uStack_d0;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined8 uStack_c0;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined8 uStack_b0;
  undefined4 uStack_a8;
  undefined8 uStack_a4;
  undefined8 uStack_9c;
  undefined4 uStack_94;
  undefined1 auStack_90 [64];
  
  uStack_110 = 0x3f800000;
  uStack_104 = 0;
  uStack_10c = 0;
  uStack_fc = 0x3f800000;
  uStack_f8 = 0;
  uStack_f0 = 0;
  fVar2 = *(float *)(param_4 + 1) * 0.0;
  fVar3 = (float)*param_4;
  fVar5 = fVar3 * 0.0;
  fVar4 = (float)((ulong)*param_4 >> 0x20);
  fVar6 = fVar4 * 0.0;
  uVar7 = NEON_rev64(CONCAT44(fVar6,fVar5),4);
  fVar5 = fVar5 + fVar6;
  uStack_e0 = CONCAT44(fVar4 + (float)((ulong)uVar7 >> 0x20) + fVar2 + 0.0,
                       fVar3 + (float)uVar7 + fVar2 + 0.0);
  fStack_d8 = *(float *)(param_4 + 1) + fVar5 + 0.0;
  fStack_d4 = fVar5 + fVar2 + 1.0;
  uStack_e8 = 0x3f800000;
  func_0x000109519fd0(&uStack_d0,param_3,&uStack_110);
  fStack_124 = param_1 * 0.0;
  uStack_144 = CONCAT44(fStack_124,fStack_124);
  uStack_14c = CONCAT44(fStack_124,fStack_124);
  uStack_138 = CONCAT44(fStack_124,fStack_124);
  uStack_120 = 0;
  uStack_118 = 0x3f80000000000000;
  fStack_150 = param_1;
  fStack_13c = param_1;
  uStack_130 = uStack_144;
  fStack_128 = param_1;
  func_0x000109519fd0(auStack_90,&uStack_d0,&fStack_150);
  lVar1 = (param_5 & 0xffffffff) * 0x24;
  uStack_c8 = *(undefined4 *)(&UNK_10e49612c + lVar1);
  uStack_b8 = *(undefined4 *)(&UNK_10e496138 + lVar1);
  uStack_a8 = *(undefined4 *)(&UNK_10e496144 + lVar1);
  uStack_d0 = *(undefined8 *)(&UNK_10e496124 + lVar1);
  uStack_c4 = 0;
  uStack_c0 = *(undefined8 *)(&UNK_10e496130 + lVar1);
  uStack_b4 = 0;
  uStack_b0 = *(undefined8 *)(&UNK_10e49613c + lVar1);
  uStack_9c = 0;
  uStack_a4 = 0;
  uStack_94 = 0x3f800000;
  func_0x000109519fd0(param_2,auStack_90,&uStack_d0);
  return;
}



/* Entry: 10aaf9b1c; end: 10aaf9bdb;  */

void FUN_10aaf9b1c(float param_1,float param_2,undefined8 *param_3,long param_4,float *param_5,
                  undefined8 *param_6)

{
  undefined8 *puVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  
  ___sincosf_stret();
  fVar4 = *param_5;
  fVar2 = param_5[1];
  fVar3 = param_5[2];
  puVar1 = (undefined8 *)((long)param_3 + param_4 * 0xc);
  while( true ) {
    fVar5 = *(float *)(param_6 + 1);
    fVar6 = *(float *)(param_6 + 3);
    fVar7 = *(float *)(param_6 + 5);
    fVar8 = *(float *)(param_6 + 7);
    *param_3 = CONCAT44((float)((ulong)*param_6 >> 0x20) * fVar4 +
                        (float)((ulong)param_6[2] >> 0x20) * fVar2 +
                        (float)((ulong)param_6[4] >> 0x20) * fVar3 +
                        (float)((ulong)param_6[6] >> 0x20),
                        (float)*param_6 * fVar4 + (float)param_6[2] * fVar2 +
                        (float)param_6[4] * fVar3 + (float)param_6[6]);
    *(float *)(param_3 + 1) = fVar4 * fVar5 + fVar2 * fVar6 + fVar3 * fVar7 + fVar8;
    param_3 = (undefined8 *)((long)param_3 + 0xc);
    if (param_3 == puVar1) break;
    fVar5 = param_1 * fVar4;
    fVar4 = fVar2 * -param_1 + fVar4 * param_2;
    fVar2 = fVar5 + fVar2 * param_2;
  }
  return;
}



/* Entry: 10aaf9bdc; end: 10aaf9e4f;  */

void FUN_10aaf9bdc(undefined8 param_1,float param_2,float param_3,long param_4,undefined8 *param_5,
                  long param_6,undefined8 *param_7,undefined8 *param_8,undefined8 param_9)

{
  long lVar1;
  code *pcVar2;
  bool bVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined **ppuVar6;
  undefined8 *puVar7;
  undefined **ppuVar8;
  undefined *puVar9;
  long lVar10;
  int iVar11;
  undefined4 uVar12;
  uint uVar13;
  ulong uVar14;
  float *pfVar15;
  ulong uVar16;
  undefined8 *puVar17;
  undefined8 uVar18;
  long lVar19;
  ulong uVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined4 uStack_114;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 *puStack_f0;
  undefined8 *puStack_e8;
  undefined *puStack_d8;
  undefined8 uStack_d0;
  float fStack_94;
  float fStack_90;
  undefined4 uStack_8c;
  
  uVar12 = (undefined4)((ulong)param_9 >> 0x20);
  iVar11 = (int)param_9;
  param_3 = param_3 - param_2;
  puStack_d8 = &UNK_10f68f2ac;
  uStack_d0 = 0x42;
  if (6.2831855 < param_3) {
    ppuVar6 = &puStack_d8;
    FUN_10a0edfc4();
    if (puStack_f0 != (undefined8 *)0x0) {
      puStack_e8 = puStack_f0;
      __ZdlPv();
    }
    __Unwind_Resume();
    lVar19 = 0;
    lVar1 = 1;
    if ((iVar11 - 5U & 0xff) < 2) {
      lVar1 = 2;
    }
    uVar20 = (ulong)param_7 & 0xfffffffffffffffe;
    do {
      uStack_188 = param_8[1];
      uStack_190 = *param_8;
      puVar7 = &uStack_190;
      FUN_10aaf8ba0(puVar7,CONCAT44(uVar12,iVar11),lVar19,(long)ppuVar6 + 0x19);
      ppuVar8 = ppuVar6;
      FUN_10aaf892c(ppuVar6,puVar7);
      puVar9 = ppuVar8[4];
      lVar4 = uVar20 * 0x1c;
      FUN_10a54c3a0(puVar9,uVar20 * 0x1c);
      if (uVar20 != 0) {
        puVar7 = (undefined8 *)(puVar9 + 0xc);
        pfVar15 = (float *)(param_6 + 8);
        uVar16 = uVar20;
        puVar17 = param_7;
        do {
          if (puVar17 == (undefined8 *)0x0) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x10aaf9fb4);
            (*pcVar2)();
          }
          fVar21 = pfVar15[-2];
          fVar22 = pfVar15[-1];
          fVar23 = *pfVar15;
          fVar24 = *(float *)(param_5 + 1);
          fVar25 = *(float *)(param_5 + 3);
          fVar26 = *(float *)(param_5 + 5);
          fVar27 = *(float *)(param_5 + 7);
          *(ulong *)((long)puVar7 + -0xc) =
               CONCAT44((float)((ulong)*param_5 >> 0x20) * fVar21 +
                        (float)((ulong)param_5[2] >> 0x20) * fVar22 +
                        (float)((ulong)param_5[4] >> 0x20) * fVar23 +
                        (float)((ulong)param_5[6] >> 0x20),
                        (float)*param_5 * fVar21 + (float)param_5[2] * fVar22 +
                        (float)param_5[4] * fVar23 + (float)param_5[6]);
          *(float *)((long)puVar7 + -4) =
               fVar21 * fVar24 + fVar22 * fVar25 + fVar23 * fVar26 + fVar27;
          puVar7[1] = uStack_188;
          *puVar7 = uStack_190;
          puVar17 = (undefined8 *)((long)puVar17 - 1);
          uVar16 = uVar16 - 1;
          puVar7 = (undefined8 *)((long)puVar7 + 0x1c);
          pfVar15 = pfVar15 + 3;
        } while (uVar16 != 0);
      }
      FUN_10a54c4ac(ppuVar8[4],puVar9,lVar4);
      lVar19 = lVar19 + 1;
    } while (lVar19 != lVar1);
    return;
  }
  uStack_8c = 0;
  fStack_90 = param_2;
  ___sincosf_stret();
  uVar13 = (uint)((param_3 / 6.2831855) * 35.0 + 0.5);
  if ((int)uVar13 < 3) {
    uVar13 = 2;
  }
  if (0x22 < (int)uVar13) {
    uVar13 = 0x23;
  }
  fStack_94 = param_2;
  FUN_10aaf99bc(param_1,&puStack_d8,param_5,param_6,param_9);
  uVar20 = (ulong)uVar13 - 1;
  FUN_10a1322a0(&puStack_f0,(ulong)uVar13);
  FUN_10aaf9b1c(param_3 / (float)uVar20,puStack_f0,
                ((long)puStack_e8 - (long)puStack_f0 >> 2) * -0x5555555555555555,&fStack_94,
                &puStack_d8);
  lVar19 = 0;
  lVar1 = 1;
  if (((int)param_8 - 5U & 0xff) < 2) {
    lVar1 = 2;
  }
  do {
    uStack_f8 = param_7[1];
    uStack_100 = *param_7;
    puVar7 = &uStack_100;
    FUN_10aaf8ba0(puVar7,param_8,lVar19,param_4 + 0x19);
    lVar4 = param_4;
    FUN_10aaf892c(param_4,puVar7);
    puVar5 = *(undefined8 **)(lVar4 + 0x20);
    lVar10 = uVar20 * 0x38;
    FUN_10a54c3a0(puVar5,uVar20 * 0x38);
    uVar14 = ((long)puStack_e8 - (long)puStack_f0 >> 2) * -0x5555555555555555;
    bVar3 = uVar14 != 0;
    puVar17 = puStack_f0;
    uVar16 = uVar20;
    puVar7 = puVar5;
    do {
      if (uVar14 == 0) {
LAB_10aaf9e1c:
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x10aaf9e20);
        (*pcVar2)();
      }
      uVar18 = *puVar17;
      uVar12 = *(undefined4 *)(puVar17 + 1);
      uStack_114 = (undefined4)uStack_100;
      *(undefined8 *)((long)puVar7 + 0x14) = uStack_f8;
      *(undefined8 *)((long)puVar7 + 0xc) = uStack_100;
      puVar7[1] = CONCAT44(uStack_114,uVar12);
      *puVar7 = uVar18;
      if (bVar3 == uVar14) goto LAB_10aaf9e1c;
      uVar18 = *(undefined8 *)((long)puVar17 + 0xc);
      uVar12 = *(undefined4 *)((long)puVar17 + 0x14);
      puVar7[6] = uStack_f8;
      puVar7[5] = uStack_100;
      *(ulong *)((long)puVar7 + 0x24) = CONCAT44(uStack_114,uVar12);
      *(undefined8 *)((long)puVar7 + 0x1c) = uVar18;
      uVar14 = uVar14 - 1;
      puVar7 = puVar7 + 7;
      uVar16 = uVar16 - 1;
      puVar17 = (undefined8 *)((long)puVar17 + 0xc);
    } while (uVar16 != 0);
    FUN_10a54c4ac(*(undefined8 *)(lVar4 + 0x20),puVar5,lVar10);
    lVar19 = lVar19 + 1;
    if (lVar19 == lVar1) {
      if (puStack_f0 != (undefined8 *)0x0) {
        puStack_e8 = puStack_f0;
        __ZdlPv();
      }
      return;
    }
  } while( true );
}



/* Entry: 10aaf9e50; end: 10aaf9fb3;  */

void FUN_10aaf9e50(long param_1,undefined8 *param_2,long param_3,ulong param_4,undefined8 *param_5,
                  undefined8 param_6)

{
  long lVar1;
  code *pcVar2;
  undefined8 *puVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  float *pfVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  lVar10 = 0;
  lVar1 = 1;
  if (((int)param_6 - 5U & 0xff) < 2) {
    lVar1 = 2;
  }
  uVar11 = param_4 & 0xfffffffffffffffe;
  do {
    uStack_68 = param_5[1];
    uStack_70 = *param_5;
    puVar3 = &uStack_70;
    FUN_10aaf8ba0(puVar3,param_6,lVar10,param_1 + 0x19);
    lVar4 = param_1;
    FUN_10aaf892c(param_1,puVar3);
    lVar5 = *(long *)(lVar4 + 0x20);
    lVar6 = uVar11 * 0x1c;
    FUN_10a54c3a0(lVar5,uVar11 * 0x1c);
    if (uVar11 != 0) {
      puVar3 = (undefined8 *)(lVar5 + 0xc);
      pfVar7 = (float *)(param_3 + 8);
      uVar8 = uVar11;
      uVar9 = param_4;
      do {
        if (uVar9 == 0) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x10aaf9fb4);
          (*pcVar2)();
        }
        fVar12 = pfVar7[-2];
        fVar13 = pfVar7[-1];
        fVar14 = *pfVar7;
        fVar15 = *(float *)(param_2 + 1);
        fVar16 = *(float *)(param_2 + 3);
        fVar17 = *(float *)(param_2 + 5);
        fVar18 = *(float *)(param_2 + 7);
        *(ulong *)((long)puVar3 + -0xc) =
             CONCAT44((float)((ulong)*param_2 >> 0x20) * fVar12 +
                      (float)((ulong)param_2[2] >> 0x20) * fVar13 +
                      (float)((ulong)param_2[4] >> 0x20) * fVar14 +
                      (float)((ulong)param_2[6] >> 0x20),
                      (float)*param_2 * fVar12 + (float)param_2[2] * fVar13 +
                      (float)param_2[4] * fVar14 + (float)param_2[6]);
        *(float *)((long)puVar3 + -4) = fVar12 * fVar15 + fVar13 * fVar16 + fVar14 * fVar17 + fVar18
        ;
        puVar3[1] = uStack_68;
        *puVar3 = uStack_70;
        uVar9 = uVar9 - 1;
        uVar8 = uVar8 - 1;
        puVar3 = (undefined8 *)((long)puVar3 + 0x1c);
        pfVar7 = pfVar7 + 3;
      } while (uVar8 != 0);
    }
    FUN_10a54c4ac(*(undefined8 *)(lVar4 + 0x20),lVar5,lVar6);
    lVar10 = lVar10 + 1;
  } while (lVar10 != lVar1);
  return;
}



/* Entry: 10aaf9fb4; end: 10aafa03f;  */

void FUN_10aaf9fb4(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 *param_5,undefined8 param_6)

{
  long lVar1;
  undefined4 uVar2;
  ulong uVar3;
  code *pcVar4;
  undefined8 *puVar5;
  long lVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  ulong uVar9;
  undefined8 *puVar10;
  ulong uVar11;
  undefined8 *puVar12;
  ulong uVar13;
  undefined8 uVar14;
  long lVar15;
  undefined4 uStack_f4;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 *puStack_c8;
  undefined8 *puStack_c0;
  undefined1 auStack_b0 [64];
  undefined8 uStack_70;
  undefined4 uStack_68;
  
  FUN_10aaf97c4();
  FUN_10aaf97c4(param_1,param_2,param_3,param_4,param_5,param_6,1);
  uStack_70 = 0x3f800000;
  uStack_68 = 0;
  FUN_10aaf99bc(param_1,auStack_b0,param_3,param_4,2);
  FUN_10a1322a0(&puStack_c8,0x23);
  FUN_10aaf9b1c(0x3e37d3fb,puStack_c8,
                ((long)puStack_c0 - (long)puStack_c8 >> 2) * -0x5555555555555555,&uStack_70,
                auStack_b0);
  lVar15 = 0;
  lVar1 = 1;
  if (((int)param_6 - 5U & 0xff) < 2) {
    lVar1 = 2;
  }
  do {
    uStack_d8 = param_5[1];
    uStack_e0 = *param_5;
    puVar5 = &uStack_e0;
    FUN_10aaf8ba0(puVar5,param_6,lVar15,param_2 + 0x19);
    lVar6 = param_2;
    FUN_10aaf892c(param_2,puVar5);
    puVar7 = *(undefined8 **)(lVar6 + 0x20);
    uVar8 = 0x7a8;
    FUN_10a54c3a0(puVar7,0x7a8);
    uVar9 = ((long)puStack_c0 - (long)puStack_c8 >> 2) * -0x5555555555555555;
    puVar10 = puStack_c8;
    puVar5 = puVar7;
    uVar3 = 0;
    uVar13 = 0x22;
    do {
      uVar11 = uVar3;
      if (uVar9 < uVar13 || uVar9 - uVar13 == 0) {
LAB_10aaf9990:
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x10aaf9994);
        (*pcVar4)();
      }
      puVar12 = (undefined8 *)((long)puStack_c8 + uVar13 * 0xc);
      uVar14 = *puVar12;
      uVar2 = *(undefined4 *)(puVar12 + 1);
      uStack_f4 = (undefined4)uStack_e0;
      *(undefined8 *)((long)puVar5 + 0x14) = uStack_d8;
      *(undefined8 *)((long)puVar5 + 0xc) = uStack_e0;
      puVar5[1] = CONCAT44(uStack_f4,uVar2);
      *puVar5 = uVar14;
      if (uVar9 - uVar11 == 0) goto LAB_10aaf9990;
      uVar14 = *puVar10;
      uVar2 = *(undefined4 *)(puVar10 + 1);
      puVar5[6] = uStack_d8;
      puVar5[5] = uStack_e0;
      *(ulong *)((long)puVar5 + 0x24) = CONCAT44(uStack_f4,uVar2);
      *(undefined8 *)((long)puVar5 + 0x1c) = uVar14;
      puVar5 = puVar5 + 7;
      puVar10 = (undefined8 *)((long)puVar10 + 0xc);
      uVar3 = uVar11 + 1;
      uVar13 = uVar11;
    } while (uVar11 + 1 != 0x23);
    FUN_10a54c4ac(*(undefined8 *)(lVar6 + 0x20),puVar7,uVar8);
    lVar15 = lVar15 + 1;
    if (lVar15 == lVar1) {
      if (puStack_c8 != (undefined8 *)0x0) {
        puStack_c0 = puStack_c8;
        __ZdlPv();
      }
      return;
    }
  } while( true );
}



/* Entry: 10aafa040; end: 10aafa1a7;  */

void FUN_10aafa040(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 *param_7,undefined8 param_8)

{
  float *pfVar1;
  long lVar2;
  undefined4 uVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 uVar9;
  long lVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fStack_250;
  float fStack_24c;
  float fStack_248;
  float fStack_244;
  float fStack_240;
  float fStack_23c;
  float fStack_238;
  float fStack_234;
  float fStack_230;
  float fStack_22c;
  float fStack_228;
  float fStack_224;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined4 uStack_210;
  undefined8 uStack_20c;
  undefined8 uStack_204;
  undefined4 uStack_1fc;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  float fStack_1d8;
  float fStack_1d4;
  undefined1 auStack_1d0 [64];
  float fStack_190;
  float fStack_18c;
  float fStack_188;
  float fStack_180;
  float fStack_17c;
  float fStack_178;
  float fStack_170;
  float fStack_16c;
  float fStack_168;
  float fStack_160;
  float fStack_15c;
  float fStack_158;
  undefined4 uStack_f4;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_88 = 0;
  uStack_90 = 0;
  uStack_78 = 0;
  uStack_80 = 0;
  uStack_a8 = 0;
  uStack_b0 = 0;
  uStack_98 = 0;
  uStack_a0 = 0;
  uStack_c8 = 0;
  uStack_d0 = 0;
  uStack_b8 = 0;
  uStack_c0 = 0;
  FUN_10aafa1a8(&uStack_d0,param_6,param_5);
  lVar10 = 0;
  lVar2 = 1;
  if (((int)param_8 - 5U & 0xff) < 2) {
    lVar2 = 2;
  }
  do {
    uStack_d8 = param_7[1];
    uStack_e0 = *param_7;
    puVar4 = &uStack_e0;
    FUN_10aaf8ba0(puVar4,param_8,lVar10,param_4 + 0x19);
    lVar5 = param_4;
    FUN_10aaf892c(param_4,puVar4);
    puVar6 = *(undefined8 **)(lVar5 + 0x20);
    uVar7 = 0x2a0;
    FUN_10a54c3a0(puVar6,0x2a0);
    lVar8 = 0;
    puVar4 = puVar6;
    do {
      uVar9 = *(undefined8 *)((long)&uStack_d0 + (ulong)(byte)(&UNK_10e4f4a39)[lVar8] * 0xc);
      uVar3 = *(undefined4 *)((long)&uStack_c8 + (ulong)(byte)(&UNK_10e4f4a39)[lVar8] * 0xc);
      uStack_f4 = (undefined4)uStack_e0;
      *(undefined8 *)((long)puVar4 + 0x14) = uStack_d8;
      *(undefined8 *)((long)puVar4 + 0xc) = uStack_e0;
      puVar4[1] = CONCAT44(uStack_f4,uVar3);
      *puVar4 = uVar9;
      lVar8 = lVar8 + 1;
      puVar4 = (undefined8 *)((long)puVar4 + 0x1c);
    } while (lVar8 != 0x18);
    lVar8 = *(long *)(lVar5 + 0x20);
    FUN_10a54c4ac(lVar8,puVar6,uVar7);
    fVar16 = (float)param_3;
    fVar15 = (float)param_2;
    fVar14 = (float)uVar9;
    lVar10 = lVar10 + 1;
  } while (lVar10 != lVar2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_70) {
    ___stack_chk_fail();
    uStack_210 = 0x3f800000;
    uStack_204 = 0;
    uStack_20c = 0;
    uStack_1fc = 0x3f800000;
    uStack_1f8 = 0;
    uStack_1f0 = 0;
    fVar11 = *(float *)(puVar6 + 1) * 0.0;
    fVar17 = (float)*puVar6;
    fVar12 = fVar17 * 0.0;
    fVar18 = (float)((ulong)*puVar6 >> 0x20);
    fVar13 = fVar18 * 0.0;
    uVar9 = NEON_rev64(CONCAT44(fVar13,fVar12),4);
    fVar12 = fVar12 + fVar13;
    uStack_1e0 = CONCAT44(fVar18 + (float)((ulong)uVar9 >> 0x20) + fVar11 + 0.0,
                          fVar17 + (float)uVar9 + fVar11 + 0.0);
    fStack_1d8 = *(float *)(puVar6 + 1) + fVar12 + 0.0;
    uStack_1e8 = 0x3f800000;
    fStack_1d4 = fVar12 + fVar11 + 1.0;
    func_0x000109519fd0(auStack_1d0,uVar7,&uStack_210);
    fStack_24c = fVar14 * 0.5 * 0.0;
    fStack_240 = fVar15 * 0.5 * 0.0;
    fStack_230 = fVar16 * 0.5 * 0.0;
    uStack_220 = 0;
    uStack_218 = 0x3f80000000000000;
    fStack_250 = fVar14 * 0.5;
    fStack_248 = fStack_24c;
    fStack_244 = fStack_24c;
    fStack_23c = fVar15 * 0.5;
    fStack_238 = fStack_240;
    fStack_234 = fStack_240;
    fStack_22c = fStack_230;
    fStack_228 = fVar16 * 0.5;
    fStack_224 = fStack_230;
    func_0x000109519fd0(&fStack_190,auStack_1d0,&fStack_250);
    lVar10 = 0;
    do {
      fVar14 = *(float *)(&UNK_10e4f4ec4 + lVar10);
      fVar17 = *(float *)(&UNK_10e4f4ec8 + lVar10);
      fVar19 = *(float *)(&UNK_10e4f4ecc + lVar10);
      fVar15 = *(float *)(&UNK_10e4f4ed0 + lVar10);
      fVar18 = *(float *)(&UNK_10e4f4ed4 + lVar10);
      fVar20 = *(float *)(&UNK_10e4f4ed8 + lVar10);
      fVar16 = *(float *)(&UNK_10e4f4edc + lVar10);
      fVar12 = *(float *)(&UNK_10e4f4ee0 + lVar10);
      fVar21 = *(float *)(&UNK_10e4f4ee4 + lVar10);
      fVar11 = *(float *)(&UNK_10e4f4ee8 + lVar10);
      fVar13 = *(float *)(&UNK_10e4f4eec + lVar10);
      fVar22 = *(float *)(&UNK_10e4f4ef0 + lVar10);
      pfVar1 = (float *)(lVar8 + lVar10);
      *pfVar1 = fVar14 * fStack_190 + fVar17 * fStack_180 + fStack_160 + fVar19 * fStack_170;
      pfVar1[1] = fVar14 * fStack_18c + fVar17 * fStack_17c + fStack_15c + fVar19 * fStack_16c;
      pfVar1[2] = fVar14 * fStack_188 + fVar17 * fStack_178 + fStack_158 + fVar19 * fStack_168;
      pfVar1[3] = fVar15 * fStack_190 + fVar18 * fStack_180 + fStack_160 + fVar20 * fStack_170;
      pfVar1[4] = fVar15 * fStack_18c + fVar18 * fStack_17c + fStack_15c + fVar20 * fStack_16c;
      pfVar1[5] = fVar15 * fStack_188 + fVar18 * fStack_178 + fStack_158 + fVar20 * fStack_168;
      pfVar1[6] = fVar16 * fStack_190 + fVar12 * fStack_180 + fStack_160 + fVar21 * fStack_170;
      pfVar1[7] = fVar16 * fStack_18c + fVar12 * fStack_17c + fStack_15c + fVar21 * fStack_16c;
      pfVar1[8] = fVar16 * fStack_188 + fVar12 * fStack_178 + fStack_158 + fVar21 * fStack_168;
      pfVar1[9] = fVar11 * fStack_190 + fVar13 * fStack_180 + fStack_160 + fVar22 * fStack_170;
      pfVar1[10] = fVar11 * fStack_18c + fVar13 * fStack_17c + fStack_15c + fVar22 * fStack_16c;
      pfVar1[0xb] = fVar11 * fStack_188 + fVar13 * fStack_178 + fStack_158 + fVar22 * fStack_168;
      lVar10 = lVar10 + 0x30;
    } while (lVar10 != 0x60);
    return;
  }
  return;
}



/* Entry: 10aafa1a8; end: 10aafa34b;  */

void FUN_10aafa1a8(float param_1,float param_2,float param_3,long param_4,undefined8 *param_5,
                  undefined8 param_6)

{
  float *pfVar1;
  long lVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  undefined8 uVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fStack_150;
  float fStack_14c;
  float fStack_148;
  float fStack_144;
  float fStack_140;
  float fStack_13c;
  float fStack_138;
  float fStack_134;
  float fStack_130;
  float fStack_12c;
  float fStack_128;
  float fStack_124;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined4 uStack_110;
  undefined8 uStack_10c;
  undefined8 uStack_104;
  undefined4 uStack_fc;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  float fStack_d8;
  float fStack_d4;
  undefined1 auStack_d0 [64];
  float fStack_90;
  float fStack_8c;
  float fStack_88;
  float fStack_80;
  float fStack_7c;
  float fStack_78;
  float fStack_70;
  float fStack_6c;
  float fStack_68;
  float fStack_60;
  float fStack_5c;
  float fStack_58;
  
  uStack_110 = 0x3f800000;
  uStack_104 = 0;
  uStack_10c = 0;
  uStack_fc = 0x3f800000;
  uStack_f8 = 0;
  uStack_f0 = 0;
  fVar3 = *(float *)(param_5 + 1) * 0.0;
  fVar7 = (float)*param_5;
  fVar4 = fVar7 * 0.0;
  fVar8 = (float)((ulong)*param_5 >> 0x20);
  fVar5 = fVar8 * 0.0;
  uVar6 = NEON_rev64(CONCAT44(fVar5,fVar4),4);
  fVar4 = fVar4 + fVar5;
  uStack_e0 = CONCAT44(fVar8 + (float)((ulong)uVar6 >> 0x20) + fVar3 + 0.0,
                       fVar7 + (float)uVar6 + fVar3 + 0.0);
  fStack_d8 = *(float *)(param_5 + 1) + fVar4 + 0.0;
  uStack_e8 = 0x3f800000;
  fStack_d4 = fVar4 + fVar3 + 1.0;
  func_0x000109519fd0(auStack_d0,param_6,&uStack_110);
  fStack_14c = param_1 * 0.5 * 0.0;
  fStack_140 = param_2 * 0.5 * 0.0;
  fStack_130 = param_3 * 0.5 * 0.0;
  uStack_120 = 0;
  uStack_118 = 0x3f80000000000000;
  fStack_150 = param_1 * 0.5;
  fStack_148 = fStack_14c;
  fStack_144 = fStack_14c;
  fStack_13c = param_2 * 0.5;
  fStack_138 = fStack_140;
  fStack_134 = fStack_140;
  fStack_12c = fStack_130;
  fStack_128 = param_3 * 0.5;
  fStack_124 = fStack_130;
  func_0x000109519fd0(&fStack_90,auStack_d0,&fStack_150);
  lVar2 = 0;
  do {
    fVar3 = *(float *)(&UNK_10e4f4ec4 + lVar2);
    fVar5 = *(float *)(&UNK_10e4f4ec8 + lVar2);
    fVar12 = *(float *)(&UNK_10e4f4ecc + lVar2);
    fVar7 = *(float *)(&UNK_10e4f4ed0 + lVar2);
    fVar9 = *(float *)(&UNK_10e4f4ed4 + lVar2);
    fVar13 = *(float *)(&UNK_10e4f4ed8 + lVar2);
    fVar8 = *(float *)(&UNK_10e4f4edc + lVar2);
    fVar10 = *(float *)(&UNK_10e4f4ee0 + lVar2);
    fVar14 = *(float *)(&UNK_10e4f4ee4 + lVar2);
    fVar4 = *(float *)(&UNK_10e4f4ee8 + lVar2);
    fVar11 = *(float *)(&UNK_10e4f4eec + lVar2);
    fVar15 = *(float *)(&UNK_10e4f4ef0 + lVar2);
    pfVar1 = (float *)(param_4 + lVar2);
    *pfVar1 = fVar3 * fStack_90 + fVar5 * fStack_80 + fStack_60 + fVar12 * fStack_70;
    pfVar1[1] = fVar3 * fStack_8c + fVar5 * fStack_7c + fStack_5c + fVar12 * fStack_6c;
    pfVar1[2] = fVar3 * fStack_88 + fVar5 * fStack_78 + fStack_58 + fVar12 * fStack_68;
    pfVar1[3] = fVar7 * fStack_90 + fVar9 * fStack_80 + fStack_60 + fVar13 * fStack_70;
    pfVar1[4] = fVar7 * fStack_8c + fVar9 * fStack_7c + fStack_5c + fVar13 * fStack_6c;
    pfVar1[5] = fVar7 * fStack_88 + fVar9 * fStack_78 + fStack_58 + fVar13 * fStack_68;
    pfVar1[6] = fVar8 * fStack_90 + fVar10 * fStack_80 + fStack_60 + fVar14 * fStack_70;
    pfVar1[7] = fVar8 * fStack_8c + fVar10 * fStack_7c + fStack_5c + fVar14 * fStack_6c;
    pfVar1[8] = fVar8 * fStack_88 + fVar10 * fStack_78 + fStack_58 + fVar14 * fStack_68;
    pfVar1[9] = fVar4 * fStack_90 + fVar11 * fStack_80 + fStack_60 + fVar15 * fStack_70;
    pfVar1[10] = fVar4 * fStack_8c + fVar11 * fStack_7c + fStack_5c + fVar15 * fStack_6c;
    pfVar1[0xb] = fVar4 * fStack_88 + fVar11 * fStack_78 + fStack_58 + fVar15 * fStack_68;
    lVar2 = lVar2 + 0x30;
  } while (lVar2 != 0x60);
  return;
}



/* Entry: 10aafa34c; end: 10aafa5a3;  */

void FUN_10aafa34c(float param_1,long param_2,undefined8 param_3,undefined8 *param_4,
                  undefined8 *param_5,undefined8 param_6,long param_7,ulong param_8)

{
  long lVar1;
  undefined4 *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  undefined8 uVar12;
  float fStack_180;
  undefined8 uStack_17c;
  undefined8 uStack_174;
  float fStack_16c;
  undefined8 uStack_168;
  undefined8 uStack_160;
  float fStack_158;
  float fStack_154;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined4 uStack_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  float fStack_108;
  float fStack_104;
  long lStack_f8;
  long lStack_f0;
  undefined1 auStack_b8 [72];
  
  uStack_140 = 0x3f800000;
  uStack_134 = 0;
  uStack_130 = 0;
  uStack_13c = 0;
  uStack_138 = 0;
  uStack_12c = 0x3f800000;
  uStack_128 = 0;
  uStack_120 = 0;
  fVar7 = *(float *)(param_4 + 1) * 0.0;
  fVar8 = (float)*param_4;
  fVar10 = fVar8 * 0.0;
  fVar9 = (float)((ulong)*param_4 >> 0x20);
  fVar11 = fVar9 * 0.0;
  uVar12 = NEON_rev64(CONCAT44(fVar11,fVar10),4);
  fVar10 = fVar10 + fVar11;
  uStack_110 = CONCAT44(fVar9 + (float)((ulong)uVar12 >> 0x20) + fVar7 + 0.0,
                        fVar8 + (float)uVar12 + fVar7 + 0.0);
  fStack_108 = *(float *)(param_4 + 1) + fVar10 + 0.0;
  uStack_118 = 0x3f800000;
  fStack_104 = fVar10 + fVar7 + 1.0;
  func_0x000109519fd0(&lStack_f8,param_3,&uStack_140);
  fStack_154 = param_1 * 0.0;
  uStack_174 = CONCAT44(fStack_154,fStack_154);
  uStack_17c = CONCAT44(fStack_154,fStack_154);
  uStack_168 = CONCAT44(fStack_154,fStack_154);
  uStack_150 = 0;
  uStack_148 = 0x3f80000000000000;
  fStack_180 = param_1;
  fStack_16c = param_1;
  uStack_160 = uStack_174;
  fStack_158 = param_1;
  func_0x000109519fd0(auStack_b8,&lStack_f8,&fStack_180);
  FUN_10a1322a0(&lStack_f8,(param_8 - 1) * param_7 + 2);
  FUN_10aafa5a4(lStack_f8,(lStack_f0 - lStack_f8 >> 2) * -0x5555555555555555,param_7,param_8,0,
                auStack_b8);
  lVar5 = 0;
  lVar1 = 1;
  if (((int)param_6 - 5U & 0xff) < 2) {
    lVar1 = 2;
  }
  lVar6 = 0;
  if (1 < param_8) {
    lVar6 = param_8 - 2;
  }
  lVar6 = param_7 * (lVar6 * 2 + 2) * 0x54;
  do {
    uStack_138 = (undefined4)param_5[1];
    uStack_134 = (undefined4)((ulong)param_5[1] >> 0x20);
    uStack_140 = (undefined4)*param_5;
    uStack_13c = (undefined4)((ulong)*param_5 >> 0x20);
    puVar2 = &uStack_140;
    FUN_10aaf8ba0(puVar2,param_6,lVar5,param_2 + 0x19);
    lVar3 = param_2;
    FUN_10aaf892c(param_2,puVar2);
    uVar12 = *(undefined8 *)(lVar3 + 0x58);
    lVar4 = lVar6;
    FUN_10a54c3a0(uVar12,lVar6);
    FUN_10aafa7c4();
    FUN_10a54c4ac(*(undefined8 *)(lVar3 + 0x58),uVar12,lVar4);
    lVar5 = lVar5 + 1;
  } while (lVar1 != lVar5);
  if (lStack_f8 != 0) {
    lStack_f0 = lStack_f8;
    __ZdlPv();
  }
  return;
}



/* Entry: 10aafa5a4; end: 10aafa7c3;  */

void FUN_10aafa5a4(undefined8 *param_1,undefined8 param_2,ulong param_3,ulong param_4,uint param_5,
                  float *param_6)

{
  float *pfVar1;
  undefined8 *puVar2;
  ulong uVar3;
  bool bVar4;
  float *pfVar5;
  long lVar6;
  long lVar7;
  float *pfVar8;
  ulong uVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  undefined8 uVar14;
  float fVar15;
  undefined8 uVar16;
  float fVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  
  uVar9 = param_4 + 1 >> 1;
  fVar12 = 6.2831855;
  fVar10 = 6.2831855 / (float)param_3;
  ___sincosf_stret();
  bVar4 = param_5 == 0;
  uVar3 = uVar9;
  if (bVar4) {
    uVar3 = param_4;
  }
  fVar11 = 1.5707964;
  if (bVar4) {
    fVar11 = 3.1415927;
  }
  fVar13 = (float)uVar3;
  fVar11 = fVar11 / fVar13;
  if (bVar4) {
    uVar9 = param_4 - 1;
  }
  ___sincosf_stret();
  fVar17 = param_6[2];
  fVar15 = 0.0;
  fVar20 = param_6[6];
  fVar21 = param_6[10];
  fVar22 = param_6[0xe];
  *param_1 = CONCAT44((float)((ulong)*(undefined8 *)param_6 >> 0x20) * 0.0 +
                      (float)((ulong)*(undefined8 *)(param_6 + 4) >> 0x20) * 0.0 +
                      (float)((ulong)*(undefined8 *)(param_6 + 8) >> 0x20) +
                      (float)((ulong)*(undefined8 *)(param_6 + 0xc) >> 0x20),
                      (float)*(undefined8 *)param_6 * 0.0 +
                      (float)*(undefined8 *)(param_6 + 4) * 0.0 +
                      (float)*(undefined8 *)(param_6 + 8) + (float)*(undefined8 *)(param_6 + 0xc));
  *(float *)(param_1 + 1) = fVar17 * 0.0 + fVar20 * 0.0 + fVar21 + fVar22;
  pfVar5 = (float *)((long)param_1 + 0xc + param_3 * 0xc * uVar9);
  lVar6 = (long)param_1 + param_3 * -0xc + 0x1c;
  fVar17 = 1.0;
  pfVar8 = (float *)((long)param_1 + 0xc);
  do {
    lVar7 = 0;
    fVar20 = fVar11 * fVar17;
    fVar17 = fVar15 * -fVar11 + fVar17 * fVar13;
    fVar15 = fVar20 + fVar15 * fVar13;
    pfVar1 = pfVar8 + param_3 * 3;
    fVar21 = 0.0;
    fVar20 = fVar15;
    while( true ) {
      puVar2 = (undefined8 *)((long)pfVar8 + lVar7);
      fVar22 = param_6[2];
      fVar23 = param_6[6];
      fVar24 = param_6[10];
      fVar25 = param_6[0xe];
      *puVar2 = CONCAT44((float)((ulong)*(undefined8 *)param_6 >> 0x20) * fVar20 +
                         (float)((ulong)*(undefined8 *)(param_6 + 4) >> 0x20) * fVar21 +
                         (float)((ulong)*(undefined8 *)(param_6 + 8) >> 0x20) * fVar17 +
                         (float)((ulong)*(undefined8 *)(param_6 + 0xc) >> 0x20),
                         (float)*(undefined8 *)param_6 * fVar20 +
                         (float)*(undefined8 *)(param_6 + 4) * fVar21 +
                         (float)*(undefined8 *)(param_6 + 8) * fVar17 +
                         (float)*(undefined8 *)(param_6 + 0xc));
      *(float *)(puVar2 + 1) = fVar20 * fVar22 + fVar21 * fVar23 + fVar17 * fVar24 + fVar25;
      if ((float *)((long)puVar2 + 0xc) == pfVar1) break;
      fVar22 = fVar10 * fVar20;
      fVar20 = fVar21 * -fVar10 + fVar20 * fVar12;
      fVar21 = fVar22 + fVar21 * fVar12;
      lVar7 = lVar7 + 0xc;
    }
    lVar6 = lVar6 + param_3 * 0xc;
    pfVar8 = pfVar1;
  } while (pfVar1 != pfVar5);
  if ((param_5 & 1) == 0) {
    uVar14 = *(undefined8 *)(param_6 + 1);
    uVar18 = *(undefined8 *)(param_6 + 5);
    uVar16 = *(undefined8 *)(param_6 + 9);
    uVar19 = *(undefined8 *)(param_6 + 0xd);
    *pfVar5 = *param_6 * 0.0 + param_6[4] * 0.0 + (param_6[0xc] - param_6[8]);
    *(ulong *)(lVar6 + lVar7) =
         CONCAT44((float)((ulong)uVar14 >> 0x20) * 0.0 + (float)((ulong)uVar18 >> 0x20) * 0.0 +
                  ((float)((ulong)uVar19 >> 0x20) - (float)((ulong)uVar16 >> 0x20)),
                  (float)uVar14 * 0.0 + (float)uVar18 * 0.0 + ((float)uVar19 - (float)uVar16));
  }
  return;
}



/* Entry: 10aafa7c4; end: 10aafaae3;  */

void FUN_10aafa7c4(undefined8 *param_1,undefined8 param_2,long param_3,ulong param_4,uint param_5,
                  undefined8 *param_6,undefined8 *param_7)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  undefined4 uVar4;
  long lVar5;
  long lVar6;
  undefined8 *puVar7;
  long lVar8;
  long lVar9;
  undefined8 *puVar10;
  long lVar11;
  undefined8 *puVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined4 uStack_24;
  
  uVar2 = 1;
  if (param_5 == 0) {
    uVar2 = 2;
  }
  if (param_3 != 0) {
    lVar8 = 0xc;
    lVar1 = 1;
    lVar9 = param_3;
    lVar11 = param_3;
    do {
      lVar6 = lVar1;
      uVar13 = *param_7;
      uVar4 = *(undefined4 *)(param_7 + 1);
      uVar14 = *param_6;
      uStack_24 = (undefined4)uVar14;
      *(undefined8 *)((long)param_1 + 0x14) = param_6[1];
      *(undefined8 *)((long)param_1 + 0xc) = uVar14;
      param_1[1] = CONCAT44(uStack_24,uVar4);
      *param_1 = uVar13;
      puVar12 = (undefined8 *)((long)param_7 + lVar11 * 0xc);
      uVar13 = *puVar12;
      uVar4 = *(undefined4 *)(puVar12 + 1);
      uVar14 = *param_6;
      uStack_24 = (undefined4)uVar14;
      param_1[6] = param_6[1];
      param_1[5] = uVar14;
      *(ulong *)((long)param_1 + 0x24) = CONCAT44(uStack_24,uVar4);
      *(undefined8 *)((long)param_1 + 0x1c) = uVar13;
      uVar13 = *(undefined8 *)((long)param_7 + lVar8);
      uVar4 = *(undefined4 *)((undefined8 *)((long)param_7 + lVar8) + 1);
      uVar14 = *param_6;
      uStack_24 = (undefined4)uVar14;
      *(undefined8 *)((long)param_1 + 0x4c) = param_6[1];
      *(undefined8 *)((long)param_1 + 0x44) = uVar14;
      param_1[8] = CONCAT44(uStack_24,uVar4);
      param_1[7] = uVar13;
      param_1 = (undefined8 *)((long)param_1 + 0x54);
      lVar8 = lVar8 + 0xc;
      lVar9 = lVar9 + -1;
      lVar1 = lVar6 + 1;
      lVar11 = lVar6;
    } while (lVar9 != 0);
  }
  uVar3 = param_4 + 1 >> 1;
  if (param_5 == 0) {
    uVar3 = param_4;
  }
  if ((uVar2 <= uVar3 && uVar3 - uVar2 != 0) && (lVar8 = (uVar3 - uVar2) * param_3, lVar8 != 0)) {
    puVar12 = (undefined8 *)((long)param_7 + 0xc);
    lVar9 = 1;
    do {
      lVar1 = lVar9 + param_3;
      if (param_3 != 0) {
        lVar11 = 0;
        lVar6 = param_3 + -1;
        puVar7 = puVar12;
        do {
          lVar5 = lVar11;
          puVar10 = (undefined8 *)((long)param_7 + lVar6 * 0xc + lVar9 * 0xc);
          uVar13 = *puVar10;
          uVar4 = *(undefined4 *)(puVar10 + 1);
          uVar14 = *param_6;
          uStack_24 = (undefined4)uVar14;
          *(undefined8 *)((long)param_1 + 0x14) = param_6[1];
          *(undefined8 *)((long)param_1 + 0xc) = uVar14;
          param_1[1] = CONCAT44(uStack_24,uVar4);
          *param_1 = uVar13;
          puVar10 = (undefined8 *)((long)param_7 + lVar6 * 0xc + lVar1 * 0xc);
          uVar13 = *puVar10;
          uVar4 = *(undefined4 *)(puVar10 + 1);
          uVar14 = *param_6;
          uStack_24 = (undefined4)uVar14;
          param_1[6] = param_6[1];
          param_1[5] = uVar14;
          *(ulong *)((long)param_1 + 0x24) = CONCAT44(uStack_24,uVar4);
          *(undefined8 *)((long)param_1 + 0x1c) = uVar13;
          uVar13 = *puVar7;
          uVar4 = *(undefined4 *)(puVar7 + 1);
          uVar14 = *param_6;
          uStack_24 = (undefined4)uVar14;
          *(undefined8 *)((long)param_1 + 0x4c) = param_6[1];
          *(undefined8 *)((long)param_1 + 0x44) = uVar14;
          param_1[8] = CONCAT44(uStack_24,uVar4);
          param_1[7] = uVar13;
          uVar13 = *puVar7;
          uVar4 = *(undefined4 *)(puVar7 + 1);
          uVar14 = *param_6;
          uStack_24 = (undefined4)uVar14;
          param_1[0xd] = param_6[1];
          param_1[0xc] = uVar14;
          *(ulong *)((long)param_1 + 0x5c) = CONCAT44(uStack_24,uVar4);
          *(undefined8 *)((long)param_1 + 0x54) = uVar13;
          uVar13 = *puVar10;
          uVar4 = *(undefined4 *)(puVar10 + 1);
          uVar14 = *param_6;
          uStack_24 = (undefined4)uVar14;
          *(undefined8 *)((long)param_1 + 0x84) = param_6[1];
          *(undefined8 *)((long)param_1 + 0x7c) = uVar14;
          param_1[0xf] = CONCAT44(uStack_24,uVar4);
          param_1[0xe] = uVar13;
          puVar10 = (undefined8 *)((long)puVar7 + param_3 * 0xc);
          uVar13 = *puVar10;
          uVar4 = *(undefined4 *)(puVar10 + 1);
          uVar14 = *param_6;
          uStack_24 = (undefined4)uVar14;
          param_1[0x14] = param_6[1];
          param_1[0x13] = uVar14;
          *(ulong *)((long)param_1 + 0x94) = CONCAT44(uStack_24,uVar4);
          *(undefined8 *)((long)param_1 + 0x8c) = uVar13;
          param_1 = param_1 + 0x15;
          lVar11 = lVar5 + 1;
          puVar7 = (undefined8 *)((long)puVar7 + 0xc);
          lVar6 = lVar5;
        } while (param_3 != lVar11);
      }
      puVar12 = (undefined8 *)((long)puVar12 + param_3 * 0xc);
      lVar9 = lVar1;
    } while (lVar1 != lVar8 + 1);
  }
  if (((param_5 & 1) == 0) && (param_3 != 0)) {
    lVar9 = (param_4 - 1) * param_3;
    lVar8 = lVar9 + 1;
    puVar7 = (undefined8 *)((long)param_7 + lVar8 * 0xc);
    lVar8 = lVar8 - param_3;
    puVar12 = (undefined8 *)((long)param_7 + param_3 * (param_4 - 2) * 0xc);
    do {
      puVar10 = (undefined8 *)((long)param_7 + lVar9 * 0xc);
      uVar13 = *puVar10;
      uVar4 = *(undefined4 *)(puVar10 + 1);
      uVar14 = *param_6;
      uStack_24 = (undefined4)uVar14;
      *(undefined8 *)((long)param_1 + 0x14) = param_6[1];
      *(undefined8 *)((long)param_1 + 0xc) = uVar14;
      param_1[1] = CONCAT44(uStack_24,uVar4);
      *param_1 = uVar13;
      uVar13 = *puVar7;
      uVar4 = *(undefined4 *)(puVar7 + 1);
      uVar14 = *param_6;
      uStack_24 = (undefined4)uVar14;
      param_1[6] = param_6[1];
      param_1[5] = uVar14;
      *(ulong *)((long)param_1 + 0x24) = CONCAT44(uStack_24,uVar4);
      *(undefined8 *)((long)param_1 + 0x1c) = uVar13;
      uVar13 = *(undefined8 *)((long)puVar12 + 0xc);
      uVar4 = *(undefined4 *)((long)puVar12 + 0x14);
      uVar14 = *param_6;
      uStack_24 = (undefined4)uVar14;
      *(undefined8 *)((long)param_1 + 0x4c) = param_6[1];
      *(undefined8 *)((long)param_1 + 0x44) = uVar14;
      param_1[8] = CONCAT44(uStack_24,uVar4);
      param_1[7] = uVar13;
      param_1 = (undefined8 *)((long)param_1 + 0x54);
      param_3 = param_3 + -1;
      lVar9 = lVar8;
      lVar8 = lVar8 + 1;
      puVar12 = (undefined8 *)((long)puVar12 + 0xc);
    } while (param_3 != 0);
  }
  return;
}



/* Entry: 10aafaae4; end: 10aafad3b;  */

void FUN_10aafaae4(float param_1,long param_2,undefined8 param_3,undefined8 *param_4,
                  undefined8 *param_5,undefined8 param_6,long param_7,ulong param_8)

{
  long lVar1;
  long lVar2;
  undefined4 *puVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  undefined8 uVar12;
  float fStack_180;
  undefined8 uStack_17c;
  undefined8 uStack_174;
  float fStack_16c;
  undefined8 uStack_168;
  undefined8 uStack_160;
  float fStack_158;
  float fStack_154;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined4 uStack_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  float fStack_108;
  float fStack_104;
  long lStack_f8;
  long lStack_f0;
  undefined1 auStack_b8 [72];
  
  uStack_140 = 0x3f800000;
  uStack_134 = 0;
  uStack_130 = 0;
  uStack_13c = 0;
  uStack_138 = 0;
  uStack_12c = 0x3f800000;
  uStack_128 = 0;
  uStack_120 = 0;
  fVar7 = *(float *)(param_4 + 1) * 0.0;
  fVar8 = (float)*param_4;
  fVar10 = fVar8 * 0.0;
  fVar9 = (float)((ulong)*param_4 >> 0x20);
  fVar11 = fVar9 * 0.0;
  uVar12 = NEON_rev64(CONCAT44(fVar11,fVar10),4);
  fVar10 = fVar10 + fVar11;
  uStack_110 = CONCAT44(fVar9 + (float)((ulong)uVar12 >> 0x20) + fVar7 + 0.0,
                        fVar8 + (float)uVar12 + fVar7 + 0.0);
  fStack_108 = *(float *)(param_4 + 1) + fVar10 + 0.0;
  uStack_118 = 0x3f800000;
  fStack_104 = fVar10 + fVar7 + 1.0;
  func_0x000109519fd0(&lStack_f8,param_3,&uStack_140);
  fStack_154 = param_1 * 0.0;
  uStack_174 = CONCAT44(fStack_154,fStack_154);
  uStack_17c = CONCAT44(fStack_154,fStack_154);
  uStack_168 = CONCAT44(fStack_154,fStack_154);
  uStack_150 = 0;
  uStack_148 = 0x3f80000000000000;
  fStack_180 = param_1;
  fStack_16c = param_1;
  uStack_160 = uStack_174;
  fStack_158 = param_1;
  func_0x000109519fd0(auStack_b8,&lStack_f8,&fStack_180);
  FUN_10a1322a0(&lStack_f8,(param_8 - 1) * param_7 + 2);
  FUN_10aafa5a4(lStack_f8,(lStack_f0 - lStack_f8 >> 2) * -0x5555555555555555,param_7,param_8,0,
                auStack_b8);
  lVar6 = 0;
  lVar1 = 1;
  if (((int)param_6 - 5U & 0xff) < 2) {
    lVar1 = 2;
  }
  lVar2 = 0;
  if (1 < param_8) {
    lVar2 = param_8 - 2;
  }
  lVar2 = param_7 * (lVar2 * 2 + 3) * 0x38;
  do {
    uStack_138 = (undefined4)param_5[1];
    uStack_134 = (undefined4)((ulong)param_5[1] >> 0x20);
    uStack_140 = (undefined4)*param_5;
    uStack_13c = (undefined4)((ulong)*param_5 >> 0x20);
    puVar3 = &uStack_140;
    FUN_10aaf8ba0(puVar3,param_6,lVar6,param_2 + 0x19);
    lVar4 = param_2;
    FUN_10aaf892c(param_2,puVar3);
    uVar12 = *(undefined8 *)(lVar4 + 0x20);
    lVar5 = lVar2;
    FUN_10a54c3a0(uVar12,lVar2);
    FUN_10aafad3c();
    FUN_10a54c4ac(*(undefined8 *)(lVar4 + 0x20),uVar12,lVar5);
    lVar6 = lVar6 + 1;
  } while (lVar1 != lVar6);
  if (lStack_f8 != 0) {
    lStack_f0 = lStack_f8;
    __ZdlPv();
  }
  return;
}



/* Entry: 10aafad3c; end: 10aafaff7;  */

void FUN_10aafad3c(undefined8 *param_1,undefined8 param_2,long param_3,ulong param_4,uint param_5,
                  undefined8 *param_6,undefined8 *param_7)

{
  long lVar1;
  undefined8 *puVar2;
  ulong uVar3;
  ulong uVar4;
  undefined4 uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined8 *puVar11;
  undefined8 uVar12;
  undefined8 *puVar13;
  undefined8 uVar14;
  undefined4 uStack_24;
  
  uVar3 = 1;
  if (param_5 == 0) {
    uVar3 = 2;
  }
  if (param_3 != 0) {
    lVar8 = 0xc;
    lVar1 = 1;
    lVar9 = param_3;
    lVar10 = param_3;
    do {
      lVar7 = lVar1;
      uVar12 = *param_7;
      uVar5 = *(undefined4 *)(param_7 + 1);
      uVar14 = *param_6;
      uStack_24 = (undefined4)uVar14;
      *(undefined8 *)((long)param_1 + 0x14) = param_6[1];
      *(undefined8 *)((long)param_1 + 0xc) = uVar14;
      param_1[1] = CONCAT44(uStack_24,uVar5);
      *param_1 = uVar12;
      puVar11 = (undefined8 *)((long)param_7 + lVar10 * 0xc);
      uVar12 = *puVar11;
      uVar5 = *(undefined4 *)(puVar11 + 1);
      uVar14 = *param_6;
      uStack_24 = (undefined4)uVar14;
      param_1[6] = param_6[1];
      param_1[5] = uVar14;
      *(ulong *)((long)param_1 + 0x24) = CONCAT44(uStack_24,uVar5);
      *(undefined8 *)((long)param_1 + 0x1c) = uVar12;
      uVar12 = *puVar11;
      uVar5 = *(undefined4 *)(puVar11 + 1);
      uVar14 = *param_6;
      uStack_24 = (undefined4)uVar14;
      *(undefined8 *)((long)param_1 + 0x4c) = param_6[1];
      *(undefined8 *)((long)param_1 + 0x44) = uVar14;
      param_1[8] = CONCAT44(uStack_24,uVar5);
      param_1[7] = uVar12;
      uVar12 = *(undefined8 *)((long)param_7 + lVar8);
      uVar5 = *(undefined4 *)((undefined8 *)((long)param_7 + lVar8) + 1);
      uVar14 = *param_6;
      uStack_24 = (undefined4)uVar14;
      param_1[0xd] = param_6[1];
      param_1[0xc] = uVar14;
      *(ulong *)((long)param_1 + 0x5c) = CONCAT44(uStack_24,uVar5);
      *(undefined8 *)((long)param_1 + 0x54) = uVar12;
      param_1 = param_1 + 0xe;
      lVar8 = lVar8 + 0xc;
      lVar9 = lVar9 + -1;
      lVar1 = lVar7 + 1;
      lVar10 = lVar7;
    } while (lVar9 != 0);
  }
  uVar4 = param_4 + 1 >> 1;
  if (param_5 == 0) {
    uVar4 = param_4;
  }
  if ((uVar3 <= uVar4 && uVar4 - uVar3 != 0) && (lVar8 = (uVar4 - uVar3) * param_3, lVar8 != 0)) {
    puVar11 = (undefined8 *)((long)param_7 + param_3 * 0xc + 0xc);
    lVar9 = 1;
    do {
      lVar1 = lVar9 + param_3;
      if (param_3 != 0) {
        lVar10 = 0;
        lVar7 = param_3 + -1;
        puVar13 = puVar11;
        do {
          lVar6 = lVar10;
          puVar2 = (undefined8 *)((long)param_7 + lVar7 * 0xc + lVar9 * 0xc);
          uVar12 = *puVar2;
          uVar5 = *(undefined4 *)(puVar2 + 1);
          uVar14 = *param_6;
          uStack_24 = (undefined4)uVar14;
          *(undefined8 *)((long)param_1 + 0x14) = param_6[1];
          *(undefined8 *)((long)param_1 + 0xc) = uVar14;
          param_1[1] = CONCAT44(uStack_24,uVar5);
          *param_1 = uVar12;
          puVar2 = (undefined8 *)((long)param_7 + lVar7 * 0xc + lVar1 * 0xc);
          uVar12 = *puVar2;
          uVar5 = *(undefined4 *)(puVar2 + 1);
          uVar14 = *param_6;
          uStack_24 = (undefined4)uVar14;
          param_1[6] = param_6[1];
          param_1[5] = uVar14;
          *(ulong *)((long)param_1 + 0x24) = CONCAT44(uStack_24,uVar5);
          *(undefined8 *)((long)param_1 + 0x1c) = uVar12;
          uVar12 = *puVar2;
          uVar5 = *(undefined4 *)(puVar2 + 1);
          uVar14 = *param_6;
          uStack_24 = (undefined4)uVar14;
          *(undefined8 *)((long)param_1 + 0x4c) = param_6[1];
          *(undefined8 *)((long)param_1 + 0x44) = uVar14;
          param_1[8] = CONCAT44(uStack_24,uVar5);
          param_1[7] = uVar12;
          uVar12 = *puVar13;
          uVar5 = *(undefined4 *)(puVar13 + 1);
          uVar14 = *param_6;
          uStack_24 = (undefined4)uVar14;
          param_1[0xd] = param_6[1];
          param_1[0xc] = uVar14;
          *(ulong *)((long)param_1 + 0x5c) = CONCAT44(uStack_24,uVar5);
          *(undefined8 *)((long)param_1 + 0x54) = uVar12;
          param_1 = param_1 + 0xe;
          lVar10 = lVar6 + 1;
          puVar13 = (undefined8 *)((long)puVar13 + 0xc);
          lVar7 = lVar6;
        } while (param_3 != lVar10);
      }
      puVar11 = (undefined8 *)((long)puVar11 + param_3 * 0xc);
      lVar9 = lVar1;
    } while (lVar1 != lVar8 + 1);
  }
  if (((param_5 & 1) == 0) && (param_3 != 0)) {
    lVar8 = (param_4 - 1) * param_3;
    puVar11 = (undefined8 *)((long)param_7 + param_3 * (param_4 - 2) * 0xc);
    do {
      uVar12 = *(undefined8 *)((long)param_7 + lVar8 * 0xc + 0xc);
      uVar5 = *(undefined4 *)((long)param_7 + lVar8 * 0xc + 0x14);
      uVar14 = *param_6;
      uStack_24 = (undefined4)uVar14;
      *(undefined8 *)((long)param_1 + 0x14) = param_6[1];
      *(undefined8 *)((long)param_1 + 0xc) = uVar14;
      param_1[1] = CONCAT44(uStack_24,uVar5);
      *param_1 = uVar12;
      uVar12 = *(undefined8 *)((long)puVar11 + 0xc);
      uVar5 = *(undefined4 *)((long)puVar11 + 0x14);
      uVar14 = *param_6;
      uStack_24 = (undefined4)uVar14;
      param_1[6] = param_6[1];
      param_1[5] = uVar14;
      *(ulong *)((long)param_1 + 0x24) = CONCAT44(uStack_24,uVar5);
      *(undefined8 *)((long)param_1 + 0x1c) = uVar12;
      param_1 = param_1 + 7;
      param_3 = param_3 + -1;
      puVar11 = (undefined8 *)((long)puVar11 + 0xc);
    } while (param_3 != 0);
  }
  return;
}



/* Entry: 10aafaff8; end: 10aafb15f;  */

void FUN_10aafaff8(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 *param_6,undefined8 param_7,undefined8 param_8)

{
  long lVar1;
  undefined4 uVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  int iVar7;
  float *pfVar8;
  float *pfVar9;
  undefined8 uVar10;
  long lVar11;
  undefined8 uVar12;
  long lVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fStack_1b0;
  float fStack_1ac;
  float fStack_1a8;
  float fStack_1a4;
  float fStack_1a0;
  float fStack_19c;
  float fStack_198;
  float fStack_194;
  float fStack_190;
  float fStack_18c;
  float fStack_188;
  float fStack_184;
  undefined4 uStack_f4;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_88 = 0;
  uStack_90 = 0;
  uStack_78 = 0;
  uStack_80 = 0;
  uStack_a8 = 0;
  uStack_b0 = 0;
  uStack_98 = 0;
  uStack_a0 = 0;
  uStack_c8 = 0;
  uStack_d0 = 0;
  uStack_b8 = 0;
  uStack_c0 = 0;
  uVar10 = param_7;
  FUN_10aafa1a8(&uStack_d0,param_5,param_4);
  lVar13 = 0;
  lVar1 = 1;
  if (((int)param_7 - 5U & 0xff) < 2) {
    lVar1 = 2;
  }
  do {
    uStack_d8 = param_6[1];
    uStack_e0 = *param_6;
    puVar3 = &uStack_e0;
    FUN_10aaf8ba0(puVar3,param_7,lVar13,param_3 + 0x19);
    lVar4 = param_3;
    FUN_10aaf892c(param_3,puVar3);
    puVar5 = *(undefined8 **)(lVar4 + 0x58);
    pfVar8 = (float *)0x3f0;
    FUN_10a54c3a0();
    lVar11 = 0;
    puVar3 = puVar5;
    do {
      uVar12 = *(undefined8 *)((long)&uStack_d0 + (ulong)(byte)(&UNK_10e4f4a51)[lVar11] * 0xc);
      uVar2 = *(undefined4 *)((long)&uStack_c8 + (ulong)(byte)(&UNK_10e4f4a51)[lVar11] * 0xc);
      uStack_f4 = (undefined4)uStack_e0;
      *(undefined8 *)((long)puVar3 + 0x14) = uStack_d8;
      *(undefined8 *)((long)puVar3 + 0xc) = uStack_e0;
      puVar3[1] = CONCAT44(uStack_f4,uVar2);
      *puVar3 = uVar12;
      lVar11 = lVar11 + 1;
      puVar3 = (undefined8 *)((long)puVar3 + 0x1c);
    } while (lVar11 != 0x24);
    uVar6 = *(undefined8 *)(lVar4 + 0x58);
    pfVar9 = pfVar8;
    FUN_10a54c4ac(uVar6,puVar5,pfVar8);
    iVar7 = (int)puVar5;
    fVar14 = (float)param_2;
    lVar13 = lVar13 + 1;
  } while (lVar13 != lVar1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_70) {
    ___stack_chk_fail();
    fVar17 = *pfVar9;
    fVar15 = pfVar9[1];
    fVar18 = pfVar9[2] - fVar14;
    fVar19 = fVar17 + 0.0;
    fVar20 = fVar15 + 0.0;
    fVar14 = fVar14 + pfVar9[2];
    fStack_198 = fVar19;
    fStack_194 = fVar20;
    fStack_190 = fVar14;
    fStack_18c = fVar17;
    fStack_188 = fVar15;
    fStack_184 = fVar18;
    FUN_10aaf97c4(uVar12);
    FUN_10aaf97c4(uVar12,uVar6,pfVar8,&fStack_198,uVar10,param_8,2);
    if (iVar7 != 0) {
      FUN_10aaf9bdc(uVar12,0,0x40490fdb,uVar6,pfVar8,&fStack_18c,uVar10,param_8,1);
      FUN_10aaf9bdc(uVar12,0xc0490fdb,0,uVar6,pfVar8,&fStack_198,uVar10,param_8,1);
      FUN_10aaf9bdc(uVar12,0xbfc90fdb,0x3fc90fdb,uVar6,pfVar8,&fStack_18c,uVar10,param_8,0);
      FUN_10aaf9bdc(uVar12,0x3fc90fdb,0x4096cbe4,uVar6,pfVar8,&fStack_198,uVar10,param_8,0);
    }
    fVar16 = (float)uVar12;
    fStack_1a4 = fVar16 + fVar17;
    fStack_1b0 = fVar16 + fVar19;
    fStack_1ac = fVar20;
    fStack_1a8 = fVar14 + 0.0;
    fStack_1a0 = fVar20;
    fStack_19c = fVar18 + 0.0;
    FUN_10aaf962c(uVar6,pfVar8,&fStack_1a4,&fStack_1b0,uVar10,param_8);
    fStack_1a4 = fVar17 - fVar16;
    fStack_1b0 = fVar19 - fVar16;
    fStack_1ac = fVar20;
    fStack_1a8 = fVar14;
    fStack_1a0 = fVar15;
    fStack_19c = fVar18;
    FUN_10aaf962c(uVar6,pfVar8,&fStack_1a4,&fStack_1b0,uVar10,param_8);
    fStack_1a0 = fVar16 + fVar15;
    fStack_1ac = fVar16 + fVar20;
    fStack_1b0 = fVar19;
    fStack_1a8 = fVar14 + 0.0;
    fStack_1a4 = fVar19;
    fStack_19c = fVar18 + 0.0;
    FUN_10aaf962c(uVar6,pfVar8,&fStack_1a4,&fStack_1b0,uVar10,param_8);
    fStack_1a0 = fVar15 - fVar16;
    fStack_1ac = fVar20 - fVar16;
    fStack_1b0 = fVar19;
    fStack_1a8 = fVar14;
    fStack_1a4 = fVar17;
    fStack_19c = fVar18;
    FUN_10aaf962c(uVar6,pfVar8,&fStack_1a4,&fStack_1b0,uVar10,param_8);
    return;
  }
  return;
}


