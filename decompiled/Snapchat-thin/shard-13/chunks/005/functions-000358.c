/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10a7b2470; end: 10a7b2473;  */

void FUN_10a7b2470(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a7b2474; end: 10a7b24ff;  */

void FUN_10a7b2474(undefined8 *param_1)

{
  if (param_1 != (undefined8 *)0x0) {
    FUN_10a7b2474(*param_1);
    FUN_10a7b2474(param_1[1]);
    func_0x00010a7b24b4(param_1 + 4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(param_1);
    return;
  }
  return;
}



/* Entry: 10a7b2500; end: 10a7b262f;  */

long * FUN_10a7b2500(long *param_1,ulong param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  long *plVar5;
  ulong uVar6;
  
  uVar2 = param_1[1];
  if (uVar2 != 0) {
    uVar3 = uVar2 - 1;
    if ((uVar2 & uVar3) == 0) {
      uVar4 = uVar3 & param_2;
    }
    else {
      uVar4 = param_2;
      if (uVar2 <= param_2) {
        uVar4 = 0;
        if (uVar2 != 0) {
          uVar4 = param_2 / uVar2;
        }
        uVar4 = param_2 - uVar4 * uVar2;
      }
    }
    plVar5 = *(long **)(*param_1 + uVar4 * 8);
    if (plVar5 != (long *)0x0) {
      plVar5 = (long *)*plVar5;
      do {
        if (plVar5 == (long *)0x0) {
          return (long *)0x0;
        }
        uVar6 = plVar5[1];
        if (uVar6 == param_2) {
          if (plVar5[5] == param_2) {
            return plVar5;
          }
        }
        else {
          if ((uVar2 & uVar3) == 0) {
            uVar6 = uVar6 & uVar3;
          }
          else if (uVar2 <= uVar6) {
            uVar1 = 0;
            if (uVar2 != 0) {
              uVar1 = uVar6 / uVar2;
            }
            uVar6 = uVar6 - uVar1 * uVar2;
          }
          if (uVar6 != uVar4) {
            return (long *)0x0;
          }
        }
        plVar5 = (long *)*plVar5;
      } while( true );
    }
  }
  return (long *)0x0;
}



/* Entry: 10a7b2630; end: 10a7b2873;  */

long * FUN_10a7b2630(long *param_1,ulong param_2,long *param_3,undefined4 param_4)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  long *plVar4;
  ulong uVar5;
  long *plVar6;
  ulong uVar7;
  ulong unaff_x25;
  
  uVar7 = param_1[1];
  if (uVar7 != 0) {
    uVar2 = uVar7 - 1;
    if ((uVar7 & uVar2) == 0) {
      unaff_x25 = uVar2 & param_2;
    }
    else {
      unaff_x25 = param_2;
      if (uVar7 <= param_2) {
        uVar5 = 0;
        if (uVar7 != 0) {
          uVar5 = param_2 / uVar7;
        }
        unaff_x25 = param_2 - uVar5 * uVar7;
      }
    }
    plVar4 = *(long **)(*param_1 + unaff_x25 * 8);
    if (plVar4 != (long *)0x0) {
      for (plVar4 = (long *)*plVar4; plVar4 != (long *)0x0; plVar4 = (long *)*plVar4) {
        uVar5 = plVar4[1];
        if (uVar5 == param_2) {
          if (plVar4[5] == param_2) {
            return plVar4;
          }
        }
        else {
          if ((uVar7 & uVar2) == 0) {
            uVar5 = uVar5 & uVar2;
          }
          else if (uVar7 <= uVar5) {
            uVar1 = 0;
            if (uVar7 != 0) {
              uVar1 = uVar5 / uVar7;
            }
            uVar5 = uVar5 - uVar1 * uVar7;
          }
          if (uVar5 != unaff_x25) break;
        }
      }
    }
  }
  plVar4 = (long *)0x38;
  __Znwm();
  *plVar4 = 0;
  plVar4[1] = param_2;
  if (*(char *)((long)param_3 + 0x17) < '\0') {
    func_0x000107c3192c(plVar4 + 2,*param_3,param_3[1]);
  }
  else {
    lVar3 = *param_3;
    plVar4[3] = param_3[1];
    plVar4[2] = lVar3;
    plVar4[4] = param_3[2];
  }
  plVar4[5] = param_3[3];
  *(undefined4 *)(plVar4 + 6) = param_4;
  if ((uVar7 == 0) || (*(float *)(param_1 + 4) * (float)uVar7 < (float)(param_1[3] + 1))) {
    uVar2 = 1;
    if (2 < uVar7) {
      uVar2 = (ulong)((uVar7 & uVar7 - 1) != 0);
    }
    uVar2 = uVar2 | uVar7 << 1;
    uVar7 = (ulong)((float)(param_1[3] + 1) / *(float *)(param_1 + 4));
    if (uVar2 <= uVar7) {
      uVar2 = uVar7;
    }
    FUN_10a7ad824(param_1,uVar2);
    uVar7 = param_1[1];
    if ((uVar7 & uVar7 - 1) == 0) {
      unaff_x25 = uVar7 - 1 & param_2;
    }
    else {
      unaff_x25 = param_2;
      if (uVar7 <= param_2) {
        uVar2 = 0;
        if (uVar7 != 0) {
          uVar2 = param_2 / uVar7;
        }
        unaff_x25 = param_2 - uVar2 * uVar7;
      }
    }
  }
  lVar3 = *param_1;
  plVar6 = *(long **)(lVar3 + unaff_x25 * 8);
  if (plVar6 == (long *)0x0) {
    plVar6 = param_1 + 2;
    *plVar4 = *plVar6;
    *plVar6 = (long)plVar4;
    *(long **)(lVar3 + unaff_x25 * 8) = plVar6;
    if (*plVar4 != 0) {
      uVar2 = *(ulong *)(*plVar4 + 8);
      if ((uVar7 & uVar7 - 1) == 0) {
        uVar2 = uVar2 & uVar7 - 1;
      }
      else if (uVar7 <= uVar2) {
        uVar5 = 0;
        if (uVar7 != 0) {
          uVar5 = uVar2 / uVar7;
        }
        uVar2 = uVar2 - uVar5 * uVar7;
      }
      *(long **)(*param_1 + uVar2 * 8) = plVar4;
    }
  }
  else {
    *plVar4 = *plVar6;
    *plVar6 = (long)plVar4;
  }
  param_1[3] = param_1[3] + 1;
  return plVar4;
}



/* Entry: 10a7b2874; end: 10a7b2b07;  */

long * FUN_10a7b2874(long *param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  long *plVar7;
  long *plVar8;
  ulong uVar9;
  long *plVar10;
  ulong uVar11;
  ulong uVar12;
  ulong unaff_x26;
  long lVar13;
  
  param_1[1] = 0;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_2 + 0x20);
  FUN_10a7b2b08(param_1,*(undefined8 *)(param_2 + 8));
  plVar10 = *(long **)(param_2 + 0x10);
  if (plVar10 != (long *)0x0) {
    plVar1 = param_1 + 2;
    do {
      uVar12 = plVar10[5];
      uVar11 = param_1[1];
      if (uVar11 != 0) {
        uVar5 = uVar11 - 1;
        if ((uVar11 & uVar5) == 0) {
          unaff_x26 = uVar5 & uVar12;
        }
        else {
          unaff_x26 = uVar12;
          if (uVar11 <= uVar12) {
            uVar9 = 0;
            if (uVar11 != 0) {
              uVar9 = uVar12 / uVar11;
            }
            unaff_x26 = uVar12 - uVar9 * uVar11;
          }
        }
        plVar7 = *(long **)(*param_1 + unaff_x26 * 8);
        if (plVar7 != (long *)0x0) {
          do {
            while( true ) {
              plVar7 = (long *)*plVar7;
              if (plVar7 == (long *)0x0) goto LAB_10a7b294c;
              uVar9 = plVar7[1];
              if (uVar9 != uVar12) break;
              if (plVar7[5] == uVar12) goto LAB_10a7b2ab4;
            }
            if ((uVar11 & uVar5) == 0) {
              uVar9 = uVar9 & uVar5;
            }
            else if (uVar11 <= uVar9) {
              uVar4 = 0;
              if (uVar11 != 0) {
                uVar4 = uVar9 / uVar11;
              }
              uVar9 = uVar9 - uVar4 * uVar11;
            }
          } while (uVar9 == unaff_x26);
        }
      }
LAB_10a7b294c:
      plVar7 = (long *)0x40;
      __Znwm();
      *plVar7 = 0;
      plVar7[1] = uVar12;
      if (*(char *)((long)plVar10 + 0x27) < '\0') {
        func_0x000107c3192c(plVar7 + 2,plVar10[2],plVar10[3]);
      }
      else {
        lVar13 = plVar10[3];
        lVar6 = plVar10[2];
        plVar7[4] = plVar10[4];
        plVar7[3] = lVar13;
        plVar7[2] = lVar6;
      }
      plVar7[5] = plVar10[5];
      lVar6 = plVar10[7];
      lVar13 = plVar10[6];
      plVar7[7] = plVar10[7];
      plVar7[6] = lVar13;
      if (lVar6 != 0) {
        plVar8 = (long *)(lVar6 + 8);
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar8,0x10);
          if (bVar3) {
            *plVar8 = *plVar8 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      if ((uVar11 == 0) || (*(float *)(param_1 + 4) * (float)uVar11 < (float)(param_1[3] + 1))) {
        uVar5 = 1;
        if (2 < uVar11) {
          uVar5 = (ulong)((uVar11 & uVar11 - 1) != 0);
        }
        uVar5 = uVar5 | uVar11 << 1;
        uVar11 = (ulong)((float)(param_1[3] + 1) / *(float *)(param_1 + 4));
        if (uVar5 <= uVar11) {
          uVar5 = uVar11;
        }
        FUN_10a7b2b08(param_1,uVar5);
        uVar11 = param_1[1];
        if ((uVar11 & uVar11 - 1) == 0) {
          unaff_x26 = uVar11 - 1 & uVar12;
        }
        else {
          unaff_x26 = uVar12;
          if (uVar11 <= uVar12) {
            uVar5 = 0;
            if (uVar11 != 0) {
              uVar5 = uVar12 / uVar11;
            }
            unaff_x26 = uVar12 - uVar5 * uVar11;
          }
        }
      }
      lVar6 = *param_1;
      plVar8 = *(long **)(lVar6 + unaff_x26 * 8);
      if (plVar8 == (long *)0x0) {
        *plVar7 = *plVar1;
        *plVar1 = (long)plVar7;
        *(long **)(lVar6 + unaff_x26 * 8) = plVar1;
        if (*plVar7 != 0) {
          uVar12 = *(ulong *)(*plVar7 + 8);
          if ((uVar11 & uVar11 - 1) == 0) {
            uVar12 = uVar12 & uVar11 - 1;
          }
          else if (uVar11 <= uVar12) {
            uVar5 = 0;
            if (uVar11 != 0) {
              uVar5 = uVar12 / uVar11;
            }
            uVar12 = uVar12 - uVar5 * uVar11;
          }
          *(long **)(*param_1 + uVar12 * 8) = plVar7;
        }
      }
      else {
        *plVar7 = *plVar8;
        *plVar8 = (long)plVar7;
      }
      param_1[3] = param_1[3] + 1;
LAB_10a7b2ab4:
      plVar10 = (long *)*plVar10;
    } while (plVar10 != (long *)0x0);
  }
  return param_1;
}



/* Entry: 10a7b2b08; end: 10a7b2cd7;  */

void FUN_10a7b2b08(long *param_1,long *param_2)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  ulong uVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  
  plVar4 = param_1;
  if ((long)param_2 - 1U == 0) {
    param_2 = (long *)0x2;
  }
  else if (((ulong)param_2 & (long)param_2 - 1U) != 0) {
    __ZNSt3__112__next_primeEm();
    plVar4 = param_2;
  }
  plVar9 = (long *)param_1[1];
  if (plVar9 > param_2 || param_2 == plVar9) {
    if (plVar9 <= param_2) {
      return;
    }
    plVar4 = (long *)(long)((float)(ulong)param_1[3] / *(float *)(param_1 + 4));
    if ((plVar9 < (long *)0x3) || (((ulong)plVar9 & (long)plVar9 - 1U) != 0)) {
      __ZNSt3__112__next_primeEm();
    }
    else if ((long *)0x1 < plVar4) {
      plVar4 = (long *)(1L << (-LZCOUNT((long)plVar4 + -1) & 0x3fU));
    }
    if (param_2 <= plVar4) {
      param_2 = plVar4;
    }
    if (plVar9 <= param_2) {
      return;
    }
    if (param_2 == (long *)0x0) {
      lVar2 = *param_1;
      *param_1 = 0;
      if (lVar2 != 0) {
        __ZdlPv();
      }
      param_1[1] = 0;
      return;
    }
  }
  if ((ulong)param_2 >> 0x3d == 0) {
    lVar2 = (long)param_2 << 3;
    __Znwm();
    lVar3 = *param_1;
    *param_1 = lVar2;
    if (lVar3 != 0) {
      __ZdlPv();
    }
    plVar4 = (long *)0x0;
    param_1[1] = (long)param_2;
    do {
      *(undefined8 *)(*param_1 + (long)plVar4 * 8) = 0;
      plVar4 = (long *)((long)plVar4 + 1);
    } while (param_2 != plVar4);
    plVar4 = (long *)param_1[2];
    if (plVar4 != (long *)0x0) {
      plVar9 = (long *)plVar4[1];
      uVar5 = (long)param_2 - 1;
      if (((ulong)param_2 & uVar5) == 0) {
        plVar9 = (long *)((ulong)plVar9 & uVar5);
      }
      else if (param_2 <= plVar9) {
        uVar1 = 0;
        if (param_2 != (long *)0x0) {
          uVar1 = (ulong)plVar9 / (ulong)param_2;
        }
        plVar9 = (long *)((long)plVar9 - uVar1 * (long)param_2);
      }
      *(long **)(*param_1 + (long)plVar9 * 8) = param_1 + 2;
      plVar6 = (long *)*plVar4;
      while (plVar6 != (long *)0x0) {
        plVar8 = (long *)plVar6[1];
        if (((ulong)param_2 & uVar5) == 0) {
          plVar8 = (long *)((ulong)plVar8 & uVar5);
        }
        else if (param_2 <= plVar8) {
          uVar1 = 0;
          if (param_2 != (long *)0x0) {
            uVar1 = (ulong)plVar8 / (ulong)param_2;
          }
          plVar8 = (long *)((long)plVar8 - uVar1 * (long)param_2);
        }
        plVar7 = plVar6;
        if (plVar8 != plVar9) {
          lVar2 = *param_1;
          if (*(long *)(lVar2 + (long)plVar8 * 8) == 0) {
            *(long **)(lVar2 + (long)plVar8 * 8) = plVar4;
            plVar9 = plVar8;
          }
          else {
            *plVar4 = *plVar6;
            *plVar6 = **(undefined8 **)(lVar2 + (long)plVar8 * 8);
            **(long **)(lVar2 + (long)plVar8 * 8) = (long)plVar6;
            plVar7 = plVar4;
          }
        }
        plVar4 = plVar7;
        plVar6 = (long *)*plVar7;
      }
    }
    return;
  }
  func_0x000109ffded8();
  lVar2 = *plVar4;
  *plVar4 = 0;
  if (lVar2 == 0) {
    return;
  }
  if ((char)plVar4[2] == '\x01') {
    FUN_10a7ad478(lVar2 + 0x10);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(lVar2);
  return;
}



/* Entry: 10a7b2cd8; end: 10a7b2d1f;  */

void FUN_10a7b2cd8(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
    if ((char)param_1[2] == '\x01') {
      FUN_10a7ad478(lVar1 + 0x10);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(lVar1);
    return;
  }
  return;
}



/* Entry: 10a7b2d20; end: 10a7b2d2f;  */

void FUN_10a7b2d20(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c186a0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10a7b2d30; end: 10a7b2d4f;  */

void FUN_10a7b2d30(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c186a0;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a7b2d50; end: 10a7b2d6b;  */

void FUN_10a7b2d50(long param_1)

{
  if (*(long *)(param_1 + 0x18) != 0) {
    *(long *)(param_1 + 0x20) = *(long *)(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10a7b2d6c; end: 10a7b2fbf;  */

long * FUN_10a7b2d6c(long *param_1,ulong param_2,long *param_3,long *param_4)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  long *plVar4;
  ulong uVar5;
  long *plVar6;
  ulong uVar7;
  ulong unaff_x25;
  
  uVar7 = param_1[1];
  if (uVar7 != 0) {
    uVar2 = uVar7 - 1;
    if ((uVar7 & uVar2) == 0) {
      unaff_x25 = uVar2 & param_2;
    }
    else {
      unaff_x25 = param_2;
      if (uVar7 <= param_2) {
        uVar5 = 0;
        if (uVar7 != 0) {
          uVar5 = param_2 / uVar7;
        }
        unaff_x25 = param_2 - uVar5 * uVar7;
      }
    }
    plVar4 = *(long **)(*param_1 + unaff_x25 * 8);
    if (plVar4 != (long *)0x0) {
      for (plVar4 = (long *)*plVar4; plVar4 != (long *)0x0; plVar4 = (long *)*plVar4) {
        uVar5 = plVar4[1];
        if (uVar5 == param_2) {
          if (plVar4[5] == param_2) {
            return plVar4;
          }
        }
        else {
          if ((uVar7 & uVar2) == 0) {
            uVar5 = uVar5 & uVar2;
          }
          else if (uVar7 <= uVar5) {
            uVar1 = 0;
            if (uVar7 != 0) {
              uVar1 = uVar5 / uVar7;
            }
            uVar5 = uVar5 - uVar1 * uVar7;
          }
          if (uVar5 != unaff_x25) break;
        }
      }
    }
  }
  plVar4 = (long *)0x40;
  __Znwm();
  *plVar4 = 0;
  plVar4[1] = param_2;
  if (*(char *)((long)param_3 + 0x17) < '\0') {
    func_0x000107c3192c(plVar4 + 2,*param_3,param_3[1]);
  }
  else {
    lVar3 = *param_3;
    plVar4[3] = param_3[1];
    plVar4[2] = lVar3;
    plVar4[4] = param_3[2];
  }
  plVar4[5] = param_3[3];
  lVar3 = *param_4;
  plVar4[7] = param_4[1];
  plVar4[6] = lVar3;
  *param_4 = 0;
  param_4[1] = 0;
  if ((uVar7 == 0) || (*(float *)(param_1 + 4) * (float)uVar7 < (float)(param_1[3] + 1))) {
    uVar2 = 1;
    if (2 < uVar7) {
      uVar2 = (ulong)((uVar7 & uVar7 - 1) != 0);
    }
    uVar2 = uVar2 | uVar7 << 1;
    uVar7 = (ulong)((float)(param_1[3] + 1) / *(float *)(param_1 + 4));
    if (uVar2 <= uVar7) {
      uVar2 = uVar7;
    }
    FUN_10a7b2b08(param_1,uVar2);
    uVar7 = param_1[1];
    if ((uVar7 & uVar7 - 1) == 0) {
      unaff_x25 = uVar7 - 1 & param_2;
    }
    else {
      unaff_x25 = param_2;
      if (uVar7 <= param_2) {
        uVar2 = 0;
        if (uVar7 != 0) {
          uVar2 = param_2 / uVar7;
        }
        unaff_x25 = param_2 - uVar2 * uVar7;
      }
    }
  }
  lVar3 = *param_1;
  plVar6 = *(long **)(lVar3 + unaff_x25 * 8);
  if (plVar6 == (long *)0x0) {
    plVar6 = param_1 + 2;
    *plVar4 = *plVar6;
    *plVar6 = (long)plVar4;
    *(long **)(lVar3 + unaff_x25 * 8) = plVar6;
    if (*plVar4 != 0) {
      uVar2 = *(ulong *)(*plVar4 + 8);
      if ((uVar7 & uVar7 - 1) == 0) {
        uVar2 = uVar2 & uVar7 - 1;
      }
      else if (uVar7 <= uVar2) {
        uVar5 = 0;
        if (uVar7 != 0) {
          uVar5 = uVar2 / uVar7;
        }
        uVar2 = uVar2 - uVar5 * uVar7;
      }
      *(long **)(*param_1 + uVar2 * 8) = plVar4;
    }
  }
  else {
    *plVar4 = *plVar6;
    *plVar6 = (long)plVar4;
  }
  param_1[3] = param_1[3] + 1;
  return plVar4;
}



/* Entry: 10a7b2fc0; end: 10a7b3233;  */

long * FUN_10a7b2fc0(long *param_1,ulong param_2,long *param_3,long param_4)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  long *plVar4;
  ulong uVar5;
  long *plVar6;
  ulong uVar7;
  ulong unaff_x25;
  
  uVar7 = param_1[1];
  if (uVar7 != 0) {
    uVar2 = uVar7 - 1;
    if ((uVar7 & uVar2) == 0) {
      unaff_x25 = uVar2 & param_2;
    }
    else {
      unaff_x25 = param_2;
      if (uVar7 <= param_2) {
        uVar5 = 0;
        if (uVar7 != 0) {
          uVar5 = param_2 / uVar7;
        }
        unaff_x25 = param_2 - uVar5 * uVar7;
      }
    }
    plVar4 = *(long **)(*param_1 + unaff_x25 * 8);
    if (plVar4 != (long *)0x0) {
      for (plVar4 = (long *)*plVar4; plVar4 != (long *)0x0; plVar4 = (long *)*plVar4) {
        uVar5 = plVar4[1];
        if (uVar5 == param_2) {
          if (plVar4[5] == param_2) {
            return plVar4;
          }
        }
        else {
          if ((uVar7 & uVar2) == 0) {
            uVar5 = uVar5 & uVar2;
          }
          else if (uVar7 <= uVar5) {
            uVar1 = 0;
            if (uVar7 != 0) {
              uVar1 = uVar5 / uVar7;
            }
            uVar5 = uVar5 - uVar1 * uVar7;
          }
          if (uVar5 != unaff_x25) break;
        }
      }
    }
  }
  plVar4 = (long *)0x38;
  __Znwm();
  *plVar4 = 0;
  plVar4[1] = param_2;
  if (*(char *)((long)param_3 + 0x17) < '\0') {
    func_0x000107c3192c(plVar4 + 2,*param_3,param_3[1]);
  }
  else {
    lVar3 = *param_3;
    plVar4[3] = param_3[1];
    plVar4[2] = lVar3;
    plVar4[4] = param_3[2];
  }
  plVar4[5] = param_3[3];
  plVar4[6] = param_4;
  if ((uVar7 == 0) || (*(float *)(param_1 + 4) * (float)uVar7 < (float)(param_1[3] + 1))) {
    uVar2 = 1;
    if (2 < uVar7) {
      uVar2 = (ulong)((uVar7 & uVar7 - 1) != 0);
    }
    uVar2 = uVar2 | uVar7 << 1;
    uVar7 = (ulong)((float)(param_1[3] + 1) / *(float *)(param_1 + 4));
    if (uVar2 <= uVar7) {
      uVar2 = uVar7;
    }
    FUN_10a04884c(param_1,uVar2);
    uVar7 = param_1[1];
    if ((uVar7 & uVar7 - 1) == 0) {
      unaff_x25 = uVar7 - 1 & param_2;
    }
    else {
      unaff_x25 = param_2;
      if (uVar7 <= param_2) {
        uVar2 = 0;
        if (uVar7 != 0) {
          uVar2 = param_2 / uVar7;
        }
        unaff_x25 = param_2 - uVar2 * uVar7;
      }
    }
  }
  lVar3 = *param_1;
  plVar6 = *(long **)(lVar3 + unaff_x25 * 8);
  if (plVar6 == (long *)0x0) {
    plVar6 = param_1 + 2;
    *plVar4 = *plVar6;
    *plVar6 = (long)plVar4;
    *(long **)(lVar3 + unaff_x25 * 8) = plVar6;
    if (*plVar4 != 0) {
      uVar2 = *(ulong *)(*plVar4 + 8);
      if ((uVar7 & uVar7 - 1) == 0) {
        uVar2 = uVar2 & uVar7 - 1;
      }
      else if (uVar7 <= uVar2) {
        uVar5 = 0;
        if (uVar7 != 0) {
          uVar5 = uVar2 / uVar7;
        }
        uVar2 = uVar2 - uVar5 * uVar7;
      }
      *(long **)(*param_1 + uVar2 * 8) = plVar4;
    }
  }
  else {
    *plVar4 = *plVar6;
    *plVar6 = (long)plVar4;
  }
  param_1[3] = param_1[3] + 1;
  return plVar4;
}



/* Entry: 10a7b3234; end: 10a7b3687;  */

void FUN_10a7b3234(long *param_1,long param_2,long param_3,undefined4 param_4,long param_5,
                  long *param_6,long *param_7,long *param_8,undefined4 param_9,undefined4 param_10,
                  byte param_11)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  long *plVar5;
  long *plVar6;
  ushort uVar7;
  long lVar8;
  long lVar9;
  long *plVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined4 uStack_70;
  undefined1 uStack_6c;
  undefined8 *puStack_68;
  
  plVar5 = (long *)0x280;
  __Znwm();
  plVar10 = plVar5 + 1;
  *plVar10 = 0;
  plVar5[2] = 0;
  *plVar5 = (long)&PTR_FUN_110c186f0;
  if (param_3 != 0) {
    plVar1 = (long *)(param_3 + 0x10);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = *plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  plVar1 = plVar5 + 3;
  lVar11 = param_6[1];
  lVar9 = *param_6;
  if (param_6[1] == 0) {
    uVar7 = 0;
  }
  else {
    plVar6 = (long *)(param_6[1] + 0x10);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar4) {
        *plVar6 = *plVar6 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    uVar7 = *(ushort *)(plVar5 + 9) & 0xfe00;
  }
  lVar8 = param_7[2];
  lVar13 = param_7[1];
  lVar12 = *param_7;
  param_7[1] = 0;
  param_7[2] = 0;
  *param_7 = 0;
  uStack_70 = (undefined4)param_7[3];
  uStack_6c = *(undefined1 *)((long)param_7 + 0x1c);
  lVar15 = param_8[1];
  lVar14 = *param_8;
  *param_8 = 0;
  param_8[1] = 0;
  plVar5[5] = (long)&UNK_10e52b660;
  plVar5[6] = 0;
  plVar5[7] = 0;
  plVar5[8] = 0;
  *(ushort *)(plVar5 + 9) = uVar7;
  plVar5[0x13] = 0;
  plVar5[0x12] = 0;
  plVar5[0x15] = 0;
  plVar5[0x14] = 0;
  plVar5[0xf] = 0;
  plVar5[0xe] = 0;
  plVar5[0x11] = 0;
  plVar5[0x10] = 0;
  plVar5[0xb] = 0;
  plVar5[10] = 0;
  plVar5[0xd] = 0;
  plVar5[0xc] = 0;
  plVar5[3] = (long)&PTR_FUN_110c179f8;
  plVar5[4] = 0;
  plVar5[0x16] = 0;
  plVar5[0x17] = param_2;
  plVar5[0x18] = param_3;
  plVar5[0x1d] = 0;
  plVar5[0x1c] = 0;
  plVar5[0x1b] = 0;
  plVar5[0x1a] = 0;
  plVar5[0x19] = 0;
  *(undefined4 *)(plVar5 + 0x1e) = param_4;
  *(undefined8 *)((long)plVar5 + 0xf4) = 0x100000000;
  *(undefined1 *)((long)plVar5 + 0xfc) = 0;
  plVar5[0x21] = 0;
  plVar5[0x20] = 0;
  plVar5[0x23] = 0;
  plVar5[0x22] = 0;
  *(undefined4 *)(plVar5 + 0x24) = 0x3f800000;
  plVar5[0x25] = param_5;
  plVar5[0x27] = 0;
  plVar5[0x26] = 0;
  plVar5[0x29] = 0;
  plVar5[0x28] = 0;
  plVar5[0x2b] = lVar11;
  plVar5[0x2a] = lVar9;
  plVar5[0x2d] = lVar13;
  plVar5[0x2c] = lVar12;
  plVar5[0x2e] = lVar8;
  uStack_88 = 0;
  uStack_80 = 0;
  uStack_78 = 0;
  *(undefined1 *)((long)plVar5 + 0x17c) = uStack_6c;
  *(undefined4 *)(plVar5 + 0x2f) = uStack_70;
  FUN_10a778d94(plVar5 + 0x30,param_5);
  plVar5[0x34] = 0;
  plVar5[0x35] = 0;
  plVar5[0x36] = 0;
  *(undefined8 *)((long)plVar5 + 0x1b5) = 0;
  plVar5[0x39] = 0;
  plVar5[0x3a] = 0;
  plVar5[0x38] = 0;
  *(undefined8 *)((long)plVar5 + 0x1d5) = 0;
  func_0x000107c2b07c(plVar5 + 0x3c,&UNK_10f674def);
  plVar5[0x49] = 0;
  plVar5[0x48] = 0;
  plVar5[0x4b] = 0;
  plVar5[0x4a] = 0;
  plVar5[0x45] = 0;
  plVar5[0x44] = 0;
  plVar5[0x47] = 0;
  plVar5[0x46] = 0;
  plVar5[0x41] = 0;
  plVar5[0x40] = 0;
  plVar5[0x43] = 0;
  plVar5[0x42] = 0;
  plVar5[0x4d] = lVar15;
  plVar5[0x4c] = lVar14;
  *(undefined4 *)(plVar5 + 0x4e) = param_9;
  *(undefined4 *)((long)plVar5 + 0x274) = param_10;
  *(byte *)(plVar5 + 0x4f) = param_11;
  *(byte *)((long)plVar5 + 0x279) = (param_11 ^ 0xff) & 1;
  *(undefined1 *)((long)plVar5 + 0x27e) = 0;
  *(undefined4 *)((long)plVar5 + 0x27a) = 0;
  plVar6 = (long *)plVar5[0x18];
  if ((plVar6 != (long *)0x0) && (__ZNSt3__119__shared_weak_count4lockEv(), plVar6 != (long *)0x0))
  {
    if (plVar5[0x17] != 0) {
      plVar5[0x1d] = plVar5[0x17];
    }
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
  lVar9 = plVar5[0x25];
  if (lVar9 != 0) {
    lVar8 = *(long *)(lVar9 + 0x38);
    lVar11 = *(long *)(lVar9 + 0x30);
    if (*(long *)(lVar9 + 0x38) != 0) {
      plVar6 = (long *)(*(long *)(lVar9 + 0x38) + 0x10);
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar6,0x10);
        if (bVar4) {
          *plVar6 = *plVar6 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    lVar9 = plVar5[0x27];
    plVar5[0x27] = lVar8;
    plVar5[0x26] = lVar11;
    if (lVar9 != 0) {
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
  }
  puStack_68 = &uStack_88;
  func_0x00010a1f4614(&puStack_68);
  *param_1 = (long)plVar1;
  param_1[1] = (long)plVar5;
  if (plVar5[0x16] == 0) {
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar4) {
        *plVar10 = *plVar10 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    plVar6 = plVar5 + 2;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar4) {
        *plVar6 = *plVar6 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    plVar5[0x15] = (long)plVar1;
    plVar5[0x16] = (long)plVar5;
  }
  else {
    if (*(long *)(plVar5[0x16] + 8) != -1) {
      return;
    }
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar4) {
        *plVar10 = *plVar10 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    plVar6 = plVar5 + 2;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar4) {
        *plVar6 = *plVar6 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    plVar5[0x15] = (long)plVar1;
    plVar5[0x16] = (long)plVar5;
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  do {
    lVar9 = *plVar10;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar10,0x10);
    if (bVar4) {
      *plVar10 = lVar9 + -1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  if (lVar9 != 0) {
    return;
  }
  (**(code **)(*plVar5 + 0x10))(plVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_count14__release_weakEv_110346648)(plVar5);
  return;
}



/* Entry: 10a7b3688; end: 10a7b3697;  */

void FUN_10a7b3688(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c186f0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10a7b3698; end: 10a7b36b7;  */

void FUN_10a7b3698(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c186f0;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a7b36b8; end: 10a7b36c7;  */

void FUN_10a7b36b8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010a7b36c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 10a7b36c8; end: 10a7b3ad7;  */

undefined1  [16] FUN_10a7b36c8(long *param_1,long *param_2,long *param_3)

{
  ulong uVar1;
  code *pcVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  ulong uVar6;
  long *plVar7;
  undefined8 *puVar8;
  long *plVar9;
  long *plVar10;
  long *plVar11;
  long *plVar12;
  long *plVar13;
  long *plVar14;
  long *plVar15;
  long *plVar16;
  long *unaff_x25;
  long lVar17;
  undefined1 auVar18 [16];
  
  plVar7 = param_2;
  FUN_10a77e8a8();
  plVar16 = (long *)param_1[1];
  if (plVar16 != (long *)0x0) {
    uVar6 = (long)plVar16 - 1;
    if (((ulong)plVar16 & uVar6) == 0) {
      unaff_x25 = (long *)(uVar6 & (ulong)plVar7);
    }
    else {
      unaff_x25 = plVar7;
      if (plVar16 <= plVar7) {
        uVar1 = 0;
        if (plVar16 != (long *)0x0) {
          uVar1 = (ulong)plVar7 / (ulong)plVar16;
        }
        unaff_x25 = (long *)((long)plVar7 - uVar1 * (long)plVar16);
      }
    }
    puVar8 = *(undefined8 **)(*param_1 + (long)unaff_x25 * 8);
    if ((puVar8 != (undefined8 *)0x0) && (plVar15 = (long *)*puVar8, plVar15 != (long *)0x0)) {
      do {
        plVar14 = (long *)plVar15[1];
        if (plVar14 == plVar7) {
          if ((((plVar15[2] == *param_2) && (plVar15[3] == param_2[1])) &&
              (plVar15[4] == param_2[2])) && ((int)plVar15[5] == (int)param_2[3])) {
            uVar5 = 0;
            goto LAB_10a7b3a54;
          }
        }
        else {
          if (((ulong)plVar16 & uVar6) == 0) {
            plVar14 = (long *)((ulong)plVar14 & uVar6);
          }
          else if (plVar16 <= plVar14) {
            uVar1 = 0;
            if (plVar16 != (long *)0x0) {
              uVar1 = (ulong)plVar14 / (ulong)plVar16;
            }
            plVar14 = (long *)((long)plVar14 - uVar1 * (long)plVar16);
          }
          if (plVar14 != unaff_x25) break;
        }
        plVar15 = (long *)*plVar15;
      } while (plVar15 != (long *)0x0);
    }
  }
  plVar15 = (long *)0x48;
  __Znwm();
  *plVar15 = 0;
  plVar15[1] = (long)plVar7;
  lVar3 = *param_3;
  lVar17 = param_3[3];
  lVar4 = param_3[2];
  plVar15[3] = param_3[1];
  plVar15[2] = lVar3;
  plVar15[5] = lVar17;
  plVar15[4] = lVar4;
  plVar15[6] = 0;
  plVar15[7] = 0;
  plVar15[8] = 0;
  if ((plVar16 == (long *)0x0) ||
     (*(float *)(param_1 + 4) * (float)plVar16 < (float)(param_1[3] + 1))) {
    uVar6 = 1;
    if ((long *)0x2 < plVar16) {
      uVar6 = (ulong)(((ulong)plVar16 & (long)plVar16 - 1U) != 0);
    }
    plVar14 = (long *)(uVar6 | (long)plVar16 << 1);
    plVar9 = (long *)(long)((float)(param_1[3] + 1) / *(float *)(param_1 + 4));
    if (plVar14 <= plVar9) {
      plVar14 = plVar9;
    }
    if ((long)plVar14 - 1U == 0) {
      plVar14 = (long *)0x2;
    }
    else if (((ulong)plVar14 & (long)plVar14 - 1U) != 0) {
      __ZNSt3__112__next_primeEm();
      plVar16 = (long *)param_1[1];
    }
    if (plVar16 < plVar14) {
LAB_10a7b3864:
      if ((ulong)plVar14 >> 0x3d != 0) {
        func_0x000109ffded8();
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x10a7b3abc);
        (*pcVar2)();
      }
      lVar3 = (long)plVar14 << 3;
      __Znwm();
      lVar4 = *param_1;
      *param_1 = lVar3;
      if (lVar4 != 0) {
        __ZdlPv();
      }
      plVar16 = (long *)0x0;
      param_1[1] = (long)plVar14;
      do {
        *(undefined8 *)(*param_1 + (long)plVar16 * 8) = 0;
        plVar16 = (long *)((long)plVar16 + 1);
      } while (plVar14 != plVar16);
      plVar9 = (long *)param_1[2];
      plVar16 = plVar14;
      if (plVar9 != (long *)0x0) {
        plVar10 = (long *)plVar9[1];
        uVar6 = (long)plVar14 - 1;
        if (((ulong)plVar14 & uVar6) == 0) {
          plVar10 = (long *)((ulong)plVar10 & uVar6);
        }
        else if (plVar14 <= plVar10) {
          uVar1 = 0;
          if (plVar14 != (long *)0x0) {
            uVar1 = (ulong)plVar10 / (ulong)plVar14;
          }
          plVar10 = (long *)((long)plVar10 - uVar1 * (long)plVar14);
        }
        *(long **)(*param_1 + (long)plVar10 * 8) = param_1 + 2;
        plVar11 = (long *)*plVar9;
        while (plVar11 != (long *)0x0) {
          plVar13 = (long *)plVar11[1];
          if (((ulong)plVar14 & uVar6) == 0) {
            plVar13 = (long *)((ulong)plVar13 & uVar6);
          }
          else if (plVar14 <= plVar13) {
            uVar1 = 0;
            if (plVar14 != (long *)0x0) {
              uVar1 = (ulong)plVar13 / (ulong)plVar14;
            }
            plVar13 = (long *)((long)plVar13 - uVar1 * (long)plVar14);
          }
          plVar12 = plVar11;
          if (plVar13 != plVar10) {
            lVar3 = *param_1;
            if (*(long *)(lVar3 + (long)plVar13 * 8) == 0) {
              *(long **)(lVar3 + (long)plVar13 * 8) = plVar9;
              plVar10 = plVar13;
            }
            else {
              *plVar9 = *plVar11;
              *plVar11 = **(undefined8 **)(lVar3 + (long)plVar13 * 8);
              **(long **)(lVar3 + (long)plVar13 * 8) = (long)plVar11;
              plVar12 = plVar9;
            }
          }
          plVar9 = plVar12;
          plVar11 = (long *)*plVar12;
        }
      }
    }
    else if (plVar14 < plVar16) {
      plVar9 = (long *)(long)((float)(ulong)param_1[3] / *(float *)(param_1 + 4));
      if ((plVar16 < (long *)0x3) || (((ulong)plVar16 & (long)plVar16 - 1U) != 0)) {
        __ZNSt3__112__next_primeEm();
      }
      else if ((long *)0x1 < plVar9) {
        plVar9 = (long *)(1L << (-LZCOUNT((long)plVar9 + -1) & 0x3fU));
      }
      if (plVar14 <= plVar9) {
        plVar14 = plVar9;
      }
      if (plVar14 < plVar16) {
        if (plVar14 != (long *)0x0) goto LAB_10a7b3864;
        lVar3 = *param_1;
        *param_1 = 0;
        if (lVar3 != 0) {
          __ZdlPv();
        }
        param_1[1] = 0;
        plVar16 = (long *)0x0;
      }
      else {
        plVar16 = (long *)param_1[1];
      }
    }
    if (((ulong)plVar16 & (long)plVar16 - 1U) == 0) {
      unaff_x25 = (long *)((long)plVar16 - 1U & (ulong)plVar7);
    }
    else {
      unaff_x25 = plVar7;
      if (plVar16 <= plVar7) {
        uVar6 = 0;
        if (plVar16 != (long *)0x0) {
          uVar6 = (ulong)plVar7 / (ulong)plVar16;
        }
        unaff_x25 = (long *)((long)plVar7 - uVar6 * (long)plVar16);
      }
    }
  }
  lVar3 = *param_1;
  plVar7 = *(long **)(lVar3 + (long)unaff_x25 * 8);
  if (plVar7 == (long *)0x0) {
    plVar7 = param_1 + 2;
    *plVar15 = *plVar7;
    *plVar7 = (long)plVar15;
    *(long **)(lVar3 + (long)unaff_x25 * 8) = plVar7;
    if (*plVar15 == 0) goto LAB_10a7b3a44;
    plVar7 = *(long **)(*plVar15 + 8);
    if (((ulong)plVar16 & (long)plVar16 - 1U) == 0) {
      plVar7 = (long *)((ulong)plVar7 & (long)plVar16 - 1U);
    }
    else if (plVar16 <= plVar7) {
      uVar6 = 0;
      if (plVar16 != (long *)0x0) {
        uVar6 = (ulong)plVar7 / (ulong)plVar16;
      }
      plVar7 = (long *)((long)plVar7 - uVar6 * (long)plVar16);
    }
    plVar7 = (long *)(*param_1 + (long)plVar7 * 8);
  }
  else {
    *plVar15 = *plVar7;
  }
  *plVar7 = (long)plVar15;
LAB_10a7b3a44:
  param_1[3] = param_1[3] + 1;
  uVar5 = 1;
LAB_10a7b3a54:
  auVar18._8_8_ = uVar5;
  auVar18._0_8_ = plVar15;
  return auVar18;
}



/* Entry: 10a7b3ad8; end: 10a7b3be7;  */

void FUN_10a7b3ad8(long *param_1,uint param_2,undefined4 param_3,undefined8 *param_4)

{
  undefined8 uVar1;
  undefined4 uVar2;
  undefined8 *puVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  undefined8 uVar7;
  
  plVar5 = param_1 + 1;
  plVar4 = (long *)*plVar5;
  do {
    plVar6 = plVar5;
    if (plVar4 == (long *)0x0) {
LAB_10a7b3b40:
      puVar3 = (undefined8 *)0x78;
      __Znwm();
      *(undefined4 *)(puVar3 + 4) = param_3;
      uVar7 = *param_4;
      puVar3[6] = param_4[1];
      puVar3[5] = uVar7;
      *param_4 = 0;
      param_4[1] = 0;
      uVar7 = param_4[2];
      uVar1 = param_4[3];
      param_4[2] = 0;
      puVar3[7] = uVar7;
      puVar3[8] = uVar1;
      uVar7 = param_4[4];
      puVar3[10] = param_4[5];
      puVar3[9] = uVar7;
      puVar3[0xb] = param_4[6];
      param_4[4] = 0;
      param_4[5] = 0;
      param_4[6] = 0;
      uVar2 = *(undefined4 *)(param_4 + 7);
      *(undefined1 *)((long)puVar3 + 100) = *(undefined1 *)((long)param_4 + 0x3c);
      *(undefined4 *)(puVar3 + 0xc) = uVar2;
      uVar7 = param_4[8];
      puVar3[0xe] = param_4[9];
      puVar3[0xd] = uVar7;
      param_4[8] = 0;
      param_4[9] = 0;
      *puVar3 = 0;
      puVar3[1] = 0;
      puVar3[2] = plVar5;
      *plVar6 = (long)puVar3;
      if (*(long *)*param_1 != 0) {
        *param_1 = *(long *)*param_1;
        puVar3 = (undefined8 *)*plVar6;
      }
      func_0x000107c2b058(param_1[1],puVar3);
      param_1[2] = param_1[2] + 1;
      return;
    }
    while (plVar5 = plVar4, *(uint *)(plVar5 + 4) <= param_2) {
      if (param_2 <= *(uint *)(plVar5 + 4)) {
        return;
      }
      plVar4 = (long *)plVar5[1];
      if ((long *)plVar5[1] == (long *)0x0) {
        plVar6 = plVar5 + 1;
        goto LAB_10a7b3b40;
      }
    }
    plVar4 = (long *)*plVar5;
  } while( true );
}



/* Entry: 10a7b3be8; end: 10a7b3cf3;  */

void FUN_10a7b3be8(long *param_1,long *param_2)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  
  lVar6 = *param_1;
  *param_1 = 0;
  lVar4 = *param_2;
  *param_2 = 0;
  lVar3 = *param_1;
  *param_1 = lVar4;
  if (lVar3 != 0) {
    __ZdlPv();
  }
  lVar3 = *param_2;
  *param_2 = lVar6;
  if (lVar3 != 0) {
    __ZdlPv();
  }
  lVar3 = param_1[2];
  lVar4 = param_1[1];
  lVar6 = param_2[2];
  param_1[1] = param_2[1];
  param_1[2] = lVar6;
  param_2[1] = lVar4;
  param_2[2] = lVar3;
  lVar4 = param_1[3];
  param_1[3] = param_2[3];
  param_2[3] = lVar4;
  lVar3 = param_1[4];
  *(int *)(param_1 + 4) = (int)param_2[4];
  *(int *)(param_2 + 4) = (int)lVar3;
  if (param_1[3] != 0) {
    uVar1 = param_1[1];
    uVar5 = *(ulong *)(param_1[2] + 8);
    if ((uVar1 & uVar1 - 1) == 0) {
      uVar5 = uVar1 - 1 & uVar5;
    }
    else if (uVar1 <= uVar5) {
      uVar2 = 0;
      if (uVar1 != 0) {
        uVar2 = uVar5 / uVar1;
      }
      uVar5 = uVar5 - uVar2 * uVar1;
    }
    *(long **)(*param_1 + uVar5 * 8) = param_1 + 2;
  }
  if (lVar4 != 0) {
    uVar1 = param_2[1];
    uVar5 = *(ulong *)(param_2[2] + 8);
    if ((uVar1 & uVar1 - 1) == 0) {
      uVar5 = uVar1 - 1 & uVar5;
    }
    else if (uVar1 <= uVar5) {
      uVar2 = 0;
      if (uVar1 != 0) {
        uVar2 = uVar5 / uVar1;
      }
      uVar5 = uVar5 - uVar2 * uVar1;
    }
    *(long **)(*param_2 + uVar5 * 8) = param_2 + 2;
  }
  return;
}



/* Entry: 10a7b3cf4; end: 10a7b3db7;  */

void FUN_10a7b3cf4(undefined8 *param_1)

{
  if (param_1 != (undefined8 *)0x0) {
    FUN_10a7b3cf4(*param_1);
    FUN_10a7b3cf4(param_1[1]);
    func_0x00010a7b3d34(param_1 + 4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(param_1);
    return;
  }
  return;
}



/* Entry: 10a7b3db8; end: 10a7b3e87;  */

void FUN_10a7b3db8(long param_1,ulong param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  
  plVar3 = (long *)(param_1 + 8);
  plVar2 = (long *)*plVar3;
  do {
    plVar4 = plVar3;
    if (plVar2 == (long *)0x0) {
LAB_10a7b3e24:
      lVar1 = 0x58;
      __Znwm();
      FUN_10a7b3edc(lVar1 + 0x20,param_3,param_4);
      FUN_10a7b3e88(param_1,plVar3,plVar4,lVar1);
      return;
    }
    while (plVar3 = plVar2, (ulong)plVar3[7] <= param_2) {
      if (param_2 <= (ulong)plVar3[7]) {
        return;
      }
      plVar2 = (long *)plVar3[1];
      if ((long *)plVar3[1] == (long *)0x0) {
        plVar4 = plVar3 + 1;
        goto LAB_10a7b3e24;
      }
    }
    plVar2 = (long *)*plVar3;
  } while( true );
}



/* Entry: 10a7b3e88; end: 10a7b3edb;  */

void FUN_10a7b3e88(long *param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4)

{
  *param_4 = 0;
  param_4[1] = 0;
  param_4[2] = param_2;
  *param_3 = param_4;
  if (*(long *)*param_1 != 0) {
    *param_1 = *(long *)*param_1;
    param_4 = (undefined8 *)*param_3;
  }
  func_0x000107c2b058(param_1[1],param_4);
  param_1[2] = param_1[2] + 1;
  return;
}



/* Entry: 10a7b3edc; end: 10a7b3f57;  */

undefined8 * FUN_10a7b3edc(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

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
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  uVar1 = *param_3;
  param_1[5] = param_3[1];
  param_1[4] = uVar1;
  param_1[6] = param_3[2];
  *param_3 = 0;
  param_3[1] = 0;
  param_3[2] = 0;
  return param_1;
}



/* Entry: 10a7b3f58; end: 10a7b40db;  */

void FUN_10a7b3f58(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
    if ((char)param_1[2] == '\x01') {
      func_0x00010a436a7c(lVar1 + 0x20);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(lVar1);
    return;
  }
  return;
}



/* Entry: 10a7b40dc; end: 10a7b436f;  */

void FUN_10a7b40dc(undefined8 *param_1,long *param_2,uint param_3,byte param_4)

{
  int iVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  long *plVar5;
  long *plVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  long *plVar9;
  long lVar10;
  undefined8 *puVar11;
  long *plVar12;
  long lStack_70;
  long *plStack_68;
  
  puVar4 = (undefined8 *)0x78;
  plVar9 = param_2;
  __Znwm();
  puVar4[1] = 0;
  puVar4[2] = 0;
  puVar4[3] = &PTR_FUN_110c17a78;
  *puVar4 = &PTR_FUN_110c18740;
  puVar11 = puVar4 + 5;
  puVar4[6] = 0;
  *puVar11 = 0;
  puVar4[8] = 0;
  puVar4[7] = 0;
  *(undefined4 *)(puVar4 + 9) = 0x3f800000;
  puVar4[0xb] = 0;
  puVar4[10] = 0;
  puVar4[0xd] = 0;
  puVar4[0xc] = 0;
  *(undefined4 *)(puVar4 + 0xe) = 0x3f800000;
  *(byte *)(puVar4 + 4) = param_4 & 1;
  plVar12 = (long *)*param_2;
  while( true ) {
    if (plVar12 == param_2 + 1) {
      *param_1 = puVar4 + 3;
      param_1[1] = puVar4;
      return;
    }
    plVar5 = (long *)plVar12[8];
    (**(code **)(*plVar5 + 0x50))();
    plVar6 = (long *)plVar12[8];
    (**(code **)(*plVar6 + 0x68))();
    iVar1 = 0;
    if ((int)plVar6 != 2) {
      iVar1 = (int)plVar6;
    }
    if (((param_4 & 1) != 0) && (plVar6 = (long *)puVar4[7], plVar6 != (long *)0x0)) break;
LAB_10a7b41e0:
    uVar7 = plVar12[8];
    FUN_10a094ad8(uVar7);
    FUN_10a0962c8(plVar5);
    FUN_10a79668c(&lStack_70,(ulong)plVar9 >> 0x20 & 0xff,plVar5,iVar1,uVar7,param_3 & 1);
    puVar8 = puVar11;
    FUN_10a7c5568(puVar11,plVar12[7],plVar12 + 4);
    plVar9 = &lStack_70;
    FUN_10a78ee30(puVar8 + 6);
    if (plStack_68 != (long *)0x0) {
      plVar5 = plStack_68 + 1;
      do {
        lVar10 = *plVar5;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
        if (bVar3) {
          *plVar5 = lVar10 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
LAB_10a7b4248:
      plVar5 = plStack_68;
      if (lVar10 == 0) {
        (**(code **)(*plStack_68 + 0x10))(plStack_68);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
      }
    }
LAB_10a7b4264:
    plVar5 = (long *)plVar12[1];
    plVar6 = plVar12;
    if ((long *)plVar12[1] == (long *)0x0) {
      do {
        plVar12 = (long *)plVar6[2];
        bVar3 = (long *)*plVar12 != plVar6;
        plVar6 = plVar12;
      } while (bVar3);
    }
    else {
      do {
        plVar12 = plVar5;
        plVar5 = (long *)*plVar12;
      } while ((long *)*plVar12 != (long *)0x0);
    }
  }
LAB_10a7b41b0:
  lVar10 = plVar6[6];
  if ((lVar10 == 0) ||
     ((*(int *)(lVar10 + 8) != (int)plVar5 || (((iVar1 == 3 ^ *(byte *)(lVar10 + 0x21)) & 1) != 0)))
     ) goto LAB_10a7b41d8;
  plStack_68 = (long *)plVar6[7];
  if (plStack_68 != (long *)0x0) {
    plVar9 = plStack_68 + 1;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar3) {
        *plVar9 = *plVar9 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  puVar8 = puVar11;
  lStack_70 = lVar10;
  FUN_10a7c5568(puVar11,plVar12[7],plVar12 + 4);
  plVar9 = &lStack_70;
  FUN_10a78ee30(puVar8 + 6,plVar9);
  if (plStack_68 != (long *)0x0) {
    plVar5 = plStack_68 + 1;
    do {
      lVar10 = *plVar5;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar3) {
        *plVar5 = lVar10 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    goto LAB_10a7b4248;
  }
  goto LAB_10a7b4264;
LAB_10a7b41d8:
  plVar6 = (long *)*plVar6;
  if (plVar6 == (long *)0x0) goto LAB_10a7b41e0;
  goto LAB_10a7b41b0;
}



/* Entry: 10a7b4370; end: 10a7b437f;  */

void FUN_10a7b4370(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c18740;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10a7b4380; end: 10a7b439f;  */

void FUN_10a7b4380(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c18740;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a7b43a0; end: 10a7b43af;  */

void FUN_10a7b43a0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010a7b43a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 10a7b43b0; end: 10a7b4407;  */

long FUN_10a7b43b0(long param_1)

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



/* Entry: 10a7b4408; end: 10a7b450f;  */

void FUN_10a7b4408(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar1 = (undefined8 *)0xe8;
  __Znwm();
  puVar1[1] = 0;
  puVar1[2] = 0;
  *puVar1 = &PTR_FUN_110c18790;
  puVar1[4] = 0;
  puVar1[3] = 0;
  puVar1[6] = 0;
  puVar1[5] = 0;
  puVar1[8] = 0;
  puVar1[7] = 0;
  puVar1[10] = 0;
  puVar1[9] = 0;
  puVar1[0xc] = 0;
  puVar1[0xb] = 0;
  puVar1[0xe] = 0;
  puVar1[0xd] = 0;
  puVar1[0x10] = 0;
  puVar1[0xf] = 0;
  puVar1[0x12] = 0;
  puVar1[0x11] = 0;
  puVar1[0x14] = 0;
  puVar1[0x13] = 0;
  puVar1[0x16] = 0;
  puVar1[0x15] = 0;
  puVar1[0x18] = 0;
  puVar1[0x17] = 0;
  puVar1[0x1a] = 0;
  puVar1[0x19] = 0;
  puVar1[0x1c] = 0;
  puVar1[0x1b] = 0;
  puVar2 = (undefined8 *)0x20;
  __Znwm();
  puVar2[2] = 0;
  *puVar2 = &PTR_DAT_1109e6c08;
  puVar2[1] = 0;
  *(undefined1 *)(puVar2 + 3) = 0;
  puVar1[6] = puVar2 + 3;
  puVar1[7] = puVar2;
  *(undefined1 *)(puVar1 + 8) = 0;
  puVar1[0x18] = 0;
  puVar1[10] = 0;
  puVar1[9] = 0;
  puVar1[0xc] = 0;
  puVar1[0xb] = 0;
  puVar1[0xe] = 0;
  puVar1[0xd] = 0;
  puVar1[0x10] = 0;
  puVar1[0xf] = 0;
  puVar1[0x12] = 0;
  puVar1[0x11] = 0;
  puVar1[0x14] = 0;
  puVar1[0x13] = 0;
  puVar1[0x16] = 0;
  puVar1[0x15] = 0;
  puVar1[0x17] = puVar1 + 0x18;
  puVar1[0x1c] = 0;
  puVar1[0x1b] = 0;
  puVar1[0x19] = 0;
  puVar1[0x1a] = puVar1 + 0x1b;
  *param_1 = puVar1 + 3;
  param_1[1] = puVar1;
  return;
}



/* Entry: 10a7b4510; end: 10a7b451f;  */

void FUN_10a7b4510(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c18790;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10a7b4520; end: 10a7b453f;  */

void FUN_10a7b4520(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c18790;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a7b4540; end: 10a7b45b3;  */

void FUN_10a7b4540(long param_1)

{
  long lStack_28;
  
  FUN_10a7b45b8(*(undefined8 *)(param_1 + 0xd8));
  func_0x00010a7b4634(*(undefined8 *)(param_1 + 0xc0));
  lStack_28 = param_1 + 0xa0;
  func_0x00010a581140(&lStack_28);
  lStack_28 = param_1 + 0x78;
  FUN_10a044868(&lStack_28);
  func_0x00010a7a3ed4(param_1 + 0x60);
  FUN_10a7a3f50(param_1 + 0x48);
  FUN_10a541290(param_1 + 0x30);
  FUN_10a7b43b0(param_1 + 0x20);
  return;
}



/* Entry: 10a7b45b4; end: 10a7b45b7;  */

void FUN_10a7b45b4(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a7b45b8; end: 10a7b467b;  */

void FUN_10a7b45b8(undefined8 *param_1)

{
  if (param_1 != (undefined8 *)0x0) {
    FUN_10a7b45b8(*param_1);
    FUN_10a7b45b8(param_1[1]);
    func_0x00010a7b45f8(param_1 + 4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(param_1);
    return;
  }
  return;
}



/* Entry: 10a7b467c; end: 10a7b4a7f;  */

long * FUN_10a7b467c(long *param_1,long *param_2,long *param_3)

{
  ulong uVar1;
  code *pcVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  long *plVar10;
  long *plVar11;
  long *plVar12;
  long *plVar13;
  long *plVar14;
  long *unaff_x25;
  long lVar15;
  
  plVar6 = param_2;
  FUN_10a77e8a8();
  plVar14 = (long *)param_1[1];
  if (plVar14 != (long *)0x0) {
    uVar5 = (long)plVar14 - 1;
    if (((ulong)plVar14 & uVar5) == 0) {
      unaff_x25 = (long *)(uVar5 & (ulong)plVar6);
    }
    else {
      unaff_x25 = plVar6;
      if (plVar14 <= plVar6) {
        uVar1 = 0;
        if (plVar14 != (long *)0x0) {
          uVar1 = (ulong)plVar6 / (ulong)plVar14;
        }
        unaff_x25 = (long *)((long)plVar6 - uVar1 * (long)plVar14);
      }
    }
    plVar7 = *(long **)(*param_1 + (long)unaff_x25 * 8);
    if ((plVar7 != (long *)0x0) && (plVar7 = (long *)*plVar7, plVar7 != (long *)0x0)) {
      do {
        plVar13 = (long *)plVar7[1];
        if (plVar13 == plVar6) {
          if ((((plVar7[2] == *param_2) && (plVar7[3] == param_2[1])) && (plVar7[4] == param_2[2]))
             && ((int)plVar7[5] == (int)param_2[3])) {
            return plVar7;
          }
        }
        else {
          if (((ulong)plVar14 & uVar5) == 0) {
            plVar13 = (long *)((ulong)plVar13 & uVar5);
          }
          else if (plVar14 <= plVar13) {
            uVar1 = 0;
            if (plVar14 != (long *)0x0) {
              uVar1 = (ulong)plVar13 / (ulong)plVar14;
            }
            plVar13 = (long *)((long)plVar13 - uVar1 * (long)plVar14);
          }
          if (plVar13 != unaff_x25) break;
        }
        plVar7 = (long *)*plVar7;
      } while (plVar7 != (long *)0x0);
    }
  }
  plVar7 = (long *)0x48;
  __Znwm();
  *plVar7 = 0;
  plVar7[1] = (long)plVar6;
  lVar3 = *param_3;
  lVar15 = param_3[3];
  lVar4 = param_3[2];
  plVar7[3] = param_3[1];
  plVar7[2] = lVar3;
  plVar7[5] = lVar15;
  plVar7[4] = lVar4;
  plVar7[6] = 0;
  plVar7[7] = 0;
  plVar7[8] = 0;
  if ((plVar14 == (long *)0x0) ||
     (*(float *)(param_1 + 4) * (float)plVar14 < (float)(param_1[3] + 1))) {
    uVar5 = 1;
    if ((long *)0x2 < plVar14) {
      uVar5 = (ulong)(((ulong)plVar14 & (long)plVar14 - 1U) != 0);
    }
    plVar13 = (long *)(uVar5 | (long)plVar14 << 1);
    plVar8 = (long *)(long)((float)(param_1[3] + 1) / *(float *)(param_1 + 4));
    if (plVar13 <= plVar8) {
      plVar13 = plVar8;
    }
    if ((long)plVar13 - 1U == 0) {
      plVar13 = (long *)0x2;
    }
    else if (((ulong)plVar13 & (long)plVar13 - 1U) != 0) {
      __ZNSt3__112__next_primeEm();
      plVar14 = (long *)param_1[1];
    }
    if (plVar14 < plVar13) {
LAB_10a7b4818:
      if ((ulong)plVar13 >> 0x3d != 0) {
        func_0x000109ffded8();
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x10a7b4a64);
        (*pcVar2)();
      }
      lVar3 = (long)plVar13 << 3;
      __Znwm();
      lVar4 = *param_1;
      *param_1 = lVar3;
      if (lVar4 != 0) {
        __ZdlPv();
      }
      plVar14 = (long *)0x0;
      param_1[1] = (long)plVar13;
      do {
        *(undefined8 *)(*param_1 + (long)plVar14 * 8) = 0;
        plVar14 = (long *)((long)plVar14 + 1);
      } while (plVar13 != plVar14);
      plVar8 = (long *)param_1[2];
      plVar14 = plVar13;
      if (plVar8 != (long *)0x0) {
        plVar9 = (long *)plVar8[1];
        uVar5 = (long)plVar13 - 1;
        if (((ulong)plVar13 & uVar5) == 0) {
          plVar9 = (long *)((ulong)plVar9 & uVar5);
        }
        else if (plVar13 <= plVar9) {
          uVar1 = 0;
          if (plVar13 != (long *)0x0) {
            uVar1 = (ulong)plVar9 / (ulong)plVar13;
          }
          plVar9 = (long *)((long)plVar9 - uVar1 * (long)plVar13);
        }
        *(long **)(*param_1 + (long)plVar9 * 8) = param_1 + 2;
        plVar10 = (long *)*plVar8;
        while (plVar10 != (long *)0x0) {
          plVar12 = (long *)plVar10[1];
          if (((ulong)plVar13 & uVar5) == 0) {
            plVar12 = (long *)((ulong)plVar12 & uVar5);
          }
          else if (plVar13 <= plVar12) {
            uVar1 = 0;
            if (plVar13 != (long *)0x0) {
              uVar1 = (ulong)plVar12 / (ulong)plVar13;
            }
            plVar12 = (long *)((long)plVar12 - uVar1 * (long)plVar13);
          }
          plVar11 = plVar10;
          if (plVar12 != plVar9) {
            lVar3 = *param_1;
            if (*(long *)(lVar3 + (long)plVar12 * 8) == 0) {
              *(long **)(lVar3 + (long)plVar12 * 8) = plVar8;
              plVar9 = plVar12;
            }
            else {
              *plVar8 = *plVar10;
              *plVar10 = **(undefined8 **)(lVar3 + (long)plVar12 * 8);
              **(long **)(lVar3 + (long)plVar12 * 8) = (long)plVar10;
              plVar11 = plVar8;
            }
          }
          plVar8 = plVar11;
          plVar10 = (long *)*plVar11;
        }
      }
    }
    else if (plVar13 < plVar14) {
      plVar8 = (long *)(long)((float)(ulong)param_1[3] / *(float *)(param_1 + 4));
      if ((plVar14 < (long *)0x3) || (((ulong)plVar14 & (long)plVar14 - 1U) != 0)) {
        __ZNSt3__112__next_primeEm();
      }
      else if ((long *)0x1 < plVar8) {
        plVar8 = (long *)(1L << (-LZCOUNT((long)plVar8 + -1) & 0x3fU));
      }
      if (plVar13 <= plVar8) {
        plVar13 = plVar8;
      }
      if (plVar13 < plVar14) {
        if (plVar13 != (long *)0x0) goto LAB_10a7b4818;
        lVar3 = *param_1;
        *param_1 = 0;
        if (lVar3 != 0) {
          __ZdlPv();
        }
        param_1[1] = 0;
        plVar14 = (long *)0x0;
      }
      else {
        plVar14 = (long *)param_1[1];
      }
    }
    if (((ulong)plVar14 & (long)plVar14 - 1U) == 0) {
      unaff_x25 = (long *)((long)plVar14 - 1U & (ulong)plVar6);
    }
    else {
      unaff_x25 = plVar6;
      if (plVar14 <= plVar6) {
        uVar5 = 0;
        if (plVar14 != (long *)0x0) {
          uVar5 = (ulong)plVar6 / (ulong)plVar14;
        }
        unaff_x25 = (long *)((long)plVar6 - uVar5 * (long)plVar14);
      }
    }
  }
  lVar3 = *param_1;
  plVar6 = *(long **)(lVar3 + (long)unaff_x25 * 8);
  if (plVar6 == (long *)0x0) {
    plVar6 = param_1 + 2;
    *plVar7 = *plVar6;
    *plVar6 = (long)plVar7;
    *(long **)(lVar3 + (long)unaff_x25 * 8) = plVar6;
    if (*plVar7 == 0) goto LAB_10a7b49f8;
    plVar6 = *(long **)(*plVar7 + 8);
    if (((ulong)plVar14 & (long)plVar14 - 1U) == 0) {
      plVar6 = (long *)((ulong)plVar6 & (long)plVar14 - 1U);
    }
    else if (plVar14 <= plVar6) {
      uVar5 = 0;
      if (plVar14 != (long *)0x0) {
        uVar5 = (ulong)plVar6 / (ulong)plVar14;
      }
      plVar6 = (long *)((long)plVar6 - uVar5 * (long)plVar14);
    }
    plVar6 = (long *)(*param_1 + (long)plVar6 * 8);
  }
  else {
    *plVar7 = *plVar6;
  }
  *plVar6 = (long)plVar7;
LAB_10a7b49f8:
  param_1[3] = param_1[3] + 1;
  return plVar7;
}



/* Entry: 10a7b4a80; end: 10a7b4cf3;  */

long * FUN_10a7b4a80(long *param_1,long *param_2)

{
  ulong uVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  ulong uVar5;
  long *plVar6;
  long *plVar7;
  
  plVar2 = param_2;
  FUN_10a77e8a8();
  plVar4 = (long *)param_1[1];
  if (plVar4 != (long *)0x0) {
    uVar5 = (long)plVar4 - 1;
    if (((ulong)plVar4 & uVar5) == 0) {
      plVar6 = (long *)(uVar5 & (ulong)plVar2);
    }
    else {
      plVar6 = plVar2;
      if (plVar4 <= plVar2) {
        uVar1 = 0;
        if (plVar4 != (long *)0x0) {
          uVar1 = (ulong)plVar2 / (ulong)plVar4;
        }
        plVar6 = (long *)((long)plVar2 - uVar1 * (long)plVar4);
      }
    }
    plVar3 = *(long **)(*param_1 + (long)plVar6 * 8);
    if ((plVar3 != (long *)0x0) && (plVar3 = (long *)*plVar3, plVar3 != (long *)0x0)) {
      do {
        plVar7 = (long *)plVar3[1];
        if (plVar7 == plVar2) {
          if ((((plVar3[2] == *param_2) && (plVar3[3] == param_2[1])) && (plVar3[4] == param_2[2]))
             && ((int)plVar3[5] == (int)param_2[3])) {
            return plVar3;
          }
        }
        else {
          if (((ulong)plVar4 & uVar5) == 0) {
            plVar7 = (long *)((ulong)plVar7 & uVar5);
          }
          else if (plVar4 <= plVar7) {
            uVar1 = 0;
            if (plVar4 != (long *)0x0) {
              uVar1 = (ulong)plVar7 / (ulong)plVar4;
            }
            plVar7 = (long *)((long)plVar7 - uVar1 * (long)plVar4);
          }
          if (plVar7 != plVar6) {
            return (long *)0x0;
          }
        }
        plVar3 = (long *)*plVar3;
      } while (plVar3 != (long *)0x0);
    }
  }
  return (long *)0x0;
}



/* Entry: 10a7b4cf4; end: 10a7b4deb;  */

long * FUN_10a7b4cf4(long param_1,ulong param_2,long *param_3)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  
  plVar2 = (long *)(param_1 + 8);
  plVar1 = (long *)*plVar2;
  do {
    plVar3 = plVar2;
    if (plVar1 == (long *)0x0) {
LAB_10a7b4d5c:
      plVar1 = (long *)0x58;
      __Znwm();
      if (*(char *)((long)param_3 + 0x17) < '\0') {
        func_0x000107c3192c(plVar1 + 4,*param_3,param_3[1]);
      }
      else {
        lVar4 = *param_3;
        plVar1[5] = param_3[1];
        plVar1[4] = lVar4;
        plVar1[6] = param_3[2];
      }
      plVar1[7] = param_3[3];
      plVar1[8] = 0;
      plVar1[9] = 0;
      plVar1[10] = 0;
      FUN_10a7b3e88(param_1,plVar2,plVar3,plVar1);
      return plVar1;
    }
    while (plVar2 = plVar1, (ulong)plVar2[7] <= param_2) {
      if (param_2 <= (ulong)plVar2[7]) {
        return plVar2;
      }
      plVar1 = (long *)plVar2[1];
      if ((long *)plVar2[1] == (long *)0x0) {
        plVar3 = plVar2 + 1;
        goto LAB_10a7b4d5c;
      }
    }
    plVar1 = (long *)*plVar2;
  } while( true );
}



/* Entry: 10a7b4dec; end: 10a7b4e47;  */

long * FUN_10a7b4dec(long *param_1)

{
  long *plVar1;
  long lVar2;
  
  plVar1 = (long *)param_1[2];
  while (plVar1 != (long *)0x0) {
    lVar2 = *plVar1;
    func_0x00010a042cd8(plVar1 + 3);
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



/* Entry: 10a7b4e48; end: 10a7b4ef3;  */

void FUN_10a7b4e48(undefined8 *param_1,undefined8 *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  puVar4 = (undefined8 *)0x78;
  __Znwm();
  puVar4[1] = 0;
  puVar4[2] = 0;
  *puVar4 = &PTR_FUN_110bc82f0;
  uVar6 = *param_2;
  puVar4[4] = param_2[1];
  puVar4[3] = uVar6;
  if (param_2[1] != 0) {
    plVar1 = (long *)(param_2[1] + 0x10);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  *(undefined4 *)(puVar4 + 5) = *(undefined4 *)(param_2 + 2);
  lVar5 = param_2[4];
  uVar6 = param_2[3];
  puVar4[7] = param_2[4];
  puVar4[6] = uVar6;
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
  uVar6 = param_2[5];
  uVar8 = param_2[8];
  uVar7 = param_2[7];
  puVar4[9] = param_2[6];
  puVar4[8] = uVar6;
  puVar4[0xb] = uVar8;
  puVar4[10] = uVar7;
  uVar6 = param_2[9];
  puVar4[0xd] = param_2[10];
  puVar4[0xc] = uVar6;
  *(undefined8 *)((long)puVar4 + 0x6d) = *(undefined8 *)((long)param_2 + 0x55);
  *param_1 = puVar4 + 3;
  param_1[1] = puVar4;
  return;
}



/* Entry: 10a7b4ef4; end: 10a7b4fbf;  */

long * FUN_10a7b4ef4(long param_1,ulong param_2,long param_3)

{
  ulong uVar1;
  uint uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  long *plVar6;
  ulong uVar7;
  
  uVar2 = (uint)((ulong)param_3 >> 0x20);
  if (param_2 != 0) {
    uVar3 = ((ulong)(uint)((int)param_3 << 3) + 8 ^ (ulong)uVar2) * -0x622015f714c7d297;
    uVar3 = ((ulong)uVar2 ^ uVar3 >> 0x2f ^ uVar3) * -0x622015f714c7d297;
    uVar3 = (uVar3 ^ uVar3 >> 0x2f) * -0x622015f714c7d297;
    uVar4 = param_2 - 1;
    if ((param_2 & uVar4) == 0) {
      uVar5 = uVar3 & uVar4;
    }
    else {
      uVar5 = uVar3;
      if (param_2 <= uVar3) {
        uVar5 = 0;
        if (param_2 != 0) {
          uVar5 = uVar3 / param_2;
        }
        uVar5 = uVar3 - uVar5 * param_2;
      }
    }
    plVar6 = *(long **)(param_1 + uVar5 * 8);
    if (plVar6 != (long *)0x0) {
      plVar6 = (long *)*plVar6;
      do {
        if (plVar6 == (long *)0x0) {
          return (long *)0x0;
        }
        uVar7 = plVar6[1];
        if (uVar7 == uVar3) {
          if (plVar6[2] == param_3) {
            return plVar6;
          }
        }
        else {
          if ((param_2 & uVar4) == 0) {
            uVar7 = uVar7 & uVar4;
          }
          else if (param_2 <= uVar7) {
            uVar1 = 0;
            if (param_2 != 0) {
              uVar1 = uVar7 / param_2;
            }
            uVar7 = uVar7 - uVar1 * param_2;
          }
          if (uVar7 != uVar5) {
            return (long *)0x0;
          }
        }
        plVar6 = (long *)*plVar6;
      } while( true );
    }
  }
  return (long *)0x0;
}



/* Entry: 10a7b4fc0; end: 10a7b5007;  */

void FUN_10a7b4fc0(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
    if ((char)param_1[2] == '\x01') {
      func_0x00010a042cd8(lVar1 + 0x18);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(lVar1);
    return;
  }
  return;
}



/* Entry: 10a7b5008; end: 10a7b521f;  */

void FUN_10a7b5008(long *param_1,ulong param_2,undefined8 param_3,undefined8 param_4)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  long *plVar4;
  long *plVar5;
  ulong uVar6;
  ulong uVar7;
  ulong unaff_x25;
  
  uVar7 = param_1[1];
  if (uVar7 != 0) {
    uVar2 = uVar7 - 1;
    if ((uVar7 & uVar2) == 0) {
      unaff_x25 = uVar2 & param_2;
    }
    else {
      unaff_x25 = param_2;
      if (uVar7 <= param_2) {
        uVar6 = 0;
        if (uVar7 != 0) {
          uVar6 = param_2 / uVar7;
        }
        unaff_x25 = param_2 - uVar6 * uVar7;
      }
    }
    plVar4 = *(long **)(*param_1 + unaff_x25 * 8);
    if (plVar4 != (long *)0x0) {
      do {
        while( true ) {
          plVar4 = (long *)*plVar4;
          if (plVar4 == (long *)0x0) goto LAB_10a7b50c0;
          uVar6 = plVar4[1];
          if (uVar6 != param_2) break;
          if (plVar4[5] == param_2) {
            return;
          }
        }
        if ((uVar7 & uVar2) == 0) {
          uVar6 = uVar6 & uVar2;
        }
        else if (uVar7 <= uVar6) {
          uVar1 = 0;
          if (uVar7 != 0) {
            uVar1 = uVar6 / uVar7;
          }
          uVar6 = uVar6 - uVar1 * uVar7;
        }
      } while (uVar6 == unaff_x25);
    }
  }
LAB_10a7b50c0:
  plVar4 = (long *)0x48;
  __Znwm();
  *plVar4 = 0;
  plVar4[1] = param_2;
  FUN_10a7b3edc(plVar4 + 2,param_3,param_4);
  if ((uVar7 == 0) || (*(float *)(param_1 + 4) * (float)uVar7 < (float)(param_1[3] + 1))) {
    uVar2 = 1;
    if (2 < uVar7) {
      uVar2 = (ulong)((uVar7 & uVar7 - 1) != 0);
    }
    uVar2 = uVar2 | uVar7 << 1;
    uVar7 = (ulong)((float)(param_1[3] + 1) / *(float *)(param_1 + 4));
    if (uVar2 <= uVar7) {
      uVar2 = uVar7;
    }
    FUN_10a7a6e2c(param_1,uVar2);
    uVar7 = param_1[1];
    if ((uVar7 & uVar7 - 1) == 0) {
      unaff_x25 = uVar7 - 1 & param_2;
    }
    else {
      unaff_x25 = param_2;
      if (uVar7 <= param_2) {
        uVar2 = 0;
        if (uVar7 != 0) {
          uVar2 = param_2 / uVar7;
        }
        unaff_x25 = param_2 - uVar2 * uVar7;
      }
    }
  }
  lVar3 = *param_1;
  plVar5 = *(long **)(lVar3 + unaff_x25 * 8);
  if (plVar5 == (long *)0x0) {
    plVar5 = param_1 + 2;
    *plVar4 = *plVar5;
    *plVar5 = (long)plVar4;
    *(long **)(lVar3 + unaff_x25 * 8) = plVar5;
    if (*plVar4 != 0) {
      uVar2 = *(ulong *)(*plVar4 + 8);
      if ((uVar7 & uVar7 - 1) == 0) {
        uVar2 = uVar2 & uVar7 - 1;
      }
      else if (uVar7 <= uVar2) {
        uVar6 = 0;
        if (uVar7 != 0) {
          uVar6 = uVar2 / uVar7;
        }
        uVar2 = uVar2 - uVar6 * uVar7;
      }
      *(long **)(*param_1 + uVar2 * 8) = plVar4;
    }
  }
  else {
    *plVar4 = *plVar5;
    *plVar5 = (long)plVar4;
  }
  param_1[3] = param_1[3] + 1;
  return;
}



/* Entry: 10a7b5220; end: 10a7b55d3;  */

long * FUN_10a7b5220(long *param_1,ulong param_2,long *param_3)

{
  ulong uVar1;
  code *pcVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  long *plVar7;
  ulong uVar8;
  long *plVar9;
  long *plVar10;
  long *plVar11;
  ulong uVar12;
  ulong uVar13;
  ulong unaff_x24;
  
  uVar13 = param_1[1];
  if (uVar13 != 0) {
    uVar4 = uVar13 - 1;
    if ((uVar13 & uVar4) == 0) {
      unaff_x24 = uVar4 & param_2;
    }
    else {
      unaff_x24 = param_2;
      if (uVar13 <= param_2) {
        uVar8 = 0;
        if (uVar13 != 0) {
          uVar8 = param_2 / uVar13;
        }
        unaff_x24 = param_2 - uVar8 * uVar13;
      }
    }
    plVar7 = *(long **)(*param_1 + unaff_x24 * 8);
    if (plVar7 != (long *)0x0) {
      for (plVar7 = (long *)*plVar7; plVar7 != (long *)0x0; plVar7 = (long *)*plVar7) {
        uVar8 = plVar7[1];
        if (uVar8 == param_2) {
          if (plVar7[2] == param_2) {
            return plVar7;
          }
        }
        else {
          if ((uVar13 & uVar4) == 0) {
            uVar8 = uVar8 & uVar4;
          }
          else if (uVar13 <= uVar8) {
            uVar6 = 0;
            if (uVar13 != 0) {
              uVar6 = uVar8 / uVar13;
            }
            uVar8 = uVar8 - uVar6 * uVar13;
          }
          if (uVar8 != unaff_x24) break;
        }
      }
    }
  }
  plVar7 = (long *)0x28;
  __Znwm();
  *plVar7 = 0;
  plVar7[1] = param_2;
  lVar5 = *param_3;
  plVar7[3] = 0;
  plVar7[4] = 0;
  plVar7[2] = lVar5;
  if ((uVar13 == 0) || (*(float *)(param_1 + 4) * (float)uVar13 < (float)(param_1[3] + 1))) {
    uVar4 = 1;
    if (2 < uVar13) {
      uVar4 = (ulong)((uVar13 & uVar13 - 1) != 0);
    }
    uVar4 = uVar4 | uVar13 << 1;
    uVar8 = (ulong)((float)(param_1[3] + 1) / *(float *)(param_1 + 4));
    if (uVar4 <= uVar8) {
      uVar4 = uVar8;
    }
    if (uVar4 - 1 == 0) {
      uVar4 = 2;
    }
    else if ((uVar4 & uVar4 - 1) != 0) {
      __ZNSt3__112__next_primeEm();
      uVar13 = param_1[1];
    }
    if (uVar13 < uVar4) {
LAB_10a7b5374:
      if (uVar4 >> 0x3d != 0) {
        func_0x000109ffded8();
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x10a7b55bc);
        (*pcVar2)();
      }
      lVar5 = uVar4 << 3;
      __Znwm();
      lVar3 = *param_1;
      *param_1 = lVar5;
      if (lVar3 != 0) {
        __ZdlPv();
      }
      uVar13 = 0;
      param_1[1] = uVar4;
      do {
        *(undefined8 *)(*param_1 + uVar13 * 8) = 0;
        uVar13 = uVar13 + 1;
      } while (uVar4 != uVar13);
      plVar9 = (long *)param_1[2];
      uVar13 = uVar4;
      if (plVar9 != (long *)0x0) {
        uVar8 = plVar9[1];
        uVar6 = uVar4 - 1;
        if ((uVar4 & uVar6) == 0) {
          uVar8 = uVar8 & uVar6;
        }
        else if (uVar4 <= uVar8) {
          uVar12 = 0;
          if (uVar4 != 0) {
            uVar12 = uVar8 / uVar4;
          }
          uVar8 = uVar8 - uVar12 * uVar4;
        }
        *(long **)(*param_1 + uVar8 * 8) = param_1 + 2;
        plVar10 = (long *)*plVar9;
        while (plVar10 != (long *)0x0) {
          uVar12 = plVar10[1];
          if ((uVar4 & uVar6) == 0) {
            uVar12 = uVar12 & uVar6;
          }
          else if (uVar4 <= uVar12) {
            uVar1 = 0;
            if (uVar4 != 0) {
              uVar1 = uVar12 / uVar4;
            }
            uVar12 = uVar12 - uVar1 * uVar4;
          }
          plVar11 = plVar10;
          if (uVar12 != uVar8) {
            lVar5 = *param_1;
            if (*(long *)(lVar5 + uVar12 * 8) == 0) {
              *(long **)(lVar5 + uVar12 * 8) = plVar9;
              uVar8 = uVar12;
            }
            else {
              *plVar9 = *plVar10;
              *plVar10 = **(undefined8 **)(lVar5 + uVar12 * 8);
              **(long **)(lVar5 + uVar12 * 8) = (long)plVar10;
              plVar11 = plVar9;
            }
          }
          plVar9 = plVar11;
          plVar10 = (long *)*plVar11;
        }
      }
    }
    else if (uVar4 < uVar13) {
      uVar8 = (ulong)((float)(ulong)param_1[3] / *(float *)(param_1 + 4));
      if ((uVar13 < 3) || ((uVar13 & uVar13 - 1) != 0)) {
        __ZNSt3__112__next_primeEm();
      }
      else if (1 < uVar8) {
        uVar8 = 1L << (-LZCOUNT(uVar8 - 1) & 0x3fU);
      }
      if (uVar4 <= uVar8) {
        uVar4 = uVar8;
      }
      if (uVar4 < uVar13) {
        if (uVar4 != 0) goto LAB_10a7b5374;
        lVar5 = *param_1;
        *param_1 = 0;
        if (lVar5 != 0) {
          __ZdlPv();
        }
        param_1[1] = 0;
        uVar13 = 0;
      }
      else {
        uVar13 = param_1[1];
      }
    }
    if ((uVar13 & uVar13 - 1) == 0) {
      unaff_x24 = uVar13 - 1 & param_2;
    }
    else {
      unaff_x24 = param_2;
      if (uVar13 <= param_2) {
        uVar4 = 0;
        if (uVar13 != 0) {
          uVar4 = param_2 / uVar13;
        }
        unaff_x24 = param_2 - uVar4 * uVar13;
      }
    }
  }
  lVar5 = *param_1;
  plVar9 = *(long **)(lVar5 + unaff_x24 * 8);
  if (plVar9 == (long *)0x0) {
    plVar9 = param_1 + 2;
    *plVar7 = *plVar9;
    *plVar9 = (long)plVar7;
    *(long **)(lVar5 + unaff_x24 * 8) = plVar9;
    if (*plVar7 == 0) goto LAB_10a7b5554;
    uVar4 = *(ulong *)(*plVar7 + 8);
    if ((uVar13 & uVar13 - 1) == 0) {
      uVar4 = uVar4 & uVar13 - 1;
    }
    else if (uVar13 <= uVar4) {
      uVar8 = 0;
      if (uVar13 != 0) {
        uVar8 = uVar4 / uVar13;
      }
      uVar4 = uVar4 - uVar8 * uVar13;
    }
    plVar9 = (long *)(*param_1 + uVar4 * 8);
  }
  else {
    *plVar7 = *plVar9;
  }
  *plVar9 = (long)plVar7;
LAB_10a7b5554:
  param_1[3] = param_1[3] + 1;
  return plVar7;
}



/* Entry: 10a7b55d4; end: 10a7b573b;  */

void FUN_10a7b55d4(ulong param_1,long param_2)

{
  if (((param_1 & 1) != 0) && (*(long *)(param_2 + 0x20) != 0)) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_2);
  return;
}



/* Entry: 10a7b573c; end: 10a7b5773;  */

void FUN_10a7b573c(long param_1)

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



/* Entry: 10a7b5774; end: 10a7b57bb;  */

void FUN_10a7b5774(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
    if ((char)param_1[2] == '\x01') {
      func_0x00010a7b45f8(lVar1 + 0x20);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(lVar1);
    return;
  }
  return;
}



/* Entry: 10a7b57bc; end: 10a7b57c3;  */

void FUN_10a7b57bc(void)

{
  return;
}



/* Entry: 10a7b57c4; end: 10a7b580b;  */

void FUN_10a7b57c4(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)0x30;
  __Znwm();
  *puVar1 = &PTR_FUN_110c187f8;
  uVar2 = *(undefined8 *)(param_1 + 8);
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  puVar1[1] = uVar2;
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



/* Entry: 10a7b580c; end: 10a7b583b;  */

void FUN_10a7b580c(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  *param_2 = &PTR_FUN_110c187f8;
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  uVar1 = *(undefined8 *)(param_1 + 8);
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  uVar3 = *(undefined8 *)(param_1 + 0x18);
  param_2[5] = *(undefined8 *)(param_1 + 0x28);
  param_2[4] = uVar4;
  param_2[3] = uVar3;
  param_2[2] = uVar2;
  param_2[1] = uVar1;
  return;
}



/* Entry: 10a7b583c; end: 10a7b5a1f;  */

undefined8 ** FUN_10a7b583c(undefined8 **param_1,long param_2,long *param_3)

{
  long *plVar1;
  undefined8 **ppuVar2;
  long lVar3;
  char cVar4;
  bool bVar5;
  undefined8 **ppuVar6;
  undefined8 *puVar7;
  long lVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined1 auStack_b0 [8];
  long *plStack_a8;
  undefined1 uStack_99;
  undefined1 auStack_98 [8];
  undefined8 **ppuStack_90;
  undefined1 auStack_88 [8];
  undefined8 *apuStack_80 [7];
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar6 = param_1;
  lVar8 = param_2;
  if (((*(byte *)param_1[1] & 1) == 0) && (*param_3 != 0)) {
    puVar11 = param_1[4];
    ppuVar6 = (undefined8 **)*param_1[2];
    if ((ppuVar6 == (undefined8 **)0x0) || (func_0x00010a5e7dbc(), ppuVar6 == (undefined8 **)0x0)) {
      puVar7 = param_1[3] + 0x15;
      puVar9 = (undefined8 *)*puVar7;
      if (puVar9 != (undefined8 *)0x0) {
        puVar10 = puVar7;
        do {
          lVar3 = 8;
          if (*(ulong *)(param_2 + 0x18) <= (ulong)puVar9[7]) {
            lVar3 = 0;
            puVar10 = puVar9;
          }
          puVar9 = *(undefined8 **)((long)puVar9 + lVar3);
        } while (puVar9 != (undefined8 *)0x0);
        if ((puVar10 != puVar7) && ((ulong)puVar10[7] <= *(ulong *)(param_2 + 0x18))) {
          FUN_10a1328e8(auStack_b0,&uStack_99,puVar11 + 0x31,*param_3 + 0x28);
          FUN_10a78fa60(auStack_98,puVar11[0x31],auStack_b0);
          if (plStack_a8 != (long *)0x0) {
            plVar1 = plStack_a8 + 1;
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
              (**(code **)(*plStack_a8 + 0x10))(plStack_a8);
              __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_a8);
            }
          }
          FUN_10a3368d0(param_1[5],param_2,auStack_98,puVar10 + 8,(long)*(short *)(puVar10 + 0xd));
          FUN_10a044790(auStack_88);
          ppuVar6 = apuStack_80;
          (*(code *)*apuStack_80[0])();
          lVar8 = param_2;
          if (ppuStack_90 != (undefined8 **)0x0) {
            ppuVar2 = ppuStack_90 + 1;
            do {
              puVar11 = *ppuVar2;
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(ppuVar2,0x10);
              if (bVar5) {
                *ppuVar2 = (undefined8 *)((long)puVar11 + -1);
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
            if (puVar11 == (undefined8 *)0x0) {
              (*(code *)(*ppuStack_90)[2])(ppuStack_90);
              __ZNSt3__119__shared_weak_count14__release_weakEv();
              ppuVar6 = ppuStack_90;
              lVar8 = param_2;
            }
          }
          goto LAB_10a7b58f0;
        }
      }
      *(undefined1 *)param_1[1] = 1;
    }
  }
LAB_10a7b58f0:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_48) {
    ___stack_chk_fail();
    func_0x00010a015cec(auStack_98);
    __Unwind_Resume(ppuVar6);
    FUN_10a042ab0(lVar8,&PTR_DAT_110c18868);
    ppuVar6 = ppuVar6 + 1;
    if ((int)lVar8 == 0) {
      ppuVar6 = (undefined8 **)0x0;
    }
    return ppuVar6;
  }
  return ppuVar6;
}



/* Entry: 10a7b5a20; end: 10a7b5a5b;  */

long FUN_10a7b5a20(long param_1,undefined8 param_2)

{
  FUN_10a042ab0(param_2,&PTR_DAT_110c18868);
  param_1 = param_1 + 8;
  if ((int)param_2 == 0) {
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 10a7b5a5c; end: 10a7b5a67;  */

undefined ** FUN_10a7b5a5c(void)

{
  return &PTR_DAT_110c18868;
}



/* Entry: 10a7b5a68; end: 10a7b5abb;  */

ulong FUN_10a7b5a68(long param_1)

{
  ulong uVar1;
  long lVar2;
  
  lVar2 = param_1;
  FUN_10a77e8a8();
  uVar1 = lVar2 + 0x9e3779b9;
  uVar1 = (*(long *)(param_1 + 0x20) + uVar1 * 0x40 + (uVar1 >> 2) + 0x9e3779b9 ^ uVar1) +
          0x9e3779b9;
  return *(long *)(param_1 + 0x28) + uVar1 * 0x40 + (uVar1 >> 2) + 0x9e3779b9 ^ uVar1;
}



/* Entry: 10a7b5abc; end: 10a7b5b27;  */

bool FUN_10a7b5abc(long *param_1,long *param_2)

{
  if ((((*param_1 == *param_2) && (param_1[1] == param_2[1])) && (param_1[2] == param_2[2])) &&
     (((int)param_1[3] == (int)param_2[3] && (param_1[4] == param_2[4])))) {
    return param_1[5] == param_2[5];
  }
  return false;
}



/* Entry: 10a7b5b28; end: 10a7b5b6f;  */

void FUN_10a7b5b28(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
    if ((char)param_1[2] == '\x01') {
      FUN_10a7b16f4(lVar1 + 0x10);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(lVar1);
    return;
  }
  return;
}



/* Entry: 10a7b5b70; end: 10a7b5b7f;  */

void FUN_10a7b5b70(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c18888;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10a7b5b80; end: 10a7b5b9f;  */

void FUN_10a7b5b80(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c18888;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a7b5ba0; end: 10a7b5bb3;  */

void FUN_10a7b5ba0(long param_1)

{
  if (*(long *)(param_1 + 0x20) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZNSt3__119__shared_weak_count14__release_weakEv_110346648)();
    return;
  }
  return;
}



/* Entry: 10a7b5bb4; end: 10a7b5faf;  */

long * FUN_10a7b5bb4(long *param_1,long *param_2,long *param_3)

{
  ulong uVar1;
  code *pcVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  long *plVar10;
  long *plVar11;
  long *plVar12;
  long *plVar13;
  long *plVar14;
  long *unaff_x25;
  long lVar15;
  
  plVar6 = param_2;
  FUN_10a77e8a8();
  plVar14 = (long *)param_1[1];
  if (plVar14 != (long *)0x0) {
    uVar5 = (long)plVar14 - 1;
    if (((ulong)plVar14 & uVar5) == 0) {
      unaff_x25 = (long *)(uVar5 & (ulong)plVar6);
    }
    else {
      unaff_x25 = plVar6;
      if (plVar14 <= plVar6) {
        uVar1 = 0;
        if (plVar14 != (long *)0x0) {
          uVar1 = (ulong)plVar6 / (ulong)plVar14;
        }
        unaff_x25 = (long *)((long)plVar6 - uVar1 * (long)plVar14);
      }
    }
    plVar7 = *(long **)(*param_1 + (long)unaff_x25 * 8);
    if ((plVar7 != (long *)0x0) && (plVar7 = (long *)*plVar7, plVar7 != (long *)0x0)) {
      do {
        plVar13 = (long *)plVar7[1];
        if (plVar13 == plVar6) {
          if ((((plVar7[2] == *param_2) && (plVar7[3] == param_2[1])) && (plVar7[4] == param_2[2]))
             && ((int)plVar7[5] == (int)param_2[3])) {
            return plVar7;
          }
        }
        else {
          if (((ulong)plVar14 & uVar5) == 0) {
            plVar13 = (long *)((ulong)plVar13 & uVar5);
          }
          else if (plVar14 <= plVar13) {
            uVar1 = 0;
            if (plVar14 != (long *)0x0) {
              uVar1 = (ulong)plVar13 / (ulong)plVar14;
            }
            plVar13 = (long *)((long)plVar13 - uVar1 * (long)plVar14);
          }
          if (plVar13 != unaff_x25) break;
        }
        plVar7 = (long *)*plVar7;
      } while (plVar7 != (long *)0x0);
    }
  }
  plVar7 = (long *)0x48;
  __Znwm();
  *plVar7 = 0;
  plVar7[1] = (long)plVar6;
  lVar3 = *param_3;
  lVar15 = param_3[3];
  lVar4 = param_3[2];
  plVar7[3] = param_3[1];
  plVar7[2] = lVar3;
  plVar7[5] = lVar15;
  plVar7[4] = lVar4;
  plVar7[7] = 0;
  plVar7[8] = 0;
  plVar7[6] = 0;
  if ((plVar14 == (long *)0x0) ||
     (*(float *)(param_1 + 4) * (float)plVar14 < (float)(param_1[3] + 1))) {
    uVar5 = 1;
    if ((long *)0x2 < plVar14) {
      uVar5 = (ulong)(((ulong)plVar14 & (long)plVar14 - 1U) != 0);
    }
    plVar13 = (long *)(uVar5 | (long)plVar14 << 1);
    plVar8 = (long *)(long)((float)(param_1[3] + 1) / *(float *)(param_1 + 4));
    if (plVar13 <= plVar8) {
      plVar13 = plVar8;
    }
    if ((long)plVar13 - 1U == 0) {
      plVar13 = (long *)0x2;
    }
    else if (((ulong)plVar13 & (long)plVar13 - 1U) != 0) {
      __ZNSt3__112__next_primeEm();
      plVar14 = (long *)param_1[1];
    }
    if (plVar14 < plVar13) {
LAB_10a7b5d4c:
      if ((ulong)plVar13 >> 0x3d != 0) {
        func_0x000109ffded8();
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x10a7b5f98);
        (*pcVar2)();
      }
      lVar3 = (long)plVar13 << 3;
      __Znwm();
      lVar4 = *param_1;
      *param_1 = lVar3;
      if (lVar4 != 0) {
        __ZdlPv();
      }
      plVar14 = (long *)0x0;
      param_1[1] = (long)plVar13;
      do {
        *(undefined8 *)(*param_1 + (long)plVar14 * 8) = 0;
        plVar14 = (long *)((long)plVar14 + 1);
      } while (plVar13 != plVar14);
      plVar8 = (long *)param_1[2];
      plVar14 = plVar13;
      if (plVar8 != (long *)0x0) {
        plVar9 = (long *)plVar8[1];
        uVar5 = (long)plVar13 - 1;
        if (((ulong)plVar13 & uVar5) == 0) {
          plVar9 = (long *)((ulong)plVar9 & uVar5);
        }
        else if (plVar13 <= plVar9) {
          uVar1 = 0;
          if (plVar13 != (long *)0x0) {
            uVar1 = (ulong)plVar9 / (ulong)plVar13;
          }
          plVar9 = (long *)((long)plVar9 - uVar1 * (long)plVar13);
        }
        *(long **)(*param_1 + (long)plVar9 * 8) = param_1 + 2;
        plVar10 = (long *)*plVar8;
        while (plVar10 != (long *)0x0) {
          plVar12 = (long *)plVar10[1];
          if (((ulong)plVar13 & uVar5) == 0) {
            plVar12 = (long *)((ulong)plVar12 & uVar5);
          }
          else if (plVar13 <= plVar12) {
            uVar1 = 0;
            if (plVar13 != (long *)0x0) {
              uVar1 = (ulong)plVar12 / (ulong)plVar13;
            }
            plVar12 = (long *)((long)plVar12 - uVar1 * (long)plVar13);
          }
          plVar11 = plVar10;
          if (plVar12 != plVar9) {
            lVar3 = *param_1;
            if (*(long *)(lVar3 + (long)plVar12 * 8) == 0) {
              *(long **)(lVar3 + (long)plVar12 * 8) = plVar8;
              plVar9 = plVar12;
            }
            else {
              *plVar8 = *plVar10;
              *plVar10 = **(undefined8 **)(lVar3 + (long)plVar12 * 8);
              **(long **)(lVar3 + (long)plVar12 * 8) = (long)plVar10;
              plVar11 = plVar8;
            }
          }
          plVar8 = plVar11;
          plVar10 = (long *)*plVar11;
        }
      }
    }
    else if (plVar13 < plVar14) {
      plVar8 = (long *)(long)((float)(ulong)param_1[3] / *(float *)(param_1 + 4));
      if ((plVar14 < (long *)0x3) || (((ulong)plVar14 & (long)plVar14 - 1U) != 0)) {
        __ZNSt3__112__next_primeEm();
      }
      else if ((long *)0x1 < plVar8) {
        plVar8 = (long *)(1L << (-LZCOUNT((long)plVar8 + -1) & 0x3fU));
      }
      if (plVar13 <= plVar8) {
        plVar13 = plVar8;
      }
      if (plVar13 < plVar14) {
        if (plVar13 != (long *)0x0) goto LAB_10a7b5d4c;
        lVar3 = *param_1;
        *param_1 = 0;
        if (lVar3 != 0) {
          __ZdlPv();
        }
        param_1[1] = 0;
        plVar14 = (long *)0x0;
      }
      else {
        plVar14 = (long *)param_1[1];
      }
    }
    if (((ulong)plVar14 & (long)plVar14 - 1U) == 0) {
      unaff_x25 = (long *)((long)plVar14 - 1U & (ulong)plVar6);
    }
    else {
      unaff_x25 = plVar6;
      if (plVar14 <= plVar6) {
        uVar5 = 0;
        if (plVar14 != (long *)0x0) {
          uVar5 = (ulong)plVar6 / (ulong)plVar14;
        }
        unaff_x25 = (long *)((long)plVar6 - uVar5 * (long)plVar14);
      }
    }
  }
  lVar3 = *param_1;
  plVar6 = *(long **)(lVar3 + (long)unaff_x25 * 8);
  if (plVar6 == (long *)0x0) {
    plVar6 = param_1 + 2;
    *plVar7 = *plVar6;
    *plVar6 = (long)plVar7;
    *(long **)(lVar3 + (long)unaff_x25 * 8) = plVar6;
    if (*plVar7 == 0) goto LAB_10a7b5f2c;
    plVar6 = *(long **)(*plVar7 + 8);
    if (((ulong)plVar14 & (long)plVar14 - 1U) == 0) {
      plVar6 = (long *)((ulong)plVar6 & (long)plVar14 - 1U);
    }
    else if (plVar14 <= plVar6) {
      uVar5 = 0;
      if (plVar14 != (long *)0x0) {
        uVar5 = (ulong)plVar6 / (ulong)plVar14;
      }
      plVar6 = (long *)((long)plVar6 - uVar5 * (long)plVar14);
    }
    plVar6 = (long *)(*param_1 + (long)plVar6 * 8);
  }
  else {
    *plVar7 = *plVar6;
  }
  *plVar6 = (long)plVar7;
LAB_10a7b5f2c:
  param_1[3] = param_1[3] + 1;
  return plVar7;
}



/* Entry: 10a7b5fb0; end: 10a7b6097;  */

long FUN_10a7b5fb0(long param_1)

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



/* Entry: 10a7b6098; end: 10a7b616b;  */

void FUN_10a7b6098(undefined8 param_1,long *param_2)

{
  long lVar1;
  long *plStack_38;
  
  while (param_2 != (long *)0x0) {
    lVar1 = *param_2;
    plStack_38 = param_2 + 0xc;
    func_0x00010a7b60fc(&plStack_38);
    plStack_38 = param_2 + 3;
    func_0x00010a190844(&plStack_38);
    __ZdlPv(param_2);
    param_2 = (long *)lVar1;
  }
  return;
}



/* Entry: 10a7b616c; end: 10a7b61bb;  */

void FUN_10a7b616c(ulong param_1,long param_2)

{
  long lStack_28;
  
  if ((param_1 & 1) != 0) {
    lStack_28 = param_2 + 0x60;
    func_0x00010a7b60fc(&lStack_28);
    lStack_28 = param_2 + 0x18;
    func_0x00010a190844(&lStack_28);
  }
  __ZdlPv(param_2);
  return;
}



/* Entry: 10a7b61bc; end: 10a7b61cb;  */

void FUN_10a7b61bc(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c188d8;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10a7b61cc; end: 10a7b61eb;  */

void FUN_10a7b61cc(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c188d8;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a7b61ec; end: 10a7b628b;  */

void FUN_10a7b61ec(long param_1)

{
  long lStack_28;
  
  if (*(long *)(param_1 + 0x130) != 0) {
    *(long *)(param_1 + 0x138) = *(long *)(param_1 + 0x130);
    __ZdlPv();
  }
  func_0x00010a0616d0(param_1 + 0x118);
  lStack_28 = param_1 + 0xd0;
  func_0x00010a190844(&lStack_28);
  if (*(long *)(param_1 + 0xa0) != 0) {
    *(long *)(param_1 + 0xa8) = *(long *)(param_1 + 0xa0);
    __ZdlPv();
  }
  if (*(long *)(param_1 + 0x80) != 0) {
    *(long *)(param_1 + 0x88) = *(long *)(param_1 + 0x80);
    __ZdlPv();
  }
  if (*(long *)(param_1 + 0x60) != 0) {
    *(long *)(param_1 + 0x68) = *(long *)(param_1 + 0x60);
    __ZdlPv();
  }
  if (*(long *)(param_1 + 0x40) != 0) {
    *(long *)(param_1 + 0x48) = *(long *)(param_1 + 0x40);
    __ZdlPv();
  }
  FUN_10a7b6290(param_1 + 0x28);
  if (*(long *)(param_1 + 0x20) != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  return;
}



/* Entry: 10a7b628c; end: 10a7b628f;  */

void FUN_10a7b628c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a7b6290; end: 10a7b62fb;  */

void FUN_10a7b6290(long *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar2 = *param_1;
  if (lVar2 != 0) {
    lVar3 = param_1[1];
    lVar1 = lVar2;
    if (lVar3 != lVar2) {
      do {
        if (*(long *)(lVar3 + -8) != 0) {
          __ZNSt3__119__shared_weak_count14__release_weakEv();
        }
        lVar3 = lVar3 + -0x10;
      } while (lVar3 != lVar2);
      lVar1 = *param_1;
    }
    param_1[1] = lVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(lVar1);
    return;
  }
  return;
}



/* Entry: 10a7b62fc; end: 10a7b630b;  */

void FUN_10a7b62fc(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c18928;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10a7b630c; end: 10a7b632b;  */

void FUN_10a7b630c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c18928;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a7b632c; end: 10a7b647f;  */

void FUN_10a7b632c(long param_1)

{
  long *plVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  char cVar5;
  bool bVar6;
  long *plVar7;
  undefined4 *puVar8;
  long lVar9;
  
  plVar7 = *(long **)(param_1 + 0x20);
  if ((plVar7 != (long *)0x0) && (__ZNSt3__119__shared_weak_count4lockEv(), plVar7 != (long *)0x0))
  {
    lVar9 = *(long *)(param_1 + 0x18);
    if (lVar9 != 0) {
      uVar2 = *(undefined4 *)(param_1 + 0x34);
      uVar3 = *(undefined4 *)(param_1 + 0x38);
      FUN_10a7788f4(lVar9 + 0x28,*(undefined4 *)(param_1 + 0x28),*(undefined4 *)(param_1 + 0x2c));
      FUN_10a7788f4(lVar9 + 0x68,uVar2,uVar3);
      *(undefined1 *)(lVar9 + 0x114) = 1;
    }
    plVar1 = plVar7 + 1;
    do {
      lVar9 = *plVar1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar6) {
        *plVar1 = lVar9 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (lVar9 == 0) {
      (**(code **)(*plVar7 + 0x10))(plVar7);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
    }
  }
  plVar7 = *(long **)(param_1 + 0x68);
  if ((plVar7 != (long *)0x0) && (__ZNSt3__119__shared_weak_count4lockEv(), plVar7 != (long *)0x0))
  {
    lVar9 = *(long *)(param_1 + 0x60);
    if (lVar9 != 0) {
      puVar4 = *(undefined4 **)(param_1 + 0x78);
      for (puVar8 = *(undefined4 **)(param_1 + 0x70); puVar8 != puVar4; puVar8 = puVar8 + 1) {
        FUN_10a790fe8(lVar9,*puVar8);
      }
    }
    plVar1 = plVar7 + 1;
    do {
      lVar9 = *plVar1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar6) {
        *plVar1 = lVar9 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (lVar9 == 0) {
      (**(code **)(*plVar7 + 0x10))(plVar7);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
    }
  }
  if (*(long *)(param_1 + 0x70) != 0) {
    *(long *)(param_1 + 0x78) = *(long *)(param_1 + 0x70);
    __ZdlPv();
  }
  if (*(long *)(param_1 + 0x68) != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  if (*(long *)(param_1 + 0x50) != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  if (*(long *)(param_1 + 0x20) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZNSt3__119__shared_weak_count14__release_weakEv_110346648)();
    return;
  }
  return;
}



/* Entry: 10a7b6480; end: 10a7b6483;  */

void FUN_10a7b6480(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a7b6484; end: 10a7b6573;  */

void FUN_10a7b6484(ulong *param_1,ulong param_2)

{
  byte bVar1;
  ulong *puVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  undefined8 uVar8;
  
  uVar3 = *param_1;
  uVar4 = param_1[2];
  uVar5 = (uVar3 >> 0xc ^ param_2 >> 7) & uVar4;
  uVar8 = *(undefined8 *)(uVar3 + uVar5);
  uVar7 = CONCAT17(-((char)((ulong)uVar8 >> 0x38) < -1),
                   CONCAT16(-((char)((ulong)uVar8 >> 0x30) < -1),
                            CONCAT15(-((char)((ulong)uVar8 >> 0x28) < -1),
                                     CONCAT14(-((char)((ulong)uVar8 >> 0x20) < -1),
                                              CONCAT13(-((char)((ulong)uVar8 >> 0x18) < -1),
                                                       CONCAT12(-((char)((ulong)uVar8 >> 0x10) < -1)
                                                                ,CONCAT11(-((char)((ulong)uVar8 >> 8
                                                                                  ) < -1),
                                                                          -((char)uVar8 < -1))))))))
  ;
  if (uVar7 == 0) {
    lVar6 = 8;
    do {
      uVar5 = uVar5 + lVar6 & uVar4;
      uVar8 = *(undefined8 *)(uVar3 + uVar5);
      uVar7 = CONCAT17(-((char)((ulong)uVar8 >> 0x38) < -1),
                       CONCAT16(-((char)((ulong)uVar8 >> 0x30) < -1),
                                CONCAT15(-((char)((ulong)uVar8 >> 0x28) < -1),
                                         CONCAT14(-((char)((ulong)uVar8 >> 0x20) < -1),
                                                  CONCAT13(-((char)((ulong)uVar8 >> 0x18) < -1),
                                                           CONCAT12(-((char)((ulong)uVar8 >> 0x10) <
                                                                     -1),CONCAT11(-((char)((ulong)
                                                  uVar8 >> 8) < -1),-((char)uVar8 < -1))))))));
      lVar6 = lVar6 + 8;
    } while (uVar7 == 0);
  }
  uVar7 = (uVar7 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar7 & 0x5555555555555555) << 1;
  uVar7 = (uVar7 & 0xcccccccccccccccc) >> 2 | (uVar7 & 0x3333333333333333) << 2;
  uVar7 = (uVar7 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar7 & 0xf0f0f0f0f0f0f0f) << 4;
  uVar7 = (uVar7 & 0xff00ff00ff00ff00) >> 8 | (uVar7 & 0xff00ff00ff00ff) << 8;
  uVar7 = (uVar7 & 0xffff0000ffff0000) >> 0x10 | (uVar7 & 0xffff0000ffff) << 0x10;
  puVar2 = (ulong *)(uVar5 + ((ulong)LZCOUNT(uVar7 >> 0x20 | uVar7 << 0x20) >> 3) & uVar4);
  if ((*(long *)(uVar3 - 8) == 0) && (*(char *)(uVar3 + (long)puVar2) != -2)) {
    FUN_10a7b6698(param_1);
    puVar2 = param_1;
    func_0x000107c2b954(param_1,param_2);
    uVar3 = *param_1;
  }
  param_1[3] = param_1[3] + 1;
  *(ulong *)(uVar3 - 8) = *(long *)(uVar3 - 8) - (ulong)(*(char *)(uVar3 + (long)puVar2) == -0x80);
  bVar1 = (byte)param_2 & 0x7f;
  uVar4 = param_1[2];
  *(byte *)(uVar3 + (long)puVar2) = bVar1;
  *(byte *)(uVar3 + (uVar4 & (long)puVar2 - 7U) + (uVar4 & 7)) = bVar1;
  return;
}



/* Entry: 10a7b6574; end: 10a7b6697;  */

void FUN_10a7b6574(ulong *param_1,ulong param_2)

{
  long *plVar1;
  ulong uVar2;
  ulong uVar3;
  byte bVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  long *plVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  long lVar15;
  ulong uVar16;
  undefined8 uVar17;
  
  uVar2 = *param_1;
  uVar3 = param_1[1];
  uVar16 = param_1[2];
  param_1[2] = param_2;
  func_0x000104ab30b8();
  if (uVar16 != 0) {
    uVar8 = 0;
    uVar9 = param_1[1];
    do {
      if (-1 < *(char *)(uVar2 + uVar8)) {
        plVar1 = (long *)(uVar3 + uVar8 * 0x10);
        uVar14 = (long)&PTR_LOOP_110c8acd8 + *plVar1;
        auVar5._8_8_ = 0;
        auVar5._0_8_ = uVar14;
        uVar14 = (SUB168(auVar5 * ZEXT816(0x9ddfea08eb382d69),8) ^ uVar14 * -0x622015f714c7d297) +
                 *plVar1;
        auVar6._8_8_ = 0;
        auVar6._0_8_ = uVar14;
        uVar12 = SUB168(auVar6 * ZEXT816(0x9ddfea08eb382d69),8) ^ uVar14 * -0x622015f714c7d297;
        uVar10 = *param_1;
        uVar11 = param_1[2];
        uVar13 = (uVar12 >> 7 ^ uVar10 >> 0xc) & uVar11;
        uVar17 = *(undefined8 *)(uVar10 + uVar13);
        uVar14 = CONCAT17(-((char)((ulong)uVar17 >> 0x38) < -1),
                          CONCAT16(-((char)((ulong)uVar17 >> 0x30) < -1),
                                   CONCAT15(-((char)((ulong)uVar17 >> 0x28) < -1),
                                            CONCAT14(-((char)((ulong)uVar17 >> 0x20) < -1),
                                                     CONCAT13(-((char)((ulong)uVar17 >> 0x18) < -1),
                                                              CONCAT12(-((char)((ulong)uVar17 >>
                                                                               0x10) < -1),
                                                                       CONCAT11(-((char)((ulong)
                                                  uVar17 >> 8) < -1),-((char)uVar17 < -1))))))));
        if (uVar14 == 0) {
          lVar15 = 8;
          do {
            uVar13 = uVar13 + lVar15 & uVar11;
            uVar17 = *(undefined8 *)(uVar10 + uVar13);
            uVar14 = CONCAT17(-((char)((ulong)uVar17 >> 0x38) < -1),
                              CONCAT16(-((char)((ulong)uVar17 >> 0x30) < -1),
                                       CONCAT15(-((char)((ulong)uVar17 >> 0x28) < -1),
                                                CONCAT14(-((char)((ulong)uVar17 >> 0x20) < -1),
                                                         CONCAT13(-((char)((ulong)uVar17 >> 0x18) <
                                                                   -1),CONCAT12(-((char)((ulong)
                                                  uVar17 >> 0x10) < -1),
                                                  CONCAT11(-((char)((ulong)uVar17 >> 8) < -1),
                                                           -((char)uVar17 < -1))))))));
            lVar15 = lVar15 + 8;
          } while (uVar14 == 0);
        }
        uVar14 = (uVar14 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar14 & 0x5555555555555555) << 1;
        uVar14 = (uVar14 & 0xcccccccccccccccc) >> 2 | (uVar14 & 0x3333333333333333) << 2;
        uVar14 = (uVar14 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar14 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar14 = (uVar14 & 0xff00ff00ff00ff00) >> 8 | (uVar14 & 0xff00ff00ff00ff) << 8;
        uVar14 = (uVar14 & 0xffff0000ffff0000) >> 0x10 | (uVar14 & 0xffff0000ffff) << 0x10;
        uVar14 = uVar13 + ((ulong)LZCOUNT(uVar14 >> 0x20 | uVar14 << 0x20) >> 3) & uVar11;
        bVar4 = (byte)uVar12 & 0x7f;
        *(byte *)(uVar10 + uVar14) = bVar4;
        *(byte *)(uVar10 + (uVar14 - 7 & uVar11) + (uVar11 & 7)) = bVar4;
        lVar15 = *plVar1;
        plVar7 = (long *)(uVar9 + uVar14 * 0x10);
        plVar7[1] = plVar1[1];
        *plVar7 = lVar15;
      }
      uVar8 = uVar8 + 1;
    } while (uVar8 != uVar16);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(uVar2 - 8);
    return;
  }
  return;
}



/* Entry: 10a7b6698; end: 10a7b6737;  */

ulong * FUN_10a7b6698(ulong *param_1,long *param_2)

{
  long *plVar1;
  ulong uVar2;
  ulong uVar3;
  byte bVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  long *plVar9;
  ulong *puVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  ulong uVar17;
  ulong uVar18;
  ulong uVar19;
  undefined8 uVar20;
  
  lVar11 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar12 = param_1[2];
  if ((uVar12 < 9) || (uVar12 * 0x19 < param_1[3] << 5)) {
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar11) {
      uVar2 = *param_1;
      uVar3 = param_1[1];
      uVar19 = param_1[2];
      param_1[2] = uVar12 << 1 | 1;
      puVar10 = param_1;
      func_0x000104ab30b8();
      if (uVar19 != 0) {
        uVar12 = 0;
        uVar13 = param_1[1];
        do {
          if (-1 < *(char *)(uVar2 + uVar12)) {
            plVar1 = (long *)(uVar3 + uVar12 * 0x10);
            uVar18 = (long)&PTR_LOOP_110c8acd8 + *plVar1;
            auVar5._8_8_ = 0;
            auVar5._0_8_ = uVar18;
            uVar18 = (SUB168(auVar5 * ZEXT816(0x9ddfea08eb382d69),8) ^ uVar18 * -0x622015f714c7d297)
                     + *plVar1;
            auVar6._8_8_ = 0;
            auVar6._0_8_ = uVar18;
            uVar16 = SUB168(auVar6 * ZEXT816(0x9ddfea08eb382d69),8) ^ uVar18 * -0x622015f714c7d297;
            uVar14 = *param_1;
            uVar15 = param_1[2];
            uVar17 = (uVar16 >> 7 ^ uVar14 >> 0xc) & uVar15;
            uVar20 = *(undefined8 *)(uVar14 + uVar17);
            uVar18 = CONCAT17(-((char)((ulong)uVar20 >> 0x38) < -1),
                              CONCAT16(-((char)((ulong)uVar20 >> 0x30) < -1),
                                       CONCAT15(-((char)((ulong)uVar20 >> 0x28) < -1),
                                                CONCAT14(-((char)((ulong)uVar20 >> 0x20) < -1),
                                                         CONCAT13(-((char)((ulong)uVar20 >> 0x18) <
                                                                   -1),CONCAT12(-((char)((ulong)
                                                  uVar20 >> 0x10) < -1),
                                                  CONCAT11(-((char)((ulong)uVar20 >> 8) < -1),
                                                           -((char)uVar20 < -1))))))));
            if (uVar18 == 0) {
              lVar11 = 8;
              do {
                uVar17 = uVar17 + lVar11 & uVar15;
                uVar20 = *(undefined8 *)(uVar14 + uVar17);
                uVar18 = CONCAT17(-((char)((ulong)uVar20 >> 0x38) < -1),
                                  CONCAT16(-((char)((ulong)uVar20 >> 0x30) < -1),
                                           CONCAT15(-((char)((ulong)uVar20 >> 0x28) < -1),
                                                    CONCAT14(-((char)((ulong)uVar20 >> 0x20) < -1),
                                                             CONCAT13(-((char)((ulong)uVar20 >> 0x18
                                                                              ) < -1),
                                                                      CONCAT12(-((char)((ulong)
                                                  uVar20 >> 0x10) < -1),
                                                  CONCAT11(-((char)((ulong)uVar20 >> 8) < -1),
                                                           -((char)uVar20 < -1))))))));
                lVar11 = lVar11 + 8;
              } while (uVar18 == 0);
            }
            uVar18 = (uVar18 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar18 & 0x5555555555555555) << 1;
            uVar18 = (uVar18 & 0xcccccccccccccccc) >> 2 | (uVar18 & 0x3333333333333333) << 2;
            uVar18 = (uVar18 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar18 & 0xf0f0f0f0f0f0f0f) << 4;
            uVar18 = (uVar18 & 0xff00ff00ff00ff00) >> 8 | (uVar18 & 0xff00ff00ff00ff) << 8;
            uVar18 = (uVar18 & 0xffff0000ffff0000) >> 0x10 | (uVar18 & 0xffff0000ffff) << 0x10;
            uVar18 = uVar17 + ((ulong)LZCOUNT(uVar18 >> 0x20 | uVar18 << 0x20) >> 3) & uVar15;
            bVar4 = (byte)uVar16 & 0x7f;
            *(byte *)(uVar14 + uVar18) = bVar4;
            *(byte *)(uVar14 + (uVar18 - 7 & uVar15) + (uVar15 & 7)) = bVar4;
            lVar11 = *plVar1;
            plVar9 = (long *)(uVar13 + uVar18 * 0x10);
            plVar9[1] = plVar1[1];
            *plVar9 = lVar11;
          }
          uVar12 = uVar12 + 1;
        } while (uVar12 != uVar19);
        puVar10 = (ulong *)(uVar2 - 8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR___ZdlPv_110352258)(puVar10);
        return puVar10;
      }
      return puVar10;
    }
  }
  else {
    param_2 = (long *)&UNK_110c18968;
    FUN_10ae6c914(param_1,&UNK_110c18968,&stack0xffffffffffffffd8);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar11) {
      return param_1;
    }
  }
  ___stack_chk_fail();
  uVar12 = (long)&PTR_LOOP_110c8acd8 + *param_2;
  auVar7._8_8_ = 0;
  auVar7._0_8_ = uVar12;
  uVar12 = (SUB168(auVar7 * ZEXT816(0x9ddfea08eb382d69),8) ^ uVar12 * -0x622015f714c7d297) +
           *param_2;
  auVar8._8_8_ = 0;
  auVar8._0_8_ = uVar12;
  return (ulong *)(SUB168(auVar8 * ZEXT816(0x9ddfea08eb382d69),8) ^ uVar12 * -0x622015f714c7d297);
}



/* Entry: 10a7b6738; end: 10a7b6783;  */

ulong FUN_10a7b6738(undefined8 param_1,long *param_2)

{
  ulong uVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  
  uVar1 = (long)&PTR_LOOP_110c8acd8 + *param_2;
  auVar2._8_8_ = 0;
  auVar2._0_8_ = uVar1;
  uVar1 = (SUB168(auVar2 * ZEXT816(0x9ddfea08eb382d69),8) ^ uVar1 * -0x622015f714c7d297) + *param_2;
  auVar3._8_8_ = 0;
  auVar3._0_8_ = uVar1;
  return SUB168(auVar3 * ZEXT816(0x9ddfea08eb382d69),8) ^ uVar1 * -0x622015f714c7d297;
}



/* Entry: 10a7b6784; end: 10a7b6873;  */

void FUN_10a7b6784(ulong *param_1,ulong param_2)

{
  byte bVar1;
  ulong *puVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  undefined8 uVar8;
  
  uVar3 = *param_1;
  uVar4 = param_1[2];
  uVar5 = (uVar3 >> 0xc ^ param_2 >> 7) & uVar4;
  uVar8 = *(undefined8 *)(uVar3 + uVar5);
  uVar7 = CONCAT17(-((char)((ulong)uVar8 >> 0x38) < -1),
                   CONCAT16(-((char)((ulong)uVar8 >> 0x30) < -1),
                            CONCAT15(-((char)((ulong)uVar8 >> 0x28) < -1),
                                     CONCAT14(-((char)((ulong)uVar8 >> 0x20) < -1),
                                              CONCAT13(-((char)((ulong)uVar8 >> 0x18) < -1),
                                                       CONCAT12(-((char)((ulong)uVar8 >> 0x10) < -1)
                                                                ,CONCAT11(-((char)((ulong)uVar8 >> 8
                                                                                  ) < -1),
                                                                          -((char)uVar8 < -1))))))))
  ;
  if (uVar7 == 0) {
    lVar6 = 8;
    do {
      uVar5 = uVar5 + lVar6 & uVar4;
      uVar8 = *(undefined8 *)(uVar3 + uVar5);
      uVar7 = CONCAT17(-((char)((ulong)uVar8 >> 0x38) < -1),
                       CONCAT16(-((char)((ulong)uVar8 >> 0x30) < -1),
                                CONCAT15(-((char)((ulong)uVar8 >> 0x28) < -1),
                                         CONCAT14(-((char)((ulong)uVar8 >> 0x20) < -1),
                                                  CONCAT13(-((char)((ulong)uVar8 >> 0x18) < -1),
                                                           CONCAT12(-((char)((ulong)uVar8 >> 0x10) <
                                                                     -1),CONCAT11(-((char)((ulong)
                                                  uVar8 >> 8) < -1),-((char)uVar8 < -1))))))));
      lVar6 = lVar6 + 8;
    } while (uVar7 == 0);
  }
  uVar7 = (uVar7 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar7 & 0x5555555555555555) << 1;
  uVar7 = (uVar7 & 0xcccccccccccccccc) >> 2 | (uVar7 & 0x3333333333333333) << 2;
  uVar7 = (uVar7 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar7 & 0xf0f0f0f0f0f0f0f) << 4;
  uVar7 = (uVar7 & 0xff00ff00ff00ff00) >> 8 | (uVar7 & 0xff00ff00ff00ff) << 8;
  uVar7 = (uVar7 & 0xffff0000ffff0000) >> 0x10 | (uVar7 & 0xffff0000ffff) << 0x10;
  puVar2 = (ulong *)(uVar5 + ((ulong)LZCOUNT(uVar7 >> 0x20 | uVar7 << 0x20) >> 3) & uVar4);
  if ((*(long *)(uVar3 - 8) == 0) && (*(char *)(uVar3 + (long)puVar2) != -2)) {
    FUN_10a7b69c0(param_1);
    puVar2 = param_1;
    func_0x000107c2b954(param_1,param_2);
    uVar3 = *param_1;
  }
  param_1[3] = param_1[3] + 1;
  *(ulong *)(uVar3 - 8) = *(long *)(uVar3 - 8) - (ulong)(*(char *)(uVar3 + (long)puVar2) == -0x80);
  bVar1 = (byte)param_2 & 0x7f;
  uVar4 = param_1[2];
  *(byte *)(uVar3 + (long)puVar2) = bVar1;
  *(byte *)(uVar3 + (uVar4 & (long)puVar2 - 7U) + (uVar4 & 7)) = bVar1;
  return;
}



/* Entry: 10a7b6874; end: 10a7b69bf;  */

void FUN_10a7b6874(ulong *param_1,ulong param_2)

{
  ulong uVar1;
  ulong uVar2;
  byte bVar3;
  undefined1 auVar4 [16];
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  undefined8 uVar14;
  ulong uVar15;
  
  uVar1 = *param_1;
  uVar2 = param_1[1];
  uVar11 = param_1[2];
  param_1[2] = param_2;
  func_0x000104c32974();
  if (uVar11 != 0) {
    uVar12 = 0;
    uVar13 = param_1[1];
    do {
      if (-1 < *(char *)(uVar1 + uVar12)) {
        lVar10 = uVar2 + uVar12 * 0x78;
        uVar5 = (long)&PTR_LOOP_110c8acd8 + *(long *)(lVar10 + 0x18);
        auVar4._8_8_ = 0;
        auVar4._0_8_ = uVar5;
        uVar7 = SUB168(auVar4 * ZEXT816(0x9ddfea08eb382d69),8) ^ uVar5 * -0x622015f714c7d297;
        uVar5 = *param_1;
        uVar6 = param_1[2];
        uVar8 = (uVar7 >> 7 ^ uVar5 >> 0xc) & uVar6;
        uVar14 = *(undefined8 *)(uVar5 + uVar8);
        uVar15 = CONCAT17(-((char)((ulong)uVar14 >> 0x38) < -1),
                          CONCAT16(-((char)((ulong)uVar14 >> 0x30) < -1),
                                   CONCAT15(-((char)((ulong)uVar14 >> 0x28) < -1),
                                            CONCAT14(-((char)((ulong)uVar14 >> 0x20) < -1),
                                                     CONCAT13(-((char)((ulong)uVar14 >> 0x18) < -1),
                                                              CONCAT12(-((char)((ulong)uVar14 >>
                                                                               0x10) < -1),
                                                                       CONCAT11(-((char)((ulong)
                                                  uVar14 >> 8) < -1),-((char)uVar14 < -1))))))));
        if (uVar15 == 0) {
          lVar9 = 8;
          do {
            uVar8 = uVar8 + lVar9 & uVar6;
            uVar14 = *(undefined8 *)(uVar5 + uVar8);
            uVar15 = CONCAT17(-((char)((ulong)uVar14 >> 0x38) < -1),
                              CONCAT16(-((char)((ulong)uVar14 >> 0x30) < -1),
                                       CONCAT15(-((char)((ulong)uVar14 >> 0x28) < -1),
                                                CONCAT14(-((char)((ulong)uVar14 >> 0x20) < -1),
                                                         CONCAT13(-((char)((ulong)uVar14 >> 0x18) <
                                                                   -1),CONCAT12(-((char)((ulong)
                                                  uVar14 >> 0x10) < -1),
                                                  CONCAT11(-((char)((ulong)uVar14 >> 8) < -1),
                                                           -((char)uVar14 < -1))))))));
            lVar9 = lVar9 + 8;
          } while (uVar15 == 0);
        }
        uVar15 = (uVar15 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar15 & 0x5555555555555555) << 1;
        uVar15 = (uVar15 & 0xcccccccccccccccc) >> 2 | (uVar15 & 0x3333333333333333) << 2;
        uVar15 = (uVar15 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar15 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar15 = (uVar15 & 0xff00ff00ff00ff00) >> 8 | (uVar15 & 0xff00ff00ff00ff) << 8;
        uVar15 = (uVar15 & 0xffff0000ffff0000) >> 0x10 | (uVar15 & 0xffff0000ffff) << 0x10;
        uVar8 = uVar8 + ((ulong)LZCOUNT(uVar15 >> 0x20 | uVar15 << 0x20) >> 3) & uVar6;
        bVar3 = (byte)uVar7 & 0x7f;
        *(byte *)(uVar5 + uVar8) = bVar3;
        *(byte *)(uVar5 + (uVar8 - 7 & uVar6) + (uVar6 & 7)) = bVar3;
        FUN_10a7b6a60(uVar13 + uVar8 * 0x78,lVar10);
        FUN_10a7a7280(lVar10);
      }
      uVar12 = uVar12 + 1;
    } while (uVar12 != uVar11);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(uVar1 - 8);
    return;
  }
  return;
}



/* Entry: 10a7b69c0; end: 10a7b6a5f;  */

void FUN_10a7b69c0(ulong *param_1,ulong *param_2)

{
  ulong uVar1;
  byte bVar2;
  undefined1 auVar3 [16];
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  undefined8 uVar13;
  ulong uVar14;
  ulong uVar15;
  undefined1 auStack_90 [48];
  
  lVar5 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar6 = param_1[2];
  if ((uVar6 < 9) || (uVar6 * 0x19 < param_1[3] << 5)) {
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar5) {
      uVar15 = *param_1;
      uVar1 = param_1[1];
      uVar11 = param_1[2];
      param_1[2] = uVar6 << 1 | 1;
      func_0x000104c32974();
      if (uVar11 != 0) {
        uVar6 = 0;
        uVar12 = param_1[1];
        do {
          if (-1 < *(char *)(uVar15 + uVar6)) {
            lVar5 = uVar1 + uVar6 * 0x78;
            uVar4 = (long)&PTR_LOOP_110c8acd8 + *(long *)(lVar5 + 0x18);
            auVar3._8_8_ = 0;
            auVar3._0_8_ = uVar4;
            uVar8 = SUB168(auVar3 * ZEXT816(0x9ddfea08eb382d69),8) ^ uVar4 * -0x622015f714c7d297;
            uVar4 = *param_1;
            uVar7 = param_1[2];
            uVar9 = (uVar8 >> 7 ^ uVar4 >> 0xc) & uVar7;
            uVar13 = *(undefined8 *)(uVar4 + uVar9);
            uVar14 = CONCAT17(-((char)((ulong)uVar13 >> 0x38) < -1),
                              CONCAT16(-((char)((ulong)uVar13 >> 0x30) < -1),
                                       CONCAT15(-((char)((ulong)uVar13 >> 0x28) < -1),
                                                CONCAT14(-((char)((ulong)uVar13 >> 0x20) < -1),
                                                         CONCAT13(-((char)((ulong)uVar13 >> 0x18) <
                                                                   -1),CONCAT12(-((char)((ulong)
                                                  uVar13 >> 0x10) < -1),
                                                  CONCAT11(-((char)((ulong)uVar13 >> 8) < -1),
                                                           -((char)uVar13 < -1))))))));
            if (uVar14 == 0) {
              lVar10 = 8;
              do {
                uVar9 = uVar9 + lVar10 & uVar7;
                uVar13 = *(undefined8 *)(uVar4 + uVar9);
                uVar14 = CONCAT17(-((char)((ulong)uVar13 >> 0x38) < -1),
                                  CONCAT16(-((char)((ulong)uVar13 >> 0x30) < -1),
                                           CONCAT15(-((char)((ulong)uVar13 >> 0x28) < -1),
                                                    CONCAT14(-((char)((ulong)uVar13 >> 0x20) < -1),
                                                             CONCAT13(-((char)((ulong)uVar13 >> 0x18
                                                                              ) < -1),
                                                                      CONCAT12(-((char)((ulong)
                                                  uVar13 >> 0x10) < -1),
                                                  CONCAT11(-((char)((ulong)uVar13 >> 8) < -1),
                                                           -((char)uVar13 < -1))))))));
                lVar10 = lVar10 + 8;
              } while (uVar14 == 0);
            }
            uVar14 = (uVar14 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar14 & 0x5555555555555555) << 1;
            uVar14 = (uVar14 & 0xcccccccccccccccc) >> 2 | (uVar14 & 0x3333333333333333) << 2;
            uVar14 = (uVar14 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar14 & 0xf0f0f0f0f0f0f0f) << 4;
            uVar14 = (uVar14 & 0xff00ff00ff00ff00) >> 8 | (uVar14 & 0xff00ff00ff00ff) << 8;
            uVar14 = (uVar14 & 0xffff0000ffff0000) >> 0x10 | (uVar14 & 0xffff0000ffff) << 0x10;
            uVar9 = uVar9 + ((ulong)LZCOUNT(uVar14 >> 0x20 | uVar14 << 0x20) >> 3) & uVar7;
            bVar2 = (byte)uVar8 & 0x7f;
            *(byte *)(uVar4 + uVar9) = bVar2;
            *(byte *)(uVar4 + (uVar9 - 7 & uVar7) + (uVar7 & 7)) = bVar2;
            FUN_10a7b6a60(uVar12 + uVar9 * 0x78,lVar5);
            FUN_10a7a7280(lVar5);
          }
          uVar6 = uVar6 + 1;
        } while (uVar6 != uVar11);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR___ZdlPv_110352258)(uVar15 - 8);
        return;
      }
      return;
    }
  }
  else {
    param_2 = (ulong *)&UNK_110c18988;
    FUN_10ae6c914(param_1,&UNK_110c18988,auStack_90);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar5) {
      return;
    }
  }
  ___stack_chk_fail();
  uVar15 = param_2[1];
  uVar6 = *param_2;
  param_1[2] = param_2[2];
  param_1[1] = uVar15;
  *param_1 = uVar6;
  param_2[1] = 0;
  param_2[2] = 0;
  *param_2 = 0;
  param_1[3] = param_2[3];
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  uVar6 = param_2[4];
  param_1[5] = param_2[5];
  param_1[4] = uVar6;
  param_1[6] = param_2[6];
  param_2[4] = 0;
  param_2[5] = 0;
  param_2[6] = 0;
  uVar6 = param_2[7];
  *(undefined1 *)((long)param_1 + 0x3c) = *(undefined1 *)((long)param_2 + 0x3c);
  *(int *)(param_1 + 7) = (int)uVar6;
  uVar15 = param_2[9];
  uVar6 = param_2[8];
  param_1[10] = param_2[10];
  param_1[9] = uVar15;
  param_1[8] = uVar6;
  param_2[9] = 0;
  param_2[10] = 0;
  param_2[8] = 0;
  param_1[0xb] = param_2[0xb];
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
  return;
}



/* Entry: 10a7b6a60; end: 10a7b6b1b;  */

void FUN_10a7b6a60(undefined8 *param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = param_2[1];
  uVar2 = *param_2;
  param_1[2] = param_2[2];
  param_1[1] = uVar3;
  *param_1 = uVar2;
  param_2[1] = 0;
  param_2[2] = 0;
  *param_2 = 0;
  param_1[3] = param_2[3];
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  uVar2 = param_2[4];
  param_1[5] = param_2[5];
  param_1[4] = uVar2;
  param_1[6] = param_2[6];
  param_2[4] = 0;
  param_2[5] = 0;
  param_2[6] = 0;
  uVar1 = *(undefined4 *)(param_2 + 7);
  *(undefined1 *)((long)param_1 + 0x3c) = *(undefined1 *)((long)param_2 + 0x3c);
  *(undefined4 *)(param_1 + 7) = uVar1;
  uVar3 = param_2[9];
  uVar2 = param_2[8];
  param_1[10] = param_2[10];
  param_1[9] = uVar3;
  param_1[8] = uVar2;
  param_2[9] = 0;
  param_2[10] = 0;
  param_2[8] = 0;
  param_1[0xb] = param_2[0xb];
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  uVar2 = param_2[0xc];
  param_1[0xd] = param_2[0xd];
  param_1[0xc] = uVar2;
  param_1[0xe] = param_2[0xe];
  param_2[0xc] = 0;
  param_2[0xd] = 0;
  param_2[0xe] = 0;
  return;
}



/* Entry: 10a7b6b1c; end: 10a7b6b47;  */

void FUN_10a7b6b1c(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 *puStack_28;
  
  FUN_10a7b6a60(param_2,param_3);
  puStack_28 = param_3 + 0xc;
  FUN_10a7a76a4(&puStack_28);
  if (*(char *)((long)param_3 + 0x57) < '\0') {
    __ZdlPv(param_3[8]);
  }
  puStack_28 = param_3 + 4;
  func_0x00010a1f4614(&puStack_28);
  if (*(char *)((long)param_3 + 0x17) < '\0') {
    __ZdlPv(*param_3);
  }
  return;
}



/* Entry: 10a7b6b48; end: 10a7b6da7;  */

undefined8 *
FUN_10a7b6b48(undefined8 *param_1,undefined8 param_2,ulong param_3,undefined8 param_4,int param_5,
             undefined8 param_6,undefined8 param_7,undefined8 param_8,undefined1 param_9,
             undefined4 param_10,char param_11)

{
  undefined **ppuVar1;
  code *pcVar2;
  undefined8 *puVar3;
  long *plVar4;
  uint uVar5;
  ulong uVar6;
  ulong uVar7;
  undefined8 *puVar8;
  uint uVar9;
  int iVar10;
  undefined8 uStack_80;
  undefined1 uStack_6a;
  undefined1 auStack_69 [9];
  
  puVar3 = param_1;
  FUN_10a773774(param_1,param_2,param_4,param_3,param_6,param_7,param_8,param_10);
  puVar3[0x13] = 0;
  puVar3[0x14] = 0;
  *puVar3 = &PTR_DAT_110c18f08;
  *(char *)(puVar3 + 0x15) = (char)param_5;
  *(char *)((long)puVar3 + 0xa9) = param_11;
  *(undefined1 *)((long)puVar3 + 0xaa) = 0;
  puVar8 = puVar3 + 0x16;
  *puVar8 = 0;
  puVar3[0x17] = 0;
  puVar3[0x18] = 0;
  if (((param_11 != '\0') && (*(char *)((long)param_1 + 0x21) == '\x01')) &&
     ((1 < *(int *)(param_1 + 3) || (1 < *(int *)((long)param_1 + 0x1c))))) {
    *(undefined1 *)((long)param_1 + 0xa9) = 0;
  }
  FUN_10a7b6da8(param_1,param_9,param_6);
  if ((param_5 != 0) && ((*(byte *)((long)param_1 + 0xa9) & 1) == 0)) {
    uVar9 = (uint)param_8;
    if ((uVar9 == 0) || ((*(byte *)((long)param_1 + 0x21) & 1) == 0)) {
      func_0x000109a8fea0(puVar8,1);
      plVar4 = (long *)param_1[0x16];
      if ((long *)param_1[0x17] == plVar4) {
LAB_10a7b6d70:
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x10a7b6d74);
        (*pcVar2)();
      }
      ppuVar1 = &PTR_DAT_110ae4700 + (param_3 & 0xffffffff) * 4;
      if (0x56 < (uint)param_3) {
        ppuVar1 = &PTR_DAT_110ae4700;
      }
      uVar6 = (long)*(int *)((long)param_1 + 0x8c) * (long)*(int *)(param_1 + 0x11) *
              (ulong)*(byte *)((long)ppuVar1 + 0x1b);
      uStack_6a = 0;
      uVar7 = plVar4[1] - *plVar4;
      if (uVar6 < uVar7 || uVar6 - uVar7 == 0) {
        if (uVar6 < uVar7) {
          plVar4[1] = *plVar4 + uVar6;
        }
      }
      else {
        func_0x000105343774(plVar4,uVar6 - uVar7,&uStack_6a);
      }
    }
    else {
      func_0x000109a8fea0(puVar8,uVar9 + 1);
      uVar5 = 0;
      uStack_80 = param_1[0x10];
      ppuVar1 = &PTR_DAT_110ae4700 + (param_3 & 0xffffffff) * 4;
      if (0x56 < (uint)param_3) {
        ppuVar1 = &PTR_DAT_110ae4700;
      }
      do {
        uVar6 = ((long)(param_1[0x17] - param_1[0x16]) >> 3) * -0x5555555555555555;
        if (uVar6 < (byte)uVar5 || uVar6 - (byte)uVar5 == 0) goto LAB_10a7b6d70;
        plVar4 = (long *)(param_1[0x16] + (ulong)(uVar5 & 0xff) * 0x18);
        iVar10 = (int)((ulong)uStack_80 >> 0x20);
        uVar6 = (long)(int)(uint)*(byte *)((long)ppuVar1 + 0x1b) * (long)((int)uStack_80 * iVar10);
        auStack_69[0] = 0;
        uVar7 = plVar4[1] - *plVar4;
        if (uVar6 < uVar7 || uVar6 - uVar7 == 0) {
          if (uVar6 < uVar7) {
            plVar4[1] = *plVar4 + uVar6;
          }
        }
        else {
          func_0x000105343774(plVar4,uVar6 - uVar7,auStack_69);
        }
        uStack_80 = NEON_smax(CONCAT44(iVar10 / 2,(int)uStack_80 / 2),0x100000001,4);
        uVar5 = (uVar5 & 0xff) + 1;
      } while ((uVar5 & 0xff) < uVar9);
    }
  }
  return param_1;
}



/* Entry: 10a7b6da8; end: 10a7b7213;  */

void FUN_10a7b6da8(long param_1,int param_2,uint param_3)

{
  undefined **ppuVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  long lVar5;
  long *plVar6;
  long *plVar7;
  bool bVar8;
  undefined4 uVar9;
  uint uVar10;
  long lVar11;
  bool bVar12;
  undefined8 uVar13;
  uint uVar14;
  undefined1 uStack_d9;
  long *plStack_d8;
  long *plStack_d0;
  uint uStack_c0;
  undefined8 uStack_bc;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  ulong uStack_a0;
  undefined1 uStack_98;
  long lStack_90;
  long lStack_88;
  long lStack_80;
  undefined8 uStack_78;
  
  if (param_2 == 0) {
    lStack_88 = 0;
    lStack_80 = 0;
    uStack_78 = 0;
    if (*(char *)(param_1 + 0xa9) == '\x01') goto LAB_10a7b6e28;
    bVar8 = false;
    lVar11 = 0;
  }
  else {
    lStack_88 = 0;
    lStack_80 = 0;
    uStack_78 = 0;
    if ((*(byte *)(param_1 + 0xa9) & 1) == 0) {
      if (((*(char *)(param_1 + 0xa8) != '\x01') ||
          (plVar6 = *(long **)(param_1 + 0xb0), plVar6 == *(long **)(param_1 + 0xb8))) ||
         (*plVar6 == plVar6[1])) {
        ppuVar1 = &PTR_DAT_110ae4700 + (ulong)*(uint *)(param_1 + 8) * 4;
        if (0x56 < *(uint *)(param_1 + 8)) {
          ppuVar1 = &PTR_DAT_110ae4700;
        }
        lVar11 = (long)*(int *)(param_1 + 0x84) * (long)*(int *)(param_1 + 0x80) *
                 (ulong)*(byte *)((long)ppuVar1 + 0x1b);
        __Znam();
        _bzero();
        bVar12 = false;
        bVar8 = true;
        goto LAB_10a7b6ec0;
      }
      bVar8 = true;
      lVar11 = *plVar6;
    }
    else {
LAB_10a7b6e28:
      uStack_78 = 0;
      lStack_80 = 0;
      lStack_88 = 0;
      ppuVar1 = &PTR_DAT_110ae4700 + (ulong)*(uint *)(param_1 + 8) * 4;
      if (0x56 < *(uint *)(param_1 + 8)) {
        ppuVar1 = &PTR_DAT_110ae4700;
      }
      uStack_c0 = uStack_c0 & 0xffffff00;
      func_0x000108a39c34(&lStack_88,
                          (long)*(int *)(param_1 + 0x84) * (long)*(int *)(param_1 + 0x80) *
                          (ulong)*(byte *)((long)ppuVar1 + 0x1b),&uStack_c0);
      bVar8 = true;
      lVar11 = lStack_88;
    }
  }
  bVar12 = true;
LAB_10a7b6ec0:
  uStack_b0 = *(undefined4 *)(param_1 + 8);
  uStack_c0 = 0;
  uStack_bc = *(undefined8 *)(param_1 + 0x80);
  uStack_b4 = 1;
  uStack_ac = 0;
  uStack_a8 = 0;
  uStack_98 = 0;
  uStack_a4 = 1;
  uStack_a0 = (ulong)param_3;
  if (bVar8) {
    uVar9 = 0x20;
  }
  else {
    uStack_a8 = 4;
    uVar9 = 0x24;
  }
  if (*(char *)(param_1 + 0xa9) == '\x01') {
    uStack_a8 = uVar9;
  }
  lVar5 = 0;
  lStack_90 = lVar11;
  FUN_10a2421c8();
  plVar6 = *(long **)(lVar5 + 0x228);
  (**(code **)(*plVar6 + 0x20))(plVar6,&uStack_c0);
  FUN_10a0a25e4(&plStack_d8,plVar6);
  FUN_10a00e5c4(param_1 + 0x28,&plStack_d8);
  plVar6 = plStack_d0;
  if (plStack_d0 != (long *)0x0) {
    plVar7 = plStack_d0 + 1;
    do {
      lVar5 = *plVar7;
      cVar2 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar8) {
        *plVar7 = lVar5 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar5 == 0) {
      (**(code **)(*plStack_d0 + 0x10))(plStack_d0);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
    }
  }
  if (((*(char *)(param_1 + 0xa9) == '\x01') && (*(char *)(param_1 + 0x21) == '\x01')) &&
     ((uVar10 = *(uint *)(param_1 + 0x24), uVar10 != 0 && (*(long *)(param_1 + 0x28) != 0)))) {
    if ((*(int *)(param_1 + 0x18) < 2) && (*(int *)(param_1 + 0x1c) < 2)) {
      bVar8 = false;
      plVar6 = (long *)0x0;
    }
    else {
      iVar4 = *(int *)(param_1 + 8);
      func_0x00010ab79cdc();
      if (iVar4 == -1) {
        plVar6 = (long *)0x0;
      }
      else {
        FUN_10a1b70c8(&plStack_d8);
        uVar10 = *(uint *)(param_1 + 0x24);
        plVar6 = plStack_d8;
      }
      bVar8 = true;
    }
    if (1 < uVar10) {
      uVar13 = NEON_smax(CONCAT44((int)((ulong)*(undefined8 *)(param_1 + 0x80) >> 0x20) / 2,
                                  (int)*(undefined8 *)(param_1 + 0x80) / 2),0x100000001,4);
      uVar10 = 1;
      do {
        uVar14 = (uint)((ulong)uVar13 >> 0x20);
        uVar3 = (uint)uVar13;
        if (bVar8) {
          if ((plVar6 != (long *)0x0) &&
             (plVar7 = plVar6, (**(code **)(*plVar6 + 0x18))(plVar6,uVar3,uVar14), 0 < (int)plVar7))
          {
            uStack_d9 = 0;
            FUN_10a0cf3f0(&plStack_d8,(ulong)plVar7 & 0xffffffff,&uStack_d9);
            (**(code **)(**(long **)(param_1 + 0x28) + 0xa0))
                      (*(long **)(param_1 + 0x28),0,0,0,uVar3,uVar14,0,plStack_d8,uVar10,0);
            goto LAB_10a7b710c;
          }
        }
        else {
          ppuVar1 = &PTR_DAT_110ae4700 + (ulong)*(uint *)(param_1 + 8) * 4;
          if (0x56 < *(uint *)(param_1 + 8)) {
            ppuVar1 = &PTR_DAT_110ae4700;
          }
          uStack_d9 = 0;
          FUN_10a0cf3f0(&plStack_d8,(ulong)*(byte *)((long)ppuVar1 + 0x1b) * (ulong)(uVar3 * uVar14)
                        ,&uStack_d9);
          (**(code **)(**(long **)(param_1 + 0x28) + 0xa0))
                    (*(long **)(param_1 + 0x28),0,0,0,uVar3,uVar14,0,plStack_d8,uVar10,0);
LAB_10a7b710c:
          if (plStack_d8 != (long *)0x0) {
            plStack_d0 = plStack_d8;
            __ZdlPv();
          }
        }
        uVar13 = NEON_umax(CONCAT44(uVar14 >> 1,uVar3 >> 1),0x100000001,4);
        uVar10 = uVar10 + 1;
      } while (uVar10 < *(uint *)(param_1 + 0x24));
    }
    if (plVar6 != (long *)0x0) {
      (**(code **)(*plVar6 + 0x30))(plVar6);
    }
  }
  if (lVar11 == 0) {
    bVar12 = true;
  }
  if (!bVar12) {
    __ZdaPv(lVar11);
  }
  if (lStack_88 != 0) {
    lStack_80 = lStack_88;
    __ZdlPv();
  }
  return;
}



/* Entry: 10a7b7214; end: 10a7b735b;  */

undefined8 * FUN_10a7b7214(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110c18ff0;
  if (param_1[0xd] != 0) {
    param_1[0xe] = param_1[0xd];
    __ZdlPv();
  }
  FUN_10a7a2e48(param_1 + 7);
  func_0x00010a0523dc(param_1 + 5);
  return param_1;
}



/* Entry: 10a7b735c; end: 10a7b741b;  */

void FUN_10a7b735c(undefined8 *param_1,long *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  int iStack_58;
  int iStack_54;
  int iStack_50;
  int iStack_4c;
  undefined1 auStack_48 [8];
  long *plStack_40;
  undefined1 uStack_38;
  
  FUN_10a77468c(&iStack_58);
  if ((iStack_58 < iStack_50 && iStack_4c != iStack_54) &&
      (iStack_50 <= iStack_58 || iStack_54 <= iStack_4c)) {
    (**(code **)(*param_2 + 0x60))(param_1,param_2,auStack_48,uStack_38);
  }
  else {
    *param_1 = 0;
    param_1[1] = 0;
  }
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
  return;
}



/* Entry: 10a7b741c; end: 10a7b74af;  */

void FUN_10a7b741c(long *param_1,long *param_2,undefined8 param_3,long param_4,undefined8 param_5,
                  undefined8 param_6,undefined8 param_7)

{
  long lVar1;
  
  (**(code **)(*param_2 + 0x10))(param_1,param_2,param_3,0);
  if ((param_4 != 0) && (*param_1 != 0)) {
    lVar1 = *(long *)(*param_1 + 0x18);
    FUN_10a7b7f1c(param_2,lVar1,lVar1 + 0x40,param_4,param_5,param_6,param_7);
  }
  return;
}



/* Entry: 10a7b74b0; end: 10a7b7547;  */

void FUN_10a7b74b0(long *param_1,long *param_2,undefined8 param_3,long *param_4,undefined8 param_5,
                  undefined8 param_6,undefined8 param_7)

{
  long lVar1;
  
  (**(code **)(*param_2 + 0x10))(param_1,param_2,param_3,0);
  if ((*param_4 != 0) && (*param_1 != 0)) {
    lVar1 = *(long *)(*param_1 + 0x18);
    FUN_10a7b9154(param_2,lVar1,lVar1 + 0x20,param_4,param_5,param_6,param_7);
  }
  return;
}



/* Entry: 10a7b7548; end: 10a7b75d7;  */

void FUN_10a7b7548(long *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  long lVar1;
  
  (**(code **)(*param_2 + 0x10))(param_1,param_2,param_3,0);
  if (*param_1 != 0) {
    lVar1 = *(long *)(*param_1 + 0x18);
    FUN_10a7b9f14(param_2,lVar1,lVar1 + 0x40,param_4,param_5,param_6,param_7);
  }
  return;
}



/* Entry: 10a7b75d8; end: 10a7b766b;  */

void FUN_10a7b75d8(long *param_1,long *param_2,undefined8 param_3,long param_4,undefined8 param_5,
                  undefined8 param_6,undefined8 param_7)

{
  long lVar1;
  
  (**(code **)(*param_2 + 0x60))(param_1,param_2,param_3,0);
  if ((param_4 != 0) && (*param_1 != 0)) {
    lVar1 = *(long *)(*param_1 + 0x18);
    FUN_10a7b7f1c(param_2,lVar1,lVar1 + 0x40,param_4,param_5,param_6,param_7);
  }
  return;
}



/* Entry: 10a7b766c; end: 10a7b771f;  */

void FUN_10a7b766c(long *param_1,long *param_2,undefined8 param_3,long *param_4,undefined8 param_5,
                  undefined8 param_6,undefined8 param_7)

{
  bool bVar1;
  long lVar2;
  
  if (*param_4 == 0) {
    bVar1 = false;
  }
  else {
    bVar1 = *(int *)(*param_4 + 0x10) == 1;
  }
  (**(code **)(*param_2 + 0x60))(param_1,param_2,param_3,bVar1);
  if ((*param_4 != 0) && (*param_1 != 0)) {
    lVar2 = *(long *)(*param_1 + 0x18);
    FUN_10a7b9154(param_2,lVar2,lVar2 + 0x40,param_4,param_5,param_6,param_7);
  }
  return;
}



/* Entry: 10a7b7720; end: 10a7b77af;  */

void FUN_10a7b7720(long *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  long lVar1;
  
  (**(code **)(*param_2 + 0x60))(param_1,param_2,param_3,0);
  if (*param_1 != 0) {
    lVar1 = *(long *)(*param_1 + 0x18);
    FUN_10a7b9f14(param_2,lVar1,lVar1 + 0x40,param_4,param_5,param_6,param_7);
  }
  return;
}



/* Entry: 10a7b77b0; end: 10a7b7ae7;  */

void FUN_10a7b77b0(long *param_1,long param_2,int *param_3,int *param_4)

{
  uint uVar1;
  int *piVar2;
  undefined **ppuVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  long lVar8;
  int iVar9;
  byte bVar10;
  bool bVar11;
  code *pcVar12;
  int iVar13;
  int iVar14;
  long *plVar15;
  int iVar16;
  int iVar17;
  ulong uVar18;
  ulong uVar19;
  int iVar20;
  uint uVar21;
  long lVar22;
  ulong uVar23;
  long lVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  undefined8 uStack_a8;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  long lStack_98;
  undefined8 uStack_88;
  
  if ((*(int *)(param_2 + 0x24) == 0) || (*(char *)(param_2 + 0x21) != '\x01')) {
LAB_10a7b7804:
    iVar13 = param_3[2] - *param_3;
    iVar16 = param_3[3] - param_3[1];
  }
  else {
    iVar13 = *param_4;
    iVar16 = param_4[1];
    if (iVar13 == 0 && iVar16 == 0) goto LAB_10a7b7804;
    if (iVar13 != param_3[2] - *param_3 || iVar16 != param_3[3] - param_3[1]) {
      uStack_88 = *(undefined8 *)param_4;
      bVar11 = true;
      goto LAB_10a7b7820;
    }
  }
  bVar11 = false;
  uStack_88 = CONCAT44(iVar16,iVar13);
LAB_10a7b7820:
  uStack_a0 = *(undefined4 *)(param_2 + 8);
  FUN_10ab79b88();
  FUN_10a326b40(param_1,&uStack_a8,&uStack_88,&uStack_a0);
  if ((*(byte *)(param_2 + 0xa9) & 1) == 0) {
    ppuVar3 = &PTR_DAT_110ae4700 + (ulong)*(uint *)(param_2 + 8) * 4;
    if (0x56 < *(uint *)(param_2 + 8)) {
      ppuVar3 = &PTR_DAT_110ae4700;
    }
    bVar10 = *(byte *)((long)ppuVar3 + 0x1b);
    iVar13 = 1;
    FUN_109fc8e58(1,1);
    if (!bVar11) {
      plVar15 = *(long **)(param_2 + 0xb0);
      if (*(long **)(param_2 + 0xb8) != plVar15) {
        iVar16 = (*param_3 + *(int *)(param_2 + 0x80) * param_3[1]) * (uint)bVar10;
        if ((ulong)(long)iVar16 < (ulong)(plVar15[1] - *plVar15)) {
          lVar24 = *param_1;
          FUN_10a1b7ee0(*(undefined8 *)(lVar24 + 0x28),*plVar15 + (long)iVar16,
                        *(undefined8 *)(lVar24 + 0x18),*(int *)(param_2 + 0x80) * iVar13,
                        (long)*(int *)(lVar24 + 0x14));
          return;
        }
      }
LAB_10a7b7acc:
                    /* WARNING: Does not return */
      pcVar12 = (code *)SoftwareBreakpoint(1,0x10a7b7ad0);
      (*pcVar12)();
    }
    uStack_a8 = CONCAT44(param_3[3] - param_3[1],param_3[2] - *param_3);
    FUN_10a775818(&uStack_a0);
    uVar21 = *(uint *)(param_2 + 0x24);
    if (uVar21 != 0) {
      uVar18 = 0;
      iVar4 = *param_3;
      iVar6 = param_3[1];
      iVar5 = param_3[2];
      iVar7 = param_3[3];
      iVar13 = *(int *)(param_2 + 0x80);
      iVar16 = *(int *)(param_2 + 0x84);
      fVar25 = (float)iVar13;
      fVar27 = (float)iVar4 / fVar25;
      fVar26 = (float)iVar16;
      fVar28 = (float)iVar6 / fVar26;
      lVar24 = *(long *)(*param_1 + 0x28);
      do {
        uVar18 = uVar18 & 0xff;
        if ((ulong)(lStack_98 - CONCAT44(uStack_9c,uStack_a0) >> 4) <= uVar18) goto LAB_10a7b7acc;
        iVar17 = (int)(fVar28 * (float)iVar16);
        iVar20 = (int)((fVar28 + (float)(iVar7 - iVar6) / fVar26) * (float)iVar16);
        if (iVar17 < iVar20) {
          iVar14 = (int)(fVar27 * (float)iVar13);
          uVar21 = (uint)bVar10;
          iVar9 = *(int *)(*param_1 + 0x10);
          piVar2 = (int *)(CONCAT44(uStack_9c,uStack_a0) + uVar18 * 0x10);
          lVar22 = (long)iVar20 - (long)iVar17;
          uVar23 = (ulong)bVar10 * ((long)iVar14 + (long)iVar13 * (long)iVar17);
          iVar17 = uVar21 * (*piVar2 + piVar2[1] * iVar9);
          do {
            uVar19 = (*(long *)(param_2 + 0xb8) - *(long *)(param_2 + 0xb0) >> 3) *
                     -0x5555555555555555;
            if ((uVar19 < uVar18 || uVar19 - uVar18 == 0) ||
               (plVar15 = (long *)(*(long *)(param_2 + 0xb0) + uVar18 * 0x18), lVar8 = *plVar15,
               (ulong)(plVar15[1] - lVar8) <= uVar23)) goto LAB_10a7b7acc;
            _memcpy(lVar24 + iVar17,lVar8 + uVar23,
                    (long)(int)uVar21 *
                    (long)((int)((fVar27 + (float)(iVar5 - iVar4) / fVar25) * (float)iVar13) -
                          iVar14));
            uVar23 = uVar23 + (long)(int)uVar21 * (long)iVar13;
            iVar17 = iVar17 + uVar21 * iVar9;
            lVar22 = lVar22 + -1;
          } while (lVar22 != 0);
          uVar21 = *(uint *)(param_2 + 0x24);
        }
        iVar13 = iVar13 / 2;
        if (iVar13 < 2) {
          iVar13 = 1;
        }
        iVar16 = iVar16 / 2;
        if (iVar16 < 2) {
          iVar16 = 1;
        }
        uVar1 = (int)uVar18 + 1;
        uVar18 = (ulong)uVar1;
      } while ((uVar1 & 0xff) < uVar21);
    }
    lStack_98 = CONCAT44(uStack_9c,uStack_a0);
    if (lStack_98 != 0) {
      __ZdlPv();
    }
  }
  return;
}



/* Entry: 10a7b7ae8; end: 10a7b7d07;  */

void FUN_10a7b7ae8(undefined4 *param_1,long param_2,int *param_3,int *param_4)

{
  int iVar1;
  int iVar2;
  long *plVar3;
  int iVar4;
  int iVar5;
  code *pcVar6;
  ulong uVar7;
  int iVar8;
  undefined8 *puVar9;
  long lVar10;
  ulong uVar11;
  float fVar12;
  float fVar13;
  undefined8 uVar14;
  float fVar15;
  int iVar16;
  int iVar17;
  float fVar18;
  float fVar19;
  long lStack_b0;
  undefined8 uStack_a8;
  long lStack_a0;
  ulong uStack_98;
  
  *(undefined1 *)(param_1 + 1) = 0;
  puVar9 = (undefined8 *)(param_1 + 2);
  *puVar9 = 0;
  *(undefined8 *)(param_1 + 4) = 0;
  *(undefined8 *)(param_1 + 6) = 0;
  *param_1 = *(undefined4 *)(param_2 + 8);
  plVar3 = *(long **)(param_2 + 0xb0);
  if ((plVar3 != *(long **)(param_2 + 0xb8)) && (lVar10 = *plVar3, lVar10 != plVar3[1])) {
    iVar16 = *(int *)(param_2 + 0x24);
    if ((iVar16 != 0) && (*(char *)(param_2 + 0x21) == '\x01')) {
      iVar8 = *param_4;
      iVar17 = param_4[1];
      if (iVar8 != 0 || iVar17 != 0) {
        iVar1 = *param_3;
        iVar2 = param_3[1];
        iVar4 = param_3[2] - iVar1;
        iVar5 = param_3[3] - iVar2;
        *(bool *)(param_1 + 1) = iVar8 != iVar4 || iVar17 != iVar5;
        if (iVar8 != iVar4 || iVar17 != iVar5) {
          uVar14 = *(undefined8 *)(param_2 + 0x80);
          func_0x00010a7ba580(puVar9,iVar16);
          if (*(int *)(param_2 + 0x24) == 0) {
            return;
          }
          lVar10 = 0;
          uVar11 = 0;
          fVar15 = (float)(int)((ulong)uVar14 >> 0x20);
          iVar16 = (int)uVar14;
          fVar18 = (float)iVar1 / (float)iVar16;
          fVar19 = (float)iVar2 / fVar15;
          do {
            uVar7 = (*(long *)(param_2 + 0xb8) - *(long *)(param_2 + 0xb0) >> 3) *
                    -0x5555555555555555;
            if (uVar7 < uVar11 || uVar7 - uVar11 == 0) {
                    /* WARNING: Does not return */
              pcVar6 = (code *)SoftwareBreakpoint(1,0x10a7b7ce4);
              (*pcVar6)();
            }
            iVar17 = (int)((ulong)uVar14 >> 0x20);
            fVar12 = (float)iVar17;
            iVar8 = (int)(fVar19 * fVar12);
            fVar13 = (float)(int)uVar14;
            lStack_b0 = *(long *)(*(long *)(param_2 + 0xb0) + lVar10);
            lStack_a0 = CONCAT44(iVar8,(int)(fVar18 * fVar13));
            uStack_98 = lStack_a0 +
                        ((ulong)(uint)((int)((fVar19 + (float)iVar5 / fVar15) * fVar12) - iVar8) <<
                        0x20) & 0xffffffff00000000 |
                        (ulong)(uint)(int)((fVar18 + (float)iVar4 / (float)iVar16) * fVar13);
            uStack_a8 = uVar14;
            func_0x00010a7ba4b8(puVar9,&lStack_b0);
            uVar14 = NEON_smax(CONCAT44(iVar17 / 2,(int)uVar14 / 2),0x100000001,4);
            uVar11 = uVar11 + 1;
            lVar10 = lVar10 + 0x18;
          } while (uVar11 < *(uint *)(param_2 + 0x24));
          return;
        }
      }
    }
    uStack_a8 = *(undefined8 *)(param_2 + 0x80);
    uStack_98 = *(ulong *)(param_3 + 2);
    lStack_a0 = *(long *)param_3;
    lStack_b0 = lVar10;
    func_0x00010a7ba4b8(puVar9,&lStack_b0);
  }
  return;
}



/* Entry: 10a7b7d08; end: 10a7b7d0f;  */

undefined1 FUN_10a7b7d08(long param_1)

{
  return *(undefined1 *)(param_1 + 0xa9);
}



/* Entry: 10a7b7d10; end: 10a7b7dd7;  */

void FUN_10a7b7d10(undefined8 *param_1,long param_2,long *param_3,undefined4 param_4)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined4 uStack_54;
  undefined8 uStack_50;
  long lStack_48;
  undefined1 uStack_31;
  
  if (*param_3 == 0) {
    *param_1 = 0;
    param_1[1] = 0;
  }
  else {
    lStack_48 = *(long *)(param_2 + 0xa0);
    uStack_50 = *(undefined8 *)(param_2 + 0x98);
    if (*(long *)(param_2 + 0xa0) != 0) {
      plVar1 = (long *)(*(long *)(param_2 + 0xa0) + 0x10);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = *plVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    uStack_54 = param_4;
    FUN_10a7ba654(param_1,&uStack_31,&uStack_50,param_3,&uStack_54);
    if (lStack_48 != 0) {
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
    FUN_10a773954(param_2,*param_3 + 0x20);
  }
  return;
}



/* Entry: 10a7b7dd8; end: 10a7b7de7;  */

void FUN_10a7b7dd8(long *param_1)

{
  *(undefined1 *)((long)param_1 + 0xaa) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010a7b7de4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x70))();
  return;
}



/* Entry: 10a7b7de8; end: 10a7b7f1b;  */

void FUN_10a7b7de8(long param_1)

{
  code *pcVar1;
  uint uVar2;
  uint uVar3;
  ulong uVar4;
  undefined8 uVar5;
  int iVar6;
  
  if (((*(byte *)(param_1 + 0xa9) & 1) == 0) && (*(char *)(param_1 + 0x20) == '\x01')) {
    if ((*(char *)(param_1 + 0x21) == '\x01') && (*(int *)(param_1 + 0x24) != 0)) {
      uVar2 = 0;
      uVar3 = 0;
      uVar5 = *(undefined8 *)(param_1 + 0x80);
      do {
        uVar4 = (*(long *)(param_1 + 0xb8) - *(long *)(param_1 + 0xb0) >> 3) * -0x5555555555555555;
        if (uVar4 < (byte)uVar3 || uVar4 - (byte)uVar3 == 0) goto LAB_10a7b7f18;
        iVar6 = (int)((ulong)uVar5 >> 0x20);
        (**(code **)(**(long **)(param_1 + 0x28) + 0xa0))
                  (*(long **)(param_1 + 0x28),0,0,0,(int)uVar5,iVar6,0,
                   *(undefined8 *)(*(long *)(param_1 + 0xb0) + (ulong)(uVar3 & 0xff) * 0x18),uVar2,0
                  );
        uVar5 = NEON_smax(CONCAT44(iVar6 / 2,(int)uVar5 / 2),0x100000001,4);
        uVar3 = (uVar3 & 0xff) + 1;
        uVar2 = uVar3 & 0xff;
      } while ((uVar3 & 0xff) < *(uint *)(param_1 + 0x24));
    }
    else {
      if (*(undefined8 **)(param_1 + 0xb8) == *(undefined8 **)(param_1 + 0xb0)) {
LAB_10a7b7f18:
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x10a7b7f1c);
        (*pcVar1)();
      }
      (**(code **)(**(long **)(param_1 + 0x28) + 0x98))
                (*(long **)(param_1 + 0x28),**(undefined8 **)(param_1 + 0xb0),0,0);
      (**(code **)(**(long **)(param_1 + 0x28) + 0xb0))();
    }
    *(undefined1 *)(param_1 + 0x20) = 0;
  }
  return;
}



/* Entry: 10a7b7f1c; end: 10a7b877f;  */

/* WARNING: Possible PIC construction at 0x00010a7b84e8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010a7b84ec) */

void FUN_10a7b7f1c(long param_1,ulong *param_2,undefined8 param_3,undefined1 *param_4,uint param_5,
                  ulong param_6,int *param_7)

{
  bool bVar1;
  undefined **ppuVar2;
  long *plVar3;
  byte bVar4;
  byte bVar5;
  uint uVar6;
  code *pcVar7;
  undefined1 *puVar8;
  int iVar9;
  int iVar10;
  undefined1 uVar11;
  int iVar12;
  uint uVar13;
  uint uVar14;
  int iVar15;
  ulong uVar16;
  long lVar17;
  uint uVar18;
  uint uVar19;
  undefined1 *puVar20;
  ulong uVar21;
  ulong uVar22;
  ulong uVar23;
  ulong uVar24;
  long unaff_x19;
  ulong unaff_x20;
  uint uVar25;
  ulong unaff_x21;
  ulong uVar26;
  long lVar27;
  undefined8 unaff_x22;
  long lVar28;
  undefined8 unaff_x23;
  long lVar29;
  long lVar30;
  uint uVar31;
  ulong unaff_x24;
  long lVar32;
  uint uVar33;
  ulong unaff_x25;
  ulong uVar34;
  long unaff_x26;
  undefined8 unaff_x27;
  int *unaff_x28;
  long lVar35;
  undefined1 *unaff_x29;
  undefined8 unaff_x30;
  float fVar36;
  ulong uVar37;
  int iVar38;
  undefined8 uVar39;
  int iVar40;
  float fVar41;
  int iVar42;
  int iVar43;
  float fVar44;
  undefined1 *puStack_160;
  int iStack_158;
  int iStack_154;
  long lStack_150;
  uint uStack_148;
  uint uStack_144;
  undefined8 uStack_140;
  undefined8 uStack_138;
  uint uStack_128;
  uint uStack_124;
  ulong uStack_120;
  ulong uStack_118;
  ulong uStack_110;
  long lStack_108;
  long lStack_100;
  long lStack_f8;
  long lStack_f0;
  ulong uStack_e8;
  ulong uStack_e0;
  undefined8 uStack_d8;
  undefined1 *puStack_c8;
  ulong uStack_c0;
  ulong uStack_b8;
  int *piStack_b0;
  int *piStack_a8;
  
  puVar20 = &stack0xfffffffffffffff0;
  if ((*(char *)(param_1 + 0x21) == '\x01') && (*(int *)(param_1 + 0x24) != 0)) {
    if (*param_7 == 0 && param_7[1] == 0) goto LAB_10a7b7f7c;
    bVar1 = *param_7 != (int)param_2[1] - (int)*param_2 ||
            param_7[1] != *(int *)((long)param_2 + 0xc) - *(int *)((long)param_2 + 4);
  }
  else {
LAB_10a7b7f7c:
    bVar1 = false;
  }
  puStack_c8 = param_4;
  if (*(char *)(param_1 + 0xa9) == '\x01') {
    uVar18 = *(uint *)(param_1 + 8);
    uVar13 = uVar18;
    if (param_5 != 0) {
      uVar13 = param_5;
    }
    ppuVar2 = &PTR_DAT_110ae4700 + (ulong)uVar18 * 4;
    if (0x56 < uVar18) {
      ppuVar2 = &PTR_DAT_110ae4700;
    }
    bVar4 = *(byte *)((long)ppuVar2 + 0x1b);
    ppuVar2 = &PTR_DAT_110ae4700 + (ulong)uVar13 * 4;
    if (0x56 < uVar13) {
      ppuVar2 = &PTR_DAT_110ae4700;
    }
    bVar5 = *(byte *)((long)ppuVar2 + 0x1b);
    iVar12 = (int)*param_2;
    iVar15 = *(int *)((long)param_2 + 4);
    uVar26 = (long)(int)param_2[1] - (long)iVar12;
    lVar32 = (long)*(int *)((long)param_2 + 0xc) - (long)iVar15;
    iVar42 = (int)uVar26;
    uVar13 = (uint)bVar5;
    if (!bVar1) {
      lStack_150 = uVar26 * bVar5 * lVar32;
      iStack_154 = iVar42 * uVar13;
      iStack_158 = 0;
      puStack_160 = param_4;
      uStack_148 = uVar13;
      uStack_144 = (uint)bVar4;
      FUN_10a7b8780(param_1,(long)iVar12,(long)iVar15,uVar26,lVar32,*(undefined4 *)(param_1 + 0x80),
                    *(undefined4 *)(param_1 + 0x84),0);
      return;
    }
    uStack_c0 = uVar26 & 0xffffffff | lVar32 << 0x20;
    iVar40 = *(int *)(param_1 + 0x80);
    iVar43 = *(int *)(param_1 + 0x84);
    FUN_10a775818(&piStack_b0,param_1,&uStack_c0);
    if (*(int *)(param_1 + 0x24) != 0) {
      lVar35 = 0;
      uVar26 = 0;
      fVar41 = (float)iVar12 / (float)iVar40;
      fVar44 = (float)iVar15 / (float)iVar43;
      iVar12 = *param_7;
      iVar15 = param_7[1];
      uVar37 = *(ulong *)(param_1 + 0x80);
      uVar39 = 0;
      do {
        if ((ulong)((long)piStack_a8 - (long)piStack_b0 >> 4) <= uVar26) goto LAB_10a7b875c;
        iVar9 = (int)(fVar41 * (float)(int)uVar37);
        iVar38 = (int)(uVar37 >> 0x20);
        fVar36 = (float)iVar38;
        iVar10 = (int)(fVar44 * fVar36);
        iStack_158 = (*(int *)((long)piStack_b0 + lVar35) +
                     ((int *)((long)piStack_b0 + lVar35))[1] * iVar42) * uVar13;
        puStack_160 = puStack_c8;
        iStack_154 = iVar42 * (uint)bVar5;
        lStack_150 = (long)iVar12 * (long)(int)(uint)bVar5 * (long)iVar15;
        uStack_148 = uVar13;
        uStack_144 = (uint)bVar4;
        uStack_e0 = uVar37;
        uStack_d8 = uVar39;
        FUN_10a7b8780(param_1,iVar9,iVar10,
                      (int)((fVar41 + (float)iVar42 / (float)iVar40) * (float)(int)uVar37) - iVar9,
                      (int)((fVar44 + (float)(int)lVar32 / (float)iVar43) * fVar36) - iVar10,
                      uVar37 & 0xffffffff,iVar38,uVar26);
        uVar37 = NEON_smax(CONCAT44((int)(uStack_e0 >> 0x20) / 2,(int)uStack_e0 / 2),0x100000001,4);
        uVar26 = uVar26 + 1;
        lVar35 = lVar35 + 0x10;
      } while (uVar26 < *(uint *)(param_1 + 0x24));
    }
LAB_10a7b8510:
    if (piStack_b0 != (int *)0x0) {
      piStack_a8 = piStack_b0;
      __ZdlPv();
    }
    return;
  }
  if (((param_6 & 1) == 0) && ((*(byte *)(param_1 + 0xaa) & 1) == 0)) {
    if (!bVar1) {
      puStack_160 = (undefined1 *)0x0;
      (**(code **)(**(long **)(param_1 + 0x28) + 0xa0))();
    }
  }
  else {
    *(undefined1 *)(param_1 + 0x20) = 1;
  }
  if (*(char *)(param_1 + 0xa8) != '\x01') {
    return;
  }
  uVar18 = *(uint *)(param_1 + 8);
  uVar13 = uVar18;
  if (param_5 != 0) {
    uVar13 = param_5;
  }
  ppuVar2 = &PTR_DAT_110ae4700 + (ulong)uVar18 * 4;
  if (0x56 < uVar18) {
    ppuVar2 = &PTR_DAT_110ae4700;
  }
  bVar4 = *(byte *)((long)ppuVar2 + 0x1b);
  uVar26 = (ulong)bVar4;
  ppuVar2 = &PTR_DAT_110ae4700 + (ulong)uVar13 * 4;
  if (0x56 < uVar13) {
    ppuVar2 = &PTR_DAT_110ae4700;
  }
  uVar34 = (ulong)*(byte *)((long)ppuVar2 + 0x1b);
  iVar12 = (int)*param_2;
  lVar32 = (long)iVar12;
  iVar15 = *(int *)((long)param_2 + 4);
  uVar13 = (int)param_2[1] - iVar12;
  uVar18 = *(int *)((long)param_2 + 0xc) - iVar15;
  uVar37 = (ulong)uVar18;
  uVar33 = (uint)*(byte *)((long)ppuVar2 + 0x1b);
  uVar25 = (uint)bVar4;
  if (bVar1) {
    uStack_c0 = CONCAT44(uVar18,uVar13);
    iVar42 = *(int *)(param_1 + 0x80);
    iVar40 = *(int *)(param_1 + 0x84);
    uStack_e0 = (ulong)uVar13;
    FUN_10a775818(&piStack_b0);
    if (*(int *)(param_1 + 0x24) == 0) goto LAB_10a7b8510;
    unaff_x27 = 0;
    fVar41 = (float)iVar12 / (float)iVar42;
    fVar44 = (float)iVar15 / (float)iVar40;
    iVar12 = (int)uStack_e0;
    uStack_e8 = (long)*param_7 * (long)(int)uVar33 * (long)param_7[1];
    uVar39 = *(undefined8 *)(param_1 + 0x80);
    unaff_x22 = 0xaaaaaaaaaaaaaaab;
    unaff_x23 = 0x18;
    if ((long)piStack_a8 - (long)piStack_b0 >> 4 != 0) {
      uStack_124 = (uint)uVar39;
      uVar31 = (uint)(fVar41 * (float)(int)uStack_124);
      uVar13 = (uint)((fVar41 + (float)iVar12 / (float)iVar42) * (float)(int)uStack_124);
      uStack_110 = (ulong)uVar13;
      uStack_138 = 0;
      uStack_128 = (uint)((ulong)uVar39 >> 0x20);
      uVar14 = (uint)(fVar44 * (float)(int)uStack_128);
      uStack_120 = (ulong)uVar14;
      uVar18 = (uint)((fVar44 + (float)(int)uVar18 / (float)iVar40) * (float)(int)uStack_128);
      uStack_118 = (ulong)uVar18;
      uStack_140 = uVar39;
      if (uVar33 == uVar25) {
        if ((int)uVar14 < (int)uVar18) {
          lVar32 = 0;
          lStack_f8 = (long)(int)uVar25 * (long)(int)(uVar13 - uVar31);
          lStack_f0 = (long)(int)uVar33 * (long)(int)(uVar13 - uVar31);
          lStack_100 = (long)(int)uVar18 - (long)(int)uVar14;
          uVar37 = uVar26 * ((long)(int)uVar31 + (long)(int)uStack_124 * (long)(int)uVar14);
          lStack_108 = (long)(int)uVar25 * (long)(int)uStack_124;
          do {
            lVar35 = ((long)*piStack_b0 + (long)(((int)lVar32 + piStack_b0[1]) * (int)uStack_e0)) *
                     uVar34;
            if (((int)lVar35 < 0) || (uStack_e8 < (ulong)(lStack_f0 + lVar35))) break;
            plVar3 = *(long **)(param_1 + 0xb0);
            if (((*(long *)(param_1 + 0xb8) - (long)plVar3 >> 3) * -0x5555555555555555 == 0) ||
               ((ulong)(plVar3[1] - *plVar3) <= uVar37)) goto LAB_10a7b875c;
            _memcpy(*plVar3 + uVar37,puStack_c8 + lVar35,lStack_f8);
            lVar32 = lVar32 + 1;
            uVar37 = uVar37 + lStack_108;
          } while (lStack_100 != lVar32);
        }
      }
      else if ((int)uVar14 < (int)uVar18) {
        iVar15 = 0;
        uVar37 = uVar26 * ((long)(int)uVar31 + (long)(int)uStack_124 * (long)(int)uVar14);
        uVar19 = uVar14;
        do {
          if ((int)uVar31 < (int)uVar13) {
            iVar42 = 0;
            uVar16 = uVar37;
            lVar35 = (long)(int)uVar31;
            do {
              uVar6 = (((int)lVar35 - uVar31) + *piStack_b0 +
                      ((uVar19 - uVar14) + piStack_b0[1]) * iVar12) * uVar33;
              if ((-1 < (int)uVar6) && (uVar6 + uVar34 <= uStack_e8 && uVar25 != 0)) {
                uVar23 = 0;
                puVar8 = puStack_c8 +
                         uVar33 * (*piStack_b0 + iVar42 + iVar12 * (iVar15 + piStack_b0[1]));
                uVar21 = uVar16;
                uVar22 = uVar26;
                do {
                  if (uVar23 < uVar34) {
                    uVar11 = *puVar8;
                  }
                  else {
                    uVar11 = 0xff;
                  }
                  plVar3 = *(long **)(param_1 + 0xb0);
                  if (((*(long *)(param_1 + 0xb8) - (long)plVar3 >> 3) * -0x5555555555555555 == 0)
                     || ((ulong)(plVar3[1] - *plVar3) <= uVar21)) goto LAB_10a7b875c;
                  *(undefined1 *)(*plVar3 + uVar21) = uVar11;
                  uVar23 = uVar23 + 1;
                  puVar8 = puVar8 + 1;
                  uVar21 = uVar21 + 1;
                  uVar22 = uVar22 - 1;
                } while (uVar22 != 0);
              }
              lVar35 = lVar35 + 1;
              iVar42 = iVar42 + 1;
              uVar16 = uVar16 + uVar26;
            } while ((uint)lVar35 != uVar13);
          }
          uVar19 = uVar19 + 1;
          iVar15 = iVar15 + 1;
          uVar37 = uVar37 + (long)(int)uVar25 * (long)(int)uStack_124;
        } while (uVar19 != uVar18);
      }
      uVar14 = uStack_124;
      uVar13 = uStack_128;
      uStack_c0 = (ulong)uVar31 | uStack_120 << 0x20;
      uStack_b8 = uStack_c0 + ((ulong)(uint)((int)uStack_118 - (int)uStack_120) << 0x20) &
                  0xffffffff00000000 | uStack_110;
      if ((*(long *)(param_1 + 0xb8) - (long)*(undefined8 **)(param_1 + 0xb0) >> 3) *
          -0x5555555555555555 != 0) {
        unaff_x24 = (ulong)uStack_128;
        unaff_x20 = (ulong)uStack_124;
        FUN_10a7b8ad0(param_1,**(undefined8 **)(param_1 + 0xb0),&uStack_c0,unaff_x20,unaff_x24,
                      uVar26);
        if ((*(long *)(param_1 + 0xb8) - (long)*(undefined8 **)(param_1 + 0xb0) >> 3) *
            -0x5555555555555555 != 0) {
          uVar39 = **(undefined8 **)(param_1 + 0xb0);
          param_2 = &uStack_c0;
          unaff_x30 = 0x10a7b84ec;
          register0x00000008 = (BADSPACEBASE *)&puStack_160;
          unaff_x19 = param_1;
          unaff_x21 = uVar26;
          unaff_x25 = uVar34;
          unaff_x26 = lVar32;
          unaff_x29 = puVar20;
          goto SUB_10a7b8f80;
        }
      }
    }
  }
  else {
    uVar14 = *(uint *)(param_1 + 0x80);
    if (uVar33 == uVar25) {
      if (0 < (int)uVar18) {
        iVar12 = 0;
        uVar34 = (lVar32 + (long)iVar15 * (long)(int)uVar14) * uVar26;
        do {
          plVar3 = *(long **)(param_1 + 0xb0);
          if ((*(long **)(param_1 + 0xb8) == plVar3) || ((ulong)(plVar3[1] - *plVar3) <= uVar34))
          goto LAB_10a7b875c;
          _memcpy(*plVar3 + uVar34,puStack_c8 + iVar12,(long)(int)uVar25 * (long)(int)uVar13);
          uVar34 = uVar34 + (long)(int)uVar14 * (long)(int)uVar25;
          iVar12 = iVar12 + uVar13 * uVar33;
          uVar37 = uVar37 - 1;
        } while (uVar37 != 0);
      }
    }
    else if (0 < (int)uVar18) {
      uVar16 = 0;
      iVar12 = (iVar12 + iVar15 * uVar14) * uVar25;
      do {
        if (0 < (int)uVar13) {
          uVar23 = 0;
          puVar20 = puStack_c8;
          iVar15 = iVar12;
          do {
            uVar21 = (ulong)iVar15;
            if (uVar25 != 0) {
              uVar22 = 0;
              puVar8 = puVar20;
              uVar24 = uVar26;
              do {
                if (uVar22 < uVar34) {
                  uVar11 = *puVar8;
                }
                else {
                  uVar11 = 0xff;
                }
                plVar3 = *(long **)(param_1 + 0xb0);
                if ((*(long **)(param_1 + 0xb8) == plVar3) ||
                   ((ulong)(plVar3[1] - *plVar3) <= uVar21)) goto LAB_10a7b875c;
                *(undefined1 *)(*plVar3 + uVar21) = uVar11;
                uVar22 = uVar22 + 1;
                puVar8 = puVar8 + 1;
                uVar21 = uVar21 + 1;
                uVar24 = uVar24 - 1;
              } while (uVar24 != 0);
            }
            uVar23 = uVar23 + 1;
            puVar20 = puVar20 + uVar34;
            iVar15 = iVar15 + uVar25;
          } while (uVar23 != uVar13);
        }
        uVar16 = uVar16 + 1;
        puStack_c8 = puStack_c8 + (long)(int)uVar33 * (long)(int)uVar13;
        iVar12 = iVar12 + uVar14 * uVar25;
      } while (uVar16 != uVar37);
    }
    if (*(undefined8 **)(param_1 + 0xb8) != *(undefined8 **)(param_1 + 0xb0)) {
      FUN_10a7b8ad0(param_1,**(undefined8 **)(param_1 + 0xb0),param_2,(long)(int)uVar14,
                    *(undefined4 *)(param_1 + 0x84),uVar26);
      if (*(undefined8 **)(param_1 + 0xb8) != *(undefined8 **)(param_1 + 0xb0)) {
        uVar39 = **(undefined8 **)(param_1 + 0xb0);
        uVar13 = *(uint *)(param_1 + 0x84);
        piStack_b0 = unaff_x28;
SUB_10a7b8f80:
        *(int **)((long)register0x00000008 + -0x60) = piStack_b0;
        *(undefined8 *)((long)register0x00000008 + -0x58) = unaff_x27;
        *(long *)((long)register0x00000008 + -0x50) = unaff_x26;
        *(ulong *)((long)register0x00000008 + -0x48) = unaff_x25;
        *(ulong *)((long)register0x00000008 + -0x40) = unaff_x24;
        *(undefined8 *)((long)register0x00000008 + -0x38) = unaff_x23;
        *(undefined8 *)((long)register0x00000008 + -0x30) = unaff_x22;
        *(ulong *)((long)register0x00000008 + -0x28) = unaff_x21;
        *(ulong *)((long)register0x00000008 + -0x20) = unaff_x20;
        *(long *)((long)register0x00000008 + -0x18) = unaff_x19;
        *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
        *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
        iVar15 = *(int *)(param_1 + 0x10);
        iVar12 = *(int *)(param_1 + 0xc) + iVar15 + *(int *)(param_1 + 0x14);
        if (iVar15 < iVar12) {
          *(undefined8 *)((long)register0x00000008 + -0x68) = uVar39;
          uVar26 = *param_2;
          iVar42 = *(int *)((long)param_2 + 4);
          uVar37 = param_2[1];
          iVar40 = *(int *)((long)param_2 + 0xc);
          *(int *)((long)register0x00000008 + -0x80) = (int)uVar26;
          uVar25 = (int)uVar26 - iVar12;
          uVar25 = uVar25 & ((int)uVar25 >> 0x1f ^ 0xffffffffU);
          uVar18 = (int)uVar37 + iVar12;
          if ((int)uVar14 <= (int)uVar18) {
            uVar18 = uVar14;
          }
          uVar31 = iVar42 - iVar12;
          uVar31 = uVar31 & ((int)uVar31 >> 0x1f ^ 0xffffffffU);
          uVar26 = (ulong)uVar31;
          uVar33 = iVar40 + iVar12;
          if ((int)uVar13 <= (int)uVar33) {
            uVar33 = uVar13;
          }
          *(uint *)((long)register0x00000008 + -0x7c) = uVar33;
          uVar33 = (int)uVar37 + iVar15;
          if ((int)uVar14 <= (int)uVar33) {
            uVar33 = uVar14;
          }
          *(uint *)((long)register0x00000008 + -0x88) = uVar18;
          *(uint *)((long)register0x00000008 + -0x84) = uVar33;
          uVar19 = iVar42 - iVar15;
          uVar33 = iVar40 + iVar15;
          uVar6 = uVar33;
          if ((int)uVar13 <= (int)uVar33) {
            uVar6 = uVar13;
          }
          *(ulong *)((long)register0x00000008 + -0x78) = (ulong)uVar6;
          *(ulong *)((long)register0x00000008 + -0x70) = (ulong)uVar25;
          uVar13 = (uint)bVar4;
          lVar35 = (long)(int)uVar13;
          lVar32 = (long)(int)(uVar18 - uVar25) * (long)(int)uVar13;
          if (((int)uVar31 < (int)uVar19) && (lVar32 != 0)) {
            lVar29 = *(long *)((long)register0x00000008 + -0x68) +
                     ((long)(int)uVar14 * uVar26 +
                     (*(ulong *)((long)register0x00000008 + -0x70) & 0xffffffff)) * lVar35;
            do {
              _bzero(lVar29,lVar32);
              uVar26 = uVar26 + 1;
              lVar29 = lVar29 + (long)(int)uVar13 * (long)(int)uVar14;
            } while (uVar26 < uVar19);
          }
          uVar19 = uVar19 & ((int)uVar19 >> 0x1f ^ 0xffffffffU);
          lVar29 = *(long *)((long)register0x00000008 + -0x68);
          if (((int)uVar33 < *(int *)((long)register0x00000008 + -0x7c)) && (lVar32 != 0)) {
            iVar12 = *(int *)((long)register0x00000008 + -0x7c) -
                     (int)*(undefined8 *)((long)register0x00000008 + -0x78);
            lVar30 = lVar29 + (*(long *)((long)register0x00000008 + -0x70) +
                              (long)(int)*(undefined8 *)((long)register0x00000008 + -0x78) *
                              (long)(int)uVar14) * lVar35;
            do {
              _bzero(lVar30,lVar32);
              lVar30 = lVar30 + (long)(int)uVar13 * (long)(int)uVar14;
              iVar12 = iVar12 + -1;
            } while (iVar12 != 0);
          }
          if ((int)uVar19 < (int)*(long *)((long)register0x00000008 + -0x78)) {
            lVar32 = 0;
            iVar12 = *(int *)((long)register0x00000008 + -0x84);
            uVar26 = *(ulong *)((long)register0x00000008 + -0x70);
            lVar28 = (long)(int)((*(int *)((long)register0x00000008 + -0x80) - iVar15 &
                                 (*(int *)((long)register0x00000008 + -0x80) - iVar15 >> 0x1f ^
                                 0xffffffffU)) - (int)uVar26) * (long)(int)(uint)bVar4;
            lVar27 = (long)(*(int *)((long)register0x00000008 + -0x88) - iVar12) *
                     (long)(int)(uint)bVar4;
            lVar30 = *(long *)((long)register0x00000008 + -0x78) - (ulong)uVar19;
            lVar17 = (long)(int)uVar14 * (ulong)uVar19;
            do {
              if (lVar28 != 0) {
                _bzero(lVar29 + (lVar17 + (uVar26 & 0xffffffff)) * lVar35 + lVar32,lVar28);
              }
              if (lVar27 != 0) {
                _bzero(lVar29 + (lVar17 + iVar12) * lVar35 + lVar32,lVar27);
              }
              lVar32 = lVar32 + (long)(int)uVar13 * (long)(int)uVar14;
              lVar30 = lVar30 + -1;
            } while (lVar30 != 0);
          }
        }
        return;
      }
    }
  }
LAB_10a7b875c:
                    /* WARNING: Does not return */
  pcVar7 = (code *)SoftwareBreakpoint(1,0x10a7b8760);
  (*pcVar7)();
}



/* Entry: 10a7b8780; end: 10a7b8acf;  */

void FUN_10a7b8780(long param_1,int param_2,int param_3,uint param_4,uint param_5,int param_6,
                  int param_7,undefined4 param_8,long param_9,int param_10,int param_11,
                  ulong param_12,uint param_13,uint param_14)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  ulong uVar4;
  uint uVar5;
  uint uVar6;
  code *pcVar7;
  undefined1 *puVar8;
  int iVar9;
  long lVar11;
  ulong uVar12;
  undefined1 *puVar13;
  undefined1 uVar14;
  ulong uVar15;
  ulong uVar16;
  undefined1 *puVar17;
  ulong uVar18;
  ulong uVar19;
  int iVar20;
  long lVar21;
  ulong uStack_88;
  undefined8 uStack_80;
  long lStack_78;
  long lStack_70;
  ulong uVar10;
  
  iVar20 = *(int *)(param_1 + 0xc) + *(int *)(param_1 + 0x10) + *(int *)(param_1 + 0x14);
  uVar2 = param_2 - iVar20 & (param_2 - iVar20 >> 0x1f ^ 0xffffffffU);
  uVar3 = param_3 - iVar20 & (param_3 - iVar20 >> 0x1f ^ 0xffffffffU);
  iVar9 = param_4 + param_2 + iVar20;
  if (param_6 <= iVar9) {
    iVar9 = param_6;
  }
  iVar1 = param_5 + param_3 + iVar20;
  if (param_7 <= iVar1) {
    iVar1 = param_7;
  }
  uVar5 = iVar9 - uVar2;
  uVar16 = (ulong)uVar5;
  uVar6 = iVar1 - uVar3;
  uVar15 = (ulong)uVar6;
  if (0 < (int)uVar5 && 0 < (int)uVar6) {
    uVar4 = (ulong)param_14;
    uStack_88 = uStack_88 & 0xffffffffffffff00;
    FUN_10a0cf3f0(&lStack_78,uVar15 * (long)(int)param_14 * uVar16,&uStack_88);
    if (iVar20 <= param_2) {
      param_2 = iVar20;
    }
    if (iVar20 <= param_3) {
      param_3 = iVar20;
    }
    if (param_13 == param_14) {
      if (0 < (int)param_5) {
        lVar21 = (long)param_10;
        uVar19 = (ulong)param_5;
        iVar20 = param_14 * (param_2 + param_3 * uVar5);
        do {
          if ((lVar21 < 0) ||
             (param_12 < (ulong)((long)(int)param_14 * (long)(int)param_4 + lVar21))) break;
          if ((ulong)(lStack_70 - lStack_78) <= (ulong)(long)iVar20) {
LAB_10a7b8ab0:
                    /* WARNING: Does not return */
            pcVar7 = (code *)SoftwareBreakpoint(1,0x10a7b8ab4);
            (*pcVar7)();
          }
          _memcpy(lStack_78 + iVar20,param_9 + lVar21,(long)(int)param_14 * (long)(int)param_4);
          iVar20 = iVar20 + param_14 * uVar5;
          lVar21 = lVar21 + param_11;
          uVar19 = uVar19 - 1;
        } while (uVar19 != 0);
      }
    }
    else if (0 < (int)param_5) {
      uVar19 = 0;
      lVar21 = (long)(int)param_13;
      puVar17 = (undefined1 *)(param_9 + param_10);
      iVar20 = param_14 * (param_2 + param_3 * uVar5);
      do {
        if (0 < (int)param_4) {
          uVar18 = 0;
          puVar8 = puVar17;
          iVar9 = iVar20;
          do {
            uVar10 = (ulong)iVar9;
            if (((0 < (int)param_14) &&
                (lVar11 = (long)param_10 + uVar19 * (long)param_11 + uVar18 * lVar21, -1 < lVar11))
               && ((ulong)(lVar11 + lVar21) <= param_12)) {
              lVar11 = 0;
              uVar12 = uVar4;
              puVar13 = puVar8;
              do {
                if (lVar11 < lVar21) {
                  uVar14 = *puVar13;
                }
                else {
                  uVar14 = 0xff;
                }
                if ((ulong)(lStack_70 - lStack_78) <= uVar10) goto LAB_10a7b8ab0;
                *(undefined1 *)(lStack_78 + uVar10) = uVar14;
                lVar11 = lVar11 + 1;
                puVar13 = puVar13 + 1;
                uVar10 = uVar10 + 1;
                uVar12 = uVar12 - 1;
              } while (uVar12 != 0);
            }
            uVar18 = uVar18 + 1;
            puVar8 = puVar8 + lVar21;
            iVar9 = iVar9 + param_14;
          } while (uVar18 != param_4);
        }
        uVar19 = uVar19 + 1;
        puVar17 = puVar17 + param_11;
        iVar20 = iVar20 + param_14 * uVar5;
      } while (uVar19 != param_5);
    }
    uStack_88 = CONCAT44(param_3,param_2);
    uStack_80 = CONCAT44(param_3 + param_5,param_2 + param_4);
    FUN_10a7b8ad0(param_1,lStack_78,&uStack_88,uVar16,uVar15,uVar4);
    func_0x00010a7b8f80(param_1,lStack_78,&uStack_88,uVar16,uVar15,uVar4);
    (**(code **)(**(long **)(param_1 + 0x28) + 0xa0))
              (*(long **)(param_1 + 0x28),uVar2,uVar3,0,uVar16,uVar15,0,lStack_78,param_8,0);
    (**(code **)(**(long **)(param_1 + 0x28) + 0xb0))();
    if (lStack_78 != 0) {
      lStack_70 = lStack_78;
      __ZdlPv();
    }
  }
  return;
}



/* Entry: 10a7b8ad0; end: 10a7b9153;  */

void FUN_10a7b8ad0(long param_1,long param_2,int *param_3,uint param_4,int param_5,int param_6)

{
  ulong uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  bool bVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  ulong uVar16;
  int iVar17;
  int iVar18;
  long lVar19;
  int iVar20;
  int iVar21;
  long lVar22;
  int iVar23;
  
  if (0 < *(int *)(param_1 + 0x10)) {
    iVar18 = *param_3;
    iVar4 = param_3[1];
    lVar11 = (long)iVar18;
    uVar3 = param_3[2];
    iVar20 = param_3[3];
    if ((uVar3 - iVar18 != 0 && iVar18 <= (int)uVar3) && iVar4 < iVar20) {
      lVar12 = (long)iVar4;
      lVar22 = (long)(int)((uVar3 - iVar18) * param_6);
      lVar13 = (long)param_6;
      lVar8 = param_2 + (long)param_6 * (long)(int)(iVar4 * param_4 + iVar18);
      lVar9 = (long)(int)param_4;
      if (0 < iVar4) {
        lVar15 = param_2 + (lVar11 + (lVar12 + -1) * lVar9) * lVar13;
        lVar19 = 1;
        lVar10 = lVar12;
        do {
          _memcpy(lVar15,lVar8,lVar22);
          if (*(int *)(param_1 + 0x10) <= lVar19) break;
          lVar19 = lVar19 + 1;
          lVar15 = lVar15 - (long)param_6 * (long)(int)param_4;
          lVar10 = lVar10 + -1;
        } while (lVar10 != 0);
        if (*(int *)(param_1 + 0x10) < 1) {
          return;
        }
      }
      iVar6 = iVar20 + -1;
      iVar21 = iVar20;
      if (iVar20 <= param_5) {
        iVar21 = param_5;
      }
      lVar19 = param_2 + (long)param_6 * (long)(int)(iVar6 * param_4 + iVar18);
      if (iVar20 < param_5) {
        lVar15 = param_2 + (lVar9 + (long)(int)param_4 * (long)iVar6 + lVar11) * lVar13;
        uVar16 = 1;
        do {
          _memcpy(lVar15,lVar19,lVar22);
          uVar1 = uVar16 + 1;
          lVar15 = lVar15 + (long)param_6 * (long)(int)param_4;
          bVar7 = (long)uVar16 < (long)*(int *)(param_1 + 0x10);
          uVar16 = uVar1;
        } while (bVar7 && (iVar21 - iVar20) + 1 != uVar1);
        if (*(int *)(param_1 + 0x10) < 1) {
          return;
        }
      }
      if (0 < iVar18) {
        lVar10 = iVar20 - lVar12;
        lVar14 = param_2 + (lVar11 + (long)iVar4 * (long)(int)param_4) * lVar13;
        iVar23 = param_6 * (iVar18 + iVar4 * param_4 + -1);
        iVar21 = 1;
        lVar22 = lVar10;
        lVar15 = lVar14;
        iVar17 = iVar23;
        do {
          do {
            _memcpy(param_2 + iVar23,lVar15,lVar13);
            iVar23 = iVar23 + param_6 * param_4;
            lVar22 = lVar22 + -1;
            lVar15 = lVar15 + (long)param_6 * (long)(int)param_4;
          } while (lVar22 != 0);
          if (*(int *)(param_1 + 0x10) <= iVar21) break;
          iVar23 = iVar17 - param_6;
          bVar7 = iVar21 != iVar18;
          iVar21 = iVar21 + 1;
          lVar22 = lVar10;
          lVar15 = lVar14;
          iVar17 = iVar23;
        } while (bVar7);
        if (*(int *)(param_1 + 0x10) < 1) {
          return;
        }
      }
      iVar21 = uVar3 - 1;
      uVar2 = uVar3;
      if ((int)uVar3 <= (int)param_4) {
        uVar2 = param_4;
      }
      if ((int)uVar3 < (int)param_4) {
        lVar14 = iVar20 - lVar12;
        iVar23 = param_6 * (uVar3 + iVar4 * param_4 + -1);
        lVar22 = param_2 + lVar13 + lVar13 * ((long)iVar21 + (long)iVar4 * (long)(int)param_4);
        lVar15 = lVar14;
        iVar17 = iVar23;
        lVar10 = lVar22;
        uVar16 = 1;
        do {
          do {
            _memcpy(lVar22,param_2 + iVar17,lVar13);
            lVar22 = lVar22 + (long)param_6 * (long)(int)param_4;
            lVar15 = lVar15 + -1;
            iVar17 = iVar17 + param_6 * param_4;
          } while (lVar15 != 0);
          uVar1 = uVar16 + 1;
          lVar22 = lVar10 + lVar13;
          bVar7 = (long)uVar16 < (long)*(int *)(param_1 + 0x10);
          lVar15 = lVar14;
          iVar17 = iVar23;
          lVar10 = lVar22;
          uVar16 = uVar1;
        } while (bVar7 && uVar1 != (uVar2 - uVar3) + 1);
        if (*(int *)(param_1 + 0x10) < 1) {
          return;
        }
      }
      lVar22 = 0;
      lVar9 = lVar9 - iVar21;
      iVar23 = param_6 * (uVar3 + iVar20 * param_4);
      iVar20 = param_6 * (iVar18 + iVar20 * param_4 + -1);
      iVar5 = param_4 * (iVar4 + -1);
      iVar17 = param_6 * (uVar3 + iVar5);
      iVar18 = param_6 * (iVar18 + iVar5 + -1);
      do {
        lVar12 = lVar12 + -1;
        lVar15 = lVar22 + 1;
        if ((lVar15 <= lVar11) && (-1 < lVar12)) {
          _memcpy(param_2 + iVar18,lVar8,lVar13);
        }
        if ((-1 < lVar12) && (lVar15 < lVar9)) {
          _memcpy(param_2 + iVar17,param_2 + (long)param_6 * (long)(int)(iVar21 + iVar4 * param_4),
                  lVar13);
        }
        lVar10 = (long)iVar6 + 1 + lVar22;
        if ((lVar15 <= lVar11) && (lVar10 < param_5)) {
          _memcpy(param_2 + iVar20,lVar19,lVar13);
        }
        if ((lVar10 < param_5) && (lVar15 < lVar9)) {
          _memcpy(param_2 + iVar23,param_2 + (long)param_6 * (long)(int)(iVar6 * param_4 + iVar21),
                  lVar13);
        }
        lVar22 = lVar22 + 1;
        iVar23 = iVar23 + param_6 + param_6 * param_4;
        iVar20 = iVar20 + param_6 * (param_4 - 1);
        iVar17 = iVar17 + (param_6 - param_6 * param_4);
        iVar18 = iVar18 + param_6 * ~param_4;
      } while (lVar22 < *(int *)(param_1 + 0x10));
    }
  }
  return;
}


