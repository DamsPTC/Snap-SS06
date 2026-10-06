/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10a3794f0; end: 10a37967f;  */

void FUN_10a3794f0(undefined8 *param_1,undefined8 param_2)

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
  FUN_10a379680(aiStack_70,plVar1,param_2);
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



/* Entry: 10a379680; end: 10a379703;  */

void FUN_10a379680(undefined8 param_1,undefined8 *param_2)

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



/* Entry: 10a379704; end: 10a379713;  */

void FUN_10a379704(long param_1)

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
  FUN_10a379680(aiStack_70,plVar2,param_1 + 0x20);
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



/* Entry: 10a379714; end: 10a37973b;  */

long FUN_10a379714(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  FUN_10a133db8(param_1 + 0x18);
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



/* Entry: 10a37973c; end: 10a37977b;  */

void FUN_10a37973c(undefined8 *param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined8 uVar5;
  
  *param_1 = &PTR_FUN_110bc73e8;
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



/* Entry: 10a37977c; end: 10a3797a3;  */

long FUN_10a37977c(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  func_0x00010a07a8a8(param_1 + 0x20);
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



/* Entry: 10a3797a4; end: 10a37985b;  */

void FUN_10a3797a4(undefined8 *param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined8 uVar5;
  
  *param_1 = &PTR_FUN_110bc7400;
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



/* Entry: 10a37985c; end: 10a3798b3;  */

long FUN_10a37985c(long param_1)

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



/* Entry: 10a3798b4; end: 10a379f4b;  */

/* WARNING: Removing unreachable block (ram,0x00010a37995c) */
/* WARNING: Removing unreachable block (ram,0x00010a379cfc) */
/* WARNING: Removing unreachable block (ram,0x00010a379b6c) */
/* WARNING: Removing unreachable block (ram,0x00010a379b70) */
/* WARNING: Removing unreachable block (ram,0x00010a379b78) */
/* WARNING: Removing unreachable block (ram,0x00010a379b80) */
/* WARNING: Removing unreachable block (ram,0x00010a379b84) */

void FUN_10a3798b4(void)

{
  long *plVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  char cVar10;
  bool bVar11;
  undefined8 ****ppppuVar12;
  code *pcVar13;
  code **ppcVar14;
  undefined8 *puVar15;
  undefined **ppuVar16;
  long in_x3;
  long lVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  long lStack_158;
  long *plStack_150;
  undefined8 ***pppuStack_148;
  ulong uStack_140;
  byte bStack_131;
  code *pcStack_130;
  undefined **ppuStack_128;
  undefined8 uStack_120;
  long *plStack_118;
  code *pcStack_f0;
  undefined **ppuStack_e8;
  undefined8 *puStack_e0;
  code *pcStack_b0;
  undefined **ppuStack_a8;
  code *pcStack_a0;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  FUN_10a08d2e0(&pppuStack_148);
  uVar18 = *(undefined8 *)(in_x3 + 0x10);
  uVar2 = uStack_140;
  ppppuVar12 = (undefined8 ****)pppuStack_148;
  if (-1 < (char)bStack_131) {
    uVar2 = (ulong)bStack_131;
    ppppuVar12 = &pppuStack_148;
  }
  FUN_10a151324(&pcStack_f0,ppppuVar12,uVar2);
  ppcVar14 = &pcStack_f0;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (ppcVar14,&UNK_10f6517e7,8);
  ppuStack_a8 = (undefined **)ppcVar14[1];
  pcStack_b0 = *ppcVar14;
  pcStack_a0 = ppcVar14[2];
  ppcVar14[1] = (code *)0x0;
  ppcVar14[2] = (code *)0x0;
  *ppcVar14 = (code *)0x0;
  FUN_10a34bba8(&lStack_158,uVar18,&pcStack_b0);
  if ((long)puStack_e0 < 0) {
    __ZdlPv(pcStack_f0);
  }
  if (lStack_158 == 0) {
    ppppuVar12 = (undefined8 ****)pppuStack_148;
    if (-1 < (char)bStack_131) {
      uStack_140 = (ulong)bStack_131;
      ppppuVar12 = &pppuStack_148;
    }
    FUN_10ae03140(0,ppppuVar12,uStack_140);
    ppuVar16 = &PTR_PTR_113301810;
    FUN_10ae079a0();
    FUN_10ae0314c();
    FUN_10ae07cd4(ppuVar16,&PTR_PTR_113301810);
    puVar15 = *(undefined8 **)(in_x3 + 0x28);
    func_0x000107c2b054(&pcStack_b0,&UNK_10f6517f0);
    if ((puVar15 == (undefined8 *)0x0) || (*(char *)(puVar15 + 8) != '\x02')) {
      if ((puVar15 != (undefined8 *)0x0) && (*(char *)(puVar15 + 8) == '\x01')) {
        (*(code *)*puVar15)();
      }
    }
    else {
      FUN_10a05aad0(puVar15,&pcStack_b0);
    }
  }
  else {
    if (*(int *)(lStack_158 + 0x110) != 1) goto LAB_10a379d88;
    uVar18 = *(undefined8 *)(lStack_158 + 0x118);
    plVar6 = *(long **)(lStack_158 + 0x120);
    if (plVar6 != (long *)0x0) {
      plVar7 = plVar6 + 1;
      do {
        cVar10 = '\x01';
        bVar11 = (bool)ExclusiveMonitorPass(plVar7,0x10);
        if (bVar11) {
          *plVar7 = *plVar7 + 1;
          cVar10 = ExclusiveMonitorsStatus();
        }
      } while (cVar10 != '\0');
    }
    uVar3 = *(undefined8 *)(in_x3 + 0x18);
    plVar7 = *(long **)(in_x3 + 0x20);
    if (plVar7 != (long *)0x0) {
      plVar8 = plVar7 + 1;
      do {
        cVar10 = '\x01';
        bVar11 = (bool)ExclusiveMonitorPass(plVar8,0x10);
        if (bVar11) {
          *plVar8 = *plVar8 + 1;
          cVar10 = ExclusiveMonitorsStatus();
        }
      } while (cVar10 != '\0');
    }
    uVar4 = *(undefined8 *)(in_x3 + 0x28);
    plVar8 = *(long **)(in_x3 + 0x30);
    if (plVar8 != (long *)0x0) {
      plVar9 = plVar8 + 1;
      do {
        cVar10 = '\x01';
        bVar11 = (bool)ExclusiveMonitorPass(plVar9,0x10);
        if (bVar11) {
          *plVar9 = *plVar9 + 1;
          cVar10 = ExclusiveMonitorsStatus();
        }
      } while (cVar10 != '\0');
    }
    uVar19 = *(undefined8 *)(in_x3 + 0x10);
    if (plVar6 != (long *)0x0) {
      plVar9 = plVar6 + 1;
      do {
        cVar10 = '\x01';
        bVar11 = (bool)ExclusiveMonitorPass(plVar9,0x10);
        if (bVar11) {
          *plVar9 = *plVar9 + 1;
          cVar10 = ExclusiveMonitorsStatus();
        }
      } while (cVar10 != '\0');
    }
    uVar5 = *(undefined8 *)(in_x3 + 0x28);
    plVar9 = *(long **)(in_x3 + 0x30);
    if (plVar9 != (long *)0x0) {
      plVar1 = plVar9 + 1;
      do {
        cVar10 = '\x01';
        bVar11 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar11) {
          *plVar1 = *plVar1 + 1;
          cVar10 = ExclusiveMonitorsStatus();
        }
      } while (cVar10 != '\0');
    }
    pcStack_b0 = FUN_10a379fd0;
    ppuStack_a8 = &PTR_DAT_110bc7420;
    pcStack_f0 = FUN_10a379fe8;
    ppuStack_e8 = &PTR_FUN_110bc7438;
    puVar15 = (undefined8 *)0x38;
    __Znwm();
    *puVar15 = uVar3;
    puVar15[1] = plVar7;
    if (plVar7 != (long *)0x0) {
      plVar1 = plVar7 + 1;
      do {
        cVar10 = '\x01';
        bVar11 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar11) {
          *plVar1 = *plVar1 + 1;
          cVar10 = ExclusiveMonitorsStatus();
        }
      } while (cVar10 != '\0');
    }
    puVar15[2] = uVar4;
    puVar15[3] = plVar8;
    if (plVar8 != (long *)0x0) {
      plVar1 = plVar8 + 1;
      do {
        cVar10 = '\x01';
        bVar11 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar11) {
          *plVar1 = *plVar1 + 1;
          cVar10 = ExclusiveMonitorsStatus();
        }
      } while (cVar10 != '\0');
    }
    puVar15[4] = uVar19;
    puVar15[5] = uVar18;
    puVar15[6] = plVar6;
    pcStack_130 = FUN_10a37a1c4;
    ppuStack_128 = &PTR_FUN_110bc7450;
    if (plVar9 != (long *)0x0) {
      plVar1 = plVar9 + 1;
      do {
        cVar10 = '\x01';
        bVar11 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar11) {
          *plVar1 = *plVar1 + 1;
          cVar10 = ExclusiveMonitorsStatus();
        }
      } while (cVar10 != '\0');
    }
    uStack_120 = uVar5;
    plStack_118 = plVar9;
    puStack_e0 = puVar15;
    FUN_10a349c18(lStack_158,&pcStack_f0,&pcStack_130,&pcStack_b0);
    (*(code *)*ppuStack_128)(&ppuStack_128);
    (*(code *)*ppuStack_e8)(&ppuStack_e8);
    (*(code *)*ppuStack_a8)(&ppuStack_a8);
    if (plVar9 != (long *)0x0) {
      plVar1 = plVar9 + 1;
      do {
        lVar17 = *plVar1;
        cVar10 = '\x01';
        bVar11 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar11) {
          *plVar1 = lVar17 + -1;
          cVar10 = ExclusiveMonitorsStatus();
        }
      } while (cVar10 != '\0');
      if (lVar17 == 0) {
        (**(code **)(*plVar9 + 0x10))(plVar9);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar9);
      }
    }
    if (plVar8 != (long *)0x0) {
      plVar9 = plVar8 + 1;
      do {
        lVar17 = *plVar9;
        cVar10 = '\x01';
        bVar11 = (bool)ExclusiveMonitorPass(plVar9,0x10);
        if (bVar11) {
          *plVar9 = lVar17 + -1;
          cVar10 = ExclusiveMonitorsStatus();
        }
      } while (cVar10 != '\0');
      if (lVar17 == 0) {
        (**(code **)(*plVar8 + 0x10))(plVar8);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar8);
      }
    }
    if (plVar7 != (long *)0x0) {
      plVar8 = plVar7 + 1;
      do {
        lVar17 = *plVar8;
        cVar10 = '\x01';
        bVar11 = (bool)ExclusiveMonitorPass(plVar8,0x10);
        if (bVar11) {
          *plVar8 = lVar17 + -1;
          cVar10 = ExclusiveMonitorsStatus();
        }
      } while (cVar10 != '\0');
      if (lVar17 == 0) {
        (**(code **)(*plVar7 + 0x10))(plVar7);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
      }
    }
    if (plVar6 != (long *)0x0) {
      plVar7 = plVar6 + 1;
      do {
        lVar17 = *plVar7;
        cVar10 = '\x01';
        bVar11 = (bool)ExclusiveMonitorPass(plVar7,0x10);
        if (bVar11) {
          *plVar7 = lVar17 + -1;
          cVar10 = ExclusiveMonitorsStatus();
        }
      } while (cVar10 != '\0');
      if (lVar17 == 0) {
        (**(code **)(*plVar6 + 0x10))(plVar6);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
      }
    }
  }
  if (plStack_150 != (long *)0x0) {
    plVar6 = plStack_150 + 1;
    do {
      lVar17 = *plVar6;
      cVar10 = '\x01';
      bVar11 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar11) {
        *plVar6 = lVar17 + -1;
        cVar10 = ExclusiveMonitorsStatus();
      }
    } while (cVar10 != '\0');
    if (lVar17 == 0) {
      (**(code **)(*plStack_150 + 0x10))(plStack_150);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_150);
    }
  }
  if ((char)bStack_131 < '\0') {
    __ZdlPv(pppuStack_148);
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
LAB_10a379d88:
  FUN_10a00946c(&UNK_10f651818);
                    /* WARNING: Does not return */
  pcVar13 = (code *)SoftwareBreakpoint(1,0x10a379d98);
  (*pcVar13)();
}



/* Entry: 10a379f4c; end: 10a379f7b;  */

long FUN_10a379f4c(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  FUN_10a15206c(param_1 + 0x28);
  func_0x00010a07a8a8(param_1 + 0x10);
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



/* Entry: 10a379f7c; end: 10a379fcf;  */

undefined * FUN_10a379f7c(undefined8 param_1)

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
  ppuVar6 = &PTR_PTR_113301898;
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



/* Entry: 10a379fd0; end: 10a379fe7;  */

void FUN_10a379fd0(void)

{
  return;
}



/* Entry: 10a379fe8; end: 10a37a167;  */

void FUN_10a379fe8(long *param_1,long param_2)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  undefined8 uStack_48;
  long *plStack_40;
  char cStack_31;
  
  puVar7 = *(undefined8 **)(param_2 + 0x10);
  lVar5 = *param_1;
  plVar2 = (long *)param_1[1];
  *param_1 = 0;
  param_1[1] = 0;
  if (lVar5 == 0) {
    puVar7 = (undefined8 *)puVar7[2];
    func_0x000107c2b054(&uStack_48,&UNK_10f6517f0);
    if (puVar7 == (undefined8 *)0x0 || *(char *)(puVar7 + 8) != '\x02') {
      if (puVar7 != (undefined8 *)0x0 && *(char *)(puVar7 + 8) == '\x01') {
        (*(code *)*puVar7)(&uStack_48,puVar7);
      }
    }
    else {
      FUN_10a05aad0(puVar7,&uStack_48);
    }
    if (cStack_31 < '\0') {
      __ZdlPv(uStack_48);
    }
  }
  else {
    FUN_10a771364(*(long *)(*(long *)(puVar7[4] + 0x888) + 0x40) + 0x18,puVar7 + 5);
    uVar6 = *puVar7;
    FUN_10a2ea178(&uStack_48,lVar5);
    FUN_10a05e0a8(uVar6,&uStack_48);
    if (plStack_40 != (long *)0x0) {
      plVar1 = plStack_40 + 1;
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
        (**(code **)(*plStack_40 + 0x10))(plStack_40);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_40);
      }
    }
  }
  if (plVar2 != (long *)0x0) {
    plVar1 = plVar2 + 1;
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
      (**(code **)(*plVar2 + 0x10))(plVar2);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar2);
    }
  }
  return;
}



