/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 109d297c4; end: 109d29817;  */

ulong FUN_109d297c4(long param_1)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  ulong uVar4;
  bool bVar5;
  
  piVar1 = (int *)(*(long *)(param_1 + 0x10) + 0x18);
  do {
    iVar2 = *piVar1;
    if (iVar2 != 0) {
      bVar5 = false;
      ClearExclusiveLocal();
      goto LAB_109d297f0;
    }
    cVar3 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
    if (bVar5) {
      *piVar1 = -0x80000000;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  bVar5 = true;
LAB_109d297f0:
  uVar4 = 1;
  if (((!bVar5) && (-1 < iVar2)) && (uVar4 = 0, *(long *)(param_1 + 0x28) != 0)) {
    uVar4 = *(ulong *)(*(long *)(param_1 + 0x28) + 0x10) >> 1 & 1;
  }
  return uVar4;
}



/* Entry: 109d29818; end: 109d298ab;  */

long FUN_109d29818(long param_1)

{
  long *plVar1;
  ulong *puVar2;
  char cVar3;
  bool bVar4;
  ulong uVar5;
  long lVar6;
  long *plVar7;
  
  plVar7 = *(long **)(param_1 + 0x20);
  if (plVar7 != (long *)0x0) {
    puVar2 = (ulong *)(plVar7 + 1);
    do {
      uVar5 = *puVar2;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(puVar2,0x10);
      if (bVar4) {
        *puVar2 = uVar5 - 4;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if ((uVar5 & 0x1fffffffc) == 4) {
      (**(code **)(*plVar7 + 0x10))(plVar7);
      do {
        uVar5 = *puVar2;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(puVar2,0x10);
        if (bVar4) {
          *puVar2 = uVar5 - 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (uVar5 - 1 == 0) {
        (**(code **)(*plVar7 + 8))(plVar7);
      }
    }
  }
  if (*(long *)(param_1 + 0x18) != 0) {
    func_0x0001092b4274();
  }
  plVar7 = *(long **)(param_1 + 0x10);
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
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
    }
  }
  return param_1 + 8;
}



/* Entry: 109d298ac; end: 109d2994b;  */

void FUN_109d298ac(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  
  *param_1 = &PTR_FUN_110b3f940;
  uVar1 = *(undefined8 *)(param_2 + 8);
  param_1[2] = *(undefined8 *)(param_2 + 0x10);
  param_1[1] = uVar1;
  *(undefined8 *)(param_2 + 8) = 0;
  *(undefined8 *)(param_2 + 0x10) = 0;
  uVar1 = *(undefined8 *)(param_2 + 0x18);
  param_1[4] = *(undefined8 *)(param_2 + 0x20);
  param_1[3] = uVar1;
  *(undefined8 *)(param_2 + 0x18) = 0;
  *(undefined8 *)(param_2 + 0x20) = 0;
  return;
}



/* Entry: 109d2994c; end: 109d29d27;  */

void FUN_109d2994c(long *param_1,long param_2)

{
  ulong *puVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  long *plVar7;
  long lVar8;
  undefined8 uVar9;
  ulong uVar10;
  long lVar11;
  code *pcVar12;
  undefined8 uStack_78;
  undefined8 *puStack_70;
  undefined8 uStack_68;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar5 = (undefined8 *)0x78;
  __Znwm();
  *puVar5 = FUN_109d2b300;
  puVar5[1] = FUN_109d2b524;
  puVar5[0xd] = param_2;
  func_0x0001092ba17c(puVar5 + 2);
  lVar8 = puVar5[7];
  if (lVar8 != 0) {
    plVar7 = (long *)(lVar8 + 8);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar4) {
        *plVar7 = *plVar7 + 4;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  *param_1 = lVar8;
  puVar6 = (undefined8 *)(param_2 + 0x50);
  (*(code *)*puVar6)();
  if ((int)puVar6 == 0) {
    pcVar12 = *(code **)(param_2 + 0x10);
    uStack_78 = *(undefined8 *)(param_2 + 0x50);
    (**(code **)(*(long *)(param_2 + 0x58) + 0x18))(&puStack_70);
    (*pcVar12)(puVar5 + 0xc,&uStack_78,(undefined8 *)(param_2 + 0x10));
    (*(code *)*puStack_70)(&puStack_70);
    puVar5[0xb] = puVar5[0xc];
    plVar7 = (long *)(puVar5[0xc] + 8);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar4) {
        *plVar7 = *plVar7 + 4;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (((uint)*(undefined8 *)(puVar5[0xb] + 0x10) >> 1 & 1) == 0) {
      *(undefined1 *)(puVar5 + 0xe) = 0;
      lVar8 = puVar5[0xb];
      plVar7 = (long *)(lVar8 + 0x10);
      uVar9 = puVar5[3];
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
            uStack_78 = 0;
            puStack_70 = puVar5;
            uStack_68 = uVar9;
            func_0x000109d1b588(lVar8 + 0x18,&uStack_78);
            *(undefined8 *)(lVar8 + 0x10) = 0;
            goto LAB_109d29bb4;
          }
        }
        else {
          ClearExclusiveLocal();
        }
      } while (((uint)lVar11 >> 1 & 1) == 0);
    }
    plVar7 = (long *)puVar5[0xb];
    if (((uint)*(undefined8 *)(puVar5[0xb] + 0x10) >> 5 & 1) != 0) {
      func_0x0001092af97c(plVar7 + 0x12);
      goto LAB_109d29bfc;
    }
    lVar8 = plVar7[0x13];
    puVar5[10] = plVar7[0x14];
    puVar5[9] = lVar8;
    plVar7[0x13] = 0;
    plVar7[0x14] = 0;
    puVar1 = (ulong *)(plVar7 + 1);
    do {
      uVar10 = *puVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar4) {
        *puVar1 = uVar10 - 4;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if ((uVar10 & 0x1fffffffc) == 4) {
      do {
        uVar10 = *puVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar4) {
          *puVar1 = uVar10 - 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (uVar10 - 1 == 0) {
        (**(code **)(*plVar7 + 8))();
      }
    }
    plVar7 = (long *)puVar5[0xc];
    if (plVar7 != (long *)0x0) {
      puVar1 = (ulong *)(plVar7 + 1);
      do {
        uVar10 = *puVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar4) {
          *puVar1 = uVar10 - 4;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if ((uVar10 & 0x1fffffffc) == 4) {
        do {
          uVar10 = *puVar1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar4) {
            *puVar1 = uVar10 - 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (uVar10 - 1 == 0) {
          (**(code **)(*plVar7 + 8))();
        }
      }
    }
    FUN_109d2711c(*(undefined8 *)(puVar5[0xd] + 0xa0),puVar5 + 9);
    plVar7 = (long *)puVar5[10];
    if (plVar7 != (long *)0x0) {
      plVar2 = plVar7 + 1;
      do {
        lVar8 = *plVar2;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar4) {
          *plVar2 = lVar8 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar8 == 0) {
        (**(code **)(*plVar7 + 0x10))(plVar7);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
      }
    }
    FUN_109d29f1c(puVar5[0xd]);
    func_0x0001092ba100(puVar5 + 2);
    func_0x000109d1a1d0(puVar5 + 2);
    __ZdlPv(puVar5);
LAB_109d29bb4:
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
      return;
    }
    ___stack_chk_fail();
  }
  func_0x000105688514(&UNK_10f5acd44);
LAB_109d29bfc:
                    /* WARNING: Does not return */
  pcVar12 = (code *)SoftwareBreakpoint(1,0x109d29c00);
  (*pcVar12)();
}



/* Entry: 109d29d28; end: 109d29f1b;  */

undefined8 * FUN_109d29d28(undefined8 *param_1,long param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  func_0x000109379218();
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  func_0x000109379218(param_1 + 3,*(long *)(param_2 + 0x18),*(long *)(param_2 + 0x20),
                      (*(long *)(param_2 + 0x20) - *(long *)(param_2 + 0x18) >> 3) *
                      0x2e8ba2e8ba2e8ba3);
  if (*(char *)(param_2 + 0x47) < '\0') {
    func_0x000107c3192c(param_1 + 6,*(undefined8 *)(param_2 + 0x30),*(undefined8 *)(param_2 + 0x38))
    ;
  }
  else {
    uVar3 = *(undefined8 *)(param_2 + 0x38);
    uVar2 = *(undefined8 *)(param_2 + 0x30);
    param_1[8] = *(undefined8 *)(param_2 + 0x40);
    param_1[7] = uVar3;
    param_1[6] = uVar2;
  }
  if (*(char *)(param_2 + 0x5f) < '\0') {
    func_0x000107c3192c(param_1 + 9,*(undefined8 *)(param_2 + 0x48),*(undefined8 *)(param_2 + 0x50))
    ;
  }
  else {
    uVar3 = *(undefined8 *)(param_2 + 0x50);
    uVar2 = *(undefined8 *)(param_2 + 0x48);
    param_1[0xb] = *(undefined8 *)(param_2 + 0x58);
    param_1[10] = uVar3;
    param_1[9] = uVar2;
  }
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  func_0x0001094078b0(param_1 + 0xc,*(long *)(param_2 + 0x60),*(long *)(param_2 + 0x68),
                      *(long *)(param_2 + 0x68) - *(long *)(param_2 + 0x60) >> 2);
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  func_0x0001092cc0dc(param_1 + 0xf,*(long *)(param_2 + 0x78),*(long *)(param_2 + 0x80),
                      *(long *)(param_2 + 0x80) - *(long *)(param_2 + 0x78) >> 2);
  uVar1 = *(undefined4 *)(param_2 + 0x90);
  *(undefined4 *)((long)param_1 + 0x93) = *(undefined4 *)(param_2 + 0x93);
  *(undefined4 *)(param_1 + 0x12) = uVar1;
  if (*(char *)(param_2 + 0xaf) < '\0') {
    func_0x000107c3192c(param_1 + 0x13,*(undefined8 *)(param_2 + 0x98),
                        *(undefined8 *)(param_2 + 0xa0));
  }
  else {
    uVar3 = *(undefined8 *)(param_2 + 0xa0);
    uVar2 = *(undefined8 *)(param_2 + 0x98);
    param_1[0x15] = *(undefined8 *)(param_2 + 0xa8);
    param_1[0x14] = uVar3;
    param_1[0x13] = uVar2;
  }
  uVar3 = *(undefined8 *)(param_2 + 0xb8);
  uVar2 = *(undefined8 *)(param_2 + 0xb0);
  uVar5 = *(undefined8 *)(param_2 + 200);
  uVar4 = *(undefined8 *)(param_2 + 0xc0);
  uVar7 = *(undefined8 *)(param_2 + 0xd8);
  uVar6 = *(undefined8 *)(param_2 + 0xd0);
  uVar8 = *(undefined8 *)(param_2 + 0xd9);
  *(undefined8 *)((long)param_1 + 0xe1) = *(undefined8 *)(param_2 + 0xe1);
  *(undefined8 *)((long)param_1 + 0xd9) = uVar8;
  param_1[0x19] = uVar5;
  param_1[0x18] = uVar4;
  param_1[0x1b] = uVar7;
  param_1[0x1a] = uVar6;
  param_1[0x17] = uVar3;
  param_1[0x16] = uVar2;
  param_1[0x1e] = *(undefined8 *)(param_2 + 0xf0);
  return param_1;
}



/* Entry: 109d29f1c; end: 109d29fdb;  */

void FUN_109d29f1c(long *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  
  plVar4 = (long *)param_1[1];
  if (plVar4 != (long *)0x0) {
    __ZNSt3__119__shared_weak_count4lockEv();
    if (plVar4 != (long *)0x0) {
      if (*param_1 != 0) {
        FUN_109d29fdc(*param_1,param_1 + 0x15,param_1 + 0x12);
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
  }
  return;
}



/* Entry: 109d29fdc; end: 109d2a053;  */

void FUN_109d29fdc(long param_1,undefined8 param_2,long *param_3)

{
  long lVar1;
  
  __ZNSt3__115recursive_mutex4lockEv(param_1 + 0x38);
  lVar1 = param_1 + 0x10;
  FUN_109d26748(lVar1,param_2);
  if ((lVar1 != 0) && (*param_3 == *(long *)(lVar1 + 0x108))) {
    FUN_109d26914(param_1 + 0x10);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd1a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__115recursive_mutex6unlockEv_110346580)(param_1 + 0x38);
  return;
}



/* Entry: 109d2a054; end: 109d2a48b;  */

void FUN_109d2a054(long *param_1,long param_2,undefined8 param_3,long *param_4)

{
  char cVar1;
  bool bVar2;
  ulong uVar3;
  code *pcVar4;
  undefined1 *puVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  ulong uVar9;
  ulong uVar10;
  long *plVar11;
  long *plVar12;
  long *plVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  ulong unaff_x25;
  ulong uVar17;
  long lStack_a8;
  long lStack_a0;
  long lStack_98;
  long lStack_90;
  long *plStack_88;
  long *plStack_80;
  long *plStack_78;
  long *plStack_70;
  undefined1 uStack_61;
  
  uVar15 = *(ulong *)(param_2 + 0xf0);
  uVar16 = param_1[1];
  if (uVar16 != 0) {
    uVar17 = uVar16 - 1;
    if ((uVar16 & uVar17) == 0) {
      unaff_x25 = uVar17 & uVar15;
    }
    else {
      unaff_x25 = uVar15;
      if (uVar16 <= uVar15) {
        uVar9 = 0;
        if (uVar16 != 0) {
          uVar9 = uVar15 / uVar16;
        }
        unaff_x25 = uVar15 - uVar9 * uVar16;
      }
    }
    plVar8 = *(long **)(*param_1 + unaff_x25 * 8);
    if ((plVar8 != (long *)0x0) && (plVar8 = (long *)*plVar8, plVar8 != (long *)0x0)) {
      do {
        uVar9 = plVar8[1];
        if (uVar9 == uVar15) {
          plStack_88 = plVar8 + 2;
          plStack_80 = plVar8 + 0xb;
          plStack_78 = plVar8 + 0xe;
          plStack_70 = plVar8 + 0x11;
          puVar5 = &uStack_61;
          lStack_a8 = param_2;
          lStack_a0 = param_2 + 0x48;
          lStack_98 = param_2 + 0x60;
          lStack_90 = param_2 + 0x78;
          FUN_109d2d6b8(puVar5,&plStack_88,&lStack_a8);
          if (((ulong)puVar5 & 1) != 0) {
            return;
          }
        }
        else {
          if ((uVar16 & uVar17) == 0) {
            uVar9 = uVar9 & uVar17;
          }
          else if (uVar16 <= uVar9) {
            uVar10 = 0;
            if (uVar16 != 0) {
              uVar10 = uVar9 / uVar16;
            }
            uVar9 = uVar9 - uVar10 * uVar16;
          }
          if (uVar9 != unaff_x25) break;
        }
        plVar8 = (long *)*plVar8;
      } while (plVar8 != (long *)0x0);
    }
  }
  plVar8 = (long *)0x118;
  __Znwm();
  *plVar8 = 0;
  plVar8[1] = uVar15;
  FUN_109d27278(plVar8 + 2,param_3);
  lVar6 = param_4[1];
  plVar8[0x21] = *param_4;
  plVar8[0x22] = lVar6;
  if (lVar6 != 0) {
    plVar11 = (long *)(lVar6 + 8);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar11,0x10);
      if (bVar2) {
        *plVar11 = *plVar11 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  if ((uVar16 != 0) && ((float)(param_1[3] + 1) <= *(float *)(param_1 + 4) * (float)uVar16))
  goto LAB_109d2a38c;
  uVar17 = 1;
  if (2 < uVar16) {
    uVar17 = (ulong)((uVar16 & uVar16 - 1) != 0);
  }
  uVar17 = uVar17 | uVar16 << 1;
  uVar16 = (ulong)((float)(param_1[3] + 1) / *(float *)(param_1 + 4));
  if (uVar17 <= uVar16) {
    uVar17 = uVar16;
  }
  if (uVar17 - 1 == 0) {
    uVar17 = 2;
  }
  else if ((uVar17 & uVar17 - 1) != 0) {
    __ZNSt3__112__next_primeEm();
  }
  uVar16 = param_1[1];
  if (uVar16 < uVar17) {
LAB_109d2a214:
    if (uVar17 >> 0x3d != 0) {
      func_0x000104c4f740();
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x109d2a464);
      (*pcVar4)();
    }
    lVar6 = uVar17 << 3;
    __Znwm();
    lVar7 = *param_1;
    *param_1 = lVar6;
    if (lVar7 != 0) {
      __ZdlPv();
    }
    uVar16 = 0;
    param_1[1] = uVar17;
    do {
      *(undefined8 *)(*param_1 + uVar16 * 8) = 0;
      uVar16 = uVar16 + 1;
    } while (uVar17 != uVar16);
    plVar11 = (long *)param_1[2];
    uVar16 = uVar17;
    if (plVar11 != (long *)0x0) {
      uVar9 = plVar11[1];
      uVar10 = uVar17 - 1;
      if ((uVar17 & uVar10) == 0) {
        uVar9 = uVar9 & uVar10;
      }
      else if (uVar17 <= uVar9) {
        uVar14 = 0;
        if (uVar17 != 0) {
          uVar14 = uVar9 / uVar17;
        }
        uVar9 = uVar9 - uVar14 * uVar17;
      }
      *(long **)(*param_1 + uVar9 * 8) = param_1 + 2;
      plVar12 = (long *)*plVar11;
      while (plVar12 != (long *)0x0) {
        uVar14 = plVar12[1];
        if ((uVar17 & uVar10) == 0) {
          uVar14 = uVar14 & uVar10;
        }
        else if (uVar17 <= uVar14) {
          uVar3 = 0;
          if (uVar17 != 0) {
            uVar3 = uVar14 / uVar17;
          }
          uVar14 = uVar14 - uVar3 * uVar17;
        }
        plVar13 = plVar12;
        if (uVar14 != uVar9) {
          lVar6 = *param_1;
          if (*(long *)(lVar6 + uVar14 * 8) == 0) {
            *(long **)(lVar6 + uVar14 * 8) = plVar11;
            uVar9 = uVar14;
          }
          else {
            *plVar11 = *plVar12;
            *plVar12 = **(undefined8 **)(lVar6 + uVar14 * 8);
            **(long **)(lVar6 + uVar14 * 8) = (long)plVar12;
            plVar13 = plVar11;
          }
        }
        plVar11 = plVar13;
        plVar12 = (long *)*plVar13;
      }
    }
  }
  else if (uVar17 < uVar16) {
    uVar9 = (ulong)((float)(ulong)param_1[3] / *(float *)(param_1 + 4));
    if ((uVar16 < 3) || ((uVar16 & uVar16 - 1) != 0)) {
      __ZNSt3__112__next_primeEm();
    }
    else if (1 < uVar9) {
      uVar9 = 1L << (-LZCOUNT(uVar9 - 1) & 0x3fU);
    }
    if (uVar17 <= uVar9) {
      uVar17 = uVar9;
    }
    if (uVar17 < uVar16) {
      if (uVar17 != 0) goto LAB_109d2a214;
      lVar6 = *param_1;
      *param_1 = 0;
      if (lVar6 != 0) {
        __ZdlPv();
      }
      param_1[1] = 0;
      uVar16 = 0;
    }
    else {
      uVar16 = param_1[1];
    }
  }
  if ((uVar16 & uVar16 - 1) == 0) {
    unaff_x25 = uVar16 - 1 & uVar15;
  }
  else {
    unaff_x25 = uVar15;
    if (uVar16 <= uVar15) {
      uVar17 = 0;
      if (uVar16 != 0) {
        uVar17 = uVar15 / uVar16;
      }
      unaff_x25 = uVar15 - uVar17 * uVar16;
    }
  }
LAB_109d2a38c:
  lVar6 = *param_1;
  plVar11 = *(long **)(lVar6 + unaff_x25 * 8);
  if (plVar11 == (long *)0x0) {
    plVar11 = param_1 + 2;
    *plVar8 = *plVar11;
    *plVar11 = (long)plVar8;
    *(long **)(lVar6 + unaff_x25 * 8) = plVar11;
    if (*plVar8 != 0) {
      uVar15 = *(ulong *)(*plVar8 + 8);
      if ((uVar16 & uVar16 - 1) == 0) {
        uVar15 = uVar15 & uVar16 - 1;
      }
      else if (uVar16 <= uVar15) {
        uVar17 = 0;
        if (uVar16 != 0) {
          uVar17 = uVar15 / uVar16;
        }
        uVar15 = uVar15 - uVar17 * uVar16;
      }
      *(long **)(*param_1 + uVar15 * 8) = plVar8;
    }
  }
  else {
    *plVar8 = *plVar11;
    *plVar11 = (long)plVar8;
  }
  param_1[3] = param_1[3] + 1;
  return;
}



/* Entry: 109d2a48c; end: 109d2a4eb;  */

long FUN_109d2a48c(long param_1)

{
  long lStack_28;
  
  func_0x000109a1aa5c(param_1 + 0x1d0);
  (*(code *)**(undefined8 **)(param_1 + 0x198))(param_1 + 0x198);
  (*(code *)**(undefined8 **)(param_1 + 0x158))(param_1 + 0x158);
  func_0x000109a1921c(param_1 + 0x138);
  (*(code *)**(undefined8 **)(param_1 + 0x100))(param_1 + 0x100);
  if (*(char *)(param_1 + 0xaf) < '\0') {
    __ZdlPv(*(undefined8 *)(param_1 + 0x98));
  }
  if (*(long *)(param_1 + 0x78) != 0) {
    *(long *)(param_1 + 0x80) = *(long *)(param_1 + 0x78);
    __ZdlPv();
  }
  if (*(long *)(param_1 + 0x60) != 0) {
    *(long *)(param_1 + 0x68) = *(long *)(param_1 + 0x60);
    __ZdlPv();
  }
  if (*(char *)(param_1 + 0x5f) < '\0') {
    __ZdlPv(*(undefined8 *)(param_1 + 0x48));
  }
  if (*(char *)(param_1 + 0x47) < '\0') {
    __ZdlPv(*(undefined8 *)(param_1 + 0x30));
  }
  lStack_28 = param_1 + 0x18;
  func_0x000109378cec(&lStack_28);
  lStack_28 = param_1;
  func_0x000109378cec(&lStack_28);
  return param_1;
}



/* Entry: 109d2a4ec; end: 109d2a6eb;  */

void FUN_109d2a4ec(undefined8 param_1,undefined8 *param_2,long param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  undefined8 *puVar5;
  long lVar6;
  long lVar7;
  long *plStack_80;
  long lStack_78;
  undefined8 uStack_70;
  char cStack_59;
  undefined8 uStack_50;
  long *plStack_48;
  undefined1 auStack_40 [8];
  long *plStack_38;
  
  lVar7 = *(long *)(param_3 + 0x10);
  FUN_109d28188(auStack_40,lVar7,lVar7 + 0xf8,*(undefined1 *)(lVar7 + 0x148));
  FUN_109d05694(&uStack_50,&lStack_78,lVar7 + 0x98);
  puVar5 = param_2;
  (*(code *)*param_2)();
  if ((int)puVar5 == 0) {
    if (*(char *)(*(long *)(lVar7 + 0x158) + 8) == '\x01') {
      (**(code **)(lVar7 + 0x150))(lVar7 + 0x150);
    }
    FUN_109d03fe8(&plStack_80,uStack_50,auStack_40,0);
    func_0x00010938ab98(&lStack_78,&plStack_80);
    if (plStack_80 != (long *)0x0) {
      plVar1 = plStack_80 + 1;
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
        (**(code **)(*plStack_80 + 0x10))();
      }
    }
    FUN_109d282c8(param_1,&lStack_78,lVar7,lVar7 + 0x138,*(undefined1 *)(lVar7 + 0x148),
                  lVar7 + 0x150,param_2);
    if (cStack_59 < '\0') {
      __ZdlPv(uStack_70);
    }
    lVar7 = lStack_78;
    lStack_78 = 0;
    if (lVar7 != 0) {
      FUN_109cda590();
      __ZdlPv();
    }
    if (plStack_48 != (long *)0x0) {
      plVar1 = plStack_48 + 1;
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
        (**(code **)(*plStack_48 + 0x10))(plStack_48);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_48);
      }
    }
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
        __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_38);
      }
    }
    return;
  }
  func_0x000105688514(&UNK_10f5accd0);
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x109d2a680);
  (*pcVar4)();
}



/* Entry: 109d2a6ec; end: 109d2a75f;  */

