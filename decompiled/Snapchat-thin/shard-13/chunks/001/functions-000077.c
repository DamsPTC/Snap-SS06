/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10a04f02c; end: 10a04f297;  */

long * FUN_10a04f02c(long *param_1,long param_2)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  ulong uVar5;
  long *plVar6;
  ulong uVar7;
  long *plVar8;
  long *plVar9;
  long *unaff_x26;
  
  param_1[1] = 0;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_2 + 0x20);
  FUN_10a04f298(param_1,*(undefined8 *)(param_2 + 8));
  plVar8 = *(long **)(param_2 + 0x10);
  if (plVar8 != (long *)0x0) {
    plVar1 = param_1 + 2;
    do {
      plVar6 = param_1;
      func_0x000107c2b05c(param_1,plVar8 + 2);
      plVar9 = (long *)param_1[1];
      if (plVar9 != (long *)0x0) {
        uVar7 = (long)plVar9 - 1;
        if (((ulong)plVar9 & uVar7) == 0) {
          unaff_x26 = (long *)(uVar7 & (ulong)plVar6);
        }
        else {
          unaff_x26 = plVar6;
          if (plVar9 <= plVar6) {
            uVar5 = 0;
            if (plVar9 != (long *)0x0) {
              uVar5 = (ulong)plVar6 / (ulong)plVar9;
            }
            unaff_x26 = (long *)((long)plVar6 - uVar5 * (long)plVar9);
          }
        }
        plVar2 = *(long **)(*param_1 + (long)unaff_x26 * 8);
        if (plVar2 != (long *)0x0) {
          for (plVar2 = (long *)*plVar2; plVar2 != (long *)0x0; plVar2 = (long *)*plVar2) {
            plVar3 = (long *)plVar2[1];
            if (plVar3 == plVar6) {
              plVar3 = param_1;
              func_0x000107c2b068(param_1,plVar2 + 2,plVar8 + 2);
              if (((ulong)plVar3 & 1) != 0) goto LAB_10a04f240;
            }
            else {
              if (((ulong)plVar9 & uVar7) == 0) {
                plVar3 = (long *)((ulong)plVar3 & uVar7);
              }
              else if (plVar9 <= plVar3) {
                uVar5 = 0;
                if (plVar9 != (long *)0x0) {
                  uVar5 = (ulong)plVar3 / (ulong)plVar9;
                }
                plVar3 = (long *)((long)plVar3 - uVar5 * (long)plVar9);
              }
              if (plVar3 != unaff_x26) break;
            }
          }
        }
      }
      plVar2 = (long *)0x38;
      __Znwm();
      *plVar2 = 0;
      plVar2[1] = (long)plVar6;
      FUN_10a04f468(plVar2 + 2,plVar8 + 2);
      if ((plVar9 == (long *)0x0) ||
         (*(float *)(param_1 + 4) * (float)plVar9 < (float)(param_1[3] + 1))) {
        uVar7 = 1;
        if ((long *)0x2 < plVar9) {
          uVar7 = (ulong)(((ulong)plVar9 & (long)plVar9 - 1U) != 0);
        }
        uVar7 = uVar7 | (long)plVar9 << 1;
        uVar5 = (ulong)((float)(param_1[3] + 1) / *(float *)(param_1 + 4));
        if (uVar7 <= uVar5) {
          uVar7 = uVar5;
        }
        FUN_10a04f298(param_1,uVar7);
        plVar9 = (long *)param_1[1];
        if (((ulong)plVar9 & (long)plVar9 - 1U) == 0) {
          unaff_x26 = (long *)((long)plVar9 - 1U & (ulong)plVar6);
        }
        else {
          unaff_x26 = plVar6;
          if (plVar9 <= plVar6) {
            uVar7 = 0;
            if (plVar9 != (long *)0x0) {
              uVar7 = (ulong)plVar6 / (ulong)plVar9;
            }
            unaff_x26 = (long *)((long)plVar6 - uVar7 * (long)plVar9);
          }
        }
      }
      lVar4 = *param_1;
      plVar6 = *(long **)(lVar4 + (long)unaff_x26 * 8);
      if (plVar6 == (long *)0x0) {
        *plVar2 = *plVar1;
        *plVar1 = (long)plVar2;
        *(long **)(lVar4 + (long)unaff_x26 * 8) = plVar1;
        if (*plVar2 != 0) {
          plVar6 = *(long **)(*plVar2 + 8);
          if (((ulong)plVar9 & (long)plVar9 - 1U) == 0) {
            plVar6 = (long *)((ulong)plVar6 & (long)plVar9 - 1U);
          }
          else if (plVar9 <= plVar6) {
            uVar7 = 0;
            if (plVar9 != (long *)0x0) {
              uVar7 = (ulong)plVar6 / (ulong)plVar9;
            }
            plVar6 = (long *)((long)plVar6 - uVar7 * (long)plVar9);
          }
          *(long **)(*param_1 + (long)plVar6 * 8) = plVar2;
        }
      }
      else {
        *plVar2 = *plVar6;
        *plVar6 = (long)plVar2;
      }
      param_1[3] = param_1[3] + 1;
LAB_10a04f240:
      plVar8 = (long *)*plVar8;
    } while (plVar8 != (long *)0x0);
  }
  return param_1;
}



/* Entry: 10a04f298; end: 10a04f467;  */

long * FUN_10a04f298(long *param_1,long *param_2)

{
  char cVar1;
  bool bVar2;
  ulong uVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  ulong uVar7;
  long *plVar8;
  long *plVar9;
  long *plVar10;
  long *plVar11;
  long lVar12;
  
  plVar5 = param_1;
  plVar6 = param_2;
  if ((long)param_2 - 1U == 0) {
    param_2 = (long *)0x2;
  }
  else if (((ulong)param_2 & (long)param_2 - 1U) != 0) {
    __ZNSt3__112__next_primeEm();
    plVar5 = param_2;
  }
  plVar11 = (long *)param_1[1];
  if (plVar11 > param_2 || param_2 == plVar11) {
    if (plVar11 <= param_2) {
      return plVar5;
    }
    plVar5 = (long *)(long)((float)(ulong)param_1[3] / *(float *)(param_1 + 4));
    if ((plVar11 < (long *)0x3) || (((ulong)plVar11 & (long)plVar11 - 1U) != 0)) {
      __ZNSt3__112__next_primeEm();
    }
    else if ((long *)0x1 < plVar5) {
      plVar5 = (long *)(1L << (-LZCOUNT((long)plVar5 + -1) & 0x3fU));
    }
    if (param_2 <= plVar5) {
      param_2 = plVar5;
    }
    if (plVar11 <= param_2) {
      return plVar5;
    }
    if (param_2 == (long *)0x0) {
      plVar5 = (long *)*param_1;
      *param_1 = 0;
      if (plVar5 != (long *)0x0) {
        __ZdlPv();
      }
      param_1[1] = 0;
      return plVar5;
    }
  }
  if ((ulong)param_2 >> 0x3d == 0) {
    lVar4 = (long)param_2 << 3;
    __Znwm();
    plVar5 = (long *)*param_1;
    *param_1 = lVar4;
    if (plVar5 != (long *)0x0) {
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
        uVar3 = 0;
        if (param_2 != (long *)0x0) {
          uVar3 = (ulong)plVar11 / (ulong)param_2;
        }
        plVar11 = (long *)((long)plVar11 - uVar3 * (long)param_2);
      }
      *(long **)(*param_1 + (long)plVar11 * 8) = param_1 + 2;
      plVar8 = (long *)*plVar6;
      while (plVar8 != (long *)0x0) {
        plVar10 = (long *)plVar8[1];
        if (((ulong)param_2 & uVar7) == 0) {
          plVar10 = (long *)((ulong)plVar10 & uVar7);
        }
        else if (param_2 <= plVar10) {
          uVar3 = 0;
          if (param_2 != (long *)0x0) {
            uVar3 = (ulong)plVar10 / (ulong)param_2;
          }
          plVar10 = (long *)((long)plVar10 - uVar3 * (long)param_2);
        }
        plVar9 = plVar8;
        if (plVar10 != plVar11) {
          lVar4 = *param_1;
          if (*(long *)(lVar4 + (long)plVar10 * 8) == 0) {
            *(long **)(lVar4 + (long)plVar10 * 8) = plVar6;
            plVar11 = plVar10;
          }
          else {
            *plVar6 = *plVar8;
            *plVar8 = **(undefined8 **)(lVar4 + (long)plVar10 * 8);
            **(long **)(lVar4 + (long)plVar10 * 8) = (long)plVar8;
            plVar9 = plVar6;
          }
        }
        plVar6 = plVar9;
        plVar8 = (long *)*plVar9;
      }
    }
    return plVar5;
  }
  func_0x000109ffded8();
  if (*(char *)((long)plVar6 + 0x17) < '\0') {
    func_0x000107c3192c(plVar5,*plVar6,plVar6[1]);
  }
  else {
    lVar12 = plVar6[1];
    lVar4 = *plVar6;
    plVar5[2] = plVar6[2];
    plVar5[1] = lVar12;
    *plVar5 = lVar4;
  }
  lVar4 = plVar6[4];
  lVar12 = plVar6[3];
  plVar5[4] = plVar6[4];
  plVar5[3] = lVar12;
  if (lVar4 != 0) {
    plVar6 = (long *)(lVar4 + 8);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar2) {
        *plVar6 = *plVar6 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  return plVar5;
}



/* Entry: 10a04f468; end: 10a04f51f;  */

undefined8 * FUN_10a04f468(undefined8 *param_1,undefined8 *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  if (*(char *)((long)param_2 + 0x17) < '\0') {
    func_0x000107c3192c(param_1,*param_2,param_2[1]);
  }
  else {
    uVar6 = param_2[1];
    uVar5 = *param_2;
    param_1[2] = param_2[2];
    param_1[1] = uVar6;
    *param_1 = uVar5;
  }
  lVar4 = param_2[4];
  uVar5 = param_2[3];
  param_1[4] = param_2[4];
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
  return param_1;
}



/* Entry: 10a04f520; end: 10a04f57b;  */

long * FUN_10a04f520(long *param_1)

