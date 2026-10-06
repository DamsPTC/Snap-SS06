/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10a1cc684; end: 10a1cc6cb;  */

void FUN_10a1cc684(undefined8 param_1,undefined8 *param_2)

{
  if (-1 < *(char *)((long)param_2 + 0x17)) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(*param_2);
  return;
}



/* Entry: 10a1cc6cc; end: 10a1cc72b;  */

long * FUN_10a1cc6cc(long *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = param_1[1];
  lVar2 = param_1[2];
  while (lVar2 != lVar1) {
    param_1[2] = lVar2 + -0x30;
    FUN_10a1d37cc(lVar2 + -0x10);
    FUN_10a1cc630(lVar2 + -0x30);
    lVar2 = param_1[2];
  }
  if (*param_1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 10a1cc72c; end: 10a1cc82f;  */

undefined4 FUN_10a1cc72c(long param_1,long *param_2,undefined4 param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  long *plVar7;
  ulong uVar8;
  undefined4 uStack_24;
  
  uStack_24 = param_3;
  FUN_10a1cc830(param_1,&uStack_24);
  if ((param_1 != 0) && (uVar2 = param_2[1], uVar2 != 0)) {
    uVar3 = *(ulong *)(param_1 + 0x18);
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
    plVar7 = *(long **)(*param_2 + uVar6 * 8);
    if (plVar7 != (long *)0x0) {
      do {
        while( true ) {
          plVar7 = (long *)*plVar7;
          if (plVar7 == (long *)0x0) {
            return 0xffffffff;
          }
          uVar8 = plVar7[1];
          if (uVar4 - uVar8 != 0) break;
          if (plVar7[2] == uVar3) {
            return *(undefined4 *)(plVar7 + 4);
          }
        }
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
      } while (uVar8 == uVar6);
    }
  }
  return 0xffffffff;
}



/* Entry: 10a1cc830; end: 10a1cc8cf;  */

long * FUN_10a1cc830(long *param_1,int *param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  long *plVar6;
  ulong uVar7;
  
  uVar2 = param_1[1];
  if (uVar2 != 0) {
    uVar3 = (ulong)*param_2;
    uVar4 = uVar2 - 1;
    if ((uVar2 & uVar4) == 0) {
      uVar5 = uVar4 & uVar3;
    }
    else {
      uVar5 = uVar3;
      if (uVar2 <= uVar3) {
        uVar5 = 0;
        if (uVar2 != 0) {
          uVar5 = uVar3 / uVar2;
        }
        uVar5 = uVar3 - uVar5 * uVar2;
      }
    }
    plVar6 = *(long **)(*param_1 + uVar5 * 8);
    if (plVar6 != (long *)0x0) {
      plVar6 = (long *)*plVar6;
      do {
        if (plVar6 == (long *)0x0) {
          return (long *)0x0;
        }
        uVar7 = plVar6[1];
        if (uVar7 == uVar3) {
          if (*(int *)(plVar6 + 2) == *param_2) {
            return plVar6;
          }
        }
        else {
          if ((uVar2 & uVar4) == 0) {
            uVar7 = uVar7 & uVar4;
          }
          else if (uVar2 <= uVar7) {
            uVar1 = 0;
            if (uVar2 != 0) {
              uVar1 = uVar7 / uVar2;
            }
            uVar7 = uVar7 - uVar1 * uVar2;
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



/* Entry: 10a1cc8d0; end: 10a1ccaef;  */

void FUN_10a1cc8d0(long *param_1)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  long *plVar7;
  ulong uVar8;
  ulong uVar9;
  
  plVar2 = param_1;
  FUN_10a1cc830();
  if (plVar2 == (long *)0x0) {
    return;
  }
  uVar5 = param_1[1];
  lVar3 = *plVar2;
  uVar4 = plVar2[1];
  uVar6 = uVar5 - 1;
  if ((uVar5 & uVar6) == 0) {
    uVar4 = uVar6 & uVar4;
  }
  else if (uVar5 <= uVar4) {
    uVar8 = 0;
    if (uVar5 != 0) {
      uVar8 = uVar4 / uVar5;
    }
    uVar4 = uVar4 - uVar8 * uVar5;
  }
  plVar1 = *(long **)(*param_1 + uVar4 * 8);
  do {
    plVar7 = plVar1;
    plVar1 = (long *)*plVar7;
  } while ((long *)*plVar7 != plVar2);
  if (plVar7 == param_1 + 2) {
LAB_10a1cc974:
    if (lVar3 == 0) {
LAB_10a1cc9a8:
      *(undefined8 *)(*param_1 + uVar4 * 8) = 0;
      lVar3 = *plVar2;
      goto LAB_10a1cc9b0;
    }
    uVar8 = *(ulong *)(lVar3 + 8);
    if ((uVar5 & uVar6) == 0) {
      uVar9 = uVar8 & uVar6;
    }
    else {
      uVar9 = uVar8;
      if (uVar5 <= uVar8) {
        uVar9 = 0;
        if (uVar5 != 0) {
          uVar9 = uVar8 / uVar5;
        }
        uVar9 = uVar8 - uVar9 * uVar5;
      }
    }
    if (uVar9 != uVar4) goto LAB_10a1cc9a8;
  }
  else {
    uVar8 = plVar7[1];
    if ((uVar5 & uVar6) == 0) {
      uVar8 = uVar8 & uVar6;
    }
    else if (uVar5 <= uVar8) {
      uVar9 = 0;
      if (uVar5 != 0) {
        uVar9 = uVar8 / uVar5;
      }
      uVar8 = uVar8 - uVar9 * uVar5;
    }
    if (uVar8 != uVar4) goto LAB_10a1cc974;
LAB_10a1cc9b0:
    if (lVar3 == 0) goto LAB_10a1cc9ec;
    uVar8 = *(ulong *)(lVar3 + 8);
  }
  if ((uVar5 & uVar6) == 0) {
    uVar8 = uVar8 & uVar6;
  }
  else if (uVar5 <= uVar8) {
    uVar6 = 0;
    if (uVar5 != 0) {
      uVar6 = uVar8 / uVar5;
    }
    uVar8 = uVar8 - uVar6 * uVar5;
  }
  if (uVar8 != uVar4) {
    *(long **)(*param_1 + uVar8 * 8) = plVar7;
    lVar3 = *plVar2;
  }
LAB_10a1cc9ec:
  *plVar7 = lVar3;
  *plVar2 = 0;
  param_1[3] = param_1[3] + -1;
  FUN_10a1d3a40(plVar2 + 3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(plVar2);
  return;
}



/* Entry: 10a1ccaf0; end: 10a1ccaff;  */

void FUN_10a1ccaf0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110bad310;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10a1ccb00; end: 10a1ccb1f;  */

void FUN_10a1ccb00(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110bad310;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a1ccb20; end: 10a1ccb2f;  */

void FUN_10a1ccb20(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010a1ccb28. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 10a1ccb30; end: 10a1ccb83;  */

undefined1 * FUN_10a1ccb30(undefined1 *param_1)

{
  *param_1 = 0;
  param_1[0x18] = 0;
  FUN_10a1ccb84();
  return param_1;
}



/* Entry: 10a1ccb84; end: 10a1ccc6f;  */

void FUN_10a1ccb84(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  if (*(char *)(param_2 + 3) == '\x01') {
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
    *(undefined1 *)(param_1 + 3) = 1;
  }
  return;
}



/* Entry: 10a1ccc70; end: 10a1ccc77;  */

void FUN_10a1ccc70(void)

{
  return;
}



/* Entry: 10a1ccc78; end: 10a1cce8b;  */

long * FUN_10a1ccc78(long *param_1,int param_2,undefined4 *param_3)

{
  ulong uVar1;
  ulong uVar2;
  long *plVar3;
  long *plVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  ulong unaff_x24;
  
  uVar8 = (ulong)param_2;
  uVar7 = param_1[1];
  if (uVar7 != 0) {
    uVar2 = uVar7 - 1;
    if ((uVar7 & uVar2) == 0) {
      unaff_x24 = uVar2 & uVar8;
    }
    else {
      unaff_x24 = uVar8;
      if (uVar7 <= uVar8) {
        uVar5 = 0;
        if (uVar7 != 0) {
          uVar5 = uVar8 / uVar7;
        }
        unaff_x24 = uVar8 - uVar5 * uVar7;
      }
    }
    plVar4 = *(long **)(*param_1 + unaff_x24 * 8);
    if (plVar4 != (long *)0x0) {
      for (plVar4 = (long *)*plVar4; plVar4 != (long *)0x0; plVar4 = (long *)*plVar4) {
        uVar5 = plVar4[1];
        if (uVar5 == uVar8) {
          if (*(int *)(plVar4 + 2) == param_2) {
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
          if (uVar5 != unaff_x24) break;
        }
      }
    }
  }
  plVar4 = (long *)0x28;
  __Znwm();
  *plVar4 = 0;
  plVar4[1] = uVar8;
  *(undefined4 *)(plVar4 + 2) = *param_3;
  plVar4[3] = 0;
  plVar4[4] = 0;
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
    FUN_10a1cce8c(param_1,uVar2);
    uVar7 = param_1[1];
    if ((uVar7 & uVar7 - 1) == 0) {
      unaff_x24 = uVar7 - 1 & uVar8;
    }
    else {
      unaff_x24 = uVar8;
      if (uVar7 <= uVar8) {
        uVar2 = 0;
        if (uVar7 != 0) {
          uVar2 = uVar8 / uVar7;
        }
        unaff_x24 = uVar8 - uVar2 * uVar7;
      }
    }
  }
  lVar6 = *param_1;
  plVar3 = *(long **)(lVar6 + unaff_x24 * 8);
  if (plVar3 == (long *)0x0) {
    plVar3 = param_1 + 2;
    *plVar4 = *plVar3;
    *plVar3 = (long)plVar4;
    *(long **)(lVar6 + unaff_x24 * 8) = plVar3;
    if (*plVar4 == 0) goto LAB_10a1cce4c;
    uVar8 = *(ulong *)(*plVar4 + 8);
    if ((uVar7 & uVar7 - 1) == 0) {
      uVar8 = uVar8 & uVar7 - 1;
    }
    else if (uVar7 <= uVar8) {
      uVar2 = 0;
      if (uVar7 != 0) {
        uVar2 = uVar8 / uVar7;
      }
      uVar8 = uVar8 - uVar2 * uVar7;
    }
    plVar3 = (long *)(*param_1 + uVar8 * 8);
  }
  else {
    *plVar4 = *plVar3;
  }
  *plVar3 = (long)plVar4;
LAB_10a1cce4c:
  param_1[3] = param_1[3] + 1;
  return plVar4;
}



/* Entry: 10a1cce8c; end: 10a1ccf5b;  */

void FUN_10a1cce8c(long *param_1,ulong param_2)

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
LAB_10a1cced4:
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
        func_0x000109ffded8();
        *param_1 = (long)&PTR_FUN_110bad3b8;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
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
    if (param_2 < uVar9) goto LAB_10a1cced4;
  }
  return;
}



/* Entry: 10a1ccf5c; end: 10a1cd097;  */

void FUN_10a1ccf5c(long *param_1,ulong param_2)

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
      func_0x000109ffded8();
      *param_1 = (long)&PTR_FUN_110bad3b8;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
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



/* Entry: 10a1cd098; end: 10a1cd0a7;  */

void FUN_10a1cd098(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110bad3b8;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10a1cd0a8; end: 10a1cd0c7;  */

void FUN_10a1cd0a8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110bad3b8;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a1cd0c8; end: 10a1cd0df;  */

void FUN_10a1cd0c8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010a1cd0d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 10a1cd0e0; end: 10a1cd253;  */

long * FUN_10a1cd0e0(ulong *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined1 uVar2;
  ulong *puVar3;
  long *plVar4;
  undefined8 *puVar5;
  long lVar6;
  ulong uVar7;
  undefined8 uVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  ulong uStack_70;
  undefined8 *puStack_68;
  long *plStack_60;
  ulong uStack_58;
  ulong *puStack_50;
  undefined7 uStack_48;
  undefined1 uStack_41;
  undefined7 uStack_40;
  long lStack_38;
  
  puVar3 = &uStack_70;
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar10 = param_1[1] - *param_1;
  uVar7 = (lVar10 >> 4) * -0x5555555555555555 + 1;
  if (uVar7 < 0x555555555555556) {
    lVar6 = (long)(param_1[2] - *param_1) >> 4;
    uVar9 = lVar6 * 0x5555555555555556;
    if (uVar9 < uVar7 || uVar9 - uVar7 == 0) {
      uVar9 = uVar7;
    }
    if (0x2aaaaaaaaaaaaa9 < (ulong)(lVar6 * -0x5555555555555555)) {
      uVar9 = 0x555555555555555;
    }
    puStack_50 = param_1;
    if (uVar9 == 0) {
      puVar5 = (undefined8 *)0x0;
    }
    else {
      puVar5 = param_2;
      FUN_10a1cc520();
    }
    puStack_68 = (undefined8 *)(uVar9 + lVar10);
    uVar11 = uVar9 + (long)puVar5 * 0x30;
    uVar1 = *param_2;
    uStack_48 = (undefined7)param_2[1];
    uVar8 = *(undefined8 *)((long)param_2 + 0xf);
    uStack_41 = (undefined1)uVar8;
    uStack_40 = (undefined7)((ulong)uVar8 >> 8);
    uVar2 = *(undefined1 *)((long)param_2 + 0x17);
    param_2[1] = 0;
    param_2[2] = 0;
    *param_2 = 0;
    uVar13 = param_3[1];
    uVar12 = *param_3;
    *param_3 = 0;
    param_3[1] = 0;
    *(undefined8 *)((long)puStack_68 + 0xf) = uVar8;
    *puStack_68 = uVar1;
    puStack_68[1] = CONCAT17(uStack_41,uStack_48);
    *(undefined1 *)((long)puStack_68 + 0x17) = uVar2;
    *(undefined4 *)(puStack_68 + 3) = 0;
    puStack_68[5] = uVar13;
    puStack_68[4] = uVar12;
    plVar4 = puStack_68 + 6;
    uVar7 = (long)puStack_68 + (*param_1 - param_1[1]);
    uStack_70 = uVar9;
    plStack_60 = plVar4;
    uStack_58 = uVar11;
    FUN_10a1cc564(*param_1,param_1[1],uVar7);
    uStack_70 = *param_1;
    *param_1 = uVar7;
    param_1[1] = (ulong)plVar4;
    uStack_58 = param_1[2];
    param_1[2] = uVar11;
    puStack_68 = (undefined8 *)uStack_70;
    plStack_60 = (long *)uStack_70;
    FUN_10a1cc6cc();
    param_1 = puVar3;
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
      return plVar4;
    }
  }
  else {
    FUN_10a1cc50c();
  }
  ___stack_chk_fail();
  FUN_10a1cc6cc(&uStack_70);
  __Unwind_Resume(param_1);
  puVar5 = (undefined8 *)&DAT_10f62a4d8;
  FUN_109ffde64();
  if (*(long *)*puVar5 != 0) {
    FUN_10a1cd2a8();
    plVar4 = *(long **)*puVar5;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(plVar4);
    return plVar4;
  }
  return (long *)*puVar5;
}



/* Entry: 10a1cd254; end: 10a1cd267;  */

void FUN_10a1cd254(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)&DAT_10f62a4d8;
  FUN_109ffde64();
  if (*(long *)*puVar1 != 0) {
    FUN_10a1cd2a8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(*(undefined8 *)*puVar1);
    return;
  }
  return;
}



/* Entry: 10a1cd268; end: 10a1cd2a7;  */

void FUN_10a1cd268(undefined8 *param_1)

{
  if (*(long *)*param_1 != 0) {
    FUN_10a1cd2a8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(*(undefined8 *)*param_1);
    return;
  }
  return;
}



/* Entry: 10a1cd2a8; end: 10a1cd4a3;  */

void FUN_10a1cd2a8(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 8);
  while (lVar1 != param_2) {
    FUN_10a1d37cc(lVar1 + -0x10);
    FUN_10a1cc630(lVar1 + -0x30);
    lVar1 = lVar1 + -0x30;
  }
  *(long *)(param_1 + 8) = param_2;
  return;
}



/* Entry: 10a1cd4a4; end: 10a1cd60b;  */

undefined8 FUN_10a1cd4a4(int param_1,long param_2,ulong param_3,ulong *param_4,int *param_5)

{
  undefined8 *******pppppppuVar1;
  ulong uVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 *******pppppppuVar5;
  ulong uVar6;
  ulong *puVar7;
  int *piVar8;
  ulong uVar9;
  int iVar10;
  int iVar11;
  ulong uVar12;
  undefined8 uVar13;
  ulong uVar14;
  undefined8 ******ppppppuStack_58;
  ulong uStack_50;
  undefined8 uStack_48;
  
  lVar4 = param_2;
  uVar6 = param_3;
  puVar7 = param_4;
  piVar8 = param_5;
  func_0x00010a1cd424();
  puVar3 = PTR___DefaultRuneLocale_11034bcf8;
  uVar14 = *param_4;
  uVar2 = param_3 - uVar14;
  uVar9 = uVar14;
  if (uVar14 <= param_3 && uVar2 != 0) {
    do {
      uVar12 = uVar9;
      if ((ulong)*(byte *)(param_2 + uVar9) != 0x2e &&
          (*(uint *)(puVar3 + (ulong)*(byte *)(param_2 + uVar9) * 4 + 0x3c) & 0x400) == 0) break;
      uVar9 = uVar9 + 1;
      *param_4 = uVar9;
      uVar12 = param_3;
    } while (param_3 != uVar9);
    uVar12 = uVar12 - uVar14;
    if (uVar12 != 0) {
      if (uVar12 <= uVar2) {
        uVar2 = uVar12;
      }
      if (uVar2 < 0x7ffffffffffffff8) {
        if (uVar2 < 0x17) {
          uStack_48 = CONCAT17((char)uVar2,(undefined7)uStack_48);
          pppppppuVar5 = &ppppppuStack_58;
        }
        else {
          pppppppuVar1 = (undefined8 *******)0x19;
          if ((uVar2 | 7) != 0x17) {
            pppppppuVar1 = (undefined8 *******)((uVar2 | 7) + 1);
          }
          pppppppuVar5 = pppppppuVar1;
          __Znwm();
          uStack_48 = (ulong)pppppppuVar1 | 0x8000000000000000;
          ppppppuStack_58 = pppppppuVar5;
          uStack_50 = uVar2;
        }
        _memmove(pppppppuVar5,param_2 + uVar14,uVar2);
        *(undefined1 *)((long)pppppppuVar5 + uVar2) = 0;
        __ZNSt3__14stofERKNS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEPm
                  (&ppppppuStack_58,0);
        *param_5 = param_1;
        uVar13 = 1;
      }
      else {
        func_0x000109ffde50();
        if ((int)uVar6 != 1) {
          if ((long)uStack_48 < 0) {
            __ZdlPv(ppppppuStack_58);
          }
          __Unwind_Resume();
          func_0x00010a1cd424();
          puVar3 = PTR___DefaultRuneLocale_11034bcf8;
          uVar9 = *puVar7;
          if ((uVar9 < uVar6) &&
             ((*(uint *)(PTR___DefaultRuneLocale_11034bcf8 +
                        (ulong)*(byte *)(lVar4 + uVar9) * 4 + 0x3c) >> 10 & 1) != 0)) {
            iVar10 = 0;
            do {
              iVar11 = iVar10;
              if ((*(uint *)(puVar3 + (ulong)*(byte *)(lVar4 + uVar9) * 4 + 0x3c) >> 10 & 1) == 0)
              break;
              iVar11 = (int)(char)*(byte *)(lVar4 + uVar9) + iVar10 * 10 + -0x30;
              if (9999 < iVar10) {
                iVar11 = iVar10;
              }
              uVar9 = uVar9 + 1;
              *puVar7 = uVar9;
              iVar10 = iVar11;
            } while (uVar6 != uVar9);
            *piVar8 = iVar11;
            uVar13 = 1;
          }
          else {
            uVar13 = 0;
          }
          return uVar13;
        }
        ___cxa_begin_catch(lVar4);
        ___cxa_end_catch();
        uVar13 = 0;
      }
      if (-1 < (long)uStack_48) {
        return uVar13;
      }
      __ZdlPv(ppppppuStack_58);
      return uVar13;
    }
  }
  return 0;
}



/* Entry: 10a1cd60c; end: 10a1cd6b3;  */

undefined8 FUN_10a1cd60c(long param_1,ulong param_2,ulong *param_3,int *param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  ulong uVar3;
  int iVar4;
  int iVar5;
  
  func_0x00010a1cd424();
  puVar1 = PTR___DefaultRuneLocale_11034bcf8;
  uVar3 = *param_3;
  if ((uVar3 < param_2) &&
     ((*(uint *)(PTR___DefaultRuneLocale_11034bcf8 + (ulong)*(byte *)(param_1 + uVar3) * 4 + 0x3c)
       >> 10 & 1) != 0)) {
    iVar4 = 0;
    do {
      iVar5 = iVar4;
      if ((*(uint *)(puVar1 + (ulong)*(byte *)(param_1 + uVar3) * 4 + 0x3c) >> 10 & 1) == 0) break;
      iVar5 = (int)(char)*(byte *)(param_1 + uVar3) + iVar4 * 10 + -0x30;
      if (9999 < iVar4) {
        iVar5 = iVar4;
      }
      uVar3 = uVar3 + 1;
      *param_3 = uVar3;
      iVar4 = iVar5;
    } while (param_2 != uVar3);
    *param_4 = iVar5;
    uVar2 = 1;
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}



/* Entry: 10a1cd6b4; end: 10a1cd887;  */

float FUN_10a1cd6b4(int param_1,int param_2,int param_3)

{
  int iVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  fVar3 = (float)param_2 / 100.0;
  fVar5 = (float)param_3 / 100.0;
  fVar4 = 1.0;
  if (fVar3 <= 1.0) {
    fVar4 = fVar3;
  }
  fVar2 = 0.0;
  if (0.0 <= fVar3) {
    fVar2 = fVar4;
  }
  fVar4 = 1.0;
  if (fVar5 <= 1.0) {
    fVar4 = fVar5;
  }
  fVar3 = 0.0;
  if (0.0 <= fVar5) {
    fVar3 = fVar4;
  }
  if (fVar2 == 0.0) {
    return fVar3;
  }
  fVar5 = (float)param_1 / 360.0;
  fVar5 = (float)((uint)fVar5 ^ ((uint)fVar5 ^ (uint)(fVar5 - (float)(int)fVar5)) & 0x7fffffff);
  fVar4 = fVar5 + 1.0;
  if (0.0 <= fVar5) {
    fVar4 = fVar5;
  }
  fVar4 = fVar4 * 6.0;
  iVar1 = (int)fVar4;
  fVar5 = fVar3 * (1.0 - fVar2);
  if (iVar1 < 3) {
    fVar4 = fVar3 * (1.0 - (fVar4 - (float)(int)fVar4) * fVar2);
    if ((iVar1 != 1) && (fVar4 = fVar3, iVar1 == 2)) {
      return fVar5;
    }
  }
  else {
    if (iVar1 == 3) {
      return fVar5;
    }
    if (iVar1 == 4) {
      return fVar3 * (1.0 - (1.0 - (fVar4 - (float)(int)fVar4)) * fVar2);
    }
    fVar4 = fVar3;
    if (iVar1 == 5) {
      return fVar3;
    }
  }
  return fVar4;
}



/* Entry: 10a1cd888; end: 10a1cd8ab;  */

void FUN_10a1cd888(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)0x10;
  __Znwm();
  *puVar1 = &PTR_DAT_110bad428;
  return;
}



/* Entry: 10a1cd8ac; end: 10a1cd8af;  */

void FUN_10a1cd8ac(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a1cd8b0; end: 10a1cd98f;  */

void FUN_10a1cd8b0(undefined8 *param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4)

{
  long *plVar1;
  ulong uVar2;
  char cVar3;
  bool bVar4;
  undefined8 *puVar5;
  long lVar6;
  undefined8 uVar7;
  long lStack_38;
  long lStack_30;
  undefined8 uStack_28;
  
  uVar2 = param_3[1];
  puVar5 = (undefined8 *)*param_3;
  if (-1 < (char)*(byte *)((long)param_3 + 0x17)) {
    uVar2 = (ulong)*(byte *)((long)param_3 + 0x17);
    puVar5 = param_3;
  }
  lStack_38 = 0;
  lStack_30 = 0;
  uStack_28 = 0;
  FUN_109ffdff4(&lStack_38,puVar5,(long)puVar5 + uVar2);
  if (lStack_38 != lStack_30) {
    _memmove(*(undefined8 *)*param_4,lStack_38,lStack_30 - lStack_38);
  }
  lVar6 = param_4[1];
  uVar7 = *param_4;
  param_1[1] = param_4[1];
  *param_1 = uVar7;
  if (lVar6 != 0) {
    plVar1 = (long *)(lVar6 + 8);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = *plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  if (lStack_38 != 0) {
    lStack_30 = lStack_38;
    __ZdlPv();
  }
  return;
}



/* Entry: 10a1cd990; end: 10a1cd9a3;  */

undefined ** FUN_10a1cd990(void)

{
  return &PTR_DAT_110bad498;
}



/* Entry: 10a1cd9a4; end: 10a1cd9c7;  */

void FUN_10a1cd9a4(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)0x10;
  __Znwm();
  *puVar1 = &PTR_DAT_110bad4b8;
  return;
}



/* Entry: 10a1cd9c8; end: 10a1cd9db;  */

void FUN_10a1cd9c8(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a1cd9dc; end: 10a1cda17;  */

long FUN_10a1cd9dc(long param_1,undefined8 param_2)

{
  FUN_10a042ab0(param_2,&PTR_DAT_110bad528);
  param_1 = param_1 + 8;
  if ((int)param_2 == 0) {
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 10a1cda18; end: 10a1cda23;  */

undefined ** FUN_10a1cda18(void)

{
  return &PTR_DAT_110bad528;
}



/* Entry: 10a1cda24; end: 10a1cdc03;  */

long * FUN_10a1cda24(long *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  long lVar2;
  ulong uVar3;
  long *plVar4;
  long lVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  ulong uVar9;
  long *plVar10;
  
  plVar4 = param_1;
  FUN_10a054838(param_1,*param_2,param_2[1]);
  plVar8 = (long *)param_1[1];
  if (plVar8 != (long *)0x0) {
    uVar9 = (long)plVar8 - 1;
    if (((ulong)plVar8 & uVar9) == 0) {
      plVar10 = (long *)(uVar9 & (ulong)plVar4);
    }
    else {
      plVar10 = plVar4;
      if (plVar8 <= plVar4) {
        uVar3 = 0;
        if (plVar8 != (long *)0x0) {
          uVar3 = (ulong)plVar4 / (ulong)plVar8;
        }
        plVar10 = (long *)((long)plVar4 - uVar3 * (long)plVar8);
      }
    }
    plVar6 = *(long **)(*param_1 + (long)plVar10 * 8);
    if (plVar6 != (long *)0x0) {
      plVar6 = (long *)*plVar6;
      if (plVar6 == (long *)0x0) {
        return (long *)0x0;
      }
      uVar1 = *param_2;
      lVar2 = param_2[1];
      do {
        plVar7 = (long *)plVar6[1];
        if (plVar7 == plVar4) {
          if (plVar6[3] == lVar2) {
            lVar5 = plVar6[2];
            _memcmp(lVar5,uVar1,lVar2);
            if ((int)lVar5 == 0) {
              return plVar6;
            }
          }
        }
        else {
          if (((ulong)plVar8 & uVar9) == 0) {
            plVar7 = (long *)((ulong)plVar7 & uVar9);
          }
          else if (plVar8 <= plVar7) {
            uVar3 = 0;
            if (plVar8 != (long *)0x0) {
              uVar3 = (ulong)plVar7 / (ulong)plVar8;
            }
            plVar7 = (long *)((long)plVar7 - uVar3 * (long)plVar8);
          }
          if (plVar7 != plVar10) {
            return (long *)0x0;
          }
        }
        plVar6 = (long *)*plVar6;
        if (plVar6 == (long *)0x0) {
          return (long *)0x0;
        }
      } while( true );
    }
  }
  return (long *)0x0;
}



/* Entry: 10a1cdc04; end: 10a1cdc17;  */

undefined1  [16] FUN_10a1cdc04(undefined8 param_1,ulong param_2)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  
  plVar1 = (long *)&DAT_10f62a4d8;
  FUN_109ffde64();
  if (param_2 >> 0x3a == 0) {
    lVar2 = param_2 << 6;
    __Znwm(lVar2);
    auVar5._8_8_ = param_2;
    auVar5._0_8_ = lVar2;
    return auVar5;
  }
  func_0x000109ffded8();
  lVar2 = plVar1[1];
  lVar3 = plVar1[2];
  while (lVar3 != lVar2) {
    puVar4 = *(undefined8 **)(lVar3 + -0x38);
    plVar1[2] = lVar3 + -0x40;
    (*(code *)*puVar4)();
    lVar3 = plVar1[2];
  }
  if (*plVar1 != 0) {
    __ZdlPv();
  }
  auVar6._8_8_ = param_2;
  auVar6._0_8_ = plVar1;
  return auVar6;
}



/* Entry: 10a1cdc18; end: 10a1cdc9f;  */

undefined1  [16] FUN_10a1cdc18(long *param_1,ulong param_2)

{
  long lVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  
  if (param_2 >> 0x3a == 0) {
    lVar1 = param_2 << 6;
    __Znwm(lVar1);
    auVar4._8_8_ = param_2;
    auVar4._0_8_ = lVar1;
    return auVar4;
  }
  func_0x000109ffded8();
  lVar1 = param_1[1];
  lVar2 = param_1[2];
  while (lVar2 != lVar1) {
    puVar3 = *(undefined8 **)(lVar2 + -0x38);
    param_1[2] = lVar2 + -0x40;
    (*(code *)*puVar3)();
    lVar2 = param_1[2];
  }
  if (*param_1 != 0) {
    __ZdlPv();
  }
  auVar5._8_8_ = param_2;
  auVar5._0_8_ = param_1;
  return auVar5;
}



/* Entry: 10a1cdca0; end: 10a1cdd0f;  */

void FUN_10a1cdca0(long param_1,undefined1 *param_2,undefined1 *param_3,long param_4)

{
  undefined1 *puVar1;
  
  if (param_4 != 0) {
    func_0x000107c2b04c(param_1,param_4);
    puVar1 = *(undefined1 **)(param_1 + 8);
    for (; param_2 != param_3; param_2 = param_2 + 1) {
      *puVar1 = *param_2;
      puVar1 = puVar1 + 1;
    }
    *(undefined1 **)(param_1 + 8) = puVar1;
  }
  return;
}



/* Entry: 10a1cdd10; end: 10a1cdddf;  */

undefined1  [16] FUN_10a1cdd10(ulong *param_1,ulong *param_2,undefined8 param_3,undefined8 *param_4)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  ulong *puVar5;
  long *plVar6;
  ulong uVar7;
  undefined8 *puVar8;
  ulong uVar9;
  long *plVar10;
  long *plVar11;
  ulong uVar12;
  ulong *puVar13;
  ulong *puVar14;
  ulong unaff_x24;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  
  puVar13 = param_1;
  puVar5 = param_2;
  if ((long)param_2 - 1U == 0) {
    param_2 = (ulong *)0x2;
  }
  else if (((ulong)param_2 & (long)param_2 - 1U) != 0) {
    __ZNSt3__112__next_primeEm();
    puVar13 = param_2;
  }
  puVar14 = (ulong *)param_1[1];
  if (puVar14 > param_2 || param_2 == puVar14) {
    if (puVar14 <= param_2) {
LAB_10a1cddd0:
      auVar15._8_8_ = puVar5;
      auVar15._0_8_ = puVar13;
      return auVar15;
    }
    puVar13 = (ulong *)(long)((float)param_1[3] / *(float *)(param_1 + 4));
    if ((puVar14 < (ulong *)0x3) || (((ulong)puVar14 & (long)puVar14 - 1U) != 0)) {
      __ZNSt3__112__next_primeEm();
    }
    else if ((ulong *)0x1 < puVar13) {
      puVar13 = (ulong *)(1L << (-LZCOUNT((long)puVar13 + -1) & 0x3fU));
    }
    if (param_2 <= puVar13) {
      param_2 = puVar13;
    }
    if (puVar14 <= param_2) goto LAB_10a1cddd0;
  }
  puVar13 = param_2;
  if (param_2 == (ulong *)0x0) {
    uVar3 = *param_1;
    *param_1 = 0;
    if (uVar3 != 0) {
      __ZdlPv();
      puVar13 = param_2;
    }
    param_1[1] = 0;
LAB_10a1cdf0c:
    auVar16._8_8_ = puVar13;
    auVar16._0_8_ = uVar3;
    return auVar16;
  }
  if ((ulong)param_2 >> 0x3d == 0) {
    uVar2 = (long)param_2 << 3;
    __Znwm();
    uVar3 = *param_1;
    *param_1 = uVar2;
    if (uVar3 != 0) {
      __ZdlPv();
    }
    puVar5 = (ulong *)0x0;
    param_1[1] = (ulong)param_2;
    do {
      *(undefined8 *)(*param_1 + (long)puVar5 * 8) = 0;
      puVar5 = (ulong *)((long)puVar5 + 1);
    } while (param_2 != puVar5);
    plVar6 = (long *)param_1[2];
    if (plVar6 != (long *)0x0) {
      puVar5 = (ulong *)plVar6[1];
      uVar2 = (long)param_2 - 1;
      if (((ulong)param_2 & uVar2) == 0) {
        puVar5 = (ulong *)((ulong)puVar5 & uVar2);
      }
      else if (param_2 <= puVar5) {
        uVar12 = 0;
        if (param_2 != (ulong *)0x0) {
          uVar12 = (ulong)puVar5 / (ulong)param_2;
        }
        puVar5 = (ulong *)((long)puVar5 - uVar12 * (long)param_2);
      }
      *(ulong **)(*param_1 + (long)puVar5 * 8) = param_1 + 2;
      plVar10 = (long *)*plVar6;
      while (plVar10 != (long *)0x0) {
        puVar14 = (ulong *)plVar10[1];
        if (((ulong)param_2 & uVar2) == 0) {
          puVar14 = (ulong *)((ulong)puVar14 & uVar2);
        }
        else if (param_2 <= puVar14) {
          uVar12 = 0;
          if (param_2 != (ulong *)0x0) {
            uVar12 = (ulong)puVar14 / (ulong)param_2;
          }
          puVar14 = (ulong *)((long)puVar14 - uVar12 * (long)param_2);
        }
        plVar11 = plVar10;
        if (puVar14 != puVar5) {
          uVar12 = *param_1;
          if (*(long *)(uVar12 + (long)puVar14 * 8) == 0) {
            *(long **)(uVar12 + (long)puVar14 * 8) = plVar6;
            puVar5 = puVar14;
          }
          else {
            *plVar6 = *plVar10;
            *plVar10 = **(undefined8 **)(uVar12 + (long)puVar14 * 8);
            **(long **)(uVar12 + (long)puVar14 * 8) = (long)plVar10;
            plVar11 = plVar6;
          }
        }
        plVar6 = plVar11;
        plVar10 = (long *)*plVar11;
      }
    }
    goto LAB_10a1cdf0c;
  }
  func_0x000109ffded8();
  uVar3 = *param_2;
  uVar2 = ((ulong)(uint)((int)uVar3 << 3) + 8 ^ uVar3 >> 0x20) * -0x622015f714c7d297;
  uVar2 = (uVar3 >> 0x20 ^ uVar2 >> 0x2f ^ uVar2) * -0x622015f714c7d297;
  uVar12 = (uVar2 ^ uVar2 >> 0x2f) * -0x622015f714c7d297;
  uVar2 = param_1[1];
  if (uVar2 != 0) {
    uVar7 = uVar2 - 1;
    if ((uVar2 & uVar7) == 0) {
      unaff_x24 = uVar12 & uVar7;
    }
    else {
      unaff_x24 = uVar12;
      if (uVar2 <= uVar12) {
        uVar9 = 0;
        if (uVar2 != 0) {
          uVar9 = uVar12 / uVar2;
        }
        unaff_x24 = uVar12 - uVar9 * uVar2;
      }
    }
    puVar8 = *(undefined8 **)(*param_1 + unaff_x24 * 8);
    if (puVar8 != (undefined8 *)0x0) {
      for (puVar13 = (ulong *)*puVar8; puVar13 != (ulong *)0x0; puVar13 = (ulong *)*puVar13) {
        uVar9 = puVar13[1];
        if (uVar9 == uVar12) {
          if (puVar13[2] == uVar3) {
            uVar4 = 0;
            goto LAB_10a1ce12c;
          }
        }
        else {
          if ((uVar2 & uVar7) == 0) {
            uVar9 = uVar9 & uVar7;
          }
          else if (uVar2 <= uVar9) {
            uVar1 = 0;
            if (uVar2 != 0) {
              uVar1 = uVar9 / uVar2;
            }
            uVar9 = uVar9 - uVar1 * uVar2;
          }
          if (uVar9 != unaff_x24) break;
        }
      }
    }
  }
  puVar13 = (ulong *)0x20;
  __Znwm();
  *puVar13 = 0;
  puVar13[1] = uVar12;
  puVar13[2] = *(ulong *)*param_4;
  *(undefined4 *)(puVar13 + 3) = 0;
  if ((uVar2 == 0) || (*(float *)(param_1 + 4) * (float)uVar2 < (float)(param_1[3] + 1))) {
    uVar3 = 1;
    if (2 < uVar2) {
      uVar3 = (ulong)((uVar2 & uVar2 - 1) != 0);
    }
    uVar3 = uVar3 | uVar2 << 1;
    uVar2 = (ulong)((float)(param_1[3] + 1) / *(float *)(param_1 + 4));
    if (uVar3 <= uVar2) {
      uVar3 = uVar2;
    }
    FUN_10a1cdd10(param_1,uVar3);
    uVar2 = param_1[1];
    if ((uVar2 & uVar2 - 1) == 0) {
      unaff_x24 = uVar2 - 1 & uVar12;
    }
    else {
      unaff_x24 = uVar12;
      if (uVar2 <= uVar12) {
        uVar3 = 0;
        if (uVar2 != 0) {
          uVar3 = uVar12 / uVar2;
        }
        unaff_x24 = uVar12 - uVar3 * uVar2;
      }
    }
  }
  uVar3 = *param_1;
  puVar5 = *(ulong **)(uVar3 + unaff_x24 * 8);
  if (puVar5 == (ulong *)0x0) {
    puVar5 = param_1 + 2;
    *puVar13 = *puVar5;
    *puVar5 = (ulong)puVar13;
    *(ulong **)(uVar3 + unaff_x24 * 8) = puVar5;
    if (*puVar13 == 0) goto LAB_10a1ce11c;
    uVar3 = *(ulong *)(*puVar13 + 8);
    if ((uVar2 & uVar2 - 1) == 0) {
      uVar3 = uVar3 & uVar2 - 1;
    }
    else if (uVar2 <= uVar3) {
      uVar12 = 0;
      if (uVar2 != 0) {
        uVar12 = uVar3 / uVar2;
      }
      uVar3 = uVar3 - uVar12 * uVar2;
    }
    puVar5 = (ulong *)(*param_1 + uVar3 * 8);
  }
  else {
    *puVar13 = *puVar5;
  }
  *puVar5 = (ulong)puVar13;
LAB_10a1ce11c:
  param_1[3] = param_1[3] + 1;
  uVar4 = 1;
LAB_10a1ce12c:
  auVar17._8_8_ = uVar4;
  auVar17._0_8_ = puVar13;
  return auVar17;
}



/* Entry: 10a1cdde0; end: 10a1cdf1b;  */

undefined1  [16] FUN_10a1cdde0(long *param_1,ulong *param_2,undefined8 param_3,undefined8 *param_4)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  ulong *puVar4;
  undefined8 uVar5;
  ulong *puVar6;
  ulong uVar7;
  long *plVar8;
  ulong uVar9;
  ulong uVar10;
  undefined8 *puVar11;
  ulong uVar12;
  long *plVar13;
  long *plVar14;
  ulong *puVar15;
  ulong uVar16;
  ulong unaff_x24;
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  
  puVar4 = param_2;
  if (param_2 == (ulong *)0x0) {
    lVar3 = *param_1;
    *param_1 = 0;
    if (lVar3 != 0) {
      __ZdlPv();
      puVar4 = param_2;
    }
    param_1[1] = 0;
LAB_10a1cdf0c:
    auVar17._8_8_ = puVar4;
    auVar17._0_8_ = lVar3;
    return auVar17;
  }
  if ((ulong)param_2 >> 0x3d == 0) {
    lVar2 = (long)param_2 << 3;
    __Znwm();
    lVar3 = *param_1;
    *param_1 = lVar2;
    if (lVar3 != 0) {
      __ZdlPv();
    }
    puVar6 = (ulong *)0x0;
    param_1[1] = (long)param_2;
    do {
      *(undefined8 *)(*param_1 + (long)puVar6 * 8) = 0;
      puVar6 = (ulong *)((long)puVar6 + 1);
    } while (param_2 != puVar6);
    plVar8 = (long *)param_1[2];
    if (plVar8 != (long *)0x0) {
      puVar6 = (ulong *)plVar8[1];
      uVar7 = (long)param_2 - 1;
      if (((ulong)param_2 & uVar7) == 0) {
        puVar6 = (ulong *)((ulong)puVar6 & uVar7);
      }
      else if (param_2 <= puVar6) {
        uVar10 = 0;
        if (param_2 != (ulong *)0x0) {
          uVar10 = (ulong)puVar6 / (ulong)param_2;
        }
        puVar6 = (ulong *)((long)puVar6 - uVar10 * (long)param_2);
      }
      *(long **)(*param_1 + (long)puVar6 * 8) = param_1 + 2;
      plVar13 = (long *)*plVar8;
      while (plVar13 != (long *)0x0) {
        puVar15 = (ulong *)plVar13[1];
        if (((ulong)param_2 & uVar7) == 0) {
          puVar15 = (ulong *)((ulong)puVar15 & uVar7);
        }
        else if (param_2 <= puVar15) {
          uVar10 = 0;
          if (param_2 != (ulong *)0x0) {
            uVar10 = (ulong)puVar15 / (ulong)param_2;
          }
          puVar15 = (ulong *)((long)puVar15 - uVar10 * (long)param_2);
        }
        plVar14 = plVar13;
        if (puVar15 != puVar6) {
          lVar2 = *param_1;
          if (*(long *)(lVar2 + (long)puVar15 * 8) == 0) {
            *(long **)(lVar2 + (long)puVar15 * 8) = plVar8;
            puVar6 = puVar15;
          }
          else {
            *plVar8 = *plVar13;
            *plVar13 = **(undefined8 **)(lVar2 + (long)puVar15 * 8);
            **(long **)(lVar2 + (long)puVar15 * 8) = (long)plVar13;
            plVar14 = plVar8;
          }
        }
        plVar8 = plVar14;
        plVar13 = (long *)*plVar14;
      }
    }
    goto LAB_10a1cdf0c;
  }
  func_0x000109ffded8();
  uVar7 = *param_2;
  uVar10 = ((ulong)(uint)((int)uVar7 << 3) + 8 ^ uVar7 >> 0x20) * -0x622015f714c7d297;
  uVar10 = (uVar7 >> 0x20 ^ uVar10 >> 0x2f ^ uVar10) * -0x622015f714c7d297;
  uVar16 = (uVar10 ^ uVar10 >> 0x2f) * -0x622015f714c7d297;
  uVar10 = param_1[1];
  if (uVar10 != 0) {
    uVar9 = uVar10 - 1;
    if ((uVar10 & uVar9) == 0) {
      unaff_x24 = uVar16 & uVar9;
    }
    else {
      unaff_x24 = uVar16;
      if (uVar10 <= uVar16) {
        uVar12 = 0;
        if (uVar10 != 0) {
          uVar12 = uVar16 / uVar10;
        }
        unaff_x24 = uVar16 - uVar12 * uVar10;
      }
    }
    puVar11 = *(undefined8 **)(*param_1 + unaff_x24 * 8);
    if (puVar11 != (undefined8 *)0x0) {
      for (plVar8 = (long *)*puVar11; plVar8 != (long *)0x0; plVar8 = (long *)*plVar8) {
        uVar12 = plVar8[1];
        if (uVar12 == uVar16) {
          if (plVar8[2] == uVar7) {
            uVar5 = 0;
            goto LAB_10a1ce12c;
          }
        }
        else {
          if ((uVar10 & uVar9) == 0) {
            uVar12 = uVar12 & uVar9;
          }
          else if (uVar10 <= uVar12) {
            uVar1 = 0;
            if (uVar10 != 0) {
              uVar1 = uVar12 / uVar10;
            }
            uVar12 = uVar12 - uVar1 * uVar10;
          }
          if (uVar12 != unaff_x24) break;
        }
      }
    }
  }
  plVar8 = (long *)0x20;
  __Znwm();
  *plVar8 = 0;
  plVar8[1] = uVar16;
  plVar8[2] = *(long *)*param_4;
  *(undefined4 *)(plVar8 + 3) = 0;
  if ((uVar10 == 0) || (*(float *)(param_1 + 4) * (float)uVar10 < (float)(param_1[3] + 1))) {
    uVar7 = 1;
    if (2 < uVar10) {
      uVar7 = (ulong)((uVar10 & uVar10 - 1) != 0);
    }
    uVar7 = uVar7 | uVar10 << 1;
    uVar10 = (ulong)((float)(param_1[3] + 1) / *(float *)(param_1 + 4));
    if (uVar7 <= uVar10) {
      uVar7 = uVar10;
    }
    FUN_10a1cdd10(param_1,uVar7);
    uVar10 = param_1[1];
    if ((uVar10 & uVar10 - 1) == 0) {
      unaff_x24 = uVar10 - 1 & uVar16;
    }
    else {
      unaff_x24 = uVar16;
      if (uVar10 <= uVar16) {
        uVar7 = 0;
        if (uVar10 != 0) {
          uVar7 = uVar16 / uVar10;
        }
        unaff_x24 = uVar16 - uVar7 * uVar10;
      }
    }
  }
  lVar3 = *param_1;
  plVar13 = *(long **)(lVar3 + unaff_x24 * 8);
  if (plVar13 == (long *)0x0) {
    plVar13 = param_1 + 2;
    *plVar8 = *plVar13;
    *plVar13 = (long)plVar8;
    *(long **)(lVar3 + unaff_x24 * 8) = plVar13;
    if (*plVar8 == 0) goto LAB_10a1ce11c;
    uVar7 = *(ulong *)(*plVar8 + 8);
    if ((uVar10 & uVar10 - 1) == 0) {
      uVar7 = uVar7 & uVar10 - 1;
    }
    else if (uVar10 <= uVar7) {
      uVar16 = 0;
      if (uVar10 != 0) {
        uVar16 = uVar7 / uVar10;
      }
      uVar7 = uVar7 - uVar16 * uVar10;
    }
    plVar13 = (long *)(*param_1 + uVar7 * 8);
  }
  else {
    *plVar8 = *plVar13;
  }
  *plVar13 = (long)plVar8;
LAB_10a1ce11c:
  param_1[3] = param_1[3] + 1;
  uVar5 = 1;
LAB_10a1ce12c:
  auVar18._8_8_ = uVar5;
  auVar18._0_8_ = plVar8;
  return auVar18;
}



/* Entry: 10a1cdf1c; end: 10a1ce15f;  */

undefined1  [16] FUN_10a1cdf1c(long *param_1,ulong *param_2,undefined8 param_3,undefined8 *param_4)

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
            goto LAB_10a1ce12c;
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
  plVar10 = (long *)0x20;
  __Znwm();
  *plVar10 = 0;
  plVar10[1] = uVar11;
  plVar10[2] = *(long *)*param_4;
  *(undefined4 *)(plVar10 + 3) = 0;
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
    FUN_10a1cdd10(param_1,uVar3);
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
    if (*plVar10 == 0) goto LAB_10a1ce11c;
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
LAB_10a1ce11c:
  param_1[3] = param_1[3] + 1;
  uVar2 = 1;
LAB_10a1ce12c:
  auVar12._8_8_ = uVar2;
  auVar12._0_8_ = plVar10;
  return auVar12;
}



/* Entry: 10a1ce160; end: 10a1ce1eb;  */

long * FUN_10a1ce160(long *param_1)

{
  long *plVar1;
  long lVar2;
  
  plVar1 = (long *)param_1[2];
  while (plVar1 != (long *)0x0) {
    plVar1 = (long *)*plVar1;
    __ZdlPv();
  }
  lVar2 = *param_1;
  *param_1 = 0;
  if (lVar2 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 10a1ce1ec; end: 10a1ce1ff;  */

void FUN_10a1ce1ec(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,ulong param_4)

{
  undefined8 *puVar1;
  code *pcVar2;
  long *plVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  ulong uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  
  plVar3 = (long *)&DAT_10f62a4d8;
  FUN_109ffde64();
  if (param_2 < (undefined8 *)0xccccccccccccccd) {
    __Znwm((long)param_2 * 0x14);
    return;
  }
  func_0x000109ffded8();
  lVar5 = plVar3[2];
  puVar4 = (undefined8 *)*plVar3;
  if ((ulong)((lVar5 - (long)puVar4 >> 2) * -0x3333333333333333) < param_4) {
    if (puVar4 != (undefined8 *)0x0) {
      plVar3[1] = (long)puVar4;
      __ZdlPv();
      lVar5 = 0;
      *plVar3 = 0;
      plVar3[1] = 0;
      plVar3[2] = 0;
    }
    if (0xccccccccccccccc < param_4) {
      FUN_10a1ce1ec();
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10a1ce3d0);
      (*pcVar2)();
    }
    uVar8 = (lVar5 >> 2) * -0x6666666666666666;
    if (uVar8 < param_4 || uVar8 - param_4 == 0) {
      uVar8 = param_4;
    }
    if (0x666666666666665 < (ulong)((lVar5 >> 2) * -0x3333333333333333)) {
      uVar8 = 0xccccccccccccccc;
    }
    func_0x00010a1ce1a8(plVar3,uVar8);
    puVar6 = (undefined8 *)plVar3[1];
    for (; param_2 != param_3; param_2 = (undefined8 *)((long)param_2 + 0x14)) {
      uVar10 = param_2[1];
      uVar9 = *param_2;
      *(undefined4 *)(puVar6 + 2) = *(undefined4 *)(param_2 + 2);
      puVar6[1] = uVar10;
      *puVar6 = uVar9;
      puVar6 = (undefined8 *)((long)puVar6 + 0x14);
    }
  }
  else {
    puVar7 = (undefined8 *)plVar3[1];
    if (param_4 <= (ulong)(((long)puVar7 - (long)puVar4 >> 2) * -0x3333333333333333)) {
      for (; param_2 != param_3; param_2 = (undefined8 *)((long)param_2 + 0x14)) {
        uVar9 = *param_2;
        puVar4[1] = param_2[1];
        *puVar4 = uVar9;
        *(undefined4 *)(puVar4 + 2) = *(undefined4 *)(param_2 + 2);
        puVar4 = (undefined8 *)((long)puVar4 + 0x14);
      }
      plVar3[1] = (long)puVar4;
      return;
    }
    puVar1 = (undefined8 *)((long)param_2 + ((long)puVar7 - (long)puVar4));
    puVar6 = puVar7;
    if (puVar7 != puVar4) {
      do {
        uVar9 = *param_2;
        puVar4[1] = param_2[1];
        *puVar4 = uVar9;
        *(undefined4 *)(puVar4 + 2) = *(undefined4 *)(param_2 + 2);
        param_2 = (undefined8 *)((long)param_2 + 0x14);
        puVar4 = (undefined8 *)((long)puVar4 + 0x14);
      } while (param_2 != puVar1);
      puVar7 = (undefined8 *)plVar3[1];
      puVar6 = puVar7;
    }
    for (; puVar1 != param_3; puVar1 = (undefined8 *)((long)puVar1 + 0x14)) {
      uVar10 = puVar1[1];
      uVar9 = *puVar1;
      *(undefined4 *)(puVar7 + 2) = *(undefined4 *)(puVar1 + 2);
      puVar7[1] = uVar10;
      *puVar7 = uVar9;
      puVar7 = (undefined8 *)((long)puVar7 + 0x14);
      puVar6 = (undefined8 *)((long)puVar6 + 0x14);
    }
  }
  plVar3[1] = (long)puVar6;
  return;
}



/* Entry: 10a1ce200; end: 10a1ce23f;  */

void FUN_10a1ce200(long *param_1,undefined8 *param_2,undefined8 *param_3,ulong param_4)

{
  undefined8 *puVar1;
  code *pcVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  ulong uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  if (param_2 < (undefined8 *)0xccccccccccccccd) {
    __Znwm((long)param_2 * 0x14);
    return;
  }
  func_0x000109ffded8();
  lVar4 = param_1[2];
  puVar3 = (undefined8 *)*param_1;
  if ((ulong)((lVar4 - (long)puVar3 >> 2) * -0x3333333333333333) < param_4) {
    if (puVar3 != (undefined8 *)0x0) {
      param_1[1] = (long)puVar3;
      __ZdlPv();
      lVar4 = 0;
      *param_1 = 0;
      param_1[1] = 0;
      param_1[2] = 0;
    }
    if (0xccccccccccccccc < param_4) {
      FUN_10a1ce1ec();
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10a1ce3d0);
      (*pcVar2)();
    }
    uVar7 = (lVar4 >> 2) * -0x6666666666666666;
    if (uVar7 < param_4 || uVar7 - param_4 == 0) {
      uVar7 = param_4;
    }
    if (0x666666666666665 < (ulong)((lVar4 >> 2) * -0x3333333333333333)) {
      uVar7 = 0xccccccccccccccc;
    }
    func_0x00010a1ce1a8(param_1,uVar7);
    puVar5 = (undefined8 *)param_1[1];
    for (; param_2 != param_3; param_2 = (undefined8 *)((long)param_2 + 0x14)) {
      uVar9 = param_2[1];
      uVar8 = *param_2;
      *(undefined4 *)(puVar5 + 2) = *(undefined4 *)(param_2 + 2);
      puVar5[1] = uVar9;
      *puVar5 = uVar8;
      puVar5 = (undefined8 *)((long)puVar5 + 0x14);
    }
  }
  else {
    puVar6 = (undefined8 *)param_1[1];
    if (param_4 <= (ulong)(((long)puVar6 - (long)puVar3 >> 2) * -0x3333333333333333)) {
      for (; param_2 != param_3; param_2 = (undefined8 *)((long)param_2 + 0x14)) {
        uVar8 = *param_2;
        puVar3[1] = param_2[1];
        *puVar3 = uVar8;
        *(undefined4 *)(puVar3 + 2) = *(undefined4 *)(param_2 + 2);
        puVar3 = (undefined8 *)((long)puVar3 + 0x14);
      }
      param_1[1] = (long)puVar3;
      return;
    }
    puVar1 = (undefined8 *)((long)param_2 + ((long)puVar6 - (long)puVar3));
    puVar5 = puVar6;
    if (puVar6 != puVar3) {
      do {
        uVar8 = *param_2;
        puVar3[1] = param_2[1];
        *puVar3 = uVar8;
        *(undefined4 *)(puVar3 + 2) = *(undefined4 *)(param_2 + 2);
        param_2 = (undefined8 *)((long)param_2 + 0x14);
        puVar3 = (undefined8 *)((long)puVar3 + 0x14);
      } while (param_2 != puVar1);
      puVar6 = (undefined8 *)param_1[1];
      puVar5 = puVar6;
    }
    for (; puVar1 != param_3; puVar1 = (undefined8 *)((long)puVar1 + 0x14)) {
      uVar9 = puVar1[1];
      uVar8 = *puVar1;
      *(undefined4 *)(puVar6 + 2) = *(undefined4 *)(puVar1 + 2);
      puVar6[1] = uVar9;
      *puVar6 = uVar8;
      puVar6 = (undefined8 *)((long)puVar6 + 0x14);
      puVar5 = (undefined8 *)((long)puVar5 + 0x14);
    }
  }
  param_1[1] = (long)puVar5;
  return;
}



/* Entry: 10a1ce240; end: 10a1ce3cb;  */

void FUN_10a1ce240(long *param_1,undefined8 *param_2,undefined8 *param_3,ulong param_4)

{
  undefined8 *puVar1;
  code *pcVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  ulong uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  lVar4 = param_1[2];
  puVar3 = (undefined8 *)*param_1;
  if ((ulong)((lVar4 - (long)puVar3 >> 2) * -0x3333333333333333) < param_4) {
    if (puVar3 != (undefined8 *)0x0) {
      param_1[1] = (long)puVar3;
      __ZdlPv();
      lVar4 = 0;
      *param_1 = 0;
      param_1[1] = 0;
      param_1[2] = 0;
    }
    if (0xccccccccccccccc < param_4) {
      FUN_10a1ce1ec();
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10a1ce3d0);
      (*pcVar2)();
    }
    uVar7 = (lVar4 >> 2) * -0x6666666666666666;
    if (uVar7 < param_4 || uVar7 - param_4 == 0) {
      uVar7 = param_4;
    }
    if (0x666666666666665 < (ulong)((lVar4 >> 2) * -0x3333333333333333)) {
      uVar7 = 0xccccccccccccccc;
    }
    func_0x00010a1ce1a8(param_1,uVar7);
    puVar5 = (undefined8 *)param_1[1];
    for (; param_2 != param_3; param_2 = (undefined8 *)((long)param_2 + 0x14)) {
      uVar9 = param_2[1];
      uVar8 = *param_2;
      *(undefined4 *)(puVar5 + 2) = *(undefined4 *)(param_2 + 2);
      puVar5[1] = uVar9;
      *puVar5 = uVar8;
      puVar5 = (undefined8 *)((long)puVar5 + 0x14);
    }
  }
  else {
    puVar6 = (undefined8 *)param_1[1];
    if (param_4 <= (ulong)(((long)puVar6 - (long)puVar3 >> 2) * -0x3333333333333333)) {
      for (; param_2 != param_3; param_2 = (undefined8 *)((long)param_2 + 0x14)) {
        uVar8 = *param_2;
        puVar3[1] = param_2[1];
        *puVar3 = uVar8;
        *(undefined4 *)(puVar3 + 2) = *(undefined4 *)(param_2 + 2);
        puVar3 = (undefined8 *)((long)puVar3 + 0x14);
      }
      param_1[1] = (long)puVar3;
      return;
    }
    puVar1 = (undefined8 *)((long)param_2 + ((long)puVar6 - (long)puVar3));
    puVar5 = puVar6;
    if (puVar6 != puVar3) {
      do {
        uVar8 = *param_2;
        puVar3[1] = param_2[1];
        *puVar3 = uVar8;
        *(undefined4 *)(puVar3 + 2) = *(undefined4 *)(param_2 + 2);
        param_2 = (undefined8 *)((long)param_2 + 0x14);
        puVar3 = (undefined8 *)((long)puVar3 + 0x14);
      } while (param_2 != puVar1);
      puVar6 = (undefined8 *)param_1[1];
      puVar5 = puVar6;
    }
    for (; puVar1 != param_3; puVar1 = (undefined8 *)((long)puVar1 + 0x14)) {
      uVar9 = puVar1[1];
      uVar8 = *puVar1;
      *(undefined4 *)(puVar6 + 2) = *(undefined4 *)(puVar1 + 2);
      puVar6[1] = uVar9;
      *puVar6 = uVar8;
      puVar6 = (undefined8 *)((long)puVar6 + 0x14);
      puVar5 = (undefined8 *)((long)puVar5 + 0x14);
    }
  }
  param_1[1] = (long)puVar5;
  return;
}



/* Entry: 10a1ce3cc; end: 10a1ce3d3;  */

void FUN_10a1ce3cc(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10a1ce3d0);
  (*pcVar1)();
}



/* Entry: 10a1ce3d4; end: 10a1ce473;  */

undefined8 * FUN_10a1ce3d4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110bad0b0;
  if (*(char *)((long)param_1 + 0x2f) < '\0') {
    __ZdlPv(param_1[3]);
  }
  *param_1 = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + 1);
  return param_1;
}



/* Entry: 10a1ce474; end: 10a1ce867;  */

undefined8 * FUN_10a1ce474(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 *puVar7;
  long lVar8;
  
  *param_1 = &PTR_FUN_110bad138;
  param_1[1] = &PTR_FUN_110bad1b0;
  if (param_1[0xd9] != 0) {
    param_1[0xda] = param_1[0xd9];
    __ZdlPv();
  }
  __ZNSt3__15mutexD1Ev(param_1 + 0xd1);
  __ZNSt3__15mutexD1Ev(param_1 + 0xc9);
  lVar4 = 0x640;
  do {
    lVar6 = lVar4 + -0x18;
    puVar7 = *(undefined8 **)((long)param_1 + lVar6);
    if (puVar7 != (undefined8 *)0x0) {
      puVar2 = *(undefined8 **)((long)param_1 + lVar4 + -0x10);
      puVar1 = puVar7;
      if (puVar2 != puVar7) {
        do {
          puVar2 = puVar2 + -8;
          (**(code **)*puVar2)(puVar2);
        } while (puVar2 != puVar7);
        puVar1 = *(undefined8 **)((long)param_1 + lVar6);
      }
      *(undefined8 **)((long)param_1 + lVar4 + -0x10) = puVar7;
      __ZdlPv(puVar1);
    }
    lVar4 = lVar6;
  } while (lVar6 != 0x610);
  __ZNSt3__15mutexD1Ev(param_1 + 0xba);
  __ZNSt3__15mutexD1Ev(param_1 + 0xb2);
  lVar4 = 0x588;
  do {
    lVar6 = lVar4 + -0x18;
    puVar7 = *(undefined8 **)((long)param_1 + lVar6);
    if (puVar7 != (undefined8 *)0x0) {
      puVar2 = *(undefined8 **)((long)param_1 + lVar4 + -0x10);
      puVar1 = puVar7;
      if (puVar2 != puVar7) {
        do {
          puVar2 = puVar2 + -7;
          (**(code **)*puVar2)(puVar2);
        } while (puVar2 != puVar7);
        puVar1 = *(undefined8 **)((long)param_1 + lVar6);
      }
      *(undefined8 **)((long)param_1 + lVar4 + -0x10) = puVar7;
      __ZdlPv(puVar1);
    }
    lVar4 = lVar6;
  } while (lVar6 != 0x558);
  __ZNSt3__15mutexD1Ev(param_1 + 0xa3);
  __ZNSt3__15mutexD1Ev(param_1 + 0x9b);
  lVar4 = 0x4d0;
  do {
    lVar6 = lVar4 + -0x18;
    puVar7 = *(undefined8 **)((long)param_1 + lVar6);
    if (puVar7 != (undefined8 *)0x0) {
      puVar2 = *(undefined8 **)((long)param_1 + lVar4 + -0x10);
      puVar1 = puVar7;
      if (puVar2 != puVar7) {
        do {
          puVar2 = puVar2 + -7;
          (**(code **)*puVar2)(puVar2);
        } while (puVar2 != puVar7);
        puVar1 = *(undefined8 **)((long)param_1 + lVar6);
      }
      *(undefined8 **)((long)param_1 + lVar4 + -0x10) = puVar7;
      __ZdlPv(puVar1);
    }
    lVar4 = lVar6;
  } while (lVar6 != 0x4a0);
  __ZNSt3__15mutexD1Ev(param_1 + 0x8c);
  __ZNSt3__15mutexD1Ev(param_1 + 0x84);
  lVar4 = 0x418;
  do {
    lVar6 = lVar4 + -0x18;
    puVar7 = *(undefined8 **)((long)param_1 + lVar6);
    if (puVar7 != (undefined8 *)0x0) {
      puVar2 = *(undefined8 **)((long)param_1 + lVar4 + -0x10);
      puVar1 = puVar7;
      if (puVar2 != puVar7) {
        do {
          puVar2 = puVar2 + -9;
          (**(code **)*puVar2)(puVar2);
        } while (puVar2 != puVar7);
        puVar1 = *(undefined8 **)((long)param_1 + lVar6);
      }
      *(undefined8 **)((long)param_1 + lVar4 + -0x10) = puVar7;
      __ZdlPv(puVar1);
    }
    lVar4 = lVar6;
  } while (lVar6 != 1000);
  __ZNSt3__15mutexD1Ev(param_1 + 0x75);
  __ZNSt3__15mutexD1Ev(param_1 + 0x6d);
  lVar4 = 0x360;
  do {
    lVar6 = lVar4 + -0x18;
    puVar7 = *(undefined8 **)((long)param_1 + lVar6);
    if (puVar7 != (undefined8 *)0x0) {
      puVar2 = *(undefined8 **)((long)param_1 + lVar4 + -0x10);
      puVar1 = puVar7;
      if (puVar2 != puVar7) {
        do {
          puVar2 = puVar2 + -8;
          (**(code **)*puVar2)(puVar2);
        } while (puVar2 != puVar7);
        puVar1 = *(undefined8 **)((long)param_1 + lVar6);
      }
      *(undefined8 **)((long)param_1 + lVar4 + -0x10) = puVar7;
      __ZdlPv(puVar1);
    }
    lVar4 = lVar6;
  } while (lVar6 != 0x330);
  __ZNSt3__15mutexD1Ev(param_1 + 0x5e);
  __ZNSt3__15mutexD1Ev(param_1 + 0x56);
  lVar4 = 0x2a8;
  do {
    lVar6 = lVar4 + -0x18;
    puVar7 = *(undefined8 **)((long)param_1 + lVar6);
    if (puVar7 != (undefined8 *)0x0) {
      puVar2 = *(undefined8 **)((long)param_1 + lVar4 + -0x10);
      puVar1 = puVar7;
      if (puVar2 != puVar7) {
        do {
          puVar2 = puVar2 + -8;
          (**(code **)*puVar2)(puVar2);
        } while (puVar2 != puVar7);
        puVar1 = *(undefined8 **)((long)param_1 + lVar6);
      }
      *(undefined8 **)((long)param_1 + lVar4 + -0x10) = puVar7;
      __ZdlPv(puVar1);
    }
    lVar4 = lVar6;
  } while (lVar6 != 0x278);
  __ZNSt3__15mutexD1Ev(param_1 + 0x47);
  __ZNSt3__15mutexD1Ev(param_1 + 0x3f);
  lVar4 = 0x1d8;
  do {
    if (*(long *)((long)param_1 + lVar4) != 0) {
      FUN_10a1ce868((long)param_1 + lVar4);
      __ZdlPv(*(undefined8 *)((long)param_1 + lVar4));
    }
    lVar4 = lVar4 + -0x18;
  } while (lVar4 != 0x1a8);
  __ZNSt3__15mutexD1Ev(param_1 + 0x30);
  __ZNSt3__15mutexD1Ev(param_1 + 0x28);
  lVar4 = 0x138;
  do {
    lVar6 = lVar4 + -0x18;
    puVar7 = *(undefined8 **)((long)param_1 + lVar6);
    if (puVar7 != (undefined8 *)0x0) {
      puVar2 = *(undefined8 **)((long)param_1 + lVar4 + -0x10);
      puVar1 = puVar7;
      if (puVar2 != puVar7) {
        do {
          puVar2 = puVar2 + -7;
          (**(code **)*puVar2)(puVar2);
        } while (puVar2 != puVar7);
        puVar1 = *(undefined8 **)((long)param_1 + lVar6);
      }
      *(undefined8 **)((long)param_1 + lVar4 + -0x10) = puVar7;
      __ZdlPv(puVar1);
    }
    lVar4 = lVar6;
  } while (lVar6 != 0x108);
  __ZNSt3__15mutexD1Ev(param_1 + 0x19);
  __ZNSt3__15mutexD1Ev(param_1 + 0x11);
  lVar4 = 0x80;
  do {
    lVar6 = lVar4 + -0x18;
    lVar8 = *(long *)((long)param_1 + lVar6);
    if (lVar8 != 0) {
      lVar3 = *(long *)((long)param_1 + lVar4 + -0x10);
      lVar5 = lVar8;
      if (lVar3 != lVar8) {
        do {
          lVar5 = lVar3 + -0x18;
          FUN_10a1ce910(lVar5,*(undefined8 *)(lVar3 + -0x10));
          lVar3 = lVar5;
        } while (lVar5 != lVar8);
        lVar5 = *(long *)((long)param_1 + lVar6);
      }
      *(long *)((long)param_1 + lVar4 + -0x10) = lVar8;
      __ZdlPv(lVar5);
    }
    lVar4 = lVar6;
  } while (lVar6 != 0x50);
  __ZNSt3__15mutexD1Ev(param_1 + 2);
  return param_1;
}



/* Entry: 10a1ce868; end: 10a1ce8cb;  */

void FUN_10a1ce868(long param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar2 = *(undefined8 **)(param_1 + 8);
  while (puVar1 = puVar2, puVar1 != param_2) {
    puVar2 = puVar1 + -7;
    *puVar2 = &PTR_FUN_110bad578;
    if (puVar1[-3] != 0) {
      puVar1[-2] = puVar1[-3];
      __ZdlPv();
    }
  }
  *(undefined8 **)(param_1 + 8) = param_2;
  return;
}



/* Entry: 10a1ce8cc; end: 10a1ce907;  */

undefined8 * FUN_10a1ce8cc(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110bad578;
  if (param_1[4] != 0) {
    param_1[5] = param_1[4];
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 10a1ce908; end: 10a1ce90f;  */

void FUN_10a1ce908(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10a1ce90c);
  (*pcVar1)();
}



/* Entry: 10a1ce910; end: 10a1ce94f;  */

void FUN_10a1ce910(undefined8 param_1,undefined8 *param_2)

{
  if (param_2 != (undefined8 *)0x0) {
    FUN_10a1ce910(param_1,*param_2);
    FUN_10a1ce910(param_1,param_2[1]);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(param_2);
    return;
  }
  return;
}



/* Entry: 10a1ce950; end: 10a1ce9fb;  */

void FUN_10a1ce950(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  FUN_10a1ce9fc(param_1,param_2,FUN_10a1bcd90,param_4,param_5);
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



/* Entry: 10a1ce9fc; end: 10a1ceb0b;  */

void FUN_10a1ce9fc(undefined4 *param_1,long *param_2,code *param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 ***pppuVar4;
  long lVar5;
  undefined8 **ppuStack_58;
  ulong uStack_50;
  byte bStack_41;
  undefined8 uStack_40;
  long *plStack_38;
  
  FUN_10a1ceb0c(param_5);
  FUN_10a13a07c(&uStack_40,param_2,param_4);
  (*param_3)(&ppuStack_58,&uStack_40);
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
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_38);
    }
  }
  pppuVar4 = (undefined8 ***)ppuStack_58;
  if (-1 < (char)bStack_41) {
    uStack_50 = (ulong)bStack_41;
    pppuVar4 = &ppuStack_58;
  }
  (**(code **)(*param_2 + 0x128))(&uStack_40,param_2,pppuVar4,uStack_50);
  *param_1 = 6;
  *(undefined8 *)(param_1 + 2) = uStack_40;
  if ((char)bStack_41 < '\0') {
    __ZdlPv(ppuStack_58);
  }
  return;
}



/* Entry: 10a1ceb0c; end: 10a1ceb2f;  */

void FUN_10a1ceb0c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 ***pppuVar1;
  undefined1 **ppuVar2;
  long *plVar3;
  long *plVar4;
  undefined4 *extraout_x8;
  undefined1 *puStack_80;
  ulong uStack_78;
  byte bStack_69;
  undefined8 **ppuStack_68;
  ulong uStack_60;
  byte bStack_51;
  
  if ((int)param_1 != 1) {
    plVar3 = (long *)0x1;
    FUN_10a052ee0(1,0,param_1);
    plVar4 = plVar3;
    (**(code **)(*plVar3 + 0x58))();
    if ((ulong)plVar4[0x59] < 8) {
      plVar4[plVar4[0x59] + 0x4e] = plVar4[0x5a];
      plVar4[0x59] = plVar4[0x59] + 1;
    }
    else {
      func_0x00010988bfcc(plVar4 + 0x4b);
    }
    FUN_10a0584c8(param_4);
    func_0x000109898570(&ppuStack_68,plVar3,param_1);
    pppuVar1 = (undefined8 ***)ppuStack_68;
    if (-1 < (char)bStack_51) {
      uStack_60 = (ulong)bStack_51;
      pppuVar1 = &ppuStack_68;
    }
    FUN_10a0f10f0(&puStack_80,pppuVar1,uStack_60,0);
    if ((char)bStack_51 < '\0') {
      __ZdlPv(ppuStack_68);
    }
    ppuVar2 = (undefined1 **)puStack_80;
    if (-1 < (char)bStack_69) {
      uStack_78 = (ulong)bStack_69;
      ppuVar2 = &puStack_80;
    }
    (**(code **)(*plVar3 + 0x128))(&ppuStack_68,plVar3,ppuVar2,uStack_78);
    *extraout_x8 = 6;
    *(undefined8 ***)(extraout_x8 + 2) = ppuStack_68;
    if ((char)bStack_69 < '\0') {
      __ZdlPv(puStack_80);
    }
    func_0x00010988c170(plVar4 + 0x4b);
    return;
  }
  return;
}



