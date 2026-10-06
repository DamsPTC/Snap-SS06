/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 109292f40; end: 10929310f;  */

void FUN_109292f40(long *param_1,long *param_2)

{
  char cVar1;
  bool bVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  ulong uVar7;
  ulong uVar8;
  undefined8 *puVar9;
  ulong uVar10;
  long *plVar11;
  long *plVar12;
  long *plVar13;
  long *plVar14;
  ulong uVar15;
  ulong unaff_x25;
  float fVar16;
  
  plVar6 = param_1;
  plVar11 = param_2;
  if ((long)param_2 - 1U == 0) {
    param_2 = (long *)0x2;
  }
  else if (((ulong)param_2 & (long)param_2 - 1U) != 0) {
    __ZNSt3__112__next_primeEm();
    plVar6 = param_2;
  }
  plVar14 = (long *)param_1[1];
  if (plVar14 > param_2 || param_2 == plVar14) {
    if (plVar14 <= param_2) {
      return;
    }
    plVar6 = (long *)(long)((float)(ulong)param_1[3] / *(float *)(param_1 + 4));
    if ((plVar14 < (long *)0x3) || (((ulong)plVar14 & (long)plVar14 - 1U) != 0)) {
      __ZNSt3__112__next_primeEm();
    }
    else if ((long *)0x1 < plVar6) {
      plVar6 = (long *)(1L << (-LZCOUNT((long)plVar6 + -1) & 0x3fU));
    }
    if (param_2 <= plVar6) {
      param_2 = plVar6;
    }
    if (plVar14 <= param_2) {
      return;
    }
    if (param_2 == (long *)0x0) {
      lVar4 = *param_1;
      *param_1 = 0;
      if (lVar4 != 0) {
        __ZdlPv();
      }
      param_1[1] = 0;
      return;
    }
  }
  if ((ulong)param_2 >> 0x3d == 0) {
    lVar4 = (long)param_2 << 3;
    __Znwm();
    lVar5 = *param_1;
    *param_1 = lVar4;
    if (lVar5 != 0) {
      __ZdlPv();
    }
    plVar6 = (long *)0x0;
    param_1[1] = (long)param_2;
    do {
      *(undefined8 *)(*param_1 + (long)plVar6 * 8) = 0;
      plVar6 = (long *)((long)plVar6 + 1);
    } while (param_2 != plVar6);
    plVar6 = (long *)param_1[2];
    if (plVar6 != (long *)0x0) {
      plVar11 = (long *)plVar6[1];
      uVar7 = (long)param_2 - 1;
      if (((ulong)param_2 & uVar7) == 0) {
        plVar11 = (long *)((ulong)plVar11 & uVar7);
      }
      else if (param_2 <= plVar11) {
        uVar15 = 0;
        if (param_2 != (long *)0x0) {
          uVar15 = (ulong)plVar11 / (ulong)param_2;
        }
        plVar11 = (long *)((long)plVar11 - uVar15 * (long)param_2);
      }
      *(long **)(*param_1 + (long)plVar11 * 8) = param_1 + 2;
      plVar14 = (long *)*plVar6;
      while (plVar14 != (long *)0x0) {
        plVar13 = (long *)plVar14[1];
        if (((ulong)param_2 & uVar7) == 0) {
          plVar13 = (long *)((ulong)plVar13 & uVar7);
        }
        else if (param_2 <= plVar13) {
          uVar15 = 0;
          if (param_2 != (long *)0x0) {
            uVar15 = (ulong)plVar13 / (ulong)param_2;
          }
          plVar13 = (long *)((long)plVar13 - uVar15 * (long)param_2);
        }
        plVar12 = plVar14;
        if (plVar13 != plVar11) {
          lVar4 = *param_1;
          if (*(long *)(lVar4 + (long)plVar13 * 8) == 0) {
            *(long **)(lVar4 + (long)plVar13 * 8) = plVar6;
            plVar11 = plVar13;
          }
          else {
            *plVar6 = *plVar14;
            *plVar14 = **(undefined8 **)(lVar4 + (long)plVar13 * 8);
            **(long **)(lVar4 + (long)plVar13 * 8) = (long)plVar14;
            plVar12 = plVar6;
          }
        }
        plVar6 = plVar12;
        plVar14 = (long *)*plVar12;
      }
    }
    return;
  }
  func_0x000104c4f740();
  plVar14 = (long *)plVar6[1];
  if (plVar14 == (long *)0x0) {
    return;
  }
  __ZNSt3__119__shared_weak_count4lockEv();
  if (plVar14 == (long *)0x0) {
    return;
  }
  lVar4 = *plVar6;
  if ((lVar4 == 0) || ((int)plVar6[2] != *(int *)(lVar4 + 0x58))) goto LAB_109293364;
  __ZNSt3__15mutex4lockEv(lVar4 + 0x18);
  uVar7 = ((ulong)(uint)((int)plVar11 << 3) + 8 ^ (ulong)plVar11 >> 0x20) * -0x622015f714c7d297;
  uVar7 = ((ulong)plVar11 >> 0x20 ^ uVar7 >> 0x2f ^ uVar7) * -0x622015f714c7d297;
  uVar15 = (uVar7 ^ uVar7 >> 0x2f) * -0x622015f714c7d297;
  uVar7 = *(ulong *)(lVar4 + 0xe8);
  if (uVar7 != 0) {
    uVar8 = uVar7 - 1;
    if ((uVar7 & uVar8) == 0) {
      unaff_x25 = uVar8 & uVar15;
    }
    else {
      unaff_x25 = uVar15;
      if (uVar7 <= uVar15) {
        uVar10 = 0;
        if (uVar7 != 0) {
          uVar10 = uVar15 / uVar7;
        }
        unaff_x25 = uVar15 - uVar10 * uVar7;
      }
    }
    puVar9 = *(undefined8 **)(*(long *)(lVar4 + 0xe0) + unaff_x25 * 8);
    if (puVar9 != (undefined8 *)0x0) {
      for (plVar6 = (long *)*puVar9; plVar6 != (long *)0x0; plVar6 = (long *)*plVar6) {
        uVar10 = plVar6[1];
        if (uVar10 == uVar15) {
          if ((long *)plVar6[2] == plVar11) goto LAB_109293354;
        }
        else {
          if ((uVar7 & uVar8) == 0) {
            uVar10 = uVar10 & uVar8;
          }
          else if (uVar7 <= uVar10) {
            uVar3 = 0;
            if (uVar7 != 0) {
              uVar3 = uVar10 / uVar7;
            }
            uVar10 = uVar10 - uVar3 * uVar7;
          }
          if (uVar10 != unaff_x25) break;
        }
      }
    }
  }
  plVar6 = (long *)0x20;
  __Znwm();
  *plVar6 = 0;
  plVar6[1] = uVar15;
  plVar6[2] = (long)plVar11;
  *(undefined1 *)(plVar6 + 3) = 0;
  fVar16 = (float)(*(long *)(lVar4 + 0xf8) + 1);
  if ((uVar7 == 0) || (*(float *)(lVar4 + 0x100) * (float)uVar7 < fVar16)) {
    uVar8 = 1;
    if (2 < uVar7) {
      uVar8 = (ulong)((uVar7 & uVar7 - 1) != 0);
    }
    uVar8 = uVar8 | uVar7 << 1;
    uVar7 = (ulong)(fVar16 / *(float *)(lVar4 + 0x100));
    if (uVar8 <= uVar7) {
      uVar8 = uVar7;
    }
    FUN_109292f40(lVar4 + 0xe0,uVar8);
    uVar7 = *(ulong *)(lVar4 + 0xe8);
    if ((uVar7 & uVar7 - 1) == 0) {
      unaff_x25 = uVar7 - 1 & uVar15;
    }
    else {
      unaff_x25 = uVar15;
      if (uVar7 <= uVar15) {
        uVar8 = 0;
        if (uVar7 != 0) {
          uVar8 = uVar15 / uVar7;
        }
        unaff_x25 = uVar15 - uVar8 * uVar7;
      }
    }
  }
  lVar5 = *(long *)(lVar4 + 0xe0);
  plVar11 = *(long **)(lVar5 + unaff_x25 * 8);
  if (plVar11 == (long *)0x0) {
    plVar11 = (long *)(lVar4 + 0xf0);
    *plVar6 = *plVar11;
    *plVar11 = (long)plVar6;
    *(long **)(lVar5 + unaff_x25 * 8) = plVar11;
    if (*plVar6 != 0) {
      uVar15 = *(ulong *)(*plVar6 + 8);
      if ((uVar7 & uVar7 - 1) == 0) {
        uVar15 = uVar15 & uVar7 - 1;
      }
      else if (uVar7 <= uVar15) {
        uVar8 = 0;
        if (uVar7 != 0) {
          uVar8 = uVar15 / uVar7;
        }
        uVar15 = uVar15 - uVar8 * uVar7;
      }
      plVar11 = (long *)(*(long *)(lVar4 + 0xe0) + uVar15 * 8);
      goto LAB_109293344;
    }
  }
  else {
    *plVar6 = *plVar11;
LAB_109293344:
    *plVar11 = (long)plVar6;
  }
  *(long *)(lVar4 + 0xf8) = *(long *)(lVar4 + 0xf8) + 1;
LAB_109293354:
  *(undefined1 *)(plVar6 + 3) = 1;
  __ZNSt3__15mutex6unlockEv(lVar4 + 0x18);
LAB_109293364:
  plVar6 = plVar14 + 1;
  do {
    lVar4 = *plVar6;
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
    if (bVar2) {
      *plVar6 = lVar4 + -1;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  if (lVar4 != 0) {
    return;
  }
  (**(code **)(*plVar14 + 0x10))(plVar14);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_count14__release_weakEv_110346648)(plVar14);
  return;
}



/* Entry: 109293110; end: 1092933fb;  */

void FUN_109293110(long *param_1,ulong param_2)

{
  char cVar1;
  bool bVar2;
  ulong uVar3;
  long *plVar4;
  ulong uVar5;
  long *plVar6;
  ulong uVar7;
  undefined8 *puVar8;
  ulong uVar9;
  long lVar10;
  long *plVar11;
  long lVar12;
  ulong uVar13;
  ulong unaff_x25;
  float fVar14;
  
  plVar4 = (long *)param_1[1];
  if (plVar4 == (long *)0x0) {
    return;
  }
  __ZNSt3__119__shared_weak_count4lockEv();
  if (plVar4 == (long *)0x0) {
    return;
  }
  lVar12 = *param_1;
  if ((lVar12 == 0) || ((int)param_1[2] != *(int *)(lVar12 + 0x58))) goto LAB_109293364;
  __ZNSt3__15mutex4lockEv(lVar12 + 0x18);
  uVar7 = ((ulong)(uint)((int)param_2 << 3) + 8 ^ param_2 >> 0x20) * -0x622015f714c7d297;
  uVar7 = (param_2 >> 0x20 ^ uVar7 >> 0x2f ^ uVar7) * -0x622015f714c7d297;
  uVar13 = (uVar7 ^ uVar7 >> 0x2f) * -0x622015f714c7d297;
  uVar7 = *(ulong *)(lVar12 + 0xe8);
  if (uVar7 != 0) {
    uVar5 = uVar7 - 1;
    if ((uVar7 & uVar5) == 0) {
      unaff_x25 = uVar5 & uVar13;
    }
    else {
      unaff_x25 = uVar13;
      if (uVar7 <= uVar13) {
        uVar9 = 0;
        if (uVar7 != 0) {
          uVar9 = uVar13 / uVar7;
        }
        unaff_x25 = uVar13 - uVar9 * uVar7;
      }
    }
    puVar8 = *(undefined8 **)(*(long *)(lVar12 + 0xe0) + unaff_x25 * 8);
    if (puVar8 != (undefined8 *)0x0) {
      for (plVar11 = (long *)*puVar8; plVar11 != (long *)0x0; plVar11 = (long *)*plVar11) {
        uVar9 = plVar11[1];
        if (uVar9 == uVar13) {
          if (plVar11[2] == param_2) goto LAB_109293354;
        }
        else {
          if ((uVar7 & uVar5) == 0) {
            uVar9 = uVar9 & uVar5;
          }
          else if (uVar7 <= uVar9) {
            uVar3 = 0;
            if (uVar7 != 0) {
              uVar3 = uVar9 / uVar7;
            }
            uVar9 = uVar9 - uVar3 * uVar7;
          }
          if (uVar9 != unaff_x25) break;
        }
      }
    }
  }
  plVar11 = (long *)0x20;
  __Znwm();
  *plVar11 = 0;
  plVar11[1] = uVar13;
  plVar11[2] = param_2;
  *(undefined1 *)(plVar11 + 3) = 0;
  fVar14 = (float)(*(long *)(lVar12 + 0xf8) + 1);
  if ((uVar7 == 0) || (*(float *)(lVar12 + 0x100) * (float)uVar7 < fVar14)) {
    uVar5 = 1;
    if (2 < uVar7) {
      uVar5 = (ulong)((uVar7 & uVar7 - 1) != 0);
    }
    uVar5 = uVar5 | uVar7 << 1;
    uVar7 = (ulong)(fVar14 / *(float *)(lVar12 + 0x100));
    if (uVar5 <= uVar7) {
      uVar5 = uVar7;
    }
    FUN_109292f40(lVar12 + 0xe0,uVar5);
    uVar7 = *(ulong *)(lVar12 + 0xe8);
    if ((uVar7 & uVar7 - 1) == 0) {
      unaff_x25 = uVar7 - 1 & uVar13;
    }
    else {
      unaff_x25 = uVar13;
      if (uVar7 <= uVar13) {
        uVar5 = 0;
        if (uVar7 != 0) {
          uVar5 = uVar13 / uVar7;
        }
        unaff_x25 = uVar13 - uVar5 * uVar7;
      }
    }
  }
  lVar10 = *(long *)(lVar12 + 0xe0);
  plVar6 = *(long **)(lVar10 + unaff_x25 * 8);
  if (plVar6 == (long *)0x0) {
    plVar6 = (long *)(lVar12 + 0xf0);
    *plVar11 = *plVar6;
    *plVar6 = (long)plVar11;
    *(long **)(lVar10 + unaff_x25 * 8) = plVar6;
    if (*plVar11 != 0) {
      uVar13 = *(ulong *)(*plVar11 + 8);
      if ((uVar7 & uVar7 - 1) == 0) {
        uVar13 = uVar13 & uVar7 - 1;
      }
      else if (uVar7 <= uVar13) {
        uVar5 = 0;
        if (uVar7 != 0) {
          uVar5 = uVar13 / uVar7;
        }
        uVar13 = uVar13 - uVar5 * uVar7;
      }
      plVar6 = (long *)(*(long *)(lVar12 + 0xe0) + uVar13 * 8);
      goto LAB_109293344;
    }
  }
  else {
    *plVar11 = *plVar6;
LAB_109293344:
    *plVar6 = (long)plVar11;
  }
  *(long *)(lVar12 + 0xf8) = *(long *)(lVar12 + 0xf8) + 1;
LAB_109293354:
  *(undefined1 *)(plVar11 + 3) = 1;
  __ZNSt3__15mutex6unlockEv(lVar12 + 0x18);
LAB_109293364:
  plVar11 = plVar4 + 1;
  do {
    lVar12 = *plVar11;
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar11,0x10);
    if (bVar2) {
      *plVar11 = lVar12 + -1;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  if (lVar12 != 0) {
    return;
  }
  (**(code **)(*plVar4 + 0x10))(plVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_count14__release_weakEv_110346648)(plVar4);
  return;
}



/* Entry: 1092933fc; end: 10929346f;  */

void FUN_1092933fc(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110ae76f8;
  if (param_1[5] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)(param_1);
  return;
}



/* Entry: 109293470; end: 1092934af;  */

void FUN_109293470(long param_1)

{
  FUN_109293110(param_1 + 0x20,*(undefined8 *)(param_1 + 0x18));
  if (*(long *)(param_1 + 0x28) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZNSt3__119__shared_weak_count14__release_weakEv_110346648)();
    return;
  }
  return;
}



/* Entry: 1092934b0; end: 1092934eb;  */

long FUN_1092934b0(long param_1,undefined8 param_2)

{
  func_0x000107c31948(param_2,&PTR_DAT_110ae7738);
  param_1 = param_1 + 0x20;
  if ((int)param_2 == 0) {
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 1092934ec; end: 1092934ef;  */

void FUN_1092934ec(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1092934f0; end: 109293547;  */

long FUN_1092934f0(long param_1)

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



/* Entry: 109293548; end: 109293c4b;  */

/* WARNING: Removing unreachable block (ram,0x000109293ae8) */

long * FUN_109293548(long *param_1,long param_2,long *param_3,long *param_4,long *param_5)

{
  long lVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  code *pcVar5;
  undefined8 *puVar6;
  long *plVar7;
  long lVar8;
  ulong uVar9;
  undefined8 *puVar10;
  ulong uVar11;
  long *plVar12;
  long lVar13;
  undefined8 *puVar14;
  long *plVar15;
  long lVar16;
  long lVar17;
  undefined8 uVar18;
  long *plStack_70;
  undefined1 uStack_68;
  
  *param_1 = param_2;
  lVar8 = param_5[1];
  lVar16 = *param_5;
  param_1[2] = param_5[1];
  param_1[1] = lVar16;
  if (lVar8 != 0) {
    plVar7 = (long *)(lVar8 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar3) {
        *plVar7 = *plVar7 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  lVar8 = param_4[0x5d];
  lVar16 = param_4[0x5c];
  param_1[4] = param_4[0x5d];
  param_1[3] = lVar16;
  if (lVar8 != 0) {
    plVar7 = (long *)(lVar8 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar3) {
        *plVar7 = *plVar7 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  plStack_70 = param_1 + 6;
  *plStack_70 = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  puVar10 = (undefined8 *)param_4[0x5e];
  puVar14 = (undefined8 *)param_4[0x5f];
  uStack_68 = 0;
  puVar4 = (undefined8 *)((long)puVar14 - (long)puVar10);
  if (puVar4 != (undefined8 *)0x0) {
    if ((long)puVar4 < 0) {
      FUN_109294b24();
      goto LAB_109293ba8;
    }
    puVar6 = puVar4;
    __Znwm();
    param_1[6] = (long)puVar6;
    param_1[7] = (long)puVar6;
    param_1[8] = (long)puVar6 + (long)puVar4;
    do {
      lVar8 = puVar10[1];
      uVar18 = *puVar10;
      puVar6[1] = puVar10[1];
      *puVar6 = uVar18;
      if (lVar8 != 0) {
        plVar7 = (long *)(lVar8 + 8);
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar7,0x10);
          if (bVar3) {
            *plVar7 = *plVar7 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      puVar10 = puVar10 + 2;
      puVar6 = puVar6 + 2;
    } while (puVar10 != puVar14);
    param_1[7] = (long)puVar6;
  }
  param_1[10] = 0;
  param_1[9] = 0;
  *(undefined4 *)(param_1 + 0xf) = 0;
  param_1[0xc] = 0;
  param_1[0xb] = 0;
  param_1[0xe] = 0;
  param_1[0xd] = 0;
  _bzero(param_1 + 0x10,0x228);
  lVar8 = 0xa0;
  do {
    puVar10 = (undefined8 *)((long)param_1 + lVar8);
    puVar10[5] = 0;
    puVar10[4] = 0xffffffff;
    puVar10[7] = 0;
    puVar10[6] = 0xffffffff;
    puVar10[1] = 0;
    *puVar10 = 0xffffffff;
    puVar10[3] = 0;
    puVar10[2] = 0xffffffff;
    lVar8 = lVar8 + 0x40;
  } while (lVar8 != 0x2a0);
  lVar8 = 0;
  param_1[99] = 0;
  param_1[0x62] = 0;
  param_1[0x65] = 0;
  param_1[100] = 0;
  param_1[0x5f] = 0;
  param_1[0x5e] = 0;
  param_1[0x61] = 0;
  param_1[0x60] = 0;
  param_1[0x5b] = 0;
  param_1[0x5a] = 0;
  param_1[0x5d] = 0;
  param_1[0x5c] = 0;
  param_1[0x57] = 0;
  param_1[0x56] = 0;
  param_1[0x59] = 0;
  param_1[0x58] = 0;
  param_1[0x55] = 0;
  param_1[0x54] = 0;
  param_1[0x5a] = 0xffffffff;
  param_1[0x59] = 0x100000000;
  param_1[0x5c] = 0xffffffff;
  param_1[0x5b] = 0x100000000;
  param_1[0x56] = 0xffffffff;
  param_1[0x55] = 0x100000000;
  param_1[0x58] = 0xffffffff;
  param_1[0x57] = 0x100000000;
  param_1[0x62] = 0xffffffff;
  param_1[0x61] = 0x100000000;
  param_1[100] = 0xffffffff;
  param_1[99] = 0x100000000;
  param_1[0x5e] = 0xffffffff;
  param_1[0x5d] = 0x100000000;
  param_1[0x60] = 0xffffffff;
  param_1[0x5f] = 0x100000000;
  param_1[0x69] = 0;
  param_1[0x67] = 0;
  *(undefined8 *)((long)param_1 + 0x33d) = 0;
  *(undefined4 *)(param_1 + 0x6a) = 1;
  *(undefined4 *)((long)param_1 + 0x35c) = 7;
  *(undefined8 *)((long)param_1 + 0x36c) = 0x700000000;
  *(undefined8 *)((long)param_1 + 0x364) = 0;
  *(undefined8 *)((long)param_1 + 0x37c) = 0;
  *(undefined8 *)((long)param_1 + 0x374) = 0;
  param_1[0x90] = 0;
  param_1[0x8f] = 0;
  param_1[0x92] = 0;
  param_1[0x91] = 0;
  param_1[0x8c] = 0;
  param_1[0x8b] = 0;
  param_1[0x8e] = 0;
  param_1[0x8d] = 0;
  param_1[0x88] = 0;
  param_1[0x87] = 0;
  param_1[0x8a] = 0;
  param_1[0x89] = 0;
  param_1[0x84] = 0;
  param_1[0x83] = 0;
  param_1[0x86] = 0;
  param_1[0x85] = 0;
  param_1[0x80] = 0;
  param_1[0x7f] = 0;
  param_1[0x82] = 0;
  param_1[0x81] = 0;
  param_1[0x7c] = 0;
  param_1[0x7b] = 0;
  param_1[0x7e] = 0;
  param_1[0x7d] = 0;
  param_1[0x78] = 0;
  param_1[0x77] = 0;
  param_1[0x7a] = 0;
  param_1[0x79] = 0;
  param_1[0x74] = 0;
  param_1[0x73] = 0;
  param_1[0x76] = 0;
  param_1[0x75] = 0;
  param_1[0x65] = 0;
  *(undefined4 *)(param_1 + 0x66) = 0;
  *(undefined1 *)((long)param_1 + 0x334) = 0;
  *(undefined2 *)((long)param_1 + 0x354) = 0;
  *(undefined2 *)(param_1 + 0x6b) = 0;
  *(undefined1 *)(param_1 + 0x6c) = 0;
  *(undefined4 *)((long)param_1 + 900) = 0;
  param_1[0x71] = 7;
  *(undefined4 *)(param_1 + 0x72) = 0;
  param_1[0x93] = 0;
  do {
    *(undefined1 *)((long)param_1 + lVar8 + 0x398) = 0;
    *(undefined8 *)((long)param_1 + lVar8 + 0x3a4) = 0x100000000;
    *(undefined8 *)((long)param_1 + lVar8 + 0x39c) = 1;
    *(undefined8 *)((long)param_1 + lVar8 + 0x3ac) = 0;
    *(undefined4 *)((long)param_1 + lVar8 + 0x3b4) = 0;
    lVar8 = lVar8 + 0x20;
  } while (lVar8 != 0x100);
  *(undefined4 *)(param_1 + 0x96) = 0;
  *(undefined4 *)(param_1 + 0x95) = 0;
  param_1[0x94] = 0;
  param_1[0x93] = 0;
  param_1[0xa1] = 0;
  param_1[0x98] = 0;
  param_1[0x97] = 0;
  param_1[0x9a] = 0;
  param_1[0x99] = 0;
  param_1[0x9c] = 0;
  param_1[0x9b] = 0;
  param_1[0x9e] = 0;
  param_1[0x9d] = 0;
  param_1[0xa0] = 0;
  param_1[0x9f] = 0;
  param_1[0xa2] = -1;
  plVar7 = param_1 + 0xab;
  *(undefined1 *)(param_1 + 0xb4) = 0;
  param_1[0xb6] = 0;
  param_1[0xb5] = 0;
  param_1[0xb8] = 0;
  param_1[0xb7] = 0;
  *(undefined1 *)(param_1 + 0xab) = 0;
  param_1[0xa4] = 0;
  param_1[0xa3] = 0;
  param_1[0xa6] = 0;
  param_1[0xa5] = 0;
  param_1[0xa8] = 0;
  param_1[0xa7] = 0;
  param_1[0xaa] = 0;
  param_1[0xa9] = 0;
  *(undefined4 *)(param_1 + 0xb9) = 0x3f800000;
  param_1[0xbb] = 0;
  param_1[0xba] = 0;
  param_1[0xbd] = 0;
  param_1[0xbc] = 0;
  *(undefined4 *)(param_1 + 0xbe) = 0x3f800000;
  if (param_3[1] != 0) {
    uVar11 = 0;
    do {
      uVar9 = param_1[0x13];
      if (2 < uVar9) {
        plVar7 = (long *)0x10;
        ___cxa_allocate_exception();
        __ZNSt11logic_errorC2EPKc();
        *plVar7 = (long)(PTR___ZTVSt12length_error_110346b58 + 0x10);
        ___cxa_throw(plVar7,PTR___ZTISt12length_error_110352238,
                     PTR___ZNSt12length_errorD1Ev_110346170);
        goto LAB_109293ba8;
      }
      (param_1 + 0x10)[uVar9] = *(long *)(*param_3 + uVar11 * 0x10);
      param_1[0x13] = uVar9 + 1;
      plVar12 = (long *)(*param_3 + uVar11 * 0x10);
      lVar16 = plVar12[1];
      lVar8 = *plVar12;
      if (plVar12[1] != 0) {
        plVar12 = (long *)(plVar12[1] + 8);
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar12,0x10);
          if (bVar3) {
            *plVar12 = *plVar12 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      plVar12 = param_1 + 9 + uVar11 * 2;
      plVar15 = (long *)plVar12[1];
      plVar12[1] = lVar16;
      *plVar12 = lVar8;
      if (plVar15 != (long *)0x0) {
        plVar12 = plVar15 + 1;
        do {
          lVar8 = *plVar12;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar12,0x10);
          if (bVar3) {
            *plVar12 = lVar8 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar8 == 0) {
          (**(code **)(*plVar15 + 0x10))(plVar15);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar15);
        }
      }
      uVar11 = uVar11 + 1;
    } while (uVar11 < (ulong)param_3[1]);
  }
  *(undefined4 *)(param_1 + 0xf) = 2;
  if (param_1 + 0x14 != param_4) {
    param_1[0x54] = 0;
    if (param_4[0x40] != 0) {
      lVar8 = param_4[0x40] << 4;
      plVar12 = param_4;
      do {
        FUN_10925ed60(param_1 + 0x14,plVar12);
        plVar12 = plVar12 + 2;
        lVar8 = lVar8 + -0x10;
      } while (lVar8 != 0);
    }
    param_1[0x65] = 0;
    if (param_4[0x51] != 0) {
      plVar12 = param_4 + 0x41;
      lVar8 = param_4[0x51] << 4;
      do {
        FUN_10925ede0(param_1 + 0x55,plVar12);
        plVar12 = plVar12 + 2;
        lVar8 = lVar8 + -0x10;
      } while (lVar8 != 0);
    }
  }
  cVar2 = (char)param_1[0xb4];
  if (cVar2 == (char)param_4[0x5b]) {
    if ((plVar7 != param_4 + 0x52) && (cVar2 != '\0')) {
      FUN_1092425a8(plVar7,param_4[0x52],param_4[0x53],
                    (param_4[0x53] - param_4[0x52] >> 3) * -0x3333333333333333);
      FUN_1092428a8(param_1 + 0xae,param_4[0x55],param_4[0x56],param_4[0x56] - param_4[0x55] >> 4);
      lVar8 = param_4[0x58];
      lVar13 = param_4[0x59];
      uVar11 = lVar13 - lVar8;
      lVar16 = param_1[0xb1];
      if ((ulong)(param_1[0xb3] - lVar16) < uVar11) {
        uVar11 = (long)uVar11 >> 5;
        FUN_109294ba8(param_1 + 0xb1);
        if (uVar11 >> 0x3b != 0) {
          FUN_109242b18();
LAB_109293ba8:
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x109293bac);
          (*pcVar5)();
        }
        uVar9 = param_1[0xb3] - param_1[0xb1] >> 4;
        if (uVar9 <= uVar11) {
          uVar9 = uVar11;
        }
        if (0x7fffffffffffffdf < (ulong)(param_1[0xb3] - param_1[0xb1])) {
          uVar9 = 0x7ffffffffffffff;
        }
        FUN_10925eff0(param_1 + 0xb1,uVar9);
        plVar7 = param_1 + 0xb1;
        FUN_10925f028(plVar7,lVar8,lVar13,param_1[0xb2]);
      }
      else {
        lVar17 = param_1[0xb2];
        if (uVar11 <= (ulong)(lVar17 - lVar16)) {
          if (lVar8 != lVar13) {
            do {
              __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_(lVar16,lVar8)
              ;
              *(undefined4 *)(lVar16 + 0x18) = *(undefined4 *)(lVar8 + 0x18);
              lVar8 = lVar8 + 0x20;
              lVar16 = lVar16 + 0x20;
            } while (lVar8 != lVar13);
            lVar17 = param_1[0xb2];
          }
          for (; lVar17 != lVar16; lVar17 = lVar17 + -0x20) {
          }
          param_1[0xb2] = lVar16;
          goto LAB_109293afc;
        }
        lVar1 = lVar8 + (lVar17 - lVar16);
        if (lVar17 != lVar16) {
          do {
            __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_(lVar16,lVar8);
            *(undefined4 *)(lVar16 + 0x18) = *(undefined4 *)(lVar8 + 0x18);
            lVar8 = lVar8 + 0x20;
            lVar16 = lVar16 + 0x20;
          } while (lVar8 != lVar1);
          lVar17 = param_1[0xb2];
        }
        plVar7 = param_1 + 0xb1;
        FUN_10925f028(plVar7,lVar1,lVar13,lVar17);
      }
      param_1[0xb2] = (long)plVar7;
    }
  }
  else if (cVar2 == '\0') {
    FUN_10925eeb8(plVar7);
    *(undefined1 *)(param_1 + 0xb4) = 1;
  }
  else {
    plStack_70 = param_1 + 0xb1;
    func_0x000109234ab4(&plStack_70);
    if (param_1[0xae] != 0) {
      param_1[0xaf] = param_1[0xae];
      __ZdlPv();
    }
    plStack_70 = plVar7;
    func_0x00010922e0d8(&plStack_70);
    *(undefined1 *)(param_1 + 0xb4) = 0;
  }
LAB_109293afc:
  param_1[0xaa] = param_4[0x5c];
  param_1[0xa9] = *param_5;
  if (*(char *)(param_2 + 0x5c) == '\x01') {
    if (param_1[0x9b] == 0) {
      *(undefined4 *)(param_1 + 0x97) = 0;
    }
    param_1[0x9b] = 1;
  }
  return param_1;
}



/* Entry: 109293c4c; end: 109294393;  */

void FUN_109293c4c(long *param_1,uint param_2,uint param_3,uint param_4,uint param_5)

{
  long *plVar1;
  char cVar2;
  ulong uVar3;
  code *pcVar4;
  bool bVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  undefined8 *puVar11;
  long *plVar12;
  ulong uVar13;
  long *plVar14;
  long *plVar15;
  long *plVar16;
  ulong uVar17;
  ulong uVar18;
  long lVar19;
  long lStack_8f0;
  long *plStack_8e8;
  undefined8 uStack_8e0;
  undefined4 uStack_8d8;
  long *plStack_8d0;
  long *plStack_8c8;
  undefined8 uStack_8c0;
  undefined4 uStack_8b8;
  undefined8 auStack_8b0 [2];
  uint uStack_8a0;
  undefined4 uStack_89c;
  undefined8 uStack_898;
  undefined8 uStack_890;
  uint uStack_888;
  uint uStack_884;
  undefined1 auStack_880 [816];
  undefined8 uStack_550;
  undefined1 auStack_548 [40];
  undefined4 uStack_520;
  uint uStack_51c;
  undefined8 uStack_4e0;
  ulong uStack_208;
  undefined8 auStack_200 [3];
  undefined4 auStack_1e8 [92];
  undefined8 uStack_78;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  *(uint *)(param_1 + 5) = param_2;
  if (*(char *)(*param_1 + 0x5c) == '\x01') {
    *(uint *)(param_1 + 0x97) = param_2;
  }
  else {
    plVar1 = param_1 + 0xba;
    uVar9 = (ulong)param_2 + 0x9e3779b97f4a7c15;
    uVar9 = uVar9 * 0x40 + (ulong)param_3 + (uVar9 >> 2) + 0x9e3779b97f4a7c15 ^ uVar9;
    uVar9 = uVar9 * 0x40 + (ulong)param_4 + (uVar9 >> 2) + 0x9e3779b97f4a7c15 ^ uVar9;
    uVar9 = uVar9 * 0x40 + (ulong)param_5 + (uVar9 >> 2) + 0x9e3779b97f4a7c15 ^ uVar9;
    uVar8 = param_1[0xbb];
    if (uVar8 != 0) {
      uVar10 = uVar8 - 1;
      if ((uVar8 & uVar10) == 0) {
        uVar13 = uVar8 + 0x7fffffffffffffff & uVar9;
      }
      else {
        uVar13 = uVar9;
        if (uVar8 <= uVar9) {
          uVar13 = 0;
          if (uVar8 != 0) {
            uVar13 = uVar9 / uVar8;
          }
          uVar13 = uVar9 - uVar13 * uVar8;
        }
      }
      plVar14 = *(long **)(*plVar1 + uVar13 * 8);
      if (plVar14 != (long *)0x0) {
        do {
          while( true ) {
            plVar14 = (long *)*plVar14;
            if (plVar14 == (long *)0x0) goto LAB_109293db4;
            uVar17 = plVar14[1];
            if (uVar17 != uVar9) break;
            if ((((*(uint *)(plVar14 + 2) == param_2) &&
                 (*(uint *)((long)plVar14 + 0x14) == param_3)) &&
                (*(uint *)(plVar14 + 3) == param_4)) && (*(uint *)((long)plVar14 + 0x1c) == param_5)
               ) {
              lVar19 = plVar14[4];
              goto LAB_1092942d0;
            }
          }
          if ((uVar8 & uVar10) == 0) {
            uVar17 = uVar17 & uVar10;
          }
          else if (uVar8 <= uVar17) {
            uVar18 = 0;
            if (uVar8 != 0) {
              uVar18 = uVar17 / uVar8;
            }
            uVar17 = uVar17 - uVar18 * uVar8;
          }
        } while (uVar17 == uVar13);
      }
    }
LAB_109293db4:
    _bzero(auStack_880,0x330);
    lVar19 = 0;
    do {
      *(undefined8 *)((long)auStack_8b0 + lVar19) = 0;
      *(undefined8 *)((long)auStack_8b0 + lVar19 + 8) = 0;
      *(undefined8 *)((long)&uStack_8a0 + lVar19) = 0x100000004;
      *(undefined1 *)((long)&uStack_898 + lVar19) = 0;
      *(undefined1 *)((long)&uStack_898 + lVar19 + 4) = 0;
      lVar6 = lVar19 + 0x30;
      *(undefined8 *)((long)&uStack_890 + lVar19) = 0;
      *(undefined8 *)((long)&uStack_888 + lVar19) = 0;
      lVar19 = lVar6;
    } while (lVar6 != 0x360);
    _bzero(auStack_548,0x4d0);
    lVar19 = 0;
    do {
      *(undefined8 *)((long)auStack_200 + lVar19 + 0x10) = 0;
      *(undefined8 *)((long)auStack_200 + lVar19 + 8) = 0;
      *(undefined8 *)((long)auStack_200 + lVar19) = 0;
      *(undefined4 *)((long)auStack_1e8 + lVar19) = 1;
      lVar19 = lVar19 + 0x1c;
    } while (lVar19 != 0x188);
    uStack_78 = 0;
    auStack_8b0[1] = 0;
    uStack_898 = 0;
    uStack_890 = 0;
    uStack_550 = 1;
    _uStack_8a0 = CONCAT44(1,param_2);
    auStack_8b0[0] = 0x100000001;
    uStack_888 = param_3;
    uStack_884 = param_5;
    do {
      FUN_109294be0(auStack_548);
      bVar5 = 0xfffffffffffffffe < uStack_208;
      uStack_208 = uStack_208 + 1;
    } while (bVar5);
    uVar8 = 1;
    uStack_4e0 = 1;
    uStack_520 = 0;
    plStack_8c8 = (long *)0x5000000068;
    plStack_8d0 = (long *)0xffffffff;
    uStack_8c0 = 0x1e000000148;
    uStack_8b8 = 1;
    uStack_51c = param_4;
    FUN_109294394(auStack_200,&plStack_8d0);
    plStack_8e8 = (long *)0x800000060;
    lStack_8f0 = -0x100000000;
    uStack_8e0 = 0x800000140;
    uStack_8d8 = 1;
    FUN_109294394(auStack_200,&lStack_8f0);
    (**(code **)(*(long *)*param_1 + 0x90))(&lStack_8f0,(long *)*param_1,auStack_8b0);
    lVar19 = lStack_8f0;
    uVar10 = param_1[0xbb];
    if (uVar10 != 0) {
      uVar13 = uVar10 - 1;
      if ((uVar10 & uVar13) == 0) {
        uVar8 = uVar10 + 0x7fffffffffffffff & uVar9;
      }
      else {
        uVar8 = uVar9;
        if (uVar10 <= uVar9) {
          uVar8 = 0;
          if (uVar10 != 0) {
            uVar8 = uVar9 / uVar10;
          }
          uVar8 = uVar9 - uVar8 * uVar10;
        }
      }
      puVar11 = *(undefined8 **)(*plVar1 + uVar8 * 8);
      if (puVar11 != (undefined8 *)0x0) {
        for (plVar14 = (long *)*puVar11; plVar14 != (long *)0x0; plVar14 = (long *)*plVar14) {
          uVar17 = plVar14[1];
          if (uVar17 == uVar9) {
            if (((*(uint *)(plVar14 + 2) == param_2) && (*(uint *)((long)plVar14 + 0x14) == param_3)
                ) && ((*(uint *)(plVar14 + 3) == param_4 &&
                      (lVar6 = lStack_8f0, *(uint *)((long)plVar14 + 0x1c) == param_5))))
            goto LAB_109294254;
          }
          else {
            if ((uVar10 & uVar13) == 0) {
              uVar17 = uVar17 & uVar13;
            }
            else if (uVar10 <= uVar17) {
              uVar18 = 0;
              if (uVar10 != 0) {
                uVar18 = uVar17 / uVar10;
              }
              uVar17 = uVar17 - uVar18 * uVar10;
            }
            if (uVar17 != uVar8) break;
          }
        }
      }
    }
    plVar14 = (long *)0x30;
    __Znwm();
    uStack_8c0 = 1;
    *plVar14 = 0;
    plVar14[1] = uVar9;
    *(uint *)(plVar14 + 2) = param_2;
    *(uint *)((long)plVar14 + 0x14) = param_3;
    *(uint *)(plVar14 + 3) = param_4;
    *(uint *)((long)plVar14 + 0x1c) = param_5;
    plVar14[4] = 0;
    plVar14[5] = 0;
    plStack_8d0 = plVar14;
    plStack_8c8 = plVar1;
    if ((uVar10 == 0) || (*(float *)(param_1 + 0xbe) * (float)uVar10 < (float)(param_1[0xbd] + 1)))
    {
      uVar8 = 1;
      if (2 < uVar10) {
        uVar8 = (ulong)((uVar10 & uVar10 - 1) != 0);
      }
      uVar8 = uVar8 | uVar10 << 1;
      uVar13 = (ulong)((float)(param_1[0xbd] + 1) / *(float *)(param_1 + 0xbe));
      if (uVar8 <= uVar13) {
        uVar8 = uVar13;
      }
      if (uVar8 - 1 == 0) {
        uVar8 = 2;
      }
      else if ((uVar8 & uVar8 - 1) != 0) {
        __ZNSt3__112__next_primeEm();
        uVar10 = param_1[0xbb];
      }
      if (uVar10 < uVar8) {
LAB_109294054:
        if (uVar8 >> 0x3d != 0) goto LAB_109294360;
        lVar6 = uVar8 << 3;
        __Znwm();
        lVar7 = *plVar1;
        *plVar1 = lVar6;
        if (lVar7 != 0) {
          __ZdlPv();
        }
        uVar10 = 0;
        param_1[0xbb] = uVar8;
        do {
          *(undefined8 *)(*plVar1 + uVar10 * 8) = 0;
          uVar10 = uVar10 + 1;
        } while (uVar8 != uVar10);
        plVar12 = (long *)param_1[0xbc];
        uVar10 = uVar8;
        if (plVar12 != (long *)0x0) {
          uVar13 = plVar12[1];
          uVar17 = uVar8 - 1;
          if ((uVar8 & uVar17) == 0) {
            uVar13 = uVar13 & uVar17;
          }
          else if (uVar8 <= uVar13) {
            uVar18 = 0;
            if (uVar8 != 0) {
              uVar18 = uVar13 / uVar8;
            }
            uVar13 = uVar13 - uVar18 * uVar8;
          }
          *(long **)(*plVar1 + uVar13 * 8) = param_1 + 0xbc;
          plVar15 = (long *)*plVar12;
          while (plVar15 != (long *)0x0) {
            uVar18 = plVar15[1];
            if ((uVar8 & uVar17) == 0) {
              uVar18 = uVar18 & uVar17;
            }
            else if (uVar8 <= uVar18) {
              uVar3 = 0;
              if (uVar8 != 0) {
                uVar3 = uVar18 / uVar8;
              }
              uVar18 = uVar18 - uVar3 * uVar8;
            }
            plVar16 = plVar15;
            if (uVar18 != uVar13) {
              lVar6 = *plVar1;
              if (*(long *)(lVar6 + uVar18 * 8) == 0) {
                *(long **)(lVar6 + uVar18 * 8) = plVar12;
                uVar13 = uVar18;
              }
              else {
                *plVar12 = *plVar15;
                *plVar15 = **(undefined8 **)(lVar6 + uVar18 * 8);
                **(long **)(lVar6 + uVar18 * 8) = (long)plVar15;
                plVar16 = plVar12;
              }
            }
            plVar12 = plVar16;
            plVar15 = (long *)*plVar16;
          }
        }
      }
      else if (uVar8 < uVar10) {
        uVar13 = (ulong)((float)(ulong)param_1[0xbd] / *(float *)(param_1 + 0xbe));
        if ((uVar10 < 3) || ((uVar10 & uVar10 - 1) != 0)) {
          __ZNSt3__112__next_primeEm();
        }
        else if (1 < uVar13) {
          uVar13 = 1L << (-LZCOUNT(uVar13 - 1) & 0x3fU);
        }
        if (uVar8 <= uVar13) {
          uVar8 = uVar13;
        }
        if (uVar8 < uVar10) {
          if (uVar8 != 0) goto LAB_109294054;
          lVar6 = *plVar1;
          *plVar1 = 0;
          if (lVar6 != 0) {
            __ZdlPv();
          }
          param_1[0xbb] = 0;
          uVar10 = 0;
        }
        else {
          uVar10 = param_1[0xbb];
        }
      }
      if ((uVar10 & uVar10 - 1) == 0) {
        uVar8 = uVar10 + 0x7fffffffffffffff & uVar9;
      }
      else {
        uVar8 = uVar9;
        if (uVar10 <= uVar9) {
          uVar8 = 0;
          if (uVar10 != 0) {
            uVar8 = uVar9 / uVar10;
          }
          uVar8 = uVar9 - uVar8 * uVar10;
        }
      }
    }
    lVar6 = *plVar1;
    plVar12 = *(long **)(lVar6 + uVar8 * 8);
    if (plVar12 == (long *)0x0) {
      *plVar14 = param_1[0xbc];
      param_1[0xbc] = (long)plVar14;
      *(long **)(lVar6 + uVar8 * 8) = param_1 + 0xbc;
      if (*plVar14 != 0) {
        uVar9 = *(ulong *)(*plVar14 + 8);
        if ((uVar10 & uVar10 - 1) == 0) {
          uVar9 = uVar9 & uVar10 - 1;
        }
        else if (uVar10 <= uVar9) {
          uVar8 = 0;
          if (uVar10 != 0) {
            uVar8 = uVar9 / uVar10;
          }
          uVar9 = uVar9 - uVar8 * uVar10;
        }
        plVar12 = (long *)(*plVar1 + uVar9 * 8);
        goto LAB_109294240;
      }
    }
    else {
      *plVar14 = *plVar12;
LAB_109294240:
      *plVar12 = (long)plVar14;
    }
    param_1[0xbd] = param_1[0xbd] + 1;
    lVar6 = lStack_8f0;
LAB_109294254:
    plVar1 = plStack_8e8;
    lStack_8f0 = 0;
    plStack_8e8 = (long *)0x0;
    plVar12 = (long *)plVar14[5];
    plVar14[4] = lVar6;
    plVar14[5] = (long)plVar1;
    if (plVar12 != (long *)0x0) {
      plVar1 = plVar12 + 1;
      do {
        lVar6 = *plVar1;
        cVar2 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar5) {
          *plVar1 = lVar6 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar6 == 0) {
        (**(code **)(*plVar12 + 0x10))(plVar12);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar12);
      }
    }
    plVar1 = plStack_8e8;
    if (plStack_8e8 != (long *)0x0) {
      plVar14 = plStack_8e8 + 1;
      do {
        lVar6 = *plVar14;
        cVar2 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar14,0x10);
        if (bVar5) {
          *plVar14 = lVar6 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar6 == 0) {
        (**(code **)(*plStack_8e8 + 0x10))(plStack_8e8);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar1);
      }
    }
LAB_1092942d0:
    param_1[0x94] = lVar19;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
LAB_109294360:
  func_0x000104c4f740();
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x109294368);
  (*pcVar4)();
}



/* Entry: 109294394; end: 10929441f;  */

long * FUN_109294394(long *param_1,undefined8 *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  ulong uVar4;
  code *pcVar5;
  undefined8 *puVar6;
  long lVar7;
  long lVar8;
  undefined8 *puVar9;
  long *plVar10;
  undefined1 *puVar11;
  long **pplVar12;
  long **pplVar13;
  ulong uVar14;
  long *plVar15;
  ulong uVar16;
  long lVar17;
  long **pplVar18;
  long *plVar19;
  long **pplVar20;
  undefined1 *puVar21;
  long lVar22;
  undefined8 *puVar23;
  long **unaff_x22;
  long *plVar24;
  undefined1 *puVar25;
  long **pplVar26;
  undefined1 *puVar27;
  undefined8 uVar28;
  undefined8 uVar29;
  undefined8 uVar30;
  undefined1 auStack_5e8 [1224];
  undefined8 uStack_120;
  undefined1 auStack_108 [80];
  long **pplStack_b8;
  long *plStack_b0;
  long *plStack_a8;
  undefined8 uStack_a0;
  
  if ((ulong)param_1[0x31] < 0xe) {
    puVar9 = (undefined8 *)((long)param_1 + param_1[0x31] * 0x1c);
    uVar29 = param_2[1];
    uVar28 = *param_2;
    uVar30 = *(undefined8 *)((long)param_2 + 0xc);
    *(undefined8 *)((long)puVar9 + 0x14) = *(undefined8 *)((long)param_2 + 0x14);
    *(undefined8 *)((long)puVar9 + 0xc) = uVar30;
    puVar9[1] = uVar29;
    *puVar9 = uVar28;
    param_1[0x31] = param_1[0x31] + 1;
    return param_1;
  }
  puVar6 = (undefined8 *)0x10;
  ___cxa_allocate_exception();
  func_0x000104c4f71c();
  puVar9 = puVar6;
  ___cxa_throw(puVar6,PTR___ZTISt12length_error_110352238,PTR___ZNSt12length_errorD1Ev_110346170);
  ___cxa_free_exception(puVar6);
  __Unwind_Resume();
  plVar1 = puVar9 + 0xb5;
  puVar27 = auStack_5e8;
  FUN_109294c2c(puVar27,puVar9 + 0xf);
  puVar21 = (undefined1 *)puVar9[0xb6];
  if (puVar21 != (undefined1 *)0x0) {
    unaff_x22 = (long **)(puVar21 + -1);
    if (((ulong)puVar21 & (ulong)unaff_x22) == 0) {
      puVar25 = (undefined1 *)((ulong)unaff_x22 & (ulong)puVar27);
    }
    else {
      puVar25 = puVar27;
      if (puVar21 <= puVar27) {
        uVar4 = 0;
        if (puVar21 != (undefined1 *)0x0) {
          uVar4 = (ulong)puVar27 / (ulong)puVar21;
        }
        puVar25 = puVar27 + -(uVar4 * (long)puVar21);
      }
    }
    plVar10 = *(long **)(*plVar1 + (long)puVar25 * 8);
    if (plVar10 != (long *)0x0) {
      for (plVar10 = (long *)*plVar10; plVar10 != (long *)0x0; plVar10 = (long *)*plVar10) {
        puVar11 = (undefined1 *)plVar10[1];
        if (puVar11 == puVar27) {
          puVar11 = auStack_5e8;
          func_0x0001092952bc(puVar11,plVar10 + 2,puVar9 + 0xf);
          if (((ulong)puVar11 & 1) != 0) {
            return plVar10 + 0xa9;
          }
        }
        else {
          if (((ulong)puVar21 & (ulong)unaff_x22) == 0) {
            puVar11 = (undefined1 *)((ulong)puVar11 & (ulong)unaff_x22);
          }
          else if (puVar21 <= puVar11) {
            uVar4 = 0;
            if (puVar21 != (undefined1 *)0x0) {
              uVar4 = (ulong)puVar11 / (ulong)puVar21;
            }
            puVar11 = puVar11 + -(uVar4 * (long)puVar21);
          }
          if (puVar11 != puVar25) break;
        }
      }
    }
  }
  FUN_10928b998(auStack_5e8,puVar9 + 0xf);
  pplVar13 = &plStack_b0;
  FUN_109294c2c(pplVar13,auStack_5e8);
  pplVar26 = (long **)puVar9[0xb6];
  pplStack_b8 = pplVar13;
  if (pplVar26 != (long **)0x0) {
    puVar27 = (undefined1 *)((long)pplVar26 + -1);
    if (((ulong)pplVar26 & (ulong)puVar27) == 0) {
      unaff_x22 = (long **)((ulong)puVar27 & (ulong)pplVar13);
    }
    else {
      unaff_x22 = pplVar13;
      if (pplVar26 <= pplVar13) {
        uVar4 = 0;
        if (pplVar26 != (long **)0x0) {
          uVar4 = (ulong)pplVar13 / (ulong)pplVar26;
        }
        unaff_x22 = (long **)((long)pplVar13 - uVar4 * (long)pplVar26);
      }
    }
    puVar6 = *(undefined8 **)(*plVar1 + (long)unaff_x22 * 8);
    if (puVar6 != (undefined8 *)0x0) {
      for (plVar10 = (long *)*puVar6; plVar10 != (long *)0x0; plVar10 = (long *)*plVar10) {
        pplVar12 = (long **)plVar10[1];
        if (pplVar12 == pplVar13) {
          if ((long **)plVar10[0xa8] == pplStack_b8) {
            pplVar12 = &plStack_b0;
            func_0x0001092952bc(pplVar12,plVar10 + 2,auStack_5e8);
            if (((ulong)pplVar12 & 1) != 0) goto LAB_109294870;
          }
        }
        else {
          if (((ulong)pplVar26 & (ulong)puVar27) == 0) {
            pplVar12 = (long **)((ulong)pplVar12 & (ulong)puVar27);
          }
          else if (pplVar26 <= pplVar12) {
            uVar4 = 0;
            if (pplVar26 != (long **)0x0) {
              uVar4 = (ulong)pplVar12 / (ulong)pplVar26;
            }
            pplVar12 = (long **)((long)pplVar12 - uVar4 * (long)pplVar26);
          }
          if (pplVar12 != unaff_x22) break;
        }
      }
    }
  }
  plVar10 = (long *)0x570;
  __Znwm();
  uStack_a0 = 1;
  *plVar10 = 0;
  plVar10[1] = (long)pplVar13;
  plStack_b0 = plVar10;
  plStack_a8 = plVar1;
  FUN_109295560(plVar10 + 2,auStack_5e8);
  plVar10[0xa8] = (long)pplStack_b8;
  plVar10[0xaa] = 0;
  plVar10[0xa9] = 0;
  plVar10[0xac] = 0;
  plVar10[0xab] = 0;
  plVar10[0xad] = 0;
  if ((pplVar26 == (long **)0x0) ||
     (*(float *)(puVar9 + 0xb9) * (float)pplVar26 < (float)(puVar9[0xb8] + 1))) {
    uVar4 = 1;
    if ((long **)0x2 < pplVar26) {
      uVar4 = (ulong)(((ulong)pplVar26 & (ulong)((long)pplVar26 + -1)) != 0);
    }
    pplVar12 = (long **)(uVar4 | (long)pplVar26 << 1);
    pplVar26 = (long **)(long)((float)(puVar9[0xb8] + 1) / *(float *)(puVar9 + 0xb9));
    if (pplVar12 <= pplVar26) {
      pplVar12 = pplVar26;
    }
    if ((undefined1 *)((long)pplVar12 - 1U) == (undefined1 *)0x0) {
      pplVar12 = (long **)0x2;
    }
    else if (((ulong)pplVar12 & (long)pplVar12 - 1U) != 0) {
      __ZNSt3__112__next_primeEm();
    }
    pplVar26 = (long **)puVar9[0xb6];
    if (pplVar26 < pplVar12) {
LAB_10929467c:
      if ((ulong)pplVar12 >> 0x3d != 0) {
        func_0x000104c4f740();
LAB_109294ad8:
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x109294adc);
        (*pcVar5)();
      }
      lVar7 = (long)pplVar12 << 3;
      __Znwm();
      lVar8 = *plVar1;
      *plVar1 = lVar7;
      if (lVar8 != 0) {
        __ZdlPv();
      }
      pplVar26 = (long **)0x0;
      puVar9[0xb6] = pplVar12;
      do {
        *(undefined8 *)(*plVar1 + (long)pplVar26 * 8) = 0;
        pplVar26 = (long **)((long)pplVar26 + 1);
      } while (pplVar12 != pplVar26);
      plVar15 = (long *)puVar9[0xb7];
      pplVar26 = pplVar12;
      if (plVar15 != (long *)0x0) {
        pplVar18 = (long **)plVar15[1];
        puVar27 = (undefined1 *)((long)pplVar12 + -1);
        if (((ulong)pplVar12 & (ulong)puVar27) == 0) {
          pplVar18 = (long **)((ulong)pplVar18 & (ulong)puVar27);
        }
        else if (pplVar12 <= pplVar18) {
          uVar4 = 0;
          if (pplVar12 != (long **)0x0) {
            uVar4 = (ulong)pplVar18 / (ulong)pplVar12;
          }
          pplVar18 = (long **)((long)pplVar18 - uVar4 * (long)pplVar12);
        }
        *(undefined8 **)(*plVar1 + (long)pplVar18 * 8) = puVar9 + 0xb7;
        plVar19 = (long *)*plVar15;
        while (plVar19 != (long *)0x0) {
          pplVar20 = (long **)plVar19[1];
          if (((ulong)pplVar12 & (ulong)puVar27) == 0) {
            pplVar20 = (long **)((ulong)pplVar20 & (ulong)puVar27);
          }
          else if (pplVar12 <= pplVar20) {
            uVar4 = 0;
            if (pplVar12 != (long **)0x0) {
              uVar4 = (ulong)pplVar20 / (ulong)pplVar12;
            }
            pplVar20 = (long **)((long)pplVar20 - uVar4 * (long)pplVar12);
          }
          plVar24 = plVar19;
          if (pplVar20 != pplVar18) {
            lVar7 = *plVar1;
            if (*(long *)(lVar7 + (long)pplVar20 * 8) == 0) {
              *(long **)(lVar7 + (long)pplVar20 * 8) = plVar15;
              pplVar18 = pplVar20;
            }
            else {
              *plVar15 = *plVar19;
              *plVar19 = **(undefined8 **)(lVar7 + (long)pplVar20 * 8);
              **(long **)(lVar7 + (long)pplVar20 * 8) = (long)plVar19;
              plVar24 = plVar15;
            }
          }
          plVar15 = plVar24;
          plVar19 = (long *)*plVar24;
        }
      }
    }
    else if (pplVar12 < pplVar26) {
      pplVar18 = (long **)(long)((float)(ulong)puVar9[0xb8] / *(float *)(puVar9 + 0xb9));
      if ((pplVar26 < (long **)0x3) || (((ulong)pplVar26 & (ulong)((long)pplVar26 + -1)) != 0)) {
        __ZNSt3__112__next_primeEm();
      }
      else if ((long **)0x1 < pplVar18) {
        pplVar18 = (long **)(1L << (-LZCOUNT((undefined1 *)((long)pplVar18 + -1)) & 0x3fU));
      }
      if (pplVar12 <= pplVar18) {
        pplVar12 = pplVar18;
      }
      if (pplVar12 < pplVar26) {
        if (pplVar12 != (long **)0x0) goto LAB_10929467c;
        lVar7 = *plVar1;
        *plVar1 = 0;
        if (lVar7 != 0) {
          __ZdlPv();
        }
        puVar9[0xb6] = 0;
        pplVar26 = (long **)0x0;
      }
      else {
        pplVar26 = (long **)puVar9[0xb6];
      }
    }
    if (((ulong)pplVar26 & (ulong)((long)pplVar26 + -1)) == 0) {
      unaff_x22 = (long **)((ulong)((long)pplVar26 + -1) & (ulong)pplVar13);
    }
    else {
      unaff_x22 = pplVar13;
      if (pplVar26 <= pplVar13) {
        uVar4 = 0;
        if (pplVar26 != (long **)0x0) {
          uVar4 = (ulong)pplVar13 / (ulong)pplVar26;
        }
        unaff_x22 = (long **)((long)pplVar13 - uVar4 * (long)pplVar26);
      }
    }
  }
  lVar7 = *plVar1;
  plVar15 = *(long **)(lVar7 + (long)unaff_x22 * 8);
  if (plVar15 == (long *)0x0) {
    *plVar10 = puVar9[0xb7];
    puVar9[0xb7] = plVar10;
    *(undefined8 **)(lVar7 + (long)unaff_x22 * 8) = puVar9 + 0xb7;
    if (*plVar10 == 0) goto LAB_109294864;
    pplVar13 = *(long ***)(*plVar10 + 8);
    if (((ulong)pplVar26 & (ulong)((long)pplVar26 + -1)) == 0) {
      pplVar13 = (long **)((ulong)pplVar13 & (ulong)((long)pplVar26 + -1));
    }
    else if (pplVar26 <= pplVar13) {
      uVar4 = 0;
      if (pplVar26 != (long **)0x0) {
        uVar4 = (ulong)pplVar13 / (ulong)pplVar26;
      }
      pplVar13 = (long **)((long)pplVar13 - uVar4 * (long)pplVar26);
    }
    plVar15 = (long *)(*plVar1 + (long)pplVar13 * 8);
  }
  else {
    *plVar10 = *plVar15;
  }
  *plVar15 = (long)plVar10;
LAB_109294864:
  puVar9[0xb8] = puVar9[0xb8] + 1;
LAB_109294870:
  FUN_109234a54(auStack_108);
  FUN_10928b998(auStack_5e8,puVar9 + 0xf);
  uStack_120 = 0;
  if (puVar9[0xb8] != 0) {
    uStack_120 = *(undefined8 *)(puVar9[0xb7] + 0x548);
  }
  (**(code **)(*(long *)*puVar9 + 0xd8))(&plStack_b0,(long *)*puVar9,auStack_5e8);
  plVar19 = plStack_a8;
  plVar15 = plStack_b0;
  plVar1 = plVar10 + 0xa9;
  plStack_b0 = (long *)0x0;
  plStack_a8 = (long *)0x0;
  plVar24 = (long *)plVar10[0xaa];
  plVar10[0xaa] = (long)plVar19;
  *plVar1 = (long)plVar15;
  if (plVar24 != (long *)0x0) {
    plVar15 = plVar24 + 1;
    do {
      lVar7 = *plVar15;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar15,0x10);
      if (bVar3) {
        *plVar15 = lVar7 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar7 == 0) {
      (**(code **)(*plVar24 + 0x10))(plVar24);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar24);
    }
  }
  plVar15 = plStack_a8;
  if (plStack_a8 != (long *)0x0) {
    plVar19 = plStack_a8 + 1;
    do {
      lVar7 = *plVar19;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar19,0x10);
      if (bVar3) {
        *plVar19 = lVar7 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar7 == 0) {
      (**(code **)(*plStack_a8 + 0x10))(plStack_a8);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar15);
    }
  }
  plVar15 = (long *)*plVar1;
  (**(code **)(*plVar15 + 0x30))();
  lVar7 = *plVar15;
  lVar8 = plVar15[1];
  if (lVar7 != lVar8) {
    do {
      FUN_109235150(&plStack_b0,*puVar9,lVar7,0);
      puVar6 = (undefined8 *)plVar10[0xac];
      if (puVar6 < (undefined8 *)plVar10[0xad]) {
        puVar23 = puVar6 + 2;
        puVar6[1] = plStack_a8;
        *puVar6 = plStack_b0;
        plStack_b0 = (long *)0x0;
        plStack_a8 = (long *)0x0;
      }
      else {
        lVar17 = plVar10[0xab];
        lVar22 = (long)puVar6 - lVar17;
        uVar4 = (lVar22 >> 4) + 1;
        if (uVar4 >> 0x3c != 0) {
          FUN_1092374f0();
          goto LAB_109294ad8;
        }
        uVar14 = plVar10[0xad] - lVar17;
        uVar16 = (long)uVar14 >> 3;
        if (uVar16 <= uVar4) {
          uVar16 = uVar4;
        }
        if (0x7fffffffffffffef < uVar14) {
          uVar16 = 0xfffffffffffffff;
        }
        plVar15 = plVar10 + 0xab;
        FUN_109237504();
        puVar6 = (undefined8 *)((long)plVar15 + lVar22);
        puVar23 = puVar6 + 2;
        puVar6[1] = plStack_a8;
        *puVar6 = plStack_b0;
        plStack_b0 = (long *)0x0;
        plStack_a8 = (long *)0x0;
        lVar22 = (long)puVar6 - (plVar10[0xac] - plVar10[0xab]);
        _memcpy(lVar22);
        lVar17 = plVar10[0xab];
        plVar10[0xab] = lVar22;
        plVar10[0xac] = (long)puVar23;
        plVar10[0xad] = (long)(plVar15 + uVar16 * 2);
        if (lVar17 != 0) {
          __ZdlPv();
        }
      }
      plVar15 = plStack_a8;
      plVar10[0xac] = (long)puVar23;
      if (plStack_a8 != (long *)0x0) {
        plVar19 = plStack_a8 + 1;
        do {
          lVar17 = *plVar19;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar19,0x10);
          if (bVar3) {
            *plVar19 = lVar17 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar17 == 0) {
          (**(code **)(*plStack_a8 + 0x10))(plStack_a8);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar15);
        }
      }
      lVar7 = lVar7 + 0x80;
    } while (lVar7 != lVar8);
  }
  FUN_109234a54(auStack_108);
  return plVar1;
}



/* Entry: 109294420; end: 109294b23;  */

long * FUN_109294420(undefined8 *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  ulong uVar4;
  code *pcVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  undefined1 *puVar9;
  undefined8 *puVar10;
  long **pplVar11;
  long **pplVar12;
  ulong uVar13;
  long *plVar14;
  ulong uVar15;
  long lVar16;
  long **pplVar17;
  long *plVar18;
  long **pplVar19;
  undefined1 *puVar20;
  long lVar21;
  undefined8 *puVar22;
  long **unaff_x22;
  long *plVar23;
  undefined1 *puVar24;
  long **pplVar25;
  undefined1 *puVar26;
  undefined1 auStack_5c8 [1224];
  undefined8 uStack_100;
  undefined1 auStack_e8 [80];
  long **pplStack_98;
  long *plStack_90;
  long *plStack_88;
  undefined8 uStack_80;
  
  plVar1 = param_1 + 0xb5;
  puVar26 = auStack_5c8;
  FUN_109294c2c(puVar26,param_1 + 0xf);
  puVar20 = (undefined1 *)param_1[0xb6];
  if (puVar20 != (undefined1 *)0x0) {
    unaff_x22 = (long **)(puVar20 + -1);
    if (((ulong)puVar20 & (ulong)unaff_x22) == 0) {
      puVar24 = (undefined1 *)((ulong)unaff_x22 & (ulong)puVar26);
    }
    else {
      puVar24 = puVar26;
      if (puVar20 <= puVar26) {
        uVar4 = 0;
        if (puVar20 != (undefined1 *)0x0) {
          uVar4 = (ulong)puVar26 / (ulong)puVar20;
        }
        puVar24 = puVar26 + -(uVar4 * (long)puVar20);
      }
    }
    plVar8 = *(long **)(*plVar1 + (long)puVar24 * 8);
    if (plVar8 != (long *)0x0) {
      for (plVar8 = (long *)*plVar8; plVar8 != (long *)0x0; plVar8 = (long *)*plVar8) {
        puVar9 = (undefined1 *)plVar8[1];
        if (puVar9 == puVar26) {
          puVar9 = auStack_5c8;
          func_0x0001092952bc(puVar9,plVar8 + 2,param_1 + 0xf);
          if (((ulong)puVar9 & 1) != 0) {
            return plVar8 + 0xa9;
          }
        }
        else {
          if (((ulong)puVar20 & (ulong)unaff_x22) == 0) {
            puVar9 = (undefined1 *)((ulong)puVar9 & (ulong)unaff_x22);
          }
          else if (puVar20 <= puVar9) {
            uVar4 = 0;
            if (puVar20 != (undefined1 *)0x0) {
              uVar4 = (ulong)puVar9 / (ulong)puVar20;
            }
            puVar9 = puVar9 + -(uVar4 * (long)puVar20);
          }
          if (puVar9 != puVar24) break;
        }
      }
    }
  }
  FUN_10928b998(auStack_5c8,param_1 + 0xf);
  pplVar12 = &plStack_90;
  FUN_109294c2c(pplVar12,auStack_5c8);
  pplVar25 = (long **)param_1[0xb6];
  pplStack_98 = pplVar12;
  if (pplVar25 != (long **)0x0) {
    puVar26 = (undefined1 *)((long)pplVar25 + -1);
    if (((ulong)pplVar25 & (ulong)puVar26) == 0) {
      unaff_x22 = (long **)((ulong)puVar26 & (ulong)pplVar12);
    }
    else {
      unaff_x22 = pplVar12;
      if (pplVar25 <= pplVar12) {
        uVar4 = 0;
        if (pplVar25 != (long **)0x0) {
          uVar4 = (ulong)pplVar12 / (ulong)pplVar25;
        }
        unaff_x22 = (long **)((long)pplVar12 - uVar4 * (long)pplVar25);
      }
    }
    puVar10 = *(undefined8 **)(*plVar1 + (long)unaff_x22 * 8);
    if (puVar10 != (undefined8 *)0x0) {
      for (plVar8 = (long *)*puVar10; plVar8 != (long *)0x0; plVar8 = (long *)*plVar8) {
        pplVar11 = (long **)plVar8[1];
        if (pplVar11 == pplVar12) {
          if ((long **)plVar8[0xa8] == pplStack_98) {
            pplVar11 = &plStack_90;
            func_0x0001092952bc(pplVar11,plVar8 + 2,auStack_5c8);
            if (((ulong)pplVar11 & 1) != 0) goto LAB_109294870;
          }
        }
        else {
          if (((ulong)pplVar25 & (ulong)puVar26) == 0) {
            pplVar11 = (long **)((ulong)pplVar11 & (ulong)puVar26);
          }
          else if (pplVar25 <= pplVar11) {
            uVar4 = 0;
            if (pplVar25 != (long **)0x0) {
              uVar4 = (ulong)pplVar11 / (ulong)pplVar25;
            }
            pplVar11 = (long **)((long)pplVar11 - uVar4 * (long)pplVar25);
          }
          if (pplVar11 != unaff_x22) break;
        }
      }
    }
  }
  plVar8 = (long *)0x570;
  __Znwm();
  uStack_80 = 1;
  *plVar8 = 0;
  plVar8[1] = (long)pplVar12;
  plStack_90 = plVar8;
  plStack_88 = plVar1;
  FUN_109295560(plVar8 + 2,auStack_5c8);
  plVar8[0xa8] = (long)pplStack_98;
  plVar8[0xaa] = 0;
  plVar8[0xa9] = 0;
  plVar8[0xac] = 0;
  plVar8[0xab] = 0;
  plVar8[0xad] = 0;
  if ((pplVar25 == (long **)0x0) ||
     (*(float *)(param_1 + 0xb9) * (float)pplVar25 < (float)(param_1[0xb8] + 1))) {
    uVar4 = 1;
    if ((long **)0x2 < pplVar25) {
      uVar4 = (ulong)(((ulong)pplVar25 & (ulong)((long)pplVar25 + -1)) != 0);
    }
    pplVar11 = (long **)(uVar4 | (long)pplVar25 << 1);
    pplVar25 = (long **)(long)((float)(param_1[0xb8] + 1) / *(float *)(param_1 + 0xb9));
    if (pplVar11 <= pplVar25) {
      pplVar11 = pplVar25;
    }
    if ((undefined1 *)((long)pplVar11 - 1U) == (undefined1 *)0x0) {
      pplVar11 = (long **)0x2;
    }
    else if (((ulong)pplVar11 & (long)pplVar11 - 1U) != 0) {
      __ZNSt3__112__next_primeEm();
    }
    pplVar25 = (long **)param_1[0xb6];
    if (pplVar25 < pplVar11) {
LAB_10929467c:
      if ((ulong)pplVar11 >> 0x3d != 0) {
        func_0x000104c4f740();
LAB_109294ad8:
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x109294adc);
        (*pcVar5)();
      }
      lVar6 = (long)pplVar11 << 3;
      __Znwm();
      lVar7 = *plVar1;
      *plVar1 = lVar6;
      if (lVar7 != 0) {
        __ZdlPv();
      }
      pplVar25 = (long **)0x0;
      param_1[0xb6] = pplVar11;
      do {
        *(undefined8 *)(*plVar1 + (long)pplVar25 * 8) = 0;
        pplVar25 = (long **)((long)pplVar25 + 1);
      } while (pplVar11 != pplVar25);
      plVar14 = (long *)param_1[0xb7];
      pplVar25 = pplVar11;
      if (plVar14 != (long *)0x0) {
        pplVar17 = (long **)plVar14[1];
        puVar26 = (undefined1 *)((long)pplVar11 + -1);
        if (((ulong)pplVar11 & (ulong)puVar26) == 0) {
          pplVar17 = (long **)((ulong)pplVar17 & (ulong)puVar26);
        }
        else if (pplVar11 <= pplVar17) {
          uVar4 = 0;
          if (pplVar11 != (long **)0x0) {
            uVar4 = (ulong)pplVar17 / (ulong)pplVar11;
          }
          pplVar17 = (long **)((long)pplVar17 - uVar4 * (long)pplVar11);
        }
        *(undefined8 **)(*plVar1 + (long)pplVar17 * 8) = param_1 + 0xb7;
        plVar18 = (long *)*plVar14;
        while (plVar18 != (long *)0x0) {
          pplVar19 = (long **)plVar18[1];
          if (((ulong)pplVar11 & (ulong)puVar26) == 0) {
            pplVar19 = (long **)((ulong)pplVar19 & (ulong)puVar26);
          }
          else if (pplVar11 <= pplVar19) {
            uVar4 = 0;
            if (pplVar11 != (long **)0x0) {
              uVar4 = (ulong)pplVar19 / (ulong)pplVar11;
            }
            pplVar19 = (long **)((long)pplVar19 - uVar4 * (long)pplVar11);
          }
          plVar23 = plVar18;
          if (pplVar19 != pplVar17) {
            lVar6 = *plVar1;
            if (*(long *)(lVar6 + (long)pplVar19 * 8) == 0) {
              *(long **)(lVar6 + (long)pplVar19 * 8) = plVar14;
              pplVar17 = pplVar19;
            }
            else {
              *plVar14 = *plVar18;
              *plVar18 = **(undefined8 **)(lVar6 + (long)pplVar19 * 8);
              **(long **)(lVar6 + (long)pplVar19 * 8) = (long)plVar18;
              plVar23 = plVar14;
            }
          }
          plVar14 = plVar23;
          plVar18 = (long *)*plVar23;
        }
      }
    }
    else if (pplVar11 < pplVar25) {
      pplVar17 = (long **)(long)((float)(ulong)param_1[0xb8] / *(float *)(param_1 + 0xb9));
      if ((pplVar25 < (long **)0x3) || (((ulong)pplVar25 & (ulong)((long)pplVar25 + -1)) != 0)) {
        __ZNSt3__112__next_primeEm();
      }
      else if ((long **)0x1 < pplVar17) {
        pplVar17 = (long **)(1L << (-LZCOUNT((undefined1 *)((long)pplVar17 + -1)) & 0x3fU));
      }
      if (pplVar11 <= pplVar17) {
        pplVar11 = pplVar17;
      }
      if (pplVar11 < pplVar25) {
        if (pplVar11 != (long **)0x0) goto LAB_10929467c;
        lVar6 = *plVar1;
        *plVar1 = 0;
        if (lVar6 != 0) {
          __ZdlPv();
        }
        param_1[0xb6] = 0;
        pplVar25 = (long **)0x0;
      }
      else {
        pplVar25 = (long **)param_1[0xb6];
      }
    }
    if (((ulong)pplVar25 & (ulong)((long)pplVar25 + -1)) == 0) {
      unaff_x22 = (long **)((ulong)((long)pplVar25 + -1) & (ulong)pplVar12);
    }
    else {
      unaff_x22 = pplVar12;
      if (pplVar25 <= pplVar12) {
        uVar4 = 0;
        if (pplVar25 != (long **)0x0) {
          uVar4 = (ulong)pplVar12 / (ulong)pplVar25;
        }
        unaff_x22 = (long **)((long)pplVar12 - uVar4 * (long)pplVar25);
      }
    }
  }
  lVar6 = *plVar1;
  plVar14 = *(long **)(lVar6 + (long)unaff_x22 * 8);
  if (plVar14 == (long *)0x0) {
    *plVar8 = param_1[0xb7];
    param_1[0xb7] = plVar8;
    *(undefined8 **)(lVar6 + (long)unaff_x22 * 8) = param_1 + 0xb7;
    if (*plVar8 == 0) goto LAB_109294864;
    pplVar12 = *(long ***)(*plVar8 + 8);
    if (((ulong)pplVar25 & (ulong)((long)pplVar25 + -1)) == 0) {
      pplVar12 = (long **)((ulong)pplVar12 & (ulong)((long)pplVar25 + -1));
    }
    else if (pplVar25 <= pplVar12) {
      uVar4 = 0;
      if (pplVar25 != (long **)0x0) {
        uVar4 = (ulong)pplVar12 / (ulong)pplVar25;
      }
      pplVar12 = (long **)((long)pplVar12 - uVar4 * (long)pplVar25);
    }
    plVar14 = (long *)(*plVar1 + (long)pplVar12 * 8);
  }
  else {
    *plVar8 = *plVar14;
  }
  *plVar14 = (long)plVar8;
LAB_109294864:
  param_1[0xb8] = param_1[0xb8] + 1;
LAB_109294870:
  FUN_109234a54(auStack_e8);
  FUN_10928b998(auStack_5c8,param_1 + 0xf);
  uStack_100 = 0;
  if (param_1[0xb8] != 0) {
    uStack_100 = *(undefined8 *)(param_1[0xb7] + 0x548);
  }
  (**(code **)(*(long *)*param_1 + 0xd8))(&plStack_90,(long *)*param_1,auStack_5c8);
  plVar18 = plStack_88;
  plVar14 = plStack_90;
  plVar1 = plVar8 + 0xa9;
  plStack_90 = (long *)0x0;
  plStack_88 = (long *)0x0;
  plVar23 = (long *)plVar8[0xaa];
  plVar8[0xaa] = (long)plVar18;
  *plVar1 = (long)plVar14;
  if (plVar23 != (long *)0x0) {
    plVar14 = plVar23 + 1;
    do {
      lVar6 = *plVar14;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar14,0x10);
      if (bVar3) {
        *plVar14 = lVar6 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar6 == 0) {
      (**(code **)(*plVar23 + 0x10))(plVar23);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar23);
    }
  }
  plVar14 = plStack_88;
  if (plStack_88 != (long *)0x0) {
    plVar18 = plStack_88 + 1;
    do {
      lVar6 = *plVar18;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar18,0x10);
      if (bVar3) {
        *plVar18 = lVar6 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar6 == 0) {
      (**(code **)(*plStack_88 + 0x10))(plStack_88);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar14);
    }
  }
  plVar14 = (long *)*plVar1;
  (**(code **)(*plVar14 + 0x30))();
  lVar6 = *plVar14;
  lVar7 = plVar14[1];
  if (lVar6 != lVar7) {
    do {
      FUN_109235150(&plStack_90,*param_1,lVar6,0);
      puVar10 = (undefined8 *)plVar8[0xac];
      if (puVar10 < (undefined8 *)plVar8[0xad]) {
        puVar22 = puVar10 + 2;
        puVar10[1] = plStack_88;
        *puVar10 = plStack_90;
        plStack_90 = (long *)0x0;
        plStack_88 = (long *)0x0;
      }
      else {
        lVar16 = plVar8[0xab];
        lVar21 = (long)puVar10 - lVar16;
        uVar4 = (lVar21 >> 4) + 1;
        if (uVar4 >> 0x3c != 0) {
          FUN_1092374f0();
          goto LAB_109294ad8;
        }
        uVar13 = plVar8[0xad] - lVar16;
        uVar15 = (long)uVar13 >> 3;
        if (uVar15 <= uVar4) {
          uVar15 = uVar4;
        }
        if (0x7fffffffffffffef < uVar13) {
          uVar15 = 0xfffffffffffffff;
        }
        plVar14 = plVar8 + 0xab;
        FUN_109237504();
        puVar10 = (undefined8 *)((long)plVar14 + lVar21);
        puVar22 = puVar10 + 2;
        puVar10[1] = plStack_88;
        *puVar10 = plStack_90;
        plStack_90 = (long *)0x0;
        plStack_88 = (long *)0x0;
        lVar21 = (long)puVar10 - (plVar8[0xac] - plVar8[0xab]);
        _memcpy(lVar21);
        lVar16 = plVar8[0xab];
        plVar8[0xab] = lVar21;
        plVar8[0xac] = (long)puVar22;
        plVar8[0xad] = (long)(plVar14 + uVar15 * 2);
        if (lVar16 != 0) {
          __ZdlPv();
        }
      }
      plVar14 = plStack_88;
      plVar8[0xac] = (long)puVar22;
      if (plStack_88 != (long *)0x0) {
        plVar18 = plStack_88 + 1;
        do {
          lVar16 = *plVar18;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar18,0x10);
          if (bVar3) {
            *plVar18 = lVar16 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar16 == 0) {
          (**(code **)(*plStack_88 + 0x10))(plStack_88);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar14);
        }
      }
      lVar6 = lVar6 + 0x80;
    } while (lVar6 != lVar7);
  }
  FUN_109234a54(auStack_e8);
  return plVar1;
}