{
  long *plVar1;
  long lVar2;
  
  plVar1 = (long *)param_1[2];
  while (plVar1 != (long *)0x0) {
    lVar2 = *plVar1;
    FUN_10a04f57c(plVar1 + 2);
    __ZdlPv(plVar1);
    plVar1 = (long *)lVar2;
  }
  lVar2 = *param_1;
  *param_1 = 0;
  if (lVar2 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 10a04f57c; end: 10a04f60f;  */

void FUN_10a04f57c(undefined8 *param_1)

{
  FUN_10a04b168(param_1 + 3);
  if (-1 < *(char *)((long)param_1 + 0x17)) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(*param_1);
  return;
}



/* Entry: 10a04f610; end: 10a04f637;  */

void FUN_10a04f610(void)

{
  undefined8 *puVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  
  puVar1 = (undefined8 *)0x8;
  ___cxa_allocate_exception();
  __ZNSt8bad_castC1Ev();
  ___cxa_throw();
  plVar4 = (long *)*puVar1;
  if (plVar4 == (long *)0x0) {
    return;
  }
  plVar3 = (long *)puVar1[1];
  plVar2 = plVar4;
  if (plVar3 != plVar4) {
    do {
      plVar3 = plVar3 + -1;
      if (*plVar3 != 0) {
        func_0x0001092b4274(plVar3);
      }
    } while (plVar3 != plVar4);
    plVar2 = (long *)*puVar1;
  }
  puVar1[1] = plVar4;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(plVar2);
  return;
}



/* Entry: 10a04f638; end: 10a04f6ab;  */

void FUN_10a04f638(undefined8 *param_1)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  
  plVar3 = (long *)*param_1;
  if (plVar3 == (long *)0x0) {
    return;
  }
  plVar2 = (long *)param_1[1];
  plVar1 = plVar3;
  if (plVar2 != plVar3) {
    do {
      plVar2 = plVar2 + -1;
      if (*plVar2 != 0) {
        func_0x0001092b4274(plVar2);
      }
    } while (plVar2 != plVar3);
    plVar1 = (long *)*param_1;
  }
  param_1[1] = plVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(plVar1);
  return;
}



/* Entry: 10a04f6ac; end: 10a04f807;  */

long * FUN_10a04f6ac(long *param_1)

{
  long lVar1;
  undefined8 *puVar2;
  ulong uVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  long *plVar7;
  
  puVar6 = (undefined8 *)param_1[1];
  puVar2 = (undefined8 *)param_1[2];
  puVar5 = puVar6;
  if (puVar2 != puVar6) {
    uVar3 = param_1[4];
    plVar7 = puVar6 + (uVar3 >> 7);
    lVar4 = *plVar7 + (uVar3 & 0x7f) * 0x20;
    lVar1 = puVar6[param_1[5] + uVar3 >> 7] + (param_1[5] + uVar3 & 0x7f) * 0x20;
    puVar5 = puVar2;
    if (lVar4 != lVar1) {
      do {
        func_0x00010a07a8a8(lVar4 + 0x10);
        FUN_10a04f83c(lVar4);
        lVar4 = lVar4 + 0x20;
        if (lVar4 - *plVar7 == 0x1000) {
          plVar7 = plVar7 + 1;
          lVar4 = *plVar7;
        }
      } while (lVar4 != lVar1);
      puVar6 = (undefined8 *)param_1[1];
      puVar2 = (undefined8 *)param_1[2];
      puVar5 = puVar2;
    }
  }
  param_1[5] = 0;
  lVar4 = (long)puVar5 - (long)puVar6;
  while (uVar3 = lVar4 >> 3, 2 < uVar3) {
    __ZdlPv(*puVar6);
    puVar2 = (undefined8 *)param_1[2];
    puVar6 = (undefined8 *)(param_1[1] + 8);
    param_1[1] = (long)puVar6;
    puVar5 = puVar2;
    lVar4 = (long)puVar2 - (long)puVar6;
  }
  if (uVar3 == 1) {
    lVar4 = 0x40;
  }
  else {
    if (uVar3 != 2) goto LAB_10a04f7ac;
    lVar4 = 0x80;
  }
  param_1[4] = lVar4;
LAB_10a04f7ac:
  if (puVar6 != puVar5) {
    do {
      puVar2 = puVar6 + 1;
      __ZdlPv(*puVar6);
      puVar6 = puVar2;
    } while (puVar2 != puVar5);
    puVar5 = (undefined8 *)param_1[1];
    puVar2 = (undefined8 *)param_1[2];
  }
  if (puVar2 != puVar5) {
    param_1[2] = (long)puVar2 + ((long)puVar5 + (7 - (long)puVar2) & 0xfffffffffffffff8U);
  }
  if (*param_1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 10a04f808; end: 10a04f83b;  */

long * FUN_10a04f808(void)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  long *plVar6;
  
  plVar4 = (long *)0x8;
  ___cxa_allocate_exception();
  *plVar4 = (long)(PTR___ZTVSt19bad_optional_access_110346b78 + 0x10);
  ___cxa_throw();
  plVar6 = (long *)plVar4[1];
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
  return plVar4;
}



/* Entry: 10a04f83c; end: 10a04f893;  */

long FUN_10a04f83c(long param_1)

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



/* Entry: 10a04f894; end: 10a04f9fb;  */

long * FUN_10a04f894(undefined8 *param_1,long *param_2)

{
  ulong uVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long *plVar5;
  undefined8 uVar6;
  long lVar7;
  long *plVar8;
  ulong uVar9;
  long *plVar10;
  long *plVar11;
  long *plVar12;
  long lVar13;
  long *plVar14;
  long *plStack_78;
  long *plStack_70;
  long *plStack_68;
  long *plStack_60;
  undefined8 *puStack_58;
  
  plVar10 = (long *)*param_1;
  plVar12 = (long *)param_1[1];
  lVar13 = (long)plVar12 - (long)plVar10 >> 3;
  uVar1 = lVar13 + 1;
  if (uVar1 >> 0x3d != 0) {
    FUN_10a04f9fc();
LAB_10a04f9f8:
    func_0x000109ffded8();
    plVar10 = (long *)&UNK_10f6334ac;
    FUN_109ffde64();
    plVar12 = (long *)plVar10[1];
    plVar4 = (long *)plVar10[2];
    while (plVar4 != plVar12) {
      plVar4 = plVar4 + -1;
      lVar13 = *plVar4;
      plVar10[2] = (long)plVar4;
      if (lVar13 != 0) {
        func_0x0001092b4274();
        plVar4 = (long *)plVar10[2];
      }
    }
    if (*plVar10 != 0) {
      __ZdlPv();
    }
    return plVar10;
  }
  uVar9 = param_1[2] - (long)plVar10 >> 2;
  if (uVar9 <= uVar1) {
    uVar9 = uVar1;
  }
  if (0x7ffffffffffffff7 < (ulong)(param_1[2] - (long)plVar10)) {
    uVar9 = 0x1fffffffffffffff;
  }
  puStack_58 = param_1;
  if (uVar9 == 0) {
    plVar4 = (long *)0x0;
  }
  else {
    if (uVar9 >> 0x3d != 0) goto LAB_10a04f9f8;
    plVar4 = (long *)(uVar9 << 3);
    __Znwm();
  }
  plStack_70 = (long *)((long)plVar4 + ((long)plVar12 - (long)plVar10));
  plStack_60 = plVar4 + uVar9;
  lVar7 = *param_2;
  *plStack_70 = lVar7;
  if (lVar7 != 0) {
    plVar10 = (long *)(lVar7 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar3) {
        *plVar10 = *plVar10 + 0x200000000;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    plVar10 = (long *)*param_1;
    plVar12 = (long *)param_1[1];
    lVar13 = (long)plVar12 - (long)plVar10 >> 3;
  }
  plStack_68 = plStack_70 + 1;
  plVar14 = plStack_70 + -lVar13;
  plVar5 = plVar14;
  plVar8 = plVar10;
  plVar11 = plStack_68;
  if (plVar10 != plVar12) {
    do {
      *plVar5 = *plVar8;
      plVar11 = plVar8 + 1;
      *plVar8 = 0;
      plVar5 = plVar5 + 1;
      plVar8 = plVar11;
      plStack_78 = plVar4;
    } while (plVar11 != plVar12);
    do {
      if (*plVar10 != 0) {
        func_0x0001092b4274(plVar10);
      }
      plVar10 = plVar10 + 1;
    } while (plVar10 != plVar12);
    plVar10 = (long *)*param_1;
    plVar11 = plStack_68;
  }
  *param_1 = plVar14;
  param_1[1] = plVar11;
  uVar6 = param_1[2];
  param_1[2] = plStack_60;
  plStack_78 = plVar10;
  plStack_70 = plVar10;
  plStack_68 = plVar10;
  plStack_60 = (long *)uVar6;
  FUN_10a04fa10(&plStack_78);
  return plVar11;
}



/* Entry: 10a04f9fc; end: 10a04fa0f;  */

long * FUN_10a04f9fc(void)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  
  plVar2 = (long *)&UNK_10f6334ac;
  FUN_109ffde64();
  plVar1 = (long *)plVar2[1];
  plVar3 = (long *)plVar2[2];
  while (plVar3 != plVar1) {
    plVar3 = plVar3 + -1;
    lVar4 = *plVar3;
    plVar2[2] = (long)plVar3;
    if (lVar4 != 0) {
      func_0x0001092b4274();
      plVar3 = (long *)plVar2[2];
    }
  }
  if (*plVar2 != 0) {
    __ZdlPv();
  }
  return plVar2;
}



/* Entry: 10a04fa10; end: 10a04fa5f;  */

long * FUN_10a04fa10(long *param_1)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  
  plVar1 = (long *)param_1[1];
  plVar2 = (long *)param_1[2];
  while (plVar2 != plVar1) {
    plVar2 = plVar2 + -1;
    lVar3 = *plVar2;
    param_1[2] = (long)plVar2;
    if (lVar3 != 0) {
      func_0x0001092b4274();
      plVar2 = (long *)param_1[2];
    }
  }
  if (*param_1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 10a04fa60; end: 10a04fb1f;  */

void FUN_10a04fa60(long param_1,undefined8 *param_2)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  ulong uVar5;
  long lVar6;
  long *plVar7;
  long lVar8;
  undefined8 uVar9;
  
  plVar7 = (long *)(param_1 + 0x30);
  lVar8 = *plVar7;
  plVar4 = (long *)(lVar8 + 0x10);
  do {
    lVar6 = *plVar4;
    if (lVar6 == 0) {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar4,0x10);
      if (bVar3) {
        *plVar4 = 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
      if (cVar2 == '\0') {
        if (*(char *)(lVar8 + 0xa8) == '\x01') {
          FUN_10a07a538(lVar8 + 0x98);
        }
        uVar9 = *param_2;
        *(undefined8 *)(lVar8 + 0xa0) = param_2[1];
        *(undefined8 *)(lVar8 + 0x98) = uVar9;
        *param_2 = 0;
        param_2[1] = 0;
        *(undefined1 *)(lVar8 + 0xa8) = 1;
        *(undefined8 *)(lVar8 + 0x10) = 2;
        FUN_109d1b4dc(lVar8 + 0x18);
        goto LAB_10a04faf0;
      }
    }
    else {
      ClearExclusiveLocal();
    }
    if (((uint)lVar6 >> 1 & 1) != 0) {
LAB_10a04faf0:
      plVar4 = (long *)*plVar7;
      *plVar7 = 0;
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
        FUN_109d1b3c4(plVar4,1,plVar7);
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
  } while( true );
}



/* Entry: 10a04fb20; end: 10a04fe7f;  */

/* WARNING: Removing unreachable block (ram,0x00010a04fbe0) */

void FUN_10a04fb20(long *param_1,long *param_2)

{
  ulong *puVar1;
  undefined8 ***pppuVar2;
  char cVar3;
  bool bVar4;
  code *pcVar5;
  undefined8 *puVar6;
  long *plVar7;
  undefined8 in_x6;
  undefined8 in_x7;
  long lVar8;
  undefined8 uVar9;
  ulong uVar10;
  long lVar11;
  long *plVar12;
  undefined1 auStack_60 [8];
  undefined8 **ppuStack_58;
  long *plStack_50;
  undefined8 uStack_48;
  
  puVar6 = (undefined8 *)0x60;
  __Znwm();
  *puVar6 = FUN_10a08c5a0;
  puVar6[1] = FUN_10a08c80c;
  puVar6[10] = param_2;
  FUN_10a04fe80(puVar6 + 2);
  lVar8 = puVar6[7];
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
  lVar8 = *param_2;
  puVar6[9] = lVar8;
  plVar7 = (long *)(lVar8 + 8);
  do {
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar7,0x10);
    if (bVar4) {
      *plVar7 = *plVar7 + 4;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  if (((uint)*(undefined8 *)(puVar6[9] + 0x10) >> 1 & 1) == 0) {
    *(undefined1 *)(puVar6 + 0xb) = 0;
    lVar8 = puVar6[9];
    plVar7 = (long *)(lVar8 + 0x10);
    uVar9 = puVar6[3];
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
          ppuStack_58 = (undefined8 **)0x0;
          plStack_50 = puVar6;
          uStack_48 = uVar9;
          func_0x000109d1b588(lVar8 + 0x18,&ppuStack_58);
          *(undefined8 *)(lVar8 + 0x10) = 0;
          return;
        }
      }
      else {
        ClearExclusiveLocal();
      }
    } while (((uint)lVar11 >> 1 & 1) == 0);
  }
  uVar9 = *(undefined8 *)(puVar6[9] + 0x10);
  plVar7 = (long *)puVar6[9];
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
  if (((uint)uVar9 >> 5 & 1) == 0) {
    func_0x0001092af8bc(puVar6[10]);
    if ((*(byte *)(*(long *)puVar6[10] + 0x178) & 1) != 0) {
      if (*(int *)(*(long *)puVar6[10] + 0x170) == 3) {
        func_0x0001092af8bc();
        if ((*(byte *)(*(long *)puVar6[10] + 0x178) & 1) != 0) {
          FUN_10a038940(&ppuStack_58,*(long *)puVar6[10] + 0x98);
          if ((undefined8 ***)ppuStack_58 != (undefined8 ***)0x0) {
            FUN_10a04fa60(puVar6 + 2,&ppuStack_58);
            if (plStack_50 != (long *)0x0) {
              plVar7 = plStack_50 + 1;
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
                (**(code **)(*plStack_50 + 0x10))(plStack_50);
                __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_50);
              }
            }
            func_0x000109d1a1d0(puVar6 + 2);
            __ZdlPv(puVar6);
            return;
          }
          func_0x000105688514(&UNK_10f63434e);
        }
      }
      else {
        func_0x000105688514(&UNK_10f6342d5);
      }
    }
  }
  else {
    if ((bRam000000011330a9e8 & 1) != 0) {
      lVar8 = ((long *)puVar6[10])[1];
      plVar12 = (long *)(lVar8 + 0xe8);
      plVar7 = (long *)*plVar12;
      cVar3 = *(char *)(lVar8 + 0xff);
      __ZNSt13exception_ptrC1ERKS_(auStack_60,*(long *)puVar6[10] + 0x90);
      func_0x0001098bc760(&ppuStack_58,auStack_60);
      if (-1 < cVar3) {
        plVar7 = plVar12;
      }
      pppuVar2 = (undefined8 ***)ppuStack_58;
      if (-1 < uStack_48) {
        pppuVar2 = &ppuStack_58;
      }
      func_0x00010ae06f08(0,1,&UNK_10f632cca,&UNK_10f634388,0x129,&UNK_10f634425,in_x6,in_x7,plVar7,
                          pppuVar2);
      if (uStack_48._7_1_ < '\0') {
        __ZdlPv(ppuStack_58);
      }
      __ZNSt13exception_ptrD1Ev(auStack_60);
    }
    __ZNSt13exception_ptrC1ERKS_(&ppuStack_58,*(long *)puVar6[10] + 0x90);
    func_0x0001092af97c(&ppuStack_58);
  }
                    /* WARNING: Does not return */
  pcVar5 = (code *)SoftwareBreakpoint(1,0x10a04fd74);
  (*pcVar5)();
}



/* Entry: 10a04fe80; end: 10a04ff1f;  */

undefined8 * FUN_10a04fe80(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined **ppuVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  puVar1 = (undefined8 *)0xb0;
  __Znwm();
  puVar1[2] = 0;
  puVar1[1] = 0x200000006;
  *(undefined2 *)(puVar1 + 3) = 4;
  uVar3 = 0;
  uVar4 = 0;
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
  puVar1[0x10] = 0;
  puVar1[0x11] = puVar1 + 3;
  puVar1[0x12] = 0;
  *puVar1 = &PTR_FUN_110b9f028;
  *(undefined1 *)(puVar1 + 0x13) = 0;
  *(undefined1 *)(puVar1 + 0x15) = 0;
  ppuVar2 = &PTR___tlv_bootstrap_11340dd98;
  (*(code *)PTR___tlv_bootstrap_11340dd98)();
  param_1[1] = uVar4;
  *param_1 = uVar3;
  param_1[3] = uVar4;
  param_1[2] = uVar3;
  param_1[4] = 0;
  FUN_109d18960(param_1,*ppuVar2,0);
  param_1[5] = puVar1;
  param_1[6] = puVar1;
  return param_1;
}



/* Entry: 10a04ff20; end: 10a04ffd3;  */

undefined8 * FUN_10a04ff20(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110b9f028;
  if (*(char *)(param_1 + 0x15) == '\x01') {
    FUN_10a07a538(param_1 + 0x13);
  }
  *param_1 = &PTR_DAT_110ae8be8;
  __ZNSt13exception_ptrD1Ev(param_1 + 0x12);
  *param_1 = &PTR_DAT_110ae8c08;
  return param_1;
}



/* Entry: 10a04ffd4; end: 10a04ffe7;  */

void FUN_10a04ffd4(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,long param_4)

{
  undefined8 *puVar1;
  
  FUN_109ffde64(&UNK_10f6334ac);
  if ((undefined8 *)0x249249249249249 < param_2) {
    func_0x000109ffded8();
    puVar1 = param_2;
    if (param_2 != param_3) {
      do {
        FUN_10a0500e4(param_4,puVar1);
        puVar1 = puVar1 + 0xe;
        param_4 = param_4 + 0x70;
      } while (puVar1 != param_3);
      do {
        puVar1 = param_2 + 0xe;
        (**(code **)*param_2)(param_2);
        param_2 = puVar1;
      } while (puVar1 != param_3);
    }
    return;
  }
  __Znwm((long)param_2 * 0x70);
  return;
}



/* Entry: 10a04ffe8; end: 10a05002f;  */

void FUN_10a04ffe8(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,long param_4)

{
  undefined8 *puVar1;
  
  if ((undefined8 *)0x249249249249249 < param_2) {
    func_0x000109ffded8();
    puVar1 = param_2;
    if (param_2 != param_3) {
      do {
        FUN_10a0500e4(param_4,puVar1);
        puVar1 = puVar1 + 0xe;
        param_4 = param_4 + 0x70;
      } while (puVar1 != param_3);
      do {
        puVar1 = param_2 + 0xe;
        (**(code **)*param_2)(param_2);
        param_2 = puVar1;
      } while (puVar1 != param_3);
    }
    return;
  }
  __Znwm((long)param_2 * 0x70);
  return;
}



/* Entry: 10a050030; end: 10a0500e3;  */

void FUN_10a050030(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,long param_4)

{
  undefined8 *puVar1;
  
  puVar1 = param_2;
  if (param_2 != param_3) {
    do {
      FUN_10a0500e4(param_4,puVar1);
      puVar1 = puVar1 + 0xe;
      param_4 = param_4 + 0x70;
    } while (puVar1 != param_3);
    do {
      puVar1 = param_2 + 0xe;
      (**(code **)*param_2)(param_2);
      param_2 = puVar1;
    } while (puVar1 != param_3);
  }
  return;
}



/* Entry: 10a0500e4; end: 10a0501b3;  */

undefined8 * FUN_10a0500e4(undefined8 *param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  
  *param_1 = &PTR_DAT_110b17898;
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
  *param_1 = &PTR_DAT_110b9f078;
  uVar6 = *(undefined8 *)(param_2 + 0x20);
  uVar5 = *(undefined8 *)(param_2 + 0x18);
  uVar8 = *(undefined8 *)(param_2 + 0x30);
  uVar7 = *(undefined8 *)(param_2 + 0x28);
  uVar10 = *(undefined8 *)(param_2 + 0x40);
  uVar9 = *(undefined8 *)(param_2 + 0x38);
  uVar11 = *(undefined8 *)(param_2 + 0x48);
  param_1[10] = *(undefined8 *)(param_2 + 0x50);
  param_1[9] = uVar11;
  param_1[8] = uVar10;
  param_1[7] = uVar9;
  param_1[6] = uVar8;
  param_1[5] = uVar7;
  param_1[4] = uVar6;
  param_1[3] = uVar5;
  if (*(char *)(param_2 + 0x6f) < '\0') {
    func_0x000107c3192c(param_1 + 0xb,*(undefined8 *)(param_2 + 0x58),
                        *(undefined8 *)(param_2 + 0x60));
  }
  else {
    uVar6 = *(undefined8 *)(param_2 + 0x60);
    uVar5 = *(undefined8 *)(param_2 + 0x58);
    param_1[0xd] = *(undefined8 *)(param_2 + 0x68);
    param_1[0xc] = uVar6;
    param_1[0xb] = uVar5;
  }
  return param_1;
}