/* Entry: 10a1ceb30; end: 10a1cec97;  */

void FUN_10a1ceb30(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 ***pppuVar1;
  undefined1 **ppuVar2;
  long *plVar3;
  undefined1 *puStack_70;
  ulong uStack_68;
  byte bStack_59;
  undefined8 **ppuStack_58;
  ulong uStack_50;
  byte bStack_41;
  
  plVar3 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar3[0x59] < 8) {
    plVar3[plVar3[0x59] + 0x4e] = plVar3[0x5a];
    plVar3[0x59] = plVar3[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar3 + 0x4b);
  }
  FUN_10a0584c8(param_5);
  func_0x000109898570(&ppuStack_58,param_2,param_4);
  pppuVar1 = (undefined8 ***)ppuStack_58;
  if (-1 < (char)bStack_41) {
    uStack_50 = (ulong)bStack_41;
    pppuVar1 = &ppuStack_58;
  }
  FUN_10a0f10f0(&puStack_70,pppuVar1,uStack_50,0);
  if ((char)bStack_41 < '\0') {
    __ZdlPv(ppuStack_58);
  }
  ppuVar2 = (undefined1 **)puStack_70;
  if (-1 < (char)bStack_59) {
    uStack_68 = (ulong)bStack_59;
    ppuVar2 = &puStack_70;
  }
  (**(code **)(*param_2 + 0x128))(&ppuStack_58,param_2,ppuVar2,uStack_68);
  *param_1 = 6;
  *(undefined8 ***)(param_1 + 2) = ppuStack_58;
  if ((char)bStack_59 < '\0') {
    __ZdlPv(puStack_70);
  }
  func_0x00010988c170(plVar3 + 0x4b);
  return;
}



