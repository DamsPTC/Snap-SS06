/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10a6c6334; end: 10a6c640b;  */

undefined8 * FUN_10a6c6334(undefined8 *param_1)

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



/* Entry: 10a6c640c; end: 10a6c65c3;  */

undefined8 * FUN_10a6c640c(undefined8 *param_1,undefined8 *param_2,long *param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  undefined8 *puVar5;
  long lVar6;
  long *plVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long lStack_90;
  long *plStack_88;
  undefined **ppuStack_80;
  long lStack_78;
  long *plStack_70;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  __ZNSt3__115recursive_mutex4lockEv(param_2 + 2);
  lVar6 = *param_3;
  plVar7 = (long *)param_3[1];
  if (plVar7 == (long *)0x0) {
    plStack_70 = (long *)0x0;
  }
  else {
    plVar4 = plVar7 + 1;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar4,0x10);
      if (bVar3) {
        *plVar4 = *plVar4 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar4,0x10);
      if (bVar3) {
        *plVar4 = *plVar4 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
      plStack_70 = plVar7;
    } while (cVar2 != '\0');
  }
  ppuStack_80 = &PTR_FUN_110c10df0;
  plVar4 = (long *)0x48;
  lStack_90 = lVar6;
  plStack_88 = plVar7;
  lStack_78 = lVar6;
  __Znwm();
  *plVar4 = 0;
  plVar4[1] = 0;
  plVar4[2] = (long)&PTR_FUN_110c10df0;
  plVar4[3] = lVar6;
  plVar4[4] = (long)plVar7;
  if (plVar7 != (long *)0x0) {
    plVar1 = plVar7 + 1;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  puVar5 = (undefined8 *)param_2[0xb];
  lVar6 = param_2[0xc];
  *plVar4 = (long)(param_2 + 10);
  plVar4[1] = (long)puVar5;
  *puVar5 = plVar4;
  param_2[0xb] = plVar4;
  param_2[0xc] = lVar6 + 1;
  if (plVar7 != (long *)0x0) {
    plVar4 = plVar7 + 1;
    do {
      lVar6 = *plVar4;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar4,0x10);
      if (bVar3) {
        *plVar4 = lVar6 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar6 == 0) {
      (**(code **)(*plVar7 + 0x10))(plVar7);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
    }
    do {
      lVar6 = *plVar4;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar4,0x10);
      if (bVar3) {
        *plVar4 = lVar6 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar6 == 0) {
      (**(code **)(*plVar7 + 0x10))(plVar7);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
    }
  }
  uVar8 = param_2[0xb];
  puVar5 = param_2 + 2;
  __ZNSt3__115recursive_mutex6unlockEv();
  uVar10 = param_2[1];
  uVar9 = *param_2;
  if (param_2[1] != 0) {
    plVar7 = (long *)(param_2[1] + 0x10);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar3) {
        *plVar7 = *plVar7 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  *param_1 = uVar8;
  param_1[2] = uVar10;
  param_1[1] = uVar9;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_48) {
    ___stack_chk_fail();
    FUN_10a352ff8(&lStack_78);
    FUN_10a352ff8(&lStack_90);
    __ZNSt3__115recursive_mutex6unlockEv(param_2 + 2);
    __Unwind_Resume();
    plVar7 = (long *)puVar5[2];
    if (plVar7 != (long *)0x0) {
      plVar4 = plVar7 + 1;
      do {
        lVar6 = *plVar4;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar4,0x10);
        if (bVar3) {
          *plVar4 = lVar6 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar6 == 0) {
        (**(code **)(*plVar7 + 0x10))(plVar7);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
      }
    }
    return puVar5 + 1;
  }
  return puVar5;
}



/* Entry: 10a6c65c4; end: 10a6c65ff;  */

long FUN_10a6c65c4(long param_1)

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



/* Entry: 10a6c6600; end: 10a6c682b;  */

undefined *** FUN_10a6c6600(undefined ***param_1,long param_2)