/* Entry: 10a0501b4; end: 10a050203;  */

long * FUN_10a0501b4(long *param_1)

{
  long lVar1;
  long lVar2;
  undefined8 *puVar3;
  
  lVar1 = param_1[1];
  lVar2 = param_1[2];
  while (lVar2 != lVar1) {
    puVar3 = *(undefined8 **)(lVar2 + -0x70);
    param_1[2] = (long)(lVar2 + -0x70);
    (*(code *)*puVar3)();
    lVar2 = param_1[2];
  }
  if (*param_1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 10a050204; end: 10a050343;  */

long * FUN_10a050204(long *param_1,undefined8 param_2)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  undefined8 *puVar8;
  long *plStack_58;
  long *plStack_50;
  long *plStack_48;
  long *plStack_40;
  long *plStack_38;
  
  lVar7 = param_1[1] - *param_1;
  uVar5 = (lVar7 >> 4) * 0x6db6db6db6db6db7 + 1;
  if (uVar5 < 0x24924924924924a) {
    lVar4 = param_1[2] - *param_1 >> 4;
    uVar6 = lVar4 * -0x2492492492492492;
    if (uVar6 < uVar5 || uVar6 - uVar5 == 0) {
      uVar6 = uVar5;
    }
    if (0x124924924924923 < (ulong)(lVar4 * 0x6db6db6db6db6db7)) {
      uVar6 = 0x249249249249249;
    }
    plStack_38 = param_1;
    if (uVar6 == 0) {
      plVar1 = (long *)0x0;
    }
    else {
      plVar1 = param_1;
      FUN_10a04ffe8();
    }
    lVar7 = (long)plVar1 + lVar7;
    plStack_40 = plVar1 + uVar6 * 0xe;
    plStack_58 = plVar1;
    plStack_50 = (long *)lVar7;
    plStack_48 = (long *)lVar7;
    FUN_10a0500e4(lVar7,param_2);
    plStack_48 = (long *)(lVar7 + 0x70);
    lVar7 = lVar7 + (*param_1 - param_1[1]);
    FUN_10a050030(param_1,*param_1,param_1[1],lVar7);
    plVar1 = plStack_48;
    plStack_58 = (long *)*param_1;
    *param_1 = lVar7;
    lVar7 = param_1[2];
    param_1[2] = (long)plStack_40;
    param_1[1] = (long)plStack_48;
    plStack_50 = plStack_58;
    plStack_48 = plStack_58;
    plStack_40 = (long *)lVar7;
    FUN_10a0501b4(&plStack_58);
    return plVar1;
  }
  FUN_10a04ffd4();
  FUN_10a0501b4(&plStack_58);
  __Unwind_Resume();
  puVar8 = (undefined8 *)*param_1;
  plVar1 = (long *)*puVar8;
  if (plVar1 == (long *)0x0) {
    return param_1;
  }
  plVar3 = (long *)puVar8[1];
  plVar2 = plVar1;
  if (plVar3 != plVar1) {
    do {
      plVar3 = plVar3 + -0xe;
      (**(code **)*plVar3)(plVar3);
    } while (plVar3 != plVar1);
    plVar2 = *(long **)*param_1;
  }
  puVar8[1] = plVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(plVar2);
  return plVar2;
}



/* Entry: 10a050344; end: 10a0503cf;  */

void FUN_10a050344(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  puVar3 = (undefined8 *)*param_1;
  puVar4 = (undefined8 *)*puVar3;
  if (puVar4 == (undefined8 *)0x0) {
    return;
  }
  puVar2 = (undefined8 *)puVar3[1];
  puVar1 = puVar4;
  if (puVar2 != puVar4) {
    do {
      puVar2 = puVar2 + -0xe;
      (**(code **)*puVar2)(puVar2);
    } while (puVar2 != puVar4);
    puVar1 = *(undefined8 **)*param_1;
  }
  puVar3[1] = puVar4;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(puVar1);
  return;
}



/* Entry: 10a0503d0; end: 10a05047f;  */

undefined8 *
FUN_10a0503d0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 *param_6,undefined8 param_7,byte param_8,
             undefined8 *param_9,undefined8 *param_10)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  param_6[1] = 0;
  param_6[2] = 0;
  *param_6 = &PTR_DAT_110b9f078;
  *(byte *)(param_6 + 3) = param_8 & 1;
  if ((param_8 & 1) == 0) {
    param_7 = 0;
  }
  param_6[4] = param_7;
  param_6[5] = param_1;
  param_6[6] = param_2;
  param_6[7] = param_3;
  param_6[8] = param_4;
  param_6[9] = param_5;
  param_6[10] = *param_9;
  if (*(char *)((long)param_10 + 0x17) < '\0') {
    func_0x000107c3192c(param_6 + 0xb,*param_10,param_10[1]);
  }
  else {
    uVar2 = param_10[1];
    uVar1 = *param_10;
    param_6[0xd] = param_10[2];
    param_6[0xc] = uVar2;
    param_6[0xb] = uVar1;
  }
  return param_6;
}



/* Entry: 10a050480; end: 10a050557;  */

undefined8 * FUN_10a050480(undefined8 *param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  
  *param_1 = &PTR_DAT_110b17898;
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
  *param_1 = &PTR_DAT_110b9f078;
  uVar6 = *(undefined8 *)(param_2 + 0x20);
  uVar5 = *(undefined8 *)(param_2 + 0x18);
  uVar8 = *(undefined8 *)(param_2 + 0x30);
  uVar7 = *(undefined8 *)(param_2 + 0x28);
  uVar10 = *(undefined8 *)(param_2 + 0x40);
  uVar9 = *(undefined8 *)(param_2 + 0x38);
  uVar11 = *(undefined8 *)(param_2 + 0x48);
  param_1[10] = *(undefined8 *)(param_2 + 0x50);
  param_1[9] = uVar11;
  param_1[8] = uVar10;
  param_1[7] = uVar9;
  param_1[6] = uVar8;
  param_1[5] = uVar7;
  param_1[4] = uVar6;
  param_1[3] = uVar5;
  if (*(char *)(param_2 + 0x6f) < '\0') {
    func_0x000107c3192c(param_1 + 0xb,*(undefined8 *)(param_2 + 0x58),
                        *(undefined8 *)(param_2 + 0x60));
  }
  else {
    uVar6 = *(undefined8 *)(param_2 + 0x60);
    uVar5 = *(undefined8 *)(param_2 + 0x58);
    param_1[0xd] = *(undefined8 *)(param_2 + 0x68);
    param_1[0xc] = uVar6;
    param_1[0xb] = uVar5;
  }
  *(undefined1 *)(param_1 + 0xe) = 1;
  return param_1;
}



/* Entry: 10a050558; end: 10a050733;  */

void FUN_10a050558(long *param_1,long *param_2,undefined4 *param_3,undefined8 param_4)

{
  long lVar1;
  code *pcVar2;
  long lVar3;
  ulong uVar4;
  double dVar5;
  double dVar6;
  long lStack_70;
  long lStack_68;
  long lStack_60;
  
  FUN_10a05077c(&lStack_70,param_2[1]);
  if (*param_1 != 0) {
    param_1[1] = *param_1;
    __ZdlPv();
  }
  param_1[1] = lStack_68;
  *param_1 = lStack_70;
  param_1[2] = lStack_60;
  if (param_2[1] != 0) {
    lVar3 = 0;
    uVar4 = 0;
    do {
      lVar1 = *param_1;
      if ((ulong)(param_1[1] - lVar1 >> 3) <= uVar4) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x10a050648);
        (*pcVar2)();
      }
      dVar5 = *(double *)(*param_2 + lVar3) +
              (double)(ulong)(*(long *)(param_3 + 2) * (long)(int)param_4);
      dVar6 = ((double *)(*param_2 + lVar3))[1] +
              (double)(ulong)(*(long *)(param_3 + 4) * (long)(int)param_4);
      FUN_10a833e04(*param_3,param_4);
      *(ulong *)(lVar1 + uVar4 * 8) = CONCAT44((float)dVar6,(float)dVar5);
      uVar4 = uVar4 + 1;
      lVar3 = lVar3 + 0x10;
    } while (uVar4 < (ulong)param_2[1]);
  }
  return;
}



/* Entry: 10a050734; end: 10a05074f;  */

void FUN_10a050734(void)

{
  return;
}



/* Entry: 10a050750; end: 10a050773;  */

void FUN_10a050750(undefined8 param_1)

{
  undefined8 uStack_18;
  
  uStack_18 = param_1;
  func_0x00010a050870(&uStack_18);
  return;
}



/* Entry: 10a050774; end: 10a05077b;  */

void FUN_10a050774(long *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lStack_38;
  
  lVar2 = *param_1;
  if (lVar2 != 0) {
    lVar3 = param_1[1];
    lVar1 = lVar2;
    if (lVar3 != lVar2) {
      do {
        lVar3 = lVar3 + -0x18;
        lStack_38 = lVar3;
        func_0x00010a050870(&lStack_38);
      } while (lVar3 != lVar2);
      lVar1 = *param_1;
    }
    param_1[1] = lVar2;
    __ZdlPv(lVar1);
  }
  return;
}



/* Entry: 10a05077c; end: 10a0507ef;  */

undefined8 * FUN_10a05077c(undefined8 *param_1,long param_2)

{
  long lVar1;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  if (param_2 != 0) {
    FUN_10a0507f0(param_1);
    lVar1 = param_1[1];
    _bzero(lVar1,param_2 << 3);
    param_1[1] = lVar1 + param_2 * 8;
  }
  return param_1;
}



/* Entry: 10a0507f0; end: 10a050827;  */

void FUN_10a0507f0(long *param_1,ulong param_2)

{
  long *plVar1;
  undefined8 *puVar2;
  
  if (param_2 >> 0x3d == 0) {
    plVar1 = param_1;
    FUN_10a05083c();
    *param_1 = (long)plVar1;
    param_1[1] = (long)plVar1;
    param_1[2] = (long)(plVar1 + param_2);
    return;
  }
  FUN_10a050828();
  puVar2 = (undefined8 *)&UNK_10f6334ac;
  FUN_109ffde64();
  if (param_2 >> 0x3d == 0) {
    __Znwm(param_2 << 3);
    return;
  }
  func_0x000109ffded8();
  if (*(long *)*puVar2 != 0) {
    FUN_10a0508b0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(*(undefined8 *)*puVar2);
    return;
  }
  return;
}



/* Entry: 10a050828; end: 10a05083b;  */

void FUN_10a050828(undefined8 param_1,ulong param_2)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)&UNK_10f6334ac;
  FUN_109ffde64();
  if (param_2 >> 0x3d == 0) {
    __Znwm(param_2 << 3);
    return;
  }
  func_0x000109ffded8();
  if (*(long *)*puVar1 != 0) {
    FUN_10a0508b0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(*(undefined8 *)*puVar1);
    return;
  }
  return;
}



/* Entry: 10a05083c; end: 10a0508af;  */

void FUN_10a05083c(undefined8 *param_1,ulong param_2)

{
  if (param_2 >> 0x3d == 0) {
    __Znwm(param_2 << 3);
    return;
  }
  func_0x000109ffded8();
  if (*(long *)*param_1 != 0) {
    FUN_10a0508b0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(*(undefined8 *)*param_1);
    return;
  }
  return;
}



/* Entry: 10a0508b0; end: 10a050903;  */

void FUN_10a0508b0(long *param_1)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  
  plVar1 = (long *)*param_1;
  plVar3 = (long *)param_1[1];
  while (plVar2 = plVar3, plVar2 != plVar1) {
    plVar3 = plVar2 + -3;
    if (*plVar3 != 0) {
      plVar2[-2] = *plVar3;
      __ZdlPv();
    }
  }
  param_1[1] = (long)plVar1;
  return;
}



/* Entry: 10a050904; end: 10a0509a3;  */

undefined8 * FUN_10a050904(undefined8 *param_1,long param_2)

{
  long lVar1;
  long lVar2;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  if (param_2 != 0) {
    FUN_10a0509a4(param_1);
    lVar2 = param_1[1];
    lVar1 = ((param_2 * 0x18 - 0x18U) / 0x18) * 0x18 + 0x18;
    _bzero(lVar2,lVar1);
    param_1[1] = lVar2 + lVar1;
  }
  return param_1;
}



/* Entry: 10a0509a4; end: 10a0509eb;  */

void FUN_10a0509a4(long *param_1,ulong param_2)

{
  long *plVar1;
  
  if (param_2 < 0xaaaaaaaaaaaaaab) {
    plVar1 = param_1;
    FUN_10a050a00();
    *param_1 = (long)plVar1;
    param_1[1] = (long)plVar1;
    param_1[2] = (long)(plVar1 + param_2 * 3);
    return;
  }
  FUN_10a0509ec();
  plVar1 = (long *)&UNK_10f6334ac;
  FUN_109ffde64();
  if (param_2 < 0xaaaaaaaaaaaaaab) {
    __Znwm(param_2 * 0x18);
    return;
  }
  func_0x000109ffded8();
  if (*plVar1 != 0) {
    FUN_10a0508b0();
    __ZdlPv(*plVar1);
    *plVar1 = 0;
    plVar1[1] = 0;
    plVar1[2] = 0;
  }
  return;
}



/* Entry: 10a0509ec; end: 10a0509ff;  */

void FUN_10a0509ec(undefined8 param_1,ulong param_2)

{
  long *plVar1;
  
  plVar1 = (long *)&UNK_10f6334ac;
  FUN_109ffde64();
  if (param_2 < 0xaaaaaaaaaaaaaab) {
    __Znwm(param_2 * 0x18);
    return;
  }
  func_0x000109ffded8();
  if (*plVar1 != 0) {
    FUN_10a0508b0();
    __ZdlPv(*plVar1);
    *plVar1 = 0;
    plVar1[1] = 0;
    plVar1[2] = 0;
  }
  return;
}



/* Entry: 10a050a00; end: 10a050a7b;  */

void FUN_10a050a00(long *param_1,ulong param_2)

{
  if (param_2 < 0xaaaaaaaaaaaaaab) {
    __Znwm(param_2 * 0x18);
    return;
  }
  func_0x000109ffded8();
  if (*param_1 != 0) {
    FUN_10a0508b0();
    __ZdlPv(*param_1);
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  return;
}



/* Entry: 10a050a7c; end: 10a050ae3;  */

void FUN_10a050a7c(long *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lStack_38;
  
  lVar2 = *param_1;
  if (lVar2 != 0) {
    lVar3 = param_1[1];
    lVar1 = lVar2;
    if (lVar3 != lVar2) {
      do {
        lVar3 = lVar3 + -0x18;
        lStack_38 = lVar3;
        func_0x00010a050870(&lStack_38);
      } while (lVar3 != lVar2);
      lVar1 = *param_1;
    }
    param_1[1] = lVar2;
    __ZdlPv(lVar1);
  }
  return;
}



/* Entry: 10a050ae4; end: 10a050af7;  */

undefined * FUN_10a050ae4(void)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  long lVar5;
  long *plVar6;
  
  puVar4 = &UNK_10f6334ac;
  FUN_109ffde64();
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
  return puVar4;
}



/* Entry: 10a050af8; end: 10a050ba7;  */

long FUN_10a050af8(long param_1)

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



/* Entry: 10a050ba8; end: 10a050baf;  */