/* Entry: 10a1cec98; end: 10a1cf023;  */

void FUN_10a1cec98(undefined4 *param_1,long *param_2,undefined8 param_3,long param_4,
                  undefined8 param_5)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  code *pcVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  long lVar9;
  long lStack_c0;
  long *plStack_b8;
  long lStack_b0;
  long *plStack_a8;
  long lStack_a0;
  long *plStack_98;
  long lStack_90;
  long *plStack_88;
  long lStack_80;
  long *plStack_78;
  long *plStack_70;
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
  FUN_10a1cf024(param_5);
  FUN_10a065cdc(&lStack_a0,param_2,param_4);
  FUN_10a1cf048(&lStack_b0,param_2,param_4 + 0x10);
  FUN_10a05dcbc(&lStack_c0,param_2,param_4 + 0x20);
  plVar7 = param_2;
  func_0x000109898518(param_2,param_4 + 0x30);
  func_0x000109898518(param_2,param_4 + 0x40);
  plVar1 = plStack_a8;
  plVar2 = plStack_b8;
  if (lStack_a0 == 0) {
    FUN_10a00946c(&UNK_10f642e5a);
                    /* WARNING: Does not return */
    pcVar5 = (code *)SoftwareBreakpoint(1,0x10a1cefb8);
    (*pcVar5)();
  }
  lStack_90 = lStack_b0;
  plStack_88 = plStack_a8;
  if (plStack_a8 != (long *)0x0) {
    plVar8 = plStack_a8 + 1;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar4) {
        *plVar8 = *plVar8 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  lStack_80 = lStack_c0;
  plStack_78 = plStack_b8;
  if (plStack_b8 != (long *)0x0) {
    plVar8 = plStack_b8 + 1;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar4) {
        *plVar8 = *plVar8 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  plVar8 = (long *)0x58;
  __Znwm();
  plVar8[1] = 0;
  plVar8[2] = 0;
  plStack_70 = plVar8 + 3;
  *plStack_70 = (long)FUN_10a1cfd90;
  *plVar8 = (long)&PTR_FUN_110bad650;
  plVar8[4] = (long)&PTR_FUN_110bad690;
  plVar8[5] = lStack_b0;
  plVar8[6] = (long)plVar1;
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
  plVar8[7] = lStack_c0;
  plVar8[8] = (long)plVar2;
  plStack_68 = plVar8;
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
      (**(code **)(*plVar2 + 0x10))(plVar2);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar2);
    }
  }
  plVar1 = plStack_88;
  if (plStack_88 != (long *)0x0) {
    plVar2 = plStack_88 + 1;
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
      (**(code **)(*plStack_88 + 0x10))(plStack_88);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar1);
    }
  }
  FUN_10ab6c940(lStack_a0,&plStack_70,plVar7,param_2);
  plVar1 = plStack_68;
  if (plStack_68 != (long *)0x0) {
    plVar2 = plStack_68 + 1;
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
      (**(code **)(*plStack_68 + 0x10))(plStack_68);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar1);
    }
  }
  if (plStack_b8 != (long *)0x0) {
    plVar1 = plStack_b8 + 1;
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
      (**(code **)(*plStack_b8 + 0x10))(plStack_b8);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_b8);
    }
  }
  if (plStack_a8 != (long *)0x0) {
    plVar1 = plStack_a8 + 1;
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
      (**(code **)(*plStack_a8 + 0x10))(plStack_a8);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_a8);
    }
  }
  if (plStack_98 != (long *)0x0) {
    plVar1 = plStack_98 + 1;
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
      (**(code **)(*plStack_98 + 0x10))(plStack_98);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_98);
    }
  }
  *param_1 = 0;
  func_0x00010988c170(plVar6 + 0x4b);
  return;
}



