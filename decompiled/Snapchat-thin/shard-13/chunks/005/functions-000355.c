/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10a7a0f1c; end: 10a7a0f77;  */

void FUN_10a7a0f1c(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 8);
  if (lVar1 != 0) {
    func_0x00010a0536d4(lVar1 + 0x40);
    if (*(char *)(lVar1 + 0x3f) < '\0') {
      __ZdlPv(*(undefined8 *)(lVar1 + 0x28));
    }
    if (*(char *)(lVar1 + 0x27) < '\0') {
      __ZdlPv(*(undefined8 *)(lVar1 + 0x10));
    }
    func_0x00010a004dac(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10a7a0f78; end: 10a7a0f8f;  */

void FUN_10a7a0f78(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_2[1] = 0;
  return;
}



/* Entry: 10a7a0f90; end: 10a7a1083;  */

undefined8 * FUN_10a7a0f90(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 uVar6;
  
  *param_1 = param_2;
  puVar4 = (undefined8 *)0x50;
  __Znwm();
  uVar6 = *param_3;
  puVar4[1] = param_3[1];
  *puVar4 = uVar6;
  *param_3 = 0;
  param_3[1] = 0;
  if (*(char *)((long)param_3 + 0x27) < '\0') {
    func_0x000107c3192c(puVar4 + 2,param_3[2],param_3[3]);
  }
  else {
    uVar6 = param_3[2];
    puVar4[3] = param_3[3];
    puVar4[2] = uVar6;
    puVar4[4] = param_3[4];
  }
  if (*(char *)((long)param_3 + 0x3f) < '\0') {
    func_0x000107c3192c(puVar4 + 5,param_3[5],param_3[6]);
  }
  else {
    uVar6 = param_3[5];
    puVar4[6] = param_3[6];
    puVar4[5] = uVar6;
    puVar4[7] = param_3[7];
  }
  lVar5 = param_3[9];
  uVar6 = param_3[8];
  puVar4[9] = param_3[9];
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



/* Entry: 10a7a1084; end: 10a7a113f;  */

long FUN_10a7a1084(long param_1)

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



/* Entry: 10a7a1140; end: 10a7a11af;  */

void FUN_10a7a1140(undefined8 *param_1)

{
  code *pcVar1;
  undefined8 auStack_38 [2];
  char cStack_21;
  
  pcVar1 = (code *)*param_1;
  func_0x000107c2b054(auStack_38,&UNK_10f674def);
  (*pcVar1)(auStack_38,param_1);
  if (cStack_21 < '\0') {
    __ZdlPv(auStack_38[0]);
  }
  return;
}



/* Entry: 10a7a11b0; end: 10a7a1403;  */

code ** FUN_10a7a11b0(code **param_1,code **param_2)

{
  char cVar1;
  bool bVar2;
  code **ppcVar3;
  code **ppcVar4;
  code **ppcVar5;
  code **ppcVar6;
  code **unaff_x20;
  code **ppcVar7;
  code *pcVar8;
  code **unaff_x24;
  code *pcStack_98;
  code **ppcStack_90;
  code *pcStack_88;
  undefined8 *apuStack_80 [7];
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppcVar3 = (code **)param_2[4];
  ppcVar4 = ppcVar3;
  ppcVar6 = param_2;
  if (ppcVar3 != (code **)0x0) {
    pcVar8 = param_2[2];
    __ZNSt3__119__shared_weak_count4lockEv();
    ppcVar4 = ppcVar3;
    unaff_x20 = param_2;
    ppcStack_90 = ppcVar3;
    if (ppcVar3 != (code **)0x0) {
      pcStack_98 = param_2[3];
      if (pcStack_98 != (code *)0x0) {
        param_2 = (code **)(pcVar8 + 0x80);
        ppcVar6 = param_1;
        if (*(char *)(param_1 + 9) == '\x01') {
          __ZNSt3__115recursive_mutex4lockEv(param_2);
          ppcVar4 = (code **)(pcVar8 + 0x68);
          FUN_10a7a1404();
          if ((code **)(pcVar8 + 0x70) != ppcVar4) {
            pcStack_88 = ppcVar4[7];
            (**(code **)(ppcVar4[8] + 0x10))(apuStack_80);
            ppcVar6 = ppcVar4;
            FUN_10a7a1480(pcVar8 + 0x68);
            func_0x00010a79d9e0(ppcVar4 + 4);
            __ZdlPv(ppcVar4);
            if (*(char *)(apuStack_80[0] + 1) == '\x01') {
              ppcVar6 = param_1 + 3;
              (*pcStack_88)(param_1,ppcVar6,param_1 + 6,&pcStack_88);
            }
LAB_10a7a1328:
            unaff_x24 = &pcStack_88;
            (*(code *)*apuStack_80[0])(apuStack_80);
          }
        }
        else {
          __ZNSt3__115recursive_mutex4lockEv(param_2);
          ppcVar4 = (code **)(pcVar8 + 0x68);
          FUN_10a7a1404();
          if ((code **)(pcVar8 + 0x70) != ppcVar4) {
            pcStack_88 = ppcVar4[0xf];
            (**(code **)(ppcVar4[0x10] + 0x10))(apuStack_80);
            ppcVar6 = ppcVar4;
            FUN_10a7a1480(pcVar8 + 0x68);
            func_0x00010a79d9e0(ppcVar4 + 4);
            __ZdlPv(ppcVar4);
            if (*(char *)(apuStack_80[0] + 1) == '\x01') {
              ppcVar6 = &pcStack_88;
              (*pcStack_88)(param_1);
            }
            goto LAB_10a7a1328;
          }
        }
        ppcVar4 = param_2;
        __ZNSt3__115recursive_mutex6unlockEv();
      }
      ppcVar7 = ppcVar3 + 1;
      do {
        pcVar8 = *ppcVar7;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(ppcVar7,0x10);
        if (bVar2) {
          *ppcVar7 = pcVar8 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      unaff_x20 = param_2;
      if (pcVar8 == (code *)0x0) {
        ppcVar4 = ppcVar3;
        (**(code **)(*ppcVar3 + 0x10))();
        if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)PTR___ZNSt3__119__shared_weak_count14__release_weakEv_110346648)(ppcVar3);
          return ppcVar3;
        }
        goto LAB_10a7a13c8;
      }
    }
  }
  param_2 = unaff_x20;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return ppcVar4;
  }
LAB_10a7a13c8:
  ___stack_chk_fail();
  (*(code *)*apuStack_80[0])(unaff_x24 + 1);
  __ZNSt3__115recursive_mutex6unlockEv(param_2);
  FUN_10a541290(&pcStack_98);
  __Unwind_Resume();
  ppcVar4 = ppcVar4 + 1;
  ppcVar7 = (code **)*ppcVar4;
  ppcVar3 = ppcVar4;
  if (ppcVar7 != (code **)0x0) {
    do {
      ppcVar5 = ppcVar7 + 4;
      FUN_10a003e3c(ppcVar5,ppcVar6);
      if (-1 < (char)ppcVar5) {
        ppcVar3 = ppcVar7;
      }
      ppcVar7 = *(code ***)((long)ppcVar7 + ((ulong)ppcVar5 >> 4 & 8));
    } while (ppcVar7 != (code **)0x0);
    if ((ppcVar3 != ppcVar4) && (FUN_10a003e3c(ppcVar6,ppcVar3 + 4), ((uint)ppcVar6 >> 7 & 1) == 0))
    {
      return ppcVar3;
    }
  }
  return ppcVar4;
}



/* Entry: 10a7a1404; end: 10a7a147f;  */

long * FUN_10a7a1404(long param_1,undefined8 param_2)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  
  plVar2 = (long *)(param_1 + 8);
  plVar4 = (long *)*plVar2;
  plVar3 = plVar2;
  if (plVar4 != (long *)0x0) {
    do {
      plVar1 = plVar4 + 4;
      FUN_10a003e3c(plVar1,param_2);
      if (-1 < (char)plVar1) {
        plVar3 = plVar4;
      }
      plVar4 = *(long **)((long)plVar4 + ((ulong)plVar1 >> 4 & 8));
    } while (plVar4 != (long *)0x0);
    if ((plVar3 != plVar2) && (FUN_10a003e3c(param_2,plVar3 + 4), ((uint)param_2 >> 7 & 1) == 0)) {
      return plVar3;
    }
  }
  return plVar2;
}



/* Entry: 10a7a1480; end: 10a7a1507;  */

void FUN_10a7a1480(undefined8 *param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  bool bVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  undefined8 *puVar7;
  long *plVar8;
  long *plVar9;
  long lVar10;
  
  plVar8 = param_2;
  plVar6 = (long *)param_2[1];
  if ((long *)param_2[1] == (long *)0x0) {
    do {
      plVar5 = (long *)plVar8[2];
      bVar3 = (long *)*plVar5 != plVar8;
      plVar8 = plVar5;
    } while (bVar3);
  }
  else {
    do {
      plVar5 = plVar6;
      plVar6 = (long *)*plVar5;
    } while ((long *)*plVar5 != (long *)0x0);
  }
  if ((long *)*param_1 == param_2) {
    *param_1 = plVar5;
  }
  plVar8 = (long *)param_1[1];
  param_1[2] = param_1[2] + -1;
  plVar5 = (long *)*param_2;
  plVar6 = param_2;
  if (plVar5 == (long *)0x0) {
LAB_10a04817c:
    plVar5 = (long *)plVar6[1];
    if (plVar5 == (long *)0x0) {
      puVar7 = (undefined8 *)plVar6[2];
      bVar3 = true;
      goto LAB_10a0481a0;
    }
  }
  else {
    plVar4 = (long *)param_2[1];
    if ((long *)param_2[1] != (long *)0x0) {
      do {
        plVar6 = plVar4;
        plVar4 = (long *)*plVar6;
      } while ((long *)*plVar6 != (long *)0x0);
      goto LAB_10a04817c;
    }
  }
  bVar3 = false;
  puVar7 = (undefined8 *)plVar6[2];
  plVar5[2] = (long)puVar7;
LAB_10a0481a0:
  plVar4 = (long *)*puVar7;
  if (plVar4 == plVar6) {
    *puVar7 = plVar5;
    if (plVar6 == plVar8) {
      plVar4 = (long *)0x0;
      plVar8 = plVar5;
    }
    else {
      plVar4 = (long *)puVar7[1];
    }
  }
  else {
    puVar7[1] = plVar5;
  }
  lVar10 = plVar6[3];
  plVar9 = plVar8;
  if (plVar6 != param_2) {
    puVar7 = (undefined8 *)param_2[2];
    plVar6[2] = (long)puVar7;
    lVar1 = 0;
    if ((long *)*puVar7 != param_2) {
      lVar1 = 8;
    }
    *(long **)((long)puVar7 + lVar1) = plVar6;
    lVar1 = *param_2;
    lVar2 = param_2[1];
    *(long **)(lVar1 + 0x10) = plVar6;
    *plVar6 = lVar1;
    plVar6[1] = lVar2;
    if (lVar2 != 0) {
      *(long **)(lVar2 + 0x10) = plVar6;
    }
    *(char *)(plVar6 + 3) = (char)param_2[3];
    plVar9 = plVar6;
    if (plVar8 != param_2) {
      plVar9 = plVar8;
    }
  }
  if ((plVar9 != (long *)0x0) && ((char)lVar10 != '\0')) {
    if (bVar3) {
      while( true ) {
        plVar6 = (long *)plVar4[2];
        plVar5 = (long *)*plVar6;
        plVar8 = plVar9;
        if (plVar5 == plVar4) break;
        if ((*(byte *)(plVar4 + 3) & 1) == 0) {
          *(undefined1 *)(plVar4 + 3) = 1;
          *(undefined1 *)(plVar6 + 3) = 0;
          plVar8 = (long *)plVar6[1];
          lVar10 = *plVar8;
          plVar6[1] = lVar10;
          if (lVar10 != 0) {
            *(long **)(lVar10 + 0x10) = plVar6;
          }
          puVar7 = (undefined8 *)plVar6[2];
          plVar8[2] = (long)puVar7;
          lVar10 = 0;
          if ((long *)*puVar7 != plVar6) {
            lVar10 = 8;
          }
          *(long **)((long)puVar7 + lVar10) = plVar8;
          *plVar8 = (long)plVar6;
          plVar6[2] = (long)plVar8;
          plVar8 = plVar4;
          if (plVar9 != (long *)*plVar4) {
            plVar8 = plVar9;
          }
          plVar4 = (long *)((long *)*plVar4)[1];
        }
        plVar5 = (long *)*plVar4;
        plVar6 = plVar4;
        if ((plVar5 != (long *)0x0) && ((char)plVar5[3] != '\x01')) {
          plVar9 = (long *)plVar4[1];
          if ((plVar9 == (long *)0x0) || ((char)plVar9[3] == '\x01')) {
            *(undefined1 *)(plVar5 + 3) = 1;
            *(undefined1 *)(plVar4 + 3) = 0;
            lVar10 = plVar5[1];
            *plVar4 = lVar10;
            if (lVar10 != 0) {
              *(long **)(lVar10 + 0x10) = plVar4;
            }
            puVar7 = (undefined8 *)plVar4[2];
            plVar5[2] = (long)puVar7;
            lVar10 = 0;
            if ((long *)*puVar7 != plVar4) {
              lVar10 = 8;
            }
            *(long **)((long)puVar7 + lVar10) = plVar5;
            plVar5[1] = (long)plVar4;
            plVar4[2] = (long)plVar5;
            plVar6 = plVar5;
            plVar9 = plVar4;
          }
LAB_10a0483f4:
          plVar8 = (long *)plVar6[2];
          *(char *)(plVar6 + 3) = (char)plVar8[3];
          *(undefined1 *)(plVar8 + 3) = 1;
          *(undefined1 *)(plVar9 + 3) = 1;
          plVar6 = (long *)plVar8[1];
          lVar10 = *plVar6;
          plVar8[1] = lVar10;
          if (lVar10 != 0) {
            *(long **)(lVar10 + 0x10) = plVar8;
          }
          puVar7 = (undefined8 *)plVar8[2];
          plVar6[2] = (long)puVar7;
          lVar10 = 0;
          if ((long *)*puVar7 != plVar8) {
            lVar10 = 8;
          }
          *(long **)((long)puVar7 + lVar10) = plVar6;
          *plVar6 = (long)plVar8;
LAB_10a0484ec:
          plVar8[2] = (long)plVar6;
          return;
        }
        plVar9 = (long *)plVar4[1];
        if ((plVar9 != (long *)0x0) && ((char)plVar9[3] != '\x01')) goto LAB_10a0483f4;
        *(undefined1 *)(plVar4 + 3) = 0;
        plVar6 = (long *)plVar4[2];
        if ((plVar6 == plVar8) || ((*(byte *)(plVar6 + 3) & 1) == 0)) goto LAB_10a048388;
LAB_10a048364:
        lVar10 = 8;
        if (*(long **)plVar6[2] != plVar6) {
          lVar10 = 0;
        }
        plVar4 = *(long **)((long)plVar6[2] + lVar10);
        plVar9 = plVar8;
      }
      if ((*(byte *)(plVar4 + 3) & 1) == 0) {
        *(undefined1 *)(plVar4 + 3) = 1;
        *(undefined1 *)(plVar6 + 3) = 0;
        lVar10 = plVar5[1];
        *plVar6 = lVar10;
        if (lVar10 != 0) {
          *(long **)(lVar10 + 0x10) = plVar6;
        }
        puVar7 = (undefined8 *)plVar6[2];
        plVar5[2] = (long)puVar7;
        lVar10 = 0;
        if ((long *)*puVar7 != plVar6) {
          lVar10 = 8;
        }
        *(long **)((long)puVar7 + lVar10) = plVar5;
        plVar5[1] = (long)plVar6;
        plVar6[2] = (long)plVar5;
        plVar8 = plVar4;
        if (plVar9 != (long *)plVar4[1]) {
          plVar8 = plVar9;
        }
        plVar4 = *(long **)plVar4[1];
      }
      plVar5 = (long *)*plVar4;
      plVar6 = plVar4;
      if ((plVar5 == (long *)0x0) || ((char)plVar5[3] == '\x01')) {
        plVar9 = (long *)plVar4[1];
        if ((plVar9 == (long *)0x0) || ((char)plVar9[3] == '\x01')) {
          *(undefined1 *)(plVar4 + 3) = 0;
          plVar6 = (long *)plVar4[2];
          if ((char)plVar6[3] == '\x01' && plVar6 != plVar8) goto LAB_10a048364;
LAB_10a048388:
          *(undefined1 *)(plVar6 + 3) = 1;
          return;
        }
        if ((plVar5 == (long *)0x0) || ((char)plVar5[3] == '\x01')) {
          *(undefined1 *)(plVar9 + 3) = 1;
          *(undefined1 *)(plVar4 + 3) = 0;
          lVar10 = *plVar9;
          plVar4[1] = lVar10;
          if (lVar10 != 0) {
            *(long **)(lVar10 + 0x10) = plVar4;
          }
          puVar7 = (undefined8 *)plVar4[2];
          plVar9[2] = (long)puVar7;
          lVar10 = 0;
          if ((long *)*puVar7 != plVar4) {
            lVar10 = 8;
          }
          *(long **)((long)puVar7 + lVar10) = plVar9;
          *plVar9 = (long)plVar4;
          plVar4[2] = (long)plVar9;
          plVar6 = plVar9;
          plVar5 = plVar4;
        }
      }
      plVar8 = (long *)plVar6[2];
      *(char *)(plVar6 + 3) = (char)plVar8[3];
      *(undefined1 *)(plVar8 + 3) = 1;
      *(undefined1 *)(plVar5 + 3) = 1;
      plVar6 = (long *)*plVar8;
      lVar10 = plVar6[1];
      *plVar8 = lVar10;
      if (lVar10 != 0) {
        *(long **)(lVar10 + 0x10) = plVar8;
      }
      puVar7 = (undefined8 *)plVar8[2];
      plVar6[2] = (long)puVar7;
      lVar10 = 0;
      if ((long *)*puVar7 != plVar8) {
        lVar10 = 8;
      }
      *(long **)((long)puVar7 + lVar10) = plVar6;
      plVar6[1] = (long)plVar8;
      goto LAB_10a0484ec;
    }
    *(undefined1 *)(plVar5 + 3) = 1;
  }
  return;
}