void FUN_10a050ba8(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10a050bac);
  (*pcVar1)();
}



/* Entry: 10a050bb0; end: 10a050bdf;  */

long * FUN_10a050bb0(long *param_1)

{
  if (*param_1 != 0) {
    param_1[1] = *param_1;
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 10a050be0; end: 10a050ce7;  */

void FUN_10a050be0(long *param_1,long *param_2)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  
  plVar5 = (long *)param_1[1];
  if (plVar5 < (long *)param_1[2]) {
    lVar1 = param_2[1];
    lVar4 = *param_2;
    plVar5[2] = param_2[2];
    plVar5[1] = lVar1;
    *plVar5 = lVar4;
    plVar5 = plVar5 + 3;
LAB_10a050cc8:
    param_1[1] = (long)plVar5;
    return;
  }
  lVar4 = *param_1;
  uVar2 = ((long)plVar5 - lVar4 >> 3) * -0x5555555555555555 + 1;
  if (uVar2 < 0xaaaaaaaaaaaaaab) {
    lVar1 = param_1[2] - lVar4 >> 3;
    uVar3 = lVar1 * 0x5555555555555556;
    if (uVar3 < uVar2 || uVar3 - uVar2 == 0) {
      uVar3 = uVar2;
    }
    if (0x555555555555554 < (ulong)(lVar1 * -0x5555555555555555)) {
      uVar3 = 0xaaaaaaaaaaaaaaa;
    }
    if (uVar3 < 0xaaaaaaaaaaaaaab) {
      lVar1 = uVar3 * 0x18;
      __Znwm();
      plVar5 = (long *)(lVar1 + ((long)plVar5 - lVar4));
      lVar6 = *param_2;
      plVar5[1] = param_2[1];
      *plVar5 = lVar6;
      plVar5[2] = param_2[2];
      plVar5 = plVar5 + 3;
      _memcpy();
      *param_1 = lVar1;
      param_1[1] = (long)plVar5;
      param_1[2] = lVar1 + uVar3 * 0x18;
      if (lVar4 != 0) {
        __ZdlPv(lVar4);
      }
      goto LAB_10a050cc8;
    }
  }
  else {
    FUN_10a050e08();
  }
  func_0x000109ffded8();
  lVar4 = 0x40;
  __Znwm();
  lRam00000001137e93c8 = lVar4 + 0x40;
  lRam00000001137e93b8 = lVar4;
  if (param_1 != param_2) {
    lVar1 = ((long)param_2 + (-8 - (long)param_1) & 0xfffffffffffffff8U) + 8;
    lRam00000001137e93c0 = lVar4;
    _memcpy(lVar4,param_1,lVar1);
    lVar4 = lVar4 + lVar1;
  }
  lRam00000001137e93c0 = lVar4;
  return;
}



/* Entry: 10a050ce8; end: 10a050d87;  */

void FUN_10a050ce8(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  
  lVar2 = 0x40;
  __Znwm();
  lRam00000001137e93c8 = lVar2 + 0x40;
  lRam00000001137e93b8 = lVar2;
  if (param_1 != param_2) {
    lVar1 = ((param_2 - param_1) - 8U & 0xfffffffffffffff8) + 8;
    lRam00000001137e93c0 = lVar2;
    _memcpy(lVar2,param_1,lVar1);
    lVar2 = lVar2 + lVar1;
  }
  lRam00000001137e93c0 = lVar2;
  return;
}



/* Entry: 10a050d88; end: 10a050dbf;  */

void FUN_10a050d88(long *param_1,ulong param_2)

{
  undefined1 uVar1;
  long *plVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined1 auStack_a0 [8];
  undefined8 uStack_98;
  
  if (param_2 >> 0x3d == 0) {
    plVar2 = param_1;
    FUN_10a050dd4();
    *param_1 = (long)plVar2;
    param_1[1] = (long)plVar2;
    param_1[2] = (long)(plVar2 + param_2);
    return;
  }
  FUN_10a050dc0();
  FUN_109ffde64(&UNK_10f6334ac);
  if (param_2 >> 0x3d == 0) {
    __Znwm(param_2 << 3);
    return;
  }
  func_0x000109ffded8();
  puVar3 = &UNK_10f6334ac;
  FUN_109ffde64();
  FUN_10a0511a0(param_2);
  func_0x000109381b20(auStack_a0,param_2);
  uVar1 = puVar3[0x30];
  puVar3[0x30] = auStack_a0[0];
  uVar4 = *(undefined8 *)(puVar3 + 0x38);
  *(undefined8 *)(puVar3 + 0x38) = uStack_98;
  auStack_a0[0] = uVar1;
  uStack_98 = uVar4;
  func_0x000109380ffc(&uStack_98);
  return;
}



/* Entry: 10a050dc0; end: 10a050dd3;  */

void FUN_10a050dc0(undefined8 param_1,ulong param_2)

{
  undefined1 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined1 auStack_80 [8];
  undefined8 uStack_78;
  
  FUN_109ffde64(&UNK_10f6334ac);
  if (param_2 >> 0x3d == 0) {
    __Znwm(param_2 << 3);
    return;
  }
  func_0x000109ffded8();
  puVar2 = &UNK_10f6334ac;
  FUN_109ffde64();
  FUN_10a0511a0(param_2);
  func_0x000109381b20(auStack_80,param_2);
  uVar1 = puVar2[0x30];
  puVar2[0x30] = auStack_80[0];
  uVar3 = *(undefined8 *)(puVar2 + 0x38);
  *(undefined8 *)(puVar2 + 0x38) = uStack_78;
  auStack_80[0] = uVar1;
  uStack_78 = uVar3;
  func_0x000109380ffc(&uStack_78);
  return;
}



/* Entry: 10a050dd4; end: 10a050e07;  */

void FUN_10a050dd4(undefined8 param_1,ulong param_2)

{
  undefined1 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined1 auStack_70 [8];
  undefined8 uStack_68;
  
  if (param_2 >> 0x3d == 0) {
    __Znwm(param_2 << 3);
    return;
  }
  func_0x000109ffded8();
  puVar2 = &UNK_10f6334ac;
  FUN_109ffde64();
  FUN_10a0511a0(param_2);
  func_0x000109381b20(auStack_70,param_2);
  uVar1 = puVar2[0x30];
  puVar2[0x30] = auStack_70[0];
  uVar3 = *(undefined8 *)(puVar2 + 0x38);
  *(undefined8 *)(puVar2 + 0x38) = uStack_68;
  auStack_70[0] = uVar1;
  uStack_68 = uVar3;
  func_0x000109380ffc(&uStack_68);
  return;
}



/* Entry: 10a050e08; end: 10a050e1b;  */

void FUN_10a050e08(undefined8 param_1,undefined8 param_2)

{
  undefined1 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined1 auStack_50 [8];
  undefined8 uStack_48;
  
  puVar2 = &UNK_10f6334ac;
  FUN_109ffde64();
  FUN_10a0511a0(param_2);
  func_0x000109381b20(auStack_50,param_2);
  uVar1 = puVar2[0x30];
  puVar2[0x30] = auStack_50[0];
  uVar3 = *(undefined8 *)(puVar2 + 0x38);
  *(undefined8 *)(puVar2 + 0x38) = uStack_48;
  auStack_50[0] = uVar1;
  uStack_48 = uVar3;
  func_0x000109380ffc(&uStack_48);
  return;
}



/* Entry: 10a050e1c; end: 10a050e8b;  */

void FUN_10a050e1c(long param_1,undefined8 param_2)

{
  undefined1 uVar1;
  undefined8 uVar2;
  undefined1 auStack_40 [8];
  undefined8 uStack_38;
  
  FUN_10a0511a0(param_2);
  func_0x000109381b20(auStack_40,param_2);
  uVar1 = *(undefined1 *)(param_1 + 0x30);
  *(undefined1 *)(param_1 + 0x30) = auStack_40[0];
  uVar2 = *(undefined8 *)(param_1 + 0x38);
  *(undefined8 *)(param_1 + 0x38) = uStack_38;
  auStack_40[0] = uVar1;
  uStack_38 = uVar2;
  func_0x000109380ffc(&uStack_38);
  return;
}



/* Entry: 10a050e8c; end: 10a050e9b;  */

void FUN_10a050e8c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110b9f2c8;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10a050e9c; end: 10a050ebb;  */

void FUN_10a050e9c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110b9f2c8;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a050ebc; end: 10a050ecb;  */

void FUN_10a050ebc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010a050ec4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 10a050ecc; end: 10a050ffb;  */

/* WARNING: Possible PIC construction at 0x00010a050fa8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010a050fac) */

void FUN_10a050ecc(long *param_1,undefined1 *param_2,undefined1 *param_3,undefined1 *param_4)

{
  ulong uVar1;
  undefined1 **ppuVar2;
  long *plVar3;
  undefined1 *puVar4;
  ulong uVar5;
  ulong uVar6;
  undefined1 *puVar7;
  long lVar8;
  undefined1 **ppuVar9;
  undefined8 uVar10;
  undefined1 *puStack_90;
  long *plStack_88;
  undefined1 *puStack_80;
  code *pcStack_78;
  undefined1 **ppuStack_70;
  code *pcStack_68;
  undefined1 auStack_60 [8];
  long *plStack_58;
  undefined1 *puStack_50;
  undefined1 *puStack_48;
  long *plStack_40;
  long *plStack_38;
  
  ppuVar2 = (undefined1 **)auStack_60;
  ppuVar9 = (undefined1 **)&stack0xfffffffffffffff0;
  puVar4 = (undefined1 *)param_1[1];
  if (puVar4 < (undefined1 *)param_1[2]) {
    *puVar4 = *param_2;
    *(undefined8 *)(puVar4 + 8) = *(undefined8 *)(param_2 + 8);
    *param_2 = 0;
    *(undefined8 *)(param_2 + 8) = 0;
    param_1[1] = (long)(puVar4 + 0x10);
    return;
  }
  lVar8 = (long)puVar4 - *param_1;
  uVar1 = (lVar8 >> 4) + 1;
  if (uVar1 >> 0x3c == 0) {
    uVar5 = param_1[2] - *param_1;
    uVar6 = (long)uVar5 >> 3;
    if (uVar6 <= uVar1) {
      uVar6 = uVar1;
    }
    if (0x7fffffffffffffef < uVar5) {
      uVar6 = 0xfffffffffffffff;
    }
    plStack_38 = param_1;
    if (uVar6 == 0) {
      plVar3 = (long *)0x0;
    }
    else {
      plVar3 = param_1;
      FUN_10a051010();
    }
    puStack_50 = (undefined1 *)((long)plVar3 + lVar8);
    plStack_40 = plVar3 + uVar6 * 2;
    *puStack_50 = *param_2;
    *(undefined8 *)(puStack_50 + 8) = *(undefined8 *)(param_2 + 8);
    *param_2 = 0;
    *(undefined8 *)(param_2 + 8) = 0;
    puStack_48 = puStack_50 + 0x10;
    puVar4 = (undefined1 *)*param_1;
    param_3 = (undefined1 *)param_1[1];
    param_4 = puStack_50 + ((long)puVar4 - (long)param_3);
    uVar10 = 0x10a050fac;
    param_2 = param_4;
    plStack_58 = plVar3;
  }
  else {
    puVar4 = param_2;
    FUN_10a050ffc();
    func_0x000109381644(&plStack_58);
    __Unwind_Resume(param_1);
    pcStack_68 = FUN_10a050ffc;
    ppuStack_70 = ppuVar9;
    FUN_109ffde64(&UNK_10f6334ac);
    ppuVar2 = &puStack_90;
    pcStack_78 = FUN_10a051010;
    ppuVar9 = &puStack_80;
    puStack_90 = param_2;
    plStack_88 = param_1;
    if ((ulong)puVar4 >> 0x3c == 0) {
      puStack_80 = (undefined1 *)&ppuStack_70;
      __Znwm((long)puVar4 << 4);
      return;
    }
    uVar10 = 0x10a051044;
    puStack_80 = (undefined1 *)&ppuStack_70;
    func_0x000109ffded8();
  }
  if (puVar4 != param_3) {
    *(undefined1 **)((long)ppuVar2 + -0x20) = param_2;
    *(long **)((long)ppuVar2 + -0x18) = param_1;
    *(undefined1 ***)((long)ppuVar2 + -0x10) = ppuVar9;
    *(undefined8 *)((long)ppuVar2 + -8) = uVar10;
    puVar7 = puVar4;
    do {
      *param_4 = *puVar7;
      *(undefined8 *)(param_4 + 8) = *(undefined8 *)(puVar7 + 8);
      *puVar7 = 0;
      *(undefined8 *)(puVar7 + 8) = 0;
      puVar7 = puVar7 + 0x10;
      param_4 = param_4 + 0x10;
    } while (puVar7 != param_3);
    do {
      puVar7 = puVar4 + 0x10;
      func_0x000109380ffc(puVar4 + 8,*puVar4);
      puVar4 = puVar7;
    } while (puVar7 != param_3);
  }
  return;
}



/* Entry: 10a050ffc; end: 10a05100f;  */

void FUN_10a050ffc(undefined8 param_1,undefined1 *param_2,undefined1 *param_3,undefined1 *param_4)

{
  undefined1 *puVar1;
  
  FUN_109ffde64(&UNK_10f6334ac);
  if ((ulong)param_2 >> 0x3c != 0) {
    func_0x000109ffded8();
    puVar1 = param_2;
    if (param_2 != param_3) {
      do {
        *param_4 = *puVar1;
        *(undefined8 *)(param_4 + 8) = *(undefined8 *)(puVar1 + 8);
        *puVar1 = 0;
        *(undefined8 *)(puVar1 + 8) = 0;
        puVar1 = puVar1 + 0x10;
        param_4 = param_4 + 0x10;
      } while (puVar1 != param_3);
      do {
        puVar1 = param_2 + 0x10;
        func_0x000109380ffc(param_2 + 8,*param_2);
        param_2 = puVar1;
      } while (puVar1 != param_3);
    }
    return;
  }
  __Znwm((long)param_2 << 4);
  return;
}



/* Entry: 10a051010; end: 10a0510b3;  */

void FUN_10a051010(undefined8 param_1,undefined1 *param_2,undefined1 *param_3,undefined1 *param_4)

{
  undefined1 *puVar1;
  
  if ((ulong)param_2 >> 0x3c != 0) {
    func_0x000109ffded8();
    puVar1 = param_2;
    if (param_2 != param_3) {
      do {
        *param_4 = *puVar1;
        *(undefined8 *)(param_4 + 8) = *(undefined8 *)(puVar1 + 8);
        *puVar1 = 0;
        *(undefined8 *)(puVar1 + 8) = 0;
        puVar1 = puVar1 + 0x10;
        param_4 = param_4 + 0x10;
      } while (puVar1 != param_3);
      do {
        puVar1 = param_2 + 0x10;
        func_0x000109380ffc(param_2 + 8,*param_2);
        param_2 = puVar1;
      } while (puVar1 != param_3);
    }
    return;
  }
  __Znwm((long)param_2 << 4);
  return;
}



/* Entry: 10a0510b4; end: 10a051117;  */

long FUN_10a0510b4(long param_1)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  
  if ((*(byte *)(param_1 + 0x18) & 1) == 0) {
    puVar2 = (undefined1 *)**(undefined8 **)(param_1 + 8);
    if ((undefined1 *)**(undefined8 **)(param_1 + 0x10) != puVar2) {
      puVar1 = (undefined1 *)**(undefined8 **)(param_1 + 0x10) + -8;
      do {
        puVar3 = puVar1 + -8;
        func_0x000109380ffc(puVar1,*puVar3);
        puVar1 = puVar1 + -0x10;
      } while (puVar3 != puVar2);
    }
  }
  return param_1;
}