/* Entry: 10a1cf024; end: 10a1cf047;  */

void FUN_10a1cf024(undefined8 param_1)

{
  undefined8 extraout_x8;
  undefined1 auStack_58 [39];
  undefined1 uStack_31;
  
  if ((int)param_1 == 5) {
    return;
  }
  FUN_10a052ee0(5,0,param_1);
  FUN_10a1cf0a0(auStack_58);
  FUN_10a1cf1d8(extraout_x8,&uStack_31,auStack_58);
  FUN_10a688c1c(auStack_58);
  return;
}



/* Entry: 10a1cf048; end: 10a1cf09f;  */

void FUN_10a1cf048(undefined8 param_1)

{
  undefined1 auStack_48 [39];
  undefined1 uStack_21;
  
  FUN_10a1cf0a0(auStack_48);
  FUN_10a1cf1d8(param_1,&uStack_21,auStack_48);
  FUN_10a688c1c(auStack_48);
  return;
}



/* Entry: 10a1cf0a0; end: 10a1cf1d7;  */

void FUN_10a1cf0a0(undefined8 param_1,long *param_2,int *param_3)

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
      goto LAB_10a1cf1a8;
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
LAB_10a1cf1a8:
  func_0x00010988bd28(&UNK_10f685540);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10a1cf1b8);
  (*pcVar1)();
}