{
  undefined ***pppuVar1;
  undefined **ppuVar2;
  char cVar3;
  bool bVar4;
  undefined ***pppuVar5;
  undefined ***pppuVar6;
  undefined8 uVar7;
  undefined **ppuVar8;
  undefined *puVar9;
  undefined ***pppuVar10;
  long lVar11;
  long lStack_138;
  undefined ***pppuStack_130;
  undefined **ppuStack_128;
  ulong uStack_120;
  undefined1 uStack_118;
  undefined4 uStack_114;
  undefined **ppuStack_110;
  long lStack_108;
  undefined ***pppuStack_100;
  undefined **ppuStack_f8;
  undefined **ppuStack_f0;
  undefined ***pppuStack_e8;
  undefined **ppuStack_e0;
  undefined **ppuStack_d8;
  int iStack_d0;
  undefined **ppuStack_c8;
  undefined **ppuStack_c0;
  undefined1 auStack_b8 [56];
  undefined **ppuStack_80;
  undefined4 uStack_78;
  undefined1 auStack_70 [40];
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pppuVar5 = *(undefined ****)(param_2 + 0x20);
  pppuVar6 = pppuVar5;
  pppuVar10 = param_1;
  if (pppuVar5 != (undefined ***)0x0) {
    __ZNSt3__119__shared_weak_count4lockEv();
    pppuVar6 = pppuVar5;
    pppuStack_130 = pppuVar5;
    if (pppuVar5 != (undefined ***)0x0) {
      lStack_138 = *(long *)(param_2 + 0x18);
      if (lStack_138 != 0) {
        lVar11 = *(long *)(param_2 + 0x10);
        ppuStack_f8 = param_1[1];
        pppuStack_100 = (undefined ***)*param_1;
        ppuStack_f0 = param_1[2];
        *param_1 = (undefined **)0x0;
        param_1[1] = (undefined **)0x0;
        ppuStack_e0 = param_1[4];
        pppuStack_e8 = (undefined ***)param_1[3];
        ppuStack_d8 = param_1[5];
        param_1[2] = (undefined **)0x0;
        param_1[3] = (undefined **)0x0;
        param_1[4] = (undefined **)0x0;
        param_1[5] = (undefined **)0x0;
        iStack_d0 = *(int *)(param_1 + 6);
        ppuStack_c8 = param_1[7];
        ppuStack_c0 = param_1[8];
        param_1[7] = (undefined **)0x0;
        pppuVar10 = param_1 + 9;
        (*(code *)(*pppuVar10)[2])(auStack_b8,pppuVar10);
        ppuStack_80 = param_1[0x10];
        uStack_78 = *(undefined4 *)(param_1 + 0x11);
        FUN_10a0424c4(auStack_70,param_1 + 0x12);
        if (iStack_d0 - 200U < 100) {
          pppuVar10 = &ppuStack_128;
          ppuStack_128 = &PTR_DAT_110b19198;
          uStack_120 = 0;
          uStack_114 = 0;
          uStack_118 = 0;
          lStack_108 = (long)(int)ppuStack_80;
          ppuStack_110 = ppuStack_c8;
          pppuVar6 = &ppuStack_128;
          func_0x000107c30348(pppuVar6,&ppuStack_110);
          uVar7 = *(undefined8 *)(lVar11 + 0x18);
          if ((int)pppuVar6 == 0) {
            ppuStack_110 = (undefined **)((ulong)ppuStack_110._1_7_ << 8);
            FUN_10a087a3c(uVar7,&ppuStack_110);
          }
          else {
            ppuStack_110 = (undefined **)CONCAT71(ppuStack_110._1_7_,uStack_118);
            FUN_10a087a3c(uVar7,&ppuStack_110);
          }
          if ((uStack_120 & 1) != 0) {
            func_0x0001053936ac(&uStack_120);
          }
        }
        else {
          ppuStack_128 = (undefined **)((ulong)ppuStack_128 & 0xffffffffffffff00);
          FUN_10a087a3c(*(undefined8 *)(lVar11 + 0x18),&ppuStack_128);
        }
        func_0x000104c4f944(auStack_70);
        pppuVar6 = &ppuStack_c8;
        FUN_10a042634();
        if ((long)ppuStack_d8 < 0) {
          pppuVar6 = pppuStack_e8;
          __ZdlPv();
        }
        if ((long)ppuStack_f0 < 0) {
          pppuVar6 = pppuStack_100;
          __ZdlPv();
        }
      }
      pppuVar1 = pppuVar5 + 1;
      do {
        ppuVar8 = *pppuVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(pppuVar1,0x10);
        if (bVar4) {
          *pppuVar1 = (undefined **)((long)ppuVar8 + -1);
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (ppuVar8 == (undefined **)0x0) {
        (*(code *)(*pppuVar5)[2])(pppuVar5);
        __ZNSt3__119__shared_weak_count14__release_weakEv();
        pppuVar6 = pppuVar5;
      }
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return pppuVar6;
  }
  ___stack_chk_fail();
  if ((uStack_120 & 1) != 0) {
    func_0x0001053936ac(pppuVar10 + 1);
  }
  FUN_10a05bd10(&pppuStack_100);
  func_0x00010a05a86c(&lStack_138);
  __Unwind_Resume();
  ppuVar8 = pppuVar6[3];
  if (ppuVar8 != (undefined **)0x0) {
    __ZNSt3__119__shared_weak_count4lockEv();
    if (ppuVar8 != (undefined **)0x0) {
      if (pppuVar6[2] != (undefined **)0x0) {
        FUN_10a05c0fc(pppuVar6[2],pppuVar6[1]);
      }
      ppuVar2 = ppuVar8 + 1;
      do {
        puVar9 = *ppuVar2;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(ppuVar2,0x10);
        if (bVar4) {
          *ppuVar2 = puVar9 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (puVar9 == (undefined *)0x0) {
        (**(code **)(*ppuVar8 + 0x10))(ppuVar8);
        __ZNSt3__119__shared_weak_count14__release_weakEv(ppuVar8);
      }
    }
    if (pppuVar6[3] != (undefined **)0x0) {
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
  }
  return pppuVar6 + 1;
}



/* Entry: 10a6c682c; end: 10a6c6857;  */

undefined8 * FUN_10a6c682c(long param_1)

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



/* Entry: 10a6c6858; end: 10a6c68d7;  */

undefined8 * FUN_10a6c6858(undefined8 *param_1)

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



/* Entry: 10a6c68d8; end: 10a6c6b8b;  */

/* WARNING: Possible PIC construction at 0x00010a6c6b68: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010a6c6b78: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010a6c6b6c) */
/* WARNING: Removing unreachable block (ram,0x00010a6c6b7c) */

long * FUN_10a6c68d8(undefined8 *param_1,undefined8 *param_2,long *param_3)

{
  long *plVar1;
  long lVar2;
  undefined8 *puVar3;
  long lVar4;
  long *plVar5;
  char cVar6;
  bool bVar7;
  long *plVar8;
  long lVar9;
  undefined8 uVar10;
  long *plVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  long lStack_90;
  long *plStack_88;
  long lStack_80;
  long *plStack_78;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  __ZNSt3__115recursive_mutex4lockEv(param_2 + 2);
  lVar9 = *param_3;
  lVar4 = param_3[1];
  plVar11 = (long *)param_3[2];
  if (plVar11 != (long *)0x0) {
    plVar5 = plVar11 + 1;
    do {
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar7) {
        *plVar5 = *plVar5 + 1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
  }
  lVar2 = param_3[3];
  plVar5 = (long *)param_3[4];
  if (plVar5 != (long *)0x0) {
    plVar8 = plVar5 + 1;
    do {
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar7) {
        *plVar8 = *plVar8 + 1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
  }
  if (plVar11 != (long *)0x0) {
    plVar8 = plVar11 + 1;
    do {
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar7) {
        *plVar8 = *plVar8 + 1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
  }
  if (plVar5 != (long *)0x0) {
    plVar8 = plVar5 + 1;
    do {
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar7) {
        *plVar8 = *plVar8 + 1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
  }
  plVar8 = (long *)0x48;
  lStack_90 = lVar4;
  plStack_88 = plVar11;
  lStack_80 = lVar2;
  plStack_78 = plVar5;
  __Znwm();
  *plVar8 = 0;
  plVar8[1] = 0;
  plVar8[2] = (long)&PTR_FUN_110c10e20;
  plVar8[3] = lVar9;
  plVar8[4] = lVar4;
  plVar8[5] = (long)plVar11;
  if (plVar11 != (long *)0x0) {
    plVar1 = plVar11 + 1;
    do {
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar7) {
        *plVar1 = *plVar1 + 1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
  }
  plVar8[6] = lVar2;
  plVar8[7] = (long)plVar5;
  if (plVar5 != (long *)0x0) {
    plVar1 = plVar5 + 1;
    do {
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar7) {
        *plVar1 = *plVar1 + 1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
  }
  puVar3 = (undefined8 *)param_2[0xb];
  lVar9 = param_2[0xc];
  *plVar8 = (long)(param_2 + 10);
  plVar8[1] = (long)puVar3;
  *puVar3 = plVar8;
  param_2[0xb] = plVar8;
  param_2[0xc] = lVar9 + 1;
  if (plVar5 != (long *)0x0) {
    plVar8 = plVar5 + 1;
    do {
      lVar9 = *plVar8;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar7) {
        *plVar8 = lVar9 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (lVar9 == 0) {
      (**(code **)(*plVar5 + 0x10))(plVar5);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
    }
  }
  plVar8 = plStack_88;
  if (plStack_88 != (long *)0x0) {
    plVar1 = plStack_88 + 1;
    do {
      lVar9 = *plVar1;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar7) {
        *plVar1 = lVar9 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (lVar9 == 0) {
      (**(code **)(*plStack_88 + 0x10))(plStack_88);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar8);
    }
  }
  if (plVar5 != (long *)0x0) {
    plVar8 = plVar5 + 1;
    do {
      lVar9 = *plVar8;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar7) {
        *plVar8 = lVar9 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (lVar9 == 0) {
      (**(code **)(*plVar5 + 0x10))(plVar5);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
    }
  }
  if (plVar11 != (long *)0x0) {
    plVar5 = plVar11 + 1;
    do {
      lVar9 = *plVar5;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar7) {
        *plVar5 = lVar9 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (lVar9 == 0) {
      (**(code **)(*plVar11 + 0x10))(plVar11);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar11);
    }
  }
  uVar10 = param_2[0xb];
  plVar11 = param_2 + 2;
  __ZNSt3__115recursive_mutex6unlockEv();
  uVar13 = param_2[1];
  uVar12 = *param_2;
  if (param_2[1] != 0) {
    plVar5 = (long *)(param_2[1] + 0x10);
    do {
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar7) {
        *plVar5 = *plVar5 + 1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
  }
  *param_1 = uVar10;
  param_1[2] = uVar13;
  param_1[1] = uVar12;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return plVar11;
  }
  ___stack_chk_fail();
  func_0x00010a6c7484(&lStack_80);
  plVar11 = plStack_88;
  if (plStack_88 != (long *)0x0) {
    plVar5 = plStack_88 + 1;
    do {
      lVar9 = *plVar5;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar7) {
        *plVar5 = lVar9 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (lVar9 == 0) {
      (**(code **)(*plStack_88 + 0x10))(plStack_88);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar11);
    }
  }
  return &lStack_90;
}



/* Entry: 10a6c6b8c; end: 10a6c6bb3;  */

long FUN_10a6c6b8c(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  func_0x00010a6c7484(param_1 + 0x20);
  plVar5 = *(long **)(param_1 + 0x18);
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
  return param_1 + 0x10;
}



/* Entry: 10a6c6bb4; end: 10a6c6c0f;  */

void FUN_10a6c6bb4(undefined8 *param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined8 uVar5;
  
  *param_1 = &PTR_FUN_110c10e20;
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



/* Entry: 10a6c6c10; end: 10a6c6ebf;  */

void FUN_10a6c6c10(undefined *****param_1,undefined *******param_2)

{
  undefined **ppuVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  undefined ******ppppppuVar5;
  undefined *******pppppppuVar6;
  undefined ***pppuVar7;
  undefined *******pppppppuVar8;
  undefined *******pppppppuVar9;
  undefined *******pppppppuVar10;
  undefined *******pppppppuVar11;
  undefined *******pppppppuVar12;
  undefined ****ppppuVar13;
  undefined ******ppppppuVar14;
  undefined *****pppppuVar15;
  undefined *******unaff_x21;
  undefined ******unaff_x22;
  undefined *****pppppuVar16;
  undefined8 *puStack_2c0;
  undefined8 *puStack_2b8;
  undefined ******ppppppuStack_2b0;
  undefined *****pppppuStack_2a8;
  undefined1 ***pppuStack_2a0;
  code *pcStack_298;
  undefined *****pppppuStack_290;
  undefined *****pppppuStack_288;
  undefined *****pppppuStack_280;
  undefined *****pppppuStack_278;
  undefined *****pppppuStack_270;
  undefined *****pppppuStack_268;
  undefined ****appppuStack_260 [6];
  undefined *****pppppuStack_230;
  undefined *****pppppuStack_228;
  undefined *****pppppuStack_220;
  undefined ******ppppppuStack_218;
  undefined ******ppppppuStack_210;
  undefined ******ppppppuStack_208;
  undefined1 **ppuStack_200;
  code *pcStack_1f8;
  undefined *****pppppuStack_1f0;
  undefined ******ppppppuStack_1e8;
  undefined *****pppppuStack_1e0;
  undefined ******ppppppuStack_1d8;
  undefined *****pppppuStack_1d0;
  undefined ******ppppppuStack_1c8;
  undefined *****pppppuStack_1c0;
  undefined *****pppppuStack_1b8;
  undefined *****pppppuStack_1b0;
  undefined ******ppppppuStack_1a8;
  long lStack_188;
  undefined *****pppppuStack_180;
  undefined ******ppppppuStack_178;
  undefined ****ppppuStack_170;
  undefined ******ppppppuStack_168;
  undefined1 *puStack_160;
  code *pcStack_158;
  undefined *****pppppuStack_148;
  undefined ******ppppppuStack_140;
  undefined *****pppppuStack_138;
  undefined ****ppppuStack_130;
  char cStack_121;
  undefined **ppuStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined **ppuStack_108;
  undefined ******ppppppuStack_100;
  undefined ***pppuStack_f8;
  undefined ***pppuStack_f0;
  undefined ******ppppppuStack_e8;
  undefined ***pppuStack_e0;
  undefined ***pppuStack_d8;
  int iStack_d0;
  undefined *****pppppuStack_c8;
  undefined ***pppuStack_c0;
  undefined1 auStack_b8 [56];
  undefined ***pppuStack_80;
  undefined4 uStack_78;
  undefined1 auStack_70 [40];
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pppppppuVar6 = (undefined *******)param_2[4];
  pppppppuVar9 = pppppppuVar6;
  pppppppuVar10 = param_2;
  pppppuVar16 = param_1;
  if ((pppppppuVar6 != (undefined *******)0x0) &&
     (__ZNSt3__119__shared_weak_count4lockEv(), pppppppuVar9 = pppppppuVar6, unaff_x21 = param_2,
     ppppppuStack_140 = (undefined ******)pppppppuVar6, pppppppuVar6 != (undefined *******)0x0)) {
    pppppuStack_148 = (undefined *****)param_2[3];
    if ((undefined ******)pppppuStack_148 != (undefined ******)0x0) {
      unaff_x22 = param_2[2];
      pppuStack_f8 = (undefined ***)param_1[1];
      ppppppuStack_100 = (undefined ******)*param_1;
      pppuStack_f0 = (undefined ***)param_1[2];
      *param_1 = (undefined ****)0x0;
      param_1[1] = (undefined ****)0x0;
      param_2 = &ppppppuStack_100;
      pppuStack_e0 = (undefined ***)param_1[4];
      ppppppuStack_e8 = (undefined ******)param_1[3];
      pppuStack_d8 = (undefined ***)param_1[5];
      param_1[2] = (undefined ****)0x0;
      param_1[3] = (undefined ****)0x0;
      param_1[4] = (undefined ****)0x0;
      param_1[5] = (undefined ****)0x0;
      iStack_d0 = *(int *)(param_1 + 6);
      pppppuStack_c8 = (undefined *****)param_1[7];
      pppuStack_c0 = (undefined ***)param_1[8];
      param_1[7] = (undefined ****)0x0;
      pppppuVar16 = param_1 + 9;
      (*(code *)(*pppppuVar16)[2])(auStack_b8,pppppuVar16);
      pppuStack_80 = (undefined ***)param_1[0x10];
      uStack_78 = *(undefined4 *)(param_1 + 0x11);
      FUN_10a0424c4(auStack_70,param_1 + 0x12);
      if (iStack_d0 - 200U < 100) {
        pppppuVar16 = unaff_x22[3];
        ppuStack_120 = &PTR_DAT_110b19378;
        uStack_118 = 0;
        uStack_110 = 0;
        ppuStack_108 = (undefined **)0x0;
        ppppuStack_130 = (undefined ****)(long)(int)pppuStack_80;
        pppppuStack_138 = pppppuStack_c8;
        pppuVar7 = &ppuStack_120;
        func_0x000107c30348(pppuVar7,&pppppuStack_138);
        if ((int)pppuVar7 == 0) {
          pppppuVar16 = unaff_x22[6];
          func_0x000107c2b054(&pppppuStack_138,&UNK_10f66dad0);
          pppppppuVar10 = (undefined *******)&pppppuStack_138;
          FUN_10a6c7134(pppppuVar16);
          if (cStack_121 < '\0') {
            __ZdlPv(pppppuStack_138);
          }
        }
        else {
          pppppuVar15 = unaff_x22[4];
          ppuVar1 = &PTR_PTR_1132e20f8;
          if (ppuStack_108 != (undefined **)0x0) {
            ppuVar1 = ppuStack_108;
          }
          FUN_10a6b35d4(&pppppuStack_138,*pppppuVar16,ppuVar1);
          pppppppuVar10 = (undefined *******)&pppppuStack_138;
          FUN_10a6c6ec0(pppppuVar15);
          pppppuVar16 = (undefined *****)ppppuStack_130;
          if ((undefined *****)ppppuStack_130 != (undefined *****)0x0) {
            pppppuVar15 = (undefined *****)(ppppuStack_130 + 1);
            do {
              ppppuVar13 = *pppppuVar15;
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(pppppuVar15,0x10);
              if (bVar3) {
                *pppppuVar15 = (undefined ****)((long)ppppuVar13 + -1);
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
            if (ppppuVar13 == (undefined ****)0x0) {
              (*(code *)(*ppppuStack_130)[2])(ppppuStack_130);
              __ZNSt3__119__shared_weak_count14__release_weakEv(pppppuVar16);
            }
          }
        }
        func_0x0001098cec98(&ppuStack_120);
      }
      else {
        pppppppuVar10 = &ppppppuStack_e8;
        FUN_10a6c7134(unaff_x22[6]);
      }
      func_0x000104c4f944(auStack_70);
      pppppppuVar9 = (undefined *******)&pppppuStack_c8;
      FUN_10a042634();
      if ((long)pppuStack_d8 < 0) {
        pppppppuVar9 = (undefined *******)ppppppuStack_e8;
        __ZdlPv();
      }
      if ((long)pppuStack_f0 < 0) {
        pppppppuVar9 = (undefined *******)ppppppuStack_100;
        __ZdlPv();
      }
    }
    pppppppuVar12 = pppppppuVar6 + 1;
    do {
      ppppppuVar14 = *pppppppuVar12;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(pppppppuVar12,0x10);
      if (bVar3) {
        *pppppppuVar12 = (undefined ******)((long)ppppppuVar14 + -1);
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    unaff_x21 = param_2;
    if (ppppppuVar14 == (undefined ******)0x0) {
      (*(code *)(*pppppppuVar6)[2])(pppppppuVar6);
      __ZNSt3__119__shared_weak_count14__release_weakEv();
      pppppppuVar9 = pppppppuVar6;
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  if (cStack_121 < '\0') {
    __ZdlPv(pppppuStack_138);
  }
  func_0x0001098cec98(&ppuStack_120);
  FUN_10a05bd10(&ppppppuStack_100);
  func_0x00010a05a86c(&pppppuStack_148);
  pppppppuVar6 = pppppppuVar9;
  __Unwind_Resume();
  pcStack_158 = FUN_10a6c6ec0;
  lStack_188 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pppppuStack_180 = (undefined *****)unaff_x22;
  ppppppuStack_178 = (undefined ******)unaff_x21;
  ppppuStack_170 = (undefined ****)pppppuVar16;
  ppppppuStack_168 = (undefined ******)pppppppuVar9;
  puStack_160 = &stack0xfffffffffffffff0;
  if ((pppppppuVar6 == (undefined *******)0x0) || (*(char *)(pppppppuVar6 + 8) != '\x02')) {
    pppppppuVar9 = pppppppuVar6;
    pppppppuVar12 = pppppppuVar10;
    if ((pppppppuVar6 == (undefined *******)0x0) || (*(char *)(pppppppuVar6 + 8) != '\x01'))
    goto LAB_10a6c70ac;
    ppppppuVar14 = *pppppppuVar6;
    ppppppuStack_1c8 = pppppppuVar10[1];
    pppppuStack_1d0 = (undefined *****)*pppppppuVar10;
    if (pppppppuVar10[1] != (undefined ******)0x0) {
      ppppppuVar5 = pppppppuVar10[1] + 1;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(ppppppuVar5,0x10);
        if (bVar3) {
          *ppppppuVar5 = (undefined *****)((long)*ppppppuVar5 + 1);
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    pppppppuVar9 = (undefined *******)&pppppuStack_1d0;
    pppppppuVar12 = pppppppuVar6;
    (*(code *)ppppppuVar14)();
    if ((undefined *******)ppppppuStack_1c8 == (undefined *******)0x0) goto LAB_10a6c70ac;
    pppppppuVar10 = (undefined *******)(ppppppuStack_1c8 + 1);
    do {
      ppppppuVar14 = *pppppppuVar10;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(pppppppuVar10,0x10);
      if (bVar3) {
        *pppppppuVar10 = (undefined ******)((long)ppppppuVar14 + -1);
        cVar2 = ExclusiveMonitorsStatus();
      }
      pppppppuVar8 = (undefined *******)ppppppuStack_1c8;
    } while (cVar2 != '\0');
  }
  else {
    pppppppuVar8 = pppppppuVar6;
    pppppppuVar11 = pppppppuVar10;
    FUN_10a688b40();
    unaff_x21 = pppppppuVar8;
    if (pppppppuVar8 != (undefined *******)0x0) {
      *pppppppuVar8 =
           (undefined ******)
           CONCAT44((int)((ulong)*pppppppuVar8 >> 0x20) + 1,(int)*pppppppuVar8 + 1);
      pppppppuVar9 = (undefined *******)*pppppppuVar6;
      FUN_10a6c715c();
      iVar4 = *(int *)((long)pppppppuVar8 + 4) + -1;
      *(int *)((long)pppppppuVar8 + 4) = iVar4;
      pppppppuVar12 = pppppppuVar10;
      if (iVar4 == 0) {
        *(undefined4 *)pppppppuVar8 = 0;
      }
      goto LAB_10a6c70ac;
    }
    pppppppuVar9 = (undefined *******)0x0;
    pppppppuVar12 = (undefined *******)0x0;
    if (pppppppuVar11 == (undefined *******)0x0) goto LAB_10a6c70ac;
    pppppuStack_1b8 = (undefined *****)pppppppuVar6[1];
    pppppuStack_1c0 = (undefined *****)*pppppppuVar6;
    if (pppppppuVar6[1] != (undefined ******)0x0) {
      ppppppuVar14 = pppppppuVar6[1] + 1;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(ppppppuVar14,0x10);
        if (bVar3) {
          *ppppppuVar14 = (undefined *****)((long)*ppppppuVar14 + 1);
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    pppppuStack_1e0 = (undefined *****)*pppppppuVar10;
    pppppppuVar10 = (undefined *******)pppppppuVar10[1];
    if (pppppppuVar10 != (undefined *******)0x0) {
      pppppppuVar9 = pppppppuVar10 + 1;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(pppppppuVar9,0x10);
        if (bVar3) {
          *pppppppuVar9 = (undefined ******)((long)*pppppppuVar9 + 1);
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    pppppuStack_1d0 = (undefined *****)FUN_10a6c7360;
    ppppppuStack_1c8 = (undefined ******)&PTR_FUN_110c10e38;
    pppppuStack_1f0 = (undefined *****)0x0;
    ppppppuStack_1e8 = (undefined ******)0x0;
    if (pppppppuVar10 != (undefined *******)0x0) {
      pppppppuVar9 = pppppppuVar10 + 1;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(pppppppuVar9,0x10);
        if (bVar3) {
          *pppppppuVar9 = (undefined ******)((long)*pppppppuVar9 + 1);
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    unaff_x21 = (undefined *******)&pppppuStack_1d0;
    pppppppuVar12 = (undefined *******)&pppppuStack_1d0;
    ppppppuStack_1d8 = (undefined ******)pppppppuVar10;
    pppppuStack_1b0 = pppppuStack_1e0;
    ppppppuStack_1a8 = (undefined ******)pppppppuVar10;
    FUN_10a4634ec();
    pppppppuVar9 = &ppppppuStack_1c8;
    (*(code *)*ppppppuStack_1c8)();
    if (pppppppuVar10 != (undefined *******)0x0) {
      pppppppuVar6 = pppppppuVar10 + 1;
      do {
        ppppppuVar14 = *pppppppuVar6;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(pppppppuVar6,0x10);
        if (bVar3) {
          *pppppppuVar6 = (undefined ******)((long)ppppppuVar14 + -1);
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (ppppppuVar14 == (undefined ******)0x0) {
        (*(code *)(*pppppppuVar10)[2])(pppppppuVar10);
        __ZNSt3__119__shared_weak_count14__release_weakEv();
        pppppppuVar9 = pppppppuVar10;
      }
    }
    pppppppuVar6 = (undefined *******)&pppppuStack_1f0;
    if ((undefined *******)ppppppuStack_1e8 == (undefined *******)0x0) goto LAB_10a6c70ac;
    pppppppuVar10 = (undefined *******)(ppppppuStack_1e8 + 1);
    do {
      ppppppuVar14 = *pppppppuVar10;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(pppppppuVar10,0x10);
      if (bVar3) {
        *pppppppuVar10 = (undefined ******)((long)ppppppuVar14 + -1);
        cVar2 = ExclusiveMonitorsStatus();
      }
      pppppppuVar8 = (undefined *******)ppppppuStack_1e8;
      pppppppuVar6 = (undefined *******)&pppppuStack_1f0;
    } while (cVar2 != '\0');
  }
  if (ppppppuVar14 == (undefined ******)0x0) {
    (*(code *)(*pppppppuVar8)[2])(pppppppuVar8);
    __ZNSt3__119__shared_weak_count14__release_weakEv();
    pppppppuVar9 = pppppppuVar8;
  }
LAB_10a6c70ac:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_188) {
    return;
  }
  ___stack_chk_fail();
  (*(code *)*ppppppuStack_1c8)(unaff_x21 + 1);
  FUN_10a6c5638(pppppppuVar6 + 2);
  func_0x00010a004dac(&pppppuStack_1f0);
  pppppppuVar10 = pppppppuVar9;
  __Unwind_Resume();
  ppppppuStack_210 = (undefined ******)pppppppuVar6;
  ppppppuStack_208 = (undefined ******)pppppppuVar9;
  ppuStack_200 = &puStack_160;
  if ((pppppppuVar10 != (undefined *******)0x0) && (*(char *)(pppppppuVar10 + 8) == '\x02')) {
    pcStack_1f8 = FUN_10a6c7134;
    pppppuStack_228 = *(undefined ******)PTR____stack_chk_guard_11034bdc0;
    pppppppuVar9 = pppppppuVar10;
    pppppppuVar6 = pppppppuVar12;
    pppppuStack_220 = (undefined *****)unaff_x22;
    ppppppuStack_218 = (undefined ******)unaff_x21;
    FUN_10a688b40();
    if (pppppppuVar9 == (undefined *******)0x0) {
      pppppppuVar8 = (undefined *******)0x0;
      pppppuStack_2a8 = (undefined *****)(undefined ******)0x0;
      if (pppppppuVar6 != (undefined *******)0x0) {
        pppppuStack_288 = (undefined *****)pppppppuVar10[1];
        pppppuStack_290 = (undefined *****)*pppppppuVar10;
        if (pppppppuVar10[1] != (undefined ******)0x0) {
          ppppppuVar14 = pppppppuVar10[1] + 1;
          do {
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(ppppppuVar14,0x10);
            if (bVar3) {
              *ppppppuVar14 = (undefined *****)((long)*ppppppuVar14 + 1);
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
        }
        if (*(char *)((long)pppppppuVar12 + 0x17) < '\0') {
          func_0x000107c3192c(&pppppuStack_280,*pppppppuVar12,pppppppuVar12[1]);
        }
        else {
          pppppuStack_278 = (undefined *****)pppppppuVar12[1];
          pppppuStack_280 = (undefined *****)*pppppppuVar12;
          pppppuStack_270 = (undefined *****)pppppppuVar12[2];
        }
        pppppuStack_268 = (undefined *****)FUN_10a05aec4;
        pppppppuVar12 = (undefined *******)&pppppuStack_268;
        FUN_10a05af2c(appppuStack_260,&PTR_FUN_110b9f388,&pppppuStack_290);
        pppppppuVar8 = (undefined *******)&pppppuStack_268;
        FUN_10a4634ec(pppppppuVar6,pppppppuVar8);
        ppppppuVar14 = (undefined ******)appppuStack_260;
        (*(code *)*appppuStack_260[0])();
        if ((long)pppppuStack_270 < 0) {
          ppppppuVar14 = (undefined ******)pppppuStack_280;
          __ZdlPv();
        }
        ppppppuVar5 = (undefined ******)pppppuStack_288;
        pppppuStack_2a8 = (undefined *****)ppppppuVar14;
        if ((undefined ******)pppppuStack_288 != (undefined ******)0x0) {
          ppppppuVar14 = (undefined ******)(pppppuStack_288 + 1);
          do {
            pppppuVar16 = *ppppppuVar14;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(ppppppuVar14,0x10);
            if (bVar3) {
              *ppppppuVar14 = (undefined *****)((long)pppppuVar16 + -1);
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (pppppuVar16 == (undefined *****)0x0) {
            (*(code *)(*pppppuStack_288)[2])(pppppuStack_288);
            __ZNSt3__119__shared_weak_count14__release_weakEv();
            pppppuStack_2a8 = (undefined *****)ppppppuVar5;
          }
        }
      }
    }
    else {
      *pppppppuVar9 =
           (undefined ******)
           CONCAT44((int)((ulong)*pppppppuVar9 >> 0x20) + 1,(int)*pppppppuVar9 + 1);
      ppppppuVar14 = *pppppppuVar10;
      pppppppuVar8 = pppppppuVar12;
      FUN_10a05aca4(ppppppuVar14,pppppppuVar12);
      iVar4 = *(int *)((long)pppppppuVar9 + 4) + -1;
      *(int *)((long)pppppppuVar9 + 4) = iVar4;
      pppppuStack_2a8 = (undefined *****)ppppppuVar14;
      if (iVar4 == 0) {
        *(undefined4 *)pppppppuVar9 = 0;
      }
    }
    if ((undefined *****)*(long *)PTR____stack_chk_guard_11034bdc0 != pppppuStack_228) {
      ___stack_chk_fail();
      func_0x00010a004dac(&pppppuStack_290);
      ppppppuVar14 = (undefined ******)pppppuStack_2a8;
      __Unwind_Resume();
      pcStack_298 = FUN_10a05aca4;
      ppppppuStack_2b0 = (undefined ******)pppppppuVar12;
      pppuStack_2a0 = &ppuStack_200;
      func_0x000109884c0c(&puStack_2c0,ppppppuVar14 + 1,*ppppppuVar14);
      func_0x000109884820(&puStack_2b8,&puStack_2c0,*ppppppuVar14);
      if (puStack_2c0 != (undefined8 *)0x0) {
        (**(code **)*puStack_2c0)();
      }
      (*(code *)(**ppppppuVar14)[6])(&puStack_2c0);
      FUN_10a05adc0(*ppppppuVar14,&puStack_2c0,&puStack_2b8,pppppppuVar8);
      if (puStack_2c0 != (undefined8 *)0x0) {
        (**(code **)*puStack_2c0)();
      }
      if (puStack_2b8 != (undefined8 *)0x0) {
        (**(code **)*puStack_2b8)();
      }
      return;
    }
    return;
  }
  if ((pppppppuVar10 != (undefined *******)0x0) && (*(char *)(pppppppuVar10 + 8) == '\x01')) {
    pcStack_1f8 = FUN_10a6c7134;
    ppppppuVar14 = *pppppppuVar10;
    if (*(char *)((long)pppppppuVar12 + 0x17) < '\0') {
      func_0x000107c3192c(&pppppuStack_230,*pppppppuVar12,pppppppuVar12[1]);
    }
    else {
      pppppuStack_228 = (undefined *****)pppppppuVar12[1];
      pppppuStack_230 = (undefined *****)*pppppppuVar12;
      pppppuStack_220 = (undefined *****)pppppppuVar12[2];
    }
    (*(code *)ppppppuVar14)(&pppppuStack_230,pppppppuVar10);
    if ((long)pppppuStack_220 < 0) {
      __ZdlPv(pppppuStack_230);
    }
    return;
  }
  return;
}



/* Entry: 10a6c6ec0; end: 10a6c7133;  */

void FUN_10a6c6ec0(undefined *******param_1,undefined *******param_2)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  undefined ******ppppppuVar4;
  undefined ******ppppppuVar5;
  undefined *******pppppppuVar6;
  undefined *******pppppppuVar7;
  undefined *******pppppppuVar8;
  undefined *******pppppppuVar9;
  undefined *******pppppppuVar10;
  undefined *****pppppuVar11;
  undefined *******unaff_x21;
  undefined8 *puStack_170;
  undefined8 *puStack_168;
  undefined ******ppppppuStack_160;
  undefined *****pppppuStack_158;
  undefined1 **ppuStack_150;
  code *pcStack_148;
  undefined *****pppppuStack_140;
  undefined *****pppppuStack_138;
  undefined *****pppppuStack_130;
  undefined *****pppppuStack_128;
  undefined *****pppppuStack_120;
  undefined *****pppppuStack_118;
  undefined ****appppuStack_110 [6];
  undefined *****pppppuStack_e0;
  undefined *****pppppuStack_d8;
  undefined ******in_stack_ffffffffffffff30;
  undefined1 *puStack_b0;
  code *pcStack_a8;
  undefined *****pppppuStack_a0;
  undefined ******ppppppuStack_98;
  undefined *****pppppuStack_90;
  undefined ******ppppppuStack_88;
  undefined *****pppppuStack_80;
  undefined ******ppppppuStack_78;
  undefined *****pppppuStack_70;
  undefined *****pppppuStack_68;
  undefined *****pppppuStack_60;
  undefined ******ppppppuStack_58;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if ((param_1 == (undefined *******)0x0) || (*(char *)(param_1 + 8) != '\x02')) {
    pppppppuVar6 = param_1;
    pppppppuVar10 = param_2;
    if ((param_1 == (undefined *******)0x0) || (*(char *)(param_1 + 8) != '\x01'))
    goto LAB_10a6c70ac;
    ppppppuVar4 = *param_1;
    ppppppuStack_78 = param_2[1];
    pppppuStack_80 = (undefined *****)*param_2;
    if (param_2[1] != (undefined ******)0x0) {
      ppppppuVar5 = param_2[1] + 1;
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(ppppppuVar5,0x10);
        if (bVar2) {
          *ppppppuVar5 = (undefined *****)((long)*ppppppuVar5 + 1);
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    pppppppuVar6 = (undefined *******)&pppppuStack_80;
    pppppppuVar10 = param_1;
    (*(code *)ppppppuVar4)();
    if ((undefined *******)ppppppuStack_78 == (undefined *******)0x0) goto LAB_10a6c70ac;
    pppppppuVar7 = (undefined *******)(ppppppuStack_78 + 1);
    do {
      ppppppuVar4 = *pppppppuVar7;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(pppppppuVar7,0x10);
      if (bVar2) {
        *pppppppuVar7 = (undefined ******)((long)ppppppuVar4 + -1);
        cVar1 = ExclusiveMonitorsStatus();
      }
      pppppppuVar8 = (undefined *******)ppppppuStack_78;
    } while (cVar1 != '\0');
  }
  else {
    unaff_x21 = param_1;
    pppppppuVar7 = param_2;
    FUN_10a688b40();
    if (unaff_x21 != (undefined *******)0x0) {
      *unaff_x21 = (undefined ******)
                   CONCAT44((int)((ulong)*unaff_x21 >> 0x20) + 1,(int)*unaff_x21 + 1);
      pppppppuVar6 = (undefined *******)*param_1;
      FUN_10a6c715c();
      iVar3 = *(int *)((long)unaff_x21 + 4) + -1;
      *(int *)((long)unaff_x21 + 4) = iVar3;
      pppppppuVar10 = param_2;
      if (iVar3 == 0) {
        *(undefined4 *)unaff_x21 = 0;
      }
      goto LAB_10a6c70ac;
    }
    pppppppuVar6 = (undefined *******)0x0;
    pppppppuVar10 = (undefined *******)0x0;
    if (pppppppuVar7 == (undefined *******)0x0) goto LAB_10a6c70ac;
    pppppuStack_68 = (undefined *****)param_1[1];
    pppppuStack_70 = (undefined *****)*param_1;
    if (param_1[1] != (undefined ******)0x0) {
      ppppppuVar4 = param_1[1] + 1;
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(ppppppuVar4,0x10);
        if (bVar2) {
          *ppppppuVar4 = (undefined *****)((long)*ppppppuVar4 + 1);
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    pppppuStack_90 = (undefined *****)*param_2;
    pppppppuVar7 = (undefined *******)param_2[1];
    if (pppppppuVar7 != (undefined *******)0x0) {
      pppppppuVar6 = pppppppuVar7 + 1;
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(pppppppuVar6,0x10);
        if (bVar2) {
          *pppppppuVar6 = (undefined ******)((long)*pppppppuVar6 + 1);
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    pppppuStack_80 = (undefined *****)FUN_10a6c7360;
    ppppppuStack_78 = (undefined ******)&PTR_FUN_110c10e38;
    pppppuStack_a0 = (undefined *****)0x0;
    ppppppuStack_98 = (undefined ******)0x0;
    if (pppppppuVar7 != (undefined *******)0x0) {
      pppppppuVar6 = pppppppuVar7 + 1;
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(pppppppuVar6,0x10);
        if (bVar2) {
          *pppppppuVar6 = (undefined ******)((long)*pppppppuVar6 + 1);
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    unaff_x21 = (undefined *******)&pppppuStack_80;
    pppppppuVar10 = (undefined *******)&pppppuStack_80;
    ppppppuStack_88 = (undefined ******)pppppppuVar7;
    pppppuStack_60 = pppppuStack_90;
    ppppppuStack_58 = (undefined ******)pppppppuVar7;
    FUN_10a4634ec();
    pppppppuVar6 = &ppppppuStack_78;
    (*(code *)*ppppppuStack_78)();
    if (pppppppuVar7 != (undefined *******)0x0) {
      pppppppuVar8 = pppppppuVar7 + 1;
      do {
        ppppppuVar4 = *pppppppuVar8;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(pppppppuVar8,0x10);
        if (bVar2) {
          *pppppppuVar8 = (undefined ******)((long)ppppppuVar4 + -1);
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (ppppppuVar4 == (undefined ******)0x0) {
        (*(code *)(*pppppppuVar7)[2])(pppppppuVar7);
        __ZNSt3__119__shared_weak_count14__release_weakEv();
        pppppppuVar6 = pppppppuVar7;
      }
    }
    param_1 = (undefined *******)&pppppuStack_a0;
    if ((undefined *******)ppppppuStack_98 == (undefined *******)0x0) goto LAB_10a6c70ac;
    pppppppuVar7 = (undefined *******)(ppppppuStack_98 + 1);
    do {
      ppppppuVar4 = *pppppppuVar7;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(pppppppuVar7,0x10);
      if (bVar2) {
        *pppppppuVar7 = (undefined ******)((long)ppppppuVar4 + -1);
        cVar1 = ExclusiveMonitorsStatus();
      }
      pppppppuVar8 = (undefined *******)ppppppuStack_98;
      param_1 = (undefined *******)&pppppuStack_a0;
    } while (cVar1 != '\0');
  }
  if (ppppppuVar4 == (undefined ******)0x0) {
    (*(code *)(*pppppppuVar8)[2])(pppppppuVar8);
    __ZNSt3__119__shared_weak_count14__release_weakEv();
    pppppppuVar6 = pppppppuVar8;
  }
LAB_10a6c70ac:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return;
  }
  ___stack_chk_fail();
  (*(code *)*ppppppuStack_78)(unaff_x21 + 1);
  FUN_10a6c5638(param_1 + 2);
  func_0x00010a004dac(&pppppuStack_a0);
  __Unwind_Resume();
  puStack_b0 = &stack0xfffffffffffffff0;
  if ((pppppppuVar6 != (undefined *******)0x0) && (*(char *)(pppppppuVar6 + 8) == '\x02')) {
    pcStack_a8 = FUN_10a6c7134;
    pppppuStack_d8 = *(undefined ******)PTR____stack_chk_guard_11034bdc0;
    pppppppuVar7 = pppppppuVar6;
    pppppppuVar8 = pppppppuVar10;
    FUN_10a688b40();
    if (pppppppuVar7 == (undefined *******)0x0) {
      pppppppuVar9 = (undefined *******)0x0;
      pppppuStack_158 = (undefined *****)(undefined ******)0x0;
      if (pppppppuVar8 != (undefined *******)0x0) {
        pppppuStack_138 = (undefined *****)pppppppuVar6[1];
        pppppuStack_140 = (undefined *****)*pppppppuVar6;
        if (pppppppuVar6[1] != (undefined ******)0x0) {
          ppppppuVar4 = pppppppuVar6[1] + 1;
          do {
            cVar1 = '\x01';
            bVar2 = (bool)ExclusiveMonitorPass(ppppppuVar4,0x10);
            if (bVar2) {
              *ppppppuVar4 = (undefined *****)((long)*ppppppuVar4 + 1);
              cVar1 = ExclusiveMonitorsStatus();
            }
          } while (cVar1 != '\0');
        }
        if (*(char *)((long)pppppppuVar10 + 0x17) < '\0') {
          func_0x000107c3192c(&pppppuStack_130,*pppppppuVar10,pppppppuVar10[1]);
        }
        else {
          pppppuStack_128 = (undefined *****)pppppppuVar10[1];
          pppppuStack_130 = (undefined *****)*pppppppuVar10;
          pppppuStack_120 = (undefined *****)pppppppuVar10[2];
        }
        pppppuStack_118 = (undefined *****)FUN_10a05aec4;
        pppppppuVar10 = (undefined *******)&pppppuStack_118;
        FUN_10a05af2c(appppuStack_110,&PTR_FUN_110b9f388,&pppppuStack_140);
        pppppppuVar9 = (undefined *******)&pppppuStack_118;
        FUN_10a4634ec(pppppppuVar8,pppppppuVar9);
        ppppppuVar4 = (undefined ******)appppuStack_110;
        (*(code *)*appppuStack_110[0])();
        if ((long)pppppuStack_120 < 0) {
          ppppppuVar4 = (undefined ******)pppppuStack_130;
          __ZdlPv();
        }
        ppppppuVar5 = (undefined ******)pppppuStack_138;
        pppppuStack_158 = (undefined *****)ppppppuVar4;
        if ((undefined ******)pppppuStack_138 != (undefined ******)0x0) {
          ppppppuVar4 = (undefined ******)(pppppuStack_138 + 1);
          do {
            pppppuVar11 = *ppppppuVar4;
            cVar1 = '\x01';
            bVar2 = (bool)ExclusiveMonitorPass(ppppppuVar4,0x10);
            if (bVar2) {
              *ppppppuVar4 = (undefined *****)((long)pppppuVar11 + -1);
              cVar1 = ExclusiveMonitorsStatus();
            }
          } while (cVar1 != '\0');
          if (pppppuVar11 == (undefined *****)0x0) {
            (*(code *)(*pppppuStack_138)[2])(pppppuStack_138);
            __ZNSt3__119__shared_weak_count14__release_weakEv();
            pppppuStack_158 = (undefined *****)ppppppuVar5;
          }
        }
      }
    }
    else {
      *pppppppuVar7 =
           (undefined ******)
           CONCAT44((int)((ulong)*pppppppuVar7 >> 0x20) + 1,(int)*pppppppuVar7 + 1);
      ppppppuVar4 = *pppppppuVar6;
      pppppppuVar9 = pppppppuVar10;
      FUN_10a05aca4(ppppppuVar4,pppppppuVar10);
      iVar3 = *(int *)((long)pppppppuVar7 + 4) + -1;
      *(int *)((long)pppppppuVar7 + 4) = iVar3;
      pppppuStack_158 = (undefined *****)ppppppuVar4;
      if (iVar3 == 0) {
        *(undefined4 *)pppppppuVar7 = 0;
      }
    }
    if ((undefined *****)*(long *)PTR____stack_chk_guard_11034bdc0 != pppppuStack_d8) {
      ___stack_chk_fail();
      func_0x00010a004dac(&pppppuStack_140);
      ppppppuVar4 = (undefined ******)pppppuStack_158;
      __Unwind_Resume();
      pcStack_148 = FUN_10a05aca4;
      ppppppuStack_160 = (undefined ******)pppppppuVar10;
      ppuStack_150 = &puStack_b0;
      func_0x000109884c0c(&puStack_170,ppppppuVar4 + 1,*ppppppuVar4);
      func_0x000109884820(&puStack_168,&puStack_170,*ppppppuVar4);
      if (puStack_170 != (undefined8 *)0x0) {
        (**(code **)*puStack_170)();
      }
      (*(code *)(**ppppppuVar4)[6])(&puStack_170);
      FUN_10a05adc0(*ppppppuVar4,&puStack_170,&puStack_168,pppppppuVar9);
      if (puStack_170 != (undefined8 *)0x0) {
        (**(code **)*puStack_170)();
      }
      if (puStack_168 != (undefined8 *)0x0) {
        (**(code **)*puStack_168)();
      }
      return;
    }
    return;
  }
  if ((pppppppuVar6 != (undefined *******)0x0) && (*(char *)(pppppppuVar6 + 8) == '\x01')) {
    pcStack_a8 = FUN_10a6c7134;
    ppppppuVar4 = *pppppppuVar6;
    if (*(char *)((long)pppppppuVar10 + 0x17) < '\0') {
      func_0x000107c3192c(&pppppuStack_e0,*pppppppuVar10,pppppppuVar10[1]);
    }
    else {
      pppppuStack_d8 = (undefined *****)pppppppuVar10[1];
      pppppuStack_e0 = (undefined *****)*pppppppuVar10;
      in_stack_ffffffffffffff30 = pppppppuVar10[2];
    }
    (*(code *)ppppppuVar4)(&pppppuStack_e0,pppppppuVar6);
    if ((long)in_stack_ffffffffffffff30 < 0) {
      __ZdlPv(pppppuStack_e0);
    }
    return;
  }
  return;
}



/* Entry: 10a6c7134; end: 10a6c715b;  */

void FUN_10a6c7134(long *param_1,code **param_2)

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
  code *pcVar11;
  undefined8 *puStack_d0;
  undefined8 *puStack_c8;
  code **ppcStack_c0;
  undefined8 **ppuStack_b8;
  undefined1 *puStack_b0;
  code *pcStack_a8;
  long lStack_a0;
  undefined8 **ppuStack_98;
  undefined8 **ppuStack_90;
  code *pcStack_88;
  code *pcStack_80;
  code *pcStack_78;
  undefined8 *apuStack_70 [6];
  code *pcStack_40;
  code *pcStack_38;
  code *in_stack_ffffffffffffffd0;
  
  if ((param_1 == (long *)0x0) || ((char)param_1[8] != '\x02')) {
    if ((param_1 != (long *)0x0) && ((char)param_1[8] == '\x01')) {
      pcVar11 = (code *)*param_1;
      if (*(char *)((long)param_2 + 0x17) < '\0') {
        func_0x000107c3192c(&pcStack_40,*param_2,param_2[1]);
      }
      else {
        pcStack_38 = param_2[1];
        pcStack_40 = *param_2;
        in_stack_ffffffffffffffd0 = param_2[2];
      }
      (*pcVar11)(&pcStack_40,param_1);
      if ((long)in_stack_ffffffffffffffd0 < 0) {
        __ZdlPv(pcStack_40);
      }
      return;
    }
    return;
  }
  pcStack_38 = *(code **)PTR____stack_chk_guard_11034bdc0;
  plVar5 = param_1;
  ppcVar8 = param_2;
  FUN_10a688b40();
  if (plVar5 == (long *)0x0) {
    ppcVar9 = (code **)0x0;
    ppuVar6 = (undefined8 **)0x0;
    if (ppcVar8 != (code **)0x0) {
      ppuStack_98 = (undefined8 **)param_1[1];
      lStack_a0 = *param_1;
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
      if (*(char *)((long)param_2 + 0x17) < '\0') {
        func_0x000107c3192c(&ppuStack_90,*param_2,param_2[1]);
      }
      else {
        pcStack_88 = param_2[1];
        ppuStack_90 = (undefined8 **)*param_2;
        pcStack_80 = param_2[2];
      }
      pcStack_78 = FUN_10a05aec4;
      param_2 = &pcStack_78;
      FUN_10a05af2c(apuStack_70,&PTR_FUN_110b9f388,&lStack_a0);
      ppcVar9 = &pcStack_78;
      FUN_10a4634ec(ppcVar8,ppcVar9);
      ppuVar6 = apuStack_70;
      (*(code *)*apuStack_70[0])();
      if ((long)pcStack_80 < 0) {
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
    ppuVar6 = (undefined8 **)*param_1;
    ppcVar9 = param_2;
    FUN_10a05aca4(ppuVar6,param_2);
    iVar4 = *(int *)((long)plVar5 + 4) + -1;
    *(int *)((long)plVar5 + 4) = iVar4;
    if (iVar4 == 0) {
      *(undefined4 *)plVar5 = 0;
    }
  }
  if ((code *)*(long *)PTR____stack_chk_guard_11034bdc0 == pcStack_38) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010a004dac(&lStack_a0);
  ppuVar7 = ppuVar6;
  __Unwind_Resume();
  pcStack_a8 = FUN_10a05aca4;
  ppcStack_c0 = param_2;
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



/* Entry: 10a6c715c; end: 10a6c735f;  */

void FUN_10a6c715c(undefined8 *param_1,undefined8 *param_2)

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
  ppuStack_40 = &PTR_DAT_110c10640;
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



/* Entry: 10a6c7360; end: 10a6c736f;  */

void FUN_10a6c7360(long param_1)

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
  ppuStack_40 = &PTR_DAT_110c10640;
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



/* Entry: 10a6c7370; end: 10a6c7397;  */

long FUN_10a6c7370(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  FUN_10a6c5638(param_1 + 0x18);
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



/* Entry: 10a6c7398; end: 10a6c7403;  */

void FUN_10a6c7398(undefined8 *param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined8 uVar5;
  
  *param_1 = &PTR_FUN_110c10e38;
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



/* Entry: 10a6c7404; end: 10a6c7533;  */

undefined8 * FUN_10a6c7404(undefined8 *param_1)

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



/* Entry: 10a6c7534; end: 10a6c76e3;  */

/* WARNING: Possible PIC construction at 0x00010a6c76c8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010a6c76cc) */

long * FUN_10a6c7534(undefined8 *param_1,undefined8 *param_2,long param_3,long *param_4)

{
  long *plVar1;
  undefined8 *puVar2;
  char cVar3;
  bool bVar4;
  long *plVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long lStack_78;
  long *plStack_70;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  __ZNSt3__115recursive_mutex4lockEv(param_2 + 2);
  if (param_4 != (long *)0x0) {
    plVar5 = param_4 + 1;
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
    } while (cVar3 != '\0');
  }
  plVar5 = (long *)0x48;
  lStack_78 = param_3;
  plStack_70 = param_4;
  __Znwm();
  *plVar5 = 0;
  plVar5[1] = 0;
  plVar5[2] = (long)&PTR_FUN_110c10e68;
  plVar5[3] = param_3;
  plVar5[4] = (long)param_4;
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
  puVar2 = (undefined8 *)param_2[0xb];
  lVar6 = param_2[0xc];
  *plVar5 = (long)(param_2 + 10);
  plVar5[1] = (long)puVar2;
  *puVar2 = plVar5;
  param_2[0xb] = plVar5;
  param_2[0xc] = lVar6 + 1;
  if (param_4 != (long *)0x0) {
    plVar5 = param_4 + 1;
    do {
      lVar6 = *plVar5;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar4) {
        *plVar5 = lVar6 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar6 == 0) {
      (**(code **)(*param_4 + 0x10))(param_4);
      __ZNSt3__119__shared_weak_count14__release_weakEv(param_4);
    }
    do {
      lVar6 = *plVar5;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar4) {
        *plVar5 = lVar6 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar6 == 0) {
      (**(code **)(*param_4 + 0x10))(param_4);
      __ZNSt3__119__shared_weak_count14__release_weakEv(param_4);
    }
  }
  uVar7 = param_2[0xb];
  plVar5 = param_2 + 2;
  __ZNSt3__115recursive_mutex6unlockEv();
  uVar9 = param_2[1];
  uVar8 = *param_2;
  if (param_2[1] != 0) {
    plVar1 = (long *)(param_2[1] + 0x10);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = *plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  *param_1 = uVar7;
  param_1[2] = uVar9;
  param_1[1] = uVar8;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return plVar5;
  }
  ___stack_chk_fail();
  plVar5 = plStack_70;
  if (plStack_70 != (long *)0x0) {
    plVar1 = plStack_70 + 1;
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
      (**(code **)(*plStack_70 + 0x10))(plStack_70);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
    }
  }
  return &lStack_78;
}



/* Entry: 10a6c76e4; end: 10a6c771f;  */

long FUN_10a6c76e4(long param_1)

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



/* Entry: 10a6c7720; end: 10a6c7947;  */

void FUN_10a6c7720(undefined *****param_1,undefined ******param_2)

{
  char cVar1;
  bool bVar2;
  uint uVar3;
  undefined ******ppppppuVar4;
  undefined ******ppppppuVar5;
  undefined ******ppppppuVar6;
  undefined ******ppppppuVar7;
  undefined ******ppppppuVar8;
  undefined *****pppppuVar9;
  undefined *****pppppuVar10;
  undefined ******unaff_x21;
  undefined *****unaff_x22;
  undefined8 *puStack_260;
  undefined8 *puStack_258;
  int aiStack_250 [2];
  undefined8 *puStack_248;
  int aiStack_240 [2];
  undefined8 *puStack_238;
  undefined8 **ppuStack_230;
  undefined ****ppppuStack_228;
  undefined1 *puStack_220;
  int **ppiStack_218;
  int *piStack_210;
  undefined8 uStack_208;
  undefined ****ppppuStack_200;
  undefined *****pppppuStack_1f8;
  undefined *****pppppuStack_1f0;
  undefined *****pppppuStack_1e8;
  undefined1 **ppuStack_1e0;
  code *pcStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  uint uStack_1c0;
  undefined ****ppppuStack_1b8;
  undefined ****ppppuStack_1b0;
  undefined ****ppppuStack_1a8;
  undefined ****ppppuStack_1a0;
  uint uStack_198;
  long lStack_178;
  undefined ****ppppuStack_170;
  undefined *****pppppuStack_168;
  undefined ****ppppuStack_160;
  undefined *****pppppuStack_158;
  undefined1 *puStack_150;
  code *pcStack_148;
  undefined ****ppppuStack_138;
  undefined *****pppppuStack_130;
  undefined ****ppppuStack_128;
  ulong uStack_120;
  undefined8 uStack_118;
  undefined ****ppppuStack_110;
  long lStack_108;
  undefined *****pppppuStack_100;
  undefined ***pppuStack_f8;
  undefined ***pppuStack_f0;
  undefined *****pppppuStack_e8;
  undefined ***pppuStack_e0;
  undefined ***pppuStack_d8;
  int iStack_d0;
  undefined ****ppppuStack_c8;
  undefined ***pppuStack_c0;
  undefined1 auStack_b8 [56];
  undefined ***pppuStack_80;
  undefined4 uStack_78;
  undefined1 auStack_70 [40];
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppppppuVar4 = (undefined ******)param_2[4];
  ppppppuVar6 = ppppppuVar4;
  ppppppuVar7 = param_2;
  pppppuVar10 = param_1;
  if (ppppppuVar4 != (undefined ******)0x0) {
    __ZNSt3__119__shared_weak_count4lockEv();
    ppppppuVar6 = ppppppuVar4;
    unaff_x21 = param_2;
    pppppuStack_130 = (undefined *****)ppppppuVar4;
    if (ppppppuVar4 != (undefined ******)0x0) {
      ppppuStack_138 = (undefined ****)param_2[3];
      if ((undefined *****)ppppuStack_138 != (undefined *****)0x0) {
        unaff_x22 = param_2[2];
        pppuStack_f8 = (undefined ***)param_1[1];
        pppppuStack_100 = (undefined *****)*param_1;
        pppuStack_f0 = (undefined ***)param_1[2];
        *param_1 = (undefined ****)0x0;
        param_1[1] = (undefined ****)0x0;
        pppuStack_e0 = (undefined ***)param_1[4];
        pppppuStack_e8 = (undefined *****)param_1[3];
        pppuStack_d8 = (undefined ***)param_1[5];
        param_1[2] = (undefined ****)0x0;
        param_1[3] = (undefined ****)0x0;
        param_1[4] = (undefined ****)0x0;
        param_1[5] = (undefined ****)0x0;
        iStack_d0 = *(int *)(param_1 + 6);
        param_2 = &pppppuStack_100;
        ppppuStack_c8 = param_1[7];
        pppuStack_c0 = (undefined ***)param_1[8];
        param_1[7] = (undefined ****)0x0;
        pppppuVar10 = param_1 + 9;
        (*(code *)(*pppppuVar10)[2])(auStack_b8,pppppuVar10);
        pppuStack_80 = (undefined ***)param_1[0x10];
        uStack_78 = *(undefined4 *)(param_1 + 0x11);
        FUN_10a0424c4(auStack_70,param_1 + 0x12);
        if (iStack_d0 - 200U < 100) {
          pppppuVar10 = &ppppuStack_128;
          uStack_118 = 0;
          uStack_120 = 0;
          ppppuStack_128 = (undefined ****)&PTR_DAT_110b19288;
          lStack_108 = (long)(int)pppuStack_80;
          ppppuStack_110 = ppppuStack_c8;
          pppppuVar9 = &ppppuStack_128;
          func_0x000107c30348(pppppuVar9,&ppppuStack_110);
          if (((ulong)pppppuVar9 & 1) == 0) {
            if ((uStack_120 & 1) != 0) {
              func_0x0001053936ac(&uStack_120);
            }
            goto LAB_10a6c786c;
          }
          ppppuStack_110 = (undefined ****)CONCAT44(ppppuStack_110._4_4_,(undefined4)uStack_118);
          ppppppuVar7 = (undefined ******)&ppppuStack_110;
          FUN_10a6c7948(unaff_x22[3]);
          if ((uStack_120 & 1) != 0) {
            func_0x0001053936ac(&uStack_120);
          }
        }
        else {
LAB_10a6c786c:
          ppppuStack_128 = (undefined ****)((ulong)ppppuStack_128 & 0xffffffff00000000);
          ppppppuVar7 = (undefined ******)&ppppuStack_128;
          FUN_10a6c7948(unaff_x22[3]);
        }
        func_0x000104c4f944(auStack_70);
        ppppppuVar6 = (undefined ******)&ppppuStack_c8;
        FUN_10a042634();
        if ((long)pppuStack_d8 < 0) {
          ppppppuVar6 = (undefined ******)pppppuStack_e8;
          __ZdlPv();
        }
        if ((long)pppuStack_f0 < 0) {
          ppppppuVar6 = (undefined ******)pppppuStack_100;
          __ZdlPv();
        }
      }
      ppppppuVar5 = ppppppuVar4 + 1;
      do {
        pppppuVar9 = *ppppppuVar5;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(ppppppuVar5,0x10);
        if (bVar2) {
          *ppppppuVar5 = (undefined *****)((long)pppppuVar9 + -1);
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      unaff_x21 = param_2;
      if (pppppuVar9 == (undefined *****)0x0) {
        (*(code *)(*ppppppuVar4)[2])(ppppppuVar4);
        __ZNSt3__119__shared_weak_count14__release_weakEv();
        ppppppuVar6 = ppppppuVar4;
      }
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  if ((uStack_120 & 1) != 0) {
    func_0x0001053936ac(pppppuVar10 + 1);
  }
  FUN_10a05bd10(&pppppuStack_100);
  func_0x00010a05a86c(&ppppuStack_138);
  ppppppuVar4 = ppppppuVar6;
  __Unwind_Resume();
  pcStack_148 = FUN_10a6c7948;
  lStack_178 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppppuStack_170 = (undefined ****)unaff_x22;
  pppppuStack_168 = (undefined *****)unaff_x21;
  ppppuStack_160 = (undefined ****)pppppuVar10;
  pppppuStack_158 = (undefined *****)ppppppuVar6;
  puStack_150 = &stack0xfffffffffffffff0;
  if ((ppppppuVar4 == (undefined ******)0x0) || (*(char *)(ppppppuVar4 + 8) != '\x02')) {
    pppppuStack_1e8 = (undefined *****)ppppppuVar4;
    ppppppuVar6 = ppppppuVar7;
    if ((ppppppuVar4 != (undefined ******)0x0) && (*(char *)(ppppppuVar4 + 8) == '\x01')) {
      pppppuStack_1e8 = (undefined *****)(ulong)*(uint *)ppppppuVar7;
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_178) {
                    /* WARNING: Could not recover jumptable at 0x00010a6c7a08. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)*ppppppuVar4)(pppppuStack_1e8,ppppppuVar4);
        return;
      }
      goto LAB_10a6c7aa4;
    }
  }
  else {
    ppppppuVar5 = ppppppuVar4;
    ppppppuVar8 = ppppppuVar7;
    FUN_10a688b40();
    unaff_x21 = ppppppuVar5;
    if (ppppppuVar5 == (undefined ******)0x0) {
      pppppuStack_1e8 = (undefined *****)(undefined ******)0x0;
      ppppppuVar6 = (undefined ******)0x0;
      if (ppppppuVar8 != (undefined ******)0x0) {
        ppppuStack_1a0 = (undefined ****)ppppppuVar4[1];
        ppppuStack_1a8 = (undefined ****)*ppppppuVar4;
        if (ppppppuVar4[1] != (undefined *****)0x0) {
          pppppuVar10 = ppppppuVar4[1] + 1;
          do {
            cVar1 = '\x01';
            bVar2 = (bool)ExclusiveMonitorPass(pppppuVar10,0x10);
            if (bVar2) {
              *pppppuVar10 = (undefined ****)((long)*pppppuVar10 + 1);
              cVar1 = ExclusiveMonitorsStatus();
            }
          } while (cVar1 != '\0');
        }
        uStack_1c0 = *(uint *)ppppppuVar7;
        ppppppuVar4 = (undefined ******)&ppppuStack_1b8;
        ppppuStack_1b8 = (undefined ****)FUN_10a6c7c7c;
        ppppuStack_1b0 = (undefined ****)&PTR_DAT_110c10e80;
        uStack_1d0 = 0;
        uStack_1c8 = 0;
        ppppppuVar6 = (undefined ******)&ppppuStack_1b8;
        uStack_198 = uStack_1c0;
        FUN_10a4634ec();
        ppppppuVar7 = (undefined ******)&ppppuStack_1b0;
        (*(code *)*ppppuStack_1b0)();
        pppppuStack_1e8 = (undefined *****)ppppppuVar7;
      }
    }
    else {
      *ppppppuVar5 = (undefined *****)
                     CONCAT44((int)((ulong)*ppppppuVar5 >> 0x20) + 1,(int)*ppppppuVar5 + 1);
      ppppppuVar6 = (undefined ******)*ppppppuVar4;
      FUN_10a6c7ae8();
      uVar3 = *(uint *)((long)ppppppuVar5 + 4) - 1;
      *(uint *)((long)ppppppuVar5 + 4) = uVar3;
      pppppuStack_1e8 = (undefined *****)ppppppuVar6;
      ppppppuVar6 = ppppppuVar7;
      if (uVar3 == 0) {
        *(uint *)ppppppuVar5 = 0;
      }
    }
  }
  ppppppuVar7 = ppppppuVar6;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_178) {
    return;
  }
LAB_10a6c7aa4:
  ___stack_chk_fail();
  (*(code *)*ppppuStack_1b0)(ppppppuVar4 + 1);
  func_0x00010a004dac(&uStack_1d0);
  ppppppuVar6 = (undefined ******)pppppuStack_1e8;
  __Unwind_Resume();
  pcStack_1d8 = FUN_10a6c7ae8;
  ppppuStack_200 = (undefined ****)unaff_x22;
  pppppuStack_1f8 = (undefined *****)unaff_x21;
  pppppuStack_1f0 = (undefined *****)ppppppuVar4;
  ppuStack_1e0 = &puStack_150;
  func_0x000109884c0c(&ppuStack_230,ppppppuVar6 + 1,*ppppppuVar6);
  func_0x000109884820(&puStack_258,&ppuStack_230,*ppppppuVar6);
  if (ppuStack_230 != (undefined8 **)0x0) {
    (*(code *)**ppuStack_230)();
  }
  (*(code *)(**ppppppuVar6)[6])(&puStack_260);
  pppppuVar10 = *ppppppuVar6;
  puStack_238 = (undefined8 *)NEON_ucvtf((ulong)*(uint *)ppppppuVar7);
  aiStack_240[0] = 3;
  piStack_210 = aiStack_240;
  uStack_208 = 1;
  (*(code *)(*pppppuVar10)[0xb])(pppppuVar10);
  ppuStack_230 = &puStack_258;
  ppiStack_218 = &piStack_210;
  ppppuStack_228 = (undefined ****)pppppuVar10;
  puStack_220 = (undefined1 *)&puStack_260;
  func_0x0001098960c0(aiStack_250);
  if ((3 < aiStack_250[0]) && (puStack_248 != (undefined8 *)0x0)) {
    (**(code **)*puStack_248)();
  }
  if ((3 < aiStack_240[0]) && (puStack_238 != (undefined8 *)0x0)) {
    (**(code **)*puStack_238)();
  }
  if (puStack_260 != (undefined8 *)0x0) {
    (**(code **)*puStack_260)();
  }
  if (puStack_258 != (undefined8 *)0x0) {
    (**(code **)*puStack_258)();
  }
  return;
}



/* Entry: 10a6c7948; end: 10a6c7ae7;  */

void FUN_10a6c7948(undefined ***param_1,undefined ***param_2)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  undefined ***pppuVar4;
  undefined ***pppuVar5;
  undefined ***pppuVar6;
  undefined ***pppuVar7;
  undefined **ppuVar8;
  undefined8 *puStack_120;
  undefined8 *puStack_118;
  int aiStack_110 [2];
  undefined8 *puStack_108;
  int aiStack_100 [2];
  undefined8 *puStack_f8;
  undefined8 **ppuStack_f0;
  undefined **ppuStack_e8;
  undefined1 *puStack_e0;
  int **ppiStack_d8;
  int *piStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_90;
  undefined8 uStack_88;
  uint uStack_80;
  undefined **ppuStack_78;
  undefined **ppuStack_70;
  undefined **ppuStack_68;
  undefined **ppuStack_60;
  uint uStack_58;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if ((param_1 == (undefined ***)0x0) || (*(char *)(param_1 + 8) != '\x02')) {
    pppuVar5 = param_1;
    pppuVar7 = param_2;
    if ((param_1 != (undefined ***)0x0) && (*(char *)(param_1 + 8) == '\x01')) {
      pppuVar5 = (undefined ***)(ulong)*(uint *)param_2;
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
                    /* WARNING: Could not recover jumptable at 0x00010a6c7a08. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)*param_1)(pppuVar5,param_1);
        return;
      }
      goto LAB_10a6c7aa4;
    }
  }
  else {
    pppuVar4 = param_1;
    pppuVar6 = param_2;
    FUN_10a688b40();
    if (pppuVar4 == (undefined ***)0x0) {
      pppuVar5 = (undefined ***)0x0;
      pppuVar7 = (undefined ***)0x0;
      if (pppuVar6 != (undefined ***)0x0) {
        ppuStack_60 = param_1[1];
        ppuStack_68 = *param_1;
        if (param_1[1] != (undefined **)0x0) {
          ppuVar8 = param_1[1] + 1;
          do {
            cVar1 = '\x01';
            bVar2 = (bool)ExclusiveMonitorPass(ppuVar8,0x10);
            if (bVar2) {
              *ppuVar8 = *ppuVar8 + 1;
              cVar1 = ExclusiveMonitorsStatus();
            }
          } while (cVar1 != '\0');
        }
        uStack_80 = *(uint *)param_2;
        param_1 = &ppuStack_78;
        ppuStack_78 = (undefined **)FUN_10a6c7c7c;
        ppuStack_70 = &PTR_DAT_110c10e80;
        uStack_90 = 0;
        uStack_88 = 0;
        pppuVar7 = &ppuStack_78;
        uStack_58 = uStack_80;
        FUN_10a4634ec();
        pppuVar5 = &ppuStack_70;
        (*(code *)*ppuStack_70)();
      }
    }
    else {
      *pppuVar4 = (undefined **)CONCAT44((int)((ulong)*pppuVar4 >> 0x20) + 1,(int)*pppuVar4 + 1);
      pppuVar5 = (undefined ***)*param_1;
      FUN_10a6c7ae8();
      iVar3 = *(int *)((long)pppuVar4 + 4) + -1;
      *(int *)((long)pppuVar4 + 4) = iVar3;
      pppuVar7 = param_2;
      if (iVar3 == 0) {
        *(undefined4 *)pppuVar4 = 0;
      }
    }
  }
  param_2 = pppuVar7;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return;
  }
LAB_10a6c7aa4:
  ___stack_chk_fail();
  (*(code *)*ppuStack_70)(param_1 + 1);
  func_0x00010a004dac(&uStack_90);
  __Unwind_Resume();
  func_0x000109884c0c(&ppuStack_f0,pppuVar5 + 1,*pppuVar5);
  func_0x000109884820(&puStack_118,&ppuStack_f0,*pppuVar5);
  if (ppuStack_f0 != (undefined8 **)0x0) {
    (*(code *)**ppuStack_f0)();
  }
  (**(code **)(**pppuVar5 + 0x30))(&puStack_120);
  ppuVar8 = *pppuVar5;
  puStack_f8 = (undefined8 *)NEON_ucvtf((ulong)*(uint *)param_2);
  aiStack_100[0] = 3;
  piStack_d0 = aiStack_100;
  uStack_c8 = 1;
  (**(code **)(*ppuVar8 + 0x58))(ppuVar8);
  ppuStack_f0 = &puStack_118;
  ppiStack_d8 = &piStack_d0;
  ppuStack_e8 = ppuVar8;
  puStack_e0 = (undefined1 *)&puStack_120;
  func_0x0001098960c0(aiStack_110);
  if ((3 < aiStack_110[0]) && (puStack_108 != (undefined8 *)0x0)) {
    (**(code **)*puStack_108)();
  }
  if ((3 < aiStack_100[0]) && (puStack_f8 != (undefined8 *)0x0)) {
    (**(code **)*puStack_f8)();
  }
  if (puStack_120 != (undefined8 *)0x0) {
    (**(code **)*puStack_120)();
  }
  if (puStack_118 != (undefined8 *)0x0) {
    (**(code **)*puStack_118)();
  }
  return;
}



/* Entry: 10a6c7ae8; end: 10a6c7c7b;  */

void FUN_10a6c7ae8(undefined8 *param_1,uint *param_2)

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
  puStack_68 = (undefined8 *)NEON_ucvtf((ulong)*param_2);
  aiStack_70[0] = 3;
  piStack_40 = aiStack_70;
  uStack_38 = 1;
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



/* Entry: 10a6c7c7c; end: 10a6c7ce3;  */

void FUN_10a6c7c7c(long param_1)

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
  puStack_68 = (undefined8 *)NEON_ucvtf((ulong)*(uint *)(param_1 + 0x20));
  aiStack_70[0] = 3;
  piStack_40 = aiStack_70;
  uStack_38 = 1;
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



/* Entry: 10a6c7ce4; end: 10a6c7dbb;  */

undefined8 * FUN_10a6c7ce4(undefined8 *param_1)

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



/* Entry: 10a6c7dbc; end: 10a6c806f;  */

/* WARNING: Possible PIC construction at 0x00010a6c804c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010a6c805c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010a6c8050) */
/* WARNING: Removing unreachable block (ram,0x00010a6c8060) */

long * FUN_10a6c7dbc(undefined8 *param_1,undefined8 *param_2,long *param_3)

{
  long *plVar1;
  long lVar2;
  undefined8 *puVar3;
  long lVar4;
  long *plVar5;
  char cVar6;
  bool bVar7;
  long *plVar8;
  long lVar9;
  undefined8 uVar10;
  long *plVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  long lStack_90;
  long *plStack_88;
  long lStack_80;
  long *plStack_78;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  __ZNSt3__115recursive_mutex4lockEv(param_2 + 2);
  lVar9 = *param_3;
  lVar4 = param_3[1];
  plVar11 = (long *)param_3[2];
  if (plVar11 != (long *)0x0) {
    plVar5 = plVar11 + 1;
    do {
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar7) {
        *plVar5 = *plVar5 + 1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
  }
  lVar2 = param_3[3];
  plVar5 = (long *)param_3[4];
  if (plVar5 != (long *)0x0) {
    plVar8 = plVar5 + 1;
    do {
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar7) {
        *plVar8 = *plVar8 + 1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
  }
  if (plVar11 != (long *)0x0) {
    plVar8 = plVar11 + 1;
    do {
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar7) {
        *plVar8 = *plVar8 + 1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
  }
  if (plVar5 != (long *)0x0) {
    plVar8 = plVar5 + 1;
    do {
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar7) {
        *plVar8 = *plVar8 + 1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
  }
  plVar8 = (long *)0x48;
  lStack_90 = lVar4;
  plStack_88 = plVar11;
  lStack_80 = lVar2;
  plStack_78 = plVar5;
  __Znwm();
  *plVar8 = 0;
  plVar8[1] = 0;
  plVar8[2] = (long)&PTR_FUN_110c10eb0;
  plVar8[3] = lVar9;
  plVar8[4] = lVar4;
  plVar8[5] = (long)plVar11;
  if (plVar11 != (long *)0x0) {
    plVar1 = plVar11 + 1;
    do {
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar7) {
        *plVar1 = *plVar1 + 1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
  }
  plVar8[6] = lVar2;
  plVar8[7] = (long)plVar5;
  if (plVar5 != (long *)0x0) {
    plVar1 = plVar5 + 1;
    do {
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar7) {
        *plVar1 = *plVar1 + 1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
  }
  puVar3 = (undefined8 *)param_2[0xb];
  lVar9 = param_2[0xc];
  *plVar8 = (long)(param_2 + 10);
  plVar8[1] = (long)puVar3;
  *puVar3 = plVar8;
  param_2[0xb] = plVar8;
  param_2[0xc] = lVar9 + 1;
  if (plVar5 != (long *)0x0) {
    plVar8 = plVar5 + 1;
    do {
      lVar9 = *plVar8;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar7) {
        *plVar8 = lVar9 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (lVar9 == 0) {
      (**(code **)(*plVar5 + 0x10))(plVar5);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
    }
  }
  plVar8 = plStack_88;
  if (plStack_88 != (long *)0x0) {
    plVar1 = plStack_88 + 1;
    do {
      lVar9 = *plVar1;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar7) {
        *plVar1 = lVar9 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (lVar9 == 0) {
      (**(code **)(*plStack_88 + 0x10))(plStack_88);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar8);
    }
  }
  if (plVar5 != (long *)0x0) {
    plVar8 = plVar5 + 1;
    do {
      lVar9 = *plVar8;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar7) {
        *plVar8 = lVar9 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (lVar9 == 0) {
      (**(code **)(*plVar5 + 0x10))(plVar5);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
    }
  }
  if (plVar11 != (long *)0x0) {
    plVar5 = plVar11 + 1;
    do {
      lVar9 = *plVar5;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar7) {
        *plVar5 = lVar9 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (lVar9 == 0) {
      (**(code **)(*plVar11 + 0x10))(plVar11);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar11);
    }
  }
  uVar10 = param_2[0xb];
  plVar11 = param_2 + 2;
  __ZNSt3__115recursive_mutex6unlockEv();
  uVar13 = param_2[1];
  uVar12 = *param_2;
  if (param_2[1] != 0) {
    plVar5 = (long *)(param_2[1] + 0x10);
    do {
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar7) {
        *plVar5 = *plVar5 + 1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
  }
  *param_1 = uVar10;
  param_1[2] = uVar13;
  param_1[1] = uVar12;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return plVar11;
  }
  ___stack_chk_fail();
  func_0x00010a6c7484(&lStack_80);
  plVar11 = plStack_88;
  if (plStack_88 != (long *)0x0) {
    plVar5 = plStack_88 + 1;
    do {
      lVar9 = *plVar5;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar7) {
        *plVar5 = lVar9 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (lVar9 == 0) {
      (**(code **)(*plStack_88 + 0x10))(plStack_88);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar11);
    }
  }
  return &lStack_90;
}



/* Entry: 10a6c8070; end: 10a6c8097;  */

long FUN_10a6c8070(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  func_0x00010a6c7484(param_1 + 0x20);
  plVar5 = *(long **)(param_1 + 0x18);
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
  return param_1 + 0x10;
}



/* Entry: 10a6c8098; end: 10a6c80f3;  */

void FUN_10a6c8098(undefined8 *param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined8 uVar5;
  
  *param_1 = &PTR_FUN_110c10eb0;
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



/* Entry: 10a6c80f4; end: 10a6c83a3;  */

long * FUN_10a6c80f4(long *param_1,long param_2)

{
  long *plVar1;
  undefined **ppuVar2;
  char cVar3;
  bool bVar4;
  long *plVar5;
  undefined ***pppuVar6;
  long *plVar7;
  undefined8 uVar8;
  long lVar9;
  undefined8 *puVar10;
  long lStack_148;
  long *plStack_140;
  long lStack_138;
  long *plStack_130;
  char cStack_121;
  undefined **ppuStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined **ppuStack_108;
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
  plVar7 = plVar5;
  if (plVar5 != (long *)0x0) {
    __ZNSt3__119__shared_weak_count4lockEv();
    plVar7 = plVar5;
    plStack_140 = plVar5;
    if (plVar5 != (long *)0x0) {
      lStack_148 = *(long *)(param_2 + 0x18);
      if (lStack_148 != 0) {
        lVar9 = *(long *)(param_2 + 0x10);
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
        if (iStack_d0 - 200U < 100) {
          puVar10 = *(undefined8 **)(lVar9 + 0x18);
          ppuStack_120 = &PTR_DAT_110b193c8;
          uStack_118 = 0;
          uStack_110 = 0;
          ppuStack_108 = (undefined **)0x0;
          plStack_130 = (long *)(long)(int)lStack_80;
          lStack_138 = lStack_c8;
          pppuVar6 = &ppuStack_120;
          func_0x000107c30348(pppuVar6,&lStack_138);
          if ((int)pppuVar6 == 0) {
            uVar8 = *(undefined8 *)(lVar9 + 0x30);
            func_0x000107c2b054(&lStack_138,&UNK_10f66dafa);
            FUN_10a6c7134(uVar8,&lStack_138);
            if (cStack_121 < '\0') {
              __ZdlPv(lStack_138);
            }
          }
          else {
            uVar8 = *(undefined8 *)(lVar9 + 0x20);
            ppuVar2 = &PTR_PTR_1132e20f8;
            if (ppuStack_108 != (undefined **)0x0) {
              ppuVar2 = ppuStack_108;
            }
            FUN_10a6b35d4(&lStack_138,*puVar10,ppuVar2);
            FUN_10a6c6ec0(uVar8,&lStack_138);
            plVar7 = plStack_130;
            if (plStack_130 != (long *)0x0) {
              plVar1 = plStack_130 + 1;
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
                (**(code **)(*plStack_130 + 0x10))(plStack_130);
                __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
              }
            }
          }
          func_0x0001098cf084(&ppuStack_120);
        }
        else {
          FUN_10a6c7134(*(undefined8 *)(lVar9 + 0x30),&plStack_e8);
        }
        func_0x000104c4f944(auStack_70);
        plVar7 = &lStack_c8;
        FUN_10a042634();
        if (lStack_d8 < 0) {
          plVar7 = plStack_e8;
          __ZdlPv();
        }
        if (lStack_f0 < 0) {
          plVar7 = plStack_100;
          __ZdlPv();
        }
      }
      plVar1 = plVar5 + 1;
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
        (**(code **)(*plVar5 + 0x10))(plVar5);
        __ZNSt3__119__shared_weak_count14__release_weakEv();
        plVar7 = plVar5;
      }
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return plVar7;
  }
  ___stack_chk_fail();
  if (cStack_121 < '\0') {
    __ZdlPv(lStack_138);
  }
  func_0x0001098cf084(&ppuStack_120);
  FUN_10a05bd10(&plStack_100);
  func_0x00010a05a86c(&lStack_148);
  __Unwind_Resume();
  plVar5 = (long *)plVar7[3];
  if (plVar5 != (long *)0x0) {
    __ZNSt3__119__shared_weak_count4lockEv();
    if (plVar5 != (long *)0x0) {
      if (plVar7[2] != 0) {
        FUN_10a05c0fc(plVar7[2],plVar7[1]);
      }
      plVar1 = plVar5 + 1;
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
        (**(code **)(*plVar5 + 0x10))(plVar5);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
      }
    }
    if (plVar7[3] != 0) {
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
  }
  return plVar7 + 1;
}



/* Entry: 10a6c83a4; end: 10a6c83cf;  */

undefined8 * FUN_10a6c83a4(long param_1)

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



/* Entry: 10a6c83d0; end: 10a6c844f;  */

undefined8 * FUN_10a6c83d0(undefined8 *param_1)

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



/* Entry: 10a6c8450; end: 10a6c85d7;  */

void FUN_10a6c8450(undefined8 param_1,long param_2,undefined8 param_3)

{
  int *piVar1;
  long *plVar2;
  int iVar3;
  char cVar4;
  bool bVar5;
  code *pcVar6;
  long lVar7;
  undefined4 auStack_c0 [2];
  undefined1 *puStack_b8;
  undefined8 uStack_b0;
  undefined4 auStack_a8 [2];
  undefined1 *puStack_a0;
  undefined8 uStack_98;
  undefined1 auStack_90 [4];
  int iStack_8c;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  long lStack_58;
  long lStack_50;
  undefined1 *puStack_48;
  undefined1 auStack_40 [16];
  long lStack_30;
  long *plStack_28;
  
  if ((ulong)*(byte *)(param_2 + 0x29) < 6) {
    FUN_10aba1500(&lStack_30,*(undefined8 *)(param_2 + (ulong)*(byte *)(param_2 + 0x29) * 8 + 0x30),
                  param_3,1);
    lVar7 = 0;
    if (lStack_30 != 0) {
      lVar7 = lStack_30 + 0x10;
    }
    FUN_10a0f3910(auStack_90,lVar7,0);
    uStack_98 = 0;
    auStack_a8[0] = 0x1010000;
    auStack_c0[0] = 0x2010000;
    uStack_b0 = 0;
    puStack_b8 = auStack_90;
    puStack_a0 = auStack_90;
    func_0x000109ac9fc8(auStack_a8,auStack_c0,3,0);
    FUN_109febf28(param_1,auStack_90,0x5f);
    if (lStack_58 != 0) {
      piVar1 = (int *)(lStack_58 + 0x14);
      do {
        iVar3 = *piVar1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar5) {
          *piVar1 = iVar3 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar3 + -1 == 0) {
        func_0x000109a848d4(auStack_90);
      }
    }
    lStack_58 = 0;
    uStack_78 = 0;
    uStack_80 = 0;
    uStack_68 = 0;
    uStack_70 = 0;
    if (0 < iStack_8c) {
      lVar7 = 0;
      do {
        *(undefined4 *)(lStack_50 + lVar7 * 4) = 0;
        lVar7 = lVar7 + 1;
      } while (lVar7 < iStack_8c);
    }
    if (puStack_48 != auStack_40 && puStack_48 != (undefined1 *)0x0) {
      _free(*(undefined8 *)(puStack_48 + -8));
    }
    if (plStack_28 != (long *)0x0) {
      plVar2 = plStack_28 + 1;
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
        (**(code **)(*plStack_28 + 0x10))(plStack_28);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_28);
      }
    }
    return;
  }
                    /* WARNING: Does not return */
  pcVar6 = (code *)SoftwareBreakpoint(1,0x10a6c85ac);
  (*pcVar6)();
}



/* Entry: 10a6c85d8; end: 10a6c878f;  */

undefined8 * FUN_10a6c85d8(undefined8 *param_1,undefined8 *param_2,long *param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  undefined8 *puVar5;
  long lVar6;
  long *plVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long lStack_90;
  long *plStack_88;
  undefined **ppuStack_80;
  long lStack_78;
  long *plStack_70;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  __ZNSt3__115recursive_mutex4lockEv(param_2 + 2);
  lVar6 = *param_3;
  plVar7 = (long *)param_3[1];
  if (plVar7 == (long *)0x0) {
    plStack_70 = (long *)0x0;
  }
  else {
    plVar4 = plVar7 + 1;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar4,0x10);
      if (bVar3) {
        *plVar4 = *plVar4 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar4,0x10);
      if (bVar3) {
        *plVar4 = *plVar4 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
      plStack_70 = plVar7;
    } while (cVar2 != '\0');
  }
  ppuStack_80 = &PTR_FUN_110c10ee0;
  plVar4 = (long *)0x48;
  lStack_90 = lVar6;
  plStack_88 = plVar7;
  lStack_78 = lVar6;
  __Znwm();
  *plVar4 = 0;
  plVar4[1] = 0;
  plVar4[2] = (long)&PTR_FUN_110c10ee0;
  plVar4[3] = lVar6;
  plVar4[4] = (long)plVar7;
  if (plVar7 != (long *)0x0) {
    plVar1 = plVar7 + 1;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  puVar5 = (undefined8 *)param_2[0xb];
  lVar6 = param_2[0xc];
  *plVar4 = (long)(param_2 + 10);
  plVar4[1] = (long)puVar5;
  *puVar5 = plVar4;
  param_2[0xb] = plVar4;
  param_2[0xc] = lVar6 + 1;
  if (plVar7 != (long *)0x0) {
    plVar4 = plVar7 + 1;
    do {
      lVar6 = *plVar4;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar4,0x10);
      if (bVar3) {
        *plVar4 = lVar6 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar6 == 0) {
      (**(code **)(*plVar7 + 0x10))(plVar7);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
    }
    do {
      lVar6 = *plVar4;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar4,0x10);
      if (bVar3) {
        *plVar4 = lVar6 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar6 == 0) {
      (**(code **)(*plVar7 + 0x10))(plVar7);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
    }
  }
  uVar8 = param_2[0xb];
  puVar5 = param_2 + 2;
  __ZNSt3__115recursive_mutex6unlockEv();
  uVar10 = param_2[1];
  uVar9 = *param_2;
  if (param_2[1] != 0) {
    plVar7 = (long *)(param_2[1] + 0x10);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar3) {
        *plVar7 = *plVar7 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  *param_1 = uVar8;
  param_1[2] = uVar10;
  param_1[1] = uVar9;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_48) {
    ___stack_chk_fail();
    FUN_10a352ff8(&lStack_78);
    FUN_10a352ff8(&lStack_90);
    __ZNSt3__115recursive_mutex6unlockEv(param_2 + 2);
    __Unwind_Resume();
    plVar7 = (long *)puVar5[2];
    if (plVar7 != (long *)0x0) {
      plVar4 = plVar7 + 1;
      do {
        lVar6 = *plVar4;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar4,0x10);
        if (bVar3) {
          *plVar4 = lVar6 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar6 == 0) {
        (**(code **)(*plVar7 + 0x10))(plVar7);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
      }
    }
    return puVar5 + 1;
  }
  return puVar5;
}



/* Entry: 10a6c8790; end: 10a6c87cb;  */

long FUN_10a6c8790(long param_1)

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



/* Entry: 10a6c87cc; end: 10a6c89ef;  */

undefined *** FUN_10a6c87cc(undefined ***param_1,long param_2)

{
  undefined ***pppuVar1;
  undefined **ppuVar2;
  char cVar3;
  bool bVar4;
  undefined ***pppuVar5;
  undefined ***pppuVar6;
  undefined **ppuVar7;
  undefined *puVar8;
  undefined ***pppuVar9;
  long lVar10;
  long lStack_138;
  undefined ***pppuStack_130;
  undefined **ppuStack_128;
  ulong uStack_120;
  undefined1 uStack_118;
  undefined4 uStack_114;
  undefined **ppuStack_110;
  long lStack_108;
  undefined ***pppuStack_100;
  undefined **ppuStack_f8;
  undefined **ppuStack_f0;
  undefined ***pppuStack_e8;
  undefined **ppuStack_e0;
  undefined **ppuStack_d8;
  int iStack_d0;
  undefined **ppuStack_c8;
  undefined **ppuStack_c0;
  undefined1 auStack_b8 [56];
  undefined **ppuStack_80;
  undefined4 uStack_78;
  undefined1 auStack_70 [40];
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pppuVar5 = *(undefined ****)(param_2 + 0x20);
  pppuVar6 = pppuVar5;
  pppuVar9 = param_1;
  if (pppuVar5 == (undefined ***)0x0) goto LAB_10a6c8984;
  __ZNSt3__119__shared_weak_count4lockEv();
  pppuVar6 = pppuVar5;
  pppuStack_130 = pppuVar5;
  if (pppuVar5 == (undefined ***)0x0) goto LAB_10a6c8984;
  lStack_138 = *(long *)(param_2 + 0x18);
  if (lStack_138 != 0) {
    lVar10 = *(long *)(param_2 + 0x10);
    ppuStack_f8 = param_1[1];
    pppuStack_100 = (undefined ***)*param_1;
    ppuStack_f0 = param_1[2];
    *param_1 = (undefined **)0x0;
    param_1[1] = (undefined **)0x0;
    ppuStack_e0 = param_1[4];
    pppuStack_e8 = (undefined ***)param_1[3];
    ppuStack_d8 = param_1[5];
    param_1[2] = (undefined **)0x0;
    param_1[3] = (undefined **)0x0;
    param_1[4] = (undefined **)0x0;
    param_1[5] = (undefined **)0x0;
    iStack_d0 = *(int *)(param_1 + 6);
    ppuStack_c8 = param_1[7];
    ppuStack_c0 = param_1[8];
    param_1[7] = (undefined **)0x0;
    pppuVar9 = param_1 + 9;
    (*(code *)(*pppuVar9)[2])(auStack_b8,pppuVar9);
    ppuStack_80 = param_1[0x10];
    uStack_78 = *(undefined4 *)(param_1 + 0x11);
    FUN_10a0424c4(auStack_70,param_1 + 0x12);
    if (iStack_d0 - 200U < 100) {
      pppuVar9 = &ppuStack_128;
      ppuStack_128 = &PTR_DAT_110b190a8;
      uStack_120 = 0;
      uStack_114 = 0;
      uStack_118 = 0;
      lStack_108 = (long)(int)ppuStack_80;
      ppuStack_110 = ppuStack_c8;
      pppuVar6 = &ppuStack_128;
      func_0x000107c30348(pppuVar6,&ppuStack_110);
      if (((ulong)pppuVar6 & 1) == 0) {
        if ((uStack_120 & 1) != 0) {
          func_0x0001053936ac(&uStack_120);
        }
        goto LAB_10a6c8914;
      }
      ppuStack_110 = (undefined **)CONCAT71(ppuStack_110._1_7_,uStack_118);
      FUN_10a087a3c(*(undefined8 *)(lVar10 + 0x18),&ppuStack_110);
      if ((uStack_120 & 1) != 0) {
        func_0x0001053936ac(&uStack_120);
      }
    }
    else {
LAB_10a6c8914:
      ppuStack_128 = (undefined **)((ulong)ppuStack_128 & 0xffffffffffffff00);
      FUN_10a087a3c(*(undefined8 *)(lVar10 + 0x18),&ppuStack_128);
    }
    func_0x000104c4f944(auStack_70);
    pppuVar6 = &ppuStack_c8;
    FUN_10a042634();
    if ((long)ppuStack_d8 < 0) {
      pppuVar6 = pppuStack_e8;
      __ZdlPv();
    }
    if ((long)ppuStack_f0 < 0) {
      pppuVar6 = pppuStack_100;
      __ZdlPv();
    }
  }
  pppuVar1 = pppuVar5 + 1;
  do {
    ppuVar7 = *pppuVar1;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(pppuVar1,0x10);
    if (bVar4) {
      *pppuVar1 = (undefined **)((long)ppuVar7 + -1);
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  if (ppuVar7 == (undefined **)0x0) {
    (*(code *)(*pppuVar5)[2])(pppuVar5);
    __ZNSt3__119__shared_weak_count14__release_weakEv();
    pppuVar6 = pppuVar5;
  }
LAB_10a6c8984:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return pppuVar6;
  }
  ___stack_chk_fail();
  if ((uStack_120 & 1) != 0) {
    func_0x0001053936ac(pppuVar9 + 1);
  }
  FUN_10a05bd10(&pppuStack_100);
  func_0x00010a05a86c(&lStack_138);
  __Unwind_Resume();
  ppuVar7 = pppuVar6[3];
  if (ppuVar7 != (undefined **)0x0) {
    __ZNSt3__119__shared_weak_count4lockEv();
    if (ppuVar7 != (undefined **)0x0) {
      if (pppuVar6[2] != (undefined **)0x0) {
        FUN_10a05c0fc(pppuVar6[2],pppuVar6[1]);
      }
      ppuVar2 = ppuVar7 + 1;
      do {
        puVar8 = *ppuVar2;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(ppuVar2,0x10);
        if (bVar4) {
          *ppuVar2 = puVar8 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (puVar8 == (undefined *)0x0) {
        (**(code **)(*ppuVar7 + 0x10))(ppuVar7);
        __ZNSt3__119__shared_weak_count14__release_weakEv(ppuVar7);
      }
    }
    if (pppuVar6[3] != (undefined **)0x0) {
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
  }
  return pppuVar6 + 1;
}



/* Entry: 10a6c89f0; end: 10a6c8a1b;  */

undefined8 * FUN_10a6c89f0(long param_1)

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



/* Entry: 10a6c8a1c; end: 10a6c8c13;  */

undefined8 * FUN_10a6c8a1c(undefined8 *param_1)

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



/* Entry: 10a6c8c14; end: 10a6c8c67;  */

void FUN_10a6c8c14(long *param_1)

{
  long *plVar1;
  long *plVar2;
  
  plVar1 = (long *)param_1[2];
  if (plVar1 != (long *)0x0) {
    plVar2 = (long *)*plVar1;
    if (plVar2 == param_1) {
      *plVar1 = 0;
      while (plVar2 = (long *)plVar1[1], (long *)plVar1[1] != (long *)0x0) {
        do {
          plVar1 = plVar2;
          plVar2 = (long *)*plVar1;
        } while ((long *)*plVar1 != (long *)0x0);
      }
    }
    else {
      plVar1[1] = 0;
      while (plVar2 != (long *)0x0) {
        do {
          plVar1 = plVar2;
          plVar2 = (long *)*plVar1;
        } while (plVar2 != (long *)0x0);
        plVar2 = (long *)plVar1[1];
      }
    }
  }
  return;
}



/* Entry: 10a6c8c68; end: 10a6c8cbb;  */

undefined8 * FUN_10a6c8c68(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  
  FUN_109fff0a0(*param_1,param_1[2]);
  if (param_1[1] != 0) {
    lVar1 = *(long *)(param_1[1] + 0x10);
    if (lVar1 != 0) {
      do {
        lVar2 = lVar1;
        lVar1 = *(long *)(lVar2 + 0x10);
      } while (lVar1 != 0);
      param_1[1] = lVar2;
    }
    FUN_109fff0a0(*param_1);
  }
  return param_1;
}



/* Entry: 10a6c8cbc; end: 10a6c8e23;  */

undefined8 * FUN_10a6c8cbc(undefined8 *param_1,undefined8 *param_2)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  
  uVar7 = *param_2;
  uVar9 = param_2[3];
  uVar8 = param_2[2];
  param_1[1] = param_2[1];
  *param_1 = uVar7;
  param_1[3] = uVar9;
  param_1[2] = uVar8;
  uVar7 = param_2[4];
  param_1[5] = param_2[5];
  param_1[4] = uVar7;
  lVar4 = param_2[7];
  uVar7 = param_2[6];
  param_1[7] = param_2[7];
  param_1[6] = uVar7;
  param_1[10] = 0;
  param_1[8] = param_1 + 1;
  param_1[9] = param_1 + 10;
  param_1[0xb] = 0;
  if (lVar4 != 0) {
    piVar1 = (int *)(lVar4 + 0x14);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = *piVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  if (*(int *)((long)param_2 + 4) < 3) {
    puVar5 = (undefined8 *)param_2[9];
    puVar6 = (undefined8 *)param_1[9];
    *puVar6 = *puVar5;
    puVar6[1] = puVar5[1];
  }
  else {
    *(undefined4 *)((long)param_1 + 4) = 0;
    func_0x000109a84868(param_1,param_2);
  }
  uVar8 = param_2[0xd];
  uVar7 = param_2[0xc];
  uVar9 = param_2[0xe];
  param_1[0xf] = param_2[0xf];
  param_1[0xe] = uVar9;
  uVar9 = param_2[0x10];
  param_1[0x11] = param_2[0x11];
  param_1[0x10] = uVar9;
  lVar4 = param_2[0x13];
  uVar10 = param_2[0x13];
  uVar9 = param_2[0x12];
  param_1[0x16] = 0;
  param_1[0x13] = uVar10;
  param_1[0x12] = uVar9;
  param_1[0x14] = param_1 + 0xd;
  param_1[0x15] = param_1 + 0x16;
  param_1[0x17] = 0;
  param_1[0xd] = uVar8;
  param_1[0xc] = uVar7;
  if (lVar4 != 0) {
    piVar1 = (int *)(lVar4 + 0x14);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = *piVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  if (*(int *)((long)param_2 + 100) < 3) {
    puVar5 = (undefined8 *)param_2[0x15];
    puVar6 = (undefined8 *)param_1[0x15];
    *puVar6 = *puVar5;
    puVar6[1] = puVar5[1];
  }
  else {
    *(undefined4 *)((long)param_1 + 100) = 0;
    func_0x000109a84868(param_1 + 0xc);
  }
  FUN_109ffeb50(param_1 + 0x18,param_2 + 0x18);
  param_1[0x1b] = param_2[0x1b];
  return param_1;
}



/* Entry: 10a6c8e24; end: 10a6c8e37;  */

long * FUN_10a6c8e24(void)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  
  plVar2 = (long *)&DAT_10f62a4d8;
  FUN_109ffde64();
  lVar1 = plVar2[1];
  lVar3 = plVar2[2];
  while (lVar3 != lVar1) {
    plVar2[2] = lVar3 + -0xe0;
    FUN_10a6c8e84();
    lVar3 = plVar2[2];
  }
  if (*plVar2 != 0) {
    __ZdlPv();
  }
  return plVar2;
}



/* Entry: 10a6c8e38; end: 10a6c8e83;  */

long * FUN_10a6c8e38(long *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = param_1[1];
  lVar2 = param_1[2];
  while (lVar2 != lVar1) {
    param_1[2] = lVar2 + -0xe0;
    FUN_10a6c8e84();
    lVar2 = param_1[2];
  }
  if (*param_1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 10a6c8e84; end: 10a6c8fa7;  */

long FUN_10a6c8e84(long param_1)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  long lVar6;
  
  FUN_109fff0a0(param_1 + 0xc0,*(undefined8 *)(param_1 + 200));
  if (*(long *)(param_1 + 0x98) != 0) {
    piVar1 = (int *)(*(long *)(param_1 + 0x98) + 0x14);
    do {
      iVar2 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar2 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar2 + -1 == 0) {
      func_0x000109a848d4(param_1 + 0x60);
    }
  }
  *(undefined8 *)(param_1 + 0x98) = 0;
  *(undefined8 *)(param_1 + 0x78) = 0;
  *(undefined8 *)(param_1 + 0x70) = 0;
  *(undefined8 *)(param_1 + 0x88) = 0;
  *(undefined8 *)(param_1 + 0x80) = 0;
  if (0 < *(int *)(param_1 + 100)) {
    lVar5 = 0;
    lVar6 = *(long *)(param_1 + 0xa0);
    do {
      *(undefined4 *)(lVar6 + lVar5 * 4) = 0;
      lVar5 = lVar5 + 1;
    } while (lVar5 < *(int *)(param_1 + 100));
  }
  lVar5 = *(long *)(param_1 + 0xa8);
  if (lVar5 != param_1 + 0xb0 && lVar5 != 0) {
    _free(*(undefined8 *)(lVar5 + -8));
  }
  if (*(long *)(param_1 + 0x38) != 0) {
    piVar1 = (int *)(*(long *)(param_1 + 0x38) + 0x14);
    do {
      iVar2 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar2 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar2 + -1 == 0) {
      func_0x000109a848d4(param_1);
    }
  }
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  if (0 < *(int *)(param_1 + 4)) {
    lVar5 = 0;
    lVar6 = *(long *)(param_1 + 0x40);
    do {
      *(undefined4 *)(lVar6 + lVar5 * 4) = 0;
      lVar5 = lVar5 + 1;
    } while (lVar5 < *(int *)(param_1 + 4));
  }
  lVar5 = *(long *)(param_1 + 0x48);
  if (lVar5 != param_1 + 0x50 && lVar5 != 0) {
    _free(*(undefined8 *)(lVar5 + -8));
  }
  return param_1;
}



/* Entry: 10a6c8fa8; end: 10a6c8fbb;  */

/* WARNING: Removing unreachable block (ram,0x00010a6c9050) */

undefined1  [16] FUN_10a6c8fa8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  
  puVar1 = &DAT_10f62a4d8;
  FUN_109ffde64();
  if ((undefined *)0x666666666666666 < puVar1) {
    func_0x000109ffded8();
    if ((puVar1[0x18] & 1) == 0) {
      for (lVar2 = **(long **)(puVar1 + 0x10); lVar2 != **(long **)(puVar1 + 8);
          lVar2 = lVar2 + -0x28) {
      }
    }
    auVar4._8_8_ = param_2;
    auVar4._0_8_ = puVar1;
    return auVar4;
  }
  lVar2 = (long)puVar1 * 0x28;
  __Znwm(lVar2);
  auVar3._8_8_ = puVar1;
  auVar3._0_8_ = lVar2;
  return auVar3;
}



/* Entry: 10a6c8fbc; end: 10a6c8fff;  */

/* WARNING: Removing unreachable block (ram,0x00010a6c9050) */

undefined1  [16] FUN_10a6c8fbc(ulong param_1,undefined8 param_2)

{
  long lVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  
  if (0x666666666666666 < param_1) {
    func_0x000109ffded8();
    if ((*(byte *)(param_1 + 0x18) & 1) == 0) {
      for (lVar1 = **(long **)(param_1 + 0x10); lVar1 != **(long **)(param_1 + 8);
          lVar1 = lVar1 + -0x28) {
      }
    }
    auVar3._8_8_ = param_2;
    auVar3._0_8_ = param_1;
    return auVar3;
  }
  lVar1 = param_1 * 0x28;
  __Znwm(lVar1);
  auVar2._8_8_ = param_1;
  auVar2._0_8_ = lVar1;
  return auVar2;
}



/* Entry: 10a6c9000; end: 10a6c905b;  */

/* WARNING: Removing unreachable block (ram,0x00010a6c9050) */

long FUN_10a6c9000(long param_1)

{
  long lVar1;
  
  if ((*(byte *)(param_1 + 0x18) & 1) == 0) {
    for (lVar1 = **(long **)(param_1 + 0x10); lVar1 != **(long **)(param_1 + 8);
        lVar1 = lVar1 + -0x28) {
    }
  }
  return param_1;
}



/* Entry: 10a6c905c; end: 10a6c90bb;  */

/* WARNING: Removing unreachable block (ram,0x00010a6c9088) */

long * FUN_10a6c905c(long *param_1)

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



/* Entry: 10a6c90bc; end: 10a6c91e3;  */

void FUN_10a6c90bc(ulong *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  code *pcVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ulong *puStack_70;
  undefined8 **ppuStack_68;
  undefined8 **ppuStack_60;
  undefined1 uStack_58;
  undefined8 *puStack_50;
  undefined8 *puStack_48;
  
  if (param_4 != (undefined8 *)0x0) {
    if ((undefined8 *)0x666666666666666 < param_4) {
      FUN_10a6c8fa8();
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10a6c91bc);
      (*pcVar1)();
    }
    puVar2 = param_2;
    FUN_10a6c8fbc();
    *param_1 = (ulong)param_4;
    param_1[1] = (ulong)param_4;
    param_1[2] = (ulong)(param_4 + (long)puVar2 * 5);
    ppuStack_68 = &puStack_50;
    ppuStack_60 = &puStack_48;
    uStack_58 = 0;
    puStack_50 = param_4;
    puStack_70 = param_1;
    for (; puStack_48 = param_4, param_2 != param_3; param_2 = param_2 + 5) {
      if (*(char *)((long)param_2 + 0x17) < '\0') {
        func_0x000107c3192c(param_4,*param_2,param_2[1]);
      }
      else {
        uVar4 = param_2[1];
        uVar3 = *param_2;
        param_4[2] = param_2[2];
        param_4[1] = uVar4;
        *param_4 = uVar3;
      }
      uVar3 = param_2[3];
      param_4[4] = param_2[4];
      param_4[3] = uVar3;
      param_4 = puStack_48 + 5;
    }
    uStack_58 = 1;
    FUN_10a6c9000(&puStack_70);
    param_1[1] = (ulong)param_4;
  }
  return;
}



/* Entry: 10a6c91e4; end: 10a6c9253;  */

/* WARNING: Removing unreachable block (ram,0x00010a6c921c) */

void FUN_10a6c91e4(long *param_1)

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



/* Entry: 10a6c9254; end: 10a6c9267;  */

long * FUN_10a6c9254(void)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  
  plVar2 = (long *)&DAT_10f62a4d8;
  FUN_109ffde64();
  lVar1 = plVar2[1];
  lVar3 = plVar2[2];
  while (lVar3 != lVar1) {
    plVar2[2] = lVar3 + -0x20;
    FUN_10a6c91e4(lVar3 + -0x18);
    lVar3 = plVar2[2];
  }
  if (*plVar2 != 0) {
    __ZdlPv();
  }
  return plVar2;
}



/* Entry: 10a6c9268; end: 10a6c92b7;  */

long * FUN_10a6c9268(long *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = param_1[1];
  lVar2 = param_1[2];
  while (lVar2 != lVar1) {
    param_1[2] = lVar2 + -0x20;
    FUN_10a6c91e4(lVar2 + -0x18);
    lVar2 = param_1[2];
  }
  if (*param_1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 10a6c92b8; end: 10a6c939f;  */

long * FUN_10a6c92b8(undefined8 param_1,long *param_2,long *param_3,long *param_4)

{
  long *plVar1;
  bool bVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  undefined8 uStack_60;
  long **pplStack_58;
  long **pplStack_50;
  undefined1 uStack_48;
  long *plStack_40;
  long *plStack_38;
  
  pplStack_58 = &plStack_40;
  pplStack_50 = &plStack_38;
  uStack_48 = 0;
  plStack_40 = param_4;
  uStack_60 = param_1;
  while (plStack_38 = param_4, param_2 != param_3) {
    if (*(char *)((long)param_2 + 0x37) < '\0') {
      func_0x000107c3192c(param_4,param_2[4],param_2[5]);
    }
    else {
      lVar5 = param_2[5];
      lVar4 = param_2[4];
      param_4[2] = param_2[6];
      param_4[1] = lVar5;
      *param_4 = lVar4;
    }
    plVar1 = (long *)param_2[1];
    plVar3 = param_2;
    if ((long *)param_2[1] == (long *)0x0) {
      do {
        param_2 = (long *)plVar3[2];
        bVar2 = (long *)*param_2 != plVar3;
        plVar3 = param_2;
      } while (bVar2);
    }
    else {
      do {
        param_2 = plVar1;
        plVar1 = (long *)*param_2;
      } while ((long *)*param_2 != (long *)0x0);
    }
    param_4 = plStack_38 + 3;
  }
  uStack_48 = 1;
  FUN_10a0cf254(&uStack_60);
  return param_4;
}



/* Entry: 10a6c93a0; end: 10a6c941f;  */

long FUN_10a6c93a0(long *param_1,long *param_2,long param_3)

{
  long *plVar1;
  bool bVar2;
  long *plVar3;
  
  while (param_1 != param_2) {
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_(param_3,param_1 + 4);
    plVar1 = (long *)param_1[1];
    plVar3 = param_1;
    if ((long *)param_1[1] == (long *)0x0) {
      do {
        param_1 = (long *)plVar3[2];
        bVar2 = (long *)*param_1 != plVar3;
        plVar3 = param_1;
      } while (bVar2);
    }
    else {
      do {
        param_1 = plVar1;
        plVar1 = (long *)*param_1;
      } while ((long *)*param_1 != (long *)0x0);
    }
    param_3 = param_3 + 0x18;
  }
  return param_3;
}



/* Entry: 10a6c9420; end: 10a6c94b7;  */

void FUN_10a6c9420(long *param_1,undefined8 *param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  
  lVar3 = *param_1;
  lVar4 = param_1[1];
  lVar2 = param_2[1] + (lVar3 - lVar4);
  lVar1 = lVar2;
  for (lVar5 = lVar3; lVar4 != lVar5; lVar5 = lVar5 + 0x18) {
    lVar6 = 0;
    do {
      *(undefined4 *)(lVar1 + lVar6) = *(undefined4 *)(lVar5 + lVar6);
      lVar6 = lVar6 + 4;
    } while (lVar6 != 0xc);
    do {
      *(undefined4 *)(lVar1 + lVar6) = *(undefined4 *)(lVar5 + lVar6);
      lVar6 = lVar6 + 4;
    } while (lVar6 != 0x18);
    lVar1 = lVar1 + 0x18;
  }
  param_2[1] = lVar2;
  lVar5 = *param_1;
  *param_1 = lVar2;
  param_1[1] = lVar3;
  param_2[1] = lVar5;
  lVar5 = param_1[1];
  param_1[1] = param_2[2];
  param_2[2] = lVar5;
  lVar5 = param_1[2];
  param_1[2] = param_2[3];
  param_2[3] = lVar5;
  *param_2 = param_2[1];
  return;
}



/* Entry: 10a6c94b8; end: 10a6c9513;  */

void FUN_10a6c94b8(long *param_1)

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
        lVar1 = lVar1 + -0xe0;
        FUN_10a6c8e84();
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



/* Entry: 10a6c9514; end: 10a6c957f;  */

void FUN_10a6c9514(long *param_1)

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
        lVar3 = lVar1 + -0x20;
        FUN_10a6c91e4(lVar1 + -0x18);
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



/* Entry: 10a6c9580; end: 10a6c9593;  */

void FUN_10a6c9580(void)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  plVar1 = (long *)&DAT_10f62a4d8;
  FUN_109ffde64();
  lVar3 = *plVar1;
  if (lVar3 != 0) {
    lVar4 = lVar3;
    lVar2 = plVar1[1];
    if (plVar1[1] != lVar3) {
      do {
        lVar4 = lVar2 + -0x58;
        func_0x00010a05248c(lVar2 + -0x48);
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



/* Entry: 10a6c9594; end: 10a6c95ff;  */

void FUN_10a6c9594(long *param_1)

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
        lVar3 = lVar1 + -0x58;
        func_0x00010a05248c(lVar1 + -0x48);
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



/* Entry: 10a6c9600; end: 10a6c9613;  */

void FUN_10a6c9600(undefined8 param_1,long param_2)

{
  long lVar1;
  undefined *puVar2;
  
  puVar2 = &DAT_10f62a4d8;
  FUN_109ffde64();
  lVar1 = *(long *)(puVar2 + 8);
  while (lVar1 != param_2) {
    func_0x00010a0cfa6c(lVar1 + -0x10);
    FUN_10a0617bc(lVar1 + -0x20);
    lVar1 = lVar1 + -0x20;
  }
  *(long *)(puVar2 + 8) = param_2;
  return;
}



/* Entry: 10a6c9614; end: 10a6c966b;  */

void FUN_10a6c9614(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 8);
  while (lVar1 != param_2) {
    func_0x00010a0cfa6c(lVar1 + -0x10);
    FUN_10a0617bc(lVar1 + -0x20);
    lVar1 = lVar1 + -0x20;
  }
  *(long *)(param_1 + 8) = param_2;
  return;
}



/* Entry: 10a6c966c; end: 10a6c969b;  */

void FUN_10a6c966c(long *param_1)

{
  if (*param_1 != 0) {
    FUN_10a6c9614();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(*param_1);
    return;
  }
  return;
}



/* Entry: 10a6c969c; end: 10a6c97af;  */

undefined8 * FUN_10a6c969c(undefined8 *param_1)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  undefined8 *puVar6;
  long lVar7;
  
  func_0x00010a140010(param_1 + 0x20);
  func_0x00010a140010(param_1 + 0x1e);
  func_0x00010a140010(param_1 + 0x1c);
  func_0x00010a140010(param_1 + 0x1a);
  func_0x00010a140010(param_1 + 0x18);
  FUN_10a003a64(param_1 + 0x17,0);
  FUN_10a6ca180(param_1 + 0x16,0);
  if (param_1[0x13] != 0) {
    param_1[0x14] = param_1[0x13];
    __ZdlPv();
  }
  func_0x00010a05248c(param_1 + 0x11);
  func_0x00010a05248c(param_1 + 0xf);
  if (param_1[10] != 0) {
    piVar1 = (int *)(param_1[10] + 0x14);
    do {
      iVar2 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar2 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar2 + -1 == 0) {
      func_0x000109a848d4(param_1 + 3);
    }
  }
  param_1[10] = 0;
  param_1[6] = 0;
  param_1[5] = 0;
  param_1[8] = 0;
  param_1[7] = 0;
  if (0 < *(int *)((long)param_1 + 0x1c)) {
    lVar5 = 0;
    lVar7 = param_1[0xb];
    do {
      *(undefined4 *)(lVar7 + lVar5 * 4) = 0;
      lVar5 = lVar5 + 1;
    } while (lVar5 < *(int *)((long)param_1 + 0x1c));
  }
  puVar6 = (undefined8 *)param_1[0xc];
  if (puVar6 != param_1 + 0xd && puVar6 != (undefined8 *)0x0) {
    _free(puVar6[-1]);
  }
  *param_1 = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + 1);
  return param_1;
}



/* Entry: 10a6c97b0; end: 10a6c98fb;  */

undefined8 * FUN_10a6c97b0(undefined8 *param_1)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  undefined8 *puVar6;
  long lVar7;
  
  *param_1 = &PTR_FUN_110c0ffe0;
  if (param_1[0x1d] != 0) {
    piVar1 = (int *)(param_1[0x1d] + 0x14);
    do {
      iVar2 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar2 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar2 + -1 == 0) {
      func_0x000109a848d4(param_1 + 0x16);
    }
  }
  param_1[0x1d] = 0;
  param_1[0x19] = 0;
  param_1[0x18] = 0;
  param_1[0x1b] = 0;
  param_1[0x1a] = 0;
  if (0 < *(int *)((long)param_1 + 0xb4)) {
    lVar5 = 0;
    lVar7 = param_1[0x1e];
    do {
      *(undefined4 *)(lVar7 + lVar5 * 4) = 0;
      lVar5 = lVar5 + 1;
    } while (lVar5 < *(int *)((long)param_1 + 0xb4));
  }
  puVar6 = (undefined8 *)param_1[0x1f];
  if (puVar6 != param_1 + 0x20 && puVar6 != (undefined8 *)0x0) {
    _free(puVar6[-1]);
  }
  FUN_109fff0a0(param_1 + 0x12,param_1[0x13]);
  if (param_1[0xd] != 0) {
    piVar1 = (int *)(param_1[0xd] + 0x14);
    do {
      iVar2 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar2 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar2 + -1 == 0) {
      func_0x000109a848d4(param_1 + 6);
    }
  }
  param_1[0xd] = 0;
  param_1[9] = 0;
  param_1[8] = 0;
  param_1[0xb] = 0;
  param_1[10] = 0;
  if (0 < *(int *)((long)param_1 + 0x34)) {
    lVar5 = 0;
    lVar7 = param_1[0xe];
    do {
      *(undefined4 *)(lVar7 + lVar5 * 4) = 0;
      lVar5 = lVar5 + 1;
    } while (lVar5 < *(int *)((long)param_1 + 0x34));
  }
  puVar6 = (undefined8 *)param_1[0xf];
  if (puVar6 != param_1 + 0x10 && puVar6 != (undefined8 *)0x0) {
    _free(puVar6[-1]);
  }
  FUN_10a6d5f2c(param_1 + 3);
  *param_1 = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + 1);
  return param_1;
}



/* Entry: 10a6c98fc; end: 10a6c9aeb;  */

undefined8 * FUN_10a6c98fc(undefined8 *param_1)

{
  long lVar1;
  undefined **ppuVar2;
  long *plVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined1 auStack_2a8 [16];
  undefined1 auStack_298 [272];
  undefined1 auStack_188 [8];
  undefined **appuStack_180 [2];
  undefined1 auStack_170 [272];
  
  FUN_10a6d7e48(param_1 + 100);
  param_1[0x60] = &PTR_FUN_110b9f9a8;
  if ((undefined8 *)param_1[99] != (undefined8 *)0x0) {
    *(undefined8 *)param_1[99] = 0;
  }
  func_0x00010a004e5c(param_1 + 0x61);
  FUN_10a00dc2c(param_1 + 0x5b);
  FUN_10a1e3810(param_1 + 0x51);
  *param_1 = &PTR_FUN_110c106d0;
  param_1[2] = &PTR_FUN_110bb3968;
  param_1[5] = &PTR_DAT_110bb3998;
  param_1[0x65] = &PTR_DAT_110c10830;
  param_1[0x15] = &PTR_DAT_110bb39f0;
  FUN_10a042c0c(param_1 + 0x4d);
  func_0x00010a042c64(param_1 + 0x48);
  func_0x00010a0523dc(param_1 + 0x45);
  if (*(char *)(param_1 + 0x3c) == '\x01') {
    func_0x00010a042d30(param_1 + 0x3a);
  }
  param_1[0x15] = &PTR_FUN_110b9f768;
  FUN_10a1c00f4(param_1 + 0x15);
  *param_1 = &PTR_DAT_110c10880;
  param_1[2] = &PTR_FUN_110b9f848;
  param_1[5] = &PTR_DAT_110b9f878;
  param_1[0x65] = &PTR_DAT_110c10950;
  FUN_10a042dcc(param_1 + 0x13);
  *param_1 = &PTR_DAT_110c60a00;
  param_1[2] = &PTR_DAT_110c60a88;
  param_1[5] = &PTR_DAT_110c60ab8;
  ppuVar2 = (undefined **)(param_1 + 0xb);
  puVar5 = (undefined8 *)param_1[0xc];
  for (puVar4 = (undefined8 *)*ppuVar2; puVar4 != puVar5; puVar4 = puVar4 + 1) {
    FUN_10a009538(auStack_2a8,&UNK_10f69ea0f);
    __ZNSt13runtime_errorC2ERKS_(appuStack_180,auStack_2a8);
    _memcpy(auStack_170,auStack_298,0x110);
    appuStack_180[0] = &PTR_FUN_110b99e70;
    FUN_10a05bde0(auStack_188,appuStack_180);
    __ZNSt13runtime_errorD2Ev(appuStack_180);
    func_0x000109d1b350(*puVar4,auStack_188);
    __ZNSt13exception_ptrD1Ev(auStack_188);
    __ZNSt13runtime_errorD2Ev(auStack_2a8);
  }
  FUN_10ac634b8(ppuVar2);
  plVar3 = param_1 + 10;
  if ((*plVar3 != 0) && (*(undefined ***)(*(long *)(*plVar3 + 8) + 0x20) == &PTR_DAT_110b9f988)) {
    FUN_10a5ae930();
  }
  FUN_10a3a743c(param_1 + 3);
  if ((param_1[0x12] != 0) && (lVar1 = *(long *)(param_1[0x12] + 0x828), lVar1 != 0)) {
    FUN_10a1dfb2c(lVar1,param_1);
  }
  if (*(char *)((long)param_1 + 0x8f) < '\0') {
    __ZdlPv(param_1[0xf]);
  }
  appuStack_180[0] = ppuVar2;
  FUN_10ac78cf4(appuStack_180);
  lVar1 = *plVar3;
  *plVar3 = 0;
  if (lVar1 != 0) {
    FUN_10ac7d690(plVar3);
  }
  if (param_1[9] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  param_1[5] = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + 6);
  param_1[2] = &PTR____cxa_pure_virtual_110bcfb60;
  func_0x00010a004e5c(param_1 + 3);
  return param_1;
}



/* Entry: 10a6c9aec; end: 10a6c9ba3;  */

void FUN_10a6c9aec(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  FUN_10a6c9ba4(param_2,param_3);
  FUN_10a052e3c(param_5);
  FUN_10a05b924(param_1,param_2,plVar4 + 0xf);
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



/* Entry: 10a6c9ba4; end: 10a6c9c0b;  */

void FUN_10a6c9ba4(undefined **param_1,undefined **param_2,undefined8 param_3,undefined8 param_4)

{
  code *pcVar1;
  long lVar2;
  undefined **ppuVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  long lVar7;
  ulong uVar8;
  undefined8 extraout_x8;
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
      param_4 = 0;
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
  plVar6 = plVar4;
  FUN_10a6c9ba4(plVar4,param_2);
  FUN_10a052e3c(param_4);
  FUN_10a05b924(extraout_x8,plVar4,plVar6 + 0x11);
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
        plStack_88 = plVar4;
        if (uVar9 >> 0x3c == 0) {
          lVar2 = uVar9 << 4;
          __Znwm();
          lVar12 = lVar2 + lVar10;
          _bzero(lVar12,uVar15 * 0x10);
          lVar11 = lVar12 + uVar14 * -0x10;
          _memcpy(lVar11,lVar7,lVar10);
          *plVar4 = lVar11;
          plVar5[0x4c] = lVar12 + uVar15 * 0x10;
          plVar5[0x4d] = lVar2 + uVar9 * 0x10;
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



/* Entry: 10a6c9c0c; end: 10a6c9cc3;  */

void FUN_10a6c9c0c(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  FUN_10a6c9ba4(param_2,param_3);
  FUN_10a052e3c(param_5);
  FUN_10a05b924(param_1,param_2,plVar4 + 0x11);
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



/* Entry: 10a6c9cc4; end: 10a6c9d83;  */

void FUN_10a6c9cc4(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  FUN_10a6c9ba4(param_2,param_3);
  FUN_10a052e3c(param_5);
  FUN_10a07b090(param_1,param_2,plVar4[0x13],plVar4[0x14] - plVar4[0x13] >> 3);
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



/* Entry: 10a6c9d84; end: 10a6c9e4f;  */

void FUN_10a6c9d84(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  FUN_10a6c9ba4(param_2,param_3);
  FUN_10a052e3c(param_5);
  if (plVar4[0x18] == 0) {
    *param_1 = 1;
  }
  else {
    func_0x0001098849a4(param_1,param_2,*(undefined8 *)(plVar4[0x18] + 0x10));
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



/* Entry: 10a6c9e50; end: 10a6c9f1b;  */

void FUN_10a6c9e50(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  FUN_10a6c9ba4(param_2,param_3);
  FUN_10a052e3c(param_5);
  if (plVar4[0x1a] == 0) {
    *param_1 = 1;
  }
  else {
    func_0x0001098849a4(param_1,param_2,*(undefined8 *)(plVar4[0x1a] + 0x10));
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



/* Entry: 10a6c9f1c; end: 10a6c9fe7;  */

void FUN_10a6c9f1c(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  FUN_10a6c9ba4(param_2,param_3);
  FUN_10a052e3c(param_5);
  if (plVar4[0x1c] == 0) {
    *param_1 = 1;
  }
  else {
    func_0x0001098849a4(param_1,param_2,*(undefined8 *)(plVar4[0x1c] + 0x10));
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



/* Entry: 10a6c9fe8; end: 10a6ca0b3;  */

void FUN_10a6c9fe8(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  FUN_10a6c9ba4(param_2,param_3);
  FUN_10a052e3c(param_5);
  if (plVar4[0x1e] == 0) {
    *param_1 = 1;
  }
  else {
    func_0x0001098849a4(param_1,param_2,*(undefined8 *)(plVar4[0x1e] + 0x10));
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



/* Entry: 10a6ca0b4; end: 10a6ca17f;  */

void FUN_10a6ca0b4(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  FUN_10a6c9ba4(param_2,param_3);
  FUN_10a052e3c(param_5);
  if (plVar4[0x20] == 0) {
    *param_1 = 1;
  }
  else {
    func_0x0001098849a4(param_1,param_2,*(undefined8 *)(plVar4[0x20] + 0x10));
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



/* Entry: 10a6ca180; end: 10a6ca1bf;  */

void FUN_10a6ca180(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 != 0) {
    FUN_109fff0a0(lVar1,*(undefined8 *)(lVar1 + 8));
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(lVar1);
    return;
  }
  return;
}



/* Entry: 10a6ca1c0; end: 10a6ca44f;  */

void FUN_10a6ca1c0(undefined8 param_1,long *param_2,undefined8 param_3,uint *param_4,ulong param_5)

{
  uint *puVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  long lVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  undefined *puVar15;
  ulong uVar16;
  long *plVar17;
  ulong uVar18;
  uint auStack_c0 [2];
  undefined8 *puStack_b8;
  undefined8 uStack_b0;
  long *plStack_a8;
  char cStack_99;
  undefined **ppuStack_98;
  ulong uStack_90;
  long lStack_88;
  long lStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
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
  FUN_10a6ca450(param_2,param_3);
  FUN_10a6ca4b8(param_5);
  auStack_c0[0] = 0;
  puVar1 = auStack_c0;
  if (param_5 != 0) {
    puVar1 = param_4;
  }
  if (*puVar1 < 2) {
    plVar17 = (long *)0x0;
  }
  else {
    plVar17 = param_2;
    func_0x00010a6ca570();
  }
  puVar1 = auStack_c0;
  if (1 < param_5) {
    puVar1 = param_4 + 4;
  }
  if (((*puVar1 < 2) || (plVar8 = param_2, func_0x00010a6ca570(), plVar17 == (long *)0x0)) ||
     (plVar8 == (long *)0x0)) {
    uStack_b0 = 0;
    plStack_a8 = (long *)0x0;
  }
  else {
    ppuStack_98 = &PTR_DAT_110b19328;
    uStack_90 = 0;
    lStack_88 = 0;
    lStack_80 = 0;
    puStack_78 = &DAT_11383d918;
    puStack_70 = &DAT_11383d918;
    plStack_68 = (long *)&DAT_11383d918;
    FUN_10aaea134(&uStack_b0,plVar17);
    func_0x000107c3024c(&puStack_70,&uStack_b0,0);
    if (cStack_99 < '\0') {
      __ZdlPv(uStack_b0);
    }
    FUN_10aaea134(&uStack_b0,plVar8);
    uVar9 = uStack_90;
    if ((uStack_90 & 1) != 0) {
      uVar9 = *(ulong *)(uStack_90 & 0xfffffffffffffffe);
    }
    func_0x000107c3024c(&stack0xffffffffffffffa0,&uStack_b0,uVar9);
    if (cStack_99 < '\0') {
      __ZdlPv(uStack_b0);
    }
    FUN_10a6b35d4(&uStack_b0,plVar7[3],&ppuStack_98);
    func_0x0001098ce538(&ppuStack_98);
  }
  if ((3 < (int)auStack_c0[0]) && (puStack_b8 != (undefined8 *)0x0)) {
    (**(code **)*puStack_b8)();
  }
  FUN_10a6ca4e0(param_1,param_2,&uStack_b0);
  plVar7 = plStack_a8;
  if (plStack_a8 != (long *)0x0) {
    plVar17 = plStack_a8 + 1;
    do {
      lVar11 = *plVar17;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar17,0x10);
      if (bVar3) {
        *plVar17 = lVar11 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar11 == 0) {
      (**(code **)(*plStack_a8 + 0x10))(plStack_a8);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
    }
  }
  plVar7 = plVar6 + 0x4b;
  lVar11 = plVar6[0x59];
  uVar9 = lVar11 - 1;
  plVar6[0x59] = uVar9;
  if (uVar9 < 8) {
    uVar9 = plVar7[lVar11 + 2];
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
  lVar11 = *plVar7;
  lVar14 = plVar6[0x4c];
  lVar12 = lVar14 - lVar11;
  uVar16 = lVar12 >> 4;
  if (uVar16 < uVar9) {
    uVar18 = uVar9 - uVar16;
    puVar15 = (undefined *)plVar6[0x4d];
    if ((ulong)((long)puVar15 - lVar14 >> 4) < uVar18) {
      if (uVar9 >> 0x3c == 0) {
        uVar10 = (long)puVar15 - lVar11 >> 3;
        if (uVar10 <= uVar9) {
          uVar10 = uVar9;
        }
        if (0x7fffffffffffffef < (ulong)((long)puVar15 - lVar11)) {
          uVar10 = 0xfffffffffffffff;
        }
        plStack_68 = plVar7;
        if (uVar10 >> 0x3c == 0) {
          lVar5 = uVar10 << 4;
          __Znwm();
          lVar14 = lVar5 + lVar12;
          _bzero(lVar14,uVar18 * 0x10);
          lVar13 = lVar14 + uVar16 * -0x10;
          _memcpy(lVar13,lVar11,lVar12);
          *plVar7 = lVar13;
          plVar6[0x4c] = lVar14 + uVar18 * 0x10;
          plVar6[0x4d] = lVar5 + uVar10 * 0x10;
          lStack_88 = lVar11;
          lStack_80 = lVar11;
          puStack_78 = (undefined *)lVar11;
          puStack_70 = puVar15;
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
    _bzero(lVar14,uVar18 * 0x10);
    plVar6[0x4c] = lVar14 + uVar18 * 0x10;
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



/* Entry: 10a6ca450; end: 10a6ca4b7;  */

void FUN_10a6ca450(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  undefined **ppuStack_68;
  undefined8 uStack_60;
  long *plStack_58;
  
  lVar8 = param_1;
  func_0x000109898688();
  if (lVar8 != 0) {
    FUN_10a052c2c(param_1,lVar8);
    if ((param_1 != 0) && (___dynamic_cast(), param_1 != 0)) {
      return;
    }
    func_0x00010988bd28(&UNK_10f685496);
  }
  puVar5 = (undefined8 *)&UNK_10f68f52e;
  func_0x00010988bd28();
  if (((uint)puVar5 != 2) && (1 < (uint)puVar5)) {
    uVar6 = 2;
    uVar7 = 2;
    FUN_10a052ee0(2,2);
    plStack_58 = (long *)puVar5[1];
    uStack_60 = *puVar5;
    *puVar5 = 0;
    puVar5[1] = 0;
    ppuStack_68 = &PTR_DAT_110c10640;
    func_0x000109899de4(uVar6,uVar7,&uStack_60,&ppuStack_68,0,0);
    plVar4 = plStack_58;
    if (plStack_58 != (long *)0x0) {
      plVar1 = plStack_58 + 1;
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
        (**(code **)(*plStack_58 + 0x10))(plStack_58);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
      }
    }
    return;
  }
  return;
}



/* Entry: 10a6ca4b8; end: 10a6ca4df;  */

void FUN_10a6ca4b8(undefined8 *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  undefined **ppuStack_48;
  undefined8 uStack_40;
  long *plStack_38;
  
  if (((uint)param_1 != 2) && (1 < (uint)param_1)) {
    uVar5 = 2;
    uVar6 = 2;
    FUN_10a052ee0(2,2);
    plStack_38 = (long *)param_1[1];
    uStack_40 = *param_1;
    *param_1 = 0;
    param_1[1] = 0;
    ppuStack_48 = &PTR_DAT_110c10640;
    func_0x000109899de4(uVar5,uVar6,&uStack_40,&ppuStack_48,0,0);
    plVar4 = plStack_38;
    if (plStack_38 != (long *)0x0) {
      plVar1 = plStack_38 + 1;
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
        (**(code **)(*plStack_38 + 0x10))(plStack_38);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
      }
    }
    return;
  }
  return;
}



/* Entry: 10a6ca4e0; end: 10a6ca5a7;  */

void FUN_10a6ca4e0(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  undefined **ppuStack_38;
  undefined8 uStack_30;
  long *plStack_28;
  
  plStack_28 = (long *)param_3[1];
  uStack_30 = *param_3;
  *param_3 = 0;
  param_3[1] = 0;
  ppuStack_38 = &PTR_DAT_110c10640;
  func_0x000109899de4(param_1,param_2,&uStack_30,&ppuStack_38,0,0);
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
  return;
}



/* Entry: 10a6ca5a8; end: 10a6ca5e7;  */

void FUN_10a6ca5a8(long param_1,undefined **param_2,undefined **param_3,undefined8 param_4)

{
  char cVar1;
  bool bVar2;
  code *pcVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  ulong uVar8;
  undefined8 extraout_x8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long *plVar15;
  ulong uVar16;
  ulong uVar17;
  long lStack_98;
  long lStack_90;
  long lStack_88;
  long lStack_80;
  long *plStack_78;
  long *in_stack_ffffffffffffff98;
  long *in_stack_ffffffffffffffa8;
  
  FUN_10a053854();
  if (param_1 != 0) {
    param_2 = &PTR_DAT_110b178e0;
    param_3 = &PTR_DAT_110c46558;
    param_4 = 0x10;
    ___dynamic_cast();
    if (param_1 != 0) {
      return;
    }
  }
  plVar5 = (long *)&UNK_10f685496;
  func_0x00010988bd28();
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
  FUN_10a6ca450(plVar5,param_2);
  FUN_10a6ca774(param_4);
  if (*(uint *)param_3 < 2) {
    plVar15 = (long *)0x0;
  }
  else {
    plVar15 = plVar5;
    FUN_10a373c54(plVar5,param_3);
  }
  FUN_10a1f7d54(&stack0xffffffffffffffa0,plVar5,param_3 + 2);
  FUN_10a6b40c4(&stack0xffffffffffffff90,plVar7,plVar15,&stack0xffffffffffffffa0);
  if (in_stack_ffffffffffffffa8 != (long *)0x0) {
    plVar7 = in_stack_ffffffffffffffa8 + 1;
    do {
      lVar10 = *plVar7;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar2) {
        *plVar7 = lVar10 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar10 == 0) {
      (**(code **)(*in_stack_ffffffffffffffa8 + 0x10))(in_stack_ffffffffffffffa8);
      __ZNSt3__119__shared_weak_count14__release_weakEv(in_stack_ffffffffffffffa8);
    }
  }
  FUN_10a6ca4e0(extraout_x8,plVar5,&stack0xffffffffffffff90);
  if (in_stack_ffffffffffffff98 != (long *)0x0) {
    plVar5 = in_stack_ffffffffffffff98 + 1;
    do {
      lVar10 = *plVar5;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar2) {
        *plVar5 = lVar10 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar10 == 0) {
      (**(code **)(*in_stack_ffffffffffffff98 + 0x10))(in_stack_ffffffffffffff98);
      __ZNSt3__119__shared_weak_count14__release_weakEv(in_stack_ffffffffffffff98);
    }
  }
  plVar5 = plVar6 + 0x4b;
  lVar10 = plVar6[0x59];
  uVar8 = lVar10 - 1;
  plVar6[0x59] = uVar8;
  if (uVar8 < 8) {
    uVar8 = plVar5[lVar10 + 2];
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
  lVar10 = *plVar5;
  lVar13 = plVar6[0x4c];
  lVar11 = lVar13 - lVar10;
  uVar16 = lVar11 >> 4;
  if (uVar16 < uVar8) {
    uVar17 = uVar8 - uVar16;
    lVar14 = plVar6[0x4d];
    if ((ulong)(lVar14 - lVar13 >> 4) < uVar17) {
      if (uVar8 >> 0x3c == 0) {
        uVar9 = lVar14 - lVar10 >> 3;
        if (uVar9 <= uVar8) {
          uVar9 = uVar8;
        }
        if (0x7fffffffffffffef < (ulong)(lVar14 - lVar10)) {
          uVar9 = 0xfffffffffffffff;
        }
        plStack_78 = plVar5;
        if (uVar9 >> 0x3c == 0) {
          lVar4 = uVar9 << 4;
          __Znwm();
          lVar13 = lVar4 + lVar11;
          _bzero(lVar13,uVar17 * 0x10);
          lVar12 = lVar13 + uVar16 * -0x10;
          _memcpy(lVar12,lVar10,lVar11);
          *plVar5 = lVar12;
          plVar6[0x4c] = lVar13 + uVar17 * 0x10;
          plVar6[0x4d] = lVar4 + uVar9 * 0x10;
          lStack_98 = lVar10;
          lStack_90 = lVar10;
          lStack_88 = lVar10;
          lStack_80 = lVar14;
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
    _bzero(lVar13,uVar17 * 0x10);
    plVar6[0x4c] = lVar13 + uVar17 * 0x10;
  }
  else if (uVar8 < uVar16) {
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



/* Entry: 10a6ca5e8; end: 10a6ca773;  */

void FUN_10a6ca5e8(undefined8 param_1,long *param_2,undefined8 param_3,uint *param_4,
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
  long *plVar14;
  ulong uVar15;
  ulong uVar16;
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
  FUN_10a6ca450(param_2,param_3);
  FUN_10a6ca774(param_5);
  if (*param_4 < 2) {
    plVar14 = (long *)0x0;
  }
  else {
    plVar14 = param_2;
    FUN_10a373c54(param_2,param_4);
  }
  FUN_10a1f7d54(&stack0xffffffffffffffb0,param_2,param_4 + 4);
  FUN_10a6b40c4(&stack0xffffffffffffffa0,plVar6,plVar14,&stack0xffffffffffffffb0);
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
  FUN_10a6ca4e0(param_1,param_2,&stack0xffffffffffffffa0);
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
  uVar15 = lVar10 >> 4;
  if (uVar15 < uVar7) {
    uVar16 = uVar7 - uVar15;
    lVar13 = plVar5[0x4d];
    if ((ulong)(lVar13 - lVar12 >> 4) < uVar16) {
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
          _bzero(lVar12,uVar16 * 0x10);
          lVar11 = lVar12 + uVar15 * -0x10;
          _memcpy(lVar11,lVar9,lVar10);
          *plVar6 = lVar11;
          plVar5[0x4c] = lVar12 + uVar16 * 0x10;
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
    _bzero(lVar12,uVar16 * 0x10);
    plVar5[0x4c] = lVar12 + uVar16 * 0x10;
  }
  else if (uVar7 < uVar15) {
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



/* Entry: 10a6ca774; end: 10a6ca797;  */

void FUN_10a6ca774(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  code *pcVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  undefined8 uVar5;
  long lVar6;
  ulong uVar7;
  undefined8 extraout_x8;
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
  FUN_10a6ca850(extraout_x8,plVar3,FUN_10a6b4608,0,uVar5,param_1,param_4);
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



/* Entry: 10a6ca798; end: 10a6ca84f;  */

void FUN_10a6ca798(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  FUN_10a6ca850(param_1,param_2,FUN_10a6b4608,0,param_3,param_4,param_5);
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



/* Entry: 10a6ca850; end: 10a6ca92f;  */

void FUN_10a6ca850(undefined4 *param_1,long param_2,code *param_3,ulong param_4,undefined8 param_5,
                  undefined8 param_6,undefined8 param_7)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined1 auStack_60 [8];
  long *plStack_58;
  
  lVar4 = param_2;
  FUN_10a6ca450(param_2,param_5);
  FUN_10a382e74(param_7);
  FUN_10a382e98(auStack_60,param_2,param_6);
  plVar1 = (long *)(lVar4 + ((long)param_4 >> 1));
  if ((param_4 & 1) != 0) {
    param_3 = *(code **)(*plVar1 + ((ulong)param_3 & 0xffffffff));
  }
  (*param_3)(plVar1,auStack_60);
  if (plStack_58 != (long *)0x0) {
    plVar1 = plStack_58 + 1;
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
      (**(code **)(*plStack_58 + 0x10))(plStack_58);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_58);
    }
  }
  *param_1 = 0;
  return;
}



/* Entry: 10a6ca930; end: 10a6cae7f;  */

/* WARNING: Possible PIC construction at 0x00010a6cae74: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010a6cae78) */
/* WARNING: Removing unreachable block (ram,0x00010a6cae8c) */
/* WARNING: Removing unreachable block (ram,0x00010bdbd2e4) */
/* WARNING: Removing unreachable block (ram,0x00010a6cae88) */

void FUN_10a6ca930(undefined4 *param_1,long ****param_2,undefined8 param_3,int *param_4,
                  undefined8 param_5)

{
  undefined1 *puVar1;
  long *****ppppplVar2;
  long lVar3;
  char cVar4;
  bool bVar5;
  code *pcVar6;
  long lVar7;
  long ****pppplVar8;
  long ****pppplVar9;
  long ****pppplVar10;
  long ***ppplVar11;
  long *****ppppplVar12;
  long *****ppppplVar13;
  long *****ppppplVar14;
  long ***ppplVar15;
  long ****pppplVar16;
  long ***ppplVar17;
  long ****pppplVar18;
  long ****unaff_x19;
  long *****unaff_x20;
  long *****unaff_x21;
  long lVar19;
  long *****unaff_x22;
  long *****ppppplVar20;
  long *****unaff_x23;
  long ***ppplVar21;
  long *****unaff_x24;
  long *****ppppplVar22;
  long ***ppplVar23;
  long *****unaff_x25;
  long *****ppppplVar24;
  ulong uVar25;
  long ****unaff_x26;
  long *****unaff_x27;
  long *****ppppplVar26;
  long ****unaff_x28;
  undefined1 *unaff_x29;
  undefined8 unaff_x30;
  long **pplStack_1d0;
  long *plStack_1c8;
  long ***ppplStack_1c0;
  undefined4 *puStack_1b0;
  long ****pppplStack_1a8;
  long ****pppplStack_1a0;
  long ****pppplStack_198;
  long ****pppplStack_190;
  long ***ppplStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  long ****pppplStack_170;
  long ****pppplStack_168;
  long ***ppplStack_160;
  int iStack_158;
  undefined4 uStack_154;
  long ***appplStack_150 [7];
  undefined8 uStack_118;
  long ***ppplStack_110;
  undefined **ppuStack_108;
  long ***ppplStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  long ****pppplStack_d0;
  long ****pppplStack_c8;
  long ***ppplStack_c0;
  long ***ppplStack_b8;
  undefined8 uStack_88;
  long lStack_78;
  
  puVar1 = &stack0xfffffffffffffff0;
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pppplVar8 = param_2;
  (*(code *)(*param_2)[0xb])();
  if (pppplVar8[0x59] < (long ***)0x8) {
    pppplVar8[(long)pppplVar8[0x59] + 0x4e] = pppplVar8[0x5a];
    pppplVar8[0x59] = (long ***)((long)pppplVar8[0x59] + 1);
  }
  else {
    func_0x00010988bfcc(pppplVar8 + 0x4b);
  }
  pppplVar9 = param_2;
  FUN_10a6ca450(param_2,param_3);
  FUN_10a6cae80(param_5);
  if (*param_4 == 7) {
    pppplVar10 = param_2;
    (*(code *)(*param_2)[0x13])(param_2,*(undefined8 *)(param_4 + 2));
    pppplVar16 = param_2;
    ppplStack_110 = (long ***)pppplVar10;
    (*(code *)(*param_2)[0x45])(param_2,&ppplStack_110);
    if ((int)pppplVar16 != 0) {
      pppplVar10 = param_2;
      (*(code *)(*param_2)[0xb])();
      ppplVar11 = pppplVar10[0x48];
      if ((ppplVar11 == (long ***)0x0) ||
         (___dynamic_cast(ppplVar11,&PTR_DAT_110b9fb60,&PTR_DAT_110b9fb70,0),
         ppplVar15 = ppplStack_110, ppplVar11 == (long ***)0x0)) {
        func_0x00010988bd28(&UNK_10f685540);
        goto LAB_10a6cadbc;
      }
      ppplStack_110 = (long ***)0x0;
      iStack_158 = 7;
      appplStack_150[0] = ppplVar15;
      ppplStack_160 = (long ***)param_2;
      FUN_10a688ac0(&pppplStack_d0,&ppplStack_160,ppplVar11[1]);
      if ((3 < iStack_158) && ((long ****)appplStack_150[0] != (long ****)0x0)) {
        (*(code *)**appplStack_150[0])();
      }
    }
    if ((long ****)ppplStack_110 != (long ****)0x0) {
      (*(code *)**ppplStack_110)();
    }
    if (((ulong)pppplVar16 & 1) != 0) {
      ppppplVar12 = (long *****)0x60;
      __Znwm();
      pppplVar10 = &ppplStack_110;
      ppppplVar24 = ppppplVar12 + 1;
      *ppppplVar24 = (long ****)0x0;
      ppppplVar12[2] = (long ****)0x0;
      *ppppplVar12 = (long ****)&PTR_FUN_110c10fc8;
      ppppplVar14 = ppppplVar12 + 3;
      ppppplVar12[4] = pppplStack_c8;
      *ppppplVar14 = pppplStack_d0;
      if ((long *****)pppplStack_c8 != (long *****)0x0) {
        ppppplVar22 = (long *****)(pppplStack_c8 + 1);
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(ppppplVar22,0x10);
          if (bVar5) {
            *ppppplVar22 = (long ****)((long)*ppppplVar22 + 1);
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
      }
      ppppplVar12[6] = (long ****)ppplStack_b8;
      ppppplVar12[5] = (long ****)ppplStack_c0;
      if ((long ****)ppplStack_b8 != (long ****)0x0) {
        pppplVar16 = (long ****)(ppplStack_b8 + 2);
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(pppplVar16,0x10);
          if (bVar5) {
            *pppplVar16 = (long ***)((long)*pppplVar16 + 1);
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
      }
      *(undefined1 *)(ppppplVar12 + 0xb) = 2;
      ppppplVar13 = &pppplStack_d0;
      pppplStack_1a8 = (long ****)ppppplVar14;
      pppplStack_1a0 = (long ****)ppppplVar12;
      FUN_10a688c1c();
      ppppplVar22 = (long *****)pppplVar9[4];
      ppppplVar20 = (long *****)(*ppppplVar22)[0x128];
      ppppplVar26 = unaff_x27;
      pppplVar9 = unaff_x28;
      if (ppppplVar20 != (long *****)0x0) {
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(ppppplVar24,0x10);
          if (bVar5) {
            *ppppplVar24 = (long ****)((long)*ppppplVar24 + 1);
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        pppplStack_170 = (long ****)ppppplVar14;
        pppplStack_168 = (long ****)ppppplVar12;
        FUN_10a6c5b5c(&ppplStack_188,ppppplVar22[1],ppppplVar14,ppppplVar12);
        FUN_10a3bf120(&ppplStack_160);
        ppplVar11 = (*ppppplVar22)[0x20];
        ppppplVar14 = (long *****)0x138;
        puStack_1b0 = param_1;
        __Znwm();
        pppplStack_d0 = (long ****)ppplStack_160;
        ppppplVar26 = ppppplVar14 + 1;
        *ppppplVar26 = (long ****)0x0;
        ppppplVar14[2] = (long ****)0x0;
        *ppppplVar14 = (long ****)&PTR_FUN_110b9f3b0;
        ppppplVar22 = ppppplVar14 + 3;
        pppplStack_c8 = (long ****)CONCAT44(uStack_154,iStack_158);
        ppplStack_160 = (long ***)0x0;
        (*(code *)appplStack_150[0][2])(&ppplStack_c0,appplStack_150);
        uStack_88 = uStack_118;
        plStack_1c8 = (long *)ppplVar11[0x42];
        pplStack_1d0 = ppplVar11[0x41];
        if (-1 < (char)*(byte *)((long)ppplVar11 + 0x21f)) {
          plStack_1c8 = (long *)(ulong)*(byte *)((long)ppplVar11 + 0x21f);
          pplStack_1d0 = (long **)(ppplVar11 + 0x41);
        }
        pppplVar9 = &ppplStack_110;
        ppplStack_110 = (long ***)FUN_10a6c5d48;
        ppuStack_108 = &PTR_DAT_110c10dd8;
        ppplStack_100 = ppplStack_188;
        uStack_f0 = uStack_178;
        uStack_f8 = uStack_180;
        uStack_180 = 0;
        uStack_178 = 0;
        ppplStack_1c0 = (long ***)pppplVar9;
        FUN_10a23708c(ppppplVar22,&UNK_10e4d3f09,0x28,&UNK_10f647b45,3,&pppplStack_d0,0);
        (*(code *)*ppuStack_108)(&ppuStack_108);
        FUN_10a042634(&pppplStack_d0);
        pppplStack_198 = (long ****)ppppplVar22;
        pppplStack_190 = (long ****)ppppplVar14;
        FUN_10a042634(&ppplStack_160);
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(ppppplVar26,0x10);
          if (bVar5) {
            *ppppplVar26 = (long ****)((long)*ppppplVar26 + 1);
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        pppplStack_d0 = (long ****)ppppplVar22;
        pppplStack_c8 = (long ****)ppppplVar14;
        FUN_10a25f3f4(ppppplVar20,&pppplStack_d0);
        do {
          pppplVar16 = *ppppplVar26;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(ppppplVar26,0x10);
          if (bVar5) {
            *ppppplVar26 = (long ****)((long)pppplVar16 + -1);
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (pppplVar16 == (long ****)0x0) {
          (*(code *)(*ppppplVar14)[2])(ppppplVar14);
          __ZNSt3__119__shared_weak_count14__release_weakEv(ppppplVar14);
        }
        pppplVar16 = pppplStack_190;
        param_1 = puStack_1b0;
        if ((long *****)pppplStack_190 != (long *****)0x0) {
          ppppplVar13 = (long *****)(pppplStack_190 + 1);
          do {
            pppplVar18 = *ppppplVar13;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(ppppplVar13,0x10);
            if (bVar5) {
              *ppppplVar13 = (long ****)((long)pppplVar18 + -1);
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (pppplVar18 == (long ****)0x0) {
            (*(code *)(*pppplStack_190)[2])(pppplStack_190);
            __ZNSt3__119__shared_weak_count14__release_weakEv(pppplVar16);
          }
        }
        ppppplVar13 = (long *****)&ppplStack_188;
        FUN_10a6c6334();
        ppppplVar20 = (long *****)pppplStack_168;
        if ((long *****)pppplStack_168 != (long *****)0x0) {
          ppppplVar2 = (long *****)(pppplStack_168 + 1);
          do {
            pppplVar16 = *ppppplVar2;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(ppppplVar2,0x10);
            if (bVar5) {
              *ppppplVar2 = (long ****)((long)pppplVar16 + -1);
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (pppplVar16 == (long ****)0x0) {
            (*(code *)(*pppplStack_168)[2])(pppplStack_168);
            ppppplVar13 = ppppplVar20;
            __ZNSt3__119__shared_weak_count14__release_weakEv();
          }
        }
      }
      do {
        pppplVar16 = *ppppplVar24;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(ppppplVar24,0x10);
        if (bVar5) {
          *ppppplVar24 = (long ****)((long)pppplVar16 + -1);
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (pppplVar16 == (long ****)0x0) {
        (*(code *)(*ppppplVar12)[2])(ppppplVar12);
        ppppplVar13 = ppppplVar12;
        __ZNSt3__119__shared_weak_count14__release_weakEv();
      }
      *param_1 = 0;
      if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_78) {
        ___stack_chk_fail();
        FUN_10a05bd88(&pppplStack_d0);
        FUN_10a05bd88(&pppplStack_198);
        FUN_10a6c6334(&ppplStack_188);
        func_0x00010a6c63b4(&pppplStack_170);
        func_0x00010a6c63b4(&pppplStack_1a8);
        unaff_x30 = 0x10a6cae78;
        register0x00000008 = (BADSPACEBASE *)&pplStack_1d0;
        unaff_x19 = pppplVar8;
        unaff_x20 = ppppplVar13;
        unaff_x21 = ppppplVar12;
        unaff_x22 = ppppplVar20;
        unaff_x23 = ppppplVar14;
        unaff_x24 = ppppplVar22;
        unaff_x25 = ppppplVar24;
        unaff_x26 = pppplVar10;
        unaff_x27 = ppppplVar26;
        unaff_x28 = pppplVar9;
        unaff_x29 = puVar1;
      }
      pppplVar9 = pppplVar8 + 0x4b;
      ppplVar11 = pppplVar8[0x59];
      ppplVar15 = (long ***)((long)ppplVar11 - 1);
      pppplVar8[0x59] = ppplVar15;
      if (ppplVar15 < (long ***)0x8) {
        ppplVar11 = pppplVar9[(long)ppplVar11 + 2];
        if (pppplVar8[0x5a] == ppplVar11) {
          return;
        }
      }
      else {
        ppplVar11 = (long ***)pppplVar8[0x57][-1];
        pppplVar8[0x57] = pppplVar8[0x57] + -1;
        if (pppplVar8[0x5a] == ppplVar11) {
          return;
        }
      }
      *(long *****)((long)register0x00000008 + -0x60) = unaff_x28;
      *(long ******)((long)register0x00000008 + -0x58) = unaff_x27;
      *(long *****)((long)register0x00000008 + -0x50) = unaff_x26;
      *(long ******)((long)register0x00000008 + -0x48) = unaff_x25;
      *(long ******)((long)register0x00000008 + -0x40) = unaff_x24;
      *(long ******)((long)register0x00000008 + -0x38) = unaff_x23;
      *(long ******)((long)register0x00000008 + -0x30) = unaff_x22;
      *(long ******)((long)register0x00000008 + -0x28) = unaff_x21;
      *(long ******)((long)register0x00000008 + -0x20) = unaff_x20;
      *(long *****)((long)register0x00000008 + -0x18) = unaff_x19;
      *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
      *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
      ppplVar15 = *pppplVar9;
      ppplVar17 = pppplVar8[0x4c];
      lVar19 = (long)ppplVar17 - (long)ppplVar15;
      ppplVar23 = (long ***)(lVar19 >> 4);
      if (ppplVar23 < ppplVar11) {
        uVar25 = (long)ppplVar11 - (long)ppplVar23;
        ppplVar21 = pppplVar8[0x4d];
        if ((ulong)((long)ppplVar21 - (long)ppplVar17 >> 4) < uVar25) {
          if ((ulong)ppplVar11 >> 0x3c == 0) {
            ppplVar17 = (long ***)((long)ppplVar21 - (long)ppplVar15 >> 3);
            if (ppplVar17 <= ppplVar11) {
              ppplVar17 = ppplVar11;
            }
            if (0x7fffffffffffffef < (ulong)((long)ppplVar21 - (long)ppplVar15)) {
              ppplVar17 = (long ***)0xfffffffffffffff;
            }
            *(long *****)((long)register0x00000008 + -0x68) = pppplVar9;
            if ((ulong)ppplVar17 >> 0x3c == 0) {
              lVar7 = (long)ppplVar17 << 4;
              __Znwm();
              lVar3 = lVar7 + lVar19;
              _bzero(lVar3,uVar25 * 0x10);
              ppplVar23 = (long ***)(lVar3 + (long)ppplVar23 * -0x10);
              _memcpy(ppplVar23,ppplVar15,lVar19);
              *pppplVar9 = ppplVar23;
              pppplVar8[0x4c] = (long ***)(lVar3 + uVar25 * 0x10);
              pppplVar8[0x4d] = (long ***)(lVar7 + (long)ppplVar17 * 0x10);
              *(long ****)((long)register0x00000008 + -0x78) = ppplVar15;
              *(long ****)((long)register0x00000008 + -0x70) = ppplVar21;
              *(long ****)((long)register0x00000008 + -0x88) = ppplVar15;
              *(long ****)((long)register0x00000008 + -0x80) = ppplVar15;
              func_0x00010988c1b8((undefined1 *)((long)register0x00000008 + -0x88));
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
        _bzero(ppplVar17,uVar25 * 0x10);
        pppplVar8[0x4c] = ppplVar17 + uVar25 * 2;
      }
      else if (ppplVar11 < ppplVar23) {
        while (ppplVar17 != ppplVar15 + (long)ppplVar11 * 2) {
          ppplVar17 = ppplVar17 + -2;
          func_0x00010988c204(ppplVar17);
        }
        pppplVar8[0x4c] = ppplVar15 + (long)ppplVar11 * 2;
      }
code_r0x00010988c138:
      pppplVar8[0x5a] = ppplVar11;
      return;
    }
  }
  func_0x00010988bd28(&UNK_10f6347ad);
LAB_10a6cadbc:
                    /* WARNING: Does not return */
  pcVar6 = (code *)SoftwareBreakpoint(1,0x10a6cadc0);
  (*pcVar6)();
}



/* Entry: 10a6cae80; end: 10a6caea3;  */

void FUN_10a6cae80(undefined8 param_1)

{
  undefined8 *puVar1;
  
  if ((int)param_1 == 1) {
    return;
  }
  puVar1 = (undefined8 *)0x1;
  FUN_10a052ee0(1,0,param_1);
  *puVar1 = &PTR_FUN_110c10fc8;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10a6caea4; end: 10a6caeb3;  */

void FUN_10a6caea4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c10fc8;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10a6caeb4; end: 10a6caed3;  */

void FUN_10a6caeb4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c10fc8;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a6caed4; end: 10a6caefb;  */

undefined1  [16] FUN_10a6caed4(long param_1)

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
    UNRECOVERED_JUMPTABLE = (code *)SoftwareBreakpoint(1,0x10a6caef8);
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



/* Entry: 10a6caefc; end: 10a6cafb3;  */

void FUN_10a6caefc(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  FUN_10a6ca850(param_1,param_2,FUN_10a6b48f4,0,param_3,param_4,param_5);
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



/* Entry: 10a6cafb4; end: 10a6cb447;  */

/* WARNING: Possible PIC construction at 0x00010a6cb43c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010a6cb440) */
/* WARNING: Removing unreachable block (ram,0x00010a6cb454) */
/* WARNING: Removing unreachable block (ram,0x00010a6cb488) */
/* WARNING: Removing unreachable block (ram,0x00010a6cb4c4) */
/* WARNING: Removing unreachable block (ram,0x00010a6cb4dc) */
/* WARNING: Removing unreachable block (ram,0x00010a6cb4f8) */
/* WARNING: Removing unreachable block (ram,0x00010a6cb52c) */
/* WARNING: Removing unreachable block (ram,0x00010a6cb534) */
/* WARNING: Removing unreachable block (ram,0x00010a6cb540) */
/* WARNING: Removing unreachable block (ram,0x00010a6cb548) */
/* WARNING: Removing unreachable block (ram,0x00010a6cb554) */
/* WARNING: Removing unreachable block (ram,0x00010a6cb5e4) */
/* WARNING: Removing unreachable block (ram,0x00010a6cb5f0) */
/* WARNING: Removing unreachable block (ram,0x00010a6cb558) */
/* WARNING: Removing unreachable block (ram,0x00010a6cb584) */
/* WARNING: Removing unreachable block (ram,0x00010a6cb588) */
/* WARNING: Removing unreachable block (ram,0x00010a6cb590) */
/* WARNING: Removing unreachable block (ram,0x00010a6cb598) */
/* WARNING: Removing unreachable block (ram,0x00010a6cb5a8) */
/* WARNING: Removing unreachable block (ram,0x00010a6cb5ac) */
/* WARNING: Removing unreachable block (ram,0x00010a6cb5b4) */
/* WARNING: Removing unreachable block (ram,0x00010a6cb5bc) */
/* WARNING: Removing unreachable block (ram,0x00010a6cb450) */

void FUN_10a6cafb4(undefined4 *param_1,long *param_2,undefined8 param_3,undefined4 *param_4,
                  long *param_5)

{
  undefined1 *puVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  code *pcVar5;
  long lVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  long *unaff_x19;
  long *unaff_x20;
  long **unaff_x21;
  long lVar13;
  long *unaff_x22;
  long *plVar14;
  long lVar15;
  long *unaff_x23;
  long lVar16;
  long *unaff_x24;
  ulong uVar17;
  code **unaff_x25;
  long lVar18;
  code **ppcVar19;
  ulong uVar20;
  long unaff_x26;
  undefined8 unaff_x27;
  undefined8 unaff_x28;
  undefined1 *unaff_x29;
  undefined8 unaff_x30;
  long lStack_1e0;
  ulong uStack_1d8;
  code **ppcStack_1d0;
  undefined8 uStack_1c0;
  long *plStack_1b8;
  undefined8 uStack_1b0;
  long *plStack_1a8;
  long *plStack_198;
  long *plStack_190;
  long lStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  long *plStack_170;
  undefined8 uStack_168;
  long *plStack_160;
  undefined8 uStack_158;
  long *plStack_150;
  long *plStack_148;
  undefined8 uStack_140;
  long alStack_138 [7];
  undefined8 uStack_100;
  code *pcStack_f8;
  undefined **ppuStack_f0;
  long lStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  long *plStack_b8;
  long *plStack_b0;
  undefined1 auStack_a8 [56];
  undefined8 uStack_70;
  long lStack_68;
  
  puVar1 = &stack0xfffffffffffffff0;
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
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
  FUN_10a6ca450(param_2,param_3);
  FUN_10a6cb448(param_5);
  FUN_10a6cb46c(&uStack_1b0,param_2,*param_4,*(undefined8 *)(param_4 + 2));
  FUN_10a6cb688(&uStack_1c0,param_2,param_4 + 4);
  plVar14 = (long *)plVar8[4];
  lVar13 = *(long *)(*plVar14 + 0x940);
  ppcVar19 = unaff_x25;
  lVar10 = unaff_x26;
  if (lVar13 != 0) {
    plStack_160 = plStack_1a8;
    uStack_168 = uStack_1b0;
    if (plStack_1a8 != (long *)0x0) {
      plVar8 = plStack_1a8 + 1;
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar8,0x10);
        if (bVar4) {
          *plVar8 = *plVar8 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    plStack_150 = plStack_1b8;
    uStack_158 = uStack_1c0;
    if (plStack_1b8 != (long *)0x0) {
      plVar8 = plStack_1b8 + 1;
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar8,0x10);
        if (bVar4) {
          *plVar8 = *plVar8 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    plStack_170 = plVar14;
    FUN_10a6c68d8(&lStack_188,plVar14[1],&plStack_170);
    FUN_10a3bf120(&plStack_148);
    lVar18 = *(long *)(*plVar14 + 0x100);
    plVar14 = (long *)0x138;
    __Znwm();
    plStack_b8 = plStack_148;
    lVar10 = lVar18 + 0x208;
    plVar8 = plVar14 + 1;
    *plVar8 = 0;
    plVar14[2] = 0;
    *plVar14 = (long)&PTR_FUN_110b9f3b0;
    param_5 = plVar14 + 3;
    plStack_148 = (long *)0x0;
    plStack_b0 = (long *)uStack_140;
    (**(code **)(alStack_138[0] + 0x10))(auStack_a8,alStack_138);
    uStack_70 = uStack_100;
    uStack_1d8 = *(ulong *)(lVar18 + 0x210);
    lStack_1e0 = *(long *)(lVar18 + 0x208);
    if (-1 < (char)*(byte *)(lVar18 + 0x21f)) {
      uStack_1d8 = (ulong)*(byte *)(lVar18 + 0x21f);
      lStack_1e0 = lVar10;
    }
    ppcVar19 = &pcStack_f8;
    pcStack_f8 = FUN_10a6c6c10;
    ppuStack_f0 = &PTR_DAT_110c10e50;
    lStack_e8 = lStack_188;
    uStack_d8 = uStack_178;
    uStack_e0 = uStack_180;
    uStack_180 = 0;
    uStack_178 = 0;
    ppcStack_1d0 = ppcVar19;
    FUN_10a23708c(param_5,&UNK_10e4d3f59,0x1e,&UNK_10f647b45,3,&plStack_b8,0);
    (*(code *)*ppuStack_f0)(&ppuStack_f0);
    FUN_10a042634(&plStack_b8);
    plStack_198 = param_5;
    plStack_190 = plVar14;
    FUN_10a042634(&plStack_148);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar4) {
        *plVar8 = *plVar8 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    plStack_b8 = param_5;
    plStack_b0 = plVar14;
    FUN_10a25f3f4(lVar13,&plStack_b8);
    do {
      lVar13 = *plVar8;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar4) {
        *plVar8 = lVar13 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar13 == 0) {
      (**(code **)(*plVar14 + 0x10))(plVar14);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar14);
    }
    plVar9 = plStack_190;
    if (plStack_190 != (long *)0x0) {
      plVar2 = plStack_190 + 1;
      do {
        lVar13 = *plVar2;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar4) {
          *plVar2 = lVar13 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar13 == 0) {
        (**(code **)(*plStack_190 + 0x10))(plStack_190);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar9);
      }
    }
    param_2 = &lStack_188;
    FUN_10a6c7404();
    plVar9 = plStack_150;
    if (plStack_150 != (long *)0x0) {
      plVar2 = plStack_150 + 1;
      do {
        lVar13 = *plVar2;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar4) {
          *plVar2 = lVar13 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar13 == 0) {
        (**(code **)(*plStack_150 + 0x10))(plStack_150);
        __ZNSt3__119__shared_weak_count14__release_weakEv();
        param_2 = plVar9;
      }
    }
    plVar9 = plStack_160;
    if (plStack_160 != (long *)0x0) {
      plVar2 = plStack_160 + 1;
      do {
        lVar13 = *plVar2;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar4) {
          *plVar2 = lVar13 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar13 == 0) {
        (**(code **)(*plStack_160 + 0x10))(plStack_160);
        __ZNSt3__119__shared_weak_count14__release_weakEv();
        param_2 = plVar9;
      }
    }
  }
  if (plStack_1b8 != (long *)0x0) {
    plVar9 = plStack_1b8 + 1;
    do {
      lVar13 = *plVar9;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar4) {
        *plVar9 = lVar13 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar13 == 0) {
      (**(code **)(*plStack_1b8 + 0x10))(plStack_1b8);
      __ZNSt3__119__shared_weak_count14__release_weakEv();
      param_2 = plStack_1b8;
    }
  }
  if (plStack_1a8 != (long *)0x0) {
    plVar9 = plStack_1a8 + 1;
    do {
      lVar13 = *plVar9;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar4) {
        *plVar9 = lVar13 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar13 == 0) {
      (**(code **)(*plStack_1a8 + 0x10))(plStack_1a8);
      __ZNSt3__119__shared_weak_count14__release_weakEv();
      param_2 = plStack_1a8;
    }
  }
  *param_1 = 0;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_68) {
    ___stack_chk_fail();
    FUN_10a05bd88(&plStack_b8);
    FUN_10a05bd88(&plStack_198);
    FUN_10a6c7404(&lStack_188);
    unaff_x21 = &plStack_170;
    func_0x00010a6c7484(&uStack_158);
    func_0x00010a6c74dc(&uStack_168);
    func_0x00010a6c7484(&uStack_1c0);
    func_0x00010a6c74dc(&uStack_1b0);
    unaff_x30 = 0x10a6cb440;
    register0x00000008 = (BADSPACEBASE *)&lStack_1e0;
    unaff_x19 = plVar7;
    unaff_x20 = param_2;
    unaff_x22 = plVar14;
    unaff_x23 = param_5;
    unaff_x24 = plVar8;
    unaff_x25 = ppcVar19;
    unaff_x26 = lVar10;
    unaff_x29 = puVar1;
  }
  plVar8 = plVar7 + 0x4b;
  lVar10 = plVar7[0x59];
  uVar11 = lVar10 - 1;
  plVar7[0x59] = uVar11;
  if (uVar11 < 8) {
    uVar11 = plVar8[lVar10 + 2];
    if (plVar7[0x5a] == uVar11) {
      return;
    }
  }
  else {
    uVar11 = *(ulong *)(plVar7[0x57] + -8);
    plVar7[0x57] = plVar7[0x57] + -8;
    if (plVar7[0x5a] == uVar11) {
      return;
    }
  }
  *(undefined8 *)((long)register0x00000008 + -0x60) = unaff_x28;
  *(undefined8 *)((long)register0x00000008 + -0x58) = unaff_x27;
  *(long *)((long)register0x00000008 + -0x50) = unaff_x26;
  *(code ***)((long)register0x00000008 + -0x48) = unaff_x25;
  *(long **)((long)register0x00000008 + -0x40) = unaff_x24;
  *(long **)((long)register0x00000008 + -0x38) = unaff_x23;
  *(long **)((long)register0x00000008 + -0x30) = unaff_x22;
  *(long ***)((long)register0x00000008 + -0x28) = unaff_x21;
  *(long **)((long)register0x00000008 + -0x20) = unaff_x20;
  *(long **)((long)register0x00000008 + -0x18) = unaff_x19;
  *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
  *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
  lVar10 = *plVar8;
  lVar13 = plVar7[0x4c];
  lVar18 = lVar13 - lVar10;
  uVar17 = lVar18 >> 4;
  if (uVar17 < uVar11) {
    uVar20 = uVar11 - uVar17;
    lVar16 = plVar7[0x4d];
    if ((ulong)(lVar16 - lVar13 >> 4) < uVar20) {
      if (uVar11 >> 0x3c == 0) {
        uVar12 = lVar16 - lVar10 >> 3;
        if (uVar12 <= uVar11) {
          uVar12 = uVar11;
        }
        if (0x7fffffffffffffef < (ulong)(lVar16 - lVar10)) {
          uVar12 = 0xfffffffffffffff;
        }
        *(long **)((long)register0x00000008 + -0x68) = plVar8;
        if (uVar12 >> 0x3c == 0) {
          lVar6 = uVar12 << 4;
          __Znwm();
          lVar13 = lVar6 + lVar18;
          _bzero(lVar13,uVar20 * 0x10);
          lVar15 = lVar13 + uVar17 * -0x10;
          _memcpy(lVar15,lVar10,lVar18);
          *plVar8 = lVar15;
          plVar7[0x4c] = lVar13 + uVar20 * 0x10;
          plVar7[0x4d] = lVar6 + uVar12 * 0x10;
          *(long *)((long)register0x00000008 + -0x78) = lVar10;
          *(long *)((long)register0x00000008 + -0x70) = lVar16;
          *(long *)((long)register0x00000008 + -0x88) = lVar10;
          *(long *)((long)register0x00000008 + -0x80) = lVar10;
          func_0x00010988c1b8((undefined1 *)((long)register0x00000008 + -0x88));
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
    _bzero(lVar13,uVar20 * 0x10);
    plVar7[0x4c] = lVar13 + uVar20 * 0x10;
  }
  else if (uVar11 < uVar17) {
    lVar10 = lVar10 + uVar11 * 0x10;
    while (lVar13 != lVar10) {
      lVar13 = lVar13 + -0x10;
      func_0x00010988c204(lVar13);
    }
    plVar7[0x4c] = lVar10;
  }
code_r0x00010988c138:
  plVar7[0x5a] = uVar11;
  return;
}



/* Entry: 10a6cb448; end: 10a6cb46b;  */

void FUN_10a6cb448(int param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  char cVar1;
  bool bVar2;
  code *pcVar3;
  undefined8 *puVar4;
  long *plVar5;
  long *plVar6;
  long lVar7;
  undefined8 *puVar8;
  long *plVar9;
  undefined8 uStack_80;
  long lStack_78;
  undefined8 uStack_70;
  long lStack_68;
  long *plStack_60;
  int iStack_58;
  long *plStack_50;
  long *plStack_48;
  
  if (param_1 == 2) {
    return;
  }
  puVar4 = (undefined8 *)0x2;
  plVar9 = (long *)0x0;
  FUN_10a052ee0();
  if (param_1 == 7) {
    plVar5 = plVar9;
    (**(code **)(*plVar9 + 0x98))(plVar9,param_4);
    plVar6 = plVar9;
    plStack_48 = plVar5;
    (**(code **)(*plVar9 + 0x228))(plVar9,&plStack_48);
    if ((int)plVar6 != 0) {
      plVar5 = plVar9;
      (**(code **)(*plVar9 + 0x58))();
      lVar7 = plVar5[0x48];
      if ((lVar7 == 0) ||
         (___dynamic_cast(lVar7,&PTR_DAT_110b9fb60,&PTR_DAT_110b9fb70,0), plVar5 = plStack_48,
         lVar7 == 0)) goto LAB_10a6cb5f0;
      plStack_48 = (long *)0x0;
      iStack_58 = 7;
      plStack_50 = plVar5;
      plStack_60 = plVar9;
      FUN_10a688ac0(&uStack_80,&plStack_60,*(undefined8 *)(lVar7 + 8));
      if ((3 < iStack_58) && (plStack_50 != (long *)0x0)) {
        (**(code **)*plStack_50)();
      }
    }
    if (plStack_48 != (long *)0x0) {
      (**(code **)*plStack_48)();
    }
    if (((ulong)plVar6 & 1) != 0) {
      puVar8 = (undefined8 *)0x60;
      __Znwm();
      puVar8[1] = 0;
      puVar8[2] = 0;
      *puVar8 = &PTR_FUN_110c11018;
      puVar8[4] = lStack_78;
      puVar8[3] = uStack_80;
      if (lStack_78 != 0) {
        plVar9 = (long *)(lStack_78 + 8);
        do {
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(plVar9,0x10);
          if (bVar2) {
            *plVar9 = *plVar9 + 1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
      }
      puVar8[6] = lStack_68;
      puVar8[5] = uStack_70;
      if (lStack_68 != 0) {
        plVar9 = (long *)(lStack_68 + 0x10);
        do {
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(plVar9,0x10);
          if (bVar2) {
            *plVar9 = *plVar9 + 1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
      }
      *(undefined1 *)(puVar8 + 0xb) = 2;
      *puVar4 = puVar8 + 3;
      puVar4[1] = puVar8;
      FUN_10a688c1c(&uStack_80);
      return;
    }
  }
  func_0x00010988bd28(&UNK_10f6347ad);
LAB_10a6cb5f0:
  func_0x00010988bd28(&UNK_10f685540);
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x10a6cb600);
  (*pcVar3)();
}



/* Entry: 10a6cb46c; end: 10a6cb62f;  */

void FUN_10a6cb46c(undefined8 *param_1,long *param_2,int param_3,undefined8 param_4)

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
         lVar6 == 0)) goto LAB_10a6cb5f0;
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
      *puVar7 = &PTR_FUN_110c11018;
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
LAB_10a6cb5f0:
  func_0x00010988bd28(&UNK_10f685540);
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x10a6cb600);
  (*pcVar3)();
}



/* Entry: 10a6cb630; end: 10a6cb63f;  */

void FUN_10a6cb630(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c11018;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10a6cb640; end: 10a6cb65f;  */

void FUN_10a6cb640(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c11018;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a6cb660; end: 10a6cb687;  */

undefined1  [16] FUN_10a6cb660(long param_1)

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
    UNRECOVERED_JUMPTABLE = (code *)SoftwareBreakpoint(1,0x10a6cb684);
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



/* Entry: 10a6cb688; end: 10a6cb6df;  */

void FUN_10a6cb688(undefined8 param_1)

{
  undefined1 auStack_48 [39];
  undefined1 uStack_21;
  
  FUN_10a6cb6e0(auStack_48);
  FUN_10a6cb818(param_1,&uStack_21,auStack_48);
  FUN_10a688c1c(auStack_48);
  return;
}



/* Entry: 10a6cb6e0; end: 10a6cb817;  */

void FUN_10a6cb6e0(undefined8 param_1,long *param_2,int *param_3)

{
  code *pcVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  long *plStack_50;
  int iStack_48;
  long *plStack_40;
  long *plStack_38;
  
  if (*param_3 == 7) {
    plVar2 = param_2;
    (**(code **)(*param_2 + 0x98))(param_2,*(undefined8 *)(param_3 + 2));
    plVar3 = param_2;
    plStack_38 = plVar2;
    (**(code **)(*param_2 + 0x228))(param_2,&plStack_38);
    if ((int)plVar3 != 0) {
      plVar2 = param_2;
      (**(code **)(*param_2 + 0x58))();
      lVar4 = plVar2[0x48];
      if ((lVar4 == 0) ||
         (___dynamic_cast(lVar4,&PTR_DAT_110b9fb60,&PTR_DAT_110b9fb70,0), lVar4 == 0))
      goto LAB_10a6cb7e8;
      plStack_40 = plStack_38;
      plStack_38 = (long *)0x0;
      iStack_48 = 7;
      plStack_50 = param_2;
      FUN_10a688ac0(param_1,&plStack_50,*(undefined8 *)(lVar4 + 8));
      if ((3 < iStack_48) && (plStack_40 != (long *)0x0)) {
        (**(code **)*plStack_40)();
      }
    }
    if (plStack_38 != (long *)0x0) {
      (**(code **)*plStack_38)();
    }
    if (((ulong)plVar3 & 1) != 0) {
      return;
    }
  }
  func_0x00010988bd28(&UNK_10f6347ad);
LAB_10a6cb7e8:
  func_0x00010988bd28(&UNK_10f685540);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10a6cb7f8);
  (*pcVar1)();
}



/* Entry: 10a6cb818; end: 10a6cb86f;  */

void FUN_10a6cb818(long *param_1)

{
  long lVar1;
  
  lVar1 = 0x60;
  __Znwm();
  FUN_10a6cb870();
  *param_1 = lVar1 + 0x18;
  param_1[1] = lVar1;
  return;
}



/* Entry: 10a6cb870; end: 10a6cb8eb;  */

void FUN_10a6cb870(undefined8 *param_1,undefined8 *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined8 uVar5;
  
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_DAT_110c11068;
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



/* Entry: 10a6cb8ec; end: 10a6cb90b;  */

void FUN_10a6cb8ec(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110c11068;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a6cb90c; end: 10a6cb933;  */

undefined1  [16] FUN_10a6cb90c(long param_1)

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
    UNRECOVERED_JUMPTABLE = (code *)SoftwareBreakpoint(1,0x10a6cb930);
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