/* Entry: 10a051118; end: 10a05119f;  */

void FUN_10a051118(undefined8 *param_1)

{
  undefined1 *puVar1;
  undefined8 *puVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  
  puVar2 = (undefined8 *)*param_1;
  puVar3 = (undefined1 *)*puVar2;
  if (puVar3 != (undefined1 *)0x0) {
    puVar1 = puVar3;
    if ((undefined1 *)puVar2[1] != puVar3) {
      puVar1 = (undefined1 *)puVar2[1] + -8;
      do {
        puVar4 = puVar1 + -8;
        func_0x000109380ffc(puVar1,*puVar4);
        puVar1 = puVar1 + -0x10;
      } while (puVar4 != puVar3);
      puVar1 = *(undefined1 **)*param_1;
    }
    puVar2[1] = puVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(puVar1);
    return;
  }
  return;
}



/* Entry: 10a0511a0; end: 10a0512e3;  */

void FUN_10a0511a0(undefined8 param_1)

{
  byte bVar1;
  code *pcVar2;
  byte *pbVar3;
  undefined1 auStack_110 [24];
  undefined1 auStack_f8 [48];
  undefined8 uStack_c8;
  char cStack_b1;
  undefined8 uStack_b0;
  char cStack_99;
  byte abStack_98 [32];
  long lStack_78;
  undefined8 uStack_68;
  char cStack_51;
  undefined8 uStack_50;
  char cStack_39;
  undefined8 uStack_38;
  
  uStack_38 = param_1;
  FUN_10a0512e4(abStack_98,&uStack_38);
  func_0x00010a051364(auStack_f8,&uStack_38);
  while( true ) {
    pbVar3 = abStack_98;
    func_0x00010937c708(pbVar3,auStack_f8);
    if ((int)pbVar3 != 0) {
      if (cStack_99 < '\0') {
        __ZdlPv(uStack_b0);
      }
      if (cStack_b1 < '\0') {
        __ZdlPv(uStack_c8);
      }
      if (cStack_39 < '\0') {
        __ZdlPv(uStack_50);
      }
      if (cStack_51 < '\0') {
        __ZdlPv(uStack_68);
      }
      return;
    }
    pbVar3 = abStack_98;
    func_0x00010937c560();
    bVar1 = *pbVar3;
    if ((4 < bVar1 || (1 << (ulong)(bVar1 & 0x1f) & 0x19U) == 0) && (3 < bVar1 - 5)) break;
    func_0x00010937c698(abStack_98);
    lStack_78 = lStack_78 + 1;
  }
  pbVar3 = abStack_98;
  FUN_10a0513d8(pbVar3);
  __ZNSt3__1plIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_12basic_stringIT_T0_T1_EEPKS6_RKS9_
            (auStack_110,&UNK_10f63464f,pbVar3);
  FUN_10a0029c0(auStack_110);
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10a0512a8);
  (*pcVar2)();
}



/* Entry: 10a0512e4; end: 10a0513d7;  */

void FUN_10a0512e4(undefined8 param_1,undefined8 *param_2)

{
  char cVar1;
  char *pcStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  pcStack_30 = (char *)*param_2;
  uStack_28 = 0;
  uStack_20 = 0;
  uStack_18 = 0x8000000000000000;
  cVar1 = *pcStack_30;
  if (cVar1 == '\0') {
    uStack_18 = 1;
  }
  else if (cVar1 == '\x02') {
    uStack_20 = **(undefined8 **)(pcStack_30 + 8);
  }
  else if (cVar1 == '\x01') {
    uStack_28 = **(undefined8 **)(pcStack_30 + 8);
  }
  else {
    uStack_18 = 0;
  }
  FUN_10a051484(param_1,&pcStack_30);
  return;
}



/* Entry: 10a0513d8; end: 10a051483;  */

undefined8 * FUN_10a0513d8(undefined8 *param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  if (*(char *)*param_1 != '\x01') {
    if (*(char *)*param_1 == '\x02') {
      if (param_1[4] != param_1[5]) {
        func_0x0001094a850c(param_1 + 6);
        param_1[5] = param_1[4];
      }
      param_1 = param_1 + 6;
    }
    else {
      param_1 = param_1 + 9;
    }
    return param_1;
  }
  if (*(char *)*param_1 == '\x01') {
    return (undefined8 *)(param_1[1] + 0x20);
  }
  uVar2 = 0x20;
  ___cxa_allocate_exception(0x20);
  func_0x000107c31940(auStack_48,&UNK_10f56ea6e);
  func_0x00010937951c(uVar2,0xcf,auStack_48);
  ___cxa_throw(uVar2,&PTR_DAT_110af4550,&DAT_10937964c);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1095a2864);
  (*pcVar1)();
}



/* Entry: 10a051484; end: 10a0514e3;  */

undefined8 * FUN_10a051484(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  *param_1 = *param_2;
  uVar2 = param_2[1];
  uVar1 = param_2[3];
  param_1[2] = param_2[2];
  param_1[1] = uVar2;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[3] = uVar1;
  func_0x000107c2b054(param_1 + 6,&DAT_10f62b058);
  func_0x000107c2b054(param_1 + 9,&UNK_10f630f1d);
  return param_1;
}



/* Entry: 10a0514e4; end: 10a05151b;  */

void FUN_10a0514e4(long *param_1,ulong param_2,long param_3,long param_4)

{
  long *plVar1;
  long lVar2;
  
  if (param_2 >> 0x3c == 0) {
    plVar1 = param_1;
    FUN_10a051010();
    *param_1 = (long)plVar1;
    param_1[1] = (long)plVar1;
    param_1[2] = (long)(plVar1 + param_2 * 2);
    return;
  }
  FUN_10a050ffc();
  if (param_4 != 0) {
    func_0x000107c2b04c();
    lVar2 = param_1[1];
    param_3 = param_3 - param_2;
    if (param_3 != 0) {
      _memmove(lVar2,param_2,param_3);
    }
    param_1[1] = lVar2 + param_3;
  }
  return;
}



/* Entry: 10a05151c; end: 10a051593;  */

void FUN_10a05151c(long param_1,long param_2,long param_3,long param_4)

{
  long lVar1;
  
  if (param_4 != 0) {
    func_0x000107c2b04c(param_1,param_4);
    lVar1 = *(long *)(param_1 + 8);
    param_3 = param_3 - param_2;
    if (param_3 != 0) {
      _memmove(lVar1,param_2,param_3);
    }
    *(long *)(param_1 + 8) = lVar1 + param_3;
  }
  return;
}



/* Entry: 10a051594; end: 10a05168b;  */

undefined8 * FUN_10a051594(undefined8 *param_1)

{
  byte *pbVar1;
  ulong uVar2;
  byte bVar3;
  char cVar4;
  bool bVar5;
  undefined8 *puVar6;
  code *pcVar7;
  undefined1 auStack_150 [16];
  undefined1 auStack_140 [271];
  undefined1 uStack_31;
  
  pbVar1 = (byte *)(param_1 + 10);
  do {
    bVar3 = *pbVar1;
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(pbVar1,0x10);
    if (bVar5) {
      *pbVar1 = 1;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  while ((bVar3 & 1) != 0) {
    do {
    } while ((*pbVar1 & 1) != 0);
    do {
      bVar3 = *pbVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(pbVar1,0x10);
      if (bVar5) {
        *pbVar1 = 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  if ((*(byte *)(param_1 + 9) & 1) != 0) {
    *(undefined1 *)(param_1 + 10) = 0;
    return param_1 + 6;
  }
  FUN_109febc44(auStack_150);
  FUN_10a002568(auStack_140,&UNK_10f634693,10);
  uVar2 = param_1[1];
  puVar6 = (undefined8 *)*param_1;
  if (-1 < (char)*(byte *)((long)param_1 + 0x17)) {
    uVar2 = (ulong)*(byte *)((long)param_1 + 0x17);
    puVar6 = param_1;
  }
  FUN_10a002568(auStack_140,puVar6,uVar2);
  FUN_10a002568(auStack_140,&UNK_10f63469e,0x13);
  FUN_10a05168c(&uStack_31,auStack_140);
                    /* WARNING: Does not return */
  pcVar7 = (code *)SoftwareBreakpoint(1,0x10a05166c);
  (*pcVar7)();
}



/* Entry: 10a05168c; end: 10a0516d3;  */

void FUN_10a05168c(undefined8 param_1,long param_2)

{
  code *pcVar1;
  undefined1 auStack_40 [31];
  undefined1 uStack_21;
  
  func_0x00010a002480(auStack_40,param_2 + 8,&uStack_21);
  FUN_10a0516d4(auStack_40);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10a0516b8);
  (*pcVar1)();
}



/* Entry: 10a0516d4; end: 10a0517a3;  */

void FUN_10a0516d4(undefined8 param_1)

{
  code *pcVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined1 auStack_258 [264];
  undefined **appuStack_150 [2];
  undefined1 auStack_140 [264];
  char cStack_38;
  
  FUN_10a002a94(appuStack_150,param_1);
  appuStack_150[0] = &PTR_FUN_110b99e70;
  func_0x00010a0ec6dc(auStack_258,1);
  if (cStack_38 == '\x01') {
    _memcpy(auStack_140,auStack_258,0x104);
  }
  else {
    _memcpy(auStack_140,auStack_258,0x108);
    cStack_38 = '\x01';
  }
  puVar2 = (undefined8 *)0x120;
  ___cxa_allocate_exception();
  puVar3 = puVar2;
  __ZNSt13runtime_errorC2ERKS_();
  *puVar3 = &PTR_FUN_110b99e98;
  _memcpy(puVar3 + 2,auStack_140,0x110);
  *puVar2 = &PTR_FUN_110b99e70;
  ___cxa_throw(puVar2,&PTR_DAT_110b99e48,FUN_10a002a90);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10a05178c);
  (*pcVar1)();
}



/* Entry: 10a0517a4; end: 10a0517ab;  */

void FUN_10a0517a4(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10a0517a8);
  (*pcVar1)();
}



/* Entry: 10a0517ac; end: 10a05181b;  */

/* WARNING: Removing unreachable block (ram,0x00010a0517e4) */

void FUN_10a0517ac(long *param_1)

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
      lVar3 = lVar3 + -0x20;
    } while (lVar3 != lVar2);
    lVar1 = *param_1;
  }
  param_1[1] = lVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(lVar1);
  return;
}



/* Entry: 10a05181c; end: 10a051923;  */

void FUN_10a05181c(float *param_1,float *param_2)

{
  byte bVar1;
  byte bVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  
  fVar3 = *param_2;
  fVar7 = param_2[5];
  fVar8 = param_2[10];
  fVar9 = (fVar3 - fVar7) - fVar8;
  fVar11 = (fVar7 - fVar3) - fVar8;
  fVar13 = (fVar8 - fVar3) - fVar7;
  fVar8 = fVar3 + fVar7 + fVar8;
  fVar3 = fVar9;
  if (fVar9 <= fVar8) {
    fVar3 = fVar8;
  }
  bVar1 = 2;
  if (fVar11 <= fVar3) {
    fVar11 = fVar3;
    bVar1 = fVar8 < fVar9;
  }
  bVar2 = 3;
  if (fVar13 <= fVar11) {
    fVar13 = fVar11;
    bVar2 = bVar1;
  }
  fVar4 = SQRT(fVar13 + 1.0) * 0.5;
  fVar9 = 0.25 / fVar4;
  fVar7 = (param_2[8] - param_2[2]) * fVar9;
  fVar10 = (param_2[1] + param_2[4]) * fVar9;
  fVar12 = (param_2[6] + param_2[9]) * fVar9;
  fVar8 = (param_2[1] - param_2[4]) * fVar9;
  fVar5 = (param_2[2] + param_2[8]) * fVar9;
  fVar6 = fVar7;
  fVar13 = fVar12;
  fVar11 = fVar4;
  fVar3 = fVar10;
  if (bVar2 != 2) {
    fVar6 = fVar8;
    fVar13 = fVar4;
    fVar11 = fVar12;
    fVar3 = fVar5;
  }
  fVar9 = (param_2[6] - param_2[9]) * fVar9;
  fVar12 = fVar4;
  if (bVar2 != 0) {
    fVar12 = fVar9;
    fVar8 = fVar5;
    fVar7 = fVar10;
    fVar9 = fVar4;
  }
  if (bVar2 < 2) {
    fVar6 = fVar12;
    fVar13 = fVar8;
    fVar11 = fVar7;
    fVar3 = fVar9;
  }
  *param_1 = fVar3;
  param_1[1] = fVar11;
  param_1[2] = fVar13;
  param_1[3] = fVar6;
  fVar13 = param_2[0xe];
  *(undefined8 *)(param_1 + 4) = *(undefined8 *)(param_2 + 0xc);
  param_1[6] = fVar13;
  return;
}



/* Entry: 10a051924; end: 10a051997;  */

void FUN_10a051924(undefined8 *param_1)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  
  plVar3 = (long *)*param_1;
  if (plVar3 == (long *)0x0) {
    return;
  }
  plVar2 = (long *)param_1[1];
  plVar1 = plVar3;
  if (plVar2 != plVar3) {
    do {
      plVar1 = plVar2 + -3;
      if (*plVar1 != 0) {
        plVar2[-2] = *plVar1;
        __ZdlPv();
      }
      plVar2 = plVar1;
    } while (plVar1 != plVar3);
    plVar1 = (long *)*param_1;
  }
  param_1[1] = plVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(plVar1);
  return;
}



/* Entry: 10a051998; end: 10a051a4f;  */

void FUN_10a051998(long *param_1,long *param_2)

{
  byte bVar1;
  long lVar2;
  undefined8 unaff_x21;
  undefined8 unaff_x22;
  long lStack_58;
  long lStack_50;
  undefined8 uStack_48;
  long lStack_40;
  undefined5 uStack_38;
  undefined3 uStack_33;
  undefined5 uStack_30;
  undefined3 uStack_2b;
  undefined5 uStack_28;
  undefined3 uStack_23;
  
  if ((*(byte *)(param_1 + 7) & 1) != 0) {
    uStack_30 = (undefined5)unaff_x22;
    uStack_2b = (undefined3)((ulong)unaff_x22 >> 0x28);
    uStack_28 = (undefined5)unaff_x21;
    uStack_23 = (undefined3)((ulong)unaff_x21 >> 0x28);
    bVar1 = *(byte *)((long)param_1 + 0x27);
    if (*(byte *)((long)param_1 + 0x27) <= *(byte *)((long)param_2 + 0x27)) {
      bVar1 = *(byte *)((long)param_2 + 0x27);
    }
    *(byte *)((long)param_1 + 0x27) = bVar1;
    bVar1 = *(byte *)((long)param_1 + 0x26);
    if (*(byte *)((long)param_1 + 0x26) <= *(byte *)((long)param_2 + 0x26)) {
      bVar1 = *(byte *)((long)param_2 + 0x26);
    }
    *(byte *)((long)param_1 + 0x26) = bVar1;
    func_0x00010983ca2c(param_1,(param_1[1] - *param_1 >> 2) * -0x5555555555555555 +
                                (param_2[1] - *param_2 >> 2) * -0x5555555555555555);
    FUN_10aad3f38(param_1,param_1[1],*param_2,param_2[1],
                  (param_2[1] - *param_2 >> 2) * -0x5555555555555555);
    if (*(char *)((long)param_2 + 0x34) == '\x01') {
      lVar2 = param_2[5];
      *(undefined8 *)((long)param_1 + 0x2d) = *(undefined8 *)((long)param_2 + 0x2d);
      param_1[5] = lVar2;
    }
    if ((char)param_2[4] == '\x01') {
      lVar2 = param_2[3];
      *(char *)(param_1 + 4) = (char)param_2[4];
      param_1[3] = lVar2;
    }
    *(byte *)((long)param_1 + 0x24) =
         *(byte *)((long)param_1 + 0x24) | *(byte *)((long)param_2 + 0x24);
    *(byte *)((long)param_1 + 0x25) =
         *(byte *)((long)param_1 + 0x25) | *(byte *)((long)param_2 + 0x25);
    return;
  }
  lStack_58 = 0;
  lStack_50 = 0;
  uStack_48 = 0;
  FUN_10a051a50(&lStack_58,*param_2,param_2[1],(param_2[1] - *param_2 >> 2) * -0x5555555555555555);
  lStack_40 = param_2[3];
  uStack_38 = (undefined5)param_2[4];
  uStack_2b = (undefined3)*(undefined8 *)((long)param_2 + 0x2d);
  uStack_28 = (undefined5)((ulong)*(undefined8 *)((long)param_2 + 0x2d) >> 0x18);
  uStack_33 = (undefined3)*(undefined8 *)((long)param_2 + 0x25);
  uStack_30 = (undefined5)((ulong)*(undefined8 *)((long)param_2 + 0x25) >> 0x18);
  func_0x00010a051b68(param_1,&lStack_58);
  if (lStack_58 != 0) {
    lStack_50 = lStack_58;
    __ZdlPv();
  }
  return;
}



