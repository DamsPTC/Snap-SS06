/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10a69044c; end: 10a6904fb;  */

long FUN_10a69044c(long param_1,uint param_2)

{
  uint uVar1;
  ulong uVar2;
  uint uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  long *plVar8;
  long extraout_x12;
  ulong uVar9;
  
  uVar4 = *(ulong *)(param_1 + 0x4b8);
  if (uVar4 != 0) {
    uVar5 = (ulong)param_2;
    uVar6 = uVar4 - 1;
    uVar3 = (uint)uVar4;
    if ((uVar4 & uVar6) == 0) {
      uVar7 = (ulong)(uVar3 - 1 & param_2);
    }
    else {
      uVar7 = uVar5;
      if (uVar4 <= uVar5) {
        uVar1 = 0;
        if (uVar3 != 0) {
          uVar1 = param_2 / uVar3;
        }
        uVar7 = (ulong)(param_2 - uVar1 * uVar3);
      }
    }
    plVar8 = *(long **)(*(long *)(param_1 + 0x4b0) + uVar7 * 8);
    if (plVar8 != (long *)0x0) {
      do {
        while( true ) {
          plVar8 = (long *)*plVar8;
          if (plVar8 == (long *)0x0) goto LAB_10a6904e4;
          uVar9 = plVar8[1];
          if (uVar9 != uVar5) break;
          if (*(uint *)(plVar8 + 2) == param_2) goto LAB_10a6904f0;
        }
        if ((uVar4 & uVar6) == 0) {
          uVar9 = uVar9 & uVar6;
        }
        else if (uVar4 <= uVar9) {
          uVar2 = 0;
          if (uVar4 != 0) {
            uVar2 = uVar9 / uVar4;
          }
          uVar9 = uVar9 - uVar2 * uVar4;
        }
      } while (uVar9 == uVar7);
    }
  }
LAB_10a6904e4:
  FUN_10a00946c(&UNK_10f66c34d);
  plVar8 = (long *)extraout_x12;
LAB_10a6904f0:
  return (long)plVar8 + 0x14;
}



/* Entry: 10a6904fc; end: 10a69062f;  */

void FUN_10a6904fc(long param_1,long *param_2)

{
  char cVar1;
  bool bVar2;
  long **pplVar3;
  long *plVar4;
  long lVar5;
  long *plVar6;
  undefined **ppuVar7;
  long **pplVar8;
  long lVar9;
  undefined8 *extraout_x8;
  long *plVar10;
  long *plVar11;
  long lVar12;
  long *aplStack_90 [2];
  char cStack_79;
  code *pcStack_78;
  undefined **ppuStack_70;
  long lStack_68;
  long lStack_38;
  
  pplVar3 = aplStack_90;
  pplVar8 = aplStack_90;
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcStack_78 = FUN_10a6a7260;
  ppuStack_70 = &PTR_FUN_110c0d290;
  lStack_68 = param_1;
  FUN_10a65cb90(param_2,&PTR_DAT_110c0c9d0,&pcStack_78,0);
  (*(code *)*ppuStack_70)(&ppuStack_70);
  ppuVar7 = &PTR_DAT_110c093b8;
  lVar9 = 0;
  (**(code **)(*param_2 + 0x38))();
  *(int *)(param_1 + 0xb8) = (int)param_2;
  if ((int)param_2 != 0) {
    lVar12 = *(long *)(param_1 + 0x60);
    ppuVar7 = (undefined **)&UNK_10f66bacc;
    func_0x000107c2b054();
    param_2 = (long *)pplVar3;
    if (lVar12 != 0) {
      param_2 = *(long **)(lVar12 + 0x8d8);
      FUN_10a76c080();
      ppuVar7 = (undefined **)pplVar8;
    }
    if (cStack_79 < '\0') {
      param_2 = aplStack_90[0];
      __ZdlPv();
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_38) {
    ___stack_chk_fail();
    if (cStack_79 < '\0') {
      __ZdlPv(aplStack_90[0]);
    }
    __Unwind_Resume();
    plVar6 = param_2 + 0xc;
    if (lVar9 != 0) {
      plVar6 = (long *)(lVar9 + 0xb0);
    }
    lVar9 = *plVar6;
    plVar6 = param_2;
    func_0x00010a0fda30();
    plVar4 = (long *)0xe0;
    __Znwm();
    plVar10 = plVar4 + 1;
    plVar4[2] = 0;
    *plVar10 = 0;
    *plVar4 = (long)&PTR_DAT_110c0d2b8;
    plVar11 = plVar4 + 3;
    *plVar11 = (long)&PTR_FUN_110c0e430;
    *(undefined1 *)(plVar4 + 4) = 0;
    plVar4[6] = 0;
    plVar4[7] = 0;
    plVar4[0xb] = (long)plVar6;
    plVar4[0xc] = (long)ppuVar7;
    *(undefined1 *)(plVar4 + 0xd) = 0;
    *(undefined8 *)((long)plVar4 + 0x6c) = 0x800000000;
    plVar4[0xf] = lVar9;
    *(undefined1 *)(plVar4 + 0x10) = 0;
    *(undefined1 *)(plVar4 + 0x14) = 0;
    *(undefined1 *)(plVar4 + 0x15) = 1;
    plVar4[0x16] = 0;
    plVar4[0x17] = 0;
    plVar4[5] = (long)&PTR_FUN_110c0e4c8;
    plVar4[10] = (long)&PTR_FUN_110c0e520;
    plVar4[0x19] = 0;
    plVar4[0x18] = 0;
    plVar4[0x1b] = 0;
    plVar4[0x1a] = 0;
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar2) {
        *plVar10 = *plVar10 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    plVar6 = plVar4 + 2;
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar2) {
        *plVar6 = *plVar6 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    plVar4[8] = (long)plVar11;
    plVar4[9] = (long)plVar4;
    do {
      lVar9 = *plVar10;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar2) {
        *plVar10 = lVar9 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar9 == 0) {
      (**(code **)(*plVar4 + 0x10))(plVar4);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
    }
    *(undefined4 *)((long)plVar4 + 0x6c) = *(undefined4 *)((long)param_2 + 0x54);
    lVar12 = param_2[0x14];
    lVar9 = param_2[0x13];
    if (param_2[0x14] != 0) {
      plVar6 = (long *)(param_2[0x14] + 0x10);
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
        if (bVar2) {
          *plVar6 = *plVar6 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    lVar5 = plVar4[0x17];
    plVar4[0x17] = lVar12;
    plVar4[0x16] = lVar9;
    if (lVar5 != 0) {
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
    plVar6 = (long *)param_2[0x16];
    if (plVar6 == (long *)0x0) {
      plVar6 = (long *)0x0;
    }
    else {
      __ZNSt3__119__shared_weak_count4lockEv();
    }
    FUN_10a68a860();
    if (plVar6 != (long *)0x0) {
      plVar10 = plVar6 + 1;
      do {
        lVar9 = *plVar10;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar10,0x10);
        if (bVar2) {
          *plVar10 = lVar9 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (lVar9 == 0) {
        (**(code **)(*plVar6 + 0x10))(plVar6);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
      }
    }
    extraout_x8[1] = plVar4;
    *extraout_x8 = plVar11;
    return;
  }
  return;
}



/* Entry: 10a690630; end: 10a69083b;  */

void FUN_10a690630(undefined8 *param_1,long param_2,long param_3,long param_4)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  long *plVar6;
  long *plVar7;
  long lVar8;
  long lVar9;
  
  plVar4 = (long *)(param_2 + 0x60);
  if (param_4 != 0) {
    plVar4 = (long *)(param_4 + 0xb0);
  }
  lVar9 = *plVar4;
  lVar8 = param_2;
  func_0x00010a0fda30();
  plVar4 = (long *)0xe0;
  __Znwm();
  plVar6 = plVar4 + 1;
  plVar4[2] = 0;
  *plVar6 = 0;
  *plVar4 = (long)&PTR_DAT_110c0d2b8;
  plVar7 = plVar4 + 3;
  *plVar7 = (long)&PTR_FUN_110c0e430;
  *(undefined1 *)(plVar4 + 4) = 0;
  plVar4[6] = 0;
  plVar4[7] = 0;
  plVar4[0xb] = lVar8;
  plVar4[0xc] = param_3;
  *(undefined1 *)(plVar4 + 0xd) = 0;
  *(undefined8 *)((long)plVar4 + 0x6c) = 0x800000000;
  plVar4[0xf] = lVar9;
  *(undefined1 *)(plVar4 + 0x10) = 0;
  *(undefined1 *)(plVar4 + 0x14) = 0;
  *(undefined1 *)(plVar4 + 0x15) = 1;
  plVar4[0x16] = 0;
  plVar4[0x17] = 0;
  plVar4[5] = (long)&PTR_FUN_110c0e4c8;
  plVar4[10] = (long)&PTR_FUN_110c0e520;
  plVar4[0x19] = 0;
  plVar4[0x18] = 0;
  plVar4[0x1b] = 0;
  plVar4[0x1a] = 0;
  do {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
    if (bVar3) {
      *plVar6 = *plVar6 + 1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  plVar1 = plVar4 + 2;
  do {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar3) {
      *plVar1 = *plVar1 + 1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  plVar4[8] = (long)plVar7;
  plVar4[9] = (long)plVar4;
  do {
    lVar8 = *plVar6;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
    if (bVar3) {
      *plVar6 = lVar8 + -1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (lVar8 == 0) {
    (**(code **)(*plVar4 + 0x10))(plVar4);
    __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
  }
  *(undefined4 *)((long)plVar4 + 0x6c) = *(undefined4 *)(param_2 + 0x54);
  lVar9 = *(long *)(param_2 + 0xa0);
  lVar8 = *(long *)(param_2 + 0x98);
  if (*(long *)(param_2 + 0xa0) != 0) {
    plVar6 = (long *)(*(long *)(param_2 + 0xa0) + 0x10);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar3) {
        *plVar6 = *plVar6 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  lVar5 = plVar4[0x17];
  plVar4[0x17] = lVar9;
  plVar4[0x16] = lVar8;
  if (lVar5 != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  plVar6 = *(long **)(param_2 + 0xb0);
  if (plVar6 == (long *)0x0) {
    plVar6 = (long *)0x0;
  }
  else {
    __ZNSt3__119__shared_weak_count4lockEv();
  }
  FUN_10a68a860();
  if (plVar6 != (long *)0x0) {
    plVar1 = plVar6 + 1;
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
      (**(code **)(*plVar6 + 0x10))(plVar6);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
    }
  }
  param_1[1] = plVar4;
  *param_1 = plVar7;
  return;
}



/* Entry: 10a69083c; end: 10a690bd7;  */

void FUN_10a69083c(long *param_1,code **param_2)

{
  undefined **ppuVar1;
  ulong uVar2;
  uint uVar3;
  char cVar4;
  ulong uVar5;
  code *pcVar6;
  bool bVar7;
  long *plVar8;
  long *plVar9;
  undefined ***pppuVar10;
  undefined ***pppuVar11;
  undefined **ppuVar12;
  code **ppcVar13;
  undefined8 *extraout_x8;
  long lVar14;
  undefined *puVar15;
  long *plVar16;
  ulong uVar17;
  long *plVar18;
  long *plVar19;
  long lVar20;
  undefined **ppuVar21;
  code *pcStack_138;
  undefined **ppuStack_130;
  long *plStack_128;
  long lStack_f8;
  long *plStack_f0;
  long *plStack_e8;
  undefined1 *puStack_e0;
  code *pcStack_d8;
  long lStack_d0;
  long *plStack_c8;
  long lStack_c0;
  undefined8 uStack_b8;
  undefined4 uStack_b0;
  long lStack_a0;
  long *plStack_98;
  code *pcStack_88;
  undefined **ppuStack_80;
  undefined1 *puStack_78;
  long lStack_48;
  
  plVar9 = &lStack_d0;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar8 = (long *)param_1[0x16];
  if ((plVar8 == (long *)0x0) || (__ZNSt3__119__shared_weak_count4lockEv(), plVar8 == (long *)0x0))
  {
LAB_10a6908bc:
    plVar8 = (long *)param_1[0x14];
    if (plVar8 != (long *)0x0) {
      lVar14 = param_1[0x13];
      plVar18 = plVar8 + 2;
      do {
        cVar4 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(plVar18,0x10);
        if (bVar7) {
          *plVar18 = *plVar18 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      plVar18 = plVar8;
      __ZNSt3__119__shared_weak_count4lockEv();
      plStack_c8 = plVar18;
      if (plVar18 != (long *)0x0) {
        lStack_d0 = lVar14;
        __ZNSt3__119__shared_weak_count14__release_weakEv();
        if (lVar14 != 0) {
          lVar20 = *(long *)(lVar14 + 0x158);
          if (lVar20 != lVar14 + 0x150) {
LAB_10a690920:
            if (*(long *)(lVar20 + 0x10) == 0) goto LAB_10a69093c;
            plVar16 = (long *)(*(long *)(lVar20 + 0x10) + 0xb0);
            param_2 = (code **)0xc2c0ac5e4c065340;
            (**(code **)(*plVar16 + 0x18))(plVar16,0xc2c0ac5e4c065340);
            if (plVar16 == (long *)0x0) goto LAB_10a69093c;
            FUN_10a2d1b5c(&lStack_a0);
            if (plStack_98 != (long *)0x0) {
              plVar8 = plStack_98 + 2;
              do {
                cVar4 = '\x01';
                bVar7 = (bool)ExclusiveMonitorPass(plVar8,0x10);
                if (bVar7) {
                  *plVar8 = *plVar8 + 1;
                  cVar4 = ExclusiveMonitorsStatus();
                }
              } while (cVar4 != '\0');
            }
            plVar8 = (long *)param_1[0x16];
            param_1[0x16] = (long)plStack_98;
            param_1[0x15] = lStack_a0;
            if (plVar8 != (long *)0x0) {
              __ZNSt3__119__shared_weak_count14__release_weakEv();
            }
            plVar18 = plStack_c8;
            if (plStack_98 != (long *)0x0) {
              plVar19 = plStack_98 + 1;
              do {
                lVar14 = *plVar19;
                cVar4 = '\x01';
                bVar7 = (bool)ExclusiveMonitorPass(plVar19,0x10);
                if (bVar7) {
                  *plVar19 = lVar14 + -1;
                  cVar4 = ExclusiveMonitorsStatus();
                }
              } while (cVar4 != '\0');
              if (lVar14 == 0) {
                (**(code **)(*plStack_98 + 0x10))(plStack_98);
                __ZNSt3__119__shared_weak_count14__release_weakEv();
                plVar18 = plStack_c8;
                plVar8 = plStack_98;
              }
            }
            goto joined_r0x00010a69094c;
          }
        }
        plVar16 = (long *)0x0;
        goto LAB_10a690958;
      }
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar8);
    }
    goto LAB_10a690a04;
  }
  plVar16 = (long *)param_1[0x15];
  plVar18 = plVar8 + 1;
  do {
    lVar14 = *plVar18;
    cVar4 = '\x01';
    bVar7 = (bool)ExclusiveMonitorPass(plVar18,0x10);
    if (bVar7) {
      *plVar18 = lVar14 + -1;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  if (lVar14 == 0) {
    (**(code **)(*plVar8 + 0x10))(plVar8);
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  if (plVar16 == (long *)0x0) goto LAB_10a6908bc;
  goto LAB_10a69098c;
LAB_10a69093c:
  lVar20 = *(long *)(lVar20 + 8);
  if (lVar20 == lVar14 + 0x150) goto code_r0x00010a690948;
  goto LAB_10a690920;
code_r0x00010a690948:
  plVar16 = (long *)0x0;
  plVar8 = (long *)0x0;
joined_r0x00010a69094c:
  if (plVar18 != (long *)0x0) {
LAB_10a690958:
    plVar19 = plVar18 + 1;
    do {
      lVar14 = *plVar19;
      cVar4 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar19,0x10);
      if (bVar7) {
        *plVar19 = lVar14 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar14 == 0) {
      (**(code **)(*plVar18 + 0x10))(plVar18);
      __ZNSt3__119__shared_weak_count14__release_weakEv();
      plVar8 = plVar18;
    }
  }
  if (plVar16 == (long *)0x0) {
LAB_10a690a04:
    plStack_c8 = (long *)0x0;
    lStack_d0 = 0;
    uStack_b8 = 0;
    lStack_c0 = 0;
    uStack_b0 = 0x3f800000;
    pcStack_88 = FUN_10a6a7428;
    ppuStack_80 = &PTR_FUN_110c0d2f8;
    param_2 = &pcStack_88;
    puStack_78 = (undefined1 *)&lStack_d0;
    FUN_10a2f0f14(*(long *)(*(long *)(param_1[0xc] + 0x830) + 0x18) + 0x50,param_2);
    (*(code *)*ppuStack_80)(&ppuStack_80);
    for (plVar8 = (long *)lStack_c0; plVar8 != (long *)0x0; plVar8 = (long *)*plVar8) {
      uVar17 = plVar8[4] - plVar8[3] >> 3;
      uVar5 = uVar17 - 1;
      uVar2 = uVar5;
      if ((uVar17 == 0 || uVar5 == 0) || (int)param_1[0x17] != 2) {
        uVar2 = 1;
      }
      if ((int)param_1[0x17] != 1) {
        uVar5 = 0;
      }
      for (; uVar5 < uVar17; uVar5 = uVar5 + uVar2) {
        lVar14 = plVar8[3];
        if ((ulong)(plVar8[4] - lVar14 >> 3) <= uVar5) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x10a690b10);
          (*pcVar6)();
        }
        *(undefined4 *)((long)param_1 + 0xbc) = *(undefined4 *)(plVar8 + 2);
        param_1[0x18] = *(long *)(lVar14 + uVar5 * 8);
        FUN_10a5861f0(param_1);
      }
    }
    FUN_10a6a73c4();
    plVar16 = (long *)0x0;
    goto LAB_10a690ad4;
  }
LAB_10a69098c:
  plVar18 = (long *)plVar16[0x8d];
  plVar9 = plVar8;
  while (plVar18 != plVar16 + 0x8e) {
    uVar3 = *(uint *)((long)plVar18 + 0x1c);
    param_2 = (code **)(ulong)uVar3;
    plVar8 = plVar16;
    FUN_10a69044c(plVar16,param_2);
    *(uint *)((long)param_1 + 0xbc) = uVar3;
    param_1[0x18] = *plVar8;
    plVar9 = param_1;
    FUN_10a5861f0();
    plVar8 = (long *)plVar18[1];
    plVar19 = plVar18;
    if ((long *)plVar18[1] == (long *)0x0) {
      do {
        plVar18 = (long *)plVar19[2];
        bVar7 = (long *)*plVar18 != plVar19;
        plVar19 = plVar18;
      } while (bVar7);
    }
    else {
      do {
        plVar18 = plVar8;
        plVar8 = (long *)*plVar18;
      } while ((long *)*plVar18 != (long *)0x0);
    }
  }
LAB_10a690ad4:
  param_1[0x18] = 0;
  *(undefined4 *)((long)param_1 + 0xbc) = 0;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010a05253c(&lStack_d0);
  plVar8 = plVar9;
  __Unwind_Resume();
  pcStack_d8 = FUN_10a690bd8;
  lStack_f8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcStack_138 = FUN_10a6a794c;
  ppuStack_130 = &PTR_FUN_110c0d318;
  ppuVar12 = &PTR_DAT_110c0c9d0;
  ppcVar13 = &pcStack_138;
  plStack_128 = plVar8;
  plStack_f0 = plVar16;
  plStack_e8 = plVar9;
  puStack_e0 = &stack0xfffffffffffffff0;
  FUN_10a65cb90(param_2,&PTR_DAT_110c0c9d0,ppcVar13,0);
  pppuVar10 = &ppuStack_130;
  (*(code *)*ppuStack_130)();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_f8) {
    return;
  }
  ___stack_chk_fail();
  (*(code *)*ppuStack_130)(&ppuStack_130);
  __Unwind_Resume();
  pppuVar11 = pppuVar10 + 0xc;
  if (ppcVar13 != (code **)0x0) {
    pppuVar11 = (undefined ***)(ppcVar13 + 0x16);
  }
  ppuVar21 = *pppuVar11;
  pppuVar11 = pppuVar10;
  func_0x00010a0fda30();
  plVar8 = (long *)0xe0;
  __Znwm();
  plVar9 = plVar8 + 1;
  plVar8[2] = 0;
  *plVar9 = 0;
  *plVar8 = (long)&PTR_DAT_110c0d340;
  plVar18 = plVar8 + 3;
  *plVar18 = (long)&PTR_FUN_110c0e540;
  *(undefined1 *)(plVar8 + 4) = 0;
  plVar8[6] = 0;
  plVar8[7] = 0;
  plVar8[0xb] = (long)pppuVar11;
  plVar8[0xc] = (long)ppuVar12;
  *(undefined1 *)(plVar8 + 0xd) = 0;
  *(undefined8 *)((long)plVar8 + 0x6c) = 0x800000000;
  plVar8[0xf] = (long)ppuVar21;
  *(undefined1 *)(plVar8 + 0x10) = 0;
  *(undefined1 *)(plVar8 + 0x14) = 0;
  *(undefined1 *)(plVar8 + 0x15) = 1;
  plVar8[0x16] = 0;
  plVar8[0x17] = 0;
  plVar8[5] = (long)&PTR_FUN_110c0e5d8;
  plVar8[10] = (long)&PTR_FUN_110c0e630;
  plVar8[0x1b] = 0;
  plVar8[0x18] = 0;
  plVar8[0x19] = 0;
  *(undefined8 *)((long)plVar8 + 0xcd) = 0;
  do {
    cVar4 = '\x01';
    bVar7 = (bool)ExclusiveMonitorPass(plVar9,0x10);
    if (bVar7) {
      *plVar9 = *plVar9 + 1;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  plVar16 = plVar8 + 2;
  do {
    cVar4 = '\x01';
    bVar7 = (bool)ExclusiveMonitorPass(plVar16,0x10);
    if (bVar7) {
      *plVar16 = *plVar16 + 1;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  plVar8[8] = (long)plVar18;
  plVar8[9] = (long)plVar8;
  do {
    lVar14 = *plVar9;
    cVar4 = '\x01';
    bVar7 = (bool)ExclusiveMonitorPass(plVar9,0x10);
    if (bVar7) {
      *plVar9 = lVar14 + -1;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  if (lVar14 == 0) {
    (**(code **)(*plVar8 + 0x10))(plVar8);
    __ZNSt3__119__shared_weak_count14__release_weakEv(plVar8);
  }
  *(undefined4 *)((long)plVar8 + 0x6c) = *(undefined4 *)((long)pppuVar10 + 0x54);
  ppuVar21 = pppuVar10[0x14];
  ppuVar12 = pppuVar10[0x13];
  if (pppuVar10[0x14] != (undefined **)0x0) {
    ppuVar1 = pppuVar10[0x14] + 2;
    do {
      cVar4 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(ppuVar1,0x10);
      if (bVar7) {
        *ppuVar1 = *ppuVar1 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  lVar14 = plVar8[0x17];
  plVar8[0x17] = (long)ppuVar21;
  plVar8[0x16] = (long)ppuVar12;
  if (lVar14 != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  ppuVar12 = pppuVar10[0x16];
  if (ppuVar12 == (undefined **)0x0) {
    ppuVar12 = (undefined **)0x0;
  }
  else {
    __ZNSt3__119__shared_weak_count4lockEv();
  }
  FUN_10a68a860();
  if (ppuVar12 != (undefined **)0x0) {
    ppuVar21 = ppuVar12 + 1;
    do {
      puVar15 = *ppuVar21;
      cVar4 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(ppuVar21,0x10);
      if (bVar7) {
        *ppuVar21 = puVar15 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (puVar15 == (undefined *)0x0) {
      (**(code **)(*ppuVar12 + 0x10))(ppuVar12);
      __ZNSt3__119__shared_weak_count14__release_weakEv(ppuVar12);
    }
  }
  extraout_x8[1] = plVar8;
  *extraout_x8 = plVar18;
  return;
}



/* Entry: 10a690bd8; end: 10a690c8b;  */

void FUN_10a690bd8(undefined8 param_1,undefined8 param_2)

{
  long *plVar1;
  undefined **ppuVar2;
  char cVar3;
  bool bVar4;
  undefined ***pppuVar5;
  undefined ***pppuVar6;
  long *plVar7;
  undefined **ppuVar8;
  code **ppcVar9;
  undefined8 *extraout_x8;
  long *plVar10;
  long *plVar11;
  long lVar12;
  undefined *puVar13;
  undefined **ppuVar14;
  code *pcStack_68;
  undefined **ppuStack_60;
  undefined8 uStack_58;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcStack_68 = FUN_10a6a794c;
  ppuStack_60 = &PTR_FUN_110c0d318;
  ppuVar8 = &PTR_DAT_110c0c9d0;
  ppcVar9 = &pcStack_68;
  uStack_58 = param_1;
  FUN_10a65cb90(param_2,&PTR_DAT_110c0c9d0,ppcVar9,0);
  pppuVar5 = &ppuStack_60;
  (*(code *)*ppuStack_60)();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_28) {
    ___stack_chk_fail();
    (*(code *)*ppuStack_60)(&ppuStack_60);
    __Unwind_Resume();
    pppuVar6 = pppuVar5 + 0xc;
    if (ppcVar9 != (code **)0x0) {
      pppuVar6 = (undefined ***)(ppcVar9 + 0x16);
    }
    ppuVar14 = *pppuVar6;
    pppuVar6 = pppuVar5;
    func_0x00010a0fda30();
    plVar7 = (long *)0xe0;
    __Znwm();
    plVar10 = plVar7 + 1;
    plVar7[2] = 0;
    *plVar10 = 0;
    *plVar7 = (long)&PTR_DAT_110c0d340;
    plVar11 = plVar7 + 3;
    *plVar11 = (long)&PTR_FUN_110c0e540;
    *(undefined1 *)(plVar7 + 4) = 0;
    plVar7[6] = 0;
    plVar7[7] = 0;
    plVar7[0xb] = (long)pppuVar6;
    plVar7[0xc] = (long)ppuVar8;
    *(undefined1 *)(plVar7 + 0xd) = 0;
    *(undefined8 *)((long)plVar7 + 0x6c) = 0x800000000;
    plVar7[0xf] = (long)ppuVar14;
    *(undefined1 *)(plVar7 + 0x10) = 0;
    *(undefined1 *)(plVar7 + 0x14) = 0;
    *(undefined1 *)(plVar7 + 0x15) = 1;
    plVar7[0x16] = 0;
    plVar7[0x17] = 0;
    plVar7[5] = (long)&PTR_FUN_110c0e5d8;
    plVar7[10] = (long)&PTR_FUN_110c0e630;
    plVar7[0x1b] = 0;
    plVar7[0x18] = 0;
    plVar7[0x19] = 0;
    *(undefined8 *)((long)plVar7 + 0xcd) = 0;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar4) {
        *plVar10 = *plVar10 + 1;
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
    plVar7[8] = (long)plVar11;
    plVar7[9] = (long)plVar7;
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
      (**(code **)(*plVar7 + 0x10))(plVar7);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
    }
    *(undefined4 *)((long)plVar7 + 0x6c) = *(undefined4 *)((long)pppuVar5 + 0x54);
    ppuVar14 = pppuVar5[0x14];
    ppuVar8 = pppuVar5[0x13];
    if (pppuVar5[0x14] != (undefined **)0x0) {
      ppuVar2 = pppuVar5[0x14] + 2;
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(ppuVar2,0x10);
        if (bVar4) {
          *ppuVar2 = *ppuVar2 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    lVar12 = plVar7[0x17];
    plVar7[0x17] = (long)ppuVar14;
    plVar7[0x16] = (long)ppuVar8;
    if (lVar12 != 0) {
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
    ppuVar8 = pppuVar5[0x16];
    if (ppuVar8 == (undefined **)0x0) {
      ppuVar8 = (undefined **)0x0;
    }
    else {
      __ZNSt3__119__shared_weak_count4lockEv();
    }
    FUN_10a68a860();
    if (ppuVar8 != (undefined **)0x0) {
      ppuVar14 = ppuVar8 + 1;
      do {
        puVar13 = *ppuVar14;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(ppuVar14,0x10);
        if (bVar4) {
          *ppuVar14 = puVar13 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (puVar13 == (undefined *)0x0) {
        (**(code **)(*ppuVar8 + 0x10))(ppuVar8);
        __ZNSt3__119__shared_weak_count14__release_weakEv(ppuVar8);
      }
    }
    extraout_x8[1] = plVar7;
    *extraout_x8 = plVar11;
    return;
  }
  return;
}



/* Entry: 10a690c8c; end: 10a690e9b;  */

void FUN_10a690c8c(undefined8 *param_1,long param_2,long param_3,long param_4)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  long *plVar6;
  long *plVar7;
  long lVar8;
  long lVar9;
  
  plVar4 = (long *)(param_2 + 0x60);
  if (param_4 != 0) {
    plVar4 = (long *)(param_4 + 0xb0);
  }
  lVar9 = *plVar4;
  lVar8 = param_2;
  func_0x00010a0fda30();
  plVar4 = (long *)0xe0;
  __Znwm();
  plVar6 = plVar4 + 1;
  plVar4[2] = 0;
  *plVar6 = 0;
  *plVar4 = (long)&PTR_DAT_110c0d340;
  plVar7 = plVar4 + 3;
  *plVar7 = (long)&PTR_FUN_110c0e540;
  *(undefined1 *)(plVar4 + 4) = 0;
  plVar4[6] = 0;
  plVar4[7] = 0;
  plVar4[0xb] = lVar8;
  plVar4[0xc] = param_3;
  *(undefined1 *)(plVar4 + 0xd) = 0;
  *(undefined8 *)((long)plVar4 + 0x6c) = 0x800000000;
  plVar4[0xf] = lVar9;
  *(undefined1 *)(plVar4 + 0x10) = 0;
  *(undefined1 *)(plVar4 + 0x14) = 0;
  *(undefined1 *)(plVar4 + 0x15) = 1;
  plVar4[0x16] = 0;
  plVar4[0x17] = 0;
  plVar4[5] = (long)&PTR_FUN_110c0e5d8;
  plVar4[10] = (long)&PTR_FUN_110c0e630;
  plVar4[0x1b] = 0;
  plVar4[0x18] = 0;
  plVar4[0x19] = 0;
  *(undefined8 *)((long)plVar4 + 0xcd) = 0;
  do {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
    if (bVar3) {
      *plVar6 = *plVar6 + 1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  plVar1 = plVar4 + 2;
  do {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar3) {
      *plVar1 = *plVar1 + 1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  plVar4[8] = (long)plVar7;
  plVar4[9] = (long)plVar4;
  do {
    lVar8 = *plVar6;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
    if (bVar3) {
      *plVar6 = lVar8 + -1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (lVar8 == 0) {
    (**(code **)(*plVar4 + 0x10))(plVar4);
    __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
  }
  *(undefined4 *)((long)plVar4 + 0x6c) = *(undefined4 *)(param_2 + 0x54);
  lVar9 = *(long *)(param_2 + 0xa0);
  lVar8 = *(long *)(param_2 + 0x98);
  if (*(long *)(param_2 + 0xa0) != 0) {
    plVar6 = (long *)(*(long *)(param_2 + 0xa0) + 0x10);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar3) {
        *plVar6 = *plVar6 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  lVar5 = plVar4[0x17];
  plVar4[0x17] = lVar9;
  plVar4[0x16] = lVar8;
  if (lVar5 != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  plVar6 = *(long **)(param_2 + 0xb0);
  if (plVar6 == (long *)0x0) {
    plVar6 = (long *)0x0;
  }
  else {
    __ZNSt3__119__shared_weak_count4lockEv();
  }
  FUN_10a68a860();
  if (plVar6 != (long *)0x0) {
    plVar1 = plVar6 + 1;
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
      (**(code **)(*plVar6 + 0x10))(plVar6);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
    }
  }
  param_1[1] = plVar4;
  *param_1 = plVar7;
  return;
}



/* Entry: 10a690e9c; end: 10a69116b;  */

void FUN_10a690e9c(undefined ***param_1,code **param_2)

{
  undefined ***pppuVar1;
  long *plVar2;
  undefined **ppuVar3;
  uint uVar4;
  undefined1 uVar5;
  char cVar6;
  bool bVar7;
  undefined ***pppuVar8;
  undefined ***pppuVar9;
  code **ppcVar10;
  long *plVar11;
  undefined8 *extraout_x8;
  long *plVar12;
  undefined **ppuVar13;
  long *plVar14;
  long lVar15;
  undefined *puVar16;
  code **ppcVar17;
  code *pcVar18;
  code *pcVar19;
  undefined **ppuVar20;
  code *pcStack_118;
  undefined **ppuStack_110;
  undefined ***pppuStack_108;
  long lStack_d8;
  code **ppcStack_d0;
  undefined ***pppuStack_c8;
  undefined1 *puStack_c0;
  code *pcStack_b8;
  undefined **ppuStack_b0;
  undefined ***pppuStack_a8;
  undefined **ppuStack_98;
  undefined ***pppuStack_90;
  code *pcStack_88;
  undefined **ppuStack_80;
  undefined ***pppuStack_78;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pppuVar8 = (undefined ***)param_1[0x16];
  if ((pppuVar8 == (undefined ***)0x0) ||
     (__ZNSt3__119__shared_weak_count4lockEv(), pppuVar8 == (undefined ***)0x0)) {
LAB_10a690f1c:
    pppuVar8 = (undefined ***)param_1[0x14];
    if (pppuVar8 != (undefined ***)0x0) {
      ppuVar13 = param_1[0x13];
      pppuVar9 = pppuVar8 + 2;
      do {
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(pppuVar9,0x10);
        if (bVar7) {
          *pppuVar9 = (undefined **)((long)*pppuVar9 + 1);
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      pppuVar9 = pppuVar8;
      __ZNSt3__119__shared_weak_count4lockEv();
      pppuStack_90 = pppuVar9;
      if (pppuVar9 != (undefined ***)0x0) {
        ppuStack_98 = ppuVar13;
        __ZNSt3__119__shared_weak_count14__release_weakEv();
        if (ppuVar13 != (undefined **)0x0) {
          ppuVar20 = (undefined **)ppuVar13[0x2b];
          if (ppuVar20 != ppuVar13 + 0x2a) {
LAB_10a690f80:
            if (ppuVar20[2] == (undefined *)0x0) goto LAB_10a690f9c;
            ppcVar17 = (code **)(ppuVar20[2] + 0xb0);
            param_2 = (code **)0xc2c0ac5e4c065340;
            (**(code **)(*ppcVar17 + 0x18))(ppcVar17,0xc2c0ac5e4c065340);
            if (ppcVar17 == (code **)0x0) goto LAB_10a690f9c;
            FUN_10a2d1b5c(&ppuStack_b0);
            if (pppuStack_a8 != (undefined ***)0x0) {
              pppuVar8 = pppuStack_a8 + 2;
              do {
                cVar6 = '\x01';
                bVar7 = (bool)ExclusiveMonitorPass(pppuVar8,0x10);
                if (bVar7) {
                  *pppuVar8 = (undefined **)((long)*pppuVar8 + 1);
                  cVar6 = ExclusiveMonitorsStatus();
                }
              } while (cVar6 != '\0');
            }
            pppuVar8 = (undefined ***)param_1[0x16];
            param_1[0x16] = (undefined **)pppuStack_a8;
            param_1[0x15] = ppuStack_b0;
            if (pppuVar8 != (undefined ***)0x0) {
              __ZNSt3__119__shared_weak_count14__release_weakEv();
            }
            pppuVar9 = pppuStack_90;
            if (pppuStack_a8 != (undefined ***)0x0) {
              pppuVar1 = pppuStack_a8 + 1;
              do {
                ppuVar13 = *pppuVar1;
                cVar6 = '\x01';
                bVar7 = (bool)ExclusiveMonitorPass(pppuVar1,0x10);
                if (bVar7) {
                  *pppuVar1 = (undefined **)((long)ppuVar13 + -1);
                  cVar6 = ExclusiveMonitorsStatus();
                }
              } while (cVar6 != '\0');
              if (ppuVar13 == (undefined **)0x0) {
                (*(code *)(*pppuStack_a8)[2])(pppuStack_a8);
                __ZNSt3__119__shared_weak_count14__release_weakEv();
                pppuVar9 = pppuStack_90;
                pppuVar8 = pppuStack_a8;
              }
            }
            goto joined_r0x00010a690fac;
          }
        }
        ppcVar17 = (code **)0x0;
        goto LAB_10a690fb8;
      }
      __ZNSt3__119__shared_weak_count14__release_weakEv(pppuVar8);
    }
    goto LAB_10a691034;
  }
  ppcVar17 = (code **)param_1[0x15];
  pppuVar9 = pppuVar8 + 1;
  do {
    ppuVar13 = *pppuVar9;
    cVar6 = '\x01';
    bVar7 = (bool)ExclusiveMonitorPass(pppuVar9,0x10);
    if (bVar7) {
      *pppuVar9 = (undefined **)((long)ppuVar13 + -1);
      cVar6 = ExclusiveMonitorsStatus();
    }
  } while (cVar6 != '\0');
  if (ppuVar13 == (undefined **)0x0) {
    (*(code *)(*pppuVar8)[2])(pppuVar8);
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  if (ppcVar17 == (code **)0x0) goto LAB_10a690f1c;
  goto LAB_10a690fec;
LAB_10a690f9c:
  ppuVar20 = (undefined **)ppuVar20[1];
  if (ppuVar20 == ppuVar13 + 0x2a) goto code_r0x00010a690fa8;
  goto LAB_10a690f80;
code_r0x00010a690fa8:
  ppcVar17 = (code **)0x0;
  pppuVar8 = (undefined ***)0x0;
joined_r0x00010a690fac:
  if (pppuVar9 != (undefined ***)0x0) {
LAB_10a690fb8:
    pppuVar1 = pppuVar9 + 1;
    do {
      ppuVar13 = *pppuVar1;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(pppuVar1,0x10);
      if (bVar7) {
        *pppuVar1 = (undefined **)((long)ppuVar13 + -1);
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (ppuVar13 == (undefined **)0x0) {
      (*(code *)(*pppuVar9)[2])(pppuVar9);
      __ZNSt3__119__shared_weak_count14__release_weakEv();
      pppuVar8 = pppuVar9;
    }
  }
  if (ppcVar17 == (code **)0x0) {
LAB_10a691034:
    ppcVar17 = &pcStack_88;
    pcStack_88 = FUN_10a6a7ab0;
    ppuStack_80 = &PTR_FUN_110c0d380;
    param_2 = &pcStack_88;
    pppuStack_78 = param_1;
    FUN_10a2f0f14(*(long *)(param_1[0xc][0x106] + 0x18) + 0x50,param_2);
    pppuVar8 = &ppuStack_80;
    (*(code *)*ppuStack_80)();
    goto LAB_10a691078;
  }
LAB_10a690fec:
  pcVar19 = ppcVar17[0x94];
  for (pcVar18 = ppcVar17[0x93]; pcVar18 != pcVar19; pcVar18 = pcVar18 + 4) {
    uVar4 = *(uint *)pcVar18;
    param_2 = (code **)(ulong)uVar4;
    ppcVar10 = ppcVar17;
    FUN_10a69044c();
    uVar5 = *(undefined1 *)(ppcVar10 + 1);
    *(uint *)(param_1 + 0x17) = uVar4;
    *(undefined1 *)((long)param_1 + 0xbc) = uVar5;
    param_1[0x18] = (undefined **)*ppcVar10;
    pppuVar8 = param_1;
    FUN_10a5861f0();
  }
LAB_10a691078:
  *(undefined4 *)(param_1 + 0x17) = 0;
  *(undefined1 *)((long)param_1 + 0xbc) = 0;
  param_1[0x18] = (undefined **)0x0;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010a05253c(&ppuStack_98);
  pppuVar9 = pppuVar8;
  __Unwind_Resume();
  pcStack_b8 = FUN_10a69116c;
  lStack_d8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcStack_118 = FUN_10a6a7b84;
  ppuStack_110 = &PTR_FUN_110c0d3a0;
  ppuVar13 = &PTR_DAT_110c0c9d0;
  ppcVar10 = &pcStack_118;
  pppuStack_108 = pppuVar9;
  ppcStack_d0 = ppcVar17;
  pppuStack_c8 = pppuVar8;
  puStack_c0 = &stack0xfffffffffffffff0;
  FUN_10a65cb90(param_2,&PTR_DAT_110c0c9d0,ppcVar10,0);
  pppuVar8 = &ppuStack_110;
  (*(code *)*ppuStack_110)();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_d8) {
    ___stack_chk_fail();
    (*(code *)*ppuStack_110)(&ppuStack_110);
    __Unwind_Resume();
    pppuVar9 = pppuVar8 + 0xc;
    if (ppcVar10 != (code **)0x0) {
      pppuVar9 = (undefined ***)(ppcVar10 + 0x16);
    }
    ppuVar20 = *pppuVar9;
    pppuVar9 = pppuVar8;
    func_0x00010a0fda30();
    plVar11 = (long *)0xd8;
    __Znwm();
    plVar12 = plVar11 + 1;
    plVar11[2] = 0;
    *plVar12 = 0;
    *plVar11 = (long)&PTR_DAT_110c0d3c8;
    plVar14 = plVar11 + 3;
    *plVar14 = (long)&PTR_FUN_110c0e650;
    *(undefined1 *)(plVar11 + 4) = 0;
    plVar11[6] = 0;
    plVar11[7] = 0;
    plVar11[0xb] = (long)pppuVar9;
    plVar11[0xc] = (long)ppuVar13;
    *(undefined1 *)(plVar11 + 0xd) = 0;
    *(undefined8 *)((long)plVar11 + 0x6c) = 0x800000000;
    plVar11[0xf] = (long)ppuVar20;
    *(undefined1 *)(plVar11 + 0x10) = 0;
    *(undefined1 *)(plVar11 + 0x14) = 0;
    *(undefined1 *)(plVar11 + 0x15) = 1;
    plVar11[0x16] = 0;
    plVar11[0x17] = 0;
    plVar11[5] = (long)&PTR_FUN_110c0e6e8;
    plVar11[10] = (long)&PTR_FUN_110c0e740;
    plVar11[0x18] = 0;
    plVar11[0x19] = 0;
    plVar11[0x1a] = 0;
    do {
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar12,0x10);
      if (bVar7) {
        *plVar12 = *plVar12 + 1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    plVar2 = plVar11 + 2;
    do {
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar7) {
        *plVar2 = *plVar2 + 1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    plVar11[8] = (long)plVar14;
    plVar11[9] = (long)plVar11;
    do {
      lVar15 = *plVar12;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar12,0x10);
      if (bVar7) {
        *plVar12 = lVar15 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (lVar15 == 0) {
      (**(code **)(*plVar11 + 0x10))(plVar11);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar11);
    }
    *(undefined4 *)((long)plVar11 + 0x6c) = *(undefined4 *)((long)pppuVar8 + 0x54);
    ppuVar20 = pppuVar8[0x14];
    ppuVar13 = pppuVar8[0x13];
    if (pppuVar8[0x14] != (undefined **)0x0) {
      ppuVar3 = pppuVar8[0x14] + 2;
      do {
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(ppuVar3,0x10);
        if (bVar7) {
          *ppuVar3 = *ppuVar3 + 1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
    }
    lVar15 = plVar11[0x17];
    plVar11[0x17] = (long)ppuVar20;
    plVar11[0x16] = (long)ppuVar13;
    if (lVar15 != 0) {
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
    ppuVar13 = pppuVar8[0x16];
    if (ppuVar13 == (undefined **)0x0) {
      ppuVar13 = (undefined **)0x0;
    }
    else {
      __ZNSt3__119__shared_weak_count4lockEv();
    }
    FUN_10a68a860();
    if (ppuVar13 != (undefined **)0x0) {
      ppuVar20 = ppuVar13 + 1;
      do {
        puVar16 = *ppuVar20;
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(ppuVar20,0x10);
        if (bVar7) {
          *ppuVar20 = puVar16 + -1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (puVar16 == (undefined *)0x0) {
        (**(code **)(*ppuVar13 + 0x10))(ppuVar13);
        __ZNSt3__119__shared_weak_count14__release_weakEv(ppuVar13);
      }
    }
    extraout_x8[1] = plVar11;
    *extraout_x8 = plVar14;
    return;
  }
  return;
}



/* Entry: 10a69116c; end: 10a69121f;  */

void FUN_10a69116c(undefined8 param_1,undefined8 param_2)

{
  long *plVar1;
  undefined **ppuVar2;
  char cVar3;
  bool bVar4;
  undefined ***pppuVar5;
  undefined ***pppuVar6;
  long *plVar7;
  undefined **ppuVar8;
  code **ppcVar9;
  undefined8 *extraout_x8;
  long *plVar10;
  long *plVar11;
  long lVar12;
  undefined *puVar13;
  undefined **ppuVar14;
  code *pcStack_68;
  undefined **ppuStack_60;
  undefined8 uStack_58;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcStack_68 = FUN_10a6a7b84;
  ppuStack_60 = &PTR_FUN_110c0d3a0;
  ppuVar8 = &PTR_DAT_110c0c9d0;
  ppcVar9 = &pcStack_68;
  uStack_58 = param_1;
  FUN_10a65cb90(param_2,&PTR_DAT_110c0c9d0,ppcVar9,0);
  pppuVar5 = &ppuStack_60;
  (*(code *)*ppuStack_60)();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_28) {
    ___stack_chk_fail();
    (*(code *)*ppuStack_60)(&ppuStack_60);
    __Unwind_Resume();
    pppuVar6 = pppuVar5 + 0xc;
    if (ppcVar9 != (code **)0x0) {
      pppuVar6 = (undefined ***)(ppcVar9 + 0x16);
    }
    ppuVar14 = *pppuVar6;
    pppuVar6 = pppuVar5;
    func_0x00010a0fda30();
    plVar7 = (long *)0xd8;
    __Znwm();
    plVar10 = plVar7 + 1;
    plVar7[2] = 0;
    *plVar10 = 0;
    *plVar7 = (long)&PTR_DAT_110c0d3c8;
    plVar11 = plVar7 + 3;
    *plVar11 = (long)&PTR_FUN_110c0e650;
    *(undefined1 *)(plVar7 + 4) = 0;
    plVar7[6] = 0;
    plVar7[7] = 0;
    plVar7[0xb] = (long)pppuVar6;
    plVar7[0xc] = (long)ppuVar8;
    *(undefined1 *)(plVar7 + 0xd) = 0;
    *(undefined8 *)((long)plVar7 + 0x6c) = 0x800000000;
    plVar7[0xf] = (long)ppuVar14;
    *(undefined1 *)(plVar7 + 0x10) = 0;
    *(undefined1 *)(plVar7 + 0x14) = 0;
    *(undefined1 *)(plVar7 + 0x15) = 1;
    plVar7[0x16] = 0;
    plVar7[0x17] = 0;
    plVar7[5] = (long)&PTR_FUN_110c0e6e8;
    plVar7[10] = (long)&PTR_FUN_110c0e740;
    plVar7[0x18] = 0;
    plVar7[0x19] = 0;
    plVar7[0x1a] = 0;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar4) {
        *plVar10 = *plVar10 + 1;
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
    plVar7[8] = (long)plVar11;
    plVar7[9] = (long)plVar7;
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
      (**(code **)(*plVar7 + 0x10))(plVar7);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
    }
    *(undefined4 *)((long)plVar7 + 0x6c) = *(undefined4 *)((long)pppuVar5 + 0x54);
    ppuVar14 = pppuVar5[0x14];
    ppuVar8 = pppuVar5[0x13];
    if (pppuVar5[0x14] != (undefined **)0x0) {
      ppuVar2 = pppuVar5[0x14] + 2;
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(ppuVar2,0x10);
        if (bVar4) {
          *ppuVar2 = *ppuVar2 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    lVar12 = plVar7[0x17];
    plVar7[0x17] = (long)ppuVar14;
    plVar7[0x16] = (long)ppuVar8;
    if (lVar12 != 0) {
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
    ppuVar8 = pppuVar5[0x16];
    if (ppuVar8 == (undefined **)0x0) {
      ppuVar8 = (undefined **)0x0;
    }
    else {
      __ZNSt3__119__shared_weak_count4lockEv();
    }
    FUN_10a68a860();
    if (ppuVar8 != (undefined **)0x0) {
      ppuVar14 = ppuVar8 + 1;
      do {
        puVar13 = *ppuVar14;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(ppuVar14,0x10);
        if (bVar4) {
          *ppuVar14 = puVar13 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (puVar13 == (undefined *)0x0) {
        (**(code **)(*ppuVar8 + 0x10))(ppuVar8);
        __ZNSt3__119__shared_weak_count14__release_weakEv(ppuVar8);
      }
    }
    extraout_x8[1] = plVar7;
    *extraout_x8 = plVar11;
    return;
  }
  return;
}



/* Entry: 10a691220; end: 10a69142b;  */

void FUN_10a691220(undefined8 *param_1,long param_2,long param_3,long param_4)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  long *plVar6;
  long *plVar7;
  long lVar8;
  long lVar9;
  
  plVar4 = (long *)(param_2 + 0x60);
  if (param_4 != 0) {
    plVar4 = (long *)(param_4 + 0xb0);
  }
  lVar9 = *plVar4;
  lVar8 = param_2;
  func_0x00010a0fda30();
  plVar4 = (long *)0xd8;
  __Znwm();
  plVar6 = plVar4 + 1;
  plVar4[2] = 0;
  *plVar6 = 0;
  *plVar4 = (long)&PTR_DAT_110c0d3c8;
  plVar7 = plVar4 + 3;
  *plVar7 = (long)&PTR_FUN_110c0e650;
  *(undefined1 *)(plVar4 + 4) = 0;
  plVar4[6] = 0;
  plVar4[7] = 0;
  plVar4[0xb] = lVar8;
  plVar4[0xc] = param_3;
  *(undefined1 *)(plVar4 + 0xd) = 0;
  *(undefined8 *)((long)plVar4 + 0x6c) = 0x800000000;
  plVar4[0xf] = lVar9;
  *(undefined1 *)(plVar4 + 0x10) = 0;
  *(undefined1 *)(plVar4 + 0x14) = 0;
  *(undefined1 *)(plVar4 + 0x15) = 1;
  plVar4[0x16] = 0;
  plVar4[0x17] = 0;
  plVar4[5] = (long)&PTR_FUN_110c0e6e8;
  plVar4[10] = (long)&PTR_FUN_110c0e740;
  plVar4[0x18] = 0;
  plVar4[0x19] = 0;
  plVar4[0x1a] = 0;
  do {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
    if (bVar3) {
      *plVar6 = *plVar6 + 1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  plVar1 = plVar4 + 2;
  do {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar3) {
      *plVar1 = *plVar1 + 1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  plVar4[8] = (long)plVar7;
  plVar4[9] = (long)plVar4;
  do {
    lVar8 = *plVar6;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
    if (bVar3) {
      *plVar6 = lVar8 + -1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (lVar8 == 0) {
    (**(code **)(*plVar4 + 0x10))(plVar4);
    __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
  }
  *(undefined4 *)((long)plVar4 + 0x6c) = *(undefined4 *)(param_2 + 0x54);
  lVar9 = *(long *)(param_2 + 0xa0);
  lVar8 = *(long *)(param_2 + 0x98);
  if (*(long *)(param_2 + 0xa0) != 0) {
    plVar6 = (long *)(*(long *)(param_2 + 0xa0) + 0x10);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar3) {
        *plVar6 = *plVar6 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  lVar5 = plVar4[0x17];
  plVar4[0x17] = lVar9;
  plVar4[0x16] = lVar8;
  if (lVar5 != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  plVar6 = *(long **)(param_2 + 0xb0);
  if (plVar6 == (long *)0x0) {
    plVar6 = (long *)0x0;
  }
  else {
    __ZNSt3__119__shared_weak_count4lockEv();
  }
  FUN_10a68a860();
  if (plVar6 != (long *)0x0) {
    plVar1 = plVar6 + 1;
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
      (**(code **)(*plVar6 + 0x10))(plVar6);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
    }
  }
  param_1[1] = plVar4;
  *param_1 = plVar7;
  return;
}



/* Entry: 10a69142c; end: 10a6916d7;  */

void FUN_10a69142c(undefined ***param_1)

{
  undefined ***pppuVar1;
  char cVar2;
  bool bVar3;
  undefined ***pppuVar4;
  undefined ***pppuVar5;
  undefined **ppuVar6;
  undefined **ppuVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined **ppuVar10;
  undefined **ppuStack_b0;
  undefined ***pppuStack_a8;
  undefined **ppuStack_98;
  undefined ***pppuStack_90;
  undefined8 uStack_88;
  undefined **ppuStack_80;
  undefined ***pppuStack_78;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pppuVar4 = (undefined ***)param_1[0x16];
  if ((pppuVar4 == (undefined ***)0x0) ||
     (__ZNSt3__119__shared_weak_count4lockEv(), pppuVar4 == (undefined ***)0x0)) {
LAB_10a6914ac:
    pppuVar4 = (undefined ***)param_1[0x14];
    if (pppuVar4 != (undefined ***)0x0) {
      ppuVar6 = param_1[0x13];
      pppuVar5 = pppuVar4 + 2;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(pppuVar5,0x10);
        if (bVar3) {
          *pppuVar5 = (undefined **)((long)*pppuVar5 + 1);
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      pppuVar5 = pppuVar4;
      __ZNSt3__119__shared_weak_count4lockEv();
      pppuStack_90 = pppuVar5;
      if (pppuVar5 != (undefined ***)0x0) {
        ppuStack_98 = ppuVar6;
        __ZNSt3__119__shared_weak_count14__release_weakEv(pppuVar4);
        if (ppuVar6 != (undefined **)0x0) {
          ppuVar10 = (undefined **)ppuVar6[0x2b];
          if (ppuVar10 != ppuVar6 + 0x2a) {
LAB_10a691510:
            if (ppuVar10[2] == (undefined *)0x0) goto LAB_10a69152c;
            ppuVar7 = (undefined **)(ppuVar10[2] + 0xb0);
            (**(code **)(*ppuVar7 + 0x18))(ppuVar7,0xc2c0ac5e4c065340);
            if (ppuVar7 == (undefined **)0x0) goto LAB_10a69152c;
            FUN_10a2d1b5c(&ppuStack_b0);
            if (pppuStack_a8 != (undefined ***)0x0) {
              pppuVar4 = pppuStack_a8 + 2;
              do {
                cVar2 = '\x01';
                bVar3 = (bool)ExclusiveMonitorPass(pppuVar4,0x10);
                if (bVar3) {
                  *pppuVar4 = (undefined **)((long)*pppuVar4 + 1);
                  cVar2 = ExclusiveMonitorsStatus();
                }
              } while (cVar2 != '\0');
            }
            pppuVar4 = (undefined ***)param_1[0x16];
            param_1[0x16] = (undefined **)pppuStack_a8;
            param_1[0x15] = ppuStack_b0;
            if (pppuVar4 != (undefined ***)0x0) {
              __ZNSt3__119__shared_weak_count14__release_weakEv();
            }
            pppuVar5 = pppuStack_90;
            if (pppuStack_a8 != (undefined ***)0x0) {
              pppuVar1 = pppuStack_a8 + 1;
              do {
                ppuVar6 = *pppuVar1;
                cVar2 = '\x01';
                bVar3 = (bool)ExclusiveMonitorPass(pppuVar1,0x10);
                if (bVar3) {
                  *pppuVar1 = (undefined **)((long)ppuVar6 + -1);
                  cVar2 = ExclusiveMonitorsStatus();
                }
              } while (cVar2 != '\0');
              if (ppuVar6 == (undefined **)0x0) {
                (*(code *)(*pppuStack_a8)[2])(pppuStack_a8);
                __ZNSt3__119__shared_weak_count14__release_weakEv(pppuStack_a8);
                pppuVar5 = pppuStack_90;
                pppuVar4 = pppuStack_a8;
              }
            }
            goto joined_r0x00010a69153c;
          }
        }
        ppuVar7 = (undefined **)0x0;
        goto LAB_10a691548;
      }
      __ZNSt3__119__shared_weak_count14__release_weakEv(pppuVar4);
    }
    goto LAB_10a6915a8;
  }
  ppuVar7 = param_1[0x15];
  pppuVar5 = pppuVar4 + 1;
  do {
    ppuVar6 = *pppuVar5;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(pppuVar5,0x10);
    if (bVar3) {
      *pppuVar5 = (undefined **)((long)ppuVar6 + -1);
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (ppuVar6 == (undefined **)0x0) {
    (*(code *)(*pppuVar4)[2])(pppuVar4);
    __ZNSt3__119__shared_weak_count14__release_weakEv(pppuVar4);
  }
  if (ppuVar7 == (undefined **)0x0) goto LAB_10a6914ac;
  goto LAB_10a69157c;
LAB_10a69152c:
  ppuVar10 = (undefined **)ppuVar10[1];
  if (ppuVar10 == ppuVar6 + 0x2a) goto code_r0x00010a691538;
  goto LAB_10a691510;
code_r0x00010a691538:
  ppuVar7 = (undefined **)0x0;
  pppuVar4 = (undefined ***)0x0;
joined_r0x00010a69153c:
  if (pppuVar5 != (undefined ***)0x0) {
LAB_10a691548:
    pppuVar1 = pppuVar5 + 1;
    do {
      ppuVar6 = *pppuVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(pppuVar1,0x10);
      if (bVar3) {
        *pppuVar1 = (undefined **)((long)ppuVar6 + -1);
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (ppuVar6 == (undefined **)0x0) {
      (*(code *)(*pppuVar5)[2])(pppuVar5);
      __ZNSt3__119__shared_weak_count14__release_weakEv(pppuVar5);
      pppuVar4 = pppuVar5;
    }
  }
  if (ppuVar7 == (undefined **)0x0) {
LAB_10a6915a8:
    uStack_88 = 0x10a6a7ce8;
    ppuStack_80 = &PTR_FUN_110c0d408;
    pppuStack_78 = param_1;
    FUN_10a6057d8(*(long *)(param_1[0xc][0x106] + 0x18) + 0x108,&uStack_88);
    pppuVar4 = &ppuStack_80;
    (*(code *)*ppuStack_80)(pppuVar4);
    goto LAB_10a6915ec;
  }
LAB_10a69157c:
  puVar8 = (undefined8 *)ppuVar7[0x9c];
  for (puVar9 = (undefined8 *)ppuVar7[0x9b]; puVar9 != puVar8; puVar9 = puVar9 + 1) {
    param_1[0x17] = (undefined **)*puVar9;
    pppuVar4 = param_1;
    FUN_10a5861f0();
  }
LAB_10a6915ec:
  param_1[0x17] = (undefined **)0x0;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_48) {
    ___stack_chk_fail();
    func_0x00010a05253c(&ppuStack_98);
    __Unwind_Resume(pppuVar4);
    return;
  }
  return;
}



/* Entry: 10a6916d8; end: 10a6916db;  */

void FUN_10a6916d8(void)

{
  return;
}



/* Entry: 10a6916dc; end: 10a691883;  */

void FUN_10a6916dc(undefined8 *param_1,long param_2,long param_3,long param_4)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  long *plVar6;
  long *plVar7;
  long lVar8;
  long lVar9;
  
  plVar4 = (long *)(param_2 + 0x60);
  if (param_4 != 0) {
    plVar4 = (long *)(param_4 + 0xb0);
  }
  lVar9 = *plVar4;
  lVar8 = param_2;
  func_0x00010a0fda30();
  plVar4 = (long *)0x110;
  __Znwm();
  plVar6 = plVar4 + 1;
  plVar4[2] = 0;
  *plVar6 = 0;
  *plVar4 = (long)&PTR_DAT_110c0d438;
  plVar7 = plVar4 + 3;
  *plVar7 = (long)&PTR_FUN_110c0e210;
  *(undefined1 *)(plVar4 + 4) = 0;
  plVar4[6] = 0;
  plVar4[7] = 0;
  plVar4[0xb] = lVar8;
  plVar4[0xc] = param_3;
  *(undefined1 *)(plVar4 + 0xd) = 0;
  *(undefined8 *)((long)plVar4 + 0x6c) = 0x800000000;
  plVar4[0xf] = lVar9;
  *(undefined1 *)(plVar4 + 0x10) = 0;
  *(undefined1 *)(plVar4 + 0x14) = 0;
  *(undefined1 *)(plVar4 + 0x15) = 1;
  plVar4[0x16] = 0;
  plVar4[0x17] = 0;
  plVar4[5] = (long)&PTR_FUN_110c0e2a8;
  plVar4[10] = (long)&PTR_FUN_110c0e300;
  plVar4[0x1f] = 0;
  plVar4[0x20] = 0;
  plVar4[0x21] = 0;
  plVar4[0x19] = 0;
  plVar4[0x18] = 0;
  plVar4[0x1b] = 0;
  plVar4[0x1a] = 0;
  plVar4[0x1d] = 0;
  plVar4[0x1c] = 0;
  *(undefined4 *)(plVar4 + 0x1e) = 0;
  do {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
    if (bVar3) {
      *plVar6 = *plVar6 + 1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  plVar1 = plVar4 + 2;
  do {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar3) {
      *plVar1 = *plVar1 + 1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  plVar4[8] = (long)plVar7;
  plVar4[9] = (long)plVar4;
  do {
    lVar8 = *plVar6;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
    if (bVar3) {
      *plVar6 = lVar8 + -1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (lVar8 == 0) {
    (**(code **)(*plVar4 + 0x10))(plVar4);
    __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
  }
  *(undefined4 *)((long)plVar4 + 0x6c) = *(undefined4 *)(param_2 + 0x54);
  lVar9 = *(long *)(param_2 + 0xa0);
  lVar8 = *(long *)(param_2 + 0x98);
  if (*(long *)(param_2 + 0xa0) != 0) {
    plVar6 = (long *)(*(long *)(param_2 + 0xa0) + 0x10);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar3) {
        *plVar6 = *plVar6 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  lVar5 = plVar4[0x17];
  plVar4[0x17] = lVar9;
  plVar4[0x16] = lVar8;
  if (lVar5 != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  FUN_10a6a7df4(plVar4 + 0x18,param_2 + 0xa8);
  *param_1 = plVar7;
  param_1[1] = plVar4;
  return;
}



/* Entry: 10a691884; end: 10a6919b7;  */

void FUN_10a691884(long param_1,code **param_2)

{
  undefined **ppuVar1;
  undefined ***pppuVar2;
  long lVar3;
  code **unaff_x20;
  undefined **ppuVar4;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined **ppuStack_60;
  long lStack_58;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pppuVar2 = (undefined ***)0x0;
  if (*(long *)(*(long *)(param_1 + 0x60) + 0x840) != 0) {
    unaff_x20 = &pcStack_68;
    pcStack_68 = FUN_10a6a8c34;
    ppuStack_60 = &PTR_FUN_110c0d4c8;
    param_2 = &pcStack_68;
    lStack_58 = param_1;
    FUN_10a6919b8();
    pppuVar2 = &ppuStack_60;
    (*(code *)*ppuStack_60)();
  }
  while (*(long *)(param_1 + 0xd0) != 0) {
    lVar3 = *(long *)(*(long *)(*(long *)(param_1 + 0xb0) + (*(ulong *)(param_1 + 200) >> 8) * 8) +
                     (*(ulong *)(param_1 + 200) & 0xff) * 0x10);
    *(undefined4 *)(param_1 + 0xd8) = *(undefined4 *)(lVar3 + 4);
    param_2 = (code **)(lVar3 + 8);
    FUN_10a691a30(&uStack_80);
    if (*(long *)(param_1 + 0xe0) != 0) {
      *(long *)(param_1 + 0xe8) = *(long *)(param_1 + 0xe0);
      __ZdlPv();
      *(undefined8 *)(param_1 + 0xe0) = 0;
      *(undefined8 *)(param_1 + 0xe8) = 0;
      *(undefined8 *)(param_1 + 0xf0) = 0;
    }
    *(undefined8 *)(param_1 + 0xe8) = uStack_78;
    *(undefined8 *)(param_1 + 0xe0) = uStack_80;
    *(undefined8 *)(param_1 + 0xf0) = uStack_70;
    FUN_10a5861f0(param_1);
    pppuVar2 = (undefined ***)(param_1 + 0xa8);
    FUN_10a6a8e70();
  }
  *(undefined4 *)(param_1 + 0xd8) = 0;
  *(undefined8 *)(param_1 + 0xe8) = *(undefined8 *)(param_1 + 0xe0);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return;
  }
  ___stack_chk_fail();
  (*(code *)*ppuStack_60)(unaff_x20 + 1);
  __Unwind_Resume();
  __ZNSt3__15mutex4lockEv(pppuVar2 + 7);
  ppuVar1 = (pppuVar2 + (long)*(int *)(pppuVar2 + 6) * 3)[1];
  for (ppuVar4 = pppuVar2[(long)*(int *)(pppuVar2 + 6) * 3]; ppuVar4 != ppuVar1;
      ppuVar4 = ppuVar4 + 4) {
    (**param_2)(ppuVar4,param_2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd478. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__15mutex6unlockEv_110346788)(pppuVar2 + 7);
  return;
}



/* Entry: 10a6919b8; end: 10a691a2f;  */

void FUN_10a6919b8(long param_1,undefined8 *param_2)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  
  __ZNSt3__15mutex4lockEv(param_1 + 0x38);
  plVar2 = (long *)(param_1 + (long)*(int *)(param_1 + 0x30) * 0x18);
  lVar1 = plVar2[1];
  for (lVar3 = *plVar2; lVar3 != lVar1; lVar3 = lVar3 + 0x20) {
    (*(code *)*param_2)(lVar3,param_2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd478. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__15mutex6unlockEv_110346788)(param_1 + 0x38);
  return;
}



/* Entry: 10a691a30; end: 10a691b7f;  */

void FUN_10a691a30(undefined8 *param_1,long *param_2)

{
  ulong uVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  code *pcVar5;
  long *plVar6;
  long *plVar7;
  ulong uVar8;
  long unaff_x20;
  long lVar9;
  undefined4 *puVar10;
  long *plVar11;
  long *plVar12;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  puVar3 = (undefined4 *)*param_2;
  puVar10 = (undefined4 *)param_2[1];
  if ((long)puVar10 - (long)puVar3 == 0) {
    plVar11 = (long *)0x0;
    plVar6 = (long *)0x0;
    plVar7 = plVar6;
  }
  else {
    plVar6 = (long *)((long)puVar10 - (long)puVar3 >> 2);
    if ((ulong)plVar6 >> 0x3e != 0) {
      FUN_10a69c338();
      if (unaff_x20 != 0) {
        param_1[1] = unaff_x20;
        __ZdlPv();
      }
      __Unwind_Resume(plVar6);
      return;
    }
    plVar7 = param_2;
    FUN_10a69c34c();
    plVar11 = (long *)((long)plVar6 + (long)plVar7 * 4);
    *param_1 = plVar6;
    param_1[1] = plVar6;
    param_1[2] = plVar11;
    puVar3 = (undefined4 *)*param_2;
    puVar10 = (undefined4 *)param_2[1];
    param_2 = plVar7;
    plVar7 = plVar6;
  }
  do {
    if (puVar3 == puVar10) {
      return;
    }
    uVar4 = *puVar3;
    if (plVar7 < plVar11) {
      plVar12 = (long *)((long)plVar7 + 4);
      *(undefined4 *)plVar7 = uVar4;
      plVar7 = plVar6;
    }
    else {
      lVar9 = (long)plVar7 - (long)plVar6;
      uVar1 = (lVar9 >> 2) + 1;
      if (uVar1 >> 0x3e != 0) {
        FUN_10a69c338();
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x10a691b5c);
        (*pcVar5)();
      }
      uVar8 = (long)plVar11 - (long)plVar6 >> 1;
      if (uVar8 <= uVar1) {
        uVar8 = uVar1;
      }
      if (0x7ffffffffffffffb < (ulong)((long)plVar11 - (long)plVar6)) {
        uVar8 = 0x3fffffffffffffff;
      }
      FUN_10a69c34c();
      puVar2 = (undefined4 *)(uVar8 + lVar9);
      plVar11 = (long *)(uVar8 + (long)param_2 * 4);
      plVar7 = (long *)(puVar2 + -(lVar9 >> 2));
      plVar12 = (long *)(puVar2 + 1);
      *puVar2 = uVar4;
      param_2 = plVar6;
      _memcpy(plVar7,plVar6,lVar9);
      *param_1 = plVar7;
      param_1[1] = plVar12;
      param_1[2] = plVar11;
      if (plVar6 != (long *)0x0) {
        __ZdlPv(plVar6);
      }
    }
    param_1[1] = plVar12;
    puVar3 = puVar3 + 1;
    plVar6 = plVar7;
    plVar7 = plVar12;
  } while( true );
}



/* Entry: 10a691b80; end: 10a691b83;  */

void FUN_10a691b80(void)

{
  return;
}



/* Entry: 10a691b84; end: 10a691d2b;  */

void FUN_10a691b84(undefined8 *param_1,long param_2,long param_3,long param_4)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  long *plVar6;
  long *plVar7;
  long lVar8;
  long lVar9;
  
  plVar4 = (long *)(param_2 + 0x60);
  if (param_4 != 0) {
    plVar4 = (long *)(param_4 + 0xb0);
  }
  lVar9 = *plVar4;
  lVar8 = param_2;
  func_0x00010a0fda30();
  plVar4 = (long *)0x110;
  __Znwm();
  plVar6 = plVar4 + 1;
  plVar4[2] = 0;
  *plVar6 = 0;
  *plVar4 = (long)&PTR_FUN_110c0d4f8;
  plVar7 = plVar4 + 3;
  *plVar7 = (long)&PTR_FUN_110c0e320;
  *(undefined1 *)(plVar4 + 4) = 0;
  plVar4[6] = 0;
  plVar4[7] = 0;
  plVar4[0xb] = lVar8;
  plVar4[0xc] = param_3;
  *(undefined1 *)(plVar4 + 0xd) = 0;
  *(undefined8 *)((long)plVar4 + 0x6c) = 0x800000000;
  plVar4[0xf] = lVar9;
  *(undefined1 *)(plVar4 + 0x10) = 0;
  *(undefined1 *)(plVar4 + 0x14) = 0;
  *(undefined1 *)(plVar4 + 0x15) = 1;
  plVar4[0x16] = 0;
  plVar4[0x17] = 0;
  plVar4[5] = (long)&PTR_FUN_110c0e3b8;
  plVar4[10] = (long)&PTR_FUN_110c0e410;
  plVar4[0x1f] = 0;
  plVar4[0x20] = 0;
  plVar4[0x21] = 0;
  plVar4[0x19] = 0;
  plVar4[0x18] = 0;
  plVar4[0x1b] = 0;
  plVar4[0x1a] = 0;
  plVar4[0x1d] = 0;
  plVar4[0x1c] = 0;
  *(undefined4 *)(plVar4 + 0x1e) = 0;
  do {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
    if (bVar3) {
      *plVar6 = *plVar6 + 1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  plVar1 = plVar4 + 2;
  do {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar3) {
      *plVar1 = *plVar1 + 1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  plVar4[8] = (long)plVar7;
  plVar4[9] = (long)plVar4;
  do {
    lVar8 = *plVar6;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
    if (bVar3) {
      *plVar6 = lVar8 + -1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (lVar8 == 0) {
    (**(code **)(*plVar4 + 0x10))(plVar4);
    __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
  }
  *(undefined4 *)((long)plVar4 + 0x6c) = *(undefined4 *)(param_2 + 0x54);
  lVar9 = *(long *)(param_2 + 0xa0);
  lVar8 = *(long *)(param_2 + 0x98);
  if (*(long *)(param_2 + 0xa0) != 0) {
    plVar6 = (long *)(*(long *)(param_2 + 0xa0) + 0x10);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar3) {
        *plVar6 = *plVar6 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  lVar5 = plVar4[0x17];
  plVar4[0x17] = lVar9;
  plVar4[0x16] = lVar8;
  if (lVar5 != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  FUN_10a6a7df4(plVar4 + 0x18,param_2 + 0xa8);
  *param_1 = plVar7;
  param_1[1] = plVar4;
  return;
}



/* Entry: 10a691d2c; end: 10a691e63;  */

void FUN_10a691d2c(undefined ***param_1)

{
  undefined ***pppuVar1;
  long lVar2;
  code **unaff_x20;
  undefined **ppuStack_80;
  undefined **ppuStack_78;
  undefined **ppuStack_70;
  code *pcStack_68;
  undefined **ppuStack_60;
  undefined ***pppuStack_58;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pppuVar1 = param_1;
  if (param_1[0xc][0x108] != (undefined *)0x0) {
    unaff_x20 = &pcStack_68;
    pcStack_68 = FUN_10a6a9130;
    ppuStack_60 = &PTR_FUN_110c0d538;
    pppuStack_58 = param_1;
    FUN_10a6919b8(param_1[0xc][0x108] + 0xb8,&pcStack_68);
    pppuVar1 = &ppuStack_60;
    (*(code *)*ppuStack_60)(pppuVar1);
  }
  while (param_1[0x1a] != (undefined **)0x0) {
    lVar2 = *(long *)(param_1[0x16][(ulong)param_1[0x19] >> 8] +
                     ((ulong)param_1[0x19] & 0xff) * 0x10);
    *(undefined4 *)(param_1 + 0x1b) = *(undefined4 *)(lVar2 + 4);
    FUN_10a691a30(&ppuStack_80,lVar2 + 8);
    if (param_1[0x1c] != (undefined **)0x0) {
      param_1[0x1d] = param_1[0x1c];
      __ZdlPv();
      param_1[0x1c] = (undefined **)0x0;
      param_1[0x1d] = (undefined **)0x0;
      param_1[0x1e] = (undefined **)0x0;
    }
    param_1[0x1d] = ppuStack_78;
    param_1[0x1c] = ppuStack_80;
    param_1[0x1e] = ppuStack_70;
    FUN_10a5861f0(param_1);
    pppuVar1 = param_1 + 0x15;
    FUN_10a6a8e70(pppuVar1);
  }
  *(undefined4 *)(param_1 + 0x1b) = 0;
  param_1[0x1d] = param_1[0x1c];
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return;
  }
  ___stack_chk_fail();
  (*(code *)*ppuStack_60)(unaff_x20 + 1);
  __Unwind_Resume(pppuVar1);
  return;
}



/* Entry: 10a691e64; end: 10a691e67;  */

void FUN_10a691e64(void)

{
  return;
}



/* Entry: 10a691e68; end: 10a691fcf;  */

void FUN_10a691e68(undefined8 *param_1,long param_2,long param_3,long param_4)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  long *plVar8;
  long lVar9;
  
  plVar4 = (long *)(param_2 + 0x60);
  if (param_4 != 0) {
    plVar4 = (long *)(param_4 + 0xb0);
  }
  lVar9 = *plVar4;
  lVar7 = param_2;
  func_0x00010a0fda30();
  plVar4 = (long *)0xc8;
  __Znwm();
  plVar6 = plVar4 + 1;
  plVar4[2] = 0;
  *plVar6 = 0;
  *plVar4 = (long)&PTR_DAT_110c0d568;
  plVar8 = plVar4 + 3;
  *plVar8 = (long)&PTR_FUN_110c0e870;
  *(undefined1 *)(plVar4 + 4) = 0;
  plVar4[6] = 0;
  plVar4[7] = 0;
  plVar4[0xb] = lVar7;
  plVar4[0xc] = param_3;
  *(undefined1 *)(plVar4 + 0xd) = 0;
  *(undefined8 *)((long)plVar4 + 0x6c) = 0x800000000;
  plVar4[0xf] = lVar9;
  *(undefined1 *)(plVar4 + 0x10) = 0;
  *(undefined1 *)(plVar4 + 0x14) = 0;
  *(undefined1 *)(plVar4 + 0x15) = 1;
  plVar4[0x16] = 0;
  plVar4[0x17] = 0;
  plVar4[5] = (long)&PTR_FUN_110c0e908;
  plVar4[10] = (long)&PTR_FUN_110c0e960;
  plVar4[0x18] = 0;
  do {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
    if (bVar3) {
      *plVar6 = *plVar6 + 1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  plVar1 = plVar4 + 2;
  do {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar3) {
      *plVar1 = *plVar1 + 1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  plVar4[8] = (long)plVar8;
  plVar4[9] = (long)plVar4;
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
    (**(code **)(*plVar4 + 0x10))(plVar4);
    __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
  }
  *(undefined4 *)((long)plVar4 + 0x6c) = *(undefined4 *)(param_2 + 0x54);
  lVar9 = *(long *)(param_2 + 0xa0);
  lVar7 = *(long *)(param_2 + 0x98);
  if (*(long *)(param_2 + 0xa0) != 0) {
    plVar6 = (long *)(*(long *)(param_2 + 0xa0) + 0x10);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar3) {
        *plVar6 = *plVar6 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  lVar5 = plVar4[0x17];
  plVar4[0x17] = lVar9;
  plVar4[0x16] = lVar7;
  if (lVar5 != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  *param_1 = plVar8;
  param_1[1] = plVar4;
  return;
}



/* Entry: 10a691fd0; end: 10a692083;  */

void FUN_10a691fd0(long param_1)

{
  long *plVar1;
  code **ppcVar2;
  undefined4 uVar3;
  char cVar4;
  bool bVar5;
  undefined ***pppuVar6;
  undefined *****pppppuVar7;
  undefined8 *puVar8;
  undefined8 **ppuVar9;
  undefined8 **ppuVar10;
  long *plVar11;
  long *plVar12;
  undefined *****pppppuVar13;
  code **ppcVar14;
  int iVar15;
  undefined8 *extraout_x8;
  long *plVar16;
  long lVar17;
  undefined **ppuVar18;
  code *pcVar19;
  undefined8 *puVar20;
  undefined8 auStack_208 [2];
  char cStack_1f1;
  undefined ***pppuStack_1f0;
  undefined8 *apuStack_1e8 [7];
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  code *pcStack_198;
  undefined **ppuStack_190;
  undefined8 *puStack_188;
  long lStack_158;
  undefined ****ppppuStack_118;
  ulong uStack_110;
  byte bStack_101;
  undefined ****ppppuStack_100;
  ulong uStack_f8;
  undefined ***pppuStack_f0;
  code *pcStack_e8;
  undefined **ppuStack_e0;
  undefined ***pppuStack_d8;
  long lStack_a8;
  long lStack_68;
  undefined **ppuStack_60;
  long lStack_58;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lStack_68 = 0x10a6a9280;
  ppuStack_60 = &PTR_DAT_110c0d5a8;
  plVar11 = &lStack_68;
  lStack_58 = param_1;
  FUN_10a6057d8(*(long *)(*(long *)(*(long *)(param_1 + 0x60) + 0x830) + 0x18) + 0x108);
  pppuVar6 = &ppuStack_60;
  (*(code *)*ppuStack_60)();
  *(undefined8 *)(param_1 + 0xa8) = 0;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return;
  }
  ___stack_chk_fail();
  (*(code *)*ppuStack_60)(&ppuStack_60);
  __Unwind_Resume();
  lStack_a8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcStack_e8 = FUN_10a6a9544;
  ppuStack_e0 = &PTR_FUN_110c0d5e0;
  pppuStack_d8 = pppuVar6;
  FUN_10a692228(plVar11,&pcStack_e8);
  (*(code *)*ppuStack_e0)(&ppuStack_e0);
  (**(code **)(*plVar11 + 0xa8))(&ppppuStack_118,plVar11,&PTR_DAT_110c093f8,&UNK_10f66b8c1,0);
  uStack_f8 = uStack_110;
  ppppuStack_100 = ppppuStack_118;
  if (-1 < (char)bStack_101) {
    uStack_f8 = (ulong)bStack_101;
    ppppuStack_100 = (undefined ****)&ppppuStack_118;
  }
  pppuStack_f0 = (undefined ***)&PTR_DAT_110bc26e8;
  pppppuVar7 = (undefined *****)&pppuStack_f0;
  pppppuVar13 = &ppppuStack_100;
  FUN_10a2e1844();
  if (pppppuVar7 == (undefined *****)&UNK_110bc2778) {
    iVar15 = -1;
  }
  else {
    iVar15 = *(int *)(pppppuVar7 + 2);
  }
  *(int *)(pppuVar6 + 0x17) = iVar15;
  if ((char)bStack_101 < '\0') {
    pppppuVar7 = (undefined *****)ppppuStack_118;
    __ZdlPv();
    iVar15 = *(int *)(pppuVar6 + 0x17);
  }
  if (iVar15 != -1) {
    ppuVar18 = pppuVar6[0xc];
    pppppuVar13 = (undefined *****)&UNK_10f66bb21;
    pppppuVar7 = &ppppuStack_118;
    func_0x000107c2b054();
    if (ppuVar18 != (undefined **)0x0) {
      pppppuVar7 = (undefined *****)ppuVar18[0x11b];
      pppppuVar13 = &ppppuStack_118;
      FUN_10a76c080();
    }
    if ((char)bStack_101 < '\0') {
      pppppuVar7 = (undefined *****)ppppuStack_118;
      __ZdlPv();
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_a8) {
    return;
  }
  ___stack_chk_fail();
  if ((char)bStack_101 < '\0') {
    __ZdlPv(ppppuStack_118);
  }
  __Unwind_Resume();
  lStack_158 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pppuStack_1f0 = (undefined ***)*pppppuVar13;
  (*(code *)pppppuVar13[1][2])(apuStack_1e8);
  uStack_1a0 = CONCAT17(10,(undefined7)uStack_1a0);
  uStack_1b0 = 0x616c7570696e614d;
  uStack_1a8 = CONCAT53(uStack_1a8._3_5_,0x6574);
  pcStack_198 = FUN_10a6a92c8;
  ppuStack_190 = &PTR_FUN_110c0d5c8;
  puVar8 = (undefined8 *)0x58;
  __Znwm();
  *puVar8 = pppuStack_1f0;
  (*(code *)apuStack_1e8[0][2])(puVar8 + 1,apuStack_1e8);
  puVar8[9] = uStack_1a8;
  puVar8[8] = uStack_1b0;
  puVar8[10] = uStack_1a0;
  uStack_1a8 = 0;
  uStack_1a0 = 0;
  uStack_1b0 = 0;
  puStack_188 = puVar8;
  func_0x000107c2b054(auStack_208,&UNK_10f66b8c1);
  ppuVar18 = &PTR_DAT_110c093d8;
  ppcVar14 = &pcStack_198;
  (*(code *)(*pppppuVar7)[0x4a])(pppppuVar7,&PTR_DAT_110c093d8,ppcVar14,0,auStack_208);
  if (cStack_1f1 < '\0') {
    __ZdlPv(auStack_208[0]);
  }
  (*(code *)*ppuStack_190)(&ppuStack_190);
  if (uStack_1a0 < 0) {
    __ZdlPv(uStack_1b0);
  }
  ppuVar9 = apuStack_1e8;
  (*(code *)*apuStack_1e8[0])();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_158) {
    return;
  }
  ___stack_chk_fail();
  if (cStack_1f1 < '\0') {
    __ZdlPv(auStack_208[0]);
  }
  (*(code *)*ppuStack_190)(&ppuStack_190);
  if (uStack_1a0 < 0) {
    __ZdlPv(uStack_1b0);
  }
  (*(code *)*apuStack_1e8[0])(apuStack_1e8);
  __Unwind_Resume();
  ppcVar2 = (code **)(ppuVar9 + 0xc);
  if (ppcVar14 != (code **)0x0) {
    ppcVar2 = ppcVar14 + 0x16;
  }
  pcVar19 = *ppcVar2;
  ppuVar10 = ppuVar9;
  func_0x00010a0fda30();
  plVar11 = (long *)0xd8;
  __Znwm();
  plVar12 = plVar11 + 1;
  plVar11[2] = 0;
  *plVar12 = 0;
  *plVar11 = (long)&PTR_DAT_110c0d608;
  plVar16 = plVar11 + 3;
  *plVar16 = (long)&PTR_FUN_110c0e980;
  *(undefined1 *)(plVar11 + 4) = 0;
  plVar11[6] = 0;
  plVar11[7] = 0;
  plVar11[0xb] = (long)ppuVar10;
  plVar11[0xc] = (long)ppuVar18;
  *(undefined1 *)(plVar11 + 0xd) = 0;
  *(undefined8 *)((long)plVar11 + 0x6c) = 0x800000000;
  plVar11[0xf] = (long)pcVar19;
  *(undefined1 *)(plVar11 + 0x10) = 0;
  *(undefined1 *)(plVar11 + 0x14) = 0;
  *(undefined1 *)(plVar11 + 0x15) = 1;
  plVar11[0x16] = 0;
  plVar11[0x17] = 0;
  plVar11[5] = (long)&PTR_FUN_110c0ea18;
  plVar11[10] = (long)&PTR_FUN_110c0ea70;
  plVar11[0x18] = 0;
  plVar11[0x19] = 0;
  *(undefined4 *)(plVar11 + 0x1a) = 0xffffffff;
  *(undefined1 *)((long)plVar11 + 0xd4) = 0;
  do {
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar12,0x10);
    if (bVar5) {
      *plVar12 = *plVar12 + 1;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  plVar1 = plVar11 + 2;
  do {
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar5) {
      *plVar1 = *plVar1 + 1;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  plVar11[8] = (long)plVar16;
  plVar11[9] = (long)plVar11;
  do {
    lVar17 = *plVar12;
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar12,0x10);
    if (bVar5) {
      *plVar12 = lVar17 + -1;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  if (lVar17 == 0) {
    (**(code **)(*plVar11 + 0x10))(plVar11);
    __ZNSt3__119__shared_weak_count14__release_weakEv(plVar11);
  }
  *(undefined4 *)((long)plVar11 + 0x6c) = *(undefined4 *)((long)ppuVar9 + 0x54);
  puVar20 = ppuVar9[0x14];
  puVar8 = ppuVar9[0x13];
  if (ppuVar9[0x14] != (undefined8 *)0x0) {
    plVar12 = ppuVar9[0x14] + 2;
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar12,0x10);
      if (bVar5) {
        *plVar12 = *plVar12 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  lVar17 = plVar11[0x17];
  plVar11[0x17] = (long)puVar20;
  plVar11[0x16] = (long)puVar8;
  if (lVar17 != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  plVar12 = ppuVar9[0x16];
  if (plVar12 == (long *)0x0) {
    plVar12 = (long *)0x0;
  }
  else {
    __ZNSt3__119__shared_weak_count4lockEv();
  }
  FUN_10a692604();
  if (plVar12 != (long *)0x0) {
    plVar1 = plVar12 + 1;
    do {
      lVar17 = *plVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar5) {
        *plVar1 = lVar17 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar17 == 0) {
      (**(code **)(*plVar12 + 0x10))(plVar12);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar12);
    }
  }
  uVar3 = *(undefined4 *)(ppuVar9 + 0x17);
  extraout_x8[1] = plVar11;
  *extraout_x8 = plVar16;
  *(undefined4 *)(plVar11 + 0x1a) = uVar3;
  return;
}



/* Entry: 10a692084; end: 10a692227;  */

void FUN_10a692084(long param_1,long *param_2)

{
  long *plVar1;
  code **ppcVar2;
  undefined4 uVar3;
  char cVar4;
  bool bVar5;
  undefined *****pppppuVar6;
  undefined8 *puVar7;
  undefined8 **ppuVar8;
  undefined8 **ppuVar9;
  long *plVar10;
  long *plVar11;
  undefined *****pppppuVar12;
  undefined **ppuVar13;
  code **ppcVar14;
  int iVar15;
  undefined8 *extraout_x8;
  long *plVar16;
  long lVar17;
  code *pcVar18;
  undefined8 *puVar19;
  undefined8 auStack_198 [2];
  char cStack_181;
  undefined ***pppuStack_180;
  undefined8 *apuStack_178 [7];
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  code *pcStack_128;
  undefined **ppuStack_120;
  undefined8 *puStack_118;
  long lStack_e8;
  undefined ****ppppuStack_a8;
  ulong uStack_a0;
  byte bStack_91;
  undefined ****ppppuStack_90;
  ulong uStack_88;
  undefined ***pppuStack_80;
  code *pcStack_78;
  undefined **ppuStack_70;
  long lStack_68;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcStack_78 = FUN_10a6a9544;
  ppuStack_70 = &PTR_FUN_110c0d5e0;
  lStack_68 = param_1;
  FUN_10a692228(param_2,&pcStack_78);
  (*(code *)*ppuStack_70)(&ppuStack_70);
  (**(code **)(*param_2 + 0xa8))(&ppppuStack_a8,param_2,&PTR_DAT_110c093f8,&UNK_10f66b8c1,0);
  uStack_88 = uStack_a0;
  ppppuStack_90 = ppppuStack_a8;
  if (-1 < (char)bStack_91) {
    uStack_88 = (ulong)bStack_91;
    ppppuStack_90 = (undefined ****)&ppppuStack_a8;
  }
  pppuStack_80 = (undefined ***)&PTR_DAT_110bc26e8;
  pppppuVar6 = (undefined *****)&pppuStack_80;
  pppppuVar12 = &ppppuStack_90;
  FUN_10a2e1844();
  if (pppppuVar6 == (undefined *****)&UNK_110bc2778) {
    iVar15 = -1;
  }
  else {
    iVar15 = *(int *)(pppppuVar6 + 2);
  }
  *(int *)(param_1 + 0xb8) = iVar15;
  if ((char)bStack_91 < '\0') {
    pppppuVar6 = (undefined *****)ppppuStack_a8;
    __ZdlPv();
    iVar15 = *(int *)(param_1 + 0xb8);
  }
  if (iVar15 != -1) {
    lVar17 = *(long *)(param_1 + 0x60);
    pppppuVar12 = (undefined *****)&UNK_10f66bb21;
    pppppuVar6 = &ppppuStack_a8;
    func_0x000107c2b054();
    if (lVar17 != 0) {
      pppppuVar6 = *(undefined ******)(lVar17 + 0x8d8);
      pppppuVar12 = &ppppuStack_a8;
      FUN_10a76c080();
    }
    if ((char)bStack_91 < '\0') {
      pppppuVar6 = (undefined *****)ppppuStack_a8;
      __ZdlPv();
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return;
  }
  ___stack_chk_fail();
  if ((char)bStack_91 < '\0') {
    __ZdlPv(ppppuStack_a8);
  }
  __Unwind_Resume();
  lStack_e8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pppuStack_180 = (undefined ***)*pppppuVar12;
  (*(code *)pppppuVar12[1][2])(apuStack_178);
  uStack_130 = CONCAT17(10,(undefined7)uStack_130);
  uStack_140 = 0x616c7570696e614d;
  uStack_138 = CONCAT53(uStack_138._3_5_,0x6574);
  pcStack_128 = FUN_10a6a92c8;
  ppuStack_120 = &PTR_FUN_110c0d5c8;
  puVar7 = (undefined8 *)0x58;
  __Znwm();
  *puVar7 = pppuStack_180;
  (*(code *)apuStack_178[0][2])(puVar7 + 1,apuStack_178);
  puVar7[9] = uStack_138;
  puVar7[8] = uStack_140;
  puVar7[10] = uStack_130;
  uStack_138 = 0;
  uStack_130 = 0;
  uStack_140 = 0;
  puStack_118 = puVar7;
  func_0x000107c2b054(auStack_198,&UNK_10f66b8c1);
  ppuVar13 = &PTR_DAT_110c093d8;
  ppcVar14 = &pcStack_128;
  (*(code *)(*pppppuVar6)[0x4a])(pppppuVar6,&PTR_DAT_110c093d8,ppcVar14,0,auStack_198);
  if (cStack_181 < '\0') {
    __ZdlPv(auStack_198[0]);
  }
  (*(code *)*ppuStack_120)(&ppuStack_120);
  if (uStack_130 < 0) {
    __ZdlPv(uStack_140);
  }
  ppuVar8 = apuStack_178;
  (*(code *)*apuStack_178[0])();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_e8) {
    return;
  }
  ___stack_chk_fail();
  if (cStack_181 < '\0') {
    __ZdlPv(auStack_198[0]);
  }
  (*(code *)*ppuStack_120)(&ppuStack_120);
  if (uStack_130 < 0) {
    __ZdlPv(uStack_140);
  }
  (*(code *)*apuStack_178[0])(apuStack_178);
  __Unwind_Resume();
  ppcVar2 = (code **)(ppuVar8 + 0xc);
  if (ppcVar14 != (code **)0x0) {
    ppcVar2 = ppcVar14 + 0x16;
  }
  pcVar18 = *ppcVar2;
  ppuVar9 = ppuVar8;
  func_0x00010a0fda30();
  plVar10 = (long *)0xd8;
  __Znwm();
  plVar11 = plVar10 + 1;
  plVar10[2] = 0;
  *plVar11 = 0;
  *plVar10 = (long)&PTR_DAT_110c0d608;
  plVar16 = plVar10 + 3;
  *plVar16 = (long)&PTR_FUN_110c0e980;
  *(undefined1 *)(plVar10 + 4) = 0;
  plVar10[6] = 0;
  plVar10[7] = 0;
  plVar10[0xb] = (long)ppuVar9;
  plVar10[0xc] = (long)ppuVar13;
  *(undefined1 *)(plVar10 + 0xd) = 0;
  *(undefined8 *)((long)plVar10 + 0x6c) = 0x800000000;
  plVar10[0xf] = (long)pcVar18;
  *(undefined1 *)(plVar10 + 0x10) = 0;
  *(undefined1 *)(plVar10 + 0x14) = 0;
  *(undefined1 *)(plVar10 + 0x15) = 1;
  plVar10[0x16] = 0;
  plVar10[0x17] = 0;
  plVar10[5] = (long)&PTR_FUN_110c0ea18;
  plVar10[10] = (long)&PTR_FUN_110c0ea70;
  plVar10[0x18] = 0;
  plVar10[0x19] = 0;
  *(undefined4 *)(plVar10 + 0x1a) = 0xffffffff;
  *(undefined1 *)((long)plVar10 + 0xd4) = 0;
  do {
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar11,0x10);
    if (bVar5) {
      *plVar11 = *plVar11 + 1;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  plVar1 = plVar10 + 2;
  do {
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar5) {
      *plVar1 = *plVar1 + 1;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  plVar10[8] = (long)plVar16;
  plVar10[9] = (long)plVar10;
  do {
    lVar17 = *plVar11;
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar11,0x10);
    if (bVar5) {
      *plVar11 = lVar17 + -1;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  if (lVar17 == 0) {
    (**(code **)(*plVar10 + 0x10))(plVar10);
    __ZNSt3__119__shared_weak_count14__release_weakEv(plVar10);
  }
  *(undefined4 *)((long)plVar10 + 0x6c) = *(undefined4 *)((long)ppuVar8 + 0x54);
  puVar19 = ppuVar8[0x14];
  puVar7 = ppuVar8[0x13];
  if (ppuVar8[0x14] != (undefined8 *)0x0) {
    plVar11 = ppuVar8[0x14] + 2;
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar11,0x10);
      if (bVar5) {
        *plVar11 = *plVar11 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  lVar17 = plVar10[0x17];
  plVar10[0x17] = (long)puVar19;
  plVar10[0x16] = (long)puVar7;
  if (lVar17 != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  plVar11 = ppuVar8[0x16];
  if (plVar11 == (long *)0x0) {
    plVar11 = (long *)0x0;
  }
  else {
    __ZNSt3__119__shared_weak_count4lockEv();
  }
  FUN_10a692604();
  if (plVar11 != (long *)0x0) {
    plVar1 = plVar11 + 1;
    do {
      lVar17 = *plVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar5) {
        *plVar1 = lVar17 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar17 == 0) {
      (**(code **)(*plVar11 + 0x10))(plVar11);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar11);
    }
  }
  uVar3 = *(undefined4 *)(ppuVar8 + 0x17);
  extraout_x8[1] = plVar10;
  *extraout_x8 = plVar16;
  *(undefined4 *)(plVar10 + 0x1a) = uVar3;
  return;
}



/* Entry: 10a692228; end: 10a6923e3;  */

void FUN_10a692228(long *param_1,undefined8 *param_2)

{
  long *plVar1;
  code **ppcVar2;
  undefined4 uVar3;
  char cVar4;
  bool bVar5;
  undefined8 *puVar6;
  undefined8 **ppuVar7;
  undefined8 **ppuVar8;
  long *plVar9;
  long *plVar10;
  undefined **ppuVar11;
  code **ppcVar12;
  undefined8 *extraout_x8;
  long *plVar13;
  long lVar14;
  code *pcVar15;
  undefined8 *puVar16;
  undefined8 auStack_e8 [2];
  char cStack_d1;
  undefined8 uStack_d0;
  undefined8 *apuStack_c8 [7];
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined **ppuStack_70;
  undefined8 *puStack_68;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_d0 = *param_2;
  (**(code **)(param_2[1] + 0x10))(apuStack_c8);
  uStack_80 = CONCAT17(10,(undefined7)uStack_80);
  uStack_90 = 0x616c7570696e614d;
  uStack_88 = CONCAT53(uStack_88._3_5_,0x6574);
  pcStack_78 = FUN_10a6a92c8;
  ppuStack_70 = &PTR_FUN_110c0d5c8;
  puVar6 = (undefined8 *)0x58;
  __Znwm();
  *puVar6 = uStack_d0;
  (*(code *)apuStack_c8[0][2])(puVar6 + 1,apuStack_c8);
  puVar6[9] = uStack_88;
  puVar6[8] = uStack_90;
  puVar6[10] = uStack_80;
  uStack_88 = 0;
  uStack_80 = 0;
  uStack_90 = 0;
  puStack_68 = puVar6;
  func_0x000107c2b054(auStack_e8,&UNK_10f66b8c1);
  ppuVar11 = &PTR_DAT_110c093d8;
  ppcVar12 = &pcStack_78;
  (**(code **)(*param_1 + 0x250))(param_1,&PTR_DAT_110c093d8,ppcVar12,0,auStack_e8);
  if (cStack_d1 < '\0') {
    __ZdlPv(auStack_e8[0]);
  }
  (*(code *)*ppuStack_70)(&ppuStack_70);
  if (uStack_80 < 0) {
    __ZdlPv(uStack_90);
  }
  ppuVar7 = apuStack_c8;
  (*(code *)*apuStack_c8[0])();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_38) {
    ___stack_chk_fail();
    if (cStack_d1 < '\0') {
      __ZdlPv(auStack_e8[0]);
    }
    (*(code *)*ppuStack_70)(&ppuStack_70);
    if (uStack_80 < 0) {
      __ZdlPv(uStack_90);
    }
    (*(code *)*apuStack_c8[0])(apuStack_c8);
    __Unwind_Resume();
    ppcVar2 = (code **)(ppuVar7 + 0xc);
    if (ppcVar12 != (code **)0x0) {
      ppcVar2 = ppcVar12 + 0x16;
    }
    pcVar15 = *ppcVar2;
    ppuVar8 = ppuVar7;
    func_0x00010a0fda30();
    plVar9 = (long *)0xd8;
    __Znwm();
    plVar10 = plVar9 + 1;
    plVar9[2] = 0;
    *plVar10 = 0;
    *plVar9 = (long)&PTR_DAT_110c0d608;
    plVar13 = plVar9 + 3;
    *plVar13 = (long)&PTR_FUN_110c0e980;
    *(undefined1 *)(plVar9 + 4) = 0;
    plVar9[6] = 0;
    plVar9[7] = 0;
    plVar9[0xb] = (long)ppuVar8;
    plVar9[0xc] = (long)ppuVar11;
    *(undefined1 *)(plVar9 + 0xd) = 0;
    *(undefined8 *)((long)plVar9 + 0x6c) = 0x800000000;
    plVar9[0xf] = (long)pcVar15;
    *(undefined1 *)(plVar9 + 0x10) = 0;
    *(undefined1 *)(plVar9 + 0x14) = 0;
    *(undefined1 *)(plVar9 + 0x15) = 1;
    plVar9[0x16] = 0;
    plVar9[0x17] = 0;
    plVar9[5] = (long)&PTR_FUN_110c0ea18;
    plVar9[10] = (long)&PTR_FUN_110c0ea70;
    plVar9[0x18] = 0;
    plVar9[0x19] = 0;
    *(undefined4 *)(plVar9 + 0x1a) = 0xffffffff;
    *(undefined1 *)((long)plVar9 + 0xd4) = 0;
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar5) {
        *plVar10 = *plVar10 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    plVar1 = plVar9 + 2;
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar5) {
        *plVar1 = *plVar1 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    plVar9[8] = (long)plVar13;
    plVar9[9] = (long)plVar9;
    do {
      lVar14 = *plVar10;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar5) {
        *plVar10 = lVar14 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar14 == 0) {
      (**(code **)(*plVar9 + 0x10))(plVar9);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar9);
    }
    *(undefined4 *)((long)plVar9 + 0x6c) = *(undefined4 *)((long)ppuVar7 + 0x54);
    puVar16 = ppuVar7[0x14];
    puVar6 = ppuVar7[0x13];
    if (ppuVar7[0x14] != (undefined8 *)0x0) {
      plVar10 = ppuVar7[0x14] + 2;
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar10,0x10);
        if (bVar5) {
          *plVar10 = *plVar10 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
    lVar14 = plVar9[0x17];
    plVar9[0x17] = (long)puVar16;
    plVar9[0x16] = (long)puVar6;
    if (lVar14 != 0) {
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
    plVar10 = ppuVar7[0x16];
    if (plVar10 == (long *)0x0) {
      plVar10 = (long *)0x0;
    }
    else {
      __ZNSt3__119__shared_weak_count4lockEv();
    }
    FUN_10a692604();
    if (plVar10 != (long *)0x0) {
      plVar1 = plVar10 + 1;
      do {
        lVar14 = *plVar1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar5) {
          *plVar1 = lVar14 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (lVar14 == 0) {
        (**(code **)(*plVar10 + 0x10))(plVar10);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar10);
      }
    }
    uVar3 = *(undefined4 *)(ppuVar7 + 0x17);
    extraout_x8[1] = plVar9;
    *extraout_x8 = plVar13;
    *(undefined4 *)(plVar9 + 0x1a) = uVar3;
    return;
  }
  return;
}



/* Entry: 10a6923e4; end: 10a692603;  */

void FUN_10a6923e4(undefined8 *param_1,long param_2,long param_3,long param_4)

{
  long *plVar1;
  undefined4 uVar2;
  char cVar3;
  bool bVar4;
  long *plVar5;
  long lVar6;
  long *plVar7;
  long *plVar8;
  long lVar9;
  long lVar10;
  
  plVar5 = (long *)(param_2 + 0x60);
  if (param_4 != 0) {
    plVar5 = (long *)(param_4 + 0xb0);
  }
  lVar10 = *plVar5;
  lVar9 = param_2;
  func_0x00010a0fda30();
  plVar5 = (long *)0xd8;
  __Znwm();
  plVar7 = plVar5 + 1;
  plVar5[2] = 0;
  *plVar7 = 0;
  *plVar5 = (long)&PTR_DAT_110c0d608;
  plVar8 = plVar5 + 3;
  *plVar8 = (long)&PTR_FUN_110c0e980;
  *(undefined1 *)(plVar5 + 4) = 0;
  plVar5[6] = 0;
  plVar5[7] = 0;
  plVar5[0xb] = lVar9;
  plVar5[0xc] = param_3;
  *(undefined1 *)(plVar5 + 0xd) = 0;
  *(undefined8 *)((long)plVar5 + 0x6c) = 0x800000000;
  plVar5[0xf] = lVar10;
  *(undefined1 *)(plVar5 + 0x10) = 0;
  *(undefined1 *)(plVar5 + 0x14) = 0;
  *(undefined1 *)(plVar5 + 0x15) = 1;
  plVar5[0x16] = 0;
  plVar5[0x17] = 0;
  plVar5[5] = (long)&PTR_FUN_110c0ea18;
  plVar5[10] = (long)&PTR_FUN_110c0ea70;
  plVar5[0x18] = 0;
  plVar5[0x19] = 0;
  *(undefined4 *)(plVar5 + 0x1a) = 0xffffffff;
  *(undefined1 *)((long)plVar5 + 0xd4) = 0;
  do {
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar7,0x10);
    if (bVar4) {
      *plVar7 = *plVar7 + 1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  plVar1 = plVar5 + 2;
  do {
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar4) {
      *plVar1 = *plVar1 + 1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  plVar5[8] = (long)plVar8;
  plVar5[9] = (long)plVar5;
  do {
    lVar9 = *plVar7;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar7,0x10);
    if (bVar4) {
      *plVar7 = lVar9 + -1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  if (lVar9 == 0) {
    (**(code **)(*plVar5 + 0x10))(plVar5);
    __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
  }
  *(undefined4 *)((long)plVar5 + 0x6c) = *(undefined4 *)(param_2 + 0x54);
  lVar10 = *(long *)(param_2 + 0xa0);
  lVar9 = *(long *)(param_2 + 0x98);
  if (*(long *)(param_2 + 0xa0) != 0) {
    plVar7 = (long *)(*(long *)(param_2 + 0xa0) + 0x10);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar4) {
        *plVar7 = *plVar7 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  lVar6 = plVar5[0x17];
  plVar5[0x17] = lVar10;
  plVar5[0x16] = lVar9;
  if (lVar6 != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  plVar7 = *(long **)(param_2 + 0xb0);
  if (plVar7 == (long *)0x0) {
    plVar7 = (long *)0x0;
  }
  else {
    __ZNSt3__119__shared_weak_count4lockEv();
  }
  FUN_10a692604();
  if (plVar7 != (long *)0x0) {
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
  uVar2 = *(undefined4 *)(param_2 + 0xb8);
  param_1[1] = plVar5;
  *param_1 = plVar8;
  *(undefined4 *)(plVar5 + 0x1a) = uVar2;
  return;
}



/* Entry: 10a692604; end: 10a69286b;  */

void FUN_10a692604(undefined ***param_1,undefined ***param_2,undefined ***param_3)

{
  long *plVar1;
  undefined ****ppppuVar2;
  uint uVar3;
  char cVar4;
  undefined ****ppppuVar5;
  bool bVar6;
  undefined **ppuVar7;
  undefined **ppuVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined ***pppuVar11;
  byte bVar12;
  undefined *puVar13;
  long lVar14;
  undefined ***unaff_x20;
  undefined ***pppuVar15;
  undefined ***unaff_x21;
  undefined ***unaff_x22;
  undefined **ppuVar16;
  undefined ***unaff_x23;
  undefined ****unaff_x24;
  undefined ****ppppuVar17;
  undefined8 uStack_170;
  long *plStack_168;
  undefined ***pppuStack_160;
  undefined8 *puStack_158;
  undefined1 **ppuStack_150;
  code *pcStack_148;
  undefined **ppuStack_140;
  undefined **ppuStack_138;
  undefined **ppuStack_130;
  undefined **ppuStack_128;
  undefined1 *puStack_120;
  undefined ***pppuStack_118;
  undefined ***pppuStack_110;
  undefined ***pppuStack_108;
  undefined ***pppuStack_100;
  undefined ***pppuStack_f8;
  undefined1 *puStack_f0;
  code *pcStack_e8;
  undefined ***pppuStack_e0;
  undefined ***apppuStack_d8 [2];
  code *pcStack_c8;
  undefined **ppuStack_c0;
  undefined ***pppuStack_b8;
  code *pcStack_88;
  undefined **ppuStack_80;
  undefined ***pppuStack_78;
  long lStack_48;
  
  ppppuVar17 = &pppuStack_e0;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if (param_1 == (undefined ***)0x0) {
    pppuVar15 = (undefined ***)param_2[1];
    *param_2 = (undefined **)0x0;
    param_2[1] = (undefined **)0x0;
    if (pppuVar15 == (undefined ***)0x0) goto LAB_10a692810;
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___ZNSt3__119__shared_weak_count14__release_weakEv_110346648)();
      return;
    }
  }
  else {
    unaff_x21 = param_1;
    if (param_3 == (undefined ***)0x0) {
      FUN_10a692acc(&pppuStack_e0);
      unaff_x20 = apppuStack_d8[0];
      if (apppuStack_d8[0] != (undefined ***)0x0) {
        pppuVar15 = apppuStack_d8[0] + 2;
        do {
          cVar4 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(pppuVar15,0x10);
          if (bVar6) {
            *pppuVar15 = (undefined **)((long)*pppuVar15 + 1);
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
      }
      pppuVar15 = (undefined ***)param_2[1];
      param_2[1] = (undefined **)apppuStack_d8[0];
      *param_2 = (undefined **)pppuStack_e0;
      param_2 = param_1;
      if (pppuVar15 != (undefined ***)0x0) {
        __ZNSt3__119__shared_weak_count14__release_weakEv();
        param_2 = param_1;
      }
      if (unaff_x20 != (undefined ***)0x0) {
        pppuVar11 = unaff_x20 + 1;
        do {
          ppuVar7 = *pppuVar11;
          cVar4 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(pppuVar11,0x10);
          if (bVar6) {
            *pppuVar11 = (undefined **)((long)ppuVar7 + -1);
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
LAB_10a6927f4:
        if (ppuVar7 == (undefined **)0x0) {
          (*(code *)(*unaff_x20)[2])(unaff_x20);
          pppuVar15 = unaff_x20;
          __ZNSt3__119__shared_weak_count14__release_weakEv();
        }
      }
    }
    else {
      unaff_x22 = (undefined ***)param_1[8];
      unaff_x23 = (undefined ***)param_1[9];
      if (*(char *)(param_3 + 0x17) == '\x01') {
        unaff_x21 = &ppuStack_80;
        pcStack_88 = FUN_10a6a99e4;
        ppuStack_80 = &PTR_FUN_110c0d668;
        pppuVar11 = unaff_x22;
        pppuStack_78 = param_2;
        FUN_10a6a96a8(param_3,unaff_x22,unaff_x23,&pcStack_88);
        ppuVar7 = ppuStack_80;
        ppppuVar17 = unaff_x24;
      }
      else {
        pppuVar15 = param_3 + 0x11;
        pppuStack_e0 = unaff_x22;
        apppuStack_d8[0] = unaff_x23;
        func_0x00010a35bf90(pppuVar15,&pppuStack_e0);
        ppppuVar2 = apppuStack_d8;
        ppppuVar5 = &pppuStack_e0;
        if (pppuVar15 != (undefined ***)0x0) {
          ppppuVar2 = (undefined ****)(pppuVar15 + 5);
          ppppuVar5 = (undefined ****)(pppuVar15 + 4);
        }
        pppuVar11 = *ppppuVar5;
        if (unaff_x22 == pppuVar11 && unaff_x23 == *ppppuVar2) {
          FUN_10a692acc(&pppuStack_e0);
          unaff_x20 = apppuStack_d8[0];
          if (apppuStack_d8[0] != (undefined ***)0x0) {
            pppuVar15 = apppuStack_d8[0] + 2;
            do {
              cVar4 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(pppuVar15,0x10);
              if (bVar6) {
                *pppuVar15 = (undefined **)((long)*pppuVar15 + 1);
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
          }
          pppuVar15 = (undefined ***)param_2[1];
          param_2[1] = (undefined **)apppuStack_d8[0];
          *param_2 = (undefined **)pppuStack_e0;
          if (pppuVar15 != (undefined ***)0x0) {
            __ZNSt3__119__shared_weak_count14__release_weakEv();
          }
          param_2 = param_1;
          unaff_x24 = &pppuStack_e0;
          if (unaff_x20 != (undefined ***)0x0) {
            pppuVar11 = unaff_x20 + 1;
            do {
              ppuVar7 = *pppuVar11;
              cVar4 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(pppuVar11,0x10);
              if (bVar6) {
                *pppuVar11 = (undefined **)((long)ppuVar7 + -1);
                cVar4 = ExclusiveMonitorsStatus();
              }
              unaff_x24 = &pppuStack_e0;
            } while (cVar4 != '\0');
            goto LAB_10a6927f4;
          }
          goto LAB_10a692810;
        }
        unaff_x21 = &ppuStack_c0;
        pcStack_c8 = FUN_10a6a9aa4;
        ppuStack_c0 = &PTR_FUN_110c0d688;
        pppuStack_b8 = param_2;
        FUN_10a6a96a8(param_3,pppuVar11,*ppppuVar2,&pcStack_c8);
        ppuVar7 = ppuStack_c0;
      }
      pppuVar15 = unaff_x21;
      (*(code *)*ppuVar7)();
      param_2 = pppuVar11;
      unaff_x20 = param_3;
      unaff_x24 = ppppuVar17;
    }
LAB_10a692810:
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
      return;
    }
  }
  ___stack_chk_fail();
  (*(code *)**unaff_x21)(unaff_x21);
  pppuVar11 = pppuVar15;
  __Unwind_Resume();
  pcStack_e8 = FUN_10a69286c;
  ppuVar7 = pppuVar11[0x16];
  puStack_120 = (undefined1 *)unaff_x24;
  pppuStack_118 = unaff_x23;
  pppuStack_110 = unaff_x22;
  pppuStack_108 = unaff_x21;
  pppuStack_100 = unaff_x20;
  pppuStack_f8 = pppuVar15;
  puStack_f0 = &stack0xfffffffffffffff0;
  if ((ppuVar7 != (undefined **)0x0) &&
     (__ZNSt3__119__shared_weak_count4lockEv(), ppuVar7 != (undefined **)0x0)) {
    pppuVar15 = (undefined ***)pppuVar11[0x15];
    ppuVar8 = ppuVar7 + 1;
    do {
      puVar13 = *ppuVar8;
      cVar4 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(ppuVar8,0x10);
      if (bVar6) {
        *ppuVar8 = puVar13 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (puVar13 == (undefined *)0x0) {
      (**(code **)(*ppuVar7 + 0x10))(ppuVar7);
      __ZNSt3__119__shared_weak_count14__release_weakEv(ppuVar7);
    }
    if (pppuVar15 != (undefined ***)0x0) goto LAB_10a6929ac;
  }
  ppuVar7 = pppuVar11[0x14];
  if (ppuVar7 == (undefined **)0x0) {
    return;
  }
  ppuVar16 = pppuVar11[0x13];
  ppuVar8 = ppuVar7 + 2;
  do {
    cVar4 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(ppuVar8,0x10);
    if (bVar6) {
      *ppuVar8 = *ppuVar8 + 1;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  ppuVar8 = ppuVar7;
  __ZNSt3__119__shared_weak_count4lockEv();
  ppuStack_128 = ppuVar8;
  if (ppuVar8 == (undefined **)0x0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv(ppuVar7);
    return;
  }
  ppuStack_130 = ppuVar16;
  __ZNSt3__119__shared_weak_count14__release_weakEv(ppuVar7);
  if (ppuVar16 != (undefined **)0x0) {
    ppuVar7 = (undefined **)ppuVar16[0x2b];
    if (ppuVar7 != ppuVar16 + 0x2a) {
LAB_10a692940:
      if (ppuVar7[2] == (undefined *)0x0) goto LAB_10a69295c;
      pppuVar15 = (undefined ***)(ppuVar7[2] + 0xb0);
      param_2 = (undefined ***)0xc257b61e5dea40f8;
      (*(code *)(*pppuVar15)[3])();
      if (pppuVar15 == (undefined ***)0x0) goto LAB_10a69295c;
      param_2 = pppuVar15;
      FUN_10a692acc(&ppuStack_140);
      if (ppuStack_138 != (undefined **)0x0) {
        ppuVar7 = ppuStack_138 + 2;
        do {
          cVar4 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(ppuVar7,0x10);
          if (bVar6) {
            *ppuVar7 = *ppuVar7 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
      }
      ppuVar7 = pppuVar11[0x16];
      pppuVar11[0x16] = ppuStack_138;
      pppuVar11[0x15] = ppuStack_140;
      if (ppuVar7 != (undefined **)0x0) {
        __ZNSt3__119__shared_weak_count14__release_weakEv();
      }
      ppuVar8 = ppuStack_128;
      if (ppuStack_138 != (undefined **)0x0) {
        ppuVar7 = ppuStack_138 + 1;
        do {
          puVar13 = *ppuVar7;
          cVar4 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(ppuVar7,0x10);
          if (bVar6) {
            *ppuVar7 = puVar13 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (puVar13 == (undefined *)0x0) {
          (**(code **)(*ppuStack_138 + 0x10))(ppuStack_138);
          __ZNSt3__119__shared_weak_count14__release_weakEv(ppuStack_138);
          ppuVar8 = ppuStack_128;
        }
      }
      goto joined_r0x00010a69296c;
    }
  }
  pppuVar15 = (undefined ***)0x0;
LAB_10a692978:
  ppuVar7 = ppuVar8 + 1;
  do {
    puVar13 = *ppuVar7;
    cVar4 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(ppuVar7,0x10);
    if (bVar6) {
      *ppuVar7 = puVar13 + -1;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  if (puVar13 == (undefined *)0x0) {
    (**(code **)(*ppuVar8 + 0x10))(ppuVar8);
    __ZNSt3__119__shared_weak_count14__release_weakEv(ppuVar8);
  }
  goto LAB_10a6929a8;
LAB_10a69295c:
  ppuVar7 = (undefined **)ppuVar7[1];
  if (ppuVar7 == ppuVar16 + 0x2a) goto code_r0x00010a692968;
  goto LAB_10a692940;
code_r0x00010a692968:
  pppuVar15 = (undefined ***)0x0;
joined_r0x00010a69296c:
  if (ppuVar8 != (undefined **)0x0) goto LAB_10a692978;
LAB_10a6929a8:
  if (pppuVar15 == (undefined ***)0x0) {
    return;
  }
LAB_10a6929ac:
  uVar3 = *(uint *)(pppuVar11 + 0x17);
  if (uVar3 == 0xffffffff) {
    lVar14 = 0;
    do {
      bVar12 = *(byte *)((long)pppuVar15 + lVar14 + 0x2d0);
      if ((bVar12 & 1) != 0) break;
      bVar6 = lVar14 != 0x26c;
      lVar14 = lVar14 + 0x7c;
    } while (bVar6);
  }
  else {
    if (5 < uVar3) {
      puVar9 = (undefined8 *)&UNK_10f64c71c;
      FUN_10a00946c();
      func_0x00010a05253c(&ppuStack_130);
      puVar10 = puVar9;
      __Unwind_Resume();
      pcStack_148 = FUN_10a692acc;
      pppuStack_160 = pppuVar15;
      puStack_158 = puVar9;
      ppuStack_150 = &puStack_f0;
      (*(code *)(*param_2)[10])(&uStack_170,param_2);
      puVar10[1] = plStack_168;
      *puVar10 = uStack_170;
      if (plStack_168 != (long *)0x0) {
        plVar1 = plStack_168 + 1;
        do {
          cVar4 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar6) {
            *plVar1 = *plVar1 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (plStack_168 != (long *)0x0) {
          plVar1 = plStack_168 + 1;
          do {
            lVar14 = *plVar1;
            cVar4 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar6) {
              *plVar1 = lVar14 + -1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (lVar14 == 0) {
            (**(code **)(*plStack_168 + 0x10))(plStack_168);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_168);
          }
        }
      }
      return;
    }
    bVar12 = *(byte *)((long)pppuVar15 + (ulong)uVar3 * 0x7c + 0x2d0);
  }
  if (((*(byte *)((long)pppuVar11 + 0xbc) & 1) == 0) && ((bVar12 & 1) != 0)) {
    FUN_10a5861f0(pppuVar11);
  }
  *(byte *)((long)pppuVar11 + 0xbc) = bVar12 & 1;
  return;
}



/* Entry: 10a69286c; end: 10a692acb;  */

void FUN_10a69286c(long param_1,long *param_2)

{
  uint uVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long *plVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  byte bVar8;
  long lVar9;
  long *plVar10;
  long lVar11;
  undefined8 uStack_90;
  long *plStack_88;
  long *plStack_80;
  undefined8 *puStack_78;
  undefined1 *puStack_70;
  code *pcStack_68;
  undefined8 uStack_60;
  long *plStack_58;
  long lStack_50;
  long *plStack_48;
  
  plVar4 = *(long **)(param_1 + 0xb0);
  if ((plVar4 != (long *)0x0) && (__ZNSt3__119__shared_weak_count4lockEv(), plVar4 != (long *)0x0))
  {
    plVar10 = *(long **)(param_1 + 0xa8);
    plVar5 = plVar4 + 1;
    do {
      lVar9 = *plVar5;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar3) {
        *plVar5 = lVar9 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar9 == 0) {
      (**(code **)(*plVar4 + 0x10))(plVar4);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
    }
    if (plVar10 != (long *)0x0) goto LAB_10a6929ac;
  }
  plVar4 = *(long **)(param_1 + 0xa0);
  if (plVar4 == (long *)0x0) {
    return;
  }
  lVar9 = *(long *)(param_1 + 0x98);
  plVar5 = plVar4 + 2;
  do {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
    if (bVar3) {
      *plVar5 = *plVar5 + 1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  plVar5 = plVar4;
  __ZNSt3__119__shared_weak_count4lockEv();
  plStack_48 = plVar5;
  if (plVar5 == (long *)0x0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
    return;
  }
  lStack_50 = lVar9;
  __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
  if (lVar9 != 0) {
    lVar11 = *(long *)(lVar9 + 0x158);
    if (lVar11 != lVar9 + 0x150) {
LAB_10a692940:
      if (*(long *)(lVar11 + 0x10) == 0) goto LAB_10a69295c;
      plVar10 = (long *)(*(long *)(lVar11 + 0x10) + 0xb0);
      param_2 = (long *)0xc257b61e5dea40f8;
      (**(code **)(*plVar10 + 0x18))();
      if (plVar10 == (long *)0x0) goto LAB_10a69295c;
      param_2 = plVar10;
      FUN_10a692acc(&uStack_60);
      if (plStack_58 != (long *)0x0) {
        plVar4 = plStack_58 + 2;
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar4,0x10);
          if (bVar3) {
            *plVar4 = *plVar4 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      lVar9 = *(long *)(param_1 + 0xb0);
      *(long **)(param_1 + 0xb0) = plStack_58;
      *(undefined8 *)(param_1 + 0xa8) = uStack_60;
      if (lVar9 != 0) {
        __ZNSt3__119__shared_weak_count14__release_weakEv();
      }
      plVar5 = plStack_48;
      if (plStack_58 != (long *)0x0) {
        plVar4 = plStack_58 + 1;
        do {
          lVar9 = *plVar4;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar4,0x10);
          if (bVar3) {
            *plVar4 = lVar9 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar9 == 0) {
          (**(code **)(*plStack_58 + 0x10))(plStack_58);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_58);
          plVar5 = plStack_48;
        }
      }
      goto joined_r0x00010a69296c;
    }
  }
  plVar10 = (long *)0x0;
LAB_10a692978:
  plVar4 = plVar5 + 1;
  do {
    lVar9 = *plVar4;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar4,0x10);
    if (bVar3) {
      *plVar4 = lVar9 + -1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (lVar9 == 0) {
    (**(code **)(*plVar5 + 0x10))(plVar5);
    __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
  }
  goto LAB_10a6929a8;
LAB_10a69295c:
  lVar11 = *(long *)(lVar11 + 8);
  if (lVar11 == lVar9 + 0x150) goto code_r0x00010a692968;
  goto LAB_10a692940;
code_r0x00010a692968:
  plVar10 = (long *)0x0;
joined_r0x00010a69296c:
  if (plVar5 != (long *)0x0) goto LAB_10a692978;
LAB_10a6929a8:
  if (plVar10 == (long *)0x0) {
    return;
  }
LAB_10a6929ac:
  uVar1 = *(uint *)(param_1 + 0xb8);
  if (uVar1 == 0xffffffff) {
    lVar9 = 0;
    do {
      bVar8 = *(byte *)((long)plVar10 + lVar9 + 0x2d0);
      if ((bVar8 & 1) != 0) break;
      bVar3 = lVar9 != 0x26c;
      lVar9 = lVar9 + 0x7c;
    } while (bVar3);
  }
  else {
    if (5 < uVar1) {
      puVar6 = (undefined8 *)&UNK_10f64c71c;
      FUN_10a00946c();
      func_0x00010a05253c(&lStack_50);
      puVar7 = puVar6;
      __Unwind_Resume();
      pcStack_68 = FUN_10a692acc;
      plStack_80 = plVar10;
      puStack_78 = puVar6;
      puStack_70 = &stack0xfffffffffffffff0;
      (**(code **)(*param_2 + 0x50))(&uStack_90,param_2);
      puVar7[1] = plStack_88;
      *puVar7 = uStack_90;
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
        if (plStack_88 != (long *)0x0) {
          plVar4 = plStack_88 + 1;
          do {
            lVar9 = *plVar4;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar4,0x10);
            if (bVar3) {
              *plVar4 = lVar9 + -1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (lVar9 == 0) {
            (**(code **)(*plStack_88 + 0x10))(plStack_88);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_88);
          }
        }
      }
      return;
    }
    bVar8 = *(byte *)((long)plVar10 + (ulong)uVar1 * 0x7c + 0x2d0);
  }
  if (((*(byte *)(param_1 + 0xbc) & 1) == 0) && ((bVar8 & 1) != 0)) {
    FUN_10a5861f0(param_1);
  }
  *(byte *)(param_1 + 0xbc) = bVar8 & 1;
  return;
}



/* Entry: 10a692acc; end: 10a692bd3;  */

void FUN_10a692acc(undefined8 *param_1,long *param_2)

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



/* Entry: 10a692bd4; end: 10a692d77;  */

void FUN_10a692bd4(long param_1,long *param_2)

{
  long *plVar1;
  undefined *****pppppuVar2;
  undefined4 uVar3;
  char cVar4;
  bool bVar5;
  undefined ******ppppppuVar6;
  undefined ******ppppppuVar7;
  long *plVar8;
  undefined ******ppppppuVar9;
  undefined *puVar10;
  int iVar11;
  undefined8 *extraout_x8;
  long *plVar12;
  long *plVar13;
  undefined ****ppppuVar14;
  long lVar15;
  undefined *****pppppuVar16;
  undefined *****pppppuVar17;
  undefined *****pppppuStack_a8;
  ulong uStack_a0;
  byte bStack_91;
  undefined *****pppppuStack_90;
  ulong uStack_88;
  undefined ****ppppuStack_80;
  code *pcStack_78;
  undefined **ppuStack_70;
  long lStack_68;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcStack_78 = FUN_10a6a9b64;
  ppuStack_70 = &PTR_FUN_110c0d6a8;
  lStack_68 = param_1;
  FUN_10a692228(param_2,&pcStack_78);
  (*(code *)*ppuStack_70)(&ppuStack_70);
  puVar10 = &UNK_10f66b8c1;
  (**(code **)(*param_2 + 0xa8))(&pppppuStack_a8,param_2,&PTR_DAT_110c093f8,&UNK_10f66b8c1,0);
  uStack_88 = uStack_a0;
  pppppuStack_90 = pppppuStack_a8;
  if (-1 < (char)bStack_91) {
    uStack_88 = (ulong)bStack_91;
    pppppuStack_90 = (undefined *****)&pppppuStack_a8;
  }
  ppppuStack_80 = (undefined ****)&PTR_DAT_110bc26e8;
  ppppppuVar6 = (undefined ******)&ppppuStack_80;
  ppppppuVar9 = &pppppuStack_90;
  FUN_10a2e1844();
  if (ppppppuVar6 == (undefined ******)&UNK_110bc2778) {
    iVar11 = -1;
  }
  else {
    iVar11 = *(int *)(ppppppuVar6 + 2);
  }
  *(int *)(param_1 + 0xb8) = iVar11;
  if ((char)bStack_91 < '\0') {
    ppppppuVar6 = (undefined ******)pppppuStack_a8;
    __ZdlPv();
    iVar11 = *(int *)(param_1 + 0xb8);
  }
  if (iVar11 != -1) {
    lVar15 = *(long *)(param_1 + 0x60);
    ppppppuVar9 = (undefined ******)&UNK_10f66bb52;
    ppppppuVar6 = &pppppuStack_a8;
    func_0x000107c2b054();
    if (lVar15 != 0) {
      ppppppuVar6 = *(undefined *******)(lVar15 + 0x8d8);
      ppppppuVar9 = &pppppuStack_a8;
      FUN_10a76c080();
    }
    if ((char)bStack_91 < '\0') {
      ppppppuVar6 = (undefined ******)pppppuStack_a8;
      __ZdlPv();
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return;
  }
  ___stack_chk_fail();
  if ((char)bStack_91 < '\0') {
    __ZdlPv(pppppuStack_a8);
  }
  __Unwind_Resume();
  ppppppuVar7 = ppppppuVar6 + 0xc;
  if (puVar10 != (undefined *)0x0) {
    ppppppuVar7 = (undefined ******)(puVar10 + 0xb0);
  }
  pppppuVar16 = *ppppppuVar7;
  ppppppuVar7 = ppppppuVar6;
  func_0x00010a0fda30();
  plVar8 = (long *)0xd8;
  __Znwm();
  plVar12 = plVar8 + 1;
  plVar8[2] = 0;
  *plVar12 = 0;
  *plVar8 = (long)&PTR_DAT_110c0d6d0;
  plVar13 = plVar8 + 3;
  *plVar13 = (long)&PTR_FUN_110c0ea90;
  *(undefined1 *)(plVar8 + 4) = 0;
  plVar8[6] = 0;
  plVar8[7] = 0;
  plVar8[0xb] = (long)ppppppuVar7;
  plVar8[0xc] = (long)ppppppuVar9;
  *(undefined1 *)(plVar8 + 0xd) = 0;
  *(undefined8 *)((long)plVar8 + 0x6c) = 0x800000000;
  plVar8[0xf] = (long)pppppuVar16;
  *(undefined1 *)(plVar8 + 0x10) = 0;
  *(undefined1 *)(plVar8 + 0x14) = 0;
  *(undefined1 *)(plVar8 + 0x15) = 1;
  plVar8[0x16] = 0;
  plVar8[0x17] = 0;
  plVar8[5] = (long)&PTR_FUN_110c0eb28;
  plVar8[10] = (long)&PTR_FUN_110c0eb80;
  plVar8[0x18] = 0;
  plVar8[0x19] = 0;
  *(undefined4 *)(plVar8 + 0x1a) = 0xffffffff;
  *(undefined1 *)((long)plVar8 + 0xd4) = 0;
  do {
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar12,0x10);
    if (bVar5) {
      *plVar12 = *plVar12 + 1;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  plVar1 = plVar8 + 2;
  do {
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar5) {
      *plVar1 = *plVar1 + 1;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  plVar8[8] = (long)plVar13;
  plVar8[9] = (long)plVar8;
  do {
    lVar15 = *plVar12;
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar12,0x10);
    if (bVar5) {
      *plVar12 = lVar15 + -1;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  if (lVar15 == 0) {
    (**(code **)(*plVar8 + 0x10))(plVar8);
    __ZNSt3__119__shared_weak_count14__release_weakEv(plVar8);
  }
  *(undefined4 *)((long)plVar8 + 0x6c) = *(undefined4 *)((long)ppppppuVar6 + 0x54);
  pppppuVar17 = ppppppuVar6[0x14];
  pppppuVar16 = ppppppuVar6[0x13];
  if (ppppppuVar6[0x14] != (undefined *****)0x0) {
    pppppuVar2 = ppppppuVar6[0x14] + 2;
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(pppppuVar2,0x10);
      if (bVar5) {
        *pppppuVar2 = (undefined ****)((long)*pppppuVar2 + 1);
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  lVar15 = plVar8[0x17];
  plVar8[0x17] = (long)pppppuVar17;
  plVar8[0x16] = (long)pppppuVar16;
  if (lVar15 != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  pppppuVar16 = ppppppuVar6[0x16];
  if (pppppuVar16 == (undefined *****)0x0) {
    pppppuVar16 = (undefined *****)0x0;
  }
  else {
    __ZNSt3__119__shared_weak_count4lockEv();
  }
  FUN_10a692604();
  if (pppppuVar16 != (undefined *****)0x0) {
    pppppuVar17 = pppppuVar16 + 1;
    do {
      ppppuVar14 = *pppppuVar17;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(pppppuVar17,0x10);
      if (bVar5) {
        *pppppuVar17 = (undefined ****)((long)ppppuVar14 + -1);
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (ppppuVar14 == (undefined ****)0x0) {
      (*(code *)(*pppppuVar16)[2])(pppppuVar16);
      __ZNSt3__119__shared_weak_count14__release_weakEv(pppppuVar16);
    }
  }
  uVar3 = *(undefined4 *)(ppppppuVar6 + 0x17);
  extraout_x8[1] = plVar8;
  *extraout_x8 = plVar13;
  *(undefined4 *)(plVar8 + 0x1a) = uVar3;
  return;
}



/* Entry: 10a692d78; end: 10a692f97;  */

void FUN_10a692d78(undefined8 *param_1,long param_2,long param_3,long param_4)

{
  long *plVar1;
  undefined4 uVar2;
  char cVar3;
  bool bVar4;
  long *plVar5;
  long lVar6;
  long *plVar7;
  long *plVar8;
  long lVar9;
  long lVar10;
  
  plVar5 = (long *)(param_2 + 0x60);
  if (param_4 != 0) {
    plVar5 = (long *)(param_4 + 0xb0);
  }
  lVar10 = *plVar5;
  lVar9 = param_2;
  func_0x00010a0fda30();
  plVar5 = (long *)0xd8;
  __Znwm();
  plVar7 = plVar5 + 1;
  plVar5[2] = 0;
  *plVar7 = 0;
  *plVar5 = (long)&PTR_DAT_110c0d6d0;
  plVar8 = plVar5 + 3;
  *plVar8 = (long)&PTR_FUN_110c0ea90;
  *(undefined1 *)(plVar5 + 4) = 0;
  plVar5[6] = 0;
  plVar5[7] = 0;
  plVar5[0xb] = lVar9;
  plVar5[0xc] = param_3;
  *(undefined1 *)(plVar5 + 0xd) = 0;
  *(undefined8 *)((long)plVar5 + 0x6c) = 0x800000000;
  plVar5[0xf] = lVar10;
  *(undefined1 *)(plVar5 + 0x10) = 0;
  *(undefined1 *)(plVar5 + 0x14) = 0;
  *(undefined1 *)(plVar5 + 0x15) = 1;
  plVar5[0x16] = 0;
  plVar5[0x17] = 0;
  plVar5[5] = (long)&PTR_FUN_110c0eb28;
  plVar5[10] = (long)&PTR_FUN_110c0eb80;
  plVar5[0x18] = 0;
  plVar5[0x19] = 0;
  *(undefined4 *)(plVar5 + 0x1a) = 0xffffffff;
  *(undefined1 *)((long)plVar5 + 0xd4) = 0;
  do {
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar7,0x10);
    if (bVar4) {
      *plVar7 = *plVar7 + 1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  plVar1 = plVar5 + 2;
  do {
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar4) {
      *plVar1 = *plVar1 + 1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  plVar5[8] = (long)plVar8;
  plVar5[9] = (long)plVar5;
  do {
    lVar9 = *plVar7;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar7,0x10);
    if (bVar4) {
      *plVar7 = lVar9 + -1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  if (lVar9 == 0) {
    (**(code **)(*plVar5 + 0x10))(plVar5);
    __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
  }
  *(undefined4 *)((long)plVar5 + 0x6c) = *(undefined4 *)(param_2 + 0x54);
  lVar10 = *(long *)(param_2 + 0xa0);
  lVar9 = *(long *)(param_2 + 0x98);
  if (*(long *)(param_2 + 0xa0) != 0) {
    plVar7 = (long *)(*(long *)(param_2 + 0xa0) + 0x10);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar4) {
        *plVar7 = *plVar7 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  lVar6 = plVar5[0x17];
  plVar5[0x17] = lVar10;
  plVar5[0x16] = lVar9;
  if (lVar6 != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  plVar7 = *(long **)(param_2 + 0xb0);
  if (plVar7 == (long *)0x0) {
    plVar7 = (long *)0x0;
  }
  else {
    __ZNSt3__119__shared_weak_count4lockEv();
  }
  FUN_10a692604();
  if (plVar7 != (long *)0x0) {
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
  uVar2 = *(undefined4 *)(param_2 + 0xb8);
  param_1[1] = plVar5;
  *param_1 = plVar8;
  *(undefined4 *)(plVar5 + 0x1a) = uVar2;
  return;
}



/* Entry: 10a692f98; end: 10a6931fb;  */

void FUN_10a692f98(long param_1,long *param_2)

{
  uint uVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long *plVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined ***pppuVar8;
  byte bVar9;
  undefined4 uVar10;
  long lVar11;
  long *plVar12;
  long lVar13;
  long *plStack_98;
  ulong uStack_90;
  undefined **ppuStack_88;
  long *plStack_80;
  undefined *puStack_78;
  undefined1 *puStack_70;
  code *pcStack_68;
  undefined8 uStack_60;
  long *plStack_58;
  long lStack_50;
  long *plStack_48;
  
  plVar4 = *(long **)(param_1 + 0xb0);
  if ((plVar4 != (long *)0x0) && (__ZNSt3__119__shared_weak_count4lockEv(), plVar4 != (long *)0x0))
  {
    plVar12 = *(long **)(param_1 + 0xa8);
    plVar5 = plVar4 + 1;
    do {
      lVar11 = *plVar5;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar3) {
        *plVar5 = lVar11 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar11 == 0) {
      (**(code **)(*plVar4 + 0x10))(plVar4);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
    }
    if (plVar12 != (long *)0x0) goto LAB_10a6930d8;
  }
  plVar4 = *(long **)(param_1 + 0xa0);
  if (plVar4 == (long *)0x0) {
    return;
  }
  lVar11 = *(long *)(param_1 + 0x98);
  plVar5 = plVar4 + 2;
  do {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
    if (bVar3) {
      *plVar5 = *plVar5 + 1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  plVar5 = plVar4;
  __ZNSt3__119__shared_weak_count4lockEv();
  plStack_48 = plVar5;
  if (plVar5 == (long *)0x0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
    return;
  }
  lStack_50 = lVar11;
  __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
  if (lVar11 != 0) {
    lVar13 = *(long *)(lVar11 + 0x158);
    if (lVar13 != lVar11 + 0x150) {
LAB_10a69306c:
      if (*(long *)(lVar13 + 0x10) == 0) goto LAB_10a693088;
      plVar12 = (long *)(*(long *)(lVar13 + 0x10) + 0xb0);
      param_2 = (long *)0xc257b61e5dea40f8;
      (**(code **)(*plVar12 + 0x18))();
      if (plVar12 == (long *)0x0) goto LAB_10a693088;
      param_2 = plVar12;
      FUN_10a692acc(&uStack_60);
      if (plStack_58 != (long *)0x0) {
        plVar4 = plStack_58 + 2;
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar4,0x10);
          if (bVar3) {
            *plVar4 = *plVar4 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      lVar11 = *(long *)(param_1 + 0xb0);
      *(long **)(param_1 + 0xb0) = plStack_58;
      *(undefined8 *)(param_1 + 0xa8) = uStack_60;
      if (lVar11 != 0) {
        __ZNSt3__119__shared_weak_count14__release_weakEv();
      }
      plVar5 = plStack_48;
      if (plStack_58 != (long *)0x0) {
        plVar4 = plStack_58 + 1;
        do {
          lVar11 = *plVar4;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar4,0x10);
          if (bVar3) {
            *plVar4 = lVar11 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar11 == 0) {
          (**(code **)(*plStack_58 + 0x10))(plStack_58);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_58);
          plVar5 = plStack_48;
        }
      }
      goto joined_r0x00010a693098;
    }
  }
  plVar12 = (long *)0x0;
LAB_10a6930a4:
  plVar4 = plVar5 + 1;
  do {
    lVar11 = *plVar4;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar4,0x10);
    if (bVar3) {
      *plVar4 = lVar11 + -1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (lVar11 == 0) {
    (**(code **)(*plVar5 + 0x10))(plVar5);
    __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
  }
  goto LAB_10a6930d4;
LAB_10a693088:
  lVar13 = *(long *)(lVar13 + 8);
  if (lVar13 == lVar11 + 0x150) goto code_r0x00010a693094;
  goto LAB_10a69306c;
code_r0x00010a693094:
  plVar12 = (long *)0x0;
joined_r0x00010a693098:
  if (plVar5 != (long *)0x0) goto LAB_10a6930a4;
LAB_10a6930d4:
  if (plVar12 == (long *)0x0) {
    return;
  }
LAB_10a6930d8:
  uVar1 = *(uint *)(param_1 + 0xb8);
  if (uVar1 == 0xffffffff) {
    lVar11 = 0;
    do {
      bVar9 = *(byte *)((long)plVar12 + lVar11 + 0x2d0);
      if ((bVar9 & 1) != 0) break;
      bVar3 = lVar11 != 0x26c;
      lVar11 = lVar11 + 0x7c;
    } while (bVar3);
  }
  else {
    if (5 < uVar1) {
      puVar6 = &UNK_10f64c71c;
      FUN_10a00946c();
      func_0x00010a05253c(&lStack_50);
      puVar7 = puVar6;
      __Unwind_Resume();
      pcStack_68 = FUN_10a6931fc;
      uStack_90 = param_2[1];
      plStack_98 = (long *)*param_2;
      if (-1 < (char)*(byte *)((long)param_2 + 0x17)) {
        uStack_90 = (ulong)*(byte *)((long)param_2 + 0x17);
        plStack_98 = param_2;
      }
      ppuStack_88 = &PTR_DAT_110bc26e8;
      pppuVar8 = &ppuStack_88;
      plStack_80 = plVar12;
      puStack_78 = puVar6;
      puStack_70 = &stack0xfffffffffffffff0;
      FUN_10a2e1844(pppuVar8,&plStack_98);
      if (pppuVar8 == (undefined ***)&UNK_110bc2778) {
        uVar10 = 0xffffffff;
      }
      else {
        uVar10 = *(undefined4 *)(pppuVar8 + 2);
      }
      *(undefined4 *)(puVar7 + 0xb8) = uVar10;
      return;
    }
    bVar9 = *(byte *)((long)plVar12 + (ulong)uVar1 * 0x7c + 0x2d0);
  }
  if ((*(char *)(param_1 + 0xbc) == '\x01') && ((bVar9 & 1) == 0)) {
    FUN_10a5861f0(param_1);
  }
  *(byte *)(param_1 + 0xbc) = bVar9 & 1;
  return;
}



/* Entry: 10a6931fc; end: 10a69326f;  */

void FUN_10a6931fc(long param_1,undefined8 *param_2)

{
  undefined ***pppuVar1;
  undefined4 uVar2;
  undefined8 *puStack_38;
  ulong uStack_30;
  undefined **ppuStack_28;
  
  uStack_30 = param_2[1];
  puStack_38 = (undefined8 *)*param_2;
  if (-1 < (char)*(byte *)((long)param_2 + 0x17)) {
    uStack_30 = (ulong)*(byte *)((long)param_2 + 0x17);
    puStack_38 = param_2;
  }
  ppuStack_28 = &PTR_DAT_110bc26e8;
  pppuVar1 = &ppuStack_28;
  FUN_10a2e1844(pppuVar1,&puStack_38);
  if (pppuVar1 == (undefined ***)&UNK_110bc2778) {
    uVar2 = 0xffffffff;
  }
  else {
    uVar2 = *(undefined4 *)(pppuVar1 + 2);
  }
  *(undefined4 *)(param_1 + 0xb8) = uVar2;
  return;
}



/* Entry: 10a693270; end: 10a693323;  */

void FUN_10a693270(undefined8 param_1,undefined8 param_2)

{
  long *plVar1;
  undefined **ppuVar2;
  char cVar3;
  bool bVar4;
  undefined ***pppuVar5;
  undefined ***pppuVar6;
  long *plVar7;
  undefined **ppuVar8;
  code **ppcVar9;
  undefined8 *extraout_x8;
  long *plVar10;
  long *plVar11;
  long lVar12;
  undefined *puVar13;
  undefined **ppuVar14;
  code *pcStack_68;
  undefined **ppuStack_60;
  undefined8 uStack_58;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcStack_68 = FUN_10a6a9cc8;
  ppuStack_60 = &PTR_FUN_110c0d710;
  ppuVar8 = &PTR_DAT_110c0c9d0;
  ppcVar9 = &pcStack_68;
  uStack_58 = param_1;
  FUN_10a65cb90(param_2,&PTR_DAT_110c0c9d0,ppcVar9,0);
  pppuVar5 = &ppuStack_60;
  (*(code *)*ppuStack_60)();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_28) {
    ___stack_chk_fail();
    (*(code *)*ppuStack_60)(&ppuStack_60);
    __Unwind_Resume();
    pppuVar6 = pppuVar5 + 0xc;
    if (ppcVar9 != (code **)0x0) {
      pppuVar6 = (undefined ***)(ppcVar9 + 0x16);
    }
    ppuVar14 = *pppuVar6;
    pppuVar6 = pppuVar5;
    func_0x00010a0fda30();
    plVar7 = (long *)0xd8;
    __Znwm();
    plVar10 = plVar7 + 1;
    plVar7[2] = 0;
    *plVar10 = 0;
    *plVar7 = (long)&PTR_DAT_110c0d738;
    plVar11 = plVar7 + 3;
    *plVar11 = (long)&PTR_FUN_110c0eba0;
    *(undefined1 *)(plVar7 + 4) = 0;
    plVar7[6] = 0;
    plVar7[7] = 0;
    plVar7[0xb] = (long)pppuVar6;
    plVar7[0xc] = (long)ppuVar8;
    *(undefined1 *)(plVar7 + 0xd) = 0;
    *(undefined8 *)((long)plVar7 + 0x6c) = 0x800000000;
    plVar7[0xf] = (long)ppuVar14;
    *(undefined1 *)(plVar7 + 0x10) = 0;
    *(undefined1 *)(plVar7 + 0x14) = 0;
    *(undefined1 *)(plVar7 + 0x15) = 1;
    plVar7[0x16] = 0;
    plVar7[0x17] = 0;
    plVar7[5] = (long)&PTR_FUN_110c0ec38;
    plVar7[10] = (long)&PTR_FUN_110c0ec90;
    plVar7[0x18] = 0;
    plVar7[0x19] = 0;
    plVar7[0x1a] = 0;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar4) {
        *plVar10 = *plVar10 + 1;
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
    plVar7[8] = (long)plVar11;
    plVar7[9] = (long)plVar7;
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
      (**(code **)(*plVar7 + 0x10))(plVar7);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
    }
    *(undefined4 *)((long)plVar7 + 0x6c) = *(undefined4 *)((long)pppuVar5 + 0x54);
    ppuVar14 = pppuVar5[0x14];
    ppuVar8 = pppuVar5[0x13];
    if (pppuVar5[0x14] != (undefined **)0x0) {
      ppuVar2 = pppuVar5[0x14] + 2;
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(ppuVar2,0x10);
        if (bVar4) {
          *ppuVar2 = *ppuVar2 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    lVar12 = plVar7[0x17];
    plVar7[0x17] = (long)ppuVar14;
    plVar7[0x16] = (long)ppuVar8;
    if (lVar12 != 0) {
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
    ppuVar8 = pppuVar5[0x16];
    if (ppuVar8 == (undefined **)0x0) {
      ppuVar8 = (undefined **)0x0;
    }
    else {
      __ZNSt3__119__shared_weak_count4lockEv();
    }
    FUN_10a68a860();
    if (ppuVar8 != (undefined **)0x0) {
      ppuVar14 = ppuVar8 + 1;
      do {
        puVar13 = *ppuVar14;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(ppuVar14,0x10);
        if (bVar4) {
          *ppuVar14 = puVar13 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (puVar13 == (undefined *)0x0) {
        (**(code **)(*ppuVar8 + 0x10))(ppuVar8);
        __ZNSt3__119__shared_weak_count14__release_weakEv(ppuVar8);
      }
    }
    extraout_x8[1] = plVar7;
    *extraout_x8 = plVar11;
    return;
  }
  return;
}



/* Entry: 10a693324; end: 10a69352f;  */

void FUN_10a693324(undefined8 *param_1,long param_2,long param_3,long param_4)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  long *plVar6;
  long *plVar7;
  long lVar8;
  long lVar9;
  
  plVar4 = (long *)(param_2 + 0x60);
  if (param_4 != 0) {
    plVar4 = (long *)(param_4 + 0xb0);
  }
  lVar9 = *plVar4;
  lVar8 = param_2;
  func_0x00010a0fda30();
  plVar4 = (long *)0xd8;
  __Znwm();
  plVar6 = plVar4 + 1;
  plVar4[2] = 0;
  *plVar6 = 0;
  *plVar4 = (long)&PTR_DAT_110c0d738;
  plVar7 = plVar4 + 3;
  *plVar7 = (long)&PTR_FUN_110c0eba0;
  *(undefined1 *)(plVar4 + 4) = 0;
  plVar4[6] = 0;
  plVar4[7] = 0;
  plVar4[0xb] = lVar8;
  plVar4[0xc] = param_3;
  *(undefined1 *)(plVar4 + 0xd) = 0;
  *(undefined8 *)((long)plVar4 + 0x6c) = 0x800000000;
  plVar4[0xf] = lVar9;
  *(undefined1 *)(plVar4 + 0x10) = 0;
  *(undefined1 *)(plVar4 + 0x14) = 0;
  *(undefined1 *)(plVar4 + 0x15) = 1;
  plVar4[0x16] = 0;
  plVar4[0x17] = 0;
  plVar4[5] = (long)&PTR_FUN_110c0ec38;
  plVar4[10] = (long)&PTR_FUN_110c0ec90;
  plVar4[0x18] = 0;
  plVar4[0x19] = 0;
  plVar4[0x1a] = 0;
  do {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
    if (bVar3) {
      *plVar6 = *plVar6 + 1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  plVar1 = plVar4 + 2;
  do {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar3) {
      *plVar1 = *plVar1 + 1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  plVar4[8] = (long)plVar7;
  plVar4[9] = (long)plVar4;
  do {
    lVar8 = *plVar6;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
    if (bVar3) {
      *plVar6 = lVar8 + -1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (lVar8 == 0) {
    (**(code **)(*plVar4 + 0x10))(plVar4);
    __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
  }
  *(undefined4 *)((long)plVar4 + 0x6c) = *(undefined4 *)(param_2 + 0x54);
  lVar9 = *(long *)(param_2 + 0xa0);
  lVar8 = *(long *)(param_2 + 0x98);
  if (*(long *)(param_2 + 0xa0) != 0) {
    plVar6 = (long *)(*(long *)(param_2 + 0xa0) + 0x10);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar3) {
        *plVar6 = *plVar6 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  lVar5 = plVar4[0x17];
  plVar4[0x17] = lVar9;
  plVar4[0x16] = lVar8;
  if (lVar5 != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  plVar6 = *(long **)(param_2 + 0xb0);
  if (plVar6 == (long *)0x0) {
    plVar6 = (long *)0x0;
  }
  else {
    __ZNSt3__119__shared_weak_count4lockEv();
  }
  FUN_10a68a860();
  if (plVar6 != (long *)0x0) {
    plVar1 = plVar6 + 1;
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
      (**(code **)(*plVar6 + 0x10))(plVar6);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
    }
  }
  param_1[1] = plVar4;
  *param_1 = plVar7;
  return;
}



/* Entry: 10a693530; end: 10a6937ab;  */

void FUN_10a693530(long param_1)

{
  long *plVar1;
  undefined **ppuVar2;
  char cVar3;
  bool bVar4;
  long *plVar5;
  long *plVar6;
  undefined ***pppuVar7;
  undefined ***pppuVar8;
  undefined **ppuVar9;
  undefined8 *puVar10;
  code **ppcVar11;
  undefined8 *extraout_x8;
  long lVar12;
  undefined *puVar13;
  long *plVar14;
  long lVar15;
  undefined **ppuVar16;
  code *pcStack_118;
  undefined **ppuStack_110;
  undefined ***pppuStack_108;
  long lStack_d8;
  undefined8 *puStack_d0;
  undefined ***pppuStack_c8;
  undefined1 *puStack_c0;
  code *pcStack_b8;
  undefined8 uStack_b0;
  long *plStack_a8;
  long lStack_a0;
  long *plStack_98;
  long *plStack_90;
  undefined8 uStack_88;
  undefined **ppuStack_80;
  long **pplStack_78;
  long lStack_70;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar5 = *(long **)(param_1 + 0xb0);
  if ((plVar5 == (long *)0x0) || (__ZNSt3__119__shared_weak_count4lockEv(), plVar5 == (long *)0x0))
  {
    plStack_90 = (long *)0x0;
  }
  else {
    plVar14 = *(long **)(param_1 + 0xa8);
    plVar6 = plVar5 + 1;
    do {
      lVar12 = *plVar6;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar4) {
        *plVar6 = lVar12 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar12 == 0) {
      (**(code **)(*plVar5 + 0x10))(plVar5);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
    }
    plStack_90 = plVar14;
    if (plVar14 != (long *)0x0) goto LAB_10a693700;
  }
  plVar5 = *(long **)(param_1 + 0xa0);
  if (plVar5 != (long *)0x0) {
    lVar12 = *(long *)(param_1 + 0x98);
    plVar6 = plVar5 + 2;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar4) {
        *plVar6 = *plVar6 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    plVar6 = plVar5;
    __ZNSt3__119__shared_weak_count4lockEv();
    plStack_98 = plVar6;
    if (plVar6 != (long *)0x0) {
      lStack_a0 = lVar12;
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
      plVar5 = plVar6;
      if (lVar12 != 0) {
        lVar15 = *(long *)(lVar12 + 0x158);
        if (lVar15 != lVar12 + 0x150) {
LAB_10a693618:
          if (*(long *)(lVar15 + 0x10) == 0) goto LAB_10a693634;
          plVar6 = (long *)(*(long *)(lVar15 + 0x10) + 0xb0);
          (**(code **)(*plVar6 + 0x18))(plVar6,0xc2c0ac5e4c065340);
          if (plVar6 == (long *)0x0) goto LAB_10a693634;
          plStack_90 = plVar6;
          FUN_10a2d1b5c(&uStack_b0);
          if (plStack_a8 != (long *)0x0) {
            plVar5 = plStack_a8 + 2;
            do {
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(plVar5,0x10);
              if (bVar4) {
                *plVar5 = *plVar5 + 1;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
          }
          lVar12 = *(long *)(param_1 + 0xb0);
          *(long **)(param_1 + 0xb0) = plStack_a8;
          *(undefined8 *)(param_1 + 0xa8) = uStack_b0;
          if (lVar12 != 0) {
            __ZNSt3__119__shared_weak_count14__release_weakEv();
          }
          plVar5 = plStack_98;
          if (plStack_a8 != (long *)0x0) {
            plVar6 = plStack_a8 + 1;
            do {
              lVar12 = *plVar6;
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(plVar6,0x10);
              if (bVar4) {
                *plVar6 = lVar12 + -1;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
            if (lVar12 == 0) {
              (**(code **)(*plStack_a8 + 0x10))(plStack_a8);
              __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_a8);
              plVar5 = plStack_98;
            }
          }
          goto joined_r0x00010a6936cc;
        }
LAB_10a693640:
        plStack_90 = (long *)0x0;
joined_r0x00010a6936cc:
        if (plVar5 == (long *)0x0) goto LAB_10a693700;
      }
      plVar6 = plVar5 + 1;
      do {
        lVar12 = *plVar6;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar6,0x10);
        if (bVar4) {
          *plVar6 = lVar12 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar12 != 0) goto LAB_10a693700;
      (**(code **)(*plVar5 + 0x10))(plVar5);
    }
    __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
  }
LAB_10a693700:
  uStack_88 = 0x10a6a9e2c;
  ppuStack_80 = &PTR_FUN_110c0d778;
  pplStack_78 = &plStack_90;
  puVar10 = &uStack_88;
  lStack_70 = param_1;
  FUN_10a6058c8(*(long *)(*(long *)(*(long *)(param_1 + 0x60) + 0x830) + 0x18) + 0x4a0,puVar10);
  pppuVar7 = &ppuStack_80;
  (*(code *)*ppuStack_80)();
  *(undefined8 *)(param_1 + 0xb8) = 0;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010a05253c(&lStack_a0);
  pppuVar8 = pppuVar7;
  __Unwind_Resume();
  pcStack_b8 = FUN_10a6937ac;
  lStack_d8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcStack_118 = FUN_10a6a9eb8;
  ppuStack_110 = &PTR_FUN_110c0d798;
  ppuVar9 = &PTR_DAT_110c0c9d0;
  ppcVar11 = &pcStack_118;
  pppuStack_108 = pppuVar8;
  puStack_d0 = &uStack_88;
  pppuStack_c8 = pppuVar7;
  puStack_c0 = &stack0xfffffffffffffff0;
  FUN_10a65cb90(puVar10,&PTR_DAT_110c0c9d0,ppcVar11,0);
  pppuVar7 = &ppuStack_110;
  (*(code *)*ppuStack_110)();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_d8) {
    ___stack_chk_fail();
    (*(code *)*ppuStack_110)(&ppuStack_110);
    __Unwind_Resume();
    pppuVar8 = pppuVar7 + 0xc;
    if (ppcVar11 != (code **)0x0) {
      pppuVar8 = (undefined ***)(ppcVar11 + 0x16);
    }
    ppuVar16 = *pppuVar8;
    pppuVar8 = pppuVar7;
    func_0x00010a0fda30();
    plVar5 = (long *)0xd8;
    __Znwm();
    plVar6 = plVar5 + 1;
    plVar5[2] = 0;
    *plVar6 = 0;
    *plVar5 = (long)&PTR_DAT_110c0d7c0;
    plVar14 = plVar5 + 3;
    *plVar14 = (long)&PTR_FUN_110c0ecb0;
    *(undefined1 *)(plVar5 + 4) = 0;
    plVar5[6] = 0;
    plVar5[7] = 0;
    plVar5[0xb] = (long)pppuVar8;
    plVar5[0xc] = (long)ppuVar9;
    *(undefined1 *)(plVar5 + 0xd) = 0;
    *(undefined8 *)((long)plVar5 + 0x6c) = 0x800000000;
    plVar5[0xf] = (long)ppuVar16;
    *(undefined1 *)(plVar5 + 0x10) = 0;
    *(undefined1 *)(plVar5 + 0x14) = 0;
    *(undefined1 *)(plVar5 + 0x15) = 1;
    plVar5[0x16] = 0;
    plVar5[0x17] = 0;
    plVar5[5] = (long)&PTR_FUN_110c0ed48;
    plVar5[10] = (long)&PTR_FUN_110c0eda0;
    plVar5[0x18] = 0;
    plVar5[0x19] = 0;
    plVar5[0x1a] = 0;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar4) {
        *plVar6 = *plVar6 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    plVar1 = plVar5 + 2;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = *plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    plVar5[8] = (long)plVar14;
    plVar5[9] = (long)plVar5;
    do {
      lVar12 = *plVar6;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar4) {
        *plVar6 = lVar12 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar12 == 0) {
      (**(code **)(*plVar5 + 0x10))(plVar5);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
    }
    *(undefined4 *)((long)plVar5 + 0x6c) = *(undefined4 *)((long)pppuVar7 + 0x54);
    ppuVar16 = pppuVar7[0x14];
    ppuVar9 = pppuVar7[0x13];
    if (pppuVar7[0x14] != (undefined **)0x0) {
      ppuVar2 = pppuVar7[0x14] + 2;
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(ppuVar2,0x10);
        if (bVar4) {
          *ppuVar2 = *ppuVar2 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    lVar12 = plVar5[0x17];
    plVar5[0x17] = (long)ppuVar16;
    plVar5[0x16] = (long)ppuVar9;
    if (lVar12 != 0) {
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
    ppuVar9 = pppuVar7[0x16];
    if (ppuVar9 == (undefined **)0x0) {
      ppuVar9 = (undefined **)0x0;
    }
    else {
      __ZNSt3__119__shared_weak_count4lockEv();
    }
    FUN_10a68a860();
    if (ppuVar9 != (undefined **)0x0) {
      ppuVar16 = ppuVar9 + 1;
      do {
        puVar13 = *ppuVar16;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(ppuVar16,0x10);
        if (bVar4) {
          *ppuVar16 = puVar13 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (puVar13 == (undefined *)0x0) {
        (**(code **)(*ppuVar9 + 0x10))(ppuVar9);
        __ZNSt3__119__shared_weak_count14__release_weakEv(ppuVar9);
      }
    }
    extraout_x8[1] = plVar5;
    *extraout_x8 = plVar14;
    return;
  }
  return;
LAB_10a693634:
  lVar15 = *(long *)(lVar15 + 8);
  if (lVar15 == lVar12 + 0x150) goto LAB_10a693640;
  goto LAB_10a693618;
}



/* Entry: 10a6937ac; end: 10a69385f;  */

void FUN_10a6937ac(undefined8 param_1,undefined8 param_2)

{
  long *plVar1;
  undefined **ppuVar2;
  char cVar3;
  bool bVar4;
  undefined ***pppuVar5;
  undefined ***pppuVar6;
  long *plVar7;
  undefined **ppuVar8;
  code **ppcVar9;
  undefined8 *extraout_x8;
  long *plVar10;
  long *plVar11;
  long lVar12;
  undefined *puVar13;
  undefined **ppuVar14;
  code *pcStack_68;
  undefined **ppuStack_60;
  undefined8 uStack_58;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcStack_68 = FUN_10a6a9eb8;
  ppuStack_60 = &PTR_FUN_110c0d798;
  ppuVar8 = &PTR_DAT_110c0c9d0;
  ppcVar9 = &pcStack_68;
  uStack_58 = param_1;
  FUN_10a65cb90(param_2,&PTR_DAT_110c0c9d0,ppcVar9,0);
  pppuVar5 = &ppuStack_60;
  (*(code *)*ppuStack_60)();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_28) {
    ___stack_chk_fail();
    (*(code *)*ppuStack_60)(&ppuStack_60);
    __Unwind_Resume();
    pppuVar6 = pppuVar5 + 0xc;
    if (ppcVar9 != (code **)0x0) {
      pppuVar6 = (undefined ***)(ppcVar9 + 0x16);
    }
    ppuVar14 = *pppuVar6;
    pppuVar6 = pppuVar5;
    func_0x00010a0fda30();
    plVar7 = (long *)0xd8;
    __Znwm();
    plVar10 = plVar7 + 1;
    plVar7[2] = 0;
    *plVar10 = 0;
    *plVar7 = (long)&PTR_DAT_110c0d7c0;
    plVar11 = plVar7 + 3;
    *plVar11 = (long)&PTR_FUN_110c0ecb0;
    *(undefined1 *)(plVar7 + 4) = 0;
    plVar7[6] = 0;
    plVar7[7] = 0;
    plVar7[0xb] = (long)pppuVar6;
    plVar7[0xc] = (long)ppuVar8;
    *(undefined1 *)(plVar7 + 0xd) = 0;
    *(undefined8 *)((long)plVar7 + 0x6c) = 0x800000000;
    plVar7[0xf] = (long)ppuVar14;
    *(undefined1 *)(plVar7 + 0x10) = 0;
    *(undefined1 *)(plVar7 + 0x14) = 0;
    *(undefined1 *)(plVar7 + 0x15) = 1;
    plVar7[0x16] = 0;
    plVar7[0x17] = 0;
    plVar7[5] = (long)&PTR_FUN_110c0ed48;
    plVar7[10] = (long)&PTR_FUN_110c0eda0;
    plVar7[0x18] = 0;
    plVar7[0x19] = 0;
    plVar7[0x1a] = 0;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar4) {
        *plVar10 = *plVar10 + 1;
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
    plVar7[8] = (long)plVar11;
    plVar7[9] = (long)plVar7;
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
      (**(code **)(*plVar7 + 0x10))(plVar7);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
    }
    *(undefined4 *)((long)plVar7 + 0x6c) = *(undefined4 *)((long)pppuVar5 + 0x54);
    ppuVar14 = pppuVar5[0x14];
    ppuVar8 = pppuVar5[0x13];
    if (pppuVar5[0x14] != (undefined **)0x0) {
      ppuVar2 = pppuVar5[0x14] + 2;
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(ppuVar2,0x10);
        if (bVar4) {
          *ppuVar2 = *ppuVar2 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    lVar12 = plVar7[0x17];
    plVar7[0x17] = (long)ppuVar14;
    plVar7[0x16] = (long)ppuVar8;
    if (lVar12 != 0) {
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
    ppuVar8 = pppuVar5[0x16];
    if (ppuVar8 == (undefined **)0x0) {
      ppuVar8 = (undefined **)0x0;
    }
    else {
      __ZNSt3__119__shared_weak_count4lockEv();
    }
    FUN_10a68a860();
    if (ppuVar8 != (undefined **)0x0) {
      ppuVar14 = ppuVar8 + 1;
      do {
        puVar13 = *ppuVar14;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(ppuVar14,0x10);
        if (bVar4) {
          *ppuVar14 = puVar13 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (puVar13 == (undefined *)0x0) {
        (**(code **)(*ppuVar8 + 0x10))(ppuVar8);
        __ZNSt3__119__shared_weak_count14__release_weakEv(ppuVar8);
      }
    }
    extraout_x8[1] = plVar7;
    *extraout_x8 = plVar11;
    return;
  }
  return;
}



/* Entry: 10a693860; end: 10a693a6b;  */

void FUN_10a693860(undefined8 *param_1,long param_2,long param_3,long param_4)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  long *plVar6;
  long *plVar7;
  long lVar8;
  long lVar9;
  
  plVar4 = (long *)(param_2 + 0x60);
  if (param_4 != 0) {
    plVar4 = (long *)(param_4 + 0xb0);
  }
  lVar9 = *plVar4;
  lVar8 = param_2;
  func_0x00010a0fda30();
  plVar4 = (long *)0xd8;
  __Znwm();
  plVar6 = plVar4 + 1;
  plVar4[2] = 0;
  *plVar6 = 0;
  *plVar4 = (long)&PTR_DAT_110c0d7c0;
  plVar7 = plVar4 + 3;
  *plVar7 = (long)&PTR_FUN_110c0ecb0;
  *(undefined1 *)(plVar4 + 4) = 0;
  plVar4[6] = 0;
  plVar4[7] = 0;
  plVar4[0xb] = lVar8;
  plVar4[0xc] = param_3;
  *(undefined1 *)(plVar4 + 0xd) = 0;
  *(undefined8 *)((long)plVar4 + 0x6c) = 0x800000000;
  plVar4[0xf] = lVar9;
  *(undefined1 *)(plVar4 + 0x10) = 0;
  *(undefined1 *)(plVar4 + 0x14) = 0;
  *(undefined1 *)(plVar4 + 0x15) = 1;
  plVar4[0x16] = 0;
  plVar4[0x17] = 0;
  plVar4[5] = (long)&PTR_FUN_110c0ed48;
  plVar4[10] = (long)&PTR_FUN_110c0eda0;
  plVar4[0x18] = 0;
  plVar4[0x19] = 0;
  plVar4[0x1a] = 0;
  do {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
    if (bVar3) {
      *plVar6 = *plVar6 + 1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  plVar1 = plVar4 + 2;
  do {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar3) {
      *plVar1 = *plVar1 + 1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  plVar4[8] = (long)plVar7;
  plVar4[9] = (long)plVar4;
  do {
    lVar8 = *plVar6;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
    if (bVar3) {
      *plVar6 = lVar8 + -1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (lVar8 == 0) {
    (**(code **)(*plVar4 + 0x10))(plVar4);
    __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
  }
  *(undefined4 *)((long)plVar4 + 0x6c) = *(undefined4 *)(param_2 + 0x54);
  lVar9 = *(long *)(param_2 + 0xa0);
  lVar8 = *(long *)(param_2 + 0x98);
  if (*(long *)(param_2 + 0xa0) != 0) {
    plVar6 = (long *)(*(long *)(param_2 + 0xa0) + 0x10);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar3) {
        *plVar6 = *plVar6 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  lVar5 = plVar4[0x17];
  plVar4[0x17] = lVar9;
  plVar4[0x16] = lVar8;
  if (lVar5 != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  plVar6 = *(long **)(param_2 + 0xb0);
  if (plVar6 == (long *)0x0) {
    plVar6 = (long *)0x0;
  }
  else {
    __ZNSt3__119__shared_weak_count4lockEv();
  }
  FUN_10a68a860();
  if (plVar6 != (long *)0x0) {
    plVar1 = plVar6 + 1;
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
      (**(code **)(*plVar6 + 0x10))(plVar6);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
    }
  }
  param_1[1] = plVar4;
  *param_1 = plVar7;
  return;
}



/* Entry: 10a693a6c; end: 10a693ce7;  */

void FUN_10a693a6c(long param_1)

{
  long *plVar1;
  undefined **ppuVar2;
  char cVar3;
  bool bVar4;
  long *plVar5;
  long *plVar6;
  undefined ***pppuVar7;
  undefined ***pppuVar8;
  undefined **ppuVar9;
  undefined8 *puVar10;
  code **ppcVar11;
  undefined8 *extraout_x8;
  long lVar12;
  undefined *puVar13;
  long *plVar14;
  long lVar15;
  undefined **ppuVar16;
  code *pcStack_118;
  undefined **ppuStack_110;
  undefined ***pppuStack_108;
  long lStack_d8;
  undefined8 *puStack_d0;
  undefined ***pppuStack_c8;
  undefined1 *puStack_c0;
  code *pcStack_b8;
  undefined8 uStack_b0;
  long *plStack_a8;
  long lStack_a0;
  long *plStack_98;
  long *plStack_90;
  undefined8 uStack_88;
  undefined **ppuStack_80;
  long **pplStack_78;
  long lStack_70;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar5 = *(long **)(param_1 + 0xb0);
  if ((plVar5 == (long *)0x0) || (__ZNSt3__119__shared_weak_count4lockEv(), plVar5 == (long *)0x0))
  {
    plStack_90 = (long *)0x0;
  }
  else {
    plVar14 = *(long **)(param_1 + 0xa8);
    plVar6 = plVar5 + 1;
    do {
      lVar12 = *plVar6;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar4) {
        *plVar6 = lVar12 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar12 == 0) {
      (**(code **)(*plVar5 + 0x10))(plVar5);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
    }
    plStack_90 = plVar14;
    if (plVar14 != (long *)0x0) goto LAB_10a693c3c;
  }
  plVar5 = *(long **)(param_1 + 0xa0);
  if (plVar5 != (long *)0x0) {
    lVar12 = *(long *)(param_1 + 0x98);
    plVar6 = plVar5 + 2;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar4) {
        *plVar6 = *plVar6 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    plVar6 = plVar5;
    __ZNSt3__119__shared_weak_count4lockEv();
    plStack_98 = plVar6;
    if (plVar6 != (long *)0x0) {
      lStack_a0 = lVar12;
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
      plVar5 = plVar6;
      if (lVar12 != 0) {
        lVar15 = *(long *)(lVar12 + 0x158);
        if (lVar15 != lVar12 + 0x150) {
LAB_10a693b54:
          if (*(long *)(lVar15 + 0x10) == 0) goto LAB_10a693b70;
          plVar6 = (long *)(*(long *)(lVar15 + 0x10) + 0xb0);
          (**(code **)(*plVar6 + 0x18))(plVar6,0xc2c0ac5e4c065340);
          if (plVar6 == (long *)0x0) goto LAB_10a693b70;
          plStack_90 = plVar6;
          FUN_10a2d1b5c(&uStack_b0);
          if (plStack_a8 != (long *)0x0) {
            plVar5 = plStack_a8 + 2;
            do {
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(plVar5,0x10);
              if (bVar4) {
                *plVar5 = *plVar5 + 1;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
          }
          lVar12 = *(long *)(param_1 + 0xb0);
          *(long **)(param_1 + 0xb0) = plStack_a8;
          *(undefined8 *)(param_1 + 0xa8) = uStack_b0;
          if (lVar12 != 0) {
            __ZNSt3__119__shared_weak_count14__release_weakEv();
          }
          plVar5 = plStack_98;
          if (plStack_a8 != (long *)0x0) {
            plVar6 = plStack_a8 + 1;
            do {
              lVar12 = *plVar6;
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(plVar6,0x10);
              if (bVar4) {
                *plVar6 = lVar12 + -1;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
            if (lVar12 == 0) {
              (**(code **)(*plStack_a8 + 0x10))(plStack_a8);
              __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_a8);
              plVar5 = plStack_98;
            }
          }
          goto joined_r0x00010a693c08;
        }
LAB_10a693b7c:
        plStack_90 = (long *)0x0;
joined_r0x00010a693c08:
        if (plVar5 == (long *)0x0) goto LAB_10a693c3c;
      }
      plVar6 = plVar5 + 1;
      do {
        lVar12 = *plVar6;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar6,0x10);
        if (bVar4) {
          *plVar6 = lVar12 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar12 != 0) goto LAB_10a693c3c;
      (**(code **)(*plVar5 + 0x10))(plVar5);
    }
    __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
  }
LAB_10a693c3c:
  uStack_88 = 0x10a6aa01c;
  ppuStack_80 = &PTR_FUN_110c0d800;
  pplStack_78 = &plStack_90;
  puVar10 = &uStack_88;
  lStack_70 = param_1;
  FUN_10a6058c8(*(long *)(*(long *)(*(long *)(param_1 + 0x60) + 0x830) + 0x18) + 0x4a0,puVar10);
  pppuVar7 = &ppuStack_80;
  (*(code *)*ppuStack_80)();
  *(undefined8 *)(param_1 + 0xb8) = 0;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010a05253c(&lStack_a0);
  pppuVar8 = pppuVar7;
  __Unwind_Resume();
  pcStack_b8 = FUN_10a693ce8;
  lStack_d8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcStack_118 = FUN_10a6aa0ac;
  ppuStack_110 = &PTR_FUN_110c0d820;
  ppuVar9 = &PTR_DAT_110c0c9d0;
  ppcVar11 = &pcStack_118;
  pppuStack_108 = pppuVar8;
  puStack_d0 = &uStack_88;
  pppuStack_c8 = pppuVar7;
  puStack_c0 = &stack0xfffffffffffffff0;
  FUN_10a65cb90(puVar10,&PTR_DAT_110c0c9d0,ppcVar11,0);
  pppuVar7 = &ppuStack_110;
  (*(code *)*ppuStack_110)();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_d8) {
    ___stack_chk_fail();
    (*(code *)*ppuStack_110)(&ppuStack_110);
    __Unwind_Resume();
    pppuVar8 = pppuVar7 + 0xc;
    if (ppcVar11 != (code **)0x0) {
      pppuVar8 = (undefined ***)(ppcVar11 + 0x16);
    }
    ppuVar16 = *pppuVar8;
    pppuVar8 = pppuVar7;
    func_0x00010a0fda30();
    plVar5 = (long *)0xf0;
    __Znwm();
    plVar6 = plVar5 + 1;
    plVar5[2] = 0;
    *plVar6 = 0;
    *plVar5 = (long)&PTR_DAT_110c0d848;
    plVar14 = plVar5 + 3;
    *plVar14 = (long)&PTR_FUN_110c0f0f0;
    *(undefined1 *)(plVar5 + 4) = 0;
    plVar5[6] = 0;
    plVar5[7] = 0;
    plVar5[0xb] = (long)pppuVar8;
    plVar5[0xc] = (long)ppuVar9;
    *(undefined1 *)(plVar5 + 0xd) = 0;
    *(undefined8 *)((long)plVar5 + 0x6c) = 0x800000000;
    plVar5[0xf] = (long)ppuVar16;
    *(undefined1 *)(plVar5 + 0x10) = 0;
    *(undefined1 *)(plVar5 + 0x14) = 0;
    *(undefined1 *)(plVar5 + 0x15) = 1;
    plVar5[0x16] = 0;
    plVar5[0x17] = 0;
    plVar5[5] = (long)&PTR_FUN_110c0f188;
    plVar5[10] = (long)&PTR_FUN_110c0f1e0;
    plVar5[0x1b] = 0;
    plVar5[0x1a] = 0;
    plVar5[0x1d] = 0;
    plVar5[0x1c] = 0;
    plVar5[0x19] = 0;
    plVar5[0x18] = 0;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar4) {
        *plVar6 = *plVar6 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    plVar1 = plVar5 + 2;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = *plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    plVar5[8] = (long)plVar14;
    plVar5[9] = (long)plVar5;
    do {
      lVar12 = *plVar6;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar4) {
        *plVar6 = lVar12 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar12 == 0) {
      (**(code **)(*plVar5 + 0x10))(plVar5);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
    }
    *(undefined4 *)((long)plVar5 + 0x6c) = *(undefined4 *)((long)pppuVar7 + 0x54);
    ppuVar16 = pppuVar7[0x14];
    ppuVar9 = pppuVar7[0x13];
    if (pppuVar7[0x14] != (undefined **)0x0) {
      ppuVar2 = pppuVar7[0x14] + 2;
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(ppuVar2,0x10);
        if (bVar4) {
          *ppuVar2 = *ppuVar2 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    lVar12 = plVar5[0x17];
    plVar5[0x17] = (long)ppuVar16;
    plVar5[0x16] = (long)ppuVar9;
    if (lVar12 != 0) {
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
    ppuVar9 = pppuVar7[0x16];
    if (ppuVar9 == (undefined **)0x0) {
      ppuVar9 = (undefined **)0x0;
    }
    else {
      __ZNSt3__119__shared_weak_count4lockEv();
    }
    FUN_10a68a860();
    if (ppuVar9 != (undefined **)0x0) {
      ppuVar16 = ppuVar9 + 1;
      do {
        puVar13 = *ppuVar16;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(ppuVar16,0x10);
        if (bVar4) {
          *ppuVar16 = puVar13 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (puVar13 == (undefined *)0x0) {
        (**(code **)(*ppuVar9 + 0x10))(ppuVar9);
        __ZNSt3__119__shared_weak_count14__release_weakEv(ppuVar9);
      }
    }
    extraout_x8[1] = plVar5;
    *extraout_x8 = plVar14;
    return;
  }
  return;
LAB_10a693b70:
  lVar15 = *(long *)(lVar15 + 8);
  if (lVar15 == lVar12 + 0x150) goto LAB_10a693b7c;
  goto LAB_10a693b54;
}



/* Entry: 10a693ce8; end: 10a693d9b;  */

void FUN_10a693ce8(undefined8 param_1,undefined8 param_2)

{
  long *plVar1;
  undefined **ppuVar2;
  char cVar3;
  bool bVar4;
  undefined ***pppuVar5;
  undefined ***pppuVar6;
  long *plVar7;
  undefined **ppuVar8;
  code **ppcVar9;
  undefined8 *extraout_x8;
  long *plVar10;
  long *plVar11;
  long lVar12;
  undefined *puVar13;
  undefined **ppuVar14;
  code *pcStack_68;
  undefined **ppuStack_60;
  undefined8 uStack_58;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcStack_68 = FUN_10a6aa0ac;
  ppuStack_60 = &PTR_FUN_110c0d820;
  ppuVar8 = &PTR_DAT_110c0c9d0;
  ppcVar9 = &pcStack_68;
  uStack_58 = param_1;
  FUN_10a65cb90(param_2,&PTR_DAT_110c0c9d0,ppcVar9,0);
  pppuVar5 = &ppuStack_60;
  (*(code *)*ppuStack_60)();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_28) {
    ___stack_chk_fail();
    (*(code *)*ppuStack_60)(&ppuStack_60);
    __Unwind_Resume();
    pppuVar6 = pppuVar5 + 0xc;
    if (ppcVar9 != (code **)0x0) {
      pppuVar6 = (undefined ***)(ppcVar9 + 0x16);
    }
    ppuVar14 = *pppuVar6;
    pppuVar6 = pppuVar5;
    func_0x00010a0fda30();
    plVar7 = (long *)0xf0;
    __Znwm();
    plVar10 = plVar7 + 1;
    plVar7[2] = 0;
    *plVar10 = 0;
    *plVar7 = (long)&PTR_DAT_110c0d848;
    plVar11 = plVar7 + 3;
    *plVar11 = (long)&PTR_FUN_110c0f0f0;
    *(undefined1 *)(plVar7 + 4) = 0;
    plVar7[6] = 0;
    plVar7[7] = 0;
    plVar7[0xb] = (long)pppuVar6;
    plVar7[0xc] = (long)ppuVar8;
    *(undefined1 *)(plVar7 + 0xd) = 0;
    *(undefined8 *)((long)plVar7 + 0x6c) = 0x800000000;
    plVar7[0xf] = (long)ppuVar14;
    *(undefined1 *)(plVar7 + 0x10) = 0;
    *(undefined1 *)(plVar7 + 0x14) = 0;
    *(undefined1 *)(plVar7 + 0x15) = 1;
    plVar7[0x16] = 0;
    plVar7[0x17] = 0;
    plVar7[5] = (long)&PTR_FUN_110c0f188;
    plVar7[10] = (long)&PTR_FUN_110c0f1e0;
    plVar7[0x1b] = 0;
    plVar7[0x1a] = 0;
    plVar7[0x1d] = 0;
    plVar7[0x1c] = 0;
    plVar7[0x19] = 0;
    plVar7[0x18] = 0;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar4) {
        *plVar10 = *plVar10 + 1;
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
    plVar7[8] = (long)plVar11;
    plVar7[9] = (long)plVar7;
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
      (**(code **)(*plVar7 + 0x10))(plVar7);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
    }
    *(undefined4 *)((long)plVar7 + 0x6c) = *(undefined4 *)((long)pppuVar5 + 0x54);
    ppuVar14 = pppuVar5[0x14];
    ppuVar8 = pppuVar5[0x13];
    if (pppuVar5[0x14] != (undefined **)0x0) {
      ppuVar2 = pppuVar5[0x14] + 2;
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(ppuVar2,0x10);
        if (bVar4) {
          *ppuVar2 = *ppuVar2 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    lVar12 = plVar7[0x17];
    plVar7[0x17] = (long)ppuVar14;
    plVar7[0x16] = (long)ppuVar8;
    if (lVar12 != 0) {
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
    ppuVar8 = pppuVar5[0x16];
    if (ppuVar8 == (undefined **)0x0) {
      ppuVar8 = (undefined **)0x0;
    }
    else {
      __ZNSt3__119__shared_weak_count4lockEv();
    }
    FUN_10a68a860();
    if (ppuVar8 != (undefined **)0x0) {
      ppuVar14 = ppuVar8 + 1;
      do {
        puVar13 = *ppuVar14;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(ppuVar14,0x10);
        if (bVar4) {
          *ppuVar14 = puVar13 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (puVar13 == (undefined *)0x0) {
        (**(code **)(*ppuVar8 + 0x10))(ppuVar8);
        __ZNSt3__119__shared_weak_count14__release_weakEv(ppuVar8);
      }
    }
    extraout_x8[1] = plVar7;
    *extraout_x8 = plVar11;
    return;
  }
  return;
}



/* Entry: 10a693d9c; end: 10a693fab;  */

void FUN_10a693d9c(undefined8 *param_1,long param_2,long param_3,long param_4)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  long *plVar6;
  long *plVar7;
  long lVar8;
  long lVar9;
  
  plVar4 = (long *)(param_2 + 0x60);
  if (param_4 != 0) {
    plVar4 = (long *)(param_4 + 0xb0);
  }
  lVar9 = *plVar4;
  lVar8 = param_2;
  func_0x00010a0fda30();
  plVar4 = (long *)0xf0;
  __Znwm();
  plVar6 = plVar4 + 1;
  plVar4[2] = 0;
  *plVar6 = 0;
  *plVar4 = (long)&PTR_DAT_110c0d848;
  plVar7 = plVar4 + 3;
  *plVar7 = (long)&PTR_FUN_110c0f0f0;
  *(undefined1 *)(plVar4 + 4) = 0;
  plVar4[6] = 0;
  plVar4[7] = 0;
  plVar4[0xb] = lVar8;
  plVar4[0xc] = param_3;
  *(undefined1 *)(plVar4 + 0xd) = 0;
  *(undefined8 *)((long)plVar4 + 0x6c) = 0x800000000;
  plVar4[0xf] = lVar9;
  *(undefined1 *)(plVar4 + 0x10) = 0;
  *(undefined1 *)(plVar4 + 0x14) = 0;
  *(undefined1 *)(plVar4 + 0x15) = 1;
  plVar4[0x16] = 0;
  plVar4[0x17] = 0;
  plVar4[5] = (long)&PTR_FUN_110c0f188;
  plVar4[10] = (long)&PTR_FUN_110c0f1e0;
  plVar4[0x1b] = 0;
  plVar4[0x1a] = 0;
  plVar4[0x1d] = 0;
  plVar4[0x1c] = 0;
  plVar4[0x19] = 0;
  plVar4[0x18] = 0;
  do {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
    if (bVar3) {
      *plVar6 = *plVar6 + 1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  plVar1 = plVar4 + 2;
  do {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar3) {
      *plVar1 = *plVar1 + 1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  plVar4[8] = (long)plVar7;
  plVar4[9] = (long)plVar4;
  do {
    lVar8 = *plVar6;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
    if (bVar3) {
      *plVar6 = lVar8 + -1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (lVar8 == 0) {
    (**(code **)(*plVar4 + 0x10))(plVar4);
    __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
  }
  *(undefined4 *)((long)plVar4 + 0x6c) = *(undefined4 *)(param_2 + 0x54);
  lVar9 = *(long *)(param_2 + 0xa0);
  lVar8 = *(long *)(param_2 + 0x98);
  if (*(long *)(param_2 + 0xa0) != 0) {
    plVar6 = (long *)(*(long *)(param_2 + 0xa0) + 0x10);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar3) {
        *plVar6 = *plVar6 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  lVar5 = plVar4[0x17];
  plVar4[0x17] = lVar9;
  plVar4[0x16] = lVar8;
  if (lVar5 != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  plVar6 = *(long **)(param_2 + 0xb0);
  if (plVar6 == (long *)0x0) {
    plVar6 = (long *)0x0;
  }
  else {
    __ZNSt3__119__shared_weak_count4lockEv();
  }
  FUN_10a68a860();
  if (plVar6 != (long *)0x0) {
    plVar1 = plVar6 + 1;
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
      (**(code **)(*plVar6 + 0x10))(plVar6);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
    }
  }
  param_1[1] = plVar4;
  *param_1 = plVar7;
  return;
}



/* Entry: 10a693fac; end: 10a69422f;  */

void FUN_10a693fac(long param_1)

{
  long *plVar1;
  undefined **ppuVar2;
  char cVar3;
  bool bVar4;
  long *plVar5;
  long *plVar6;
  undefined ***pppuVar7;
  undefined ***pppuVar8;
  undefined **ppuVar9;
  code **ppcVar10;
  code **ppcVar11;
  undefined8 *extraout_x8;
  long lVar12;
  undefined *puVar13;
  long *plVar14;
  long lVar15;
  undefined **ppuVar16;
  code *pcStack_118;
  undefined **ppuStack_110;
  undefined ***pppuStack_108;
  long lStack_d8;
  code **ppcStack_d0;
  undefined ***pppuStack_c8;
  undefined1 *puStack_c0;
  code *pcStack_b8;
  undefined8 uStack_b0;
  long *plStack_a8;
  long lStack_a0;
  long *plStack_98;
  long *plStack_90;
  code *pcStack_88;
  undefined **ppuStack_80;
  long **pplStack_78;
  long lStack_70;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  *(undefined8 *)(param_1 + 0xb8) = 0;
  *(undefined8 *)(param_1 + 200) = *(undefined8 *)(param_1 + 0xc0);
  plVar5 = *(long **)(param_1 + 0xb0);
  if ((plVar5 == (long *)0x0) || (__ZNSt3__119__shared_weak_count4lockEv(), plVar5 == (long *)0x0))
  {
    plStack_90 = (long *)0x0;
  }
  else {
    plVar14 = *(long **)(param_1 + 0xa8);
    plVar6 = plVar5 + 1;
    do {
      lVar12 = *plVar6;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar4) {
        *plVar6 = lVar12 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar12 == 0) {
      (**(code **)(*plVar5 + 0x10))(plVar5);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
    }
    plStack_90 = plVar14;
    if (plVar14 != (long *)0x0) goto LAB_10a694188;
  }
  plVar5 = *(long **)(param_1 + 0xa0);
  if (plVar5 != (long *)0x0) {
    lVar12 = *(long *)(param_1 + 0x98);
    plVar6 = plVar5 + 2;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar4) {
        *plVar6 = *plVar6 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    plVar6 = plVar5;
    __ZNSt3__119__shared_weak_count4lockEv();
    plStack_98 = plVar6;
    if (plVar6 != (long *)0x0) {
      lStack_a0 = lVar12;
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
      plVar5 = plVar6;
      if (lVar12 != 0) {
        lVar15 = *(long *)(lVar12 + 0x158);
        if (lVar15 != lVar12 + 0x150) {
LAB_10a6940a0:
          if (*(long *)(lVar15 + 0x10) == 0) goto LAB_10a6940bc;
          plVar6 = (long *)(*(long *)(lVar15 + 0x10) + 0xb0);
          (**(code **)(*plVar6 + 0x18))(plVar6,0xc2c0ac5e4c065340);
          if (plVar6 == (long *)0x0) goto LAB_10a6940bc;
          plStack_90 = plVar6;
          FUN_10a2d1b5c(&uStack_b0);
          if (plStack_a8 != (long *)0x0) {
            plVar5 = plStack_a8 + 2;
            do {
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(plVar5,0x10);
              if (bVar4) {
                *plVar5 = *plVar5 + 1;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
          }
          lVar12 = *(long *)(param_1 + 0xb0);
          *(long **)(param_1 + 0xb0) = plStack_a8;
          *(undefined8 *)(param_1 + 0xa8) = uStack_b0;
          if (lVar12 != 0) {
            __ZNSt3__119__shared_weak_count14__release_weakEv();
          }
          plVar5 = plStack_98;
          if (plStack_a8 != (long *)0x0) {
            plVar6 = plStack_a8 + 1;
            do {
              lVar12 = *plVar6;
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(plVar6,0x10);
              if (bVar4) {
                *plVar6 = lVar12 + -1;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
            if (lVar12 == 0) {
              (**(code **)(*plStack_a8 + 0x10))(plStack_a8);
              __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_a8);
              plVar5 = plStack_98;
            }
          }
          goto joined_r0x00010a694154;
        }
LAB_10a6940c8:
        plStack_90 = (long *)0x0;
joined_r0x00010a694154:
        if (plVar5 == (long *)0x0) goto LAB_10a694188;
      }
      plVar6 = plVar5 + 1;
      do {
        lVar12 = *plVar6;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar6,0x10);
        if (bVar4) {
          *plVar6 = lVar12 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar12 != 0) goto LAB_10a694188;
      (**(code **)(*plVar5 + 0x10))(plVar5);
    }
    __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
  }
LAB_10a694188:
  pcStack_88 = FUN_10a6aa210;
  ppuStack_80 = &PTR_FUN_110c0d888;
  pplStack_78 = &plStack_90;
  ppcVar10 = &pcStack_88;
  lStack_70 = param_1;
  FUN_10a2f2000(*(long *)(*(long *)(*(long *)(param_1 + 0x60) + 0x830) + 0x18) + 1000,ppcVar10);
  pppuVar7 = &ppuStack_80;
  (*(code *)*ppuStack_80)();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010a05253c(&lStack_a0);
  pppuVar8 = pppuVar7;
  __Unwind_Resume();
  pcStack_b8 = FUN_10a694230;
  lStack_d8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcStack_118 = FUN_10a6aa39c;
  ppuStack_110 = &PTR_FUN_110c0d8a8;
  ppuVar9 = &PTR_DAT_110c0c9d0;
  ppcVar11 = &pcStack_118;
  pppuStack_108 = pppuVar8;
  ppcStack_d0 = &pcStack_88;
  pppuStack_c8 = pppuVar7;
  puStack_c0 = &stack0xfffffffffffffff0;
  FUN_10a65cb90(ppcVar10,&PTR_DAT_110c0c9d0,ppcVar11,0);
  pppuVar7 = &ppuStack_110;
  (*(code *)*ppuStack_110)();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_d8) {
    ___stack_chk_fail();
    (*(code *)*ppuStack_110)(&ppuStack_110);
    __Unwind_Resume();
    pppuVar8 = pppuVar7 + 0xc;
    if (ppcVar11 != (code **)0x0) {
      pppuVar8 = (undefined ***)(ppcVar11 + 0x16);
    }
    ppuVar16 = *pppuVar8;
    pppuVar8 = pppuVar7;
    func_0x00010a0fda30();
    plVar5 = (long *)0xf0;
    __Znwm();
    plVar6 = plVar5 + 1;
    plVar5[2] = 0;
    *plVar6 = 0;
    *plVar5 = (long)&PTR_DAT_110c0d8d0;
    plVar14 = plVar5 + 3;
    *plVar14 = (long)&PTR_FUN_110c0f200;
    *(undefined1 *)(plVar5 + 4) = 0;
    plVar5[6] = 0;
    plVar5[7] = 0;
    plVar5[0xb] = (long)pppuVar8;
    plVar5[0xc] = (long)ppuVar9;
    *(undefined1 *)(plVar5 + 0xd) = 0;
    *(undefined8 *)((long)plVar5 + 0x6c) = 0x800000000;
    plVar5[0xf] = (long)ppuVar16;
    *(undefined1 *)(plVar5 + 0x10) = 0;
    *(undefined1 *)(plVar5 + 0x14) = 0;
    *(undefined1 *)(plVar5 + 0x15) = 1;
    plVar5[0x16] = 0;
    plVar5[0x17] = 0;
    plVar5[5] = (long)&PTR_FUN_110c0f298;
    plVar5[10] = (long)&PTR_FUN_110c0f2f0;
    plVar5[0x1b] = 0;
    plVar5[0x1a] = 0;
    plVar5[0x1d] = 0;
    plVar5[0x1c] = 0;
    plVar5[0x19] = 0;
    plVar5[0x18] = 0;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar4) {
        *plVar6 = *plVar6 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    plVar1 = plVar5 + 2;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = *plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    plVar5[8] = (long)plVar14;
    plVar5[9] = (long)plVar5;
    do {
      lVar12 = *plVar6;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar4) {
        *plVar6 = lVar12 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar12 == 0) {
      (**(code **)(*plVar5 + 0x10))(plVar5);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
    }
    *(undefined4 *)((long)plVar5 + 0x6c) = *(undefined4 *)((long)pppuVar7 + 0x54);
    ppuVar16 = pppuVar7[0x14];
    ppuVar9 = pppuVar7[0x13];
    if (pppuVar7[0x14] != (undefined **)0x0) {
      ppuVar2 = pppuVar7[0x14] + 2;
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(ppuVar2,0x10);
        if (bVar4) {
          *ppuVar2 = *ppuVar2 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    lVar12 = plVar5[0x17];
    plVar5[0x17] = (long)ppuVar16;
    plVar5[0x16] = (long)ppuVar9;
    if (lVar12 != 0) {
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
    ppuVar9 = pppuVar7[0x16];
    if (ppuVar9 == (undefined **)0x0) {
      ppuVar9 = (undefined **)0x0;
    }
    else {
      __ZNSt3__119__shared_weak_count4lockEv();
    }
    FUN_10a68a860();
    if (ppuVar9 != (undefined **)0x0) {
      ppuVar16 = ppuVar9 + 1;
      do {
        puVar13 = *ppuVar16;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(ppuVar16,0x10);
        if (bVar4) {
          *ppuVar16 = puVar13 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (puVar13 == (undefined *)0x0) {
        (**(code **)(*ppuVar9 + 0x10))(ppuVar9);
        __ZNSt3__119__shared_weak_count14__release_weakEv(ppuVar9);
      }
    }
    extraout_x8[1] = plVar5;
    *extraout_x8 = plVar14;
    return;
  }
  return;
LAB_10a6940bc:
  lVar15 = *(long *)(lVar15 + 8);
  if (lVar15 == lVar12 + 0x150) goto LAB_10a6940c8;
  goto LAB_10a6940a0;
}



/* Entry: 10a694230; end: 10a6942e3;  */

void FUN_10a694230(undefined8 param_1,undefined8 param_2)

{
  long *plVar1;
  undefined **ppuVar2;
  char cVar3;
  bool bVar4;
  undefined ***pppuVar5;
  undefined ***pppuVar6;
  long *plVar7;
  undefined **ppuVar8;
  code **ppcVar9;
  undefined8 *extraout_x8;
  long *plVar10;
  long *plVar11;
  long lVar12;
  undefined *puVar13;
  undefined **ppuVar14;
  code *pcStack_68;
  undefined **ppuStack_60;
  undefined8 uStack_58;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcStack_68 = FUN_10a6aa39c;
  ppuStack_60 = &PTR_FUN_110c0d8a8;
  ppuVar8 = &PTR_DAT_110c0c9d0;
  ppcVar9 = &pcStack_68;
  uStack_58 = param_1;
  FUN_10a65cb90(param_2,&PTR_DAT_110c0c9d0,ppcVar9,0);
  pppuVar5 = &ppuStack_60;
  (*(code *)*ppuStack_60)();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_28) {
    ___stack_chk_fail();
    (*(code *)*ppuStack_60)(&ppuStack_60);
    __Unwind_Resume();
    pppuVar6 = pppuVar5 + 0xc;
    if (ppcVar9 != (code **)0x0) {
      pppuVar6 = (undefined ***)(ppcVar9 + 0x16);
    }
    ppuVar14 = *pppuVar6;
    pppuVar6 = pppuVar5;
    func_0x00010a0fda30();
    plVar7 = (long *)0xf0;
    __Znwm();
    plVar10 = plVar7 + 1;
    plVar7[2] = 0;
    *plVar10 = 0;
    *plVar7 = (long)&PTR_DAT_110c0d8d0;
    plVar11 = plVar7 + 3;
    *plVar11 = (long)&PTR_FUN_110c0f200;
    *(undefined1 *)(plVar7 + 4) = 0;
    plVar7[6] = 0;
    plVar7[7] = 0;
    plVar7[0xb] = (long)pppuVar6;
    plVar7[0xc] = (long)ppuVar8;
    *(undefined1 *)(plVar7 + 0xd) = 0;
    *(undefined8 *)((long)plVar7 + 0x6c) = 0x800000000;
    plVar7[0xf] = (long)ppuVar14;
    *(undefined1 *)(plVar7 + 0x10) = 0;
    *(undefined1 *)(plVar7 + 0x14) = 0;
    *(undefined1 *)(plVar7 + 0x15) = 1;
    plVar7[0x16] = 0;
    plVar7[0x17] = 0;
    plVar7[5] = (long)&PTR_FUN_110c0f298;
    plVar7[10] = (long)&PTR_FUN_110c0f2f0;
    plVar7[0x1b] = 0;
    plVar7[0x1a] = 0;
    plVar7[0x1d] = 0;
    plVar7[0x1c] = 0;
    plVar7[0x19] = 0;
    plVar7[0x18] = 0;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar4) {
        *plVar10 = *plVar10 + 1;
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
    plVar7[8] = (long)plVar11;
    plVar7[9] = (long)plVar7;
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
      (**(code **)(*plVar7 + 0x10))(plVar7);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
    }
    *(undefined4 *)((long)plVar7 + 0x6c) = *(undefined4 *)((long)pppuVar5 + 0x54);
    ppuVar14 = pppuVar5[0x14];
    ppuVar8 = pppuVar5[0x13];
    if (pppuVar5[0x14] != (undefined **)0x0) {
      ppuVar2 = pppuVar5[0x14] + 2;
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(ppuVar2,0x10);
        if (bVar4) {
          *ppuVar2 = *ppuVar2 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    lVar12 = plVar7[0x17];
    plVar7[0x17] = (long)ppuVar14;
    plVar7[0x16] = (long)ppuVar8;
    if (lVar12 != 0) {
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
    ppuVar8 = pppuVar5[0x16];
    if (ppuVar8 == (undefined **)0x0) {
      ppuVar8 = (undefined **)0x0;
    }
    else {
      __ZNSt3__119__shared_weak_count4lockEv();
    }
    FUN_10a68a860();
    if (ppuVar8 != (undefined **)0x0) {
      ppuVar14 = ppuVar8 + 1;
      do {
        puVar13 = *ppuVar14;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(ppuVar14,0x10);
        if (bVar4) {
          *ppuVar14 = puVar13 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (puVar13 == (undefined *)0x0) {
        (**(code **)(*ppuVar8 + 0x10))(ppuVar8);
        __ZNSt3__119__shared_weak_count14__release_weakEv(ppuVar8);
      }
    }
    extraout_x8[1] = plVar7;
    *extraout_x8 = plVar11;
    return;
  }
  return;
}



/* Entry: 10a6942e4; end: 10a6944f3;  */

void FUN_10a6942e4(undefined8 *param_1,long param_2,long param_3,long param_4)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  long *plVar6;
  long *plVar7;
  long lVar8;
  long lVar9;
  
  plVar4 = (long *)(param_2 + 0x60);
  if (param_4 != 0) {
    plVar4 = (long *)(param_4 + 0xb0);
  }
  lVar9 = *plVar4;
  lVar8 = param_2;
  func_0x00010a0fda30();
  plVar4 = (long *)0xf0;
  __Znwm();
  plVar6 = plVar4 + 1;
  plVar4[2] = 0;
  *plVar6 = 0;
  *plVar4 = (long)&PTR_DAT_110c0d8d0;
  plVar7 = plVar4 + 3;
  *plVar7 = (long)&PTR_FUN_110c0f200;
  *(undefined1 *)(plVar4 + 4) = 0;
  plVar4[6] = 0;
  plVar4[7] = 0;
  plVar4[0xb] = lVar8;
  plVar4[0xc] = param_3;
  *(undefined1 *)(plVar4 + 0xd) = 0;
  *(undefined8 *)((long)plVar4 + 0x6c) = 0x800000000;
  plVar4[0xf] = lVar9;
  *(undefined1 *)(plVar4 + 0x10) = 0;
  *(undefined1 *)(plVar4 + 0x14) = 0;
  *(undefined1 *)(plVar4 + 0x15) = 1;
  plVar4[0x16] = 0;
  plVar4[0x17] = 0;
  plVar4[5] = (long)&PTR_FUN_110c0f298;
  plVar4[10] = (long)&PTR_FUN_110c0f2f0;
  plVar4[0x1b] = 0;
  plVar4[0x1a] = 0;
  plVar4[0x1d] = 0;
  plVar4[0x1c] = 0;
  plVar4[0x19] = 0;
  plVar4[0x18] = 0;
  do {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
    if (bVar3) {
      *plVar6 = *plVar6 + 1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  plVar1 = plVar4 + 2;
  do {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar3) {
      *plVar1 = *plVar1 + 1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  plVar4[8] = (long)plVar7;
  plVar4[9] = (long)plVar4;
  do {
    lVar8 = *plVar6;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
    if (bVar3) {
      *plVar6 = lVar8 + -1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (lVar8 == 0) {
    (**(code **)(*plVar4 + 0x10))(plVar4);
    __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
  }
  *(undefined4 *)((long)plVar4 + 0x6c) = *(undefined4 *)(param_2 + 0x54);
  lVar9 = *(long *)(param_2 + 0xa0);
  lVar8 = *(long *)(param_2 + 0x98);
  if (*(long *)(param_2 + 0xa0) != 0) {
    plVar6 = (long *)(*(long *)(param_2 + 0xa0) + 0x10);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar3) {
        *plVar6 = *plVar6 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  lVar5 = plVar4[0x17];
  plVar4[0x17] = lVar9;
  plVar4[0x16] = lVar8;
  if (lVar5 != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  plVar6 = *(long **)(param_2 + 0xb0);
  if (plVar6 == (long *)0x0) {
    plVar6 = (long *)0x0;
  }
  else {
    __ZNSt3__119__shared_weak_count4lockEv();
  }
  FUN_10a68a860();
  if (plVar6 != (long *)0x0) {
    plVar1 = plVar6 + 1;
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
      (**(code **)(*plVar6 + 0x10))(plVar6);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
    }
  }
  param_1[1] = plVar4;
  *param_1 = plVar7;
  return;
}



/* Entry: 10a6944f4; end: 10a694777;  */

void FUN_10a6944f4(long param_1)

{
  long *plVar1;
  undefined **ppuVar2;
  char cVar3;
  bool bVar4;
  long *plVar5;
  long *plVar6;
  undefined ***pppuVar7;
  undefined ***pppuVar8;
  undefined **ppuVar9;
  code **ppcVar10;
  code **ppcVar11;
  undefined8 *extraout_x8;
  long lVar12;
  undefined *puVar13;
  long *plVar14;
  long lVar15;
  undefined **ppuVar16;
  code *pcStack_118;
  undefined **ppuStack_110;
  undefined ***pppuStack_108;
  long lStack_d8;
  code **ppcStack_d0;
  undefined ***pppuStack_c8;
  undefined1 *puStack_c0;
  code *pcStack_b8;
  undefined8 uStack_b0;
  long *plStack_a8;
  long lStack_a0;
  long *plStack_98;
  long *plStack_90;
  code *pcStack_88;
  undefined **ppuStack_80;
  long **pplStack_78;
  long lStack_70;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  *(undefined8 *)(param_1 + 0xb8) = 0;
  *(undefined8 *)(param_1 + 200) = *(undefined8 *)(param_1 + 0xc0);
  plVar5 = *(long **)(param_1 + 0xb0);
  if ((plVar5 == (long *)0x0) || (__ZNSt3__119__shared_weak_count4lockEv(), plVar5 == (long *)0x0))
  {
    plStack_90 = (long *)0x0;
  }
  else {
    plVar14 = *(long **)(param_1 + 0xa8);
    plVar6 = plVar5 + 1;
    do {
      lVar12 = *plVar6;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar4) {
        *plVar6 = lVar12 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar12 == 0) {
      (**(code **)(*plVar5 + 0x10))(plVar5);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
    }
    plStack_90 = plVar14;
    if (plVar14 != (long *)0x0) goto LAB_10a6946d0;
  }
  plVar5 = *(long **)(param_1 + 0xa0);
  if (plVar5 != (long *)0x0) {
    lVar12 = *(long *)(param_1 + 0x98);
    plVar6 = plVar5 + 2;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar4) {
        *plVar6 = *plVar6 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    plVar6 = plVar5;
    __ZNSt3__119__shared_weak_count4lockEv();
    plStack_98 = plVar6;
    if (plVar6 != (long *)0x0) {
      lStack_a0 = lVar12;
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
      plVar5 = plVar6;
      if (lVar12 != 0) {
        lVar15 = *(long *)(lVar12 + 0x158);
        if (lVar15 != lVar12 + 0x150) {
LAB_10a6945e8:
          if (*(long *)(lVar15 + 0x10) == 0) goto LAB_10a694604;
          plVar6 = (long *)(*(long *)(lVar15 + 0x10) + 0xb0);
          (**(code **)(*plVar6 + 0x18))(plVar6,0xc2c0ac5e4c065340);
          if (plVar6 == (long *)0x0) goto LAB_10a694604;
          plStack_90 = plVar6;
          FUN_10a2d1b5c(&uStack_b0);
          if (plStack_a8 != (long *)0x0) {
            plVar5 = plStack_a8 + 2;
            do {
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(plVar5,0x10);
              if (bVar4) {
                *plVar5 = *plVar5 + 1;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
          }
          lVar12 = *(long *)(param_1 + 0xb0);
          *(long **)(param_1 + 0xb0) = plStack_a8;
          *(undefined8 *)(param_1 + 0xa8) = uStack_b0;
          if (lVar12 != 0) {
            __ZNSt3__119__shared_weak_count14__release_weakEv();
          }
          plVar5 = plStack_98;
          if (plStack_a8 != (long *)0x0) {
            plVar6 = plStack_a8 + 1;
            do {
              lVar12 = *plVar6;
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(plVar6,0x10);
              if (bVar4) {
                *plVar6 = lVar12 + -1;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
            if (lVar12 == 0) {
              (**(code **)(*plStack_a8 + 0x10))(plStack_a8);
              __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_a8);
              plVar5 = plStack_98;
            }
          }
          goto joined_r0x00010a69469c;
        }
LAB_10a694610:
        plStack_90 = (long *)0x0;
joined_r0x00010a69469c:
        if (plVar5 == (long *)0x0) goto LAB_10a6946d0;
      }
      plVar6 = plVar5 + 1;
      do {
        lVar12 = *plVar6;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar6,0x10);
        if (bVar4) {
          *plVar6 = lVar12 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar12 != 0) goto LAB_10a6946d0;
      (**(code **)(*plVar5 + 0x10))(plVar5);
    }
    __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
  }
LAB_10a6946d0:
  pcStack_88 = FUN_10a6aa500;
  ppuStack_80 = &PTR_FUN_110c0d910;
  pplStack_78 = &plStack_90;
  ppcVar10 = &pcStack_88;
  lStack_70 = param_1;
  FUN_10a2f2000(*(long *)(*(long *)(*(long *)(param_1 + 0x60) + 0x830) + 0x18) + 1000,ppcVar10);
  pppuVar7 = &ppuStack_80;
  (*(code *)*ppuStack_80)();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010a05253c(&lStack_a0);
  pppuVar8 = pppuVar7;
  __Unwind_Resume();
  pcStack_b8 = FUN_10a694778;
  lStack_d8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcStack_118 = FUN_10a6aa690;
  ppuStack_110 = &PTR_FUN_110c0d930;
  ppuVar9 = &PTR_DAT_110c0c9d0;
  ppcVar11 = &pcStack_118;
  pppuStack_108 = pppuVar8;
  ppcStack_d0 = &pcStack_88;
  pppuStack_c8 = pppuVar7;
  puStack_c0 = &stack0xfffffffffffffff0;
  FUN_10a65cb90(ppcVar10,&PTR_DAT_110c0c9d0,ppcVar11,0);
  pppuVar7 = &ppuStack_110;
  (*(code *)*ppuStack_110)();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_d8) {
    ___stack_chk_fail();
    (*(code *)*ppuStack_110)(&ppuStack_110);
    __Unwind_Resume();
    pppuVar8 = pppuVar7 + 0xc;
    if (ppcVar11 != (code **)0x0) {
      pppuVar8 = (undefined ***)(ppcVar11 + 0x16);
    }
    ppuVar16 = *pppuVar8;
    pppuVar8 = pppuVar7;
    func_0x00010a0fda30();
    plVar5 = (long *)0xf0;
    __Znwm();
    plVar6 = plVar5 + 1;
    plVar5[2] = 0;
    *plVar6 = 0;
    *plVar5 = (long)&PTR_DAT_110c0d958;
    plVar14 = plVar5 + 3;
    *plVar14 = (long)&PTR_FUN_110c0f310;
    *(undefined1 *)(plVar5 + 4) = 0;
    plVar5[6] = 0;
    plVar5[7] = 0;
    plVar5[0xb] = (long)pppuVar8;
    plVar5[0xc] = (long)ppuVar9;
    *(undefined1 *)(plVar5 + 0xd) = 0;
    *(undefined8 *)((long)plVar5 + 0x6c) = 0x800000000;
    plVar5[0xf] = (long)ppuVar16;
    *(undefined1 *)(plVar5 + 0x10) = 0;
    *(undefined1 *)(plVar5 + 0x14) = 0;
    *(undefined1 *)(plVar5 + 0x15) = 1;
    plVar5[0x16] = 0;
    plVar5[0x17] = 0;
    plVar5[5] = (long)&PTR_FUN_110c0f3a8;
    plVar5[10] = (long)&PTR_FUN_110c0f400;
    plVar5[0x1b] = 0;
    plVar5[0x1a] = 0;
    plVar5[0x1d] = 0;
    plVar5[0x1c] = 0;
    plVar5[0x19] = 0;
    plVar5[0x18] = 0;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar4) {
        *plVar6 = *plVar6 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    plVar1 = plVar5 + 2;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = *plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    plVar5[8] = (long)plVar14;
    plVar5[9] = (long)plVar5;
    do {
      lVar12 = *plVar6;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar4) {
        *plVar6 = lVar12 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar12 == 0) {
      (**(code **)(*plVar5 + 0x10))(plVar5);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
    }
    *(undefined4 *)((long)plVar5 + 0x6c) = *(undefined4 *)((long)pppuVar7 + 0x54);
    ppuVar16 = pppuVar7[0x14];
    ppuVar9 = pppuVar7[0x13];
    if (pppuVar7[0x14] != (undefined **)0x0) {
      ppuVar2 = pppuVar7[0x14] + 2;
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(ppuVar2,0x10);
        if (bVar4) {
          *ppuVar2 = *ppuVar2 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    lVar12 = plVar5[0x17];
    plVar5[0x17] = (long)ppuVar16;
    plVar5[0x16] = (long)ppuVar9;
    if (lVar12 != 0) {
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
    ppuVar9 = pppuVar7[0x16];
    if (ppuVar9 == (undefined **)0x0) {
      ppuVar9 = (undefined **)0x0;
    }
    else {
      __ZNSt3__119__shared_weak_count4lockEv();
    }
    FUN_10a68a860();
    if (ppuVar9 != (undefined **)0x0) {
      ppuVar16 = ppuVar9 + 1;
      do {
        puVar13 = *ppuVar16;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(ppuVar16,0x10);
        if (bVar4) {
          *ppuVar16 = puVar13 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (puVar13 == (undefined *)0x0) {
        (**(code **)(*ppuVar9 + 0x10))(ppuVar9);
        __ZNSt3__119__shared_weak_count14__release_weakEv(ppuVar9);
      }
    }
    extraout_x8[1] = plVar5;
    *extraout_x8 = plVar14;
    return;
  }
  return;
LAB_10a694604:
  lVar15 = *(long *)(lVar15 + 8);
  if (lVar15 == lVar12 + 0x150) goto LAB_10a694610;
  goto LAB_10a6945e8;
}



/* Entry: 10a694778; end: 10a69482b;  */

void FUN_10a694778(undefined8 param_1,undefined8 param_2)

{
  long *plVar1;
  undefined **ppuVar2;
  char cVar3;
  bool bVar4;
  undefined ***pppuVar5;
  undefined ***pppuVar6;
  long *plVar7;
  undefined **ppuVar8;
  code **ppcVar9;
  undefined8 *extraout_x8;
  long *plVar10;
  long *plVar11;
  long lVar12;
  undefined *puVar13;
  undefined **ppuVar14;
  code *pcStack_68;
  undefined **ppuStack_60;
  undefined8 uStack_58;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcStack_68 = FUN_10a6aa690;
  ppuStack_60 = &PTR_FUN_110c0d930;
  ppuVar8 = &PTR_DAT_110c0c9d0;
  ppcVar9 = &pcStack_68;
  uStack_58 = param_1;
  FUN_10a65cb90(param_2,&PTR_DAT_110c0c9d0,ppcVar9,0);
  pppuVar5 = &ppuStack_60;
  (*(code *)*ppuStack_60)();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_28) {
    ___stack_chk_fail();
    (*(code *)*ppuStack_60)(&ppuStack_60);
    __Unwind_Resume();
    pppuVar6 = pppuVar5 + 0xc;
    if (ppcVar9 != (code **)0x0) {
      pppuVar6 = (undefined ***)(ppcVar9 + 0x16);
    }
    ppuVar14 = *pppuVar6;
    pppuVar6 = pppuVar5;
    func_0x00010a0fda30();
    plVar7 = (long *)0xf0;
    __Znwm();
    plVar10 = plVar7 + 1;
    plVar7[2] = 0;
    *plVar10 = 0;
    *plVar7 = (long)&PTR_DAT_110c0d958;
    plVar11 = plVar7 + 3;
    *plVar11 = (long)&PTR_FUN_110c0f310;
    *(undefined1 *)(plVar7 + 4) = 0;
    plVar7[6] = 0;
    plVar7[7] = 0;
    plVar7[0xb] = (long)pppuVar6;
    plVar7[0xc] = (long)ppuVar8;
    *(undefined1 *)(plVar7 + 0xd) = 0;
    *(undefined8 *)((long)plVar7 + 0x6c) = 0x800000000;
    plVar7[0xf] = (long)ppuVar14;
    *(undefined1 *)(plVar7 + 0x10) = 0;
    *(undefined1 *)(plVar7 + 0x14) = 0;
    *(undefined1 *)(plVar7 + 0x15) = 1;
    plVar7[0x16] = 0;
    plVar7[0x17] = 0;
    plVar7[5] = (long)&PTR_FUN_110c0f3a8;
    plVar7[10] = (long)&PTR_FUN_110c0f400;
    plVar7[0x1b] = 0;
    plVar7[0x1a] = 0;
    plVar7[0x1d] = 0;
    plVar7[0x1c] = 0;
    plVar7[0x19] = 0;
    plVar7[0x18] = 0;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar4) {
        *plVar10 = *plVar10 + 1;
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
    plVar7[8] = (long)plVar11;
    plVar7[9] = (long)plVar7;
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
      (**(code **)(*plVar7 + 0x10))(plVar7);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
    }
    *(undefined4 *)((long)plVar7 + 0x6c) = *(undefined4 *)((long)pppuVar5 + 0x54);
    ppuVar14 = pppuVar5[0x14];
    ppuVar8 = pppuVar5[0x13];
    if (pppuVar5[0x14] != (undefined **)0x0) {
      ppuVar2 = pppuVar5[0x14] + 2;
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(ppuVar2,0x10);
        if (bVar4) {
          *ppuVar2 = *ppuVar2 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    lVar12 = plVar7[0x17];
    plVar7[0x17] = (long)ppuVar14;
    plVar7[0x16] = (long)ppuVar8;
    if (lVar12 != 0) {
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
    ppuVar8 = pppuVar5[0x16];
    if (ppuVar8 == (undefined **)0x0) {
      ppuVar8 = (undefined **)0x0;
    }
    else {
      __ZNSt3__119__shared_weak_count4lockEv();
    }
    FUN_10a68a860();
    if (ppuVar8 != (undefined **)0x0) {
      ppuVar14 = ppuVar8 + 1;
      do {
        puVar13 = *ppuVar14;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(ppuVar14,0x10);
        if (bVar4) {
          *ppuVar14 = puVar13 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (puVar13 == (undefined *)0x0) {
        (**(code **)(*ppuVar8 + 0x10))(ppuVar8);
        __ZNSt3__119__shared_weak_count14__release_weakEv(ppuVar8);
      }
    }
    extraout_x8[1] = plVar7;
    *extraout_x8 = plVar11;
    return;
  }
  return;
}



/* Entry: 10a69482c; end: 10a694a3b;  */

void FUN_10a69482c(undefined8 *param_1,long param_2,long param_3,long param_4)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  long *plVar6;
  long *plVar7;
  long lVar8;
  long lVar9;
  
  plVar4 = (long *)(param_2 + 0x60);
  if (param_4 != 0) {
    plVar4 = (long *)(param_4 + 0xb0);
  }
  lVar9 = *plVar4;
  lVar8 = param_2;
  func_0x00010a0fda30();
  plVar4 = (long *)0xf0;
  __Znwm();
  plVar6 = plVar4 + 1;
  plVar4[2] = 0;
  *plVar6 = 0;
  *plVar4 = (long)&PTR_DAT_110c0d958;
  plVar7 = plVar4 + 3;
  *plVar7 = (long)&PTR_FUN_110c0f310;
  *(undefined1 *)(plVar4 + 4) = 0;
  plVar4[6] = 0;
  plVar4[7] = 0;
  plVar4[0xb] = lVar8;
  plVar4[0xc] = param_3;
  *(undefined1 *)(plVar4 + 0xd) = 0;
  *(undefined8 *)((long)plVar4 + 0x6c) = 0x800000000;
  plVar4[0xf] = lVar9;
  *(undefined1 *)(plVar4 + 0x10) = 0;
  *(undefined1 *)(plVar4 + 0x14) = 0;
  *(undefined1 *)(plVar4 + 0x15) = 1;
  plVar4[0x16] = 0;
  plVar4[0x17] = 0;
  plVar4[5] = (long)&PTR_FUN_110c0f3a8;
  plVar4[10] = (long)&PTR_FUN_110c0f400;
  plVar4[0x1b] = 0;
  plVar4[0x1a] = 0;
  plVar4[0x1d] = 0;
  plVar4[0x1c] = 0;
  plVar4[0x19] = 0;
  plVar4[0x18] = 0;
  do {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
    if (bVar3) {
      *plVar6 = *plVar6 + 1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  plVar1 = plVar4 + 2;
  do {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar3) {
      *plVar1 = *plVar1 + 1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  plVar4[8] = (long)plVar7;
  plVar4[9] = (long)plVar4;
  do {
    lVar8 = *plVar6;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
    if (bVar3) {
      *plVar6 = lVar8 + -1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (lVar8 == 0) {
    (**(code **)(*plVar4 + 0x10))(plVar4);
    __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
  }
  *(undefined4 *)((long)plVar4 + 0x6c) = *(undefined4 *)(param_2 + 0x54);
  lVar9 = *(long *)(param_2 + 0xa0);
  lVar8 = *(long *)(param_2 + 0x98);
  if (*(long *)(param_2 + 0xa0) != 0) {
    plVar6 = (long *)(*(long *)(param_2 + 0xa0) + 0x10);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar3) {
        *plVar6 = *plVar6 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  lVar5 = plVar4[0x17];
  plVar4[0x17] = lVar9;
  plVar4[0x16] = lVar8;
  if (lVar5 != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  plVar6 = *(long **)(param_2 + 0xb0);
  if (plVar6 == (long *)0x0) {
    plVar6 = (long *)0x0;
  }
  else {
    __ZNSt3__119__shared_weak_count4lockEv();
  }
  FUN_10a68a860();
  if (plVar6 != (long *)0x0) {
    plVar1 = plVar6 + 1;
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
      (**(code **)(*plVar6 + 0x10))(plVar6);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
    }
  }
  param_1[1] = plVar4;
  *param_1 = plVar7;
  return;
}



/* Entry: 10a694a3c; end: 10a694cbf;  */

void FUN_10a694a3c(long param_1)

{
  long *plVar1;
  undefined **ppuVar2;
  char cVar3;
  bool bVar4;
  long *plVar5;
  long *plVar6;
  undefined ***pppuVar7;
  undefined ***pppuVar8;
  undefined **ppuVar9;
  code **ppcVar10;
  code **ppcVar11;
  undefined8 *extraout_x8;
  long lVar12;
  undefined *puVar13;
  long *plVar14;
  long lVar15;
  undefined **ppuVar16;
  code *pcStack_118;
  undefined **ppuStack_110;
  undefined ***pppuStack_108;
  long lStack_d8;
  code **ppcStack_d0;
  undefined ***pppuStack_c8;
  undefined1 *puStack_c0;
  code *pcStack_b8;
  undefined8 uStack_b0;
  long *plStack_a8;
  long lStack_a0;
  long *plStack_98;
  long *plStack_90;
  code *pcStack_88;
  undefined **ppuStack_80;
  long **pplStack_78;
  long lStack_70;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  *(undefined8 *)(param_1 + 0xb8) = 0;
  *(undefined8 *)(param_1 + 200) = *(undefined8 *)(param_1 + 0xc0);
  plVar5 = *(long **)(param_1 + 0xb0);
  if ((plVar5 == (long *)0x0) || (__ZNSt3__119__shared_weak_count4lockEv(), plVar5 == (long *)0x0))
  {
    plStack_90 = (long *)0x0;
  }
  else {
    plVar14 = *(long **)(param_1 + 0xa8);
    plVar6 = plVar5 + 1;
    do {
      lVar12 = *plVar6;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar4) {
        *plVar6 = lVar12 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar12 == 0) {
      (**(code **)(*plVar5 + 0x10))(plVar5);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
    }
    plStack_90 = plVar14;
    if (plVar14 != (long *)0x0) goto LAB_10a694c18;
  }
  plVar5 = *(long **)(param_1 + 0xa0);
  if (plVar5 != (long *)0x0) {
    lVar12 = *(long *)(param_1 + 0x98);
    plVar6 = plVar5 + 2;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar4) {
        *plVar6 = *plVar6 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    plVar6 = plVar5;
    __ZNSt3__119__shared_weak_count4lockEv();
    plStack_98 = plVar6;
    if (plVar6 != (long *)0x0) {
      lStack_a0 = lVar12;
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
      plVar5 = plVar6;
      if (lVar12 != 0) {
        lVar15 = *(long *)(lVar12 + 0x158);
        if (lVar15 != lVar12 + 0x150) {
LAB_10a694b30:
          if (*(long *)(lVar15 + 0x10) == 0) goto LAB_10a694b4c;
          plVar6 = (long *)(*(long *)(lVar15 + 0x10) + 0xb0);
          (**(code **)(*plVar6 + 0x18))(plVar6,0xc2c0ac5e4c065340);
          if (plVar6 == (long *)0x0) goto LAB_10a694b4c;
          plStack_90 = plVar6;
          FUN_10a2d1b5c(&uStack_b0);
          if (plStack_a8 != (long *)0x0) {
            plVar5 = plStack_a8 + 2;
            do {
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(plVar5,0x10);
              if (bVar4) {
                *plVar5 = *plVar5 + 1;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
          }
          lVar12 = *(long *)(param_1 + 0xb0);
          *(long **)(param_1 + 0xb0) = plStack_a8;
          *(undefined8 *)(param_1 + 0xa8) = uStack_b0;
          if (lVar12 != 0) {
            __ZNSt3__119__shared_weak_count14__release_weakEv();
          }
          plVar5 = plStack_98;
          if (plStack_a8 != (long *)0x0) {
            plVar6 = plStack_a8 + 1;
            do {
              lVar12 = *plVar6;
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(plVar6,0x10);
              if (bVar4) {
                *plVar6 = lVar12 + -1;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
            if (lVar12 == 0) {
              (**(code **)(*plStack_a8 + 0x10))(plStack_a8);
              __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_a8);
              plVar5 = plStack_98;
            }
          }
          goto joined_r0x00010a694be4;
        }
LAB_10a694b58:
        plStack_90 = (long *)0x0;
joined_r0x00010a694be4:
        if (plVar5 == (long *)0x0) goto LAB_10a694c18;
      }
      plVar6 = plVar5 + 1;
      do {
        lVar12 = *plVar6;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar6,0x10);
        if (bVar4) {
          *plVar6 = lVar12 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar12 != 0) goto LAB_10a694c18;
      (**(code **)(*plVar5 + 0x10))(plVar5);
    }
    __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
  }
LAB_10a694c18:
  pcStack_88 = FUN_10a6aa7f4;
  ppuStack_80 = &PTR_FUN_110c0d998;
  pplStack_78 = &plStack_90;
  ppcVar10 = &pcStack_88;
  lStack_70 = param_1;
  FUN_10a2f2000(*(long *)(*(long *)(*(long *)(param_1 + 0x60) + 0x830) + 0x18) + 1000,ppcVar10);
  pppuVar7 = &ppuStack_80;
  (*(code *)*ppuStack_80)();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010a05253c(&lStack_a0);
  pppuVar8 = pppuVar7;
  __Unwind_Resume();
  pcStack_b8 = FUN_10a694cc0;
  lStack_d8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcStack_118 = FUN_10a6aa988;
  ppuStack_110 = &PTR_FUN_110c0d9b8;
  ppuVar9 = &PTR_DAT_110c0c9d0;
  ppcVar11 = &pcStack_118;
  pppuStack_108 = pppuVar8;
  ppcStack_d0 = &pcStack_88;
  pppuStack_c8 = pppuVar7;
  puStack_c0 = &stack0xfffffffffffffff0;
  FUN_10a65cb90(ppcVar10,&PTR_DAT_110c0c9d0,ppcVar11,0);
  pppuVar7 = &ppuStack_110;
  (*(code *)*ppuStack_110)();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_d8) {
    ___stack_chk_fail();
    (*(code *)*ppuStack_110)(&ppuStack_110);
    __Unwind_Resume();
    pppuVar8 = pppuVar7 + 0xc;
    if (ppcVar11 != (code **)0x0) {
      pppuVar8 = (undefined ***)(ppcVar11 + 0x16);
    }
    ppuVar16 = *pppuVar8;
    pppuVar8 = pppuVar7;
    func_0x00010a0fda30();
    plVar5 = (long *)0xd8;
    __Znwm();
    plVar6 = plVar5 + 1;
    plVar5[2] = 0;
    *plVar6 = 0;
    *plVar5 = (long)&PTR_DAT_110c0d9e0;
    plVar14 = plVar5 + 3;
    *plVar14 = (long)&PTR_FUN_110c0edc0;
    *(undefined1 *)(plVar5 + 4) = 0;
    plVar5[6] = 0;
    plVar5[7] = 0;
    plVar5[0xb] = (long)pppuVar8;
    plVar5[0xc] = (long)ppuVar9;
    *(undefined1 *)(plVar5 + 0xd) = 0;
    *(undefined8 *)((long)plVar5 + 0x6c) = 0x800000000;
    plVar5[0xf] = (long)ppuVar16;
    *(undefined1 *)(plVar5 + 0x10) = 0;
    *(undefined1 *)(plVar5 + 0x14) = 0;
    *(undefined1 *)(plVar5 + 0x15) = 1;
    plVar5[0x16] = 0;
    plVar5[0x17] = 0;
    plVar5[5] = (long)&PTR_FUN_110c0ee58;
    plVar5[10] = (long)&PTR_FUN_110c0eeb0;
    plVar5[0x18] = 0;
    plVar5[0x19] = 0;
    plVar5[0x1a] = 0;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar4) {
        *plVar6 = *plVar6 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    plVar1 = plVar5 + 2;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = *plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    plVar5[8] = (long)plVar14;
    plVar5[9] = (long)plVar5;
    do {
      lVar12 = *plVar6;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar4) {
        *plVar6 = lVar12 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar12 == 0) {
      (**(code **)(*plVar5 + 0x10))(plVar5);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
    }
    *(undefined4 *)((long)plVar5 + 0x6c) = *(undefined4 *)((long)pppuVar7 + 0x54);
    ppuVar16 = pppuVar7[0x14];
    ppuVar9 = pppuVar7[0x13];
    if (pppuVar7[0x14] != (undefined **)0x0) {
      ppuVar2 = pppuVar7[0x14] + 2;
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(ppuVar2,0x10);
        if (bVar4) {
          *ppuVar2 = *ppuVar2 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    lVar12 = plVar5[0x17];
    plVar5[0x17] = (long)ppuVar16;
    plVar5[0x16] = (long)ppuVar9;
    if (lVar12 != 0) {
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
    ppuVar9 = pppuVar7[0x16];
    if (ppuVar9 == (undefined **)0x0) {
      ppuVar9 = (undefined **)0x0;
    }
    else {
      __ZNSt3__119__shared_weak_count4lockEv();
    }
    FUN_10a68a860();
    if (ppuVar9 != (undefined **)0x0) {
      ppuVar16 = ppuVar9 + 1;
      do {
        puVar13 = *ppuVar16;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(ppuVar16,0x10);
        if (bVar4) {
          *ppuVar16 = puVar13 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (puVar13 == (undefined *)0x0) {
        (**(code **)(*ppuVar9 + 0x10))(ppuVar9);
        __ZNSt3__119__shared_weak_count14__release_weakEv(ppuVar9);
      }
    }
    extraout_x8[1] = plVar5;
    *extraout_x8 = plVar14;
    return;
  }
  return;
LAB_10a694b4c:
  lVar15 = *(long *)(lVar15 + 8);
  if (lVar15 == lVar12 + 0x150) goto LAB_10a694b58;
  goto LAB_10a694b30;
}



/* Entry: 10a694cc0; end: 10a694d73;  */

void FUN_10a694cc0(undefined8 param_1,undefined8 param_2)

{
  long *plVar1;
  undefined **ppuVar2;
  char cVar3;
  bool bVar4;
  undefined ***pppuVar5;
  undefined ***pppuVar6;
  long *plVar7;
  undefined **ppuVar8;
  code **ppcVar9;
  undefined8 *extraout_x8;
  long *plVar10;
  long *plVar11;
  long lVar12;
  undefined *puVar13;
  undefined **ppuVar14;
  code *pcStack_68;
  undefined **ppuStack_60;
  undefined8 uStack_58;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcStack_68 = FUN_10a6aa988;
  ppuStack_60 = &PTR_FUN_110c0d9b8;
  ppuVar8 = &PTR_DAT_110c0c9d0;
  ppcVar9 = &pcStack_68;
  uStack_58 = param_1;
  FUN_10a65cb90(param_2,&PTR_DAT_110c0c9d0,ppcVar9,0);
  pppuVar5 = &ppuStack_60;
  (*(code *)*ppuStack_60)();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_28) {
    ___stack_chk_fail();
    (*(code *)*ppuStack_60)(&ppuStack_60);
    __Unwind_Resume();
    pppuVar6 = pppuVar5 + 0xc;
    if (ppcVar9 != (code **)0x0) {
      pppuVar6 = (undefined ***)(ppcVar9 + 0x16);
    }
    ppuVar14 = *pppuVar6;
    pppuVar6 = pppuVar5;
    func_0x00010a0fda30();
    plVar7 = (long *)0xd8;
    __Znwm();
    plVar10 = plVar7 + 1;
    plVar7[2] = 0;
    *plVar10 = 0;
    *plVar7 = (long)&PTR_DAT_110c0d9e0;
    plVar11 = plVar7 + 3;
    *plVar11 = (long)&PTR_FUN_110c0edc0;
    *(undefined1 *)(plVar7 + 4) = 0;
    plVar7[6] = 0;
    plVar7[7] = 0;
    plVar7[0xb] = (long)pppuVar6;
    plVar7[0xc] = (long)ppuVar8;
    *(undefined1 *)(plVar7 + 0xd) = 0;
    *(undefined8 *)((long)plVar7 + 0x6c) = 0x800000000;
    plVar7[0xf] = (long)ppuVar14;
    *(undefined1 *)(plVar7 + 0x10) = 0;
    *(undefined1 *)(plVar7 + 0x14) = 0;
    *(undefined1 *)(plVar7 + 0x15) = 1;
    plVar7[0x16] = 0;
    plVar7[0x17] = 0;
    plVar7[5] = (long)&PTR_FUN_110c0ee58;
    plVar7[10] = (long)&PTR_FUN_110c0eeb0;
    plVar7[0x18] = 0;
    plVar7[0x19] = 0;
    plVar7[0x1a] = 0;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar4) {
        *plVar10 = *plVar10 + 1;
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
    plVar7[8] = (long)plVar11;
    plVar7[9] = (long)plVar7;
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
      (**(code **)(*plVar7 + 0x10))(plVar7);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
    }
    *(undefined4 *)((long)plVar7 + 0x6c) = *(undefined4 *)((long)pppuVar5 + 0x54);
    ppuVar14 = pppuVar5[0x14];
    ppuVar8 = pppuVar5[0x13];
    if (pppuVar5[0x14] != (undefined **)0x0) {
      ppuVar2 = pppuVar5[0x14] + 2;
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(ppuVar2,0x10);
        if (bVar4) {
          *ppuVar2 = *ppuVar2 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    lVar12 = plVar7[0x17];
    plVar7[0x17] = (long)ppuVar14;
    plVar7[0x16] = (long)ppuVar8;
    if (lVar12 != 0) {
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
    ppuVar8 = pppuVar5[0x16];
    if (ppuVar8 == (undefined **)0x0) {
      ppuVar8 = (undefined **)0x0;
    }
    else {
      __ZNSt3__119__shared_weak_count4lockEv();
    }
    FUN_10a68a860();
    if (ppuVar8 != (undefined **)0x0) {
      ppuVar14 = ppuVar8 + 1;
      do {
        puVar13 = *ppuVar14;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(ppuVar14,0x10);
        if (bVar4) {
          *ppuVar14 = puVar13 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (puVar13 == (undefined *)0x0) {
        (**(code **)(*ppuVar8 + 0x10))(ppuVar8);
        __ZNSt3__119__shared_weak_count14__release_weakEv(ppuVar8);
      }
    }
    extraout_x8[1] = plVar7;
    *extraout_x8 = plVar11;
    return;
  }
  return;
}



/* Entry: 10a694d74; end: 10a694f7f;  */

void FUN_10a694d74(undefined8 *param_1,long param_2,long param_3,long param_4)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  long *plVar6;
  long *plVar7;
  long lVar8;
  long lVar9;
  
  plVar4 = (long *)(param_2 + 0x60);
  if (param_4 != 0) {
    plVar4 = (long *)(param_4 + 0xb0);
  }
  lVar9 = *plVar4;
  lVar8 = param_2;
  func_0x00010a0fda30();
  plVar4 = (long *)0xd8;
  __Znwm();
  plVar6 = plVar4 + 1;
  plVar4[2] = 0;
  *plVar6 = 0;
  *plVar4 = (long)&PTR_DAT_110c0d9e0;
  plVar7 = plVar4 + 3;
  *plVar7 = (long)&PTR_FUN_110c0edc0;
  *(undefined1 *)(plVar4 + 4) = 0;
  plVar4[6] = 0;
  plVar4[7] = 0;
  plVar4[0xb] = lVar8;
  plVar4[0xc] = param_3;
  *(undefined1 *)(plVar4 + 0xd) = 0;
  *(undefined8 *)((long)plVar4 + 0x6c) = 0x800000000;
  plVar4[0xf] = lVar9;
  *(undefined1 *)(plVar4 + 0x10) = 0;
  *(undefined1 *)(plVar4 + 0x14) = 0;
  *(undefined1 *)(plVar4 + 0x15) = 1;
  plVar4[0x16] = 0;
  plVar4[0x17] = 0;
  plVar4[5] = (long)&PTR_FUN_110c0ee58;
  plVar4[10] = (long)&PTR_FUN_110c0eeb0;
  plVar4[0x18] = 0;
  plVar4[0x19] = 0;
  plVar4[0x1a] = 0;
  do {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
    if (bVar3) {
      *plVar6 = *plVar6 + 1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  plVar1 = plVar4 + 2;
  do {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar3) {
      *plVar1 = *plVar1 + 1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  plVar4[8] = (long)plVar7;
  plVar4[9] = (long)plVar4;
  do {
    lVar8 = *plVar6;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
    if (bVar3) {
      *plVar6 = lVar8 + -1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (lVar8 == 0) {
    (**(code **)(*plVar4 + 0x10))(plVar4);
    __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
  }
  *(undefined4 *)((long)plVar4 + 0x6c) = *(undefined4 *)(param_2 + 0x54);
  lVar9 = *(long *)(param_2 + 0xa0);
  lVar8 = *(long *)(param_2 + 0x98);
  if (*(long *)(param_2 + 0xa0) != 0) {
    plVar6 = (long *)(*(long *)(param_2 + 0xa0) + 0x10);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar3) {
        *plVar6 = *plVar6 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  lVar5 = plVar4[0x17];
  plVar4[0x17] = lVar9;
  plVar4[0x16] = lVar8;
  if (lVar5 != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  plVar6 = *(long **)(param_2 + 0xb0);
  if (plVar6 == (long *)0x0) {
    plVar6 = (long *)0x0;
  }
  else {
    __ZNSt3__119__shared_weak_count4lockEv();
  }
  FUN_10a68a860();
  if (plVar6 != (long *)0x0) {
    plVar1 = plVar6 + 1;
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
      (**(code **)(*plVar6 + 0x10))(plVar6);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
    }
  }
  param_1[1] = plVar4;
  *param_1 = plVar7;
  return;
}



/* Entry: 10a694f80; end: 10a69522b;  */

void FUN_10a694f80(undefined ***param_1,code **param_2)

{
  undefined ***pppuVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  undefined ***pppuVar5;
  undefined ***pppuVar6;
  long *plVar7;
  undefined8 *extraout_x8;
  long *plVar8;
  undefined **ppuVar9;
  long *plVar10;
  long lVar11;
  undefined *puVar12;
  undefined **ppuVar13;
  code **ppcVar14;
  code **ppcVar15;
  undefined **ppuVar16;
  code *pcStack_118;
  undefined **ppuStack_110;
  undefined ***pppuStack_108;
  long lStack_d8;
  code **ppcStack_d0;
  undefined ***pppuStack_c8;
  undefined1 *puStack_c0;
  code *pcStack_b8;
  undefined **ppuStack_b0;
  undefined ***pppuStack_a8;
  undefined **ppuStack_98;
  undefined ***pppuStack_90;
  code *pcStack_88;
  undefined **ppuStack_80;
  undefined ***pppuStack_78;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pppuVar5 = (undefined ***)param_1[0x16];
  if ((pppuVar5 == (undefined ***)0x0) ||
     (__ZNSt3__119__shared_weak_count4lockEv(), pppuVar5 == (undefined ***)0x0)) {
LAB_10a695000:
    pppuVar5 = (undefined ***)param_1[0x14];
    if (pppuVar5 != (undefined ***)0x0) {
      ppuVar9 = param_1[0x13];
      pppuVar6 = pppuVar5 + 2;
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(pppuVar6,0x10);
        if (bVar4) {
          *pppuVar6 = (undefined **)((long)*pppuVar6 + 1);
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      pppuVar6 = pppuVar5;
      __ZNSt3__119__shared_weak_count4lockEv();
      pppuStack_90 = pppuVar6;
      if (pppuVar6 != (undefined ***)0x0) {
        ppuStack_98 = ppuVar9;
        __ZNSt3__119__shared_weak_count14__release_weakEv();
        if (ppuVar9 != (undefined **)0x0) {
          ppuVar16 = (undefined **)ppuVar9[0x2b];
          if (ppuVar16 != ppuVar9 + 0x2a) {
LAB_10a695064:
            if (ppuVar16[2] == (undefined *)0x0) goto LAB_10a695080;
            ppuVar13 = (undefined **)(ppuVar16[2] + 0xb0);
            param_2 = (code **)0xc2c0ac5e4c065340;
            (**(code **)(*ppuVar13 + 0x18))(ppuVar13,0xc2c0ac5e4c065340);
            if (ppuVar13 == (undefined **)0x0) goto LAB_10a695080;
            FUN_10a2d1b5c(&ppuStack_b0);
            if (pppuStack_a8 != (undefined ***)0x0) {
              pppuVar5 = pppuStack_a8 + 2;
              do {
                cVar3 = '\x01';
                bVar4 = (bool)ExclusiveMonitorPass(pppuVar5,0x10);
                if (bVar4) {
                  *pppuVar5 = (undefined **)((long)*pppuVar5 + 1);
                  cVar3 = ExclusiveMonitorsStatus();
                }
              } while (cVar3 != '\0');
            }
            pppuVar5 = (undefined ***)param_1[0x16];
            param_1[0x16] = (undefined **)pppuStack_a8;
            param_1[0x15] = ppuStack_b0;
            if (pppuVar5 != (undefined ***)0x0) {
              __ZNSt3__119__shared_weak_count14__release_weakEv();
            }
            pppuVar6 = pppuStack_90;
            if (pppuStack_a8 != (undefined ***)0x0) {
              pppuVar1 = pppuStack_a8 + 1;
              do {
                ppuVar9 = *pppuVar1;
                cVar3 = '\x01';
                bVar4 = (bool)ExclusiveMonitorPass(pppuVar1,0x10);
                if (bVar4) {
                  *pppuVar1 = (undefined **)((long)ppuVar9 + -1);
                  cVar3 = ExclusiveMonitorsStatus();
                }
              } while (cVar3 != '\0');
              if (ppuVar9 == (undefined **)0x0) {
                (*(code *)(*pppuStack_a8)[2])(pppuStack_a8);
                __ZNSt3__119__shared_weak_count14__release_weakEv();
                pppuVar6 = pppuStack_90;
                pppuVar5 = pppuStack_a8;
              }
            }
            goto joined_r0x00010a695090;
          }
        }
        ppuVar13 = (undefined **)0x0;
        goto LAB_10a69509c;
      }
      __ZNSt3__119__shared_weak_count14__release_weakEv(pppuVar5);
    }
    goto LAB_10a6950fc;
  }
  ppuVar13 = param_1[0x15];
  pppuVar6 = pppuVar5 + 1;
  do {
    ppuVar9 = *pppuVar6;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(pppuVar6,0x10);
    if (bVar4) {
      *pppuVar6 = (undefined **)((long)ppuVar9 + -1);
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  if (ppuVar9 == (undefined **)0x0) {
    (*(code *)(*pppuVar5)[2])(pppuVar5);
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  if (ppuVar13 == (undefined **)0x0) goto LAB_10a695000;
  goto LAB_10a6950d0;
LAB_10a695080:
  ppuVar16 = (undefined **)ppuVar16[1];
  if (ppuVar16 == ppuVar9 + 0x2a) goto code_r0x00010a69508c;
  goto LAB_10a695064;
code_r0x00010a69508c:
  ppuVar13 = (undefined **)0x0;
  pppuVar5 = (undefined ***)0x0;
joined_r0x00010a695090:
  if (pppuVar6 != (undefined ***)0x0) {
LAB_10a69509c:
    pppuVar1 = pppuVar6 + 1;
    do {
      ppuVar9 = *pppuVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(pppuVar1,0x10);
      if (bVar4) {
        *pppuVar1 = (undefined **)((long)ppuVar9 + -1);
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (ppuVar9 == (undefined **)0x0) {
      (*(code *)(*pppuVar6)[2])(pppuVar6);
      __ZNSt3__119__shared_weak_count14__release_weakEv();
      pppuVar5 = pppuVar6;
    }
  }
  if (ppuVar13 == (undefined **)0x0) {
LAB_10a6950fc:
    ppcVar14 = &pcStack_88;
    pcStack_88 = FUN_10a6aaaec;
    ppuStack_80 = &PTR_DAT_110c0da20;
    param_2 = &pcStack_88;
    pppuStack_78 = param_1;
    FUN_10a6056e8(*(long *)(param_1[0xc][0x106] + 0x18) + 0x558,param_2);
    pppuVar5 = &ppuStack_80;
    (*(code *)*ppuStack_80)();
    goto LAB_10a695140;
  }
LAB_10a6950d0:
  ppcVar14 = (code **)ppuVar13[0xab];
  for (ppcVar15 = (code **)ppuVar13[0xaa]; ppcVar15 != ppcVar14; ppcVar15 = ppcVar15 + 1) {
    param_1[0x17] = (undefined **)*ppcVar15;
    pppuVar5 = param_1;
    FUN_10a5861f0();
  }
LAB_10a695140:
  param_1[0x17] = (undefined **)0x0;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010a05253c(&ppuStack_98);
  pppuVar6 = pppuVar5;
  __Unwind_Resume();
  pcStack_b8 = FUN_10a69522c;
  lStack_d8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcStack_118 = FUN_10a6aab40;
  ppuStack_110 = &PTR_FUN_110c0da40;
  ppuVar13 = &PTR_DAT_110c0c9d0;
  ppcVar15 = &pcStack_118;
  pppuStack_108 = pppuVar6;
  ppcStack_d0 = ppcVar14;
  pppuStack_c8 = pppuVar5;
  puStack_c0 = &stack0xfffffffffffffff0;
  FUN_10a65cb90(param_2,&PTR_DAT_110c0c9d0,ppcVar15,0);
  pppuVar5 = &ppuStack_110;
  (*(code *)*ppuStack_110)();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_d8) {
    ___stack_chk_fail();
    (*(code *)*ppuStack_110)(&ppuStack_110);
    __Unwind_Resume();
    pppuVar6 = pppuVar5 + 0xc;
    if (ppcVar15 != (code **)0x0) {
      pppuVar6 = (undefined ***)(ppcVar15 + 0x16);
    }
    ppuVar9 = *pppuVar6;
    pppuVar6 = pppuVar5;
    func_0x00010a0fda30();
    plVar7 = (long *)0xd8;
    __Znwm();
    plVar8 = plVar7 + 1;
    plVar7[2] = 0;
    *plVar8 = 0;
    *plVar7 = (long)&PTR_DAT_110c0da68;
    plVar10 = plVar7 + 3;
    *plVar10 = (long)&PTR_FUN_110c0eed0;
    *(undefined1 *)(plVar7 + 4) = 0;
    plVar7[6] = 0;
    plVar7[7] = 0;
    plVar7[0xb] = (long)pppuVar6;
    plVar7[0xc] = (long)ppuVar13;
    *(undefined1 *)(plVar7 + 0xd) = 0;
    *(undefined8 *)((long)plVar7 + 0x6c) = 0x800000000;
    plVar7[0xf] = (long)ppuVar9;
    *(undefined1 *)(plVar7 + 0x10) = 0;
    *(undefined1 *)(plVar7 + 0x14) = 0;
    *(undefined1 *)(plVar7 + 0x15) = 1;
    plVar7[0x16] = 0;
    plVar7[0x17] = 0;
    plVar7[5] = (long)&PTR_FUN_110c0ef68;
    plVar7[10] = (long)&PTR_FUN_110c0efc0;
    plVar7[0x18] = 0;
    plVar7[0x19] = 0;
    plVar7[0x1a] = 0;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar4) {
        *plVar8 = *plVar8 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    plVar2 = plVar7 + 2;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar4) {
        *plVar2 = *plVar2 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    plVar7[8] = (long)plVar10;
    plVar7[9] = (long)plVar7;
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
      (**(code **)(*plVar7 + 0x10))(plVar7);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
    }
    *(undefined4 *)((long)plVar7 + 0x6c) = *(undefined4 *)((long)pppuVar5 + 0x54);
    ppuVar9 = pppuVar5[0x14];
    ppuVar13 = pppuVar5[0x13];
    if (pppuVar5[0x14] != (undefined **)0x0) {
      ppuVar16 = pppuVar5[0x14] + 2;
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(ppuVar16,0x10);
        if (bVar4) {
          *ppuVar16 = *ppuVar16 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    lVar11 = plVar7[0x17];
    plVar7[0x17] = (long)ppuVar9;
    plVar7[0x16] = (long)ppuVar13;
    if (lVar11 != 0) {
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
    ppuVar13 = pppuVar5[0x16];
    if (ppuVar13 == (undefined **)0x0) {
      ppuVar13 = (undefined **)0x0;
    }
    else {
      __ZNSt3__119__shared_weak_count4lockEv();
    }
    FUN_10a68a860();
    if (ppuVar13 != (undefined **)0x0) {
      ppuVar9 = ppuVar13 + 1;
      do {
        puVar12 = *ppuVar9;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(ppuVar9,0x10);
        if (bVar4) {
          *ppuVar9 = puVar12 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (puVar12 == (undefined *)0x0) {
        (**(code **)(*ppuVar13 + 0x10))(ppuVar13);
        __ZNSt3__119__shared_weak_count14__release_weakEv(ppuVar13);
      }
    }
    extraout_x8[1] = plVar7;
    *extraout_x8 = plVar10;
    return;
  }
  return;
}



/* Entry: 10a69522c; end: 10a6952df;  */

void FUN_10a69522c(undefined8 param_1,undefined8 param_2)

{
  long *plVar1;
  undefined **ppuVar2;
  char cVar3;
  bool bVar4;
  undefined ***pppuVar5;
  undefined ***pppuVar6;
  long *plVar7;
  undefined **ppuVar8;
  code **ppcVar9;
  undefined8 *extraout_x8;
  long *plVar10;
  long *plVar11;
  long lVar12;
  undefined *puVar13;
  undefined **ppuVar14;
  code *pcStack_68;
  undefined **ppuStack_60;
  undefined8 uStack_58;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcStack_68 = FUN_10a6aab40;
  ppuStack_60 = &PTR_FUN_110c0da40;
  ppuVar8 = &PTR_DAT_110c0c9d0;
  ppcVar9 = &pcStack_68;
  uStack_58 = param_1;
  FUN_10a65cb90(param_2,&PTR_DAT_110c0c9d0,ppcVar9,0);
  pppuVar5 = &ppuStack_60;
  (*(code *)*ppuStack_60)();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_28) {
    ___stack_chk_fail();
    (*(code *)*ppuStack_60)(&ppuStack_60);
    __Unwind_Resume();
    pppuVar6 = pppuVar5 + 0xc;
    if (ppcVar9 != (code **)0x0) {
      pppuVar6 = (undefined ***)(ppcVar9 + 0x16);
    }
    ppuVar14 = *pppuVar6;
    pppuVar6 = pppuVar5;
    func_0x00010a0fda30();
    plVar7 = (long *)0xd8;
    __Znwm();
    plVar10 = plVar7 + 1;
    plVar7[2] = 0;
    *plVar10 = 0;
    *plVar7 = (long)&PTR_DAT_110c0da68;
    plVar11 = plVar7 + 3;
    *plVar11 = (long)&PTR_FUN_110c0eed0;
    *(undefined1 *)(plVar7 + 4) = 0;
    plVar7[6] = 0;
    plVar7[7] = 0;
    plVar7[0xb] = (long)pppuVar6;
    plVar7[0xc] = (long)ppuVar8;
    *(undefined1 *)(plVar7 + 0xd) = 0;
    *(undefined8 *)((long)plVar7 + 0x6c) = 0x800000000;
    plVar7[0xf] = (long)ppuVar14;
    *(undefined1 *)(plVar7 + 0x10) = 0;
    *(undefined1 *)(plVar7 + 0x14) = 0;
    *(undefined1 *)(plVar7 + 0x15) = 1;
    plVar7[0x16] = 0;
    plVar7[0x17] = 0;
    plVar7[5] = (long)&PTR_FUN_110c0ef68;
    plVar7[10] = (long)&PTR_FUN_110c0efc0;
    plVar7[0x18] = 0;
    plVar7[0x19] = 0;
    plVar7[0x1a] = 0;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar4) {
        *plVar10 = *plVar10 + 1;
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
    plVar7[8] = (long)plVar11;
    plVar7[9] = (long)plVar7;
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
      (**(code **)(*plVar7 + 0x10))(plVar7);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
    }
    *(undefined4 *)((long)plVar7 + 0x6c) = *(undefined4 *)((long)pppuVar5 + 0x54);
    ppuVar14 = pppuVar5[0x14];
    ppuVar8 = pppuVar5[0x13];
    if (pppuVar5[0x14] != (undefined **)0x0) {
      ppuVar2 = pppuVar5[0x14] + 2;
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(ppuVar2,0x10);
        if (bVar4) {
          *ppuVar2 = *ppuVar2 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    lVar12 = plVar7[0x17];
    plVar7[0x17] = (long)ppuVar14;
    plVar7[0x16] = (long)ppuVar8;
    if (lVar12 != 0) {
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
    ppuVar8 = pppuVar5[0x16];
    if (ppuVar8 == (undefined **)0x0) {
      ppuVar8 = (undefined **)0x0;
    }
    else {
      __ZNSt3__119__shared_weak_count4lockEv();
    }
    FUN_10a68a860();
    if (ppuVar8 != (undefined **)0x0) {
      ppuVar14 = ppuVar8 + 1;
      do {
        puVar13 = *ppuVar14;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(ppuVar14,0x10);
        if (bVar4) {
          *ppuVar14 = puVar13 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (puVar13 == (undefined *)0x0) {
        (**(code **)(*ppuVar8 + 0x10))(ppuVar8);
        __ZNSt3__119__shared_weak_count14__release_weakEv(ppuVar8);
      }
    }
    extraout_x8[1] = plVar7;
    *extraout_x8 = plVar11;
    return;
  }
  return;
}



/* Entry: 10a6952e0; end: 10a6954eb;  */

void FUN_10a6952e0(undefined8 *param_1,long param_2,long param_3,long param_4)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  long *plVar6;
  long *plVar7;
  long lVar8;
  long lVar9;
  
  plVar4 = (long *)(param_2 + 0x60);
  if (param_4 != 0) {
    plVar4 = (long *)(param_4 + 0xb0);
  }
  lVar9 = *plVar4;
  lVar8 = param_2;
  func_0x00010a0fda30();
  plVar4 = (long *)0xd8;
  __Znwm();
  plVar6 = plVar4 + 1;
  plVar4[2] = 0;
  *plVar6 = 0;
  *plVar4 = (long)&PTR_DAT_110c0da68;
  plVar7 = plVar4 + 3;
  *plVar7 = (long)&PTR_FUN_110c0eed0;
  *(undefined1 *)(plVar4 + 4) = 0;
  plVar4[6] = 0;
  plVar4[7] = 0;
  plVar4[0xb] = lVar8;
  plVar4[0xc] = param_3;
  *(undefined1 *)(plVar4 + 0xd) = 0;
  *(undefined8 *)((long)plVar4 + 0x6c) = 0x800000000;
  plVar4[0xf] = lVar9;
  *(undefined1 *)(plVar4 + 0x10) = 0;
  *(undefined1 *)(plVar4 + 0x14) = 0;
  *(undefined1 *)(plVar4 + 0x15) = 1;
  plVar4[0x16] = 0;
  plVar4[0x17] = 0;
  plVar4[5] = (long)&PTR_FUN_110c0ef68;
  plVar4[10] = (long)&PTR_FUN_110c0efc0;
  plVar4[0x18] = 0;
  plVar4[0x19] = 0;
  plVar4[0x1a] = 0;
  do {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
    if (bVar3) {
      *plVar6 = *plVar6 + 1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  plVar1 = plVar4 + 2;
  do {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar3) {
      *plVar1 = *plVar1 + 1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  plVar4[8] = (long)plVar7;
  plVar4[9] = (long)plVar4;
  do {
    lVar8 = *plVar6;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
    if (bVar3) {
      *plVar6 = lVar8 + -1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (lVar8 == 0) {
    (**(code **)(*plVar4 + 0x10))(plVar4);
    __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
  }
  *(undefined4 *)((long)plVar4 + 0x6c) = *(undefined4 *)(param_2 + 0x54);
  lVar9 = *(long *)(param_2 + 0xa0);
  lVar8 = *(long *)(param_2 + 0x98);
  if (*(long *)(param_2 + 0xa0) != 0) {
    plVar6 = (long *)(*(long *)(param_2 + 0xa0) + 0x10);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar3) {
        *plVar6 = *plVar6 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  lVar5 = plVar4[0x17];
  plVar4[0x17] = lVar9;
  plVar4[0x16] = lVar8;
  if (lVar5 != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  plVar6 = *(long **)(param_2 + 0xb0);
  if (plVar6 == (long *)0x0) {
    plVar6 = (long *)0x0;
  }
  else {
    __ZNSt3__119__shared_weak_count4lockEv();
  }
  FUN_10a68a860();
  if (plVar6 != (long *)0x0) {
    plVar1 = plVar6 + 1;
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
      (**(code **)(*plVar6 + 0x10))(plVar6);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
    }
  }
  param_1[1] = plVar4;
  *param_1 = plVar7;
  return;
}



/* Entry: 10a6954ec; end: 10a695797;  */

void FUN_10a6954ec(undefined ***param_1,code **param_2)

{
  undefined ***pppuVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  undefined ***pppuVar5;
  undefined ***pppuVar6;
  long *plVar7;
  undefined8 *extraout_x8;
  long *plVar8;
  undefined **ppuVar9;
  long *plVar10;
  long lVar11;
  undefined *puVar12;
  undefined **ppuVar13;
  code **ppcVar14;
  code **ppcVar15;
  undefined **ppuVar16;
  code *pcStack_118;
  undefined **ppuStack_110;
  undefined ***pppuStack_108;
  long lStack_d8;
  code **ppcStack_d0;
  undefined ***pppuStack_c8;
  undefined1 *puStack_c0;
  code *pcStack_b8;
  undefined **ppuStack_b0;
  undefined ***pppuStack_a8;
  undefined **ppuStack_98;
  undefined ***pppuStack_90;
  code *pcStack_88;
  undefined **ppuStack_80;
  undefined ***pppuStack_78;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pppuVar5 = (undefined ***)param_1[0x16];
  if ((pppuVar5 == (undefined ***)0x0) ||
     (__ZNSt3__119__shared_weak_count4lockEv(), pppuVar5 == (undefined ***)0x0)) {
LAB_10a69556c:
    pppuVar5 = (undefined ***)param_1[0x14];
    if (pppuVar5 != (undefined ***)0x0) {
      ppuVar9 = param_1[0x13];
      pppuVar6 = pppuVar5 + 2;
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(pppuVar6,0x10);
        if (bVar4) {
          *pppuVar6 = (undefined **)((long)*pppuVar6 + 1);
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      pppuVar6 = pppuVar5;
      __ZNSt3__119__shared_weak_count4lockEv();
      pppuStack_90 = pppuVar6;
      if (pppuVar6 != (undefined ***)0x0) {
        ppuStack_98 = ppuVar9;
        __ZNSt3__119__shared_weak_count14__release_weakEv();
        if (ppuVar9 != (undefined **)0x0) {
          ppuVar16 = (undefined **)ppuVar9[0x2b];
          if (ppuVar16 != ppuVar9 + 0x2a) {
LAB_10a6955d0:
            if (ppuVar16[2] == (undefined *)0x0) goto LAB_10a6955ec;
            ppuVar13 = (undefined **)(ppuVar16[2] + 0xb0);
            param_2 = (code **)0xc2c0ac5e4c065340;
            (**(code **)(*ppuVar13 + 0x18))(ppuVar13,0xc2c0ac5e4c065340);
            if (ppuVar13 == (undefined **)0x0) goto LAB_10a6955ec;
            FUN_10a2d1b5c(&ppuStack_b0);
            if (pppuStack_a8 != (undefined ***)0x0) {
              pppuVar5 = pppuStack_a8 + 2;
              do {
                cVar3 = '\x01';
                bVar4 = (bool)ExclusiveMonitorPass(pppuVar5,0x10);
                if (bVar4) {
                  *pppuVar5 = (undefined **)((long)*pppuVar5 + 1);
                  cVar3 = ExclusiveMonitorsStatus();
                }
              } while (cVar3 != '\0');
            }
            pppuVar5 = (undefined ***)param_1[0x16];
            param_1[0x16] = (undefined **)pppuStack_a8;
            param_1[0x15] = ppuStack_b0;
            if (pppuVar5 != (undefined ***)0x0) {
              __ZNSt3__119__shared_weak_count14__release_weakEv();
            }
            pppuVar6 = pppuStack_90;
            if (pppuStack_a8 != (undefined ***)0x0) {
              pppuVar1 = pppuStack_a8 + 1;
              do {
                ppuVar9 = *pppuVar1;
                cVar3 = '\x01';
                bVar4 = (bool)ExclusiveMonitorPass(pppuVar1,0x10);
                if (bVar4) {
                  *pppuVar1 = (undefined **)((long)ppuVar9 + -1);
                  cVar3 = ExclusiveMonitorsStatus();
                }
              } while (cVar3 != '\0');
              if (ppuVar9 == (undefined **)0x0) {
                (*(code *)(*pppuStack_a8)[2])(pppuStack_a8);
                __ZNSt3__119__shared_weak_count14__release_weakEv();
                pppuVar6 = pppuStack_90;
                pppuVar5 = pppuStack_a8;
              }
            }
            goto joined_r0x00010a6955fc;
          }
        }
        ppuVar13 = (undefined **)0x0;
        goto LAB_10a695608;
      }
      __ZNSt3__119__shared_weak_count14__release_weakEv(pppuVar5);
    }
    goto LAB_10a695668;
  }
  ppuVar13 = param_1[0x15];
  pppuVar6 = pppuVar5 + 1;
  do {
    ppuVar9 = *pppuVar6;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(pppuVar6,0x10);
    if (bVar4) {
      *pppuVar6 = (undefined **)((long)ppuVar9 + -1);
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  if (ppuVar9 == (undefined **)0x0) {
    (*(code *)(*pppuVar5)[2])(pppuVar5);
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  if (ppuVar13 == (undefined **)0x0) goto LAB_10a69556c;
  goto LAB_10a69563c;
LAB_10a6955ec:
  ppuVar16 = (undefined **)ppuVar16[1];
  if (ppuVar16 == ppuVar9 + 0x2a) goto code_r0x00010a6955f8;
  goto LAB_10a6955d0;
code_r0x00010a6955f8:
  ppuVar13 = (undefined **)0x0;
  pppuVar5 = (undefined ***)0x0;
joined_r0x00010a6955fc:
  if (pppuVar6 != (undefined ***)0x0) {
LAB_10a695608:
    pppuVar1 = pppuVar6 + 1;
    do {
      ppuVar9 = *pppuVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(pppuVar1,0x10);
      if (bVar4) {
        *pppuVar1 = (undefined **)((long)ppuVar9 + -1);
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (ppuVar9 == (undefined **)0x0) {
      (*(code *)(*pppuVar6)[2])(pppuVar6);
      __ZNSt3__119__shared_weak_count14__release_weakEv();
      pppuVar5 = pppuVar6;
    }
  }
  if (ppuVar13 == (undefined **)0x0) {
LAB_10a695668:
    ppcVar14 = &pcStack_88;
    pcStack_88 = FUN_10a6aaca4;
    ppuStack_80 = &PTR_DAT_110c0daa8;
    param_2 = &pcStack_88;
    pppuStack_78 = param_1;
    FUN_10a6056e8(*(long *)(param_1[0xc][0x106] + 0x18) + 0x558,param_2);
    pppuVar5 = &ppuStack_80;
    (*(code *)*ppuStack_80)();
    goto LAB_10a6956ac;
  }
LAB_10a69563c:
  ppcVar14 = (code **)ppuVar13[0xae];
  for (ppcVar15 = (code **)ppuVar13[0xad]; ppcVar15 != ppcVar14; ppcVar15 = ppcVar15 + 1) {
    param_1[0x17] = (undefined **)*ppcVar15;
    pppuVar5 = param_1;
    FUN_10a5861f0();
  }
LAB_10a6956ac:
  param_1[0x17] = (undefined **)0x0;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010a05253c(&ppuStack_98);
  pppuVar6 = pppuVar5;
  __Unwind_Resume();
  pcStack_b8 = FUN_10a695798;
  lStack_d8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcStack_118 = FUN_10a6aacec;
  ppuStack_110 = &PTR_FUN_110c0dac8;
  ppuVar13 = &PTR_DAT_110c0c9d0;
  ppcVar15 = &pcStack_118;
  pppuStack_108 = pppuVar6;
  ppcStack_d0 = ppcVar14;
  pppuStack_c8 = pppuVar5;
  puStack_c0 = &stack0xfffffffffffffff0;
  FUN_10a65cb90(param_2,&PTR_DAT_110c0c9d0,ppcVar15,0);
  pppuVar5 = &ppuStack_110;
  (*(code *)*ppuStack_110)();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_d8) {
    ___stack_chk_fail();
    (*(code *)*ppuStack_110)(&ppuStack_110);
    __Unwind_Resume();
    pppuVar6 = pppuVar5 + 0xc;
    if (ppcVar15 != (code **)0x0) {
      pppuVar6 = (undefined ***)(ppcVar15 + 0x16);
    }
    ppuVar9 = *pppuVar6;
    pppuVar6 = pppuVar5;
    func_0x00010a0fda30();
    plVar7 = (long *)0xd8;
    __Znwm();
    plVar8 = plVar7 + 1;
    plVar7[2] = 0;
    *plVar8 = 0;
    *plVar7 = (long)&PTR_DAT_110c0daf0;
    plVar10 = plVar7 + 3;
    *plVar10 = (long)&PTR_FUN_110c0efe0;
    *(undefined1 *)(plVar7 + 4) = 0;
    plVar7[6] = 0;
    plVar7[7] = 0;
    plVar7[0xb] = (long)pppuVar6;
    plVar7[0xc] = (long)ppuVar13;
    *(undefined1 *)(plVar7 + 0xd) = 0;
    *(undefined8 *)((long)plVar7 + 0x6c) = 0x800000000;
    plVar7[0xf] = (long)ppuVar9;
    *(undefined1 *)(plVar7 + 0x10) = 0;
    *(undefined1 *)(plVar7 + 0x14) = 0;
    *(undefined1 *)(plVar7 + 0x15) = 1;
    plVar7[0x16] = 0;
    plVar7[0x17] = 0;
    plVar7[5] = (long)&PTR_FUN_110c0f078;
    plVar7[10] = (long)&PTR_FUN_110c0f0d0;
    plVar7[0x18] = 0;
    plVar7[0x19] = 0;
    plVar7[0x1a] = 0;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar4) {
        *plVar8 = *plVar8 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    plVar2 = plVar7 + 2;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar4) {
        *plVar2 = *plVar2 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    plVar7[8] = (long)plVar10;
    plVar7[9] = (long)plVar7;
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
      (**(code **)(*plVar7 + 0x10))(plVar7);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
    }
    *(undefined4 *)((long)plVar7 + 0x6c) = *(undefined4 *)((long)pppuVar5 + 0x54);
    ppuVar9 = pppuVar5[0x14];
    ppuVar13 = pppuVar5[0x13];
    if (pppuVar5[0x14] != (undefined **)0x0) {
      ppuVar16 = pppuVar5[0x14] + 2;
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(ppuVar16,0x10);
        if (bVar4) {
          *ppuVar16 = *ppuVar16 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    lVar11 = plVar7[0x17];
    plVar7[0x17] = (long)ppuVar9;
    plVar7[0x16] = (long)ppuVar13;
    if (lVar11 != 0) {
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
    ppuVar13 = pppuVar5[0x16];
    if (ppuVar13 == (undefined **)0x0) {
      ppuVar13 = (undefined **)0x0;
    }
    else {
      __ZNSt3__119__shared_weak_count4lockEv();
    }
    FUN_10a68a860();
    if (ppuVar13 != (undefined **)0x0) {
      ppuVar9 = ppuVar13 + 1;
      do {
        puVar12 = *ppuVar9;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(ppuVar9,0x10);
        if (bVar4) {
          *ppuVar9 = puVar12 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (puVar12 == (undefined *)0x0) {
        (**(code **)(*ppuVar13 + 0x10))(ppuVar13);
        __ZNSt3__119__shared_weak_count14__release_weakEv(ppuVar13);
      }
    }
    extraout_x8[1] = plVar7;
    *extraout_x8 = plVar10;
    return;
  }
  return;
}



/* Entry: 10a695798; end: 10a69584b;  */

void FUN_10a695798(undefined8 param_1,undefined8 param_2)

{
  long *plVar1;
  undefined **ppuVar2;
  char cVar3;
  bool bVar4;
  undefined ***pppuVar5;
  undefined ***pppuVar6;
  long *plVar7;
  undefined **ppuVar8;
  code **ppcVar9;
  undefined8 *extraout_x8;
  long *plVar10;
  long *plVar11;
  long lVar12;
  undefined *puVar13;
  undefined **ppuVar14;
  code *pcStack_68;
  undefined **ppuStack_60;
  undefined8 uStack_58;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcStack_68 = FUN_10a6aacec;
  ppuStack_60 = &PTR_FUN_110c0dac8;
  ppuVar8 = &PTR_DAT_110c0c9d0;
  ppcVar9 = &pcStack_68;
  uStack_58 = param_1;
  FUN_10a65cb90(param_2,&PTR_DAT_110c0c9d0,ppcVar9,0);
  pppuVar5 = &ppuStack_60;
  (*(code *)*ppuStack_60)();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_28) {
    ___stack_chk_fail();
    (*(code *)*ppuStack_60)(&ppuStack_60);
    __Unwind_Resume();
    pppuVar6 = pppuVar5 + 0xc;
    if (ppcVar9 != (code **)0x0) {
      pppuVar6 = (undefined ***)(ppcVar9 + 0x16);
    }
    ppuVar14 = *pppuVar6;
    pppuVar6 = pppuVar5;
    func_0x00010a0fda30();
    plVar7 = (long *)0xd8;
    __Znwm();
    plVar10 = plVar7 + 1;
    plVar7[2] = 0;
    *plVar10 = 0;
    *plVar7 = (long)&PTR_DAT_110c0daf0;
    plVar11 = plVar7 + 3;
    *plVar11 = (long)&PTR_FUN_110c0efe0;
    *(undefined1 *)(plVar7 + 4) = 0;
    plVar7[6] = 0;
    plVar7[7] = 0;
    plVar7[0xb] = (long)pppuVar6;
    plVar7[0xc] = (long)ppuVar8;
    *(undefined1 *)(plVar7 + 0xd) = 0;
    *(undefined8 *)((long)plVar7 + 0x6c) = 0x800000000;
    plVar7[0xf] = (long)ppuVar14;
    *(undefined1 *)(plVar7 + 0x10) = 0;
    *(undefined1 *)(plVar7 + 0x14) = 0;
    *(undefined1 *)(plVar7 + 0x15) = 1;
    plVar7[0x16] = 0;
    plVar7[0x17] = 0;
    plVar7[5] = (long)&PTR_FUN_110c0f078;
    plVar7[10] = (long)&PTR_FUN_110c0f0d0;
    plVar7[0x18] = 0;
    plVar7[0x19] = 0;
    plVar7[0x1a] = 0;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar4) {
        *plVar10 = *plVar10 + 1;
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
    plVar7[8] = (long)plVar11;
    plVar7[9] = (long)plVar7;
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
      (**(code **)(*plVar7 + 0x10))(plVar7);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
    }
    *(undefined4 *)((long)plVar7 + 0x6c) = *(undefined4 *)((long)pppuVar5 + 0x54);
    ppuVar14 = pppuVar5[0x14];
    ppuVar8 = pppuVar5[0x13];
    if (pppuVar5[0x14] != (undefined **)0x0) {
      ppuVar2 = pppuVar5[0x14] + 2;
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(ppuVar2,0x10);
        if (bVar4) {
          *ppuVar2 = *ppuVar2 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    lVar12 = plVar7[0x17];
    plVar7[0x17] = (long)ppuVar14;
    plVar7[0x16] = (long)ppuVar8;
    if (lVar12 != 0) {
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
    ppuVar8 = pppuVar5[0x16];
    if (ppuVar8 == (undefined **)0x0) {
      ppuVar8 = (undefined **)0x0;
    }
    else {
      __ZNSt3__119__shared_weak_count4lockEv();
    }
    FUN_10a68a860();
    if (ppuVar8 != (undefined **)0x0) {
      ppuVar14 = ppuVar8 + 1;
      do {
        puVar13 = *ppuVar14;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(ppuVar14,0x10);
        if (bVar4) {
          *ppuVar14 = puVar13 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (puVar13 == (undefined *)0x0) {
        (**(code **)(*ppuVar8 + 0x10))(ppuVar8);
        __ZNSt3__119__shared_weak_count14__release_weakEv(ppuVar8);
      }
    }
    extraout_x8[1] = plVar7;
    *extraout_x8 = plVar11;
    return;
  }
  return;
}



/* Entry: 10a69584c; end: 10a695a57;  */

void FUN_10a69584c(undefined8 *param_1,long param_2,long param_3,long param_4)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  long *plVar6;
  long *plVar7;
  long lVar8;
  long lVar9;
  
  plVar4 = (long *)(param_2 + 0x60);
  if (param_4 != 0) {
    plVar4 = (long *)(param_4 + 0xb0);
  }
  lVar9 = *plVar4;
  lVar8 = param_2;
  func_0x00010a0fda30();
  plVar4 = (long *)0xd8;
  __Znwm();
  plVar6 = plVar4 + 1;
  plVar4[2] = 0;
  *plVar6 = 0;
  *plVar4 = (long)&PTR_DAT_110c0daf0;
  plVar7 = plVar4 + 3;
  *plVar7 = (long)&PTR_FUN_110c0efe0;
  *(undefined1 *)(plVar4 + 4) = 0;
  plVar4[6] = 0;
  plVar4[7] = 0;
  plVar4[0xb] = lVar8;
  plVar4[0xc] = param_3;
  *(undefined1 *)(plVar4 + 0xd) = 0;
  *(undefined8 *)((long)plVar4 + 0x6c) = 0x800000000;
  plVar4[0xf] = lVar9;
  *(undefined1 *)(plVar4 + 0x10) = 0;
  *(undefined1 *)(plVar4 + 0x14) = 0;
  *(undefined1 *)(plVar4 + 0x15) = 1;
  plVar4[0x16] = 0;
  plVar4[0x17] = 0;
  plVar4[5] = (long)&PTR_FUN_110c0f078;
  plVar4[10] = (long)&PTR_FUN_110c0f0d0;
  plVar4[0x18] = 0;
  plVar4[0x19] = 0;
  plVar4[0x1a] = 0;
  do {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
    if (bVar3) {
      *plVar6 = *plVar6 + 1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  plVar1 = plVar4 + 2;
  do {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar3) {
      *plVar1 = *plVar1 + 1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  plVar4[8] = (long)plVar7;
  plVar4[9] = (long)plVar4;
  do {
    lVar8 = *plVar6;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
    if (bVar3) {
      *plVar6 = lVar8 + -1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (lVar8 == 0) {
    (**(code **)(*plVar4 + 0x10))(plVar4);
    __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
  }
  *(undefined4 *)((long)plVar4 + 0x6c) = *(undefined4 *)(param_2 + 0x54);
  lVar9 = *(long *)(param_2 + 0xa0);
  lVar8 = *(long *)(param_2 + 0x98);
  if (*(long *)(param_2 + 0xa0) != 0) {
    plVar6 = (long *)(*(long *)(param_2 + 0xa0) + 0x10);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar3) {
        *plVar6 = *plVar6 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  lVar5 = plVar4[0x17];
  plVar4[0x17] = lVar9;
  plVar4[0x16] = lVar8;
  if (lVar5 != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  plVar6 = *(long **)(param_2 + 0xb0);
  if (plVar6 == (long *)0x0) {
    plVar6 = (long *)0x0;
  }
  else {
    __ZNSt3__119__shared_weak_count4lockEv();
  }
  FUN_10a68a860();
  if (plVar6 != (long *)0x0) {
    plVar1 = plVar6 + 1;
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
      (**(code **)(*plVar6 + 0x10))(plVar6);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
    }
  }
  param_1[1] = plVar4;
  *param_1 = plVar7;
  return;
}



/* Entry: 10a695a58; end: 10a695d03;  */

undefined1  [16] FUN_10a695a58(undefined ***param_1,code **param_2)

{
  undefined ***pppuVar1;
  char cVar2;
  bool bVar3;
  undefined ***pppuVar4;
  undefined ***pppuVar5;
  undefined **ppuVar6;
  undefined **ppuVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined **ppuVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined **ppuStack_b0;
  undefined ***pppuStack_a8;
  undefined **ppuStack_98;
  undefined ***pppuStack_90;
  code *pcStack_88;
  undefined **ppuStack_80;
  undefined ***pppuStack_78;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pppuVar4 = (undefined ***)param_1[0x16];
  if ((pppuVar4 == (undefined ***)0x0) ||
     (__ZNSt3__119__shared_weak_count4lockEv(), pppuVar4 == (undefined ***)0x0)) {
LAB_10a695ad8:
    pppuVar4 = (undefined ***)param_1[0x14];
    if (pppuVar4 != (undefined ***)0x0) {
      ppuVar6 = param_1[0x13];
      pppuVar5 = pppuVar4 + 2;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(pppuVar5,0x10);
        if (bVar3) {
          *pppuVar5 = (undefined **)((long)*pppuVar5 + 1);
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      pppuVar5 = pppuVar4;
      __ZNSt3__119__shared_weak_count4lockEv();
      pppuStack_90 = pppuVar5;
      if (pppuVar5 != (undefined ***)0x0) {
        ppuStack_98 = ppuVar6;
        __ZNSt3__119__shared_weak_count14__release_weakEv(pppuVar4);
        if (ppuVar6 != (undefined **)0x0) {
          ppuVar10 = (undefined **)ppuVar6[0x2b];
          if (ppuVar10 != ppuVar6 + 0x2a) {
LAB_10a695b3c:
            if (ppuVar10[2] == (undefined *)0x0) goto LAB_10a695b58;
            ppuVar7 = (undefined **)(ppuVar10[2] + 0xb0);
            param_2 = (code **)0xc2c0ac5e4c065340;
            (**(code **)(*ppuVar7 + 0x18))(ppuVar7,0xc2c0ac5e4c065340);
            if (ppuVar7 == (undefined **)0x0) goto LAB_10a695b58;
            FUN_10a2d1b5c(&ppuStack_b0);
            if (pppuStack_a8 != (undefined ***)0x0) {
              pppuVar4 = pppuStack_a8 + 2;
              do {
                cVar2 = '\x01';
                bVar3 = (bool)ExclusiveMonitorPass(pppuVar4,0x10);
                if (bVar3) {
                  *pppuVar4 = (undefined **)((long)*pppuVar4 + 1);
                  cVar2 = ExclusiveMonitorsStatus();
                }
              } while (cVar2 != '\0');
            }
            pppuVar4 = (undefined ***)param_1[0x16];
            param_1[0x16] = (undefined **)pppuStack_a8;
            param_1[0x15] = ppuStack_b0;
            if (pppuVar4 != (undefined ***)0x0) {
              __ZNSt3__119__shared_weak_count14__release_weakEv();
            }
            pppuVar5 = pppuStack_90;
            if (pppuStack_a8 != (undefined ***)0x0) {
              pppuVar1 = pppuStack_a8 + 1;
              do {
                ppuVar6 = *pppuVar1;
                cVar2 = '\x01';
                bVar3 = (bool)ExclusiveMonitorPass(pppuVar1,0x10);
                if (bVar3) {
                  *pppuVar1 = (undefined **)((long)ppuVar6 + -1);
                  cVar2 = ExclusiveMonitorsStatus();
                }
              } while (cVar2 != '\0');
              if (ppuVar6 == (undefined **)0x0) {
                (*(code *)(*pppuStack_a8)[2])(pppuStack_a8);
                __ZNSt3__119__shared_weak_count14__release_weakEv(pppuStack_a8);
                pppuVar5 = pppuStack_90;
                pppuVar4 = pppuStack_a8;
              }
            }
            goto joined_r0x00010a695b68;
          }
        }
        ppuVar7 = (undefined **)0x0;
        goto LAB_10a695b74;
      }
      __ZNSt3__119__shared_weak_count14__release_weakEv(pppuVar4);
    }
    goto LAB_10a695bd4;
  }
  ppuVar7 = param_1[0x15];
  pppuVar5 = pppuVar4 + 1;
  do {
    ppuVar6 = *pppuVar5;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(pppuVar5,0x10);
    if (bVar3) {
      *pppuVar5 = (undefined **)((long)ppuVar6 + -1);
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (ppuVar6 == (undefined **)0x0) {
    (*(code *)(*pppuVar4)[2])(pppuVar4);
    __ZNSt3__119__shared_weak_count14__release_weakEv(pppuVar4);
  }
  if (ppuVar7 == (undefined **)0x0) goto LAB_10a695ad8;
  goto LAB_10a695ba8;
LAB_10a695b58:
  ppuVar10 = (undefined **)ppuVar10[1];
  if (ppuVar10 == ppuVar6 + 0x2a) goto code_r0x00010a695b64;
  goto LAB_10a695b3c;
code_r0x00010a695b64:
  ppuVar7 = (undefined **)0x0;
  pppuVar4 = (undefined ***)0x0;
joined_r0x00010a695b68:
  if (pppuVar5 != (undefined ***)0x0) {
LAB_10a695b74:
    pppuVar1 = pppuVar5 + 1;
    do {
      ppuVar6 = *pppuVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(pppuVar1,0x10);
      if (bVar3) {
        *pppuVar1 = (undefined **)((long)ppuVar6 + -1);
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (ppuVar6 == (undefined **)0x0) {
      (*(code *)(*pppuVar5)[2])(pppuVar5);
      __ZNSt3__119__shared_weak_count14__release_weakEv(pppuVar5);
      pppuVar4 = pppuVar5;
    }
  }
  if (ppuVar7 == (undefined **)0x0) {
LAB_10a695bd4:
    pcStack_88 = FUN_10a6aae50;
    ppuStack_80 = &PTR_DAT_110c0db30;
    param_2 = &pcStack_88;
    pppuStack_78 = param_1;
    FUN_10a6056e8(*(long *)(param_1[0xc][0x106] + 0x18) + 0x558,param_2);
    pppuVar4 = &ppuStack_80;
    (*(code *)*ppuStack_80)(pppuVar4);
    goto LAB_10a695c18;
  }
LAB_10a695ba8:
  puVar8 = (undefined8 *)ppuVar7[0xb1];
  for (puVar9 = (undefined8 *)ppuVar7[0xb0]; puVar9 != puVar8; puVar9 = puVar9 + 1) {
    param_1[0x17] = (undefined **)*puVar9;
    pppuVar4 = param_1;
    FUN_10a5861f0();
  }
LAB_10a695c18:
  param_1[0x17] = (undefined **)0x0;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_48) {
    ___stack_chk_fail();
    func_0x00010a05253c(&ppuStack_98);
    __Unwind_Resume(pppuVar4);
    auVar12._8_8_ = 0x1c;
    auVar12._0_8_ = &UNK_10f66c379;
    return auVar12;
  }
  auVar11._8_8_ = param_2;
  auVar11._0_8_ = pppuVar4;
  return auVar11;
}



/* Entry: 10a695d04; end: 10a695d97;  */

undefined1  [16] FUN_10a695d04(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x1c;
  auVar1._0_8_ = &UNK_10f66c379;
  return auVar1;
}



/* Entry: 10a695d98; end: 10a695deb;  */

void FUN_10a695d98(undefined8 param_1)

{
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined4 uStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined4 uStack_18;
  
  uStack_58 = 0;
  uStack_50 = 0xffffffff00000001;
  uStack_48 = 0xffffffff;
  puStack_40 = &UNK_10f66b8c1;
  uStack_38 = 0;
  uStack_28 = 0;
  uStack_20 = 0;
  puStack_30 = &UNK_10f66b8c1;
  uStack_18 = 0xffffffff;
  FUN_10a695dec(param_1,&uStack_58);
  FUN_10a6aafa8();
  return;
}



/* Entry: 10a695dec; end: 10a695ec3;  */

/* WARNING: Removing unreachable block (ram,0x00010a695e84) */

undefined1  [16] FUN_10a695dec(undefined8 param_1,long param_2)

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
  func_0x000109887da8(auStack_48,&UNK_10f66c379,0x1c);
  uStack_88 = *(undefined8 *)(param_2 + 8);
  uStack_80 = *(undefined4 *)(param_2 + 0x10);
  uStack_70 = *(undefined8 *)(param_2 + 0x20);
  uStack_78 = *(undefined8 *)(param_2 + 0x18);
  uStack_60 = *(undefined8 *)(param_2 + 0x30);
  uStack_68 = *(undefined8 *)(param_2 + 0x28);
  uStack_58 = *(undefined8 *)(param_2 + 0x38);
  uStack_50 = *(undefined4 *)(param_2 + 0x40);
  puStack_90 = auStack_48;
  FUN_10a6aaeac(param_1,&puStack_90,100);
  auVar2._8_8_ = ppuVar1;
  auVar2._0_8_ = param_1;
  return auVar2;
}



/* Entry: 10a695ec4; end: 10a695f23;  */

void FUN_10a695ec4(long param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  long lVar5;
  undefined8 uStack_70;
  long *plStack_68;
  undefined8 uStack_60;
  long *plStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  byte bStack_30;
  
  if (param_2 != 0) {
    lVar5 = *(long *)(param_2 + 0x158);
    if ((ulong)(*(long *)(param_2 + 0x160) - lVar5) < 0x41) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x10a695f24);
      (*pcVar4)();
    }
    if (((*(byte *)(lVar5 + 0x48) & 1) == 0) && (*(int *)(lVar5 + 0x44) == 1)) {
      FUN_10a76c260(*(undefined8 *)(*(long *)(param_1 + 0x60) + 0x8d8),0x13);
      if ((*(char *)(param_1 + 0x88) == '\x01') && (*(char *)(param_1 + 0x90) == '\x01')) {
        uStack_48 = *(undefined8 *)(param_1 + 0x70);
        uStack_50 = *(undefined8 *)(param_1 + 0x68);
        if (*(long *)(param_1 + 0x70) != 0) {
          plVar1 = (long *)(*(long *)(param_1 + 0x70) + 8);
          do {
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar3) {
              *plVar1 = *plVar1 + 1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
        }
        uStack_38 = *(undefined8 *)(param_1 + 0x80);
        uStack_40 = *(undefined8 *)(param_1 + 0x78);
        if (*(long *)(param_1 + 0x80) != 0) {
          plVar1 = (long *)(*(long *)(param_1 + 0x80) + 0x10);
          do {
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar3) {
              *plVar1 = *plVar1 + 1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
        }
        bStack_30 = 1;
        func_0x00010a58dd14(&uStack_70);
        plStack_58 = plStack_68;
        uStack_60 = uStack_70;
        if (plStack_68 != (long *)0x0) {
          plVar1 = plStack_68 + 2;
          do {
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar3) {
              *plVar1 = *plVar1 + 1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          plVar1 = plStack_68 + 1;
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
            (**(code **)(*plStack_68 + 0x10))(plStack_68);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_68);
          }
        }
        if ((bStack_30 & 1) == 0) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x10a58630c);
          (*pcVar4)();
        }
        FUN_10a58dda4(uStack_50,&uStack_60);
        if (plStack_58 != (long *)0x0) {
          __ZNSt3__119__shared_weak_count14__release_weakEv();
        }
        if (bStack_30 == 1) {
          FUN_10a688c1c(&uStack_50);
        }
      }
      return;
    }
  }
  return;
}



/* Entry: 10a695f24; end: 10a6960f7;  */

void FUN_10a695f24(undefined8 *param_1,long param_2,undefined8 param_3,long param_4)

{
  long *plVar1;
  undefined8 *puVar2;
  char cVar3;
  bool bVar4;
  long *plVar5;
  long *plVar6;
  long lVar7;
  undefined8 uVar8;
  long *plVar9;
  
  puVar2 = (undefined8 *)(param_2 + 0x60);
  if (param_4 != 0) {
    puVar2 = (undefined8 *)(param_4 + 0xb0);
  }
  uVar8 = *puVar2;
  lVar7 = param_2;
  func_0x00010a0fda30();
  plVar5 = (long *)0x340;
  __Znwm();
  plVar9 = plVar5 + 1;
  plVar5[2] = 0;
  *plVar9 = 0;
  plVar6 = plVar5 + 3;
  *plVar5 = (long)&PTR_FUN_110c0db60;
  plVar5[100] = (long)&PTR_FUN_110c383b8;
  *(undefined2 *)(plVar5 + 0x67) = 0x100;
  plVar5[0x66] = 0;
  plVar5[0x65] = 0;
  FUN_10a589324(plVar6,&PTR_PTR_110c09620,uVar8,lVar7,param_3);
  plVar5[3] = (long)&PTR_FUN_110c09430;
  plVar5[5] = (long)&PTR_FUN_110c094e8;
  plVar5[10] = (long)&PTR_FUN_110c09540;
  plVar5[0x16] = (long)&PTR_FUN_110c09568;
  plVar5[100] = (long)&PTR_FUN_110c095e0;
  lVar7 = plVar5[9];
  if (lVar7 == 0) {
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar4) {
        *plVar9 = *plVar9 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    plVar1 = plVar5 + 2;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = *plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    plVar5[8] = (long)plVar6;
    plVar5[9] = (long)plVar5;
  }
  else {
    if (*(long *)(lVar7 + 8) != -1) goto LAB_10a69608c;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar4) {
        *plVar9 = *plVar9 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    plVar1 = plVar5 + 2;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = *plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    plVar5[8] = (long)plVar6;
    plVar5[9] = (long)plVar5;
    __ZNSt3__119__shared_weak_count14__release_weakEv(lVar7);
  }
  do {
    lVar7 = *plVar9;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar9,0x10);
    if (bVar4) {
      *plVar9 = lVar7 + -1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  if (lVar7 == 0) {
    (**(code **)(*plVar5 + 0x10))(plVar5);
    __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
  }
LAB_10a69608c:
  *(undefined4 *)((long)plVar6 + 0x54) = *(undefined4 *)(param_2 + 0x54);
  *(undefined4 *)(plVar6 + 0x1b) = *(undefined4 *)(param_2 + 0xd8);
  FUN_10a3a754c(plVar6 + 0x18,param_2 + 0xc0);
  *param_1 = plVar6;
  param_1[1] = plVar5;
  return;
}



/* Entry: 10a6960f8; end: 10a696193;  */

undefined1  [16] FUN_10a6960f8(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x1b;
  auVar1._0_8_ = &UNK_10f66c396;
  return auVar1;
}



/* Entry: 10a696194; end: 10a6961e7;  */

void FUN_10a696194(undefined8 param_1)

{
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined4 uStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined4 uStack_18;
  
  uStack_58 = 0;
  uStack_50 = 0xffffffff00000001;
  uStack_48 = 0xffffffff;
  puStack_40 = &UNK_10f66b8c1;
  uStack_38 = 0;
  uStack_28 = 0;
  uStack_20 = 0;
  puStack_30 = &UNK_10f66b8c1;
  uStack_18 = 0xffffffff;
  FUN_10a6961e8(param_1,&uStack_58);
  FUN_10a6ab1f8();
  return;
}



/* Entry: 10a6961e8; end: 10a6962bf;  */

/* WARNING: Removing unreachable block (ram,0x00010a696280) */

undefined1  [16] FUN_10a6961e8(undefined8 param_1,long param_2)

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
  func_0x000109887da8(auStack_48,&UNK_10f66c396,0x1b);
  uStack_88 = *(undefined8 *)(param_2 + 8);
  uStack_80 = *(undefined4 *)(param_2 + 0x10);
  uStack_70 = *(undefined8 *)(param_2 + 0x20);
  uStack_78 = *(undefined8 *)(param_2 + 0x18);
  uStack_60 = *(undefined8 *)(param_2 + 0x30);
  uStack_68 = *(undefined8 *)(param_2 + 0x28);
  uStack_58 = *(undefined8 *)(param_2 + 0x38);
  uStack_50 = *(undefined4 *)(param_2 + 0x40);
  puStack_90 = auStack_48;
  FUN_10a6ab0fc(param_1,&puStack_90,100);
  auVar2._8_8_ = ppuVar1;
  auVar2._0_8_ = param_1;
  return auVar2;
}



/* Entry: 10a6962c0; end: 10a696323;  */

void FUN_10a6962c0(long param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  long lVar5;
  undefined8 uStack_70;
  long *plStack_68;
  undefined8 uStack_60;
  long *plStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  byte bStack_30;
  
  if (param_2 != 0) {
    lVar5 = *(long *)(param_2 + 0x158);
    if ((ulong)(*(long *)(param_2 + 0x160) - lVar5) < 0x41) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x10a696324);
      (*pcVar4)();
    }
    if ((*(char *)(lVar5 + 0x48) == '\x01') && (*(int *)(lVar5 + 0x44) == 1)) {
      FUN_10a76c260(*(undefined8 *)(*(long *)(param_1 + 0x60) + 0x8d8),0x14);
      if ((*(char *)(param_1 + 0x88) == '\x01') && (*(char *)(param_1 + 0x90) == '\x01')) {
        uStack_48 = *(undefined8 *)(param_1 + 0x70);
        uStack_50 = *(undefined8 *)(param_1 + 0x68);
        if (*(long *)(param_1 + 0x70) != 0) {
          plVar1 = (long *)(*(long *)(param_1 + 0x70) + 8);
          do {
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar3) {
              *plVar1 = *plVar1 + 1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
        }
        uStack_38 = *(undefined8 *)(param_1 + 0x80);
        uStack_40 = *(undefined8 *)(param_1 + 0x78);
        if (*(long *)(param_1 + 0x80) != 0) {
          plVar1 = (long *)(*(long *)(param_1 + 0x80) + 0x10);
          do {
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar3) {
              *plVar1 = *plVar1 + 1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
        }
        bStack_30 = 1;
        func_0x00010a58dd14(&uStack_70);
        plStack_58 = plStack_68;
        uStack_60 = uStack_70;
        if (plStack_68 != (long *)0x0) {
          plVar1 = plStack_68 + 2;
          do {
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar3) {
              *plVar1 = *plVar1 + 1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          plVar1 = plStack_68 + 1;
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
            (**(code **)(*plStack_68 + 0x10))(plStack_68);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_68);
          }
        }
        if ((bStack_30 & 1) == 0) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x10a58630c);
          (*pcVar4)();
        }
        FUN_10a58dda4(uStack_50,&uStack_60);
        if (plStack_58 != (long *)0x0) {
          __ZNSt3__119__shared_weak_count14__release_weakEv();
        }
        if (bStack_30 == 1) {
          FUN_10a688c1c(&uStack_50);
        }
      }
      return;
    }
  }
  return;
}



/* Entry: 10a696324; end: 10a6964f7;  */

void FUN_10a696324(undefined8 *param_1,long param_2,undefined8 param_3,long param_4)

{
  long *plVar1;
  undefined8 *puVar2;
  char cVar3;
  bool bVar4;
  long *plVar5;
  long *plVar6;
  long lVar7;
  undefined8 uVar8;
  long *plVar9;
  
  puVar2 = (undefined8 *)(param_2 + 0x60);
  if (param_4 != 0) {
    puVar2 = (undefined8 *)(param_4 + 0xb0);
  }
  uVar8 = *puVar2;
  lVar7 = param_2;
  func_0x00010a0fda30();
  plVar5 = (long *)0x340;
  __Znwm();
  plVar9 = plVar5 + 1;
  plVar5[2] = 0;
  *plVar9 = 0;
  plVar6 = plVar5 + 3;
  *plVar5 = (long)&PTR_FUN_110c0dbb0;
  plVar5[100] = (long)&PTR_FUN_110c383b8;
  *(undefined2 *)(plVar5 + 0x67) = 0x100;
  plVar5[0x66] = 0;
  plVar5[0x65] = 0;
  FUN_10a589324(plVar6,&PTR_PTR_110c09860,uVar8,lVar7,param_3);
  plVar5[3] = (long)&PTR_FUN_110c09670;
  plVar5[5] = (long)&PTR_FUN_110c09728;
  plVar5[10] = (long)&PTR_FUN_110c09780;
  plVar5[0x16] = (long)&PTR_FUN_110c097a8;
  plVar5[100] = (long)&PTR_FUN_110c09820;
  lVar7 = plVar5[9];
  if (lVar7 == 0) {
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar4) {
        *plVar9 = *plVar9 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    plVar1 = plVar5 + 2;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = *plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    plVar5[8] = (long)plVar6;
    plVar5[9] = (long)plVar5;
  }
  else {
    if (*(long *)(lVar7 + 8) != -1) goto LAB_10a69648c;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar4) {
        *plVar9 = *plVar9 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    plVar1 = plVar5 + 2;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = *plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    plVar5[8] = (long)plVar6;
    plVar5[9] = (long)plVar5;
    __ZNSt3__119__shared_weak_count14__release_weakEv(lVar7);
  }
  do {
    lVar7 = *plVar9;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar9,0x10);
    if (bVar4) {
      *plVar9 = lVar7 + -1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  if (lVar7 == 0) {
    (**(code **)(*plVar5 + 0x10))(plVar5);
    __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
  }
LAB_10a69648c:
  *(undefined4 *)((long)plVar6 + 0x54) = *(undefined4 *)(param_2 + 0x54);
  *(undefined4 *)(plVar6 + 0x1b) = *(undefined4 *)(param_2 + 0xd8);
  FUN_10a3a754c(plVar6 + 0x18,param_2 + 0xc0);
  *param_1 = plVar6;
  param_1[1] = plVar5;
  return;
}



/* Entry: 10a6964f8; end: 10a696587;  */

undefined1  [16] FUN_10a6964f8(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x1a;
  auVar1._0_8_ = &UNK_10f66c3b2;
  return auVar1;
}



/* Entry: 10a696588; end: 10a696633;  */

void FUN_10a696588(undefined8 param_1)

{
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined4 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  puStack_98 = (undefined *)0x0;
  uStack_90 = 0xffffffff00000001;
  uStack_88 = CONCAT44(uStack_88._4_4_,0xffffffff);
  puStack_80 = &UNK_10f66b8c1;
  uStack_78 = 0;
  uStack_68 = 0;
  uStack_60 = 0;
  puStack_70 = &UNK_10f66b8c1;
  uStack_58 = CONCAT44(uStack_58._4_4_,0xffffffff);
  FUN_10a696634(param_1,&puStack_98);
  uStack_90 = 0;
  uStack_88 = 0;
  puStack_98 = &UNK_10f66b8cb;
  uStack_78 = 0xffffffffffffffff;
  puStack_80 = (undefined *)0x100000064;
  puStack_70 = &UNK_10f66b8c1;
  uStack_60 = 0;
  uStack_68 = 0;
  uStack_50 = 0;
  uStack_58 = 0;
  uStack_48 = 0xffffffff;
  uStack_40 = 0;
  uStack_38 = 0;
  FUN_10a6ab448();
  FUN_10a6ab5b4(param_1);
  return;
}



/* Entry: 10a696634; end: 10a69670b;  */

/* WARNING: Removing unreachable block (ram,0x00010a6966cc) */

undefined1  [16] FUN_10a696634(undefined8 param_1,long param_2)

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
  func_0x000109887da8(auStack_48,&UNK_10f66c3b2,0x1a);
  uStack_88 = *(undefined8 *)(param_2 + 8);
  uStack_80 = *(undefined4 *)(param_2 + 0x10);
  uStack_70 = *(undefined8 *)(param_2 + 0x20);
  uStack_78 = *(undefined8 *)(param_2 + 0x18);
  uStack_60 = *(undefined8 *)(param_2 + 0x30);
  uStack_68 = *(undefined8 *)(param_2 + 0x28);
  uStack_58 = *(undefined8 *)(param_2 + 0x38);
  uStack_50 = *(undefined4 *)(param_2 + 0x40);
  puStack_90 = auStack_48;
  FUN_10a6ab34c(param_1,&puStack_90,100);
  auVar2._8_8_ = ppuVar1;
  auVar2._0_8_ = param_1;
  return auVar2;
}



/* Entry: 10a69670c; end: 10a696723;  */

void FUN_10a69670c(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  long lVar5;
  undefined8 uStack_70;
  long *plStack_68;
  undefined8 uStack_60;
  long *plStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  byte bStack_30;
  
  *(float *)(param_1 + 0x94) =
       (float)*(double *)(*(long *)(*(long *)(param_1 + 0x60) + 0x850) + 0x10);
  if ((*(char *)(param_1 + 0x88) == '\x01') && (*(char *)(param_1 + 0x90) == '\x01')) {
    uStack_48 = *(undefined8 *)(param_1 + 0x70);
    uStack_50 = *(undefined8 *)(param_1 + 0x68);
    if (*(long *)(param_1 + 0x70) != 0) {
      plVar1 = (long *)(*(long *)(param_1 + 0x70) + 8);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = *plVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    uStack_38 = *(undefined8 *)(param_1 + 0x80);
    uStack_40 = *(undefined8 *)(param_1 + 0x78);
    if (*(long *)(param_1 + 0x80) != 0) {
      plVar1 = (long *)(*(long *)(param_1 + 0x80) + 0x10);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = *plVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    bStack_30 = 1;
    func_0x00010a58dd14(&uStack_70);
    plStack_58 = plStack_68;
    uStack_60 = uStack_70;
    if (plStack_68 != (long *)0x0) {
      plVar1 = plStack_68 + 2;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = *plVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      plVar1 = plStack_68 + 1;
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
        (**(code **)(*plStack_68 + 0x10))(plStack_68);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_68);
      }
    }
    if ((bStack_30 & 1) == 0) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x10a58630c);
      (*pcVar4)();
    }
    FUN_10a58dda4(uStack_50,&uStack_60);
    if (plStack_58 != (long *)0x0) {
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
    if (bStack_30 == 1) {
      FUN_10a688c1c(&uStack_50);
    }
  }
  return;
}



/* Entry: 10a696724; end: 10a696853;  */

void FUN_10a696724(undefined8 *param_1,long param_2,long param_3,long param_4)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  long *plVar7;
  long lVar8;
  
  plVar4 = (long *)(param_2 + 0x60);
  if (param_4 != 0) {
    plVar4 = (long *)(param_4 + 0xb0);
  }
  lVar8 = *plVar4;
  lVar6 = param_2;
  func_0x00010a0fda30();
  plVar4 = (long *)0xb0;
  __Znwm();
  plVar5 = plVar4 + 1;
  *plVar5 = 0;
  plVar4[2] = 0;
  *plVar4 = (long)&PTR_FUN_110c0dc00;
  plVar7 = plVar4 + 3;
  *plVar7 = (long)&PTR_FUN_110c098a8;
  *(undefined1 *)(plVar4 + 4) = 0;
  plVar4[6] = 0;
  plVar4[7] = 0;
  plVar4[0xb] = lVar6;
  plVar4[0xc] = param_3;
  *(undefined1 *)(plVar4 + 0xd) = 0;
  plVar4[0xf] = lVar8;
  *(undefined1 *)(plVar4 + 0x10) = 0;
  *(undefined1 *)(plVar4 + 0x14) = 0;
  *(undefined1 *)(plVar4 + 0x15) = 1;
  plVar4[5] = (long)&PTR_FUN_110c09940;
  plVar4[10] = (long)&PTR_FUN_110c09998;
  *(undefined4 *)((long)plVar4 + 0xac) = 0;
  *(undefined8 *)((long)plVar4 + 0x6c) = 0x400000032;
  do {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
    if (bVar3) {
      *plVar5 = *plVar5 + 1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  plVar1 = plVar4 + 2;
  do {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar3) {
      *plVar1 = *plVar1 + 1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  plVar4[8] = (long)plVar7;
  plVar4[9] = (long)plVar4;
  do {
    lVar6 = *plVar5;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
    if (bVar3) {
      *plVar5 = lVar6 + -1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (lVar6 == 0) {
    (**(code **)(*plVar4 + 0x10))(plVar4);
    __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
  }
  *(undefined4 *)((long)plVar4 + 0x6c) = *(undefined4 *)(param_2 + 0x54);
  *param_1 = plVar7;
  param_1[1] = plVar4;
  return;
}



/* Entry: 10a696854; end: 10a6968d7;  */

undefined1  [16] FUN_10a696854(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x17;
  auVar1._0_8_ = &UNK_10f66379d;
  return auVar1;
}



/* Entry: 10a6968d8; end: 10a696bdf;  */

void FUN_10a6968d8(ulong param_1)

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
  
  func_0x000109887da8(appuStack_c8,&UNK_10f66379d,0x17);
  pppuVar1 = (undefined8 ***)appuStack_c8[0];
  if (-1 < cStack_b1) {
    pppuVar1 = appuStack_c8;
  }
  *(undefined ***)(param_1 + 0x1b0) = &PTR_DAT_110c0bfa0;
  pppuVar2 = (undefined8 ***)&UNK_10f66b8c1;
  if (pppuVar1 != (undefined8 ***)0x0) {
    pppuVar2 = pppuVar1;
  }
  func_0x000107c2c4dc(param_1 + 0x1b8,pppuVar2);
  uStack_98 = 0;
  uStack_90 = 0;
  uStack_80 = 0x4ffffffff;
  uStack_88 = 0x100000064;
  uStack_70 = 0;
  uStack_78 = 0;
  uStack_60 = 0;
  uStack_68 = 0;
  uStack_58 = 0x175;
  uStack_50 = CONCAT44(uStack_50._4_4_,0xffffffff);
  uStack_48 = 0;
  uStack_40 = 0;
  ppuStack_a0 = pppuVar1;
  func_0x00010a052690(param_1 + 0x168,&ppuStack_a0);
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,4);
  if ((uVar7 & 1) == 0) {
    ppuStack_b0 = &PTR_DAT_110c0bfa0;
    uStack_a8 = 0;
    ppuStack_a0 = (undefined8 **)&PTR_DAT_110bf6810;
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
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a696bc0;
    FUN_10a054dac(param_1,&DAT_10f32f051,FUN_10a6ab6b0,3,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a0605c4(param_1,"data",FUN_10a6ac030,0);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a0605c4(param_1,&DAT_10f2f86cd,FUN_10a6ac190,0);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a0605c4(param_1,&DAT_10f6389e8,FUN_10a6ac270,0);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a0605c4(param_1,&UNK_10f66bb81,FUN_10a6ac350,0);
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
      FUN_10a054234(param_1,&ppuStack_a0,param_1 + 0x1b8,&UNK_10f66379d,0x17);
      FUN_10a05431c(param_1);
    }
    return;
  }
LAB_10a696bc0:
                    /* WARNING: Does not return */
  pcVar6 = (code *)SoftwareBreakpoint(1,0x10a696bc4);
  (*pcVar6)();
}



/* Entry: 10a696be0; end: 10a696c9b;  */

void FUN_10a696be0(undefined8 *param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  *(undefined1 *)(param_1 + 1) = 0;
  param_1[4] = 0;
  param_1[3] = 0;
  param_1[6] = 0;
  param_1[5] = 0;
  param_1[8] = param_3;
  param_1[9] = param_4;
  *(undefined1 *)(param_1 + 10) = 0;
  *(undefined8 *)((long)param_1 + 0x54) = 0x800000000;
  param_1[0xc] = param_2;
  *(undefined1 *)(param_1 + 0xd) = 0;
  *(undefined1 *)(param_1 + 0x11) = 0;
  *(undefined1 *)(param_1 + 0x12) = 1;
  *(undefined1 *)((long)param_1 + 0xb1) = 1;
  *param_1 = &PTR_FUN_110c099b8;
  param_1[2] = &PTR_DAT_110c09a58;
  param_1[7] = &PTR_DAT_110c09ab0;
  param_1[0x13] = &PTR_DAT_110c09ad0;
  param_1[0x14] = 0;
  param_1[0x18] = 0;
  param_1[0x17] = 0;
  param_1[0x1a] = 0;
  param_1[0x19] = 0;
  param_1[0x1c] = 0;
  param_1[0x1b] = 0;
  param_1[0x1d] = 0x32aaaba7;
  param_1[0x1f] = 0;
  param_1[0x1e] = 0;
  param_1[0x21] = 0;
  param_1[0x20] = 0;
  param_1[0x23] = 0;
  param_1[0x22] = 0;
  param_1[0x25] = 0;
  param_1[0x24] = 0;
  param_1[0x27] = 0;
  param_1[0x26] = 0;
  param_1[0x29] = 0;
  param_1[0x28] = 0;
  param_1[0x2b] = 0;
  param_1[0x2a] = 0;
  *(undefined4 *)(param_1 + 0x2c) = 0;
  param_1[0x2f] = 0;
  param_1[0x30] = 0;
  param_1[0x2e] = 0;
  *(undefined1 *)(param_1 + 0x31) = 0;
  param_1[0x33] = 0;
  param_1[0x32] = 0;
  param_1[0x35] = 0;
  param_1[0x34] = 0;
  param_1[0x36] = 0;
  *(undefined1 *)(param_1 + 0x16) = 1;
  param_1[0x15] = param_2;
  if (param_2 != 0) {
    param_1[0x14] = *(undefined8 *)(*(long *)(param_2 + 0x850) + 0x2c);
  }
  return;
}



/* Entry: 10a696c9c; end: 10a696f0b;  */

undefined8 * FUN_10a696c9c(undefined8 *param_1)

{
  ulong uVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long *plVar5;
  undefined8 *puVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  long lVar11;
  
  *param_1 = &PTR_FUN_110c099b8;
  param_1[2] = &PTR_DAT_110c09a58;
  param_1[7] = &PTR_DAT_110c09ab0;
  param_1[0x13] = &PTR_DAT_110c09ad0;
  plVar4 = (long *)param_1[0x33];
  if ((plVar4 != (long *)0x0) && (__ZNSt3__119__shared_weak_count4lockEv(), plVar4 != (long *)0x0))
  {
    plVar5 = (long *)param_1[0x32];
    if (plVar5 != (long *)0x0) {
      (**(code **)(*plVar5 + 8))(plVar5,param_1 + 0x34);
    }
    plVar5 = plVar4 + 1;
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
      (**(code **)(*plVar4 + 0x10))(plVar4);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
    }
  }
  if (*(char *)((long)param_1 + 0x1b7) < '\0') {
    __ZdlPv(param_1[0x34]);
  }
  if (param_1[0x33] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  if (*(char *)((long)param_1 + 0x187) < '\0') {
    __ZdlPv(param_1[0x2e]);
  }
  if ((3 < *(int *)(param_1 + 0x2c)) && ((undefined8 *)param_1[0x2d] != (undefined8 *)0x0)) {
    (*(code *)**(undefined8 **)param_1[0x2d])();
  }
  puVar10 = (undefined8 *)param_1[0x26];
  puVar6 = (undefined8 *)param_1[0x27];
  puVar9 = puVar10;
  if (puVar6 != puVar10) {
    uVar1 = param_1[0x29];
    plVar4 = puVar10 + uVar1 / 0x2a;
    lVar7 = *plVar4 + (uVar1 % 0x2a) * 0x60;
    lVar11 = puVar10[(param_1[0x2a] + uVar1) / 0x2a] + ((param_1[0x2a] + uVar1) % 0x2a) * 0x60;
    puVar9 = puVar6;
    if (lVar7 != lVar11) {
      do {
        func_0x00010a69c380(lVar7);
        lVar7 = lVar7 + 0x60;
        if (lVar7 - *plVar4 == 0xfc0) {
          plVar4 = plVar4 + 1;
          lVar7 = *plVar4;
        }
      } while (lVar7 != lVar11);
      puVar10 = (undefined8 *)param_1[0x26];
      puVar6 = (undefined8 *)param_1[0x27];
      puVar9 = puVar6;
    }
  }
  param_1[0x2a] = 0;
  lVar7 = (long)puVar9 - (long)puVar10;
  while (uVar1 = lVar7 >> 3, 2 < uVar1) {
    __ZdlPv(*puVar10);
    puVar6 = (undefined8 *)param_1[0x27];
    puVar10 = (undefined8 *)(param_1[0x26] + 8);
    param_1[0x26] = puVar10;
    puVar9 = puVar6;
    lVar7 = (long)puVar6 - (long)puVar10;
  }
  if (uVar1 == 1) {
    uVar8 = 0x15;
  }
  else {
    if (uVar1 != 2) goto LAB_10a696e84;
    uVar8 = 0x2a;
  }
  param_1[0x29] = uVar8;
LAB_10a696e84:
  if (puVar10 != puVar9) {
    do {
      puVar6 = puVar10 + 1;
      __ZdlPv(*puVar10);
      puVar10 = puVar6;
    } while (puVar6 != puVar9);
    puVar9 = (undefined8 *)param_1[0x26];
    puVar6 = (undefined8 *)param_1[0x27];
  }
  if (puVar6 != puVar9) {
    param_1[0x27] = (long)puVar6 + ((long)puVar9 + (7 - (long)puVar6) & 0xfffffffffffffff8U);
  }
  if (param_1[0x25] != 0) {
    __ZdlPv();
  }
  __ZNSt3__15mutexD1Ev(param_1 + 0x1d);
  if (*(char *)((long)param_1 + 0xe7) < '\0') {
    __ZdlPv(param_1[0x1a]);
  }
  if (*(char *)((long)param_1 + 0xcf) < '\0') {
    __ZdlPv(param_1[0x17]);
  }
  *param_1 = &PTR_DAT_110bf4248;
  param_1[2] = &PTR_DAT_110bf42e0;
  param_1[7] = &PTR_DAT_110bf4338;
  if (*(char *)(param_1 + 0x11) == '\x01') {
    FUN_10a688c1c(param_1 + 0xd);
  }
  if (param_1[6] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  param_1[2] = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + 3);
  return param_1;
}



/* Entry: 10a696f0c; end: 10a696f27;  */

undefined8 * FUN_10a696f0c(undefined8 *param_1)

{
  ulong uVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long *plVar5;
  undefined8 *puVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  long lVar11;
  
  *param_1 = &PTR_FUN_110c099b8;
  param_1[2] = &PTR_DAT_110c09a58;
  param_1[7] = &PTR_DAT_110c09ab0;
  param_1[0x13] = &PTR_DAT_110c09ad0;
  plVar4 = (long *)param_1[0x33];
  if ((plVar4 != (long *)0x0) && (__ZNSt3__119__shared_weak_count4lockEv(), plVar4 != (long *)0x0))
  {
    plVar5 = (long *)param_1[0x32];
    if (plVar5 != (long *)0x0) {
      (**(code **)(*plVar5 + 8))(plVar5,param_1 + 0x34);
    }
    plVar5 = plVar4 + 1;
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
      (**(code **)(*plVar4 + 0x10))(plVar4);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
    }
  }
  if (*(char *)((long)param_1 + 0x1b7) < '\0') {
    __ZdlPv(param_1[0x34]);
  }
  if (param_1[0x33] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  if (*(char *)((long)param_1 + 0x187) < '\0') {
    __ZdlPv(param_1[0x2e]);
  }
  if ((3 < *(int *)(param_1 + 0x2c)) && ((undefined8 *)param_1[0x2d] != (undefined8 *)0x0)) {
    (*(code *)**(undefined8 **)param_1[0x2d])();
  }
  puVar10 = (undefined8 *)param_1[0x26];
  puVar6 = (undefined8 *)param_1[0x27];
  puVar9 = puVar10;
  if (puVar6 != puVar10) {
    uVar1 = param_1[0x29];
    plVar4 = puVar10 + uVar1 / 0x2a;
    lVar7 = *plVar4 + (uVar1 % 0x2a) * 0x60;
    lVar11 = puVar10[(param_1[0x2a] + uVar1) / 0x2a] + ((param_1[0x2a] + uVar1) % 0x2a) * 0x60;
    puVar9 = puVar6;
    if (lVar7 != lVar11) {
      do {
        func_0x00010a69c380(lVar7);
        lVar7 = lVar7 + 0x60;
        if (lVar7 - *plVar4 == 0xfc0) {
          plVar4 = plVar4 + 1;
          lVar7 = *plVar4;
        }
      } while (lVar7 != lVar11);
      puVar10 = (undefined8 *)param_1[0x26];
      puVar6 = (undefined8 *)param_1[0x27];
      puVar9 = puVar6;
    }
  }
  param_1[0x2a] = 0;
  lVar7 = (long)puVar9 - (long)puVar10;
  while (uVar1 = lVar7 >> 3, 2 < uVar1) {
    __ZdlPv(*puVar10);
    puVar6 = (undefined8 *)param_1[0x27];
    puVar10 = (undefined8 *)(param_1[0x26] + 8);
    param_1[0x26] = puVar10;
    puVar9 = puVar6;
    lVar7 = (long)puVar6 - (long)puVar10;
  }
  if (uVar1 == 1) {
    uVar8 = 0x15;
  }
  else {
    if (uVar1 != 2) goto LAB_10a696e84;
    uVar8 = 0x2a;
  }
  param_1[0x29] = uVar8;
LAB_10a696e84:
  if (puVar10 != puVar9) {
    do {
      puVar6 = puVar10 + 1;
      __ZdlPv(*puVar10);
      puVar10 = puVar6;
    } while (puVar6 != puVar9);
    puVar9 = (undefined8 *)param_1[0x26];
    puVar6 = (undefined8 *)param_1[0x27];
  }
  if (puVar6 != puVar9) {
    param_1[0x27] = (long)puVar6 + ((long)puVar9 + (7 - (long)puVar6) & 0xfffffffffffffff8U);
  }
  if (param_1[0x25] != 0) {
    __ZdlPv();
  }
  __ZNSt3__15mutexD1Ev(param_1 + 0x1d);
  if (*(char *)((long)param_1 + 0xe7) < '\0') {
    __ZdlPv(param_1[0x1a]);
  }
  if (*(char *)((long)param_1 + 0xcf) < '\0') {
    __ZdlPv(param_1[0x17]);
  }
  *param_1 = &PTR_DAT_110bf4248;
  param_1[2] = &PTR_DAT_110bf42e0;
  param_1[7] = &PTR_DAT_110bf4338;
  if (*(char *)(param_1 + 0x11) == '\x01') {
    FUN_10a688c1c(param_1 + 0xd);
  }
  if (param_1[6] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  param_1[2] = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + 3);
  return param_1;
}



/* Entry: 10a696f28; end: 10a696f83;  */

void FUN_10a696f28(void)

{
  FUN_10a696c9c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a696f84; end: 10a6970bb;  */

void FUN_10a696f84(long *param_1,long param_2,undefined8 param_3,long param_4)

{
  long *plVar1;
  long *plVar2;
  undefined8 *puVar3;
  char cVar4;
  bool bVar5;
  long *plVar6;
  long lVar7;
  undefined8 uVar8;
  long *plVar9;
  
  puVar3 = (undefined8 *)(param_2 + 0x60);
  if (param_4 != 0) {
    puVar3 = (undefined8 *)(param_4 + 0xb0);
  }
  uVar8 = *puVar3;
  lVar7 = param_2;
  func_0x00010a0fda30();
  plVar6 = (long *)0x1d0;
  __Znwm();
  plVar9 = plVar6 + 1;
  *plVar9 = 0;
  plVar6[2] = 0;
  *plVar6 = (long)&PTR_FUN_110c0dc50;
  plVar1 = plVar6 + 3;
  FUN_10a696be0(plVar1,uVar8,lVar7,param_3);
  if (plVar6[9] == 0) {
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar5) {
        *plVar9 = *plVar9 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    plVar2 = plVar6 + 2;
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar5) {
        *plVar2 = *plVar2 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    plVar6[8] = (long)plVar1;
    plVar6[9] = (long)plVar6;
  }
  else {
    if (*(long *)(plVar6[9] + 8) != -1) goto LAB_10a697098;
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar5) {
        *plVar9 = *plVar9 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    plVar2 = plVar6 + 2;
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar5) {
        *plVar2 = *plVar2 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    plVar6[8] = (long)plVar1;
    plVar6[9] = (long)plVar6;
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  do {
    lVar7 = *plVar9;
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar9,0x10);
    if (bVar5) {
      *plVar9 = lVar7 + -1;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  if (lVar7 == 0) {
    (**(code **)(*plVar6 + 0x10))(plVar6);
    __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
  }
LAB_10a697098:
  *(undefined4 *)((long)plVar6 + 0x6c) = *(undefined4 *)(param_2 + 0x54);
  *param_1 = (long)plVar1;
  param_1[1] = (long)plVar6;
  return;
}



/* Entry: 10a6970bc; end: 10a697633;  */

/* WARNING: Possible PIC construction at 0x000100033dfc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010a697188: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100033e00) */

void FUN_10a6970bc(long *******param_1)

{
  char cVar1;
  bool bVar2;
  undefined8 *******pppppppuVar3;
  long *******ppppppplVar4;
  long ****pppplVar5;
  long *******ppppppplVar6;
  long ******pppppplVar7;
  undefined8 *puVar8;
  undefined8 **ppuVar9;
  long *******ppppppplVar10;
  long *******extraout_x8;
  long ******pppppplVar11;
  long *******ppppppplVar12;
  long *******ppppppplVar13;
  long *****ppppplVar14;
  long *******ppppppplVar15;
  undefined8 *puStack_1c8;
  undefined8 uStack_1c0;
  long lStack_1b8;
  undefined8 ******ppppppuStack_1b0;
  undefined8 *puStack_1a8;
  undefined8 *puStack_1a0;
  long ******pppppplStack_190;
  long ******pppppplStack_188;
  long ******pppppplStack_180;
  long ***ppplStack_178;
  long ***ppplStack_170;
  long ******pppppplStack_160;
  long ******pppppplStack_158;
  long ******pppppplStack_150;
  long ******pppppplStack_148;
  long alStack_140 [7];
  undefined8 uStack_108;
  code *pcStack_100;
  undefined **ppuStack_f8;
  long *****ppppplStack_f0;
  long ******pppppplStack_e8;
  long ******pppppplStack_c0;
  long ******pppppplStack_b8;
  undefined7 uStack_b0;
  undefined1 uStack_a9;
  undefined8 uStack_78;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppppppplVar6 = param_1;
  if ((param_1[0xc] != (long ******)0x0) &&
     (ppppplVar14 = param_1[0xc][0x20], ppppplVar14 != (long *****)0x0)) {
    pppplVar5 = ppppplVar14[0x39];
    (*(code *)(*pppplVar5)[0xc])();
    ppppppplVar6 = (long *******)pppplVar5[1];
    if ((ppppppplVar6 != (long *******)0x0) &&
       (__ZNSt3__119__shared_weak_count4lockEv(), pppppplStack_158 = (long ******)ppppppplVar6,
       ppppppplVar6 != (long *******)0x0)) {
      ppppppplVar13 = (long *******)*pppplVar5;
      pppppplStack_160 = (long ******)ppppppplVar13;
      if (ppppppplVar13 != (long *******)0x0) {
        ppppppplVar12 = ppppppplVar6 + 2;
        do {
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(ppppppplVar12,0x10);
          if (bVar2) {
            *ppppppplVar12 = (long ******)((long)*ppppppplVar12 + 1);
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
        pppppplVar7 = param_1[0x33];
        param_1[0x32] = (long ******)ppppppplVar13;
        param_1[0x33] = (long ******)ppppppplVar6;
        if (pppppplVar7 != (long ******)0x0) {
          __ZNSt3__119__shared_weak_count14__release_weakEv();
        }
        if (*(char *)((long)ppppplVar14 + 0x21f) < '\0') {
          pppppplVar7 = (long ******)ppppplVar14[0x41];
          pppppplVar11 = (long ******)ppppplVar14[0x42];
          ppppppplVar6 = &pppppplStack_180;
          goto code_r0x000100033dac;
        }
        ppplStack_178 = (long ***)ppppplVar14[0x42];
        pppppplStack_180 = (long ******)ppppplVar14[0x41];
        ppplStack_170 = (long ***)ppppplVar14[0x43];
        pppppplVar7 = param_1[6];
        if (pppppplVar7 == (long ******)0x0) {
LAB_10a697264:
          pppppplVar7 = (long ******)0x0;
          ppppppplVar12 = (long *******)0x0;
        }
        else {
          pppppplVar11 = pppppplVar7 + 2;
          do {
            cVar1 = '\x01';
            bVar2 = (bool)ExclusiveMonitorPass(pppppplVar11,0x10);
            if (bVar2) {
              *pppppplVar11 = (long *****)((long)*pppppplVar11 + 1);
              cVar1 = ExclusiveMonitorsStatus();
            }
          } while (cVar1 != '\0');
          ppppplVar14 = pppppplVar7[1];
          __ZNSt3__119__shared_weak_count14__release_weakEv();
          if (ppppplVar14 == (long *****)0xffffffffffffffff) goto LAB_10a697264;
          (*(code *)(*param_1)[10])(&pppppplStack_c0,param_1);
          ppppppplVar12 = (long *******)pppppplStack_b8;
          pppppplVar7 = pppppplStack_c0;
          if ((long *******)pppppplStack_b8 != (long *******)0x0) {
            ppppppplVar6 = (long *******)(pppppplStack_b8 + 1);
            do {
              cVar1 = '\x01';
              bVar2 = (bool)ExclusiveMonitorPass(ppppppplVar6,0x10);
              if (bVar2) {
                *ppppppplVar6 = (long ******)((long)*ppppppplVar6 + 1);
                cVar1 = ExclusiveMonitorsStatus();
              }
            } while (cVar1 != '\0');
            if ((long *******)pppppplStack_b8 != (long *******)0x0) {
              ppppppplVar10 = (long *******)(pppppplStack_b8 + 1);
              do {
                pppppplVar11 = *ppppppplVar10;
                cVar1 = '\x01';
                bVar2 = (bool)ExclusiveMonitorPass(ppppppplVar10,0x10);
                if (bVar2) {
                  *ppppppplVar10 = (long ******)((long)pppppplVar11 + -1);
                  cVar1 = ExclusiveMonitorsStatus();
                }
              } while (cVar1 != '\0');
              if (pppppplVar11 == (long ******)0x0) {
                (*(code *)(*pppppplStack_b8)[2])(pppppplStack_b8);
                __ZNSt3__119__shared_weak_count14__release_weakEv(pppppplStack_b8);
              }
            }
            ppppppplVar10 = (long *******)(pppppplStack_b8 + 2);
            do {
              cVar1 = '\x01';
              bVar2 = (bool)ExclusiveMonitorPass(ppppppplVar10,0x10);
              if (bVar2) {
                *ppppppplVar10 = (long ******)((long)*ppppppplVar10 + 1);
                cVar1 = ExclusiveMonitorsStatus();
              }
            } while (cVar1 != '\0');
            do {
              pppppplVar11 = *ppppppplVar6;
              cVar1 = '\x01';
              bVar2 = (bool)ExclusiveMonitorPass(ppppppplVar6,0x10);
              if (bVar2) {
                *ppppppplVar6 = (long ******)((long)pppppplVar11 + -1);
                cVar1 = ExclusiveMonitorsStatus();
              }
            } while (cVar1 != '\0');
            if (pppppplVar11 == (long ******)0x0) {
              (*(code *)(*pppppplStack_b8)[2])(pppppplStack_b8);
              __ZNSt3__119__shared_weak_count14__release_weakEv(pppppplStack_b8);
            }
          }
        }
        puVar8 = (undefined8 *)0x28;
        __Znwm();
        lStack_1b8 = -0x7fffffffffffffd8;
        uStack_1c0 = 0x26;
        puVar8[1] = 0x6976697463656e6e;
        *puVar8 = 0x6f632f2f3a707061;
        puVar8[3] = 0x5f6567617373656d;
        puVar8[2] = 0x5f736e656c2f7974;
        *(undefined8 *)((long)puVar8 + 0x1e) = 0x2f746e6576655f65;
        *(undefined1 *)((long)puVar8 + 0x26) = 0;
        pppplVar5 = (long ****)ppplStack_178;
        ppppppplVar6 = (long *******)pppppplStack_180;
        if (-1 < (long)ppplStack_170) {
          pppplVar5 = (long ****)((ulong)ppplStack_170 >> 0x38);
          ppppppplVar6 = &pppppplStack_180;
        }
        ppuVar9 = &puStack_1c8;
        puStack_1c8 = puVar8;
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                  (ppuVar9,ppppppplVar6,pppplVar5);
        puStack_1a8 = ppuVar9[1];
        ppppppuStack_1b0 = (undefined8 ******)*ppuVar9;
        puStack_1a0 = ppuVar9[2];
        ppuVar9[1] = (undefined8 *)0x0;
        ppuVar9[2] = (undefined8 *)0x0;
        *ppuVar9 = (undefined8 *)0x0;
        FUN_10a3bf120(&pppppplStack_150);
        if (ppppppplVar12 != (long *******)0x0) {
          ppppppplVar6 = ppppppplVar12 + 2;
          do {
            cVar1 = '\x01';
            bVar2 = (bool)ExclusiveMonitorPass(ppppppplVar6,0x10);
            if (bVar2) {
              *ppppppplVar6 = (long ******)((long)*ppppppplVar6 + 1);
              cVar1 = ExclusiveMonitorsStatus();
            }
          } while (cVar1 != '\0');
        }
        ppppppplVar10 = (long *******)0x138;
        __Znwm();
        pppppplStack_c0 = pppppplStack_150;
        ppppppplVar15 = ppppppplVar10 + 1;
        *ppppppplVar15 = (long ******)0x0;
        ppppppplVar10[2] = (long ******)0x0;
        *ppppppplVar10 = (long ******)&PTR_FUN_110b9f3b0;
        ppppppplVar6 = ppppppplVar10 + 3;
        puVar8 = puStack_1a8;
        pppppppuVar3 = (undefined8 *******)ppppppuStack_1b0;
        if (-1 < (long)puStack_1a0) {
          puVar8 = (undefined8 *)((ulong)puStack_1a0 >> 0x38);
          pppppppuVar3 = &ppppppuStack_1b0;
        }
        pppppplStack_150 = (long ******)0x0;
        pppppplStack_b8 = pppppplStack_148;
        (**(code **)(alStack_140[0] + 0x10))(&uStack_b0,alStack_140);
        uStack_78 = uStack_108;
        pppplVar5 = (long ****)ppplStack_178;
        ppppppplVar4 = (long *******)pppppplStack_180;
        if (-1 < (long)ppplStack_170) {
          pppplVar5 = (long ****)((ulong)ppplStack_170 >> 0x38);
          ppppppplVar4 = &pppppplStack_180;
        }
        pcStack_100 = FUN_10a6ac6b8;
        ppuStack_f8 = &PTR_FUN_110c0dc90;
        ppppplStack_f0 = (long *****)pppppplVar7;
        pppppplStack_e8 = (long ******)ppppppplVar12;
        FUN_10a6ac5b4(ppppppplVar6,pppppppuVar3,puVar8,&DAT_10f2d965b,3,&pppppplStack_c0,
                      ppppppplVar4,pppplVar5);
        (*(code *)*ppuStack_f8)(&ppuStack_f8);
        FUN_10a042634(&pppppplStack_c0);
        pppppplStack_190 = (long ******)ppppppplVar6;
        pppppplStack_188 = (long ******)ppppppplVar10;
        FUN_10a042634(&pppppplStack_150);
        if ((long)puStack_1a0 < 0) {
          __ZdlPv(ppppppuStack_1b0);
        }
        if (lStack_1b8 < 0) {
          __ZdlPv(puStack_1c8);
        }
        do {
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(ppppppplVar15,0x10);
          if (bVar2) {
            *ppppppplVar15 = (long ******)((long)*ppppppplVar15 + 1);
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
        pppppplStack_150 = (long ******)ppppppplVar6;
        pppppplStack_148 = (long ******)ppppppplVar10;
        (*(code *)(*ppppppplVar13)[2])(&pppppplStack_c0,ppppppplVar13,&pppppplStack_150);
        if (*(char *)((long)param_1 + 0x1b7) < '\0') {
          ppppppplVar13 = (long *******)param_1[0x34];
          __ZdlPv();
        }
        ppppppplVar6 = (long *******)pppppplStack_148;
        param_1[0x35] = pppppplStack_b8;
        param_1[0x34] = pppppplStack_c0;
        param_1[0x36] = (long ******)CONCAT17(uStack_a9,uStack_b0);
        uStack_a9 = 0;
        pppppplStack_c0 = (long ******)((ulong)pppppplStack_c0 & 0xffffffffffffff00);
        if ((long *******)pppppplStack_148 != (long *******)0x0) {
          ppppppplVar10 = (long *******)(pppppplStack_148 + 1);
          do {
            pppppplVar7 = *ppppppplVar10;
            cVar1 = '\x01';
            bVar2 = (bool)ExclusiveMonitorPass(ppppppplVar10,0x10);
            if (bVar2) {
              *ppppppplVar10 = (long ******)((long)pppppplVar7 + -1);
              cVar1 = ExclusiveMonitorsStatus();
            }
          } while (cVar1 != '\0');
          if (pppppplVar7 == (long ******)0x0) {
            (*(code *)(*pppppplStack_148)[2])(pppppplStack_148);
            __ZNSt3__119__shared_weak_count14__release_weakEv();
            ppppppplVar13 = ppppppplVar6;
          }
        }
        ppppppplVar6 = (long *******)pppppplStack_188;
        if ((long *******)pppppplStack_188 != (long *******)0x0) {
          ppppppplVar10 = (long *******)(pppppplStack_188 + 1);
          do {
            pppppplVar7 = *ppppppplVar10;
            cVar1 = '\x01';
            bVar2 = (bool)ExclusiveMonitorPass(ppppppplVar10,0x10);
            if (bVar2) {
              *ppppppplVar10 = (long ******)((long)pppppplVar7 + -1);
              cVar1 = ExclusiveMonitorsStatus();
            }
          } while (cVar1 != '\0');
          if (pppppplVar7 == (long ******)0x0) {
            (*(code *)(*pppppplStack_188)[2])(pppppplStack_188);
            __ZNSt3__119__shared_weak_count14__release_weakEv();
            ppppppplVar13 = ppppppplVar6;
          }
        }
        ppppppplVar6 = ppppppplVar13;
        if (ppppppplVar12 != (long *******)0x0) {
          __ZNSt3__119__shared_weak_count14__release_weakEv();
          ppppppplVar6 = ppppppplVar12;
        }
        if ((long)ppplStack_170 < 0) {
          ppppppplVar6 = (long *******)pppppplStack_180;
          __ZdlPv();
        }
        if ((long *******)pppppplStack_158 == (long *******)0x0) goto LAB_10a697528;
      }
      ppppppplVar12 = (long *******)pppppplStack_158;
      ppppppplVar13 = (long *******)(pppppplStack_158 + 1);
      do {
        pppppplVar7 = *ppppppplVar13;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(ppppppplVar13,0x10);
        if (bVar2) {
          *ppppppplVar13 = (long ******)((long)pppppplVar7 + -1);
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (pppppplVar7 == (long ******)0x0) {
        (*(code *)(*pppppplStack_158)[2])(pppppplStack_158);
        __ZNSt3__119__shared_weak_count14__release_weakEv();
        ppppppplVar6 = ppppppplVar12;
      }
    }
  }
LAB_10a697528:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010a05a8c4(&pppppplStack_160);
  __Unwind_Resume();
  cVar1 = *(char *)((long)ppppppplVar6 + 0x187);
  if (cVar1 < '\0') {
    if (ppppppplVar6[0x2f] != (long ******)0x0) goto LAB_10a697640;
  }
  else if (cVar1 != '\0') {
LAB_10a697640:
    *(undefined1 *)(ppppppplVar6 + 0x31) = 1;
  }
  if (-1 < cVar1) {
    pppppplVar7 = ppppppplVar6[0x2e];
    extraout_x8[1] = ppppppplVar6[0x2f];
    *extraout_x8 = pppppplVar7;
    extraout_x8[2] = ppppppplVar6[0x30];
    return;
  }
  pppppplVar7 = ppppppplVar6[0x2e];
  pppppplVar11 = ppppppplVar6[0x2f];
  ppppppplVar6 = extraout_x8;
code_r0x000100033dac:
  if (pppppplVar11 < (long ******)0x17) {
    *(char *)((long)ppppppplVar6 + 0x17) = (char)pppppplVar11;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf0b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__memmove_11034c660)(ppppppplVar6,pppppplVar7,(long)pppppplVar11 + 1);
    return;
  }
  if (pppppplVar11 < (long ******)0x7ffffffffffffff7) {
    pppppplVar7 = (long ******)0x19;
    if (((ulong)pppppplVar11 | 7) != 0x17) {
      pppppplVar7 = (long ******)(((ulong)pppppplVar11 | 7) + 1);
    }
  }
  else {
    func_0x000104bd47d4();
  }
  func_0x000107c60e20(pppppplVar7);
  return;
}



/* Entry: 10a697634; end: 10a697677;  */

/* WARNING: Possible PIC construction at 0x000100033dfc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100033e00) */

void FUN_10a697634(undefined8 *param_1,long param_2)

{
  ulong uVar1;
  char cVar2;
  long lVar3;
  undefined8 uVar4;
  
  cVar2 = *(char *)(param_2 + 0x187);
  if (cVar2 < '\0') {
    if (*(long *)(param_2 + 0x178) == 0) goto LAB_10a697648;
  }
  else if (cVar2 == '\0') goto LAB_10a697648;
  *(undefined1 *)(param_2 + 0x188) = 1;
LAB_10a697648:
  if (-1 < cVar2) {
    uVar4 = *(undefined8 *)(param_2 + 0x170);
    param_1[1] = *(undefined8 *)(param_2 + 0x178);
    *param_1 = uVar4;
    param_1[2] = *(undefined8 *)(param_2 + 0x180);
    return;
  }
  lVar3 = *(long *)(param_2 + 0x170);
  uVar1 = *(ulong *)(param_2 + 0x178);
  if (0x16 < uVar1) {
    if (uVar1 < 0x7ffffffffffffff7) {
      lVar3 = 0x19;
      if ((uVar1 | 7) != 0x17) {
        lVar3 = (uVar1 | 7) + 1;
      }
    }
    else {
      func_0x000104bd47d4();
    }
    func_0x000107c60e20(lVar3);
    return;
  }
  *(char *)((long)param_1 + 0x17) = (char)uVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf0b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__memmove_11034c660)(param_1,lVar3,uVar1 + 1);
  return;
}



/* Entry: 10a697678; end: 10a697d5f;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_10a697678(long param_1)

{
  undefined8 *******pppppppuVar1;
  code *pcVar2;
  int iVar3;
  long *******ppppppplVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  long *plVar10;
  undefined8 uStack_178;
  int iStack_170;
  undefined8 *puStack_168;
  undefined8 uStack_160;
  int iStack_158;
  undefined8 *puStack_150;
  undefined1 auStack_148 [8];
  int iStack_140;
  undefined8 *puStack_138;
  undefined **ppuStack_130;
  undefined8 *******pppppppuStack_128;
  ulong uStack_120;
  ulong uStack_118;
  int aiStack_110 [2];
  undefined8 *puStack_108;
  undefined8 uStack_100;
  int iStack_f8;
  undefined8 *puStack_f0;
  undefined8 uStack_e8;
  int iStack_e0;
  undefined8 *puStack_d8;
  undefined8 *******pppppppuStack_d0;
  ulong uStack_c8;
  ulong uStack_c0;
  ulong uStack_b8;
  long lStack_b0;
  ulong uStack_a8;
  ulong uStack_a0;
  long lStack_98;
  ulong uStack_90;
  long *******ppppppplStack_88;
  long lStack_80;
  undefined8 uStack_78;
  
  lVar7 = *(long *)(*(long *)(param_1 + 0x60) + 0x870);
  lVar5 = *(long *)(lVar7 + 0x68);
  __ZNSt3__115recursive_mutex4lockEv(lVar7 + 0x70);
  lVar5 = *(long *)(lVar5 + 0xb8);
  if ((*(byte *)(lVar5 + 0x1e0) & 1) == 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x10a697cf4);
    (*pcVar2)();
  }
  uVar6 = *(undefined8 *)(lVar5 + 0x50);
  do {
    ppppppplStack_88 = (long *******)0x0;
    uStack_90 = 0;
    uStack_78 = 0;
    lStack_80 = 0;
    uStack_a8 = 0;
    lStack_b0 = 0;
    lStack_98 = 0;
    uStack_a0 = 0;
    uStack_c8 = 0;
    pppppppuStack_d0 = (undefined8 *******)0x0;
    uStack_b8 = 0;
    uStack_c0 = 0;
    __ZNSt3__15mutex4lockEv(param_1 + 0xe8);
    lVar5 = *(long *)(param_1 + 0x150);
    if (lVar5 == 0) {
      __ZNSt3__15mutex6unlockEv(param_1 + 0xe8);
    }
    else {
      uVar9 = *(ulong *)(param_1 + 0x148);
      lVar8 = *(long *)(*(long *)(param_1 + 0x130) + (uVar9 / 0x2a) * 8);
      if ((long)uStack_c0 < 0) {
        __ZdlPv(pppppppuStack_d0);
      }
      plVar10 = (long *)(lVar8 + (uVar9 % 0x2a) * 0x60);
      uStack_c8 = plVar10[1];
      pppppppuStack_d0 = (undefined8 *******)*plVar10;
      uStack_c0 = plVar10[2];
      *(undefined1 *)((long)plVar10 + 0x17) = 0;
      *(undefined1 *)plVar10 = 0;
      if ((long)uStack_a8 < 0) {
        __ZdlPv(uStack_b8);
      }
      lStack_b0 = plVar10[4];
      uStack_b8 = plVar10[3];
      uStack_a8 = plVar10[5];
      *(undefined1 *)((long)plVar10 + 0x2f) = 0;
      *(undefined1 *)(plVar10 + 3) = 0;
      if ((long)uStack_90 < 0) {
        __ZdlPv(uStack_a0);
      }
      lStack_98 = plVar10[7];
      uStack_a0 = plVar10[6];
      uStack_90 = plVar10[8];
      *(undefined1 *)((long)plVar10 + 0x47) = 0;
      *(undefined1 *)(plVar10 + 6) = 0;
      if ((long)uStack_78 < 0) {
        __ZdlPv(ppppppplStack_88);
      }
      lStack_80 = plVar10[10];
      ppppppplStack_88 = (long *******)plVar10[9];
      uStack_78 = plVar10[0xb];
      *(undefined1 *)((long)plVar10 + 0x5f) = 0;
      *(undefined1 *)(plVar10 + 9) = 0;
      func_0x00010a6ac50c(param_1 + 0x128);
      __ZNSt3__15mutex6unlockEv(param_1 + 0xe8);
      iStack_e0 = 0;
      uStack_e8 = uVar6;
      FUN_10a4946ac(&uStack_e8,&pppppppuStack_d0);
      lVar8 = (long)uStack_78._7_1_;
      if (lVar8 < 0) {
        ppppppplVar4 = ppppppplStack_88;
        lVar8 = lStack_80;
        if (lStack_80 != 0x10) goto LAB_10a6978c4;
        if (*ppppppplStack_88 == (long ******)0x746163696c707061 &&
            ppppppplStack_88[1] == (long ******)0x6e6f736a2f6e6f69) goto LAB_10a697878;
      }
      else {
        ppppppplVar4 = (long *******)&ppppppplStack_88;
        if ((uStack_78._7_1_ == '\x10') &&
           (ppppppplStack_88 == (long *******)0x746163696c707061 && lStack_80 == 0x6e6f736a2f6e6f69)
           ) {
LAB_10a697878:
          uVar9 = uStack_c8;
          pppppppuVar1 = pppppppuStack_d0;
          if (-1 < (long)uStack_c0) {
            uVar9 = uStack_c0 >> 0x38;
            pppppppuVar1 = &pppppppuStack_d0;
          }
          FUN_10a49049c(aiStack_110,uVar6,pppppppuVar1,uVar9);
          iStack_f8 = aiStack_110[0];
          if (aiStack_110[0] == 3) {
            puStack_f0 = puStack_108;
          }
          else if (aiStack_110[0] == 2) {
            puStack_f0 = (undefined8 *)CONCAT71(puStack_f0._1_7_,puStack_108._0_1_);
          }
          else if (3 < aiStack_110[0]) {
            puStack_f0 = puStack_108;
            puStack_108 = (undefined8 *)0x0;
          }
          aiStack_110[0] = 0;
          uStack_100 = uVar6;
          func_0x000109896818(&uStack_e8,&uStack_100);
          if ((3 < iStack_f8) && (puStack_f0 != (undefined8 *)0x0)) {
            (**(code **)*puStack_f0)();
          }
          if ((3 < aiStack_110[0]) && (puStack_108 != (undefined8 *)0x0)) {
            (**(code **)*puStack_108)();
          }
        }
        else {
LAB_10a6978c4:
          if (lVar8 == 0x23) {
            iVar3 = 0xf66c3cd;
            _memcmp(&UNK_10f66c3cd,ppppppplVar4,0x23);
            if (iVar3 == 0) {
              ppuStack_130 = &PTR_DAT_110b17828;
              uStack_120 = uStack_c8;
              pppppppuStack_128 = pppppppuStack_d0;
              uStack_118 = uStack_c0;
              pppppppuStack_d0 = (undefined8 *******)0x0;
              uStack_c8 = 0;
              uStack_c0 = 0;
              func_0x0001098981bc(auStack_148,uVar6,&ppuStack_130);
              func_0x000109896818(&uStack_e8,auStack_148);
              if ((3 < iStack_140) && (puStack_138 != (undefined8 *)0x0)) {
                (**(code **)*puStack_138)();
              }
              ppuStack_130 = &PTR_DAT_110b17828;
              if ((long)uStack_118 < 0) {
                __ZdlPv(pppppppuStack_128);
              }
            }
          }
        }
      }
      uStack_160 = uStack_e8;
      iStack_158 = iStack_e0;
      if (iStack_e0 == 3) {
        puStack_150 = puStack_d8;
      }
      else if (iStack_e0 == 2) {
        puStack_150 = (undefined8 *)CONCAT71(puStack_150._1_7_,puStack_d8._0_1_);
      }
      else if (3 < iStack_e0) {
        puStack_150 = puStack_d8;
        puStack_d8 = (undefined8 *)0x0;
      }
      iStack_e0 = 0;
      func_0x000109896818(param_1 + 0x158,&uStack_160);
      if ((3 < iStack_158) && (puStack_150 != (undefined8 *)0x0)) {
        (**(code **)*puStack_150)();
      }
      if (*(char *)(param_1 + 0xcf) < '\0') {
        __ZdlPv(*(undefined8 *)(param_1 + 0xb8));
      }
      *(long *)(param_1 + 0xc0) = lStack_b0;
      *(ulong *)(param_1 + 0xb8) = uStack_b8;
      *(ulong *)(param_1 + 200) = uStack_a8;
      uStack_a8 = uStack_a8 & 0xffffffffffffff;
      uStack_b8 = uStack_b8 & 0xffffffffffffff00;
      if (*(char *)(param_1 + 0xe7) < '\0') {
        __ZdlPv(*(undefined8 *)(param_1 + 0xd0));
      }
      *(long *)(param_1 + 0xd8) = lStack_80;
      *(long ********)(param_1 + 0xd0) = ppppppplStack_88;
      *(ulong *)(param_1 + 0xe0) = uStack_78;
      uStack_78 = uStack_78 & 0xffffffffffffff;
      ppppppplStack_88 = (long *******)((ulong)ppppppplStack_88 & 0xffffffffffffff00);
      if (*(char *)(param_1 + 0x187) < '\0') {
        __ZdlPv(*(undefined8 *)(param_1 + 0x170));
      }
      *(long *)(param_1 + 0x178) = lStack_98;
      *(ulong *)(param_1 + 0x170) = uStack_a0;
      *(ulong *)(param_1 + 0x180) = uStack_90;
      uStack_90 = uStack_90 & 0xffffffffffffff;
      uStack_a0 = uStack_a0 & 0xffffffffffffff00;
      *(undefined1 *)(param_1 + 0x188) = 0;
      FUN_10a5861f0(param_1);
      if (*(char *)(param_1 + 0x187) < '\0') {
        if (*(long *)(param_1 + 0x178) != 0) goto LAB_10a697aec;
      }
      else if (*(char *)(param_1 + 0x187) != '\0') {
LAB_10a697aec:
        if ((*(byte *)(param_1 + 0x188) & 1) == 0) {
          FUN_10a697d60(param_1,param_1 + 0x170);
        }
      }
      iStack_170 = 0;
      uStack_178 = uVar6;
      func_0x000109896818(param_1 + 0x158,&uStack_178);
      if ((3 < iStack_170) && (puStack_168 != (undefined8 *)0x0)) {
        (**(code **)*puStack_168)();
      }
      if (*(char *)(param_1 + 0xcf) < '\0') {
        **(undefined1 **)(param_1 + 0xb8) = 0;
        *(undefined8 *)(param_1 + 0xc0) = 0;
      }
      else {
        *(undefined1 *)(param_1 + 0xb8) = 0;
        *(undefined1 *)(param_1 + 0xcf) = 0;
      }
      if (*(char *)(param_1 + 0xe7) < '\0') {
        **(undefined1 **)(param_1 + 0xd0) = 0;
        *(undefined8 *)(param_1 + 0xd8) = 0;
      }
      else {
        *(undefined1 *)(param_1 + 0xd0) = 0;
        *(undefined1 *)(param_1 + 0xe7) = 0;
      }
      if (*(char *)(param_1 + 0x187) < '\0') {
        **(undefined1 **)(param_1 + 0x170) = 0;
        *(undefined8 *)(param_1 + 0x178) = 0;
      }
      else {
        *(undefined1 *)(param_1 + 0x170) = 0;
        *(undefined1 *)(param_1 + 0x187) = 0;
      }
      if ((3 < iStack_e0) && (puStack_d8 != (undefined8 *)0x0)) {
        (**(code **)*puStack_d8)();
      }
    }
    if ((long)uStack_78 < 0) {
      __ZdlPv(ppppppplStack_88);
    }
    if ((long)uStack_90 < 0) {
      __ZdlPv(uStack_a0);
    }
    if ((long)uStack_a8 < 0) {
      __ZdlPv(uStack_b8);
    }
    if ((long)uStack_c0 < 0) {
      __ZdlPv(pppppppuStack_d0);
    }
    if (lVar5 == 0) {
      __ZNSt3__115recursive_mutex6unlockEv(lVar7 + 0x70);
      return;
    }
  } while( true );
}



/* Entry: 10a697d60; end: 10a698277;  */

/* WARNING: Removing unreachable block (ram,0x00010a697e48) */
/* WARNING: Removing unreachable block (ram,0x00010a697e58) */

void FUN_10a697d60(long param_1,undefined8 *param_2)

{
  long *plVar1;
  long ****pppplVar2;
  undefined8 *puVar3;
  char cVar4;
  bool bVar5;
  ulong uVar6;
  undefined8 ****ppppuVar7;
  long ****pppplVar8;
  undefined8 *puVar9;
  undefined8 **ppuVar10;
  long *plVar11;
  long ****pppplVar12;
  long lVar13;
  long ***ppplVar14;
  ulong uVar15;
  undefined8 *puVar16;
  long *plVar17;
  long *plStack_208;
  long *plStack_200;
  undefined8 *puStack_1f8;
  undefined8 uStack_1f0;
  long lStack_1e8;
  undefined8 ***pppuStack_1e0;
  undefined8 *puStack_1d8;
  undefined8 *puStack_1d0;
  long *plStack_1c8;
  long *plStack_1c0;
  long **pplStack_1b8;
  ulong uStack_1b0;
  long lStack_1a8;
  long lStack_1a0;
  undefined4 uStack_198;
  long ***ppplStack_190;
  ulong uStack_188;
  ulong uStack_180;
  undefined8 *puStack_170;
  long ***ppplStack_168;
  long **pplStack_160;
  ulong uStack_158;
  long lStack_150;
  long lStack_148;
  undefined4 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  long alStack_128 [7];
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined **appuStack_e0 [7];
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined1 auStack_98 [7];
  undefined1 uStack_91;
  undefined1 auStack_90 [48];
  undefined8 uStack_60;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pppplVar8 = *(long *****)(param_1 + 0x198);
  if ((pppplVar8 != (long ****)0x0) &&
     (__ZNSt3__119__shared_weak_count4lockEv(), ppplStack_168 = (long ***)pppplVar8,
     pppplVar8 != (long ****)0x0)) {
    puVar16 = *(undefined8 **)(param_1 + 400);
    puStack_170 = puVar16;
    if (puVar16 != (undefined8 *)0x0) {
      if ((*(long *)(param_1 + 0x60) == 0) ||
         (lVar13 = *(long *)(*(long *)(param_1 + 0x60) + 0x100), lVar13 == 0)) {
        ppplStack_190 = (long ***)0x0;
        uStack_188 = 0;
        uStack_180 = 0;
      }
      else if (*(char *)(lVar13 + 0x21f) < '\0') {
        func_0x000107c3192c(&ppplStack_190,*(undefined8 *)(lVar13 + 0x208),
                            *(undefined8 *)(lVar13 + 0x210));
      }
      else {
        uStack_188 = *(ulong *)(lVar13 + 0x210);
        ppplStack_190 = *(long ****)(lVar13 + 0x208);
        uStack_180 = *(ulong *)(lVar13 + 0x218);
      }
      uStack_a8 = 0x5f656e696c636564;
      uStack_a0 = CONCAT26(uStack_a0._6_2_,0x796c706572);
      uStack_91 = 0xd;
      func_0x000107c2b054(auStack_90,"1");
      func_0x000104bd4884(&pplStack_1b8,&uStack_a8,1);
      puVar9 = (undefined8 *)0x20;
      __Znwm();
      lStack_1e8 = -0x7fffffffffffffe0;
      uStack_1f0 = 0x1a;
      puVar9[1] = 0x6976697463656e6e;
      *puVar9 = 0x6f632f2f3a707061;
      *(undefined8 *)((long)puVar9 + 0x12) = 0x2f796c7065725f2f;
      *(undefined8 *)((long)puVar9 + 10) = 0x7974697669746365;
      *(undefined1 *)((long)puVar9 + 0x1a) = 0;
      uVar15 = param_2[1];
      puVar3 = (undefined8 *)*param_2;
      if (-1 < (char)*(byte *)((long)param_2 + 0x17)) {
        uVar15 = (ulong)*(byte *)((long)param_2 + 0x17);
        puVar3 = param_2;
      }
      ppuVar10 = &puStack_1f8;
      puStack_1f8 = puVar9;
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                (ppuVar10,puVar3,uVar15);
      puStack_1d8 = ppuVar10[1];
      pppuStack_1e0 = (undefined8 ***)*ppuVar10;
      puStack_1d0 = ppuVar10[2];
      ppuVar10[1] = (undefined8 *)0x0;
      ppuVar10[2] = (undefined8 *)0x0;
      *ppuVar10 = (undefined8 *)0x0;
      FUN_10a3bf120(&uStack_138);
      plVar11 = (long *)0x138;
      __Znwm();
      uStack_a8 = uStack_138;
      plVar17 = plVar11 + 1;
      *plVar17 = 0;
      plVar11[2] = 0;
      *plVar11 = (long)&PTR_FUN_110b9f3b0;
      plVar1 = plVar11 + 3;
      puVar3 = puStack_1d8;
      ppppuVar7 = (undefined8 ****)pppuStack_1e0;
      if (-1 < (long)puStack_1d0) {
        puVar3 = (undefined8 *)((ulong)puStack_1d0 >> 0x38);
        ppppuVar7 = &pppuStack_1e0;
      }
      uStack_138 = 0;
      uStack_a0 = uStack_130;
      (**(code **)(alStack_128[0] + 0x10))(auStack_98,alStack_128);
      uStack_158 = uStack_1b0;
      pplStack_160 = pplStack_1b8;
      uStack_60 = uStack_f0;
      pplStack_1b8 = (long **)0x0;
      uStack_1b0 = 0;
      lStack_150 = lStack_1a8;
      lStack_148 = lStack_1a0;
      uStack_140 = uStack_198;
      if (lStack_1a0 != 0) {
        uVar15 = *(ulong *)(lStack_1a8 + 8);
        if ((uStack_158 & uStack_158 - 1) == 0) {
          uVar15 = uVar15 & uStack_158 - 1;
        }
        else if (uStack_158 <= uVar15) {
          uVar6 = 0;
          if (uStack_158 != 0) {
            uVar6 = uVar15 / uStack_158;
          }
          uVar15 = uVar15 - uVar6 * uStack_158;
        }
        pplStack_160[uVar15] = &lStack_150;
        lStack_1a8 = 0;
        lStack_1a0 = 0;
      }
      uVar15 = uStack_188;
      pppplVar8 = (long ****)ppplStack_190;
      if (-1 < (long)uStack_180) {
        uVar15 = uStack_180 >> 0x38;
        pppplVar8 = &ppplStack_190;
      }
      uStack_e8 = 0x10a6acf78;
      appuStack_e0[0] = &PTR_DAT_110c0dcc0;
      FUN_10a05c494(plVar1,ppppuVar7,puVar3,"POST",4,&uStack_a8,4,&pplStack_160,pppplVar8,uVar15,
                    &uStack_e8);
      (*(code *)*appuStack_e0[0])(appuStack_e0);
      func_0x000104c4f944(&pplStack_160);
      FUN_10a042634(&uStack_a8);
      plStack_1c8 = plVar1;
      plStack_1c0 = plVar11;
      FUN_10a042634(&uStack_138);
      if ((long)puStack_1d0 < 0) {
        __ZdlPv(pppuStack_1e0);
      }
      if (lStack_1e8 < 0) {
        __ZdlPv(puStack_1f8);
      }
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar17,0x10);
        if (bVar5) {
          *plVar17 = *plVar17 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      plStack_208 = plVar1;
      plStack_200 = plVar11;
      (**(code **)*puVar16)(puVar16,&plStack_208);
      plVar1 = plStack_200;
      if (plStack_200 != (long *)0x0) {
        plVar11 = plStack_200 + 1;
        do {
          lVar13 = *plVar11;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar11,0x10);
          if (bVar5) {
            *plVar11 = lVar13 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (lVar13 == 0) {
          (**(code **)(*plStack_200 + 0x10))(plStack_200);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar1);
        }
      }
      plVar1 = plStack_1c0;
      if (plStack_1c0 != (long *)0x0) {
        plVar11 = plStack_1c0 + 1;
        do {
          lVar13 = *plVar11;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar11,0x10);
          if (bVar5) {
            *plVar11 = lVar13 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (lVar13 == 0) {
          (**(code **)(*plStack_1c0 + 0x10))(plStack_1c0);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar1);
        }
      }
      pppplVar8 = (long ****)&pplStack_1b8;
      func_0x000104c4f944(pppplVar8);
      if ((long)uStack_180 < 0) {
        pppplVar8 = (long ****)ppplStack_190;
        __ZdlPv(ppplStack_190);
      }
      if ((long ****)ppplStack_168 == (long ****)0x0) goto LAB_10a698144;
    }
    pppplVar12 = (long ****)ppplStack_168;
    pppplVar2 = (long ****)(ppplStack_168 + 1);
    do {
      ppplVar14 = *pppplVar2;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(pppplVar2,0x10);
      if (bVar5) {
        *pppplVar2 = (long ***)((long)ppplVar14 + -1);
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (ppplVar14 == (long ***)0x0) {
      (*(code *)(*ppplStack_168)[2])(ppplStack_168);
      __ZNSt3__119__shared_weak_count14__release_weakEv(pppplVar12);
      pppplVar8 = pppplVar12;
    }
  }
LAB_10a698144:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  do {
    do {
      func_0x00010a05a8c4(&puStack_170);
      __Unwind_Resume(pppplVar8);
      func_0x000104acfb5c(&uStack_a8);
    } while (-1 < (long)uStack_180);
    __ZdlPv(ppplStack_190);
  } while( true );
}



/* Entry: 10a698278; end: 10a6982d7;  */

undefined8 * FUN_10a698278(undefined8 *param_1)

{
  if (*(char *)((long)param_1 + 0x5f) < '\0') {
    __ZdlPv(param_1[9]);
  }
  if (*(char *)((long)param_1 + 0x47) < '\0') {
    __ZdlPv(param_1[6]);
  }
  if (*(char *)((long)param_1 + 0x2f) < '\0') {
    __ZdlPv(param_1[3]);
  }
  if (*(char *)((long)param_1 + 0x17) < '\0') {
    __ZdlPv(*param_1);
  }
  return param_1;
}



/* Entry: 10a6982d8; end: 10a698373;  */

undefined1  [16] FUN_10a6982d8(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x1b;
  auVar1._0_8_ = &UNK_10f66c3fb;
  return auVar1;
}



/* Entry: 10a698374; end: 10a6983c7;  */

void FUN_10a698374(undefined8 param_1)

{
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined4 uStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined4 uStack_18;
  
  uStack_58 = 0;
  uStack_50 = 0xffffffff00000001;
  uStack_48 = 0xffffffff;
  puStack_40 = &UNK_10f66b8c1;
  uStack_38 = 0;
  uStack_28 = 0;
  uStack_20 = 0;
  puStack_30 = &UNK_10f66b8c1;
  uStack_18 = 0xffffffff;
  FUN_10a6983c8(param_1,&uStack_58);
  FUN_10a6ad08c();
  return;
}



/* Entry: 10a6983c8; end: 10a69849f;  */

/* WARNING: Removing unreachable block (ram,0x00010a698460) */

undefined1  [16] FUN_10a6983c8(undefined8 param_1,long param_2)

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
  func_0x000109887da8(auStack_48,&UNK_10f66c3fb,0x1b);
  uStack_88 = *(undefined8 *)(param_2 + 8);
  uStack_80 = *(undefined4 *)(param_2 + 0x10);
  uStack_70 = *(undefined8 *)(param_2 + 0x20);
  uStack_78 = *(undefined8 *)(param_2 + 0x18);
  uStack_60 = *(undefined8 *)(param_2 + 0x30);
  uStack_68 = *(undefined8 *)(param_2 + 0x28);
  uStack_58 = *(undefined8 *)(param_2 + 0x38);
  uStack_50 = *(undefined4 *)(param_2 + 0x40);
  puStack_90 = auStack_48;
  FUN_10a6acf90(param_1,&puStack_90,100);
  auVar2._8_8_ = ppuVar1;
  auVar2._0_8_ = param_1;
  return auVar2;
}



/* Entry: 10a6984a0; end: 10a6984fb;  */

void FUN_10a6984a0(long param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  long lVar5;
  undefined8 uStack_70;
  long *plStack_68;
  undefined8 uStack_60;
  long *plStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  byte bStack_30;
  
  if (param_2 != 0) {
    lVar5 = *(long *)(param_2 + 0x158);
    if (*(long *)(param_2 + 0x160) == lVar5) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x10a6984fc);
      (*pcVar4)();
    }
    if (((*(byte *)(lVar5 + 8) & 1) == 0) && (*(int *)(lVar5 + 4) == 1)) {
      FUN_10a76c260(*(undefined8 *)(*(long *)(param_1 + 0x60) + 0x8d8),0x15);
      if ((*(char *)(param_1 + 0x88) == '\x01') && (*(char *)(param_1 + 0x90) == '\x01')) {
        uStack_48 = *(undefined8 *)(param_1 + 0x70);
        uStack_50 = *(undefined8 *)(param_1 + 0x68);
        if (*(long *)(param_1 + 0x70) != 0) {
          plVar1 = (long *)(*(long *)(param_1 + 0x70) + 8);
          do {
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar3) {
              *plVar1 = *plVar1 + 1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
        }
        uStack_38 = *(undefined8 *)(param_1 + 0x80);
        uStack_40 = *(undefined8 *)(param_1 + 0x78);
        if (*(long *)(param_1 + 0x80) != 0) {
          plVar1 = (long *)(*(long *)(param_1 + 0x80) + 0x10);
          do {
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar3) {
              *plVar1 = *plVar1 + 1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
        }
        bStack_30 = 1;
        func_0x00010a58dd14(&uStack_70);
        plStack_58 = plStack_68;
        uStack_60 = uStack_70;
        if (plStack_68 != (long *)0x0) {
          plVar1 = plStack_68 + 2;
          do {
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar3) {
              *plVar1 = *plVar1 + 1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          plVar1 = plStack_68 + 1;
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
            (**(code **)(*plStack_68 + 0x10))(plStack_68);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_68);
          }
        }
        if ((bStack_30 & 1) == 0) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x10a58630c);
          (*pcVar4)();
        }
        FUN_10a58dda4(uStack_50,&uStack_60);
        if (plStack_58 != (long *)0x0) {
          __ZNSt3__119__shared_weak_count14__release_weakEv();
        }
        if (bStack_30 == 1) {
          FUN_10a688c1c(&uStack_50);
        }
      }
      return;
    }
  }
  return;
}



/* Entry: 10a6984fc; end: 10a6986cf;  */

void FUN_10a6984fc(undefined8 *param_1,long param_2,undefined8 param_3,long param_4)

{
  long *plVar1;
  undefined8 *puVar2;
  char cVar3;
  bool bVar4;
  long *plVar5;
  long *plVar6;
  long lVar7;
  undefined8 uVar8;
  long *plVar9;
  
  puVar2 = (undefined8 *)(param_2 + 0x60);
  if (param_4 != 0) {
    puVar2 = (undefined8 *)(param_4 + 0xb0);
  }
  uVar8 = *puVar2;
  lVar7 = param_2;
  func_0x00010a0fda30();
  plVar5 = (long *)0x340;
  __Znwm();
  plVar9 = plVar5 + 1;
  plVar5[2] = 0;
  *plVar9 = 0;
  plVar6 = plVar5 + 3;
  *plVar5 = (long)&PTR_FUN_110c0dce8;
  plVar5[100] = (long)&PTR_FUN_110c383b8;
  *(undefined2 *)(plVar5 + 0x67) = 0x100;
  plVar5[0x66] = 0;
  plVar5[0x65] = 0;
  FUN_10a589324(plVar6,&PTR_PTR_110c09d10,uVar8,lVar7,param_3);
  plVar5[3] = (long)&PTR_DAT_110c09b20;
  plVar5[5] = (long)&PTR_FUN_110c09bd8;
  plVar5[10] = (long)&PTR_FUN_110c09c30;
  plVar5[0x16] = (long)&PTR_FUN_110c09c58;
  plVar5[100] = (long)&PTR_FUN_110c09cd0;
  lVar7 = plVar5[9];
  if (lVar7 == 0) {
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar4) {
        *plVar9 = *plVar9 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    plVar1 = plVar5 + 2;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = *plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    plVar5[8] = (long)plVar6;
    plVar5[9] = (long)plVar5;
  }
  else {
    if (*(long *)(lVar7 + 8) != -1) goto LAB_10a698664;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar4) {
        *plVar9 = *plVar9 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    plVar1 = plVar5 + 2;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = *plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    plVar5[8] = (long)plVar6;
    plVar5[9] = (long)plVar5;
    __ZNSt3__119__shared_weak_count14__release_weakEv(lVar7);
  }
  do {
    lVar7 = *plVar9;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar9,0x10);
    if (bVar4) {
      *plVar9 = lVar7 + -1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  if (lVar7 == 0) {
    (**(code **)(*plVar5 + 0x10))(plVar5);
    __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
  }
LAB_10a698664:
  *(undefined4 *)((long)plVar6 + 0x54) = *(undefined4 *)(param_2 + 0x54);
  *(undefined4 *)(plVar6 + 0x1b) = *(undefined4 *)(param_2 + 0xd8);
  FUN_10a3a754c(plVar6 + 0x18,param_2 + 0xc0);
  *param_1 = plVar6;
  param_1[1] = plVar5;
  return;
}



/* Entry: 10a6986d0; end: 10a69876b;  */

undefined1  [16] FUN_10a6986d0(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x1b;
  auVar1._0_8_ = &UNK_10f66c417;
  return auVar1;
}



/* Entry: 10a69876c; end: 10a6987bf;  */

void FUN_10a69876c(undefined8 param_1)

{
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined4 uStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined4 uStack_18;
  
  uStack_58 = 0;
  uStack_50 = 0xffffffff00000001;
  uStack_48 = 0xffffffff;
  puStack_40 = &UNK_10f66b8c1;
  uStack_38 = 0;
  uStack_28 = 0;
  uStack_20 = 0;
  puStack_30 = &UNK_10f66b8c1;
  uStack_18 = 0xffffffff;
  FUN_10a6987c0(param_1,&uStack_58);
  FUN_10a6ad2dc();
  return;
}



/* Entry: 10a6987c0; end: 10a698897;  */

/* WARNING: Removing unreachable block (ram,0x00010a698858) */

undefined1  [16] FUN_10a6987c0(undefined8 param_1,long param_2)

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
  func_0x000109887da8(auStack_48,&UNK_10f66c417,0x1b);
  uStack_88 = *(undefined8 *)(param_2 + 8);
  uStack_80 = *(undefined4 *)(param_2 + 0x10);
  uStack_70 = *(undefined8 *)(param_2 + 0x20);
  uStack_78 = *(undefined8 *)(param_2 + 0x18);
  uStack_60 = *(undefined8 *)(param_2 + 0x30);
  uStack_68 = *(undefined8 *)(param_2 + 0x28);
  uStack_58 = *(undefined8 *)(param_2 + 0x38);
  uStack_50 = *(undefined4 *)(param_2 + 0x40);
  puStack_90 = auStack_48;
  FUN_10a6ad1e0(param_1,&puStack_90,100);
  auVar2._8_8_ = ppuVar1;
  auVar2._0_8_ = param_1;
  return auVar2;
}



/* Entry: 10a698898; end: 10a6988f7;  */

void FUN_10a698898(long param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  long lVar5;
  undefined8 uStack_70;
  long *plStack_68;
  undefined8 uStack_60;
  long *plStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  byte bStack_30;
  
  if (param_2 != 0) {
    lVar5 = *(long *)(param_2 + 0x158);
    if (*(long *)(param_2 + 0x160) == lVar5) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x10a6988f8);
      (*pcVar4)();
    }
    if ((*(char *)(lVar5 + 8) == '\x01') && (*(int *)(lVar5 + 4) == 1)) {
      FUN_10a76c260(*(undefined8 *)(*(long *)(param_1 + 0x60) + 0x8d8),0x16);
      if ((*(char *)(param_1 + 0x88) == '\x01') && (*(char *)(param_1 + 0x90) == '\x01')) {
        uStack_48 = *(undefined8 *)(param_1 + 0x70);
        uStack_50 = *(undefined8 *)(param_1 + 0x68);
        if (*(long *)(param_1 + 0x70) != 0) {
          plVar1 = (long *)(*(long *)(param_1 + 0x70) + 8);
          do {
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar3) {
              *plVar1 = *plVar1 + 1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
        }
        uStack_38 = *(undefined8 *)(param_1 + 0x80);
        uStack_40 = *(undefined8 *)(param_1 + 0x78);
        if (*(long *)(param_1 + 0x80) != 0) {
          plVar1 = (long *)(*(long *)(param_1 + 0x80) + 0x10);
          do {
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar3) {
              *plVar1 = *plVar1 + 1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
        }
        bStack_30 = 1;
        func_0x00010a58dd14(&uStack_70);
        plStack_58 = plStack_68;
        uStack_60 = uStack_70;
        if (plStack_68 != (long *)0x0) {
          plVar1 = plStack_68 + 2;
          do {
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar3) {
              *plVar1 = *plVar1 + 1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          plVar1 = plStack_68 + 1;
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
            (**(code **)(*plStack_68 + 0x10))(plStack_68);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_68);
          }
        }
        if ((bStack_30 & 1) == 0) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x10a58630c);
          (*pcVar4)();
        }
        FUN_10a58dda4(uStack_50,&uStack_60);
        if (plStack_58 != (long *)0x0) {
          __ZNSt3__119__shared_weak_count14__release_weakEv();
        }
        if (bStack_30 == 1) {
          FUN_10a688c1c(&uStack_50);
        }
      }
      return;
    }
  }
  return;
}



/* Entry: 10a6988f8; end: 10a698acb;  */

void FUN_10a6988f8(undefined8 *param_1,long param_2,undefined8 param_3,long param_4)

{
  long *plVar1;
  undefined8 *puVar2;
  char cVar3;
  bool bVar4;
  long *plVar5;
  long *plVar6;
  long lVar7;
  undefined8 uVar8;
  long *plVar9;
  
  puVar2 = (undefined8 *)(param_2 + 0x60);
  if (param_4 != 0) {
    puVar2 = (undefined8 *)(param_4 + 0xb0);
  }
  uVar8 = *puVar2;
  lVar7 = param_2;
  func_0x00010a0fda30();
  plVar5 = (long *)0x340;
  __Znwm();
  plVar9 = plVar5 + 1;
  plVar5[2] = 0;
  *plVar9 = 0;
  plVar6 = plVar5 + 3;
  *plVar5 = (long)&PTR_FUN_110c0dd38;
  plVar5[100] = (long)&PTR_FUN_110c383b8;
  *(undefined2 *)(plVar5 + 0x67) = 0x100;
  plVar5[0x66] = 0;
  plVar5[0x65] = 0;
  FUN_10a589324(plVar6,&PTR_PTR_110c09f50,uVar8,lVar7,param_3);
  plVar5[3] = (long)&PTR_FUN_110c09d60;
  plVar5[5] = (long)&PTR_FUN_110c09e18;
  plVar5[10] = (long)&PTR_FUN_110c09e70;
  plVar5[0x16] = (long)&PTR_FUN_110c09e98;
  plVar5[100] = (long)&PTR_FUN_110c09f10;
  lVar7 = plVar5[9];
  if (lVar7 == 0) {
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar4) {
        *plVar9 = *plVar9 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    plVar1 = plVar5 + 2;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = *plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    plVar5[8] = (long)plVar6;
    plVar5[9] = (long)plVar5;
  }
  else {
    if (*(long *)(lVar7 + 8) != -1) goto LAB_10a698a60;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar4) {
        *plVar9 = *plVar9 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    plVar1 = plVar5 + 2;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = *plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    plVar5[8] = (long)plVar6;
    plVar5[9] = (long)plVar5;
    __ZNSt3__119__shared_weak_count14__release_weakEv(lVar7);
  }
  do {
    lVar7 = *plVar9;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar9,0x10);
    if (bVar4) {
      *plVar9 = lVar7 + -1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  if (lVar7 == 0) {
    (**(code **)(*plVar5 + 0x10))(plVar5);
    __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
  }
LAB_10a698a60:
  *(undefined4 *)((long)plVar6 + 0x54) = *(undefined4 *)(param_2 + 0x54);
  *(undefined4 *)(plVar6 + 0x1b) = *(undefined4 *)(param_2 + 0xd8);
  FUN_10a3a754c(plVar6 + 0x18,param_2 + 0xc0);
  *param_1 = plVar6;
  param_1[1] = plVar5;
  return;
}



/* Entry: 10a698acc; end: 10a698b87;  */

undefined1  [16] FUN_10a698acc(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x1e;
  auVar1._0_8_ = &UNK_10f66c433;
  return auVar1;
}



/* Entry: 10a698b88; end: 10a698bef;  */

bool FUN_10a698b88(undefined8 param_1,long *param_2,long param_3)

{
  bool bVar1;
  int iVar2;
  
  if (param_3 == 0x23) {
    iVar2 = 0xf66c452;
    _memcmp(&UNK_10f66c452,param_2);
    if (iVar2 == 0) {
      return true;
    }
  }
  if ((param_3 == 0x1e) &&
     (((*param_2 == 0x657645656e656353 && param_2[1] == 0x63656a624f2e746e) &&
      param_2[2] == 0x6e696b6361725474) && *(long *)((long)param_2 + 0x16) == 0x746e657645676e69)) {
    return true;
  }
  if ((param_3 == 10) && (*param_2 == 0x657645656e656353 && (short)param_2[1] == 0x746e)) {
    return true;
  }
  if (param_3 == 0xc) {
    bVar1 = false;
    if (*param_2 == 0x624f747069726353) {
      bVar1 = (int)param_2[1] == 0x7463656a;
    }
  }
  else {
    if (param_3 != 0x10) {
      return false;
    }
    bVar1 = *param_2 == 0x6150746e65764549 && param_2[1] == 0x73726574656d6172;
  }
  return bVar1;
}



/* Entry: 10a698bf0; end: 10a698c17;  */

bool FUN_10a698bf0(undefined8 param_1,long *param_2,long param_3)

{
  bool bVar1;
  int iVar2;
  
  if (param_3 == 0x23) {
    iVar2 = 0xf66c452;
    _memcmp(&UNK_10f66c452,param_2);
    if (iVar2 == 0) {
      return true;
    }
  }
  if ((param_3 == 0x1e) &&
     (((*param_2 == 0x657645656e656353 && param_2[1] == 0x63656a624f2e746e) &&
      param_2[2] == 0x6e696b6361725474) && *(long *)((long)param_2 + 0x16) == 0x746e657645676e69)) {
    return true;
  }
  if ((param_3 == 10) && (*param_2 == 0x657645656e656353 && (short)param_2[1] == 0x746e)) {
    return true;
  }
  if (param_3 == 0xc) {
    bVar1 = false;
    if (*param_2 == 0x624f747069726353) {
      bVar1 = (int)param_2[1] == 0x7463656a;
    }
  }
  else {
    if (param_3 != 0x10) {
      return false;
    }
    bVar1 = *param_2 == 0x6150746e65764549 && param_2[1] == 0x73726574656d6172;
  }
  return bVar1;
}



/* Entry: 10a698c18; end: 10a698c7f;  */

bool FUN_10a698c18(undefined8 param_1,long *param_2,long param_3)

{
  bool bVar1;
  int iVar2;
  
  if (param_3 == 0x21) {
    iVar2 = 0xf66c476;
    _memcmp(&UNK_10f66c476,param_2);
    if (iVar2 == 0) {
      return true;
    }
  }
  if ((param_3 == 0x1e) &&
     (((*param_2 == 0x657645656e656353 && param_2[1] == 0x63656a624f2e746e) &&
      param_2[2] == 0x6e696b6361725474) && *(long *)((long)param_2 + 0x16) == 0x746e657645676e69)) {
    return true;
  }
  if ((param_3 == 10) && (*param_2 == 0x657645656e656353 && (short)param_2[1] == 0x746e)) {
    return true;
  }
  if (param_3 == 0xc) {
    bVar1 = false;
    if (*param_2 == 0x624f747069726353) {
      bVar1 = (int)param_2[1] == 0x7463656a;
    }
  }
  else {
    if (param_3 != 0x10) {
      return false;
    }
    bVar1 = *param_2 == 0x6150746e65764549 && param_2[1] == 0x73726574656d6172;
  }
  return bVar1;
}



/* Entry: 10a698c80; end: 10a698c87;  */

bool FUN_10a698c80(undefined8 param_1,long *param_2,long param_3)

{
  bool bVar1;
  int iVar2;
  
  if (param_3 == 0x21) {
    iVar2 = 0xf66c476;
    _memcmp(&UNK_10f66c476,param_2);
    if (iVar2 == 0) {
      return true;
    }
  }
  if ((param_3 == 0x1e) &&
     (((*param_2 == 0x657645656e656353 && param_2[1] == 0x63656a624f2e746e) &&
      param_2[2] == 0x6e696b6361725474) && *(long *)((long)param_2 + 0x16) == 0x746e657645676e69)) {
    return true;
  }
  if ((param_3 == 10) && (*param_2 == 0x657645656e656353 && (short)param_2[1] == 0x746e)) {
    return true;
  }
  if (param_3 == 0xc) {
    bVar1 = false;
    if (*param_2 == 0x624f747069726353) {
      bVar1 = (int)param_2[1] == 0x7463656a;
    }
  }
  else {
    if (param_3 != 0x10) {
      return false;
    }
    bVar1 = *param_2 == 0x6150746e65764549 && param_2[1] == 0x73726574656d6172;
  }
  return bVar1;
}



/* Entry: 10a698c88; end: 10a698f9b;  */

void FUN_10a698c88(ulong param_1)

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
  
  func_0x000109887da8(appuStack_c8,&UNK_10f66c433,0x1e);
  pppuVar1 = (undefined8 ***)appuStack_c8[0];
  if (-1 < cStack_b1) {
    pppuVar1 = appuStack_c8;
  }
  *(undefined ***)(param_1 + 0x1b0) = &PTR_DAT_110c0c4a8;
  pppuVar2 = (undefined8 ***)&UNK_10f66b8c1;
  if (pppuVar1 != (undefined8 ***)0x0) {
    pppuVar2 = pppuVar1;
  }
  func_0x000107c2c4dc(param_1 + 0x1b8,pppuVar2);
  uStack_98 = 0;
  uStack_90 = 0;
  uStack_80 = 0xffffffffffffffff;
  uStack_88 = 0x200000019;
  uStack_70 = 0;
  uStack_78 = 0;
  uStack_60 = 0;
  uStack_68 = 0;
  uStack_58 = 0;
  uStack_54 = 0x124;
  uStack_50 = 0x13c;
  uStack_48 = 0;
  uStack_40 = 0;
  ppuStack_a0 = pppuVar1;
  func_0x00010a052690(param_1 + 0x168,&ppuStack_a0);
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,2,0x13c,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    ppuStack_b0 = &PTR_DAT_110c0c4a8;
    uStack_a8 = 0;
    ppuStack_a0 = (undefined8 **)&PTR_DAT_110bf6810;
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
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a698f7c;
    FUN_10a054dac(param_1,&UNK_10f66bee1,FUN_10a6ad430,2,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&DAT_10f64c013,FUN_10a6ad5b4,FUN_10a6ad670);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&DAT_10f64c02b,FUN_10a6ad7ac,FUN_10a6ad88c);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&DAT_10f65d940,FUN_10a6ad988,FUN_10a6adac8);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&DAT_10f2e5c64,FUN_10a6adc24,FUN_10a6adcdc);
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
      func_0x000109894f40(param_1,0);
      FUN_10a054234(param_1,&ppuStack_a0,param_1 + 0x1b8,&UNK_10f66c433,0x1e);
      FUN_10a05431c(param_1);
    }
    return;
  }
LAB_10a698f7c:
                    /* WARNING: Does not return */
  pcVar6 = (code *)SoftwareBreakpoint(1,0x10a698f80);
  (*pcVar6)();
}



/* Entry: 10a698f9c; end: 10a698fe7;  */

void FUN_10a698f9c(undefined8 param_1)

{
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined4 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined4 uStack_18;
  
  uStack_58 = 0;
  uStack_50 = 0xffffffff00000002;
  uStack_48 = 0xffffffff;
  uStack_38 = 0;
  uStack_40 = 0;
  uStack_28 = 0;
  uStack_30 = 0;
  uStack_20 = 0;
  uStack_18 = 0xffffffff;
  FUN_10a698fe8(param_1,&uStack_58);
  FUN_10a6adf00();
  return;
}



/* Entry: 10a698fe8; end: 10a6990bf;  */

/* WARNING: Removing unreachable block (ram,0x00010a699080) */

undefined1  [16] FUN_10a698fe8(undefined8 param_1,long param_2)

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
  func_0x000109887da8(auStack_48,&UNK_10f66c452,0x23);
  uStack_88 = *(undefined8 *)(param_2 + 8);
  uStack_80 = *(undefined4 *)(param_2 + 0x10);
  uStack_70 = *(undefined8 *)(param_2 + 0x20);
  uStack_78 = *(undefined8 *)(param_2 + 0x18);
  uStack_60 = *(undefined8 *)(param_2 + 0x30);
  uStack_68 = *(undefined8 *)(param_2 + 0x28);
  uStack_58 = *(undefined8 *)(param_2 + 0x38);
  uStack_50 = *(undefined4 *)(param_2 + 0x40);
  puStack_90 = auStack_48;
  FUN_10a6ade04(param_1,&puStack_90,0x19);
  auVar2._8_8_ = ppuVar1;
  auVar2._0_8_ = param_1;
  return auVar2;
}