void FUN_109d2a6ec(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 8);
  if (lVar1 != 0) {
    func_0x000109a1aa5c(lVar1 + 0x1d0);
    (*(code *)**(undefined8 **)(lVar1 + 0x198))(lVar1 + 0x198);
    (*(code *)**(undefined8 **)(lVar1 + 0x158))(lVar1 + 0x158);
    func_0x000109a1921c(lVar1 + 0x138);
    (*(code *)**(undefined8 **)(lVar1 + 0x100))(lVar1 + 0x100);
    FUN_109d2644c(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 109d2a760; end: 109d2a777;  */

void FUN_109d2a760(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_2[1] = 0;
  return;
}



/* Entry: 109d2a778; end: 109d2a7eb;  */

long FUN_109d2a778(long param_1)

{
  FUN_109d2644c(param_1 + 0xa8);
  if (*(long *)(param_1 + 0xa0) != 0) {
    func_0x0001092b4274();
  }
  func_0x000109a1aa04(param_1 + 0x90);
  (*(code *)**(undefined8 **)(param_1 + 0x58))();
  (*(code *)**(undefined8 **)(param_1 + 0x18))((undefined8 *)(param_1 + 0x18));
  if (*(long *)(param_1 + 8) != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  return param_1;
}



/* Entry: 109d2a7ec; end: 109d2a87f;  */

long FUN_109d2a7ec(long param_1)

{
  long *plVar1;
  ulong *puVar2;
  char cVar3;
  bool bVar4;
  ulong uVar5;
  long lVar6;
  long *plVar7;
  
  plVar7 = *(long **)(param_1 + 0x18);
  if (plVar7 != (long *)0x0) {
    puVar2 = (ulong *)(plVar7 + 1);
    do {
      uVar5 = *puVar2;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(puVar2,0x10);
      if (bVar4) {
        *puVar2 = uVar5 - 4;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if ((uVar5 & 0x1fffffffc) == 4) {
      (**(code **)(*plVar7 + 0x10))(plVar7);
      do {
        uVar5 = *puVar2;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(puVar2,0x10);
        if (bVar4) {
          *puVar2 = uVar5 - 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (uVar5 - 1 == 0) {
        (**(code **)(*plVar7 + 8))(plVar7);
      }
    }
  }
  if (*(long *)(param_1 + 0x10) != 0) {
    func_0x0001092b4274();
  }
  plVar7 = *(long **)(param_1 + 8);
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
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
    }
  }
  return param_1;
}



/* Entry: 109d2a880; end: 109d2a8d3;  */

ulong FUN_109d2a880(long param_1)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  ulong uVar4;
  bool bVar5;
  
  piVar1 = (int *)(*(long *)(param_1 + 0x10) + 0x18);
  do {
    iVar2 = *piVar1;
    if (iVar2 != 0) {
      bVar5 = false;
      ClearExclusiveLocal();
      goto LAB_109d2a8ac;
    }
    cVar3 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
    if (bVar5) {
      *piVar1 = -0x80000000;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  bVar5 = true;
LAB_109d2a8ac:
  uVar4 = 1;
  if (((!bVar5) && (-1 < iVar2)) && (uVar4 = 0, *(long *)(param_1 + 0x28) != 0)) {
    uVar4 = *(ulong *)(*(long *)(param_1 + 0x28) + 0x10) >> 1 & 1;
  }
  return uVar4;
}



/* Entry: 109d2a8d4; end: 109d2a967;  */

long FUN_109d2a8d4(long param_1)

{
  long *plVar1;
  ulong *puVar2;
  char cVar3;
  bool bVar4;
  ulong uVar5;
  long lVar6;
  long *plVar7;
  
  plVar7 = *(long **)(param_1 + 0x20);
  if (plVar7 != (long *)0x0) {
    puVar2 = (ulong *)(plVar7 + 1);
    do {
      uVar5 = *puVar2;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(puVar2,0x10);
      if (bVar4) {
        *puVar2 = uVar5 - 4;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if ((uVar5 & 0x1fffffffc) == 4) {
      (**(code **)(*plVar7 + 0x10))(plVar7);
      do {
        uVar5 = *puVar2;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(puVar2,0x10);
        if (bVar4) {
          *puVar2 = uVar5 - 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (uVar5 - 1 == 0) {
        (**(code **)(*plVar7 + 8))(plVar7);
      }
    }
  }
  if (*(long *)(param_1 + 0x18) != 0) {
    func_0x0001092b4274();
  }
  plVar7 = *(long **)(param_1 + 0x10);
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
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
    }
  }
  return param_1 + 8;
}



/* Entry: 109d2a968; end: 109d2aa07;  */

void FUN_109d2a968(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  
  *param_1 = &PTR_FUN_110b3f978;
  uVar1 = *(undefined8 *)(param_2 + 8);
  param_1[2] = *(undefined8 *)(param_2 + 0x10);
  param_1[1] = uVar1;
  *(undefined8 *)(param_2 + 8) = 0;
  *(undefined8 *)(param_2 + 0x10) = 0;
  uVar1 = *(undefined8 *)(param_2 + 0x18);
  param_1[4] = *(undefined8 *)(param_2 + 0x20);
  param_1[3] = uVar1;
  *(undefined8 *)(param_2 + 0x18) = 0;
  *(undefined8 *)(param_2 + 0x20) = 0;
  return;
}



/* Entry: 109d2aa08; end: 109d2aa37;  */

void FUN_109d2aa08(long param_1)

{
  long *plVar1;
  
  plVar1 = *(long **)(param_1 + 0x1b0);
  FUN_109d2aa38();
                    /* WARNING: Could not recover jumptable at 0x000109d2aa34. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x30))(plVar1,0);
  return;
}



/* Entry: 109d2aa38; end: 109d2abb3;  */

void FUN_109d2aa38(long *param_1)

{
  char cVar1;
  bool bVar2;
  code *pcVar3;
  long *plVar4;
  long lVar5;
  long *plVar6;
  long lStack_30;
  long *plStack_28;
  
  plVar6 = param_1 + 10;
  plVar4 = plVar6;
  (*(code *)*plVar6)();
  if ((int)plVar4 == 0) {
    (*(code *)param_1[2])(&lStack_30,plVar6);
    FUN_109d2711c(param_1[0x14],&lStack_30);
    plVar4 = plStack_28;
    if (plStack_28 != (long *)0x0) {
      plVar6 = plStack_28 + 1;
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
        (**(code **)(*plStack_28 + 0x10))(plStack_28);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
      }
    }
    plVar4 = (long *)param_1[1];
    if (plVar4 != (long *)0x0) {
      __ZNSt3__119__shared_weak_count4lockEv();
      plStack_28 = plVar4;
      if (plVar4 != (long *)0x0) {
        lStack_30 = *param_1;
        if (lStack_30 != 0) {
          FUN_109d29fdc(lStack_30,param_1 + 0x15,param_1 + 0x12);
        }
        plVar6 = plVar4 + 1;
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
          (**(code **)(*plVar4 + 0x10))(plVar4);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
        }
      }
    }
    (*(code *)param_1[0x35])(param_1);
    return;
  }
  func_0x000105688514(&UNK_10f5acd44);
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x109d2ab44);
  (*pcVar3)();
}



/* Entry: 109d2abb4; end: 109d2acab;  */

void FUN_109d2abb4(long param_1)

{
  if (param_1 != 0) {
    FUN_109d2644c(param_1 + 0xa8);
    if (*(long *)(param_1 + 0xa0) != 0) {
      func_0x0001092b4274();
    }
    func_0x000109a1aa04(param_1 + 0x90);
    (*(code *)**(undefined8 **)(param_1 + 0x58))();
    (*(code *)**(undefined8 **)(param_1 + 0x18))((undefined8 *)(param_1 + 0x18));
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



/* Entry: 109d2acac; end: 109d2acef;  */

undefined8 FUN_109d2acac(void)

{
  return 0;
}



/* Entry: 109d2acf0; end: 109d2b147;  */

void FUN_109d2acf0(long param_1)

{
  ulong *puVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  code *pcVar5;
  long lVar6;
  long *plVar7;
  uint uVar8;
  undefined8 uVar9;
  ulong uVar10;
  long lVar11;
  undefined8 uVar12;
  undefined1 auStack_30 [8];
  long *plStack_28;
  
  lVar11 = *(long *)(param_1 + 0xe0);
  uVar8 = (uint)*(undefined8 *)(*(long *)(param_1 + 0xe0) + 0x10);
  if ((*(byte *)(param_1 + 0xf8) & 1) == 0) {
    if ((uVar8 >> 5 & 1) != 0) {
      func_0x0001092af97c(lVar11 + 0x90);
      goto LAB_109d2afe0;
    }
    uVar9 = *(undefined8 *)(lVar11 + 0x98);
    *(undefined8 *)(lVar11 + 0x98) = 0;
    lVar6 = *(long *)(param_1 + 0x88);
    *(undefined8 *)(param_1 + 0x88) = uVar9;
    if (lVar6 != 0) {
      FUN_109cda590();
      __ZdlPv();
    }
    if (*(char *)(param_1 + 0xa7) < '\0') {
      __ZdlPv(*(undefined8 *)(param_1 + 0x90));
    }
    uVar12 = *(undefined8 *)(lVar11 + 0xa8);
    uVar9 = *(undefined8 *)(lVar11 + 0xa0);
    *(undefined8 *)(param_1 + 0xa0) = *(undefined8 *)(lVar11 + 0xb0);
    *(undefined8 *)(param_1 + 0x98) = uVar12;
    *(undefined8 *)(param_1 + 0x90) = uVar9;
    *(undefined1 *)(lVar11 + 0xb7) = 0;
    *(undefined1 *)(lVar11 + 0xa0) = 0;
    *(undefined1 *)(param_1 + 0xa8) = *(undefined1 *)(lVar11 + 0xb8);
    plVar7 = *(long **)(param_1 + 0xe0);
    if (plVar7 != (long *)0x0) {
      puVar1 = (ulong *)(plVar7 + 1);
      do {
        uVar10 = *puVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar4) {
          *puVar1 = uVar10 - 4;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if ((uVar10 & 0x1fffffffc) == 4) {
        do {
          uVar10 = *puVar1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar4) {
            *puVar1 = uVar10 - 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (uVar10 - 1 == 0) {
          (**(code **)(*plVar7 + 8))();
        }
      }
    }
    plVar7 = *(long **)(param_1 + 0xe8);
    if (plVar7 == (long *)0x0) goto LAB_109d2ae88;
    puVar1 = (ulong *)(plVar7 + 1);
    do {
      uVar10 = *puVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar4) {
        *puVar1 = uVar10 - 4;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if ((uVar10 & 0x1fffffffc) != 4) goto LAB_109d2ae88;
    do {
      uVar10 = *puVar1 - 1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar4) {
        *puVar1 = uVar10;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  else {
    if ((uVar8 >> 5 & 1) != 0) {
      func_0x0001092af97c(lVar11 + 0x90);
LAB_109d2afe0:
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x109d2afe4);
      (*pcVar5)();
    }
    uVar9 = *(undefined8 *)(lVar11 + 0x98);
    *(undefined8 *)(lVar11 + 0x98) = 0;
    lVar6 = *(long *)(param_1 + 0x88);
    *(undefined8 *)(param_1 + 0x88) = uVar9;
    if (lVar6 != 0) {
      FUN_109cda590();
      __ZdlPv();
    }
    if (*(char *)(param_1 + 0xa7) < '\0') {
      __ZdlPv(*(undefined8 *)(param_1 + 0x90));
    }
    uVar12 = *(undefined8 *)(lVar11 + 0xa8);
    uVar9 = *(undefined8 *)(lVar11 + 0xa0);
    *(undefined8 *)(param_1 + 0xa0) = *(undefined8 *)(lVar11 + 0xb0);
    *(undefined8 *)(param_1 + 0x98) = uVar12;
    *(undefined8 *)(param_1 + 0x90) = uVar9;
    *(undefined1 *)(lVar11 + 0xb7) = 0;
    *(undefined1 *)(lVar11 + 0xa0) = 0;
    *(undefined1 *)(param_1 + 0xa8) = *(undefined1 *)(lVar11 + 0xb8);
    plVar7 = *(long **)(param_1 + 0xe0);
    if (plVar7 == (long *)0x0) goto LAB_109d2ae88;
    puVar1 = (ulong *)(plVar7 + 1);
    do {
      uVar10 = *puVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar4) {
        *puVar1 = uVar10 - 4;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if ((uVar10 & 0x1fffffffc) != 4) goto LAB_109d2ae88;
    do {
      uVar10 = *puVar1 - 1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar4) {
        *puVar1 = uVar10;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  if (uVar10 == 0) {
    (**(code **)(*plVar7 + 8))();
  }
LAB_109d2ae88:
  lVar11 = *(long *)(param_1 + 0xf0);
  FUN_109d282c8(auStack_30,param_1 + 0x88,lVar11,lVar11 + 0x138,*(undefined1 *)(lVar11 + 0x148),
                lVar11 + 0x158,param_1 + 0x48);
  FUN_109d28288(param_1 + 0x10,auStack_30);
  if (plStack_28 != (long *)0x0) {
    plVar7 = plStack_28 + 1;
    do {
      lVar11 = *plVar7;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar4) {
        *plVar7 = lVar11 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar11 == 0) {
      (**(code **)(*plStack_28 + 0x10))(plStack_28);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_28);
    }
  }
  if (*(char *)(param_1 + 0xa7) < '\0') {
    __ZdlPv(*(undefined8 *)(param_1 + 0x90));
  }
  if (*(long *)(param_1 + 0x88) != 0) {
    FUN_109cda590();
    __ZdlPv();
  }
  plVar7 = *(long **)(param_1 + 0xd8);
  if (plVar7 != (long *)0x0) {
    puVar1 = (ulong *)(plVar7 + 1);
    do {
      uVar10 = *puVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar4) {
        *puVar1 = uVar10 - 4;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if ((uVar10 & 0x1fffffffc) == 4) {
      do {
        uVar10 = *puVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar4) {
          *puVar1 = uVar10 - 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (uVar10 - 1 == 0) {
        (**(code **)(*plVar7 + 8))();
      }
    }
  }
  if (*(char *)(param_1 + 199) < '\0') {
    __ZdlPv(*(undefined8 *)(param_1 + 0xb0));
  }
  plVar7 = *(long **)(param_1 + 0xd0);
  if (plVar7 != (long *)0x0) {
    plVar2 = plVar7 + 1;
    do {
      lVar11 = *plVar2;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar4) {
        *plVar2 = lVar11 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar11 == 0) {
      (**(code **)(*plVar7 + 0x10))(plVar7);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
    }
  }
  func_0x000109d1a1d0(param_1 + 0x10);
  (*(code *)**(undefined8 **)(param_1 + 0x50))();
  __ZdlPv(param_1);
  return;
}



/* Entry: 109d2b148; end: 109d2b2ff;  */

void FUN_109d2b148(long param_1)

{
  ulong *puVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  long *plVar5;
  ulong uVar6;
  long lVar7;
  
  plVar5 = *(long **)(param_1 + 0xe0);
  if ((*(byte *)(param_1 + 0xf8) & 1) == 0) {
    if (plVar5 != (long *)0x0) {
      puVar1 = (ulong *)(plVar5 + 1);
      do {
        uVar6 = *puVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar4) {
          *puVar1 = uVar6 - 4;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if ((uVar6 & 0x1fffffffc) == 4) {
        do {
          uVar6 = *puVar1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar4) {
            *puVar1 = uVar6 - 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (uVar6 - 1 == 0) {
          (**(code **)(*plVar5 + 8))();
        }
      }
    }
    plVar5 = *(long **)(param_1 + 0xe8);
    if (plVar5 == (long *)0x0) goto LAB_109d2b228;
    puVar1 = (ulong *)(plVar5 + 1);
    do {
      uVar6 = *puVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar4) {
        *puVar1 = uVar6 - 4;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if ((uVar6 & 0x1fffffffc) != 4) goto LAB_109d2b228;
    do {
      uVar6 = *puVar1 - 1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar4) {
        *puVar1 = uVar6;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  else {
    if (plVar5 == (long *)0x0) goto LAB_109d2b228;
    puVar1 = (ulong *)(plVar5 + 1);
    do {
      uVar6 = *puVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar4) {
        *puVar1 = uVar6 - 4;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if ((uVar6 & 0x1fffffffc) != 4) goto LAB_109d2b228;
    do {
      uVar6 = *puVar1 - 1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar4) {
        *puVar1 = uVar6;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  if (uVar6 == 0) {
    (**(code **)(*plVar5 + 8))();
  }
LAB_109d2b228:
  if (*(char *)(param_1 + 0xa7) < '\0') {
    __ZdlPv(*(undefined8 *)(param_1 + 0x90));
  }
  if (*(long *)(param_1 + 0x88) != 0) {
    FUN_109cda590();
    __ZdlPv();
  }
  plVar5 = *(long **)(param_1 + 0xd8);
  if (plVar5 != (long *)0x0) {
    puVar1 = (ulong *)(plVar5 + 1);
    do {
      uVar6 = *puVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar4) {
        *puVar1 = uVar6 - 4;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if ((uVar6 & 0x1fffffffc) == 4) {
      do {
        uVar6 = *puVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar4) {
          *puVar1 = uVar6 - 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (uVar6 - 1 == 0) {
        (**(code **)(*plVar5 + 8))();
      }
    }
  }
  if (*(char *)(param_1 + 199) < '\0') {
    __ZdlPv(*(undefined8 *)(param_1 + 0xb0));
  }
  plVar5 = *(long **)(param_1 + 0xd0);
  if (plVar5 != (long *)0x0) {
    plVar2 = plVar5 + 1;
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
      (**(code **)(*plVar5 + 0x10))(plVar5);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
    }
  }
  func_0x000109d1a1d0(param_1 + 0x10);
  (*(code *)**(undefined8 **)(param_1 + 0x50))();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 109d2b300; end: 109d2b523;  */

void FUN_109d2b300(long param_1)

{
  ulong *puVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  code *pcVar5;
  long *plVar6;
  ulong uVar7;
  long lVar8;
  
  plVar6 = *(long **)(param_1 + 0x58);
  if (((uint)*(undefined8 *)(*(long *)(param_1 + 0x58) + 0x10) >> 5 & 1) == 0) {
    lVar8 = plVar6[0x13];
    *(long *)(param_1 + 0x50) = plVar6[0x14];
    *(long *)(param_1 + 0x48) = lVar8;
    plVar6[0x13] = 0;
    plVar6[0x14] = 0;
    puVar1 = (ulong *)(plVar6 + 1);
    do {
      uVar7 = *puVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar4) {
        *puVar1 = uVar7 - 4;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if ((uVar7 & 0x1fffffffc) == 4) {
      do {
        uVar7 = *puVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar4) {
          *puVar1 = uVar7 - 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (uVar7 - 1 == 0) {
        (**(code **)(*plVar6 + 8))();
      }
    }
    plVar6 = *(long **)(param_1 + 0x60);
    if (plVar6 != (long *)0x0) {
      puVar1 = (ulong *)(plVar6 + 1);
      do {
        uVar7 = *puVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar4) {
          *puVar1 = uVar7 - 4;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if ((uVar7 & 0x1fffffffc) == 4) {
        do {
          uVar7 = *puVar1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar4) {
            *puVar1 = uVar7 - 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (uVar7 - 1 == 0) {
          (**(code **)(*plVar6 + 8))();
        }
      }
    }
    FUN_109d2711c(*(undefined8 *)(*(long *)(param_1 + 0x68) + 0xa0),param_1 + 0x48);
    plVar6 = *(long **)(param_1 + 0x50);
    if (plVar6 != (long *)0x0) {
      plVar2 = plVar6 + 1;
      do {
        lVar8 = *plVar2;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar4) {
          *plVar2 = lVar8 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar8 == 0) {
        (**(code **)(*plVar6 + 0x10))(plVar6);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
      }
    }
    FUN_109d29f1c(*(undefined8 *)(param_1 + 0x68));
    func_0x0001092ba100(param_1 + 0x10);
    func_0x000109d1a1d0(param_1 + 0x10);
    __ZdlPv(param_1);
    return;
  }
  func_0x0001092af97c(plVar6 + 0x12);
                    /* WARNING: Does not return */
  pcVar5 = (code *)SoftwareBreakpoint(1,0x109d2b448);
  (*pcVar5)();
}



/* Entry: 109d2b524; end: 109d2b5db;  */

void FUN_109d2b524(long param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  ulong uVar5;
  
  plVar4 = *(long **)(param_1 + 0x58);
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
  plVar4 = *(long **)(param_1 + 0x60);
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
  func_0x000109d1a1d0(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 109d2b5dc; end: 109d2b907;  */

void FUN_109d2b5dc(long param_1)

{
  ulong *puVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  code *pcVar5;
  long *plVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long lStack_38;
  long lStack_30;
  undefined8 uStack_28;
  
  if ((*(byte *)(param_1 + 0x200) & 1) == 0) {
    FUN_109d2994c(param_1 + 0x1f8,param_1 + 0x48);
    *(long *)(param_1 + 0x1e8) = *(long *)(param_1 + 0x1f8);
    plVar6 = (long *)(*(long *)(param_1 + 0x1f8) + 8);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar4) {
        *plVar6 = *plVar6 + 4;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (((uint)*(undefined8 *)(*(long *)(param_1 + 0x1e8) + 0x10) >> 1 & 1) == 0) {
      *(undefined1 *)(param_1 + 0x200) = 1;
      lVar9 = *(long *)(param_1 + 0x1e8);
      plVar6 = (long *)(lVar9 + 0x10);
      uStack_28 = *(undefined8 *)(param_1 + 0x18);
      do {
        lVar8 = *plVar6;
        if (lVar8 == 0) {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar6,0x10);
          if (bVar4) {
            *plVar6 = 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
          if (cVar3 == '\0') {
            lStack_38 = 0;
            lStack_30 = param_1;
            func_0x000109d1b588(lVar9 + 0x18,&lStack_38);
            *(undefined8 *)(lVar9 + 0x10) = 0;
            return;
          }
        }
        else {
          ClearExclusiveLocal();
        }
      } while (((uint)lVar8 >> 1 & 1) == 0);
    }
  }
  plVar6 = *(long **)(param_1 + 0x1e8);
  if (((uint)*(undefined8 *)(*(long *)(param_1 + 0x1e8) + 0x10) >> 5 & 1) == 0) {
    if (plVar6 != (long *)0x0) {
      puVar1 = (ulong *)(plVar6 + 1);
      do {
        uVar7 = *puVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar4) {
          *puVar1 = uVar7 - 4;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if ((uVar7 & 0x1fffffffc) == 4) {
        do {
          uVar7 = *puVar1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar4) {
            *puVar1 = uVar7 - 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (uVar7 - 1 == 0) {
          (**(code **)(*plVar6 + 8))();
        }
      }
    }
    plVar6 = *(long **)(param_1 + 0x1f8);
    if (plVar6 != (long *)0x0) {
      puVar1 = (ulong *)(plVar6 + 1);
      do {
        uVar7 = *puVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar4) {
          *puVar1 = uVar7 - 4;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if ((uVar7 & 0x1fffffffc) == 4) {
        do {
          uVar7 = *puVar1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar4) {
            *puVar1 = uVar7 - 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (uVar7 - 1 == 0) {
          (**(code **)(*plVar6 + 8))();
        }
      }
    }
    func_0x0001092ba100(param_1 + 0x10);
    if (*(char *)(param_1 + 0x19f) < '\0') {
      __ZdlPv(*(undefined8 *)(param_1 + 0x188));
    }
    if (*(long *)(param_1 + 0x168) != 0) {
      *(long *)(param_1 + 0x170) = *(long *)(param_1 + 0x168);
      __ZdlPv();
    }
    if (*(long *)(param_1 + 0x150) != 0) {
      *(long *)(param_1 + 0x158) = *(long *)(param_1 + 0x150);
      __ZdlPv();
    }
    if (*(char *)(param_1 + 0x14f) < '\0') {
      __ZdlPv(*(undefined8 *)(param_1 + 0x138));
    }
    if (*(char *)(param_1 + 0x137) < '\0') {
      __ZdlPv(*(undefined8 *)(param_1 + 0x120));
    }
    lStack_38 = param_1 + 0x108;
    func_0x000109378cec(&lStack_38);
    lStack_38 = param_1 + 0xf0;
    func_0x000109378cec(&lStack_38);
    if (*(long *)(param_1 + 0xe8) != 0) {
      func_0x0001092b4274();
    }
    plVar6 = *(long **)(param_1 + 0xe0);
    if (plVar6 != (long *)0x0) {
      plVar2 = plVar6 + 1;
      do {
        lVar9 = *plVar2;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar4) {
          *plVar2 = lVar9 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar9 == 0) {
        (**(code **)(*plVar6 + 0x10))(plVar6);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
      }
    }
    (*(code *)**(undefined8 **)(param_1 + 0xa0))();
    (*(code *)**(undefined8 **)(param_1 + 0x60))((undefined8 *)(param_1 + 0x60));
    if (*(long *)(param_1 + 0x50) != 0) {
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
    func_0x000109d1a1d0(param_1 + 0x10);
    __ZdlPv(param_1);
    return;
  }
  func_0x0001092af97c(plVar6 + 0x12);
                    /* WARNING: Does not return */
  pcVar5 = (code *)SoftwareBreakpoint(1,0x109d2b84c);
  (*pcVar5)();
}



/* Entry: 109d2b908; end: 109d2babf;  */

void FUN_109d2b908(long param_1)

{
  ulong *puVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  long *plVar5;
  ulong uVar6;
  long lVar7;
  long lStack_28;
  
  if (*(char *)(param_1 + 0x200) == '\x01') {
    plVar5 = *(long **)(param_1 + 0x1e8);
    if (plVar5 != (long *)0x0) {
      puVar1 = (ulong *)(plVar5 + 1);
      do {
        uVar6 = *puVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar4) {
          *puVar1 = uVar6 - 4;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if ((uVar6 & 0x1fffffffc) == 4) {
        do {
          uVar6 = *puVar1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar4) {
            *puVar1 = uVar6 - 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (uVar6 - 1 == 0) {
          (**(code **)(*plVar5 + 8))();
        }
      }
    }
    plVar5 = *(long **)(param_1 + 0x1f8);
    if (plVar5 != (long *)0x0) {
      puVar1 = (ulong *)(plVar5 + 1);
      do {
        uVar6 = *puVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar4) {
          *puVar1 = uVar6 - 4;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if ((uVar6 & 0x1fffffffc) == 4) {
        do {
          uVar6 = *puVar1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar4) {
            *puVar1 = uVar6 - 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (uVar6 - 1 == 0) {
          (**(code **)(*plVar5 + 8))();
        }
      }
    }
  }
  if (*(char *)(param_1 + 0x19f) < '\0') {
    __ZdlPv(*(undefined8 *)(param_1 + 0x188));
  }
  if (*(long *)(param_1 + 0x168) != 0) {
    *(long *)(param_1 + 0x170) = *(long *)(param_1 + 0x168);
    __ZdlPv();
  }
  if (*(long *)(param_1 + 0x150) != 0) {
    *(long *)(param_1 + 0x158) = *(long *)(param_1 + 0x150);
    __ZdlPv();
  }
  if (*(char *)(param_1 + 0x14f) < '\0') {
    __ZdlPv(*(undefined8 *)(param_1 + 0x138));
  }
  if (*(char *)(param_1 + 0x137) < '\0') {
    __ZdlPv(*(undefined8 *)(param_1 + 0x120));
  }
  lStack_28 = param_1 + 0x108;
  func_0x000109378cec(&lStack_28);
  lStack_28 = param_1 + 0xf0;
  func_0x000109378cec(&lStack_28);
  if (*(long *)(param_1 + 0xe8) != 0) {
    func_0x0001092b4274();
  }
  plVar5 = *(long **)(param_1 + 0xe0);
  if (plVar5 != (long *)0x0) {
    plVar2 = plVar5 + 1;
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
      (**(code **)(*plVar5 + 0x10))(plVar5);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
    }
  }
  (*(code *)**(undefined8 **)(param_1 + 0xa0))();
  (*(code *)**(undefined8 **)(param_1 + 0x60))((undefined8 *)(param_1 + 0x60));
  if (*(long *)(param_1 + 0x50) != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  func_0x000109d1a1d0(param_1 + 0x10);
  __ZdlPv(param_1);
  return;
}



/* Entry: 109d2bac0; end: 109d2beeb;  */

undefined8 *
FUN_109d2bac0(undefined8 *param_1,long param_2,undefined8 *param_3,long *param_4,long *param_5)

{
  ulong *puVar1;
  uint *puVar2;
  ulong uVar4;
  float *pfVar5;
  ulong uVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  ulong uStack_68;
  uint *puVar3;
  float *pfVar6;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  func_0x000109379218();
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  lVar8 = *(long *)(param_2 + 0x18);
  func_0x000109379218(param_1 + 3,lVar8,*(long *)(param_2 + 0x20),
                      (*(long *)(param_2 + 0x20) - lVar8 >> 3) * 0x2e8ba2e8ba2e8ba3);
  if (*(char *)(param_2 + 0x47) < '\0') {
    func_0x000107c3192c(param_1 + 6,*(undefined8 *)(param_2 + 0x30),*(undefined8 *)(param_2 + 0x38))
    ;
  }
  else {
    uVar10 = *(undefined8 *)(param_2 + 0x38);
    uVar9 = *(undefined8 *)(param_2 + 0x30);
    param_1[8] = *(undefined8 *)(param_2 + 0x40);
    param_1[7] = uVar10;
    param_1[6] = uVar9;
  }
  if (*(char *)((long)param_3 + 0x17) < '\0') {
    func_0x000107c3192c(param_1 + 9,*param_3,param_3[1]);
  }
  else {
    uVar10 = param_3[1];
    uVar9 = *param_3;
    param_1[0xb] = param_3[2];
    param_1[10] = uVar10;
    param_1[9] = uVar9;
  }
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  func_0x0001094078b0(param_1 + 0xc,*param_4,param_4[1],param_4[1] - *param_4 >> 2);
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  func_0x0001092cc0dc(param_1 + 0xf,*param_5,param_5[1],param_5[1] - *param_5 >> 2);
  lVar8 = param_5[3];
  *(undefined4 *)((long)param_1 + 0x93) = *(undefined4 *)((long)param_5 + 0x1b);
  *(int *)(param_1 + 0x12) = (int)lVar8;
  if (*(char *)((long)param_5 + 0x37) < '\0') {
    func_0x000107c3192c(param_1 + 0x13,param_5[4],param_5[5]);
  }
  else {
    lVar11 = param_5[5];
    lVar8 = param_5[4];
    param_1[0x15] = param_5[6];
    param_1[0x14] = lVar11;
    param_1[0x13] = lVar8;
  }
  lVar11 = param_5[8];
  lVar8 = param_5[7];
  lVar13 = param_5[10];
  lVar12 = param_5[9];
  lVar15 = param_5[0xc];
  lVar14 = param_5[0xb];
  uVar9 = *(undefined8 *)((long)param_5 + 0x61);
  *(undefined8 *)((long)param_1 + 0xe1) = *(undefined8 *)((long)param_5 + 0x69);
  *(undefined8 *)((long)param_1 + 0xd9) = uVar9;
  param_1[0x19] = lVar13;
  param_1[0x18] = lVar12;
  param_1[0x1b] = lVar15;
  param_1[0x1a] = lVar14;
  param_1[0x17] = lVar11;
  param_1[0x16] = lVar8;
  lVar8 = 0x9e3779b9;
  if ((uint *)*param_4 != (uint *)param_4[1]) {
    uVar7 = 0;
    puVar2 = (uint *)*param_4;
    do {
      puVar3 = puVar2 + 1;
      uVar7 = uVar7 * 0x40 + 0x9e3779b9 + (uVar7 >> 2) + (ulong)*puVar2 ^ uVar7;
      puVar2 = puVar3;
    } while (puVar3 != (uint *)param_4[1]);
    lVar8 = uVar7 + 0x9e3779b9;
  }
  uStack_68 = 0;
  FUN_109d2c6f8(&uStack_68,param_2);
  FUN_109d2c6f8(&uStack_68,(long *)(param_2 + 0x18));
  uVar7 = uStack_68;
  puVar1 = &uStack_68;
  func_0x000107c31944(puVar1,param_3);
  if ((float *)*param_5 == (float *)param_5[1]) {
    uVar4 = 0;
  }
  else {
    uVar4 = 0;
    pfVar5 = (float *)*param_5;
    do {
      pfVar6 = pfVar5 + 1;
      lVar11 = 0x9e3779b9;
      if (*pfVar5 != 0.0) {
        lVar11 = (ulong)(uint)*pfVar5 + 0x9e3779b9;
      }
      uVar4 = (uVar4 >> 2) + uVar4 * 0x40 + lVar11 ^ uVar4;
      pfVar5 = pfVar6;
    } while (pfVar6 != (float *)param_5[1]);
  }
  lVar11 = 0x9e3779b9;
  if (*(float *)(param_5 + 3) != 0.0) {
    lVar11 = (ulong)(uint)*(float *)(param_5 + 3) + 0x9e3779b9;
  }
  uVar4 = (uVar4 >> 2) + uVar4 * 0x40 + lVar11 ^ uVar4;
  uVar4 = (ulong)*(byte *)((long)param_5 + 0x1c) + 0x9e3779b9 + uVar4 * 0x40 + (uVar4 >> 2) ^ uVar4;
  uVar4 = (ulong)*(byte *)((long)param_5 + 0x1d) + 0x9e3779b9 + uVar4 * 0x40 + (uVar4 >> 2) ^ uVar4;
  uVar4 = (ulong)*(byte *)((long)param_5 + 0x1e) + 0x9e3779b9 + uVar4 * 0x40 + (uVar4 >> 2) ^ uVar4;
  lVar11 = 0x1137e1dc0;
  func_0x000107c31944(0x1137e1dc0,param_5 + 4);
  uVar4 = lVar11 + 0x9e3779b9 + uVar4 * 0x40 + (uVar4 >> 2) ^ uVar4;
  uVar4 = (ulong)*(byte *)(param_5 + 7) + 0x9e3779b9 + uVar4 * 0x40 + (uVar4 >> 2) ^ uVar4;
  uVar4 = (ulong)*(byte *)(param_5 + 0xb) + 0x9e3779b9 + uVar4 * 0x40 + (uVar4 >> 2) ^ uVar4;
  uVar4 = (ulong)*(byte *)((long)param_5 + 0x59) + 0x9e3779b9 + uVar4 * 0x40 + (uVar4 >> 2) ^ uVar4;
  uVar4 = (ulong)*(byte *)((long)param_5 + 0x5a) + 0x9e3779b9 + uVar4 * 0x40 + (uVar4 >> 2) ^ uVar4;
  uVar4 = (ulong)*(byte *)((long)param_5 + 0x5b) + 0x9e3779b9 + uVar4 * 0x40 + (uVar4 >> 2) ^ uVar4;
  uVar4 = param_5[0xc] + 0x9e3779b9 + uVar4 * 0x40 + (uVar4 >> 2) ^ uVar4;
  uVar4 = (ulong)*(byte *)(param_5 + 0xd) + 0x9e3779b9 + uVar4 * 0x40 + (uVar4 >> 2) ^ uVar4;
  uVar7 = uVar7 * 0x40 + 0x9e3779b9 + (uVar7 >> 2) + (long)puVar1 ^ uVar7;
  uVar7 = lVar8 + uVar7 * 0x40 + (uVar7 >> 2) ^ uVar7;
  param_1[0x1e] =
       uVar7 * 0x40 + 0x9e3779b9 + (uVar7 >> 2) +
       ((long)*(int *)((long)param_5 + 0x6c) + 0x9e3779b9 + uVar4 * 0x40 + (uVar4 >> 2) ^ uVar4) ^
       uVar7;
  return param_1;
}



/* Entry: 109d2beec; end: 109d2c033;  */

void FUN_109d2beec(undefined8 *param_1,undefined8 param_2,undefined8 param_3,long *param_4,
                  ushort param_5,long *param_6)

{
  long *plVar1;
  undefined8 **ppuVar2;
  uint uVar3;
  char cVar4;
  bool bVar5;
  code *pcVar6;
  undefined8 **ppuVar7;
  undefined8 **ppuVar8;
  uint **ppuVar9;
  undefined8 **ppuVar10;
  ulong uVar11;
  uint uVar12;
  long *plVar13;
  long *plVar14;
  int iVar15;
  long lVar16;
  long *extraout_x8;
  undefined8 *extraout_x8_00;
  ulong uVar17;
  undefined8 *puVar18;
  undefined8 *puVar19;
  int *piVar20;
  undefined1 *unaff_x23;
  uint **unaff_x24;
  uint *unaff_x25;
  byte *unaff_x26;
  byte *unaff_x27;
  uint *unaff_x28;
  long lVar22;
  int *piStack_400;
  int *piStack_3f8;
  undefined8 **ppuStack_3e8;
  uint *puStack_3e0;
  byte *pbStack_3d8;
  byte *pbStack_3d0;
  uint *puStack_3c8;
  uint **ppuStack_3c0;
  undefined1 *puStack_3b8;
  undefined1 *puStack_3b0;
  ulong uStack_3a8;
  long *plStack_3a0;
  undefined8 **ppuStack_398;
  undefined1 ***pppuStack_390;
  undefined8 uStack_388;
  undefined8 uStack_380;
  undefined8 **ppuStack_378;
  undefined8 uStack_370;
  undefined8 *apuStack_368 [7];
  char cStack_330;
  long lStack_328;
  undefined1 *puStack_320;
  undefined8 **ppuStack_318;
  undefined8 *puStack_310;
  undefined1 **ppuStack_300;
  code *pcStack_2f8;
  uint *puStack_2f0;
  uint *puStack_2e8;
  uint *puStack_2e0;
  uint *puStack_2d8;
  undefined8 uStack_2d0;
  undefined1 auStack_2c8 [24];
  undefined1 auStack_2b0 [24];
  undefined8 auStack_298 [2];
  char cStack_281;
  undefined1 *puStack_280;
  long lStack_278;
  uint *puStack_270;
  uint *puStack_268;
  undefined8 uStack_260;
  uint *puStack_250;
  uint *puStack_248;
  undefined8 uStack_240;
  undefined1 auStack_230 [24];
  undefined1 auStack_218 [24];
  undefined8 auStack_200 [2];
  char cStack_1e9;
  undefined1 auStack_1e8 [8];
  undefined8 uStack_1e0;
  undefined1 auStack_1d8 [24];
  undefined8 *puStack_1c0;
  char cStack_1a9;
  undefined8 *puStack_1a8;
  char cStack_191;
  undefined8 *puStack_190;
  char cStack_179;
  undefined8 *puStack_178;
  char cStack_161;
  undefined8 *puStack_160;
  char cStack_149;
  undefined8 *puStack_140;
  char cStack_129;
  undefined1 *puStack_128;
  uint *puStack_120;
  uint *puStack_118;
  undefined8 uStack_110;
  uint **ppuStack_108;
  long lStack_100;
  undefined1 *puStack_a0;
  code *pcStack_98;
  undefined8 uStack_90;
  undefined8 **ppuStack_88;
  undefined8 uStack_80;
  undefined8 *apuStack_78 [8];
  long lStack_38;
  int *piVar21;
  
  puVar19 = &uStack_90;
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar13 = param_6;
  plVar14 = param_6;
  FUN_109d2c034(&uStack_90);
  param_1[1] = ppuStack_88;
  *param_1 = uStack_90;
  uStack_90 = 0;
  ppuStack_88 = (undefined8 **)0x0;
  param_1[2] = uStack_80;
  ppuVar10 = apuStack_78;
  (*(code *)apuStack_78[0][2])(param_1 + 3,ppuVar10);
  lVar16 = param_6[1];
  lVar22 = *param_6;
  param_1[0xb] = param_6[1];
  param_1[10] = lVar22;
  if (lVar16 != 0) {
    plVar1 = (long *)(lVar16 + 8);
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar5) {
        *plVar1 = *plVar1 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  *(undefined1 *)((long)param_1 + 0x62) = 0;
  *(ushort *)(param_1 + 0xc) = param_5 | 0x100;
  param_1[0x10] = 0;
  param_1[0xf] = 0;
  param_1[0x12] = 0;
  param_1[0x11] = 0;
  param_1[0x14] = 0;
  param_1[0x13] = 0;
  param_1[0xd] = &UNK_1053a6a3c;
  param_1[0xe] = &PTR_DAT_110ae9180;
  param_1[0x18] = 0;
  param_1[0x17] = 0;
  param_1[0x1a] = 0;
  param_1[0x19] = 0;
  param_1[0x1c] = 0;
  param_1[0x1b] = 0;
  param_1[0x15] = &UNK_1053a6a3c;
  param_1[0x16] = &PTR_DAT_110ae9180;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  ppuVar7 = apuStack_78;
  (*(code *)*apuStack_78[0])();
  ppuVar8 = ppuStack_88;
  if (ppuStack_88 != (undefined8 **)0x0) {
    ppuVar2 = ppuStack_88 + 1;
    do {
      puVar18 = *ppuVar2;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(ppuVar2,0x10);
      if (bVar5) {
        *ppuVar2 = (undefined8 *)((long)puVar18 + -1);
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (puVar18 == (undefined8 *)0x0) {
      (*(code *)(*ppuStack_88)[2])(ppuStack_88);
      __ZNSt3__119__shared_weak_count14__release_weakEv();
      ppuVar7 = ppuVar8;
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return;
  }
  ___stack_chk_fail();
  __Unwind_Resume();
  pcStack_98 = FUN_109d2c034;
  lStack_100 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_a0 = &stack0xfffffffffffffff0;
  if ((long *)*plVar13 == (long *)0x0) {
    puVar18 = (undefined8 *)&UNK_10f5acd97;
    func_0x000105688514();
    uVar12 = (uint)plVar13;
    goto LAB_109d2c470;
  }
  (**(code **)(*(long *)*plVar13 + 0x10))(auStack_1d8);
  ppuStack_108 = (uint **)0x0;
  unaff_x24 = &puStack_120;
  func_0x0001094749d8(&puStack_270,ppuVar7 + 6,&puStack_120,0,0);
  if (ppuStack_108 == unaff_x24) {
    lVar16 = 0x20;
LAB_109d2c0cc:
    (**(code **)((long)*ppuStack_108 + lVar16))();
  }
  else if (ppuStack_108 != (uint **)0x0) {
    lVar16 = 0x28;
    goto LAB_109d2c0cc;
  }
  if ((char)puStack_270 == '\t') {
    auStack_1e8[0] = 0;
    uStack_1e0 = 0;
    uVar11 = 9;
  }
  else {
    unaff_x24 = &puStack_270;
    func_0x000109381b20(auStack_1e8,&puStack_270);
    uVar11 = (ulong)puStack_270 & 0xff;
  }
  ppuVar9 = &puStack_268;
  func_0x000109380ffc(ppuVar9,uVar11);
  if ((1 < *(int *)(ppuVar7 + 2)) && (ppuVar7[0x10] != ppuVar7[0x11])) {
    FUN_109cd2af4();
    unaff_x26 = (byte *)ppuVar7[0x10];
    unaff_x27 = (byte *)ppuVar7[0x11];
    do {
      if (unaff_x26 == unaff_x27) {
        func_0x000105688514(&UNK_10f5acd76);
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x109d2c1c4);
        (*pcVar6)();
      }
      FUN_109d20a38(&puStack_120,ppuVar10,*unaff_x26,auStack_1e8,auStack_1d8,
                    *(undefined1 *)(*plVar13 + 8));
      unaff_x28 = puStack_118;
      for (unaff_x25 = puStack_120; unaff_x25 != unaff_x28; unaff_x25 = unaff_x25 + 1) {
        uVar11 = (ulong)*unaff_x25;
        if (((*unaff_x25 & (*(uint *)(ppuVar9 + 8) ^ 0xffffffff)) == 0) &&
           (FUN_109cd2cac(uVar11,*unaff_x26), (uVar11 & 1) != 0)) {
          FUN_109d20f54(&puStack_270,ppuVar10,*unaff_x26,auStack_1e8,auStack_1d8,
                        *(undefined1 *)(*plVar13 + 8));
          unaff_x23 = auStack_2c8;
          FUN_109d2e780(auStack_2c8,ppuVar7);
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
                    (auStack_298,unaff_x26 + 0x38);
          puStack_2e8 = puStack_268;
          puStack_2f0 = puStack_270;
          puStack_2d8 = puStack_268;
          puStack_2e0 = puStack_270;
          uStack_2d0 = uStack_260;
          puStack_268 = (uint *)0x0;
          uStack_260 = 0;
          puStack_270 = (uint *)0x0;
          FUN_109d2d9a8(&puStack_280,auStack_2c8,unaff_x26 + 0x20,&puStack_2e0,ppuVar10,auStack_1e8,
                        param_4,auStack_1d8);
          if (puStack_2f0 != (uint *)0x0) {
            __ZdlPv();
          }
          if (cStack_281 < '\0') {
            __ZdlPv(auStack_298[0]);
          }
          puVar19 = (undefined8 *)auStack_2c8;
          puStack_128 = auStack_2b0;
          func_0x000109378cec(&puStack_128);
          puStack_128 = (undefined1 *)puVar19;
          func_0x000109378cec(&puStack_128);
          extraout_x8[1] = lStack_278;
          *extraout_x8 = (long)puStack_280;
          puStack_280 = (undefined1 *)0x0;
          lStack_278 = 0;
          uVar12 = (uint)*unaff_x26;
          FUN_109d2e644(extraout_x8 + 2,*ppuVar7,unaff_x26 + 8,unaff_x26 + 0x20);
          *(byte *)(extraout_x8 + 10) = *unaff_x26;
          unaff_x24 = ppuVar9;
          if (puStack_270 != (uint *)0x0) {
            puStack_268 = puStack_270;
            __ZdlPv();
          }
          goto LAB_109d2c3ac;
        }
      }
      if (puStack_120 != (uint *)0x0) {
        puStack_118 = puStack_120;
        __ZdlPv(puStack_120);
      }
      unaff_x26 = unaff_x26 + 0x50;
    } while( true );
  }
  FUN_109d20f54(&puStack_120,ppuVar10,*(undefined1 *)(ppuVar7 + 0xf),auStack_1e8,auStack_1d8,
                *(undefined1 *)(*plVar13 + 8));
  unaff_x23 = auStack_230;
  FUN_109d2e780(auStack_230,ppuVar7);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
            (auStack_200,ppuVar7 + 0x13);
  puStack_2e8 = puStack_118;
  puStack_2f0 = puStack_120;
  puStack_248 = puStack_118;
  puStack_250 = puStack_120;
  uStack_240 = uStack_110;
  puStack_118 = (uint *)0x0;
  uStack_110 = 0;
  puStack_120 = (uint *)0x0;
  FUN_109d2d9a8(&puStack_270,auStack_230,ppuVar7 + 3,&puStack_250,ppuVar10,auStack_1e8,param_4,
                auStack_1d8);
  if (puStack_2f0 != (uint *)0x0) {
    __ZdlPv();
  }
  if (cStack_1e9 < '\0') {
    __ZdlPv(auStack_200[0]);
  }
  puVar19 = (undefined8 *)auStack_230;
  puStack_280 = auStack_218;
  func_0x000109378cec(&puStack_280);
  puStack_280 = (undefined1 *)puVar19;
  func_0x000109378cec(&puStack_280);
  extraout_x8[1] = (long)puStack_268;
  *extraout_x8 = (long)puStack_270;
  puStack_270 = (uint *)0x0;
  puStack_268 = (uint *)0x0;
  uVar12 = (uint)*(byte *)(ppuVar7 + 0xf);
  FUN_109d2e644(extraout_x8 + 2,*ppuVar7,ppuVar7 + 0x16,ppuVar7 + 3);
  *(undefined1 *)(extraout_x8 + 10) = *(undefined1 *)(ppuVar7 + 0xf);
LAB_109d2c3ac:
  plVar14 = param_4;
  if (puStack_120 != (uint *)0x0) {
    puStack_118 = puStack_120;
    __ZdlPv();
    plVar14 = param_4;
  }
  puVar18 = &uStack_1e0;
  func_0x000109380ffc(puVar18,auStack_1e8[0]);
  if (cStack_129 < '\0') {
    __ZdlPv();
    puVar18 = puStack_140;
  }
  if (cStack_149 < '\0') {
    __ZdlPv();
    puVar18 = puStack_160;
  }
  if (cStack_161 < '\0') {
    __ZdlPv();
    puVar18 = puStack_178;
  }
  if (cStack_179 < '\0') {
    __ZdlPv();
    puVar18 = puStack_190;
  }
  if (cStack_191 < '\0') {
    __ZdlPv();
    puVar18 = puStack_1a8;
  }
  if (cStack_1a9 < '\0') {
    __ZdlPv();
    puVar18 = puStack_1c0;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_100) {
    return;
  }
LAB_109d2c470:
  ___stack_chk_fail();
  FUN_109d2dbe0(extraout_x8);
  FUN_109d2dbe0(&puStack_280);
  if (puStack_270 != (uint *)0x0) {
    puStack_268 = puStack_270;
    __ZdlPv();
  }
  if (puStack_120 != (uint *)0x0) {
    puStack_118 = puStack_120;
    __ZdlPv();
  }
  func_0x000109380ffc(&uStack_1e0,auStack_1e8[0]);
  FUN_109d2db24(auStack_1d8);
  __Unwind_Resume(puVar18);
  pcStack_2f8 = FUN_109d2c5a0;
  lStack_328 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_320 = (undefined1 *)puVar19;
  ppuStack_318 = ppuVar7;
  puStack_310 = puVar18;
  ppuStack_300 = &puStack_a0;
  FUN_109d2c034(&uStack_380);
  uVar3 = uVar12 | 0x10000;
  if (cStack_330 != '\x05') {
    uVar3 = uVar12;
  }
  extraout_x8_00[1] = ppuStack_378;
  *extraout_x8_00 = uStack_380;
  uStack_380 = 0;
  ppuStack_378 = (undefined8 **)0x0;
  extraout_x8_00[2] = uStack_370;
  ppuVar10 = apuStack_368;
  (*(code *)apuStack_368[0][2])(extraout_x8_00 + 3);
  lVar16 = plVar14[1];
  lVar22 = *plVar14;
  extraout_x8_00[0xb] = plVar14[1];
  extraout_x8_00[10] = lVar22;
  if (lVar16 != 0) {
    plVar13 = (long *)(lVar16 + 8);
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar13,0x10);
      if (bVar5) {
        *plVar13 = *plVar13 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  *(short *)(extraout_x8_00 + 0xc) = (short)uVar3;
  *(char *)((long)extraout_x8_00 + 0x62) = (char)(uVar3 >> 0x10);
  extraout_x8_00[0x10] = 0;
  extraout_x8_00[0xf] = 0;
  extraout_x8_00[0x12] = 0;
  extraout_x8_00[0x11] = 0;
  extraout_x8_00[0x14] = 0;
  extraout_x8_00[0x13] = 0;
  extraout_x8_00[0xd] = &UNK_1053a6a3c;
  extraout_x8_00[0xe] = &PTR_DAT_110ae9180;
  extraout_x8_00[0x18] = 0;
  extraout_x8_00[0x17] = 0;
  extraout_x8_00[0x1a] = 0;
  extraout_x8_00[0x19] = 0;
  extraout_x8_00[0x1c] = 0;
  extraout_x8_00[0x1b] = 0;
  extraout_x8_00[0x15] = &UNK_1053a6a3c;
  extraout_x8_00[0x16] = &PTR_DAT_110ae9180;
  extraout_x8_00[0x1d] = 0;
  extraout_x8_00[0x1e] = 0;
  ppuVar7 = apuStack_368;
  (*(code *)*apuStack_368[0])();
  ppuVar8 = ppuStack_378;
  if (ppuStack_378 != (undefined8 **)0x0) {
    ppuVar2 = ppuStack_378 + 1;
    do {
      puVar19 = *ppuVar2;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(ppuVar2,0x10);
      if (bVar5) {
        *ppuVar2 = (undefined8 *)((long)puVar19 + -1);
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (puVar19 == (undefined8 *)0x0) {
      (*(code *)(*ppuStack_378)[2])(ppuStack_378);
      ppuVar7 = ppuVar8;
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_328) {
    return;
  }
  ___stack_chk_fail();
  __Unwind_Resume();
  puStack_3e0 = unaff_x28;
  pbStack_3d8 = unaff_x27;
  pbStack_3d0 = unaff_x26;
  puStack_3c8 = unaff_x25;
  ppuStack_3c0 = unaff_x24;
  puStack_3b8 = unaff_x23;
  puStack_3b0 = (undefined1 *)&uStack_380;
  uStack_3a8 = (ulong)uVar3;
  plStack_3a0 = plVar14;
  ppuStack_398 = ppuVar8;
  pppuStack_390 = &ppuStack_300;
  uStack_388 = 0x109d2c6f8;
  func_0x00010925b8c4(&piStack_400,((long)ppuVar10[1] - (long)*ppuVar10 >> 3) * 0x2e8ba2e8ba2e8ba3);
  if (piStack_400 != piStack_3f8) {
    iVar15 = 0;
    piVar20 = piStack_400;
    do {
      piVar21 = piVar20 + 1;
      *piVar20 = iVar15;
      iVar15 = iVar15 + 1;
      piVar20 = piVar21;
    } while (piVar21 != piStack_3f8);
  }
  lVar16 = 0;
  if (piStack_3f8 != piStack_400) {
    lVar16 = LZCOUNT((long)piStack_3f8 - (long)piStack_400 >> 2) * -2 + 0x7e;
  }
  ppuStack_3e8 = ppuVar10;
  func_0x000109d2c8a0(piStack_400,piStack_3f8,&ppuStack_3e8,lVar16,1);
  if (piStack_400 != piStack_3f8) {
    puVar19 = *ppuVar7;
    piVar20 = piStack_400;
    do {
      puVar18 = *ppuVar10 + (long)*piVar20 * 0xb;
      lVar16 = 0x1137e1dc0;
      func_0x000107c31944(0x1137e1dc0,puVar18);
      puVar19 = (undefined8 *)
                ((long)puVar19 * 0x40 + 0x9e3779b9 + ((ulong)puVar19 >> 2) + lVar16 ^ (ulong)puVar19
                );
      *ppuVar7 = puVar19;
      uVar11 = (ulong)*(uint *)((long)puVar18 + 0x1c);
      uVar17 = (ulong)*(uint *)((long)puVar18 + 0x24);
      if (*(uint *)(puVar18 + 3) == 0 && *(uint *)((long)puVar18 + 0x1c) == 0) {
        if (uVar17 != 0) {
LAB_109d2c808:
          uVar11 = 0;
          goto LAB_109d2c80c;
        }
        if (*(int *)(puVar18 + 4) != 0) {
          uVar17 = 0;
          goto LAB_109d2c808;
        }
      }
      else {
LAB_109d2c80c:
        uVar11 = (long)puVar19 * 0x40 + 0x9e3779b9 + ((ulong)puVar19 >> 2) + uVar11 ^ (ulong)puVar19
        ;
        uVar11 = (ulong)*(uint *)(puVar18 + 3) + 0x9e3779b9 + uVar11 * 0x40 + (uVar11 >> 2) ^ uVar11
        ;
        puVar19 = (undefined8 *)
                  ((ulong)*(uint *)(puVar18 + 4) + 0x9e3779b9 + uVar11 * 0x40 + (uVar11 >> 2) ^
                  uVar11);
        *ppuVar7 = puVar19;
        if (1 < uVar17) {
          puVar19 = (undefined8 *)
                    (uVar17 + 0x9e3779b9 + (long)puVar19 * 0x40 + ((ulong)puVar19 >> 2) ^
                    (ulong)puVar19);
          *ppuVar7 = puVar19;
        }
      }
      piVar20 = piVar20 + 1;
    } while (piVar20 != piStack_3f8);
  }
  if (piStack_400 != (int *)0x0) {
    __ZdlPv(piStack_400);
  }
  return;
}



/* Entry: 109d2c034; end: 109d2c59f;  */

void FUN_109d2c034(long *param_1,undefined8 *param_2,undefined8 param_3,undefined8 *param_4,
                  long *param_5,undefined8 *param_6)

{
  long *plVar1;
  undefined8 **ppuVar2;
  uint uVar3;
  char cVar4;
  bool bVar5;
  undefined8 **ppuVar6;
  uint *puVar7;
  code *pcVar8;
  uint **ppuVar9;
  undefined8 **ppuVar10;
  ulong uVar11;
  undefined8 **ppuVar12;
  uint uVar13;
  int iVar14;
  long lVar15;
  undefined8 *extraout_x8;
  ulong uVar16;
  undefined8 *puVar17;
  int *piVar18;
  undefined1 *unaff_x22;
  undefined1 *unaff_x23;
  undefined8 *puVar20;
  uint **unaff_x24;
  uint *unaff_x25;
  byte *unaff_x26;
  byte *unaff_x27;
  undefined8 uVar21;
  int *piStack_370;
  int *piStack_368;
  undefined8 **appuStack_358 [2];
  byte *pbStack_348;
  byte *pbStack_340;
  uint *puStack_338;
  uint **ppuStack_330;
  undefined1 *puStack_328;
  undefined1 *puStack_320;
  ulong uStack_318;
  undefined8 *puStack_310;
  undefined8 **ppuStack_308;
  undefined1 **ppuStack_300;
  undefined8 uStack_2f8;
  undefined8 uStack_2f0;
  undefined8 **ppuStack_2e8;
  undefined8 uStack_2e0;
  undefined8 *apuStack_2d8 [7];
  char cStack_2a0;
  long lStack_298;
  undefined1 *puStack_290;
  undefined8 *puStack_288;
  undefined8 *puStack_280;
  long *plStack_278;
  undefined1 *puStack_270;
  code *pcStack_268;
  uint *puStack_260;
  uint *puStack_258;
  uint *puStack_250;
  uint *puStack_248;
  undefined8 uStack_240;
  undefined1 auStack_238 [24];
  undefined1 auStack_220 [24];
  undefined8 auStack_208 [2];
  char cStack_1f1;
  undefined1 *puStack_1f0;
  long lStack_1e8;
  uint *puStack_1e0;
  uint *puStack_1d8;
  undefined8 uStack_1d0;
  uint *puStack_1c0;
  uint *puStack_1b8;
  undefined8 uStack_1b0;
  undefined1 auStack_1a0 [24];
  undefined1 auStack_188 [24];
  undefined8 auStack_170 [2];
  char cStack_159;
  undefined1 auStack_158 [8];
  undefined8 uStack_150;
  undefined1 auStack_148 [24];
  undefined8 *puStack_130;
  char cStack_119;
  undefined8 *puStack_118;
  char cStack_101;
  undefined8 *puStack_100;
  char cStack_e9;
  undefined8 *puStack_e8;
  char cStack_d1;
  undefined8 *puStack_d0;
  char cStack_b9;
  undefined8 *puStack_b0;
  char cStack_99;
  undefined1 *puStack_98;
  uint *puStack_90;
  uint *puStack_88;
  undefined8 uStack_80;
  uint **ppuStack_78;
  long lStack_70;
  int *piVar19;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if ((long *)*param_5 == (long *)0x0) {
    puVar17 = (undefined8 *)&UNK_10f5acd97;
    func_0x000105688514();
    uVar13 = (uint)param_5;
    goto LAB_109d2c470;
  }
  (**(code **)(*(long *)*param_5 + 0x10))(auStack_148);
  ppuStack_78 = (uint **)0x0;
  unaff_x24 = &puStack_90;
  func_0x0001094749d8(&puStack_1e0,param_2 + 6,&puStack_90,0,0);
  if (ppuStack_78 == unaff_x24) {
    lVar15 = 0x20;
LAB_109d2c0cc:
    (**(code **)((long)*ppuStack_78 + lVar15))();
  }
  else if (ppuStack_78 != (uint **)0x0) {
    lVar15 = 0x28;
    goto LAB_109d2c0cc;
  }
  if ((char)puStack_1e0 == '\t') {
    auStack_158[0] = 0;
    uStack_150 = 0;
    uVar11 = 9;
  }
  else {
    unaff_x24 = &puStack_1e0;
    func_0x000109381b20(auStack_158,&puStack_1e0);
    uVar11 = (ulong)puStack_1e0 & 0xff;
  }
  ppuVar9 = &puStack_1d8;
  func_0x000109380ffc(ppuVar9,uVar11);
  if ((1 < *(int *)(param_2 + 2)) && (param_2[0x10] != param_2[0x11])) {
    FUN_109cd2af4();
    unaff_x26 = (byte *)param_2[0x10];
    unaff_x27 = (byte *)param_2[0x11];
    do {
      if (unaff_x26 == unaff_x27) {
        func_0x000105688514(&UNK_10f5acd76);
                    /* WARNING: Does not return */
        pcVar8 = (code *)SoftwareBreakpoint(1,0x109d2c1c4);
        (*pcVar8)();
      }
      FUN_109d20a38(&puStack_90,param_3,*unaff_x26,auStack_158,auStack_148,
                    *(undefined1 *)(*param_5 + 8));
      puVar7 = puStack_88;
      for (unaff_x25 = puStack_90; unaff_x25 != puVar7; unaff_x25 = unaff_x25 + 1) {
        uVar11 = (ulong)*unaff_x25;
        if (((*unaff_x25 & (*(uint *)(ppuVar9 + 8) ^ 0xffffffff)) == 0) &&
           (FUN_109cd2cac(uVar11,*unaff_x26), (uVar11 & 1) != 0)) {
          FUN_109d20f54(&puStack_1e0,param_3,*unaff_x26,auStack_158,auStack_148,
                        *(undefined1 *)(*param_5 + 8));
          unaff_x23 = auStack_238;
          FUN_109d2e780(auStack_238,param_2);
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
                    (auStack_208,unaff_x26 + 0x38);
          puStack_258 = puStack_1d8;
          puStack_260 = puStack_1e0;
          puStack_248 = puStack_1d8;
          puStack_250 = puStack_1e0;
          uStack_240 = uStack_1d0;
          puStack_1d8 = (uint *)0x0;
          uStack_1d0 = 0;
          puStack_1e0 = (uint *)0x0;
          FUN_109d2d9a8(&puStack_1f0,auStack_238,unaff_x26 + 0x20,&puStack_250,param_3,auStack_158,
                        param_4,auStack_148);
          if (puStack_260 != (uint *)0x0) {
            __ZdlPv();
          }
          if (cStack_1f1 < '\0') {
            __ZdlPv(auStack_208[0]);
          }
          unaff_x22 = auStack_238;
          puStack_98 = auStack_220;
          func_0x000109378cec(&puStack_98);
          puStack_98 = unaff_x22;
          func_0x000109378cec(&puStack_98);
          param_1[1] = lStack_1e8;
          *param_1 = (long)puStack_1f0;
          puStack_1f0 = (undefined1 *)0x0;
          lStack_1e8 = 0;
          uVar13 = (uint)*unaff_x26;
          FUN_109d2e644(param_1 + 2,*param_2,unaff_x26 + 8,unaff_x26 + 0x20);
          *(byte *)(param_1 + 10) = *unaff_x26;
          unaff_x24 = ppuVar9;
          if (puStack_1e0 != (uint *)0x0) {
            puStack_1d8 = puStack_1e0;
            __ZdlPv();
          }
          goto LAB_109d2c3ac;
        }
      }
      if (puStack_90 != (uint *)0x0) {
        puStack_88 = puStack_90;
        __ZdlPv(puStack_90);
      }
      unaff_x26 = unaff_x26 + 0x50;
    } while( true );
  }
  FUN_109d20f54(&puStack_90,param_3,*(undefined1 *)(param_2 + 0xf),auStack_158,auStack_148,
                *(undefined1 *)(*param_5 + 8));
  unaff_x23 = auStack_1a0;
  FUN_109d2e780(auStack_1a0,param_2);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
            (auStack_170,param_2 + 0x13);
  puStack_258 = puStack_88;
  puStack_260 = puStack_90;
  puStack_1b8 = puStack_88;
  puStack_1c0 = puStack_90;
  uStack_1b0 = uStack_80;
  puStack_88 = (uint *)0x0;
  uStack_80 = 0;
  puStack_90 = (uint *)0x0;
  FUN_109d2d9a8(&puStack_1e0,auStack_1a0,param_2 + 3,&puStack_1c0,param_3,auStack_158,param_4,
                auStack_148);
  if (puStack_260 != (uint *)0x0) {
    __ZdlPv();
  }
  if (cStack_159 < '\0') {
    __ZdlPv(auStack_170[0]);
  }
  unaff_x22 = auStack_1a0;
  puStack_1f0 = auStack_188;
  func_0x000109378cec(&puStack_1f0);
  puStack_1f0 = unaff_x22;
  func_0x000109378cec(&puStack_1f0);
  param_1[1] = (long)puStack_1d8;
  *param_1 = (long)puStack_1e0;
  puStack_1e0 = (uint *)0x0;
  puStack_1d8 = (uint *)0x0;
  uVar13 = (uint)*(byte *)(param_2 + 0xf);
  FUN_109d2e644(param_1 + 2,*param_2,param_2 + 0x16,param_2 + 3);
  *(undefined1 *)(param_1 + 10) = *(undefined1 *)(param_2 + 0xf);
LAB_109d2c3ac:
  param_6 = param_4;
  if (puStack_90 != (uint *)0x0) {
    puStack_88 = puStack_90;
    __ZdlPv();
    param_6 = param_4;
  }
  puVar17 = &uStack_150;
  func_0x000109380ffc(puVar17,auStack_158[0]);
  if (cStack_99 < '\0') {
    __ZdlPv();
    puVar17 = puStack_b0;
  }
  if (cStack_b9 < '\0') {
    __ZdlPv();
    puVar17 = puStack_d0;
  }
  if (cStack_d1 < '\0') {
    __ZdlPv();
    puVar17 = puStack_e8;
  }
  if (cStack_e9 < '\0') {
    __ZdlPv();
    puVar17 = puStack_100;
  }
  if (cStack_101 < '\0') {
    __ZdlPv();
    puVar17 = puStack_118;
  }
  if (cStack_119 < '\0') {
    __ZdlPv();
    puVar17 = puStack_130;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
LAB_109d2c470:
  ___stack_chk_fail();
  FUN_109d2dbe0(param_1);
  FUN_109d2dbe0(&puStack_1f0);
  if (puStack_1e0 != (uint *)0x0) {
    puStack_1d8 = puStack_1e0;
    __ZdlPv();
  }
  if (puStack_90 != (uint *)0x0) {
    puStack_88 = puStack_90;
    __ZdlPv();
  }
  func_0x000109380ffc(&uStack_150,auStack_158[0]);
  FUN_109d2db24(auStack_148);
  __Unwind_Resume(puVar17);
  pcStack_268 = FUN_109d2c5a0;
  lStack_298 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_290 = unaff_x22;
  puStack_288 = param_2;
  puStack_280 = puVar17;
  plStack_278 = param_1;
  puStack_270 = &stack0xfffffffffffffff0;
  FUN_109d2c034(&uStack_2f0);
  uVar3 = uVar13 | 0x10000;
  if (cStack_2a0 != '\x05') {
    uVar3 = uVar13;
  }
  extraout_x8[1] = ppuStack_2e8;
  *extraout_x8 = uStack_2f0;
  uStack_2f0 = 0;
  ppuStack_2e8 = (undefined8 **)0x0;
  extraout_x8[2] = uStack_2e0;
  ppuVar12 = apuStack_2d8;
  (*(code *)apuStack_2d8[0][2])(extraout_x8 + 3);
  lVar15 = param_6[1];
  uVar21 = *param_6;
  extraout_x8[0xb] = param_6[1];
  extraout_x8[10] = uVar21;
  if (lVar15 != 0) {
    plVar1 = (long *)(lVar15 + 8);
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar5) {
        *plVar1 = *plVar1 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  *(short *)(extraout_x8 + 0xc) = (short)uVar3;
  *(char *)((long)extraout_x8 + 0x62) = (char)(uVar3 >> 0x10);
  extraout_x8[0x10] = 0;
  extraout_x8[0xf] = 0;
  extraout_x8[0x12] = 0;
  extraout_x8[0x11] = 0;
  extraout_x8[0x14] = 0;
  extraout_x8[0x13] = 0;
  extraout_x8[0xd] = &UNK_1053a6a3c;
  extraout_x8[0xe] = &PTR_DAT_110ae9180;
  extraout_x8[0x18] = 0;
  extraout_x8[0x17] = 0;
  extraout_x8[0x1a] = 0;
  extraout_x8[0x19] = 0;
  extraout_x8[0x1c] = 0;
  extraout_x8[0x1b] = 0;
  extraout_x8[0x15] = &UNK_1053a6a3c;
  extraout_x8[0x16] = &PTR_DAT_110ae9180;
  extraout_x8[0x1d] = 0;
  extraout_x8[0x1e] = 0;
  ppuVar10 = apuStack_2d8;
  (*(code *)*apuStack_2d8[0])();
  ppuVar6 = ppuStack_2e8;
  if (ppuStack_2e8 != (undefined8 **)0x0) {
    ppuVar2 = ppuStack_2e8 + 1;
    do {
      puVar17 = *ppuVar2;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(ppuVar2,0x10);
      if (bVar5) {
        *ppuVar2 = (undefined8 *)((long)puVar17 + -1);
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (puVar17 == (undefined8 *)0x0) {
      (*(code *)(*ppuStack_2e8)[2])(ppuStack_2e8);
      ppuVar10 = ppuVar6;
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_298) {
    return;
  }
  ___stack_chk_fail();
  __Unwind_Resume();
  ppuStack_308 = ppuVar6;
  uStack_2f8 = 0x109d2c6f8;
  pbStack_348 = unaff_x27;
  pbStack_340 = unaff_x26;
  puStack_338 = unaff_x25;
  ppuStack_330 = unaff_x24;
  puStack_328 = unaff_x23;
  puStack_320 = (undefined1 *)&uStack_2f0;
  uStack_318 = (ulong)uVar3;
  puStack_310 = param_6;
  ppuStack_300 = &puStack_270;
  func_0x00010925b8c4(&piStack_370,((long)ppuVar12[1] - (long)*ppuVar12 >> 3) * 0x2e8ba2e8ba2e8ba3);
  if (piStack_370 != piStack_368) {
    iVar14 = 0;
    piVar18 = piStack_370;
    do {
      piVar19 = piVar18 + 1;
      *piVar18 = iVar14;
      iVar14 = iVar14 + 1;
      piVar18 = piVar19;
    } while (piVar19 != piStack_368);
  }
  lVar15 = 0;
  if (piStack_368 != piStack_370) {
    lVar15 = LZCOUNT((long)piStack_368 - (long)piStack_370 >> 2) * -2 + 0x7e;
  }
  appuStack_358[0] = ppuVar12;
  func_0x000109d2c8a0(piStack_370,piStack_368,appuStack_358,lVar15,1);
  if (piStack_370 != piStack_368) {
    puVar17 = *ppuVar10;
    piVar18 = piStack_370;
    do {
      puVar20 = *ppuVar12 + (long)*piVar18 * 0xb;
      lVar15 = 0x1137e1dc0;
      func_0x000107c31944(0x1137e1dc0,puVar20);
      puVar17 = (undefined8 *)
                ((long)puVar17 * 0x40 + 0x9e3779b9 + ((ulong)puVar17 >> 2) + lVar15 ^ (ulong)puVar17
                );
      *ppuVar10 = puVar17;
      uVar11 = (ulong)*(uint *)((long)puVar20 + 0x1c);
      uVar16 = (ulong)*(uint *)((long)puVar20 + 0x24);
      if (*(uint *)(puVar20 + 3) == 0 && *(uint *)((long)puVar20 + 0x1c) == 0) {
        if (uVar16 != 0) {
LAB_109d2c808:
          uVar11 = 0;
          goto LAB_109d2c80c;
        }
        if (*(int *)(puVar20 + 4) != 0) {
          uVar16 = 0;
          goto LAB_109d2c808;
        }
      }
      else {
LAB_109d2c80c:
        uVar11 = (long)puVar17 * 0x40 + 0x9e3779b9 + ((ulong)puVar17 >> 2) + uVar11 ^ (ulong)puVar17
        ;
        uVar11 = (ulong)*(uint *)(puVar20 + 3) + 0x9e3779b9 + uVar11 * 0x40 + (uVar11 >> 2) ^ uVar11
        ;
        puVar17 = (undefined8 *)
                  ((ulong)*(uint *)(puVar20 + 4) + 0x9e3779b9 + uVar11 * 0x40 + (uVar11 >> 2) ^
                  uVar11);
        *ppuVar10 = puVar17;
        if (1 < uVar16) {
          puVar17 = (undefined8 *)
                    (uVar16 + 0x9e3779b9 + (long)puVar17 * 0x40 + ((ulong)puVar17 >> 2) ^
                    (ulong)puVar17);
          *ppuVar10 = puVar17;
        }
      }
      piVar18 = piVar18 + 1;
    } while (piVar18 != piStack_368);
  }
  if (piStack_370 != (int *)0x0) {
    __ZdlPv(piStack_370);
  }
  return;
}



/* Entry: 109d2c5a0; end: 109d2c6f7;  */

void FUN_109d2c5a0(undefined8 *param_1)

{
  long *plVar1;
  undefined8 **ppuVar2;
  uint uVar3;
  char cVar4;
  bool bVar5;
  undefined8 **ppuVar6;
  undefined8 **ppuVar7;
  undefined8 **ppuVar8;
  uint in_w3;
  undefined8 *in_x4;
  int iVar9;
  long lVar10;
  ulong uVar11;
  undefined8 *puVar12;
  int *piVar13;
  ulong uVar15;
  undefined8 *puVar16;
  undefined8 uVar17;
  int *piStack_110;
  int *piStack_108;
  undefined8 **ppuStack_f8;
  undefined8 uStack_90;
  undefined8 **ppuStack_88;
  undefined8 uStack_80;
  undefined8 *apuStack_78 [7];
  char cStack_40;
  long lStack_38;
  int *piVar14;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  FUN_109d2c034(&uStack_90);
  uVar3 = in_w3 | 0x10000;
  if (cStack_40 != '\x05') {
    uVar3 = in_w3;
  }
  param_1[1] = ppuStack_88;
  *param_1 = uStack_90;
  uStack_90 = 0;
  ppuStack_88 = (undefined8 **)0x0;
  param_1[2] = uStack_80;
  ppuVar8 = apuStack_78;
  (*(code *)apuStack_78[0][2])(param_1 + 3);
  lVar10 = in_x4[1];
  uVar17 = *in_x4;
  param_1[0xb] = in_x4[1];
  param_1[10] = uVar17;
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
  *(short *)(param_1 + 0xc) = (short)uVar3;
  *(char *)((long)param_1 + 0x62) = (char)(uVar3 >> 0x10);
  param_1[0x10] = 0;
  param_1[0xf] = 0;
  param_1[0x12] = 0;
  param_1[0x11] = 0;
  param_1[0x14] = 0;
  param_1[0x13] = 0;
  param_1[0xd] = &UNK_1053a6a3c;
  param_1[0xe] = &PTR_DAT_110ae9180;
  param_1[0x18] = 0;
  param_1[0x17] = 0;
  param_1[0x1a] = 0;
  param_1[0x19] = 0;
  param_1[0x1c] = 0;
  param_1[0x1b] = 0;
  param_1[0x15] = &UNK_1053a6a3c;
  param_1[0x16] = &PTR_DAT_110ae9180;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  ppuVar6 = apuStack_78;
  (*(code *)*apuStack_78[0])();
  ppuVar7 = ppuStack_88;
  if (ppuStack_88 != (undefined8 **)0x0) {
    ppuVar2 = ppuStack_88 + 1;
    do {
      puVar12 = *ppuVar2;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(ppuVar2,0x10);
      if (bVar5) {
        *ppuVar2 = (undefined8 *)((long)puVar12 + -1);
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (puVar12 == (undefined8 *)0x0) {
      (*(code *)(*ppuStack_88)[2])(ppuStack_88);
      __ZNSt3__119__shared_weak_count14__release_weakEv();
      ppuVar6 = ppuVar7;
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return;
  }
  ___stack_chk_fail();
  __Unwind_Resume();
  func_0x00010925b8c4(&piStack_110,((long)ppuVar8[1] - (long)*ppuVar8 >> 3) * 0x2e8ba2e8ba2e8ba3);
  if (piStack_110 != piStack_108) {
    iVar9 = 0;
    piVar13 = piStack_110;
    do {
      piVar14 = piVar13 + 1;
      *piVar13 = iVar9;
      iVar9 = iVar9 + 1;
      piVar13 = piVar14;
    } while (piVar14 != piStack_108);
  }
  lVar10 = 0;
  if (piStack_108 != piStack_110) {
    lVar10 = LZCOUNT((long)piStack_108 - (long)piStack_110 >> 2) * -2 + 0x7e;
  }
  ppuStack_f8 = ppuVar8;
  func_0x000109d2c8a0(piStack_110,piStack_108,&ppuStack_f8,lVar10,1);
  if (piStack_110 != piStack_108) {
    puVar12 = *ppuVar6;
    piVar13 = piStack_110;
    do {
      puVar16 = *ppuVar8 + (long)*piVar13 * 0xb;
      lVar10 = 0x1137e1dc0;
      func_0x000107c31944(0x1137e1dc0,puVar16);
      puVar12 = (undefined8 *)
                ((long)puVar12 * 0x40 + 0x9e3779b9 + ((ulong)puVar12 >> 2) + lVar10 ^ (ulong)puVar12
                );
      *ppuVar6 = puVar12;
      uVar15 = (ulong)*(uint *)((long)puVar16 + 0x1c);
      uVar11 = (ulong)*(uint *)((long)puVar16 + 0x24);
      if (*(uint *)(puVar16 + 3) == 0 && *(uint *)((long)puVar16 + 0x1c) == 0) {
        if (uVar11 != 0) {
LAB_109d2c808:
          uVar15 = 0;
          goto LAB_109d2c80c;
        }
        if (*(int *)(puVar16 + 4) != 0) {
          uVar11 = 0;
          goto LAB_109d2c808;
        }
      }
      else {
LAB_109d2c80c:
        uVar15 = (long)puVar12 * 0x40 + 0x9e3779b9 + ((ulong)puVar12 >> 2) + uVar15 ^ (ulong)puVar12
        ;
        uVar15 = (ulong)*(uint *)(puVar16 + 3) + 0x9e3779b9 + uVar15 * 0x40 + (uVar15 >> 2) ^ uVar15
        ;
        puVar12 = (undefined8 *)
                  ((ulong)*(uint *)(puVar16 + 4) + 0x9e3779b9 + uVar15 * 0x40 + (uVar15 >> 2) ^
                  uVar15);
        *ppuVar6 = puVar12;
        if (1 < uVar11) {
          puVar12 = (undefined8 *)
                    (uVar11 + 0x9e3779b9 + (long)puVar12 * 0x40 + ((ulong)puVar12 >> 2) ^
                    (ulong)puVar12);
          *ppuVar6 = puVar12;
        }
      }
      piVar13 = piVar13 + 1;
    } while (piVar13 != piStack_108);
  }
  if (piStack_110 != (int *)0x0) {
    __ZdlPv(piStack_110);
  }
  return;
}



/* Entry: 109d2c6f8; end: 109d2d183;  */

void FUN_109d2c6f8(ulong *param_1,long *param_2)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  int *piVar4;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  int *piStack_80;
  int *piStack_78;
  long *plStack_68;
  int *piVar5;
  
  func_0x00010925b8c4(&piStack_80,(param_2[1] - *param_2 >> 3) * 0x2e8ba2e8ba2e8ba3);
  if (piStack_80 != piStack_78) {
    iVar2 = 0;
    piVar4 = piStack_80;
    do {
      piVar5 = piVar4 + 1;
      *piVar4 = iVar2;
      iVar2 = iVar2 + 1;
      piVar4 = piVar5;
    } while (piVar5 != piStack_78);
  }
  lVar1 = 0;
  if (piStack_78 != piStack_80) {
    lVar1 = LZCOUNT((long)piStack_78 - (long)piStack_80 >> 2) * -2 + 0x7e;
  }
  plStack_68 = param_2;
  func_0x000109d2c8a0(piStack_80,piStack_78,&plStack_68,lVar1,1);
  if (piStack_80 != piStack_78) {
    uVar8 = *param_1;
    piVar4 = piStack_80;
    do {
      lVar7 = *param_2 + (long)*piVar4 * 0x58;
      lVar1 = 0x1137e1dc0;
      func_0x000107c31944(0x1137e1dc0,lVar7);
      uVar8 = uVar8 * 0x40 + 0x9e3779b9 + (uVar8 >> 2) + lVar1 ^ uVar8;
      *param_1 = uVar8;
      uVar6 = (ulong)*(uint *)(lVar7 + 0x1c);
      uVar3 = (ulong)*(uint *)(lVar7 + 0x24);
      if (*(uint *)(lVar7 + 0x18) == 0 && *(uint *)(lVar7 + 0x1c) == 0) {
        if (uVar3 != 0) {
LAB_109d2c808:
          uVar6 = 0;
          goto LAB_109d2c80c;
        }
        if (*(int *)(lVar7 + 0x20) != 0) {
          uVar3 = 0;
          goto LAB_109d2c808;
        }
      }
      else {
LAB_109d2c80c:
        uVar8 = uVar8 * 0x40 + 0x9e3779b9 + (uVar8 >> 2) + uVar6 ^ uVar8;
        uVar8 = (ulong)*(uint *)(lVar7 + 0x18) + 0x9e3779b9 + uVar8 * 0x40 + (uVar8 >> 2) ^ uVar8;
        uVar8 = (ulong)*(uint *)(lVar7 + 0x20) + 0x9e3779b9 + uVar8 * 0x40 + (uVar8 >> 2) ^ uVar8;
        *param_1 = uVar8;
        if (1 < uVar3) {
          uVar8 = uVar3 + 0x9e3779b9 + uVar8 * 0x40 + (uVar8 >> 2) ^ uVar8;
          *param_1 = uVar8;
        }
      }
      piVar4 = piVar4 + 1;
    } while (piVar4 != piStack_78);
  }
  if (piStack_80 != (int *)0x0) {
    __ZdlPv(piStack_80);
  }
  return;
}



/* Entry: 109d2d184; end: 109d2d457;  */

void FUN_109d2d184(int *param_1,int *param_2,int *param_3,undefined8 *param_4)

{
  int iVar1;
  long lVar2;
  long lVar3;
  
  lVar2 = *(long *)*param_4 + (long)*param_2 * 0x58;
  func_0x000107c2abd4(lVar2,*(long *)*param_4 + (long)*param_1 * 0x58);
  lVar3 = *(long *)*param_4 + (long)*param_3 * 0x58;
  func_0x000107c2abd4(lVar3,*(long *)*param_4 + (long)*param_2 * 0x58);
  if (((uint)lVar2 >> 7 & 1) == 0) {
    if ((char)lVar3 < '\0') {
      iVar1 = *param_2;
      *param_2 = *param_3;
      *param_3 = iVar1;
      lVar2 = *(long *)*param_4 + (long)*param_2 * 0x58;
      func_0x000107c2abd4(lVar2,*(long *)*param_4 + (long)*param_1 * 0x58);
      if (((uint)lVar2 >> 7 & 1) != 0) {
        iVar1 = *param_1;
        *param_1 = *param_2;
        *param_2 = iVar1;
      }
    }
  }
  else {
    iVar1 = *param_1;
    if ((char)lVar3 < '\0') {
      *param_1 = *param_3;
      *param_3 = iVar1;
    }
    else {
      *param_1 = *param_2;
      *param_2 = iVar1;
      lVar2 = *(long *)*param_4 + (long)*param_3 * 0x58;
      func_0x000107c2abd4(lVar2,*(long *)*param_4 + (long)iVar1 * 0x58);
      if (((uint)lVar2 >> 7 & 1) != 0) {
        iVar1 = *param_2;
        *param_2 = *param_3;
        *param_3 = iVar1;
      }
    }
  }
  return;
}



/* Entry: 109d2d458; end: 109d2d6b7;  */

bool FUN_109d2d458(int *param_1,int *param_2,undefined8 *param_3)

{
  int *piVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  int *piVar7;
  int *piVar8;
  int iVar9;
  long lVar10;
  undefined8 uVar11;
  
  uVar6 = (long)param_2 - (long)param_1 >> 2;
  if ((long)uVar6 < 3) {
    if (uVar6 < 2) {
      return true;
    }
    if (uVar6 == 2) {
      lVar3 = *(long *)*param_3 + (long)param_2[-1] * 0x58;
      func_0x000107c2abd4(lVar3,*(long *)*param_3 + (long)*param_1 * 0x58);
      if (((uint)lVar3 >> 7 & 1) == 0) {
        return true;
      }
      iVar9 = *param_1;
      *param_1 = param_2[-1];
      param_2[-1] = iVar9;
      return true;
    }
  }
  else {
    if (uVar6 == 3) {
      FUN_109d2d184(param_1,param_1 + 1,param_2 + -1,param_3);
      return true;
    }
    if (uVar6 == 4) {
      FUN_109d2d184(param_1,param_1 + 1,param_1 + 2,param_3);
      lVar3 = *(long *)*param_3 + (long)param_2[-1] * 0x58;
      func_0x000107c2abd4(lVar3,*(long *)*param_3 + (long)param_1[2] * 0x58);
      if (((uint)lVar3 >> 7 & 1) == 0) {
        return true;
      }
      iVar9 = param_1[2];
      param_1[2] = param_2[-1];
      param_2[-1] = iVar9;
      lVar3 = *(long *)*param_3 + (long)param_1[2] * 0x58;
      func_0x000107c2abd4(lVar3,*(long *)*param_3 + (long)param_1[1] * 0x58);
      if (((uint)lVar3 >> 7 & 1) == 0) {
        return true;
      }
      iVar9 = param_1[1];
      iVar2 = param_1[2];
      param_1[1] = iVar2;
      param_1[2] = iVar9;
      lVar3 = *(long *)*param_3 + (long)iVar2 * 0x58;
      func_0x000107c2abd4(lVar3,*(long *)*param_3 + (long)*param_1 * 0x58);
      if (((uint)lVar3 >> 7 & 1) == 0) {
        return true;
      }
      uVar11 = NEON_rev64(*(undefined8 *)param_1,4);
      *(undefined8 *)param_1 = uVar11;
      return true;
    }
    if (uVar6 == 5) {
      func_0x000109d2d2a4(param_1,param_1 + 1,param_1 + 2,param_1 + 3,param_2 + -1,param_3);
      return true;
    }
  }
  FUN_109d2d184(param_1,param_1 + 1,param_1 + 2,param_3);
  if (param_1 + 3 != param_2) {
    lVar3 = 0;
    iVar9 = 0;
    piVar7 = param_1 + 2;
    piVar8 = param_1 + 3;
    do {
      lVar4 = *(long *)*param_3 + (long)*piVar8 * 0x58;
      func_0x000107c2abd4(lVar4,*(long *)*param_3 + (long)*piVar7 * 0x58);
      if (((uint)lVar4 >> 7 & 1) != 0) {
        iVar2 = *piVar8;
        lVar4 = lVar3;
        do {
          lVar10 = lVar4;
          *(undefined4 *)((long)param_1 + lVar10 + 0xc) =
               *(undefined4 *)((long)param_1 + lVar10 + 8);
          piVar7 = param_1;
          if (lVar10 == -8) goto LAB_109d2d5c0;
          lVar5 = *(long *)*param_3 + (long)iVar2 * 0x58;
          func_0x000107c2abd4(lVar5,*(long *)*param_3 +
                                    (long)*(int *)((long)param_1 + lVar10 + 4) * 0x58);
          lVar4 = lVar10 + -4;
        } while (((uint)lVar5 >> 7 & 1) != 0);
        piVar7 = (int *)((long)param_1 + lVar10 + 8);
LAB_109d2d5c0:
        *piVar7 = iVar2;
        iVar9 = iVar9 + 1;
        if (iVar9 == 8) {
          return piVar8 + 1 == param_2;
        }
      }
      piVar1 = piVar8 + 1;
      lVar3 = lVar3 + 4;
      piVar7 = piVar8;
      piVar8 = piVar1;
    } while (piVar1 != param_2);
  }
  return true;
}



/* Entry: 109d2d6b8; end: 109d2d9a7;  */

void FUN_109d2d6b8(undefined8 param_1,undefined8 *param_2,undefined8 *param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  int *piVar6;
  int iVar7;
  int iVar8;
  byte bVar9;
  byte bVar10;
  long lVar11;
  undefined1 *puVar12;
  long *plVar13;
  float *pfVar14;
  int *piVar15;
  int *piVar16;
  float *pfVar17;
  long *plVar18;
  long *plVar19;
  float fVar20;
  float fVar21;
  long lStack_78;
  long lStack_70;
  long lStack_68;
  long lStack_60;
  undefined1 uStack_51;
  
  plVar19 = (long *)*param_2;
  plVar18 = (long *)*param_3;
  lVar3 = *plVar19;
  lVar5 = plVar19[1];
  lVar4 = *plVar18;
  lVar11 = lVar3;
  if (lVar5 - lVar3 != plVar18[1] - lVar4) {
    return;
  }
  for (; lVar3 != lVar5; lVar3 = lVar3 + 0x58) {
    lStack_60 = lVar11 + 0x18;
    lStack_70 = lVar4 + 0x18;
    puVar12 = &uStack_51;
    lStack_78 = lVar4;
    lStack_68 = lVar11;
    FUN_109cffd20(puVar12,&lStack_68,&lStack_78);
    if ((int)puVar12 == 0) {
      return;
    }
    lVar4 = lVar4 + 0x58;
    lVar11 = lVar11 + 0x58;
  }
  lVar3 = plVar19[3];
  lVar5 = plVar19[4];
  lVar4 = plVar18[3];
  lVar11 = lVar3;
  if (lVar5 - lVar3 != plVar18[4] - lVar4) {
    return;
  }
  for (; lVar3 != lVar5; lVar3 = lVar3 + 0x58) {
    lStack_60 = lVar11 + 0x18;
    lStack_70 = lVar4 + 0x18;
    puVar12 = &uStack_51;
    lStack_78 = lVar4;
    lStack_68 = lVar11;
    FUN_109cffd20(puVar12,&lStack_68,&lStack_78);
    if ((int)puVar12 == 0) {
      return;
    }
    lVar4 = lVar4 + 0x58;
    lVar11 = lVar11 + 0x58;
  }
  plVar19 = (long *)param_2[1];
  plVar18 = (long *)param_3[1];
  bVar9 = *(byte *)((long)plVar19 + 0x17);
  uVar1 = plVar19[1];
  if (-1 < (char)bVar9) {
    uVar1 = (ulong)bVar9;
  }
  bVar10 = *(byte *)((long)plVar18 + 0x17);
  uVar2 = plVar18[1];
  if (-1 < (char)bVar10) {
    uVar2 = (ulong)bVar10;
  }
  if (uVar1 != uVar2) {
    return;
  }
  plVar13 = (long *)*plVar19;
  if (-1 < (char)bVar9) {
    plVar13 = plVar19;
  }
  plVar19 = (long *)*plVar18;
  if (-1 < (char)bVar10) {
    plVar19 = plVar18;
  }
  _memcmp(plVar13,plVar19);
  if ((int)plVar13 != 0) {
    return;
  }
  piVar15 = *(int **)param_2[2];
  piVar6 = (int *)((long *)param_2[2])[1];
  piVar16 = *(int **)param_3[2];
  if ((long)piVar6 - (long)piVar15 != ((long *)param_3[2])[1] - (long)piVar16) {
    return;
  }
  while (piVar15 != piVar6) {
    iVar7 = *piVar15;
    iVar8 = *piVar16;
    piVar15 = piVar15 + 1;
    piVar16 = piVar16 + 1;
    if (iVar7 != iVar8) {
      return;
    }
  }
  plVar19 = (long *)param_2[3];
  plVar18 = (long *)param_3[3];
  pfVar14 = (float *)*plVar19;
  pfVar17 = (float *)*plVar18;
  if (plVar19[1] - *plVar19 != plVar18[1] - *plVar18) {
    return;
  }
  while (pfVar14 != (float *)plVar19[1]) {
    fVar20 = *pfVar14;
    fVar21 = *pfVar17;
    pfVar14 = pfVar14 + 1;
    pfVar17 = pfVar17 + 1;
    if (fVar20 != fVar21) {
      return;
    }
  }
  if (*(float *)(plVar19 + 3) != *(float *)(plVar18 + 3)) {
    return;
  }
  if (*(char *)((long)plVar19 + 0x1c) != *(char *)((long)plVar18 + 0x1c)) {
    return;
  }
  if (*(char *)((long)plVar19 + 0x1d) != *(char *)((long)plVar18 + 0x1d)) {
    return;
  }
  if (*(char *)((long)plVar19 + 0x1e) != *(char *)((long)plVar18 + 0x1e)) {
    return;
  }
  bVar9 = *(byte *)((long)plVar19 + 0x37);
  uVar1 = plVar19[5];
  if (-1 < (char)bVar9) {
    uVar1 = (ulong)bVar9;
  }
  bVar10 = *(byte *)((long)plVar18 + 0x37);
  uVar2 = plVar18[5];
  if (-1 < (char)bVar10) {
    uVar2 = (ulong)bVar10;
  }
  if (uVar1 != uVar2) {
    return;
  }
  plVar13 = (long *)plVar19[4];
  if (-1 < (char)bVar9) {
    plVar13 = plVar19 + 4;
  }
  plVar19 = (long *)plVar18[4];
  if (-1 < (char)bVar10) {
    plVar19 = plVar18 + 4;
  }
  _memcmp(plVar13,plVar19);
  return;
}



/* Entry: 109d2d9a8; end: 109d2db23;  */

void FUN_109d2d9a8(undefined8 *param_1,undefined8 param_2,undefined8 param_3,long *param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lStack_c8;
  long lStack_c0;
  undefined8 uStack_b8;
  undefined4 uStack_b0;
  undefined2 uStack_ac;
  undefined1 uStack_aa;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  long lStack_98;
  undefined2 uStack_90;
  undefined4 uStack_8e;
  undefined1 uStack_8a;
  undefined2 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined2 uStack_7c;
  undefined1 uStack_7a;
  undefined4 uStack_78;
  undefined2 uStack_74;
  undefined4 uStack_70;
  undefined8 uStack_68;
  undefined1 uStack_60;
  undefined4 uStack_5c;
  undefined1 uStack_58;
  
  lStack_c8 = 0;
  lStack_c0 = 0;
  uStack_b8 = 0;
  uStack_b0 = 0x3f800000;
  uStack_ac = 0;
  uStack_aa = 0;
  uStack_a0 = 0;
  lStack_98 = 0;
  uStack_a8 = 0;
  uStack_90 = 0x200;
  uStack_8e = 0;
  uStack_8a = 0;
  uStack_88 = 1;
  uStack_84 = 0;
  uStack_80 = 0x10000;
  uStack_7c = 0x100;
  uStack_7a = 1;
  uStack_78 = 0x1000000;
  uStack_74 = 1;
  uStack_70 = 0x100;
  uStack_68 = 100000;
  uStack_60 = 0;
  uStack_5c = 1;
  uStack_58 = 0;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_(&uStack_a8,param_7);
  FUN_109d20fac(*param_4,param_4[1] - *param_4 >> 2,param_5,param_6,&lStack_c8,param_8);
  puVar1 = (undefined8 *)0x110;
  __Znwm();
  puVar1[1] = 0;
  puVar1[2] = 0;
  puVar2 = puVar1 + 3;
  *puVar1 = &PTR_FUN_110b3f9c8;
  FUN_109d2bac0(puVar2,param_2,param_3,param_4,&lStack_c8);
  *param_1 = puVar2;
  param_1[1] = puVar1;
  if (lStack_98 < 0) {
    __ZdlPv(uStack_a8);
  }
  if (lStack_c8 != 0) {
    lStack_c0 = lStack_c8;
    __ZdlPv();
  }
  return;
}



/* Entry: 109d2db24; end: 109d2dba3;  */

long FUN_109d2db24(long param_1)

{
  if (*(char *)(param_1 + 0xaf) < '\0') {
    __ZdlPv(*(undefined8 *)(param_1 + 0x98));
  }
  if (*(char *)(param_1 + 0x8f) < '\0') {
    __ZdlPv(*(undefined8 *)(param_1 + 0x78));
  }
  if (*(char *)(param_1 + 0x77) < '\0') {
    __ZdlPv(*(undefined8 *)(param_1 + 0x60));
  }
  if (*(char *)(param_1 + 0x5f) < '\0') {
    __ZdlPv(*(undefined8 *)(param_1 + 0x48));
  }
  if (*(char *)(param_1 + 0x47) < '\0') {
    __ZdlPv(*(undefined8 *)(param_1 + 0x30));
  }
  if (*(char *)(param_1 + 0x2f) < '\0') {
    __ZdlPv(*(undefined8 *)(param_1 + 0x18));
  }
  return param_1;
}



/* Entry: 109d2dba4; end: 109d2dbb3;  */

void FUN_109d2dba4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110b3f9c8;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 109d2dbb4; end: 109d2dbd3;  */

void FUN_109d2dbb4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110b3f9c8;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 109d2dbd4; end: 109d2dbdf;  */

long FUN_109d2dbd4(long param_1)

{
  long lStack_28;
  
  if (*(char *)(param_1 + 199) < '\0') {
    __ZdlPv(*(undefined8 *)(param_1 + 0xb0));
  }
  if (*(long *)(param_1 + 0x90) != 0) {
    *(long *)(param_1 + 0x98) = *(long *)(param_1 + 0x90);
    __ZdlPv();
  }
  if (*(long *)(param_1 + 0x78) != 0) {
    *(long *)(param_1 + 0x80) = *(long *)(param_1 + 0x78);
    __ZdlPv();
  }
  if (*(char *)(param_1 + 0x77) < '\0') {
    __ZdlPv(*(undefined8 *)(param_1 + 0x60));
  }
  if (*(char *)(param_1 + 0x5f) < '\0') {
    __ZdlPv(*(undefined8 *)(param_1 + 0x48));
  }
  lStack_28 = param_1 + 0x30;
  func_0x000109378cec(&lStack_28);
  lStack_28 = param_1 + 0x18;
  func_0x000109378cec(&lStack_28);
  return param_1 + 0x18;
}



/* Entry: 109d2dbe0; end: 109d2dc37;  */

long FUN_109d2dbe0(long param_1)

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



/* Entry: 109d2dc38; end: 109d2e05f;  */

undefined8 ** FUN_109d2dc38(undefined4 *param_1,long *param_2)

{
  char cVar1;
  bool bVar2;
  code *pcVar3;
  long *plVar4;
  long *plVar5;
  undefined8 **ppuVar6;
  ulong uVar7;
  long lVar8;
  long **pplVar9;
  long *plStack_4d8;
  long *plStack_4d0;
  long *aplStack_4c8 [2];
  char cStack_4b1;
  byte bStack_4b0;
  code *pcStack_4a0;
  undefined8 *apuStack_498 [7];
  long alStack_460 [6];
  ulong uStack_430;
  undefined8 uStack_428;
  undefined8 uStack_420;
  undefined8 uStack_418;
  undefined8 uStack_410;
  undefined8 uStack_408;
  undefined8 uStack_400;
  undefined8 uStack_3f8;
  undefined8 uStack_3f0;
  undefined8 uStack_3e8;
  undefined8 uStack_3e0;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x000107c31940(aplStack_4c8,"");
  uStack_430 = uStack_430 & 0xffffffffffffff00;
  alStack_460[1] = 0;
  alStack_460[2] = 0;
  alStack_460[0] = 0;
  alStack_460[3] = alStack_460[3] & 0xffffffffffffff00;
  uStack_428 = CONCAT44(uStack_428._4_4_,0x10000);
  (**(code **)(*param_2 + 0x28))(&pcStack_4a0,param_2,aplStack_4c8,alStack_460);
  if (((char)uStack_430 == '\x01') && (alStack_460[5] < 0)) {
    __ZdlPv(alStack_460[3]);
  }
  if (alStack_460[2] < 0) {
    __ZdlPv(alStack_460[0]);
  }
  if (cStack_4b1 < '\0') {
    __ZdlPv(aplStack_4c8[0]);
  }
  (*pcStack_4a0)(aplStack_4c8,&pcStack_4a0);
  plVar5 = aplStack_4c8[0];
  if (bStack_4b0 == 1) {
    pplVar9 = aplStack_4c8;
    func_0x000109549100(pplVar9);
  }
  else {
    pplVar9 = (long **)0x0;
    while( true ) {
      plVar4 = plVar5;
      __ZNSt3__113basic_istreamIcNS_11char_traitsIcEEE4readEPcl(plVar5,alStack_460,0x400);
      if ((*(byte *)((long)plVar4 + *(long *)(*plVar4 + -0x18) + 0x20) & 5) != 0) break;
      lVar8 = 0;
      uVar7 = 0;
      do {
        uVar7 = uVar7 * 0x40 + 0x9e3779b9 + (uVar7 >> 2) + *(long *)((long)alStack_460 + lVar8) ^
                uVar7;
        lVar8 = lVar8 + 8;
      } while (lVar8 != 0x400);
      pplVar9 = (long **)((long)pplVar9 * 0x40 + 0x9e3779b9 + ((ulong)pplVar9 >> 2) + uVar7 ^
                         (ulong)pplVar9);
    }
    if (plVar5[1] != 0) {
      plVar5 = alStack_460;
      func_0x000109549058(plVar5);
      pplVar9 = (long **)((long)pplVar9 * 0x40 + 0x9e3779b9 + ((ulong)pplVar9 >> 2) + (long)plVar5 ^
                         (ulong)pplVar9);
    }
  }
  if (bStack_4b0 == 2) {
    __ZNSt3__18ios_base5clearEj((long)aplStack_4c8[0] + *(long *)(*aplStack_4c8[0] + -0x18),0);
    uStack_3e0 = 0;
    uStack_3f8 = 0;
    uStack_400 = 0;
    uStack_3e8 = 0;
    uStack_3f0 = 0;
    uStack_418 = 0;
    uStack_420 = 0;
    uStack_408 = 0;
    uStack_410 = 0;
    alStack_460[5] = 0;
    alStack_460[4] = 0;
    uStack_428 = 0;
    uStack_430 = 0;
    alStack_460[3] = 0;
    alStack_460[2] = 0;
    alStack_460[1] = 0;
    alStack_460[0] = 0;
    __ZNSt3__113basic_istreamIcNS_11char_traitsIcEEE5seekgENS_4fposI11__mbstate_tEE
              (aplStack_4c8[0],alStack_460);
  }
  FUN_109cdb8c0(&plStack_4d8,aplStack_4c8,1);
  if (plStack_4d8 != (long *)0x0) {
    *param_1 = 1;
    *(undefined8 *)(param_1 + 4) = 0;
    *(long *)(param_1 + 2) = 0;
    *(undefined8 *)(param_1 + 8) = 0;
    *(undefined8 *)(param_1 + 6) = 0;
    *(undefined8 *)(param_1 + 0xc) = 0;
    *(undefined8 *)(param_1 + 10) = 0;
    *(undefined8 *)(param_1 + 0x10) = 0;
    *(undefined8 *)(param_1 + 0xe) = 0;
    *(undefined8 *)(param_1 + 0x14) = 0;
    *(undefined8 *)(param_1 + 0x12) = 0;
    *(undefined8 *)(param_1 + 0x18) = 0;
    *(undefined8 *)(param_1 + 0x16) = 0;
    *(undefined8 *)(param_1 + 0x1e) = 0;
    *(undefined8 *)(param_1 + 0x1c) = 0;
    *(undefined8 *)(param_1 + 0x22) = 0;
    *(undefined8 *)(param_1 + 0x20) = 0;
    *(undefined8 *)(param_1 + 0x26) = 0;
    *(undefined8 *)(param_1 + 0x24) = 0;
    *(undefined1 *)(param_1 + 0x1a) = 1;
    __ZNSt3__19to_stringEy(alStack_460,pplVar9);
    *(long *)(param_1 + 4) = alStack_460[1];
    *(long *)(param_1 + 2) = alStack_460[0];
    *(long *)(param_1 + 6) = alStack_460[2];
    (**(code **)(*plStack_4d8 + 0x30))(alStack_460,plStack_4d8);
    if (*(char *)((long)param_1 + 0x37) < '\0') {
      __ZdlPv(*(undefined8 *)(param_1 + 8));
    }
    *(long *)(param_1 + 10) = alStack_460[1];
    *(long *)(param_1 + 8) = alStack_460[0];
    *(long *)(param_1 + 0xc) = alStack_460[2];
    plVar5 = plStack_4d8;
    (**(code **)(*plStack_4d8 + 0x20))();
    if ((long *)(param_1 + 0xe) != plVar5) {
      func_0x0001099ae0bc();
    }
    (**(code **)(*plStack_4d8 + 0x28))();
    if ((long *)(param_1 + 0x14) != plStack_4d8) {
      func_0x0001099ae0bc();
    }
    if (plStack_4d0 != (long *)0x0) {
      plVar5 = plStack_4d0 + 1;
      do {
        lVar8 = *plVar5;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
        if (bVar2) {
          *plVar5 = lVar8 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (lVar8 == 0) {
        (**(code **)(*plStack_4d0 + 0x10))(plStack_4d0);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_4d0);
      }
    }
    (*(code *)(&PTR_DAT_110af4bf0)[bStack_4b0])(aplStack_4c8);
    ppuVar6 = apuStack_498;
    (*(code *)*apuStack_498[0])();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
      return ppuVar6;
    }
    ___stack_chk_fail();
    (*(code *)(&PTR_DAT_110af4bf0)[bStack_4b0])(aplStack_4c8);
    (*(code *)*apuStack_498[0])(apuStack_498);
    __Unwind_Resume();
    if ((*(char *)(ppuVar6 + 6) == '\x01') && (*(char *)((long)ppuVar6 + 0x2f) < '\0')) {
      __ZdlPv(ppuVar6[3]);
    }
    if (*(char *)((long)ppuVar6 + 0x17) < '\0') {
      __ZdlPv(*ppuVar6);
    }
    return ppuVar6;
  }
  func_0x000105688514(&UNK_10f5acdb7);
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x109d2dfc0);
  (*pcVar3)();
}



/* Entry: 109d2e060; end: 109d2e133;  */

undefined8 * FUN_109d2e060(undefined8 *param_1)

{
  if ((*(char *)(param_1 + 6) == '\x01') && (*(char *)((long)param_1 + 0x2f) < '\0')) {
    __ZdlPv(param_1[3]);
  }
  if (*(char *)((long)param_1 + 0x17) < '\0') {
    __ZdlPv(*param_1);
  }
  return param_1;
}



/* Entry: 109d2e134; end: 109d2e4f7;  */

long * FUN_109d2e134(long *param_1,long *param_2)

{
  char cVar1;
  bool bVar2;
  code *pcVar3;
  long *plVar4;
  long lVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  long lVar9;
  undefined4 auStack_110 [2];
  undefined1 uStack_108;
  undefined7 uStack_107;
  long lStack_100;
  undefined7 uStack_f8;
  char cStack_f1;
  undefined1 uStack_f0;
  undefined7 uStack_ef;
  long lStack_e8;
  undefined7 uStack_e0;
  char cStack_d9;
  long lStack_d8;
  long lStack_d0;
  long lStack_c8;
  long lStack_c0;
  long lStack_b8;
  long lStack_b0;
  undefined1 uStack_a8;
  long lStack_a0;
  long lStack_98;
  long lStack_90;
  undefined1 uStack_88;
  undefined7 uStack_87;
  long lStack_80;
  undefined7 uStack_78;
  char cStack_71;
  undefined1 uStack_70;
  undefined7 uStack_6f;
  long lStack_68;
  undefined7 uStack_60;
  undefined1 uStack_59;
  long *plStack_58;
  
  lVar5 = param_2[1];
  lVar9 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = lVar9;
  if (lVar5 != 0) {
    plVar4 = (long *)(lVar5 + 8);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
      if (bVar2) {
        *plVar4 = *plVar4 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  *(undefined4 *)(param_1 + 2) = 1;
  plVar8 = param_1 + 3;
  param_1[4] = 0;
  *plVar8 = 0;
  plVar6 = param_1 + 0x10;
  param_1[0x11] = 0;
  *plVar6 = 0;
  param_1[6] = 0;
  param_1[5] = 0;
  param_1[8] = 0;
  param_1[7] = 0;
  param_1[10] = 0;
  param_1[9] = 0;
  param_1[0xc] = 0;
  param_1[0xb] = 0;
  param_1[0xe] = 0;
  param_1[0xd] = 0;
  *(undefined1 *)(param_1 + 0xf) = 0;
  plVar7 = param_1 + 0x16;
  param_1[0x17] = 0;
  *plVar7 = 0;
  param_1[0x13] = 0;
  param_1[0x12] = 0;
  param_1[0x15] = 0;
  param_1[0x14] = 0;
  param_1[0x18] = 0;
  plVar4 = (long *)*param_2;
  if (plVar4 == (long *)0x0) {
    func_0x000105688514(&UNK_10f5acde0);
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x109d2e4c4);
    (*pcVar3)();
  }
  (**(code **)(*plVar4 + 0x18))();
  if ((int)plVar4 == 0) {
    FUN_109d2dc38(auStack_110,*param_2);
    *(undefined4 *)(param_1 + 2) = auStack_110[0];
    if (*(char *)((long)param_1 + 0x2f) < '\0') {
      __ZdlPv(*plVar8);
    }
    param_1[4] = lStack_100;
    *plVar8 = CONCAT71(uStack_107,uStack_108);
    param_1[5] = CONCAT17(cStack_f1,uStack_f8);
    cStack_f1 = '\0';
    uStack_108 = 0;
    if (*(char *)((long)param_1 + 0x47) < '\0') {
      __ZdlPv(param_1[6]);
    }
    param_1[7] = lStack_e8;
    param_1[6] = CONCAT71(uStack_ef,uStack_f0);
    param_1[8] = CONCAT17(cStack_d9,uStack_e0);
    cStack_d9 = '\0';
    uStack_f0 = 0;
    func_0x000105674e18(param_1 + 9);
    param_1[10] = lStack_d0;
    param_1[9] = lStack_d8;
    param_1[0xb] = lStack_c8;
    lStack_d0 = 0;
    lStack_c8 = 0;
    lStack_d8 = 0;
    func_0x000105674e18(param_1 + 0xc);
    param_1[0xd] = lStack_b8;
    param_1[0xc] = lStack_c0;
    param_1[0xe] = lStack_b0;
    lStack_b8 = 0;
    lStack_b0 = 0;
    lStack_c0 = 0;
    *(undefined1 *)(param_1 + 0xf) = uStack_a8;
    FUN_109d2e824(plVar6);
    param_1[0x11] = lStack_98;
    param_1[0x10] = lStack_a0;
    param_1[0x12] = lStack_90;
    lStack_98 = 0;
    lStack_90 = 0;
    lStack_a0 = 0;
    if (*(char *)((long)param_1 + 0xaf) < '\0') {
      __ZdlPv(param_1[0x13]);
    }
    param_1[0x14] = lStack_80;
    param_1[0x13] = CONCAT71(uStack_87,uStack_88);
    param_1[0x15] = CONCAT17(cStack_71,uStack_78);
    cStack_71 = '\0';
    uStack_88 = 0;
  }
  else {
    FUN_109d2e888(auStack_110,*param_2);
    *(undefined4 *)(param_1 + 2) = auStack_110[0];
    if (*(char *)((long)param_1 + 0x2f) < '\0') {
      __ZdlPv(*plVar8);
    }
    param_1[4] = lStack_100;
    *plVar8 = CONCAT71(uStack_107,uStack_108);
    param_1[5] = CONCAT17(cStack_f1,uStack_f8);
    cStack_f1 = '\0';
    uStack_108 = 0;
    if (*(char *)((long)param_1 + 0x47) < '\0') {
      __ZdlPv(param_1[6]);
    }
    param_1[7] = lStack_e8;
    param_1[6] = CONCAT71(uStack_ef,uStack_f0);
    param_1[8] = CONCAT17(cStack_d9,uStack_e0);
    cStack_d9 = '\0';
    uStack_f0 = 0;
    func_0x000105674e18(param_1 + 9);
    param_1[10] = lStack_d0;
    param_1[9] = lStack_d8;
    param_1[0xb] = lStack_c8;
    lStack_d0 = 0;
    lStack_c8 = 0;
    lStack_d8 = 0;
    func_0x000105674e18(param_1 + 0xc);
    param_1[0xd] = lStack_b8;
    param_1[0xc] = lStack_c0;
    param_1[0xe] = lStack_b0;
    lStack_b8 = 0;
    lStack_b0 = 0;
    lStack_c0 = 0;
    *(undefined1 *)(param_1 + 0xf) = uStack_a8;
    FUN_109d2e824(plVar6);
    param_1[0x11] = lStack_98;
    param_1[0x10] = lStack_a0;
    param_1[0x12] = lStack_90;
    lStack_98 = 0;
    lStack_90 = 0;
    lStack_a0 = 0;
    if (*(char *)((long)param_1 + 0xaf) < '\0') {
      __ZdlPv(param_1[0x13]);
    }
    param_1[0x14] = lStack_80;
    param_1[0x13] = CONCAT71(uStack_87,uStack_88);
    param_1[0x15] = CONCAT17(cStack_71,uStack_78);
    cStack_71 = '\0';
    uStack_88 = 0;
    if (*(char *)((long)param_1 + 199) < '\0') {
      __ZdlPv(*plVar7);
      param_1[0x17] = lStack_68;
      *plVar7 = CONCAT71(uStack_6f,uStack_70);
      param_1[0x18] = CONCAT17(uStack_59,uStack_60);
      uStack_59 = 0;
      uStack_70 = 0;
      if (cStack_71 < '\0') {
        __ZdlPv(CONCAT71(uStack_87,uStack_88));
      }
    }
    else {
      param_1[0x17] = lStack_68;
      *plVar7 = CONCAT71(uStack_6f,uStack_70);
      param_1[0x18] = CONCAT17(uStack_59,uStack_60);
      uStack_59 = 0;
      uStack_70 = 0;
    }
  }
  plStack_58 = &lStack_a0;
  func_0x000109a1aba8(&plStack_58);
  plStack_58 = &lStack_c0;
  func_0x000109378cec(&plStack_58);
  plStack_58 = &lStack_d8;
  func_0x000109378cec(&plStack_58);
  if (cStack_d9 < '\0') {
    __ZdlPv(CONCAT71(uStack_ef,uStack_f0));
  }
  if (cStack_f1 < '\0') {
    __ZdlPv(CONCAT71(uStack_107,uStack_108));
  }
  return param_1;
}



/* Entry: 109d2e4f8; end: 109d2e643;  */

/* WARNING: Possible PIC construction at 0x000109d2e59c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100033dfc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000109d2e5a0) */
/* WARNING: Removing unreachable block (ram,0x000109d2e5a8) */
/* WARNING: Removing unreachable block (ram,0x000100033e00) */
/* WARNING: Removing unreachable block (ram,0x000109d2e594) */

void FUN_109d2e4f8(long *param_1,long *param_2,long param_3)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  undefined8 auStack_68 [2];
  char cStack_51;
  undefined8 uStack_50;
  long lStack_48;
  char cStack_39;
  long lStack_38;
  long in_stack_ffffffffffffffd0;
  undefined7 in_stack_ffffffffffffffd8;
  undefined1 in_stack_ffffffffffffffdf;
  
  uVar1 = *(ulong *)(param_3 + 8);
  if (-1 < (char)*(byte *)(param_3 + 0x17)) {
    uVar1 = (ulong)*(byte *)(param_3 + 0x17);
  }
  if (uVar1 == 0) {
    if (*(char *)((long)param_2 + 0x17) < '\0') {
      lVar3 = *param_2;
      uVar1 = param_2[1];
      if (uVar1 < 0x17) {
        *(char *)((long)param_1 + 0x17) = (char)uVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf0b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__memmove_11034c660)(param_1,lVar3,uVar1 + 1);
        return;
      }
      if (uVar1 < 0x7ffffffffffffff7) {
        lVar2 = 0x19;
        if ((uVar1 | 7) != 0x17) {
          lVar2 = (uVar1 | 7) + 1;
        }
      }
      else {
        lVar2 = lVar3;
        func_0x000104bd47d4();
      }
      lStack_48 = lVar3;
      func_0x000107c60e20(lVar2);
      return;
    }
    lVar3 = *param_2;
    param_1[1] = param_2[1];
    *param_1 = lVar3;
    param_1[2] = param_2[2];
  }
  else {
    func_0x0001092b2830(&uStack_50,param_2,0);
    func_0x0001092b2830(auStack_68,param_3,0);
    func_0x0001092b4910(&lStack_38,&uStack_50,auStack_68);
    param_1[1] = in_stack_ffffffffffffffd0;
    *param_1 = lStack_38;
    param_1[2] = CONCAT17(in_stack_ffffffffffffffdf,in_stack_ffffffffffffffd8);
    if (cStack_51 < '\0') {
      __ZdlPv(auStack_68[0]);
    }
    if (cStack_39 < '\0') {
      __ZdlPv(uStack_50);
    }
  }
  return;
}



/* Entry: 109d2e644; end: 109d2e77f;  */

void FUN_109d2e644(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 *param_4,
                  uint param_5,undefined8 *param_6)

{
  undefined8 uStack_80;
  undefined8 uStack_78;
  long lStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  long lStack_58;
  byte bStack_50;
  undefined2 uStack_48;
  undefined1 uStack_46;
  byte bStack_45;
  
  if (*(char *)((long)param_6 + 0x17) < '\0') {
    func_0x000107c3192c(&uStack_80,*param_6,param_6[1]);
  }
  else {
    uStack_78 = param_6[1];
    uStack_80 = *param_6;
    lStack_70 = param_6[2];
  }
  if (*(char *)((long)param_4 + 0x17) < '\0') {
    func_0x000107c3192c(&uStack_68,*param_4,param_4[1]);
  }
  else {
    uStack_60 = param_4[1];
    uStack_68 = *param_4;
    lStack_58 = param_4[2];
  }
  bStack_50 = 1;
  uStack_48 = 0;
  if (param_5 != 1) {
    uStack_48 = 0x100;
  }
  uStack_46 = (undefined1)param_5;
  bStack_45 = param_5 < 6 & (byte)(0x34 >> (ulong)(param_5 & 0x1f));
  (**(code **)(*param_2 + 0x28))(param_1,param_2,param_3,&uStack_80);
  if (((bStack_50 & 1) != 0) && (lStack_58 < 0)) {
    __ZdlPv(uStack_68);
  }
  if (lStack_70 < 0) {
    __ZdlPv(uStack_80);
  }
  return;
}



/* Entry: 109d2e780; end: 109d2e823;  */

void FUN_109d2e780(undefined8 *param_1,long param_2)

{
  param_1[8] = 0;
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[7] = 0;
  param_1[6] = 0;
  param_1[1] = 0;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  if ((undefined8 *)(param_2 + 0x48) != param_1) {
    func_0x0001099ae0bc(param_1,*(long *)(param_2 + 0x48),*(long *)(param_2 + 0x50),
                        (*(long *)(param_2 + 0x50) - *(long *)(param_2 + 0x48) >> 3) *
                        0x2e8ba2e8ba2e8ba3);
  }
  if (param_1 + 3 != (undefined8 *)(param_2 + 0x60)) {
    func_0x0001099ae0bc();
  }
  return;
}



/* Entry: 109d2e824; end: 109d2e887;  */

void FUN_109d2e824(long *param_1)

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
        lVar2 = lVar2 + -0x50;
        func_0x000109a1ac18(lVar2);
      } while (lVar2 != lVar3);
      lVar1 = *param_1;
    }
    param_1[1] = lVar3;
    __ZdlPv(lVar1);
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  return;
}



/* Entry: 109d2e888; end: 109d2ef3b;  */

void FUN_109d2e888(int *param_1,long *param_2)

{
  undefined **ppuVar1;
  undefined1 *puVar2;
  code *pcVar3;
  undefined1 uVar4;
  int iVar5;
  undefined ***pppuVar6;
  ulong uVar7;
  int *piVar8;
  undefined *puVar9;
  ulong uVar10;
  int *piVar11;
  undefined **ppuVar12;
  long *plVar13;
  ulong *puVar14;
  long lVar15;
  long lVar16;
  undefined *puVar17;
  long *plVar18;
  long lVar19;
  ulong uVar20;
  ulong uStack_180;
  ulong uStack_178;
  ulong uStack_170;
  long lStack_168;
  long *plStack_160;
  undefined8 uStack_158;
  long lStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  long lStack_138;
  undefined **ppuStack_130;
  undefined7 uStack_128;
  undefined1 auStack_121 [4];
  uint uStack_11d;
  char cStack_119;
  undefined8 uStack_118;
  undefined8 uStack_110;
  ulong uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  ulong uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined *puStack_d8;
  undefined *puStack_d0;
  undefined *puStack_c8;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  undefined4 uStack_b0;
  ulong uStack_a8;
  ulong uStack_a0;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  long *plStack_70;
  
  cStack_119 = '\x13';
  uStack_128 = 0x61746164617465;
  auStack_121 = (undefined1  [4])0x6e69622e;
  ppuStack_130 = (undefined **)0x6d5f6c6d70616e73;
  uStack_11d = uStack_11d & 0xffffff00;
  (**(code **)(*param_2 + 0x20))(&uStack_a8,param_2,&ppuStack_130);
  if (cStack_119 < '\0') {
    __ZdlPv(ppuStack_130);
  }
  ppuStack_130 = &PTR_FUN_110b3b7e8;
  uStack_128 = 0;
  uStack_118 = 0;
  auStack_121[0] = 0;
  auStack_121._1_3_ = 0;
  uStack_11d = 0;
  cStack_119 = 0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  uStack_e0 = 0;
  puStack_d8 = &DAT_11383d918;
  puStack_d0 = &DAT_11383d918;
  puStack_c8 = &DAT_11383d918;
  uStack_b0 = 0;
  puStack_c0 = &DAT_11383d918;
  uStack_b8 = 0;
  uStack_178 = (ulong)((int)uStack_a0 - (int)uStack_a8);
  uStack_180 = uStack_a8;
  pppuVar6 = &ppuStack_130;
  func_0x000107c30348(pppuVar6,&uStack_180);
  if (((ulong)pppuVar6 & 1) == 0) {
    puVar9 = &UNK_10f5ace12;
  }
  else {
    if ((int)uStack_b8 < 3) {
      piVar11 = param_1 + 2;
      param_1[4] = 0;
      param_1[5] = 0;
      piVar11[0] = 0;
      piVar11[1] = 0;
      plVar18 = (long *)(param_1 + 0x1c);
      param_1[0x1e] = 0;
      param_1[0x1f] = 0;
      *plVar18 = 0;
      *(undefined1 *)(param_1 + 0x1a) = 0;
      param_1[0x18] = 0;
      param_1[0x19] = 0;
      param_1[0x16] = 0;
      param_1[0x17] = 0;
      param_1[0x14] = 0;
      param_1[0x15] = 0;
      param_1[0x12] = 0;
      param_1[0x13] = 0;
      param_1[0x10] = 0;
      param_1[0x11] = 0;
      param_1[0xe] = 0;
      param_1[0xf] = 0;
      param_1[0xc] = 0;
      param_1[0xd] = 0;
      param_1[10] = 0;
      param_1[0xb] = 0;
      param_1[8] = 0;
      param_1[9] = 0;
      param_1[6] = 0;
      param_1[7] = 0;
      param_1[0x22] = 0;
      param_1[0x23] = 0;
      param_1[0x20] = 0;
      param_1[0x21] = 0;
      param_1[0x26] = 0;
      param_1[0x27] = 0;
      param_1[0x24] = 0;
      param_1[0x25] = 0;
      param_1[0x2a] = 0;
      param_1[0x2b] = 0;
      param_1[0x28] = 0;
      param_1[0x29] = 0;
      param_1[0x2c] = 0;
      param_1[0x2d] = 0;
      *param_1 = (int)uStack_b8;
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
                (param_1 + 8,(ulong)puStack_c0 & 0xfffffffffffffffc);
      func_0x000109378e2c(param_1 + 0xe,(long)(int)uStack_118);
      plVar13 = (long *)(auStack_121 + 1);
      if ((auStack_121._1_3_ & 1) != 0) {
        plVar13 = (long *)(CONCAT17(cStack_119,CONCAT43(uStack_11d,auStack_121._1_3_)) + 7);
      }
      if ((int)uStack_118 != 0) {
        lVar19 = (long)(int)uStack_118 << 3;
        puVar9 = &UNK_10f5ace63;
        do {
          ppuVar12 = *(undefined ***)(*plVar13 + 0x20);
          ppuVar1 = &PTR_PTR_1132fd428;
          if (ppuVar12 != (undefined **)0x0) {
            ppuVar1 = ppuVar12;
          }
          if (*(int *)((long)ppuVar1 + 0x1c) != 1) goto LAB_109d2ee88;
          uVar20 = *(ulong *)(*plVar13 + 0x18);
          puVar17 = ppuVar1[2];
          uVar7 = *(ulong *)(puVar17 + 0x18);
          uVar10 = (ulong)*(int *)(puVar17 + 0x10);
          FUN_109d16234();
          iVar5 = *(int *)(puVar17 + 0x24);
          uStack_180 = uVar7;
          uStack_178 = uVar10;
          func_0x000109d16200();
          if (iVar5 != 1) goto LAB_109d2ee84;
          uVar7 = *(ulong *)(param_1 + 0x10);
          if (uVar7 < *(ulong *)(param_1 + 0x12)) {
            FUN_109d2f2c0(uVar7,uVar20 & 0xfffffffffffffffc,&uStack_180,1);
            piVar8 = (int *)(uVar7 + 0x58);
          }
          else {
            piVar8 = param_1 + 0xe;
            FUN_109d2f168(piVar8,uVar20 & 0xfffffffffffffffc,&uStack_180,1);
          }
          *(int **)(param_1 + 0x10) = piVar8;
          plVar13 = plVar13 + 1;
          lVar19 = lVar19 + -8;
        } while (lVar19 != 0);
      }
      uVar7 = (ulong)(int)uStack_100;
      func_0x000109378e2c(param_1 + 0x14);
      puVar14 = &uStack_108;
      if ((uStack_108 & 1) != 0) {
        puVar14 = (ulong *)(uStack_108 + 7);
      }
      if ((int)uStack_100 != 0) {
        lVar19 = (long)(int)uStack_100 << 3;
        puVar9 = &UNK_10f5ace63;
        do {
          ppuVar12 = *(undefined ***)(*puVar14 + 0x20);
          ppuVar1 = &PTR_PTR_1132fd408;
          if (ppuVar12 != (undefined **)0x0) {
            ppuVar1 = ppuVar12;
          }
          if (*(int *)((long)ppuVar1 + 0x1c) != 1) goto LAB_109d2ee88;
          uVar7 = *(ulong *)(*puVar14 + 0x18);
          puVar17 = ppuVar1[2];
          uVar10 = *(ulong *)(puVar17 + 0x18);
          uVar20 = (ulong)*(int *)(puVar17 + 0x10);
          FUN_109d16234();
          iVar5 = *(int *)(puVar17 + 0x24);
          uStack_180 = uVar10;
          uStack_178 = uVar20;
          func_0x000109d16200();
          if (iVar5 != 1) goto LAB_109d2ee84;
          uVar10 = *(ulong *)(param_1 + 0x16);
          if (uVar10 < *(ulong *)(param_1 + 0x18)) {
            uVar7 = uVar7 & 0xfffffffffffffffc;
            FUN_109d2f2c0(uVar10,uVar7,&uStack_180,1);
            piVar8 = (int *)(uVar10 + 0x58);
          }
          else {
            piVar8 = param_1 + 0x14;
            uVar7 = uVar7 & 0xfffffffffffffffc;
            FUN_109d2f168(piVar8,uVar7,&uStack_180,1);
          }
          *(int **)(param_1 + 0x16) = piVar8;
          puVar14 = puVar14 + 1;
          lVar19 = lVar19 + -8;
        } while (lVar19 != 0);
      }
      lVar19 = (long)(int)uStack_e8;
      lVar15 = *(long *)(param_1 + 0x1c);
      if ((ulong)((*(long *)(param_1 + 0x20) - lVar15 >> 4) * -0x3333333333333333) <
          (ulong)(long)(int)uStack_e8) {
        if ((int)uStack_e8 < 0) {
          FUN_109d2f024();
          goto LAB_109d2eebc;
        }
        lVar16 = *(long *)(param_1 + 0x1e);
        plStack_160 = plVar18;
        FUN_109d2f038();
        lVar15 = lVar19 + (lVar16 - lVar15);
        lVar16 = lVar15 + (*(long *)(param_1 + 0x1c) - *(long *)(param_1 + 0x1e));
        func_0x000109d2f07c(*(long *)(param_1 + 0x1c),*(long *)(param_1 + 0x1e),lVar16);
        uStack_180 = *(ulong *)(param_1 + 0x1c);
        *(long *)(param_1 + 0x1c) = lVar16;
        *(long *)(param_1 + 0x1e) = lVar15;
        lStack_168 = *(long *)(param_1 + 0x20);
        *(ulong *)(param_1 + 0x20) = lVar19 + uVar7 * 0x50;
        uStack_178 = uStack_180;
        uStack_170 = uStack_180;
        func_0x000109d2f11c(&uStack_180);
        lVar19 = (long)(int)uStack_e8;
      }
      puVar14 = &uStack_f0;
      if ((uStack_f0 & 1) != 0) {
        puVar14 = (ulong *)(uStack_f0 + 7);
      }
      if ((int)uStack_e8 != 0) {
        lVar19 = lVar19 << 3;
        do {
          uVar7 = *puVar14;
          if (*(uint *)(uVar7 + 0x28) < 7) {
            uStack_180 = uStack_180 & 0xffffffffffffff00;
            lStack_150 = 0;
            uStack_158 = 0;
            uStack_140 = 0;
            uStack_148 = 0;
            lStack_138 = 0;
            uStack_170 = 0;
            uStack_178 = 0;
            plStack_160 = (long *)0x0;
            lStack_168 = 0;
            uVar4 = (undefined1)*(undefined4 *)(uVar7 + 0x28);
            func_0x000109d161c4();
            uStack_180 = CONCAT71(uStack_180._1_7_,uVar4);
            __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
                      (&uStack_178,*(ulong *)(uVar7 + 0x10) & 0xfffffffffffffffc);
            __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
                      (&plStack_160,*(ulong *)(uVar7 + 0x18) & 0xfffffffffffffffc);
            uVar7 = *(ulong *)(uVar7 + 0x20) & 0xfffffffffffffffc;
            __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_(&uStack_148);
            puVar2 = *(undefined1 **)(param_1 + 0x1e);
            if (puVar2 < *(undefined1 **)(param_1 + 0x20)) {
              *puVar2 = (undefined1)uStack_180;
              *(long *)(puVar2 + 0x18) = lStack_168;
              *(ulong *)(puVar2 + 0x10) = uStack_170;
              *(ulong *)(puVar2 + 8) = uStack_178;
              uStack_178 = 0;
              uStack_170 = 0;
              *(undefined8 *)(puVar2 + 0x28) = uStack_158;
              *(long **)(puVar2 + 0x20) = plStack_160;
              *(long *)(puVar2 + 0x30) = lStack_150;
              lStack_168 = 0;
              plStack_160 = (long *)0x0;
              uStack_158 = 0;
              lStack_150 = 0;
              *(long *)(puVar2 + 0x48) = lStack_138;
              *(undefined8 *)(puVar2 + 0x40) = uStack_140;
              *(undefined8 *)(puVar2 + 0x38) = uStack_148;
              uStack_140 = 0;
              lStack_138 = 0;
              uStack_148 = 0;
              *(undefined1 **)(param_1 + 0x1e) = puVar2 + 0x50;
            }
            else {
              lVar15 = (long)puVar2 - *plVar18;
              uVar10 = (lVar15 >> 4) * -0x3333333333333333 + 1;
              if (0x333333333333333 < uVar10) {
                FUN_109d2f024();
                goto LAB_109d2eebc;
              }
              lVar16 = (long)*(undefined1 **)(param_1 + 0x20) - *plVar18 >> 4;
              uVar20 = lVar16 * -0x6666666666666666;
              if (uVar20 < uVar10 || uVar20 - uVar10 == 0) {
                uVar20 = uVar10;
              }
              if (0x199999999999998 < (ulong)(lVar16 * -0x3333333333333333)) {
                uVar20 = 0x333333333333333;
              }
              plStack_70 = plVar18;
              FUN_109d2f038();
              puVar2 = (undefined1 *)(uVar20 + lVar15);
              *puVar2 = (undefined1)uStack_180;
              *(long *)(puVar2 + 0x18) = lStack_168;
              *(ulong *)(puVar2 + 0x10) = uStack_170;
              *(ulong *)(puVar2 + 8) = uStack_178;
              uStack_170 = 0;
              lStack_168 = 0;
              uStack_178 = 0;
              *(long *)(puVar2 + 0x30) = lStack_150;
              *(undefined8 *)(puVar2 + 0x28) = uStack_158;
              *(long **)(puVar2 + 0x20) = plStack_160;
              uStack_158 = 0;
              lStack_150 = 0;
              plStack_160 = (long *)0x0;
              *(long *)(puVar2 + 0x48) = lStack_138;
              *(undefined8 *)(puVar2 + 0x40) = uStack_140;
              *(undefined8 *)(puVar2 + 0x38) = uStack_148;
              uStack_140 = 0;
              lStack_138 = 0;
              uStack_148 = 0;
              lVar15 = *(long *)(param_1 + 0x1c);
              lVar16 = *(long *)(param_1 + 0x1e);
              func_0x000109d2f07c(lVar15,lVar16,puVar2 + (lVar15 - lVar16));
              uStack_90 = *(undefined8 *)(param_1 + 0x1c);
              *(undefined1 **)(param_1 + 0x1c) = puVar2 + (lVar15 - lVar16);
              *(undefined1 **)(param_1 + 0x1e) = puVar2 + 0x50;
              uStack_78 = *(undefined8 *)(param_1 + 0x20);
              *(ulong *)(param_1 + 0x20) = uVar20 + uVar7 * 0x50;
              uStack_88 = uStack_90;
              uStack_80 = uStack_90;
              func_0x000109d2f11c(&uStack_90);
              *(undefined1 **)(param_1 + 0x1e) = puVar2 + 0x50;
              if (lStack_138 < 0) {
                __ZdlPv(uStack_148);
              }
            }
            if (lStack_150 < 0) {
              __ZdlPv(plStack_160);
            }
            if (lStack_168 < 0) {
              __ZdlPv(uStack_178);
            }
          }
          puVar14 = puVar14 + 1;
          lVar19 = lVar19 + -8;
        } while (lVar19 != 0);
      }
      if ((*param_1 < 2) || (*(long *)(param_1 + 0x1c) == *(long *)(param_1 + 0x1e))) {
        uVar4 = (undefined1)((ulong)uStack_b8 >> 0x20);
        func_0x000109d161c4();
        *(undefined1 *)(param_1 + 0x1a) = uVar4;
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
                  (piVar11,(ulong)puStack_d0 & 0xfffffffffffffffc);
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
                  (param_1 + 0x22,(ulong)puStack_c8 & 0xfffffffffffffffc);
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
                  (param_1 + 0x28,(ulong)puStack_d8 & 0xfffffffffffffffc);
      }
      func_0x000109ccccec(&ppuStack_130);
      if (uStack_a8 != 0) {
        uStack_a0 = uStack_a8;
        __ZdlPv();
      }
      return;
    }
    puVar9 = &UNK_10f5ace2d;
  }
  func_0x000105688514(puVar9);
  goto LAB_109d2eebc;
LAB_109d2ee84:
  puVar9 = &UNK_10f5ace97;
LAB_109d2ee88:
  func_0x000105688514(puVar9);
LAB_109d2eebc:
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x109d2eec0);
  (*pcVar3)();
}



/* Entry: 109d2ef3c; end: 109d2f023;  */

long FUN_109d2ef3c(long param_1)

{
  if (*(char *)(param_1 + 0x4f) < '\0') {
    __ZdlPv(*(undefined8 *)(param_1 + 0x38));
  }
  if (*(char *)(param_1 + 0x37) < '\0') {
    __ZdlPv(*(undefined8 *)(param_1 + 0x20));
  }
  if (*(char *)(param_1 + 0x1f) < '\0') {
    __ZdlPv(*(undefined8 *)(param_1 + 8));
  }
  return param_1;
}



/* Entry: 109d2f024; end: 109d2f037;  */

void FUN_109d2f024(undefined8 param_1,undefined *param_2,undefined1 *param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  puVar1 = &DAT_10f62a4d8;
  func_0x000104c4f6cc();
  if ((undefined *)0x333333333333333 < puVar1) {
    func_0x000104c4f740();
    puVar2 = puVar1;
    if (puVar1 != param_2) {
      do {
        *param_3 = *puVar2;
        uVar4 = *(undefined8 *)(puVar2 + 0x10);
        uVar3 = *(undefined8 *)(puVar2 + 8);
        *(undefined8 *)(param_3 + 0x18) = *(undefined8 *)(puVar2 + 0x18);
        *(undefined8 *)(param_3 + 0x10) = uVar4;
        *(undefined8 *)(param_3 + 8) = uVar3;
        *(undefined8 *)(puVar2 + 0x10) = 0;
        *(undefined8 *)(puVar2 + 0x18) = 0;
        *(undefined8 *)(puVar2 + 8) = 0;
        uVar4 = *(undefined8 *)(puVar2 + 0x28);
        uVar3 = *(undefined8 *)(puVar2 + 0x20);
        *(undefined8 *)(param_3 + 0x30) = *(undefined8 *)(puVar2 + 0x30);
        *(undefined8 *)(param_3 + 0x28) = uVar4;
        *(undefined8 *)(param_3 + 0x20) = uVar3;
        *(undefined8 *)(puVar2 + 0x28) = 0;
        *(undefined8 *)(puVar2 + 0x30) = 0;
        *(undefined8 *)(puVar2 + 0x20) = 0;
        uVar4 = *(undefined8 *)(puVar2 + 0x40);
        uVar3 = *(undefined8 *)(puVar2 + 0x38);
        *(undefined8 *)(param_3 + 0x48) = *(undefined8 *)(puVar2 + 0x48);
        *(undefined8 *)(param_3 + 0x40) = uVar4;
        *(undefined8 *)(param_3 + 0x38) = uVar3;
        *(undefined8 *)(puVar2 + 0x40) = 0;
        *(undefined8 *)(puVar2 + 0x48) = 0;
        *(undefined8 *)(puVar2 + 0x38) = 0;
        puVar2 = puVar2 + 0x50;
        param_3 = param_3 + 0x50;
      } while (puVar2 != param_2);
      do {
        func_0x000109a1ac18(puVar1);
        puVar1 = puVar1 + 0x50;
      } while (puVar1 != param_2);
    }
    return;
  }
  __Znwm((long)puVar1 * 0x50);
  return;
}



/* Entry: 109d2f038; end: 109d2f167;  */

void FUN_109d2f038(undefined1 *param_1,undefined1 *param_2,undefined1 *param_3)

{
  undefined1 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  if ((undefined1 *)0x333333333333333 < param_1) {
    func_0x000104c4f740();
    puVar1 = param_1;
    if (param_1 != param_2) {
      do {
        *param_3 = *puVar1;
        uVar3 = *(undefined8 *)(puVar1 + 0x10);
        uVar2 = *(undefined8 *)(puVar1 + 8);
        *(undefined8 *)(param_3 + 0x18) = *(undefined8 *)(puVar1 + 0x18);
        *(undefined8 *)(param_3 + 0x10) = uVar3;
        *(undefined8 *)(param_3 + 8) = uVar2;
        *(undefined8 *)(puVar1 + 0x10) = 0;
        *(undefined8 *)(puVar1 + 0x18) = 0;
        *(undefined8 *)(puVar1 + 8) = 0;
        uVar3 = *(undefined8 *)(puVar1 + 0x28);
        uVar2 = *(undefined8 *)(puVar1 + 0x20);
        *(undefined8 *)(param_3 + 0x30) = *(undefined8 *)(puVar1 + 0x30);
        *(undefined8 *)(param_3 + 0x28) = uVar3;
        *(undefined8 *)(param_3 + 0x20) = uVar2;
        *(undefined8 *)(puVar1 + 0x28) = 0;
        *(undefined8 *)(puVar1 + 0x30) = 0;
        *(undefined8 *)(puVar1 + 0x20) = 0;
        uVar3 = *(undefined8 *)(puVar1 + 0x40);
        uVar2 = *(undefined8 *)(puVar1 + 0x38);
        *(undefined8 *)(param_3 + 0x48) = *(undefined8 *)(puVar1 + 0x48);
        *(undefined8 *)(param_3 + 0x40) = uVar3;
        *(undefined8 *)(param_3 + 0x38) = uVar2;
        *(undefined8 *)(puVar1 + 0x40) = 0;
        *(undefined8 *)(puVar1 + 0x48) = 0;
        *(undefined8 *)(puVar1 + 0x38) = 0;
        puVar1 = puVar1 + 0x50;
        param_3 = param_3 + 0x50;
      } while (puVar1 != param_2);
      do {
        func_0x000109a1ac18(param_1);
        param_1 = param_1 + 0x50;
      } while (param_1 != param_2);
    }
    return;
  }
  __Znwm((long)param_1 * 0x50);
  return;
}



/* Entry: 109d2f168; end: 109d2f2bf;  */

long * FUN_109d2f168(long *param_1,long *param_2,long *param_3,undefined8 param_4)

{
  undefined4 uVar1;
  long *plVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  long *plStack_68;
  long *plStack_60;
  long *plStack_58;
  long *plStack_50;
  long *plStack_48;
  
  lVar6 = param_1[1] - *param_1;
  uVar4 = (lVar6 >> 3) * 0x2e8ba2e8ba2e8ba3 + 1;
  if (uVar4 < 0x2e8ba2e8ba2e8bb) {
    lVar3 = param_1[2] - *param_1 >> 3;
    uVar5 = lVar3 * 0x5d1745d1745d1746;
    if (uVar5 < uVar4 || uVar5 - uVar4 == 0) {
      uVar5 = uVar4;
    }
    if (0x1745d1745d1745c < (ulong)(lVar3 * 0x2e8ba2e8ba2e8ba3)) {
      uVar5 = 0x2e8ba2e8ba2e8ba;
    }
    plStack_48 = param_1;
    if (uVar5 == 0) {
      plVar2 = (long *)0x0;
    }
    else {
      plVar2 = param_1;
      func_0x000109378aac();
    }
    lVar6 = (long)plVar2 + lVar6;
    plStack_50 = plVar2 + uVar5 * 0xb;
    plStack_68 = plVar2;
    plStack_60 = (long *)lVar6;
    plStack_58 = (long *)lVar6;
    FUN_109d2f2c0(lVar6,param_2,param_3,param_4);
    plStack_58 = (long *)(lVar6 + 0x58);
    lVar6 = lVar6 + (*param_1 - param_1[1]);
    func_0x000109378f10(param_1,*param_1,param_1[1],lVar6);
    plVar2 = plStack_58;
    plStack_68 = (long *)*param_1;
    *param_1 = lVar6;
    lVar6 = param_1[2];
    param_1[2] = (long)plStack_50;
    param_1[1] = (long)plStack_58;
    plStack_60 = plStack_68;
    plStack_58 = plStack_68;
    plStack_50 = (long *)lVar6;
    func_0x0001056754bc(&plStack_68);
    return plVar2;
  }
  func_0x000109378a98();
  uVar1 = (undefined4)param_4;
  func_0x0001056754bc(&plStack_68);
  __Unwind_Resume();
  if (*(char *)((long)param_2 + 0x17) < '\0') {
    func_0x000107c3192c(param_1,*param_2,param_2[1]);
  }
  else {
    lVar3 = param_2[1];
    lVar6 = *param_2;
    param_1[2] = param_2[2];
    param_1[1] = lVar3;
    *param_1 = lVar6;
  }
  lVar6 = *param_3;
  param_1[4] = param_3[1];
  param_1[3] = lVar6;
  *(undefined4 *)(param_1 + 5) = uVar1;
  *(undefined8 *)((long)param_1 + 0x2c) = 0;
  *(undefined1 *)(param_1 + 7) = 0;
  *(undefined1 *)(param_1 + 10) = 0;
  return param_1;
}



/* Entry: 109d2f2c0; end: 109d2f333;  */

undefined8 *
FUN_109d2f2c0(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined4 param_4)

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
  uVar1 = *param_3;
  param_1[4] = param_3[1];
  param_1[3] = uVar1;
  *(undefined4 *)(param_1 + 5) = param_4;
  *(undefined8 *)((long)param_1 + 0x2c) = 0;
  *(undefined1 *)(param_1 + 7) = 0;
  *(undefined1 *)(param_1 + 10) = 0;
  return param_1;
}



/* Entry: 109d2f334; end: 109d2f477;  */

undefined8 * FUN_109d2f334(undefined8 *param_1,undefined8 *param_2)

{
  long *plVar1;
  ulong uVar2;
  undefined **ppuStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined4 uStack_48;
  
  param_1[4] = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  param_1[1] = 0;
  *param_1 = &PTR_FUN_110b3fa18;
  FUN_109d2e134(param_1 + 5);
  param_1[0x1e] = &PTR_DAT_110d9b330;
  param_1[0x1f] = 0;
  param_1[0x20] = &DAT_11383d918;
  param_1[0x21] = &DAT_11383d918;
  param_1[0x23] = param_1 + 0x20;
  *(undefined4 *)(param_1 + 0x22) = 0;
  param_1[0x24] = param_1 + 0x21;
  ppuStack_60 = &PTR_DAT_110b20db0;
  uStack_58 = 0;
  puStack_50 = &DAT_11383d918;
  uStack_48 = 0;
  plVar1 = (long *)*param_2;
  (**(code **)(*plVar1 + 0x10))();
  func_0x000107c30248(&puStack_50,plVar1,0);
  uVar2 = param_1[0x1f];
  if ((uVar2 & 1) != 0) {
    uVar2 = *(ulong *)(uVar2 & 0xfffffffffffffffe);
  }
  func_0x00010b4bed68(param_1 + 0x23,uVar2,&ppuStack_60,&UNK_10e5b484d,0x14,&UNK_10f5acecd,0x1e);
  func_0x000109a1bb00(&ppuStack_60);
  return param_1;
}



/* Entry: 109d2f478; end: 109d2f4b3;  */

undefined8 * FUN_109d2f478(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110b3fa98;
  func_0x000109a21ac8(param_1 + 3);
  if (param_1[2] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  return param_1;
}



/* Entry: 109d2f4b4; end: 109d2f56f;  */

void FUN_109d2f4b4(undefined8 *param_1)

{
  ulong uVar1;
  undefined8 auStack_38 [2];
  char cStack_21;
  
  *param_1 = &PTR_DAT_110b20ff0;
  param_1[1] = 0;
  param_1[3] = 0;
  func_0x00010b4d1294(auStack_38,&PTR_PTR_1132e8228);
  func_0x000109a1cae4(param_1);
  *(undefined4 *)((long)param_1 + 0x1c) = 100;
  param_1[2] = &DAT_11383d918;
  uVar1 = param_1[1];
  if ((uVar1 & 1) != 0) {
    uVar1 = *(ulong *)(uVar1 & 0xfffffffffffffffe);
  }
  func_0x000107c3024c(param_1 + 2,auStack_38,uVar1);
  if (cStack_21 < '\0') {
    __ZdlPv(auStack_38[0]);
  }
  return;
}



/* Entry: 109d2f570; end: 109d2f577;  */

long FUN_109d2f570(long param_1)

{
  return param_1 + 0xf0;
}



/* Entry: 109d2f578; end: 109d2f5fb;  */

undefined8 * FUN_109d2f578(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110b3fa18;
  func_0x000107c3155c(param_1 + 0x1e);
  func_0x000109a1ab0c(param_1 + 5);
  *param_1 = &PTR_FUN_110b3fa98;
  func_0x000109a21ac8(param_1 + 3);
  if (param_1[2] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  return param_1;
}



/* Entry: 109d2f5fc; end: 109d2f60b;  */

void FUN_109d2f5fc(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x109d2f600);
  (*pcVar1)();
}



/* Entry: 109d2f60c; end: 109d2f6b7;  */

undefined8 * FUN_109d2f60c(undefined8 *param_1)

{
  long *plVar1;
  long lVar2;
  
  *param_1 = &PTR_FUN_110b5be10;
  plVar1 = (long *)param_1[0x17];
  if (plVar1 == param_1 + 0x14) {
    lVar2 = 0x20;
  }
  else {
    if (plVar1 == (long *)0x0) goto SUB_109d2f664;
    lVar2 = 0x28;
  }
  (**(code **)(*plVar1 + lVar2))();
SUB_109d2f664:
  *param_1 = &PTR____cxa_pure_virtual_110b5bf28;
  if (param_1[0xc] != param_1[0xb]) {
    _free();
  }
  if ((undefined8 *)param_1[8] != param_1 + 10) {
    _free();
  }
  return param_1;
}



/* Entry: 109d2f6b8; end: 109d2f727;  */

long FUN_109d2f6b8(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  if (*(char *)(param_1 + 0x10) == 'T') {
    uVar1 = 0;
  }
  else if (*(char *)(param_1 + 0x10) == '\'') {
    uVar1 = (ulong)(*(int *)(param_1 + 0x50) + 1);
  }
  else {
    uVar1 = 2;
  }
  if ((int)*(uint *)(param_1 + 0x14) < 0) {
    lVar3 = param_1 + ((ulong)*(uint *)(param_1 + 0x14) & 0x7ffffff) * -0x20;
    if ((*(ulong *)(lVar3 + -8) & 0xffffffff0) != 0) {
      uVar2 = (ulong)(uint)(*(int *)(lVar3 + -0xc) - *(int *)(lVar3 - *(ulong *)(lVar3 + -8)));
      goto LAB_109d2f718;
    }
  }
  uVar2 = 0;
LAB_109d2f718:
  return param_1 + uVar1 * -0x20 + uVar2 * -0x20 + -0x20;
}



/* Entry: 109d2f728; end: 109d2f783;  */

long FUN_109d2f728(long param_1,undefined8 param_2,ulong param_3)

{
  if ((ulong)(*(long *)(param_1 + 0x18) - *(long *)(param_1 + 0x20)) < param_3) {
    FUN_109e0560c(param_1,param_2,param_3);
  }
  else if (param_3 != 0) {
    _memcpy(*(long *)(param_1 + 0x20),param_2,param_3);
    *(ulong *)(param_1 + 0x20) = *(long *)(param_1 + 0x20) + param_3;
  }
  return param_1;
}



/* Entry: 109d2f784; end: 109d2f7bf;  */

bool FUN_109d2f784(long param_1,long param_2)

{
  if ((*(char *)(param_2 + 9) == '\x01') && (*(char *)(param_1 + 9) == '\x01')) {
    return *(char *)(param_1 + 8) != *(char *)(param_2 + 8);
  }
  return false;
}



/* Entry: 109d2f7c0; end: 109d2f7e3;  */

void FUN_109d2f7c0(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)0x10;
  __Znwm();
  *puVar1 = &PTR_DAT_110b3fb30;
  return;
}



/* Entry: 109d2f7e4; end: 109d2f7ff;  */

void FUN_109d2f7e4(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = &PTR_DAT_110b3fb30;
  return;
}



/* Entry: 109d2f800; end: 109d2f83b;  */

long FUN_109d2f800(long param_1,undefined8 param_2)

{
  func_0x000107c31948(param_2,&PTR_DAT_110b3fba0);
  param_1 = param_1 + 8;
  if ((int)param_2 == 0) {
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 109d2f83c; end: 109d2f847;  */

undefined ** FUN_109d2f83c(void)

{
  return &PTR_DAT_110b3fba0;
}



/* Entry: 109d2f848; end: 109d2f8c3;  */

void FUN_109d2f848(long *param_1,long param_2)

{
  long *plVar1;
  long lVar2;
  
  plVar1 = (long *)*param_1;
  if ((long *)param_1[1] == plVar1) {
    if (*(uint *)((long)param_1 + 0x14) != 0) {
      lVar2 = (ulong)*(uint *)((long)param_1 + 0x14) << 3;
      do {
        if (*plVar1 == param_2) {
          return;
        }
        plVar1 = plVar1 + 1;
        lVar2 = lVar2 + -8;
      } while (lVar2 != 0);
    }
  }
  else {
    FUN_109dffab0(param_1,param_2);
  }
  return;
}



/* Entry: 109d2f8c4; end: 109d2f91b;  */

undefined8 * FUN_109d2f8c4(undefined8 *param_1)

{
  long *plVar1;
  long lVar2;
  
  *param_1 = &PTR_DAT_110b5bec0;
  plVar1 = (long *)param_1[0x17];
  if (plVar1 == param_1 + 0x14) {
    lVar2 = 0x20;
  }
  else {
    if (plVar1 == (long *)0x0) goto SUB_109d2f664;
    lVar2 = 0x28;
  }
  (**(code **)(*plVar1 + lVar2))();
SUB_109d2f664:
  *param_1 = &PTR____cxa_pure_virtual_110b5bf28;
  if (param_1[0xc] != param_1[0xb]) {
    _free();
  }
  if ((undefined8 *)param_1[8] != param_1 + 10) {
    _free();
  }
  return param_1;
}



/* Entry: 109d2f91c; end: 109d2f957;  */

bool FUN_109d2f91c(long param_1,long param_2)

{
  if ((*(char *)(param_2 + 0xc) == '\x01') && (*(char *)(param_1 + 0xc) == '\x01')) {
    return *(int *)(param_1 + 8) != *(int *)(param_2 + 8);
  }
  return false;
}



/* Entry: 109d2f958; end: 109d2f97b;  */

void FUN_109d2f958(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)0x10;
  __Znwm();
  *puVar1 = &PTR_DAT_110b3fbc0;
  return;
}



/* Entry: 109d2f97c; end: 109d2f997;  */

void FUN_109d2f97c(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = &PTR_DAT_110b3fbc0;
  return;
}



/* Entry: 109d2f998; end: 109d2f9d3;  */

long FUN_109d2f998(long param_1,undefined8 param_2)

{
  func_0x000107c31948(param_2,&PTR_DAT_110b3fc30);
  param_1 = param_1 + 8;
  if ((int)param_2 == 0) {
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 109d2f9d4; end: 109d2f9df;  */

undefined ** FUN_109d2f9d4(void)

{
  return &PTR_DAT_110b3fc30;
}



/* Entry: 109d2f9e0; end: 109d2fa2f;  */

void FUN_109d2f9e0(long param_1,long param_2)

{
  if (*(char *)(param_1 + 8) == '\x01') {
    if (*(char *)(param_2 + 0x37) < '\0') {
      __ZdlPv(*(undefined8 *)(param_2 + 0x20));
    }
  }
  else if (param_2 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_2);
  return;
}



/* Entry: 109d2fa30; end: 109d2fb03;  */

void FUN_109d2fa30(undefined8 *param_1,uint *param_2,uint *param_3)

{
  undefined4 *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  uint *puStack_38;
  
  param_1[1] = 0;
  if (*(uint *)(param_1 + 2) != 0) {
    lVar2 = (ulong)*(uint *)(param_1 + 2) << 6;
    puVar1 = (undefined4 *)*param_1;
    do {
      *puVar1 = 0xffffffff;
      lVar2 = lVar2 + -0x40;
      puVar1 = puVar1 + 0x10;
    } while (lVar2 != 0);
  }
  for (; param_2 != param_3; param_2 = param_2 + 0x10) {
    if (*param_2 < 0xfffffffe) {
      func_0x000107c2af70(param_1,param_2,&puStack_38);
      *puStack_38 = *param_2;
      uVar4 = *(undefined8 *)(param_2 + 4);
      uVar3 = *(undefined8 *)(param_2 + 2);
      uVar5 = *(undefined8 *)((long)param_2 + 0x11);
      *(undefined8 *)((long)puStack_38 + 0x19) = *(undefined8 *)((long)param_2 + 0x19);
      *(undefined8 *)((long)puStack_38 + 0x11) = uVar5;
      *(undefined8 *)(puStack_38 + 4) = uVar4;
      *(undefined8 *)(puStack_38 + 2) = uVar3;
      uVar4 = *(undefined8 *)(param_2 + 0xc);
      uVar3 = *(undefined8 *)(param_2 + 10);
      *(undefined8 *)(puStack_38 + 0xe) = *(undefined8 *)(param_2 + 0xe);
      *(undefined8 *)(puStack_38 + 0xc) = uVar4;
      *(undefined8 *)(puStack_38 + 10) = uVar3;
      param_2[0xc] = 0;
      param_2[0xd] = 0;
      param_2[0xe] = 0;
      param_2[0xf] = 0;
      param_2[10] = 0;
      param_2[0xb] = 0;
      *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
      if (*(char *)((long)param_2 + 0x3f) < '\0') {
        __ZdlPv(*(undefined8 *)(param_2 + 10));
      }
    }
  }
  return;
}



/* Entry: 109d2fb04; end: 109d2fb47;  */

long FUN_109d2fb04(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x10);
  if ((lVar1 != -0x2000) && (lVar1 != -0x1000 && lVar1 != 0)) {
    FUN_109da3580(param_1);
  }
  return param_1;
}



/* Entry: 109d2fb48; end: 109d2fbf3;  */

void FUN_109d2fb48(undefined8 *param_1)

{
  int iVar1;
  
  param_1[0xe] = 0;
  param_1[0xb] = 0;
  param_1[10] = 0;
  param_1[0xd] = 0;
  param_1[0xc] = 0;
  param_1[7] = 0;
  param_1[6] = 0;
  param_1[9] = 0;
  param_1[8] = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[1] = 0;
  *param_1 = 0;
  if ((bRam00000001132fee88 & 1) == 0) {
    iVar1 = 0x132fee88;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      lRam00000001132fee80 = -0xae502812aa7333;
      if (lRam0000000113834578 != 0) {
        lRam00000001132fee80 = lRam0000000113834578;
      }
      ___cxa_guard_release(0x1132fee88);
    }
  }
  param_1[0xf] = lRam00000001132fee80;
  return;
}



/* Entry: 109d2fbf4; end: 109d2fc5f;  */

void FUN_109d2fbf4(ulong *param_1,long param_2,ulong *param_3)

{
  ulong uVar1;
  ulong *puVar2;
  
  *param_1 = param_2 << 1 & 0x1fffffffe;
  param_1[1] = 0;
  uVar1 = param_3[2];
  param_1[2] = uVar1;
  if ((uVar1 != 0xffffffffffffe000) && (uVar1 != 0xfffffffffffff000 && uVar1 != 0)) {
    puVar2 = (ulong *)(*param_3 & 0xfffffffffffffff8);
    param_1[1] = *puVar2;
    *puVar2 = (ulong)param_1;
    *param_1 = (ulong)puVar2 | param_2 << 1 & 6U;
    puVar2 = (ulong *)param_1[1];
    if (puVar2 != (ulong *)0x0) {
      *puVar2 = *puVar2 & 7 | (ulong)(param_1 + 1);
      return;
    }
  }
  return;
}



/* Entry: 109d2fc60; end: 109d2fcb3;  */

bool FUN_109d2fc60(ulong *param_1)

{
  uint uVar1;
  bool bVar2;
  
  uVar1 = (uint)param_1[1];
  if (uVar1 == 0) {
    bVar2 = true;
  }
  else if (uVar1 < 0x41) {
    bVar2 = *param_1 == 0xffffffffffffffffU >> (-(ulong)uVar1 & 0x3f);
  }
  else {
    func_0x000109df0a20();
    bVar2 = (uint)param_1 == uVar1;
  }
  return bVar2;
}



/* Entry: 109d2fcb4; end: 109d2fdf3;  */

bool FUN_109d2fcb4(undefined8 param_1,long *param_2)

{
  uint uVar1;
  int iVar2;
  bool bVar3;
  uint uVar4;
  long *plVar5;
  long lVar6;
  int iVar7;
  
  if ((param_2 == (long *)0x0) || ((char)param_2[2] != '\x10')) {
    lVar6 = *param_2;
    if (lVar6 != 0 && (*(uint *)(lVar6 + 8) & 0xfe) == 0x12) {
      plVar5 = param_2;
      FUN_109d65ff0(param_2,0);
      if ((plVar5 != (long *)0x0) && ((char)plVar5[2] == '\x10')) {
        uVar1 = *(uint *)(plVar5 + 4);
        if (0x40 < uVar1) {
          plVar5 = plVar5 + 3;
          func_0x000109df08dc(plVar5);
          return (uint)plVar5 == uVar1;
        }
        lVar6 = plVar5[3];
        goto LAB_109d2fce8;
      }
      if ((*(char *)(lVar6 + 8) == '\x12') && (iVar2 = *(int *)(lVar6 + 0x20), iVar2 != 0)) {
        iVar7 = 0;
        bVar3 = false;
        while (plVar5 = param_2, FUN_109d66314(param_2,iVar7), plVar5 != (long *)0x0) {
          if (1 < *(byte *)(plVar5 + 2) - 0xb) {
            if (*(byte *)(plVar5 + 2) != 0x10) break;
            uVar1 = *(uint *)(plVar5 + 4);
            if (uVar1 < 0x41) {
              if (plVar5[3] != 0) break;
            }
            else {
              uVar4 = (int)plVar5 + 0x18;
              func_0x000109df08dc();
              if (uVar4 != uVar1) break;
            }
            bVar3 = true;
          }
          iVar7 = iVar7 + 1;
          if (iVar2 == iVar7) {
            return bVar3;
          }
        }
      }
    }
    bVar3 = false;
  }
  else {
    uVar1 = *(uint *)(param_2 + 4);
    if (0x40 < uVar1) {
      param_2 = param_2 + 3;
      func_0x000109df08dc(param_2);
      return (uint)param_2 == uVar1;
    }
    lVar6 = param_2[3];
LAB_109d2fce8:
    bVar3 = lVar6 == 0;
  }
  return bVar3;
}



/* Entry: 109d2fdf4; end: 109d2feaf;  */

long FUN_109d2fdf4(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x10);
  if (lVar1 != param_2) {
    if ((lVar1 != -0x2000) && (lVar1 != -0x1000 && lVar1 != 0)) {
      FUN_109da3580(param_1);
    }
    *(long *)(param_1 + 0x10) = param_2;
    if (((param_2 != -0x2000) && (param_2 != -0x1000)) && (param_2 != 0)) {
      func_0x000109da33f0(param_1);
    }
  }
  return param_2;
}



/* Entry: 109d2feb0; end: 109d2ff17;  */

undefined1  [16] FUN_109d2feb0(ulong param_1,ulong param_2)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  undefined1 auVar4 [16];
  
  uVar1 = param_1;
  uVar2 = param_2;
  FUN_109d3024c();
  FUN_109d73128(param_1,param_2,1);
  lVar3 = 1L << (param_1 & 0x3f);
  auVar4._0_8_ = (lVar3 + (uVar1 + 7 >> 3)) - 1 & -lVar3;
  auVar4._8_8_ = uVar2 & 1;
  return auVar4;
}



/* Entry: 109d2ff18; end: 109d301fb;  */

ulong FUN_109d2ff18(undefined8 *param_1)

{
  uint *puVar1;
  ulong uVar2;
  
  uVar2 = param_1[1] & 0xfffffffffffffff8;
  if ((((uint)param_1[1] >> 2 & 1) == 0) || (uVar2 == 0)) {
    puVar1 = *(uint **)*param_1;
    FUN_109d69d40();
    if (0x40 < puVar1[2]) {
      puVar1 = *(uint **)puVar1;
    }
    uVar2 = *(ulong *)(*(long *)(uVar2 + 0x10) + (ulong)*puVar1 * 8);
  }
  return uVar2;
}



/* Entry: 109d301fc; end: 109d3024b;  */

void FUN_109d301fc(ulong *param_1)

{
  uint uVar1;
  ulong uVar2;
  
  uVar1 = (uint)param_1[1];
  if (uVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = 0xffffffffffffffff >> ((ulong)-uVar1 & 0x3f);
    if (0x40 < uVar1) {
      param_1 = (ulong *)(*param_1 + (ulong)((int)((ulong)uVar1 + 0x3f >> 6) - 1) * 8);
    }
  }
  *param_1 = *param_1 & uVar2;
  return;
}



/* Entry: 109d3024c; end: 109d303fb;  */

undefined1  [16] FUN_109d3024c(ulong *param_1,ulong *param_2,ulong *param_3)

{
  uint uVar1;
  code *pcVar2;
  undefined1 in_ZR;
  undefined1 in_CY;
  int iVar3;
  ulong *puVar4;
  ulong *puVar5;
  ulong uVar6;
  ulong *puVar7;
  ulong *puVar8;
  ulong unaff_x21;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  
  uVar1 = (uint)param_2[1];
  puVar7 = (ulong *)(ulong)uVar1;
  puVar4 = (ulong *)0x10;
  puVar8 = (ulong *)0x0;
  puVar5 = param_2;
  switch((ulong)puVar7 & 0xff) {
  case 0:
  case 1:
    break;
  case 2:
    puVar8 = (ulong *)0x0;
    puVar4 = (ulong *)0x20;
    break;
  case 3:
  case 10:
  case 0x49:
  case 0x79:
  case 0x9b:
  case 0xc3:
  case 0xf3:
    puVar4 = (ulong *)0x40;
    puVar8 = (ulong *)0x0;
    break;
  case 4:
    puVar4 = (ulong *)0x50;
  case 0x34:
  case 0x38:
  case 0x71:
  case 0x75:
  case 0xef:
    puVar8 = (ulong *)0x0;
    break;
  case 5:
  case 6:
    puVar8 = (ulong *)0x0;
    puVar4 = (ulong *)0x80;
    break;
  case 7:
  case 9:
  case 0xc:
  case 0xe:
  case 0x14:
  case 0xda:
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x109d30394);
    (*pcVar2)();
  case 8:
    puVar8 = (ulong *)0x0;
    puVar4 = (ulong *)(ulong)*(uint *)(param_1[0x1d] + 4);
    break;
  case 0xb:
  case 0x53:
  case 0x54:
  case 0xa5:
  case 0xa6:
  case 0xcd:
  case 0xfd:
  case 0x1c:
  case 0x43:
  case 0x50:
  case 0x80:
  case 0xa2:
  case 0xca:
  case 0xfa:
    puVar4 = (ulong *)0x2000;
code_r0x000109d30354:
    puVar8 = (ulong *)0x0;
    break;
  case 0xd:
    puVar8 = (ulong *)0x0;
    puVar4 = (ulong *)(ulong)(uVar1 >> 8);
    break;
  case 0xf:
    if ((uVar1 & 0xfe) == 0x12) {
      puVar7 = (ulong *)(ulong)*(uint *)(*(long *)param_2[2] + 8);
    }
    func_0x000109d72f9c(param_1,(ulong)puVar7 >> 8);
    puVar8 = (ulong *)0x0;
    puVar4 = (ulong *)(ulong)*(uint *)((long)param_1 + 4);
    break;
  case 0x10:
    FUN_109d73090();
    puVar8 = (ulong *)0x0;
    puVar7 = (ulong *)*param_1;
  case 0x27:
  case 100:
  case 0x8e:
  case 0xb6:
  case 0xe2:
code_r0x000109d3036c:
    puVar4 = (ulong *)((long)puVar7 << 3);
    break;
  case 0x11:
  case 0x17:
  case 0x4b:
  case 0x7b:
  case 0x9d:
  case 0xc5:
  case 0xf5:
    puVar5 = (ulong *)param_2[3];
    unaff_x21 = param_2[4];
  case 0xce:
  case 0xfe:
    puVar4 = param_1;
code_r0x000109d30360:
    FUN_109d2feb0(puVar4,puVar5);
    puVar7 = (ulong *)(unaff_x21 * (long)puVar4);
    puVar8 = puVar5;
    goto code_r0x000109d3036c;
  case 0x12:
  case 0x13:
    uVar6 = param_2[4];
    puVar8 = (ulong *)(ulong)((uVar1 & 0xff) == 0x13);
    FUN_109d3024c(param_1,param_2[3]);
    puVar4 = (ulong *)((long)param_1 * (ulong)(uint)uVar6);
    break;
  case 0x15:
    FUN_109da0310(param_2);
    FUN_109d3024c(param_1,param_2);
    puVar4 = param_1;
    puVar8 = param_2;
    break;
  case 0x16:
  case 0x24:
  case 0x36:
  case 0x4a:
  case 0x61:
  case 0x7a:
  case 0x8b:
  case 0x9c:
  case 0xb3:
  case 0xc4:
  case 0xdf:
  case 0xf4:
    goto LAB_109d303c0;
  case 0x18:
  case 0x19:
  case 0x1e:
  case 0x4c:
  case 0x4d:
  case 0x52:
  case 0x7c:
  case 0x7d:
  case 0x82:
  case 0x9e:
  case 0x9f:
  case 0xa4:
  case 0xaf:
  case 0xc6:
  case 199:
  case 0xcc:
  case 0xd7:
  case 0xf6:
  case 0xf7:
  case 0xfc:
    goto code_r0x000109d30438;
  case 0x1a:
  case 0x4e:
  case 0x7e:
  case 0xa0:
  case 200:
  case 0xf8:
    goto code_r0x000109d30460;
  case 0x1b:
  case 0x4f:
  case 0x7f:
  case 0xa1:
  case 0xc9:
  case 0xf9:
    goto code_r0x000109d3043c;
  case 0x1d:
  case 0x51:
  case 0x81:
  case 0xa3:
  case 0xcb:
  case 0xfb:
    goto code_r0x000109d30414;
  case 0x1f:
    goto code_r0x000109d30354;
  case 0x20:
  case 0x55:
  case 0x5b:
  case 0xab:
  case 0xd3:
    goto code_r0x000109d30444;
  case 0x21:
  case 0x2f:
  case 0x3b:
  case 0x56:
  case 0x6c:
  case 0x84:
  case 0x96:
  case 0xa8:
  case 0xbe:
  case 0xd0:
  case 0xea:
    goto code_r0x000109d30448;
  case 0x22:
  case 0x57:
  case 0x5a:
  case 0xa9:
  case 0xd1:
    goto code_r0x000109d30458;
  case 0x23:
  case 0x41:
  case 0x60:
  case 0x8a:
  case 0xb2:
  case 0xde:
    goto code_r0x000109d303ac;
  case 0x25:
  case 0x37:
  case 0x42:
  case 0x62:
  case 0x8c:
  case 0xb4:
  case 0xe0:
    goto code_r0x000109d303d4;
  case 0x26:
  case 0x39:
  case 0x44:
  case 0x58:
  case 99:
  case 0x8d:
  case 0xb5:
  case 0xe1:
    param_3 = param_2;
  case 0x3c:
  case 0x5d:
  case 0x85:
  case 0xae:
  case 0xd6:
  case 0xdb:
    puVar8 = (ulong *)0x10;
code_r0x000109d30410:
    puVar7 = (ulong *)(ulong)uRam0000000000000018;
code_r0x000109d30414:
    if ((uint)puVar7 < 0x41) {
code_r0x000109d3041c:
      if ((int)puVar7 == (int)param_3) {
code_r0x000109d30424:
        puVar7 = (ulong *)0x0;
      }
      else {
LAB_109d30454:
        puVar7 = (ulong *)*puVar8;
code_r0x000109d30458:
        puVar7 = (ulong *)((long)puVar7 << ((ulong)param_3 & 0x3f));
      }
LAB_109d3045c:
      *puVar8 = (ulong)puVar7;
code_r0x000109d30460:
      puVar4 = puVar8;
code_r0x000109d301fc:
      uVar1 = (uint)puVar4[1];
      puVar5 = puVar4;
      if (uVar1 == 0) {
        uVar6 = 0;
      }
      else {
        uVar6 = 0xffffffffffffffff >> ((ulong)-uVar1 & 0x3f);
        if (0x40 < uVar1) {
          puVar5 = (ulong *)(*puVar4 + (ulong)((int)((ulong)uVar1 + 0x3f >> 6) - 1) * 8);
        }
      }
      *puVar5 = *puVar5 & uVar6;
      auVar9._8_8_ = param_2;
      auVar9._0_8_ = puVar4;
      return auVar9;
    }
LAB_109d3042c:
    puVar4 = (ulong *)*puVar8;
    param_2 = (ulong *)((long)puVar7 + 0x3fU >> 6);
code_r0x000109d30438:
    FUN_109df0fe4(puVar4,param_2);
code_r0x000109d3043c:
    puVar4 = puVar8;
    puVar8 = puVar4;
code_r0x000109d30440:
    FUN_109d301fc(puVar4);
code_r0x000109d30444:
    puVar4 = puVar8;
code_r0x000109d30448:
code_r0x000109d30450:
    auVar12._8_8_ = param_2;
    auVar12._0_8_ = puVar4;
    return auVar12;
  case 0x28:
  case 0x2c:
  case 0x65:
  case 0x69:
  case 0x8f:
  case 0x93:
  case 0xb7:
  case 0xbb:
  case 0xe3:
  case 0xe7:
    goto code_r0x000109d303a4;
  case 0x29:
  case 0x66:
  case 0x90:
  case 0xad:
  case 0xb8:
  case 0xd5:
  case 0xe4:
    goto code_r0x000109d303e0;
  case 0x2a:
  case 0x67:
  case 0x91:
  case 0xb9:
  case 0xe5:
  default:
code_r0x000109d303a4:
    param_1 = (ulong *)0x10;
    puVar8 = param_2;
code_r0x000109d303ac:
    unaff_x21 = (ulong)uRam0000000000000018;
    if (uRam0000000000000018 < 0x41) {
code_r0x000109d303b8:
      puVar7 = (ulong *)*param_1;
    }
    else {
LAB_109d303c0:
      puVar4 = param_1;
      param_1 = puVar4;
code_r0x000109d303c4:
      iVar3 = (int)puVar4;
      func_0x000109df08dc();
      if (0x40 < (uint)((int)unaff_x21 - iVar3)) goto LAB_109d303e8;
code_r0x000109d303d4:
      puVar7 = (ulong *)*param_1;
code_r0x000109d303d8:
      puVar7 = (ulong *)*puVar7;
    }
    in_CY = puVar8 <= puVar7;
    in_ZR = puVar7 == puVar8;
code_r0x000109d303e0:
    if (!(bool)in_CY || (bool)in_ZR) {
      puVar8 = puVar7;
    }
LAB_109d303e8:
    auVar11._8_8_ = param_2;
    auVar11._0_8_ = puVar8;
    return auVar11;
  case 0x2b:
  case 0x68:
  case 0x92:
  case 0xba:
  case 0xe6:
    goto code_r0x000109d3038c;
  case 0x2d:
  case 0x6a:
  case 0x94:
  case 0xbc:
  case 0xe8:
    goto code_r0x000109d303d8;
  case 0x2e:
  case 0x6b:
  case 0x95:
  case 0xbd:
  case 0xe9:
    goto code_r0x000109d301fc;
  case 0x30:
  case 0x3f:
  case 0x5f:
  case 0x6d:
  case 0x88:
  case 0x97:
  case 0xb1:
  case 0xbf:
  case 0xd9:
  case 0xdd:
  case 0xeb:
    goto code_r0x000109d3041c;
  case 0x32:
  case 0x6f:
  case 0x73:
  case 0xed:
    goto code_r0x000109d303b8;
  case 0x33:
  case 0x70:
  case 0x74:
  case 0xee:
    goto code_r0x000109d30410;
  case 0x3a:
  case 0x83:
    goto code_r0x000109d30360;
  case 0x3d:
  case 0x40:
  case 0x5c:
  case 0x86:
  case 0x89:
    goto code_r0x000109d30450;
  case 0x3e:
  case 0x59:
  case 0x87:
  case 0xdc:
    goto LAB_109d30454;
  case 0x5e:
    goto code_r0x000109d30424;
  case 0xa7:
  case 0xcf:
  case 0xff:
    goto code_r0x000109d303c4;
  case 0xaa:
  case 0xd2:
    goto LAB_109d3042c;
  case 0xac:
  case 0xd4:
    goto code_r0x000109d30440;
  case 0xb0:
  case 0xd8:
    goto LAB_109d3045c;
  }
  param_2 = (ulong *)((ulong)puVar8 & 0xff);
code_r0x000109d3038c:
  auVar10._8_8_ = param_2;
  auVar10._0_8_ = puVar4;
  return auVar10;
}



/* Entry: 109d303fc; end: 109d3046f;  */

ulong * FUN_109d303fc(ulong *param_1,ulong param_2)

{
  uint uVar1;
  ulong *puVar2;
  ulong uVar3;
  
  uVar1 = (uint)param_1[1];
  if (uVar1 < 0x41) {
    if (uVar1 == (uint)param_2) {
      uVar3 = 0;
    }
    else {
      uVar3 = *param_1 << (param_2 & 0x3f);
    }
    *param_1 = uVar3;
    puVar2 = param_1;
    uVar1 = (uint)param_1[1];
    if (uVar1 == 0) {
      uVar3 = 0;
    }
    else {
      uVar3 = 0xffffffffffffffff >> ((ulong)-uVar1 & 0x3f);
      if (0x40 < uVar1) {
        param_1 = (ulong *)(*param_1 + (ulong)((int)((ulong)uVar1 + 0x3f >> 6) - 1) * 8);
      }
    }
    *param_1 = *param_1 & uVar3;
    return puVar2;
  }
  FUN_109df0fe4(*param_1,(ulong)uVar1 + 0x3f >> 6);
  FUN_109d301fc(param_1);
  return param_1;
}



/* Entry: 109d30470; end: 109d30543;  */

void FUN_109d30470(ulong *param_1,uint param_2)

{
  ulong uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  ulong uVar6;
  ulong uVar7;
  ulong *puVar8;
  ulong uVar9;
  long lVar10;
  uint uVar11;
  ulong uVar12;
  
  uVar2 = (uint)param_1[1];
  if (uVar2 < 0x41) {
    uVar3 = 0x3f;
    if (uVar2 != param_2) {
      uVar3 = param_2;
    }
    *param_1 = ((long)(*param_1 << (-(ulong)uVar2 & 0x3f)) >> (-(ulong)uVar2 & 0x3f)) >>
               ((ulong)uVar3 & 0x3f);
  }
  else {
    if (param_2 == 0) {
      return;
    }
    uVar2 = (uint)param_1[1];
    puVar8 = param_1;
    if (0x40 < uVar2) {
      puVar8 = (ulong *)(*param_1 + (ulong)(uVar2 - 1 >> 6) * 8);
    }
    uVar6 = *puVar8;
    uVar3 = param_2 >> 6;
    iVar5 = (int)((ulong)uVar2 + 0x3f >> 6);
    uVar4 = iVar5 - (param_2 >> 6);
    if (uVar4 != 0) {
      uVar7 = (ulong)(iVar5 - 1);
      *(long *)(*param_1 + uVar7 * 8) =
           (*(long *)(*param_1 + uVar7 * 8) << ((ulong)-uVar2 & 0x3f)) >> ((ulong)-uVar2 & 0x3f);
      param_2 = param_2 & 0x3f;
      if (param_2 == 0) {
        _memmove(*param_1,*param_1 + (ulong)uVar3 * 8,uVar4 * 8);
      }
      else {
        uVar9 = (ulong)(uVar4 - 1);
        if (uVar4 - 1 == 0) {
          uVar9 = 0;
        }
        else {
          lVar10 = 0;
          uVar11 = uVar3;
          do {
            uVar12 = *param_1;
            uVar1 = (ulong)uVar11;
            uVar11 = uVar11 + 1;
            *(ulong *)(uVar12 + lVar10) =
                 *(long *)(uVar12 + (ulong)uVar11 * 8) << ((ulong)(0x40 - param_2) & 0x3f) |
                 *(ulong *)(uVar12 + uVar1 * 8) >> param_2;
            lVar10 = lVar10 + 8;
          } while (uVar9 << 3 != lVar10);
        }
        *(ulong *)(*param_1 + uVar9 * 8) = *(ulong *)(*param_1 + uVar7 * 8) >> param_2;
        *(long *)(*param_1 + uVar9 * 8) = (*(long *)(*param_1 + uVar9 * 8) << param_2) >> param_2;
      }
    }
    _memset(*param_1 + (ulong)uVar4 * 8,-(uint)((uVar6 & 1L << ((ulong)(uVar2 - 1) & 0x3f)) != 0),
            uVar3 << 3);
  }
  uVar2 = (uint)param_1[1];
  if (uVar2 == 0) {
    uVar6 = 0;
  }
  else {
    uVar6 = 0xffffffffffffffff >> ((ulong)-uVar2 & 0x3f);
    if (0x40 < uVar2) {
      param_1 = (ulong *)(*param_1 + (ulong)((int)((ulong)uVar2 + 0x3f >> 6) - 1) * 8);
    }
  }
  *param_1 = *param_1 & uVar6;
  return;
}



/* Entry: 109d30544; end: 109d3075b;  */

undefined8 * FUN_109d30544(undefined8 *param_1)

{
  long *plVar1;
  long lVar2;
  
  *param_1 = &PTR_FUN_110b3fcb8;
  plVar1 = (long *)param_1[0x4a];
  if (plVar1 == param_1 + 0x47) {
    lVar2 = 0x20;
  }
  else {
    if (plVar1 == (long *)0x0) goto LAB_109d3058c;
    lVar2 = 0x28;
  }
  (**(code **)(*plVar1 + lVar2))();
LAB_109d3058c:
  param_1[0x13] = &PTR_DAT_110b3fd68;
  if ((undefined8 *)param_1[0x15] != param_1 + 0x17) {
    _free();
  }
  *param_1 = &PTR____cxa_pure_virtual_110b5bf28;
  if (param_1[0xc] != param_1[0xb]) {
    _free();
  }
  if ((undefined8 *)param_1[8] != param_1 + 10) {
    _free();
  }
  return param_1;
}



/* Entry: 109d3075c; end: 109d3087b;  */

undefined4
FUN_109d3075c(ulong param_1,undefined2 param_2,undefined8 param_3,ulong param_4,undefined8 param_5,
             ulong param_6)

{
  ulong uVar1;
  long *plVar2;
  undefined4 uVar3;
  ulong uVar4;
  ulong *puVar5;
  undefined4 uStack_94;
  undefined *apuStack_90 [2];
  undefined8 uStack_80;
  ulong uStack_78;
  undefined2 uStack_70;
  undefined **appuStack_68 [2];
  undefined *puStack_58;
  undefined2 uStack_48;
  
  uStack_94 = 0;
  if (*(long *)(*(long *)(param_1 + 0xa0) + 0x18) != 0) {
    param_4 = param_6;
    param_3 = param_5;
  }
  uVar4 = (ulong)*(uint *)(param_1 + 0xb0);
  uVar1 = param_1;
  if (*(uint *)(param_1 + 0xb0) != 0) {
    puVar5 = *(ulong **)(param_1 + 0xa8);
    do {
      if (puVar5[1] == param_4) {
        if (param_4 != 0) {
          uVar1 = *puVar5;
          _memcmp(uVar1,param_3,param_4);
          if ((int)uVar1 != 0) goto LAB_109d307c4;
        }
        uStack_94 = (undefined4)puVar5[5];
        uVar3 = uStack_94;
        goto LAB_109d3083c;
      }
LAB_109d307c4:
      puVar5 = puVar5 + 6;
      uVar4 = uVar4 - 1;
    } while (uVar4 != 0);
  }
  uStack_70 = 0x503;
  apuStack_90[0] = &UNK_10f5ad52f;
  appuStack_68[0] = apuStack_90;
  puStack_58 = &UNK_10f5ad54a;
  uStack_48 = 0x302;
  uStack_80 = param_3;
  uStack_78 = param_4;
  func_0x000107c2b034();
  uVar4 = param_1;
  FUN_109df35b4(param_1,appuStack_68,0,0,uVar1);
  if ((uVar4 & 1) == 0) {
    uVar3 = 0;
LAB_109d3083c:
    *(undefined4 *)(param_1 + 0x80) = uVar3;
    *(undefined2 *)(param_1 + 0xc) = param_2;
    plVar2 = *(long **)(param_1 + 0x250);
    if (plVar2 == (long *)0x0) {
      func_0x000104c501e4();
      uVar3 = 2;
      if (*(long *)(plVar2[0x14] + 0x18) == 0) {
        uVar3 = 3;
      }
      return uVar3;
    }
    (**(code **)(*plVar2 + 0x30))(plVar2,&uStack_94);
    uVar3 = 0;
  }
  else {
    uVar3 = 1;
  }
  return uVar3;
}



/* Entry: 109d3087c; end: 109d30893;  */

undefined4 FUN_109d3087c(long param_1)

{
  undefined4 uVar1;
  
  uVar1 = 2;
  if (*(long *)(*(long *)(param_1 + 0xa0) + 0x18) == 0) {
    uVar1 = 3;
  }
  return uVar1;
}



/* Entry: 109d30894; end: 109d3090f;  */

void FUN_109d30894(undefined8 *param_1)

{
  long *plVar1;
  long lVar2;
  
  *param_1 = &PTR_FUN_110b3fcb8;
  plVar1 = (long *)param_1[0x4a];
  if (plVar1 == param_1 + 0x47) {
    lVar2 = 0x20;
  }
  else {
    if (plVar1 == (long *)0x0) goto LAB_109d308dc;
    lVar2 = 0x28;
  }
  (**(code **)(*plVar1 + lVar2))();
LAB_109d308dc:
  param_1[0x13] = &PTR_DAT_110b3fd68;
  if ((undefined8 *)param_1[0x15] != param_1 + 0x17) {
    _free();
  }
  func_0x000109d2f664(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 109d30910; end: 109d3092b;  */

ulong FUN_109d30910(long *param_1)

{
  long *plVar1;
  ushort uVar2;
  uint uVar3;
  long *plVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  long *plVar4;
  
  plVar1 = param_1 + 0x13;
  lVar8 = param_1[3];
  if (lVar8 == 0) {
    plVar5 = plVar1;
    (**(code **)(*plVar1 + 0x10))();
    if ((uint)plVar5 == 0) {
      uVar9 = 0;
    }
    else {
      uVar10 = 0;
      uVar9 = 0;
      do {
        uVar7 = uVar10;
        (**(code **)(*plVar1 + 0x18))(plVar1);
        if (uVar9 <= uVar7 + 8) {
          uVar9 = uVar7 + 8;
        }
        uVar3 = (int)uVar10 + 1;
        uVar10 = (ulong)uVar3;
      } while ((uint)plVar5 != uVar3);
    }
  }
  else {
    uVar9 = 0xf;
    if (lVar8 != 1) {
      uVar9 = lVar8 + 0xf;
    }
    plVar5 = plVar1;
    (**(code **)(*plVar1 + 0x10))();
    if ((uint)plVar5 != 0) {
      uVar10 = 0;
      do {
        uVar7 = uVar10;
        (**(code **)(*plVar1 + 0x18))(plVar1);
        uVar6 = uVar10;
        (**(code **)(*plVar1 + 0x20))(plVar1);
        uVar2 = *(ushort *)((long)param_1 + 10) >> 3;
        uVar3 = uVar2 & 3;
        if ((uVar2 & 3) == 0) {
          plVar4 = param_1;
          (**(code **)(*param_1 + 8))();
          uVar3 = (uint)plVar4;
        }
        if ((uVar3 != 1 || uVar7 != 0) || uVar6 != 0) {
          uVar6 = 0xf;
          if (uVar7 != 0) {
            uVar6 = uVar7 + 8;
          }
          if (uVar9 <= uVar6) {
            uVar9 = uVar6;
          }
        }
        uVar3 = (int)uVar10 + 1;
        uVar10 = (ulong)uVar3;
      } while ((uint)plVar5 != uVar3);
    }
  }
  return uVar9;
}



/* Entry: 109d3092c; end: 109d3099b;  */

void FUN_109d3092c(long param_1,undefined8 param_2,int param_3)

{
  undefined **ppuStack_20;
  int iStack_18;
  undefined1 uStack_14;
  
  if (param_3 == 0) {
    if ((*(char *)(param_1 + 0x94) != '\x01') ||
       (iStack_18 = *(int *)(param_1 + 0x80), *(int *)(param_1 + 0x90) == iStack_18)) {
      return;
    }
  }
  else {
    iStack_18 = *(int *)(param_1 + 0x80);
  }
  ppuStack_20 = &PTR_DAT_110b3fdd0;
  uStack_14 = 1;
  FUN_109df4440(param_1 + 0x98,param_1,&ppuStack_20,param_1 + 0x88,param_2);
  return;
}



/* Entry: 109d3099c; end: 109d309c3;  */

void FUN_109d3099c(long param_1)

{
  undefined4 uVar1;
  
  if (*(char *)(param_1 + 0x94) == '\x01') {
    uVar1 = *(undefined4 *)(param_1 + 0x90);
  }
  else {
    uVar1 = 0;
  }
  *(undefined4 *)(param_1 + 0x80) = uVar1;
  return;
}



/* Entry: 109d309c4; end: 109d30a03;  */

void FUN_109d309c4(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110b3fd68;
  if ((undefined8 *)param_1[2] != param_1 + 4) {
    _free();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 109d30a04; end: 109d30a7b;  */

undefined4 FUN_109d30a04(long param_1)

{
  return *(undefined4 *)(param_1 + 0x18);
}



/* Entry: 109d30a7c; end: 109d30b6b;  */

void FUN_109d30a7c(long *param_1,undefined8 param_2)

{
  uint uVar1;
  long *plVar2;
  long *plVar3;
  ulong uVar4;
  ulong uVar5;
  
  if (*(long *)(param_1[1] + 0x18) == 0) {
    plVar2 = param_1;
    (**(code **)(*param_1 + 0x10))();
    if ((uint)plVar2 != 0) {
      uVar5 = 0;
      do {
        plVar3 = param_1;
        uVar4 = uVar5;
        (**(code **)(*param_1 + 0x18))(param_1,uVar5);
        func_0x000109d30b00(param_2,plVar3,uVar4);
        uVar1 = (int)uVar5 + 1;
        uVar5 = (ulong)uVar1;
      } while ((uint)plVar2 != uVar1);
    }
  }
  return;
}



/* Entry: 109d30b6c; end: 109d30bb7;  */

undefined8 * FUN_109d30b6c(undefined8 *param_1)

{
  param_1[3] = &PTR_FUN_110b401b0;
  if (*(char *)((long)param_1 + 0x37) < '\0') {
    __ZdlPv(param_1[4]);
  }
  if (*(char *)((long)param_1 + 0x17) < '\0') {
    __ZdlPv(*param_1);
  }
  return param_1;
}


