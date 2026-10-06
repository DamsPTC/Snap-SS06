/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10ac6128c; end: 10ac612d7;  */

void FUN_10ac6128c(long *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar2 = *(long *)((long)param_1 + *(long *)(*param_1 + -0x18) + 0x10);
  if (lVar2 != 0) {
    *(undefined8 *)((long)param_1 + *(long *)(*param_1 + -0x18) + 8) =
         *(undefined8 *)(*(long *)(lVar2 + 0x850) + 0x2c);
  }
  if (param_1[0x12] != 0) {
    lVar1 = *(long *)(param_1[0x12] + 0xc48);
    lVar2 = lVar1 + 0x38;
    FUN_10a285258();
    if ((lVar2 != 0) && ((*(byte *)(lVar2 + 0x28) & 1) == 0)) {
      FUN_10a0b4ec0(lVar1 + 0x60,param_1 + 0x52);
      *(undefined1 *)(lVar2 + 0x28) = 1;
    }
    return;
  }
  return;
}



/* Entry: 10ac612d8; end: 10ac6132b;  */

/* WARNING: Possible PIC construction at 0x00010ac61318: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010ac6131c) */

void FUN_10ac612d8(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  FUN_10a18cbd8(param_1 + 0x310);
  FUN_10a18cbd8(param_1 + 0x330);
  if (*(long **)(param_1 + 0x98) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0x98) + 0x50))();
  }
  func_0x00010a1ec8c8(param_1);
  plVar5 = *(long **)(param_1 + 0x308);
  *(undefined8 *)(param_1 + 0x300) = 0;
  *(undefined8 *)(param_1 + 0x308) = 0;
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



/* Entry: 10ac6132c; end: 10ac61347;  */

/* WARNING: Possible PIC construction at 0x00010ac61318: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010ac6131c) */

void FUN_10ac6132c(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  FUN_10a18cbd8(param_1 + 0x38);
  FUN_10a18cbd8(param_1 + 0x58);
  if (*(long **)(param_1 + -0x240) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + -0x240) + 0x50))();
  }
  func_0x00010a1ec8c8(param_1 + -0x2d8);
  plVar5 = *(long **)(param_1 + 0x30);
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
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



/* Entry: 10ac61348; end: 10ac618ab;  */

/* WARNING: Removing unreachable block (ram,0x00010ac614f8) */
/* WARNING: Removing unreachable block (ram,0x00010ac61688) */
/* WARNING: Removing unreachable block (ram,0x00010ac6168c) */
/* WARNING: Removing unreachable block (ram,0x00010ac61694) */
/* WARNING: Removing unreachable block (ram,0x00010ac6169c) */
/* WARNING: Removing unreachable block (ram,0x00010ac616a0) */
/* WARNING: Removing unreachable block (ram,0x00010ac616c0) */
/* WARNING: Removing unreachable block (ram,0x00010ac616c4) */
/* WARNING: Removing unreachable block (ram,0x00010ac616cc) */
/* WARNING: Removing unreachable block (ram,0x00010ac616d4) */
/* WARNING: Removing unreachable block (ram,0x00010ac616e0) */
/* WARNING: Removing unreachable block (ram,0x00010ac616e8) */
/* WARNING: Removing unreachable block (ram,0x00010ac616f0) */
/* WARNING: Removing unreachable block (ram,0x00010ac616f4) */

void FUN_10ac61348(long *param_1,long param_2)

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
  long *plVar10;
  long lVar11;
  undefined8 uVar12;
  ulong uVar13;
  long *plVar14;
  long lVar15;
  undefined8 uStack_48;
  undefined8 *puStack_40;
  undefined8 uStack_38;
  
  func_0x00010ac60df8(param_2,0);
  plVar8 = *(long **)(param_2 + 800);
  if (plVar8 == (long *)0x0) {
    plVar8 = *(long **)(param_2 + 0x300);
    if (plVar8 == (long *)0x0) {
      plVar14 = (long *)0x0;
      goto LAB_10ac61650;
    }
    lVar11 = 0x300;
  }
  else {
    lVar11 = 800;
  }
  plVar14 = *(long **)(param_2 + lVar11 + 8);
  if (plVar14 != (long *)0x0) {
    plVar10 = plVar14 + 1;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar4) {
        *plVar10 = *plVar10 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  lVar11 = *plVar8;
  if (lVar11 != 0) {
    plVar10 = (long *)(lVar11 + 8);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar4) {
        *plVar10 = *plVar10 + 4;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    lVar9 = *(long *)(*(long *)(param_2 + 0x90) + 0x870);
    lVar15 = *(long *)(lVar9 + 0x38);
    if (lVar15 == 0) {
      lVar15 = *(long *)(lVar9 + 0x28);
      plVar10 = *(long **)(lVar9 + 0x30);
    }
    else {
      plVar10 = *(long **)(lVar9 + 0x40);
    }
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
    }
    puVar6 = (undefined8 *)0x80;
    __Znwm();
    *puVar6 = FUN_10ac87f28;
    puVar6[1] = FUN_10ac881fc;
    func_0x0001092ba17c(puVar6 + 2);
    lVar9 = puVar6[7];
    if (lVar9 != 0) {
      plVar1 = (long *)(lVar9 + 8);
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar4) {
          *plVar1 = *plVar1 + 4;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    *param_1 = lVar9;
    puVar6[9] = lVar11;
    puVar6[0xb] = plVar14;
    puVar6[10] = plVar8;
    puVar6[0xc] = lVar15;
    *(undefined1 *)(puVar6 + 0xd) = 0;
    *(undefined1 *)(puVar6 + 0xf) = 0;
    puVar7 = puVar6 + 0xc;
    func_0x0001092ba064(puVar7,puVar6);
    if (((ulong)puVar7 & 1) == 0) {
      FUN_10ac78ad8(puVar6 + 0xe,puVar6 + 9);
      puVar6[0xc] = puVar6[0xe];
      plVar8 = (long *)(puVar6[0xe] + 8);
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar8,0x10);
        if (bVar4) {
          *plVar8 = *plVar8 + 4;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (((uint)*(undefined8 *)(puVar6[0xc] + 0x10) >> 1 & 1) == 0) {
        *(undefined1 *)(puVar6 + 0xf) = 1;
        lVar11 = puVar6[0xc];
        plVar8 = (long *)(lVar11 + 0x10);
        uVar12 = puVar6[3];
        do {
          lVar15 = *plVar8;
          if (lVar15 == 0) {
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(plVar8,0x10);
            if (bVar4) {
              *plVar8 = 1;
              cVar3 = ExclusiveMonitorsStatus();
            }
            if (cVar3 == '\0') {
              uStack_48 = 0;
              puStack_40 = puVar6;
              uStack_38 = uVar12;
              func_0x000109d1b588(lVar11 + 0x18,&uStack_48);
              *(undefined8 *)(lVar11 + 0x10) = 0;
              goto LAB_10ac61680;
            }
          }
          else {
            ClearExclusiveLocal();
          }
        } while (((uint)lVar15 >> 1 & 1) == 0);
      }
      plVar8 = (long *)puVar6[0xc];
      if (((uint)*(undefined8 *)(puVar6[0xc] + 0x10) >> 5 & 1) != 0) {
        func_0x0001092af97c(plVar8 + 0x12);
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x10ac617a0);
        (*pcVar5)();
      }
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
      plVar8 = (long *)puVar6[0xe];
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
      func_0x0001092ba100(puVar6 + 2);
      plVar8 = (long *)puVar6[0xb];
      if (plVar8 != (long *)0x0) {
        plVar14 = plVar8 + 1;
        do {
          lVar11 = *plVar14;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar14,0x10);
          if (bVar4) {
            *plVar14 = lVar11 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (lVar11 == 0) {
          (**(code **)(*plVar8 + 0x10))(plVar8);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar8);
        }
      }
      plVar8 = (long *)puVar6[9];
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
      func_0x000109d1a1d0(puVar6 + 2);
      __ZdlPv(puVar6);
    }
LAB_10ac61680:
    if (plVar10 == (long *)0x0) {
      return;
    }
    plVar8 = plVar10 + 1;
    do {
      lVar11 = *plVar8;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar4) {
        *plVar8 = lVar11 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar11 != 0) {
      return;
    }
    (**(code **)(*plVar10 + 0x10))(plVar10);
    __ZNSt3__119__shared_weak_count14__release_weakEv(plVar10);
    return;
  }
LAB_10ac61650:
  FUN_10ac618ac(param_1,param_2);
  if (plVar14 != (long *)0x0) {
    plVar8 = plVar14 + 1;
    do {
      lVar11 = *plVar8;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar4) {
        *plVar8 = lVar11 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar11 == 0) {
      (**(code **)(*plVar14 + 0x10))(plVar14);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___ZNSt3__119__shared_weak_count14__release_weakEv_110346648)(plVar14);
      return;
    }
  }
  return;
}



/* Entry: 10ac618ac; end: 10ac61edb;  */

/* WARNING: Removing unreachable block (ram,0x00010ac61b48) */
/* WARNING: Type propagation algorithm not settling */

void FUN_10ac618ac(long *param_1,long *param_2)

{
  long *plVar1;
  ulong *puVar2;
  char cVar3;
  bool bVar4;
  code *pcVar5;
  undefined8 *puVar6;
  long *plVar7;
  long lVar8;
  ulong uVar9;
  long *plVar10;
  long lVar11;
  long *plVar12;
  long *plVar13;
  long *plVar14;
  undefined8 uVar15;
  ulong uVar16;
  ulong uVar17;
  undefined8 *puVar18;
  long *plStack_88;
  long alStack_80 [2];
  undefined8 *puStack_70;
  undefined8 uStack_68;
  
  (**(code **)(*param_2 + 0x68))(param_2,0);
  plVar7 = param_2 + 10;
  puVar18 = (undefined8 *)*plVar7;
  if (puVar18 == (undefined8 *)0x0) {
    puVar18 = (undefined8 *)0x28;
    __Znwm();
    puVar6 = puVar18;
    FUN_10a03c0d0();
    *puVar6 = &PTR_DAT_110c67078;
    puVar6[4] = param_2;
    lVar8 = param_2[10];
    param_2[10] = (long)puVar6;
    if (lVar8 != 0) {
      FUN_10ac7d690(plVar7);
      puVar18 = (undefined8 *)*plVar7;
    }
  }
  lVar8 = puVar18[1];
  if (*(undefined ***)(lVar8 + 0x20) != &PTR_DAT_110b9f988) {
    *(undefined4 *)(param_2 + 0xe) = 0;
    FUN_10a5ae998(lVar8,&PTR_DAT_110b9f988,param_2[0x12],puVar18);
  }
  FUN_109d1a6fc(&plStack_88);
  plVar7 = (long *)param_2[0xc];
  if (plVar7 < (long *)param_2[0xd]) {
    plVar10 = plVar7 + 1;
    *plVar7 = alStack_80[0];
    alStack_80[0] = 0;
  }
  else {
    plVar12 = (long *)param_2[0xb];
    lVar8 = (long)plVar7 - (long)plVar12 >> 3;
    uVar16 = lVar8 + 1;
    if (uVar16 >> 0x3d != 0) {
      FUN_10ac78d34();
      goto LAB_10ac61d48;
    }
    uVar9 = param_2[0xd] - (long)plVar12;
    uVar17 = (long)uVar9 >> 2;
    if (uVar17 <= uVar16) {
      uVar17 = uVar16;
    }
    if (0x7ffffffffffffff7 < uVar9) {
      uVar17 = 0x1fffffffffffffff;
    }
    if (uVar17 >> 0x3d != 0) {
      func_0x000109ffded8();
      goto LAB_10ac61d48;
    }
    lVar11 = uVar17 << 3;
    __Znwm();
    plVar1 = (long *)(lVar11 + ((long)plVar7 - (long)plVar12));
    *plVar1 = alStack_80[0];
    alStack_80[0] = 0;
    plVar10 = plVar1 + -lVar8;
    plVar13 = plVar12;
    if (plVar12 != plVar7) {
      do {
        *plVar10 = *plVar13;
        plVar14 = plVar13 + 1;
        *plVar13 = 0;
        plVar10 = plVar10 + 1;
        plVar13 = plVar14;
      } while (plVar14 != plVar7);
      do {
        if (*plVar12 != 0) {
          func_0x0001092b4274(plVar12);
        }
        plVar12 = plVar12 + 1;
      } while (plVar12 != plVar7);
      plVar12 = (long *)param_2[0xb];
    }
    plVar10 = plVar1 + 1;
    param_2[0xb] = (long)(plVar1 + -lVar8);
    param_2[0xc] = (long)plVar10;
    param_2[0xd] = lVar11 + uVar17 * 8;
    if (plVar12 != (long *)0x0) {
      __ZdlPv(plVar12);
    }
  }
  plVar7 = plStack_88;
  param_2[0xc] = (long)plVar10;
  lVar11 = *(long *)(param_2[0x12] + 0x870);
  lVar8 = *(long *)(lVar11 + 0x38);
  if (lVar8 == 0) {
    lVar8 = *(long *)(lVar11 + 0x28);
    plVar12 = *(long **)(lVar11 + 0x30);
  }
  else {
    plVar12 = *(long **)(lVar11 + 0x40);
  }
  if (plVar12 != (long *)0x0) {
    plVar1 = plVar12 + 1;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = *plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  plStack_88 = (long *)0x0;
  puVar18 = (undefined8 *)0x70;
  __Znwm();
  *puVar18 = FUN_10ac879cc;
  puVar18[1] = FUN_10ac87ca8;
  func_0x0001092ba17c(puVar18 + 2);
  lVar11 = puVar18[7];
  if (lVar11 != 0) {
    plVar1 = (long *)(lVar11 + 8);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = *plVar1 + 4;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  *param_1 = lVar11;
  puVar18[0xb] = plVar7;
  puVar18[9] = lVar8;
  *(undefined1 *)(puVar18 + 10) = 0;
  *(undefined1 *)(puVar18 + 0xd) = 0;
  puVar6 = puVar18 + 9;
  func_0x0001092ba064(puVar6,puVar18);
  if (((ulong)puVar6 & 1) == 0) {
    FUN_10ac78d48(puVar18 + 0xc,puVar18 + 0xb);
    puVar18[9] = puVar18[0xc];
    plVar7 = (long *)(puVar18[0xc] + 8);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar4) {
        *plVar7 = *plVar7 + 4;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (((uint)*(undefined8 *)(puVar18[9] + 0x10) >> 1 & 1) == 0) {
      *(undefined1 *)(puVar18 + 0xd) = 1;
      lVar8 = puVar18[9];
      plVar7 = (long *)(lVar8 + 0x10);
      uVar15 = puVar18[3];
      do {
        lVar11 = *plVar7;
        if (lVar11 == 0) {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar7,0x10);
          if (bVar4) {
            *plVar7 = 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
          if (cVar3 == '\0') {
            alStack_80[1] = 0;
            puStack_70 = puVar18;
            uStack_68 = uVar15;
            func_0x000109d1b588(lVar8 + 0x18,alStack_80 + 1);
            *(undefined8 *)(lVar8 + 0x10) = 0;
            goto LAB_10ac61c80;
          }
        }
        else {
          ClearExclusiveLocal();
        }
      } while (((uint)lVar11 >> 1 & 1) == 0);
    }
    plVar7 = (long *)puVar18[9];
    if (((uint)*(undefined8 *)(puVar18[9] + 0x10) >> 5 & 1) != 0) {
      func_0x0001092af97c(plVar7 + 0x12);
LAB_10ac61d48:
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x10ac61d4c);
      (*pcVar5)();
    }
    if (plVar7 != (long *)0x0) {
      puVar2 = (ulong *)(plVar7 + 1);
      do {
        uVar16 = *puVar2;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(puVar2,0x10);
        if (bVar4) {
          *puVar2 = uVar16 - 4;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if ((uVar16 & 0x1fffffffc) == 4) {
        do {
          uVar16 = *puVar2;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(puVar2,0x10);
          if (bVar4) {
            *puVar2 = uVar16 - 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (uVar16 - 1 == 0) {
          (**(code **)(*plVar7 + 8))();
        }
      }
    }
    plVar7 = (long *)puVar18[0xc];
    if (plVar7 != (long *)0x0) {
      puVar2 = (ulong *)(plVar7 + 1);
      do {
        uVar16 = *puVar2;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(puVar2,0x10);
        if (bVar4) {
          *puVar2 = uVar16 - 4;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if ((uVar16 & 0x1fffffffc) == 4) {
        do {
          uVar16 = *puVar2;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(puVar2,0x10);
          if (bVar4) {
            *puVar2 = uVar16 - 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (uVar16 - 1 == 0) {
          (**(code **)(*plVar7 + 8))();
        }
      }
    }
    func_0x0001092ba100(puVar18 + 2);
    plVar7 = (long *)puVar18[0xb];
    if (plVar7 != (long *)0x0) {
      puVar2 = (ulong *)(plVar7 + 1);
      do {
        uVar16 = *puVar2;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(puVar2,0x10);
        if (bVar4) {
          *puVar2 = uVar16 - 4;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if ((uVar16 & 0x1fffffffc) == 4) {
        do {
          uVar16 = *puVar2;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(puVar2,0x10);
          if (bVar4) {
            *puVar2 = uVar16 - 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (uVar16 - 1 == 0) {
          (**(code **)(*plVar7 + 8))();
        }
      }
    }
    func_0x000109d1a1d0(puVar18 + 2);
    __ZdlPv(puVar18);
  }
LAB_10ac61c80:
  if (plVar12 != (long *)0x0) {
    plVar7 = plVar12 + 1;
    do {
      lVar8 = *plVar7;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar4) {
        *plVar7 = lVar8 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar8 == 0) {
      (**(code **)(*plVar12 + 0x10))(plVar12);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar12);
    }
  }
  if (alStack_80[0] != 0) {
    func_0x0001092b4274(alStack_80);
  }
  if (plStack_88 != (long *)0x0) {
    puVar2 = (ulong *)(plStack_88 + 1);
    do {
      uVar16 = *puVar2;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(puVar2,0x10);
      if (bVar4) {
        *puVar2 = uVar16 - 4;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if ((uVar16 & 0x1fffffffc) == 4) {
      do {
        uVar16 = *puVar2;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(puVar2,0x10);
        if (bVar4) {
          *puVar2 = uVar16 - 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (uVar16 - 1 == 0) {
        (**(code **)(*plStack_88 + 8))();
      }
    }
  }
  return;
}



/* Entry: 10ac61edc; end: 10ac61f4b;  */

long * FUN_10ac61edc(long *param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  ulong uVar5;
  
  FUN_10a1cbb34(param_1 + 1);
  plVar4 = (long *)*param_1;
  if (plVar4 != (long *)0x0) {
    puVar1 = (ulong *)(plVar4 + 1);
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
        (**(code **)(*plVar4 + 8))();
      }
    }
  }
  return param_1;
}



/* Entry: 10ac61f4c; end: 10ac61fd3;  */

undefined1  [16] FUN_10ac61f4c(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x1d;
  auVar1._0_8_ = &UNK_10f662bd5;
  return auVar1;
}



/* Entry: 10ac61fd4; end: 10ac620c3;  */

undefined8 * FUN_10ac61fd4(undefined8 *param_1)

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
  
  *param_1 = &PTR_FUN_110c607e8;
  param_1[2] = &PTR_FUN_110c60890;
  param_1[5] = &PTR_DAT_110c608c0;
  param_1[0x1e] = &PTR_DAT_110c60948;
  if (*(char *)((long)param_1 + 0xe7) < '\0') {
    __ZdlPv(param_1[0x1a]);
  }
  if (*(char *)((long)param_1 + 0xcf) < '\0') {
    __ZdlPv(param_1[0x17]);
  }
  *param_1 = &PTR_DAT_110c64318;
  param_1[2] = &PTR_FUN_110c67b88;
  param_1[5] = &PTR_DAT_110c67bb8;
  param_1[0x1e] = &PTR_DAT_110c643f0;
  FUN_10a577850(param_1 + 0x15);
  *param_1 = &PTR_FUN_110c64440;
  param_1[2] = &PTR_FUN_110bf31d0;
  param_1[5] = &PTR_DAT_110bf3200;
  param_1[0x1e] = &PTR_DAT_110c64510;
  FUN_10a57765c(param_1 + 0x13);
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



/* Entry: 10ac620c4; end: 10ac620e7;  */

undefined8 * FUN_10ac620c4(undefined8 *param_1)

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
  
  *param_1 = &PTR_FUN_110c607e8;
  param_1[2] = &PTR_FUN_110c60890;
  param_1[5] = &PTR_DAT_110c608c0;
  param_1[0x1e] = &PTR_DAT_110c60948;
  if (*(char *)((long)param_1 + 0xe7) < '\0') {
    __ZdlPv(param_1[0x1a]);
  }
  if (*(char *)((long)param_1 + 0xcf) < '\0') {
    __ZdlPv(param_1[0x17]);
  }
  *param_1 = &PTR_DAT_110c64318;
  param_1[2] = &PTR_FUN_110c67b88;
  param_1[5] = &PTR_DAT_110c67bb8;
  param_1[0x1e] = &PTR_DAT_110c643f0;
  FUN_10a577850(param_1 + 0x15);
  *param_1 = &PTR_FUN_110c64440;
  param_1[2] = &PTR_FUN_110bf31d0;
  param_1[5] = &PTR_DAT_110bf3200;
  param_1[0x1e] = &PTR_DAT_110c64510;
  FUN_10a57765c(param_1 + 0x13);
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



/* Entry: 10ac620e8; end: 10ac6212b;  */

void FUN_10ac620e8(void)

{
  FUN_10ac61fd4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10ac6212c; end: 10ac6215b;  */

void FUN_10ac6212c(long *param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(*param_1 + -0x18);
  FUN_10ac61fd4((long)param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)((long)param_1 + lVar1);
  return;
}



/* Entry: 10ac6215c; end: 10ac6227b;  */

undefined8 * FUN_10ac6215c(undefined8 *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 auStack_50 [2];
  char cStack_39;
  undefined8 auStack_38 [2];
  char cStack_21;
  
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  param_1[0x1e] = &PTR_FUN_110c383b8;
  *(undefined2 *)(param_1 + 0x21) = 0x100;
  puVar1 = param_1;
  FUN_10a5773e4(param_1,&PTR_PTR_110c60990,param_2);
  puVar1[0x15] = 0;
  puVar1[0x16] = 0;
  *(undefined4 *)((long)puVar1 + 0x74) = 0;
  *puVar1 = &PTR_FUN_110c607e8;
  puVar1[2] = &PTR_FUN_110c60890;
  puVar1[5] = &PTR_DAT_110c608c0;
  puVar1[0x1e] = &PTR_DAT_110c60948;
  func_0x000107c2b054(auStack_38,&UNK_10f69e32c);
  func_0x000107c2b054(auStack_50,&UNK_10f69e32c);
  FUN_10a107e2c(param_1 + 0x17,auStack_38,auStack_50,0);
  if (cStack_39 < '\0') {
    __ZdlPv(auStack_50[0]);
  }
  if (cStack_21 < '\0') {
    __ZdlPv(auStack_38[0]);
  }
  *(undefined4 *)((long)param_1 + 0x74) = 0;
  return param_1;
}



/* Entry: 10ac6227c; end: 10ac623bb;  */

void FUN_10ac6227c(long *param_1)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  undefined1 auStack_60 [48];
  
  plVar5 = param_1;
  while( true ) {
    if (plVar5 == (long *)0x0) {
      return;
    }
    plVar3 = plVar5;
    (**(code **)(*plVar5 + 0x80))();
    if ((int)plVar3 != 2) break;
    plVar5 = (long *)plVar5[0x13];
  }
  FUN_10ac5b0a8(auStack_60);
  plVar5 = (long *)0x58;
  __Znwm();
  plVar7 = plVar5 + 1;
  *plVar7 = 0;
  plVar5[2] = 0;
  plVar3 = plVar5 + 3;
  *plVar5 = (long)&PTR_FUN_110c67028;
  FUN_10ab29e4c(plVar3,auStack_60);
  do {
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar7,0x10);
    if (bVar2) {
      *plVar7 = *plVar7 + 1;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  plVar6 = (long *)param_1[0x16];
  param_1[0x15] = (long)plVar3;
  param_1[0x16] = (long)plVar5;
  if (plVar6 != (long *)0x0) {
    plVar3 = plVar6 + 1;
    do {
      lVar4 = *plVar3;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
      if (bVar2) {
        *plVar3 = lVar4 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar4 == 0) {
      (**(code **)(*plVar6 + 0x10))(plVar6);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
    }
  }
  do {
    lVar4 = *plVar7;
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar7,0x10);
    if (bVar2) {
      *plVar7 = lVar4 + -1;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  if (lVar4 == 0) {
    (**(code **)(*plVar5 + 0x10))(plVar5);
    __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
  }
  *(undefined4 *)((long)param_1 + 0x74) = 2;
  FUN_10a0f1ea0(auStack_60);
  return;
}



/* Entry: 10ac623bc; end: 10ac623c3;  */

void FUN_10ac623bc(long param_1)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  long *plVar6;
  long *plVar7;
  undefined1 auStack_60 [48];
  
  plVar4 = (long *)(param_1 + -0x10);
  while( true ) {
    if (plVar4 == (long *)0x0) {
      return;
    }
    plVar3 = plVar4;
    (**(code **)(*plVar4 + 0x80))();
    if ((int)plVar3 != 2) break;
    plVar4 = (long *)plVar4[0x13];
  }
  FUN_10ac5b0a8(auStack_60);
  plVar4 = (long *)0x58;
  __Znwm();
  plVar7 = plVar4 + 1;
  *plVar7 = 0;
  plVar4[2] = 0;
  plVar3 = plVar4 + 3;
  *plVar4 = (long)&PTR_FUN_110c67028;
  FUN_10ab29e4c(plVar3,auStack_60);
  do {
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar7,0x10);
    if (bVar2) {
      *plVar7 = *plVar7 + 1;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  plVar6 = *(long **)(param_1 + 0xa0);
  *(long **)(param_1 + 0x98) = plVar3;
  *(long **)(param_1 + 0xa0) = plVar4;
  if (plVar6 != (long *)0x0) {
    plVar3 = plVar6 + 1;
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
      (**(code **)(*plVar6 + 0x10))(plVar6);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
    }
  }
  do {
    lVar5 = *plVar7;
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar7,0x10);
    if (bVar2) {
      *plVar7 = lVar5 + -1;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  if (lVar5 == 0) {
    (**(code **)(*plVar4 + 0x10))(plVar4);
    __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
  }
  *(undefined4 *)(param_1 + 100) = 2;
  FUN_10a0f1ea0(auStack_60);
  return;
}



/* Entry: 10ac623c4; end: 10ac6250b;  */

void FUN_10ac623c4(long param_1,long *param_2)

{
  long *plVar1;
  undefined8 auStack_90 [2];
  char cStack_79;
  undefined8 uStack_78;
  char cStack_61;
  undefined1 uStack_58;
  undefined7 uStack_57;
  undefined8 uStack_50;
  undefined7 uStack_48;
  char cStack_41;
  undefined1 uStack_40;
  undefined7 uStack_3f;
  undefined8 uStack_38;
  undefined7 uStack_30;
  undefined1 uStack_29;
  undefined4 uStack_28;
  
  plVar1 = param_2;
  (**(code **)(*param_2 + 0x248))(param_2);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_(param_1 + 0x78,plVar1);
  plVar1 = param_2;
  (**(code **)(*param_2 + 0x200))(param_2,&PTR_DAT_110c609b0);
  if ((int)plVar1 != 0) {
    FUN_10a1e3e54(auStack_90);
    (**(code **)(*param_2 + 0x230))(&uStack_58,param_2,&PTR_DAT_110c609b0,auStack_90);
    if (*(char *)(param_1 + 0xcf) < '\0') {
      __ZdlPv(*(undefined8 *)(param_1 + 0xb8));
    }
    *(undefined8 *)(param_1 + 0xc0) = uStack_50;
    *(ulong *)(param_1 + 0xb8) = CONCAT71(uStack_57,uStack_58);
    *(ulong *)(param_1 + 200) = CONCAT17(cStack_41,uStack_48);
    cStack_41 = '\0';
    uStack_58 = 0;
    if (*(char *)(param_1 + 0xe7) < '\0') {
      __ZdlPv(*(undefined8 *)(param_1 + 0xd0));
      *(undefined8 *)(param_1 + 0xd8) = uStack_38;
      *(ulong *)(param_1 + 0xd0) = CONCAT71(uStack_3f,uStack_40);
      *(ulong *)(param_1 + 0xe0) = CONCAT17(uStack_29,uStack_30);
      uStack_29 = 0;
      uStack_40 = 0;
      *(undefined4 *)(param_1 + 0xe8) = uStack_28;
      if (cStack_41 < '\0') {
        __ZdlPv(CONCAT71(uStack_57,uStack_58));
      }
    }
    else {
      *(undefined8 *)(param_1 + 0xd8) = uStack_38;
      *(ulong *)(param_1 + 0xd0) = CONCAT71(uStack_3f,uStack_40);
      *(ulong *)(param_1 + 0xe0) = CONCAT17(uStack_29,uStack_30);
      uStack_29 = 0;
      uStack_40 = 0;
      *(undefined4 *)(param_1 + 0xe8) = uStack_28;
    }
    if (cStack_61 < '\0') {
      __ZdlPv(uStack_78);
    }
    if (cStack_79 < '\0') {
      __ZdlPv(auStack_90[0]);
    }
  }
  return;
}



/* Entry: 10ac6250c; end: 10ac625ab;  */

void FUN_10ac6250c(long param_1,long *param_2)

{
  undefined *puStack_30;
  undefined8 uStack_28;
  
  puStack_30 = &UNK_10f662bd5;
  uStack_28 = 0x1d;
  (**(code **)(*param_2 + 0x30))(param_2,&PTR_DAT_110c66928,&puStack_30);
  (**(code **)(*param_2 + 0xf8))(param_2,&PTR_DAT_110c609b0,param_1 + 0xb8);
  return;
}



/* Entry: 10ac625ac; end: 10ac62683;  */

long FUN_10ac625ac(long param_1)

{
  return param_1 + 0xa8;
}



/* Entry: 10ac62684; end: 10ac626df;  */

void FUN_10ac62684(undefined8 param_1)

{
  func_0x00010ac62040(param_1,&PTR_PTR_110c67c78);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10ac626e0; end: 10ac62717;  */

void FUN_10ac626e0(long *param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(*param_1 + -0x18);
  func_0x00010ac62040((long)param_1 + lVar1,&PTR_PTR_110c67c78);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)((long)param_1 + lVar1);
  return;
}



/* Entry: 10ac62718; end: 10ac6282f;  */

void FUN_10ac62718(long param_1,long *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  long lVar5;
  long *plVar6;
  
  plVar6 = param_2;
  (**(code **)(*param_2 + 0x200))(param_2,&PTR_DAT_110c609d0);
  if ((int)plVar6 != 0) {
    puVar4 = (undefined8 *)0x58;
    __Znwm();
    puVar4[1] = 0;
    puVar4[2] = 0;
    *puVar4 = &PTR_FUN_110c67028;
    *(undefined1 *)(puVar4 + 5) = 0;
    puVar4[4] = &PTR_FUN_110c47d00;
    puVar4[7] = 0;
    puVar4[6] = 0;
    puVar4[9] = 0;
    puVar4[8] = 0;
    *(undefined4 *)(puVar4 + 10) = 0x3f800000;
    plVar6 = *(long **)(param_1 + 0xb0);
    *(undefined8 **)(param_1 + 0xb0) = puVar4;
    puVar4[3] = &PTR_FUN_110c47cc0;
    *(undefined8 **)(param_1 + 0xa8) = puVar4 + 3;
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
    (**(code **)(*param_2 + 0x210))(param_2,&PTR_DAT_110c609d0);
    lVar5 = 0;
    if (*(long *)(param_1 + 0xa8) != 0) {
      lVar5 = *(long *)(param_1 + 0xa8) + 8;
    }
    (**(code **)(*param_2 + 0x1e0))(param_2,lVar5);
                    /* WARNING: Could not recover jumptable at 0x00010ac6281c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_2 + 0x220))(param_2);
    return;
  }
  return;
}



/* Entry: 10ac62830; end: 10ac628bb;  */

void FUN_10ac62830(long *param_1,long *param_2)

{
  long lVar1;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  puStack_30 = &UNK_10f662bbb;
  uStack_28 = 0x19;
  (**(code **)(*param_2 + 0x30))(param_2,&PTR_DAT_110c66928,&puStack_30);
  (**(code **)(*param_1 + 0x90))();
  lVar1 = 0;
  if (*param_1 != 0) {
    lVar1 = *param_1 + 8;
  }
  (**(code **)(*param_2 + 0x118))(param_2,&PTR_DAT_110c609d0,lVar1);
  return;
}



/* Entry: 10ac628bc; end: 10ac6290b;  */

float FUN_10ac628bc(float param_1,float param_2,int param_3)

{
  float fVar1;
  
  if (param_3 == 0) {
    fVar1 = -(param_1 + param_2) / (param_2 - param_1);
  }
  else {
    fVar1 = -2.0 / (param_2 - param_1);
  }
  return fVar1;
}



/* Entry: 10ac6290c; end: 10ac6294f;  */

long * FUN_10ac6290c(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined **ppuVar4;
  long lVar5;
  long *plVar6;
  undefined8 uStack_50;
  long *plStack_48;
  undefined *puStack_20;
  undefined8 uStack_18;
  
  ppuVar4 = &puStack_20;
  lVar5 = *(long *)(*(long *)(*(long *)(param_1 + 0x90) + 0x100) + 0x260);
  puStack_20 = &UNK_10f653c20;
  uStack_18 = 0x21;
  if (lVar5 != 0) {
    return (long *)(lVar5 + 0x128);
  }
  FUN_10a0edfc4();
  if (*(char *)((long)ppuVar4 + 0x2bf) < '\0') {
    ppuVar4[0x56] = (undefined *)0x0;
    plVar6 = (long *)ppuVar4[0x55];
  }
  else {
    plVar6 = (long *)(ppuVar4 + 0x55);
    *(undefined1 *)((long)ppuVar4 + 0x2bf) = 0;
  }
  *(undefined1 *)plVar6 = 0;
  uStack_50 = 0;
  plStack_48 = (long *)0x0;
  FUN_10a1e3a04(ppuVar4,&uStack_50);
  plVar6 = plStack_48;
  if (plStack_48 != (long *)0x0) {
    plVar1 = plStack_48 + 1;
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
      (**(code **)(*plStack_48 + 0x10))(plStack_48);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
    }
  }
  *(undefined4 *)((long)ppuVar4 + 0x74) = 0;
  (**(code **)((long)*ppuVar4 + 0x120))(ppuVar4);
  return (long *)ppuVar4;
}



/* Entry: 10ac62950; end: 10ac62a03;  */

void FUN_10ac62950(long *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  undefined8 uStack_30;
  long *plStack_28;
  
  if (*(char *)((long)param_1 + 0x2bf) < '\0') {
    param_1[0x56] = 0;
    plVar4 = (long *)param_1[0x55];
  }
  else {
    plVar4 = param_1 + 0x55;
    *(undefined1 *)((long)param_1 + 0x2bf) = 0;
  }
  *(undefined1 *)plVar4 = 0;
  uStack_30 = 0;
  plStack_28 = (long *)0x0;
  FUN_10a1e3a04(param_1,&uStack_30);
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
  *(undefined4 *)((long)param_1 + 0x74) = 0;
  (**(code **)(*param_1 + 0x120))(param_1);
  return;
}



/* Entry: 10ac62a04; end: 10ac62cb3;  */

void FUN_10ac62a04(ulong *param_1,undefined8 param_2)

{
  long *plVar1;
  ulong uVar2;
  ulong *puVar3;
  byte bVar4;
  byte bVar5;
  char cVar6;
  bool bVar7;
  ulong *puVar8;
  ulong *puVar9;
  ulong uVar10;
  long lVar11;
  ulong uStack_40;
  long *plStack_38;
  
  uVar10 = param_1[0x51];
  if (uVar10 != 0) {
    uVar2 = *(ulong *)(uVar10 + 0xf0);
    if (-1 < (char)*(byte *)(uVar10 + 0xff)) {
      uVar2 = (ulong)*(byte *)(uVar10 + 0xff);
    }
    if (((uVar2 != 0) &&
        (puVar8 = param_1, (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x51),
        ((ulong)puVar8 & 1) != 0)) &&
       (puVar8 = param_1, (**(code **)(*param_1 + 0x148))(), puVar9 = param_1, (int)puVar8 != 0)) {
      do {
        puVar8 = puVar9;
        (**(code **)(*puVar9 + 0x80))();
        if ((int)puVar8 != 2) goto LAB_10ac62b04;
        puVar8 = puVar9 + 0x13;
        puVar9 = (ulong *)*puVar8;
      } while ((ulong *)*puVar8 != (ulong *)0x0);
      puVar8 = param_1;
      (**(code **)(*param_1 + 0x158))();
      bVar4 = *(byte *)((long)param_1 + 0x2bf);
      uVar10 = param_1[0x56];
      if (-1 < (char)bVar4) {
        uVar10 = (ulong)bVar4;
      }
      bVar5 = *(byte *)((long)puVar8 + 0x17);
      uVar2 = puVar8[1];
      if (-1 < (char)bVar5) {
        uVar2 = (ulong)bVar5;
      }
      if (uVar10 == uVar2) {
        puVar9 = (ulong *)param_1[0x55];
        if (-1 < (char)bVar4) {
          puVar9 = param_1 + 0x55;
        }
        puVar3 = (ulong *)*puVar8;
        if (-1 < (char)bVar5) {
          puVar3 = puVar8;
        }
        _memcmp(puVar9,puVar3,uVar10);
        if (uVar10 != 0 && (int)puVar9 == 0) {
          return;
        }
      }
LAB_10ac62b04:
      (**(code **)(*param_1 + 0x130))(param_1);
      if (((param_1[0x5c] & 1) == 0) &&
         (puVar8 = param_1, (**(code **)(*param_1 + 0x150))(), (int)puVar8 != 0)) {
        (**(code **)(*param_1 + 0x128))(&uStack_40,param_1);
        puVar8 = param_1 + 0x53;
        FUN_10a823c84(puVar8,&uStack_40);
        if (plStack_38 != (long *)0x0) {
          plVar1 = plStack_38 + 1;
          do {
            lVar11 = *plVar1;
            cVar6 = '\x01';
            bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar7) {
              *plVar1 = lVar11 + -1;
              cVar6 = ExclusiveMonitorsStatus();
            }
          } while (cVar6 != '\0');
          if (lVar11 == 0) {
            (**(code **)(*plStack_38 + 0x10))(plStack_38);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_38);
          }
        }
        uStack_40 = *puVar8;
        if (uStack_40 == 0) {
          (**(code **)(*param_1 + 0x50))(param_1);
          *(undefined1 *)(param_1 + 0x5c) = 1;
          FUN_10a07e58c(param_1[0x5a]);
          return;
        }
        plStack_38 = (long *)param_1[0x54];
        if (plStack_38 != (long *)0x0) {
          plVar1 = plStack_38 + 1;
          do {
            cVar6 = '\x01';
            bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar7) {
              *plVar1 = *plVar1 + 1;
              cVar6 = ExclusiveMonitorsStatus();
            }
          } while (cVar6 != '\0');
        }
        FUN_10a1e3a04(param_1,&uStack_40);
        FUN_10a042dcc(&uStack_40);
        func_0x00010ac60df8(*puVar8,param_2);
        *(undefined4 *)((long)param_1 + 0x74) = 2;
        FUN_10a07e58c(param_1[0x58]);
      }
      puVar8 = param_1;
      (**(code **)(*param_1 + 0x158))(param_1);
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
                (param_1 + 0x55,puVar8);
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010ac62c30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x50))(param_1);
  return;
}



/* Entry: 10ac62cb4; end: 10ac62cbb;  */

void FUN_10ac62cb4(long param_1,undefined8 param_2)

{
  long *plVar1;
  long *plVar2;
  ulong uVar3;
  ulong uVar4;
  byte bVar5;
  byte bVar6;
  char cVar7;
  bool bVar8;
  ulong *puVar9;
  ulong *puVar10;
  long lVar11;
  ulong *puVar12;
  long lStack_40;
  long *plStack_38;
  
  puVar10 = (ulong *)(param_1 + -0x10);
  lVar11 = *(long *)(param_1 + 0x278);
  if (lVar11 != 0) {
    uVar3 = *(ulong *)(lVar11 + 0xf0);
    if (-1 < (char)*(byte *)(lVar11 + 0xff)) {
      uVar3 = (ulong)*(byte *)(lVar11 + 0xff);
    }
    if (((uVar3 != 0) &&
        (puVar9 = puVar10, (**(code **)(*puVar10 + 0x140))(puVar10,param_1 + 0x278),
        ((ulong)puVar9 & 1) != 0)) &&
       (puVar9 = puVar10, (**(code **)(*puVar10 + 0x148))(), puVar12 = puVar10, (int)puVar9 != 0)) {
      do {
        puVar9 = puVar12;
        (**(code **)(*puVar12 + 0x80))();
        if ((int)puVar9 != 2) goto LAB_10ac62b04;
        puVar9 = puVar12 + 0x13;
        puVar12 = (ulong *)*puVar9;
      } while ((ulong *)*puVar9 != (ulong *)0x0);
      puVar9 = puVar10;
      (**(code **)(*puVar10 + 0x158))();
      bVar5 = *(byte *)(param_1 + 0x2af);
      uVar3 = *(ulong *)(param_1 + 0x2a0);
      if (-1 < (char)bVar5) {
        uVar3 = (ulong)bVar5;
      }
      bVar6 = *(byte *)((long)puVar9 + 0x17);
      uVar4 = puVar9[1];
      if (-1 < (char)bVar6) {
        uVar4 = (ulong)bVar6;
      }
      if (uVar3 == uVar4) {
        lVar11 = *(long *)(param_1 + 0x298);
        if (-1 < (char)bVar5) {
          lVar11 = param_1 + 0x298;
        }
        puVar12 = (ulong *)*puVar9;
        if (-1 < (char)bVar6) {
          puVar12 = puVar9;
        }
        _memcmp(lVar11,puVar12,uVar3);
        if (uVar3 != 0 && (int)lVar11 == 0) {
          return;
        }
      }
LAB_10ac62b04:
      (**(code **)(*puVar10 + 0x130))(puVar10);
      if (((*(byte *)(param_1 + 0x2d0) & 1) == 0) &&
         (puVar9 = puVar10, (**(code **)(*puVar10 + 0x150))(), (int)puVar9 != 0)) {
        (**(code **)(*puVar10 + 0x128))(&lStack_40,puVar10);
        plVar1 = (long *)(param_1 + 0x288);
        FUN_10a823c84(plVar1,&lStack_40);
        if (plStack_38 != (long *)0x0) {
          plVar2 = plStack_38 + 1;
          do {
            lVar11 = *plVar2;
            cVar7 = '\x01';
            bVar8 = (bool)ExclusiveMonitorPass(plVar2,0x10);
            if (bVar8) {
              *plVar2 = lVar11 + -1;
              cVar7 = ExclusiveMonitorsStatus();
            }
          } while (cVar7 != '\0');
          if (lVar11 == 0) {
            (**(code **)(*plStack_38 + 0x10))(plStack_38);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_38);
          }
        }
        lStack_40 = *plVar1;
        if (lStack_40 == 0) {
          (**(code **)(*puVar10 + 0x50))(puVar10);
          *(undefined1 *)(param_1 + 0x2d0) = 1;
          FUN_10a07e58c(*(undefined8 *)(param_1 + 0x2c0));
          return;
        }
        plStack_38 = *(long **)(param_1 + 0x290);
        if (plStack_38 != (long *)0x0) {
          plVar2 = plStack_38 + 1;
          do {
            cVar7 = '\x01';
            bVar8 = (bool)ExclusiveMonitorPass(plVar2,0x10);
            if (bVar8) {
              *plVar2 = *plVar2 + 1;
              cVar7 = ExclusiveMonitorsStatus();
            }
          } while (cVar7 != '\0');
        }
        FUN_10a1e3a04(puVar10,&lStack_40);
        FUN_10a042dcc(&lStack_40);
        func_0x00010ac60df8(*plVar1,param_2);
        *(undefined4 *)(param_1 + 100) = 2;
        FUN_10a07e58c(*(undefined8 *)(param_1 + 0x2b0));
      }
      (**(code **)(*puVar10 + 0x158))(puVar10);
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
                (param_1 + 0x298,puVar10);
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010ac62c30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*puVar10 + 0x50))(puVar10);
  return;
}



/* Entry: 10ac62cbc; end: 10ac62e03;  */

void FUN_10ac62cbc(long *param_1,long *param_2)

{
  ulong uVar1;
  ulong uVar2;
  long *plVar3;
  byte bVar4;
  byte bVar5;
  char cVar6;
  bool bVar7;
  long *plVar8;
  long lVar9;
  long lVar10;
  undefined8 uStack_30;
  long *plStack_28;
  
  lVar10 = *param_2;
  lVar9 = param_1[0x51];
  if (lVar10 == lVar9) {
    return;
  }
  if (lVar10 != 0) {
    if ((lVar9 != 0) && (*(char *)(lVar10 + 0xe0) == *(char *)(lVar9 + 0xe0))) {
      bVar4 = *(byte *)(lVar10 + 0xff);
      uVar1 = *(ulong *)(lVar10 + 0xf0);
      if (-1 < (char)bVar4) {
        uVar1 = (ulong)bVar4;
      }
      bVar5 = *(byte *)(lVar9 + 0xff);
      uVar2 = *(ulong *)(lVar9 + 0xf0);
      if (-1 < (char)bVar5) {
        uVar2 = (ulong)bVar5;
      }
      if (uVar1 == uVar2) {
        plVar8 = (long *)*(long *)(lVar10 + 0xe8);
        if (-1 < (char)bVar4) {
          plVar8 = (long *)(lVar10 + 0xe8);
        }
        plVar3 = (long *)*(long *)(lVar9 + 0xe8);
        if (-1 < (char)bVar5) {
          plVar3 = (long *)(lVar9 + 0xe8);
        }
        _memcmp(plVar8,plVar3);
        if ((int)plVar8 == 0) {
          return;
        }
      }
    }
    plVar8 = param_1;
    (**(code **)(*param_1 + 0x138))(param_1,param_2);
    if (((ulong)plVar8 & 1) == 0) {
      func_0x00010ae06f08(1,0x14,&UNK_10f69e32c,&UNK_10f69e32c,0xffffffff,&UNK_10f69e9af);
      uStack_30 = 0;
      plStack_28 = (long *)0x0;
      FUN_10a6eef74(param_1 + 0x51,&uStack_30);
      plVar8 = plStack_28;
      if (plStack_28 != (long *)0x0) {
        plVar3 = plStack_28 + 1;
        do {
          lVar9 = *plVar3;
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(plVar3,0x10);
          if (bVar7) {
            *plVar3 = lVar9 + -1;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        if (lVar9 == 0) {
          (**(code **)(*plStack_28 + 0x10))(plStack_28);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar8);
        }
      }
      goto LAB_10ac62d70;
    }
  }
  FUN_10a6e467c(param_1 + 0x51,param_2);
LAB_10ac62d70:
  *(undefined1 *)(param_1 + 0x5c) = 0;
  (**(code **)(*param_1 + 0x50))(param_1);
  return;
}



/* Entry: 10ac62e04; end: 10ac62e27;  */

undefined1  [16] FUN_10ac62e04(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 8;
  auVar1._0_8_ = &UNK_10f69f778;
  return auVar1;
}



/* Entry: 10ac62e28; end: 10ac6310f;  */

void FUN_10ac62e28(ulong param_1)

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
  
  func_0x000109887da8(appuStack_c8,&UNK_10f69f778,8);
  pppuVar1 = (undefined8 ***)appuStack_c8[0];
  if (-1 < cStack_b1) {
    pppuVar1 = appuStack_c8;
  }
  *(undefined ***)(param_1 + 0x1b0) = &PTR_DAT_110c681e8;
  pppuVar2 = (undefined8 ***)&UNK_10f69e32c;
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
    ppuStack_b0 = &PTR_DAT_110c681e8;
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
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10ac630f0;
    FUN_10a054dac(param_1,&UNK_10f69e9e0,FUN_10ac7d26c,1,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,2,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10ac630f0;
    FUN_10a054dac(param_1,&UNK_10f69e9ed,FUN_10ac7d3cc,1,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,2,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10ac630f0;
    FUN_10a054dac(param_1,&UNK_10f69e9f8,FUN_10ac7d4fc,1,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10ac630f0;
    FUN_10a054dac(param_1,&UNK_10f69ea01,FUN_10ac7d5c8,1,*(undefined8 *)(param_1 + 0x40));
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
      FUN_10a054234(param_1,&ppuStack_a0,param_1 + 0x1b8,&UNK_10f69f778,8);
      FUN_10a05431c(param_1);
    }
    return;
  }
LAB_10ac630f0:
                    /* WARNING: Does not return */
  pcVar6 = (code *)SoftwareBreakpoint(1,0x10ac630f4);
  (*pcVar6)();
}



/* Entry: 10ac63110; end: 10ac6311f;  */

undefined4 FUN_10ac63110(long param_1)

{
  return *(undefined4 *)(param_1 + 0x74);
}



/* Entry: 10ac63120; end: 10ac6325b;  */

undefined8 * FUN_10ac63120(undefined8 *param_1,long param_2)

{
  *param_1 = &PTR_FUN_110c66be8;
  *(undefined1 *)(param_1 + 1) = 0;
  FUN_10ac6325c(param_1 + 2);
  param_1[7] = 0;
  param_1[6] = 0;
  param_1[9] = 0;
  param_1[8] = 0;
  *param_1 = &PTR_DAT_110c60a00;
  param_1[2] = &PTR_DAT_110c60a88;
  param_1[5] = &PTR_DAT_110c60ab8;
  param_1[0xb] = 0;
  param_1[10] = 0;
  param_1[0xd] = 0;
  param_1[0xc] = 0;
  param_1[0xe] = 0x200000000;
  func_0x000107c2b054(param_1 + 0xf,&UNK_10f69e32c);
  param_1[0x12] = param_2;
  if (param_2 != 0) {
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
              (param_1 + 0xf,*(long *)(param_2 + 0x100) + 0x220);
    FUN_10a1dfad0(*(undefined8 *)(param_2 + 0x828),param_1);
  }
  return param_1;
}



/* Entry: 10ac6325c; end: 10ac63307;  */

undefined8 * FUN_10ac6325c(undefined8 *param_1,long param_2)

{
  undefined8 *puVar1;
  
  *param_1 = &PTR____cxa_pure_virtual_110bcfb60;
  puVar1 = (undefined8 *)0x58;
  __Znwm();
  puVar1[4] = 0;
  puVar1[3] = 0;
  param_1[1] = puVar1 + 3;
  param_1[2] = puVar1;
  puVar1[1] = 0;
  puVar1[2] = 0;
  *puVar1 = &PTR_DAT_110bf7fc8;
  puVar1[8] = 0;
  puVar1[7] = 0;
  *(undefined8 *)((long)puVar1 + 0x4d) = 0;
  *(undefined8 *)((long)puVar1 + 0x45) = 0;
  puVar1[6] = 0;
  puVar1[5] = 0;
  FUN_10a5cf1fc(param_1 + 1);
  if (param_2 != 0) {
    FUN_10a5ae998(param_1[1],&PTR_DAT_110bcfb40,param_2,param_1);
  }
  return param_1;
}



/* Entry: 10ac63308; end: 10ac634b7;  */

undefined8 * FUN_10ac63308(undefined8 *param_1)

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



/* Entry: 10ac634b8; end: 10ac6350b;  */

void FUN_10ac634b8(long *param_1)

{
  long *plVar1;
  long *plVar2;
  
  plVar1 = (long *)*param_1;
  plVar2 = (long *)param_1[1];
  while (plVar2 != plVar1) {
    plVar2 = plVar2 + -1;
    if (*plVar2 != 0) {
      func_0x0001092b4274(plVar2);
    }
  }
  param_1[1] = (long)plVar1;
  return;
}



/* Entry: 10ac6350c; end: 10ac63517;  */

void FUN_10ac6350c(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  return;
}



/* Entry: 10ac63518; end: 10ac6372f;  */

void FUN_10ac63518(undefined8 *param_1,long param_2)

{
  undefined8 *puVar1;
  ulong uVar2;
  undefined1 *puVar3;
  long lVar4;
  undefined1 *puVar5;
  undefined8 *puVar6;
  int *piVar7;
  int *piVar8;
  undefined8 *extraout_x8;
  long lVar9;
  long unaff_x19;
  long unaff_x20;
  ulong unaff_x21;
  undefined8 unaff_x22;
  undefined8 uVar10;
  undefined8 unaff_x23;
  undefined8 unaff_x24;
  undefined1 *unaff_x29;
  code *unaff_x30;
  
  do {
    lVar4 = param_2;
    puVar6 = (undefined8 *)((long)register0x00000008 + -0x90);
    *(undefined8 *)((long)register0x00000008 + -0x40) = unaff_x24;
    *(undefined8 *)((long)register0x00000008 + -0x38) = unaff_x23;
    *(undefined8 *)((long)register0x00000008 + -0x30) = unaff_x22;
    *(ulong *)((long)register0x00000008 + -0x28) = unaff_x21;
    *(long *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(long *)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
    piVar7 = (int *)&DAT_110c66c30;
    lVar9 = 0x48;
    do {
      piVar8 = piVar7;
      if (*piVar7 == *(int *)(lVar4 + 0x74)) break;
      piVar7 = piVar7 + 6;
      lVar9 = lVar9 + -0x18;
      piVar8 = (int *)&UNK_110c66c78;
    } while (lVar9 != 0);
    unaff_x21 = *(ulong *)(piVar8 + 4);
    if (unaff_x21 < 0x7ffffffffffffff8) break;
    unaff_x19 = lVar4;
    func_0x000109ffde50();
    if (*(char *)((long)register0x00000008 + -0x79) < '\0') {
      __ZdlPv(*(undefined8 *)((long)register0x00000008 + -0x90));
    }
    if (*(char *)((long)register0x00000008 + -0x61) < '\0') {
      __ZdlPv(*(undefined8 *)((long)register0x00000008 + -0x78));
    }
    if (*(char *)((long)register0x00000008 + -0x49) < '\0') {
      __ZdlPv(*(undefined8 *)((long)register0x00000008 + -0x60));
    }
    unaff_x30 = FUN_10ac63730;
    lVar9 = unaff_x19;
    __Unwind_Resume();
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x90);
    param_2 = lVar9 + -0x28;
    param_1 = extraout_x8;
    unaff_x20 = lVar4;
  } while( true );
  uVar10 = *(undefined8 *)(piVar8 + 2);
  if (unaff_x21 < 0x17) {
    *(char *)((long)register0x00000008 + -0x49) = (char)unaff_x21;
    puVar5 = (undefined1 *)((long)register0x00000008 + -0x60);
    if (unaff_x21 == 0) goto LAB_10ac635d0;
  }
  else {
    puVar3 = (undefined1 *)0x19;
    if ((unaff_x21 | 7) != 0x17) {
      puVar3 = (undefined1 *)((unaff_x21 | 7) + 1);
    }
    puVar5 = puVar3;
    __Znwm();
    *(ulong *)((long)register0x00000008 + -0x58) = unaff_x21;
    *(ulong *)((long)register0x00000008 + -0x50) = (ulong)puVar3 | 0x8000000000000000;
    *(undefined1 **)((long)register0x00000008 + -0x60) = puVar5;
  }
  _memmove(puVar5,uVar10,unaff_x21);
LAB_10ac635d0:
  puVar5[unaff_x21] = 0;
  func_0x00010989f98c((undefined1 *)((long)register0x00000008 + -0x78),lVar4 + 0x28);
  uVar2 = *(ulong *)((long)register0x00000008 + -0x70);
  if (-1 < (char)*(byte *)((long)register0x00000008 + -0x61)) {
    uVar2 = (ulong)*(byte *)((long)register0x00000008 + -0x61);
  }
  FUN_10a003c90((undefined1 *)((long)register0x00000008 + -0x90),uVar2 + 0xe,
                (undefined1 *)((long)register0x00000008 + -0x41));
  puVar3 = *(undefined1 **)((long)register0x00000008 + -0x90);
  if (-1 < *(char *)((long)register0x00000008 + -0x79)) {
    puVar3 = (undefined1 *)((long)register0x00000008 + -0x90);
  }
  if (uVar2 != 0) {
    puVar5 = *(undefined1 **)((long)register0x00000008 + -0x78);
    if (-1 < *(char *)((long)register0x00000008 + -0x61)) {
      puVar5 = (undefined1 *)((long)register0x00000008 + -0x78);
    }
    _memmove(puVar3,puVar5,uVar2);
  }
  puVar1 = (undefined8 *)(puVar3 + uVar2);
  *puVar1 = 0x745364616f6c2020;
  *(undefined8 *)((long)puVar1 + 6) = 0x203a737574617453;
  *(undefined1 *)((long)puVar1 + 0xe) = 0;
  uVar2 = *(ulong *)((long)register0x00000008 + -0x58);
  puVar3 = *(undefined1 **)((long)register0x00000008 + -0x60);
  if (-1 < (char)*(byte *)((long)register0x00000008 + -0x49)) {
    uVar2 = (ulong)*(byte *)((long)register0x00000008 + -0x49);
    puVar3 = (undefined1 *)((long)register0x00000008 + -0x60);
  }
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            ((undefined1 *)((long)register0x00000008 + -0x90),puVar3,uVar2);
  uVar10 = *puVar6;
  param_1[1] = puVar6[1];
  *param_1 = uVar10;
  param_1[2] = puVar6[2];
  puVar6[1] = 0;
  puVar6[2] = 0;
  *puVar6 = 0;
  if (*(char *)((long)register0x00000008 + -0x79) < '\0') {
    __ZdlPv(*(undefined8 *)((long)register0x00000008 + -0x90));
  }
  if (*(char *)((long)register0x00000008 + -0x61) < '\0') {
    __ZdlPv(*(undefined8 *)((long)register0x00000008 + -0x78));
  }
  if (*(char *)((long)register0x00000008 + -0x49) < '\0') {
    __ZdlPv(*(undefined8 *)((long)register0x00000008 + -0x60));
  }
  return;
}



/* Entry: 10ac63730; end: 10ac6373b;  */

void FUN_10ac63730(undefined8 *param_1,long param_2)

{
  undefined8 *puVar1;
  ulong uVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined8 *puVar5;
  long lVar6;
  int *piVar7;
  int *piVar8;
  undefined8 *extraout_x8;
  long lVar9;
  long unaff_x19;
  long unaff_x20;
  ulong unaff_x21;
  undefined8 uVar10;
  undefined8 unaff_x22;
  undefined8 unaff_x23;
  undefined8 unaff_x24;
  undefined1 *unaff_x29;
  code *unaff_x30;
  
  do {
    lVar6 = param_2 + -0x28;
    puVar5 = (undefined8 *)((long)register0x00000008 + -0x90);
    *(undefined8 *)((long)register0x00000008 + -0x40) = unaff_x24;
    *(undefined8 *)((long)register0x00000008 + -0x38) = unaff_x23;
    *(undefined8 *)((long)register0x00000008 + -0x30) = unaff_x22;
    *(ulong *)((long)register0x00000008 + -0x28) = unaff_x21;
    *(long *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(long *)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
    piVar7 = (int *)&DAT_110c66c30;
    lVar9 = 0x48;
    do {
      piVar8 = piVar7;
      if (*piVar7 == *(int *)(param_2 + 0x4c)) break;
      piVar7 = piVar7 + 6;
      lVar9 = lVar9 + -0x18;
      piVar8 = (int *)&UNK_110c66c78;
    } while (lVar9 != 0);
    unaff_x21 = *(ulong *)(piVar8 + 4);
    if (unaff_x21 < 0x7ffffffffffffff8) break;
    unaff_x19 = lVar6;
    func_0x000109ffde50();
    if (*(char *)((long)register0x00000008 + -0x79) < '\0') {
      __ZdlPv(*(undefined8 *)((long)register0x00000008 + -0x90));
    }
    if (*(char *)((long)register0x00000008 + -0x61) < '\0') {
      __ZdlPv(*(undefined8 *)((long)register0x00000008 + -0x78));
    }
    if (*(char *)((long)register0x00000008 + -0x49) < '\0') {
      __ZdlPv(*(undefined8 *)((long)register0x00000008 + -0x60));
    }
    unaff_x30 = FUN_10ac63730;
    param_2 = unaff_x19;
    __Unwind_Resume();
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x90);
    param_1 = extraout_x8;
    unaff_x20 = lVar6;
  } while( true );
  uVar10 = *(undefined8 *)(piVar8 + 2);
  if (unaff_x21 < 0x17) {
    *(char *)((long)register0x00000008 + -0x49) = (char)unaff_x21;
    puVar4 = (undefined1 *)((long)register0x00000008 + -0x60);
    if (unaff_x21 == 0) goto LAB_10ac635d0;
  }
  else {
    puVar3 = (undefined1 *)0x19;
    if ((unaff_x21 | 7) != 0x17) {
      puVar3 = (undefined1 *)((unaff_x21 | 7) + 1);
    }
    puVar4 = puVar3;
    __Znwm();
    *(ulong *)((long)register0x00000008 + -0x58) = unaff_x21;
    *(ulong *)((long)register0x00000008 + -0x50) = (ulong)puVar3 | 0x8000000000000000;
    *(undefined1 **)((long)register0x00000008 + -0x60) = puVar4;
  }
  _memmove(puVar4,uVar10,unaff_x21);
LAB_10ac635d0:
  puVar4[unaff_x21] = 0;
  func_0x00010989f98c((undefined1 *)((long)register0x00000008 + -0x78),param_2);
  uVar2 = *(ulong *)((long)register0x00000008 + -0x70);
  if (-1 < (char)*(byte *)((long)register0x00000008 + -0x61)) {
    uVar2 = (ulong)*(byte *)((long)register0x00000008 + -0x61);
  }
  FUN_10a003c90((undefined1 *)((long)register0x00000008 + -0x90),uVar2 + 0xe,
                (undefined1 *)((long)register0x00000008 + -0x41));
  puVar3 = *(undefined1 **)((long)register0x00000008 + -0x90);
  if (-1 < *(char *)((long)register0x00000008 + -0x79)) {
    puVar3 = (undefined1 *)((long)register0x00000008 + -0x90);
  }
  if (uVar2 != 0) {
    puVar4 = *(undefined1 **)((long)register0x00000008 + -0x78);
    if (-1 < *(char *)((long)register0x00000008 + -0x61)) {
      puVar4 = (undefined1 *)((long)register0x00000008 + -0x78);
    }
    _memmove(puVar3,puVar4,uVar2);
  }
  puVar1 = (undefined8 *)(puVar3 + uVar2);
  *puVar1 = 0x745364616f6c2020;
  *(undefined8 *)((long)puVar1 + 6) = 0x203a737574617453;
  *(undefined1 *)((long)puVar1 + 0xe) = 0;
  uVar2 = *(ulong *)((long)register0x00000008 + -0x58);
  puVar3 = *(undefined1 **)((long)register0x00000008 + -0x60);
  if (-1 < (char)*(byte *)((long)register0x00000008 + -0x49)) {
    uVar2 = (ulong)*(byte *)((long)register0x00000008 + -0x49);
    puVar3 = (undefined1 *)((long)register0x00000008 + -0x60);
  }
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            ((undefined1 *)((long)register0x00000008 + -0x90),puVar3,uVar2);
  uVar10 = *puVar5;
  param_1[1] = puVar5[1];
  *param_1 = uVar10;
  param_1[2] = puVar5[2];
  puVar5[1] = 0;
  puVar5[2] = 0;
  *puVar5 = 0;
  if (*(char *)((long)register0x00000008 + -0x79) < '\0') {
    __ZdlPv(*(undefined8 *)((long)register0x00000008 + -0x90));
  }
  if (*(char *)((long)register0x00000008 + -0x61) < '\0') {
    __ZdlPv(*(undefined8 *)((long)register0x00000008 + -0x78));
  }
  if (*(char *)((long)register0x00000008 + -0x49) < '\0') {
    __ZdlPv(*(undefined8 *)((long)register0x00000008 + -0x60));
  }
  return;
}



/* Entry: 10ac6373c; end: 10ac637a3;  */

undefined1  [16] FUN_10ac6373c(long *param_1,long *param_2,undefined8 param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  code *UNRECOVERED_JUMPTABLE;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  
  plVar5 = param_2;
  (**(code **)(*param_2 + 0x48))();
  if ((int)plVar5 == 2) {
    if ((bRam00000001138334e0 & 1) == 0) {
      plVar5 = (long *)0x1138334e0;
      ___cxa_guard_acquire();
      if ((int)plVar5 != 0) {
        FUN_109d1b1bc();
        param_3 = 0x1138334d8;
        ___cxa_atexit(FUN_109d1b2e8,0x1138334d8,0x100000000);
        plVar5 = (long *)0x1138334e0;
        ___cxa_guard_release(0x1138334e0);
      }
    }
    lVar4 = lRam00000001138334d8;
    *param_1 = lRam00000001138334d8;
    if (lVar4 != 0) {
      plVar1 = (long *)(lVar4 + 8);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = *plVar1 + 4;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    auVar6._8_8_ = param_3;
    auVar6._0_8_ = plVar5;
    return auVar6;
  }
  if (param_2[0x12] != 0) {
    UNRECOVERED_JUMPTABLE = *(code **)(*param_2 + 0x70);
                    /* WARNING: Could not recover jumptable at 0x00010ac63794. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)(param_1,param_2);
    auVar7._8_8_ = UNRECOVERED_JUMPTABLE;
    auVar7._0_8_ = param_2;
    return auVar7;
  }
  FUN_10a00946c(&UNK_10f69ea59);
  auVar8._8_8_ = 0x23;
  auVar8._0_8_ = &UNK_10f69f788;
  return auVar8;
}



/* Entry: 10ac637a4; end: 10ac637c3;  */

undefined1  [16] FUN_10ac637a4(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x23;
  auVar1._0_8_ = &UNK_10f69f788;
  return auVar1;
}



/* Entry: 10ac637c4; end: 10ac63893;  */

bool FUN_10ac637c4(undefined8 param_1,long *param_2,long param_3)

{
  bool bVar1;
  int iVar2;
  
  if (param_3 == 0x23) {
    iVar2 = 0xf69f788;
    _memcmp(&UNK_10f69f788,param_2);
    if (iVar2 == 0) {
      return true;
    }
  }
  if (param_3 == 0x23) {
    iVar2 = 0xf69f8b5;
    _memcmp(&UNK_10f69f8b5,param_2);
    if (iVar2 == 0) {
      return true;
    }
  }
  if ((param_3 == 0xf) &&
     (*param_2 == 0x5065727574786554 && *(long *)((long)param_2 + 7) == 0x72656469766f7250)) {
    return true;
  }
  if (param_3 == 0xc) {
    bVar1 = false;
    if (*param_2 == 0x624f747069726353) {
      bVar1 = (int)param_2[1] == 0x7463656a;
    }
  }
  else {
    if (param_3 != 8) {
      return false;
    }
    bVar1 = *param_2 == 0x72656469766f7250;
  }
  return bVar1;
}



/* Entry: 10ac63894; end: 10ac6389b;  */

bool FUN_10ac63894(undefined8 param_1,long *param_2,long param_3)

{
  bool bVar1;
  int iVar2;
  
  if (param_3 == 0x23) {
    iVar2 = 0xf69f788;
    _memcmp(&UNK_10f69f788,param_2);
    if (iVar2 == 0) {
      return true;
    }
  }
  if (param_3 == 0x23) {
    iVar2 = 0xf69f8b5;
    _memcmp(&UNK_10f69f8b5,param_2);
    if (iVar2 == 0) {
      return true;
    }
  }
  if ((param_3 == 0xf) &&
     (*param_2 == 0x5065727574786554 && *(long *)((long)param_2 + 7) == 0x72656469766f7250)) {
    return true;
  }
  if (param_3 == 0xc) {
    bVar1 = false;
    if (*param_2 == 0x624f747069726353) {
      bVar1 = (int)param_2[1] == 0x7463656a;
    }
  }
  else {
    if (param_3 != 8) {
      return false;
    }
    bVar1 = *param_2 == 0x72656469766f7250;
  }
  return bVar1;
}



/* Entry: 10ac6389c; end: 10ac63b7b;  */

void FUN_10ac6389c(ulong param_1)

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
  
  func_0x000109887da8(appuStack_c8,&UNK_10f69f788,0x23);
  pppuVar1 = (undefined8 ***)appuStack_c8[0];
  if (-1 < cStack_b1) {
    pppuVar1 = appuStack_c8;
  }
  *(undefined ***)(param_1 + 0x1b0) = &PTR_DAT_110c67e40;
  pppuVar2 = (undefined8 ***)&UNK_10f69e32c;
  if (pppuVar1 != (undefined8 ***)0x0) {
    pppuVar2 = pppuVar1;
  }
  func_0x000107c2c4dc(param_1 + 0x1b8,pppuVar2);
  uStack_98 = 0;
  uStack_90 = 0;
  uStack_80 = 0xbffffffff;
  uStack_88 = 0x200000064;
  uStack_70 = 0;
  uStack_78 = 0;
  uStack_60 = 0;
  uStack_68 = 0;
  uStack_58 = 0;
  uStack_50 = CONCAT44(uStack_50._4_4_,0x117);
  uStack_48 = 0;
  uStack_40 = 0;
  ppuStack_a0 = pppuVar1;
  func_0x00010a052690(param_1 + 0x168,&ppuStack_a0);
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,2,0x117,0xffffffff,0xb);
  if ((uVar7 & 1) == 0) {
    ppuStack_b0 = &PTR_DAT_110c67e40;
    uStack_a8 = 0;
    ppuStack_a0 = (undefined8 **)&PTR_DAT_110c67e58;
    uStack_98 = 0;
    uStack_90 = CONCAT71(uStack_90._1_7_,1);
    func_0x0001098949cc(param_1,pppuVar1,&ppuStack_b0,&ppuStack_a0);
  }
  if (cStack_b1 < '\0') {
    __ZdlPv(appuStack_c8[0]);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0x133,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10ac63b5c;
    FUN_10a054dac(param_1,&UNK_10f69eae5,FUN_10ac7d944,1,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0x133,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10ac63b5c;
    FUN_10a054dac(param_1,&UNK_10f69eaf5,FUN_10ac7da60,1,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0x133,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10ac63b5c;
    FUN_10a054dac(param_1,&UNK_10f69eb05,FUN_10ac7db20,2,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&DAT_10f69eb1d,FUN_10ac7dc2c,FUN_10ac7dd30);
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
      FUN_10a054234(param_1,&ppuStack_a0,param_1 + 0x1b8,&UNK_10f69f788,0x23);
      FUN_10a05431c(param_1);
    }
    return;
  }
LAB_10ac63b5c:
                    /* WARNING: Does not return */
  pcVar6 = (code *)SoftwareBreakpoint(1,0x10ac63b60);
  (*pcVar6)();
}



/* Entry: 10ac63b7c; end: 10ac63c33;  */

void FUN_10ac63b7c(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined1 auStack_58 [40];
  
  *(undefined1 *)(param_1 + 0x581) = 1;
  uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x90) + 3000);
  FUN_10ac6b2cc(auStack_58);
  FUN_10a79c004(uVar2,1,3,auStack_58);
  FUN_10a7575a8(auStack_58);
  lVar1 = *(long *)(param_1 + 0x90) + 0xd48;
  FUN_10a5aeb74(lVar1,&PTR_DAT_110c23fb8);
  for (lVar3 = *(long *)(lVar1 + 8); lVar3 != lVar1; lVar3 = *(long *)(lVar3 + 8)) {
    (**(code **)**(undefined8 **)(lVar3 + 0x28))
              (*(undefined8 **)(lVar3 + 0x28),*(undefined4 *)(param_1 + 0x628));
  }
  return;
}



/* Entry: 10ac63c34; end: 10ac63c3b;  */

undefined8 * FUN_10ac63c34(long param_1,undefined8 *param_2)

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
  if (param_2[1] != 0) {
    plVar5 = (long *)(param_2[1] + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar3) {
        *plVar5 = *plVar5 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  plVar5 = *(long **)(param_1 + 0x5a0);
  *(undefined8 *)(param_1 + 0x5a0) = uVar7;
  *(undefined8 *)(param_1 + 0x598) = uVar6;
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
  return (undefined8 *)(param_1 + 0x598);
}



/* Entry: 10ac63c3c; end: 10ac63c9b;  */

void FUN_10ac63c3c(undefined8 param_1,long *param_2)

{
  undefined *puStack_30;
  undefined8 uStack_28;
  
  puStack_30 = &UNK_10f69f788;
  uStack_28 = 0x23;
  (**(code **)(*param_2 + 0x30))(param_2,&PTR_DAT_110c66928,&puStack_30);
  FUN_10ac63c9c(param_1,param_2);
  return;
}



/* Entry: 10ac63c9c; end: 10ac63e2b;  */

void FUN_10ac63c9c(undefined4 param_1,undefined4 param_2,long param_3,long *param_4)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  
  uVar2 = *(uint *)(param_3 + 0x628);
  if ((uVar2 >> 1 & 1) == 0) {
    uVar1 = uVar2 & 1;
  }
  else {
    if ((uVar2 >> 3 & 1) != 0) {
      (**(code **)(*param_4 + 0x70))(param_4,&PTR_DAT_110c61938,1);
      uVar2 = *(uint *)(param_3 + 0x628);
    }
    uVar1 = 2;
  }
  (**(code **)(*param_4 + 0x40))(param_4,&PTR_DAT_110c618f8,uVar1);
  (**(code **)(*param_4 + 0x40))(param_4,&PTR_DAT_110c61918,uVar2 >> 2 & 1);
  if (*(char *)(param_3 + 0x580) == '\x01') {
    (**(code **)(*param_4 + 0x70))(param_4,&PTR_DAT_110c61978,1);
  }
  if (*(char *)(param_3 + 0x5b8) == '\x01') {
    (**(code **)(*param_4 + 0x70))(param_4,&PTR_DAT_110c61998,1);
  }
  lVar3 = *(long *)(param_3 + 0x608);
  if (lVar3 != 0) {
    *(undefined4 *)(param_3 + 0x5bc) = *(undefined4 *)(lVar3 + 0x56c);
    FUN_10ac3c930(lVar3);
    *(undefined4 *)(param_3 + 0x5c0) = param_1;
    *(undefined4 *)(param_3 + 0x5c4) = param_2;
    (**(code **)(*param_4 + 0x118))(param_4,&PTR_DAT_110c619f8,lVar3);
  }
  (**(code **)(*param_4 + 0x40))(param_4,&PTR_DAT_110c619b8,*(undefined4 *)(param_3 + 0x5bc));
  (**(code **)(*param_4 + 0x78))(param_4,&PTR_DAT_110c619d8,param_3 + 0x5c0);
  if ((*(long *)(param_3 + 0x550) == 0) && (*(long *)(param_3 + 0x560) == 0)) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010ac63e18. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_4 + 0x118))(param_4,&PTR_DAT_110c61a18);
  return;
}



/* Entry: 10ac63e2c; end: 10ac63e4b;  */

undefined1  [16] FUN_10ac63e2c(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x26;
  auVar1._0_8_ = &UNK_10f69f7ac;
  return auVar1;
}



/* Entry: 10ac63e4c; end: 10ac63eb3;  */

bool FUN_10ac63e4c(undefined8 param_1,long *param_2,long param_3)

{
  bool bVar1;
  int iVar2;
  
  if (param_3 == 0x26) {
    iVar2 = 0xf69f7ac;
    _memcmp(&UNK_10f69f7ac,param_2);
    if (iVar2 == 0) {
      return true;
    }
  }
  if (param_3 == 0x21) {
    iVar2 = 0xf69fa3d;
    _memcmp(&UNK_10f69fa3d,param_2);
    if (iVar2 == 0) {
      return true;
    }
  }
  if ((param_3 == 0x14) &&
     ((*param_2 == 0x624f7265646e6552 && param_2[1] == 0x766f72507463656a) &&
      (int)param_2[2] == 0x72656469)) {
    return true;
  }
  if (param_3 == 0xc) {
    bVar1 = false;
    if (*param_2 == 0x624f747069726353) {
      bVar1 = (int)param_2[1] == 0x7463656a;
    }
  }
  else {
    if (param_3 != 8) {
      return false;
    }
    bVar1 = *param_2 == 0x72656469766f7250;
  }
  return bVar1;
}



/* Entry: 10ac63eb4; end: 10ac63ebb;  */

bool FUN_10ac63eb4(undefined8 param_1,long *param_2,long param_3)

{
  bool bVar1;
  int iVar2;
  
  if (param_3 == 0x26) {
    iVar2 = 0xf69f7ac;
    _memcmp(&UNK_10f69f7ac,param_2);
    if (iVar2 == 0) {
      return true;
    }
  }
  if (param_3 == 0x21) {
    iVar2 = 0xf69fa3d;
    _memcmp(&UNK_10f69fa3d,param_2);
    if (iVar2 == 0) {
      return true;
    }
  }
  if ((param_3 == 0x14) &&
     ((*param_2 == 0x624f7265646e6552 && param_2[1] == 0x766f72507463656a) &&
      (int)param_2[2] == 0x72656469)) {
    return true;
  }
  if (param_3 == 0xc) {
    bVar1 = false;
    if (*param_2 == 0x624f747069726353) {
      bVar1 = (int)param_2[1] == 0x7463656a;
    }
  }
  else {
    if (param_3 != 8) {
      return false;
    }
    bVar1 = *param_2 == 0x72656469766f7250;
  }
  return bVar1;
}



/* Entry: 10ac63ebc; end: 10ac63f4b;  */

void FUN_10ac63ebc(long *param_1,long *param_2)

{
  long lVar1;
  
  FUN_10a1dbb98(param_1,param_2 + 2);
  lVar1 = param_2[1];
  *param_1 = lVar1;
  param_1[2] = (long)&PTR_FUN_110bae358;
  param_1[5] = (long)&PTR_DAT_110bae388;
  *(long *)((long)param_1 + *(long *)(lVar1 + -0x18)) = param_2[4];
  param_1[0x15] = -1;
  param_1[0x16] = -1;
  *(undefined1 *)((long)param_1 + 0xba) = 0;
  *(undefined2 *)(param_1 + 0x17) = 0;
  lVar1 = *param_2;
  *param_1 = lVar1;
  param_1[2] = (long)&PTR_FUN_110c68030;
  param_1[5] = (long)&PTR_DAT_110c68060;
  *(long *)((long)param_1 + *(long *)(lVar1 + -0x18)) = param_2[5];
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  *(undefined1 *)(param_1 + 0x1a) = 0;
  return;
}



/* Entry: 10ac63f4c; end: 10ac6432b;  */

/* WARNING: Removing unreachable block (ram,0x00010ac641e8) */

long * FUN_10ac63f4c(long *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  char *pcVar7;
  undefined8 uVar8;
  undefined4 auStack_1b0 [2];
  long lStack_1a8;
  long lStack_1a0;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  long *plStack_168;
  long lStack_160;
  long *plStack_158;
  long lStack_150;
  long lStack_148;
  long lStack_140;
  long lStack_138;
  undefined4 uStack_130;
  long lStack_128;
  long lStack_120;
  long lStack_118;
  long lStack_110;
  long lStack_108;
  long lStack_100;
  undefined4 uStack_f8;
  long lStack_f0;
  long lStack_e8;
  long lStack_e0;
  long lStack_d8;
  long lStack_d0;
  long lStack_c8;
  undefined4 uStack_c0;
  long lStack_b8;
  long lStack_b0;
  long lStack_a8;
  long lStack_a0;
  long lStack_98;
  long lStack_90;
  undefined4 uStack_88;
  long lStack_80;
  long lStack_78;
  undefined8 uStack_70;
  long lStack_68;
  long lStack_60;
  long lStack_58;
  undefined4 uStack_50;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  FUN_10a0d0194(&lStack_160,auStack_1b0);
  plVar4 = param_1 + 0x3a;
  func_0x00010a19b5ac(plVar4,&lStack_160);
  plVar5 = plStack_158;
  if (plStack_158 != (long *)0x0) {
    plVar1 = plStack_158 + 1;
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
      (**(code **)(*plStack_158 + 0x10))(plStack_158);
      __ZNSt3__119__shared_weak_count14__release_weakEv();
      plVar4 = plVar5;
    }
  }
  FUN_10ab6e728();
  if (*(char *)((long)plVar4 + 0x17) < '\0') {
    plVar5 = &lStack_160;
    func_0x000107c3192c(plVar5,*plVar4,plVar4[1]);
  }
  else {
    plStack_158 = (long *)plVar4[1];
    lStack_160 = *plVar4;
    lStack_150 = plVar4[2];
    plVar5 = plVar4;
  }
  lStack_148 = plVar4[3];
  uStack_130 = (undefined4)plVar4[6];
  lStack_138 = plVar4[5];
  lStack_140 = plVar4[4];
  plVar4 = &lStack_128;
  FUN_10ab6e9d8();
  if (*(char *)((long)plVar5 + 0x17) < '\0') {
    func_0x000107c3192c(plVar4,*plVar5,plVar5[1]);
  }
  else {
    lStack_118 = plVar5[2];
    lStack_120 = plVar5[1];
    lStack_128 = *plVar5;
    plVar4 = plVar5;
  }
  lStack_110 = plVar5[3];
  lStack_100 = plVar5[5];
  lStack_108 = plVar5[4];
  uStack_f8 = (undefined4)plVar5[6];
  plVar5 = &lStack_f0;
  FUN_10ab6eb18();
  if (*(char *)((long)plVar4 + 0x17) < '\0') {
    func_0x000107c3192c(plVar5,*plVar4,plVar4[1]);
  }
  else {
    lStack_e0 = plVar4[2];
    lStack_e8 = plVar4[1];
    lStack_f0 = *plVar4;
    plVar5 = plVar4;
  }
  lStack_d8 = plVar4[3];
  lStack_c8 = plVar4[5];
  lStack_d0 = plVar4[4];
  uStack_c0 = (undefined4)plVar4[6];
  plVar4 = &lStack_b8;
  FUN_10ab6f020();
  if (*(char *)((long)plVar5 + 0x17) < '\0') {
    func_0x000107c3192c(plVar4,*plVar5,plVar5[1]);
  }
  else {
    lStack_a8 = plVar5[2];
    lStack_b0 = plVar5[1];
    lStack_b8 = *plVar5;
    plVar4 = plVar5;
  }
  lStack_a0 = plVar5[3];
  lStack_90 = plVar5[5];
  lStack_98 = plVar5[4];
  uStack_88 = (undefined4)plVar5[6];
  FUN_10ab6f160();
  if (*(char *)((long)plVar4 + 0x17) < '\0') {
    func_0x000107c3192c(&lStack_80,*plVar4,plVar4[1]);
  }
  else {
    uStack_70 = plVar4[2];
    lStack_78 = plVar4[1];
    lStack_80 = *plVar4;
  }
  lStack_68 = plVar4[3];
  lStack_58 = plVar4[5];
  lStack_60 = plVar4[4];
  uStack_50 = (undefined4)plVar4[6];
  FUN_10ab6f520(auStack_1b0,&lStack_160,5);
  lVar6 = param_1[0x3a];
  *(undefined4 *)(lVar6 + 0xf0) = auStack_1b0[0];
  if ((undefined4 *)(lVar6 + 0xf0) != auStack_1b0) {
    FUN_10a1903c4(lVar6 + 0xf8,lStack_1a8,lStack_1a0,
                  (lStack_1a0 - lStack_1a8 >> 3) * 0x6db6db6db6db6db7);
  }
  *(undefined8 *)(lVar6 + 0x118) = uStack_188;
  *(undefined8 *)(lVar6 + 0x110) = uStack_190;
  *(undefined8 *)(lVar6 + 0x128) = uStack_178;
  *(undefined8 *)(lVar6 + 0x120) = uStack_180;
  *(undefined8 *)(lVar6 + 0x130) = uStack_170;
  plStack_168 = &lStack_1a8;
  func_0x00010a190844(&plStack_168);
  lVar6 = 0x118;
  do {
    lVar6 = lVar6 + -0x38;
  } while (lVar6 != 0);
  lVar6 = param_1[0x3a];
  *(undefined8 *)(lVar6 + 0xe8) = 1;
  *(undefined4 *)(lVar6 + 0x144) = 0xbf800000;
  *(undefined8 *)(lVar6 + 0x148) = 0xbf800000;
  lVar6 = param_1[0x3a];
  uVar8 = NEON_fmov(0x3f800000,4);
  *(undefined8 *)(lVar6 + 0x138) = uVar8;
  *(undefined4 *)(lVar6 + 0x140) = 0;
  if (*(char *)((long)param_1 + 0xb9) != '\x01') {
    *(undefined1 *)((long)param_1 + 0xb9) = 1;
    (**(code **)(*param_1 + 0xa0))(param_1);
  }
  if (*(char *)((long)param_1 + 0xba) != '\x01') {
    *(undefined1 *)((long)param_1 + 0xba) = 1;
    (**(code **)(*param_1 + 0xa0))(param_1);
  }
  FUN_10ac645fc(param_1,param_1 + 0x3a);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_48) {
    ___stack_chk_fail();
    plStack_168 = &lStack_160;
    func_0x00010a190844(&plStack_168);
    lVar6 = -0x118;
    pcVar7 = (char *)((long)&uStack_70 + 7);
    do {
      if (*pcVar7 < '\0') {
        __ZdlPv(*(undefined8 *)(pcVar7 + -0x17));
      }
      lVar6 = lVar6 + 0x38;
      pcVar7 = pcVar7 + -0x38;
    } while (lVar6 != 0);
    __Unwind_Resume();
    if (param_1[0xb] != 0) {
      param_1[0xc] = param_1[0xb];
      __ZdlPv();
    }
    if (param_1[8] != 0) {
      param_1[9] = param_1[8];
      __ZdlPv();
    }
    if (param_1[5] != 0) {
      param_1[6] = param_1[5];
      __ZdlPv();
    }
    if (param_1[2] != 0) {
      param_1[3] = param_1[2];
      __ZdlPv();
    }
    return param_1;
  }
  return param_1;
}



/* Entry: 10ac6432c; end: 10ac6438b;  */

long FUN_10ac6432c(long param_1)

{
  if (*(long *)(param_1 + 0x58) != 0) {
    *(long *)(param_1 + 0x60) = *(long *)(param_1 + 0x58);
    __ZdlPv();
  }
  if (*(long *)(param_1 + 0x40) != 0) {
    *(long *)(param_1 + 0x48) = *(long *)(param_1 + 0x40);
    __ZdlPv();
  }
  if (*(long *)(param_1 + 0x28) != 0) {
    *(long *)(param_1 + 0x30) = *(long *)(param_1 + 0x28);
    __ZdlPv();
  }
  if (*(long *)(param_1 + 0x10) != 0) {
    *(long *)(param_1 + 0x18) = *(long *)(param_1 + 0x10);
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 10ac6438c; end: 10ac644bb;  */

undefined8 * FUN_10ac6438c(undefined8 *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  
  param_1[0x3d] = 0;
  param_1[0x3e] = 0;
  param_1[0x3c] = &PTR_FUN_110c383b8;
  *(undefined2 *)(param_1 + 0x3f) = 0x100;
  puVar1 = param_1;
  FUN_10a1dbb98(param_1,&PTR_PTR_110c60cf0,param_2);
  puVar1[0x15] = 0xffffffffffffffff;
  puVar1[0x16] = 0xffffffffffffffff;
  *(undefined1 *)((long)puVar1 + 0xba) = 0;
  *(undefined2 *)(puVar1 + 0x17) = 0;
  puVar1[0x1b] = 0;
  puVar1[0x1c] = 0;
  puVar1[0x18] = 0;
  puVar1[0x19] = 0;
  *(undefined1 *)(puVar1 + 0x1a) = 0;
  *puVar1 = &PTR_FUN_110c60b18;
  puVar1[2] = &PTR_FUN_110c60be8;
  puVar1[5] = &PTR_FUN_110c60c18;
  puVar1[0x3c] = &PTR_FUN_110c60ca0;
  *(undefined4 *)(puVar1 + 0x1f) = 0;
  *(undefined1 *)(puVar1 + 0x20) = 0;
  *(undefined8 *)((long)puVar1 + 0x104) = 0;
  puVar1[0x23] = 0;
  puVar1[0x22] = 0;
  puVar1[0x25] = 0;
  puVar1[0x24] = 0;
  puVar1[0x27] = 0;
  puVar1[0x26] = 0;
  puVar1[0x29] = 0;
  puVar1[0x28] = 0;
  puVar1[0x2b] = 0;
  puVar1[0x2a] = 0;
  puVar1[0x2d] = 0;
  puVar1[0x2c] = 0;
  puVar1[0x2f] = 0;
  puVar1[0x2e] = 0;
  puVar1[0x31] = 0;
  puVar1[0x30] = 0;
  puVar1[0x33] = 0;
  puVar1[0x32] = 0;
  puVar1[0x35] = 0;
  puVar1[0x34] = 0;
  puVar1[0x37] = 0;
  puVar1[0x36] = 0;
  puVar1[0x39] = 0;
  puVar1[0x38] = 0;
  puVar1[0x3b] = 0;
  puVar1[0x3a] = 0;
  FUN_10ac63f4c();
  return param_1;
}



/* Entry: 10ac644bc; end: 10ac645f7;  */

undefined8 * FUN_10ac644bc(undefined8 *param_1)

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
  
  *param_1 = &PTR_FUN_110c60b18;
  param_1[2] = &PTR_FUN_110c60be8;
  param_1[5] = &PTR_FUN_110c60c18;
  param_1[0x3c] = &PTR_FUN_110c60ca0;
  FUN_10a0cfe2c(param_1 + 0x3a);
  if (param_1[0x37] != 0) {
    param_1[0x38] = param_1[0x37];
    __ZdlPv();
  }
  if (param_1[0x34] != 0) {
    param_1[0x35] = param_1[0x34];
    __ZdlPv();
  }
  if (*(char *)((long)param_1 + 0x19f) < '\0') {
    __ZdlPv(param_1[0x31]);
  }
  if (*(char *)((long)param_1 + 0x187) < '\0') {
    __ZdlPv(param_1[0x2e]);
  }
  if (param_1[0x2b] != 0) {
    param_1[0x2c] = param_1[0x2b];
    __ZdlPv();
  }
  if (param_1[0x28] != 0) {
    param_1[0x29] = param_1[0x28];
    __ZdlPv();
  }
  if (param_1[0x25] != 0) {
    param_1[0x26] = param_1[0x25];
    __ZdlPv();
  }
  if (param_1[0x22] != 0) {
    param_1[0x23] = param_1[0x22];
    __ZdlPv();
  }
  FUN_10a3a75a8(param_1 + 0x1d);
  *param_1 = &PTR_FUN_110c64a28;
  param_1[2] = &PTR_FUN_110c68030;
  param_1[5] = &PTR_DAT_110c68060;
  param_1[0x3c] = &PTR_FUN_110c64b28;
  FUN_10a0cfe2c(param_1 + 0x1b);
  func_0x00010a1980a8(param_1 + 0x18);
  *param_1 = &PTR_FUN_110c64cc0;
  param_1[2] = &PTR_FUN_110bb3b30;
  param_1[5] = &PTR_DAT_110bb3b60;
  param_1[0x3c] = &PTR_DAT_110c64d90;
  func_0x00010a1f9d14(param_1 + 0x13);
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



/* Entry: 10ac645f8; end: 10ac645fb;  */

undefined8 * FUN_10ac645f8(undefined8 *param_1)

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
  
  *param_1 = &PTR_FUN_110c60b18;
  param_1[2] = &PTR_FUN_110c60be8;
  param_1[5] = &PTR_FUN_110c60c18;
  param_1[0x3c] = &PTR_FUN_110c60ca0;
  FUN_10a0cfe2c(param_1 + 0x3a);
  if (param_1[0x37] != 0) {
    param_1[0x38] = param_1[0x37];
    __ZdlPv();
  }
  if (param_1[0x34] != 0) {
    param_1[0x35] = param_1[0x34];
    __ZdlPv();
  }
  if (*(char *)((long)param_1 + 0x19f) < '\0') {
    __ZdlPv(param_1[0x31]);
  }
  if (*(char *)((long)param_1 + 0x187) < '\0') {
    __ZdlPv(param_1[0x2e]);
  }
  if (param_1[0x2b] != 0) {
    param_1[0x2c] = param_1[0x2b];
    __ZdlPv();
  }
  if (param_1[0x28] != 0) {
    param_1[0x29] = param_1[0x28];
    __ZdlPv();
  }
  if (param_1[0x25] != 0) {
    param_1[0x26] = param_1[0x25];
    __ZdlPv();
  }
  if (param_1[0x22] != 0) {
    param_1[0x23] = param_1[0x22];
    __ZdlPv();
  }
  FUN_10a3a75a8(param_1 + 0x1d);
  *param_1 = &PTR_FUN_110c64a28;
  param_1[2] = &PTR_FUN_110c68030;
  param_1[5] = &PTR_DAT_110c68060;
  param_1[0x3c] = &PTR_FUN_110c64b28;
  FUN_10a0cfe2c(param_1 + 0x1b);
  func_0x00010a1980a8(param_1 + 0x18);
  *param_1 = &PTR_FUN_110c64cc0;
  param_1[2] = &PTR_FUN_110bb3b30;
  param_1[5] = &PTR_DAT_110bb3b60;
  param_1[0x3c] = &PTR_DAT_110c64d90;
  func_0x00010a1f9d14(param_1 + 0x13);
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



/* Entry: 10ac645fc; end: 10ac64637;  */

long * FUN_10ac645fc(long *param_1,long *param_2)

{
  int *piVar1;
  int *piVar2;
  char cVar3;
  bool bVar4;
  undefined *puVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  undefined4 uVar9;
  int *piVar10;
  long lVar11;
  long *plVar12;
  long alStack_1e0 [7];
  undefined4 uStack_1a8;
  undefined4 uStack_1a0;
  undefined1 uStack_19c;
  undefined1 uStack_198;
  undefined4 uStack_194;
  undefined1 uStack_190;
  undefined1 uStack_18c;
  long alStack_188 [11];
  char cStack_130;
  long lStack_128;
  long alStack_100 [7];
  undefined4 uStack_c8;
  undefined4 uStack_c0;
  undefined1 uStack_bc;
  undefined1 uStack_b8;
  undefined4 uStack_b4;
  undefined1 uStack_b0;
  undefined1 uStack_ac;
  long alStack_a8 [11];
  char cStack_50;
  long lStack_48;
  
  if (*param_2 != 0) {
    func_0x00010a19b530(param_1 + 0x1b);
    if (param_1[0x1b] != 0) {
      plVar8 = param_1;
      (**(code **)(*param_1 + 0xa0))();
      uVar9 = 0;
      if (param_1[0x1b] != 0) {
        uVar9 = 2;
      }
      *(undefined4 *)((long)param_1 + 0x74) = uVar9;
      return plVar8;
    }
    plVar8 = (long *)&UNK_10f69f238;
    FUN_10a00946c();
    plVar6 = plVar8 + 0x18;
    *(byte *)(plVar8 + 0x1a) = *(byte *)(plVar8 + 0x1a) | 1;
    if ((*plVar6 != 0) &&
       ((*(char *)((long)plVar8 + 0xb9) == '\0' || (*(char *)((long)plVar8 + 0xba) == '\0')))) {
      if ((bRam000000011330a9e8 >> 1 & 1) != 0) {
        func_0x00010ae06f08(1,2,&UNK_10f69f24f,&UNK_10f69f292,0x4f,&UNK_10f69f2ec);
      }
      plVar12 = (long *)plVar8[0x19];
      *plVar6 = 0;
      plVar8[0x19] = 0;
      if (plVar12 != (long *)0x0) {
        plVar8 = plVar12 + 1;
        do {
          lVar11 = *plVar8;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar8,0x10);
          if (bVar4) {
            *plVar8 = lVar11 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (lVar11 == 0) {
          (**(code **)(*plVar12 + 0x10))(plVar12);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)PTR___ZNSt3__119__shared_weak_count14__release_weakEv_110346648)(plVar12);
          return plVar12;
        }
      }
      return plVar6;
    }
    return plVar8;
  }
  puVar5 = &UNK_10f69f21e;
  FUN_10a00946c();
  plVar6 = alStack_100;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  alStack_100[0]._0_4_ = 0;
  uStack_c8 = 0;
  uStack_c0 = 1;
  uStack_bc = 0;
  uStack_b8 = 0;
  uStack_b4 = 0xffffffff;
  uStack_b0 = 0;
  uStack_ac = 0;
  plVar8 = (long *)(puVar5 + 0xe8);
  FUN_10ab17db4(alStack_a8,alStack_100,plVar8,(long)*(short *)(puVar5 + 0x10a));
  if (cStack_50 == '\x01') {
    plVar8 = alStack_a8;
    FUN_10a4c3ba4(param_2);
    if (cStack_50 == '\x01') {
      FUN_10a22d0f8(alStack_a8);
    }
  }
  FUN_10a22d0f8();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return plVar6;
  }
  ___stack_chk_fail();
  if (cStack_50 == '\x01') {
    FUN_10a22d0f8(alStack_a8);
  }
  FUN_10a22d0f8(alStack_100);
  __Unwind_Resume();
  plVar7 = alStack_1e0;
  lStack_128 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar12 = plVar8;
  if ((uint)*(ushort *)(plVar6 + 0x21) != (int)*(short *)((long)plVar6 + 0x10a)) {
    alStack_1e0[0]._0_4_ = 0;
    uStack_1a8 = 0;
    uStack_1a0 = 1;
    uStack_19c = 0;
    uStack_198 = 0;
    uStack_194 = 0xffffffff;
    uStack_190 = 0;
    uStack_18c = 0;
    plVar12 = plVar6 + 0x1d;
    FUN_10ab17db4(alStack_188,alStack_1e0);
    if (cStack_130 == '\x01') {
      plVar12 = alStack_188;
      FUN_10a4c3ba4(plVar8);
      if (cStack_130 == '\x01') {
        FUN_10a22d0f8(alStack_188);
      }
    }
    FUN_10a22d0f8();
    plVar6 = plVar7;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_128) {
    return plVar6;
  }
  ___stack_chk_fail();
  if (cStack_130 == '\x01') {
    FUN_10a22d0f8(alStack_188);
  }
  FUN_10a22d0f8(alStack_1e0);
  __Unwind_Resume();
  plVar8 = plVar6 + 0x1d;
  func_0x00010ab17e00(plVar8,(long)*(short *)((long)plVar6 + 0x10a));
  if (plVar12 != (long *)0x0) {
    piVar10 = (int *)plVar12[5];
    piVar2 = (int *)plVar12[6];
    if (piVar10 == piVar2) {
LAB_10ac64884:
      piVar1 = (int *)0x0;
      if (piVar10 != piVar2) {
        piVar1 = piVar10;
      }
      if (piVar1 != (int *)0x0) {
        return (long *)(piVar1 + 2);
      }
    }
    else {
      do {
        if ((*piVar10 == (int)plVar8) && (piVar10[1] == (int)((ulong)plVar8 >> 0x20)))
        goto LAB_10ac64884;
        piVar10 = piVar10 + 0x88;
      } while (piVar10 != piVar2);
    }
  }
  return (long *)0x0;
}



/* Entry: 10ac64638; end: 10ac6472b;  */

int * FUN_10ac64638(long param_1,undefined8 param_2)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  int aiStack_1c0 [14];
  undefined4 uStack_188;
  undefined4 uStack_180;
  undefined1 uStack_17c;
  undefined1 uStack_178;
  undefined4 uStack_174;
  undefined1 uStack_170;
  undefined1 uStack_16c;
  int aiStack_168 [22];
  char cStack_110;
  long lStack_108;
  int aiStack_e0 [14];
  undefined4 uStack_a8;
  undefined4 uStack_a0;
  undefined1 uStack_9c;
  undefined1 uStack_98;
  undefined4 uStack_94;
  undefined1 uStack_90;
  undefined1 uStack_8c;
  int aiStack_88 [22];
  char cStack_30;
  long lStack_28;
  
  piVar1 = aiStack_e0;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  aiStack_e0[0] = 0;
  uStack_a8 = 0;
  uStack_a0 = 1;
  uStack_9c = 0;
  uStack_98 = 0;
  uStack_94 = 0xffffffff;
  uStack_90 = 0;
  uStack_8c = 0;
  piVar3 = (int *)(param_1 + 0xe8);
  FUN_10ab17db4(aiStack_88,aiStack_e0,piVar3,(long)*(short *)(param_1 + 0x10a));
  if (cStack_30 == '\x01') {
    piVar3 = aiStack_88;
    FUN_10a4c3ba4(param_2);
    if (cStack_30 == '\x01') {
      FUN_10a22d0f8(aiStack_88);
    }
  }
  FUN_10a22d0f8();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return piVar1;
  }
  ___stack_chk_fail();
  if (cStack_30 == '\x01') {
    FUN_10a22d0f8(aiStack_88);
  }
  FUN_10a22d0f8(aiStack_e0);
  __Unwind_Resume();
  piVar2 = aiStack_1c0;
  lStack_108 = *(long *)PTR____stack_chk_guard_11034bdc0;
  piVar4 = piVar3;
  if ((uint)*(ushort *)(piVar1 + 0x42) != (int)*(short *)((long)piVar1 + 0x10a)) {
    aiStack_1c0[0] = 0;
    uStack_188 = 0;
    uStack_180 = 1;
    uStack_17c = 0;
    uStack_178 = 0;
    uStack_174 = 0xffffffff;
    uStack_170 = 0;
    uStack_16c = 0;
    piVar4 = piVar1 + 0x3a;
    FUN_10ab17db4(aiStack_168,aiStack_1c0);
    if (cStack_110 == '\x01') {
      piVar4 = aiStack_168;
      FUN_10a4c3ba4(piVar3);
      if (cStack_110 == '\x01') {
        FUN_10a22d0f8(aiStack_168);
      }
    }
    FUN_10a22d0f8();
    piVar1 = piVar2;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_108) {
    return piVar1;
  }
  ___stack_chk_fail();
  if (cStack_110 == '\x01') {
    FUN_10a22d0f8(aiStack_168);
  }
  FUN_10a22d0f8(aiStack_1c0);
  __Unwind_Resume();
  piVar3 = piVar1 + 0x3a;
  func_0x00010ab17e00(piVar3,(long)*(short *)((long)piVar1 + 0x10a));
  if (piVar4 != (int *)0x0) {
    piVar1 = *(int **)(piVar4 + 10);
    piVar4 = *(int **)(piVar4 + 0xc);
    if (piVar1 == piVar4) {
LAB_10ac64884:
      piVar3 = (int *)0x0;
      if (piVar1 != piVar4) {
        piVar3 = piVar1;
      }
      if (piVar3 != (int *)0x0) {
        return piVar3 + 2;
      }
    }
    else {
      do {
        if ((*piVar1 == (int)piVar3) && (piVar1[1] == (int)((ulong)piVar3 >> 0x20)))
        goto LAB_10ac64884;
        piVar1 = piVar1 + 0x88;
      } while (piVar1 != piVar4);
    }
  }
  return (int *)0x0;
}



/* Entry: 10ac6472c; end: 10ac6482b;  */

int * FUN_10ac6472c(int *param_1,int *param_2)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  int aiStack_e0 [14];
  undefined4 uStack_a8;
  undefined4 uStack_a0;
  undefined1 uStack_9c;
  undefined1 uStack_98;
  undefined4 uStack_94;
  undefined1 uStack_90;
  undefined1 uStack_8c;
  int aiStack_88 [22];
  char cStack_30;
  long lStack_28;
  
  piVar1 = aiStack_e0;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  piVar2 = param_2;
  if ((uint)*(ushort *)(param_1 + 0x42) != (int)*(short *)((long)param_1 + 0x10a)) {
    aiStack_e0[0] = 0;
    uStack_a8 = 0;
    uStack_a0 = 1;
    uStack_9c = 0;
    uStack_98 = 0;
    uStack_94 = 0xffffffff;
    uStack_90 = 0;
    uStack_8c = 0;
    piVar2 = param_1 + 0x3a;
    FUN_10ab17db4(aiStack_88,aiStack_e0);
    if (cStack_30 == '\x01') {
      piVar2 = aiStack_88;
      FUN_10a4c3ba4(param_2);
      if (cStack_30 == '\x01') {
        FUN_10a22d0f8(aiStack_88);
      }
    }
    FUN_10a22d0f8();
    param_1 = piVar1;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return param_1;
  }
  ___stack_chk_fail();
  if (cStack_30 == '\x01') {
    FUN_10a22d0f8(aiStack_88);
  }
  FUN_10a22d0f8(aiStack_e0);
  __Unwind_Resume();
  piVar1 = param_1 + 0x3a;
  func_0x00010ab17e00(piVar1,(long)*(short *)((long)param_1 + 0x10a));
  if (piVar2 != (int *)0x0) {
    piVar3 = *(int **)(piVar2 + 10);
    piVar2 = *(int **)(piVar2 + 0xc);
    if (piVar3 == piVar2) {
LAB_10ac64884:
      piVar1 = (int *)0x0;
      if (piVar3 != piVar2) {
        piVar1 = piVar3;
      }
      if (piVar1 != (int *)0x0) {
        return piVar1 + 2;
      }
    }
    else {
      do {
        if ((*piVar3 == (int)piVar1) && (piVar3[1] == (int)((ulong)piVar1 >> 0x20)))
        goto LAB_10ac64884;
        piVar3 = piVar3 + 0x88;
      } while (piVar3 != piVar2);
    }
  }
  return (int *)0x0;
}



/* Entry: 10ac6482c; end: 10ac648a7;  */

int * FUN_10ac6482c(long param_1,long param_2)

{
  int *piVar1;
  int *piVar2;
  long lVar3;
  int *piVar4;
  
  lVar3 = param_1 + 0xe8;
  func_0x00010ab17e00(lVar3,(long)*(short *)(param_1 + 0x10a));
  if (param_2 != 0) {
    piVar4 = *(int **)(param_2 + 0x28);
    piVar2 = *(int **)(param_2 + 0x30);
    if (piVar4 == piVar2) {
LAB_10ac64884:
      piVar1 = (int *)0x0;
      if (piVar4 != piVar2) {
        piVar1 = piVar4;
      }
      if (piVar1 != (int *)0x0) {
        return piVar1 + 2;
      }
    }
    else {
      do {
        if ((*piVar4 == (int)lVar3) && (piVar4[1] == (int)((ulong)lVar3 >> 0x20)))
        goto LAB_10ac64884;
        piVar4 = piVar4 + 0x88;
      } while (piVar4 != piVar2);
    }
  }
  return (int *)0x0;
}



/* Entry: 10ac648a8; end: 10ac64d6f;  */

/* WARNING: Removing unreachable block (ram,0x00010ac64e6c) */

void FUN_10ac648a8(long param_1,long param_2,long param_3)

{
  ulong uVar1;
  long *plVar2;
  undefined4 *puVar3;
  long *plVar4;
  int *piVar5;
  float *pfVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  code *pcVar9;
  long *plVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined ***pppuVar13;
  long lVar14;
  int *piVar15;
  float *pfVar16;
  undefined4 *puVar17;
  long lVar18;
  undefined2 *puVar19;
  ulong uVar20;
  undefined2 *puVar21;
  ulong uVar22;
  long lVar23;
  ulong uVar24;
  long lVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  undefined4 uStack_1f4;
  undefined **appuStack_1f0 [2];
  undefined **ppuStack_1e0;
  undefined **ppuStack_1d8;
  undefined1 auStack_1d0 [56];
  undefined8 uStack_198;
  char cStack_181;
  undefined **appuStack_170 [19];
  undefined1 auStack_d8 [24];
  ulong uStack_c0;
  long *plStack_b8;
  long *plStack_b0;
  undefined8 *puStack_a8;
  undefined1 *puStack_a0;
  code *pcStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined1 auStack_70 [48];
  
  if (*(long *)(param_1 + *(long *)(&UNK_10e50a6b0 + (ulong)*(uint *)(param_1 + 0x104) * 8)) ==
      ((long *)(param_1 + *(long *)(&UNK_10e50a6b0 + (ulong)*(uint *)(param_1 + 0x104) * 8)))[1]) {
    if (*(char *)(param_1 + 0x187) < '\0') {
      if (*(long *)(param_1 + 0x178) != 0) goto LAB_10ac64904;
    }
    else if (*(char *)(param_1 + 0x187) != '\0') {
LAB_10ac64904:
      FUN_10ac5a920(auStack_70,param_1,param_1 + 0x170,0);
      *(undefined4 *)(param_1 + 0x104) = 1;
      FUN_10ac64d70(&uStack_90,auStack_70);
      if (*(long *)(param_1 + 0x128) != 0) {
        *(long *)(param_1 + 0x130) = *(long *)(param_1 + 0x128);
        __ZdlPv();
        *(undefined8 *)(param_1 + 0x128) = 0;
        *(undefined8 *)(param_1 + 0x130) = 0;
        *(undefined8 *)(param_1 + 0x138) = 0;
      }
      *(undefined8 *)(param_1 + 0x130) = uStack_88;
      *(undefined8 *)(param_1 + 0x128) = uStack_90;
      *(undefined8 *)(param_1 + 0x138) = uStack_80;
      FUN_10a0f1ea0(auStack_70);
    }
  }
  plVar10 = (long *)(param_1 + 0x140);
  if (*(long *)(param_1 + 0x140) == *(long *)(param_1 + 0x148)) {
    if (*(char *)(param_1 + 0x19f) < '\0') {
      if (*(long *)(param_1 + 400) == 0) goto LAB_10ac649d8;
    }
    else if (*(char *)(param_1 + 0x19f) == '\0') {
LAB_10ac649d8:
      lVar14 = *(long *)(param_1 + *(long *)(&UNK_10e50a6b0 + (ulong)*(uint *)(param_1 + 0x104) * 8)
                        );
      lVar23 = ((long *)(param_1 + *(long *)(&UNK_10e50a6b0 + (ulong)*(uint *)(param_1 + 0x104) * 8)
                        ))[1];
      func_0x00010a14ddc8(plVar10,lVar14,lVar23,lVar23 - lVar14 >> 2);
      goto LAB_10ac649f8;
    }
    FUN_10ac5a920(auStack_70,param_1,param_1 + 0x188,0);
    FUN_10ac64d70(&uStack_90,auStack_70);
    if (*plVar10 != 0) {
      *(long *)(param_1 + 0x148) = *plVar10;
      __ZdlPv();
      *plVar10 = 0;
      *(undefined8 *)(param_1 + 0x148) = 0;
      *(undefined8 *)(param_1 + 0x150) = 0;
    }
    *(undefined8 *)(param_1 + 0x148) = uStack_88;
    *(undefined8 *)(param_1 + 0x140) = uStack_90;
    *(undefined8 *)(param_1 + 0x150) = uStack_80;
    FUN_10a0f1ea0(auStack_70);
  }
LAB_10ac649f8:
  lVar14 = *(long *)(param_2 + 0x18) - *(long *)(param_2 + 0x10) >> 3;
  FUN_10a14c74c(*(long *)(param_2 + 0x10),lVar14,*(undefined8 *)(param_2 + 0x180),param_1 + 0x1a0);
  if (((*(byte *)(param_1 + 0x100) >> 1 & 1) == 0) &&
     (*(long *)(param_1 + *(long *)(&UNK_10e50a6b0 + (ulong)*(uint *)(param_1 + 0x104) * 8)) !=
      ((long *)(param_1 + *(long *)(&UNK_10e50a6b0 + (ulong)*(uint *)(param_1 + 0x104) * 8)))[1]))
  goto LAB_10ac64ae0;
  *(undefined4 *)(param_1 + 0x104) = 2;
  lVar14 = param_1 + 0xe8;
  func_0x00010ab17e00(lVar14,*(undefined2 *)(param_1 + 0x108));
  if (param_3 == 0) {
LAB_10ac64aa8:
    lVar14 = *(long *)(param_1 + 0x1a0);
    func_0x00010a14ddc8(param_1 + 0x1b8,lVar14,*(long *)(param_1 + 0x1a8),
                        *(long *)(param_1 + 0x1a8) - lVar14 >> 2);
  }
  else {
    piVar15 = *(int **)(param_3 + 0x28);
    piVar5 = *(int **)(param_3 + 0x30);
    if (piVar15 != piVar5) {
      do {
        if ((*piVar15 == (int)lVar14) && (piVar15[1] == (int)((ulong)lVar14 >> 0x20)))
        goto LAB_10ac64a80;
        piVar15 = piVar15 + 0x88;
      } while (piVar15 != piVar5);
      goto LAB_10ac64aa8;
    }
LAB_10ac64a80:
    if ((piVar15 == piVar5) || (piVar15 == (int *)0x0)) goto LAB_10ac64aa8;
    lVar14 = *(long *)(piVar15 + 8) - *(long *)(piVar15 + 6) >> 3;
    FUN_10a14c74c(*(long *)(piVar15 + 6),lVar14,*(undefined8 *)(piVar15 + 0x62),param_1 + 0x1b8);
  }
  pfVar6 = *(float **)(param_1 + 0x1c0);
  for (pfVar16 = *(float **)(param_1 + 0x1b8); pfVar16 != pfVar6; pfVar16 = pfVar16 + 1) {
    *pfVar16 = *pfVar16 * 0.5 + 0.5;
  }
LAB_10ac64ae0:
  plVar2 = (long *)(param_1 + *(long *)(&UNK_10e50a6b0 + (ulong)*(uint *)(param_1 + 0x104) * 8));
  plVar4 = plVar2;
  if (*(long *)(param_1 + 0x140) != *(long *)(param_1 + 0x148)) {
    plVar4 = plVar10;
  }
  uVar20 = plVar2[1] - *plVar2 >> 2;
  uVar22 = plVar4[1] - *plVar4 >> 2;
  uVar24 = *(long *)(param_1 + 0x1a8) - *(long *)(param_1 + 0x1a0) >> 2;
  if (uVar20 <= uVar22) {
    uVar22 = uVar20;
  }
  if (uVar22 <= uVar24) {
    uVar24 = uVar22;
  }
  if ((uVar24 & 1) != 0) {
    puVar11 = (undefined8 *)&UNK_10f69eb31;
    FUN_10a00946c();
    FUN_10a0f1ea0(auStack_70);
    puVar12 = puVar11;
    __Unwind_Resume();
    pcStack_98 = FUN_10ac64d70;
    uStack_c0 = uVar24;
    plStack_b8 = plVar2;
    plStack_b0 = plVar4;
    puStack_a8 = puVar11;
    puStack_a0 = &stack0xfffffffffffffff0;
    FUN_10a0f20c0(auStack_d8,lVar14);
    FUN_10a108878(appuStack_1f0,auStack_d8,0x18);
    *puVar12 = 0;
    puVar12[1] = 0;
    puVar12[2] = 0;
    uStack_1f4 = 0;
    while( true ) {
      pppuVar13 = appuStack_1f0;
      __ZNSt3__113basic_istreamIcNS_11char_traitsIcEEErsERf(pppuVar13,&uStack_1f4);
      if ((*(byte *)((long)pppuVar13 + (long)((*pppuVar13)[-3] + 0x20)) & 5) != 0) break;
      FUN_10a0ca014(puVar12,&uStack_1f4);
    }
    appuStack_170[0] = &PTR_DAT_1108a5a88;
    appuStack_1f0[0] = &PTR_SUB_1108a5a38;
    ppuStack_1e0 = &PTR_DAT_1108a5a60;
    ppuStack_1d8 = &PTR_DAT_11088d7b0;
    if (cStack_181 < '\0') {
      __ZdlPv(uStack_198);
    }
    ppuStack_1d8 = (undefined **)
                   (PTR___ZTVNSt3__115basic_streambufIcNS_11char_traitsIcEEEE_110346b20 + 0x10);
    __ZNSt3__16localeD1Ev(auStack_1d0);
    __ZNSt3__114basic_iostreamIcNS_11char_traitsIcEEED2Ev(appuStack_1f0,&PTR_PTR_1108a5aa0);
    __ZNSt3__19basic_iosIcNS_11char_traitsIcEEED2Ev(appuStack_170);
    return;
  }
  lVar14 = *(long *)(param_1 + 0x1d0);
  plVar10 = (long *)(lVar14 + 0x10);
  puVar17 = (undefined4 *)*plVar10;
  uVar22 = uVar24 * 0x1c;
  uVar20 = *(long *)(lVar14 + 0x18) - (long)puVar17;
  if (uVar22 < uVar20 || uVar22 - uVar20 == 0) {
    if (uVar22 < uVar20) {
      *(undefined4 **)(lVar14 + 0x18) = puVar17 + uVar24 * 7;
    }
  }
  else {
    func_0x000107c27d58(plVar10,uVar22 - uVar20);
    puVar17 = *(undefined4 **)(*(long *)(param_1 + 0x1d0) + 0x10);
  }
  if (uVar24 != 0) {
    uVar22 = 0;
    uVar24 = uVar24 >> 1;
    lVar14 = 4;
    do {
      lVar23 = *(long *)(param_1 + 0x1a0);
      uVar20 = *(long *)(param_1 + 0x1a8) - lVar23 >> 2;
      if ((uVar20 <= uVar22) || (uVar1 = uVar22 + 1, uVar20 <= uVar1)) goto LAB_10ac64d48;
      lVar18 = *plVar2;
      uVar20 = plVar2[1] - lVar18 >> 2;
      if ((uVar20 <= uVar22) || (uVar20 <= uVar1)) goto LAB_10ac64d48;
      uVar20 = plVar4[1] - *plVar4 >> 2;
      if ((uVar20 <= uVar22) || (uVar20 <= uVar1)) goto LAB_10ac64d48;
      fVar26 = *(float *)(lVar23 + lVar14);
      uVar8 = *(undefined4 *)(lVar18 + uVar22 * 4);
      fVar27 = *(float *)(lVar18 + uVar22 * 4 + 4);
      puVar3 = (undefined4 *)(*plVar4 + uVar22 * 4);
      uVar7 = *puVar3;
      fVar28 = (float)puVar3[1];
      *puVar17 = *(undefined4 *)(lVar23 + lVar14 + -4);
      puVar17[1] = -fVar26;
      *(undefined8 *)(puVar17 + 4) = 0x3f80000000000000;
      *(undefined8 *)(puVar17 + 2) = 0;
      *(undefined8 *)(puVar17 + 8) = 0x3f80000000000000;
      *(undefined8 *)(puVar17 + 6) = 0x3f800000;
      *(ulong *)(puVar17 + 10) = CONCAT44(1.0 - fVar27,uVar8);
      *(ulong *)(puVar17 + 0xc) = CONCAT44(1.0 - fVar28,uVar7);
      puVar17 = puVar17 + 0xe;
      lVar14 = lVar14 + 8;
      uVar22 = uVar22 + 2;
      uVar24 = uVar24 - 1;
    } while (uVar24 != 0);
  }
  if ((*(byte *)(param_1 + 0x100) >> 2 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x100) & 1) == 0) {
      FUN_10a14c7fc();
    }
    else {
      func_0x00010a14c898();
    }
    lVar25 = *(long *)(param_1 + 0x1d0);
    lVar18 = *(long *)(lVar25 + 0x28);
    lVar14 = *plVar10;
    lVar23 = plVar10[1];
    uVar22 = lVar23 - lVar14;
    uVar24 = *(long *)(lVar25 + 0x30) - lVar18;
    if (uVar22 < uVar24 || uVar22 - uVar24 == 0) {
      if (uVar22 < uVar24) {
        *(ulong *)(lVar25 + 0x30) = lVar18 + uVar22;
      }
    }
    else {
      func_0x000107c27d58((long *)(lVar25 + 0x28),uVar22 - uVar24);
      lVar18 = *(long *)(*(long *)(param_1 + 0x1d0) + 0x28);
      lVar14 = *plVar10;
      lVar23 = plVar10[1];
      uVar22 = lVar23 - lVar14;
    }
    if (lVar23 != lVar14) {
      uVar24 = 0;
      uVar22 = (long)uVar22 >> 1;
      puVar21 = (undefined2 *)(lVar14 + 4);
      puVar19 = (undefined2 *)(lVar18 + 4);
      do {
        puVar19[-2] = puVar21[-2];
        if ((uVar22 <= uVar24 + 2) || (puVar19[-1] = *puVar21, uVar22 <= uVar24 + 1)) {
LAB_10ac64d48:
                    /* WARNING: Does not return */
          pcVar9 = (code *)SoftwareBreakpoint(1,0x10ac64d4c);
          (*pcVar9)();
        }
        *puVar19 = puVar21[-1];
        uVar24 = uVar24 + 3;
        puVar21 = puVar21 + 3;
        puVar19 = puVar19 + 3;
      } while (uVar24 < uVar22);
    }
  }
  else {
    FUN_10a0d918c(*(long *)(param_1 + 0x1d0) + 0x28,*(long *)(param_1 + 0x158),
                  *(long *)(param_1 + 0x160),*(long *)(param_1 + 0x160) - *(long *)(param_1 + 0x158)
                 );
  }
  FUN_10ac645fc(param_1,param_1 + 0x1d0);
  return;
}



/* Entry: 10ac64d70; end: 10ac64ec3;  */

/* WARNING: Removing unreachable block (ram,0x00010ac64e6c) */

void FUN_10ac64d70(undefined8 *param_1,undefined8 param_2)

{
  undefined ***pppuVar1;
  undefined4 uStack_164;
  undefined **appuStack_160 [2];
  undefined **ppuStack_150;
  undefined **ppuStack_148;
  undefined1 auStack_140 [56];
  undefined8 uStack_108;
  char cStack_f1;
  undefined **appuStack_e0 [19];
  undefined1 auStack_48 [24];
  
  FUN_10a0f20c0(auStack_48,param_2);
  FUN_10a108878(appuStack_160,auStack_48,0x18);
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  uStack_164 = 0;
  while( true ) {
    pppuVar1 = appuStack_160;
    __ZNSt3__113basic_istreamIcNS_11char_traitsIcEEErsERf(pppuVar1,&uStack_164);
    if ((*(byte *)((long)pppuVar1 + (long)((*pppuVar1)[-3] + 0x20)) & 5) != 0) break;
    FUN_10a0ca014(param_1,&uStack_164);
  }
  appuStack_e0[0] = &PTR_DAT_1108a5a88;
  appuStack_160[0] = &PTR_SUB_1108a5a38;
  ppuStack_150 = &PTR_DAT_1108a5a60;
  ppuStack_148 = &PTR_DAT_11088d7b0;
  if (cStack_f1 < '\0') {
    __ZdlPv(uStack_108);
  }
  ppuStack_148 = (undefined **)
                 (PTR___ZTVNSt3__115basic_streambufIcNS_11char_traitsIcEEEE_110346b20 + 0x10);
  __ZNSt3__16localeD1Ev(auStack_140);
  __ZNSt3__114basic_iostreamIcNS_11char_traitsIcEEED2Ev(appuStack_160,&PTR_PTR_1108a5aa0);
  __ZNSt3__19basic_iosIcNS_11char_traitsIcEEED2Ev(appuStack_e0);
  return;
}



/* Entry: 10ac64ec4; end: 10ac6530b;  */

void FUN_10ac64ec4(long param_1,long *param_2)

{
  code *pcVar1;
  long *plVar2;
  byte bVar3;
  undefined8 uStack_90;
  undefined5 uStack_88;
  undefined3 uStack_83;
  undefined5 uStack_80;
  undefined1 uStack_7b;
  undefined1 uStack_79;
  undefined1 auStack_78 [24];
  undefined8 uStack_60;
  undefined8 uStack_58;
  long lStack_50;
  undefined1 uStack_48;
  undefined7 uStack_47;
  ulong uStack_40;
  byte bStack_38;
  undefined6 uStack_37;
  undefined1 uStack_31;
  
  plVar2 = param_2;
  (**(code **)(*param_2 + 0x248))(param_2);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_(param_1 + 0x78,plVar2);
  *(undefined1 *)(param_1 + 0x100) = 0;
  plVar2 = param_2;
  (**(code **)(*param_2 + 0x58))(param_2,&PTR_DAT_110c60d18,0);
  bVar3 = 2;
  if ((int)plVar2 == 0) {
    bVar3 = 0;
  }
  *(byte *)(param_1 + 0x100) = *(byte *)(param_1 + 0x100) & 0xfd | bVar3;
  plVar2 = param_2;
  (**(code **)(*param_2 + 0xd0))(param_2,&PTR_DAT_110c60d38,(long)*(short *)(param_1 + 0x10a));
  *(short *)(param_1 + 0x108) = (short)plVar2;
  *(undefined4 *)(param_1 + 0x104) = 0;
  plVar2 = param_2;
  (**(code **)(*param_2 + 0x200))(param_2,&PTR_DAT_110c60d58);
  if ((int)plVar2 == 0) {
    FUN_10ab4a104(&uStack_48,param_2,&PTR_DAT_110c60d78);
    uStack_58 = 0;
    lStack_50 = 0;
    uStack_60 = 0;
    FUN_10a31bbf8(&uStack_60,CONCAT71(uStack_47,uStack_48),uStack_40,
                  (long)(uStack_40 - CONCAT71(uStack_47,uStack_48)) >> 2);
    if (*(long *)(param_1 + 0x110) != 0) {
      *(long *)(param_1 + 0x118) = *(long *)(param_1 + 0x110);
      __ZdlPv();
      *(undefined8 *)(param_1 + 0x110) = 0;
      *(undefined8 *)(param_1 + 0x118) = 0;
      *(undefined8 *)(param_1 + 0x120) = 0;
    }
    *(undefined8 *)(param_1 + 0x118) = uStack_58;
    *(undefined8 *)(param_1 + 0x110) = uStack_60;
    *(long *)(param_1 + 0x120) = lStack_50;
    if (CONCAT71(uStack_47,uStack_48) != 0) {
      uStack_40 = CONCAT71(uStack_47,uStack_48);
      __ZdlPv();
    }
  }
  else {
    func_0x000107c2b054(&uStack_60,&UNK_10f69e32c);
    FUN_10a0fed30(&uStack_48,param_2,&PTR_DAT_110c60d58,&uStack_60);
    if (*(char *)(param_1 + 0x187) < '\0') {
      __ZdlPv(*(undefined8 *)(param_1 + 0x170));
    }
    *(ulong *)(param_1 + 0x178) = uStack_40;
    *(ulong *)(param_1 + 0x170) = CONCAT71(uStack_47,uStack_48);
    *(ulong *)(param_1 + 0x180) = CONCAT17(uStack_31,CONCAT61(uStack_37,bStack_38));
    uStack_31 = 0;
    uStack_48 = 0;
    if (lStack_50 < 0) {
      __ZdlPv(uStack_60);
    }
    *(undefined8 *)(param_1 + 0x118) = *(undefined8 *)(param_1 + 0x110);
  }
  plVar2 = param_2;
  (**(code **)(*param_2 + 0x200))(param_2,&PTR_DAT_110c60d98);
  if ((int)plVar2 == 0) {
    FUN_10ab4a104(&uStack_48,param_2,&PTR_DAT_110c60db8);
    uStack_58 = 0;
    lStack_50 = 0;
    uStack_60 = 0;
    FUN_10a31bbf8(&uStack_60,CONCAT71(uStack_47,uStack_48),uStack_40,
                  (long)(uStack_40 - CONCAT71(uStack_47,uStack_48)) >> 2);
    if (*(long *)(param_1 + 0x140) != 0) {
      *(long *)(param_1 + 0x148) = *(long *)(param_1 + 0x140);
      __ZdlPv();
      *(undefined8 *)(param_1 + 0x140) = 0;
      *(undefined8 *)(param_1 + 0x148) = 0;
      *(undefined8 *)(param_1 + 0x150) = 0;
    }
    *(undefined8 *)(param_1 + 0x148) = uStack_58;
    *(undefined8 *)(param_1 + 0x140) = uStack_60;
    *(long *)(param_1 + 0x150) = lStack_50;
    if (CONCAT71(uStack_47,uStack_48) != 0) {
      uStack_40 = CONCAT71(uStack_47,uStack_48);
      __ZdlPv();
    }
  }
  else {
    func_0x000107c2b054(&uStack_60,&UNK_10f69e32c);
    FUN_10a0fed30(&uStack_48,param_2,&PTR_DAT_110c60d98,&uStack_60);
    if (*(char *)(param_1 + 0x19f) < '\0') {
      __ZdlPv(*(undefined8 *)(param_1 + 0x188));
    }
    *(ulong *)(param_1 + 400) = uStack_40;
    *(undefined8 *)(param_1 + 0x188) = CONCAT71(uStack_47,uStack_48);
    *(ulong *)(param_1 + 0x198) = CONCAT17(uStack_31,CONCAT61(uStack_37,bStack_38));
    uStack_31 = 0;
    uStack_48 = 0;
    if (lStack_50 < 0) {
      __ZdlPv(uStack_60);
    }
    *(undefined8 *)(param_1 + 0x148) = *(undefined8 *)(param_1 + 0x140);
  }
  plVar2 = param_2;
  (**(code **)(*param_2 + 0x38))(param_2,&PTR_DAT_110c5f690,0);
  *(short *)(param_1 + 0x10a) = (short)plVar2;
  plVar2 = param_2;
  (**(code **)(*param_2 + 0x58))(param_2,&PTR_DAT_110c60dd8,0);
  *(byte *)(param_1 + 0x100) = *(byte *)(param_1 + 0x100) & 0xfe | (byte)plVar2;
  plVar2 = param_2;
  (**(code **)(*param_2 + 0x58))(param_2,&PTR_DAT_110c60df8,1);
  bVar3 = 0;
  if ((int)plVar2 == 0) {
    bVar3 = 4;
  }
  *(byte *)(param_1 + 0x100) = *(byte *)(param_1 + 0x100) & 0xfb | bVar3;
  if (((ulong)plVar2 & 1) == 0) {
    (**(code **)(*param_2 + 0x1d8))(&uStack_48,param_2,&PTR_DAT_110c60e18);
    if ((bStack_38 & 1) == 0) {
      uStack_79 = 0x15;
      uStack_88 = 0x6c676e6169;
      uStack_90 = 0x7254657669746361;
      uStack_83 = 0x6e4965;
      uStack_80 = 0x7365636964;
      uStack_7b = 0;
      __ZNSt3__1plIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_12basic_stringIT_T0_T1_EEPKS6_RKS9_
                (auStack_78,&UNK_10f63b9fc,&uStack_90);
      FUN_10a012db0(&uStack_60,auStack_78,&UNK_10f63ba05);
      FUN_10a0029c0(&uStack_60);
    }
    else {
      func_0x000108262984(param_1 + 0x158,uStack_40 - (uStack_40 >> 1));
      if ((bStack_38 & 1) != 0) {
        _memcpy(*(undefined8 *)(param_1 + 0x158),CONCAT71(uStack_47,uStack_48),uStack_40);
        goto LAB_10ac65210;
      }
    }
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10ac65290);
    (*pcVar1)();
  }
LAB_10ac65210:
  FUN_10a4c3348(param_2,&PTR_DAT_110bb3700,param_1 + 0xe8);
  return;
}



/* Entry: 10ac6530c; end: 10ac654bb;  */

void FUN_10ac6530c(long param_1,long *param_2)

{
  long lVar1;
  
  (**(code **)(*param_2 + 0x70))(param_2,&PTR_DAT_110c60d18,*(byte *)(param_1 + 0x100) >> 1 & 1);
  (**(code **)(*param_2 + 0x50))(param_2,&PTR_DAT_110c60d38,*(undefined2 *)(param_1 + 0x108));
  if (*(char *)(param_1 + 0x187) < '\0') {
    if (*(long *)(param_1 + 0x178) == 0) goto LAB_10ac65390;
LAB_10ac65368:
    (**(code **)(*param_2 + 0x1a8))(param_2,&PTR_DAT_110c60d58,param_1 + 0x170);
  }
  else {
    if (*(char *)(param_1 + 0x187) != '\0') goto LAB_10ac65368;
LAB_10ac65390:
    lVar1 = *(long *)(param_1 + *(long *)(&UNK_10e50a6b0 + (ulong)*(uint *)(param_1 + 0x104) * 8));
    (**(code **)(*param_2 + 0x28))
              (param_2,&PTR_DAT_110c60d78,lVar1,
               ((long *)(param_1 + *(long *)(&UNK_10e50a6b0 + (ulong)*(uint *)(param_1 + 0x104) * 8)
                        ))[1] - lVar1);
  }
  if (*(char *)(param_1 + 0x19f) < '\0') {
    if (*(long *)(param_1 + 400) == 0) goto LAB_10ac653f8;
  }
  else if (*(char *)(param_1 + 0x19f) == '\0') {
LAB_10ac653f8:
    (**(code **)(*param_2 + 0x28))
              (param_2,&PTR_DAT_110c60db8,*(long *)(param_1 + 0x140),
               *(long *)(param_1 + 0x148) - *(long *)(param_1 + 0x140));
    goto LAB_10ac65418;
  }
  (**(code **)(*param_2 + 0x1a8))(param_2,&PTR_DAT_110c60d98,param_1 + 0x188);
LAB_10ac65418:
  (**(code **)(*param_2 + 0x40))(param_2,&PTR_DAT_110c5f690,(long)*(short *)(param_1 + 0x10a));
  (**(code **)(*param_2 + 0x70))(param_2,&PTR_DAT_110c60dd8,*(byte *)(param_1 + 0x100) & 1);
  (**(code **)(*param_2 + 0x70))(param_2,&PTR_DAT_110c60df8,(*(byte *)(param_1 + 0x100) & 4) == 0);
  if ((*(byte *)(param_1 + 0x100) >> 2 & 1) != 0) {
    (**(code **)(*param_2 + 0x28))
              (param_2,&PTR_DAT_110c60e18,*(long *)(param_1 + 0x158),
               *(long *)(param_1 + 0x160) - *(long *)(param_1 + 0x158));
  }
  if (*(uint *)(param_1 + 0xf8) != 0xffffffff) {
    (*(code *)(&PTR_FUN_110be7398)[*(uint *)(param_1 + 0xf8)])
              (&stack0xffffffffffffffe8,param_1 + 0xe8);
    return;
  }
  FUN_10a0d459c();
  return;
}



/* Entry: 10ac654bc; end: 10ac65547;  */

undefined1  [16] FUN_10ac654bc(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x1f;
  auVar1._0_8_ = &UNK_10f66253f;
  return auVar1;
}



/* Entry: 10ac65548; end: 10ac65807;  */

void FUN_10ac65548(ulong param_1)

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
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  func_0x000109887da8(appuStack_c8,&UNK_10f66253f,0x1f);
  pppuVar1 = (undefined8 ***)appuStack_c8[0];
  if (-1 < cStack_b1) {
    pppuVar1 = appuStack_c8;
  }
  *(undefined ***)(param_1 + 0x1b0) = &PTR_DAT_110c65260;
  pppuVar2 = (undefined8 ***)&UNK_10f69e32c;
  if (pppuVar1 != (undefined8 ***)0x0) {
    pppuVar2 = pppuVar1;
  }
  func_0x000107c2c4dc(param_1 + 0x1b8,pppuVar2);
  uStack_98 = 0;
  uStack_90 = 0;
  uStack_80 = 0xffffffffffffffff;
  uStack_88 = 0x200000019;
  uStack_48 = 0;
  uStack_40 = 0;
  uStack_70 = 0;
  uStack_78 = 0;
  uStack_60 = 0;
  uStack_68 = 0;
  uStack_54 = 0;
  uStack_50 = 0;
  uStack_5c = 0;
  uStack_58 = 0;
  ppuStack_a0 = pppuVar1;
  func_0x00010a052690(param_1 + 0x168,&ppuStack_a0);
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,2,0,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    ppuStack_b0 = &PTR_DAT_110c65260;
    uStack_a8 = 0;
    ppuStack_a0 = (undefined8 **)&PTR_DAT_110bb37d0;
    uStack_98 = 0;
    uStack_90 = CONCAT71(uStack_90._1_7_,1);
    func_0x0001098949cc(param_1,pppuVar1,&ppuStack_b0,&ppuStack_a0);
  }
  if (cStack_b1 < '\0') {
    __ZdlPv(appuStack_c8[0]);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&DAT_10f679f95,FUN_10ac7ddf0,FUN_10ac7df0c);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&DAT_10f651ec4,FUN_10ac7e158,FUN_10ac7e214);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&DAT_10f69eb56,FUN_10ac7e2dc,FUN_10ac7e398);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&DAT_10f69eb69,FUN_10ac7e484,FUN_10ac7e540);
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
    uStack_40 = *(undefined8 *)(lVar3 + -8);
    uStack_48 = *(undefined8 *)(lVar3 + -0x10);
    uVar10 = *(ulong *)(lVar3 + -0x18);
    uStack_58 = (undefined4)*(undefined8 *)(lVar3 + -0x20);
    uStack_54 = (undefined4)((ulong)*(undefined8 *)(lVar3 + -0x20) >> 0x20);
    uStack_60 = (undefined4)*(undefined8 *)(lVar3 + -0x28);
    uStack_5c = (undefined4)((ulong)*(undefined8 *)(lVar3 + -0x28) >> 0x20);
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
      func_0x000109894f40(param_1,0);
      FUN_10a054234(param_1,&ppuStack_a0,param_1 + 0x1b8,&UNK_10f66253f,0x1f);
      FUN_10a05431c(param_1);
    }
    return;
  }
                    /* WARNING: Does not return */
  pcVar6 = (code *)SoftwareBreakpoint(1,0x10ac657ec);
  (*pcVar6)();
}



/* Entry: 10ac65808; end: 10ac659d7;  */

undefined8 * FUN_10ac65808(undefined8 *param_1,long param_2)

{
  undefined8 *puVar1;
  undefined8 auStack_48 [2];
  char cStack_31;
  
  param_1[0x2a] = 0;
  param_1[0x2b] = 0;
  param_1[0x29] = &PTR_FUN_110c383b8;
  *(undefined2 *)(param_1 + 0x2c) = 0x100;
  puVar1 = param_1;
  FUN_10a1dbb98(param_1,&PTR_PTR_110c61088,param_2);
  puVar1[0x15] = 0xffffffffffffffff;
  puVar1[0x16] = 0xffffffffffffffff;
  *(undefined1 *)((long)puVar1 + 0xba) = 0;
  *(undefined2 *)(puVar1 + 0x17) = 0;
  *puVar1 = &PTR_FUN_110c64df8;
  puVar1[2] = &PTR_FUN_110c68030;
  puVar1[5] = &PTR_DAT_110c68060;
  puVar1[0x29] = &PTR_FUN_110c64ef8;
  puVar1[0x1b] = 0;
  puVar1[0x1c] = 0;
  puVar1[0x18] = 0;
  puVar1[0x19] = 0;
  *(undefined1 *)(puVar1 + 0x1a) = 0;
  FUN_10a0040d0(puVar1 + 0x1d,&PTR_PTR_110c610a8);
  *param_1 = &PTR_FUN_110c60e50;
  param_1[2] = &PTR_FUN_110c60f30;
  param_1[5] = &PTR_FUN_110c60f60;
  param_1[0x1d] = &PTR_FUN_110c60fc0;
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  param_1[0x22] = 0;
  *(undefined4 *)(param_1 + 0x25) = 0x3ba3d70a;
  *(undefined2 *)((long)param_1 + 300) = 0x100;
  *(undefined1 *)((long)param_1 + 0x12e) = 0;
  param_1[0x28] = 0;
  param_1[0x29] = &PTR_FUN_110c61038;
  param_1[0x26] = 0;
  param_1[0x27] = 0;
  if ((*(byte *)(param_1 + 0x2c) & 1) == 0) {
    *(undefined1 *)(param_1 + 0x2c) = 1;
    param_1[0x2b] = param_2;
    if (param_2 != 0) {
      param_1[0x2a] = *(undefined8 *)(*(long *)(param_2 + 0x850) + 0x2c);
    }
  }
  FUN_10a5ae998(param_1[0x20],&PTR_DAT_110b99f08,param_2,param_1 + 0x1d);
  func_0x000107c2b054(auStack_48,&UNK_10f69eb7e);
  if (param_2 != 0) {
    FUN_10a76c080(*(undefined8 *)(param_2 + 0x8d8),auStack_48);
  }
  if (cStack_31 < '\0') {
    __ZdlPv(auStack_48[0]);
  }
  return param_1;
}



/* Entry: 10ac659d8; end: 10ac65a5f;  */

void FUN_10ac659d8(long param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined1 auStack_50 [24];
  undefined1 auStack_38 [24];
  
  if (-1 < (int)param_2) {
    *(int *)(param_1 + 0x120) = (int)param_2;
    return;
  }
  __ZNSt3__19to_stringEi(auStack_50,param_2);
  FUN_109feb280(auStack_38,&UNK_10f69ebad,auStack_50);
  FUN_10a0029c0(auStack_38);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10ac65a2c);
  (*pcVar1)();
}



/* Entry: 10ac65a60; end: 10ac65ac7;  */

void FUN_10ac65a60(long param_1,long param_2)

{
  code *pcVar1;
  undefined1 auStack_38 [24];
  
  if ((param_2 != 0) && (*(long *)(param_2 + 0xe0) == param_1)) {
    func_0x000107c2b054(auStack_38,&UNK_10f69ed73);
    FUN_10a812dd4(auStack_38);
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10ac65aac);
    (*pcVar1)();
  }
  return;
}



/* Entry: 10ac65ac8; end: 10ac65aef;  */

undefined4 FUN_10ac65ac8(long param_1)

{
  undefined4 uVar1;
  
  if (*(char *)(param_1 + 0x12e) == '\x01') {
    uVar1 = 1;
    if (*(char *)(param_1 + 0x12d) == '\0') {
      uVar1 = 2;
    }
    return uVar1;
  }
  return 0;
}



/* Entry: 10ac65af0; end: 10ac662c3;  */

void FUN_10ac65af0(long param_1,long *param_2,long param_3,long param_4,long *param_5)

{
  float *pfVar1;
  float *pfVar2;
  uint *puVar3;
  char cVar4;
  bool bVar5;
  code *pcVar6;
  long *plVar7;
  long *plVar8;
  float *pfVar9;
  int *piVar10;
  uint uVar11;
  long lVar12;
  ulong uVar13;
  uint *puVar14;
  int iVar15;
  long lVar16;
  long lVar17;
  uint *puVar18;
  ulong uVar19;
  ulong uVar20;
  ulong uVar21;
  ulong uVar22;
  float *pfVar23;
  float *pfVar24;
  int *piVar25;
  int *piVar26;
  int *piVar27;
  int iVar28;
  int *piVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  ulong uStack_e8;
  long lStack_e0;
  long lStack_d8;
  long *plStack_d0;
  long lStack_c8;
  long lStack_c0;
  undefined8 uStack_b8;
  long lStack_b0;
  long lStack_a8;
  undefined8 uStack_a0;
  
  plVar7 = *(long **)(*(long *)(param_1 + 0x110) + 0xe0);
  if (plVar7 == (long *)0x0) {
    lVar16 = 0;
  }
  else {
    (**(code **)(*plVar7 + 0x90))();
    lVar16 = *plVar7;
  }
  uVar11 = *(uint *)(lVar16 + 0x130);
  if (uVar11 == 0xffffffff) {
    lVar16 = 0;
  }
  else {
    uVar20 = (*(long *)(lVar16 + 0x100) - *(long *)(lVar16 + 0xf8) >> 3) * 0x6db6db6db6db6db7;
    if (uVar20 < uVar11 || uVar20 - uVar11 == 0) goto LAB_10ac6625c;
    lVar16 = *(long *)(lVar16 + 0xf8) + (ulong)uVar11 * 0x38;
  }
  lVar17 = *param_5;
  uVar11 = *(uint *)(lVar17 + 0x130);
  if (uVar11 == 0xffffffff) {
    lVar17 = 0;
  }
  else {
    uVar20 = (*(long *)(lVar17 + 0x100) - *(long *)(lVar17 + 0xf8) >> 3) * 0x6db6db6db6db6db7;
    if (uVar20 < uVar11 || uVar20 - uVar11 == 0) {
LAB_10ac6625c:
      FUN_10ab725fc();
LAB_10ac66260:
      func_0x000109ffded8();
LAB_10ac6626c:
                    /* WARNING: Does not return */
      pcVar6 = (code *)SoftwareBreakpoint(1,0x10ac66270);
      (*pcVar6)();
    }
    lVar17 = *(long *)(lVar17 + 0xf8) + (ulong)uVar11 * 0x38;
  }
  if (((((lVar16 != 0) && (*(int *)(lVar16 + 0x24) == 5)) && (*(int *)(lVar16 + 0x28) == 4)) &&
      ((lVar17 != 0 && (*(int *)(lVar17 + 0x24) == 5)))) && (*(int *)(lVar17 + 0x28) == 4)) {
    plVar7 = *(long **)(*(long *)(param_1 + 0x110) + 0xe0);
    (**(code **)(*plVar7 + 0x90))();
    lVar12 = *plVar7;
    if (*param_5 != lVar12) {
      FUN_10a0d8644(*param_5 + 0x58,*(long *)(lVar12 + 0x58),*(long *)(lVar12 + 0x60),
                    (*(long *)(lVar12 + 0x60) - *(long *)(lVar12 + 0x58) >> 5) * -0x5555555555555555
                   );
    }
    plVar7 = *(long **)(*(long *)(param_1 + 0x110) + 0xe0);
    if (plVar7 == (long *)0x0) {
      lVar12 = 0;
    }
    else {
      (**(code **)(*plVar7 + 0x90))();
      lVar12 = *plVar7;
    }
    uVar11 = *(int *)(lVar16 + 0x24) - 1;
    if (uVar11 < 7) {
      iVar15 = *(int *)(&UNK_10e50a6c8 + (ulong)uVar11 * 4);
    }
    else {
      iVar15 = 0;
    }
    if (*(int *)(lVar16 + 0x28) * iVar15 == 0x10) {
      lStack_e0 = *(long *)(lVar12 + 0x10) + (ulong)*(uint *)(lVar16 + 0x30);
      uStack_e8 = (ulong)*(uint *)(lVar12 + 0xf0);
    }
    else {
      uStack_e8 = 0;
      lStack_e0 = 0;
    }
    lVar16 = *param_5;
    uVar11 = *(int *)(lVar17 + 0x24) - 1;
    if (uVar11 < 7) {
      iVar15 = *(int *)(&UNK_10e50a6c8 + (ulong)uVar11 * 4);
    }
    else {
      iVar15 = 0;
    }
    if (*(int *)(lVar17 + 0x28) * iVar15 == 0x10) {
      lVar17 = *(long *)(lVar16 + 0x10) + (ulong)*(uint *)(lVar17 + 0x30);
      uVar20 = (ulong)*(uint *)(lVar16 + 0xf0);
    }
    else {
      lVar17 = 0;
      uVar20 = 0;
    }
    uVar21 = (param_4 - param_3 >> 2) * -0x5555555555555555 & 0xffffffff;
    if (uVar21 != 0) {
      uVar22 = 0;
      do {
        pfVar23 = (float *)(lVar17 + uVar20 * uVar22);
        pfVar24 = pfVar23 + 2;
        pfVar24[0] = 0.0;
        pfVar24[1] = 0.0;
        pfVar23[0] = 0.0;
        pfVar23[1] = 0.0;
        uVar13 = (param_2[1] - *param_2 >> 3) * -0x5555555555555555;
        if (uVar13 < uVar22 || uVar13 - uVar22 == 0) goto LAB_10ac6626c;
        plVar7 = (long *)(*param_2 + uVar22 * 0x18);
        puVar14 = (uint *)*plVar7;
        puVar3 = (uint *)plVar7[1];
        if (puVar14 == puVar3) {
          piVar27 = (int *)0x0;
          piVar25 = (int *)0x0;
        }
        else {
          piVar25 = (int *)0x0;
          piVar27 = (int *)0x0;
          piVar29 = (int *)0x0;
          do {
            iVar15 = 0;
            uVar11 = *puVar14;
            pfVar9 = (float *)(lStack_e0 + uStack_e8 * uVar11);
            fVar31 = *pfVar9;
            fVar32 = pfVar9[1];
            fVar33 = pfVar9[2];
            fVar34 = pfVar9[3];
            piVar26 = piVar25;
            do {
              plVar8 = *(long **)(*(long *)(param_1 + 0x110) + 0xe0);
              (**(code **)(*plVar8 + 0x90))();
              plVar7 = *(long **)(*plVar8 + 0x88);
              plVar8 = *(long **)(*plVar8 + 0x90);
              if (plVar7 == plVar8) {
                iVar28 = 0;
                fVar35 = 0.0;
              }
              else {
                iVar28 = 0;
                fVar35 = 0.0;
                do {
                  for (puVar18 = (uint *)plVar7[3]; puVar18 != (uint *)plVar7[4];
                      puVar18 = puVar18 + 3) {
                    if ((*puVar18 <= uVar11) && (uVar11 < puVar18[1] + *puVar18)) {
                      fVar35 = fVar31;
                      if (iVar15 == 1) {
                        fVar35 = fVar32;
                      }
                      fVar30 = fVar33;
                      if (iVar15 != 2) {
                        fVar30 = fVar35;
                      }
                      fVar35 = fVar34;
                      if (iVar15 != 3) {
                        fVar35 = fVar30;
                      }
                      uVar13 = (ulong)(uint)(int)fVar35;
                      if ((ulong)(plVar7[1] - *plVar7 >> 2) <= uVar13) goto LAB_10ac6626c;
                      iVar28 = *(int *)(*plVar7 + uVar13 * 4);
                      fVar35 = fVar31;
                      if (iVar15 == 1) {
                        fVar35 = fVar32;
                      }
                      fVar30 = fVar33;
                      if (iVar15 != 2) {
                        fVar30 = fVar35;
                      }
                      fVar35 = fVar34;
                      if (iVar15 != 3) {
                        fVar35 = fVar30;
                      }
                      fVar35 = fVar35 - (float)uVar13;
                    }
                  }
                  plVar7 = plVar7 + 6;
                } while (plVar7 != plVar8);
              }
              piVar10 = piVar26;
              piVar25 = piVar26;
              if (piVar26 == piVar27) {
LAB_10ac65eb4:
                if (piVar10 == piVar27) goto LAB_10ac65ebc;
              }
              else {
                do {
                  if ((*piVar10 == iVar28) && (0.0 < fVar35)) goto LAB_10ac65eb4;
                  piVar10 = piVar10 + 2;
                } while (piVar10 != piVar27);
LAB_10ac65ebc:
                if (piVar27 < piVar29) {
                  *piVar27 = iVar28;
                  piVar27[1] = (int)fVar35;
                  piVar27 = piVar27 + 2;
                }
                else {
                  uVar13 = ((long)piVar27 - (long)piVar26 >> 3) + 1;
                  if (uVar13 >> 0x3d != 0) {
                    FUN_10ac78f58();
                    goto LAB_10ac6626c;
                  }
                  uVar19 = (long)piVar29 - (long)piVar26 >> 2;
                  if (uVar19 <= uVar13) {
                    uVar19 = uVar13;
                  }
                  if (0x7ffffffffffffff7 < (ulong)((long)piVar29 - (long)piVar26)) {
                    uVar19 = 0x1fffffffffffffff;
                  }
                  if (uVar19 >> 0x3d != 0) goto LAB_10ac66260;
                  piVar25 = (int *)(uVar19 << 3);
                  __Znwm();
                  piVar27 = (int *)((long)piVar25 + ((long)piVar27 - (long)piVar26));
                  piVar29 = piVar25 + uVar19 * 2;
                  *piVar27 = iVar28;
                  piVar27[1] = (int)fVar35;
                  piVar27 = piVar27 + 2;
                  _memcpy();
                  if (piVar26 != (int *)0x0) {
                    __ZdlPv(piVar26);
                  }
                }
              }
              iVar15 = iVar15 + 1;
              piVar26 = piVar25;
            } while (iVar15 != 4);
            puVar14 = puVar14 + 1;
          } while (puVar14 != puVar3);
        }
        uVar13 = (long)piVar27 - (long)piVar25 >> 3;
        lVar16 = 0;
        if (piVar27 != piVar25) {
          lVar16 = LZCOUNT(uVar13) * -2 + 0x7e;
        }
        FUN_10ac78f6c(piVar25,piVar27,lVar16,1);
        uVar11 = (uint)uVar13;
        if (uVar11 == 0) {
          fVar31 = (float)NEON_fminnm(*pfVar23,0x3f7d70a4);
          *pfVar23 = fVar31;
          if (piVar25 != (int *)0x0) goto LAB_10ac6606c;
        }
        else {
          uVar19 = 0;
          if (3 < uVar11) {
            uVar11 = 4;
          }
          pfVar9 = (float *)(piVar25 + 1);
          do {
            if (uVar13 == uVar19) goto LAB_10ac6626c;
            iVar15 = (int)uVar19;
            pfVar2 = pfVar23;
            if (iVar15 == 1) {
              pfVar2 = pfVar23 + 1;
            }
            pfVar1 = pfVar24;
            if (iVar15 != 2) {
              pfVar1 = pfVar2;
            }
            pfVar2 = pfVar23 + 3;
            if (iVar15 != 3) {
              pfVar2 = pfVar1;
            }
            *pfVar2 = *pfVar9;
            uVar19 = uVar19 + 1;
            pfVar9 = pfVar9 + 2;
          } while (uVar11 != uVar19);
          uVar19 = 0;
          fVar31 = (float)NEON_fminnm(*pfVar23,0x3f7d70a4);
          *pfVar23 = fVar31;
          piVar27 = piVar25;
          do {
            if (uVar13 == uVar19) goto LAB_10ac6626c;
            fVar31 = (float)NEON_ucvtf(*piVar27);
            iVar15 = (int)uVar19;
            pfVar9 = pfVar23;
            if (iVar15 == 1) {
              pfVar9 = pfVar23 + 1;
            }
            pfVar2 = pfVar24;
            if (iVar15 != 2) {
              pfVar2 = pfVar9;
            }
            pfVar9 = pfVar23 + 3;
            if (iVar15 != 3) {
              pfVar9 = pfVar2;
            }
            *pfVar9 = *pfVar9 + fVar31;
            uVar19 = uVar19 + 1;
            piVar27 = piVar27 + 2;
          } while (uVar11 != uVar19);
LAB_10ac6606c:
          __ZdlPv(piVar25);
        }
        uVar22 = uVar22 + 1;
      } while (uVar22 != uVar21);
      lVar16 = *param_5;
    }
    lStack_b0 = 0;
    lStack_a8 = 0;
    uStack_a0 = 0;
    lStack_c8 = 0;
    lStack_c0 = 0;
    uStack_b8 = 0;
    FUN_10a39d16c(&lStack_d8,lVar16,0xc,&lStack_b0,0);
    FUN_10ab4e8b4(lStack_d8,&lStack_c8);
    func_0x0001074287b0(param_1 + 0x130,lStack_c0 - lStack_c8 >> 2);
    if (lStack_c0 - lStack_c8 != 0) {
      uVar20 = 0;
      do {
        uVar21 = (ulong)*(uint *)(lStack_c8 + uVar20 * 4);
        if (((ulong)(lStack_a8 - lStack_b0 >> 2) <= uVar21) ||
           ((ulong)(*(long *)(param_1 + 0x138) - *(long *)(param_1 + 0x130) >> 2) <= uVar20))
        goto LAB_10ac6626c;
        *(undefined4 *)(*(long *)(param_1 + 0x130) + uVar20 * 4) =
             *(undefined4 *)(lStack_b0 + uVar21 * 4);
        uVar20 = uVar20 + 1;
      } while (lStack_c0 - lStack_c8 >> 2 != uVar20);
    }
    lVar16 = *param_5;
    if (lVar16 != lStack_d8) {
      FUN_10a4af00c(lVar16 + 0x88,*(long *)(lStack_d8 + 0x88),*(long *)(lStack_d8 + 0x90),
                    (*(long *)(lStack_d8 + 0x90) - *(long *)(lStack_d8 + 0x88) >> 4) *
                    -0x5555555555555555);
      lVar16 = *param_5;
    }
    if (lVar16 != lStack_d8) {
      FUN_10a3aa41c(lVar16 + 0x40,*(long *)(lStack_d8 + 0x40),*(long *)(lStack_d8 + 0x48),
                    (*(long *)(lStack_d8 + 0x48) - *(long *)(lStack_d8 + 0x40) >> 3) *
                    -0x71c71c71c71c71c7);
      lVar16 = *param_5;
    }
    if (lVar16 != lStack_d8) {
      FUN_10a0cf2cc(lVar16 + 0x28,*(long *)(lStack_d8 + 0x28),*(long *)(lStack_d8 + 0x30),
                    *(long *)(lStack_d8 + 0x30) - *(long *)(lStack_d8 + 0x28));
      lVar16 = *param_5;
    }
    if (lVar16 != lStack_d8) {
      FUN_10a0cf2cc(lVar16 + 0x10,*(long *)(lStack_d8 + 0x10),*(long *)(lStack_d8 + 0x18),
                    *(long *)(lStack_d8 + 0x18) - *(long *)(lStack_d8 + 0x10));
    }
    if (plStack_d0 != (long *)0x0) {
      plVar7 = plStack_d0 + 1;
      do {
        lVar16 = *plVar7;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar7,0x10);
        if (bVar5) {
          *plVar7 = lVar16 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (lVar16 == 0) {
        (**(code **)(*plStack_d0 + 0x10))(plStack_d0);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_d0);
      }
    }
    if (lStack_c8 != 0) {
      lStack_c0 = lStack_c8;
      __ZdlPv();
    }
    if (lStack_b0 != 0) {
      lStack_a8 = lStack_b0;
      __ZdlPv();
    }
  }
  return;
}



/* Entry: 10ac662c4; end: 10ac66363;  */

void FUN_10ac662c4(undefined1 *param_1,undefined1 *param_2)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined1 *unaff_x19;
  undefined8 unaff_x20;
  undefined1 *unaff_x29;
  code *unaff_x30;
  
  while( true ) {
    puVar2 = (undefined1 *)((long)register0x00000008 + -0x80);
    puVar1 = (undefined1 *)((long)register0x00000008 + -0x80);
    *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(undefined1 **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
    *(undefined8 *)((long)register0x00000008 + -0x28) =
         *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
    *(undefined4 *)((long)register0x00000008 + -0x80) = *(undefined4 *)(param_1 + 0x120);
    *(undefined4 *)((long)register0x00000008 + -0x48) = 0;
    *(undefined4 *)((long)register0x00000008 + -0x40) = 0x40;
    *(undefined1 *)((long)register0x00000008 + -0x3c) = 0;
    *(undefined1 *)((long)register0x00000008 + -0x38) = 0;
    *(undefined4 *)((long)register0x00000008 + -0x34) = 2;
    *(undefined1 *)((long)register0x00000008 + -0x30) = 0;
    *(undefined1 *)((long)register0x00000008 + -0x2c) = 0;
    FUN_10a4c3ba4(param_2 + 0x58);
    FUN_10a22d0f8();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)((long)register0x00000008 + -0x28))
    break;
    ___stack_chk_fail();
    FUN_10a22d0f8((undefined1 *)((long)register0x00000008 + -0x80));
    unaff_x30 = FUN_10ac66364;
    param_1 = puVar1;
    __Unwind_Resume();
    param_1 = param_1 + -0xe8;
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x80);
    param_2 = puVar2;
    unaff_x19 = puVar1;
  }
  return;
}



/* Entry: 10ac66364; end: 10ac6636b;  */

void FUN_10ac66364(undefined1 *param_1,undefined1 *param_2)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined1 *unaff_x19;
  undefined8 unaff_x20;
  undefined1 *unaff_x29;
  code *unaff_x30;
  
  while( true ) {
    puVar2 = (undefined1 *)((long)register0x00000008 + -0x80);
    puVar1 = (undefined1 *)((long)register0x00000008 + -0x80);
    *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(undefined1 **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
    *(undefined8 *)((long)register0x00000008 + -0x28) =
         *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
    *(undefined4 *)((long)register0x00000008 + -0x80) = *(undefined4 *)(param_1 + 0x38);
    *(undefined4 *)((long)register0x00000008 + -0x48) = 0;
    *(undefined4 *)((long)register0x00000008 + -0x40) = 0x40;
    *(undefined1 *)((long)register0x00000008 + -0x3c) = 0;
    *(undefined1 *)((long)register0x00000008 + -0x38) = 0;
    *(undefined4 *)((long)register0x00000008 + -0x34) = 2;
    *(undefined1 *)((long)register0x00000008 + -0x30) = 0;
    *(undefined1 *)((long)register0x00000008 + -0x2c) = 0;
    FUN_10a4c3ba4(param_2 + 0x58);
    FUN_10a22d0f8();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)((long)register0x00000008 + -0x28))
    break;
    ___stack_chk_fail();
    FUN_10a22d0f8((undefined1 *)((long)register0x00000008 + -0x80));
    unaff_x30 = FUN_10ac66364;
    param_1 = puVar1;
    __Unwind_Resume();
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x80);
    param_2 = puVar2;
    unaff_x19 = puVar1;
  }
  return;
}



/* Entry: 10ac6636c; end: 10ac676cb;  */

/* WARNING: Possible PIC construction at 0x00010ac66fec: Changing call to branch */

void FUN_10ac6636c(long *param_1,long param_2)

{
  undefined1 *puVar1;
  unkbyte9 *pVar2;
  long *plVar3;
  int *piVar4;
  undefined4 uVar5;
  uint uVar6;
  char cVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  float fVar13;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  code *pcVar16;
  long **pplVar17;
  long **pplVar18;
  long *plVar19;
  undefined8 uVar20;
  long *plVar21;
  undefined8 *puVar22;
  undefined *puVar23;
  undefined8 uVar24;
  undefined *puVar25;
  int iVar26;
  long lVar27;
  undefined2 *puVar28;
  uint *puVar29;
  uint *puVar30;
  int iVar31;
  long lVar32;
  uint *puVar33;
  ulong uVar34;
  ulong uVar35;
  uint uVar36;
  ulong uVar37;
  long lVar38;
  uint uVar39;
  undefined8 *puVar40;
  float *pfVar41;
  long lVar42;
  float *pfVar43;
  ulong uVar44;
  undefined8 *puVar45;
  bool bVar46;
  undefined4 *puVar47;
  int *piVar48;
  uint *puVar49;
  uint *puVar50;
  uint *puVar51;
  long lVar52;
  ulong uVar53;
  long lVar54;
  undefined1 *unaff_x29;
  undefined8 unaff_x30;
  uint uVar55;
  float fVar56;
  ulong uVar57;
  float fVar58;
  undefined8 uVar59;
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  undefined1 uVar64;
  undefined1 uVar65;
  undefined1 uVar66;
  undefined1 uVar67;
  undefined1 uVar68;
  undefined1 uVar69;
  undefined1 uVar70;
  undefined1 uVar71;
  undefined1 uVar72;
  undefined1 uVar73;
  undefined1 uVar74;
  undefined1 uVar75;
  undefined1 uVar76;
  undefined1 uVar77;
  undefined1 uVar78;
  undefined1 uVar79;
  float fVar80;
  undefined1 auVar81 [16];
  float fVar82;
  float fVar83;
  ulong auStack_1e0 [2];
  ulong uStack_1d0;
  long lStack_1c8;
  ulong uStack_1c0;
  long lStack_1b8;
  long lStack_1b0;
  long *plStack_1a8;
  undefined4 uStack_198;
  undefined4 uStack_194;
  long lStack_190;
  long lStack_188;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  long lStack_150;
  long *plStack_148;
  undefined8 uStack_140;
  long *plStack_130;
  long *plStack_128;
  long *plStack_120;
  long *plStack_118;
  long *plStack_110;
  long *plStack_108;
  undefined4 uStack_100;
  long *plStack_f8;
  long *plStack_f0;
  long *plStack_e8;
  long *plStack_e0;
  long *plStack_d8;
  long *plStack_d0;
  undefined4 uStack_c8;
  long *aplStack_c0 [2];
  long *plStack_b0;
  char cStack_a9;
  long *plStack_a8;
  long *plStack_a0;
  long *plStack_98;
  undefined4 uStack_90;
  long lStack_88;
  
  puVar1 = &stack0xfffffffffffffff0;
  lStack_88 = *(long *)PTR____stack_chk_guard_11034bdc0;
  *(undefined1 *)((long)param_1 + 0x12e) = 1;
  lVar27 = *(long *)(param_2 + 0x68);
  if (lVar27 == 0) {
LAB_10ac66ea4:
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_88) {
      return;
    }
LAB_10ac6754c:
    ___stack_chk_fail();
  }
  else {
    piVar48 = *(int **)(lVar27 + 0x28);
    piVar4 = *(int **)(lVar27 + 0x30);
    if (piVar48 != piVar4) {
      do {
        if ((*piVar48 == 0) && (piVar48[1] == (int)param_1[0x24])) goto LAB_10ac663e8;
        piVar48 = piVar48 + 0x88;
      } while (piVar48 != piVar4);
      goto LAB_10ac66ea4;
    }
LAB_10ac663e8:
    if (((piVar48 == piVar4) || (piVar48 == (int *)0x0)) || (*(long *)(piVar48 + 0x72) == 0))
    goto LAB_10ac66ea4;
    if (*(int *)(*(long *)(lVar27 + 0x40) + 0x30) != 2) {
      if ((bRam000000011330a9e8 >> 1 & 1) == 0) goto LAB_10ac66ea4;
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_88) {
        puVar23 = &UNK_10f69ec58;
        puVar25 = &UNK_10f69ecc3;
        uVar59 = 1;
        uVar20 = 2;
        uVar24 = 0x1d2;
        goto SUB_10ae06f08;
      }
      goto LAB_10ac6754c;
    }
    plVar19 = param_1;
    lStack_1b8 = *(long *)(lVar27 + 0x40);
    (**(code **)(*param_1 + 0x90))();
    lStack_1b0 = *plVar19;
    plStack_1a8 = (long *)plVar19[1];
    if (plStack_1a8 != (long *)0x0) {
      plVar19 = plStack_1a8 + 1;
      do {
        cVar7 = '\x01';
        bVar46 = (bool)ExclusiveMonitorPass(plVar19,0x10);
        if (bVar46) {
          *plVar19 = *plVar19 + 1;
          cVar7 = ExclusiveMonitorsStatus();
        }
      } while (cVar7 != '\0');
    }
    if (lStack_1b0 == 0) {
      *(undefined1 *)((long)param_1 + 0x12d) = 1;
      pplVar17 = &plStack_130;
      FUN_10a0d0194(&lStack_150);
      FUN_10ab6e728();
      if (*(char *)((long)pplVar17 + 0x17) < '\0') {
        pplVar18 = &plStack_130;
        func_0x000107c3192c(pplVar18,*pplVar17,pplVar17[1]);
      }
      else {
        plStack_128 = pplVar17[1];
        plStack_130 = *pplVar17;
        plStack_120 = pplVar17[2];
        pplVar18 = pplVar17;
      }
      plStack_118 = pplVar17[3];
      uStack_100 = *(undefined4 *)(pplVar17 + 6);
      plStack_108 = pplVar17[5];
      plStack_110 = pplVar17[4];
      pplVar17 = &plStack_f8;
      FUN_10ab6e9d8();
      if (*(char *)((long)pplVar18 + 0x17) < '\0') {
        func_0x000107c3192c(pplVar17,*pplVar18,pplVar18[1]);
      }
      else {
        plStack_e8 = pplVar18[2];
        plStack_f0 = pplVar18[1];
        plStack_f8 = *pplVar18;
        pplVar17 = pplVar18;
      }
      plStack_e0 = pplVar18[3];
      plStack_d0 = pplVar18[5];
      plStack_d8 = pplVar18[4];
      uStack_c8 = *(undefined4 *)(pplVar18 + 6);
      FUN_10ab6f020();
      if (*(char *)((long)pplVar17 + 0x17) < '\0') {
        func_0x000107c3192c(aplStack_c0,*pplVar17,pplVar17[1]);
      }
      else {
        plStack_b0 = pplVar17[2];
        aplStack_c0[1] = pplVar17[1];
        aplStack_c0[0] = *pplVar17;
      }
      plStack_a8 = pplVar17[3];
      plStack_98 = pplVar17[5];
      plStack_a0 = pplVar17[4];
      uStack_90 = *(undefined4 *)(pplVar17 + 6);
      FUN_10ab6f520(&uStack_198,&plStack_130,3);
      lVar27 = 0;
      do {
        if ((&cStack_a9)[lVar27] < '\0') {
          __ZdlPv(*(undefined8 *)((long)aplStack_c0 + lVar27));
        }
        lVar27 = lVar27 + -0x38;
      } while (lVar27 != -0xa8);
      if (*(char *)((long)param_1 + 0xb9) != '\x01') {
        *(undefined1 *)((long)param_1 + 0xb9) = 1;
        (**(code **)(*param_1 + 0xa0))(param_1);
      }
      if (*(char *)((long)param_1 + 0xba) != '\x01') {
        *(undefined1 *)((long)param_1 + 0xba) = 1;
        (**(code **)(*param_1 + 0xa0))(param_1);
      }
      lVar27 = lStack_150;
      *(undefined4 *)(lStack_150 + 0xf0) = uStack_198;
      if ((undefined4 *)(lStack_150 + 0xf0) != &uStack_198) {
        FUN_10a1903c4(lStack_150 + 0xf8,lStack_190,lStack_188,
                      (lStack_188 - lStack_190 >> 3) * 0x6db6db6db6db6db7);
      }
      *(undefined8 *)(lVar27 + 0x118) = uStack_170;
      *(undefined8 *)(lVar27 + 0x110) = uStack_178;
      *(undefined8 *)(lVar27 + 0x128) = uStack_160;
      *(undefined8 *)(lVar27 + 0x120) = uStack_168;
      *(undefined8 *)(lVar27 + 0x130) = uStack_158;
      *(undefined8 *)(lStack_150 + 0xe8) = 1;
      plStack_130 = &lStack_190;
      func_0x00010a190844(&plStack_130);
      plVar21 = plStack_148;
      lStack_1b0 = lStack_150;
      plVar19 = plStack_1a8;
      lStack_150 = 0;
      plStack_148 = (long *)0x0;
      plStack_1a8 = plVar21;
      if (plVar19 != (long *)0x0) {
        plVar21 = plVar19 + 1;
        do {
          lVar27 = *plVar21;
          cVar7 = '\x01';
          bVar46 = (bool)ExclusiveMonitorPass(plVar21,0x10);
          if (bVar46) {
            *plVar21 = lVar27 + -1;
            cVar7 = ExclusiveMonitorsStatus();
          }
        } while (cVar7 != '\0');
        if (lVar27 == 0) {
          (**(code **)(*plVar19 + 0x10))(plVar19);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar19);
        }
      }
      plVar19 = plStack_148;
      if (plStack_148 != (long *)0x0) {
        plVar21 = plStack_148 + 1;
        do {
          lVar27 = *plVar21;
          cVar7 = '\x01';
          bVar46 = (bool)ExclusiveMonitorPass(plVar21,0x10);
          if (bVar46) {
            *plVar21 = lVar27 + -1;
            cVar7 = ExclusiveMonitorsStatus();
          }
        } while (cVar7 != '\0');
        if (lVar27 == 0) {
          (**(code **)(*plStack_148 + 0x10))(plStack_148);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar19);
        }
      }
    }
    lVar27 = lStack_1b0;
    if (((param_1[0x22] == 0) ||
        (plVar19 = *(long **)(param_1[0x22] + 0xe0), plVar19 == (long *)0x0)) ||
       ((**(code **)(*plVar19 + 0x90))(), *plVar19 == 0)) {
      uVar55 = *(uint *)(lVar27 + 0x130);
      if (uVar55 != 0xffffffff) {
        uVar37 = (*(long *)(lVar27 + 0x100) - *(long *)(lVar27 + 0xf8) >> 3) * 0x6db6db6db6db6db7;
        if (uVar37 < uVar55 || uVar37 - uVar55 == 0) {
          FUN_10ab725fc();
          goto LAB_10ac67594;
        }
        if (*(long *)(lVar27 + 0xf8) != 0) {
          FUN_10ab6fbd0(lVar27 + 0xf0,8);
        }
      }
      param_1[0x27] = param_1[0x26];
    }
    else {
      plVar19 = *(long **)(param_1[0x22] + 0xe0);
      if (plVar19 == (long *)0x0) {
        lVar32 = 0;
      }
      else {
        (**(code **)(*plVar19 + 0x90))();
        lVar32 = *plVar19;
      }
      uVar55 = *(uint *)(lVar32 + 0x130);
      if (uVar55 != 0xffffffff) {
        uVar37 = (*(long *)(lVar32 + 0x100) - *(long *)(lVar32 + 0xf8) >> 3) * 0x6db6db6db6db6db7;
        if (uVar55 <= uVar37 && uVar37 - uVar55 != 0) {
          if (*(long *)(lVar32 + 0xf8) != 0) {
            uVar55 = *(uint *)(lVar27 + 0x130);
            if (uVar55 != 0xffffffff) {
              uVar37 = (*(long *)(lVar27 + 0x100) - *(long *)(lVar27 + 0xf8) >> 3) *
                       0x6db6db6db6db6db7;
              if (uVar37 < uVar55 || uVar37 - uVar55 == 0) goto LAB_10ac67580;
              if (*(long *)(lVar27 + 0xf8) != 0) goto LAB_10ac667bc;
            }
            FUN_10ab6eee0();
            FUN_10ab6f958(lVar27 + 0xf8,plVar19);
            FUN_10ab6f86c(lVar27 + 0xf0);
            goto LAB_10ac667bc;
          }
          goto LAB_10ac66ddc;
        }
LAB_10ac67580:
        FUN_10ab725fc();
        goto LAB_10ac67594;
      }
LAB_10ac66ddc:
      uVar55 = *(uint *)(lVar27 + 0x130);
      if (uVar55 != 0xffffffff) {
        uVar37 = (*(long *)(lVar27 + 0x100) - *(long *)(lVar27 + 0xf8) >> 3) * 0x6db6db6db6db6db7;
        if (uVar37 < uVar55 || uVar37 - uVar55 == 0) goto LAB_10ac67580;
        if (*(long *)(lVar27 + 0xf8) != 0) {
          FUN_10ab6fbd0(lVar27 + 0xf0,8);
        }
      }
    }
LAB_10ac667bc:
    lVar27 = *(long *)(piVar48 + 0x72);
    puVar22 = *(undefined8 **)(lVar27 + 0x18);
    lVar32 = *(long *)(lVar27 + 0x10);
    iVar31 = (int)((ulong)(*(long *)(lVar27 + 0x20) - (long)puVar22) >> 2) * -0x55555555;
    puVar47 = *(undefined4 **)(lVar32 + 0x20);
    lVar27 = *(long *)(lVar32 + 0x28);
    lVar32 = *(long *)(lVar32 + 0x38);
    uVar37 = (ulong)iVar31;
    FUN_10a1322a0(&plStack_130,uVar37);
    uVar53 = lVar27 - (long)puVar47;
    func_0x000109699628((int)((ulong)((long)plStack_128 - (long)plStack_130) >> 2) * -0x55555555,
                        plStack_130,uVar53 >> 2 & 0xffffffff,puVar47,iVar31,puVar22,0,0);
    uVar5 = *(undefined4 *)(puVar22 + 1);
    *(undefined8 *)(lStack_1b0 + 0x144) = *puVar22;
    *(undefined4 *)(lStack_1b0 + 0x14c) = uVar5;
    uVar5 = *(undefined4 *)(puVar22 + 1);
    *(undefined8 *)(lStack_1b0 + 0x138) = *puVar22;
    *(undefined4 *)(lStack_1b0 + 0x140) = uVar5;
    uVar55 = *(uint *)(lStack_1b0 + 0x110);
    if (uVar55 == 0xffffffff) {
      lVar27 = 0;
    }
    else {
      uVar35 = (*(long *)(lStack_1b0 + 0x100) - *(long *)(lStack_1b0 + 0xf8) >> 3) *
               0x6db6db6db6db6db7;
      if (uVar35 < uVar55 || uVar35 - uVar55 == 0) {
        FUN_10ab725fc();
        goto LAB_10ac67594;
      }
      lVar27 = *(long *)(lStack_1b0 + 0xf8) + (ulong)uVar55 * 0x38;
    }
    uVar55 = *(uint *)(lStack_1b0 + 0x114);
    if (uVar55 == 0xffffffff) {
      lVar54 = 0;
    }
    else {
      uVar35 = (*(long *)(lStack_1b0 + 0x100) - *(long *)(lStack_1b0 + 0xf8) >> 3) *
               0x6db6db6db6db6db7;
      if (uVar35 < uVar55 || uVar35 - uVar55 == 0) {
        FUN_10ab725fc();
        goto LAB_10ac67594;
      }
      lVar54 = *(long *)(lStack_1b0 + 0xf8) + (ulong)uVar55 * 0x38;
    }
    uVar55 = *(uint *)(lStack_1b0 + 0x120);
    if (uVar55 == 0xffffffff) {
      lVar52 = 0;
    }
    else {
      uVar35 = (*(long *)(lStack_1b0 + 0x100) - *(long *)(lStack_1b0 + 0xf8) >> 3) *
               0x6db6db6db6db6db7;
      if (uVar35 < uVar55 || uVar35 - uVar55 == 0) {
        FUN_10ab725fc();
        goto LAB_10ac67594;
      }
      lVar52 = *(long *)(lStack_1b0 + 0xf8) + (ulong)uVar55 * 0x38;
    }
    if (((lVar27 != 0) && (*(int *)(lVar27 + 0x24) == 5)) &&
       (((*(int *)(lVar27 + 0x28) == 3 &&
         ((((lVar54 != 0 && (*(int *)(lVar54 + 0x24) == 5)) && (*(int *)(lVar54 + 0x28) == 3)) &&
          ((lVar52 != 0 && (*(int *)(lVar52 + 0x24) == 5)))))) && (*(int *)(lVar52 + 0x28) == 2))))
    {
      lVar42 = param_1[0x26];
      if (lVar42 == param_1[0x27]) {
        FUN_10ab4a154(lStack_1b0,uVar37);
        uVar55 = *(int *)(lVar27 + 0x24) - 1;
        if (uVar55 < 7) {
          iVar26 = *(int *)(&UNK_10e50a6c8 + (ulong)uVar55 * 4);
        }
        else {
          iVar26 = 0;
        }
        if (*(int *)(lVar27 + 0x28) * iVar26 == 0xc) {
          lVar27 = *(long *)(lStack_1b0 + 0x10) + (ulong)*(uint *)(lVar27 + 0x30);
          uVar55 = *(uint *)(lStack_1b0 + 0xf0);
        }
        else {
          lVar27 = 0;
          uVar55 = 0;
        }
        uVar36 = *(int *)(lVar54 + 0x24) - 1;
        if (uVar36 < 7) {
          iVar26 = *(int *)(&UNK_10e50a6c8 + (ulong)uVar36 * 4);
        }
        else {
          iVar26 = 0;
        }
        if (*(int *)(lVar54 + 0x28) * iVar26 == 0xc) {
          lVar54 = *(long *)(lStack_1b0 + 0x10) + (ulong)*(uint *)(lVar54 + 0x30);
          uVar36 = *(uint *)(lStack_1b0 + 0xf0);
        }
        else {
          lVar54 = 0;
          uVar36 = 0;
        }
        uVar39 = *(int *)(lVar52 + 0x24) - 1;
        if (uVar39 < 7) {
          iVar26 = *(int *)(&UNK_10e50a6c8 + (ulong)uVar39 * 4);
        }
        else {
          iVar26 = 0;
        }
        if (*(int *)(lVar52 + 0x28) * iVar26 == 8) {
          lVar52 = *(long *)(lStack_1b0 + 0x10) + (ulong)*(uint *)(lVar52 + 0x30);
          uVar39 = *(uint *)(lStack_1b0 + 0xf0);
        }
        else {
          lVar52 = 0;
          uVar39 = 0;
        }
        if (iVar31 != 0) {
          lVar38 = 0;
          lVar42 = 0;
          uVar35 = 0;
          do {
            puVar40 = (undefined8 *)((long)puVar22 + (long)(int)((ulong)lVar38 >> 0x20) * 0xc);
            uVar59 = *puVar40;
            uVar57 = *(ulong *)((long)puVar40 + 4);
            uVar44 = uVar35 & 0xffffffff;
            pfVar41 = (float *)(lVar27 + uVar44 * uVar55);
            fVar83 = (float)uVar59;
            *pfVar41 = fVar83;
            *(ulong *)(pfVar41 + 1) = uVar57;
            uVar34 = ((long)plStack_128 - (long)plStack_130 >> 2) * -0x5555555555555555;
            if (uVar34 < uVar35 || uVar34 - uVar35 == 0) goto LAB_10ac67594;
            puVar40 = (undefined8 *)(lVar54 + uVar44 * uVar36);
            uVar20 = *(undefined8 *)((long)plStack_130 + lVar42);
            *(undefined4 *)(puVar40 + 1) =
                 *(undefined4 *)((undefined8 *)((long)plStack_130 + lVar42) + 1);
            *puVar40 = uVar20;
            *(undefined8 *)(lVar52 + uVar44 * uVar39) =
                 *(undefined8 *)(lVar32 + (lVar38 >> 0x20) * 8);
            pVar2 = (unkbyte9 *)(lStack_1b0 + 0x138);
            uVar20 = *(undefined8 *)(lStack_1b0 + 0x140);
            uVar64 = (undefined1)((ulong)uVar20 >> 8);
            uVar65 = (undefined1)((ulong)uVar20 >> 0x10);
            uVar66 = (undefined1)((ulong)uVar20 >> 0x18);
            uVar67 = (undefined1)((ulong)uVar20 >> 0x20);
            uVar68 = (undefined1)((ulong)uVar20 >> 0x28);
            uVar69 = (undefined1)((ulong)uVar20 >> 0x30);
            uVar70 = (undefined1)((ulong)uVar20 >> 0x38);
            auVar81[9] = uVar64;
            auVar81._0_9_ = *pVar2;
            auVar81[10] = uVar65;
            auVar81[0xb] = uVar66;
            auVar81[0xc] = uVar67;
            auVar81[0xd] = uVar68;
            auVar81[0xe] = uVar69;
            auVar81[0xf] = uVar70;
            auVar11[9] = uVar64;
            auVar11._0_9_ = *pVar2;
            auVar11[10] = uVar65;
            auVar11[0xb] = uVar66;
            auVar11[0xc] = uVar67;
            auVar11[0xd] = uVar68;
            auVar11[0xe] = uVar69;
            auVar11[0xf] = uVar70;
            auVar81 = NEON_ext(auVar81,auVar11,8,1);
            fVar56 = (float)(uVar57 >> 0x20);
            auVar62._4_4_ =
                 -(uint)((float)((ulong)*(undefined8 *)pVar2 >> 0x20) <
                        (float)((ulong)uVar59 >> 0x20));
            auVar62._0_4_ = -(uint)((float)*(undefined8 *)pVar2 < fVar83);
            auVar62._12_4_ = -(uint)(fVar83 < auVar81._4_4_);
            auVar62._8_4_ = -(uint)((float)uVar20 < fVar56);
            auVar12[9] = uVar64;
            auVar12._0_9_ = *pVar2;
            auVar12[10] = uVar65;
            auVar12[0xb] = uVar66;
            auVar12[0xc] = uVar67;
            auVar12[0xd] = uVar68;
            auVar12[0xe] = uVar69;
            auVar12[0xf] = uVar70;
            auVar15._8_4_ = fVar56;
            auVar15._0_8_ = uVar59;
            auVar15._12_4_ = fVar83;
            auVar63[9] = uVar64;
            auVar63._0_9_ = *pVar2;
            auVar63[10] = uVar65;
            auVar63[0xb] = uVar66;
            auVar63[0xc] = uVar67;
            auVar63[0xd] = uVar68;
            auVar63[0xe] = uVar69;
            auVar63[0xf] = uVar70;
            auVar63 = auVar63 ^ (auVar12 ^ auVar15) & auVar62;
            *(long *)(lStack_1b0 + 0x140) = auVar63._8_8_;
            *(long *)pVar2 = auVar63._0_8_;
            uVar44 = *(ulong *)(lStack_1b0 + 0x148);
            iVar31 = -(uint)(fVar56 < (float)(uVar44 >> 0x20));
            *(ulong *)(lStack_1b0 + 0x148) =
                 uVar57 ^ (uVar57 ^ uVar44) &
                          ~CONCAT17((char)((uint)iVar31 >> 0x18),
                                    CONCAT16((char)((uint)iVar31 >> 0x10),
                                             CONCAT15((char)((uint)iVar31 >> 8),
                                                      CONCAT14((char)iVar31,
                                                               -(uint)((float)uVar57 < (float)uVar44
                                                                      )))));
            uVar35 = uVar35 + 1;
            lVar42 = lVar42 + 0xc;
            lVar38 = lVar38 + 0x100000000;
          } while (uVar37 != uVar35);
        }
        FUN_10ab4cb54(lStack_1b0,(long)(uVar53 * 0x40000000) >> 0x20);
        if (0 < (int)(uVar53 >> 2)) {
          uVar37 = uVar53 >> 2 & 0x7fffffff;
          puVar28 = *(undefined2 **)(lStack_1b0 + 0x28);
          do {
            *puVar28 = (short)*puVar47;
            uVar37 = uVar37 - 1;
            puVar28 = puVar28 + 1;
            puVar47 = puVar47 + 1;
          } while (uVar37 != 0);
        }
      }
      else {
        uVar37 = 0;
        lVar38 = *(long *)(lStack_1b0 + 0x10);
        uVar55 = *(uint *)(lVar27 + 0x30);
        uVar36 = *(uint *)(lStack_1b0 + 0xf0);
        uVar39 = *(uint *)(lVar54 + 0x30);
        uVar6 = *(uint *)(lVar52 + 0x30);
        do {
          puVar40 = (undefined8 *)((long)puVar22 + (long)*(int *)(lVar42 + uVar37 * 4) * 0xc);
          uVar59 = *puVar40;
          uVar53 = *(ulong *)((long)puVar40 + 4);
          pfVar41 = (float *)(lVar38 + (ulong)uVar55 + (uVar37 & 0xffffffff) * (ulong)uVar36);
          fVar83 = (float)uVar59;
          *pfVar41 = fVar83;
          *(ulong *)(pfVar41 + 1) = uVar53;
          if (((ulong)(param_1[0x27] - param_1[0x26] >> 2) <= uVar37) ||
             (uVar44 = (ulong)*(uint *)(param_1[0x26] + uVar37 * 4),
             uVar35 = ((long)plStack_128 - (long)plStack_130 >> 2) * -0x5555555555555555,
             uVar35 < uVar44 || uVar35 - uVar44 == 0)) goto LAB_10ac67594;
          lVar27 = (uVar37 & 0xffffffff) * (ulong)uVar36;
          puVar45 = (undefined8 *)((long)plStack_130 + uVar44 * 0xc);
          puVar40 = (undefined8 *)(lVar38 + (ulong)uVar39 + lVar27);
          uVar20 = *puVar45;
          *(undefined4 *)(puVar40 + 1) = *(undefined4 *)(puVar45 + 1);
          *puVar40 = uVar20;
          if ((ulong)(param_1[0x27] - param_1[0x26] >> 2) <= uVar37) goto LAB_10ac67594;
          *(undefined8 *)(lVar38 + (ulong)uVar6 + lVar27) =
               *(undefined8 *)(lVar32 + (long)*(int *)(param_1[0x26] + uVar37 * 4) * 8);
          pVar2 = (unkbyte9 *)(lStack_1b0 + 0x138);
          uVar20 = *(undefined8 *)(lStack_1b0 + 0x140);
          uVar64 = (undefined1)((ulong)uVar20 >> 8);
          uVar65 = (undefined1)((ulong)uVar20 >> 0x10);
          uVar66 = (undefined1)((ulong)uVar20 >> 0x18);
          uVar67 = (undefined1)((ulong)uVar20 >> 0x20);
          uVar68 = (undefined1)((ulong)uVar20 >> 0x28);
          uVar69 = (undefined1)((ulong)uVar20 >> 0x30);
          uVar70 = (undefined1)((ulong)uVar20 >> 0x38);
          auVar8[9] = uVar64;
          auVar8._0_9_ = *pVar2;
          auVar8[10] = uVar65;
          auVar8[0xb] = uVar66;
          auVar8[0xc] = uVar67;
          auVar8[0xd] = uVar68;
          auVar8[0xe] = uVar69;
          auVar8[0xf] = uVar70;
          auVar9[9] = uVar64;
          auVar9._0_9_ = *pVar2;
          auVar9[10] = uVar65;
          auVar9[0xb] = uVar66;
          auVar9[0xc] = uVar67;
          auVar9[0xd] = uVar68;
          auVar9[0xe] = uVar69;
          auVar9[0xf] = uVar70;
          auVar81 = NEON_ext(auVar8,auVar9,8,1);
          fVar56 = (float)(uVar53 >> 0x20);
          auVar60._4_4_ =
               -(uint)((float)((ulong)*(undefined8 *)pVar2 >> 0x20) < (float)((ulong)uVar59 >> 0x20)
                      );
          auVar60._0_4_ = -(uint)((float)*(undefined8 *)pVar2 < fVar83);
          auVar60._12_4_ = -(uint)(fVar83 < auVar81._4_4_);
          auVar60._8_4_ = -(uint)((float)uVar20 < fVar56);
          auVar10[9] = uVar64;
          auVar10._0_9_ = *pVar2;
          auVar10[10] = uVar65;
          auVar10[0xb] = uVar66;
          auVar10[0xc] = uVar67;
          auVar10[0xd] = uVar68;
          auVar10[0xe] = uVar69;
          auVar10[0xf] = uVar70;
          auVar14._8_4_ = fVar56;
          auVar14._0_8_ = uVar59;
          auVar14._12_4_ = fVar83;
          auVar61[9] = uVar64;
          auVar61._0_9_ = *pVar2;
          auVar61[10] = uVar65;
          auVar61[0xb] = uVar66;
          auVar61[0xc] = uVar67;
          auVar61[0xd] = uVar68;
          auVar61[0xe] = uVar69;
          auVar61[0xf] = uVar70;
          auVar61 = auVar61 ^ (auVar10 ^ auVar14) & auVar60;
          *(long *)(lStack_1b0 + 0x140) = auVar61._8_8_;
          *(long *)pVar2 = auVar61._0_8_;
          uVar35 = *(ulong *)(lStack_1b0 + 0x148);
          iVar31 = -(uint)(fVar56 < (float)(uVar35 >> 0x20));
          *(ulong *)(lStack_1b0 + 0x148) =
               uVar53 ^ (uVar53 ^ uVar35) &
                        ~CONCAT17((char)((uint)iVar31 >> 0x18),
                                  CONCAT16((char)((uint)iVar31 >> 0x10),
                                           CONCAT15((char)((uint)iVar31 >> 8),
                                                    CONCAT14((char)iVar31,
                                                             -(uint)((float)uVar53 < (float)uVar35))
                                                   )));
          uVar37 = uVar37 + 1;
          lVar42 = param_1[0x26];
        } while (uVar37 < (ulong)(param_1[0x27] - lVar42 >> 2));
      }
      if (plStack_130 != (long *)0x0) {
        plStack_128 = plStack_130;
        __ZdlPv();
      }
      if (((param_1[0x22] != 0) &&
          (plVar19 = *(long **)(param_1[0x22] + 0xe0), plVar19 != (long *)0x0)) &&
         ((**(code **)(*plVar19 + 0x90))(), *plVar19 != 0)) {
        if (*(int *)((long)param_1 + 0x124) == 0) {
          FUN_10ac676cc(param_1,lStack_1b8,&lStack_1b0);
        }
        else if (((*(char *)((long)param_1 + 300) == '\x01') && (param_1[0x22] != 0)) &&
                ((plVar19 = *(long **)(param_1[0x22] + 0xe0), plVar19 != (long *)0x0 &&
                 ((**(code **)(*plVar19 + 0x90))(), lVar27 = lStack_1b0, *plVar19 != 0)))) {
          *(undefined1 *)((long)param_1 + 300) = 0;
          param_1[0x27] = param_1[0x26];
          lVar32 = *(long *)(lStack_1b0 + 0x40);
          lVar54 = *(long *)(lStack_1b0 + 0x48);
          while (lVar54 != lVar32) {
            lVar54 = lVar54 + -0x48;
            func_0x00010a0d3694(lVar54);
          }
          *(long *)(lVar27 + 0x48) = lVar32;
          FUN_10a0d8988(lStack_1b0 + 0x58);
          lVar54 = lStack_1b0;
          lVar27 = *(long *)(lStack_1b0 + 0x88);
          lVar32 = *(long *)(lStack_1b0 + 0x90);
          while (lVar32 != lVar27) {
            lVar32 = lVar32 + -0x30;
            func_0x00010a0d3994(lVar32);
          }
          *(long *)(lVar54 + 0x90) = lVar27;
          lStack_150 = 0;
          plStack_148 = (long *)0x0;
          uStack_140 = 0;
          if (2 < *(uint *)((long)param_1 + 0x124)) {
            FUN_10a00946c(&UNK_10f69fb23);
            goto LAB_10ac67594;
          }
          uVar5 = *(undefined4 *)(&UNK_10e50a6e4 + (ulong)*(uint *)((long)param_1 + 0x124) * 4);
          plVar19 = *(long **)(param_1[0x22] + 0xe0);
          (**(code **)(*plVar19 + 0x90))();
          lVar27 = *plVar19 + 0xf0;
          FUN_10ab6f6c8(lVar27,uVar5);
          if (((lVar27 == 0) || (*(int *)(lVar27 + 0x24) != 5)) || (*(int *)(lVar27 + 0x28) == 0)) {
            if ((bRam000000011330a9e8 & 1) != 0) {
              auStack_1e0[0] = (ulong)*(uint *)((long)param_1 + 0x124);
              puVar23 = &UNK_10f69fca1;
              puVar25 = &UNK_10f69fc11;
              uVar59 = 0;
              uVar20 = 1;
              uVar24 = 0xbc;
              unaff_x30 = 0x10ac66ff0;
              register0x00000008 = (BADSPACEBASE *)auStack_1e0;
              unaff_x29 = puVar1;
SUB_10ae06f08:
              *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
              *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
              *(BADSPACEBASE **)((long)register0x00000008 + -0x18) = register0x00000008;
              FUN_10ae06f30(uVar59,uVar20,&UNK_10f69ec17,puVar23,uVar24,puVar25,register0x00000008);
              return;
            }
          }
          else {
            lVar32 = *(long *)(lStack_1b8 + 0x38);
            lVar54 = *(long *)(lStack_1b8 + 0x40);
            lStack_1c8 = *(long *)(lStack_1b8 + 0x60);
            plVar19 = *(long **)(param_1[0x22] + 0xe0);
            if (plVar19 == (long *)0x0) {
              lVar52 = 0;
LAB_10ac67010:
              iVar31 = 4;
            }
            else {
              (**(code **)(*plVar19 + 0x90))();
              lVar52 = *plVar19;
              uVar55 = *(uint *)(lVar27 + 0x24);
              if (uVar55 < 8) {
                iVar31 = 1;
                if ((1 << (ulong)(uVar55 & 0x1f) & 0x58U) == 0) {
                  uVar55 = 1 << (ulong)(uVar55 & 0x1f);
                  if ((uVar55 & 6) == 0) {
                    if ((uVar55 & 0xa0) != 0) goto LAB_10ac67010;
                    goto LAB_10ac66fac;
                  }
                }
                else {
                  iVar31 = 2;
                }
              }
              else {
LAB_10ac66fac:
                iVar31 = 0;
              }
            }
            uStack_1c0 = (lVar54 - lVar32 >> 2) * -0x5555555555555555;
            if (*(int *)(lVar27 + 0x28) * iVar31 == 8) {
              lVar27 = *(long *)(lVar52 + 0x10) + (ulong)*(uint *)(lVar27 + 0x30);
              uVar37 = (ulong)*(uint *)(lVar52 + 0xf0);
            }
            else {
              lVar27 = 0;
              uVar37 = 0;
            }
            func_0x00010986e3dc(&lStack_150,uStack_1c0);
            plVar19 = *(long **)(param_1[0x22] + 0xe0);
            if (plVar19 == (long *)0x0) {
              lVar52 = 0;
            }
            else {
              (**(code **)(*plVar19 + 0x90))();
              lVar52 = *plVar19;
            }
            uVar55 = *(uint *)(lVar52 + 0xf0);
            if (uVar55 == 0) {
              puVar49 = (uint *)0x0;
              puVar50 = (uint *)0x0;
              uVar53 = 0;
            }
            else {
              uVar53 = 0;
              if ((ulong)uVar55 != 0) {
                uVar53 = (ulong)(*(long *)(lVar52 + 0x18) - *(long *)(lVar52 + 0x10)) /
                         (ulong)uVar55;
              }
              uVar53 = uVar53 & 0xffffffff;
              if (uVar53 == 0) {
                puVar49 = (uint *)0x0;
                puVar50 = (uint *)0x0;
              }
              else {
                puVar49 = (uint *)(uVar53 * 8);
                __Znwm();
                _bzero();
                uVar35 = 0;
                puVar50 = (uint *)(lVar27 + 4);
                puVar33 = puVar49 + 1;
                do {
                  uVar55 = *puVar50;
                  puVar33[-1] = (uint)uVar35;
                  *puVar33 = uVar55;
                  uVar35 = uVar35 + 1;
                  puVar50 = (uint *)((long)puVar50 + uVar37);
                  puVar33 = puVar33 + 2;
                } while (uVar53 != uVar35);
                puVar50 = puVar49 + uVar53 * 2;
              }
            }
            lVar52 = 0;
            if ((long)puVar50 - (long)puVar49 != 0) {
              lVar52 = LZCOUNT(uVar53) * -2 + 0x7e;
            }
            FUN_10ac7f540(puVar49,puVar50,lVar52,1);
            if (lVar54 == lVar32) {
              if (puVar49 != (uint *)0x0) {
                __ZdlPv(puVar49);
              }
            }
            else {
              bVar46 = false;
              uVar53 = 0;
              fVar83 = *(float *)(param_1 + 0x25);
              uStack_1d0 = (long)puVar50 - (long)puVar49 >> 3;
              do {
                if (puVar50 != puVar49) {
                  puVar22 = (undefined8 *)(lStack_1c8 + uVar53 * 8);
                  uVar59 = *puVar22;
                  fVar56 = *(float *)((long)puVar22 + 4);
                  fVar58 = fVar56 - fVar83;
                  fVar56 = fVar83 + fVar56;
                  puVar29 = puVar50;
                  puVar33 = puVar49;
                  uVar35 = uStack_1d0;
                  do {
                    uVar44 = uVar35 >> 1;
                    puVar30 = puVar33 + uVar44 * 2;
                    if (fVar58 <= (float)puVar30[1]) {
                      if (fVar56 < (float)puVar30[1]) goto LAB_10ac671a8;
                      puVar51 = puVar30;
                      if (uVar35 != 1) {
                        do {
                          uVar35 = uVar44 >> 1;
                          puVar51 = puVar33 + uVar35 * 2 + 2;
                          uVar44 = uVar44 + (uVar44 >> 1 ^ 0xffffffffffffffff);
                          if (fVar58 <= (float)puVar33[uVar35 * 2 + 1]) {
                            puVar51 = puVar33;
                            uVar44 = uVar35;
                          }
                          puVar33 = puVar51;
                        } while (uVar44 != 0);
                      }
                      puVar30 = puVar30 + 2;
                      if ((long)puVar29 - (long)puVar30 != 0) {
                        uVar35 = (long)puVar29 - (long)puVar30 >> 3;
                        do {
                          uVar34 = uVar35 >> 1;
                          uVar44 = uVar35 + (uVar35 >> 1 ^ 0xffffffffffffffff);
                          uVar35 = uVar34;
                          if ((float)puVar30[uVar34 * 2 + 1] <= fVar56) {
                            uVar35 = uVar44;
                            puVar30 = puVar30 + uVar34 * 2 + 2;
                          }
                        } while (uVar35 != 0);
                      }
                      for (; puVar51 < puVar30; puVar51 = puVar51 + 2) {
                        uVar20 = *(undefined8 *)(lVar27 + uVar37 * *puVar51);
                        fVar56 = (float)uVar59 - (float)uVar20;
                        fVar58 = (float)((ulong)uVar59 >> 0x20) - (float)((ulong)uVar20 >> 0x20);
                        if (fVar56 * fVar56 + fVar58 * fVar58 <
                            *(float *)(param_1 + 0x25) * *(float *)(param_1 + 0x25)) {
                          uVar35 = ((long)plStack_148 - lStack_150 >> 3) * -0x5555555555555555;
                          if (uVar35 < uVar53 || uVar35 - uVar53 == 0) goto LAB_10ac67594;
                          FUN_10a0e6678(lStack_150 + uVar53 * 0x18,puVar51);
                          bVar46 = true;
                        }
                      }
                      break;
                    }
                    puVar33 = puVar30 + 2;
                    uVar44 = uVar35 + ~uVar44;
                    puVar30 = puVar29;
LAB_10ac671a8:
                    puVar29 = puVar30;
                    uVar35 = uVar44;
                  } while (uVar44 != 0);
                }
                uVar53 = uVar53 + 1;
              } while (uVar53 != uStack_1c0);
              if (puVar49 != (uint *)0x0) {
                __ZdlPv(puVar49);
              }
              if (bVar46) {
                uVar37 = *(ulong *)(lStack_1b8 + 0x38);
                uStack_1c0 = *(ulong *)(lStack_1b8 + 0x40);
                plVar19 = *(long **)(param_1[0x22] + 0xe0);
                (**(code **)(*plVar19 + 0x90))();
                lVar27 = *(long *)(*plVar19 + 0x40);
                lVar32 = *(long *)(*plVar19 + 0x48);
                if (lVar27 != lVar32) {
                  lVar54 = (long)(uStack_1c0 - uVar37) >> 2;
                  uVar53 = lVar54 * -0x5555555555555555;
                  do {
                    uStack_100 = 0;
                    plStack_118 = (long *)0x0;
                    plStack_120 = (long *)0x0;
                    plStack_108 = (long *)0x0;
                    plStack_110 = (long *)0x0;
                    plStack_128 = (long *)0x0;
                    plStack_130 = (long *)0x0;
                    FUN_10a0d3454();
                    plStack_f0 = (long *)plVar19[1];
                    plStack_f8 = (long *)*plVar19;
                    if (plVar19[1] != 0) {
                      plVar19 = (long *)(plVar19[1] + 8);
                      do {
                        cVar7 = '\x01';
                        bVar46 = (bool)ExclusiveMonitorPass(plVar19,0x10);
                        if (bVar46) {
                          *plVar19 = *plVar19 + 1;
                          cVar7 = ExclusiveMonitorsStatus();
                        }
                      } while (cVar7 != '\0');
                    }
                    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
                              (&plStack_130,lVar27);
                    plStack_118 = (long *)CONCAT44(plStack_118._4_4_,*(undefined4 *)(lVar27 + 0x18))
                    ;
                    FUN_10a0dc020(&uStack_198,lVar54 * 8);
                    if (uStack_1c0 != uVar37) {
                      uVar35 = 0;
                      lVar52 = **(long **)(lVar27 + 0x38);
                      do {
                        pfVar41 = (float *)(CONCAT44(uStack_194,uStack_198) + uVar35 * 0x18);
                        pfVar41[0] = 0.0;
                        pfVar41[1] = 0.0;
                        pfVar41[2] = 0.0;
                        pfVar41[3] = 0.0;
                        pfVar41[4] = 0.0;
                        pfVar41[5] = 0.0;
                        uVar44 = ((long)plStack_148 - lStack_150 >> 3) * -0x5555555555555555;
                        if (uVar44 < uVar35 || uVar44 - uVar35 == 0) goto LAB_10ac67594;
                        plVar19 = (long *)(lStack_150 + uVar35 * 0x18);
                        puVar50 = (uint *)*plVar19;
                        puVar49 = (uint *)plVar19[1];
                        if (puVar50 == puVar49) {
                          uVar64 = 0;
                          uVar65 = 0;
                          uVar66 = 0;
                          uVar67 = 0;
                          uVar68 = 0;
                          uVar69 = 0;
                          uVar70 = 0;
                          uVar71 = 0;
                          uVar72 = 0;
                          uVar73 = 0;
                          uVar74 = 0;
                          uVar75 = 0;
                          uVar76 = 0;
                          uVar77 = 0;
                          uVar78 = 0;
                          uVar79 = 0;
                          fVar83 = 0.0;
                          fVar56 = 0.0;
                        }
                        else {
                          fVar83 = 0.0;
                          fVar56 = 0.0;
                          fVar58 = 0.0;
                          fVar80 = 0.0;
                          fVar82 = 0.0;
                          uVar64 = 0;
                          uVar65 = 0;
                          uVar66 = 0;
                          uVar67 = 0;
                          do {
                            puVar33 = puVar50 + 1;
                            pfVar43 = (float *)(lVar52 + (ulong)*puVar50 * 0x18);
                            fVar13 = (float)CONCAT13(uVar67,CONCAT12(uVar66,CONCAT11(uVar65,uVar64))
                                                    ) + *pfVar43;
                            uVar64 = SUB41(fVar13,0);
                            uVar65 = (undefined1)((uint)fVar13 >> 8);
                            uVar66 = (undefined1)((uint)fVar13 >> 0x10);
                            uVar67 = (undefined1)((uint)fVar13 >> 0x18);
                            *pfVar41 = fVar13;
                            fVar82 = fVar82 + pfVar43[1];
                            pfVar41[1] = fVar82;
                            fVar80 = fVar80 + pfVar43[2];
                            pfVar41[2] = fVar80;
                            fVar58 = fVar58 + pfVar43[3];
                            pfVar41[3] = fVar58;
                            fVar56 = fVar56 + pfVar43[4];
                            pfVar41[4] = fVar56;
                            fVar83 = fVar83 + pfVar43[5];
                            pfVar41[5] = fVar83;
                            puVar50 = puVar33;
                          } while (puVar33 != puVar49);
                          uVar44 = ((long)plStack_148 - lStack_150 >> 3) * -0x5555555555555555;
                          uVar68 = SUB41(fVar82,0);
                          uVar69 = (undefined1)((uint)fVar82 >> 8);
                          uVar70 = (undefined1)((uint)fVar82 >> 0x10);
                          uVar71 = (undefined1)((uint)fVar82 >> 0x18);
                          uVar72 = SUB41(fVar80,0);
                          uVar73 = (undefined1)((uint)fVar80 >> 8);
                          uVar74 = (undefined1)((uint)fVar80 >> 0x10);
                          uVar75 = (undefined1)((uint)fVar80 >> 0x18);
                          uVar76 = SUB41(fVar58,0);
                          uVar77 = (undefined1)((uint)fVar58 >> 8);
                          uVar78 = (undefined1)((uint)fVar58 >> 0x10);
                          uVar79 = (undefined1)((uint)fVar58 >> 0x18);
                        }
                        if (uVar44 <= uVar35) goto LAB_10ac67594;
                        plVar19 = (long *)(lStack_150 + uVar35 * 0x18);
                        lVar42 = plVar19[1] - *plVar19;
                        if (lVar42 != 0) {
                          fVar82 = (float)(ulong)(lVar42 >> 2);
                          fVar58 = (float)CONCAT13(uVar71,CONCAT12(uVar70,CONCAT11(uVar69,uVar68)))
                                   / fVar82;
                          fVar80 = (float)CONCAT13(uVar79,CONCAT12(uVar78,CONCAT11(uVar77,uVar76)))
                                   / fVar82;
                          *(ulong *)(pfVar41 + 2) =
                               CONCAT17((char)((uint)fVar80 >> 0x18),
                                        CONCAT16((char)((uint)fVar80 >> 0x10),
                                                 CONCAT15((char)((uint)fVar80 >> 8),
                                                          CONCAT14(SUB41(fVar80,0),
                                                                   (float)CONCAT13(uVar75,CONCAT12(
                                                  uVar74,CONCAT11(uVar73,uVar72))) / fVar82))));
                          *(ulong *)pfVar41 =
                               CONCAT17((char)((uint)fVar58 >> 0x18),
                                        CONCAT16((char)((uint)fVar58 >> 0x10),
                                                 CONCAT15((char)((uint)fVar58 >> 8),
                                                          CONCAT14(SUB41(fVar58,0),
                                                                   (float)CONCAT13(uVar67,CONCAT12(
                                                  uVar66,CONCAT11(uVar65,uVar64))) / fVar82))));
                          pfVar41[4] = fVar56 / fVar82;
                          pfVar41[5] = fVar83 / fVar82;
                        }
                        uVar35 = (ulong)((int)uVar35 + 1);
                      } while (uVar35 <= uVar53 && uVar53 - uVar35 != 0);
                    }
                    FUN_10a0d3194(&plStack_130,&uStack_198);
                    FUN_10a7f4aac(lStack_1b0 + 0x40,&plStack_130);
                    plVar19 = (long *)CONCAT44(uStack_194,uStack_198);
                    if (plVar19 != (long *)0x0) {
                      __ZdlPv();
                    }
                    plVar21 = plStack_f0;
                    if (plStack_f0 != (long *)0x0) {
                      plVar3 = plStack_f0 + 1;
                      do {
                        lVar52 = *plVar3;
                        cVar7 = '\x01';
                        bVar46 = (bool)ExclusiveMonitorPass(plVar3,0x10);
                        if (bVar46) {
                          *plVar3 = lVar52 + -1;
                          cVar7 = ExclusiveMonitorsStatus();
                        }
                      } while (cVar7 != '\0');
                      if (lVar52 == 0) {
                        (**(code **)(*plStack_f0 + 0x10))(plStack_f0);
                        __ZNSt3__119__shared_weak_count14__release_weakEv();
                        plVar19 = plVar21;
                      }
                    }
                    if ((long)plStack_120 < 0) {
                      plVar19 = plStack_130;
                      __ZdlPv();
                    }
                    lVar27 = lVar27 + 0x48;
                  } while (lVar27 != lVar32);
                }
                FUN_10ac65af0(param_1,&lStack_150,*(undefined8 *)(lStack_1b8 + 0x38),
                              *(undefined8 *)(lStack_1b8 + 0x40),&lStack_1b0);
              }
            }
          }
          *(undefined1 *)((long)param_1 + 0x12d) = 1;
          plStack_130 = &lStack_150;
          func_0x00010a7bf8dc(&plStack_130);
        }
      }
      if (*(char *)((long)param_1 + 0x12d) == '\x01') {
        FUN_10ac645fc(param_1,&lStack_1b0);
        *(undefined1 *)((long)param_1 + 0x12d) = 0;
      }
      else {
        puVar22 = (undefined8 *)0x1;
        FUN_10a061940(param_1);
        (**(code **)(*(long *)*puVar22 + 0x80))((long *)*puVar22,lStack_1b0,1,0);
      }
      plVar19 = plStack_1a8;
      if (plStack_1a8 != (long *)0x0) {
        plVar21 = plStack_1a8 + 1;
        do {
          lVar27 = *plVar21;
          cVar7 = '\x01';
          bVar46 = (bool)ExclusiveMonitorPass(plVar21,0x10);
          if (bVar46) {
            *plVar21 = lVar27 + -1;
            cVar7 = ExclusiveMonitorsStatus();
          }
        } while (cVar7 != '\0');
        if (lVar27 == 0) {
          (**(code **)(*plStack_1a8 + 0x10))(plStack_1a8);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar19);
        }
      }
      goto LAB_10ac66ea4;
    }
  }
  FUN_10a00946c(&UNK_10f69ebda);
LAB_10ac67594:
                    /* WARNING: Does not return */
  pcVar16 = (code *)SoftwareBreakpoint(1,0x10ac67598);
  (*pcVar16)();
}



/* Entry: 10ac676cc; end: 10ac67eaf;  */

void FUN_10ac676cc(long param_1,long param_2,long *param_3)

{
  long *plVar1;
  undefined4 uVar2;
  char cVar3;
  long lVar4;
  code *pcVar5;
  long *plVar6;
  long *plVar7;
  undefined8 in_x6;
  undefined8 in_x7;
  long lVar8;
  ulong uVar9;
  undefined8 *puVar10;
  uint *puVar11;
  uint *puVar12;
  long lVar13;
  long lVar14;
  int iVar15;
  uint *puVar16;
  ulong uVar17;
  ulong uVar18;
  ulong uVar19;
  float *pfVar20;
  float *pfVar21;
  long lVar22;
  ulong uVar23;
  bool bVar24;
  long lVar25;
  uint *puVar26;
  uint *puVar27;
  uint *puVar28;
  long lVar29;
  ulong uVar30;
  uint uVar31;
  float fVar32;
  float fVar33;
  undefined8 uVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  undefined8 uVar39;
  float fVar40;
  long lStack_100;
  long lStack_f8;
  undefined8 uStack_f0;
  long *plStack_e8;
  long *plStack_e0;
  long *plStack_d0;
  undefined8 uStack_c8;
  long lStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined4 uStack_a0;
  long lStack_98;
  long *plStack_90;
  
  if (*(char *)(param_1 + 300) != '\x01') {
    return;
  }
  if (*(long *)(param_1 + 0x110) == 0) {
    return;
  }
  plVar6 = *(long **)(*(long *)(param_1 + 0x110) + 0xe0);
  if (plVar6 == (long *)0x0) {
    return;
  }
  (**(code **)(*plVar6 + 0x90))();
  if (*plVar6 == 0) {
    return;
  }
  *(undefined1 *)(param_1 + 300) = 0;
  *(undefined8 *)(param_1 + 0x138) = *(undefined8 *)(param_1 + 0x130);
  lVar22 = *param_3;
  lVar29 = *(long *)(lVar22 + 0x40);
  lVar25 = *(long *)(lVar22 + 0x48);
  lVar8 = lVar22;
  if (lVar25 != lVar29) {
    do {
      lVar25 = lVar25 + -0x48;
      func_0x00010a0d3694(lVar25);
    } while (lVar25 != lVar29);
    lVar8 = *param_3;
  }
  *(long *)(lVar22 + 0x48) = lVar29;
  FUN_10a0d8988(lVar8 + 0x58);
  lVar8 = *param_3;
  lVar29 = *(long *)(lVar8 + 0x88);
  lVar25 = *(long *)(lVar8 + 0x90);
  while (lVar25 != lVar29) {
    lVar25 = lVar25 + -0x30;
    func_0x00010a0d3994(lVar25);
  }
  *(long *)(lVar8 + 0x90) = lVar29;
  lStack_100 = 0;
  lStack_f8 = 0;
  uStack_f0 = 0;
  if (2 < *(uint *)(param_1 + 0x124)) {
    FUN_10a00946c(&UNK_10f69fb23);
LAB_10ac67e3c:
                    /* WARNING: Does not return */
    pcVar5 = (code *)SoftwareBreakpoint(1,0x10ac67e40);
    (*pcVar5)();
  }
  uVar2 = *(undefined4 *)(&UNK_10e50a6e4 + (ulong)*(uint *)(param_1 + 0x124) * 4);
  plVar6 = *(long **)(*(long *)(param_1 + 0x110) + 0xe0);
  (**(code **)(*plVar6 + 0x90))();
  lVar29 = *plVar6 + 0xf0;
  FUN_10ab6f6c8(lVar29,uVar2);
  if (((lVar29 == 0) || (*(int *)(lVar29 + 0x24) != 5)) || (*(int *)(lVar29 + 0x28) == 0)) {
    if ((bRam000000011330a9e8 & 1) != 0) {
      func_0x00010ae06f08(0,1,&UNK_10f69ec17,&UNK_10f69fb3a,0xbc,&UNK_10f69fc11,in_x6,in_x7,
                          *(undefined4 *)(param_1 + 0x124));
    }
    goto LAB_10ac678a0;
  }
  lVar25 = *(long *)(param_2 + 0x38);
  lVar8 = *(long *)(param_2 + 0x40);
  plVar6 = *(long **)(*(long *)(param_1 + 0x110) + 0xe0);
  if (plVar6 == (long *)0x0) {
    lVar22 = 0;
LAB_10ac678e4:
    iVar15 = 4;
  }
  else {
    (**(code **)(*plVar6 + 0x90))();
    lVar22 = *plVar6;
    uVar31 = *(uint *)(lVar29 + 0x24);
    if (uVar31 < 8) {
      iVar15 = 1;
      if ((1 << (ulong)(uVar31 & 0x1f) & 0x58U) == 0) {
        uVar31 = 1 << (ulong)(uVar31 & 0x1f);
        if ((uVar31 & 6) == 0) {
          if ((uVar31 & 0xa0) != 0) goto LAB_10ac678e4;
          goto LAB_10ac6785c;
        }
      }
      else {
        iVar15 = 2;
      }
    }
    else {
LAB_10ac6785c:
      iVar15 = 0;
    }
  }
  uVar18 = (lVar8 - lVar25 >> 2) * -0x5555555555555555;
  if (*(int *)(lVar29 + 0x28) * iVar15 == 0xc) {
    lVar29 = *(long *)(lVar22 + 0x10) + (ulong)*(uint *)(lVar29 + 0x30);
    uVar30 = (ulong)*(uint *)(lVar22 + 0xf0);
  }
  else {
    lVar29 = 0;
    uVar30 = 0;
  }
  func_0x00010986e3dc(&lStack_100,uVar18);
  plVar6 = *(long **)(*(long *)(param_1 + 0x110) + 0xe0);
  if (plVar6 == (long *)0x0) {
    lVar22 = 0;
  }
  else {
    (**(code **)(*plVar6 + 0x90))();
    lVar22 = *plVar6;
  }
  uVar31 = *(uint *)(lVar22 + 0xf0);
  if (uVar31 == 0) {
    puVar26 = (uint *)0x0;
    puVar27 = (uint *)0x0;
    uVar23 = 0;
  }
  else {
    uVar23 = 0;
    if ((ulong)uVar31 != 0) {
      uVar23 = (ulong)(*(long *)(lVar22 + 0x18) - *(long *)(lVar22 + 0x10)) / (ulong)uVar31;
    }
    uVar23 = uVar23 & 0xffffffff;
    if (uVar23 == 0) {
      puVar26 = (uint *)0x0;
      puVar27 = (uint *)0x0;
    }
    else {
      puVar26 = (uint *)(uVar23 * 8);
      __Znwm();
      _bzero();
      uVar9 = 0;
      puVar27 = puVar26 + uVar23 * 2;
      puVar16 = (uint *)(lVar29 + 4);
      puVar11 = puVar26 + 1;
      do {
        uVar31 = *puVar16;
        puVar11[-1] = (uint)uVar9;
        *puVar11 = uVar31;
        uVar9 = uVar9 + 1;
        puVar16 = (uint *)((long)puVar16 + uVar30);
        puVar11 = puVar11 + 2;
      } while (uVar23 != uVar9);
    }
  }
  lVar22 = 0;
  if ((long)puVar27 - (long)puVar26 != 0) {
    lVar22 = LZCOUNT(uVar23) * -2 + 0x7e;
  }
  FUN_10ac7e648(puVar26,puVar27,lVar22,1);
  if (lVar8 == lVar25) {
    if (puVar26 != (uint *)0x0) {
      __ZdlPv(puVar26);
    }
  }
  else {
    bVar24 = false;
    uVar23 = 0;
    fVar38 = *(float *)(param_1 + 0x128);
    do {
      if (puVar27 != puVar26) {
        puVar10 = (undefined8 *)(lVar25 + uVar23 * 0xc);
        uVar39 = *puVar10;
        fVar40 = *(float *)(puVar10 + 1);
        fVar33 = *(float *)((long)puVar10 + 4) - fVar38;
        fVar32 = fVar38 + *(float *)((long)puVar10 + 4);
        puVar11 = puVar27;
        puVar16 = puVar26;
        uVar9 = (long)puVar27 - (long)puVar26 >> 3;
        do {
          uVar19 = uVar9 >> 1;
          puVar12 = puVar16 + uVar19 * 2;
          if (fVar33 <= (float)puVar12[1]) {
            if (fVar32 < (float)puVar12[1]) goto LAB_10ac67a8c;
            puVar28 = puVar12;
            if (uVar9 != 1) {
              do {
                uVar9 = uVar19 >> 1;
                puVar28 = puVar16 + uVar9 * 2 + 2;
                uVar19 = uVar19 + (uVar19 >> 1 ^ 0xffffffffffffffff);
                if (fVar33 <= (float)puVar16[uVar9 * 2 + 1]) {
                  puVar28 = puVar16;
                  uVar19 = uVar9;
                }
                puVar16 = puVar28;
              } while (uVar19 != 0);
            }
            puVar12 = puVar12 + 2;
            if ((long)puVar11 - (long)puVar12 != 0) {
              uVar9 = (long)puVar11 - (long)puVar12 >> 3;
              do {
                uVar17 = uVar9 >> 1;
                uVar19 = uVar9 + (uVar9 >> 1 ^ 0xffffffffffffffff);
                uVar9 = uVar17;
                if ((float)puVar12[uVar17 * 2 + 1] <= fVar32) {
                  uVar9 = uVar19;
                  puVar12 = puVar12 + uVar17 * 2 + 2;
                }
              } while (uVar9 != 0);
            }
            for (; puVar28 < puVar12; puVar28 = puVar28 + 2) {
              puVar10 = (undefined8 *)(lVar29 + uVar30 * *puVar28);
              fVar32 = fVar40 - *(float *)(puVar10 + 1);
              uVar34 = *puVar10;
              fVar33 = (float)uVar39 - (float)uVar34;
              fVar37 = (float)((ulong)uVar39 >> 0x20) - (float)((ulong)uVar34 >> 0x20);
              if (fVar33 * fVar33 + fVar37 * fVar37 + fVar32 * fVar32 <
                  *(float *)(param_1 + 0x128) * *(float *)(param_1 + 0x128)) {
                uVar9 = (lStack_f8 - lStack_100 >> 3) * -0x5555555555555555;
                if (uVar9 < uVar23 || uVar9 - uVar23 == 0) goto LAB_10ac67e3c;
                FUN_10a0e6678(lStack_100 + uVar23 * 0x18,puVar28);
                bVar24 = true;
              }
            }
            break;
          }
          puVar16 = puVar12 + 2;
          uVar19 = uVar9 + ~uVar19;
          puVar12 = puVar11;
LAB_10ac67a8c:
          puVar11 = puVar12;
          uVar9 = uVar19;
        } while (uVar19 != 0);
      }
      uVar23 = uVar23 + 1;
    } while (uVar23 != uVar18);
    if (puVar26 != (uint *)0x0) {
      __ZdlPv(puVar26);
    }
    if (bVar24) {
      lVar25 = *(long *)(param_2 + 0x38);
      lVar8 = *(long *)(param_2 + 0x40);
      plVar6 = *(long **)(*(long *)(param_1 + 0x110) + 0xe0);
      (**(code **)(*plVar6 + 0x90))();
      lVar29 = *(long *)(*plVar6 + 0x40);
      lVar22 = *(long *)(*plVar6 + 0x48);
      if (lVar29 != lVar22) {
        lVar13 = lVar8 - lVar25 >> 2;
        uVar18 = lVar13 * -0x5555555555555555;
        do {
          uStack_a0 = 0;
          uStack_b8 = 0;
          lStack_c0 = 0;
          uStack_a8 = 0;
          uStack_b0 = 0;
          uStack_c8 = 0;
          plStack_d0 = (long *)0x0;
          FUN_10a0d3454();
          plStack_90 = (long *)plVar6[1];
          lStack_98 = *plVar6;
          if (plVar6[1] != 0) {
            plVar6 = (long *)(plVar6[1] + 8);
            do {
              cVar3 = '\x01';
              bVar24 = (bool)ExclusiveMonitorPass(plVar6,0x10);
              if (bVar24) {
                *plVar6 = *plVar6 + 1;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
          }
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
                    (&plStack_d0,lVar29);
          uStack_b8 = CONCAT44(uStack_b8._4_4_,*(undefined4 *)(lVar29 + 0x18));
          FUN_10a0dc020(&plStack_e8,lVar13 * 8);
          if (lVar8 != lVar25) {
            uVar30 = 0;
            lVar14 = **(long **)(lVar29 + 0x38);
            do {
              pfVar20 = (float *)(plStack_e8 + uVar30 * 3);
              pfVar20[0] = 0.0;
              pfVar20[1] = 0.0;
              pfVar20[2] = 0.0;
              pfVar20[3] = 0.0;
              pfVar20[4] = 0.0;
              pfVar20[5] = 0.0;
              uVar23 = (lStack_f8 - lStack_100 >> 3) * -0x5555555555555555;
              if (uVar23 < uVar30 || uVar23 - uVar30 == 0) goto LAB_10ac67e3c;
              plVar6 = (long *)(lStack_100 + uVar30 * 0x18);
              puVar27 = (uint *)*plVar6;
              puVar26 = (uint *)plVar6[1];
              if (puVar27 == puVar26) {
                fVar33 = 0.0;
                fVar40 = 0.0;
                fVar37 = 0.0;
                fVar35 = 0.0;
                fVar38 = 0.0;
                fVar32 = 0.0;
              }
              else {
                fVar38 = 0.0;
                fVar32 = 0.0;
                fVar35 = 0.0;
                fVar37 = 0.0;
                fVar40 = 0.0;
                fVar33 = 0.0;
                do {
                  puVar16 = puVar27 + 1;
                  pfVar21 = (float *)(lVar14 + (ulong)*puVar27 * 0x18);
                  fVar33 = fVar33 + *pfVar21;
                  *pfVar20 = fVar33;
                  fVar40 = fVar40 + pfVar21[1];
                  pfVar20[1] = fVar40;
                  fVar37 = fVar37 + pfVar21[2];
                  pfVar20[2] = fVar37;
                  fVar35 = fVar35 + pfVar21[3];
                  pfVar20[3] = fVar35;
                  fVar32 = fVar32 + pfVar21[4];
                  pfVar20[4] = fVar32;
                  fVar38 = fVar38 + pfVar21[5];
                  pfVar20[5] = fVar38;
                  puVar27 = puVar16;
                } while (puVar16 != puVar26);
                uVar23 = (lStack_f8 - lStack_100 >> 3) * -0x5555555555555555;
              }
              if (uVar23 <= uVar30) goto LAB_10ac67e3c;
              plVar6 = (long *)(lStack_100 + uVar30 * 0x18);
              lVar4 = plVar6[1] - *plVar6;
              if (lVar4 != 0) {
                fVar36 = (float)(ulong)(lVar4 >> 2);
                *(long *)(pfVar20 + 2) = CONCAT44(fVar35 / fVar36,fVar37 / fVar36);
                *(long *)pfVar20 = CONCAT44(fVar40 / fVar36,fVar33 / fVar36);
                pfVar20[4] = fVar32 / fVar36;
                pfVar20[5] = fVar38 / fVar36;
              }
              uVar30 = (ulong)((int)uVar30 + 1);
            } while (uVar30 <= uVar18 && uVar18 - uVar30 != 0);
          }
          FUN_10a0d3194(&plStack_d0,&plStack_e8);
          FUN_10a7f4aac(*param_3 + 0x40,&plStack_d0);
          plVar6 = plStack_e8;
          if (plStack_e8 != (long *)0x0) {
            plStack_e0 = plStack_e8;
            __ZdlPv();
          }
          plVar7 = plStack_90;
          if (plStack_90 != (long *)0x0) {
            plVar1 = plStack_90 + 1;
            do {
              lVar14 = *plVar1;
              cVar3 = '\x01';
              bVar24 = (bool)ExclusiveMonitorPass(plVar1,0x10);
              if (bVar24) {
                *plVar1 = lVar14 + -1;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
            if (lVar14 == 0) {
              (**(code **)(*plStack_90 + 0x10))(plStack_90);
              __ZNSt3__119__shared_weak_count14__release_weakEv();
              plVar6 = plVar7;
            }
          }
          if (lStack_c0 < 0) {
            plVar6 = plStack_d0;
            __ZdlPv();
          }
          lVar29 = lVar29 + 0x48;
        } while (lVar29 != lVar22);
      }
      FUN_10ac65af0(param_1,&lStack_100,*(undefined8 *)(param_2 + 0x38),
                    *(undefined8 *)(param_2 + 0x40),param_3);
    }
  }
LAB_10ac678a0:
  *(undefined1 *)(param_1 + 0x12d) = 1;
  plStack_d0 = &lStack_100;
  func_0x00010a7bf8dc(&plStack_d0);
  return;
}



/* Entry: 10ac67eb0; end: 10ac67eb7;  */

/* WARNING: Possible PIC construction at 0x00010ac66fec: Changing call to branch */

void FUN_10ac67eb0(long param_1,long param_2)

{
  undefined1 *puVar1;
  unkbyte9 *pVar2;
  long *plVar3;
  int *piVar4;
  undefined4 uVar5;
  uint uVar6;
  char cVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  float fVar13;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  code *pcVar16;
  long **pplVar17;
  long **pplVar18;
  long *plVar19;
  undefined8 uVar20;
  long *plVar21;
  long *plVar22;
  undefined8 *puVar23;
  undefined *puVar24;
  undefined8 uVar25;
  undefined *puVar26;
  int iVar27;
  long lVar28;
  undefined2 *puVar29;
  uint *puVar30;
  uint *puVar31;
  int iVar32;
  long lVar33;
  uint *puVar34;
  ulong uVar35;
  ulong uVar36;
  uint uVar37;
  ulong uVar38;
  long lVar39;
  uint uVar40;
  undefined8 *puVar41;
  float *pfVar42;
  long lVar43;
  float *pfVar44;
  ulong uVar45;
  undefined8 *puVar46;
  bool bVar47;
  undefined4 *puVar48;
  int *piVar49;
  uint *puVar50;
  uint *puVar51;
  uint *puVar52;
  long lVar53;
  ulong uVar54;
  long lVar55;
  undefined1 *unaff_x29;
  undefined8 unaff_x30;
  uint uVar56;
  float fVar57;
  ulong uVar58;
  float fVar59;
  undefined8 uVar60;
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  undefined1 auVar64 [16];
  undefined1 uVar65;
  undefined1 uVar66;
  undefined1 uVar67;
  undefined1 uVar68;
  undefined1 uVar69;
  undefined1 uVar70;
  undefined1 uVar71;
  undefined1 uVar72;
  undefined1 uVar73;
  undefined1 uVar74;
  undefined1 uVar75;
  undefined1 uVar76;
  undefined1 uVar77;
  undefined1 uVar78;
  undefined1 uVar79;
  undefined1 uVar80;
  float fVar81;
  undefined1 auVar82 [16];
  float fVar83;
  float fVar84;
  ulong auStack_1e0 [2];
  ulong uStack_1d0;
  long lStack_1c8;
  ulong uStack_1c0;
  long lStack_1b8;
  long lStack_1b0;
  long *plStack_1a8;
  undefined4 uStack_198;
  undefined4 uStack_194;
  long lStack_190;
  long lStack_188;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  long lStack_150;
  long *plStack_148;
  undefined8 uStack_140;
  long *plStack_130;
  long *plStack_128;
  long *plStack_120;
  long *plStack_118;
  long *plStack_110;
  long *plStack_108;
  undefined4 uStack_100;
  long *plStack_f8;
  long *plStack_f0;
  long *plStack_e8;
  long *plStack_e0;
  long *plStack_d8;
  long *plStack_d0;
  undefined4 uStack_c8;
  long *aplStack_c0 [2];
  long *plStack_b0;
  char cStack_a9;
  long *plStack_a8;
  long *plStack_a0;
  long *plStack_98;
  undefined4 uStack_90;
  long lStack_88;
  
  plVar22 = (long *)(param_1 + -0xe8);
  puVar1 = &stack0xfffffffffffffff0;
  lStack_88 = *(long *)PTR____stack_chk_guard_11034bdc0;
  *(undefined1 *)(param_1 + 0x46) = 1;
  lVar28 = *(long *)(param_2 + 0x68);
  if (lVar28 == 0) {
LAB_10ac66ea4:
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_88) {
      return;
    }
LAB_10ac6754c:
    ___stack_chk_fail();
  }
  else {
    piVar49 = *(int **)(lVar28 + 0x28);
    piVar4 = *(int **)(lVar28 + 0x30);
    if (piVar49 != piVar4) {
      do {
        if ((*piVar49 == 0) && (piVar49[1] == *(int *)(param_1 + 0x38))) goto LAB_10ac663e8;
        piVar49 = piVar49 + 0x88;
      } while (piVar49 != piVar4);
      goto LAB_10ac66ea4;
    }
LAB_10ac663e8:
    if (((piVar49 == piVar4) || (piVar49 == (int *)0x0)) || (*(long *)(piVar49 + 0x72) == 0))
    goto LAB_10ac66ea4;
    if (*(int *)(*(long *)(lVar28 + 0x40) + 0x30) != 2) {
      if ((bRam000000011330a9e8 >> 1 & 1) == 0) goto LAB_10ac66ea4;
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_88) {
        puVar24 = &UNK_10f69ec58;
        puVar26 = &UNK_10f69ecc3;
        uVar60 = 1;
        uVar20 = 2;
        uVar25 = 0x1d2;
        goto SUB_10ae06f08;
      }
      goto LAB_10ac6754c;
    }
    plVar19 = plVar22;
    lStack_1b8 = *(long *)(lVar28 + 0x40);
    (**(code **)(*plVar22 + 0x90))();
    lStack_1b0 = *plVar19;
    plStack_1a8 = (long *)plVar19[1];
    if (plStack_1a8 != (long *)0x0) {
      plVar19 = plStack_1a8 + 1;
      do {
        cVar7 = '\x01';
        bVar47 = (bool)ExclusiveMonitorPass(plVar19,0x10);
        if (bVar47) {
          *plVar19 = *plVar19 + 1;
          cVar7 = ExclusiveMonitorsStatus();
        }
      } while (cVar7 != '\0');
    }
    if (lStack_1b0 == 0) {
      *(undefined1 *)(param_1 + 0x45) = 1;
      pplVar17 = &plStack_130;
      FUN_10a0d0194(&lStack_150);
      FUN_10ab6e728();
      if (*(char *)((long)pplVar17 + 0x17) < '\0') {
        pplVar18 = &plStack_130;
        func_0x000107c3192c(pplVar18,*pplVar17,pplVar17[1]);
      }
      else {
        plStack_128 = pplVar17[1];
        plStack_130 = *pplVar17;
        plStack_120 = pplVar17[2];
        pplVar18 = pplVar17;
      }
      plStack_118 = pplVar17[3];
      uStack_100 = *(undefined4 *)(pplVar17 + 6);
      plStack_108 = pplVar17[5];
      plStack_110 = pplVar17[4];
      pplVar17 = &plStack_f8;
      FUN_10ab6e9d8();
      if (*(char *)((long)pplVar18 + 0x17) < '\0') {
        func_0x000107c3192c(pplVar17,*pplVar18,pplVar18[1]);
      }
      else {
        plStack_e8 = pplVar18[2];
        plStack_f0 = pplVar18[1];
        plStack_f8 = *pplVar18;
        pplVar17 = pplVar18;
      }
      plStack_e0 = pplVar18[3];
      plStack_d0 = pplVar18[5];
      plStack_d8 = pplVar18[4];
      uStack_c8 = *(undefined4 *)(pplVar18 + 6);
      FUN_10ab6f020();
      if (*(char *)((long)pplVar17 + 0x17) < '\0') {
        func_0x000107c3192c(aplStack_c0,*pplVar17,pplVar17[1]);
      }
      else {
        plStack_b0 = pplVar17[2];
        aplStack_c0[1] = pplVar17[1];
        aplStack_c0[0] = *pplVar17;
      }
      plStack_a8 = pplVar17[3];
      plStack_98 = pplVar17[5];
      plStack_a0 = pplVar17[4];
      uStack_90 = *(undefined4 *)(pplVar17 + 6);
      FUN_10ab6f520(&uStack_198,&plStack_130,3);
      lVar28 = 0;
      do {
        if ((&cStack_a9)[lVar28] < '\0') {
          __ZdlPv(*(undefined8 *)((long)aplStack_c0 + lVar28));
        }
        lVar28 = lVar28 + -0x38;
      } while (lVar28 != -0xa8);
      if (*(char *)(param_1 + -0x2f) != '\x01') {
        *(undefined1 *)(param_1 + -0x2f) = 1;
        (**(code **)(*plVar22 + 0xa0))(plVar22);
      }
      if (*(char *)(param_1 + -0x2e) != '\x01') {
        *(undefined1 *)(param_1 + -0x2e) = 1;
        (**(code **)(*plVar22 + 0xa0))(plVar22);
      }
      lVar28 = lStack_150;
      *(undefined4 *)(lStack_150 + 0xf0) = uStack_198;
      if ((undefined4 *)(lStack_150 + 0xf0) != &uStack_198) {
        FUN_10a1903c4(lStack_150 + 0xf8,lStack_190,lStack_188,
                      (lStack_188 - lStack_190 >> 3) * 0x6db6db6db6db6db7);
      }
      *(undefined8 *)(lVar28 + 0x118) = uStack_170;
      *(undefined8 *)(lVar28 + 0x110) = uStack_178;
      *(undefined8 *)(lVar28 + 0x128) = uStack_160;
      *(undefined8 *)(lVar28 + 0x120) = uStack_168;
      *(undefined8 *)(lVar28 + 0x130) = uStack_158;
      *(undefined8 *)(lStack_150 + 0xe8) = 1;
      plStack_130 = &lStack_190;
      func_0x00010a190844(&plStack_130);
      plVar21 = plStack_148;
      lStack_1b0 = lStack_150;
      plVar19 = plStack_1a8;
      lStack_150 = 0;
      plStack_148 = (long *)0x0;
      plStack_1a8 = plVar21;
      if (plVar19 != (long *)0x0) {
        plVar21 = plVar19 + 1;
        do {
          lVar28 = *plVar21;
          cVar7 = '\x01';
          bVar47 = (bool)ExclusiveMonitorPass(plVar21,0x10);
          if (bVar47) {
            *plVar21 = lVar28 + -1;
            cVar7 = ExclusiveMonitorsStatus();
          }
        } while (cVar7 != '\0');
        if (lVar28 == 0) {
          (**(code **)(*plVar19 + 0x10))(plVar19);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar19);
        }
      }
      plVar19 = plStack_148;
      if (plStack_148 != (long *)0x0) {
        plVar21 = plStack_148 + 1;
        do {
          lVar28 = *plVar21;
          cVar7 = '\x01';
          bVar47 = (bool)ExclusiveMonitorPass(plVar21,0x10);
          if (bVar47) {
            *plVar21 = lVar28 + -1;
            cVar7 = ExclusiveMonitorsStatus();
          }
        } while (cVar7 != '\0');
        if (lVar28 == 0) {
          (**(code **)(*plStack_148 + 0x10))(plStack_148);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar19);
        }
      }
    }
    lVar28 = lStack_1b0;
    if (((*(long *)(param_1 + 0x28) == 0) ||
        (plVar19 = *(long **)(*(long *)(param_1 + 0x28) + 0xe0), plVar19 == (long *)0x0)) ||
       ((**(code **)(*plVar19 + 0x90))(), *plVar19 == 0)) {
      uVar56 = *(uint *)(lVar28 + 0x130);
      if (uVar56 != 0xffffffff) {
        uVar38 = (*(long *)(lVar28 + 0x100) - *(long *)(lVar28 + 0xf8) >> 3) * 0x6db6db6db6db6db7;
        if (uVar38 < uVar56 || uVar38 - uVar56 == 0) {
          FUN_10ab725fc();
          goto LAB_10ac67594;
        }
        if (*(long *)(lVar28 + 0xf8) != 0) {
          FUN_10ab6fbd0(lVar28 + 0xf0,8);
        }
      }
      *(undefined8 *)(param_1 + 0x50) = *(undefined8 *)(param_1 + 0x48);
    }
    else {
      plVar19 = *(long **)(*(long *)(param_1 + 0x28) + 0xe0);
      if (plVar19 == (long *)0x0) {
        lVar33 = 0;
      }
      else {
        (**(code **)(*plVar19 + 0x90))();
        lVar33 = *plVar19;
      }
      uVar56 = *(uint *)(lVar33 + 0x130);
      if (uVar56 != 0xffffffff) {
        uVar38 = (*(long *)(lVar33 + 0x100) - *(long *)(lVar33 + 0xf8) >> 3) * 0x6db6db6db6db6db7;
        if (uVar56 <= uVar38 && uVar38 - uVar56 != 0) {
          if (*(long *)(lVar33 + 0xf8) != 0) {
            uVar56 = *(uint *)(lVar28 + 0x130);
            if (uVar56 != 0xffffffff) {
              uVar38 = (*(long *)(lVar28 + 0x100) - *(long *)(lVar28 + 0xf8) >> 3) *
                       0x6db6db6db6db6db7;
              if (uVar38 < uVar56 || uVar38 - uVar56 == 0) goto LAB_10ac67580;
              if (*(long *)(lVar28 + 0xf8) != 0) goto LAB_10ac667bc;
            }
            FUN_10ab6eee0();
            FUN_10ab6f958(lVar28 + 0xf8,plVar19);
            FUN_10ab6f86c(lVar28 + 0xf0);
            goto LAB_10ac667bc;
          }
          goto LAB_10ac66ddc;
        }
LAB_10ac67580:
        FUN_10ab725fc();
        goto LAB_10ac67594;
      }
LAB_10ac66ddc:
      uVar56 = *(uint *)(lVar28 + 0x130);
      if (uVar56 != 0xffffffff) {
        uVar38 = (*(long *)(lVar28 + 0x100) - *(long *)(lVar28 + 0xf8) >> 3) * 0x6db6db6db6db6db7;
        if (uVar38 < uVar56 || uVar38 - uVar56 == 0) goto LAB_10ac67580;
        if (*(long *)(lVar28 + 0xf8) != 0) {
          FUN_10ab6fbd0(lVar28 + 0xf0,8);
        }
      }
    }
LAB_10ac667bc:
    lVar28 = *(long *)(piVar49 + 0x72);
    puVar23 = *(undefined8 **)(lVar28 + 0x18);
    lVar33 = *(long *)(lVar28 + 0x10);
    iVar32 = (int)((ulong)(*(long *)(lVar28 + 0x20) - (long)puVar23) >> 2) * -0x55555555;
    puVar48 = *(undefined4 **)(lVar33 + 0x20);
    lVar28 = *(long *)(lVar33 + 0x28);
    lVar33 = *(long *)(lVar33 + 0x38);
    uVar38 = (ulong)iVar32;
    FUN_10a1322a0(&plStack_130,uVar38);
    uVar54 = lVar28 - (long)puVar48;
    func_0x000109699628((int)((ulong)((long)plStack_128 - (long)plStack_130) >> 2) * -0x55555555,
                        plStack_130,uVar54 >> 2 & 0xffffffff,puVar48,iVar32,puVar23,0,0);
    uVar5 = *(undefined4 *)(puVar23 + 1);
    *(undefined8 *)(lStack_1b0 + 0x144) = *puVar23;
    *(undefined4 *)(lStack_1b0 + 0x14c) = uVar5;
    uVar5 = *(undefined4 *)(puVar23 + 1);
    *(undefined8 *)(lStack_1b0 + 0x138) = *puVar23;
    *(undefined4 *)(lStack_1b0 + 0x140) = uVar5;
    uVar56 = *(uint *)(lStack_1b0 + 0x110);
    if (uVar56 == 0xffffffff) {
      lVar28 = 0;
    }
    else {
      uVar36 = (*(long *)(lStack_1b0 + 0x100) - *(long *)(lStack_1b0 + 0xf8) >> 3) *
               0x6db6db6db6db6db7;
      if (uVar36 < uVar56 || uVar36 - uVar56 == 0) {
        FUN_10ab725fc();
        goto LAB_10ac67594;
      }
      lVar28 = *(long *)(lStack_1b0 + 0xf8) + (ulong)uVar56 * 0x38;
    }
    uVar56 = *(uint *)(lStack_1b0 + 0x114);
    if (uVar56 == 0xffffffff) {
      lVar55 = 0;
    }
    else {
      uVar36 = (*(long *)(lStack_1b0 + 0x100) - *(long *)(lStack_1b0 + 0xf8) >> 3) *
               0x6db6db6db6db6db7;
      if (uVar36 < uVar56 || uVar36 - uVar56 == 0) {
        FUN_10ab725fc();
        goto LAB_10ac67594;
      }
      lVar55 = *(long *)(lStack_1b0 + 0xf8) + (ulong)uVar56 * 0x38;
    }
    uVar56 = *(uint *)(lStack_1b0 + 0x120);
    if (uVar56 == 0xffffffff) {
      lVar53 = 0;
    }
    else {
      uVar36 = (*(long *)(lStack_1b0 + 0x100) - *(long *)(lStack_1b0 + 0xf8) >> 3) *
               0x6db6db6db6db6db7;
      if (uVar36 < uVar56 || uVar36 - uVar56 == 0) {
        FUN_10ab725fc();
        goto LAB_10ac67594;
      }
      lVar53 = *(long *)(lStack_1b0 + 0xf8) + (ulong)uVar56 * 0x38;
    }
    if (((lVar28 != 0) && (*(int *)(lVar28 + 0x24) == 5)) &&
       (((*(int *)(lVar28 + 0x28) == 3 &&
         ((((lVar55 != 0 && (*(int *)(lVar55 + 0x24) == 5)) && (*(int *)(lVar55 + 0x28) == 3)) &&
          ((lVar53 != 0 && (*(int *)(lVar53 + 0x24) == 5)))))) && (*(int *)(lVar53 + 0x28) == 2))))
    {
      lVar43 = *(long *)(param_1 + 0x48);
      if (lVar43 == *(long *)(param_1 + 0x50)) {
        FUN_10ab4a154(lStack_1b0,uVar38);
        uVar56 = *(int *)(lVar28 + 0x24) - 1;
        if (uVar56 < 7) {
          iVar27 = *(int *)(&UNK_10e50a6c8 + (ulong)uVar56 * 4);
        }
        else {
          iVar27 = 0;
        }
        if (*(int *)(lVar28 + 0x28) * iVar27 == 0xc) {
          lVar28 = *(long *)(lStack_1b0 + 0x10) + (ulong)*(uint *)(lVar28 + 0x30);
          uVar56 = *(uint *)(lStack_1b0 + 0xf0);
        }
        else {
          lVar28 = 0;
          uVar56 = 0;
        }
        uVar37 = *(int *)(lVar55 + 0x24) - 1;
        if (uVar37 < 7) {
          iVar27 = *(int *)(&UNK_10e50a6c8 + (ulong)uVar37 * 4);
        }
        else {
          iVar27 = 0;
        }
        if (*(int *)(lVar55 + 0x28) * iVar27 == 0xc) {
          lVar55 = *(long *)(lStack_1b0 + 0x10) + (ulong)*(uint *)(lVar55 + 0x30);
          uVar37 = *(uint *)(lStack_1b0 + 0xf0);
        }
        else {
          lVar55 = 0;
          uVar37 = 0;
        }
        uVar40 = *(int *)(lVar53 + 0x24) - 1;
        if (uVar40 < 7) {
          iVar27 = *(int *)(&UNK_10e50a6c8 + (ulong)uVar40 * 4);
        }
        else {
          iVar27 = 0;
        }
        if (*(int *)(lVar53 + 0x28) * iVar27 == 8) {
          lVar53 = *(long *)(lStack_1b0 + 0x10) + (ulong)*(uint *)(lVar53 + 0x30);
          uVar40 = *(uint *)(lStack_1b0 + 0xf0);
        }
        else {
          lVar53 = 0;
          uVar40 = 0;
        }
        if (iVar32 != 0) {
          lVar39 = 0;
          lVar43 = 0;
          uVar36 = 0;
          do {
            puVar41 = (undefined8 *)((long)puVar23 + (long)(int)((ulong)lVar39 >> 0x20) * 0xc);
            uVar60 = *puVar41;
            uVar58 = *(ulong *)((long)puVar41 + 4);
            uVar45 = uVar36 & 0xffffffff;
            pfVar42 = (float *)(lVar28 + uVar45 * uVar56);
            fVar84 = (float)uVar60;
            *pfVar42 = fVar84;
            *(ulong *)(pfVar42 + 1) = uVar58;
            uVar35 = ((long)plStack_128 - (long)plStack_130 >> 2) * -0x5555555555555555;
            if (uVar35 < uVar36 || uVar35 - uVar36 == 0) goto LAB_10ac67594;
            puVar41 = (undefined8 *)(lVar55 + uVar45 * uVar37);
            uVar20 = *(undefined8 *)((long)plStack_130 + lVar43);
            *(undefined4 *)(puVar41 + 1) =
                 *(undefined4 *)((undefined8 *)((long)plStack_130 + lVar43) + 1);
            *puVar41 = uVar20;
            *(undefined8 *)(lVar53 + uVar45 * uVar40) =
                 *(undefined8 *)(lVar33 + (lVar39 >> 0x20) * 8);
            pVar2 = (unkbyte9 *)(lStack_1b0 + 0x138);
            uVar20 = *(undefined8 *)(lStack_1b0 + 0x140);
            uVar65 = (undefined1)((ulong)uVar20 >> 8);
            uVar66 = (undefined1)((ulong)uVar20 >> 0x10);
            uVar67 = (undefined1)((ulong)uVar20 >> 0x18);
            uVar68 = (undefined1)((ulong)uVar20 >> 0x20);
            uVar69 = (undefined1)((ulong)uVar20 >> 0x28);
            uVar70 = (undefined1)((ulong)uVar20 >> 0x30);
            uVar71 = (undefined1)((ulong)uVar20 >> 0x38);
            auVar82[9] = uVar65;
            auVar82._0_9_ = *pVar2;
            auVar82[10] = uVar66;
            auVar82[0xb] = uVar67;
            auVar82[0xc] = uVar68;
            auVar82[0xd] = uVar69;
            auVar82[0xe] = uVar70;
            auVar82[0xf] = uVar71;
            auVar11[9] = uVar65;
            auVar11._0_9_ = *pVar2;
            auVar11[10] = uVar66;
            auVar11[0xb] = uVar67;
            auVar11[0xc] = uVar68;
            auVar11[0xd] = uVar69;
            auVar11[0xe] = uVar70;
            auVar11[0xf] = uVar71;
            auVar82 = NEON_ext(auVar82,auVar11,8,1);
            fVar57 = (float)(uVar58 >> 0x20);
            auVar63._4_4_ =
                 -(uint)((float)((ulong)*(undefined8 *)pVar2 >> 0x20) <
                        (float)((ulong)uVar60 >> 0x20));
            auVar63._0_4_ = -(uint)((float)*(undefined8 *)pVar2 < fVar84);
            auVar63._12_4_ = -(uint)(fVar84 < auVar82._4_4_);
            auVar63._8_4_ = -(uint)((float)uVar20 < fVar57);
            auVar12[9] = uVar65;
            auVar12._0_9_ = *pVar2;
            auVar12[10] = uVar66;
            auVar12[0xb] = uVar67;
            auVar12[0xc] = uVar68;
            auVar12[0xd] = uVar69;
            auVar12[0xe] = uVar70;
            auVar12[0xf] = uVar71;
            auVar15._8_4_ = fVar57;
            auVar15._0_8_ = uVar60;
            auVar15._12_4_ = fVar84;
            auVar64[9] = uVar65;
            auVar64._0_9_ = *pVar2;
            auVar64[10] = uVar66;
            auVar64[0xb] = uVar67;
            auVar64[0xc] = uVar68;
            auVar64[0xd] = uVar69;
            auVar64[0xe] = uVar70;
            auVar64[0xf] = uVar71;
            auVar64 = auVar64 ^ (auVar12 ^ auVar15) & auVar63;
            *(long *)(lStack_1b0 + 0x140) = auVar64._8_8_;
            *(long *)pVar2 = auVar64._0_8_;
            uVar45 = *(ulong *)(lStack_1b0 + 0x148);
            iVar32 = -(uint)(fVar57 < (float)(uVar45 >> 0x20));
            *(ulong *)(lStack_1b0 + 0x148) =
                 uVar58 ^ (uVar58 ^ uVar45) &
                          ~CONCAT17((char)((uint)iVar32 >> 0x18),
                                    CONCAT16((char)((uint)iVar32 >> 0x10),
                                             CONCAT15((char)((uint)iVar32 >> 8),
                                                      CONCAT14((char)iVar32,
                                                               -(uint)((float)uVar58 < (float)uVar45
                                                                      )))));
            uVar36 = uVar36 + 1;
            lVar43 = lVar43 + 0xc;
            lVar39 = lVar39 + 0x100000000;
          } while (uVar38 != uVar36);
        }
        FUN_10ab4cb54(lStack_1b0,(long)(uVar54 * 0x40000000) >> 0x20);
        if (0 < (int)(uVar54 >> 2)) {
          uVar38 = uVar54 >> 2 & 0x7fffffff;
          puVar29 = *(undefined2 **)(lStack_1b0 + 0x28);
          do {
            *puVar29 = (short)*puVar48;
            uVar38 = uVar38 - 1;
            puVar29 = puVar29 + 1;
            puVar48 = puVar48 + 1;
          } while (uVar38 != 0);
        }
      }
      else {
        uVar38 = 0;
        lVar39 = *(long *)(lStack_1b0 + 0x10);
        uVar56 = *(uint *)(lVar28 + 0x30);
        uVar37 = *(uint *)(lStack_1b0 + 0xf0);
        uVar40 = *(uint *)(lVar55 + 0x30);
        uVar6 = *(uint *)(lVar53 + 0x30);
        do {
          puVar41 = (undefined8 *)((long)puVar23 + (long)*(int *)(lVar43 + uVar38 * 4) * 0xc);
          uVar60 = *puVar41;
          uVar54 = *(ulong *)((long)puVar41 + 4);
          pfVar42 = (float *)(lVar39 + (ulong)uVar56 + (uVar38 & 0xffffffff) * (ulong)uVar37);
          fVar84 = (float)uVar60;
          *pfVar42 = fVar84;
          *(ulong *)(pfVar42 + 1) = uVar54;
          if (((ulong)(*(long *)(param_1 + 0x50) - *(long *)(param_1 + 0x48) >> 2) <= uVar38) ||
             (uVar45 = (ulong)*(uint *)(*(long *)(param_1 + 0x48) + uVar38 * 4),
             uVar36 = ((long)plStack_128 - (long)plStack_130 >> 2) * -0x5555555555555555,
             uVar36 < uVar45 || uVar36 - uVar45 == 0)) goto LAB_10ac67594;
          lVar28 = (uVar38 & 0xffffffff) * (ulong)uVar37;
          puVar46 = (undefined8 *)((long)plStack_130 + uVar45 * 0xc);
          puVar41 = (undefined8 *)(lVar39 + (ulong)uVar40 + lVar28);
          uVar20 = *puVar46;
          *(undefined4 *)(puVar41 + 1) = *(undefined4 *)(puVar46 + 1);
          *puVar41 = uVar20;
          if ((ulong)(*(long *)(param_1 + 0x50) - *(long *)(param_1 + 0x48) >> 2) <= uVar38)
          goto LAB_10ac67594;
          *(undefined8 *)(lVar39 + (ulong)uVar6 + lVar28) =
               *(undefined8 *)(lVar33 + (long)*(int *)(*(long *)(param_1 + 0x48) + uVar38 * 4) * 8);
          pVar2 = (unkbyte9 *)(lStack_1b0 + 0x138);
          uVar20 = *(undefined8 *)(lStack_1b0 + 0x140);
          uVar65 = (undefined1)((ulong)uVar20 >> 8);
          uVar66 = (undefined1)((ulong)uVar20 >> 0x10);
          uVar67 = (undefined1)((ulong)uVar20 >> 0x18);
          uVar68 = (undefined1)((ulong)uVar20 >> 0x20);
          uVar69 = (undefined1)((ulong)uVar20 >> 0x28);
          uVar70 = (undefined1)((ulong)uVar20 >> 0x30);
          uVar71 = (undefined1)((ulong)uVar20 >> 0x38);
          auVar8[9] = uVar65;
          auVar8._0_9_ = *pVar2;
          auVar8[10] = uVar66;
          auVar8[0xb] = uVar67;
          auVar8[0xc] = uVar68;
          auVar8[0xd] = uVar69;
          auVar8[0xe] = uVar70;
          auVar8[0xf] = uVar71;
          auVar9[9] = uVar65;
          auVar9._0_9_ = *pVar2;
          auVar9[10] = uVar66;
          auVar9[0xb] = uVar67;
          auVar9[0xc] = uVar68;
          auVar9[0xd] = uVar69;
          auVar9[0xe] = uVar70;
          auVar9[0xf] = uVar71;
          auVar82 = NEON_ext(auVar8,auVar9,8,1);
          fVar57 = (float)(uVar54 >> 0x20);
          auVar61._4_4_ =
               -(uint)((float)((ulong)*(undefined8 *)pVar2 >> 0x20) < (float)((ulong)uVar60 >> 0x20)
                      );
          auVar61._0_4_ = -(uint)((float)*(undefined8 *)pVar2 < fVar84);
          auVar61._12_4_ = -(uint)(fVar84 < auVar82._4_4_);
          auVar61._8_4_ = -(uint)((float)uVar20 < fVar57);
          auVar10[9] = uVar65;
          auVar10._0_9_ = *pVar2;
          auVar10[10] = uVar66;
          auVar10[0xb] = uVar67;
          auVar10[0xc] = uVar68;
          auVar10[0xd] = uVar69;
          auVar10[0xe] = uVar70;
          auVar10[0xf] = uVar71;
          auVar14._8_4_ = fVar57;
          auVar14._0_8_ = uVar60;
          auVar14._12_4_ = fVar84;
          auVar62[9] = uVar65;
          auVar62._0_9_ = *pVar2;
          auVar62[10] = uVar66;
          auVar62[0xb] = uVar67;
          auVar62[0xc] = uVar68;
          auVar62[0xd] = uVar69;
          auVar62[0xe] = uVar70;
          auVar62[0xf] = uVar71;
          auVar62 = auVar62 ^ (auVar10 ^ auVar14) & auVar61;
          *(long *)(lStack_1b0 + 0x140) = auVar62._8_8_;
          *(long *)pVar2 = auVar62._0_8_;
          uVar36 = *(ulong *)(lStack_1b0 + 0x148);
          iVar32 = -(uint)(fVar57 < (float)(uVar36 >> 0x20));
          *(ulong *)(lStack_1b0 + 0x148) =
               uVar54 ^ (uVar54 ^ uVar36) &
                        ~CONCAT17((char)((uint)iVar32 >> 0x18),
                                  CONCAT16((char)((uint)iVar32 >> 0x10),
                                           CONCAT15((char)((uint)iVar32 >> 8),
                                                    CONCAT14((char)iVar32,
                                                             -(uint)((float)uVar54 < (float)uVar36))
                                                   )));
          uVar38 = uVar38 + 1;
          lVar43 = *(long *)(param_1 + 0x48);
        } while (uVar38 < (ulong)(*(long *)(param_1 + 0x50) - lVar43 >> 2));
      }
      if (plStack_130 != (long *)0x0) {
        plStack_128 = plStack_130;
        __ZdlPv();
      }
      if (((*(long *)(param_1 + 0x28) != 0) &&
          (plVar19 = *(long **)(*(long *)(param_1 + 0x28) + 0xe0), plVar19 != (long *)0x0)) &&
         ((**(code **)(*plVar19 + 0x90))(), *plVar19 != 0)) {
        if (*(int *)(param_1 + 0x3c) == 0) {
          FUN_10ac676cc(plVar22,lStack_1b8,&lStack_1b0);
        }
        else if (((*(char *)(param_1 + 0x44) == '\x01') && (*(long *)(param_1 + 0x28) != 0)) &&
                ((plVar19 = *(long **)(*(long *)(param_1 + 0x28) + 0xe0), plVar19 != (long *)0x0 &&
                 ((**(code **)(*plVar19 + 0x90))(), lVar28 = lStack_1b0, *plVar19 != 0)))) {
          *(undefined1 *)(param_1 + 0x44) = 0;
          *(undefined8 *)(param_1 + 0x50) = *(undefined8 *)(param_1 + 0x48);
          lVar33 = *(long *)(lStack_1b0 + 0x40);
          lVar55 = *(long *)(lStack_1b0 + 0x48);
          while (lVar55 != lVar33) {
            lVar55 = lVar55 + -0x48;
            func_0x00010a0d3694(lVar55);
          }
          *(long *)(lVar28 + 0x48) = lVar33;
          FUN_10a0d8988(lStack_1b0 + 0x58);
          lVar55 = lStack_1b0;
          lVar28 = *(long *)(lStack_1b0 + 0x88);
          lVar33 = *(long *)(lStack_1b0 + 0x90);
          while (lVar33 != lVar28) {
            lVar33 = lVar33 + -0x30;
            func_0x00010a0d3994(lVar33);
          }
          *(long *)(lVar55 + 0x90) = lVar28;
          lStack_150 = 0;
          plStack_148 = (long *)0x0;
          uStack_140 = 0;
          if (2 < *(uint *)(param_1 + 0x3c)) {
            FUN_10a00946c(&UNK_10f69fb23);
            goto LAB_10ac67594;
          }
          uVar5 = *(undefined4 *)(&UNK_10e50a6e4 + (ulong)*(uint *)(param_1 + 0x3c) * 4);
          plVar19 = *(long **)(*(long *)(param_1 + 0x28) + 0xe0);
          (**(code **)(*plVar19 + 0x90))();
          lVar28 = *plVar19 + 0xf0;
          FUN_10ab6f6c8(lVar28,uVar5);
          if (((lVar28 == 0) || (*(int *)(lVar28 + 0x24) != 5)) || (*(int *)(lVar28 + 0x28) == 0)) {
            if ((bRam000000011330a9e8 & 1) != 0) {
              auStack_1e0[0] = (ulong)*(uint *)(param_1 + 0x3c);
              puVar24 = &UNK_10f69fca1;
              puVar26 = &UNK_10f69fc11;
              uVar60 = 0;
              uVar20 = 1;
              uVar25 = 0xbc;
              unaff_x30 = 0x10ac66ff0;
              register0x00000008 = (BADSPACEBASE *)auStack_1e0;
              unaff_x29 = puVar1;
SUB_10ae06f08:
              *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
              *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
              *(BADSPACEBASE **)((long)register0x00000008 + -0x18) = register0x00000008;
              FUN_10ae06f30(uVar60,uVar20,&UNK_10f69ec17,puVar24,uVar25,puVar26,register0x00000008);
              return;
            }
          }
          else {
            lVar33 = *(long *)(lStack_1b8 + 0x38);
            lVar55 = *(long *)(lStack_1b8 + 0x40);
            lStack_1c8 = *(long *)(lStack_1b8 + 0x60);
            plVar19 = *(long **)(*(long *)(param_1 + 0x28) + 0xe0);
            if (plVar19 == (long *)0x0) {
              lVar53 = 0;
LAB_10ac67010:
              iVar32 = 4;
            }
            else {
              (**(code **)(*plVar19 + 0x90))();
              lVar53 = *plVar19;
              uVar56 = *(uint *)(lVar28 + 0x24);
              if (uVar56 < 8) {
                iVar32 = 1;
                if ((1 << (ulong)(uVar56 & 0x1f) & 0x58U) == 0) {
                  uVar56 = 1 << (ulong)(uVar56 & 0x1f);
                  if ((uVar56 & 6) == 0) {
                    if ((uVar56 & 0xa0) != 0) goto LAB_10ac67010;
                    goto LAB_10ac66fac;
                  }
                }
                else {
                  iVar32 = 2;
                }
              }
              else {
LAB_10ac66fac:
                iVar32 = 0;
              }
            }
            uStack_1c0 = (lVar55 - lVar33 >> 2) * -0x5555555555555555;
            if (*(int *)(lVar28 + 0x28) * iVar32 == 8) {
              lVar28 = *(long *)(lVar53 + 0x10) + (ulong)*(uint *)(lVar28 + 0x30);
              uVar38 = (ulong)*(uint *)(lVar53 + 0xf0);
            }
            else {
              lVar28 = 0;
              uVar38 = 0;
            }
            func_0x00010986e3dc(&lStack_150,uStack_1c0);
            plVar19 = *(long **)(*(long *)(param_1 + 0x28) + 0xe0);
            if (plVar19 == (long *)0x0) {
              lVar53 = 0;
            }
            else {
              (**(code **)(*plVar19 + 0x90))();
              lVar53 = *plVar19;
            }
            uVar56 = *(uint *)(lVar53 + 0xf0);
            if (uVar56 == 0) {
              puVar50 = (uint *)0x0;
              puVar51 = (uint *)0x0;
              uVar54 = 0;
            }
            else {
              uVar54 = 0;
              if ((ulong)uVar56 != 0) {
                uVar54 = (ulong)(*(long *)(lVar53 + 0x18) - *(long *)(lVar53 + 0x10)) /
                         (ulong)uVar56;
              }
              uVar54 = uVar54 & 0xffffffff;
              if (uVar54 == 0) {
                puVar50 = (uint *)0x0;
                puVar51 = (uint *)0x0;
              }
              else {
                puVar50 = (uint *)(uVar54 * 8);
                __Znwm();
                _bzero();
                uVar36 = 0;
                puVar51 = (uint *)(lVar28 + 4);
                puVar34 = puVar50 + 1;
                do {
                  uVar56 = *puVar51;
                  puVar34[-1] = (uint)uVar36;
                  *puVar34 = uVar56;
                  uVar36 = uVar36 + 1;
                  puVar51 = (uint *)((long)puVar51 + uVar38);
                  puVar34 = puVar34 + 2;
                } while (uVar54 != uVar36);
                puVar51 = puVar50 + uVar54 * 2;
              }
            }
            lVar53 = 0;
            if ((long)puVar51 - (long)puVar50 != 0) {
              lVar53 = LZCOUNT(uVar54) * -2 + 0x7e;
            }
            FUN_10ac7f540(puVar50,puVar51,lVar53,1);
            if (lVar55 == lVar33) {
              if (puVar50 != (uint *)0x0) {
                __ZdlPv(puVar50);
              }
            }
            else {
              bVar47 = false;
              uVar54 = 0;
              fVar84 = *(float *)(param_1 + 0x40);
              uStack_1d0 = (long)puVar51 - (long)puVar50 >> 3;
              do {
                if (puVar51 != puVar50) {
                  puVar23 = (undefined8 *)(lStack_1c8 + uVar54 * 8);
                  uVar60 = *puVar23;
                  fVar57 = *(float *)((long)puVar23 + 4);
                  fVar59 = fVar57 - fVar84;
                  fVar57 = fVar84 + fVar57;
                  puVar30 = puVar51;
                  puVar34 = puVar50;
                  uVar36 = uStack_1d0;
                  do {
                    uVar45 = uVar36 >> 1;
                    puVar31 = puVar34 + uVar45 * 2;
                    if (fVar59 <= (float)puVar31[1]) {
                      if (fVar57 < (float)puVar31[1]) goto LAB_10ac671a8;
                      puVar52 = puVar31;
                      if (uVar36 != 1) {
                        do {
                          uVar36 = uVar45 >> 1;
                          puVar52 = puVar34 + uVar36 * 2 + 2;
                          uVar45 = uVar45 + (uVar45 >> 1 ^ 0xffffffffffffffff);
                          if (fVar59 <= (float)puVar34[uVar36 * 2 + 1]) {
                            puVar52 = puVar34;
                            uVar45 = uVar36;
                          }
                          puVar34 = puVar52;
                        } while (uVar45 != 0);
                      }
                      puVar31 = puVar31 + 2;
                      if ((long)puVar30 - (long)puVar31 != 0) {
                        uVar36 = (long)puVar30 - (long)puVar31 >> 3;
                        do {
                          uVar35 = uVar36 >> 1;
                          uVar45 = uVar36 + (uVar36 >> 1 ^ 0xffffffffffffffff);
                          uVar36 = uVar35;
                          if ((float)puVar31[uVar35 * 2 + 1] <= fVar57) {
                            uVar36 = uVar45;
                            puVar31 = puVar31 + uVar35 * 2 + 2;
                          }
                        } while (uVar36 != 0);
                      }
                      for (; puVar52 < puVar31; puVar52 = puVar52 + 2) {
                        uVar20 = *(undefined8 *)(lVar28 + uVar38 * *puVar52);
                        fVar57 = (float)uVar60 - (float)uVar20;
                        fVar59 = (float)((ulong)uVar60 >> 0x20) - (float)((ulong)uVar20 >> 0x20);
                        if (fVar57 * fVar57 + fVar59 * fVar59 <
                            *(float *)(param_1 + 0x40) * *(float *)(param_1 + 0x40)) {
                          uVar36 = ((long)plStack_148 - lStack_150 >> 3) * -0x5555555555555555;
                          if (uVar36 < uVar54 || uVar36 - uVar54 == 0) goto LAB_10ac67594;
                          FUN_10a0e6678(lStack_150 + uVar54 * 0x18,puVar52);
                          bVar47 = true;
                        }
                      }
                      break;
                    }
                    puVar34 = puVar31 + 2;
                    uVar45 = uVar36 + ~uVar45;
                    puVar31 = puVar30;
LAB_10ac671a8:
                    puVar30 = puVar31;
                    uVar36 = uVar45;
                  } while (uVar45 != 0);
                }
                uVar54 = uVar54 + 1;
              } while (uVar54 != uStack_1c0);
              if (puVar50 != (uint *)0x0) {
                __ZdlPv(puVar50);
              }
              if (bVar47) {
                uVar38 = *(ulong *)(lStack_1b8 + 0x38);
                uStack_1c0 = *(ulong *)(lStack_1b8 + 0x40);
                plVar19 = *(long **)(*(long *)(param_1 + 0x28) + 0xe0);
                (**(code **)(*plVar19 + 0x90))();
                lVar28 = *(long *)(*plVar19 + 0x40);
                lVar33 = *(long *)(*plVar19 + 0x48);
                if (lVar28 != lVar33) {
                  lVar55 = (long)(uStack_1c0 - uVar38) >> 2;
                  uVar54 = lVar55 * -0x5555555555555555;
                  do {
                    uStack_100 = 0;
                    plStack_118 = (long *)0x0;
                    plStack_120 = (long *)0x0;
                    plStack_108 = (long *)0x0;
                    plStack_110 = (long *)0x0;
                    plStack_128 = (long *)0x0;
                    plStack_130 = (long *)0x0;
                    FUN_10a0d3454();
                    plStack_f0 = (long *)plVar19[1];
                    plStack_f8 = (long *)*plVar19;
                    if (plVar19[1] != 0) {
                      plVar19 = (long *)(plVar19[1] + 8);
                      do {
                        cVar7 = '\x01';
                        bVar47 = (bool)ExclusiveMonitorPass(plVar19,0x10);
                        if (bVar47) {
                          *plVar19 = *plVar19 + 1;
                          cVar7 = ExclusiveMonitorsStatus();
                        }
                      } while (cVar7 != '\0');
                    }
                    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
                              (&plStack_130,lVar28);
                    plStack_118 = (long *)CONCAT44(plStack_118._4_4_,*(undefined4 *)(lVar28 + 0x18))
                    ;
                    FUN_10a0dc020(&uStack_198,lVar55 * 8);
                    if (uStack_1c0 != uVar38) {
                      uVar36 = 0;
                      lVar53 = **(long **)(lVar28 + 0x38);
                      do {
                        pfVar42 = (float *)(CONCAT44(uStack_194,uStack_198) + uVar36 * 0x18);
                        pfVar42[0] = 0.0;
                        pfVar42[1] = 0.0;
                        pfVar42[2] = 0.0;
                        pfVar42[3] = 0.0;
                        pfVar42[4] = 0.0;
                        pfVar42[5] = 0.0;
                        uVar45 = ((long)plStack_148 - lStack_150 >> 3) * -0x5555555555555555;
                        if (uVar45 < uVar36 || uVar45 - uVar36 == 0) goto LAB_10ac67594;
                        plVar19 = (long *)(lStack_150 + uVar36 * 0x18);
                        puVar51 = (uint *)*plVar19;
                        puVar50 = (uint *)plVar19[1];
                        if (puVar51 == puVar50) {
                          uVar65 = 0;
                          uVar66 = 0;
                          uVar67 = 0;
                          uVar68 = 0;
                          uVar69 = 0;
                          uVar70 = 0;
                          uVar71 = 0;
                          uVar72 = 0;
                          uVar73 = 0;
                          uVar74 = 0;
                          uVar75 = 0;
                          uVar76 = 0;
                          uVar77 = 0;
                          uVar78 = 0;
                          uVar79 = 0;
                          uVar80 = 0;
                          fVar84 = 0.0;
                          fVar57 = 0.0;
                        }
                        else {
                          fVar84 = 0.0;
                          fVar57 = 0.0;
                          fVar59 = 0.0;
                          fVar81 = 0.0;
                          fVar83 = 0.0;
                          uVar65 = 0;
                          uVar66 = 0;
                          uVar67 = 0;
                          uVar68 = 0;
                          do {
                            puVar34 = puVar51 + 1;
                            pfVar44 = (float *)(lVar53 + (ulong)*puVar51 * 0x18);
                            fVar13 = (float)CONCAT13(uVar68,CONCAT12(uVar67,CONCAT11(uVar66,uVar65))
                                                    ) + *pfVar44;
                            uVar65 = SUB41(fVar13,0);
                            uVar66 = (undefined1)((uint)fVar13 >> 8);
                            uVar67 = (undefined1)((uint)fVar13 >> 0x10);
                            uVar68 = (undefined1)((uint)fVar13 >> 0x18);
                            *pfVar42 = fVar13;
                            fVar83 = fVar83 + pfVar44[1];
                            pfVar42[1] = fVar83;
                            fVar81 = fVar81 + pfVar44[2];
                            pfVar42[2] = fVar81;
                            fVar59 = fVar59 + pfVar44[3];
                            pfVar42[3] = fVar59;
                            fVar57 = fVar57 + pfVar44[4];
                            pfVar42[4] = fVar57;
                            fVar84 = fVar84 + pfVar44[5];
                            pfVar42[5] = fVar84;
                            puVar51 = puVar34;
                          } while (puVar34 != puVar50);
                          uVar45 = ((long)plStack_148 - lStack_150 >> 3) * -0x5555555555555555;
                          uVar69 = SUB41(fVar83,0);
                          uVar70 = (undefined1)((uint)fVar83 >> 8);
                          uVar71 = (undefined1)((uint)fVar83 >> 0x10);
                          uVar72 = (undefined1)((uint)fVar83 >> 0x18);
                          uVar73 = SUB41(fVar81,0);
                          uVar74 = (undefined1)((uint)fVar81 >> 8);
                          uVar75 = (undefined1)((uint)fVar81 >> 0x10);
                          uVar76 = (undefined1)((uint)fVar81 >> 0x18);
                          uVar77 = SUB41(fVar59,0);
                          uVar78 = (undefined1)((uint)fVar59 >> 8);
                          uVar79 = (undefined1)((uint)fVar59 >> 0x10);
                          uVar80 = (undefined1)((uint)fVar59 >> 0x18);
                        }
                        if (uVar45 <= uVar36) goto LAB_10ac67594;
                        plVar19 = (long *)(lStack_150 + uVar36 * 0x18);
                        lVar43 = plVar19[1] - *plVar19;
                        if (lVar43 != 0) {
                          fVar83 = (float)(ulong)(lVar43 >> 2);
                          fVar59 = (float)CONCAT13(uVar72,CONCAT12(uVar71,CONCAT11(uVar70,uVar69)))
                                   / fVar83;
                          fVar81 = (float)CONCAT13(uVar80,CONCAT12(uVar79,CONCAT11(uVar78,uVar77)))
                                   / fVar83;
                          *(ulong *)(pfVar42 + 2) =
                               CONCAT17((char)((uint)fVar81 >> 0x18),
                                        CONCAT16((char)((uint)fVar81 >> 0x10),
                                                 CONCAT15((char)((uint)fVar81 >> 8),
                                                          CONCAT14(SUB41(fVar81,0),
                                                                   (float)CONCAT13(uVar76,CONCAT12(
                                                  uVar75,CONCAT11(uVar74,uVar73))) / fVar83))));
                          *(ulong *)pfVar42 =
                               CONCAT17((char)((uint)fVar59 >> 0x18),
                                        CONCAT16((char)((uint)fVar59 >> 0x10),
                                                 CONCAT15((char)((uint)fVar59 >> 8),
                                                          CONCAT14(SUB41(fVar59,0),
                                                                   (float)CONCAT13(uVar68,CONCAT12(
                                                  uVar67,CONCAT11(uVar66,uVar65))) / fVar83))));
                          pfVar42[4] = fVar57 / fVar83;
                          pfVar42[5] = fVar84 / fVar83;
                        }
                        uVar36 = (ulong)((int)uVar36 + 1);
                      } while (uVar36 <= uVar54 && uVar54 - uVar36 != 0);
                    }
                    FUN_10a0d3194(&plStack_130,&uStack_198);
                    FUN_10a7f4aac(lStack_1b0 + 0x40,&plStack_130);
                    plVar19 = (long *)CONCAT44(uStack_194,uStack_198);
                    if (plVar19 != (long *)0x0) {
                      __ZdlPv();
                    }
                    plVar21 = plStack_f0;
                    if (plStack_f0 != (long *)0x0) {
                      plVar3 = plStack_f0 + 1;
                      do {
                        lVar53 = *plVar3;
                        cVar7 = '\x01';
                        bVar47 = (bool)ExclusiveMonitorPass(plVar3,0x10);
                        if (bVar47) {
                          *plVar3 = lVar53 + -1;
                          cVar7 = ExclusiveMonitorsStatus();
                        }
                      } while (cVar7 != '\0');
                      if (lVar53 == 0) {
                        (**(code **)(*plStack_f0 + 0x10))(plStack_f0);
                        __ZNSt3__119__shared_weak_count14__release_weakEv();
                        plVar19 = plVar21;
                      }
                    }
                    if ((long)plStack_120 < 0) {
                      plVar19 = plStack_130;
                      __ZdlPv();
                    }
                    lVar28 = lVar28 + 0x48;
                  } while (lVar28 != lVar33);
                }
                FUN_10ac65af0(plVar22,&lStack_150,*(undefined8 *)(lStack_1b8 + 0x38),
                              *(undefined8 *)(lStack_1b8 + 0x40),&lStack_1b0);
              }
            }
          }
          *(undefined1 *)(param_1 + 0x45) = 1;
          plStack_130 = &lStack_150;
          func_0x00010a7bf8dc(&plStack_130);
        }
      }
      if (*(char *)(param_1 + 0x45) == '\x01') {
        FUN_10ac645fc(plVar22,&lStack_1b0);
        *(undefined1 *)(param_1 + 0x45) = 0;
      }
      else {
        puVar23 = (undefined8 *)0x1;
        FUN_10a061940(plVar22);
        (**(code **)(*(long *)*puVar23 + 0x80))((long *)*puVar23,lStack_1b0,1,0);
      }
      plVar22 = plStack_1a8;
      if (plStack_1a8 != (long *)0x0) {
        plVar19 = plStack_1a8 + 1;
        do {
          lVar28 = *plVar19;
          cVar7 = '\x01';
          bVar47 = (bool)ExclusiveMonitorPass(plVar19,0x10);
          if (bVar47) {
            *plVar19 = lVar28 + -1;
            cVar7 = ExclusiveMonitorsStatus();
          }
        } while (cVar7 != '\0');
        if (lVar28 == 0) {
          (**(code **)(*plStack_1a8 + 0x10))(plStack_1a8);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar22);
        }
      }
      goto LAB_10ac66ea4;
    }
  }
  FUN_10a00946c(&UNK_10f69ebda);
LAB_10ac67594:
                    /* WARNING: Does not return */
  pcVar16 = (code *)SoftwareBreakpoint(1,0x10ac67598);
  (*pcVar16)();
}



/* Entry: 10ac67eb8; end: 10ac68543;  */

/* WARNING: Removing unreachable block (ram,0x00010ac68358) */

void FUN_10ac67eb8(undefined8 param_1,long param_2)

{
  undefined1 *puVar1;
  ulong uVar2;
  int iVar3;
  undefined8 *puVar4;
  bool bVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 extraout_x8;
  long unaff_x19;
  undefined8 *puVar9;
  undefined8 *unaff_x20;
  ulong unaff_x21;
  undefined8 *puVar10;
  undefined1 *unaff_x22;
  long unaff_x23;
  undefined8 *unaff_x24;
  undefined1 *unaff_x25;
  undefined8 unaff_x26;
  long lVar11;
  undefined8 *unaff_x27;
  int *unaff_x28;
  undefined1 *unaff_x29;
  code *unaff_x30;
  undefined8 uVar12;
  undefined8 uVar13;
  
code_r0x00010ac67eb8:
  *(int **)((long)register0x00000008 + -0x60) = unaff_x28;
  *(undefined8 **)((long)register0x00000008 + -0x58) = unaff_x27;
  *(undefined8 *)((long)register0x00000008 + -0x50) = unaff_x26;
  *(undefined1 **)((long)register0x00000008 + -0x48) = unaff_x25;
  *(undefined8 **)((long)register0x00000008 + -0x40) = unaff_x24;
  *(long *)((long)register0x00000008 + -0x38) = unaff_x23;
  *(undefined1 **)((long)register0x00000008 + -0x30) = unaff_x22;
  *(ulong *)((long)register0x00000008 + -0x28) = unaff_x21;
  *(undefined8 **)((long)register0x00000008 + -0x20) = unaff_x20;
  *(long *)((long)register0x00000008 + -0x18) = unaff_x19;
  *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
  *(code **)((long)register0x00000008 + -8) = unaff_x30;
  unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
  *(undefined8 *)((long)register0x00000008 + -0x1e8) = param_1;
  *(undefined8 *)((long)register0x00000008 + -0x78) =
       *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  *(undefined4 *)((long)register0x00000008 + -0xe0) = 0;
  func_0x000107c2b054((undefined1 *)((long)register0x00000008 + -0xd8),&DAT_10f69ed07);
  *(undefined4 *)((long)register0x00000008 + -0xc0) = 1;
  func_0x000107c2b054((undefined1 *)((long)register0x00000008 + -0xb8),&UNK_10f69ed10);
  unaff_x25 = (undefined1 *)((long)register0x00000008 + -0xe0);
  *(undefined4 *)((long)register0x00000008 + -0xa0) = 2;
  func_0x000107c2b054((undefined1 *)((long)register0x00000008 + -0x98),&UNK_10f69ed14);
  *(long *)((long)register0x00000008 + -0x1e0) = param_2;
  puVar10 = (undefined8 *)0x0;
  lVar11 = 0;
  unaff_x27 = (undefined8 *)((long)register0x00000008 + -0xf8);
  *(undefined8 *)((long)register0x00000008 + -0xf0) = 0;
  *(undefined8 *)((long)register0x00000008 + -0xe8) = 0;
  puVar7 = (undefined8 *)((long)register0x00000008 + -0xf0);
  *(undefined8 **)((long)register0x00000008 + -0xf8) = puVar7;
  puVar6 = puVar7;
  do {
    unaff_x28 = (int *)(unaff_x25 + lVar11);
    iVar3 = *unaff_x28;
    puVar8 = puVar7;
    puVar9 = puVar7;
    unaff_x24 = puVar7;
    if (puVar6 == puVar7) {
LAB_10ac68000:
      puVar6 = unaff_x27;
      if (puVar10 != (undefined8 *)0x0) {
        puVar9 = puVar8 + 1;
        puVar6 = puVar8;
        unaff_x24 = puVar8;
      }
      if (puVar6[1] == 0) goto LAB_10ac6801c;
    }
    else {
      puVar6 = puVar7;
      puVar4 = puVar10;
      if (puVar10 == (undefined8 *)0x0) {
        do {
          puVar8 = (undefined8 *)puVar6[2];
          bVar5 = (undefined8 *)*puVar8 == puVar6;
          puVar6 = puVar8;
        } while (bVar5);
        if (*(int *)(puVar8 + 4) < iVar3) goto LAB_10ac68000;
      }
      else {
        do {
          puVar8 = puVar4;
          puVar4 = (undefined8 *)puVar8[1];
        } while ((undefined8 *)puVar8[1] != (undefined8 *)0x0);
        if (*(int *)(puVar8 + 4) < iVar3) goto LAB_10ac68000;
        do {
          while (unaff_x24 = puVar10, iVar3 < *(int *)(unaff_x24 + 4)) {
            puVar10 = (undefined8 *)*unaff_x24;
            puVar9 = unaff_x24;
            if ((undefined8 *)*unaff_x24 == (undefined8 *)0x0) goto LAB_10ac6801c;
          }
          if (iVar3 <= *(int *)(unaff_x24 + 4)) goto LAB_10ac6808c;
          puVar10 = (undefined8 *)unaff_x24[1];
        } while ((undefined8 *)unaff_x24[1] != (undefined8 *)0x0);
        puVar9 = unaff_x24 + 1;
      }
LAB_10ac6801c:
      puVar6 = (undefined8 *)0x40;
      __Znwm();
      *(int *)(puVar6 + 4) = iVar3;
      if (*(char *)((long)unaff_x28 + 0x1f) < '\0') {
        func_0x000107c3192c(puVar6 + 5,*(undefined8 *)(unaff_x28 + 2),*(undefined8 *)(unaff_x28 + 4)
                           );
      }
      else {
        uVar12 = *(undefined8 *)(unaff_x28 + 2);
        puVar6[6] = *(undefined8 *)(unaff_x28 + 4);
        puVar6[5] = uVar12;
        puVar6[7] = *(undefined8 *)(unaff_x28 + 6);
      }
      *puVar6 = 0;
      puVar6[1] = 0;
      puVar6[2] = unaff_x24;
      *puVar9 = puVar6;
      if (**(long **)((long)register0x00000008 + -0xf8) != 0) {
        *(long *)((long)register0x00000008 + -0xf8) = **(long **)((long)register0x00000008 + -0xf8);
        puVar6 = (undefined8 *)*puVar9;
      }
      func_0x000107c2b058(*(undefined8 *)((long)register0x00000008 + -0xf0),puVar6);
      *(long *)((long)register0x00000008 + -0xe8) = *(long *)((long)register0x00000008 + -0xe8) + 1;
    }
LAB_10ac6808c:
    lVar11 = lVar11 + 0x20;
    if (lVar11 == 0x60) break;
    puVar6 = *(undefined8 **)((long)register0x00000008 + -0xf8);
    puVar10 = *(undefined8 **)((long)register0x00000008 + -0xf0);
  } while( true );
  lVar11 = 0;
  unaff_x23 = *(long *)((long)register0x00000008 + -0x1e0);
  do {
    if (*(char *)((long)register0x00000008 + lVar11 + -0x81) < '\0') {
      __ZdlPv(*(undefined8 *)((long)register0x00000008 + lVar11 + -0x98));
    }
    lVar11 = lVar11 + -0x20;
  } while (lVar11 != -0x60);
  puVar6 = *(undefined8 **)((long)register0x00000008 + -0xf0);
  if (puVar6 != (undefined8 *)0x0) {
    puVar10 = puVar7;
    do {
      lVar11 = 8;
      if (*(int *)(unaff_x23 + 0x124) <= *(int *)(puVar6 + 4)) {
        lVar11 = 0;
        puVar10 = puVar6;
      }
      puVar6 = *(undefined8 **)((long)puVar6 + lVar11);
    } while (puVar6 != (undefined8 *)0x0);
    if ((puVar10 != puVar7) && (*(int *)(puVar10 + 4) <= *(int *)(unaff_x23 + 0x124))) {
      if (*(char *)((long)puVar10 + 0x3f) < '\0') {
        func_0x000107c3192c((undefined1 *)((long)register0x00000008 + -0xe0),puVar10[5],puVar10[6]);
      }
      else {
        uVar12 = puVar10[5];
        *(undefined8 *)((long)register0x00000008 + -0xd8) = puVar10[6];
        *(undefined8 *)((long)register0x00000008 + -0xe0) = uVar12;
        *(undefined8 *)((long)register0x00000008 + -0xd0) = puVar10[7];
      }
      goto LAB_10ac68120;
    }
  }
  func_0x000107c2b054((undefined1 *)((long)register0x00000008 + -0xe0),&UNK_10f69ed18);
LAB_10ac68120:
  unaff_x20 = (undefined8 *)((long)register0x00000008 + -0x150);
  func_0x00010989f98c((undefined1 *)((long)register0x00000008 + -0x110),unaff_x23 + 0x28);
  unaff_x21 = *(ulong *)((long)register0x00000008 + -0x108);
  if (-1 < (char)*(byte *)((long)register0x00000008 + -0xf9)) {
    unaff_x21 = (ulong)*(byte *)((long)register0x00000008 + -0xf9);
  }
  FUN_10a003c90((undefined1 *)((long)register0x00000008 + -0x1a8),unaff_x21 + 0xd,
                (undefined1 *)((long)register0x00000008 + -0x1c0));
  unaff_x22 = *(undefined1 **)((long)register0x00000008 + -0x1a8);
  if (-1 < *(char *)((long)register0x00000008 + -0x191)) {
    unaff_x22 = (undefined1 *)((long)register0x00000008 + -0x1a8);
  }
  if (unaff_x21 != 0) {
    puVar1 = *(undefined1 **)((long)register0x00000008 + -0x110);
    if (-1 < *(char *)((long)register0x00000008 + -0xf9)) {
      puVar1 = (undefined1 *)((long)register0x00000008 + -0x110);
    }
    _memmove(unaff_x22,puVar1,unaff_x21);
  }
  puVar7 = (undefined8 *)(unaff_x22 + unaff_x21);
  *puVar7 = 0x6e49656361662020;
  *(undefined8 *)((long)puVar7 + 5) = 0x203a7865646e4965;
  *(undefined1 *)((long)puVar7 + 0xd) = 0;
  __ZNSt3__19to_stringEi
            ((undefined1 *)((long)register0x00000008 + -0x1c0),*(undefined4 *)(unaff_x23 + 0x120));
  uVar2 = *(ulong *)((long)register0x00000008 + -0x1b8);
  puVar1 = *(undefined1 **)((long)register0x00000008 + -0x1c0);
  if (-1 < (char)*(byte *)((long)register0x00000008 + -0x1a9)) {
    uVar2 = (ulong)*(byte *)((long)register0x00000008 + -0x1a9);
    puVar1 = (undefined1 *)((long)register0x00000008 + -0x1c0);
  }
  puVar7 = (undefined8 *)((long)register0x00000008 + -0x1a8);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm(puVar7,puVar1,uVar2);
  uVar13 = puVar7[1];
  uVar12 = *puVar7;
  *(undefined8 *)((long)register0x00000008 + -0x180) = puVar7[2];
  *(undefined8 *)((long)register0x00000008 + -0x188) = uVar13;
  *(undefined8 *)((long)register0x00000008 + -400) = uVar12;
  puVar7[1] = 0;
  puVar7[2] = 0;
  *puVar7 = 0;
  puVar7 = (undefined8 *)((long)register0x00000008 + -400);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (puVar7,&UNK_10f69ed43,0x16);
  uVar13 = puVar7[1];
  uVar12 = *puVar7;
  *(undefined8 *)((long)register0x00000008 + -0x160) = puVar7[2];
  *(undefined8 *)((long)register0x00000008 + -0x168) = uVar13;
  *(undefined8 *)((long)register0x00000008 + -0x170) = uVar12;
  puVar7[1] = 0;
  puVar7[2] = 0;
  *puVar7 = 0;
  uVar2 = *(ulong *)((long)register0x00000008 + -0xd8);
  puVar1 = *(undefined1 **)((long)register0x00000008 + -0xe0);
  if (-1 < (char)*(byte *)((long)register0x00000008 + -0xc9)) {
    uVar2 = (ulong)*(byte *)((long)register0x00000008 + -0xc9);
    puVar1 = (undefined1 *)((long)register0x00000008 + -0xe0);
  }
  puVar7 = (undefined8 *)((long)register0x00000008 + -0x170);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm(puVar7,puVar1,uVar2);
  uVar13 = puVar7[1];
  uVar12 = *puVar7;
  *(undefined8 *)((long)register0x00000008 + -0x140) = puVar7[2];
  *(undefined8 *)((long)register0x00000008 + -0x148) = uVar13;
  *unaff_x20 = uVar12;
  puVar7[1] = 0;
  puVar7[2] = 0;
  *puVar7 = 0;
  puVar7 = (undefined8 *)((long)register0x00000008 + -0x150);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (puVar7,&UNK_10f69ed5a,0x18);
  uVar13 = puVar7[1];
  uVar12 = *puVar7;
  *(undefined8 *)((long)register0x00000008 + -0x120) = puVar7[2];
  *(undefined8 *)((long)register0x00000008 + -0x128) = uVar13;
  *(undefined8 *)((long)register0x00000008 + -0x130) = uVar12;
  puVar7[1] = 0;
  puVar7[2] = 0;
  *puVar7 = 0;
  __ZNSt3__19to_stringEf
            ((undefined1 *)((long)register0x00000008 + -0x1d8),*(undefined4 *)(unaff_x23 + 0x128));
  uVar2 = *(ulong *)((long)register0x00000008 + -0x1d0);
  puVar1 = *(undefined1 **)((long)register0x00000008 + -0x1d8);
  if (-1 < (char)*(byte *)((long)register0x00000008 + -0x1c1)) {
    uVar2 = (ulong)*(byte *)((long)register0x00000008 + -0x1c1);
    puVar1 = (undefined1 *)((long)register0x00000008 + -0x1d8);
  }
  puVar7 = (undefined8 *)((long)register0x00000008 + -0x130);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm(puVar7,puVar1,uVar2);
  uVar12 = *puVar7;
  puVar6 = *(undefined8 **)((long)register0x00000008 + -0x1e8);
  puVar6[1] = puVar7[1];
  *puVar6 = uVar12;
  puVar6[2] = puVar7[2];
  puVar7[1] = 0;
  puVar7[2] = 0;
  *puVar7 = 0;
  if (*(char *)((long)register0x00000008 + -0x1c1) < '\0') {
    __ZdlPv(*(undefined8 *)((long)register0x00000008 + -0x1d8));
  }
  if (*(char *)((long)register0x00000008 + -0x119) < '\0') {
    __ZdlPv(*(undefined8 *)((long)register0x00000008 + -0x130));
  }
  if (*(char *)((long)register0x00000008 + -0x139) < '\0') {
    __ZdlPv(*(undefined8 *)((long)register0x00000008 + -0x150));
  }
  if (*(char *)((long)register0x00000008 + -0x159) < '\0') {
    __ZdlPv(*(undefined8 *)((long)register0x00000008 + -0x170));
  }
  if (*(char *)((long)register0x00000008 + -0x179) < '\0') {
    __ZdlPv(*(undefined8 *)((long)register0x00000008 + -400));
  }
  if (*(char *)((long)register0x00000008 + -0x1a9) < '\0') {
    __ZdlPv(*(undefined8 *)((long)register0x00000008 + -0x1c0));
  }
  if (*(char *)((long)register0x00000008 + -0x191) < '\0') {
    __ZdlPv(*(undefined8 *)((long)register0x00000008 + -0x1a8));
  }
  if (*(char *)((long)register0x00000008 + -0xf9) < '\0') {
    __ZdlPv(*(undefined8 *)((long)register0x00000008 + -0x110));
  }
  unaff_x19 = *(long *)((long)register0x00000008 + -0xf0);
  FUN_10ac80438();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)((long)register0x00000008 + -0x78)) {
    return;
  }
  ___stack_chk_fail();
  FUN_10ac80438(*(undefined8 *)((long)register0x00000008 + -0xf0));
  unaff_x30 = FUN_10ac68544;
  param_2 = unaff_x19;
  __Unwind_Resume();
  param_2 = param_2 + -0x28;
  unaff_x26 = 0x60;
  register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x1f0);
  param_1 = extraout_x8;
  goto code_r0x00010ac67eb8;
}



/* Entry: 10ac68544; end: 10ac6854b;  */

/* WARNING: Removing unreachable block (ram,0x00010ac68358) */

void FUN_10ac68544(undefined8 param_1,long param_2)

{
  undefined1 *puVar1;
  ulong uVar2;
  int iVar3;
  undefined8 *puVar4;
  bool bVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 extraout_x8;
  undefined8 *puVar9;
  long unaff_x19;
  undefined8 *unaff_x20;
  undefined8 *puVar10;
  ulong unaff_x21;
  undefined1 *unaff_x22;
  long unaff_x23;
  undefined8 *unaff_x24;
  undefined1 *unaff_x25;
  long lVar11;
  undefined8 unaff_x26;
  undefined8 *unaff_x27;
  int *unaff_x28;
  undefined1 *unaff_x29;
  code *unaff_x30;
  undefined8 uVar12;
  undefined8 uVar13;
  
FUN_10ac67eb8:
  *(int **)((long)register0x00000008 + -0x60) = unaff_x28;
  *(undefined8 **)((long)register0x00000008 + -0x58) = unaff_x27;
  *(undefined8 *)((long)register0x00000008 + -0x50) = unaff_x26;
  *(undefined1 **)((long)register0x00000008 + -0x48) = unaff_x25;
  *(undefined8 **)((long)register0x00000008 + -0x40) = unaff_x24;
  *(long *)((long)register0x00000008 + -0x38) = unaff_x23;
  *(undefined1 **)((long)register0x00000008 + -0x30) = unaff_x22;
  *(ulong *)((long)register0x00000008 + -0x28) = unaff_x21;
  *(undefined8 **)((long)register0x00000008 + -0x20) = unaff_x20;
  *(long *)((long)register0x00000008 + -0x18) = unaff_x19;
  *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
  *(code **)((long)register0x00000008 + -8) = unaff_x30;
  unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
  *(undefined8 *)((long)register0x00000008 + -0x1e8) = param_1;
  *(undefined8 *)((long)register0x00000008 + -0x78) =
       *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  *(undefined4 *)((long)register0x00000008 + -0xe0) = 0;
  func_0x000107c2b054((undefined1 *)((long)register0x00000008 + -0xd8),&DAT_10f69ed07);
  *(undefined4 *)((long)register0x00000008 + -0xc0) = 1;
  func_0x000107c2b054((undefined1 *)((long)register0x00000008 + -0xb8),&UNK_10f69ed10);
  unaff_x25 = (undefined1 *)((long)register0x00000008 + -0xe0);
  *(undefined4 *)((long)register0x00000008 + -0xa0) = 2;
  func_0x000107c2b054((undefined1 *)((long)register0x00000008 + -0x98),&UNK_10f69ed14);
  *(long *)((long)register0x00000008 + -0x1e0) = param_2 + -0x28;
  puVar10 = (undefined8 *)0x0;
  lVar11 = 0;
  unaff_x27 = (undefined8 *)((long)register0x00000008 + -0xf8);
  *(undefined8 *)((long)register0x00000008 + -0xf0) = 0;
  *(undefined8 *)((long)register0x00000008 + -0xe8) = 0;
  puVar7 = (undefined8 *)((long)register0x00000008 + -0xf0);
  *(undefined8 **)((long)register0x00000008 + -0xf8) = puVar7;
  puVar6 = puVar7;
  do {
    unaff_x28 = (int *)(unaff_x25 + lVar11);
    iVar3 = *unaff_x28;
    puVar8 = puVar7;
    puVar9 = puVar7;
    unaff_x24 = puVar7;
    if (puVar6 == puVar7) {
LAB_10ac68000:
      puVar6 = unaff_x27;
      if (puVar10 != (undefined8 *)0x0) {
        puVar9 = puVar8 + 1;
        puVar6 = puVar8;
        unaff_x24 = puVar8;
      }
      if (puVar6[1] == 0) goto LAB_10ac6801c;
    }
    else {
      puVar6 = puVar7;
      puVar4 = puVar10;
      if (puVar10 == (undefined8 *)0x0) {
        do {
          puVar8 = (undefined8 *)puVar6[2];
          bVar5 = (undefined8 *)*puVar8 == puVar6;
          puVar6 = puVar8;
        } while (bVar5);
        if (*(int *)(puVar8 + 4) < iVar3) goto LAB_10ac68000;
      }
      else {
        do {
          puVar8 = puVar4;
          puVar4 = (undefined8 *)puVar8[1];
        } while ((undefined8 *)puVar8[1] != (undefined8 *)0x0);
        if (*(int *)(puVar8 + 4) < iVar3) goto LAB_10ac68000;
        do {
          while (unaff_x24 = puVar10, iVar3 < *(int *)(unaff_x24 + 4)) {
            puVar10 = (undefined8 *)*unaff_x24;
            puVar9 = unaff_x24;
            if ((undefined8 *)*unaff_x24 == (undefined8 *)0x0) goto LAB_10ac6801c;
          }
          if (iVar3 <= *(int *)(unaff_x24 + 4)) goto LAB_10ac6808c;
          puVar10 = (undefined8 *)unaff_x24[1];
        } while ((undefined8 *)unaff_x24[1] != (undefined8 *)0x0);
        puVar9 = unaff_x24 + 1;
      }
LAB_10ac6801c:
      puVar6 = (undefined8 *)0x40;
      __Znwm();
      *(int *)(puVar6 + 4) = iVar3;
      if (*(char *)((long)unaff_x28 + 0x1f) < '\0') {
        func_0x000107c3192c(puVar6 + 5,*(undefined8 *)(unaff_x28 + 2),*(undefined8 *)(unaff_x28 + 4)
                           );
      }
      else {
        uVar12 = *(undefined8 *)(unaff_x28 + 2);
        puVar6[6] = *(undefined8 *)(unaff_x28 + 4);
        puVar6[5] = uVar12;
        puVar6[7] = *(undefined8 *)(unaff_x28 + 6);
      }
      *puVar6 = 0;
      puVar6[1] = 0;
      puVar6[2] = unaff_x24;
      *puVar9 = puVar6;
      if (**(long **)((long)register0x00000008 + -0xf8) != 0) {
        *(long *)((long)register0x00000008 + -0xf8) = **(long **)((long)register0x00000008 + -0xf8);
        puVar6 = (undefined8 *)*puVar9;
      }
      func_0x000107c2b058(*(undefined8 *)((long)register0x00000008 + -0xf0),puVar6);
      *(long *)((long)register0x00000008 + -0xe8) = *(long *)((long)register0x00000008 + -0xe8) + 1;
    }
LAB_10ac6808c:
    lVar11 = lVar11 + 0x20;
    if (lVar11 == 0x60) break;
    puVar6 = *(undefined8 **)((long)register0x00000008 + -0xf8);
    puVar10 = *(undefined8 **)((long)register0x00000008 + -0xf0);
  } while( true );
  lVar11 = 0;
  unaff_x23 = *(long *)((long)register0x00000008 + -0x1e0);
  do {
    if (*(char *)((long)register0x00000008 + lVar11 + -0x81) < '\0') {
      __ZdlPv(*(undefined8 *)((long)register0x00000008 + lVar11 + -0x98));
    }
    lVar11 = lVar11 + -0x20;
  } while (lVar11 != -0x60);
  puVar6 = *(undefined8 **)((long)register0x00000008 + -0xf0);
  if (puVar6 != (undefined8 *)0x0) {
    puVar10 = puVar7;
    do {
      lVar11 = 8;
      if (*(int *)(unaff_x23 + 0x124) <= *(int *)(puVar6 + 4)) {
        lVar11 = 0;
        puVar10 = puVar6;
      }
      puVar6 = *(undefined8 **)((long)puVar6 + lVar11);
    } while (puVar6 != (undefined8 *)0x0);
    if ((puVar10 != puVar7) && (*(int *)(puVar10 + 4) <= *(int *)(unaff_x23 + 0x124))) {
      if (*(char *)((long)puVar10 + 0x3f) < '\0') {
        func_0x000107c3192c((undefined1 *)((long)register0x00000008 + -0xe0),puVar10[5],puVar10[6]);
      }
      else {
        uVar12 = puVar10[5];
        *(undefined8 *)((long)register0x00000008 + -0xd8) = puVar10[6];
        *(undefined8 *)((long)register0x00000008 + -0xe0) = uVar12;
        *(undefined8 *)((long)register0x00000008 + -0xd0) = puVar10[7];
      }
      goto LAB_10ac68120;
    }
  }
  func_0x000107c2b054((undefined1 *)((long)register0x00000008 + -0xe0),&UNK_10f69ed18);
LAB_10ac68120:
  unaff_x20 = (undefined8 *)((long)register0x00000008 + -0x150);
  func_0x00010989f98c((undefined1 *)((long)register0x00000008 + -0x110),unaff_x23 + 0x28);
  unaff_x21 = *(ulong *)((long)register0x00000008 + -0x108);
  if (-1 < (char)*(byte *)((long)register0x00000008 + -0xf9)) {
    unaff_x21 = (ulong)*(byte *)((long)register0x00000008 + -0xf9);
  }
  FUN_10a003c90((undefined1 *)((long)register0x00000008 + -0x1a8),unaff_x21 + 0xd,
                (undefined1 *)((long)register0x00000008 + -0x1c0));
  unaff_x22 = *(undefined1 **)((long)register0x00000008 + -0x1a8);
  if (-1 < *(char *)((long)register0x00000008 + -0x191)) {
    unaff_x22 = (undefined1 *)((long)register0x00000008 + -0x1a8);
  }
  if (unaff_x21 != 0) {
    puVar1 = *(undefined1 **)((long)register0x00000008 + -0x110);
    if (-1 < *(char *)((long)register0x00000008 + -0xf9)) {
      puVar1 = (undefined1 *)((long)register0x00000008 + -0x110);
    }
    _memmove(unaff_x22,puVar1,unaff_x21);
  }
  puVar7 = (undefined8 *)(unaff_x22 + unaff_x21);
  *puVar7 = 0x6e49656361662020;
  *(undefined8 *)((long)puVar7 + 5) = 0x203a7865646e4965;
  *(undefined1 *)((long)puVar7 + 0xd) = 0;
  __ZNSt3__19to_stringEi
            ((undefined1 *)((long)register0x00000008 + -0x1c0),*(undefined4 *)(unaff_x23 + 0x120));
  uVar2 = *(ulong *)((long)register0x00000008 + -0x1b8);
  puVar1 = *(undefined1 **)((long)register0x00000008 + -0x1c0);
  if (-1 < (char)*(byte *)((long)register0x00000008 + -0x1a9)) {
    uVar2 = (ulong)*(byte *)((long)register0x00000008 + -0x1a9);
    puVar1 = (undefined1 *)((long)register0x00000008 + -0x1c0);
  }
  puVar7 = (undefined8 *)((long)register0x00000008 + -0x1a8);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm(puVar7,puVar1,uVar2);
  uVar13 = puVar7[1];
  uVar12 = *puVar7;
  *(undefined8 *)((long)register0x00000008 + -0x180) = puVar7[2];
  *(undefined8 *)((long)register0x00000008 + -0x188) = uVar13;
  *(undefined8 *)((long)register0x00000008 + -400) = uVar12;
  puVar7[1] = 0;
  puVar7[2] = 0;
  *puVar7 = 0;
  puVar7 = (undefined8 *)((long)register0x00000008 + -400);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (puVar7,&UNK_10f69ed43,0x16);
  uVar13 = puVar7[1];
  uVar12 = *puVar7;
  *(undefined8 *)((long)register0x00000008 + -0x160) = puVar7[2];
  *(undefined8 *)((long)register0x00000008 + -0x168) = uVar13;
  *(undefined8 *)((long)register0x00000008 + -0x170) = uVar12;
  puVar7[1] = 0;
  puVar7[2] = 0;
  *puVar7 = 0;
  uVar2 = *(ulong *)((long)register0x00000008 + -0xd8);
  puVar1 = *(undefined1 **)((long)register0x00000008 + -0xe0);
  if (-1 < (char)*(byte *)((long)register0x00000008 + -0xc9)) {
    uVar2 = (ulong)*(byte *)((long)register0x00000008 + -0xc9);
    puVar1 = (undefined1 *)((long)register0x00000008 + -0xe0);
  }
  puVar7 = (undefined8 *)((long)register0x00000008 + -0x170);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm(puVar7,puVar1,uVar2);
  uVar13 = puVar7[1];
  uVar12 = *puVar7;
  *(undefined8 *)((long)register0x00000008 + -0x140) = puVar7[2];
  *(undefined8 *)((long)register0x00000008 + -0x148) = uVar13;
  *unaff_x20 = uVar12;
  puVar7[1] = 0;
  puVar7[2] = 0;
  *puVar7 = 0;
  puVar7 = (undefined8 *)((long)register0x00000008 + -0x150);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (puVar7,&UNK_10f69ed5a,0x18);
  uVar13 = puVar7[1];
  uVar12 = *puVar7;
  *(undefined8 *)((long)register0x00000008 + -0x120) = puVar7[2];
  *(undefined8 *)((long)register0x00000008 + -0x128) = uVar13;
  *(undefined8 *)((long)register0x00000008 + -0x130) = uVar12;
  puVar7[1] = 0;
  puVar7[2] = 0;
  *puVar7 = 0;
  __ZNSt3__19to_stringEf
            ((undefined1 *)((long)register0x00000008 + -0x1d8),*(undefined4 *)(unaff_x23 + 0x128));
  uVar2 = *(ulong *)((long)register0x00000008 + -0x1d0);
  puVar1 = *(undefined1 **)((long)register0x00000008 + -0x1d8);
  if (-1 < (char)*(byte *)((long)register0x00000008 + -0x1c1)) {
    uVar2 = (ulong)*(byte *)((long)register0x00000008 + -0x1c1);
    puVar1 = (undefined1 *)((long)register0x00000008 + -0x1d8);
  }
  puVar7 = (undefined8 *)((long)register0x00000008 + -0x130);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm(puVar7,puVar1,uVar2);
  uVar12 = *puVar7;
  puVar6 = *(undefined8 **)((long)register0x00000008 + -0x1e8);
  puVar6[1] = puVar7[1];
  *puVar6 = uVar12;
  puVar6[2] = puVar7[2];
  puVar7[1] = 0;
  puVar7[2] = 0;
  *puVar7 = 0;
  if (*(char *)((long)register0x00000008 + -0x1c1) < '\0') {
    __ZdlPv(*(undefined8 *)((long)register0x00000008 + -0x1d8));
  }
  if (*(char *)((long)register0x00000008 + -0x119) < '\0') {
    __ZdlPv(*(undefined8 *)((long)register0x00000008 + -0x130));
  }
  if (*(char *)((long)register0x00000008 + -0x139) < '\0') {
    __ZdlPv(*(undefined8 *)((long)register0x00000008 + -0x150));
  }
  if (*(char *)((long)register0x00000008 + -0x159) < '\0') {
    __ZdlPv(*(undefined8 *)((long)register0x00000008 + -0x170));
  }
  if (*(char *)((long)register0x00000008 + -0x179) < '\0') {
    __ZdlPv(*(undefined8 *)((long)register0x00000008 + -400));
  }
  if (*(char *)((long)register0x00000008 + -0x1a9) < '\0') {
    __ZdlPv(*(undefined8 *)((long)register0x00000008 + -0x1c0));
  }
  if (*(char *)((long)register0x00000008 + -0x191) < '\0') {
    __ZdlPv(*(undefined8 *)((long)register0x00000008 + -0x1a8));
  }
  if (*(char *)((long)register0x00000008 + -0xf9) < '\0') {
    __ZdlPv(*(undefined8 *)((long)register0x00000008 + -0x110));
  }
  unaff_x19 = *(long *)((long)register0x00000008 + -0xf0);
  FUN_10ac80438();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)((long)register0x00000008 + -0x78)) {
    return;
  }
  ___stack_chk_fail();
  FUN_10ac80438(*(undefined8 *)((long)register0x00000008 + -0xf0));
  unaff_x30 = FUN_10ac68544;
  param_2 = unaff_x19;
  __Unwind_Resume();
  unaff_x26 = 0x60;
  register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x1f0);
  param_1 = extraout_x8;
  goto FUN_10ac67eb8;
}



/* Entry: 10ac6854c; end: 10ac686d3;  */

void FUN_10ac6854c(long param_1,long *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  float fVar4;
  long *plVar5;
  undefined **ppuVar6;
  long lVar7;
  float fVar8;
  undefined *puStack_e0;
  long *plStack_d8;
  undefined8 uStack_98;
  long *plStack_90;
  code *pcStack_88;
  undefined **ppuStack_80;
  long lStack_78;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar5 = param_2;
  (**(code **)(*param_2 + 200))(param_2,&PTR_DAT_110c5f690);
  *(int *)(param_1 + 0x120) = (int)plVar5;
  uStack_98 = 0;
  plStack_90 = (long *)0x0;
  FUN_10a192264(param_1 + 0x110,&uStack_98);
  plVar5 = plStack_90;
  if (plStack_90 != (long *)0x0) {
    plVar1 = plStack_90 + 1;
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
      (**(code **)(*plStack_90 + 0x10))(plStack_90);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
    }
  }
  pcStack_88 = FUN_10ac80480;
  ppuStack_80 = &PTR_FUN_110c670a8;
  lStack_78 = param_1;
  FUN_10a38b538(param_2,&PTR_DAT_110c610c8,&pcStack_88,0);
  (*(code *)*ppuStack_80)(&ppuStack_80);
  plVar5 = param_2;
  (**(code **)(*param_2 + 0x38))(param_2,&PTR_DAT_110c610e8,0);
  *(int *)(param_1 + 0x124) = (int)plVar5;
  ppuVar6 = &PTR_DAT_110c61108;
  fVar8 = 0.005;
  (**(code **)(*param_2 + 0x48))();
  fVar4 = 0.005;
  if (0.005 <= fVar8) {
    fVar4 = fVar8;
  }
  *(float *)(param_1 + 0x128) = fVar4;
  *(undefined2 *)(param_1 + 300) = 0x101;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  (*(code *)*ppuStack_80)(&ppuStack_80);
  __Unwind_Resume();
  puStack_e0 = &UNK_10f66253f;
  plStack_d8 = (long *)0x1f;
  (**(code **)(*ppuVar6 + 0x30))(ppuVar6,&PTR_DAT_110c66928,&puStack_e0);
  (**(code **)(*ppuVar6 + 0x50))(ppuVar6,&PTR_DAT_110c5f690,(int)param_2[0x24]);
  FUN_10ac65a60(param_2,param_2[0x22]);
  plStack_d8 = (long *)param_2[0x23];
  puStack_e0 = (undefined *)param_2[0x22];
  if (param_2[0x23] != 0) {
    plVar5 = (long *)(param_2[0x23] + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar3) {
        *plVar5 = *plVar5 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  FUN_10a38b7b4(ppuVar6,&PTR_DAT_110c610c8,&puStack_e0,&UNK_10f6512b9,0x10);
  plVar5 = plStack_d8;
  if (plStack_d8 != (long *)0x0) {
    plVar1 = plStack_d8 + 1;
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
      (**(code **)(*plStack_d8 + 0x10))(plStack_d8);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
    }
  }
  (**(code **)(*ppuVar6 + 0x40))(ppuVar6,&PTR_DAT_110c610e8,*(undefined4 *)((long)param_2 + 0x124));
  (**(code **)(*ppuVar6 + 0x60))((int)param_2[0x25],ppuVar6,&PTR_DAT_110c61108);
  return;
}



/* Entry: 10ac686d4; end: 10ac6881f;  */

void FUN_10ac686d4(long param_1,long *param_2)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  undefined *puStack_40;
  long *plStack_38;
  
  puStack_40 = &UNK_10f66253f;
  plStack_38 = (long *)0x1f;
  (**(code **)(*param_2 + 0x30))(param_2,&PTR_DAT_110c66928,&puStack_40);
  (**(code **)(*param_2 + 0x50))(param_2,&PTR_DAT_110c5f690,*(undefined4 *)(param_1 + 0x120));
  FUN_10ac65a60(param_1,*(undefined8 *)(param_1 + 0x110));
  plStack_38 = *(long **)(param_1 + 0x118);
  puStack_40 = *(undefined **)(param_1 + 0x110);
  if (*(long *)(param_1 + 0x118) != 0) {
    plVar1 = (long *)(*(long *)(param_1 + 0x118) + 8);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = *plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  FUN_10a38b7b4(param_2,&PTR_DAT_110c610c8,&puStack_40,&UNK_10f6512b9,0x10);
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
  (**(code **)(*param_2 + 0x40))(param_2,&PTR_DAT_110c610e8,*(undefined4 *)(param_1 + 0x124));
  (**(code **)(*param_2 + 0x60))(*(undefined4 *)(param_1 + 0x128),param_2,&PTR_DAT_110c61108);
  return;
}



/* Entry: 10ac68820; end: 10ac688a3;  */

undefined1  [16] FUN_10ac68820(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x20;
  auVar1._0_8_ = &UNK_10f69f838;
  return auVar1;
}



/* Entry: 10ac688a4; end: 10ac689a7;  */

undefined8 * FUN_10ac688a4(undefined8 *param_1)

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
  
  *param_1 = &PTR_FUN_110c61140;
  param_1[2] = &PTR_FUN_110c611e8;
  param_1[5] = &PTR_DAT_110c61218;
  param_1[0x22] = &PTR_DAT_110c612c8;
  param_1[0x15] = &PTR_DAT_110c61270;
  FUN_10ac80530(param_1 + 0x1e);
  func_0x00010a761ebc(param_1 + 0x1b);
  func_0x00010a0536d4(param_1 + 0x19);
  param_1[0x15] = &PTR_FUN_110b9f9a8;
  if ((undefined8 *)param_1[0x18] != (undefined8 *)0x0) {
    *(undefined8 *)param_1[0x18] = 0;
  }
  func_0x00010a004e5c(param_1 + 0x16);
  *param_1 = &PTR_FUN_110c652b0;
  param_1[2] = &PTR_FUN_110c66d30;
  param_1[5] = &PTR_DAT_110c66d60;
  param_1[0x22] = &PTR_DAT_110c65380;
  FUN_10ac79eac(param_1 + 0x13);
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



/* Entry: 10ac689a8; end: 10ac689d3;  */

undefined8 * FUN_10ac689a8(undefined8 *param_1)

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
  
  *param_1 = &PTR_FUN_110c61140;
  param_1[2] = &PTR_FUN_110c611e8;
  param_1[5] = &PTR_DAT_110c61218;
  param_1[0x22] = &PTR_DAT_110c612c8;
  param_1[0x15] = &PTR_DAT_110c61270;
  FUN_10ac80530(param_1 + 0x1e);
  func_0x00010a761ebc(param_1 + 0x1b);
  func_0x00010a0536d4(param_1 + 0x19);
  param_1[0x15] = &PTR_FUN_110b9f9a8;
  if ((undefined8 *)param_1[0x18] != (undefined8 *)0x0) {
    *(undefined8 *)param_1[0x18] = 0;
  }
  func_0x00010a004e5c(param_1 + 0x16);
  *param_1 = &PTR_FUN_110c652b0;
  param_1[2] = &PTR_FUN_110c66d30;
  param_1[5] = &PTR_DAT_110c66d60;
  param_1[0x22] = &PTR_DAT_110c65380;
  FUN_10ac79eac(param_1 + 0x13);
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



/* Entry: 10ac689d4; end: 10ac68a2f;  */

void FUN_10ac689d4(void)

{
  FUN_10ac688a4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10ac68a30; end: 10ac68a5f;  */

void FUN_10ac68a30(long *param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(*param_1 + -0x18);
  FUN_10ac688a4((long)param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)((long)param_1 + lVar1);
  return;
}



/* Entry: 10ac68a60; end: 10ac68c2f;  */

undefined8 * FUN_10ac68a60(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  param_1[0x22] = &PTR_FUN_110c383b8;
  *(undefined2 *)(param_1 + 0x25) = 0x100;
  puVar1 = param_1;
  FUN_10ac68c30(param_1,&PTR_PTR_110c61308,param_2);
  FUN_10a03c0d0(puVar1 + 0x15);
  *param_1 = &PTR_FUN_110c61140;
  param_1[2] = &PTR_FUN_110c611e8;
  param_1[5] = &PTR_DAT_110c61218;
  param_1[0x22] = &PTR_DAT_110c612c8;
  param_1[0x15] = &PTR_DAT_110c61270;
  uVar2 = *param_3;
  param_1[0x1a] = param_3[1];
  param_1[0x19] = uVar2;
  *param_3 = 0;
  param_3[1] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  *(undefined4 *)(param_1 + 0x1d) = 0;
  puVar1 = (undefined8 *)0x180;
  __Znwm();
  puVar1[1] = 0;
  puVar1[2] = 0;
  *puVar1 = &PTR_FUN_110c670d0;
  puVar1[5] = 0;
  puVar1[4] = 0;
  puVar1[7] = 0;
  puVar1[6] = 0;
  puVar1[9] = 0;
  puVar1[8] = 0;
  puVar1[0xb] = 0;
  puVar1[10] = 0;
  puVar1[0xd] = 0;
  puVar1[0xc] = 0;
  puVar1[0xf] = 0;
  puVar1[0xe] = 0;
  puVar1[0x11] = 0;
  puVar1[0x10] = 0;
  puVar1[0x13] = 0;
  puVar1[0x12] = 0;
  puVar1[0x15] = 0;
  puVar1[0x14] = 0;
  puVar1[0x17] = 0;
  puVar1[0x16] = 0;
  puVar1[0x19] = 0;
  puVar1[0x18] = 0;
  puVar1[0x1b] = 0;
  puVar1[0x1a] = 0;
  puVar1[0x1d] = 0;
  puVar1[0x1c] = 0;
  puVar1[0x1f] = 0;
  puVar1[0x1e] = 0;
  puVar1[0x21] = 0;
  puVar1[0x20] = 0;
  puVar1[0x23] = 0;
  puVar1[0x22] = 0;
  puVar1[0x25] = 0;
  puVar1[0x24] = 0;
  puVar1[0x27] = 0;
  puVar1[0x26] = 0;
  puVar1[0x29] = 0;
  puVar1[0x28] = 0;
  puVar1[0x2b] = 0;
  puVar1[0x2a] = 0;
  puVar1[0x2d] = 0;
  puVar1[0x2c] = 0;
  puVar1[3] = &PTR_FUN_110c66e30;
  puVar1[0x2e] = 0;
  puVar1[0x2f] = 0;
  *(undefined8 *)((long)puVar1 + 0x3c) = 0;
  *(undefined8 *)((long)puVar1 + 0x34) = 0;
  *(undefined8 *)((long)puVar1 + 0x4c) = 0;
  *(undefined8 *)((long)puVar1 + 0x44) = 0;
  *(undefined8 *)((long)puVar1 + 0x5c) = 0;
  *(undefined8 *)((long)puVar1 + 0x54) = 0;
  *(undefined8 *)((long)puVar1 + 0x6c) = 0;
  *(undefined8 *)((long)puVar1 + 100) = 0;
  *(undefined8 *)((long)puVar1 + 0x7c) = 0;
  *(undefined8 *)((long)puVar1 + 0x74) = 0;
  *(undefined8 *)((long)puVar1 + 0x8c) = 0;
  *(undefined8 *)((long)puVar1 + 0x84) = 0;
  *(undefined8 *)((long)puVar1 + 0x9c) = 0;
  *(undefined8 *)((long)puVar1 + 0x94) = 0;
  *(undefined8 *)((long)puVar1 + 0xac) = 0;
  *(undefined8 *)((long)puVar1 + 0xa4) = 0;
  *(undefined8 *)((long)puVar1 + 0xbc) = 0;
  *(undefined8 *)((long)puVar1 + 0xb4) = 0;
  *(undefined8 *)((long)puVar1 + 0xcc) = 0;
  *(undefined8 *)((long)puVar1 + 0xc4) = 0;
  *(undefined8 *)((long)puVar1 + 0xdc) = 0;
  *(undefined8 *)((long)puVar1 + 0xd4) = 0;
  *(undefined8 *)((long)puVar1 + 0xec) = 0;
  *(undefined8 *)((long)puVar1 + 0xe4) = 0;
  *(undefined8 *)((long)puVar1 + 0x2c) = 0;
  *(undefined8 *)((long)puVar1 + 0x24) = 0;
  *(undefined8 *)((long)puVar1 + 0xfc) = 0;
  *(undefined8 *)((long)puVar1 + 0xf4) = 0;
  *(undefined8 *)((long)puVar1 + 0x10c) = 0;
  *(undefined8 *)((long)puVar1 + 0x104) = 0;
  *(undefined8 *)((long)puVar1 + 0x11c) = 0;
  *(undefined8 *)((long)puVar1 + 0x114) = 0;
  *(undefined8 *)((long)puVar1 + 300) = 0;
  *(undefined8 *)((long)puVar1 + 0x124) = 0;
  *(undefined8 *)((long)puVar1 + 0x13c) = 0;
  *(undefined8 *)((long)puVar1 + 0x134) = 0;
  param_1[0x1e] = puVar1 + 3;
  param_1[0x1f] = puVar1;
  *(undefined1 *)(param_1 + 0x20) = 0;
  *(undefined8 *)((long)param_1 + 0x104) = 0x3f8000003f800000;
  FUN_10a5ae998(param_1[0x16],&PTR_DAT_110b9f988,param_2,param_1 + 0x15);
  return param_1;
}



/* Entry: 10ac68c30; end: 10ac68cf3;  */

long * FUN_10ac68c30(long *param_1,long *param_2,long param_3)

{
  long *plVar1;
  long lVar2;
  
  plVar1 = param_1;
  FUN_10ac63120(param_1,param_3);
  lVar2 = *param_2;
  *plVar1 = lVar2;
  plVar1[2] = (long)&PTR_FUN_110c66d30;
  plVar1[5] = (long)&PTR_DAT_110c66d60;
  *(long *)((long)plVar1 + *(long *)(lVar2 + -0x18)) = param_2[1];
  plVar1[0x13] = 0;
  plVar1[0x14] = 0;
  plVar1 = (long *)((long)plVar1 + *(long *)(*plVar1 + -0x18));
  if ((*(byte *)(plVar1 + 3) & 1) == 0) {
    *(undefined1 *)(plVar1 + 3) = 1;
    plVar1[2] = param_3;
    if (param_3 != 0) {
      plVar1[1] = *(long *)(*(long *)(param_3 + 0x850) + 0x2c);
    }
    (**(code **)(*plVar1 + 0x18))();
  }
  return param_1;
}



/* Entry: 10ac68cf4; end: 10ac68d03;  */

void FUN_10ac68cf4(long *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  long lVar5;
  long *unaff_x19;
  long *unaff_x20;
  long *unaff_x21;
  long *plVar6;
  undefined8 uVar7;
  undefined1 *unaff_x22;
  undefined8 unaff_x23;
  undefined8 unaff_x24;
  undefined1 *unaff_x29;
  code *unaff_x30;
  
  if ((int)param_1[0x1d] != 0) {
    return;
  }
  while( true ) {
    *(undefined8 *)((long)register0x00000008 + -0x40) = unaff_x24;
    *(undefined8 *)((long)register0x00000008 + -0x38) = unaff_x23;
    *(undefined1 **)((long)register0x00000008 + -0x30) = unaff_x22;
    *(long **)((long)register0x00000008 + -0x28) = unaff_x21;
    *(long **)((long)register0x00000008 + -0x20) = unaff_x20;
    *(long **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
    *(undefined8 *)((long)register0x00000008 + -0x48) =
         *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
    *(undefined4 *)(param_1 + 0x1d) = 1;
    *(long *)((long)register0x00000008 + -200) = param_1[0x12];
    FUN_10a761f14((undefined1 *)((long)register0x00000008 + -0x88),
                  (undefined1 *)((long)register0x00000008 + -0xe0),
                  (undefined1 *)((long)register0x00000008 + -200));
    unaff_x21 = param_1 + 0x1b;
    FUN_10a74bcf4(unaff_x21,(undefined1 *)((long)register0x00000008 + -0x88));
    unaff_x19 = *(long **)((long)register0x00000008 + -0x80);
    if (unaff_x19 != (long *)0x0) {
      plVar6 = unaff_x19 + 1;
      do {
        lVar5 = *plVar6;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
        if (bVar3) {
          *plVar6 = lVar5 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar5 == 0) {
        (**(code **)(*unaff_x19 + 0x10))(unaff_x19);
        unaff_x21 = unaff_x19;
        __ZNSt3__119__shared_weak_count14__release_weakEv();
      }
    }
    unaff_x20 = param_1;
    if (param_1[0x19] == 0) {
      FUN_10ac45bf0((undefined1 *)((long)register0x00000008 + -0x88),param_1 + 8);
      unaff_x23 = *(undefined8 *)((long)register0x00000008 + -0x88);
      unaff_x19 = *(long **)((long)register0x00000008 + -0x80);
      *(undefined8 *)((long)register0x00000008 + -0x88) = 0;
      *(undefined8 *)((long)register0x00000008 + -0x80) = 0;
      if (unaff_x19 != (long *)0x0) {
        plVar6 = unaff_x19 + 2;
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
          if (bVar3) {
            *plVar6 = *plVar6 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        plVar6 = unaff_x19 + 1;
        do {
          lVar5 = *plVar6;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
          if (bVar3) {
            *plVar6 = lVar5 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar5 == 0) {
          (**(code **)(*unaff_x19 + 0x10))(unaff_x19);
          __ZNSt3__119__shared_weak_count14__release_weakEv(unaff_x19);
        }
      }
      plVar6 = *(long **)((long)register0x00000008 + -0x80);
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
      uVar7 = *(undefined8 *)(param_1[0x12] + 0x888);
      puVar4 = (undefined8 *)0x20;
      __Znwm();
      *(undefined8 **)((long)register0x00000008 + -0xe0) = puVar4;
      *(undefined8 *)((long)register0x00000008 + -0xd0) = 0x8000000000000020;
      *(undefined8 *)((long)register0x00000008 + -0xd8) = 0x1f;
      puVar4[1] = 0x455f544847494c5f;
      *puVar4 = 0x45524f43534e454c;
      *(undefined8 *)((long)puVar4 + 0x17) = 0x4c45444f4d5f4e4f;
      *(undefined8 *)((long)puVar4 + 0xf) = 0x4954414d49545345;
      *(undefined1 *)((long)puVar4 + 0x1f) = 0;
      if (unaff_x19 == (long *)0x0) {
        *(undefined8 *)((long)register0x00000008 + -0x88) = 0x10ac80620;
        *(undefined ***)((long)register0x00000008 + -0x80) = &PTR_FUN_110c67110;
        *(undefined8 *)((long)register0x00000008 + -0x78) = unaff_x23;
        *(undefined8 *)((long)register0x00000008 + -0x70) = 0;
        *(code **)((long)register0x00000008 + -200) = FUN_10ac80728;
        *(undefined ***)((long)register0x00000008 + -0xc0) = &PTR_FUN_110c67128;
        *(undefined8 *)((long)register0x00000008 + -0xb8) = unaff_x23;
        *(undefined8 *)((long)register0x00000008 + -0xb0) = 0;
      }
      else {
        plVar6 = unaff_x19 + 2;
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
          if (bVar3) {
            *plVar6 = *plVar6 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        *(undefined8 *)((long)register0x00000008 + -0x88) = 0x10ac80620;
        *(undefined ***)((long)register0x00000008 + -0x80) = &PTR_FUN_110c67110;
        *(undefined8 *)((long)register0x00000008 + -0x78) = unaff_x23;
        *(long **)((long)register0x00000008 + -0x70) = unaff_x19;
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
          if (bVar3) {
            *plVar6 = *plVar6 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
          if (bVar3) {
            *plVar6 = *plVar6 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        *(code **)((long)register0x00000008 + -200) = FUN_10ac80728;
        *(undefined ***)((long)register0x00000008 + -0xc0) = &PTR_FUN_110c67128;
        *(undefined8 *)((long)register0x00000008 + -0xb8) = unaff_x23;
        *(long **)((long)register0x00000008 + -0xb0) = unaff_x19;
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
          if (bVar3) {
            *plVar6 = *plVar6 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      unaff_x22 = (undefined1 *)((long)register0x00000008 + -0xc0);
      unaff_x20 = (long *)((long)register0x00000008 + -0x80);
      func_0x000107c2b054((undefined1 *)((long)register0x00000008 + -0xf8),&UNK_10f69e32c);
      FUN_10a76e51c(uVar7,(undefined1 *)((long)register0x00000008 + -0xe0),3,
                    (undefined1 *)((long)register0x00000008 + -0x88),
                    (undefined1 *)((long)register0x00000008 + -200),
                    (undefined1 *)((long)register0x00000008 + -0xf8));
      if (*(char *)((long)register0x00000008 + -0xe1) < '\0') {
        __ZdlPv(*(undefined8 *)((long)register0x00000008 + -0xf8));
      }
      (*(code *)**(undefined8 **)((long)register0x00000008 + -0xc0))(unaff_x22);
      if (unaff_x19 == (long *)0x0) {
        unaff_x21 = unaff_x20;
        (*(code *)**(undefined8 **)((long)register0x00000008 + -0x80))();
      }
      else {
        __ZNSt3__119__shared_weak_count14__release_weakEv(unaff_x19);
        (*(code *)**(undefined8 **)((long)register0x00000008 + -0x80))(unaff_x20);
        unaff_x21 = unaff_x19;
        __ZNSt3__119__shared_weak_count14__release_weakEv();
      }
      if (*(char *)((long)register0x00000008 + -0xc9) < '\0') {
        unaff_x21 = *(long **)((long)register0x00000008 + -0xe0);
        __ZdlPv();
      }
      if (unaff_x19 != (long *)0x0) {
        unaff_x21 = unaff_x19;
        __ZNSt3__119__shared_weak_count14__release_weakEv();
      }
    }
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)((long)register0x00000008 + -0x48))
    break;
    ___stack_chk_fail();
    if (*(char *)((long)register0x00000008 + -0xe1) < '\0') {
      __ZdlPv(*(undefined8 *)((long)register0x00000008 + -0xf8));
    }
    (*(code *)**(undefined8 **)((long)register0x00000008 + -0xc0))(unaff_x22);
    if (unaff_x19 == (long *)0x0) {
      (*(code *)**(undefined8 **)((long)register0x00000008 + -0x80))(unaff_x20);
    }
    else {
      __ZNSt3__119__shared_weak_count14__release_weakEv(unaff_x19);
      (*(code *)**(undefined8 **)((long)register0x00000008 + -0x80))(unaff_x20);
      __ZNSt3__119__shared_weak_count14__release_weakEv(unaff_x19);
    }
    if (*(char *)((long)register0x00000008 + -0xc9) < '\0') {
      __ZdlPv(*(undefined8 *)((long)register0x00000008 + -0xe0));
    }
    if (unaff_x19 != (long *)0x0) {
      __ZNSt3__119__shared_weak_count14__release_weakEv(unaff_x19);
    }
    unaff_x30 = FUN_10ac690a4;
    param_1 = unaff_x21;
    __Unwind_Resume();
    if ((int)param_1[0x1b] != 0) {
      return;
    }
    param_1 = param_1 + -2;
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x100);
  }
  return;
}



/* Entry: 10ac68d04; end: 10ac690a3;  */

void FUN_10ac68d04(long *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  long lVar5;
  long *unaff_x19;
  long *unaff_x20;
  long *unaff_x21;
  long *plVar6;
  undefined8 uVar7;
  undefined1 *unaff_x22;
  undefined8 unaff_x23;
  undefined8 unaff_x24;
  undefined1 *unaff_x29;
  code *unaff_x30;
  
  while( true ) {
    *(undefined8 *)((long)register0x00000008 + -0x40) = unaff_x24;
    *(undefined8 *)((long)register0x00000008 + -0x38) = unaff_x23;
    *(undefined1 **)((long)register0x00000008 + -0x30) = unaff_x22;
    *(long **)((long)register0x00000008 + -0x28) = unaff_x21;
    *(long **)((long)register0x00000008 + -0x20) = unaff_x20;
    *(long **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
    *(undefined8 *)((long)register0x00000008 + -0x48) =
         *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
    *(undefined4 *)(param_1 + 0x1d) = 1;
    *(long *)((long)register0x00000008 + -200) = param_1[0x12];
    FUN_10a761f14((undefined1 *)((long)register0x00000008 + -0x88),
                  (undefined1 *)((long)register0x00000008 + -0xe0),
                  (undefined1 *)((long)register0x00000008 + -200));
    unaff_x21 = param_1 + 0x1b;
    FUN_10a74bcf4(unaff_x21,(undefined1 *)((long)register0x00000008 + -0x88));
    unaff_x19 = *(long **)((long)register0x00000008 + -0x80);
    if (unaff_x19 != (long *)0x0) {
      plVar6 = unaff_x19 + 1;
      do {
        lVar5 = *plVar6;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
        if (bVar3) {
          *plVar6 = lVar5 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar5 == 0) {
        (**(code **)(*unaff_x19 + 0x10))(unaff_x19);
        unaff_x21 = unaff_x19;
        __ZNSt3__119__shared_weak_count14__release_weakEv();
      }
    }
    unaff_x20 = param_1;
    if (param_1[0x19] == 0) {
      FUN_10ac45bf0((undefined1 *)((long)register0x00000008 + -0x88),param_1 + 8);
      unaff_x23 = *(undefined8 *)((long)register0x00000008 + -0x88);
      unaff_x19 = *(long **)((long)register0x00000008 + -0x80);
      *(undefined8 *)((long)register0x00000008 + -0x88) = 0;
      *(undefined8 *)((long)register0x00000008 + -0x80) = 0;
      if (unaff_x19 != (long *)0x0) {
        plVar6 = unaff_x19 + 2;
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
          if (bVar3) {
            *plVar6 = *plVar6 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        plVar6 = unaff_x19 + 1;
        do {
          lVar5 = *plVar6;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
          if (bVar3) {
            *plVar6 = lVar5 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar5 == 0) {
          (**(code **)(*unaff_x19 + 0x10))(unaff_x19);
          __ZNSt3__119__shared_weak_count14__release_weakEv(unaff_x19);
        }
      }
      plVar6 = *(long **)((long)register0x00000008 + -0x80);
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
      uVar7 = *(undefined8 *)(param_1[0x12] + 0x888);
      puVar4 = (undefined8 *)0x20;
      __Znwm();
      *(undefined8 **)((long)register0x00000008 + -0xe0) = puVar4;
      *(undefined8 *)((long)register0x00000008 + -0xd0) = 0x8000000000000020;
      *(undefined8 *)((long)register0x00000008 + -0xd8) = 0x1f;
      puVar4[1] = 0x455f544847494c5f;
      *puVar4 = 0x45524f43534e454c;
      *(undefined8 *)((long)puVar4 + 0x17) = 0x4c45444f4d5f4e4f;
      *(undefined8 *)((long)puVar4 + 0xf) = 0x4954414d49545345;
      *(undefined1 *)((long)puVar4 + 0x1f) = 0;
      if (unaff_x19 == (long *)0x0) {
        *(undefined8 *)((long)register0x00000008 + -0x88) = 0x10ac80620;
        *(undefined ***)((long)register0x00000008 + -0x80) = &PTR_FUN_110c67110;
        *(undefined8 *)((long)register0x00000008 + -0x78) = unaff_x23;
        *(undefined8 *)((long)register0x00000008 + -0x70) = 0;
        *(code **)((long)register0x00000008 + -200) = FUN_10ac80728;
        *(undefined ***)((long)register0x00000008 + -0xc0) = &PTR_FUN_110c67128;
        *(undefined8 *)((long)register0x00000008 + -0xb8) = unaff_x23;
        *(undefined8 *)((long)register0x00000008 + -0xb0) = 0;
      }
      else {
        plVar6 = unaff_x19 + 2;
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
          if (bVar3) {
            *plVar6 = *plVar6 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        *(undefined8 *)((long)register0x00000008 + -0x88) = 0x10ac80620;
        *(undefined ***)((long)register0x00000008 + -0x80) = &PTR_FUN_110c67110;
        *(undefined8 *)((long)register0x00000008 + -0x78) = unaff_x23;
        *(long **)((long)register0x00000008 + -0x70) = unaff_x19;
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
          if (bVar3) {
            *plVar6 = *plVar6 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
          if (bVar3) {
            *plVar6 = *plVar6 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        *(code **)((long)register0x00000008 + -200) = FUN_10ac80728;
        *(undefined ***)((long)register0x00000008 + -0xc0) = &PTR_FUN_110c67128;
        *(undefined8 *)((long)register0x00000008 + -0xb8) = unaff_x23;
        *(long **)((long)register0x00000008 + -0xb0) = unaff_x19;
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
          if (bVar3) {
            *plVar6 = *plVar6 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      unaff_x22 = (undefined1 *)((long)register0x00000008 + -0xc0);
      unaff_x20 = (long *)((long)register0x00000008 + -0x80);
      func_0x000107c2b054((undefined1 *)((long)register0x00000008 + -0xf8),&UNK_10f69e32c);
      FUN_10a76e51c(uVar7,(undefined1 *)((long)register0x00000008 + -0xe0),3,
                    (undefined1 *)((long)register0x00000008 + -0x88),
                    (undefined1 *)((long)register0x00000008 + -200),
                    (undefined1 *)((long)register0x00000008 + -0xf8));
      if (*(char *)((long)register0x00000008 + -0xe1) < '\0') {
        __ZdlPv(*(undefined8 *)((long)register0x00000008 + -0xf8));
      }
      (*(code *)**(undefined8 **)((long)register0x00000008 + -0xc0))(unaff_x22);
      if (unaff_x19 == (long *)0x0) {
        unaff_x21 = unaff_x20;
        (*(code *)**(undefined8 **)((long)register0x00000008 + -0x80))();
      }
      else {
        __ZNSt3__119__shared_weak_count14__release_weakEv(unaff_x19);
        (*(code *)**(undefined8 **)((long)register0x00000008 + -0x80))(unaff_x20);
        unaff_x21 = unaff_x19;
        __ZNSt3__119__shared_weak_count14__release_weakEv();
      }
      if (*(char *)((long)register0x00000008 + -0xc9) < '\0') {
        unaff_x21 = *(long **)((long)register0x00000008 + -0xe0);
        __ZdlPv();
      }
      if (unaff_x19 != (long *)0x0) {
        unaff_x21 = unaff_x19;
        __ZNSt3__119__shared_weak_count14__release_weakEv();
      }
    }
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)((long)register0x00000008 + -0x48))
    break;
    ___stack_chk_fail();
    if (*(char *)((long)register0x00000008 + -0xe1) < '\0') {
      __ZdlPv(*(undefined8 *)((long)register0x00000008 + -0xf8));
    }
    (*(code *)**(undefined8 **)((long)register0x00000008 + -0xc0))(unaff_x22);
    if (unaff_x19 == (long *)0x0) {
      (*(code *)**(undefined8 **)((long)register0x00000008 + -0x80))(unaff_x20);
    }
    else {
      __ZNSt3__119__shared_weak_count14__release_weakEv(unaff_x19);
      (*(code *)**(undefined8 **)((long)register0x00000008 + -0x80))(unaff_x20);
      __ZNSt3__119__shared_weak_count14__release_weakEv(unaff_x19);
    }
    if (*(char *)((long)register0x00000008 + -0xc9) < '\0') {
      __ZdlPv(*(undefined8 *)((long)register0x00000008 + -0xe0));
    }
    if (unaff_x19 != (long *)0x0) {
      __ZNSt3__119__shared_weak_count14__release_weakEv(unaff_x19);
    }
    unaff_x30 = FUN_10ac690a4;
    param_1 = unaff_x21;
    __Unwind_Resume();
    if ((int)param_1[0x1b] != 0) {
      return;
    }
    param_1 = param_1 + -2;
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x100);
  }
  return;
}



/* Entry: 10ac690a4; end: 10ac690b7;  */

void FUN_10ac690a4(long *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  long lVar5;
  long *unaff_x19;
  long *unaff_x20;
  long *plVar6;
  undefined8 uVar7;
  long *unaff_x21;
  undefined1 *unaff_x22;
  undefined8 unaff_x23;
  undefined8 unaff_x24;
  undefined1 *unaff_x29;
  code *unaff_x30;
  
  while( true ) {
    if ((int)param_1[0x1b] != 0) {
      return;
    }
    plVar6 = param_1 + -2;
    *(undefined8 *)((long)register0x00000008 + -0x40) = unaff_x24;
    *(undefined8 *)((long)register0x00000008 + -0x38) = unaff_x23;
    *(undefined1 **)((long)register0x00000008 + -0x30) = unaff_x22;
    *(long **)((long)register0x00000008 + -0x28) = unaff_x21;
    *(long **)((long)register0x00000008 + -0x20) = unaff_x20;
    *(long **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
    *(undefined8 *)((long)register0x00000008 + -0x48) =
         *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
    *(undefined4 *)(param_1 + 0x1b) = 1;
    *(long *)((long)register0x00000008 + -200) = param_1[0x10];
    FUN_10a761f14((undefined1 *)((long)register0x00000008 + -0x88),
                  (undefined1 *)((long)register0x00000008 + -0xe0),
                  (undefined1 *)((long)register0x00000008 + -200));
    unaff_x21 = param_1 + 0x19;
    FUN_10a74bcf4(unaff_x21,(undefined1 *)((long)register0x00000008 + -0x88));
    unaff_x19 = *(long **)((long)register0x00000008 + -0x80);
    if (unaff_x19 != (long *)0x0) {
      plVar1 = unaff_x19 + 1;
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
        (**(code **)(*unaff_x19 + 0x10))(unaff_x19);
        unaff_x21 = unaff_x19;
        __ZNSt3__119__shared_weak_count14__release_weakEv();
      }
    }
    if (param_1[0x17] == 0) {
      FUN_10ac45bf0((undefined1 *)((long)register0x00000008 + -0x88),param_1 + 6);
      unaff_x23 = *(undefined8 *)((long)register0x00000008 + -0x88);
      unaff_x19 = *(long **)((long)register0x00000008 + -0x80);
      *(undefined8 *)((long)register0x00000008 + -0x88) = 0;
      *(undefined8 *)((long)register0x00000008 + -0x80) = 0;
      if (unaff_x19 != (long *)0x0) {
        plVar6 = unaff_x19 + 2;
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
          if (bVar3) {
            *plVar6 = *plVar6 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        plVar6 = unaff_x19 + 1;
        do {
          lVar5 = *plVar6;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
          if (bVar3) {
            *plVar6 = lVar5 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar5 == 0) {
          (**(code **)(*unaff_x19 + 0x10))(unaff_x19);
          __ZNSt3__119__shared_weak_count14__release_weakEv(unaff_x19);
        }
      }
      plVar6 = *(long **)((long)register0x00000008 + -0x80);
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
      uVar7 = *(undefined8 *)(param_1[0x10] + 0x888);
      puVar4 = (undefined8 *)0x20;
      __Znwm();
      *(undefined8 **)((long)register0x00000008 + -0xe0) = puVar4;
      *(undefined8 *)((long)register0x00000008 + -0xd0) = 0x8000000000000020;
      *(undefined8 *)((long)register0x00000008 + -0xd8) = 0x1f;
      puVar4[1] = 0x455f544847494c5f;
      *puVar4 = 0x45524f43534e454c;
      *(undefined8 *)((long)puVar4 + 0x17) = 0x4c45444f4d5f4e4f;
      *(undefined8 *)((long)puVar4 + 0xf) = 0x4954414d49545345;
      *(undefined1 *)((long)puVar4 + 0x1f) = 0;
      if (unaff_x19 == (long *)0x0) {
        *(undefined8 *)((long)register0x00000008 + -0x88) = 0x10ac80620;
        *(undefined ***)((long)register0x00000008 + -0x80) = &PTR_FUN_110c67110;
        *(undefined8 *)((long)register0x00000008 + -0x78) = unaff_x23;
        *(undefined8 *)((long)register0x00000008 + -0x70) = 0;
        *(code **)((long)register0x00000008 + -200) = FUN_10ac80728;
        *(undefined ***)((long)register0x00000008 + -0xc0) = &PTR_FUN_110c67128;
        *(undefined8 *)((long)register0x00000008 + -0xb8) = unaff_x23;
        *(undefined8 *)((long)register0x00000008 + -0xb0) = 0;
      }
      else {
        plVar6 = unaff_x19 + 2;
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
          if (bVar3) {
            *plVar6 = *plVar6 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        *(undefined8 *)((long)register0x00000008 + -0x88) = 0x10ac80620;
        *(undefined ***)((long)register0x00000008 + -0x80) = &PTR_FUN_110c67110;
        *(undefined8 *)((long)register0x00000008 + -0x78) = unaff_x23;
        *(long **)((long)register0x00000008 + -0x70) = unaff_x19;
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
          if (bVar3) {
            *plVar6 = *plVar6 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
          if (bVar3) {
            *plVar6 = *plVar6 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        *(code **)((long)register0x00000008 + -200) = FUN_10ac80728;
        *(undefined ***)((long)register0x00000008 + -0xc0) = &PTR_FUN_110c67128;
        *(undefined8 *)((long)register0x00000008 + -0xb8) = unaff_x23;
        *(long **)((long)register0x00000008 + -0xb0) = unaff_x19;
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
          if (bVar3) {
            *plVar6 = *plVar6 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      unaff_x22 = (undefined1 *)((long)register0x00000008 + -0xc0);
      plVar6 = (long *)((long)register0x00000008 + -0x80);
      func_0x000107c2b054((undefined1 *)((long)register0x00000008 + -0xf8),&UNK_10f69e32c);
      FUN_10a76e51c(uVar7,(undefined1 *)((long)register0x00000008 + -0xe0),3,
                    (undefined1 *)((long)register0x00000008 + -0x88),
                    (undefined1 *)((long)register0x00000008 + -200),
                    (undefined1 *)((long)register0x00000008 + -0xf8));
      if (*(char *)((long)register0x00000008 + -0xe1) < '\0') {
        __ZdlPv(*(undefined8 *)((long)register0x00000008 + -0xf8));
      }
      (*(code *)**(undefined8 **)((long)register0x00000008 + -0xc0))(unaff_x22);
      if (unaff_x19 == (long *)0x0) {
        unaff_x21 = plVar6;
        (*(code *)**(undefined8 **)((long)register0x00000008 + -0x80))();
      }
      else {
        __ZNSt3__119__shared_weak_count14__release_weakEv(unaff_x19);
        (*(code *)**(undefined8 **)((long)register0x00000008 + -0x80))(plVar6);
        unaff_x21 = unaff_x19;
        __ZNSt3__119__shared_weak_count14__release_weakEv();
      }
      if (*(char *)((long)register0x00000008 + -0xc9) < '\0') {
        unaff_x21 = *(long **)((long)register0x00000008 + -0xe0);
        __ZdlPv();
      }
      if (unaff_x19 != (long *)0x0) {
        unaff_x21 = unaff_x19;
        __ZNSt3__119__shared_weak_count14__release_weakEv();
      }
    }
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)((long)register0x00000008 + -0x48))
    break;
    ___stack_chk_fail();
    if (*(char *)((long)register0x00000008 + -0xe1) < '\0') {
      __ZdlPv(*(undefined8 *)((long)register0x00000008 + -0xf8));
    }
    (*(code *)**(undefined8 **)((long)register0x00000008 + -0xc0))(unaff_x22);
    if (unaff_x19 == (long *)0x0) {
      (*(code *)**(undefined8 **)((long)register0x00000008 + -0x80))(plVar6);
    }
    else {
      __ZNSt3__119__shared_weak_count14__release_weakEv(unaff_x19);
      (*(code *)**(undefined8 **)((long)register0x00000008 + -0x80))(plVar6);
      __ZNSt3__119__shared_weak_count14__release_weakEv(unaff_x19);
    }
    if (*(char *)((long)register0x00000008 + -0xc9) < '\0') {
      __ZdlPv(*(undefined8 *)((long)register0x00000008 + -0xe0));
    }
    if (unaff_x19 != (long *)0x0) {
      __ZNSt3__119__shared_weak_count14__release_weakEv(unaff_x19);
    }
    unaff_x30 = FUN_10ac690a4;
    param_1 = unaff_x21;
    __Unwind_Resume();
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x100);
    unaff_x20 = plVar6;
  }
  return;
}



/* Entry: 10ac690b8; end: 10ac695e7;  */

void FUN_10ac690b8(undefined1 *param_1)

{
  byte bVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  undefined1 *puVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  long *plVar8;
  int iVar9;
  long lVar10;
  undefined1 *unaff_x19;
  undefined8 unaff_x20;
  long *plVar11;
  long *unaff_x21;
  undefined8 uVar12;
  undefined8 unaff_x22;
  undefined1 *unaff_x29;
  code *unaff_x30;
  
  do {
    *(undefined8 *)((long)register0x00000008 + -0x30) = unaff_x22;
    *(long **)((long)register0x00000008 + -0x28) = unaff_x21;
    *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(undefined1 **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
    iVar9 = *(int *)(param_1 + 0xe8);
    if (iVar9 == 1) {
      if (*(long *)(param_1 + 200) == 0) {
        return;
      }
      FUN_10a74c48c((undefined1 *)((long)register0x00000008 + -0x40));
      func_0x00010a8c65cc(*(undefined8 *)(*(long *)(param_1 + 0xd8) + 0x10),
                          (undefined1 *)((long)register0x00000008 + -0x40));
      if (*(long *)((long)register0x00000008 + -0x40) == 0) {
        FUN_10a00946c(&UNK_10f69ee64);
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x10ac69564);
        (*pcVar4)();
      }
      func_0x000109381b20((undefined1 *)((long)register0x00000008 + -0x50),
                          *(long *)((long)register0x00000008 + -0x40) + 0x108);
      cVar2 = *(char *)((long)register0x00000008 + -0x50);
      if (cVar2 == '\t') {
LAB_10ac6921c:
        *(undefined8 *)((long)register0x00000008 + -0x98) = *(undefined8 *)(param_1 + 0x90);
        FUN_10a762268((undefined1 *)((long)register0x00000008 + -0x70),
                      (undefined1 *)((long)register0x00000008 + -0x90),
                      (undefined1 *)((long)register0x00000008 + -0x98));
        uVar12 = *(undefined8 *)((long)register0x00000008 + -0x98);
        uVar7 = uVar12;
        FUN_10a3dedfc(uVar12);
        FUN_10a74c51c((undefined1 *)((long)register0x00000008 + -0x90),uVar12,uVar7);
        FUN_10a8cda2c(*(undefined8 *)((long)register0x00000008 + -0x70),
                      (undefined1 *)((long)register0x00000008 + -0x90));
        FUN_10a74c674((undefined1 *)((long)register0x00000008 + -0xa8),
                      *(undefined8 *)((long)register0x00000008 + -0x98),
                      (undefined1 *)((long)register0x00000008 + -0x70));
        puVar6 = *(undefined8 **)(param_1 + 0xd8);
        func_0x00010a8b9874(puVar6,&UNK_10e509e30);
        uVar7 = *puVar6;
        plVar11 = (long *)puVar6[1];
        *(undefined8 *)((long)register0x00000008 + -0xb8) = uVar7;
        *(long **)((long)register0x00000008 + -0xb0) = plVar11;
        if (plVar11 != (long *)0x0) {
          plVar8 = plVar11 + 1;
          do {
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar8,0x10);
            if (bVar3) {
              *plVar8 = *plVar8 + 1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
        }
        func_0x00010a8c5f40(uVar7,(undefined1 *)((long)register0x00000008 + -0xa8));
        FUN_10a8c6f54(*(long *)(*(long *)(param_1 + 0xd8) + 0x10),
                      *(undefined1 *)(*(long *)(*(long *)(param_1 + 0xd8) + 0x10) + 0x2e8));
        *(undefined4 *)(param_1 + 0xe8) = 2;
        if (plVar11 != (long *)0x0) {
          plVar8 = plVar11 + 1;
          do {
            lVar10 = *plVar8;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar8,0x10);
            if (bVar3) {
              *plVar8 = lVar10 + -1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (lVar10 == 0) {
            (**(code **)(*plVar11 + 0x10))(plVar11);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar11);
          }
        }
        plVar11 = *(long **)((long)register0x00000008 + -0xa0);
        if (plVar11 != (long *)0x0) {
          plVar8 = plVar11 + 1;
          do {
            lVar10 = *plVar8;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar8,0x10);
            if (bVar3) {
              *plVar8 = lVar10 + -1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (lVar10 == 0) {
            (**(code **)(*plVar11 + 0x10))(plVar11);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar11);
          }
        }
        plVar11 = *(long **)((long)register0x00000008 + -0x88);
        if (plVar11 != (long *)0x0) {
          plVar8 = plVar11 + 1;
          do {
            lVar10 = *plVar8;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar8,0x10);
            if (bVar3) {
              *plVar8 = lVar10 + -1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (lVar10 == 0) {
            (**(code **)(*plVar11 + 0x10))(plVar11);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar11);
          }
        }
        plVar11 = *(long **)((long)register0x00000008 + -0x68);
        if (plVar11 != (long *)0x0) {
          plVar8 = plVar11 + 1;
          do {
            lVar10 = *plVar8;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar8,0x10);
            if (bVar3) {
              *plVar8 = lVar10 + -1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (lVar10 == 0) {
            (**(code **)(*plVar11 + 0x10))(plVar11);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar11);
          }
        }
      }
      else {
        uVar7 = uRam00000001137ec760;
        if (-1 < cRam00000001137ec777) {
          uVar7 = 0x1137ec760;
        }
        *(undefined8 *)((long)register0x00000008 + -0x90) = uVar7;
        *(undefined1 **)((long)register0x00000008 + -0x70) =
             (undefined1 *)((long)register0x00000008 + -0x50);
        *(undefined8 *)((long)register0x00000008 + -0x68) = 0;
        *(undefined8 *)((long)register0x00000008 + -0x60) = 0;
        *(undefined8 *)((long)register0x00000008 + -0x58) = 0x8000000000000000;
        if (cVar2 == '\x01') {
          uVar7 = *(undefined8 *)((long)register0x00000008 + -0x48);
          func_0x00010938ce90(uVar7,(undefined1 *)((long)register0x00000008 + -0x90));
          *(undefined8 *)((long)register0x00000008 + -0x68) = uVar7;
          cVar2 = *(char *)((long)register0x00000008 + -0x50);
LAB_10ac6919c:
          *(undefined1 **)((long)register0x00000008 + -0x90) =
               (undefined1 *)((long)register0x00000008 + -0x50);
          *(undefined8 *)((long)register0x00000008 + -0x88) = 0;
          *(undefined8 *)((long)register0x00000008 + -0x80) = 0;
          *(undefined8 *)((long)register0x00000008 + -0x78) = 0x8000000000000000;
          if (cVar2 == '\x01') {
            *(long *)((long)register0x00000008 + -0x88) =
                 *(long *)((long)register0x00000008 + -0x48) + 8;
          }
          else {
            if (cVar2 == '\x02') {
              lVar10 = *(long *)((long)register0x00000008 + -0x48);
              goto LAB_10ac691c0;
            }
            *(undefined8 *)((long)register0x00000008 + -0x78) = 1;
          }
        }
        else {
          if (cVar2 != '\x02') {
            *(undefined8 *)((long)register0x00000008 + -0x58) = 1;
            goto LAB_10ac6919c;
          }
          lVar10 = *(long *)((long)register0x00000008 + -0x48);
          *(undefined8 *)((long)register0x00000008 + -0x60) = *(undefined8 *)(lVar10 + 8);
          *(undefined1 **)((long)register0x00000008 + -0x90) =
               (undefined1 *)((long)register0x00000008 + -0x50);
          *(undefined8 *)((long)register0x00000008 + -0x88) = 0;
          *(undefined8 *)((long)register0x00000008 + -0x80) = 0;
          *(undefined8 *)((long)register0x00000008 + -0x78) = 0x8000000000000000;
LAB_10ac691c0:
          *(undefined8 *)((long)register0x00000008 + -0x80) = *(undefined8 *)(lVar10 + 8);
        }
        puVar5 = (undefined1 *)((long)register0x00000008 + -0x70);
        func_0x000109379420(puVar5,(undefined1 *)((long)register0x00000008 + -0x90));
        if (((ulong)puVar5 & 1) != 0) goto LAB_10ac6921c;
        func_0x000109386768((undefined1 *)((long)register0x00000008 + -0x70));
        func_0x00010938d198();
        if (*(char *)((long)register0x00000008 + -0xa8) != '\x01') goto LAB_10ac6921c;
        *(undefined4 *)(param_1 + 0xe8) = 4;
      }
      func_0x000109380ffc((undefined1 *)((long)register0x00000008 + -0x48),
                          *(undefined1 *)((long)register0x00000008 + -0x50));
      unaff_x21 = *(long **)((long)register0x00000008 + -0x38);
      if (unaff_x21 != (long *)0x0) {
        plVar11 = unaff_x21 + 1;
        do {
          lVar10 = *plVar11;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar11,0x10);
          if (bVar3) {
            *plVar11 = lVar10 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar10 == 0) {
          (**(code **)(*unaff_x21 + 0x10))(unaff_x21);
          __ZNSt3__119__shared_weak_count14__release_weakEv(unaff_x21);
        }
      }
      *(undefined8 *)((long)register0x00000008 + -0x70) = 0;
      *(undefined8 *)((long)register0x00000008 + -0x68) = 0;
      FUN_10a2c8f88(param_1 + 200,(undefined1 *)((long)register0x00000008 + -0x70));
      plVar11 = *(long **)((long)register0x00000008 + -0x68);
      if (plVar11 != (long *)0x0) {
        plVar8 = plVar11 + 1;
        do {
          lVar10 = *plVar8;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar8,0x10);
          if (bVar3) {
            *plVar8 = lVar10 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar10 == 0) {
          (**(code **)(*plVar11 + 0x10))(plVar11);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar11);
        }
      }
      iVar9 = *(int *)(param_1 + 0xe8);
    }
    if (iVar9 != 2) {
      return;
    }
    if (*(int *)(*(long *)(*(long *)(param_1 + 0xd8) + 0x10) + 0x140) == 1) {
      FUN_10a8c70b8(*(undefined8 *)(*(long *)(param_1 + 0xd8) + 0x10));
    }
    bVar1 = param_1[0x100];
    param_1[0x100] = bVar1 & 0xfc;
    if (*(long *)(*(long *)(*(long *)(param_1 + 0x90) + 0x8c0) + 0x18) == 0 || (bVar1 & 4) != 0) {
      return;
    }
    if (*(int *)(param_1 + 0xe8) != 2) {
      return;
    }
    iVar9 = (int)*(undefined8 *)(*(long *)(param_1 + 0xd8) + 0x10);
    FUN_10a8c7000();
    if (iVar9 == 0) {
      return;
    }
    iVar9 = (int)*(undefined8 *)(*(long *)(param_1 + 0xd8) + 0x10);
    FUN_10a8c6990();
    if (iVar9 == 0) {
      return;
    }
    plVar11 = *(long **)(param_1 + 0xd8);
    func_0x00010a8b9874(plVar11,&UNK_10e509e30);
    for (plVar11 = *(long **)(*plVar11 + 0xf8); plVar11 != (long *)0x0;
        plVar11 = (long *)plVar11[0x13]) {
      plVar8 = plVar11;
      (**(code **)(*plVar11 + 0x80))();
      if ((int)plVar8 != 2) {
        return;
      }
    }
    lVar10 = *(long *)(*(long *)(*(long *)(param_1 + 0x90) + 0x100) + 0x260);
    *(undefined **)((long)register0x00000008 + -0x70) = &UNK_10f653c20;
    *(undefined8 *)((long)register0x00000008 + -0x68) = 0x21;
    if (lVar10 != 0) {
      FUN_10a244d68();
      FUN_10a8c6824(*(undefined8 *)(*(long *)(param_1 + 0xd8) + 0x10),lVar10);
      FUN_10a8c6740(*(undefined8 *)(*(long *)(param_1 + 0xd8) + 0x10),1);
      param_1[0x100] = param_1[0x100] | 1;
      return;
    }
    unaff_x19 = (undefined1 *)((long)register0x00000008 + -0x70);
    FUN_10a0edfc4();
    func_0x000109380ffc((undefined1 *)((long)register0x00000008 + -0x48),
                        *(undefined1 *)((long)register0x00000008 + -0x50));
    func_0x00010a051ed8((undefined1 *)((long)register0x00000008 + -0x40));
    unaff_x30 = FUN_10ac695e8;
    param_1 = unaff_x19;
    __Unwind_Resume();
    param_1 = param_1 + -0xa8;
    unaff_x20 = 0;
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0xc0);
  } while( true );
}



/* Entry: 10ac695e8; end: 10ac695ef;  */

void FUN_10ac695e8(undefined1 *param_1)

{
  byte bVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  undefined1 *puVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  long *plVar8;
  int iVar9;
  long lVar10;
  undefined1 *unaff_x19;
  long *plVar11;
  undefined8 unaff_x20;
  undefined8 uVar12;
  long *unaff_x21;
  undefined8 unaff_x22;
  undefined1 *unaff_x29;
  code *unaff_x30;
  
  do {
    *(undefined8 *)((long)register0x00000008 + -0x30) = unaff_x22;
    *(long **)((long)register0x00000008 + -0x28) = unaff_x21;
    *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(undefined1 **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
    iVar9 = *(int *)(param_1 + 0x40);
    if (iVar9 == 1) {
      if (*(long *)(param_1 + 0x20) == 0) {
        return;
      }
      FUN_10a74c48c((undefined1 *)((long)register0x00000008 + -0x40));
      func_0x00010a8c65cc(*(undefined8 *)(*(long *)(param_1 + 0x30) + 0x10),
                          (undefined1 *)((long)register0x00000008 + -0x40));
      if (*(long *)((long)register0x00000008 + -0x40) == 0) {
        FUN_10a00946c(&UNK_10f69ee64);
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x10ac69564);
        (*pcVar4)();
      }
      func_0x000109381b20((undefined1 *)((long)register0x00000008 + -0x50),
                          *(long *)((long)register0x00000008 + -0x40) + 0x108);
      cVar2 = *(char *)((long)register0x00000008 + -0x50);
      if (cVar2 == '\t') {
LAB_10ac6921c:
        *(undefined8 *)((long)register0x00000008 + -0x98) = *(undefined8 *)(param_1 + -0x18);
        FUN_10a762268((undefined1 *)((long)register0x00000008 + -0x70),
                      (undefined1 *)((long)register0x00000008 + -0x90),
                      (undefined1 *)((long)register0x00000008 + -0x98));
        uVar12 = *(undefined8 *)((long)register0x00000008 + -0x98);
        uVar7 = uVar12;
        FUN_10a3dedfc(uVar12);
        FUN_10a74c51c((undefined1 *)((long)register0x00000008 + -0x90),uVar12,uVar7);
        FUN_10a8cda2c(*(undefined8 *)((long)register0x00000008 + -0x70),
                      (undefined1 *)((long)register0x00000008 + -0x90));
        FUN_10a74c674((undefined1 *)((long)register0x00000008 + -0xa8),
                      *(undefined8 *)((long)register0x00000008 + -0x98),
                      (undefined1 *)((long)register0x00000008 + -0x70));
        puVar6 = *(undefined8 **)(param_1 + 0x30);
        func_0x00010a8b9874(puVar6,&UNK_10e509e30);
        uVar7 = *puVar6;
        plVar11 = (long *)puVar6[1];
        *(undefined8 *)((long)register0x00000008 + -0xb8) = uVar7;
        *(long **)((long)register0x00000008 + -0xb0) = plVar11;
        if (plVar11 != (long *)0x0) {
          plVar8 = plVar11 + 1;
          do {
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar8,0x10);
            if (bVar3) {
              *plVar8 = *plVar8 + 1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
        }
        func_0x00010a8c5f40(uVar7,(undefined1 *)((long)register0x00000008 + -0xa8));
        FUN_10a8c6f54(*(long *)(*(long *)(param_1 + 0x30) + 0x10),
                      *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x30) + 0x10) + 0x2e8));
        *(undefined4 *)(param_1 + 0x40) = 2;
        if (plVar11 != (long *)0x0) {
          plVar8 = plVar11 + 1;
          do {
            lVar10 = *plVar8;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar8,0x10);
            if (bVar3) {
              *plVar8 = lVar10 + -1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (lVar10 == 0) {
            (**(code **)(*plVar11 + 0x10))(plVar11);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar11);
          }
        }
        plVar11 = *(long **)((long)register0x00000008 + -0xa0);
        if (plVar11 != (long *)0x0) {
          plVar8 = plVar11 + 1;
          do {
            lVar10 = *plVar8;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar8,0x10);
            if (bVar3) {
              *plVar8 = lVar10 + -1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (lVar10 == 0) {
            (**(code **)(*plVar11 + 0x10))(plVar11);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar11);
          }
        }
        plVar11 = *(long **)((long)register0x00000008 + -0x88);
        if (plVar11 != (long *)0x0) {
          plVar8 = plVar11 + 1;
          do {
            lVar10 = *plVar8;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar8,0x10);
            if (bVar3) {
              *plVar8 = lVar10 + -1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (lVar10 == 0) {
            (**(code **)(*plVar11 + 0x10))(plVar11);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar11);
          }
        }
        plVar11 = *(long **)((long)register0x00000008 + -0x68);
        if (plVar11 != (long *)0x0) {
          plVar8 = plVar11 + 1;
          do {
            lVar10 = *plVar8;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar8,0x10);
            if (bVar3) {
              *plVar8 = lVar10 + -1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (lVar10 == 0) {
            (**(code **)(*plVar11 + 0x10))(plVar11);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar11);
          }
        }
      }
      else {
        uVar7 = uRam00000001137ec760;
        if (-1 < cRam00000001137ec777) {
          uVar7 = 0x1137ec760;
        }
        *(undefined8 *)((long)register0x00000008 + -0x90) = uVar7;
        *(undefined1 **)((long)register0x00000008 + -0x70) =
             (undefined1 *)((long)register0x00000008 + -0x50);
        *(undefined8 *)((long)register0x00000008 + -0x68) = 0;
        *(undefined8 *)((long)register0x00000008 + -0x60) = 0;
        *(undefined8 *)((long)register0x00000008 + -0x58) = 0x8000000000000000;
        if (cVar2 == '\x01') {
          uVar7 = *(undefined8 *)((long)register0x00000008 + -0x48);
          func_0x00010938ce90(uVar7,(undefined1 *)((long)register0x00000008 + -0x90));
          *(undefined8 *)((long)register0x00000008 + -0x68) = uVar7;
          cVar2 = *(char *)((long)register0x00000008 + -0x50);
LAB_10ac6919c:
          *(undefined1 **)((long)register0x00000008 + -0x90) =
               (undefined1 *)((long)register0x00000008 + -0x50);
          *(undefined8 *)((long)register0x00000008 + -0x88) = 0;
          *(undefined8 *)((long)register0x00000008 + -0x80) = 0;
          *(undefined8 *)((long)register0x00000008 + -0x78) = 0x8000000000000000;
          if (cVar2 == '\x01') {
            *(long *)((long)register0x00000008 + -0x88) =
                 *(long *)((long)register0x00000008 + -0x48) + 8;
          }
          else {
            if (cVar2 == '\x02') {
              lVar10 = *(long *)((long)register0x00000008 + -0x48);
              goto LAB_10ac691c0;
            }
            *(undefined8 *)((long)register0x00000008 + -0x78) = 1;
          }
        }
        else {
          if (cVar2 != '\x02') {
            *(undefined8 *)((long)register0x00000008 + -0x58) = 1;
            goto LAB_10ac6919c;
          }
          lVar10 = *(long *)((long)register0x00000008 + -0x48);
          *(undefined8 *)((long)register0x00000008 + -0x60) = *(undefined8 *)(lVar10 + 8);
          *(undefined1 **)((long)register0x00000008 + -0x90) =
               (undefined1 *)((long)register0x00000008 + -0x50);
          *(undefined8 *)((long)register0x00000008 + -0x88) = 0;
          *(undefined8 *)((long)register0x00000008 + -0x80) = 0;
          *(undefined8 *)((long)register0x00000008 + -0x78) = 0x8000000000000000;
LAB_10ac691c0:
          *(undefined8 *)((long)register0x00000008 + -0x80) = *(undefined8 *)(lVar10 + 8);
        }
        puVar5 = (undefined1 *)((long)register0x00000008 + -0x70);
        func_0x000109379420(puVar5,(undefined1 *)((long)register0x00000008 + -0x90));
        if (((ulong)puVar5 & 1) != 0) goto LAB_10ac6921c;
        func_0x000109386768((undefined1 *)((long)register0x00000008 + -0x70));
        func_0x00010938d198();
        if (*(char *)((long)register0x00000008 + -0xa8) != '\x01') goto LAB_10ac6921c;
        *(undefined4 *)(param_1 + 0x40) = 4;
      }
      func_0x000109380ffc((undefined1 *)((long)register0x00000008 + -0x48),
                          *(undefined1 *)((long)register0x00000008 + -0x50));
      unaff_x21 = *(long **)((long)register0x00000008 + -0x38);
      if (unaff_x21 != (long *)0x0) {
        plVar11 = unaff_x21 + 1;
        do {
          lVar10 = *plVar11;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar11,0x10);
          if (bVar3) {
            *plVar11 = lVar10 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar10 == 0) {
          (**(code **)(*unaff_x21 + 0x10))(unaff_x21);
          __ZNSt3__119__shared_weak_count14__release_weakEv(unaff_x21);
        }
      }
      *(undefined8 *)((long)register0x00000008 + -0x70) = 0;
      *(undefined8 *)((long)register0x00000008 + -0x68) = 0;
      FUN_10a2c8f88(param_1 + 0x20,(undefined1 *)((long)register0x00000008 + -0x70));
      plVar11 = *(long **)((long)register0x00000008 + -0x68);
      if (plVar11 != (long *)0x0) {
        plVar8 = plVar11 + 1;
        do {
          lVar10 = *plVar8;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar8,0x10);
          if (bVar3) {
            *plVar8 = lVar10 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar10 == 0) {
          (**(code **)(*plVar11 + 0x10))(plVar11);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar11);
        }
      }
      iVar9 = *(int *)(param_1 + 0x40);
    }
    if (iVar9 != 2) {
      return;
    }
    if (*(int *)(*(long *)(*(long *)(param_1 + 0x30) + 0x10) + 0x140) == 1) {
      FUN_10a8c70b8(*(undefined8 *)(*(long *)(param_1 + 0x30) + 0x10));
    }
    bVar1 = param_1[0x58];
    param_1[0x58] = bVar1 & 0xfc;
    if (*(long *)(*(long *)(*(long *)(param_1 + -0x18) + 0x8c0) + 0x18) == 0 || (bVar1 & 4) != 0) {
      return;
    }
    if (*(int *)(param_1 + 0x40) != 2) {
      return;
    }
    iVar9 = (int)*(undefined8 *)(*(long *)(param_1 + 0x30) + 0x10);
    FUN_10a8c7000();
    if (iVar9 == 0) {
      return;
    }
    iVar9 = (int)*(undefined8 *)(*(long *)(param_1 + 0x30) + 0x10);
    FUN_10a8c6990();
    if (iVar9 == 0) {
      return;
    }
    plVar11 = *(long **)(param_1 + 0x30);
    func_0x00010a8b9874(plVar11,&UNK_10e509e30);
    for (plVar11 = *(long **)(*plVar11 + 0xf8); plVar11 != (long *)0x0;
        plVar11 = (long *)plVar11[0x13]) {
      plVar8 = plVar11;
      (**(code **)(*plVar11 + 0x80))();
      if ((int)plVar8 != 2) {
        return;
      }
    }
    lVar10 = *(long *)(*(long *)(*(long *)(param_1 + -0x18) + 0x100) + 0x260);
    *(undefined **)((long)register0x00000008 + -0x70) = &UNK_10f653c20;
    *(undefined8 *)((long)register0x00000008 + -0x68) = 0x21;
    if (lVar10 != 0) {
      FUN_10a244d68();
      FUN_10a8c6824(*(undefined8 *)(*(long *)(param_1 + 0x30) + 0x10),lVar10);
      FUN_10a8c6740(*(undefined8 *)(*(long *)(param_1 + 0x30) + 0x10),1);
      param_1[0x58] = param_1[0x58] | 1;
      return;
    }
    unaff_x19 = (undefined1 *)((long)register0x00000008 + -0x70);
    FUN_10a0edfc4();
    func_0x000109380ffc((undefined1 *)((long)register0x00000008 + -0x48),
                        *(undefined1 *)((long)register0x00000008 + -0x50));
    func_0x00010a051ed8((undefined1 *)((long)register0x00000008 + -0x40));
    unaff_x30 = FUN_10ac695e8;
    param_1 = unaff_x19;
    __Unwind_Resume();
    unaff_x20 = 0;
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0xc0);
  } while( true );
}



/* Entry: 10ac695f0; end: 10ac69a2f;  */

long FUN_10ac695f0(long param_1)

{
  byte bVar1;
  long *plVar2;
  float *pfVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float afStack_288 [30];
  float fStack_210;
  float fStack_20c;
  float fStack_208;
  float fStack_204;
  float fStack_200;
  float fStack_1fc;
  undefined8 uStack_1f8;
  undefined1 auStack_1f0 [4];
  undefined8 auStack_1ec [36];
  float afStack_cc [2];
  undefined8 auStack_c4 [5];
  float fStack_9c;
  float fStack_98;
  float fStack_94;
  
  bVar1 = *(byte *)(param_1 + 0x100);
  if ((bVar1 >> 1 & 1) != 0) goto LAB_10ac69a00;
  *(byte *)(param_1 + 0x100) = bVar1 | 2;
  if ((bVar1 & 1) == 0) {
LAB_10ac698e0:
    uStack_1f8 = &PTR_FUN_110c66e30;
    auStack_1ec[0x21] = 0;
    auStack_1ec[0x20] = 0;
    auStack_1ec[0x23] = 0;
    auStack_1ec[0x22] = 0;
    auStack_1ec[1] = 0;
    auStack_1ec[0] = 0;
    auStack_1ec[3] = 0;
    auStack_1ec[2] = 0;
    auStack_1ec[5] = 0;
    auStack_1ec[4] = 0;
    auStack_1ec[7] = 0;
    auStack_1ec[6] = 0;
    auStack_1ec[9] = 0;
    auStack_1ec[8] = 0;
    auStack_1ec[0xb] = 0;
    auStack_1ec[10] = 0;
    auStack_1ec[0xd] = 0;
    auStack_1ec[0xc] = 0;
    auStack_1ec[0xf] = 0;
    auStack_1ec[0xe] = 0;
    auStack_1ec[0x11] = 0;
    auStack_1ec[0x10] = 0;
    auStack_1ec[0x13] = 0;
    auStack_1ec[0x12] = 0;
    auStack_1ec[0x15] = 0;
    auStack_1ec[0x14] = 0;
    auStack_1ec[0x17] = 0;
    auStack_1ec[0x16] = 0;
    auStack_1ec[0x19] = 0;
    auStack_1ec[0x18] = 0;
    auStack_1ec[0x1b] = 0;
    auStack_1ec[0x1a] = 0;
    auStack_1ec[0x1d] = 0;
    auStack_1ec[0x1c] = 0;
    fVar9 = *(float *)(param_1 + 0x104);
    fVar10 = *(float *)(param_1 + 0x108);
    fVar12 = fVar9 * 0.083333336 * fVar10;
    auStack_1ec[0x1f] = 0;
    auStack_1ec[0x1e] = 0;
    auStack_1f0[0] = 1;
    lVar4 = 0;
    pfVar3 = afStack_cc;
    do {
      *(ulong *)((long)auStack_1ec + lVar4 + 8) = CONCAT44(fVar12,fVar12);
      *(ulong *)((long)auStack_1ec + lVar4) = CONCAT44(fVar12,fVar12);
      *(ulong *)((long)auStack_1ec + lVar4 + 0x18) = CONCAT44(fVar12,fVar12);
      *(ulong *)((long)auStack_1ec + lVar4 + 0x10) = CONCAT44(fVar12,fVar12);
      *(ulong *)((long)auStack_1ec + lVar4 + 0x28) = CONCAT44(fVar12,fVar12);
      *(ulong *)((long)auStack_1ec + lVar4 + 0x20) = CONCAT44(fVar12,fVar12);
      *(undefined8 *)((long)auStack_1ec + lVar4 + 0xb8) = 0x3f80000000000000;
      *(undefined8 *)((long)auStack_1ec + lVar4 + 0xb0) = 0x3f800000;
      *(undefined8 *)((long)auStack_1ec + lVar4 + 0xa8) = 0;
      *(undefined8 *)((long)auStack_1ec + lVar4 + 0xa0) = 0x3f80000000000000;
      lVar5 = lVar4 + 0x30;
      *(undefined8 *)((long)auStack_1ec + lVar4 + 0x98) = 0x3f800000;
      *(undefined8 *)((long)auStack_1ec + lVar4 + 0x90) = 0;
      *(ulong *)(pfVar3 + 2) = CONCAT44(fVar10,fVar10);
      *(ulong *)pfVar3 = CONCAT44(fVar10,fVar10);
      lVar4 = lVar5;
      pfVar3 = pfVar3 + 4;
    } while (lVar5 != 0x90);
    fStack_94 = fVar9 * 0.05;
    fStack_9c = fStack_94;
    fStack_98 = fStack_94;
  }
  else {
    FUN_10a8c6a58(*(undefined8 *)(*(long *)(param_1 + 0xd8) + 0x10),1);
    plVar2 = *(long **)(param_1 + 0xd8);
    func_0x00010a8b98b4(plVar2,&UNK_10e509e48);
    lVar4 = **(long **)(*plVar2 + 0xd8);
    if ((lVar4 == 0) || ((*(long **)(*plVar2 + 0xd8))[1] != 0x4b)) goto LAB_10ac698e0;
    plVar2 = *(long **)(param_1 + 0xd8);
    func_0x00010a8b9874(plVar2,&UNK_10e509e30);
    fStack_200 = *(float *)(*(long *)(*plVar2 + 0xf8) + 0x2a8);
    auStack_1ec[0x21] = 0;
    auStack_1ec[0x20] = 0;
    auStack_1ec[0x23] = 0;
    auStack_1ec[0x22] = 0;
    auStack_1ec[1] = 0;
    auStack_1ec[0] = 0;
    auStack_1ec[3] = 0;
    auStack_1ec[2] = 0;
    auStack_1ec[5] = 0;
    auStack_1ec[4] = 0;
    auStack_1ec[7] = 0;
    auStack_1ec[6] = 0;
    auStack_1ec[9] = 0;
    auStack_1ec[8] = 0;
    auStack_1ec[0xb] = 0;
    auStack_1ec[10] = 0;
    auStack_1ec[0xd] = 0;
    auStack_1ec[0xc] = 0;
    auStack_1ec[0x11] = 0;
    auStack_1ec[0x10] = 0;
    auStack_1ec[0x13] = 0;
    auStack_1ec[0x12] = 0;
    auStack_1ec[0x15] = 0;
    auStack_1ec[0x14] = 0;
    auStack_1ec[0x17] = 0;
    auStack_1ec[0x16] = 0;
    auStack_1ec[0x19] = 0;
    auStack_1ec[0x18] = 0;
    auStack_1ec[0x1b] = 0;
    auStack_1ec[0x1a] = 0;
    auStack_1ec[0x1d] = 0;
    auStack_1ec[0x1c] = 0;
    auStack_1ec[0x1f] = 0;
    auStack_1ec[0x1e] = 0;
    fStack_210 = *(float *)(param_1 + 0x104);
    auStack_1ec[0xf] = 0;
    auStack_1ec[0xe] = 0;
    uStack_1f8 = &PTR_FUN_110c66e30;
    fVar12 = fStack_210 * *(float *)(param_1 + 0x108) * 4.0;
    fStack_1fc = *(float *)(param_1 + 0x108) * 4.0;
    auStack_1f0[0] = 1;
    fVar9 = fStack_1fc;
    ___sincosf_stret();
    fStack_204 = -fStack_200;
    pfVar3 = (float *)(lVar4 + 0xc);
    lVar5 = 300;
    lVar6 = 0x9c;
    fStack_208 = -3.1415927;
    fStack_20c = 6.2831855;
    do {
      fVar10 = pfVar3[2];
      if (fVar10 <= 20.0) {
        _expf();
        fVar10 = fVar10 + 1.0;
        _logf();
      }
      fVar11 = pfVar3[1];
      if (fVar11 <= 20.0) {
        _expf();
        fVar11 = fVar11 + 1.0;
        _logf();
      }
      fVar7 = *pfVar3;
      if (fVar7 <= 20.0) {
        _expf();
        fVar7 = fVar7 + 1.0;
        _logf();
      }
      *(float *)((long)afStack_288 + lVar6) = fVar12 * fVar10;
      *(float *)((long)afStack_288 + lVar6 + 4) = fVar12 * fVar11;
      *(float *)((long)afStack_288 + lVar6 + 8) = fVar12 * fVar7;
      fVar8 = pfVar3[-2];
      fVar7 = fVar8 * fStack_20c;
      fVar10 = pfVar3[-3] * fStack_208 + 1.5707964;
      ___sincosf_stret();
      fVar11 = fVar8;
      ___sincosf_stret();
      *(float *)(auStack_1f0 + lVar6 + -8) = fStack_200 * fVar10 + fVar9 * fVar7 * fVar8;
      *(float *)(auStack_1f0 + lVar6 + -4) = fVar9 * fVar10 + fStack_204 * fVar7 * fVar8;
      *(float *)(auStack_1f0 + lVar6) = -(fVar8 * fVar11);
      fVar10 = pfVar3[-1];
      if (fVar10 <= 20.0) {
        _expf();
        fVar10 = fVar10 + 1.0;
        _logf();
      }
      *(float *)(auStack_1f0 + lVar5 + -8) = fStack_1fc * fVar10;
      lVar5 = lVar5 + 4;
      pfVar3 = pfVar3 + 6;
      lVar6 = lVar6 + 0xc;
    } while (lVar5 != 0x15c);
    fVar9 = *(float *)(lVar4 + 0x128);
    if (fVar9 <= 20.0) {
      _expf();
      fVar9 = fVar9 + 1.0;
      _logf();
    }
    fVar12 = *(float *)(lVar4 + 0x124);
    if (fVar12 <= 20.0) {
      _expf();
      fVar12 = fVar12 + 1.0;
      _logf();
    }
    fVar10 = *(float *)(lVar4 + 0x120);
    if (fVar10 <= 20.0) {
      _expf();
      fVar10 = fVar10 + 1.0;
      _logf();
    }
    fStack_94 = fStack_210 * fVar10;
    fStack_9c = fStack_210 * fVar9;
    fStack_98 = fStack_210 * fVar12;
  }
  FUN_10ac69b54(*(undefined8 *)(param_1 + 0xf0),&uStack_1f8);
LAB_10ac69a00:
  return param_1 + 0xf0;
}



/* Entry: 10ac69a30; end: 10ac69b2f;  */

void FUN_10ac69a30(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  long lVar5;
  long *plVar6;
  
  puVar4 = (undefined8 *)0x180;
  __Znwm();
  puVar4[1] = 0;
  puVar4[2] = 0;
  *puVar4 = &PTR_FUN_110c670d0;
  puVar4[5] = 0;
  puVar4[4] = 0;
  puVar4[7] = 0;
  puVar4[6] = 0;
  puVar4[9] = 0;
  puVar4[8] = 0;
  puVar4[0xb] = 0;
  puVar4[10] = 0;
  puVar4[0xd] = 0;
  puVar4[0xc] = 0;
  puVar4[0xf] = 0;
  puVar4[0xe] = 0;
  puVar4[0x11] = 0;
  puVar4[0x10] = 0;
  puVar4[0x13] = 0;
  puVar4[0x12] = 0;
  puVar4[0x15] = 0;
  puVar4[0x14] = 0;
  puVar4[0x17] = 0;
  puVar4[0x16] = 0;
  puVar4[0x19] = 0;
  puVar4[0x18] = 0;
  puVar4[0x1b] = 0;
  puVar4[0x1a] = 0;
  puVar4[0x1d] = 0;
  puVar4[0x1c] = 0;
  puVar4[0x1f] = 0;
  puVar4[0x1e] = 0;
  puVar4[0x21] = 0;
  puVar4[0x20] = 0;
  puVar4[0x23] = 0;
  puVar4[0x22] = 0;
  puVar4[0x25] = 0;
  puVar4[0x24] = 0;
  puVar4[0x27] = 0;
  puVar4[0x26] = 0;
  puVar4[0x29] = 0;
  puVar4[0x28] = 0;
  puVar4[0x2b] = 0;
  puVar4[0x2a] = 0;
  puVar4[0x2d] = 0;
  puVar4[0x2c] = 0;
  puVar4[0x2e] = 0;
  puVar4[0x2f] = 0;
  *(undefined8 *)((long)puVar4 + 0x3c) = 0;
  *(undefined8 *)((long)puVar4 + 0x34) = 0;
  *(undefined8 *)((long)puVar4 + 0x4c) = 0;
  *(undefined8 *)((long)puVar4 + 0x44) = 0;
  *(undefined8 *)((long)puVar4 + 0x5c) = 0;
  *(undefined8 *)((long)puVar4 + 0x54) = 0;
  *(undefined8 *)((long)puVar4 + 0x6c) = 0;
  *(undefined8 *)((long)puVar4 + 100) = 0;
  *(undefined8 *)((long)puVar4 + 0x7c) = 0;
  *(undefined8 *)((long)puVar4 + 0x74) = 0;
  *(undefined8 *)((long)puVar4 + 0x8c) = 0;
  *(undefined8 *)((long)puVar4 + 0x84) = 0;
  *(undefined8 *)((long)puVar4 + 0x9c) = 0;
  *(undefined8 *)((long)puVar4 + 0x94) = 0;
  *(undefined8 *)((long)puVar4 + 0xac) = 0;
  *(undefined8 *)((long)puVar4 + 0xa4) = 0;
  *(undefined8 *)((long)puVar4 + 0xbc) = 0;
  *(undefined8 *)((long)puVar4 + 0xb4) = 0;
  *(undefined8 *)((long)puVar4 + 0xcc) = 0;
  *(undefined8 *)((long)puVar4 + 0xc4) = 0;
  *(undefined8 *)((long)puVar4 + 0xdc) = 0;
  *(undefined8 *)((long)puVar4 + 0xd4) = 0;
  *(undefined8 *)((long)puVar4 + 0xec) = 0;
  *(undefined8 *)((long)puVar4 + 0xe4) = 0;
  *(undefined8 *)((long)puVar4 + 0xfc) = 0;
  *(undefined8 *)((long)puVar4 + 0xf4) = 0;
  puVar4[3] = &PTR_FUN_110c66e30;
  *(undefined8 *)((long)puVar4 + 0x2c) = 0;
  *(undefined8 *)((long)puVar4 + 0x24) = 0;
  plVar6 = *(long **)(param_1 + 0xf8);
  *(undefined8 **)(param_1 + 0xf0) = puVar4 + 3;
  *(undefined8 **)(param_1 + 0xf8) = puVar4;
  *(undefined8 *)((long)puVar4 + 0x10c) = 0;
  *(undefined8 *)((long)puVar4 + 0x104) = 0;
  *(undefined8 *)((long)puVar4 + 0x11c) = 0;
  *(undefined8 *)((long)puVar4 + 0x114) = 0;
  *(undefined8 *)((long)puVar4 + 300) = 0;
  *(undefined8 *)((long)puVar4 + 0x124) = 0;
  *(undefined8 *)((long)puVar4 + 0x13c) = 0;
  *(undefined8 *)((long)puVar4 + 0x134) = 0;
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
  return;
}



/* Entry: 10ac69b30; end: 10ac69b53;  */

float * FUN_10ac69b30(long param_1,undefined8 *param_2)

{
  long *plVar1;
  char cVar2;
  undefined *puVar3;
  float *pfVar4;
  int iVar5;
  bool bVar6;
  long lVar7;
  undefined1 *puVar8;
  float *pfVar9;
  long *plVar10;
  long lVar11;
  float fVar12;
  float fVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  
  if (*(int *)(param_1 + 0xe8) == 0) {
    uVar15 = param_2[1];
    uVar14 = *param_2;
    *param_2 = 0;
    param_2[1] = 0;
    plVar10 = *(long **)(param_1 + 0xd0);
    *(undefined8 *)(param_1 + 0xd0) = uVar15;
    *(undefined8 *)(param_1 + 200) = uVar14;
    if (plVar10 != (long *)0x0) {
      plVar1 = plVar10 + 1;
      do {
        lVar7 = *plVar1;
        cVar2 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar6) {
          *plVar1 = lVar7 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar7 == 0) {
        (**(code **)(*plVar10 + 0x10))(plVar10);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar10);
      }
    }
    return (float *)(param_1 + 200);
  }
  puVar3 = &UNK_10f69ee06;
  FUN_10a00946c();
  pfVar4 = (float *)(puVar3 + 8);
  if (((uint)*pfVar4 & 1) == 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf0a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__memcpy_11034c658)(pfVar4,param_2 + 1,0x160);
    return pfVar4;
  }
  if (*(char *)(param_2 + 1) != '\x01') {
    return pfVar4;
  }
  lVar7 = 0;
  lVar11 = 300;
  do {
    FUN_10ac79f14(*(undefined4 *)((long)param_2 + lVar7 + 0xc),
                  *(undefined4 *)((long)param_2 + lVar7 + 0x10),
                  *(undefined4 *)((long)param_2 + lVar7 + 0x14),puVar3 + lVar7 + 0xc);
    FUN_10ac79f14(*(undefined4 *)((long)param_2 + lVar7 + 0x9c),
                  *(undefined4 *)((long)param_2 + lVar7 + 0xa0),
                  *(undefined4 *)((long)param_2 + lVar7 + 0xa4),puVar3 + lVar7 + 0x9c);
    fVar12 = *(float *)(puVar3 + lVar7 + 0xa4);
    fVar18 = (float)*(undefined8 *)(puVar3 + lVar7 + 0x9c);
    fVar19 = (float)((ulong)*(undefined8 *)(puVar3 + lVar7 + 0x9c) >> 0x20);
    fVar16 = 1.0 / SQRT(fVar18 * fVar18 + fVar19 * fVar19 + fVar12 * fVar12);
    *(ulong *)(puVar3 + lVar7 + 0x9c) = CONCAT44(fVar19 * fVar16,fVar18 * fVar16);
    *(float *)(puVar3 + lVar7 + 0xa4) = fVar12 * fVar16;
    fVar12 = *(float *)((long)param_2 + lVar11);
    fVar16 = *(float *)(puVar3 + lVar11);
    if (NAN(fVar16)) {
LAB_10ac69c34:
      *(float *)(puVar3 + lVar11) = fVar12;
    }
    else if (!NAN(fVar12)) {
      if (ABS(fVar16 - fVar12) <= 0.2) {
        fVar12 = fVar12 * 0.39999998 + fVar16 * 0.6;
      }
      goto LAB_10ac69c34;
    }
    lVar7 = lVar7 + 0xc;
    lVar11 = lVar11 + 4;
  } while (lVar7 != 0x90);
  fVar12 = *(float *)((long)param_2 + 0x15c);
  fVar16 = *(float *)(param_2 + 0x2c);
  uVar14 = *(undefined8 *)((long)param_2 + 0x15c);
  fVar18 = *(float *)((long)param_2 + 0x164);
  pfVar4 = (float *)(puVar3 + 0x15c);
  iVar5 = 0;
  do {
    if (iVar5 == 1) {
      puVar8 = &stack0xffffffffffffffec;
      pfVar9 = (float *)(puVar3 + 0x160);
    }
    else {
      if (iVar5 == 2) goto LAB_10ac79f60;
      puVar8 = &stack0xffffffffffffffed;
      pfVar9 = pfVar4;
    }
    *puVar8 = NAN(*pfVar9);
    iVar5 = iVar5 + 1;
  } while( true );
LAB_10ac7a000:
  iVar5 = 0;
  while ((bVar6 = false, iVar5 == 1 || (bVar6 = false, iVar5 != 2))) {
    while (iVar5 = iVar5 + 1, bVar6) {
      if (iVar5 == 2) {
        return pfVar4;
      }
      bVar6 = true;
    }
  }
  if (NAN(fVar18)) {
    return pfVar4;
  }
  iVar5 = 0;
  fVar20 = (float)*(undefined8 *)pfVar4;
  fVar13 = fVar20 - fVar12;
  fVar21 = (float)((ulong)*(undefined8 *)pfVar4 >> 0x20);
  fVar17 = fVar21 - fVar16;
  if (fVar13 < 0.0) {
    fVar13 = -fVar13;
  }
  if (fVar17 < 0.0) {
    fVar17 = -fVar17;
  }
  while ((fVar22 = fVar17, iVar5 == 1 || (fVar22 = fVar13, iVar5 != 2))) {
    bVar6 = 0.2 < fVar22;
    while (iVar5 = iVar5 + 1, bVar6) {
      if (iVar5 == 2) goto LAB_10ac7a11c;
      bVar6 = true;
    }
  }
  if (ABS(fVar19 - fVar18) <= 0.2) {
    uVar14 = CONCAT44(fVar16 * 0.39999998 + fVar21 * 0.6,fVar12 * 0.39999998 + fVar20 * 0.6);
    fVar18 = fVar18 * 0.39999998 + fVar19 * 0.6;
  }
  goto LAB_10ac7a11c;
LAB_10ac79f60:
  iVar5 = 0;
  fVar19 = *(float *)(puVar3 + 0x164);
  while ((bVar6 = false, iVar5 == 1 || (bVar6 = false, iVar5 != 2))) {
    while (iVar5 = iVar5 + 1, bVar6) {
      if (iVar5 == 2) goto LAB_10ac7a11c;
      bVar6 = true;
    }
  }
  if (!NAN(fVar19)) {
    iVar5 = 0;
    do {
      if (iVar5 == 1) {
        puVar8 = &stack0xffffffffffffffee;
        fVar13 = fVar16;
      }
      else {
        if (iVar5 == 2) goto LAB_10ac7a000;
        puVar8 = &stack0xffffffffffffffef;
        fVar13 = fVar12;
      }
      *puVar8 = NAN(fVar13);
      iVar5 = iVar5 + 1;
    } while( true );
  }
LAB_10ac7a11c:
  *(undefined8 *)pfVar4 = uVar14;
  *(float *)(puVar3 + 0x164) = fVar18;
  return pfVar4;
}



/* Entry: 10ac69b54; end: 10ac69cb3;  */

void FUN_10ac69b54(long param_1,long param_2)

{
  float *pfVar1;
  long lVar2;
  long lVar3;
  int iVar4;
  bool bVar5;
  undefined1 *puVar6;
  float *pfVar7;
  long lVar8;
  long lVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  undefined8 uVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  
  if ((*(byte *)(param_1 + 8) & 1) == 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf0a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__memcpy_11034c658)((byte *)(param_1 + 8),param_2 + 8,0x160);
    return;
  }
  if (*(char *)(param_2 + 8) != '\x01') {
    return;
  }
  lVar8 = 0;
  lVar9 = 300;
  do {
    lVar2 = param_1 + lVar8;
    lVar3 = param_2 + lVar8;
    FUN_10ac79f14(*(undefined4 *)(lVar3 + 0xc),*(undefined4 *)(lVar3 + 0x10),
                  *(undefined4 *)(lVar3 + 0x14),lVar2 + 0xc);
    FUN_10ac79f14(*(undefined4 *)(lVar3 + 0x9c),*(undefined4 *)(lVar3 + 0xa0),
                  *(undefined4 *)(lVar3 + 0xa4),lVar2 + 0x9c);
    fVar10 = *(float *)(lVar2 + 0xa4);
    fVar14 = (float)*(undefined8 *)(lVar2 + 0x9c);
    fVar16 = (float)((ulong)*(undefined8 *)(lVar2 + 0x9c) >> 0x20);
    fVar12 = 1.0 / SQRT(fVar14 * fVar14 + fVar16 * fVar16 + fVar10 * fVar10);
    *(ulong *)(lVar2 + 0x9c) = CONCAT44(fVar16 * fVar12,fVar14 * fVar12);
    *(float *)(lVar2 + 0xa4) = fVar10 * fVar12;
    fVar10 = *(float *)(param_2 + lVar9);
    fVar12 = *(float *)(param_1 + lVar9);
    if (NAN(fVar12)) {
LAB_10ac69c34:
      *(float *)(param_1 + lVar9) = fVar10;
    }
    else if (!NAN(fVar10)) {
      if (ABS(fVar12 - fVar10) <= 0.2) {
        fVar10 = fVar10 * 0.39999998 + fVar12 * 0.6;
      }
      goto LAB_10ac69c34;
    }
    lVar8 = lVar8 + 0xc;
    lVar9 = lVar9 + 4;
  } while (lVar8 != 0x90);
  fVar10 = *(float *)(param_2 + 0x15c);
  fVar12 = *(float *)(param_2 + 0x160);
  uVar15 = *(undefined8 *)(param_2 + 0x15c);
  fVar14 = *(float *)(param_2 + 0x164);
  pfVar1 = (float *)(param_1 + 0x15c);
  iVar4 = 0;
  do {
    if (iVar4 == 1) {
      puVar6 = &stack0xfffffffffffffffc;
      pfVar7 = (float *)(param_1 + 0x160);
    }
    else {
      if (iVar4 == 2) goto LAB_10ac79f60;
      puVar6 = &stack0xfffffffffffffffd;
      pfVar7 = pfVar1;
    }
    *puVar6 = NAN(*pfVar7);
    iVar4 = iVar4 + 1;
  } while( true );
LAB_10ac7a000:
  iVar4 = 0;
  while ((bVar5 = false, iVar4 == 1 || (bVar5 = false, iVar4 != 2))) {
    while (iVar4 = iVar4 + 1, bVar5) {
      if (iVar4 == 2) {
        return;
      }
      bVar5 = true;
    }
  }
  if (NAN(fVar14)) {
    return;
  }
  iVar4 = 0;
  fVar17 = (float)*(undefined8 *)pfVar1;
  fVar11 = fVar17 - fVar10;
  fVar18 = (float)((ulong)*(undefined8 *)pfVar1 >> 0x20);
  fVar13 = fVar18 - fVar12;
  if (fVar11 < 0.0) {
    fVar11 = -fVar11;
  }
  if (fVar13 < 0.0) {
    fVar13 = -fVar13;
  }
  while ((fVar19 = fVar13, iVar4 == 1 || (fVar19 = fVar11, iVar4 != 2))) {
    bVar5 = 0.2 < fVar19;
    while (iVar4 = iVar4 + 1, bVar5) {
      if (iVar4 == 2) goto LAB_10ac7a11c;
      bVar5 = true;
    }
  }
  if (ABS(fVar16 - fVar14) <= 0.2) {
    uVar15 = CONCAT44(fVar12 * 0.39999998 + fVar18 * 0.6,fVar10 * 0.39999998 + fVar17 * 0.6);
    fVar14 = fVar14 * 0.39999998 + fVar16 * 0.6;
  }
  goto LAB_10ac7a11c;
LAB_10ac79f60:
  iVar4 = 0;
  fVar16 = *(float *)(param_1 + 0x164);
  while ((bVar5 = false, iVar4 == 1 || (bVar5 = false, iVar4 != 2))) {
    while (iVar4 = iVar4 + 1, bVar5) {
      if (iVar4 == 2) goto LAB_10ac7a11c;
      bVar5 = true;
    }
  }
  if (!NAN(fVar16)) {
    iVar4 = 0;
    do {
      if (iVar4 == 1) {
        puVar6 = &stack0xfffffffffffffffe;
        fVar11 = fVar12;
      }
      else {
        if (iVar4 == 2) goto LAB_10ac7a000;
        puVar6 = &stack0xffffffffffffffff;
        fVar11 = fVar10;
      }
      *puVar6 = NAN(fVar11);
      iVar4 = iVar4 + 1;
    } while( true );
  }
LAB_10ac7a11c:
  *(undefined8 *)pfVar1 = uVar15;
  *(float *)(param_1 + 0x164) = fVar14;
  return;
}



/* Entry: 10ac69cb4; end: 10ac69cb7;  */

void FUN_10ac69cb4(void)

{
  return;
}



/* Entry: 10ac69cb8; end: 10ac69cfb;  */

void FUN_10ac69cb8(undefined8 param_1,long *param_2)

{
  undefined *puStack_20;
  undefined8 uStack_18;
  
  puStack_20 = &UNK_10f69f838;
  uStack_18 = 0x20;
  (**(code **)(*param_2 + 0x30))(param_2,&PTR_DAT_110c66928,&puStack_20);
  return;
}



/* Entry: 10ac69cfc; end: 10ac69d47;  */

bool FUN_10ac69cfc(undefined8 param_1,long *param_2,long param_3)

{
  bool bVar1;
  
  if ((param_3 == 0x17) &&
     ((*param_2 == 0x72656469766f7250 && param_2[1] == 0x5072656b72614d2e) &&
      *(long *)((long)param_2 + 0xf) == 0x72656469766f7250)) {
    return true;
  }
  if (param_3 == 0xc) {
    bVar1 = false;
    if (*param_2 == 0x624f747069726353) {
      bVar1 = (int)param_2[1] == 0x7463656a;
    }
  }
  else {
    if (param_3 != 8) {
      return false;
    }
    bVar1 = *param_2 == 0x72656469766f7250;
  }
  return bVar1;
}



/* Entry: 10ac69d48; end: 10ac69d9f;  */

void FUN_10ac69d48(undefined8 param_1)

{
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined4 uStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined4 uStack_18;
  
  uStack_58 = 0;
  uStack_50 = 0xffffffff00000001;
  uStack_48 = 0xffffffff;
  puStack_40 = &UNK_10f69e32c;
  uStack_30 = 0;
  uStack_38 = 0;
  uStack_20 = 0;
  uStack_28 = 0;
  uStack_18 = 0xffffffff;
  FUN_10ac69da0(param_1,&uStack_58);
  FUN_10ac8093c();
  return;
}



/* Entry: 10ac69da0; end: 10ac69e77;  */

/* WARNING: Removing unreachable block (ram,0x00010ac69e38) */

undefined1  [16] FUN_10ac69da0(undefined8 param_1,long param_2)

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
  func_0x000109887da8(auStack_48,&UNK_10f69f859,0x17);
  uStack_88 = *(undefined8 *)(param_2 + 8);
  uStack_80 = *(undefined4 *)(param_2 + 0x10);
  uStack_70 = *(undefined8 *)(param_2 + 0x20);
  uStack_78 = *(undefined8 *)(param_2 + 0x18);
  uStack_60 = *(undefined8 *)(param_2 + 0x30);
  uStack_68 = *(undefined8 *)(param_2 + 0x28);
  uStack_58 = *(undefined8 *)(param_2 + 0x38);
  uStack_50 = *(undefined4 *)(param_2 + 0x40);
  puStack_90 = auStack_48;
  FUN_10ac80840(param_1,&puStack_90,100);
  auVar2._8_8_ = ppuVar1;
  auVar2._0_8_ = param_1;
  return auVar2;
}