/* Entry: 109294b24; end: 109294b37;  */

void FUN_109294b24(void)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  
  plVar1 = (long *)&DAT_10f62a4d8;
  func_0x000104c4f6cc();
  plVar4 = (long *)*plVar1;
  lVar5 = *plVar4;
  if (lVar5 != 0) {
    lVar2 = plVar4[1];
    lVar3 = lVar5;
    if (lVar2 != lVar5) {
      do {
        lVar2 = lVar2 + -0x10;
        FUN_109233470();
      } while (lVar2 != lVar5);
      lVar3 = *(long *)*plVar1;
    }
    plVar4[1] = lVar5;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(lVar3);
    return;
  }
  return;
}



/* Entry: 109294b38; end: 109294ba7;  */

void FUN_109294b38(long *param_1)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  
  plVar3 = (long *)*param_1;
  lVar4 = *plVar3;
  if (lVar4 != 0) {
    lVar1 = plVar3[1];
    lVar2 = lVar4;
    if (lVar1 != lVar4) {
      do {
        lVar1 = lVar1 + -0x10;
        FUN_109233470();
      } while (lVar1 != lVar4);
      lVar2 = *(long *)*param_1;
    }
    plVar3[1] = lVar4;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(lVar2);
    return;
  }
  return;
}



/* Entry: 109294ba8; end: 109294bdf;  */