/* Entry: 10a7a1508; end: 10a7a1517;  */

void FUN_10a7a1508(void)

{
  long *in_x3;
  long lVar1;
  
  func_0x000105277f8c();
  lVar1 = *in_x3;
  *in_x3 = 0;
  if (lVar1 != 0) {
    if ((char)in_x3[2] == '\x01') {
      func_0x00010a79d9e0(lVar1 + 0x20);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(lVar1);
    return;
  }
  return;
}



/* Entry: 10a7a1518; end: 10a7a155f;  */

void FUN_10a7a1518(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
    if ((char)param_1[2] == '\x01') {
      func_0x00010a79d9e0(lVar1 + 0x20);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(lVar1);
    return;
  }
  return;
}



/* Entry: 10a7a1560; end: 10a7a161b;  */

void FUN_10a7a1560(long param_1,undefined8 param_2)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  undefined8 uStack_40;
  undefined8 uStack_38;
  long *plStack_30;
  long lStack_28;
  
  lStack_28 = param_1;
  if (param_1 == 0) {
    uStack_40 = 0;
    FUN_10a7a187c(&uStack_40,param_2);
  }
  else {
    uStack_38 = *(undefined8 *)(param_1 + 0x858);
    plStack_30 = *(long **)(param_1 + 0x860);
    if (plStack_30 != (long *)0x0) {
      plVar1 = plStack_30 + 1;
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar4) {
          *plVar1 = *plVar1 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    FUN_10a7a161c(&uStack_38,&lStack_28);
    plVar1 = plStack_30;
    if (plStack_30 != (long *)0x0) {
      plVar2 = plStack_30 + 1;
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
        (**(code **)(*plStack_30 + 0x10))(plStack_30);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar1);
      }
    }
  }
  return;
}



/* Entry: 10a7a161c; end: 10a7a187b;  */

void FUN_10a7a161c(long *param_1,long *param_2,undefined8 *param_3,undefined8 *param_4)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uVar7;
  long lStack_a0;
  long *plStack_98;
  long lStack_90;
  long *plStack_88;
  long lStack_80;
  long *plStack_78;
  undefined1 auStack_70 [8];
  long *plStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  long lStack_50;
  
  uVar7 = *param_3;
  uVar5 = 0x138;
  __Znwm(0x138);
  if (*(char *)((long)param_4 + 0x17) < '\0') {
    func_0x000107c3192c(&uStack_60,*param_4,param_4[1]);
  }
  else {
    uStack_58 = param_4[1];
    uStack_60 = *param_4;
    lStack_50 = param_4[2];
  }
  FUN_10a7a1910(uVar5,uVar7,&uStack_60,0);
  if (lStack_50 < 0) {
    __ZdlPv(uStack_60);
  }
  lVar6 = *param_2;
  plVar2 = (long *)param_2[1];
  lStack_90 = lVar6;
  plStack_88 = plVar2;
  if (plVar2 != (long *)0x0) {
    plVar1 = plVar2 + 1;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = *plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    plVar1 = plVar2 + 2;
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
    __ZNSt3__119__shared_weak_count14__release_weakEv(plVar2);
  }
  lStack_80 = lVar6;
  plStack_78 = plVar2;
  FUN_10a37823c(auStack_70,uVar5,&lStack_80);
  FUN_10a37803c(param_1,auStack_70);
  if (plStack_68 != (long *)0x0) {
    plVar2 = plStack_68 + 1;
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
      (**(code **)(*plStack_68 + 0x10))(plStack_68);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_68);
    }
  }
  if (plStack_78 != (long *)0x0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  plVar2 = plStack_88;
  if (plStack_88 != (long *)0x0) {
    plVar1 = plStack_88 + 1;
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
      (**(code **)(*plStack_88 + 0x10))(plStack_88);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar2);
    }
  }
  lVar6 = *param_2;
  if ((lVar6 != 0) && (lStack_a0 = *param_1, lStack_a0 != 0)) {
    plStack_98 = (long *)param_1[1];
    if (plStack_98 != (long *)0x0) {
      plVar2 = plStack_98 + 1;
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar4) {
          *plVar2 = *plVar2 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    FUN_10aa88c30(lVar6,&lStack_a0);
    plVar2 = plStack_98;
    if (plStack_98 != (long *)0x0) {
      plVar1 = plStack_98 + 1;
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
        (**(code **)(*plStack_98 + 0x10))(plStack_98);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar2);
      }
    }
  }
  return;
}



/* Entry: 10a7a187c; end: 10a7a190f;  */

void FUN_10a7a187c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined1 uStack_39;
  undefined1 auStack_38 [8];
  long *plStack_30;
  undefined1 uStack_21;
  
  FUN_10a7a19d8(auStack_38,&uStack_21,&uStack_39,param_2,param_3);
  FUN_10a37803c(param_1,auStack_38);
  if (plStack_30 != (long *)0x0) {
    plVar1 = plStack_30 + 1;
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
      (**(code **)(*plStack_30 + 0x10))(plStack_30);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_30);
    }
  }
  return;
}



/* Entry: 10a7a1910; end: 10a7a19d7;  */

undefined8 *
FUN_10a7a1910(undefined8 *param_1,undefined8 param_2,undefined8 *param_3,undefined4 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  puVar1 = param_1;
  uVar2 = param_2;
  func_0x00010a0fda30();
  FUN_10aa7093c(param_1,param_2,puVar1,uVar2);
  *param_1 = &PTR_FUN_110c48ea8;
  param_1[2] = &PTR_FUN_110c48f48;
  param_1[7] = &PTR_FUN_110c48fa0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  if (*(char *)((long)param_3 + 0x17) < '\0') {
    func_0x000107c3192c(param_1 + 0x1f,*param_3,param_3[1]);
  }
  else {
    uVar3 = param_3[1];
    uVar2 = *param_3;
    param_1[0x21] = param_3[2];
    param_1[0x20] = uVar3;
    param_1[0x1f] = uVar2;
  }
  *(undefined4 *)(param_1 + 0x22) = param_4;
  param_1[0x24] = 0;
  param_1[0x23] = 0;
  param_1[0x26] = 0;
  param_1[0x25] = 0;
  return param_1;
}



/* Entry: 10a7a19d8; end: 10a7a1a4f;  */

void FUN_10a7a19d8(long *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  
  lVar5 = 0x150;
  __Znwm();
  FUN_10a7a1a50();
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



/* Entry: 10a7a1a50; end: 10a7a1a97;  */

undefined8 * FUN_10a7a1a50(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_DAT_110bc85c8;
  FUN_10a7a1a98(param_1 + 3);
  return param_1;
}



/* Entry: 10a7a1a98; end: 10a7a1b27;  */

undefined8
FUN_10a7a1a98(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  long lStack_30;
  
  if (*(char *)((long)param_4 + 0x17) < '\0') {
    func_0x000107c3192c(&uStack_40,*param_4,param_4[1]);
  }
  else {
    uStack_38 = param_4[1];
    uStack_40 = *param_4;
    lStack_30 = param_4[2];
  }
  FUN_10a7a1910(param_1,0,&uStack_40,0);
  if (lStack_30 < 0) {
    __ZdlPv(uStack_40);
  }
  return param_1;
}



/* Entry: 10a7a1b28; end: 10a7a1beb;  */

void FUN_10a7a1b28(long param_1,undefined8 param_2,undefined8 param_3)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  undefined8 uStack_40;
  undefined8 uStack_38;
  long *plStack_30;
  long lStack_28;
  
  lStack_28 = param_1;
  if (param_1 == 0) {
    uStack_40 = 0;
    FUN_10a7a1dd8(&uStack_40,param_2,param_3);
  }
  else {
    uStack_38 = *(undefined8 *)(param_1 + 0x858);
    plStack_30 = *(long **)(param_1 + 0x860);
    if (plStack_30 != (long *)0x0) {
      plVar1 = plStack_30 + 1;
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar4) {
          *plVar1 = *plVar1 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    FUN_10a7a1bec(&uStack_38,&lStack_28);
    plVar1 = plStack_30;
    if (plStack_30 != (long *)0x0) {
      plVar2 = plStack_30 + 1;
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
        (**(code **)(*plStack_30 + 0x10))(plStack_30);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar1);
      }
    }
  }
  return;
}



/* Entry: 10a7a1bec; end: 10a7a1dd7;  */

void FUN_10a7a1bec(long *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

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
  
  FUN_10a7a1e70(param_3,param_4,param_5);
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
  FUN_10a37823c(auStack_50,param_3,&lStack_60);
  FUN_10a37803c(param_1,auStack_50);
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



/* Entry: 10a7a1dd8; end: 10a7a1e6f;  */

void FUN_10a7a1dd8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined1 uStack_39;
  undefined1 auStack_38 [8];
  long *plStack_30;
  undefined1 uStack_21;
  
  FUN_10a7a1f30(auStack_38,&uStack_21,&uStack_39,param_2,param_3,param_4);
  FUN_10a37803c(param_1,auStack_38);
  if (plStack_30 != (long *)0x0) {
    plVar1 = plStack_30 + 1;
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
      (**(code **)(*plStack_30 + 0x10))(plStack_30);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_30);
    }
  }
  return;
}



/* Entry: 10a7a1e70; end: 10a7a1f2f;  */

undefined8 FUN_10a7a1e70(undefined8 *param_1,undefined8 *param_2,undefined4 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uStack_50;
  undefined8 uStack_48;
  long lStack_40;
  
  uVar1 = 0x138;
  __Znwm(0x138);
  uVar2 = *param_1;
  if (*(char *)((long)param_2 + 0x17) < '\0') {
    func_0x000107c3192c(&uStack_50,*param_2,param_2[1]);
  }
  else {
    uStack_48 = param_2[1];
    uStack_50 = *param_2;
    lStack_40 = param_2[2];
  }
  FUN_10a7a1910(uVar1,uVar2,&uStack_50,*param_3);
  if (lStack_40 < 0) {
    __ZdlPv(uStack_50);
  }
  return uVar1;
}



/* Entry: 10a7a1f30; end: 10a7a1faf;  */

void FUN_10a7a1f30(long *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  
  lVar5 = 0x150;
  __Znwm();
  FUN_10a7a1fb0();
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



/* Entry: 10a7a1fb0; end: 10a7a1ff7;  */

undefined8 * FUN_10a7a1fb0(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_DAT_110bc85c8;
  FUN_10a7a1ff8(param_1 + 3);
  return param_1;
}



/* Entry: 10a7a1ff8; end: 10a7a208b;  */

undefined8
FUN_10a7a1ff8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4,
             undefined4 *param_5)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  long lStack_30;
  
  if (*(char *)((long)param_4 + 0x17) < '\0') {
    func_0x000107c3192c(&uStack_40,*param_4,param_4[1]);
  }
  else {
    uStack_38 = param_4[1];
    uStack_40 = *param_4;
    lStack_30 = param_4[2];
  }
  FUN_10a7a1910(param_1,0,&uStack_40,*param_5);
  if (lStack_30 < 0) {
    __ZdlPv(uStack_40);
  }
  return param_1;
}



/* Entry: 10a7a208c; end: 10a7a260b;  */

/* WARNING: Removing unreachable block (ram,0x00010a7a2438) */
/* WARNING: Removing unreachable block (ram,0x00010a7a243c) */
/* WARNING: Removing unreachable block (ram,0x00010a7a2444) */
/* WARNING: Removing unreachable block (ram,0x00010a7a244c) */
/* WARNING: Removing unreachable block (ram,0x00010a7a2450) */

void FUN_10a7a208c(undefined8 *param_1,long param_2,undefined8 *param_3)