/* Entry: 10a37a168; end: 10a37a1ab;  */

void FUN_10a37a168(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 8);
  if (lVar1 != 0) {
    FUN_10a15206c(lVar1 + 0x28);
    func_0x00010a07a8a8(lVar1 + 0x10);
    func_0x00010a042bac(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10a37a1ac; end: 10a37a1c3;  */

void FUN_10a37a1ac(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_2[1] = 0;
  return;
}



/* Entry: 10a37a1c4; end: 10a37a30b;  */

void FUN_10a37a1c4(undefined8 *param_1,long param_2)

{
  ulong uVar1;
  undefined1 **ppuVar2;
  undefined **ppuVar3;
  undefined8 *puVar4;
  undefined1 *puStack_60;
  ulong uStack_58;
  ulong uStack_50;
  undefined8 auStack_48 [2];
  char cStack_31;
  
  uStack_50 = param_1[2];
  uStack_58 = param_1[1];
  puStack_60 = (undefined1 *)*param_1;
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = 0;
  uVar1 = uStack_58;
  ppuVar2 = (undefined1 **)puStack_60;
  if (-1 < (long)uStack_50) {
    uVar1 = uStack_50 >> 0x38;
    ppuVar2 = &puStack_60;
  }
  FUN_10ae03140(0,ppuVar2,uVar1);
  ppuVar3 = &PTR_PTR_113301858;
  FUN_10ae079a0();
  FUN_10ae0314c();
  FUN_10ae07cd4(ppuVar3,&PTR_PTR_113301858);
  puVar4 = *(undefined8 **)(param_2 + 0x10);
  func_0x000107c2b054(auStack_48,&UNK_10f651871);
  if ((puVar4 == (undefined8 *)0x0) || (*(char *)(puVar4 + 8) != '\x02')) {
    if ((puVar4 != (undefined8 *)0x0) && (*(char *)(puVar4 + 8) == '\x01')) {
      (*(code *)*puVar4)(auStack_48,puVar4);
    }
  }
  else {
    FUN_10a05aad0(puVar4,auStack_48);
  }
  if (cStack_31 < '\0') {
    __ZdlPv(auStack_48[0]);
  }
  if ((long)uStack_50 < 0) {
    __ZdlPv(puStack_60);
  }
  return;
}



/* Entry: 10a37a30c; end: 10a37a347;  */

long FUN_10a37a30c(long param_1)

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



/* Entry: 10a37a348; end: 10a37a36f;  */

long FUN_10a37a348(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  func_0x00010a07a8a8(param_1 + 0x20);
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



/* Entry: 10a37a370; end: 10a37a427;  */

void FUN_10a37a370(undefined8 *param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined8 uVar5;
  
  *param_1 = &PTR_FUN_110bc7468;
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



/* Entry: 10a37a428; end: 10a37a55b;  */

void FUN_10a37a428(void)

{
  long in_x3;
  undefined8 uVar1;
  undefined8 auStack_60 [2];
  char cStack_49;
  undefined8 auStack_48 [2];
  char cStack_31;
  
  uVar1 = *(undefined8 *)(in_x3 + 0x10);
  FUN_10a08d2e0(auStack_60);
  FUN_10ad01b0c(auStack_48,auStack_60);
  FUN_10a1bcbe0(uVar1,auStack_48);
  if (cStack_31 < '\0') {
    __ZdlPv(auStack_48[0]);
  }
  if (cStack_49 < '\0') {
    __ZdlPv(auStack_60[0]);
  }
  return;
}



/* Entry: 10a37a55c; end: 10a37a5af;  */

undefined * FUN_10a37a55c(undefined8 param_1)

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
  ppuVar6 = &PTR_PTR_1133018d0;
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



/* Entry: 10a37a5b0; end: 10a37a5d7;  */

long FUN_10a37a5b0(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  func_0x00010a07a8a8(param_1 + 0x18);
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



/* Entry: 10a37a5d8; end: 10a37a687;  */

void FUN_10a37a5d8(undefined8 *param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined8 uVar5;
  
  *param_1 = &PTR_FUN_110bc7488;
  lVar4 = *(long *)(param_2 + 0x10);
  uVar5 = *(undefined8 *)(param_2 + 8);
  param_1[2] = *(undefined8 *)(param_2 + 0x10);
  param_1[1] = uVar5;
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



/* Entry: 10a37a688; end: 10a37aa73;  */

undefined ****** FUN_10a37a688(void)

{
  char cVar1;
  bool bVar2;
  undefined ******ppppppuVar3;
  undefined ******ppppppuVar4;
  undefined ******ppppppuVar5;
  ulong uVar6;
  ulong uVar7;
  int iVar8;
  undefined ******ppppppuVar9;
  undefined **ppuVar10;
  undefined **ppuVar11;
  long in_x3;
  undefined *****pppppuVar12;
  undefined ******ppppppuVar13;
  undefined8 uVar14;
  undefined ******ppppppuVar15;
  undefined *puVar16;
  undefined *puVar17;
  undefined *puStack_9c8;
  undefined8 uStack_9c0;
  undefined1 uStack_9b8;
  undefined *puStack_9b0;
  undefined8 uStack_9a8;
  undefined1 uStack_9a0;
  undefined **ppuStack_998;
  undefined *puStack_990;
  undefined *puStack_988;
  ulong uStack_980;
  ulong uStack_978;
  ulong uStack_970;
  undefined4 uStack_968;
  undefined **ppuStack_960;
  undefined *puStack_958;
  undefined8 uStack_950;
  undefined1 uStack_948;
  undefined *puStack_940;
  undefined8 uStack_938;
  undefined1 uStack_930;
  int iStack_928;
  undefined1 auStack_920 [1024];
  undefined1 auStack_520 [1024];
  long lStack_120;
  undefined *****pppppuStack_b0;
  undefined *****pppppuStack_a8;
  undefined *****pppppuStack_a0;
  undefined *****pppppuStack_98;
  undefined *****pppppuStack_90;
  undefined *****pppppuStack_88;
  undefined *****pppppuStack_78;
  undefined *****pppppuStack_70;
  undefined ****ppppuStack_68;
  undefined ****ppppuStack_60;
  undefined *****pppppuStack_58;
  undefined *****pppppuStack_50;
  long lStack_38;
  
  ppppppuVar9 = &pppppuStack_b0;
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar14 = *(undefined8 *)(*(long *)(in_x3 + 0x10) + 0x870);
  FUN_10a08d2e0(&pppppuStack_a0);
  FUN_10ad00a7c(&pppppuStack_78,&pppppuStack_a0);
  ppppppuVar13 = &pppppuStack_78;
  FUN_10a12c178(&pppppuStack_b0,uVar14);
  ppppppuVar4 = (undefined ******)pppppuStack_78;
  if ((undefined ******)pppppuStack_78 != (undefined ******)0x0) {
    pppppuStack_70 = pppppuStack_78;
    __ZdlPv();
  }
  if ((long)pppppuStack_90 < 0) {
    ppppppuVar4 = (undefined ******)pppppuStack_a0;
    __ZdlPv();
  }
  ppppppuVar15 = *(undefined *******)(in_x3 + 0x18);
  if ((ppppppuVar15 == (undefined ******)0x0) || (*(char *)(ppppppuVar15 + 8) != '\x02')) {
    ppppppuVar9 = ppppppuVar13;
    if ((ppppppuVar15 == (undefined ******)0x0) || (*(char *)(ppppppuVar15 + 8) != '\x01'))
    goto LAB_10a37a8bc;
    pppppuVar12 = *ppppppuVar15;
    pppppuStack_98 = pppppuStack_a8;
    pppppuStack_a0 = pppppuStack_b0;
    if ((undefined ******)pppppuStack_a8 != (undefined ******)0x0) {
      ppppppuVar13 = (undefined ******)(pppppuStack_a8 + 1);
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(ppppppuVar13,0x10);
        if (bVar2) {
          *ppppppuVar13 = (undefined *****)((long)*ppppppuVar13 + 1);
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    ppppppuVar4 = &pppppuStack_a0;
    (*(code *)pppppuVar12)();
    ppppppuVar9 = ppppppuVar15;
    if ((undefined ******)pppppuStack_98 == (undefined ******)0x0) goto LAB_10a37a8bc;
    ppppppuVar13 = (undefined ******)(pppppuStack_98 + 1);
    do {
      pppppuVar12 = *ppppppuVar13;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(ppppppuVar13,0x10);
      if (bVar2) {
        *ppppppuVar13 = (undefined *****)((long)pppppuVar12 + -1);
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  else {
    ppppppuVar3 = ppppppuVar15;
    FUN_10a688b40();
    ppppppuVar5 = (undefined ******)pppppuStack_a8;
    if (ppppppuVar3 != (undefined ******)0x0) {
      *ppppppuVar3 = (undefined *****)
                     CONCAT44((int)((ulong)*ppppppuVar3 >> 0x20) + 1,(int)*ppppppuVar3 + 1);
      ppppppuVar4 = (undefined ******)*ppppppuVar15;
      FUN_10a37aac8();
      iVar8 = *(int *)((long)ppppppuVar3 + 4) + -1;
      *(int *)((long)ppppppuVar3 + 4) = iVar8;
      if (iVar8 == 0) {
        *(undefined4 *)ppppppuVar3 = 0;
      }
      goto LAB_10a37a8bc;
    }
    ppppppuVar4 = (undefined ******)0x0;
    ppppppuVar9 = (undefined ******)0x0;
    if (ppppppuVar13 == (undefined ******)0x0) goto LAB_10a37a8bc;
    ppppuStack_60 = (undefined ****)ppppppuVar15[1];
    ppppuStack_68 = (undefined ****)*ppppppuVar15;
    if (ppppppuVar15[1] != (undefined *****)0x0) {
      pppppuVar12 = ppppppuVar15[1] + 1;
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(pppppuVar12,0x10);
        if (bVar2) {
          *pppppuVar12 = (undefined ****)((long)*pppppuVar12 + 1);
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    pppppuStack_90 = pppppuStack_b0;
    pppppuStack_88 = pppppuStack_a8;
    if ((undefined ******)pppppuStack_a8 != (undefined ******)0x0) {
      ppppppuVar13 = (undefined ******)(pppppuStack_a8 + 1);
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(ppppppuVar13,0x10);
        if (bVar2) {
          *ppppppuVar13 = (undefined *****)((long)*ppppppuVar13 + 1);
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    pppppuStack_78 = (undefined *****)FUN_10a37ac64;
    pppppuStack_70 = (undefined *****)&PTR_FUN_110bc74a8;
    pppppuStack_a0 = (undefined *****)0x0;
    pppppuStack_98 = (undefined *****)0x0;
    pppppuStack_58 = pppppuStack_b0;
    pppppuStack_50 = pppppuStack_a8;
    if ((undefined ******)pppppuStack_a8 != (undefined ******)0x0) {
      ppppppuVar13 = (undefined ******)(pppppuStack_a8 + 1);
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(ppppppuVar13,0x10);
        if (bVar2) {
          *ppppppuVar13 = (undefined *****)((long)*ppppppuVar13 + 1);
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    ppppppuVar15 = &pppppuStack_78;
    FUN_10a4634ec();
    ppppppuVar4 = &pppppuStack_70;
    (*(code *)*pppppuStack_70)();
    if (ppppppuVar5 != (undefined ******)0x0) {
      ppppppuVar13 = ppppppuVar5 + 1;
      do {
        pppppuVar12 = *ppppppuVar13;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(ppppppuVar13,0x10);
        if (bVar2) {
          *ppppppuVar13 = (undefined *****)((long)pppppuVar12 + -1);
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (pppppuVar12 == (undefined *****)0x0) {
        (*(code *)(*ppppppuVar5)[2])(ppppppuVar5);
        __ZNSt3__119__shared_weak_count14__release_weakEv();
        ppppppuVar4 = ppppppuVar5;
      }
    }
    ppppppuVar9 = ppppppuVar15;
    if ((undefined ******)pppppuStack_98 == (undefined ******)0x0) goto LAB_10a37a8bc;
    ppppppuVar13 = (undefined ******)(pppppuStack_98 + 1);
    do {
      pppppuVar12 = *ppppppuVar13;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(ppppppuVar13,0x10);
      if (bVar2) {
        *ppppppuVar13 = (undefined *****)((long)pppppuVar12 + -1);
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  ppppppuVar13 = (undefined ******)pppppuStack_98;
  ppppppuVar9 = ppppppuVar15;
  if (pppppuVar12 == (undefined *****)0x0) {
    (*(code *)(*pppppuStack_98)[2])(pppppuStack_98);
    __ZNSt3__119__shared_weak_count14__release_weakEv();
    ppppppuVar4 = ppppppuVar13;
    ppppppuVar9 = ppppppuVar15;
  }
LAB_10a37a8bc:
  ppppppuVar13 = (undefined ******)pppppuStack_a8;
  if ((undefined ******)pppppuStack_a8 != (undefined ******)0x0) {
    ppppppuVar15 = (undefined ******)(pppppuStack_a8 + 1);
    do {
      pppppuVar12 = *ppppppuVar15;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(ppppppuVar15,0x10);
      if (bVar2) {
        *ppppppuVar15 = (undefined *****)((long)pppppuVar12 + -1);
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (pppppuVar12 == (undefined *****)0x0) {
      (*(code *)(*pppppuStack_a8)[2])(pppppuStack_a8);
      ppppppuVar4 = (undefined ******)pppppuStack_a8;
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
  }
  while( true ) {
    iVar8 = (int)ppppppuVar9;
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
      return ppppppuVar4;
    }
    ___stack_chk_fail();
    (*(code *)*pppppuStack_70)(&pppppuStack_70);
    func_0x00010a12c080(&pppppuStack_90);
    func_0x00010a004dac(&pppppuStack_a0);
    func_0x00010a12c080(&pppppuStack_b0);
    if (iVar8 != 1) break;
    ___cxa_begin_catch();
    (*(code *)(*ppppppuVar4)[2])();
    FUN_10a37aa74();
    ppppppuVar13 = (undefined ******)ppppppuVar13[5];
    func_0x000107c2b054(&pppppuStack_78,&UNK_10f6518d0);
    ppppppuVar9 = &pppppuStack_78;
    ppppppuVar4 = ppppppuVar13;
    FUN_10a13609c();
    if ((long)ppppuStack_68 < 0) {
      ppppppuVar4 = (undefined ******)pppppuStack_78;
      __ZdlPv();
    }
    ___cxa_end_catch();
  }
  __Unwind_Resume(ppppppuVar4);
  func_0x000104bd46a0(ppppppuVar4);
  FUN_10ae030a0(0,ppppppuVar4);
  ppuVar11 = &PTR_PTR_113301910;
  ppuVar10 = ppuVar11;
  FUN_10ae079a0();
  FUN_10ae030d8();
  lStack_120 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppppppuVar13 = (undefined ******)0x0;
  if (ppuVar10 != (undefined **)0x0) {
    FUN_10ae03188(&puStack_958,auStack_520,0x400,auStack_920,0x400,ppuVar10[0x13],ppuVar10[0xf],
                  ppuVar10 + 0x14,0x400);
    puStack_9c8 = puStack_940;
    uStack_9c0 = uStack_938;
    puStack_9b0 = puStack_958;
    uStack_9a8 = uStack_950;
    uStack_9b8 = uStack_930;
    if (iStack_928 != 0) {
      puStack_9c8 = &UNK_10f6c352e;
      uStack_9c0 = 0x10;
      puStack_9b0 = &UNK_10f6c352e;
      uStack_9a8 = 0x10;
      uStack_9b8 = 0;
      uStack_948 = 0;
    }
    puVar17 = ppuVar10[0x12];
    puVar16 = ppuVar10[0xb];
    uVar6 = 0;
    _clock_gettime_nsec_np();
    uVar7 = uVar6;
    _pthread_self();
    _pthread_mach_thread_np();
    ppuStack_998 = ppuVar10 + 1;
    uStack_968 = *(undefined4 *)(ppuVar10 + 0xe);
    uStack_970 = uVar7 & 0xffffffff;
    ppuStack_960 = ppuVar10 + 0x10;
    ppppppuVar13 = (undefined ******)*ppuVar10;
    ppuVar11 = (undefined **)&ppuStack_998;
    uStack_9a0 = uStack_948;
    puStack_990 = puVar16;
    puStack_988 = puVar17;
    uStack_980 = (ulong)(puVar17 != (undefined *)0x0);
    uStack_978 = uVar6;
    FUN_10ae0784c(ppppppuVar13,ppuVar11,&puStack_9b0,&puStack_9c8);
  }
  iVar8 = (int)ppuVar11;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_120) {
    ___stack_chk_fail();
    if (iVar8 == 0) {
      __Unwind_Resume();
    }
    func_0x000104bd46a0();
    func_0x00010ae087bc();
    FUN_10ae07e54(ppppppuVar13);
    return ppppppuVar13;
  }
  return ppppppuVar13;
}



/* Entry: 10a37aa74; end: 10a37aac7;  */

undefined * FUN_10a37aa74(undefined8 param_1)

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
  ppuVar6 = &PTR_PTR_113301910;
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



/* Entry: 10a37aac8; end: 10a37ac63;  */

void FUN_10a37aac8(undefined8 *param_1,long *param_2)

{
  long *plVar1;
  undefined8 *puStack_80;
  undefined8 *puStack_78;
  int aiStack_70 [2];
  undefined8 *puStack_68;
  int aiStack_60 [2];
  undefined8 *puStack_58;
  undefined8 **ppuStack_50;
  long *plStack_48;
  undefined1 *puStack_40;
  undefined4 **ppuStack_38;
  int *piStack_30;
  undefined8 uStack_28;
  
  func_0x000109884c0c(&ppuStack_50,param_1 + 1,*param_1);
  func_0x000109884820(&puStack_78,&ppuStack_50,*param_1);
  if (ppuStack_50 != (undefined8 **)0x0) {
    (*(code *)**ppuStack_50)();
  }
  (**(code **)(*(long *)*param_1 + 0x30))(&puStack_80);
  plVar1 = (long *)*param_1;
  if (*param_2 == 0) {
    aiStack_60[0] = 1;
  }
  else {
    func_0x0001098849a4(aiStack_60,plVar1,*(undefined8 *)(*param_2 + 0x10));
  }
  piStack_30 = aiStack_60;
  uStack_28 = 1;
  (**(code **)(*plVar1 + 0x58))(plVar1);
  ppuStack_50 = &puStack_78;
  ppuStack_38 = &piStack_30;
  plStack_48 = plVar1;
  puStack_40 = (undefined1 *)&puStack_80;
  func_0x0001098960c0(aiStack_70);
  if ((3 < aiStack_70[0]) && (puStack_68 != (undefined8 *)0x0)) {
    (**(code **)*puStack_68)();
  }
  if ((3 < aiStack_60[0]) && (puStack_58 != (undefined8 *)0x0)) {
    (**(code **)*puStack_58)();
  }
  if (puStack_80 != (undefined8 *)0x0) {
    (**(code **)*puStack_80)();
  }
  if (puStack_78 != (undefined8 *)0x0) {
    (**(code **)*puStack_78)();
  }
  return;
}



/* Entry: 10a37ac64; end: 10a37ac73;  */

void FUN_10a37ac64(long param_1)

{
  undefined8 *puVar1;
  long *plVar2;
  undefined8 *puStack_80;
  undefined8 *puStack_78;
  int aiStack_70 [2];
  undefined8 *puStack_68;
  int aiStack_60 [2];
  undefined8 *puStack_58;
  undefined8 **ppuStack_50;
  long *plStack_48;
  undefined1 *puStack_40;
  undefined4 **ppuStack_38;
  int *piStack_30;
  undefined8 uStack_28;
  
  puVar1 = *(undefined8 **)(param_1 + 0x10);
  func_0x000109884c0c(&ppuStack_50,puVar1 + 1,*puVar1);
  func_0x000109884820(&puStack_78,&ppuStack_50,*puVar1);
  if (ppuStack_50 != (undefined8 **)0x0) {
    (*(code *)**ppuStack_50)();
  }
  (**(code **)(*(long *)*puVar1 + 0x30))(&puStack_80);
  plVar2 = (long *)*puVar1;
  if (*(long *)(param_1 + 0x20) == 0) {
    aiStack_60[0] = 1;
  }
  else {
    func_0x0001098849a4(aiStack_60,plVar2,*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x10));
  }
  piStack_30 = aiStack_60;
  uStack_28 = 1;
  (**(code **)(*plVar2 + 0x58))(plVar2);
  ppuStack_50 = &puStack_78;
  ppuStack_38 = &piStack_30;
  plStack_48 = plVar2;
  puStack_40 = (undefined1 *)&puStack_80;
  func_0x0001098960c0(aiStack_70);
  if ((3 < aiStack_70[0]) && (puStack_68 != (undefined8 *)0x0)) {
    (**(code **)*puStack_68)();
  }
  if ((3 < aiStack_60[0]) && (puStack_58 != (undefined8 *)0x0)) {
    (**(code **)*puStack_58)();
  }
  if (puStack_80 != (undefined8 *)0x0) {
    (**(code **)*puStack_80)();
  }
  if (puStack_78 != (undefined8 *)0x0) {
    (**(code **)*puStack_78)();
  }
  return;
}



/* Entry: 10a37ac74; end: 10a37ac9b;  */

long FUN_10a37ac74(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  func_0x00010a12c080(param_1 + 0x18);
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



/* Entry: 10a37ac9c; end: 10a37acdb;  */

void FUN_10a37ac9c(undefined8 *param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined8 uVar5;
  
  *param_1 = &PTR_FUN_110bc74a8;
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



/* Entry: 10a37acdc; end: 10a37ad03;  */

long FUN_10a37acdc(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  func_0x00010a07a8a8(param_1 + 0x20);
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



/* Entry: 10a37ad04; end: 10a37adbb;  */

void FUN_10a37ad04(undefined8 *param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined8 uVar5;
  
  *param_1 = &PTR_FUN_110bc74c0;
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



/* Entry: 10a37adbc; end: 10a37b5c3;  */

/* WARNING: Removing unreachable block (ram,0x00010a37b25c) */
/* WARNING: Removing unreachable block (ram,0x00010a37b260) */
/* WARNING: Removing unreachable block (ram,0x00010a37b268) */
/* WARNING: Removing unreachable block (ram,0x00010a37b270) */
/* WARNING: Removing unreachable block (ram,0x00010a37b274) */

void FUN_10a37adbc(ulong param_1,int param_2,undefined1 param_3,long param_4)

{
  char cVar1;
  bool bVar2;
  ulong uVar3;
  long *****ppppplVar4;
  undefined8 uVar5;
  long ****pppplVar6;
  long *****ppppplVar7;
  long *****ppppplVar8;
  long *****ppppplVar9;
  long ****pppplVar10;
  long ****pppplVar11;
  long ***ppplVar12;
  long *****ppppplVar13;
  long *****unaff_x22;
  long lVar14;
  undefined8 uVar15;
  long ****pppplStack_140;
  long ****pppplStack_138;
  long ****pppplStack_130;
  long ****pppplStack_128;
  long ****pppplStack_120;
  long ****pppplStack_118;
  long ****pppplStack_110;
  long ****pppplStack_108;
  long ****pppplStack_100;
  long ****pppplStack_f8;
  long ****pppplStack_f0;
  long ****pppplStack_e8;
  code *pcStack_e0;
  undefined **appuStack_d8 [8];
  long ****pppplStack_98;
  long ****pppplStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  long lStack_58;
  
  ppppplVar8 = &pppplStack_140;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if ((param_2 != 3) &&
     (uVar3 = param_1, FUN_10ac15a28(param_1,*(undefined8 *)(param_4 + 0x10)), (uVar3 & 1) == 0)) {
    ppppplVar13 = *(long ******)(param_4 + 0x28);
    ppppplVar8 = (long *****)&UNK_10f65190f;
    ppppplVar7 = &pppplStack_f0;
    func_0x000107c2b054();
    if ((ppppplVar13 == (long *****)0x0) || (*(char *)(ppppplVar13 + 8) != '\x02')) {
      if ((ppppplVar13 != (long *****)0x0) && (*(char *)(ppppplVar13 + 8) == '\x01')) {
        ppppplVar7 = &pppplStack_f0;
        ppppplVar8 = ppppplVar13;
        (*(code *)*ppppplVar13)();
      }
    }
    else {
      ppppplVar8 = &pppplStack_f0;
      ppppplVar7 = ppppplVar13;
      FUN_10a05aad0();
    }
    if ((long)pcStack_e0 < 0) {
      ppppplVar7 = (long *****)pppplStack_f0;
      __ZdlPv();
    }
    goto LAB_10a37b3dc;
  }
  uVar15 = *(undefined8 *)(param_4 + 0x10);
  ppppplVar4 = (long *****)0x4d0;
  __Znwm();
  ppppplVar4[1] = (long ****)0x0;
  ppppplVar4[2] = (long ****)0x0;
  *ppppplVar4 = (long ****)&PTR_FUN_110bc8868;
  ppppplVar7 = ppppplVar4 + 3;
  FUN_10ac10fb4(ppppplVar7,uVar15,param_1,3);
  ppppplVar13 = ppppplVar4 + 0xb;
  pppplStack_130 = (long ****)ppppplVar7;
  pppplStack_128 = (long ****)ppppplVar4;
  FUN_10a37b658(&pppplStack_130,ppppplVar13,ppppplVar7);
  pppplVar11 = pppplStack_128;
  pppplVar10 = pppplStack_130;
  *(undefined1 *)(pppplStack_130 + 0x51) = param_3;
  lVar14 = *(long *)(param_4 + 0x10);
  if (lVar14 == 0) {
    pppplVar6 = (long ****)0x2c0;
    __Znwm();
    pppplVar6[1] = (long ***)0x0;
    pppplVar6[2] = (long ***)0x0;
    *pppplVar6 = (long ***)&PTR_DAT_110b9fda0;
    unaff_x22 = (long *****)(pppplVar6 + 3);
    pppplStack_f0 = pppplVar10;
    pppplStack_e8 = pppplVar11;
    if ((long *****)pppplVar11 != (long *****)0x0) {
      ppppplVar7 = (long *****)(pppplVar11 + 1);
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(ppppplVar7,0x10);
        if (bVar2) {
          *ppppplVar7 = (long ****)((long)*ppppplVar7 + 1);
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    pppplVar10 = pppplVar6;
    func_0x00010a0fda30();
    FUN_10ab6a888(unaff_x22,0,&pppplStack_f0,pppplVar10,ppppplVar13);
    if ((long *****)pppplVar11 != (long *****)0x0) {
      ppppplVar7 = (long *****)(pppplVar11 + 1);
      do {
        pppplVar10 = *ppppplVar7;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(ppppplVar7,0x10);
        if (bVar2) {
          *ppppplVar7 = (long ****)((long)pppplVar10 + -1);
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (pppplVar10 == (long ****)0x0) {
        (*(code *)(*pppplVar11)[2])(pppplVar11);
        __ZNSt3__119__shared_weak_count14__release_weakEv(pppplVar11);
      }
    }
    pppplStack_98 = (long ****)unaff_x22;
    pppplStack_90 = pppplVar6;
    FUN_10a05b2a8(&pppplStack_98,pppplVar6 + 8,unaff_x22);
    FUN_10a05b04c(&pppplStack_100,&pppplStack_98);
    pppplVar10 = pppplStack_90;
    if (pppplStack_90 != (long ****)0x0) {
      pppplVar11 = pppplStack_90 + 1;
      do {
        ppplVar12 = *pppplVar11;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(pppplVar11,0x10);
        if (bVar2) {
          *pppplVar11 = (long ***)((long)ppplVar12 + -1);
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (ppplVar12 == (long ***)0x0) {
        (*(code *)(*pppplStack_90)[2])(pppplStack_90);
        __ZNSt3__119__shared_weak_count14__release_weakEv(pppplVar10);
      }
    }
    if ((long *****)pppplStack_f8 == (long *****)0x0) {
      pppplStack_e8 = (long ****)0x0;
    }
    else {
      ppppplVar7 = (long *****)(pppplStack_f8 + 1);
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(ppppplVar7,0x10);
        if (bVar2) {
          *ppppplVar7 = (long ****)((long)*ppppplVar7 + 1);
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      pppplStack_e8 = pppplStack_f8;
      if ((long *****)pppplStack_f8 != (long *****)0x0) {
        ppppplVar7 = (long *****)(pppplStack_f8 + 1);
        do {
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(ppppplVar7,0x10);
          if (bVar2) {
            *ppppplVar7 = (long ****)((long)*ppppplVar7 + 1);
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
      }
    }
    uStack_80 = 0;
    uStack_88 = 0;
    pppplStack_98 = (long ****)&UNK_1053a6a3c;
    appuStack_d8[0] = &PTR_DAT_110bc74e0;
    pcStack_e0 = FUN_10a37b708;
    pppplStack_f0 = pppplStack_100;
    pppplStack_90 = (long ****)&PTR_DAT_110ae9180;
    FUN_10a044790(&pppplStack_98);
    (*(code *)*pppplStack_90)(&pppplStack_90);
    pppplVar10 = pppplStack_f8;
    if ((long *****)pppplStack_f8 != (long *****)0x0) {
      ppppplVar7 = (long *****)(pppplStack_f8 + 1);
      do {
        pppplVar11 = *ppppplVar7;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(ppppplVar7,0x10);
        if (bVar2) {
          *ppppplVar7 = (long ****)((long)pppplVar11 + -1);
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (pppplVar11 == (long ****)0x0) {
        (*(code *)(*pppplStack_f8)[2])(pppplStack_f8);
        __ZNSt3__119__shared_weak_count14__release_weakEv(pppplVar10);
      }
    }
    pppplStack_138 = pppplStack_e8;
    pppplStack_140 = pppplStack_f0;
    if ((long *****)pppplStack_e8 != (long *****)0x0) {
      ppppplVar7 = (long *****)(pppplStack_e8 + 1);
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(ppppplVar7,0x10);
        if (bVar2) {
          *ppppplVar7 = (long ****)((long)*ppppplVar7 + 1);
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    FUN_10a044790(&pcStack_e0);
    (*(code *)*appuStack_d8[0])(appuStack_d8);
    if ((long *****)pppplStack_e8 != (long *****)0x0) {
      ppppplVar7 = (long *****)(pppplStack_e8 + 1);
      do {
        pppplVar10 = *ppppplVar7;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(ppppplVar7,0x10);
        if (bVar2) {
          *ppppplVar7 = (long ****)((long)pppplVar10 + -1);
          cVar1 = ExclusiveMonitorsStatus();
        }
        ppppplVar13 = (long *****)pppplStack_e8;
      } while (cVar1 != '\0');
      goto LAB_10a37b344;
    }
  }
  else {
    pppplStack_120 = *(long *****)(lVar14 + 0x858);
    pppplStack_118 = *(long *****)(lVar14 + 0x860);
    if ((long *****)pppplStack_118 != (long *****)0x0) {
      ppppplVar7 = (long *****)(pppplStack_118 + 1);
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(ppppplVar7,0x10);
        if (bVar2) {
          *ppppplVar7 = (long ****)((long)*ppppplVar7 + 1);
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    uVar15 = 0x2a8;
    __Znwm(0x2a8);
    pppplStack_f0 = pppplVar10;
    pppplStack_e8 = pppplVar11;
    if ((long *****)pppplVar11 != (long *****)0x0) {
      ppppplVar7 = (long *****)(pppplVar11 + 1);
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(ppppplVar7,0x10);
        if (bVar2) {
          *ppppplVar7 = (long ****)((long)*ppppplVar7 + 1);
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    uVar5 = uVar15;
    func_0x00010a0fda30();
    FUN_10ab6a888(uVar15,lVar14,&pppplStack_f0,uVar5,ppppplVar13);
    if ((long *****)pppplVar11 != (long *****)0x0) {
      ppppplVar7 = (long *****)(pppplVar11 + 1);
      do {
        pppplVar10 = *ppppplVar7;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(ppppplVar7,0x10);
        if (bVar2) {
          *ppppplVar7 = (long ****)((long)pppplVar10 + -1);
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (pppplVar10 == (long ****)0x0) {
        (*(code *)(*pppplVar11)[2])(pppplVar11);
        __ZNSt3__119__shared_weak_count14__release_weakEv(pppplVar11);
      }
    }
    pppplVar10 = pppplStack_118;
    unaff_x22 = (long *****)pppplStack_120;
    pppplStack_110 = pppplStack_120;
    pppplStack_108 = pppplStack_118;
    if ((long *****)pppplStack_118 != (long *****)0x0) {
      ppppplVar7 = (long *****)(pppplStack_118 + 1);
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(ppppplVar7,0x10);
        if (bVar2) {
          *ppppplVar7 = (long ****)((long)*ppppplVar7 + 1);
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      ppppplVar7 = (long *****)(pppplStack_118 + 2);
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(ppppplVar7,0x10);
        if (bVar2) {
          *ppppplVar7 = (long ****)((long)*ppppplVar7 + 1);
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(ppppplVar7,0x10);
        if (bVar2) {
          *ppppplVar7 = (long ****)((long)*ppppplVar7 + 1);
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      __ZNSt3__119__shared_weak_count14__release_weakEv(pppplStack_118);
    }
    pppplStack_100 = (long ****)unaff_x22;
    pppplStack_f8 = pppplVar10;
    FUN_10a05b208(&pppplStack_98,uVar15,&pppplStack_100);
    FUN_10a05b04c(&pppplStack_140);
    pppplVar10 = pppplStack_90;
    if ((long *****)pppplStack_90 != (long *****)0x0) {
      ppppplVar7 = (long *****)(pppplStack_90 + 1);
      do {
        pppplVar11 = *ppppplVar7;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(ppppplVar7,0x10);
        if (bVar2) {
          *ppppplVar7 = (long ****)((long)pppplVar11 + -1);
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (pppplVar11 == (long ****)0x0) {
        (*(code *)(*pppplStack_90)[2])(pppplStack_90);
        __ZNSt3__119__shared_weak_count14__release_weakEv(pppplVar10);
      }
    }
    if ((long *****)pppplStack_f8 != (long *****)0x0) {
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
    pppplVar10 = pppplStack_108;
    if ((long *****)pppplStack_108 != (long *****)0x0) {
      ppppplVar7 = (long *****)(pppplStack_108 + 1);
      do {
        pppplVar11 = *ppppplVar7;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(ppppplVar7,0x10);
        if (bVar2) {
          *ppppplVar7 = (long ****)((long)pppplVar11 + -1);
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (pppplVar11 == (long ****)0x0) {
        (*(code *)(*pppplStack_108)[2])(pppplStack_108);
        __ZNSt3__119__shared_weak_count14__release_weakEv(pppplVar10);
      }
    }
    if (((long *****)pppplStack_120 != (long *****)0x0) &&
       ((long *****)pppplStack_140 != (long *****)0x0)) {
      pppplStack_98 = pppplStack_140;
      pppplStack_90 = pppplStack_138;
      if ((long *****)pppplStack_138 != (long *****)0x0) {
        ppppplVar7 = (long *****)(pppplStack_138 + 1);
        do {
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(ppppplVar7,0x10);
          if (bVar2) {
            *ppppplVar7 = (long ****)((long)*ppppplVar7 + 1);
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
      }
      FUN_10aa88c30(pppplStack_120,&pppplStack_98);
      pppplVar10 = pppplStack_90;
      if ((long *****)pppplStack_90 != (long *****)0x0) {
        ppppplVar7 = (long *****)(pppplStack_90 + 1);
        do {
          pppplVar11 = *ppppplVar7;
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(ppppplVar7,0x10);
          if (bVar2) {
            *ppppplVar7 = (long ****)((long)pppplVar11 + -1);
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
        if (pppplVar11 == (long ****)0x0) {
          (*(code *)(*pppplStack_90)[2])(pppplStack_90);
          __ZNSt3__119__shared_weak_count14__release_weakEv(pppplVar10);
        }
      }
    }
    if ((long *****)pppplStack_118 != (long *****)0x0) {
      ppppplVar7 = (long *****)(pppplStack_118 + 1);
      do {
        pppplVar10 = *ppppplVar7;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(ppppplVar7,0x10);
        if (bVar2) {
          *ppppplVar7 = (long ****)((long)pppplVar10 + -1);
          cVar1 = ExclusiveMonitorsStatus();
        }
        ppppplVar13 = (long *****)pppplStack_118;
      } while (cVar1 != '\0');
LAB_10a37b344:
      if (pppplVar10 == (long ****)0x0) {
        (*(code *)(*ppppplVar13)[2])(ppppplVar13);
        __ZNSt3__119__shared_weak_count14__release_weakEv(ppppplVar13);
      }
    }
  }
  ppppplVar7 = *(long ******)(param_4 + 0x18);
  FUN_10a00bca8();
  ppppplVar13 = (long *****)pppplStack_138;
  if ((long *****)pppplStack_138 != (long *****)0x0) {
    ppppplVar4 = (long *****)(pppplStack_138 + 1);
    do {
      pppplVar10 = *ppppplVar4;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(ppppplVar4,0x10);
      if (bVar2) {
        *ppppplVar4 = (long ****)((long)pppplVar10 + -1);
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (pppplVar10 == (long ****)0x0) {
      (*(code *)(*pppplStack_138)[2])(pppplStack_138);
      __ZNSt3__119__shared_weak_count14__release_weakEv();
      ppppplVar7 = ppppplVar13;
    }
  }
  ppppplVar13 = (long *****)pppplStack_128;
  if ((long *****)pppplStack_128 != (long *****)0x0) {
    ppppplVar4 = (long *****)(pppplStack_128 + 1);
    do {
      pppplVar10 = *ppppplVar4;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(ppppplVar4,0x10);
      if (bVar2) {
        *ppppplVar4 = (long ****)((long)pppplVar10 + -1);
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (pppplVar10 == (long ****)0x0) {
      (*(code *)(*pppplStack_128)[2])(pppplStack_128);
      ppppplVar7 = ppppplVar13;
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
  }
LAB_10a37b3dc:
  while (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_58) {
    ___stack_chk_fail();
    ppppplVar4 = ppppplVar8;
    func_0x00010a0536d4(&pppplStack_98);
    func_0x00010a05248c(&pppplStack_140);
    FUN_10a054c5c(&pppplStack_120);
    FUN_10a37b740(&pppplStack_130);
    while (ppppplVar9 = ppppplVar4, (int)ppppplVar8 != 1) {
      __Unwind_Resume();
      ppppplVar4 = ppppplVar9;
      __ZNSt3__119__shared_weak_countD2Ev(unaff_x22);
      __ZdlPv();
      ppppplVar8 = ppppplVar9;
    }
    ___cxa_begin_catch();
    (*(code *)(*ppppplVar7)[2])();
    FUN_10a37b5c4();
    ppppplVar13 = (long *****)ppppplVar13[5];
    func_0x000107c2b054(&pppplStack_f0,&UNK_10f651934);
    ppppplVar8 = &pppplStack_f0;
    ppppplVar7 = ppppplVar13;
    FUN_10a13609c();
    if ((long)pcStack_e0 < 0) {
      ppppplVar7 = (long *****)pppplStack_f0;
      __ZdlPv();
    }
    ___cxa_end_catch();
  }
  return;
}



/* Entry: 10a37b5c4; end: 10a37b617;  */

undefined * FUN_10a37b5c4(undefined8 param_1)

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
  ppuVar6 = &PTR_PTR_113301950;
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



/* Entry: 10a37b618; end: 10a37b627;  */

void FUN_10a37b618(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110bc8868;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10a37b628; end: 10a37b647;  */

void FUN_10a37b628(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110bc8868;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a37b648; end: 10a37b657;  */

void FUN_10a37b648(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010a37b650. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 10a37b658; end: 10a37b707;  */

void FUN_10a37b658(long param_1,undefined8 *param_2,undefined8 param_3)

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



/* Entry: 10a37b708; end: 10a37b73f;  */

void FUN_10a37b708(long param_1)

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



/* Entry: 10a37b740; end: 10a37b7bf;  */

long FUN_10a37b740(long param_1)

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



/* Entry: 10a37b7c0; end: 10a37b877;  */

void FUN_10a37b7c0(undefined8 *param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined8 uVar5;
  
  *param_1 = &PTR_DAT_110bc74f8;
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



/* Entry: 10a37b878; end: 10a37b8cf;  */

long FUN_10a37b878(long param_1)

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



/* Entry: 10a37b8d0; end: 10a37baff;  */

void FUN_10a37b8d0(undefined8 param_1,undefined8 param_2,undefined1 param_3,long param_4)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  char cVar4;
  bool bVar5;
  long *plVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uStack_68;
  long *plStack_60;
  long *plStack_50;
  long *plStack_48;
  
  uVar8 = *(undefined8 *)(param_4 + 0x10);
  plVar6 = (long *)0x410;
  __Znwm();
  plVar6[1] = 0;
  plVar6[2] = 0;
  *plVar6 = (long)&PTR_FUN_110bc8920;
  plVar1 = plVar6 + 3;
  uStack_68 = 0;
  plStack_60 = (long *)0x0;
  FUN_10ac8b384(plVar1,uVar8,param_1,&uStack_68,1);
  plVar3 = plStack_60;
  if (plStack_60 != (long *)0x0) {
    plVar2 = plStack_60 + 1;
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
      (**(code **)(*plStack_60 + 0x10))(plStack_60);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar3);
    }
  }
  plStack_50 = plVar1;
  plStack_48 = plVar6;
  FUN_10a37bcec(&plStack_50,plVar6 + 0xb,plVar1);
  *(undefined1 *)(plStack_50 + 0x51) = param_3;
  FUN_10a37bb00(&uStack_68,*(undefined8 *)(param_4 + 0x10),&plStack_50);
  FUN_10a00bca8(*(undefined8 *)(param_4 + 0x18),&uStack_68);
  plVar1 = plStack_60;
  if (plStack_60 != (long *)0x0) {
    plVar3 = plStack_60 + 1;
    do {
      lVar7 = *plVar3;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar3,0x10);
      if (bVar5) {
        *plVar3 = lVar7 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar7 == 0) {
      (**(code **)(*plStack_60 + 0x10))(plStack_60);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar1);
    }
  }
  plVar1 = plStack_48;
  if (plStack_48 != (long *)0x0) {
    plVar3 = plStack_48 + 1;
    do {
      lVar7 = *plVar3;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar3,0x10);
      if (bVar5) {
        *plVar3 = lVar7 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar7 == 0) {
      (**(code **)(*plStack_48 + 0x10))(plStack_48);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar1);
    }
  }
  return;
}



/* Entry: 10a37bb00; end: 10a37bc57;  */

undefined8 ** FUN_10a37bb00(undefined8 *param_1,long param_2,undefined8 param_3)

{
  undefined8 **ppuVar1;
  char cVar2;
  bool bVar3;
  undefined8 **ppuVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 **ppuVar7;
  int iVar8;
  undefined **ppuVar9;
  undefined **ppuVar10;
  undefined8 *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined *puStack_9b8;
  undefined8 uStack_9b0;
  undefined1 uStack_9a8;
  undefined *puStack_9a0;
  undefined8 uStack_998;
  undefined1 uStack_990;
  undefined **ppuStack_988;
  undefined *puStack_980;
  undefined *puStack_978;
  ulong uStack_970;
  ulong uStack_968;
  ulong uStack_960;
  undefined4 uStack_958;
  undefined **ppuStack_950;
  undefined *puStack_948;
  undefined8 uStack_940;
  undefined1 uStack_938;
  undefined *puStack_930;
  undefined8 uStack_928;
  undefined1 uStack_920;
  int iStack_918;
  undefined1 auStack_910 [1024];
  undefined1 auStack_510 [1024];
  long lStack_110;
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
  lStack_88 = param_2;
  if (param_2 == 0) {
    uStack_a0 = 0;
    FUN_10a37bf84(&uStack_80,&uStack_a0,param_3);
    param_1[1] = ppuStack_78;
    *param_1 = uStack_80;
    if (ppuStack_78 != (undefined8 **)0x0) {
      ppuVar7 = ppuStack_78 + 1;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(ppuVar7,0x10);
        if (bVar3) {
          *ppuVar7 = (undefined8 *)((long)*ppuVar7 + 1);
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    FUN_10a044790(auStack_70);
    ppuVar7 = apuStack_68;
    (*(code *)*apuStack_68[0])();
    if (ppuStack_78 == (undefined8 **)0x0) goto LAB_10a37bc10;
    ppuVar1 = ppuStack_78 + 1;
    do {
      puVar11 = *ppuVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(ppuVar1,0x10);
      if (bVar3) {
        *ppuVar1 = (undefined8 *)((long)puVar11 + -1);
        cVar2 = ExclusiveMonitorsStatus();
      }
      ppuVar4 = ppuStack_78;
    } while (cVar2 != '\0');
  }
  else {
    puStack_98 = *(undefined8 **)(param_2 + 0x858);
    ppuStack_90 = *(undefined8 ***)(param_2 + 0x860);
    if (ppuStack_90 != (undefined8 **)0x0) {
      ppuVar7 = ppuStack_90 + 1;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(ppuVar7,0x10);
        if (bVar3) {
          *ppuVar7 = (undefined8 *)((long)*ppuVar7 + 1);
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    ppuVar7 = &puStack_98;
    FUN_10a37bd9c(param_1,ppuVar7,&lStack_88);
    if (ppuStack_90 == (undefined8 **)0x0) goto LAB_10a37bc10;
    ppuVar1 = ppuStack_90 + 1;
    do {
      puVar11 = *ppuVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(ppuVar1,0x10);
      if (bVar3) {
        *ppuVar1 = (undefined8 *)((long)puVar11 + -1);
        cVar2 = ExclusiveMonitorsStatus();
      }
      ppuVar4 = ppuStack_90;
    } while (cVar2 != '\0');
  }
  if (puVar11 == (undefined8 *)0x0) {
    (*(code *)(*ppuVar4)[2])(ppuVar4);
    __ZNSt3__119__shared_weak_count14__release_weakEv();
    ppuVar7 = ppuVar4;
  }
LAB_10a37bc10:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return ppuVar7;
  }
  ___stack_chk_fail();
  __Unwind_Resume(ppuVar7);
  FUN_10ae030a0(0,ppuVar7);
  ppuVar10 = &PTR_PTR_113301988;
  ppuVar9 = ppuVar10;
  FUN_10ae079a0();
  FUN_10ae030d8();
  lStack_110 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar7 = (undefined8 **)0x0;
  if (ppuVar9 != (undefined **)0x0) {
    FUN_10ae03188(&puStack_948,auStack_510,0x400,auStack_910,0x400,ppuVar9[0x13],ppuVar9[0xf],
                  ppuVar9 + 0x14,0x400);
    puStack_9b8 = puStack_930;
    uStack_9b0 = uStack_928;
    puStack_9a0 = puStack_948;
    uStack_998 = uStack_940;
    uStack_9a8 = uStack_920;
    if (iStack_918 != 0) {
      puStack_9b8 = &UNK_10f6c352e;
      uStack_9b0 = 0x10;
      puStack_9a0 = &UNK_10f6c352e;
      uStack_998 = 0x10;
      uStack_9a8 = 0;
      uStack_938 = 0;
    }
    puVar13 = ppuVar9[0x12];
    puVar12 = ppuVar9[0xb];
    uVar5 = 0;
    _clock_gettime_nsec_np();
    uVar6 = uVar5;
    _pthread_self();
    _pthread_mach_thread_np();
    ppuStack_988 = ppuVar9 + 1;
    uStack_958 = *(undefined4 *)(ppuVar9 + 0xe);
    uStack_960 = uVar6 & 0xffffffff;
    ppuStack_950 = ppuVar9 + 0x10;
    ppuVar7 = (undefined8 **)*ppuVar9;
    ppuVar10 = (undefined **)&ppuStack_988;
    uStack_990 = uStack_938;
    puStack_980 = puVar12;
    puStack_978 = puVar13;
    uStack_970 = (ulong)(puVar13 != (undefined *)0x0);
    uStack_968 = uVar5;
    FUN_10ae0784c(ppuVar7,ppuVar10,&puStack_9a0,&puStack_9b8);
  }
  iVar8 = (int)ppuVar10;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_110) {
    ___stack_chk_fail();
    if (iVar8 == 0) {
      __Unwind_Resume();
    }
    func_0x000104bd46a0();
    func_0x00010ae087bc();
    FUN_10ae07e54(ppuVar7);
    return ppuVar7;
  }
  return ppuVar7;
}



/* Entry: 10a37bc58; end: 10a37bcab;  */

undefined * FUN_10a37bc58(undefined8 param_1)

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
  ppuVar6 = &PTR_PTR_113301988;
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



/* Entry: 10a37bcac; end: 10a37bcbb;  */

void FUN_10a37bcac(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110bc8920;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10a37bcbc; end: 10a37bcdb;  */

void FUN_10a37bcbc(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110bc8920;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a37bcdc; end: 10a37bceb;  */

void FUN_10a37bcdc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010a37bce4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 10a37bcec; end: 10a37bd9b;  */

void FUN_10a37bcec(long param_1,undefined8 *param_2,undefined8 param_3)

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



/* Entry: 10a37bd9c; end: 10a37bf83;  */

void FUN_10a37bd9c(long *param_1,long *param_2,undefined8 param_3,undefined8 param_4)

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
  
  FUN_10a37c16c(param_3,param_4);
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



/* Entry: 10a37bf84; end: 10a37c16b;  */

/* WARNING: Removing unreachable block (ram,0x00010a37c098) */
/* WARNING: Removing unreachable block (ram,0x00010a37c09c) */
/* WARNING: Removing unreachable block (ram,0x00010a37c0a4) */
/* WARNING: Removing unreachable block (ram,0x00010a37c0ac) */
/* WARNING: Removing unreachable block (ram,0x00010a37c0b0) */

undefined *** FUN_10a37bf84(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined ***pppuVar4;
  undefined ***pppuVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined *puVar8;
  undefined **ppuVar9;
  long lVar10;
  long *plVar11;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
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
  puVar6 = (undefined8 *)&uStack_81;
  FUN_10a37c240(&puStack_68,&uStack_69,puVar6,param_2,param_3);
  FUN_10a05b04c(&uStack_80,&puStack_68);
  if (ppuStack_60 != (undefined **)0x0) {
    ppuVar9 = ppuStack_60 + 1;
    do {
      puVar8 = *ppuVar9;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(ppuVar9,0x10);
      if (bVar3) {
        *ppuVar9 = puVar8 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (puVar8 == (undefined *)0x0) {
      (**(code **)(*ppuStack_60 + 0x10))(ppuStack_60);
      __ZNSt3__119__shared_weak_count14__release_weakEv(ppuStack_60);
    }
  }
  if (pppuStack_78 == (undefined ***)0x0) {
    *param_1 = uStack_80;
    param_1[1] = 0;
  }
  else {
    pppuVar4 = pppuStack_78 + 1;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(pppuVar4,0x10);
      if (bVar3) {
        *pppuVar4 = (undefined **)((long)*pppuVar4 + 1);
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    *param_1 = uStack_80;
    param_1[1] = pppuStack_78;
    if (pppuStack_78 != (undefined ***)0x0) {
      pppuVar4 = pppuStack_78 + 1;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(pppuVar4,0x10);
        if (bVar3) {
          *pppuVar4 = (undefined **)((long)*pppuVar4 + 1);
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
  }
  pppuVar4 = &ppuStack_60;
  param_1[2] = FUN_10a37c3b0;
  param_1[3] = &PTR_DAT_110bc8038;
  param_1[4] = uStack_80;
  param_1[5] = pppuStack_78;
  uStack_50 = 0;
  uStack_58 = 0;
  puStack_68 = &UNK_1053a6a3c;
  ppuStack_60 = &PTR_DAT_110ae9180;
  FUN_10a044790(&puStack_68);
  (*(code *)*ppuStack_60)();
  if (pppuStack_78 != (undefined ***)0x0) {
    pppuVar5 = pppuStack_78 + 1;
    do {
      ppuVar9 = *pppuVar5;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(pppuVar5,0x10);
      if (bVar3) {
        *pppuVar5 = (undefined **)((long)ppuVar9 + -1);
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (ppuVar9 == (undefined **)0x0) {
      (*(code *)(*pppuStack_78)[2])(pppuStack_78);
      __ZNSt3__119__shared_weak_count14__release_weakEv();
      pppuVar4 = pppuStack_78;
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return pppuVar4;
  }
  ___stack_chk_fail();
  func_0x00010a05248c(&puStack_68);
  __Unwind_Resume();
  pppuVar5 = (undefined ***)0x2a8;
  puVar7 = puVar6;
  __Znwm(0x2a8);
  ppuVar9 = *pppuVar4;
  plVar11 = (long *)puVar6[1];
  uStack_c8 = puVar6[1];
  uStack_d0 = *puVar6;
  if (plVar11 != (long *)0x0) {
    plVar1 = plVar11 + 1;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  pppuVar4 = pppuVar5;
  func_0x00010a0fda30();
  FUN_10ab6a888(pppuVar5,ppuVar9,&uStack_d0,pppuVar4,puVar7);
  if (plVar11 != (long *)0x0) {
    plVar1 = plVar11 + 1;
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
      (**(code **)(*plVar11 + 0x10))(plVar11);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar11);
    }
  }
  return pppuVar5;
}



/* Entry: 10a37c16c; end: 10a37c23f;  */

undefined8 FUN_10a37c16c(undefined8 *param_1,undefined8 *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  long lVar7;
  long *plVar8;
  undefined8 uVar9;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uVar4 = 0x2a8;
  puVar6 = param_2;
  __Znwm(0x2a8);
  uVar9 = *param_1;
  plVar8 = (long *)param_2[1];
  uStack_38 = param_2[1];
  uStack_40 = *param_2;
  if (plVar8 != (long *)0x0) {
    plVar1 = plVar8 + 1;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  uVar5 = uVar4;
  func_0x00010a0fda30();
  FUN_10ab6a888(uVar4,uVar9,&uStack_40,uVar5,puVar6);
  if (plVar8 != (long *)0x0) {
    plVar1 = plVar8 + 1;
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
      (**(code **)(*plVar8 + 0x10))(plVar8);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar8);
    }
  }
  return uVar4;
}



/* Entry: 10a37c240; end: 10a37c2b7;  */

void FUN_10a37c240(long *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  
  lVar5 = 0x2c0;
  __Znwm();
  FUN_10a37c2b8();
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



/* Entry: 10a37c2b8; end: 10a37c2ff;  */

undefined8 * FUN_10a37c2b8(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_DAT_110b9fda0;
  FUN_10a37c300(param_1 + 3);
  return param_1;
}



/* Entry: 10a37c300; end: 10a37c3af;  */

undefined8
FUN_10a37c300(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 uVar4;
  long lVar5;
  long *plVar6;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  plVar6 = (long *)param_4[1];
  uStack_28 = param_4[1];
  uStack_30 = *param_4;
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
  }
  uVar4 = param_1;
  func_0x00010a0fda30();
  FUN_10ab6a888(param_1,0,&uStack_30,uVar4,param_2);
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
  return param_1;
}



/* Entry: 10a37c3b0; end: 10a37c3e7;  */

void FUN_10a37c3b0(long param_1)

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



/* Entry: 10a37c3e8; end: 10a37c40f;  */

long FUN_10a37c3e8(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  func_0x00010a07a8a8(param_1 + 0x20);
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



/* Entry: 10a37c410; end: 10a37c4c7;  */

void FUN_10a37c410(undefined8 *param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined8 uVar5;
  
  *param_1 = &PTR_FUN_110bc7518;
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



/* Entry: 10a37c4c8; end: 10a37c7b3;  */

void FUN_10a37c4c8(undefined8 param_1,undefined8 param_2,undefined1 param_3,long param_4)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  long *plVar5;
  undefined **ppuVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  long lStack_60;
  long *plStack_58;
  long lStack_48;
  long *plStack_40;
  char cStack_31;
  
  puVar9 = *(undefined8 **)(param_4 + 0x10);
  uVar8 = *puVar9;
  FUN_10a08d2e0(&lStack_48);
  FUN_10ab273c0(&lStack_60,uVar8,&lStack_48);
  if (cStack_31 < '\0') {
    __ZdlPv(lStack_48);
  }
  if (lStack_60 == 0) {
    ppuVar6 = &PTR_PTR_1133019b8;
    FUN_10ae079a0(0,&PTR_PTR_1133019b8);
    FUN_10ae07cd4(ppuVar6,&PTR_PTR_1133019b8);
    puVar9 = (undefined8 *)puVar9[3];
    func_0x000107c2b054(&lStack_48,&UNK_10f651993);
    if (puVar9 == (undefined8 *)0x0 || *(char *)(puVar9 + 8) != '\x02') {
      if ((puVar9 != (undefined8 *)0x0) && (*(char *)(puVar9 + 8) == '\x01')) {
        (*(code *)*puVar9)(&lStack_48,puVar9);
      }
    }
    else {
      FUN_10a05aad0(puVar9,&lStack_48);
    }
    if (cStack_31 < '\0') {
      __ZdlPv(lStack_48);
    }
  }
  else {
    *(undefined1 *)(lStack_60 + 0xe0) = param_3;
    lVar7 = puVar9[5];
    if (lVar7 != 0) {
      lStack_48 = lStack_60;
      plStack_40 = plStack_58;
      if (plStack_58 != (long *)0x0) {
        plVar5 = plStack_58 + 1;
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
          if (bVar3) {
            *plVar5 = *plVar5 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      plVar5 = *(long **)(lVar7 + 0x18);
      if (plVar5 == (long *)0x0) {
        FUN_10a06186c();
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x10a37c678);
        (*pcVar4)();
      }
      (**(code **)(*plVar5 + 0x30))(plVar5,&lStack_48);
      plVar5 = plStack_40;
      if (plStack_40 != (long *)0x0) {
        plVar1 = plStack_40 + 1;
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
          (**(code **)(*plStack_40 + 0x10))(plStack_40);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
        }
      }
    }
    func_0x00010a1bcda0(puVar9[1],&lStack_60);
  }
  if (plStack_58 != (long *)0x0) {
    plVar5 = plStack_58 + 1;
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
      (**(code **)(*plStack_58 + 0x10))(plStack_58);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_58);
    }
  }
  return;
}



/* Entry: 10a37c7b4; end: 10a37c807;  */

undefined * FUN_10a37c7b4(undefined8 param_1)

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
  ppuVar6 = &PTR_PTR_1133019f8;
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



/* Entry: 10a37c808; end: 10a37c84f;  */

void FUN_10a37c808(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 8);
  if (lVar1 != 0) {
    func_0x00010a0428c0(lVar1 + 0x28);
    func_0x00010a07a8a8(lVar1 + 0x18);
    FUN_10a1cfc50(lVar1 + 8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(lVar1);
    return;
  }
  return;
}



/* Entry: 10a37c850; end: 10a37c867;  */

void FUN_10a37c850(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_2[1] = 0;
  return;
}



/* Entry: 10a37c868; end: 10a37c90f;  */

void FUN_10a37c868(undefined8 *param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  
  puVar6 = *(undefined8 **)(param_2 + 8);
  *param_1 = &PTR_FUN_110bc7538;
  puVar4 = (undefined8 *)0x38;
  __Znwm();
  uVar7 = *puVar6;
  puVar4[1] = puVar6[1];
  *puVar4 = uVar7;
  lVar5 = puVar6[2];
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
  lVar5 = puVar6[4];
  uVar7 = puVar6[3];
  puVar4[4] = puVar6[4];
  puVar4[3] = uVar7;
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
  lVar5 = puVar6[6];
  uVar7 = puVar6[5];
  puVar4[6] = puVar6[6];
  puVar4[5] = uVar7;
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
  return;
}



/* Entry: 10a37c910; end: 10a37d18b;  */

void FUN_10a37c910(undefined8 param_1,undefined8 param_2,undefined1 param_3,long param_4)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  long **pplVar6;
  long *plVar7;
  undefined8 *puVar8;
  long *plVar9;
  code *pcVar10;
  undefined8 *puVar11;
  long lVar12;
  long *plStack_120;
  long *plStack_118;
  long lStack_110;
  long *plStack_108;
  long *plStack_100;
  long *plStack_f8;
  long *plStack_f0;
  long *plStack_e8;
  long *plStack_e0;
  long *plStack_d8;
  long *plStack_d0;
  long *plStack_c8;
  undefined8 uStack_c0;
  long *plStack_b8;
  long *plStack_b0;
  long *plStack_a8;
  long *plStack_a0;
  long *plStack_98;
  code *pcStack_88;
  undefined **ppuStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long *plStack_68;
  long *plStack_60;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  FUN_10a377e98(&plStack_100,&plStack_a0,param_4 + 0x10,param_1);
  plVar9 = (long *)0x1;
  FUN_10a37d18c(plStack_100);
  plVar1 = plStack_f8;
  if (plVar9 != (long *)0x0) {
    lStack_110 = *plVar9;
    plStack_108 = (long *)plVar9[1];
    if (plStack_108 != (long *)0x0) {
      plVar9 = plStack_108 + 1;
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar9,0x10);
        if (bVar4) {
          *plVar9 = *plVar9 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    if (lStack_110 == 0) goto LAB_10a37cf48;
    *(undefined1 *)(lStack_110 + 8) = param_3;
    lVar12 = *(long *)(param_4 + 0x10);
    if (lVar12 == 0) {
      plVar7 = (long *)0x1d0;
      __Znwm();
      plVar7[1] = 0;
      plVar7[2] = 0;
      *plVar7 = (long)&PTR_DAT_110bc7fe0;
      plVar9 = plVar7 + 3;
      plStack_98 = plVar1;
      plStack_a0 = plStack_100;
      if (plVar1 != (long *)0x0) {
        plVar1 = plVar1 + 1;
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar4) {
            *plVar1 = *plVar1 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
      FUN_10a8c0cac(plVar9,0,&plStack_a0,1);
      plVar1 = plStack_98;
      if (plStack_98 != (long *)0x0) {
        plVar2 = plStack_98 + 1;
        do {
          lVar12 = *plVar2;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
          if (bVar4) {
            *plVar2 = lVar12 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (lVar12 == 0) {
          (**(code **)(*plStack_98 + 0x10))(plStack_98);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar1);
        }
      }
      pplVar6 = (long **)(plVar7 + 8);
      plStack_d0 = plVar9;
      plStack_c8 = plVar7;
      FUN_10a37d52c(&plStack_d0,pplVar6,plVar9);
      FUN_10a37d328(&plStack_120,&plStack_d0);
      if (plStack_c8 != (long *)0x0) {
        plVar1 = plStack_c8 + 1;
        do {
          lVar12 = *plVar1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar4) {
            *plVar1 = lVar12 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
          plVar9 = plStack_c8;
        } while (cVar3 != '\0');
        goto LAB_10a37cc88;
      }
    }
    else {
      plStack_f0 = *(long **)(lVar12 + 0x858);
      plStack_e8 = *(long **)(lVar12 + 0x860);
      if (plStack_e8 != (long *)0x0) {
        plVar9 = plStack_e8 + 1;
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar9,0x10);
          if (bVar4) {
            *plVar9 = *plVar9 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
      pplVar6 = (long **)0x1b8;
      __Znwm();
      plStack_98 = plVar1;
      plStack_a0 = plStack_100;
      if (plVar1 != (long *)0x0) {
        plVar1 = plVar1 + 1;
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar4) {
            *plVar1 = *plVar1 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
      FUN_10a8c0cac(pplVar6,lVar12,&plStack_a0,1);
      plVar1 = plStack_98;
      if (plStack_98 != (long *)0x0) {
        plVar9 = plStack_98 + 1;
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
          (**(code **)(*plStack_98 + 0x10))(plStack_98);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar1);
        }
      }
      plVar9 = plStack_e8;
      plVar1 = plStack_f0;
      plStack_e0 = plStack_f0;
      plStack_d8 = plStack_e8;
      if (plStack_e8 != (long *)0x0) {
        plVar7 = plStack_e8 + 1;
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar7,0x10);
          if (bVar4) {
            *plVar7 = *plVar7 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        plVar7 = plStack_e8 + 2;
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar7,0x10);
          if (bVar4) {
            *plVar7 = *plVar7 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar7,0x10);
          if (bVar4) {
            *plVar7 = *plVar7 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_e8);
      }
      plStack_a0 = plVar1;
      plStack_98 = plVar9;
      FUN_10a37d48c(&plStack_d0,pplVar6,&plStack_a0);
      FUN_10a37d328(&plStack_120,&plStack_d0);
      plVar1 = plStack_c8;
      if (plStack_c8 != (long *)0x0) {
        plVar9 = plStack_c8 + 1;
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
          (**(code **)(*plStack_c8 + 0x10))(plStack_c8);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar1);
        }
      }
      if (plStack_98 != (long *)0x0) {
        __ZNSt3__119__shared_weak_count14__release_weakEv();
      }
      plVar1 = plStack_d8;
      if (plStack_d8 != (long *)0x0) {
        plVar9 = plStack_d8 + 1;
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
          (**(code **)(*plStack_d8 + 0x10))(plStack_d8);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar1);
        }
      }
      if ((plStack_f0 != (long *)0x0) && (plStack_120 != (long *)0x0)) {
        plStack_d0 = plStack_120;
        plStack_c8 = plStack_118;
        if (plStack_118 != (long *)0x0) {
          plVar1 = plStack_118 + 1;
          do {
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar4) {
              *plVar1 = *plVar1 + 1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
        }
        pplVar6 = &plStack_d0;
        FUN_10aa88c30();
        plVar1 = plStack_c8;
        if (plStack_c8 != (long *)0x0) {
          plVar9 = plStack_c8 + 1;
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
            (**(code **)(*plStack_c8 + 0x10))(plStack_c8);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar1);
          }
        }
      }
      if (plStack_e8 != (long *)0x0) {
        plVar1 = plStack_e8 + 1;
        do {
          lVar12 = *plVar1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar4) {
            *plVar1 = lVar12 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
          plVar9 = plStack_e8;
        } while (cVar3 != '\0');
LAB_10a37cc88:
        if (lVar12 == 0) {
          (**(code **)(*plVar9 + 0x10))(plVar9);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar9);
        }
      }
    }
    puVar11 = *(undefined8 **)(param_4 + 0x18);
    if (puVar11 == (undefined8 *)0x0 || *(char *)(puVar11 + 8) != '\x02') {
      if ((puVar11 != (undefined8 *)0x0) && (*(char *)(puVar11 + 8) == '\x01')) {
        pcVar10 = (code *)*puVar11;
        plStack_98 = plStack_118;
        plStack_a0 = plStack_120;
        if (plStack_118 != (long *)0x0) {
          plVar1 = plStack_118 + 1;
          do {
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar4) {
              *plVar1 = *plVar1 + 1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
        }
        (*pcVar10)(&plStack_a0,puVar11);
        if (plStack_98 != (long *)0x0) {
          plVar1 = plStack_98 + 1;
          do {
            lVar12 = *plVar1;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar4) {
              *plVar1 = lVar12 + -1;
              cVar3 = ExclusiveMonitorsStatus();
            }
            plVar9 = plStack_98;
          } while (cVar3 != '\0');
LAB_10a37ce4c:
          if (lVar12 == 0) {
            (**(code **)(*plVar9 + 0x10))(plVar9);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar9);
          }
        }
      }
    }
    else {
      puVar8 = puVar11;
      FUN_10a688b40();
      plVar1 = plStack_118;
      if (puVar8 == (undefined8 *)0x0) {
        if (pplVar6 != (long **)0x0) {
          uStack_70 = puVar11[1];
          uStack_78 = *puVar11;
          if (puVar11[1] != 0) {
            plVar9 = (long *)(puVar11[1] + 8);
            do {
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(plVar9,0x10);
              if (bVar4) {
                *plVar9 = *plVar9 + 1;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
          }
          plStack_b0 = plStack_120;
          plStack_a8 = plStack_118;
          if (plStack_118 != (long *)0x0) {
            plVar9 = plStack_118 + 1;
            do {
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(plVar9,0x10);
              if (bVar4) {
                *plVar9 = *plVar9 + 1;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
          }
          pcStack_88 = FUN_10a37d8a0;
          ppuStack_80 = &PTR_FUN_110bc7558;
          uStack_c0 = 0;
          plStack_b8 = (long *)0x0;
          plStack_68 = plStack_120;
          plStack_60 = plStack_118;
          if (plStack_118 != (long *)0x0) {
            plVar9 = plStack_118 + 1;
            do {
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(plVar9,0x10);
              if (bVar4) {
                *plVar9 = *plVar9 + 1;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
          }
          FUN_10a4634ec(pplVar6,&pcStack_88);
          (*(code *)*ppuStack_80)(&ppuStack_80);
          if (plVar1 != (long *)0x0) {
            plVar9 = plVar1 + 1;
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
              (**(code **)(*plVar1 + 0x10))(plVar1);
              __ZNSt3__119__shared_weak_count14__release_weakEv(plVar1);
            }
          }
          if (plStack_b8 != (long *)0x0) {
            plVar1 = plStack_b8 + 1;
            do {
              lVar12 = *plVar1;
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
              if (bVar4) {
                *plVar1 = lVar12 + -1;
                cVar3 = ExclusiveMonitorsStatus();
              }
              plVar9 = plStack_b8;
            } while (cVar3 != '\0');
            goto LAB_10a37ce4c;
          }
        }
      }
      else {
        *puVar8 = CONCAT44((int)((ulong)*puVar8 >> 0x20) + 1,(int)*puVar8 + 1);
        FUN_10a37d710(*puVar11,&plStack_120);
        iVar5 = *(int *)((long)puVar8 + 4) + -1;
        *(int *)((long)puVar8 + 4) = iVar5;
        if (iVar5 == 0) {
          *(undefined4 *)puVar8 = 0;
        }
      }
    }
    if (plStack_118 != (long *)0x0) {
      plVar1 = plStack_118 + 1;
      do {
        lVar12 = *plVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar4) {
          *plVar1 = lVar12 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar12 == 0) {
        (**(code **)(*plStack_118 + 0x10))(plStack_118);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_118);
      }
    }
    plVar1 = plStack_108;
    if (plStack_108 != (long *)0x0) {
      plVar9 = plStack_108 + 1;
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
        (**(code **)(*plStack_108 + 0x10))(plStack_108);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar1);
      }
    }
    if (plStack_f8 != (long *)0x0) {
      plVar1 = plStack_f8 + 1;
      do {
        lVar12 = *plVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar4) {
          *plVar1 = lVar12 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar12 == 0) {
        (**(code **)(*plStack_f8 + 0x10))(plStack_f8);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_f8);
      }
    }
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
      return;
    }
    ___stack_chk_fail();
  }
  lStack_110 = 0;
  plStack_108 = (long *)0x0;
LAB_10a37cf48:
  FUN_10a00946c(&UNK_10f651a13);
                    /* WARNING: Does not return */
  pcVar10 = (code *)SoftwareBreakpoint(1,0x10a37cf58);
  (*pcVar10)();
}



/* Entry: 10a37d18c; end: 10a37d2f7;  */

ulong FUN_10a37d18c(long *param_1,undefined8 param_2)

{
  code *pcVar1;
  long *plVar2;
  ulong uVar3;
  long *plStack_70;
  undefined8 auStack_68 [2];
  char cStack_51;
  undefined8 auStack_50 [2];
  char cStack_39;
  undefined1 auStack_38 [24];
  
  if ((int)param_2 != 0) {
    (**(code **)(*(long *)((long)param_1 + *(long *)(*param_1 + -0x18)) + 0x28))
              ((long)param_1 + *(long *)(*param_1 + -0x18));
    (**(code **)(*param_1 + 0x68))(param_1,2);
  }
  plVar2 = param_1;
  (**(code **)(*param_1 + 0x80))();
  if ((int)plVar2 == 2) {
    plVar2 = (long *)param_1[0x13];
    if (plVar2 == (long *)0x0) {
      plVar2 = param_1;
      (**(code **)(*param_1 + 0x88))();
      if (*plVar2 == 0) {
        plStack_70 = param_1;
        FUN_10a37d2f8(auStack_68,&plStack_70);
        FUN_109feb280(auStack_50,&UNK_10f633748,auStack_68);
        FUN_10a012db0(auStack_38,auStack_50,&UNK_10f633762);
        if (cStack_39 < '\0') {
          __ZdlPv(auStack_50[0]);
        }
        if (cStack_51 < '\0') {
          __ZdlPv(auStack_68[0]);
        }
        FUN_10a0edf4c(auStack_38);
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x10a37d2b0);
        (*pcVar1)();
      }
      uVar3 = 0;
      plVar2 = (long *)0x2;
    }
    else {
      FUN_10a37d18c(plVar2,param_2);
      uVar3 = (ulong)plVar2 & 0xffffffff00000000;
    }
  }
  else {
    uVar3 = 0;
  }
  return uVar3 | (ulong)plVar2 & 0xffffffff;
}



/* Entry: 10a37d2f8; end: 10a37d327;  */

/* WARNING: Possible PIC construction at 0x00010ad044a0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010ad044a4) */

ulong * FUN_10a37d2f8(ulong *param_1,long *param_2)

{
  undefined1 *puVar1;
  char cVar2;
  bool bVar3;
  ulong *puVar4;
  undefined8 *puVar5;
  ulong *puVar6;
  ulong *puVar7;
  ulong *extraout_x8;
  ulong *puVar8;
  ulong uVar9;
  ulong *unaff_x19;
  ulong *unaff_x20;
  undefined8 unaff_x21;
  undefined8 unaff_x22;
  undefined8 unaff_x23;
  undefined8 unaff_x24;
  undefined1 *unaff_x29;
  undefined8 unaff_x30;
  ulong uStack_50;
  ulong *puStack_48;
  ulong *puStack_40;
  undefined8 uStack_38;
  
  if ((long *)*param_2 == (long *)0x0) {
    puVar6 = (ulong *)&UNK_10f6337b7;
    FUN_10a00946c();
    puVar7 = (ulong *)0x90;
    __Znwm();
    puVar8 = puVar7 + 1;
    *puVar8 = 0;
    *puVar7 = (ulong)&PTR_FUN_110b9fe30;
    uStack_50 = *puVar6;
    puStack_40 = puVar7 + 3;
    puVar7[4] = puVar6[1];
    *puStack_40 = uStack_50;
    puVar7[2] = 0;
    *puVar6 = 0;
    puVar6[1] = 0;
    puVar7[5] = 0;
    puVar7[6] = 0;
    puVar7[7] = 0x32aaaba7;
    puVar7[9] = 0;
    puVar7[8] = 0;
    puVar7[0xb] = 0;
    puVar7[10] = 0;
    puVar7[0xd] = 0;
    puVar7[0xc] = 0;
    puVar7[0xf] = 0;
    puVar7[0xe] = 0;
    puVar7[0x11] = 0;
    puVar7[0x10] = 0;
    *extraout_x8 = uStack_50;
    extraout_x8[1] = (ulong)puVar7;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar8,0x10);
      if (bVar3) {
        *puVar8 = *puVar8 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar8,0x10);
      if (bVar3) {
        *puVar8 = *puVar8 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    puStack_48 = puVar7;
    uStack_38 = puVar7;
    func_0x00010a053e8c(puStack_40,&uStack_50);
    puVar6 = puStack_48;
    if (puStack_48 != (ulong *)0x0) {
      puVar7 = puStack_48 + 1;
      do {
        uVar9 = *puVar7;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar7,0x10);
        if (bVar3) {
          *puVar7 = uVar9 - 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (uVar9 == 0) {
        (**(code **)(*puStack_48 + 0x10))(puStack_48);
        __ZNSt3__119__shared_weak_count14__release_weakEv(puVar6);
      }
    }
    puVar6 = (ulong *)*puStack_40;
    if (puVar6 != (ulong *)0x0) {
      func_0x00010a053ee8(puVar6,&puStack_40);
    }
    puVar7 = uStack_38;
    if (uStack_38 != (ulong *)0x0) {
      puVar8 = uStack_38 + 1;
      do {
        uVar9 = *puVar8;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar8,0x10);
        if (bVar3) {
          *puVar8 = uVar9 - 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (uVar9 == 0) {
        (**(code **)(*uStack_38 + 0x10))(uStack_38);
        __ZNSt3__119__shared_weak_count14__release_weakEv(puVar7);
        puVar6 = puVar7;
      }
    }
    return puVar6;
  }
  puVar6 = (ulong *)(*(ulong *)(*(long *)(*(long *)*param_2 + -8) + 8) & 0x7fffffffffffffff);
  puVar1 = &stack0xfffffffffffffff0;
  if (puVar6 == (ulong *)0x0) {
    puVar6 = (ulong *)&UNK_10f6a2cf4;
  }
  else {
    uStack_38 = (ulong *)CONCAT44(0xffffffff,(undefined4)uStack_38);
    puVar7 = puVar6;
    ___cxa_demangle(puVar6,0,0,(long)&uStack_38 + 4);
    if (uStack_38._4_4_ == 0) {
      func_0x000107c2b054(param_1,puVar7);
      _free(puVar7);
      return puVar7;
    }
    unaff_x30 = 0x10ad044a4;
    register0x00000008 = (BADSPACEBASE *)&puStack_40;
    unaff_x19 = param_1;
    unaff_x20 = puVar6;
    unaff_x29 = puVar1;
  }
  *(undefined8 *)((long)register0x00000008 + -0x40) = unaff_x24;
  *(undefined8 *)((long)register0x00000008 + -0x38) = unaff_x23;
  *(undefined8 *)((long)register0x00000008 + -0x30) = unaff_x22;
  *(undefined8 *)((long)register0x00000008 + -0x28) = unaff_x21;
  *(ulong **)((long)register0x00000008 + -0x20) = unaff_x20;
  *(ulong **)((long)register0x00000008 + -0x18) = unaff_x19;
  *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
  *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
  puVar7 = puVar6;
  func_0x000107c613d0();
  if ((ulong *)0x7ffffffffffffff7 < puVar7) {
    func_0x000107c2b040();
    *(ulong **)((long)register0x00000008 + -0x60) = unaff_x20;
    *(ulong **)((long)register0x00000008 + -0x58) = param_1;
    *(undefined1 **)((long)register0x00000008 + -0x50) =
         (undefined1 *)((long)register0x00000008 + -0x10);
    *(undefined **)((long)register0x00000008 + -0x48) = &UNK_100053800;
    if ((bRam00000001132ffc88 & 1) == 0) {
      puVar7 = (ulong *)0x1132ffc88;
      func_0x000107c60e48();
      if ((int)puVar7 != 0) {
        puVar5 = (undefined8 *)0x30;
        func_0x000107c60e20();
        uRam00000001132ffc38 = 0x8000000000000030;
        uRam00000001132ffc30 = 0x2c;
        puRam00000001132ffc28 = puVar5;
        puVar5[1] = 0x434948504152475f;
        *puVar5 = 0x45524f43534e454c;
        puVar5[3] = 0x525f595a414c5f54;
        puVar5[2] = 0x5845544e4f435f53;
        *(undefined8 *)((long)puVar5 + 0x24) = 0x54494e495f454352;
        *(undefined8 *)((long)puVar5 + 0x1c) = 0x554f5345525f595a;
        *(undefined1 *)((long)puVar5 + 0x2c) = 0;
        uRam00000001132ffc40 = 0;
        pcRam00000001132ffc48 = FUN_10a09e854;
        ppuRam00000001132ffc50 = &PTR_DAT_110ba0fe0;
        func_0x000107c60e34(0x10a08e670,0x1132ffc28,0x100000000);
        puVar6 = (ulong *)0x1132ffc88;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd8c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR____cxa_guard_release_110346be8)(0x1132ffc88);
        return puVar6;
      }
    }
    return puVar7;
  }
  if (puVar7 < (ulong *)0x17) {
    *(char *)((long)param_1 + 0x17) = (char)puVar7;
    puVar4 = param_1;
    if (puVar7 == (ulong *)0x0) goto code_r0x0001000537e0;
  }
  else {
    puVar8 = (ulong *)0x19;
    if (((ulong)puVar7 | 7) != 0x17) {
      puVar8 = (ulong *)(((ulong)puVar7 | 7) + 1);
    }
    puVar4 = puVar8;
    func_0x000107c60e20();
    param_1[1] = (ulong)puVar7;
    param_1[2] = (ulong)puVar8 | 0x8000000000000000;
    *param_1 = (ulong)puVar4;
  }
  func_0x000107c610b8(puVar4,puVar6,puVar7);
code_r0x0001000537e0:
  *(undefined1 *)((long)puVar4 + (long)puVar7) = 0;
  return param_1;
}



/* Entry: 10a37d328; end: 10a37d48b;  */

void FUN_10a37d328(long *param_1,long *param_2)

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



/* Entry: 10a37d48c; end: 10a37d52b;  */

long * FUN_10a37d48c(long *param_1,long param_2,undefined8 *param_3)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  *param_1 = param_2;
  puVar2 = (undefined8 *)0x30;
  __Znwm();
  uVar4 = param_3[1];
  uVar3 = *param_3;
  *param_3 = 0;
  param_3[1] = 0;
  *puVar2 = &PTR_DAT_110bc7f80;
  puVar2[1] = 0;
  puVar2[2] = 0;
  puVar2[3] = param_2;
  puVar2[5] = uVar4;
  puVar2[4] = uVar3;
  param_1[1] = (long)puVar2;
  lVar1 = 0;
  if (param_2 != 0) {
    lVar1 = param_2 + 0x28;
  }
  FUN_10a37d52c(param_1,lVar1,param_2);
  return param_1;
}



/* Entry: 10a37d52c; end: 10a37d64f;  */

void FUN_10a37d52c(long param_1,undefined8 *param_2,undefined8 param_3)

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



/* Entry: 10a37d650; end: 10a37d68f;  */

void FUN_10a37d650(long param_1)

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



/* Entry: 10a37d690; end: 10a37d6cb;  */

long FUN_10a37d690(long param_1,undefined8 param_2)

{
  FUN_10a042ab0(param_2,&PTR_DAT_110bc7fc0);
  param_1 = param_1 + 0x20;
  if ((int)param_2 == 0) {
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 10a37d6cc; end: 10a37d6df;  */

void FUN_10a37d6cc(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a37d6e0; end: 10a37d6ff;  */

void FUN_10a37d6e0(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110bc7fe0;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a37d700; end: 10a37d70f;  */

void FUN_10a37d700(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010a37d708. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 10a37d710; end: 10a37d89f;  */

void FUN_10a37d710(undefined8 *param_1,undefined8 param_2)

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
  FUN_10a06d8e4(aiStack_70,plVar1,param_2);
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



/* Entry: 10a37d8a0; end: 10a37d8af;  */

void FUN_10a37d8a0(long param_1)

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
  FUN_10a06d8e4(aiStack_70,plVar2,param_1 + 0x20);
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



/* Entry: 10a37d8b0; end: 10a37d8d7;  */

long FUN_10a37d8b0(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  func_0x00010a051ed8(param_1 + 0x18);
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



/* Entry: 10a37d8d8; end: 10a37d917;  */

void FUN_10a37d8d8(undefined8 *param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined8 uVar5;
  
  *param_1 = &PTR_FUN_110bc7558;
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



/* Entry: 10a37d918; end: 10a37d997;  */

long FUN_10a37d918(long param_1)

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



/* Entry: 10a37d998; end: 10a37da4f;  */

void FUN_10a37d998(undefined8 *param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined8 uVar5;
  
  *param_1 = &PTR_DAT_110bc7570;
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



/* Entry: 10a37da50; end: 10a37dbbb;  */

void FUN_10a37da50(undefined8 param_1,long param_2)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  undefined8 *puVar6;
  long lStack_38;
  long *plStack_30;
  char cStack_21;
  
  lVar5 = *(long *)(*(long *)(param_2 + 0x10) + 0x9a0);
  if (lVar5 != 0) {
    lVar5 = lVar5 + 8;
    FUN_10aa0893c(lVar5,param_1);
    if (lVar5 != 0) {
      lStack_38 = *(long *)(lVar5 + 0x28);
      plVar2 = *(long **)(lVar5 + 0x30);
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
      }
      plStack_30 = plVar2;
      if (lStack_38 != 0) {
        FUN_10a00bca8(*(undefined8 *)(param_2 + 0x18),&lStack_38);
        plVar2 = plStack_30;
        if (plStack_30 == (long *)0x0) {
          return;
        }
        plVar1 = plStack_30 + 1;
        do {
          lVar5 = *plVar1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar4) {
            *plVar1 = lVar5 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (lVar5 != 0) {
          return;
        }
        (**(code **)(*plStack_30 + 0x10))(plStack_30);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar2);
        return;
      }
      if (plVar2 != (long *)0x0) {
        plVar1 = plVar2 + 1;
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
          (**(code **)(*plVar2 + 0x10))(plVar2);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar2);
        }
      }
    }
  }
  puVar6 = *(undefined8 **)(param_2 + 0x28);
  func_0x000107c2b054(&lStack_38,&UNK_10f651a9b);
  if (puVar6 == (undefined8 *)0x0 || *(char *)(puVar6 + 8) != '\x02') {
    if ((puVar6 != (undefined8 *)0x0) && (*(char *)(puVar6 + 8) == '\x01')) {
      (*(code *)*puVar6)(&lStack_38,puVar6);
    }
  }
  else {
    FUN_10a05aad0(puVar6,&lStack_38);
  }
  if (cStack_21 < '\0') {
    __ZdlPv(lStack_38);
  }
  return;
}



/* Entry: 10a37dbbc; end: 10a37dbe3;  */

long FUN_10a37dbbc(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  func_0x00010a07a8a8(param_1 + 0x20);
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



/* Entry: 10a37dbe4; end: 10a37dc9b;  */

void FUN_10a37dbe4(undefined8 *param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined8 uVar5;
  
  *param_1 = &PTR_FUN_110bc7590;
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



/* Entry: 10a37dc9c; end: 10a37e12f;  */

void FUN_10a37dc9c(undefined8 param_1,undefined8 param_2,undefined1 param_3,long param_4)

{
  undefined ****ppppuVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  undefined ****ppppuVar5;
  undefined *****pppppuVar6;
  undefined *****pppppuVar7;
  undefined *****pppppuVar8;
  undefined ***pppuVar9;
  undefined ****ppppuVar10;
  undefined *****pppppuVar11;
  undefined ****ppppuVar12;
  undefined *****pppppuVar13;
  undefined ***pppuStack_d0;
  undefined ****ppppuStack_c8;
  undefined ****ppppuStack_c0;
  undefined ****ppppuStack_b8;
  undefined ***pppuStack_b0;
  undefined ****ppppuStack_a8;
  undefined ***pppuStack_a0;
  undefined ****ppppuStack_98;
  undefined ****ppppuStack_88;
  undefined ***pppuStack_80;
  undefined ***pppuStack_78;
  undefined ***pppuStack_70;
  undefined ***pppuStack_68;
  undefined ****ppppuStack_60;
  long lStack_48;
  
  pppppuVar8 = (undefined *****)&pppuStack_d0;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pppppuVar13 = *(undefined ******)(param_4 + 0x10);
  ppppuVar5 = (undefined ****)0x168;
  __Znwm();
  ppppuVar5[1] = (undefined ***)0x0;
  ppppuVar5[2] = (undefined ***)0x0;
  *ppppuVar5 = (undefined ***)&PTR_FUN_110bc75c0;
  ppppuVar12 = ppppuVar5 + 3;
  FUN_10ac584d0(ppppuVar12,pppppuVar13);
  ppppuStack_c0 = ppppuVar12;
  ppppuStack_b8 = ppppuVar5;
  FUN_10a37e280(&ppppuStack_c0,ppppuVar5 + 0xb,ppppuVar12);
  ppppuVar12 = ppppuStack_c0;
  FUN_10a08d2e0(&ppppuStack_88,param_1);
  FUN_10ac587e4(ppppuVar12,&ppppuStack_88);
  if ((long)pppuStack_78 < 0) {
    __ZdlPv(ppppuStack_88);
  }
  *(undefined1 *)(ppppuStack_c0 + 0x15) = param_3;
  (*(code *)(*ppppuStack_c0)[0xd])(ppppuStack_c0,2);
  ppppuVar5 = *(undefined *****)(param_4 + 0x10);
  pppppuVar7 = &ppppuStack_c0;
  FUN_10a37e130(&pppuStack_d0);
  pppppuVar11 = *(undefined ******)(param_4 + 0x18);
  if ((pppppuVar11 == (undefined *****)0x0) || (*(char *)(pppppuVar11 + 8) != '\x02')) {
    pppppuVar8 = pppppuVar7;
    if ((pppppuVar11 == (undefined *****)0x0) || (*(char *)(pppppuVar11 + 8) != '\x01'))
    goto LAB_10a37df2c;
    ppppuVar10 = *pppppuVar11;
    ppppuStack_a8 = ppppuStack_c8;
    pppuStack_b0 = pppuStack_d0;
    if (ppppuStack_c8 != (undefined ****)0x0) {
      ppppuVar5 = ppppuStack_c8 + 1;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(ppppuVar5,0x10);
        if (bVar3) {
          *ppppuVar5 = (undefined ***)((long)*ppppuVar5 + 1);
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    ppppuVar5 = &pppuStack_b0;
    (*(code *)ppppuVar10)();
    pppppuVar8 = pppppuVar11;
    if (ppppuStack_a8 == (undefined ****)0x0) goto LAB_10a37df2c;
    ppppuVar10 = ppppuStack_a8 + 1;
    do {
      pppuVar9 = *ppppuVar10;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(ppppuVar10,0x10);
      if (bVar3) {
        *ppppuVar10 = (undefined ***)((long)pppuVar9 + -1);
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  else {
    pppppuVar6 = pppppuVar11;
    FUN_10a688b40();
    ppppuVar10 = ppppuStack_c8;
    if (pppppuVar6 != (undefined *****)0x0) {
      *pppppuVar6 = (undefined ****)
                    CONCAT44((int)((ulong)*pppppuVar6 >> 0x20) + 1,(int)*pppppuVar6 + 1);
      ppppuVar5 = *pppppuVar11;
      FUN_10a37ec14();
      iVar4 = *(int *)((long)pppppuVar6 + 4) + -1;
      *(int *)((long)pppppuVar6 + 4) = iVar4;
      if (iVar4 == 0) {
        *(undefined4 *)pppppuVar6 = 0;
      }
      goto LAB_10a37df2c;
    }
    ppppuVar5 = (undefined ****)0x0;
    pppppuVar8 = (undefined *****)0x0;
    if (pppppuVar7 == (undefined *****)0x0) goto LAB_10a37df2c;
    pppuStack_70 = (undefined ***)pppppuVar11[1];
    pppuStack_78 = (undefined ***)*pppppuVar11;
    if (pppppuVar11[1] != (undefined ****)0x0) {
      ppppuVar12 = pppppuVar11[1] + 1;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(ppppuVar12,0x10);
        if (bVar3) {
          *ppppuVar12 = (undefined ***)((long)*ppppuVar12 + 1);
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    pppuStack_a0 = pppuStack_d0;
    ppppuStack_98 = ppppuStack_c8;
    if (ppppuStack_c8 != (undefined ****)0x0) {
      ppppuVar12 = ppppuStack_c8 + 1;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(ppppuVar12,0x10);
        if (bVar3) {
          *ppppuVar12 = (undefined ***)((long)*ppppuVar12 + 1);
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    ppppuStack_88 = (undefined ****)FUN_10a37ee28;
    pppuStack_80 = (undefined ***)&PTR_FUN_110bc7600;
    pppuStack_b0 = (undefined ***)0x0;
    ppppuStack_a8 = (undefined ****)0x0;
    pppuStack_68 = pppuStack_d0;
    ppppuStack_60 = ppppuStack_c8;
    if (ppppuStack_c8 != (undefined ****)0x0) {
      ppppuVar12 = ppppuStack_c8 + 1;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(ppppuVar12,0x10);
        if (bVar3) {
          *ppppuVar12 = (undefined ***)((long)*ppppuVar12 + 1);
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    ppppuVar12 = &pppuStack_b0;
    pppppuVar13 = &ppppuStack_88;
    pppppuVar11 = &ppppuStack_88;
    FUN_10a4634ec();
    ppppuVar5 = &pppuStack_80;
    (*(code *)*pppuStack_80)();
    if (ppppuVar10 != (undefined ****)0x0) {
      ppppuVar1 = ppppuVar10 + 1;
      do {
        pppuVar9 = *ppppuVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(ppppuVar1,0x10);
        if (bVar3) {
          *ppppuVar1 = (undefined ***)((long)pppuVar9 + -1);
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (pppuVar9 == (undefined ***)0x0) {
        (*(code *)(*ppppuVar10)[2])(ppppuVar10);
        __ZNSt3__119__shared_weak_count14__release_weakEv();
        ppppuVar5 = ppppuVar10;
      }
    }
    pppppuVar8 = pppppuVar11;
    if (ppppuStack_a8 == (undefined ****)0x0) goto LAB_10a37df2c;
    ppppuVar10 = ppppuStack_a8 + 1;
    do {
      pppuVar9 = *ppppuVar10;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(ppppuVar10,0x10);
      if (bVar3) {
        *ppppuVar10 = (undefined ***)((long)pppuVar9 + -1);
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  ppppuVar10 = ppppuStack_a8;
  pppppuVar8 = pppppuVar11;
  if (pppuVar9 == (undefined ***)0x0) {
    (*(code *)(*ppppuStack_a8)[2])(ppppuStack_a8);
    __ZNSt3__119__shared_weak_count14__release_weakEv();
    ppppuVar5 = ppppuVar10;
    pppppuVar8 = pppppuVar11;
  }
LAB_10a37df2c:
  if (ppppuStack_c8 != (undefined ****)0x0) {
    ppppuVar10 = ppppuStack_c8 + 1;
    do {
      pppuVar9 = *ppppuVar10;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(ppppuVar10,0x10);
      if (bVar3) {
        *ppppuVar10 = (undefined ***)((long)pppuVar9 + -1);
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (pppuVar9 == (undefined ***)0x0) {
      (*(code *)(*ppppuStack_c8)[2])(ppppuStack_c8);
      __ZNSt3__119__shared_weak_count14__release_weakEv();
      ppppuVar5 = ppppuStack_c8;
    }
  }
  ppppuVar10 = ppppuStack_b8;
  if (ppppuStack_b8 != (undefined ****)0x0) {
    ppppuVar1 = ppppuStack_b8 + 1;
    do {
      pppuVar9 = *ppppuVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(ppppuVar1,0x10);
      if (bVar3) {
        *ppppuVar1 = (undefined ***)((long)pppuVar9 + -1);
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (pppuVar9 == (undefined ***)0x0) {
      (*(code *)(*ppppuStack_b8)[2])(ppppuStack_b8);
      ppppuVar5 = ppppuVar10;
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
  }
  while (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_48) {
    ___stack_chk_fail();
    pppppuVar7 = pppppuVar8;
    (*(code *)*pppuStack_80)(pppppuVar13 + 1);
    FUN_10a37eea0(ppppuVar12 + 2);
    func_0x00010a004dac(&pppuStack_b0);
    FUN_10a37eea0(&pppuStack_d0);
    func_0x00010a37eef8(&ppppuStack_c0);
    while (pppppuVar11 = pppppuVar7, (int)pppppuVar8 != 1) {
      __Unwind_Resume(ppppuVar5);
      func_0x000104bd46a0();
      pppppuVar7 = pppppuVar11;
      __ZNSt3__119__shared_weak_countD2Ev(ppppuVar12);
      __ZdlPv();
      pppppuVar8 = pppppuVar11;
    }
    ___cxa_begin_catch();
    (*(code *)(*ppppuVar5)[2])();
    FUN_10a37e1ec();
    ppppuVar10 = (undefined ****)ppppuVar10[5];
    func_0x000107c2b054(&ppppuStack_88,&UNK_10f651acf);
    pppppuVar8 = &ppppuStack_88;
    ppppuVar5 = ppppuVar10;
    FUN_10a13609c();
    if ((long)pppuStack_78 < 0) {
      ppppuVar5 = ppppuStack_88;
      __ZdlPv();
    }
    ___cxa_end_catch();
  }
  return;
}



/* Entry: 10a37e130; end: 10a37e1eb;  */

void FUN_10a37e130(long param_1,undefined8 param_2)

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
    FUN_10a37e518(&uStack_40,param_2);
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
    FUN_10a37e330(&uStack_38,&lStack_28);
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



/* Entry: 10a37e1ec; end: 10a37e23f;  */

undefined * FUN_10a37e1ec(undefined8 param_1)

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
  ppuVar6 = &PTR_PTR_113301a28;
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



/* Entry: 10a37e240; end: 10a37e24f;  */

void FUN_10a37e240(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110bc75c0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10a37e250; end: 10a37e26f;  */

void FUN_10a37e250(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110bc75c0;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a37e270; end: 10a37e27f;  */

void FUN_10a37e270(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010a37e278. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 10a37e280; end: 10a37e32f;  */

void FUN_10a37e280(long param_1,undefined8 *param_2,undefined8 param_3)

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



/* Entry: 10a37e330; end: 10a37e517;  */

void FUN_10a37e330(long *param_1,long *param_2,undefined8 param_3,undefined8 param_4)

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
  
  FUN_10a37e710(param_3,param_4);
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
  FUN_10a37e82c(auStack_50,param_3,&lStack_60);
  FUN_10a37e5ac(param_1,auStack_50);
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



/* Entry: 10a37e518; end: 10a37e5ab;  */

void FUN_10a37e518(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined1 uStack_39;
  undefined1 auStack_38 [8];
  long *plStack_30;
  undefined1 uStack_21;
  
  FUN_10a37ea70(auStack_38,&uStack_21,&uStack_39,param_2,param_3);
  FUN_10a37e5ac(param_1,auStack_38);
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



/* Entry: 10a37e5ac; end: 10a37e70f;  */

void FUN_10a37e5ac(long *param_1,long *param_2)

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



/* Entry: 10a37e710; end: 10a37e7d3;  */

undefined8 FUN_10a37e710(undefined8 *param_1,undefined8 *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  long *plVar7;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uVar4 = 0xf0;
  __Znwm(0xf0);
  uVar5 = *param_1;
  plVar7 = (long *)param_2[1];
  uStack_38 = param_2[1];
  uStack_40 = *param_2;
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
  FUN_10aa8a690(uVar4,uVar5,&uStack_40);
  if (plVar7 != (long *)0x0) {
    plVar1 = plVar7 + 1;
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
      (**(code **)(*plVar7 + 0x10))(plVar7);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
    }
  }
  return uVar4;
}



/* Entry: 10a37e7d4; end: 10a37e82b;  */

long FUN_10a37e7d4(long param_1)

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



/* Entry: 10a37e82c; end: 10a37e8cb;  */

long * FUN_10a37e82c(long *param_1,long param_2,undefined8 *param_3)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  *param_1 = param_2;
  puVar2 = (undefined8 *)0x30;
  __Znwm();
  uVar4 = param_3[1];
  uVar3 = *param_3;
  *param_3 = 0;
  param_3[1] = 0;
  *puVar2 = &PTR_DAT_110bc83b0;
  puVar2[1] = 0;
  puVar2[2] = 0;
  puVar2[3] = param_2;
  puVar2[5] = uVar4;
  puVar2[4] = uVar3;
  param_1[1] = (long)puVar2;
  lVar1 = 0;
  if (param_2 != 0) {
    lVar1 = param_2 + 0x28;
  }
  FUN_10a37e8cc(param_1,lVar1,param_2);
  return param_1;
}



/* Entry: 10a37e8cc; end: 10a37e9ef;  */

void FUN_10a37e8cc(long param_1,undefined8 *param_2,undefined8 param_3)

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



/* Entry: 10a37e9f0; end: 10a37ea2f;  */

void FUN_10a37e9f0(long param_1)

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



/* Entry: 10a37ea30; end: 10a37ea6b;  */

long FUN_10a37ea30(long param_1,undefined8 param_2)

{
  FUN_10a042ab0(param_2,&PTR_DAT_110bc83f0);
  param_1 = param_1 + 0x20;
  if ((int)param_2 == 0) {
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 10a37ea6c; end: 10a37ea6f;  */

void FUN_10a37ea6c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a37ea70; end: 10a37eae7;  */

void FUN_10a37ea70(long *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  
  lVar5 = 0x108;
  __Znwm();
  FUN_10a37eae8();
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