void FUN_109294ba8(long *param_1)

{
  if (*param_1 != 0) {
    FUN_109234af4();
    __ZdlPv(*param_1);
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  return;
}



/* Entry: 109294be0; end: 109294c2b;  */

void FUN_109294be0(undefined8 *param_1)

{
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[7] = 0;
  param_1[6] = 0;
  param_1[9] = 0;
  param_1[8] = 0;
  param_1[0xb] = 0;
  param_1[10] = 0;
  param_1[0xd] = 0;
  param_1[0xc] = 0;
  param_1[0xf] = 0xffffffff;
  param_1[0xe] = 0xffffffff;
  param_1[0x17] = 0;
  param_1[0x16] = 0;
  param_1[0x19] = 0;
  param_1[0x18] = 0;
  param_1[1] = 0xffffffff;
  *param_1 = 0xffffffff;
  param_1[3] = 0xffffffff;
  param_1[2] = 0xffffffff;
  param_1[4] = 0;
  param_1[6] = 0xffffffff;
  param_1[5] = 0xffffffff;
  param_1[8] = 0xffffffff;
  param_1[7] = 0xffffffff;
  param_1[10] = 0xffffffff;
  param_1[9] = 0xffffffff;
  param_1[0xc] = 0xffffffff;
  param_1[0xb] = 0xffffffff;
  param_1[0xd] = 0;
  param_1[0x11] = 0xffffffff;
  param_1[0x10] = 0xffffffff;
  param_1[0x13] = 0xffffffff;
  param_1[0x12] = 0xffffffff;
  param_1[0x15] = 0xffffffff;
  param_1[0x14] = 0xffffffff;
  param_1[0x16] = 0;
  param_1[0x18] = 0xffffffff;
  param_1[0x17] = 0xffffffff;
  *(undefined4 *)(param_1 + 0x19) = 0;
  return;
}



/* Entry: 109294c2c; end: 109294dbf;  */

void FUN_109294c2c(undefined8 param_1,ulong *param_2)

{
  undefined1 *puVar1;
  undefined4 *puVar2;
  undefined1 *puVar3;
  long lVar4;
  ulong *puVar5;
  ulong uVar6;
  ulong uVar7;
  undefined1 uStack_71;
  undefined1 *puStack_70;
  undefined1 uStack_61;
  undefined1 *puStack_60;
  ulong uStack_58;
  undefined4 *puStack_50;
  ulong uStack_48;
  undefined1 uStack_39;
  undefined1 *puStack_38;
  undefined4 uStack_2c;
  ulong uStack_28;
  
  if (param_2[4] == 0) {
    uStack_28 = 0;
  }
  else {
    uStack_28 = 0;
    lVar4 = param_2[4] << 3;
    puVar5 = param_2;
    do {
      puVar5 = puVar5 + 1;
      uVar6 = *puVar5;
      uStack_28 = uStack_28 + 0x9e3779b97f4a7c15;
      uVar7 = ((ulong)(uint)((int)uVar6 << 3) + 8 ^ uVar6 >> 0x20) * -0x622015f714c7d297;
      uVar6 = (uVar6 >> 0x20 ^ uVar7 >> 0x2f ^ uVar7) * -0x622015f714c7d297;
      uStack_28 = uStack_28 * 0x40 + -0x61c8864680b583eb + (uStack_28 >> 2) +
                  (uVar6 ^ uVar6 >> 0x2f) * -0x622015f714c7d297 ^ uStack_28;
      lVar4 = lVar4 + -8;
    } while (lVar4 != 0);
  }
  uStack_2c = (undefined4)*param_2;
  puVar1 = &uStack_39;
  FUN_109294f48(puVar1,param_2 + 5);
  uStack_48 = (ulong)(uint)param_2[0x57] + 0x53a3c687b1bc205a ^ 0x9e3779b97f4a7c15;
  puVar2 = (undefined4 *)((long)param_2 + 700);
  puStack_38 = puVar1;
  FUN_10926b2c8(puVar2,param_2 + 0x58,(undefined4 *)((long)param_2 + 0x2c4),param_2 + 0x59,
                (undefined4 *)((long)param_2 + 0x2cc),param_2 + 0x5a,
                (undefined4 *)((long)param_2 + 0x2d4));
  uStack_58 = (ulong)(uint)param_2[0x5b] + 0x9e3779b97f4a7c15;
  uStack_58 = (ulong)*(byte *)((long)param_2 + 0x2dc) + 0x9e3779b97f4a7c15 + uStack_58 * 0x40 +
              (uStack_58 >> 2) ^ uStack_58;
  uStack_58 = (ulong)*(byte *)((long)param_2 + 0x2dd) + 0x9e3779b97f4a7c15 + uStack_58 * 0x40 +
              (uStack_58 >> 2) ^ uStack_58;
  puVar1 = &uStack_61;
  puStack_50 = puVar2;
  FUN_10926a6b4(puVar1,param_2 + 0x5c);
  puVar3 = &uStack_71;
  puStack_60 = puVar1;
  FUN_109295020(puVar3,param_2 + 100);
  puStack_70 = puVar3;
  FUN_109294dc0(&uStack_28,&uStack_2c,&puStack_38,&uStack_48,&puStack_50,&uStack_58,&puStack_60,
                &puStack_70,param_2 + 0x85,param_2 + 0x86,param_2 + 0x99,param_2 + 0x9a);
  return;
}



/* Entry: 109294dc0; end: 109294f47;  */

ulong FUN_109294dc0(long *param_1,uint *param_2,long *param_3,long *param_4,long *param_5,
                   long *param_6,long *param_7,long *param_8,ulong *param_9,uint *param_10,
                   ulong *param_11,ulong *param_12)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  
  uVar3 = *param_1 + 0x9e3779b97f4a7c15;
  uVar3 = (ulong)*param_2 + uVar3 * 0x40 + (uVar3 >> 2) + 0x9e3779b97f4a7c15 ^ uVar3;
  uVar3 = *param_3 + uVar3 * 0x40 + (uVar3 >> 2) + 0x9e3779b97f4a7c15 ^ uVar3;
  uVar3 = *param_4 + uVar3 * 0x40 + (uVar3 >> 2) + 0x9e3779b97f4a7c15 ^ uVar3;
  uVar3 = *param_5 + uVar3 * 0x40 + (uVar3 >> 2) + 0x9e3779b97f4a7c15 ^ uVar3;
  uVar3 = *param_6 + uVar3 * 0x40 + (uVar3 >> 2) + 0x9e3779b97f4a7c15 ^ uVar3;
  uVar3 = *param_7 + uVar3 * 0x40 + (uVar3 >> 2) + 0x9e3779b97f4a7c15 ^ uVar3;
  uVar3 = *param_8 + uVar3 * 0x40 + (uVar3 >> 2) + 0x9e3779b97f4a7c15 ^ uVar3;
  uVar1 = *param_9;
  uVar2 = ((ulong)(uint)((int)uVar1 << 3) + 8 ^ uVar1 >> 0x20) * -0x622015f714c7d297;
  uVar1 = (uVar1 >> 0x20 ^ uVar2 >> 0x2f ^ uVar2) * -0x622015f714c7d297;
  uVar3 = (uVar1 ^ uVar1 >> 0x2f) * -0x622015f714c7d297 + uVar3 * 0x40 + (uVar3 >> 2) +
          0x9e3779b97f4a7c15 ^ uVar3;
  uVar3 = (ulong)*param_10 + uVar3 * 0x40 + (uVar3 >> 2) + 0x9e3779b97f4a7c15 ^ uVar3;
  uVar1 = *param_11;
  uVar2 = ((ulong)(uint)((int)uVar1 << 3) + 8 ^ uVar1 >> 0x20) * -0x622015f714c7d297;
  uVar1 = (uVar1 >> 0x20 ^ uVar2 >> 0x2f ^ uVar2) * -0x622015f714c7d297;
  uVar3 = (uVar1 ^ uVar1 >> 0x2f) * -0x622015f714c7d297 + uVar3 * 0x40 + (uVar3 >> 2) +
          0x9e3779b97f4a7c15 ^ uVar3;
  uVar1 = *param_12;
  uVar2 = ((ulong)(uint)((int)uVar1 << 3) + 8 ^ uVar1 >> 0x20) * -0x622015f714c7d297;
  uVar1 = (uVar1 >> 0x20 ^ uVar2 >> 0x2f ^ uVar2) * -0x622015f714c7d297;
  return (uVar1 ^ uVar1 >> 0x2f) * -0x622015f714c7d297 + uVar3 * 0x40 + (uVar3 >> 2) +
         0x9e3779b97f4a7c15 ^ uVar3;
}



/* Entry: 109294f48; end: 10929501f;  */

ulong FUN_109294f48(undefined8 param_1,long param_2)

{
  undefined1 *puVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  undefined1 uStack_42;
  undefined1 uStack_41;
  
  lVar2 = *(long *)(param_2 + 0x288);
  lVar3 = *(long *)(param_2 + 0x200);
  uVar4 = lVar2 + 0x9e3779b97f4a7c15;
  uVar4 = lVar3 + uVar4 * 0x40 + (uVar4 >> 2) + 0x9e3779b97f4a7c15 ^ uVar4;
  if (lVar3 != 0) {
    lVar3 = lVar3 << 4;
    lVar2 = param_2;
    do {
      puVar1 = &uStack_41;
      FUN_1092950a8(puVar1,lVar2);
      uVar4 = uVar4 + 0x9e3779b97f4a7c15;
      uVar4 = (ulong)(puVar1 + uVar4 * 0x40 + -0x61c8864680b583eb + (uVar4 >> 2)) ^ uVar4;
      lVar2 = lVar2 + 0x10;
      lVar3 = lVar3 + -0x10;
    } while (lVar3 != 0);
    lVar2 = *(long *)(param_2 + 0x288);
  }
  if (lVar2 != 0) {
    param_2 = param_2 + 0x208;
    lVar2 = lVar2 << 4;
    do {
      puVar1 = &uStack_42;
      func_0x0001092950f8(puVar1,param_2);
      uVar4 = uVar4 + 0x9e3779b97f4a7c15;
      uVar4 = (ulong)(puVar1 + uVar4 * 0x40 + -0x61c8864680b583eb + (uVar4 >> 2)) ^ uVar4;
      param_2 = param_2 + 0x10;
      lVar2 = lVar2 + -0x10;
    } while (lVar2 != 0);
  }
  return uVar4;
}



/* Entry: 109295020; end: 1092950a7;  */

ulong FUN_109295020(undefined8 param_1,long param_2)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  
  uVar3 = *(ulong *)(param_2 + 0x100);
  uVar4 = 0;
  if (uVar3 != 0) {
    lVar1 = param_2 + uVar3 * 0x20;
    uVar4 = uVar3;
    do {
      lVar2 = param_2;
      FUN_10926a100(param_2,param_2 + 4,param_2 + 8,param_2 + 0xc,param_2 + 0x10,param_2 + 0x14,
                    param_2 + 0x18,param_2 + 0x1c);
      uVar4 = uVar4 + 0x9e3779b97f4a7c15;
      uVar4 = lVar2 + -0x61c8864680b583eb + uVar4 * 0x40 + (uVar4 >> 2) ^ uVar4;
      param_2 = param_2 + 0x20;
    } while (param_2 != lVar1);
  }
  return uVar4;
}



/* Entry: 1092950a8; end: 109295147;  */

ulong FUN_1092950a8(undefined8 param_1,uint *param_2)

{
  ulong uVar1;
  
  uVar1 = (ulong)*param_2 + 0x9e3779b97f4a7c15;
  uVar1 = (ulong)param_2[1] + uVar1 * 0x40 + (uVar1 >> 2) + 0x9e3779b97f4a7c15 ^ uVar1;
  uVar1 = (ulong)param_2[2] + uVar1 * 0x40 + (uVar1 >> 2) + 0x9e3779b97f4a7c15 ^ uVar1;
  return (ulong)param_2[3] + uVar1 * 0x40 + (uVar1 >> 2) + 0x9e3779b97f4a7c15 ^ uVar1;
}



/* Entry: 109295148; end: 1092953e7;  */

long * FUN_109295148(long *param_1)

{
  long lVar1;
  
  func_0x000109295180(param_1,param_1[2]);
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 1092953e8; end: 1092954e7;  */

undefined8 FUN_1092953e8(long param_1,long param_2)

{
  int *piVar1;
  int *piVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  
  uVar3 = *(ulong *)(param_1 + 0x288);
  if ((uVar3 != *(ulong *)(param_2 + 0x288)) ||
     (uVar4 = *(ulong *)(param_1 + 0x200), uVar4 != *(ulong *)(param_2 + 0x200))) {
    return 0;
  }
  if (uVar4 != 0) {
    uVar7 = 1;
    uVar6 = 0;
    do {
      uVar5 = uVar7;
      piVar1 = (int *)(param_1 + uVar6 * 0x10);
      piVar2 = (int *)(param_2 + uVar6 * 0x10);
      if (*piVar1 != *piVar2) {
        return 0;
      }
      if (piVar1[1] != piVar2[1]) {
        return 0;
      }
      if (piVar1[2] != piVar2[2]) {
        return 0;
      }
      if (piVar1[3] != piVar2[3]) {
        return 0;
      }
      uVar7 = (ulong)((int)uVar5 + 1);
      uVar6 = uVar5;
    } while (uVar5 < uVar4);
  }
  if (uVar3 != 0) {
    uVar4 = 1;
    uVar7 = 0;
    do {
      uVar6 = uVar4;
      piVar1 = (int *)(param_1 + 0x208 + uVar7 * 0x10);
      piVar2 = (int *)(param_2 + 0x208 + uVar7 * 0x10);
      if (*piVar1 != *piVar2) {
        return 0;
      }
      if (piVar1[1] != piVar2[1]) {
        return 0;
      }
      if (piVar1[2] != piVar2[2]) {
        return 0;
      }
      if (piVar1[3] != piVar2[3]) {
        return 0;
      }
      uVar4 = (ulong)((int)uVar6 + 1);
      uVar7 = uVar6;
    } while (uVar6 < uVar3);
  }
  return 1;
}



/* Entry: 1092954e8; end: 10929555f;  */

ulong FUN_1092954e8(long param_1,long param_2)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  
  if (*(long *)(param_1 + 0x100) != *(long *)(param_2 + 0x100)) {
    return 0;
  }
  if (*(long *)(param_1 + 0x100) != 0) {
    uVar3 = 0;
    uVar4 = 1;
    do {
      uVar2 = param_1 + uVar3 * 0x20;
      func_0x00010926a1b4(uVar2,param_2 + uVar3 * 0x20);
      if ((uVar2 & 1) == 0) {
        return uVar2;
      }
      bVar1 = uVar4 < *(ulong *)(param_1 + 0x100);
      uVar3 = uVar4;
      uVar4 = (ulong)((int)uVar4 + 1);
    } while (bVar1);
    return uVar2;
  }
  return 1;
}



/* Entry: 109295560; end: 10929566f;  */

undefined4 * FUN_109295560(undefined4 *param_1,undefined4 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  *param_1 = *param_2;
  FUN_109295670(param_1 + 2,param_2 + 2);
  FUN_10925f264(param_1 + 10,param_2 + 10);
  FUN_10925f32c(param_1 + 0x8c,param_2 + 0x8c);
  uVar2 = *(undefined8 *)(param_2 + 0xb0);
  uVar1 = *(undefined8 *)(param_2 + 0xae);
  uVar3 = *(undefined8 *)(param_2 + 0xb2);
  uVar5 = *(undefined8 *)(param_2 + 0xb8);
  uVar4 = *(undefined8 *)(param_2 + 0xb6);
  *(undefined8 *)(param_1 + 0xb4) = *(undefined8 *)(param_2 + 0xb4);
  *(undefined8 *)(param_1 + 0xb2) = uVar3;
  *(undefined8 *)(param_1 + 0xb8) = uVar5;
  *(undefined8 *)(param_1 + 0xb6) = uVar4;
  *(undefined8 *)(param_1 + 0xb0) = uVar2;
  *(undefined8 *)(param_1 + 0xae) = uVar1;
  uVar2 = *(undefined8 *)(param_2 + 0xbc);
  uVar1 = *(undefined8 *)(param_2 + 0xba);
  uVar4 = *(undefined8 *)(param_2 + 0xc0);
  uVar3 = *(undefined8 *)(param_2 + 0xbe);
  uVar6 = *(undefined8 *)(param_2 + 0xc4);
  uVar5 = *(undefined8 *)(param_2 + 0xc2);
  param_1[0xc6] = param_2[0xc6];
  *(undefined8 *)(param_1 + 0xc0) = uVar4;
  *(undefined8 *)(param_1 + 0xbe) = uVar3;
  *(undefined8 *)(param_1 + 0xc4) = uVar6;
  *(undefined8 *)(param_1 + 0xc2) = uVar5;
  *(undefined8 *)(param_1 + 0xbc) = uVar2;
  *(undefined8 *)(param_1 + 0xba) = uVar1;
  FUN_109295754(param_1 + 200,param_2 + 200);
  uVar1 = *(undefined8 *)(param_2 + 0x10a);
  param_1[0x10c] = param_2[0x10c];
  *(undefined8 *)(param_1 + 0x10a) = uVar1;
  param_1[0x10e] = param_2[0x10e];
  FUN_109295888(param_1 + 0x110,param_2 + 0x110);
  *(undefined8 *)(param_1 + 0x11a) = *(undefined8 *)(param_2 + 0x11a);
  FUN_1092958f0(param_1 + 0x11c,param_2 + 0x11c);
  *(undefined8 *)(param_1 + 0x126) = *(undefined8 *)(param_2 + 0x126);
  FUN_1092958f0(param_1 + 0x128,param_2 + 0x128);
  uVar2 = *(undefined8 *)(param_2 + 0x134);
  uVar1 = *(undefined8 *)(param_2 + 0x132);
  *(undefined8 *)(param_1 + 0x136) = *(undefined8 *)(param_2 + 0x136);
  *(undefined8 *)(param_1 + 0x134) = uVar2;
  *(undefined8 *)(param_1 + 0x132) = uVar1;
  *(undefined1 *)(param_1 + 0x138) = 0;
  *(undefined1 *)(param_1 + 0x14a) = 0;
  if (*(char *)(param_2 + 0x14a) == '\x01') {
    FUN_10925f4a4(param_1 + 0x138,param_2 + 0x138);
    *(undefined1 *)(param_1 + 0x14a) = 1;
  }
  return param_1;
}



/* Entry: 109295670; end: 1092956d3;  */

undefined8 * FUN_109295670(undefined8 *param_1,long param_2)

{
  long lVar1;
  long lVar2;
  
  param_1[1] = 0;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  if (*(long *)(param_2 + 0x18) != 0) {
    lVar2 = *(long *)(param_2 + 0x18) << 3;
    lVar1 = param_2;
    do {
      FUN_1092956d4(param_1,lVar1);
      lVar1 = lVar1 + 8;
      lVar2 = lVar2 + -8;
    } while (lVar2 != 0);
  }
  *(undefined8 *)(param_2 + 0x18) = 0;
  return param_1;
}



/* Entry: 1092956d4; end: 109295753;  */

undefined8 * FUN_1092956d4(long param_1,undefined8 *param_2)

{
  undefined1 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined *puVar4;
  long lVar5;
  ulong uVar6;
  undefined *puVar7;
  
  uVar6 = *(ulong *)(param_1 + 0x18);
  if (uVar6 < 3) {
    puVar3 = (undefined8 *)(param_1 + uVar6 * 8);
    *puVar3 = *param_2;
    *(ulong *)(param_1 + 0x18) = uVar6 + 1;
    return puVar3;
  }
  puVar2 = (undefined8 *)0x10;
  ___cxa_allocate_exception();
  func_0x000104c4f71c();
  puVar3 = puVar2;
  puVar4 = PTR___ZTISt12length_error_110352238;
  ___cxa_throw(puVar2,PTR___ZTISt12length_error_110352238,PTR___ZNSt12length_errorD1Ev_110346170);
  ___cxa_free_exception(puVar2);
  __Unwind_Resume();
  lVar5 = 0;
  puVar3[0x1d] = 0;
  puVar3[0x1c] = 0;
  puVar3[0x1f] = 0;
  puVar3[0x1e] = 0;
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
  puVar3[5] = 0;
  puVar3[4] = 0;
  puVar3[7] = 0;
  puVar3[6] = 0;
  puVar3[1] = 0;
  *puVar3 = 0;
  puVar3[3] = 0;
  puVar3[2] = 0;
  do {
    puVar1 = (undefined1 *)((long)puVar3 + lVar5);
    *puVar1 = 0;
    *(undefined8 *)(puVar1 + 0xc) = 0x100000000;
    *(undefined8 *)(puVar1 + 4) = 1;
    *(undefined8 *)(puVar1 + 0x18) = 0;
    *(undefined4 *)(puVar1 + 0x14) = 0;
    lVar5 = lVar5 + 0x20;
  } while (lVar5 != 0x100);
  puVar3[0x20] = 0;
  if (*(long *)(puVar4 + 0x100) != 0) {
    lVar5 = *(long *)(puVar4 + 0x100) << 5;
    puVar7 = puVar4;
    do {
      FUN_109295804(puVar3,puVar7);
      puVar7 = puVar7 + 0x20;
      lVar5 = lVar5 + -0x20;
    } while (lVar5 != 0);
  }
  *(undefined8 *)(puVar4 + 0x100) = 0;
  return puVar3;
}



/* Entry: 109295754; end: 109295803;  */

undefined8 * FUN_109295754(undefined8 *param_1,long param_2)

{
  undefined1 *puVar1;
  long lVar2;
  long lVar3;
  
  lVar2 = 0;
  param_1[0x1d] = 0;
  param_1[0x1c] = 0;
  param_1[0x1f] = 0;
  param_1[0x1e] = 0;
  param_1[0x19] = 0;
  param_1[0x18] = 0;
  param_1[0x1b] = 0;
  param_1[0x1a] = 0;
  param_1[0x15] = 0;
  param_1[0x14] = 0;
  param_1[0x17] = 0;
  param_1[0x16] = 0;
  param_1[0x11] = 0;
  param_1[0x10] = 0;
  param_1[0x13] = 0;
  param_1[0x12] = 0;
  param_1[0xd] = 0;
  param_1[0xc] = 0;
  param_1[0xf] = 0;
  param_1[0xe] = 0;
  param_1[9] = 0;
  param_1[8] = 0;
  param_1[0xb] = 0;
  param_1[10] = 0;
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[7] = 0;
  param_1[6] = 0;
  param_1[1] = 0;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  do {
    puVar1 = (undefined1 *)((long)param_1 + lVar2);
    *puVar1 = 0;
    *(undefined8 *)(puVar1 + 0xc) = 0x100000000;
    *(undefined8 *)(puVar1 + 4) = 1;
    *(undefined8 *)(puVar1 + 0x18) = 0;
    *(undefined4 *)(puVar1 + 0x14) = 0;
    lVar2 = lVar2 + 0x20;
  } while (lVar2 != 0x100);
  param_1[0x20] = 0;
  if (*(long *)(param_2 + 0x100) != 0) {
    lVar3 = *(long *)(param_2 + 0x100) << 5;
    lVar2 = param_2;
    do {
      FUN_109295804(param_1,lVar2);
      lVar2 = lVar2 + 0x20;
      lVar3 = lVar3 + -0x20;
    } while (lVar3 != 0);
  }
  *(undefined8 *)(param_2 + 0x100) = 0;
  return param_1;
}



/* Entry: 109295804; end: 109295887;  */

undefined8 * FUN_109295804(long param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  if (*(ulong *)(param_1 + 0x100) < 8) {
    puVar2 = (undefined8 *)(param_1 + *(ulong *)(param_1 + 0x100) * 0x20);
    uVar6 = *param_2;
    uVar8 = param_2[3];
    uVar7 = param_2[2];
    puVar2[1] = param_2[1];
    *puVar2 = uVar6;
    puVar2[3] = uVar8;
    puVar2[2] = uVar7;
    lVar4 = *(long *)(param_1 + 0x100);
    *(long *)(param_1 + 0x100) = lVar4 + 1;
    return (undefined8 *)(param_1 + lVar4 * 0x20);
  }
  puVar1 = (undefined8 *)0x10;
  ___cxa_allocate_exception();
  func_0x000104c4f71c();
  puVar2 = puVar1;
  puVar3 = PTR___ZTISt12length_error_110352238;
  ___cxa_throw(puVar1,PTR___ZTISt12length_error_110352238,PTR___ZNSt12length_errorD1Ev_110346170);
  ___cxa_free_exception(puVar1);
  __Unwind_Resume();
  puVar2[4] = 0;
  puVar2[1] = 0;
  *puVar2 = 0;
  puVar2[3] = 0;
  puVar2[2] = 0;
  if (*(long *)(puVar3 + 0x20) != 0) {
    lVar4 = *(long *)(puVar3 + 0x20) << 2;
    puVar5 = puVar3;
    do {
      FUN_10928bde4(puVar2,puVar5);
      puVar5 = puVar5 + 4;
      lVar4 = lVar4 + -4;
    } while (lVar4 != 0);
  }
  *(undefined8 *)(puVar3 + 0x20) = 0;
  return puVar2;
}