{
  long *plVar1;
  ushort uVar2;
  char cVar3;
  bool bVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined ***pppuVar7;
  undefined ***pppuVar8;
  undefined8 *puVar9;
  long lVar10;
  undefined **ppuVar11;
  undefined ***pppuVar12;
  long *plVar13;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined1 *puStack_110;
  code *pcStack_108;
  undefined ***pppuStack_100;
  undefined ***pppuStack_f8;
  undefined ***pppuStack_f0;
  undefined ***pppuStack_e8;
  undefined ***pppuStack_e0;
  undefined ***pppuStack_d8;
  code *pcStack_d0;
  undefined **appuStack_c8 [8];
  undefined ***pppuStack_88;
  undefined ***pppuStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if (param_2 == 0) {
    pppuVar7 = (undefined ***)0x2c0;
    puVar9 = param_3;
    __Znwm();
    pppuVar7[1] = (undefined **)0x0;
    pppuVar7[2] = (undefined **)0x0;
    *pppuVar7 = &PTR_DAT_110b9fda0;
    pppuVar8 = pppuVar7 + 3;
    plVar13 = (long *)param_3[1];
    pppuStack_d8 = (undefined ***)param_3[1];
    pppuStack_e0 = (undefined ***)*param_3;
    *param_3 = 0;
    param_3[1] = 0;
    pppuVar12 = pppuVar7;
    func_0x00010a0fda30();
    FUN_10ab6a888(pppuVar8,0,&pppuStack_e0,pppuVar12,puVar9);
    if (plVar13 != (long *)0x0) {
      plVar1 = plVar13 + 1;
      do {
        lVar10 = *plVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar4) {
          *plVar1 = lVar10 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar10 == 0) {
        (**(code **)(*plVar13 + 0x10))(plVar13);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar13);
      }
    }
    pppuStack_88 = pppuVar8;
    pppuStack_80 = pppuVar7;
    FUN_10a05b2a8(&pppuStack_88,pppuVar7 + 8,pppuVar8);
    FUN_10a05b04c(&pppuStack_f0,&pppuStack_88);
    pppuVar8 = pppuStack_80;
    if (pppuStack_80 != (undefined ***)0x0) {
      pppuVar12 = pppuStack_80 + 1;
      do {
        ppuVar11 = *pppuVar12;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(pppuVar12,0x10);
        if (bVar4) {
          *pppuVar12 = (undefined **)((long)ppuVar11 + -1);
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (ppuVar11 == (undefined **)0x0) {
        (*(code *)(*pppuStack_80)[2])(pppuStack_80);
        __ZNSt3__119__shared_weak_count14__release_weakEv(pppuVar8);
      }
    }
    if (pppuStack_e8 == (undefined ***)0x0) {
      pppuStack_d8 = (undefined ***)0x0;
    }
    else {
      pppuVar8 = pppuStack_e8 + 1;
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(pppuVar8,0x10);
        if (bVar4) {
          *pppuVar8 = (undefined **)((long)*pppuVar8 + 1);
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      pppuStack_d8 = pppuStack_e8;
      if (pppuStack_e8 != (undefined ***)0x0) {
        pppuVar8 = pppuStack_e8 + 1;
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(pppuVar8,0x10);
          if (bVar4) {
            *pppuVar8 = (undefined **)((long)*pppuVar8 + 1);
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
    }
    uStack_70 = 0;
    uStack_78 = 0;
    pppuStack_88 = (undefined ***)&UNK_1053a6a3c;
    appuStack_c8[0] = &PTR_DAT_110c18158;
    pcStack_d0 = FUN_10a7a260c;
    pppuStack_e0 = pppuStack_f0;
    pppuStack_80 = (undefined ***)&PTR_DAT_110ae9180;
    FUN_10a044790(&pppuStack_88);
    (*(code *)*pppuStack_80)(&pppuStack_80);
    pppuVar8 = pppuStack_e8;
    if (pppuStack_e8 != (undefined ***)0x0) {
      pppuVar12 = pppuStack_e8 + 1;
      do {
        ppuVar11 = *pppuVar12;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(pppuVar12,0x10);
        if (bVar4) {
          *pppuVar12 = (undefined **)((long)ppuVar11 + -1);
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (ppuVar11 == (undefined **)0x0) {
        (*(code *)(*pppuStack_e8)[2])(pppuStack_e8);
        __ZNSt3__119__shared_weak_count14__release_weakEv(pppuVar8);
      }
    }
    param_1[1] = pppuStack_d8;
    *param_1 = pppuStack_e0;
    if (pppuStack_d8 != (undefined ***)0x0) {
      pppuVar8 = pppuStack_d8 + 1;
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(pppuVar8,0x10);
        if (bVar4) {
          *pppuVar8 = (undefined **)((long)*pppuVar8 + 1);
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    FUN_10a044790(&pcStack_d0);
    pppuVar8 = appuStack_c8;
    (*(code *)*appuStack_c8[0])();
    pppuVar12 = pppuStack_d8;
    if (pppuStack_d8 == (undefined ***)0x0) goto LAB_10a7a253c;
    pppuVar7 = pppuStack_d8 + 1;
    do {
      ppuVar11 = *pppuVar7;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(pppuVar7,0x10);
      if (bVar4) {
        *pppuVar7 = (undefined **)((long)ppuVar11 + -1);
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  else {
    pppuStack_100 = *(undefined ****)(param_2 + 0x858);
    pppuStack_f8 = *(undefined ****)(param_2 + 0x860);
    if (pppuStack_f8 != (undefined ***)0x0) {
      pppuVar8 = pppuStack_f8 + 1;
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(pppuVar8,0x10);
        if (bVar4) {
          *pppuVar8 = (undefined **)((long)*pppuVar8 + 1);
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    uVar5 = 0x2a8;
    puVar9 = param_3;
    __Znwm(0x2a8);
    plVar13 = (long *)param_3[1];
    pppuStack_d8 = (undefined ***)param_3[1];
    pppuStack_e0 = (undefined ***)*param_3;
    *param_3 = 0;
    param_3[1] = 0;
    uVar6 = uVar5;
    func_0x00010a0fda30();
    FUN_10ab6a888(uVar5,param_2,&pppuStack_e0,uVar6,puVar9);
    if (plVar13 != (long *)0x0) {
      plVar1 = plVar13 + 1;
      do {
        lVar10 = *plVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar4) {
          *plVar1 = lVar10 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar10 == 0) {
        (**(code **)(*plVar13 + 0x10))(plVar13);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar13);
      }
    }
    pppuVar12 = pppuStack_f8;
    pppuVar8 = pppuStack_100;
    pppuStack_f0 = pppuStack_100;
    pppuStack_e8 = pppuStack_f8;
    if (pppuStack_f8 != (undefined ***)0x0) {
      pppuVar7 = pppuStack_f8 + 1;
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(pppuVar7,0x10);
        if (bVar4) {
          *pppuVar7 = (undefined **)((long)*pppuVar7 + 1);
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      pppuVar7 = pppuStack_f8 + 2;
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(pppuVar7,0x10);
        if (bVar4) {
          *pppuVar7 = (undefined **)((long)*pppuVar7 + 1);
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(pppuVar7,0x10);
        if (bVar4) {
          *pppuVar7 = (undefined **)((long)*pppuVar7 + 1);
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      __ZNSt3__119__shared_weak_count14__release_weakEv(pppuStack_f8);
    }
    pppuStack_e0 = pppuVar8;
    pppuStack_d8 = pppuVar12;
    FUN_10a05b208(&pppuStack_88,uVar5,&pppuStack_e0);
    FUN_10a05b04c(param_1,&pppuStack_88);
    pppuVar8 = pppuStack_80;
    if (pppuStack_80 != (undefined ***)0x0) {
      pppuVar12 = pppuStack_80 + 1;
      do {
        ppuVar11 = *pppuVar12;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(pppuVar12,0x10);
        if (bVar4) {
          *pppuVar12 = (undefined **)((long)ppuVar11 + -1);
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (ppuVar11 == (undefined **)0x0) {
        (*(code *)(*pppuStack_80)[2])(pppuStack_80);
        __ZNSt3__119__shared_weak_count14__release_weakEv(pppuVar8);
      }
    }
    if (pppuStack_d8 != (undefined ***)0x0) {
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
    pppuVar8 = pppuStack_e8;
    if (pppuStack_e8 != (undefined ***)0x0) {
      pppuVar12 = pppuStack_e8 + 1;
      do {
        ppuVar11 = *pppuVar12;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(pppuVar12,0x10);
        if (bVar4) {
          *pppuVar12 = (undefined **)((long)ppuVar11 + -1);
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (ppuVar11 == (undefined **)0x0) {
        (*(code *)(*pppuStack_e8)[2])(pppuStack_e8);
        __ZNSt3__119__shared_weak_count14__release_weakEv(pppuVar8);
      }
    }
    pppuVar8 = pppuStack_100;
    if ((pppuStack_100 != (undefined ***)0x0) &&
       (pppuVar12 = (undefined ***)*param_1, pppuVar12 != (undefined ***)0x0)) {
      pppuStack_80 = (undefined ***)param_1[1];
      if (pppuStack_80 != (undefined ***)0x0) {
        pppuVar7 = pppuStack_80 + 1;
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(pppuVar7,0x10);
          if (bVar4) {
            *pppuVar7 = (undefined **)((long)*pppuVar7 + 1);
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
      pppuStack_88 = pppuVar12;
      FUN_10aa88c30(pppuStack_100,&pppuStack_88);
      pppuVar12 = pppuStack_80;
      if (pppuStack_80 != (undefined ***)0x0) {
        pppuVar7 = pppuStack_80 + 1;
        do {
          ppuVar11 = *pppuVar7;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(pppuVar7,0x10);
          if (bVar4) {
            *pppuVar7 = (undefined **)((long)ppuVar11 + -1);
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (ppuVar11 == (undefined **)0x0) {
          (*(code *)(*pppuStack_80)[2])(pppuStack_80);
          __ZNSt3__119__shared_weak_count14__release_weakEv();
          pppuVar8 = pppuVar12;
        }
      }
    }
    pppuVar12 = pppuStack_f8;
    if (pppuStack_f8 == (undefined ***)0x0) goto LAB_10a7a253c;
    pppuVar7 = pppuStack_f8 + 1;
    do {
      ppuVar11 = *pppuVar7;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(pppuVar7,0x10);
      if (bVar4) {
        *pppuVar7 = (undefined **)((long)ppuVar11 + -1);
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  if (ppuVar11 == (undefined **)0x0) {
    (*(code *)(*pppuVar12)[2])(pppuVar12);
    pppuVar8 = pppuVar12;
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
LAB_10a7a253c:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010a0536d4(&pppuStack_88);
  func_0x00010a05248c(pppuVar12);
  FUN_10a054c5c(&pppuStack_100);
  __Unwind_Resume();
  ppuVar11 = pppuVar8[2];
  if (ppuVar11 != (undefined **)0x0) {
    uVar2 = *(ushort *)((long)ppuVar11 + 0x209);
    if ((uVar2 & 0x7f) != 0) {
      pcStack_108 = FUN_10a7a260c;
      *(ushort *)((long)ppuVar11 + 0x209) = uVar2 & 0xff00 | uVar2 - 1 & 0x7f;
      uStack_128 = 0;
      uStack_130 = 0;
      uStack_118 = 0;
      uStack_120 = 0;
      uStack_148 = 0;
      uStack_150 = 0;
      uStack_138 = 0;
      uStack_140 = 0;
      uStack_158 = 0;
      uStack_160 = 0;
      ppuVar11[0x43] = (undefined *)0x0;
      puStack_110 = &stack0xfffffffffffffff0;
      FUN_10a1cc408(ppuVar11 + 0x44,(ulong)&uStack_160 | 8);
    }
    return;
  }
  return;
}



/* Entry: 10a7a260c; end: 10a7a2643;  */

void FUN_10a7a260c(long param_1)

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



/* Entry: 10a7a2644; end: 10a7a26d3;  */

void FUN_10a7a2644(long *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  
  lVar5 = 0x2f8;
  __Znwm();
  FUN_10a7a26d4();
  *param_1 = lVar5 + 0x18;
  param_1[1] = lVar5;
  if (((long *)(lVar5 + 0x58) != (long *)0x0) &&
     ((lVar4 = *(long *)(lVar5 + 0x60), lVar4 == 0 || (*(long *)(lVar4 + 8) == -1)))) {
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
      lVar4 = *(long *)(lVar5 + 0x60);
    }
    *(long *)(lVar5 + 0x58) = lVar5 + 0x18;
    *(long **)(lVar5 + 0x60) = plVar6;
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



/* Entry: 10a7a26d4; end: 10a7a2733;  */

undefined8 *
FUN_10a7a26d4(undefined8 *param_1,undefined8 *param_2,undefined4 *param_3,undefined4 *param_4,
             undefined4 *param_5,undefined1 *param_6)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_FUN_110bb2d40;
  FUN_10a1da580(param_1 + 3,*param_2,*param_3,*param_4,*param_5,*param_6,0);
  return param_1;
}



/* Entry: 10a7a2734; end: 10a7a274b;  */

void FUN_10a7a2734(void)

{
  return;
}



/* Entry: 10a7a274c; end: 10a7a27d3;  */

void FUN_10a7a274c(undefined8 *param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uStack_30;
  long *plStack_28;
  
  uVar5 = *(undefined8 *)(param_2 + 0x10);
  plStack_28 = (long *)param_1[1];
  uStack_30 = *param_1;
  *param_1 = 0;
  param_1[1] = 0;
  FUN_10a34a9d0(uVar5,&uStack_30);
  plVar4 = plStack_28;
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
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
    }
  }
  return;
}



/* Entry: 10a7a27d4; end: 10a7a2813;  */

void FUN_10a7a27d4(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 8);
  if (lVar1 != 0) {
    (*(code *)**(undefined8 **)(lVar1 + 8))();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(lVar1);
    return;
  }
  return;
}



/* Entry: 10a7a2814; end: 10a7a282b;  */

void FUN_10a7a2814(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_2[1] = 0;
  return;
}



/* Entry: 10a7a282c; end: 10a7a289f;  */

void FUN_10a7a282c(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uStack_40;
  undefined8 uStack_38;
  long lStack_30;
  
  uVar1 = *(undefined8 *)(param_2 + 0x10);
  uStack_38 = param_1[1];
  uStack_40 = *param_1;
  lStack_30 = param_1[2];
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = 0;
  FUN_10a35509c(uVar1,&uStack_40);
  if (lStack_30 < 0) {
    __ZdlPv(uStack_40);
  }
  return;
}



/* Entry: 10a7a28a0; end: 10a7a28df;  */

void FUN_10a7a28a0(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 8);
  if (lVar1 != 0) {
    (*(code *)**(undefined8 **)(lVar1 + 8))();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(lVar1);
    return;
  }
  return;
}



/* Entry: 10a7a28e0; end: 10a7a28f7;  */

void FUN_10a7a28e0(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_2[1] = 0;
  return;
}



/* Entry: 10a7a28f8; end: 10a7a29b3;  */

void FUN_10a7a28f8(undefined8 *param_1,undefined8 param_2)

{
  int *piVar1;
  long *plVar2;
  byte bVar3;
  char cVar4;
  bool bVar5;
  long *plVar6;
  int *piVar7;
  long lVar8;
  
  plVar6 = (long *)param_1[1];
  if ((plVar6 != (long *)0x0) && (__ZNSt3__119__shared_weak_count4lockEv(), plVar6 != (long *)0x0))
  {
    piVar7 = (int *)*param_1;
    if (piVar7 != (int *)0x0) {
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar7,0x10);
        if (bVar5) {
          *piVar7 = *piVar7 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      bVar3 = *(byte *)((long)param_1 + 0x11);
      piVar1 = piVar7 + 1;
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar5) {
          *piVar1 = *piVar1 - (uint)bVar3;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      bVar3 = *(byte *)(param_1 + 2);
      piVar7 = piVar7 + 2;
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar7,0x10);
        if (bVar5) {
          *piVar7 = *piVar7 - (uint)bVar3;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
    plVar2 = plVar6 + 1;
    do {
      lVar8 = *plVar2;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar5) {
        *plVar2 = lVar8 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar8 == 0) {
      (**(code **)(*plVar6 + 0x10))(plVar6);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
    }
  }
  func_0x00010ad18238(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a7a29b4; end: 10a7a2a27;  */

void FUN_10a7a29b4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c181c8;
  if (param_1[5] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)(param_1);
  return;
}



/* Entry: 10a7a2a28; end: 10a7a2b03;  */

void FUN_10a7a2a28(long param_1)

{
  int *piVar1;
  long *plVar2;
  byte bVar3;
  char cVar4;
  bool bVar5;
  long *plVar6;
  int *piVar7;
  long lVar8;
  long lVar9;
  
  lVar9 = *(long *)(param_1 + 0x18);
  plVar6 = *(long **)(param_1 + 0x28);
  if ((plVar6 != (long *)0x0) && (__ZNSt3__119__shared_weak_count4lockEv(), plVar6 != (long *)0x0))
  {
    piVar7 = *(int **)(param_1 + 0x20);
    if (piVar7 != (int *)0x0) {
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar7,0x10);
        if (bVar5) {
          *piVar7 = *piVar7 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      bVar3 = *(byte *)(param_1 + 0x31);
      piVar1 = piVar7 + 1;
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar5) {
          *piVar1 = *piVar1 - (uint)bVar3;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      bVar3 = *(byte *)(param_1 + 0x30);
      piVar7 = piVar7 + 2;
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar7,0x10);
        if (bVar5) {
          *piVar7 = *piVar7 - (uint)bVar3;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
    plVar2 = plVar6 + 1;
    do {
      lVar8 = *plVar2;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar5) {
        *plVar2 = lVar8 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar8 == 0) {
      (**(code **)(*plVar6 + 0x10))(plVar6);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
    }
  }
  if (lVar9 != 0) {
    func_0x00010ad18238(lVar9);
    __ZdlPv();
  }
  if (*(long *)(param_1 + 0x28) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZNSt3__119__shared_weak_count14__release_weakEv_110346648)();
    return;
  }
  return;
}



/* Entry: 10a7a2b04; end: 10a7a2b3f;  */

long FUN_10a7a2b04(long param_1,undefined8 param_2)

{
  FUN_10a042ab0(param_2,&PTR_DAT_110c18208);
  param_1 = param_1 + 0x20;
  if ((int)param_2 == 0) {
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 10a7a2b40; end: 10a7a2b53;  */

void FUN_10a7a2b40(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a7a2b54; end: 10a7a2b73;  */

void FUN_10a7a2b54(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110c18228;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a7a2b74; end: 10a7a2b9b;  */

long FUN_10a7a2b74(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  FUN_10a7a2ba0(param_1 + 0x28);
  plVar5 = *(long **)(param_1 + 0x20);
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
  return param_1 + 0x18;
}



/* Entry: 10a7a2b9c; end: 10a7a2b9f;  */

void FUN_10a7a2b9c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a7a2ba0; end: 10a7a2bf7;  */

long FUN_10a7a2ba0(long param_1)

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



/* Entry: 10a7a2bf8; end: 10a7a2c0b;  */

undefined1  [16] FUN_10a7a2bf8(undefined8 param_1,ulong param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  long lVar5;
  long *plVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  
  puVar4 = &UNK_10f676ba7;
  FUN_109ffde64();
  if (param_2 >> 0x3c == 0) {
    lVar5 = param_2 << 4;
    __Znwm(lVar5);
    auVar7._8_8_ = param_2;
    auVar7._0_8_ = lVar5;
    return auVar7;
  }
  func_0x000109ffded8();
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
  auVar8._8_8_ = param_2;
  auVar8._0_8_ = puVar4;
  return auVar8;
}



/* Entry: 10a7a2c0c; end: 10a7a2c97;  */

undefined1  [16] FUN_10a7a2c0c(long param_1,ulong param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  
  if (param_2 >> 0x3c == 0) {
    lVar4 = param_2 << 4;
    __Znwm(lVar4);
    auVar6._8_8_ = param_2;
    auVar6._0_8_ = lVar4;
    return auVar6;
  }
  func_0x000109ffded8();
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
  auVar7._8_8_ = param_2;
  auVar7._0_8_ = param_1;
  return auVar7;
}



/* Entry: 10a7a2c98; end: 10a7a2dc7;  */

undefined1  [16]
FUN_10a7a2c98(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  undefined8 *puVar1;
  long *plVar2;
  long lVar3;
  undefined8 *puVar4;
  ulong uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  
  uVar5 = param_1[2];
  puVar9 = (undefined8 *)*param_1;
  puVar1 = param_1;
  if (param_4 <= (undefined8 *)((long)(uVar5 - (long)puVar9) >> 4)) {
    puVar7 = (undefined8 *)param_1[1];
    puVar4 = param_2;
    if ((undefined8 *)((long)puVar7 - (long)puVar9 >> 4) < param_4) {
      puVar8 = (undefined8 *)((long)param_2 + ((long)puVar7 - (long)puVar9));
      puVar6 = puVar7;
      if (puVar7 != puVar9) {
        _memmove(puVar9,param_2);
        puVar7 = (undefined8 *)param_1[1];
        puVar6 = puVar7;
        puVar4 = param_2;
        puVar1 = puVar9;
      }
      for (; puVar8 != param_3; puVar8 = puVar8 + 2) {
        uVar10 = *puVar8;
        puVar7[1] = puVar8[1];
        *puVar7 = uVar10;
        puVar7 = puVar7 + 2;
        puVar6 = puVar6 + 2;
      }
    }
    else {
      lVar3 = (long)param_3 - (long)param_2;
      if (lVar3 != 0) {
        puVar1 = puVar9;
        _memmove(puVar9,param_2,lVar3);
        puVar4 = param_2;
      }
      puVar6 = (undefined8 *)((long)puVar9 + lVar3);
    }
LAB_10a7a2dac:
    param_1[1] = puVar6;
    auVar12._8_8_ = puVar4;
    auVar12._0_8_ = puVar1;
    return auVar12;
  }
  puVar7 = param_1;
  puVar4 = param_2;
  if (puVar9 != (undefined8 *)0x0) {
    param_1[1] = puVar9;
    __ZdlPv();
    uVar5 = 0;
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    puVar7 = puVar9;
  }
  if ((ulong)param_4 >> 0x3c == 0) {
    puVar4 = (undefined8 *)((long)uVar5 >> 3);
    if ((undefined8 *)((long)uVar5 >> 3) <= param_4) {
      puVar4 = param_4;
    }
    if (0x7fffffffffffffef < uVar5) {
      puVar4 = (undefined8 *)0xfffffffffffffff;
    }
    FUN_10a7a2dc8(param_1,puVar4);
    puVar6 = (undefined8 *)param_1[1];
    for (; param_2 != param_3; param_2 = param_2 + 2) {
      uVar10 = *param_2;
      puVar6[1] = param_2[1];
      *puVar6 = uVar10;
      puVar6 = puVar6 + 2;
    }
    goto LAB_10a7a2dac;
  }
  FUN_10a7a2e00();
  if ((ulong)puVar4 >> 0x3c == 0) {
    puVar1 = puVar7;
    FUN_10a7a2e14();
    *puVar7 = puVar1;
    puVar7[1] = puVar1;
    puVar7[2] = puVar1 + (long)puVar4 * 2;
    auVar13._8_8_ = puVar4;
    auVar13._0_8_ = puVar1;
    return auVar13;
  }
  FUN_10a7a2e00();
  plVar2 = (long *)&UNK_10f676ba7;
  FUN_109ffde64();
  if ((ulong)puVar4 >> 0x3c == 0) {
    lVar3 = (long)puVar4 << 4;
    __Znwm(lVar3);
    auVar14._8_8_ = puVar4;
    auVar14._0_8_ = lVar3;
    return auVar14;
  }
  func_0x000109ffded8();
  puVar1 = (undefined8 *)plVar2[1];
  puVar9 = (undefined8 *)plVar2[2];
  plVar2[5] = 0;
  lVar3 = (long)puVar9 - (long)puVar1;
  while (uVar5 = lVar3 >> 3, 2 < uVar5) {
    __ZdlPv(*puVar1);
    puVar9 = (undefined8 *)plVar2[2];
    puVar1 = (undefined8 *)(plVar2[1] + 8);
    plVar2[1] = (long)puVar1;
    lVar3 = (long)puVar9 - (long)puVar1;
  }
  if (uVar5 == 1) {
    lVar3 = 0x200;
  }
  else {
    if (uVar5 != 2) goto LAB_10a7a2ec4;
    lVar3 = 0x400;
  }
  plVar2[4] = lVar3;
LAB_10a7a2ec4:
  for (; puVar1 != puVar9; puVar1 = puVar1 + 1) {
    __ZdlPv(*puVar1);
  }
  func_0x000108a55470();
  if (*plVar2 != 0) {
    __ZdlPv();
  }
  auVar11._8_8_ = puVar4;
  auVar11._0_8_ = plVar2;
  return auVar11;
}



/* Entry: 10a7a2dc8; end: 10a7a2dff;  */

undefined1  [16] FUN_10a7a2dc8(long *param_1,ulong param_2)

{
  undefined8 *puVar1;
  ulong uVar2;
  long *plVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  
  if (param_2 >> 0x3c == 0) {
    plVar3 = param_1;
    FUN_10a7a2e14();
    *param_1 = (long)plVar3;
    param_1[1] = (long)plVar3;
    param_1[2] = (long)(plVar3 + param_2 * 2);
    auVar7._8_8_ = param_2;
    auVar7._0_8_ = plVar3;
    return auVar7;
  }
  FUN_10a7a2e00();
  plVar3 = (long *)&UNK_10f676ba7;
  FUN_109ffde64();
  if (param_2 >> 0x3c == 0) {
    lVar4 = param_2 << 4;
    __Znwm(lVar4);
    auVar8._8_8_ = param_2;
    auVar8._0_8_ = lVar4;
    return auVar8;
  }
  func_0x000109ffded8();
  puVar5 = (undefined8 *)plVar3[1];
  puVar1 = (undefined8 *)plVar3[2];
  plVar3[5] = 0;
  lVar4 = (long)puVar1 - (long)puVar5;
  while (uVar2 = lVar4 >> 3, 2 < uVar2) {
    __ZdlPv(*puVar5);
    puVar1 = (undefined8 *)plVar3[2];
    puVar5 = (undefined8 *)(plVar3[1] + 8);
    plVar3[1] = (long)puVar5;
    lVar4 = (long)puVar1 - (long)puVar5;
  }
  if (uVar2 == 1) {
    lVar4 = 0x200;
  }
  else {
    if (uVar2 != 2) goto LAB_10a7a2ec4;
    lVar4 = 0x400;
  }
  plVar3[4] = lVar4;
LAB_10a7a2ec4:
  for (; puVar5 != puVar1; puVar5 = puVar5 + 1) {
    __ZdlPv(*puVar5);
  }
  func_0x000108a55470();
  if (*plVar3 != 0) {
    __ZdlPv();
  }
  auVar6._8_8_ = param_2;
  auVar6._0_8_ = plVar3;
  return auVar6;
}



/* Entry: 10a7a2e00; end: 10a7a2e13;  */

undefined1  [16] FUN_10a7a2e00(undefined8 param_1,ulong param_2)

{
  undefined8 *puVar1;
  ulong uVar2;
  long *plVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  
  plVar3 = (long *)&UNK_10f676ba7;
  FUN_109ffde64();
  if (param_2 >> 0x3c == 0) {
    lVar4 = param_2 << 4;
    __Znwm(lVar4);
    auVar7._8_8_ = param_2;
    auVar7._0_8_ = lVar4;
    return auVar7;
  }
  func_0x000109ffded8();
  puVar5 = (undefined8 *)plVar3[1];
  puVar1 = (undefined8 *)plVar3[2];
  plVar3[5] = 0;
  lVar4 = (long)puVar1 - (long)puVar5;
  while (uVar2 = lVar4 >> 3, 2 < uVar2) {
    __ZdlPv(*puVar5);
    puVar1 = (undefined8 *)plVar3[2];
    puVar5 = (undefined8 *)(plVar3[1] + 8);
    plVar3[1] = (long)puVar5;
    lVar4 = (long)puVar1 - (long)puVar5;
  }
  if (uVar2 == 1) {
    lVar4 = 0x200;
  }
  else {
    if (uVar2 != 2) goto LAB_10a7a2ec4;
    lVar4 = 0x400;
  }
  plVar3[4] = lVar4;
LAB_10a7a2ec4:
  for (; puVar5 != puVar1; puVar5 = puVar5 + 1) {
    __ZdlPv(*puVar5);
  }
  func_0x000108a55470();
  if (*plVar3 != 0) {
    __ZdlPv();
  }
  auVar6._8_8_ = param_2;
  auVar6._0_8_ = plVar3;
  return auVar6;
}



/* Entry: 10a7a2e14; end: 10a7a2e47;  */

undefined1  [16] FUN_10a7a2e14(long *param_1,ulong param_2)

{
  undefined8 *puVar1;
  ulong uVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  
  if (param_2 >> 0x3c == 0) {
    lVar3 = param_2 << 4;
    __Znwm(lVar3);
    auVar6._8_8_ = param_2;
    auVar6._0_8_ = lVar3;
    return auVar6;
  }
  func_0x000109ffded8();
  puVar4 = (undefined8 *)param_1[1];
  puVar1 = (undefined8 *)param_1[2];
  param_1[5] = 0;
  lVar3 = (long)puVar1 - (long)puVar4;
  while (uVar2 = lVar3 >> 3, 2 < uVar2) {
    __ZdlPv(*puVar4);
    puVar1 = (undefined8 *)param_1[2];
    puVar4 = (undefined8 *)(param_1[1] + 8);
    param_1[1] = (long)puVar4;
    lVar3 = (long)puVar1 - (long)puVar4;
  }
  if (uVar2 == 1) {
    lVar3 = 0x200;
  }
  else {
    if (uVar2 != 2) goto LAB_10a7a2ec4;
    lVar3 = 0x400;
  }
  param_1[4] = lVar3;
LAB_10a7a2ec4:
  for (; puVar4 != puVar1; puVar4 = puVar4 + 1) {
    __ZdlPv(*puVar4);
  }
  func_0x000108a55470();
  if (*param_1 != 0) {
    __ZdlPv();
  }
  auVar5._8_8_ = param_2;
  auVar5._0_8_ = param_1;
  return auVar5;
}



/* Entry: 10a7a2e48; end: 10a7a2edf;  */

long * FUN_10a7a2e48(long *param_1)

{
  undefined8 *puVar1;
  ulong uVar2;
  long lVar3;
  undefined8 *puVar4;
  
  puVar4 = (undefined8 *)param_1[1];
  puVar1 = (undefined8 *)param_1[2];
  param_1[5] = 0;
  lVar3 = (long)puVar1 - (long)puVar4;
  while (uVar2 = lVar3 >> 3, 2 < uVar2) {
    __ZdlPv(*puVar4);
    puVar1 = (undefined8 *)param_1[2];
    puVar4 = (undefined8 *)(param_1[1] + 8);
    param_1[1] = (long)puVar4;
    lVar3 = (long)puVar1 - (long)puVar4;
  }
  if (uVar2 == 1) {
    lVar3 = 0x200;
  }
  else {
    if (uVar2 != 2) goto LAB_10a7a2ec4;
    lVar3 = 0x400;
  }
  param_1[4] = lVar3;
LAB_10a7a2ec4:
  for (; puVar4 != puVar1; puVar4 = puVar4 + 1) {
    __ZdlPv(*puVar4);
  }
  func_0x000108a55470();
  if (*param_1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 10a7a2ee0; end: 10a7a2ef3;  */

void FUN_10a7a2ee0(void)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  plVar1 = (long *)&UNK_10f676ba7;
  FUN_109ffde64();
  if (plVar1 < (long *)0x555555555555556) {
    __Znwm((long)plVar1 * 0x30);
    return;
  }
  func_0x000109ffded8();
  lVar3 = *plVar1;
  if (lVar3 != 0) {
    lVar4 = lVar3;
    lVar2 = plVar1[1];
    if (plVar1[1] != lVar3) {
      do {
        lVar4 = lVar2 + -0x30;
        FUN_10a350abc(lVar2 + -0x18);
        lVar2 = lVar4;
      } while (lVar4 != lVar3);
      lVar4 = *plVar1;
    }
    plVar1[1] = lVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(lVar4);
    return;
  }
  return;
}



/* Entry: 10a7a2ef4; end: 10a7a2f37;  */

void FUN_10a7a2ef4(long *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  if (param_1 < (long *)0x555555555555556) {
    __Znwm((long)param_1 * 0x30);
    return;
  }
  func_0x000109ffded8();
  lVar2 = *param_1;
  if (lVar2 != 0) {
    lVar3 = lVar2;
    lVar1 = param_1[1];
    if (param_1[1] != lVar2) {
      do {
        lVar3 = lVar1 + -0x30;
        FUN_10a350abc(lVar1 + -0x18);
        lVar1 = lVar3;
      } while (lVar3 != lVar2);
      lVar3 = *param_1;
    }
    param_1[1] = lVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(lVar3);
    return;
  }
  return;
}



/* Entry: 10a7a2f38; end: 10a7a2fa3;  */

void FUN_10a7a2f38(long *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar2 = *param_1;
  if (lVar2 != 0) {
    lVar3 = lVar2;
    lVar1 = param_1[1];
    if (param_1[1] != lVar2) {
      do {
        lVar3 = lVar1 + -0x30;
        FUN_10a350abc(lVar1 + -0x18);
        lVar1 = lVar3;
      } while (lVar3 != lVar2);
      lVar3 = *param_1;
    }
    param_1[1] = lVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(lVar3);
    return;
  }
  return;
}



/* Entry: 10a7a2fa4; end: 10a7a3067;  */

void FUN_10a7a2fa4(undefined1 *param_1,undefined1 *param_2,undefined1 *param_3)

{
  undefined1 *puVar1;
  undefined8 uVar2;
  
  puVar1 = param_1;
  if (param_1 != param_2) {
    do {
      *param_3 = *puVar1;
      uVar2 = *(undefined8 *)(puVar1 + 8);
      *(undefined8 *)(param_3 + 0x10) = *(undefined8 *)(puVar1 + 0x10);
      *(undefined8 *)(param_3 + 8) = uVar2;
      uVar2 = *(undefined8 *)(puVar1 + 0x18);
      *(undefined8 *)(param_3 + 0x20) = *(undefined8 *)(puVar1 + 0x20);
      *(undefined8 *)(param_3 + 0x18) = uVar2;
      *(undefined8 *)(puVar1 + 0x18) = 0;
      *(undefined8 *)(puVar1 + 0x20) = 0;
      param_3[0x28] = puVar1[0x28];
      puVar1 = puVar1 + 0x30;
      param_3 = param_3 + 0x30;
    } while (puVar1 != param_2);
    do {
      FUN_10a350abc(param_1 + 0x18);
      param_1 = param_1 + 0x30;
    } while (param_1 != param_2);
  }
  return;
}



/* Entry: 10a7a3068; end: 10a7a307b;  */

void FUN_10a7a3068(undefined8 param_1,undefined *param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  puVar2 = &UNK_10f676ba7;
  FUN_109ffde64();
  if ((undefined *)0x276276276276276 < puVar2) {
    func_0x000109ffded8();
    if (puVar2 != param_2) {
      puVar3 = puVar2 + 0x24;
      param_3 = param_3 + 0x24;
      do {
        uVar5 = *(undefined8 *)(puVar3 + -0x1c);
        uVar4 = *(undefined8 *)(puVar3 + -0x24);
        *(undefined8 *)(param_3 + -0x14) = *(undefined8 *)(puVar3 + -0x14);
        *(undefined8 *)(param_3 + -0x1c) = uVar5;
        *(undefined8 *)(param_3 + -0x24) = uVar4;
        *(undefined8 *)(puVar3 + -0x14) = 0;
        *(undefined8 *)(puVar3 + -0x1c) = 0;
        *(undefined8 *)(puVar3 + -0x24) = 0;
        *(undefined8 *)(param_3 + -0xc) = *(undefined8 *)(puVar3 + -0xc);
        *(undefined2 *)(param_3 + -4) = *(undefined2 *)(puVar3 + -4);
        func_0x00010a3518a0(param_3,puVar3);
        puVar1 = puVar3 + 0x44;
        puVar3 = puVar3 + 0x68;
        param_3 = param_3 + 0x68;
      } while (puVar1 != param_2);
      do {
        FUN_10a7a3158(puVar2);
        puVar2 = puVar2 + 0x68;
      } while (puVar2 != param_2);
    }
    return;
  }
  __Znwm((long)puVar2 * 0x68);
  return;
}



/* Entry: 10a7a307c; end: 10a7a30c3;  */

void FUN_10a7a307c(ulong param_1,ulong param_2,long param_3)

{
  ulong uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  if (0x276276276276276 < param_1) {
    func_0x000109ffded8();
    if (param_1 != param_2) {
      lVar2 = param_1 + 0x24;
      param_3 = param_3 + 0x24;
      do {
        uVar4 = *(undefined8 *)(lVar2 + -0x1c);
        uVar3 = *(undefined8 *)(lVar2 + -0x24);
        *(undefined8 *)(param_3 + -0x14) = *(undefined8 *)(lVar2 + -0x14);
        *(undefined8 *)(param_3 + -0x1c) = uVar4;
        *(undefined8 *)(param_3 + -0x24) = uVar3;
        *(undefined8 *)(lVar2 + -0x14) = 0;
        *(undefined8 *)(lVar2 + -0x1c) = 0;
        *(undefined8 *)(lVar2 + -0x24) = 0;
        *(undefined8 *)(param_3 + -0xc) = *(undefined8 *)(lVar2 + -0xc);
        *(undefined2 *)(param_3 + -4) = *(undefined2 *)(lVar2 + -4);
        func_0x00010a3518a0(param_3,lVar2);
        uVar1 = lVar2 + 0x44;
        lVar2 = lVar2 + 0x68;
        param_3 = param_3 + 0x68;
      } while (uVar1 != param_2);
      do {
        FUN_10a7a3158(param_1);
        param_1 = param_1 + 0x68;
      } while (param_1 != param_2);
    }
    return;
  }
  __Znwm(param_1 * 0x68);
  return;
}



/* Entry: 10a7a30c4; end: 10a7a3157;  */

void FUN_10a7a30c4(long param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  if (param_1 != param_2) {
    lVar2 = param_1 + 0x24;
    param_3 = param_3 + 0x24;
    do {
      uVar4 = *(undefined8 *)(lVar2 + -0x1c);
      uVar3 = *(undefined8 *)(lVar2 + -0x24);
      *(undefined8 *)(param_3 + -0x14) = *(undefined8 *)(lVar2 + -0x14);
      *(undefined8 *)(param_3 + -0x1c) = uVar4;
      *(undefined8 *)(param_3 + -0x24) = uVar3;
      *(undefined8 *)(lVar2 + -0x14) = 0;
      *(undefined8 *)(lVar2 + -0x1c) = 0;
      *(undefined8 *)(lVar2 + -0x24) = 0;
      *(undefined8 *)(param_3 + -0xc) = *(undefined8 *)(lVar2 + -0xc);
      *(undefined2 *)(param_3 + -4) = *(undefined2 *)(lVar2 + -4);
      func_0x00010a3518a0(param_3,lVar2);
      lVar1 = lVar2 + 0x44;
      lVar2 = lVar2 + 0x68;
      param_3 = param_3 + 0x68;
    } while (lVar1 != param_2);
    do {
      FUN_10a7a3158(param_1);
      param_1 = param_1 + 0x68;
    } while (param_1 != param_2);
  }
  return;
}



/* Entry: 10a7a3158; end: 10a7a31fb;  */

void FUN_10a7a3158(undefined8 *param_1)

{
  code *pcVar1;
  
  if (0x10 < (ulong)*(byte *)((long)param_1 + 100)) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10a7a31b0);
    (*pcVar1)();
  }
  (*(code *)(&PTR_FUN_110ba1f88)[*(byte *)((long)param_1 + 100)])((long)param_1 + 0x24);
  if (-1 < *(char *)((long)param_1 + 0x17)) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(*param_1);
  return;
}



/* Entry: 10a7a31fc; end: 10a7a32d7;  */

void FUN_10a7a31fc(long *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar3 = *param_1;
  if (lVar3 != 0) {
    lVar2 = param_1[1];
    lVar1 = lVar3;
    if (lVar2 != lVar3) {
      do {
        lVar2 = lVar2 + -0x68;
        FUN_10a7a3158(lVar2);
      } while (lVar2 != lVar3);
      lVar1 = *param_1;
    }
    param_1[1] = lVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(lVar1);
    return;
  }
  return;
}



/* Entry: 10a7a32d8; end: 10a7a32eb;  */

void FUN_10a7a32d8(void)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  
  plVar1 = (long *)&UNK_10f676ba7;
  FUN_109ffde64();
  if ((ulong)plVar1 >> 0x3d == 0) {
    __Znwm((long)plVar1 << 3);
    return;
  }
  func_0x000109ffded8();
  plVar4 = (long *)*plVar1;
  lVar5 = *plVar4;
  if (lVar5 != 0) {
    lVar3 = plVar4[1];
    lVar2 = lVar5;
    if (lVar3 != lVar5) {
      do {
        lVar3 = lVar3 + -0x58;
        FUN_10a7a3390(lVar3);
      } while (lVar3 != lVar5);
      lVar2 = *(long *)*plVar1;
    }
    plVar4[1] = lVar5;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(lVar2);
    return;
  }
  return;
}



/* Entry: 10a7a32ec; end: 10a7a331f;  */

void FUN_10a7a32ec(long *param_1)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  
  if ((ulong)param_1 >> 0x3d == 0) {
    __Znwm((long)param_1 << 3);
    return;
  }
  func_0x000109ffded8();
  plVar3 = (long *)*param_1;
  lVar4 = *plVar3;
  if (lVar4 != 0) {
    lVar2 = plVar3[1];
    lVar1 = lVar4;
    if (lVar2 != lVar4) {
      do {
        lVar2 = lVar2 + -0x58;
        FUN_10a7a3390(lVar2);
      } while (lVar2 != lVar4);
      lVar1 = *(long *)*param_1;
    }
    plVar3[1] = lVar4;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(lVar1);
    return;
  }
  return;
}



/* Entry: 10a7a3320; end: 10a7a338f;  */

void FUN_10a7a3320(long *param_1)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  
  plVar3 = (long *)*param_1;
  lVar4 = *plVar3;
  if (lVar4 != 0) {
    lVar2 = plVar3[1];
    lVar1 = lVar4;
    if (lVar2 != lVar4) {
      do {
        lVar2 = lVar2 + -0x58;
        FUN_10a7a3390(lVar2);
      } while (lVar2 != lVar4);
      lVar1 = *(long *)*param_1;
    }
    plVar3[1] = lVar4;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(lVar1);
    return;
  }
  return;
}



/* Entry: 10a7a3390; end: 10a7a33db;  */

void FUN_10a7a3390(undefined8 *param_1)

{
  func_0x00010a7ad50c(param_1 + 8);
  if (*(char *)((long)param_1 + 0x37) < '\0') {
    __ZdlPv(param_1[4]);
  }
  if (-1 < *(char *)((long)param_1 + 0x17)) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(*param_1);
  return;
}



/* Entry: 10a7a33dc; end: 10a7a35b3;  */

void FUN_10a7a33dc(uint *param_1,ulong param_2,int param_3,uint *param_4)

{
  uint uVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  uVar2 = (ulong)(param_3 - 1U);
  if (0x25 < param_3 - 1U) {
    return;
  }
  if ((0x3e402007e7U >> (uVar2 & 0x3f) & 1) == 0) {
    return;
  }
  if (param_2 < *(ulong *)(&UNK_10e4db2a0 + (uVar2 & 0xffff) * 8)) {
    return;
  }
  switch(uVar2) {
  case 0:
    if ((byte)param_4[0x10] != 2) {
      return;
    }
    uVar1 = (uint)(byte)*param_4;
    goto code_r0x00010a7a3554;
  case 1:
    if ((byte)param_4[0x10] != 1) {
      return;
    }
    goto code_r0x00010a7a3550;
  case 2:
    if ((byte)param_4[0x10] == 0) {
      *param_1 = *param_4;
      return;
    }
    break;
  case 5:
    if ((byte)param_4[0x10] != 9) {
      return;
    }
code_r0x00010a7a3550:
    uVar1 = *param_4;
code_r0x00010a7a3554:
    *param_1 = uVar1;
    return;
  case 6:
    if ((byte)param_4[0x10] != 3) {
      return;
    }
    goto code_r0x00010a7a3568;
  case 7:
    if ((byte)param_4[0x10] != 4) {
      return;
    }
    goto code_r0x00010a7a351c;
  case 8:
    if ((byte)param_4[0x10] == 5) {
code_r0x00010a7a3538:
      uVar3 = *(undefined8 *)param_4;
      *(undefined8 *)(param_1 + 2) = *(undefined8 *)(param_4 + 2);
      *(undefined8 *)param_1 = uVar3;
      return;
    }
    break;
  case 9:
    if ((byte)param_4[0x10] == 7) {
      uVar3 = *(undefined8 *)param_4;
      param_1[2] = param_4[2];
      *(undefined8 *)param_1 = uVar3;
      uVar3 = *(undefined8 *)(param_4 + 3);
      param_1[6] = param_4[5];
      *(undefined8 *)(param_1 + 4) = uVar3;
      uVar3 = *(undefined8 *)(param_4 + 6);
      param_1[10] = param_4[8];
      *(undefined8 *)(param_1 + 8) = uVar3;
      return;
    }
    break;
  case 10:
    if ((byte)param_4[0x10] == 8) {
      uVar4 = *(undefined8 *)(param_4 + 2);
      uVar3 = *(undefined8 *)param_4;
      uVar6 = *(undefined8 *)(param_4 + 6);
      uVar5 = *(undefined8 *)(param_4 + 4);
      uVar7 = *(undefined8 *)(param_4 + 8);
      uVar9 = *(undefined8 *)(param_4 + 0xe);
      uVar8 = *(undefined8 *)(param_4 + 0xc);
      *(undefined8 *)(param_1 + 10) = *(undefined8 *)(param_4 + 10);
      *(undefined8 *)(param_1 + 8) = uVar7;
      *(undefined8 *)(param_1 + 0xe) = uVar9;
      *(undefined8 *)(param_1 + 0xc) = uVar8;
      *(undefined8 *)(param_1 + 2) = uVar4;
      *(undefined8 *)param_1 = uVar3;
      *(undefined8 *)(param_1 + 6) = uVar6;
      *(undefined8 *)(param_1 + 4) = uVar5;
      return;
    }
    break;
  case 0x15:
    if ((byte)param_4[0x10] == 6) {
      *(undefined8 *)param_1 = *(undefined8 *)param_4;
      *(undefined8 *)(param_1 + 4) = *(undefined8 *)(param_4 + 2);
      return;
    }
    break;
  case 0x1e:
    if ((byte)param_4[0x10] != 10) {
      return;
    }
    goto code_r0x00010a7a3568;
  case 0x21:
    if ((byte)param_4[0x10] != 0xb) {
      return;
    }
    goto code_r0x00010a7a351c;
  case 0x22:
    if ((byte)param_4[0x10] == 0xc) goto code_r0x00010a7a3538;
    break;
  case 0x23:
    if ((byte)param_4[0x10] != 0xd) {
      return;
    }
code_r0x00010a7a3568:
    uVar3 = *(undefined8 *)param_4;
code_r0x00010a7a356c:
    *(undefined8 *)param_1 = uVar3;
    return;
  case 0x24:
    if ((byte)param_4[0x10] != 0xe) {
      return;
    }
code_r0x00010a7a351c:
    uVar3 = *(undefined8 *)param_4;
    param_1[2] = param_4[2];
    goto code_r0x00010a7a356c;
  case 0x25:
    if ((byte)param_4[0x10] == 0xf) goto code_r0x00010a7a3538;
  }
  return;
}



/* Entry: 10a7a35b4; end: 10a7a368f;  */

long FUN_10a7a35b4(long param_1,long param_2)

{
  code *pcVar1;
  
  if (param_1 != param_2) {
    if (0x10 < (ulong)*(byte *)(param_1 + 0x40)) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10a7a3610);
      (*pcVar1)();
    }
    (*(code *)(&PTR_FUN_110ba1f88)[*(byte *)(param_1 + 0x40)])(param_1);
    func_0x00010a3518a0(param_1,param_2);
  }
  return param_1;
}



/* Entry: 10a7a3690; end: 10a7a37df;  */

undefined1  [16]
FUN_10a7a3690(undefined8 *param_1,long *param_2,undefined8 *param_3,undefined8 *param_4)

{
  long lVar1;
  long lVar2;
  undefined8 ****ppppuVar3;
  undefined8 *puVar4;
  undefined8 ****ppppuVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined *puStack_100;
  undefined8 **ppuStack_f8;
  undefined8 **ppuStack_f0;
  undefined1 uStack_e8;
  undefined8 *puStack_e0;
  undefined8 *puStack_d8;
  undefined8 *puStack_d0;
  ulong uStack_c8;
  undefined1 **ppuStack_c0;
  undefined8 uStack_b8;
  undefined8 *puStack_b0;
  ulong uStack_a8;
  undefined1 *puStack_a0;
  code *pcStack_98;
  undefined1 *puStack_90;
  code *pcStack_88;
  undefined8 ***pppuStack_78;
  ulong uStack_70;
  undefined8 uStack_68;
  undefined8 ***pppuStack_60;
  ulong uStack_58;
  ulong uStack_50;
  ulong uStack_48;
  
  puVar4 = param_1;
  puVar8 = param_4;
  puVar9 = param_4;
  FUN_10a159054();
  if ((int)puVar4 != 0) {
    uVar10 = param_1[1];
    if (uVar10 - (long)param_4 <= uVar10) {
      uVar10 = uVar10 - (long)param_4;
    }
    lVar12 = *param_2;
    if (lVar12 != 0) {
      if (0x7ffffffffffffff7 < uVar10) {
        func_0x000109ffde50();
        pcStack_88 = FUN_10a7a37e0;
        puVar6 = &UNK_10f676ba7;
        puStack_90 = &stack0xfffffffffffffff0;
        FUN_109ffde64();
        pcStack_98 = FUN_10a7a37f4;
        ppuStack_c0 = &puStack_a0;
        puStack_b0 = param_1;
        uStack_a8 = uVar10;
        if (puVar6 < (undefined *)0x666666666666667) {
          lVar12 = (long)puVar6 * 0x28;
          puStack_a0 = (undefined1 *)&puStack_90;
          __Znwm(lVar12);
          auVar16._8_8_ = puVar6;
          auVar16._0_8_ = lVar12;
          return auVar16;
        }
        puStack_a0 = (undefined1 *)&puStack_90;
        func_0x000109ffded8();
        ppuVar7 = &puStack_100;
        uStack_b8 = 0x10a7a3838;
        ppuStack_f8 = &puStack_e0;
        ppuStack_f0 = &puStack_d8;
        puStack_d8 = puVar9;
        puVar4 = param_3;
        puStack_100 = puVar6;
        puStack_e0 = puVar9;
        puStack_d0 = param_1;
        uStack_c8 = uVar10;
        if (param_3 == puVar8) {
          uStack_e8 = 1;
        }
        else {
          do {
            uVar14 = puVar4[1];
            uVar13 = *puVar4;
            puStack_d8[2] = puVar4[2];
            puStack_d8[1] = uVar14;
            *puStack_d8 = uVar13;
            puVar4[1] = 0;
            puVar4[2] = 0;
            *puVar4 = 0;
            puStack_d8[3] = puVar4[3];
            *(undefined4 *)(puStack_d8 + 4) = *(undefined4 *)(puVar4 + 4);
            puVar4 = puVar4 + 5;
            puStack_d8 = puStack_d8 + 5;
          } while (puVar4 != puVar8);
          uStack_e8 = 1;
          puVar4 = param_3;
          do {
            if (*(char *)((long)puVar4 + 0x17) < '\0') {
              __ZdlPv(*puVar4);
            }
            puVar4 = puVar4 + 5;
          } while (puVar4 != puVar8);
        }
        FUN_10a7a38f8(&puStack_100);
        auVar17._8_8_ = param_3;
        auVar17._0_8_ = ppuVar7;
        return auVar17;
      }
      param_1 = (undefined8 *)*param_1;
      if (uVar10 < 0x17) {
        uStack_68 = CONCAT17((char)uVar10,(undefined7)uStack_68);
        ppppuVar5 = &pppuStack_78;
        if (uVar10 != 0) goto LAB_10a7a3734;
      }
      else {
        ppppuVar3 = (undefined8 ****)0x19;
        if ((uVar10 | 7) != 0x17) {
          ppppuVar3 = (undefined8 ****)((uVar10 | 7) + 1);
        }
        ppppuVar5 = ppppuVar3;
        __Znwm();
        uStack_68 = (ulong)ppppuVar3 | 0x8000000000000000;
        pppuStack_78 = ppppuVar5;
        uStack_70 = uVar10;
LAB_10a7a3734:
        _memmove(ppppuVar5,param_1,uVar10);
        param_3 = param_1;
      }
      *(undefined1 *)((long)ppppuVar5 + uVar10) = 0;
      uStack_58 = uStack_70;
      pppuStack_60 = pppuStack_78;
      uStack_50 = uStack_68;
      uStack_48 = 0;
      func_0x000107c2b080(&pppuStack_60);
      lVar1 = lVar12 + 0x1f0;
      lVar11 = *(long *)(lVar12 + 0x1f0);
      lVar12 = lVar1;
      if (lVar11 == 0) {
LAB_10a7a37a4:
        lVar12 = lVar1;
      }
      else {
        do {
          lVar2 = 8;
          if (uStack_48 <= *(ulong *)(lVar11 + 0x38)) {
            lVar2 = 0;
            lVar12 = lVar11;
          }
          lVar11 = *(long *)(lVar11 + lVar2);
        } while (lVar11 != 0);
        if ((lVar12 == lVar1) || (uStack_48 < *(ulong *)(lVar12 + 0x38))) goto LAB_10a7a37a4;
      }
      uVar10 = (ulong)(lVar12 != lVar1);
      if ((long)uStack_50 < 0) {
        __ZdlPv(pppuStack_60);
      }
      goto LAB_10a7a37c0;
    }
  }
  uVar10 = 0;
LAB_10a7a37c0:
  auVar15._8_8_ = param_3;
  auVar15._0_8_ = uVar10;
  return auVar15;
}



/* Entry: 10a7a37e0; end: 10a7a37f3;  */

void FUN_10a7a37e0(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  undefined *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puStack_80;
  undefined8 **ppuStack_78;
  undefined8 **ppuStack_70;
  undefined1 uStack_68;
  undefined8 *puStack_60;
  undefined8 *puStack_58;
  
  puVar1 = &UNK_10f676ba7;
  FUN_109ffde64();
  if ((undefined *)0x666666666666666 < puVar1) {
    func_0x000109ffded8();
    ppuStack_78 = &puStack_60;
    ppuStack_70 = &puStack_58;
    puStack_58 = param_4;
    puVar2 = param_2;
    puStack_80 = puVar1;
    puStack_60 = param_4;
    if (param_2 == param_3) {
      uStack_68 = 1;
    }
    else {
      do {
        uVar4 = puVar2[1];
        uVar3 = *puVar2;
        puStack_58[2] = puVar2[2];
        puStack_58[1] = uVar4;
        *puStack_58 = uVar3;
        puVar2[1] = 0;
        puVar2[2] = 0;
        *puVar2 = 0;
        puStack_58[3] = puVar2[3];
        *(undefined4 *)(puStack_58 + 4) = *(undefined4 *)(puVar2 + 4);
        puVar2 = puVar2 + 5;
        puStack_58 = puStack_58 + 5;
      } while (puVar2 != param_3);
      uStack_68 = 1;
      do {
        if (*(char *)((long)param_2 + 0x17) < '\0') {
          __ZdlPv(*param_2);
        }
        param_2 = param_2 + 5;
      } while (param_2 != param_3);
    }
    FUN_10a7a38f8(&puStack_80);
    return;
  }
  __Znwm((long)puVar1 * 0x28);
  return;
}



/* Entry: 10a7a37f4; end: 10a7a38f7;  */

void FUN_10a7a37f4(ulong param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  ulong uStack_70;
  undefined8 **ppuStack_68;
  undefined8 **ppuStack_60;
  undefined1 uStack_58;
  undefined8 *puStack_50;
  undefined8 *puStack_48;
  
  if (0x666666666666666 < param_1) {
    func_0x000109ffded8();
    ppuStack_68 = &puStack_50;
    ppuStack_60 = &puStack_48;
    puStack_48 = param_4;
    puVar1 = param_2;
    uStack_70 = param_1;
    puStack_50 = param_4;
    if (param_2 == param_3) {
      uStack_58 = 1;
    }
    else {
      do {
        uVar3 = puVar1[1];
        uVar2 = *puVar1;
        puStack_48[2] = puVar1[2];
        puStack_48[1] = uVar3;
        *puStack_48 = uVar2;
        puVar1[1] = 0;
        puVar1[2] = 0;
        *puVar1 = 0;
        puStack_48[3] = puVar1[3];
        *(undefined4 *)(puStack_48 + 4) = *(undefined4 *)(puVar1 + 4);
        puVar1 = puVar1 + 5;
        puStack_48 = puStack_48 + 5;
      } while (puVar1 != param_3);
      uStack_58 = 1;
      do {
        if (*(char *)((long)param_2 + 0x17) < '\0') {
          __ZdlPv(*param_2);
        }
        param_2 = param_2 + 5;
      } while (param_2 != param_3);
    }
    FUN_10a7a38f8(&uStack_70);
    return;
  }
  __Znwm(param_1 * 0x28);
  return;
}



/* Entry: 10a7a38f8; end: 10a7a3953;  */

/* WARNING: Removing unreachable block (ram,0x00010a7a3948) */

long FUN_10a7a38f8(long param_1)

{
  long lVar1;
  
  if ((*(byte *)(param_1 + 0x18) & 1) == 0) {
    for (lVar1 = **(long **)(param_1 + 0x10); lVar1 != **(long **)(param_1 + 8);
        lVar1 = lVar1 + -0x28) {
    }
  }
  return param_1;
}



/* Entry: 10a7a3954; end: 10a7a39b3;  */

/* WARNING: Removing unreachable block (ram,0x00010a7a3980) */

long * FUN_10a7a3954(long *param_1)

{
  long lVar1;
  
  lVar1 = param_1[2];
  while (lVar1 != param_1[1]) {
    lVar1 = lVar1 + -0x28;
    param_1[2] = lVar1;
  }
  if (*param_1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 10a7a39b4; end: 10a7a3ad3;  */

long * FUN_10a7a39b4(ulong *param_1,ulong *param_2,undefined4 *param_3)

{
  ulong *puVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  ulong uStack_58;
  ulong uStack_50;
  ulong uStack_48;
  ulong uStack_40;
  ulong *puStack_38;
  
  lVar5 = param_1[1] - *param_1;
  uVar3 = (lVar5 >> 3) * -0x3333333333333333 + 1;
  if (uVar3 < 0x666666666666667) {
    lVar2 = (long)(param_1[2] - *param_1) >> 3;
    uVar4 = lVar2 * -0x6666666666666666;
    if (uVar4 < uVar3 || uVar4 - uVar3 == 0) {
      uVar4 = uVar3;
    }
    if (0x333333333333332 < (ulong)(lVar2 * -0x3333333333333333)) {
      uVar4 = 0x666666666666666;
    }
    puStack_38 = param_1;
    if (uVar4 == 0) {
      uVar4 = 0;
      puVar1 = (ulong *)0x0;
    }
    else {
      puVar1 = param_2;
      FUN_10a7a37f4();
    }
    lVar5 = uVar4 + lVar5;
    uVar6 = uVar4 + (long)puVar1 * 0x28;
    uStack_58 = uVar4;
    uStack_50 = lVar5;
    uStack_48 = lVar5;
    uStack_40 = uVar6;
    FUN_10a7a3ad4(lVar5,param_2,param_3);
    uVar3 = lVar5 + (*param_1 - param_1[1]);
    func_0x00010a7a3838(param_1,*param_1,param_1[1],uVar3);
    uStack_58 = *param_1;
    *param_1 = uVar3;
    param_1[1] = (ulong)(lVar5 + 0x28);
    uStack_40 = param_1[2];
    param_1[2] = uVar6;
    uStack_50 = uStack_58;
    uStack_48 = uStack_58;
    FUN_10a7a3954(&uStack_58);
    return (long *)(lVar5 + 0x28);
  }
  FUN_10a7a37e0();
  FUN_10a7a3954(&uStack_58);
  __Unwind_Resume();
  if (*(char *)((long)param_2 + 0x17) < '\0') {
    func_0x000107c3192c(param_1,*param_2,param_2[1]);
  }
  else {
    uVar4 = param_2[1];
    uVar3 = *param_2;
    param_1[2] = param_2[2];
    param_1[1] = uVar4;
    *param_1 = uVar3;
  }
  param_1[3] = param_2[3];
  *(undefined4 *)(param_1 + 4) = *param_3;
  return (long *)param_1;
}



/* Entry: 10a7a3ad4; end: 10a7a3b3b;  */

undefined8 * FUN_10a7a3ad4(undefined8 *param_1,undefined8 *param_2,undefined4 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  if (*(char *)((long)param_2 + 0x17) < '\0') {
    func_0x000107c3192c(param_1,*param_2,param_2[1]);
  }
  else {
    uVar2 = param_2[1];
    uVar1 = *param_2;
    param_1[2] = param_2[2];
    param_1[1] = uVar2;
    *param_1 = uVar1;
  }
  param_1[3] = param_2[3];
  *(undefined4 *)(param_1 + 4) = *param_3;
  return param_1;
}



/* Entry: 10a7a3b3c; end: 10a7a3bb3;  */

void FUN_10a7a3b3c(long param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  puVar1 = *(undefined8 **)(param_1 + 8);
  if (*(char *)((long)param_2 + 0x17) < '\0') {
    func_0x000107c3192c(puVar1,*param_2,param_2[1]);
  }
  else {
    uVar3 = param_2[1];
    uVar2 = *param_2;
    puVar1[2] = param_2[2];
    puVar1[1] = uVar3;
    *puVar1 = uVar2;
  }
  puVar1[3] = param_2[3];
  uVar2 = *param_3;
  puVar1[5] = param_3[1];
  puVar1[4] = uVar2;
  *(undefined8 **)(param_1 + 8) = puVar1 + 6;
  return;
}



/* Entry: 10a7a3bb4; end: 10a7a3cff;  */

/* WARNING: Possible PIC construction at 0x00010a7a3ca8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010a7a3cac) */

void FUN_10a7a3bb4(long *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  undefined1 *puVar1;
  long *plVar2;
  undefined8 *puVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 *unaff_x20;
  long lVar7;
  undefined1 **ppuVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined1 auStack_d8 [56];
  undefined1 *puStack_90;
  code *pcStack_88;
  undefined1 **ppuStack_80;
  code *pcStack_78;
  undefined1 auStack_70 [8];
  ulong uStack_68;
  undefined8 *puStack_60;
  undefined8 *puStack_58;
  long lStack_50;
  long *plStack_48;
  
  puVar1 = auStack_70;
  ppuVar8 = (undefined1 **)&stack0xfffffffffffffff0;
  lVar7 = param_1[1] - *param_1;
  uVar5 = (lVar7 >> 4) * -0x5555555555555555 + 1;
  if (uVar5 < 0x555555555555556) {
    lVar4 = param_1[2] - *param_1 >> 4;
    uVar6 = lVar4 * 0x5555555555555556;
    if (uVar6 < uVar5 || uVar6 - uVar5 == 0) {
      uVar6 = uVar5;
    }
    if (0x2aaaaaaaaaaaaa9 < (ulong)(lVar4 * -0x5555555555555555)) {
      uVar6 = 0x555555555555555;
    }
    plStack_48 = param_1;
    if (uVar6 == 0) {
      puVar3 = (undefined8 *)0x0;
    }
    else {
      puVar3 = param_2;
      FUN_10a7a3d14();
    }
    param_4 = (undefined8 *)(uVar6 + lVar7);
    lStack_50 = uVar6 + (long)puVar3 * 0x30;
    uStack_68 = uVar6;
    puStack_60 = param_4;
    puStack_58 = param_4;
    if (*(char *)((long)param_2 + 0x17) < '\0') {
      func_0x000107c3192c(param_4,*param_2,param_2[1]);
    }
    else {
      uVar10 = param_2[1];
      uVar9 = *param_2;
      param_4[2] = param_2[2];
      param_4[1] = uVar10;
      *param_4 = uVar9;
    }
    param_4[3] = param_2[3];
    uVar9 = *param_3;
    param_4[5] = param_3[1];
    param_4[4] = uVar9;
    unaff_x20 = param_4 + 6;
    param_2 = (undefined8 *)*param_1;
    param_3 = (undefined8 *)param_1[1];
    param_4 = (undefined8 *)((long)param_4 + ((long)param_2 - (long)param_3));
    uVar9 = 0x10a7a3cac;
    plVar2 = param_1;
  }
  else {
    FUN_10a7a3d00();
    FUN_10a7a3e74(&uStack_68);
    __Unwind_Resume(param_1);
    pcStack_78 = FUN_10a7a3d00;
    plVar2 = (long *)&UNK_10f676ba7;
    ppuStack_80 = ppuVar8;
    FUN_109ffde64();
    puVar1 = &stack0xffffffffffffff60;
    pcStack_88 = FUN_10a7a3d14;
    ppuVar8 = &puStack_90;
    if (plVar2 < (long *)0x555555555555556) {
      puStack_90 = (undefined1 *)&ppuStack_80;
      __Znwm((long)plVar2 * 0x30);
      return;
    }
    uVar9 = 0x10a7a3d58;
    puStack_90 = (undefined1 *)&ppuStack_80;
    func_0x000109ffded8();
  }
  *(undefined8 **)(puVar1 + -0x20) = unaff_x20;
  *(long **)(puVar1 + -0x18) = param_1;
  *(undefined1 ***)(puVar1 + -0x10) = ppuVar8;
  *(undefined8 *)(puVar1 + -8) = uVar9;
  *(undefined8 **)(puVar1 + -0x28) = param_4;
  *(undefined8 **)(puVar1 + -0x30) = param_4;
  *(long **)(puVar1 + -0x50) = plVar2;
  *(undefined1 **)(puVar1 + -0x48) = puVar1 + -0x30;
  *(undefined1 **)(puVar1 + -0x40) = puVar1 + -0x28;
  puVar3 = param_2;
  if (param_2 == param_3) {
    puVar1[-0x38] = 1;
  }
  else {
    do {
      uVar10 = puVar3[1];
      uVar9 = *puVar3;
      param_4[2] = puVar3[2];
      param_4[1] = uVar10;
      *param_4 = uVar9;
      puVar3[1] = 0;
      puVar3[2] = 0;
      *puVar3 = 0;
      param_4[3] = puVar3[3];
      uVar9 = puVar3[4];
      param_4[5] = puVar3[5];
      param_4[4] = uVar9;
      puVar3 = puVar3 + 6;
      param_4 = param_4 + 6;
    } while (puVar3 != param_3);
    *(undefined8 **)(puVar1 + -0x28) = param_4;
    puVar1[-0x38] = 1;
    do {
      if (*(char *)((long)param_2 + 0x17) < '\0') {
        __ZdlPv(*param_2);
      }
      param_2 = param_2 + 6;
    } while (param_2 != param_3);
  }
  FUN_10a7a3e18(puVar1 + -0x50);
  return;
}



/* Entry: 10a7a3d00; end: 10a7a3d13;  */

void FUN_10a7a3d00(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  undefined *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puStack_80;
  undefined8 **ppuStack_78;
  undefined8 **ppuStack_70;
  undefined1 uStack_68;
  undefined8 *puStack_60;
  undefined8 *puStack_58;
  
  puVar1 = &UNK_10f676ba7;
  FUN_109ffde64();
  if ((undefined *)0x555555555555555 < puVar1) {
    func_0x000109ffded8();
    ppuStack_78 = &puStack_60;
    ppuStack_70 = &puStack_58;
    puStack_58 = param_4;
    puVar2 = param_2;
    puStack_80 = puVar1;
    puStack_60 = param_4;
    if (param_2 == param_3) {
      uStack_68 = 1;
    }
    else {
      do {
        uVar4 = puVar2[1];
        uVar3 = *puVar2;
        puStack_58[2] = puVar2[2];
        puStack_58[1] = uVar4;
        *puStack_58 = uVar3;
        puVar2[1] = 0;
        puVar2[2] = 0;
        *puVar2 = 0;
        puStack_58[3] = puVar2[3];
        uVar3 = puVar2[4];
        puStack_58[5] = puVar2[5];
        puStack_58[4] = uVar3;
        puVar2 = puVar2 + 6;
        puStack_58 = puStack_58 + 6;
      } while (puVar2 != param_3);
      uStack_68 = 1;
      do {
        if (*(char *)((long)param_2 + 0x17) < '\0') {
          __ZdlPv(*param_2);
        }
        param_2 = param_2 + 6;
      } while (param_2 != param_3);
    }
    FUN_10a7a3e18(&puStack_80);
    return;
  }
  __Znwm((long)puVar1 * 0x30);
  return;
}



/* Entry: 10a7a3d14; end: 10a7a3e17;  */

void FUN_10a7a3d14(ulong param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  ulong uStack_70;
  undefined8 **ppuStack_68;
  undefined8 **ppuStack_60;
  undefined1 uStack_58;
  undefined8 *puStack_50;
  undefined8 *puStack_48;
  
  if (0x555555555555555 < param_1) {
    func_0x000109ffded8();
    ppuStack_68 = &puStack_50;
    ppuStack_60 = &puStack_48;
    puStack_48 = param_4;
    puVar1 = param_2;
    uStack_70 = param_1;
    puStack_50 = param_4;
    if (param_2 == param_3) {
      uStack_58 = 1;
    }
    else {
      do {
        uVar3 = puVar1[1];
        uVar2 = *puVar1;
        puStack_48[2] = puVar1[2];
        puStack_48[1] = uVar3;
        *puStack_48 = uVar2;
        puVar1[1] = 0;
        puVar1[2] = 0;
        *puVar1 = 0;
        puStack_48[3] = puVar1[3];
        uVar2 = puVar1[4];
        puStack_48[5] = puVar1[5];
        puStack_48[4] = uVar2;
        puVar1 = puVar1 + 6;
        puStack_48 = puStack_48 + 6;
      } while (puVar1 != param_3);
      uStack_58 = 1;
      do {
        if (*(char *)((long)param_2 + 0x17) < '\0') {
          __ZdlPv(*param_2);
        }
        param_2 = param_2 + 6;
      } while (param_2 != param_3);
    }
    FUN_10a7a3e18(&uStack_70);
    return;
  }
  __Znwm(param_1 * 0x30);
  return;
}



/* Entry: 10a7a3e18; end: 10a7a3e73;  */

/* WARNING: Removing unreachable block (ram,0x00010a7a3e68) */

long FUN_10a7a3e18(long param_1)

{
  long lVar1;
  
  if ((*(byte *)(param_1 + 0x18) & 1) == 0) {
    for (lVar1 = **(long **)(param_1 + 0x10); lVar1 != **(long **)(param_1 + 8);
        lVar1 = lVar1 + -0x30) {
    }
  }
  return param_1;
}



/* Entry: 10a7a3e74; end: 10a7a3f03;  */

/* WARNING: Removing unreachable block (ram,0x00010a7a3ea0) */

long * FUN_10a7a3e74(long *param_1)

{
  long lVar1;
  
  lVar1 = param_1[2];
  while (lVar1 != param_1[1]) {
    lVar1 = lVar1 + -0x30;
    param_1[2] = lVar1;
  }
  if (*param_1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 10a7a3f04; end: 10a7a3f4f;  */

/* WARNING: Removing unreachable block (ram,0x00010a7a3f30) */

void FUN_10a7a3f04(long *param_1)

{
  long lVar1;
  
  for (lVar1 = param_1[1]; lVar1 != *param_1; lVar1 = lVar1 + -0x30) {
  }
  param_1[1] = *param_1;
  return;
}



/* Entry: 10a7a3f50; end: 10a7a3f7f;  */

void FUN_10a7a3f50(long *param_1)

{
  if (*param_1 != 0) {
    FUN_10a7a3f80();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(*param_1);
    return;
  }
  return;
}



/* Entry: 10a7a3f80; end: 10a7a3fcb;  */

/* WARNING: Removing unreachable block (ram,0x00010a7a3fac) */

void FUN_10a7a3f80(long *param_1)

{
  long lVar1;
  
  for (lVar1 = param_1[1]; lVar1 != *param_1; lVar1 = lVar1 + -0x28) {
  }
  param_1[1] = *param_1;
  return;
}



/* Entry: 10a7a3fcc; end: 10a7a3fdf;  */

/* WARNING: Removing unreachable block (ram,0x00010a7a400c) */

long * FUN_10a7a3fcc(void)

{
  long *plVar1;
  long lVar2;
  
  plVar1 = (long *)&UNK_10f676ba7;
  FUN_109ffde64();
  lVar2 = plVar1[2];
  while (lVar2 != plVar1[1]) {
    lVar2 = lVar2 + -0x28;
    plVar1[2] = lVar2;
  }
  if (*plVar1 != 0) {
    __ZdlPv();
  }
  return plVar1;
}



/* Entry: 10a7a3fe0; end: 10a7a403f;  */

/* WARNING: Removing unreachable block (ram,0x00010a7a400c) */

long * FUN_10a7a3fe0(long *param_1)

{
  long lVar1;
  
  lVar1 = param_1[2];
  while (lVar1 != param_1[1]) {
    lVar1 = lVar1 + -0x28;
    param_1[2] = lVar1;
  }
  if (*param_1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 10a7a4040; end: 10a7a40af;  */

/* WARNING: Removing unreachable block (ram,0x00010a7a4078) */

void FUN_10a7a4040(long *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar2 = *param_1;
  if (lVar2 == 0) {
    return;
  }
  lVar3 = param_1[1];
  lVar1 = lVar2;
  if (lVar3 != lVar2) {
    do {
      lVar3 = lVar3 + -0x28;
    } while (lVar3 != lVar2);
    lVar1 = *param_1;
  }
  param_1[1] = lVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(lVar1);
  return;
}



/* Entry: 10a7a40b0; end: 10a7a40c3;  */

void FUN_10a7a40b0(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  undefined *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puStack_80;
  undefined8 **ppuStack_78;
  undefined8 **ppuStack_70;
  undefined1 uStack_68;
  undefined8 *puStack_60;
  undefined8 *puStack_58;
  
  puVar1 = &UNK_10f676ba7;
  FUN_109ffde64();
  if ((undefined *)0x555555555555555 < puVar1) {
    func_0x000109ffded8();
    ppuStack_78 = &puStack_60;
    ppuStack_70 = &puStack_58;
    puStack_58 = param_4;
    puVar2 = param_2;
    puStack_80 = puVar1;
    puStack_60 = param_4;
    if (param_2 == param_3) {
      uStack_68 = 1;
    }
    else {
      do {
        uVar4 = puVar2[1];
        uVar3 = *puVar2;
        puStack_58[2] = puVar2[2];
        puStack_58[1] = uVar4;
        *puStack_58 = uVar3;
        puVar2[1] = 0;
        puVar2[2] = 0;
        *puVar2 = 0;
        puStack_58[3] = puVar2[3];
        uVar3 = puVar2[4];
        *(undefined4 *)(puStack_58 + 5) = *(undefined4 *)(puVar2 + 5);
        puStack_58[4] = uVar3;
        puVar2 = puVar2 + 6;
        puStack_58 = puStack_58 + 6;
      } while (puVar2 != param_3);
      uStack_68 = 1;
      do {
        if (*(char *)((long)param_2 + 0x17) < '\0') {
          __ZdlPv(*param_2);
        }
        param_2 = param_2 + 6;
      } while (param_2 != param_3);
    }
    FUN_10a7a41d0(&puStack_80);
    return;
  }
  __Znwm((long)puVar1 * 0x30);
  return;
}



/* Entry: 10a7a40c4; end: 10a7a41cf;  */

void FUN_10a7a40c4(ulong param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  ulong uStack_70;
  undefined8 **ppuStack_68;
  undefined8 **ppuStack_60;
  undefined1 uStack_58;
  undefined8 *puStack_50;
  undefined8 *puStack_48;
  
  if (0x555555555555555 < param_1) {
    func_0x000109ffded8();
    ppuStack_68 = &puStack_50;
    ppuStack_60 = &puStack_48;
    puStack_48 = param_4;
    puVar1 = param_2;
    uStack_70 = param_1;
    puStack_50 = param_4;
    if (param_2 == param_3) {
      uStack_58 = 1;
    }
    else {
      do {
        uVar3 = puVar1[1];
        uVar2 = *puVar1;
        puStack_48[2] = puVar1[2];
        puStack_48[1] = uVar3;
        *puStack_48 = uVar2;
        puVar1[1] = 0;
        puVar1[2] = 0;
        *puVar1 = 0;
        puStack_48[3] = puVar1[3];
        uVar2 = puVar1[4];
        *(undefined4 *)(puStack_48 + 5) = *(undefined4 *)(puVar1 + 5);
        puStack_48[4] = uVar2;
        puVar1 = puVar1 + 6;
        puStack_48 = puStack_48 + 6;
      } while (puVar1 != param_3);
      uStack_58 = 1;
      do {
        if (*(char *)((long)param_2 + 0x17) < '\0') {
          __ZdlPv(*param_2);
        }
        param_2 = param_2 + 6;
      } while (param_2 != param_3);
    }
    FUN_10a7a41d0(&uStack_70);
    return;
  }
  __Znwm(param_1 * 0x30);
  return;
}



/* Entry: 10a7a41d0; end: 10a7a422b;  */

/* WARNING: Removing unreachable block (ram,0x00010a7a4220) */

long FUN_10a7a41d0(long param_1)

{
  long lVar1;
  
  if ((*(byte *)(param_1 + 0x18) & 1) == 0) {
    for (lVar1 = **(long **)(param_1 + 0x10); lVar1 != **(long **)(param_1 + 8);
        lVar1 = lVar1 + -0x30) {
    }
  }
  return param_1;
}



/* Entry: 10a7a422c; end: 10a7a428b;  */

/* WARNING: Removing unreachable block (ram,0x00010a7a4258) */

long * FUN_10a7a422c(long *param_1)

{
  long lVar1;
  
  lVar1 = param_1[2];
  while (lVar1 != param_1[1]) {
    lVar1 = lVar1 + -0x30;
    param_1[2] = lVar1;
  }
  if (*param_1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 10a7a428c; end: 10a7a429f;  */

void FUN_10a7a428c(void)

{
  long *plVar1;
  
  plVar1 = (long *)&UNK_10f676ba7;
  FUN_109ffde64();
  if (*plVar1 != 0) {
    FUN_10a1f4654();
    __ZdlPv(*plVar1);
    *plVar1 = 0;
    plVar1[1] = 0;
    plVar1[2] = 0;
  }
  return;
}



/* Entry: 10a7a42a0; end: 10a7a42d7;  */

void FUN_10a7a42a0(long *param_1)

{
  if (*param_1 != 0) {
    FUN_10a1f4654();
    __ZdlPv(*param_1);
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  return;
}



/* Entry: 10a7a42d8; end: 10a7a42eb;  */

undefined8 * FUN_10a7a42d8(undefined8 param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  ulong uVar2;
  byte bVar3;
  ulong uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  
  puVar5 = (undefined8 *)&UNK_10f676ba7;
  FUN_109ffde64();
  if (puVar5 != param_2) {
    uVar4 = param_3[1];
    puVar1 = (undefined8 *)*param_3;
    if (-1 < (char)*(byte *)((long)param_3 + 0x17)) {
      uVar4 = (ulong)*(byte *)((long)param_3 + 0x17);
      puVar1 = param_3;
    }
    do {
      bVar3 = *(byte *)((long)puVar5 + 0x17);
      uVar2 = puVar5[1];
      if (-1 < (char)bVar3) {
        uVar2 = (ulong)bVar3;
      }
      if (uVar2 == uVar4) {
        puVar6 = (undefined8 *)*puVar5;
        if (-1 < (char)bVar3) {
          puVar6 = puVar5;
        }
        _memcmp(puVar6,puVar1,uVar4);
        if ((int)puVar6 == 0) {
          return puVar5;
        }
      }
      puVar5 = puVar5 + 3;
    } while (puVar5 != param_2);
  }
  return puVar5;
}



/* Entry: 10a7a42ec; end: 10a7a43eb;  */

undefined8 * FUN_10a7a42ec(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  ulong uVar2;
  byte bVar3;
  ulong uVar4;
  undefined8 *puVar5;
  
  if (param_1 != param_2) {
    uVar4 = param_3[1];
    puVar1 = (undefined8 *)*param_3;
    if (-1 < (char)*(byte *)((long)param_3 + 0x17)) {
      uVar4 = (ulong)*(byte *)((long)param_3 + 0x17);
      puVar1 = param_3;
    }
    do {
      bVar3 = *(byte *)((long)param_1 + 0x17);
      uVar2 = param_1[1];
      if (-1 < (char)bVar3) {
        uVar2 = (ulong)bVar3;
      }
      if (uVar2 == uVar4) {
        puVar5 = (undefined8 *)*param_1;
        if (-1 < (char)bVar3) {
          puVar5 = param_1;
        }
        _memcmp(puVar5,puVar1,uVar4);
        if ((int)puVar5 == 0) {
          return param_1;
        }
      }
      param_1 = param_1 + 3;
    } while (param_1 != param_2);
  }
  return param_1;
}



/* Entry: 10a7a43ec; end: 10a7a441b;  */

void FUN_10a7a43ec(long *param_1)

{
  if (*param_1 != 0) {
    FUN_10a7a441c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(*param_1);
    return;
  }
  return;
}



/* Entry: 10a7a441c; end: 10a7a4473;  */

void FUN_10a7a441c(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 8);
  while (lVar1 != param_2) {
    FUN_10a436958(lVar1 + -0x10);
    func_0x00010a4369b0(lVar1 + -0x20);
    lVar1 = lVar1 + -0x20;
  }
  *(long *)(param_1 + 8) = param_2;
  return;
}



/* Entry: 10a7a4474; end: 10a7a4507;  */

void FUN_10a7a4474(long *param_1)

{
  ulong uVar1;
  bool bVar2;
  long *plVar3;
  long lVar4;
  ulong uVar5;
  undefined1 uVar6;
  long lVar7;
  undefined8 uVar8;
  
  plVar3 = param_1;
  FUN_10a788a7c();
  if (plVar3 != (long *)0x0) {
    uVar1 = param_1[2];
    param_1[3] = param_1[3] + -1;
    lVar4 = *param_1;
    lVar7 = *plVar3;
    uVar5 = CONCAT17(-((char)((ulong)lVar7 >> 0x38) == -0x80),
                     CONCAT16(-((char)((ulong)lVar7 >> 0x30) == -0x80),
                              CONCAT15(-((char)((ulong)lVar7 >> 0x28) == -0x80),
                                       CONCAT14(-((char)((ulong)lVar7 >> 0x20) == -0x80),
                                                CONCAT13(-((char)((ulong)lVar7 >> 0x18) == -0x80),
                                                         CONCAT12(-((char)((ulong)lVar7 >> 0x10) ==
                                                                   -0x80),CONCAT11(-((char)((ulong)
                                                  lVar7 >> 8) == -0x80),-((char)lVar7 == -0x80))))))
                             ));
    uVar8 = *(undefined8 *)(lVar4 + ((long)plVar3 + (-8 - lVar4) & uVar1));
    lVar7 = CONCAT17(-((char)((ulong)uVar8 >> 0x38) == -0x80),
                     CONCAT16(-((char)((ulong)uVar8 >> 0x30) == -0x80),
                              CONCAT15(-((char)((ulong)uVar8 >> 0x28) == -0x80),
                                       CONCAT14(-((char)((ulong)uVar8 >> 0x20) == -0x80),
                                                CONCAT13(-((char)((ulong)uVar8 >> 0x18) == -0x80),
                                                         CONCAT12(-((char)((ulong)uVar8 >> 0x10) ==
                                                                   -0x80),CONCAT11(-((char)((ulong)
                                                  uVar8 >> 8) == -0x80),-((char)uVar8 == -0x80))))))
                             ));
    if (lVar7 == 0 || uVar5 == 0) {
      uVar5 = 0;
      uVar6 = 0xfe;
    }
    else {
      uVar5 = (uVar5 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar5 & 0x5555555555555555) << 1;
      uVar5 = (uVar5 & 0xcccccccccccccccc) >> 2 | (uVar5 & 0x3333333333333333) << 2;
      uVar5 = (uVar5 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar5 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar5 = (uVar5 & 0xff00ff00ff00ff00) >> 8 | (uVar5 & 0xff00ff00ff00ff) << 8;
      uVar5 = (uVar5 & 0xffff0000ffff0000) >> 0x10 | (uVar5 & 0xffff0000ffff) << 0x10;
      bVar2 = ((ulong)LZCOUNT(lVar7) >> 3) + ((ulong)LZCOUNT(uVar5 >> 0x20 | uVar5 << 0x20) >> 3) <
              8;
      uVar5 = (ulong)bVar2;
      uVar6 = 0x80;
      if (!bVar2) {
        uVar6 = 0xfe;
      }
    }
    *(undefined1 *)plVar3 = uVar6;
    *(undefined1 *)(lVar4 + ((long)plVar3 + (-7 - lVar4) & uVar1) + (uVar1 & 7)) = uVar6;
    *(ulong *)(lVar4 + -8) = *(long *)(lVar4 + -8) + uVar5;
    return;
  }
  return;
}



/* Entry: 10a7a4508; end: 10a7a463b;  */

long * FUN_10a7a4508(long *param_1,undefined8 *param_2)

{
  ulong uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  long lVar4;
  long *plVar5;
  ulong uVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  ulong uVar9;
  long lVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 *puStack_68;
  undefined8 *puStack_60;
  long *plStack_58;
  long lStack_50;
  long *plStack_48;
  
  lVar10 = param_1[1] - *param_1;
  uVar1 = (lVar10 >> 5) + 1;
  if (uVar1 >> 0x3b == 0) {
    uVar6 = param_1[2] - *param_1;
    uVar9 = (long)uVar6 >> 4;
    if (uVar9 <= uVar1) {
      uVar9 = uVar1;
    }
    if (0x7fffffffffffffdf < uVar6) {
      uVar9 = 0x7ffffffffffffff;
    }
    plStack_48 = param_1;
    if (uVar9 >> 0x3b == 0) {
      lVar4 = uVar9 << 5;
      __Znwm();
      puVar2 = (undefined8 *)(lVar4 + lVar10);
      lStack_50 = lVar4 + uVar9 * 0x20;
      uVar12 = param_2[1];
      uVar11 = *param_2;
      uVar14 = param_2[3];
      uVar13 = param_2[2];
      *param_2 = 0;
      param_2[1] = 0;
      puVar2[1] = uVar12;
      *puVar2 = uVar11;
      puVar2[3] = uVar14;
      puVar2[2] = uVar13;
      param_2[2] = 0;
      param_2[3] = 0;
      plStack_58 = puVar2 + 4;
      puStack_68 = (undefined8 *)*param_1;
      puVar3 = (undefined8 *)param_1[1];
      puVar2 = (undefined8 *)((long)puVar2 + ((long)puStack_68 - (long)puVar3));
      puVar7 = puVar2;
      puVar8 = puStack_68;
      plVar5 = plStack_58;
      if ((long)puStack_68 - (long)puVar3 != 0) {
        do {
          uVar11 = *puVar8;
          puVar7[1] = puVar8[1];
          *puVar7 = uVar11;
          *puVar8 = 0;
          puVar8[1] = 0;
          uVar11 = puVar8[2];
          puVar7[3] = puVar8[3];
          puVar7[2] = uVar11;
          puVar8[2] = 0;
          puVar8[3] = 0;
          puVar8 = puVar8 + 4;
          puVar7 = puVar7 + 4;
        } while (puVar8 != puVar3);
        do {
          FUN_10a436958(puStack_68 + 2);
          func_0x00010a4369b0(puStack_68);
          puStack_68 = puStack_68 + 4;
        } while (puStack_68 != puVar3);
        puStack_68 = (undefined8 *)*param_1;
        plVar5 = plStack_58;
      }
      *param_1 = (long)puVar2;
      param_1[1] = (long)plVar5;
      lVar10 = param_1[2];
      param_1[2] = lStack_50;
      puStack_60 = puStack_68;
      plStack_58 = puStack_68;
      lStack_50 = lVar10;
      FUN_10a7a4650(&puStack_68);
      return plVar5;
    }
  }
  else {
    FUN_10a7a463c();
  }
  func_0x000109ffded8();
  plVar5 = (long *)&UNK_10f676ba7;
  FUN_109ffde64();
  lVar10 = plVar5[1];
  lVar4 = plVar5[2];
  while (lVar4 != lVar10) {
    plVar5[2] = lVar4 + -0x20;
    FUN_10a436958(lVar4 + -0x10);
    func_0x00010a4369b0(lVar4 + -0x20);
    lVar4 = plVar5[2];
  }
  if (*plVar5 != 0) {
    __ZdlPv();
  }
  return plVar5;
}



/* Entry: 10a7a463c; end: 10a7a464f;  */

long * FUN_10a7a463c(void)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  
  plVar2 = (long *)&UNK_10f676ba7;
  FUN_109ffde64();
  lVar1 = plVar2[1];
  lVar3 = plVar2[2];
  while (lVar3 != lVar1) {
    plVar2[2] = lVar3 + -0x20;
    FUN_10a436958(lVar3 + -0x10);
    func_0x00010a4369b0(lVar3 + -0x20);
    lVar3 = plVar2[2];
  }
  if (*plVar2 != 0) {
    __ZdlPv();
  }
  return plVar2;
}



/* Entry: 10a7a4650; end: 10a7a46af;  */

long * FUN_10a7a4650(long *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = param_1[1];
  lVar2 = param_1[2];
  while (lVar2 != lVar1) {
    param_1[2] = lVar2 + -0x20;
    FUN_10a436958(lVar2 + -0x10);
    func_0x00010a4369b0(lVar2 + -0x20);
    lVar2 = param_1[2];
  }
  if (*param_1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 10a7a46b0; end: 10a7a483b;  */

void FUN_10a7a46b0(undefined8 *param_1,undefined8 *param_2)

{
  undefined2 uVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  
  uVar7 = param_2[1];
  uVar6 = *param_2;
  uVar8 = param_2[2];
  uVar10 = param_2[5];
  uVar9 = param_2[4];
  param_1[3] = param_2[3];
  param_1[2] = uVar8;
  param_1[5] = uVar10;
  param_1[4] = uVar9;
  param_1[1] = uVar7;
  *param_1 = uVar6;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[6] = 0;
  uVar6 = param_2[6];
  param_1[7] = param_2[7];
  param_1[6] = uVar6;
  param_1[8] = param_2[8];
  param_2[6] = 0;
  param_2[7] = 0;
  param_2[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  uVar6 = param_2[9];
  param_1[10] = param_2[10];
  param_1[9] = uVar6;
  param_1[0xb] = param_2[0xb];
  param_2[9] = 0;
  param_2[10] = 0;
  param_2[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  uVar6 = param_2[0xc];
  param_1[0xd] = param_2[0xd];
  param_1[0xc] = uVar6;
  param_1[0xe] = param_2[0xe];
  param_2[0xc] = 0;
  param_2[0xd] = 0;
  param_2[0xe] = 0;
  uVar6 = param_2[0xf];
  param_1[0x10] = param_2[0x10];
  param_1[0xf] = uVar6;
  param_1[0x11] = param_2[0x11];
  plVar2 = param_2 + 0x12;
  lVar4 = *plVar2;
  plVar3 = param_1 + 0x12;
  *plVar3 = lVar4;
  lVar5 = param_2[0x13];
  param_1[0x13] = lVar5;
  if (lVar5 == 0) {
    param_1[0x11] = plVar3;
  }
  else {
    *(long **)(lVar4 + 0x10) = plVar3;
    param_2[0x11] = plVar2;
    *plVar2 = 0;
    param_2[0x13] = 0;
  }
  param_1[0x14] = param_2[0x14];
  plVar2 = param_2 + 0x15;
  lVar4 = *plVar2;
  plVar3 = param_1 + 0x15;
  *plVar3 = lVar4;
  lVar5 = param_2[0x16];
  param_1[0x16] = lVar5;
  if (lVar5 == 0) {
    param_1[0x14] = plVar3;
  }
  else {
    *(long **)(lVar4 + 0x10) = plVar3;
    param_2[0x14] = plVar2;
    *plVar2 = 0;
    param_2[0x16] = 0;
  }
  param_1[0x17] = param_2[0x17];
  plVar2 = param_2 + 0x18;
  lVar4 = *plVar2;
  plVar3 = param_1 + 0x18;
  *plVar3 = lVar4;
  lVar5 = param_2[0x19];
  param_1[0x19] = lVar5;
  if (lVar5 == 0) {
    param_1[0x17] = plVar3;
  }
  else {
    *(long **)(lVar4 + 0x10) = plVar3;
    param_2[0x17] = plVar2;
    *plVar2 = 0;
    param_2[0x19] = 0;
  }
  param_1[0x1a] = param_2[0x1a];
  plVar2 = param_2 + 0x1b;
  lVar4 = *plVar2;
  plVar3 = param_1 + 0x1b;
  *plVar3 = lVar4;
  lVar5 = param_2[0x1c];
  param_1[0x1c] = lVar5;
  if (lVar5 == 0) {
    param_1[0x1a] = plVar3;
  }
  else {
    *(long **)(lVar4 + 0x10) = plVar3;
    param_2[0x1a] = plVar2;
    *plVar2 = 0;
    param_2[0x1c] = 0;
  }
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  uVar6 = param_2[0x1d];
  param_1[0x1e] = param_2[0x1e];
  param_1[0x1d] = uVar6;
  param_1[0x1f] = param_2[0x1f];
  param_2[0x1d] = 0;
  param_2[0x1e] = 0;
  param_2[0x1f] = 0;
  uVar1 = *(undefined2 *)(param_2 + 0x20);
  *(undefined1 *)((long)param_1 + 0x102) = *(undefined1 *)((long)param_2 + 0x102);
  *(undefined2 *)(param_1 + 0x20) = uVar1;
  return;
}


