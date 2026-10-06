/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10a7c9294; end: 10a7c92a3;  */

void FUN_10a7c9294(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c18d38;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10a7c92a4; end: 10a7c92c3;  */

void FUN_10a7c92a4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c18d38;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a7c92c4; end: 10a7c92db;  */

void FUN_10a7c92c4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010a7c92cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 10a7c92dc; end: 10a7c9413;  */

long FUN_10a7c92dc(long param_1,int param_2,int param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  undefined1 auStack_68 [8];
  undefined8 *apuStack_60 [7];
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if (param_2 == 0xc) {
    if (param_3 == 8) {
      if (*(char *)(param_1 + 0x10) != '\x01') goto LAB_10a7c93b0;
      lVar4 = *(long *)(*(long *)(param_1 + 8) + 0x870);
      (**(code **)(lVar4 + 0x100))(auStack_68,lVar4 + 0x100);
      *(undefined1 *)(param_1 + 0x10) = 0;
      FUN_10a07e58c(*(undefined8 *)(*(long *)(param_1 + 8) + 0xe18));
    }
    else {
      if ((param_3 != 7) || ((*(byte *)(param_1 + 0x10) & 1) != 0)) goto LAB_10a7c93b0;
      lVar4 = *(long *)(*(long *)(param_1 + 8) + 0x870);
      (**(code **)(lVar4 + 0x100))(auStack_68,lVar4 + 0x100);
      *(undefined1 *)(param_1 + 0x10) = 1;
      FUN_10a07e58c(*(undefined8 *)(*(long *)(param_1 + 8) + 0xe08));
    }
    FUN_10a044790(auStack_68);
    (*(code *)*apuStack_60[0])(apuStack_60);
    lVar4 = 1;
  }
  else {
LAB_10a7c93b0:
    lVar4 = 0;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return lVar4;
  }
  ___stack_chk_fail();
  FUN_10a044790(auStack_68);
  (*(code *)*apuStack_60[0])(apuStack_60);
  __Unwind_Resume();
  plVar6 = *(long **)(lVar4 + 8);
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
  return lVar4;
}



/* Entry: 10a7c9414; end: 10a7c946b;  */

long FUN_10a7c9414(long param_1)

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



/* Entry: 10a7c946c; end: 10a7c973f;  */

long * FUN_10a7c946c(long *param_1,long *param_2,long param_3)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  ulong uVar4;
  long lVar5;
  long *plVar6;
  ulong uVar7;
  long *plVar8;
  long *plVar9;
  long *unaff_x28;
  long lVar10;
  
  param_1[1] = 0;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 4) = 0x3f800000;
  if (param_3 != 0) {
    plVar8 = param_2 + param_3 * 6;
    plVar1 = param_1 + 2;
    do {
      plVar6 = param_1;
      func_0x000107c2b05c(param_1,param_2);
      plVar9 = (long *)param_1[1];
      if (plVar9 != (long *)0x0) {
        uVar7 = (long)plVar9 - 1;
        if (((ulong)plVar9 & uVar7) == 0) {
          unaff_x28 = (long *)(uVar7 & (ulong)plVar6);
        }
        else {
          unaff_x28 = plVar6;
          if (plVar9 <= plVar6) {
            uVar4 = 0;
            if (plVar9 != (long *)0x0) {
              uVar4 = (ulong)plVar6 / (ulong)plVar9;
            }
            unaff_x28 = (long *)((long)plVar6 - uVar4 * (long)plVar9);
          }
        }
        plVar2 = *(long **)(*param_1 + (long)unaff_x28 * 8);
        if (plVar2 != (long *)0x0) {
          for (plVar2 = (long *)*plVar2; plVar2 != (long *)0x0; plVar2 = (long *)*plVar2) {
            plVar3 = (long *)plVar2[1];
            if (plVar3 == plVar6) {
              plVar3 = param_1;
              func_0x000107c2b068(param_1,plVar2 + 2,param_2);
              if (((ulong)plVar3 & 1) != 0) goto LAB_10a7c96cc;
            }
            else {
              if (((ulong)plVar9 & uVar7) == 0) {
                plVar3 = (long *)((ulong)plVar3 & uVar7);
              }
              else if (plVar9 <= plVar3) {
                uVar4 = 0;
                if (plVar9 != (long *)0x0) {
                  uVar4 = (ulong)plVar3 / (ulong)plVar9;
                }
                plVar3 = (long *)((long)plVar3 - uVar4 * (long)plVar9);
              }
              if (plVar3 != unaff_x28) break;
            }
          }
        }
      }
      plVar2 = (long *)0x40;
      __Znwm();
      *plVar2 = 0;
      plVar2[1] = (long)plVar6;
      if (*(char *)((long)param_2 + 0x17) < '\0') {
        func_0x000107c3192c(plVar2 + 2,*param_2,param_2[1]);
      }
      else {
        lVar10 = param_2[1];
        lVar5 = *param_2;
        plVar2[4] = param_2[2];
        plVar2[3] = lVar10;
        plVar2[2] = lVar5;
      }
      plVar2[5] = 0;
      plVar2[6] = 0;
      plVar2[7] = 0;
      FUN_10a0cf0cc();
      if ((plVar9 == (long *)0x0) ||
         (*(float *)(param_1 + 4) * (float)plVar9 < (float)(param_1[3] + 1))) {
        uVar7 = 1;
        if ((long *)0x2 < plVar9) {
          uVar7 = (ulong)(((ulong)plVar9 & (long)plVar9 - 1U) != 0);
        }
        uVar7 = uVar7 | (long)plVar9 << 1;
        uVar4 = (ulong)((float)(param_1[3] + 1) / *(float *)(param_1 + 4));
        if (uVar7 <= uVar4) {
          uVar7 = uVar4;
        }
        func_0x00010a756d0c(param_1,uVar7);
        plVar9 = (long *)param_1[1];
        if (((ulong)plVar9 & (long)plVar9 - 1U) == 0) {
          unaff_x28 = (long *)((long)plVar9 - 1U & (ulong)plVar6);
        }
        else {
          unaff_x28 = plVar6;
          if (plVar9 <= plVar6) {
            uVar7 = 0;
            if (plVar9 != (long *)0x0) {
              uVar7 = (ulong)plVar6 / (ulong)plVar9;
            }
            unaff_x28 = (long *)((long)plVar6 - uVar7 * (long)plVar9);
          }
        }
      }
      lVar5 = *param_1;
      plVar6 = *(long **)(lVar5 + (long)unaff_x28 * 8);
      if (plVar6 == (long *)0x0) {
        *plVar2 = *plVar1;
        *plVar1 = (long)plVar2;
        *(long **)(lVar5 + (long)unaff_x28 * 8) = plVar1;
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
LAB_10a7c96cc:
      param_2 = param_2 + 6;
    } while (param_2 != plVar8);
  }
  return param_1;
}



/* Entry: 10a7c9740; end: 10a7c97a3;  */

undefined8 * FUN_10a7c9740(undefined8 *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  
  *param_1 = param_2;
  puVar1 = (undefined8 *)0x20;
  __Znwm();
  *puVar1 = &PTR_FUN_110c18dc8;
  puVar1[1] = 0;
  puVar1[2] = 0;
  puVar1[3] = param_2;
  param_1[1] = puVar1;
  return param_1;
}



/* Entry: 10a7c97a4; end: 10a7c97a7;  */

void FUN_10a7c97a4(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10a7c97a8; end: 10a7c97bb;  */

void FUN_10a7c97a8(void)

{
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a7c97bc; end: 10a7c97d3;  */

void FUN_10a7c97bc(long param_1)

{
  if (*(long **)(param_1 + 0x18) != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00010a7c97cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(param_1 + 0x18) + 8))();
    return;
  }
  return;
}



/* Entry: 10a7c97d4; end: 10a7c980b;  */

undefined8 FUN_10a7c97d4(undefined8 param_1,undefined8 param_2)

{
  FUN_10a042ab0(param_2,&PTR_DAT_110c18e08);
  if ((int)param_2 == 0) {
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 10a7c980c; end: 10a7c980f;  */

void FUN_10a7c980c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a7c9810; end: 10a7c9bff;  */

undefined1  [16] FUN_10a7c9810(long *param_1,ulong *param_2,long *param_3)

{
  ulong uVar1;
  code *pcVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  ulong uVar6;
  ulong uVar7;
  long *plVar8;
  ulong uVar9;
  undefined8 *puVar10;
  ulong uVar11;
  long *plVar12;
  long *plVar13;
  ulong uVar14;
  long *plVar15;
  ulong uVar16;
  ulong unaff_x24;
  undefined1 auVar17 [16];
  
  uVar6 = *param_2;
  uVar9 = ((ulong)(uint)((int)uVar6 << 3) + 8 ^ uVar6 >> 0x20) * -0x622015f714c7d297;
  uVar9 = (uVar6 >> 0x20 ^ uVar9 >> 0x2f ^ uVar9) * -0x622015f714c7d297;
  uVar16 = (uVar9 ^ uVar9 >> 0x2f) * -0x622015f714c7d297;
  uVar9 = param_1[1];
  if (uVar9 != 0) {
    uVar7 = uVar9 - 1;
    if ((uVar9 & uVar7) == 0) {
      unaff_x24 = uVar16 & uVar7;
    }
    else {
      unaff_x24 = uVar16;
      if (uVar9 <= uVar16) {
        uVar11 = 0;
        if (uVar9 != 0) {
          uVar11 = uVar16 / uVar9;
        }
        unaff_x24 = uVar16 - uVar11 * uVar9;
      }
    }
    puVar10 = *(undefined8 **)(*param_1 + unaff_x24 * 8);
    if (puVar10 != (undefined8 *)0x0) {
      for (plVar15 = (long *)*puVar10; plVar15 != (long *)0x0; plVar15 = (long *)*plVar15) {
        uVar11 = plVar15[1];
        if (uVar11 == uVar16) {
          if (plVar15[2] == uVar6) {
            uVar5 = 0;
            goto LAB_10a7c9b88;
          }
        }
        else {
          if ((uVar9 & uVar7) == 0) {
            uVar11 = uVar11 & uVar7;
          }
          else if (uVar9 <= uVar11) {
            uVar14 = 0;
            if (uVar9 != 0) {
              uVar14 = uVar11 / uVar9;
            }
            uVar11 = uVar11 - uVar14 * uVar9;
          }
          if (uVar11 != unaff_x24) break;
        }
      }
    }
  }
  plVar15 = (long *)0x18;
  __Znwm();
  *plVar15 = 0;
  plVar15[1] = uVar16;
  plVar15[2] = *param_3;
  if ((uVar9 == 0) || (*(float *)(param_1 + 4) * (float)uVar9 < (float)(param_1[3] + 1))) {
    uVar6 = 1;
    if (2 < uVar9) {
      uVar6 = (ulong)((uVar9 & uVar9 - 1) != 0);
    }
    uVar6 = uVar6 | uVar9 << 1;
    uVar7 = (ulong)((float)(param_1[3] + 1) / *(float *)(param_1 + 4));
    if (uVar6 <= uVar7) {
      uVar6 = uVar7;
    }
    if (uVar6 - 1 == 0) {
      uVar6 = 2;
    }
    else if ((uVar6 & uVar6 - 1) != 0) {
      __ZNSt3__112__next_primeEm();
      uVar9 = param_1[1];
    }
    if (uVar9 < uVar6) {
LAB_10a7c9998:
      if (uVar6 >> 0x3d != 0) {
        func_0x000109ffded8();
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x10a7c9bec);
        (*pcVar2)();
      }
      lVar3 = uVar6 << 3;
      __Znwm();
      lVar4 = *param_1;
      *param_1 = lVar3;
      if (lVar4 != 0) {
        __ZdlPv();
      }
      uVar9 = 0;
      param_1[1] = uVar6;
      do {
        *(undefined8 *)(*param_1 + uVar9 * 8) = 0;
        uVar9 = uVar9 + 1;
      } while (uVar6 != uVar9);
      plVar8 = (long *)param_1[2];
      uVar9 = uVar6;
      if (plVar8 != (long *)0x0) {
        uVar7 = plVar8[1];
        uVar11 = uVar6 - 1;
        if ((uVar6 & uVar11) == 0) {
          uVar7 = uVar7 & uVar11;
        }
        else if (uVar6 <= uVar7) {
          uVar14 = 0;
          if (uVar6 != 0) {
            uVar14 = uVar7 / uVar6;
          }
          uVar7 = uVar7 - uVar14 * uVar6;
        }
        *(long **)(*param_1 + uVar7 * 8) = param_1 + 2;
        plVar12 = (long *)*plVar8;
        while (plVar12 != (long *)0x0) {
          uVar14 = plVar12[1];
          if ((uVar6 & uVar11) == 0) {
            uVar14 = uVar14 & uVar11;
          }
          else if (uVar6 <= uVar14) {
            uVar1 = 0;
            if (uVar6 != 0) {
              uVar1 = uVar14 / uVar6;
            }
            uVar14 = uVar14 - uVar1 * uVar6;
          }
          plVar13 = plVar12;
          if (uVar14 != uVar7) {
            lVar3 = *param_1;
            if (*(long *)(lVar3 + uVar14 * 8) == 0) {
              *(long **)(lVar3 + uVar14 * 8) = plVar8;
              uVar7 = uVar14;
            }
            else {
              *plVar8 = *plVar12;
              *plVar12 = **(undefined8 **)(lVar3 + uVar14 * 8);
              **(long **)(lVar3 + uVar14 * 8) = (long)plVar12;
              plVar13 = plVar8;
            }
          }
          plVar8 = plVar13;
          plVar12 = (long *)*plVar13;
        }
      }
    }
    else if (uVar6 < uVar9) {
      uVar7 = (ulong)((float)(ulong)param_1[3] / *(float *)(param_1 + 4));
      if ((uVar9 < 3) || ((uVar9 & uVar9 - 1) != 0)) {
        __ZNSt3__112__next_primeEm();
      }
      else if (1 < uVar7) {
        uVar7 = 1L << (-LZCOUNT(uVar7 - 1) & 0x3fU);
      }
      if (uVar6 <= uVar7) {
        uVar6 = uVar7;
      }
      if (uVar6 < uVar9) {
        if (uVar6 != 0) goto LAB_10a7c9998;
        lVar3 = *param_1;
        *param_1 = 0;
        if (lVar3 != 0) {
          __ZdlPv();
        }
        param_1[1] = 0;
        uVar9 = 0;
      }
      else {
        uVar9 = param_1[1];
      }
    }
    if ((uVar9 & uVar9 - 1) == 0) {
      unaff_x24 = uVar9 - 1 & uVar16;
    }
    else {
      unaff_x24 = uVar16;
      if (uVar9 <= uVar16) {
        uVar6 = 0;
        if (uVar9 != 0) {
          uVar6 = uVar16 / uVar9;
        }
        unaff_x24 = uVar16 - uVar6 * uVar9;
      }
    }
  }
  lVar3 = *param_1;
  plVar8 = *(long **)(lVar3 + unaff_x24 * 8);
  if (plVar8 == (long *)0x0) {
    plVar8 = param_1 + 2;
    *plVar15 = *plVar8;
    *plVar8 = (long)plVar15;
    *(long **)(lVar3 + unaff_x24 * 8) = plVar8;
    if (*plVar15 == 0) goto LAB_10a7c9b78;
    uVar6 = *(ulong *)(*plVar15 + 8);
    if ((uVar9 & uVar9 - 1) == 0) {
      uVar6 = uVar6 & uVar9 - 1;
    }
    else if (uVar9 <= uVar6) {
      uVar16 = 0;
      if (uVar9 != 0) {
        uVar16 = uVar6 / uVar9;
      }
      uVar6 = uVar6 - uVar16 * uVar9;
    }
    plVar8 = (long *)(*param_1 + uVar6 * 8);
  }
  else {
    *plVar15 = *plVar8;
  }
  *plVar8 = (long)plVar15;
LAB_10a7c9b78:
  param_1[3] = param_1[3] + 1;
  uVar5 = 1;
LAB_10a7c9b88:
  auVar17._8_8_ = uVar5;
  auVar17._0_8_ = plVar15;
  return auVar17;
}



/* Entry: 10a7c9c00; end: 10a7c9c33;  */

void FUN_10a7c9c00(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_10a7c9c34();
  if (lVar1 != 0) {
    FUN_10a7c9d0c(param_1,lVar1);
  }
  return;
}



/* Entry: 10a7c9c34; end: 10a7c9d0b;  */

long * FUN_10a7c9c34(long *param_1,ulong *param_2)

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



/* Entry: 10a7c9d0c; end: 10a7c9d53;  */

undefined8 FUN_10a7c9d0c(undefined8 param_1,undefined8 *param_2)

{
  long lVar1;
  code *pcVar2;
  undefined8 uVar3;
  long alStack_38 [3];
  
  if (param_2 != (undefined8 *)0x0) {
    uVar3 = *param_2;
    FUN_10a7c9d54(alStack_38);
    lVar1 = alStack_38[0];
    alStack_38[0] = 0;
    if (lVar1 != 0) {
      __ZdlPv();
    }
    return uVar3;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10a7c9d54);
  (*pcVar2)();
}



/* Entry: 10a7c9d54; end: 10a7c9e73;  */

void FUN_10a7c9d54(undefined8 *param_1,long *param_2,long *param_3)

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
    if (uVar8 == uVar3) goto LAB_10a7c9e08;
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
    if (uVar8 == uVar3) goto LAB_10a7c9e08;
  }
  *(undefined8 *)(*param_2 + uVar3 * 8) = 0;
LAB_10a7c9e08:
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



/* Entry: 10a7c9e74; end: 10a7c9ebb;  */

undefined8 FUN_10a7c9e74(void)

{
  undefined8 uVar1;
  
  uVar1 = 0x18;
  __Znwm(0x18);
  func_0x000107c2b054();
  return uVar1;
}



/* Entry: 10a7c9ebc; end: 10a7ca373;  */

void FUN_10a7c9ebc(long param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  long *plVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  undefined8 *puVar9;
  undefined8 uStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  if ((*(byte *)(param_1 + 0x1c4) & 1) == 0) {
    *(undefined8 *)(param_1 + 0x1a0) = *(undefined8 *)(param_1 + 0x1a8);
    FUN_10a6db324(param_1 + 0x1b0,param_1 + 0x1a0,param_1 + 400);
    *(long *)(param_1 + 0x1a8) = *(long *)(param_1 + 0x1b0);
    plVar5 = (long *)(*(long *)(param_1 + 0x1b0) + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar3) {
        *plVar5 = *plVar5 + 4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (((uint)*(undefined8 *)(*(long *)(param_1 + 0x1a8) + 0x10) >> 1 & 1) == 0) {
      *(undefined1 *)(param_1 + 0x1c4) = 1;
      lVar8 = *(long *)(param_1 + 0x1a8);
      plVar5 = (long *)(lVar8 + 0x10);
      uStack_38 = *(undefined8 *)(param_1 + 0x18);
      do {
        lVar7 = *plVar5;
        if (lVar7 == 0) {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
          if (bVar3) {
            *plVar5 = 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
          if (cVar2 == '\0') {
            uStack_48 = 0;
            lStack_40 = param_1;
            func_0x000109d1b588(lVar8 + 0x18,&uStack_48);
            *(undefined8 *)(lVar8 + 0x10) = 0;
            return;
          }
        }
        else {
          ClearExclusiveLocal();
        }
      } while (((uint)lVar7 >> 1 & 1) == 0);
    }
  }
  lVar8 = *(long *)(param_1 + 0x1a8);
  if (((uint)*(undefined8 *)(*(long *)(param_1 + 0x1a8) + 0x10) >> 5 & 1) == 0) {
    if ((*(byte *)(lVar8 + 0xa8) & 1) != 0) {
      FUN_10a79def0(param_1 + 0x10,lVar8 + 0x98);
      plVar5 = *(long **)(param_1 + 0x1a8);
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
      plVar5 = *(long **)(param_1 + 0x1b0);
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
      plVar5 = *(long **)(param_1 + 0x1a0);
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
          (**(code **)(*plVar5 + 0x10))(plVar5);
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
            (**(code **)(*plVar5 + 8))(plVar5);
          }
        }
      }
      if (*(char *)(param_1 + 399) < '\0') {
        __ZdlPv(*(undefined8 *)(param_1 + 0x178));
      }
      if (*(char *)(param_1 + 0x177) < '\0') {
        __ZdlPv(*(undefined8 *)(param_1 + 0x160));
      }
      if (*(char *)(param_1 + 0x15f) < '\0') {
        __ZdlPv(*(undefined8 *)(param_1 + 0x148));
      }
      if (*(char *)(param_1 + 0x147) < '\0') {
        __ZdlPv(*(undefined8 *)(param_1 + 0x130));
      }
      if (*(char *)(param_1 + 0x12f) < '\0') {
        __ZdlPv(*(undefined8 *)(param_1 + 0x118));
      }
      if (*(char *)(param_1 + 0x117) < '\0') {
        __ZdlPv(*(undefined8 *)(param_1 + 0x100));
      }
      puVar9 = *(undefined8 **)(param_1 + 0x1b8);
      (*(code *)**(undefined8 **)(param_1 + 0x90))((undefined8 *)(param_1 + 0x90));
      (**(code **)*puVar9)(puVar9);
      if (*(long *)(param_1 + 0x198) != 0) {
        func_0x0001092b4274(param_1 + 0x198);
      }
      plVar5 = *(long **)(param_1 + 400);
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
      func_0x000109d1a1d0(param_1 + 0x10);
      if ((ulong)*(byte *)(param_1 + 0xf8) < 4) {
        (*(code *)(&PTR_FUN_110c14970)[*(byte *)(param_1 + 0xf8)])(param_1 + 200);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR___ZdlPv_110352258)(param_1);
        return;
      }
    }
  }
  else {
    func_0x0001092af97c(lVar8 + 0x90);
  }
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x10a7ca1d0);
  (*pcVar4)();
}



/* Entry: 10a7ca374; end: 10a7ca5e7;  */

void FUN_10a7ca374(long param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  ulong uVar5;
  long *plVar6;
  undefined8 *puVar7;
  
  plVar6 = *(long **)(param_1 + 0x1a8);
  if ((*(byte *)(param_1 + 0x1c4) & 1) == 0) {
    if (plVar6 == (long *)0x0) goto LAB_10a7ca4c8;
    puVar1 = (ulong *)(plVar6 + 1);
    do {
      uVar5 = *puVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = uVar5 - 4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((uVar5 & 0x1fffffffc) != 4) goto LAB_10a7ca4c8;
    (**(code **)(*plVar6 + 0x10))(plVar6);
    do {
      uVar5 = *puVar1 - 1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = uVar5;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  else {
    if (plVar6 != (long *)0x0) {
      puVar1 = (ulong *)(plVar6 + 1);
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
          (**(code **)(*plVar6 + 8))(plVar6);
        }
      }
    }
    plVar6 = *(long **)(param_1 + 0x1b0);
    if (plVar6 != (long *)0x0) {
      puVar1 = (ulong *)(plVar6 + 1);
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
          (**(code **)(*plVar6 + 8))();
        }
      }
    }
    plVar6 = *(long **)(param_1 + 0x1a0);
    if (plVar6 == (long *)0x0) goto LAB_10a7ca4c8;
    puVar1 = (ulong *)(plVar6 + 1);
    do {
      uVar5 = *puVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = uVar5 - 4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((uVar5 & 0x1fffffffc) != 4) goto LAB_10a7ca4c8;
    (**(code **)(*plVar6 + 0x10))(plVar6);
    do {
      uVar5 = *puVar1 - 1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = uVar5;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  if (uVar5 == 0) {
    (**(code **)(*plVar6 + 8))(plVar6);
  }
LAB_10a7ca4c8:
  if (*(char *)(param_1 + 399) < '\0') {
    __ZdlPv(*(undefined8 *)(param_1 + 0x178));
  }
  if (*(char *)(param_1 + 0x177) < '\0') {
    __ZdlPv(*(undefined8 *)(param_1 + 0x160));
  }
  if (*(char *)(param_1 + 0x15f) < '\0') {
    __ZdlPv(*(undefined8 *)(param_1 + 0x148));
  }
  if (*(char *)(param_1 + 0x147) < '\0') {
    __ZdlPv(*(undefined8 *)(param_1 + 0x130));
  }
  if (*(char *)(param_1 + 0x12f) < '\0') {
    __ZdlPv(*(undefined8 *)(param_1 + 0x118));
  }
  if (*(char *)(param_1 + 0x117) < '\0') {
    __ZdlPv(*(undefined8 *)(param_1 + 0x100));
  }
  puVar7 = *(undefined8 **)(param_1 + 0x1b8);
  (*(code *)**(undefined8 **)(param_1 + 0x90))((undefined8 *)(param_1 + 0x90));
  (**(code **)*puVar7)(puVar7);
  if (*(long *)(param_1 + 0x198) != 0) {
    func_0x0001092b4274(param_1 + 0x198);
  }
  plVar6 = *(long **)(param_1 + 400);
  if (plVar6 != (long *)0x0) {
    puVar1 = (ulong *)(plVar6 + 1);
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
        (**(code **)(*plVar6 + 8))();
      }
    }
  }
  func_0x000109d1a1d0(param_1 + 0x10);
  if (3 < (ulong)*(byte *)(param_1 + 0xf8)) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x10a7ca5e8);
    (*pcVar4)();
  }
  (*(code *)(&PTR_FUN_110c14970)[*(byte *)(param_1 + 0xf8)])(param_1 + 200);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 10a7ca5e8; end: 10a7ca62b;  */

void FUN_10a7ca5e8(void)

{
  long lVar1;
  char *pcVar2;
  
  lVar1 = -0x80;
  pcVar2 = (char *)0x1137ebbd7;
  do {
    if (*pcVar2 < '\0') {
      __ZdlPv(*(undefined8 *)(pcVar2 + -0x17));
    }
    lVar1 = lVar1 + 0x20;
    pcVar2 = pcVar2 + -0x20;
  } while (lVar1 != 0);
  return;
}



/* Entry: 10a7ca62c; end: 10a7cac67;  */

void FUN_10a7ca62c(undefined8 param_1,int *param_2)

{
  int iVar1;
  undefined1 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  char *pcVar7;
  undefined **ppuVar8;
  undefined1 uVar9;
  undefined8 uVar10;
  int *piVar11;
  long lVar12;
  undefined8 uStack_b8;
  undefined1 uStack_b0;
  undefined8 *puStack_a8;
  undefined1 uStack_a0;
  int *piStack_98;
  undefined1 uStack_90;
  int *piStack_88;
  undefined1 uStack_80;
  undefined6 uStack_7f;
  undefined1 uStack_79;
  undefined1 uStack_78;
  undefined2 uStack_77;
  undefined1 uStack_75;
  undefined4 uStack_74;
  undefined8 uStack_70;
  undefined1 uStack_60;
  undefined8 uStack_58;
  undefined1 auStack_50 [8];
  undefined8 uStack_48;
  
  auStack_50[0] = 0;
  uStack_48 = 0;
  uStack_60 = 0;
  uStack_58 = 0;
  if ((bRam00000001137ebbe0 & 1) == 0) {
    iVar1 = 0x137ebbe0;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      uRam00000001137ebc10 = 0;
      puRam00000001137ebc20 = (undefined *)0x0;
      uRam00000001137ebc18 = 3;
      puVar5 = &UNK_10f6780a2;
      func_0x0001094a957c();
      uRam00000001137ebc28 = 1;
      puRam00000001137ebc38 = (undefined *)0x0;
      uRam00000001137ebc30 = 3;
      puVar6 = &UNK_10f6780a8;
      puRam00000001137ebc20 = puVar5;
      FUN_10a7d27a8();
      uRam00000001137ebc40 = 2;
      puRam00000001137ebc50 = (undefined *)0x0;
      uRam00000001137ebc48 = 3;
      puRam00000001137ebc38 = puVar6;
      FUN_10a7d27f0();
      uRam00000001137ebc58 = 3;
      puRam00000001137ebc68 = (undefined *)0x0;
      uRam00000001137ebc60 = 3;
      puVar5 = &UNK_10f6780c3;
      puRam00000001137ebc50 = puVar6;
      FUN_10a7d2838();
      uRam00000001137ebc70 = 4;
      pcRam00000001137ebc80 = (char *)0x0;
      uRam00000001137ebc78 = 3;
      pcVar7 = "Done";
      puRam00000001137ebc68 = puVar5;
      func_0x0001094a9534();
      uRam00000001137ebc88 = 5;
      ppuRam00000001137ebc98 = (undefined **)0x0;
      uRam00000001137ebc90 = 3;
      ppuVar8 = &PTR_DAT_110c1b2f0;
      pcRam00000001137ebc80 = pcVar7;
      FUN_10a26a62c();
      ppuRam00000001137ebc98 = ppuVar8;
      ___cxa_atexit(0x10a7d8828,0,0x100000000);
      ___cxa_guard_release(0x1137ebbe0);
    }
  }
  piVar11 = (int *)0x1137ebc10;
  lVar12 = 0x90;
  do {
    if (*piVar11 == *param_2) {
      if (lVar12 != 0) goto LAB_10a7ca6ac;
      break;
    }
    piVar11 = piVar11 + 6;
    lVar12 = lVar12 + -0x18;
  } while (lVar12 != 0);
  piVar11 = (int *)0x1137ebc10;
LAB_10a7ca6ac:
  func_0x000109381b20(&uStack_80,piVar11 + 2);
  uVar9 = uStack_60;
  uStack_60 = uStack_80;
  uStack_80 = uVar9;
  uVar10 = CONCAT44(uStack_74,CONCAT13(uStack_75,CONCAT21(uStack_77,uStack_78)));
  uStack_78 = (undefined1)uStack_58;
  uStack_77 = (undefined2)((ulong)uStack_58 >> 8);
  uStack_75 = (undefined1)((ulong)uStack_58 >> 0x18);
  uStack_74 = (undefined4)((ulong)uStack_58 >> 0x20);
  uStack_58 = uVar10;
  func_0x000109380ffc(&uStack_78);
  uStack_70 = CONCAT17(0x14,(undefined7)uStack_70);
  uStack_78 = 0x6e;
  uStack_77 = 0x654d;
  uStack_75 = 0x73;
  uStack_74 = 0x65676173;
  uStack_80 = 0x45;
  uStack_7f = 0x69746f6d6f67;
  uStack_79 = 0x6f;
  uStack_70 = CONCAT35(uStack_70._5_3_,0x65707954);
  puVar2 = auStack_50;
  func_0x0001095b7584(puVar2,&uStack_80);
  uVar9 = *puVar2;
  *puVar2 = uStack_60;
  uVar10 = *(undefined8 *)(puVar2 + 8);
  uStack_60 = uVar9;
  *(undefined8 *)(puVar2 + 8) = uStack_58;
  uStack_58 = uVar10;
  if (uStack_70 < 0) {
    __ZdlPv(CONCAT17(uStack_79,CONCAT61(uStack_7f,uStack_80)));
    uVar9 = uStack_60;
  }
  func_0x000109380ffc(&uStack_58,uVar9);
  piStack_88 = (int *)0x0;
  uStack_90 = 3;
  piVar11 = param_2 + 2;
  func_0x00010938229c();
  uStack_70._7_1_ = '\v';
  uStack_78 = 0x6f;
  uStack_77 = 0x7964;
  uStack_80 = 0x4d;
  uStack_7f = 0x656761737365;
  uStack_79 = 0x42;
  uStack_75 = 0;
  puVar2 = auStack_50;
  piStack_88 = piVar11;
  func_0x0001095b7584(puVar2,&uStack_80);
  uVar9 = *puVar2;
  *puVar2 = uStack_90;
  piVar11 = *(int **)(puVar2 + 8);
  uStack_90 = uVar9;
  *(int **)(puVar2 + 8) = piStack_88;
  piStack_88 = piVar11;
  if (uStack_70._7_1_ < '\0') {
    __ZdlPv(CONCAT17(uStack_79,CONCAT61(uStack_7f,uStack_80)));
    uVar9 = uStack_90;
  }
  func_0x000109380ffc(&piStack_88,uVar9);
  piStack_98 = (int *)0x0;
  uStack_a0 = 3;
  piVar11 = param_2 + 8;
  func_0x00010938229c();
  uStack_70._7_1_ = '\b';
  uStack_80 = 0x53;
  uStack_7f = 0x497265646e65;
  uStack_79 = 100;
  uStack_78 = 0;
  puVar2 = auStack_50;
  piStack_98 = piVar11;
  func_0x0001095b7584(puVar2,&uStack_80);
  uVar9 = *puVar2;
  *puVar2 = 3;
  piVar11 = *(int **)(puVar2 + 8);
  uStack_a0 = uVar9;
  *(int **)(puVar2 + 8) = piStack_98;
  piStack_98 = piVar11;
  if (uStack_70._7_1_ < '\0') {
    __ZdlPv(CONCAT17(uStack_79,CONCAT61(uStack_7f,uStack_80)));
    uVar9 = uStack_a0;
  }
  func_0x000109380ffc(&piStack_98,uVar9);
  puStack_a8 = (undefined8 *)0x0;
  uStack_b0 = 3;
  puVar3 = (undefined8 *)0x18;
  __Znwm();
  *(undefined2 *)(puVar3 + 2) = 0x45;
  *puVar3 = 0x4f49544f4d4f4745;
  puVar3[1] = 0x47415353454d5f4e;
  *(undefined1 *)((long)puVar3 + 0x17) = 0x11;
  puVar4 = (undefined8 *)0x20;
  puStack_a8 = puVar3;
  __Znwm();
  uStack_80 = SUB81(puVar4,0);
  uStack_7f = (undefined6)((ulong)puVar4 >> 8);
  uStack_79 = (undefined1)((ulong)puVar4 >> 0x38);
  uStack_70 = -0x7fffffffffffffe0;
  uStack_78 = 0x1c;
  uStack_77 = 0;
  uStack_75 = 0;
  uStack_74 = 0;
  puVar4[1] = 0x45544e495f524559;
  *puVar4 = 0x414c5049544c554d;
  *(undefined8 *)((long)puVar4 + 0x14) = 0x4547415353454d5f;
  *(undefined8 *)((long)puVar4 + 0xc) = 0x4c414e5245544e49;
  *(undefined1 *)((long)puVar4 + 0x1c) = 0;
  puVar2 = auStack_50;
  func_0x0001095b7584(puVar2,&uStack_80);
  uVar9 = *puVar2;
  *puVar2 = uStack_b0;
  puVar3 = *(undefined8 **)(puVar2 + 8);
  uStack_b0 = uVar9;
  *(undefined8 **)(puVar2 + 8) = puStack_a8;
  puStack_a8 = puVar3;
  if (uStack_70 < 0) {
    __ZdlPv(CONCAT17(uStack_79,CONCAT61(uStack_7f,uStack_80)));
    uVar9 = uStack_b0;
  }
  func_0x000109380ffc(&puStack_a8,uVar9);
  if ((char)param_2[0x10] == '\x01') {
    uStack_b8 = *(undefined8 *)(param_2 + 0xe);
    puVar3 = (undefined8 *)0x20;
    __Znwm();
    uStack_80 = SUB81(puVar3,0);
    uStack_7f = (undefined6)((ulong)puVar3 >> 8);
    uStack_79 = (undefined1)((ulong)puVar3 >> 0x38);
    uStack_70 = -0x7fffffffffffffe0;
    uStack_78 = 0x1c;
    uStack_77 = 0;
    uStack_75 = 0;
    uStack_74 = 0;
    puVar3[1] = 0x4d6b636f6c43636e;
    *puVar3 = 0x79537265646e6553;
    *(undefined8 *)((long)puVar3 + 0x14) = 0x734e726576726553;
    *(undefined8 *)((long)puVar3 + 0xc) = 0x73756e694d6b636f;
    *(undefined1 *)((long)puVar3 + 0x1c) = 0;
    puVar2 = auStack_50;
    func_0x0001095b7584(puVar2,&uStack_80);
    uVar9 = *puVar2;
    *puVar2 = 5;
    uVar10 = *(undefined8 *)(puVar2 + 8);
    *(undefined8 *)(puVar2 + 8) = uStack_b8;
    uStack_b8 = uVar10;
    if (uStack_70 < 0) {
      __ZdlPv(CONCAT17(uStack_79,CONCAT61(uStack_7f,uStack_80)));
    }
    func_0x000109380ffc(&uStack_b8,uVar9);
  }
  FUN_10a0c32e4(param_1,auStack_50,0xffffffff,0x20,0,0);
  func_0x000109380ffc(&uStack_48,auStack_50[0]);
  return;
}



/* Entry: 10a7cac68; end: 10a7caca7;  */

long FUN_10a7cac68(long param_1)

{
  if (*(char *)(param_1 + 0x37) < '\0') {
    __ZdlPv(*(undefined8 *)(param_1 + 0x20));
  }
  if (*(char *)(param_1 + 0x1f) < '\0') {
    __ZdlPv(*(undefined8 *)(param_1 + 8));
  }
  return param_1;
}



/* Entry: 10a7caca8; end: 10a7cad13;  */

void FUN_10a7caca8(undefined8 param_1)

{
  undefined1 auStack_68 [8];
  undefined8 uStack_60;
  char cStack_49;
  undefined8 uStack_48;
  char cStack_31;
  
  FUN_10a7cad14(auStack_68);
  FUN_10a7ca62c(param_1,auStack_68);
  if (cStack_31 < '\0') {
    __ZdlPv(uStack_48);
  }
  if (cStack_49 < '\0') {
    __ZdlPv(uStack_60);
  }
  return;
}



/* Entry: 10a7cad14; end: 10a7cadbb;  */

void FUN_10a7cad14(undefined4 *param_1,long param_2)

{
  undefined8 uVar1;
  
  *param_1 = 5;
  if (*(char *)(param_2 + 0x1f) < '\0') {
    func_0x000107c3192c(param_1 + 2,*(undefined8 *)(param_2 + 8),*(undefined8 *)(param_2 + 0x10));
  }
  else {
    uVar1 = *(undefined8 *)(param_2 + 8);
    *(undefined8 *)(param_1 + 4) = *(undefined8 *)(param_2 + 0x10);
    *(undefined8 *)(param_1 + 2) = uVar1;
    *(undefined8 *)(param_1 + 6) = *(undefined8 *)(param_2 + 0x18);
  }
  if (*(char *)(param_2 + 0x37) < '\0') {
    func_0x000107c3192c(param_1 + 8,*(undefined8 *)(param_2 + 0x20),*(undefined8 *)(param_2 + 0x28))
    ;
  }
  else {
    uVar1 = *(undefined8 *)(param_2 + 0x20);
    *(undefined8 *)(param_1 + 10) = *(undefined8 *)(param_2 + 0x28);
    *(undefined8 *)(param_1 + 8) = uVar1;
    *(undefined8 *)(param_1 + 0xc) = *(undefined8 *)(param_2 + 0x30);
  }
  *(undefined1 *)(param_1 + 0xe) = 0;
  *(undefined1 *)(param_1 + 0x10) = 0;
  return;
}



/* Entry: 10a7cadbc; end: 10a7cb6cb;  */

/* WARNING: Removing unreachable block (ram,0x00010a7cafc0) */
/* WARNING: Removing unreachable block (ram,0x00010a7cb02c) */

void FUN_10a7cadbc(undefined8 *param_1,undefined8 param_2)

{
  int iVar1;
  ulong *puVar2;
  char *pcVar3;
  undefined4 *puVar4;
  char **ppcVar5;
  undefined *puVar6;
  undefined *puVar7;
  char *pcVar8;
  undefined **ppuVar9;
  long lVar10;
  undefined4 *puVar11;
  ulong *puVar12;
  undefined4 *unaff_x24;
  ulong uStack_1a0;
  ulong uStack_198;
  undefined4 uStack_190;
  undefined1 uStack_18c;
  undefined2 uStack_18b;
  char cStack_189;
  char cStack_181;
  undefined8 auStack_180 [2];
  char cStack_169;
  ulong uStack_168;
  undefined1 uStack_160;
  ulong uStack_150;
  long lStack_148;
  char *pcStack_140;
  long lStack_138;
  long lStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined1 uStack_118;
  char cStack_109;
  undefined7 uStack_108;
  undefined4 uStack_101;
  undefined1 uStack_fd;
  char cStack_f1;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined4 uStack_e0;
  undefined1 uStack_dc;
  char cStack_d9;
  char *pcStack_d0;
  long lStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  char acStack_b0 [8];
  long lStack_a8;
  ulong uStack_a0;
  long alStack_98 [3];
  long *plStack_80;
  undefined8 uStack_78;
  undefined1 uStack_70;
  undefined2 uStack_6f;
  undefined1 uStack_6d;
  undefined1 uStack_61;
  long *plStack_60;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plStack_80 = (long *)0x0;
  func_0x0001094749d8(&uStack_150,param_2,alStack_98,1,0);
  if (plStack_80 == alStack_98) {
    lVar10 = 0x20;
LAB_10a7cae28:
    (**(code **)(*plStack_80 + lVar10))();
  }
  else if (plStack_80 != (long *)0x0) {
    lVar10 = 0x28;
    goto LAB_10a7cae28;
  }
  cStack_189 = '\x14';
  uStack_190 = 0x65707954;
  uStack_198 = 0x6567617373654d6e;
  uStack_1a0 = 0x6f69746f6d6f6745;
  uStack_18c = 0;
  if ((char)uStack_150 != '\x01') {
LAB_10a7caed8:
    puVar12 = param_1 + 1;
    param_1[2] = 0;
    *puVar12 = 0;
    param_1[6] = 0;
    param_1[5] = 0;
    param_1[4] = 0;
    param_1[3] = 0;
    *param_1 = &PTR_FUN_110c1b340;
    func_0x000107c2b054(&uStack_1a0,&UNK_10f677c61);
    puVar2 = &uStack_150;
    func_0x0001094947d8(puVar2,&uStack_1a0);
    unaff_x24 = (undefined4 *)0x1137ebbf8;
    if ((bRam00000001137ebbf0 & 1) == 0) goto LAB_10a7cb33c;
    goto LAB_10a7caf30;
  }
  lVar10 = lStack_148;
  func_0x0001093793a4(lStack_148,&uStack_1a0);
  if (cStack_189 < '\0') {
    __ZdlPv(uStack_1a0);
  }
  if (lStack_148 + 8 == lVar10) goto LAB_10a7caed8;
  plStack_60 = (long *)0x0;
  func_0x0001094749d8(acStack_b0,param_2,&uStack_78,1,0);
  if (plStack_60 == &uStack_78) {
    lVar10 = 0x20;
LAB_10a7cb038:
    (**(code **)(*plStack_60 + lVar10))();
  }
  else if (plStack_60 != (long *)0x0) {
    lVar10 = 0x28;
    goto LAB_10a7cb038;
  }
  pcVar3 = (char *)0x20;
  __Znwm();
  lStack_130 = -0x7fffffffffffffe0;
  lStack_138 = 0x1c;
  builtin_strncpy(pcVar3,"SenderSyncClockMinusServerNs",0x1d);
  pcStack_d0 = acStack_b0;
  lStack_c8 = 0;
  uStack_c0 = 0;
  uStack_b8 = 0x8000000000000000;
  pcStack_140 = pcVar3;
  if (acStack_b0[0] == '\x01') {
    lVar10 = lStack_a8;
    func_0x0001093793a4(lStack_a8,&pcStack_140);
    lStack_c8 = lVar10;
    if (-1 < lStack_130) goto LAB_10a7cb0e0;
  }
  else if (acStack_b0[0] == '\x02') {
    uStack_c0 = *(undefined8 *)(lStack_a8 + 8);
  }
  else {
    uStack_b8 = 1;
  }
  __ZdlPv();
LAB_10a7cb0e0:
  cStack_d9 = '\x14';
  uStack_e0 = 0x65707954;
  uStack_e8 = 0x6567617373654d6e;
  uStack_f0 = 0x6f69746f6d6f6745;
  uStack_dc = 0;
  pcVar3 = acStack_b0;
  func_0x000109406570(pcVar3,&uStack_f0);
  if ((bRam00000001137ebbe8 & 1) == 0) {
    iVar1 = 0x137ebbe8;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      uRam00000001137ebca0 = 0;
      puRam00000001137ebcb0 = (undefined *)0x0;
      unaff_x24 = (undefined4 *)0x3;
      uRam00000001137ebca8 = 3;
      puVar6 = &UNK_10f6780a2;
      func_0x0001094a957c();
      uRam00000001137ebcb8 = 1;
      puRam00000001137ebcc8 = (undefined *)0x0;
      uRam00000001137ebcc0 = 3;
      puVar7 = &UNK_10f6780a8;
      puRam00000001137ebcb0 = puVar6;
      FUN_10a7d27a8();
      uRam00000001137ebcd0 = 2;
      puRam00000001137ebce0 = (undefined *)0x0;
      uRam00000001137ebcd8 = 3;
      puRam00000001137ebcc8 = puVar7;
      FUN_10a7d27f0();
      uRam00000001137ebce8 = 3;
      puRam00000001137ebcf8 = (undefined *)0x0;
      uRam00000001137ebcf0 = 3;
      puVar6 = &UNK_10f6780c3;
      puRam00000001137ebce0 = puVar7;
      FUN_10a7d2838();
      uRam00000001137ebd00 = 4;
      pcRam00000001137ebd10 = (char *)0x0;
      uRam00000001137ebd08 = 3;
      pcVar8 = "Done";
      puRam00000001137ebcf8 = puVar6;
      func_0x0001094a9534();
      uRam00000001137ebd18 = 5;
      ppuRam00000001137ebd28 = (undefined **)0x0;
      uRam00000001137ebd20 = 3;
      ppuVar9 = &PTR_DAT_110c1b2f0;
      pcRam00000001137ebd10 = pcVar8;
      FUN_10a26a62c();
      ppuRam00000001137ebd28 = ppuVar9;
      ___cxa_atexit(0x10a7d8864,0,0x100000000);
      ___cxa_guard_release(0x1137ebbe8);
    }
  }
  puVar11 = (undefined4 *)0x1137ebca0;
  puVar12 = (ulong *)0x90;
  do {
    puVar4 = puVar11 + 2;
    FUN_10a7d3784(puVar4,pcVar3);
    if (((ulong)puVar4 & 1) != 0) {
      if (puVar12 != (ulong *)0x0) goto LAB_10a7cb154;
      break;
    }
    puVar11 = puVar11 + 6;
    puVar12 = puVar12 + -3;
  } while (puVar12 != (ulong *)0x0);
  puVar11 = (undefined4 *)0x1137ebca0;
LAB_10a7cb154:
  uStack_1a0 = CONCAT44(uStack_1a0._4_4_,*puVar11);
  cStack_f1 = '\v';
  uStack_108 = 0x6567617373654d;
  uStack_101 = 0x79646f42;
  uStack_fd = 0;
  func_0x000109406570(acStack_b0,&uStack_108);
  puVar2 = &uStack_1a0;
  func_0x00010937c804(&uStack_198);
  cStack_109 = '\b';
  uStack_120 = 0x64497265646e6553;
  uStack_118 = 0;
  func_0x000109406570(acStack_b0,&uStack_120);
  func_0x00010937c804(auStack_180);
  pcStack_140 = acStack_b0;
  lStack_138 = 0;
  lStack_130 = 0;
  uStack_128 = 0x8000000000000000;
  if (acStack_b0[0] == '\x02') {
    lStack_130 = *(undefined8 *)(lStack_a8 + 8);
  }
  else if (acStack_b0[0] == '\x01') {
    lStack_138 = lStack_a8 + 8;
  }
  else {
    uStack_128 = 1;
  }
  ppcVar5 = &pcStack_d0;
  func_0x00010937c708(ppcVar5,&pcStack_140);
  uStack_160 = ((ulong)ppcVar5 & 1) == 0;
  if ((bool)uStack_160) {
    func_0x00010938cf68(&pcStack_d0);
    func_0x00010950694c();
    uStack_168 = uStack_a0;
  }
  else {
    uStack_168 = uStack_168 & 0xffffffffffffff00;
  }
  if (cStack_109 < '\0') {
    __ZdlPv(uStack_120);
  }
  if (cStack_f1 < '\0') {
    __ZdlPv(CONCAT17((undefined1)uStack_101,uStack_108));
  }
  if (cStack_d9 < '\0') {
    __ZdlPv(uStack_f0);
  }
  func_0x000109380ffc(&lStack_a8,acStack_b0[0]);
  param_1[6] = 0;
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  param_1[1] = 0;
  *param_1 = &PTR_FUN_110c1b340;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_(param_1 + 1,&uStack_198);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_(param_1 + 4,auStack_180);
  *(undefined4 *)(param_1 + 7) = 0;
  if (cStack_169 < '\0') {
    __ZdlPv(auStack_180[0]);
  }
  if (cStack_181 < '\0') {
    __ZdlPv(uStack_198);
  }
  while (func_0x000109380ffc(&lStack_148,(char)uStack_150),
        *(long *)PTR____stack_chk_guard_11034bdc0 != lStack_58) {
    ___stack_chk_fail();
LAB_10a7cb33c:
    iVar1 = 0x137ebbf0;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      *unaff_x24 = 0;
      *(undefined8 *)(unaff_x24 + 4) = 0;
      *(undefined1 *)(unaff_x24 + 2) = 3;
      puVar6 = &DAT_10f393aed;
      FUN_10a7d3adc();
      puRam00000001137ebc08 = puVar6;
      ___cxa_atexit(FUN_10a7d88a0,0,0x100000000);
      ___cxa_guard_release(0x1137ebbf0);
    }
LAB_10a7caf30:
    FUN_10a7d3784(unaff_x24 + 2,puVar2);
    *(undefined4 *)(param_1 + 7) = *unaff_x24;
    if (cStack_189 < '\0') {
      __ZdlPv(uStack_1a0);
    }
    uStack_61 = 0xb;
    uStack_70 = 0x6f;
    uStack_6f = 0x7964;
    uStack_78._0_7_ = 0x6567617373654d;
    uStack_78._7_1_ = 0x42;
    uStack_6d = 0;
    func_0x0001094947d8(&uStack_150,&uStack_78);
    func_0x00010937c804(&uStack_1a0);
    if (*(char *)((long)param_1 + 0x1f) < '\0') {
      __ZdlPv(*puVar12);
    }
    puVar12[1] = uStack_198;
    *puVar12 = uStack_1a0;
    puVar12[2] = CONCAT17(cStack_189,CONCAT25(uStack_18b,CONCAT14(uStack_18c,uStack_190)));
    cStack_189 = 0;
    uStack_1a0 = uStack_1a0 & 0xffffffffffffff00;
    uStack_61 = 8;
    uStack_78._0_7_ = 0x497265646e6553;
    uStack_78._7_1_ = 100;
    uStack_70 = 0;
    func_0x0001094947d8(&uStack_150,&uStack_78);
    func_0x00010937c804(&uStack_1a0);
    if (*(char *)((long)param_1 + 0x37) < '\0') {
      __ZdlPv(param_1[4]);
    }
    param_1[5] = uStack_198;
    param_1[4] = uStack_1a0;
    param_1[6] = CONCAT17(cStack_189,CONCAT25(uStack_18b,CONCAT14(uStack_18c,uStack_190)));
    cStack_189 = '\0';
    uStack_1a0 = uStack_1a0 & 0xffffffffffffff00;
  }
  return;
}



/* Entry: 10a7cb6cc; end: 10a7cb6ef;  */

undefined8 * FUN_10a7cb6cc(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c1b320;
  if (*(char *)((long)param_1 + 0x37) < '\0') {
    __ZdlPv(param_1[4]);
  }
  if (*(char *)((long)param_1 + 0x1f) < '\0') {
    __ZdlPv(param_1[1]);
  }
  return param_1;
}



/* Entry: 10a7cb6f0; end: 10a7cb7bf;  */

bool FUN_10a7cb6f0(undefined8 param_1,long *param_2,long param_3)

{
  bool bVar1;
  int iVar2;
  
  if (param_3 == 0x31) {
    iVar2 = 0xf67814a;
    _memcmp(&UNK_10f67814a,param_2);
    if (iVar2 == 0) {
      return true;
    }
  }
  if (param_3 == 0x33) {
    iVar2 = 0xf6781ae;
    _memcmp(&UNK_10f6781ae,param_2);
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



/* Entry: 10a7cb7c0; end: 10a7cb7c7;  */

bool FUN_10a7cb7c0(undefined8 param_1,long *param_2,long param_3)

{
  bool bVar1;
  int iVar2;
  
  if (param_3 == 0x31) {
    iVar2 = 0xf67814a;
    _memcmp(&UNK_10f67814a,param_2);
    if (iVar2 == 0) {
      return true;
    }
  }
  if (param_3 == 0x33) {
    iVar2 = 0xf6781ae;
    _memcmp(&UNK_10f6781ae,param_2);
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



/* Entry: 10a7cb7c8; end: 10a7cb82b;  */

void FUN_10a7cb7c8(undefined8 param_1)

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
  
  uStack_50 = 0xffffffff00000001;
  uStack_58 = 0;
  uStack_48 = 0xffffffff;
  puStack_40 = &UNK_10f677c6d;
  uStack_38 = 0;
  uStack_28 = 0;
  uStack_30 = 0;
  uStack_20 = 0x94;
  uStack_18 = 0xffffffff;
  FUN_10a7cb82c(param_1,&uStack_58);
  FUN_10a7d3c20();
  return;
}



/* Entry: 10a7cb82c; end: 10a7cb903;  */

/* WARNING: Removing unreachable block (ram,0x00010a7cb8c4) */

undefined1  [16] FUN_10a7cb82c(undefined8 param_1,long param_2)

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
  func_0x000109887da8(auStack_48,&UNK_10f67814a,0x31);
  uStack_88 = *(undefined8 *)(param_2 + 8);
  uStack_80 = *(undefined4 *)(param_2 + 0x10);
  uStack_70 = *(undefined8 *)(param_2 + 0x20);
  uStack_78 = *(undefined8 *)(param_2 + 0x18);
  uStack_60 = *(undefined8 *)(param_2 + 0x30);
  uStack_68 = *(undefined8 *)(param_2 + 0x28);
  uStack_58 = *(undefined8 *)(param_2 + 0x38);
  uStack_50 = *(undefined4 *)(param_2 + 0x40);
  puStack_90 = auStack_48;
  FUN_10a7d3b24(param_1,&puStack_90,100);
  auVar2._8_8_ = ppuVar1;
  auVar2._0_8_ = param_1;
  return auVar2;
}



/* Entry: 10a7cb904; end: 10a7cbbf3;  */

long * FUN_10a7cb904(long *param_1,long *param_2,long param_3,int param_4)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  undefined4 auStack_90 [2];
  long lStack_88;
  long lStack_80;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  long *plStack_48;
  
  plVar2 = param_1;
  FUN_10ac63ebc(param_1,param_2 + 1);
  plVar2 = plVar2 + 0x1d;
  FUN_10a0040d0(plVar2,param_2 + 7);
  lVar3 = *param_2;
  *param_1 = lVar3;
  param_1[2] = (long)&PTR_FUN_110c199f0;
  param_1[5] = (long)&PTR_DAT_110c19a20;
  *(long *)((long)param_1 + *(long *)(lVar3 + -0x18)) = param_2[9];
  lVar3 = param_2[10];
  param_1[0x1d] = lVar3;
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
  param_1[0x2d] = 0;
  param_1[0x2c] = 0;
  param_1[0x2f] = 0;
  param_1[0x2e] = 0;
  param_1[0x31] = 0;
  param_1[0x30] = 0;
  param_1[0x33] = 0;
  param_1[0x32] = 0;
  param_1[0x35] = 0;
  param_1[0x34] = 0;
  param_1[0x37] = 0;
  param_1[0x36] = 0;
  param_1[0x39] = 0;
  param_1[0x38] = 0;
  *(undefined4 *)(param_1 + 0x3a) = 0x3f800000;
  if (param_4 != 0) {
    plVar1 = (long *)((long)plVar2 + *(long *)(lVar3 + -0x18));
    if ((*(byte *)(plVar1 + 3) & 1) == 0) {
      *(undefined1 *)(plVar1 + 3) = 1;
      plVar1[2] = param_3;
      if (param_3 != 0) {
        plVar1[1] = *(long *)(*(long *)(param_3 + 0x850) + 0x2c);
      }
      (**(code **)(*plVar1 + 0x18))();
    }
    FUN_10a5ae998(param_1[0x20],&PTR_DAT_110b99f08,param_3,plVar2);
  }
  FUN_10a7ccbb0(auStack_90);
  plVar2 = (long *)0x1b0;
  __Znwm();
  FUN_10ab46d7c();
  plStack_48 = plVar2;
  FUN_10a7cccf8(param_1 + 0x22,&plStack_48);
  plVar2 = plStack_48;
  plStack_48 = (long *)0x0;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 8))();
  }
  lVar3 = param_1[0x22];
  *(undefined8 *)(lVar3 + 0xe8) = 1;
  *(undefined4 *)(lVar3 + 0xf0) = auStack_90[0];
  if ((undefined4 *)(lVar3 + 0xf0) != auStack_90) {
    FUN_10a1903c4(lVar3 + 0xf8,lStack_88,lStack_80,(lStack_80 - lStack_88 >> 3) * 0x6db6db6db6db6db7
                 );
  }
  *(undefined8 *)(lVar3 + 0x118) = uStack_68;
  *(undefined8 *)(lVar3 + 0x110) = uStack_70;
  *(undefined8 *)(lVar3 + 0x128) = uStack_58;
  *(undefined8 *)(lVar3 + 0x120) = uStack_60;
  *(undefined8 *)(lVar3 + 0x130) = uStack_50;
  if (*(char *)((long)param_1 + 0xba) != '\x01') {
    *(undefined1 *)((long)param_1 + 0xba) = 1;
    (**(code **)(*param_1 + 0xa0))(param_1);
  }
  if (*(char *)((long)param_1 + 0xb9) != '\x01') {
    *(undefined1 *)((long)param_1 + 0xb9) = 1;
    (**(code **)(*param_1 + 0xa0))(param_1);
  }
  plStack_48 = &lStack_88;
  func_0x00010a190844(&plStack_48);
  return param_1;
}



/* Entry: 10a7cbbf4; end: 10a7cbd4f;  */

long * FUN_10a7cbbf4(long *param_1,long *param_2)

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
  param_1[2] = (long)&PTR_FUN_110c199f0;
  param_1[5] = (long)&PTR_DAT_110c19a20;
  *(long *)((long)param_1 + *(long *)(lVar1 + -0x18)) = param_2[9];
  param_1[0x1d] = param_2[10];
  func_0x00010a7d3cdc(param_1 + 0x36);
  if (param_1[0x33] != 0) {
    param_1[0x34] = param_1[0x33];
    __ZdlPv();
  }
  if (param_1[0x30] != 0) {
    param_1[0x31] = param_1[0x30];
    __ZdlPv();
  }
  if (param_1[0x2d] != 0) {
    param_1[0x2e] = param_1[0x2d];
    __ZdlPv();
  }
  if (param_1[0x2a] != 0) {
    param_1[0x2b] = param_1[0x2a];
    __ZdlPv();
  }
  if (param_1[0x27] != 0) {
    param_1[0x28] = param_1[0x27];
    __ZdlPv();
  }
  if (param_1[0x24] != 0) {
    param_1[0x25] = param_1[0x24];
    __ZdlPv();
  }
  FUN_10a0cfe2c(param_1 + 0x22);
  lVar1 = param_2[7];
  param_1[0x1d] = lVar1;
  *(long *)((long)(param_1 + 0x1d) + *(long *)(lVar1 + -0x18)) = param_2[8];
  func_0x00010a004e5c(param_1 + 0x20);
  func_0x00010a004e04(param_1 + 0x1e);
  lVar1 = param_2[1];
  *param_1 = lVar1;
  param_1[2] = (long)&PTR_FUN_110c68030;
  param_1[5] = (long)&PTR_DAT_110c68060;
  *(long *)((long)param_1 + *(long *)(lVar1 + -0x18)) = param_2[6];
  FUN_10a0cfe2c(param_1 + 0x1b);
  func_0x00010a1980a8(param_1 + 0x18);
  lVar1 = param_2[3];
  *param_1 = lVar1;
  param_1[2] = (long)&PTR_FUN_110bb3b30;
  param_1[5] = (long)&PTR_DAT_110bb3b60;
  *(long *)((long)param_1 + *(long *)(lVar1 + -0x18)) = param_2[4];
  func_0x00010a1f9d14(param_1 + 0x13);
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



/* Entry: 10a7cbd50; end: 10a7cbda3;  */

undefined8 * FUN_10a7cbd50(undefined8 *param_1)

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
  
  *param_1 = &PTR_FUN_110c19f30;
  param_1[2] = &PTR_FUN_110c199f0;
  param_1[5] = &PTR_DAT_110c19a20;
  param_1[0x3b] = &PTR_DAT_110c1a098;
  param_1[0x1d] = &PTR_DAT_110c1a020;
  func_0x00010a7d3cdc(param_1 + 0x36);
  if (param_1[0x33] != 0) {
    param_1[0x34] = param_1[0x33];
    __ZdlPv();
  }
  if (param_1[0x30] != 0) {
    param_1[0x31] = param_1[0x30];
    __ZdlPv();
  }
  if (param_1[0x2d] != 0) {
    param_1[0x2e] = param_1[0x2d];
    __ZdlPv();
  }
  if (param_1[0x2a] != 0) {
    param_1[0x2b] = param_1[0x2a];
    __ZdlPv();
  }
  if (param_1[0x27] != 0) {
    param_1[0x28] = param_1[0x27];
    __ZdlPv();
  }
  if (param_1[0x24] != 0) {
    param_1[0x25] = param_1[0x24];
    __ZdlPv();
  }
  FUN_10a0cfe2c(param_1 + 0x22);
  param_1[0x1d] = &PTR_DAT_110c1a4d8;
  param_1[0x3b] = &PTR_FUN_110c1a550;
  func_0x00010a004e5c(param_1 + 0x20);
  func_0x00010a004e04(param_1 + 0x1e);
  *param_1 = &PTR_FUN_110c1a120;
  param_1[2] = &PTR_FUN_110c68030;
  param_1[5] = &PTR_DAT_110c68060;
  param_1[0x3b] = &PTR_FUN_110c1a220;
  FUN_10a0cfe2c(param_1 + 0x1b);
  func_0x00010a1980a8(param_1 + 0x18);
  *param_1 = &PTR_FUN_110c1a3b8;
  param_1[2] = &PTR_FUN_110bb3b30;
  param_1[5] = &PTR_DAT_110bb3b60;
  param_1[0x3b] = &PTR_DAT_110c1a488;
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



/* Entry: 10a7cbda4; end: 10a7cbe1f;  */

void FUN_10a7cbda4(undefined8 param_1)

{
  FUN_10a7cbbf4(param_1,&PTR_PTR_110c195d8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a7cbe20; end: 10a7cbe57;  */

void FUN_10a7cbe20(long *param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(*param_1 + -0x18);
  FUN_10a7cbbf4((long)param_1 + lVar1,&PTR_PTR_110c195d8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)((long)param_1 + lVar1);
  return;
}



/* Entry: 10a7cbe58; end: 10a7cbf3f;  */

void FUN_10a7cbe58(undefined8 param_1)

{
  undefined **appuStack_150 [2];
  undefined **ppuStack_140;
  undefined **ppuStack_138;
  undefined1 auStack_130 [56];
  undefined8 uStack_f8;
  char cStack_e1;
  undefined **appuStack_d0 [19];
  undefined1 uStack_31;
  
  FUN_109febc44(appuStack_150);
  FUN_10a002568(&ppuStack_140,&UNK_10f677c6e,0x28);
  func_0x00010a002480(param_1,&ppuStack_138,&uStack_31);
  appuStack_150[0] = &PTR_SUB_1108a5a38;
  ppuStack_140 = &PTR_DAT_1108a5a60;
  appuStack_d0[0] = &PTR_DAT_1108a5a88;
  ppuStack_138 = &PTR_DAT_11088d7b0;
  if (cStack_e1 < '\0') {
    __ZdlPv(uStack_f8);
  }
  ppuStack_138 = (undefined **)
                 (PTR___ZTVNSt3__115basic_streambufIcNS_11char_traitsIcEEEE_110346b20 + 0x10);
  __ZNSt3__16localeD1Ev(auStack_130);
  __ZNSt3__114basic_iostreamIcNS_11char_traitsIcEEED2Ev(appuStack_150,&PTR_PTR_1108a5aa0);
  __ZNSt3__19basic_iosIcNS_11char_traitsIcEEED2Ev(appuStack_d0);
  return;
}



/* Entry: 10a7cbf40; end: 10a7cbf47;  */

void FUN_10a7cbf40(undefined8 param_1)

{
  undefined **appuStack_150 [2];
  undefined **ppuStack_140;
  undefined **ppuStack_138;
  undefined1 auStack_130 [56];
  undefined8 uStack_f8;
  char cStack_e1;
  undefined **appuStack_d0 [19];
  undefined1 uStack_31;
  
  FUN_109febc44(appuStack_150);
  FUN_10a002568(&ppuStack_140,&UNK_10f677c6e,0x28);
  func_0x00010a002480(param_1,&ppuStack_138,&uStack_31);
  appuStack_150[0] = &PTR_SUB_1108a5a38;
  ppuStack_140 = &PTR_DAT_1108a5a60;
  appuStack_d0[0] = &PTR_DAT_1108a5a88;
  ppuStack_138 = &PTR_DAT_11088d7b0;
  if (cStack_e1 < '\0') {
    __ZdlPv(uStack_f8);
  }
  ppuStack_138 = (undefined **)
                 (PTR___ZTVNSt3__115basic_streambufIcNS_11char_traitsIcEEEE_110346b20 + 0x10);
  __ZNSt3__16localeD1Ev(auStack_130);
  __ZNSt3__114basic_iostreamIcNS_11char_traitsIcEEED2Ev(appuStack_150,&PTR_PTR_1108a5aa0);
  __ZNSt3__19basic_iosIcNS_11char_traitsIcEEED2Ev(appuStack_d0);
  return;
}



/* Entry: 10a7cbf48; end: 10a7cbf8b;  */

void FUN_10a7cbf48(undefined8 param_1,long *param_2)

{
  undefined *puStack_20;
  undefined8 uStack_18;
  
  puStack_20 = &UNK_10f67814a;
  uStack_18 = 0x31;
  (**(code **)(*param_2 + 0x30))(param_2,&PTR_DAT_110c1b368,&puStack_20);
  return;
}



/* Entry: 10a7cbf8c; end: 10a7cc25f;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_10a7cbf8c(long param_1,long param_2,long *param_3)

{
  float *pfVar1;
  code *pcVar2;
  ulong uVar3;
  ulong *puVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  float *pfVar14;
  int iVar15;
  int iVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  ulong auStack_d8 [5];
  undefined4 uStack_b0;
  
  lVar11 = *(long *)(param_2 + 0x88);
  if (lVar11 != 0) {
    iVar16 = *(int *)(param_2 + 0x19c);
    iVar15 = *(int *)(param_2 + 0x1a0);
    param_3[1] = *param_3;
    uVar7 = *(long *)(lVar11 + 0xa0) - *(long *)(lVar11 + 0x98) >> 4;
    if (0x3ffe < uVar7) {
      uVar7 = 0x3fff;
    }
    if (*(long *)(param_1 + 0x90) == 0) {
      fVar22 = 0.0;
    }
    else {
      fVar22 = (float)*(double *)(*(long *)(*(long *)(param_1 + 0x90) + 0x850) + 8);
    }
    auStack_d8[2] = 0;
    auStack_d8[1] = 0;
    auStack_d8[4] = 0;
    auStack_d8[3] = 0;
    uStack_b0 = 0x3f800000;
    if (*(long *)(lVar11 + 0xa0) != *(long *)(lVar11 + 0x98)) {
      lVar12 = 0;
      uVar13 = 0;
      do {
        if ((ulong)(*(long *)(lVar11 + 0xa0) - *(long *)(lVar11 + 0x98) >> 4) <= uVar13) {
          func_0x00010a7d28f8();
LAB_10a7cc238:
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x10a7cc23c);
          (*pcVar2)();
        }
        puVar4 = (ulong *)(*(long *)(lVar11 + 0x98) + lVar12);
        uVar9 = *puVar4;
        fVar21 = *(float *)(puVar4 + 1);
        fVar23 = *(float *)((long)puVar4 + 0xc);
        uVar3 = param_2 + 0x198;
        auStack_d8[0] = uVar9;
        FUN_10a0ec6f0();
        fVar23 = (-fVar23 / (float)iVar15) * 2.0 + 1.0;
        fVar17 = (fVar21 / (float)iVar16) * 2.0 + -1.0;
        uVar5 = (ulong)((uint)uVar3 & 3);
        fVar18 = *(float *)(&UNK_10e4db3e0 + uVar5 * 4);
        fVar19 = *(float *)(&UNK_10e4db3d0 + uVar5 * 4);
        fVar20 = -(fVar19 * fVar23);
        fVar23 = fVar23 * fVar18;
        fVar21 = fVar23 + fVar17 * fVar19;
        if ((uVar3 & 4) != 0) {
          fVar21 = -(fVar19 * fVar17) - fVar23;
        }
        fVar23 = fVar20 + fVar17 * fVar18;
        if ((uVar3 & 8) != 0) {
          fVar23 = -(fVar18 * fVar17) - fVar20;
        }
        lVar10 = param_1 + 0x1b0;
        FUN_10a7d3d24(lVar10,uVar9);
        fVar17 = fVar22;
        if (lVar10 != 0) {
          lVar10 = param_1 + 0x1b0;
          FUN_10a7d3dc0(lVar10,uVar9,auStack_d8);
          fVar17 = *(float *)(lVar10 + 0x18);
        }
        puVar4 = auStack_d8 + 1;
        uVar3 = uVar9;
        FUN_10a7d3dc0(puVar4,uVar9,auStack_d8);
        *(float *)(puVar4 + 3) = fVar17;
        pfVar1 = (float *)param_3[1];
        if (pfVar1 < (float *)param_3[2]) {
          *pfVar1 = fVar23;
          pfVar1[1] = fVar21;
          pfVar1[2] = 0.0;
          pfVar14 = pfVar1 + 5;
          pfVar1[3] = (float)uVar9;
          pfVar1[4] = fVar17;
        }
        else {
          lVar10 = (long)pfVar1 - *param_3;
          uVar5 = (lVar10 >> 2) * -0x3333333333333333 + 1;
          if (0xccccccccccccccc < uVar5) {
            func_0x00010a7d290c();
            goto LAB_10a7cc238;
          }
          lVar6 = param_3[2] - *param_3 >> 2;
          uVar8 = lVar6 * -0x6666666666666666;
          if (uVar8 < uVar5 || uVar8 - uVar5 == 0) {
            uVar8 = uVar5;
          }
          if (0x666666666666665 < (ulong)(lVar6 * -0x3333333333333333)) {
            uVar8 = 0xccccccccccccccc;
          }
          FUN_10a7d2920();
          pfVar1 = (float *)(uVar8 + lVar10);
          *pfVar1 = fVar23;
          pfVar1[1] = fVar21;
          pfVar1[2] = 0.0;
          pfVar1[3] = (float)uVar9;
          pfVar1[4] = fVar17;
          pfVar14 = pfVar1 + 5;
          lVar6 = (long)pfVar1 - (param_3[1] - *param_3);
          _memcpy(lVar6);
          lVar10 = *param_3;
          *param_3 = lVar6;
          param_3[1] = (long)pfVar14;
          param_3[2] = uVar8 + uVar3 * 0x14;
          if (lVar10 != 0) {
            __ZdlPv();
          }
        }
        param_3[1] = (long)pfVar14;
        uVar13 = uVar13 + 1;
        lVar12 = lVar12 + 0x10;
      } while (uVar7 != uVar13);
    }
    FUN_10a7d4170(param_1 + 0x1b0,auStack_d8 + 1);
    func_0x00010a7d3cdc(auStack_d8 + 1);
  }
  return;
}



/* Entry: 10a7cc260; end: 10a7cc27f;  */

undefined1  [16] FUN_10a7cc260(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x31;
  auVar1._0_8_ = &UNK_10f67817c;
  return auVar1;
}



/* Entry: 10a7cc280; end: 10a7cc2e7;  */

bool FUN_10a7cc280(undefined8 param_1,long *param_2,long param_3)

{
  bool bVar1;
  int iVar2;
  
  if (param_3 == 0x31) {
    iVar2 = 0xf67817c;
    _memcmp(&UNK_10f67817c,param_2);
    if (iVar2 == 0) {
      return true;
    }
  }
  if (param_3 == 0x33) {
    iVar2 = 0xf6781ae;
    _memcmp(&UNK_10f6781ae,param_2);
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



/* Entry: 10a7cc2e8; end: 10a7cc2ef;  */

bool FUN_10a7cc2e8(undefined8 param_1,long *param_2,long param_3)

{
  bool bVar1;
  int iVar2;
  
  if (param_3 == 0x31) {
    iVar2 = 0xf67817c;
    _memcmp(&UNK_10f67817c,param_2);
    if (iVar2 == 0) {
      return true;
    }
  }
  if (param_3 == 0x33) {
    iVar2 = 0xf6781ae;
    _memcmp(&UNK_10f6781ae,param_2);
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



/* Entry: 10a7cc2f0; end: 10a7cc353;  */

void FUN_10a7cc2f0(undefined8 param_1)

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
  
  uStack_50 = 0xffffffff00000001;
  uStack_58 = 0;
  uStack_48 = 0xffffffff;
  puStack_40 = &UNK_10f677c6d;
  uStack_38 = 0;
  uStack_28 = 0;
  uStack_30 = 0;
  uStack_20 = 0x94;
  uStack_18 = 0xffffffff;
  FUN_10a7cc354(param_1,&uStack_58);
  FUN_10a7d4378();
  return;
}



/* Entry: 10a7cc354; end: 10a7cc42b;  */

/* WARNING: Removing unreachable block (ram,0x00010a7cc3ec) */

undefined1  [16] FUN_10a7cc354(undefined8 param_1,long param_2)

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
  func_0x000109887da8(auStack_48,&UNK_10f67817c,0x31);
  uStack_88 = *(undefined8 *)(param_2 + 8);
  uStack_80 = *(undefined4 *)(param_2 + 0x10);
  uStack_70 = *(undefined8 *)(param_2 + 0x20);
  uStack_78 = *(undefined8 *)(param_2 + 0x18);
  uStack_60 = *(undefined8 *)(param_2 + 0x30);
  uStack_68 = *(undefined8 *)(param_2 + 0x28);
  uStack_58 = *(undefined8 *)(param_2 + 0x38);
  uStack_50 = *(undefined4 *)(param_2 + 0x40);
  puStack_90 = auStack_48;
  func_0x00010a7d427c(param_1,&puStack_90,100);
  auVar2._8_8_ = ppuVar1;
  auVar2._0_8_ = param_1;
  return auVar2;
}



/* Entry: 10a7cc42c; end: 10a7cc47f;  */

undefined8 * FUN_10a7cc42c(undefined8 *param_1)

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
  
  *param_1 = &PTR_FUN_110c1a5b8;
  param_1[2] = &PTR_FUN_110c199f0;
  param_1[5] = &PTR_DAT_110c19a20;
  param_1[0x3b] = &PTR_DAT_110c1a720;
  param_1[0x1d] = &PTR_DAT_110c1a6a8;
  func_0x00010a7d3cdc(param_1 + 0x36);
  if (param_1[0x33] != 0) {
    param_1[0x34] = param_1[0x33];
    __ZdlPv();
  }
  if (param_1[0x30] != 0) {
    param_1[0x31] = param_1[0x30];
    __ZdlPv();
  }
  if (param_1[0x2d] != 0) {
    param_1[0x2e] = param_1[0x2d];
    __ZdlPv();
  }
  if (param_1[0x2a] != 0) {
    param_1[0x2b] = param_1[0x2a];
    __ZdlPv();
  }
  if (param_1[0x27] != 0) {
    param_1[0x28] = param_1[0x27];
    __ZdlPv();
  }
  if (param_1[0x24] != 0) {
    param_1[0x25] = param_1[0x24];
    __ZdlPv();
  }
  FUN_10a0cfe2c(param_1 + 0x22);
  param_1[0x1d] = &PTR_DAT_110c1ab28;
  param_1[0x3b] = &PTR_FUN_110c1aba0;
  func_0x00010a004e5c(param_1 + 0x20);
  func_0x00010a004e04(param_1 + 0x1e);
  *param_1 = &PTR_FUN_110c1a770;
  param_1[2] = &PTR_FUN_110c68030;
  param_1[5] = &PTR_DAT_110c68060;
  param_1[0x3b] = &PTR_FUN_110c1a870;
  FUN_10a0cfe2c(param_1 + 0x1b);
  func_0x00010a1980a8(param_1 + 0x18);
  *param_1 = &PTR_FUN_110c1aa08;
  param_1[2] = &PTR_FUN_110bb3b30;
  param_1[5] = &PTR_DAT_110bb3b60;
  param_1[0x3b] = &PTR_DAT_110c1aad8;
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



/* Entry: 10a7cc480; end: 10a7cc4fb;  */

void FUN_10a7cc480(undefined8 param_1)

{
  FUN_10a7cbbf4(param_1,&PTR_PTR_110c19888);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a7cc4fc; end: 10a7cc533;  */

void FUN_10a7cc4fc(long *param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(*param_1 + -0x18);
  FUN_10a7cbbf4((long)param_1 + lVar1,&PTR_PTR_110c19888);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)((long)param_1 + lVar1);
  return;
}



/* Entry: 10a7cc534; end: 10a7cc61b;  */

void FUN_10a7cc534(undefined8 param_1)

{
  undefined **appuStack_150 [2];
  undefined **ppuStack_140;
  undefined **ppuStack_138;
  undefined1 auStack_130 [56];
  undefined8 uStack_f8;
  char cStack_e1;
  undefined **appuStack_d0 [19];
  undefined1 uStack_31;
  
  FUN_109febc44(appuStack_150);
  FUN_10a002568(&ppuStack_140,&UNK_10f677c97,0x28);
  func_0x00010a002480(param_1,&ppuStack_138,&uStack_31);
  appuStack_150[0] = &PTR_SUB_1108a5a38;
  ppuStack_140 = &PTR_DAT_1108a5a60;
  appuStack_d0[0] = &PTR_DAT_1108a5a88;
  ppuStack_138 = &PTR_DAT_11088d7b0;
  if (cStack_e1 < '\0') {
    __ZdlPv(uStack_f8);
  }
  ppuStack_138 = (undefined **)
                 (PTR___ZTVNSt3__115basic_streambufIcNS_11char_traitsIcEEEE_110346b20 + 0x10);
  __ZNSt3__16localeD1Ev(auStack_130);
  __ZNSt3__114basic_iostreamIcNS_11char_traitsIcEEED2Ev(appuStack_150,&PTR_PTR_1108a5aa0);
  __ZNSt3__19basic_iosIcNS_11char_traitsIcEEED2Ev(appuStack_d0);
  return;
}



/* Entry: 10a7cc61c; end: 10a7cc623;  */

void FUN_10a7cc61c(undefined8 param_1)

{
  undefined **appuStack_150 [2];
  undefined **ppuStack_140;
  undefined **ppuStack_138;
  undefined1 auStack_130 [56];
  undefined8 uStack_f8;
  char cStack_e1;
  undefined **appuStack_d0 [19];
  undefined1 uStack_31;
  
  FUN_109febc44(appuStack_150);
  FUN_10a002568(&ppuStack_140,&UNK_10f677c97,0x28);
  func_0x00010a002480(param_1,&ppuStack_138,&uStack_31);
  appuStack_150[0] = &PTR_SUB_1108a5a38;
  ppuStack_140 = &PTR_DAT_1108a5a60;
  appuStack_d0[0] = &PTR_DAT_1108a5a88;
  ppuStack_138 = &PTR_DAT_11088d7b0;
  if (cStack_e1 < '\0') {
    __ZdlPv(uStack_f8);
  }
  ppuStack_138 = (undefined **)
                 (PTR___ZTVNSt3__115basic_streambufIcNS_11char_traitsIcEEEE_110346b20 + 0x10);
  __ZNSt3__16localeD1Ev(auStack_130);
  __ZNSt3__114basic_iostreamIcNS_11char_traitsIcEEED2Ev(appuStack_150,&PTR_PTR_1108a5aa0);
  __ZNSt3__19basic_iosIcNS_11char_traitsIcEEED2Ev(appuStack_d0);
  return;
}



/* Entry: 10a7cc624; end: 10a7cc667;  */

void FUN_10a7cc624(undefined8 param_1,long *param_2)

{
  undefined *puStack_20;
  undefined8 uStack_18;
  
  puStack_20 = &UNK_10f67817c;
  uStack_18 = 0x31;
  (**(code **)(*param_2 + 0x30))(param_2,&PTR_DAT_110c1b368,&puStack_20);
  return;
}



/* Entry: 10a7cc668; end: 10a7cc8c7;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_10a7cc668(long param_1,long param_2,long *param_3)

{
  undefined4 *puVar1;
  code *pcVar2;
  ulong *puVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  undefined4 *puVar14;
  float fVar15;
  float fVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  ulong auStack_c8 [5];
  undefined4 uStack_a0;
  
  lVar11 = *(long *)(param_2 + 0x88);
  if (lVar11 != 0) {
    lVar12 = *(long *)(lVar11 + 0x80);
    lVar10 = *(long *)(lVar11 + 0x88);
    uVar8 = (lVar10 - lVar12 >> 3) * -0x5555555555555555;
    if (0x3ffe < uVar8) {
      uVar8 = 0x3fff;
    }
    if (*(long *)(param_1 + 0x90) == 0) {
      fVar15 = 0.0;
    }
    else {
      fVar15 = (float)*(double *)(*(long *)(*(long *)(param_1 + 0x90) + 0x850) + 8);
    }
    param_3[1] = *param_3;
    auStack_c8[2] = 0;
    auStack_c8[1] = 0;
    auStack_c8[4] = 0;
    auStack_c8[3] = 0;
    uStack_a0 = 0x3f800000;
    if (lVar10 != lVar12) {
      lVar12 = 0;
      uVar13 = 0;
      do {
        lVar10 = *(long *)(lVar11 + 0x80);
        uVar5 = (*(long *)(lVar11 + 0x88) - lVar10 >> 3) * -0x5555555555555555;
        if (uVar5 < uVar13 || uVar5 - uVar13 == 0) {
          FUN_10a7d2960();
LAB_10a7cc8a4:
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x10a7cc8a8);
          (*pcVar2)();
        }
        uVar5 = *(ulong *)(lVar10 + lVar12);
        lVar7 = param_1 + 0x1b0;
        auStack_c8[0] = uVar5;
        FUN_10a7d3d24(lVar7,uVar5);
        fVar16 = fVar15;
        if (lVar7 != 0) {
          lVar7 = param_1 + 0x1b0;
          FUN_10a7d3dc0(lVar7,uVar5,auStack_c8);
          fVar16 = *(float *)(lVar7 + 0x18);
        }
        puVar3 = auStack_c8 + 1;
        uVar4 = uVar5;
        FUN_10a7d3dc0(puVar3,uVar5,auStack_c8);
        *(float *)(puVar3 + 3) = fVar16;
        lVar10 = lVar10 + lVar12;
        uVar19 = *(undefined4 *)(lVar10 + 8);
        uVar18 = *(undefined4 *)(lVar10 + 0xc);
        uVar17 = *(undefined4 *)(lVar10 + 0x10);
        puVar1 = (undefined4 *)param_3[1];
        if (puVar1 < (undefined4 *)param_3[2]) {
          *puVar1 = uVar19;
          puVar1[1] = uVar18;
          puVar1[2] = uVar17;
          puVar1[3] = (float)uVar5;
          puVar14 = puVar1 + 5;
          puVar1[4] = fVar16;
        }
        else {
          lVar10 = (long)puVar1 - *param_3;
          uVar6 = (lVar10 >> 2) * -0x3333333333333333 + 1;
          if (0xccccccccccccccc < uVar6) {
            func_0x00010a7d290c();
            goto LAB_10a7cc8a4;
          }
          lVar7 = param_3[2] - *param_3 >> 2;
          uVar9 = lVar7 * -0x6666666666666666;
          if (uVar9 < uVar6 || uVar9 - uVar6 == 0) {
            uVar9 = uVar6;
          }
          if (0x666666666666665 < (ulong)(lVar7 * -0x3333333333333333)) {
            uVar9 = 0xccccccccccccccc;
          }
          FUN_10a7d2920();
          puVar1 = (undefined4 *)(uVar9 + lVar10);
          *puVar1 = uVar19;
          puVar1[1] = uVar18;
          puVar1[2] = uVar17;
          puVar1[3] = (float)uVar5;
          puVar1[4] = fVar16;
          puVar14 = puVar1 + 5;
          lVar7 = (long)puVar1 - (param_3[1] - *param_3);
          _memcpy(lVar7);
          lVar10 = *param_3;
          *param_3 = lVar7;
          param_3[1] = (long)puVar14;
          param_3[2] = uVar9 + uVar4 * 0x14;
          if (lVar10 != 0) {
            __ZdlPv();
          }
        }
        param_3[1] = (long)puVar14;
        uVar13 = uVar13 + 1;
        lVar12 = lVar12 + 0x18;
      } while (uVar8 != uVar13);
    }
    FUN_10a7d4170(param_1 + 0x1b0,auStack_c8 + 1);
    func_0x00010a7d3cdc(auStack_c8 + 1);
  }
  return;
}



/* Entry: 10a7cc8c8; end: 10a7cc8ef;  */

undefined1  [16] FUN_10a7cc8c8(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x33;
  auVar1._0_8_ = &UNK_10f6781ae;
  return auVar1;
}



/* Entry: 10a7cc8f0; end: 10a7cc943;  */

void FUN_10a7cc8f0(undefined8 param_1)

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
  uStack_50 = 0xffffffff00000001;
  uStack_48 = 0xffffffff;
  uStack_38 = 0;
  uStack_40 = 0;
  uStack_28 = 0;
  uStack_30 = 0;
  uStack_20 = 0x94;
  uStack_18 = 0xffffffff;
  FUN_10a7cc944(param_1,&uStack_58);
  FUN_10a7d4588();
  return;
}



/* Entry: 10a7cc944; end: 10a7cca1b;  */

/* WARNING: Removing unreachable block (ram,0x00010a7cc9dc) */

undefined1  [16] FUN_10a7cc944(undefined8 param_1,long param_2)

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
  func_0x000109887da8(auStack_48,&UNK_10f6781ae,0x33);
  uStack_88 = *(undefined8 *)(param_2 + 8);
  uStack_80 = *(undefined4 *)(param_2 + 0x10);
  uStack_70 = *(undefined8 *)(param_2 + 0x20);
  uStack_78 = *(undefined8 *)(param_2 + 0x18);
  uStack_60 = *(undefined8 *)(param_2 + 0x30);
  uStack_68 = *(undefined8 *)(param_2 + 0x28);
  uStack_58 = *(undefined8 *)(param_2 + 0x38);
  uStack_50 = *(undefined4 *)(param_2 + 0x40);
  puStack_90 = auStack_48;
  FUN_10a7d448c(param_1,&puStack_90,100);
  auVar2._8_8_ = ppuVar1;
  auVar2._0_8_ = param_1;
  return auVar2;
}



/* Entry: 10a7cca1c; end: 10a7ccaa7;  */

long * FUN_10a7cca1c(long *param_1,long *param_2)

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
  param_1[2] = (long)&PTR_FUN_110c68030;
  param_1[5] = (long)&PTR_DAT_110c68060;
  *(long *)((long)param_1 + *(long *)(lVar1 + -0x18)) = param_2[5];
  FUN_10a0cfe2c(param_1 + 0x1b);
  func_0x00010a1980a8(param_1 + 0x18);
  lVar1 = param_2[2];
  *param_1 = lVar1;
  param_1[2] = (long)&PTR_FUN_110bb3b30;
  param_1[5] = (long)&PTR_DAT_110bb3b60;
  *(long *)((long)param_1 + *(long *)(lVar1 + -0x18)) = param_2[3];
  func_0x00010a1f9d14(param_1 + 0x13);
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



/* Entry: 10a7ccaa8; end: 10a7ccafb;  */

undefined8 * FUN_10a7ccaa8(undefined8 *param_1)

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
  
  *param_1 = &PTR_FUN_110c19908;
  param_1[2] = &PTR_FUN_110c199f0;
  param_1[5] = &PTR_DAT_110c19a20;
  param_1[0x3b] = &PTR_DAT_110c19af8;
  param_1[0x1d] = &PTR_DAT_110c19a80;
  func_0x00010a7d3cdc(param_1 + 0x36);
  if (param_1[0x33] != 0) {
    param_1[0x34] = param_1[0x33];
    __ZdlPv();
  }
  if (param_1[0x30] != 0) {
    param_1[0x31] = param_1[0x30];
    __ZdlPv();
  }
  if (param_1[0x2d] != 0) {
    param_1[0x2e] = param_1[0x2d];
    __ZdlPv();
  }
  if (param_1[0x2a] != 0) {
    param_1[0x2b] = param_1[0x2a];
    __ZdlPv();
  }
  if (param_1[0x27] != 0) {
    param_1[0x28] = param_1[0x27];
    __ZdlPv();
  }
  if (param_1[0x24] != 0) {
    param_1[0x25] = param_1[0x24];
    __ZdlPv();
  }
  FUN_10a0cfe2c(param_1 + 0x22);
  param_1[0x1d] = &PTR_DAT_110c1afc0;
  param_1[0x3b] = &PTR_FUN_110c1b038;
  func_0x00010a004e5c(param_1 + 0x20);
  func_0x00010a004e04(param_1 + 0x1e);
  *param_1 = &PTR_FUN_110c1ac08;
  param_1[2] = &PTR_FUN_110c68030;
  param_1[5] = &PTR_DAT_110c68060;
  param_1[0x3b] = &PTR_FUN_110c1ad08;
  FUN_10a0cfe2c(param_1 + 0x1b);
  func_0x00010a1980a8(param_1 + 0x18);
  *param_1 = &PTR_FUN_110c1aea0;
  param_1[2] = &PTR_FUN_110bb3b30;
  param_1[5] = &PTR_DAT_110bb3b60;
  param_1[0x3b] = &PTR_DAT_110c1af70;
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



/* Entry: 10a7ccafc; end: 10a7ccb77;  */

void FUN_10a7ccafc(undefined8 param_1)

{
  FUN_10a7cbbf4(param_1,&PTR_PTR_110c19b30);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a7ccb78; end: 10a7ccbaf;  */

void FUN_10a7ccb78(long *param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(*param_1 + -0x18);
  FUN_10a7cbbf4((long)param_1 + lVar1,&PTR_PTR_110c19b30);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)((long)param_1 + lVar1);
  return;
}



/* Entry: 10a7ccbb0; end: 10a7cccf7;  */

void FUN_10a7ccbb0(undefined4 *param_1)

{
  undefined8 auStack_40 [2];
  char cStack_29;
  
  *param_1 = 0;
  *(undefined8 *)(param_1 + 4) = 0;
  *(undefined8 *)(param_1 + 2) = 0;
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 6) = 0;
  *(undefined8 *)(param_1 + 0xc) = 0;
  *(undefined8 *)(param_1 + 10) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0xe) = 0;
  FUN_10a19079c(param_1 + 2);
  *(undefined8 *)(param_1 + 10) = 0xffffffffffffffff;
  *(undefined8 *)(param_1 + 8) = 0xffffffffffffffff;
  *(undefined8 *)(param_1 + 0xe) = 0xffffffffffffffff;
  *(undefined8 *)(param_1 + 0xc) = 0xffffffffffffffff;
  *(undefined8 *)(param_1 + 0x10) = 0xffffffff;
  *param_1 = 0;
  FUN_10ab6e728();
  FUN_10ab6f7f8(param_1,0x1138356c0,5,3,0);
  FUN_10ab6f020();
  FUN_10ab6f7f8(param_1,0x113835880,5,2,0);
  func_0x000107c2b074(auStack_40,&PTR_DAT_110c1b388);
  FUN_10ab6f7f8(param_1,auStack_40,5,1,0);
  if (cStack_29 < '\0') {
    __ZdlPv(auStack_40[0]);
  }
  func_0x000107c2b074(auStack_40,&PTR_DAT_110c1b3a0);
  FUN_10ab6f7f8(param_1,auStack_40,5,1,0);
  if (cStack_29 < '\0') {
    __ZdlPv(auStack_40[0]);
  }
  return;
}



/* Entry: 10a7cccf8; end: 10a7ccd8b;  */

long * FUN_10a7cccf8(long *param_1,long *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  long *plVar5;
  long lVar6;
  
  lVar6 = *param_2;
  if (lVar6 == 0) {
    puVar4 = (undefined8 *)0x0;
  }
  else {
    puVar4 = (undefined8 *)0x20;
    __Znwm();
    *puVar4 = &PTR_FUN_110c1b548;
    puVar4[1] = 0;
    puVar4[2] = 0;
    puVar4[3] = lVar6;
  }
  *param_2 = 0;
  plVar5 = (long *)param_1[1];
  *param_1 = lVar6;
  param_1[1] = (long)puVar4;
  if (plVar5 != (long *)0x0) {
    plVar1 = plVar5 + 1;
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
      (**(code **)(*plVar5 + 0x10))(plVar5);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
    }
  }
  return param_1;
}



/* Entry: 10a7ccd8c; end: 10a7cd07f;  */

long * FUN_10a7ccd8c(long *param_1,long param_2,int param_3)

{
  long *plVar1;
  long lVar2;
  undefined4 auStack_80 [2];
  long lStack_78;
  long lStack_70;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  long *plStack_38;
  
  param_1[0x3c] = 0;
  param_1[0x3d] = 0;
  param_1[0x3b] = (long)&PTR_FUN_110c383b8;
  *(undefined2 *)(param_1 + 0x3e) = 0x100;
  plVar1 = param_1;
  FUN_10ac63ebc(param_1,&PTR_PTR_110c19b38,param_2);
  FUN_10a0040d0(plVar1 + 0x1d,&PTR_PTR_110c19b68);
  *param_1 = (long)&PTR_FUN_110c19908;
  param_1[2] = (long)&PTR_FUN_110c199f0;
  param_1[5] = (long)&PTR_DAT_110c19a20;
  param_1[0x3b] = (long)&PTR_DAT_110c19af8;
  param_1[0x1d] = (long)&PTR_DAT_110c19a80;
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
  param_1[0x2d] = 0;
  param_1[0x2c] = 0;
  param_1[0x2f] = 0;
  param_1[0x2e] = 0;
  param_1[0x31] = 0;
  param_1[0x30] = 0;
  param_1[0x33] = 0;
  param_1[0x32] = 0;
  param_1[0x35] = 0;
  param_1[0x34] = 0;
  param_1[0x37] = 0;
  param_1[0x36] = 0;
  param_1[0x39] = 0;
  param_1[0x38] = 0;
  *(undefined4 *)(param_1 + 0x3a) = 0x3f800000;
  if (param_3 != 0) {
    if ((*(byte *)(param_1 + 0x3e) & 1) == 0) {
      *(undefined1 *)(param_1 + 0x3e) = 1;
      param_1[0x3d] = param_2;
      if (param_2 != 0) {
        param_1[0x3c] = *(long *)(*(long *)(param_2 + 0x850) + 0x2c);
      }
    }
    FUN_10a5ae998(param_1[0x20],&PTR_DAT_110b99f08,param_2,param_1 + 0x1d);
  }
  FUN_10a7ccbb0(auStack_80);
  plVar1 = (long *)0x1b0;
  __Znwm();
  FUN_10ab46d7c();
  plStack_38 = plVar1;
  FUN_10a7cccf8(param_1 + 0x22,&plStack_38);
  plVar1 = plStack_38;
  plStack_38 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  lVar2 = param_1[0x22];
  *(undefined8 *)(lVar2 + 0xe8) = 1;
  *(undefined4 *)(lVar2 + 0xf0) = auStack_80[0];
  if ((undefined4 *)(lVar2 + 0xf0) != auStack_80) {
    FUN_10a1903c4(lVar2 + 0xf8,lStack_78,lStack_70,(lStack_70 - lStack_78 >> 3) * 0x6db6db6db6db6db7
                 );
  }
  *(undefined8 *)(lVar2 + 0x118) = uStack_58;
  *(undefined8 *)(lVar2 + 0x110) = uStack_60;
  *(undefined8 *)(lVar2 + 0x128) = uStack_48;
  *(undefined8 *)(lVar2 + 0x120) = uStack_50;
  *(undefined8 *)(lVar2 + 0x130) = uStack_40;
  if (*(char *)((long)param_1 + 0xba) != '\x01') {
    *(undefined1 *)((long)param_1 + 0xba) = 1;
    (**(code **)(*param_1 + 0xa0))(param_1);
  }
  if (*(char *)((long)param_1 + 0xb9) != '\x01') {
    *(undefined1 *)((long)param_1 + 0xb9) = 1;
    (**(code **)(*param_1 + 0xa0))(param_1);
  }
  plStack_38 = &lStack_78;
  func_0x00010a190844(&plStack_38);
  return param_1;
}



/* Entry: 10a7cd080; end: 10a7cd167;  */

void FUN_10a7cd080(undefined8 param_1)

{
  undefined **appuStack_150 [2];
  undefined **ppuStack_140;
  undefined **ppuStack_138;
  undefined1 auStack_130 [56];
  undefined8 uStack_f8;
  char cStack_e1;
  undefined **appuStack_d0 [19];
  undefined1 uStack_31;
  
  FUN_109febc44(appuStack_150);
  FUN_10a002568(&ppuStack_140,&UNK_10f677cc0,0x2a);
  func_0x00010a002480(param_1,&ppuStack_138,&uStack_31);
  appuStack_150[0] = &PTR_SUB_1108a5a38;
  ppuStack_140 = &PTR_DAT_1108a5a60;
  appuStack_d0[0] = &PTR_DAT_1108a5a88;
  ppuStack_138 = &PTR_DAT_11088d7b0;
  if (cStack_e1 < '\0') {
    __ZdlPv(uStack_f8);
  }
  ppuStack_138 = (undefined **)
                 (PTR___ZTVNSt3__115basic_streambufIcNS_11char_traitsIcEEEE_110346b20 + 0x10);
  __ZNSt3__16localeD1Ev(auStack_130);
  __ZNSt3__114basic_iostreamIcNS_11char_traitsIcEEED2Ev(appuStack_150,&PTR_PTR_1108a5aa0);
  __ZNSt3__19basic_iosIcNS_11char_traitsIcEEED2Ev(appuStack_d0);
  return;
}



/* Entry: 10a7cd168; end: 10a7cd16f;  */

void FUN_10a7cd168(undefined8 param_1)

{
  undefined **appuStack_150 [2];
  undefined **ppuStack_140;
  undefined **ppuStack_138;
  undefined1 auStack_130 [56];
  undefined8 uStack_f8;
  char cStack_e1;
  undefined **appuStack_d0 [19];
  undefined1 uStack_31;
  
  FUN_109febc44(appuStack_150);
  FUN_10a002568(&ppuStack_140,&UNK_10f677cc0,0x2a);
  func_0x00010a002480(param_1,&ppuStack_138,&uStack_31);
  appuStack_150[0] = &PTR_SUB_1108a5a38;
  ppuStack_140 = &PTR_DAT_1108a5a60;
  appuStack_d0[0] = &PTR_DAT_1108a5a88;
  ppuStack_138 = &PTR_DAT_11088d7b0;
  if (cStack_e1 < '\0') {
    __ZdlPv(uStack_f8);
  }
  ppuStack_138 = (undefined **)
                 (PTR___ZTVNSt3__115basic_streambufIcNS_11char_traitsIcEEEE_110346b20 + 0x10);
  __ZNSt3__16localeD1Ev(auStack_130);
  __ZNSt3__114basic_iostreamIcNS_11char_traitsIcEEED2Ev(appuStack_150,&PTR_PTR_1108a5aa0);
  __ZNSt3__19basic_iosIcNS_11char_traitsIcEEED2Ev(appuStack_d0);
  return;
}



/* Entry: 10a7cd170; end: 10a7cd1b3;  */

void FUN_10a7cd170(undefined8 param_1,long *param_2)

{
  undefined *puStack_20;
  undefined8 uStack_18;
  
  puStack_20 = &UNK_10f6781ae;
  uStack_18 = 0x33;
  (**(code **)(*param_2 + 0x30))(param_2,&PTR_DAT_110c1b368,&puStack_20);
  return;
}



/* Entry: 10a7cd1b4; end: 10a7cd1c3;  */

undefined8 FUN_10a7cd1b4(void)

{
  return 0;
}



/* Entry: 10a7cd1c4; end: 10a7cdb0f;  */

void FUN_10a7cd1c4(long *param_1)

{
  undefined2 uVar1;
  ushort uVar2;
  code *pcVar3;
  long *plVar4;
  ulong *puVar5;
  ulong uVar6;
  long lVar7;
  uint *puVar8;
  long lVar9;
  long lVar10;
  long *plVar11;
  ulong uVar12;
  long *plVar13;
  undefined8 uVar14;
  long *unaff_x19;
  int iVar15;
  ulong *unaff_x20;
  long *plVar16;
  undefined8 *unaff_x21;
  uint *unaff_x22;
  uint *puVar17;
  ulong uVar18;
  long *unaff_x23;
  undefined8 *puVar19;
  ulong unaff_x24;
  undefined4 *unaff_x25;
  ulong unaff_x26;
  undefined4 *unaff_x27;
  ulong unaff_x28;
  undefined1 *unaff_x29;
  code *unaff_x30;
  uint uVar20;
  ulong unaff_d8;
  uint uVar21;
  ulong unaff_d9;
  uint uVar22;
  ulong unaff_d10;
  uint uVar23;
  ulong unaff_d11;
  uint uVar24;
  ulong unaff_d12;
  undefined8 unaff_d13;
  
  do {
    plVar4 = param_1;
    *(undefined8 *)((long)register0x00000008 + -0x90) = unaff_d13;
    *(ulong *)((long)register0x00000008 + -0x88) = unaff_d12;
    *(ulong *)((long)register0x00000008 + -0x80) = unaff_d11;
    *(ulong *)((long)register0x00000008 + -0x78) = unaff_d10;
    *(ulong *)((long)register0x00000008 + -0x70) = unaff_d9;
    *(ulong *)((long)register0x00000008 + -0x68) = unaff_d8;
    *(ulong *)((long)register0x00000008 + -0x60) = unaff_x28;
    *(undefined4 **)((long)register0x00000008 + -0x58) = unaff_x27;
    *(ulong *)((long)register0x00000008 + -0x50) = unaff_x26;
    *(undefined4 **)((long)register0x00000008 + -0x48) = unaff_x25;
    *(ulong *)((long)register0x00000008 + -0x40) = unaff_x24;
    *(long **)((long)register0x00000008 + -0x38) = unaff_x23;
    *(uint **)((long)register0x00000008 + -0x30) = unaff_x22;
    *(undefined8 **)((long)register0x00000008 + -0x28) = unaff_x21;
    *(ulong **)((long)register0x00000008 + -0x20) = unaff_x20;
    *(long **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
    *(undefined4 *)((long)plVar4 + 0x74) = 0;
    plVar16 = plVar4;
    (**(code **)(*plVar4 + 0xc0))();
    lVar7 = plVar4[0x24];
    lVar10 = plVar4[0x25];
    if ((lVar10 == lVar7) && (plVar4[0x39] != 0)) {
      puVar5 = (ulong *)plVar4[0x38];
      while (puVar5 != (ulong *)0x0) {
        puVar5 = (ulong *)*puVar5;
        __ZdlPv();
        unaff_x20 = puVar5;
      }
      plVar4[0x38] = 0;
      lVar7 = plVar4[0x37];
      if (lVar7 != 0) {
        lVar10 = 0;
        do {
          *(undefined8 *)(plVar4[0x36] + lVar10 * 8) = 0;
          lVar10 = lVar10 + 1;
        } while (lVar7 != lVar10);
      }
      plVar4[0x39] = 0;
      lVar7 = plVar4[0x24];
      lVar10 = plVar4[0x25];
      plVar16 = (long *)0x0;
    }
    unaff_x23 = (long *)((lVar10 - lVar7 >> 2) * -0x3333333333333333);
    if ((long *)0x3ffe < unaff_x23) {
      unaff_x23 = (long *)0x3fff;
    }
    plVar4[0x28] = plVar4[0x27];
    plVar4[0x2b] = plVar4[0x2a];
    plVar4[0x2e] = plVar4[0x2d];
    plVar4[0x31] = plVar4[0x30];
    plVar4[0x34] = plVar4[0x33];
    if (lVar10 != lVar7) {
      plVar13 = (long *)0x0;
      unaff_x24 = 0x1555555555555555;
      unaff_x26 = 0x7ffffffffffffffc;
      unaff_x27 = (undefined4 *)0x3fffffffffffffff;
      unaff_x25 = (undefined4 *)0xaaaaaaaaaaaaaaab;
      unaff_x21 = (undefined8 *)&UNK_10e4db3f0;
      *(long **)((long)register0x00000008 + -0xf0) = unaff_x23;
      do {
        lVar7 = plVar4[0x24];
        plVar11 = (long *)((plVar4[0x25] - lVar7 >> 2) * -0x3333333333333333);
        if (plVar11 < plVar13 || (long)plVar11 - (long)plVar13 == 0) goto LAB_10a7cdb0c;
        unaff_x28 = 0;
        *(long **)((long)register0x00000008 + -0xe8) = plVar13;
        puVar8 = (uint *)(lVar7 + (long)plVar13 * 0x14);
        uVar20 = *puVar8;
        unaff_d8 = (ulong)uVar20;
        uVar21 = puVar8[1];
        unaff_d9 = (ulong)uVar21;
        uVar22 = puVar8[2];
        unaff_d10 = (ulong)uVar22;
        uVar23 = puVar8[3];
        unaff_d11 = (ulong)uVar23;
        uVar24 = puVar8[4];
        unaff_d12 = (ulong)uVar24;
        do {
          puVar8 = (uint *)plVar4[0x28];
          if ((uint *)plVar4[0x29] <= puVar8) {
            unaff_x20 = (ulong *)((long)puVar8 - plVar4[0x27]);
            uVar18 = ((long)unaff_x20 >> 2) * -0x5555555555555555 + 1;
            if (uVar18 < 0x1555555555555556) {
              lVar7 = plVar4[0x29] - plVar4[0x27] >> 2;
              uVar12 = lVar7 * 0x5555555555555556;
              if (uVar12 < uVar18 || uVar12 - uVar18 == 0) {
                uVar12 = uVar18;
              }
              if (0xaaaaaaaaaaaaaa9 < (ulong)(lVar7 * -0x5555555555555555)) {
                uVar12 = unaff_x24;
              }
              plVar16 = plVar4 + 0x27;
              FUN_10a051b24();
              puVar8 = (uint *)((long)plVar16 + (long)unaff_x20);
              unaff_x23 = (long *)((long)plVar16 + uVar12 * 0xc);
              *puVar8 = uVar20;
              puVar8[1] = uVar21;
              puVar8[2] = uVar22;
              puVar17 = puVar8 + 3;
              unaff_x20 = (ulong *)((long)puVar8 - (plVar4[0x28] - plVar4[0x27]));
              _memcpy(unaff_x20);
              plVar16 = (long *)plVar4[0x27];
              plVar4[0x27] = (long)unaff_x20;
              plVar4[0x28] = (long)puVar17;
              plVar4[0x29] = (long)unaff_x23;
              if (plVar16 != (long *)0x0) {
                __ZdlPv();
              }
              goto LAB_10a7cd3bc;
            }
LAB_10a7cdb04:
            FUN_10a051b10();
            goto LAB_10a7cdb08;
          }
          *puVar8 = uVar20;
          puVar8[1] = uVar21;
          puVar17 = puVar8 + 3;
          puVar8[2] = uVar22;
LAB_10a7cd3bc:
          plVar4[0x28] = (long)puVar17;
          puVar8 = (uint *)plVar4[0x2b];
          if ((uint *)plVar4[0x2c] <= puVar8) {
            unaff_x20 = (ulong *)((long)puVar8 - plVar4[0x2a]);
            uVar18 = ((long)unaff_x20 >> 3) + 1;
            if (uVar18 >> 0x3d == 0) {
              uVar6 = plVar4[0x2c] - plVar4[0x2a];
              uVar12 = (long)uVar6 >> 2;
              if (uVar12 <= uVar18) {
                uVar12 = uVar18;
              }
              if (0x7ffffffffffffff7 < uVar6) {
                uVar12 = 0x1fffffffffffffff;
              }
              plVar16 = plVar4 + 0x2a;
              FUN_10a05083c();
              puVar19 = (undefined8 *)((long)plVar16 + (long)unaff_x20);
              unaff_x23 = plVar16 + uVar12;
              puVar17 = (uint *)(puVar19 + 1);
              *puVar19 = *(undefined8 *)(&UNK_10e4db3f0 + unaff_x28);
              unaff_x20 = (ulong *)((long)puVar19 - (plVar4[0x2b] - plVar4[0x2a]));
              _memcpy(unaff_x20);
              plVar16 = (long *)plVar4[0x2a];
              plVar4[0x2a] = (long)unaff_x20;
              plVar4[0x2b] = (long)puVar17;
              plVar4[0x2c] = (long)unaff_x23;
              if (plVar16 != (long *)0x0) {
                __ZdlPv();
              }
              goto LAB_10a7cd454;
            }
LAB_10a7cdb00:
            FUN_10a050828();
            unaff_x22 = puVar8;
            goto LAB_10a7cdb04;
          }
          puVar17 = puVar8 + 2;
          *(undefined8 *)puVar8 = *(undefined8 *)(&UNK_10e4db3f0 + unaff_x28);
LAB_10a7cd454:
          plVar4[0x2b] = (long)puVar17;
          puVar8 = (uint *)plVar4[0x2e];
          if ((uint *)plVar4[0x2f] <= puVar8) {
            unaff_x20 = (ulong *)((long)puVar8 - plVar4[0x2d]);
            uVar18 = ((long)unaff_x20 >> 2) + 1;
            if (uVar18 >> 0x3e == 0) {
              uVar6 = plVar4[0x2f] - plVar4[0x2d];
              uVar12 = (long)uVar6 >> 1;
              if (uVar12 <= uVar18) {
                uVar12 = uVar18;
              }
              if (0x7ffffffffffffffb < uVar6) {
                uVar12 = 0x3fffffffffffffff;
              }
              plVar16 = plVar4 + 0x2d;
              FUN_10a001d0c();
              lVar7 = plVar4[0x2d];
              puVar8 = (uint *)((long)plVar16 + (long)unaff_x20);
              unaff_x23 = (long *)((long)plVar16 + uVar12 * 4);
              unaff_x20 = (ulong *)((long)puVar8 - (plVar4[0x2e] - lVar7));
              puVar17 = puVar8 + 1;
              *puVar8 = uVar23;
              _memcpy(unaff_x20,lVar7);
              plVar16 = (long *)plVar4[0x2d];
              plVar4[0x2d] = (long)unaff_x20;
              plVar4[0x2e] = (long)puVar17;
              plVar4[0x2f] = (long)unaff_x23;
              if (plVar16 != (long *)0x0) {
                __ZdlPv();
              }
              goto LAB_10a7cd4dc;
            }
LAB_10a7cdafc:
            FUN_10a001cf8();
            goto LAB_10a7cdb00;
          }
          puVar17 = puVar8 + 1;
          *puVar8 = uVar23;
LAB_10a7cd4dc:
          plVar4[0x2e] = (long)puVar17;
          puVar8 = (uint *)plVar4[0x31];
          if (puVar8 < (uint *)plVar4[0x32]) {
            unaff_x22 = puVar8 + 1;
            *puVar8 = uVar24;
          }
          else {
            unaff_x20 = (ulong *)((long)puVar8 - plVar4[0x30]);
            uVar18 = ((long)unaff_x20 >> 2) + 1;
            if (uVar18 >> 0x3e != 0) goto LAB_10a7cdafc;
            uVar6 = plVar4[0x32] - plVar4[0x30];
            uVar12 = (long)uVar6 >> 1;
            if (uVar12 <= uVar18) {
              uVar12 = uVar18;
            }
            if (0x7ffffffffffffffb < uVar6) {
              uVar12 = 0x3fffffffffffffff;
            }
            plVar16 = plVar4 + 0x30;
            FUN_10a001d0c();
            lVar7 = plVar4[0x30];
            puVar8 = (uint *)((long)plVar16 + (long)unaff_x20);
            unaff_x23 = (long *)((long)plVar16 + uVar12 * 4);
            unaff_x20 = (ulong *)((long)puVar8 - (plVar4[0x31] - lVar7));
            unaff_x22 = puVar8 + 1;
            *puVar8 = uVar24;
            _memcpy(unaff_x20,lVar7);
            plVar16 = (long *)plVar4[0x30];
            plVar4[0x30] = (long)unaff_x20;
            plVar4[0x31] = (long)unaff_x22;
            plVar4[0x32] = (long)unaff_x23;
            if (plVar16 != (long *)0x0) {
              __ZdlPv();
            }
          }
          plVar4[0x31] = (long)unaff_x22;
          unaff_x28 = unaff_x28 + 8;
        } while (unaff_x28 != 0x20);
        unaff_x23 = *(long **)((long)register0x00000008 + -0xf0);
        plVar13 = (long *)(*(long *)((long)register0x00000008 + -0xe8) + 1);
      } while (plVar13 != unaff_x23);
      plVar16 = (long *)0x0;
      do {
        iVar15 = (int)plVar16;
        uVar1 = (undefined2)(iVar15 << 2);
        *(undefined2 *)((long)register0x00000008 + -0xb0) = uVar1;
        FUN_10a14f5d0(plVar4 + 0x33,(undefined1 *)((long)register0x00000008 + -0xb0));
        *(ushort *)((long)register0x00000008 + -0xb0) = (ushort)(iVar15 << 2) | 1;
        FUN_10a14f5d0(plVar4 + 0x33,(undefined1 *)((long)register0x00000008 + -0xb0));
        uVar2 = (ushort)(iVar15 << 2) | 3;
        *(ushort *)((long)register0x00000008 + -0xb0) = uVar2;
        FUN_10a14f5d0(plVar4 + 0x33,(undefined1 *)((long)register0x00000008 + -0xb0));
        *(undefined2 *)((long)register0x00000008 + -0xb0) = uVar1;
        FUN_10a14f5d0(plVar4 + 0x33,(undefined1 *)((long)register0x00000008 + -0xb0));
        *(ushort *)((long)register0x00000008 + -0xb0) = uVar2;
        FUN_10a14f5d0(plVar4 + 0x33,(undefined1 *)((long)register0x00000008 + -0xb0));
        *(ushort *)((long)register0x00000008 + -0xb0) = (ushort)(iVar15 << 2) | 2;
        FUN_10a14f5d0(plVar4 + 0x33,(undefined1 *)((long)register0x00000008 + -0xb0));
        plVar16 = (long *)((long)plVar16 + 1);
      } while (unaff_x23 != plVar16);
      lVar7 = plVar4[0x24];
    }
    plVar4[0x25] = lVar7;
    (**(code **)(*plVar4 + 0xa0))(plVar4);
    plVar16 = (long *)plVar4[0x22];
    FUN_10ab4a154(plVar16,(plVar4[0x28] - plVar4[0x27] >> 2) * -0x5555555555555555);
    FUN_10ab6e728();
    lVar7 = plVar16[0x1f];
    lVar10 = lVar7;
    for (; (lVar7 != plVar16[0x20] &&
           (lVar10 = lVar7, *(long *)(lVar7 + 0x18) != lRam00000001138356d8)); lVar7 = lVar7 + 0x38)
    {
      lVar10 = plVar16[0x20];
    }
    uVar20 = *(int *)(lVar10 + 0x24) - 1;
    if (uVar20 < 7) {
      iVar15 = *(int *)(&UNK_10e4db83c + (ulong)uVar20 * 4);
    }
    else {
      iVar15 = 0;
    }
    if (*(int *)(lVar10 + 0x28) * iVar15 == 0xc) {
      unaff_x21 = (undefined8 *)(plVar16[2] + (ulong)*(uint *)(lVar10 + 0x30));
      uVar18 = (ulong)*(uint *)(plVar16 + 0x1e);
    }
    else {
      unaff_x21 = (undefined8 *)0x0;
      uVar18 = 0;
    }
    FUN_10ab6f020();
    lVar7 = plVar16[0x1f];
    lVar10 = lVar7;
    for (; (lVar7 != plVar16[0x20] &&
           (lVar10 = lVar7, *(long *)(lVar7 + 0x18) != lRam0000000113835898)); lVar7 = lVar7 + 0x38)
    {
      lVar10 = plVar16[0x20];
    }
    uVar20 = *(int *)(lVar10 + 0x24) - 1;
    if (uVar20 < 7) {
      iVar15 = *(int *)(&UNK_10e4db83c + (ulong)uVar20 * 4);
    }
    else {
      iVar15 = 0;
    }
    if (*(int *)(lVar10 + 0x28) * iVar15 == 8) {
      puVar19 = (undefined8 *)(plVar16[2] + (ulong)*(uint *)(lVar10 + 0x30));
      unaff_x24 = (ulong)*(uint *)(plVar16 + 0x1e);
    }
    else {
      puVar19 = (undefined8 *)0x0;
      unaff_x24 = 0;
    }
    func_0x000107c2b074((undefined1 *)((long)register0x00000008 + -0xb0),&PTR_DAT_110c1b388);
    lVar7 = plVar16[0x1f];
    lVar10 = plVar16[0x20];
    lVar9 = lVar7;
    if (lVar7 != lVar10) {
      do {
        lVar9 = lVar7;
        if (*(long *)(lVar7 + 0x18) == *(long *)((long)register0x00000008 + -0x98)) break;
        lVar7 = lVar7 + 0x38;
        lVar9 = lVar10;
      } while (lVar7 != lVar10);
    }
    uVar20 = *(int *)(lVar9 + 0x24) - 1;
    if (uVar20 < 7) {
      iVar15 = *(int *)(&UNK_10e4db83c + (ulong)uVar20 * 4);
    }
    else {
      iVar15 = 0;
    }
    if (*(int *)(lVar9 + 0x28) * iVar15 == 4) {
      unaff_x25 = (undefined4 *)(plVar16[2] + (ulong)*(uint *)(lVar9 + 0x30));
      unaff_x26 = (ulong)*(uint *)(plVar16 + 0x1e);
    }
    else {
      unaff_x25 = (undefined4 *)0x0;
      unaff_x26 = 0;
    }
    if (*(char *)((long)register0x00000008 + -0x99) < '\0') {
      __ZdlPv(*(undefined8 *)((long)register0x00000008 + -0xb0));
    }
    func_0x000107c2b074((undefined1 *)((long)register0x00000008 + -0xb0),&PTR_DAT_110c1b3a0);
    lVar7 = plVar16[0x1f];
    lVar10 = plVar16[0x20];
    lVar9 = lVar7;
    if (lVar7 != lVar10) {
      do {
        lVar9 = lVar7;
        if (*(long *)(lVar7 + 0x18) == *(long *)((long)register0x00000008 + -0x98)) break;
        lVar7 = lVar7 + 0x38;
        lVar9 = lVar10;
      } while (lVar7 != lVar10);
    }
    uVar20 = *(int *)(lVar9 + 0x24) - 1;
    if (uVar20 < 7) {
      iVar15 = *(int *)(&UNK_10e4db83c + (ulong)uVar20 * 4);
    }
    else {
      iVar15 = 0;
    }
    if (*(int *)(lVar9 + 0x28) * iVar15 == 4) {
      unaff_x27 = (undefined4 *)(plVar16[2] + (ulong)*(uint *)(lVar9 + 0x30));
      unaff_x28 = (ulong)*(uint *)(plVar16 + 0x1e);
    }
    else {
      unaff_x27 = (undefined4 *)0x0;
      unaff_x28 = 0;
    }
    if (*(char *)((long)register0x00000008 + -0x99) < '\0') {
      __ZdlPv(*(undefined8 *)((long)register0x00000008 + -0xb0));
    }
    lVar7 = plVar4[0x27];
    if (plVar4[0x28] == lVar7) {
LAB_10a7cd96c:
      plVar16[0x27] = 0;
      plVar16[0x28] = 0;
      plVar16[0x29] = 0;
    }
    else {
      lVar10 = 0;
      uVar12 = 0;
      do {
        uVar14 = *(undefined8 *)(lVar7 + lVar10);
        *(undefined4 *)(unaff_x21 + 1) = *(undefined4 *)((undefined8 *)(lVar7 + lVar10) + 1);
        *unaff_x21 = uVar14;
        if ((ulong)(plVar4[0x2b] - plVar4[0x2a] >> 3) <= uVar12) {
LAB_10a7cdaf8:
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x10a7cdafc);
          (*pcVar3)();
        }
        *puVar19 = *(undefined8 *)(plVar4[0x2a] + uVar12 * 8);
        if ((ulong)(plVar4[0x2e] - plVar4[0x2d] >> 2) <= uVar12) goto LAB_10a7cdaf8;
        *unaff_x25 = *(undefined4 *)(plVar4[0x2d] + uVar12 * 4);
        if ((ulong)(plVar4[0x31] - plVar4[0x30] >> 2) <= uVar12) goto LAB_10a7cdaf8;
        *unaff_x27 = *(undefined4 *)(plVar4[0x30] + uVar12 * 4);
        uVar12 = uVar12 + 1;
        lVar7 = plVar4[0x27];
        uVar6 = (plVar4[0x28] - lVar7 >> 2) * -0x5555555555555555;
        unaff_x27 = (undefined4 *)((long)unaff_x27 + unaff_x28);
        unaff_x25 = (undefined4 *)((long)unaff_x25 + unaff_x26);
        puVar19 = (undefined8 *)((long)puVar19 + unaff_x24);
        unaff_x21 = (undefined8 *)((long)unaff_x21 + uVar18);
        lVar10 = lVar10 + 0xc;
      } while (uVar12 <= uVar6 && uVar6 - uVar12 != 0);
      if (plVar4[0x28] == lVar7) goto LAB_10a7cd96c;
      func_0x00010a008f4c((undefined1 *)((long)register0x00000008 + -0xb0));
      *(undefined8 *)((long)plVar16 + 0x144) = *(undefined8 *)((long)register0x00000008 + -0xb0);
      *(undefined4 *)((long)plVar16 + 0x14c) = *(undefined4 *)((long)register0x00000008 + -0xa8);
      plVar16[0x27] = *(long *)((long)register0x00000008 + -0xa4);
      *(undefined4 *)(plVar16 + 0x28) = *(undefined4 *)((long)register0x00000008 + -0x9c);
    }
    FUN_10ab4cb54(plVar16,plVar4[0x34] - plVar4[0x33] >> 1);
    FUN_10ab4ccac((undefined1 *)((long)register0x00000008 + -0xb0));
    lVar7 = plVar4[0x33];
    puVar8 = (uint *)(plVar4[0x34] - lVar7 >> 1);
    if (puVar8 < (uint *)0x3) {
LAB_10a7cdaa0:
      plVar4[0x28] = plVar4[0x27];
      plVar4[0x2b] = plVar4[0x2a];
      plVar4[0x2e] = plVar4[0x2d];
      plVar4[0x31] = plVar4[0x30];
      plVar4[0x34] = lVar7;
      *(undefined4 *)((long)plVar4 + 0x74) = 2;
      return;
    }
    unaff_x22 = (uint *)0x0;
    unaff_x20 = (ulong *)0x0;
    unaff_x23 = (long *)0xaaaaaaaaaaaaaaab;
    while (unaff_x22 < puVar8) {
      unaff_x21 = (undefined8 *)(ulong)*(ushort *)(lVar7 + (long)unaff_x22 * 2);
      FUN_10ab4e710((undefined1 *)((long)register0x00000008 + -0xe0),
                    (undefined1 *)((long)register0x00000008 + -0xb0),unaff_x20);
      FUN_10ab4e794((undefined1 *)((long)register0x00000008 + -200),
                    (undefined1 *)((long)register0x00000008 + -0xe0),0);
      plVar16 = (long *)((long)register0x00000008 + -200);
      FUN_10a557ab0(plVar16,unaff_x21);
      if ((undefined1 *)(plVar4[0x34] - plVar4[0x33] >> 1) <= (undefined1 *)((long)unaff_x22 + 1U))
      break;
      unaff_x21 = (undefined8 *)(ulong)*(ushort *)(plVar4[0x33] + (long)unaff_x22 * 2 + 2);
      FUN_10ab4e710((undefined1 *)((long)register0x00000008 + -0xe0),
                    (undefined1 *)((long)register0x00000008 + -0xb0),unaff_x20);
      FUN_10ab4e794((undefined1 *)((long)register0x00000008 + -200),
                    (undefined1 *)((long)register0x00000008 + -0xe0),1);
      plVar16 = (long *)((long)register0x00000008 + -200);
      FUN_10a557ab0(plVar16,unaff_x21);
      if ((undefined1 *)(plVar4[0x34] - plVar4[0x33] >> 1) <= (undefined1 *)((long)unaff_x22 + 2U))
      break;
      unaff_x21 = (undefined8 *)(ulong)*(ushort *)(plVar4[0x33] + (long)unaff_x22 * 2 + 4);
      FUN_10ab4e710((undefined1 *)((long)register0x00000008 + -0xe0),
                    (undefined1 *)((long)register0x00000008 + -0xb0),unaff_x20);
      FUN_10ab4e794((undefined1 *)((long)register0x00000008 + -200),
                    (undefined1 *)((long)register0x00000008 + -0xe0),2);
      plVar16 = (long *)((long)register0x00000008 + -200);
      FUN_10a557ab0(plVar16,unaff_x21);
      unaff_x20 = (ulong *)((long)unaff_x20 + 1);
      lVar7 = plVar4[0x33];
      puVar8 = (uint *)(plVar4[0x34] - lVar7 >> 1);
      unaff_x22 = (uint *)((long)unaff_x22 + 3);
      if ((ulong *)((ulong)puVar8 / 3) <= unaff_x20) goto LAB_10a7cdaa0;
    }
LAB_10a7cdb08:
    func_0x00010a7d2988();
LAB_10a7cdb0c:
    unaff_x30 = FUN_10a7cdb10;
    func_0x00010a7d2974();
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0xf0);
    param_1 = plVar16 + -0x1d;
    unaff_x19 = plVar4;
  } while( true );
}



/* Entry: 10a7cdb10; end: 10a7cdb17;  */

void FUN_10a7cdb10(long *param_1)

{
  undefined2 uVar1;
  ushort uVar2;
  code *pcVar3;
  ulong *puVar4;
  long *plVar5;
  ulong uVar6;
  long lVar7;
  uint *puVar8;
  long lVar9;
  long lVar10;
  long *plVar11;
  ulong uVar12;
  long *plVar13;
  undefined8 uVar14;
  long *unaff_x19;
  int iVar15;
  long *plVar16;
  ulong *unaff_x20;
  undefined8 *unaff_x21;
  uint *puVar17;
  ulong uVar18;
  uint *unaff_x22;
  undefined8 *puVar19;
  long *unaff_x23;
  ulong unaff_x24;
  undefined4 *unaff_x25;
  ulong unaff_x26;
  undefined4 *unaff_x27;
  ulong unaff_x28;
  undefined1 *unaff_x29;
  code *unaff_x30;
  uint uVar20;
  ulong unaff_d8;
  uint uVar21;
  ulong unaff_d9;
  uint uVar22;
  ulong unaff_d10;
  uint uVar23;
  ulong unaff_d11;
  uint uVar24;
  ulong unaff_d12;
  undefined8 unaff_d13;
  
  do {
    plVar5 = param_1 + -0x1d;
    *(undefined8 *)((long)register0x00000008 + -0x90) = unaff_d13;
    *(ulong *)((long)register0x00000008 + -0x88) = unaff_d12;
    *(ulong *)((long)register0x00000008 + -0x80) = unaff_d11;
    *(ulong *)((long)register0x00000008 + -0x78) = unaff_d10;
    *(ulong *)((long)register0x00000008 + -0x70) = unaff_d9;
    *(ulong *)((long)register0x00000008 + -0x68) = unaff_d8;
    *(ulong *)((long)register0x00000008 + -0x60) = unaff_x28;
    *(undefined4 **)((long)register0x00000008 + -0x58) = unaff_x27;
    *(ulong *)((long)register0x00000008 + -0x50) = unaff_x26;
    *(undefined4 **)((long)register0x00000008 + -0x48) = unaff_x25;
    *(ulong *)((long)register0x00000008 + -0x40) = unaff_x24;
    *(long **)((long)register0x00000008 + -0x38) = unaff_x23;
    *(uint **)((long)register0x00000008 + -0x30) = unaff_x22;
    *(undefined8 **)((long)register0x00000008 + -0x28) = unaff_x21;
    *(ulong **)((long)register0x00000008 + -0x20) = unaff_x20;
    *(long **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
    *(undefined4 *)((long)param_1 + -0x74) = 0;
    plVar16 = plVar5;
    (**(code **)(*plVar5 + 0xc0))();
    lVar7 = param_1[7];
    lVar10 = param_1[8];
    if ((lVar10 == lVar7) && (param_1[0x1c] != 0)) {
      puVar4 = (ulong *)param_1[0x1b];
      while (puVar4 != (ulong *)0x0) {
        puVar4 = (ulong *)*puVar4;
        __ZdlPv();
        unaff_x20 = puVar4;
      }
      param_1[0x1b] = 0;
      lVar7 = param_1[0x1a];
      if (lVar7 != 0) {
        lVar10 = 0;
        do {
          *(undefined8 *)(param_1[0x19] + lVar10 * 8) = 0;
          lVar10 = lVar10 + 1;
        } while (lVar7 != lVar10);
      }
      param_1[0x1c] = 0;
      lVar7 = param_1[7];
      lVar10 = param_1[8];
      plVar16 = (long *)0x0;
    }
    unaff_x23 = (long *)((lVar10 - lVar7 >> 2) * -0x3333333333333333);
    if ((long *)0x3ffe < unaff_x23) {
      unaff_x23 = (long *)0x3fff;
    }
    param_1[0xb] = param_1[10];
    param_1[0xe] = param_1[0xd];
    param_1[0x11] = param_1[0x10];
    param_1[0x14] = param_1[0x13];
    param_1[0x17] = param_1[0x16];
    if (lVar10 != lVar7) {
      plVar13 = (long *)0x0;
      unaff_x24 = 0x1555555555555555;
      unaff_x26 = 0x7ffffffffffffffc;
      unaff_x27 = (undefined4 *)0x3fffffffffffffff;
      unaff_x25 = (undefined4 *)0xaaaaaaaaaaaaaaab;
      unaff_x21 = (undefined8 *)&UNK_10e4db3f0;
      *(long **)((long)register0x00000008 + -0xf0) = unaff_x23;
      do {
        lVar7 = param_1[7];
        plVar11 = (long *)((param_1[8] - lVar7 >> 2) * -0x3333333333333333);
        if (plVar11 < plVar13 || (long)plVar11 - (long)plVar13 == 0) goto LAB_10a7cdb0c;
        unaff_x28 = 0;
        *(long **)((long)register0x00000008 + -0xe8) = plVar13;
        puVar8 = (uint *)(lVar7 + (long)plVar13 * 0x14);
        uVar20 = *puVar8;
        unaff_d8 = (ulong)uVar20;
        uVar21 = puVar8[1];
        unaff_d9 = (ulong)uVar21;
        uVar22 = puVar8[2];
        unaff_d10 = (ulong)uVar22;
        uVar23 = puVar8[3];
        unaff_d11 = (ulong)uVar23;
        uVar24 = puVar8[4];
        unaff_d12 = (ulong)uVar24;
        do {
          puVar8 = (uint *)param_1[0xb];
          if ((uint *)param_1[0xc] <= puVar8) {
            unaff_x20 = (ulong *)((long)puVar8 - param_1[10]);
            uVar18 = ((long)unaff_x20 >> 2) * -0x5555555555555555 + 1;
            if (uVar18 < 0x1555555555555556) {
              lVar7 = param_1[0xc] - param_1[10] >> 2;
              uVar12 = lVar7 * 0x5555555555555556;
              if (uVar12 < uVar18 || uVar12 - uVar18 == 0) {
                uVar12 = uVar18;
              }
              if (0xaaaaaaaaaaaaaa9 < (ulong)(lVar7 * -0x5555555555555555)) {
                uVar12 = unaff_x24;
              }
              plVar16 = param_1 + 10;
              FUN_10a051b24();
              puVar8 = (uint *)((long)plVar16 + (long)unaff_x20);
              unaff_x23 = (long *)((long)plVar16 + uVar12 * 0xc);
              *puVar8 = uVar20;
              puVar8[1] = uVar21;
              puVar8[2] = uVar22;
              puVar17 = puVar8 + 3;
              unaff_x20 = (ulong *)((long)puVar8 - (param_1[0xb] - param_1[10]));
              _memcpy(unaff_x20);
              plVar16 = (long *)param_1[10];
              param_1[10] = (long)unaff_x20;
              param_1[0xb] = (long)puVar17;
              param_1[0xc] = (long)unaff_x23;
              if (plVar16 != (long *)0x0) {
                __ZdlPv();
              }
              goto LAB_10a7cd3bc;
            }
LAB_10a7cdb04:
            FUN_10a051b10();
            goto LAB_10a7cdb08;
          }
          *puVar8 = uVar20;
          puVar8[1] = uVar21;
          puVar17 = puVar8 + 3;
          puVar8[2] = uVar22;
LAB_10a7cd3bc:
          param_1[0xb] = (long)puVar17;
          puVar8 = (uint *)param_1[0xe];
          if ((uint *)param_1[0xf] <= puVar8) {
            unaff_x20 = (ulong *)((long)puVar8 - param_1[0xd]);
            uVar18 = ((long)unaff_x20 >> 3) + 1;
            if (uVar18 >> 0x3d == 0) {
              uVar6 = param_1[0xf] - param_1[0xd];
              uVar12 = (long)uVar6 >> 2;
              if (uVar12 <= uVar18) {
                uVar12 = uVar18;
              }
              if (0x7ffffffffffffff7 < uVar6) {
                uVar12 = 0x1fffffffffffffff;
              }
              plVar16 = param_1 + 0xd;
              FUN_10a05083c();
              puVar19 = (undefined8 *)((long)plVar16 + (long)unaff_x20);
              unaff_x23 = plVar16 + uVar12;
              puVar17 = (uint *)(puVar19 + 1);
              *puVar19 = *(undefined8 *)(&UNK_10e4db3f0 + unaff_x28);
              unaff_x20 = (ulong *)((long)puVar19 - (param_1[0xe] - param_1[0xd]));
              _memcpy(unaff_x20);
              plVar16 = (long *)param_1[0xd];
              param_1[0xd] = (long)unaff_x20;
              param_1[0xe] = (long)puVar17;
              param_1[0xf] = (long)unaff_x23;
              if (plVar16 != (long *)0x0) {
                __ZdlPv();
              }
              goto LAB_10a7cd454;
            }
LAB_10a7cdb00:
            FUN_10a050828();
            unaff_x22 = puVar8;
            goto LAB_10a7cdb04;
          }
          puVar17 = puVar8 + 2;
          *(undefined8 *)puVar8 = *(undefined8 *)(&UNK_10e4db3f0 + unaff_x28);
LAB_10a7cd454:
          param_1[0xe] = (long)puVar17;
          puVar8 = (uint *)param_1[0x11];
          if ((uint *)param_1[0x12] <= puVar8) {
            unaff_x20 = (ulong *)((long)puVar8 - param_1[0x10]);
            uVar18 = ((long)unaff_x20 >> 2) + 1;
            if (uVar18 >> 0x3e == 0) {
              uVar6 = param_1[0x12] - param_1[0x10];
              uVar12 = (long)uVar6 >> 1;
              if (uVar12 <= uVar18) {
                uVar12 = uVar18;
              }
              if (0x7ffffffffffffffb < uVar6) {
                uVar12 = 0x3fffffffffffffff;
              }
              plVar16 = param_1 + 0x10;
              FUN_10a001d0c();
              lVar7 = param_1[0x10];
              puVar8 = (uint *)((long)plVar16 + (long)unaff_x20);
              unaff_x23 = (long *)((long)plVar16 + uVar12 * 4);
              unaff_x20 = (ulong *)((long)puVar8 - (param_1[0x11] - lVar7));
              puVar17 = puVar8 + 1;
              *puVar8 = uVar23;
              _memcpy(unaff_x20,lVar7);
              plVar16 = (long *)param_1[0x10];
              param_1[0x10] = (long)unaff_x20;
              param_1[0x11] = (long)puVar17;
              param_1[0x12] = (long)unaff_x23;
              if (plVar16 != (long *)0x0) {
                __ZdlPv();
              }
              goto LAB_10a7cd4dc;
            }
LAB_10a7cdafc:
            FUN_10a001cf8();
            goto LAB_10a7cdb00;
          }
          puVar17 = puVar8 + 1;
          *puVar8 = uVar23;
LAB_10a7cd4dc:
          param_1[0x11] = (long)puVar17;
          puVar8 = (uint *)param_1[0x14];
          if (puVar8 < (uint *)param_1[0x15]) {
            unaff_x22 = puVar8 + 1;
            *puVar8 = uVar24;
          }
          else {
            unaff_x20 = (ulong *)((long)puVar8 - param_1[0x13]);
            uVar18 = ((long)unaff_x20 >> 2) + 1;
            if (uVar18 >> 0x3e != 0) goto LAB_10a7cdafc;
            uVar6 = param_1[0x15] - param_1[0x13];
            uVar12 = (long)uVar6 >> 1;
            if (uVar12 <= uVar18) {
              uVar12 = uVar18;
            }
            if (0x7ffffffffffffffb < uVar6) {
              uVar12 = 0x3fffffffffffffff;
            }
            plVar16 = param_1 + 0x13;
            FUN_10a001d0c();
            lVar7 = param_1[0x13];
            puVar8 = (uint *)((long)plVar16 + (long)unaff_x20);
            unaff_x23 = (long *)((long)plVar16 + uVar12 * 4);
            unaff_x20 = (ulong *)((long)puVar8 - (param_1[0x14] - lVar7));
            unaff_x22 = puVar8 + 1;
            *puVar8 = uVar24;
            _memcpy(unaff_x20,lVar7);
            plVar16 = (long *)param_1[0x13];
            param_1[0x13] = (long)unaff_x20;
            param_1[0x14] = (long)unaff_x22;
            param_1[0x15] = (long)unaff_x23;
            if (plVar16 != (long *)0x0) {
              __ZdlPv();
            }
          }
          param_1[0x14] = (long)unaff_x22;
          unaff_x28 = unaff_x28 + 8;
        } while (unaff_x28 != 0x20);
        unaff_x23 = *(long **)((long)register0x00000008 + -0xf0);
        plVar13 = (long *)(*(long *)((long)register0x00000008 + -0xe8) + 1);
      } while (plVar13 != unaff_x23);
      plVar16 = (long *)0x0;
      do {
        iVar15 = (int)plVar16;
        uVar1 = (undefined2)(iVar15 << 2);
        *(undefined2 *)((long)register0x00000008 + -0xb0) = uVar1;
        FUN_10a14f5d0(param_1 + 0x16,(undefined1 *)((long)register0x00000008 + -0xb0));
        *(ushort *)((long)register0x00000008 + -0xb0) = (ushort)(iVar15 << 2) | 1;
        FUN_10a14f5d0(param_1 + 0x16,(undefined1 *)((long)register0x00000008 + -0xb0));
        uVar2 = (ushort)(iVar15 << 2) | 3;
        *(ushort *)((long)register0x00000008 + -0xb0) = uVar2;
        FUN_10a14f5d0(param_1 + 0x16,(undefined1 *)((long)register0x00000008 + -0xb0));
        *(undefined2 *)((long)register0x00000008 + -0xb0) = uVar1;
        FUN_10a14f5d0(param_1 + 0x16,(undefined1 *)((long)register0x00000008 + -0xb0));
        *(ushort *)((long)register0x00000008 + -0xb0) = uVar2;
        FUN_10a14f5d0(param_1 + 0x16,(undefined1 *)((long)register0x00000008 + -0xb0));
        *(ushort *)((long)register0x00000008 + -0xb0) = (ushort)(iVar15 << 2) | 2;
        FUN_10a14f5d0(param_1 + 0x16,(undefined1 *)((long)register0x00000008 + -0xb0));
        plVar16 = (long *)((long)plVar16 + 1);
      } while (unaff_x23 != plVar16);
      lVar7 = param_1[7];
    }
    param_1[8] = lVar7;
    (**(code **)(*plVar5 + 0xa0))(plVar5);
    plVar16 = (long *)param_1[5];
    FUN_10ab4a154(plVar16,(param_1[0xb] - param_1[10] >> 2) * -0x5555555555555555);
    FUN_10ab6e728();
    lVar7 = plVar16[0x1f];
    lVar10 = lVar7;
    for (; (lVar7 != plVar16[0x20] &&
           (lVar10 = lVar7, *(long *)(lVar7 + 0x18) != lRam00000001138356d8)); lVar7 = lVar7 + 0x38)
    {
      lVar10 = plVar16[0x20];
    }
    uVar20 = *(int *)(lVar10 + 0x24) - 1;
    if (uVar20 < 7) {
      iVar15 = *(int *)(&UNK_10e4db83c + (ulong)uVar20 * 4);
    }
    else {
      iVar15 = 0;
    }
    if (*(int *)(lVar10 + 0x28) * iVar15 == 0xc) {
      unaff_x21 = (undefined8 *)(plVar16[2] + (ulong)*(uint *)(lVar10 + 0x30));
      uVar18 = (ulong)*(uint *)(plVar16 + 0x1e);
    }
    else {
      unaff_x21 = (undefined8 *)0x0;
      uVar18 = 0;
    }
    FUN_10ab6f020();
    lVar7 = plVar16[0x1f];
    lVar10 = lVar7;
    for (; (lVar7 != plVar16[0x20] &&
           (lVar10 = lVar7, *(long *)(lVar7 + 0x18) != lRam0000000113835898)); lVar7 = lVar7 + 0x38)
    {
      lVar10 = plVar16[0x20];
    }
    uVar20 = *(int *)(lVar10 + 0x24) - 1;
    if (uVar20 < 7) {
      iVar15 = *(int *)(&UNK_10e4db83c + (ulong)uVar20 * 4);
    }
    else {
      iVar15 = 0;
    }
    if (*(int *)(lVar10 + 0x28) * iVar15 == 8) {
      puVar19 = (undefined8 *)(plVar16[2] + (ulong)*(uint *)(lVar10 + 0x30));
      unaff_x24 = (ulong)*(uint *)(plVar16 + 0x1e);
    }
    else {
      puVar19 = (undefined8 *)0x0;
      unaff_x24 = 0;
    }
    func_0x000107c2b074((undefined1 *)((long)register0x00000008 + -0xb0),&PTR_DAT_110c1b388);
    lVar7 = plVar16[0x1f];
    lVar10 = plVar16[0x20];
    lVar9 = lVar7;
    if (lVar7 != lVar10) {
      do {
        lVar9 = lVar7;
        if (*(long *)(lVar7 + 0x18) == *(long *)((long)register0x00000008 + -0x98)) break;
        lVar7 = lVar7 + 0x38;
        lVar9 = lVar10;
      } while (lVar7 != lVar10);
    }
    uVar20 = *(int *)(lVar9 + 0x24) - 1;
    if (uVar20 < 7) {
      iVar15 = *(int *)(&UNK_10e4db83c + (ulong)uVar20 * 4);
    }
    else {
      iVar15 = 0;
    }
    if (*(int *)(lVar9 + 0x28) * iVar15 == 4) {
      unaff_x25 = (undefined4 *)(plVar16[2] + (ulong)*(uint *)(lVar9 + 0x30));
      unaff_x26 = (ulong)*(uint *)(plVar16 + 0x1e);
    }
    else {
      unaff_x25 = (undefined4 *)0x0;
      unaff_x26 = 0;
    }
    if (*(char *)((long)register0x00000008 + -0x99) < '\0') {
      __ZdlPv(*(undefined8 *)((long)register0x00000008 + -0xb0));
    }
    func_0x000107c2b074((undefined1 *)((long)register0x00000008 + -0xb0),&PTR_DAT_110c1b3a0);
    lVar7 = plVar16[0x1f];
    lVar10 = plVar16[0x20];
    lVar9 = lVar7;
    if (lVar7 != lVar10) {
      do {
        lVar9 = lVar7;
        if (*(long *)(lVar7 + 0x18) == *(long *)((long)register0x00000008 + -0x98)) break;
        lVar7 = lVar7 + 0x38;
        lVar9 = lVar10;
      } while (lVar7 != lVar10);
    }
    uVar20 = *(int *)(lVar9 + 0x24) - 1;
    if (uVar20 < 7) {
      iVar15 = *(int *)(&UNK_10e4db83c + (ulong)uVar20 * 4);
    }
    else {
      iVar15 = 0;
    }
    if (*(int *)(lVar9 + 0x28) * iVar15 == 4) {
      unaff_x27 = (undefined4 *)(plVar16[2] + (ulong)*(uint *)(lVar9 + 0x30));
      unaff_x28 = (ulong)*(uint *)(plVar16 + 0x1e);
    }
    else {
      unaff_x27 = (undefined4 *)0x0;
      unaff_x28 = 0;
    }
    if (*(char *)((long)register0x00000008 + -0x99) < '\0') {
      __ZdlPv(*(undefined8 *)((long)register0x00000008 + -0xb0));
    }
    lVar7 = param_1[10];
    if (param_1[0xb] == lVar7) {
LAB_10a7cd96c:
      plVar16[0x27] = 0;
      plVar16[0x28] = 0;
      plVar16[0x29] = 0;
    }
    else {
      lVar10 = 0;
      uVar12 = 0;
      do {
        uVar14 = *(undefined8 *)(lVar7 + lVar10);
        *(undefined4 *)(unaff_x21 + 1) = *(undefined4 *)((undefined8 *)(lVar7 + lVar10) + 1);
        *unaff_x21 = uVar14;
        if ((ulong)(param_1[0xe] - param_1[0xd] >> 3) <= uVar12) {
LAB_10a7cdaf8:
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x10a7cdafc);
          (*pcVar3)();
        }
        *puVar19 = *(undefined8 *)(param_1[0xd] + uVar12 * 8);
        if ((ulong)(param_1[0x11] - param_1[0x10] >> 2) <= uVar12) goto LAB_10a7cdaf8;
        *unaff_x25 = *(undefined4 *)(param_1[0x10] + uVar12 * 4);
        if ((ulong)(param_1[0x14] - param_1[0x13] >> 2) <= uVar12) goto LAB_10a7cdaf8;
        *unaff_x27 = *(undefined4 *)(param_1[0x13] + uVar12 * 4);
        uVar12 = uVar12 + 1;
        lVar7 = param_1[10];
        uVar6 = (param_1[0xb] - lVar7 >> 2) * -0x5555555555555555;
        unaff_x27 = (undefined4 *)((long)unaff_x27 + unaff_x28);
        unaff_x25 = (undefined4 *)((long)unaff_x25 + unaff_x26);
        puVar19 = (undefined8 *)((long)puVar19 + unaff_x24);
        unaff_x21 = (undefined8 *)((long)unaff_x21 + uVar18);
        lVar10 = lVar10 + 0xc;
      } while (uVar12 <= uVar6 && uVar6 - uVar12 != 0);
      if (param_1[0xb] == lVar7) goto LAB_10a7cd96c;
      func_0x00010a008f4c((undefined1 *)((long)register0x00000008 + -0xb0));
      *(undefined8 *)((long)plVar16 + 0x144) = *(undefined8 *)((long)register0x00000008 + -0xb0);
      *(undefined4 *)((long)plVar16 + 0x14c) = *(undefined4 *)((long)register0x00000008 + -0xa8);
      plVar16[0x27] = *(long *)((long)register0x00000008 + -0xa4);
      *(undefined4 *)(plVar16 + 0x28) = *(undefined4 *)((long)register0x00000008 + -0x9c);
    }
    FUN_10ab4cb54(plVar16,param_1[0x17] - param_1[0x16] >> 1);
    FUN_10ab4ccac((undefined1 *)((long)register0x00000008 + -0xb0));
    lVar7 = param_1[0x16];
    puVar8 = (uint *)(param_1[0x17] - lVar7 >> 1);
    if (puVar8 < (uint *)0x3) {
LAB_10a7cdaa0:
      param_1[0xb] = param_1[10];
      param_1[0xe] = param_1[0xd];
      param_1[0x11] = param_1[0x10];
      param_1[0x14] = param_1[0x13];
      param_1[0x17] = lVar7;
      *(undefined4 *)((long)param_1 + -0x74) = 2;
      return;
    }
    unaff_x22 = (uint *)0x0;
    unaff_x20 = (ulong *)0x0;
    unaff_x23 = (long *)0xaaaaaaaaaaaaaaab;
    while (unaff_x22 < puVar8) {
      unaff_x21 = (undefined8 *)(ulong)*(ushort *)(lVar7 + (long)unaff_x22 * 2);
      FUN_10ab4e710((undefined1 *)((long)register0x00000008 + -0xe0),
                    (undefined1 *)((long)register0x00000008 + -0xb0),unaff_x20);
      FUN_10ab4e794((undefined1 *)((long)register0x00000008 + -200),
                    (undefined1 *)((long)register0x00000008 + -0xe0),0);
      plVar16 = (long *)((long)register0x00000008 + -200);
      FUN_10a557ab0(plVar16,unaff_x21);
      if ((undefined1 *)(param_1[0x17] - param_1[0x16] >> 1) <= (undefined1 *)((long)unaff_x22 + 1U)
         ) break;
      unaff_x21 = (undefined8 *)(ulong)*(ushort *)(param_1[0x16] + (long)unaff_x22 * 2 + 2);
      FUN_10ab4e710((undefined1 *)((long)register0x00000008 + -0xe0),
                    (undefined1 *)((long)register0x00000008 + -0xb0),unaff_x20);
      FUN_10ab4e794((undefined1 *)((long)register0x00000008 + -200),
                    (undefined1 *)((long)register0x00000008 + -0xe0),1);
      plVar16 = (long *)((long)register0x00000008 + -200);
      FUN_10a557ab0(plVar16,unaff_x21);
      if ((undefined1 *)(param_1[0x17] - param_1[0x16] >> 1) <= (undefined1 *)((long)unaff_x22 + 2U)
         ) break;
      unaff_x21 = (undefined8 *)(ulong)*(ushort *)(param_1[0x16] + (long)unaff_x22 * 2 + 4);
      FUN_10ab4e710((undefined1 *)((long)register0x00000008 + -0xe0),
                    (undefined1 *)((long)register0x00000008 + -0xb0),unaff_x20);
      FUN_10ab4e794((undefined1 *)((long)register0x00000008 + -200),
                    (undefined1 *)((long)register0x00000008 + -0xe0),2);
      plVar16 = (long *)((long)register0x00000008 + -200);
      FUN_10a557ab0(plVar16,unaff_x21);
      unaff_x20 = (ulong *)((long)unaff_x20 + 1);
      lVar7 = param_1[0x16];
      puVar8 = (uint *)(param_1[0x17] - lVar7 >> 1);
      unaff_x22 = (uint *)((long)unaff_x22 + 3);
      if ((ulong *)((ulong)puVar8 / 3) <= unaff_x20) goto LAB_10a7cdaa0;
    }
LAB_10a7cdb08:
    func_0x00010a7d2988();
LAB_10a7cdb0c:
    unaff_x30 = FUN_10a7cdb10;
    func_0x00010a7d2974();
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0xf0);
    param_1 = plVar16;
    unaff_x19 = plVar5;
  } while( true );
}



/* Entry: 10a7cdb18; end: 10a7cdb93;  */

void FUN_10a7cdb18(long *param_1,long *param_2)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  
  plVar5 = param_2;
  while( true ) {
    if (plVar5 == (long *)0x0) {
      lVar4 = param_2[0x23];
      lVar6 = param_2[0x22];
      param_1[1] = param_2[0x23];
      *param_1 = lVar6;
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
      return;
    }
    plVar3 = plVar5;
    (**(code **)(*plVar5 + 0x80))();
    if ((int)plVar3 != 2) break;
    plVar5 = (long *)plVar5[0x13];
  }
  *param_1 = 0;
  param_1[1] = 0;
  return;
}



/* Entry: 10a7cdb94; end: 10a7cdbb3;  */

undefined1  [16] FUN_10a7cdb94(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x24;
  auVar1._0_8_ = &UNK_10f66246a;
  return auVar1;
}



/* Entry: 10a7cdbb4; end: 10a7cdc1b;  */

bool FUN_10a7cdbb4(undefined8 param_1,long *param_2,long param_3)

{
  bool bVar1;
  int iVar2;
  
  if (param_3 == 0x24) {
    iVar2 = 0xf66246a;
    _memcmp(&UNK_10f66246a,param_2);
    if (iVar2 == 0) {
      return true;
    }
  }
  if ((param_3 == 9) && (*param_2 == 0x6e656e6f706d6f43 && (char)param_2[1] == 't')) {
    return true;
  }
  if (param_3 == 0xc) {
    bVar1 = false;
    if (*param_2 == 0x624f747069726353) {
      bVar1 = (int)param_2[1] == 0x7463656a;
    }
  }
  else {
    if (param_3 != 0x13) {
      return false;
    }
    bVar1 = (*param_2 == 0x7a696c6169726553 && param_2[1] == 0x68746957656c6261) &&
            *(long *)((long)param_2 + 0xb) == 0x4449556874695765;
  }
  return bVar1;
}



/* Entry: 10a7cdc1c; end: 10a7cdc6b;  */

bool FUN_10a7cdc1c(undefined8 param_1,long *param_2,long param_3)

{
  bool bVar1;
  int iVar2;
  
  if (param_3 == 0x24) {
    iVar2 = 0xf66246a;
    _memcmp(&UNK_10f66246a,param_2);
    if (iVar2 == 0) {
      return true;
    }
  }
  if ((param_3 == 9) && (*param_2 == 0x6e656e6f706d6f43 && (char)param_2[1] == 't')) {
    return true;
  }
  if (param_3 == 0xc) {
    bVar1 = false;
    if (*param_2 == 0x624f747069726353) {
      bVar1 = (int)param_2[1] == 0x7463656a;
    }
  }
  else {
    if (param_3 != 0x13) {
      return false;
    }
    bVar1 = (*param_2 == 0x7a696c6169726553 && param_2[1] == 0x68746957656c6261) &&
            *(long *)((long)param_2 + 0xb) == 0x4449556874695765;
  }
  return bVar1;
}



/* Entry: 10a7cdc6c; end: 10a7ce517;  */

void FUN_10a7cdc6c(ulong param_1)

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
  
  func_0x000109887da8(appuStack_c8,&UNK_10f66246a,0x24);
  pppuVar1 = (undefined8 ***)appuStack_c8[0];
  if (-1 < cStack_b1) {
    pppuVar1 = appuStack_c8;
  }
  *(undefined ***)(param_1 + 0x1b0) = &PTR_DAT_110c1b2b8;
  pppuVar2 = (undefined8 ***)&UNK_10f677c6d;
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
  uStack_58 = 0x94;
  uStack_50 = CONCAT44(uStack_50._4_4_,0xffffffff);
  uStack_48 = 0;
  uStack_40 = 0;
  ppuStack_a0 = pppuVar1;
  func_0x00010a052690(param_1 + 0x168,&ppuStack_a0);
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    ppuStack_b0 = &PTR_DAT_110c1b2b8;
    uStack_a8 = 0;
    ppuStack_a0 = (undefined8 **)&PTR_DAT_110bd31d8;
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
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a7ce4f8;
    FUN_10a054dac(param_1,&DAT_10f32deb9,FUN_10a7d46b0,2,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a7ce4f8;
    FUN_10a054dac(param_1,&UNK_10f677ceb,FUN_10a7d48b0,2,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,2,0x13c,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a7ce4f8;
    FUN_10a054dac(param_1,&UNK_10f677cf9,FUN_10a7d4968,1,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,2,0x13c,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a7ce4f8;
    FUN_10a054dac(param_1,&UNK_10f677d08,FUN_10a7d4a38,1,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a0605c4(param_1,&UNK_10f677d17,FUN_10a7d4af4,0);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a0605c4(param_1,&UNK_10f677d20,FUN_10a7d4c20,0);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a0605c4(param_1,&UNK_10f677d29,FUN_10a7d4ce0,0);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a0605c4(param_1,&UNK_10f677d34,FUN_10a7d4da0,0);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a0605c4(param_1,&UNK_10f64beb2,FUN_10a7d4e60,0);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,2,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a0605c4(param_1,&UNK_10f677d3e,FUN_10a7d4f18,0);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a0605c4(param_1,&UNK_10f677d50,FUN_10a7d4ff0,0);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,2,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&UNK_10f677d61,FUN_10a7d50c8,FUN_10a7d5184);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a05ef6c(param_1,&PTR_DAT_110b9a108,FUN_10a07c674);
    FUN_10a0605c4(param_1,&UNK_10f677d77,FUN_10a7d5290,0);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a05ef6c(param_1,&PTR_DAT_110b9a108,FUN_10a07c674);
    FUN_10a0605c4(param_1,&UNK_10f66f4f3,FUN_10a7d5424,0);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a05ef6c(param_1,&PTR_DAT_110b9a108,FUN_10a07c674);
    FUN_10a0605c4(param_1,&UNK_10f677d85,FUN_10a7d54fc,0);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a05ef6c(param_1,&PTR_DAT_110b9a108,FUN_10a07c674);
    FUN_10a0605c4(param_1,&UNK_10f66f4fb,FUN_10a7d55d4,0);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a05ef6c(param_1,&PTR_DAT_110b9a108,FUN_10a07c674);
    FUN_10a0605c4(param_1,&UNK_10f677d92,FUN_10a7d56ac,0);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,2,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a05ef6c(param_1,&PTR_DAT_110b9a108,FUN_10a07c674);
    FUN_10a0605c4(param_1,&UNK_10f677da6,FUN_10a7d5784,0);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,2,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a05ef6c(param_1,&PTR_DAT_110b9a108,FUN_10a07c674);
    FUN_10a0605c4(param_1,&UNK_10f677dba,FUN_10a7d585c,0);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,2,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a05ef6c(param_1,&PTR_DAT_110b9a108,FUN_10a07c674);
    FUN_10a0605c4(param_1,&UNK_10f677dca,FUN_10a7d5934,0);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,2,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&DAT_10f2e5c64,FUN_10a7d59e4,FUN_10a7d5ae8);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,2,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&UNK_10f677ddb,FUN_10a7d5c04,FUN_10a7d5cc0);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,2,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&UNK_10f677de7,FUN_10a7d5da8,FUN_10a7d5e64);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,2,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a0605c4(param_1,&UNK_10f677df3,FUN_10a7d5f4c,0);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,2,0x13c,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a0605c4(param_1,&DAT_10f2e8c0b,FUN_10a7d6004,0);
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
      FUN_10a054234(param_1,&ppuStack_a0,param_1 + 0x1b8,&UNK_10f66246a,0x24);
      FUN_10a05431c(param_1);
    }
    return;
  }
LAB_10a7ce4f8:
                    /* WARNING: Does not return */
  pcVar6 = (code *)SoftwareBreakpoint(1,0x10a7ce4fc);
  (*pcVar6)();
}



/* Entry: 10a7ce518; end: 10a7ce64f;  */

void FUN_10a7ce518(undefined8 *param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  undefined8 *puStack_28;
  
  *param_1 = &PTR_FUN_110c19ba0;
  param_1[2] = &PTR_DAT_110c19cc0;
  param_1[7] = &PTR_DAT_110c19d18;
  param_1[0xd] = &PTR_DAT_110c19d38;
  param_1[0x8a] = &PTR_DAT_110c19e88;
  param_1[0x16] = &PTR_DAT_110c19da8;
  param_1[0x17] = &PTR_DAT_110c19dd8;
  param_1[0x3e] = &PTR_DAT_110c19e10;
  FUN_10a004cfc(param_1 + 0x7e);
  FUN_10a5ca2e0(param_1 + 0x7c);
  if ((*(char *)(param_1 + 0x7a) == '\x01') &&
     (plVar4 = (long *)param_1[0x79], plVar4 != (long *)0x0)) {
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
  FUN_10a22ffb4(param_1 + 0x5e);
  FUN_10a004cfc(param_1 + 0x51);
  FUN_10a004cfc(param_1 + 0x4f);
  FUN_10a004cfc(param_1 + 0x4d);
  FUN_10a004cfc(param_1 + 0x4b);
  FUN_10a004cfc(param_1 + 0x49);
  FUN_10a004cfc(param_1 + 0x47);
  FUN_10a004cfc(param_1 + 0x45);
  FUN_10a004cfc(param_1 + 0x43);
  param_1[0x3e] = &PTR_DAT_110c1b208;
  param_1[0x8a] = &PTR_FUN_110c1b280;
  func_0x00010a004e5c(param_1 + 0x41);
  func_0x00010a004e04(param_1 + 0x3f);
  *param_1 = &PTR_FUN_110c1b088;
  param_1[2] = &PTR_DAT_110bcfec8;
  param_1[7] = &PTR_DAT_110bcff20;
  param_1[0xd] = &PTR_DAT_110bcff40;
  param_1[0x16] = &PTR_DAT_110bcffb0;
  param_1[0x8a] = &PTR_DAT_110c1b1b8;
  param_1[0x17] = &PTR_DAT_110bcffe0;
  FUN_10a044790(param_1 + 0x35);
  (**(code **)param_1[0x36])(param_1 + 0x36);
  func_0x00010a004e5c(param_1 + 0x33);
  if (*(char *)((long)param_1 + 0x167) < '\0') {
    __ZdlPv(param_1[0x2a]);
  }
  param_1[0x17] = &PTR_DAT_110bd14c8;
  FUN_10a1c0934(param_1 + 0x17);
  lVar5 = param_1[0x14];
  if (lVar5 != 0) {
    plVar4 = (long *)param_1[0x15];
    *plVar4 = lVar5;
    *(long **)(lVar5 + 8) = plVar4;
    param_1[0x14] = 0;
    param_1[0x15] = 0;
  }
  lVar5 = param_1[0x12];
  if (lVar5 != 0) {
    plVar4 = (long *)param_1[0x13];
    *plVar4 = lVar5;
    *(long **)(lVar5 + 8) = plVar4;
    param_1[0x12] = 0;
    param_1[0x13] = 0;
  }
  lVar5 = param_1[0x10];
  if (lVar5 != 0) {
    plVar4 = (long *)param_1[0x11];
    *plVar4 = lVar5;
    *(long **)(lVar5 + 8) = plVar4;
    param_1[0x10] = 0;
    param_1[0x11] = 0;
  }
  lVar5 = param_1[0xe];
  if (lVar5 != 0) {
    plVar4 = (long *)param_1[0xf];
    *plVar4 = lVar5;
    *(long **)(lVar5 + 8) = plVar4;
    param_1[0xe] = 0;
    param_1[0xf] = 0;
  }
  puStack_28 = param_1 + 10;
  FUN_10a3ebf4c(&puStack_28);
  FUN_10a572f54(param_1);
  return;
}



/* Entry: 10a7ce650; end: 10a7ce693;  */

void FUN_10a7ce650(undefined8 *param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  undefined8 *puStack_28;
  
  *param_1 = &PTR_FUN_110c19ba0;
  param_1[2] = &PTR_DAT_110c19cc0;
  param_1[7] = &PTR_DAT_110c19d18;
  param_1[0xd] = &PTR_DAT_110c19d38;
  param_1[0x8a] = &PTR_DAT_110c19e88;
  param_1[0x16] = &PTR_DAT_110c19da8;
  param_1[0x17] = &PTR_DAT_110c19dd8;
  param_1[0x3e] = &PTR_DAT_110c19e10;
  FUN_10a004cfc(param_1 + 0x7e);
  FUN_10a5ca2e0(param_1 + 0x7c);
  if ((*(char *)(param_1 + 0x7a) == '\x01') &&
     (plVar4 = (long *)param_1[0x79], plVar4 != (long *)0x0)) {
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
  FUN_10a22ffb4(param_1 + 0x5e);
  FUN_10a004cfc(param_1 + 0x51);
  FUN_10a004cfc(param_1 + 0x4f);
  FUN_10a004cfc(param_1 + 0x4d);
  FUN_10a004cfc(param_1 + 0x4b);
  FUN_10a004cfc(param_1 + 0x49);
  FUN_10a004cfc(param_1 + 0x47);
  FUN_10a004cfc(param_1 + 0x45);
  FUN_10a004cfc(param_1 + 0x43);
  param_1[0x3e] = &PTR_DAT_110c1b208;
  param_1[0x8a] = &PTR_FUN_110c1b280;
  func_0x00010a004e5c(param_1 + 0x41);
  func_0x00010a004e04(param_1 + 0x3f);
  *param_1 = &PTR_FUN_110c1b088;
  param_1[2] = &PTR_DAT_110bcfec8;
  param_1[7] = &PTR_DAT_110bcff20;
  param_1[0xd] = &PTR_DAT_110bcff40;
  param_1[0x16] = &PTR_DAT_110bcffb0;
  param_1[0x8a] = &PTR_DAT_110c1b1b8;
  param_1[0x17] = &PTR_DAT_110bcffe0;
  FUN_10a044790(param_1 + 0x35);
  (**(code **)param_1[0x36])(param_1 + 0x36);
  func_0x00010a004e5c(param_1 + 0x33);
  if (*(char *)((long)param_1 + 0x167) < '\0') {
    __ZdlPv(param_1[0x2a]);
  }
  param_1[0x17] = &PTR_DAT_110bd14c8;
  FUN_10a1c0934(param_1 + 0x17);
  lVar5 = param_1[0x14];
  if (lVar5 != 0) {
    plVar4 = (long *)param_1[0x15];
    *plVar4 = lVar5;
    *(long **)(lVar5 + 8) = plVar4;
    param_1[0x14] = 0;
    param_1[0x15] = 0;
  }
  lVar5 = param_1[0x12];
  if (lVar5 != 0) {
    plVar4 = (long *)param_1[0x13];
    *plVar4 = lVar5;
    *(long **)(lVar5 + 8) = plVar4;
    param_1[0x12] = 0;
    param_1[0x13] = 0;
  }
  lVar5 = param_1[0x10];
  if (lVar5 != 0) {
    plVar4 = (long *)param_1[0x11];
    *plVar4 = lVar5;
    *(long **)(lVar5 + 8) = plVar4;
    param_1[0x10] = 0;
    param_1[0x11] = 0;
  }
  lVar5 = param_1[0xe];
  if (lVar5 != 0) {
    plVar4 = (long *)param_1[0xf];
    *plVar4 = lVar5;
    *(long **)(lVar5 + 8) = plVar4;
    param_1[0xe] = 0;
    param_1[0xf] = 0;
  }
  puStack_28 = param_1 + 10;
  FUN_10a3ebf4c(&puStack_28);
  FUN_10a572f54(param_1);
  return;
}



/* Entry: 10a7ce694; end: 10a7ce737;  */

void FUN_10a7ce694(void)

{
  FUN_10a7ce518();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a7ce738; end: 10a7ce767;  */

void FUN_10a7ce738(long *param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(*param_1 + -0x18);
  FUN_10a7ce518((long)param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)((long)param_1 + lVar1);
  return;
}



/* Entry: 10a7ce768; end: 10a7cec1b;  */

undefined8 * FUN_10a7ce768(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  
  param_1[0x8a] = &PTR_FUN_110c383b8;
  *(undefined2 *)(param_1 + 0x8d) = 0x100;
  param_1[0x8c] = 0;
  param_1[0x8b] = 0;
  puVar1 = param_1;
  FUN_10a3c575c(param_1,&PTR_PTR_110c19ec8,param_2,param_3);
  FUN_10a0040d0(puVar1 + 0x3e,&PTR_PTR_110c19ed8);
  *param_1 = &PTR_FUN_110c19ba0;
  param_1[2] = &PTR_DAT_110c19cc0;
  param_1[7] = &PTR_DAT_110c19d18;
  param_1[0xd] = &PTR_DAT_110c19d38;
  param_1[0x8a] = &PTR_DAT_110c19e88;
  param_1[0x16] = &PTR_DAT_110c19da8;
  param_1[0x17] = &PTR_DAT_110c19dd8;
  param_1[0x3e] = &PTR_DAT_110c19e10;
  puVar1 = (undefined8 *)0x98;
  __Znwm();
  puVar1[1] = 0;
  puVar1[2] = 0;
  *puVar1 = &PTR_FUN_110b9a070;
  puVar1[0xd] = 0;
  puVar1[0xc] = 0;
  puVar1[0xf] = 0;
  puVar1[0xe] = 0;
  puVar1[0x11] = 0;
  puVar1[0x10] = 0;
  puVar1[0x12] = 0;
  puVar1[3] = &PTR_FUN_110b9a0c0;
  puVar1[9] = 0;
  puVar1[8] = 0;
  puVar1[0xb] = 0;
  puVar1[10] = 0;
  puVar1[5] = 0;
  puVar1[4] = 0;
  puVar1[7] = 0;
  puVar1[6] = 0;
  *(undefined4 *)(puVar1 + 10) = 0x3f800000;
  puVar1[0xb] = FUN_10a004c4c;
  puVar1[0xc] = &PTR_DAT_110ae9180;
  param_1[0x43] = puVar1 + 3;
  param_1[0x44] = puVar1;
  puVar1 = (undefined8 *)0x98;
  __Znwm();
  puVar1[1] = 0;
  puVar1[2] = 0;
  *puVar1 = &PTR_FUN_110b9a070;
  puVar1[0xd] = 0;
  puVar1[0xc] = 0;
  puVar1[0xf] = 0;
  puVar1[0xe] = 0;
  puVar1[0x11] = 0;
  puVar1[0x10] = 0;
  puVar1[0x12] = 0;
  puVar1[3] = &PTR_FUN_110b9a0c0;
  puVar1[9] = 0;
  puVar1[8] = 0;
  puVar1[0xb] = 0;
  puVar1[10] = 0;
  puVar1[5] = 0;
  puVar1[4] = 0;
  puVar1[7] = 0;
  puVar1[6] = 0;
  *(undefined4 *)(puVar1 + 10) = 0x3f800000;
  puVar1[0xb] = FUN_10a004c4c;
  puVar1[0xc] = &PTR_DAT_110ae9180;
  param_1[0x45] = puVar1 + 3;
  param_1[0x46] = puVar1;
  puVar1 = (undefined8 *)0x98;
  __Znwm();
  puVar1[1] = 0;
  puVar1[2] = 0;
  *puVar1 = &PTR_FUN_110b9a070;
  puVar1[0xd] = 0;
  puVar1[0xc] = 0;
  puVar1[0xf] = 0;
  puVar1[0xe] = 0;
  puVar1[0x11] = 0;
  puVar1[0x10] = 0;
  puVar1[0x12] = 0;
  puVar1[3] = &PTR_FUN_110b9a0c0;
  puVar1[9] = 0;
  puVar1[8] = 0;
  puVar1[0xb] = 0;
  puVar1[10] = 0;
  puVar1[5] = 0;
  puVar1[4] = 0;
  puVar1[7] = 0;
  puVar1[6] = 0;
  *(undefined4 *)(puVar1 + 10) = 0x3f800000;
  puVar1[0xb] = FUN_10a004c4c;
  puVar1[0xc] = &PTR_DAT_110ae9180;
  param_1[0x47] = puVar1 + 3;
  param_1[0x48] = puVar1;
  puVar1 = (undefined8 *)0x98;
  __Znwm();
  puVar1[1] = 0;
  puVar1[2] = 0;
  *puVar1 = &PTR_FUN_110b9a070;
  puVar1[0xd] = 0;
  puVar1[0xc] = 0;
  puVar1[0xf] = 0;
  puVar1[0xe] = 0;
  puVar1[0x11] = 0;
  puVar1[0x10] = 0;
  puVar1[0x12] = 0;
  puVar1[3] = &PTR_FUN_110b9a0c0;
  puVar1[9] = 0;
  puVar1[8] = 0;
  puVar1[0xb] = 0;
  puVar1[10] = 0;
  puVar1[5] = 0;
  puVar1[4] = 0;
  puVar1[7] = 0;
  puVar1[6] = 0;
  *(undefined4 *)(puVar1 + 10) = 0x3f800000;
  puVar1[0xb] = FUN_10a004c4c;
  puVar1[0xc] = &PTR_DAT_110ae9180;
  param_1[0x49] = puVar1 + 3;
  param_1[0x4a] = puVar1;
  puVar1 = (undefined8 *)0x98;
  __Znwm();
  puVar1[1] = 0;
  puVar1[2] = 0;
  *puVar1 = &PTR_FUN_110b9a070;
  puVar1[0xd] = 0;
  puVar1[0xc] = 0;
  puVar1[0xf] = 0;
  puVar1[0xe] = 0;
  puVar1[0x11] = 0;
  puVar1[0x10] = 0;
  puVar1[0x12] = 0;
  puVar1[3] = &PTR_FUN_110b9a0c0;
  puVar1[9] = 0;
  puVar1[8] = 0;
  puVar1[0xb] = 0;
  puVar1[10] = 0;
  puVar1[5] = 0;
  puVar1[4] = 0;
  puVar1[7] = 0;
  puVar1[6] = 0;
  *(undefined4 *)(puVar1 + 10) = 0x3f800000;
  puVar1[0xb] = FUN_10a004c4c;
  puVar1[0xc] = &PTR_DAT_110ae9180;
  param_1[0x4b] = puVar1 + 3;
  param_1[0x4c] = puVar1;
  puVar1 = (undefined8 *)0x98;
  __Znwm();
  puVar1[1] = 0;
  puVar1[2] = 0;
  *puVar1 = &PTR_FUN_110b9a070;
  puVar1[0xd] = 0;
  puVar1[0xc] = 0;
  puVar1[0xf] = 0;
  puVar1[0xe] = 0;
  puVar1[0x11] = 0;
  puVar1[0x10] = 0;
  puVar1[0x12] = 0;
  puVar1[3] = &PTR_FUN_110b9a0c0;
  puVar1[9] = 0;
  puVar1[8] = 0;
  puVar1[0xb] = 0;
  puVar1[10] = 0;
  puVar1[5] = 0;
  puVar1[4] = 0;
  puVar1[7] = 0;
  puVar1[6] = 0;
  *(undefined4 *)(puVar1 + 10) = 0x3f800000;
  puVar1[0xb] = FUN_10a004c4c;
  puVar1[0xc] = &PTR_DAT_110ae9180;
  param_1[0x4d] = puVar1 + 3;
  param_1[0x4e] = puVar1;
  puVar1 = (undefined8 *)0x98;
  __Znwm();
  puVar1[1] = 0;
  puVar1[2] = 0;
  *puVar1 = &PTR_FUN_110b9a070;
  puVar1[0xd] = 0;
  puVar1[0xc] = 0;
  puVar1[0xf] = 0;
  puVar1[0xe] = 0;
  puVar1[0x11] = 0;
  puVar1[0x10] = 0;
  puVar1[0x12] = 0;
  puVar1[3] = &PTR_FUN_110b9a0c0;
  puVar1[9] = 0;
  puVar1[8] = 0;
  puVar1[0xb] = 0;
  puVar1[10] = 0;
  puVar1[5] = 0;
  puVar1[4] = 0;
  puVar1[7] = 0;
  puVar1[6] = 0;
  *(undefined4 *)(puVar1 + 10) = 0x3f800000;
  puVar1[0xb] = FUN_10a004c4c;
  puVar1[0xc] = &PTR_DAT_110ae9180;
  param_1[0x4f] = puVar1 + 3;
  param_1[0x50] = puVar1;
  puVar1 = (undefined8 *)0x98;
  __Znwm();
  puVar1[2] = 0;
  puVar1[1] = 0;
  *puVar1 = &PTR_FUN_110b9a070;
  puVar1[0xd] = 0;
  puVar1[0xc] = 0;
  puVar1[0xf] = 0;
  puVar1[0xe] = 0;
  puVar1[0x11] = 0;
  puVar1[0x10] = 0;
  puVar1[0x12] = 0;
  puVar1[3] = &PTR_FUN_110b9a0c0;
  puVar1[9] = 0;
  puVar1[8] = 0;
  puVar1[0xb] = 0;
  puVar1[10] = 0;
  puVar1[5] = 0;
  puVar1[4] = 0;
  puVar1[7] = 0;
  puVar1[6] = 0;
  *(undefined4 *)(puVar1 + 10) = 0x3f800000;
  puVar1[0xb] = FUN_10a004c4c;
  puVar1[0xc] = &PTR_DAT_110ae9180;
  param_1[0x51] = puVar1 + 3;
  param_1[0x52] = puVar1;
  param_1[0x53] = 0;
  *(undefined4 *)(param_1 + 0x54) = 0;
  *(undefined1 *)((long)param_1 + 0x2a4) = 0;
  *(undefined4 *)(param_1 + 0x55) = 0;
  *(undefined1 *)((long)param_1 + 0x2ac) = 0;
  *(undefined1 *)((long)param_1 + 0x2ec) = 0;
  *(undefined1 *)(param_1 + 0x62) = 0;
  *(undefined1 *)(param_1 + 0x74) = 0;
  *(undefined1 *)(param_1 + 0x60) = 0;
  param_1[0x5f] = 0;
  param_1[0x5e] = 0;
  param_1[0x77] = 0x32;
  param_1[0x76] = 0x32;
  *(undefined4 *)(param_1 + 0x78) = 0;
  *(undefined1 *)((long)param_1 + 0x3c4) = 0;
  *(undefined1 *)(param_1 + 0x79) = 0;
  *(undefined1 *)(param_1 + 0x7a) = 0;
  param_1[0x7d] = 0;
  param_1[0x7c] = 0;
  param_1[0x7b] = 0;
  puVar1 = (undefined8 *)0x98;
  __Znwm();
  puVar1[2] = 0;
  puVar1[1] = 0;
  *puVar1 = &PTR_FUN_110b9a070;
  puVar1[0xd] = 0;
  puVar1[0xc] = 0;
  puVar1[0xf] = 0;
  puVar1[0xe] = 0;
  puVar1[0x11] = 0;
  puVar1[0x10] = 0;
  puVar1[0x12] = 0;
  puVar1[3] = &PTR_FUN_110b9a0c0;
  puVar1[9] = 0;
  puVar1[8] = 0;
  puVar1[0xb] = 0;
  puVar1[10] = 0;
  puVar1[5] = 0;
  puVar1[4] = 0;
  puVar1[7] = 0;
  puVar1[6] = 0;
  *(undefined4 *)(puVar1 + 10) = 0x3f800000;
  puVar1[0xb] = FUN_10a004c4c;
  puVar1[0xc] = &PTR_DAT_110ae9180;
  param_1[0x7e] = puVar1 + 3;
  param_1[0x7f] = puVar1;
  *(undefined4 *)((long)param_1 + 0x424) = 0;
  *(undefined1 *)(param_1 + 0x85) = 0;
  *(undefined1 *)(param_1 + 0x84) = 0;
  param_1[0x83] = 0;
  param_1[0x82] = 0;
  param_1[0x81] = 0;
  param_1[0x80] = 0;
  *(undefined8 *)((long)param_1 + 0x445) = 0;
  param_1[0x88] = 0;
  param_1[0x87] = 0;
  param_1[0x86] = 0;
  param_1[0x77] = 0x32;
  param_1[0x76] = 0x32;
  return param_1;
}



/* Entry: 10a7cec1c; end: 10a7ced5f;  */

void FUN_10a7cec1c(long param_1)

{
  ulong *puVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  long *plVar5;
  ulong uVar6;
  long lVar7;
  long lStack_38;
  long lStack_30;
  
  if (*(undefined8 **)(param_1 + 0x2f0) == (undefined8 *)0x0) {
    *(undefined8 *)(param_1 + 0x298) = 0;
  }
  else {
    (**(code **)**(undefined8 **)(param_1 + 0x2f0))(&lStack_38);
    *(long *)(param_1 + 0x298) = lStack_30 - lStack_38 >> 3;
    if (lStack_38 != 0) {
      lStack_30 = lStack_38;
      __ZdlPv();
    }
  }
  *(undefined4 *)(param_1 + 0x2a0) = 0;
  *(undefined4 *)(param_1 + 0x2a8) = 0;
  *(undefined1 *)(param_1 + 0x3c4) = 0;
  *(undefined1 *)(param_1 + 0x2a4) = 0;
  if (*(char *)(param_1 + 0x3d0) == '\x01') {
    plVar5 = *(long **)(param_1 + 0x3c8);
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
    *(undefined1 *)(param_1 + 0x3d0) = 0;
  }
  func_0x00010a59e1e4(param_1 + 0x3e0);
  plVar5 = *(long **)(param_1 + 0x3f8);
  *(undefined8 *)(param_1 + 0x3f8) = 0;
  *(undefined8 *)(param_1 + 0x3f0) = 0;
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
  *(undefined1 *)(param_1 + 0x44c) = 0;
  *(undefined8 *)(param_1 + 0x440) = 0;
  *(undefined4 *)(param_1 + 0x448) = 0;
  if (*(char *)(param_1 + 0x2ec) == '\x01') {
    *(undefined1 *)(param_1 + 0x2ec) = 0;
  }
  *(undefined1 *)(param_1 + 0x300) = 0;
  *(undefined4 *)(param_1 + 0x424) = 0;
  *(undefined1 *)(param_1 + 0x428) = 0;
  *(undefined8 *)(param_1 + 0x418) = 0;
  *(undefined8 *)(param_1 + 0x410) = 0;
  *(undefined1 *)(param_1 + 0x420) = 0;
  return;
}



/* Entry: 10a7ced60; end: 10a7ceecb;  */

/* WARNING: Removing unreachable block (ram,0x00010a7cf36c) */

void FUN_10a7ced60(long param_1,long *param_2,undefined8 *param_3,undefined8 *param_4)

{
  ulong *puVar1;
  long *plVar2;
  long *plVar3;
  char cVar4;
  bool bVar5;
  code *pcVar6;
  undefined8 *puVar7;
  long *plVar8;
  long **pplVar9;
  long *plVar10;
  long *plVar11;
  undefined8 *puVar12;
  long *extraout_x8;
  ulong uVar13;
  long lVar14;
  undefined8 uVar15;
  long lVar16;
  undefined8 uStack_180;
  undefined8 uStack_178;
  long lStack_170;
  undefined8 uStack_160;
  undefined8 uStack_158;
  long lStack_150;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 auStack_128 [2];
  char cStack_111;
  long *plStack_110;
  long *plStack_108;
  long lStack_100;
  long *plStack_f8;
  long *plStack_f0;
  long **pplStack_e8;
  long *plStack_e0;
  long *plStack_d8;
  long *plStack_d0;
  long lStack_c8;
  undefined4 auStack_68 [5];
  undefined1 uStack_51;
  undefined8 *puStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  if (*param_2 != 0) {
    uVar15 = *(undefined8 *)(param_1 + 0x170);
    puVar7 = (undefined8 *)0x38;
    __Znwm();
    uStack_40 = 0x8000000000000038;
    uStack_48 = 0x35;
    puVar7[1] = 0x43342d353133312d;
    *puVar7 = 0x3739393144333532;
    puVar7[3] = 0x4133363939334330;
    puVar7[2] = 0x2d364439392d4539;
    puVar7[5] = 0x6c2d64657461636f;
    puVar7[4] = 0x6c6f633a44323638;
    *(undefined8 *)((long)puVar7 + 0x2d) = 0x7365736e656c2d64;
    *(undefined1 *)((long)puVar7 + 0x35) = 0;
    uStack_51 = 3;
    auStack_68[0] = 0x70616d;
    puStack_50 = puVar7;
    FUN_10a7ceecc(&uStack_38,param_2,uVar15,&puStack_50,auStack_68);
    if ((*(char *)(param_1 + 0x3d0) == '\x01') &&
       (plVar8 = *(long **)(param_1 + 0x3c8), plVar8 != (long *)0x0)) {
      puVar1 = (ulong *)(plVar8 + 1);
      do {
        uVar13 = *puVar1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar5) {
          *puVar1 = uVar13 - 4;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if ((uVar13 & 0x1fffffffc) == 4) {
        do {
          uVar13 = *puVar1;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar5) {
            *puVar1 = uVar13 - 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (uVar13 - 1 == 0) {
          (**(code **)(*plVar8 + 8))();
        }
      }
    }
    *(undefined8 *)(param_1 + 0x3c8) = uStack_38;
    *(undefined1 *)(param_1 + 0x3d0) = 1;
    __ZdlPv();
    __ZNSt3__16chrono12steady_clock3nowEv();
    *(undefined8 **)(param_1 + 0x3d8) = puVar7 + 7500000000;
    FUN_10a7cf70c(param_1 + 0x3f0,*(undefined8 *)(param_1 + 0x238),*(undefined8 *)(param_1 + 0x240))
    ;
    *(undefined4 *)(param_1 + 0x2a0) = 2;
    *(undefined4 *)(param_1 + 0x2a8) = 2;
    *(undefined1 *)(param_1 + 0x420) = 0;
    return;
  }
  puVar7 = (undefined8 *)&UNK_10f677e00;
  FUN_10a00946c();
  __ZdlPv();
  __Unwind_Resume();
  plVar8 = (long *)puVar7[1];
  uStack_138 = puVar7[1];
  uStack_140 = *puVar7;
  if (plVar8 != (long *)0x0) {
    plVar2 = plVar8 + 1;
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar5) {
        *plVar2 = *plVar2 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  if (*(char *)((long)param_3 + 0x17) < '\0') {
    func_0x000107c3192c(&uStack_160,*param_3,param_3[1]);
  }
  else {
    uStack_158 = param_3[1];
    uStack_160 = *param_3;
    lStack_150 = param_3[2];
  }
  if (*(char *)((long)param_4 + 0x17) < '\0') {
    func_0x000107c3192c(&uStack_180,*param_4,param_4[1]);
  }
  else {
    uStack_178 = param_4[1];
    uStack_180 = *param_4;
    lStack_170 = param_4[2];
  }
  pplVar9 = &plStack_d0;
  FUN_10a7d22ac();
  __ZNSt3__16chrono12steady_clock3nowEv();
  FUN_10a725afc(&lStack_100,param_2 + 3);
  plVar2 = plStack_f8;
  lVar16 = lStack_100;
  if (plStack_f8 != (long *)0x0) {
    plVar10 = plStack_f8 + 2;
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar5) {
        *plVar10 = *plVar10 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    plVar10 = plStack_f8 + 1;
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
      (**(code **)(*plStack_f8 + 0x10))(plStack_f8);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_f8);
    }
  }
  lStack_100 = lStack_c8;
  if (lStack_c8 != 0) {
    plVar10 = (long *)(lStack_c8 + 8);
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar5) {
        *plVar10 = *plVar10 + 0x200000000;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  plStack_f8 = (long *)lVar16;
  plStack_f0 = plVar2;
  if (plVar2 != (long *)0x0) {
    plVar10 = plVar2 + 2;
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar5) {
        *plVar10 = *plVar10 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  plVar10 = (long *)0x60;
  pplStack_e8 = pplVar9;
  __Znwm();
  plVar10[1] = 0;
  plVar10[2] = 0;
  *plVar10 = (long)&PTR_DAT_110c170c8;
  plStack_e0 = plVar10 + 3;
  *plStack_e0 = (long)FUN_10a7d6aa8;
  plVar10[4] = (long)&PTR_FUN_110c1b4b8;
  plVar10[5] = lStack_100;
  plVar10[6] = lVar16;
  plVar10[7] = (long)plVar2;
  plVar10[8] = (long)pplVar9;
  *(undefined1 *)(plVar10 + 0xb) = 1;
  lStack_100 = lStack_c8;
  if (lStack_c8 != 0) {
    plVar11 = (long *)(lStack_c8 + 8);
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar11,0x10);
      if (bVar5) {
        *plVar11 = *plVar11 + 0x200000000;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  plStack_f8 = (long *)lVar16;
  plStack_f0 = plVar2;
  if (plVar2 != (long *)0x0) {
    plVar11 = plVar2 + 2;
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar11,0x10);
      if (bVar5) {
        *plVar11 = *plVar11 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  plVar11 = (long *)0x60;
  plStack_d8 = plVar10;
  __Znwm();
  plVar11[1] = 0;
  plVar11[2] = 0;
  plStack_110 = plVar11 + 3;
  *plStack_110 = (long)FUN_10a7d6e74;
  *plVar11 = (long)&PTR_FUN_110c14d30;
  plVar11[4] = (long)&PTR_FUN_110c1b4d8;
  plVar11[5] = lStack_100;
  plVar11[6] = lVar16;
  plVar11[7] = (long)plVar2;
  *(undefined1 *)(plVar11 + 0xb) = 1;
  plStack_108 = plVar11;
  func_0x000107c2b054(auStack_128,&UNK_10f677f68);
  lVar16 = param_2[0x11b];
  func_0x000107c2b054(&lStack_100,&DAT_10f2f03d9);
  FUN_10a76bdb0(lVar16,auStack_128,&lStack_100);
  if ((long)plStack_f0 < 0) {
    __ZdlPv(lStack_100);
  }
  if (cStack_111 < '\0') {
    __ZdlPv(auStack_128[0]);
  }
  FUN_10a8705b0(uStack_140,&uStack_160,&uStack_180,2,&plStack_e0,&plStack_110);
  plVar11 = plStack_d0;
  plVar10 = plStack_108;
  if (plStack_d0 != (long *)0x0) {
    plVar3 = plStack_d0 + 1;
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar3,0x10);
      if (bVar5) {
        *plVar3 = *plVar3 + 4;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  if (plStack_108 != (long *)0x0) {
    plVar3 = plStack_108 + 1;
    do {
      lVar16 = *plVar3;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar3,0x10);
      if (bVar5) {
        *plVar3 = lVar16 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar16 == 0) {
      (**(code **)(*plStack_108 + 0x10))(plStack_108);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar10);
    }
  }
  plVar10 = plStack_d8;
  if (plStack_d8 != (long *)0x0) {
    plVar3 = plStack_d8 + 1;
    do {
      lVar16 = *plVar3;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar3,0x10);
      if (bVar5) {
        *plVar3 = lVar16 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar16 == 0) {
      (**(code **)(*plStack_d8 + 0x10))(plStack_d8);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar10);
    }
  }
  if (plVar2 != (long *)0x0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv(plVar2);
  }
  if (lStack_c8 != 0) {
    func_0x0001092b4274(&lStack_c8);
  }
  if (plStack_d0 != (long *)0x0) {
    puVar1 = (ulong *)(plStack_d0 + 1);
    do {
      uVar13 = *puVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar5) {
        *puVar1 = uVar13 - 4;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if ((uVar13 & 0x1fffffffc) == 4) {
      do {
        uVar13 = *puVar1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar5) {
          *puVar1 = uVar13 - 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (uVar13 - 1 == 0) {
        (**(code **)(*plStack_d0 + 8))();
      }
    }
  }
  if (lStack_170 < 0) {
    __ZdlPv(uStack_180);
  }
  if (lStack_150 < 0) {
    __ZdlPv(uStack_160);
  }
  if (plVar8 != (long *)0x0) {
    plVar2 = plVar8 + 1;
    do {
      lVar16 = *plVar2;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar5) {
        *plVar2 = lVar16 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar16 == 0) {
      (**(code **)(*plVar8 + 0x10))(plVar8);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar8);
    }
  }
  uVar15 = *(undefined8 *)(param_2[300] + 0x3a8);
  puVar7 = (undefined8 *)0x70;
  __Znwm();
  *puVar7 = FUN_10a7d7ba4;
  puVar7[1] = FUN_10a7d7e90;
  FUN_10a7d320c(puVar7 + 2);
  lVar16 = puVar7[7];
  if (lVar16 != 0) {
    plVar8 = (long *)(lVar16 + 8);
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar5) {
        *plVar8 = *plVar8 + 4;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  *extraout_x8 = lVar16;
  puVar7[0xb] = plVar11;
  puVar7[9] = uVar15;
  *(undefined1 *)(puVar7 + 10) = 0;
  *(undefined1 *)(puVar7 + 0xd) = 0;
  puVar12 = puVar7 + 9;
  FUN_10a7d2d14(puVar12,puVar7);
  if (((ulong)puVar12 & 1) == 0) {
    FUN_10a7d2e70(puVar7 + 0xc,puVar7 + 0xb);
    puVar7[9] = puVar7[0xc];
    plVar8 = (long *)(puVar7[0xc] + 8);
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar5) {
        *plVar8 = *plVar8 + 4;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (((uint)*(undefined8 *)(puVar7[9] + 0x10) >> 1 & 1) == 0) {
      *(undefined1 *)(puVar7 + 0xd) = 1;
      lVar16 = puVar7[9];
      plVar8 = (long *)(lVar16 + 0x10);
      uVar15 = puVar7[3];
      do {
        lVar14 = *plVar8;
        if (lVar14 == 0) {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar8,0x10);
          if (bVar5) {
            *plVar8 = 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
          if (cVar4 == '\0') {
            lStack_100 = 0;
            plStack_f8 = puVar7;
            plStack_f0 = (long *)uVar15;
            func_0x000109d1b588(lVar16 + 0x18,&lStack_100);
            *(undefined8 *)(lVar16 + 0x10) = 0;
            return;
          }
        }
        else {
          ClearExclusiveLocal();
        }
      } while (((uint)lVar14 >> 1 & 1) == 0);
    }
    lVar16 = puVar7[9];
    if (((uint)*(undefined8 *)(puVar7[9] + 0x10) >> 5 & 1) == 0) {
      if ((*(byte *)(lVar16 + 0xa8) & 1) != 0) {
        FUN_10a7d2db0(puVar7 + 2,lVar16 + 0x98);
        plVar8 = (long *)puVar7[9];
        if (plVar8 != (long *)0x0) {
          puVar1 = (ulong *)(plVar8 + 1);
          do {
            uVar13 = *puVar1;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
            if (bVar5) {
              *puVar1 = uVar13 - 4;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if ((uVar13 & 0x1fffffffc) == 4) {
            do {
              uVar13 = *puVar1;
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
              if (bVar5) {
                *puVar1 = uVar13 - 1;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
            if (uVar13 - 1 == 0) {
              (**(code **)(*plVar8 + 8))();
            }
          }
        }
        plVar8 = (long *)puVar7[0xc];
        if (plVar8 != (long *)0x0) {
          puVar1 = (ulong *)(plVar8 + 1);
          do {
            uVar13 = *puVar1;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
            if (bVar5) {
              *puVar1 = uVar13 - 4;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if ((uVar13 & 0x1fffffffc) == 4) {
            do {
              uVar13 = *puVar1;
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
              if (bVar5) {
                *puVar1 = uVar13 - 1;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
            if (uVar13 - 1 == 0) {
              (**(code **)(*plVar8 + 8))();
            }
          }
        }
        plVar8 = (long *)puVar7[0xb];
        if (plVar8 != (long *)0x0) {
          puVar1 = (ulong *)(plVar8 + 1);
          do {
            uVar13 = *puVar1;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
            if (bVar5) {
              *puVar1 = uVar13 - 4;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if ((uVar13 & 0x1fffffffc) == 4) {
            do {
              uVar13 = *puVar1;
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
              if (bVar5) {
                *puVar1 = uVar13 - 1;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
            if (uVar13 - 1 == 0) {
              (**(code **)(*plVar8 + 8))();
            }
          }
        }
        func_0x000109d1a1d0(puVar7 + 2);
        __ZdlPv(puVar7);
        return;
      }
    }
    else {
      func_0x0001092af97c(lVar16 + 0x90);
    }
                    /* WARNING: Does not return */
    pcVar6 = (code *)SoftwareBreakpoint(1,0x10a7cf4dc);
    (*pcVar6)();
  }
  return;
}



/* Entry: 10a7ceecc; end: 10a7cf70b;  */

/* WARNING: Removing unreachable block (ram,0x00010a7cf36c) */

void FUN_10a7ceecc(long *param_1,undefined8 *param_2,long param_3,undefined8 *param_4,
                  undefined8 *param_5)

{
  long *plVar1;
  long *plVar2;
  ulong *puVar3;
  char cVar4;
  bool bVar5;
  code *pcVar6;
  long **pplVar7;
  long *plVar8;
  long *plVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  long lVar12;
  long lVar13;
  ulong uVar14;
  long *plVar15;
  undefined8 uVar16;
  undefined8 uStack_110;
  undefined8 uStack_108;
  long lStack_100;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  long lStack_e0;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 auStack_b8 [2];
  char cStack_a1;
  long *plStack_a0;
  long *plStack_98;
  long lStack_90;
  long *plStack_88;
  long *plStack_80;
  long **pplStack_78;
  long *plStack_70;
  long *plStack_68;
  long *plStack_60;
  long lStack_58;
  
  plVar15 = (long *)param_2[1];
  uStack_c8 = param_2[1];
  uStack_d0 = *param_2;
  if (plVar15 != (long *)0x0) {
    plVar1 = plVar15 + 1;
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar5) {
        *plVar1 = *plVar1 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  if (*(char *)((long)param_4 + 0x17) < '\0') {
    func_0x000107c3192c(&uStack_f0,*param_4,param_4[1]);
  }
  else {
    uStack_e8 = param_4[1];
    uStack_f0 = *param_4;
    lStack_e0 = param_4[2];
  }
  if (*(char *)((long)param_5 + 0x17) < '\0') {
    func_0x000107c3192c(&uStack_110,*param_5,param_5[1]);
  }
  else {
    uStack_108 = param_5[1];
    uStack_110 = *param_5;
    lStack_100 = param_5[2];
  }
  pplVar7 = &plStack_60;
  FUN_10a7d22ac();
  __ZNSt3__16chrono12steady_clock3nowEv();
  FUN_10a725afc(&lStack_90,param_3 + 0x18);
  plVar1 = plStack_88;
  lVar13 = lStack_90;
  if (plStack_88 != (long *)0x0) {
    plVar8 = plStack_88 + 2;
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar5) {
        *plVar8 = *plVar8 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    plVar8 = plStack_88 + 1;
    do {
      lVar12 = *plVar8;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar5) {
        *plVar8 = lVar12 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar12 == 0) {
      (**(code **)(*plStack_88 + 0x10))(plStack_88);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_88);
    }
  }
  lStack_90 = lStack_58;
  if (lStack_58 != 0) {
    plVar8 = (long *)(lStack_58 + 8);
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar5) {
        *plVar8 = *plVar8 + 0x200000000;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  plStack_88 = (long *)lVar13;
  plStack_80 = plVar1;
  if (plVar1 != (long *)0x0) {
    plVar8 = plVar1 + 2;
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar5) {
        *plVar8 = *plVar8 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  plVar8 = (long *)0x60;
  pplStack_78 = pplVar7;
  __Znwm();
  plVar8[1] = 0;
  plVar8[2] = 0;
  *plVar8 = (long)&PTR_DAT_110c170c8;
  plStack_70 = plVar8 + 3;
  *plStack_70 = (long)FUN_10a7d6aa8;
  plVar8[4] = (long)&PTR_FUN_110c1b4b8;
  plVar8[5] = lStack_90;
  plVar8[6] = lVar13;
  plVar8[7] = (long)plVar1;
  plVar8[8] = (long)pplVar7;
  *(undefined1 *)(plVar8 + 0xb) = 1;
  lStack_90 = lStack_58;
  if (lStack_58 != 0) {
    plVar9 = (long *)(lStack_58 + 8);
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar5) {
        *plVar9 = *plVar9 + 0x200000000;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  plStack_88 = (long *)lVar13;
  plStack_80 = plVar1;
  if (plVar1 != (long *)0x0) {
    plVar9 = plVar1 + 2;
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar5) {
        *plVar9 = *plVar9 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  plVar9 = (long *)0x60;
  plStack_68 = plVar8;
  __Znwm();
  plVar9[1] = 0;
  plVar9[2] = 0;
  plStack_a0 = plVar9 + 3;
  *plStack_a0 = (long)FUN_10a7d6e74;
  *plVar9 = (long)&PTR_FUN_110c14d30;
  plVar9[4] = (long)&PTR_FUN_110c1b4d8;
  plVar9[5] = lStack_90;
  plVar9[6] = lVar13;
  plVar9[7] = (long)plVar1;
  *(undefined1 *)(plVar9 + 0xb) = 1;
  plStack_98 = plVar9;
  func_0x000107c2b054(auStack_b8,&UNK_10f677f68);
  uVar16 = *(undefined8 *)(param_3 + 0x8d8);
  func_0x000107c2b054(&lStack_90,&DAT_10f2f03d9);
  FUN_10a76bdb0(uVar16,auStack_b8,&lStack_90);
  if ((long)plStack_80 < 0) {
    __ZdlPv(lStack_90);
  }
  if (cStack_a1 < '\0') {
    __ZdlPv(auStack_b8[0]);
  }
  FUN_10a8705b0(uStack_d0,&uStack_f0,&uStack_110,2,&plStack_70,&plStack_a0);
  plVar9 = plStack_60;
  plVar8 = plStack_98;
  if (plStack_60 != (long *)0x0) {
    plVar2 = plStack_60 + 1;
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar5) {
        *plVar2 = *plVar2 + 4;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  if (plStack_98 != (long *)0x0) {
    plVar2 = plStack_98 + 1;
    do {
      lVar13 = *plVar2;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar5) {
        *plVar2 = lVar13 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar13 == 0) {
      (**(code **)(*plStack_98 + 0x10))(plStack_98);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar8);
    }
  }
  plVar8 = plStack_68;
  if (plStack_68 != (long *)0x0) {
    plVar2 = plStack_68 + 1;
    do {
      lVar13 = *plVar2;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar5) {
        *plVar2 = lVar13 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar13 == 0) {
      (**(code **)(*plStack_68 + 0x10))(plStack_68);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar8);
    }
  }
  if (plVar1 != (long *)0x0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv(plVar1);
  }
  if (lStack_58 != 0) {
    func_0x0001092b4274(&lStack_58);
  }
  if (plStack_60 != (long *)0x0) {
    puVar3 = (ulong *)(plStack_60 + 1);
    do {
      uVar14 = *puVar3;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(puVar3,0x10);
      if (bVar5) {
        *puVar3 = uVar14 - 4;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if ((uVar14 & 0x1fffffffc) == 4) {
      do {
        uVar14 = *puVar3;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(puVar3,0x10);
        if (bVar5) {
          *puVar3 = uVar14 - 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (uVar14 - 1 == 0) {
        (**(code **)(*plStack_60 + 8))();
      }
    }
  }
  if (lStack_100 < 0) {
    __ZdlPv(uStack_110);
  }
  if (lStack_e0 < 0) {
    __ZdlPv(uStack_f0);
  }
  if (plVar15 != (long *)0x0) {
    plVar1 = plVar15 + 1;
    do {
      lVar13 = *plVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar5) {
        *plVar1 = lVar13 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar13 == 0) {
      (**(code **)(*plVar15 + 0x10))(plVar15);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar15);
    }
  }
  uVar16 = *(undefined8 *)(*(long *)(param_3 + 0x960) + 0x3a8);
  puVar10 = (undefined8 *)0x70;
  __Znwm();
  *puVar10 = FUN_10a7d7ba4;
  puVar10[1] = FUN_10a7d7e90;
  FUN_10a7d320c(puVar10 + 2);
  lVar13 = puVar10[7];
  if (lVar13 != 0) {
    plVar15 = (long *)(lVar13 + 8);
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar15,0x10);
      if (bVar5) {
        *plVar15 = *plVar15 + 4;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  *param_1 = lVar13;
  puVar10[0xb] = plVar9;
  puVar10[9] = uVar16;
  *(undefined1 *)(puVar10 + 10) = 0;
  *(undefined1 *)(puVar10 + 0xd) = 0;
  puVar11 = puVar10 + 9;
  FUN_10a7d2d14(puVar11,puVar10);
  if (((ulong)puVar11 & 1) == 0) {
    FUN_10a7d2e70(puVar10 + 0xc,puVar10 + 0xb);
    puVar10[9] = puVar10[0xc];
    plVar15 = (long *)(puVar10[0xc] + 8);
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar15,0x10);
      if (bVar5) {
        *plVar15 = *plVar15 + 4;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (((uint)*(undefined8 *)(puVar10[9] + 0x10) >> 1 & 1) == 0) {
      *(undefined1 *)(puVar10 + 0xd) = 1;
      lVar13 = puVar10[9];
      plVar15 = (long *)(lVar13 + 0x10);
      uVar16 = puVar10[3];
      do {
        lVar12 = *plVar15;
        if (lVar12 == 0) {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar15,0x10);
          if (bVar5) {
            *plVar15 = 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
          if (cVar4 == '\0') {
            lStack_90 = 0;
            plStack_88 = puVar10;
            plStack_80 = (long *)uVar16;
            func_0x000109d1b588(lVar13 + 0x18,&lStack_90);
            *(undefined8 *)(lVar13 + 0x10) = 0;
            return;
          }
        }
        else {
          ClearExclusiveLocal();
        }
      } while (((uint)lVar12 >> 1 & 1) == 0);
    }
    lVar13 = puVar10[9];
    if (((uint)*(undefined8 *)(puVar10[9] + 0x10) >> 5 & 1) == 0) {
      if ((*(byte *)(lVar13 + 0xa8) & 1) != 0) {
        FUN_10a7d2db0(puVar10 + 2,lVar13 + 0x98);
        plVar15 = (long *)puVar10[9];
        if (plVar15 != (long *)0x0) {
          puVar3 = (ulong *)(plVar15 + 1);
          do {
            uVar14 = *puVar3;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(puVar3,0x10);
            if (bVar5) {
              *puVar3 = uVar14 - 4;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if ((uVar14 & 0x1fffffffc) == 4) {
            do {
              uVar14 = *puVar3;
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(puVar3,0x10);
              if (bVar5) {
                *puVar3 = uVar14 - 1;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
            if (uVar14 - 1 == 0) {
              (**(code **)(*plVar15 + 8))();
            }
          }
        }
        plVar15 = (long *)puVar10[0xc];
        if (plVar15 != (long *)0x0) {
          puVar3 = (ulong *)(plVar15 + 1);
          do {
            uVar14 = *puVar3;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(puVar3,0x10);
            if (bVar5) {
              *puVar3 = uVar14 - 4;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if ((uVar14 & 0x1fffffffc) == 4) {
            do {
              uVar14 = *puVar3;
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(puVar3,0x10);
              if (bVar5) {
                *puVar3 = uVar14 - 1;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
            if (uVar14 - 1 == 0) {
              (**(code **)(*plVar15 + 8))();
            }
          }
        }
        plVar15 = (long *)puVar10[0xb];
        if (plVar15 != (long *)0x0) {
          puVar3 = (ulong *)(plVar15 + 1);
          do {
            uVar14 = *puVar3;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(puVar3,0x10);
            if (bVar5) {
              *puVar3 = uVar14 - 4;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if ((uVar14 & 0x1fffffffc) == 4) {
            do {
              uVar14 = *puVar3;
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(puVar3,0x10);
              if (bVar5) {
                *puVar3 = uVar14 - 1;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
            if (uVar14 - 1 == 0) {
              (**(code **)(*plVar15 + 8))();
            }
          }
        }
        func_0x000109d1a1d0(puVar10 + 2);
        __ZdlPv(puVar10);
        return;
      }
    }
    else {
      func_0x0001092af97c(lVar13 + 0x90);
    }
                    /* WARNING: Does not return */
    pcVar6 = (code *)SoftwareBreakpoint(1,0x10a7cf4dc);
    (*pcVar6)();
  }
  return;
}



/* Entry: 10a7cf70c; end: 10a7cf77f;  */

undefined8 * FUN_10a7cf70c(undefined8 *param_1,undefined8 param_2,long param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  if (param_3 != 0) {
    plVar5 = (long *)(param_3 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar3) {
        *plVar5 = *plVar5 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  plVar5 = (long *)param_1[1];
  *param_1 = param_2;
  param_1[1] = param_3;
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



/* Entry: 10a7cf780; end: 10a7cf8cb;  */

void FUN_10a7cf780(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  float fVar3;
  float fVar4;
  undefined8 auStack_50 [2];
  char cStack_39;
  undefined8 auStack_38 [2];
  char cStack_21;
  
  FUN_10a7cec1c();
  *(undefined8 *)(param_1 + 0x298) = 0;
  lVar1 = param_1 + 0x3e0;
  func_0x00010a6fb6ec(lVar1,param_2);
  *(undefined4 *)(param_1 + 0x2a0) = 1;
  *(undefined4 *)(param_1 + 0x2a8) = 1;
  __ZNSt3__16chrono12steady_clock3nowEv();
  *(long *)(param_1 + 0x400) = lVar1;
  lVar1 = *(long *)(param_1 + 0x170);
  func_0x000107c2b054(auStack_50,&UNK_10f677e11);
  if (lVar1 != 0) {
    uVar2 = *(undefined8 *)(lVar1 + 0x8d8);
    func_0x000107c2b054(auStack_38,&DAT_10f2f03d9);
    FUN_10a76bdb0(uVar2,auStack_50,auStack_38);
    if (cStack_21 < '\0') {
      __ZdlPv(auStack_38[0]);
    }
  }
  if (cStack_39 < '\0') {
    __ZdlPv(auStack_50[0]);
  }
  lVar1 = *(long *)(param_1 + 0x170);
  func_0x000107c2b054(auStack_38,&UNK_10f677e2f);
  if (lVar1 != 0) {
    fVar3 = (float)*(ulong *)(param_1 + 0x298) / (float)*(ulong *)(param_1 + 0x3b8);
    fVar4 = 1.0;
    if (fVar3 <= 1.0) {
      fVar4 = fVar3;
    }
    FUN_10a76bf18((double)fVar4,*(undefined8 *)(lVar1 + 0x8d8),auStack_38);
  }
  if (cStack_21 < '\0') {
    __ZdlPv(auStack_38[0]);
  }
  return;
}



/* Entry: 10a7cf8cc; end: 10a7cf977;  */

void FUN_10a7cf8cc(long *param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined1 auStack_30 [8];
  long *plStack_28;
  
  if (*(long *)(param_2 + 0x2f0) == 0) {
    *param_1 = 0;
    param_1[1] = 0;
  }
  else {
    FUN_10a7cf978(auStack_30,param_2 + 0x2f0);
    FUN_10a7cf9e8(param_1,*(undefined8 *)(param_2 + 0x170));
    FUN_10a52a0d0(*param_1 + 0xe0,auStack_30);
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



/* Entry: 10a7cf978; end: 10a7cf9e7;  */

void FUN_10a7cf978(undefined8 *param_1,long *param_2)

{
  undefined1 auStack_90 [96];
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  if (*param_2 == 0) {
    *param_1 = 0;
    param_1[1] = 0;
  }
  else {
    FUN_10a7d2240(auStack_90);
    FUN_10a7d2124(&uStack_30,auStack_90);
    param_1[1] = uStack_28;
    *param_1 = uStack_30;
    uStack_30 = 0;
    uStack_28 = 0;
    func_0x000109343234(auStack_90);
  }
  return;
}



/* Entry: 10a7cf9e8; end: 10a7cfa9b;  */

void FUN_10a7cf9e8(long param_1)

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
    FUN_10a7d62a0(&uStack_40);
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
    FUN_10a7d60bc(&uStack_38,&lStack_28);
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



/* Entry: 10a7cfa9c; end: 10a7cfc7f;  */

void FUN_10a7cfa9c(undefined8 *param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  code *pcVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  undefined1 auStack_70 [8];
  long *plStack_68;
  undefined8 uStack_60;
  int iStack_58;
  undefined4 uStack_54;
  undefined8 uStack_50;
  undefined8 uStack_48;
  int aiStack_40 [2];
  undefined8 *puStack_38;
  
  if (*(long *)(param_2 + 0x2f0) == 0) {
    param_1[1] = 0;
    *param_1 = 0;
    param_1[3] = 0;
    param_1[2] = 0;
  }
  else {
    lVar6 = *(long *)(param_2 + 0x170);
    FUN_10a7cf8cc(auStack_70);
    lVar7 = *(long *)(lVar6 + 0x870);
    lVar6 = *(long *)(lVar7 + 0x68);
    __ZNSt3__115recursive_mutex4lockEv(lVar7 + 0x70);
    lVar6 = *(long *)(lVar6 + 0xb8);
    if ((*(byte *)(lVar6 + 0x1e0) & 1) == 0) {
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x10a7cfc40);
      (*pcVar5)();
    }
    uVar8 = *(undefined8 *)(lVar6 + 0x50);
    uStack_48 = uVar8;
    func_0x00010a71044c(&uStack_60,uVar8,auStack_70);
    iVar4 = (int)uStack_60;
    aiStack_40[0] = (int)uStack_60;
    if ((int)uStack_60 == 3) {
      puStack_38 = (undefined8 *)CONCAT44(uStack_54,iStack_58);
    }
    else if ((int)uStack_60 == 2) {
      puStack_38 = (undefined8 *)CONCAT71(puStack_38._1_7_,(undefined1)iStack_58);
    }
    else if (3 < (int)uStack_60) {
      puStack_38 = (undefined8 *)CONCAT44(uStack_54,iStack_58);
    }
    FUN_10a464ec0(lVar7,&uStack_48,0x80000);
    uStack_60 = uVar8;
    func_0x0001098849a4(&iStack_58,uVar8,aiStack_40);
    *param_1 = uStack_60;
    *(int *)(param_1 + 1) = iStack_58;
    if (iStack_58 == 3) {
      param_1[2] = uStack_50;
    }
    else if (iStack_58 == 2) {
      *(undefined1 *)(param_1 + 2) = (undefined1)uStack_50;
    }
    else if (3 < iStack_58) {
      param_1[2] = uStack_50;
      uStack_50 = 0;
    }
    iStack_58 = 0;
    *(undefined1 *)(param_1 + 3) = 1;
    if ((3 < iVar4) && (puStack_38 != (undefined8 *)0x0)) {
      (**(code **)*puStack_38)();
    }
    __ZNSt3__115recursive_mutex6unlockEv(lVar7 + 0x70);
    if (plStack_68 != (long *)0x0) {
      plVar1 = plStack_68 + 1;
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
        (**(code **)(*plStack_68 + 0x10))(plStack_68);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_68);
      }
    }
  }
  return;
}



/* Entry: 10a7cfc80; end: 10a7cfdfb;  */

void FUN_10a7cfc80(long param_1,long *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  undefined8 uStack_50;
  long *plStack_48;
  undefined1 auStack_40 [8];
  long *plStack_38;
  undefined8 uStack_30;
  long *plStack_28;
  
  if (*(int *)(param_1 + 0x2a0) == 1) {
    FUN_10a07e58c(*(undefined8 *)(param_1 + 0x288));
  }
  lVar4 = *param_2;
  if (lVar4 == 0) {
    uStack_30 = 0;
    plStack_28 = (long *)0x0;
    FUN_10a7cfdfc(param_1,&uStack_30);
    if (plStack_28 == (long *)0x0) goto LAB_10a7cfd90;
    plVar1 = plStack_28 + 1;
    do {
      lVar4 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar4 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
      plVar5 = plStack_28;
    } while (cVar2 != '\0');
  }
  else {
    plStack_48 = *(long **)(lVar4 + 0xe8);
    uStack_50 = *(undefined8 *)(lVar4 + 0xe0);
    if (*(long *)(lVar4 + 0xe8) != 0) {
      plVar1 = (long *)(*(long *)(lVar4 + 0xe8) + 8);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = *plVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    FUN_10a7cf978(auStack_40,&uStack_50);
    FUN_10a7cfdfc(param_1,auStack_40);
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
        __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_38);
      }
    }
    if (plStack_48 == (long *)0x0) goto LAB_10a7cfd90;
    plVar1 = plStack_48 + 1;
    do {
      lVar4 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar4 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
      plVar5 = plStack_48;
    } while (cVar2 != '\0');
  }
  if (lVar4 == 0) {
    (**(code **)(*plVar5 + 0x10))(plVar5);
    __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
  }
LAB_10a7cfd90:
  *(undefined4 *)(param_1 + 0x2a8) = 0;
  if (*(char *)(param_1 + 0x2ec) == '\x01') {
    *(undefined1 *)(param_1 + 0x2ec) = 0;
  }
  *(undefined1 *)(param_1 + 0x300) = 0;
  *(undefined4 *)(param_1 + 0x424) = 0;
  *(undefined1 *)(param_1 + 0x428) = 0;
  *(undefined8 *)(param_1 + 0x418) = 0;
  *(undefined8 *)(param_1 + 0x410) = 0;
  *(undefined1 *)(param_1 + 0x420) = 0;
  return;
}



/* Entry: 10a7cfdfc; end: 10a7cfeeb;  */

void FUN_10a7cfdfc(long param_1,long *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  long lStack_38;
  long *plStack_30;
  
  lVar5 = *param_2;
  if (lVar5 == 0) {
    *(undefined4 *)(param_1 + 0x2a0) = 0;
    lStack_38 = 0;
    plStack_30 = (long *)0x0;
    func_0x00010a23175c(param_1 + 0x2f0,&lStack_38);
    plVar4 = plStack_30;
    if (plStack_30 != (long *)0x0) {
      plVar1 = plStack_30 + 1;
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
        (**(code **)(*plStack_30 + 0x10))(plStack_30);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
      }
    }
    *(undefined8 *)(param_1 + 0x298) = 0;
    if ((*(byte *)(param_1 + 0x3a0) & 1) == 0) {
      return;
    }
  }
  else {
    *(undefined4 *)(param_1 + 0x2a0) = 3;
    if (*(long *)(param_1 + 0x2f0) == lVar5) {
      return;
    }
    FUN_10a52a0d0(param_1 + 0x2f0);
    (**(code **)**(undefined8 **)(param_1 + 0x2f0))(&lStack_38);
    *(long *)(param_1 + 0x298) = (long)plStack_30 - lStack_38 >> 3;
    lVar5 = lStack_38;
    if (lStack_38 != 0) {
      plStack_30 = (long *)lStack_38;
      __ZdlPv();
      lVar5 = lStack_38;
    }
    __ZNSt3__16chrono12steady_clock3nowEv();
    *(long *)(param_1 + 0x408) = lVar5;
    if (*(char *)(param_1 + 0x3a0) != '\x01') {
      return;
    }
  }
  *(undefined1 *)(param_1 + 0x3a0) = 0;
  return;
}



/* Entry: 10a7cfeec; end: 10a7d0153;  */

void FUN_10a7cfeec(undefined8 *param_1,long param_2,long *param_3)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  ulong uVar4;
  char cVar5;
  bool bVar6;
  long *plVar7;
  long lVar8;
  undefined8 uStack_f0;
  long *plStack_e8;
  undefined8 uStack_e0;
  long *plStack_d8;
  char cStack_c9;
  undefined8 uStack_c8;
  ulong uStack_c0;
  ulong uStack_b8;
  undefined1 auStack_b0 [96];
  long *plStack_50;
  long *plStack_48;
  
  if ((*param_3 == 0) || (*(long *)(*param_3 + 0xf0) == 0)) {
    *param_1 = 0;
    param_1[1] = 0;
  }
  else {
    FUN_10a7d2240(auStack_b0,param_3);
    uStack_c8 = 0;
    uStack_c0 = 0;
    uStack_b8 = 0;
    func_0x000107c30360(auStack_b0,&uStack_c8);
    func_0x000107c2b054(&uStack_e0,&UNK_10f677f4f);
    if (param_2 != 0) {
      uVar4 = uStack_c0;
      if (-1 < (long)uStack_b8) {
        uVar4 = uStack_b8 >> 0x38;
      }
      FUN_10a76bf18((double)uVar4,*(undefined8 *)(param_2 + 0x8d8),&uStack_e0);
    }
    if (cStack_c9 < '\0') {
      __ZdlPv(uStack_e0);
    }
    FUN_10a71b424(&uStack_f0,&uStack_e0,&uStack_c8);
    plVar7 = (long *)0x108;
    __Znwm();
    plVar3 = plStack_e8;
    plVar7[1] = 0;
    plVar7[2] = 0;
    *plVar7 = (long)&PTR_FUN_110c14c90;
    plVar1 = plVar7 + 3;
    plStack_d8 = plStack_e8;
    uStack_e0 = uStack_f0;
    uStack_f0 = 0;
    plStack_e8 = (long *)0x0;
    FUN_10aaee3c4(plVar1,param_2,&uStack_e0);
    if (plVar3 != (long *)0x0) {
      plVar2 = plVar3 + 1;
      do {
        lVar8 = *plVar2;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar6) {
          *plVar2 = lVar8 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (lVar8 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar3);
      }
    }
    plStack_50 = plVar1;
    plStack_48 = plVar7;
    FUN_10a71ba34(&plStack_50,plVar7 + 8,plVar1);
    FUN_10a71b76c(param_1,&plStack_50);
    plVar1 = plStack_48;
    if (plStack_48 != (long *)0x0) {
      plVar3 = plStack_48 + 1;
      do {
        lVar8 = *plVar3;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar3,0x10);
        if (bVar6) {
          *plVar3 = lVar8 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (lVar8 == 0) {
        (**(code **)(*plStack_48 + 0x10))(plStack_48);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar1);
      }
    }
    plVar1 = plStack_e8;
    if (plStack_e8 != (long *)0x0) {
      plVar3 = plStack_e8 + 1;
      do {
        lVar8 = *plVar3;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar3,0x10);
        if (bVar6) {
          *plVar3 = lVar8 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (lVar8 == 0) {
        (**(code **)(*plStack_e8 + 0x10))(plStack_e8);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar1);
      }
    }
    if ((long)uStack_b8 < 0) {
      __ZdlPv(uStack_c8);
    }
    func_0x000109343234(auStack_b0);
  }
  return;
}



/* Entry: 10a7d0154; end: 10a7d0327;  */

void FUN_10a7d0154(long *param_1,long *param_2)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  char cVar4;
  bool bVar5;
  long lVar6;
  long lVar7;
  undefined **ppuStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined1 uStack_58;
  undefined7 uStack_57;
  undefined1 uStack_50;
  undefined8 uStack_4f;
  long lStack_40;
  long lStack_38;
  
  lVar6 = *param_2;
  if (lVar6 != 0) {
    lVar7 = *(long *)(lVar6 + 0xe0);
    plVar2 = *(long **)(lVar6 + 0xe8);
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
      do {
        lVar6 = *plVar3;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar3,0x10);
        if (bVar5) {
          *plVar3 = lVar6 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (lVar6 == 0) {
        (**(code **)(*plVar2 + 0x10))(plVar2);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar2);
      }
    }
    if (lVar7 != 0) {
      ppuStack_a0 = &PTR_DAT_110af0078;
      uStack_98 = 0;
      uStack_88 = 0;
      uStack_90 = 0;
      uStack_78 = 0;
      uStack_80 = 0;
      uStack_68 = 0;
      uStack_70 = 0;
      uStack_58 = 0;
      uStack_60 = 0;
      uStack_4f = 0;
      uStack_57 = 0;
      uStack_50 = 0;
      lStack_40 = *(undefined8 *)(*param_2 + 0xe0);
      plVar2 = *(long **)(*param_2 + 0xe8);
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
      if (*(char *)(lStack_40 + 0x17) < '\0') {
        lStack_40 = *(long *)lStack_40;
      }
      lVar6 = *(long *)(*param_2 + 0xe0);
      plVar3 = *(long **)(*param_2 + 0xe8);
      if (plVar3 != (long *)0x0) {
        plVar1 = plVar3 + 1;
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar5) {
            *plVar1 = *plVar1 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
      }
      lVar7 = (long)*(char *)(lVar6 + 0x17);
      if (lVar7 < 0) {
        lVar7 = *(long *)(lVar6 + 8);
      }
      lStack_38 = (long)(int)lVar7;
      func_0x000107c30348(&ppuStack_a0,&lStack_40);
      if (plVar3 != (long *)0x0) {
        plVar1 = plVar3 + 1;
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
          (**(code **)(*plVar3 + 0x10))(plVar3);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar3);
        }
      }
      if (plVar2 != (long *)0x0) {
        plVar3 = plVar2 + 1;
        do {
          lVar6 = *plVar3;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar3,0x10);
          if (bVar5) {
            *plVar3 = lVar6 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (lVar6 == 0) {
          (**(code **)(*plVar2 + 0x10))(plVar2);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar2);
        }
      }
      FUN_10a7d2124(&lStack_40,&ppuStack_a0);
      param_1[1] = lStack_38;
      *param_1 = lStack_40;
      func_0x000109343234(&ppuStack_a0);
      return;
    }
  }
  *param_1 = 0;
  param_1[1] = 0;
  return;
}



/* Entry: 10a7d0328; end: 10a7d0597;  */

undefined8 *** FUN_10a7d0328(undefined8 ***param_1,uint *param_2)

{
  uint *puVar1;
  undefined8 ***pppuVar2;
  long *plVar3;
  char cVar4;
  bool bVar5;
  undefined8 ***pppuVar6;
  undefined8 **ppuVar7;
  undefined8 uVar8;
  uint auStack_2a0 [2];
  undefined8 uStack_298;
  long **pplStack_290;
  ulong uStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined1 uStack_1f0;
  undefined8 uStack_1e0;
  undefined4 uStack_1d8;
  undefined4 uStack_1d4;
  undefined4 uStack_1d0;
  undefined8 uStack_1cc;
  long **applStack_1c0 [2];
  char cStack_1a9;
  char cStack_1a8;
  long lStack_198;
  long **applStack_160 [2];
  char cStack_149;
  undefined8 **ppuStack_148;
  uint auStack_140 [2];
  long *plStack_138;
  long **pplStack_130;
  long *plStack_120;
  long *plStack_118;
  long *plStack_110;
  long *plStack_108;
  long *plStack_100;
  long *plStack_f8;
  long *plStack_f0;
  long *plStack_e0;
  long *plStack_d8;
  long *plStack_d0;
  long *plStack_c8;
  long *plStack_c0;
  long *plStack_b8;
  long *plStack_b0;
  long *plStack_a8;
  long *plStack_a0;
  undefined1 uStack_90;
  uint uStack_80;
  long *plStack_78;
  undefined1 uStack_70;
  undefined1 uStack_6f;
  undefined8 uStack_6c;
  undefined1 uStack_60;
  undefined7 uStack_5f;
  char cStack_49;
  char cStack_48;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if (*(uint *)(param_1 + 0x54) == 3) {
    auStack_140[0] = CONCAT31(auStack_140[0]._1_3_,1);
    func_0x000107c2b054(applStack_160,&UNK_10f677e4f);
    FUN_10acf2c5c(&plStack_138,applStack_160,param_1 + 0x5e);
    plStack_120 = (long *)((ulong)plStack_120 & 0xffffffffffffff00);
    plStack_108 = (long *)((ulong)plStack_108 & 0xffffffffffffff00);
    puVar1 = param_2 + 0x104;
    param_2 = auStack_140;
    FUN_10a6efaac(puVar1);
    if (((char)plStack_108 == '\x01') && ((long)plStack_110 < 0)) {
      __ZdlPv(plStack_120);
    }
    param_1 = &ppuStack_148;
    ppuStack_148 = &plStack_138;
    FUN_10a2303d4();
    if (cStack_149 < '\0') {
      param_1 = (undefined8 ***)applStack_160[0];
      __ZdlPv();
    }
  }
  else if (*(uint *)(param_1 + 0x54) == 1) {
    auStack_140[0] = *(byte *)((long)param_1 + 0x2a4) ^ 1;
    pplStack_130 = param_1[0x5f];
    plStack_138 = (long *)param_1[0x5e];
    if (param_1[0x5f] != (undefined8 **)0x0) {
      ppuVar7 = param_1[0x5f] + 1;
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(ppuVar7,0x10);
        if (bVar5) {
          *ppuVar7 = (undefined8 *)((long)*ppuVar7 + 1);
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
    plStack_120 = (long *)((ulong)plStack_120 & 0xffffffffffffff00);
    uStack_90 = *(char *)(param_1 + 0x74) == '\x01';
    if ((bool)uStack_90) {
      plStack_118 = (long *)param_1[99];
      plStack_120 = (long *)param_1[0x62];
      plStack_108 = (long *)param_1[0x65];
      plStack_110 = (long *)param_1[100];
      plStack_f8 = (long *)param_1[0x67];
      plStack_100 = (long *)param_1[0x66];
      plStack_f0 = (long *)param_1[0x68];
      plStack_b8 = (long *)param_1[0x6f];
      plStack_c0 = (long *)param_1[0x6e];
      plStack_a8 = (long *)param_1[0x71];
      plStack_b0 = (long *)param_1[0x70];
      plStack_a0 = (long *)param_1[0x72];
      plStack_d8 = (long *)param_1[0x6b];
      plStack_e0 = (long *)param_1[0x6a];
      plStack_c8 = (long *)param_1[0x6d];
      plStack_d0 = (long *)param_1[0x6c];
    }
    uStack_80 = *(uint *)(param_1 + 0x78);
    plStack_78 = (long *)param_1[0x77];
    if ((*(char *)((long)param_1 + 0x2a4) == '\x01') &&
       ((*(byte *)((long)param_1 + 0x44c) & 1) == 0)) {
      uStack_70 = param_1[0x5e] == (undefined8 **)0x0;
    }
    else {
      uStack_70 = false;
    }
    uStack_6f = uStack_80 == 1;
    uStack_6c = 0x200000000;
    uStack_60 = 0;
    cStack_48 = '\0';
    param_1 = (undefined8 ***)(param_2 + 0xc0);
    param_2 = auStack_140;
    FUN_10a7d0598();
    if ((cStack_48 == '\x01') && (cStack_49 < '\0')) {
      param_1 = (undefined8 ***)CONCAT71(uStack_5f,uStack_60);
      __ZdlPv();
    }
    pppuVar6 = (undefined8 ***)pplStack_130;
    if ((undefined8 ***)pplStack_130 != (undefined8 ***)0x0) {
      pppuVar2 = (undefined8 ***)(pplStack_130 + 1);
      do {
        ppuVar7 = *pppuVar2;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(pppuVar2,0x10);
        if (bVar5) {
          *pppuVar2 = (undefined8 **)((long)ppuVar7 + -1);
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (ppuVar7 == (undefined8 **)0x0) {
        (*(code *)(*pplStack_130)[2])(pplStack_130);
        __ZNSt3__119__shared_weak_count14__release_weakEv();
        param_1 = pppuVar6;
      }
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return param_1;
  }
  ___stack_chk_fail();
  FUN_10a4ef8a4(auStack_140);
  if (cStack_149 < '\0') {
    __ZdlPv(applStack_160[0]);
  }
  __Unwind_Resume();
  lStack_198 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if (((ulong)param_1[0x20] & 1) == 0) {
    auStack_2a0[0] = *param_2;
    pplStack_290 = *(long ***)(param_2 + 4);
    uStack_298 = *(undefined8 *)(param_2 + 2);
    if (*(long *)(param_2 + 4) != 0) {
      plVar3 = (long *)(*(long *)(param_2 + 4) + 8);
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar3,0x10);
        if (bVar5) {
          *plVar3 = *plVar3 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
    uStack_280 = uStack_280 & 0xffffffffffffff00;
    uStack_1f0 = (char)param_2[0x2c] == '\x01';
    if ((bool)uStack_1f0) {
      uStack_278 = *(undefined8 *)(param_2 + 10);
      uStack_280 = *(ulong *)(param_2 + 8);
      uStack_268 = *(undefined8 *)(param_2 + 0xe);
      uStack_270 = *(undefined8 *)(param_2 + 0xc);
      uStack_258 = *(undefined8 *)(param_2 + 0x12);
      uStack_260 = *(undefined8 *)(param_2 + 0x10);
      uStack_250 = *(undefined8 *)(param_2 + 0x14);
      uStack_218 = *(undefined8 *)(param_2 + 0x22);
      uStack_220 = *(undefined8 *)(param_2 + 0x20);
      uStack_208 = *(undefined8 *)(param_2 + 0x26);
      uStack_210 = *(undefined8 *)(param_2 + 0x24);
      uStack_200 = *(undefined8 *)(param_2 + 0x28);
      uStack_238 = *(undefined8 *)(param_2 + 0x1a);
      uStack_240 = *(undefined8 *)(param_2 + 0x18);
      uStack_228 = *(undefined8 *)(param_2 + 0x1e);
      uStack_230 = *(undefined8 *)(param_2 + 0x1c);
    }
    uStack_1e0 = *(undefined8 *)(param_2 + 0x30);
    uStack_1d8 = (undefined4)*(undefined8 *)(param_2 + 0x32);
    uStack_1cc = *(undefined8 *)(param_2 + 0x35);
    uStack_1d4 = (undefined4)*(undefined8 *)(param_2 + 0x33);
    uStack_1d0 = (undefined4)((ulong)*(undefined8 *)(param_2 + 0x33) >> 0x20);
    FUN_10a1ccb30(applStack_1c0,param_2 + 0x38);
    FUN_10a7d691c(param_1,auStack_2a0);
    if ((cStack_1a8 == '\x01') && (cStack_1a9 < '\0')) {
      __ZdlPv();
      param_1 = (undefined8 ***)applStack_1c0[0];
    }
    pppuVar6 = (undefined8 ***)pplStack_290;
    if ((undefined8 ***)pplStack_290 != (undefined8 ***)0x0) {
      pppuVar2 = (undefined8 ***)(pplStack_290 + 1);
      do {
        ppuVar7 = *pppuVar2;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(pppuVar2,0x10);
        if (bVar5) {
          *pppuVar2 = (undefined8 **)((long)ppuVar7 + -1);
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (ppuVar7 == (undefined8 **)0x0) {
        (*(code *)(*pplStack_290)[2])(pplStack_290);
        __ZNSt3__119__shared_weak_count14__release_weakEv();
        param_1 = pppuVar6;
      }
    }
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_198) {
      return param_1;
    }
  }
  else if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_198) {
    if ((char)param_2[0x2c] == '\x01') {
      FUN_10a7d299c(param_1 + 4,param_2 + 8);
    }
    if ((char)param_2[0x3e] == '\x01') {
      func_0x00010a1cca60(param_1 + 0x1c,param_2 + 0x38);
    }
    *(uint *)param_1 = *param_2;
    pppuVar6 = param_1 + 1;
    FUN_10a52a0d0(pppuVar6,param_2 + 2);
    *(uint *)(param_1 + 0x18) = param_2[0x30];
    param_1[0x19] = *(undefined8 ***)(param_2 + 0x32);
    *(byte *)(param_1 + 0x1a) = *(byte *)(param_1 + 0x1a) | (byte)param_2[0x34];
    *(byte *)((long)param_1 + 0xd1) =
         *(byte *)((long)param_1 + 0xd1) | *(byte *)((long)param_2 + 0xd1);
    uVar8 = NEON_smax(*(undefined8 *)((long)param_1 + 0xd4),*(undefined8 *)(param_2 + 0x35),4);
    *(undefined8 *)((long)param_1 + 0xd4) = uVar8;
    return pppuVar6;
  }
  ___stack_chk_fail();
  FUN_10a7d0748(auStack_2a0);
  __Unwind_Resume();
  if ((*(char *)(param_1 + 0x1f) == '\x01') && (*(char *)((long)param_1 + 0xf7) < '\0')) {
    __ZdlPv(param_1[0x1c]);
  }
  FUN_10a22ffb4(param_1 + 1);
  return param_1;
}



/* Entry: 10a7d0598; end: 10a7d0747;  */

long * FUN_10a7d0598(long *param_1,undefined4 *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  undefined8 uVar6;
  undefined4 auStack_140 [2];
  undefined8 uStack_138;
  long *plStack_130;
  ulong uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined1 uStack_90;
  undefined8 uStack_80;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined8 uStack_6c;
  long *aplStack_60 [2];
  char cStack_49;
  char cStack_48;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if ((*(byte *)(param_1 + 0x20) & 1) == 0) {
    auStack_140[0] = *param_2;
    plStack_130 = *(long **)(param_2 + 4);
    uStack_138 = *(undefined8 *)(param_2 + 2);
    if (*(long *)(param_2 + 4) != 0) {
      plVar4 = (long *)(*(long *)(param_2 + 4) + 8);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar4,0x10);
        if (bVar3) {
          *plVar4 = *plVar4 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    uStack_120 = uStack_120 & 0xffffffffffffff00;
    uStack_90 = *(char *)(param_2 + 0x2c) == '\x01';
    if ((bool)uStack_90) {
      uStack_118 = *(undefined8 *)(param_2 + 10);
      uStack_120 = *(ulong *)(param_2 + 8);
      uStack_108 = *(undefined8 *)(param_2 + 0xe);
      uStack_110 = *(undefined8 *)(param_2 + 0xc);
      uStack_f8 = *(undefined8 *)(param_2 + 0x12);
      uStack_100 = *(undefined8 *)(param_2 + 0x10);
      uStack_f0 = *(undefined8 *)(param_2 + 0x14);
      uStack_b8 = *(undefined8 *)(param_2 + 0x22);
      uStack_c0 = *(undefined8 *)(param_2 + 0x20);
      uStack_a8 = *(undefined8 *)(param_2 + 0x26);
      uStack_b0 = *(undefined8 *)(param_2 + 0x24);
      uStack_a0 = *(undefined8 *)(param_2 + 0x28);
      uStack_d8 = *(undefined8 *)(param_2 + 0x1a);
      uStack_e0 = *(undefined8 *)(param_2 + 0x18);
      uStack_c8 = *(undefined8 *)(param_2 + 0x1e);
      uStack_d0 = *(undefined8 *)(param_2 + 0x1c);
    }
    uStack_80 = *(undefined8 *)(param_2 + 0x30);
    uStack_78 = (undefined4)*(undefined8 *)(param_2 + 0x32);
    uStack_6c = *(undefined8 *)(param_2 + 0x35);
    uStack_74 = (undefined4)*(undefined8 *)(param_2 + 0x33);
    uStack_70 = (undefined4)((ulong)*(undefined8 *)(param_2 + 0x33) >> 0x20);
    FUN_10a1ccb30(aplStack_60,param_2 + 0x38);
    FUN_10a7d691c(param_1,auStack_140);
    if ((cStack_48 == '\x01') && (cStack_49 < '\0')) {
      __ZdlPv();
      param_1 = aplStack_60[0];
    }
    plVar4 = plStack_130;
    if (plStack_130 != (long *)0x0) {
      plVar1 = plStack_130 + 1;
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
        (**(code **)(*plStack_130 + 0x10))(plStack_130);
        __ZNSt3__119__shared_weak_count14__release_weakEv();
        param_1 = plVar4;
      }
    }
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
      return param_1;
    }
  }
  else if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    if (*(char *)(param_2 + 0x2c) == '\x01') {
      FUN_10a7d299c(param_1 + 4,param_2 + 8);
    }
    if (*(char *)(param_2 + 0x3e) == '\x01') {
      func_0x00010a1cca60(param_1 + 0x1c,param_2 + 0x38);
    }
    *(undefined4 *)param_1 = *param_2;
    plVar4 = param_1 + 1;
    FUN_10a52a0d0(plVar4,param_2 + 2);
    *(undefined4 *)(param_1 + 0x18) = param_2[0x30];
    param_1[0x19] = *(long *)(param_2 + 0x32);
    *(byte *)(param_1 + 0x1a) = *(byte *)(param_1 + 0x1a) | *(byte *)(param_2 + 0x34);
    *(byte *)((long)param_1 + 0xd1) =
         *(byte *)((long)param_1 + 0xd1) | *(byte *)((long)param_2 + 0xd1);
    uVar6 = NEON_smax(*(undefined8 *)((long)param_1 + 0xd4),*(undefined8 *)(param_2 + 0x35),4);
    *(undefined8 *)((long)param_1 + 0xd4) = uVar6;
    return plVar4;
  }
  ___stack_chk_fail();
  FUN_10a7d0748(auStack_140);
  __Unwind_Resume();
  if (((char)param_1[0x1f] == '\x01') && (*(char *)((long)param_1 + 0xf7) < '\0')) {
    __ZdlPv(param_1[0x1c]);
  }
  FUN_10a22ffb4(param_1 + 1);
  return param_1;
}



/* Entry: 10a7d0748; end: 10a7d078b;  */

long FUN_10a7d0748(long param_1)

{
  if ((*(char *)(param_1 + 0xf8) == '\x01') && (*(char *)(param_1 + 0xf7) < '\0')) {
    __ZdlPv(*(undefined8 *)(param_1 + 0xe0));
  }
  FUN_10a22ffb4(param_1 + 8);
  return param_1;
}



/* Entry: 10a7d078c; end: 10a7d0793;  */

undefined8 ** FUN_10a7d078c(long param_1,uint *param_2)

{
  long *plVar1;
  uint *puVar2;
  undefined8 **ppuVar3;
  char cVar4;
  bool bVar5;
  undefined8 **ppuVar6;
  undefined8 **ppuVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  uint auStack_2a0 [2];
  undefined8 uStack_298;
  undefined8 **ppuStack_290;
  ulong uStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined1 uStack_1f0;
  undefined8 uStack_1e0;
  undefined4 uStack_1d8;
  undefined4 uStack_1d4;
  undefined4 uStack_1d0;
  undefined8 uStack_1cc;
  undefined8 **appuStack_1c0 [2];
  char cStack_1a9;
  char cStack_1a8;
  long lStack_198;
  undefined8 **appuStack_160 [2];
  char cStack_149;
  undefined8 *puStack_148;
  uint auStack_140 [2];
  undefined8 uStack_138;
  undefined8 **ppuStack_130;
  ulong uStack_120;
  undefined8 uStack_118;
  long lStack_110;
  ulong uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined1 uStack_90;
  int iStack_80;
  undefined8 uStack_78;
  undefined1 uStack_70;
  undefined1 uStack_6f;
  undefined8 uStack_6c;
  undefined1 uStack_60;
  undefined7 uStack_5f;
  char cStack_49;
  char cStack_48;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if (*(int *)(param_1 + 0xb0) == 3) {
    auStack_140[0] = CONCAT31(auStack_140[0]._1_3_,1);
    func_0x000107c2b054(appuStack_160,&UNK_10f677e4f);
    FUN_10acf2c5c(&uStack_138,appuStack_160,param_1 + 0x100);
    uStack_120 = uStack_120 & 0xffffffffffffff00;
    uStack_108 = uStack_108 & 0xffffffffffffff00;
    puVar2 = param_2 + 0x104;
    param_2 = auStack_140;
    FUN_10a6efaac(puVar2);
    if (((char)uStack_108 == '\x01') && (lStack_110 < 0)) {
      __ZdlPv(uStack_120);
    }
    ppuVar6 = &puStack_148;
    puStack_148 = &uStack_138;
    FUN_10a2303d4();
    if (cStack_149 < '\0') {
      ppuVar6 = appuStack_160[0];
      __ZdlPv();
    }
  }
  else {
    ppuVar6 = (undefined8 **)(param_1 + -0x1f0);
    if (*(int *)(param_1 + 0xb0) == 1) {
      auStack_140[0] = *(byte *)(param_1 + 0xb4) ^ 1;
      ppuStack_130 = *(undefined8 ***)(param_1 + 0x108);
      uStack_138 = *(undefined8 *)(param_1 + 0x100);
      if (*(long *)(param_1 + 0x108) != 0) {
        plVar1 = (long *)(*(long *)(param_1 + 0x108) + 8);
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar5) {
            *plVar1 = *plVar1 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
      }
      uStack_120 = uStack_120 & 0xffffffffffffff00;
      uStack_90 = *(char *)(param_1 + 0x1b0) == '\x01';
      if ((bool)uStack_90) {
        uStack_118 = *(undefined8 *)(param_1 + 0x128);
        uStack_120 = *(ulong *)(param_1 + 0x120);
        uStack_108 = *(ulong *)(param_1 + 0x138);
        lStack_110 = *(long *)(param_1 + 0x130);
        uStack_f8 = *(undefined8 *)(param_1 + 0x148);
        uStack_100 = *(undefined8 *)(param_1 + 0x140);
        uStack_f0 = *(undefined8 *)(param_1 + 0x150);
        uStack_b8 = *(undefined8 *)(param_1 + 0x188);
        uStack_c0 = *(undefined8 *)(param_1 + 0x180);
        uStack_a8 = *(undefined8 *)(param_1 + 0x198);
        uStack_b0 = *(undefined8 *)(param_1 + 400);
        uStack_a0 = *(undefined8 *)(param_1 + 0x1a0);
        uStack_d8 = *(undefined8 *)(param_1 + 0x168);
        uStack_e0 = *(undefined8 *)(param_1 + 0x160);
        uStack_c8 = *(undefined8 *)(param_1 + 0x178);
        uStack_d0 = *(undefined8 *)(param_1 + 0x170);
      }
      iStack_80 = *(int *)(param_1 + 0x1d0);
      uStack_78 = *(undefined8 *)(param_1 + 0x1c8);
      if ((*(char *)(param_1 + 0xb4) == '\x01') && ((*(byte *)(param_1 + 0x25c) & 1) == 0)) {
        uStack_70 = *(long *)(param_1 + 0x100) == 0;
      }
      else {
        uStack_70 = false;
      }
      uStack_6f = iStack_80 == 1;
      uStack_6c = 0x200000000;
      uStack_60 = 0;
      cStack_48 = '\0';
      ppuVar6 = (undefined8 **)(param_2 + 0xc0);
      param_2 = auStack_140;
      FUN_10a7d0598();
      if ((cStack_48 == '\x01') && (cStack_49 < '\0')) {
        ppuVar6 = (undefined8 **)CONCAT71(uStack_5f,uStack_60);
        __ZdlPv();
      }
      ppuVar7 = ppuStack_130;
      if (ppuStack_130 != (undefined8 **)0x0) {
        ppuVar3 = ppuStack_130 + 1;
        do {
          puVar8 = *ppuVar3;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(ppuVar3,0x10);
          if (bVar5) {
            *ppuVar3 = (undefined8 *)((long)puVar8 + -1);
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (puVar8 == (undefined8 *)0x0) {
          (*(code *)(*ppuStack_130)[2])(ppuStack_130);
          __ZNSt3__119__shared_weak_count14__release_weakEv();
          ppuVar6 = ppuVar7;
        }
      }
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return ppuVar6;
  }
  ___stack_chk_fail();
  FUN_10a4ef8a4(auStack_140);
  if (cStack_149 < '\0') {
    __ZdlPv(appuStack_160[0]);
  }
  __Unwind_Resume();
  lStack_198 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if (((ulong)ppuVar6[0x20] & 1) == 0) {
    auStack_2a0[0] = *param_2;
    ppuStack_290 = *(undefined8 ***)(param_2 + 4);
    uStack_298 = *(undefined8 *)(param_2 + 2);
    if (*(long *)(param_2 + 4) != 0) {
      plVar1 = (long *)(*(long *)(param_2 + 4) + 8);
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar5) {
          *plVar1 = *plVar1 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
    uStack_280 = uStack_280 & 0xffffffffffffff00;
    uStack_1f0 = (char)param_2[0x2c] == '\x01';
    if ((bool)uStack_1f0) {
      uStack_278 = *(undefined8 *)(param_2 + 10);
      uStack_280 = *(ulong *)(param_2 + 8);
      uStack_268 = *(undefined8 *)(param_2 + 0xe);
      uStack_270 = *(undefined8 *)(param_2 + 0xc);
      uStack_258 = *(undefined8 *)(param_2 + 0x12);
      uStack_260 = *(undefined8 *)(param_2 + 0x10);
      uStack_250 = *(undefined8 *)(param_2 + 0x14);
      uStack_218 = *(undefined8 *)(param_2 + 0x22);
      uStack_220 = *(undefined8 *)(param_2 + 0x20);
      uStack_208 = *(undefined8 *)(param_2 + 0x26);
      uStack_210 = *(undefined8 *)(param_2 + 0x24);
      uStack_200 = *(undefined8 *)(param_2 + 0x28);
      uStack_238 = *(undefined8 *)(param_2 + 0x1a);
      uStack_240 = *(undefined8 *)(param_2 + 0x18);
      uStack_228 = *(undefined8 *)(param_2 + 0x1e);
      uStack_230 = *(undefined8 *)(param_2 + 0x1c);
    }
    uStack_1e0 = *(undefined8 *)(param_2 + 0x30);
    uStack_1d8 = (undefined4)*(undefined8 *)(param_2 + 0x32);
    uStack_1cc = *(undefined8 *)(param_2 + 0x35);
    uStack_1d4 = (undefined4)*(undefined8 *)(param_2 + 0x33);
    uStack_1d0 = (undefined4)((ulong)*(undefined8 *)(param_2 + 0x33) >> 0x20);
    FUN_10a1ccb30(appuStack_1c0,param_2 + 0x38);
    FUN_10a7d691c(ppuVar6,auStack_2a0);
    if ((cStack_1a8 == '\x01') && (cStack_1a9 < '\0')) {
      __ZdlPv();
      ppuVar6 = appuStack_1c0[0];
    }
    ppuVar7 = ppuStack_290;
    if (ppuStack_290 != (undefined8 **)0x0) {
      ppuVar3 = ppuStack_290 + 1;
      do {
        puVar8 = *ppuVar3;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(ppuVar3,0x10);
        if (bVar5) {
          *ppuVar3 = (undefined8 *)((long)puVar8 + -1);
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (puVar8 == (undefined8 *)0x0) {
        (*(code *)(*ppuStack_290)[2])(ppuStack_290);
        __ZNSt3__119__shared_weak_count14__release_weakEv();
        ppuVar6 = ppuVar7;
      }
    }
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_198) {
      return ppuVar6;
    }
  }
  else if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_198) {
    if ((char)param_2[0x2c] == '\x01') {
      FUN_10a7d299c(ppuVar6 + 4,param_2 + 8);
    }
    if ((char)param_2[0x3e] == '\x01') {
      func_0x00010a1cca60(ppuVar6 + 0x1c,param_2 + 0x38);
    }
    *(uint *)ppuVar6 = *param_2;
    ppuVar7 = ppuVar6 + 1;
    FUN_10a52a0d0(ppuVar7,param_2 + 2);
    *(uint *)(ppuVar6 + 0x18) = param_2[0x30];
    ppuVar6[0x19] = *(undefined8 **)(param_2 + 0x32);
    *(byte *)(ppuVar6 + 0x1a) = *(byte *)(ppuVar6 + 0x1a) | (byte)param_2[0x34];
    *(byte *)((long)ppuVar6 + 0xd1) =
         *(byte *)((long)ppuVar6 + 0xd1) | *(byte *)((long)param_2 + 0xd1);
    uVar9 = NEON_smax(*(undefined8 *)((long)ppuVar6 + 0xd4),*(undefined8 *)(param_2 + 0x35),4);
    *(undefined8 *)((long)ppuVar6 + 0xd4) = uVar9;
    return ppuVar7;
  }
  ___stack_chk_fail();
  FUN_10a7d0748(auStack_2a0);
  __Unwind_Resume();
  if ((*(char *)(ppuVar6 + 0x1f) == '\x01') && (*(char *)((long)ppuVar6 + 0xf7) < '\0')) {
    __ZdlPv(ppuVar6[0x1c]);
  }
  FUN_10a22ffb4(ppuVar6 + 1);
  return ppuVar6;
}



/* Entry: 10a7d0794; end: 10a7d0f9b;  */

/* WARNING: Removing unreachable block (ram,0x00010a7d1338) */
/* WARNING: Removing unreachable block (ram,0x00010a7d12f4) */
/* WARNING: Removing unreachable block (ram,0x00010a7d16b8) */
/* WARNING: Type propagation algorithm not settling */

void FUN_10a7d0794(undefined8 *******param_1,undefined8 *******param_2,undefined8 *******param_3,
                  undefined8 *******param_4,undefined8 *******param_5)

{
  uint uVar1;
  undefined8 ******ppppppuVar2;
  ulong *puVar3;
  char cVar4;
  char cVar5;
  bool bVar6;
  undefined8 *****pppppuVar7;
  undefined8 *****pppppuVar8;
  undefined8 *****pppppuVar9;
  undefined8 ******ppppppuVar10;
  code *pcVar11;
  undefined8 *******pppppppuVar12;
  undefined8 *******pppppppuVar13;
  long **pplVar14;
  long *plVar15;
  long *plVar16;
  long *plVar17;
  undefined8 *puVar18;
  undefined8 *puVar19;
  undefined8 ******ppppppuVar20;
  long *extraout_x8;
  undefined1 uVar21;
  undefined8 ****ppppuVar22;
  long lVar23;
  ulong uVar24;
  undefined8 *****pppppuVar25;
  undefined8 uVar26;
  undefined1 uVar27;
  long lVar28;
  undefined8 ******ppppppuVar29;
  undefined8 ******ppppppuVar30;
  float fVar31;
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined8 *****pppppuVar35;
  undefined8 *****pppppuVar36;
  double dVar37;
  undefined8 ******ppppppuStack_240;
  undefined8 ******ppppppuStack_238;
  undefined8 ******ppppppuStack_230;
  undefined8 ******ppppppuStack_220;
  undefined8 ******ppppppuStack_218;
  undefined8 ******ppppppuStack_210;
  undefined8 ******ppppppuStack_200;
  undefined8 ******ppppppuStack_1f8;
  undefined8 ******ppppppuStack_1f0;
  undefined8 ******ppppppuStack_1e8;
  undefined8 auStack_1d8 [2];
  char cStack_1c1;
  long *plStack_1c0;
  long *plStack_1b8;
  long *plStack_1b0;
  long *plStack_1a8;
  long *plStack_1a0;
  long *plStack_198;
  long *plStack_190;
  undefined8 ******ppppppuStack_188;
  undefined8 ******ppppppuStack_180;
  long *plStack_178;
  long *plStack_170;
  long **pplStack_168;
  long *plStack_160;
  long *plStack_158;
  long *plStack_150;
  long *plStack_148;
  undefined8 ******ppppppuStack_e0;
  undefined8 *******apppppppuStack_d8 [2];
  char cStack_c1;
  undefined8 *****pppppuStack_c0;
  undefined8 *****pppppuStack_b8;
  undefined8 *******pppppppuStack_b0;
  undefined8 uStack_a8;
  long lStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined7 uStack_88;
  undefined1 uStack_81;
  undefined7 uStack_80;
  undefined8 ****ppppuStack_79;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  cVar4 = *(char *)((long)param_1 + 0x2ec);
  pppppppuVar13 = param_1;
  if (*(int *)(param_1 + 0x54) == 1) {
    ppppppuVar20 = param_2[0x11];
    if (ppppppuVar20 == (undefined8 ******)0x0) goto LAB_10a7d0ec0;
    if (((*(char *)((long)param_1 + 0x2a4) == '\x01') &&
        (pppppuVar25 = ppppppuVar20[0xe], pppppuVar25 != (undefined8 *****)0x0)) &&
       ((undefined8 ******)ppppppuVar20[0xc] == param_1[0x5e])) {
      *(undefined1 *)((long)param_1 + 0x2a4) = 0;
      pppppuStack_b8 = ppppppuVar20[0xf];
      if (pppppuStack_b8 != (undefined8 *****)0x0) {
        pppppuVar7 = pppppuStack_b8 + 1;
        do {
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(pppppuVar7,0x10);
          if (bVar6) {
            *pppppuVar7 = (undefined8 ****)((long)*pppppuVar7 + 1);
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
      }
      pppppuStack_c0 = pppppuVar25;
      FUN_10a7cfdfc(param_1,&pppppuStack_c0);
      pppppuVar25 = pppppuStack_b8;
      if (pppppuStack_b8 != (undefined8 *****)0x0) {
        pppppuVar7 = pppppuStack_b8 + 1;
        do {
          ppppuVar22 = *pppppuVar7;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(pppppuVar7,0x10);
          if (bVar6) {
            *pppppuVar7 = (undefined8 ****)((long)ppppuVar22 + -1);
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (ppppuVar22 == (undefined8 ****)0x0) {
          (*(code *)(*pppppuStack_b8)[2])(pppppuStack_b8);
          __ZNSt3__119__shared_weak_count14__release_weakEv(pppppuVar25);
        }
      }
      FUN_10a07e58c(param_1[0x4f]);
      ppppppuVar29 = param_1[0x2e];
      pppppppuVar13 = apppppppuStack_d8;
      func_0x000107c2b054(pppppppuVar13,&UNK_10f677e11);
      if (ppppppuVar29 != (undefined8 ******)0x0) {
        pppppppuVar13 = (undefined8 *******)ppppppuVar29[0x11b];
        func_0x000107c2b054(&pppppppuStack_b0,&UNK_10f677e59);
        param_3 = &pppppppuStack_b0;
        FUN_10a76bdb0(pppppppuVar13,apppppppuStack_d8);
        if (lStack_a0 < 0) {
          pppppppuVar13 = pppppppuStack_b0;
          __ZdlPv();
        }
      }
      if (cStack_c1 < '\0') {
        pppppppuVar13 = apppppppuStack_d8[0];
        __ZdlPv();
      }
      __ZNSt3__16chrono12steady_clock3nowEv();
      pppppppuVar12 = pppppppuVar13;
      __ZNSt3__16chrono12steady_clock3nowEv();
      ppppppuVar30 = param_1[0x80];
      ppppppuVar29 = param_1[0x2e];
      param_2 = (undefined8 *******)&UNK_10f677e5f;
      func_0x000107c2b054(&pppppppuStack_b0);
      if (ppppppuVar29 != (undefined8 ******)0x0) {
        param_2 = &pppppppuStack_b0;
        FUN_10a76bf18((double)(((long)pppppppuVar12 - (long)ppppppuVar30) / 1000000),
                      ppppppuVar29[0x11b]);
      }
      if (lStack_a0 < 0) {
        __ZdlPv(pppppppuStack_b0);
      }
      if (param_1[0x7c] == (undefined8 ******)0x0) {
        pppppppuVar13 = (undefined8 *******)param_1[0x4b];
        FUN_10a07e58c();
      }
      else {
        ppppppuVar29 = param_1[0x2e];
        func_0x0001098998d4(&pppppppuStack_b0,&PTR_DAT_110c19ef8);
        func_0x0001098998d4(apppppppuStack_d8,&PTR_s_map_110c19f08);
        param_4 = &pppppppuStack_b0;
        param_5 = apppppppuStack_d8;
        FUN_10a7d0f9c(&ppppppuStack_e0,param_1 + 0x7c,ppppppuVar29,param_1 + 0x5e);
        if ((*(char *)(param_1 + 0x7a) == '\x01') &&
           (ppppppuVar29 = param_1[0x79], ppppppuVar29 != (undefined8 ******)0x0)) {
          ppppppuVar30 = ppppppuVar29 + 1;
          do {
            pppppuVar25 = *ppppppuVar30;
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(ppppppuVar30,0x10);
            if (bVar6) {
              *ppppppuVar30 = (undefined8 *****)((long)pppppuVar25 + -4);
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (((ulong)pppppuVar25 & 0x1fffffffc) == 4) {
            do {
              pppppuVar25 = *ppppppuVar30;
              cVar5 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(ppppppuVar30,0x10);
              if (bVar6) {
                *ppppppuVar30 = (undefined8 *****)((long)pppppuVar25 + -1);
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
            if ((undefined8 *****)((long)pppppuVar25 + -1) == (undefined8 *****)0x0) {
              (*(code *)(*ppppppuVar29)[1])();
            }
          }
        }
        param_1[0x79] = ppppppuStack_e0;
        *(undefined1 *)(param_1 + 0x7a) = 1;
        if (cStack_c1 < '\0') {
          __ZdlPv(apppppppuStack_d8[0]);
        }
        if (lStack_a0 < 0) {
          __ZdlPv(pppppppuStack_b0);
        }
        func_0x00010a59e1e4(param_1 + 0x7c);
        param_1[0x7b] = pppppppuVar13 + 7500000000;
        param_2 = (undefined8 *******)param_1[0x43];
        param_3 = (undefined8 *******)param_1[0x44];
        pppppppuVar13 = param_1 + 0x7e;
        FUN_10a7cf70c();
      }
    }
    *(undefined4 *)(param_1 + 0x89) = *(undefined4 *)((long)ppppppuVar20 + 0xb4);
    ppppppuVar29 = (undefined8 ******)ppppppuVar20[2];
    param_1[0x53] = ppppppuVar29;
    pppppuVar25 = ppppppuVar20[3];
    *(undefined8 ******)((long)param_1 + 0x2b4) = ppppppuVar20[4];
    *(undefined8 ******)((long)param_1 + 0x2ac) = pppppuVar25;
    pppppuVar25 = ppppppuVar20[5];
    pppppuVar7 = ppppppuVar20[6];
    pppppuVar8 = ppppppuVar20[7];
    pppppuVar9 = ppppppuVar20[8];
    pppppuVar36 = ppppppuVar20[10];
    pppppuVar35 = ppppppuVar20[9];
    *(undefined1 *)((long)param_1 + 0x2ec) = *(undefined1 *)(ppppppuVar20 + 0xb);
    *(undefined8 ******)((long)param_1 + 0x2d4) = pppppuVar9;
    *(undefined8 ******)((long)param_1 + 0x2cc) = pppppuVar8;
    *(undefined8 ******)((long)param_1 + 0x2e4) = pppppuVar36;
    *(undefined8 ******)((long)param_1 + 0x2dc) = pppppuVar35;
    *(undefined8 ******)((long)param_1 + 0x2c4) = pppppuVar7;
    *(undefined8 ******)((long)param_1 + 700) = pppppuVar25;
    dVar37 = (double)ppppppuVar29;
    auVar33 = NEON_ucvtf(*(undefined1 (*) [16])(param_1 + 0x76),8);
    auVar32._0_8_ = dVar37 / auVar33._0_8_;
    auVar32._8_8_ = dVar37 / auVar33._8_8_;
    auVar34 = NEON_fmov(0x3ff0000000000000,8);
    auVar33._8_8_ = -(ulong)(auVar34._8_8_ < auVar32._8_8_);
    auVar33._0_8_ = -(ulong)(auVar34._0_8_ < auVar32._0_8_);
    auVar32 = auVar32 ^ (auVar32 ^ auVar34) & auVar33;
    auVar33 = NEON_ext(auVar32,auVar32,8,1);
    param_1[0x88] = auVar33._8_8_;
    param_1[0x87] = auVar33._0_8_;
    *(byte *)((long)param_1 + 0x2a4) = *(byte *)((long)param_1 + 0x2a4) | 1.0 <= auVar32._8_8_;
    if ((((*(byte *)((long)param_1 + 0x3c4) & 1) == 0) && (*(int *)(param_1 + 0x54) == 1)) &&
       (1.0 <= auVar32._0_8_)) {
      pppppppuVar13 = (undefined8 *******)param_1[0x4d];
      FUN_10a07e58c();
      *(undefined1 *)((long)param_1 + 0x3c4) = 1;
    }
    if (*(int *)((long)ppppppuVar20 + 0xc) == 2) {
      ppppppuVar20 = param_1[0x2e];
      param_2 = (undefined8 *******)&UNK_10f677e11;
      pppppppuVar13 = apppppppuStack_d8;
      func_0x000107c2b054();
      if (ppppppuVar20 != (undefined8 ******)0x0) {
        pppppppuVar13 = (undefined8 *******)ppppppuVar20[0x11b];
        func_0x000107c2b054(&pppppppuStack_b0,&UNK_10f677e79);
        param_2 = apppppppuStack_d8;
        param_3 = &pppppppuStack_b0;
        FUN_10a76bdb0();
        if (lStack_a0 < 0) {
          pppppppuVar13 = pppppppuStack_b0;
          __ZdlPv();
        }
      }
      if (cStack_c1 < '\0') {
        __ZdlPv();
        pppppppuVar13 = apppppppuStack_d8[0];
      }
    }
  }
  else if (*(int *)(param_1 + 0x54) == 3) {
    ppppppuVar20 = param_2[0x12];
    if (ppppppuVar20 == (undefined8 ******)0x0) goto LAB_10a7d0ec0;
    *(undefined1 *)(param_1 + 0x60) = *(undefined1 *)(ppppppuVar20 + 0xb);
    pppppuVar25 = ppppppuVar20[1];
    if (pppppuVar25 == ppppppuVar20[2]) {
      uVar21 = 0;
      uVar27 = 0;
    }
    else {
      uVar21 = *(undefined1 *)(pppppuVar25 + 3);
      pppppppuStack_b0 = *(undefined8 ********)((long)pppppuVar25 + 0x19);
      uStack_a8 = *(undefined8 *)((long)pppppuVar25 + 0x21);
      lStack_a0 = *(long *)((long)pppppuVar25 + 0x29);
      uStack_98 = *(undefined8 *)((long)pppppuVar25 + 0x31);
      uStack_90 = *(undefined8 *)((long)pppppuVar25 + 0x39);
      uStack_88 = (undefined7)*(undefined8 *)((long)pppppuVar25 + 0x41);
      ppppuStack_79 = pppppuVar25[10];
      uStack_81 = SUB81(pppppuVar25[9],0);
      uStack_80 = (undefined7)((ulong)pppppuVar25[9] >> 8);
      uVar27 = *(undefined1 *)(pppppuVar25 + 0xb);
    }
    *(undefined1 *)((long)param_1 + 0x2ac) = uVar21;
    *(undefined8 *)((long)param_1 + 0x2b5) = uStack_a8;
    *(undefined8 ********)((long)param_1 + 0x2ad) = pppppppuStack_b0;
    *(undefined8 *)((long)param_1 + 0x2c5) = uStack_98;
    *(long *)((long)param_1 + 0x2bd) = lStack_a0;
    *(ulong *)((long)param_1 + 0x2d5) = CONCAT17(uStack_81,uStack_88);
    *(undefined8 *)((long)param_1 + 0x2cd) = uStack_90;
    *(undefined8 *****)((long)param_1 + 0x2e4) = ppppuStack_79;
    *(ulong *)((long)param_1 + 0x2dc) = CONCAT71(uStack_80,uStack_81);
    *(undefined1 *)((long)param_1 + 0x2ec) = uVar27;
    pppppppuVar13 = param_1 + 0x62;
    param_2 = (undefined8 *******)(ppppppuVar20 + 0xc);
    FUN_10a7d299c();
  }
  if (cVar4 != *(char *)((long)param_1 + 0x2ec)) {
    lVar23 = 0x248;
    if (cVar4 == '\0') {
      lVar23 = 0x228;
    }
    pppppppuVar13 = *(undefined8 ********)((long)param_1 + lVar23);
    FUN_10a07e58c();
  }
  ppppppuVar20 = param_1[0x53];
  if (param_1[0x86] != ppppppuVar20) {
    if (*(int *)(param_1 + 0x54) == 1) {
      ppppppuVar20 = param_1[0x2e];
      param_2 = (undefined8 *******)&UNK_10f677e2f;
      pppppppuVar13 = &pppppppuStack_b0;
      func_0x000107c2b054();
      if (ppppppuVar20 != (undefined8 ******)0x0) {
        fVar31 = 1.0;
        if ((float)param_1[0x53] / (float)param_1[0x77] <= 1.0) {
          fVar31 = (float)param_1[0x53] / (float)param_1[0x77];
        }
        pppppppuVar13 = (undefined8 *******)ppppppuVar20[0x11b];
        param_2 = &pppppppuStack_b0;
        FUN_10a76bf18((double)fVar31);
      }
      if (lStack_a0 < 0) {
        pppppppuVar13 = pppppppuStack_b0;
        __ZdlPv();
      }
      ppppppuVar20 = param_1[0x53];
    }
    param_1[0x86] = ppppppuVar20;
  }
  if (*(char *)(param_1 + 0x60) == '\x01') {
    ppppppuVar20 = param_1[0x2e];
    param_1[0x83] =
         (undefined8 ******)((double)param_1[0x83] + (double)ppppppuVar20[0x10a][2] * 1000.0);
    func_0x000107c2b054(&pppppppuStack_b0,&UNK_10f677e8e);
    pppppppuVar13 = (undefined8 *******)ppppppuVar20[0x11b];
    param_2 = &pppppppuStack_b0;
    FUN_10a76bf18(param_1[0x83]);
    if (lStack_a0 < 0) {
      pppppppuVar13 = pppppppuStack_b0;
      __ZdlPv();
    }
  }
  if (*(int *)(param_1 + 0x54) == 3) {
    if (*(char *)((long)param_1 + 0x2ec) == '\x01') {
      ppppppuVar20 = param_1[0x2e];
      param_1[0x82] =
           (undefined8 ******)((double)param_1[0x82] + (double)ppppppuVar20[0x10a][2] * 1000.0);
      func_0x000107c2b054(&pppppppuStack_b0,&UNK_10f677eb0);
      pppppppuVar13 = (undefined8 *******)ppppppuVar20[0x11b];
      param_2 = &pppppppuStack_b0;
      FUN_10a76bf18(param_1[0x82]);
      if (lStack_a0 < 0) {
        pppppppuVar13 = pppppppuStack_b0;
        __ZdlPv();
      }
      if (*(int *)(param_1 + 0x54) != 3) goto LAB_10a7d0e54;
    }
    if ((((ulong)param_1[0x84] & 1) == 0) && (*(char *)((long)param_1 + 0x2ec) == '\x01')) {
      __ZNSt3__16chrono12steady_clock3nowEv();
      dVar37 = (double)(((long)pppppppuVar13 - (long)param_1[0x81]) / 1000000);
      ppppppuVar20 = param_1[0x2e];
      if (*(int *)(param_1 + 0x55) == 1) {
        param_2 = (undefined8 *******)&UNK_10f677eef;
        pppppppuVar13 = &pppppppuStack_b0;
        func_0x000107c2b054();
        if (ppppppuVar20 != (undefined8 ******)0x0) {
          pppppppuVar13 = (undefined8 *******)ppppppuVar20[0x11b];
          param_2 = &pppppppuStack_b0;
          FUN_10a76bf18(dVar37);
        }
      }
      else if (*(int *)(param_1 + 0x55) == 2) {
        param_2 = (undefined8 *******)&UNK_10f677ecc;
        pppppppuVar13 = &pppppppuStack_b0;
        func_0x000107c2b054();
        if (ppppppuVar20 != (undefined8 ******)0x0) {
          pppppppuVar13 = (undefined8 *******)ppppppuVar20[0x11b];
          param_2 = &pppppppuStack_b0;
          FUN_10a76bf18(dVar37);
        }
      }
      else {
        param_2 = (undefined8 *******)&UNK_10f677f13;
        pppppppuVar13 = &pppppppuStack_b0;
        func_0x000107c2b054();
        if (ppppppuVar20 != (undefined8 ******)0x0) {
          pppppppuVar13 = (undefined8 *******)ppppppuVar20[0x11b];
          param_2 = &pppppppuStack_b0;
          FUN_10a76bf18(dVar37);
        }
      }
      if (lStack_a0 < 0) {
        pppppppuVar13 = pppppppuStack_b0;
        __ZdlPv();
      }
      *(undefined1 *)(param_1 + 0x84) = 1;
    }
  }
LAB_10a7d0e54:
  if (*(char *)(param_1 + 0x60) == '\x01') {
    if (((ulong)param_1[0x85] & 1) == 0) {
      ppppppuVar20 = param_1[0x2e];
      param_2 = (undefined8 *******)&UNK_10f677f35;
      pppppppuVar13 = &pppppppuStack_b0;
      func_0x000107c2b054();
      uVar1 = *(int *)((long)param_1 + 0x424) + 1;
      param_3 = (undefined8 *******)(ulong)uVar1;
      *(uint *)((long)param_1 + 0x424) = uVar1;
      if (ppppppuVar20 != (undefined8 ******)0x0) {
        pppppppuVar13 = (undefined8 *******)ppppppuVar20[0x11b];
        param_2 = &pppppppuStack_b0;
        FUN_10a76bd40();
      }
      if (lStack_a0 < 0) {
        pppppppuVar13 = pppppppuStack_b0;
        __ZdlPv();
      }
      uVar21 = *(undefined1 *)(param_1 + 0x60);
    }
    else {
      uVar21 = 1;
    }
  }
  else {
    uVar21 = 0;
  }
  *(undefined1 *)(param_1 + 0x85) = uVar21;
  param_1 = pppppppuVar13;
LAB_10a7d0ec0:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  if (lStack_a0 < 0) {
    __ZdlPv(pppppppuStack_b0);
  }
  __Unwind_Resume();
  ppppppuStack_1f0 = *param_1;
  ppppppuStack_1e8 = param_1[1];
  if (param_1[1] != (undefined8 ******)0x0) {
    ppppppuVar20 = param_1[1] + 1;
    do {
      cVar4 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(ppppppuVar20,0x10);
      if (bVar6) {
        *ppppppuVar20 = (undefined8 *****)((long)*ppppppuVar20 + 1);
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  ppppppuVar20 = param_3[1];
  ppppppuStack_200 = *param_3;
  ppppppuStack_1f8 = param_3[1];
  if (ppppppuVar20 != (undefined8 ******)0x0) {
    ppppppuVar29 = ppppppuVar20 + 1;
    do {
      cVar4 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(ppppppuVar29,0x10);
      if (bVar6) {
        *ppppppuVar29 = (undefined8 *****)((long)*ppppppuVar29 + 1);
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  if (*(char *)((long)param_4 + 0x17) < '\0') {
    func_0x000107c3192c(&ppppppuStack_220,*param_4,param_4[1]);
  }
  else {
    ppppppuStack_220 = *param_4;
    ppppppuStack_218 = param_4[1];
    ppppppuStack_210 = param_4[2];
  }
  if (*(char *)((long)param_5 + 0x17) < '\0') {
    func_0x000107c3192c(&ppppppuStack_240,*param_5,param_5[1]);
  }
  else {
    ppppppuStack_240 = *param_5;
    ppppppuStack_238 = param_5[1];
    ppppppuStack_230 = param_5[2];
  }
  pplVar14 = &plStack_150;
  FUN_10a7d22ac();
  __ZNSt3__16chrono12steady_clock3nowEv();
  FUN_10a725afc(&plStack_190,param_2 + 3);
  ppppppuVar29 = ppppppuStack_188;
  plVar17 = plStack_190;
  if (ppppppuStack_188 != (undefined8 ******)0x0) {
    plVar15 = (long *)(ppppppuStack_188 + 2);
    do {
      cVar4 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar15,0x10);
      if (bVar6) {
        *plVar15 = *plVar15 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    plVar15 = (long *)(ppppppuStack_188 + 1);
    do {
      lVar23 = *plVar15;
      cVar4 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar15,0x10);
      if (bVar6) {
        *plVar15 = lVar23 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar23 == 0) {
      (**(code **)((long)*ppppppuStack_188 + 0x10))(ppppppuStack_188);
      __ZNSt3__119__shared_weak_count14__release_weakEv(ppppppuStack_188);
    }
  }
  ppppppuVar10 = ppppppuStack_1f8;
  ppppppuVar30 = ppppppuStack_200;
  plStack_190 = plStack_148;
  if (plStack_148 != (long *)0x0) {
    plVar15 = plStack_148 + 1;
    do {
      cVar4 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar15,0x10);
      if (bVar6) {
        *plVar15 = *plVar15 + 0x200000000;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  ppppppuStack_188 = ppppppuStack_200;
  ppppppuStack_180 = ppppppuStack_1f8;
  if (ppppppuStack_1f8 != (undefined8 ******)0x0) {
    ppppppuVar2 = ppppppuStack_1f8 + 1;
    do {
      cVar4 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(ppppppuVar2,0x10);
      if (bVar6) {
        *ppppppuVar2 = (undefined8 *****)((long)*ppppppuVar2 + 1);
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  plStack_178 = plVar17;
  plStack_170 = (long *)ppppppuVar29;
  if (ppppppuVar29 != (undefined8 ******)0x0) {
    plVar15 = (long *)(ppppppuVar29 + 2);
    do {
      cVar4 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar15,0x10);
      if (bVar6) {
        *plVar15 = *plVar15 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  plVar15 = (long *)0x60;
  pplStack_168 = pplVar14;
  __Znwm();
  plVar15[1] = 0;
  plVar15[2] = 0;
  *plVar15 = (long)&PTR_DAT_110b9fc20;
  plStack_160 = plVar15 + 3;
  *plStack_160 = (long)FUN_10a7d70f4;
  plVar15[4] = (long)&PTR_FUN_110c1b4f8;
  plVar15[5] = (long)plStack_190;
  plVar15[6] = (long)ppppppuVar30;
  plVar15[7] = (long)ppppppuVar10;
  plVar15[8] = (long)plVar17;
  plVar15[9] = (long)ppppppuVar29;
  plVar15[10] = (long)pplVar14;
  *(undefined1 *)(plVar15 + 0xb) = 1;
  plStack_190 = plStack_148;
  if (plStack_148 != (long *)0x0) {
    plVar16 = plStack_148 + 1;
    do {
      cVar4 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar16,0x10);
      if (bVar6) {
        *plVar16 = *plVar16 + 0x200000000;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  ppppppuStack_188 = (undefined8 ******)plVar17;
  ppppppuStack_180 = ppppppuVar29;
  if (ppppppuVar29 != (undefined8 ******)0x0) {
    plVar16 = (long *)(ppppppuVar29 + 2);
    do {
      cVar4 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar16,0x10);
      if (bVar6) {
        *plVar16 = *plVar16 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  plVar16 = (long *)0x60;
  plStack_158 = plVar15;
  __Znwm();
  plVar16[1] = 0;
  plVar16[2] = 0;
  plStack_1a0 = plVar16 + 3;
  *plStack_1a0 = (long)FUN_10a7d7450;
  *plVar16 = (long)&PTR_FUN_110c14d30;
  plVar16[4] = (long)&PTR_FUN_110c1b518;
  plVar16[5] = (long)plStack_190;
  plVar16[6] = (long)plVar17;
  plVar16[7] = (long)ppppppuVar29;
  *(undefined1 *)(plVar16 + 0xb) = 1;
  plStack_198 = plVar16;
  FUN_10a7cfeec(&plStack_190,param_2,&ppppppuStack_200);
  FUN_10a2ea178(&plStack_1b0,plStack_190);
  ppppppuVar30 = ppppppuStack_188;
  if (ppppppuStack_188 != (undefined8 ******)0x0) {
    plVar17 = (long *)(ppppppuStack_188 + 1);
    do {
      lVar23 = *plVar17;
      cVar4 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar17,0x10);
      if (bVar6) {
        *plVar17 = lVar23 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar23 == 0) {
      (**(code **)((long)*ppppppuStack_188 + 0x10))(ppppppuStack_188);
      __ZNSt3__119__shared_weak_count14__release_weakEv(ppppppuVar30);
    }
  }
  plVar17 = (long *)0x50;
  __Znwm();
  plVar17[2] = 0;
  plVar17[1] = 0;
  *plVar17 = (long)&PTR_FUN_110c17118;
  plVar17[4] = 0;
  plVar17[5] = 0;
  plStack_1c0 = plVar17 + 3;
  *plStack_1c0 = (long)&PTR_FUN_110c256d8;
  plVar17[7] = 0;
  plVar17[9] = 0;
  plVar17[8] = 0;
  plVar17[6] = 0x100000002;
  plVar15 = (long *)0x20;
  plStack_1b8 = plVar17;
  __Znwm();
  ppppppuStack_180 = (undefined8 ******)0x8000000000000020;
  ppppppuStack_188 = (undefined8 ******)0x18;
  plVar15[1] = 0x656d656870655f64;
  *plVar15 = 0x657461636f6c6f63;
  plVar15[2] = 0x7370616d5f6c6172;
  *(undefined1 *)(plVar15 + 3) = 0;
  plStack_190 = plVar15;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_(plVar17 + 7,&plStack_190)
  ;
  func_0x000107c2b054(auStack_1d8,&UNK_10f677e11);
  ppppppuVar30 = param_2[0x11b];
  func_0x000107c2b054(&plStack_190,&UNK_10f677f86);
  FUN_10a76bdb0(ppppppuVar30,auStack_1d8,&plStack_190);
  if (cStack_1c1 < '\0') {
    __ZdlPv(auStack_1d8[0]);
  }
  if ((bRam000000011330a9e8 >> 2 & 1) != 0) {
    func_0x00010ae06f08(1,4,&UNK_10f677f95,&UNK_10f677fd5,0xbf,&UNK_10f678086);
  }
  ppppppuStack_188 = (undefined8 ******)plStack_1a8;
  plStack_190 = plStack_1b0;
  if (plStack_1a8 != (long *)0x0) {
    plVar17 = plStack_1a8 + 1;
    do {
      cVar4 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar17,0x10);
      if (bVar6) {
        *plVar17 = *plVar17 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  FUN_10a870f7c(ppppppuStack_1f0,&ppppppuStack_220,&ppppppuStack_240,&plStack_190,&plStack_1c0,
                &plStack_160,&plStack_1a0);
  ppppppuVar30 = ppppppuStack_188;
  if (ppppppuStack_188 != (undefined8 ******)0x0) {
    plVar17 = (long *)(ppppppuStack_188 + 1);
    do {
      lVar23 = *plVar17;
      cVar4 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar17,0x10);
      if (bVar6) {
        *plVar17 = lVar23 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar23 == 0) {
      (**(code **)((long)*ppppppuStack_188 + 0x10))(ppppppuStack_188);
      __ZNSt3__119__shared_weak_count14__release_weakEv(ppppppuVar30);
    }
  }
  plVar15 = plStack_150;
  plVar17 = plStack_1b8;
  if (plStack_150 != (long *)0x0) {
    plVar16 = plStack_150 + 1;
    do {
      cVar4 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar16,0x10);
      if (bVar6) {
        *plVar16 = *plVar16 + 4;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  if (plStack_1b8 != (long *)0x0) {
    plVar16 = plStack_1b8 + 1;
    do {
      lVar23 = *plVar16;
      cVar4 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar16,0x10);
      if (bVar6) {
        *plVar16 = lVar23 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar23 == 0) {
      (**(code **)(*plStack_1b8 + 0x10))(plStack_1b8);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar17);
    }
  }
  if (plStack_1a8 != (long *)0x0) {
    plVar17 = plStack_1a8 + 1;
    do {
      lVar23 = *plVar17;
      cVar4 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar17,0x10);
      if (bVar6) {
        *plVar17 = lVar23 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar23 == 0) {
      (**(code **)(*plStack_1a8 + 0x10))(plStack_1a8);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_1a8);
    }
  }
  plVar17 = plStack_198;
  if (plStack_198 != (long *)0x0) {
    plVar16 = plStack_198 + 1;
    do {
      lVar23 = *plVar16;
      cVar4 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar16,0x10);
      if (bVar6) {
        *plVar16 = lVar23 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar23 == 0) {
      (**(code **)(*plStack_198 + 0x10))(plStack_198);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar17);
    }
  }
  plVar17 = plStack_158;
  if (plStack_158 != (long *)0x0) {
    plVar16 = plStack_158 + 1;
    do {
      lVar23 = *plVar16;
      cVar4 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar16,0x10);
      if (bVar6) {
        *plVar16 = lVar23 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar23 == 0) {
      (**(code **)(*plStack_158 + 0x10))(plStack_158);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar17);
    }
  }
  if (ppppppuVar29 != (undefined8 ******)0x0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv(ppppppuVar29);
  }
  if (plStack_148 != (long *)0x0) {
    func_0x0001092b4274(&plStack_148);
  }
  if (plStack_150 != (long *)0x0) {
    puVar3 = (ulong *)(plStack_150 + 1);
    do {
      uVar24 = *puVar3;
      cVar4 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(puVar3,0x10);
      if (bVar6) {
        *puVar3 = uVar24 - 4;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if ((uVar24 & 0x1fffffffc) == 4) {
      do {
        uVar24 = *puVar3;
        cVar4 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(puVar3,0x10);
        if (bVar6) {
          *puVar3 = uVar24 - 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (uVar24 - 1 == 0) {
        (**(code **)(*plStack_150 + 8))();
      }
    }
  }
  if ((long)ppppppuStack_230 < 0) {
    __ZdlPv(ppppppuStack_240);
  }
  if ((long)ppppppuStack_210 < 0) {
    __ZdlPv(ppppppuStack_220);
  }
  if (ppppppuVar20 != (undefined8 ******)0x0) {
    ppppppuVar29 = ppppppuVar20 + 1;
    do {
      pppppuVar25 = *ppppppuVar29;
      cVar4 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(ppppppuVar29,0x10);
      if (bVar6) {
        *ppppppuVar29 = (undefined8 *****)((long)pppppuVar25 + -1);
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (pppppuVar25 == (undefined8 *****)0x0) {
      (*(code *)(*ppppppuVar20)[2])(ppppppuVar20);
      __ZNSt3__119__shared_weak_count14__release_weakEv(ppppppuVar20);
    }
  }
  ppppppuVar20 = ppppppuStack_1e8;
  if (ppppppuStack_1e8 != (undefined8 ******)0x0) {
    ppppppuVar29 = ppppppuStack_1e8 + 1;
    do {
      pppppuVar25 = *ppppppuVar29;
      cVar4 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(ppppppuVar29,0x10);
      if (bVar6) {
        *ppppppuVar29 = (undefined8 *****)((long)pppppuVar25 + -1);
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (pppppuVar25 == (undefined8 *****)0x0) {
      (*(code *)(*ppppppuStack_1e8)[2])(ppppppuStack_1e8);
      __ZNSt3__119__shared_weak_count14__release_weakEv(ppppppuVar20);
    }
  }
  pppppuVar25 = param_2[300][0x75];
  puVar18 = (undefined8 *)0x70;
  __Znwm();
  *puVar18 = FUN_10a7d8434;
  puVar18[1] = FUN_10a7d8720;
  FUN_10a7d320c(puVar18 + 2);
  lVar23 = puVar18[7];
  if (lVar23 != 0) {
    plVar17 = (long *)(lVar23 + 8);
    do {
      cVar4 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar17,0x10);
      if (bVar6) {
        *plVar17 = *plVar17 + 4;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  *extraout_x8 = lVar23;
  puVar18[0xb] = plVar15;
  puVar18[9] = pppppuVar25;
  *(undefined1 *)(puVar18 + 10) = 0;
  *(undefined1 *)(puVar18 + 0xd) = 0;
  puVar19 = puVar18 + 9;
  FUN_10a7d2d14(puVar19,puVar18);
  if (((ulong)puVar19 & 1) == 0) {
    FUN_10a7d338c(puVar18 + 0xc,puVar18 + 0xb);
    puVar18[9] = puVar18[0xc];
    plVar17 = (long *)(puVar18[0xc] + 8);
    do {
      cVar4 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar17,0x10);
      if (bVar6) {
        *plVar17 = *plVar17 + 4;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (((uint)*(undefined8 *)(puVar18[9] + 0x10) >> 1 & 1) == 0) {
      *(undefined1 *)(puVar18 + 0xd) = 1;
      lVar23 = puVar18[9];
      plVar17 = (long *)(lVar23 + 0x10);
      uVar26 = puVar18[3];
      do {
        lVar28 = *plVar17;
        if (lVar28 == 0) {
          cVar4 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar17,0x10);
          if (bVar6) {
            *plVar17 = 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
          if (cVar4 == '\0') {
            plStack_190 = (long *)0x0;
            ppppppuStack_188 = (undefined8 ******)puVar18;
            ppppppuStack_180 = (undefined8 ******)uVar26;
            func_0x000109d1b588(lVar23 + 0x18,&plStack_190);
            *(undefined8 *)(lVar23 + 0x10) = 0;
            return;
          }
        }
        else {
          ClearExclusiveLocal();
        }
      } while (((uint)lVar28 >> 1 & 1) == 0);
    }
    lVar23 = puVar18[9];
    if (((uint)*(undefined8 *)(puVar18[9] + 0x10) >> 5 & 1) == 0) {
      if ((*(byte *)(lVar23 + 0xa8) & 1) != 0) {
        FUN_10a7d2db0(puVar18 + 2,lVar23 + 0x98);
        plVar17 = (long *)puVar18[9];
        if (plVar17 != (long *)0x0) {
          puVar3 = (ulong *)(plVar17 + 1);
          do {
            uVar24 = *puVar3;
            cVar4 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(puVar3,0x10);
            if (bVar6) {
              *puVar3 = uVar24 - 4;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if ((uVar24 & 0x1fffffffc) == 4) {
            do {
              uVar24 = *puVar3;
              cVar4 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(puVar3,0x10);
              if (bVar6) {
                *puVar3 = uVar24 - 1;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
            if (uVar24 - 1 == 0) {
              (**(code **)(*plVar17 + 8))();
            }
          }
        }
        plVar17 = (long *)puVar18[0xc];
        if (plVar17 != (long *)0x0) {
          puVar3 = (ulong *)(plVar17 + 1);
          do {
            uVar24 = *puVar3;
            cVar4 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(puVar3,0x10);
            if (bVar6) {
              *puVar3 = uVar24 - 4;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if ((uVar24 & 0x1fffffffc) == 4) {
            do {
              uVar24 = *puVar3;
              cVar4 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(puVar3,0x10);
              if (bVar6) {
                *puVar3 = uVar24 - 1;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
            if (uVar24 - 1 == 0) {
              (**(code **)(*plVar17 + 8))();
            }
          }
        }
        plVar17 = (long *)puVar18[0xb];
        if (plVar17 != (long *)0x0) {
          puVar3 = (ulong *)(plVar17 + 1);
          do {
            uVar24 = *puVar3;
            cVar4 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(puVar3,0x10);
            if (bVar6) {
              *puVar3 = uVar24 - 4;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if ((uVar24 & 0x1fffffffc) == 4) {
            do {
              uVar24 = *puVar3;
              cVar4 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(puVar3,0x10);
              if (bVar6) {
                *puVar3 = uVar24 - 1;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
            if (uVar24 - 1 == 0) {
              (**(code **)(*plVar17 + 8))();
            }
          }
        }
        func_0x000109d1a1d0(puVar18 + 2);
        __ZdlPv(puVar18);
        return;
      }
    }
    else {
      func_0x0001092af97c(lVar23 + 0x90);
    }
                    /* WARNING: Does not return */
    pcVar11 = (code *)SoftwareBreakpoint(1,0x10a7d182c);
    (*pcVar11)();
  }
  return;
}



/* Entry: 10a7d0f9c; end: 10a7d1abb;  */

/* WARNING: Removing unreachable block (ram,0x00010a7d1338) */
/* WARNING: Removing unreachable block (ram,0x00010a7d12f4) */
/* WARNING: Removing unreachable block (ram,0x00010a7d16b8) */

void FUN_10a7d0f9c(long *param_1,undefined8 *param_2,long param_3,long *param_4,undefined8 *param_5,
                  undefined8 *param_6)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  code *pcVar5;
  long **pplVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  long lVar12;
  ulong uVar13;
  long lVar14;
  long *plVar15;
  undefined8 uVar16;
  undefined8 uStack_160;
  undefined8 uStack_158;
  long lStack_150;
  undefined8 uStack_140;
  undefined8 uStack_138;
  long lStack_130;
  long lStack_120;
  long lStack_118;
  undefined8 uStack_110;
  long *plStack_108;
  undefined8 auStack_f8 [2];
  char cStack_e1;
  long *plStack_e0;
  long *plStack_d8;
  long *plStack_d0;
  long *plStack_c8;
  long *plStack_c0;
  long *plStack_b8;
  long *plStack_b0;
  long *plStack_a8;
  long *plStack_a0;
  long *plStack_98;
  long *plStack_90;
  long **pplStack_88;
  long *plStack_80;
  long *plStack_78;
  long *plStack_70;
  long *plStack_68;
  
  plStack_108 = (long *)param_2[1];
  uStack_110 = *param_2;
  if (param_2[1] != 0) {
    plVar15 = (long *)(param_2[1] + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar15,0x10);
      if (bVar3) {
        *plVar15 = *plVar15 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  plVar15 = (long *)param_4[1];
  lStack_118 = param_4[1];
  lStack_120 = *param_4;
  if (plVar15 != (long *)0x0) {
    plVar9 = plVar15 + 1;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar3) {
        *plVar9 = *plVar9 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  if (*(char *)((long)param_5 + 0x17) < '\0') {
    func_0x000107c3192c(&uStack_140,*param_5,param_5[1]);
  }
  else {
    uStack_138 = param_5[1];
    uStack_140 = *param_5;
    lStack_130 = param_5[2];
  }
  if (*(char *)((long)param_6 + 0x17) < '\0') {
    func_0x000107c3192c(&uStack_160,*param_6,param_6[1]);
  }
  else {
    uStack_158 = param_6[1];
    uStack_160 = *param_6;
    lStack_150 = param_6[2];
  }
  pplVar6 = &plStack_70;
  FUN_10a7d22ac();
  __ZNSt3__16chrono12steady_clock3nowEv();
  FUN_10a725afc(&plStack_b0,param_3 + 0x18);
  plVar4 = plStack_a8;
  plVar9 = plStack_b0;
  if (plStack_a8 != (long *)0x0) {
    plVar7 = plStack_a8 + 2;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar3) {
        *plVar7 = *plVar7 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    plVar7 = plStack_a8 + 1;
    do {
      lVar12 = *plVar7;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar3) {
        *plVar7 = lVar12 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar12 == 0) {
      (**(code **)(*plStack_a8 + 0x10))(plStack_a8);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_a8);
    }
  }
  lVar14 = lStack_118;
  lVar12 = lStack_120;
  plStack_b0 = plStack_68;
  if (plStack_68 != (long *)0x0) {
    plVar7 = plStack_68 + 1;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar3) {
        *plVar7 = *plVar7 + 0x200000000;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  plStack_a8 = (long *)lStack_120;
  plStack_a0 = (long *)lStack_118;
  if (lStack_118 != 0) {
    plVar7 = (long *)(lStack_118 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar3) {
        *plVar7 = *plVar7 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  plStack_98 = plVar9;
  plStack_90 = plVar4;
  if (plVar4 != (long *)0x0) {
    plVar7 = plVar4 + 2;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar3) {
        *plVar7 = *plVar7 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  plVar7 = (long *)0x60;
  pplStack_88 = pplVar6;
  __Znwm();
  plVar7[1] = 0;
  plVar7[2] = 0;
  *plVar7 = (long)&PTR_DAT_110b9fc20;
  plStack_80 = plVar7 + 3;
  *plStack_80 = (long)FUN_10a7d70f4;
  plVar7[4] = (long)&PTR_FUN_110c1b4f8;
  plVar7[5] = (long)plStack_b0;
  plVar7[6] = lVar12;
  plVar7[7] = lVar14;
  plVar7[8] = (long)plVar9;
  plVar7[9] = (long)plVar4;
  plVar7[10] = (long)pplVar6;
  *(undefined1 *)(plVar7 + 0xb) = 1;
  plStack_b0 = plStack_68;
  if (plStack_68 != (long *)0x0) {
    plVar8 = plStack_68 + 1;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar3) {
        *plVar8 = *plVar8 + 0x200000000;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  plStack_a8 = plVar9;
  plStack_a0 = plVar4;
  if (plVar4 != (long *)0x0) {
    plVar8 = plVar4 + 2;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar3) {
        *plVar8 = *plVar8 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  plVar8 = (long *)0x60;
  plStack_78 = plVar7;
  __Znwm();
  plVar8[1] = 0;
  plVar8[2] = 0;
  plStack_c0 = plVar8 + 3;
  *plStack_c0 = (long)FUN_10a7d7450;
  *plVar8 = (long)&PTR_FUN_110c14d30;
  plVar8[4] = (long)&PTR_FUN_110c1b518;
  plVar8[5] = (long)plStack_b0;
  plVar8[6] = (long)plVar9;
  plVar8[7] = (long)plVar4;
  *(undefined1 *)(plVar8 + 0xb) = 1;
  plStack_b8 = plVar8;
  FUN_10a7cfeec(&plStack_b0,param_3,&lStack_120);
  FUN_10a2ea178(&plStack_d0,plStack_b0);
  plVar9 = plStack_a8;
  if (plStack_a8 != (long *)0x0) {
    plVar7 = plStack_a8 + 1;
    do {
      lVar12 = *plVar7;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar3) {
        *plVar7 = lVar12 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar12 == 0) {
      (**(code **)(*plStack_a8 + 0x10))(plStack_a8);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar9);
    }
  }
  plVar9 = (long *)0x50;
  __Znwm();
  plVar9[2] = 0;
  plVar9[1] = 0;
  *plVar9 = (long)&PTR_FUN_110c17118;
  plVar9[4] = 0;
  plVar9[5] = 0;
  plStack_e0 = plVar9 + 3;
  *plStack_e0 = (long)&PTR_FUN_110c256d8;
  plVar9[7] = 0;
  plVar9[9] = 0;
  plVar9[8] = 0;
  plVar9[6] = 0x100000002;
  plVar7 = (long *)0x20;
  plStack_d8 = plVar9;
  __Znwm();
  plStack_a0 = (long *)0x8000000000000020;
  plStack_a8 = (long *)0x18;
  plVar7[1] = 0x656d656870655f64;
  *plVar7 = 0x657461636f6c6f63;
  plVar7[2] = 0x7370616d5f6c6172;
  *(undefined1 *)(plVar7 + 3) = 0;
  plStack_b0 = plVar7;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_(plVar9 + 7,&plStack_b0);
  func_0x000107c2b054(auStack_f8,&UNK_10f677e11);
  uVar16 = *(undefined8 *)(param_3 + 0x8d8);
  func_0x000107c2b054(&plStack_b0,&UNK_10f677f86);
  FUN_10a76bdb0(uVar16,auStack_f8,&plStack_b0);
  if (cStack_e1 < '\0') {
    __ZdlPv(auStack_f8[0]);
  }
  if ((bRam000000011330a9e8 >> 2 & 1) != 0) {
    func_0x00010ae06f08(1,4,&UNK_10f677f95,&UNK_10f677fd5,0xbf,&UNK_10f678086);
  }
  plStack_a8 = plStack_c8;
  plStack_b0 = plStack_d0;
  if (plStack_c8 != (long *)0x0) {
    plVar9 = plStack_c8 + 1;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar3) {
        *plVar9 = *plVar9 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  FUN_10a870f7c(uStack_110,&uStack_140,&uStack_160,&plStack_b0,&plStack_e0,&plStack_80,&plStack_c0);
  plVar9 = plStack_a8;
  if (plStack_a8 != (long *)0x0) {
    plVar7 = plStack_a8 + 1;
    do {
      lVar12 = *plVar7;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar3) {
        *plVar7 = lVar12 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar12 == 0) {
      (**(code **)(*plStack_a8 + 0x10))(plStack_a8);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar9);
    }
  }
  plVar7 = plStack_70;
  plVar9 = plStack_d8;
  if (plStack_70 != (long *)0x0) {
    plVar8 = plStack_70 + 1;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar3) {
        *plVar8 = *plVar8 + 4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  if (plStack_d8 != (long *)0x0) {
    plVar8 = plStack_d8 + 1;
    do {
      lVar12 = *plVar8;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar3) {
        *plVar8 = lVar12 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar12 == 0) {
      (**(code **)(*plStack_d8 + 0x10))(plStack_d8);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar9);
    }
  }
  if (plStack_c8 != (long *)0x0) {
    plVar9 = plStack_c8 + 1;
    do {
      lVar12 = *plVar9;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar3) {
        *plVar9 = lVar12 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar12 == 0) {
      (**(code **)(*plStack_c8 + 0x10))(plStack_c8);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_c8);
    }
  }
  plVar9 = plStack_b8;
  if (plStack_b8 != (long *)0x0) {
    plVar8 = plStack_b8 + 1;
    do {
      lVar12 = *plVar8;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar3) {
        *plVar8 = lVar12 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar12 == 0) {
      (**(code **)(*plStack_b8 + 0x10))(plStack_b8);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar9);
    }
  }
  plVar9 = plStack_78;
  if (plStack_78 != (long *)0x0) {
    plVar8 = plStack_78 + 1;
    do {
      lVar12 = *plVar8;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar3) {
        *plVar8 = lVar12 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar12 == 0) {
      (**(code **)(*plStack_78 + 0x10))(plStack_78);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar9);
    }
  }
  if (plVar4 != (long *)0x0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
  }
  if (plStack_68 != (long *)0x0) {
    func_0x0001092b4274(&plStack_68);
  }
  if (plStack_70 != (long *)0x0) {
    puVar1 = (ulong *)(plStack_70 + 1);
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
        (**(code **)(*plStack_70 + 8))();
      }
    }
  }
  if (lStack_150 < 0) {
    __ZdlPv(uStack_160);
  }
  if (lStack_130 < 0) {
    __ZdlPv(uStack_140);
  }
  if (plVar15 != (long *)0x0) {
    plVar9 = plVar15 + 1;
    do {
      lVar12 = *plVar9;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar3) {
        *plVar9 = lVar12 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar12 == 0) {
      (**(code **)(*plVar15 + 0x10))(plVar15);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar15);
    }
  }
  plVar15 = plStack_108;
  if (plStack_108 != (long *)0x0) {
    plVar9 = plStack_108 + 1;
    do {
      lVar12 = *plVar9;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar3) {
        *plVar9 = lVar12 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar12 == 0) {
      (**(code **)(*plStack_108 + 0x10))(plStack_108);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar15);
    }
  }
  uVar16 = *(undefined8 *)(*(long *)(param_3 + 0x960) + 0x3a8);
  puVar10 = (undefined8 *)0x70;
  __Znwm();
  *puVar10 = FUN_10a7d8434;
  puVar10[1] = FUN_10a7d8720;
  FUN_10a7d320c(puVar10 + 2);
  lVar12 = puVar10[7];
  if (lVar12 != 0) {
    plVar15 = (long *)(lVar12 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar15,0x10);
      if (bVar3) {
        *plVar15 = *plVar15 + 4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  *param_1 = lVar12;
  puVar10[0xb] = plVar7;
  puVar10[9] = uVar16;
  *(undefined1 *)(puVar10 + 10) = 0;
  *(undefined1 *)(puVar10 + 0xd) = 0;
  puVar11 = puVar10 + 9;
  FUN_10a7d2d14(puVar11,puVar10);
  if (((ulong)puVar11 & 1) == 0) {
    FUN_10a7d338c(puVar10 + 0xc,puVar10 + 0xb);
    puVar10[9] = puVar10[0xc];
    plVar15 = (long *)(puVar10[0xc] + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar15,0x10);
      if (bVar3) {
        *plVar15 = *plVar15 + 4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (((uint)*(undefined8 *)(puVar10[9] + 0x10) >> 1 & 1) == 0) {
      *(undefined1 *)(puVar10 + 0xd) = 1;
      lVar12 = puVar10[9];
      plVar15 = (long *)(lVar12 + 0x10);
      uVar16 = puVar10[3];
      do {
        lVar14 = *plVar15;
        if (lVar14 == 0) {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar15,0x10);
          if (bVar3) {
            *plVar15 = 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
          if (cVar2 == '\0') {
            plStack_b0 = (long *)0x0;
            plStack_a8 = puVar10;
            plStack_a0 = (long *)uVar16;
            func_0x000109d1b588(lVar12 + 0x18,&plStack_b0);
            *(undefined8 *)(lVar12 + 0x10) = 0;
            return;
          }
        }
        else {
          ClearExclusiveLocal();
        }
      } while (((uint)lVar14 >> 1 & 1) == 0);
    }
    lVar12 = puVar10[9];
    if (((uint)*(undefined8 *)(puVar10[9] + 0x10) >> 5 & 1) == 0) {
      if ((*(byte *)(lVar12 + 0xa8) & 1) != 0) {
        FUN_10a7d2db0(puVar10 + 2,lVar12 + 0x98);
        plVar15 = (long *)puVar10[9];
        if (plVar15 != (long *)0x0) {
          puVar1 = (ulong *)(plVar15 + 1);
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
              (**(code **)(*plVar15 + 8))();
            }
          }
        }
        plVar15 = (long *)puVar10[0xc];
        if (plVar15 != (long *)0x0) {
          puVar1 = (ulong *)(plVar15 + 1);
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
              (**(code **)(*plVar15 + 8))();
            }
          }
        }
        plVar15 = (long *)puVar10[0xb];
        if (plVar15 != (long *)0x0) {
          puVar1 = (ulong *)(plVar15 + 1);
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
              (**(code **)(*plVar15 + 8))();
            }
          }
        }
        func_0x000109d1a1d0(puVar10 + 2);
        __ZdlPv(puVar10);
        return;
      }
    }
    else {
      func_0x0001092af97c(lVar12 + 0x90);
    }
                    /* WARNING: Does not return */
    pcVar5 = (code *)SoftwareBreakpoint(1,0x10a7d182c);
    (*pcVar5)();
  }
  return;
}



/* Entry: 10a7d1abc; end: 10a7d1ac3;  */

/* WARNING: Removing unreachable block (ram,0x00010a7d1338) */
/* WARNING: Removing unreachable block (ram,0x00010a7d12f4) */
/* WARNING: Removing unreachable block (ram,0x00010a7d16b8) */
/* WARNING: Type propagation algorithm not settling */

void FUN_10a7d1abc(long param_1,undefined8 *******param_2,undefined8 *******param_3,
                  undefined8 *******param_4,undefined8 *******param_5)

{
  uint uVar1;
  ulong *puVar2;
  undefined8 ******ppppppuVar3;
  undefined8 ******ppppppuVar4;
  char cVar5;
  char cVar6;
  bool bVar7;
  undefined8 *****pppppuVar8;
  undefined8 *****pppppuVar9;
  undefined8 *****pppppuVar10;
  undefined8 ******ppppppuVar11;
  code *pcVar12;
  undefined8 *******pppppppuVar13;
  undefined8 *******pppppppuVar14;
  long **pplVar15;
  long *plVar16;
  long *plVar17;
  long *plVar18;
  undefined8 *puVar19;
  undefined8 *puVar20;
  undefined8 *******pppppppuVar21;
  undefined8 ******ppppppuVar22;
  long lVar23;
  long *extraout_x8;
  undefined1 uVar24;
  undefined8 ****ppppuVar25;
  undefined8 *****pppppuVar26;
  ulong uVar27;
  undefined8 *****pppppuVar28;
  undefined8 uVar29;
  undefined1 uVar30;
  long lVar31;
  undefined8 ******ppppppuVar32;
  float fVar33;
  float fVar34;
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined8 *****pppppuVar38;
  undefined8 *****pppppuVar39;
  double dVar40;
  undefined8 ******ppppppuStack_240;
  undefined8 ******ppppppuStack_238;
  undefined8 ******ppppppuStack_230;
  undefined8 ******ppppppuStack_220;
  undefined8 ******ppppppuStack_218;
  undefined8 ******ppppppuStack_210;
  undefined8 ******ppppppuStack_200;
  undefined8 ******ppppppuStack_1f8;
  undefined8 ******ppppppuStack_1f0;
  undefined8 ******ppppppuStack_1e8;
  undefined8 auStack_1d8 [2];
  char cStack_1c1;
  long *plStack_1c0;
  long *plStack_1b8;
  long *plStack_1b0;
  long *plStack_1a8;
  long *plStack_1a0;
  long *plStack_198;
  long *plStack_190;
  undefined8 ******ppppppuStack_188;
  undefined8 ******ppppppuStack_180;
  long *plStack_178;
  long *plStack_170;
  long **pplStack_168;
  long *plStack_160;
  long *plStack_158;
  long *plStack_150;
  long *plStack_148;
  undefined8 uStack_e0;
  undefined8 *******apppppppuStack_d8 [2];
  char cStack_c1;
  undefined8 *****pppppuStack_c0;
  undefined8 *****pppppuStack_b8;
  undefined8 *******pppppppuStack_b0;
  undefined8 uStack_a8;
  long lStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined7 uStack_88;
  undefined1 uStack_81;
  undefined7 uStack_80;
  undefined8 ****ppppuStack_79;
  long lStack_68;
  
  pppppppuVar21 = (undefined8 *******)(param_1 + -0x1f0);
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  cVar5 = *(char *)(param_1 + 0xfc);
  pppppppuVar14 = pppppppuVar21;
  if (*(int *)(param_1 + 0xb0) == 1) {
    ppppppuVar22 = param_2[0x11];
    if (ppppppuVar22 == (undefined8 ******)0x0) goto LAB_10a7d0ec0;
    if (((*(char *)(param_1 + 0xb4) == '\x01') &&
        (pppppuVar28 = ppppppuVar22[0xe], pppppuVar28 != (undefined8 *****)0x0)) &&
       (ppppppuVar22[0xc] == *(undefined8 ******)(param_1 + 0x100))) {
      *(undefined1 *)(param_1 + 0xb4) = 0;
      pppppuStack_b8 = ppppppuVar22[0xf];
      if (pppppuStack_b8 != (undefined8 *****)0x0) {
        pppppuVar8 = pppppuStack_b8 + 1;
        do {
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(pppppuVar8,0x10);
          if (bVar7) {
            *pppppuVar8 = (undefined8 ****)((long)*pppppuVar8 + 1);
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
      }
      pppppuStack_c0 = pppppuVar28;
      FUN_10a7cfdfc(pppppppuVar21,&pppppuStack_c0);
      pppppuVar28 = pppppuStack_b8;
      if (pppppuStack_b8 != (undefined8 *****)0x0) {
        pppppuVar8 = pppppuStack_b8 + 1;
        do {
          ppppuVar25 = *pppppuVar8;
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(pppppuVar8,0x10);
          if (bVar7) {
            *pppppuVar8 = (undefined8 ****)((long)ppppuVar25 + -1);
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        if (ppppuVar25 == (undefined8 ****)0x0) {
          (*(code *)(*pppppuStack_b8)[2])(pppppuStack_b8);
          __ZNSt3__119__shared_weak_count14__release_weakEv(pppppuVar28);
        }
      }
      FUN_10a07e58c(*(undefined8 *)(param_1 + 0x88));
      lVar23 = *(long *)(param_1 + -0x80);
      pppppppuVar14 = apppppppuStack_d8;
      func_0x000107c2b054(pppppppuVar14,&UNK_10f677e11);
      if (lVar23 != 0) {
        pppppppuVar14 = *(undefined8 ********)(lVar23 + 0x8d8);
        func_0x000107c2b054(&pppppppuStack_b0,&UNK_10f677e59);
        param_3 = &pppppppuStack_b0;
        FUN_10a76bdb0(pppppppuVar14,apppppppuStack_d8);
        if (lStack_a0 < 0) {
          pppppppuVar14 = pppppppuStack_b0;
          __ZdlPv();
        }
      }
      if (cStack_c1 < '\0') {
        pppppppuVar14 = apppppppuStack_d8[0];
        __ZdlPv();
      }
      __ZNSt3__16chrono12steady_clock3nowEv();
      pppppppuVar13 = pppppppuVar14;
      __ZNSt3__16chrono12steady_clock3nowEv();
      lVar31 = *(long *)(param_1 + 0x210);
      lVar23 = *(long *)(param_1 + -0x80);
      param_2 = (undefined8 *******)&UNK_10f677e5f;
      func_0x000107c2b054(&pppppppuStack_b0);
      if (lVar23 != 0) {
        param_2 = &pppppppuStack_b0;
        FUN_10a76bf18((double)(((long)pppppppuVar13 - lVar31) / 1000000),
                      *(undefined8 *)(lVar23 + 0x8d8));
      }
      if (lStack_a0 < 0) {
        __ZdlPv(pppppppuStack_b0);
      }
      if (*(long *)(param_1 + 0x1f0) == 0) {
        pppppppuVar14 = *(undefined8 ********)(param_1 + 0x68);
        FUN_10a07e58c();
      }
      else {
        uVar29 = *(undefined8 *)(param_1 + -0x80);
        func_0x0001098998d4(&pppppppuStack_b0,&PTR_DAT_110c19ef8);
        func_0x0001098998d4(apppppppuStack_d8,&PTR_s_map_110c19f08);
        param_4 = &pppppppuStack_b0;
        param_5 = apppppppuStack_d8;
        FUN_10a7d0f9c(&uStack_e0,param_1 + 0x1f0,uVar29,param_1 + 0x100);
        if ((*(char *)(param_1 + 0x1e0) == '\x01') &&
           (plVar18 = *(long **)(param_1 + 0x1d8), plVar18 != (long *)0x0)) {
          puVar2 = (ulong *)(plVar18 + 1);
          do {
            uVar27 = *puVar2;
            cVar6 = '\x01';
            bVar7 = (bool)ExclusiveMonitorPass(puVar2,0x10);
            if (bVar7) {
              *puVar2 = uVar27 - 4;
              cVar6 = ExclusiveMonitorsStatus();
            }
          } while (cVar6 != '\0');
          if ((uVar27 & 0x1fffffffc) == 4) {
            do {
              uVar27 = *puVar2;
              cVar6 = '\x01';
              bVar7 = (bool)ExclusiveMonitorPass(puVar2,0x10);
              if (bVar7) {
                *puVar2 = uVar27 - 1;
                cVar6 = ExclusiveMonitorsStatus();
              }
            } while (cVar6 != '\0');
            if (uVar27 - 1 == 0) {
              (**(code **)(*plVar18 + 8))();
            }
          }
        }
        *(undefined8 *)(param_1 + 0x1d8) = uStack_e0;
        *(undefined1 *)(param_1 + 0x1e0) = 1;
        if (cStack_c1 < '\0') {
          __ZdlPv(apppppppuStack_d8[0]);
        }
        if (lStack_a0 < 0) {
          __ZdlPv(pppppppuStack_b0);
        }
        func_0x00010a59e1e4(param_1 + 0x1f0);
        *(undefined8 ********)(param_1 + 0x1e8) = pppppppuVar14 + 7500000000;
        param_2 = *(undefined8 ********)(param_1 + 0x28);
        param_3 = *(undefined8 ********)(param_1 + 0x30);
        pppppppuVar14 = (undefined8 *******)(param_1 + 0x200);
        FUN_10a7cf70c();
      }
    }
    *(undefined4 *)(param_1 + 600) = *(undefined4 *)((long)ppppppuVar22 + 0xb4);
    pppppuVar26 = ppppppuVar22[2];
    *(undefined8 ******)(param_1 + 0xa8) = pppppuVar26;
    pppppuVar28 = ppppppuVar22[3];
    *(undefined8 ******)(param_1 + 0xc4) = ppppppuVar22[4];
    *(undefined8 ******)(param_1 + 0xbc) = pppppuVar28;
    pppppuVar28 = ppppppuVar22[5];
    pppppuVar8 = ppppppuVar22[6];
    pppppuVar9 = ppppppuVar22[7];
    pppppuVar10 = ppppppuVar22[8];
    pppppuVar39 = ppppppuVar22[10];
    pppppuVar38 = ppppppuVar22[9];
    *(undefined1 *)(param_1 + 0xfc) = *(undefined1 *)(ppppppuVar22 + 0xb);
    *(undefined8 ******)(param_1 + 0xe4) = pppppuVar10;
    *(undefined8 ******)(param_1 + 0xdc) = pppppuVar9;
    *(undefined8 ******)(param_1 + 0xf4) = pppppuVar39;
    *(undefined8 ******)(param_1 + 0xec) = pppppuVar38;
    *(undefined8 ******)(param_1 + 0xd4) = pppppuVar8;
    *(undefined8 ******)(param_1 + 0xcc) = pppppuVar28;
    dVar40 = (double)pppppuVar26;
    auVar36 = NEON_ucvtf(*(undefined1 (*) [16])(param_1 + 0x1c0),8);
    auVar35._0_8_ = dVar40 / auVar36._0_8_;
    auVar35._8_8_ = dVar40 / auVar36._8_8_;
    auVar37 = NEON_fmov(0x3ff0000000000000,8);
    auVar36._8_8_ = -(ulong)(auVar37._8_8_ < auVar35._8_8_);
    auVar36._0_8_ = -(ulong)(auVar37._0_8_ < auVar35._0_8_);
    auVar35 = auVar35 ^ (auVar35 ^ auVar37) & auVar36;
    auVar36 = NEON_ext(auVar35,auVar35,8,1);
    *(long *)(param_1 + 0x250) = auVar36._8_8_;
    *(long *)(param_1 + 0x248) = auVar36._0_8_;
    *(byte *)(param_1 + 0xb4) = *(byte *)(param_1 + 0xb4) | 1.0 <= auVar35._8_8_;
    if ((((*(byte *)(param_1 + 0x1d4) & 1) == 0) && (*(int *)(param_1 + 0xb0) == 1)) &&
       (1.0 <= auVar35._0_8_)) {
      pppppppuVar14 = *(undefined8 ********)(param_1 + 0x78);
      FUN_10a07e58c();
      *(undefined1 *)(param_1 + 0x1d4) = 1;
    }
    if (*(int *)((long)ppppppuVar22 + 0xc) == 2) {
      lVar23 = *(long *)(param_1 + -0x80);
      param_2 = (undefined8 *******)&UNK_10f677e11;
      pppppppuVar14 = apppppppuStack_d8;
      func_0x000107c2b054();
      if (lVar23 != 0) {
        pppppppuVar14 = *(undefined8 ********)(lVar23 + 0x8d8);
        func_0x000107c2b054(&pppppppuStack_b0,&UNK_10f677e79);
        param_2 = apppppppuStack_d8;
        param_3 = &pppppppuStack_b0;
        FUN_10a76bdb0();
        if (lStack_a0 < 0) {
          pppppppuVar14 = pppppppuStack_b0;
          __ZdlPv();
        }
      }
      if (cStack_c1 < '\0') {
        __ZdlPv();
        pppppppuVar14 = apppppppuStack_d8[0];
      }
    }
  }
  else if (*(int *)(param_1 + 0xb0) == 3) {
    ppppppuVar22 = param_2[0x12];
    if (ppppppuVar22 == (undefined8 ******)0x0) goto LAB_10a7d0ec0;
    *(undefined1 *)(param_1 + 0x110) = *(undefined1 *)(ppppppuVar22 + 0xb);
    pppppuVar28 = ppppppuVar22[1];
    if (pppppuVar28 == ppppppuVar22[2]) {
      uVar24 = 0;
      uVar30 = 0;
    }
    else {
      uVar24 = *(undefined1 *)(pppppuVar28 + 3);
      pppppppuStack_b0 = *(undefined8 ********)((long)pppppuVar28 + 0x19);
      uStack_a8 = *(undefined8 *)((long)pppppuVar28 + 0x21);
      lStack_a0 = *(long *)((long)pppppuVar28 + 0x29);
      uStack_98 = *(undefined8 *)((long)pppppuVar28 + 0x31);
      uStack_90 = *(undefined8 *)((long)pppppuVar28 + 0x39);
      uStack_88 = (undefined7)*(undefined8 *)((long)pppppuVar28 + 0x41);
      ppppuStack_79 = pppppuVar28[10];
      uStack_81 = SUB81(pppppuVar28[9],0);
      uStack_80 = (undefined7)((ulong)pppppuVar28[9] >> 8);
      uVar30 = *(undefined1 *)(pppppuVar28 + 0xb);
    }
    *(undefined1 *)(param_1 + 0xbc) = uVar24;
    *(undefined8 *)(param_1 + 0xc5) = uStack_a8;
    *(undefined8 ********)(param_1 + 0xbd) = pppppppuStack_b0;
    *(undefined8 *)(param_1 + 0xd5) = uStack_98;
    *(long *)(param_1 + 0xcd) = lStack_a0;
    *(ulong *)(param_1 + 0xe5) = CONCAT17(uStack_81,uStack_88);
    *(undefined8 *)(param_1 + 0xdd) = uStack_90;
    *(undefined8 *****)(param_1 + 0xf4) = ppppuStack_79;
    *(ulong *)(param_1 + 0xec) = CONCAT71(uStack_80,uStack_81);
    *(undefined1 *)(param_1 + 0xfc) = uVar30;
    pppppppuVar14 = (undefined8 *******)(param_1 + 0x120);
    param_2 = (undefined8 *******)(ppppppuVar22 + 0xc);
    FUN_10a7d299c();
  }
  if (cVar5 != *(char *)(param_1 + 0xfc)) {
    lVar23 = 0x248;
    if (cVar5 == '\0') {
      lVar23 = 0x228;
    }
    pppppppuVar14 = *(undefined8 ********)((long)pppppppuVar21 + lVar23);
    FUN_10a07e58c();
  }
  pppppppuVar21 = pppppppuVar14;
  lVar23 = *(long *)(param_1 + 0xa8);
  if (*(long *)(param_1 + 0x240) != lVar23) {
    if (*(int *)(param_1 + 0xb0) == 1) {
      lVar23 = *(long *)(param_1 + -0x80);
      param_2 = (undefined8 *******)&UNK_10f677e2f;
      pppppppuVar21 = &pppppppuStack_b0;
      func_0x000107c2b054();
      if (lVar23 != 0) {
        fVar33 = (float)*(ulong *)(param_1 + 0xa8) / (float)*(ulong *)(param_1 + 0x1c8);
        fVar34 = 1.0;
        if (fVar33 <= 1.0) {
          fVar34 = fVar33;
        }
        pppppppuVar21 = *(undefined8 ********)(lVar23 + 0x8d8);
        param_2 = &pppppppuStack_b0;
        FUN_10a76bf18((double)fVar34);
      }
      if (lStack_a0 < 0) {
        pppppppuVar21 = pppppppuStack_b0;
        __ZdlPv();
      }
      lVar23 = *(long *)(param_1 + 0xa8);
    }
    *(long *)(param_1 + 0x240) = lVar23;
  }
  if (*(char *)(param_1 + 0x110) == '\x01') {
    lVar23 = *(long *)(param_1 + -0x80);
    *(double *)(param_1 + 0x228) =
         *(double *)(param_1 + 0x228) + *(double *)(*(long *)(lVar23 + 0x850) + 0x10) * 1000.0;
    func_0x000107c2b054(&pppppppuStack_b0,&UNK_10f677e8e);
    pppppppuVar21 = *(undefined8 ********)(lVar23 + 0x8d8);
    param_2 = &pppppppuStack_b0;
    FUN_10a76bf18(*(undefined8 *)(param_1 + 0x228));
    if (lStack_a0 < 0) {
      pppppppuVar21 = pppppppuStack_b0;
      __ZdlPv();
    }
  }
  if (*(int *)(param_1 + 0xb0) == 3) {
    if (*(char *)(param_1 + 0xfc) == '\x01') {
      lVar23 = *(long *)(param_1 + -0x80);
      *(double *)(param_1 + 0x220) =
           *(double *)(param_1 + 0x220) + *(double *)(*(long *)(lVar23 + 0x850) + 0x10) * 1000.0;
      func_0x000107c2b054(&pppppppuStack_b0,&UNK_10f677eb0);
      pppppppuVar21 = *(undefined8 ********)(lVar23 + 0x8d8);
      param_2 = &pppppppuStack_b0;
      FUN_10a76bf18(*(undefined8 *)(param_1 + 0x220));
      if (lStack_a0 < 0) {
        pppppppuVar21 = pppppppuStack_b0;
        __ZdlPv();
      }
      if (*(int *)(param_1 + 0xb0) != 3) goto LAB_10a7d0e54;
    }
    if (((*(byte *)(param_1 + 0x230) & 1) == 0) && (*(char *)(param_1 + 0xfc) == '\x01')) {
      __ZNSt3__16chrono12steady_clock3nowEv();
      dVar40 = (double)(((long)pppppppuVar21 - *(long *)(param_1 + 0x218)) / 1000000);
      lVar23 = *(long *)(param_1 + -0x80);
      if (*(int *)(param_1 + 0xb8) == 1) {
        param_2 = (undefined8 *******)&UNK_10f677eef;
        pppppppuVar21 = &pppppppuStack_b0;
        func_0x000107c2b054();
        if (lVar23 != 0) {
          pppppppuVar21 = *(undefined8 ********)(lVar23 + 0x8d8);
          param_2 = &pppppppuStack_b0;
          FUN_10a76bf18(dVar40);
        }
      }
      else if (*(int *)(param_1 + 0xb8) == 2) {
        param_2 = (undefined8 *******)&UNK_10f677ecc;
        pppppppuVar21 = &pppppppuStack_b0;
        func_0x000107c2b054();
        if (lVar23 != 0) {
          pppppppuVar21 = *(undefined8 ********)(lVar23 + 0x8d8);
          param_2 = &pppppppuStack_b0;
          FUN_10a76bf18(dVar40);
        }
      }
      else {
        param_2 = (undefined8 *******)&UNK_10f677f13;
        pppppppuVar21 = &pppppppuStack_b0;
        func_0x000107c2b054();
        if (lVar23 != 0) {
          pppppppuVar21 = *(undefined8 ********)(lVar23 + 0x8d8);
          param_2 = &pppppppuStack_b0;
          FUN_10a76bf18(dVar40);
        }
      }
      if (lStack_a0 < 0) {
        pppppppuVar21 = pppppppuStack_b0;
        __ZdlPv();
      }
      *(undefined1 *)(param_1 + 0x230) = 1;
    }
  }
LAB_10a7d0e54:
  if (*(char *)(param_1 + 0x110) == '\x01') {
    if ((*(byte *)(param_1 + 0x238) & 1) == 0) {
      lVar23 = *(long *)(param_1 + -0x80);
      param_2 = (undefined8 *******)&UNK_10f677f35;
      pppppppuVar21 = &pppppppuStack_b0;
      func_0x000107c2b054();
      uVar1 = *(int *)(param_1 + 0x234) + 1;
      param_3 = (undefined8 *******)(ulong)uVar1;
      *(uint *)(param_1 + 0x234) = uVar1;
      if (lVar23 != 0) {
        pppppppuVar21 = *(undefined8 ********)(lVar23 + 0x8d8);
        param_2 = &pppppppuStack_b0;
        FUN_10a76bd40();
      }
      if (lStack_a0 < 0) {
        pppppppuVar21 = pppppppuStack_b0;
        __ZdlPv();
      }
      uVar24 = *(undefined1 *)(param_1 + 0x110);
    }
    else {
      uVar24 = 1;
    }
  }
  else {
    uVar24 = 0;
  }
  *(undefined1 *)(param_1 + 0x238) = uVar24;
LAB_10a7d0ec0:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  if (lStack_a0 < 0) {
    __ZdlPv(pppppppuStack_b0);
  }
  __Unwind_Resume();
  ppppppuStack_1f0 = *pppppppuVar21;
  ppppppuStack_1e8 = pppppppuVar21[1];
  if (pppppppuVar21[1] != (undefined8 ******)0x0) {
    ppppppuVar22 = pppppppuVar21[1] + 1;
    do {
      cVar5 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(ppppppuVar22,0x10);
      if (bVar7) {
        *ppppppuVar22 = (undefined8 *****)((long)*ppppppuVar22 + 1);
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
  }
  ppppppuVar22 = param_3[1];
  ppppppuStack_200 = *param_3;
  ppppppuStack_1f8 = param_3[1];
  if (ppppppuVar22 != (undefined8 ******)0x0) {
    ppppppuVar3 = ppppppuVar22 + 1;
    do {
      cVar5 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(ppppppuVar3,0x10);
      if (bVar7) {
        *ppppppuVar3 = (undefined8 *****)((long)*ppppppuVar3 + 1);
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
  }
  if (*(char *)((long)param_4 + 0x17) < '\0') {
    func_0x000107c3192c(&ppppppuStack_220,*param_4,param_4[1]);
  }
  else {
    ppppppuStack_220 = *param_4;
    ppppppuStack_218 = param_4[1];
    ppppppuStack_210 = param_4[2];
  }
  if (*(char *)((long)param_5 + 0x17) < '\0') {
    func_0x000107c3192c(&ppppppuStack_240,*param_5,param_5[1]);
  }
  else {
    ppppppuStack_240 = *param_5;
    ppppppuStack_238 = param_5[1];
    ppppppuStack_230 = param_5[2];
  }
  pplVar15 = &plStack_150;
  FUN_10a7d22ac();
  __ZNSt3__16chrono12steady_clock3nowEv();
  FUN_10a725afc(&plStack_190,param_2 + 3);
  ppppppuVar3 = ppppppuStack_188;
  plVar18 = plStack_190;
  if (ppppppuStack_188 != (undefined8 ******)0x0) {
    plVar16 = (long *)(ppppppuStack_188 + 2);
    do {
      cVar5 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar16,0x10);
      if (bVar7) {
        *plVar16 = *plVar16 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    plVar16 = (long *)(ppppppuStack_188 + 1);
    do {
      lVar23 = *plVar16;
      cVar5 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar16,0x10);
      if (bVar7) {
        *plVar16 = lVar23 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (lVar23 == 0) {
      (**(code **)((long)*ppppppuStack_188 + 0x10))(ppppppuStack_188);
      __ZNSt3__119__shared_weak_count14__release_weakEv(ppppppuStack_188);
    }
  }
  ppppppuVar11 = ppppppuStack_1f8;
  ppppppuVar32 = ppppppuStack_200;
  plStack_190 = plStack_148;
  if (plStack_148 != (long *)0x0) {
    plVar16 = plStack_148 + 1;
    do {
      cVar5 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar16,0x10);
      if (bVar7) {
        *plVar16 = *plVar16 + 0x200000000;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
  }
  ppppppuStack_188 = ppppppuStack_200;
  ppppppuStack_180 = ppppppuStack_1f8;
  if (ppppppuStack_1f8 != (undefined8 ******)0x0) {
    ppppppuVar4 = ppppppuStack_1f8 + 1;
    do {
      cVar5 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(ppppppuVar4,0x10);
      if (bVar7) {
        *ppppppuVar4 = (undefined8 *****)((long)*ppppppuVar4 + 1);
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
  }
  plStack_178 = plVar18;
  plStack_170 = (long *)ppppppuVar3;
  if (ppppppuVar3 != (undefined8 ******)0x0) {
    plVar16 = (long *)(ppppppuVar3 + 2);
    do {
      cVar5 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar16,0x10);
      if (bVar7) {
        *plVar16 = *plVar16 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
  }
  plVar16 = (long *)0x60;
  pplStack_168 = pplVar15;
  __Znwm();
  plVar16[1] = 0;
  plVar16[2] = 0;
  *plVar16 = (long)&PTR_DAT_110b9fc20;
  plStack_160 = plVar16 + 3;
  *plStack_160 = (long)FUN_10a7d70f4;
  plVar16[4] = (long)&PTR_FUN_110c1b4f8;
  plVar16[5] = (long)plStack_190;
  plVar16[6] = (long)ppppppuVar32;
  plVar16[7] = (long)ppppppuVar11;
  plVar16[8] = (long)plVar18;
  plVar16[9] = (long)ppppppuVar3;
  plVar16[10] = (long)pplVar15;
  *(undefined1 *)(plVar16 + 0xb) = 1;
  plStack_190 = plStack_148;
  if (plStack_148 != (long *)0x0) {
    plVar17 = plStack_148 + 1;
    do {
      cVar5 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar17,0x10);
      if (bVar7) {
        *plVar17 = *plVar17 + 0x200000000;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
  }
  ppppppuStack_188 = (undefined8 ******)plVar18;
  ppppppuStack_180 = ppppppuVar3;
  if (ppppppuVar3 != (undefined8 ******)0x0) {
    plVar17 = (long *)(ppppppuVar3 + 2);
    do {
      cVar5 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar17,0x10);
      if (bVar7) {
        *plVar17 = *plVar17 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
  }
  plVar17 = (long *)0x60;
  plStack_158 = plVar16;
  __Znwm();
  plVar17[1] = 0;
  plVar17[2] = 0;
  plStack_1a0 = plVar17 + 3;
  *plStack_1a0 = (long)FUN_10a7d7450;
  *plVar17 = (long)&PTR_FUN_110c14d30;
  plVar17[4] = (long)&PTR_FUN_110c1b518;
  plVar17[5] = (long)plStack_190;
  plVar17[6] = (long)plVar18;
  plVar17[7] = (long)ppppppuVar3;
  *(undefined1 *)(plVar17 + 0xb) = 1;
  plStack_198 = plVar17;
  FUN_10a7cfeec(&plStack_190,param_2,&ppppppuStack_200);
  FUN_10a2ea178(&plStack_1b0,plStack_190);
  ppppppuVar32 = ppppppuStack_188;
  if (ppppppuStack_188 != (undefined8 ******)0x0) {
    plVar18 = (long *)(ppppppuStack_188 + 1);
    do {
      lVar23 = *plVar18;
      cVar5 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar18,0x10);
      if (bVar7) {
        *plVar18 = lVar23 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (lVar23 == 0) {
      (**(code **)((long)*ppppppuStack_188 + 0x10))(ppppppuStack_188);
      __ZNSt3__119__shared_weak_count14__release_weakEv(ppppppuVar32);
    }
  }
  plVar18 = (long *)0x50;
  __Znwm();
  plVar18[2] = 0;
  plVar18[1] = 0;
  *plVar18 = (long)&PTR_FUN_110c17118;
  plVar18[4] = 0;
  plVar18[5] = 0;
  plStack_1c0 = plVar18 + 3;
  *plStack_1c0 = (long)&PTR_FUN_110c256d8;
  plVar18[7] = 0;
  plVar18[9] = 0;
  plVar18[8] = 0;
  plVar18[6] = 0x100000002;
  plVar16 = (long *)0x20;
  plStack_1b8 = plVar18;
  __Znwm();
  ppppppuStack_180 = (undefined8 ******)0x8000000000000020;
  ppppppuStack_188 = (undefined8 ******)0x18;
  plVar16[1] = 0x656d656870655f64;
  *plVar16 = 0x657461636f6c6f63;
  plVar16[2] = 0x7370616d5f6c6172;
  *(undefined1 *)(plVar16 + 3) = 0;
  plStack_190 = plVar16;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_(plVar18 + 7,&plStack_190)
  ;
  func_0x000107c2b054(auStack_1d8,&UNK_10f677e11);
  ppppppuVar32 = param_2[0x11b];
  func_0x000107c2b054(&plStack_190,&UNK_10f677f86);
  FUN_10a76bdb0(ppppppuVar32,auStack_1d8,&plStack_190);
  if (cStack_1c1 < '\0') {
    __ZdlPv(auStack_1d8[0]);
  }
  if ((bRam000000011330a9e8 >> 2 & 1) != 0) {
    func_0x00010ae06f08(1,4,&UNK_10f677f95,&UNK_10f677fd5,0xbf,&UNK_10f678086);
  }
  ppppppuStack_188 = (undefined8 ******)plStack_1a8;
  plStack_190 = plStack_1b0;
  if (plStack_1a8 != (long *)0x0) {
    plVar18 = plStack_1a8 + 1;
    do {
      cVar5 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar18,0x10);
      if (bVar7) {
        *plVar18 = *plVar18 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
  }
  FUN_10a870f7c(ppppppuStack_1f0,&ppppppuStack_220,&ppppppuStack_240,&plStack_190,&plStack_1c0,
                &plStack_160,&plStack_1a0);
  ppppppuVar32 = ppppppuStack_188;
  if (ppppppuStack_188 != (undefined8 ******)0x0) {
    plVar18 = (long *)(ppppppuStack_188 + 1);
    do {
      lVar23 = *plVar18;
      cVar5 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar18,0x10);
      if (bVar7) {
        *plVar18 = lVar23 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (lVar23 == 0) {
      (**(code **)((long)*ppppppuStack_188 + 0x10))(ppppppuStack_188);
      __ZNSt3__119__shared_weak_count14__release_weakEv(ppppppuVar32);
    }
  }
  plVar16 = plStack_150;
  plVar18 = plStack_1b8;
  if (plStack_150 != (long *)0x0) {
    plVar17 = plStack_150 + 1;
    do {
      cVar5 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar17,0x10);
      if (bVar7) {
        *plVar17 = *plVar17 + 4;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
  }
  if (plStack_1b8 != (long *)0x0) {
    plVar17 = plStack_1b8 + 1;
    do {
      lVar23 = *plVar17;
      cVar5 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar17,0x10);
      if (bVar7) {
        *plVar17 = lVar23 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (lVar23 == 0) {
      (**(code **)(*plStack_1b8 + 0x10))(plStack_1b8);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar18);
    }
  }
  if (plStack_1a8 != (long *)0x0) {
    plVar18 = plStack_1a8 + 1;
    do {
      lVar23 = *plVar18;
      cVar5 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar18,0x10);
      if (bVar7) {
        *plVar18 = lVar23 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (lVar23 == 0) {
      (**(code **)(*plStack_1a8 + 0x10))(plStack_1a8);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_1a8);
    }
  }
  plVar18 = plStack_198;
  if (plStack_198 != (long *)0x0) {
    plVar17 = plStack_198 + 1;
    do {
      lVar23 = *plVar17;
      cVar5 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar17,0x10);
      if (bVar7) {
        *plVar17 = lVar23 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (lVar23 == 0) {
      (**(code **)(*plStack_198 + 0x10))(plStack_198);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar18);
    }
  }
  plVar18 = plStack_158;
  if (plStack_158 != (long *)0x0) {
    plVar17 = plStack_158 + 1;
    do {
      lVar23 = *plVar17;
      cVar5 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar17,0x10);
      if (bVar7) {
        *plVar17 = lVar23 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (lVar23 == 0) {
      (**(code **)(*plStack_158 + 0x10))(plStack_158);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar18);
    }
  }
  if (ppppppuVar3 != (undefined8 ******)0x0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv(ppppppuVar3);
  }
  if (plStack_148 != (long *)0x0) {
    func_0x0001092b4274(&plStack_148);
  }
  if (plStack_150 != (long *)0x0) {
    puVar2 = (ulong *)(plStack_150 + 1);
    do {
      uVar27 = *puVar2;
      cVar5 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(puVar2,0x10);
      if (bVar7) {
        *puVar2 = uVar27 - 4;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if ((uVar27 & 0x1fffffffc) == 4) {
      do {
        uVar27 = *puVar2;
        cVar5 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(puVar2,0x10);
        if (bVar7) {
          *puVar2 = uVar27 - 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (uVar27 - 1 == 0) {
        (**(code **)(*plStack_150 + 8))();
      }
    }
  }
  if ((long)ppppppuStack_230 < 0) {
    __ZdlPv(ppppppuStack_240);
  }
  if ((long)ppppppuStack_210 < 0) {
    __ZdlPv(ppppppuStack_220);
  }
  if (ppppppuVar22 != (undefined8 ******)0x0) {
    ppppppuVar3 = ppppppuVar22 + 1;
    do {
      pppppuVar28 = *ppppppuVar3;
      cVar5 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(ppppppuVar3,0x10);
      if (bVar7) {
        *ppppppuVar3 = (undefined8 *****)((long)pppppuVar28 + -1);
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (pppppuVar28 == (undefined8 *****)0x0) {
      (*(code *)(*ppppppuVar22)[2])(ppppppuVar22);
      __ZNSt3__119__shared_weak_count14__release_weakEv(ppppppuVar22);
    }
  }
  ppppppuVar22 = ppppppuStack_1e8;
  if (ppppppuStack_1e8 != (undefined8 ******)0x0) {
    ppppppuVar3 = ppppppuStack_1e8 + 1;
    do {
      pppppuVar28 = *ppppppuVar3;
      cVar5 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(ppppppuVar3,0x10);
      if (bVar7) {
        *ppppppuVar3 = (undefined8 *****)((long)pppppuVar28 + -1);
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (pppppuVar28 == (undefined8 *****)0x0) {
      (*(code *)(*ppppppuStack_1e8)[2])(ppppppuStack_1e8);
      __ZNSt3__119__shared_weak_count14__release_weakEv(ppppppuVar22);
    }
  }
  pppppuVar28 = param_2[300][0x75];
  puVar19 = (undefined8 *)0x70;
  __Znwm();
  *puVar19 = FUN_10a7d8434;
  puVar19[1] = FUN_10a7d8720;
  FUN_10a7d320c(puVar19 + 2);
  lVar23 = puVar19[7];
  if (lVar23 != 0) {
    plVar18 = (long *)(lVar23 + 8);
    do {
      cVar5 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar18,0x10);
      if (bVar7) {
        *plVar18 = *plVar18 + 4;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
  }
  *extraout_x8 = lVar23;
  puVar19[0xb] = plVar16;
  puVar19[9] = pppppuVar28;
  *(undefined1 *)(puVar19 + 10) = 0;
  *(undefined1 *)(puVar19 + 0xd) = 0;
  puVar20 = puVar19 + 9;
  FUN_10a7d2d14(puVar20,puVar19);
  if (((ulong)puVar20 & 1) == 0) {
    FUN_10a7d338c(puVar19 + 0xc,puVar19 + 0xb);
    puVar19[9] = puVar19[0xc];
    plVar18 = (long *)(puVar19[0xc] + 8);
    do {
      cVar5 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar18,0x10);
      if (bVar7) {
        *plVar18 = *plVar18 + 4;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (((uint)*(undefined8 *)(puVar19[9] + 0x10) >> 1 & 1) == 0) {
      *(undefined1 *)(puVar19 + 0xd) = 1;
      lVar23 = puVar19[9];
      plVar18 = (long *)(lVar23 + 0x10);
      uVar29 = puVar19[3];
      do {
        lVar31 = *plVar18;
        if (lVar31 == 0) {
          cVar5 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(plVar18,0x10);
          if (bVar7) {
            *plVar18 = 1;
            cVar5 = ExclusiveMonitorsStatus();
          }
          if (cVar5 == '\0') {
            plStack_190 = (long *)0x0;
            ppppppuStack_188 = (undefined8 ******)puVar19;
            ppppppuStack_180 = (undefined8 ******)uVar29;
            func_0x000109d1b588(lVar23 + 0x18,&plStack_190);
            *(undefined8 *)(lVar23 + 0x10) = 0;
            return;
          }
        }
        else {
          ClearExclusiveLocal();
        }
      } while (((uint)lVar31 >> 1 & 1) == 0);
    }
    lVar23 = puVar19[9];
    if (((uint)*(undefined8 *)(puVar19[9] + 0x10) >> 5 & 1) == 0) {
      if ((*(byte *)(lVar23 + 0xa8) & 1) != 0) {
        FUN_10a7d2db0(puVar19 + 2,lVar23 + 0x98);
        plVar18 = (long *)puVar19[9];
        if (plVar18 != (long *)0x0) {
          puVar2 = (ulong *)(plVar18 + 1);
          do {
            uVar27 = *puVar2;
            cVar5 = '\x01';
            bVar7 = (bool)ExclusiveMonitorPass(puVar2,0x10);
            if (bVar7) {
              *puVar2 = uVar27 - 4;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if ((uVar27 & 0x1fffffffc) == 4) {
            do {
              uVar27 = *puVar2;
              cVar5 = '\x01';
              bVar7 = (bool)ExclusiveMonitorPass(puVar2,0x10);
              if (bVar7) {
                *puVar2 = uVar27 - 1;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
            if (uVar27 - 1 == 0) {
              (**(code **)(*plVar18 + 8))();
            }
          }
        }
        plVar18 = (long *)puVar19[0xc];
        if (plVar18 != (long *)0x0) {
          puVar2 = (ulong *)(plVar18 + 1);
          do {
            uVar27 = *puVar2;
            cVar5 = '\x01';
            bVar7 = (bool)ExclusiveMonitorPass(puVar2,0x10);
            if (bVar7) {
              *puVar2 = uVar27 - 4;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if ((uVar27 & 0x1fffffffc) == 4) {
            do {
              uVar27 = *puVar2;
              cVar5 = '\x01';
              bVar7 = (bool)ExclusiveMonitorPass(puVar2,0x10);
              if (bVar7) {
                *puVar2 = uVar27 - 1;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
            if (uVar27 - 1 == 0) {
              (**(code **)(*plVar18 + 8))();
            }
          }
        }
        plVar18 = (long *)puVar19[0xb];
        if (plVar18 != (long *)0x0) {
          puVar2 = (ulong *)(plVar18 + 1);
          do {
            uVar27 = *puVar2;
            cVar5 = '\x01';
            bVar7 = (bool)ExclusiveMonitorPass(puVar2,0x10);
            if (bVar7) {
              *puVar2 = uVar27 - 4;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if ((uVar27 & 0x1fffffffc) == 4) {
            do {
              uVar27 = *puVar2;
              cVar5 = '\x01';
              bVar7 = (bool)ExclusiveMonitorPass(puVar2,0x10);
              if (bVar7) {
                *puVar2 = uVar27 - 1;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
            if (uVar27 - 1 == 0) {
              (**(code **)(*plVar18 + 8))();
            }
          }
        }
        func_0x000109d1a1d0(puVar19 + 2);
        __ZdlPv(puVar19);
        return;
      }
    }
    else {
      func_0x0001092af97c(lVar23 + 0x90);
    }
                    /* WARNING: Does not return */
    pcVar12 = (code *)SoftwareBreakpoint(1,0x10a7d182c);
    (*pcVar12)();
  }
  return;
}



/* Entry: 10a7d1ac4; end: 10a7d1d1f;  */

void FUN_10a7d1ac4(long param_1)

{
  long *plVar1;
  long *plVar2;
  ulong *puVar3;
  char cVar4;
  code *pcVar5;
  bool bVar6;
  long *plVar7;
  ulong uVar8;
  long lVar9;
  undefined8 uStack_80;
  long *plStack_78;
  undefined1 auStack_70 [64];
  
  lVar9 = param_1;
  if (*(char *)(param_1 + 0x2ec) == '\x01') {
    lVar9 = *(long *)(param_1 + 0x178);
    func_0x0001094f5708(auStack_70,param_1 + 0x2ac);
    func_0x00010a3e8440(lVar9,auStack_70);
  }
  if ((*(byte *)(param_1 + 0x44c) & 1) == 0) {
    if (*(char *)(param_1 + 0x2a4) == '\x01') {
      bVar6 = *(long *)(param_1 + 0x2f0) == 0;
    }
    else {
      bVar6 = false;
    }
    *(bool *)(param_1 + 0x44c) = bVar6;
  }
  __ZNSt3__16chrono12steady_clock3nowEv();
  if (*(char *)(param_1 + 0x3d0) != '\x01') {
    return;
  }
  plVar7 = (long *)(param_1 + 0x3c8);
  if (((uint)*(undefined8 *)(*plVar7 + 0x10) >> 1 & 1) == 0) {
    if (lVar9 <= *(long *)(param_1 + 0x3d8)) {
      return;
    }
    FUN_10a00946c(&UNK_10f677e84);
  }
  else if ((*(byte *)(param_1 + 0x3d0) & 1) != 0) {
    func_0x0001092af8bc(plVar7);
    lVar9 = *plVar7;
    if ((*(byte *)(lVar9 + 0xa8) & 1) != 0) {
      plStack_78 = *(long **)(lVar9 + 0xa0);
      uStack_80 = *(undefined8 *)(lVar9 + 0x98);
      if (*(long *)(lVar9 + 0xa0) != 0) {
        plVar1 = (long *)(*(long *)(lVar9 + 0xa0) + 8);
        do {
          cVar4 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar6) {
            *plVar1 = *plVar1 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
      }
      FUN_10a7cfdfc(param_1,&uStack_80);
      plVar1 = plStack_78;
      if (plStack_78 != (long *)0x0) {
        plVar2 = plStack_78 + 1;
        do {
          lVar9 = *plVar2;
          cVar4 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar2,0x10);
          if (bVar6) {
            *plVar2 = lVar9 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (lVar9 == 0) {
          (**(code **)(*plStack_78 + 0x10))(plStack_78);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar1);
        }
      }
      if (*(char *)(param_1 + 0x3d0) == '\x01') {
        plVar7 = (long *)*plVar7;
        if (plVar7 != (long *)0x0) {
          puVar3 = (ulong *)(plVar7 + 1);
          do {
            uVar8 = *puVar3;
            cVar4 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(puVar3,0x10);
            if (bVar6) {
              *puVar3 = uVar8 - 4;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if ((uVar8 & 0x1fffffffc) == 4) {
            do {
              uVar8 = *puVar3;
              cVar4 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(puVar3,0x10);
              if (bVar6) {
                *puVar3 = uVar8 - 1;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
            if (uVar8 - 1 == 0) {
              (**(code **)(*plVar7 + 8))();
            }
          }
        }
        *(undefined1 *)(param_1 + 0x3d0) = 0;
      }
      if (*(long *)(param_1 + 0x2f0) == 0) {
        return;
      }
      FUN_10a07e58c(*(undefined8 *)(param_1 + 600));
      return;
    }
  }
                    /* WARNING: Does not return */
  pcVar5 = (code *)SoftwareBreakpoint(1,0x10a7d1c74);
  (*pcVar5)();
}



/* Entry: 10a7d1d20; end: 10a7d1d27;  */

void FUN_10a7d1d20(long param_1)

{
  long *plVar1;
  long *plVar2;
  ulong *puVar3;
  char cVar4;
  code *pcVar5;
  bool bVar6;
  long *plVar7;
  ulong uVar8;
  long lVar9;
  undefined8 uStack_80;
  long *plStack_78;
  undefined1 auStack_70 [64];
  
  lVar9 = param_1 + -0x68;
  if (*(char *)(param_1 + 0x284) == '\x01') {
    lVar9 = *(long *)(param_1 + 0x110);
    func_0x0001094f5708(auStack_70,param_1 + 0x244);
    func_0x00010a3e8440(lVar9,auStack_70);
  }
  if ((*(byte *)(param_1 + 0x3e4) & 1) == 0) {
    if (*(char *)(param_1 + 0x23c) == '\x01') {
      bVar6 = *(long *)(param_1 + 0x288) == 0;
    }
    else {
      bVar6 = false;
    }
    *(bool *)(param_1 + 0x3e4) = bVar6;
  }
  __ZNSt3__16chrono12steady_clock3nowEv();
  if (*(char *)(param_1 + 0x368) != '\x01') {
    return;
  }
  plVar7 = (long *)(param_1 + 0x360);
  if (((uint)*(undefined8 *)(*plVar7 + 0x10) >> 1 & 1) == 0) {
    if (lVar9 <= *(long *)(param_1 + 0x370)) {
      return;
    }
    FUN_10a00946c(&UNK_10f677e84);
  }
  else if ((*(byte *)(param_1 + 0x368) & 1) != 0) {
    func_0x0001092af8bc(plVar7);
    lVar9 = *plVar7;
    if ((*(byte *)(lVar9 + 0xa8) & 1) != 0) {
      plStack_78 = *(long **)(lVar9 + 0xa0);
      uStack_80 = *(undefined8 *)(lVar9 + 0x98);
      if (*(long *)(lVar9 + 0xa0) != 0) {
        plVar1 = (long *)(*(long *)(lVar9 + 0xa0) + 8);
        do {
          cVar4 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar6) {
            *plVar1 = *plVar1 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
      }
      FUN_10a7cfdfc(param_1 + -0x68,&uStack_80);
      plVar1 = plStack_78;
      if (plStack_78 != (long *)0x0) {
        plVar2 = plStack_78 + 1;
        do {
          lVar9 = *plVar2;
          cVar4 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar2,0x10);
          if (bVar6) {
            *plVar2 = lVar9 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (lVar9 == 0) {
          (**(code **)(*plStack_78 + 0x10))(plStack_78);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar1);
        }
      }
      if (*(char *)(param_1 + 0x368) == '\x01') {
        plVar7 = (long *)*plVar7;
        if (plVar7 != (long *)0x0) {
          puVar3 = (ulong *)(plVar7 + 1);
          do {
            uVar8 = *puVar3;
            cVar4 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(puVar3,0x10);
            if (bVar6) {
              *puVar3 = uVar8 - 4;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if ((uVar8 & 0x1fffffffc) == 4) {
            do {
              uVar8 = *puVar3;
              cVar4 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(puVar3,0x10);
              if (bVar6) {
                *puVar3 = uVar8 - 1;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
            if (uVar8 - 1 == 0) {
              (**(code **)(*plVar7 + 8))();
            }
          }
        }
        *(undefined1 *)(param_1 + 0x368) = 0;
      }
      if (*(long *)(param_1 + 0x288) == 0) {
        return;
      }
      FUN_10a07e58c(*(undefined8 *)(param_1 + 0x1f0));
      return;
    }
  }
                    /* WARNING: Does not return */
  pcVar5 = (code *)SoftwareBreakpoint(1,0x10a7d1c74);
  (*pcVar5)();
}