/* Entry: 109295888; end: 1092958ef;  */

undefined8 * FUN_109295888(undefined8 *param_1,long param_2)

{
  long lVar1;
  long lVar2;
  
  param_1[4] = 0;
  param_1[1] = 0;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  if (*(long *)(param_2 + 0x20) != 0) {
    lVar2 = *(long *)(param_2 + 0x20) << 2;
    lVar1 = param_2;
    do {
      FUN_10928bde4(param_1,lVar1);
      lVar1 = lVar1 + 4;
      lVar2 = lVar2 + -4;
    } while (lVar2 != 0);
  }
  *(undefined8 *)(param_2 + 0x20) = 0;
  return param_1;
}



/* Entry: 1092958f0; end: 109295957;  */

undefined8 * FUN_1092958f0(undefined8 *param_1,long param_2)

{
  long lVar1;
  long lVar2;
  
  param_1[4] = 0;
  param_1[1] = 0;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  if (*(long *)(param_2 + 0x20) != 0) {
    lVar2 = *(long *)(param_2 + 0x20) << 2;
    lVar1 = param_2;
    do {
      FUN_109261fb4(param_1,lVar1);
      lVar1 = lVar1 + 4;
      lVar2 = lVar2 + -4;
    } while (lVar2 != 0);
  }
  *(undefined8 *)(param_2 + 0x20) = 0;
  return param_1;
}



/* Entry: 109295958; end: 10929599f;  */

void FUN_109295958(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
    if ((char)param_1[2] == '\x01') {
      func_0x0001092951bc(lVar1 + 0x10);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(lVar1);
    return;
  }
  return;
}



/* Entry: 1092959a0; end: 109295ebf;  */

void FUN_1092959a0(long *param_1,long *param_2,long *param_3,long param_4,uint param_5,
                  undefined8 *param_6,uint *param_7,undefined8 param_8,long *param_9,
                  undefined4 param_10,undefined4 param_11,int param_12,int param_13,
                  undefined8 param_14,undefined8 param_15,undefined8 param_16,undefined8 param_17)

{
  char cVar1;
  bool bVar2;
  code *pcVar3;
  long *plVar4;
  long *plVar5;
  undefined *puVar6;
  long lVar7;
  undefined8 uVar8;
  ulong uVar9;
  ulong uStack_158;
  undefined8 uStack_150;
  long lStack_148;
  ulong uStack_140;
  undefined8 uStack_138;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  int iStack_128;
  undefined4 uStack_124;
  long lStack_120;
  ulong uStack_118;
  undefined8 uStack_110;
  long *plStack_100;
  long *plStack_f8;
  ulong uStack_f0;
  uint uStack_e8;
  undefined8 uStack_e4;
  undefined4 uStack_dc;
  undefined8 uStack_d8;
  uint uStack_d0;
  long *plStack_c0;
  long *plStack_b8;
  long *plStack_b0;
  long *plStack_a8;
  long *plStack_a0;
  long *plStack_98;
  ulong auStack_88 [2];
  long *aplStack_78 [3];
  
  uVar9 = (ulong)*param_7;
  aplStack_78[0] = param_3;
  func_0x000109fc8e58(uVar9,param_7[1],*(undefined4 *)(param_4 + 0x40));
  auStack_88[1] = 0x600000020;
  uVar9 = uVar9 & 0xffffffff;
  plStack_a0 = (long *)0x0;
  plStack_98 = (long *)0x0;
  auStack_88[0] = uVar9;
  if (*(int *)((long)param_1 + 0x734) == 1) {
    plStack_100 = param_9;
    plVar4 = (long *)0x20;
    __Znwm();
    plVar5 = plVar4 + 1;
    *plVar5 = 0;
    *plVar4 = (long)&PTR_FUN_110ae7758;
    plVar4[2] = 0;
    plVar4[3] = (long)param_9;
    uStack_150 = 0x6000000f0;
    uStack_158 = uVar9;
    plStack_f8 = plVar4;
    FUN_10928b768(&uStack_130,param_1,&uStack_158,&plStack_100);
    plStack_98 = (long *)CONCAT44(uStack_124,iStack_128);
    plStack_a0 = (long *)CONCAT44(uStack_12c,uStack_130);
    do {
      lVar7 = *plVar5;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar2) {
        *plVar5 = lVar7 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    param_3 = aplStack_78[0];
    if (lVar7 == 0) {
      (**(code **)(*plVar4 + 0x10))(plVar4);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
      param_3 = aplStack_78[0];
    }
  }
  else {
    (**(code **)(*param_1 + 0x70))(&plStack_100,param_1,auStack_88);
    plStack_98 = plStack_f8;
    plStack_a0 = plStack_100;
  }
  plStack_b0 = (long *)0x0;
  plStack_a8 = (long *)0x0;
  plStack_c0 = (long *)0x0;
  plStack_b8 = (long *)0x0;
  plVar4 = aplStack_78[0];
  if (param_3 != (long *)0x0) {
LAB_109295b54:
    aplStack_78[0] = plVar4;
    (**(code **)(*param_3 + 0x48))();
    (**(code **)(*param_3 + 0x48))();
    plStack_f8 = (long *)((ulong)plStack_f8 & 0xffffffff00000000);
    uStack_f0 = 0;
    uStack_d8 = *(undefined8 *)param_7;
    uStack_d0 = param_7[2];
    uStack_e4 = *param_6;
    uStack_dc = *(undefined4 *)(param_6 + 1);
    plStack_100 = (long *)0x0;
    uVar8 = CONCAT44(uStack_d0,uStack_dc);
    if ((*(uint *)(param_4 + 0x34) & 0xfffffffe) != 2) {
      uVar8 = 0x100000000;
    }
    uStack_130 = 0;
    if (param_12 != 0) {
      uStack_130 = 0x550;
    }
    uStack_12c = 0x200;
    iStack_128 = param_12;
    uStack_124 = 6;
    lStack_120 = param_4;
    uStack_118 = (ulong)param_5 | 0x100000000;
    uStack_110 = uVar8;
    uStack_e8 = param_5;
    (**(code **)(*param_3 + 0x38))(param_3,0x1000,0x100,0,0,0,0,0,&uStack_130,1);
    plVar4 = plStack_a0;
    (**(code **)(*param_3 + 0x68))(param_3,param_4,plStack_a0,&plStack_100,1,6);
    if (param_13 != 6) {
      uStack_158 = 0x7f800000200;
      uStack_150 = CONCAT44(param_13,6);
      lStack_148 = param_4;
      uStack_140 = (ulong)param_5 | 0x100000000;
      uStack_138 = uVar8;
      (**(code **)(*param_3 + 0x38))(param_3,0x100,0x1000,0,0,0,0,0,&uStack_158,1);
    }
    (**(code **)(*param_3 + 0x40))(param_3);
    (**(code **)(*param_2 + 0x30))(param_2,param_14,param_15,param_16,param_17,aplStack_78,1);
    if (*(int *)((long)param_1 + 0x734) != 1) {
      plVar5 = plVar4;
      (**(code **)(*plVar4 + 0x30))(plVar4,1,0,auStack_88[0]);
      if (plVar5 == (long *)0x0) {
        func_0x000105688514(&UNK_10f562f06);
        goto LAB_109295e7c;
      }
      _memcpy(param_9,plVar5,auStack_88[0]);
      (**(code **)(*plVar4 + 0x38))(plVar4);
    }
    plVar4 = plStack_b8;
    if (plStack_b8 != (long *)0x0) {
      plVar5 = plStack_b8 + 1;
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
        (**(code **)(*plStack_b8 + 0x10))(plStack_b8);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
      }
    }
    plVar4 = plStack_a8;
    if (plStack_a8 != (long *)0x0) {
      plVar5 = plStack_a8 + 1;
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
        (**(code **)(*plStack_a8 + 0x10))(plStack_a8);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
      }
    }
    plVar4 = plStack_98;
    if (plStack_98 != (long *)0x0) {
      plVar5 = plStack_98 + 1;
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
        (**(code **)(*plStack_98 + 0x10))(plStack_98);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
      }
    }
    return;
  }
  plStack_f8 = (long *)0x1;
  uStack_f0 = uStack_f0 & 0xffffffff00000000;
  plStack_100 = param_2;
  (**(code **)(*param_1 + 0x48))(&uStack_130,param_1,&plStack_100);
  plStack_a8 = (long *)CONCAT44(uStack_124,iStack_128);
  plStack_b0 = (long *)CONCAT44(uStack_12c,uStack_130);
  if (plStack_b0 == (long *)0x0) {
    puVar6 = &UNK_10f562ea8;
  }
  else {
    plStack_f8 = (long *)0x0;
    uStack_f0 = 0xffffffffffffffff;
    plStack_100 = plStack_b0;
    (**(code **)(*param_1 + 0x40))(&uStack_130,param_1,&plStack_100);
    plStack_b8 = (long *)CONCAT44(uStack_124,iStack_128);
    param_3 = (long *)CONCAT44(uStack_12c,uStack_130);
    plStack_c0 = param_3;
    plVar4 = param_3;
    if (param_3 != (long *)0x0) goto LAB_109295b54;
    puVar6 = &UNK_10f562ed6;
  }
  func_0x000105688514(puVar6);
LAB_109295e7c:
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x109295e80);
  (*pcVar3)();
}



/* Entry: 109295ec0; end: 1092963c7;  */

void FUN_109295ec0(long *param_1,long *param_2,long *param_3,long param_4,undefined8 *param_5,
                  undefined8 *param_6,uint param_7,undefined8 param_8,long *param_9,ulong param_10,
                  int param_11,int param_12,char param_13,undefined4 param_14,undefined8 param_15,
                  undefined8 param_16,undefined8 param_17,undefined8 param_18)

{
  char cVar1;
  bool bVar2;
  code *pcVar3;
  long *plVar4;
  long *plVar5;
  undefined *puVar6;
  long lVar7;
  undefined8 uVar8;
  ulong uStack_158;
  undefined8 uStack_150;
  long lStack_148;
  ulong uStack_140;
  undefined8 uStack_138;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  int iStack_128;
  undefined4 uStack_124;
  long lStack_120;
  ulong uStack_118;
  undefined8 uStack_110;
  long *plStack_100;
  long *plStack_f8;
  ulong uStack_f0;
  uint uStack_e8;
  undefined8 uStack_e4;
  undefined4 uStack_dc;
  undefined8 uStack_d8;
  undefined4 uStack_d0;
  long *plStack_c0;
  long *plStack_b8;
  long *plStack_b0;
  long *plStack_a8;
  long *plStack_a0;
  long *plStack_98;
  ulong auStack_88 [2];
  long *aplStack_78 [3];
  
  auStack_88[1] = 0x600000040;
  param_10 = param_10 & 0xffffffff;
  plStack_a0 = (long *)0x0;
  plStack_98 = (long *)0x0;
  auStack_88[0] = param_10;
  aplStack_78[0] = param_3;
  if ((param_13 == '\0') || (*(int *)((long)param_1 + 0x734) != 1)) {
    (**(code **)(*param_1 + 0x70))(&plStack_100,param_1,auStack_88);
    plVar4 = plStack_100;
    plStack_98 = plStack_f8;
    plStack_a0 = plStack_100;
    plVar5 = plStack_100;
    (**(code **)(*plStack_100 + 0x30))(plStack_100,2,0,auStack_88[0]);
    if (plVar5 == (long *)0x0) {
      func_0x000105688514(&UNK_10f562f2b);
      goto LAB_109296384;
    }
    _memcpy();
    (**(code **)(*plVar4 + 0x38))(plVar4);
  }
  else {
    plStack_100 = param_9;
    plVar4 = (long *)0x20;
    __Znwm();
    plVar5 = plVar4 + 1;
    *plVar5 = 0;
    *plVar4 = (long)&PTR_DAT_110ae77b8;
    plVar4[2] = 0;
    plVar4[3] = (long)param_9;
    uStack_150 = 0x6000000f0;
    uStack_158 = param_10;
    plStack_f8 = plVar4;
    FUN_10928b768(&uStack_130,param_1,&uStack_158,&plStack_100);
    plStack_98 = (long *)CONCAT44(uStack_124,iStack_128);
    plStack_a0 = (long *)CONCAT44(uStack_12c,uStack_130);
    do {
      lVar7 = *plVar5;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar2) {
        *plVar5 = lVar7 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    param_3 = aplStack_78[0];
    if (lVar7 == 0) {
      (**(code **)(*plVar4 + 0x10))(plVar4);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
      param_3 = aplStack_78[0];
    }
  }
  plStack_b0 = (long *)0x0;
  plStack_a8 = (long *)0x0;
  plStack_c0 = (long *)0x0;
  plStack_b8 = (long *)0x0;
  plVar4 = aplStack_78[0];
  if (param_3 != (long *)0x0) {
LAB_1092960a8:
    aplStack_78[0] = plVar4;
    (**(code **)(*param_3 + 0x48))();
    (**(code **)(*param_3 + 0x48))();
    plStack_f8 = (long *)((ulong)plStack_f8 & 0xffffffff00000000);
    uStack_f0 = 0;
    uStack_d8 = *param_6;
    uStack_d0 = *(undefined4 *)(param_6 + 1);
    uStack_e4 = *param_5;
    uStack_dc = *(undefined4 *)(param_5 + 1);
    plStack_100 = (long *)0x0;
    uVar8 = CONCAT44(uStack_d0,uStack_dc);
    if ((*(uint *)(param_4 + 0x34) & 0xfffffffe) != 2) {
      uVar8 = 0x100000000;
    }
    uStack_130 = 0;
    if (param_11 != 0) {
      uStack_130 = 0x7f8;
    }
    uStack_12c = 0x400;
    iStack_128 = param_11;
    uStack_124 = 7;
    lStack_120 = param_4;
    uStack_118 = (ulong)param_7 | 0x100000000;
    uStack_110 = uVar8;
    uStack_e8 = param_7;
    (**(code **)(*param_3 + 0x38))(param_3,0x1000,0x100,0,0,0,0,0,&uStack_130,1);
    (**(code **)(*param_3 + 0x60))(param_3,plStack_a0,param_4,&plStack_100,1,7);
    if (param_12 != 7) {
      uStack_158 = 0x7f800000400;
      uStack_150 = CONCAT44(param_12,7);
      lStack_148 = param_4;
      uStack_140 = (ulong)param_7 | 0x100000000;
      uStack_138 = uVar8;
      (**(code **)(*param_3 + 0x38))(param_3,0x100,0x1000,0,0,0,0,0,&uStack_158,1);
    }
    (**(code **)(*param_3 + 0x40))(param_3);
    (**(code **)(*param_2 + 0x30))(param_2,param_15,param_16,param_17,param_18,aplStack_78,1);
    plVar4 = plStack_b8;
    if (plStack_b8 != (long *)0x0) {
      plVar5 = plStack_b8 + 1;
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
        (**(code **)(*plStack_b8 + 0x10))(plStack_b8);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
      }
    }
    plVar4 = plStack_a8;
    if (plStack_a8 != (long *)0x0) {
      plVar5 = plStack_a8 + 1;
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
        (**(code **)(*plStack_a8 + 0x10))(plStack_a8);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
      }
    }
    plVar4 = plStack_98;
    if (plStack_98 != (long *)0x0) {
      plVar5 = plStack_98 + 1;
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
        (**(code **)(*plStack_98 + 0x10))(plStack_98);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
      }
    }
    return;
  }
  plStack_f8 = (long *)0x1;
  uStack_f0 = uStack_f0 & 0xffffffff00000000;
  plStack_100 = param_2;
  (**(code **)(*param_1 + 0x48))(&uStack_130,param_1,&plStack_100);
  plStack_a8 = (long *)CONCAT44(uStack_124,iStack_128);
  plStack_b0 = (long *)CONCAT44(uStack_12c,uStack_130);
  if (plStack_b0 == (long *)0x0) {
    puVar6 = &UNK_10f562f52;
  }
  else {
    plStack_f8 = (long *)0x0;
    uStack_f0 = 0xffffffffffffffff;
    plStack_100 = plStack_b0;
    (**(code **)(*param_1 + 0x40))(&uStack_130,param_1,&plStack_100);
    plStack_b8 = (long *)CONCAT44(uStack_124,iStack_128);
    param_3 = (long *)CONCAT44(uStack_12c,uStack_130);
    plStack_c0 = param_3;
    plVar4 = param_3;
    if (param_3 != (long *)0x0) goto LAB_1092960a8;
    puVar6 = &UNK_10f562f82;
    plStack_c0 = (long *)0x0;
  }
  func_0x000105688514(puVar6);
LAB_109296384:
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x109296388);
  (*pcVar3)();
}



/* Entry: 1092963c8; end: 1092963cb;  */

