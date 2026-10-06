/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10a8271c4; end: 10a82759f;  */

void FUN_10a8271c4(undefined8 *param_1,long param_2,long *param_3)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  undefined8 uVar5;
  long *plVar6;
  long lVar7;
  long *plVar8;
  long lVar9;
  long lVar10;
  long *plStack_60;
  long *plStack_58;
  long lStack_50;
  long *plStack_48;
  
  if (param_2 == 0) {
    plVar6 = (long *)0x110;
    __Znwm();
    plVar6[1] = 0;
    plVar6[2] = 0;
    *plVar6 = (long)&PTR_DAT_110c23648;
    plVar8 = plVar6 + 3;
    plStack_48 = (long *)param_3[1];
    lStack_50 = *param_3;
    if (param_3[1] != 0) {
      plVar1 = (long *)(param_3[1] + 8);
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar4) {
          *plVar1 = *plVar1 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    FUN_10a84d124(plVar8,0,&lStack_50);
    plVar1 = plStack_48;
    if (plStack_48 != (long *)0x0) {
      plVar2 = plStack_48 + 1;
      do {
        lVar7 = *plVar2;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar4) {
          *plVar2 = lVar7 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar7 == 0) {
        (**(code **)(*plStack_48 + 0x10))(plStack_48);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar1);
      }
    }
    plStack_60 = plVar8;
    plStack_58 = plVar6;
    FUN_10a84d2c0(&plStack_60,plVar6 + 8,plVar8);
    FUN_10a84cfc0(param_1,&plStack_60);
    if (plStack_58 == (long *)0x0) {
      return;
    }
    plVar8 = plStack_58 + 1;
    do {
      lVar7 = *plVar8;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar4) {
        *plVar8 = lVar7 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
      plVar6 = plStack_58;
    } while (cVar3 != '\0');
  }
  else {
    lVar7 = *(long *)(param_2 + 0x858);
    plVar6 = *(long **)(param_2 + 0x860);
    if (plVar6 != (long *)0x0) {
      plVar8 = plVar6 + 1;
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar8,0x10);
        if (bVar4) {
          *plVar8 = *plVar8 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    lVar9 = param_3[1];
    plVar8 = (long *)param_3[1];
    lVar10 = *param_3;
    uVar5 = 0xf8;
    __Znwm(0xf8);
    if (lVar9 != 0) {
      plVar1 = (long *)(lVar9 + 8);
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar4) {
          *plVar1 = *plVar1 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    lStack_50 = lVar10;
    plStack_48 = plVar8;
    FUN_10a84d124(uVar5,param_2,&lStack_50);
    plVar8 = plStack_48;
    if (plStack_48 != (long *)0x0) {
      plVar1 = plStack_48 + 1;
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
        (**(code **)(*plStack_48 + 0x10))(plStack_48);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar8);
      }
    }
    if (plVar6 != (long *)0x0) {
      plVar8 = plVar6 + 1;
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar8,0x10);
        if (bVar4) {
          *plVar8 = *plVar8 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      plVar8 = plVar6 + 2;
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar8,0x10);
        if (bVar4) {
          *plVar8 = *plVar8 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar8,0x10);
        if (bVar4) {
          *plVar8 = *plVar8 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
    }
    lStack_50 = lVar7;
    plStack_48 = plVar6;
    FUN_10a84d220(&plStack_60,uVar5,&lStack_50);
    FUN_10a84cfc0(param_1,&plStack_60);
    plVar8 = plStack_58;
    if (plStack_58 != (long *)0x0) {
      plVar1 = plStack_58 + 1;
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
        (**(code **)(*plStack_58 + 0x10))(plStack_58);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar8);
      }
    }
    if (plStack_48 != (long *)0x0) {
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
    if (plVar6 != (long *)0x0) {
      plVar8 = plVar6 + 1;
      do {
        lVar9 = *plVar8;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar8,0x10);
        if (bVar4) {
          *plVar8 = lVar9 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar9 == 0) {
        (**(code **)(*plVar6 + 0x10))(plVar6);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
      }
    }
    if ((lVar7 != 0) && (plVar8 = (long *)*param_1, plVar8 != (long *)0x0)) {
      plStack_58 = (long *)param_1[1];
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
      }
      plStack_60 = plVar8;
      FUN_10aa88c30(lVar7,&plStack_60);
      plVar8 = plStack_58;
      if (plStack_58 != (long *)0x0) {
        plVar1 = plStack_58 + 1;
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
          (**(code **)(*plStack_58 + 0x10))(plStack_58);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar8);
        }
      }
    }
    if (plVar6 == (long *)0x0) {
      return;
    }
    plVar8 = plVar6 + 1;
    do {
      lVar7 = *plVar8;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar4) {
        *plVar8 = lVar7 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  if (lVar7 == 0) {
    (**(code **)(*plVar6 + 0x10))(plVar6);
    __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
  }
  return;
}



/* Entry: 10a8275a0; end: 10a82782b;  */

undefined8 * FUN_10a8275a0(undefined8 *param_1,long param_2,undefined8 param_3,undefined8 *param_4)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined8 uStack_38;
  
  *param_1 = &PTR_FUN_110c20b58;
  param_1[1] = param_2;
  param_1[2] = param_3;
  lVar5 = param_4[1];
  uVar7 = *param_4;
  param_1[4] = param_4[1];
  param_1[3] = uVar7;
  if (lVar5 != 0) {
    plVar4 = (long *)(lVar5 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar4,0x10);
      if (bVar3) {
        *plVar4 = *plVar4 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    param_2 = param_1[1];
  }
  param_1[0xc] = 0;
  *(undefined1 *)(param_1 + 5) = 0;
  *(undefined1 *)(param_1 + 7) = 0;
  *(undefined1 *)(param_1 + 8) = 0;
  *(undefined1 *)(param_1 + 9) = 0;
  *(undefined1 *)(param_1 + 10) = 0;
  *(undefined1 *)(param_1 + 0xb) = 0;
  param_1[0xd] = 0;
  *(undefined1 *)((long)param_1 + 0x74) = 0;
  *(undefined1 *)((long)param_1 + 0xb4) = 0;
  param_1[0x17] = 0xffffffff000003e8;
  *(undefined2 *)(param_1 + 0x18) = 0;
  *(undefined1 *)(param_1 + 0x19) = 0;
  *(undefined1 *)(param_1 + 0x1c) = 0;
  plVar4 = *(long **)(param_2 + 0x960);
  FUN_10a6eb764(plVar4,param_4);
  (**(code **)(*plVar4 + 0x18))(&uStack_38);
  if (*(char *)(param_1 + 0xb) == '\x01') {
    plVar4 = (long *)param_1[10];
    if (plVar4 != (long *)0x0) {
      puVar1 = (ulong *)(plVar4 + 1);
      do {
        uVar6 = *puVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = uVar6 - 4;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if ((uVar6 & 0x1fffffffc) == 4) {
        do {
          uVar6 = *puVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar3) {
            *puVar1 = uVar6 - 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (uVar6 - 1 == 0) {
          (**(code **)(*plVar4 + 8))();
        }
      }
    }
    param_1[10] = uStack_38;
  }
  else {
    param_1[10] = uStack_38;
    *(undefined1 *)(param_1 + 0xb) = 1;
  }
  FUN_10a6ebc48(&uStack_38,*(undefined8 *)(param_1[1] + 0x960),param_4);
  if (*(char *)(param_1 + 9) == '\x01') {
    plVar4 = (long *)param_1[8];
    if (plVar4 != (long *)0x0) {
      puVar1 = (ulong *)(plVar4 + 1);
      do {
        uVar6 = *puVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = uVar6 - 4;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if ((uVar6 & 0x1fffffffc) == 4) {
        do {
          uVar6 = *puVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar3) {
            *puVar1 = uVar6 - 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (uVar6 - 1 == 0) {
          (**(code **)(*plVar4 + 8))();
        }
      }
    }
    param_1[8] = uStack_38;
  }
  else {
    param_1[8] = uStack_38;
    *(undefined1 *)(param_1 + 9) = 1;
  }
  return param_1;
}



/* Entry: 10a82782c; end: 10a827933;  */

undefined8 * FUN_10a82782c(undefined8 *param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  ulong uVar7;
  
  *param_1 = &PTR_FUN_110c20b58;
  lVar6 = *(long *)(param_1[1] + 0x960);
  if (lVar6 != 0) {
    lVar4 = *(long *)(lVar6 + 0x240);
    *(undefined8 *)(lVar6 + 0x240) = 0;
    *(undefined8 *)(lVar6 + 0x238) = 0;
    if (lVar4 != 0) {
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
  }
  FUN_10a22ffb4(param_1 + 0xc);
  if ((*(char *)(param_1 + 0xb) == '\x01') && (plVar5 = (long *)param_1[10], plVar5 != (long *)0x0))
  {
    puVar1 = (ulong *)(plVar5 + 1);
    do {
      uVar7 = *puVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = uVar7 - 4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((uVar7 & 0x1fffffffc) == 4) {
      do {
        uVar7 = *puVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = uVar7 - 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (uVar7 - 1 == 0) {
        (**(code **)(*plVar5 + 8))();
      }
    }
  }
  if ((*(char *)(param_1 + 9) == '\x01') && (plVar5 = (long *)param_1[8], plVar5 != (long *)0x0)) {
    puVar1 = (ulong *)(plVar5 + 1);
    do {
      uVar7 = *puVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = uVar7 - 4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((uVar7 & 0x1fffffffc) == 4) {
      do {
        uVar7 = *puVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = uVar7 - 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (uVar7 - 1 == 0) {
        (**(code **)(*plVar5 + 8))();
      }
    }
  }
  FUN_10a0772f0(param_1 + 3);
  return param_1;
}



/* Entry: 10a827934; end: 10a827937;  */

undefined8 * FUN_10a827934(undefined8 *param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  ulong uVar7;
  
  *param_1 = &PTR_FUN_110c20b58;
  lVar6 = *(long *)(param_1[1] + 0x960);
  if (lVar6 != 0) {
    lVar4 = *(long *)(lVar6 + 0x240);
    *(undefined8 *)(lVar6 + 0x240) = 0;
    *(undefined8 *)(lVar6 + 0x238) = 0;
    if (lVar4 != 0) {
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
  }
  FUN_10a22ffb4(param_1 + 0xc);
  if ((*(char *)(param_1 + 0xb) == '\x01') && (plVar5 = (long *)param_1[10], plVar5 != (long *)0x0))
  {
    puVar1 = (ulong *)(plVar5 + 1);
    do {
      uVar7 = *puVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = uVar7 - 4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((uVar7 & 0x1fffffffc) == 4) {
      do {
        uVar7 = *puVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = uVar7 - 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (uVar7 - 1 == 0) {
        (**(code **)(*plVar5 + 8))();
      }
    }
  }
  if ((*(char *)(param_1 + 9) == '\x01') && (plVar5 = (long *)param_1[8], plVar5 != (long *)0x0)) {
    puVar1 = (ulong *)(plVar5 + 1);
    do {
      uVar7 = *puVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = uVar7 - 4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((uVar7 & 0x1fffffffc) == 4) {
      do {
        uVar7 = *puVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = uVar7 - 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (uVar7 - 1 == 0) {
        (**(code **)(*plVar5 + 8))();
      }
    }
  }
  FUN_10a0772f0(param_1 + 3);
  return param_1;
}



/* Entry: 10a827938; end: 10a82794b;  */

void FUN_10a827938(void)

{
  FUN_10a82782c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a82794c; end: 10a827a0f;  */

void FUN_10a82794c(undefined8 *param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uStack_40;
  long *plStack_38;
  
  uStack_40 = 0;
  plStack_38 = (long *)0x0;
  FUN_10a825df8(*(undefined8 *)(param_2 + 0x18),&uStack_40);
  uVar5 = 0xe8;
  __Znwm();
  FUN_10a8275a0();
  plVar4 = plStack_38;
  *param_1 = uVar5;
  if (plStack_38 != (long *)0x0) {
    plVar1 = plStack_38 + 1;
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
      (**(code **)(*plStack_38 + 0x10))(plStack_38);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
    }
  }
  return;
}



/* Entry: 10a827a10; end: 10a827fc3;  */

void FUN_10a827a10(double param_1,long param_2,long param_3)

{
  long *plVar1;
  ulong *puVar2;
  undefined8 ***pppuVar3;
  char cVar4;
  bool bVar5;
  code *pcVar6;
  long *plVar7;
  long lVar8;
  undefined8 *puVar9;
  undefined8 in_x6;
  undefined8 in_x7;
  ulong uVar10;
  long lVar11;
  undefined8 uVar12;
  undefined8 auStack_60 [2];
  char cStack_49;
  undefined8 **ppuStack_48;
  long *plStack_40;
  char cStack_31;
  
  if (((*(char *)(param_2 + 0x58) == '\x01') &&
      (((uint)*(undefined8 *)(*(long *)(param_2 + 0x50) + 0x10) >> 1 & 1) != 0)) &&
     ((*(byte *)(param_2 + 0xe0) & 1) == 0)) {
    if (((uint)*(undefined8 *)(*(long *)(param_2 + 0x50) + 0x10) >> 5 & 1) == 0) {
      func_0x0001092af8bc(param_2 + 0x50);
      lVar11 = *(long *)(param_2 + 0x50);
      if ((*(byte *)(lVar11 + 0xb8) & 1) == 0) goto LAB_10a827e60;
      if (*(char *)(lVar11 + 0xb0) == '\x01') {
        uVar12 = *(undefined8 *)(lVar11 + 0xa8);
        param_1 = *(double *)(lVar11 + 0x98);
        *(undefined8 *)(param_2 + 0xd0) = *(undefined8 *)(lVar11 + 0xa0);
        *(double *)(param_2 + 200) = param_1;
        *(undefined8 *)(param_2 + 0xd8) = uVar12;
        if ((*(byte *)(param_2 + 0xe0) & 1) == 0) {
          *(undefined1 *)(param_2 + 0xe0) = 1;
        }
        *(undefined1 *)(param_2 + 0xc1) = 1;
      }
      else {
        *(undefined1 *)(param_2 + 0xc1) = 0;
      }
    }
    else {
      if (*(char *)(param_2 + 0x58) == '\x01') {
        plVar7 = *(long **)(param_2 + 0x50);
        if (plVar7 != (long *)0x0) {
          puVar2 = (ulong *)(plVar7 + 1);
          do {
            uVar10 = *puVar2;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(puVar2,0x10);
            if (bVar5) {
              *puVar2 = uVar10 - 4;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if ((uVar10 & 0x1fffffffc) == 4) {
            do {
              uVar10 = *puVar2;
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(puVar2,0x10);
              if (bVar5) {
                *puVar2 = uVar10 - 1;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
            if (uVar10 - 1 == 0) {
              (**(code **)(*plVar7 + 8))();
            }
          }
        }
        *(undefined1 *)(param_2 + 0x58) = 0;
      }
      if ((bRam000000011330a9e8 & 1) != 0) {
        __ZNSt13exception_ptrC1ERKS_(auStack_60,*(long *)(param_2 + 0x50) + 0x90);
        func_0x0001098bc760(&ppuStack_48,auStack_60);
        pppuVar3 = (undefined8 ***)ppuStack_48;
        if (-1 < cStack_31) {
          pppuVar3 = &ppuStack_48;
        }
        func_0x00010ae06f08(0,1,&UNK_10f67b144,&UNK_10f67b30e,0x177,&UNK_10f67b39e,in_x6,in_x7,
                            pppuVar3);
        if (cStack_31 < '\0') {
          __ZdlPv(ppuStack_48);
        }
        __ZNSt13exception_ptrD1Ev(auStack_60);
      }
      puVar9 = *(undefined8 **)(param_2 + 0x10);
      FUN_10a6e4938();
      ppuStack_48 = (undefined8 **)*puVar9;
      plVar7 = (long *)puVar9[1];
      if (plVar7 != (long *)0x0) {
        plVar1 = plVar7 + 1;
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar5) {
            *plVar1 = *plVar1 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
      }
      plStack_40 = plVar7;
      if (((*(byte *)(param_2 + 0xc0) & 1) == 0) &&
         ((undefined8 ***)ppuStack_48 != (undefined8 ***)0x0)) {
        *(undefined1 *)(param_2 + 0xc0) = 1;
        if (*(char *)(ppuStack_48 + 8) == '\x01') {
          (*(code *)*ppuStack_48)();
        }
        else if (*(char *)(ppuStack_48 + 8) == '\x02') {
          FUN_10a05e614();
        }
      }
      if (plVar7 != (long *)0x0) {
        plVar1 = plVar7 + 1;
        do {
          lVar11 = *plVar1;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar5) {
            *plVar1 = lVar11 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (lVar11 == 0) {
          (**(code **)(*plVar7 + 0x10))(plVar7);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
        }
      }
    }
  }
  if ((*(char *)(param_3 + 0x10) == '\x01') && (*(char *)(param_2 + 0xc1) == '\x01')) {
    if ((*(byte *)(param_2 + 0xe0) & 1) == 0) goto LAB_10a827e60;
    func_0x000109472d58(param_2 + 0x70,param_2 + 200,param_3);
    *(int *)(param_2 + 0xbc) = (int)param_1;
    if (*(int *)(param_2 + 0xb8) < (int)param_1) {
      lVar11 = *(long *)(param_2 + 8);
      func_0x000107c2b054(auStack_60,&UNK_10f67b12a);
      if (lVar11 != 0) {
        uVar12 = *(undefined8 *)(lVar11 + 0x8d8);
        func_0x000107c2b054(&ppuStack_48,"true");
        FUN_10a76bdb0(uVar12,auStack_60,&ppuStack_48);
        if (cStack_31 < '\0') {
          __ZdlPv(ppuStack_48);
        }
      }
      if (cStack_49 < '\0') {
        __ZdlPv(auStack_60[0]);
      }
    }
  }
  if ((*(char *)(param_2 + 0x48) == '\x01') &&
     (((uint)*(undefined8 *)(*(long *)(param_2 + 0x40) + 0x10) >> 1 & 1) != 0)) {
    if (*(long *)(param_2 + 0x60) == 0) {
      func_0x0001092af8bc(param_2 + 0x40);
      if ((*(byte *)(*(long *)(param_2 + 0x40) + 0xa8) & 1) == 0) {
LAB_10a827e60:
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x10a827e64);
        (*pcVar6)();
      }
      FUN_10a7d0154(&ppuStack_48,*(long *)(param_2 + 0x40) + 0x98);
      func_0x00010a23175c((long *)(param_2 + 0x60),&ppuStack_48);
      plVar7 = plStack_40;
      if (plStack_40 != (long *)0x0) {
        plVar1 = plStack_40 + 1;
        do {
          lVar11 = *plVar1;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar5) {
            *plVar1 = lVar11 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (lVar11 == 0) {
          (**(code **)(*plStack_40 + 0x10))(plStack_40);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
        }
      }
      if (*(char *)(param_2 + 0x48) == '\x01') {
        plVar7 = *(long **)(param_2 + 0x40);
        if (plVar7 != (long *)0x0) {
          puVar2 = (ulong *)(plVar7 + 1);
          do {
            uVar10 = *puVar2;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(puVar2,0x10);
            if (bVar5) {
              *puVar2 = uVar10 - 4;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if ((uVar10 & 0x1fffffffc) == 4) {
            do {
              uVar10 = *puVar2;
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(puVar2,0x10);
              if (bVar5) {
                *puVar2 = uVar10 - 1;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
            if (uVar10 - 1 == 0) {
              (**(code **)(*plVar7 + 8))();
            }
          }
        }
        *(undefined1 *)(param_2 + 0x48) = 0;
      }
    }
  }
  lVar11 = *(long *)(*(long *)(param_2 + 8) + 0x960);
  uVar12 = *(undefined8 *)(*(long *)(param_2 + 0x10) + 0x248);
  plVar7 = *(long **)(*(long *)(param_2 + 0x10) + 0x250);
  if (plVar7 != (long *)0x0) {
    plVar1 = plVar7 + 1;
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar5) {
        *plVar1 = *plVar1 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    plVar1 = plVar7 + 2;
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar5) {
        *plVar1 = *plVar1 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar5) {
        *plVar1 = *plVar1 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  *(undefined8 *)(lVar11 + 0x238) = uVar12;
  lVar8 = *(long *)(lVar11 + 0x240);
  *(long **)(lVar11 + 0x240) = plVar7;
  if (lVar8 != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  if (plVar7 != (long *)0x0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
    plVar1 = plVar7 + 1;
    do {
      lVar11 = *plVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar5) {
        *plVar1 = lVar11 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar11 == 0) {
      (**(code **)(*plVar7 + 0x10))(plVar7);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
    }
  }
  return;
}



/* Entry: 10a827fc4; end: 10a827fe3;  */

bool FUN_10a827fc4(long param_1)

{
  return *(long *)(param_1 + 0x60) != 0;
}



/* Entry: 10a827fe4; end: 10a82809b;  */

void FUN_10a827fe4(long *param_1,long param_2)

{
  long *plVar1;
  undefined1 auStack_78 [8];
  undefined1 auStack_70 [24];
  undefined1 uStack_58;
  undefined7 uStack_57;
  char cStack_41;
  char cStack_40;
  undefined1 *puStack_38;
  
  if (param_1[0xc] != 0) {
    plVar1 = param_1;
    (**(code **)(*param_1 + 0x40))();
    auStack_78[0] = SUB81(plVar1,0);
    FUN_10acf2c5c(auStack_70,param_1[3] + 0xe8,param_1 + 0xc);
    uStack_58 = 0;
    cStack_40 = '\0';
    FUN_10a6efaac(param_2 + 0x410,auStack_78);
    if ((cStack_40 == '\x01') && (cStack_41 < '\0')) {
      __ZdlPv(CONCAT71(uStack_57,uStack_58));
    }
    puStack_38 = auStack_70;
    FUN_10a2303d4(&puStack_38);
  }
  return;
}



/* Entry: 10a82809c; end: 10a8281cf;  */

undefined8 *
FUN_10a82809c(undefined8 *param_1,undefined1 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  long lVar1;
  char cVar2;
  byte bVar3;
  bool bVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined1 *puVar7;
  char cVar8;
  long lVar9;
  long *plVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined1 auStack_f0 [8];
  long *plStack_e8;
  undefined1 auStack_80 [32];
  undefined8 uStack_60;
  undefined7 uStack_58;
  undefined1 uStack_51;
  undefined7 uStack_50;
  undefined8 uStack_49;
  long lStack_38;
  
  puVar7 = auStack_80;
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar9 = *(long *)(param_2 + 0x90);
  puVar5 = param_1;
  if (lVar9 != 0) {
    cVar2 = *(char *)((long)param_1 + 0xb4);
    lVar1 = *(long *)(lVar9 + 8);
    if (lVar1 == *(long *)(lVar9 + 0x10)) {
      cVar8 = '\0';
      *(undefined1 *)((long)param_1 + 0x74) = 0;
      *(undefined1 *)((long)param_1 + 0xb4) = 0;
    }
    else {
      uStack_60 = *(undefined8 *)(lVar1 + 0x39);
      uStack_58 = (undefined7)*(undefined8 *)(lVar1 + 0x41);
      uStack_49 = *(undefined8 *)(lVar1 + 0x50);
      uVar11 = *(undefined8 *)(lVar1 + 0x48);
      uStack_51 = (undefined1)uVar11;
      uStack_50 = (undefined7)((ulong)uVar11 >> 8);
      uVar13 = *(undefined8 *)(lVar1 + 0x21);
      uVar12 = *(undefined8 *)(lVar1 + 0x19);
      uVar15 = *(undefined8 *)(lVar1 + 0x31);
      uVar14 = *(undefined8 *)(lVar1 + 0x29);
      bVar3 = *(byte *)(lVar1 + 0x58);
      *(undefined1 *)((long)param_1 + 0x74) = *(undefined1 *)(lVar1 + 0x18);
      *(undefined8 *)((long)param_1 + 0x8d) = uVar15;
      *(undefined8 *)((long)param_1 + 0x85) = uVar14;
      *(undefined8 *)((long)param_1 + 0x7d) = uVar13;
      *(undefined8 *)((long)param_1 + 0x75) = uVar12;
      *(undefined8 *)((long)param_1 + 0xac) = uStack_49;
      *(undefined8 *)((long)param_1 + 0xa4) = uVar11;
      *(ulong *)((long)param_1 + 0x9d) = CONCAT17(uStack_51,uStack_58);
      *(undefined8 *)((long)param_1 + 0x95) = uStack_60;
      *(byte *)((long)param_1 + 0xb4) = bVar3;
      if ((bVar3 & 1) == 0) {
        cVar8 = '\0';
      }
      else {
        puVar6 = param_3;
        func_0x0001094f5708(auStack_80,(long)param_1 + 0x74);
        func_0x00010a3e8440();
        cVar8 = *(char *)((long)param_1 + 0xb4);
        puVar5 = param_3;
        param_2 = puVar7;
        param_3 = puVar6;
      }
    }
    if (cVar2 != cVar8) {
      lVar9 = 0x288;
      if (cVar2 == '\0') {
        lVar9 = 0x278;
      }
      puVar5 = *(undefined8 **)(param_1[2] + lVar9);
      if (puVar5 != (undefined8 *)0x0) {
        if (*(char *)(puVar5 + 8) == '\x01') {
          (*(code *)*puVar5)();
        }
        else if (*(char *)(puVar5 + 8) == '\x02') {
          FUN_10a05e614();
        }
      }
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return puVar5;
  }
  ___stack_chk_fail();
  *puVar5 = &PTR_FUN_110c20bc8;
  puVar5[1] = param_2;
  puVar5[2] = param_3;
  lVar9 = param_4[1];
  uVar11 = *param_4;
  puVar5[4] = param_4[1];
  puVar5[3] = uVar11;
  if (lVar9 != 0) {
    plVar10 = (long *)(lVar9 + 8);
    do {
      cVar2 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar4) {
        *plVar10 = *plVar10 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  *(undefined1 *)(puVar5 + 0xf) = 0;
  puVar5[5] = 0x8000000000000000;
  *(undefined4 *)(puVar5 + 6) = 0x3aebedfa;
  puVar5[7] = 0;
  puVar5[8] = 0xffffffff000003e8;
  *(undefined1 *)(puVar5 + 9) = 0;
  *(undefined1 *)(puVar5 + 0xb) = 0;
  *(undefined1 *)(puVar5 + 0xc) = 0;
  *(undefined1 *)(puVar5 + 0xe) = 0;
  *(undefined1 *)(puVar5 + 0x19) = 0;
  plVar10 = puVar5 + 0x1a;
  *plVar10 = 0;
  puVar5[0x1b] = 0;
  FUN_10a05a5d4(puVar5 + 0x1d,auStack_f0);
  puVar5[0x20] = 0;
  puVar5[0x1f] = 0;
  puVar5[0x21] = 0;
  puVar5[0x23] = 0;
  puVar5[0x22] = puVar5 + 0x23;
  puVar5[0x25] = 0;
  puVar5[0x24] = 0;
  puVar5[0x27] = 0;
  puVar5[0x26] = 0;
  puVar5[0x2a] = 0;
  puVar5[0x29] = 0;
  puVar5[0x28] = puVar5 + 0x29;
  puVar5[0x2c] = 0;
  puVar5[0x2b] = 0;
  *(undefined1 *)(puVar5 + 0x2f) = 0;
  *(undefined1 *)(puVar5 + 0x32) = 0;
  *(undefined1 *)(puVar5 + 0x33) = 0;
  *(undefined1 *)(puVar5 + 0x3b) = 0;
  *(undefined1 *)(puVar5 + 0x2e) = 0;
  puVar5[0x2d] = 0;
  puVar5[0x44] = 0x3f800000;
  puVar5[0x43] = 0;
  puVar5[0x46] = 0x3f80000000000000;
  puVar5[0x45] = 0;
  puVar5[0x40] = 0;
  puVar5[0x3f] = 0x3f800000;
  puVar5[0x42] = 0;
  puVar5[0x41] = 0x3f80000000000000;
  *(undefined1 *)(puVar5 + 0x47) = 0;
  puVar5[0x49] = 0;
  puVar5[0x48] = 0;
  puVar5[0x4a] = 3000;
  puVar5[0x4c] = 0;
  puVar5[0x4b] = 0;
  puVar6 = (undefined8 *)0xe8;
  __Znwm();
  puVar6[1] = 0x40b3880000000000;
  *puVar6 = 3000;
  *(undefined1 *)(puVar6 + 0x10) = 0;
  *(undefined1 *)(puVar6 + 0x11) = 0;
  *(undefined1 *)(puVar6 + 0x1b) = 0;
  puVar6[4] = 0;
  puVar6[5] = 0;
  puVar6[3] = 0;
  *(undefined1 *)(puVar6 + 6) = 0;
  puVar6[0x1c] = 0x8000000000000000;
  lVar9 = *plVar10;
  *plVar10 = (long)puVar6;
  if (lVar9 != 0) {
    FUN_10a84c1d4(lVar9);
  }
  puVar6 = (undefined8 *)0xe8;
  __Znwm();
  puVar6[3] = 0;
  puVar6[2] = 0;
  puVar6[5] = 0;
  puVar6[4] = 0;
  puVar6[0x19] = 0;
  puVar6[0x18] = 0;
  puVar6[0x1b] = 0;
  puVar6[0x1a] = 0;
  puVar6[0x15] = 0;
  puVar6[0x14] = 0;
  puVar6[0x17] = 0;
  puVar6[0x16] = 0;
  puVar6[0x11] = 0;
  puVar6[0x10] = 0;
  puVar6[0x13] = 0;
  puVar6[0x12] = 0;
  puVar6[0xd] = 0;
  puVar6[0xc] = 0;
  puVar6[0xf] = 0;
  puVar6[0xe] = 0;
  puVar6[9] = 0;
  puVar6[8] = 0;
  puVar6[0xb] = 0;
  puVar6[10] = 0;
  puVar6[7] = 0;
  puVar6[6] = 0;
  *puVar6 = 3000;
  puVar6[1] = 0x40b3880000000000;
  puVar6[4] = 0;
  puVar6[5] = 0;
  puVar6[3] = 0;
  *(undefined1 *)(puVar6 + 6) = 0;
  puVar6[0x1c] = 0x8000000000000000;
  lVar9 = puVar5[0x1b];
  puVar5[0x1b] = puVar6;
  if (lVar9 != 0) {
    FUN_10a84c1d4(lVar9);
  }
  lVar9 = *(long *)(puVar5[1] + 0x960);
  *(undefined4 *)(puVar5 + 6) = *(undefined4 *)(lVar9 + 0x2c0);
  FUN_10a6e46f8(auStack_f0,lVar9,2);
  FUN_10a6e47d0(puVar5 + 0x4b,auStack_f0);
  if (plStack_e8 != (long *)0x0) {
    plVar10 = plStack_e8 + 1;
    do {
      lVar9 = *plVar10;
      cVar2 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar4) {
        *plVar10 = lVar9 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar9 == 0) {
      (**(code **)(*plStack_e8 + 0x10))(plStack_e8);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_e8);
    }
  }
  return puVar5;
}



/* Entry: 10a8281d0; end: 10a8284db;  */

undefined8 *
FUN_10a8281d0(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  char cVar1;
  bool bVar2;
  undefined8 *puVar3;
  long lVar4;
  long *plVar5;
  undefined8 uVar6;
  undefined1 auStack_70 [8];
  long *plStack_68;
  
  *param_1 = &PTR_FUN_110c20bc8;
  param_1[1] = param_2;
  param_1[2] = param_3;
  lVar4 = param_4[1];
  uVar6 = *param_4;
  param_1[4] = param_4[1];
  param_1[3] = uVar6;
  if (lVar4 != 0) {
    plVar5 = (long *)(lVar4 + 8);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar2) {
        *plVar5 = *plVar5 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  *(undefined1 *)(param_1 + 0xf) = 0;
  param_1[5] = 0x8000000000000000;
  *(undefined4 *)(param_1 + 6) = 0x3aebedfa;
  param_1[7] = 0;
  param_1[8] = 0xffffffff000003e8;
  *(undefined1 *)(param_1 + 9) = 0;
  *(undefined1 *)(param_1 + 0xb) = 0;
  *(undefined1 *)(param_1 + 0xc) = 0;
  *(undefined1 *)(param_1 + 0xe) = 0;
  *(undefined1 *)(param_1 + 0x19) = 0;
  plVar5 = param_1 + 0x1a;
  *plVar5 = 0;
  param_1[0x1b] = 0;
  FUN_10a05a5d4(param_1 + 0x1d,auStack_70);
  param_1[0x20] = 0;
  param_1[0x1f] = 0;
  param_1[0x21] = 0;
  param_1[0x23] = 0;
  param_1[0x22] = param_1 + 0x23;
  param_1[0x25] = 0;
  param_1[0x24] = 0;
  param_1[0x27] = 0;
  param_1[0x26] = 0;
  param_1[0x2a] = 0;
  param_1[0x29] = 0;
  param_1[0x28] = param_1 + 0x29;
  param_1[0x2c] = 0;
  param_1[0x2b] = 0;
  *(undefined1 *)(param_1 + 0x2f) = 0;
  *(undefined1 *)(param_1 + 0x32) = 0;
  *(undefined1 *)(param_1 + 0x33) = 0;
  *(undefined1 *)(param_1 + 0x3b) = 0;
  *(undefined1 *)(param_1 + 0x2e) = 0;
  param_1[0x2d] = 0;
  param_1[0x44] = 0x3f800000;
  param_1[0x43] = 0;
  param_1[0x46] = 0x3f80000000000000;
  param_1[0x45] = 0;
  param_1[0x40] = 0;
  param_1[0x3f] = 0x3f800000;
  param_1[0x42] = 0;
  param_1[0x41] = 0x3f80000000000000;
  *(undefined1 *)(param_1 + 0x47) = 0;
  param_1[0x49] = 0;
  param_1[0x48] = 0;
  param_1[0x4a] = 3000;
  param_1[0x4c] = 0;
  param_1[0x4b] = 0;
  puVar3 = (undefined8 *)0xe8;
  __Znwm();
  puVar3[1] = 0x40b3880000000000;
  *puVar3 = 3000;
  *(undefined1 *)(puVar3 + 0x10) = 0;
  *(undefined1 *)(puVar3 + 0x11) = 0;
  *(undefined1 *)(puVar3 + 0x1b) = 0;
  puVar3[4] = 0;
  puVar3[5] = 0;
  puVar3[3] = 0;
  *(undefined1 *)(puVar3 + 6) = 0;
  puVar3[0x1c] = 0x8000000000000000;
  lVar4 = *plVar5;
  *plVar5 = (long)puVar3;
  if (lVar4 != 0) {
    FUN_10a84c1d4(lVar4);
  }
  puVar3 = (undefined8 *)0xe8;
  __Znwm();
  puVar3[3] = 0;
  puVar3[2] = 0;
  puVar3[5] = 0;
  puVar3[4] = 0;
  puVar3[0x19] = 0;
  puVar3[0x18] = 0;
  puVar3[0x1b] = 0;
  puVar3[0x1a] = 0;
  puVar3[0x15] = 0;
  puVar3[0x14] = 0;
  puVar3[0x17] = 0;
  puVar3[0x16] = 0;
  puVar3[0x11] = 0;
  puVar3[0x10] = 0;
  puVar3[0x13] = 0;
  puVar3[0x12] = 0;
  puVar3[0xd] = 0;
  puVar3[0xc] = 0;
  puVar3[0xf] = 0;
  puVar3[0xe] = 0;
  puVar3[9] = 0;
  puVar3[8] = 0;
  puVar3[0xb] = 0;
  puVar3[10] = 0;
  puVar3[7] = 0;
  puVar3[6] = 0;
  *puVar3 = 3000;
  puVar3[1] = 0x40b3880000000000;
  puVar3[4] = 0;
  puVar3[5] = 0;
  puVar3[3] = 0;
  *(undefined1 *)(puVar3 + 6) = 0;
  puVar3[0x1c] = 0x8000000000000000;
  lVar4 = param_1[0x1b];
  param_1[0x1b] = puVar3;
  if (lVar4 != 0) {
    FUN_10a84c1d4(lVar4);
  }
  lVar4 = *(long *)(param_1[1] + 0x960);
  *(undefined4 *)(param_1 + 6) = *(undefined4 *)(lVar4 + 0x2c0);
  FUN_10a6e46f8(auStack_70,lVar4,2);
  FUN_10a6e47d0(param_1 + 0x4b,auStack_70);
  if (plStack_68 != (long *)0x0) {
    plVar5 = plStack_68 + 1;
    do {
      lVar4 = *plVar5;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar2) {
        *plVar5 = lVar4 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar4 == 0) {
      (**(code **)(*plStack_68 + 0x10))(plStack_68);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_68);
    }
  }
  return param_1;
}



/* Entry: 10a8284dc; end: 10a82858f;  */

undefined8 * FUN_10a8284dc(undefined8 *param_1)

{
  long lVar1;
  long *plVar2;
  
  *param_1 = &PTR_FUN_110c20bc8;
  FUN_10a71426c(param_1 + 0x4b);
  func_0x00010a838f6c(param_1 + 0x2b);
  func_0x00010a71b1fc(param_1 + 0x28,param_1[0x29]);
  FUN_10a839050(param_1 + 0x25);
  func_0x00010a71b1fc(param_1 + 0x22,param_1[0x23]);
  FUN_10a839050(param_1 + 0x1f);
  func_0x00010a05a86c(param_1 + 0x1d);
  lVar1 = param_1[0x1b];
  param_1[0x1b] = 0;
  if (lVar1 != 0) {
    FUN_10a84c1d4();
  }
  lVar1 = param_1[0x1a];
  param_1[0x1a] = 0;
  if (lVar1 != 0) {
    FUN_10a84c1d4();
  }
  FUN_10a838e84(param_1 + 0xf);
  plVar2 = (long *)param_1[7];
  param_1[7] = 0;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 8))();
  }
  FUN_10a0772f0(param_1 + 3);
  return param_1;
}



/* Entry: 10a828590; end: 10a828593;  */

undefined8 * FUN_10a828590(undefined8 *param_1)

{
  long lVar1;
  long *plVar2;
  
  *param_1 = &PTR_FUN_110c20bc8;
  FUN_10a71426c(param_1 + 0x4b);
  func_0x00010a838f6c(param_1 + 0x2b);
  func_0x00010a71b1fc(param_1 + 0x28,param_1[0x29]);
  FUN_10a839050(param_1 + 0x25);
  func_0x00010a71b1fc(param_1 + 0x22,param_1[0x23]);
  FUN_10a839050(param_1 + 0x1f);
  func_0x00010a05a86c(param_1 + 0x1d);
  lVar1 = param_1[0x1b];
  param_1[0x1b] = 0;
  if (lVar1 != 0) {
    FUN_10a84c1d4();
  }
  lVar1 = param_1[0x1a];
  param_1[0x1a] = 0;
  if (lVar1 != 0) {
    FUN_10a84c1d4();
  }
  FUN_10a838e84(param_1 + 0xf);
  plVar2 = (long *)param_1[7];
  param_1[7] = 0;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 8))();
  }
  FUN_10a0772f0(param_1 + 3);
  return param_1;
}



/* Entry: 10a828594; end: 10a8285a7;  */

void FUN_10a828594(void)

{
  FUN_10a8284dc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a8285a8; end: 10a8286b3;  */

void FUN_10a8285a8(long *param_1,long param_2,undefined8 param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  undefined8 uStack_48;
  undefined8 uStack_40;
  long *plStack_38;
  
  uStack_40 = 0;
  plStack_38 = (long *)0x0;
  FUN_10a825df8(*(undefined8 *)(param_2 + 0x18),&uStack_40);
  lVar4 = 0x268;
  __Znwm();
  FUN_10a8281d0();
  if (*(long *)(param_2 + 0x38) != 0) {
    FUN_10a82603c(&uStack_48,*(long *)(param_2 + 0x38),param_3);
    plVar5 = *(long **)(lVar4 + 0x38);
    *(undefined8 *)(lVar4 + 0x38) = uStack_48;
    if (plVar5 != (long *)0x0) {
      (**(code **)(*plVar5 + 8))();
    }
  }
  plVar5 = plStack_38;
  *param_1 = lVar4;
  if (plStack_38 != (long *)0x0) {
    plVar1 = plStack_38 + 1;
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
      (**(code **)(*plStack_38 + 0x10))(plStack_38);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
    }
  }
  return;
}



/* Entry: 10a8286b4; end: 10a829423;  */

/* WARNING: Removing unreachable block (ram,0x00010a828bc0) */
/* WARNING: Removing unreachable block (ram,0x00010a828bec) */

void FUN_10a8286b4(long *****param_1,long *param_2)

{
  long *plVar1;
  byte bVar2;
  char cVar3;
  bool bVar4;
  code *pcVar5;
  long ***ppplVar6;
  long *****ppppplVar7;
  long *****ppppplVar8;
  undefined8 *puVar9;
  undefined8 in_x6;
  undefined8 in_x7;
  int iVar10;
  ulong uVar11;
  long ****pppplVar12;
  long lVar13;
  long ****pppplVar14;
  ulong uVar15;
  uint uVar16;
  long ****pppplVar17;
  long ****pppplVar18;
  long ****pppplVar19;
  long ****pppplVar20;
  float fVar21;
  float fVar22;
  long ****pppplVar23;
  long ***ppplVar24;
  long ***ppplVar25;
  long ***ppplVar26;
  long ***ppplVar27;
  long ***ppplVar28;
  long ****pppplStack_1d8;
  long **pplStack_1d0;
  undefined7 uStack_1c8;
  char cStack_1c1;
  long ***ppplStack_1c0;
  undefined4 uStack_1b8;
  undefined4 uStack_1b4;
  undefined4 uStack_1b0;
  undefined4 uStack_1ac;
  undefined4 uStack_1a8;
  undefined1 auStack_1a0 [24];
  byte bStack_188;
  long ****pppplStack_180;
  long **pplStack_178;
  long **pplStack_170;
  long ***ppplStack_168;
  long **pplStack_160;
  long **pplStack_158;
  long **pplStack_150;
  long ****pppplStack_148;
  long **pplStack_140;
  long **pplStack_138;
  long ***ppplStack_130;
  long **pplStack_128;
  long **pplStack_120;
  long **pplStack_118;
  long ****pppplStack_110;
  long ***ppplStack_108;
  long **pplStack_100;
  long ***ppplStack_f8;
  long **pplStack_e8;
  long **pplStack_e0;
  long **pplStack_d8;
  long ***ppplStack_d0;
  long ***ppplStack_c8;
  long ***ppplStack_c0;
  undefined8 uStack_b8;
  long ***ppplStack_b0;
  long ****pppplStack_a8;
  long ****pppplStack_a0;
  long **pplStack_98;
  long **pplStack_90;
  long ***ppplStack_88;
  long **pplStack_80;
  long **pplStack_78;
  long **pplStack_70;
  long ****pppplStack_68;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pppplVar17 = (long ****)param_2[1];
  pppplVar23 = (long ****)*param_2;
  bVar2 = *(byte *)(param_2 + 2);
  *(byte *)(param_1 + 0xb) = bVar2;
  param_1[10] = pppplVar17;
  param_1[9] = pppplVar23;
  ppppplVar7 = param_1;
  if ((bVar2 & 1) != 0) {
    __ZNSt3__16chrono12steady_clock3nowEv();
    if (((long)ppppplVar7 <= (long)param_1[5]) && (*(char *)(param_1 + 0xe) == '\x01')) {
      if (((ulong)param_1[0xb] & 1) == 0) goto LAB_10a82920c;
      ppppplVar7 = param_1 + 0x1c;
      func_0x000109472d58(ppppplVar7,param_1 + 9,param_1 + 0xc);
      if ((double)pppplVar23 < (double)*(float *)(param_1 + 6)) goto LAB_10a828928;
    }
    __ZNSt3__16chrono12steady_clock3nowEv();
    fVar21 = *(float *)((long)param_1[1][300] + 0x2c4);
    fVar22 = (float)(int)fVar21;
    uVar11 = (ulong)(int)fVar21;
    uVar15 = uVar11 + 1;
    fVar21 = fVar22 - fVar22;
    fVar22 = (float)(long)uVar15 - fVar22;
    uVar16 = 0;
    if (fVar21 != fVar22) {
      uVar16 = 0xffffff81;
    }
    if (fVar22 < fVar21) {
      uVar16 = 1;
    }
    if (fVar21 < fVar22) {
      uVar16 = 0xffffffff;
    }
    if ((uVar16 != 1) && (uVar15 = uVar11, (uVar16 & 0xff) != 0xff)) {
      uVar15 = (uVar11 & 1) + uVar11;
    }
    param_1[5] = (long ****)(ppppplVar7 + uVar15 * 125000000);
    param_1[0xd] = param_1[10];
    param_1[0xc] = param_1[9];
    *(undefined1 *)(param_1 + 0xe) = *(undefined1 *)(param_1 + 0xb);
    if (((ulong)param_1[0xb] & 1) == 0) goto LAB_10a82920c;
    pppplStack_180 = (long ****)((double)param_1[10] + -0.0018);
    pplStack_178 = (long **)((double)param_1[9] + -0.0018);
    pplStack_170 = (long **)((double)param_1[10] + 0.0018);
    pppplVar23 = (long ****)((double)param_1[9] + 0.0018);
    ppplVar6 = param_1[1][300];
    ppplStack_168 = (long ***)pppplVar23;
    FUN_10a6ebc9c(&pppplStack_1d8,ppplVar6,0x40,&pppplStack_180,ppplVar6 + 0x19);
    pppplVar17 = param_1[0x20];
    if (pppplVar17 < param_1[0x21]) {
      *pppplVar17 = (long ***)pppplStack_1d8;
      param_1[0x20] = pppplVar17 + 1;
    }
    else {
      ppppplVar7 = param_1 + 0x1f;
      FUN_10a83926c(ppppplVar7,&pppplStack_1d8);
      param_1[0x20] = (long ****)ppppplVar7;
      if ((long *****)pppplStack_1d8 != (long *****)0x0) {
        ppppplVar7 = (long *****)(pppplStack_1d8 + 1);
        do {
          pppplVar17 = *ppppplVar7;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(ppppplVar7,0x10);
          if (bVar4) {
            *ppppplVar7 = (long ****)((long)pppplVar17 + -4);
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (((ulong)pppplVar17 & 0x1fffffffc) == 4) {
          do {
            pppplVar17 = *ppppplVar7;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(ppppplVar7,0x10);
            if (bVar4) {
              *ppppplVar7 = (long ****)((long)pppplVar17 + -1);
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if ((long ****)((long)pppplVar17 + -1) == (long ****)0x0) {
            (*(code *)(*pppplStack_1d8)[1])();
          }
        }
      }
    }
    ppppplVar7 = (long *****)param_1[1][300];
    FUN_10a6ebc9c(&pppplStack_1d8,ppppplVar7,0x41,&pppplStack_180,ppppplVar7 + 0x1c);
    pppplVar17 = param_1[0x26];
    if (pppplVar17 < param_1[0x27]) {
      *pppplVar17 = (long ***)pppplStack_1d8;
      param_1[0x26] = pppplVar17 + 1;
    }
    else {
      ppppplVar7 = param_1 + 0x25;
      FUN_10a83926c(ppppplVar7,&pppplStack_1d8);
      param_1[0x26] = (long ****)ppppplVar7;
      ppppplVar7 = (long *****)pppplStack_1d8;
      if ((long *****)pppplStack_1d8 != (long *****)0x0) {
        ppppplVar8 = (long *****)(pppplStack_1d8 + 1);
        do {
          pppplVar17 = *ppppplVar8;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(ppppplVar8,0x10);
          if (bVar4) {
            *ppppplVar8 = (long ****)((long)pppplVar17 + -4);
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (((ulong)pppplVar17 & 0x1fffffffc) == 4) {
          do {
            pppplVar17 = *ppppplVar8;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(ppppplVar8,0x10);
            if (bVar4) {
              *ppppplVar8 = (long ****)((long)pppplVar17 + -1);
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if ((long ****)((long)pppplVar17 + -1) == (long ****)0x0) {
            (*(code *)(*pppplStack_1d8)[1])();
          }
        }
      }
    }
  }
LAB_10a828928:
  if ((param_1[0x24] == (long ****)0x0) || (*(char *)(param_1 + 0xb) != '\x01')) {
LAB_10a829088:
    if ((*(char *)(param_1 + 0xb) == '\x01') && (*(char *)(param_1 + 0x19) == '\x01')) {
      func_0x000109472d58(param_1 + 0x1c,param_1 + 0x12,param_1 + 9);
      iVar10 = (int)(double)pppplVar23;
      *(int *)((long)param_1 + 0x44) = iVar10;
      if (*(int *)(param_1 + 8) < iVar10) {
        pppplVar23 = param_1[1];
        func_0x000107c2b054(&pppplStack_1d8,&UNK_10f67b12a);
        if (pppplVar23 != (long ****)0x0) {
          ppplVar6 = pppplVar23[0x11b];
          func_0x000107c2b054(&pppplStack_180,"true");
          FUN_10a76bdb0(ppplVar6,&pppplStack_1d8,&pppplStack_180);
          if ((long)pplStack_170 < 0) {
            __ZdlPv(pppplStack_180);
          }
        }
        if (cStack_1c1 < '\0') {
          __ZdlPv(pppplStack_1d8);
        }
        if (((ulong)param_1[0x19] & 1) == 0) {
          FUN_10a04f808();
          goto LAB_10a82920c;
        }
        iVar10 = *(int *)((long)param_1 + 0x44);
      }
      if ((double)iVar10 <= (double)param_1[0x14]) {
        FUN_10a6e9e98(param_1[0x4b]);
      }
      else {
        FUN_10a6e9d6c();
      }
    }
    FUN_10a829424(param_1);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
      return;
    }
    ___stack_chk_fail();
  }
  else {
    pppplVar17 = param_1[0x1a];
    __ZNSt3__16chrono12steady_clock3nowEv();
    func_0x000109472f14(pppplVar17,param_1 + 9,ppppplVar7);
    if ((int)pppplVar17 == 0) goto LAB_10a829088;
    if ((bRam000000011330a9e8 >> 2 & 1) != 0) {
      func_0x00010ae06f08(1,4,&UNK_10f67b144,&UNK_10f67b5b3,0x36b,&UNK_10f67b61e);
    }
    func_0x0001094735c0(&pppplStack_1d8,param_1[0x1a] + 6);
    if (bStack_188 != 1) {
LAB_10a829080:
      FUN_10a838e84(&pppplStack_1d8);
      goto LAB_10a829088;
    }
    if ((bRam000000011330a9e8 >> 2 & 1) != 0) {
      ppppplVar7 = (long *****)pppplStack_1d8;
      if (-1 < cStack_1c1) {
        ppppplVar7 = &pppplStack_1d8;
      }
      func_0x00010ae06f08(1,4,&UNK_10f67b144,&UNK_10f67b5b3,0x371,&UNK_10f67b63c,in_x6,in_x7,
                          ppppplVar7);
      if ((bStack_188 & 1) == 0) goto LAB_10a82920c;
      if ((bRam000000011330a9e8 >> 2 & 1) != 0) {
        ppppplVar7 = (long *****)pppplStack_1d8;
        if (-1 < cStack_1c1) {
          ppppplVar7 = &pppplStack_1d8;
        }
        func_0x00010ae06f08(1,4,&UNK_10f67b144,&UNK_10f67b655,0x378,&UNK_10f67b6da,in_x6,in_x7,
                            ppppplVar7);
      }
    }
    if (*(char *)(param_1 + 0x19) == '\x01') {
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
                (param_1 + 0xf,&pppplStack_1d8);
      param_1[0x13] = (long ****)CONCAT44(uStack_1b4,uStack_1b8);
      param_1[0x12] = (long ****)ppplStack_1c0;
      *(ulong *)((long)param_1 + 0xa4) = CONCAT44(uStack_1a8,uStack_1ac);
      *(ulong *)((long)param_1 + 0x9c) = CONCAT44(uStack_1b0,uStack_1b4);
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
                (param_1 + 0x16,auStack_1a0);
    }
    else {
      FUN_10a8390f4(param_1 + 0xf,&pppplStack_1d8);
      *(undefined1 *)(param_1 + 0x19) = 1;
    }
    ppppplVar7 = param_1 + 0x22;
    FUN_10a6ec49c(ppppplVar7,&pppplStack_1d8);
    pppplVar17 = *ppppplVar7;
    (*(code *)(*pppplVar17)[2])(&pppplStack_a0,pppplVar17);
    pppplVar23 = pppplStack_a0;
    if ((((uint)pppplStack_a0[2] >> 1 & 1) != 0) && (((uint)pppplStack_a0[2] >> 5 & 1) == 0)) {
      if (((ulong)pppplStack_a0[0x37] & 1) == 0) goto LAB_10a82920c;
      ppppplVar7 = (long *****)(pppplStack_a0 + 1);
      do {
        pppplVar12 = *ppppplVar7;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(ppppplVar7,0x10);
        if (bVar4) {
          *ppppplVar7 = (long ****)((long)pppplVar12 + -4);
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (((ulong)pppplVar12 & 0x1fffffffc) == 4) {
        do {
          pppplVar12 = *ppppplVar7;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(ppppplVar7,0x10);
          if (bVar4) {
            *ppppplVar7 = (long ****)((long)pppplVar12 + -1);
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if ((long ****)((long)pppplVar12 + -1) == (long ****)0x0) {
          (*(code *)(*pppplStack_a0)[1])(pppplStack_a0);
        }
      }
      (*(code *)(*pppplVar17)[8])(&ppplStack_d0,pppplVar17,0x40);
      uStack_b8 = (long ****)CONCAT17(5,(undefined7)uStack_b8);
      ppplStack_c8 = (long ***)CONCAT26(ppplStack_c8._6_2_,0x5f656c6974);
      FUN_10a82bcc0(&pppplStack_180,pppplVar23 + 0x31);
      if (((ulong)ppplStack_168 & 1) == 0) goto LAB_10a82920c;
      ppplVar6 = (long ***)pplStack_178;
      ppppplVar7 = (long *****)pppplStack_180;
      if (-1 < (long)pplStack_170) {
        ppplVar6 = (long ***)((ulong)pplStack_170 >> 0x38);
        ppppplVar7 = &pppplStack_180;
      }
      pppplVar17 = &ppplStack_c8;
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                (pppplVar17,ppppplVar7,ppplVar6);
      pplStack_98 = (long **)pppplVar17[1];
      pppplStack_a0 = (long ****)*pppplVar17;
      pplStack_90 = (long **)pppplVar17[2];
      pppplVar17[1] = (long ***)0x0;
      pppplVar17[2] = (long ***)0x0;
      *pppplVar17 = (long ***)0x0;
      FUN_10a82be98(&pplStack_e8,&pppplStack_a0);
      if (((char)ppplStack_168 == '\x01') && ((long)pplStack_170 < 0)) {
        __ZdlPv(pppplStack_180);
      }
      FUN_10a82bf50(&pppplStack_180,pppplVar23 + 0x31);
      if (((ulong)pplStack_140 & 1) == 0) goto LAB_10a82920c;
      pplStack_98 = pplStack_178;
      pppplStack_a0 = pppplStack_180;
      ppplStack_88 = ppplStack_168;
      pplStack_90 = pplStack_170;
      pplStack_78 = pplStack_158;
      pplStack_80 = pplStack_160;
      pppplStack_68 = pppplStack_148;
      pplStack_70 = pplStack_150;
      if (cStack_1c1 < '\0') {
        func_0x000107c3192c(&pppplStack_180,pppplStack_1d8,pplStack_1d0);
      }
      else {
        pplStack_178 = pplStack_1d0;
        pppplStack_180 = pppplStack_1d8;
        pplStack_170 = (long **)CONCAT17(cStack_1c1,uStack_1c8);
      }
      ppplStack_168 = ppplStack_d0;
      if ((long ****)ppplStack_d0 != (long ****)0x0) {
        pppplVar23 = (long ****)(ppplStack_d0 + 1);
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(pppplVar23,0x10);
          if (bVar4) {
            *pppplVar23 = (long ***)((long)*pppplVar23 + 4);
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
      pplStack_158 = pplStack_e0;
      pplStack_160 = pplStack_e8;
      pplStack_140 = pplStack_98;
      pppplStack_148 = pppplStack_a0;
      ppplStack_130 = ppplStack_88;
      pplStack_138 = pplStack_90;
      pplStack_120 = pplStack_78;
      pplStack_128 = pplStack_80;
      pplStack_150 = pplStack_d8;
      pppplStack_110 = pppplStack_68;
      pplStack_118 = pplStack_70;
      pplStack_100 = (long **)CONCAT44(uStack_1b4,uStack_1b8);
      ppplStack_108 = ppplStack_1c0;
      pppplVar23 = (long ****)CONCAT44(uStack_1ac,uStack_1b0);
      pppplVar18 = param_1[0x2b];
      pppplVar12 = param_1[0x2c];
      pppplVar17 = pppplVar18;
      ppplStack_f8 = (long ***)pppplVar23;
      if (pppplVar18 == pppplVar12) {
LAB_10a828d14:
        if (pppplVar17 == pppplVar12) goto LAB_10a828d64;
        pppplVar18 = pppplVar17 + 0x12;
        if (pppplVar18 != pppplVar12) {
          FUN_10a839470(pppplVar17,pppplVar18);
          pppplVar19 = pppplVar18;
          for (pppplVar17 = pppplVar17 + 0x24; pppplVar17 != pppplVar12;
              pppplVar17 = pppplVar17 + 0x12) {
            pppplVar20 = pppplVar17;
            if (pppplVar18 != pppplVar19) {
              pppplVar20 = pppplVar19;
            }
            FUN_10a839470(pppplVar18,pppplVar17);
            pppplVar18 = pppplVar18 + 0x12;
            pppplVar19 = pppplVar20;
          }
          pppplVar17 = pppplVar19;
          if (pppplVar18 != pppplVar19) {
            do {
              while( true ) {
                pppplVar20 = pppplVar17;
                FUN_10a839470(pppplVar18,pppplVar19);
                pppplVar18 = pppplVar18 + 0x12;
                pppplVar19 = pppplVar19 + 0x12;
                if (pppplVar19 == pppplVar12) break;
                pppplVar17 = pppplVar19;
                if (pppplVar18 != pppplVar20) {
                  pppplVar17 = pppplVar20;
                }
              }
              pppplVar19 = pppplVar20;
              pppplVar17 = pppplVar20;
            } while (pppplVar18 != pppplVar20);
          }
        }
      }
      else {
        ppplVar6 = (long ***)pplStack_178;
        ppppplVar7 = (long *****)pppplStack_180;
        if (-1 < (long)pplStack_170) {
          ppplVar6 = (long ***)((ulong)pplStack_170 >> 0x38);
          ppppplVar7 = &pppplStack_180;
        }
        do {
          bVar2 = *(byte *)((long)pppplVar17 + 0x17);
          ppplVar24 = pppplVar17[1];
          if (-1 < (char)bVar2) {
            ppplVar24 = (long ***)(ulong)bVar2;
          }
          if (ppplVar6 == ppplVar24) {
            pppplVar19 = (long ****)*pppplVar17;
            if (-1 < (char)bVar2) {
              pppplVar19 = pppplVar17;
            }
            ppppplVar8 = ppppplVar7;
            _memcmp(ppppplVar7,pppplVar19,ppplVar6);
            if ((int)ppppplVar8 == 0) goto LAB_10a828d14;
          }
          pppplVar17 = pppplVar17 + 0x12;
        } while (pppplVar17 != pppplVar12);
LAB_10a828d64:
        if (pppplVar12 < param_1[0x2d]) {
          if ((long)pplStack_170 < 0) {
            func_0x000107c3192c(pppplVar12,pppplStack_180,pplStack_178);
          }
          else {
            pppplVar12[2] = (long ***)pplStack_170;
            pppplVar12[1] = (long ***)pplStack_178;
            *pppplVar12 = (long ***)pppplStack_180;
          }
          pppplVar12[3] = ppplStack_168;
          if ((long ****)ppplStack_168 != (long ****)0x0) {
            pppplVar23 = (long ****)(ppplStack_168 + 1);
            do {
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(pppplVar23,0x10);
              if (bVar4) {
                *pppplVar23 = (long ***)((long)*pppplVar23 + 4);
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
          }
          pppplVar12[7] = (long ***)pppplStack_148;
          pppplVar12[6] = (long ***)pplStack_150;
          pppplVar12[9] = (long ***)pplStack_138;
          pppplVar12[8] = (long ***)pplStack_140;
          pppplVar12[5] = (long ***)pplStack_158;
          pppplVar12[4] = (long ***)pplStack_160;
          pppplVar12[0xf] = ppplStack_108;
          pppplVar12[0xe] = (long ***)pppplStack_110;
          pppplVar12[0x11] = ppplStack_f8;
          pppplVar12[0x10] = (long ***)pplStack_100;
          pppplVar12[0xb] = (long ***)pplStack_128;
          pppplVar12[10] = ppplStack_130;
          pppplVar12[0xd] = (long ***)pplStack_118;
          pppplVar12[0xc] = (long ***)pplStack_120;
          pppplVar12 = pppplVar12 + 0x12;
          param_1[0x2c] = pppplVar12;
          pppplVar23 = (long ****)ppplStack_130;
        }
        else {
          uVar15 = ((long)pppplVar12 - (long)pppplVar18 >> 4) * -0x71c71c71c71c71c7 + 1;
          if (0x1c71c71c71c71c7 < uVar15) {
            FUN_10a839630();
            goto LAB_10a82920c;
          }
          ppppplVar7 = param_1 + 0x2b;
          lVar13 = (long)param_1[0x2d] - (long)pppplVar18 >> 4;
          uVar11 = lVar13 * 0x1c71c71c71c71c72;
          if (uVar11 < uVar15 || uVar11 - uVar15 == 0) {
            uVar11 = uVar15;
          }
          if (0xe38e38e38e38e2 < (ulong)(lVar13 * -0x71c71c71c71c71c7)) {
            uVar11 = 0x1c71c71c71c71c7;
          }
          pppplStack_a8 = (long ****)ppppplVar7;
          if (uVar11 == 0) {
            ppplVar6 = (long ***)0x0;
          }
          else {
            if (0x1c71c71c71c71c7 < uVar11) {
              func_0x000109ffded8();
              goto LAB_10a82920c;
            }
            ppplVar6 = (long ***)(uVar11 * 0x90);
            __Znwm();
          }
          plVar1 = (long *)((long)ppplVar6 + ((long)pppplVar12 - (long)pppplVar18));
          pppplVar17 = (long ****)(ppplVar6 + uVar11 * 0x12);
          ppplStack_c8 = ppplVar6;
          ppplStack_c0 = (long ***)plVar1;
          uStack_b8 = (long ****)plVar1;
          ppplStack_b0 = (long ***)pppplVar17;
          if ((long)pplStack_170 < 0) {
            func_0x000107c3192c(plVar1,pppplStack_180,pplStack_178);
          }
          else {
            plVar1[1] = (long)pplStack_178;
            *plVar1 = (long)pppplStack_180;
            plVar1[2] = (long)pplStack_170;
          }
          plVar1[3] = (long)ppplStack_168;
          if ((long ****)ppplStack_168 != (long ****)0x0) {
            pppplVar23 = (long ****)(ppplStack_168 + 1);
            do {
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(pppplVar23,0x10);
              if (bVar4) {
                *pppplVar23 = (long ***)((long)*pppplVar23 + 4);
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
          }
          plVar1[0xd] = (long)pplStack_118;
          plVar1[0xc] = (long)pplStack_120;
          plVar1[0xf] = (long)ppplStack_108;
          plVar1[0xe] = (long)pppplStack_110;
          plVar1[0x11] = (long)ppplStack_f8;
          plVar1[0x10] = (long)pplStack_100;
          plVar1[5] = (long)pplStack_158;
          plVar1[4] = (long)pplStack_160;
          plVar1[7] = (long)pppplStack_148;
          plVar1[6] = (long)pplStack_150;
          plVar1[9] = (long)pplStack_138;
          plVar1[8] = (long)pplStack_140;
          plVar1[0xb] = (long)pplStack_128;
          plVar1[10] = (long)ppplStack_130;
          pppplVar18 = param_1[0x2b];
          pppplVar20 = param_1[0x2c];
          pppplVar19 = (long ****)((long)plVar1 + ((long)pppplVar18 - (long)pppplVar20));
          pppplVar12 = pppplVar18;
          pppplVar14 = pppplVar19;
          pppplVar23 = (long ****)ppplStack_130;
          if ((long)pppplVar18 - (long)pppplVar20 != 0) {
            do {
              ppplVar24 = pppplVar12[1];
              ppplVar6 = *pppplVar12;
              pppplVar14[2] = pppplVar12[2];
              pppplVar14[1] = ppplVar24;
              *pppplVar14 = ppplVar6;
              pppplVar12[1] = (long ***)0x0;
              pppplVar12[2] = (long ***)0x0;
              *pppplVar12 = (long ***)0x0;
              pppplVar14[3] = pppplVar12[3];
              pppplVar12[3] = (long ***)0x0;
              ppplVar24 = pppplVar12[5];
              ppplVar6 = pppplVar12[4];
              ppplVar25 = pppplVar12[6];
              ppplVar27 = pppplVar12[9];
              ppplVar26 = pppplVar12[8];
              pppplVar14[7] = pppplVar12[7];
              pppplVar14[6] = ppplVar25;
              pppplVar14[9] = ppplVar27;
              pppplVar14[8] = ppplVar26;
              pppplVar14[5] = ppplVar24;
              pppplVar14[4] = ppplVar6;
              ppplVar6 = pppplVar12[0xb];
              pppplVar23 = (long ****)pppplVar12[10];
              ppplVar25 = pppplVar12[0xd];
              ppplVar24 = pppplVar12[0xc];
              ppplVar26 = pppplVar12[0xe];
              ppplVar28 = pppplVar12[0x11];
              ppplVar27 = pppplVar12[0x10];
              pppplVar14[0xf] = pppplVar12[0xf];
              pppplVar14[0xe] = ppplVar26;
              pppplVar14[0x11] = ppplVar28;
              pppplVar14[0x10] = ppplVar27;
              pppplVar14[0xb] = ppplVar6;
              pppplVar14[10] = (long ***)pppplVar23;
              pppplVar14[0xd] = ppplVar25;
              pppplVar14[0xc] = ppplVar24;
              pppplVar12 = pppplVar12 + 0x12;
              pppplVar14 = pppplVar14 + 0x12;
            } while (pppplVar12 != pppplVar20);
            do {
              FUN_10a838fd4(pppplVar18);
              pppplVar18 = pppplVar18 + 0x12;
            } while (pppplVar18 != pppplVar20);
            pppplVar18 = *ppppplVar7;
            pppplVar17 = (long ****)ppplStack_b0;
          }
          pppplVar12 = (long ****)(plVar1 + 0x12);
          param_1[0x2b] = pppplVar19;
          param_1[0x2c] = pppplVar12;
          ppplStack_b0 = (long ***)param_1[0x2d];
          param_1[0x2d] = pppplVar17;
          ppplStack_c8 = (long ***)pppplVar18;
          ppplStack_c0 = (long ***)pppplVar18;
          uStack_b8 = pppplVar18;
          FUN_10a839644(&ppplStack_c8);
        }
        param_1[0x2c] = pppplVar12;
      }
      if ((long ****)ppplStack_168 != (long ****)0x0) {
        pppplVar17 = (long ****)(ppplStack_168 + 1);
        do {
          ppplVar6 = *pppplVar17;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(pppplVar17,0x10);
          if (bVar4) {
            *pppplVar17 = (long ***)((long)ppplVar6 + -4);
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (((ulong)ppplVar6 & 0x1fffffffc) == 4) {
          do {
            ppplVar6 = *pppplVar17;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(pppplVar17,0x10);
            if (bVar4) {
              *pppplVar17 = (long ***)((long)ppplVar6 + -1);
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if ((long ***)((long)ppplVar6 + -1) == (long ***)0x0) {
            (*(code *)(*ppplStack_168)[1])();
          }
        }
      }
      if ((long)pplStack_170 < 0) {
        __ZdlPv(pppplStack_180);
      }
      if ((long ****)ppplStack_d0 != (long ****)0x0) {
        pppplVar17 = (long ****)(ppplStack_d0 + 1);
        do {
          ppplVar6 = *pppplVar17;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(pppplVar17,0x10);
          if (bVar4) {
            *pppplVar17 = (long ***)((long)ppplVar6 + -4);
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (((ulong)ppplVar6 & 0x1fffffffc) == 4) {
          do {
            ppplVar6 = *pppplVar17;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(pppplVar17,0x10);
            if (bVar4) {
              *pppplVar17 = (long ***)((long)ppplVar6 + -1);
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if ((long ***)((long)ppplVar6 + -1) == (long ***)0x0) {
            (*(code *)(*ppplStack_d0)[1])();
          }
        }
      }
      goto LAB_10a829080;
    }
  }
  if (((uint)pppplStack_a0[2] >> 5 & 1) == 0) {
    puVar9 = (undefined8 *)0x10;
    ___cxa_allocate_exception();
    __ZNSt13runtime_errorC2EPKc();
    *puVar9 = &PTR_DAT_110ae85c0;
    ___cxa_throw(puVar9,&PTR_DAT_110ae8598,&DAT_1092af9d8);
  }
  else {
    __ZNSt13exception_ptrC1ERKS_(&pppplStack_180,pppplStack_a0 + 0x12);
    func_0x0001092af97c(&pppplStack_180);
  }
LAB_10a82920c:
                    /* WARNING: Does not return */
  pcVar5 = (code *)SoftwareBreakpoint(1,0x10a829210);
  (*pcVar5)();
}



/* Entry: 10a829424; end: 10a82babb;  */

/* WARNING: Removing unreachable block (ram,0x00010a82ada4) */
/* WARNING: Removing unreachable block (ram,0x00010a82a0fc) */
/* WARNING: Removing unreachable block (ram,0x00010a82b338) */

void FUN_10a829424(long *******param_1)

{
  long ****pppplVar1;
  ulong *puVar2;
  long *plVar3;
  long ****pppplVar4;
  char cVar5;
  char cVar6;
  undefined8 *******pppppppuVar7;
  long *plVar8;
  long ***ppplVar9;
  undefined5 uVar10;
  undefined1 uVar11;
  undefined2 uVar12;
  long *******ppppppplVar13;
  code *pcVar14;
  bool bVar15;
  long *******ppppppplVar16;
  long *****ppppplVar17;
  long ******pppppplVar18;
  long *******ppppppplVar19;
  undefined8 *puVar20;
  undefined8 *puVar21;
  undefined8 in_x6;
  undefined8 in_x7;
  ulong uVar22;
  long ****pppplVar23;
  long ***ppplVar24;
  long lVar25;
  long lVar26;
  long *******ppppppplVar27;
  long *******ppppppplVar28;
  long ******pppppplVar29;
  long *****ppppplVar30;
  uint uVar31;
  long ******pppppplVar32;
  undefined4 *puVar33;
  ulong uVar34;
  long *****ppppplVar35;
  undefined8 uVar36;
  long *****ppppplVar37;
  long *****ppppplVar38;
  long *****ppppplVar39;
  long *****ppppplVar40;
  long ******pppppplStack_550;
  long *****ppppplStack_548;
  long *****ppppplStack_540;
  long ******pppppplStack_538;
  long *****ppppplStack_530;
  long *****ppppplStack_528;
  long *****ppppplStack_520;
  long *****ppppplStack_518;
  long *****ppppplStack_510;
  long *****ppppplStack_508;
  long *****ppppplStack_500;
  long *****ppppplStack_4f8;
  long *****ppppplStack_4f0;
  long *****ppppplStack_4e8;
  long *****ppppplStack_4e0;
  long ****pppplStack_4d8;
  long ****pppplStack_4d0;
  long ****pppplStack_4c8;
  long *****ppppplStack_4b8;
  long ******pppppplStack_4b0;
  undefined8 uStack_4a8;
  undefined8 uStack_4a0;
  undefined8 uStack_498;
  long ******pppppplStack_490;
  long ***ppplStack_488;
  double dStack_480;
  double dStack_478;
  double dStack_470;
  double dStack_468;
  double dStack_460;
  double dStack_458;
  double dStack_450;
  double dStack_448;
  double dStack_440;
  double dStack_438;
  double dStack_430;
  double dStack_428;
  double dStack_420;
  double dStack_418;
  undefined1 auStack_408 [64];
  undefined8 uStack_3c8;
  undefined8 uStack_3c0;
  undefined8 uStack_3b8;
  undefined8 uStack_3b0;
  undefined8 uStack_3a8;
  undefined8 uStack_3a0;
  undefined8 uStack_398;
  undefined8 uStack_390;
  long *plStack_388;
  undefined8 uStack_380;
  long ***ppplStack_378;
  long *****ppppplStack_370;
  long *****ppppplStack_368;
  long ***ppplStack_360;
  long ***ppplStack_358;
  long ***ppplStack_350;
  long *****ppppplStack_348;
  undefined8 uStack_340;
  undefined5 uStack_338;
  undefined1 uStack_333;
  undefined2 uStack_332;
  undefined7 uStack_330;
  byte bStack_329;
  long *****ppppplStack_328;
  long *****ppppplStack_320;
  long *****ppppplStack_318;
  long *****ppppplStack_310;
  long *****ppppplStack_308;
  long *****ppppplStack_300;
  long *****ppppplStack_2f8;
  undefined4 uStack_2f0;
  undefined3 uStack_2ec;
  char cStack_2e9;
  undefined2 uStack_2e8;
  undefined1 uStack_2e6;
  undefined5 uStack_2e5;
  char cStack_2d1;
  undefined4 uStack_2d0;
  undefined4 uStack_2cc;
  ulong uStack_2c8;
  byte bStack_2b9;
  undefined4 uStack_2b8;
  undefined3 uStack_2b4;
  long ******pppppplStack_2b0;
  long *****ppppplStack_2a8;
  undefined8 uStack_2a0;
  long ****pppplStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  long ******pppppplStack_268;
  long *****ppppplStack_260;
  undefined4 uStack_258;
  undefined4 uStack_254;
  undefined8 ******ppppppuStack_250;
  ulong uStack_248;
  undefined8 uStack_240;
  undefined8 ******ppppppuStack_238;
  ulong uStack_230;
  undefined7 uStack_228;
  byte bStack_221;
  long *****ppppplStack_220;
  long *****ppppplStack_218;
  undefined8 uStack_210;
  long ******pppppplStack_200;
  long *****ppppplStack_1f8;
  undefined8 uStack_1f0;
  long *****ppppplStack_1e8;
  undefined4 uStack_1e0;
  undefined4 uStack_1dc;
  undefined4 uStack_1d8;
  undefined4 uStack_1d4;
  undefined4 uStack_1d0;
  undefined4 uStack_1cc;
  long *****ppppplStack_1c8;
  long *****ppppplStack_1c0;
  long *****ppppplStack_1b8;
  long *****ppppplStack_1b0;
  long *****ppppplStack_1a8;
  long *****ppppplStack_1a0;
  long *****ppppplStack_198;
  long ***ppplStack_190;
  long *****ppppplStack_188;
  long *****ppppplStack_180;
  long ***ppplStack_178;
  long ***ppplStack_170;
  long ***ppplStack_168;
  long *****ppppplStack_160;
  long ******pppppplStack_150;
  long *****ppppplStack_148;
  undefined8 uStack_140;
  long ****pppplStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  long *plStack_110;
  undefined8 uStack_108;
  long ***ppplStack_100;
  long *****ppppplStack_f8;
  long *****ppppplStack_f0;
  long ***ppplStack_e8;
  long ***ppplStack_e0;
  long ***ppplStack_d8;
  long *****ppppplStack_d0;
  undefined8 uStack_c0;
  undefined5 uStack_b8;
  undefined1 uStack_b3;
  undefined2 uStack_b2;
  undefined8 uStack_b0;
  long *****ppppplStack_a8;
  long ***ppplStack_a0;
  long ***ppplStack_98;
  long ***ppplStack_90;
  long *****ppppplStack_88;
  long lStack_78;
  
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppppppplVar16 = param_1 + 0x1f;
  pppppplVar32 = *ppppppplVar16;
  ppppppplVar28 = param_1;
  if (param_1[0x20] != pppppplVar32) {
    uVar34 = 0;
    ppppppplVar19 = param_1 + 0x22;
    do {
      if (((uint)pppppplVar32[uVar34][2] >> 1 & 1) == 0) {
        uVar34 = uVar34 + 1;
      }
      else {
        if ((ulong)((long)param_1[0x20] - (long)param_1[0x1f] >> 3) <= uVar34) goto LAB_10a82b584;
        pppppplVar32 = param_1[0x1f] + uVar34;
        func_0x0001092af8bc(pppppplVar32);
        ppppplVar17 = *pppppplVar32;
        if (((ulong)ppppplVar17[0x16] & 1) == 0) goto LAB_10a82b584;
        pppplVar4 = ppppplVar17[0x14];
        for (pppplVar23 = ppppplVar17[0x13]; pppplVar23 != pppplVar4; pppplVar23 = pppplVar23 + 5) {
          ppppplVar17 = param_1[1][300] + 0x19;
          FUN_10a6ec49c(ppppplVar17,pppplVar23);
          ppppplStack_1f8 = (long *****)ppppplVar17[1];
          pppppplStack_200 = (long ******)*ppppplVar17;
          if (ppppplVar17[1] != (long ****)0x0) {
            pppplVar1 = ppppplVar17[1] + 1;
            do {
              cVar5 = '\x01';
              bVar15 = (bool)ExclusiveMonitorPass(pppplVar1,0x10);
              if (bVar15) {
                *pppplVar1 = (long ***)((long)*pppplVar1 + 1);
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
          }
          ppppppplVar28 = ppppppplVar19;
          FUN_10a702db8(ppppppplVar19,&uStack_4a0,pppplVar23);
          pppppplVar32 = *ppppppplVar28;
          if (pppppplVar32 == (long ******)0x0) {
            pppppplVar32 = (long ******)0x48;
            __Znwm();
            uStack_4a8 = 0;
            ppppplStack_4b8 = (long *****)pppppplVar32;
            pppppplStack_4b0 = (long ******)ppppppplVar19;
            if (*(char *)((long)pppplVar23 + 0x17) < '\0') {
              func_0x000107c3192c(pppppplVar32 + 4,*pppplVar23,pppplVar23[1]);
            }
            else {
              ppppplVar30 = (long *****)pppplVar23[1];
              ppppplVar17 = (long *****)*pppplVar23;
              pppppplVar32[6] = (long *****)pppplVar23[2];
              pppppplVar32[5] = ppppplVar30;
              pppppplVar32[4] = ppppplVar17;
            }
            pppppplVar32[7] = (long *****)0x0;
            pppppplVar32[8] = (long *****)0x0;
            FUN_10a702e3c(ppppppplVar19,uStack_4a0,ppppppplVar28,pppppplVar32);
          }
          FUN_10a82babc(pppppplVar32 + 7,&pppppplStack_200);
          ppppplVar17 = ppppplStack_1f8;
          if ((long ******)ppppplStack_1f8 != (long ******)0x0) {
            pppppplVar32 = (long ******)(ppppplStack_1f8 + 1);
            do {
              ppppplVar30 = *pppppplVar32;
              cVar5 = '\x01';
              bVar15 = (bool)ExclusiveMonitorPass(pppppplVar32,0x10);
              if (bVar15) {
                *pppppplVar32 = (long *****)((long)ppppplVar30 + -1);
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
            if (ppppplVar30 == (long *****)0x0) {
              (*(code *)(*ppppplStack_1f8)[2])(ppppplStack_1f8);
              __ZNSt3__119__shared_weak_count14__release_weakEv(ppppplVar17);
            }
          }
        }
        pppppplStack_550 = (long ******)0x0;
        ppppplStack_548 = (long *****)0x0;
        ppppplStack_540 = (long *****)0x0;
        ppppppplVar28 = (long *******)*ppppppplVar19;
        while (ppppppplVar28 != param_1 + 0x23) {
          (*(code *)(*ppppppplVar28[7])[2])(&pppppplStack_490);
          pppppplVar32 = pppppplStack_490;
          if ((((uint)pppppplStack_490[2] >> 1 & 1) == 0) ||
             (((uint)pppppplStack_490[2] >> 5 & 1) != 0)) {
            if (((uint)pppppplStack_490[2] >> 5 & 1) == 0) {
              puVar21 = (undefined8 *)0x10;
              ___cxa_allocate_exception();
              __ZNSt13runtime_errorC2EPKc();
              *puVar21 = &PTR_DAT_110ae85c0;
              ___cxa_throw(puVar21,&PTR_DAT_110ae8598,&DAT_1092af9d8);
            }
            else {
              __ZNSt13exception_ptrC1ERKS_(&pppppplStack_150,pppppplStack_490 + 0x12);
              func_0x0001092af97c(&pppppplStack_150);
            }
            goto LAB_10a82b584;
          }
          if (((ulong)pppppplStack_490[0x37] & 1) == 0) goto LAB_10a82b584;
          if (*(char *)((long)pppppplStack_490 + 0xaf) < '\0') {
            func_0x000107c3192c(&pppppplStack_200,pppppplStack_490[0x13],pppppplStack_490[0x14]);
          }
          else {
            ppppplStack_1f8 = pppppplStack_490[0x14];
            pppppplStack_200 = (long ******)pppppplStack_490[0x13];
            uStack_1f0 = (long ******)pppppplStack_490[0x15];
          }
          ppppplStack_1e8 = pppppplVar32[0x16];
          uStack_1e0 = SUB84(pppppplVar32[0x17],0);
          uStack_1d4 = (undefined4)*(undefined8 *)((long)pppppplVar32 + 0xc4);
          uStack_1d0 = (undefined4)((ulong)*(undefined8 *)((long)pppppplVar32 + 0xc4) >> 0x20);
          uStack_1dc = (undefined4)*(undefined8 *)((long)pppppplVar32 + 0xbc);
          uStack_1d8 = (undefined4)((ulong)*(undefined8 *)((long)pppppplVar32 + 0xbc) >> 0x20);
          if (*(char *)((long)pppppplVar32 + 0xe7) < '\0') {
            func_0x000107c3192c(&ppppplStack_1c8,pppppplVar32[0x1a],pppppplVar32[0x1b]);
          }
          else {
            ppppplStack_1c0 = pppppplVar32[0x1b];
            ppppplStack_1c8 = pppppplVar32[0x1a];
            ppppplStack_1b8 = pppppplVar32[0x1c];
          }
          if (pppppplStack_490 != (long ******)0x0) {
            pppppplVar32 = pppppplStack_490 + 1;
            do {
              ppppplVar17 = *pppppplVar32;
              cVar5 = '\x01';
              bVar15 = (bool)ExclusiveMonitorPass(pppppplVar32,0x10);
              if (bVar15) {
                *pppppplVar32 = (long *****)((long)ppppplVar17 + -4);
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
            if (((ulong)ppppplVar17 & 0x1fffffffc) == 4) {
              do {
                ppppplVar17 = *pppppplVar32;
                cVar5 = '\x01';
                bVar15 = (bool)ExclusiveMonitorPass(pppppplVar32,0x10);
                if (bVar15) {
                  *pppppplVar32 = (long *****)((long)ppppplVar17 + -1);
                  cVar5 = ExclusiveMonitorsStatus();
                }
              } while (cVar5 != '\0');
              if ((long *****)((long)ppppplVar17 + -1) == (long *****)0x0) {
                (*(code *)(*pppppplStack_490)[1])();
              }
            }
          }
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
                    (&pppppplStack_200,ppppppplVar28 + 4);
          FUN_10a82bb20(&pppppplStack_550,&pppppplStack_200);
          if ((long)ppppplStack_1b8 < 0) {
            __ZdlPv(ppppplStack_1c8);
          }
          if ((long)uStack_1f0 < 0) {
            __ZdlPv(pppppplStack_200);
          }
          ppppppplVar13 = (long *******)ppppppplVar28[1];
          ppppppplVar27 = ppppppplVar28;
          if ((long *******)ppppppplVar28[1] == (long *******)0x0) {
            do {
              ppppppplVar28 = (long *******)ppppppplVar27[2];
              bVar15 = (long *******)*ppppppplVar28 != ppppppplVar27;
              ppppppplVar27 = ppppppplVar28;
            } while (bVar15);
          }
          else {
            do {
              ppppppplVar28 = ppppppplVar13;
              ppppppplVar13 = (long *******)*ppppppplVar28;
            } while ((long *******)*ppppppplVar28 != (long *******)0x0);
          }
        }
        func_0x000109472e20(param_1[0x1a],&pppppplStack_550);
        FUN_10a839194(&pppppplStack_550);
        pppppplVar32 = param_1[0x1f];
        pppppplVar18 = param_1[0x20];
        if (((ulong)((long)pppppplVar18 - (long)pppppplVar32 >> 3) <= uVar34) ||
           (pppppplVar32 == pppppplVar18)) goto LAB_10a82b584;
        ppppplVar17 = pppppplVar32[uVar34];
        pppppplVar32[uVar34] = pppppplVar18[-1];
        pppppplVar18[-1] = ppppplVar17;
        ppppppplVar28 = ppppppplVar16;
        FUN_10a82bc48(ppppppplVar16);
      }
      pppppplVar32 = param_1[0x1f];
    } while (uVar34 < (ulong)((long)param_1[0x20] - (long)pppppplVar32 >> 3));
  }
  pppppplVar32 = param_1[0x25];
  if (param_1[0x26] != pppppplVar32) {
    uVar34 = 0;
    do {
      if (((uint)pppppplVar32[uVar34][2] >> 1 & 1) == 0) {
        uVar34 = uVar34 + 1;
      }
      else {
        if ((ulong)((long)param_1[0x26] - (long)param_1[0x25] >> 3) <= uVar34) goto LAB_10a82b584;
        pppppplVar32 = param_1[0x25] + uVar34;
        func_0x0001092af8bc(pppppplVar32);
        ppppplVar17 = *pppppplVar32;
        if (((ulong)ppppplVar17[0x16] & 1) == 0) goto LAB_10a82b584;
        pppplVar4 = ppppplVar17[0x14];
        for (pppplVar23 = ppppplVar17[0x13]; pppplVar23 != pppplVar4; pppplVar23 = pppplVar23 + 5) {
          ppppplVar17 = param_1[1][300] + 0x1c;
          FUN_10a6ec49c(ppppplVar17,pppplVar23);
          ppplStack_488 = (long ***)ppppplVar17[1];
          pppppplStack_490 = (long ******)*ppppplVar17;
          if (ppppplVar17[1] != (long ****)0x0) {
            pppplVar1 = ppppplVar17[1] + 1;
            do {
              cVar5 = '\x01';
              bVar15 = (bool)ExclusiveMonitorPass(pppplVar1,0x10);
              if (bVar15) {
                *pppplVar1 = (long ***)((long)*pppplVar1 + 1);
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
          }
          uStack_140 = (long ******)CONCAT17(5,(undefined7)uStack_140);
          pppppplStack_150 = (long ******)CONCAT26(pppppplStack_150._6_2_,0x5f656c6974);
          FUN_10a82bcc0(&pppppplStack_200,pppplVar23[3] + 0x1e);
          if (((ulong)ppppplStack_1e8 & 1) == 0) goto LAB_10a82b584;
          pppppplVar32 = (long ******)ppppplStack_1f8;
          ppppppplVar28 = (long *******)pppppplStack_200;
          if (-1 < (long)uStack_1f0) {
            pppppplVar32 = (long ******)((ulong)uStack_1f0 >> 0x38);
            ppppppplVar28 = &pppppplStack_200;
          }
          ppppppplVar16 = &pppppplStack_150;
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                    (ppppppplVar16,ppppppplVar28,pppppplVar32);
          ppppplStack_548 = (long *****)ppppppplVar16[1];
          pppppplStack_550 = *ppppppplVar16;
          ppppplStack_540 = (long *****)ppppppplVar16[2];
          ppppppplVar16[1] = (long ******)0x0;
          ppppppplVar16[2] = (long ******)0x0;
          *ppppppplVar16 = (long ******)0x0;
          ppppppplVar28 = param_1 + 0x28;
          FUN_10a702db8(ppppppplVar28,&uStack_498,&pppppplStack_550);
          pppppplVar32 = *ppppppplVar28;
          if (pppppplVar32 == (long ******)0x0) {
            pppppplVar32 = (long ******)0x48;
            __Znwm();
            ppppplVar17 = ppppplStack_540;
            pppppplVar32[5] = ppppplStack_548;
            pppppplVar32[4] = (long *****)pppppplStack_550;
            ppppplStack_548 = (long *****)0x0;
            ppppplStack_540 = (long *****)0x0;
            pppppplStack_550 = (long ******)0x0;
            pppppplVar32[7] = (long *****)0x0;
            pppppplVar32[8] = (long *****)0x0;
            pppppplVar32[6] = ppppplVar17;
            FUN_10a702e3c(param_1 + 0x28,uStack_498,ppppppplVar28,pppppplVar32);
          }
          FUN_10a82babc(pppppplVar32 + 7,&pppppplStack_490);
          if ((long)ppppplStack_540 < 0) {
            __ZdlPv(pppppplStack_550);
          }
          if (((char)ppppplStack_1e8 == '\x01') && ((long)uStack_1f0 < 0)) {
            __ZdlPv(pppppplStack_200);
          }
          if ((long)uStack_140 < 0) {
            __ZdlPv(pppppplStack_150);
          }
          ppplVar9 = ppplStack_488;
          if ((long ****)ppplStack_488 != (long ****)0x0) {
            pppplVar1 = (long ****)(ppplStack_488 + 1);
            do {
              ppplVar24 = *pppplVar1;
              cVar5 = '\x01';
              bVar15 = (bool)ExclusiveMonitorPass(pppplVar1,0x10);
              if (bVar15) {
                *pppplVar1 = (long ***)((long)ppplVar24 + -1);
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
            if (ppplVar24 == (long ***)0x0) {
              (*(code *)(*ppplStack_488)[2])(ppplStack_488);
              __ZNSt3__119__shared_weak_count14__release_weakEv(ppplVar9);
            }
          }
        }
        ppppplStack_148 = (long *****)0x0;
        pppppplStack_150 = (long ******)0x0;
        uStack_140 = (long ******)0x0;
        ppppppplVar28 = (long *******)param_1[0x28];
        while (ppppppplVar28 != param_1 + 0x29) {
          (*(code *)(*ppppppplVar28[7])[2])(&pppppplStack_490);
          pppppplVar32 = pppppplStack_490;
          if ((((uint)pppppplStack_490[2] >> 1 & 1) == 0) ||
             (((uint)pppppplStack_490[2] >> 5 & 1) != 0)) {
            if (((uint)pppppplStack_490[2] >> 5 & 1) == 0) {
              puVar21 = (undefined8 *)0x10;
              ___cxa_allocate_exception();
              __ZNSt13runtime_errorC2EPKc();
              *puVar21 = &PTR_DAT_110ae85c0;
              ___cxa_throw(puVar21,&PTR_DAT_110ae8598,&DAT_1092af9d8);
            }
            else {
              __ZNSt13exception_ptrC1ERKS_(&pppppplStack_550,pppppplStack_490 + 0x12);
              func_0x0001092af97c(&pppppplStack_550);
            }
            goto LAB_10a82b584;
          }
          if (((ulong)pppppplStack_490[0x37] & 1) == 0) goto LAB_10a82b584;
          if (*(char *)((long)pppppplStack_490 + 0xaf) < '\0') {
            func_0x000107c3192c(&pppppplStack_200,pppppplStack_490[0x13],pppppplStack_490[0x14]);
          }
          else {
            ppppplStack_1f8 = pppppplStack_490[0x14];
            pppppplStack_200 = (long ******)pppppplStack_490[0x13];
            uStack_1f0 = (long ******)pppppplStack_490[0x15];
          }
          ppppplStack_1e8 = pppppplVar32[0x16];
          uStack_1e0 = SUB84(pppppplVar32[0x17],0);
          uStack_1d4 = (undefined4)*(undefined8 *)((long)pppppplVar32 + 0xc4);
          uStack_1d0 = (undefined4)((ulong)*(undefined8 *)((long)pppppplVar32 + 0xc4) >> 0x20);
          uStack_1dc = (undefined4)*(undefined8 *)((long)pppppplVar32 + 0xbc);
          uStack_1d8 = (undefined4)((ulong)*(undefined8 *)((long)pppppplVar32 + 0xbc) >> 0x20);
          if (*(char *)((long)pppppplVar32 + 0xe7) < '\0') {
            func_0x000107c3192c(&ppppplStack_1c8,pppppplVar32[0x1a],pppppplVar32[0x1b]);
          }
          else {
            ppppplStack_1c0 = pppppplVar32[0x1b];
            ppppplStack_1c8 = pppppplVar32[0x1a];
            ppppplStack_1b8 = pppppplVar32[0x1c];
          }
          if (pppppplStack_490 != (long ******)0x0) {
            pppppplVar32 = pppppplStack_490 + 1;
            do {
              ppppplVar17 = *pppppplVar32;
              cVar5 = '\x01';
              bVar15 = (bool)ExclusiveMonitorPass(pppppplVar32,0x10);
              if (bVar15) {
                *pppppplVar32 = (long *****)((long)ppppplVar17 + -4);
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
            if (((ulong)ppppplVar17 & 0x1fffffffc) == 4) {
              do {
                ppppplVar17 = *pppppplVar32;
                cVar5 = '\x01';
                bVar15 = (bool)ExclusiveMonitorPass(pppppplVar32,0x10);
                if (bVar15) {
                  *pppppplVar32 = (long *****)((long)ppppplVar17 + -1);
                  cVar5 = ExclusiveMonitorsStatus();
                }
              } while (cVar5 != '\0');
              if ((long *****)((long)ppppplVar17 + -1) == (long *****)0x0) {
                (*(code *)(*pppppplStack_490)[1])();
              }
            }
          }
          (*(code *)(*ppppppplVar28[7])[2])(&plStack_388);
          if ((((uint)plStack_388[2] >> 1 & 1) == 0) || (((uint)plStack_388[2] >> 5 & 1) != 0)) {
            if (((uint)plStack_388[2] >> 5 & 1) == 0) {
              puVar21 = (undefined8 *)0x10;
              ___cxa_allocate_exception();
              __ZNSt13runtime_errorC2EPKc();
              *puVar21 = &PTR_DAT_110ae85c0;
              ___cxa_throw(puVar21,&PTR_DAT_110ae8598,&DAT_1092af9d8);
            }
            else {
              __ZNSt13exception_ptrC1ERKS_(&pppppplStack_490,plStack_388 + 0x12);
              func_0x0001092af97c(&pppppplStack_490);
            }
            goto LAB_10a82b584;
          }
          if (((*(byte *)(plStack_388 + 0x37) & 1) == 0) ||
             (FUN_10a82bcc0(&pppppplStack_550,plStack_388 + 0x31),
             ((ulong)pppppplStack_538 & 1) == 0)) goto LAB_10a82b584;
          if ((long)uStack_1f0 < 0) {
            __ZdlPv(pppppplStack_200);
          }
          ppppplStack_1f8 = ppppplStack_548;
          pppppplStack_200 = pppppplStack_550;
          uStack_1f0 = (long ******)ppppplStack_540;
          ppppplStack_540 = (long *****)((ulong)ppppplStack_540 & 0xffffffffffffff);
          pppppplStack_550 = (long ******)((ulong)pppppplStack_550 & 0xffffffffffffff00);
          if (plStack_388 != (long *)0x0) {
            puVar2 = (ulong *)(plStack_388 + 1);
            do {
              uVar22 = *puVar2;
              cVar5 = '\x01';
              bVar15 = (bool)ExclusiveMonitorPass(puVar2,0x10);
              if (bVar15) {
                *puVar2 = uVar22 - 4;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
            if ((uVar22 & 0x1fffffffc) == 4) {
              do {
                uVar22 = *puVar2;
                cVar5 = '\x01';
                bVar15 = (bool)ExclusiveMonitorPass(puVar2,0x10);
                if (bVar15) {
                  *puVar2 = uVar22 - 1;
                  cVar5 = ExclusiveMonitorsStatus();
                }
              } while (cVar5 != '\0');
              if (uVar22 - 1 == 0) {
                (**(code **)(*plStack_388 + 8))();
              }
            }
          }
          FUN_10a82bb20(&pppppplStack_150,&pppppplStack_200);
          if ((long)ppppplStack_1b8 < 0) {
            __ZdlPv(ppppplStack_1c8);
          }
          if ((long)uStack_1f0 < 0) {
            __ZdlPv(pppppplStack_200);
          }
          ppppppplVar16 = (long *******)ppppppplVar28[1];
          ppppppplVar19 = ppppppplVar28;
          if ((long *******)ppppppplVar28[1] == (long *******)0x0) {
            do {
              ppppppplVar28 = (long *******)ppppppplVar19[2];
              bVar15 = (long *******)*ppppppplVar28 != ppppppplVar19;
              ppppppplVar19 = ppppppplVar28;
            } while (bVar15);
          }
          else {
            do {
              ppppppplVar28 = ppppppplVar16;
              ppppppplVar16 = (long *******)*ppppppplVar28;
            } while ((long *******)*ppppppplVar28 != (long *******)0x0);
          }
        }
        func_0x000109472e20(param_1[0x1b],&pppppplStack_150);
        FUN_10a839194(&pppppplStack_150);
        pppppplVar32 = param_1[0x25];
        pppppplVar18 = param_1[0x26];
        if (((ulong)((long)pppppplVar18 - (long)pppppplVar32 >> 3) <= uVar34) ||
           (pppppplVar32 == pppppplVar18)) goto LAB_10a82b584;
        ppppplVar17 = pppppplVar32[uVar34];
        pppppplVar32[uVar34] = pppppplVar18[-1];
        pppppplVar18[-1] = ppppplVar17;
        ppppppplVar28 = param_1 + 0x25;
        FUN_10a82bc48(ppppppplVar28);
      }
      pppppplVar32 = param_1[0x25];
    } while (uVar34 < (ulong)((long)param_1[0x26] - (long)pppppplVar32 >> 3));
  }
  pppppplVar32 = param_1[0x2c];
  do {
    pppppplVar29 = pppppplVar32;
    pppppplVar18 = param_1[0x2b];
    if (pppppplVar29 == param_1[0x2b]) break;
    pppppplVar32 = pppppplVar29 + -0x12;
    pppppplVar18 = pppppplVar29;
  } while (((uint)pppppplVar29[-0xf][2] >> 1 & 1) == 0);
  if (pppppplVar18 == param_1[0x2b]) {
LAB_10a82a91c:
    if ((param_1[0x2a] != (long ******)0x0) && (*(char *)(param_1 + 0xb) == '\x01')) {
      pppppplVar32 = param_1[0x1b];
      __ZNSt3__16chrono12steady_clock3nowEv();
      func_0x000109472f14(pppppplVar32,param_1 + 9,ppppppplVar28);
      func_0x0001094735c0(&pppppplStack_550,param_1[0x1b] + 6);
      if ((char)ppppplStack_500 == '\x01') {
        ppppppplVar28 = param_1;
        (*(code *)(*param_1)[4])();
        if ((uint)*(byte *)(param_1 + 0x47) == (uint)ppppppplVar28) {
          uVar31 = (uint)pppppplVar32;
          if (param_1[0x48] != param_1[0x49]) {
            uVar31 = 1;
          }
          if ((uVar31 & 1) == 0) goto LAB_10a82b3c4;
        }
        *(char *)(param_1 + 0x47) = (char)ppppppplVar28;
        param_1[0x49] = param_1[0x48];
        if (((ulong)ppppplStack_500 & 1) == 0) goto LAB_10a82b584;
        uStack_1f0 = (long ******)CONCAT17(5,(undefined7)uStack_1f0);
        pppppplStack_200 = (long ******)CONCAT26(pppppplStack_200._6_2_,0x5f656c6974);
        pppppplVar32 = (long ******)ppppplStack_548;
        ppppppplVar16 = (long *******)pppppplStack_550;
        if (-1 < (long)ppppplStack_540) {
          pppppplVar32 = (long ******)((ulong)ppppplStack_540 >> 0x38);
          ppppppplVar16 = &pppppplStack_550;
        }
        ppppppplVar19 = &pppppplStack_200;
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                  (ppppppplVar19,ppppppplVar16,pppppplVar32);
        ppppplStack_218 = (long *****)ppppppplVar19[1];
        ppppplStack_220 = (long *****)*ppppppplVar19;
        uStack_210 = ppppppplVar19[2];
        ppppppplVar19[1] = (long ******)0x0;
        ppppppplVar19[2] = (long ******)0x0;
        *ppppppplVar19 = (long ******)0x0;
        if ((long)uStack_1f0 < 0) {
          __ZdlPv(pppppplStack_200);
        }
        ppppplVar17 = param_1[1][300];
        ppppppplVar16 = param_1 + 0x28;
        FUN_10a6ec49c(ppppppplVar16,&ppppplStack_220);
        (*(code *)(**ppppppplVar16)[2])(&pppppplStack_150);
        pppppplVar32 = pppppplStack_150;
        if ((((uint)pppppplStack_150[2] >> 1 & 1) == 0) ||
           (((uint)pppppplStack_150[2] >> 5 & 1) != 0)) {
          if (((uint)pppppplStack_150[2] >> 5 & 1) == 0) {
            puVar21 = (undefined8 *)0x10;
            ___cxa_allocate_exception();
            __ZNSt13runtime_errorC2EPKc();
            *puVar21 = &PTR_DAT_110ae85c0;
            ___cxa_throw(puVar21,&PTR_DAT_110ae8598,&DAT_1092af9d8);
          }
          else {
            __ZNSt13exception_ptrC1ERKS_(&pppppplStack_200,pppppplStack_150 + 0x12);
            func_0x0001092af97c(&pppppplStack_200);
          }
          goto LAB_10a82b584;
        }
        if (((ulong)pppppplStack_150[0x37] & 1) == 0) goto LAB_10a82b584;
        ppppppplVar16 = (long *******)(pppppplStack_150 + 1);
        do {
          pppppplVar18 = *ppppppplVar16;
          cVar5 = '\x01';
          bVar15 = (bool)ExclusiveMonitorPass(ppppppplVar16,0x10);
          if (bVar15) {
            *ppppppplVar16 = (long ******)((long)pppppplVar18 + -4);
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (((ulong)pppppplVar18 & 0x1fffffffc) == 4) {
          do {
            pppppplVar18 = *ppppppplVar16;
            cVar5 = '\x01';
            bVar15 = (bool)ExclusiveMonitorPass(ppppppplVar16,0x10);
            if (bVar15) {
              *ppppppplVar16 = (long ******)((long)pppppplVar18 + -1);
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if ((long ******)((long)pppppplVar18 + -1) == (long ******)0x0) {
            (*(code *)(*pppppplStack_150)[1])(pppppplStack_150);
          }
        }
        uStack_2a0 = (long ******)CONCAT17(5,(undefined7)uStack_2a0);
        pppppplStack_2b0 = (long ******)CONCAT26(pppppplStack_2b0._6_2_,0x5f656c6974);
        FUN_10a82bcc0(&pppppplStack_200,pppppplVar32 + 0x31);
        if (((ulong)ppppplStack_1e8 & 1) == 0) goto LAB_10a82b584;
        pppppplVar32 = (long ******)ppppplStack_1f8;
        ppppppplVar16 = (long *******)pppppplStack_200;
        if (-1 < (long)uStack_1f0) {
          pppppplVar32 = (long ******)((ulong)uStack_1f0 >> 0x38);
          ppppppplVar16 = &pppppplStack_200;
        }
        ppppppplVar19 = &pppppplStack_2b0;
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                  (ppppppplVar19,ppppppplVar16,pppppplVar32);
        ppppplStack_148 = (long *****)ppppppplVar19[1];
        pppppplStack_150 = *ppppppplVar19;
        uStack_140 = ppppppplVar19[2];
        ppppppplVar19[1] = (long ******)0x0;
        ppppppplVar19[2] = (long ******)0x0;
        *ppppppplVar19 = (long ******)0x0;
        FUN_10a82be98(&ppppppuStack_238,&pppppplStack_150);
        if ((long)uStack_140 < 0) {
          __ZdlPv(pppppplStack_150);
        }
        if (((char)ppppplStack_1e8 == '\x01') && ((long)uStack_1f0 < 0)) {
          __ZdlPv(pppppplStack_200);
        }
        if ((long)uStack_2a0 < 0) {
          __ZdlPv(pppppplStack_2b0);
        }
        ppppplStack_148 = (long *****)0x0;
        pppppplStack_150 = (long ******)0x3f800000;
        pppplStack_138 = (long ****)0x0;
        uStack_140 = (long ******)0x3f80000000000000;
        uStack_128 = 0x3f800000;
        uStack_130 = 0;
        uStack_118 = 0x3f80000000000000;
        uStack_120 = 0;
        if ((uint)ppppppplVar28 != 0) {
          if ((((ulong)param_1[0x32] & 1) == 0) ||
             (FUN_10a817f0c(&pppppplStack_2b0,param_1 + 0x2f,&ppppppuStack_238),
             ((ulong)param_1[0x3b] & 1) == 0)) goto LAB_10a82b584;
          func_0x000109519fd0(&pppppplStack_200,&pppppplStack_2b0,param_1 + 0x33);
          func_0x0001094f5708(&pppppplStack_2b0,&pppppplStack_200);
          ppppplStack_148 = ppppplStack_2a8;
          pppppplStack_150 = pppppplStack_2b0;
          pppplStack_138 = pppplStack_298;
          uStack_140 = uStack_2a0;
          uStack_128 = uStack_288;
          uStack_130 = uStack_290;
          uStack_118 = uStack_278;
          uStack_120 = uStack_280;
        }
        lVar25 = 0;
        do {
          bStack_329 = 0xd;
          uStack_340._0_5_ = 0x74616c6572;
          uStack_340._5_3_ = 0x657669;
          uStack_338 = 0x5f656c6974;
          uStack_333 = 0;
          __ZNSt3__19to_stringEi(&ppppppuStack_250,*(undefined4 *)(lVar25 + 0x113302f98));
          uVar34 = uStack_248;
          pppppppuVar7 = (undefined8 *******)ppppppuStack_250;
          if (-1 < (long)uStack_240) {
            uVar34 = uStack_240 >> 0x38;
            pppppppuVar7 = &ppppppuStack_250;
          }
          puVar21 = &uStack_340;
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                    (puVar21,pppppppuVar7,uVar34);
          uVar36 = puVar21[1];
          uStack_b0 = (long ******)puVar21[2];
          uStack_b8 = (undefined5)uVar36;
          uStack_b3 = (undefined1)((ulong)uVar36 >> 0x28);
          uStack_b2 = (undefined2)((ulong)uVar36 >> 0x30);
          uStack_c0._0_5_ = (undefined5)*puVar21;
          uStack_c0._5_3_ = (undefined3)((ulong)*puVar21 >> 0x28);
          puVar21[1] = 0;
          puVar21[2] = 0;
          *puVar21 = 0;
          uStack_254 = CONCAT13(1,(undefined3)uStack_254);
          pppppplStack_268 = (long ******)CONCAT62(pppppplStack_268._2_6_,0x5f);
          puVar21 = &uStack_c0;
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                    (puVar21,&pppppplStack_268,1);
          ppppplStack_2a8 = (long *****)puVar21[1];
          pppppplStack_2b0 = (long ******)*puVar21;
          uStack_2a0 = (long ******)puVar21[2];
          puVar21[1] = 0;
          puVar21[2] = 0;
          *puVar21 = 0;
          __ZNSt3__19to_stringEi(&uStack_2d0,*(undefined4 *)(lVar25 + 0x113302f9c));
          uVar34 = uStack_2c8;
          puVar33 = (undefined4 *)CONCAT44(uStack_2cc,uStack_2d0);
          if (-1 < (char)bStack_2b9) {
            uVar34 = (ulong)bStack_2b9;
            puVar33 = &uStack_2d0;
          }
          ppppppplVar28 = &pppppplStack_2b0;
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                    (ppppppplVar28,puVar33,uVar34);
          ppppplStack_1f8 = (long *****)ppppppplVar28[1];
          pppppplStack_200 = *ppppppplVar28;
          uStack_1f0 = ppppppplVar28[2];
          ppppppplVar28[1] = (long ******)0x0;
          ppppppplVar28[2] = (long ******)0x0;
          *ppppppplVar28 = (long ******)0x0;
          cStack_2d1 = '\x02';
          uStack_2e8 = 0x305f;
          uStack_2e6 = 0;
          ppppppplVar28 = &pppppplStack_200;
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                    (ppppppplVar28,&uStack_2e8,2);
          pppppplVar32 = *ppppppplVar28;
          pppppplVar18 = ppppppplVar28[1];
          uStack_2b8._0_3_ = (undefined3)*(undefined4 *)(ppppppplVar28 + 2);
          uStack_2b8._3_1_ = (undefined1)*(undefined4 *)((long)ppppppplVar28 + 0x13);
          uStack_2b4 = (undefined3)((uint)*(undefined4 *)((long)ppppppplVar28 + 0x13) >> 8);
          cVar5 = *(char *)((long)ppppppplVar28 + 0x17);
          ppppppplVar28[1] = (long ******)0x0;
          ppppppplVar28[2] = (long ******)0x0;
          *ppppppplVar28 = (long ******)0x0;
          if (cStack_2d1 < '\0') {
            __ZdlPv(CONCAT53(uStack_2e5,CONCAT12(uStack_2e6,uStack_2e8)));
          }
          if ((long)uStack_1f0 < 0) {
            __ZdlPv(pppppplStack_200);
          }
          if ((char)bStack_2b9 < '\0') {
            __ZdlPv(CONCAT44(uStack_2cc,uStack_2d0));
          }
          if ((long)uStack_2a0 < 0) {
            __ZdlPv(pppppplStack_2b0);
          }
          if (uStack_254 < 0) {
            __ZdlPv(pppppplStack_268);
          }
          if ((long)uStack_240 < 0) {
            __ZdlPv(ppppppuStack_250);
          }
          if ((char)bStack_329 < '\0') {
            __ZdlPv(CONCAT35(uStack_340._5_3_,(undefined5)uStack_340));
          }
          ppppppuStack_250 = ppppppuStack_238;
          uVar36 = *(undefined8 *)(lVar25 + 0x113302f98);
          uStack_248 = uStack_230 + (long)(int)uVar36;
          uStack_240 = CONCAT17(bStack_221,uStack_228) + (long)(int)((ulong)uVar36 >> 0x20);
          FUN_10a82c03c(&pppppplStack_268,&ppppppuStack_250);
          if (cVar5 < '\0') {
            func_0x000107c3192c(&ppppplStack_300,pppppplVar32,pppppplVar18);
          }
          else {
            uStack_2f0 = uStack_2b8;
            uStack_2ec = uStack_2b4;
            ppppplStack_300 = (long *****)pppppplVar32;
            ppppplStack_2f8 = (long *****)pppppplVar18;
            cStack_2e9 = cVar5;
          }
          pppppplStack_2b0 = (long ******)&UNK_10dd62ad6;
          ppppplVar30 = ppppplVar17 + 0x42;
          pppppplStack_200 = &ppppplStack_300;
          FUN_10a71c8d8(ppppplVar30,&ppppplStack_300,&UNK_10dd5b8f9,&pppppplStack_200,
                        &pppppplStack_2b0);
          if (cStack_2e9 < '\0') {
            __ZdlPv(ppppplStack_300);
          }
          ppppppplVar28 = param_1 + 0x28;
          FUN_10a71d524(ppppppplVar28,&pppppplStack_268);
          if (param_1 + 0x29 == ppppppplVar28) {
            func_0x00010a839690(ppppplVar30 + 5);
          }
          else {
            FUN_10a817f0c(&pppppplStack_2b0,&ppppppuStack_250,&ppppppuStack_238);
            (*(code *)(*ppppppplVar28[7])[2])(&uStack_2d0);
            if ((((uint)*(undefined8 *)(CONCAT44(uStack_2cc,uStack_2d0) + 0x10) >> 1 & 1) == 0) ||
               (((uint)*(undefined8 *)(CONCAT44(uStack_2cc,uStack_2d0) + 0x10) >> 5 & 1) != 0)) {
              if (((uint)*(undefined8 *)(CONCAT44(uStack_2cc,uStack_2d0) + 0x10) >> 5 & 1) == 0) {
                puVar21 = (undefined8 *)0x10;
                ___cxa_allocate_exception();
                __ZNSt13runtime_errorC2EPKc();
                *puVar21 = &PTR_DAT_110ae85c0;
                ___cxa_throw(puVar21,&PTR_DAT_110ae8598,&DAT_1092af9d8);
              }
              else {
                __ZNSt13exception_ptrC1ERKS_(&uStack_340,CONCAT44(uStack_2cc,uStack_2d0) + 0x90);
                func_0x0001092af97c(&uStack_340);
              }
              goto LAB_10a82b584;
            }
            if (((*(byte *)(CONCAT44(uStack_2cc,uStack_2d0) + 0x1b8) & 1) == 0) ||
               (FUN_10a82bf50(&pppppplStack_200,CONCAT44(uStack_2cc,uStack_2d0) + 0x188),
               ((ulong)ppppplStack_1c0 & 1) == 0)) goto LAB_10a82b584;
            uStack_b8 = SUB85(ppppplStack_1f8,0);
            uStack_b3 = (undefined1)((ulong)ppppplStack_1f8 >> 0x28);
            uStack_b2 = (undefined2)((ulong)ppppplStack_1f8 >> 0x30);
            uStack_c0._0_5_ = SUB85(pppppplStack_200,0);
            uStack_c0._5_3_ = (undefined3)((ulong)pppppplStack_200 >> 0x28);
            ppppplStack_a8 = ppppplStack_1e8;
            uStack_b0 = uStack_1f0;
            ppplStack_98 = (long ***)CONCAT44(uStack_1d4,uStack_1d8);
            ppplStack_a0 = (long ***)CONCAT44(uStack_1dc,uStack_1e0);
            ppplStack_90 = (long ***)CONCAT44(uStack_1cc,uStack_1d0);
            ppppplStack_88 = ppppplStack_1c8;
            plVar8 = (long *)CONCAT44(uStack_2cc,uStack_2d0);
            if (plVar8 != (long *)0x0) {
              puVar2 = (ulong *)(plVar8 + 1);
              do {
                uVar34 = *puVar2;
                cVar6 = '\x01';
                bVar15 = (bool)ExclusiveMonitorPass(puVar2,0x10);
                if (bVar15) {
                  *puVar2 = uVar34 - 4;
                  cVar6 = ExclusiveMonitorsStatus();
                }
              } while (cVar6 != '\0');
              if ((uVar34 & 0x1fffffffc) == 4) {
                do {
                  uVar34 = *puVar2;
                  cVar6 = '\x01';
                  bVar15 = (bool)ExclusiveMonitorPass(puVar2,0x10);
                  if (bVar15) {
                    *puVar2 = uVar34 - 1;
                    cVar6 = ExclusiveMonitorsStatus();
                  }
                } while (cVar6 != '\0');
                if (uVar34 - 1 == 0) {
                  (**(code **)(*plVar8 + 8))();
                }
              }
            }
            func_0x000109519fd0(&uStack_340,&pppppplStack_150,&pppppplStack_2b0);
            if (uStack_254 < 0) {
              func_0x000107c3192c(&pppppplStack_200,pppppplStack_268,ppppplStack_260);
            }
            else {
              ppppplStack_1f8 = ppppplStack_260;
              pppppplStack_200 = pppppplStack_268;
              uStack_1f0 = (long ******)CONCAT44(uStack_254,uStack_258);
            }
            pppppplVar18 = ppppppplVar28[8];
            ppppplStack_1e8 = (long *****)ppppppplVar28[7];
            uStack_1e0 = SUB84(pppppplVar18,0);
            uStack_1dc = (undefined4)((ulong)pppppplVar18 >> 0x20);
            if (ppppppplVar28[8] != (long ******)0x0) {
              pppppplVar29 = ppppppplVar28[8] + 1;
              do {
                cVar6 = '\x01';
                bVar15 = (bool)ExclusiveMonitorPass(pppppplVar29,0x10);
                if (bVar15) {
                  *pppppplVar29 = (long *****)((long)*pppppplVar29 + 1);
                  cVar6 = ExclusiveMonitorsStatus();
                }
              } while (cVar6 != '\0');
            }
            ppppplStack_1c8 = (long *****)CONCAT17(bStack_329,uStack_330);
            uStack_1d0 = (undefined4)uStack_338;
            uStack_1cc = (undefined4)(CONCAT26(uStack_332,CONCAT15(uStack_333,uStack_338)) >> 0x20);
            uStack_1d8 = (undefined4)(undefined5)uStack_340;
            uStack_1d4 = (undefined4)(CONCAT35(uStack_340._5_3_,(undefined5)uStack_340) >> 0x20);
            ppppplStack_1c0 = ppppplStack_328;
            ppppplStack_1b0 = ppppplStack_318;
            ppppplStack_1b8 = ppppplStack_320;
            ppppplStack_1a0 = ppppplStack_308;
            ppppplStack_1a8 = ppppplStack_310;
            ppplStack_190 = (long ***)CONCAT26(uStack_b2,CONCAT15(uStack_b3,uStack_b8));
            ppppplStack_198 = (long *****)CONCAT35(uStack_c0._5_3_,(undefined5)uStack_c0);
            ppppplStack_180 = ppppplStack_a8;
            ppppplStack_188 = (long *****)uStack_b0;
            ppplStack_170 = ppplStack_98;
            ppplStack_178 = ppplStack_a0;
            ppppplStack_160 = ppppplStack_88;
            ppplStack_168 = ppplStack_90;
            if (*(char *)(ppppplVar30 + 0x1a) == '\x01') {
              if (*(char *)((long)ppppplVar30 + 0x3f) < '\0') {
                __ZdlPv(ppppplVar30[5]);
              }
              ppppplVar30[6] = (long ****)ppppplStack_1f8;
              ppppplVar30[5] = (long ****)pppppplStack_200;
              ppppplVar30[7] = (long ****)uStack_1f0;
              uStack_1f0 = (long ******)((ulong)uStack_1f0 & 0xffffffffffffff);
              pppppplStack_200 = (long ******)((ulong)pppppplStack_200 & 0xffffffffffffff00);
              FUN_10a82babc(ppppplVar30 + 8,&ppppplStack_1e8);
              ppppplVar30[0x13] = (long ****)ppplStack_190;
              ppppplVar30[0x12] = (long ****)ppppplStack_198;
              ppppplVar30[0x15] = (long ****)ppppplStack_180;
              ppppplVar30[0x14] = (long ****)ppppplStack_188;
              ppppplVar30[0x17] = (long ****)ppplStack_170;
              ppppplVar30[0x16] = (long ****)ppplStack_178;
              ppppplVar30[0x19] = (long ****)ppppplStack_160;
              ppppplVar30[0x18] = (long ****)ppplStack_168;
              ppppplVar30[0xb] = (long ****)CONCAT44(uStack_1cc,uStack_1d0);
              ppppplVar30[10] = (long ****)CONCAT44(uStack_1d4,uStack_1d8);
              ppppplVar30[0xd] = (long ****)ppppplStack_1c0;
              ppppplVar30[0xc] = (long ****)ppppplStack_1c8;
              ppppplVar30[0xf] = (long ****)ppppplStack_1b0;
              ppppplVar30[0xe] = (long ****)ppppplStack_1b8;
              ppppplVar30[0x11] = (long ****)ppppplStack_1a0;
              ppppplVar30[0x10] = (long ****)ppppplStack_1a8;
              plVar8 = (long *)CONCAT44(uStack_1dc,uStack_1e0);
              if (plVar8 != (long *)0x0) {
                plVar3 = plVar8 + 1;
                do {
                  lVar26 = *plVar3;
                  cVar6 = '\x01';
                  bVar15 = (bool)ExclusiveMonitorPass(plVar3,0x10);
                  if (bVar15) {
                    *plVar3 = lVar26 + -1;
                    cVar6 = ExclusiveMonitorsStatus();
                  }
                } while (cVar6 != '\0');
                if (lVar26 == 0) {
                  (**(code **)(*plVar8 + 0x10))(plVar8);
                  __ZNSt3__119__shared_weak_count14__release_weakEv(plVar8);
                }
              }
            }
            else {
              ppppplVar30[6] = (long ****)ppppplStack_1f8;
              ppppplVar30[5] = (long ****)pppppplStack_200;
              ppppplVar30[7] = (long ****)uStack_1f0;
              uStack_1f0 = (long ******)0x0;
              pppppplStack_200 = (long ******)0x0;
              ppppplStack_1f8 = (long *****)0x0;
              ppppplVar30[9] = (long ****)pppppplVar18;
              ppppplVar30[8] = (long ****)ppppplStack_1e8;
              ppppplStack_1e8 = (long *****)0x0;
              uStack_1e0 = 0;
              uStack_1dc = 0;
              ppppplVar30[0xb] = (long ****)CONCAT44(uStack_1cc,uStack_1d0);
              ppppplVar30[10] = (long ****)CONCAT44(uStack_1d4,uStack_1d8);
              ppppplVar30[0xd] = (long ****)ppppplStack_328;
              ppppplVar30[0xc] = (long ****)ppppplStack_1c8;
              ppppplVar30[0x13] = (long ****)ppplStack_190;
              ppppplVar30[0x12] = (long ****)ppppplStack_198;
              ppppplVar30[0x15] = (long ****)ppppplStack_a8;
              ppppplVar30[0x14] = (long ****)uStack_b0;
              ppppplVar30[0x17] = (long ****)ppplStack_98;
              ppppplVar30[0x16] = (long ****)ppplStack_a0;
              ppppplVar30[0x19] = (long ****)ppppplStack_88;
              ppppplVar30[0x18] = (long ****)ppplStack_90;
              ppppplVar30[0xf] = (long ****)ppppplStack_318;
              ppppplVar30[0xe] = (long ****)ppppplStack_320;
              ppppplVar30[0x11] = (long ****)ppppplStack_308;
              ppppplVar30[0x10] = (long ****)ppppplStack_310;
              *(undefined1 *)(ppppplVar30 + 0x1a) = 1;
            }
            if ((long)uStack_1f0 < 0) {
              __ZdlPv(pppppplStack_200);
            }
          }
          if (uStack_254 < 0) {
            __ZdlPv(pppppplStack_268);
          }
          if (cVar5 < '\0') {
            __ZdlPv(pppppplVar32);
          }
          lVar25 = lVar25 + 8;
        } while (lVar25 != 0x48);
        if ((long)uStack_210 < 0) {
          __ZdlPv(ppppplStack_220);
        }
      }
      else {
        ppppplVar17 = param_1[1][300];
        puVar33 = (undefined4 *)0x113302f9c;
        lVar25 = 0x48;
        do {
          uStack_b0 = (long ******)CONCAT17(0xd,(undefined7)uStack_b0);
          uStack_c0._0_5_ = 0x74616c6572;
          uStack_c0._5_3_ = 0x657669;
          uStack_b8 = 0x5f656c6974;
          uStack_b3 = 0;
          __ZNSt3__19to_stringEi(&uStack_340,puVar33[-1]);
          uVar34 = CONCAT26(uStack_332,CONCAT15(uStack_333,uStack_338));
          puVar21 = (undefined8 *)CONCAT35(uStack_340._5_3_,(undefined5)uStack_340);
          if (-1 < (char)bStack_329) {
            uVar34 = (ulong)bStack_329;
            puVar21 = &uStack_340;
          }
          puVar20 = &uStack_c0;
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                    (puVar20,puVar21,uVar34);
          ppppplStack_2a8 = (long *****)puVar20[1];
          pppppplStack_2b0 = (long ******)*puVar20;
          uStack_2a0 = (long ******)puVar20[2];
          puVar20[1] = 0;
          puVar20[2] = 0;
          *puVar20 = 0;
          uStack_210 = (long ******)CONCAT17(1,(undefined7)uStack_210);
          ppppplStack_220 = (long *****)CONCAT62(ppppplStack_220._2_6_,0x5f);
          ppppppplVar28 = &pppppplStack_2b0;
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                    (ppppppplVar28,&ppppplStack_220,1);
          ppppplStack_148 = (long *****)ppppppplVar28[1];
          pppppplStack_150 = *ppppppplVar28;
          uStack_140 = ppppppplVar28[2];
          ppppppplVar28[1] = (long ******)0x0;
          ppppppplVar28[2] = (long ******)0x0;
          *ppppppplVar28 = (long ******)0x0;
          __ZNSt3__19to_stringEi(&ppppppuStack_238,*puVar33);
          uVar34 = uStack_230;
          pppppppuVar7 = (undefined8 *******)ppppppuStack_238;
          if (-1 < (char)bStack_221) {
            uVar34 = (ulong)bStack_221;
            pppppppuVar7 = &ppppppuStack_238;
          }
          ppppppplVar28 = &pppppplStack_150;
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                    (ppppppplVar28,pppppppuVar7,uVar34);
          ppppplStack_1f8 = (long *****)ppppppplVar28[1];
          pppppplStack_200 = *ppppppplVar28;
          uStack_1f0 = ppppppplVar28[2];
          ppppppplVar28[1] = (long ******)0x0;
          ppppppplVar28[2] = (long ******)0x0;
          *ppppppplVar28 = (long ******)0x0;
          uStack_240 = CONCAT17(2,(undefined7)uStack_240);
          ppppppuStack_250 = (undefined8 ******)CONCAT53(ppppppuStack_250._3_5_,0x305f);
          ppppppplVar28 = &pppppplStack_200;
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                    (ppppppplVar28,&ppppppuStack_250,2);
          ppppppplVar16 = (long *******)*ppppppplVar28;
          pppppplVar32 = ppppppplVar28[1];
          uStack_2d0._0_3_ = (undefined3)*(undefined4 *)(ppppppplVar28 + 2);
          uStack_2d0._3_1_ = (undefined1)*(undefined4 *)((long)ppppppplVar28 + 0x13);
          uStack_2cc._0_3_ = (undefined3)((uint)*(undefined4 *)((long)ppppppplVar28 + 0x13) >> 8);
          cVar5 = *(char *)((long)ppppppplVar28 + 0x17);
          ppppppplVar28[1] = (long ******)0x0;
          ppppppplVar28[2] = (long ******)0x0;
          *ppppppplVar28 = (long ******)0x0;
          if ((long)uStack_240 < 0) {
            __ZdlPv(ppppppuStack_250);
          }
          if ((long)uStack_1f0 < 0) {
            __ZdlPv(pppppplStack_200);
          }
          if ((char)bStack_221 < '\0') {
            __ZdlPv(ppppppuStack_238);
          }
          if ((long)uStack_140 < 0) {
            __ZdlPv(pppppplStack_150);
          }
          if ((long)uStack_210 < 0) {
            __ZdlPv(ppppplStack_220);
          }
          if ((long)uStack_2a0 < 0) {
            __ZdlPv(pppppplStack_2b0);
          }
          if ((char)bStack_329 < '\0') {
            __ZdlPv(CONCAT35(uStack_340._5_3_,(undefined5)uStack_340));
          }
          if (cVar5 < '\0') {
            func_0x000107c3192c(&pppppplStack_268,ppppppplVar16,pppppplVar32);
          }
          else {
            uStack_258 = uStack_2d0;
            uStack_254 = CONCAT13(cVar5,(int3)uStack_2cc);
            pppppplStack_268 = (long ******)ppppppplVar16;
            ppppplStack_260 = (long *****)pppppplVar32;
          }
          pppppplStack_150 = (long ******)&UNK_10dd62ad6;
          ppppplVar30 = ppppplVar17 + 0x42;
          pppppplStack_200 = (long ******)&pppppplStack_268;
          FUN_10a71c8d8(ppppplVar30,&pppppplStack_268,&UNK_10dd5b8f9,&pppppplStack_200,
                        &pppppplStack_150);
          if (uStack_254 < 0) {
            __ZdlPv(pppppplStack_268);
          }
          func_0x00010a839690(ppppplVar30 + 5);
          if (cVar5 < '\0') {
            __ZdlPv(ppppppplVar16);
          }
          puVar33 = puVar33 + 2;
          lVar25 = lVar25 + -8;
        } while (lVar25 != 0);
      }
LAB_10a82b3c4:
      FUN_10a838e84(&pppppplStack_550);
    }
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_78) {
      return;
    }
    ___stack_chk_fail();
  }
  else {
    ppppplStack_548 = pppppplVar18[-0x11];
    pppppplStack_550 = (long ******)pppppplVar18[-0x12];
    ppppplStack_540 = pppppplVar18[-0x10];
    pppppplStack_538 = (long ******)pppppplVar18[-0xf];
    if ((long *******)pppppplStack_538 != (long *******)0x0) {
      ppppppplVar28 = (long *******)(pppppplStack_538 + 1);
      do {
        cVar5 = '\x01';
        bVar15 = (bool)ExclusiveMonitorPass(ppppppplVar28,0x10);
        if (bVar15) {
          *ppppppplVar28 = (long ******)((long)*ppppppplVar28 + 4);
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
    }
    ppppplStack_528 = pppppplVar18[-0xd];
    ppppplStack_530 = pppppplVar18[-0xe];
    ppppplStack_518 = pppppplVar18[-0xb];
    ppppplStack_520 = pppppplVar18[-0xc];
    ppppplStack_508 = pppppplVar18[-9];
    ppppplStack_510 = pppppplVar18[-10];
    ppppplStack_4f8 = pppppplVar18[-7];
    ppppplStack_500 = pppppplVar18[-8];
    ppppplStack_4e8 = pppppplVar18[-5];
    ppppplStack_4f0 = pppppplVar18[-6];
    pppplStack_4d8 = (long ****)pppppplVar18[-3];
    ppppplStack_4e0 = pppppplVar18[-4];
    pppplStack_4c8 = (long ****)pppppplVar18[-1];
    pppplStack_4d0 = (long ****)pppppplVar18[-2];
    pppppplVar32 = param_1[0x2b];
    if (pppppplVar18 < pppppplVar32) goto LAB_10a82b584;
    if (pppppplVar32 != pppppplVar18) {
      pppppplVar29 = param_1[0x2c];
      if (pppppplVar18 != pppppplVar29) {
        do {
          if (*(char *)((long)pppppplVar32 + 0x17) < '\0') {
            __ZdlPv(*pppppplVar32);
          }
          ppppplVar30 = pppppplVar18[1];
          ppppplVar17 = *pppppplVar18;
          pppppplVar32[2] = pppppplVar18[2];
          pppppplVar32[1] = ppppplVar30;
          *pppppplVar32 = ppppplVar17;
          *(undefined1 *)((long)pppppplVar18 + 0x17) = 0;
          *(undefined1 *)pppppplVar18 = 0;
          ppppplVar17 = pppppplVar32[3];
          if (ppppplVar17 != (long *****)0x0) {
            ppppplVar30 = ppppplVar17 + 1;
            do {
              pppplVar23 = *ppppplVar30;
              cVar5 = '\x01';
              bVar15 = (bool)ExclusiveMonitorPass(ppppplVar30,0x10);
              if (bVar15) {
                *ppppplVar30 = (long ****)((long)pppplVar23 + -4);
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
            if (((ulong)pppplVar23 & 0x1fffffffc) == 4) {
              do {
                pppplVar23 = *ppppplVar30;
                cVar5 = '\x01';
                bVar15 = (bool)ExclusiveMonitorPass(ppppplVar30,0x10);
                if (bVar15) {
                  *ppppplVar30 = (long ****)((long)pppplVar23 + -1);
                  cVar5 = ExclusiveMonitorsStatus();
                }
              } while (cVar5 != '\0');
              if ((long ****)((long)pppplVar23 + -1) == (long ****)0x0) {
                (*(code *)(*ppppplVar17)[1])();
              }
            }
          }
          pppppplVar32[3] = pppppplVar18[3];
          pppppplVar18[3] = (long *****)0x0;
          ppppplVar30 = pppppplVar18[5];
          ppppplVar17 = pppppplVar18[4];
          ppppplVar35 = pppppplVar18[6];
          ppppplVar38 = pppppplVar18[9];
          ppppplVar37 = pppppplVar18[8];
          pppppplVar32[7] = pppppplVar18[7];
          pppppplVar32[6] = ppppplVar35;
          pppppplVar32[9] = ppppplVar38;
          pppppplVar32[8] = ppppplVar37;
          pppppplVar32[5] = ppppplVar30;
          pppppplVar32[4] = ppppplVar17;
          ppppplVar30 = pppppplVar18[0xb];
          ppppplVar17 = pppppplVar18[10];
          ppppplVar37 = pppppplVar18[0xd];
          ppppplVar35 = pppppplVar18[0xc];
          ppppplVar38 = pppppplVar18[0xe];
          ppppplVar40 = pppppplVar18[0x11];
          ppppplVar39 = pppppplVar18[0x10];
          pppppplVar32[0xf] = pppppplVar18[0xf];
          pppppplVar32[0xe] = ppppplVar38;
          pppppplVar32[0x11] = ppppplVar40;
          pppppplVar32[0x10] = ppppplVar39;
          pppppplVar32[0xb] = ppppplVar30;
          pppppplVar32[10] = ppppplVar17;
          pppppplVar32[0xd] = ppppplVar37;
          pppppplVar32[0xc] = ppppplVar35;
          pppppplVar18 = pppppplVar18 + 0x12;
          pppppplVar32 = pppppplVar32 + 0x12;
        } while (pppppplVar18 != pppppplVar29);
        pppppplVar29 = param_1[0x2c];
      }
      while (pppppplVar29 != pppppplVar32) {
        pppppplVar29 = pppppplVar29 + -0x12;
        FUN_10a838fd4(pppppplVar29);
      }
      param_1[0x2c] = pppppplVar32;
    }
    if ((((uint)pppppplStack_538[2] >> 1 & 1) != 0) && (((uint)pppppplStack_538[2] >> 5 & 1) == 0))
    {
      if (((ulong)pppppplStack_538[0x15] & 1) == 0) goto LAB_10a82b584;
      pppppplVar32 = (long ******)pppppplStack_538[0x13];
      pppppplVar18 = (long ******)pppppplStack_538[0x14];
      uStack_c0._0_5_ = SUB85(pppppplVar32,0);
      uStack_c0._5_3_ = (undefined3)((ulong)pppppplVar32 >> 0x28);
      uStack_b8 = SUB85(pppppplVar18,0);
      uVar10 = uStack_b8;
      uStack_b3 = (undefined1)((ulong)pppppplVar18 >> 0x28);
      uVar11 = uStack_b3;
      uStack_b2 = (undefined2)((ulong)pppppplVar18 >> 0x30);
      uVar12 = uStack_b2;
      if (pppppplVar18 != (long ******)0x0) {
        pppppplVar29 = pppppplVar18 + 1;
        do {
          cVar5 = '\x01';
          bVar15 = (bool)ExclusiveMonitorPass(pppppplVar29,0x10);
          if (bVar15) {
            *pppppplVar29 = (long *****)((long)*pppppplVar29 + 1);
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
      }
      if ((pppppplVar32 == (long ******)0x0) ||
         (___dynamic_cast(pppppplVar32,&PTR_DAT_110c42c58,&PTR_DAT_110c4a6a8,0),
         pppppplVar32 == (long ******)0x0)) {
        uStack_338 = 0;
        uStack_333 = 0;
        uStack_332 = 0;
        uStack_340._0_5_ = 0;
        uStack_340._5_3_ = 0;
        uVar36 = 0x120;
        ___cxa_allocate_exception(0x120);
        FUN_10a009538();
        ___cxa_throw(uVar36,&PTR_DAT_110b99e48,FUN_10a002a90);
        goto LAB_10a82b584;
      }
      uStack_340._0_5_ = SUB85(pppppplVar32,0);
      uStack_340._5_3_ = (undefined3)((ulong)pppppplVar32 >> 0x28);
      if (pppppplVar18 != (long ******)0x0) {
        pppppplVar29 = pppppplVar18 + 1;
        do {
          cVar5 = '\x01';
          bVar15 = (bool)ExclusiveMonitorPass(pppppplVar29,0x10);
          if (bVar15) {
            *pppppplVar29 = (long *****)((long)*pppppplVar29 + 1);
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
      }
      uStack_338 = uVar10;
      uStack_333 = uVar11;
      uStack_332 = uVar12;
      FUN_10a6e9fe4(param_1[0x4b],&pppppplStack_550);
      ppppplVar17 = pppppplVar32[0x1c];
      if ((ppppplVar17 == (long *****)0x0) ||
         (___dynamic_cast(ppppplVar17,&PTR_DAT_110c67cb0,&PTR_DAT_110c62f00,0),
         ppppplVar17 == (long *****)0x0)) {
        if ((bRam000000011330a9e8 & 1) != 0) {
          func_0x00010ae06f08(0,1,&UNK_10f67b144,&UNK_10f67b441,0x30e,&UNK_10f67b555);
        }
        FUN_10a82bd58(param_1);
      }
      else {
        FUN_10a84cd20(&pppppplStack_490,param_1[1],param_1[3] + 0x1d);
        (*(code *)(*pppppplStack_490)[0x13])(pppppplStack_490,2);
        FUN_10a8271c4(&ppppplStack_220,param_1[1],&pppppplStack_490);
        ppplVar9 = ppplStack_488;
        *(undefined1 *)(ppppplStack_220 + 1) = 1;
        if ((long ****)ppplStack_488 != (long ****)0x0) {
          pppplVar23 = (long ****)(ppplStack_488 + 1);
          do {
            ppplVar24 = *pppplVar23;
            cVar5 = '\x01';
            bVar15 = (bool)ExclusiveMonitorPass(pppplVar23,0x10);
            if (bVar15) {
              *pppplVar23 = (long ***)((long)ppplVar24 + -1);
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (ppplVar24 == (long ***)0x0) {
            (*(code *)(*ppplStack_488)[2])(ppplStack_488);
            __ZNSt3__119__shared_weak_count14__release_weakEv(ppplVar9);
          }
        }
        ppppplVar30 = (long *****)ppppplStack_220[0x1c];
        FUN_10a08d2e0(&pppppplStack_2b0,ppppplVar17 + 0x1f);
        if ((long)uStack_2a0 < 0) {
          func_0x000107c3192c(&pppppplStack_150,pppppplStack_2b0,ppppplStack_2a8);
        }
        else {
          ppppplStack_148 = ppppplStack_2a8;
          pppppplStack_150 = pppppplStack_2b0;
          uStack_140 = uStack_2a0;
        }
        ppppplStack_1f8 = (long *****)0x0;
        pppppplStack_200 = (long ******)0x0;
        uStack_1f0 = (long ******)0x0;
        FUN_10a102f04(&pppppplStack_200,&pppppplStack_150,&pppplStack_138,1);
        (*(code *)(*ppppplVar30)[0x15])(ppppplVar30,&pppppplStack_200);
        pppppplStack_490 = (long ******)&pppppplStack_200;
        FUN_10a0426d8(&pppppplStack_490);
        if ((long)uStack_140 < 0) {
          __ZdlPv(pppppplStack_150);
        }
        ppppppplVar28 = param_1;
        (*(code *)(*param_1)[4])();
        if (((ulong)ppppppplVar28 & 1) == 0) {
          param_1[0x3d] = (long ******)ppppplStack_528;
          param_1[0x3c] = (long ******)ppppplStack_530;
          param_1[0x3e] = (long ******)ppppplStack_520;
          param_1[0x40] = (long ******)ppppplStack_510;
          param_1[0x3f] = (long ******)ppppplStack_518;
          param_1[0x42] = (long ******)ppppplStack_500;
          param_1[0x41] = (long ******)ppppplStack_508;
          param_1[0x44] = (long ******)ppppplStack_4f0;
          param_1[0x43] = (long ******)ppppplStack_4f8;
          param_1[0x46] = (long ******)ppppplStack_4e0;
          param_1[0x45] = (long ******)ppppplStack_4e8;
          pppppplStack_150 = (long ******)0x0;
          ppppplStack_148 = (long *****)0x0;
          uStack_140 = (long ******)0x0;
          pppplStack_138 = (long ****)0x3ff0000000000000;
          uStack_130 = 0;
          uStack_128 = 0;
          uStack_120 = 0;
          plStack_110 = (long *)0x3ff0000000000000;
          uStack_108 = 0;
          ppplStack_100 = (long ***)0x0;
          ppppplStack_f8 = (long *****)0x0;
          ppppplStack_f0 = (long *****)0x3ff0000000000000;
          ppplStack_e8 = (long ***)0x0;
          ppplStack_e0 = (long ***)0x0;
          ppplStack_d8 = (long ***)0x0;
          ppppplStack_d0 = (long *****)0x3ff0000000000000;
        }
        else {
          func_0x0001094f5708(&plStack_388,&ppppplStack_518);
          FUN_10a817f0c(auStack_408,param_1 + 0x3c,&ppppplStack_530);
          func_0x000109519fd0(&pppppplStack_490,&plStack_388,auStack_408);
          func_0x000109519fd0(&uStack_3c8,&pppppplStack_490,param_1 + 0x3f);
          pppppplStack_490 = (long ******)(double)(float)uStack_3c8;
          ppplStack_488 = (long ***)(double)(float)((ulong)uStack_3c8 >> 0x20);
          dStack_480 = (double)(float)uStack_3c0;
          dStack_478 = (double)(float)((ulong)uStack_3c0 >> 0x20);
          dStack_470 = (double)(float)uStack_3b8;
          dStack_468 = (double)(float)((ulong)uStack_3b8 >> 0x20);
          dStack_460 = (double)(float)uStack_3b0;
          dStack_458 = (double)(float)((ulong)uStack_3b0 >> 0x20);
          dStack_450 = (double)(float)uStack_3a8;
          dStack_448 = (double)(float)((ulong)uStack_3a8 >> 0x20);
          dStack_440 = (double)(float)uStack_3a0;
          dStack_438 = (double)(float)((ulong)uStack_3a0 >> 0x20);
          dStack_430 = (double)(float)uStack_398;
          dStack_428 = (double)(float)((ulong)uStack_398 >> 0x20);
          dStack_420 = (double)(float)uStack_390;
          dStack_418 = (double)(float)((ulong)uStack_390 >> 0x20);
          func_0x00010937fc48(&pppppplStack_150,&pppppplStack_490);
          func_0x00010937fbc4(&plStack_388,&pppppplStack_150);
          ppplStack_e8 = ppplStack_360;
          ppppplStack_f0 = ppppplStack_368;
          ppplStack_d8 = ppplStack_350;
          ppplStack_e0 = ppplStack_358;
          ppppplStack_d0 = ppppplStack_348;
          ppppplStack_f8 = ppppplStack_370;
          ppplStack_100 = ppplStack_378;
          uStack_108 = uStack_380;
          plStack_110 = plStack_388;
        }
        pppppplVar32 = param_1[3];
        if ((long)uStack_2a0 < 0) {
          func_0x000107c3192c(&pppppplStack_200,pppppplStack_2b0,ppppplStack_2a8);
        }
        else {
          ppppplStack_1f8 = ppppplStack_2a8;
          pppppplStack_200 = pppppplStack_2b0;
          uStack_1f0 = uStack_2a0;
        }
        uStack_1d8 = SUB84(ppppplStack_148,0);
        uStack_1d4 = (undefined4)((ulong)ppppplStack_148 >> 0x20);
        uStack_1e0 = SUB84(pppppplStack_150,0);
        uStack_1dc = (undefined4)((ulong)pppppplStack_150 >> 0x20);
        ppppplStack_1c8 = (long *****)pppplStack_138;
        uStack_1d0 = SUB84(uStack_140,0);
        uStack_1cc = (undefined4)((ulong)uStack_140 >> 0x20);
        ppppplStack_1b8 = (long *****)uStack_128;
        ppppplStack_1c0 = (long *****)uStack_130;
        ppppplStack_1b0 = (long *****)uStack_120;
        ppplStack_178 = ppplStack_e8;
        ppppplStack_180 = ppppplStack_f0;
        ppplStack_168 = ppplStack_d8;
        ppplStack_170 = ppplStack_e0;
        ppppplStack_160 = ppppplStack_d0;
        ppppplStack_198 = (long *****)uStack_108;
        ppppplStack_1a0 = (long *****)plStack_110;
        ppppplStack_188 = ppppplStack_f8;
        ppplStack_190 = ppplStack_100;
        ppplStack_488 = (long ***)0x0;
        pppppplStack_490 = (long ******)0x0;
        dStack_478 = 0.0;
        dStack_480 = 0.0;
        dStack_470 = (double)CONCAT44(dStack_470._4_4_,0x3f800000);
        FUN_10a22dae0(&pppppplStack_490,&pppppplStack_200,&pppppplStack_200);
        (*(code *)(*ppppplVar30)[0x16])(ppppplVar30,pppppplVar32 + 0x1d,&pppppplStack_490);
        ppppppplVar28 = &pppppplStack_490;
        func_0x00010a22de78(ppppppplVar28);
        if ((long)uStack_1f0 < 0) {
          ppppppplVar28 = (long *******)pppppplStack_200;
          __ZdlPv(pppppplStack_200);
        }
        func_0x0001095be5f4();
        (*(code *)(*ppppplVar30)[0x14])(ppppplVar30,ppppppplVar28 + 1,ppppppplVar28 + 4);
        *(undefined1 *)(param_1 + 0x2e) = 1;
        pppppplVar32 = param_1[7];
        param_1[7] = (long ******)0x0;
        if (pppppplVar32 != (long ******)0x0) {
          (*(code *)(*pppppplVar32)[1])();
        }
        pppppplVar32 = (long ******)0x20;
        __Znwm();
        FUN_10a82c354();
        pppppplVar18 = param_1[7];
        param_1[7] = pppppplVar32;
        if (pppppplVar18 != (long ******)0x0) {
          (*(code *)(*pppppplVar18)[1])();
        }
        param_1[0x30] = (long ******)ppppplStack_528;
        param_1[0x2f] = (long ******)ppppplStack_530;
        param_1[0x31] = (long ******)ppppplStack_520;
        if (((ulong)param_1[0x32] & 1) == 0) {
          *(undefined1 *)(param_1 + 0x32) = 1;
        }
        param_1[0x34] = (long ******)ppppplStack_510;
        param_1[0x33] = (long ******)ppppplStack_518;
        param_1[0x36] = (long ******)ppppplStack_500;
        param_1[0x35] = (long ******)ppppplStack_508;
        param_1[0x38] = (long ******)ppppplStack_4f0;
        param_1[0x37] = (long ******)ppppplStack_4f8;
        param_1[0x3a] = (long ******)ppppplStack_4e0;
        param_1[0x39] = (long ******)ppppplStack_4e8;
        if (((ulong)param_1[0x3b] & 1) == 0) {
          *(undefined1 *)(param_1 + 0x3b) = 1;
        }
        param_1[0x48] = (long ******)((long)param_1[0x48] + 1);
        FUN_10a6ea044(param_1[0x4b],&pppppplStack_550);
        if ((bRam000000011330a9e8 >> 2 & 1) != 0) {
          ppppppplVar28 = (long *******)pppppplStack_550;
          if (-1 < (long)ppppplStack_540) {
            ppppppplVar28 = &pppppplStack_550;
          }
          func_0x00010ae06f08(1,4,&UNK_10f67b144,&UNK_10f67b441,0x305,&UNK_10f67b513,in_x6,in_x7,
                              ppppppplVar28,pppplStack_4d8,pppplStack_4d0,pppplStack_4c8);
        }
        ppppplStack_1f8 = (long *****)0x0;
        pppppplStack_200 = (long ******)0x0;
        uStack_1f0 = (long ******)0x0;
        ppppplStack_1c8 = (long *****)0x0;
        uStack_1d0 = 0x3f800000;
        uStack_1cc = 0;
        ppppplStack_1b8 = (long *****)0x0;
        ppppplStack_1c0 = (long *****)0x3f80000000000000;
        ppppplStack_1a8 = (long *****)0x3f800000;
        ppppplStack_1b0 = (long *****)0x0;
        ppppplStack_198 = (long *****)0x3f80000000000000;
        ppppplStack_1a0 = (long *****)0x0;
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
                  (&pppppplStack_200,&pppppplStack_2b0);
        uStack_1e0 = SUB84(ppppplStack_528,0);
        uStack_1dc = (undefined4)((ulong)ppppplStack_528 >> 0x20);
        ppppplStack_1e8 = ppppplStack_530;
        uStack_1d8 = SUB84(ppppplStack_520,0);
        uStack_1d4 = (undefined4)((ulong)ppppplStack_520 >> 0x20);
        ppppplStack_1c8 = ppppplStack_510;
        uStack_1d0 = SUB84(ppppplStack_518,0);
        uStack_1cc = (undefined4)((ulong)ppppplStack_518 >> 0x20);
        ppppplStack_1b8 = ppppplStack_500;
        ppppplStack_1c0 = ppppplStack_508;
        ppppplStack_1a8 = ppppplStack_4f0;
        ppppplStack_1b0 = ppppplStack_4f8;
        ppppplStack_198 = ppppplStack_4e0;
        ppppplStack_1a0 = ppppplStack_4e8;
        FUN_10a6ec640(param_1[1][300] + 0x49,&pppppplStack_200);
        if ((long)uStack_1f0 < 0) {
          __ZdlPv(pppppplStack_200);
        }
        if ((long)uStack_2a0 < 0) {
          __ZdlPv(pppppplStack_2b0);
        }
        ppppplVar17 = ppppplStack_218;
        if ((long ******)ppppplStack_218 != (long ******)0x0) {
          pppppplVar32 = (long ******)(ppppplStack_218 + 1);
          do {
            ppppplVar30 = *pppppplVar32;
            cVar5 = '\x01';
            bVar15 = (bool)ExclusiveMonitorPass(pppppplVar32,0x10);
            if (bVar15) {
              *pppppplVar32 = (long *****)((long)ppppplVar30 + -1);
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (ppppplVar30 == (long *****)0x0) {
            (*(code *)(*ppppplStack_218)[2])(ppppplStack_218);
            __ZNSt3__119__shared_weak_count14__release_weakEv(ppppplVar17);
          }
        }
        pppppplVar18 = (long ******)CONCAT26(uStack_332,CONCAT15(uStack_333,uStack_338));
      }
      if (pppppplVar18 != (long ******)0x0) {
        pppppplVar32 = pppppplVar18 + 1;
        do {
          ppppplVar17 = *pppppplVar32;
          cVar5 = '\x01';
          bVar15 = (bool)ExclusiveMonitorPass(pppppplVar32,0x10);
          if (bVar15) {
            *pppppplVar32 = (long *****)((long)ppppplVar17 + -1);
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (ppppplVar17 == (long *****)0x0) {
          (*(code *)(*pppppplVar18)[2])(pppppplVar18);
          __ZNSt3__119__shared_weak_count14__release_weakEv(pppppplVar18);
        }
      }
      plVar8 = (long *)CONCAT26(uStack_b2,CONCAT15(uStack_b3,uStack_b8));
      if (plVar8 != (long *)0x0) {
        plVar3 = plVar8 + 1;
        do {
          lVar25 = *plVar3;
          cVar5 = '\x01';
          bVar15 = (bool)ExclusiveMonitorPass(plVar3,0x10);
          if (bVar15) {
            *plVar3 = lVar25 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (lVar25 == 0) {
          (**(code **)(*plVar8 + 0x10))(plVar8);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar8);
        }
      }
      ppppppplVar28 = (long *******)pppppplStack_538;
      if ((long *******)pppppplStack_538 != (long *******)0x0) {
        ppppppplVar16 = (long *******)(pppppplStack_538 + 1);
        do {
          pppppplVar32 = *ppppppplVar16;
          cVar5 = '\x01';
          bVar15 = (bool)ExclusiveMonitorPass(ppppppplVar16,0x10);
          if (bVar15) {
            *ppppppplVar16 = (long ******)((long)pppppplVar32 + -4);
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (((ulong)pppppplVar32 & 0x1fffffffc) == 4) {
          do {
            pppppplVar32 = *ppppppplVar16;
            cVar5 = '\x01';
            bVar15 = (bool)ExclusiveMonitorPass(ppppppplVar16,0x10);
            if (bVar15) {
              *ppppppplVar16 = (long ******)((long)pppppplVar32 + -1);
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if ((long ******)((long)pppppplVar32 + -1) == (long ******)0x0) {
            (*(code *)(*pppppplStack_538)[1])();
          }
        }
      }
      if ((long)ppppplStack_540 < 0) {
        ppppppplVar28 = (long *******)pppppplStack_550;
        __ZdlPv(pppppplStack_550);
      }
      goto LAB_10a82a91c;
    }
    if (((uint)pppppplStack_538[2] >> 5 & 1) == 0) {
      puVar21 = (undefined8 *)0x10;
      ___cxa_allocate_exception();
      __ZNSt13runtime_errorC2EPKc();
      *puVar21 = &PTR_DAT_110ae85c0;
      ___cxa_throw(puVar21,&PTR_DAT_110ae8598,&DAT_1092af9d8);
      goto LAB_10a82b584;
    }
  }
  __ZNSt13exception_ptrC1ERKS_(&pppppplStack_200,pppppplStack_538 + 0x12);
  func_0x0001092af97c(&pppppplStack_200);
LAB_10a82b584:
                    /* WARNING: Does not return */
  pcVar14 = (code *)SoftwareBreakpoint(1,0x10a82b588);
  (*pcVar14)();
}



/* Entry: 10a82babc; end: 10a82bb1f;  */

undefined8 * FUN_10a82babc(undefined8 *param_1,undefined8 *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  uVar7 = param_2[1];
  uVar6 = *param_2;
  *param_2 = 0;
  param_2[1] = 0;
  plVar5 = (long *)param_1[1];
  param_1[1] = uVar7;
  *param_1 = uVar6;
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



/* Entry: 10a82bb20; end: 10a82bc47;  */

void FUN_10a82bb20(long *param_1,long param_2)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  long *plVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  long *plVar9;
  long lVar10;
  ulong uStack_58;
  long lStack_50;
  long lStack_48;
  long lStack_40;
  long *plStack_38;
  
  uVar8 = param_1[1];
  if (uVar8 < (ulong)param_1[2]) {
    FUN_10a8390f4(uVar8,param_2);
    lVar10 = uVar8 + 0x50;
    param_1[1] = lVar10;
  }
  else {
    lVar10 = uVar8 - *param_1;
    uVar8 = (lVar10 >> 4) * -0x3333333333333333 + 1;
    if (0x333333333333333 < uVar8) {
      FUN_10a8387ac();
      func_0x00010a838848(&uStack_58);
      __Unwind_Resume();
      if (*param_1 != param_1[1]) {
        plVar9 = (long *)(param_1[1] + -8);
        plVar5 = (long *)*plVar9;
        if (plVar5 != (long *)0x0) {
          puVar1 = (ulong *)(plVar5 + 1);
          do {
            uVar8 = *puVar1;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
            if (bVar3) {
              *puVar1 = uVar8 - 4;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if ((uVar8 & 0x1fffffffc) == 4) {
            do {
              uVar8 = *puVar1;
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
              if (bVar3) {
                *puVar1 = uVar8 - 1;
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
            if (uVar8 - 1 == 0) {
              (**(code **)(*plVar5 + 8))();
            }
          }
        }
        param_1[1] = (long)plVar9;
        return;
      }
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x10a82bcc0);
      (*pcVar4)();
    }
    lVar6 = param_1[2] - *param_1 >> 4;
    uVar7 = lVar6 * -0x6666666666666666;
    if (uVar7 < uVar8 || uVar7 - uVar8 == 0) {
      uVar7 = uVar8;
    }
    if (0x199999999999998 < (ulong)(lVar6 * -0x3333333333333333)) {
      uVar7 = 0x333333333333333;
    }
    plStack_38 = param_1;
    if (uVar7 == 0) {
      uVar7 = 0;
      lVar6 = 0;
    }
    else {
      lVar6 = param_2;
      FUN_10a8387c0();
    }
    lVar10 = uVar7 + lVar10;
    lStack_40 = uVar7 + lVar6 * 0x50;
    uStack_58 = uVar7;
    lStack_50 = lVar10;
    lStack_48 = lVar10;
    FUN_10a8390f4(lVar10,param_2);
    lStack_48 = lVar10 + 0x50;
    FUN_10a8386c0(param_1,&uStack_58);
    lVar10 = param_1[1];
    func_0x00010a838848(&uStack_58);
  }
  param_1[1] = lVar10;
  return;
}



/* Entry: 10a82bc48; end: 10a82bcbf;  */

void FUN_10a82bc48(long *param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  long *plVar5;
  ulong uVar6;
  long *plVar7;
  
  if (*param_1 != param_1[1]) {
    plVar7 = (long *)(param_1[1] + -8);
    plVar5 = (long *)*plVar7;
    if (plVar5 != (long *)0x0) {
      puVar1 = (ulong *)(plVar5 + 1);
      do {
        uVar6 = *puVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = uVar6 - 4;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if ((uVar6 & 0x1fffffffc) == 4) {
        do {
          uVar6 = *puVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar3) {
            *puVar1 = uVar6 - 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (uVar6 - 1 == 0) {
          (**(code **)(*plVar5 + 8))();
        }
      }
    }
    param_1[1] = (long)plVar7;
    return;
  }
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x10a82bcc0);
  (*pcVar4)();
}



/* Entry: 10a82bcc0; end: 10a82bd57;  */

void FUN_10a82bcc0(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_40 [16];
  undefined **ppuStack_30;
  int iStack_24;
  
  FUN_10a8391fc(auStack_40);
  if (iStack_24 != 3) {
    ppuStack_30 = &PTR_PTR_1132e3730;
  }
  puVar1 = (undefined8 *)((ulong)ppuStack_30[0xb] & 0xfffffffffffffffc);
  if (*(char *)((long)puVar1 + 0x17) < '\0') {
    func_0x000107c3192c(param_1,*puVar1,puVar1[1]);
  }
  else {
    uVar3 = puVar1[1];
    uVar2 = *puVar1;
    param_1[2] = puVar1[2];
    param_1[1] = uVar3;
    *param_1 = uVar2;
  }
  *(undefined1 *)(param_1 + 3) = 1;
  func_0x0001098d5058(auStack_40);
  return;
}



/* Entry: 10a82bd58; end: 10a82be3f;  */

void FUN_10a82bd58(long param_1,long param_2)

{
  code *pcVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  code **ppcVar5;
  undefined ***pppuVar6;
  undefined ***pppuVar7;
  long *plVar8;
  undefined8 *puVar9;
  code **ppcVar10;
  undefined8 *puStack_b0;
  undefined8 *puStack_a8;
  undefined ***pppuStack_a0;
  code **ppcStack_98;
  undefined1 *puStack_90;
  code *pcStack_88;
  undefined8 uStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined **ppuStack_60;
  code *pcStack_58;
  code *pcStack_50;
  long lStack_28;
  
  plVar8 = *(long **)(param_1 + 0x10);
  FUN_10a6e4938();
  if (*plVar8 != 0) {
    puVar9 = *(undefined8 **)(param_1 + 0x10);
    FUN_10a6e4938();
    ppcVar10 = (code **)*puVar9;
    if (ppcVar10 != (code **)0x0 && *(char *)(ppcVar10 + 8) == '\x02') {
      lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
      ppcVar5 = ppcVar10;
      FUN_10a688b40();
      if (ppcVar5 == (code **)0x0) {
        pppuVar6 = (undefined ***)0x0;
        if (param_2 != 0) {
          pcStack_50 = ppcVar10[1];
          pcStack_58 = *ppcVar10;
          if (ppcVar10[1] != (code *)0x0) {
            pcVar1 = ppcVar10[1] + 8;
            do {
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(pcVar1,0x10);
              if (bVar3) {
                *(long *)pcVar1 = *(long *)pcVar1 + 1;
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
          }
          pcStack_68 = FUN_10a05e8a0;
          ppuStack_60 = &PTR_DAT_110b9fa70;
          ppcVar5 = &pcStack_68;
          uStack_78 = 0;
          uStack_70 = 0;
          FUN_10a4634ec(param_2,&pcStack_68);
          pppuVar6 = &ppuStack_60;
          (*(code *)*ppuStack_60)();
        }
      }
      else {
        *ppcVar5 = (code *)CONCAT44((int)((ulong)*ppcVar5 >> 0x20) + 1,(int)*ppcVar5 + 1);
        pppuVar6 = (undefined ***)*ppcVar10;
        FUN_10a05e740();
        iVar4 = *(int *)((long)ppcVar5 + 4) + -1;
        *(int *)((long)ppcVar5 + 4) = iVar4;
        if (iVar4 == 0) {
          *(undefined4 *)ppcVar5 = 0;
        }
      }
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
        return;
      }
      ___stack_chk_fail();
      (*(code *)*ppuStack_60)(ppcVar5 + 1);
      func_0x00010a004dac(&uStack_78);
      pppuVar7 = pppuVar6;
      __Unwind_Resume();
      pcStack_88 = FUN_10a05e740;
      pppuStack_a0 = pppuVar6;
      ppcStack_98 = ppcVar5;
      puStack_90 = &stack0xfffffffffffffff0;
      func_0x000109884c0c(&puStack_b0,pppuVar7 + 1,*pppuVar7);
      func_0x000109884820(&puStack_a8,&puStack_b0,*pppuVar7);
      if (puStack_b0 != (undefined8 *)0x0) {
        (**(code **)*puStack_b0)();
      }
      (**(code **)(**pppuVar7 + 0x30))(&puStack_b0);
      FUN_10a05e824(*pppuVar7,&puStack_b0,&puStack_a8);
      if (puStack_b0 != (undefined8 *)0x0) {
        (**(code **)*puStack_b0)();
      }
      if (puStack_a8 != (undefined8 *)0x0) {
        (**(code **)*puStack_a8)();
      }
      return;
    }
    if (ppcVar10 != (code **)0x0 && *(char *)(ppcVar10 + 8) == '\x01') {
                    /* WARNING: Could not recover jumptable at 0x00010a82bdc4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**ppcVar10)();
      return;
    }
  }
  return;
}



/* Entry: 10a82be40; end: 10a82be97;  */

byte FUN_10a82be40(long param_1,long param_2)

{
  byte bVar1;
  
  if (*(char *)(param_1 + 0x170) == '\x01') {
    bVar1 = 0;
    if (*(byte **)(param_2 + 0xa0) != (byte *)0x0) {
      bVar1 = **(byte **)(param_2 + 0xa0);
    }
  }
  else {
    bVar1 = 0;
  }
  return bVar1 & 1;
}



/* Entry: 10a82be98; end: 10a82bf4f;  */

void FUN_10a82be98(undefined8 *param_1,long *param_2)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  long *plVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined1 auStack_90 [16];
  undefined **ppuStack_80;
  int iStack_74;
  undefined8 *puStack_70;
  undefined8 *puStack_68;
  undefined1 *puStack_60;
  code *pcStack_58;
  undefined8 *puStack_50;
  undefined8 *puStack_48;
  undefined8 *puStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uStack_28 = 0;
  uStack_38 = 0;
  uStack_30 = 0;
  plVar6 = (long *)*param_2;
  if (-1 < *(char *)((long)param_2 + 0x17)) {
    plVar6 = param_2;
  }
  puStack_40 = &uStack_28;
  puStack_48 = &uStack_38;
  puStack_50 = &uStack_30;
  _sscanf(plVar6,&UNK_10f67bff7);
  if ((int)plVar6 == 3) {
    *param_1 = uStack_28;
    param_1[1] = uStack_30;
    param_1[2] = uStack_38;
    return;
  }
  puVar7 = (undefined8 *)0x10;
  ___cxa_allocate_exception();
  __ZNSt13runtime_errorC1EPKc();
  puVar8 = puVar7;
  ___cxa_throw(puVar7,PTR___ZTISt13runtime_error_110346a40,PTR___ZNSt13runtime_errorD1Ev_1103461d8);
  ___cxa_free_exception(puVar7);
  puVar9 = puVar8;
  __Unwind_Resume();
  pcStack_58 = FUN_10a82bf50;
  puStack_70 = puVar8;
  puStack_68 = puVar7;
  puStack_60 = &stack0xfffffffffffffff0;
  FUN_10a8391fc(auStack_90);
  if (iStack_74 != 3) {
    ppuStack_80 = &PTR_PTR_1132e3730;
  }
  ppuVar1 = &PTR_PTR_1132e36f8;
  if ((undefined **)ppuStack_80[0xc] != (undefined **)0x0) {
    ppuVar1 = (undefined **)ppuStack_80[0xc];
  }
  ppuVar2 = &PTR_PTR_1132e36d8;
  if ((undefined **)ppuVar1[3] != (undefined **)0x0) {
    ppuVar2 = (undefined **)ppuVar1[3];
  }
  uVar10 = *(undefined4 *)(ppuVar2 + 3);
  ppuVar3 = &PTR_PTR_1132e36d8;
  if ((undefined **)ppuVar1[4] != (undefined **)0x0) {
    ppuVar3 = (undefined **)ppuVar1[4];
  }
  uVar11 = *(undefined4 *)(ppuVar3 + 3);
  ppuVar4 = &PTR_PTR_1132e36d8;
  if ((undefined **)ppuVar1[5] != (undefined **)0x0) {
    ppuVar4 = (undefined **)ppuVar1[5];
  }
  uVar12 = *(undefined4 *)(ppuVar4 + 3);
  ppuVar5 = &PTR_PTR_1132e36d8;
  if ((undefined **)ppuVar1[6] != (undefined **)0x0) {
    ppuVar5 = (undefined **)ppuVar1[6];
  }
  uVar13 = *(undefined4 *)(ppuVar5 + 3);
  *puVar9 = ppuVar2[2];
  *(undefined4 *)(puVar9 + 1) = uVar10;
  *(undefined4 *)((long)puVar9 + 0xc) = 0;
  puVar9[2] = ppuVar3[2];
  *(undefined4 *)(puVar9 + 3) = uVar11;
  *(undefined4 *)((long)puVar9 + 0x1c) = 0;
  puVar9[4] = ppuVar4[2];
  *(undefined4 *)(puVar9 + 5) = uVar12;
  *(undefined4 *)((long)puVar9 + 0x2c) = 0;
  puVar9[6] = ppuVar5[2];
  *(undefined4 *)(puVar9 + 7) = uVar13;
  *(undefined4 *)((long)puVar9 + 0x3c) = 0x3f800000;
  *(undefined1 *)(puVar9 + 8) = 1;
  func_0x0001098d5058(auStack_90);
  return;
}



/* Entry: 10a82bf50; end: 10a82c03b;  */

void FUN_10a82bf50(undefined8 *param_1)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined1 auStack_40 [16];
  undefined **ppuStack_30;
  int iStack_24;
  
  FUN_10a8391fc(auStack_40);
  if (iStack_24 != 3) {
    ppuStack_30 = &PTR_PTR_1132e3730;
  }
  ppuVar1 = &PTR_PTR_1132e36f8;
  if ((undefined **)ppuStack_30[0xc] != (undefined **)0x0) {
    ppuVar1 = (undefined **)ppuStack_30[0xc];
  }
  ppuVar2 = &PTR_PTR_1132e36d8;
  if ((undefined **)ppuVar1[3] != (undefined **)0x0) {
    ppuVar2 = (undefined **)ppuVar1[3];
  }
  uVar6 = *(undefined4 *)(ppuVar2 + 3);
  ppuVar3 = &PTR_PTR_1132e36d8;
  if ((undefined **)ppuVar1[4] != (undefined **)0x0) {
    ppuVar3 = (undefined **)ppuVar1[4];
  }
  uVar7 = *(undefined4 *)(ppuVar3 + 3);
  ppuVar4 = &PTR_PTR_1132e36d8;
  if ((undefined **)ppuVar1[5] != (undefined **)0x0) {
    ppuVar4 = (undefined **)ppuVar1[5];
  }
  uVar8 = *(undefined4 *)(ppuVar4 + 3);
  ppuVar5 = &PTR_PTR_1132e36d8;
  if ((undefined **)ppuVar1[6] != (undefined **)0x0) {
    ppuVar5 = (undefined **)ppuVar1[6];
  }
  uVar9 = *(undefined4 *)(ppuVar5 + 3);
  *param_1 = ppuVar2[2];
  *(undefined4 *)(param_1 + 1) = uVar6;
  *(undefined4 *)((long)param_1 + 0xc) = 0;
  param_1[2] = ppuVar3[2];
  *(undefined4 *)(param_1 + 3) = uVar7;
  *(undefined4 *)((long)param_1 + 0x1c) = 0;
  param_1[4] = ppuVar4[2];
  *(undefined4 *)(param_1 + 5) = uVar8;
  *(undefined4 *)((long)param_1 + 0x2c) = 0;
  param_1[6] = ppuVar5[2];
  *(undefined4 *)(param_1 + 7) = uVar9;
  *(undefined4 *)((long)param_1 + 0x3c) = 0x3f800000;
  *(undefined1 *)(param_1 + 8) = 1;
  func_0x0001098d5058(auStack_40);
  return;
}



/* Entry: 10a82c03c; end: 10a82c353;  */

/* WARNING: Removing unreachable block (ram,0x00010a82c1f4) */
/* WARNING: Removing unreachable block (ram,0x00010a82c1d4) */
/* WARNING: Removing unreachable block (ram,0x00010a82c214) */

void FUN_10a82c03c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 ***pppuVar1;
  undefined1 **ppuVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined1 *puStack_140;
  ulong uStack_138;
  byte bStack_129;
  undefined2 uStack_128;
  undefined6 uStack_126;
  char cStack_111;
  undefined8 **ppuStack_110;
  ulong uStack_108;
  byte bStack_f9;
  undefined2 uStack_f8;
  undefined6 uStack_f6;
  char cStack_e1;
  undefined8 **ppuStack_e0;
  ulong uStack_d8;
  byte bStack_c9;
  undefined4 uStack_c8;
  undefined2 uStack_c4;
  undefined2 uStack_c2;
  char cStack_b1;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  long lStack_a0;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  cStack_b1 = '\x05';
  uStack_c8 = 0x656c6974;
  uStack_c4 = 0x5f;
  __ZNSt3__19to_stringEm(&ppuStack_e0,param_2[1]);
  pppuVar1 = (undefined8 ***)ppuStack_e0;
  if (-1 < (char)bStack_c9) {
    uStack_d8 = (ulong)bStack_c9;
    pppuVar1 = &ppuStack_e0;
  }
  puVar3 = (undefined8 *)&uStack_c8;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (puVar3,pppuVar1,uStack_d8);
  uStack_a8 = puVar3[1];
  uStack_b0 = *puVar3;
  lStack_a0 = puVar3[2];
  puVar3[1] = 0;
  puVar3[2] = 0;
  *puVar3 = 0;
  cStack_e1 = '\x01';
  uStack_f8 = 0x5f;
  puVar3 = &uStack_b0;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm(puVar3,&uStack_f8,1);
  uStack_88 = puVar3[1];
  uStack_90 = *puVar3;
  uStack_80 = puVar3[2];
  puVar3[1] = 0;
  puVar3[2] = 0;
  *puVar3 = 0;
  __ZNSt3__19to_stringEm(&ppuStack_110,param_2[2]);
  pppuVar1 = (undefined8 ***)ppuStack_110;
  if (-1 < (char)bStack_f9) {
    uStack_108 = (ulong)bStack_f9;
    pppuVar1 = &ppuStack_110;
  }
  puVar3 = &uStack_90;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (puVar3,pppuVar1,uStack_108);
  uStack_68 = puVar3[1];
  uStack_70 = *puVar3;
  uStack_60 = puVar3[2];
  puVar3[1] = 0;
  puVar3[2] = 0;
  *puVar3 = 0;
  cStack_111 = '\x01';
  uStack_128 = 0x5f;
  puVar3 = &uStack_70;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm(puVar3,&uStack_128,1)
  ;
  uStack_48 = puVar3[1];
  uStack_50 = *puVar3;
  uStack_40 = puVar3[2];
  puVar3[1] = 0;
  puVar3[2] = 0;
  *puVar3 = 0;
  __ZNSt3__19to_stringEm(&puStack_140,*param_2);
  ppuVar2 = (undefined1 **)puStack_140;
  if (-1 < (char)bStack_129) {
    uStack_138 = (ulong)bStack_129;
    ppuVar2 = &puStack_140;
  }
  puVar3 = &uStack_50;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (puVar3,ppuVar2,uStack_138);
  uVar4 = *puVar3;
  param_1[1] = puVar3[1];
  *param_1 = uVar4;
  param_1[2] = puVar3[2];
  puVar3[1] = 0;
  puVar3[2] = 0;
  *puVar3 = 0;
  if ((char)bStack_129 < '\0') {
    __ZdlPv(puStack_140);
  }
  if (cStack_111 < '\0') {
    __ZdlPv(CONCAT62(uStack_126,uStack_128));
  }
  if ((char)bStack_f9 < '\0') {
    __ZdlPv(ppuStack_110);
  }
  if (cStack_e1 < '\0') {
    __ZdlPv(CONCAT62(uStack_f6,uStack_f8));
  }
  if (lStack_a0 < 0) {
    __ZdlPv(uStack_b0);
  }
  if ((char)bStack_c9 < '\0') {
    __ZdlPv(ppuStack_e0);
  }
  if (cStack_b1 < '\0') {
    __ZdlPv(CONCAT26(uStack_c2,CONCAT24(uStack_c4,uStack_c8)));
  }
  return;
}



/* Entry: 10a82c354; end: 10a82c75b;  */

undefined8 * FUN_10a82c354(undefined8 *param_1,undefined8 param_2,long *param_3,undefined8 param_4)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  code *pcVar5;
  long lVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  long lVar10;
  undefined *puStack_70;
  undefined8 uStack_68;
  long *plStack_60;
  long *plStack_58;
  
  *param_1 = &PTR_FUN_110c20c38;
  param_1[1] = param_2;
  param_1[2] = 0;
  param_1[3] = 0;
  lVar6 = param_3[0x2d];
  lVar10 = *(long *)(lVar6 + 0x158);
  if (lVar10 != lVar6 + 0x150) {
LAB_10a82c3b0:
    if (*(long *)(lVar10 + 0x10) == 0) goto LAB_10a82c3cc;
    plVar7 = (long *)(*(long *)(lVar10 + 0x10) + 0xb0);
    (**(code **)(*plVar7 + 0x18))(plVar7,0x5d8c50e0e3561857);
    if (plVar7 == (long *)0x0) goto LAB_10a82c3cc;
    FUN_10a82c75c(&plStack_60,plVar7);
    plVar9 = plStack_58;
    if (plStack_58 != (long *)0x0) {
      plVar1 = plStack_58 + 2;
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar4) {
          *plVar1 = *plVar1 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    lVar6 = param_1[3];
    param_1[3] = plStack_58;
    param_1[2] = plStack_60;
    if (lVar6 != 0) {
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
    if (plVar9 == (long *)0x0) goto LAB_10a82c4e8;
    plVar1 = plVar9 + 1;
    do {
      lVar6 = *plVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = lVar6 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    goto LAB_10a82c4cc;
  }
LAB_10a82c3dc:
  puStack_70 = &UNK_10f64c73f;
  uStack_68 = 0x21;
  FUN_10a3e51f0(&plStack_60,lVar6,&puStack_70);
  plVar9 = plStack_58;
  plVar7 = plStack_60;
  if (plStack_60 == (long *)0x0) {
    FUN_10a00946c(&UNK_10f67b6f4);
                    /* WARNING: Does not return */
    pcVar5 = (code *)SoftwareBreakpoint(1,0x10a82c708);
    (*pcVar5)();
  }
  if (plStack_58 != (long *)0x0) {
    plVar1 = plStack_58 + 2;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = *plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  lVar6 = param_1[3];
  param_1[2] = plStack_60;
  param_1[3] = plStack_58;
  if (lVar6 != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  *(ushort *)(plVar7 + 0x30) = *(ushort *)(plVar7 + 0x30) | 0x100;
  *(undefined1 *)((long)plVar7 + 0x21a) = 1;
  *(undefined1 *)(plVar7 + 0x47) = 0;
  (**(code **)(*plVar7 + 0x68))(plVar7,1);
  if (plVar9 != (long *)0x0) {
    plVar1 = plVar9 + 1;
    do {
      lVar6 = *plVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = lVar6 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
LAB_10a82c4cc:
    if (lVar6 == 0) {
      (**(code **)(*plVar9 + 0x10))(plVar9);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar9);
    }
  }
LAB_10a82c4e8:
  FUN_10a2e195c(plVar7 + 0x45,param_4);
  (**(code **)(*param_3 + 0x58))(&plStack_60,param_3);
  plVar1 = plStack_58;
  plVar9 = plStack_60;
  if (plStack_58 != (long *)0x0) {
    plVar8 = plStack_58 + 1;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar4) {
        *plVar8 = *plVar8 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
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
        __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_58);
      }
    }
    plVar2 = plStack_58 + 2;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar4) {
        *plVar2 = *plVar2 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    do {
      lVar6 = *plVar8;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar4) {
        *plVar8 = lVar6 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar6 == 0) {
      (**(code **)(*plStack_58 + 0x10))(plStack_58);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_58);
    }
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar4) {
        *plVar2 = *plVar2 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  plVar8 = (long *)0x60;
  __Znwm();
  plVar8[1] = 0;
  plVar8[2] = 0;
  *plVar8 = (long)&PTR_DAT_110b9fc20;
  plVar8[3] = (long)FUN_10a84d4fc;
  plVar8[4] = (long)&PTR_FUN_110c22c78;
  plVar8[5] = (long)plStack_60;
  plVar8[6] = (long)plStack_58;
  *(undefined1 *)(plVar8 + 0xb) = 1;
  plStack_60 = plVar8 + 3;
  plStack_58 = plVar8;
  func_0x00010a2e268c(plVar7 + 0x48,&plStack_60);
  plVar8 = plStack_58;
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
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar8);
    }
  }
  if (plVar1 != (long *)0x0) {
    plVar8 = plVar1 + 2;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar4) {
        *plVar8 = *plVar8 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  plVar8 = (long *)0x60;
  __Znwm();
  plVar8[1] = 0;
  plVar8[2] = 0;
  *plVar8 = (long)&PTR_DAT_110b9fc20;
  plStack_60 = plVar8 + 3;
  *plStack_60 = (long)FUN_10a84d688;
  plVar8[4] = (long)&PTR_FUN_110c22c98;
  plVar8[5] = (long)plVar9;
  plVar8[6] = (long)plVar1;
  *(undefined1 *)(plVar8 + 0xb) = 1;
  plStack_58 = plVar8;
  func_0x00010a2e268c(plVar7 + 0x4a,&plStack_60);
  plVar7 = plStack_58;
  if (plStack_58 != (long *)0x0) {
    plVar9 = plStack_58 + 1;
    do {
      lVar6 = *plVar9;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar4) {
        *plVar9 = lVar6 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar6 == 0) {
      (**(code **)(*plStack_58 + 0x10))(plStack_58);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
    }
  }
  if (plVar1 != (long *)0x0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv(plVar1);
  }
  return param_1;
LAB_10a82c3cc:
  lVar10 = *(long *)(lVar10 + 8);
  if (lVar10 == lVar6 + 0x150) goto code_r0x00010a82c3d8;
  goto LAB_10a82c3b0;
code_r0x00010a82c3d8:
  lVar6 = param_3[0x2d];
  goto LAB_10a82c3dc;
}



/* Entry: 10a82c75c; end: 10a82c7ef;  */

void FUN_10a82c75c(undefined8 *param_1,long *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined8 uStack_30;
  long *plStack_28;
  
  (**(code **)(*param_2 + 0x50))(&uStack_30,param_2);
  param_1[1] = plStack_28;
  *param_1 = uStack_30;
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
        lVar4 = *plVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = lVar4 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar4 == 0) {
        (**(code **)(*plStack_28 + 0x10))(plStack_28);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_28);
      }
    }
  }
  return;
}



/* Entry: 10a82c7f0; end: 10a82c8cb;  */

undefined8 * FUN_10a82c7f0(undefined8 *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  undefined8 uStack_40;
  long *plStack_38;
  
  *param_1 = &PTR_FUN_110c20c38;
  plVar4 = (long *)param_1[3];
  if (plVar4 != (long *)0x0) {
    __ZNSt3__119__shared_weak_count4lockEv();
    if (plVar4 != (long *)0x0) {
      lVar6 = param_1[2];
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
      if (lVar6 != 0) {
        uStack_40 = 0;
        plStack_38 = (long *)0x0;
        FUN_10a2e195c(lVar6 + 0x228,&uStack_40);
        plVar4 = plStack_38;
        if (plStack_38 != (long *)0x0) {
          plVar1 = plStack_38 + 1;
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
            (**(code **)(*plStack_38 + 0x10))(plStack_38);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
          }
        }
      }
    }
    if (param_1[3] != 0) {
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
  }
  return param_1;
}



/* Entry: 10a82c8cc; end: 10a82c8cf;  */

undefined8 * FUN_10a82c8cc(undefined8 *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  undefined8 uStack_40;
  long *plStack_38;
  
  *param_1 = &PTR_FUN_110c20c38;
  plVar4 = (long *)param_1[3];
  if (plVar4 != (long *)0x0) {
    __ZNSt3__119__shared_weak_count4lockEv();
    if (plVar4 != (long *)0x0) {
      lVar6 = param_1[2];
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
      if (lVar6 != 0) {
        uStack_40 = 0;
        plStack_38 = (long *)0x0;
        FUN_10a2e195c(lVar6 + 0x228,&uStack_40);
        plVar4 = plStack_38;
        if (plStack_38 != (long *)0x0) {
          plVar1 = plStack_38 + 1;
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
            (**(code **)(*plStack_38 + 0x10))(plStack_38);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
          }
        }
      }
    }
    if (param_1[3] != 0) {
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
  }
  return param_1;
}



/* Entry: 10a82c8d0; end: 10a82c8e3;  */

void FUN_10a82c8d0(void)

{
  FUN_10a82c7f0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a82c8e4; end: 10a82c9db;  */

byte FUN_10a82c8e4(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  byte bVar5;
  long lVar6;
  long lVar7;
  
  plVar4 = *(long **)(param_1 + 0x18);
  if ((plVar4 != (long *)0x0) && (__ZNSt3__119__shared_weak_count4lockEv(), plVar4 != (long *)0x0))
  {
    lVar7 = *(long *)(param_1 + 0x10);
    plVar1 = plVar4 + 1;
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
      (**(code **)(*plVar4 + 0x10))(plVar4);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
    }
    if (lVar7 != 0) {
      bVar5 = *(byte *)(lVar7 + 0x218);
      goto LAB_10a82c950;
    }
  }
  bVar5 = 0;
LAB_10a82c950:
  return bVar5 & 1;
}



/* Entry: 10a82c9dc; end: 10a82cef3;  */

/* WARNING: Removing unreachable block (ram,0x00010a82ca90) */

undefined8 *
FUN_10a82c9dc(undefined8 *param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4)

{
  undefined ******ppppppuVar1;
  char cVar2;
  bool bVar3;
  undefined ****ppppuVar4;
  undefined ******ppppppuVar5;
  undefined *****pppppuVar6;
  undefined ******ppppppuVar7;
  long *plVar8;
  undefined8 uVar9;
  undefined ****ppppuVar10;
  undefined *****pppppuVar11;
  undefined8 *puVar12;
  long lVar13;
  undefined ******ppppppuVar14;
  undefined *****pppppuStack_188;
  undefined *****pppppuStack_180;
  undefined *****pppppuStack_178;
  undefined8 uStack_170;
  long lStack_168;
  undefined *****pppppuStack_160;
  undefined *****pppppuStack_158;
  undefined *****pppppuStack_150;
  undefined *****pppppuStack_148;
  undefined8 auStack_140 [2];
  char cStack_129;
  undefined *****pppppuStack_128;
  undefined8 uStack_120;
  undefined7 uStack_118;
  char cStack_111;
  undefined *****pppppuStack_f0;
  char cStack_d9;
  code *pcStack_d8;
  undefined **ppuStack_d0;
  undefined *****pppppuStack_c8;
  undefined *****pppppuStack_c0;
  undefined *****pppppuStack_b8;
  undefined8 uStack_b0;
  long lStack_a8;
  undefined *****pppppuStack_98;
  undefined ****ppppuStack_90;
  undefined *****pppppuStack_88;
  undefined *****pppppuStack_80;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  *param_1 = &PTR_DAT_110c20c68;
  param_1[1] = param_2;
  uVar9 = *param_3;
  *param_3 = 0;
  param_1[2] = uVar9;
  param_1[3] = param_4;
  FUN_10a05a5d4(param_1 + 4,&pppppuStack_128);
  puVar12 = param_1 + 6;
  param_1[7] = 0;
  *puVar12 = 0;
  param_1[9] = 0;
  param_1[8] = 0;
  *(undefined2 *)(param_1 + 10) = 0;
  func_0x000107c2b054(auStack_140,&UNK_10f67b726);
  func_0x000107c2b054(&pppppuStack_98,&UNK_10f67b781);
  FUN_10a700b34(0,0,0,&pppppuStack_128,auStack_140,1,&pppppuStack_98);
  if (cStack_129 < '\0') {
    __ZdlPv(auStack_140[0]);
  }
  ppppppuVar5 = (undefined ******)0x20;
  __Znwm();
  ppppppuVar5[1] = (undefined *****)0x0;
  ppppppuVar5[2] = (undefined *****)0x0;
  *ppppppuVar5 = (undefined *****)&PTR_DAT_110c22b20;
  pppppuStack_150 = (undefined *****)(ppppppuVar5 + 3);
  *pppppuStack_150 = (undefined ****)0x0;
  pppppuVar6 = (undefined *****)0x20;
  pppppuStack_148 = (undefined *****)ppppppuVar5;
  __Znwm();
  pppppuVar6[1] = (undefined ****)0x0;
  pppppuVar6[2] = (undefined ****)0x0;
  *pppppuVar6 = (undefined ****)&PTR_FUN_110c22b70;
  pppppuStack_98 = pppppuVar6 + 3;
  *pppppuStack_98 = (undefined ****)0x0;
  ppppuStack_90 = (undefined ****)pppppuVar6;
  FUN_10a827088(puVar12,&pppppuStack_98);
  ppppuVar4 = ppppuStack_90;
  if ((undefined *****)ppppuStack_90 != (undefined *****)0x0) {
    pppppuVar6 = (undefined *****)(ppppuStack_90 + 1);
    do {
      ppppuVar10 = *pppppuVar6;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(pppppuVar6,0x10);
      if (bVar3) {
        *pppppuVar6 = (undefined ****)((long)ppppuVar10 + -1);
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (ppppuVar10 == (undefined ****)0x0) {
      (*(code *)(*ppppuStack_90)[2])(ppppuStack_90);
      __ZNSt3__119__shared_weak_count14__release_weakEv(ppppuVar4);
    }
  }
  FUN_10a8270ec(&pppppuStack_98);
  pppppuVar6 = pppppuStack_150;
  FUN_10a838ed0(*puVar12,pppppuStack_150,&pppppuStack_98);
  if ((undefined *****)ppppuStack_90 != (undefined *****)0x0) {
    func_0x0001092b4274(&ppppuStack_90);
  }
  ppppppuVar5 = (undefined ******)pppppuStack_98;
  if ((undefined ******)pppppuStack_98 != (undefined ******)0x0) {
    ppppppuVar14 = (undefined ******)(pppppuStack_98 + 1);
    do {
      pppppuVar11 = *ppppppuVar14;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(ppppppuVar14,0x10);
      if (bVar3) {
        *ppppppuVar14 = (undefined *****)((long)pppppuVar11 + -4);
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (((ulong)pppppuVar11 & 0x1fffffffc) == 4) {
      do {
        pppppuVar11 = *ppppppuVar14;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(ppppppuVar14,0x10);
        if (bVar3) {
          *ppppppuVar14 = (undefined *****)((long)pppppuVar11 + -1);
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if ((undefined *****)((long)pppppuVar11 + -1) == (undefined *****)0x0) {
        (*(code *)(*pppppuStack_98)[1])();
      }
    }
  }
  ppppppuVar14 = (undefined ******)pppppuStack_148;
  pppppuStack_160 = pppppuVar6;
  pppppuStack_158 = pppppuStack_148;
  if ((undefined ******)pppppuStack_148 == (undefined ******)0x0) {
    pppppuStack_180 = (undefined *****)0x0;
  }
  else {
    ppppppuVar7 = (undefined ******)(pppppuStack_148 + 1);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(ppppppuVar7,0x10);
      if (bVar3) {
        *ppppppuVar7 = (undefined *****)((long)*ppppppuVar7 + 1);
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    pppppuStack_180 = pppppuStack_148;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(ppppppuVar7,0x10);
      if (bVar3) {
        *ppppppuVar7 = (undefined *****)((long)*ppppppuVar7 + 1);
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  pppppuStack_188 = pppppuVar6;
  if (cStack_111 < '\0') {
    ppppppuVar5 = &pppppuStack_178;
    func_0x000107c3192c(ppppppuVar5,pppppuStack_128,uStack_120);
  }
  else {
    uStack_170 = uStack_120;
    pppppuStack_178 = pppppuStack_128;
    lStack_168 = CONCAT17(cStack_111,uStack_118);
  }
  lVar13 = param_1[1];
  if (lVar13 != 0) {
    pppppuStack_98 = (undefined *****)0x10a84d9e4;
    ppppuStack_90 = (undefined ****)&PTR_DAT_110c22cf8;
    pppppuStack_88 = pppppuVar6;
    pppppuStack_80 = (undefined *****)ppppppuVar14;
    if (ppppppuVar14 != (undefined ******)0x0) {
      ppppppuVar14 = ppppppuVar14 + 1;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(ppppppuVar14,0x10);
        if (bVar3) {
          *ppppppuVar14 = (undefined *****)((long)*ppppppuVar14 + 1);
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    pcStack_d8 = FUN_10a84da50;
    ppuStack_d0 = &PTR_FUN_110c22d18;
    pppppuStack_c8 = pppppuStack_188;
    pppppuStack_c0 = pppppuStack_180;
    if ((undefined ******)pppppuStack_180 != (undefined ******)0x0) {
      ppppppuVar5 = (undefined ******)(pppppuStack_180 + 1);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(ppppppuVar5,0x10);
        if (bVar3) {
          *ppppppuVar5 = (undefined *****)((long)*ppppppuVar5 + 1);
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    ppppppuVar14 = &pppppuStack_98;
    if (lStack_168 < 0) {
      func_0x000107c3192c(&pppppuStack_b8,pppppuStack_178,uStack_170);
    }
    else {
      uStack_b0 = uStack_170;
      pppppuStack_b8 = pppppuStack_178;
      lStack_a8 = lStack_168;
    }
    FUN_10a822788(lVar13,&pppppuStack_128,&pppppuStack_98,&pcStack_d8,param_1[4]);
    (*(code *)*ppuStack_d0)(&ppuStack_d0);
    ppppppuVar5 = (undefined ******)&ppppuStack_90;
    (*(code *)*ppppuStack_90)(ppppppuVar5);
  }
  if (lStack_168 < 0) {
    ppppppuVar5 = (undefined ******)pppppuStack_178;
    __ZdlPv(pppppuStack_178);
  }
  ppppppuVar7 = (undefined ******)pppppuStack_180;
  if ((undefined ******)pppppuStack_180 != (undefined ******)0x0) {
    ppppppuVar1 = (undefined ******)(pppppuStack_180 + 1);
    do {
      pppppuVar6 = *ppppppuVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(ppppppuVar1,0x10);
      if (bVar3) {
        *ppppppuVar1 = (undefined *****)((long)pppppuVar6 + -1);
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (pppppuVar6 == (undefined *****)0x0) {
      (*(code *)(*pppppuStack_180)[2])(pppppuStack_180);
      __ZNSt3__119__shared_weak_count14__release_weakEv(ppppppuVar7);
      ppppppuVar5 = ppppppuVar7;
    }
  }
  ppppppuVar7 = (undefined ******)pppppuStack_158;
  if ((undefined ******)pppppuStack_158 != (undefined ******)0x0) {
    ppppppuVar1 = (undefined ******)(pppppuStack_158 + 1);
    do {
      pppppuVar6 = *ppppppuVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(ppppppuVar1,0x10);
      if (bVar3) {
        *ppppppuVar1 = (undefined *****)((long)pppppuVar6 + -1);
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (pppppuVar6 == (undefined *****)0x0) {
      (*(code *)(*pppppuStack_158)[2])(pppppuStack_158);
      __ZNSt3__119__shared_weak_count14__release_weakEv(ppppppuVar7);
      ppppppuVar5 = ppppppuVar7;
    }
  }
  pppppuVar6 = pppppuStack_148;
  if ((undefined ******)pppppuStack_148 != (undefined ******)0x0) {
    ppppppuVar7 = (undefined ******)(pppppuStack_148 + 1);
    do {
      pppppuVar11 = *ppppppuVar7;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(ppppppuVar7,0x10);
      if (bVar3) {
        *ppppppuVar7 = (undefined *****)((long)pppppuVar11 + -1);
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (pppppuVar11 == (undefined *****)0x0) {
      (*(code *)(*pppppuStack_148)[2])(pppppuStack_148);
      ppppppuVar5 = (undefined ******)pppppuVar6;
      __ZNSt3__119__shared_weak_count14__release_weakEv(pppppuVar6);
    }
  }
  if (cStack_d9 < '\0') {
    __ZdlPv(pppppuStack_f0);
    ppppppuVar5 = (undefined ******)pppppuStack_f0;
  }
  if (cStack_111 < '\0') {
    __ZdlPv(pppppuStack_128);
    ppppppuVar5 = (undefined ******)pppppuStack_128;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return param_1;
  }
  ___stack_chk_fail();
  FUN_10a84c600(&pppppuStack_c8);
  (*(code *)*ppppuStack_90)(ppppppuVar14 + 1);
  FUN_10a82cef4(&pppppuStack_188);
  FUN_10a84c600(&pppppuStack_160);
  FUN_10a84c600(&pppppuStack_150);
  FUN_10a6df580(&pppppuStack_128);
  FUN_10a2f35d0(param_1 + 8);
  func_0x00010a84c20c(pppppuVar6);
  func_0x00010a05a86c(param_1 + 4);
  do {
    plVar8 = (long *)param_1[2];
    param_1[2] = 0;
    if (plVar8 != (long *)0x0) {
      (**(code **)(*plVar8 + 8))();
    }
    __Unwind_Resume(ppppppuVar5);
  } while( true );
}



/* Entry: 10a82cef4; end: 10a82cf23;  */

long FUN_10a82cef4(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  if (*(char *)(param_1 + 0x27) < '\0') {
    __ZdlPv(*(undefined8 *)(param_1 + 0x10));
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



/* Entry: 10a82cf24; end: 10a82d007;  */

void FUN_10a82cf24(undefined8 *param_1,long param_2)

{
  long *plVar1;
  undefined8 uVar2;
  long *plStack_40;
  long *plStack_38;
  
  (**(code **)(**(long **)(param_2 + 0x10) + 0x10))(&plStack_40);
  uVar2 = 0x58;
  __Znwm();
  plStack_38 = plStack_40;
  plStack_40 = (long *)0x0;
  FUN_10a82c9dc();
  if (plStack_38 != (long *)0x0) {
    (**(code **)(*plStack_38 + 8))();
  }
  plVar1 = plStack_40;
  *param_1 = uVar2;
  plStack_40 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  return;
}



/* Entry: 10a82d008; end: 10a82d047;  */

void FUN_10a82d008(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010a82d014. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0x10) + 0x18))();
  return;
}



/* Entry: 10a82d048; end: 10a82d2a7;  */

void FUN_10a82d048(long param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  bool bVar2;
  code *pcVar3;
  int iVar4;
  long *plVar5;
  long *plVar6;
  undefined8 *puVar7;
  long lVar8;
  long *plVar9;
  undefined8 uStack_80;
  long *plStack_78;
  
  plVar5 = *(long **)(param_1 + 0x10);
  (**(code **)(*plVar5 + 0x30))();
  iVar4 = (int)plVar5;
  FUN_10a82d2a8();
  if (iVar4 == 0) {
    return;
  }
  plVar5 = (long *)(param_1 + 0x40);
  if (*plVar5 != 0) {
    plVar6 = *(long **)(param_1 + 0x10);
    (**(code **)(*plVar6 + 0x20))();
    if ((int)plVar6 != 0) {
      uStack_80 = 0;
      plStack_78 = (long *)0x0;
      func_0x00010a2f3bf0(plVar5,&uStack_80);
      plVar6 = plStack_78;
      if (plStack_78 != (long *)0x0) {
        plVar9 = plStack_78 + 1;
        do {
          lVar8 = *plVar9;
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(plVar9,0x10);
          if (bVar2) {
            *plVar9 = lVar8 + -1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
        if (lVar8 == 0) {
          (**(code **)(*plStack_78 + 0x10))(plStack_78);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
        }
      }
      *(undefined1 *)(param_1 + 0x50) = 0;
    }
    lVar8 = *plVar5;
    if (lVar8 != 0) goto LAB_10a82d148;
  }
  plVar6 = (long *)(param_1 + 0x30);
  if ((long *)*plVar6 == (long *)0x0) {
    return;
  }
  if (((uint)*(undefined8 *)(*(long *)*plVar6 + 0x10) >> 1 & 1) == 0) {
    return;
  }
  plVar9 = (long *)*plVar6;
  func_0x0001092af8bc(plVar9);
  lVar8 = *plVar9;
  if ((*(byte *)(lVar8 + 0xa8) & 1) == 0) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x10a82d22c);
    (*pcVar3)();
  }
  FUN_10a2e195c(plVar5,lVar8 + 0x98);
  FUN_10a826f64(plVar6);
  lVar8 = *plVar5;
  if (lVar8 == 0) {
    return;
  }
LAB_10a82d148:
  plVar5 = *(long **)(lVar8 + 0xe0);
  if (plVar5 != (long *)0x0) {
    (**(code **)(*plVar5 + 0x80))(plVar5,param_2,0);
    *(bool *)(param_1 + 0x50) = plVar5 != (long *)0x0;
    if (plVar5 == (long *)0x0) {
      if (*(char *)(param_1 + 0x51) == '\x01') {
        puVar7 = *(undefined8 **)(*(long *)(param_1 + 0x18) + 0x288);
        if (puVar7 != (undefined8 *)0x0) {
          if (*(char *)(puVar7 + 8) == '\x01') {
            (*(code *)*puVar7)();
          }
          else if (*(char *)(puVar7 + 8) == '\x02') {
            FUN_10a05e614();
          }
        }
        *(undefined1 *)(param_1 + 0x51) = 0;
      }
    }
    else {
      func_0x0001094f5708(&uStack_80,plVar5 + 4);
      func_0x00010a3e8440(param_3,&uStack_80);
      if ((*(byte *)(param_1 + 0x51) & 1) == 0) {
        puVar7 = *(undefined8 **)(*(long *)(param_1 + 0x18) + 0x278);
        if (puVar7 != (undefined8 *)0x0) {
          if (*(char *)(puVar7 + 8) == '\x01') {
            (*(code *)*puVar7)();
          }
          else if (*(char *)(puVar7 + 8) == '\x02') {
            FUN_10a05e614();
          }
        }
        *(undefined1 *)(param_1 + 0x51) = 1;
      }
    }
  }
  return;
}



/* Entry: 10a82d2a8; end: 10a82d30b;  */

byte FUN_10a82d2a8(void)

{
  undefined1 uStack_21;
  undefined1 **ppuStack_20;
  undefined1 *puStack_18;
  
  if (lRam00000001137ebdc0 != -1) {
    puStack_18 = &uStack_21;
    ppuStack_20 = &puStack_18;
    __ZNSt3__111__call_onceERVmPvPFvS2_E(0x1137ebdc0,&ppuStack_20,FUN_10a8396d4);
  }
  return bRam00000001137ebdb8 & 1;
}



/* Entry: 10a82d30c; end: 10a82d36b;  */

void FUN_10a82d30c(long param_1,undefined8 param_2)

{
  int iVar1;
  long *plVar2;
  
  plVar2 = *(long **)(param_1 + 0x10);
  (**(code **)(*plVar2 + 0x38))();
  iVar1 = (int)plVar2;
  FUN_10a82d2a8();
  if (((iVar1 != 0) && (*(long *)(param_1 + 0x40) != 0)) &&
     (plVar2 = *(long **)(*(long *)(param_1 + 0x40) + 0xe0), plVar2 != (long *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x00010a82d35c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar2 + 0x78))(plVar2,param_2);
    return;
  }
  return;
}



/* Entry: 10a82d36c; end: 10a82d3b7;  */

void FUN_10a82d36c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010a82d378. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0x10) + 0x40))();
  return;
}



/* Entry: 10a82d3b8; end: 10a82d417;  */

void FUN_10a82d3b8(long *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined1 auStack_60 [40];
  long lStack_38;
  
  func_0x0001092ba17c(auStack_60);
  if (lStack_38 != 0) {
    plVar1 = (long *)(lStack_38 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  *param_1 = lStack_38;
  func_0x0001092ba100(auStack_60);
  func_0x000109d1a1d0(auStack_60);
  return;
}



/* Entry: 10a82d418; end: 10a82d73b;  */

long * FUN_10a82d418(long *param_1,long *param_2)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  undefined8 uVar4;
  code *pcVar5;
  long *plVar6;
  long **pplVar7;
  long *plVar8;
  long *plVar9;
  undefined8 *puVar10;
  long *plVar11;
  long lVar12;
  ulong uVar13;
  undefined8 *puVar14;
  long *plVar15;
  long *plStack_c0;
  long *plStack_b8;
  undefined8 uStack_b0;
  code *pcStack_a8;
  undefined **ppuStack_a0;
  long *plStack_98;
  long *plStack_90;
  undefined8 uStack_88;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar12 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = lVar12;
  *param_2 = 0;
  param_2[1] = 0;
  FUN_10a05a5d4(param_1 + 2,&pcStack_a8);
  param_1[5] = 0;
  param_1[4] = 0;
  plVar8 = param_1 + 8;
  param_1[9] = 0;
  *plVar8 = 0;
  plVar9 = param_1 + 9;
  param_1[7] = 0;
  param_1[6] = 0;
  if (*param_1 == 0) {
    func_0x000105688514(&UNK_10f677e00);
                    /* WARNING: Does not return */
    pcVar5 = (code *)SoftwareBreakpoint(1,0x10a82d640);
    (*pcVar5)();
  }
  FUN_10a4f3d60(&pcStack_a8);
  plStack_c0 = plVar8;
  plStack_b8 = plVar9;
  FUN_10a4f40f4(&plStack_c0,&pcStack_a8);
  if (ppuStack_a0 != (undefined **)0x0) {
    func_0x0001092b4274(&ppuStack_a0);
  }
  if (pcStack_a8 != (code *)0x0) {
    pcVar5 = pcStack_a8 + 8;
    do {
      uVar13 = *(ulong *)pcVar5;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(pcVar5,0x10);
      if (bVar3) {
        *(ulong *)pcVar5 = uVar13 - 4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((uVar13 & 0x1fffffffc) == 4) {
      do {
        uVar13 = *(ulong *)pcVar5;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(pcVar5,0x10);
        if (bVar3) {
          *(ulong *)pcVar5 = uVar13 - 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (uVar13 - 1 == 0) {
        (**(code **)(*(long *)pcStack_a8 + 8))();
      }
    }
  }
  lVar12 = *plVar8;
  if (lVar12 != 0) {
    plVar6 = (long *)(lVar12 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar3) {
        *plVar6 = *plVar6 + 4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  plVar6 = (long *)param_1[7];
  param_1[7] = lVar12;
  if (plVar6 != (long *)0x0) {
    puVar1 = (ulong *)(plVar6 + 1);
    do {
      uVar13 = *puVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = uVar13 - 4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((uVar13 & 0x1fffffffc) == 4) {
      do {
        uVar13 = *puVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = uVar13 - 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (uVar13 - 1 == 0) {
        (**(code **)(*plVar6 + 8))();
      }
    }
  }
  lVar12 = *param_1;
  plVar11 = param_1;
  FUN_10a82d73c(&plStack_c0,param_1[2]);
  uVar4 = uStack_b0;
  plVar15 = plStack_b8;
  plVar6 = plStack_c0;
  pcStack_a8 = FUN_10a84dcc8;
  ppuStack_a0 = &PTR_FUN_110c22d38;
  plStack_98 = plStack_c0;
  plStack_90 = plStack_b8;
  uStack_88 = uStack_b0;
  plStack_b8 = (long *)0x0;
  uStack_b0 = 0;
  __ZNSt3__15mutex4lockEv(lVar12 + 0xf0);
  puVar14 = (undefined8 *)(lVar12 + 0xb8);
  *(code **)(lVar12 + 0xb0) = FUN_10a84dcc8;
  (**(code **)*puVar14)(puVar14);
  *puVar14 = &PTR_FUN_110c22d38;
  *(long **)(lVar12 + 0xc0) = plVar6;
  *(long **)(lVar12 + 200) = plVar15;
  *(undefined8 *)(lVar12 + 0xd0) = uVar4;
  plStack_90 = (long *)0x0;
  uStack_88 = 0;
  __ZNSt3__15mutex6unlockEv(lVar12 + 0xf0);
  FUN_10a82d7e4(&plStack_98);
  pplVar7 = &plStack_c0;
  FUN_10a82d7e4();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return param_1;
  }
  ___stack_chk_fail();
  FUN_10a82d7e4(&plStack_98);
  FUN_10a82d7e4(&plStack_c0);
  puVar10 = (undefined8 *)*plVar9;
  if (puVar10 != (undefined8 *)0x0) {
    func_0x0001092b4274(plVar9);
  }
  plVar8 = (long *)*plVar8;
  if (plVar8 != (long *)0x0) {
    puVar1 = (ulong *)(plVar8 + 1);
    do {
      uVar13 = *puVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = uVar13 - 4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((uVar13 & 0x1fffffffc) == 4) {
      do {
        uVar13 = *puVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = uVar13 - 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (uVar13 - 1 == 0) {
        (**(code **)(*plVar8 + 8))();
      }
    }
  }
  plVar9 = (long *)param_1[7];
  if (plVar9 != (long *)0x0) {
    puVar1 = (ulong *)(plVar9 + 1);
    do {
      uVar13 = *puVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = uVar13 - 4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((uVar13 & 0x1fffffffc) == 4) {
      do {
        uVar13 = *puVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = uVar13 - 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (uVar13 - 1 == 0) {
        (**(code **)(*plVar9 + 8))();
      }
    }
  }
  if (*(char *)((long)param_1 + 0x37) < '\0') {
    __ZdlPv(param_1[4]);
  }
  func_0x00010a05a86c(puVar14);
  FUN_10a5ca2e0(param_1);
  __Unwind_Resume();
  __ZNSt3__115recursive_mutex4lockEv(puVar10 + 2);
  plVar8 = (long *)0x48;
  __Znwm();
  plVar8[2] = (long)&PTR_DAT_110c21f70;
  plVar8[3] = (long)plVar11;
  puVar14 = (undefined8 *)puVar10[0xb];
  lVar12 = puVar10[0xc];
  *plVar8 = (long)(puVar10 + 10);
  plVar8[1] = (long)puVar14;
  *puVar14 = plVar8;
  puVar10[0xb] = plVar8;
  puVar10[0xc] = lVar12 + 1;
  plVar9 = puVar10 + 2;
  __ZNSt3__115recursive_mutex6unlockEv(plVar9);
  plVar15 = (long *)puVar10[1];
  plVar6 = (long *)*puVar10;
  if (puVar10[1] != 0) {
    plVar11 = (long *)(puVar10[1] + 0x10);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar11,0x10);
      if (bVar3) {
        *plVar11 = *plVar11 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  *pplVar7 = plVar8;
  pplVar7[2] = plVar15;
  pplVar7[1] = plVar6;
  return plVar9;
}



/* Entry: 10a82d73c; end: 10a82d7e3;  */

void FUN_10a82d73c(undefined8 *param_1,undefined8 *param_2,long param_3)

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
  plVar6[2] = (long)&PTR_DAT_110c21f70;
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



/* Entry: 10a82d7e4; end: 10a82d863;  */

undefined8 * FUN_10a82d7e4(undefined8 *param_1)

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



/* Entry: 10a82d864; end: 10a82d927;  */

void FUN_10a82d864(undefined8 *param_1,undefined4 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 auStack_78 [2];
  char cStack_61;
  undefined **ppuStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined4 uStack_28;
  
  uStack_30 = 0;
  uStack_38 = 0;
  uStack_40 = 0;
  uStack_48 = 0;
  uStack_50 = 0;
  uStack_58 = 0;
  ppuStack_60 = &PTR_FUN_110c1b340;
  uStack_28 = param_2;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_(&uStack_58,param_3);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_(&uStack_40,param_1 + 4);
  uVar1 = *param_1;
  FUN_10a7caca8(auStack_78,&ppuStack_60);
  FUN_10a86cb78(uVar1,auStack_78);
  if (cStack_61 < '\0') {
    __ZdlPv(auStack_78[0]);
  }
  FUN_10a7d2898(&ppuStack_60);
  return;
}



/* Entry: 10a82d928; end: 10a82d99f;  */

void FUN_10a82d928(undefined8 param_1,long *param_2)

{
  long *plVar1;
  undefined8 in_x6;
  undefined8 in_x7;
  
  FUN_10a82d864(param_1,0,param_2);
  if ((bRam000000011330a9e8 >> 2 & 1) != 0) {
    plVar1 = (long *)*param_2;
    if (-1 < *(char *)((long)param_2 + 0x17)) {
      plVar1 = param_2;
    }
    func_0x00010ae06f08(1,4,&UNK_10f67b877,&UNK_10f67b953,0x3d,&UNK_10f67b9b1,in_x6,in_x7,plVar1);
  }
  return;
}



/* Entry: 10a82d9a0; end: 10a82da23;  */

undefined1  [16] FUN_10a82d9a0(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0xe;
  auVar1._0_8_ = &UNK_10f67c99f;
  return auVar1;
}



/* Entry: 10a82da24; end: 10a82dd2b;  */

void FUN_10a82da24(ulong param_1)

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
  
  func_0x000109887da8(appuStack_c8,&UNK_10f67c99f,0xe);
  pppuVar1 = (undefined8 ***)appuStack_c8[0];
  if (-1 < cStack_b1) {
    pppuVar1 = appuStack_c8;
  }
  *(undefined ***)(param_1 + 0x1b0) = &PTR_DAT_110c23300;
  pppuVar2 = (undefined8 ***)&UNK_10f67a8c5;
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
  uStack_50 = CONCAT44(uStack_50._4_4_,0xffffffff);
  uStack_48 = 0;
  uStack_40 = 0;
  ppuStack_a0 = pppuVar1;
  func_0x00010a052690(param_1 + 0x168,&ppuStack_a0);
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    ppuStack_b0 = &PTR_DAT_110c23300;
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
    FUN_10a052828(param_1,&DAT_10f2e9a11,FUN_10a84dffc,FUN_10a84e120);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&DAT_10f67a8c6,FUN_10a84e2ec,FUN_10a84e408);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&UNK_10f67b9ed,FUN_10a84e514,FUN_10a84e5cc);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&UNK_10f67ba00,FUN_10a84e68c,FUN_10a84e7a8);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,"scope",FUN_10a84ed5c,FUN_10a84ee18);
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
      FUN_10a054234(param_1,&ppuStack_a0,param_1 + 0x1b8,&UNK_10f67c99f,0xe);
      FUN_10a05431c(param_1);
    }
    return;
  }
                    /* WARNING: Does not return */
  pcVar6 = (code *)SoftwareBreakpoint(1,0x10a82dd10);
  (*pcVar6)();
}



/* Entry: 10a82dd2c; end: 10a82de43;  */

void FUN_10a82dd2c(undefined8 param_1)

{
  undefined1 uStack_a9;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined4 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  uStack_a0 = 0;
  uStack_98 = 0;
  puStack_a8 = &UNK_10f67ba1b;
  uStack_88 = 0xffffffffffffffff;
  uStack_90 = 0x100000064;
  puStack_80 = &UNK_10f67a8c5;
  uStack_78 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_60 = 0xe5;
  uStack_58 = 0xffffffff;
  uStack_50 = 0;
  uStack_48 = 0;
  FUN_10a82de44(param_1,&puStack_a8);
  uStack_a0 = 0;
  uStack_98 = 0;
  puStack_a8 = &UNK_10f67ba28;
  uStack_88 = 0xffffffffffffffff;
  uStack_90 = 0x100000064;
  puStack_80 = &UNK_10f67a8c5;
  uStack_78 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_60 = 0xe5;
  uStack_58 = 0xffffffff;
  uStack_50 = 0;
  uStack_48 = 0;
  uStack_a9 = 0;
  FUN_10a82de9c(param_1,&puStack_a8,&uStack_a9);
  uStack_a0 = 0;
  uStack_98 = 0;
  puStack_a8 = &UNK_10f67ba2c;
  uStack_88 = 0xffffffffffffffff;
  uStack_90 = 0x100000064;
  puStack_80 = &UNK_10f67a8c5;
  uStack_78 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_60 = 0xe5;
  uStack_58 = 0xffffffff;
  uStack_50 = 0;
  uStack_48 = 0;
  uStack_a9 = 1;
  FUN_10a82de9c(param_1,&puStack_a8,&uStack_a9);
  FUN_10a003ff4(param_1);
  return;
}



/* Entry: 10a82de44; end: 10a82de9b;  */

ulong FUN_10a82de44(ulong param_1,undefined8 *param_2)

{
  ulong uVar1;
  
  *(undefined1 *)(param_1 + 0x1ac) = 1;
  FUN_10a0050a8(param_1 + 0x168);
  uVar1 = param_1;
  FUN_10a0051e8(param_1,*(undefined4 *)(param_2 + 3),*(undefined4 *)((long)param_2 + 0x1c),
                *(undefined4 *)(param_2 + 10),*(undefined4 *)(param_2 + 4),
                *(undefined4 *)((long)param_2 + 0x24));
  if ((uVar1 & 1) == 0) {
    func_0x0001098946ac(param_1,*param_2);
  }
  return param_1;
}



/* Entry: 10a82de9c; end: 10a82def3;  */

ulong FUN_10a82de9c(ulong param_1,undefined8 *param_2,undefined1 *param_3)

{
  ulong uVar1;
  
  uVar1 = param_1;
  FUN_10a0051e8(param_1,*(undefined4 *)(param_2 + 3),*(undefined4 *)((long)param_2 + 0x1c),
                *(undefined4 *)(param_2 + 10),*(undefined4 *)(param_2 + 4),
                *(undefined4 *)((long)param_2 + 0x24));
  if ((uVar1 & 1) == 0) {
    func_0x00010a84eefc(param_1,*param_2,*param_3);
  }
  return param_1;
}



/* Entry: 10a82def4; end: 10a82e01b;  */

undefined8 * FUN_10a82def4(undefined8 *param_1,undefined8 param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined1 auStack_48 [8];
  long *plStack_40;
  undefined1 uStack_31;
  
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_FUN_110c20cd8;
  *(undefined1 *)(param_1 + 3) = 0;
  *(undefined1 *)(param_1 + 6) = 0;
  param_1[7] = 0;
  param_1[10] = 0;
  param_1[8] = 0;
  *(undefined1 *)(param_1 + 9) = 0;
  param_1[0xb] = 0;
  *(undefined1 *)(param_1 + 0xc) = 0;
  uStack_31 = 6;
  FUN_10a6f3364(auStack_48,param_2,&uStack_31,&DAT_10f66f8a2);
  FUN_10a6eef74(param_1 + 7,auStack_48);
  if (plStack_40 != (long *)0x0) {
    plVar1 = plStack_40 + 1;
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
      (**(code **)(*plStack_40 + 0x10))(plStack_40);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_40);
    }
  }
  return param_1;
}



/* Entry: 10a82e01c; end: 10a82e083;  */

undefined8 * FUN_10a82e01c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c20cd8;
  FUN_10a84ef70(param_1 + 10);
  FUN_10a0772f0(param_1 + 7);
  if ((*(char *)(param_1 + 6) == '\x01') && (*(char *)((long)param_1 + 0x2f) < '\0')) {
    __ZdlPv(param_1[3]);
  }
  *param_1 = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + 1);
  return param_1;
}



/* Entry: 10a82e084; end: 10a82e087;  */

undefined8 * FUN_10a82e084(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c20cd8;
  FUN_10a84ef70(param_1 + 10);
  FUN_10a0772f0(param_1 + 7);
  if ((*(char *)(param_1 + 6) == '\x01') && (*(char *)((long)param_1 + 0x2f) < '\0')) {
    __ZdlPv(param_1[3]);
  }
  *param_1 = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + 1);
  return param_1;
}



/* Entry: 10a82e088; end: 10a82e09b;  */

void FUN_10a82e088(void)

{
  FUN_10a82e01c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a82e09c; end: 10a82e11f;  */

undefined1  [16] FUN_10a82e09c(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0xe;
  auVar1._0_8_ = &UNK_10f63f1aa;
  return auVar1;
}



/* Entry: 10a82e120; end: 10a82e72f;  */

void FUN_10a82e120(ulong param_1)

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
  
  func_0x000109887da8(appuStack_c8,&UNK_10f63f1aa,0xe);
  pppuVar1 = (undefined8 ***)appuStack_c8[0];
  if (-1 < cStack_b1) {
    pppuVar1 = appuStack_c8;
  }
  *(undefined ***)(param_1 + 0x1b0) = &PTR_DAT_110c23158;
  pppuVar2 = (undefined8 ***)&UNK_10f67a8c5;
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
  uStack_58 = 0xe5;
  uStack_50 = CONCAT44(uStack_50._4_4_,0xffffffff);
  uStack_48 = 0;
  uStack_40 = 0;
  ppuStack_a0 = pppuVar1;
  func_0x00010a052690(param_1 + 0x168,&ppuStack_a0);
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    ppuStack_b0 = &PTR_DAT_110c23158;
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
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a82e710;
    FUN_10a054dac(param_1,"cancel",FUN_10a84efc8,1,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a82e710;
    FUN_10a054dac(param_1,&DAT_10f2e34e7,FUN_10a84f590,1,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a0605c4(param_1,&UNK_10f67ba30,FUN_10a84f6a4,0);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&DAT_10f3f25d3,FUN_10a84f86c,FUN_10a84f928);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a0605c4(param_1,&UNK_10f677df3,FUN_10a84fa0c,0);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,2,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a05ef6c(param_1,&PTR_DAT_110c22d50,FUN_10a84fac4);
    FUN_10a0605c4(param_1,&UNK_10f67ba3e,FUN_10a8504fc,0);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a05ef6c(param_1,&PTR_DAT_110b9a108,FUN_10a07c674);
    FUN_10a0605c4(param_1,&UNK_10f67ba47,FUN_10a850630,0);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a05ef6c(param_1,&PTR_DAT_110b9a108,FUN_10a07c674);
    FUN_10a0605c4(param_1,&UNK_10f67ba5b,FUN_10a8506e8,0);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a0605c4(param_1,&DAT_10f2e8c0b,FUN_10a8507a0,0);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,2,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&UNK_10f67ba71,FUN_10a85085c,FUN_10a850918);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&UNK_10f67ba87,FUN_10a8509d8,FUN_10a850aa4);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&UNK_10f67ba9b,FUN_10a850bd8,FUN_10a850ca4);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&UNK_10f67baaf,FUN_10a850dd8,FUN_10a850ea4);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&UNK_10f67bacd,FUN_10a850fd8,FUN_10a8510a4);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&UNK_10f67baea,FUN_10a8511a8,FUN_10a851274);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&UNK_10f67bafe,FUN_10a8513a8,FUN_10a851474);
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
      FUN_10a054234(param_1,&ppuStack_a0,param_1 + 0x1b8,&UNK_10f63f1aa,0xe);
      FUN_10a05431c(param_1);
    }
    return;
  }
LAB_10a82e710:
                    /* WARNING: Does not return */
  pcVar6 = (code *)SoftwareBreakpoint(1,0x10a82e714);
  (*pcVar6)();
}



/* Entry: 10a82e730; end: 10a82e77b;  */

/* WARNING: Possible PIC construction at 0x000100033dfc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100033e00) */

void FUN_10a82e730(undefined8 *param_1,long param_2)

{
  ulong uVar1;
  long lVar2;
  undefined8 uVar3;
  
  if (*(char *)(param_2 + 0x30) != '\x01') {
    *param_1 = 0x6f747561;
    *(undefined1 *)((long)param_1 + 0x17) = 4;
    return;
  }
  if (*(char *)(param_2 + 0x2f) < '\0') {
    lVar2 = *(long *)(param_2 + 0x18);
    uVar1 = *(ulong *)(param_2 + 0x20);
    if (0x16 < uVar1) {
      if (uVar1 < 0x7ffffffffffffff7) {
        lVar2 = 0x19;
        if ((uVar1 | 7) != 0x17) {
          lVar2 = (uVar1 | 7) + 1;
        }
      }
      else {
        func_0x000104bd47d4();
      }
      func_0x000107c60e20(lVar2);
      return;
    }
    *(char *)((long)param_1 + 0x17) = (char)uVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf0b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__memmove_11034c660)(param_1,lVar2,uVar1 + 1);
    return;
  }
  uVar3 = *(undefined8 *)(param_2 + 0x18);
  param_1[1] = *(undefined8 *)(param_2 + 0x20);
  *param_1 = uVar3;
  param_1[2] = *(undefined8 *)(param_2 + 0x28);
  return;
}



/* Entry: 10a82e77c; end: 10a82ed53;  */

undefined8 * FUN_10a82e77c(undefined8 *param_1,long param_2,long *param_3)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  char cVar4;
  bool bVar5;
  code *pcVar6;
  undefined8 *puVar7;
  undefined8 **ppuVar8;
  long lVar9;
  long *plVar10;
  undefined8 *puVar11;
  undefined8 uVar12;
  long lVar13;
  undefined8 ****ppppuStack_c0;
  ulong uStack_b8;
  byte bStack_a9;
  undefined8 *puStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  long lStack_90;
  long *plStack_88;
  undefined8 *puStack_80;
  undefined8 *puStack_78;
  undefined8 uStack_70;
  
  param_1[0x35] = 0;
  param_1[0x36] = 0;
  param_1[0x34] = &PTR_FUN_110c383b8;
  *(undefined2 *)(param_1 + 0x37) = 0x100;
  *param_1 = &PTR_DAT_110b17898;
  param_1[1] = 0;
  plVar1 = param_1 + 3;
  param_1[2] = 0;
  FUN_10a0040d0(plVar1,&PTR_PTR_110c20e68);
  *param_1 = &PTR_FUN_110c20d38;
  param_1[3] = &PTR_DAT_110c20db0;
  param_1[0x34] = &PTR_DAT_110c20e28;
  param_1[8] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = param_2;
  param_1[9] = 0;
  *(undefined8 *)((long)param_1 + 0x4d) = 0;
  lVar9 = param_3[1];
  lVar13 = *param_3;
  plVar10 = param_1 + 0xd;
  param_1[0xe] = param_3[1];
  *plVar10 = lVar13;
  if (lVar9 != 0) {
    plVar2 = (long *)(lVar9 + 8);
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar5) {
        *plVar2 = *plVar2 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  puVar11 = param_1 + 0xf;
  *(undefined1 *)puVar11 = 0;
  *(undefined1 *)(param_1 + 0x12) = 0;
  *(undefined4 *)(param_1 + 0x13) = 2;
  param_1[0x14] = 0;
  puVar7 = (undefined8 *)0x98;
  __Znwm();
  puVar7[1] = 0;
  puVar7[2] = 0;
  *puVar7 = &PTR_FUN_110c22d78;
  puVar7[0xd] = 0;
  puVar7[0xc] = 0;
  puVar7[0xf] = 0;
  puVar7[0xe] = 0;
  puVar7[0x11] = 0;
  puVar7[0x10] = 0;
  puVar7[0x12] = 0;
  puVar7[3] = &PTR_FUN_110c22dc8;
  puVar7[9] = 0;
  puVar7[8] = 0;
  puVar7[0xb] = 0;
  puVar7[10] = 0;
  puVar7[5] = 0;
  puVar7[4] = 0;
  puVar7[7] = 0;
  puVar7[6] = 0;
  *(undefined4 *)(puVar7 + 10) = 0x3f800000;
  puVar7[0xb] = FUN_10a85187c;
  puVar7[0xc] = &PTR_DAT_110ae9180;
  param_1[0x15] = puVar7 + 3;
  param_1[0x16] = puVar7;
  puVar7 = (undefined8 *)0x98;
  __Znwm();
  puVar7[1] = 0;
  puVar7[2] = 0;
  *puVar7 = &PTR_FUN_110b9a070;
  puVar7[0xd] = 0;
  puVar7[0xc] = 0;
  puVar7[0xf] = 0;
  puVar7[0xe] = 0;
  puVar7[0x11] = 0;
  puVar7[0x10] = 0;
  puVar7[3] = &PTR_FUN_110b9a0c0;
  puVar7[0x12] = 0;
  puVar7[9] = 0;
  puVar7[8] = 0;
  puVar7[0xb] = 0;
  puVar7[10] = 0;
  puVar7[5] = 0;
  puVar7[4] = 0;
  puVar7[7] = 0;
  puVar7[6] = 0;
  *(undefined4 *)(puVar7 + 10) = 0x3f800000;
  puVar7[0xb] = FUN_10a004c4c;
  puVar7[0xc] = &PTR_DAT_110ae9180;
  param_1[0x17] = puVar7 + 3;
  param_1[0x18] = puVar7;
  puVar7 = (undefined8 *)0x98;
  __Znwm();
  puVar7[1] = 0;
  puVar7[2] = 0;
  *puVar7 = &PTR_FUN_110b9a070;
  puVar7[0xd] = 0;
  puVar7[0xc] = 0;
  puVar7[0xf] = 0;
  puVar7[0xe] = 0;
  puVar7[0x11] = 0;
  puVar7[0x10] = 0;
  puVar7[0x12] = 0;
  puVar7[3] = &PTR_FUN_110b9a0c0;
  puVar7[9] = 0;
  puVar7[8] = 0;
  puVar7[0xb] = 0;
  puVar7[10] = 0;
  puVar7[5] = 0;
  puVar7[4] = 0;
  puVar7[7] = 0;
  puVar7[6] = 0;
  *(undefined4 *)(puVar7 + 10) = 0x3f800000;
  puVar7[0xb] = FUN_10a004c4c;
  puVar7[0xc] = &PTR_DAT_110ae9180;
  param_1[0x19] = puVar7 + 3;
  param_1[0x1a] = puVar7;
  param_1[0x1b] = 0;
  *(undefined1 *)(param_1 + 0x1c) = 1;
  *(undefined4 *)(param_1 + 0x1d) = 0;
  *(undefined1 *)(param_1 + 0x1e) = 0;
  *(undefined1 *)(param_1 + 0x21) = 0;
  *(undefined1 *)((long)param_1 + 0xe5) = 0;
  *(undefined4 *)((long)param_1 + 0xe1) = 0;
  param_1[0x22] = param_1 + 0x23;
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  param_1[0x26] = 0;
  param_1[0x27] = 0;
  *(undefined1 *)(param_1 + 0x31) = 0;
  param_1[0x28] = 0x4000000000000000;
  param_1[0x29] = 0;
  param_1[0x2a] = 0;
  *(undefined1 *)(param_1 + 0x2b) = 0;
  uVar12 = *(undefined8 *)(param_2 + 0x960);
  func_0x000107c2b054(&puStack_80,&UNK_10f63f1aa);
  FUN_10a6eccb4(param_1 + 0x32,uVar12,&puStack_80);
  if ((long)uStack_70 < 0) {
    __ZdlPv(puStack_80);
  }
  lStack_90 = *(long *)(*plVar10 + 0x38);
  plVar2 = *(long **)(*plVar10 + 0x40);
  if (plVar2 != (long *)0x0) {
    plVar3 = plVar2 + 1;
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar3,0x10);
      if (bVar5) {
        *plVar3 = *plVar3 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  cVar4 = *(char *)(lStack_90 + 0xe0);
  plStack_88 = plVar2;
  if (cVar4 != '\x01' && cVar4 != '\x06') {
    puVar7 = (undefined8 *)0x50;
    __Znwm();
    uStack_98 = 0x8000000000000050;
    uStack_a0 = 0x4b;
    puVar7[5] = 0x70797420666f2072;
    puVar7[4] = 0x6f207465736e7520;
    puVar7[7] = 0x754320726f205241;
    puVar7[6] = 0x65766974614e2065;
    *(undefined8 *)((long)puVar7 + 0x43) = 0x20746f67202d206d;
    *(undefined8 *)((long)puVar7 + 0x3b) = 0x6f7473754320726f;
    puVar7[1] = 0x203a6e6f69737365;
    *puVar7 = 0x53676e697070614d;
    puVar7[3] = 0x6562207473756d20;
    puVar7[2] = 0x6e6f697461636f6c;
    *(undefined1 *)((long)puVar7 + 0x4b) = 0;
    puStack_a8 = puVar7;
    FUN_10a6e9574(&ppppuStack_c0,cVar4);
    if (-1 < (char)bStack_a9) {
      uStack_b8 = (ulong)bStack_a9;
      ppppuStack_c0 = &ppppuStack_c0;
    }
    ppuVar8 = &puStack_a8;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (ppuVar8,ppppuStack_c0,uStack_b8);
    puStack_78 = ppuVar8[1];
    puStack_80 = *ppuVar8;
    uStack_70 = ppuVar8[2];
    ppuVar8[1] = (undefined8 *)0x0;
    ppuVar8[2] = (undefined8 *)0x0;
    *ppuVar8 = (undefined8 *)0x0;
    FUN_10a0029c0(&puStack_80);
                    /* WARNING: Does not return */
    pcVar6 = (code *)SoftwareBreakpoint(1,0x10a82eba0);
    (*pcVar6)();
  }
  FUN_10a82e730(&puStack_80,*plVar10);
  if (*(char *)(param_1 + 0x12) == '\x01') {
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_(puVar11,&puStack_80);
  }
  else {
    if ((long)uStack_70 < 0) {
      func_0x000107c3192c(puVar11,puStack_80,puStack_78);
    }
    else {
      param_1[0x10] = puStack_78;
      *puVar11 = puStack_80;
      param_1[0x11] = uStack_70;
    }
    *(undefined1 *)(param_1 + 0x12) = 1;
  }
  if (uStack_70._7_1_ < '\0') {
    __ZdlPv(puStack_80);
  }
  plVar10 = (long *)((long)plVar1 + *(long *)(*plVar1 + -0x18));
  if ((*(byte *)(plVar10 + 3) & 1) == 0) {
    *(undefined1 *)(plVar10 + 3) = 1;
    plVar10[2] = param_2;
    plVar10[1] = *(long *)(*(long *)(param_2 + 0x850) + 0x2c);
    (**(code **)(*plVar10 + 0x18))();
  }
  FUN_10a5ae998(param_1[6],&PTR_DAT_110b99f08,param_2,plVar1);
  if (plVar2 != (long *)0x0) {
    plVar1 = plVar2 + 1;
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
      (**(code **)(*plVar2 + 0x10))(plVar2);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar2);
    }
  }
  return param_1;
}



/* Entry: 10a82ed54; end: 10a82f3c3;  */

/* WARNING: Removing unreachable block (ram,0x00010a82eeb4) */

undefined8 * FUN_10a82ed54(undefined8 *param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  long *plVar7;
  ulong uVar8;
  long lVar9;
  long *plVar10;
  long lVar11;
  undefined8 uVar12;
  long *plStack_60;
  long *plStack_58;
  undefined8 *puStack_50;
  undefined8 uStack_48;
  
  *param_1 = &PTR_FUN_110c20d38;
  param_1[3] = &PTR_DAT_110c20db0;
  param_1[0x34] = &PTR_DAT_110c20e28;
  lVar11 = param_1[8];
  if (lVar11 == 0) goto LAB_10a82f088;
  if ((bRam000000011330a9e8 >> 2 & 1) == 0) {
    uVar12 = param_1[0x32];
LAB_10a82eddc:
    plVar10 = (long *)(lVar11 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar3) {
        *plVar10 = *plVar10 + 4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  else {
    func_0x00010ae06f08(1,4,&UNK_10f67bb5e,&UNK_10f67bba2,0x42,&UNK_10f67bbeb);
    lVar11 = param_1[8];
    uVar12 = param_1[0x32];
    if (lVar11 != 0) goto LAB_10a82eddc;
  }
  puVar5 = (undefined8 *)0x70;
  __Znwm();
  *puVar5 = FUN_10a85aed0;
  puVar5[1] = FUN_10a85b1ac;
  func_0x0001092ba17c(puVar5 + 2);
  plVar10 = (long *)puVar5[7];
  if (plVar10 != (long *)0x0) {
    plVar7 = plVar10 + 1;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar3) {
        *plVar7 = *plVar7 + 4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  puVar5[0xb] = lVar11;
  puVar5[9] = uVar12;
  *(undefined1 *)(puVar5 + 10) = 0;
  *(undefined1 *)(puVar5 + 0xd) = 0;
  puVar6 = puVar5 + 9;
  plStack_60 = plVar10;
  func_0x0001092ba064(puVar6,puVar5);
  if (((ulong)puVar6 & 1) == 0) {
    FUN_10a839908(puVar5 + 0xc,puVar5 + 0xb);
    puVar5[9] = puVar5[0xc];
    plVar7 = (long *)(puVar5[0xc] + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar3) {
        *plVar7 = *plVar7 + 4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (((uint)*(undefined8 *)(puVar5[9] + 0x10) >> 1 & 1) == 0) {
      *(undefined1 *)(puVar5 + 0xd) = 1;
      lVar11 = puVar5[9];
      plVar7 = (long *)(lVar11 + 0x10);
      uVar12 = puVar5[3];
      do {
        lVar9 = *plVar7;
        if (lVar9 == 0) {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar7,0x10);
          if (bVar3) {
            *plVar7 = 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
          if (cVar2 == '\0') {
            plStack_58 = (long *)0x0;
            puStack_50 = puVar5;
            uStack_48 = uVar12;
            func_0x000109d1b588(lVar11 + 0x18,&plStack_58);
            *(undefined8 *)(lVar11 + 0x10) = 0;
            goto LAB_10a82efec;
          }
        }
        else {
          ClearExclusiveLocal();
        }
      } while (((uint)lVar9 >> 1 & 1) == 0);
    }
    plVar7 = (long *)puVar5[9];
    if (((uint)*(undefined8 *)(puVar5[9] + 0x10) >> 5 & 1) != 0) {
      func_0x0001092af97c(plVar7 + 0x12);
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x10a82f298);
      (*pcVar4)();
    }
    if (plVar7 != (long *)0x0) {
      puVar1 = (ulong *)(plVar7 + 1);
      do {
        uVar8 = *puVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = uVar8 - 4;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if ((uVar8 & 0x1fffffffc) == 4) {
        do {
          uVar8 = *puVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar3) {
            *puVar1 = uVar8 - 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (uVar8 - 1 == 0) {
          (**(code **)(*plVar7 + 8))();
        }
      }
    }
    plVar7 = (long *)puVar5[0xc];
    if (plVar7 != (long *)0x0) {
      puVar1 = (ulong *)(plVar7 + 1);
      do {
        uVar8 = *puVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = uVar8 - 4;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if ((uVar8 & 0x1fffffffc) == 4) {
        do {
          uVar8 = *puVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar3) {
            *puVar1 = uVar8 - 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (uVar8 - 1 == 0) {
          (**(code **)(*plVar7 + 8))();
        }
      }
    }
    func_0x0001092ba100(puVar5 + 2);
    plVar7 = (long *)puVar5[0xb];
    if (plVar7 != (long *)0x0) {
      puVar1 = (ulong *)(plVar7 + 1);
      do {
        uVar8 = *puVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = uVar8 - 4;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if ((uVar8 & 0x1fffffffc) == 4) {
        do {
          uVar8 = *puVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar3) {
            *puVar1 = uVar8 - 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (uVar8 - 1 == 0) {
          (**(code **)(*plVar7 + 8))();
        }
      }
    }
    func_0x000109d1a1d0(puVar5 + 2);
    __ZdlPv(puVar5);
  }
LAB_10a82efec:
  FUN_109d1a244(&plStack_60);
  plVar7 = (long *)param_1[8];
  if (plVar7 != (long *)0x0) {
    puVar1 = (ulong *)(plVar7 + 1);
    do {
      uVar8 = *puVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = uVar8 - 4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((uVar8 & 0x1fffffffc) == 4) {
      do {
        uVar8 = *puVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = uVar8 - 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (uVar8 - 1 == 0) {
        (**(code **)(*plVar7 + 8))();
      }
    }
  }
  param_1[8] = 0;
  if (plVar10 != (long *)0x0) {
    puVar1 = (ulong *)(plVar10 + 1);
    do {
      uVar8 = *puVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = uVar8 - 4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((uVar8 & 0x1fffffffc) == 4) {
      do {
        uVar8 = *puVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = uVar8 - 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (uVar8 - 1 == 0) {
        (**(code **)(*plVar10 + 8))(plVar10);
      }
    }
  }
LAB_10a82f088:
  if ((bRam000000011330a9e8 >> 2 & 1) != 0) {
    func_0x00010ae06f08(1,4,&UNK_10f67bb5e,&UNK_10f67bba2,0x4a,&UNK_10f67bc10);
  }
  (**(code **)(*(long *)param_1[0x32] + 0x38))(&plStack_58);
  FUN_109d1a244(&plStack_58);
  if (plStack_58 != (long *)0x0) {
    puVar1 = (ulong *)(plStack_58 + 1);
    do {
      uVar8 = *puVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = uVar8 - 4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((uVar8 & 0x1fffffffc) == 4) {
      do {
        uVar8 = *puVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = uVar8 - 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (uVar8 - 1 == 0) {
        (**(code **)(*plStack_58 + 8))();
      }
    }
  }
  if ((bRam000000011330a9e8 >> 2 & 1) != 0) {
    func_0x00010ae06f08(1,4,&UNK_10f67bb5e,&UNK_10f67bba2,0x4c,&UNK_10f67bc34);
  }
  func_0x00010a225c4c(param_1 + 0x32);
  FUN_10a5ae930(param_1[6]);
  func_0x00010a061620(param_1 + 0x32);
  plVar10 = (long *)param_1[0x2a];
  param_1[0x2a] = 0;
  if (plVar10 != (long *)0x0) {
    (**(code **)(*plVar10 + 8))();
  }
  if (param_1[0x29] != 0) {
    func_0x0001092b4274(param_1 + 0x29);
  }
  FUN_10a8398c8(param_1[0x23]);
  if ((*(char *)(param_1 + 0x21) == '\x01') && (*(char *)((long)param_1 + 0x107) < '\0')) {
    __ZdlPv(param_1[0x1e]);
  }
  FUN_10a004cfc(param_1 + 0x19);
  FUN_10a004cfc(param_1 + 0x17);
  FUN_10a8515a8(param_1 + 0x15);
  if ((*(char *)(param_1 + 0x12) == '\x01') && (*(char *)((long)param_1 + 0x8f) < '\0')) {
    __ZdlPv(param_1[0xf]);
  }
  FUN_10a71e578(param_1 + 0xd);
  plVar10 = (long *)param_1[8];
  if (plVar10 != (long *)0x0) {
    puVar1 = (ulong *)(plVar10 + 1);
    do {
      uVar8 = *puVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = uVar8 - 4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((uVar8 & 0x1fffffffc) == 4) {
      do {
        uVar8 = *puVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = uVar8 - 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (uVar8 - 1 == 0) {
        (**(code **)(*plVar10 + 8))();
      }
    }
  }
  param_1[3] = &PTR_DAT_110c21950;
  param_1[0x34] = &PTR_FUN_110c219c8;
  func_0x00010a004e5c(param_1 + 6);
  func_0x00010a004e04(param_1 + 4);
  *param_1 = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + 1);
  return param_1;
}



/* Entry: 10a82f3c4; end: 10a82f3df;  */

/* WARNING: Removing unreachable block (ram,0x00010a82eeb4) */

undefined8 * FUN_10a82f3c4(undefined8 *param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  long *plVar7;
  ulong uVar8;
  long lVar9;
  long *plVar10;
  long lVar11;
  undefined8 uVar12;
  long *plStack_60;
  long *plStack_58;
  undefined8 *puStack_50;
  undefined8 uStack_48;
  
  *param_1 = &PTR_FUN_110c20d38;
  param_1[3] = &PTR_DAT_110c20db0;
  param_1[0x34] = &PTR_DAT_110c20e28;
  lVar11 = param_1[8];
  if (lVar11 == 0) goto LAB_10a82f088;
  if ((bRam000000011330a9e8 >> 2 & 1) == 0) {
    uVar12 = param_1[0x32];
LAB_10a82eddc:
    plVar10 = (long *)(lVar11 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar3) {
        *plVar10 = *plVar10 + 4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  else {
    func_0x00010ae06f08(1,4,&UNK_10f67bb5e,&UNK_10f67bba2,0x42,&UNK_10f67bbeb);
    lVar11 = param_1[8];
    uVar12 = param_1[0x32];
    if (lVar11 != 0) goto LAB_10a82eddc;
  }
  puVar5 = (undefined8 *)0x70;
  __Znwm();
  *puVar5 = FUN_10a85aed0;
  puVar5[1] = FUN_10a85b1ac;
  func_0x0001092ba17c(puVar5 + 2);
  plVar10 = (long *)puVar5[7];
  if (plVar10 != (long *)0x0) {
    plVar7 = plVar10 + 1;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar3) {
        *plVar7 = *plVar7 + 4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  puVar5[0xb] = lVar11;
  puVar5[9] = uVar12;
  *(undefined1 *)(puVar5 + 10) = 0;
  *(undefined1 *)(puVar5 + 0xd) = 0;
  puVar6 = puVar5 + 9;
  plStack_60 = plVar10;
  func_0x0001092ba064(puVar6,puVar5);
  if (((ulong)puVar6 & 1) == 0) {
    FUN_10a839908(puVar5 + 0xc,puVar5 + 0xb);
    puVar5[9] = puVar5[0xc];
    plVar7 = (long *)(puVar5[0xc] + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar3) {
        *plVar7 = *plVar7 + 4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (((uint)*(undefined8 *)(puVar5[9] + 0x10) >> 1 & 1) == 0) {
      *(undefined1 *)(puVar5 + 0xd) = 1;
      lVar11 = puVar5[9];
      plVar7 = (long *)(lVar11 + 0x10);
      uVar12 = puVar5[3];
      do {
        lVar9 = *plVar7;
        if (lVar9 == 0) {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar7,0x10);
          if (bVar3) {
            *plVar7 = 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
          if (cVar2 == '\0') {
            plStack_58 = (long *)0x0;
            puStack_50 = puVar5;
            uStack_48 = uVar12;
            func_0x000109d1b588(lVar11 + 0x18,&plStack_58);
            *(undefined8 *)(lVar11 + 0x10) = 0;
            goto LAB_10a82efec;
          }
        }
        else {
          ClearExclusiveLocal();
        }
      } while (((uint)lVar9 >> 1 & 1) == 0);
    }
    plVar7 = (long *)puVar5[9];
    if (((uint)*(undefined8 *)(puVar5[9] + 0x10) >> 5 & 1) != 0) {
      func_0x0001092af97c(plVar7 + 0x12);
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x10a82f298);
      (*pcVar4)();
    }
    if (plVar7 != (long *)0x0) {
      puVar1 = (ulong *)(plVar7 + 1);
      do {
        uVar8 = *puVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = uVar8 - 4;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if ((uVar8 & 0x1fffffffc) == 4) {
        do {
          uVar8 = *puVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar3) {
            *puVar1 = uVar8 - 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (uVar8 - 1 == 0) {
          (**(code **)(*plVar7 + 8))();
        }
      }
    }
    plVar7 = (long *)puVar5[0xc];
    if (plVar7 != (long *)0x0) {
      puVar1 = (ulong *)(plVar7 + 1);
      do {
        uVar8 = *puVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = uVar8 - 4;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if ((uVar8 & 0x1fffffffc) == 4) {
        do {
          uVar8 = *puVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar3) {
            *puVar1 = uVar8 - 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (uVar8 - 1 == 0) {
          (**(code **)(*plVar7 + 8))();
        }
      }
    }
    func_0x0001092ba100(puVar5 + 2);
    plVar7 = (long *)puVar5[0xb];
    if (plVar7 != (long *)0x0) {
      puVar1 = (ulong *)(plVar7 + 1);
      do {
        uVar8 = *puVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = uVar8 - 4;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if ((uVar8 & 0x1fffffffc) == 4) {
        do {
          uVar8 = *puVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar3) {
            *puVar1 = uVar8 - 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (uVar8 - 1 == 0) {
          (**(code **)(*plVar7 + 8))();
        }
      }
    }
    func_0x000109d1a1d0(puVar5 + 2);
    __ZdlPv(puVar5);
  }
LAB_10a82efec:
  FUN_109d1a244(&plStack_60);
  plVar7 = (long *)param_1[8];
  if (plVar7 != (long *)0x0) {
    puVar1 = (ulong *)(plVar7 + 1);
    do {
      uVar8 = *puVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = uVar8 - 4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((uVar8 & 0x1fffffffc) == 4) {
      do {
        uVar8 = *puVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = uVar8 - 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (uVar8 - 1 == 0) {
        (**(code **)(*plVar7 + 8))();
      }
    }
  }
  param_1[8] = 0;
  if (plVar10 != (long *)0x0) {
    puVar1 = (ulong *)(plVar10 + 1);
    do {
      uVar8 = *puVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = uVar8 - 4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((uVar8 & 0x1fffffffc) == 4) {
      do {
        uVar8 = *puVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = uVar8 - 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (uVar8 - 1 == 0) {
        (**(code **)(*plVar10 + 8))(plVar10);
      }
    }
  }
LAB_10a82f088:
  if ((bRam000000011330a9e8 >> 2 & 1) != 0) {
    func_0x00010ae06f08(1,4,&UNK_10f67bb5e,&UNK_10f67bba2,0x4a,&UNK_10f67bc10);
  }
  (**(code **)(*(long *)param_1[0x32] + 0x38))(&plStack_58);
  FUN_109d1a244(&plStack_58);
  if (plStack_58 != (long *)0x0) {
    puVar1 = (ulong *)(plStack_58 + 1);
    do {
      uVar8 = *puVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = uVar8 - 4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((uVar8 & 0x1fffffffc) == 4) {
      do {
        uVar8 = *puVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = uVar8 - 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (uVar8 - 1 == 0) {
        (**(code **)(*plStack_58 + 8))();
      }
    }
  }
  if ((bRam000000011330a9e8 >> 2 & 1) != 0) {
    func_0x00010ae06f08(1,4,&UNK_10f67bb5e,&UNK_10f67bba2,0x4c,&UNK_10f67bc34);
  }
  func_0x00010a225c4c(param_1 + 0x32);
  FUN_10a5ae930(param_1[6]);
  func_0x00010a061620(param_1 + 0x32);
  plVar10 = (long *)param_1[0x2a];
  param_1[0x2a] = 0;
  if (plVar10 != (long *)0x0) {
    (**(code **)(*plVar10 + 8))();
  }
  if (param_1[0x29] != 0) {
    func_0x0001092b4274(param_1 + 0x29);
  }
  FUN_10a8398c8(param_1[0x23]);
  if ((*(char *)(param_1 + 0x21) == '\x01') && (*(char *)((long)param_1 + 0x107) < '\0')) {
    __ZdlPv(param_1[0x1e]);
  }
  FUN_10a004cfc(param_1 + 0x19);
  FUN_10a004cfc(param_1 + 0x17);
  FUN_10a8515a8(param_1 + 0x15);
  if ((*(char *)(param_1 + 0x12) == '\x01') && (*(char *)((long)param_1 + 0x8f) < '\0')) {
    __ZdlPv(param_1[0xf]);
  }
  FUN_10a71e578(param_1 + 0xd);
  plVar10 = (long *)param_1[8];
  if (plVar10 != (long *)0x0) {
    puVar1 = (ulong *)(plVar10 + 1);
    do {
      uVar8 = *puVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = uVar8 - 4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((uVar8 & 0x1fffffffc) == 4) {
      do {
        uVar8 = *puVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = uVar8 - 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (uVar8 - 1 == 0) {
        (**(code **)(*plVar10 + 8))();
      }
    }
  }
  param_1[3] = &PTR_DAT_110c21950;
  param_1[0x34] = &PTR_FUN_110c219c8;
  func_0x00010a004e5c(param_1 + 6);
  func_0x00010a004e04(param_1 + 4);
  *param_1 = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + 1);
  return param_1;
}



/* Entry: 10a82f3e0; end: 10a82f40b;  */

void FUN_10a82f3e0(void)

{
  FUN_10a82ed54();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a82f40c; end: 10a82f43b;  */

void FUN_10a82f40c(long *param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(*param_1 + -0x18);
  FUN_10a82ed54((long)param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)((long)param_1 + lVar1);
  return;
}



/* Entry: 10a82f43c; end: 10a82f81b;  */

void FUN_10a82f43c(long *param_1,undefined1 *param_2)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  char cVar4;
  bool bVar5;
  undefined1 *puVar6;
  undefined1 uVar7;
  long lVar8;
  long *unaff_x19;
  undefined1 *unaff_x20;
  long *unaff_x21;
  long *unaff_x22;
  ulong unaff_x23;
  ulong unaff_x24;
  undefined8 unaff_x27;
  undefined8 unaff_x28;
  undefined1 *unaff_x29;
  code *unaff_x30;
  undefined8 uVar9;
  undefined8 uVar10;
  
  while( true ) {
    *(undefined8 *)((long)register0x00000008 + -0x50) = unaff_x28;
    *(undefined8 *)((long)register0x00000008 + -0x48) = unaff_x27;
    *(ulong *)((long)register0x00000008 + -0x40) = unaff_x24;
    *(ulong *)((long)register0x00000008 + -0x38) = unaff_x23;
    *(long **)((long)register0x00000008 + -0x30) = unaff_x22;
    *(long **)((long)register0x00000008 + -0x28) = unaff_x21;
    *(undefined1 **)((long)register0x00000008 + -0x20) = unaff_x20;
    *(long **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
    *(undefined8 *)((long)register0x00000008 + -0x58) =
         *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
    unaff_x19 = param_1;
    puVar6 = param_2;
    if ((1 < (int)param_1[0x13]) && ((*(byte *)((long)param_1 + 0xe3) & 1) == 0)) {
      if (*(char *)(param_1[0xd] + 0x48) == '\x01') {
        *(undefined8 *)((long)register0x00000008 + -0x160) = 0;
        *(undefined8 *)((long)register0x00000008 + -0x158) = 2000;
        *(undefined1 *)((long)register0x00000008 + -0x150) = 2;
        unaff_x19 = (long *)(param_2 + 0x278);
        puVar6 = (undefined1 *)((long)register0x00000008 + -0x160);
        FUN_10a0378a8();
      }
      unaff_x20 = param_2;
      if (param_1[8] == 0) {
        if ((*(char *)((long)param_1 + 0xe1) == '\x01') &&
           ((*(byte *)((long)param_1 + 0xe2) & 1) == 0)) {
          unaff_x23 = (ulong)(1.0 <= (double)param_1[0x1b]);
        }
        else {
          unaff_x23 = 0;
        }
        lVar8 = *(long *)(param_1[0xd] + 0x38);
        plVar2 = *(long **)(param_1[0xd] + 0x40);
        if (plVar2 != (long *)0x0) {
          plVar1 = plVar2 + 1;
          do {
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar5) {
              *plVar1 = *plVar1 + 1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
        }
        if (lVar8 == 0) {
          unaff_x24 = 0;
        }
        else {
          lVar8 = *(long *)(param_1[0xd] + 0x38);
          unaff_x22 = *(long **)(param_1[0xd] + 0x40);
          if (unaff_x22 == (long *)0x0) {
            unaff_x24 = (ulong)(*(char *)(lVar8 + 0xe0) == '\x01');
          }
          else {
            plVar1 = unaff_x22 + 1;
            do {
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
              if (bVar5) {
                *plVar1 = *plVar1 + 1;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
            unaff_x24 = (ulong)(*(char *)(lVar8 + 0xe0) == '\x01');
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
              (**(code **)(*unaff_x22 + 0x10))(unaff_x22);
              __ZNSt3__119__shared_weak_count14__release_weakEv(unaff_x22);
            }
          }
        }
        if (plVar2 != (long *)0x0) {
          plVar1 = plVar2 + 1;
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
            (**(code **)(*plVar2 + 0x10))(plVar2);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar2);
          }
        }
        *(uint *)((long)register0x00000008 + -0x160) = *(byte *)((long)param_1 + 0xe1) ^ 1;
        *(undefined8 *)((long)register0x00000008 + -0x158) = 0;
        *(undefined8 *)((long)register0x00000008 + -0x150) = 0;
        *(undefined1 *)((long)register0x00000008 + -0x140) = 0;
        *(undefined1 *)((long)register0x00000008 + -0xb0) = 0;
        *(undefined4 *)((long)register0x00000008 + -0xa0) = 1;
        *(undefined8 *)((long)register0x00000008 + -0x98) = 0x96;
        *(byte *)((long)register0x00000008 + -0x90) = (byte)unaff_x23;
        *(undefined1 *)((long)register0x00000008 + -0x8f) = 0;
        lVar8 = param_1[0x13];
        *(int *)((long)register0x00000008 + -0x8c) = (int)param_1[0x1d];
        *(int *)((long)register0x00000008 + -0x88) = (int)lVar8;
        if ((int)unaff_x24 == 0) {
          uVar7 = 0;
          *(undefined1 *)((long)register0x00000008 + -0x80) = 0;
        }
        else {
          lVar8 = *(long *)(param_1[0xd] + 0x38);
          lVar3 = *(long *)(param_1[0xd] + 0x40);
          *(long *)((long)register0x00000008 + -0x178) = lVar8;
          *(long *)((long)register0x00000008 + -0x170) = lVar3;
          if (lVar3 != 0) {
            plVar2 = (long *)(lVar3 + 8);
            do {
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
              if (bVar5) {
                *plVar2 = *plVar2 + 1;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
          }
          if (*(char *)(lVar8 + 0xff) < '\0') {
            func_0x000107c3192c((undefined1 *)((long)register0x00000008 + -0x80),
                                *(undefined8 *)(lVar8 + 0xe8),*(undefined8 *)(lVar8 + 0xf0));
          }
          else {
            uVar10 = *(undefined8 *)(lVar8 + 0xf0);
            uVar9 = *(undefined8 *)(lVar8 + 0xe8);
            *(undefined8 *)((long)register0x00000008 + -0x70) = *(undefined8 *)(lVar8 + 0xf8);
            *(undefined8 *)((long)register0x00000008 + -0x78) = uVar10;
            *(undefined8 *)((long)register0x00000008 + -0x80) = uVar9;
          }
          uVar7 = 1;
        }
        *(undefined1 *)((long)register0x00000008 + -0x68) = uVar7;
        unaff_x19 = (long *)(param_2 + 0x300);
        puVar6 = (undefined1 *)((long)register0x00000008 + -0x160);
        FUN_10a7d0598();
        if ((*(char *)((long)register0x00000008 + -0x68) == '\x01') &&
           (*(char *)((long)register0x00000008 + -0x69) < '\0')) {
          unaff_x19 = *(long **)((long)register0x00000008 + -0x80);
          __ZdlPv();
        }
        unaff_x21 = *(long **)((long)register0x00000008 + -0x150);
        if (unaff_x21 != (long *)0x0) {
          plVar2 = unaff_x21 + 1;
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
            (**(code **)(*unaff_x21 + 0x10))(unaff_x21);
            unaff_x19 = unaff_x21;
            __ZNSt3__119__shared_weak_count14__release_weakEv();
          }
        }
        if (((int)unaff_x24 != 0) &&
           (unaff_x21 = *(long **)((long)register0x00000008 + -0x170), unaff_x21 != (long *)0x0)) {
          plVar2 = unaff_x21 + 1;
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
            (**(code **)(*unaff_x21 + 0x10))(unaff_x21);
            unaff_x19 = unaff_x21;
            __ZNSt3__119__shared_weak_count14__release_weakEv();
          }
        }
        if ((char)param_1[0x21] == '\x01') {
          *(undefined1 *)((long)register0x00000008 + -0x160) = 0;
          unaff_x21 = (long *)((long)register0x00000008 + -0x158);
          *(undefined8 *)((long)register0x00000008 + -0x150) = 0;
          *(undefined8 *)((long)register0x00000008 + -0x148) = 0;
          *(undefined8 *)((long)register0x00000008 + -0x158) = 0;
          FUN_10a1ccb30((undefined1 *)((long)register0x00000008 + -0x140),param_1 + 0x1e);
          puVar6 = (undefined1 *)((long)register0x00000008 + -0x160);
          FUN_10a6efaac(param_2 + 0x410);
          if ((*(char *)((long)register0x00000008 + -0x128) == '\x01') &&
             (*(char *)((long)register0x00000008 + -0x129) < '\0')) {
            __ZdlPv(*(undefined8 *)((long)register0x00000008 + -0x140));
          }
          *(long **)((long)register0x00000008 + -0x168) = unaff_x21;
          unaff_x19 = (long *)((long)register0x00000008 + -0x168);
          FUN_10a2303d4();
          if ((*(byte *)(param_1 + 0x21) & 1) != 0) {
            if (*(char *)((long)param_1 + 0x107) < '\0') {
              unaff_x19 = (long *)param_1[0x1e];
              __ZdlPv();
            }
            *(undefined1 *)(param_1 + 0x21) = 0;
          }
        }
        *(byte *)((long)param_1 + 0xe2) = *(byte *)((long)param_1 + 0xe2) & 1 | (byte)unaff_x23;
      }
    }
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)((long)register0x00000008 + -0x58))
    break;
    ___stack_chk_fail();
    FUN_10a0772f0((undefined1 *)((long)register0x00000008 + -0x178));
    FUN_10a22ffb4((ulong)unaff_x21 | 8);
    unaff_x30 = FUN_10a82f81c;
    param_1 = unaff_x19;
    __Unwind_Resume();
    param_1 = param_1 + -3;
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x180);
    param_2 = puVar6;
  }
  return;
}



/* Entry: 10a82f81c; end: 10a82f823;  */

void FUN_10a82f81c(long *param_1,undefined1 *param_2)

{
  long *plVar1;
  long lVar2;
  char cVar3;
  bool bVar4;
  long *plVar5;
  undefined1 *puVar6;
  undefined1 uVar7;
  long lVar8;
  long *unaff_x19;
  undefined1 *unaff_x20;
  long *unaff_x21;
  long *unaff_x22;
  ulong unaff_x23;
  ulong unaff_x24;
  undefined8 unaff_x27;
  undefined8 unaff_x28;
  undefined1 *unaff_x29;
  code *unaff_x30;
  undefined8 uVar9;
  undefined8 uVar10;
  
  while( true ) {
    plVar5 = param_1 + -3;
    *(undefined8 *)((long)register0x00000008 + -0x50) = unaff_x28;
    *(undefined8 *)((long)register0x00000008 + -0x48) = unaff_x27;
    *(ulong *)((long)register0x00000008 + -0x40) = unaff_x24;
    *(ulong *)((long)register0x00000008 + -0x38) = unaff_x23;
    *(long **)((long)register0x00000008 + -0x30) = unaff_x22;
    *(long **)((long)register0x00000008 + -0x28) = unaff_x21;
    *(undefined1 **)((long)register0x00000008 + -0x20) = unaff_x20;
    *(long **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
    *(undefined8 *)((long)register0x00000008 + -0x58) =
         *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
    puVar6 = param_2;
    if ((1 < (int)param_1[0x10]) && ((*(byte *)((long)param_1 + 0xcb) & 1) == 0)) {
      if (*(char *)(param_1[10] + 0x48) == '\x01') {
        *(undefined8 *)((long)register0x00000008 + -0x160) = 0;
        *(undefined8 *)((long)register0x00000008 + -0x158) = 2000;
        *(undefined1 *)((long)register0x00000008 + -0x150) = 2;
        plVar5 = (long *)(param_2 + 0x278);
        puVar6 = (undefined1 *)((long)register0x00000008 + -0x160);
        FUN_10a0378a8();
      }
      unaff_x20 = param_2;
      if (param_1[5] == 0) {
        if ((*(char *)((long)param_1 + 0xc9) == '\x01') &&
           ((*(byte *)((long)param_1 + 0xca) & 1) == 0)) {
          unaff_x23 = (ulong)(1.0 <= (double)param_1[0x18]);
        }
        else {
          unaff_x23 = 0;
        }
        lVar8 = *(long *)(param_1[10] + 0x38);
        plVar5 = *(long **)(param_1[10] + 0x40);
        if (plVar5 != (long *)0x0) {
          plVar1 = plVar5 + 1;
          do {
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar4) {
              *plVar1 = *plVar1 + 1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
        }
        if (lVar8 == 0) {
          unaff_x24 = 0;
        }
        else {
          lVar8 = *(long *)(param_1[10] + 0x38);
          unaff_x22 = *(long **)(param_1[10] + 0x40);
          if (unaff_x22 == (long *)0x0) {
            unaff_x24 = (ulong)(*(char *)(lVar8 + 0xe0) == '\x01');
          }
          else {
            plVar1 = unaff_x22 + 1;
            do {
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
              if (bVar4) {
                *plVar1 = *plVar1 + 1;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
            unaff_x24 = (ulong)(*(char *)(lVar8 + 0xe0) == '\x01');
            do {
              lVar8 = *plVar1;
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
              if (bVar4) {
                *plVar1 = lVar8 + -1;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
            if (lVar8 == 0) {
              (**(code **)(*unaff_x22 + 0x10))(unaff_x22);
              __ZNSt3__119__shared_weak_count14__release_weakEv(unaff_x22);
            }
          }
        }
        if (plVar5 != (long *)0x0) {
          plVar1 = plVar5 + 1;
          do {
            lVar8 = *plVar1;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar4) {
              *plVar1 = lVar8 + -1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (lVar8 == 0) {
            (**(code **)(*plVar5 + 0x10))(plVar5);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
          }
        }
        *(uint *)((long)register0x00000008 + -0x160) = *(byte *)((long)param_1 + 0xc9) ^ 1;
        *(undefined8 *)((long)register0x00000008 + -0x158) = 0;
        *(undefined8 *)((long)register0x00000008 + -0x150) = 0;
        *(undefined1 *)((long)register0x00000008 + -0x140) = 0;
        *(undefined1 *)((long)register0x00000008 + -0xb0) = 0;
        *(undefined4 *)((long)register0x00000008 + -0xa0) = 1;
        *(undefined8 *)((long)register0x00000008 + -0x98) = 0x96;
        *(byte *)((long)register0x00000008 + -0x90) = (byte)unaff_x23;
        *(undefined1 *)((long)register0x00000008 + -0x8f) = 0;
        lVar8 = param_1[0x10];
        *(int *)((long)register0x00000008 + -0x8c) = (int)param_1[0x1a];
        *(int *)((long)register0x00000008 + -0x88) = (int)lVar8;
        if ((int)unaff_x24 == 0) {
          uVar7 = 0;
          *(undefined1 *)((long)register0x00000008 + -0x80) = 0;
        }
        else {
          lVar8 = *(long *)(param_1[10] + 0x38);
          lVar2 = *(long *)(param_1[10] + 0x40);
          *(long *)((long)register0x00000008 + -0x178) = lVar8;
          *(long *)((long)register0x00000008 + -0x170) = lVar2;
          if (lVar2 != 0) {
            plVar5 = (long *)(lVar2 + 8);
            do {
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(plVar5,0x10);
              if (bVar4) {
                *plVar5 = *plVar5 + 1;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
          }
          if (*(char *)(lVar8 + 0xff) < '\0') {
            func_0x000107c3192c((undefined1 *)((long)register0x00000008 + -0x80),
                                *(undefined8 *)(lVar8 + 0xe8),*(undefined8 *)(lVar8 + 0xf0));
          }
          else {
            uVar10 = *(undefined8 *)(lVar8 + 0xf0);
            uVar9 = *(undefined8 *)(lVar8 + 0xe8);
            *(undefined8 *)((long)register0x00000008 + -0x70) = *(undefined8 *)(lVar8 + 0xf8);
            *(undefined8 *)((long)register0x00000008 + -0x78) = uVar10;
            *(undefined8 *)((long)register0x00000008 + -0x80) = uVar9;
          }
          uVar7 = 1;
        }
        *(undefined1 *)((long)register0x00000008 + -0x68) = uVar7;
        plVar5 = (long *)(param_2 + 0x300);
        puVar6 = (undefined1 *)((long)register0x00000008 + -0x160);
        FUN_10a7d0598();
        if ((*(char *)((long)register0x00000008 + -0x68) == '\x01') &&
           (*(char *)((long)register0x00000008 + -0x69) < '\0')) {
          plVar5 = *(long **)((long)register0x00000008 + -0x80);
          __ZdlPv();
        }
        unaff_x21 = *(long **)((long)register0x00000008 + -0x150);
        if (unaff_x21 != (long *)0x0) {
          plVar1 = unaff_x21 + 1;
          do {
            lVar8 = *plVar1;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar4) {
              *plVar1 = lVar8 + -1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (lVar8 == 0) {
            (**(code **)(*unaff_x21 + 0x10))(unaff_x21);
            plVar5 = unaff_x21;
            __ZNSt3__119__shared_weak_count14__release_weakEv();
          }
        }
        if (((int)unaff_x24 != 0) &&
           (unaff_x21 = *(long **)((long)register0x00000008 + -0x170), unaff_x21 != (long *)0x0)) {
          plVar1 = unaff_x21 + 1;
          do {
            lVar8 = *plVar1;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar4) {
              *plVar1 = lVar8 + -1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (lVar8 == 0) {
            (**(code **)(*unaff_x21 + 0x10))(unaff_x21);
            plVar5 = unaff_x21;
            __ZNSt3__119__shared_weak_count14__release_weakEv();
          }
        }
        if ((char)param_1[0x1e] == '\x01') {
          *(undefined1 *)((long)register0x00000008 + -0x160) = 0;
          unaff_x21 = (long *)((long)register0x00000008 + -0x158);
          *(undefined8 *)((long)register0x00000008 + -0x150) = 0;
          *(undefined8 *)((long)register0x00000008 + -0x148) = 0;
          *(undefined8 *)((long)register0x00000008 + -0x158) = 0;
          FUN_10a1ccb30((undefined1 *)((long)register0x00000008 + -0x140),param_1 + 0x1b);
          puVar6 = (undefined1 *)((long)register0x00000008 + -0x160);
          FUN_10a6efaac(param_2 + 0x410);
          if ((*(char *)((long)register0x00000008 + -0x128) == '\x01') &&
             (*(char *)((long)register0x00000008 + -0x129) < '\0')) {
            __ZdlPv(*(undefined8 *)((long)register0x00000008 + -0x140));
          }
          *(long **)((long)register0x00000008 + -0x168) = unaff_x21;
          plVar5 = (long *)((long)register0x00000008 + -0x168);
          FUN_10a2303d4();
          if ((*(byte *)(param_1 + 0x1e) & 1) != 0) {
            if (*(char *)((long)param_1 + 0xef) < '\0') {
              plVar5 = (long *)param_1[0x1b];
              __ZdlPv();
            }
            *(undefined1 *)(param_1 + 0x1e) = 0;
          }
        }
        *(byte *)((long)param_1 + 0xca) = *(byte *)((long)param_1 + 0xca) & 1 | (byte)unaff_x23;
      }
    }
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)((long)register0x00000008 + -0x58))
    break;
    ___stack_chk_fail();
    FUN_10a0772f0((undefined1 *)((long)register0x00000008 + -0x178));
    FUN_10a22ffb4((ulong)unaff_x21 | 8);
    unaff_x30 = FUN_10a82f81c;
    param_1 = plVar5;
    __Unwind_Resume();
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x180);
    param_2 = puVar6;
    unaff_x19 = plVar5;
  }
  return;
}



/* Entry: 10a82f824; end: 10a82fc83;  */

/* WARNING: Removing unreachable block (ram,0x00010a82fa9c) */

void FUN_10a82f824(long param_1,long param_2)

{
  long *plVar1;
  long *plVar2;
  int iVar3;
  int iVar4;
  char cVar5;
  bool bVar6;
  byte bVar7;
  undefined8 *puVar8;
  ulong uVar9;
  long lVar10;
  undefined **ppuVar11;
  long lVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  ulong uVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined **ppuStack_1c0;
  long *plStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  long lStack_a0;
  long *plStack_98;
  long lStack_88;
  
  FUN_10a82fc84();
  if (*(long *)(param_1 + 0x40) == 0) {
    lVar10 = *(long *)(param_2 + 0x88);
    if ((lVar10 != 0) && ((*(byte *)(param_1 + 0xe3) & 1) == 0)) {
      if (*(char *)(param_1 + 0xe1) == '\x01') {
        if (*(char *)(lVar10 + 0xd0) == '\x01') {
          *(undefined2 *)(param_1 + 0xe1) = 0;
          FUN_10a002a94(&ppuStack_1c0,lVar10 + 0xb8);
          ppuStack_1c0 = &PTR_FUN_110b99e70;
          FUN_10a05bde0(&lStack_a0,&ppuStack_1c0);
          func_0x000109d1b350(*(undefined8 *)(param_1 + 0x148),&lStack_a0);
          __ZNSt13exception_ptrD1Ev(&lStack_a0);
          __ZNSt13runtime_errorD2Ev(&ppuStack_1c0);
          goto LAB_10a82f9d8;
        }
        ppuVar11 = *(undefined ***)(lVar10 + 0x70);
        if (ppuVar11 != (undefined **)0x0) {
          plStack_1b8 = *(long **)(lVar10 + 0x78);
          if (plStack_1b8 != (long *)0x0) {
            plVar2 = plStack_1b8 + 1;
            do {
              cVar5 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(plVar2,0x10);
              if (bVar6) {
                *plVar2 = *plVar2 + 1;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
          }
          ppuStack_1c0 = ppuVar11;
          FUN_10a7cf9e8(&lStack_a0,*(undefined8 *)(param_1 + 0x60));
          FUN_10a52a0d0(lStack_a0 + 0xe0,&ppuStack_1c0);
          *(undefined2 *)(param_1 + 0xe1) = 0;
          FUN_10a85188c(*(undefined8 *)(param_1 + 0x148),&lStack_a0);
          *(undefined1 *)(param_1 + 0xe3) = 1;
          if (plStack_98 != (long *)0x0) {
            plVar2 = plStack_98 + 1;
            do {
              lVar12 = *plVar2;
              cVar5 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(plVar2,0x10);
              if (bVar6) {
                *plVar2 = lVar12 + -1;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
            if (lVar12 == 0) {
              (**(code **)(*plStack_98 + 0x10))(plStack_98);
              __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_98);
            }
          }
          plVar2 = plStack_1b8;
          if (plStack_1b8 != (long *)0x0) {
            plVar1 = plStack_1b8 + 1;
            do {
              lVar12 = *plVar1;
              cVar5 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
              if (bVar6) {
                *plVar1 = lVar12 + -1;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
            if (lVar12 == 0) {
              (**(code **)(*plStack_1b8 + 0x10))(plStack_1b8);
              __ZNSt3__119__shared_weak_count14__release_weakEv(plVar2);
            }
          }
        }
      }
      uVar15 = *(ulong *)(lVar10 + 0x10);
      uVar9 = uVar15;
      if ((*(byte *)(param_1 + 0x188) & 1) == 0) {
        FUN_10a832ab0(&ppuStack_1c0,param_1);
        *(long **)(param_1 + 0x160) = plStack_1b8;
        *(undefined ***)(param_1 + 0x158) = ppuStack_1c0;
        *(undefined8 *)(param_1 + 0x170) = uStack_1a8;
        *(undefined8 *)(param_1 + 0x168) = uStack_1b0;
        *(undefined8 *)(param_1 + 0x180) = uStack_198;
        *(undefined8 *)(param_1 + 0x178) = uStack_1a0;
        if ((*(byte *)(param_1 + 0x188) & 1) == 0) {
          *(undefined1 *)(param_1 + 0x188) = 1;
        }
        uVar9 = *(ulong *)(lVar10 + 0x10);
      }
      dVar18 = (double)uVar15 / *(double *)(param_1 + 0x180);
      dVar16 = 1.0;
      if (dVar18 <= 1.0) {
        dVar16 = dVar18;
      }
      *(double *)(param_1 + 0xa0) = dVar16;
      dVar18 = (double)uVar9 / *(double *)(param_1 + 0x178);
      dVar16 = 1.0;
      if (dVar18 <= 1.0) {
        dVar16 = dVar18;
      }
      *(double *)(param_1 + 0xd8) = dVar16;
      FUN_10a82fcd4(param_1);
      if (*(char *)(param_1 + 0xe1) == '\x01') {
        bVar7 = *(byte *)(param_1 + 0xe3) ^ 1;
      }
      else {
        bVar7 = 0;
      }
      *(byte *)(param_1 + 0xe1) = bVar7 & 1;
    }
  }
  else {
    iVar3 = *(int *)(param_1 + 0x58);
    iVar4 = *(int *)(param_1 + 0x5c);
    lVar10 = *(long *)(*(long *)(param_1 + 0x68) + 0x38);
    plVar2 = *(long **)(*(long *)(param_1 + 0x68) + 0x40);
    if (plVar2 != (long *)0x0) {
      plVar1 = plVar2 + 1;
      do {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar6) {
          *plVar1 = *plVar1 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
    }
    if (lVar10 == 0) {
      bVar6 = false;
    }
    else {
      bVar6 = *(char *)(lVar10 + 0xe0) == '\x01';
    }
    if ((*(byte *)(param_1 + 0x188) & 1) == 0) {
      FUN_10a832ab0(&ppuStack_1c0,param_1);
      *(long **)(param_1 + 0x160) = plStack_1b8;
      *(undefined ***)(param_1 + 0x158) = ppuStack_1c0;
      *(undefined8 *)(param_1 + 0x170) = uStack_1a8;
      *(undefined8 *)(param_1 + 0x168) = uStack_1b0;
      *(undefined8 *)(param_1 + 0x180) = uStack_198;
      *(undefined8 *)(param_1 + 0x178) = uStack_1a0;
      if ((*(byte *)(param_1 + 0x188) & 1) == 0) {
        *(undefined1 *)(param_1 + 0x188) = 1;
      }
    }
    dVar18 = (double)iVar4 / *(double *)(param_1 + 0x160);
    dVar16 = 1.0;
    if (dVar18 <= 1.0) {
      dVar16 = dVar18;
    }
    dVar18 = *(double *)(param_1 + 0x158);
    if (!bVar6) {
      dVar18 = (double)iVar3;
    }
    dVar17 = (double)iVar4 / *(double *)(param_1 + 0x168);
    dVar18 = dVar18 / *(double *)(param_1 + 0x158);
    if (dVar18 <= dVar17) {
      dVar18 = dVar17;
    }
    dVar17 = 1.0;
    if (dVar18 <= 1.0) {
      dVar17 = dVar18;
    }
    dVar18 = *(double *)(param_1 + 0xd8);
    if (*(double *)(param_1 + 0xd8) <= dVar17) {
      dVar18 = dVar17;
    }
    *(double *)(param_1 + 0xd8) = dVar18;
    *(double *)(param_1 + 0xa0) = dVar16;
    if (plVar2 != (long *)0x0) {
      plVar1 = plVar2 + 1;
      do {
        lVar10 = *plVar1;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar6) {
          *plVar1 = lVar10 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (lVar10 == 0) {
        (**(code **)(*plVar2 + 0x10))(plVar2);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar2);
      }
    }
    FUN_10a82fcd4(param_1);
  }
LAB_10a82f9d8:
  puVar8 = *(undefined8 **)(param_2 + 0xe8);
  if ((puVar8 != (undefined8 *)0x0) && ((*(byte *)(param_1 + 0xe3) & 1) == 0)) {
    if ((*(char *)(param_2 + 0x100) == '\x01') && (1 < *(int *)(param_2 + 0xf0) + 1U)) {
      uVar13 = *(undefined8 *)(param_2 + 0xf8);
      uVar14 = 1;
    }
    else {
      uVar13 = 0;
      uVar14 = 0;
    }
    uVar19 = *puVar8;
    uVar20 = puVar8[1];
    uVar21 = puVar8[2];
    uVar22 = puVar8[3];
    uVar23 = puVar8[4];
    lStack_88 = (long)puVar8[7] / 1000000;
    func_0x000107c2b054(&lStack_a0,(&PTR_DAT_110c23688)[*(uint *)(puVar8 + 0xb)]);
    FUN_10a0503d0(uVar19,uVar20,uVar21,uVar22,uVar23,&ppuStack_1c0,uVar13,uVar14,&lStack_88,
                  &lStack_a0);
    FUN_10a038ae0(param_1 + 0x110,&ppuStack_1c0);
    func_0x00010a052168(&ppuStack_1c0);
  }
  return;
}



/* Entry: 10a82fc84; end: 10a82fcd3;  */

void FUN_10a82fc84(long param_1)

{
  long lStack_28;
  undefined8 **ppuStack_20;
  long *plStack_18;
  
  if (*(long *)(param_1 + 0x48) != -1) {
    plStack_18 = &lStack_28;
    ppuStack_20 = &plStack_18;
    lStack_28 = param_1;
    __ZNSt3__111__call_onceERVmPvPFvS2_E((long *)(param_1 + 0x48),&ppuStack_20,0x10a851f00);
  }
  return;
}



/* Entry: 10a82fcd4; end: 10a82fdab;  */

void FUN_10a82fcd4(double param_1,long param_2)

{
  if (((*(byte *)(param_2 + 0xe4) & 1) == 0) && (FUN_10a830748(param_2), 1.0 <= param_1)) {
    if ((bRam000000011330a9e8 >> 2 & 1) != 0) {
      func_0x00010ae06f08(1,4,&UNK_10f67bb5e,&UNK_10f67bd2f,0x124,&UNK_10f67bd7d);
    }
    FUN_10a07e58c(*(undefined8 *)(param_2 + 0xb8));
    *(undefined1 *)(param_2 + 0xe4) = 1;
  }
  if (((*(byte *)(param_2 + 0xe5) & 1) == 0) && (1.0 <= *(double *)(param_2 + 0xa0))) {
    if ((bRam000000011330a9e8 >> 2 & 1) != 0) {
      func_0x00010ae06f08(1,4,&UNK_10f67bb5e,&UNK_10f67bd2f,299,&UNK_10f67bd98);
    }
    FUN_10a07e58c(*(undefined8 *)(param_2 + 200));
    *(undefined1 *)(param_2 + 0xe5) = 1;
  }
  return;
}



/* Entry: 10a82fdac; end: 10a82fdb3;  */

/* WARNING: Removing unreachable block (ram,0x00010a82fa9c) */

void FUN_10a82fdac(long param_1,long param_2)

{
  long *plVar1;
  long *plVar2;
  int iVar3;
  int iVar4;
  char cVar5;
  bool bVar6;
  long lVar7;
  byte bVar8;
  undefined8 *puVar9;
  ulong uVar10;
  long lVar11;
  undefined **ppuVar12;
  long lVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  ulong uVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined **ppuStack_1c0;
  long *plStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  long lStack_a0;
  long *plStack_98;
  long lStack_88;
  
  lVar7 = param_1 + -0x18;
  FUN_10a82fc84();
  if (*(long *)(param_1 + 0x28) == 0) {
    lVar11 = *(long *)(param_2 + 0x88);
    if ((lVar11 != 0) && ((*(byte *)(param_1 + 0xcb) & 1) == 0)) {
      if (*(char *)(param_1 + 0xc9) == '\x01') {
        if (*(char *)(lVar11 + 0xd0) == '\x01') {
          *(undefined2 *)(param_1 + 0xc9) = 0;
          FUN_10a002a94(&ppuStack_1c0,lVar11 + 0xb8);
          ppuStack_1c0 = &PTR_FUN_110b99e70;
          FUN_10a05bde0(&lStack_a0,&ppuStack_1c0);
          func_0x000109d1b350(*(undefined8 *)(param_1 + 0x130),&lStack_a0);
          __ZNSt13exception_ptrD1Ev(&lStack_a0);
          __ZNSt13runtime_errorD2Ev(&ppuStack_1c0);
          goto LAB_10a82f9d8;
        }
        ppuVar12 = *(undefined ***)(lVar11 + 0x70);
        if (ppuVar12 != (undefined **)0x0) {
          plStack_1b8 = *(long **)(lVar11 + 0x78);
          if (plStack_1b8 != (long *)0x0) {
            plVar2 = plStack_1b8 + 1;
            do {
              cVar5 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(plVar2,0x10);
              if (bVar6) {
                *plVar2 = *plVar2 + 1;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
          }
          ppuStack_1c0 = ppuVar12;
          FUN_10a7cf9e8(&lStack_a0,*(undefined8 *)(param_1 + 0x48));
          FUN_10a52a0d0(lStack_a0 + 0xe0,&ppuStack_1c0);
          *(undefined2 *)(param_1 + 0xc9) = 0;
          FUN_10a85188c(*(undefined8 *)(param_1 + 0x130),&lStack_a0);
          *(undefined1 *)(param_1 + 0xcb) = 1;
          if (plStack_98 != (long *)0x0) {
            plVar2 = plStack_98 + 1;
            do {
              lVar13 = *plVar2;
              cVar5 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(plVar2,0x10);
              if (bVar6) {
                *plVar2 = lVar13 + -1;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
            if (lVar13 == 0) {
              (**(code **)(*plStack_98 + 0x10))(plStack_98);
              __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_98);
            }
          }
          plVar2 = plStack_1b8;
          if (plStack_1b8 != (long *)0x0) {
            plVar1 = plStack_1b8 + 1;
            do {
              lVar13 = *plVar1;
              cVar5 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
              if (bVar6) {
                *plVar1 = lVar13 + -1;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
            if (lVar13 == 0) {
              (**(code **)(*plStack_1b8 + 0x10))(plStack_1b8);
              __ZNSt3__119__shared_weak_count14__release_weakEv(plVar2);
            }
          }
        }
      }
      uVar16 = *(ulong *)(lVar11 + 0x10);
      uVar10 = uVar16;
      if ((*(byte *)(param_1 + 0x170) & 1) == 0) {
        FUN_10a832ab0(&ppuStack_1c0,lVar7);
        *(long **)(param_1 + 0x148) = plStack_1b8;
        *(undefined ***)(param_1 + 0x140) = ppuStack_1c0;
        *(undefined8 *)(param_1 + 0x158) = uStack_1a8;
        *(undefined8 *)(param_1 + 0x150) = uStack_1b0;
        *(undefined8 *)(param_1 + 0x168) = uStack_198;
        *(undefined8 *)(param_1 + 0x160) = uStack_1a0;
        if ((*(byte *)(param_1 + 0x170) & 1) == 0) {
          *(undefined1 *)(param_1 + 0x170) = 1;
        }
        uVar10 = *(ulong *)(lVar11 + 0x10);
      }
      dVar19 = (double)uVar16 / *(double *)(param_1 + 0x168);
      dVar17 = 1.0;
      if (dVar19 <= 1.0) {
        dVar17 = dVar19;
      }
      *(double *)(param_1 + 0x88) = dVar17;
      dVar19 = (double)uVar10 / *(double *)(param_1 + 0x160);
      dVar17 = 1.0;
      if (dVar19 <= 1.0) {
        dVar17 = dVar19;
      }
      *(double *)(param_1 + 0xc0) = dVar17;
      FUN_10a82fcd4(lVar7);
      if (*(char *)(param_1 + 0xc9) == '\x01') {
        bVar8 = *(byte *)(param_1 + 0xcb) ^ 1;
      }
      else {
        bVar8 = 0;
      }
      *(byte *)(param_1 + 0xc9) = bVar8 & 1;
    }
  }
  else {
    iVar3 = *(int *)(param_1 + 0x40);
    iVar4 = *(int *)(param_1 + 0x44);
    lVar11 = *(long *)(*(long *)(param_1 + 0x50) + 0x38);
    plVar2 = *(long **)(*(long *)(param_1 + 0x50) + 0x40);
    if (plVar2 != (long *)0x0) {
      plVar1 = plVar2 + 1;
      do {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar6) {
          *plVar1 = *plVar1 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
    }
    if (lVar11 == 0) {
      bVar6 = false;
    }
    else {
      bVar6 = *(char *)(lVar11 + 0xe0) == '\x01';
    }
    if ((*(byte *)(param_1 + 0x170) & 1) == 0) {
      FUN_10a832ab0(&ppuStack_1c0,lVar7);
      *(long **)(param_1 + 0x148) = plStack_1b8;
      *(undefined ***)(param_1 + 0x140) = ppuStack_1c0;
      *(undefined8 *)(param_1 + 0x158) = uStack_1a8;
      *(undefined8 *)(param_1 + 0x150) = uStack_1b0;
      *(undefined8 *)(param_1 + 0x168) = uStack_198;
      *(undefined8 *)(param_1 + 0x160) = uStack_1a0;
      if ((*(byte *)(param_1 + 0x170) & 1) == 0) {
        *(undefined1 *)(param_1 + 0x170) = 1;
      }
    }
    dVar19 = (double)iVar4 / *(double *)(param_1 + 0x148);
    dVar17 = 1.0;
    if (dVar19 <= 1.0) {
      dVar17 = dVar19;
    }
    dVar19 = *(double *)(param_1 + 0x140);
    if (!bVar6) {
      dVar19 = (double)iVar3;
    }
    dVar18 = (double)iVar4 / *(double *)(param_1 + 0x150);
    dVar19 = dVar19 / *(double *)(param_1 + 0x140);
    if (dVar19 <= dVar18) {
      dVar19 = dVar18;
    }
    dVar18 = 1.0;
    if (dVar19 <= 1.0) {
      dVar18 = dVar19;
    }
    dVar19 = *(double *)(param_1 + 0xc0);
    if (*(double *)(param_1 + 0xc0) <= dVar18) {
      dVar19 = dVar18;
    }
    *(double *)(param_1 + 0xc0) = dVar19;
    *(double *)(param_1 + 0x88) = dVar17;
    if (plVar2 != (long *)0x0) {
      plVar1 = plVar2 + 1;
      do {
        lVar11 = *plVar1;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar6) {
          *plVar1 = lVar11 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (lVar11 == 0) {
        (**(code **)(*plVar2 + 0x10))(plVar2);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar2);
      }
    }
    FUN_10a82fcd4(lVar7);
  }
LAB_10a82f9d8:
  puVar9 = *(undefined8 **)(param_2 + 0xe8);
  if ((puVar9 != (undefined8 *)0x0) && ((*(byte *)(param_1 + 0xcb) & 1) == 0)) {
    if ((*(char *)(param_2 + 0x100) == '\x01') && (1 < *(int *)(param_2 + 0xf0) + 1U)) {
      uVar14 = *(undefined8 *)(param_2 + 0xf8);
      uVar15 = 1;
    }
    else {
      uVar14 = 0;
      uVar15 = 0;
    }
    uVar20 = *puVar9;
    uVar21 = puVar9[1];
    uVar22 = puVar9[2];
    uVar23 = puVar9[3];
    uVar24 = puVar9[4];
    lStack_88 = (long)puVar9[7] / 1000000;
    func_0x000107c2b054(&lStack_a0,(&PTR_DAT_110c23688)[*(uint *)(puVar9 + 0xb)]);
    FUN_10a0503d0(uVar20,uVar21,uVar22,uVar23,uVar24,&ppuStack_1c0,uVar14,uVar15,&lStack_88,
                  &lStack_a0);
    FUN_10a038ae0(param_1 + 0xf8,&ppuStack_1c0);
    func_0x00010a052168(&ppuStack_1c0);
  }
  return;
}



/* Entry: 10a82fdb4; end: 10a8306df;  */

void FUN_10a82fdb4(long *param_1,long param_2,undefined8 *param_3,undefined8 param_4)

{
  long *plVar1;
  ulong *puVar2;
  char cVar3;
  bool bVar4;
  code *pcVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  long *plVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  undefined8 uVar12;
  ulong uVar13;
  undefined1 auStack_60 [8];
  undefined8 uStack_58;
  undefined8 *puStack_50;
  undefined8 uStack_48;
  
  puVar6 = (undefined8 *)0x198;
  __Znwm();
  puVar7 = puVar6 + 0x23;
  *puVar6 = FUN_10a858a90;
  puVar6[1] = FUN_10a8590e0;
  puVar6[0x31] = param_2;
  uVar12 = *param_3;
  puVar6[0x24] = param_3[1];
  *puVar7 = uVar12;
  *param_3 = 0;
  param_3[1] = 0;
  FUN_10a711e58(puVar6 + 2);
  lVar9 = puVar6[7];
  if (lVar9 != 0) {
    plVar8 = (long *)(lVar9 + 8);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar4) {
        *plVar8 = *plVar8 + 4;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  *param_1 = lVar9;
  lVar10 = *(long *)(param_2 + 0x68);
  lVar9 = *(long *)(lVar10 + 0x50);
  puVar6[0x25] = lVar9;
  lVar10 = *(long *)(lVar10 + 0x58);
  puVar6[0x26] = lVar10;
  if (lVar10 != 0) {
    plVar8 = (long *)(lVar10 + 8);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar4) {
        *plVar8 = *plVar8 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  if (lVar9 == 0) {
    puVar6[0x27] = 0;
    puVar6[0x28] = 0;
LAB_10a82feac:
    uVar12 = *(undefined8 *)(param_2 + 0x60);
    *(undefined1 *)(puVar6 + 0x18) = 0;
    *(undefined1 *)(puVar6 + 0x1b) = 0;
    func_0x000107c2b054(puVar6 + 0x20,&UNK_10f67a8c5);
    puVar6[0x2a] = puVar6[0x24];
    puVar6[0x29] = *puVar7;
    if (puVar6[0x24] != 0) {
      plVar8 = (long *)(puVar6[0x24] + 8);
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar8,0x10);
        if (bVar4) {
          *plVar8 = *plVar8 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    puVar6[0x2b] = 0;
    puVar6[0x2c] = 0;
    FUN_10a8306e0(puVar6 + 9,param_2);
    *(undefined1 *)(puVar6 + 0x1c) = 0;
    *(undefined1 *)(puVar6 + 0x1f) = 0;
    FUN_10a6df5c0(puVar6 + 0x2d,uVar12,puVar6 + 0x18,puVar6 + 0x20,puVar6 + 0x29,puVar6 + 0x2b,
                  puVar6 + 9,1,puVar6 + 0x1c);
    if ((*(char *)(puVar6 + 0x1f) == '\x01') && (*(char *)((long)puVar6 + 0xf7) < '\0')) {
      __ZdlPv(puVar6[0x1c]);
    }
    if (*(char *)(puVar6 + 0x17) == '\x01') {
      func_0x00010a052168(puVar6 + 9);
    }
    plVar8 = (long *)puVar6[0x2c];
    if (plVar8 != (long *)0x0) {
      plVar1 = plVar8 + 1;
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
        (**(code **)(*plVar8 + 0x10))(plVar8);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar8);
      }
    }
    plVar8 = (long *)puVar6[0x2a];
    if (plVar8 != (long *)0x0) {
      plVar1 = plVar8 + 1;
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
        (**(code **)(*plVar8 + 0x10))(plVar8);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar8);
      }
    }
    if (*(char *)((long)puVar6 + 0x117) < '\0') {
      __ZdlPv(puVar6[0x20]);
    }
    if ((*(char *)(puVar6 + 0x1b) == '\x01') && (*(char *)((long)puVar6 + 0xd7) < '\0')) {
      __ZdlPv(puVar6[0x18]);
    }
  }
  else {
    lVar10 = *(long *)(lVar9 + 0x220);
    puVar6[0x27] = lVar10;
    lVar11 = *(long *)(lVar9 + 0x228);
    puVar6[0x28] = lVar11;
    if (lVar11 != 0) {
      plVar8 = (long *)(lVar11 + 8);
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar8,0x10);
        if (bVar4) {
          *plVar8 = *plVar8 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    if (lVar10 == 0) goto LAB_10a82feac;
    FUN_10a6f8f28(puVar6 + 0x2d,lVar9,puVar7,param_4);
  }
  puVar6[0x2f] = 0;
  *(undefined1 *)(puVar6 + 0x32) = 0;
  puVar7 = puVar6 + 0x2f;
  FUN_10a6de354(puVar7,puVar6);
  if (((ulong)puVar7 & 1) != 0) {
    return;
  }
  puVar6[0x2e] = puVar6[0x2f];
  FUN_10a7040d4(puVar6 + 0x2f,puVar6 + 0x2e,puVar6 + 0x2d);
  puVar6[0x30] = puVar6[0x2f];
  plVar8 = (long *)(puVar6[0x2f] + 8);
  do {
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar8,0x10);
    if (bVar4) {
      *plVar8 = *plVar8 + 4;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  if (((uint)*(undefined8 *)(puVar6[0x30] + 0x10) >> 1 & 1) == 0) {
    *(undefined1 *)(puVar6 + 0x32) = 1;
    lVar9 = puVar6[0x30];
    plVar8 = (long *)(lVar9 + 0x10);
    uVar12 = puVar6[3];
    do {
      lVar10 = *plVar8;
      if (lVar10 == 0) {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar8,0x10);
        if (bVar4) {
          *plVar8 = 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
        if (cVar3 == '\0') goto LAB_10a830460;
      }
      else {
        ClearExclusiveLocal();
      }
    } while (((uint)lVar10 >> 1 & 1) == 0);
  }
  uVar12 = *(undefined8 *)(puVar6[0x30] + 0x10);
  plVar8 = (long *)puVar6[0x30];
  if (plVar8 != (long *)0x0) {
    puVar2 = (ulong *)(plVar8 + 1);
    do {
      uVar13 = *puVar2;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(puVar2,0x10);
      if (bVar4) {
        *puVar2 = uVar13 - 4;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if ((uVar13 & 0x1fffffffc) == 4) {
      do {
        uVar13 = *puVar2;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(puVar2,0x10);
        if (bVar4) {
          *puVar2 = uVar13 - 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (uVar13 - 1 == 0) {
        (**(code **)(*plVar8 + 8))();
      }
    }
  }
  if (((uint)uVar12 >> 5 & 1) == 0) {
    if ((uRam000000011330a9e8 >> 2 & 1) != 0) {
      func_0x00010ae06f08(1,4,&UNK_10f67bb5e,&UNK_10f67bc57,0xf5,&UNK_10f67bd00);
    }
    func_0x0001092af8bc(puVar6 + 0x2f);
    if ((*(byte *)(puVar6[0x2f] + 0xa8) & 1) == 0) goto LAB_10a830494;
    FUN_10a5404ec(puVar6[0x31] + 0xf0,*(long *)(puVar6[0x2f] + 0x98) + 0xe8);
  }
  else if ((uRam000000011330a9e8 & 1) != 0) {
    __ZNSt13exception_ptrC1ERKS_(auStack_60,puVar6[0x2f] + 0x90);
    func_0x0001098bc760(&uStack_58,auStack_60);
    func_0x00010ae06f08(0,1,&UNK_10f67bb5e,&UNK_10f67bc57,0xf9,&UNK_10f67bd11);
    if (uStack_48._7_1_ < '\0') {
      __ZdlPv(uStack_58);
    }
    __ZNSt13exception_ptrD1Ev(auStack_60);
  }
  puVar6[0x30] = puVar6[0x2f];
  plVar8 = (long *)(puVar6[0x2f] + 8);
  do {
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar8,0x10);
    if (bVar4) {
      *plVar8 = *plVar8 + 4;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  if (((uint)*(undefined8 *)(puVar6[0x30] + 0x10) >> 1 & 1) == 0) {
    *(undefined1 *)(puVar6 + 0x32) = 2;
    lVar9 = puVar6[0x30];
    plVar8 = (long *)(lVar9 + 0x10);
    uVar12 = puVar6[3];
    do {
      lVar10 = *plVar8;
      if (lVar10 == 0) {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar8,0x10);
        if (bVar4) {
          *plVar8 = 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
        if (cVar3 == '\0') {
LAB_10a830460:
          uStack_48 = uVar12;
          uStack_58 = 0;
          puStack_50 = puVar6;
          func_0x000109d1b588(lVar9 + 0x18,&uStack_58);
          *(undefined8 *)(lVar9 + 0x10) = 0;
          return;
        }
      }
      else {
        ClearExclusiveLocal();
      }
    } while (((uint)lVar10 >> 1 & 1) == 0);
  }
  lVar9 = puVar6[0x30];
  if (((uint)*(undefined8 *)(puVar6[0x30] + 0x10) >> 5 & 1) == 0) {
    if ((*(byte *)(lVar9 + 0xa8) & 1) != 0) {
      FUN_10a6fd6b4(puVar6 + 2,lVar9 + 0x98);
      plVar8 = (long *)puVar6[0x30];
      if (plVar8 != (long *)0x0) {
        puVar2 = (ulong *)(plVar8 + 1);
        do {
          uVar13 = *puVar2;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(puVar2,0x10);
          if (bVar4) {
            *puVar2 = uVar13 - 4;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if ((uVar13 & 0x1fffffffc) == 4) {
          do {
            uVar13 = *puVar2;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(puVar2,0x10);
            if (bVar4) {
              *puVar2 = uVar13 - 1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (uVar13 - 1 == 0) {
            (**(code **)(*plVar8 + 8))();
          }
        }
      }
      plVar8 = (long *)puVar6[0x2f];
      if (plVar8 != (long *)0x0) {
        puVar2 = (ulong *)(plVar8 + 1);
        do {
          uVar13 = *puVar2;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(puVar2,0x10);
          if (bVar4) {
            *puVar2 = uVar13 - 4;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if ((uVar13 & 0x1fffffffc) == 4) {
          do {
            uVar13 = *puVar2;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(puVar2,0x10);
            if (bVar4) {
              *puVar2 = uVar13 - 1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (uVar13 - 1 == 0) {
            (**(code **)(*plVar8 + 8))();
          }
        }
      }
      plVar8 = (long *)puVar6[0x2e];
      if (plVar8 != (long *)0x0) {
        puVar2 = (ulong *)(plVar8 + 1);
        do {
          uVar13 = *puVar2;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(puVar2,0x10);
          if (bVar4) {
            *puVar2 = uVar13 - 4;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if ((uVar13 & 0x1fffffffc) == 4) {
          (**(code **)(*plVar8 + 0x10))(plVar8);
          do {
            uVar13 = *puVar2;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(puVar2,0x10);
            if (bVar4) {
              *puVar2 = uVar13 - 1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (uVar13 - 1 == 0) {
            (**(code **)(*plVar8 + 8))(plVar8);
          }
        }
      }
      plVar8 = (long *)puVar6[0x2d];
      if (plVar8 != (long *)0x0) {
        puVar2 = (ulong *)(plVar8 + 1);
        do {
          uVar13 = *puVar2;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(puVar2,0x10);
          if (bVar4) {
            *puVar2 = uVar13 - 4;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if ((uVar13 & 0x1fffffffc) == 4) {
          do {
            uVar13 = *puVar2;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(puVar2,0x10);
            if (bVar4) {
              *puVar2 = uVar13 - 1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (uVar13 - 1 == 0) {
            (**(code **)(*plVar8 + 8))();
          }
        }
      }
      plVar8 = (long *)puVar6[0x28];
      if (plVar8 != (long *)0x0) {
        plVar1 = plVar8 + 1;
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
          (**(code **)(*plVar8 + 0x10))(plVar8);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar8);
        }
      }
      plVar8 = (long *)puVar6[0x26];
      if (plVar8 != (long *)0x0) {
        plVar1 = plVar8 + 1;
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
          (**(code **)(*plVar8 + 0x10))(plVar8);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar8);
        }
      }
      func_0x000109d1a1d0(puVar6 + 2);
      plVar8 = (long *)puVar6[0x24];
      if (plVar8 != (long *)0x0) {
        plVar1 = plVar8 + 1;
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
          (**(code **)(*plVar8 + 0x10))(plVar8);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar8);
        }
      }
      __ZdlPv(puVar6);
      return;
    }
  }
  else {
    func_0x0001092af97c(lVar9 + 0x90);
  }
LAB_10a830494:
                    /* WARNING: Does not return */
  pcVar5 = (code *)SoftwareBreakpoint(1,0x10a830498);
  (*pcVar5)();
}



/* Entry: 10a8306e0; end: 10a830747;  */

void FUN_10a8306e0(undefined8 param_1,long param_2)

{
  undefined1 auStack_40 [24];
  undefined1 *puStack_28;
  
  FUN_10a038be8(auStack_40,param_2 + 0x110);
  FUN_10a038dcc(param_1,auStack_40,0);
  puStack_28 = auStack_40;
  FUN_10a050344(&puStack_28);
  return;
}



/* Entry: 10a830748; end: 10a830807;  */

undefined8 FUN_10a830748(long param_1)

{
  long *plVar1;
  long *plVar2;
  bool bVar3;
  char cVar4;
  bool bVar5;
  ulong uVar6;
  long lVar7;
  undefined8 uVar8;
  
  uVar6 = *(ulong *)(*(long *)(param_1 + 0x68) + 0x50);
  plVar2 = *(long **)(*(long *)(param_1 + 0x68) + 0x58);
  if (plVar2 != (long *)0x0) {
    plVar1 = plVar2 + 1;
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar5) {
        *plVar1 = *plVar1 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  if ((uVar6 == 0) || (FUN_10a6fb8f8(), (uVar6 & 1) == 0)) {
    bVar5 = true;
  }
  else {
    bVar5 = false;
  }
  if (plVar2 != (long *)0x0) {
    plVar1 = plVar2 + 1;
    do {
      lVar7 = *plVar1;
      cVar4 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar7 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar7 == 0) {
      (**(code **)(*plVar2 + 0x10))(plVar2);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar2);
    }
  }
  uVar8 = 0x3ff0000000000000;
  if (bVar5) {
    uVar8 = *(undefined8 *)(param_1 + 0xd8);
  }
  return uVar8;
}



/* Entry: 10a830808; end: 10a830d27;  */

void FUN_10a830808(long *param_1,long param_2)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  int iVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  long *plVar11;
  undefined8 uStack_48;
  undefined8 *puStack_40;
  undefined8 uStack_38;
  
  puVar6 = (undefined8 *)0x78;
  __Znwm();
  iVar5 = (int)puVar6 + 0x10;
  *puVar6 = FUN_10a858504;
  puVar6[1] = FUN_10a8588d0;
  FUN_10a851940();
  lVar8 = puVar6[7];
  if (lVar8 != 0) {
    plVar11 = (long *)(lVar8 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar11,0x10);
      if (bVar3) {
        *plVar11 = *plVar11 + 4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  *param_1 = lVar8;
  __ZSt19uncaught_exceptionsv();
  *(int *)((long)puVar6 + 0x6c) = iVar5;
  puVar6[9] = 0;
  puVar7 = (undefined8 *)0xb0;
  __Znwm();
  *(undefined2 *)(puVar7 + 3) = 4;
  puVar7[2] = 0;
  puVar7[1] = 0x200000006;
  puVar7[5] = 0;
  puVar7[4] = 0;
  puVar7[7] = 0;
  puVar7[6] = 0;
  puVar7[9] = 0;
  puVar7[8] = 0;
  puVar7[0xb] = 0;
  puVar7[10] = 0;
  puVar7[0xd] = 0;
  puVar7[0xc] = 0;
  puVar7[0xf] = 0;
  puVar7[0xe] = 0;
  puVar7[0x10] = 0;
  puVar7[0x11] = puVar7 + 3;
  puVar7[0x12] = 0;
  *puVar7 = &PTR_FUN_110c14b90;
  *(undefined1 *)(puVar7 + 0x13) = 0;
  *(undefined1 *)(puVar7 + 0x15) = 0;
  puVar6[9] = puVar7;
  if (*(long *)(param_2 + 0x148) != 0) {
    func_0x0001092b4274(param_2 + 0x148);
  }
  *(undefined8 **)(param_2 + 0x148) = puVar7;
  *(undefined1 *)(param_2 + 0xe3) = 0;
  *(undefined2 *)(param_2 + 0xe1) = 1;
  puVar6[0xb] = 0;
  *(undefined1 *)(puVar6 + 0xe) = 0;
  lVar8 = puVar6[6];
  if (lVar8 != 0) {
    plVar11 = (long *)(lVar8 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar11,0x10);
      if (bVar3) {
        *plVar11 = *plVar11 + 4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    plVar11 = (long *)puVar6[0xb];
    if (plVar11 != (long *)0x0) {
      puVar1 = (ulong *)(plVar11 + 1);
      do {
        uVar9 = *puVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = uVar9 - 4;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if ((uVar9 & 0x1fffffffc) == 4) {
        (**(code **)(*plVar11 + 0x10))(plVar11);
        do {
          uVar9 = *puVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar3) {
            *puVar1 = uVar9 - 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (uVar9 - 1 == 0) {
          (**(code **)(*plVar11 + 8))(plVar11);
        }
      }
    }
  }
  puVar6[10] = lVar8;
  puVar6[0xb] = lVar8;
  FUN_10a830d68(puVar6 + 0xc,puVar6 + 10,puVar6[9]);
  puVar6[0xb] = puVar6[0xc];
  plVar11 = (long *)(puVar6[0xc] + 8);
  do {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar11,0x10);
    if (bVar3) {
      *plVar11 = *plVar11 + 4;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (((uint)*(undefined8 *)(puVar6[0xb] + 0x10) >> 1 & 1) == 0) {
    *(undefined1 *)(puVar6 + 0xe) = 1;
    lVar8 = puVar6[0xb];
    plVar11 = (long *)(lVar8 + 0x10);
    uStack_38 = puVar6[3];
    do {
      lVar10 = *plVar11;
      if (lVar10 == 0) {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar11,0x10);
        if (bVar3) {
          *plVar11 = 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
        if (cVar2 == '\0') {
          uStack_48 = 0;
          puStack_40 = puVar6;
          func_0x000109d1b588(lVar8 + 0x18,&uStack_48);
          *(undefined8 *)(lVar8 + 0x10) = 0;
          return;
        }
      }
      else {
        ClearExclusiveLocal();
      }
    } while (((uint)lVar10 >> 1 & 1) == 0);
  }
  lVar8 = puVar6[0xb];
  if (((uint)*(undefined8 *)(puVar6[0xb] + 0x10) >> 5 & 1) == 0) {
    if ((*(byte *)(lVar8 + 0xa8) & 1) != 0) {
      FUN_10a830d28(puVar6 + 2,lVar8 + 0x98);
      plVar11 = (long *)puVar6[0xb];
      if (plVar11 != (long *)0x0) {
        puVar1 = (ulong *)(plVar11 + 1);
        do {
          uVar9 = *puVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar3) {
            *puVar1 = uVar9 - 4;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if ((uVar9 & 0x1fffffffc) == 4) {
          do {
            uVar9 = *puVar1;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
            if (bVar3) {
              *puVar1 = uVar9 - 1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (uVar9 - 1 == 0) {
            (**(code **)(*plVar11 + 8))();
          }
        }
      }
      plVar11 = (long *)puVar6[0xc];
      if (plVar11 != (long *)0x0) {
        puVar1 = (ulong *)(plVar11 + 1);
        do {
          uVar9 = *puVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar3) {
            *puVar1 = uVar9 - 4;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if ((uVar9 & 0x1fffffffc) == 4) {
          do {
            uVar9 = *puVar1;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
            if (bVar3) {
              *puVar1 = uVar9 - 1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (uVar9 - 1 == 0) {
            (**(code **)(*plVar11 + 8))();
          }
        }
      }
      plVar11 = (long *)puVar6[10];
      if (plVar11 != (long *)0x0) {
        puVar1 = (ulong *)(plVar11 + 1);
        do {
          uVar9 = *puVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar3) {
            *puVar1 = uVar9 - 4;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if ((uVar9 & 0x1fffffffc) == 4) {
          (**(code **)(*plVar11 + 0x10))(plVar11);
          do {
            uVar9 = *puVar1;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
            if (bVar3) {
              *puVar1 = uVar9 - 1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (uVar9 - 1 == 0) {
            (**(code **)(*plVar11 + 8))(plVar11);
          }
        }
      }
      plVar11 = (long *)puVar6[9];
      if (plVar11 != (long *)0x0) {
        puVar1 = (ulong *)(plVar11 + 1);
        do {
          uVar9 = *puVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar3) {
            *puVar1 = uVar9 - 4;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if ((uVar9 & 0x1fffffffc) == 4) {
          do {
            uVar9 = *puVar1;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
            if (bVar3) {
              *puVar1 = uVar9 - 1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (uVar9 - 1 == 0) {
            (**(code **)(*plVar11 + 8))();
          }
        }
      }
      FUN_10a8312ec(puVar6 + 0xd);
      func_0x000109d1a1d0(puVar6 + 2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___ZdlPv_110352258)(puVar6);
      return;
    }
  }
  else {
    func_0x0001092af97c(lVar8 + 0x90);
  }
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x10a830ba8);
  (*pcVar4)();
}



/* Entry: 10a830d28; end: 10a830d67;  */

void FUN_10a830d28(long param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  ulong uVar5;
  long *plVar6;
  
  plVar6 = (long *)(param_1 + 0x30);
  FUN_10a85188c(*plVar6);
  plVar4 = (long *)*plVar6;
  *plVar6 = 0;
  if (plVar4 == (long *)0x0) {
    return;
  }
  puVar1 = (ulong *)(plVar4 + 1);
  do {
    uVar5 = *puVar1;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
    if (bVar3) {
      *puVar1 = uVar5 - 0x200000000;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (uVar5 >> 0x21 == 1) {
    FUN_109d1b3c4(plVar4,1,plVar6);
    do {
      uVar5 = *puVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = uVar5 - 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((plVar4 != (long *)0x0) && (uVar5 == 1)) {
                    /* WARNING: Could not recover jumptable at 0x0001092b42e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar4 + 8))(plVar4);
      return;
    }
  }
  return;
}



/* Entry: 10a830d68; end: 10a8312eb;  */

/* WARNING: Removing unreachable block (ram,0x00010a830ec0) */
/* WARNING: Removing unreachable block (ram,0x00010a8310d0) */
/* WARNING: Removing unreachable block (ram,0x00010a830e80) */
/* WARNING: Removing unreachable block (ram,0x00010a831014) */

void FUN_10a830d68(long *param_1,long *param_2,long param_3)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long *plVar9;
  long *plVar10;
  long *plStack_80;
  long lStack_78;
  long *plStack_70;
  code *pcStack_68;
  long *plStack_60;
  undefined **ppuStack_58;
  
  if (param_3 != 0) {
    plVar9 = (long *)(param_3 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar3) {
        *plVar9 = *plVar9 + 4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  plVar4 = (long *)0x118;
  __Znwm();
  plVar4[2] = 0;
  plVar4[1] = 0x200000006;
  *(undefined2 *)(plVar4 + 3) = 4;
  plVar4[5] = 0;
  plVar4[4] = 0;
  plVar4[7] = 0;
  plVar4[6] = 0;
  plVar4[9] = 0;
  plVar4[8] = 0;
  plVar4[0xb] = 0;
  plVar4[10] = 0;
  plVar4[0xd] = 0;
  plVar4[0xc] = 0;
  plVar4[0xf] = 0;
  plVar4[0xe] = 0;
  plVar4[0x10] = 0;
  plVar4[0x11] = (long)(plVar4 + 3);
  plVar4[0x12] = 0;
  *(undefined1 *)(plVar4 + 0x13) = 0;
  *(undefined1 *)(plVar4 + 0x15) = 0;
  *plVar4 = (long)&PTR_FUN_110c22e20;
  plVar10 = plVar4 + 0x16;
  *plVar10 = param_3;
  plVar9 = (long *)(*param_2 + 8);
  plVar4[0x17] = *param_2;
  do {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
    if (bVar3) {
      *plVar9 = *plVar9 + 4;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  plVar4[0x1a] = 0;
  plVar4[0x1b] = 0x32aaaba7;
  plVar4[0x1d] = 0;
  plVar4[0x1c] = 0;
  plVar4[0x1f] = 0;
  plVar4[0x1e] = 0;
  plVar4[0x21] = 0;
  plVar4[0x20] = 0;
  plVar4[0x22] = 0;
  lStack_78 = 0;
  plVar4[0x18] = (long)plVar4;
  plVar4[0x19] = 0;
  plStack_70 = plVar10;
  if (((uint)*(undefined8 *)(plVar4[0x17] + 0x10) >> 1 & 1) == 0) {
    __ZNSt3__15mutex4lockEv(plVar4 + 0x1b);
    lVar8 = *plVar10;
    plVar9 = (long *)(lVar8 + 0x10);
    do {
      lVar6 = *plVar9;
      if (lVar6 == 0) {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
        if (bVar3) {
          *plVar9 = 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
        if (cVar2 == '\0') {
          lVar6 = lVar8 + 0x18;
          pcStack_68 = FUN_10a8519e0;
          ppuStack_58 = &PTR_PTR_1132fed68;
          plStack_60 = plVar10;
          func_0x000109d1b588(lVar6,&pcStack_68);
          *(undefined8 *)(lVar8 + 0x10) = 0;
          plStack_70[3] = lVar6;
          lVar8 = plVar4[0x17];
          plVar9 = (long *)(lVar8 + 0x10);
          goto LAB_10a831000;
        }
      }
      else {
        ClearExclusiveLocal();
      }
    } while (((uint)lVar6 >> 1 & 1) == 0);
    plStack_70[3] = 0;
    lVar8 = plVar4[0x18];
    plVar9 = (long *)(lVar8 + 0x10);
    do {
      lVar6 = *plVar9;
      if (lVar6 == 0) {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
        if (bVar3) {
          *plVar9 = 2;
          cVar2 = ExclusiveMonitorsStatus();
        }
        if (cVar2 == '\0') {
          func_0x000109d1b4dc(lVar8 + 0x18);
          break;
        }
      }
      else {
        ClearExclusiveLocal();
      }
    } while (((uint)lVar6 >> 1 & 1) == 0);
    plVar9 = (long *)plVar4[0x17];
    plVar4[0x17] = 0;
    if (plVar9 != (long *)0x0) {
      puVar1 = (ulong *)(plVar9 + 1);
      do {
        uVar5 = *puVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = uVar5 - 4;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if ((uVar5 & 0x1fffffffc) == 4) {
        (**(code **)(*plVar9 + 0x10))(plVar9);
        do {
          uVar5 = *puVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar3) {
            *puVar1 = uVar5 - 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (uVar5 - 1 == 0) {
          (**(code **)(*plVar9 + 8))(plVar9);
        }
      }
    }
    lVar8 = plVar4[0x18];
    plVar4[0x18] = 0;
    if (lVar8 != 0) {
      func_0x0001092b4274(plVar4 + 0x18);
    }
    *param_1 = *plVar10;
    *plVar10 = 0;
    plStack_80 = plVar4;
LAB_10a831240:
    __ZNSt3__15mutex6unlockEv(plVar4 + 0x1b);
  }
  else {
    lVar8 = plVar4[0x18];
    plVar9 = plVar4;
    FUN_109d1857c();
    func_0x000109d1b350(lVar8,plVar9);
    plVar9 = (long *)*plVar10;
    *plVar10 = 0;
    if (plVar9 != (long *)0x0) {
      puVar1 = (ulong *)(plVar9 + 1);
      do {
        uVar5 = *puVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = uVar5 - 4;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if ((uVar5 & 0x1fffffffc) == 4) {
        do {
          uVar5 = *puVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar3) {
            *puVar1 = uVar5 - 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (uVar5 - 1 == 0) {
          (**(code **)(*plVar9 + 8))();
        }
      }
    }
    plVar9 = (long *)plVar4[0x17];
    plVar4[0x17] = 0;
    if (plVar9 != (long *)0x0) {
      puVar1 = (ulong *)(plVar9 + 1);
      do {
        uVar5 = *puVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = uVar5 - 4;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if ((uVar5 & 0x1fffffffc) == 4) {
        (**(code **)(*plVar9 + 0x10))(plVar9);
        do {
          uVar5 = *puVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar3) {
            *puVar1 = uVar5 - 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (uVar5 - 1 == 0) {
          (**(code **)(*plVar9 + 8))(plVar9);
        }
      }
    }
    lVar8 = plVar4[0x18];
    plVar4[0x18] = 0;
    if (lVar8 != 0) {
      func_0x0001092b4274(plVar4 + 0x18);
    }
    *param_1 = (long)plVar4;
    plStack_80 = (long *)0x0;
  }
  if (lStack_78 != 0) {
    func_0x0001092b4274(&lStack_78);
  }
  if (plStack_80 != (long *)0x0) {
    puVar1 = (ulong *)(plStack_80 + 1);
    do {
      uVar5 = *puVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = uVar5 - 4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((uVar5 & 0x1fffffffc) == 4) {
      do {
        uVar5 = *puVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = uVar5 - 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (uVar5 - 1 == 0) {
        (**(code **)(*plStack_80 + 8))();
      }
    }
  }
  return;
LAB_10a831000:
  do {
    lVar7 = *plVar9;
    if (lVar7 == 0) {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar3) {
        *plVar9 = 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
      if (cVar2 == '\0') {
        lVar6 = lVar8 + 0x18;
        pcStack_68 = FUN_10a851af0;
        ppuStack_58 = &PTR_PTR_1132fed68;
        plStack_60 = plVar10;
        func_0x000109d1b588(lVar6,&pcStack_68);
        *(undefined8 *)(lVar8 + 0x10) = 0;
        plStack_70[4] = lVar6;
        *param_1 = (long)plVar4;
        goto LAB_10a83123c;
      }
    }
    else {
      ClearExclusiveLocal();
    }
  } while (((uint)lVar7 >> 1 & 1) == 0);
  plStack_70[4] = 0;
  lVar8 = plVar4[0x18];
  FUN_109d1857c();
  func_0x000109d1b350(lVar8,lVar6);
  plVar9 = (long *)plVar4[0x17];
  plVar4[0x17] = 0;
  if (plVar9 != (long *)0x0) {
    puVar1 = (ulong *)(plVar9 + 1);
    do {
      uVar5 = *puVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = uVar5 - 4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((uVar5 & 0x1fffffffc) == 4) {
      (**(code **)(*plVar9 + 0x10))(plVar9);
      do {
        uVar5 = *puVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = uVar5 - 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (uVar5 - 1 == 0) {
        (**(code **)(*plVar9 + 8))(plVar9);
      }
    }
  }
  lVar6 = *plVar10;
  plVar9 = (long *)(lVar6 + 0x10);
  lVar8 = plStack_70[3];
  while (lVar7 = *plVar9, lVar7 != 0) {
    ClearExclusiveLocal();
LAB_10a8310e4:
    if (((uint)lVar7 >> 1 & 1) != 0) goto LAB_10a831234;
  }
  cVar2 = '\x01';
  bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
  if (bVar3) {
    *plVar9 = 1;
    cVar2 = ExclusiveMonitorsStatus();
  }
  if (cVar2 != '\0') goto LAB_10a8310e4;
  pcStack_68 = FUN_10a8519e0;
  ppuStack_58 = &PTR_PTR_1132fed68;
  plStack_60 = plVar10;
  FUN_109d1b624(lVar6 + 0x18,&pcStack_68,lVar8);
  *(undefined8 *)(lVar6 + 0x10) = 0;
  plStack_70[3] = 0;
  plVar9 = (long *)*plVar10;
  *plVar10 = 0;
  if (plVar9 != (long *)0x0) {
    puVar1 = (ulong *)(plVar9 + 1);
    do {
      uVar5 = *puVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = uVar5 - 4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((uVar5 & 0x1fffffffc) == 4) {
      do {
        uVar5 = *puVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = uVar5 - 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (uVar5 - 1 == 0) {
        (**(code **)(*plVar9 + 8))();
      }
    }
  }
  lVar8 = plVar4[0x18];
  plVar4[0x18] = 0;
  if (lVar8 != 0) {
    func_0x0001092b4274(plVar4 + 0x18);
  }
LAB_10a831234:
  *param_1 = (long)plVar4;
LAB_10a83123c:
  plStack_80 = (long *)0x0;
  goto LAB_10a831240;
}



/* Entry: 10a8312ec; end: 10a831353;  */

long FUN_10a8312ec(long param_1)

{
  int iVar1;
  long lVar2;
  
  iVar1 = *(int *)(param_1 + 4);
  lVar2 = param_1;
  __ZSt19uncaught_exceptionsv();
  if ((iVar1 < (int)lVar2) && ((bRam000000011330a9e8 >> 2 & 1) != 0)) {
    func_0x00010ae06f08(1,4,&UNK_10f67bb5e,&UNK_10f67d931,0x133,&UNK_10f67d9a1);
  }
  return param_1;
}



/* Entry: 10a831354; end: 10a8313a7;  */

void FUN_10a831354(long param_1,uint param_2)

{
  if ((*(long *)(param_1 + 0x40) == 0) || (param_2 == (*(byte *)(param_1 + 0x54) & 1))) {
    *(char *)(param_1 + 0x54) = (char)param_2;
  }
  else if ((bRam000000011330a9e8 & 1) != 0) {
    FUN_10ae06f30(0,1,&UNK_10f67bb5e,&UNK_10f67bdad,0x188,&UNK_10f67be00,&stack0x00000000);
    return;
  }
  return;
}



/* Entry: 10a8313a8; end: 10a8313f7;  */

void FUN_10a8313a8(long *param_1,long param_2)

{
  long *plVar1;
  ulong *puVar2;
  char cVar3;
  bool bVar4;
  undefined *puVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 extraout_x8;
  ulong uVar8;
  long *plStack_50;
  long *plStack_48;
  long lStack_40;
  long *plStack_38;
  undefined1 *puStack_30;
  code *pcStack_28;
  
  FUN_10a82fc84();
  lVar7 = *(long *)(param_2 + 0x40);
  if (lVar7 != 0) {
    *param_1 = lVar7;
    plVar1 = (long *)(lVar7 + 8);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = *plVar1 + 4;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    return;
  }
  puVar5 = &UNK_10f67be47;
  FUN_10a00946c();
  pcStack_28 = FUN_10a8313f8;
  lStack_40 = param_2;
  plStack_38 = param_1;
  puStack_30 = &stack0xfffffffffffffff0;
  FUN_10a8313a8(&plStack_48);
  uVar6 = *(undefined8 *)(puVar5 + 400);
  plStack_50 = plStack_48;
  if (plStack_48 != (long *)0x0) {
    plVar1 = plStack_48 + 1;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = *plVar1 + 4;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  FUN_10a83a050(extraout_x8,uVar6,&plStack_50);
  if (plStack_50 != (long *)0x0) {
    puVar2 = (ulong *)(plStack_50 + 1);
    do {
      uVar8 = *puVar2;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(puVar2,0x10);
      if (bVar4) {
        *puVar2 = uVar8 - 4;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if ((uVar8 & 0x1fffffffc) == 4) {
      do {
        uVar8 = *puVar2;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(puVar2,0x10);
        if (bVar4) {
          *puVar2 = uVar8 - 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (uVar8 - 1 == 0) {
        (**(code **)(*plStack_50 + 8))();
      }
    }
  }
  if (plStack_48 != (long *)0x0) {
    puVar2 = (ulong *)(plStack_48 + 1);
    do {
      uVar8 = *puVar2;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(puVar2,0x10);
      if (bVar4) {
        *puVar2 = uVar8 - 4;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if ((uVar8 & 0x1fffffffc) == 4) {
      do {
        uVar8 = *puVar2;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(puVar2,0x10);
        if (bVar4) {
          *puVar2 = uVar8 - 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (uVar8 - 1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00010a8314e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plStack_48 + 8))();
        return;
      }
    }
  }
  return;
}



/* Entry: 10a8313f8; end: 10a83158f;  */

void FUN_10a8313f8(undefined8 param_1,long param_2)

{
  long *plVar1;
  ulong *puVar2;
  char cVar3;
  bool bVar4;
  undefined8 uVar5;
  ulong uVar6;
  long *plStack_30;
  long *plStack_28;
  
  FUN_10a8313a8(&plStack_28);
  uVar5 = *(undefined8 *)(param_2 + 400);
  plStack_30 = plStack_28;
  if (plStack_28 != (long *)0x0) {
    plVar1 = plStack_28 + 1;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = *plVar1 + 4;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  FUN_10a83a050(param_1,uVar5,&plStack_30);
  if (plStack_30 != (long *)0x0) {
    puVar2 = (ulong *)(plStack_30 + 1);
    do {
      uVar6 = *puVar2;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(puVar2,0x10);
      if (bVar4) {
        *puVar2 = uVar6 - 4;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if ((uVar6 & 0x1fffffffc) == 4) {
      do {
        uVar6 = *puVar2;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(puVar2,0x10);
        if (bVar4) {
          *puVar2 = uVar6 - 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (uVar6 - 1 == 0) {
        (**(code **)(*plStack_30 + 8))();
      }
    }
  }
  if (plStack_28 != (long *)0x0) {
    puVar2 = (ulong *)(plStack_28 + 1);
    do {
      uVar6 = *puVar2;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(puVar2,0x10);
      if (bVar4) {
        *puVar2 = uVar6 - 4;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if ((uVar6 & 0x1fffffffc) == 4) {
      do {
        uVar6 = *puVar2;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(puVar2,0x10);
        if (bVar4) {
          *puVar2 = uVar6 - 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (uVar6 - 1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00010a8314e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plStack_28 + 8))();
        return;
      }
    }
  }
  return;
}



/* Entry: 10a831590; end: 10a831e83;  */

/* WARNING: Removing unreachable block (ram,0x00010a831888) */
/* WARNING: Removing unreachable block (ram,0x00010a831714) */

void FUN_10a831590(long *param_1,long param_2,undefined8 *param_3,undefined1 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 *puVar1;
  ulong *puVar2;
  undefined8 uVar3;
  char cVar4;
  bool bVar5;
  code *pcVar6;
  undefined8 *puVar7;
  long *plVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  long *plVar12;
  long *plVar13;
  undefined8 uVar14;
  undefined8 uStack_58;
  long *plStack_50;
  undefined8 uStack_48;
  
  puVar7 = (undefined8 *)0x160;
  __Znwm();
  *puVar7 = FUN_10a8578d8;
  puVar7[1] = FUN_10a8580c8;
  *(undefined1 *)(puVar7 + 0x2b) = param_4;
  uVar14 = *param_3;
  uVar3 = param_3[1];
  puVar7[0x28] = param_2;
  puVar7[0x29] = uVar14;
  puVar1 = puVar7 + 0x22;
  puVar7[0x22] = uVar3;
  *(undefined8 *)((long)puVar7 + 0x117) = *(undefined8 *)((long)param_3 + 0xf);
  *(undefined1 *)((long)puVar7 + 0x159) = *(undefined1 *)((long)param_3 + 0x17);
  param_3[1] = 0;
  param_3[2] = 0;
  *param_3 = 0;
  FUN_10a711e58(puVar7 + 2);
  lVar9 = puVar7[7];
  if (lVar9 != 0) {
    plVar12 = (long *)(lVar9 + 8);
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar12,0x10);
      if (bVar5) {
        *plVar12 = *plVar12 + 4;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  plVar12 = puVar7 + 0x18;
  *param_1 = lVar9;
  lVar9 = *(long *)(param_2 + 0x68);
  lVar10 = *(long *)(lVar9 + 0x50);
  puVar7[0x1e] = lVar10;
  lVar9 = *(long *)(lVar9 + 0x58);
  puVar7[0x1f] = lVar9;
  if (lVar9 != 0) {
    plVar13 = (long *)(lVar9 + 8);
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar13,0x10);
      if (bVar5) {
        *plVar13 = *plVar13 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  if (lVar10 == 0) {
    lVar9 = 0;
    puVar7[0x20] = 0;
    puVar7[0x21] = 0;
  }
  else {
    lVar9 = *(long *)(lVar10 + 0x228);
    uVar14 = *(undefined8 *)(lVar10 + 0x220);
    puVar7[0x21] = *(undefined8 *)(lVar10 + 0x228);
    puVar7[0x20] = uVar14;
    if (lVar9 != 0) {
      plVar13 = (long *)(lVar9 + 8);
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar13,0x10);
        if (bVar5) {
          *plVar13 = *plVar13 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
  }
  puVar7[0x2a] = lVar9;
  puVar7[0x18] = 0;
  *(undefined1 *)((long)puVar7 + 0x11f) = 0;
  plVar13 = plVar12;
  FUN_10a6de354(plVar12,puVar7);
  if (((ulong)plVar13 & 1) != 0) {
    return;
  }
  puVar7[0x24] = puVar7[0x18];
  FUN_10a8313a8(puVar7 + 0x25,puVar7[0x28]);
  *plVar12 = puVar7[0x25];
  plVar13 = (long *)(puVar7[0x25] + 8);
  do {
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar13,0x10);
    if (bVar5) {
      *plVar13 = *plVar13 + 4;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  if (((uint)*(undefined8 *)(*plVar12 + 0x10) >> 1 & 1) == 0) {
    *(undefined1 *)((long)puVar7 + 0x11f) = 1;
    lVar9 = puVar7[0x18];
    plVar13 = (long *)(lVar9 + 0x10);
    uStack_48 = puVar7[3];
    do {
      lVar10 = *plVar13;
      if (lVar10 == 0) {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar13,0x10);
        if (bVar5) {
          *plVar13 = 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
        if (cVar4 == '\0') goto LAB_10a831b58;
      }
      else {
        ClearExclusiveLocal();
      }
    } while (((uint)lVar10 >> 1 & 1) == 0);
  }
  plVar13 = (long *)*plVar12;
  if (((uint)*(undefined8 *)(*plVar12 + 0x10) >> 5 & 1) == 0) {
    if ((*(byte *)(plVar13 + 0x14) & 1) != 0) {
      puVar2 = (ulong *)(plVar13 + 1);
      do {
        uVar11 = *puVar2;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(puVar2,0x10);
        if (bVar5) {
          *puVar2 = uVar11 - 4;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if ((uVar11 & 0x1fffffffc) == 4) {
        do {
          uVar11 = *puVar2;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar2,0x10);
          if (bVar5) {
            *puVar2 = uVar11 - 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (uVar11 - 1 == 0) {
          (**(code **)(*plVar13 + 8))(plVar13);
        }
      }
      plVar8 = (long *)puVar7[0x25];
      if (plVar8 != (long *)0x0) {
        puVar2 = (ulong *)(plVar8 + 1);
        do {
          uVar11 = *puVar2;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar2,0x10);
          if (bVar5) {
            *puVar2 = uVar11 - 4;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if ((uVar11 & 0x1fffffffc) == 4) {
          do {
            uVar11 = *puVar2;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(puVar2,0x10);
            if (bVar5) {
              *puVar2 = uVar11 - 1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (uVar11 - 1 == 0) {
            (**(code **)(*plVar8 + 8))();
          }
        }
      }
      *plVar12 = 0;
      puVar7[0x19] = 0;
      puVar7[0x1a] = 0;
      if (puVar7[0x20] == 0) {
        *puVar1 = 0;
        *(undefined8 *)((long)puVar7 + 0x117) = 0;
        FUN_10a8306e0(puVar7 + 9);
        FUN_10a00946c(&UNK_10f67b849);
      }
      else {
        puVar7[0x1b] = puVar7[0x29];
        puVar7[0x1c] = *puVar1;
        *(undefined8 *)((long)puVar7 + 0xe7) = *(undefined8 *)((long)puVar7 + 0x117);
        *(undefined1 *)((long)puVar7 + 0xef) = *(undefined1 *)((long)puVar7 + 0x159);
        *puVar1 = 0;
        *(undefined8 *)((long)puVar7 + 0x117) = 0;
        FUN_10a6fba94(puVar7 + 0x27,puVar7[0x1e],plVar13 + 0x13,puVar7 + 0x1b,
                      *(undefined1 *)(puVar7 + 0x2b));
        FUN_10a4f3e88(puVar7 + 0x26,puVar7 + 0x24,puVar7 + 0x27);
        puVar7[0x25] = puVar7[0x26];
        plVar13 = (long *)(puVar7[0x26] + 8);
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar13,0x10);
          if (bVar5) {
            *plVar13 = *plVar13 + 4;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (((uint)*(undefined8 *)(puVar7[0x25] + 0x10) >> 1 & 1) == 0) {
          *(undefined1 *)((long)puVar7 + 0x11f) = 2;
          lVar9 = puVar7[0x25];
          plVar13 = (long *)(lVar9 + 0x10);
          uStack_48 = puVar7[3];
          do {
            lVar10 = *plVar13;
            if (lVar10 == 0) {
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(plVar13,0x10);
              if (bVar5) {
                *plVar13 = 1;
                cVar4 = ExclusiveMonitorsStatus();
              }
              if (cVar4 == '\0') {
LAB_10a831b58:
                uStack_58 = 0;
                plStack_50 = puVar7;
                func_0x000109d1b588(lVar9 + 0x18,&uStack_58);
                *(undefined8 *)(lVar9 + 0x10) = 0;
                return;
              }
            }
            else {
              ClearExclusiveLocal();
            }
          } while (((uint)lVar10 >> 1 & 1) == 0);
        }
        lVar9 = puVar7[0x25];
        if (((uint)*(undefined8 *)(puVar7[0x25] + 0x10) >> 5 & 1) == 0) {
          if ((*(byte *)(lVar9 + 0xb0) & 1) != 0) {
            __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
                      (plVar12,lVar9 + 0x98);
            plVar13 = (long *)puVar7[0x25];
            if (plVar13 != (long *)0x0) {
              puVar2 = (ulong *)(plVar13 + 1);
              do {
                uVar11 = *puVar2;
                cVar4 = '\x01';
                bVar5 = (bool)ExclusiveMonitorPass(puVar2,0x10);
                if (bVar5) {
                  *puVar2 = uVar11 - 4;
                  cVar4 = ExclusiveMonitorsStatus();
                }
              } while (cVar4 != '\0');
              if ((uVar11 & 0x1fffffffc) == 4) {
                do {
                  uVar11 = *puVar2;
                  cVar4 = '\x01';
                  bVar5 = (bool)ExclusiveMonitorPass(puVar2,0x10);
                  if (bVar5) {
                    *puVar2 = uVar11 - 1;
                    cVar4 = ExclusiveMonitorsStatus();
                  }
                } while (cVar4 != '\0');
                if (uVar11 - 1 == 0) {
                  (**(code **)(*plVar13 + 8))();
                }
              }
            }
            plVar13 = (long *)puVar7[0x26];
            if (plVar13 != (long *)0x0) {
              puVar2 = (ulong *)(plVar13 + 1);
              do {
                uVar11 = *puVar2;
                cVar4 = '\x01';
                bVar5 = (bool)ExclusiveMonitorPass(puVar2,0x10);
                if (bVar5) {
                  *puVar2 = uVar11 - 4;
                  cVar4 = ExclusiveMonitorsStatus();
                }
              } while (cVar4 != '\0');
              if ((uVar11 & 0x1fffffffc) == 4) {
                do {
                  uVar11 = *puVar2;
                  cVar4 = '\x01';
                  bVar5 = (bool)ExclusiveMonitorPass(puVar2,0x10);
                  if (bVar5) {
                    *puVar2 = uVar11 - 1;
                    cVar4 = ExclusiveMonitorsStatus();
                  }
                } while (cVar4 != '\0');
                if (uVar11 - 1 == 0) {
                  (**(code **)(*plVar13 + 8))();
                }
              }
            }
            plVar13 = (long *)puVar7[0x27];
            if (plVar13 != (long *)0x0) {
              puVar2 = (ulong *)(plVar13 + 1);
              do {
                uVar11 = *puVar2;
                cVar4 = '\x01';
                bVar5 = (bool)ExclusiveMonitorPass(puVar2,0x10);
                if (bVar5) {
                  *puVar2 = uVar11 - 4;
                  cVar4 = ExclusiveMonitorsStatus();
                }
              } while (cVar4 != '\0');
              if ((uVar11 & 0x1fffffffc) == 4) {
                do {
                  uVar11 = *puVar2;
                  cVar4 = '\x01';
                  bVar5 = (bool)ExclusiveMonitorPass(puVar2,0x10);
                  if (bVar5) {
                    *puVar2 = uVar11 - 1;
                    cVar4 = ExclusiveMonitorsStatus();
                  }
                } while (cVar4 != '\0');
                if (uVar11 - 1 == 0) {
                  (**(code **)(*plVar13 + 8))();
                }
              }
            }
            if (*(char *)((long)puVar7 + 0xef) < '\0') {
              __ZdlPv(puVar7[0x1b]);
            }
            if ((bRam000000011330a9e8 >> 2 & 1) != 0) {
              plVar13 = (long *)puVar7[0x18];
              if (-1 < *(char *)((long)puVar7 + 0xd7)) {
                plVar13 = plVar12;
              }
              func_0x00010ae06f08(1,4,&UNK_10f67bb5e,&UNK_10f67be77,0x1bf,&UNK_10f67bf17,param_7,
                                  param_8,plVar13);
            }
            FUN_10a831e84(&uStack_58,*(undefined8 *)(puVar7[0x28] + 0x60),1,plVar12);
            FUN_10a6dee28(puVar7 + 2,&uStack_58);
            if (plStack_50 != (long *)0x0) {
              plVar13 = plStack_50 + 1;
              do {
                lVar9 = *plVar13;
                cVar4 = '\x01';
                bVar5 = (bool)ExclusiveMonitorPass(plVar13,0x10);
                if (bVar5) {
                  *plVar13 = lVar9 + -1;
                  cVar4 = ExclusiveMonitorsStatus();
                }
              } while (cVar4 != '\0');
              if (lVar9 == 0) {
                (**(code **)(*plStack_50 + 0x10))(plStack_50);
                __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_50);
              }
            }
            if (*(char *)((long)puVar7 + 0xd7) < '\0') {
              __ZdlPv(*plVar12);
            }
            plVar12 = (long *)puVar7[0x24];
            if (plVar12 != (long *)0x0) {
              puVar2 = (ulong *)(plVar12 + 1);
              do {
                uVar11 = *puVar2;
                cVar4 = '\x01';
                bVar5 = (bool)ExclusiveMonitorPass(puVar2,0x10);
                if (bVar5) {
                  *puVar2 = uVar11 - 4;
                  cVar4 = ExclusiveMonitorsStatus();
                }
              } while (cVar4 != '\0');
              if ((uVar11 & 0x1fffffffc) == 4) {
                (**(code **)(*plVar12 + 0x10))(plVar12);
                do {
                  uVar11 = *puVar2;
                  cVar4 = '\x01';
                  bVar5 = (bool)ExclusiveMonitorPass(puVar2,0x10);
                  if (bVar5) {
                    *puVar2 = uVar11 - 1;
                    cVar4 = ExclusiveMonitorsStatus();
                  }
                } while (cVar4 != '\0');
                if (uVar11 - 1 == 0) {
                  (**(code **)(*plVar12 + 8))(plVar12);
                }
              }
            }
            plVar12 = (long *)puVar7[0x21];
            if (plVar12 != (long *)0x0) {
              plVar13 = plVar12 + 1;
              do {
                lVar9 = *plVar13;
                cVar4 = '\x01';
                bVar5 = (bool)ExclusiveMonitorPass(plVar13,0x10);
                if (bVar5) {
                  *plVar13 = lVar9 + -1;
                  cVar4 = ExclusiveMonitorsStatus();
                }
              } while (cVar4 != '\0');
              if (lVar9 == 0) {
                (**(code **)(*plVar12 + 0x10))(plVar12);
                __ZNSt3__119__shared_weak_count14__release_weakEv(plVar12);
              }
            }
            plVar12 = (long *)puVar7[0x1f];
            if (plVar12 != (long *)0x0) {
              plVar13 = plVar12 + 1;
              do {
                lVar9 = *plVar13;
                cVar4 = '\x01';
                bVar5 = (bool)ExclusiveMonitorPass(plVar13,0x10);
                if (bVar5) {
                  *plVar13 = lVar9 + -1;
                  cVar4 = ExclusiveMonitorsStatus();
                }
              } while (cVar4 != '\0');
              if (lVar9 == 0) {
                (**(code **)(*plVar12 + 0x10))(plVar12);
                __ZNSt3__119__shared_weak_count14__release_weakEv(plVar12);
              }
            }
            func_0x000109d1a1d0(puVar7 + 2);
            __ZdlPv(puVar7);
            return;
          }
        }
        else {
          func_0x0001092af97c(lVar9 + 0x90);
        }
      }
    }
  }
  else {
    func_0x0001092af97c(plVar13 + 0x12);
  }
                    /* WARNING: Does not return */
  pcVar6 = (code *)SoftwareBreakpoint(1,0x10a831bc4);
  (*pcVar6)();
}



/* Entry: 10a831e84; end: 10a831f77;  */

void FUN_10a831e84(undefined8 param_1,undefined8 param_2,undefined1 param_3,undefined8 param_4)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  long *plStack_50;
  long *plStack_48;
  
  plVar4 = (long *)0x118;
  __Znwm();
  plVar4[1] = 0;
  plVar4[2] = 0;
  *plVar4 = (long)&PTR_FUN_110c14bc8;
  plVar1 = plVar4 + 3;
  FUN_10a6f27ec(plVar1,param_2,param_3,param_4);
  plStack_50 = plVar1;
  plStack_48 = plVar4;
  FUN_10a6ff650(&plStack_50,plVar4 + 8,plVar1);
  FUN_10a6ff4ac(param_1,&plStack_50);
  plVar1 = plStack_48;
  if (plStack_48 != (long *)0x0) {
    plVar4 = plStack_48 + 1;
    do {
      lVar5 = *plVar4;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar4,0x10);
      if (bVar3) {
        *plVar4 = lVar5 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar5 == 0) {
      (**(code **)(*plStack_48 + 0x10))(plStack_48);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar1);
    }
  }
  return;
}



/* Entry: 10a831f78; end: 10a832aaf;  */

/* WARNING: Removing unreachable block (ram,0x00010a83216c) */
/* WARNING: Removing unreachable block (ram,0x00010a832528) */

void FUN_10a831f78(long *param_1,long param_2)

{
  ulong *puVar1;
  undefined1 uVar2;
  char cVar3;
  bool bVar4;
  code *pcVar5;
  long *plVar6;
  long *plVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  long *plVar11;
  long *plVar12;
  long lVar13;
  long lStack_1b0;
  long *plStack_1a8;
  long lStack_1a0;
  long *plStack_198;
  undefined1 auStack_188 [288];
  long *plStack_68;
  long *plStack_60;
  long lStack_58;
  
  if ((bRam000000011330a9e8 >> 2 & 1) != 0) {
    func_0x00010ae06f08(1,4,&UNK_10f67bb5e,&UNK_10f67bf45,0x1ee,&UNK_10f67bfb0);
  }
  if (*(char *)(param_2 + 0xe3) == '\x01') {
    *param_1 = 0;
    plVar6 = (long *)0xb0;
    __Znwm();
    plVar6[2] = 0;
    plVar6[1] = 0x200000006;
    *(undefined2 *)(plVar6 + 3) = 4;
    plVar6[5] = 0;
    plVar6[4] = 0;
    plVar6[7] = 0;
    plVar6[6] = 0;
    plVar6[9] = 0;
    plVar6[8] = 0;
    plVar6[0xb] = 0;
    plVar6[10] = 0;
    plVar6[0xd] = 0;
    plVar6[0xc] = 0;
    plVar6[0xf] = 0;
    plVar6[0xe] = 0;
    plVar6[0x10] = 0;
    plVar6[0x11] = (long)(plVar6 + 3);
    plVar6[0x12] = 0;
    *plVar6 = (long)&PTR_FUN_110c14b20;
    *(undefined1 *)(plVar6 + 0x13) = 0;
    *(undefined1 *)(plVar6 + 0x15) = 0;
    *param_1 = (long)plVar6;
    plStack_68 = plVar6;
    FUN_10a009538(auStack_188,&UNK_10f67bfd5);
    FUN_10a05bde0(&lStack_1a0,auStack_188);
    func_0x000109d1b350(plStack_68,&lStack_1a0);
    __ZNSt13exception_ptrD1Ev(&lStack_1a0);
    __ZNSt13runtime_errorD2Ev(auStack_188);
    if (plStack_68 != (long *)0x0) {
      func_0x0001092b4274(&plStack_68);
    }
    goto LAB_10a83272c;
  }
  FUN_10a82fc84(param_2);
  lVar8 = *(long *)(param_2 + 0x40);
  lVar13 = *(long *)(param_2 + 400);
  uVar2 = *(undefined1 *)(param_2 + 0xe0);
  plVar6 = (long *)0x78;
  __Znwm();
  *plVar6 = (long)FUN_10a85a0cc;
  plVar6[1] = (long)FUN_10a85a328;
  FUN_10a711e58(plVar6 + 2);
  plVar11 = (long *)plVar6[7];
  if (plVar11 != (long *)0x0) {
    plVar12 = plVar11 + 1;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar12,0x10);
      if (bVar4) {
        *plVar12 = *plVar12 + 4;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  plVar6[9] = param_2;
  *(bool *)(plVar6 + 10) = lVar8 != 0;
  *(undefined1 *)((long)plVar6 + 0x51) = uVar2;
  plVar6[0xb] = lVar13;
  *(undefined1 *)(plVar6 + 0xc) = 0;
  *(undefined1 *)(plVar6 + 0xe) = 0;
  plVar12 = plVar6 + 0xb;
  FUN_10a6fd0e0(plVar12,plVar6);
  if (((ulong)plVar12 & 1) == 0) {
    FUN_10a83aa34(plVar6 + 0xd,plVar6 + 9);
    plVar6[0xb] = plVar6[0xd];
    plVar12 = (long *)(plVar6[0xd] + 8);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar12,0x10);
      if (bVar4) {
        *plVar12 = *plVar12 + 4;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (((uint)*(undefined8 *)(plVar6[0xb] + 0x10) >> 1 & 1) == 0) {
      *(undefined1 *)(plVar6 + 0xe) = 1;
      lVar13 = plVar6[0xb];
      plVar12 = (long *)(lVar13 + 0x10);
      lVar8 = plVar6[3];
      do {
        lVar10 = *plVar12;
        if (lVar10 == 0) {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar12,0x10);
          if (bVar4) {
            *plVar12 = 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
          if (cVar3 == '\0') {
            plStack_68 = (long *)0x0;
            plStack_60 = plVar6;
            lStack_58 = lVar8;
            func_0x000109d1b588(lVar13 + 0x18,&plStack_68);
            *(undefined8 *)(lVar13 + 0x10) = 0;
            goto LAB_10a83226c;
          }
        }
        else {
          ClearExclusiveLocal();
        }
      } while (((uint)lVar10 >> 1 & 1) == 0);
    }
    lVar8 = plVar6[0xb];
    if (((uint)*(undefined8 *)(plVar6[0xb] + 0x10) >> 5 & 1) != 0) {
      func_0x0001092af97c(lVar8 + 0x90);
      goto LAB_10a832760;
    }
    if ((*(byte *)(lVar8 + 0xa8) & 1) == 0) goto LAB_10a832760;
    FUN_10a6dee28(plVar6 + 2,lVar8 + 0x98);
    plVar12 = (long *)plVar6[0xb];
    if (plVar12 != (long *)0x0) {
      puVar1 = (ulong *)(plVar12 + 1);
      do {
        uVar9 = *puVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar4) {
          *puVar1 = uVar9 - 4;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if ((uVar9 & 0x1fffffffc) == 4) {
        do {
          uVar9 = *puVar1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar4) {
            *puVar1 = uVar9 - 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (uVar9 - 1 == 0) {
          (**(code **)(*plVar12 + 8))();
        }
      }
    }
    plVar12 = (long *)plVar6[0xd];
    if (plVar12 != (long *)0x0) {
      puVar1 = (ulong *)(plVar12 + 1);
      do {
        uVar9 = *puVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar4) {
          *puVar1 = uVar9 - 4;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if ((uVar9 & 0x1fffffffc) == 4) {
        do {
          uVar9 = *puVar1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar4) {
            *puVar1 = uVar9 - 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (uVar9 - 1 == 0) {
          (**(code **)(*plVar12 + 8))();
        }
      }
    }
    func_0x000109d1a1d0(plVar6 + 2);
    __ZdlPv(plVar6);
  }
LAB_10a83226c:
  lStack_1a0 = 0;
  plStack_198 = (long *)0x0;
  plStack_68 = *(long **)(*(long *)(param_2 + 0x68) + 0x50);
  plStack_60 = *(long **)(*(long *)(param_2 + 0x68) + 0x58);
  if (plStack_60 != (long *)0x0) {
    plVar6 = plStack_60 + 1;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar4) {
        *plVar6 = *plVar6 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  if (plStack_68 != (long *)0x0) {
    FUN_10a6fb960(&lStack_1b0,plStack_68,*(undefined1 *)(param_2 + 0xe0));
    plVar6 = plStack_198;
    plStack_198 = plStack_1a8;
    lStack_1a0 = lStack_1b0;
    lStack_1b0 = 0;
    plStack_1a8 = (long *)0x0;
    if (plVar6 != (long *)0x0) {
      plVar12 = plVar6 + 1;
      do {
        lVar8 = *plVar12;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar12,0x10);
        if (bVar4) {
          *plVar12 = lVar8 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar8 == 0) {
        (**(code **)(*plVar6 + 0x10))(plVar6);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
      }
    }
    plVar6 = plStack_1a8;
    if (plStack_1a8 != (long *)0x0) {
      plVar12 = plStack_1a8 + 1;
      do {
        lVar8 = *plVar12;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar12,0x10);
        if (bVar4) {
          *plVar12 = lVar8 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar8 == 0) {
        (**(code **)(*plStack_1a8 + 0x10))(plStack_1a8);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
      }
    }
  }
  plVar6 = plStack_60;
  if (plStack_60 != (long *)0x0) {
    plVar12 = plStack_60 + 1;
    do {
      lVar8 = *plVar12;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar12,0x10);
      if (bVar4) {
        *plVar12 = lVar8 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar8 == 0) {
      (**(code **)(*plStack_60 + 0x10))(plStack_60);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
    }
  }
  if (lStack_1a0 == 0) {
    *param_1 = (long)plVar11;
    if (plVar11 != (long *)0x0) {
      plVar6 = plVar11 + 1;
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar6,0x10);
        if (bVar4) {
          *plVar6 = *plVar6 + 4;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      goto LAB_10a83243c;
    }
    lVar13 = 0;
    lVar8 = *(long *)(param_2 + 400);
  }
  else {
    plVar6 = (long *)0xb0;
    __Znwm();
    *(undefined2 *)(plVar6 + 3) = 4;
    plVar6[2] = 0;
    plVar6[1] = 0x200000006;
    plVar6[5] = 0;
    plVar6[4] = 0;
    plVar6[7] = 0;
    plVar6[6] = 0;
    plVar6[9] = 0;
    plVar6[8] = 0;
    plVar6[0xb] = 0;
    plVar6[10] = 0;
    plVar6[0xd] = 0;
    plVar6[0xc] = 0;
    plVar6[0xf] = 0;
    plVar6[0xe] = 0;
    plVar6[0x10] = 0;
    plVar6[0x11] = (long)(plVar6 + 3);
    plVar6[0x12] = 0;
    *plVar6 = (long)&PTR_FUN_110c14b20;
    *(undefined1 *)(plVar6 + 0x13) = 0;
    *(undefined1 *)(plVar6 + 0x15) = 0;
    plStack_60 = plVar6;
    FUN_10a6fd6f4();
    *param_1 = (long)plVar6;
    plStack_68 = (long *)0x0;
    func_0x0001092b4274(&plStack_60,plVar6);
    if (plStack_68 != (long *)0x0) {
      puVar1 = (ulong *)(plStack_68 + 1);
      do {
        uVar9 = *puVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar4) {
          *puVar1 = uVar9 - 4;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if ((uVar9 & 0x1fffffffc) == 4) {
        do {
          uVar9 = *puVar1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar4) {
            *puVar1 = uVar9 - 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (uVar9 - 1 == 0) {
          (**(code **)(*plStack_68 + 8))();
        }
      }
    }
LAB_10a83243c:
    lVar13 = *param_1;
    lVar8 = *(long *)(param_2 + 400);
    if (lVar13 != 0) {
      plVar6 = (long *)(lVar13 + 8);
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar6,0x10);
        if (bVar4) {
          *plVar6 = *plVar6 + 4;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
  }
  plVar6 = (long *)0x78;
  __Znwm();
  *plVar6 = (long)FUN_10a85a700;
  plVar6[1] = (long)FUN_10a85a9dc;
  func_0x0001092ba17c(plVar6 + 2);
  plVar12 = (long *)plVar6[7];
  if (plVar12 != (long *)0x0) {
    plVar7 = plVar12 + 1;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar4) {
        *plVar7 = *plVar7 + 4;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  plVar6[9] = lVar13;
  plVar6[10] = param_2;
  plVar6[0xb] = lVar8;
  *(undefined1 *)(plVar6 + 0xc) = 0;
  *(undefined1 *)(plVar6 + 0xe) = 0;
  plVar7 = plVar6 + 0xb;
  func_0x0001092ba064(plVar7,plVar6);
  if (((ulong)plVar7 & 1) == 0) {
    FUN_10a83b3d4(plVar6 + 0xd,plVar6 + 9);
    plVar6[0xb] = plVar6[0xd];
    plVar7 = (long *)(plVar6[0xd] + 8);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar4) {
        *plVar7 = *plVar7 + 4;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (((uint)*(undefined8 *)(plVar6[0xb] + 0x10) >> 1 & 1) == 0) {
      *(undefined1 *)(plVar6 + 0xe) = 1;
      lVar13 = plVar6[0xb];
      plVar7 = (long *)(lVar13 + 0x10);
      lVar8 = plVar6[3];
      do {
        lVar10 = *plVar7;
        if (lVar10 == 0) {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar7,0x10);
          if (bVar4) {
            *plVar7 = 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
          if (cVar3 == '\0') {
            plStack_68 = (long *)0x0;
            plStack_60 = plVar6;
            lStack_58 = lVar8;
            func_0x000109d1b588(lVar13 + 0x18,&plStack_68);
            *(undefined8 *)(lVar13 + 0x10) = 0;
            goto joined_r0x00010a8326a8;
          }
        }
        else {
          ClearExclusiveLocal();
        }
      } while (((uint)lVar10 >> 1 & 1) == 0);
    }
    plVar7 = (long *)plVar6[0xb];
    if (((uint)*(undefined8 *)(plVar6[0xb] + 0x10) >> 5 & 1) != 0) {
      func_0x0001092af97c(plVar7 + 0x12);
LAB_10a832760:
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x10a832764);
      (*pcVar5)();
    }
    if (plVar7 != (long *)0x0) {
      puVar1 = (ulong *)(plVar7 + 1);
      do {
        uVar9 = *puVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar4) {
          *puVar1 = uVar9 - 4;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if ((uVar9 & 0x1fffffffc) == 4) {
        do {
          uVar9 = *puVar1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar4) {
            *puVar1 = uVar9 - 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (uVar9 - 1 == 0) {
          (**(code **)(*plVar7 + 8))();
        }
      }
    }
    plVar7 = (long *)plVar6[0xd];
    if (plVar7 != (long *)0x0) {
      puVar1 = (ulong *)(plVar7 + 1);
      do {
        uVar9 = *puVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar4) {
          *puVar1 = uVar9 - 4;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if ((uVar9 & 0x1fffffffc) == 4) {
        do {
          uVar9 = *puVar1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar4) {
            *puVar1 = uVar9 - 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (uVar9 - 1 == 0) {
          (**(code **)(*plVar7 + 8))();
        }
      }
    }
    func_0x0001092ba100(plVar6 + 2);
    plVar7 = (long *)plVar6[9];
    if (plVar7 != (long *)0x0) {
      puVar1 = (ulong *)(plVar7 + 1);
      do {
        uVar9 = *puVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar4) {
          *puVar1 = uVar9 - 4;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if ((uVar9 & 0x1fffffffc) == 4) {
        do {
          uVar9 = *puVar1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar4) {
            *puVar1 = uVar9 - 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (uVar9 - 1 == 0) {
          (**(code **)(*plVar7 + 8))();
        }
      }
    }
    func_0x000109d1a1d0(plVar6 + 2);
    __ZdlPv(plVar6);
  }
joined_r0x00010a8326a8:
  if (plVar12 != (long *)0x0) {
    puVar1 = (ulong *)(plVar12 + 1);
    do {
      uVar9 = *puVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar4) {
        *puVar1 = uVar9 - 4;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if ((uVar9 & 0x1fffffffc) == 4) {
      do {
        uVar9 = *puVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar4) {
          *puVar1 = uVar9 - 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (uVar9 - 1 == 0) {
        (**(code **)(*plVar12 + 8))(plVar12);
      }
    }
  }
  plVar6 = plStack_198;
  if (plStack_198 != (long *)0x0) {
    plVar12 = plStack_198 + 1;
    do {
      lVar8 = *plVar12;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar12,0x10);
      if (bVar4) {
        *plVar12 = lVar8 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar8 == 0) {
      (**(code **)(*plStack_198 + 0x10))(plStack_198);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
    }
  }
  if (plVar11 != (long *)0x0) {
    puVar1 = (ulong *)(plVar11 + 1);
    do {
      uVar9 = *puVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar4) {
        *puVar1 = uVar9 - 4;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if ((uVar9 & 0x1fffffffc) == 4) {
      do {
        uVar9 = *puVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar4) {
          *puVar1 = uVar9 - 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (uVar9 - 1 == 0) {
        (**(code **)(*plVar11 + 8))(plVar11);
      }
    }
  }
LAB_10a83272c:
  *(undefined1 *)(param_2 + 0xe0) = 0;
  return;
}



/* Entry: 10a832ab0; end: 10a832b7b;  */

void FUN_10a832ab0(undefined8 *param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
  long lVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  
  if ((*(byte *)(param_2 + 0x188) & 1) == 0) {
    ppuVar4 = (undefined **)&UNK_10e4ddb80;
    if (*(char *)(param_2 + 0x90) == '\x01') {
      puVar2 = (undefined *)(long)*(char *)(param_2 + 0x8f);
      if ((long)puVar2 < 0) {
        lVar3 = *(long *)(param_2 + 0x78);
        puVar2 = *(undefined **)(param_2 + 0x80);
      }
      else {
        lVar3 = param_2 + 0x78;
      }
      ppuVar5 = &PTR_DAT_110c21f88;
      lVar7 = 0xc0;
      do {
        if (ppuVar5[1] == puVar2) {
          puVar1 = *ppuVar5;
          _memcmp(puVar1,lVar3,puVar2);
          ppuVar6 = ppuVar5;
          if ((int)puVar1 == 0) break;
        }
        ppuVar5 = ppuVar5 + 8;
        lVar7 = lVar7 + -0x40;
        ppuVar6 = &PTR_DAT_110c22048;
      } while (lVar7 != 0);
      if (ppuVar6 != &PTR_DAT_110c22048) {
        ppuVar4 = ppuVar6 + 2;
      }
    }
  }
  else {
    ppuVar4 = (undefined **)(param_2 + 0x158);
  }
  puVar1 = ppuVar4[1];
  puVar2 = *ppuVar4;
  puVar8 = ppuVar4[2];
  puVar10 = ppuVar4[5];
  puVar9 = ppuVar4[4];
  param_1[3] = ppuVar4[3];
  param_1[2] = puVar8;
  param_1[5] = puVar10;
  param_1[4] = puVar9;
  param_1[1] = puVar1;
  *param_1 = puVar2;
  return;
}



/* Entry: 10a832b7c; end: 10a832c83;  */

long FUN_10a832b7c(long param_1)

{
  *(undefined ***)(param_1 + 0x10) = &PTR_DAT_110c21a18;
  *(undefined ***)(param_1 + 0x80) = &PTR_FUN_110c21a90;
  func_0x00010a004e5c(param_1 + 0x28);
  func_0x00010a004e04(param_1 + 0x18);
  return param_1;
}



/* Entry: 10a832c84; end: 10a832ce3;  */

void FUN_10a832c84(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110c21a18;
  param_1[0xe] = &PTR_FUN_110c21a90;
  func_0x00010a004e5c(param_1 + 3);
  func_0x00010a004e04(param_1 + 1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1 + -2);
  return;
}



/* Entry: 10a832ce4; end: 10a832d5b;  */

void FUN_10a832ce4(undefined8 param_1,long param_2)

{
  long lStack_58;
  long lStack_50;
  undefined8 uStack_48;
  undefined1 uStack_40;
  undefined1 uStack_38;
  undefined4 uStack_34;
  undefined1 uStack_30;
  undefined1 uStack_24;
  
  uStack_38 = 0;
  lStack_50 = 0;
  uStack_48 = 0;
  lStack_58 = 0;
  uStack_40 = 0;
  uStack_34 = 0x1000000;
  uStack_30 = 0;
  uStack_24 = 0;
  FUN_10a051998(param_2 + 0x138,&lStack_58);
  if (lStack_58 != 0) {
    lStack_50 = lStack_58;
    __ZdlPv();
  }
  return;
}



/* Entry: 10a832d5c; end: 10a832e13;  */

void FUN_10a832d5c(undefined8 param_1,long param_2)

{
  long lStack_58;
  long lStack_50;
  undefined8 uStack_48;
  undefined1 uStack_40;
  undefined1 uStack_38;
  undefined4 uStack_34;
  undefined1 uStack_30;
  undefined1 uStack_24;
  
  uStack_38 = 0;
  lStack_50 = 0;
  uStack_48 = 0;
  lStack_58 = 0;
  uStack_40 = 0;
  uStack_34 = 0x1000000;
  uStack_30 = 0;
  uStack_24 = 0;
  FUN_10a051998(param_2 + 0x138,&lStack_58);
  if (lStack_58 != 0) {
    lStack_50 = lStack_58;
    __ZdlPv();
  }
  return;
}



/* Entry: 10a832e14; end: 10a832e4b;  */

void FUN_10a832e14(long param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar1 = *(undefined8 **)(param_1 + 0x40);
  for (puVar2 = *(undefined8 **)(param_1 + 0x38); puVar2 != puVar1; puVar2 = puVar2 + 2) {
    (**(code **)(*(long *)*puVar2 + 0x10))();
  }
  return;
}



/* Entry: 10a832e4c; end: 10a833527;  */

/* WARNING: Heritage AFTER dead removal. Example location: d1 : 0x00010a83325c */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_10a832e4c(undefined8 *param_1,undefined8 param_2,undefined4 param_3,long param_4)

{
  code *pcVar1;
  long *plVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  undefined1 in_register_00005024;
  undefined1 in_register_00005025;
  undefined1 in_register_00005026;
  undefined1 uVar10;
  undefined1 uVar11;
  undefined1 uVar12;
  undefined8 uVar13;
  undefined1 auVar14 [16];
  float fVar15;
  undefined8 uVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fStack_250;
  float fStack_240;
  undefined8 uStack_220;
  undefined4 uStack_210;
  undefined4 uStack_20c;
  undefined4 uStack_208;
  undefined4 uStack_204;
  undefined4 uStack_200;
  undefined4 uStack_1fc;
  ulong uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  ulong uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  float fStack_190;
  float fStack_18c;
  float fStack_188;
  float fStack_184;
  float fStack_180;
  float fStack_17c;
  float fStack_178;
  float fStack_174;
  undefined8 uStack_170;
  undefined8 uStack_168;
  ulong uStack_160;
  ulong uStack_158;
  undefined8 uStack_150;
  undefined4 uStack_148;
  undefined8 uStack_140;
  float fStack_138;
  undefined8 uStack_130;
  undefined4 uStack_128;
  float fStack_120;
  float fStack_11c;
  float fStack_118;
  undefined8 uStack_110;
  float fStack_108;
  undefined8 uStack_100;
  float fStack_f8;
  float fStack_f0;
  undefined8 uStack_ec;
  float fStack_e4;
  float fStack_e0;
  float fStack_dc;
  ulong uStack_d8;
  undefined8 uStack_d0;
  float fStack_c8;
  float fStack_c4;
  float fStack_c0;
  float fStack_bc;
  float fStack_b8;
  float fStack_b4;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  
  lVar3 = *(long *)(param_4 + 0x38);
  if (*(long *)(param_4 + 0x40) != lVar3) {
    lVar5 = 0;
    uVar4 = 0;
    do {
      plVar2 = *(long **)(lVar3 + lVar5);
      (**(code **)(*plVar2 + 0x18))(param_1);
      if ((*(char *)(param_1 + 8) == '\x01') && ((*(byte *)(param_1 + 0xd) & 1) == 0)) {
        uStack_1c8 = param_1[1];
        uStack_1d0 = *param_1;
        uStack_1b8 = param_1[3];
        uStack_1c0 = param_1[2];
        uStack_1a8 = param_1[5];
        uStack_1b0 = param_1[4];
        uStack_198 = param_1[7];
        uStack_1a0 = param_1[6];
        if (*(char *)(param_4 + 0x68) == '\x01') {
          __ZNSt3__16chrono12steady_clock3nowEv();
          fVar6 = ((float)((long)plVar2 - *(long *)(param_4 + 0x70)) / 1e+09) / 5.0;
          fVar7 = 1.0;
          if (fVar6 <= 1.0) {
            fVar7 = fVar6;
          }
          if (fVar7 < 1.0) {
            if ((*(byte *)(param_4 + 0xb8) & 1) == 0) {
              FUN_10a04f808();
                    /* WARNING: Does not return */
              pcVar1 = (code *)SoftwareBreakpoint(1,0x10a833500);
              (*pcVar1)();
            }
            uStack_100 = 0;
            fStack_f8 = 0.0;
            uStack_110 = 0;
            fStack_108 = 0.0;
            fStack_120 = 0.0;
            fStack_11c = 0.0;
            fStack_118 = 0.0;
            uStack_130 = 0;
            uStack_128 = 0;
            uStack_140 = 0;
            fStack_138 = 0.0;
            uStack_150 = 0;
            uStack_148 = 0;
            uStack_160 = 0;
            uStack_158 = 0;
            uStack_170 = 0;
            uStack_168 = 0;
            fStack_188 = 0.0;
            fStack_184 = 1.0;
            fStack_190 = 0.0;
            fStack_18c = 0.0;
            fStack_178 = 0.0;
            fStack_174 = 1.0;
            fStack_180 = 0.0;
            fStack_17c = 0.0;
            FUN_10a833690(param_4 + 0x78,&fStack_120,&fStack_180,&uStack_100,&uStack_140,&uStack_160
                         );
            FUN_10a833690(&uStack_1d0,&uStack_130,&fStack_190,&uStack_110,&uStack_150,&uStack_170);
            fVar17 = fStack_174;
            fVar9 = fStack_178;
            fVar8 = fStack_17c;
            fVar6 = fStack_180;
            fVar22 = 1.0 - fVar7;
            uVar13 = NEON_rev64(uStack_100,4);
            uVar16 = NEON_rev64(uStack_110,4);
            fStack_250 = fStack_184 * fStack_174 + fStack_190 * fStack_180 +
                         fStack_18c * fStack_17c + fStack_188 * fStack_178;
            fVar23 = fStack_190;
            fVar24 = fStack_184;
            fVar18 = fStack_18c;
            fVar19 = fStack_188;
            if (fStack_250 < 0.0) {
              fVar24 = -fStack_184;
              fVar23 = -fStack_190;
              fVar18 = -fStack_18c;
              fVar19 = -fStack_188;
              fStack_250 = -fStack_250;
            }
            fVar20 = (float)uVar13 * fVar22 + (float)uVar16 * fVar7;
            fVar21 = (float)((ulong)uVar13 >> 0x20) * fVar22 +
                     (float)((ulong)uVar16 >> 0x20) * fVar7;
            fVar15 = fVar22 * fStack_f8 + fVar7 * fStack_108;
            if (fStack_250 <= 0.9999999) {
              _acosf();
              fVar22 = fVar22 * fStack_250;
              _sinf();
              fVar7 = fVar7 * fStack_250;
              _sinf();
              _sinf();
              fStack_240 = (fVar17 * fVar22 + fVar24 * fVar7) / fStack_250;
              fVar9 = (fVar9 * fVar22 + fVar19 * fVar7) / fStack_250;
              in_register_00005024 = SUB41(fVar9,0);
              in_register_00005025 = (undefined1)((uint)fVar9 >> 8);
              in_register_00005026 = (undefined1)((uint)fVar9 >> 0x10);
              uStack_220 = CONCAT17((char)((uint)fVar9 >> 0x18),
                                    CONCAT16(in_register_00005026,
                                             CONCAT15(in_register_00005025,
                                                      CONCAT14(in_register_00005024,
                                                               (fVar8 * fVar22 + fVar18 * fVar7) /
                                                               fStack_250))));
              fStack_250 = (fVar6 * fVar22 + fVar23 * fVar7) / fStack_250;
            }
            else {
              fStack_240 = fVar7 * fVar24 + fVar22 * fStack_174;
              fStack_250 = fVar7 * fVar23 + fVar22 * fStack_180;
              uStack_220 = CONCAT44(fVar19 * fVar7 + fStack_178 * fVar22,
                                    fVar18 * fVar7 + fStack_17c * fVar22);
            }
            uStack_210 = 0x3f800000;
            uStack_200 = 0;
            uStack_20c = 0;
            uStack_208 = 0;
            uStack_1fc = 0x3f800000;
            uStack_1f0 = 0;
            uStack_1e0 = 0;
            uStack_204 = (undefined4)uStack_160;
            uStack_1f8 = uStack_160 & 0xffffffff00000000;
            uStack_1e8 = CONCAT44((undefined4)uStack_158,0x3f800000);
            uStack_1d8 = uStack_158 & 0xffffffff00000000;
            fStack_e4 = 0.0;
            fStack_e0 = 0.0;
            uStack_ec = 0;
            fStack_f0 = 1.0;
            fStack_dc = 1.0;
            uStack_d8 = 0;
            uStack_d0 = 0;
            fStack_c8 = 1.0;
            fStack_c4 = 0.0;
            fVar7 = fVar20 * 0.0;
            fVar8 = fVar21 * 0.0;
            uVar13 = NEON_rev64(CONCAT44(fVar21,fVar20),4);
            fVar6 = (float)uVar13 + fVar7;
            fVar9 = (float)((ulong)uVar13 >> 0x20) + fVar8;
            fVar8 = fVar8 + fVar7;
            fVar7 = fVar15 * 0.0;
            uVar11 = (undefined1)((ulong)uVar13 >> 0x38);
            auVar14._4_4_ = fVar9;
            auVar14._0_4_ = fVar6;
            auVar14._8_4_ = fVar8;
            auVar14._12_4_ = fVar7;
            auVar14 = NEON_rev64(auVar14,4);
            fStack_c0 = (float)CONCAT13((char)((uint)fVar7 >> 0x18),
                                        (int3)(CONCAT13((char)((uint)fVar7 >> 0x10),
                                                        CONCAT12((char)((uint)fVar7 >> 8),
                                                                 CONCAT11(SUB41(fVar7,0),uVar11)))
                                              >> 8)) + fVar6 + 0.0;
            fStack_bc = auVar14._8_4_ + fVar9 + 0.0;
            fStack_b8 = fVar15 + fVar8 + 0.0;
            fStack_b4 = auVar14._12_4_ + fVar7 + 1.0;
            func_0x000109519fd0(&uStack_b0,fStack_c0,
                                CONCAT17(uVar11,CONCAT16(in_register_00005026,
                                                         CONCAT15(in_register_00005025,
                                                                  CONCAT14(in_register_00005024,
                                                                           param_3)))),auVar14._0_8_
                                ,&uStack_210,&fStack_f0);
            uStack_208 = (undefined4)uStack_a8;
            uStack_204 = (undefined4)((ulong)uStack_a8 >> 0x20);
            uStack_210 = (undefined4)uStack_b0;
            uStack_20c = (undefined4)((ulong)uStack_b0 >> 0x20);
            uStack_1f8 = uStack_98;
            uStack_200 = (undefined4)uStack_a0;
            uStack_1fc = (undefined4)((ulong)uStack_a0 >> 0x20);
            uStack_1e8 = uStack_88;
            uStack_1f0 = uStack_90;
            uStack_1d8 = uStack_78;
            uStack_1e0 = uStack_80;
            fVar17 = (float)uStack_220;
            fVar9 = (float)((ulong)uStack_220 >> 0x20);
            uVar13 = NEON_rev64(uStack_220,4);
            fVar6 = (float)uVar13 * fStack_240;
            fVar8 = (float)((ulong)uVar13 >> 0x20) * fStack_240;
            fStack_f0 = (fVar17 * fVar17 + fVar9 * fVar9) * -2.0 + 1.0;
            fStack_e0 = fVar17 * fStack_250 - fVar6;
            fVar7 = fVar9 * fStack_250 - fVar8;
            fStack_e0 = fStack_e0 + fStack_e0;
            fStack_dc = (fStack_250 * fStack_250 + fVar9 * fVar9) * -2.0 + 1.0;
            fVar23 = fVar17 * fVar9 + fStack_250 * fStack_240;
            fVar6 = fVar17 * fStack_250 + fVar6;
            fVar8 = fVar9 * fStack_250 + fVar8;
            fVar9 = fVar17 * fVar9 - fStack_250 * fStack_240;
            fVar7 = fVar7 + fVar7;
            uStack_ec = CONCAT17((char)((uint)fVar7 >> 0x18),
                                 CONCAT16((char)((uint)fVar7 >> 0x10),
                                          CONCAT15((char)((uint)fVar7 >> 8),
                                                   CONCAT14(SUB41(fVar7,0),fVar6 + fVar6))));
            fStack_e4 = 0.0;
            uStack_d8 = (ulong)(uint)(fVar23 + fVar23);
            uStack_d0 = CONCAT44(fVar9 + fVar9,fVar8 + fVar8);
            fStack_c8 = (fStack_250 * fStack_250 + fVar17 * fVar17) * -2.0 + 1.0;
            fStack_bc = 0.0;
            fStack_b8 = 0.0;
            fStack_c4 = 0.0;
            fStack_c0 = 0.0;
            fStack_b4 = 1.0;
            func_0x000109519fd0(&uStack_b0,&uStack_210,&fStack_f0);
            uStack_208 = (undefined4)uStack_a8;
            uStack_204 = (undefined4)((ulong)uStack_a8 >> 0x20);
            uStack_210 = (undefined4)uStack_b0;
            uStack_20c = (undefined4)((ulong)uStack_b0 >> 0x20);
            uStack_1f8 = uStack_98;
            uStack_200 = (undefined4)uStack_a0;
            uStack_1fc = (undefined4)((ulong)uStack_a0 >> 0x20);
            uStack_1e8 = uStack_88;
            uStack_1f0 = uStack_90;
            uStack_1d8 = uStack_78;
            uStack_1e0 = uStack_80;
            if (((float)uStack_140 != 0.0) && (!NAN((float)uStack_140))) {
              fStack_e4 = 0.0;
              fStack_e0 = 0.0;
              uStack_ec = 0;
              fStack_f0 = 1.0;
              fStack_dc = 1.0;
              uStack_d8 = 0;
              fStack_bc = 0.0;
              fStack_b8 = 0.0;
              fStack_c4 = 0.0;
              fStack_c0 = 0.0;
              fStack_c8 = 1.0;
              fStack_b4 = 1.0;
              uStack_d0 = uStack_140 << 0x20;
              func_0x000109519fd0(&uStack_b0,&uStack_210,&fStack_f0);
              uStack_208 = (undefined4)uStack_a8;
              uStack_204 = (undefined4)((ulong)uStack_a8 >> 0x20);
              uStack_210 = (undefined4)uStack_b0;
              uStack_20c = (undefined4)((ulong)uStack_b0 >> 0x20);
              uStack_200 = (undefined4)uStack_a0;
              uStack_1fc = (undefined4)((ulong)uStack_a0 >> 0x20);
            }
            if ((uStack_140._4_4_ != 0.0) && (!NAN(uStack_140._4_4_))) {
              fStack_e4 = 0.0;
              fStack_e0 = 0.0;
              uStack_ec = 0;
              fStack_f0 = 1.0;
              fStack_dc = 1.0;
              uStack_d8 = 0;
              fStack_bc = 0.0;
              fStack_b8 = 0.0;
              fStack_c4 = 0.0;
              fStack_c0 = 0.0;
              fStack_c8 = 1.0;
              fStack_b4 = 1.0;
              uStack_d0 = (ulong)(uint)uStack_140._4_4_;
              func_0x000109519fd0(&uStack_b0,&uStack_210,&fStack_f0);
              uStack_208 = (undefined4)uStack_a8;
              uStack_204 = (undefined4)((ulong)uStack_a8 >> 0x20);
              uStack_210 = (undefined4)uStack_b0;
              uStack_20c = (undefined4)((ulong)uStack_b0 >> 0x20);
              uStack_200 = (undefined4)uStack_a0;
              uStack_1fc = (undefined4)((ulong)uStack_a0 >> 0x20);
            }
            if ((fStack_138 != 0.0) && (!NAN(fStack_138))) {
              uStack_ec = 0;
              fStack_f0 = 1.0;
              fStack_e4 = 0.0;
              fStack_dc = 1.0;
              uStack_d8 = 0;
              uStack_d0 = 0;
              fStack_bc = 0.0;
              fStack_b8 = 0.0;
              fStack_c4 = 0.0;
              fStack_c0 = 0.0;
              fStack_c8 = 1.0;
              fStack_b4 = 1.0;
              fStack_e0 = fStack_138;
              func_0x000109519fd0(&uStack_b0,&uStack_210,&fStack_f0);
              uStack_208 = (undefined4)uStack_a8;
              uStack_204 = (undefined4)((ulong)uStack_a8 >> 0x20);
              uStack_210 = (undefined4)uStack_b0;
              uStack_20c = (undefined4)((ulong)uStack_b0 >> 0x20);
              uStack_200 = (undefined4)uStack_a0;
              uStack_1fc = (undefined4)((ulong)uStack_a0 >> 0x20);
            }
            fStack_e4 = fStack_120 * 0.0;
            fStack_f0 = fStack_120;
            uStack_ec = CONCAT44(fStack_e4,fStack_e4);
            fStack_e0 = fStack_11c * 0.0;
            fStack_c4 = fStack_118 * 0.0;
            uVar11 = (undefined1)((uint)fStack_c4 >> 8);
            uVar10 = (undefined1)((uint)fStack_c4 >> 0x10);
            uVar12 = (undefined1)((uint)fStack_c4 >> 0x18);
            uStack_d8 = CONCAT44(fStack_e0,fStack_e0);
            uStack_d0 = CONCAT44((int)(CONCAT17(uVar12,CONCAT16(uVar10,CONCAT15(uVar11,CONCAT14(
                                                  SUB41(fStack_c4,0),fStack_e0)))) >> 0x20),
                                 (int)(CONCAT17(uVar12,CONCAT16(uVar10,CONCAT15(uVar11,CONCAT14(
                                                  SUB41(fStack_c4,0),fStack_e0)))) >> 0x20));
            fStack_dc = (float)(CONCAT17((char)((uint)fStack_11c >> 0x18),
                                         CONCAT16((char)((uint)fStack_11c >> 0x10),
                                                  CONCAT15((char)((uint)fStack_11c >> 8),
                                                           CONCAT14(SUB41(fStack_11c,0),fStack_e0)))
                                        ) >> 0x20);
            fStack_c8 = fStack_118;
            fStack_c0 = 0.0;
            fStack_bc = 0.0;
            fStack_b8 = 0.0;
            fStack_b4 = 1.0;
            func_0x000109519fd0(&uStack_b0,&uStack_210,&fStack_f0);
            param_1[1] = uStack_a8;
            *param_1 = uStack_b0;
            param_1[3] = uStack_98;
            param_1[2] = uStack_a0;
            param_1[5] = uStack_88;
            param_1[4] = uStack_90;
            param_1[7] = uStack_78;
            param_1[6] = uStack_80;
            if ((*(byte *)(param_1 + 8) & 1) == 0) {
              *(undefined1 *)(param_1 + 8) = 1;
            }
            goto LAB_10a8334d0;
          }
          *(undefined1 *)(param_4 + 0x68) = 0;
        }
        *(undefined8 *)(param_4 + 0x80) = uStack_1c8;
        *(undefined8 *)(param_4 + 0x78) = uStack_1d0;
        *(undefined8 *)(param_4 + 0x90) = uStack_1b8;
        *(undefined8 *)(param_4 + 0x88) = uStack_1c0;
        *(undefined8 *)(param_4 + 0xa0) = uStack_1a8;
        *(undefined8 *)(param_4 + 0x98) = uStack_1b0;
        *(undefined8 *)(param_4 + 0xb0) = uStack_198;
        *(undefined8 *)(param_4 + 0xa8) = uStack_1a0;
        if ((*(byte *)(param_4 + 0xb8) & 1) == 0) {
          *(undefined1 *)(param_4 + 0xb8) = 1;
        }
LAB_10a8334d0:
        *(ulong *)(param_4 + 0xc0) = uVar4;
        return;
      }
      if ((*(byte *)(param_1 + 0xd) != 0) && (*(char *)((long)param_1 + 0x67) < '\0')) {
        __ZdlPv(param_1[10]);
      }
      uVar4 = uVar4 + 1;
      lVar3 = *(long *)(param_4 + 0x38);
      lVar5 = lVar5 + 0x10;
    } while (uVar4 < (ulong)(*(long *)(param_4 + 0x40) - lVar3 >> 4));
  }
  *(undefined1 *)(param_4 + 0x68) = 0;
  *(undefined8 *)(param_4 + 0x70) = 0;
  *(undefined1 *)(param_4 + 0x78) = 0;
  *(undefined1 *)(param_4 + 0xb8) = 0;
  *(undefined8 *)(param_4 + 0xc0) = 0xffffffffffffffff;
  *(undefined1 *)param_1 = 0;
  *(undefined1 *)(param_1 + 8) = 0;
  *(undefined4 *)((long)param_1 + 0x44) = 0xffffffff;
  *(undefined1 *)(param_1 + 9) = 0;
  *(undefined1 *)(param_1 + 10) = 0;
  *(undefined1 *)(param_1 + 0xd) = 0;
  *(undefined4 *)(param_1 + 0xe) = 0;
  return;
}



/* Entry: 10a833528; end: 10a83352f;  */

long FUN_10a833528(long param_1)

{
  return param_1 + 0x10;
}



/* Entry: 10a833530; end: 10a83368f;  */

void FUN_10a833530(long param_1)

{
  undefined8 *puVar1;
  long *plVar2;
  undefined8 *puVar3;
  
  puVar1 = *(undefined8 **)(param_1 + 0x58);
  for (puVar3 = *(undefined8 **)(param_1 + 0x50); puVar3 != puVar1; puVar3 = puVar3 + 2) {
    plVar2 = (long *)*puVar3;
    (**(code **)(*plVar2 + 0x20))();
    (**(code **)(*plVar2 + 0x20))();
  }
  return;
}



/* Entry: 10a833690; end: 10a833d03;  */

float FUN_10a833690(double *param_1,float *param_2,double *param_3,undefined8 *param_4,
                   float *param_5,undefined8 *param_6)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  double *pdVar4;
  float *pfVar5;
  double *pdVar6;
  int iVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float *pfVar11;
  double *pdVar12;
  uint uVar13;
  long lVar14;
  float *pfVar15;
  float *pfVar16;
  undefined4 *puVar17;
  int iVar18;
  ulong uVar19;
  float *pfVar20;
  double *pdVar21;
  float *pfVar22;
  float fVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  float fVar26;
  float fVar27;
  double dVar28;
  float fVar29;
  double dVar30;
  float fVar31;
  double dVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  undefined8 uStack_120;
  ulong uStack_118;
  undefined8 uStack_110;
  ulong uStack_108;
  undefined8 uStack_100;
  float fStack_f8;
  undefined4 uStack_f4;
  float fStack_f0;
  undefined8 uStack_ec;
  undefined4 uStack_e4;
  double dStack_e0;
  double dStack_d8;
  float fStack_d4;
  double dStack_d0;
  undefined8 uStack_c8;
  double dStack_c0;
  float fStack_b8;
  float fStack_b4;
  float fStack_b0;
  float fStack_ac;
  float fStack_a8;
  float fStack_a4;
  undefined1 auStack_a0 [8];
  undefined8 uStack_98;
  float fStack_90;
  float fStack_8c;
  float fStack_88;
  float fStack_84;
  float fStack_80;
  float fStack_7c;
  float fStack_78;
  float fStack_74;
  float fStack_70;
  float fStack_6c;
  float fStack_68;
  float fStack_64;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  dStack_d8 = param_1[1];
  dStack_e0 = *param_1;
  uStack_c8 = param_1[3];
  dStack_d0 = param_1[2];
  fStack_b8 = SUB84(param_1[5],0);
  fStack_b4 = (float)((ulong)param_1[5] >> 0x20);
  dStack_c0 = param_1[4];
  fStack_a8 = SUB84(param_1[7],0);
  fStack_a4 = (float)((ulong)param_1[7] >> 0x20);
  fStack_b0 = SUB84(param_1[6],0);
  fStack_ac = (float)((ulong)param_1[6] >> 0x20);
  fVar23 = ABS(fStack_a4);
  pfVar11 = param_2;
  pdVar12 = param_3;
  if (1.1920929e-07 <= fVar23) {
    lVar14 = 0;
    do {
      fVar23 = fStack_a4;
      iVar18 = 0;
      pdVar6 = &dStack_e0 + lVar14 * 2;
      do {
        pdVar21 = (double *)((ulong)pdVar6 | 4);
        if (((iVar18 != 1) && (pdVar21 = (double *)((ulong)pdVar6 | 8), iVar18 != 2)) &&
           (pdVar21 = pdVar6, iVar18 == 3)) {
          (&fStack_d4)[lVar14 * 4] = (&fStack_d4)[lVar14 * 4] / fVar23;
          break;
        }
        *(float *)pdVar21 = *(float *)pdVar21 / fVar23;
        iVar18 = iVar18 + 1;
      } while (iVar18 != 4);
      fVar36 = fStack_a4;
      fVar27 = fStack_b4;
      lVar14 = lVar14 + 1;
    } while (lVar14 != 4);
    uStack_120 = dStack_e0;
    dVar32 = uStack_120;
    uStack_110 = dStack_d0;
    dVar28 = uStack_110;
    uStack_ec = CONCAT44(fStack_a8,fStack_ac);
    fStack_f0 = fStack_b0;
    fStack_f8 = fStack_b8;
    uStack_100 = dStack_c0;
    dVar30 = uStack_100;
    uStack_100._4_4_ = (float)((ulong)dStack_c0 >> 0x20);
    fVar31 = fStack_b8 - fStack_a8 * 0.0;
    uStack_100._0_4_ = SUB84(dStack_c0,0);
    fVar33 = uStack_100._4_4_ - fStack_ac * 0.0;
    fVar34 = -(fStack_ac * fStack_b8) + fStack_a8 * uStack_100._4_4_;
    fVar35 = (float)uStack_100 - fStack_b0 * 0.0;
    fVar26 = -(fStack_b0 * fStack_b8) + fStack_a8 * (float)uStack_100;
    fVar29 = -(fStack_b0 * uStack_100._4_4_) + fStack_ac * (float)uStack_100;
    uStack_110._4_4_ = (float)((ulong)dStack_d0 >> 0x20);
    uStack_108._0_4_ = SUB84(uStack_c8,0);
    fVar10 = (float)uStack_108;
    fVar23 = (float)uStack_108 * fVar33;
    fVar8 = (float)uStack_108 * fVar35;
    uStack_110._0_4_ = SUB84(dStack_d0,0);
    uStack_118._0_4_ = SUB84(dStack_d8,0);
    fVar9 = (float)uStack_118;
    uStack_118 = (ulong)dStack_d8 & 0xffffffff;
    uStack_108 = (ulong)uStack_c8 & 0xffffffff;
    uStack_f4 = 0;
    uStack_e4 = 0x3f800000;
    uStack_120._0_4_ = SUB84(dStack_e0,0);
    uStack_120._4_4_ = (float)((ulong)dStack_e0 >> 0x20);
    fVar23 = ABS((-((-fVar8 + fVar31 * (float)uStack_110 + fVar26 * 0.0) * uStack_120._4_4_) +
                  (-fVar23 + fVar31 * uStack_110._4_4_ + fVar34 * 0.0) * (float)uStack_120 +
                 (-(uStack_110._4_4_ * fVar35) + fVar33 * (float)uStack_110 + fVar29 * 0.0) * fVar9)
                 - (-(uStack_110._4_4_ * fVar26) + fVar34 * (float)uStack_110 + fVar29 * fVar10) *
                   0.0);
    uStack_120 = dVar32;
    uStack_110 = dVar28;
    uStack_100 = dVar30;
    if (1.1920929e-07 <= fVar23) {
      fVar23 = fStack_d4;
      fVar8 = uStack_c8._4_4_;
      if (((1.1920929e-07 <= ABS(fStack_d4)) || (1.1920929e-07 <= ABS(uStack_c8._4_4_))) ||
         (1.1920929e-07 <= ABS(fStack_b4))) {
        param_1 = (double *)&uStack_120;
        func_0x0001094f5708(auStack_a0);
        uVar24 = CONCAT44(fStack_90 * fVar23 + fStack_8c * fVar8 +
                          fStack_88 * fVar27 + fStack_84 * fVar36,
                          (float)auStack_a0._0_4_ * fVar23 + (float)auStack_a0._4_4_ * fVar8 +
                          (float)uStack_98 * fVar27 + uStack_98._4_4_ * fVar36);
        uVar25 = CONCAT44(fStack_70 * fVar23 + fStack_6c * fVar8 +
                          fStack_68 * fVar27 + fStack_64 * fVar36,
                          fStack_80 * fVar23 + fStack_7c * fVar8 +
                          fStack_78 * fVar27 + fStack_74 * fVar36);
      }
      else {
        uVar25 = 0x3f80000000000000;
        uVar24 = 0;
      }
      param_6[1] = uVar25;
      *param_6 = uVar24;
      lVar14 = 0;
      *param_4 = CONCAT44(fStack_ac,fStack_b0);
      *(float *)(param_4 + 1) = fStack_a8;
      fStack_b0 = 0.0;
      fStack_ac = 0.0;
      fStack_a8 = 0.0;
      fStack_80 = 0.0;
      uStack_98 = 0;
      auStack_a0 = (undefined1  [8])0x0;
      fStack_88 = 0.0;
      fStack_84 = 0.0;
      fStack_90 = 0.0;
      fStack_8c = 0.0;
      puVar17 = (undefined4 *)((ulong)&dStack_e0 | 8);
      do {
        *(undefined8 *)(auStack_a0 + lVar14) = *(undefined8 *)(puVar17 + -2);
        *(undefined4 *)((long)&uStack_98 + lVar14) = *puVar17;
        lVar14 = lVar14 + 0xc;
        puVar17 = puVar17 + 4;
      } while (lVar14 != 0x24);
      fVar23 = SQRT((float)auStack_a0._0_4_ * (float)auStack_a0._0_4_ +
                    (float)auStack_a0._4_4_ * (float)auStack_a0._4_4_ +
                    (float)uStack_98 * (float)uStack_98);
      *param_2 = fVar23;
      auStack_a0._0_4_ = (float)auStack_a0._0_4_ / fVar23;
      fVar27 = (float)auStack_a0._4_4_ / fVar23;
      uStack_98._0_4_ = (float)uStack_98 / fVar23;
      auStack_a0._4_4_ = fVar27;
      fVar23 = (float)auStack_a0._0_4_ * uStack_98._4_4_ + fVar27 * fStack_90 +
               (float)uStack_98 * fStack_8c;
      param_5[2] = fVar23;
      uStack_98._4_4_ = uStack_98._4_4_ - (float)auStack_a0._0_4_ * fVar23;
      fStack_90 = fStack_90 - fVar27 * fVar23;
      fStack_8c = fStack_8c - (float)uStack_98 * fVar23;
      fVar23 = SQRT(fStack_8c * fStack_8c +
                    uStack_98._4_4_ * uStack_98._4_4_ + fStack_90 * fStack_90);
      param_2[1] = fVar23;
      uStack_98._4_4_ = uStack_98._4_4_ / fVar23;
      fStack_90 = fStack_90 / fVar23;
      fStack_8c = fStack_8c / fVar23;
      param_5[2] = param_5[2] / fVar23;
      fVar23 = (float)auStack_a0._0_4_ * fStack_88 + fVar27 * fStack_84 +
               (float)uStack_98 * fStack_80;
      fStack_88 = fStack_88 - (float)auStack_a0._0_4_ * fVar23;
      fStack_84 = fStack_84 - fVar27 * fVar23;
      fStack_80 = fStack_80 - (float)uStack_98 * fVar23;
      fVar36 = fStack_8c * fStack_80 + uStack_98._4_4_ * fStack_88 + fStack_90 * fStack_84;
      *param_5 = fVar36;
      param_5[1] = fVar23;
      fStack_88 = fStack_88 - uStack_98._4_4_ * fVar36;
      fStack_84 = fStack_84 - fStack_90 * fVar36;
      fStack_80 = fStack_80 - fStack_8c * fVar36;
      fVar23 = SQRT(fStack_80 * fStack_80 + fStack_88 * fStack_88 + fStack_84 * fStack_84);
      pfVar15 = param_2 + 2;
      *pfVar15 = fVar23;
      fStack_88 = fStack_88 / fVar23;
      fStack_84 = fStack_84 / fVar23;
      fStack_80 = fStack_80 / fVar23;
      param_5[1] = param_5[1] / fVar23;
      *param_5 = *param_5 / *pfVar15;
      if ((float)uStack_98 * (-(fStack_88 * fStack_90) + fStack_84 * uStack_98._4_4_) +
          fVar27 * (-(fStack_80 * uStack_98._4_4_) + fStack_88 * fStack_8c) +
          (float)auStack_a0._0_4_ * (-(fStack_84 * fStack_8c) + fStack_80 * fStack_90) < 0.0) {
        lVar14 = 0;
        pfVar20 = (float *)((ulong)auStack_a0 | 8);
        do {
          pfVar5 = param_2;
          if ((int)lVar14 == 1) {
            pfVar5 = param_2 + 1;
          }
          pfVar22 = pfVar15;
          if ((int)lVar14 != 2) {
            pfVar22 = pfVar5;
          }
          *pfVar22 = -*pfVar22;
          *(ulong *)(pfVar20 + -2) =
               CONCAT44(-(float)((ulong)*(undefined8 *)(pfVar20 + -2) >> 0x20),
                        -(float)*(undefined8 *)(pfVar20 + -2));
          *pfVar20 = -*pfVar20;
          lVar14 = lVar14 + 1;
          pfVar20 = pfVar20 + 3;
        } while (lVar14 != 3);
      }
      pfVar15 = (float *)((ulong)auStack_a0 | 0xc);
      fVar23 = fStack_80 + fStack_90 + (float)auStack_a0._0_4_;
      if (fVar23 <= 0.0) {
        if (fStack_90 <= (float)auStack_a0._0_4_) {
          pfVar15 = (float *)auStack_a0;
        }
        lVar14 = 4;
        if (fStack_90 <= (float)auStack_a0._0_4_) {
          lVar14 = 0;
        }
        uVar13 = 2;
        if (fStack_80 <= *(float *)((long)pfVar15 + lVar14)) {
          uVar13 = (uint)((float)auStack_a0._0_4_ < fStack_90);
        }
        uVar19 = (ulong)uVar13;
        iVar18 = *(int *)(&UNK_10e4df10c + uVar19 * 4);
        iVar7 = *(int *)(&UNK_10e4df10c + (long)iVar18 * 4);
        pfVar22 = (float *)((long)auStack_a0 + uVar19 * 3 * 4);
        pfVar20 = (float *)((long)&uStack_98 + uVar19 * 0xc);
        pfVar5 = (float *)(auStack_a0 + uVar19 * 0xc + 4);
        pfVar11 = pfVar22;
        if (uVar13 == 1) {
          pfVar11 = pfVar5;
        }
        pfVar2 = pfVar20;
        if (uVar13 != 2) {
          pfVar2 = pfVar11;
        }
        lVar14 = (long)iVar18 * 0xc;
        pdVar21 = (double *)((long)auStack_a0 + (long)iVar18 * 3 * 4);
        pdVar6 = (double *)((long)&uStack_98 + lVar14);
        param_1 = (double *)(auStack_a0 + lVar14 + 4);
        pdVar12 = pdVar21;
        if (iVar18 == 1) {
          pdVar12 = param_1;
        }
        pdVar4 = pdVar6;
        if (iVar18 != 2) {
          pdVar4 = pdVar12;
        }
        lVar14 = (long)iVar7 * 0xc;
        pfVar16 = (float *)((long)auStack_a0 + (long)iVar7 * 3 * 4);
        pfVar15 = (float *)((long)&uStack_98 + lVar14);
        pfVar11 = (float *)(auStack_a0 + lVar14 + 4);
        pfVar3 = pfVar16;
        if (iVar7 == 1) {
          pfVar3 = pfVar11;
        }
        pfVar1 = pfVar15;
        if (iVar7 != 2) {
          pfVar1 = pfVar3;
        }
        fVar23 = SQRT(((*pfVar2 - *(float *)pdVar4) - *pfVar1) + 1.0);
        *(float *)((long)param_3 + uVar19 * 4) = fVar23 * 0.5;
        fVar23 = 0.5 / fVar23;
        pfVar2 = pfVar22;
        if (iVar18 == 1) {
          pfVar2 = pfVar5;
        }
        pfVar3 = pfVar20;
        if (iVar18 != 2) {
          pfVar3 = pfVar2;
        }
        pdVar4 = pdVar21;
        if (uVar13 == 1) {
          pdVar4 = param_1;
        }
        pdVar12 = pdVar6;
        if (uVar13 != 2) {
          pdVar12 = pdVar4;
        }
        *(float *)((long)param_3 + (long)iVar18 * 4) = fVar23 * (*pfVar3 + *(float *)pdVar12);
        if (iVar7 == 1) {
          pfVar22 = pfVar5;
        }
        if (iVar7 != 2) {
          pfVar20 = pfVar22;
        }
        pfVar5 = pfVar16;
        if (uVar13 == 1) {
          pfVar5 = pfVar11;
        }
        pfVar22 = pfVar15;
        if (uVar13 != 2) {
          pfVar22 = pfVar5;
        }
        *(float *)((long)param_3 + (long)iVar7 * 4) = fVar23 * (*pfVar20 + *pfVar22);
        if (iVar7 == 1) {
          pdVar21 = param_1;
        }
        if (iVar7 != 2) {
          pdVar6 = pdVar21;
        }
        fVar27 = *(float *)pdVar6;
        if (iVar18 == 2) {
          lVar14 = 0xc;
        }
        else {
          if (iVar18 == 1) {
            pfVar16 = (float *)(auStack_a0 + lVar14 + 4);
          }
          lVar14 = 0xc;
          pfVar15 = pfVar16;
        }
      }
      else {
        fVar23 = SQRT(fVar23 + 1.0);
        *(float *)((long)param_3 + 0xc) = fVar23 * 0.5;
        fVar23 = 0.5 / fVar23;
        *param_3 = (double)CONCAT44((fStack_88 - *(float *)((ulong)auStack_a0 | 8)) * fVar23,
                                    (fStack_8c - fStack_84) * fVar23);
        lVar14 = 8;
      }
      fVar23 = fVar23 * (fVar27 - *pfVar15);
      *(float *)((long)param_3 + lVar14) = fVar23;
    }
  }
  iVar18 = (int)pdVar12;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return fVar23;
  }
  ___stack_chk_fail();
  dVar32 = -180.0;
  if (-180.0 <= *param_1) {
    dVar32 = *param_1;
  }
  dVar28 = 180.0;
  if (dVar32 <= 180.0) {
    dVar28 = dVar32;
  }
  _sin();
  _log();
  lVar14 = (long)iVar18 << ((ulong)pfVar11 & 0x3f);
  dVar30 = ((dVar28 + 180.0) / 360.0) * (double)lVar14;
  dVar32 = (double)(lVar14 + -1);
  dVar28 = 0.0;
  if (0.0 <= dVar30) {
    dVar28 = dVar30;
  }
  if (dVar28 <= dVar32) {
    dVar32 = dVar28;
  }
  return (float)dVar32;
}



/* Entry: 10a833d04; end: 10a833e03;  */

float FUN_10a833d04(double *param_1,ulong param_2,int param_3)

{
  long lVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  
  dVar4 = -180.0;
  if (-180.0 <= *param_1) {
    dVar4 = *param_1;
  }
  dVar2 = 180.0;
  if (dVar4 <= 180.0) {
    dVar2 = dVar4;
  }
  _sin();
  _log();
  lVar1 = (long)param_3 << (param_2 & 0x3f);
  dVar3 = ((dVar2 + 180.0) / 360.0) * (double)lVar1;
  dVar4 = (double)(lVar1 + -1);
  dVar2 = 0.0;
  if (0.0 <= dVar3) {
    dVar2 = dVar3;
  }
  if (dVar2 <= dVar4) {
    dVar4 = dVar2;
  }
  return (float)dVar4;
}



/* Entry: 10a833e04; end: 10a833ea7;  */

undefined1  [16] FUN_10a833e04(double param_1,double param_2,ulong param_3,int param_4)

{
  long lVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  undefined1 auVar6 [16];
  
  lVar1 = (long)param_4 << (param_3 & 0x3f);
  dVar4 = (double)(lVar1 + -1);
  dVar3 = 0.0;
  if (0.0 <= param_1) {
    dVar3 = param_1;
  }
  dVar2 = dVar4;
  if (dVar3 <= dVar4) {
    dVar2 = dVar3;
  }
  dVar5 = (double)lVar1;
  dVar3 = 0.0;
  if (0.0 <= param_2) {
    dVar3 = param_2;
  }
  if (dVar3 <= dVar4) {
    dVar4 = dVar3;
  }
  dVar4 = (0.5 - dVar4 / dVar5) * -2.0 * 3.141592653589793;
  _exp(dVar4);
  _atan();
  auVar6._8_8_ = 90.0 - (dVar4 * 360.0) / 3.141592653589793;
  auVar6._0_8_ = (dVar2 / dVar5 + -0.5) * 360.0;
  return auVar6;
}



/* Entry: 10a833ea8; end: 10a833fe3;  */

undefined1  [16] FUN_10a833ea8(ulong *param_1)

{
  double dVar1;
  double dVar2;
  double dVar3;
  undefined1 auVar4 [16];
  
  dVar1 = (double)NEON_ucvtf(param_1[1]);
  dVar3 = (double)(ulong)(1L << (*param_1 & 0x3f));
  dVar2 = (double)NEON_ucvtf(param_1[2]);
  dVar2 = (dVar2 / dVar3) * -3.141592653589793 * 2.0 + 3.141592653589793;
  _exp(dVar2);
  _atan();
  auVar4._8_8_ = ((dVar2 + -0.7853981633974483 + dVar2 + -0.7853981633974483) * 180.0) /
                 3.141592653589793;
  auVar4._0_8_ = ((dVar1 / dVar3) * 2.0 + -1.0) * 180.0;
  return auVar4;
}



/* Entry: 10a833fe4; end: 10a83413f;  */

float FUN_10a833fe4(long *param_1,double *param_2)

{
  long lVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  float afStack_a8 [3];
  float fStack_9c;
  float fStack_98;
  undefined8 uStack_90;
  float fStack_8c;
  float fStack_88;
  undefined8 uStack_80;
  float fStack_7c;
  float fStack_78;
  undefined8 uStack_70;
  float fStack_6c;
  ulong uStack_68;
  long lStack_60;
  long lStack_58;
  
  lVar1 = *param_1;
  dVar3 = *param_2;
  dVar4 = (param_2[1] * 3.141592653589793) / 180.0;
  dVar5 = (double)(ulong)(1L << (lVar1 + 10U & 0x3f));
  dVar2 = dVar4;
  _tan();
  _cos();
  dVar2 = dVar2 + 1.0 / dVar4;
  _log();
  lStack_58 = (long)(int)((1.0 - dVar2 / 3.141592653589793) * dVar5 * 0.5);
  uStack_68 = lVar1 + 10U;
  lStack_60 = (long)(((dVar3 + 180.0) * dVar5) / 360.0);
  FUN_10a817f0c(afStack_a8,&uStack_68,param_1);
  return (afStack_a8[0] * 0.0 + fStack_98 * 0.0 + fStack_88 * 0.0 + fStack_78) /
         (fStack_9c * 0.0 + fStack_8c * 0.0 + fStack_7c * 0.0 + fStack_6c);
}



/* Entry: 10a834140; end: 10a834143;  */

undefined8 * FUN_10a834140(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c20e98;
  FUN_10a7274b4(param_1 + 10);
  FUN_10a727d80(param_1 + 8);
  if (*(char *)((long)param_1 + 0x3f) < '\0') {
    __ZdlPv(param_1[5]);
  }
  FUN_10a0772f0(param_1 + 3);
  *param_1 = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + 1);
  return param_1;
}



/* Entry: 10a834144; end: 10a834157;  */

void FUN_10a834144(void)

{
  FUN_10a83be58();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a834158; end: 10a834237;  */

undefined8 * FUN_10a834158(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c20628;
  if (*(char *)((long)param_1 + 0x6f) < '\0') {
    __ZdlPv(param_1[0xb]);
  }
  if (*(char *)((long)param_1 + 0x57) < '\0') {
    __ZdlPv(param_1[8]);
  }
  FUN_10a0772f0(param_1 + 6);
  func_0x00010a725e70(param_1 + 4);
  *param_1 = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + 1);
  return param_1;
}



/* Entry: 10a834238; end: 10a834253;  */

void FUN_10a834238(void)

{
  return;
}