/* Entry: 10a051a50; end: 10a051ac7;  */

void FUN_10a051a50(long param_1,long param_2,long param_3,long param_4)

{
  long lVar1;
  
  if (param_4 != 0) {
    FUN_10a051ac8(param_1,param_4);
    lVar1 = *(long *)(param_1 + 8);
    param_3 = param_3 - param_2;
    if (param_3 != 0) {
      _memmove(lVar1,param_2,param_3);
    }
    *(long *)(param_1 + 8) = lVar1 + param_3;
  }
  return;
}



/* Entry: 10a051ac8; end: 10a051b0f;  */

undefined1  [16] FUN_10a051ac8(long *param_1,undefined8 *param_2)

{
  long *plVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  
  if (param_2 < (undefined8 *)0x1555555555555556) {
    plVar1 = param_1;
    FUN_10a051b24();
    *param_1 = (long)plVar1;
    param_1[1] = (long)plVar1;
    param_1[2] = (long)plVar1 + (long)param_2 * 0xc;
    auVar8._8_8_ = param_2;
    auVar8._0_8_ = plVar1;
    return auVar8;
  }
  FUN_10a051b10();
  puVar2 = (undefined8 *)&UNK_10f6334ac;
  FUN_109ffde64();
  if (param_2 < (undefined8 *)0x1555555555555556) {
    lVar3 = (long)param_2 * 0xc;
    __Znwm(lVar3);
    auVar9._8_8_ = param_2;
    auVar9._0_8_ = lVar3;
    return auVar9;
  }
  func_0x000109ffded8();
  if (*(char *)(puVar2 + 7) == '\x01') {
    puVar4 = param_2;
    func_0x0001074293d0(puVar2,param_2);
    uVar6 = param_2[4];
    uVar5 = param_2[3];
    uVar7 = *(undefined8 *)((long)param_2 + 0x25);
    *(undefined8 *)((long)puVar2 + 0x2d) = *(undefined8 *)((long)param_2 + 0x2d);
    *(undefined8 *)((long)puVar2 + 0x25) = uVar7;
    puVar2[4] = uVar6;
    puVar2[3] = uVar5;
    param_2 = puVar4;
  }
  else {
    *puVar2 = 0;
    puVar2[1] = 0;
    puVar2[2] = 0;
    uVar5 = *param_2;
    puVar2[1] = param_2[1];
    *puVar2 = uVar5;
    puVar2[2] = param_2[2];
    *param_2 = 0;
    param_2[1] = 0;
    param_2[2] = 0;
    uVar6 = param_2[4];
    uVar5 = param_2[3];
    uVar7 = *(undefined8 *)((long)param_2 + 0x25);
    *(undefined8 *)((long)puVar2 + 0x2d) = *(undefined8 *)((long)param_2 + 0x2d);
    *(undefined8 *)((long)puVar2 + 0x25) = uVar7;
    puVar2[4] = uVar6;
    puVar2[3] = uVar5;
    *(undefined1 *)(puVar2 + 7) = 1;
  }
  auVar10._8_8_ = param_2;
  auVar10._0_8_ = puVar2;
  return auVar10;
}



/* Entry: 10a051b10; end: 10a051b23;  */

undefined1  [16] FUN_10a051b10(undefined8 param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  
  puVar1 = (undefined8 *)&UNK_10f6334ac;
  FUN_109ffde64();
  if (param_2 < (undefined8 *)0x1555555555555556) {
    lVar2 = (long)param_2 * 0xc;
    __Znwm(lVar2);
    auVar7._8_8_ = param_2;
    auVar7._0_8_ = lVar2;
    return auVar7;
  }
  func_0x000109ffded8();
  if (*(char *)(puVar1 + 7) == '\x01') {
    puVar3 = param_2;
    func_0x0001074293d0(puVar1,param_2);
    uVar5 = param_2[4];
    uVar4 = param_2[3];
    uVar6 = *(undefined8 *)((long)param_2 + 0x25);
    *(undefined8 *)((long)puVar1 + 0x2d) = *(undefined8 *)((long)param_2 + 0x2d);
    *(undefined8 *)((long)puVar1 + 0x25) = uVar6;
    puVar1[4] = uVar5;
    puVar1[3] = uVar4;
    param_2 = puVar3;
  }
  else {
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1[2] = 0;
    uVar4 = *param_2;
    puVar1[1] = param_2[1];
    *puVar1 = uVar4;
    puVar1[2] = param_2[2];
    *param_2 = 0;
    param_2[1] = 0;
    param_2[2] = 0;
    uVar5 = param_2[4];
    uVar4 = param_2[3];
    uVar6 = *(undefined8 *)((long)param_2 + 0x25);
    *(undefined8 *)((long)puVar1 + 0x2d) = *(undefined8 *)((long)param_2 + 0x2d);
    *(undefined8 *)((long)puVar1 + 0x25) = uVar6;
    puVar1[4] = uVar5;
    puVar1[3] = uVar4;
    *(undefined1 *)(puVar1 + 7) = 1;
  }
  auVar8._8_8_ = param_2;
  auVar8._0_8_ = puVar1;
  return auVar8;
}



/* Entry: 10a051b24; end: 10a0521b7;  */

undefined1  [16] FUN_10a051b24(undefined8 *param_1,undefined8 *param_2)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  
  if (param_2 < (undefined8 *)0x1555555555555556) {
    lVar1 = (long)param_2 * 0xc;
    __Znwm(lVar1);
    auVar6._8_8_ = param_2;
    auVar6._0_8_ = lVar1;
    return auVar6;
  }
  func_0x000109ffded8();
  if (*(char *)(param_1 + 7) == '\x01') {
    puVar2 = param_2;
    func_0x0001074293d0(param_1,param_2);
    uVar4 = param_2[4];
    uVar3 = param_2[3];
    uVar5 = *(undefined8 *)((long)param_2 + 0x25);
    *(undefined8 *)((long)param_1 + 0x2d) = *(undefined8 *)((long)param_2 + 0x2d);
    *(undefined8 *)((long)param_1 + 0x25) = uVar5;
    param_1[4] = uVar4;
    param_1[3] = uVar3;
    param_2 = puVar2;
  }
  else {
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    uVar3 = *param_2;
    param_1[1] = param_2[1];
    *param_1 = uVar3;
    param_1[2] = param_2[2];
    *param_2 = 0;
    param_2[1] = 0;
    param_2[2] = 0;
    uVar4 = param_2[4];
    uVar3 = param_2[3];
    uVar5 = *(undefined8 *)((long)param_2 + 0x25);
    *(undefined8 *)((long)param_1 + 0x2d) = *(undefined8 *)((long)param_2 + 0x2d);
    *(undefined8 *)((long)param_1 + 0x25) = uVar5;
    param_1[4] = uVar4;
    param_1[3] = uVar3;
    *(undefined1 *)(param_1 + 7) = 1;
  }
  auVar7._8_8_ = param_2;
  auVar7._0_8_ = param_1;
  return auVar7;
}



/* Entry: 10a0521b8; end: 10a0522e7;  */

long * FUN_10a0521b8(long *param_1,long *param_2)

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
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  param_1[2] = (long)&PTR_FUN_110c679b8;
  param_1[5] = (long)&PTR_DAT_110c679e8;
  *(long *)((long)param_1 + *(long *)(lVar1 + -0x18)) = param_2[5];
  param_1[0x15] = (long)&PTR_DAT_110c67a40;
  FUN_10a004cfc(param_1 + 0x5a);
  FUN_10a004cfc(param_1 + 0x58);
  if (*(char *)((long)param_1 + 0x2bf) < '\0') {
    __ZdlPv(param_1[0x55]);
  }
  FUN_10a0522e8(param_1 + 0x53);
  FUN_10a0772f0(param_1 + 0x51);
  lVar1 = param_2[1];
  *param_1 = lVar1;
  param_1[2] = (long)&PTR_FUN_110bb3968;
  param_1[5] = (long)&PTR_DAT_110bb3998;
  *(long *)((long)param_1 + *(long *)(lVar1 + -0x18)) = param_2[4];
  param_1[0x15] = (long)&PTR_DAT_110bb39f0;
  FUN_10a042c0c(param_1 + 0x4d);
  func_0x00010a042c64(param_1 + 0x48);
  func_0x00010a0523dc(param_1 + 0x45);
  if ((char)param_1[0x3c] == '\x01') {
    func_0x00010a042d30(param_1 + 0x3a);
  }
  param_1[0x15] = (long)&PTR_FUN_110b9f768;
  FUN_10a1c00f4(param_1 + 0x15);
  lVar1 = param_2[2];
  *param_1 = lVar1;
  param_1[2] = (long)&PTR_FUN_110b9f848;
  param_1[5] = (long)&PTR_DAT_110b9f878;
  *(long *)((long)param_1 + *(long *)(lVar1 + -0x18)) = param_2[3];
  FUN_10a042dcc(param_1 + 0x13);
  *param_1 = (long)&PTR_DAT_110c60a00;
  param_1[2] = (long)&PTR_DAT_110c60a88;
  param_1[5] = (long)&PTR_DAT_110c60ab8;
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
  param_1[5] = (long)&PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + 6);
  param_1[2] = (long)&PTR____cxa_pure_virtual_110bcfb60;
  func_0x00010a004e5c(param_1 + 3);
  return param_1;
}



/* Entry: 10a0522e8; end: 10a052593;  */

long FUN_10a0522e8(long param_1)

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



/* Entry: 10a052594; end: 10a0527cf;  */

undefined1  [16] FUN_10a052594(ulong param_1,undefined8 *param_2,ulong param_3)

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
  
  *(undefined ***)(param_1 + 0x1b0) = &PTR_DAT_110b9f050;
  puVar1 = &UNK_10f630f1d;
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
    ppuStack_40 = &PTR_DAT_110b9f050;
    uStack_38 = 0;
    ppuStack_a8 = &PTR_DAT_110bc8450;
    uStack_a0 = 0;
    uStack_98 = CONCAT71(uStack_98._1_7_,1);
    func_0x0001098949cc(param_1,*param_2,&ppuStack_40,&ppuStack_a8);
  }
  auVar3._8_8_ = param_3 & 0xffffffff | (ulong)*(uint *)(param_2 + 1) << 0x20;
  auVar3._0_8_ = param_1;
  return auVar3;
}



/* Entry: 10a0527d0; end: 10a052827;  */

ulong FUN_10a0527d0(ulong param_1,undefined8 *param_2)

{
  ulong uVar1;
  
  uVar1 = param_1;
  FUN_10a0051e8(param_1,*(undefined4 *)(param_2 + 3),*(undefined4 *)((long)param_2 + 0x1c),
                *(undefined4 *)(param_2 + 10),*(undefined4 *)(param_2 + 4),
                *(undefined4 *)((long)param_2 + 0x24));
  if ((uVar1 & 1) == 0) {
    FUN_10a052828(param_1,*param_2,FUN_10a052a54,FUN_10a052b0c);
  }
  return param_1;
}



/* Entry: 10a052828; end: 10a052a53;  */