/* Entry: 10a1cf1d8; end: 10a1cf22f;  */

void FUN_10a1cf1d8(long *param_1)

{
  long lVar1;
  
  lVar1 = 0x60;
  __Znwm();
  FUN_10a1cf230();
  *param_1 = lVar1 + 0x18;
  param_1[1] = lVar1;
  return;
}



/* Entry: 10a1cf230; end: 10a1cf2ab;  */

void FUN_10a1cf230(undefined8 *param_1,undefined8 *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined8 uVar5;
  
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_DAT_110badf28;
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



/* Entry: 10a1cf2ac; end: 10a1cf2cb;  */

void FUN_10a1cf2ac(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110badf28;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a1cf2cc; end: 10a1cf2f3;  */

undefined1  [16] FUN_10a1cf2cc(long param_1)

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
    UNRECOVERED_JUMPTABLE = (code *)SoftwareBreakpoint(1,0x10a1cf2f0);
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



/* Entry: 10a1cf2f4; end: 10a1cf573;  */

/* WARNING: Removing unreachable block (ram,0x00010a1cf454) */

void FUN_10a1cf2f4(undefined4 *param_1,long *param_2,undefined8 param_3,long param_4,
                  undefined8 param_5,long param_6)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  code *pcVar5;
  long lVar6;
  long *plVar7;
  undefined **ppuVar8;
  ulong uVar9;
  code *extraout_x8;
  ulong uVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  ulong uVar16;
  ulong uVar17;
  long lStack_c0;
  long *plStack_b8;
  long lStack_b0;
  long *plStack_a8;
  undefined8 uStack_98;
  undefined8 uStack_90;
  long lStack_88;
  long lStack_80;
  long *plStack_78;
  long lStack_70;
  long *plStack_68;
  
  plVar7 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar7[0x59] < 8) {
    plVar7[plVar7[0x59] + 0x4e] = plVar7[0x5a];
    plVar7[0x59] = plVar7[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar7 + 0x4b);
  }
  FUN_10a1cf574(param_5);
  func_0x000109898570(&uStack_98,param_2,param_4);
  FUN_10a0592fc(&lStack_b0,param_2,param_4 + 0x10);
  FUN_10a05dcbc(&lStack_c0,param_2,param_4 + 0x20);
  ppuVar8 = &PTR___tlv_bootstrap_11340df48;
  (*(code *)PTR___tlv_bootstrap_11340df48)(*(undefined8 *)(param_6 + 0x10));
  uStack_98 = 0;
  uStack_90 = 0;
  lStack_88 = 0;
  plStack_78 = plStack_b8;
  lStack_80 = lStack_c0;
  plStack_68 = plStack_a8;
  lStack_70 = lStack_b0;
  lStack_b0 = 0;
  plStack_a8 = (long *)0x0;
  lStack_c0 = 0;
  plStack_b8 = (long *)0x0;
  (*extraout_x8)(*ppuVar8,&stack0xffffffffffffffa0,&lStack_70,&lStack_80);
  plVar2 = plStack_78;
  if (plStack_78 != (long *)0x0) {
    plVar1 = plStack_78 + 1;
    do {
      lVar11 = *plVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = lVar11 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar11 == 0) {
      (**(code **)(*plStack_78 + 0x10))(plStack_78);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar2);
    }
  }
  plVar2 = plStack_68;
  if (plStack_68 != (long *)0x0) {
    plVar1 = plStack_68 + 1;
    do {
      lVar11 = *plVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = lVar11 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar11 == 0) {
      (**(code **)(*plStack_68 + 0x10))(plStack_68);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar2);
    }
  }
  plVar2 = plStack_b8;
  if (plStack_b8 != (long *)0x0) {
    plVar1 = plStack_b8 + 1;
    do {
      lVar11 = *plVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = lVar11 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar11 == 0) {
      (**(code **)(*plStack_b8 + 0x10))(plStack_b8);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar2);
    }
  }
  plVar2 = plStack_a8;
  if (plStack_a8 != (long *)0x0) {
    plVar1 = plStack_a8 + 1;
    do {
      lVar11 = *plVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = lVar11 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar11 == 0) {
      (**(code **)(*plStack_a8 + 0x10))(plStack_a8);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar2);
    }
  }
  if (lStack_88 < 0) {
    __ZdlPv(uStack_98);
  }
  *param_1 = 0;
  plVar2 = plVar7 + 0x4b;
  lVar11 = plVar7[0x59];
  uVar9 = lVar11 - 1;
  plVar7[0x59] = uVar9;
  if (uVar9 < 8) {
    uVar9 = plVar2[lVar11 + 2];
    if (plVar7[0x5a] == uVar9) {
      return;
    }
  }
  else {
    uVar9 = *(ulong *)(plVar7[0x57] + -8);
    plVar7[0x57] = plVar7[0x57] + -8;
    if (plVar7[0x5a] == uVar9) {
      return;
    }
  }
  lVar11 = *plVar2;
  lVar14 = plVar7[0x4c];
  lVar12 = lVar14 - lVar11;
  uVar16 = lVar12 >> 4;
  if (uVar16 < uVar9) {
    uVar17 = uVar9 - uVar16;
    lVar15 = plVar7[0x4d];
    if ((ulong)(lVar15 - lVar14 >> 4) < uVar17) {
      if (uVar9 >> 0x3c == 0) {
        uVar10 = lVar15 - lVar11 >> 3;
        if (uVar10 <= uVar9) {
          uVar10 = uVar9;
        }
        if (0x7fffffffffffffef < (ulong)(lVar15 - lVar11)) {
          uVar10 = 0xfffffffffffffff;
        }
        plStack_68 = plVar2;
        if (uVar10 >> 0x3c == 0) {
          lVar6 = uVar10 << 4;
          __Znwm();
          lVar14 = lVar6 + lVar12;
          _bzero(lVar14,uVar17 * 0x10);
          lVar13 = lVar14 + uVar16 * -0x10;
          _memcpy(lVar13,lVar11,lVar12);
          *plVar2 = lVar13;
          plVar7[0x4c] = lVar14 + uVar17 * 0x10;
          plVar7[0x4d] = lVar6 + uVar10 * 0x10;
          lStack_88 = lVar11;
          lStack_80 = lVar11;
          plStack_78 = (long *)lVar11;
          lStack_70 = lVar15;
          func_0x00010988c1b8(&lStack_88);
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
    _bzero(lVar14,uVar17 * 0x10);
    plVar7[0x4c] = lVar14 + uVar17 * 0x10;
  }
  else if (uVar9 < uVar16) {
    lVar11 = lVar11 + uVar9 * 0x10;
    while (lVar14 != lVar11) {
      lVar14 = lVar14 + -0x10;
      func_0x00010988c204(lVar14);
    }
    plVar7[0x4c] = lVar11;
  }
code_r0x00010988c138:
  plVar7[0x5a] = uVar9;
  return;
}



/* Entry: 10a1cf574; end: 10a1cf597;  */

void FUN_10a1cf574(undefined8 param_1)

{
  if ((int)param_1 == 3) {
    return;
  }
  FUN_10a052ee0(3,0,param_1);
  return;
}



/* Entry: 10a1cf598; end: 10a1cf5b3;  */

void FUN_10a1cf598(void)

{
  return;
}



/* Entry: 10a1cf5b4; end: 10a1cf64f;  */

void FUN_10a1cf5b4(long param_1,undefined8 param_2,undefined8 *param_3)

{
  long *plVar1;
  long lVar2;
  char cVar3;
  bool bVar4;
  code *pcVar5;
  long lVar6;
  undefined ***pppuVar7;
  undefined ***pppuVar8;
  code **ppcVar9;
  undefined8 uVar10;
  long lVar11;
  undefined **ppuVar12;
  undefined **ppuVar13;
  undefined4 *extraout_x8;
  undefined **ppuVar14;
  undefined **ppuVar15;
  undefined **ppuVar16;
  ulong uVar17;
  undefined **ppuStack_f8;
  undefined **ppuStack_f0;
  undefined **ppuStack_e8;
  undefined **ppuStack_e0;
  undefined ***pppuStack_d8;
  long *in_stack_ffffffffffffff30;
  undefined8 in_stack_ffffffffffffff38;
  long in_stack_ffffffffffffff48;
  code *pcStack_68;
  undefined **ppuStack_60;
  undefined8 uStack_58;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_58 = *param_3;
  pcStack_68 = FUN_10a1cf650;
  ppuStack_60 = &PTR_FUN_110bad5c0;
  if (*(long *)(param_1 + 0x10) == *(long *)(param_1 + 0x18)) {
                    /* WARNING: Does not return */
    pcVar5 = (code *)SoftwareBreakpoint(1,0x10a1cf64c);
    (*pcVar5)();
  }
  lVar11 = *(long *)(param_1 + 0x18) + -8;
  ppcVar9 = &pcStack_68;
  uVar10 = 1;
  FUN_10a0544d8(param_1,param_2,ppcVar9,1);
  pppuVar7 = &ppuStack_60;
  (*(code *)*ppuStack_60)();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return;
  }
  ___stack_chk_fail();
  pppuVar8 = pppuVar7;
  (*(code *)(*pppuVar7)[0xb])();
  if (pppuVar8[0x59] < (undefined **)0x8) {
    pppuVar8[(long)pppuVar8[0x59] + 0x4e] = pppuVar8[0x5a];
    pppuVar8[0x59] = (undefined **)((long)pppuVar8[0x59] + 1);
  }
  else {
    func_0x00010988bfcc(pppuVar8 + 0x4b);
  }
  FUN_10a0584c8(uVar10);
  func_0x000109898570(&stack0xffffffffffffff38,pppuVar7,ppcVar9);
  ppuVar12 = &PTR___tlv_bootstrap_11340df48;
  (*(code *)PTR___tlv_bootstrap_11340df48)();
  (**(code **)(lVar11 + 0x10))(&pppuStack_d8,*ppuVar12,&stack0xffffffffffffff38);
  if (in_stack_ffffffffffffff48 < 0) {
    __ZdlPv(in_stack_ffffffffffffff38);
  }
  if (pppuStack_d8 == (undefined ***)0x0) {
    *extraout_x8 = 1;
  }
  else {
    func_0x0001098849a4(extraout_x8,pppuVar7,pppuStack_d8[2]);
  }
  if (in_stack_ffffffffffffff30 != (long *)0x0) {
    plVar1 = in_stack_ffffffffffffff30 + 1;
    do {
      lVar11 = *plVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = lVar11 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar11 == 0) {
      (**(code **)(*in_stack_ffffffffffffff30 + 0x10))(in_stack_ffffffffffffff30);
      __ZNSt3__119__shared_weak_count14__release_weakEv(in_stack_ffffffffffffff30);
    }
  }
  pppuVar7 = pppuVar8 + 0x4b;
  ppuVar12 = pppuVar8[0x59];
  ppuVar13 = (undefined **)((long)ppuVar12 + -1);
  pppuVar8[0x59] = ppuVar13;
  if (ppuVar13 < (undefined **)0x8) {
    ppuVar12 = pppuVar7[(long)ppuVar12 + 2];
    if (pppuVar8[0x5a] == ppuVar12) {
      return;
    }
  }
  else {
    ppuVar12 = (undefined **)pppuVar8[0x57][-1];
    pppuVar8[0x57] = pppuVar8[0x57] + -1;
    if (pppuVar8[0x5a] == ppuVar12) {
      return;
    }
  }
  ppuVar13 = *pppuVar7;
  ppuVar14 = pppuVar8[0x4c];
  lVar11 = (long)ppuVar14 - (long)ppuVar13;
  ppuVar16 = (undefined **)(lVar11 >> 4);
  if (ppuVar16 < ppuVar12) {
    uVar17 = (long)ppuVar12 - (long)ppuVar16;
    ppuVar15 = pppuVar8[0x4d];
    if ((ulong)((long)ppuVar15 - (long)ppuVar14 >> 4) < uVar17) {
      if ((ulong)ppuVar12 >> 0x3c == 0) {
        ppuVar14 = (undefined **)((long)ppuVar15 - (long)ppuVar13 >> 3);
        if (ppuVar14 <= ppuVar12) {
          ppuVar14 = ppuVar12;
        }
        if (0x7fffffffffffffef < (ulong)((long)ppuVar15 - (long)ppuVar13)) {
          ppuVar14 = (undefined **)0xfffffffffffffff;
        }
        pppuStack_d8 = pppuVar7;
        if ((ulong)ppuVar14 >> 0x3c == 0) {
          lVar6 = (long)ppuVar14 << 4;
          __Znwm();
          lVar2 = lVar6 + lVar11;
          _bzero(lVar2,uVar17 * 0x10);
          ppuVar16 = (undefined **)(lVar2 + (long)ppuVar16 * -0x10);
          _memcpy(ppuVar16,ppuVar13,lVar11);
          *pppuVar7 = ppuVar16;
          pppuVar8[0x4c] = (undefined **)(lVar2 + uVar17 * 0x10);
          pppuVar8[0x4d] = (undefined **)(lVar6 + (long)ppuVar14 * 0x10);
          ppuStack_f8 = ppuVar13;
          ppuStack_f0 = ppuVar13;
          ppuStack_e8 = ppuVar13;
          ppuStack_e0 = ppuVar15;
          func_0x00010988c1b8(&ppuStack_f8);
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
    _bzero(ppuVar14,uVar17 * 0x10);
    pppuVar8[0x4c] = ppuVar14 + uVar17 * 2;
  }
  else if (ppuVar12 < ppuVar16) {
    while (ppuVar14 != ppuVar13 + (long)ppuVar12 * 2) {
      ppuVar14 = ppuVar14 + -2;
      func_0x00010988c204(ppuVar14);
    }
    pppuVar8[0x4c] = ppuVar13 + (long)ppuVar12 * 2;
  }
code_r0x00010988c138:
  pppuVar8[0x5a] = ppuVar12;
  return;
}



/* Entry: 10a1cf650; end: 10a1cf7ab;  */

void FUN_10a1cf650(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,long param_6)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  long lVar5;
  long *plVar6;
  undefined **ppuVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  ulong uVar15;
  ulong uVar16;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long *plStack_68;
  long *in_stack_ffffffffffffffa0;
  undefined8 in_stack_ffffffffffffffa8;
  long in_stack_ffffffffffffffb8;
  
  plVar6 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar6[0x59] < 8) {
    plVar6[plVar6[0x59] + 0x4e] = plVar6[0x5a];
    plVar6[0x59] = plVar6[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar6 + 0x4b);
  }
  FUN_10a0584c8(param_5);
  func_0x000109898570(&stack0xffffffffffffffa8,param_2,param_4);
  ppuVar7 = &PTR___tlv_bootstrap_11340df48;
  (*(code *)PTR___tlv_bootstrap_11340df48)();
  (**(code **)(param_6 + 0x10))(&plStack_68,*ppuVar7,&stack0xffffffffffffffa8);
  if (in_stack_ffffffffffffffb8 < 0) {
    __ZdlPv(in_stack_ffffffffffffffa8);
  }
  if (plStack_68 == (long *)0x0) {
    *param_1 = 1;
  }
  else {
    func_0x0001098849a4(param_1,param_2,plStack_68[2]);
  }
  if (in_stack_ffffffffffffffa0 != (long *)0x0) {
    plVar1 = in_stack_ffffffffffffffa0 + 1;
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
      (**(code **)(*in_stack_ffffffffffffffa0 + 0x10))(in_stack_ffffffffffffffa0);
      __ZNSt3__119__shared_weak_count14__release_weakEv(in_stack_ffffffffffffffa0);
    }
  }
  plVar1 = plVar6 + 0x4b;
  lVar10 = plVar6[0x59];
  uVar8 = lVar10 - 1;
  plVar6[0x59] = uVar8;
  if (uVar8 < 8) {
    uVar8 = plVar1[lVar10 + 2];
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
  lVar10 = *plVar1;
  lVar13 = plVar6[0x4c];
  lVar11 = lVar13 - lVar10;
  uVar15 = lVar11 >> 4;
  if (uVar15 < uVar8) {
    uVar16 = uVar8 - uVar15;
    lVar14 = plVar6[0x4d];
    if ((ulong)(lVar14 - lVar13 >> 4) < uVar16) {
      if (uVar8 >> 0x3c == 0) {
        uVar9 = lVar14 - lVar10 >> 3;
        if (uVar9 <= uVar8) {
          uVar9 = uVar8;
        }
        if (0x7fffffffffffffef < (ulong)(lVar14 - lVar10)) {
          uVar9 = 0xfffffffffffffff;
        }
        plStack_68 = plVar1;
        if (uVar9 >> 0x3c == 0) {
          lVar5 = uVar9 << 4;
          __Znwm();
          lVar13 = lVar5 + lVar11;
          _bzero(lVar13,uVar16 * 0x10);
          lVar12 = lVar13 + uVar15 * -0x10;
          _memcpy(lVar12,lVar10,lVar11);
          *plVar1 = lVar12;
          plVar6[0x4c] = lVar13 + uVar16 * 0x10;
          plVar6[0x4d] = lVar5 + uVar9 * 0x10;
          lStack_88 = lVar10;
          lStack_80 = lVar10;
          lStack_78 = lVar10;
          lStack_70 = lVar14;
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
    _bzero(lVar13,uVar16 * 0x10);
    plVar6[0x4c] = lVar13 + uVar16 * 0x10;
  }
  else if (uVar8 < uVar15) {
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



/* Entry: 10a1cf7ac; end: 10a1cf7c7;  */

void FUN_10a1cf7ac(void)

{
  return;
}



/* Entry: 10a1cf7c8; end: 10a1cf97f;  */

void FUN_10a1cf7c8(undefined4 *param_1,long *param_2,undefined8 param_3,long param_4,
                  undefined8 param_5,long param_6)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  long lVar5;
  long *plVar6;
  undefined **ppuVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  ulong uVar15;
  ulong uVar16;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long *plStack_70;
  long *plStack_68;
  long *in_stack_ffffffffffffffa0;
  undefined8 in_stack_ffffffffffffffa8;
  long in_stack_ffffffffffffffb8;
  
  plVar6 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar6[0x59] < 8) {
    plVar6[plVar6[0x59] + 0x4e] = plVar6[0x5a];
    plVar6[0x59] = plVar6[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar6 + 0x4b);
  }
  FUN_10a1cf980(param_5);
  func_0x000109898570(&stack0xffffffffffffffa8,param_2,param_4);
  FUN_10a1cf9a4(&plStack_68,param_2,param_4 + 0x10);
  FUN_10a05dcbc(&lStack_78,param_2,param_4 + 0x20);
  ppuVar7 = &PTR___tlv_bootstrap_11340df48;
  (*(code *)PTR___tlv_bootstrap_11340df48)();
  (**(code **)(param_6 + 0x10))(*ppuVar7,&stack0xffffffffffffffa8,&plStack_68,&lStack_78);
  if (plStack_70 != (long *)0x0) {
    plVar1 = plStack_70 + 1;
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
      (**(code **)(*plStack_70 + 0x10))(plStack_70);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_70);
    }
  }
  if (in_stack_ffffffffffffffa0 != (long *)0x0) {
    plVar1 = in_stack_ffffffffffffffa0 + 1;
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
      (**(code **)(*in_stack_ffffffffffffffa0 + 0x10))(in_stack_ffffffffffffffa0);
      __ZNSt3__119__shared_weak_count14__release_weakEv(in_stack_ffffffffffffffa0);
    }
  }
  if (in_stack_ffffffffffffffb8 < 0) {
    __ZdlPv(in_stack_ffffffffffffffa8);
  }
  *param_1 = 0;
  plVar1 = plVar6 + 0x4b;
  lVar10 = plVar6[0x59];
  uVar8 = lVar10 - 1;
  plVar6[0x59] = uVar8;
  if (uVar8 < 8) {
    uVar8 = plVar1[lVar10 + 2];
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
  lVar10 = *plVar1;
  lVar13 = plVar6[0x4c];
  lVar11 = lVar13 - lVar10;
  uVar15 = lVar11 >> 4;
  if (uVar15 < uVar8) {
    uVar16 = uVar8 - uVar15;
    lVar14 = plVar6[0x4d];
    if ((ulong)(lVar14 - lVar13 >> 4) < uVar16) {
      if (uVar8 >> 0x3c == 0) {
        uVar9 = lVar14 - lVar10 >> 3;
        if (uVar9 <= uVar8) {
          uVar9 = uVar8;
        }
        if (0x7fffffffffffffef < (ulong)(lVar14 - lVar10)) {
          uVar9 = 0xfffffffffffffff;
        }
        plStack_68 = plVar1;
        if (uVar9 >> 0x3c == 0) {
          lVar5 = uVar9 << 4;
          __Znwm();
          lVar13 = lVar5 + lVar11;
          _bzero(lVar13,uVar16 * 0x10);
          lVar12 = lVar13 + uVar15 * -0x10;
          _memcpy(lVar12,lVar10,lVar11);
          *plVar1 = lVar12;
          plVar6[0x4c] = lVar13 + uVar16 * 0x10;
          plVar6[0x4d] = lVar5 + uVar9 * 0x10;
          lStack_88 = lVar10;
          lStack_80 = lVar10;
          lStack_78 = lVar10;
          plStack_70 = (long *)lVar14;
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
    _bzero(lVar13,uVar16 * 0x10);
    plVar6[0x4c] = lVar13 + uVar16 * 0x10;
  }
  else if (uVar8 < uVar15) {
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



/* Entry: 10a1cf980; end: 10a1cf9a3;  */

void FUN_10a1cf980(undefined8 param_1)

{
  undefined8 extraout_x8;
  undefined1 auStack_58 [39];
  undefined1 uStack_31;
  
  if ((int)param_1 == 3) {
    return;
  }
  FUN_10a052ee0(3,0,param_1);
  FUN_10a1cf9fc(auStack_58);
  FUN_10a1cfb34(extraout_x8,&uStack_31,auStack_58);
  FUN_10a688c1c(auStack_58);
  return;
}



/* Entry: 10a1cf9a4; end: 10a1cf9fb;  */

void FUN_10a1cf9a4(undefined8 param_1)

{
  undefined1 auStack_48 [39];
  undefined1 uStack_21;
  
  FUN_10a1cf9fc(auStack_48);
  FUN_10a1cfb34(param_1,&uStack_21,auStack_48);
  FUN_10a688c1c(auStack_48);
  return;
}



/* Entry: 10a1cf9fc; end: 10a1cfb33;  */

void FUN_10a1cf9fc(undefined8 param_1,long *param_2,int *param_3)

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
      goto LAB_10a1cfb04;
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
LAB_10a1cfb04:
  func_0x00010988bd28(&UNK_10f685540);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10a1cfb14);
  (*pcVar1)();
}



/* Entry: 10a1cfb34; end: 10a1cfb8b;  */

void FUN_10a1cfb34(long *param_1)

{
  long lVar1;
  
  lVar1 = 0x60;
  __Znwm();
  FUN_10a1cfb8c();
  *param_1 = lVar1 + 0x18;
  param_1[1] = lVar1;
  return;
}



/* Entry: 10a1cfb8c; end: 10a1cfc07;  */

void FUN_10a1cfb8c(undefined8 *param_1,undefined8 *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined8 uVar5;
  
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_DAT_110bad5e8;
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



/* Entry: 10a1cfc08; end: 10a1cfc27;  */

void FUN_10a1cfc08(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110bad5e8;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a1cfc28; end: 10a1cfc4f;  */

undefined1  [16] FUN_10a1cfc28(long param_1)

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
    UNRECOVERED_JUMPTABLE = (code *)SoftwareBreakpoint(1,0x10a1cfc4c);
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



/* Entry: 10a1cfc50; end: 10a1cfca7;  */

long FUN_10a1cfc50(long param_1)

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



/* Entry: 10a1cfca8; end: 10a1cfcc3;  */

void FUN_10a1cfca8(void)

{
  return;
}



/* Entry: 10a1cfcc4; end: 10a1cfd4f;  */

void FUN_10a1cfcc4(undefined8 *param_1,undefined8 *param_2)

{
  code *pcVar1;
  undefined8 uStack_40;
  undefined8 uStack_38;
  long lStack_30;
  
  pcVar1 = (code *)*param_1;
  if (*(char *)((long)param_2 + 0x17) < '\0') {
    func_0x000107c3192c(&uStack_40,*param_2,param_2[1]);
  }
  else {
    uStack_38 = param_2[1];
    uStack_40 = *param_2;
    lStack_30 = param_2[2];
  }
  (*pcVar1)(&uStack_40,param_1);
  if (lStack_30 < 0) {
    __ZdlPv(uStack_40);
  }
  return;
}



/* Entry: 10a1cfd50; end: 10a1cfd5f;  */

void FUN_10a1cfd50(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110bad650;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10a1cfd60; end: 10a1cfd7f;  */

void FUN_10a1cfd60(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110bad650;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a1cfd80; end: 10a1cfd8f;  */

void FUN_10a1cfd80(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010a1cfd88. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x20))();
  return;
}



/* Entry: 10a1cfd90; end: 10a1cffab;  */

/* WARNING: Removing unreachable block (ram,0x00010a1cfe18) */

void FUN_10a1cfd90(ulong *param_1,long param_2)

{
  undefined8 *puVar1;
  ulong uStack_90;
  ulong uStack_88;
  ulong uStack_80;
  char cStack_78;
  long lStack_68;
  long lStack_60;
  byte bStack_50;
  undefined1 auStack_48 [24];
  
  uStack_90 = uStack_90 & 0xffffffffffffff00;
  cStack_78 = (char)param_1[3] == '\x01';
  if ((bool)cStack_78) {
    uStack_88 = param_1[1];
    uStack_90 = *param_1;
    uStack_80 = param_1[2];
    param_1[1] = 0;
    param_1[2] = 0;
    *param_1 = 0;
  }
  FUN_10a1cffac(&lStack_68,&uStack_90);
  if ((bStack_50 & 1) == 0) {
    puVar1 = *(undefined8 **)(param_2 + 0x20);
    if ((puVar1 == (undefined8 *)0x0) || (*(char *)(puVar1 + 8) != '\x02')) {
      if ((puVar1 != (undefined8 *)0x0) && (*(char *)(puVar1 + 8) == '\x01')) {
        (*(code *)*puVar1)();
      }
    }
    else {
      FUN_10a05e614();
    }
  }
  else {
    FUN_10a0f10f0(auStack_48,lStack_68,lStack_60 - lStack_68,0);
    FUN_10a1bcbe0(*(undefined8 *)(param_2 + 0x10),auStack_48);
  }
  if ((bStack_50 == 1) && (lStack_68 != 0)) {
    lStack_60 = lStack_68;
    __ZdlPv();
  }
  if ((cStack_78 == '\x01') && (uStack_90 != 0)) {
    uStack_88 = uStack_90;
    __ZdlPv();
  }
  return;
}



/* Entry: 10a1cffac; end: 10a1d002b;  */

undefined8 * FUN_10a1cffac(undefined8 *param_1,long *param_2)

{
  *(undefined1 *)param_1 = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  if ((char)param_2[3] == '\x01') {
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    FUN_10a05151c(param_1,*param_2,param_2[1],param_2[1] - *param_2);
    *(undefined1 *)(param_1 + 3) = 1;
  }
  return param_1;
}



/* Entry: 10a1d002c; end: 10a1d0053;  */

long FUN_10a1d002c(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  func_0x00010a042b54(param_1 + 0x18);
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



/* Entry: 10a1d0054; end: 10a1d0103;  */

void FUN_10a1d0054(undefined8 *param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined8 uVar5;
  
  *param_1 = &PTR_FUN_110bad690;
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



/* Entry: 10a1d0104; end: 10a1d01b3;  */

long FUN_10a1d0104(long param_1)

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



/* Entry: 10a1d01b4; end: 10a1d0257;  */

void FUN_10a1d01b4(undefined8 *param_1,undefined8 *param_2)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  code *pcVar5;
  long lVar6;
  undefined8 uStack_30;
  long *plStack_28;
  
  pcVar5 = (code *)*param_1;
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
  (*pcVar5)(&uStack_30,param_1);
  plVar1 = plStack_28;
  if (plStack_28 != (long *)0x0) {
    plVar2 = plStack_28 + 1;
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
      (**(code **)(*plStack_28 + 0x10))(plStack_28);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar1);
    }
  }
  return;
}



/* Entry: 10a1d0258; end: 10a1d0447;  */

void FUN_10a1d0258(code **param_1,code **param_2)

{
  code *pcVar1;
  undefined ***pppuVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  code **ppcVar6;
  undefined ***pppuVar7;
  undefined ***pppuVar8;
  code **ppcVar9;
  code **ppcVar10;
  undefined **ppuVar11;
  undefined8 *puStack_d0;
  undefined8 *puStack_c8;
  code **ppcStack_c0;
  undefined ***pppuStack_b8;
  undefined1 *puStack_b0;
  code *pcStack_a8;
  code *pcStack_98;
  undefined ***pppuStack_90;
  code *pcStack_88;
  undefined ***pppuStack_80;
  code *pcStack_78;
  undefined **ppuStack_70;
  code *pcStack_68;
  code *pcStack_60;
  code *pcStack_58;
  undefined ***pppuStack_50;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppcVar6 = param_1;
  ppcVar9 = param_2;
  FUN_10a688b40();
  if (ppcVar6 == (code **)0x0) {
    ppcVar10 = (code **)0x0;
    pppuVar7 = (undefined ***)0x0;
    if (ppcVar9 != (code **)0x0) {
      pcStack_60 = param_1[1];
      pcStack_68 = *param_1;
      if (param_1[1] != (code *)0x0) {
        pcVar1 = param_1[1] + 8;
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(pcVar1,0x10);
          if (bVar4) {
            *(long *)pcVar1 = *(long *)pcVar1 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
      pcStack_88 = *param_2;
      pppuVar8 = (undefined ***)param_2[1];
      if (pppuVar8 != (undefined ***)0x0) {
        pppuVar7 = pppuVar8 + 1;
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(pppuVar7,0x10);
          if (bVar4) {
            *pppuVar7 = (undefined **)((long)*pppuVar7 + 1);
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
      pcStack_78 = FUN_10a1d0698;
      ppuStack_70 = &PTR_FUN_110bad6b0;
      pcStack_98 = (code *)0x0;
      pppuStack_90 = (undefined ***)0x0;
      if (pppuVar8 != (undefined ***)0x0) {
        pppuVar7 = pppuVar8 + 1;
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(pppuVar7,0x10);
          if (bVar4) {
            *pppuVar7 = (undefined **)((long)*pppuVar7 + 1);
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
      ppcVar6 = &pcStack_98;
      param_1 = &pcStack_78;
      ppcVar10 = &pcStack_78;
      pppuStack_80 = pppuVar8;
      pcStack_58 = pcStack_88;
      pppuStack_50 = pppuVar8;
      FUN_10a4634ec(ppcVar9,ppcVar10);
      pppuVar7 = &ppuStack_70;
      (*(code *)*ppuStack_70)();
      if (pppuVar8 != (undefined ***)0x0) {
        pppuVar2 = pppuVar8 + 1;
        do {
          ppuVar11 = *pppuVar2;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(pppuVar2,0x10);
          if (bVar4) {
            *pppuVar2 = (undefined **)((long)ppuVar11 + -1);
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (ppuVar11 == (undefined **)0x0) {
          (*(code *)(*pppuVar8)[2])(pppuVar8);
          __ZNSt3__119__shared_weak_count14__release_weakEv();
          pppuVar7 = pppuVar8;
        }
      }
      pppuVar8 = pppuStack_90;
      if (pppuStack_90 != (undefined ***)0x0) {
        pppuVar2 = pppuStack_90 + 1;
        do {
          ppuVar11 = *pppuVar2;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(pppuVar2,0x10);
          if (bVar4) {
            *pppuVar2 = (undefined **)((long)ppuVar11 + -1);
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (ppuVar11 == (undefined **)0x0) {
          (*(code *)(*pppuStack_90)[2])(pppuStack_90);
          __ZNSt3__119__shared_weak_count14__release_weakEv();
          pppuVar7 = pppuVar8;
        }
      }
    }
  }
  else {
    *ppcVar6 = (code *)CONCAT44((int)((ulong)*ppcVar6 >> 0x20) + 1,(int)*ppcVar6 + 1);
    pppuVar7 = (undefined ***)*param_1;
    FUN_10a1d0448(pppuVar7,param_2);
    iVar5 = *(int *)((long)ppcVar6 + 4) + -1;
    *(int *)((long)ppcVar6 + 4) = iVar5;
    ppcVar10 = param_2;
    if (iVar5 == 0) {
      *(undefined4 *)ppcVar6 = 0;
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return;
  }
  ___stack_chk_fail();
  (*(code *)*ppuStack_70)(param_1 + 1);
  func_0x00010a1d015c(ppcVar6 + 2);
  func_0x00010a004dac(&pcStack_98);
  pppuVar8 = pppuVar7;
  __Unwind_Resume();
  pcStack_a8 = FUN_10a1d0448;
  ppcStack_c0 = ppcVar6;
  pppuStack_b8 = pppuVar7;
  puStack_b0 = &stack0xfffffffffffffff0;
  func_0x000109884c0c(&puStack_d0,pppuVar8 + 1,*pppuVar8);
  func_0x000109884820(&puStack_c8,&puStack_d0,*pppuVar8);
  if (puStack_d0 != (undefined8 *)0x0) {
    (**(code **)*puStack_d0)();
  }
  (**(code **)(**pppuVar8 + 0x30))(&puStack_d0);
  FUN_10a1d0534(*pppuVar8,&puStack_d0,&puStack_c8,ppcVar10);
  if (puStack_d0 != (undefined8 *)0x0) {
    (**(code **)*puStack_d0)();
  }
  if (puStack_c8 != (undefined8 *)0x0) {
    (**(code **)*puStack_c8)();
  }
  return;
}



/* Entry: 10a1d0448; end: 10a1d0533;  */

void FUN_10a1d0448(undefined8 *param_1,undefined8 param_2)

{
  undefined8 *puStack_30;
  undefined8 *puStack_28;
  
  func_0x000109884c0c(&puStack_30,param_1 + 1,*param_1);
  func_0x000109884820(&puStack_28,&puStack_30,*param_1);
  if (puStack_30 != (undefined8 *)0x0) {
    (**(code **)*puStack_30)();
  }
  (**(code **)(*(long *)*param_1 + 0x30))(&puStack_30);
  FUN_10a1d0534(*param_1,&puStack_30,&puStack_28,param_2);
  if (puStack_30 != (undefined8 *)0x0) {
    (**(code **)*puStack_30)();
  }
  if (puStack_28 != (undefined8 *)0x0) {
    (**(code **)*puStack_28)();
  }
  return;
}



/* Entry: 10a1d0534; end: 10a1d0613;  */

void FUN_10a1d0534(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int aiStack_80 [2];
  undefined8 *puStack_78;
  int aiStack_70 [2];
  undefined8 *puStack_68;
  undefined8 uStack_60;
  long *plStack_58;
  undefined8 uStack_50;
  undefined4 **ppuStack_48;
  int *piStack_40;
  undefined8 uStack_38;
  
  FUN_10a1d0614(aiStack_70,param_1,param_4);
  uStack_38 = 1;
  piStack_40 = aiStack_70;
  (**(code **)(*param_1 + 0x58))(param_1);
  ppuStack_48 = &piStack_40;
  uStack_60 = param_3;
  plStack_58 = param_1;
  uStack_50 = param_2;
  func_0x0001098960c0(aiStack_80);
  if ((3 < aiStack_80[0]) && (puStack_78 != (undefined8 *)0x0)) {
    (**(code **)*puStack_78)();
  }
  if ((3 < aiStack_70[0]) && (puStack_68 != (undefined8 *)0x0)) {
    (**(code **)*puStack_68)();
  }
  return;
}



/* Entry: 10a1d0614; end: 10a1d0697;  */

void FUN_10a1d0614(undefined8 param_1,undefined8 *param_2)

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



/* Entry: 10a1d0698; end: 10a1d06a7;  */

void FUN_10a1d0698(long param_1)

{
  undefined8 *puVar1;
  undefined8 *puStack_30;
  undefined8 *puStack_28;
  
  puVar1 = *(undefined8 **)(param_1 + 0x10);
  func_0x000109884c0c(&puStack_30,puVar1 + 1,*puVar1);
  func_0x000109884820(&puStack_28,&puStack_30,*puVar1);
  if (puStack_30 != (undefined8 *)0x0) {
    (**(code **)*puStack_30)();
  }
  (**(code **)(*(long *)*puVar1 + 0x30))(&puStack_30);
  FUN_10a1d0534(*puVar1,&puStack_30,&puStack_28,param_1 + 0x20);
  if (puStack_30 != (undefined8 *)0x0) {
    (**(code **)*puStack_30)();
  }
  if (puStack_28 != (undefined8 *)0x0) {
    (**(code **)*puStack_28)();
  }
  return;
}



/* Entry: 10a1d06a8; end: 10a1d06cf;  */

long FUN_10a1d06a8(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  func_0x00010a1d015c(param_1 + 0x18);
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



/* Entry: 10a1d06d0; end: 10a1d070f;  */

void FUN_10a1d06d0(undefined8 *param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined8 uVar5;
  
  *param_1 = &PTR_FUN_110bad6b0;
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



/* Entry: 10a1d0710; end: 10a1d07cb;  */

void FUN_10a1d0710(long param_1)

{
  ushort uVar1;
  long lVar2;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 auStack_68 [72];
  
  uVar1 = *(ushort *)(*(long *)(param_1 + 0x10) + 0x59);
  if (((uVar1 & 0x7f) != 0) &&
     (*(ushort *)(*(long *)(param_1 + 0x10) + 0x59) = uVar1 & 0xff80 | uVar1 - 1 & 0x7f,
     (uVar1 & 0x7f) == 1)) {
    uVar1 = *(ushort *)(*(long *)(param_1 + 0x10) + 0x59);
    if ((uVar1 >> 7 & 1) != 0) {
      *(ushort *)(*(long *)(param_1 + 0x10) + 0x59) = uVar1 & 0xff7f;
      uStack_70 = *(undefined8 *)(*(long *)(param_1 + 0x10) + 0x68);
      FUN_10a1d07cc(auStack_68,*(long *)(param_1 + 0x10) + 0x70);
      uStack_88 = 0;
      uStack_90 = 0;
      uStack_78 = 0;
      uStack_80 = 0;
      uStack_a8 = 0;
      uStack_b0 = 0;
      uStack_98 = 0;
      uStack_a0 = 0;
      uStack_b8 = 0;
      uStack_c0 = 0;
      lVar2 = *(long *)(param_1 + 0x10);
      *(undefined8 *)(lVar2 + 0x68) = 0;
      FUN_10a1cc408(lVar2 + 0x70,(ulong)&uStack_c0 | 8);
      if ((*(byte *)(param_1 + 0x18) & 1) == 0) {
        FUN_10a1c054c(*(undefined8 *)(param_1 + 0x10),&uStack_70);
      }
    }
  }
  return;
}



/* Entry: 10a1d07cc; end: 10a1d0837;  */

undefined8 * FUN_10a1d07cc(undefined8 *param_1,long param_2)

{
  long lVar1;
  long lVar2;
  
  param_1[8] = 0;
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[7] = 0;
  param_1[6] = 0;
  param_1[1] = 0;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  if (*(long *)(param_2 + 0x40) != 0) {
    lVar2 = *(long *)(param_2 + 0x40) << 3;
    lVar1 = param_2;
    do {
      FUN_10a1cc470(param_1,lVar1);
      lVar1 = lVar1 + 8;
      lVar2 = lVar2 + -8;
    } while (lVar2 != 0);
  }
  *(undefined8 *)(param_2 + 0x40) = 0;
  return param_1;
}



/* Entry: 10a1d0838; end: 10a1d0853;  */

void FUN_10a1d0838(void)

{
  return;
}



/* Entry: 10a1d0854; end: 10a1d09a3;  */

void FUN_10a1d0854(long *param_1,ulong *param_2,long *param_3,long *param_4)

{
  ulong uVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  ulong uVar4;
  ulong uVar5;
  long *plVar6;
  undefined1 uVar7;
  long lVar8;
  long lVar9;
  byte bVar10;
  ulong uVar11;
  ulong uVar12;
  ulong *puVar13;
  byte bVar15;
  byte bVar16;
  byte bVar17;
  byte bVar18;
  byte bVar19;
  byte bVar20;
  undefined8 uVar14;
  byte bVar21;
  
  lVar8 = 0;
  lVar9 = *param_3;
  uVar5 = *param_2;
  Hint_Prefetch(uVar5,0,2,0);
  auVar2._8_8_ = 0;
  auVar2._0_8_ = (long)&PTR_LOOP_110c8acd8 + lVar9;
  uVar11 = (SUB168(auVar2 * ZEXT816(0x9ddfea08eb382d69),8) ^
           ((long)&PTR_LOOP_110c8acd8 + lVar9) * -0x622015f714c7d297) + lVar9;
  auVar3._8_8_ = 0;
  auVar3._0_8_ = uVar11;
  uVar4 = SUB168(auVar3 * ZEXT816(0x9ddfea08eb382d69),8) ^ uVar11 * -0x622015f714c7d297;
  uVar11 = uVar4 >> 7 ^ uVar5 >> 0xc;
  bVar10 = (byte)uVar4 & 0x7f;
  while( true ) {
    uVar11 = uVar11 & param_2[2];
    uVar14 = *(undefined8 *)(uVar5 + uVar11);
    bVar15 = (byte)((ulong)uVar14 >> 8);
    bVar16 = (byte)((ulong)uVar14 >> 0x10);
    bVar17 = (byte)((ulong)uVar14 >> 0x18);
    bVar18 = (byte)((ulong)uVar14 >> 0x20);
    bVar19 = (byte)((ulong)uVar14 >> 0x28);
    bVar20 = (byte)((ulong)uVar14 >> 0x30);
    bVar21 = (byte)((ulong)uVar14 >> 0x38);
    uVar4 = CONCAT17(-(bVar21 == bVar10),
                     CONCAT16(-(bVar20 == bVar10),
                              CONCAT15(-(bVar19 == bVar10),
                                       CONCAT14(-(bVar18 == bVar10),
                                                CONCAT13(-(bVar17 == bVar10),
                                                         CONCAT12(-(bVar16 == bVar10),
                                                                  CONCAT11(-(bVar15 == bVar10),
                                                                           -((byte)uVar14 == bVar10)
                                                                          ))))))) &
            0x8080808080808080;
    if (uVar4 != 0) {
      uVar12 = param_2[1];
      do {
        uVar1 = (uVar4 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar4 >> 7 & 0xff00ff00ff00ff) << 8;
        uVar1 = (uVar1 & 0xffff0000ffff0000) >> 0x10 | (uVar1 & 0xffff0000ffff) << 0x10;
        puVar13 = (ulong *)(uVar11 + ((ulong)LZCOUNT(uVar1 >> 0x20 | uVar1 << 0x20) >> 3) &
                           param_2[2]);
        if (*(long *)(uVar12 + (long)puVar13 * 0x58) == lVar9) {
          uVar7 = 0;
          goto LAB_10a1d097c;
        }
        uVar4 = uVar4 - 1 & uVar4;
      } while (uVar4 != 0);
    }
    if (CONCAT17(-(bVar21 == 0x80),
                 CONCAT16(-(bVar20 == 0x80),
                          CONCAT15(-(bVar19 == 0x80),
                                   CONCAT14(-(bVar18 == 0x80),
                                            CONCAT13(-(bVar17 == 0x80),
                                                     CONCAT12(-(bVar16 == 0x80),
                                                              CONCAT11(-(bVar15 == 0x80),
                                                                       -((byte)uVar14 == 0x80)))))))
                ) != 0) break;
    lVar8 = lVar8 + 8;
    uVar11 = lVar8 + uVar11;
  }
  puVar13 = param_2;
  FUN_10a1d09a4();
  plVar6 = (long *)(param_2[1] + (long)puVar13 * 0x58);
  lVar8 = *param_4;
  *plVar6 = *param_3;
  plVar6[1] = lVar8;
  FUN_10a1d07cc(plVar6 + 2,param_4 + 1);
  uVar5 = *param_2;
  uVar12 = param_2[1];
  uVar7 = 1;
LAB_10a1d097c:
  *param_1 = uVar5 + (long)puVar13;
  param_1[1] = uVar12 + (long)puVar13 * 0x58;
  *(undefined1 *)(param_1 + 2) = uVar7;
  return;
}



/* Entry: 10a1d09a4; end: 10a1d0a93;  */

void FUN_10a1d09a4(ulong *param_1,ulong param_2)

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
    FUN_10a1d0bf4(param_1);
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