void FUN_1092963c8(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 1092963cc; end: 1092963df;  */

void FUN_1092963cc(void)

{
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1092963e0; end: 1092963e3;  */

void FUN_1092963e0(void)

{
  return;
}



/* Entry: 1092963e4; end: 10929641b;  */

undefined8 FUN_1092963e4(undefined8 param_1,undefined8 param_2)

{
  func_0x000107c31948(param_2,&PTR_DAT_110ae7798);
  if ((int)param_2 == 0) {
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 10929641c; end: 109296423;  */

void FUN_10929641c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 109296424; end: 109296437;  */

void FUN_109296424(void)

{
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 109296438; end: 10929643b;  */

void FUN_109296438(void)

{
  return;
}



/* Entry: 10929643c; end: 109296473;  */

undefined8 FUN_10929643c(undefined8 param_1,undefined8 param_2)

{
  func_0x000107c31948(param_2,&PTR_DAT_110ae77f8);
  if ((int)param_2 == 0) {
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 109296474; end: 109296477;  */

void FUN_109296474(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 109296478; end: 10929656b;  */

undefined *** FUN_109296478(undefined ***param_1,undefined **param_2,undefined8 *param_3)

{
  undefined ***pppuVar1;
  long lVar2;
  undefined **ppuStack_48;
  undefined **ppuStack_40;
  undefined ***pppuStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_48 = &PTR_FUN_110ae7818;
  *param_1 = (undefined **)0x0;
  param_1[1] = (undefined **)0x0;
  param_1[2] = param_2;
  param_1[3] = (undefined **)*param_3;
  ppuStack_40 = param_2;
  pppuStack_30 = &ppuStack_48;
  FUN_10929661c(param_1 + 4,&ppuStack_48);
  param_1[8] = (undefined **)0x32aaaba7;
  param_1[10] = (undefined **)0x0;
  param_1[9] = (undefined **)0x0;
  param_1[0xc] = (undefined **)0x0;
  param_1[0xb] = (undefined **)0x0;
  param_1[0xe] = (undefined **)0x0;
  param_1[0xd] = (undefined **)0x0;
  param_1[0x10] = (undefined **)0x0;
  param_1[0xf] = (undefined **)0x0;
  param_1[0x12] = (undefined **)0x0;
  param_1[0x11] = (undefined **)0x0;
  param_1[0x13] = (undefined **)0x0;
  *(undefined4 *)(param_1 + 0x14) = 0x3f800000;
  param_1[0x15] = (undefined **)(param_1 + 0x15);
  param_1[0x16] = (undefined **)(param_1 + 0x15);
  param_1[0x18] = (undefined **)0x0;
  param_1[0x17] = (undefined **)0x0;
  param_1[0x1a] = (undefined **)0x0;
  param_1[0x19] = (undefined **)0x0;
  param_1[0x1b] = (undefined **)0x0;
  *(undefined4 *)(param_1 + 0x1c) = 0x3f800000;
  pppuVar1 = pppuStack_30;
  if (pppuStack_30 == &ppuStack_48) {
    lVar2 = 0x20;
  }
  else {
    if (pppuStack_30 == (undefined ***)0x0) goto LAB_10929653c;
    lVar2 = 0x28;
  }
  (**(code **)((long)*pppuStack_30 + lVar2))();
LAB_10929653c:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return param_1;
  }
  ___stack_chk_fail();
  return pppuVar1;
}



/* Entry: 10929656c; end: 109296573;  */

void FUN_10929656c(void)

{
  return;
}



/* Entry: 109296574; end: 1092965a7;  */

void FUN_109296574(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)0x10;
  __Znwm();
  uVar2 = *(undefined8 *)(param_1 + 8);
  *puVar1 = &PTR_FUN_110ae7818;
  puVar1[1] = uVar2;
  return;
}



/* Entry: 1092965a8; end: 1092965d3;  */

void FUN_1092965a8(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  *param_2 = &PTR_FUN_110ae7818;
  param_2[1] = uVar1;
  return;
}



/* Entry: 1092965d4; end: 10929660f;  */

long FUN_1092965d4(long param_1,undefined8 param_2)

{
  func_0x000107c31948(param_2,&PTR_DAT_110ae7888);
  param_1 = param_1 + 8;
  if ((int)param_2 == 0) {
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 109296610; end: 10929661b;  */

undefined ** FUN_109296610(void)

{
  return &PTR_DAT_110ae7888;
}



/* Entry: 10929661c; end: 10929667f;  */

long FUN_10929661c(long param_1,long param_2)

{
  long *plVar1;
  long lVar2;
  
  plVar1 = (long *)(param_2 + 0x18);
  lVar2 = *plVar1;
  if (lVar2 == 0) {
    plVar1 = (long *)(param_1 + 0x18);
  }
  else {
    if (lVar2 == param_2) {
      *(long *)(param_1 + 0x18) = param_1;
      (**(code **)(*(long *)*plVar1 + 0x18))((long *)*plVar1,param_1);
      return param_1;
    }
    *(long *)(param_1 + 0x18) = lVar2;
  }
  *plVar1 = 0;
  return param_1;
}



/* Entry: 109296680; end: 1092966af;  */

undefined8 * FUN_109296680(int param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 *extraout_x8;
  long lVar5;
  undefined4 uStack_60;
  int iStack_5c;
  undefined4 uStack_58;
  int iStack_54;
  
  if (param_1 - 1U < 0x13) {
    return (undefined8 *)(ulong)*(uint *)(&UNK_10dfc0d20 + (ulong)(param_1 - 1U) * 4);
  }
  puVar4 = (undefined8 *)&UNK_10f562fb4;
  func_0x000105688514();
  *extraout_x8 = 0;
  extraout_x8[1] = 0;
  extraout_x8[2] = 0;
  puVar2 = (undefined4 *)puVar4[1];
  for (puVar1 = (undefined4 *)*puVar4; puVar1 != puVar2; puVar1 = puVar1 + 0x20) {
    lVar3 = *(long *)(puVar1 + 0x10);
    for (lVar5 = *(long *)(puVar1 + 0xe); lVar5 != lVar3; lVar5 = lVar5 + 0x28) {
      iStack_5c = *(int *)(lVar5 + 0x18);
      iStack_54 = iStack_5c + 0x20;
      uStack_60 = *puVar1;
      puVar4 = extraout_x8;
      uStack_58 = uStack_60;
      FUN_1092411c8(extraout_x8,&uStack_60);
    }
  }
  return puVar4;
}



/* Entry: 1092966b0; end: 109296753;  */

void FUN_1092966b0(undefined8 *param_1,undefined8 *param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  long lVar3;
  long lVar4;
  undefined4 uStack_50;
  int iStack_4c;
  undefined4 uStack_48;
  int iStack_44;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  puVar2 = (undefined4 *)param_2[1];
  for (puVar1 = (undefined4 *)*param_2; puVar1 != puVar2; puVar1 = puVar1 + 0x20) {
    lVar3 = *(long *)(puVar1 + 0x10);
    for (lVar4 = *(long *)(puVar1 + 0xe); lVar4 != lVar3; lVar4 = lVar4 + 0x28) {
      iStack_4c = *(int *)(lVar4 + 0x18);
      iStack_44 = iStack_4c + 0x20;
      uStack_50 = *puVar1;
      uStack_48 = uStack_50;
      FUN_1092411c8(param_1,&uStack_50);
    }
  }
  return;
}



/* Entry: 109296754; end: 1092967eb;  */

uint FUN_109296754(uint *param_1)

{
  bool bVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  
  uVar3 = 1;
  uVar4 = *param_1;
  if (1 < *param_1) {
    do {
      uVar3 = uVar3 + 1;
      uVar5 = uVar4 >> 1;
      if (uVar5 < 2) {
        uVar5 = 1;
      }
      bVar1 = 3 < uVar4;
      uVar4 = uVar5;
    } while (bVar1);
  }
  uVar4 = 1;
  uVar5 = param_1[1];
  if (1 < param_1[1]) {
    do {
      uVar4 = uVar4 + 1;
      uVar6 = uVar5 >> 1;
      if (uVar6 < 2) {
        uVar6 = 1;
      }
      bVar1 = 3 < uVar5;
      uVar5 = uVar6;
    } while (bVar1);
  }
  uVar5 = 1;
  uVar6 = param_1[2];
  if (1 < param_1[2]) {
    do {
      uVar5 = uVar5 + 1;
      uVar2 = uVar6 >> 1;
      if (uVar2 < 2) {
        uVar2 = 1;
      }
      bVar1 = 3 < uVar6;
      uVar6 = uVar2;
    } while (bVar1);
  }
  if (uVar3 <= uVar4) {
    uVar3 = uVar4;
  }
  if (uVar3 <= uVar5) {
    uVar3 = uVar5;
  }
  return uVar3;
}



/* Entry: 1092967ec; end: 109296b0f;  */

/* WARNING: Removing unreachable block (ram,0x000109296a18) */
/* WARNING: Removing unreachable block (ram,0x000109296a1c) */
/* WARNING: Removing unreachable block (ram,0x000109296a24) */
/* WARNING: Removing unreachable block (ram,0x000109296a2c) */
/* WARNING: Removing unreachable block (ram,0x000109296a30) */
/* WARNING: Removing unreachable block (ram,0x000109296a50) */

void FUN_1092967ec(long *param_1,long *param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  char cVar3;
  bool bVar4;
  code *pcVar5;
  long *plVar6;
  ulong uVar7;
  long lVar8;
  long *plVar9;
  long *plVar10;
  long lStack_70;
  long *plStack_68;
  long lStack_60;
  long *plStack_58;
  
  __ZNSt3__15mutex4lockEv(param_2 + 8);
  lStack_60 = 0;
  plStack_58 = (long *)0x0;
  plVar6 = param_2 + 0x10;
  FUN_1092981b0(plVar6,param_3);
  if (plVar6 == (long *)0x0) {
    FUN_109298088(param_2);
    plVar6 = param_2 + 0x10;
    FUN_1092981b0(plVar6,param_3);
    if (plVar6 != (long *)0x0) goto LAB_109296850;
LAB_1092968c4:
    plVar6 = (long *)param_2[7];
    if (plVar6 == (long *)0x0) {
      func_0x000104c501e4();
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x109296ad8);
      (*pcVar5)();
    }
    (**(code **)(*plVar6 + 0x30))(&lStack_70,plVar6,param_3);
    lStack_60 = lStack_70;
    plStack_58 = plStack_68;
    lVar8 = lStack_70;
    plVar10 = plStack_68;
  }
  else {
LAB_109296850:
    if (plVar6[0xf] == 0) goto LAB_1092968c4;
    uVar7 = (plVar6[0xf] + plVar6[0xe]) - 1;
    plVar9 = (long *)(*(long *)(plVar6[0xb] + (uVar7 >> 8) * 8) + (uVar7 & 0xff) * 0x10);
    plVar10 = (long *)plVar9[1];
    lVar8 = *plVar9;
    if (plVar10 != (long *)0x0) {
      plVar9 = plVar10 + 1;
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar9,0x10);
        if (bVar4) {
          *plVar9 = *plVar9 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    lStack_60 = lVar8;
    plStack_58 = plVar10;
    func_0x0001092991d4(plVar6 + 10);
    if (plVar6[0xf] == 0) {
      func_0x00010929925c(param_2 + 0x10,plVar6);
    }
  }
  lStack_70 = lVar8;
  FUN_1092993d4(param_2 + 0x18,&lStack_70,&lStack_70);
  lVar1 = *param_2;
  lVar2 = param_2[1];
  if (lVar2 != 0) {
    plVar6 = (long *)(lVar2 + 0x10);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar4) {
        *plVar6 = *plVar6 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  if (plVar10 != (long *)0x0) {
    plVar6 = plVar10 + 1;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar4) {
        *plVar6 = *plVar6 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  *param_1 = lVar8;
  plVar6 = (long *)0x40;
  __Znwm();
  plVar9 = plVar6 + 1;
  *plVar9 = 0;
  *plVar6 = (long)&PTR_FUN_110ae78a8;
  plVar6[2] = 0;
  plVar6[3] = lVar8;
  plVar6[4] = lVar1;
  plVar6[5] = lVar2;
  plVar6[6] = lVar8;
  plVar6[7] = (long)plVar10;
  param_1[1] = (long)plVar6;
  if (lVar8 != 0) {
    if (*(long *)(lVar8 + 0x10) == 0) {
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar9,0x10);
        if (bVar4) {
          *plVar9 = *plVar9 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      plVar10 = plVar6 + 2;
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar10,0x10);
        if (bVar4) {
          *plVar10 = *plVar10 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      *(long *)(lVar8 + 8) = lVar8;
      *(long **)(lVar8 + 0x10) = plVar6;
    }
    else {
      if (*(long *)(*(long *)(lVar8 + 0x10) + 8) != -1) goto LAB_109296a10;
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar9,0x10);
        if (bVar4) {
          *plVar9 = *plVar9 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      plVar10 = plVar6 + 2;
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar10,0x10);
        if (bVar4) {
          *plVar10 = *plVar10 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      *(long *)(lVar8 + 8) = lVar8;
      *(long **)(lVar8 + 0x10) = plVar6;
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
    do {
      lVar8 = *plVar9;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar4) {
        *plVar9 = lVar8 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar8 == 0) {
      (**(code **)(*plVar6 + 0x10))(plVar6);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
    }
  }
LAB_109296a10:
  plVar6 = plStack_58;
  if (plStack_58 != (long *)0x0) {
    plVar9 = plStack_58 + 1;
    do {
      lVar8 = *plVar9;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar4) {
        *plVar9 = lVar8 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar8 == 0) {
      (**(code **)(*plStack_58 + 0x10))(plStack_58);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
    }
  }
  __ZNSt3__15mutex6unlockEv(param_2 + 8);
  return;
}



/* Entry: 109296b10; end: 109296cdb;  */

undefined8 **
FUN_109296b10(undefined8 param_1,undefined8 **param_2,undefined4 param_3,long param_4,
             undefined4 param_5,undefined4 param_6,undefined8 param_7,undefined4 param_8,
             undefined4 param_9,undefined4 param_10,undefined4 param_11)

{
  long lVar1;
  bool bVar2;
  undefined8 **ppuVar3;
  undefined8 *puVar4;
  undefined8 **ppuVar5;
  long lVar6;
  undefined8 extraout_x8;
  undefined8 **ppuVar7;
  long lVar8;
  undefined8 uStack_c50;
  undefined8 uStack_c48;
  undefined8 uStack_c40;
  undefined8 uStack_c38;
  undefined8 uStack_c30;
  undefined8 uStack_c28;
  undefined8 uStack_c20;
  undefined8 uStack_c18;
  undefined8 uStack_c10;
  undefined8 uStack_c08;
  undefined8 uStack_c00;
  undefined8 uStack_bf8;
  undefined8 uStack_bf0;
  undefined8 uStack_be8;
  undefined8 uStack_be0;
  undefined8 uStack_bd8;
  undefined8 uStack_bd0;
  undefined8 uStack_bc8;
  undefined8 uStack_bc0;
  undefined8 *puStack_bb0;
  undefined8 uStack_ba8;
  undefined8 uStack_ba0;
  undefined8 uStack_b98;
  undefined8 uStack_b90;
  undefined8 uStack_b88;
  undefined8 uStack_b80;
  undefined8 uStack_b78;
  undefined8 uStack_b70;
  undefined8 uStack_b68;
  undefined8 uStack_b60;
  undefined8 uStack_b58;
  undefined8 uStack_b50;
  undefined8 uStack_b48;
  undefined8 uStack_b40;
  undefined8 uStack_b38;
  undefined8 uStack_b30;
  undefined8 uStack_b28;
  undefined8 uStack_b20;
  undefined8 uStack_b18;
  undefined8 uStack_b10;
  undefined1 uStack_b08;
  undefined8 auStack_b00 [55];
  undefined4 uStack_948;
  long lStack_940;
  long lStack_938;
  undefined8 uStack_930;
  undefined8 uStack_928;
  undefined8 *puStack_920;
  undefined8 **ppuStack_918;
  undefined1 *puStack_910;
  code *pcStack_908;
  undefined8 uStack_900;
  undefined4 uStack_8f4;
  undefined8 uStack_8f0;
  undefined8 uStack_8e8;
  undefined8 uStack_8e0;
  undefined4 uStack_8d8;
  undefined8 uStack_8d0;
  undefined8 uStack_8c8;
  undefined8 uStack_8c0;
  undefined4 uStack_8b8;
  undefined8 uStack_8b0;
  undefined8 uStack_8a8;
  undefined4 uStack_8a0;
  undefined4 uStack_89c;
  undefined8 uStack_898;
  undefined4 uStack_890;
  undefined4 uStack_88c;
  undefined4 uStack_888;
  undefined4 uStack_884;
  undefined1 auStack_880 [816];
  undefined8 uStack_550;
  undefined1 auStack_548 [40];
  undefined4 uStack_520;
  undefined4 uStack_51c;
  undefined8 uStack_4e0;
  ulong uStack_208;
  undefined8 auStack_200 [3];
  undefined4 auStack_1e8 [92];
  undefined8 uStack_78;
  long lStack_70;
  
  uStack_8f4 = param_10;
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar8 = param_4;
  uStack_900 = param_1;
  _bzero(auStack_880,0x330);
  lVar6 = 0;
  do {
    *(undefined8 *)((long)&uStack_8b0 + lVar6) = 0;
    *(undefined8 *)((long)&uStack_8a8 + lVar6) = 0;
    *(undefined8 *)((long)&uStack_8a0 + lVar6) = 0x100000004;
    *(undefined1 *)((long)&uStack_898 + lVar6) = 0;
    *(undefined1 *)((long)&uStack_898 + lVar6 + 4) = 0;
    lVar1 = lVar6 + 0x30;
    *(undefined8 *)((long)&uStack_890 + lVar6) = 0;
    *(undefined8 *)((long)&uStack_888 + lVar6) = 0;
    lVar6 = lVar1;
  } while (lVar1 != 0x360);
  _bzero(auStack_548,0x4d0);
  lVar6 = 0;
  do {
    *(undefined8 *)((long)auStack_200 + lVar6 + 0x10) = 0;
    *(undefined8 *)((long)auStack_200 + lVar6 + 8) = 0;
    *(undefined8 *)((long)auStack_200 + lVar6) = 0;
    *(undefined4 *)((long)auStack_1e8 + lVar6) = 1;
    lVar6 = lVar6 + 0x1c;
  } while (lVar6 != 0x188);
  uStack_78 = 0;
  uStack_8a8 = 0;
  uStack_898 = 0;
  uStack_550 = 1;
  uStack_890 = (undefined4)param_7;
  _uStack_8a0 = CONCAT44((int)param_4,param_3);
  uStack_884 = param_11;
  uStack_8b0._0_4_ = param_5;
  uStack_8b0._4_4_ = param_6;
  uStack_88c = param_8;
  uStack_888 = param_9;
  do {
    FUN_109294be0(auStack_548);
    bVar2 = 0xfffffffffffffffe < uStack_208;
    uStack_208 = uStack_208 + 1;
  } while (bVar2);
  uStack_4e0 = 1;
  uStack_520 = 0;
  uStack_51c = uStack_8f4;
  uStack_8c8 = 0x5000000068;
  uStack_8d0 = 0xffffffff;
  uStack_8c0 = 0x1e000000148;
  uStack_8b8 = 1;
  FUN_109294394(auStack_200,&uStack_8d0);
  uStack_8e8 = 0x800000060;
  uStack_8f0 = 0xffffffff00000000;
  uStack_8e0 = 0x800000140;
  uStack_8d8 = 1;
  FUN_109294394(auStack_200,&uStack_8f0);
  puVar4 = &uStack_8b0;
  ppuVar3 = param_2;
  (*(code *)(*param_2)[0x12])(uStack_900);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return ppuVar3;
  }
  ___stack_chk_fail();
  __Unwind_Resume();
  uStack_928 = 1;
  pcStack_908 = FUN_109296cdc;
  lVar6 = 0;
  lStack_938 = *(long *)PTR____stack_chk_guard_11034bdc0;
  auStack_b00[0x33] = 0;
  auStack_b00[0x32] = 0;
  auStack_b00[0x35] = 0;
  auStack_b00[0x34] = 0;
  auStack_b00[0x2f] = 0;
  auStack_b00[0x2e] = 0;
  auStack_b00[0x31] = 0;
  auStack_b00[0x30] = 0;
  auStack_b00[0x2b] = 0;
  auStack_b00[0x2a] = 0;
  auStack_b00[0x2d] = 0;
  auStack_b00[0x2c] = 0;
  auStack_b00[0x27] = 0;
  auStack_b00[0x26] = 0;
  auStack_b00[0x29] = 0;
  auStack_b00[0x28] = 0;
  auStack_b00[0x23] = 0;
  auStack_b00[0x22] = 0;
  auStack_b00[0x25] = 0;
  auStack_b00[0x24] = 0;
  auStack_b00[0x1f] = 0;
  auStack_b00[0x1e] = 0;
  auStack_b00[0x21] = 0;
  auStack_b00[0x20] = 0;
  auStack_b00[0x1b] = 0;
  auStack_b00[0x1a] = 0;
  auStack_b00[0x1d] = 0;
  auStack_b00[0x1c] = 0;
  auStack_b00[0x17] = 0;
  auStack_b00[0x16] = 0;
  auStack_b00[0x19] = 0;
  auStack_b00[0x18] = 0;
  auStack_b00[0x13] = 0;
  auStack_b00[0x12] = 0;
  auStack_b00[0x15] = 0;
  auStack_b00[0x14] = 0;
  auStack_b00[0xf] = 0;
  auStack_b00[0xe] = 0;
  auStack_b00[0x11] = 0;
  auStack_b00[0x10] = 0;
  auStack_b00[0xb] = 0;
  auStack_b00[10] = 0;
  auStack_b00[0xd] = 0;
  auStack_b00[0xc] = 0;
  auStack_b00[7] = 0;
  auStack_b00[6] = 0;
  auStack_b00[9] = 0;
  auStack_b00[8] = 0;
  auStack_b00[3] = 0;
  auStack_b00[2] = 0;
  auStack_b00[5] = 0;
  auStack_b00[4] = 0;
  auStack_b00[1] = 0;
  auStack_b00[0] = 0;
  uStack_b18 = 0;
  uStack_b20 = 0;
  uStack_b28 = 0;
  uStack_b30 = 0;
  uStack_b38 = 0;
  uStack_b40 = 0;
  uStack_b48 = 0;
  uStack_b50 = 0;
  uStack_b58 = 0;
  uStack_b60 = 0;
  uStack_b68 = 0;
  uStack_b70 = 0;
  uStack_b78 = 0;
  uStack_b80 = 0;
  uStack_b88 = 0;
  uStack_b90 = 0;
  uStack_b98 = 0;
  uStack_ba0 = 0;
  uStack_ba8 = 0;
  uStack_b08 = 0;
  uStack_930 = param_7;
  puStack_920 = &uStack_8b0;
  ppuStack_918 = param_2;
  puStack_910 = &stack0xfffffffffffffff0;
  do {
    *(undefined8 *)((long)auStack_b00 + lVar6 + 8) = 0;
    *(undefined8 *)((long)auStack_b00 + lVar6) = 0;
    *(undefined8 *)((long)auStack_b00 + lVar6 + 0x10) = 1;
    lVar6 = lVar6 + 0x18;
  } while (lVar6 != 0x1b0);
  auStack_b00[0x36] = 0;
  uStack_b10 = *(undefined8 *)(lVar8 + 0x24);
  uStack_948 = 1;
  uStack_c48 = 0;
  uStack_c50 = 0;
  uStack_c38 = 0;
  uStack_c40 = 0;
  uStack_c28 = 0;
  uStack_c30 = 0;
  uStack_c18 = 0;
  uStack_c20 = 0;
  uStack_c08 = 0;
  uStack_c10 = 0;
  uStack_bf8 = 0;
  uStack_c00 = 0;
  uStack_be8 = 0;
  uStack_bf0 = 0;
  uStack_bd8 = 0;
  uStack_be0 = 0;
  uStack_bc8 = 0;
  uStack_bd0 = 0;
  uStack_bc0 = 0;
  puStack_bb0 = puVar4;
  lStack_940 = lVar8;
  FUN_109297584(&uStack_c50,&lStack_940);
  FUN_109296e38(&uStack_ba8,&uStack_c50);
  ppuVar5 = &puStack_bb0;
  (*(code *)(*ppuVar3)[0x13])(extraout_x8);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_938) {
    return ppuVar3;
  }
  ___stack_chk_fail();
  if (ppuVar3 != ppuVar5) {
    ppuVar3[0x12] = (undefined8 *)0x0;
    if (ppuVar5[0x12] != (undefined8 *)0x0) {
      lVar8 = (long)ppuVar5[0x12] << 3;
      ppuVar7 = ppuVar5;
      do {
        FUN_109297fb0(ppuVar3,ppuVar7);
        ppuVar7 = ppuVar7 + 1;
        lVar8 = lVar8 + -8;
      } while (lVar8 != 0);
    }
    ppuVar5[0x12] = (undefined8 *)0x0;
  }
  return ppuVar3;
}



/* Entry: 109296cdc; end: 109296e37;  */

/* WARNING: Type propagation algorithm not settling */

long * FUN_109296cdc(undefined8 param_1,long *param_2,long param_3,long param_4)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  undefined8 uStack_350;
  undefined8 uStack_348;
  undefined8 uStack_340;
  undefined8 uStack_338;
  undefined8 uStack_330;
  undefined8 uStack_328;
  undefined8 uStack_320;
  undefined8 uStack_318;
  undefined8 uStack_310;
  undefined8 uStack_308;
  undefined8 uStack_300;
  undefined8 uStack_2f8;
  undefined8 uStack_2f0;
  undefined8 uStack_2e8;
  undefined8 uStack_2e0;
  undefined8 uStack_2d8;
  undefined8 uStack_2d0;
  undefined8 uStack_2c8;
  undefined8 uStack_2c0;
  long alStack_2b0 [21];
  undefined1 uStack_208;
  undefined8 auStack_200 [55];
  undefined4 uStack_48;
  long lStack_40;
  long lStack_38;
  
  lVar2 = 0;
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  auStack_200[0x33] = 0;
  auStack_200[0x32] = 0;
  auStack_200[0x35] = 0;
  auStack_200[0x34] = 0;
  auStack_200[0x2f] = 0;
  auStack_200[0x2e] = 0;
  auStack_200[0x31] = 0;
  auStack_200[0x30] = 0;
  auStack_200[0x2b] = 0;
  auStack_200[0x2a] = 0;
  auStack_200[0x2d] = 0;
  auStack_200[0x2c] = 0;
  auStack_200[0x27] = 0;
  auStack_200[0x26] = 0;
  auStack_200[0x29] = 0;
  auStack_200[0x28] = 0;
  auStack_200[0x23] = 0;
  auStack_200[0x22] = 0;
  auStack_200[0x25] = 0;
  auStack_200[0x24] = 0;
  auStack_200[0x1f] = 0;
  auStack_200[0x1e] = 0;
  auStack_200[0x21] = 0;
  auStack_200[0x20] = 0;
  auStack_200[0x1b] = 0;
  auStack_200[0x1a] = 0;
  auStack_200[0x1d] = 0;
  auStack_200[0x1c] = 0;
  auStack_200[0x17] = 0;
  auStack_200[0x16] = 0;
  auStack_200[0x19] = 0;
  auStack_200[0x18] = 0;
  auStack_200[0x13] = 0;
  auStack_200[0x12] = 0;
  auStack_200[0x15] = 0;
  auStack_200[0x14] = 0;
  auStack_200[0xf] = 0;
  auStack_200[0xe] = 0;
  auStack_200[0x11] = 0;
  auStack_200[0x10] = 0;
  auStack_200[0xb] = 0;
  auStack_200[10] = 0;
  auStack_200[0xd] = 0;
  auStack_200[0xc] = 0;
  auStack_200[7] = 0;
  auStack_200[6] = 0;
  auStack_200[9] = 0;
  auStack_200[8] = 0;
  auStack_200[3] = 0;
  auStack_200[2] = 0;
  auStack_200[5] = 0;
  auStack_200[4] = 0;
  auStack_200[1] = 0;
  auStack_200[0] = 0;
  alStack_2b0[0x13] = 0;
  alStack_2b0[0x12] = 0;
  alStack_2b0[0x11] = 0;
  alStack_2b0[0x10] = 0;
  alStack_2b0[0xf] = 0;
  alStack_2b0[0xe] = 0;
  alStack_2b0[0xd] = 0;
  alStack_2b0[0xc] = 0;
  alStack_2b0[0xb] = 0;
  alStack_2b0[10] = 0;
  alStack_2b0[9] = 0;
  alStack_2b0[8] = 0;
  alStack_2b0[7] = 0;
  alStack_2b0[6] = 0;
  alStack_2b0[5] = 0;
  alStack_2b0[4] = 0;
  alStack_2b0[3] = 0;
  alStack_2b0[2] = 0;
  alStack_2b0[1] = 0;
  uStack_208 = 0;
  do {
    *(undefined8 *)((long)auStack_200 + lVar2 + 8) = 0;
    *(undefined8 *)((long)auStack_200 + lVar2) = 0;
    *(undefined8 *)((long)auStack_200 + lVar2 + 0x10) = 1;
    lVar2 = lVar2 + 0x18;
  } while (lVar2 != 0x1b0);
  auStack_200[0x36] = 0;
  alStack_2b0[0x14] = *(undefined8 *)(param_4 + 0x24);
  uStack_48 = 1;
  uStack_348 = 0;
  uStack_350 = 0;
  uStack_338 = 0;
  uStack_340 = 0;
  uStack_328 = 0;
  uStack_330 = 0;
  uStack_318 = 0;
  uStack_320 = 0;
  uStack_308 = 0;
  uStack_310 = 0;
  uStack_2f8 = 0;
  uStack_300 = 0;
  uStack_2e8 = 0;
  uStack_2f0 = 0;
  uStack_2d8 = 0;
  uStack_2e0 = 0;
  uStack_2c8 = 0;
  uStack_2d0 = 0;
  uStack_2c0 = 0;
  alStack_2b0[0] = param_3;
  lStack_40 = param_4;
  FUN_109297584(&uStack_350,&lStack_40);
  FUN_109296e38(alStack_2b0 + 1,&uStack_350);
  plVar1 = alStack_2b0;
  (**(code **)(*param_2 + 0x98))(param_1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return param_2;
  }
  ___stack_chk_fail();
  if (param_2 != plVar1) {
    param_2[0x12] = 0;
    if (plVar1[0x12] != 0) {
      lVar2 = plVar1[0x12] << 3;
      plVar3 = plVar1;
      do {
        FUN_109297fb0(param_2,plVar3);
        plVar3 = plVar3 + 1;
        lVar2 = lVar2 + -8;
      } while (lVar2 != 0);
    }
    plVar1[0x12] = 0;
  }
  return param_2;
}



/* Entry: 109296e38; end: 109296e9f;  */

long FUN_109296e38(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  
  if (param_1 != param_2) {
    *(undefined8 *)(param_1 + 0x90) = 0;
    if (*(long *)(param_2 + 0x90) != 0) {
      lVar2 = *(long *)(param_2 + 0x90) << 3;
      lVar1 = param_2;
      do {
        FUN_109297fb0(param_1,lVar1);
        lVar1 = lVar1 + 8;
        lVar2 = lVar2 + -8;
      } while (lVar2 != 0);
    }
    *(undefined8 *)(param_2 + 0x90) = 0;
  }
  return param_1;
}



/* Entry: 109296ea0; end: 10929727f;  */

/* WARNING: Removing unreachable block (ram,0x00010928892c) */
/* WARNING: Removing unreachable block (ram,0x000109288938) */
/* WARNING: Removing unreachable block (ram,0x000109288a08) */
/* WARNING: Removing unreachable block (ram,0x000109288a14) */
/* WARNING: Removing unreachable block (ram,0x000109288a24) */
/* WARNING: Removing unreachable block (ram,0x000109288a34) */
/* WARNING: Removing unreachable block (ram,0x0001092886a4) */
/* WARNING: Removing unreachable block (ram,0x0001092886ac) */

void FUN_109296ea0(long *param_1,long param_2,long param_3,long *param_4,long param_5,int param_6,
                  int param_7)

{
  undefined **ppuVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  char cVar5;
  bool bVar6;
  uint uVar7;
  uint uVar8;
  code *pcVar9;
  int iVar10;
  byte bVar11;
  undefined4 uVar12;
  uint uVar13;
  long lVar14;
  long lVar15;
  long *plVar16;
  uint uVar17;
  long *plVar18;
  long *plVar19;
  long lVar20;
  ulong uVar21;
  ulong uVar22;
  long *plVar23;
  ulong uVar24;
  long *plStack_e0;
  int iStack_cc;
  long lStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  long *plStack_a8;
  long *plStack_a0;
  long *plStack_98;
  long *plStack_90;
  long *plStack_88;
  long *plStack_80;
  long *plStack_78;
  
  plVar19 = (long *)param_1[3];
  if (*(int *)((long)plVar19 + 0x734) != 1) {
    uStack_b8 = 1;
    uStack_b0 = (long *)((ulong)uStack_b0._4_4_ << 0x20);
    uStack_c0 = param_1;
    (**(code **)(*plVar19 + 0x48))(&plStack_88,plVar19,&uStack_c0);
    if (plStack_88 == (long *)0x0) {
      func_0x000105688514(&UNK_10f562fc6);
    }
    else {
      uStack_c0 = plStack_88;
      uStack_b8 = 0;
      uStack_b0 = (long *)0xffffffffffffffff;
      (**(code **)(*plVar19 + 0x40))(&plStack_98,plVar19,&uStack_c0);
      if (plStack_98 != (long *)0x0) {
        plVar19 = plStack_98;
        (**(code **)(*plStack_98 + 0x48))();
        (**(code **)(*plVar19 + 0x48))();
        if (param_5 != 0) {
          uVar12 = 0;
          if (param_6 != 0) {
            uVar12 = 0x1ffff;
          }
          lVar20 = param_5 * 0x38;
          plVar18 = param_4 + 6;
          do {
            uStack_c0 = (long *)CONCAT44(0x400,uVar12);
            uStack_b8 = CONCAT44(7,param_6);
            plStack_a0 = (long *)CONCAT44((int)*plVar18,*(undefined4 *)((long)plVar18 + -0xc));
            if ((*(uint *)(param_3 + 0x34) & 0xfffffffe) != 2) {
              plStack_a0 = (long *)0x100000000;
            }
            plStack_a8 = (long *)((ulong)*(uint *)(plVar18 + -3) | 0x100000000);
            uStack_b0 = (long *)param_3;
            (**(code **)(*plVar19 + 0x38))(plVar19,0x1000,0x100,0,0,0,0,0,&uStack_c0,1);
            lVar20 = lVar20 + -0x38;
            plVar18 = plVar18 + 7;
          } while (lVar20 != 0);
        }
        (**(code **)(*plVar19 + 0x60))(plVar19,param_2,param_3,param_4,param_5,7);
        if ((param_5 != 0) && (param_7 != 7)) {
          param_5 = param_5 * 0x38;
          plVar18 = param_4 + 6;
          do {
            uStack_c0 = (long *)0x1ffff00000400;
            uStack_b8 = CONCAT44(param_7,7);
            plStack_a0 = (long *)CONCAT44((int)*plVar18,*(undefined4 *)((long)plVar18 + -0xc));
            if ((*(uint *)(param_3 + 0x34) & 0xfffffffe) != 2) {
              plStack_a0 = (long *)0x100000000;
            }
            plStack_a8 = (long *)((ulong)*(uint *)(plVar18 + -3) | 0x100000000);
            uStack_b0 = (long *)param_3;
            (**(code **)(*plVar19 + 0x38))(plVar19,0x100,0x1000,0,0,0,0,0,&uStack_c0,1);
            param_5 = param_5 + -0x38;
            plVar18 = plVar18 + 7;
          } while (param_5 != 0);
        }
        (**(code **)(*plVar19 + 0x40))(plVar19);
        uStack_c0 = plStack_98;
        (**(code **)(*param_1 + 0x30))(param_1,0,0,0,0,&uStack_c0,1);
        if (plStack_90 != (long *)0x0) {
          plVar19 = plStack_90 + 1;
          do {
            lVar20 = *plVar19;
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(plVar19,0x10);
            if (bVar6) {
              *plVar19 = lVar20 + -1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (lVar20 == 0) {
            (**(code **)(*plStack_90 + 0x10))(plStack_90);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_90);
          }
        }
        if (plStack_80 != (long *)0x0) {
          plVar19 = plStack_80 + 1;
          do {
            lVar20 = *plVar19;
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(plVar19,0x10);
            if (bVar6) {
              *plVar19 = lVar20 + -1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (lVar20 == 0) {
            (**(code **)(*plStack_80 + 0x10))(plStack_80);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_80);
          }
        }
        return;
      }
      func_0x000105688514(&UNK_10f562ffe);
    }
                    /* WARNING: Does not return */
    pcVar9 = (code *)SoftwareBreakpoint(1,0x10929722c);
    (*pcVar9)();
  }
  plVar18 = plVar19 + 0x126;
  lVar20 = 0;
  uStack_b8 = 0;
  uStack_c0 = (long *)param_3;
  plStack_a0 = plVar18;
  if (*(char *)((long)plVar19 + 0x954) == '\x01') {
    lVar15 = *(long *)(param_2 + 0x58);
    if (lVar15 == 0) {
      bVar11 = 1;
    }
    else {
      plStack_78 = *(long **)(lVar15 + 0x50);
      plStack_e0 = *(long **)(lVar15 + 0x18);
      FUN_10925bdc8(lVar15,0,&plStack_78,param_5,plVar18,plVar19 + 0x102);
      if (*(int *)(lVar15 + 0x2c) != 0) {
        plVar16 = (long *)*plVar18;
        ppuVar1 = &PTR_DAT_110ae4700 + (ulong)*(uint *)(param_3 + 0x40) * 4;
        if (0x56 < *(uint *)(param_3 + 0x40)) {
          ppuVar1 = &PTR_DAT_110ae4700;
        }
        uStack_b0 = (long *)CONCAT44(uStack_b0._4_4_,
                                     (uint)((*(byte *)((long)ppuVar1 + 0x19) & 0xfe) == 0 &&
                                           *(byte *)(ppuVar1 + 3) < 2));
        lVar15 = *(long *)(param_2 + 0x58);
        if (lVar15 != 0) {
          plStack_78 = *(long **)(lVar15 + 0x50);
          plStack_e0 = *(long **)(lVar15 + 0x18);
          FUN_10925bdc8(lVar15,0,&plStack_78);
        }
        _glBindBuffer(0x88ec);
        plVar23 = param_4;
        FUN_109288430(param_4,param_5,param_3 + 0x24,*(undefined1 *)((long)plVar19 + 0x981));
        plStack_88 = (long *)0x0;
        plStack_80 = (long *)0x0;
        if (plVar23 == (long *)0x0) {
LAB_1092889c8:
          iStack_cc = 0;
          plStack_e0 = plStack_80;
        }
        else {
          plStack_90 = (long *)0x600000040;
          plStack_98 = plVar23;
          (**(code **)(*plVar16 + 0x70))(&plStack_78,plVar16,&plStack_98);
          plStack_88 = plStack_78;
          lVar15 = plStack_78[0xb];
          plStack_80 = plStack_e0;
          if (lVar15 == 0) goto LAB_1092889c8;
          plStack_78 = *(long **)(lVar15 + 0x50);
          FUN_10925bdc8(lVar15,0,&plStack_78);
          iStack_cc = *(int *)(lVar15 + 0x2c);
        }
        lVar15 = *(long *)(param_2 + 0x58);
        if (lVar15 != 0) {
          plStack_78 = *(long **)(lVar15 + 0x50);
          FUN_10925bdc8(lVar15,0,&plStack_78);
        }
        _glBindBuffer(0x8f36);
        _glBindBuffer(0x8f37,iStack_cc);
        if (param_5 != 0) {
          plVar19 = param_4 + param_5 * 7;
          do {
            ppuVar1 = &PTR_DAT_110ae4700 + (ulong)*(uint *)(param_3 + 0x40) * 4;
            if (0x56 < *(uint *)(param_3 + 0x40)) {
              ppuVar1 = &PTR_DAT_110ae4700;
            }
            bVar11 = *(byte *)((long)ppuVar1 + 0x1a);
            if (bVar11 == 0) {
              FUN_109243bf8(&UNK_10f62e152);
              goto LAB_109288d34;
            }
            bVar4 = *(byte *)(ppuVar1 + 3);
            uVar17 = *(uint *)(param_4 + 5);
            plVar16 = (long *)(ulong)uVar17;
            func_0x000109fc8e58(plVar16,*(undefined4 *)((long)param_4 + 0x2c));
            plVar18 = plStack_a0;
            uVar7 = 0;
            if (bVar4 != 0) {
              uVar7 = ((uVar17 + bVar4) - 1) / (uint)bVar4;
            }
            uVar7 = uVar7 * bVar11;
            uVar17 = uVar7;
            if (*(uint *)(param_4 + 1) != 0) {
              uVar17 = *(uint *)(param_4 + 1);
            }
            uVar22 = (ulong)uVar17;
            plVar23 = (long *)param_4[2];
            if (plVar23 == (long *)0x0) {
              ppuVar1 = &PTR_DAT_110ae4700 + (ulong)*(uint *)(param_3 + 0x40) * 4;
              if (0x56 < *(uint *)(param_3 + 0x40)) {
                ppuVar1 = &PTR_DAT_110ae4700;
              }
              uVar13 = (uint)*(byte *)((long)ppuVar1 + 0x19);
              if (*(byte *)((long)ppuVar1 + 0x19) < 2) {
                uVar13 = 1;
              }
              uVar8 = 0;
              if (uVar13 != 0) {
                uVar8 = ((*(int *)((long)param_4 + 0x2c) + uVar13) - 1) / uVar13;
              }
              plVar23 = (long *)(uVar8 * uVar22);
            }
            if (uVar17 == uVar7 && plVar23 == plVar16 || ((ulong)uStack_b0 & 1) != 0) {
              lVar15 = *(long *)(param_2 + 0x58);
              if (lVar15 == 0) {
                iVar10 = 0;
                if (lVar20 != 0) goto LAB_109288c00;
LAB_109288c10:
                _glBindBuffer(0x88ec);
              }
              else {
                plStack_78 = *(long **)(lVar15 + 0x50);
                FUN_10925bdc8(lVar15,lVar20,&plStack_78);
                iVar10 = *(int *)(lVar15 + 0x2c);
                if (lVar20 == 0) goto LAB_109288c10;
LAB_109288c00:
                if (*(int *)(lVar20 + 0x130) != iVar10) {
                  *(int *)(lVar20 + 0x130) = iVar10;
                  goto LAB_109288c10;
                }
              }
              FUN_10926eaf8(param_3,(long)param_4 + 0x1c,param_4 + 5,(int)param_4[3],*param_4,uVar22
                            ,plVar23,lVar20);
            }
            else {
              uVar17 = *(uint *)(param_4 + 6);
              if (uVar17 != 0) {
                uVar13 = 0;
                lVar20 = 0;
                lVar15 = *param_4;
                uVar8 = 0;
                plStack_a8 = plVar23;
                if (uVar22 != 0) {
                  uVar8 = (uint)((ulong)plVar23 / uVar22);
                }
                do {
                  if (uVar8 != 0) {
                    uVar17 = 0;
                    lVar14 = lVar15;
                    do {
                      (*(code *)plVar18[0x109])(0x8f36,0x8f37,lVar14,lVar20,(ulong)uVar7);
                      lVar14 = lVar14 + uVar22;
                      lVar20 = lVar20 + (ulong)uVar7;
                      uVar17 = uVar17 + 1;
                    } while (uVar17 < uVar8);
                    uVar17 = *(uint *)(param_4 + 6);
                    plVar23 = plStack_a8;
                  }
                  lVar15 = lVar15 + (long)plVar23;
                  uVar13 = uVar13 + 1;
                } while (uVar13 < uVar17);
              }
              lVar20 = uStack_b8;
              param_3 = (long)uStack_c0;
              if (uStack_b8 == 0) {
LAB_109288bc4:
                _glBindBuffer(0x88ec,iStack_cc);
              }
              else if (*(int *)(uStack_b8 + 0x130) != iStack_cc) {
                *(int *)(uStack_b8 + 0x130) = iStack_cc;
                goto LAB_109288bc4;
              }
              FUN_10926eaf8(param_3,(long)param_4 + 0x1c,param_4 + 5,(int)param_4[3],0,0,0,lVar20);
            }
            param_4 = param_4 + 7;
          } while (param_4 != plVar19);
        }
        if (lVar20 == 0) {
LAB_109288c60:
          _glBindBuffer(0x8f37,0);
          if (lVar20 != 0) goto LAB_109288c70;
LAB_109288c7c:
          _glBindBuffer(0x8f36,0);
        }
        else {
          if (*(int *)(lVar20 + 0x11c) != 0) {
            *(undefined4 *)(lVar20 + 0x11c) = 0;
            goto LAB_109288c60;
          }
LAB_109288c70:
          if (*(int *)(lVar20 + 0x118) != 0) {
            *(undefined4 *)(lVar20 + 0x118) = 0;
            goto LAB_109288c7c;
          }
        }
        if (plStack_e0 != (long *)0x0) {
          plVar19 = plStack_e0 + 1;
          do {
            lVar15 = *plVar19;
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(plVar19,0x10);
            if (bVar6) {
              *plVar19 = lVar15 + -1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (lVar15 == 0) {
            (**(code **)(*plStack_e0 + 0x10))(plStack_e0);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_e0);
          }
        }
        if (lVar20 != 0) {
          if (*(int *)(lVar20 + 0x130) == 0) goto LAB_109288cd8;
          *(undefined4 *)(lVar20 + 0x130) = 0;
        }
        _glBindBuffer(0x88ec,0);
        goto LAB_109288cd8;
      }
      bVar11 = *(byte *)((long)plVar19 + 0x954);
    }
  }
  else {
    bVar11 = 0;
  }
  ppuVar1 = &PTR_DAT_110ae4700 + (ulong)*(uint *)(param_3 + 0x40) * 4;
  if (0x56 < *(uint *)(param_3 + 0x40)) {
    ppuVar1 = &PTR_DAT_110ae4700;
  }
  bVar4 = *(byte *)(ppuVar1 + 3);
  bVar2 = *(byte *)((long)ppuVar1 + 0x19);
  if ((bVar11 & 1) != 0) {
    _glBindBuffer(0x88ec,0);
  }
  plVar16 = param_4;
  FUN_109288430(param_4,param_5,param_3 + 0x24,*(undefined1 *)((long)plVar19 + 0x981));
  plStack_78 = (long *)0x0;
  lVar15 = 0;
  uStack_b0 = plVar16;
  if (*(long *)(param_2 + 0x50) == 0) {
    lStack_c8 = *(long *)(param_2 + 0x58);
    if (lStack_c8 == 0) {
      lStack_c8 = 0;
    }
    else {
      FUN_10925ca24(lStack_c8,1,0,0,0);
    }
  }
  else {
    lStack_c8 = *(long *)(*(long *)(param_2 + 0x50) + 0x10);
  }
  if (param_5 != 0) {
    plStack_a8 = param_4 + param_5 * 7;
    do {
      ppuVar1 = &PTR_DAT_110ae4700 + (ulong)*(uint *)(param_3 + 0x40) * 4;
      if (0x56 < *(uint *)(param_3 + 0x40)) {
        ppuVar1 = &PTR_DAT_110ae4700;
      }
      bVar11 = *(byte *)((long)ppuVar1 + 0x1a);
      if (bVar11 == 0) {
        FUN_109243bf8(&UNK_10f62e152);
LAB_109288d34:
                    /* WARNING: Does not return */
        pcVar9 = (code *)SoftwareBreakpoint(1,0x109288d38);
        (*pcVar9)();
      }
      bVar3 = *(byte *)(ppuVar1 + 3);
      uVar17 = *(uint *)(param_4 + 5);
      uVar22 = (ulong)uVar17;
      func_0x000109fc8e58(uVar22,*(undefined4 *)((long)param_4 + 0x2c));
      plVar18 = plStack_a0;
      uVar7 = 0;
      if (bVar3 != 0) {
        uVar7 = ((uVar17 + bVar3) - 1) / (uint)bVar3;
      }
      uVar7 = uVar7 * bVar11;
      uVar17 = uVar7;
      if (*(uint *)(param_4 + 1) != 0) {
        uVar17 = *(uint *)(param_4 + 1);
      }
      uVar21 = (ulong)uVar17;
      uVar24 = param_4[2];
      if (uVar24 == 0) {
        ppuVar1 = &PTR_DAT_110ae4700 + (ulong)*(uint *)(param_3 + 0x40) * 4;
        if (0x56 < *(uint *)(param_3 + 0x40)) {
          ppuVar1 = &PTR_DAT_110ae4700;
        }
        uVar13 = (uint)*(byte *)((long)ppuVar1 + 0x19);
        if (*(byte *)((long)ppuVar1 + 0x19) < 2) {
          uVar13 = 1;
        }
        uVar8 = 0;
        if (uVar13 != 0) {
          uVar8 = ((*(int *)((long)param_4 + 0x2c) + uVar13) - 1) / uVar13;
        }
        uVar24 = uVar8 * uVar21;
      }
      if ((((*(byte *)((long)plStack_a0 + 0x51) & 1) == 0) && (uVar17 != uVar7 || uVar24 != uVar22))
         || (((uVar17 != uVar7 || uVar24 != uVar22) &&
             ((*(byte *)((long)plStack_a0 + 0x51) ^ 0xff) & 1) == 0) &&
             ((bVar2 & 0xfe) != 0 || 1 < bVar4))) {
        lVar20 = *param_4;
        plVar19 = (long *)(lVar15 - (long)plStack_78);
        if (uStack_b0 < plVar19 || (long)uStack_b0 - (long)plVar19 == 0) {
          if (uStack_b0 < plVar19) {
            lVar15 = (long)plStack_78 + (long)uStack_b0;
          }
        }
        else {
          func_0x000107c27d58(&plStack_78,(long)uStack_b0 - (long)plVar19);
        }
        uVar17 = *(uint *)(param_4 + 6);
        if (uVar17 != 0) {
          uVar13 = 0;
          lVar20 = lStack_c8 + lVar20;
          uVar8 = 0;
          plVar19 = plStack_78;
          if (uVar21 != 0) {
            uVar8 = (uint)(uVar24 / uVar21);
          }
          do {
            if (uVar8 != 0) {
              lVar14 = 0;
              uVar17 = 0;
              do {
                _memcpy(plVar19,lVar20 + lVar14,(ulong)uVar7);
                plVar19 = (long *)((long)plVar19 + (ulong)uVar7);
                uVar17 = uVar17 + 1;
                lVar14 = lVar14 + uVar21;
              } while (uVar17 < uVar8);
              uVar17 = *(uint *)(param_4 + 6);
              plVar18 = plStack_a0;
            }
            lVar20 = lVar20 + uVar24;
            uVar13 = uVar13 + 1;
          } while (uVar13 < uVar17);
        }
        lVar20 = uStack_b8;
        param_3 = (long)uStack_c0;
        FUN_10926eaf8(uStack_c0,(long)param_4 + 0x1c,param_4 + 5,(int)param_4[3],plStack_78,0,0,
                      uStack_b8);
      }
      else {
        FUN_10926eaf8(param_3,(long)param_4 + 0x1c,param_4 + 5,(int)param_4[3],lStack_c8 + *param_4,
                      uVar21,uVar24,lVar20);
      }
      param_4 = param_4 + 7;
    } while (param_4 != plStack_a8);
  }
  if ((*(long *)(param_2 + 0x50) == 0) && (*(long *)(param_2 + 0x58) != 0)) {
    FUN_10925c194(*(long *)(param_2 + 0x58),lVar20);
  }
  if (plStack_78 != (long *)0x0) {
    __ZdlPv();
  }
LAB_109288cd8:
  (*(code *)plVar18[0x12a])(0xcf2,0);
  (*(code *)plVar18[0x12a])(0x806e,0);
  return;
}



/* Entry: 109297280; end: 1092973c7;  */

void FUN_109297280(long *param_1)

{
  long *plVar1;
  uint uVar2;
  long lVar3;
  
  plVar1 = param_1;
  (**(code **)(*param_1 + 0x30))();
  if (*(int *)((long)param_1 + 0x734) == 1 && plVar1 != (long *)0x0) {
    lVar3 = plVar1[7];
    if (*(char *)(lVar3 + 0x47) == '\x01') {
      (*pcRam0000000113829e40)(0x96d2,0x96d2);
      (*pcRam0000000113829e38)(0x96a6);
    }
    if (*(char *)(lVar3 + 0x48) == '\x01') {
      (*pcRam0000000113829e58)(0x96a6);
      _glDisable(0x96a5);
    }
    if (*(char *)(lVar3 + 0x49) == '\x01') {
      _glDisable(0x9563);
    }
    _glBindBuffer(0x8892,0);
    _glBindBuffer(0x8893,0);
    if ((*(char *)(lVar3 + 0x27) == '\x01') && (*(int *)(lVar3 + 0x80) != 0)) {
      uVar2 = 0;
      do {
        (**(code **)(lVar3 + 0x820))(uVar2,0);
        uVar2 = uVar2 + 1;
      } while (uVar2 < *(uint *)(lVar3 + 0x80));
    }
    if (*(int *)(lVar3 + 0x84) != 0) {
      uVar2 = 0;
      do {
        _glDisableVertexAttribArray(uVar2);
        uVar2 = uVar2 + 1;
      } while (uVar2 < *(uint *)(lVar3 + 0x84));
      if ((*(uint *)(lVar3 + 0x84) != 0) && ((*(byte *)(lVar3 + 0x41) & 1) != 0)) {
        uVar2 = 0;
        do {
          (**(code **)(lVar3 + 0x8d8))(uVar2,0);
          uVar2 = uVar2 + 1;
        } while (uVar2 < *(uint *)(lVar3 + 0x84));
      }
    }
  }
  return;
}



/* Entry: 1092973c8; end: 109297583;  */

void FUN_1092973c8(undefined8 param_1,long *param_2,long param_3)

{
  long lVar1;
  long *plVar2;
  long *plVar3;
  ulong uVar4;
  long lStack_2c8;
  long lStack_2c0;
  long lStack_2b8;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined1 uStack_228;
  undefined7 uStack_227;
  undefined1 uStack_220;
  undefined7 uStack_21f;
  undefined1 uStack_218;
  undefined8 auStack_210 [55];
  undefined4 uStack_58;
  
  lVar1 = 0;
  plVar2 = *(long **)(*param_2 + 0x18);
  auStack_210[0x33] = 0;
  auStack_210[0x32] = 0;
  auStack_210[0x35] = 0;
  auStack_210[0x34] = 0;
  auStack_210[0x2f] = 0;
  auStack_210[0x2e] = 0;
  auStack_210[0x31] = 0;
  auStack_210[0x30] = 0;
  auStack_210[0x2b] = 0;
  auStack_210[0x2a] = 0;
  auStack_210[0x2d] = 0;
  auStack_210[0x2c] = 0;
  auStack_210[0x27] = 0;
  auStack_210[0x26] = 0;
  auStack_210[0x29] = 0;
  auStack_210[0x28] = 0;
  auStack_210[0x23] = 0;
  auStack_210[0x22] = 0;
  auStack_210[0x25] = 0;
  auStack_210[0x24] = 0;
  auStack_210[0x1f] = 0;
  auStack_210[0x1e] = 0;
  auStack_210[0x21] = 0;
  auStack_210[0x20] = 0;
  auStack_210[0x1b] = 0;
  auStack_210[0x1a] = 0;
  auStack_210[0x1d] = 0;
  auStack_210[0x1c] = 0;
  auStack_210[0x17] = 0;
  auStack_210[0x16] = 0;
  auStack_210[0x19] = 0;
  auStack_210[0x18] = 0;
  auStack_210[0x13] = 0;
  auStack_210[0x12] = 0;
  auStack_210[0x15] = 0;
  auStack_210[0x14] = 0;
  auStack_210[0xf] = 0;
  auStack_210[0xe] = 0;
  auStack_210[0x11] = 0;
  auStack_210[0x10] = 0;
  auStack_210[0xb] = 0;
  auStack_210[10] = 0;
  auStack_210[0xd] = 0;
  auStack_210[0xc] = 0;
  auStack_210[7] = 0;
  auStack_210[6] = 0;
  auStack_210[9] = 0;
  auStack_210[8] = 0;
  auStack_210[3] = 0;
  auStack_210[2] = 0;
  auStack_210[5] = 0;
  auStack_210[4] = 0;
  auStack_210[1] = 0;
  auStack_210[0] = 0;
  uStack_21f = 0;
  uStack_218 = 0;
  uStack_220 = 0;
  uStack_238 = 0;
  uStack_240 = 0;
  uStack_228 = 0;
  uStack_227 = 0;
  uStack_230 = 0;
  uStack_258 = 0;
  uStack_260 = 0;
  uStack_248 = 0;
  uStack_250 = 0;
  uStack_278 = 0;
  uStack_280 = 0;
  uStack_268 = 0;
  uStack_270 = 0;
  uStack_298 = 0;
  uStack_2a0 = 0;
  uStack_288 = 0;
  uStack_290 = 0;
  lStack_2b8 = 0;
  lStack_2c0 = 0;
  uStack_2a8 = 0;
  uStack_2b0 = 0;
  do {
    *(undefined8 *)((long)auStack_210 + lVar1 + 8) = 0;
    *(undefined8 *)((long)auStack_210 + lVar1) = 0;
    *(undefined8 *)((long)auStack_210 + lVar1 + 0x10) = 1;
    lVar1 = lVar1 + 0x18;
  } while (lVar1 != 0x1b0);
  auStack_210[0x36] = 0;
  uStack_58 = 1;
  if (*(long *)(param_3 + 0x248) != 0) {
    uVar4 = 0;
    plVar3 = (long *)(param_3 + 0x18);
    do {
      FUN_109297584((ulong)&lStack_2c0 | 8,plVar3 + -2);
      if (*plVar3 != 0) {
        FUN_109297584((ulong)&lStack_2c0 | 8,plVar3);
      }
      uVar4 = uVar4 + 1;
      plVar3 = plVar3 + 9;
    } while (uVar4 < *(ulong *)(param_3 + 0x248));
  }
  lStack_2c8 = *(long *)(param_3 + 0x250);
  if (lStack_2c8 != 0) {
    FUN_109297584((ulong)&lStack_2c0 | 8,&lStack_2c8);
    if (*(long *)(param_3 + 0x260) != 0) {
      FUN_109297584((ulong)&lStack_2c0 | 8,param_3 + 0x260);
    }
  }
  lStack_2c8 = *(long *)(param_3 + 0x298);
  if ((lStack_2c8 != 0) && (lStack_2c8 != *(long *)(param_3 + 0x250))) {
    FUN_109297584((ulong)&lStack_2c0 | 8,&lStack_2c8);
    if (*(long *)(param_3 + 0x2a8) != 0) {
      FUN_109297584((ulong)&lStack_2c0 | 8,param_3 + 0x2a8);
    }
  }
  uStack_220 = (undefined1)*(undefined8 *)(lStack_2b8 + 0x24);
  uStack_21f = (undefined7)((ulong)*(undefined8 *)(lStack_2b8 + 0x24) >> 8);
  uStack_58 = 1;
  lStack_2c0 = *param_2;
  (**(code **)(*plVar2 + 0x98))(param_1,plVar2,&lStack_2c0);
  return;
}



/* Entry: 109297584; end: 1092975fb;  */

void FUN_109297584(long param_1,undefined8 *param_2)

{
  long lVar1;
  long lVar2;
  undefined8 *puVar3;
  ulong uVar4;
  undefined8 *extraout_x8;
  long *plVar5;
  ulong uVar6;
  long lVar7;
  undefined4 *puVar8;
  char *pcVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  
  uVar4 = *(ulong *)(param_1 + 0x90);
  if (uVar4 < 0x12) {
    *(undefined8 *)(param_1 + uVar4 * 8) = *param_2;
    *(ulong *)(param_1 + 0x90) = uVar4 + 1;
    return;
  }
  lVar1 = 0x10;
  ___cxa_allocate_exception();
  func_0x000104c4f71c();
  lVar2 = lVar1;
  ___cxa_throw(lVar1,PTR___ZTISt12length_error_110352238,PTR___ZNSt12length_errorD1Ev_110346170);
  ___cxa_free_exception(lVar1);
  __Unwind_Resume();
  _bzero(extraout_x8,0x360);
  lVar1 = 0;
  do {
    puVar3 = (undefined8 *)((long)extraout_x8 + lVar1);
    *puVar3 = 0;
    puVar3[1] = 0;
    puVar3[2] = 0x100000004;
    *(undefined1 *)(puVar3 + 3) = 0;
    *(undefined1 *)((long)puVar3 + 0x1c) = 0;
    lVar1 = lVar1 + 0x30;
    puVar3[4] = 0;
    puVar3[5] = 0;
  } while (lVar1 != 0x360);
  _bzero(extraout_x8 + 0x6c,0x4d8);
  lVar1 = 0;
  do {
    *(undefined8 *)((long)extraout_x8 + lVar1 + 0x6c0) = 0;
    *(undefined8 *)((long)extraout_x8 + lVar1 + 0x6b8) = 0;
    *(undefined8 *)((long)extraout_x8 + lVar1 + 0x6b0) = 0;
    *(undefined4 *)((long)extraout_x8 + lVar1 + 0x6c8) = 1;
    lVar1 = lVar1 + 0x1c;
  } while (lVar1 != 0x188);
  extraout_x8[0x107] = 0;
  do {
    FUN_109294be0(extraout_x8 + 0x6d);
    uVar4 = extraout_x8[0xd5];
    extraout_x8[0xd5] = uVar4 + 1;
  } while (0xfffffffffffffffe < uVar4);
  *(undefined4 *)(extraout_x8 + 0x86) = *(undefined4 *)(lVar2 + 4);
  uVar4 = *(ulong *)(lVar2 + 0x248);
  if (uVar4 != 0) {
    lVar1 = uVar4 * 0x48;
    plVar5 = (long *)(lVar2 + 0x18);
    do {
      if (*plVar5 != 0) {
        if (8 < uVar4) goto LAB_109297984;
        uVar6 = extraout_x8[0x83];
        if (uVar6 < uVar4) {
          do {
            extraout_x8[uVar6 + 0x7b] = 0xffffffff;
            uVar6 = extraout_x8[0x83] + 1;
            extraout_x8[0x83] = uVar6;
          } while (uVar6 < uVar4);
        }
        else {
          extraout_x8[0x83] = uVar4;
        }
        break;
      }
      lVar1 = lVar1 + -0x48;
      plVar5 = plVar5 + 9;
    } while (lVar1 != 0);
    uVar4 = 0;
    puVar8 = (undefined4 *)((long)extraout_x8 + 0x3dc);
    pcVar9 = (char *)(lVar2 + 0x4c);
    do {
      if (7 < (ulong)extraout_x8[0x7a]) {
        uVar10 = 0x10;
        ___cxa_allocate_exception(0x10);
        func_0x000104c4f71c();
        do {
          ___cxa_throw(uVar10,PTR___ZTISt12length_error_110352238,
                       PTR___ZNSt12length_errorD1Ev_110346170);
LAB_109297984:
          uVar10 = 0x10;
          ___cxa_allocate_exception();
          func_0x000104c4f71c();
        } while( true );
      }
      lVar1 = *(long *)(pcVar9 + -0x44);
      extraout_x8[extraout_x8[0x7a] + 0x72] = (ulong)*(uint *)(extraout_x8 + 0x6c);
      extraout_x8[0x7a] = extraout_x8[0x7a] + 1;
      puVar3 = extraout_x8;
      FUN_1092979b8();
      *puVar3 = *(undefined8 *)(pcVar9 + -0x24);
      uVar10 = NEON_rev64(*(undefined8 *)(lVar1 + 0x3c),4);
      puVar3[2] = uVar10;
      puVar3[4] = *(undefined8 *)(pcVar9 + -0x3c);
      lVar1 = *(long *)(pcVar9 + -0x34);
      if (lVar1 == 0) {
        if (*pcVar9 == '\x01') {
          *(undefined4 *)(puVar3 + 3) = *(undefined4 *)(pcVar9 + -4);
          *(undefined1 *)((long)puVar3 + 0x1c) = 1;
        }
      }
      else {
        puVar8[-1] = (int)extraout_x8[0x6c];
        *puVar8 = 0;
        puVar3 = extraout_x8;
        FUN_1092979b8();
        *puVar3 = 0x100000000;
        uVar10 = NEON_rev64(*(undefined8 *)(lVar1 + 0x3c),4);
        puVar3[2] = uVar10;
        puVar3[4] = *(undefined8 *)(pcVar9 + -0x2c);
      }
      uVar4 = uVar4 + 1;
      puVar8 = puVar8 + 2;
      pcVar9 = pcVar9 + 0x48;
    } while (uVar4 < *(ulong *)(lVar2 + 0x248));
  }
  lVar1 = *(long *)(lVar2 + 0x250);
  if (lVar1 == 0) {
    lVar1 = *(long *)(lVar2 + 0x298);
  }
  else {
    *(int *)(extraout_x8 + 0x84) = (int)extraout_x8[0x6c];
    *(undefined4 *)((long)extraout_x8 + 0x424) = 0;
    puVar3 = extraout_x8;
    FUN_1092979b8();
    *puVar3 = *(undefined8 *)(lVar2 + 0x270);
    uVar10 = NEON_rev64(*(undefined8 *)(lVar1 + 0x3c),4);
    puVar3[2] = uVar10;
    puVar3[4] = *(undefined8 *)(lVar2 + 600);
    lVar1 = *(long *)(lVar2 + 0x298);
    if (lVar1 != 0) {
      puVar3[1] = *(undefined8 *)(lVar2 + 0x2b8);
    }
    lVar7 = *(long *)(lVar2 + 0x260);
    if (lVar7 == 0) {
      if (*(char *)(lVar2 + 0x294) == '\x01') {
        *(undefined4 *)(puVar3 + 3) = *(undefined4 *)(lVar2 + 0x290);
        *(undefined1 *)((long)puVar3 + 0x1c) = 1;
      }
    }
    else {
      *(int *)(extraout_x8 + 0x85) = (int)extraout_x8[0x6c];
      *(undefined4 *)((long)extraout_x8 + 0x42c) = 0;
      puVar3 = extraout_x8;
      FUN_1092979b8();
      *puVar3 = 0x100000000;
      uVar10 = NEON_rev64(*(undefined8 *)(lVar7 + 0x3c),4);
      puVar3[2] = uVar10;
      puVar3[4] = *(undefined8 *)(lVar2 + 0x268);
      lVar1 = *(long *)(lVar2 + 0x298);
      if (lVar1 == 0) {
        return;
      }
      puVar3[1] = 0x100000000;
    }
  }
  if ((lVar1 != 0) && (lVar1 != *(long *)(lVar2 + 0x250))) {
    *(int *)(extraout_x8 + 0x84) = (int)extraout_x8[0x6c];
    *(undefined4 *)((long)extraout_x8 + 0x424) = 0;
    puVar3 = extraout_x8;
    FUN_1092979b8();
    uVar10 = *(undefined8 *)(lVar2 + 0x2b8);
    uVar11 = NEON_rev64(*(undefined8 *)(lVar1 + 0x3c),4);
    puVar3[2] = uVar11;
    puVar3[1] = uVar10;
    puVar3[4] = *(undefined8 *)(lVar2 + 0x2a0);
    lVar1 = *(long *)(lVar2 + 0x2a8);
    if (lVar1 == 0) {
      if (*(char *)(lVar2 + 0x2dc) == '\x01') {
        *(undefined4 *)(puVar3 + 3) = *(undefined4 *)(lVar2 + 0x2d8);
        *(undefined1 *)((long)puVar3 + 0x1c) = 1;
      }
    }
    else {
      *(int *)(extraout_x8 + 0x85) = (int)extraout_x8[0x6c];
      *(undefined4 *)((long)extraout_x8 + 0x42c) = 0;
      puVar3 = extraout_x8;
      FUN_1092979b8();
      puVar3[1] = 0x100000000;
      uVar10 = NEON_rev64(*(undefined8 *)(lVar1 + 0x3c),4);
      puVar3[2] = uVar10;
      puVar3[4] = *(undefined8 *)(lVar2 + 0x2b0);
    }
  }
  return;
}



/* Entry: 1092975fc; end: 1092979b7;  */

void FUN_1092975fc(undefined8 *param_1,long param_2)

{
  undefined8 *puVar1;
  long lVar2;
  ulong uVar3;
  long *plVar4;
  ulong uVar5;
  long lVar6;
  undefined4 *puVar7;
  char *pcVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  
  _bzero(param_1,0x360);
  lVar2 = 0;
  do {
    puVar1 = (undefined8 *)((long)param_1 + lVar2);
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1[2] = 0x100000004;
    *(undefined1 *)(puVar1 + 3) = 0;
    *(undefined1 *)((long)puVar1 + 0x1c) = 0;
    lVar2 = lVar2 + 0x30;
    puVar1[4] = 0;
    puVar1[5] = 0;
  } while (lVar2 != 0x360);
  _bzero(param_1 + 0x6c,0x4d8);
  lVar2 = 0;
  do {
    *(undefined8 *)((long)param_1 + lVar2 + 0x6c0) = 0;
    *(undefined8 *)((long)param_1 + lVar2 + 0x6b8) = 0;
    *(undefined8 *)((long)param_1 + lVar2 + 0x6b0) = 0;
    *(undefined4 *)((long)param_1 + lVar2 + 0x6c8) = 1;
    lVar2 = lVar2 + 0x1c;
  } while (lVar2 != 0x188);
  param_1[0x107] = 0;
  do {
    FUN_109294be0(param_1 + 0x6d);
    uVar3 = param_1[0xd5];
    param_1[0xd5] = uVar3 + 1;
  } while (0xfffffffffffffffe < uVar3);
  *(undefined4 *)(param_1 + 0x86) = *(undefined4 *)(param_2 + 4);
  uVar3 = *(ulong *)(param_2 + 0x248);
  if (uVar3 != 0) {
    lVar2 = uVar3 * 0x48;
    plVar4 = (long *)(param_2 + 0x18);
    do {
      if (*plVar4 != 0) {
        if (8 < uVar3) goto LAB_109297984;
        uVar5 = param_1[0x83];
        if (uVar5 < uVar3) {
          do {
            param_1[uVar5 + 0x7b] = 0xffffffff;
            uVar5 = param_1[0x83] + 1;
            param_1[0x83] = uVar5;
          } while (uVar5 < uVar3);
        }
        else {
          param_1[0x83] = uVar3;
        }
        break;
      }
      lVar2 = lVar2 + -0x48;
      plVar4 = plVar4 + 9;
    } while (lVar2 != 0);
    uVar3 = 0;
    puVar7 = (undefined4 *)((long)param_1 + 0x3dc);
    pcVar8 = (char *)(param_2 + 0x4c);
    do {
      if (7 < (ulong)param_1[0x7a]) {
        uVar9 = 0x10;
        ___cxa_allocate_exception(0x10);
        func_0x000104c4f71c();
        do {
          ___cxa_throw(uVar9,PTR___ZTISt12length_error_110352238,
                       PTR___ZNSt12length_errorD1Ev_110346170);
LAB_109297984:
          uVar9 = 0x10;
          ___cxa_allocate_exception();
          func_0x000104c4f71c();
        } while( true );
      }
      lVar2 = *(long *)(pcVar8 + -0x44);
      param_1[param_1[0x7a] + 0x72] = (ulong)*(uint *)(param_1 + 0x6c);
      param_1[0x7a] = param_1[0x7a] + 1;
      puVar1 = param_1;
      FUN_1092979b8();
      *puVar1 = *(undefined8 *)(pcVar8 + -0x24);
      uVar9 = NEON_rev64(*(undefined8 *)(lVar2 + 0x3c),4);
      puVar1[2] = uVar9;
      puVar1[4] = *(undefined8 *)(pcVar8 + -0x3c);
      lVar2 = *(long *)(pcVar8 + -0x34);
      if (lVar2 == 0) {
        if (*pcVar8 == '\x01') {
          *(undefined4 *)(puVar1 + 3) = *(undefined4 *)(pcVar8 + -4);
          *(undefined1 *)((long)puVar1 + 0x1c) = 1;
        }
      }
      else {
        puVar7[-1] = (int)param_1[0x6c];
        *puVar7 = 0;
        puVar1 = param_1;
        FUN_1092979b8();
        *puVar1 = 0x100000000;
        uVar9 = NEON_rev64(*(undefined8 *)(lVar2 + 0x3c),4);
        puVar1[2] = uVar9;
        puVar1[4] = *(undefined8 *)(pcVar8 + -0x2c);
      }
      uVar3 = uVar3 + 1;
      puVar7 = puVar7 + 2;
      pcVar8 = pcVar8 + 0x48;
    } while (uVar3 < *(ulong *)(param_2 + 0x248));
  }
  lVar2 = *(long *)(param_2 + 0x250);
  if (lVar2 == 0) {
    lVar2 = *(long *)(param_2 + 0x298);
  }
  else {
    *(int *)(param_1 + 0x84) = (int)param_1[0x6c];
    *(undefined4 *)((long)param_1 + 0x424) = 0;
    puVar1 = param_1;
    FUN_1092979b8();
    *puVar1 = *(undefined8 *)(param_2 + 0x270);
    uVar9 = NEON_rev64(*(undefined8 *)(lVar2 + 0x3c),4);
    puVar1[2] = uVar9;
    puVar1[4] = *(undefined8 *)(param_2 + 600);
    lVar2 = *(long *)(param_2 + 0x298);
    if (lVar2 != 0) {
      puVar1[1] = *(undefined8 *)(param_2 + 0x2b8);
    }
    lVar6 = *(long *)(param_2 + 0x260);
    if (lVar6 == 0) {
      if (*(char *)(param_2 + 0x294) == '\x01') {
        *(undefined4 *)(puVar1 + 3) = *(undefined4 *)(param_2 + 0x290);
        *(undefined1 *)((long)puVar1 + 0x1c) = 1;
      }
    }
    else {
      *(int *)(param_1 + 0x85) = (int)param_1[0x6c];
      *(undefined4 *)((long)param_1 + 0x42c) = 0;
      puVar1 = param_1;
      FUN_1092979b8();
      *puVar1 = 0x100000000;
      uVar9 = NEON_rev64(*(undefined8 *)(lVar6 + 0x3c),4);
      puVar1[2] = uVar9;
      puVar1[4] = *(undefined8 *)(param_2 + 0x268);
      lVar2 = *(long *)(param_2 + 0x298);
      if (lVar2 == 0) {
        return;
      }
      puVar1[1] = 0x100000000;
    }
  }
  if ((lVar2 != 0) && (lVar2 != *(long *)(param_2 + 0x250))) {
    *(int *)(param_1 + 0x84) = (int)param_1[0x6c];
    *(undefined4 *)((long)param_1 + 0x424) = 0;
    puVar1 = param_1;
    FUN_1092979b8();
    uVar9 = *(undefined8 *)(param_2 + 0x2b8);
    uVar10 = NEON_rev64(*(undefined8 *)(lVar2 + 0x3c),4);
    puVar1[2] = uVar10;
    puVar1[1] = uVar9;
    puVar1[4] = *(undefined8 *)(param_2 + 0x2a0);
    lVar2 = *(long *)(param_2 + 0x2a8);
    if (lVar2 == 0) {
      if (*(char *)(param_2 + 0x2dc) == '\x01') {
        *(undefined4 *)(puVar1 + 3) = *(undefined4 *)(param_2 + 0x2d8);
        *(undefined1 *)((long)puVar1 + 0x1c) = 1;
      }
    }
    else {
      *(int *)(param_1 + 0x85) = (int)param_1[0x6c];
      *(undefined4 *)((long)param_1 + 0x42c) = 0;
      FUN_1092979b8();
      param_1[1] = 0x100000000;
      uVar9 = NEON_rev64(*(undefined8 *)(lVar2 + 0x3c),4);
      param_1[2] = uVar9;
      param_1[4] = *(undefined8 *)(param_2 + 0x2b0);
    }
  }
  return;
}



/* Entry: 1092979b8; end: 109297a4f;  */

undefined8 * FUN_1092979b8(long param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 **ppuVar4;
  undefined8 *puVar5;
  long lVar6;
  undefined8 *extraout_x8;
  undefined8 *puVar7;
  undefined8 *puStack_70;
  undefined8 uStack_68;
  long lStack_60;
  undefined4 uStack_58;
  
  if (*(ulong *)(param_1 + 0x360) < 0x12) {
    puVar5 = (undefined8 *)(param_1 + *(ulong *)(param_1 + 0x360) * 0x30);
    puVar5[1] = 0;
    *puVar5 = 0;
    puVar5[3] = 0;
    puVar5[2] = 0;
    puVar5[2] = 0x100000004;
    puVar5[4] = 0;
    puVar5[5] = 0;
    lVar6 = *(long *)(param_1 + 0x360);
    *(long *)(param_1 + 0x360) = lVar6 + 1;
    return (undefined8 *)(param_1 + lVar6 * 0x30);
  }
  lVar3 = 0x10;
  ___cxa_allocate_exception();
  func_0x000104c4f71c();
  lVar6 = lVar3;
  ___cxa_throw(lVar3,PTR___ZTISt12length_error_110352238,PTR___ZNSt12length_errorD1Ev_110346170);
  ___cxa_free_exception(lVar3);
  __Unwind_Resume();
  puVar5 = extraout_x8 + 6;
  extraout_x8[7] = 0;
  *puVar5 = 0;
  extraout_x8[8] = 0;
  extraout_x8[3] = 0;
  extraout_x8[2] = 0;
  extraout_x8[5] = 0;
  extraout_x8[4] = 0;
  extraout_x8[1] = 0;
  *extraout_x8 = 0;
  FUN_109297b9c();
  FUN_1092966b0(&puStack_70,lVar6);
  ppuVar4 = (undefined8 **)extraout_x8[3];
  if (ppuVar4 != (undefined8 **)0x0) {
    extraout_x8[4] = ppuVar4;
    __ZdlPv();
  }
  extraout_x8[4] = uStack_68;
  extraout_x8[3] = puStack_70;
  extraout_x8[5] = lStack_60;
  puVar2 = *(undefined8 **)(lVar6 + 0x20);
  for (puVar7 = *(undefined8 **)(lVar6 + 0x18); puVar7 != puVar2; puVar7 = puVar7 + 4) {
    if (*(char *)((long)puVar7 + 0x17) < '\0') {
      ppuVar4 = &puStack_70;
      func_0x000107c3192c(&puStack_70,*puVar7,puVar7[1]);
    }
    else {
      uStack_68 = puVar7[1];
      puStack_70 = (undefined8 *)*puVar7;
      lStack_60 = puVar7[2];
    }
    uStack_58 = *(undefined4 *)(puVar7 + 3);
    puVar1 = (undefined8 *)extraout_x8[7];
    if (puVar1 < (undefined8 *)extraout_x8[8]) {
      puVar1[2] = lStack_60;
      puVar1[1] = uStack_68;
      *puVar1 = puStack_70;
      uStack_68 = 0;
      lStack_60 = 0;
      puStack_70 = (undefined8 *)0x0;
      *(undefined4 *)(puVar1 + 3) = uStack_58;
      extraout_x8[7] = puVar1 + 4;
    }
    else {
      ppuVar4 = (undefined8 **)puVar5;
      FUN_109242a08(puVar5,&puStack_70);
      extraout_x8[7] = ppuVar4;
      if (lStack_60 < 0) {
        ppuVar4 = (undefined8 **)puStack_70;
        __ZdlPv(puStack_70);
      }
    }
  }
  return ppuVar4;
}



/* Entry: 109297a50; end: 109297b9b;  */

void FUN_109297a50(undefined8 *param_1,long param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 uStack_50;
  undefined8 uStack_48;
  long lStack_40;
  undefined4 uStack_38;
  
  puVar3 = param_1 + 6;
  param_1[7] = 0;
  *puVar3 = 0;
  param_1[8] = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[1] = 0;
  *param_1 = 0;
  FUN_109297b9c(param_2,param_1);
  FUN_1092966b0(&uStack_50,param_2);
  if (param_1[3] != 0) {
    param_1[4] = param_1[3];
    __ZdlPv();
  }
  param_1[4] = uStack_48;
  param_1[3] = uStack_50;
  param_1[5] = lStack_40;
  puVar1 = *(undefined8 **)(param_2 + 0x20);
  for (puVar4 = *(undefined8 **)(param_2 + 0x18); puVar4 != puVar1; puVar4 = puVar4 + 4) {
    if (*(char *)((long)puVar4 + 0x17) < '\0') {
      func_0x000107c3192c(&uStack_50,*puVar4,puVar4[1]);
    }
    else {
      uStack_48 = puVar4[1];
      uStack_50 = *puVar4;
      lStack_40 = puVar4[2];
    }
    uStack_38 = *(undefined4 *)(puVar4 + 3);
    puVar2 = (undefined8 *)param_1[7];
    if (puVar2 < (undefined8 *)param_1[8]) {
      puVar2[2] = lStack_40;
      puVar2[1] = uStack_48;
      *puVar2 = uStack_50;
      uStack_48 = 0;
      lStack_40 = 0;
      uStack_50 = 0;
      *(undefined4 *)(puVar2 + 3) = uStack_38;
      param_1[7] = puVar2 + 4;
    }
    else {
      puVar2 = puVar3;
      FUN_109242a08(puVar3,&uStack_50);
      param_1[7] = puVar2;
      if (lStack_40 < 0) {
        __ZdlPv(uStack_50);
      }
    }
  }
  return;
}



/* Entry: 109297b9c; end: 109297faf;  */

void FUN_109297b9c(undefined8 *param_1,long param_2)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  undefined4 *puVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined4 uVar7;
  undefined8 uStack_90;
  undefined8 uStack_88;
  long lStack_80;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  
  puVar3 = (undefined4 *)param_1[1];
  for (puVar1 = (undefined4 *)*param_1; puVar1 != puVar3; puVar1 = puVar1 + 0x20) {
    uVar7 = *puVar1;
    puVar6 = *(undefined8 **)(puVar1 + 2);
    puVar4 = *(undefined8 **)(puVar1 + 4);
    if (puVar6 != puVar4) {
      do {
        if (*(char *)((long)puVar6 + 0x17) < '\0') {
          func_0x000107c3192c(&uStack_90,*puVar6,puVar6[1]);
        }
        else {
          uStack_88 = puVar6[1];
          uStack_90 = *puVar6;
          lStack_80 = puVar6[2];
        }
        uStack_78 = 4;
        uStack_70 = *(undefined4 *)(puVar6 + 3);
        puVar2 = *(undefined8 **)(param_2 + 8);
        uStack_74 = uVar7;
        if (puVar2 < *(undefined8 **)(param_2 + 0x10)) {
          puVar2[2] = lStack_80;
          puVar2[1] = uStack_88;
          *puVar2 = uStack_90;
          uStack_88 = 0;
          lStack_80 = 0;
          uStack_90 = 0;
          puVar2[3] = CONCAT44(uVar7,4);
          *(undefined4 *)(puVar2 + 4) = uStack_70;
          *(undefined8 **)(param_2 + 8) = puVar2 + 5;
        }
        else {
          lVar5 = param_2;
          FUN_1092371a0(param_2,&uStack_90);
          *(long *)(param_2 + 8) = lVar5;
          if (lStack_80 < 0) {
            __ZdlPv(uStack_90);
          }
        }
        puVar6 = puVar6 + 8;
      } while (puVar6 != puVar4);
      uVar7 = *puVar1;
    }
    puVar6 = *(undefined8 **)(puVar1 + 8);
    puVar4 = *(undefined8 **)(puVar1 + 10);
    if (puVar6 != puVar4) {
      do {
        if (*(char *)((long)puVar6 + 0x17) < '\0') {
          func_0x000107c3192c(&uStack_90,*puVar6,puVar6[1]);
        }
        else {
          uStack_88 = puVar6[1];
          uStack_90 = *puVar6;
          lStack_80 = puVar6[2];
        }
        uStack_78 = 5;
        uStack_70 = *(undefined4 *)(puVar6 + 3);
        puVar2 = *(undefined8 **)(param_2 + 8);
        uStack_74 = uVar7;
        if (puVar2 < *(undefined8 **)(param_2 + 0x10)) {
          puVar2[2] = lStack_80;
          puVar2[1] = uStack_88;
          *puVar2 = uStack_90;
          uStack_88 = 0;
          lStack_80 = 0;
          uStack_90 = 0;
          puVar2[3] = CONCAT44(uVar7,5);
          *(undefined4 *)(puVar2 + 4) = uStack_70;
          *(undefined8 **)(param_2 + 8) = puVar2 + 5;
        }
        else {
          lVar5 = param_2;
          FUN_1092371a0(param_2,&uStack_90);
          *(long *)(param_2 + 8) = lVar5;
          if (lStack_80 < 0) {
            __ZdlPv(uStack_90);
          }
        }
        puVar6 = puVar6 + 8;
      } while (puVar6 != puVar4);
      uVar7 = *puVar1;
    }
    puVar6 = *(undefined8 **)(puVar1 + 0x14);
    puVar4 = *(undefined8 **)(puVar1 + 0x16);
    if (puVar6 != puVar4) {
      do {
        if (*(char *)((long)puVar6 + 0x17) < '\0') {
          func_0x000107c3192c(&uStack_90,*puVar6,puVar6[1]);
        }
        else {
          uStack_88 = puVar6[1];
          uStack_90 = *puVar6;
          lStack_80 = puVar6[2];
        }
        uStack_78 = 3;
        uStack_70 = *(undefined4 *)(puVar6 + 3);
        puVar2 = *(undefined8 **)(param_2 + 8);
        uStack_74 = uVar7;
        if (puVar2 < *(undefined8 **)(param_2 + 0x10)) {
          puVar2[2] = lStack_80;
          puVar2[1] = uStack_88;
          *puVar2 = uStack_90;
          uStack_88 = 0;
          lStack_80 = 0;
          uStack_90 = 0;
          puVar2[3] = CONCAT44(uVar7,3);
          *(undefined4 *)(puVar2 + 4) = uStack_70;
          *(undefined8 **)(param_2 + 8) = puVar2 + 5;
        }
        else {
          lVar5 = param_2;
          FUN_1092371a0(param_2,&uStack_90);
          *(long *)(param_2 + 8) = lVar5;
          if (lStack_80 < 0) {
            __ZdlPv(uStack_90);
          }
        }
        puVar6 = puVar6 + 5;
      } while (puVar6 != puVar4);
      uVar7 = *puVar1;
    }
    puVar6 = *(undefined8 **)(puVar1 + 0xe);
    puVar4 = *(undefined8 **)(puVar1 + 0x10);
    if (puVar6 != puVar4) {
      do {
        if (*(char *)((long)puVar6 + 0x17) < '\0') {
          func_0x000107c3192c(&uStack_90,*puVar6,puVar6[1]);
        }
        else {
          uStack_88 = puVar6[1];
          uStack_90 = *puVar6;
          lStack_80 = puVar6[2];
        }
        uStack_78 = 2;
        uStack_70 = *(undefined4 *)(puVar6 + 3);
        puVar2 = *(undefined8 **)(param_2 + 8);
        uStack_74 = uVar7;
        if (puVar2 < *(undefined8 **)(param_2 + 0x10)) {
          puVar2[2] = lStack_80;
          puVar2[1] = uStack_88;
          *puVar2 = uStack_90;
          uStack_88 = 0;
          lStack_80 = 0;
          uStack_90 = 0;
          puVar2[3] = CONCAT44(uVar7,2);
          *(undefined4 *)(puVar2 + 4) = uStack_70;
          *(undefined8 **)(param_2 + 8) = puVar2 + 5;
        }
        else {
          lVar5 = param_2;
          FUN_1092371a0(param_2,&uStack_90);
          *(long *)(param_2 + 8) = lVar5;
          if (lStack_80 < 0) {
            __ZdlPv(uStack_90);
          }
        }
        puVar6 = puVar6 + 5;
      } while (puVar6 != puVar4);
      uVar7 = *puVar1;
    }
    puVar4 = *(undefined8 **)(puVar1 + 0x1c);
    for (puVar6 = *(undefined8 **)(puVar1 + 0x1a); puVar6 != puVar4; puVar6 = puVar6 + 5) {
      if (*(char *)((long)puVar6 + 0x17) < '\0') {
        func_0x000107c3192c(&uStack_90,*puVar6,puVar6[1]);
      }
      else {
        uStack_88 = puVar6[1];
        uStack_90 = *puVar6;
        lStack_80 = puVar6[2];
      }
      uStack_78 = 1;
      uStack_70 = *(undefined4 *)(puVar6 + 3);
      puVar2 = *(undefined8 **)(param_2 + 8);
      uStack_74 = uVar7;
      if (puVar2 < *(undefined8 **)(param_2 + 0x10)) {
        puVar2[2] = lStack_80;
        puVar2[1] = uStack_88;
        *puVar2 = uStack_90;
        uStack_88 = 0;
        lStack_80 = 0;
        uStack_90 = 0;
        puVar2[3] = CONCAT44(uVar7,1);
        *(undefined4 *)(puVar2 + 4) = uStack_70;
        *(undefined8 **)(param_2 + 8) = puVar2 + 5;
      }
      else {
        lVar5 = param_2;
        FUN_1092371a0(param_2,&uStack_90);
        *(long *)(param_2 + 8) = lVar5;
        if (lStack_80 < 0) {
          __ZdlPv(uStack_90);
        }
      }
    }
  }
  return;
}



/* Entry: 109297fb0; end: 10929802f;  */

undefined1  [16] FUN_109297fb0(long param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  long *plVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long *plVar5;
  long lVar6;
  undefined1 **ppuVar7;
  long *plVar8;
  long *plVar9;
  long *plVar10;
  ulong uVar11;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined4 uStack_b0;
  undefined1 **ppuStack_a8;
  undefined1 uStack_99;
  undefined1 *puStack_98;
  
  uVar11 = *(ulong *)(param_1 + 0x90);
  if (uVar11 < 0x12) {
    puVar1 = (undefined8 *)(param_1 + uVar11 * 8);
    *puVar1 = *param_2;
    *(ulong *)(param_1 + 0x90) = uVar11 + 1;
    auVar12._8_8_ = param_2;
    auVar12._0_8_ = puVar1;
    return auVar12;
  }
  uVar3 = 0x10;
  ___cxa_allocate_exception();
  func_0x000104c4f71c();
  uVar4 = uVar3;
  plVar10 = (long *)PTR___ZTISt12length_error_110352238;
  ___cxa_throw(uVar3,PTR___ZTISt12length_error_110352238,PTR___ZNSt12length_errorD1Ev_110346170);
  ___cxa_free_exception(uVar3);
  __Unwind_Resume(uVar4);
  plVar5 = (long *)&DAT_10f62a4d8;
  func_0x000104c4f6cc();
  if ((long *)0x1555555555555555 < plVar10) {
    func_0x000104c4f740();
    plVar8 = (long *)plVar5[0x16];
    plVar2 = plVar5;
    while (plVar9 = plVar8, plVar9 != plVar5 + 0x15) {
      if ((plVar9[3] == 0) || (*(long *)(plVar9[3] + 8) != 0)) {
        plVar8 = (long *)plVar9[1];
      }
      else {
        lVar6 = plVar9[2];
        uStack_d8 = *(undefined8 *)(lVar6 + 0x2c);
        uStack_e0 = *(undefined8 *)(lVar6 + 0x24);
        uStack_c8 = *(undefined8 *)(lVar6 + 0x3c);
        uStack_d0 = *(undefined8 *)(lVar6 + 0x34);
        uStack_b8 = *(undefined8 *)(lVar6 + 0x4c);
        uStack_c0 = *(undefined8 *)(lVar6 + 0x44);
        uStack_b0 = *(undefined4 *)(lVar6 + 0x54);
        ppuVar7 = &puStack_98;
        FUN_109298294(ppuVar7,&uStack_e0);
        plVar8 = plVar5 + 0x10;
        ppuStack_a8 = ppuVar7;
        puStack_98 = (undefined1 *)&uStack_e0;
        FUN_109298454(plVar8,&uStack_e0,&UNK_10dd5b8f9,&puStack_98,&uStack_99);
        plVar10 = plVar9 + 2;
        func_0x000109298a54(plVar8 + 10,plVar10);
        lVar6 = *plVar9;
        plVar8 = (long *)plVar9[1];
        *(long **)(lVar6 + 8) = plVar8;
        *plVar8 = lVar6;
        plVar5[0x17] = plVar5[0x17] + -1;
        FUN_109232dd4(plVar9 + 2);
        __ZdlPv(plVar9);
        plVar2 = plVar9;
      }
    }
    auVar14._8_8_ = plVar10;
    auVar14._0_8_ = plVar2;
    return auVar14;
  }
  lVar6 = (long)plVar10 * 0xc;
  __Znwm(lVar6);
  auVar13._8_8_ = plVar10;
  auVar13._0_8_ = lVar6;
  return auVar13;
}



/* Entry: 109298030; end: 109298043;  */

void FUN_109298030(undefined8 param_1,ulong param_2)

{
  long *plVar1;
  long *plVar2;
  undefined *puVar3;
  undefined1 **ppuVar4;
  undefined *puVar5;
  long lVar6;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined4 uStack_90;
  undefined1 **ppuStack_88;
  undefined1 uStack_79;
  undefined1 *puStack_78;
  
  puVar3 = &DAT_10f62a4d8;
  func_0x000104c4f6cc();
  if (0x1555555555555555 < param_2) {
    func_0x000104c4f740();
    plVar2 = *(long **)(puVar3 + 0xb0);
    while (plVar2 != (long *)(puVar3 + 0xa8)) {
      if ((plVar2[3] == 0) || (*(long *)(plVar2[3] + 8) != 0)) {
        plVar2 = (long *)plVar2[1];
      }
      else {
        lVar6 = plVar2[2];
        uStack_b8 = *(undefined8 *)(lVar6 + 0x2c);
        uStack_c0 = *(undefined8 *)(lVar6 + 0x24);
        uStack_a8 = *(undefined8 *)(lVar6 + 0x3c);
        uStack_b0 = *(undefined8 *)(lVar6 + 0x34);
        uStack_98 = *(undefined8 *)(lVar6 + 0x4c);
        uStack_a0 = *(undefined8 *)(lVar6 + 0x44);
        uStack_90 = *(undefined4 *)(lVar6 + 0x54);
        ppuVar4 = &puStack_78;
        FUN_109298294(ppuVar4,&uStack_c0);
        puVar5 = puVar3 + 0x80;
        ppuStack_88 = ppuVar4;
        puStack_78 = (undefined1 *)&uStack_c0;
        FUN_109298454(puVar5,&uStack_c0,&UNK_10dd5b8f9,&puStack_78,&uStack_79);
        func_0x000109298a54(puVar5 + 0x50,plVar2 + 2);
        lVar6 = *plVar2;
        plVar1 = (long *)plVar2[1];
        *(long **)(lVar6 + 8) = plVar1;
        *plVar1 = lVar6;
        *(long *)(puVar3 + 0xb8) = *(long *)(puVar3 + 0xb8) + -1;
        FUN_109232dd4(plVar2 + 2);
        __ZdlPv(plVar2);
        plVar2 = plVar1;
      }
    }
    return;
  }
  __Znwm(param_2 * 0xc);
  return;
}



/* Entry: 109298044; end: 109298087;  */

void FUN_109298044(long param_1,ulong param_2)

{
  long *plVar1;
  long *plVar2;
  undefined1 **ppuVar3;
  long lVar4;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined4 uStack_80;
  undefined1 **ppuStack_78;
  undefined1 uStack_69;
  undefined1 *puStack_68;
  
  if (0x1555555555555555 < param_2) {
    func_0x000104c4f740();
    plVar2 = *(long **)(param_1 + 0xb0);
    while (plVar2 != (long *)(param_1 + 0xa8)) {
      if ((plVar2[3] == 0) || (*(long *)(plVar2[3] + 8) != 0)) {
        plVar2 = (long *)plVar2[1];
      }
      else {
        lVar4 = plVar2[2];
        uStack_a8 = *(undefined8 *)(lVar4 + 0x2c);
        uStack_b0 = *(undefined8 *)(lVar4 + 0x24);
        uStack_98 = *(undefined8 *)(lVar4 + 0x3c);
        uStack_a0 = *(undefined8 *)(lVar4 + 0x34);
        uStack_88 = *(undefined8 *)(lVar4 + 0x4c);
        uStack_90 = *(undefined8 *)(lVar4 + 0x44);
        uStack_80 = *(undefined4 *)(lVar4 + 0x54);
        ppuVar3 = &puStack_68;
        FUN_109298294(ppuVar3,&uStack_b0);
        lVar4 = param_1 + 0x80;
        ppuStack_78 = ppuVar3;
        puStack_68 = (undefined1 *)&uStack_b0;
        FUN_109298454(lVar4,&uStack_b0,&UNK_10dd5b8f9,&puStack_68,&uStack_69);
        func_0x000109298a54(lVar4 + 0x50,plVar2 + 2);
        lVar4 = *plVar2;
        plVar1 = (long *)plVar2[1];
        *(long **)(lVar4 + 8) = plVar1;
        *plVar1 = lVar4;
        *(long *)(param_1 + 0xb8) = *(long *)(param_1 + 0xb8) + -1;
        FUN_109232dd4(plVar2 + 2);
        __ZdlPv(plVar2);
        plVar2 = plVar1;
      }
    }
    return;
  }
  __Znwm(param_2 * 0xc);
  return;
}



/* Entry: 109298088; end: 10929817b;  */

void FUN_109298088(long param_1)

{
  long *plVar1;
  long *plVar2;
  undefined1 **ppuVar3;
  long lVar4;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined4 uStack_60;
  undefined1 **ppuStack_58;
  undefined1 uStack_49;
  undefined1 *puStack_48;
  
  plVar2 = *(long **)(param_1 + 0xb0);
  while (plVar2 != (long *)(param_1 + 0xa8)) {
    if ((plVar2[3] == 0) || (*(long *)(plVar2[3] + 8) != 0)) {
      plVar2 = (long *)plVar2[1];
    }
    else {
      lVar4 = plVar2[2];
      uStack_88 = *(undefined8 *)(lVar4 + 0x2c);
      uStack_90 = *(undefined8 *)(lVar4 + 0x24);
      uStack_78 = *(undefined8 *)(lVar4 + 0x3c);
      uStack_80 = *(undefined8 *)(lVar4 + 0x34);
      uStack_68 = *(undefined8 *)(lVar4 + 0x4c);
      uStack_70 = *(undefined8 *)(lVar4 + 0x44);
      uStack_60 = *(undefined4 *)(lVar4 + 0x54);
      ppuVar3 = &puStack_48;
      FUN_109298294(ppuVar3,&uStack_90);
      lVar4 = param_1 + 0x80;
      ppuStack_58 = ppuVar3;
      puStack_48 = (undefined1 *)&uStack_90;
      FUN_109298454(lVar4,&uStack_90,&UNK_10dd5b8f9,&puStack_48,&uStack_49);
      func_0x000109298a54(lVar4 + 0x50,plVar2 + 2);
      lVar4 = *plVar2;
      plVar1 = (long *)plVar2[1];
      *(long **)(lVar4 + 8) = plVar1;
      *plVar1 = lVar4;
      *(long *)(param_1 + 0xb8) = *(long *)(param_1 + 0xb8) + -1;
      FUN_109232dd4(plVar2 + 2);
      __ZdlPv(plVar2);
      plVar2 = plVar1;
    }
  }
  return;
}



/* Entry: 10929817c; end: 1092981af;  */

long FUN_10929817c(long param_1)

{
  FUN_109232dd4(param_1 + 0x10);
  if (*(long *)(param_1 + 8) != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  return param_1;
}



/* Entry: 1092981b0; end: 109298293;  */

long FUN_1092981b0(long *param_1,undefined8 param_2)

{
  undefined1 *puVar1;
  ulong uVar2;
  long *plVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  undefined1 uStack_41;
  
  puVar1 = &uStack_41;
  FUN_109298294();
  puVar5 = (undefined1 *)param_1[1];
  if (puVar5 != (undefined1 *)0x0) {
    puVar6 = puVar5 + -1;
    if (((ulong)puVar5 & (ulong)puVar6) == 0) {
      puVar7 = (undefined1 *)((ulong)puVar6 & (ulong)puVar1);
    }
    else {
      puVar7 = puVar1;
      if (puVar5 <= puVar1) {
        uVar2 = 0;
        if (puVar5 != (undefined1 *)0x0) {
          uVar2 = (ulong)puVar1 / (ulong)puVar5;
        }
        puVar7 = puVar1 + -(uVar2 * (long)puVar5);
      }
    }
    plVar3 = *(long **)(*param_1 + (long)puVar7 * 8);
    if (plVar3 != (long *)0x0) {
      plVar3 = (long *)*plVar3;
      do {
        if (plVar3 == (long *)0x0) {
          return 0;
        }
        puVar4 = (undefined1 *)plVar3[1];
        if (puVar4 == puVar1) {
          uVar2 = (ulong)(plVar3 + 2);
          FUN_109298434(uVar2,param_2);
          if ((uVar2 & 1) != 0) {
            return (long)plVar3;
          }
        }
        else {
          if (((ulong)puVar5 & (ulong)puVar6) == 0) {
            puVar4 = (undefined1 *)((ulong)puVar4 & (ulong)puVar6);
          }
          else if (puVar5 <= puVar4) {
            uVar2 = 0;
            if (puVar5 != (undefined1 *)0x0) {
              uVar2 = (ulong)puVar4 / (ulong)puVar5;
            }
            puVar4 = puVar4 + -(uVar2 * (long)puVar5);
          }
          if (puVar4 != puVar7) {
            return 0;
          }
        }
        plVar3 = (long *)*plVar3;
      } while( true );
    }
  }
  return 0;
}



/* Entry: 109298294; end: 10929831b;  */

void FUN_109298294(undefined8 param_1,long param_2)

{
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  uStack_14 = *(undefined4 *)(param_2 + 0x20);
  uStack_18 = *(undefined4 *)(param_2 + 0x24);
  uStack_1c = *(undefined4 *)(param_2 + 0x28);
  uStack_20 = *(undefined4 *)(param_2 + 0x2c);
  uStack_24 = *(undefined4 *)(param_2 + 0x10);
  uStack_28 = *(undefined4 *)(param_2 + 0x14);
  uStack_2c = *(undefined4 *)(param_2 + 0x18);
  uStack_30 = *(undefined4 *)(param_2 + 0x1c);
  uStack_34 = *(undefined4 *)(param_2 + 0x30);
  FUN_10929831c(param_2,param_2 + 4,param_2 + 8,param_2 + 0xc,&uStack_14,&uStack_18,&uStack_1c,
                &uStack_20,&uStack_24,&uStack_28,&uStack_2c,&uStack_30,&uStack_34);
  return;
}



/* Entry: 10929831c; end: 109298433;  */

ulong FUN_10929831c(uint *param_1,uint *param_2,uint *param_3,uint *param_4,uint *param_5,
                   uint *param_6,uint *param_7,uint *param_8,uint *param_9,uint *param_10,
                   uint *param_11,uint *param_12,uint *param_13)

{
  ulong uVar1;
  
  uVar1 = (ulong)*param_1 + 0x9e3779b97f4a7c15;
  uVar1 = (ulong)*param_2 + uVar1 * 0x40 + (uVar1 >> 2) + 0x9e3779b97f4a7c15 ^ uVar1;
  uVar1 = (ulong)*param_3 + uVar1 * 0x40 + (uVar1 >> 2) + 0x9e3779b97f4a7c15 ^ uVar1;
  uVar1 = (ulong)*param_4 + uVar1 * 0x40 + (uVar1 >> 2) + 0x9e3779b97f4a7c15 ^ uVar1;
  uVar1 = (ulong)*param_5 + uVar1 * 0x40 + (uVar1 >> 2) + 0x9e3779b97f4a7c15 ^ uVar1;
  uVar1 = (ulong)*param_6 + uVar1 * 0x40 + (uVar1 >> 2) + 0x9e3779b97f4a7c15 ^ uVar1;
  uVar1 = (ulong)*param_7 + uVar1 * 0x40 + (uVar1 >> 2) + 0x9e3779b97f4a7c15 ^ uVar1;
  uVar1 = (ulong)*param_8 + uVar1 * 0x40 + (uVar1 >> 2) + 0x9e3779b97f4a7c15 ^ uVar1;
  uVar1 = (ulong)*param_9 + uVar1 * 0x40 + (uVar1 >> 2) + 0x9e3779b97f4a7c15 ^ uVar1;
  uVar1 = (ulong)*param_10 + uVar1 * 0x40 + (uVar1 >> 2) + 0x9e3779b97f4a7c15 ^ uVar1;
  uVar1 = (ulong)*param_11 + uVar1 * 0x40 + (uVar1 >> 2) + 0x9e3779b97f4a7c15 ^ uVar1;
  uVar1 = (ulong)*param_12 + uVar1 * 0x40 + (uVar1 >> 2) + 0x9e3779b97f4a7c15 ^ uVar1;
  return (ulong)*param_13 + uVar1 * 0x40 + (uVar1 >> 2) + 0x9e3779b97f4a7c15 ^ uVar1;
}



/* Entry: 109298434; end: 109298453;  */

bool FUN_109298434(undefined8 param_1,undefined8 param_2)

{
  _memcmp(param_1,param_2,0x34);
  return (int)param_1 == 0;
}



/* Entry: 109298454; end: 1092986a3;  */

undefined1  [16] FUN_109298454(long *param_1,long param_2,undefined8 param_3,undefined8 *param_4)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  ulong uVar4;
  long *plVar5;
  long lVar6;
  long *plVar7;
  ulong uVar8;
  ulong uVar9;
  ulong unaff_x25;
  ulong uVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  undefined1 auVar17 [16];
  
  uVar9 = *(ulong *)(param_2 + 0x38);
  uVar8 = param_1[1];
  if (uVar8 != 0) {
    uVar10 = uVar8 - 1;
    if ((uVar8 & uVar10) == 0) {
      unaff_x25 = uVar10 & uVar9;
    }
    else {
      unaff_x25 = uVar9;
      if (uVar8 <= uVar9) {
        uVar4 = 0;
        if (uVar8 != 0) {
          uVar4 = uVar9 / uVar8;
        }
        unaff_x25 = uVar9 - uVar4 * uVar8;
      }
    }
    puVar3 = *(undefined8 **)(*param_1 + unaff_x25 * 8);
    if (puVar3 != (undefined8 *)0x0) {
      for (plVar7 = (long *)*puVar3; plVar7 != (long *)0x0; plVar7 = (long *)*plVar7) {
        uVar4 = plVar7[1];
        if (uVar4 == uVar9) {
          if (plVar7[9] == *(long *)(param_2 + 0x38)) {
            plVar5 = plVar7 + 2;
            FUN_109298434(plVar5,param_2);
            if (((ulong)plVar5 & 1) != 0) {
              uVar2 = 0;
              goto LAB_109298668;
            }
          }
        }
        else {
          if ((uVar8 & uVar10) == 0) {
            uVar4 = uVar4 & uVar10;
          }
          else if (uVar8 <= uVar4) {
            uVar1 = 0;
            if (uVar8 != 0) {
              uVar1 = uVar4 / uVar8;
            }
            uVar4 = uVar4 - uVar1 * uVar8;
          }
          if (uVar4 != unaff_x25) break;
        }
      }
    }
  }
  plVar7 = (long *)0x80;
  __Znwm();
  *plVar7 = 0;
  plVar7[1] = uVar9;
  plVar5 = (long *)*param_4;
  lVar11 = plVar5[1];
  lVar6 = *plVar5;
  lVar13 = plVar5[3];
  lVar12 = plVar5[2];
  lVar14 = plVar5[4];
  lVar16 = plVar5[7];
  lVar15 = plVar5[6];
  plVar7[7] = plVar5[5];
  plVar7[6] = lVar14;
  plVar7[9] = lVar16;
  plVar7[8] = lVar15;
  plVar7[3] = lVar11;
  plVar7[2] = lVar6;
  plVar7[5] = lVar13;
  plVar7[4] = lVar12;
  plVar7[0xd] = 0;
  plVar7[0xc] = 0;
  plVar7[0xf] = 0;
  plVar7[0xe] = 0;
  plVar7[0xb] = 0;
  plVar7[10] = 0;
  if ((uVar8 == 0) || (*(float *)(param_1 + 4) * (float)uVar8 < (float)(param_1[3] + 1))) {
    uVar10 = 1;
    if (2 < uVar8) {
      uVar10 = (ulong)((uVar8 & uVar8 - 1) != 0);
    }
    uVar10 = uVar10 | uVar8 << 1;
    uVar8 = (ulong)((float)(param_1[3] + 1) / *(float *)(param_1 + 4));
    if (uVar10 <= uVar8) {
      uVar10 = uVar8;
    }
    FUN_1092986a4(param_1,uVar10);
    uVar8 = param_1[1];
    if ((uVar8 & uVar8 - 1) == 0) {
      unaff_x25 = uVar8 - 1 & uVar9;
    }
    else {
      unaff_x25 = uVar9;
      if (uVar8 <= uVar9) {
        uVar10 = 0;
        if (uVar8 != 0) {
          uVar10 = uVar9 / uVar8;
        }
        unaff_x25 = uVar9 - uVar10 * uVar8;
      }
    }
  }
  lVar6 = *param_1;
  plVar5 = *(long **)(lVar6 + unaff_x25 * 8);
  if (plVar5 == (long *)0x0) {
    plVar5 = param_1 + 2;
    *plVar7 = *plVar5;
    *plVar5 = (long)plVar7;
    *(long **)(lVar6 + unaff_x25 * 8) = plVar5;
    if (*plVar7 == 0) goto LAB_109298658;
    uVar9 = *(ulong *)(*plVar7 + 8);
    if ((uVar8 & uVar8 - 1) == 0) {
      uVar9 = uVar9 & uVar8 - 1;
    }
    else if (uVar8 <= uVar9) {
      uVar10 = 0;
      if (uVar8 != 0) {
        uVar10 = uVar9 / uVar8;
      }
      uVar9 = uVar9 - uVar10 * uVar8;
    }
    plVar5 = (long *)(*param_1 + uVar9 * 8);
  }
  else {
    *plVar7 = *plVar5;
  }
  *plVar5 = (long)plVar7;
LAB_109298658:
  param_1[3] = param_1[3] + 1;
  uVar2 = 1;
LAB_109298668:
  auVar17._8_8_ = uVar2;
  auVar17._0_8_ = plVar7;
  return auVar17;
}



/* Entry: 1092986a4; end: 109298773;  */

void FUN_1092986a4(long *param_1,ulong param_2)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  ulong uVar8;
  ulong uVar9;
  
  if (param_2 - 1 == 0) {
    param_2 = 2;
  }
  else if ((param_2 & param_2 - 1) != 0) {
    __ZNSt3__112__next_primeEm();
  }
  uVar9 = param_1[1];
  if (uVar9 < param_2) {
LAB_1092986ec:
    if (param_2 == 0) {
      lVar2 = *param_1;
      *param_1 = 0;
      if (lVar2 != 0) {
        __ZdlPv();
      }
      param_1[1] = 0;
    }
    else {
      if (param_2 >> 0x3d != 0) {
        func_0x000104c4f740();
        lVar2 = *param_1;
        *param_1 = 0;
        if (lVar2 != 0) {
          if ((char)param_1[2] == '\x01') {
            FUN_1092988f8(lVar2 + 0x50);
          }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)PTR___ZdlPv_110352258)(lVar2);
          return;
        }
        return;
      }
      lVar2 = param_2 << 3;
      __Znwm();
      lVar3 = *param_1;
      *param_1 = lVar2;
      if (lVar3 != 0) {
        __ZdlPv();
      }
      uVar9 = 0;
      param_1[1] = param_2;
      do {
        *(undefined8 *)(*param_1 + uVar9 * 8) = 0;
        uVar9 = uVar9 + 1;
      } while (param_2 != uVar9);
      plVar5 = (long *)param_1[2];
      if (plVar5 != (long *)0x0) {
        uVar9 = plVar5[1];
        uVar4 = param_2 - 1;
        if ((param_2 & uVar4) == 0) {
          uVar9 = uVar9 & uVar4;
        }
        else if (param_2 <= uVar9) {
          uVar8 = 0;
          if (param_2 != 0) {
            uVar8 = uVar9 / param_2;
          }
          uVar9 = uVar9 - uVar8 * param_2;
        }
        *(long **)(*param_1 + uVar9 * 8) = param_1 + 2;
        plVar6 = (long *)*plVar5;
        while (plVar6 != (long *)0x0) {
          uVar8 = plVar6[1];
          if ((param_2 & uVar4) == 0) {
            uVar8 = uVar8 & uVar4;
          }
          else if (param_2 <= uVar8) {
            uVar1 = 0;
            if (param_2 != 0) {
              uVar1 = uVar8 / param_2;
            }
            uVar8 = uVar8 - uVar1 * param_2;
          }
          plVar7 = plVar6;
          if (uVar8 != uVar9) {
            lVar2 = *param_1;
            if (*(long *)(lVar2 + uVar8 * 8) == 0) {
              *(long **)(lVar2 + uVar8 * 8) = plVar5;
              uVar9 = uVar8;
            }
            else {
              *plVar5 = *plVar6;
              *plVar6 = **(undefined8 **)(lVar2 + uVar8 * 8);
              **(long **)(lVar2 + uVar8 * 8) = (long)plVar6;
              plVar7 = plVar5;
            }
          }
          plVar5 = plVar7;
          plVar6 = (long *)*plVar7;
        }
      }
    }
    return;
  }
  if (param_2 < uVar9) {
    uVar4 = (ulong)((float)(ulong)param_1[3] / *(float *)(param_1 + 4));
    if ((uVar9 < 3) || ((uVar9 & uVar9 - 1) != 0)) {
      __ZNSt3__112__next_primeEm();
    }
    else if (1 < uVar4) {
      uVar4 = 1L << (-LZCOUNT(uVar4 - 1) & 0x3fU);
    }
    if (param_2 <= uVar4) {
      param_2 = uVar4;
    }
    if (param_2 < uVar9) goto LAB_1092986ec;
  }
  return;
}



/* Entry: 109298774; end: 1092988f7;  */

void FUN_109298774(long *param_1,ulong param_2)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  ulong uVar9;
  
  if (param_2 == 0) {
    lVar2 = *param_1;
    *param_1 = 0;
    if (lVar2 != 0) {
      __ZdlPv();
    }
    param_1[1] = 0;
  }
  else {
    if (param_2 >> 0x3d != 0) {
      func_0x000104c4f740();
      lVar2 = *param_1;
      *param_1 = 0;
      if (lVar2 != 0) {
        if ((char)param_1[2] == '\x01') {
          FUN_1092988f8(lVar2 + 0x50);
        }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR___ZdlPv_110352258)(lVar2);
        return;
      }
      return;
    }
    lVar2 = param_2 << 3;
    __Znwm();
    lVar3 = *param_1;
    *param_1 = lVar2;
    if (lVar3 != 0) {
      __ZdlPv();
    }
    uVar4 = 0;
    param_1[1] = param_2;
    do {
      *(undefined8 *)(*param_1 + uVar4 * 8) = 0;
      uVar4 = uVar4 + 1;
    } while (param_2 != uVar4);
    plVar6 = (long *)param_1[2];
    if (plVar6 != (long *)0x0) {
      uVar4 = plVar6[1];
      uVar5 = param_2 - 1;
      if ((param_2 & uVar5) == 0) {
        uVar4 = uVar4 & uVar5;
      }
      else if (param_2 <= uVar4) {
        uVar9 = 0;
        if (param_2 != 0) {
          uVar9 = uVar4 / param_2;
        }
        uVar4 = uVar4 - uVar9 * param_2;
      }
      *(long **)(*param_1 + uVar4 * 8) = param_1 + 2;
      plVar7 = (long *)*plVar6;
      while (plVar7 != (long *)0x0) {
        uVar9 = plVar7[1];
        if ((param_2 & uVar5) == 0) {
          uVar9 = uVar9 & uVar5;
        }
        else if (param_2 <= uVar9) {
          uVar1 = 0;
          if (param_2 != 0) {
            uVar1 = uVar9 / param_2;
          }
          uVar9 = uVar9 - uVar1 * param_2;
        }
        plVar8 = plVar7;
        if (uVar9 != uVar4) {
          lVar2 = *param_1;
          if (*(long *)(lVar2 + uVar9 * 8) == 0) {
            *(long **)(lVar2 + uVar9 * 8) = plVar6;
            uVar4 = uVar9;
          }
          else {
            *plVar6 = *plVar7;
            *plVar7 = **(undefined8 **)(lVar2 + uVar9 * 8);
            **(long **)(lVar2 + uVar9 * 8) = (long)plVar7;
            plVar8 = plVar6;
          }
        }
        plVar6 = plVar8;
        plVar7 = (long *)*plVar8;
      }
    }
  }
  return;
}



/* Entry: 1092988f8; end: 109298a07;  */

long * FUN_1092988f8(long *param_1)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  long *plVar6;
  
  puVar4 = (undefined8 *)param_1[1];
  puVar5 = puVar4;
  if ((undefined8 *)param_1[2] != puVar4) {
    uVar3 = param_1[4];
    plVar6 = puVar4 + (uVar3 >> 8);
    lVar2 = *plVar6 + (uVar3 & 0xff) * 0x10;
    lVar1 = puVar4[param_1[5] + uVar3 >> 8] + (param_1[5] + uVar3 & 0xff) * 0x10;
    puVar5 = (undefined8 *)param_1[2];
    if (lVar2 != lVar1) {
      do {
        FUN_109232dd4();
        lVar2 = lVar2 + 0x10;
        if (lVar2 - *plVar6 == 0x1000) {
          plVar6 = plVar6 + 1;
          lVar2 = *plVar6;
        }
      } while (lVar2 != lVar1);
      puVar4 = (undefined8 *)param_1[1];
      puVar5 = (undefined8 *)param_1[2];
    }
  }
  param_1[5] = 0;
  lVar2 = (long)puVar5 - (long)puVar4;
  while (uVar3 = lVar2 >> 3, 2 < uVar3) {
    __ZdlPv(*puVar4);
    puVar5 = (undefined8 *)param_1[2];
    puVar4 = (undefined8 *)(param_1[1] + 8);
    param_1[1] = (long)puVar4;
    lVar2 = (long)puVar5 - (long)puVar4;
  }
  if (uVar3 == 1) {
    lVar2 = 0x80;
  }
  else {
    if (uVar3 != 2) goto LAB_1092989e8;
    lVar2 = 0x100;
  }
  param_1[4] = lVar2;
LAB_1092989e8:
  for (; puVar4 != puVar5; puVar4 = puVar4 + 1) {
    __ZdlPv(*puVar4);
  }
  lVar2 = param_1[2];
  if (lVar2 != param_1[1]) {
    param_1[2] = lVar2 + ((param_1[1] - lVar2) + 7U & 0xfffffffffffffff8);
  }
  if (*param_1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 109298a08; end: 109298aeb;  */

long * FUN_109298a08(long *param_1)

{
  long lVar1;
  
  lVar1 = param_1[2];
  if (lVar1 != param_1[1]) {
    param_1[2] = lVar1 + ((param_1[1] - lVar1) + 7U & 0xfffffffffffffff8);
  }
  if (*param_1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 109298aec; end: 109298c97;  */

void FUN_109298aec(long *param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined8 uStack_68;
  long lStack_60;
  long lStack_58;
  long lStack_50;
  long lStack_48;
  long *plStack_40;
  
  if ((ulong)param_1[4] < 0x100) {
    lVar7 = param_1[3];
    uVar6 = param_1[2] - param_1[1];
    uVar5 = lVar7 - *param_1;
    if (uVar5 <= uVar6) {
      lVar1 = (long)uVar5 >> 2;
      if (lVar7 == *param_1) {
        lVar1 = 1;
      }
      plStack_40 = param_1;
      FUN_1092991a0();
      lStack_58 = lVar1 + uVar6;
      lStack_48 = lVar1 + param_2 * 8;
      uVar2 = 0x1000;
      lStack_60 = lVar1;
      lStack_50 = lStack_58;
      __Znwm();
      uStack_68 = uVar2;
      FUN_109298f9c(&lStack_60,&uStack_68);
      lVar1 = param_1[2];
      lVar7 = -7 - lVar1;
      while (lVar4 = param_1[1], lVar1 != lVar4) {
        lVar1 = lVar1 + -8;
        lVar7 = lVar7 + 8;
        FUN_10929909c(&lStack_60,lVar1);
      }
      lVar3 = *param_1;
      lVar9 = param_1[3];
      lVar8 = param_1[2];
      param_1[1] = lStack_58;
      *param_1 = lStack_60;
      param_1[3] = lStack_48;
      param_1[2] = lStack_50;
      lStack_50 = lVar8;
      if (lVar1 != lVar8) {
        lStack_50 = lVar8 + (-(lVar8 + lVar7) & 0xfffffffffffffff8U);
      }
      if (lVar3 == 0) {
        return;
      }
      lStack_60 = lVar3;
      lStack_58 = lVar4;
      lStack_48 = lVar9;
      __ZdlPv();
      return;
    }
    lVar1 = 0x1000;
    if (lVar7 != param_1[2]) {
      __Znwm();
      lStack_60 = lVar1;
      func_0x000109298d98(param_1,&lStack_60);
      return;
    }
    __Znwm();
    lStack_60 = lVar1;
    FUN_109298e98(param_1,&lStack_60);
  }
  else {
    param_1[4] = param_1[4] - 0x100;
  }
  lStack_60 = *(long *)param_1[1];
  param_1[1] = (long)((long *)param_1[1] + 1);
  FUN_109298c98(param_1,&lStack_60);
  return;
}



/* Entry: 109298c98; end: 109298e97;  */

void FUN_109298c98(ulong *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  long lVar8;
  undefined8 *puVar9;
  long lVar10;
  
  puVar7 = (undefined8 *)param_1[2];
  if (puVar7 == (undefined8 *)param_1[3]) {
    uVar3 = *param_1;
    uVar4 = param_1[1];
    if (uVar4 < uVar3 || uVar4 - uVar3 == 0) {
      uVar5 = (long)((long)puVar7 - uVar3) >> 2;
      if ((long)puVar7 - uVar3 == 0) {
        uVar5 = 1;
      }
      uVar3 = uVar5;
      FUN_1092991a0();
      puVar1 = (undefined8 *)(uVar3 + (uVar5 >> 2) * 8);
      lVar8 = param_1[2] - (long)param_1[1];
      puVar7 = puVar1;
      if (lVar8 != 0) {
        puVar7 = (undefined8 *)((long)puVar1 + lVar8);
        puVar6 = (undefined8 *)param_1[1];
        puVar9 = puVar1;
        do {
          *puVar9 = *puVar6;
          lVar8 = lVar8 + -8;
          puVar6 = puVar6 + 1;
          puVar9 = puVar9 + 1;
        } while (lVar8 != 0);
      }
      uVar5 = *param_1;
      *param_1 = uVar3;
      param_1[1] = (ulong)puVar1;
      param_1[2] = (ulong)puVar7;
      param_1[3] = uVar3 + uVar4 * 8;
      if (uVar5 != 0) {
        __ZdlPv(uVar5);
        puVar7 = (undefined8 *)param_1[2];
      }
    }
    else {
      lVar8 = (((long)(uVar4 - uVar3) >> 3) + 1) / 2;
      lVar10 = uVar4 + lVar8 * -8;
      lVar2 = (long)puVar7 - uVar4;
      if (lVar2 != 0) {
        _memmove(lVar10,uVar4,lVar2);
        uVar4 = param_1[1];
      }
      puVar7 = (undefined8 *)(lVar10 + lVar2);
      param_1[1] = uVar4 + lVar8 * -8;
      param_1[2] = (ulong)puVar7;
    }
  }
  *puVar7 = *param_2;
  param_1[2] = param_1[2] + 8;
  return;
}



/* Entry: 109298e98; end: 109298f9b;  */

void FUN_109298e98(long *param_1,undefined8 *param_2)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  long lVar7;
  undefined8 *puVar8;
  long lVar9;
  
  puVar8 = (undefined8 *)param_1[1];
  if (puVar8 == (undefined8 *)*param_1) {
    uVar2 = param_1[2];
    uVar1 = param_1[3];
    if (uVar2 < uVar1) {
      lVar9 = (((long)(uVar1 - uVar2) >> 3) + 1) / 2;
      puVar6 = puVar8 + lVar9;
      if (uVar2 - (long)puVar8 != 0) {
        _memmove(puVar6,puVar8,uVar2 - (long)puVar8);
        uVar2 = param_1[2];
      }
      param_1[1] = (long)puVar6;
      param_1[2] = uVar2 + lVar9 * 8;
      puVar8 = puVar6;
    }
    else {
      lVar9 = (long)(uVar1 - (long)puVar8) >> 2;
      if (uVar1 - (long)puVar8 == 0) {
        lVar9 = 1;
      }
      lVar7 = lVar9 * 2;
      FUN_1092991a0();
      puVar6 = (undefined8 *)(lVar9 + (lVar7 + 6U & 0xfffffffffffffff8));
      lVar7 = param_1[2] - param_1[1];
      puVar4 = puVar6;
      if (lVar7 != 0) {
        puVar4 = (undefined8 *)((long)puVar6 + lVar7);
        puVar3 = (undefined8 *)param_1[1];
        puVar5 = puVar6;
        do {
          *puVar5 = *puVar3;
          lVar7 = lVar7 + -8;
          puVar3 = puVar3 + 1;
          puVar5 = puVar5 + 1;
        } while (lVar7 != 0);
      }
      lVar7 = *param_1;
      *param_1 = lVar9;
      param_1[1] = (long)puVar6;
      param_1[2] = (long)puVar4;
      param_1[3] = lVar9 + (long)puVar8 * 8;
      puVar8 = puVar6;
      if (lVar7 != 0) {
        __ZdlPv(lVar7);
        puVar8 = (undefined8 *)param_1[1];
      }
    }
  }
  puVar8[-1] = *param_2;
  param_1[1] = param_1[1] + -8;
  return;
}



/* Entry: 109298f9c; end: 10929909b;  */

void FUN_109298f9c(ulong *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  long lVar8;
  undefined8 *puVar9;
  long lVar10;
  
  puVar7 = (undefined8 *)param_1[2];
  if (puVar7 == (undefined8 *)param_1[3]) {
    uVar3 = *param_1;
    uVar4 = param_1[1];
    if (uVar4 < uVar3 || uVar4 - uVar3 == 0) {
      uVar5 = (long)((long)puVar7 - uVar3) >> 2;
      if ((long)puVar7 - uVar3 == 0) {
        uVar5 = 1;
      }
      uVar3 = uVar5;
      FUN_1092991a0();
      puVar1 = (undefined8 *)(uVar3 + (uVar5 >> 2) * 8);
      lVar8 = param_1[2] - (long)param_1[1];
      puVar7 = puVar1;
      if (lVar8 != 0) {
        puVar7 = (undefined8 *)((long)puVar1 + lVar8);
        puVar6 = (undefined8 *)param_1[1];
        puVar9 = puVar1;
        do {
          *puVar9 = *puVar6;
          lVar8 = lVar8 + -8;
          puVar6 = puVar6 + 1;
          puVar9 = puVar9 + 1;
        } while (lVar8 != 0);
      }
      uVar5 = *param_1;
      *param_1 = uVar3;
      param_1[1] = (ulong)puVar1;
      param_1[2] = (ulong)puVar7;
      param_1[3] = uVar3 + uVar4 * 8;
      if (uVar5 != 0) {
        __ZdlPv(uVar5);
        puVar7 = (undefined8 *)param_1[2];
      }
    }
    else {
      lVar8 = (((long)(uVar4 - uVar3) >> 3) + 1) / 2;
      lVar10 = uVar4 + lVar8 * -8;
      lVar2 = (long)puVar7 - uVar4;
      if (lVar2 != 0) {
        _memmove(lVar10,uVar4,lVar2);
        uVar4 = param_1[1];
      }
      puVar7 = (undefined8 *)(lVar10 + lVar2);
      param_1[1] = uVar4 + lVar8 * -8;
      param_1[2] = (ulong)puVar7;
    }
  }
  *puVar7 = *param_2;
  param_1[2] = param_1[2] + 8;
  return;
}



/* Entry: 10929909c; end: 10929919f;  */

void FUN_10929909c(long *param_1,undefined8 *param_2)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  long lVar7;
  undefined8 *puVar8;
  long lVar9;
  
  puVar8 = (undefined8 *)param_1[1];
  if (puVar8 == (undefined8 *)*param_1) {
    uVar2 = param_1[2];
    uVar1 = param_1[3];
    if (uVar2 < uVar1) {
      lVar9 = (((long)(uVar1 - uVar2) >> 3) + 1) / 2;
      puVar6 = puVar8 + lVar9;
      if (uVar2 - (long)puVar8 != 0) {
        _memmove(puVar6,puVar8,uVar2 - (long)puVar8);
        uVar2 = param_1[2];
      }
      param_1[1] = (long)puVar6;
      param_1[2] = uVar2 + lVar9 * 8;
      puVar8 = puVar6;
    }
    else {
      lVar9 = (long)(uVar1 - (long)puVar8) >> 2;
      if (uVar1 - (long)puVar8 == 0) {
        lVar9 = 1;
      }
      lVar7 = lVar9 * 2;
      FUN_1092991a0();
      puVar6 = (undefined8 *)(lVar9 + (lVar7 + 6U & 0xfffffffffffffff8));
      lVar7 = param_1[2] - param_1[1];
      puVar4 = puVar6;
      if (lVar7 != 0) {
        puVar4 = (undefined8 *)((long)puVar6 + lVar7);
        puVar3 = (undefined8 *)param_1[1];
        puVar5 = puVar6;
        do {
          *puVar5 = *puVar3;
          lVar7 = lVar7 + -8;
          puVar3 = puVar3 + 1;
          puVar5 = puVar5 + 1;
        } while (lVar7 != 0);
      }
      lVar7 = *param_1;
      *param_1 = lVar9;
      param_1[1] = (long)puVar6;
      param_1[2] = (long)puVar4;
      param_1[3] = lVar9 + (long)puVar8 * 8;
      puVar8 = puVar6;
      if (lVar7 != 0) {
        __ZdlPv(lVar7);
        puVar8 = (undefined8 *)param_1[1];
      }
    }
  }
  puVar8[-1] = *param_2;
  param_1[1] = param_1[1] + -8;
  return;
}



/* Entry: 1092991a0; end: 1092992b3;  */

void FUN_1092991a0(ulong param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  
  if (param_1 >> 0x3d == 0) {
    __Znwm(param_1 << 3);
    return;
  }
  func_0x000104c4f740();
  uVar4 = (*(long *)(param_1 + 0x28) + *(long *)(param_1 + 0x20)) - 1;
  FUN_109232dd4(*(long *)(*(long *)(param_1 + 8) + (uVar4 >> 8) * 8) + (uVar4 & 0xff) * 0x10);
  lVar2 = *(long *)(param_1 + 0x10);
  lVar3 = *(long *)(param_1 + 0x28);
  *(long *)(param_1 + 0x28) = lVar3 + -1;
  lVar1 = 0;
  if (lVar2 != *(long *)(param_1 + 8)) {
    lVar1 = (lVar2 - *(long *)(param_1 + 8)) * 0x20 + -1;
  }
  if ((lVar1 - (lVar3 + *(long *)(param_1 + 0x20))) - 0x1ffU < 0xfffffffffffffe00) {
    __ZdlPv(*(undefined8 *)(lVar2 + -8));
    *(long *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + -8;
  }
  return;
}



/* Entry: 1092992b4; end: 1092993d3;  */

void FUN_1092992b4(undefined8 *param_1,long *param_2,long *param_3)

{
  ulong uVar1;
  long *plVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  long *plVar7;
  ulong uVar8;
  
  uVar4 = param_2[1];
  uVar3 = param_3[1];
  uVar5 = uVar4 - 1;
  if ((uVar4 & uVar5) == 0) {
    uVar3 = uVar5 & uVar3;
  }
  else if (uVar4 <= uVar3) {
    uVar8 = 0;
    if (uVar4 != 0) {
      uVar8 = uVar3 / uVar4;
    }
    uVar3 = uVar3 - uVar8 * uVar4;
  }
  plVar2 = *(long **)(*param_2 + uVar3 * 8);
  do {
    plVar7 = plVar2;
    plVar2 = (long *)*plVar7;
  } while ((long *)*plVar7 != param_3);
  if (plVar7 != param_2 + 2) {
    uVar8 = plVar7[1];
    if ((uVar4 & uVar5) == 0) {
      uVar8 = uVar8 & uVar5;
    }
    else if (uVar4 <= uVar8) {
      uVar1 = 0;
      if (uVar4 != 0) {
        uVar1 = uVar8 / uVar4;
      }
      uVar8 = uVar8 - uVar1 * uVar4;
    }
    if (uVar8 == uVar3) goto LAB_109299368;
  }
  if (*param_3 != 0) {
    uVar8 = *(ulong *)(*param_3 + 8);
    if ((uVar4 & uVar5) == 0) {
      uVar8 = uVar8 & uVar5;
    }
    else if (uVar4 <= uVar8) {
      uVar1 = 0;
      if (uVar4 != 0) {
        uVar1 = uVar8 / uVar4;
      }
      uVar8 = uVar8 - uVar1 * uVar4;
    }
    if (uVar8 == uVar3) goto LAB_109299368;
  }
  *(undefined8 *)(*param_2 + uVar3 * 8) = 0;
LAB_109299368:
  lVar6 = *param_3;
  if (lVar6 != 0) {
    uVar8 = *(ulong *)(lVar6 + 8);
    if ((uVar4 & uVar5) == 0) {
      uVar8 = uVar8 & uVar5;
    }
    else if (uVar4 <= uVar8) {
      uVar5 = 0;
      if (uVar4 != 0) {
        uVar5 = uVar8 / uVar4;
      }
      uVar8 = uVar8 - uVar5 * uVar4;
    }
    if (uVar8 != uVar3) {
      *(long **)(*param_2 + uVar8 * 8) = plVar7;
      lVar6 = *param_3;
    }
  }
  *plVar7 = lVar6;
  *param_3 = 0;
  param_2[3] = param_2[3] + -1;
  *param_1 = param_3;
  param_1[1] = param_2;
  *(undefined1 *)(param_1 + 2) = 1;
  *(undefined4 *)((long)param_1 + 0x11) = 0;
  *(undefined4 *)((long)param_1 + 0x14) = 0;
  return;
}



/* Entry: 1092993d4; end: 10929960f;  */

undefined1  [16] FUN_1092993d4(long *param_1,ulong *param_2,long *param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  ulong uVar3;
  long *plVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  undefined8 *puVar8;
  ulong uVar9;
  long *plVar10;
  ulong uVar11;
  ulong unaff_x24;
  undefined1 auVar12 [16];
  
  uVar3 = *param_2;
  uVar7 = ((ulong)(uint)((int)uVar3 << 3) + 8 ^ uVar3 >> 0x20) * -0x622015f714c7d297;
  uVar7 = (uVar3 >> 0x20 ^ uVar7 >> 0x2f ^ uVar7) * -0x622015f714c7d297;
  uVar11 = (uVar7 ^ uVar7 >> 0x2f) * -0x622015f714c7d297;
  uVar7 = param_1[1];
  if (uVar7 != 0) {
    uVar5 = uVar7 - 1;
    if ((uVar7 & uVar5) == 0) {
      unaff_x24 = uVar11 & uVar5;
    }
    else {
      unaff_x24 = uVar11;
      if (uVar7 <= uVar11) {
        uVar9 = 0;
        if (uVar7 != 0) {
          uVar9 = uVar11 / uVar7;
        }
        unaff_x24 = uVar11 - uVar9 * uVar7;
      }
    }
    puVar8 = *(undefined8 **)(*param_1 + unaff_x24 * 8);
    if (puVar8 != (undefined8 *)0x0) {
      for (plVar10 = (long *)*puVar8; plVar10 != (long *)0x0; plVar10 = (long *)*plVar10) {
        uVar9 = plVar10[1];
        if (uVar9 == uVar11) {
          if (plVar10[2] == uVar3) {
            uVar2 = 0;
            goto LAB_1092995dc;
          }
        }
        else {
          if ((uVar7 & uVar5) == 0) {
            uVar9 = uVar9 & uVar5;
          }
          else if (uVar7 <= uVar9) {
            uVar1 = 0;
            if (uVar7 != 0) {
              uVar1 = uVar9 / uVar7;
            }
            uVar9 = uVar9 - uVar1 * uVar7;
          }
          if (uVar9 != unaff_x24) break;
        }
      }
    }
  }
  plVar10 = (long *)0x18;
  __Znwm();
  *plVar10 = 0;
  plVar10[1] = uVar11;
  plVar10[2] = *param_3;
  if ((uVar7 == 0) || (*(float *)(param_1 + 4) * (float)uVar7 < (float)(param_1[3] + 1))) {
    uVar3 = 1;
    if (2 < uVar7) {
      uVar3 = (ulong)((uVar7 & uVar7 - 1) != 0);
    }
    uVar3 = uVar3 | uVar7 << 1;
    uVar7 = (ulong)((float)(param_1[3] + 1) / *(float *)(param_1 + 4));
    if (uVar3 <= uVar7) {
      uVar3 = uVar7;
    }
    FUN_109299610(param_1,uVar3);
    uVar7 = param_1[1];
    if ((uVar7 & uVar7 - 1) == 0) {
      unaff_x24 = uVar7 - 1 & uVar11;
    }
    else {
      unaff_x24 = uVar11;
      if (uVar7 <= uVar11) {
        uVar3 = 0;
        if (uVar7 != 0) {
          uVar3 = uVar11 / uVar7;
        }
        unaff_x24 = uVar11 - uVar3 * uVar7;
      }
    }
  }
  lVar6 = *param_1;
  plVar4 = *(long **)(lVar6 + unaff_x24 * 8);
  if (plVar4 == (long *)0x0) {
    plVar4 = param_1 + 2;
    *plVar10 = *plVar4;
    *plVar4 = (long)plVar10;
    *(long **)(lVar6 + unaff_x24 * 8) = plVar4;
    if (*plVar10 == 0) goto LAB_1092995cc;
    uVar3 = *(ulong *)(*plVar10 + 8);
    if ((uVar7 & uVar7 - 1) == 0) {
      uVar3 = uVar3 & uVar7 - 1;
    }
    else if (uVar7 <= uVar3) {
      uVar11 = 0;
      if (uVar7 != 0) {
        uVar11 = uVar3 / uVar7;
      }
      uVar3 = uVar3 - uVar11 * uVar7;
    }
    plVar4 = (long *)(*param_1 + uVar3 * 8);
  }
  else {
    *plVar10 = *plVar4;
  }
  *plVar4 = (long)plVar10;
LAB_1092995cc:
  param_1[3] = param_1[3] + 1;
  uVar2 = 1;
LAB_1092995dc:
  auVar12._8_8_ = uVar2;
  auVar12._0_8_ = plVar10;
  return auVar12;
}



/* Entry: 109299610; end: 1092996df;  */

void FUN_109299610(long *param_1,ulong param_2)

{
  char cVar1;
  bool bVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  ulong uVar10;
  ulong uVar11;
  long lStack_68;
  long lStack_60;
  long *plStack_58;
  ulong uStack_40;
  long *plStack_38;
  
  if (param_2 - 1 == 0) {
    param_2 = 2;
  }
  else if ((param_2 & param_2 - 1) != 0) {
    __ZNSt3__112__next_primeEm();
  }
  uVar11 = param_1[1];
  if (uVar11 < param_2) {
LAB_109299658:
    if (param_2 == 0) {
      lVar4 = *param_1;
      *param_1 = 0;
      if (lVar4 != 0) {
        __ZdlPv();
      }
      param_1[1] = 0;
    }
    else {
      if (param_2 >> 0x3d != 0) {
        plVar7 = param_1;
        func_0x000104c4f740();
        plVar8 = (long *)plVar7[1];
        if ((plVar8 != (long *)0x0) &&
           (uStack_40 = param_2, plStack_38 = param_1, __ZNSt3__119__shared_weak_count4lockEv(),
           plVar8 != (long *)0x0)) {
          lVar4 = *plVar7;
          lStack_60 = lVar4;
          plStack_58 = plVar8;
          if (lVar4 != 0) {
            __ZNSt3__15mutex4lockEv(lVar4 + 0x40);
            FUN_1092999f8(lVar4 + 0xa8,plVar7 + 2);
            lStack_68 = plVar7[2];
            func_0x000109299a60(lVar4 + 0xc0,&lStack_68);
            __ZNSt3__15mutex6unlockEv(lVar4 + 0x40);
          }
          plVar7 = plVar8 + 1;
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
            (**(code **)(*plVar8 + 0x10))(plVar8);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar8);
          }
        }
        return;
      }
      lVar4 = param_2 << 3;
      __Znwm();
      lVar5 = *param_1;
      *param_1 = lVar4;
      if (lVar5 != 0) {
        __ZdlPv();
      }
      uVar11 = 0;
      param_1[1] = param_2;
      do {
        *(undefined8 *)(*param_1 + uVar11 * 8) = 0;
        uVar11 = uVar11 + 1;
      } while (param_2 != uVar11);
      plVar7 = (long *)param_1[2];
      if (plVar7 != (long *)0x0) {
        uVar11 = plVar7[1];
        uVar6 = param_2 - 1;
        if ((param_2 & uVar6) == 0) {
          uVar11 = uVar11 & uVar6;
        }
        else if (param_2 <= uVar11) {
          uVar10 = 0;
          if (param_2 != 0) {
            uVar10 = uVar11 / param_2;
          }
          uVar11 = uVar11 - uVar10 * param_2;
        }
        *(long **)(*param_1 + uVar11 * 8) = param_1 + 2;
        plVar8 = (long *)*plVar7;
        while (plVar8 != (long *)0x0) {
          uVar10 = plVar8[1];
          if ((param_2 & uVar6) == 0) {
            uVar10 = uVar10 & uVar6;
          }
          else if (param_2 <= uVar10) {
            uVar3 = 0;
            if (param_2 != 0) {
              uVar3 = uVar10 / param_2;
            }
            uVar10 = uVar10 - uVar3 * param_2;
          }
          plVar9 = plVar8;
          if (uVar10 != uVar11) {
            lVar4 = *param_1;
            if (*(long *)(lVar4 + uVar10 * 8) == 0) {
              *(long **)(lVar4 + uVar10 * 8) = plVar7;
              uVar11 = uVar10;
            }
            else {
              *plVar7 = *plVar8;
              *plVar8 = **(undefined8 **)(lVar4 + uVar10 * 8);
              **(long **)(lVar4 + uVar10 * 8) = (long)plVar8;
              plVar9 = plVar7;
            }
          }
          plVar7 = plVar9;
          plVar8 = (long *)*plVar9;
        }
      }
    }
    return;
  }
  if (param_2 < uVar11) {
    uVar6 = (ulong)((float)(ulong)param_1[3] / *(float *)(param_1 + 4));
    if ((uVar11 < 3) || ((uVar11 & uVar11 - 1) != 0)) {
      __ZNSt3__112__next_primeEm();
    }
    else if (1 < uVar6) {
      uVar6 = 1L << (-LZCOUNT(uVar6 - 1) & 0x3fU);
    }
    if (param_2 <= uVar6) {
      param_2 = uVar6;
    }
    if (param_2 < uVar11) goto LAB_109299658;
  }
  return;
}



/* Entry: 1092996e0; end: 10929981b;  */

void FUN_1092996e0(long *param_1,ulong param_2)

{
  char cVar1;
  bool bVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  long *plVar8;
  long *plVar9;
  long *plVar10;
  ulong uVar11;
  long lStack_68;
  long lStack_60;
  long *plStack_58;
  
  if (param_2 == 0) {
    lVar4 = *param_1;
    *param_1 = 0;
    if (lVar4 != 0) {
      __ZdlPv();
    }
    param_1[1] = 0;
  }
  else {
    if (param_2 >> 0x3d != 0) {
      func_0x000104c4f740();
      plVar8 = (long *)param_1[1];
      if ((plVar8 != (long *)0x0) &&
         (__ZNSt3__119__shared_weak_count4lockEv(), plVar8 != (long *)0x0)) {
        lVar4 = *param_1;
        lStack_60 = lVar4;
        plStack_58 = plVar8;
        if (lVar4 != 0) {
          __ZNSt3__15mutex4lockEv(lVar4 + 0x40);
          FUN_1092999f8(lVar4 + 0xa8,param_1 + 2);
          lStack_68 = param_1[2];
          func_0x000109299a60(lVar4 + 0xc0,&lStack_68);
          __ZNSt3__15mutex6unlockEv(lVar4 + 0x40);
        }
        plVar9 = plVar8 + 1;
        do {
          lVar4 = *plVar9;
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(plVar9,0x10);
          if (bVar2) {
            *plVar9 = lVar4 + -1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
        if (lVar4 == 0) {
          (**(code **)(*plVar8 + 0x10))(plVar8);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar8);
        }
      }
      return;
    }
    lVar4 = param_2 << 3;
    __Znwm();
    lVar5 = *param_1;
    *param_1 = lVar4;
    if (lVar5 != 0) {
      __ZdlPv();
    }
    uVar6 = 0;
    param_1[1] = param_2;
    do {
      *(undefined8 *)(*param_1 + uVar6 * 8) = 0;
      uVar6 = uVar6 + 1;
    } while (param_2 != uVar6);
    plVar8 = (long *)param_1[2];
    if (plVar8 != (long *)0x0) {
      uVar6 = plVar8[1];
      uVar7 = param_2 - 1;
      if ((param_2 & uVar7) == 0) {
        uVar6 = uVar6 & uVar7;
      }
      else if (param_2 <= uVar6) {
        uVar11 = 0;
        if (param_2 != 0) {
          uVar11 = uVar6 / param_2;
        }
        uVar6 = uVar6 - uVar11 * param_2;
      }
      *(long **)(*param_1 + uVar6 * 8) = param_1 + 2;
      plVar9 = (long *)*plVar8;
      while (plVar9 != (long *)0x0) {
        uVar11 = plVar9[1];
        if ((param_2 & uVar7) == 0) {
          uVar11 = uVar11 & uVar7;
        }
        else if (param_2 <= uVar11) {
          uVar3 = 0;
          if (param_2 != 0) {
            uVar3 = uVar11 / param_2;
          }
          uVar11 = uVar11 - uVar3 * param_2;
        }
        plVar10 = plVar9;
        if (uVar11 != uVar6) {
          lVar4 = *param_1;
          if (*(long *)(lVar4 + uVar11 * 8) == 0) {
            *(long **)(lVar4 + uVar11 * 8) = plVar8;
            uVar6 = uVar11;
          }
          else {
            *plVar8 = *plVar9;
            *plVar9 = **(undefined8 **)(lVar4 + uVar11 * 8);
            **(long **)(lVar4 + uVar11 * 8) = (long)plVar9;
            plVar10 = plVar8;
          }
        }
        plVar8 = plVar10;
        plVar9 = (long *)*plVar10;
      }
    }
  }
  return;
}



/* Entry: 10929981c; end: 1092998f3;  */

void FUN_10929981c(long *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  long lStack_48;
  long lStack_40;
  long *plStack_38;
  
  plVar4 = (long *)param_1[1];
  if (plVar4 != (long *)0x0) {
    __ZNSt3__119__shared_weak_count4lockEv();
    if (plVar4 != (long *)0x0) {
      lVar5 = *param_1;
      lStack_40 = lVar5;
      plStack_38 = plVar4;
      if (lVar5 != 0) {
        __ZNSt3__15mutex4lockEv(lVar5 + 0x40);
        FUN_1092999f8(lVar5 + 0xa8,param_1 + 2);
        lStack_48 = param_1[2];
        func_0x000109299a60(lVar5 + 0xc0,&lStack_48);
        __ZNSt3__15mutex6unlockEv(lVar5 + 0x40);
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



/* Entry: 1092998f4; end: 10929996f;  */

void FUN_1092998f4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110ae78a8;
  FUN_109232dd4(param_1 + 6);
  if (param_1[5] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)(param_1);
  return;
}



/* Entry: 109299970; end: 1092999b7;  */

void FUN_109299970(long param_1)

{
  FUN_10929981c(param_1 + 0x20,*(undefined8 *)(param_1 + 0x18));
  FUN_109232dd4(param_1 + 0x30);
  if (*(long *)(param_1 + 0x28) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZNSt3__119__shared_weak_count14__release_weakEv_110346648)();
    return;
  }
  return;
}



/* Entry: 1092999b8; end: 1092999f3;  */

long FUN_1092999b8(long param_1,undefined8 param_2)

{
  func_0x000107c31948(param_2,&PTR_DAT_110ae78e8);
  param_1 = param_1 + 0x20;
  if ((int)param_2 == 0) {
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 1092999f4; end: 1092999f7;  */

void FUN_1092999f4(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1092999f8; end: 109299a93;  */

void FUN_1092999f8(long *param_1,long *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  
  plVar4 = (long *)0x20;
  __Znwm();
  lVar5 = param_2[1];
  lVar6 = *param_2;
  plVar4[3] = param_2[1];
  plVar4[2] = lVar6;
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
  lVar5 = *param_1;
  *plVar4 = lVar5;
  plVar4[1] = (long)param_1;
  *(long **)(lVar5 + 8) = plVar4;
  *param_1 = (long)plVar4;
  param_1[2] = param_1[2] + 1;
  return;
}



/* Entry: 109299a94; end: 109299b6b;  */

long * FUN_109299a94(long *param_1,ulong *param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  long *plVar7;
  ulong uVar8;
  
  uVar2 = param_1[1];
  if (uVar2 != 0) {
    uVar3 = *param_2;
    uVar4 = ((ulong)(uint)((int)uVar3 << 3) + 8 ^ uVar3 >> 0x20) * -0x622015f714c7d297;
    uVar4 = (uVar3 >> 0x20 ^ uVar4 >> 0x2f ^ uVar4) * -0x622015f714c7d297;
    uVar4 = (uVar4 ^ uVar4 >> 0x2f) * -0x622015f714c7d297;
    uVar5 = uVar2 - 1;
    if ((uVar2 & uVar5) == 0) {
      uVar6 = uVar4 & uVar5;
    }
    else {
      uVar6 = uVar4;
      if (uVar2 <= uVar4) {
        uVar6 = 0;
        if (uVar2 != 0) {
          uVar6 = uVar4 / uVar2;
        }
        uVar6 = uVar4 - uVar6 * uVar2;
      }
    }
    plVar7 = *(long **)(*param_1 + uVar6 * 8);
    if (plVar7 != (long *)0x0) {
      plVar7 = (long *)*plVar7;
      do {
        if (plVar7 == (long *)0x0) {
          return (long *)0x0;
        }
        uVar8 = plVar7[1];
        if (uVar8 == uVar4) {
          if (plVar7[2] == uVar3) {
            return plVar7;
          }
        }
        else {
          if ((uVar2 & uVar5) == 0) {
            uVar8 = uVar8 & uVar5;
          }
          else if (uVar2 <= uVar8) {
            uVar1 = 0;
            if (uVar2 != 0) {
              uVar1 = uVar8 / uVar2;
            }
            uVar8 = uVar8 - uVar1 * uVar2;
          }
          if (uVar8 != uVar6) {
            return (long *)0x0;
          }
        }
        plVar7 = (long *)*plVar7;
      } while( true );
    }
  }
  return (long *)0x0;
}



/* Entry: 109299b6c; end: 109299bab;  */

undefined8 FUN_109299b6c(undefined8 param_1,undefined8 *param_2)

{
  long lVar1;
  undefined8 uVar2;
  long alStack_38 [3];
  
  uVar2 = *param_2;
  FUN_109299bac(alStack_38);
  lVar1 = alStack_38[0];
  alStack_38[0] = 0;
  if (lVar1 != 0) {
    __ZdlPv();
  }
  return uVar2;
}



/* Entry: 109299bac; end: 109299ccb;  */

void FUN_109299bac(undefined8 *param_1,long *param_2,long *param_3)

{
  ulong uVar1;
  long *plVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  long *plVar7;
  ulong uVar8;
  
  uVar4 = param_2[1];
  uVar3 = param_3[1];
  uVar5 = uVar4 - 1;
  if ((uVar4 & uVar5) == 0) {
    uVar3 = uVar5 & uVar3;
  }
  else if (uVar4 <= uVar3) {
    uVar8 = 0;
    if (uVar4 != 0) {
      uVar8 = uVar3 / uVar4;
    }
    uVar3 = uVar3 - uVar8 * uVar4;
  }
  plVar2 = *(long **)(*param_2 + uVar3 * 8);
  do {
    plVar7 = plVar2;
    plVar2 = (long *)*plVar7;
  } while ((long *)*plVar7 != param_3);
  if (plVar7 != param_2 + 2) {
    uVar8 = plVar7[1];
    if ((uVar4 & uVar5) == 0) {
      uVar8 = uVar8 & uVar5;
    }
    else if (uVar4 <= uVar8) {
      uVar1 = 0;
      if (uVar4 != 0) {
        uVar1 = uVar8 / uVar4;
      }
      uVar8 = uVar8 - uVar1 * uVar4;
    }
    if (uVar8 == uVar3) goto LAB_109299c60;
  }
  if (*param_3 != 0) {
    uVar8 = *(ulong *)(*param_3 + 8);
    if ((uVar4 & uVar5) == 0) {
      uVar8 = uVar8 & uVar5;
    }
    else if (uVar4 <= uVar8) {
      uVar1 = 0;
      if (uVar4 != 0) {
        uVar1 = uVar8 / uVar4;
      }
      uVar8 = uVar8 - uVar1 * uVar4;
    }
    if (uVar8 == uVar3) goto LAB_109299c60;
  }
  *(undefined8 *)(*param_2 + uVar3 * 8) = 0;
LAB_109299c60:
  lVar6 = *param_3;
  if (lVar6 != 0) {
    uVar8 = *(ulong *)(lVar6 + 8);
    if ((uVar4 & uVar5) == 0) {
      uVar8 = uVar8 & uVar5;
    }
    else if (uVar4 <= uVar8) {
      uVar5 = 0;
      if (uVar4 != 0) {
        uVar5 = uVar8 / uVar4;
      }
      uVar8 = uVar8 - uVar5 * uVar4;
    }
    if (uVar8 != uVar3) {
      *(long **)(*param_2 + uVar8 * 8) = plVar7;
      lVar6 = *param_3;
    }
  }
  *plVar7 = lVar6;
  *param_3 = 0;
  param_2[3] = param_2[3] + -1;
  *param_1 = param_3;
  param_1[1] = param_2;
  *(undefined1 *)(param_1 + 2) = 1;
  *(undefined4 *)((long)param_1 + 0x11) = 0;
  *(undefined4 *)((long)param_1 + 0x14) = 0;
  return;
}



/* Entry: 109299ccc; end: 109299d23;  */

long FUN_109299ccc(long param_1)

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



/* Entry: 109299d24; end: 109299e47;  */

void FUN_109299d24(ulong param_1,long param_2,undefined8 param_3,uint param_4,undefined8 param_5,
                  undefined8 param_6)

{
  int iVar1;
  undefined2 uVar2;
  uint uVar3;
  ulong uVar4;
  long lVar5;
  uint uVar6;
  uint uStack_54;
  
  if ((param_1 & 7) == 0) {
    uVar4 = *(long *)(param_1 + 0x40000) - *(long *)(param_1 + 0x40008);
    *(undefined8 *)(param_1 + 0x40028) = 0;
    uVar3 = (uint)param_6;
    uVar6 = uVar3;
    if (0xb < uVar3) {
      uVar6 = 0xc;
    }
    uVar2 = 9;
    if (0 < (int)uVar3) {
      uVar2 = (short)uVar6;
    }
    *(undefined2 *)(param_1 + 0x40024) = uVar2;
    uStack_54 = param_4;
    if (0x40000000 < uVar4) {
      _bzero(param_1,0x20000);
      _memset(param_1 + 0x20000,0xff,0x20000);
      uVar4 = 0;
    }
    iVar1 = (int)uVar4 + 0x10000;
    *(int *)(param_1 + 0x4001c) = iVar1;
    *(int *)(param_1 + 0x40020) = iVar1;
    lVar5 = (param_2 - uVar4) + -0x10000;
    *(long *)(param_1 + 0x40000) = param_2;
    *(long *)(param_1 + 0x40008) = lVar5;
    *(long *)(param_1 + 0x40010) = lVar5;
    *(int *)(param_1 + 0x40018) = iVar1;
    iVar1 = 0;
    if (param_4 < 0x7e000001) {
      iVar1 = param_4 + param_4 / 0xff + 0x10;
    }
    FUN_109299f00(param_1,param_2,param_3,&uStack_54,param_5,param_6,(int)param_5 < iVar1);
  }
  return;
}



/* Entry: 109299e48; end: 109299e8b;  */

ulong FUN_109299e48(ulong param_1,long param_2,undefined8 param_3,uint param_4,undefined8 param_5,
                   undefined8 param_6)

{
  int iVar1;
  undefined2 uVar2;
  uint uVar3;
  ulong uVar4;
  long lVar5;
  uint uVar6;
  uint uStack_54;
  
  if ((param_1 & 7) != 0) {
    return 0;
  }
  *(undefined8 *)(param_1 + 0x40000) = 0xffffffffffffffff;
  *(undefined8 *)(param_1 + 0x40008) = 0;
  *(undefined8 *)(param_1 + 0x40028) = 0;
  *(undefined2 *)(param_1 + 0x40026) = 0;
  uVar3 = (uint)param_6;
  uVar6 = uVar3;
  if (0xb < uVar3) {
    uVar6 = 0xc;
  }
  uVar2 = 9;
  if (0 < (int)uVar3) {
    uVar2 = (short)uVar6;
  }
  *(undefined2 *)(param_1 + 0x40024) = uVar2;
  if ((param_1 & 7) == 0) {
    uVar4 = *(long *)(param_1 + 0x40000) - *(long *)(param_1 + 0x40008);
    *(undefined8 *)(param_1 + 0x40028) = 0;
    uVar6 = uVar3;
    if (0xb < uVar3) {
      uVar6 = 0xc;
    }
    uVar2 = 9;
    if (0 < (int)uVar3) {
      uVar2 = (short)uVar6;
    }
    *(undefined2 *)(param_1 + 0x40024) = uVar2;
    uStack_54 = param_4;
    if (0x40000000 < uVar4) {
      _bzero(param_1,0x20000);
      _memset(param_1 + 0x20000,0xff,0x20000);
      uVar4 = 0;
    }
    iVar1 = (int)uVar4 + 0x10000;
    *(int *)(param_1 + 0x4001c) = iVar1;
    *(int *)(param_1 + 0x40020) = iVar1;
    lVar5 = (param_2 - uVar4) + -0x10000;
    *(long *)(param_1 + 0x40000) = param_2;
    *(long *)(param_1 + 0x40008) = lVar5;
    *(long *)(param_1 + 0x40010) = lVar5;
    *(int *)(param_1 + 0x40018) = iVar1;
    iVar1 = 0;
    if (param_4 < 0x7e000001) {
      iVar1 = param_4 + param_4 / 0xff + 0x10;
    }
    FUN_109299f00(param_1,param_2,param_3,&uStack_54,param_5,param_6,(int)param_5 < iVar1);
  }
  else {
    param_1 = 0;
  }
  return param_1;
}