void FUN_10a052828(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 uVar2;
  long *plVar3;
  undefined ***pppuVar4;
  long *plVar5;
  long *plVar6;
  int *piVar7;
  long lVar8;
  ulong uVar9;
  code *pcVar10;
  undefined8 extraout_x8;
  ulong uVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  ulong uVar16;
  ulong uVar17;
  long lStack_1a8;
  long lStack_1a0;
  long lStack_198;
  long lStack_190;
  long *plStack_188;
  int aiStack_118 [2];
  undefined8 *puStack_110;
  long *plStack_108;
  int aiStack_100 [2];
  long *plStack_f8;
  undefined8 *puStack_f0;
  undefined *puStack_e8;
  undefined **ppuStack_e0;
  undefined8 uStack_d8;
  undefined *puStack_a8;
  undefined **ppuStack_a0;
  undefined8 uStack_98;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar2 = param_2;
  _strlen();
  if ((*(byte *)(param_1[1] + 0x1e0) & 1) != 0) {
    puStack_a8 = &UNK_10989e1b0;
    ppuStack_a0 = &PTR_DAT_110b17718;
    uStack_98 = param_3;
    (**(code **)(*(long *)*param_1 + 0x2a0))
              (&plStack_108,(long *)*param_1,param_1[1] + 0x118,0,&puStack_a8);
    (*(code *)*ppuStack_a0)(&ppuStack_a0);
    aiStack_100[0] = 7;
    plStack_f8 = plStack_108;
    plStack_108 = (long *)0x0;
    if ((*(byte *)(param_1[1] + 0x1e0) & 1) != 0) {
      puStack_e8 = &UNK_10989e1b0;
      ppuStack_e0 = &PTR_DAT_110b17718;
      puStack_a8 = &UNK_10989e1b0;
      ppuStack_a0 = &PTR_DAT_110b17718;
      uStack_d8 = param_4;
      uStack_98 = param_4;
      (**(code **)(*(long *)*param_1 + 0x2a0))
                (&puStack_f0,(long *)*param_1,param_1[1] + 0x118,1,&puStack_a8);
      (*(code *)*ppuStack_a0)(&ppuStack_a0);
      aiStack_118[0] = 7;
      puStack_110 = puStack_f0;
      puStack_f0 = (undefined8 *)0x0;
      (*(code *)*ppuStack_e0)(&ppuStack_e0);
      piVar7 = aiStack_100;
      func_0x000109895778(param_1,param_2,uVar2,piVar7,aiStack_118);
      if ((3 < aiStack_118[0]) && (puStack_110 != (undefined8 *)0x0)) {
        (**(code **)*puStack_110)();
      }
      if ((3 < aiStack_100[0]) && (plStack_f8 != (long *)0x0)) {
        (**(code **)*plStack_f8)();
      }
      plVar3 = plStack_108;
      if (plStack_108 != (long *)0x0) {
        (**(code **)*plStack_108)();
      }
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
        return;
      }
      ___stack_chk_fail();
      if ((int)param_2 == 0) {
        __Unwind_Resume(plVar3);
        pcVar10 = (code *)*ppuStack_a0;
        pppuVar4 = &ppuStack_a0;
      }
      else {
        (*(code *)*ppuStack_a0)(&ppuStack_a0);
        pcVar10 = (code *)*ppuStack_e0;
        pppuVar4 = &ppuStack_e0;
      }
      (*pcVar10)(pppuVar4);
      func_0x000104bd46a0();
      plVar5 = plVar3;
      (**(code **)(*plVar3 + 0x58))();
      if ((ulong)plVar5[0x59] < 8) {
        plVar5[plVar5[0x59] + 0x4e] = plVar5[0x5a];
        plVar5[0x59] = plVar5[0x59] + 1;
      }
      else {
        func_0x00010988bfcc(plVar5 + 0x4b);
      }
      plVar6 = plVar3;
      FUN_10a052bc4(plVar3,param_2);
      FUN_10a052e3c(piVar7);
      FUN_10a052e5c(extraout_x8,plVar3,plVar6 + 0x24);
      plVar3 = plVar5 + 0x4b;
      lVar8 = plVar5[0x59];
      uVar9 = lVar8 - 1;
      plVar5[0x59] = uVar9;
      if (uVar9 < 8) {
        uVar9 = plVar3[lVar8 + 2];
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
      lVar8 = *plVar3;
      lVar14 = plVar5[0x4c];
      lVar12 = lVar14 - lVar8;
      uVar16 = lVar12 >> 4;
      if (uVar16 < uVar9) {
        uVar17 = uVar9 - uVar16;
        lVar15 = plVar5[0x4d];
        if ((ulong)(lVar15 - lVar14 >> 4) < uVar17) {
          if (uVar9 >> 0x3c == 0) {
            uVar11 = lVar15 - lVar8 >> 3;
            if (uVar11 <= uVar9) {
              uVar11 = uVar9;
            }
            if (0x7fffffffffffffef < (ulong)(lVar15 - lVar8)) {
              uVar11 = 0xfffffffffffffff;
            }
            plStack_188 = plVar3;
            if (uVar11 >> 0x3c == 0) {
              lVar1 = uVar11 << 4;
              __Znwm();
              lVar14 = lVar1 + lVar12;
              _bzero(lVar14,uVar17 * 0x10);
              lVar13 = lVar14 + uVar16 * -0x10;
              _memcpy(lVar13,lVar8,lVar12);
              *plVar3 = lVar13;
              plVar5[0x4c] = lVar14 + uVar17 * 0x10;
              plVar5[0x4d] = lVar1 + uVar11 * 0x10;
              lStack_1a8 = lVar8;
              lStack_1a0 = lVar8;
              lStack_198 = lVar8;
              lStack_190 = lVar15;
              func_0x00010988c1b8(&lStack_1a8);
              goto code_r0x00010988c138;
            }
            func_0x000104c4f740();
          }
          else {
            func_0x00010988c1a4();
          }
                    /* WARNING: Does not return */
          pcVar10 = (code *)SoftwareBreakpoint(1,0x10988c16c);
          (*pcVar10)();
        }
        _bzero(lVar14,uVar17 * 0x10);
        plVar5[0x4c] = lVar14 + uVar17 * 0x10;
      }
      else if (uVar9 < uVar16) {
        lVar8 = lVar8 + uVar9 * 0x10;
        while (lVar14 != lVar8) {
          lVar14 = lVar14 + -0x10;
          func_0x00010988c204(lVar14);
        }
        plVar5[0x4c] = lVar8;
      }
code_r0x00010988c138:
      plVar5[0x5a] = uVar9;
      return;
    }
  }
                    /* WARNING: Does not return */
  pcVar10 = (code *)SoftwareBreakpoint(1,0x10a052a00);
  (*pcVar10)();
}



/* Entry: 10a052a54; end: 10a052b0b;  */

void FUN_10a052a54(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  FUN_10a052bc4(param_2,param_3);
  FUN_10a052e3c(param_5);
  FUN_10a052e5c(param_1,param_2,plVar4 + 0x24);
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



/* Entry: 10a052b0c; end: 10a052bc3;  */

void FUN_10a052b0c(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  FUN_10a05372c(param_1,param_2,FUN_10a009bd8,0,param_3,param_4,param_5);
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



/* Entry: 10a052bc4; end: 10a052c2b;  */

undefined ** FUN_10a052bc4(undefined **param_1,undefined **param_2)

{
  char cVar1;
  bool bVar2;
  code *pcVar3;
  long *plVar4;
  undefined8 *puVar5;
  long lVar6;
  undefined **ppuVar7;
  undefined1 auStack_50 [8];
  long *plStack_48;
  
  ppuVar7 = param_1;
  func_0x000109898688();
  if (ppuVar7 != (undefined **)0x0) {
    FUN_10a052c2c();
    param_2 = ppuVar7;
    if (param_1 != (undefined **)0x0) {
      param_2 = &PTR_DAT_110b178e0;
      ___dynamic_cast();
      if (param_1 != (undefined **)0x0) {
        return param_1;
      }
    }
    func_0x00010988bd28(&UNK_10f685496);
  }
  plVar4 = (long *)&UNK_10f68f52e;
  func_0x00010988bd28();
  puVar5 = (undefined8 *)*param_2;
  if (*(char *)(puVar5 + 4) == '\0') {
    (**(code **)(*plVar4 + 0x58))();
    puVar5 = (undefined8 *)*param_2;
    if (plVar4[0x59] != 0) {
      (*(code *)puVar5[2])(auStack_50,param_2);
      FUN_10a052d10(plVar4 + 0x4b,auStack_50);
      plVar4[0x5a] = plVar4[0x5a] + 1;
      if (plVar4[0x4b] != plVar4[0x4c]) {
        ppuVar7 = *(undefined ***)(plVar4[0x4c] + -0x10);
        if (plStack_48 != (long *)0x0) {
          plVar4 = plStack_48 + 1;
          do {
            lVar6 = *plVar4;
            cVar1 = '\x01';
            bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
            if (bVar2) {
              *plVar4 = lVar6 + -1;
              cVar1 = ExclusiveMonitorsStatus();
            }
          } while (cVar1 != '\0');
          if (lVar6 == 0) {
            (**(code **)(*plStack_48 + 0x10))(plStack_48);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_48);
          }
        }
        return ppuVar7;
      }
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x10a052d0c);
      (*pcVar3)();
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010a052c60. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*puVar5)(param_2);
  return param_2;
}



/* Entry: 10a052c2c; end: 10a052d0f;  */

undefined8 * FUN_10a052c2c(long *param_1,undefined8 *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  undefined8 *puVar5;
  long lVar6;
  undefined1 auStack_30 [8];
  long *plStack_28;
  
  puVar5 = (undefined8 *)*param_2;
  if (*(char *)(puVar5 + 4) == '\0') {
    (**(code **)(*param_1 + 0x58))();
    puVar5 = (undefined8 *)*param_2;
    if (param_1[0x59] != 0) {
      (*(code *)puVar5[2])(auStack_30,param_2);
      FUN_10a052d10(param_1 + 0x4b,auStack_30);
      param_1[0x5a] = param_1[0x5a] + 1;
      if (param_1[0x4b] != param_1[0x4c]) {
        puVar5 = *(undefined8 **)(param_1[0x4c] + -0x10);
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
            __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_28);
          }
        }
        return puVar5;
      }
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x10a052d0c);
      (*pcVar4)();
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010a052c60. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*puVar5)(param_2);
  return param_2;
}



/* Entry: 10a052d10; end: 10a052df3;  */

void FUN_10a052d10(long *param_1,undefined8 *param_2)

{
  ulong uVar1;
  long *plVar2;
  undefined8 *puVar3;
  char cVar4;
  bool bVar5;
  undefined *puVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  long *plVar12;
  long lStack_58;
  long lStack_50;
  long lStack_48;
  long lStack_40;
  long *plStack_38;
  
  puVar3 = (undefined8 *)param_1[1];
  if (puVar3 < (undefined8 *)param_1[2]) {
    uVar11 = *param_2;
    puVar10 = puVar3 + 2;
    puVar3[1] = param_2[1];
    *puVar3 = uVar11;
    *param_2 = 0;
    param_2[1] = 0;
  }
  else {
    lVar9 = (long)puVar3 - *param_1;
    uVar1 = (lVar9 >> 4) + 1;
    if (uVar1 >> 0x3c != 0) {
      FUN_10a052df4();
      puVar6 = &UNK_10f6334ac;
      FUN_109ffde64();
      if ((ulong)param_2 >> 0x3c == 0) {
        __Znwm((long)param_2 << 4);
        return;
      }
      func_0x000109ffded8();
      if ((int)puVar6 == 0) {
        return;
      }
      lVar9 = 0;
      FUN_10a052ee0(0,0,puVar6);
      plVar12 = *(long **)(lVar9 + 8);
      if (*(long *)(lVar9 + 8) != 0) {
        plVar2 = (long *)(*(long *)(lVar9 + 8) + 8);
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
          if (bVar5) {
            *plVar2 = *plVar2 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
      }
      FUN_10a052f68();
      if (plVar12 != (long *)0x0) {
        plVar2 = plVar12 + 1;
        do {
          lVar9 = *plVar2;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
          if (bVar5) {
            *plVar2 = lVar9 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (lVar9 == 0) {
          (**(code **)(*plVar12 + 0x10))(plVar12);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar12);
        }
      }
      return;
    }
    uVar7 = param_1[2] - *param_1;
    uVar8 = (long)uVar7 >> 3;
    if (uVar8 <= uVar1) {
      uVar8 = uVar1;
    }
    if (0x7fffffffffffffef < uVar7) {
      uVar8 = 0xfffffffffffffff;
    }
    plVar12 = param_1;
    plStack_38 = param_1;
    FUN_10a052e08();
    puVar3 = (undefined8 *)((long)plVar12 + lVar9);
    uVar11 = *param_2;
    puVar10 = puVar3 + 2;
    puVar3[1] = param_2[1];
    *puVar3 = uVar11;
    *param_2 = 0;
    param_2[1] = 0;
    lVar9 = (long)puVar3 - (param_1[1] - *param_1);
    _memcpy(lVar9);
    lStack_58 = *param_1;
    *param_1 = lVar9;
    param_1[1] = (long)puVar10;
    lStack_40 = param_1[2];
    param_1[2] = (long)(plVar12 + uVar8 * 2);
    lStack_50 = lStack_58;
    lStack_48 = lStack_58;
    func_0x00010988c1b8(&lStack_58);
  }
  param_1[1] = (long)puVar10;
  return;
}



/* Entry: 10a052df4; end: 10a052e07;  */

void FUN_10a052df4(undefined8 param_1,ulong param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  long lVar5;
  long *plVar6;
  
  puVar4 = &UNK_10f6334ac;
  FUN_109ffde64();
  if (param_2 >> 0x3c == 0) {
    __Znwm(param_2 << 4);
    return;
  }
  func_0x000109ffded8();
  if ((int)puVar4 == 0) {
    return;
  }
  lVar5 = 0;
  FUN_10a052ee0(0,0,puVar4);
  plVar6 = *(long **)(lVar5 + 8);
  if (*(long *)(lVar5 + 8) != 0) {
    plVar1 = (long *)(*(long *)(lVar5 + 8) + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  FUN_10a052f68();
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
  return;
}



/* Entry: 10a052e08; end: 10a052e3b;  */

void FUN_10a052e08(undefined8 param_1,ulong param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  if (param_2 >> 0x3c == 0) {
    __Znwm(param_2 << 4);
    return;
  }
  func_0x000109ffded8();
  if ((int)param_1 == 0) {
    return;
  }
  lVar4 = 0;
  FUN_10a052ee0(0,0,param_1);
  plVar5 = *(long **)(lVar4 + 8);
  if (*(long *)(lVar4 + 8) != 0) {
    plVar1 = (long *)(*(long *)(lVar4 + 8) + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  FUN_10a052f68();
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
  return;
}



/* Entry: 10a052e3c; end: 10a052e5b;  */

void FUN_10a052e3c(undefined8 param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  if ((int)param_1 == 0) {
    return;
  }
  lVar4 = 0;
  FUN_10a052ee0(0,0,param_1);
  plVar5 = *(long **)(lVar4 + 8);
  if (*(long *)(lVar4 + 8) != 0) {
    plVar1 = (long *)(*(long *)(lVar4 + 8) + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  FUN_10a052f68();
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
  return;
}



/* Entry: 10a052e5c; end: 10a052edf;  */

void FUN_10a052e5c(undefined8 param_1,undefined8 *param_2)

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



/* Entry: 10a052ee0; end: 10a052f67;  */

void FUN_10a052ee0(undefined8 param_1,int param_2)

{
  code *pcVar1;
  undefined1 auStack_38 [24];
  
  if (param_2 < 1) {
    func_0x00010b0ae4b8(auStack_38,&UNK_10f634722,0x29);
    func_0x00010989842c(auStack_38);
  }
  else {
    func_0x00010b0ae4b8(auStack_38,&UNK_10f6346e9,0x38);
    func_0x00010989842c(auStack_38);
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10a052f48);
  (*pcVar1)();
}



/* Entry: 10a052f68; end: 10a053303;  */

void FUN_10a052f68(undefined4 *param_1,long *param_2,long *param_3)

{
  undefined *puVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  undefined **ppuVar5;
  long *plVar6;
  long extraout_x8;
  long extraout_x9;
  long *plVar7;
  long lVar8;
  long *plStack_78;
  long *plStack_70;
  long *plStack_68;
  undefined8 uStack_60;
  long *plStack_58;
  long *plStack_50;
  long *plStack_48;
  
  if (*param_3 == 0) {
    *param_1 = 1;
    return;
  }
  ppuVar5 = &PTR___tlv_bootstrap_11340df48;
  (*(code *)PTR___tlv_bootstrap_11340df48)(*(undefined8 *)(*param_3 + 0x50));
  if (extraout_x8 == 0 && *ppuVar5 == (undefined *)0x0) {
    plStack_50 = (long *)(extraout_x9 + 0x10);
    plStack_48 = (long *)param_3[1];
    if (plStack_48 != (long *)0x0) {
      plVar7 = plStack_48 + 2;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar7,0x10);
        if (bVar3) {
          *plVar7 = *plVar7 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    FUN_10a053304(param_1,param_2,&plStack_50);
    plVar7 = plStack_48;
    if (plStack_48 == (long *)0x0) {
      return;
    }
    goto LAB_10a0532e4;
  }
  FUN_10a0533bc(&plStack_50,extraout_x9);
  if (plStack_50 == (long *)0x0) {
LAB_10a053164:
    *param_1 = 1;
  }
  else {
    plVar7 = (long *)plStack_50[2];
    if (plVar7 == (long *)0x0) {
      if (*plStack_50 == 0) goto LAB_10a053164;
      plStack_70 = (long *)(*plStack_50 + 0x10);
      plStack_68 = (long *)plStack_50[1];
      if (plStack_68 != (long *)0x0) {
        plVar7 = plStack_68 + 1;
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar7,0x10);
          if (bVar3) {
            *plVar7 = *plVar7 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      func_0x00010a053408(&uStack_60,param_2,&plStack_70);
      plVar7 = plStack_68;
      if (plStack_68 != (long *)0x0) {
        plVar6 = plStack_68 + 1;
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
          (**(code **)(*plStack_68 + 0x10))(plStack_68);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
        }
      }
      plVar6 = (long *)0x30;
      __Znwm();
      plVar7 = plStack_58;
      plVar6[1] = 0;
      plVar6[2] = 0;
      *plVar6 = (long)&PTR_DAT_110b174d8;
      plStack_70 = plVar6 + 3;
      iVar4 = (int)uStack_60;
      if ((int)uStack_60 == 3) {
        uStack_60 = (ulong)uStack_60._4_4_ << 0x20;
        plVar6[3] = (long)param_2;
        *(undefined4 *)(plVar6 + 4) = 3;
        plVar6[5] = (long)plStack_58;
      }
      else if ((int)uStack_60 == 2) {
        uStack_60 = (ulong)uStack_60._4_4_ << 0x20;
        plVar6[3] = (long)param_2;
        *(undefined4 *)(plVar6 + 4) = 2;
        *(undefined1 *)(plVar6 + 5) = plStack_58._0_1_;
      }
      else if ((int)uStack_60 < 4) {
        uStack_60 = (ulong)uStack_60._4_4_ << 0x20;
        plVar6[3] = (long)param_2;
        *(int *)(plVar6 + 4) = iVar4;
      }
      else {
        plStack_58 = (long *)0x0;
        uStack_60 = (ulong)uStack_60._4_4_ << 0x20;
        plVar6[3] = (long)param_2;
        *(int *)(plVar6 + 4) = iVar4;
        plVar6[5] = (long)plVar7;
      }
      plStack_68 = plVar6;
      func_0x0001098849a4(param_1,param_2,plVar6 + 4);
      lVar8 = *param_3;
      plVar7 = param_2;
      (**(code **)(*param_2 + 0x98))(param_2,*(undefined8 *)(param_1 + 2));
      plStack_78 = plVar7;
      FUN_10aa88f94(lVar8,param_2,&plStack_78);
      if (plStack_78 != (long *)0x0) {
        (**(code **)*plStack_78)();
      }
      plVar7 = plStack_50;
      func_0x00010a04a7fc(plStack_50 + 2,&plStack_70);
      func_0x00010a053620(plVar7);
      puVar1 = *ppuVar5;
      if (*(undefined **)(*param_3 + 0x50) != (undefined *)0x0) {
        puVar1 = *(undefined **)(*param_3 + 0x50);
      }
      FUN_10aa89b3c(*(undefined8 *)(puVar1 + 0x870),&plStack_50);
      plVar7 = plStack_68;
      if (plStack_68 != (long *)0x0) {
        plVar6 = plStack_68 + 1;
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
          (**(code **)(*plStack_68 + 0x10))(plStack_68);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
        }
      }
      if ((3 < (int)uStack_60) && (plStack_58 != (long *)0x0)) {
        (**(code **)*plStack_58)();
      }
    }
    else if ((long *)*plVar7 == param_2) {
      func_0x0001098849a4(param_1,param_2,plVar7 + 1);
    }
    else {
      plStack_58 = (long *)param_3[1];
      uStack_60 = 0;
      if (*param_3 != 0) {
        uStack_60 = *param_3 + 0x10;
      }
      if (plStack_58 != (long *)0x0) {
        plVar7 = plStack_58 + 1;
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar7,0x10);
          if (bVar3) {
            *plVar7 = *plVar7 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      func_0x00010a053408(param_1,param_2,&uStack_60);
      plVar7 = plStack_58;
      if (plStack_58 != (long *)0x0) {
        plVar6 = plStack_58 + 1;
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
          (**(code **)(*plStack_58 + 0x10))(plStack_58);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
        }
      }
    }
  }
  plVar7 = plStack_48;
  if (plStack_48 == (long *)0x0) {
    return;
  }
  plVar6 = plStack_48 + 1;
  do {
    lVar8 = *plVar6;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
    if (bVar3) {
      *plVar6 = lVar8 + -1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (lVar8 != 0) {
    return;
  }
  (**(code **)(*plStack_48 + 0x10))(plStack_48);
LAB_10a0532e4:
  __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
  return;
}



/* Entry: 10a053304; end: 10a0533bb;  */

void FUN_10a053304(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  undefined **ppuStack_48;
  undefined8 uStack_40;
  long *plStack_38;
  
  plVar4 = (long *)param_3[1];
  if (plVar4 == (long *)0x0) {
    uStack_40 = 0;
  }
  else {
    __ZNSt3__119__shared_weak_count4lockEv();
    uStack_40 = 0;
    if (plVar4 != (long *)0x0) {
      uStack_40 = *param_3;
    }
  }
  ppuStack_48 = &PTR_DAT_110b178e0;
  plStack_38 = plVar4;
  FUN_10a05348c(param_1,param_2,&uStack_40,&ppuStack_48,0,0);
  plVar4 = plStack_38;
  if (plStack_38 != (long *)0x0) {
    plVar1 = plStack_38 + 1;
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
      (**(code **)(*plStack_38 + 0x10))(plStack_38);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
    }
  }
  return;
}



/* Entry: 10a0533bc; end: 10a05348b;  */

void FUN_10a0533bc(undefined8 *param_1,long param_2)

{
  long lVar1;
  
  __ZNSt3__15mutex4lockEv(param_2 + 0x80);
  *param_1 = 0;
  param_1[1] = 0;
  lVar1 = *(long *)(param_2 + 200);
  if (lVar1 != 0) {
    __ZNSt3__119__shared_weak_count4lockEv();
    param_1[1] = lVar1;
    if (lVar1 != 0) {
      *param_1 = *(undefined8 *)(param_2 + 0xc0);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd478. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__15mutex6unlockEv_110346788)(param_2 + 0x80);
  return;
}



/* Entry: 10a05348c; end: 10a0535c7;  */

long * FUN_10a05348c(long *param_1,long *param_2,long *param_3,undefined8 *param_4,
                    undefined8 param_5,undefined8 param_6)

{
  int iVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  long *plVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  long lStack_70;
  long lStack_68;
  long *plStack_60;
  long *plStack_58;
  
  lVar8 = *param_3;
  if (lVar8 == 0) {
    *(int *)param_1 = 1;
    return param_2;
  }
  lVar7 = *(long *)(lVar8 + 8);
  if (lVar7 == 0) {
    plVar5 = param_2;
    (**(code **)(*param_2 + 0x58))();
    if ((*(byte *)(plVar5 + 0x3c) & 1) == 0) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x10a0535c4);
      (*pcVar4)();
    }
    lStack_68 = param_3[1];
    lStack_70 = *param_3;
    if (param_3[1] != 0) {
      plVar6 = (long *)(param_3[1] + 0x10);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
        if (bVar3) {
          *plVar6 = *plVar6 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    plVar6 = plVar5;
    func_0x000109899f80(plVar5,&lStack_70);
    plStack_60 = plVar6;
    plStack_58 = plVar5;
    if (lStack_68 != 0) {
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
    func_0x00010989f63c(param_1 + 1,param_2,*param_4,&plStack_60,lVar8,param_5,param_6);
    plVar5 = plStack_60;
    *(int *)param_1 = 7;
    plStack_60 = (long *)0x0;
    if (plVar5 == (long *)0x0) {
      return param_2;
    }
    (**(code **)(*plVar5 + 0x18))(plStack_58);
    return plStack_58;
  }
  iVar1 = *(int *)(lVar7 + 8);
  *(int *)param_1 = iVar1;
  if (iVar1 < 4) {
    if (iVar1 == 2) {
      *(undefined1 *)(param_1 + 1) = *(undefined1 *)(lVar7 + 0x10);
      return param_1;
    }
    if (iVar1 == 3) {
      param_1[1] = *(long *)(lVar7 + 0x10);
      return param_1;
    }
  }
  else {
    if (iVar1 == 4) {
      (**(code **)(*param_2 + 0x80))(param_2,*(undefined8 *)(lVar7 + 0x10));
      goto code_r0x000109884a78;
    }
    if (iVar1 == 5) {
      (**(code **)(*param_2 + 0x88))(param_2,*(undefined8 *)(lVar7 + 0x10));
      goto code_r0x000109884a78;
    }
    if (iVar1 == 6) {
      (**(code **)(*param_2 + 0x90))(param_2,*(undefined8 *)(lVar7 + 0x10));
      goto code_r0x000109884a78;
    }
  }
  if (iVar1 < 7) {
    return param_1;
  }
  (**(code **)(*param_2 + 0x98))(param_2,*(undefined8 *)(lVar7 + 0x10));
code_r0x000109884a78:
  param_1[1] = (long)param_2;
  return param_1;
}



/* Entry: 10a0535c8; end: 10a05372b;  */

long FUN_10a0535c8(long param_1)

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



/* Entry: 10a05372c; end: 10a053853;  */

undefined **
FUN_10a05372c(undefined4 *param_1,undefined **param_2,code *param_3,ulong param_4,
             undefined **param_5,undefined8 param_6,undefined8 param_7)

{
  char cVar1;
  bool bVar2;
  code *pcVar3;
  undefined **ppuVar4;
  long *plVar5;
  long *plVar6;
  undefined8 *puVar7;
  undefined *puVar8;
  long lVar9;
  undefined **ppuVar10;
  undefined8 uStack_90;
  long *plStack_88;
  code *pcStack_80;
  long *plStack_78;
  undefined1 *puStack_70;
  code *pcStack_68;
  undefined1 auStack_60 [8];
  undefined **ppuStack_58;
  
  ppuVar10 = param_2;
  func_0x000109898688();
  if (ppuVar10 != (undefined **)0x0) {
    ppuVar4 = param_2;
    FUN_10a053854();
    param_5 = ppuVar10;
    if (ppuVar4 != (undefined **)0x0) {
      param_5 = &PTR_DAT_110b178e0;
      ___dynamic_cast();
      if (ppuVar4 != (undefined **)0x0) {
        FUN_10a05395c(param_7);
        FUN_10a053980(auStack_60,param_2,param_6);
        ppuVar4 = (undefined **)((long)ppuVar4 + ((long)param_4 >> 1));
        if ((param_4 & 1) != 0) {
          param_3 = *(code **)(*ppuVar4 + ((ulong)param_3 & 0xffffffff));
        }
        (*param_3)(ppuVar4,auStack_60);
        if (ppuStack_58 != (undefined **)0x0) {
          ppuVar10 = ppuStack_58 + 1;
          do {
            puVar8 = *ppuVar10;
            cVar1 = '\x01';
            bVar2 = (bool)ExclusiveMonitorPass(ppuVar10,0x10);
            if (bVar2) {
              *ppuVar10 = puVar8 + -1;
              cVar1 = ExclusiveMonitorsStatus();
            }
          } while (cVar1 != '\0');
          if (puVar8 == (undefined *)0x0) {
            (**(code **)(*ppuStack_58 + 0x10))(ppuStack_58);
            __ZNSt3__119__shared_weak_count14__release_weakEv(ppuStack_58);
            ppuVar4 = ppuStack_58;
          }
        }
        *param_1 = 0;
        return ppuVar4;
      }
    }
    func_0x00010988bd28(&UNK_10f685496);
  }
  plVar5 = (long *)&UNK_10f68f52e;
  func_0x00010988bd28();
  func_0x00010a0524e4(auStack_60);
  plVar6 = plVar5;
  __Unwind_Resume();
  pcStack_68 = FUN_10a053854;
  puVar7 = (undefined8 *)*param_5;
  pcStack_80 = param_3;
  plStack_78 = plVar5;
  puStack_70 = &stack0xfffffffffffffff0;
  if (*(char *)(puVar7 + 4) == '\0') {
    (**(code **)(*plVar6 + 0x58))();
    puVar7 = (undefined8 *)*param_5;
    if (plVar6[0x59] != 0) {
      if (*(char *)((long)puVar7 + 0x21) == '\x01') {
        uStack_90 = 0;
        plStack_88 = (long *)0x0;
      }
      else {
        (*(code *)puVar7[2])(&uStack_90,param_5);
      }
      FUN_10a052d10(plVar6 + 0x4b,&uStack_90);
      plVar5 = plStack_88;
      plVar6[0x5a] = plVar6[0x5a] + 1;
      if (plVar6[0x4b] == plVar6[0x4c]) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x10a053958);
        (*pcVar3)();
      }
      ppuVar10 = *(undefined ***)(plVar6[0x4c] + -0x10);
      if (plStack_88 == (long *)0x0) {
        return ppuVar10;
      }
      plVar6 = plStack_88 + 1;
      do {
        lVar9 = *plVar6;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
        if (bVar2) {
          *plVar6 = lVar9 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (lVar9 != 0) {
        return ppuVar10;
      }
      (**(code **)(*plStack_88 + 0x10))(plStack_88);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
      return ppuVar10;
    }
  }
  if ((*(byte *)((long)puVar7 + 0x21) & 1) != 0) {
    return (undefined **)0x0;
  }
                    /* WARNING: Could not recover jumptable at 0x00010a0538a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*puVar7)(param_5);
  return param_5;
}



/* Entry: 10a053854; end: 10a05395b;  */

undefined8 * FUN_10a053854(long *param_1,undefined8 *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  code *pcVar5;
  undefined8 *puVar6;
  long lVar7;
  undefined8 uStack_30;
  long *plStack_28;
  
  puVar6 = (undefined8 *)*param_2;
  if (*(char *)(puVar6 + 4) == '\0') {
    (**(code **)(*param_1 + 0x58))();
    puVar6 = (undefined8 *)*param_2;
    if (param_1[0x59] != 0) {
      if (*(char *)((long)puVar6 + 0x21) == '\x01') {
        uStack_30 = 0;
        plStack_28 = (long *)0x0;
      }
      else {
        (*(code *)puVar6[2])(&uStack_30,param_2);
      }
      FUN_10a052d10(param_1 + 0x4b,&uStack_30);
      plVar4 = plStack_28;
      param_1[0x5a] = param_1[0x5a] + 1;
      if (param_1[0x4b] == param_1[0x4c]) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x10a053958);
        (*pcVar5)();
      }
      puVar6 = *(undefined8 **)(param_1[0x4c] + -0x10);
      if (plStack_28 == (long *)0x0) {
        return puVar6;
      }
      plVar1 = plStack_28 + 1;
      do {
        lVar7 = *plVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = lVar7 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar7 != 0) {
        return puVar6;
      }
      (**(code **)(*plStack_28 + 0x10))(plStack_28);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
      return puVar6;
    }
  }
  if ((*(byte *)((long)puVar6 + 0x21) & 1) != 0) {
    return (undefined8 *)0x0;
  }
                    /* WARNING: Could not recover jumptable at 0x00010a0538a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*puVar6)(param_2);
  return param_2;
}



/* Entry: 10a05395c; end: 10a05397f;  */

void FUN_10a05395c(undefined8 param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 *extraout_x8;
  long *plVar7;
  long lVar8;
  undefined8 uStack_70;
  undefined8 uStack_68;
  long lStack_60;
  long *plStack_58;
  long lStack_50;
  long *plStack_48;
  
  if ((int)param_1 == 1) {
    return;
  }
  uVar5 = 1;
  uVar6 = 0;
  FUN_10a052ee0(1,0,param_1);
  func_0x000109898610(&lStack_50);
  if (lStack_50 == 0) {
    *extraout_x8 = 0;
    extraout_x8[1] = 0;
  }
  else {
    ___dynamic_cast(lStack_50,&PTR_DAT_110b178e0,&PTR_DAT_110c46558,0x10);
    if (lStack_50 == 0) {
      plVar7 = &lStack_60;
    }
    else {
      plStack_58 = plStack_48;
      plVar7 = &lStack_50;
      lStack_60 = lStack_50;
    }
    *plVar7 = 0;
    plVar7[1] = 0;
    if (lStack_60 == 0) {
      func_0x00010988bd28(&UNK_10f685500);
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x10a053a9c);
      (*pcVar4)();
    }
    uStack_70 = uVar5;
    uStack_68 = uVar6;
    FUN_10a053abc(extraout_x8,&lStack_60,&uStack_70);
    plVar7 = plStack_58;
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
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
      }
    }
  }
  if (plStack_48 != (long *)0x0) {
    plVar7 = plStack_48 + 1;
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
      (**(code **)(*plStack_48 + 0x10))(plStack_48);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_48);
    }
  }
  return;
}


