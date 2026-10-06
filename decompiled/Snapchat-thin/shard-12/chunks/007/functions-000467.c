/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1095c706c; end: 1095c723b;  */

void FUN_1095c706c(long *param_1,long *param_2)

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
  func_0x000104c4f740();
  lVar2 = *plVar4;
  *plVar4 = 0;
  if (lVar2 == 0) {
    return;
  }
  if ((char)plVar4[2] == '\x01') {
    FUN_1095c6f28(lVar2 + 0x10);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(lVar2);
  return;
}



/* Entry: 1095c723c; end: 1095c7283;  */

void FUN_1095c723c(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
    if ((char)param_1[2] == '\x01') {
      FUN_1095c6f28(lVar1 + 0x10);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(lVar1);
    return;
  }
  return;
}



/* Entry: 1095c7284; end: 1095c7453;  */

void FUN_1095c7284(long *param_1,long *param_2)

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
  func_0x000104c4f740();
  lVar2 = *plVar4;
  *plVar4 = 0;
  if (lVar2 == 0) {
    return;
  }
  if ((char)plVar4[2] == '\x01') {
    FUN_1095c7028(lVar2 + 0x10);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(lVar2);
  return;
}



/* Entry: 1095c7454; end: 1095c749b;  */

void FUN_1095c7454(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
    if ((char)param_1[2] == '\x01') {
      FUN_1095c7028(lVar1 + 0x10);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(lVar1);
    return;
  }
  return;
}



/* Entry: 1095c749c; end: 1095c766b;  */

long * FUN_1095c749c(long *param_1,long *param_2)

{
  ulong uVar1;
  long lVar2;
  long *plVar3;
  ulong uVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  
  plVar3 = param_1;
  if ((long)param_2 - 1U == 0) {
    param_2 = (long *)0x2;
  }
  else if (((ulong)param_2 & (long)param_2 - 1U) != 0) {
    __ZNSt3__112__next_primeEm();
    plVar3 = param_2;
  }
  plVar9 = (long *)param_1[1];
  if (plVar9 > param_2 || param_2 == plVar9) {
    if (plVar9 <= param_2) {
      return plVar3;
    }
    plVar3 = (long *)(long)((float)(ulong)param_1[3] / *(float *)(param_1 + 4));
    if ((plVar9 < (long *)0x3) || (((ulong)plVar9 & (long)plVar9 - 1U) != 0)) {
      __ZNSt3__112__next_primeEm();
    }
    else if ((long *)0x1 < plVar3) {
      plVar3 = (long *)(1L << (-LZCOUNT((long)plVar3 + -1) & 0x3fU));
    }
    if (param_2 <= plVar3) {
      param_2 = plVar3;
    }
    if (plVar9 <= param_2) {
      return plVar3;
    }
    if (param_2 == (long *)0x0) {
      plVar3 = (long *)*param_1;
      *param_1 = 0;
      if (plVar3 != (long *)0x0) {
        __ZdlPv();
      }
      param_1[1] = 0;
      return plVar3;
    }
  }
  if ((ulong)param_2 >> 0x3d == 0) {
    lVar2 = (long)param_2 << 3;
    __Znwm();
    plVar3 = (long *)*param_1;
    *param_1 = lVar2;
    if (plVar3 != (long *)0x0) {
      __ZdlPv();
    }
    plVar9 = (long *)0x0;
    param_1[1] = (long)param_2;
    do {
      *(undefined8 *)(*param_1 + (long)plVar9 * 8) = 0;
      plVar9 = (long *)((long)plVar9 + 1);
    } while (param_2 != plVar9);
    plVar9 = (long *)param_1[2];
    if (plVar9 != (long *)0x0) {
      plVar5 = (long *)plVar9[1];
      uVar4 = (long)param_2 - 1;
      if (((ulong)param_2 & uVar4) == 0) {
        plVar5 = (long *)((ulong)plVar5 & uVar4);
      }
      else if (param_2 <= plVar5) {
        uVar1 = 0;
        if (param_2 != (long *)0x0) {
          uVar1 = (ulong)plVar5 / (ulong)param_2;
        }
        plVar5 = (long *)((long)plVar5 - uVar1 * (long)param_2);
      }
      *(long **)(*param_1 + (long)plVar5 * 8) = param_1 + 2;
      plVar6 = (long *)*plVar9;
      while (plVar6 != (long *)0x0) {
        plVar8 = (long *)plVar6[1];
        if (((ulong)param_2 & uVar4) == 0) {
          plVar8 = (long *)((ulong)plVar8 & uVar4);
        }
        else if (param_2 <= plVar8) {
          uVar1 = 0;
          if (param_2 != (long *)0x0) {
            uVar1 = (ulong)plVar8 / (ulong)param_2;
          }
          plVar8 = (long *)((long)plVar8 - uVar1 * (long)param_2);
        }
        plVar7 = plVar6;
        if (plVar8 != plVar5) {
          lVar2 = *param_1;
          if (*(long *)(lVar2 + (long)plVar8 * 8) == 0) {
            *(long **)(lVar2 + (long)plVar8 * 8) = plVar9;
            plVar5 = plVar8;
          }
          else {
            *plVar9 = *plVar6;
            *plVar6 = **(undefined8 **)(lVar2 + (long)plVar8 * 8);
            **(long **)(lVar2 + (long)plVar8 * 8) = (long)plVar6;
            plVar7 = plVar9;
          }
        }
        plVar9 = plVar7;
        plVar6 = (long *)*plVar7;
      }
    }
    return plVar3;
  }
  func_0x000104c4f740();
  plVar9 = (long *)plVar3[2];
  while (plVar9 != (long *)0x0) {
    plVar9 = (long *)*plVar9;
    __ZdlPv();
  }
  lVar2 = *plVar3;
  *plVar3 = 0;
  if (lVar2 != 0) {
    __ZdlPv();
  }
  return plVar3;
}



/* Entry: 1095c766c; end: 1095c76b3;  */

long * FUN_1095c766c(long *param_1)

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



/* Entry: 1095c76b4; end: 1095c7ad3;  */

void FUN_1095c76b4(long *param_1,long param_2)

{
  long *plVar1;
  bool bVar2;
  ulong uVar3;
  code *pcVar4;
  long lVar5;
  ulong uVar6;
  long *plVar7;
  long *plVar8;
  ulong uVar9;
  long *plVar10;
  long *plVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  ulong unaff_x27;
  
  uRam00000001137330a0 = 0;
  lRam0000000113733098 = 0;
  uRam00000001137330b0 = 0;
  plRam00000001137330a8 = (long *)0x0;
  fRam00000001137330b8 = 1.0;
  if (param_2 != 0) {
    uVar13 = 0;
    uVar15 = 0;
    plVar1 = param_1 + param_2;
    do {
      uVar14 = (ulong)(int)*param_1;
      if (uVar15 != 0) {
        uVar6 = uVar15 - 1;
        if ((uVar15 & uVar6) == 0) {
          unaff_x27 = uVar6 & uVar14;
        }
        else {
          unaff_x27 = uVar14;
          if (uVar15 <= uVar14) {
            uVar9 = 0;
            if (uVar15 != 0) {
              uVar9 = uVar14 / uVar15;
            }
            unaff_x27 = uVar14 - uVar9 * uVar15;
          }
        }
        plVar8 = *(long **)(lRam0000000113733098 + unaff_x27 * 8);
        if (plVar8 != (long *)0x0) {
          do {
            while( true ) {
              plVar8 = (long *)*plVar8;
              if (plVar8 == (long *)0x0) goto LAB_1095c7794;
              uVar9 = plVar8[1];
              if (uVar9 != uVar14) break;
              if (*(int *)(plVar8 + 2) == (int)*param_1) goto LAB_1095c7a30;
            }
            if ((uVar15 & uVar6) == 0) {
              uVar9 = uVar9 & uVar6;
            }
            else if (uVar15 <= uVar9) {
              uVar12 = 0;
              if (uVar15 != 0) {
                uVar12 = uVar9 / uVar15;
              }
              uVar9 = uVar9 - uVar12 * uVar15;
            }
          } while (uVar9 == unaff_x27);
        }
      }
LAB_1095c7794:
      plVar8 = (long *)0x18;
      __Znwm();
      *plVar8 = 0;
      plVar8[1] = uVar14;
      plVar8[2] = *param_1;
      if ((uVar15 == 0) || (fRam00000001137330b8 * (float)uVar15 < (float)(uVar13 + 1))) {
        uVar6 = 1;
        if (2 < uVar15) {
          uVar6 = (ulong)((uVar15 & uVar15 - 1) != 0);
        }
        uVar6 = uVar6 | uVar15 << 1;
        uVar13 = (ulong)((float)(uVar13 + 1) / fRam00000001137330b8);
        if (uVar6 <= uVar13) {
          uVar6 = uVar13;
        }
        uVar13 = uVar15;
        if (uVar6 - 1 == 0) {
          uVar6 = 2;
        }
        else if ((uVar6 & uVar6 - 1) != 0) {
          __ZNSt3__112__next_primeEm();
          uVar13 = uRam00000001137330a0;
        }
        if (uVar13 < uVar6) {
LAB_1095c7834:
          if (uVar6 >> 0x3d != 0) {
            func_0x000104c4f740();
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x1095c7aa8);
            (*pcVar4)();
          }
          lVar5 = uVar6 << 3;
          __Znwm();
          bVar2 = lRam0000000113733098 != 0;
          lRam0000000113733098 = lVar5;
          if (bVar2) {
            __ZdlPv();
          }
          uVar13 = 0;
          uRam00000001137330a0 = uVar6;
          do {
            *(undefined8 *)(lRam0000000113733098 + uVar13 * 8) = 0;
            plVar7 = plRam00000001137330a8;
            uVar13 = uVar13 + 1;
          } while (uVar6 != uVar13);
          uVar15 = uVar6;
          if (plRam00000001137330a8 != (long *)0x0) {
            uVar13 = plRam00000001137330a8[1];
            uVar9 = uVar6 - 1;
            if ((uVar6 & uVar9) == 0) {
              uVar13 = uVar13 & uVar9;
            }
            else if (uVar6 <= uVar13) {
              uVar12 = 0;
              if (uVar6 != 0) {
                uVar12 = uVar13 / uVar6;
              }
              uVar13 = uVar13 - uVar12 * uVar6;
            }
            *(undefined8 *)(lRam0000000113733098 + uVar13 * 8) = 0x1137330a8;
            plVar10 = (long *)*plVar7;
            lVar5 = lRam0000000113733098;
            while (lRam0000000113733098 = lVar5, plVar10 != (long *)0x0) {
              uVar12 = plVar10[1];
              if ((uVar6 & uVar9) == 0) {
                uVar12 = uVar12 & uVar9;
              }
              else if (uVar6 <= uVar12) {
                uVar3 = 0;
                if (uVar6 != 0) {
                  uVar3 = uVar12 / uVar6;
                }
                uVar12 = uVar12 - uVar3 * uVar6;
              }
              plVar11 = plVar10;
              if (uVar12 != uVar13) {
                if (*(long *)(lVar5 + uVar12 * 8) == 0) {
                  *(long **)(lVar5 + uVar12 * 8) = plVar7;
                  uVar13 = uVar12;
                }
                else {
                  *plVar7 = *plVar10;
                  *plVar10 = **(long **)(lVar5 + uVar12 * 8);
                  **(undefined8 **)(lVar5 + uVar12 * 8) = plVar10;
                  plVar11 = plVar7;
                }
              }
              lVar5 = lRam0000000113733098;
              plVar7 = plVar11;
              plVar10 = (long *)*plVar11;
            }
          }
        }
        else {
          uVar15 = uVar13;
          if (uVar6 < uVar13) {
            uVar15 = (ulong)((float)uRam00000001137330b0 / fRam00000001137330b8);
            if ((uVar13 < 3) || ((uVar13 & uVar13 - 1) != 0)) {
              __ZNSt3__112__next_primeEm();
            }
            else if (1 < uVar15) {
              uVar15 = 1L << (-LZCOUNT(uVar15 - 1) & 0x3fU);
            }
            lVar5 = lRam0000000113733098;
            if (uVar6 <= uVar15) {
              uVar6 = uVar15;
            }
            uVar15 = uRam00000001137330a0;
            if (uVar6 < uVar13) {
              if (uVar6 != 0) goto LAB_1095c7834;
              lRam0000000113733098 = 0;
              if (lVar5 != 0) {
                __ZdlPv();
              }
              uRam00000001137330a0 = 0;
              uVar15 = 0;
            }
          }
        }
        if ((uVar15 & uVar15 - 1) == 0) {
          unaff_x27 = uVar15 - 1 & uVar14;
        }
        else {
          unaff_x27 = uVar14;
          if (uVar15 <= uVar14) {
            uVar13 = 0;
            if (uVar15 != 0) {
              uVar13 = uVar14 / uVar15;
            }
            unaff_x27 = uVar14 - uVar13 * uVar15;
          }
        }
      }
      lVar5 = lRam0000000113733098;
      plVar7 = *(long **)(lRam0000000113733098 + unaff_x27 * 8);
      if (plVar7 == (long *)0x0) {
        *plVar8 = (long)plRam00000001137330a8;
        plRam00000001137330a8 = plVar8;
        *(undefined8 *)(lVar5 + unaff_x27 * 8) = 0x1137330a8;
        if (*plVar8 != 0) {
          uVar13 = *(ulong *)(*plVar8 + 8);
          if ((uVar15 & uVar15 - 1) == 0) {
            uVar13 = uVar13 & uVar15 - 1;
          }
          else if (uVar15 <= uVar13) {
            uVar14 = 0;
            if (uVar15 != 0) {
              uVar14 = uVar13 / uVar15;
            }
            uVar13 = uVar13 - uVar14 * uVar15;
          }
          plVar7 = (long *)(lRam0000000113733098 + uVar13 * 8);
          goto LAB_1095c7a20;
        }
      }
      else {
        *plVar8 = *plVar7;
LAB_1095c7a20:
        *plVar7 = (long)plVar8;
      }
      uVar13 = uRam00000001137330b0 + 1;
      uRam00000001137330b0 = uVar13;
LAB_1095c7a30:
      param_1 = param_1 + 1;
    } while (param_1 != plVar1);
  }
  return;
}



/* Entry: 1095c7ad4; end: 1095c7b1b;  */

long * FUN_1095c7ad4(long *param_1)

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



/* Entry: 1095c7b1c; end: 1095c7d5f;  */

long * FUN_1095c7b1c(long *param_1,ulong param_2,undefined1 *param_3)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  long *plVar4;
  long *plVar5;
  ulong uVar6;
  long lVar7;
  uint uVar8;
  ulong uVar9;
  uint uVar10;
  ulong unaff_x24;
  
  param_2 = param_2 & 0xff;
  uVar9 = param_1[1];
  if (uVar9 != 0) {
    uVar3 = uVar9 - 1;
    uVar8 = (uint)uVar9;
    uVar10 = (uint)param_2;
    if ((uVar9 & uVar3) == 0) {
      unaff_x24 = uVar8 - 1 & param_2;
    }
    else {
      unaff_x24 = param_2;
      if (uVar9 <= param_2) {
        uVar1 = 0;
        if (uVar8 != 0) {
          uVar1 = uVar10 / uVar8;
        }
        unaff_x24 = (ulong)(uVar10 - uVar1 * uVar8);
      }
    }
    plVar5 = *(long **)(*param_1 + unaff_x24 * 8);
    if (plVar5 != (long *)0x0) {
      for (plVar5 = (long *)*plVar5; plVar5 != (long *)0x0; plVar5 = (long *)*plVar5) {
        uVar6 = plVar5[1];
        if (uVar6 == param_2) {
          if (*(byte *)(plVar5 + 2) == uVar10) {
            return plVar5;
          }
        }
        else {
          if ((uVar9 & uVar3) == 0) {
            uVar6 = uVar6 & uVar3;
          }
          else if (uVar9 <= uVar6) {
            uVar2 = 0;
            if (uVar9 != 0) {
              uVar2 = uVar6 / uVar9;
            }
            uVar6 = uVar6 - uVar2 * uVar9;
          }
          if (uVar6 != unaff_x24) break;
        }
      }
    }
  }
  plVar5 = (long *)0x78;
  __Znwm();
  *plVar5 = 0;
  plVar5[1] = param_2;
  *(undefined1 *)(plVar5 + 2) = *param_3;
  *(undefined4 *)(plVar5 + 3) = 0x42ff0000;
  *(undefined8 *)((long)plVar5 + 0x24) = 0;
  *(undefined8 *)((long)plVar5 + 0x1c) = 0;
  *(undefined8 *)((long)plVar5 + 0x34) = 0;
  *(undefined8 *)((long)plVar5 + 0x2c) = 0;
  *(undefined8 *)((long)plVar5 + 0x44) = 0;
  *(undefined8 *)((long)plVar5 + 0x3c) = 0;
  plVar5[10] = 0;
  plVar5[9] = 0;
  plVar5[0xd] = 0;
  plVar5[0xb] = (long)(plVar5 + 4);
  plVar5[0xc] = (long)(plVar5 + 0xd);
  plVar5[0xe] = 0;
  if ((uVar9 == 0) || (*(float *)(param_1 + 4) * (float)uVar9 < (float)(param_1[3] + 1))) {
    uVar3 = 1;
    if (2 < uVar9) {
      uVar3 = (ulong)((uVar9 & uVar9 - 1) != 0);
    }
    uVar3 = uVar3 | uVar9 << 1;
    uVar9 = (ulong)((float)(param_1[3] + 1) / *(float *)(param_1 + 4));
    if (uVar3 <= uVar9) {
      uVar3 = uVar9;
    }
    FUN_1095c706c(param_1,uVar3);
    uVar9 = param_1[1];
    if ((uVar9 & uVar9 - 1) == 0) {
      unaff_x24 = (int)uVar9 - 1 & param_2;
    }
    else {
      unaff_x24 = param_2;
      if (uVar9 <= param_2) {
        uVar3 = 0;
        if (uVar9 != 0) {
          uVar3 = param_2 / uVar9;
        }
        unaff_x24 = param_2 - uVar3 * uVar9;
      }
    }
  }
  lVar7 = *param_1;
  plVar4 = *(long **)(lVar7 + unaff_x24 * 8);
  if (plVar4 == (long *)0x0) {
    plVar4 = param_1 + 2;
    *plVar5 = *plVar4;
    *plVar4 = (long)plVar5;
    *(long **)(lVar7 + unaff_x24 * 8) = plVar4;
    if (*plVar5 == 0) goto LAB_1095c7d24;
    uVar3 = *(ulong *)(*plVar5 + 8);
    if ((uVar9 & uVar9 - 1) == 0) {
      uVar3 = uVar3 & uVar9 - 1;
    }
    else if (uVar9 <= uVar3) {
      uVar6 = 0;
      if (uVar9 != 0) {
        uVar6 = uVar3 / uVar9;
      }
      uVar3 = uVar3 - uVar6 * uVar9;
    }
    plVar4 = (long *)(*param_1 + uVar3 * 8);
  }
  else {
    *plVar5 = *plVar4;
  }
  *plVar4 = (long)plVar5;
LAB_1095c7d24:
  param_1[3] = param_1[3] + 1;
  return plVar5;
}



/* Entry: 1095c7d60; end: 1095c7f9b;  */

long * FUN_1095c7d60(long *param_1,uint param_2,uint param_3,undefined2 *param_4)

{
  uint uVar1;
  uint uVar2;
  ulong uVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  long *plVar7;
  ulong uVar8;
  uint uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong unaff_x24;
  
  uVar1 = param_3 & 0xff ^ param_2 & 0xff;
  uVar11 = (ulong)uVar1;
  uVar10 = param_1[1];
  if (uVar10 != 0) {
    uVar6 = uVar10 - 1;
    uVar9 = (uint)uVar10;
    if ((uVar10 & uVar6) == 0) {
      unaff_x24 = (ulong)(uVar9 - 1 & uVar1);
    }
    else {
      unaff_x24 = uVar11;
      if (uVar10 <= uVar11) {
        uVar2 = 0;
        if (uVar9 != 0) {
          uVar2 = uVar1 / uVar9;
        }
        unaff_x24 = (ulong)(uVar1 - uVar2 * uVar9);
      }
    }
    plVar7 = *(long **)(*param_1 + unaff_x24 * 8);
    if (plVar7 != (long *)0x0) {
      for (plVar7 = (long *)*plVar7; plVar7 != (long *)0x0; plVar7 = (long *)*plVar7) {
        uVar8 = plVar7[1];
        if (uVar8 == uVar11) {
          if ((uint)*(byte *)(plVar7 + 2) == (param_2 & 0xff) &&
              (uint)*(byte *)((long)plVar7 + 0x11) == (param_3 & 0xff)) {
            return plVar7;
          }
        }
        else {
          if ((uVar10 & uVar6) == 0) {
            uVar8 = uVar8 & uVar6;
          }
          else if (uVar10 <= uVar8) {
            uVar3 = 0;
            if (uVar10 != 0) {
              uVar3 = uVar8 / uVar10;
            }
            uVar8 = uVar8 - uVar3 * uVar10;
          }
          if (uVar8 != unaff_x24) break;
        }
      }
    }
  }
  plVar7 = (long *)0x60;
  __Znwm();
  *plVar7 = 0;
  plVar7[1] = uVar11;
  *(undefined2 *)(plVar7 + 2) = *param_4;
  plVar7[4] = 0;
  plVar7[3] = 0;
  plVar7[6] = 0;
  plVar7[5] = 0;
  plVar7[8] = 0;
  plVar7[7] = 0;
  plVar7[10] = 0;
  plVar7[9] = 0;
  plVar7[0xb] = 0;
  if ((uVar10 == 0) || (*(float *)(param_1 + 4) * (float)uVar10 < (float)(param_1[3] + 1))) {
    uVar6 = 1;
    if (2 < uVar10) {
      uVar6 = (ulong)((uVar10 & uVar10 - 1) != 0);
    }
    uVar6 = uVar6 | uVar10 << 1;
    uVar10 = (ulong)((float)(param_1[3] + 1) / *(float *)(param_1 + 4));
    if (uVar6 <= uVar10) {
      uVar6 = uVar10;
    }
    FUN_1095c7284(param_1,uVar6);
    uVar10 = param_1[1];
    if ((uVar10 & uVar10 - 1) == 0) {
      unaff_x24 = (ulong)((int)uVar10 - 1U & uVar1);
    }
    else {
      unaff_x24 = uVar11;
      if (uVar10 <= uVar11) {
        uVar6 = 0;
        if (uVar10 != 0) {
          uVar6 = uVar11 / uVar10;
        }
        unaff_x24 = uVar11 - uVar6 * uVar10;
      }
    }
  }
  lVar5 = *param_1;
  plVar4 = *(long **)(lVar5 + unaff_x24 * 8);
  if (plVar4 == (long *)0x0) {
    plVar4 = param_1 + 2;
    *plVar7 = *plVar4;
    *plVar4 = (long)plVar7;
    *(long **)(lVar5 + unaff_x24 * 8) = plVar4;
    if (*plVar7 == 0) goto LAB_1095c7f60;
    uVar11 = *(ulong *)(*plVar7 + 8);
    if ((uVar10 & uVar10 - 1) == 0) {
      uVar11 = uVar11 & uVar10 - 1;
    }
    else if (uVar10 <= uVar11) {
      uVar6 = 0;
      if (uVar10 != 0) {
        uVar6 = uVar11 / uVar10;
      }
      uVar11 = uVar11 - uVar6 * uVar10;
    }
    plVar4 = (long *)(*param_1 + uVar11 * 8);
  }
  else {
    *plVar7 = *plVar4;
  }
  *plVar4 = (long)plVar7;
LAB_1095c7f60:
  param_1[3] = param_1[3] + 1;
  return plVar7;
}



/* Entry: 1095c7f9c; end: 1095c82eb;  */

void FUN_1095c7f9c(undefined8 *param_1,double *param_2)

{
  byte bVar1;
  byte bVar2;
  float fVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  undefined1 auVar17 [16];
  double dVar18;
  double dVar19;
  double dVar20;
  float fVar21;
  double dVar22;
  double dVar23;
  float fVar24;
  float fVar25;
  double dVar26;
  double dVar27;
  double dVar28;
  double dVar29;
  double dVar30;
  double dVar31;
  double dVar32;
  double dVar33;
  double dVar34;
  
  dVar8 = param_2[1];
  dVar4 = *param_2;
  fVar21 = (float)(param_2[4] * -6.103515625e-05);
  dVar12 = param_2[2];
  fVar25 = (float)(param_2[3] * -6.103515625e-05);
  fVar24 = (float)(param_2[5] * 6.103515625e-05);
  fVar3 = -fVar25;
  _atan2f(fVar3,fVar24);
  _atan2f(fVar21,SQRT(fVar24 * fVar24 + fVar25 * fVar25));
  dVar9 = (double)fVar3;
  dVar22 = (double)fVar21;
  dVar19 = dVar9;
  ___sincos_stret();
  dVar16 = dVar19;
  ___sincos_stret();
  dVar5 = dVar9 * dVar22;
  dVar27 = -(dVar22 * dVar19);
  dVar26 = -(dVar9 * dVar16);
  dVar23 = dVar19 * dVar16;
  dVar6 = param_2[6] * 0.017453292519943295;
  dVar10 = param_2[7] * 0.017453292519943295;
  dVar11 = dVar10;
  ___sincos_stret();
  dVar7 = dVar11;
  ___sincos_stret();
  dVar13 = dVar6 * dVar10;
  dVar14 = -(dVar10 * dVar11);
  dVar15 = -(dVar6 * dVar7);
  dVar18 = dVar11 * dVar7;
  dVar20 = -(dVar26 * dVar9) + dVar23 * dVar19;
  dVar28 = -(dVar26 * dVar27) + dVar23 * dVar5;
  dVar29 = -(dVar19 * dVar27) + dVar9 * dVar5;
  dVar30 = 1.0 / (dVar28 * -0.0 + dVar20 * dVar16 + dVar29 * dVar22);
  dVar20 = dVar20 * dVar30;
  dVar31 = -((-(dVar22 * dVar9) + dVar23 * 0.0) * dVar30);
  dVar32 = (dVar27 + dVar26 * 0.0) * dVar30;
  dVar28 = -(dVar28 * dVar30);
  dVar33 = (-(dVar22 * dVar27) + dVar23 * dVar16) * dVar30;
  dVar22 = -((-(dVar22 * dVar5) + dVar26 * dVar16) * dVar30);
  dVar29 = dVar29 * dVar30;
  dVar9 = -((dVar27 * -0.0 + dVar9 * dVar16) * dVar30);
  dVar30 = (dVar5 * -0.0 + dVar19 * dVar16) * dVar30;
  dVar27 = dVar28 * 0.0 + dVar20 * dVar7 + dVar29 * dVar10;
  dVar34 = dVar11 * dVar28 + dVar20 * dVar13 + dVar29 * dVar15;
  dVar20 = dVar6 * dVar28 + dVar20 * dVar14 + dVar29 * dVar18;
  dVar23 = dVar33 * 0.0 + dVar31 * dVar7 + dVar9 * dVar10;
  dVar26 = dVar11 * dVar33 + dVar31 * dVar13 + dVar9 * dVar15;
  dVar28 = dVar6 * dVar33 + dVar31 * dVar14 + dVar9 * dVar18;
  dVar7 = dVar22 * 0.0 + dVar32 * dVar7 + dVar30 * dVar10;
  dVar9 = dVar11 * dVar22 + dVar32 * dVar13 + dVar30 * dVar15;
  dVar22 = dVar6 * dVar22 + dVar32 * dVar14 + dVar30 * dVar18;
  dVar5 = (dVar27 - dVar26) - dVar22;
  dVar16 = (dVar26 - dVar27) - dVar22;
  dVar19 = (dVar22 - dVar27) - dVar26;
  dVar22 = dVar22 + dVar27 + dVar26;
  dVar11 = dVar5;
  if (dVar5 <= dVar22) {
    dVar11 = dVar22;
  }
  bVar1 = 2;
  if (dVar16 <= dVar11) {
    dVar16 = dVar11;
    bVar1 = dVar22 < dVar5;
  }
  bVar2 = 3;
  if (dVar19 <= dVar16) {
    dVar19 = dVar16;
    bVar2 = bVar1;
  }
  dVar13 = SQRT(dVar19 + 1.0) * 0.5;
  dVar6 = 0.25 / dVar13;
  dVar5 = (dVar7 - dVar20) * dVar6;
  dVar14 = (dVar34 + dVar23) * dVar6;
  dVar15 = (dVar28 + dVar9) * dVar6;
  dVar22 = (dVar34 - dVar23) * dVar6;
  dVar10 = (dVar7 + dVar20) * dVar6;
  dVar7 = dVar5;
  dVar19 = dVar15;
  dVar16 = dVar13;
  dVar11 = dVar14;
  if (bVar2 != 2) {
    dVar7 = dVar22;
    dVar19 = dVar13;
    dVar16 = dVar15;
    dVar11 = dVar10;
  }
  dVar6 = (dVar28 - dVar9) * dVar6;
  dVar9 = dVar13;
  if (bVar2 != 0) {
    dVar9 = dVar6;
    dVar22 = dVar10;
    dVar5 = dVar14;
    dVar6 = dVar13;
  }
  if (bVar2 < 2) {
    dVar7 = dVar9;
    dVar19 = dVar22;
    dVar16 = dVar5;
    dVar11 = dVar6;
  }
  auVar17._0_8_ = (double)(float)((dVar4 * 0.017453292519943295) / -32.8);
  auVar17._8_8_ = (double)(float)((dVar8 * 0.017453292519943295) / 32.8);
  auVar17 = NEON_ext(auVar17,auVar17,8,1);
  param_1[1] = auVar17._8_8_;
  *param_1 = auVar17._0_8_;
  param_1[2] = (double)(float)((dVar12 * 0.017453292519943295) / 32.8);
  param_1[3] = dVar11;
  param_1[4] = dVar16;
  param_1[5] = dVar19;
  param_1[6] = dVar7;
  return;
}



/* Entry: 1095c82ec; end: 1095c836f;  */

undefined8 * FUN_1095c82ec(undefined8 *param_1)

{
  undefined1 uStack_21;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  *(undefined2 *)(param_1 + 3) = 0x400;
  FUN_1095c8dec(param_1 + 4);
  FUN_10965d1e4(param_1 + 0x2e,&uStack_21);
  _bzero(param_1 + 0x30,0x401);
  return param_1;
}



/* Entry: 1095c8370; end: 1095c83af;  */

undefined8 * FUN_1095c8370(undefined8 *param_1)

{
  FUN_10965d8e0(param_1 + 0x2e);
  func_0x0001095c99b8(param_1 + 4);
  if (*(char *)((long)param_1 + 0x17) < '\0') {
    __ZdlPv(*param_1);
  }
  return param_1;
}



/* Entry: 1095c83b0; end: 1095c8453;  */

void FUN_1095c83b0(long param_1,long param_2)

{
  long lVar1;
  undefined8 *puVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  
  if (param_1 + 0x90 == param_2) {
    return;
  }
  FUN_1095c9a94();
  func_0x0001095c9bec(param_1 + 0xa8,*(long *)(param_2 + 0x18),*(long *)(param_2 + 0x20),
                      (*(long *)(param_2 + 0x20) - *(long *)(param_2 + 0x18) >> 3) *
                      -0x5555555555555555);
  func_0x0001095c9d44(param_1 + 0xc0,*(long *)(param_2 + 0x30),*(long *)(param_2 + 0x38),
                      (*(long *)(param_2 + 0x38) - *(long *)(param_2 + 0x30) >> 3) *
                      -0x5555555555555555);
  lVar7 = *(long *)(param_2 + 0x48);
  lVar1 = *(long *)(param_2 + 0x50);
  uVar4 = lVar1 - lVar7 >> 4;
  puVar10 = (undefined8 *)(param_1 + 0xd8);
  uVar6 = *(ulong *)(param_1 + 0xe8);
  puVar9 = (undefined8 *)*puVar10;
  if ((ulong)((long)(uVar6 - (long)puVar9) >> 4) < uVar4) {
    puVar2 = puVar10;
    lVar3 = lVar7;
    lVar8 = lVar1;
    uVar5 = uVar4;
    if (puVar9 != (undefined8 *)0x0) {
      *(undefined8 **)(param_1 + 0xe0) = puVar9;
      __ZdlPv();
      uVar6 = 0;
      *puVar10 = 0;
      *(undefined8 *)(param_1 + 0xe0) = 0;
      *(undefined8 *)(param_1 + 0xe8) = 0;
      puVar2 = puVar9;
    }
    if (uVar4 >> 0x3c != 0) {
      FUN_109226f64();
      lVar7 = puVar2[2];
      puVar10 = (undefined8 *)*puVar2;
      if ((ulong)((lVar7 - (long)puVar10 >> 3) * -0x3333333333333333) < uVar5) {
        puVar9 = puVar2;
        if (puVar10 != (undefined8 *)0x0) {
          puVar2[1] = puVar10;
          __ZdlPv();
          lVar7 = 0;
          *puVar2 = 0;
          puVar2[1] = 0;
          puVar2[2] = 0;
          puVar9 = puVar10;
        }
        if (0x666666666666666 < uVar5) {
          FUN_10922705c();
          *puVar9 = 0;
          *(undefined4 *)(puVar9 + 1) = 0;
          puVar9[3] = 0;
          puVar9[2] = 0;
          puVar9[5] = 0;
          puVar9[4] = 0;
          puVar9[7] = 0;
          puVar9[6] = 0;
          puVar9[9] = 0;
          puVar9[8] = 0;
          puVar9[10] = 0;
          *(undefined4 *)(puVar9 + 0xb) = 0x42ff0000;
          *(undefined8 *)((long)puVar9 + 100) = 0;
          *(undefined8 *)((long)puVar9 + 0x5c) = 0;
          *(undefined8 *)((long)puVar9 + 0x74) = 0;
          *(undefined8 *)((long)puVar9 + 0x6c) = 0;
          *(undefined8 *)((long)puVar9 + 0x84) = 0;
          *(undefined8 *)((long)puVar9 + 0x7c) = 0;
          puVar9[0x12] = 0;
          puVar9[0x11] = 0;
          puVar9[0x16] = 0;
          puVar9[0x15] = 0;
          puVar9[0x13] = puVar9 + 0xc;
          puVar9[0x14] = puVar9 + 0x15;
          *(undefined4 *)(puVar9 + 0x17) = 0x42ff0000;
          puVar9[0x1e] = 0;
          puVar9[0x1d] = 0;
          *(undefined8 *)((long)puVar9 + 0xe4) = 0;
          *(undefined8 *)((long)puVar9 + 0xdc) = 0;
          *(undefined8 *)((long)puVar9 + 0xd4) = 0;
          *(undefined8 *)((long)puVar9 + 0xcc) = 0;
          *(undefined8 *)((long)puVar9 + 0xc4) = 0;
          *(undefined8 *)((long)puVar9 + 0xbc) = 0;
          puVar9[0x1f] = puVar9 + 0x18;
          puVar9[0x20] = puVar9 + 0x21;
          puVar9[0x22] = 0;
          puVar9[0x21] = 0;
          *(undefined4 *)(puVar9 + 0x23) = 0x42ff0000;
          puVar9[0x2a] = 0;
          puVar9[0x29] = 0;
          *(undefined8 *)((long)puVar9 + 0x134) = 0;
          *(undefined8 *)((long)puVar9 + 300) = 0;
          *(undefined8 *)((long)puVar9 + 0x144) = 0;
          *(undefined8 *)((long)puVar9 + 0x13c) = 0;
          *(undefined8 *)((long)puVar9 + 0x124) = 0;
          *(undefined8 *)((long)puVar9 + 0x11c) = 0;
          puVar9[0x2b] = puVar9 + 0x24;
          puVar9[0x2c] = puVar9 + 0x2d;
          puVar9[0x2e] = 0;
          puVar9[0x2d] = 0;
          *(undefined4 *)(puVar9 + 0x2f) = 0x42ff0000;
          puVar9[0x36] = 0;
          puVar9[0x35] = 0;
          *(undefined8 *)((long)puVar9 + 0x194) = 0;
          *(undefined8 *)((long)puVar9 + 0x18c) = 0;
          *(undefined8 *)((long)puVar9 + 0x1a4) = 0;
          *(undefined8 *)((long)puVar9 + 0x19c) = 0;
          *(undefined8 *)((long)puVar9 + 0x184) = 0;
          *(undefined8 *)((long)puVar9 + 0x17c) = 0;
          puVar9[0x37] = puVar9 + 0x30;
          puVar9[0x38] = puVar9 + 0x39;
          puVar9[0x3a] = 0;
          puVar9[0x39] = 0;
          *(undefined4 *)(puVar9 + 0x3b) = 0x42ff0000;
          puVar9[0x42] = 0;
          puVar9[0x41] = 0;
          *(undefined8 *)((long)puVar9 + 500) = 0;
          *(undefined8 *)((long)puVar9 + 0x1ec) = 0;
          *(undefined8 *)((long)puVar9 + 0x204) = 0;
          *(undefined8 *)((long)puVar9 + 0x1fc) = 0;
          *(undefined8 *)((long)puVar9 + 0x1e4) = 0;
          *(undefined8 *)((long)puVar9 + 0x1dc) = 0;
          puVar9[0x43] = puVar9 + 0x3c;
          puVar9[0x44] = puVar9 + 0x45;
          puVar9[0x46] = 0;
          puVar9[0x45] = 0;
          *(undefined4 *)(puVar9 + 0x47) = 0x42ff0000;
          puVar9[0x4e] = 0;
          puVar9[0x4d] = 0;
          *(undefined8 *)((long)puVar9 + 0x254) = 0;
          *(undefined8 *)((long)puVar9 + 0x24c) = 0;
          *(undefined8 *)((long)puVar9 + 0x264) = 0;
          *(undefined8 *)((long)puVar9 + 0x25c) = 0;
          *(undefined8 *)((long)puVar9 + 0x244) = 0;
          *(undefined8 *)((long)puVar9 + 0x23c) = 0;
          puVar9[0x4f] = puVar9 + 0x48;
          puVar9[0x50] = puVar9 + 0x51;
          puVar9[0x52] = 0;
          puVar9[0x51] = 0;
          return;
        }
        uVar4 = (lVar7 >> 3) * -0x6666666666666666;
        if (uVar4 < uVar5 || uVar4 - uVar5 == 0) {
          uVar4 = uVar5;
        }
        if (0x333333333333332 < (ulong)((lVar7 >> 3) * -0x3333333333333333)) {
          uVar4 = 0x666666666666666;
        }
        FUN_1095c94ec(puVar2,uVar4);
        lVar7 = puVar2[1];
        lVar8 = lVar8 - lVar3;
        if (lVar8 != 0) {
          _memmove(lVar7,lVar3,lVar8 + -4);
        }
        lVar7 = lVar7 + lVar8;
      }
      else {
        puVar9 = (undefined8 *)puVar2[1];
        lVar7 = (long)puVar9 - (long)puVar10;
        if ((ulong)((lVar7 >> 3) * -0x3333333333333333) < uVar5) {
          if (puVar9 != puVar10) {
            _memmove(puVar10,lVar3,lVar7 + -4);
            puVar9 = (undefined8 *)puVar2[1];
          }
          lVar8 = lVar8 - (lVar3 + lVar7);
          if (lVar8 != 0) {
            _memmove(puVar9,lVar3 + lVar7,lVar8 + -4);
          }
          lVar7 = (long)puVar9 + lVar8;
        }
        else {
          lVar8 = lVar8 - lVar3;
          if (lVar8 != 0) {
            _memmove(puVar10,lVar3,lVar8 + -4);
          }
          lVar7 = (long)puVar10 + lVar8;
        }
      }
      puVar2[1] = lVar7;
      return;
    }
    uVar5 = (long)uVar6 >> 3;
    if ((ulong)((long)uVar6 >> 3) <= uVar4) {
      uVar5 = uVar4;
    }
    if (0x7fffffffffffffef < uVar6) {
      uVar5 = 0xfffffffffffffff;
    }
    FUN_1095c943c(puVar10,uVar5);
    lVar8 = *(long *)(param_1 + 0xe0);
    lVar1 = lVar1 - lVar7;
    if (lVar1 != 0) {
      _memmove(lVar8,lVar7,lVar1);
    }
    lVar8 = lVar8 + lVar1;
  }
  else {
    puVar10 = *(undefined8 **)(param_1 + 0xe0);
    if ((ulong)((long)puVar10 - (long)puVar9 >> 4) < uVar4) {
      lVar8 = lVar7 + ((long)puVar10 - (long)puVar9);
      if (puVar10 != puVar9) {
        _memmove(puVar9,lVar7);
        puVar10 = *(undefined8 **)(param_1 + 0xe0);
      }
      lVar1 = lVar1 - lVar8;
      if (lVar1 != 0) {
        _memmove(puVar10,lVar8,lVar1);
      }
      lVar8 = (long)puVar10 + lVar1;
    }
    else {
      lVar1 = lVar1 - lVar7;
      if (lVar1 != 0) {
        _memmove(puVar9,lVar7,lVar1);
      }
      lVar8 = (long)puVar9 + lVar1;
    }
  }
  *(long *)(param_1 + 0xe0) = lVar8;
  return;
}



/* Entry: 1095c8454; end: 1095c851f;  */

long FUN_1095c8454(double param_1,undefined8 param_2,undefined4 param_3,long param_4,uint *param_5,
                  undefined8 param_6,double *param_7,undefined8 param_8,double *param_9,
                  undefined1 param_10)

{
  byte bVar1;
  code *pcVar2;
  long lVar3;
  byte *pbVar4;
  byte *pbVar5;
  double *pdVar6;
  long *plVar7;
  uint uVar8;
  ulong uVar9;
  long lVar10;
  int *piVar11;
  undefined8 uVar12;
  undefined1 auVar13 [16];
  undefined4 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  double dVar17;
  double dStack_6c0;
  undefined1 uStack_6b8;
  float fStack_6b4;
  undefined4 uStack_6b0;
  undefined4 uStack_6ac;
  undefined1 uStack_6a8;
  float fStack_6a4;
  float fStack_6a0;
  float fStack_69c;
  double dStack_698;
  undefined1 uStack_690;
  undefined8 uStack_68c;
  undefined8 uStack_684;
  undefined8 uStack_67c;
  undefined8 uStack_674;
  undefined8 uStack_668;
  undefined8 uStack_660;
  undefined1 uStack_658;
  uint7 uStack_657;
  undefined1 uStack_650;
  undefined7 uStack_64f;
  undefined1 uStack_648;
  uint7 uStack_647;
  undefined1 uStack_640;
  undefined7 uStack_63f;
  long lStack_638;
  long lStack_630;
  undefined8 uStack_628;
  undefined8 uStack_620;
  undefined8 uStack_618;
  undefined1 uStack_610;
  undefined7 uStack_60f;
  undefined1 uStack_608;
  undefined7 uStack_607;
  undefined1 uStack_600;
  undefined7 uStack_5ff;
  undefined1 uStack_5f8;
  undefined7 uStack_5f7;
  long lStack_5f0;
  long lStack_5e8;
  undefined8 uStack_5e0;
  undefined8 uStack_5d8;
  undefined8 uStack_5d0;
  undefined1 uStack_5c8;
  undefined7 uStack_5c7;
  undefined1 uStack_5c0;
  undefined7 uStack_5bf;
  undefined1 uStack_5b8;
  undefined7 uStack_5b7;
  undefined1 uStack_5b0;
  undefined7 uStack_5af;
  double dStack_5a8;
  double dStack_5a0;
  undefined8 uStack_598;
  undefined1 auStack_590 [8];
  long lStack_588;
  undefined8 uStack_580;
  undefined4 uStack_578;
  int iStack_574;
  double dStack_570;
  undefined3 uStack_568;
  undefined5 uStack_565;
  undefined3 uStack_560;
  undefined5 uStack_55d;
  undefined8 uStack_558;
  undefined8 uStack_550;
  undefined8 uStack_548;
  undefined8 uStack_540;
  long lStack_538;
  long lStack_530;
  undefined8 uStack_528;
  undefined3 uStack_520;
  undefined5 uStack_51d;
  undefined3 uStack_518;
  undefined5 uStack_515;
  undefined8 uStack_510;
  undefined8 uStack_508;
  undefined8 uStack_500;
  undefined8 uStack_4f8;
  double dStack_4f0;
  double dStack_4e8;
  char cStack_4e0;
  undefined7 uStack_4df;
  uint3 uStack_4d8;
  undefined5 uStack_4d5;
  undefined3 uStack_4d0;
  undefined5 uStack_4cd;
  undefined8 uStack_4c8;
  undefined8 uStack_4c0;
  undefined8 uStack_4b8;
  undefined8 uStack_4b0;
  long lStack_4a8;
  long lStack_4a0;
  char cStack_498;
  undefined7 uStack_497;
  undefined3 uStack_48c;
  undefined4 uStack_489;
  undefined4 uStack_485;
  undefined4 uStack_481;
  undefined3 uStack_47d;
  undefined4 uStack_47a;
  undefined4 uStack_476;
  undefined4 uStack_472;
  uint3 uStack_46e;
  undefined4 uStack_46b;
  undefined4 uStack_467;
  undefined4 uStack_463;
  undefined4 uStack_45c;
  undefined4 uStack_458;
  undefined4 uStack_454;
  undefined1 uStack_450;
  undefined2 uStack_44f;
  undefined5 uStack_44d;
  undefined3 uStack_448;
  undefined5 uStack_445;
  undefined8 uStack_440;
  uint3 *puStack_438;
  char cStack_410;
  long lStack_90;
  
  if ((*(char *)(param_4 + 0x18) != '\x01') || (*(char *)(param_4 + 0x19) != '\x01')) {
    *(undefined1 *)(param_4 + 0x19) = 1;
    lVar3 = *(long *)(param_4 + 0x170);
    FUN_109659b48(lVar3,param_4 + 0x20,1);
    *(char *)(param_4 + 0x18) = (char)lVar3;
    if ((int)lVar3 == 0) {
      return lVar3;
    }
  }
  pbVar4 = *(byte **)(param_4 + 0x170);
  lStack_90 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if ((*pbVar4 & 1) == 0) {
    uStack_450 = 0xff;
    FUN_1095cb6cc(pbVar4 + 0x170,&uStack_450,&UNK_10f57a772);
LAB_10965ad34:
    lVar3 = 0;
LAB_10965ad38:
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_90) {
      return lVar3;
    }
    ___stack_chk_fail();
  }
  else {
    lVar3 = *(long *)(param_5 + 4);
    if (lVar3 == 0) {
LAB_10965ad18:
      uStack_450 = 0xfe;
      FUN_1095cb6cc(pbVar4 + 0x170,&uStack_450,&UNK_10f57a789);
      goto LAB_10965ad34;
    }
    uVar9 = (ulong)param_5[1];
    if ((int)param_5[1] < 3) {
      lVar10 = (long)(int)param_5[3] * (long)(int)param_5[2];
    }
    else {
      lVar10 = 1;
      piVar11 = *(int **)(param_5 + 0x10);
      do {
        lVar10 = lVar10 * *piVar11;
        uVar9 = uVar9 - 1;
        piVar11 = piVar11 + 1;
      } while (uVar9 != 0);
    }
    if (lVar10 == 0) goto LAB_10965ad18;
    uVar16 = *(undefined8 *)(param_5 + 2);
    uVar12 = *(undefined8 *)(param_5 + 0x14);
    uVar8 = *param_5;
    pbVar5 = pbVar4 + 0x58;
    FUN_1095ffdc0(pbVar5,param_6);
    auStack_590[0] = SUB81(pbVar5,0);
    iStack_574 = (uVar8 >> 3 & 0x1ff) + 1;
    dStack_570 = param_1 * 1000.0;
    uVar15 = NEON_rev64(uVar16,4);
    uStack_578 = (undefined4)uVar12;
    uStack_454 = 0;
    uStack_45c = 0;
    uStack_458 = 0;
    uStack_44d = 0;
    uStack_448 = 0;
    uStack_445 = 0;
    uStack_4d5 = 0;
    uStack_4d0 = 0;
    uStack_4cd = 0;
    uStack_46b = 0;
    uStack_467 = 0;
    uStack_463 = 0;
    uStack_51d = 0;
    uStack_518 = 0;
    uStack_515 = 0;
    uStack_47a = 0;
    uStack_476 = 0;
    uStack_472 = 0;
    uStack_565 = 0;
    uStack_560 = 0;
    uStack_55d = 0;
    uStack_489 = 0;
    uStack_485 = 0;
    uStack_481 = 0;
    dStack_6c0 = -1.0;
    uStack_6b8 = 0;
    uStack_6ac = 0;
    uStack_6a8 = 0;
    fStack_6b4 = 0.0;
    uStack_6b0 = 0;
    fStack_69c = 0.0;
    dStack_698 = -1.0;
    fStack_6a4 = 0.0;
    fStack_6a0 = 0.0;
    uStack_690 = 0;
    uStack_684 = 0;
    uStack_68c = 0x3f800000;
    uStack_674 = 0;
    uStack_67c = 0x3f800000;
    auVar13 = NEON_fmov(0xbff0000000000000,8);
    uVar16 = auVar13._8_8_;
    uVar12 = auVar13._0_8_;
    uStack_658 = 0;
    uStack_64f = 0;
    uStack_648 = 0;
    uStack_657 = (uint7)uStack_4d8;
    uStack_650 = 0;
    uStack_647 = (uint7)uStack_46e;
    uStack_63f = 0;
    lStack_638 = 0;
    uStack_640 = 0;
    lStack_630 = 0;
    uStack_628 = 0;
    uStack_668 = uVar12;
    uStack_660 = uVar16;
    lStack_588 = lVar3;
    uStack_580 = uVar15;
    FUN_10965cef8(&lStack_638,0,0,0);
    uVar14 = (undefined4)uVar15;
    uStack_610 = 0;
    uStack_607 = (undefined7)CONCAT53(uStack_515,uStack_518);
    uStack_600 = (undefined1)((uint5)uStack_515 >> 0x20);
    uStack_60f = (undefined7)CONCAT53(uStack_51d,uStack_520);
    uStack_608 = (undefined1)((uint5)uStack_51d >> 0x20);
    uStack_5ff = CONCAT43(uStack_47a,uStack_47d);
    uStack_5f8 = (undefined1)uStack_476;
    uStack_5f7 = (undefined7)(CONCAT44(uStack_472,uStack_476) >> 8);
    lStack_5f0 = 0;
    lStack_5e8 = 0;
    uStack_5e0 = 0;
    uStack_620 = uVar12;
    uStack_618 = uVar16;
    FUN_10965cef8(&lStack_5f0,0,0,0);
    uStack_5c8 = 0;
    uStack_5bf = (undefined7)CONCAT53(uStack_55d,uStack_560);
    uStack_5b8 = (undefined1)((uint5)uStack_55d >> 0x20);
    uStack_5c7 = (undefined7)CONCAT53(uStack_565,uStack_568);
    uStack_5c0 = (undefined1)((uint5)uStack_565 >> 0x20);
    uStack_5b7 = CONCAT43(uStack_489,uStack_48c);
    pdVar6 = &dStack_5a8;
    uStack_5b0 = (undefined1)uStack_485;
    uStack_5af = (undefined7)(CONCAT44(uStack_481,uStack_485) >> 8);
    dStack_5a8 = 0.0;
    dStack_5a0 = 0.0;
    uStack_598 = 0;
    uStack_5d8 = uVar12;
    uStack_5d0 = uVar16;
    FUN_10965cef8(pdVar6,0,0,0);
    if (*(char *)(param_7 + 5) == '\x01') {
      pdVar6 = param_7 + 1;
      dVar17 = *param_7;
      fStack_6b4 = (float)FUN_109600148();
      dStack_6c0 = dVar17 * 1000.0;
      fStack_6b4 = 3.1415927 - fStack_6b4;
      fStack_69c = *(float *)(param_7 + 4) * -1000.0;
      uStack_6b8 = 1;
      uStack_6a8 = 1;
      fStack_6a4 = SUB84(param_7[3],0) * 1000.0;
      fStack_6a0 = (float)((ulong)param_7[3] >> 0x20) * -1000.0;
      uStack_6b0 = uVar14;
      uStack_6ac = param_3;
    }
    if (*(char *)(param_9 + 5) == '\x01') {
      dStack_698 = *param_9 * 1000.0;
      auVar13 = NEON_ext(*(undefined1 (*) [16])(param_9 + 1),*(undefined1 (*) [16])(param_9 + 1),0xc
                         ,1);
      uStack_684 = auVar13._8_8_;
      uStack_68c = auVar13._0_8_;
      auVar13 = NEON_ext(*(undefined1 (*) [16])(param_9 + 3),*(undefined1 (*) [16])(param_9 + 3),0xc
                         ,1);
      uStack_674 = auVar13._8_8_;
      uStack_67c = auVar13._0_8_;
      uStack_690 = 1;
    }
    if (*(char *)(*(long *)(pbVar4 + 0x48) + 9) == '\0') {
      FUN_109668130(&uStack_450,pbVar4 + 0x610,0xffffffffffffffff);
      if (cStack_410 == '\x01') {
        FUN_109669448(&uStack_4d8,&uStack_450);
        uStack_668 = CONCAT53(uStack_4d5,uStack_4d8);
        uStack_660 = CONCAT53(uStack_4cd,uStack_4d0);
        uStack_650 = (undefined1)uStack_4c0;
        uStack_64f = (undefined7)((ulong)uStack_4c0 >> 8);
        uStack_658 = (undefined1)uStack_4c8;
        uStack_657 = (uint7)((ulong)uStack_4c8 >> 8);
        uStack_640 = (undefined1)uStack_4b0;
        uStack_63f = (undefined7)((ulong)uStack_4b0 >> 8);
        uStack_648 = (undefined1)uStack_4b8;
        uStack_647 = (uint7)((ulong)uStack_4b8 >> 8);
        if (lStack_638 != 0) {
          lStack_630 = lStack_638;
          __ZdlPv();
        }
        lStack_630 = lStack_4a0;
        lStack_638 = lStack_4a8;
        uStack_628 = CONCAT71(uStack_497,cStack_498);
      }
      FUN_10966834c(&uStack_4d8,pbVar4 + 0x610);
      if (cStack_498 == '\x01') {
        FUN_109669448(&uStack_520,&uStack_4d8);
        uStack_5d8 = CONCAT53(uStack_51d,uStack_520);
        uStack_5d0 = CONCAT53(uStack_515,uStack_518);
        uStack_5c0 = (undefined1)uStack_508;
        uStack_5bf = (undefined7)((ulong)uStack_508 >> 8);
        uStack_5c8 = (undefined1)uStack_510;
        uStack_5c7 = (undefined7)((ulong)uStack_510 >> 8);
        uStack_5b0 = (undefined1)uStack_4f8;
        uStack_5af = (undefined7)((ulong)uStack_4f8 >> 8);
        uStack_5b8 = (undefined1)uStack_500;
        uStack_5b7 = (undefined7)((ulong)uStack_500 >> 8);
        if (dStack_5a8 != 0.0) {
          dStack_5a0 = dStack_5a8;
          __ZdlPv();
        }
        dStack_5a0 = dStack_4e8;
        dStack_5a8 = dStack_4f0;
        uStack_598 = CONCAT71(uStack_4df,cStack_4e0);
      }
      if (pbVar4[0xde0] == 1) {
        FUN_109668130(&uStack_520,pbVar4 + 0x610,(long)*(double *)(pbVar4 + 0xdd8));
        if (cStack_4e0 == '\x01') {
          FUN_109669448(&uStack_568,&uStack_520);
          uStack_620 = CONCAT53(uStack_565,uStack_568);
          uStack_618 = CONCAT53(uStack_55d,uStack_560);
          uStack_608 = (undefined1)uStack_550;
          uStack_607 = (undefined7)((ulong)uStack_550 >> 8);
          uStack_610 = (undefined1)uStack_558;
          uStack_60f = (undefined7)((ulong)uStack_558 >> 8);
          uStack_5f8 = (undefined1)uStack_540;
          uStack_5f7 = (undefined7)((ulong)uStack_540 >> 8);
          uStack_600 = (undefined1)uStack_548;
          uStack_5ff = (undefined7)((ulong)uStack_548 >> 8);
          if (lStack_5f0 != 0) {
            lStack_5e8 = lStack_5f0;
            __ZdlPv();
          }
          lStack_5e8 = lStack_530;
          lStack_5f0 = lStack_538;
          uStack_5e0 = uStack_528;
        }
        func_0x00010965d000(&uStack_520);
      }
      *(double *)(pbVar4 + 0xdd8) = param_1;
      pbVar4[0xde0] = 1;
      func_0x00010965d000(&uStack_4d8);
      pdVar6 = (double *)&uStack_450;
      func_0x00010965d000();
    }
    if (*(long *)(**(long **)(pbVar4 + 0x50) + 8) != 0) {
      lVar3 = *(long *)(*(long *)(**(long **)(pbVar4 + 0x50) + 8) + 0x90);
      *(undefined1 **)(lVar3 + 0x1348) = auStack_590;
      *(double **)(lVar3 + 0x1350) = &dStack_6c0;
      *(undefined1 *)(lVar3 + 0x1359) = param_10;
    }
    __ZNSt3__16chrono12steady_clock3nowEv();
    lVar3 = **(long **)(pbVar4 + 0x50);
    FUN_1095fbea4(lVar3,0xffffffff);
    if ((int)lVar3 == 0) {
LAB_10965ace4:
      if (dStack_5a8 != 0.0) {
        dStack_5a0 = dStack_5a8;
        __ZdlPv();
      }
      if (lStack_5f0 != 0) {
        lStack_5e8 = lStack_5f0;
        __ZdlPv();
      }
      if (lStack_638 != 0) {
        lStack_630 = lStack_638;
        __ZdlPv();
      }
      goto LAB_10965ad38;
    }
    lVar10 = lVar3;
    __ZNSt3__16chrono12steady_clock3nowEv();
    *(long *)(pbVar4 + 0x168) = (lVar10 - (long)pdVar6) / 1000000;
    uStack_4d8 = SUB83(param_1,0);
    uStack_4d5 = (undefined5)((ulong)param_1 >> 0x18);
    uStack_450 = SUB81(pbVar4,0);
    uStack_44f = (undefined2)((ulong)pbVar4 >> 8);
    uStack_44d = (undefined5)((ulong)pbVar4 >> 0x18);
    uStack_448 = SUB83(param_7,0);
    uStack_445 = (undefined5)((ulong)param_7 >> 0x18);
    puStack_438 = &uStack_4d8;
    lVar10 = *(long *)(pbVar4 + 0x48);
    bVar1 = *(byte *)(lVar10 + 0x151);
    uStack_440 = param_8;
    if ((bVar1 & 0xfd) == 0) {
      FUN_10965b864(&uStack_450,0);
      bVar1 = *(byte *)(lVar10 + 0x151);
    }
    if (bVar1 - 1 < 2) {
      FUN_10965b864(&uStack_450,1);
    }
    lVar10 = *(long *)(pbVar4 + 0x48);
    bVar1 = *(byte *)(lVar10 + 0x151);
    uVar8 = (uint)bVar1;
    if (((bVar1 & 0xfd) != 0) || (*(long *)(pbVar4 + 0x40) == 0)) {
LAB_10965aca0:
      if ((uVar8 - 1 < 2) && (*(long *)(pbVar4 + 0x40) != 0)) {
        FUN_10965af90(&uStack_450,pbVar4,1);
        plVar7 = *(long **)(pbVar4 + 0x40);
        if (plVar7 == (long *)0x0) {
          func_0x000104c501e4();
          goto LAB_10965ad8c;
        }
        (**(code **)(*plVar7 + 0x30))(plVar7,&uStack_450);
        FUN_109228dbc(&uStack_450);
      }
      goto LAB_10965ace4;
    }
    FUN_10965af90(&uStack_450,pbVar4,0);
    plVar7 = *(long **)(pbVar4 + 0x40);
    if (plVar7 != (long *)0x0) {
      (**(code **)(*plVar7 + 0x30))(plVar7,&uStack_450);
      FUN_109228dbc(&uStack_450);
      uVar8 = (uint)*(byte *)(lVar10 + 0x151);
      goto LAB_10965aca0;
    }
  }
  func_0x000104c501e4();
LAB_10965ad8c:
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10965ad90);
  (*pcVar2)();
}



/* Entry: 1095c8520; end: 1095c85e3;  */

void FUN_1095c8520(undefined8 param_1,long param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined1 auStack_2c8 [664];
  
  FUN_1095ca120(param_1);
  if ((*(char *)(param_2 + 0x18) != '\x01') || (*(char *)(param_2 + 0x19) != '\x02')) {
    *(undefined1 *)(param_2 + 0x19) = 2;
    uVar2 = *(undefined8 *)(param_2 + 0x170);
    FUN_109659b48(uVar2,param_2 + 0x20,2);
    *(char *)(param_2 + 0x18) = (char)uVar2;
    if ((int)uVar2 == 0) {
      return;
    }
  }
  iVar1 = (int)*(undefined8 *)(param_2 + 0x170);
  FUN_10965af04();
  if (iVar1 != 0) {
    FUN_10965c558(auStack_2c8,*(undefined8 *)(param_2 + 0x170));
    FUN_1095c85e4(param_1,auStack_2c8);
    FUN_109228534(auStack_2c8);
  }
  return;
}



/* Entry: 1095c85e4; end: 1095c8c97;  */

undefined8 * FUN_1095c85e4(undefined8 *param_1,undefined8 *param_2)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  int *piVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  
  uVar9 = *param_2;
  uVar11 = param_2[3];
  uVar10 = param_2[2];
  param_1[1] = param_2[1];
  *param_1 = uVar9;
  param_1[3] = uVar11;
  param_1[2] = uVar10;
  uVar10 = param_2[5];
  uVar9 = param_2[4];
  uVar12 = param_2[7];
  uVar11 = param_2[6];
  uVar14 = param_2[9];
  uVar13 = param_2[8];
  param_1[10] = param_2[10];
  param_1[7] = uVar12;
  param_1[6] = uVar11;
  param_1[9] = uVar14;
  param_1[8] = uVar13;
  param_1[5] = uVar10;
  param_1[4] = uVar9;
  if (param_1[0x12] != 0) {
    piVar8 = (int *)(param_1[0x12] + 0x14);
    do {
      iVar3 = *piVar8;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(piVar8,0x10);
      if (bVar2) {
        *piVar8 = iVar3 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (iVar3 + -1 == 0) {
      func_0x000109a848d4(param_1 + 0xb);
    }
  }
  param_1[0x12] = 0;
  param_1[0xe] = 0;
  param_1[0xd] = 0;
  param_1[0x10] = 0;
  param_1[0xf] = 0;
  if (0 < *(int *)((long)param_1 + 0x5c)) {
    lVar4 = 0;
    lVar5 = param_1[0x13];
    do {
      *(undefined4 *)(lVar5 + lVar4 * 4) = 0;
      lVar4 = lVar4 + 1;
    } while (lVar4 < *(int *)((long)param_1 + 0x5c));
  }
  piVar8 = (int *)((long)param_2 + 0x5c);
  iVar3 = *piVar8;
  uVar9 = param_2[0xb];
  param_1[0xc] = param_2[0xc];
  param_1[0xb] = uVar9;
  uVar9 = param_2[0xd];
  param_1[0xe] = param_2[0xe];
  param_1[0xd] = uVar9;
  uVar9 = param_2[0xf];
  param_1[0x10] = param_2[0x10];
  param_1[0xf] = uVar9;
  uVar9 = param_2[0x11];
  param_1[0x12] = param_2[0x12];
  param_1[0x11] = uVar9;
  puVar6 = (undefined8 *)param_1[0x14];
  puVar7 = param_1 + 0x15;
  if (puVar6 != puVar7) {
    if (puVar6 != (undefined8 *)0x0) {
      _free(puVar6[-1]);
      iVar3 = *piVar8;
    }
    param_1[0x13] = param_1 + 0xc;
    param_1[0x14] = puVar7;
    puVar6 = puVar7;
  }
  puVar7 = (undefined8 *)param_2[0x14];
  if (iVar3 < 3) {
    *puVar6 = *puVar7;
    puVar6[1] = puVar7[1];
  }
  else {
    param_1[0x13] = param_2[0x13];
    param_1[0x14] = puVar7;
    param_2[0x13] = param_2 + 0xc;
    param_2[0x14] = param_2 + 0x15;
  }
  *(undefined4 *)(param_2 + 0xb) = 0x42ff0000;
  *(undefined8 *)((long)param_2 + 100) = 0;
  piVar8[0] = 0;
  piVar8[1] = 0;
  *(undefined8 *)((long)param_2 + 0x74) = 0;
  *(undefined8 *)((long)param_2 + 0x6c) = 0;
  *(undefined8 *)((long)param_2 + 0x84) = 0;
  *(undefined8 *)((long)param_2 + 0x7c) = 0;
  param_2[0x12] = 0;
  param_2[0x11] = 0;
  if (param_1[0x1e] != 0) {
    piVar8 = (int *)(param_1[0x1e] + 0x14);
    do {
      iVar3 = *piVar8;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(piVar8,0x10);
      if (bVar2) {
        *piVar8 = iVar3 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (iVar3 + -1 == 0) {
      func_0x000109a848d4(param_1 + 0x17);
    }
  }
  param_1[0x1e] = 0;
  param_1[0x1a] = 0;
  param_1[0x19] = 0;
  param_1[0x1c] = 0;
  param_1[0x1b] = 0;
  if (0 < *(int *)((long)param_1 + 0xbc)) {
    lVar4 = 0;
    lVar5 = param_1[0x1f];
    do {
      *(undefined4 *)(lVar5 + lVar4 * 4) = 0;
      lVar4 = lVar4 + 1;
    } while (lVar4 < *(int *)((long)param_1 + 0xbc));
  }
  piVar8 = (int *)((long)param_2 + 0xbc);
  iVar3 = *piVar8;
  uVar9 = param_2[0x17];
  param_1[0x18] = param_2[0x18];
  param_1[0x17] = uVar9;
  uVar9 = param_2[0x19];
  param_1[0x1a] = param_2[0x1a];
  param_1[0x19] = uVar9;
  uVar9 = param_2[0x1b];
  param_1[0x1c] = param_2[0x1c];
  param_1[0x1b] = uVar9;
  uVar9 = param_2[0x1d];
  param_1[0x1e] = param_2[0x1e];
  param_1[0x1d] = uVar9;
  puVar6 = (undefined8 *)param_1[0x20];
  puVar7 = param_1 + 0x21;
  if (puVar6 != puVar7) {
    if (puVar6 != (undefined8 *)0x0) {
      _free(puVar6[-1]);
      iVar3 = *piVar8;
    }
    param_1[0x1f] = param_1 + 0x18;
    param_1[0x20] = puVar7;
    puVar6 = puVar7;
  }
  puVar7 = (undefined8 *)param_2[0x20];
  if (iVar3 < 3) {
    *puVar6 = *puVar7;
    puVar6[1] = puVar7[1];
  }
  else {
    param_1[0x1f] = param_2[0x1f];
    param_1[0x20] = puVar7;
    param_2[0x1f] = param_2 + 0x18;
    param_2[0x20] = param_2 + 0x21;
  }
  *(undefined4 *)(param_2 + 0x17) = 0x42ff0000;
  *(undefined8 *)((long)param_2 + 0xc4) = 0;
  piVar8[0] = 0;
  piVar8[1] = 0;
  *(undefined8 *)((long)param_2 + 0xd4) = 0;
  *(undefined8 *)((long)param_2 + 0xcc) = 0;
  *(undefined8 *)((long)param_2 + 0xe4) = 0;
  *(undefined8 *)((long)param_2 + 0xdc) = 0;
  param_2[0x1e] = 0;
  param_2[0x1d] = 0;
  if (param_1[0x2a] != 0) {
    piVar8 = (int *)(param_1[0x2a] + 0x14);
    do {
      iVar3 = *piVar8;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(piVar8,0x10);
      if (bVar2) {
        *piVar8 = iVar3 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (iVar3 + -1 == 0) {
      func_0x000109a848d4(param_1 + 0x23);
    }
  }
  param_1[0x2a] = 0;
  param_1[0x26] = 0;
  param_1[0x25] = 0;
  param_1[0x28] = 0;
  param_1[0x27] = 0;
  if (0 < *(int *)((long)param_1 + 0x11c)) {
    lVar4 = 0;
    lVar5 = param_1[0x2b];
    do {
      *(undefined4 *)(lVar5 + lVar4 * 4) = 0;
      lVar4 = lVar4 + 1;
    } while (lVar4 < *(int *)((long)param_1 + 0x11c));
  }
  piVar8 = (int *)((long)param_2 + 0x11c);
  uVar9 = param_2[0x23];
  iVar3 = *(int *)((long)param_2 + 0x11c);
  param_1[0x24] = param_2[0x24];
  param_1[0x23] = uVar9;
  param_1[0x25] = param_2[0x25];
  uVar9 = param_2[0x26];
  param_1[0x27] = param_2[0x27];
  param_1[0x26] = uVar9;
  uVar9 = param_2[0x28];
  param_1[0x29] = param_2[0x29];
  param_1[0x28] = uVar9;
  param_1[0x2a] = param_2[0x2a];
  puVar6 = (undefined8 *)param_1[0x2c];
  puVar7 = param_1 + 0x2d;
  if (puVar6 != puVar7) {
    if (puVar6 != (undefined8 *)0x0) {
      _free(puVar6[-1]);
      iVar3 = *piVar8;
    }
    param_1[0x2b] = param_1 + 0x24;
    param_1[0x2c] = puVar7;
    puVar6 = puVar7;
  }
  puVar7 = (undefined8 *)param_2[0x2c];
  if (iVar3 < 3) {
    *puVar6 = *puVar7;
    puVar6[1] = puVar7[1];
  }
  else {
    param_1[0x2b] = param_2[0x2b];
    param_1[0x2c] = puVar7;
    param_2[0x2b] = param_2 + 0x24;
    param_2[0x2c] = param_2 + 0x2d;
  }
  *(undefined4 *)(param_2 + 0x23) = 0x42ff0000;
  *(undefined8 *)((long)param_2 + 0x124) = 0;
  piVar8[0] = 0;
  piVar8[1] = 0;
  *(undefined8 *)((long)param_2 + 0x134) = 0;
  *(undefined8 *)((long)param_2 + 300) = 0;
  *(undefined8 *)((long)param_2 + 0x144) = 0;
  *(undefined8 *)((long)param_2 + 0x13c) = 0;
  param_2[0x2a] = 0;
  param_2[0x29] = 0;
  if (param_1[0x36] != 0) {
    piVar8 = (int *)(param_1[0x36] + 0x14);
    do {
      iVar3 = *piVar8;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(piVar8,0x10);
      if (bVar2) {
        *piVar8 = iVar3 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (iVar3 + -1 == 0) {
      func_0x000109a848d4(param_1 + 0x2f);
    }
  }
  param_1[0x36] = 0;
  param_1[0x32] = 0;
  param_1[0x31] = 0;
  param_1[0x34] = 0;
  param_1[0x33] = 0;
  if (0 < *(int *)((long)param_1 + 0x17c)) {
    lVar4 = 0;
    lVar5 = param_1[0x37];
    do {
      *(undefined4 *)(lVar5 + lVar4 * 4) = 0;
      lVar4 = lVar4 + 1;
    } while (lVar4 < *(int *)((long)param_1 + 0x17c));
  }
  piVar8 = (int *)((long)param_2 + 0x17c);
  uVar9 = param_2[0x2f];
  iVar3 = *(int *)((long)param_2 + 0x17c);
  param_1[0x30] = param_2[0x30];
  param_1[0x2f] = uVar9;
  param_1[0x31] = param_2[0x31];
  uVar9 = param_2[0x32];
  param_1[0x33] = param_2[0x33];
  param_1[0x32] = uVar9;
  uVar9 = param_2[0x34];
  param_1[0x35] = param_2[0x35];
  param_1[0x34] = uVar9;
  param_1[0x36] = param_2[0x36];
  puVar6 = (undefined8 *)param_1[0x38];
  puVar7 = param_1 + 0x39;
  if (puVar6 != puVar7) {
    if (puVar6 != (undefined8 *)0x0) {
      _free(puVar6[-1]);
      iVar3 = *piVar8;
    }
    param_1[0x37] = param_1 + 0x30;
    param_1[0x38] = puVar7;
    puVar6 = puVar7;
  }
  puVar7 = (undefined8 *)param_2[0x38];
  if (iVar3 < 3) {
    *puVar6 = *puVar7;
    puVar6[1] = puVar7[1];
  }
  else {
    param_1[0x37] = param_2[0x37];
    param_1[0x38] = puVar7;
    param_2[0x37] = param_2 + 0x30;
    param_2[0x38] = param_2 + 0x39;
  }
  *(undefined4 *)(param_2 + 0x2f) = 0x42ff0000;
  *(undefined8 *)((long)param_2 + 0x184) = 0;
  piVar8[0] = 0;
  piVar8[1] = 0;
  *(undefined8 *)((long)param_2 + 0x194) = 0;
  *(undefined8 *)((long)param_2 + 0x18c) = 0;
  *(undefined8 *)((long)param_2 + 0x1a4) = 0;
  *(undefined8 *)((long)param_2 + 0x19c) = 0;
  param_2[0x36] = 0;
  param_2[0x35] = 0;
  if (param_1[0x42] != 0) {
    piVar8 = (int *)(param_1[0x42] + 0x14);
    do {
      iVar3 = *piVar8;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(piVar8,0x10);
      if (bVar2) {
        *piVar8 = iVar3 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (iVar3 + -1 == 0) {
      func_0x000109a848d4(param_1 + 0x3b);
    }
  }
  param_1[0x42] = 0;
  param_1[0x3e] = 0;
  param_1[0x3d] = 0;
  param_1[0x40] = 0;
  param_1[0x3f] = 0;
  if (0 < *(int *)((long)param_1 + 0x1dc)) {
    lVar4 = 0;
    lVar5 = param_1[0x43];
    do {
      *(undefined4 *)(lVar5 + lVar4 * 4) = 0;
      lVar4 = lVar4 + 1;
    } while (lVar4 < *(int *)((long)param_1 + 0x1dc));
  }
  piVar8 = (int *)((long)param_2 + 0x1dc);
  uVar9 = param_2[0x3b];
  iVar3 = *(int *)((long)param_2 + 0x1dc);
  param_1[0x3c] = param_2[0x3c];
  param_1[0x3b] = uVar9;
  param_1[0x3d] = param_2[0x3d];
  uVar9 = param_2[0x3e];
  param_1[0x3f] = param_2[0x3f];
  param_1[0x3e] = uVar9;
  uVar9 = param_2[0x40];
  param_1[0x41] = param_2[0x41];
  param_1[0x40] = uVar9;
  param_1[0x42] = param_2[0x42];
  puVar6 = (undefined8 *)param_1[0x44];
  puVar7 = param_1 + 0x45;
  if (puVar6 != puVar7) {
    if (puVar6 != (undefined8 *)0x0) {
      _free(puVar6[-1]);
      iVar3 = *piVar8;
    }
    param_1[0x44] = puVar7;
    param_1[0x43] = param_1 + 0x3c;
    puVar6 = puVar7;
  }
  puVar7 = (undefined8 *)param_2[0x44];
  if (iVar3 < 3) {
    *puVar6 = *puVar7;
    puVar6[1] = puVar7[1];
  }
  else {
    param_1[0x44] = puVar7;
    param_1[0x43] = param_2[0x43];
    param_2[0x44] = param_2 + 0x45;
    param_2[0x43] = param_2 + 0x3c;
  }
  *(undefined4 *)(param_2 + 0x3b) = 0x42ff0000;
  *(undefined8 *)((long)param_2 + 0x1e4) = 0;
  piVar8[0] = 0;
  piVar8[1] = 0;
  *(undefined8 *)((long)param_2 + 500) = 0;
  *(undefined8 *)((long)param_2 + 0x1ec) = 0;
  *(undefined8 *)((long)param_2 + 0x204) = 0;
  *(undefined8 *)((long)param_2 + 0x1fc) = 0;
  param_2[0x42] = 0;
  param_2[0x41] = 0;
  if (param_1[0x4e] != 0) {
    piVar8 = (int *)(param_1[0x4e] + 0x14);
    do {
      iVar3 = *piVar8;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(piVar8,0x10);
      if (bVar2) {
        *piVar8 = iVar3 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (iVar3 + -1 == 0) {
      func_0x000109a848d4(param_1 + 0x47);
    }
  }
  param_1[0x4e] = 0;
  param_1[0x4a] = 0;
  param_1[0x49] = 0;
  param_1[0x4c] = 0;
  param_1[0x4b] = 0;
  if (0 < *(int *)((long)param_1 + 0x23c)) {
    lVar4 = 0;
    lVar5 = param_1[0x4f];
    do {
      *(undefined4 *)(lVar5 + lVar4 * 4) = 0;
      lVar4 = lVar4 + 1;
    } while (lVar4 < *(int *)((long)param_1 + 0x23c));
  }
  piVar8 = (int *)((long)param_2 + 0x23c);
  uVar9 = param_2[0x47];
  iVar3 = *(int *)((long)param_2 + 0x23c);
  param_1[0x48] = param_2[0x48];
  param_1[0x47] = uVar9;
  param_1[0x49] = param_2[0x49];
  uVar9 = param_2[0x4a];
  param_1[0x4b] = param_2[0x4b];
  param_1[0x4a] = uVar9;
  uVar9 = param_2[0x4c];
  param_1[0x4d] = param_2[0x4d];
  param_1[0x4c] = uVar9;
  param_1[0x4e] = param_2[0x4e];
  puVar6 = (undefined8 *)param_1[0x50];
  puVar7 = param_1 + 0x51;
  if (puVar6 != puVar7) {
    if (puVar6 != (undefined8 *)0x0) {
      _free(puVar6[-1]);
      iVar3 = *piVar8;
    }
    param_1[0x50] = puVar7;
    param_1[0x4f] = param_1 + 0x48;
    puVar6 = puVar7;
  }
  puVar7 = (undefined8 *)param_2[0x50];
  if (iVar3 < 3) {
    *puVar6 = *puVar7;
    puVar6[1] = puVar7[1];
  }
  else {
    param_1[0x50] = puVar7;
    param_1[0x4f] = param_2[0x4f];
    param_2[0x50] = param_2 + 0x51;
    param_2[0x4f] = param_2 + 0x48;
  }
  *(undefined4 *)(param_2 + 0x47) = 0x42ff0000;
  *(undefined8 *)((long)param_2 + 0x244) = 0;
  piVar8[0] = 0;
  piVar8[1] = 0;
  *(undefined8 *)((long)param_2 + 0x254) = 0;
  *(undefined8 *)((long)param_2 + 0x24c) = 0;
  *(undefined8 *)((long)param_2 + 0x264) = 0;
  *(undefined8 *)((long)param_2 + 0x25c) = 0;
  param_2[0x4e] = 0;
  param_2[0x4d] = 0;
  return param_1;
}



/* Entry: 1095c8c98; end: 1095c8deb;  */

undefined8 *
FUN_1095c8c98(undefined8 *param_1,undefined1 param_2,undefined1 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined1 param_8,
             undefined2 param_9)

{
  undefined8 uVar1;
  undefined1 uStack_1a0;
  undefined1 uStack_19f;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined1 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined1 uStack_a8;
  undefined7 uStack_a7;
  undefined1 uStack_a0;
  undefined8 uStack_9f;
  undefined8 uStack_94;
  undefined8 *puStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined2 uStack_58;
  
  *param_1 = 0;
  uStack_94 = 0;
  uStack_190 = 0;
  uStack_198 = 0;
  uStack_180 = 0;
  uStack_188 = 0;
  uStack_170 = 0;
  uStack_178 = 0;
  uStack_168 = 0;
  puStack_88 = &uStack_80;
  uStack_158 = 0;
  uStack_160 = 0;
  uStack_148 = 0;
  uStack_150 = 0;
  uStack_138 = 0;
  uStack_140 = 0;
  uStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  uStack_d8 = 0;
  uStack_e0 = 0;
  uStack_c8 = 0;
  uStack_d0 = 0;
  uStack_b8 = 0;
  uStack_c0 = 0;
  uStack_a8 = 0;
  uStack_b0 = 0;
  uStack_9f = 0;
  uStack_a7 = 0;
  uStack_a0 = 0;
  uStack_80 = 0;
  uStack_78 = 0;
  uStack_70 = 0;
  uStack_68 = 0;
  uStack_60 = 0;
  uStack_58 = 0x203;
  uStack_1a0 = param_2;
  uStack_19f = param_3;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_(&uStack_198,param_4);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_(&uStack_180,param_5);
  uStack_168 = param_8;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_(&uStack_160,param_6);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_(&uStack_148,param_7);
  uStack_58 = param_9;
  uVar1 = 0x588;
  __Znwm(0x588);
  FUN_1095c82ec();
  FUN_1095ca220(param_1,uVar1);
  func_0x0001095c99b8(&uStack_1a0);
  return param_1;
}



/* Entry: 1095c8dec; end: 1095c901f;  */

undefined2 * FUN_1095c8dec(undefined2 *param_1,undefined2 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  *param_1 = *param_2;
  if (*(char *)((long)param_2 + 0x1f) < '\0') {
    func_0x000107c3192c(param_1 + 4,*(undefined8 *)(param_2 + 4),*(undefined8 *)(param_2 + 8));
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 8);
    uVar1 = *(undefined8 *)(param_2 + 4);
    *(undefined8 *)(param_1 + 0xc) = *(undefined8 *)(param_2 + 0xc);
    *(undefined8 *)(param_1 + 8) = uVar2;
    *(undefined8 *)(param_1 + 4) = uVar1;
  }
  if (*(char *)((long)param_2 + 0x37) < '\0') {
    func_0x000107c3192c(param_1 + 0x10,*(undefined8 *)(param_2 + 0x10),
                        *(undefined8 *)(param_2 + 0x14));
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 0x14);
    uVar1 = *(undefined8 *)(param_2 + 0x10);
    *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_2 + 0x18);
    *(undefined8 *)(param_1 + 0x14) = uVar2;
    *(undefined8 *)(param_1 + 0x10) = uVar1;
  }
  *(undefined1 *)(param_1 + 0x1c) = *(undefined1 *)(param_2 + 0x1c);
  if (*(char *)((long)param_2 + 0x57) < '\0') {
    func_0x000107c3192c(param_1 + 0x20,*(undefined8 *)(param_2 + 0x20),
                        *(undefined8 *)(param_2 + 0x24));
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 0x24);
    uVar1 = *(undefined8 *)(param_2 + 0x20);
    *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
    *(undefined8 *)(param_1 + 0x24) = uVar2;
    *(undefined8 *)(param_1 + 0x20) = uVar1;
  }
  if (*(char *)((long)param_2 + 0x6f) < '\0') {
    func_0x000107c3192c(param_1 + 0x2c,*(undefined8 *)(param_2 + 0x2c),
                        *(undefined8 *)(param_2 + 0x30));
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 0x30);
    uVar1 = *(undefined8 *)(param_2 + 0x2c);
    *(undefined8 *)(param_1 + 0x34) = *(undefined8 *)(param_2 + 0x34);
    *(undefined8 *)(param_1 + 0x30) = uVar2;
    *(undefined8 *)(param_1 + 0x2c) = uVar1;
  }
  FUN_1095c9020(param_1 + 0x38,param_2 + 0x38);
  *(undefined8 *)(param_1 + 0x68) = 0;
  *(undefined8 *)(param_1 + 0x6c) = 0;
  *(undefined8 *)(param_1 + 0x70) = 0;
  FUN_1095c9474(param_1 + 0x68,*(long *)(param_2 + 0x68),*(long *)(param_2 + 0x6c),
                (*(long *)(param_2 + 0x6c) - *(long *)(param_2 + 0x68) >> 3) * -0x3333333333333333);
  *(undefined8 *)(param_1 + 0x74) = 0;
  *(undefined8 *)(param_1 + 0x78) = 0;
  *(undefined8 *)(param_1 + 0x7c) = 0;
  FUN_1092bfde0(param_1 + 0x74,*(long *)(param_2 + 0x74),*(long *)(param_2 + 0x78),
                *(long *)(param_2 + 0x78) - *(long *)(param_2 + 0x74));
  uVar2 = *(undefined8 *)(param_2 + 0x84);
  uVar1 = *(undefined8 *)(param_2 + 0x80);
  *(undefined4 *)(param_1 + 0x88) = *(undefined4 *)(param_2 + 0x88);
  *(undefined8 *)(param_1 + 0x84) = uVar2;
  *(undefined8 *)(param_1 + 0x80) = uVar1;
  FUN_1095c9534(param_1 + 0x8c,param_2 + 0x8c);
  *(undefined8 *)(param_1 + 0x98) = 0;
  *(undefined8 *)(param_1 + 0x9c) = 0;
  *(undefined8 *)(param_1 + 0xa0) = 0;
  FUN_1095c98c8(param_1 + 0x98,*(long *)(param_2 + 0x98),*(long *)(param_2 + 0x9c),
                *(long *)(param_2 + 0x9c) - *(long *)(param_2 + 0x98) >> 1);
  param_1[0xa4] = param_2[0xa4];
  return param_1;
}



/* Entry: 1095c9020; end: 1095c912b;  */

undefined8 * FUN_1095c9020(undefined8 *param_1,long param_2)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  FUN_1095c912c();
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  FUN_1095c91ec(param_1 + 3,*(long *)(param_2 + 0x18),*(long *)(param_2 + 0x20),
                (*(long *)(param_2 + 0x20) - *(long *)(param_2 + 0x18) >> 3) * -0x5555555555555555);
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  FUN_1095c92ac(param_1 + 6,*(long *)(param_2 + 0x30),*(long *)(param_2 + 0x38),
                (*(long *)(param_2 + 0x38) - *(long *)(param_2 + 0x30) >> 3) * -0x5555555555555555);
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  FUN_1095c93c4();
  return param_1;
}



/* Entry: 1095c912c; end: 1095c91a3;  */

void FUN_1095c912c(long param_1,long param_2,long param_3,long param_4)

{
  long lVar1;
  
  if (param_4 != 0) {
    FUN_1095c91a4(param_1,param_4);
    lVar1 = *(long *)(param_1 + 8);
    param_3 = param_3 - param_2;
    if (param_3 != 0) {
      _memmove(lVar1,param_2,param_3);
    }
    *(long *)(param_1 + 8) = lVar1 + param_3;
  }
  return;
}



/* Entry: 1095c91a4; end: 1095c91eb;  */

void FUN_1095c91a4(long *param_1,ulong param_2,long param_3,long param_4)

{
  long *plVar1;
  long lVar2;
  
  if (param_2 < 0xaaaaaaaaaaaaaab) {
    plVar1 = param_1;
    FUN_109226fc0();
    *param_1 = (long)plVar1;
    param_1[1] = (long)plVar1;
    param_1[2] = (long)(plVar1 + param_2 * 3);
    return;
  }
  FUN_109226fac();
  if (param_4 != 0) {
    FUN_1095c9264();
    lVar2 = param_1[1];
    param_3 = param_3 - param_2;
    if (param_3 != 0) {
      _memmove(lVar2,param_2,param_3);
    }
    param_1[1] = lVar2 + param_3;
  }
  return;
}



/* Entry: 1095c91ec; end: 1095c9263;  */

void FUN_1095c91ec(long param_1,long param_2,long param_3,long param_4)

{
  long lVar1;
  
  if (param_4 != 0) {
    FUN_1095c9264(param_1,param_4);
    lVar1 = *(long *)(param_1 + 8);
    param_3 = param_3 - param_2;
    if (param_3 != 0) {
      _memmove(lVar1,param_2,param_3);
    }
    *(long *)(param_1 + 8) = lVar1 + param_3;
  }
  return;
}



/* Entry: 1095c9264; end: 1095c92ab;  */

void FUN_1095c9264(long *param_1,ulong param_2,long param_3,long param_4)

{
  long *plVar1;
  long lVar2;
  
  if (param_2 < 0xaaaaaaaaaaaaaab) {
    plVar1 = param_1;
    FUN_109227018();
    *param_1 = (long)plVar1;
    param_1[1] = (long)plVar1;
    param_1[2] = (long)(plVar1 + param_2 * 3);
    return;
  }
  FUN_109227004();
  if (param_4 != 0) {
    FUN_1095c9324();
    lVar2 = param_1[1];
    param_3 = param_3 - param_2;
    if (param_3 != 0) {
      _memmove(lVar2,param_2,param_3);
    }
    param_1[1] = lVar2 + param_3;
  }
  return;
}



/* Entry: 1095c92ac; end: 1095c9323;  */

void FUN_1095c92ac(long param_1,long param_2,long param_3,long param_4)

{
  long lVar1;
  
  if (param_4 != 0) {
    FUN_1095c9324(param_1,param_4);
    lVar1 = *(long *)(param_1 + 8);
    param_3 = param_3 - param_2;
    if (param_3 != 0) {
      _memmove(lVar1,param_2,param_3);
    }
    *(long *)(param_1 + 8) = lVar1 + param_3;
  }
  return;
}



/* Entry: 1095c9324; end: 1095c936b;  */

void FUN_1095c9324(long *param_1,ulong param_2,long param_3,long param_4)

{
  long *plVar1;
  undefined *puVar2;
  long lVar3;
  
  if (param_2 < 0xaaaaaaaaaaaaaab) {
    plVar1 = param_1;
    FUN_1095c9380();
    *param_1 = (long)plVar1;
    param_1[1] = (long)plVar1;
    param_1[2] = (long)(plVar1 + param_2 * 3);
    return;
  }
  FUN_1095c936c();
  puVar2 = &DAT_10f62a4d8;
  func_0x000104c4f6cc();
  if (param_2 < 0xaaaaaaaaaaaaaab) {
    __Znwm(param_2 * 0x18);
    return;
  }
  func_0x000104c4f740();
  if (param_4 != 0) {
    FUN_1095c943c();
    lVar3 = *(long *)(puVar2 + 8);
    param_3 = param_3 - param_2;
    if (param_3 != 0) {
      _memmove(lVar3,param_2,param_3);
    }
    *(long *)(puVar2 + 8) = lVar3 + param_3;
  }
  return;
}



/* Entry: 1095c936c; end: 1095c937f;  */

void FUN_1095c936c(undefined8 param_1,ulong param_2,long param_3,long param_4)

{
  undefined *puVar1;
  long lVar2;
  
  puVar1 = &DAT_10f62a4d8;
  func_0x000104c4f6cc();
  if (param_2 < 0xaaaaaaaaaaaaaab) {
    __Znwm(param_2 * 0x18);
    return;
  }
  func_0x000104c4f740();
  if (param_4 != 0) {
    FUN_1095c943c();
    lVar2 = *(long *)(puVar1 + 8);
    param_3 = param_3 - param_2;
    if (param_3 != 0) {
      _memmove(lVar2,param_2,param_3);
    }
    *(long *)(puVar1 + 8) = lVar2 + param_3;
  }
  return;
}



/* Entry: 1095c9380; end: 1095c93c3;  */

void FUN_1095c9380(long param_1,ulong param_2,long param_3,long param_4)

{
  long lVar1;
  
  if (param_2 < 0xaaaaaaaaaaaaaab) {
    __Znwm(param_2 * 0x18);
    return;
  }
  func_0x000104c4f740();
  if (param_4 != 0) {
    FUN_1095c943c();
    lVar1 = *(long *)(param_1 + 8);
    param_3 = param_3 - param_2;
    if (param_3 != 0) {
      _memmove(lVar1,param_2,param_3);
    }
    *(long *)(param_1 + 8) = lVar1 + param_3;
  }
  return;
}



/* Entry: 1095c93c4; end: 1095c943b;  */

void FUN_1095c93c4(long param_1,long param_2,long param_3,long param_4)

{
  long lVar1;
  
  if (param_4 != 0) {
    FUN_1095c943c(param_1,param_4);
    lVar1 = *(long *)(param_1 + 8);
    param_3 = param_3 - param_2;
    if (param_3 != 0) {
      _memmove(lVar1,param_2,param_3);
    }
    *(long *)(param_1 + 8) = lVar1 + param_3;
  }
  return;
}



/* Entry: 1095c943c; end: 1095c9473;  */

void FUN_1095c943c(long *param_1,ulong param_2,long param_3,long param_4)

{
  long *plVar1;
  long lVar2;
  
  if (param_2 >> 0x3c == 0) {
    plVar1 = param_1;
    FUN_109226f78();
    *param_1 = (long)plVar1;
    param_1[1] = (long)plVar1;
    param_1[2] = (long)(plVar1 + param_2 * 2);
    return;
  }
  FUN_109226f64();
  if (param_4 != 0) {
    FUN_1095c94ec();
    lVar2 = param_1[1];
    param_3 = param_3 - param_2;
    if (param_3 != 0) {
      _memmove(lVar2,param_2,param_3 + -4);
    }
    param_1[1] = lVar2 + param_3;
  }
  return;
}



/* Entry: 1095c9474; end: 1095c94eb;  */

void FUN_1095c9474(long param_1,long param_2,long param_3,long param_4)

{
  long lVar1;
  
  if (param_4 != 0) {
    FUN_1095c94ec(param_1,param_4);
    lVar1 = *(long *)(param_1 + 8);
    param_3 = param_3 - param_2;
    if (param_3 != 0) {
      _memmove(lVar1,param_2,param_3 + -4);
    }
    *(long *)(param_1 + 8) = lVar1 + param_3;
  }
  return;
}



/* Entry: 1095c94ec; end: 1095c9533;  */

undefined8 * FUN_1095c94ec(undefined8 *param_1,ulong param_2)

{
  undefined8 *puVar1;
  
  if (param_2 < 0x666666666666667) {
    puVar1 = param_1;
    FUN_109227070();
    *param_1 = puVar1;
    param_1[1] = puVar1;
    param_1[2] = puVar1 + param_2 * 5;
    return puVar1;
  }
  FUN_10922705c();
  param_1[2] = 0;
  param_1[1] = 0;
  *param_1 = param_1 + 1;
  FUN_1095c9588();
  return param_1;
}



/* Entry: 1095c9534; end: 1095c9587;  */

undefined8 * FUN_1095c9534(undefined8 *param_1,undefined8 *param_2)

{
  param_1[2] = 0;
  param_1[1] = 0;
  *param_1 = param_1 + 1;
  FUN_1095c9588(param_1,*param_2,param_2 + 1);
  return param_1;
}



/* Entry: 1095c9588; end: 1095c968b;  */

void FUN_1095c9588(long param_1,long *param_2,long *param_3)

{
  long *plVar1;
  bool bVar2;
  long *plVar3;
  
  while (param_2 != param_3) {
    func_0x0001095c9608(param_1,param_1 + 8,param_2 + 4,param_2 + 4);
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
  }
  return;
}



/* Entry: 1095c968c; end: 1095c9833;  */

long * FUN_1095c968c(undefined8 *param_1,long *param_2,long *param_3,long *param_4,ushort *param_5)

{
  ushort uVar1;
  bool bVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  
  plVar4 = param_1 + 1;
  if (plVar4 != param_2) {
    uVar1 = *param_5;
    if (*(ushort *)(param_2 + 4) <= uVar1) {
      if (uVar1 <= *(ushort *)(param_2 + 4)) {
        *param_3 = (long)param_2;
        *param_4 = (long)param_2;
        return param_4;
      }
      plVar6 = (long *)param_2[1];
      plVar7 = param_2;
      plVar5 = plVar6;
      if (plVar6 == (long *)0x0) {
        do {
          plVar3 = (long *)plVar7[2];
          bVar2 = (long *)*plVar3 != plVar7;
          plVar7 = plVar3;
        } while (bVar2);
      }
      else {
        do {
          plVar3 = plVar5;
          plVar5 = (long *)*plVar3;
        } while ((long *)*plVar3 != (long *)0x0);
      }
      if ((plVar3 == plVar4) || (uVar1 < *(ushort *)(plVar3 + 4))) {
        if (plVar6 != (long *)0x0) {
          *param_3 = (long)plVar3;
          return plVar3;
        }
        *param_3 = (long)param_2;
        return param_2 + 1;
      }
      plVar7 = (long *)*plVar4;
      while (plVar5 = plVar4, plVar7 != (long *)0x0) {
        while (plVar5 = plVar7, *(ushort *)(plVar5 + 4) <= uVar1) {
          if (uVar1 <= *(ushort *)(plVar5 + 4)) goto LAB_1095c982c;
          plVar4 = plVar5 + 1;
          plVar7 = (long *)*plVar4;
          if ((long *)*plVar4 == (long *)0x0) goto LAB_1095c982c;
        }
        plVar4 = plVar5;
        plVar7 = (long *)*plVar5;
      }
LAB_1095c982c:
      *param_3 = (long)plVar5;
      return plVar4;
    }
  }
  plVar5 = (long *)*param_2;
  plVar7 = param_2;
  if ((long *)*param_1 != param_2) {
    plVar6 = param_2;
    plVar3 = plVar5;
    if (plVar5 == (long *)0x0) {
      do {
        plVar7 = (long *)plVar6[2];
        bVar2 = (long *)*plVar7 == plVar6;
        plVar6 = plVar7;
      } while (bVar2);
    }
    else {
      do {
        plVar7 = plVar3;
        plVar3 = (long *)plVar7[1];
      } while ((long *)plVar7[1] != (long *)0x0);
    }
    uVar1 = *param_5;
    if (uVar1 <= *(ushort *)(plVar7 + 4)) {
      plVar7 = (long *)*plVar4;
      while (plVar5 = plVar4, plVar7 != (long *)0x0) {
        while (plVar5 = plVar7, *(ushort *)(plVar5 + 4) <= uVar1) {
          if (uVar1 <= *(ushort *)(plVar5 + 4)) goto LAB_1095c9794;
          plVar4 = plVar5 + 1;
          plVar7 = (long *)*plVar4;
          if ((long *)*plVar4 == (long *)0x0) goto LAB_1095c9794;
        }
        plVar4 = plVar5;
        plVar7 = (long *)*plVar5;
      }
LAB_1095c9794:
      *param_3 = (long)plVar5;
      return plVar4;
    }
  }
  if (plVar5 == (long *)0x0) {
    *param_3 = (long)param_2;
  }
  else {
    *param_3 = (long)plVar7;
    param_2 = plVar7 + 1;
  }
  return param_2;
}



/* Entry: 1095c9834; end: 1095c98c7;  */

void FUN_1095c9834(long *param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4)

{
  *param_4 = 0;
  param_4[1] = 0;
  param_4[2] = param_2;
  *param_3 = param_4;
  if (*(long *)*param_1 != 0) {
    *param_1 = *(long *)*param_1;
    param_4 = (undefined8 *)*param_3;
  }
  func_0x000107c27d40(param_1[1],param_4);
  param_1[2] = param_1[2] + 1;
  return;
}



/* Entry: 1095c98c8; end: 1095c993f;  */

void FUN_1095c98c8(long param_1,long param_2,long param_3,long param_4)

{
  long lVar1;
  
  if (param_4 != 0) {
    FUN_1095c9940(param_1,param_4);
    lVar1 = *(long *)(param_1 + 8);
    param_3 = param_3 - param_2;
    if (param_3 != 0) {
      _memmove(lVar1,param_2,param_3);
    }
    *(long *)(param_1 + 8) = lVar1 + param_3;
  }
  return;
}



/* Entry: 1095c9940; end: 1095c9973;  */

undefined1  [16] FUN_1095c9940(long *param_1,long param_2)

{
  long *plVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  
  if (-1 < param_2) {
    plVar1 = param_1;
    FUN_1095c9988();
    *param_1 = (long)plVar1;
    param_1[1] = (long)plVar1;
    param_1[2] = (long)plVar1 + param_2 * 2;
    auVar5._8_8_ = param_2;
    auVar5._0_8_ = plVar1;
    return auVar5;
  }
  FUN_1095c9974();
  puVar2 = &DAT_10f62a4d8;
  func_0x000104c4f6cc();
  if (-1 < param_2) {
    lVar3 = param_2 << 1;
    __Znwm(lVar3);
    auVar6._8_8_ = param_2;
    auVar6._0_8_ = lVar3;
    return auVar6;
  }
  func_0x000104c4f740();
  if (*(long *)(puVar2 + 0x130) != 0) {
    *(long *)(puVar2 + 0x138) = *(long *)(puVar2 + 0x130);
    __ZdlPv();
  }
  uVar4 = *(undefined8 *)(puVar2 + 0x120);
  func_0x0001095c9888(puVar2 + 0x118,uVar4);
  if (*(long *)(puVar2 + 0xe8) != 0) {
    *(long *)(puVar2 + 0xf0) = *(long *)(puVar2 + 0xe8);
    __ZdlPv();
  }
  if (*(long *)(puVar2 + 0xd0) != 0) {
    *(long *)(puVar2 + 0xd8) = *(long *)(puVar2 + 0xd0);
    __ZdlPv();
  }
  if (*(long *)(puVar2 + 0xb8) != 0) {
    *(long *)(puVar2 + 0xc0) = *(long *)(puVar2 + 0xb8);
    __ZdlPv();
  }
  if (*(long *)(puVar2 + 0xa0) != 0) {
    *(long *)(puVar2 + 0xa8) = *(long *)(puVar2 + 0xa0);
    __ZdlPv();
  }
  if (*(long *)(puVar2 + 0x88) != 0) {
    *(long *)(puVar2 + 0x90) = *(long *)(puVar2 + 0x88);
    __ZdlPv();
  }
  if (*(long *)(puVar2 + 0x70) != 0) {
    *(long *)(puVar2 + 0x78) = *(long *)(puVar2 + 0x70);
    __ZdlPv();
  }
  if ((char)puVar2[0x6f] < '\0') {
    __ZdlPv(*(undefined8 *)(puVar2 + 0x58));
  }
  if ((char)puVar2[0x57] < '\0') {
    __ZdlPv(*(undefined8 *)(puVar2 + 0x40));
  }
  if ((char)puVar2[0x37] < '\0') {
    __ZdlPv(*(undefined8 *)(puVar2 + 0x20));
  }
  if ((char)puVar2[0x1f] < '\0') {
    __ZdlPv(*(undefined8 *)(puVar2 + 8));
  }
  auVar7._8_8_ = uVar4;
  auVar7._0_8_ = puVar2;
  return auVar7;
}



/* Entry: 1095c9974; end: 1095c9987;  */

undefined1  [16] FUN_1095c9974(undefined8 param_1,long param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  
  puVar1 = &DAT_10f62a4d8;
  func_0x000104c4f6cc();
  if (-1 < param_2) {
    lVar2 = param_2 << 1;
    __Znwm(lVar2);
    auVar4._8_8_ = param_2;
    auVar4._0_8_ = lVar2;
    return auVar4;
  }
  func_0x000104c4f740();
  if (*(long *)(puVar1 + 0x130) != 0) {
    *(long *)(puVar1 + 0x138) = *(long *)(puVar1 + 0x130);
    __ZdlPv();
  }
  uVar3 = *(undefined8 *)(puVar1 + 0x120);
  func_0x0001095c9888(puVar1 + 0x118,uVar3);
  if (*(long *)(puVar1 + 0xe8) != 0) {
    *(long *)(puVar1 + 0xf0) = *(long *)(puVar1 + 0xe8);
    __ZdlPv();
  }
  if (*(long *)(puVar1 + 0xd0) != 0) {
    *(long *)(puVar1 + 0xd8) = *(long *)(puVar1 + 0xd0);
    __ZdlPv();
  }
  if (*(long *)(puVar1 + 0xb8) != 0) {
    *(long *)(puVar1 + 0xc0) = *(long *)(puVar1 + 0xb8);
    __ZdlPv();
  }
  if (*(long *)(puVar1 + 0xa0) != 0) {
    *(long *)(puVar1 + 0xa8) = *(long *)(puVar1 + 0xa0);
    __ZdlPv();
  }
  if (*(long *)(puVar1 + 0x88) != 0) {
    *(long *)(puVar1 + 0x90) = *(long *)(puVar1 + 0x88);
    __ZdlPv();
  }
  if (*(long *)(puVar1 + 0x70) != 0) {
    *(long *)(puVar1 + 0x78) = *(long *)(puVar1 + 0x70);
    __ZdlPv();
  }
  if ((char)puVar1[0x6f] < '\0') {
    __ZdlPv(*(undefined8 *)(puVar1 + 0x58));
  }
  if ((char)puVar1[0x57] < '\0') {
    __ZdlPv(*(undefined8 *)(puVar1 + 0x40));
  }
  if ((char)puVar1[0x37] < '\0') {
    __ZdlPv(*(undefined8 *)(puVar1 + 0x20));
  }
  if ((char)puVar1[0x1f] < '\0') {
    __ZdlPv(*(undefined8 *)(puVar1 + 8));
  }
  auVar5._8_8_ = uVar3;
  auVar5._0_8_ = puVar1;
  return auVar5;
}



/* Entry: 1095c9988; end: 1095c9a93;  */

undefined1  [16] FUN_1095c9988(long param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  
  if (-1 < param_2) {
    lVar1 = param_2 << 1;
    __Znwm(lVar1);
    auVar3._8_8_ = param_2;
    auVar3._0_8_ = lVar1;
    return auVar3;
  }
  func_0x000104c4f740();
  if (*(long *)(param_1 + 0x130) != 0) {
    *(long *)(param_1 + 0x138) = *(long *)(param_1 + 0x130);
    __ZdlPv();
  }
  uVar2 = *(undefined8 *)(param_1 + 0x120);
  func_0x0001095c9888(param_1 + 0x118,uVar2);
  if (*(long *)(param_1 + 0xe8) != 0) {
    *(long *)(param_1 + 0xf0) = *(long *)(param_1 + 0xe8);
    __ZdlPv();
  }
  if (*(long *)(param_1 + 0xd0) != 0) {
    *(long *)(param_1 + 0xd8) = *(long *)(param_1 + 0xd0);
    __ZdlPv();
  }
  if (*(long *)(param_1 + 0xb8) != 0) {
    *(long *)(param_1 + 0xc0) = *(long *)(param_1 + 0xb8);
    __ZdlPv();
  }
  if (*(long *)(param_1 + 0xa0) != 0) {
    *(long *)(param_1 + 0xa8) = *(long *)(param_1 + 0xa0);
    __ZdlPv();
  }
  if (*(long *)(param_1 + 0x88) != 0) {
    *(long *)(param_1 + 0x90) = *(long *)(param_1 + 0x88);
    __ZdlPv();
  }
  if (*(long *)(param_1 + 0x70) != 0) {
    *(long *)(param_1 + 0x78) = *(long *)(param_1 + 0x70);
    __ZdlPv();
  }
  if (*(char *)(param_1 + 0x6f) < '\0') {
    __ZdlPv(*(undefined8 *)(param_1 + 0x58));
  }
  if (*(char *)(param_1 + 0x57) < '\0') {
    __ZdlPv(*(undefined8 *)(param_1 + 0x40));
  }
  if (*(char *)(param_1 + 0x37) < '\0') {
    __ZdlPv(*(undefined8 *)(param_1 + 0x20));
  }
  if (*(char *)(param_1 + 0x1f) < '\0') {
    __ZdlPv(*(undefined8 *)(param_1 + 8));
  }
  auVar4._8_8_ = uVar2;
  auVar4._0_8_ = param_1;
  return auVar4;
}



/* Entry: 1095c9a94; end: 1095ca11f;  */

void FUN_1095c9a94(undefined8 *param_1,long param_2,long param_3,ulong param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  
  lVar5 = param_1[2];
  puVar9 = (undefined8 *)*param_1;
  if ((ulong)((lVar5 - (long)puVar9 >> 3) * -0x5555555555555555) < param_4) {
    puVar11 = param_1;
    lVar1 = param_2;
    lVar6 = param_3;
    uVar7 = param_4;
    if (puVar9 != (undefined8 *)0x0) {
      param_1[1] = puVar9;
      __ZdlPv();
      lVar5 = 0;
      *param_1 = 0;
      param_1[1] = 0;
      param_1[2] = 0;
      puVar11 = puVar9;
    }
    if (0xaaaaaaaaaaaaaaa < param_4) {
      FUN_109226fac();
      lVar5 = puVar11[2];
      puVar9 = (undefined8 *)*puVar11;
      if ((ulong)((lVar5 - (long)puVar9 >> 3) * -0x5555555555555555) < uVar7) {
        puVar10 = puVar11;
        lVar2 = lVar1;
        lVar3 = lVar6;
        uVar8 = uVar7;
        if (puVar9 != (undefined8 *)0x0) {
          puVar11[1] = puVar9;
          __ZdlPv();
          lVar5 = 0;
          *puVar11 = 0;
          puVar11[1] = 0;
          puVar11[2] = 0;
          puVar10 = puVar9;
        }
        if (0xaaaaaaaaaaaaaaa < uVar7) {
          FUN_109227004();
          lVar5 = puVar10[2];
          puVar9 = (undefined8 *)*puVar10;
          if ((ulong)((lVar5 - (long)puVar9 >> 3) * -0x5555555555555555) < uVar8) {
            puVar11 = puVar10;
            lVar1 = lVar2;
            lVar6 = lVar3;
            uVar7 = uVar8;
            if (puVar9 != (undefined8 *)0x0) {
              puVar10[1] = puVar9;
              __ZdlPv();
              lVar5 = 0;
              *puVar10 = 0;
              puVar10[1] = 0;
              puVar10[2] = 0;
              puVar11 = puVar9;
            }
            if (0xaaaaaaaaaaaaaaa < uVar8) {
              FUN_1095c936c();
              uVar8 = puVar11[2];
              puVar9 = (undefined8 *)*puVar11;
              if ((ulong)((long)(uVar8 - (long)puVar9) >> 4) < uVar7) {
                puVar10 = puVar11;
                lVar3 = lVar1;
                lVar5 = lVar6;
                uVar4 = uVar7;
                if (puVar9 != (undefined8 *)0x0) {
                  puVar11[1] = puVar9;
                  __ZdlPv();
                  uVar8 = 0;
                  *puVar11 = 0;
                  puVar11[1] = 0;
                  puVar11[2] = 0;
                  puVar10 = puVar9;
                }
                if (uVar7 >> 0x3c != 0) {
                  FUN_109226f64();
                  lVar6 = puVar10[2];
                  puVar9 = (undefined8 *)*puVar10;
                  if ((ulong)((lVar6 - (long)puVar9 >> 3) * -0x3333333333333333) < uVar4) {
                    puVar11 = puVar10;
                    if (puVar9 != (undefined8 *)0x0) {
                      puVar10[1] = puVar9;
                      __ZdlPv();
                      lVar6 = 0;
                      *puVar10 = 0;
                      puVar10[1] = 0;
                      puVar10[2] = 0;
                      puVar11 = puVar9;
                    }
                    if (0x666666666666666 < uVar4) {
                      FUN_10922705c();
                      *puVar11 = 0;
                      *(undefined4 *)(puVar11 + 1) = 0;
                      puVar11[3] = 0;
                      puVar11[2] = 0;
                      puVar11[5] = 0;
                      puVar11[4] = 0;
                      puVar11[7] = 0;
                      puVar11[6] = 0;
                      puVar11[9] = 0;
                      puVar11[8] = 0;
                      puVar11[10] = 0;
                      *(undefined4 *)(puVar11 + 0xb) = 0x42ff0000;
                      *(undefined8 *)((long)puVar11 + 100) = 0;
                      *(undefined8 *)((long)puVar11 + 0x5c) = 0;
                      *(undefined8 *)((long)puVar11 + 0x74) = 0;
                      *(undefined8 *)((long)puVar11 + 0x6c) = 0;
                      *(undefined8 *)((long)puVar11 + 0x84) = 0;
                      *(undefined8 *)((long)puVar11 + 0x7c) = 0;
                      puVar11[0x12] = 0;
                      puVar11[0x11] = 0;
                      puVar11[0x16] = 0;
                      puVar11[0x15] = 0;
                      puVar11[0x13] = puVar11 + 0xc;
                      puVar11[0x14] = puVar11 + 0x15;
                      *(undefined4 *)(puVar11 + 0x17) = 0x42ff0000;
                      puVar11[0x1e] = 0;
                      puVar11[0x1d] = 0;
                      *(undefined8 *)((long)puVar11 + 0xe4) = 0;
                      *(undefined8 *)((long)puVar11 + 0xdc) = 0;
                      *(undefined8 *)((long)puVar11 + 0xd4) = 0;
                      *(undefined8 *)((long)puVar11 + 0xcc) = 0;
                      *(undefined8 *)((long)puVar11 + 0xc4) = 0;
                      *(undefined8 *)((long)puVar11 + 0xbc) = 0;
                      puVar11[0x1f] = puVar11 + 0x18;
                      puVar11[0x20] = puVar11 + 0x21;
                      puVar11[0x22] = 0;
                      puVar11[0x21] = 0;
                      *(undefined4 *)(puVar11 + 0x23) = 0x42ff0000;
                      puVar11[0x2a] = 0;
                      puVar11[0x29] = 0;
                      *(undefined8 *)((long)puVar11 + 0x134) = 0;
                      *(undefined8 *)((long)puVar11 + 300) = 0;
                      *(undefined8 *)((long)puVar11 + 0x144) = 0;
                      *(undefined8 *)((long)puVar11 + 0x13c) = 0;
                      *(undefined8 *)((long)puVar11 + 0x124) = 0;
                      *(undefined8 *)((long)puVar11 + 0x11c) = 0;
                      puVar11[0x2b] = puVar11 + 0x24;
                      puVar11[0x2c] = puVar11 + 0x2d;
                      puVar11[0x2e] = 0;
                      puVar11[0x2d] = 0;
                      *(undefined4 *)(puVar11 + 0x2f) = 0x42ff0000;
                      puVar11[0x36] = 0;
                      puVar11[0x35] = 0;
                      *(undefined8 *)((long)puVar11 + 0x194) = 0;
                      *(undefined8 *)((long)puVar11 + 0x18c) = 0;
                      *(undefined8 *)((long)puVar11 + 0x1a4) = 0;
                      *(undefined8 *)((long)puVar11 + 0x19c) = 0;
                      *(undefined8 *)((long)puVar11 + 0x184) = 0;
                      *(undefined8 *)((long)puVar11 + 0x17c) = 0;
                      puVar11[0x37] = puVar11 + 0x30;
                      puVar11[0x38] = puVar11 + 0x39;
                      puVar11[0x3a] = 0;
                      puVar11[0x39] = 0;
                      *(undefined4 *)(puVar11 + 0x3b) = 0x42ff0000;
                      puVar11[0x42] = 0;
                      puVar11[0x41] = 0;
                      *(undefined8 *)((long)puVar11 + 500) = 0;
                      *(undefined8 *)((long)puVar11 + 0x1ec) = 0;
                      *(undefined8 *)((long)puVar11 + 0x204) = 0;
                      *(undefined8 *)((long)puVar11 + 0x1fc) = 0;
                      *(undefined8 *)((long)puVar11 + 0x1e4) = 0;
                      *(undefined8 *)((long)puVar11 + 0x1dc) = 0;
                      puVar11[0x43] = puVar11 + 0x3c;
                      puVar11[0x44] = puVar11 + 0x45;
                      puVar11[0x46] = 0;
                      puVar11[0x45] = 0;
                      *(undefined4 *)(puVar11 + 0x47) = 0x42ff0000;
                      puVar11[0x4e] = 0;
                      puVar11[0x4d] = 0;
                      *(undefined8 *)((long)puVar11 + 0x254) = 0;
                      *(undefined8 *)((long)puVar11 + 0x24c) = 0;
                      *(undefined8 *)((long)puVar11 + 0x264) = 0;
                      *(undefined8 *)((long)puVar11 + 0x25c) = 0;
                      *(undefined8 *)((long)puVar11 + 0x244) = 0;
                      *(undefined8 *)((long)puVar11 + 0x23c) = 0;
                      puVar11[0x4f] = puVar11 + 0x48;
                      puVar11[0x50] = puVar11 + 0x51;
                      puVar11[0x52] = 0;
                      puVar11[0x51] = 0;
                      return;
                    }
                    uVar7 = (lVar6 >> 3) * -0x6666666666666666;
                    if (uVar7 < uVar4 || uVar7 - uVar4 == 0) {
                      uVar7 = uVar4;
                    }
                    if (0x333333333333332 < (ulong)((lVar6 >> 3) * -0x3333333333333333)) {
                      uVar7 = 0x666666666666666;
                    }
                    FUN_1095c94ec(puVar10,uVar7);
                    lVar6 = puVar10[1];
                    lVar5 = lVar5 - lVar3;
                    if (lVar5 != 0) {
                      _memmove(lVar6,lVar3,lVar5 + -4);
                    }
                    lVar6 = lVar6 + lVar5;
                  }
                  else {
                    puVar11 = (undefined8 *)puVar10[1];
                    lVar6 = (long)puVar11 - (long)puVar9;
                    if ((ulong)((lVar6 >> 3) * -0x3333333333333333) < uVar4) {
                      if (puVar11 != puVar9) {
                        _memmove(puVar9,lVar3,lVar6 + -4);
                        puVar11 = (undefined8 *)puVar10[1];
                      }
                      lVar5 = lVar5 - (lVar3 + lVar6);
                      if (lVar5 != 0) {
                        _memmove(puVar11,lVar3 + lVar6,lVar5 + -4);
                      }
                      lVar6 = (long)puVar11 + lVar5;
                    }
                    else {
                      lVar5 = lVar5 - lVar3;
                      if (lVar5 != 0) {
                        _memmove(puVar9,lVar3,lVar5 + -4);
                      }
                      lVar6 = (long)puVar9 + lVar5;
                    }
                  }
                  puVar10[1] = lVar6;
                  return;
                }
                uVar4 = (long)uVar8 >> 3;
                if ((ulong)((long)uVar8 >> 3) <= uVar7) {
                  uVar4 = uVar7;
                }
                if (0x7fffffffffffffef < uVar8) {
                  uVar4 = 0xfffffffffffffff;
                }
                FUN_1095c943c(puVar11,uVar4);
                lVar5 = puVar11[1];
                lVar6 = lVar6 - lVar1;
                if (lVar6 != 0) {
                  _memmove(lVar5,lVar1,lVar6);
                }
                lVar5 = lVar5 + lVar6;
              }
              else {
                puVar10 = (undefined8 *)puVar11[1];
                if ((ulong)((long)puVar10 - (long)puVar9 >> 4) < uVar7) {
                  lVar5 = lVar1 + ((long)puVar10 - (long)puVar9);
                  if (puVar10 != puVar9) {
                    _memmove(puVar9,lVar1);
                    puVar10 = (undefined8 *)puVar11[1];
                  }
                  lVar6 = lVar6 - lVar5;
                  if (lVar6 != 0) {
                    _memmove(puVar10,lVar5,lVar6);
                  }
                  lVar5 = (long)puVar10 + lVar6;
                }
                else {
                  lVar6 = lVar6 - lVar1;
                  if (lVar6 != 0) {
                    _memmove(puVar9,lVar1,lVar6);
                  }
                  lVar5 = (long)puVar9 + lVar6;
                }
              }
              puVar11[1] = lVar5;
              return;
            }
            uVar7 = (lVar5 >> 3) * 0x5555555555555556;
            if (uVar7 < uVar8 || uVar7 - uVar8 == 0) {
              uVar7 = uVar8;
            }
            if (0x555555555555554 < (ulong)((lVar5 >> 3) * -0x5555555555555555)) {
              uVar7 = 0xaaaaaaaaaaaaaaa;
            }
            FUN_1095c9324(puVar10,uVar7);
            lVar5 = puVar10[1];
            lVar3 = lVar3 - lVar2;
            if (lVar3 != 0) {
              _memmove(lVar5,lVar2,lVar3);
            }
            lVar5 = lVar5 + lVar3;
          }
          else {
            puVar11 = (undefined8 *)puVar10[1];
            if ((ulong)(((long)puVar11 - (long)puVar9 >> 3) * -0x5555555555555555) < uVar8) {
              lVar5 = lVar2 + ((long)puVar11 - (long)puVar9);
              if (puVar11 != puVar9) {
                _memmove(puVar9,lVar2);
                puVar11 = (undefined8 *)puVar10[1];
              }
              lVar3 = lVar3 - lVar5;
              if (lVar3 != 0) {
                _memmove(puVar11,lVar5,lVar3);
              }
              lVar5 = (long)puVar11 + lVar3;
            }
            else {
              lVar3 = lVar3 - lVar2;
              if (lVar3 != 0) {
                _memmove(puVar9,lVar2,lVar3);
              }
              lVar5 = (long)puVar9 + lVar3;
            }
          }
          puVar10[1] = lVar5;
          return;
        }
        uVar8 = (lVar5 >> 3) * 0x5555555555555556;
        if (uVar8 < uVar7 || uVar8 - uVar7 == 0) {
          uVar8 = uVar7;
        }
        if (0x555555555555554 < (ulong)((lVar5 >> 3) * -0x5555555555555555)) {
          uVar8 = 0xaaaaaaaaaaaaaaa;
        }
        FUN_1095c9264(puVar11,uVar8);
        lVar5 = puVar11[1];
        lVar6 = lVar6 - lVar1;
        if (lVar6 != 0) {
          _memmove(lVar5,lVar1,lVar6);
        }
        lVar5 = lVar5 + lVar6;
      }
      else {
        puVar10 = (undefined8 *)puVar11[1];
        if ((ulong)(((long)puVar10 - (long)puVar9 >> 3) * -0x5555555555555555) < uVar7) {
          lVar5 = lVar1 + ((long)puVar10 - (long)puVar9);
          if (puVar10 != puVar9) {
            _memmove(puVar9,lVar1);
            puVar10 = (undefined8 *)puVar11[1];
          }
          lVar6 = lVar6 - lVar5;
          if (lVar6 != 0) {
            _memmove(puVar10,lVar5,lVar6);
          }
          lVar5 = (long)puVar10 + lVar6;
        }
        else {
          lVar6 = lVar6 - lVar1;
          if (lVar6 != 0) {
            _memmove(puVar9,lVar1,lVar6);
          }
          lVar5 = (long)puVar9 + lVar6;
        }
      }
      puVar11[1] = lVar5;
      return;
    }
    uVar7 = (lVar5 >> 3) * 0x5555555555555556;
    if (uVar7 < param_4 || uVar7 - param_4 == 0) {
      uVar7 = param_4;
    }
    if (0x555555555555554 < (ulong)((lVar5 >> 3) * -0x5555555555555555)) {
      uVar7 = 0xaaaaaaaaaaaaaaa;
    }
    FUN_1095c91a4(param_1,uVar7);
    lVar5 = param_1[1];
    param_3 = param_3 - param_2;
    if (param_3 != 0) {
      _memmove(lVar5,param_2,param_3);
    }
    lVar5 = lVar5 + param_3;
  }
  else {
    puVar11 = (undefined8 *)param_1[1];
    if ((ulong)(((long)puVar11 - (long)puVar9 >> 3) * -0x5555555555555555) < param_4) {
      lVar5 = param_2 + ((long)puVar11 - (long)puVar9);
      if (puVar11 != puVar9) {
        _memmove(puVar9,param_2);
        puVar11 = (undefined8 *)param_1[1];
      }
      param_3 = param_3 - lVar5;
      if (param_3 != 0) {
        _memmove(puVar11,lVar5,param_3);
      }
      lVar5 = (long)puVar11 + param_3;
    }
    else {
      param_3 = param_3 - param_2;
      if (param_3 != 0) {
        _memmove(puVar9,param_2,param_3);
      }
      lVar5 = (long)puVar9 + param_3;
    }
  }
  param_1[1] = lVar5;
  return;
}



/* Entry: 1095ca120; end: 1095ca21f;  */

void FUN_1095ca120(undefined8 *param_1)

{
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[7] = 0;
  param_1[6] = 0;
  param_1[9] = 0;
  param_1[8] = 0;
  param_1[10] = 0;
  *(undefined4 *)(param_1 + 0xb) = 0x42ff0000;
  *(undefined8 *)((long)param_1 + 100) = 0;
  *(undefined8 *)((long)param_1 + 0x5c) = 0;
  *(undefined8 *)((long)param_1 + 0x74) = 0;
  *(undefined8 *)((long)param_1 + 0x6c) = 0;
  *(undefined8 *)((long)param_1 + 0x84) = 0;
  *(undefined8 *)((long)param_1 + 0x7c) = 0;
  param_1[0x12] = 0;
  param_1[0x11] = 0;
  param_1[0x16] = 0;
  param_1[0x15] = 0;
  param_1[0x13] = param_1 + 0xc;
  param_1[0x14] = param_1 + 0x15;
  *(undefined4 *)(param_1 + 0x17) = 0x42ff0000;
  param_1[0x1e] = 0;
  param_1[0x1d] = 0;
  *(undefined8 *)((long)param_1 + 0xe4) = 0;
  *(undefined8 *)((long)param_1 + 0xdc) = 0;
  *(undefined8 *)((long)param_1 + 0xd4) = 0;
  *(undefined8 *)((long)param_1 + 0xcc) = 0;
  *(undefined8 *)((long)param_1 + 0xc4) = 0;
  *(undefined8 *)((long)param_1 + 0xbc) = 0;
  param_1[0x1f] = param_1 + 0x18;
  param_1[0x20] = param_1 + 0x21;
  param_1[0x22] = 0;
  param_1[0x21] = 0;
  *(undefined4 *)(param_1 + 0x23) = 0x42ff0000;
  param_1[0x2a] = 0;
  param_1[0x29] = 0;
  *(undefined8 *)((long)param_1 + 0x134) = 0;
  *(undefined8 *)((long)param_1 + 300) = 0;
  *(undefined8 *)((long)param_1 + 0x144) = 0;
  *(undefined8 *)((long)param_1 + 0x13c) = 0;
  *(undefined8 *)((long)param_1 + 0x124) = 0;
  *(undefined8 *)((long)param_1 + 0x11c) = 0;
  param_1[0x2b] = param_1 + 0x24;
  param_1[0x2c] = param_1 + 0x2d;
  param_1[0x2e] = 0;
  param_1[0x2d] = 0;
  *(undefined4 *)(param_1 + 0x2f) = 0x42ff0000;
  param_1[0x36] = 0;
  param_1[0x35] = 0;
  *(undefined8 *)((long)param_1 + 0x194) = 0;
  *(undefined8 *)((long)param_1 + 0x18c) = 0;
  *(undefined8 *)((long)param_1 + 0x1a4) = 0;
  *(undefined8 *)((long)param_1 + 0x19c) = 0;
  *(undefined8 *)((long)param_1 + 0x184) = 0;
  *(undefined8 *)((long)param_1 + 0x17c) = 0;
  param_1[0x37] = param_1 + 0x30;
  param_1[0x38] = param_1 + 0x39;
  param_1[0x3a] = 0;
  param_1[0x39] = 0;
  *(undefined4 *)(param_1 + 0x3b) = 0x42ff0000;
  param_1[0x42] = 0;
  param_1[0x41] = 0;
  *(undefined8 *)((long)param_1 + 500) = 0;
  *(undefined8 *)((long)param_1 + 0x1ec) = 0;
  *(undefined8 *)((long)param_1 + 0x204) = 0;
  *(undefined8 *)((long)param_1 + 0x1fc) = 0;
  *(undefined8 *)((long)param_1 + 0x1e4) = 0;
  *(undefined8 *)((long)param_1 + 0x1dc) = 0;
  param_1[0x43] = param_1 + 0x3c;
  param_1[0x44] = param_1 + 0x45;
  param_1[0x46] = 0;
  param_1[0x45] = 0;
  *(undefined4 *)(param_1 + 0x47) = 0x42ff0000;
  param_1[0x4e] = 0;
  param_1[0x4d] = 0;
  *(undefined8 *)((long)param_1 + 0x254) = 0;
  *(undefined8 *)((long)param_1 + 0x24c) = 0;
  *(undefined8 *)((long)param_1 + 0x264) = 0;
  *(undefined8 *)((long)param_1 + 0x25c) = 0;
  *(undefined8 *)((long)param_1 + 0x244) = 0;
  *(undefined8 *)((long)param_1 + 0x23c) = 0;
  param_1[0x4f] = param_1 + 0x48;
  param_1[0x50] = param_1 + 0x51;
  param_1[0x52] = 0;
  param_1[0x51] = 0;
  return;
}



/* Entry: 1095ca220; end: 1095ca247;  */

void FUN_1095ca220(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 != 0) {
    FUN_1095c8370();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 1095ca248; end: 1095ca447;  */

undefined4 * FUN_1095ca248(undefined4 *param_1)

{
  undefined8 uVar1;
  
  *param_1 = 0;
  *(undefined8 *)(param_1 + 2) = 0;
  *(undefined2 *)(param_1 + 4) = 2;
  *(undefined8 *)(param_1 + 6) = 0;
  *(undefined8 *)(param_1 + 10) = 0;
  *(undefined8 *)(param_1 + 8) = 0;
  param_1[0xc] = 0x3f800000;
  *(undefined8 *)(param_1 + 0xf) = 0;
  *(undefined8 *)(param_1 + 0xd) = 0;
  param_1[0x11] = 0x3f800000;
  *(undefined8 *)(param_1 + 0x14) = 0;
  *(undefined8 *)(param_1 + 0x12) = 0;
  param_1[0x16] = 0x3f800000;
  *(undefined8 *)(param_1 + 0x19) = 0;
  *(undefined8 *)(param_1 + 0x17) = 0;
  uVar1 = NEON_fmov(0x3f800000,4);
  *(undefined8 *)(param_1 + 0x1b) = uVar1;
  *(undefined8 *)(param_1 + 0x1f) = 0;
  *(undefined8 *)(param_1 + 0x1d) = 0;
  param_1[0x21] = 0x3f800000;
  *(undefined8 *)(param_1 + 0x24) = 0;
  *(undefined8 *)(param_1 + 0x22) = 0;
  param_1[0x26] = 0x3f800000;
  *(undefined8 *)(param_1 + 0x29) = 0;
  *(undefined8 *)(param_1 + 0x27) = 0;
  param_1[0x2b] = 0x3f800000;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x2e) = 0;
  *(undefined8 *)(param_1 + 0x2c) = 0;
  param_1[0x32] = 0x3f800000;
  *(undefined8 *)(param_1 + 0x35) = 0;
  *(undefined8 *)(param_1 + 0x33) = 0;
  param_1[0x37] = 0x3f800000;
  *(undefined8 *)(param_1 + 0x3a) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  param_1[0x3c] = 0x3f800000;
  *(undefined8 *)(param_1 + 0x3f) = 0;
  *(undefined8 *)(param_1 + 0x3d) = 0;
  *(undefined8 *)(param_1 + 0x41) = 0x3f8000003f800000;
  *(undefined8 *)(param_1 + 0x45) = 0;
  *(undefined8 *)(param_1 + 0x43) = 0;
  param_1[0x47] = 0x3f800000;
  *(undefined8 *)(param_1 + 0x4a) = 0;
  *(undefined8 *)(param_1 + 0x48) = 0;
  param_1[0x4c] = 0x3f800000;
  *(undefined8 *)(param_1 + 0x4f) = 0;
  *(undefined8 *)(param_1 + 0x4d) = 0;
  *(undefined8 *)(param_1 + 0x51) = 0x42ff00003f800000;
  *(undefined8 *)(param_1 + 0x60) = 0;
  *(undefined8 *)(param_1 + 0x5e) = 0;
  *(undefined8 *)(param_1 + 0x59) = 0;
  *(undefined8 *)(param_1 + 0x57) = 0;
  *(undefined8 *)(param_1 + 0x5d) = 0;
  *(undefined8 *)(param_1 + 0x5b) = 0;
  *(undefined8 *)(param_1 + 0x55) = 0;
  *(undefined8 *)(param_1 + 0x53) = 0;
  *(undefined4 **)(param_1 + 0x62) = param_1 + 0x54;
  *(undefined4 **)(param_1 + 100) = param_1 + 0x66;
  *(undefined8 *)(param_1 + 0x68) = 0;
  *(undefined8 *)(param_1 + 0x66) = 0;
  param_1[0x6a] = 0x42ff0000;
  *(undefined8 *)(param_1 + 0x78) = 0;
  *(undefined8 *)(param_1 + 0x76) = 0;
  *(undefined8 *)(param_1 + 0x71) = 0;
  *(undefined8 *)(param_1 + 0x6f) = 0;
  *(undefined8 *)(param_1 + 0x75) = 0;
  *(undefined8 *)(param_1 + 0x73) = 0;
  *(undefined8 *)(param_1 + 0x6d) = 0;
  *(undefined8 *)(param_1 + 0x6b) = 0;
  *(undefined4 **)(param_1 + 0x7a) = param_1 + 0x6c;
  *(undefined4 **)(param_1 + 0x7c) = param_1 + 0x7e;
  *(undefined8 *)(param_1 + 0x80) = 0;
  *(undefined8 *)(param_1 + 0x7e) = 0;
  param_1[0x82] = 0x42ff0000;
  *(undefined8 *)(param_1 + 0x90) = 0;
  *(undefined8 *)(param_1 + 0x8e) = 0;
  *(undefined8 *)(param_1 + 0x89) = 0;
  *(undefined8 *)(param_1 + 0x87) = 0;
  *(undefined8 *)(param_1 + 0x8d) = 0;
  *(undefined8 *)(param_1 + 0x8b) = 0;
  *(undefined8 *)(param_1 + 0x85) = 0;
  *(undefined8 *)(param_1 + 0x83) = 0;
  *(undefined4 **)(param_1 + 0x92) = param_1 + 0x84;
  *(undefined4 **)(param_1 + 0x94) = param_1 + 0x96;
  *(undefined8 *)(param_1 + 0x98) = 0;
  *(undefined8 *)(param_1 + 0x96) = 0;
  param_1[0x9a] = 0x42ff0000;
  *(undefined8 *)(param_1 + 0xa8) = 0;
  *(undefined8 *)(param_1 + 0xa6) = 0;
  *(undefined8 *)(param_1 + 0xa1) = 0;
  *(undefined8 *)(param_1 + 0x9f) = 0;
  *(undefined8 *)(param_1 + 0xa5) = 0;
  *(undefined8 *)(param_1 + 0xa3) = 0;
  *(undefined8 *)(param_1 + 0x9d) = 0;
  *(undefined8 *)(param_1 + 0x9b) = 0;
  *(undefined4 **)(param_1 + 0xaa) = param_1 + 0x9c;
  *(undefined4 **)(param_1 + 0xac) = param_1 + 0xae;
  *(undefined8 *)(param_1 + 0xb0) = 0;
  *(undefined8 *)(param_1 + 0xae) = 0;
  param_1[0xb2] = 0x42ff0000;
  *(undefined8 *)(param_1 + 0xc0) = 0;
  *(undefined8 *)(param_1 + 0xbe) = 0;
  *(undefined8 *)(param_1 + 0xb9) = 0;
  *(undefined8 *)(param_1 + 0xb7) = 0;
  *(undefined8 *)(param_1 + 0xbd) = 0;
  *(undefined8 *)(param_1 + 0xbb) = 0;
  *(undefined8 *)(param_1 + 0xb5) = 0;
  *(undefined8 *)(param_1 + 0xb3) = 0;
  *(undefined4 **)(param_1 + 0xc2) = param_1 + 0xb4;
  *(undefined4 **)(param_1 + 0xc4) = param_1 + 0xc6;
  *(undefined8 *)(param_1 + 200) = 0;
  *(undefined8 *)(param_1 + 0xc6) = 0;
  param_1[0xca] = 0x42ff0000;
  *(undefined8 *)(param_1 + 0xd8) = 0;
  *(undefined8 *)(param_1 + 0xd6) = 0;
  *(undefined8 *)(param_1 + 0xd1) = 0;
  *(undefined8 *)(param_1 + 0xcf) = 0;
  *(undefined8 *)(param_1 + 0xd5) = 0;
  *(undefined8 *)(param_1 + 0xd3) = 0;
  *(undefined8 *)(param_1 + 0xcd) = 0;
  *(undefined8 *)(param_1 + 0xcb) = 0;
  *(undefined4 **)(param_1 + 0xda) = param_1 + 0xcc;
  *(undefined4 **)(param_1 + 0xdc) = param_1 + 0xde;
  *(undefined8 *)(param_1 + 0xee) = 0;
  *(undefined8 *)(param_1 + 0xe8) = 0;
  *(undefined8 *)(param_1 + 0xe6) = 0;
  *(undefined8 *)(param_1 + 0xec) = 0;
  *(undefined8 *)(param_1 + 0xea) = 0;
  *(undefined8 *)(param_1 + 0xe0) = 0;
  *(undefined8 *)(param_1 + 0xde) = 0;
  *(undefined8 *)(param_1 + 0xe4) = 0;
  *(undefined8 *)(param_1 + 0xe2) = 0;
  FUN_1095ca448();
  return param_1;
}



/* Entry: 1095ca448; end: 1095cab2b;  */

undefined4 * FUN_1095ca448(undefined4 *param_1,undefined4 *param_2)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  char cVar4;
  bool bVar5;
  long lVar6;
  undefined8 *puVar7;
  long lVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  
  if (param_1 == param_2) {
    return param_1;
  }
  *(undefined8 *)(param_1 + 2) = *(undefined8 *)(param_2 + 2);
  *param_1 = *param_2;
  *(undefined2 *)(param_1 + 4) = *(undefined2 *)(param_2 + 4);
  uVar11 = *(undefined8 *)(param_2 + 8);
  uVar10 = *(undefined8 *)(param_2 + 6);
  uVar12 = *(undefined8 *)(param_2 + 10);
  *(undefined8 *)(param_1 + 0xc) = *(undefined8 *)(param_2 + 0xc);
  *(undefined8 *)(param_1 + 10) = uVar12;
  *(undefined8 *)(param_1 + 8) = uVar11;
  *(undefined8 *)(param_1 + 6) = uVar10;
  uVar11 = *(undefined8 *)(param_2 + 0x10);
  uVar10 = *(undefined8 *)(param_2 + 0xe);
  uVar13 = *(undefined8 *)(param_2 + 0x14);
  uVar12 = *(undefined8 *)(param_2 + 0x12);
  uVar15 = *(undefined8 *)(param_2 + 0x18);
  uVar14 = *(undefined8 *)(param_2 + 0x16);
  uVar16 = *(undefined8 *)(param_2 + 0x1a);
  *(undefined8 *)(param_1 + 0x1c) = *(undefined8 *)(param_2 + 0x1c);
  *(undefined8 *)(param_1 + 0x1a) = uVar16;
  *(undefined8 *)(param_1 + 0x18) = uVar15;
  *(undefined8 *)(param_1 + 0x16) = uVar14;
  *(undefined8 *)(param_1 + 0x14) = uVar13;
  *(undefined8 *)(param_1 + 0x12) = uVar12;
  *(undefined8 *)(param_1 + 0x10) = uVar11;
  *(undefined8 *)(param_1 + 0xe) = uVar10;
  uVar11 = *(undefined8 *)(param_2 + 0x20);
  uVar10 = *(undefined8 *)(param_2 + 0x1e);
  uVar13 = *(undefined8 *)(param_2 + 0x24);
  uVar12 = *(undefined8 *)(param_2 + 0x22);
  uVar15 = *(undefined8 *)(param_2 + 0x28);
  uVar14 = *(undefined8 *)(param_2 + 0x26);
  *(undefined8 *)(param_1 + 0x2a) = *(undefined8 *)(param_2 + 0x2a);
  *(undefined8 *)(param_1 + 0x28) = uVar15;
  *(undefined8 *)(param_1 + 0x26) = uVar14;
  *(undefined8 *)(param_1 + 0x24) = uVar13;
  *(undefined8 *)(param_1 + 0x22) = uVar12;
  *(undefined8 *)(param_1 + 0x20) = uVar11;
  *(undefined8 *)(param_1 + 0x1e) = uVar10;
  uVar10 = *(undefined8 *)(param_2 + 0x2c);
  uVar12 = *(undefined8 *)(param_2 + 0x32);
  uVar11 = *(undefined8 *)(param_2 + 0x30);
  *(undefined8 *)(param_1 + 0x2e) = *(undefined8 *)(param_2 + 0x2e);
  *(undefined8 *)(param_1 + 0x2c) = uVar10;
  *(undefined8 *)(param_1 + 0x32) = uVar12;
  *(undefined8 *)(param_1 + 0x30) = uVar11;
  uVar11 = *(undefined8 *)(param_2 + 0x36);
  uVar10 = *(undefined8 *)(param_2 + 0x34);
  uVar13 = *(undefined8 *)(param_2 + 0x3a);
  uVar12 = *(undefined8 *)(param_2 + 0x38);
  uVar14 = *(undefined8 *)(param_2 + 0x3c);
  uVar16 = *(undefined8 *)(param_2 + 0x42);
  uVar15 = *(undefined8 *)(param_2 + 0x40);
  *(undefined8 *)(param_1 + 0x3e) = *(undefined8 *)(param_2 + 0x3e);
  *(undefined8 *)(param_1 + 0x3c) = uVar14;
  *(undefined8 *)(param_1 + 0x42) = uVar16;
  *(undefined8 *)(param_1 + 0x40) = uVar15;
  *(undefined8 *)(param_1 + 0x36) = uVar11;
  *(undefined8 *)(param_1 + 0x34) = uVar10;
  *(undefined8 *)(param_1 + 0x3a) = uVar13;
  *(undefined8 *)(param_1 + 0x38) = uVar12;
  uVar11 = *(undefined8 *)(param_2 + 0x46);
  uVar10 = *(undefined8 *)(param_2 + 0x44);
  uVar13 = *(undefined8 *)(param_2 + 0x4a);
  uVar12 = *(undefined8 *)(param_2 + 0x48);
  uVar15 = *(undefined8 *)(param_2 + 0x4e);
  uVar14 = *(undefined8 *)(param_2 + 0x4c);
  *(undefined8 *)(param_1 + 0x50) = *(undefined8 *)(param_2 + 0x50);
  *(undefined8 *)(param_1 + 0x4a) = uVar13;
  *(undefined8 *)(param_1 + 0x48) = uVar12;
  *(undefined8 *)(param_1 + 0x4e) = uVar15;
  *(undefined8 *)(param_1 + 0x4c) = uVar14;
  *(undefined8 *)(param_1 + 0x46) = uVar11;
  *(undefined8 *)(param_1 + 0x44) = uVar10;
  uVar11 = *(undefined8 *)(param_2 + 0xe4);
  uVar10 = *(undefined8 *)(param_2 + 0xe2);
  *(undefined8 *)(param_1 + 0xe6) = *(undefined8 *)(param_2 + 0xe6);
  *(undefined8 *)(param_1 + 0xe4) = uVar11;
  *(undefined8 *)(param_1 + 0xe2) = uVar10;
  uVar11 = *(undefined8 *)(param_2 + 0xea);
  uVar10 = *(undefined8 *)(param_2 + 0xe8);
  *(undefined8 *)(param_1 + 0xec) = *(undefined8 *)(param_2 + 0xec);
  *(undefined8 *)(param_1 + 0xea) = uVar11;
  *(undefined8 *)(param_1 + 0xe8) = uVar10;
  *(undefined8 *)(param_1 + 0xee) = *(undefined8 *)(param_2 + 0xee);
  if (*(long *)(param_2 + 0x60) != 0) {
    piVar1 = (int *)(*(long *)(param_2 + 0x60) + 0x14);
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = *piVar1 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  puVar2 = param_1 + 0x52;
  if (*(long *)(param_1 + 0x60) != 0) {
    piVar1 = (int *)(*(long *)(param_1 + 0x60) + 0x14);
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
      func_0x000109a848d4(puVar2);
    }
  }
  *(undefined8 *)(param_1 + 0x60) = 0;
  *(undefined8 *)(param_1 + 0x58) = 0;
  *(undefined8 *)(param_1 + 0x56) = 0;
  *(undefined8 *)(param_1 + 0x5c) = 0;
  *(undefined8 *)(param_1 + 0x5a) = 0;
  if ((int)param_1[0x53] < 1) {
    *puVar2 = param_2[0x52];
LAB_1095ca5d0:
    if (2 < (int)param_2[0x53]) goto LAB_1095ca604;
    param_1[0x53] = param_2[0x53];
    *(undefined8 *)(param_1 + 0x54) = *(undefined8 *)(param_2 + 0x54);
    puVar7 = *(undefined8 **)(param_2 + 100);
    puVar9 = *(undefined8 **)(param_1 + 100);
    *puVar9 = *puVar7;
    puVar9[1] = puVar7[1];
  }
  else {
    lVar6 = 0;
    lVar8 = *(long *)(param_1 + 0x62);
    do {
      *(undefined4 *)(lVar8 + lVar6 * 4) = 0;
      lVar6 = lVar6 + 1;
    } while (lVar6 < (int)param_1[0x53]);
    *puVar2 = param_2[0x52];
    if ((int)param_1[0x53] < 3) goto LAB_1095ca5d0;
LAB_1095ca604:
    func_0x000109a84868(puVar2);
  }
  *(undefined8 *)(param_1 + 0x56) = *(undefined8 *)(param_2 + 0x56);
  uVar10 = *(undefined8 *)(param_2 + 0x58);
  *(undefined8 *)(param_1 + 0x5a) = *(undefined8 *)(param_2 + 0x5a);
  *(undefined8 *)(param_1 + 0x58) = uVar10;
  uVar10 = *(undefined8 *)(param_2 + 0x5c);
  *(undefined8 *)(param_1 + 0x5e) = *(undefined8 *)(param_2 + 0x5e);
  *(undefined8 *)(param_1 + 0x5c) = uVar10;
  *(undefined8 *)(param_1 + 0x60) = *(undefined8 *)(param_2 + 0x60);
  if (*(long *)(param_2 + 0x78) != 0) {
    piVar1 = (int *)(*(long *)(param_2 + 0x78) + 0x14);
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = *piVar1 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  puVar2 = param_1 + 0x6a;
  if (*(long *)(param_1 + 0x78) != 0) {
    piVar1 = (int *)(*(long *)(param_1 + 0x78) + 0x14);
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
      func_0x000109a848d4(puVar2);
    }
  }
  *(undefined8 *)(param_1 + 0x78) = 0;
  *(undefined8 *)(param_1 + 0x70) = 0;
  *(undefined8 *)(param_1 + 0x6e) = 0;
  *(undefined8 *)(param_1 + 0x74) = 0;
  *(undefined8 *)(param_1 + 0x72) = 0;
  if ((int)param_1[0x6b] < 1) {
    *puVar2 = param_2[0x6a];
LAB_1095ca6cc:
    if (2 < (int)param_2[0x6b]) goto LAB_1095ca700;
    param_1[0x6b] = param_2[0x6b];
    *(undefined8 *)(param_1 + 0x6c) = *(undefined8 *)(param_2 + 0x6c);
    puVar7 = *(undefined8 **)(param_2 + 0x7c);
    puVar9 = *(undefined8 **)(param_1 + 0x7c);
    *puVar9 = *puVar7;
    puVar9[1] = puVar7[1];
  }
  else {
    lVar6 = 0;
    lVar8 = *(long *)(param_1 + 0x7a);
    do {
      *(undefined4 *)(lVar8 + lVar6 * 4) = 0;
      lVar6 = lVar6 + 1;
    } while (lVar6 < (int)param_1[0x6b]);
    *puVar2 = param_2[0x6a];
    if ((int)param_1[0x6b] < 3) goto LAB_1095ca6cc;
LAB_1095ca700:
    func_0x000109a84868(puVar2);
  }
  *(undefined8 *)(param_1 + 0x6e) = *(undefined8 *)(param_2 + 0x6e);
  uVar10 = *(undefined8 *)(param_2 + 0x70);
  *(undefined8 *)(param_1 + 0x72) = *(undefined8 *)(param_2 + 0x72);
  *(undefined8 *)(param_1 + 0x70) = uVar10;
  uVar10 = *(undefined8 *)(param_2 + 0x74);
  *(undefined8 *)(param_1 + 0x76) = *(undefined8 *)(param_2 + 0x76);
  *(undefined8 *)(param_1 + 0x74) = uVar10;
  *(undefined8 *)(param_1 + 0x78) = *(undefined8 *)(param_2 + 0x78);
  if (*(long *)(param_2 + 0x90) != 0) {
    piVar1 = (int *)(*(long *)(param_2 + 0x90) + 0x14);
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = *piVar1 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  puVar2 = param_1 + 0x82;
  if (*(long *)(param_1 + 0x90) != 0) {
    piVar1 = (int *)(*(long *)(param_1 + 0x90) + 0x14);
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
      func_0x000109a848d4(puVar2);
    }
  }
  *(undefined8 *)(param_1 + 0x90) = 0;
  *(undefined8 *)(param_1 + 0x88) = 0;
  *(undefined8 *)(param_1 + 0x86) = 0;
  *(undefined8 *)(param_1 + 0x8c) = 0;
  *(undefined8 *)(param_1 + 0x8a) = 0;
  if ((int)param_1[0x83] < 1) {
    *puVar2 = param_2[0x82];
LAB_1095ca7c8:
    if (2 < (int)param_2[0x83]) goto LAB_1095ca7fc;
    param_1[0x83] = param_2[0x83];
    *(undefined8 *)(param_1 + 0x84) = *(undefined8 *)(param_2 + 0x84);
    puVar7 = *(undefined8 **)(param_2 + 0x94);
    puVar9 = *(undefined8 **)(param_1 + 0x94);
    *puVar9 = *puVar7;
    puVar9[1] = puVar7[1];
  }
  else {
    lVar6 = 0;
    lVar8 = *(long *)(param_1 + 0x92);
    do {
      *(undefined4 *)(lVar8 + lVar6 * 4) = 0;
      lVar6 = lVar6 + 1;
    } while (lVar6 < (int)param_1[0x83]);
    *puVar2 = param_2[0x82];
    if ((int)param_1[0x83] < 3) goto LAB_1095ca7c8;
LAB_1095ca7fc:
    func_0x000109a84868(puVar2);
  }
  *(undefined8 *)(param_1 + 0x86) = *(undefined8 *)(param_2 + 0x86);
  uVar10 = *(undefined8 *)(param_2 + 0x88);
  *(undefined8 *)(param_1 + 0x8a) = *(undefined8 *)(param_2 + 0x8a);
  *(undefined8 *)(param_1 + 0x88) = uVar10;
  uVar10 = *(undefined8 *)(param_2 + 0x8c);
  *(undefined8 *)(param_1 + 0x8e) = *(undefined8 *)(param_2 + 0x8e);
  *(undefined8 *)(param_1 + 0x8c) = uVar10;
  *(undefined8 *)(param_1 + 0x90) = *(undefined8 *)(param_2 + 0x90);
  if (*(long *)(param_2 + 0xa8) != 0) {
    piVar1 = (int *)(*(long *)(param_2 + 0xa8) + 0x14);
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = *piVar1 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  puVar2 = param_1 + 0x9a;
  if (*(long *)(param_1 + 0xa8) != 0) {
    piVar1 = (int *)(*(long *)(param_1 + 0xa8) + 0x14);
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
      func_0x000109a848d4(puVar2);
    }
  }
  *(undefined8 *)(param_1 + 0xa8) = 0;
  *(undefined8 *)(param_1 + 0xa0) = 0;
  *(undefined8 *)(param_1 + 0x9e) = 0;
  *(undefined8 *)(param_1 + 0xa4) = 0;
  *(undefined8 *)(param_1 + 0xa2) = 0;
  if ((int)param_1[0x9b] < 1) {
    *puVar2 = param_2[0x9a];
LAB_1095ca8c4:
    if (2 < (int)param_2[0x9b]) goto LAB_1095ca8f8;
    param_1[0x9b] = param_2[0x9b];
    *(undefined8 *)(param_1 + 0x9c) = *(undefined8 *)(param_2 + 0x9c);
    puVar7 = *(undefined8 **)(param_2 + 0xac);
    puVar9 = *(undefined8 **)(param_1 + 0xac);
    *puVar9 = *puVar7;
    puVar9[1] = puVar7[1];
  }
  else {
    lVar6 = 0;
    lVar8 = *(long *)(param_1 + 0xaa);
    do {
      *(undefined4 *)(lVar8 + lVar6 * 4) = 0;
      lVar6 = lVar6 + 1;
    } while (lVar6 < (int)param_1[0x9b]);
    *puVar2 = param_2[0x9a];
    if ((int)param_1[0x9b] < 3) goto LAB_1095ca8c4;
LAB_1095ca8f8:
    func_0x000109a84868(puVar2);
  }
  *(undefined8 *)(param_1 + 0x9e) = *(undefined8 *)(param_2 + 0x9e);
  uVar10 = *(undefined8 *)(param_2 + 0xa0);
  *(undefined8 *)(param_1 + 0xa2) = *(undefined8 *)(param_2 + 0xa2);
  *(undefined8 *)(param_1 + 0xa0) = uVar10;
  uVar10 = *(undefined8 *)(param_2 + 0xa4);
  *(undefined8 *)(param_1 + 0xa6) = *(undefined8 *)(param_2 + 0xa6);
  *(undefined8 *)(param_1 + 0xa4) = uVar10;
  *(undefined8 *)(param_1 + 0xa8) = *(undefined8 *)(param_2 + 0xa8);
  if (*(long *)(param_2 + 0xc0) != 0) {
    piVar1 = (int *)(*(long *)(param_2 + 0xc0) + 0x14);
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = *piVar1 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  puVar2 = param_1 + 0xb2;
  if (*(long *)(param_1 + 0xc0) != 0) {
    piVar1 = (int *)(*(long *)(param_1 + 0xc0) + 0x14);
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
      func_0x000109a848d4(puVar2);
    }
  }
  *(undefined8 *)(param_1 + 0xc0) = 0;
  *(undefined8 *)(param_1 + 0xb8) = 0;
  *(undefined8 *)(param_1 + 0xb6) = 0;
  *(undefined8 *)(param_1 + 0xbc) = 0;
  *(undefined8 *)(param_1 + 0xba) = 0;
  if ((int)param_1[0xb3] < 1) {
    *puVar2 = param_2[0xb2];
LAB_1095ca9c0:
    if (2 < (int)param_2[0xb3]) goto LAB_1095ca9f4;
    param_1[0xb3] = param_2[0xb3];
    *(undefined8 *)(param_1 + 0xb4) = *(undefined8 *)(param_2 + 0xb4);
    puVar7 = *(undefined8 **)(param_2 + 0xc4);
    puVar9 = *(undefined8 **)(param_1 + 0xc4);
    *puVar9 = *puVar7;
    puVar9[1] = puVar7[1];
  }
  else {
    lVar6 = 0;
    lVar8 = *(long *)(param_1 + 0xc2);
    do {
      *(undefined4 *)(lVar8 + lVar6 * 4) = 0;
      lVar6 = lVar6 + 1;
    } while (lVar6 < (int)param_1[0xb3]);
    *puVar2 = param_2[0xb2];
    if ((int)param_1[0xb3] < 3) goto LAB_1095ca9c0;
LAB_1095ca9f4:
    func_0x000109a84868(puVar2);
  }
  *(undefined8 *)(param_1 + 0xb6) = *(undefined8 *)(param_2 + 0xb6);
  uVar10 = *(undefined8 *)(param_2 + 0xb8);
  *(undefined8 *)(param_1 + 0xba) = *(undefined8 *)(param_2 + 0xba);
  *(undefined8 *)(param_1 + 0xb8) = uVar10;
  uVar10 = *(undefined8 *)(param_2 + 0xbc);
  *(undefined8 *)(param_1 + 0xbe) = *(undefined8 *)(param_2 + 0xbe);
  *(undefined8 *)(param_1 + 0xbc) = uVar10;
  *(undefined8 *)(param_1 + 0xc0) = *(undefined8 *)(param_2 + 0xc0);
  if (*(long *)(param_2 + 0xd8) != 0) {
    piVar1 = (int *)(*(long *)(param_2 + 0xd8) + 0x14);
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = *piVar1 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  puVar2 = param_1 + 0xca;
  if (*(long *)(param_1 + 0xd8) != 0) {
    piVar1 = (int *)(*(long *)(param_1 + 0xd8) + 0x14);
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
      func_0x000109a848d4(puVar2);
    }
  }
  *(undefined8 *)(param_1 + 0xd8) = 0;
  *(undefined8 *)(param_1 + 0xd0) = 0;
  *(undefined8 *)(param_1 + 0xce) = 0;
  *(undefined8 *)(param_1 + 0xd4) = 0;
  *(undefined8 *)(param_1 + 0xd2) = 0;
  if ((int)param_1[0xcb] < 1) {
    *puVar2 = param_2[0xca];
LAB_1095caabc:
    if ((int)param_2[0xcb] < 3) {
      param_1[0xcb] = param_2[0xcb];
      *(undefined8 *)(param_1 + 0xcc) = *(undefined8 *)(param_2 + 0xcc);
      puVar7 = *(undefined8 **)(param_2 + 0xdc);
      puVar9 = *(undefined8 **)(param_1 + 0xdc);
      *puVar9 = *puVar7;
      puVar9[1] = puVar7[1];
      goto LAB_1095caaf8;
    }
  }
  else {
    lVar6 = 0;
    lVar8 = *(long *)(param_1 + 0xda);
    do {
      *(undefined4 *)(lVar8 + lVar6 * 4) = 0;
      lVar6 = lVar6 + 1;
    } while (lVar6 < (int)param_1[0xcb]);
    *puVar2 = param_2[0xca];
    if ((int)param_1[0xcb] < 3) goto LAB_1095caabc;
  }
  func_0x000109a84868(puVar2);
LAB_1095caaf8:
  *(undefined8 *)(param_1 + 0xce) = *(undefined8 *)(param_2 + 0xce);
  uVar10 = *(undefined8 *)(param_2 + 0xd0);
  *(undefined8 *)(param_1 + 0xd2) = *(undefined8 *)(param_2 + 0xd2);
  *(undefined8 *)(param_1 + 0xd0) = uVar10;
  uVar10 = *(undefined8 *)(param_2 + 0xd4);
  *(undefined8 *)(param_1 + 0xd6) = *(undefined8 *)(param_2 + 0xd6);
  *(undefined8 *)(param_1 + 0xd4) = uVar10;
  *(undefined8 *)(param_1 + 0xd8) = *(undefined8 *)(param_2 + 0xd8);
  return param_1;
}



/* Entry: 1095cab2c; end: 1095cb527;  */

void FUN_1095cab2c(int *param_1,int *param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  undefined8 *puVar6;
  long lVar7;
  int *piVar8;
  int *piVar9;
  int *piVar10;
  int *piVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined4 uStack_200;
  int iStack_1fc;
  undefined8 uStack_1f8;
  undefined4 uStack_1f0;
  undefined4 uStack_1ec;
  undefined4 uStack_1e8;
  undefined4 uStack_1e4;
  undefined4 uStack_1e0;
  undefined4 uStack_1dc;
  undefined4 uStack_1d8;
  undefined4 uStack_1d4;
  undefined4 uStack_1d0;
  undefined4 uStack_1cc;
  undefined8 uStack_1c8;
  ulong uStack_1c0;
  undefined8 *puStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined4 auStack_a0 [2];
  undefined4 *puStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined4 auStack_80 [2];
  undefined8 *puStack_78;
  undefined8 uStack_70;
  
  FUN_1095cb528(param_1);
  *(undefined8 *)(param_1 + 2) = *(undefined8 *)(param_2 + 2);
  *param_1 = *param_2;
  *(short *)(param_1 + 4) = (short)param_2[4];
  uVar12 = *(undefined8 *)(param_2 + 0x1e);
  *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(param_1 + 0x1e) = uVar12;
  uVar12 = *(undefined8 *)(param_2 + 0x22);
  *(undefined8 *)(param_1 + 0x24) = *(undefined8 *)(param_2 + 0x24);
  *(undefined8 *)(param_1 + 0x22) = uVar12;
  uVar12 = *(undefined8 *)(param_2 + 0x26);
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_1 + 0x26) = uVar12;
  *(undefined8 *)(param_1 + 0x2a) = *(undefined8 *)(param_2 + 0x2a);
  uVar12 = *(undefined8 *)(param_2 + 0xe);
  *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_2 + 0x10);
  *(undefined8 *)(param_1 + 0xe) = uVar12;
  uVar12 = *(undefined8 *)(param_2 + 0x12);
  *(undefined8 *)(param_1 + 0x14) = *(undefined8 *)(param_2 + 0x14);
  *(undefined8 *)(param_1 + 0x12) = uVar12;
  uVar12 = *(undefined8 *)(param_2 + 0x16);
  *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_2 + 0x18);
  *(undefined8 *)(param_1 + 0x16) = uVar12;
  uVar12 = *(undefined8 *)(param_2 + 0x1a);
  *(undefined8 *)(param_1 + 0x1c) = *(undefined8 *)(param_2 + 0x1c);
  *(undefined8 *)(param_1 + 0x1a) = uVar12;
  uVar12 = *(undefined8 *)(param_2 + 6);
  *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
  *(undefined8 *)(param_1 + 6) = uVar12;
  uVar12 = *(undefined8 *)(param_2 + 10);
  *(undefined8 *)(param_1 + 0xc) = *(undefined8 *)(param_2 + 0xc);
  *(undefined8 *)(param_1 + 10) = uVar12;
  uVar12 = *(undefined8 *)(param_2 + 0x44);
  uVar14 = *(undefined8 *)(param_2 + 0x4a);
  uVar13 = *(undefined8 *)(param_2 + 0x48);
  *(undefined8 *)(param_1 + 0x46) = *(undefined8 *)(param_2 + 0x46);
  *(undefined8 *)(param_1 + 0x44) = uVar12;
  *(undefined8 *)(param_1 + 0x4a) = uVar14;
  *(undefined8 *)(param_1 + 0x48) = uVar13;
  uVar12 = *(undefined8 *)(param_2 + 0x4c);
  *(undefined8 *)(param_1 + 0x4e) = *(undefined8 *)(param_2 + 0x4e);
  *(undefined8 *)(param_1 + 0x4c) = uVar12;
  *(undefined8 *)(param_1 + 0x50) = *(undefined8 *)(param_2 + 0x50);
  uVar12 = *(undefined8 *)(param_2 + 0x34);
  uVar14 = *(undefined8 *)(param_2 + 0x3a);
  uVar13 = *(undefined8 *)(param_2 + 0x38);
  *(undefined8 *)(param_1 + 0x36) = *(undefined8 *)(param_2 + 0x36);
  *(undefined8 *)(param_1 + 0x34) = uVar12;
  *(undefined8 *)(param_1 + 0x3a) = uVar14;
  *(undefined8 *)(param_1 + 0x38) = uVar13;
  uVar12 = *(undefined8 *)(param_2 + 0x3c);
  uVar14 = *(undefined8 *)(param_2 + 0x42);
  uVar13 = *(undefined8 *)(param_2 + 0x40);
  *(undefined8 *)(param_1 + 0x3e) = *(undefined8 *)(param_2 + 0x3e);
  *(undefined8 *)(param_1 + 0x3c) = uVar12;
  *(undefined8 *)(param_1 + 0x42) = uVar14;
  *(undefined8 *)(param_1 + 0x40) = uVar13;
  uVar12 = *(undefined8 *)(param_2 + 0x2c);
  uVar14 = *(undefined8 *)(param_2 + 0x32);
  uVar13 = *(undefined8 *)(param_2 + 0x30);
  *(undefined8 *)(param_1 + 0x2e) = *(undefined8 *)(param_2 + 0x2e);
  *(undefined8 *)(param_1 + 0x2c) = uVar12;
  *(undefined8 *)(param_1 + 0x32) = uVar14;
  *(undefined8 *)(param_1 + 0x30) = uVar13;
  uVar12 = *(undefined8 *)(param_2 + 0xe2);
  *(undefined8 *)(param_1 + 0xe4) = *(undefined8 *)(param_2 + 0xe4);
  *(undefined8 *)(param_1 + 0xe2) = uVar12;
  *(undefined8 *)(param_1 + 0xe6) = *(undefined8 *)(param_2 + 0xe6);
  uVar12 = *(undefined8 *)(param_2 + 0xe8);
  *(undefined8 *)(param_1 + 0xea) = *(undefined8 *)(param_2 + 0xea);
  *(undefined8 *)(param_1 + 0xe8) = uVar12;
  *(undefined8 *)(param_1 + 0xec) = *(undefined8 *)(param_2 + 0xec);
  *(undefined8 *)(param_1 + 0xee) = *(undefined8 *)(param_2 + 0xee);
  uStack_200 = 0x42ff0000;
  uStack_1c0 = (ulong)&uStack_200 | 8;
  uStack_1f8._4_4_ = 0;
  uStack_1f0 = 0;
  iStack_1fc = 0;
  uStack_1f8._0_4_ = 0;
  uStack_1e4 = 0;
  uStack_1e0 = 0;
  uStack_1ec = 0;
  uStack_1e8 = 0;
  uStack_1d4 = 0;
  uStack_1dc = 0;
  uStack_1d8 = 0;
  uStack_1c8 = 0;
  uStack_1d0 = 0;
  uStack_1cc = 0;
  uStack_1b0 = 0;
  uStack_1a8 = 0;
  auStack_80[0] = 0x2010000;
  uStack_70 = 0;
  puStack_1b8 = &uStack_1b0;
  puStack_78 = (undefined8 *)&uStack_200;
  FUN_109a479a0(param_2 + 0x52,auStack_80);
  if (*(long *)(param_1 + 0x60) != 0) {
    piVar1 = (int *)(*(long *)(param_1 + 0x60) + 0x14);
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
      func_0x000109a848d4(param_1 + 0x52);
    }
  }
  if (0 < param_1[0x53]) {
    lVar5 = 0;
    lVar7 = *(long *)(param_1 + 0x62);
    do {
      *(undefined4 *)(lVar7 + lVar5 * 4) = 0;
      lVar5 = lVar5 + 1;
    } while (lVar5 < param_1[0x53]);
  }
  *(ulong *)(param_1 + 0x54) = CONCAT44(uStack_1f8._4_4_,(undefined4)uStack_1f8);
  *(ulong *)(param_1 + 0x52) = CONCAT44(iStack_1fc,uStack_200);
  *(ulong *)(param_1 + 0x58) = CONCAT44(uStack_1e4,uStack_1e8);
  *(ulong *)(param_1 + 0x56) = CONCAT44(uStack_1ec,uStack_1f0);
  *(ulong *)(param_1 + 0x5c) = CONCAT44(uStack_1d4,uStack_1d8);
  *(ulong *)(param_1 + 0x5a) = CONCAT44(uStack_1dc,uStack_1e0);
  *(undefined8 *)(param_1 + 0x60) = uStack_1c8;
  *(ulong *)(param_1 + 0x5e) = CONCAT44(uStack_1cc,uStack_1d0);
  piVar8 = *(int **)(param_1 + 100);
  piVar1 = param_1 + 0x66;
  if (piVar8 != piVar1) {
    if (piVar8 != (int *)0x0) {
      _free(*(undefined8 *)(piVar8 + -2));
    }
    *(int **)(param_1 + 0x62) = param_1 + 0x54;
    *(int **)(param_1 + 100) = piVar1;
    piVar8 = piVar1;
  }
  if (iStack_1fc < 3) {
    puVar6 = (undefined8 *)((ulong)&uStack_200 | 4);
    *(undefined8 *)piVar8 = *puStack_1b8;
    *(undefined8 *)(piVar8 + 2) = puStack_1b8[1];
    uStack_200 = 0x42ff0000;
    puVar6[1] = 0;
    *puVar6 = 0;
    puVar6[3] = 0;
    puVar6[2] = 0;
    puVar6[5] = 0;
    puVar6[4] = 0;
    *(undefined8 *)((long)puVar6 + 0x34) = 0;
    *(undefined8 *)((long)puVar6 + 0x2c) = 0;
    if (puStack_1b8 != &uStack_1b0) {
      _free(puStack_1b8[-1]);
    }
  }
  else {
    *(ulong *)(param_1 + 0x62) = uStack_1c0;
    *(undefined8 **)(param_1 + 100) = puStack_1b8;
  }
  uStack_200 = 0x42ff0000;
  uStack_1f8._4_4_ = 0;
  uStack_1f0 = 0;
  iStack_1fc = 0;
  uStack_1f8._0_4_ = 0;
  uStack_1c0 = (ulong)&uStack_200 | 8;
  uStack_1e4 = 0;
  uStack_1e0 = 0;
  uStack_1ec = 0;
  uStack_1e8 = 0;
  uStack_1d4 = 0;
  uStack_1dc = 0;
  uStack_1d8 = 0;
  uStack_1c8 = 0;
  uStack_1d0 = 0;
  uStack_1cc = 0;
  uStack_1b0 = 0;
  uStack_1a8 = 0;
  auStack_80[0] = 0x2010000;
  uStack_70 = 0;
  puStack_1b8 = &uStack_1b0;
  puStack_78 = (undefined8 *)&uStack_200;
  FUN_109a479a0(param_2 + 0x6a,auStack_80);
  if (*(long *)(param_1 + 0x78) != 0) {
    piVar1 = (int *)(*(long *)(param_1 + 0x78) + 0x14);
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
      func_0x000109a848d4(param_1 + 0x6a);
    }
  }
  if (0 < param_1[0x6b]) {
    lVar5 = 0;
    lVar7 = *(long *)(param_1 + 0x7a);
    do {
      *(undefined4 *)(lVar7 + lVar5 * 4) = 0;
      lVar5 = lVar5 + 1;
    } while (lVar5 < param_1[0x6b]);
  }
  *(ulong *)(param_1 + 0x6c) = CONCAT44(uStack_1f8._4_4_,(undefined4)uStack_1f8);
  *(ulong *)(param_1 + 0x6a) = CONCAT44(iStack_1fc,uStack_200);
  *(ulong *)(param_1 + 0x70) = CONCAT44(uStack_1e4,uStack_1e8);
  *(ulong *)(param_1 + 0x6e) = CONCAT44(uStack_1ec,uStack_1f0);
  *(ulong *)(param_1 + 0x74) = CONCAT44(uStack_1d4,uStack_1d8);
  *(ulong *)(param_1 + 0x72) = CONCAT44(uStack_1dc,uStack_1e0);
  *(undefined8 *)(param_1 + 0x78) = uStack_1c8;
  *(ulong *)(param_1 + 0x76) = CONCAT44(uStack_1cc,uStack_1d0);
  piVar8 = *(int **)(param_1 + 0x7c);
  piVar1 = param_1 + 0x7e;
  if (piVar8 != piVar1) {
    if (piVar8 != (int *)0x0) {
      _free(*(undefined8 *)(piVar8 + -2));
    }
    *(int **)(param_1 + 0x7a) = param_1 + 0x6c;
    *(int **)(param_1 + 0x7c) = piVar1;
    piVar8 = piVar1;
  }
  if (iStack_1fc < 3) {
    puVar6 = (undefined8 *)((ulong)&uStack_200 | 4);
    *(undefined8 *)piVar8 = *puStack_1b8;
    *(undefined8 *)(piVar8 + 2) = puStack_1b8[1];
    uStack_200 = 0x42ff0000;
    puVar6[1] = 0;
    *puVar6 = 0;
    puVar6[3] = 0;
    puVar6[2] = 0;
    puVar6[5] = 0;
    puVar6[4] = 0;
    *(undefined8 *)((long)puVar6 + 0x34) = 0;
    *(undefined8 *)((long)puVar6 + 0x2c) = 0;
    if (puStack_1b8 != &uStack_1b0) {
      _free(puStack_1b8[-1]);
    }
  }
  else {
    *(ulong *)(param_1 + 0x7a) = uStack_1c0;
    *(undefined8 **)(param_1 + 0x7c) = puStack_1b8;
  }
  uStack_200 = 0x42ff0000;
  uStack_1f8._4_4_ = 0;
  uStack_1f0 = 0;
  iStack_1fc = 0;
  uStack_1f8._0_4_ = 0;
  uStack_1c0 = (ulong)&uStack_200 | 8;
  uStack_1e4 = 0;
  uStack_1e0 = 0;
  uStack_1ec = 0;
  uStack_1e8 = 0;
  uStack_1d4 = 0;
  uStack_1dc = 0;
  uStack_1d8 = 0;
  uStack_1c8 = 0;
  uStack_1d0 = 0;
  uStack_1cc = 0;
  uStack_1b0 = 0;
  uStack_1a8 = 0;
  auStack_80[0] = 0x2010000;
  uStack_70 = 0;
  puStack_1b8 = &uStack_1b0;
  puStack_78 = (undefined8 *)&uStack_200;
  FUN_109a479a0(param_2 + 0x82,auStack_80);
  piVar1 = param_1 + 0x82;
  if (*(long *)(param_1 + 0x90) != 0) {
    piVar8 = (int *)(*(long *)(param_1 + 0x90) + 0x14);
    do {
      iVar2 = *piVar8;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar8,0x10);
      if (bVar4) {
        *piVar8 = iVar2 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar2 + -1 == 0) {
      func_0x000109a848d4(piVar1);
    }
  }
  if (0 < param_1[0x83]) {
    lVar5 = 0;
    lVar7 = *(long *)(param_1 + 0x92);
    do {
      *(undefined4 *)(lVar7 + lVar5 * 4) = 0;
      lVar5 = lVar5 + 1;
    } while (lVar5 < param_1[0x83]);
  }
  *(ulong *)(param_1 + 0x84) = CONCAT44(uStack_1f8._4_4_,(undefined4)uStack_1f8);
  *(ulong *)(param_1 + 0x82) = CONCAT44(iStack_1fc,uStack_200);
  *(ulong *)(param_1 + 0x88) = CONCAT44(uStack_1e4,uStack_1e8);
  *(ulong *)(param_1 + 0x86) = CONCAT44(uStack_1ec,uStack_1f0);
  *(ulong *)(param_1 + 0x8c) = CONCAT44(uStack_1d4,uStack_1d8);
  *(ulong *)(param_1 + 0x8a) = CONCAT44(uStack_1dc,uStack_1e0);
  *(undefined8 *)(param_1 + 0x90) = uStack_1c8;
  *(ulong *)(param_1 + 0x8e) = CONCAT44(uStack_1cc,uStack_1d0);
  piVar9 = *(int **)(param_1 + 0x94);
  piVar8 = param_1 + 0x96;
  if (piVar9 != piVar8) {
    if (piVar9 != (int *)0x0) {
      _free(*(undefined8 *)(piVar9 + -2));
    }
    *(int **)(param_1 + 0x94) = piVar8;
    *(int **)(param_1 + 0x92) = param_1 + 0x84;
    piVar9 = piVar8;
  }
  if (iStack_1fc < 3) {
    puVar6 = (undefined8 *)((ulong)&uStack_200 | 4);
    *(undefined8 *)piVar9 = *puStack_1b8;
    *(undefined8 *)(piVar9 + 2) = puStack_1b8[1];
    uStack_200 = 0x42ff0000;
    puVar6[1] = 0;
    *puVar6 = 0;
    puVar6[3] = 0;
    puVar6[2] = 0;
    puVar6[5] = 0;
    puVar6[4] = 0;
    *(undefined8 *)((long)puVar6 + 0x34) = 0;
    *(undefined8 *)((long)puVar6 + 0x2c) = 0;
    if (puStack_1b8 != &uStack_1b0) {
      _free(puStack_1b8[-1]);
    }
  }
  else {
    *(undefined8 **)(param_1 + 0x94) = puStack_1b8;
    *(ulong *)(param_1 + 0x92) = uStack_1c0;
  }
  uStack_200 = 0x42ff0000;
  uStack_1f8._4_4_ = 0;
  uStack_1f0 = 0;
  iStack_1fc = 0;
  uStack_1f8._0_4_ = 0;
  uStack_1c0 = (ulong)&uStack_200 | 8;
  uStack_1e4 = 0;
  uStack_1e0 = 0;
  uStack_1ec = 0;
  uStack_1e8 = 0;
  uStack_1d4 = 0;
  uStack_1dc = 0;
  uStack_1d8 = 0;
  uStack_1c8 = 0;
  uStack_1d0 = 0;
  uStack_1cc = 0;
  uStack_1b0 = 0;
  uStack_1a8 = 0;
  auStack_80[0] = 0x2010000;
  uStack_70 = 0;
  puStack_1b8 = &uStack_1b0;
  puStack_78 = (undefined8 *)&uStack_200;
  FUN_109a479a0(param_2 + 0x9a,auStack_80);
  piVar8 = param_1 + 0x9a;
  if (*(long *)(param_1 + 0xa8) != 0) {
    piVar9 = (int *)(*(long *)(param_1 + 0xa8) + 0x14);
    do {
      iVar2 = *piVar9;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar9,0x10);
      if (bVar4) {
        *piVar9 = iVar2 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar2 + -1 == 0) {
      func_0x000109a848d4(piVar8);
    }
  }
  if (0 < param_1[0x9b]) {
    lVar5 = 0;
    lVar7 = *(long *)(param_1 + 0xaa);
    do {
      *(undefined4 *)(lVar7 + lVar5 * 4) = 0;
      lVar5 = lVar5 + 1;
    } while (lVar5 < param_1[0x9b]);
  }
  *(ulong *)(param_1 + 0x9c) = CONCAT44(uStack_1f8._4_4_,(undefined4)uStack_1f8);
  *(ulong *)(param_1 + 0x9a) = CONCAT44(iStack_1fc,uStack_200);
  *(ulong *)(param_1 + 0xa0) = CONCAT44(uStack_1e4,uStack_1e8);
  *(ulong *)(param_1 + 0x9e) = CONCAT44(uStack_1ec,uStack_1f0);
  *(ulong *)(param_1 + 0xa4) = CONCAT44(uStack_1d4,uStack_1d8);
  *(ulong *)(param_1 + 0xa2) = CONCAT44(uStack_1dc,uStack_1e0);
  *(undefined8 *)(param_1 + 0xa8) = uStack_1c8;
  *(ulong *)(param_1 + 0xa6) = CONCAT44(uStack_1cc,uStack_1d0);
  piVar10 = *(int **)(param_1 + 0xac);
  piVar9 = param_1 + 0xae;
  if (piVar10 != piVar9) {
    if (piVar10 != (int *)0x0) {
      _free(*(undefined8 *)(piVar10 + -2));
    }
    *(int **)(param_1 + 0xac) = piVar9;
    *(int **)(param_1 + 0xaa) = param_1 + 0x9c;
    piVar10 = piVar9;
  }
  if (iStack_1fc < 3) {
    puVar6 = (undefined8 *)((ulong)&uStack_200 | 4);
    *(undefined8 *)piVar10 = *puStack_1b8;
    *(undefined8 *)(piVar10 + 2) = puStack_1b8[1];
    uStack_200 = 0x42ff0000;
    puVar6[1] = 0;
    *puVar6 = 0;
    puVar6[3] = 0;
    puVar6[2] = 0;
    puVar6[5] = 0;
    puVar6[4] = 0;
    *(undefined8 *)((long)puVar6 + 0x34) = 0;
    *(undefined8 *)((long)puVar6 + 0x2c) = 0;
    if (puStack_1b8 != &uStack_1b0) {
      _free(puStack_1b8[-1]);
    }
  }
  else {
    *(undefined8 **)(param_1 + 0xac) = puStack_1b8;
    *(ulong *)(param_1 + 0xaa) = uStack_1c0;
  }
  uStack_200 = 0x42ff0000;
  uStack_1f8._4_4_ = 0;
  uStack_1f0 = 0;
  iStack_1fc = 0;
  uStack_1f8._0_4_ = 0;
  uStack_1c0 = (ulong)&uStack_200 | 8;
  uStack_1e4 = 0;
  uStack_1e0 = 0;
  uStack_1ec = 0;
  uStack_1e8 = 0;
  uStack_1d4 = 0;
  uStack_1dc = 0;
  uStack_1d8 = 0;
  uStack_1c8 = 0;
  uStack_1d0 = 0;
  uStack_1cc = 0;
  uStack_1b0 = 0;
  uStack_1a8 = 0;
  auStack_80[0] = 0x2010000;
  uStack_70 = 0;
  puStack_1b8 = &uStack_1b0;
  puStack_78 = (undefined8 *)&uStack_200;
  FUN_109a479a0(param_2 + 0xb2,auStack_80);
  piVar9 = param_1 + 0xb2;
  if (*(long *)(param_1 + 0xc0) != 0) {
    piVar10 = (int *)(*(long *)(param_1 + 0xc0) + 0x14);
    do {
      iVar2 = *piVar10;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar10,0x10);
      if (bVar4) {
        *piVar10 = iVar2 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar2 + -1 == 0) {
      func_0x000109a848d4(piVar9);
    }
  }
  if (0 < param_1[0xb3]) {
    lVar5 = 0;
    lVar7 = *(long *)(param_1 + 0xc2);
    do {
      *(undefined4 *)(lVar7 + lVar5 * 4) = 0;
      lVar5 = lVar5 + 1;
    } while (lVar5 < param_1[0xb3]);
  }
  *(ulong *)(param_1 + 0xb4) = CONCAT44(uStack_1f8._4_4_,(undefined4)uStack_1f8);
  *(ulong *)(param_1 + 0xb2) = CONCAT44(iStack_1fc,uStack_200);
  *(ulong *)(param_1 + 0xb8) = CONCAT44(uStack_1e4,uStack_1e8);
  *(ulong *)(param_1 + 0xb6) = CONCAT44(uStack_1ec,uStack_1f0);
  *(ulong *)(param_1 + 0xbc) = CONCAT44(uStack_1d4,uStack_1d8);
  *(ulong *)(param_1 + 0xba) = CONCAT44(uStack_1dc,uStack_1e0);
  *(undefined8 *)(param_1 + 0xc0) = uStack_1c8;
  *(ulong *)(param_1 + 0xbe) = CONCAT44(uStack_1cc,uStack_1d0);
  piVar11 = *(int **)(param_1 + 0xc4);
  piVar10 = param_1 + 0xc6;
  if (piVar11 != piVar10) {
    if (piVar11 != (int *)0x0) {
      _free(*(undefined8 *)(piVar11 + -2));
    }
    *(int **)(param_1 + 0xc4) = piVar10;
    *(int **)(param_1 + 0xc2) = param_1 + 0xb4;
    piVar11 = piVar10;
  }
  if (iStack_1fc < 3) {
    puVar6 = (undefined8 *)((ulong)&uStack_200 | 4);
    *(undefined8 *)piVar11 = *puStack_1b8;
    *(undefined8 *)(piVar11 + 2) = puStack_1b8[1];
    uStack_200 = 0x42ff0000;
    puVar6[1] = 0;
    *puVar6 = 0;
    puVar6[3] = 0;
    puVar6[2] = 0;
    puVar6[5] = 0;
    puVar6[4] = 0;
    *(undefined8 *)((long)puVar6 + 0x34) = 0;
    *(undefined8 *)((long)puVar6 + 0x2c) = 0;
    if (puStack_1b8 != &uStack_1b0) {
      _free(puStack_1b8[-1]);
    }
  }
  else {
    *(undefined8 **)(param_1 + 0xc4) = puStack_1b8;
    *(ulong *)(param_1 + 0xc2) = uStack_1c0;
  }
  uStack_200 = 0x42ff0000;
  uStack_1f8._4_4_ = 0;
  uStack_1f0 = 0;
  iStack_1fc = 0;
  uStack_1f8._0_4_ = 0;
  uStack_1c0 = (ulong)&uStack_200 | 8;
  uStack_1e4 = 0;
  uStack_1e0 = 0;
  uStack_1ec = 0;
  uStack_1e8 = 0;
  uStack_1d4 = 0;
  uStack_1dc = 0;
  uStack_1d8 = 0;
  uStack_1c8 = 0;
  uStack_1d0 = 0;
  uStack_1cc = 0;
  uStack_1b0 = 0;
  uStack_1a8 = 0;
  auStack_80[0] = 0x2010000;
  uStack_70 = 0;
  puStack_1b8 = &uStack_1b0;
  puStack_78 = (undefined8 *)&uStack_200;
  FUN_109a479a0(param_2 + 0xca,auStack_80);
  if (*(long *)(param_1 + 0xd8) != 0) {
    piVar10 = (int *)(*(long *)(param_1 + 0xd8) + 0x14);
    do {
      iVar2 = *piVar10;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar10,0x10);
      if (bVar4) {
        *piVar10 = iVar2 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar2 + -1 == 0) {
      func_0x000109a848d4(param_1 + 0xca);
    }
  }
  if (0 < param_1[0xcb]) {
    lVar5 = 0;
    lVar7 = *(long *)(param_1 + 0xda);
    do {
      *(undefined4 *)(lVar7 + lVar5 * 4) = 0;
      lVar5 = lVar5 + 1;
    } while (lVar5 < param_1[0xcb]);
  }
  *(ulong *)(param_1 + 0xcc) = CONCAT44(uStack_1f8._4_4_,(undefined4)uStack_1f8);
  *(ulong *)(param_1 + 0xca) = CONCAT44(iStack_1fc,uStack_200);
  *(ulong *)(param_1 + 0xd0) = CONCAT44(uStack_1e4,uStack_1e8);
  *(ulong *)(param_1 + 0xce) = CONCAT44(uStack_1ec,uStack_1f0);
  *(ulong *)(param_1 + 0xd4) = CONCAT44(uStack_1d4,uStack_1d8);
  *(ulong *)(param_1 + 0xd2) = CONCAT44(uStack_1dc,uStack_1e0);
  *(undefined8 *)(param_1 + 0xd8) = uStack_1c8;
  *(ulong *)(param_1 + 0xd6) = CONCAT44(uStack_1cc,uStack_1d0);
  piVar11 = *(int **)(param_1 + 0xdc);
  piVar10 = param_1 + 0xde;
  if (piVar11 != piVar10) {
    if (piVar11 != (int *)0x0) {
      _free(*(undefined8 *)(piVar11 + -2));
    }
    *(int **)(param_1 + 0xdc) = piVar10;
    *(int **)(param_1 + 0xda) = param_1 + 0xcc;
    piVar11 = piVar10;
  }
  if (iStack_1fc < 3) {
    puVar6 = (undefined8 *)((ulong)&uStack_200 | 4);
    *(undefined8 *)piVar11 = *puStack_1b8;
    *(undefined8 *)(piVar11 + 2) = puStack_1b8[1];
    uStack_200 = 0x42ff0000;
    puVar6[1] = 0;
    *puVar6 = 0;
    puVar6[3] = 0;
    puVar6[2] = 0;
    puVar6[5] = 0;
    puVar6[4] = 0;
    *(undefined8 *)((long)puVar6 + 0x34) = 0;
    *(undefined8 *)((long)puVar6 + 0x2c) = 0;
    if (puStack_1b8 != &uStack_1b0) {
      _free(puStack_1b8[-1]);
    }
  }
  else {
    *(undefined8 **)(param_1 + 0xdc) = puStack_1b8;
    *(ulong *)(param_1 + 0xda) = uStack_1c0;
  }
  if (param_3 != -1) {
    *param_1 = param_3;
  }
  uStack_200 = 0x2010000;
  uStack_1f0 = 0;
  uStack_1ec = 0;
  uStack_1f8 = piVar1;
  FUN_109a41858(0x3ff0000000000000,0,piVar1,&uStack_200,2);
  uStack_200 = 0x2010000;
  uStack_1f0 = 0;
  uStack_1ec = 0;
  uStack_1f8 = piVar8;
  FUN_109a41858(0x4030000000000000,0,piVar8,&uStack_200,0xffffffff);
  uStack_88 = 0x3ff0000000000000;
  auStack_80[0] = 0xc1020006;
  puStack_78 = &uStack_88;
  uStack_70 = 0x100000001;
  FUN_109a7e508(&uStack_200,0x3ff0000000000000,piVar8);
  uStack_90 = 0;
  auStack_a0[0] = 0xc1060000;
  puStack_98 = &uStack_200;
  FUN_109a48a40(piVar8,auStack_80,auStack_a0);
  FUN_10918eb6c(&uStack_200);
  uStack_200 = 0x2010000;
  uStack_1f0 = 0;
  uStack_1ec = 0;
  uStack_1f8 = piVar8;
  FUN_109a41858(0x3ff0000000000000,0,piVar8,&uStack_200,2);
  uStack_200 = 0x2010000;
  uStack_1f0 = 0;
  uStack_1ec = 0;
  uStack_1f8 = piVar9;
  FUN_109a41858(0x402e000000000000,0,piVar9,&uStack_200,0xffffffff);
  uStack_200 = 0x2010000;
  uStack_1f0 = 0;
  uStack_1ec = 0;
  uStack_1f8 = piVar9;
  FUN_109a41858(0x3ff0000000000000,0,piVar9,&uStack_200,0);
  return;
}



/* Entry: 1095cb528; end: 1095cb6cb;  */

void FUN_1095cb528(undefined4 *param_1)

{
  undefined8 uVar1;
  
  *param_1 = 0;
  *(undefined8 *)(param_1 + 2) = 0;
  *(undefined2 *)(param_1 + 4) = 2;
  *(undefined8 *)(param_1 + 6) = 0;
  *(undefined8 *)(param_1 + 10) = 0;
  *(undefined8 *)(param_1 + 8) = 0;
  param_1[0xc] = 0x3f800000;
  *(undefined8 *)(param_1 + 0xf) = 0;
  *(undefined8 *)(param_1 + 0xd) = 0;
  param_1[0x11] = 0x3f800000;
  *(undefined8 *)(param_1 + 0x14) = 0;
  *(undefined8 *)(param_1 + 0x12) = 0;
  param_1[0x16] = 0x3f800000;
  *(undefined8 *)(param_1 + 0x19) = 0;
  *(undefined8 *)(param_1 + 0x17) = 0;
  uVar1 = NEON_fmov(0x3f800000,4);
  *(undefined8 *)(param_1 + 0x1b) = uVar1;
  *(undefined8 *)(param_1 + 0x1f) = 0;
  *(undefined8 *)(param_1 + 0x1d) = 0;
  param_1[0x21] = 0x3f800000;
  *(undefined8 *)(param_1 + 0x24) = 0;
  *(undefined8 *)(param_1 + 0x22) = 0;
  param_1[0x26] = 0x3f800000;
  *(undefined8 *)(param_1 + 0x29) = 0;
  *(undefined8 *)(param_1 + 0x27) = 0;
  param_1[0x2b] = 0x3f800000;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x2e) = 0;
  *(undefined8 *)(param_1 + 0x2c) = 0;
  param_1[0x32] = 0x3f800000;
  *(undefined8 *)(param_1 + 0x35) = 0;
  *(undefined8 *)(param_1 + 0x33) = 0;
  param_1[0x37] = 0x3f800000;
  *(undefined8 *)(param_1 + 0x3a) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  param_1[0x3c] = 0x3f800000;
  *(undefined8 *)(param_1 + 0x3f) = 0;
  *(undefined8 *)(param_1 + 0x3d) = 0;
  *(undefined8 *)(param_1 + 0x41) = 0x3f8000003f800000;
  *(undefined8 *)(param_1 + 0x45) = 0;
  *(undefined8 *)(param_1 + 0x43) = 0;
  param_1[0x47] = 0x3f800000;
  *(undefined8 *)(param_1 + 0x4a) = 0;
  *(undefined8 *)(param_1 + 0x48) = 0;
  param_1[0x4c] = 0x3f800000;
  *(undefined8 *)(param_1 + 0x4f) = 0;
  *(undefined8 *)(param_1 + 0x4d) = 0;
  *(undefined8 *)(param_1 + 0x51) = 0x42ff00003f800000;
  *(undefined8 *)(param_1 + 0x60) = 0;
  *(undefined8 *)(param_1 + 0x5e) = 0;
  *(undefined8 *)(param_1 + 0x59) = 0;
  *(undefined8 *)(param_1 + 0x57) = 0;
  *(undefined8 *)(param_1 + 0x5d) = 0;
  *(undefined8 *)(param_1 + 0x5b) = 0;
  *(undefined8 *)(param_1 + 0x55) = 0;
  *(undefined8 *)(param_1 + 0x53) = 0;
  *(undefined4 **)(param_1 + 0x62) = param_1 + 0x54;
  *(undefined4 **)(param_1 + 100) = param_1 + 0x66;
  *(undefined8 *)(param_1 + 0x68) = 0;
  *(undefined8 *)(param_1 + 0x66) = 0;
  param_1[0x6a] = 0x42ff0000;
  *(undefined8 *)(param_1 + 0x78) = 0;
  *(undefined8 *)(param_1 + 0x76) = 0;
  *(undefined8 *)(param_1 + 0x71) = 0;
  *(undefined8 *)(param_1 + 0x6f) = 0;
  *(undefined8 *)(param_1 + 0x75) = 0;
  *(undefined8 *)(param_1 + 0x73) = 0;
  *(undefined8 *)(param_1 + 0x6d) = 0;
  *(undefined8 *)(param_1 + 0x6b) = 0;
  *(undefined4 **)(param_1 + 0x7a) = param_1 + 0x6c;
  *(undefined4 **)(param_1 + 0x7c) = param_1 + 0x7e;
  *(undefined8 *)(param_1 + 0x80) = 0;
  *(undefined8 *)(param_1 + 0x7e) = 0;
  param_1[0x82] = 0x42ff0000;
  *(undefined8 *)(param_1 + 0x90) = 0;
  *(undefined8 *)(param_1 + 0x8e) = 0;
  *(undefined8 *)(param_1 + 0x89) = 0;
  *(undefined8 *)(param_1 + 0x87) = 0;
  *(undefined8 *)(param_1 + 0x8d) = 0;
  *(undefined8 *)(param_1 + 0x8b) = 0;
  *(undefined8 *)(param_1 + 0x85) = 0;
  *(undefined8 *)(param_1 + 0x83) = 0;
  *(undefined4 **)(param_1 + 0x92) = param_1 + 0x84;
  *(undefined4 **)(param_1 + 0x94) = param_1 + 0x96;
  *(undefined8 *)(param_1 + 0x98) = 0;
  *(undefined8 *)(param_1 + 0x96) = 0;
  param_1[0x9a] = 0x42ff0000;
  *(undefined8 *)(param_1 + 0xa8) = 0;
  *(undefined8 *)(param_1 + 0xa6) = 0;
  *(undefined8 *)(param_1 + 0xa1) = 0;
  *(undefined8 *)(param_1 + 0x9f) = 0;
  *(undefined8 *)(param_1 + 0xa5) = 0;
  *(undefined8 *)(param_1 + 0xa3) = 0;
  *(undefined8 *)(param_1 + 0x9d) = 0;
  *(undefined8 *)(param_1 + 0x9b) = 0;
  *(undefined4 **)(param_1 + 0xaa) = param_1 + 0x9c;
  *(undefined4 **)(param_1 + 0xac) = param_1 + 0xae;
  *(undefined8 *)(param_1 + 0xb0) = 0;
  *(undefined8 *)(param_1 + 0xae) = 0;
  param_1[0xb2] = 0x42ff0000;
  *(undefined8 *)(param_1 + 0xc0) = 0;
  *(undefined8 *)(param_1 + 0xbe) = 0;
  *(undefined8 *)(param_1 + 0xb9) = 0;
  *(undefined8 *)(param_1 + 0xb7) = 0;
  *(undefined8 *)(param_1 + 0xbd) = 0;
  *(undefined8 *)(param_1 + 0xbb) = 0;
  *(undefined8 *)(param_1 + 0xb5) = 0;
  *(undefined8 *)(param_1 + 0xb3) = 0;
  *(undefined4 **)(param_1 + 0xc2) = param_1 + 0xb4;
  *(undefined4 **)(param_1 + 0xc4) = param_1 + 0xc6;
  *(undefined8 *)(param_1 + 200) = 0;
  *(undefined8 *)(param_1 + 0xc6) = 0;
  param_1[0xca] = 0x42ff0000;
  *(undefined8 *)(param_1 + 0xd8) = 0;
  *(undefined8 *)(param_1 + 0xd6) = 0;
  *(undefined8 *)(param_1 + 0xd1) = 0;
  *(undefined8 *)(param_1 + 0xcf) = 0;
  *(undefined8 *)(param_1 + 0xd5) = 0;
  *(undefined8 *)(param_1 + 0xd3) = 0;
  *(undefined8 *)(param_1 + 0xcd) = 0;
  *(undefined8 *)(param_1 + 0xcb) = 0;
  *(undefined4 **)(param_1 + 0xda) = param_1 + 0xcc;
  *(undefined4 **)(param_1 + 0xdc) = param_1 + 0xde;
  *(undefined8 *)(param_1 + 0xee) = 0;
  *(undefined8 *)(param_1 + 0xe8) = 0;
  *(undefined8 *)(param_1 + 0xe6) = 0;
  *(undefined8 *)(param_1 + 0xec) = 0;
  *(undefined8 *)(param_1 + 0xea) = 0;
  *(undefined8 *)(param_1 + 0xe0) = 0;
  *(undefined8 *)(param_1 + 0xde) = 0;
  *(undefined8 *)(param_1 + 0xe4) = 0;
  *(undefined8 *)(param_1 + 0xe2) = 0;
  return;
}



/* Entry: 1095cb6cc; end: 1095cb8cb;  */

void FUN_1095cb6cc(undefined1 *param_1,undefined1 *param_2,undefined8 param_3)

{
  ulong uVar1;
  long lVar2;
  int iVar3;
  ulong uVar4;
  undefined8 *puVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  undefined8 auStack_1d0 [2];
  char cStack_1b9;
  undefined8 auStack_1b8 [2];
  char cStack_1a1;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
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
  undefined8 uStack_68;
  ulong uStack_60;
  
  puVar7 = param_1 + 1;
  *param_1 = *param_2;
  iVar3 = 0;
  _vsnprintf(0,0,param_3,&stack0x00000000);
  uVar1 = (long)iVar3 + 1;
  uVar4 = uVar1;
  __Znam(uVar1);
  _vsnprintf();
  _bzero(puVar7,0x400);
  lVar2 = 0x400;
  if (uVar1 < 0x400) {
    lVar2 = (long)iVar3 + 1;
  }
  _strncpy(puVar7,uVar4,lVar2);
  __ZdaPv(uVar4);
  if (0 < iRam00000001132dfb08) {
    uStack_60 = 0;
    uStack_78 = 0;
    uStack_80 = 0;
    uStack_68 = 0;
    uStack_70 = 0;
    uStack_98 = 0;
    uStack_a0 = 0;
    uStack_88 = 0;
    uStack_90 = 0;
    uStack_b8 = 0;
    uStack_c0 = 0;
    uStack_a8 = 0;
    uStack_b0 = 0;
    uStack_d8 = 0;
    uStack_e0 = 0;
    uStack_c8 = 0;
    uStack_d0 = 0;
    uStack_f8 = 0;
    uStack_100 = 0;
    uStack_e8 = 0;
    uStack_f0 = 0;
    uStack_118 = 0;
    uStack_120 = 0;
    uStack_108 = 0;
    uStack_110 = 0;
    uStack_138 = 0;
    uStack_140 = 0;
    uStack_128 = 0;
    uStack_130 = 0;
    uStack_158 = 0;
    uStack_160 = 0;
    uStack_148 = 0;
    uStack_150 = 0;
    uStack_178 = 0;
    uStack_180 = 0;
    uStack_168 = 0;
    uStack_170 = 0;
    uStack_198 = 0;
    uStack_1a0 = 0;
    uStack_188 = 0;
    uStack_190 = 0;
    FUN_10926db08(&uStack_1a0);
    uStack_98 = CONCAT44(uStack_98._4_4_,3);
    uStack_88 = 0;
    uStack_90 = 0;
    uStack_78 = 0;
    uStack_80 = 0;
    uStack_68 = 0;
    uStack_70 = 0;
    uStack_60 = uStack_60 & 0xffffffff00000000;
    func_0x000107c31940(auStack_1b8,&UNK_10f575ef3);
    func_0x000107c31940(auStack_1d0,&UNK_10f575f68);
    puVar5 = &uStack_1a0;
    FUN_109671348(puVar5,1,auStack_1b8,auStack_1d0,0x21);
    FUN_1092b4db8();
    __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEi();
    FUN_1092b4db8();
    puVar6 = puVar7;
    _strlen(puVar7);
    FUN_1092b4db8(puVar5,puVar7,puVar6);
    if (cStack_1b9 < '\0') {
      __ZdlPv(auStack_1d0[0]);
    }
    if (cStack_1a1 < '\0') {
      __ZdlPv(auStack_1b8[0]);
    }
    FUN_109671170(&uStack_1a0);
  }
  return;
}



/* Entry: 1095cb8cc; end: 1095cbb97;  */

bool FUN_1095cb8cc(long *param_1,long param_2)

{
  long *plVar1;
  long lVar2;
  undefined8 auStack_1b0 [2];
  char cStack_199;
  undefined8 auStack_198 [2];
  char cStack_181;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
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
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  ulong uStack_40;
  
  *(undefined4 *)(param_2 + 0x1364) = 0x3f8ccccd;
  plVar1 = (long *)*param_1;
  if (-1 < *(char *)((long)param_1 + 0x17)) {
    plVar1 = param_1;
  }
  FUN_109670c98();
  lVar2 = 0x11382a450;
  func_0x000109670d0c(0x11382a450,plVar1,&UNK_10f5173d2);
  if (lVar2 == 0) {
    if (iRam00000001132dfb08 < 1) goto LAB_1095cbb2c;
    uStack_40 = 0;
    uStack_58 = 0;
    uStack_60 = 0;
    uStack_48 = 0;
    uStack_50 = 0;
    uStack_78 = 0;
    uStack_80 = 0;
    uStack_68 = 0;
    uStack_70 = 0;
    uStack_98 = 0;
    uStack_a0 = 0;
    uStack_88 = 0;
    uStack_90 = 0;
    uStack_b8 = 0;
    uStack_c0 = 0;
    uStack_a8 = 0;
    uStack_b0 = 0;
    uStack_d8 = 0;
    uStack_e0 = 0;
    uStack_c8 = 0;
    uStack_d0 = 0;
    uStack_f8 = 0;
    uStack_100 = 0;
    uStack_e8 = 0;
    uStack_f0 = 0;
    uStack_118 = 0;
    uStack_120 = 0;
    uStack_108 = 0;
    uStack_110 = 0;
    uStack_138 = 0;
    uStack_140 = 0;
    uStack_128 = 0;
    uStack_130 = 0;
    uStack_158 = 0;
    uStack_160 = 0;
    uStack_148 = 0;
    uStack_150 = 0;
    uStack_178 = 0;
    uStack_180 = 0;
    uStack_168 = 0;
    uStack_170 = 0;
    FUN_10926db08(&uStack_180);
    uStack_78 = CONCAT44(uStack_78._4_4_,3);
    uStack_68 = 0;
    uStack_70 = 0;
    uStack_58 = 0;
    uStack_60 = 0;
    uStack_48 = 0;
    uStack_50 = 0;
    uStack_40 = uStack_40 & 0xffffffff00000000;
    func_0x000107c31940(auStack_198,&UNK_10f575f77);
    func_0x000107c31940(auStack_1b0,&UNK_10f575fef);
    FUN_109671348(&uStack_180,1,auStack_198,auStack_1b0,0x17);
    FUN_1092b4db8();
    FUN_1092b4db8();
    FUN_1092b4db8();
  }
  else {
    _fwrite(param_2 + 0x1364,0x400,1,lVar2);
    FUN_1095cc17c(param_2 + 0x1764,lVar2);
    _fclose(lVar2);
    if (iRam00000001132dfb08 < 5) goto LAB_1095cbb2c;
    uStack_40 = 0;
    uStack_58 = 0;
    uStack_60 = 0;
    uStack_48 = 0;
    uStack_50 = 0;
    uStack_78 = 0;
    uStack_80 = 0;
    uStack_68 = 0;
    uStack_70 = 0;
    uStack_98 = 0;
    uStack_a0 = 0;
    uStack_88 = 0;
    uStack_90 = 0;
    uStack_b8 = 0;
    uStack_c0 = 0;
    uStack_a8 = 0;
    uStack_b0 = 0;
    uStack_d8 = 0;
    uStack_e0 = 0;
    uStack_c8 = 0;
    uStack_d0 = 0;
    uStack_f8 = 0;
    uStack_100 = 0;
    uStack_e8 = 0;
    uStack_f0 = 0;
    uStack_118 = 0;
    uStack_120 = 0;
    uStack_108 = 0;
    uStack_110 = 0;
    uStack_138 = 0;
    uStack_140 = 0;
    uStack_128 = 0;
    uStack_130 = 0;
    uStack_158 = 0;
    uStack_160 = 0;
    uStack_148 = 0;
    uStack_150 = 0;
    uStack_178 = 0;
    uStack_180 = 0;
    uStack_168 = 0;
    uStack_170 = 0;
    FUN_10926db08(&uStack_180);
    uStack_78 = CONCAT44(uStack_78._4_4_,3);
    uStack_68 = 0;
    uStack_70 = 0;
    uStack_58 = 0;
    uStack_60 = 0;
    uStack_48 = 0;
    uStack_50 = 0;
    uStack_40 = uStack_40 & 0xffffffff00000000;
    func_0x000107c31940(auStack_198,&UNK_10f575f77);
    func_0x000107c31940(auStack_1b0,&UNK_10f575fef);
    FUN_109671348(&uStack_180,5,auStack_198,auStack_1b0,0x13);
    FUN_1092b4db8();
    FUN_1092b4db8();
    FUN_1092b4db8();
  }
  if (cStack_199 < '\0') {
    __ZdlPv(auStack_1b0[0]);
  }
  if (cStack_181 < '\0') {
    __ZdlPv(auStack_198[0]);
  }
  FUN_109671170(&uStack_180);
LAB_1095cbb2c:
  return lVar2 != 0;
}



/* Entry: 1095cbb98; end: 1095cc17b;  */

undefined8 FUN_1095cbb98(long *param_1,long param_2)

{
  float *pfVar1;
  long *plVar2;
  long lVar3;
  ulong uVar4;
  undefined8 auStack_1c0 [2];
  char cStack_1a9;
  undefined8 auStack_1a8 [2];
  char cStack_191;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
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
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  ulong uStack_50;
  
  plVar2 = (long *)*param_1;
  if (-1 < *(char *)((long)param_1 + 0x17)) {
    plVar2 = param_1;
  }
  FUN_109670c98();
  lVar3 = 0x11382a450;
  func_0x000109670d0c(0x11382a450,plVar2,&UNK_10f432965);
  pfVar1 = (float *)(param_2 + 0x1364);
  if (lVar3 == 0) {
    _bzero(pfVar1,0x400);
    if (iRam00000001132dfb08 < 5) {
      return 0;
    }
    uStack_50 = 0;
    uStack_68 = 0;
    uStack_70 = 0;
    uStack_58 = 0;
    uStack_60 = 0;
    uStack_88 = 0;
    uStack_90 = 0;
    uStack_78 = 0;
    uStack_80 = 0;
    uStack_a8 = 0;
    uStack_b0 = 0;
    uStack_98 = 0;
    uStack_a0 = 0;
    uStack_c8 = 0;
    uStack_d0 = 0;
    uStack_b8 = 0;
    uStack_c0 = 0;
    uStack_e8 = 0;
    uStack_f0 = 0;
    uStack_d8 = 0;
    uStack_e0 = 0;
    uStack_108 = 0;
    uStack_110 = 0;
    uStack_f8 = 0;
    uStack_100 = 0;
    uStack_128 = 0;
    uStack_130 = 0;
    uStack_118 = 0;
    uStack_120 = 0;
    uStack_148 = 0;
    uStack_150 = 0;
    uStack_138 = 0;
    uStack_140 = 0;
    uStack_168 = 0;
    uStack_170 = 0;
    uStack_158 = 0;
    uStack_160 = 0;
    uStack_188 = 0;
    uStack_190 = 0;
    uStack_178 = 0;
    uStack_180 = 0;
    FUN_10926db08(&uStack_190);
    uStack_88 = CONCAT44(uStack_88._4_4_,3);
    uStack_78 = 0;
    uStack_80 = 0;
    uStack_68 = 0;
    uStack_70 = 0;
    uStack_58 = 0;
    uStack_60 = 0;
    uStack_50 = uStack_50 & 0xffffffff00000000;
    func_0x000107c31940(auStack_1a8,&UNK_10f575f77);
    func_0x000107c31940(auStack_1c0,&UNK_10f576033);
    FUN_109671348(&uStack_190,5,auStack_1a8,auStack_1c0,0x3b);
    FUN_1092b4db8();
    FUN_1092b4db8();
    FUN_1092b4db8();
    if (cStack_1a9 < '\0') {
      __ZdlPv(auStack_1c0[0]);
    }
    if (cStack_191 < '\0') {
      __ZdlPv(auStack_1a8[0]);
    }
    FUN_109671170(&uStack_190);
    return 0;
  }
  _fread(pfVar1,0x400,1,lVar3);
  if (4 < iRam00000001132dfb08) {
    uStack_50 = 0;
    uStack_68 = 0;
    uStack_70 = 0;
    uStack_58 = 0;
    uStack_60 = 0;
    uStack_88 = 0;
    uStack_90 = 0;
    uStack_78 = 0;
    uStack_80 = 0;
    uStack_a8 = 0;
    uStack_b0 = 0;
    uStack_98 = 0;
    uStack_a0 = 0;
    uStack_c8 = 0;
    uStack_d0 = 0;
    uStack_b8 = 0;
    uStack_c0 = 0;
    uStack_e8 = 0;
    uStack_f0 = 0;
    uStack_d8 = 0;
    uStack_e0 = 0;
    uStack_108 = 0;
    uStack_110 = 0;
    uStack_f8 = 0;
    uStack_100 = 0;
    uStack_128 = 0;
    uStack_130 = 0;
    uStack_118 = 0;
    uStack_120 = 0;
    uStack_148 = 0;
    uStack_150 = 0;
    uStack_138 = 0;
    uStack_140 = 0;
    uStack_168 = 0;
    uStack_170 = 0;
    uStack_158 = 0;
    uStack_160 = 0;
    uStack_188 = 0;
    uStack_190 = 0;
    uStack_178 = 0;
    uStack_180 = 0;
    FUN_10926db08(&uStack_190);
    uStack_88 = CONCAT44(uStack_88._4_4_,3);
    uStack_78 = 0;
    uStack_80 = 0;
    uStack_68 = 0;
    uStack_70 = 0;
    uStack_58 = 0;
    uStack_60 = 0;
    uStack_50 = uStack_50 & 0xffffffff00000000;
    func_0x000107c31940(auStack_1a8,&UNK_10f575f77);
    func_0x000107c31940(auStack_1c0,&UNK_10f576033);
    FUN_109671348(&uStack_190,5,auStack_1a8,auStack_1c0,0x26);
    FUN_1092b4db8();
    __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEf();
    if (cStack_1a9 < '\0') {
      __ZdlPv(auStack_1c0[0]);
    }
    if (cStack_191 < '\0') {
      __ZdlPv(auStack_1a8[0]);
    }
    FUN_109671170(&uStack_190);
  }
  if (*pfVar1 == 1.1) {
    uVar4 = param_2 + 0x1764;
    FUN_1095cc2d0(uVar4,lVar3);
    if ((uVar4 & 1) != 0) {
      _fclose(lVar3);
      if (4 < iRam00000001132dfb08) {
        uStack_50 = 0;
        uStack_68 = 0;
        uStack_70 = 0;
        uStack_58 = 0;
        uStack_60 = 0;
        uStack_88 = 0;
        uStack_90 = 0;
        uStack_78 = 0;
        uStack_80 = 0;
        uStack_a8 = 0;
        uStack_b0 = 0;
        uStack_98 = 0;
        uStack_a0 = 0;
        uStack_c8 = 0;
        uStack_d0 = 0;
        uStack_b8 = 0;
        uStack_c0 = 0;
        uStack_e8 = 0;
        uStack_f0 = 0;
        uStack_d8 = 0;
        uStack_e0 = 0;
        uStack_108 = 0;
        uStack_110 = 0;
        uStack_f8 = 0;
        uStack_100 = 0;
        uStack_128 = 0;
        uStack_130 = 0;
        uStack_118 = 0;
        uStack_120 = 0;
        uStack_148 = 0;
        uStack_150 = 0;
        uStack_138 = 0;
        uStack_140 = 0;
        uStack_168 = 0;
        uStack_170 = 0;
        uStack_158 = 0;
        uStack_160 = 0;
        uStack_188 = 0;
        uStack_190 = 0;
        uStack_178 = 0;
        uStack_180 = 0;
        FUN_10926db08(&uStack_190);
        uStack_88 = CONCAT44(uStack_88._4_4_,3);
        uStack_78 = 0;
        uStack_80 = 0;
        uStack_68 = 0;
        uStack_70 = 0;
        uStack_58 = 0;
        uStack_60 = 0;
        uStack_50 = uStack_50 & 0xffffffff00000000;
        func_0x000107c31940(auStack_1a8,&UNK_10f575f77);
        func_0x000107c31940(auStack_1c0,&UNK_10f576033);
        FUN_109671348(&uStack_190,5,auStack_1a8,auStack_1c0,0x37);
        FUN_1092b4db8();
        FUN_1092b4db8();
        FUN_1092b4db8();
        if (cStack_1a9 < '\0') {
          __ZdlPv(auStack_1c0[0]);
        }
        if (cStack_191 < '\0') {
          __ZdlPv(auStack_1a8[0]);
        }
        FUN_109671170(&uStack_190);
      }
      return 1;
    }
    if (iRam00000001132dfb08 < 1) goto LAB_1095cc0e4;
    uStack_50 = 0;
    uStack_68 = 0;
    uStack_70 = 0;
    uStack_58 = 0;
    uStack_60 = 0;
    uStack_88 = 0;
    uStack_90 = 0;
    uStack_78 = 0;
    uStack_80 = 0;
    uStack_a8 = 0;
    uStack_b0 = 0;
    uStack_98 = 0;
    uStack_a0 = 0;
    uStack_c8 = 0;
    uStack_d0 = 0;
    uStack_b8 = 0;
    uStack_c0 = 0;
    uStack_e8 = 0;
    uStack_f0 = 0;
    uStack_d8 = 0;
    uStack_e0 = 0;
    uStack_108 = 0;
    uStack_110 = 0;
    uStack_f8 = 0;
    uStack_100 = 0;
    uStack_128 = 0;
    uStack_130 = 0;
    uStack_118 = 0;
    uStack_120 = 0;
    uStack_148 = 0;
    uStack_150 = 0;
    uStack_138 = 0;
    uStack_140 = 0;
    uStack_168 = 0;
    uStack_170 = 0;
    uStack_158 = 0;
    uStack_160 = 0;
    uStack_188 = 0;
    uStack_190 = 0;
    uStack_178 = 0;
    uStack_180 = 0;
    FUN_10926db08(&uStack_190);
    uStack_88 = CONCAT44(uStack_88._4_4_,3);
    uStack_78 = 0;
    uStack_80 = 0;
    uStack_68 = 0;
    uStack_70 = 0;
    uStack_58 = 0;
    uStack_60 = 0;
    uStack_50 = uStack_50 & 0xffffffff00000000;
    func_0x000107c31940(auStack_1a8,&UNK_10f575f77);
    func_0x000107c31940(auStack_1c0,&UNK_10f576033);
    FUN_109671348(&uStack_190,1,auStack_1a8,auStack_1c0,0x2f);
    FUN_1092b4db8();
    FUN_1092b4db8();
    FUN_1092b4db8();
  }
  else {
    if (iRam00000001132dfb08 < 1) goto LAB_1095cc0e4;
    uStack_50 = 0;
    uStack_68 = 0;
    uStack_70 = 0;
    uStack_58 = 0;
    uStack_60 = 0;
    uStack_88 = 0;
    uStack_90 = 0;
    uStack_78 = 0;
    uStack_80 = 0;
    uStack_a8 = 0;
    uStack_b0 = 0;
    uStack_98 = 0;
    uStack_a0 = 0;
    uStack_c8 = 0;
    uStack_d0 = 0;
    uStack_b8 = 0;
    uStack_c0 = 0;
    uStack_e8 = 0;
    uStack_f0 = 0;
    uStack_d8 = 0;
    uStack_e0 = 0;
    uStack_108 = 0;
    uStack_110 = 0;
    uStack_f8 = 0;
    uStack_100 = 0;
    uStack_128 = 0;
    uStack_130 = 0;
    uStack_118 = 0;
    uStack_120 = 0;
    uStack_148 = 0;
    uStack_150 = 0;
    uStack_138 = 0;
    uStack_140 = 0;
    uStack_168 = 0;
    uStack_170 = 0;
    uStack_158 = 0;
    uStack_160 = 0;
    uStack_188 = 0;
    uStack_190 = 0;
    uStack_178 = 0;
    uStack_180 = 0;
    FUN_10926db08(&uStack_190);
    uStack_88 = CONCAT44(uStack_88._4_4_,3);
    uStack_78 = 0;
    uStack_80 = 0;
    uStack_68 = 0;
    uStack_70 = 0;
    uStack_58 = 0;
    uStack_60 = 0;
    uStack_50 = uStack_50 & 0xffffffff00000000;
    func_0x000107c31940(auStack_1a8,&UNK_10f575f77);
    func_0x000107c31940(auStack_1c0,&UNK_10f576033);
    FUN_109671348(&uStack_190,1,auStack_1a8,auStack_1c0,0x29);
    FUN_1092b4db8();
    FUN_1092b4db8();
    FUN_1092b4db8();
  }
  if (cStack_1a9 < '\0') {
    __ZdlPv(auStack_1c0[0]);
  }
  if (cStack_191 < '\0') {
    __ZdlPv(auStack_1a8[0]);
  }
  FUN_109671170(&uStack_190);
LAB_1095cc0e4:
  _fclose(lVar3);
  return 0;
}



/* Entry: 1095cc17c; end: 1095cc2cf;  */

bool FUN_1095cc17c(undefined8 param_1,long param_2)

{
  undefined8 auStack_1a0 [2];
  char cStack_189;
  undefined8 auStack_188 [2];
  char cStack_171;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
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
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  ulong uStack_30;
  
  if (param_2 != 0) {
    _fwrite(param_1,0x100,1,param_2);
    if (4 < iRam00000001132dfb08) {
      uStack_30 = 0;
      uStack_48 = 0;
      uStack_50 = 0;
      uStack_38 = 0;
      uStack_40 = 0;
      uStack_68 = 0;
      uStack_70 = 0;
      uStack_58 = 0;
      uStack_60 = 0;
      uStack_88 = 0;
      uStack_90 = 0;
      uStack_78 = 0;
      uStack_80 = 0;
      uStack_a8 = 0;
      uStack_b0 = 0;
      uStack_98 = 0;
      uStack_a0 = 0;
      uStack_c8 = 0;
      uStack_d0 = 0;
      uStack_b8 = 0;
      uStack_c0 = 0;
      uStack_e8 = 0;
      uStack_f0 = 0;
      uStack_d8 = 0;
      uStack_e0 = 0;
      uStack_108 = 0;
      uStack_110 = 0;
      uStack_f8 = 0;
      uStack_100 = 0;
      uStack_128 = 0;
      uStack_130 = 0;
      uStack_118 = 0;
      uStack_120 = 0;
      uStack_148 = 0;
      uStack_150 = 0;
      uStack_138 = 0;
      uStack_140 = 0;
      uStack_168 = 0;
      uStack_170 = 0;
      uStack_158 = 0;
      uStack_160 = 0;
      FUN_10926db08(&uStack_170);
      uStack_68 = CONCAT44(uStack_68._4_4_,3);
      uStack_58 = 0;
      uStack_60 = 0;
      uStack_48 = 0;
      uStack_50 = 0;
      uStack_38 = 0;
      uStack_40 = 0;
      uStack_30 = uStack_30 & 0xffffffff00000000;
      func_0x000107c31940(auStack_188,&UNK_10f5760ce);
      func_0x000107c31940(auStack_1a0,&UNK_10f57614a);
      FUN_109671348(&uStack_170,5,auStack_188,auStack_1a0,0x7d);
      FUN_1092b4db8();
      if (cStack_189 < '\0') {
        __ZdlPv(auStack_1a0[0]);
      }
      if (cStack_171 < '\0') {
        __ZdlPv(auStack_188[0]);
      }
      FUN_109671170(&uStack_170);
    }
  }
  return param_2 != 0;
}



/* Entry: 1095cc2d0; end: 1095cc423;  */

bool FUN_1095cc2d0(undefined8 param_1,long param_2)

{
  undefined8 auStack_1a0 [2];
  char cStack_189;
  undefined8 auStack_188 [2];
  char cStack_171;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
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
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  ulong uStack_30;
  
  if (param_2 != 0) {
    _fread(param_1,0x100,1,param_2);
    if (4 < iRam00000001132dfb08) {
      uStack_30 = 0;
      uStack_48 = 0;
      uStack_50 = 0;
      uStack_38 = 0;
      uStack_40 = 0;
      uStack_68 = 0;
      uStack_70 = 0;
      uStack_58 = 0;
      uStack_60 = 0;
      uStack_88 = 0;
      uStack_90 = 0;
      uStack_78 = 0;
      uStack_80 = 0;
      uStack_a8 = 0;
      uStack_b0 = 0;
      uStack_98 = 0;
      uStack_a0 = 0;
      uStack_c8 = 0;
      uStack_d0 = 0;
      uStack_b8 = 0;
      uStack_c0 = 0;
      uStack_e8 = 0;
      uStack_f0 = 0;
      uStack_d8 = 0;
      uStack_e0 = 0;
      uStack_108 = 0;
      uStack_110 = 0;
      uStack_f8 = 0;
      uStack_100 = 0;
      uStack_128 = 0;
      uStack_130 = 0;
      uStack_118 = 0;
      uStack_120 = 0;
      uStack_148 = 0;
      uStack_150 = 0;
      uStack_138 = 0;
      uStack_140 = 0;
      uStack_168 = 0;
      uStack_170 = 0;
      uStack_158 = 0;
      uStack_160 = 0;
      FUN_10926db08(&uStack_170);
      uStack_68 = CONCAT44(uStack_68._4_4_,3);
      uStack_58 = 0;
      uStack_60 = 0;
      uStack_48 = 0;
      uStack_50 = 0;
      uStack_38 = 0;
      uStack_40 = 0;
      uStack_30 = uStack_30 & 0xffffffff00000000;
      func_0x000107c31940(auStack_188,&UNK_10f5760ce);
      func_0x000107c31940(auStack_1a0,&UNK_10f576155);
      FUN_109671348(&uStack_170,5,auStack_188,auStack_1a0,0x87);
      FUN_1092b4db8();
      if (cStack_189 < '\0') {
        __ZdlPv(auStack_1a0[0]);
      }
      if (cStack_171 < '\0') {
        __ZdlPv(auStack_188[0]);
      }
      FUN_109671170(&uStack_170);
    }
  }
  return param_2 != 0;
}



/* Entry: 1095cc424; end: 1095ceb6b;  */

void FUN_1095cc424(long param_1,int *param_2)

{
  uint *puVar1;
  uint uVar2;
  int iVar3;
  float fVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  uint3 uVar9;
  uint3 uVar10;
  int iVar11;
  byte bVar12;
  byte bVar13;
  byte bVar14;
  byte bVar15;
  byte bVar16;
  byte bVar17;
  byte bVar18;
  byte bVar19;
  byte bVar20;
  byte bVar21;
  byte bVar22;
  byte bVar23;
  byte bVar24;
  byte bVar25;
  byte bVar26;
  byte bVar27;
  byte bVar28;
  byte bVar29;
  byte bVar30;
  byte bVar31;
  byte bVar32;
  byte bVar33;
  byte bVar34;
  byte bVar35;
  byte bVar36;
  byte bVar37;
  byte bVar38;
  byte bVar39;
  byte bVar40;
  byte bVar41;
  byte bVar42;
  byte bVar43;
  ulong uVar44;
  float *pfVar45;
  undefined8 *puVar46;
  long lVar47;
  long lVar48;
  int iVar49;
  float fVar50;
  float fVar51;
  float fVar52;
  float fVar53;
  float fVar54;
  float fVar55;
  float fVar56;
  float fVar57;
  float fVar58;
  float fVar59;
  float fVar60;
  float fVar61;
  undefined8 uVar63;
  float fVar68;
  undefined1 auVar64 [16];
  float fVar62;
  float fVar67;
  float fVar69;
  undefined1 auVar65 [16];
  undefined1 auVar66 [16];
  float fVar70;
  float fVar71;
  float fVar72;
  undefined8 uVar74;
  float fVar81;
  undefined1 auVar75 [16];
  float fVar73;
  float fVar80;
  float fVar82;
  undefined1 auVar76 [16];
  undefined1 auVar77 [16];
  undefined1 auVar78 [16];
  undefined1 auVar79 [16];
  float fVar83;
  float fVar84;
  float fVar85;
  float fVar86;
  float fVar87;
  float fVar90;
  float fVar91;
  float fVar92;
  float fVar93;
  float fVar94;
  undefined1 auVar88 [16];
  undefined1 auVar89 [16];
  float fVar95;
  float fVar96;
  float fVar97;
  float fVar106;
  float fVar108;
  undefined1 auVar99 [16];
  undefined1 auVar100 [16];
  undefined1 auVar101 [16];
  float fVar98;
  undefined4 uVar107;
  float fVar109;
  undefined1 auVar102 [16];
  undefined1 auVar103 [16];
  undefined1 auVar104 [16];
  undefined1 auVar105 [16];
  float fVar110;
  float fVar111;
  float fVar112;
  float fVar114;
  float fVar115;
  undefined1 auVar113 [16];
  int iVar116;
  int iVar119;
  ulong uVar117;
  undefined4 uVar120;
  int iVar121;
  uint uVar122;
  int iVar123;
  uint uVar124;
  undefined1 auVar118 [16];
  float fVar125;
  float fVar126;
  undefined4 uVar127;
  float fVar128;
  float fVar129;
  uint uVar130;
  uint uVar131;
  undefined4 uVar132;
  uint uVar133;
  uint uVar134;
  undefined4 uVar135;
  undefined4 uVar136;
  undefined4 uVar137;
  undefined4 uVar138;
  undefined4 uVar139;
  undefined4 uVar140;
  undefined4 uVar141;
  undefined4 uVar142;
  undefined4 uVar143;
  undefined4 uVar144;
  undefined4 uVar145;
  undefined4 uVar146;
  float fVar147;
  float fVar148;
  float fVar149;
  int iVar150;
  int iVar155;
  ulong uVar151;
  uint uVar156;
  uint uVar157;
  undefined1 auVar152 [16];
  undefined1 auVar153 [16];
  undefined1 auVar154 [16];
  int iVar158;
  float fVar159;
  int iVar162;
  ulong uVar160;
  float fVar163;
  uint uVar164;
  float fVar165;
  uint uVar166;
  float fVar167;
  undefined1 auVar161 [16];
  undefined1 auVar168 [12];
  undefined1 auVar169 [12];
  undefined1 auVar172 [16];
  undefined1 auVar173 [16];
  undefined1 auVar174 [16];
  undefined1 auVar175 [16];
  undefined1 auVar176 [16];
  undefined1 auVar177 [16];
  undefined1 auVar178 [16];
  undefined1 auVar179 [16];
  undefined1 auVar180 [16];
  undefined1 auVar181 [16];
  undefined1 auVar182 [16];
  undefined1 auVar183 [16];
  int iVar184;
  float fVar185;
  float fVar186;
  float fStack_c0;
  float fStack_bc;
  float fStack_b8;
  float fStack_b4;
  undefined1 auVar170 [16];
  undefined1 auVar171 [16];
  
  uVar124 = *(int *)(param_1 + 0x50) * *param_2;
  uVar2 = *(uint *)(*(long *)(param_1 + 0x40) + 8);
  uVar122 = uVar2;
  if ((int)uVar124 <= (int)uVar2) {
    uVar122 = uVar124;
  }
  uVar122 = uVar122 & ((int)uVar122 >> 0x1f ^ 0xffffffffU);
  uVar44 = (ulong)uVar122;
  uVar124 = param_2[1] * *(int *)(param_1 + 0x50);
  if ((int)uVar124 <= (int)uVar2) {
    uVar2 = uVar124;
  }
  if ((int)uVar122 < (int)uVar2) {
    puVar1 = *(uint **)(param_1 + 0x38);
    lVar47 = *(long *)(*(long *)(param_1 + 0x30) + 0x10);
    lVar48 = *(long *)(puVar1 + 4);
    uVar122 = 0x88442211 >> (((ulong)*puVar1 & 7) << 2);
    uVar117 = 0;
    if ((uVar122 & 0xf) != 0) {
      uVar117 = **(ulong **)(puVar1 + 0x12) / ((ulong)uVar122 & 0xf);
    }
    iVar3 = *(int *)(*(long *)(param_1 + 0x40) + 0xc);
    fVar50 = *(float *)(param_1 + 0xc);
    fVar70 = *(float *)(param_1 + 0x10);
    fVar83 = *(float *)(param_1 + 0x14);
    fVar71 = *(float *)(param_1 + 0x18);
    fVar95 = *(float *)(param_1 + 0x1c);
    fVar84 = *(float *)(param_1 + 0x20);
    fVar85 = *(float *)(param_1 + 0x24);
    fVar96 = *(float *)(param_1 + 0x28);
    fVar147 = *(float *)(param_1 + 0x2c);
    fVar110 = fVar50 * 4.0;
    fVar111 = fVar71 * 4.0;
    fVar97 = fVar85 * 4.0;
    iVar184 = *(int *)(*(long *)(param_1 + 0x30) + 0xc);
    iVar11 = (int)(uVar117 / 3);
    pfVar45 = *(float **)(param_1 + 0x48);
    fVar185 = *pfVar45;
    fVar186 = pfVar45[1];
    fVar148 = pfVar45[2];
    fVar149 = pfVar45[3];
    fVar51 = pfVar45[4];
    fVar52 = pfVar45[5];
    fVar53 = pfVar45[6];
    fVar54 = pfVar45[7];
    fVar55 = pfVar45[8];
    fVar56 = pfVar45[9];
    fVar57 = pfVar45[10];
    fVar58 = pfVar45[0xb];
    fVar59 = pfVar45[0xc];
    fVar60 = pfVar45[0xd];
    fVar4 = pfVar45[0xe];
    do {
      if (0 < iVar3) {
        iVar49 = 0;
        fVar61 = (float)(uVar44 & 0xffffffff);
        fVar72 = fVar147 + fVar61 * fVar96;
        fVar86 = fVar84 + fVar61 * fVar95;
        auVar99._0_4_ = fVar72 + 0.0;
        auVar99._4_4_ = fVar85 * 1.0 + fVar72;
        auVar99._8_4_ = fVar85 * 2.0 + fVar72;
        auVar99._12_4_ = fVar85 * 3.0 + fVar72;
        fVar112 = fVar86 + 0.0;
        fVar114 = fVar71 * 1.0 + fVar86;
        fVar115 = fVar71 * 2.0 + fVar86;
        fVar86 = fVar71 * 3.0 + fVar86;
        fVar61 = fVar83 + fVar61 * fVar70;
        fVar72 = fVar61 + 0.0;
        fVar90 = fVar50 * 1.0 + fVar61;
        fVar92 = fVar50 * 2.0 + fVar61;
        fVar61 = fVar50 * 3.0 + fVar61;
        puVar46 = (undefined8 *)
                  (*(long *)(*(long *)(param_1 + 0x40) + 0x10) +
                  **(long **)(*(long *)(param_1 + 0x40) + 0x48) * uVar44);
        do {
          auVar64 = NEON_frecpe(auVar99,4);
          auVar75 = NEON_frecps(auVar99,auVar64,4);
          auVar76._0_4_ = auVar64._0_4_ * auVar75._0_4_;
          auVar76._4_4_ = auVar64._4_4_ * auVar75._4_4_;
          auVar76._8_4_ = auVar64._8_4_ * auVar75._8_4_;
          auVar76._12_4_ = auVar64._12_4_ * auVar75._12_4_;
          auVar64 = NEON_frecps(auVar99,auVar76,4);
          fVar62 = auVar64._0_4_ * auVar76._0_4_;
          fVar67 = auVar64._4_4_ * auVar76._4_4_;
          fVar68 = auVar64._8_4_ * auVar76._8_4_;
          fVar69 = auVar64._12_4_ * auVar76._12_4_;
          fVar73 = fVar72 * fVar62;
          fVar80 = fVar90 * fVar67;
          fVar81 = fVar92 * fVar68;
          fVar82 = fVar61 * fVar69;
          fVar62 = fVar112 * fVar62;
          fVar67 = fVar114 * fVar67;
          fVar68 = fVar115 * fVar68;
          fVar69 = fVar86 * fVar69;
          auVar181._0_4_ = (int)fVar73;
          auVar181._4_4_ = (int)fVar80;
          auVar181._8_4_ = (int)fVar81;
          auVar181._12_4_ = (int)fVar82;
          auVar64 = NEON_scvtf(auVar181,4);
          auVar183._0_4_ = auVar181._0_4_ - (uint)(fVar73 < auVar64._0_4_);
          auVar183._4_4_ = auVar181._4_4_ - (uint)(fVar80 < auVar64._4_4_);
          auVar183._8_4_ = auVar181._8_4_ - (uint)(fVar81 < auVar64._8_4_);
          auVar183._12_4_ = auVar181._12_4_ - (uint)(fVar82 < auVar64._12_4_);
          auVar100._0_4_ = (int)fVar62;
          auVar100._4_4_ = (int)fVar67;
          auVar100._8_4_ = (int)fVar68;
          auVar100._12_4_ = (int)fVar69;
          auVar64 = NEON_scvtf(auVar100,4);
          auVar101._0_4_ = auVar100._0_4_ - (uint)(fVar62 < auVar64._0_4_);
          auVar101._4_4_ = auVar100._4_4_ - (uint)(fVar67 < auVar64._4_4_);
          auVar101._8_4_ = auVar100._8_4_ - (uint)(fVar68 < auVar64._8_4_);
          auVar101._12_4_ = auVar100._12_4_ - (uint)(fVar69 < auVar64._12_4_);
          iVar158 = (auVar101._0_4_ * iVar184 + auVar183._0_4_) * 8;
          iVar162 = (auVar101._4_4_ * iVar184 + auVar183._4_4_) * 8;
          uVar164 = (auVar101._8_4_ * iVar184 + auVar183._8_4_) * 8;
          uVar166 = (auVar101._12_4_ * iVar184 + auVar183._12_4_) * 8;
          iVar150 = (auVar101._0_4_ * iVar184 + auVar183._0_4_ + 1) * 8;
          iVar155 = (auVar101._4_4_ * iVar184 + auVar183._4_4_ + 1) * 8;
          uVar156 = (auVar101._8_4_ * iVar184 + auVar183._8_4_ + 1) * 8;
          uVar157 = (auVar101._12_4_ * iVar184 + auVar183._12_4_ + 1) * 8;
          iVar116 = (auVar101._0_4_ + 1) * iVar184;
          iVar119 = (auVar101._4_4_ + 1) * iVar184;
          iVar121 = (auVar101._8_4_ + 1) * iVar184;
          iVar123 = (auVar101._12_4_ + 1) * iVar184;
          uVar130 = (iVar116 + auVar183._0_4_ + 1) * 8;
          uVar131 = (iVar119 + auVar183._4_4_ + 1) * 8;
          uVar133 = (iVar121 + auVar183._8_4_ + 1) * 8;
          uVar134 = (iVar123 + auVar183._12_4_ + 1) * 8;
          iVar116 = (iVar116 + auVar183._0_4_) * 8;
          iVar119 = (iVar119 + auVar183._4_4_) * 8;
          uVar122 = (iVar121 + auVar183._8_4_) * 8;
          uVar124 = (iVar123 + auVar183._12_4_) * 8;
          uVar160 = CONCAT44(iVar162,iVar158) | 0x400000004;
          uVar151 = CONCAT44(iVar155,iVar150) | 0x400000004;
          uVar117 = CONCAT44(iVar119,iVar116) | 0x400000004;
          auVar64 = NEON_scvtf(auVar183,4);
          fVar73 = fVar73 - auVar64._0_4_;
          fVar80 = fVar80 - auVar64._4_4_;
          fVar81 = fVar81 - auVar64._8_4_;
          fVar82 = fVar82 - auVar64._12_4_;
          auVar64 = NEON_scvtf(auVar101,4);
          fVar62 = fVar62 - auVar64._0_4_;
          fVar67 = fVar67 - auVar64._4_4_;
          fVar68 = fVar68 - auVar64._8_4_;
          fVar69 = fVar69 - auVar64._12_4_;
          auVar64 = NEON_fmov(0x3f800000,4);
          fVar98 = auVar64._0_4_ - fVar73;
          fVar106 = auVar64._4_4_ - fVar80;
          fVar108 = auVar64._8_4_ - fVar81;
          fVar109 = auVar64._12_4_ - fVar82;
          fVar87 = auVar64._0_4_ - fVar62;
          fVar91 = auVar64._4_4_ - fVar67;
          fVar93 = auVar64._8_4_ - fVar68;
          fVar94 = auVar64._12_4_ - fVar69;
          fVar159 = fVar87 * (*(float *)(lVar47 + iVar158) * fVar98 +
                             fVar73 * *(float *)(lVar47 + iVar150)) +
                    fVar62 * (fVar73 * *(float *)(lVar47 + (int)uVar130) +
                             fVar98 * *(float *)(lVar47 + iVar116));
          fVar163 = fVar91 * (*(float *)(lVar47 + iVar162) * fVar106 +
                             fVar80 * *(float *)(lVar47 + iVar155)) +
                    fVar67 * (fVar80 * *(float *)(lVar47 + (int)uVar131) +
                             fVar106 * *(float *)(lVar47 + iVar119));
          fVar165 = fVar93 * (*(float *)(lVar47 + (int)uVar164) * fVar108 +
                             fVar81 * *(float *)(lVar47 + (int)uVar156)) +
                    fVar68 * (fVar81 * *(float *)(lVar47 + (int)uVar133) +
                             fVar108 * *(float *)(lVar47 + (int)uVar122));
          fVar167 = fVar94 * (*(float *)(lVar47 + (int)uVar166) * fVar109 +
                             fVar82 * *(float *)(lVar47 + (int)uVar157)) +
                    fVar69 * (fVar82 * *(float *)(lVar47 + (int)uVar134) +
                             fVar109 * *(float *)(lVar47 + (int)uVar124));
          fVar62 = fVar87 * (fVar98 * *(float *)(lVar47 + (int)uVar160) +
                            fVar73 * *(float *)(lVar47 + (int)uVar151)) +
                   fVar62 * (fVar73 * *(float *)(lVar47 + (int)(uVar130 | 4)) +
                            fVar98 * *(float *)(lVar47 + (int)uVar117));
          fVar67 = fVar91 * (fVar106 * *(float *)(lVar47 + (int)(uVar160 >> 0x20)) +
                            fVar80 * *(float *)(lVar47 + (int)(uVar151 >> 0x20))) +
                   fVar67 * (fVar80 * *(float *)(lVar47 + (int)(uVar131 | 4)) +
                            fVar106 * *(float *)(lVar47 + (int)(uVar117 >> 0x20)));
          fVar68 = fVar93 * (fVar108 * *(float *)(lVar47 + (int)(uVar164 | 4)) +
                            fVar81 * *(float *)(lVar47 + (int)(uVar156 | 4))) +
                   fVar68 * (fVar81 * *(float *)(lVar47 + (int)(uVar133 | 4)) +
                            fVar108 * *(float *)(lVar47 + (int)(uVar122 | 4)));
          fVar69 = fVar94 * (fVar109 * *(float *)(lVar47 + (int)(uVar166 | 4)) +
                            fVar82 * *(float *)(lVar47 + (int)(uVar157 | 4))) +
                   fVar69 * (fVar82 * *(float *)(lVar47 + (int)(uVar134 | 4)) +
                            fVar109 * *(float *)(lVar47 + (int)(uVar124 | 4)));
          fVar73 = fVar159 * fVar159;
          fVar80 = fVar163 * fVar163;
          fVar81 = fVar165 * fVar165;
          fVar82 = fVar167 * fVar167;
          fVar87 = fVar62 * fVar62;
          fVar91 = fVar67 * fVar67;
          fVar93 = fVar68 * fVar68;
          fVar94 = fVar69 * fVar69;
          fVar98 = fVar159 * fVar73;
          fVar106 = fVar163 * fVar80;
          fVar108 = fVar165 * fVar81;
          fVar109 = fVar167 * fVar82;
          fVar125 = fVar62 * fVar87;
          fVar126 = fVar67 * fVar91;
          fVar128 = fVar68 * fVar93;
          fVar129 = fVar69 * fVar94;
          fVar62 = fVar159 * fVar98 * fVar185 +
                   fVar159 * fVar125 * fVar186 +
                   fVar73 * fVar148 * fVar87 +
                   fVar98 * fVar149 * fVar62 +
                   fVar62 * fVar125 * fVar51 +
                   fVar98 * fVar52 +
                   fVar159 * fVar87 * fVar53 +
                   fVar73 * fVar54 * fVar62 +
                   fVar125 * fVar55 +
                   fVar73 * fVar56 +
                   fVar159 * fVar62 * fVar57 +
                   fVar87 * fVar58 + fVar159 * fVar59 + fVar4 + fVar62 * fVar60;
          fVar67 = fVar163 * fVar106 * fVar185 +
                   fVar163 * fVar126 * fVar186 +
                   fVar80 * fVar148 * fVar91 +
                   fVar106 * fVar149 * fVar67 +
                   fVar67 * fVar126 * fVar51 +
                   fVar106 * fVar52 +
                   fVar163 * fVar91 * fVar53 +
                   fVar80 * fVar54 * fVar67 +
                   fVar126 * fVar55 +
                   fVar80 * fVar56 +
                   fVar163 * fVar67 * fVar57 +
                   fVar91 * fVar58 + fVar163 * fVar59 + fVar4 + fVar67 * fVar60;
          fVar68 = fVar165 * fVar108 * fVar185 +
                   fVar165 * fVar128 * fVar186 +
                   fVar81 * fVar148 * fVar93 +
                   fVar108 * fVar149 * fVar68 +
                   fVar68 * fVar128 * fVar51 +
                   fVar108 * fVar52 +
                   fVar165 * fVar93 * fVar53 +
                   fVar81 * fVar54 * fVar68 +
                   fVar128 * fVar55 +
                   fVar81 * fVar56 +
                   fVar165 * fVar68 * fVar57 +
                   fVar93 * fVar58 + fVar165 * fVar59 + fVar4 + fVar68 * fVar60;
          fVar69 = fVar167 * fVar109 * fVar185 +
                   fVar167 * fVar129 * fVar186 +
                   fVar82 * fVar148 * fVar94 +
                   fVar109 * fVar149 * fVar69 +
                   fVar69 * fVar129 * fVar51 +
                   fVar109 * fVar52 +
                   fVar167 * fVar94 * fVar53 +
                   fVar82 * fVar54 * fVar69 +
                   fVar129 * fVar55 +
                   fVar82 * fVar56 +
                   fVar167 * fVar69 * fVar57 +
                   fVar94 * fVar58 + fVar167 * fVar59 + fVar4 + fVar69 * fVar60;
          auVar174._0_4_ = (int)fVar159;
          auVar174._4_4_ = (int)fVar163;
          auVar174._8_4_ = (int)fVar165;
          auVar174._12_4_ = (int)fVar167;
          auVar75 = NEON_scvtf(auVar174,4);
          iVar150 = auVar174._0_4_ - (uint)(fVar159 < auVar75._0_4_);
          iVar155 = auVar174._4_4_ - (uint)(fVar163 < auVar75._4_4_);
          auVar64._0_8_ = CONCAT44(iVar155,iVar150);
          auVar64._8_4_ = auVar174._8_4_ - (uint)(fVar165 < auVar75._8_4_);
          auVar64._12_4_ = auVar174._12_4_ - (uint)(fVar167 < auVar75._12_4_);
          auVar177._0_4_ = (int)fVar62;
          auVar177._4_4_ = (int)fVar67;
          auVar177._8_4_ = (int)fVar68;
          auVar177._12_4_ = (int)fVar69;
          auVar76 = NEON_scvtf(auVar177,4);
          iVar158 = auVar177._0_4_ - (uint)(fVar62 < auVar76._0_4_);
          iVar162 = auVar177._4_4_ - (uint)(fVar67 < auVar76._4_4_);
          auVar75._0_8_ = CONCAT44(iVar162,iVar158);
          auVar75._8_4_ = auVar177._8_4_ - (uint)(fVar68 < auVar76._8_4_);
          auVar75._12_4_ = auVar177._12_4_ - (uint)(fVar69 < auVar76._12_4_);
          iVar116 = (iVar158 + 1) * iVar11;
          iVar119 = (iVar162 + 1) * iVar11;
          iVar121 = (auVar75._8_4_ + 1) * iVar11;
          iVar123 = (auVar75._12_4_ + 1) * iVar11;
          uVar138 = *(undefined4 *)(lVar48 + (iVar158 * iVar11 + iVar150) * 3);
          uVar107 = *(undefined4 *)(lVar48 + (iVar162 * iVar11 + iVar155) * 3);
          uVar139 = *(undefined4 *)(lVar48 + (auVar75._8_4_ * iVar11 + auVar64._8_4_) * 3);
          uVar140 = *(undefined4 *)(lVar48 + (auVar75._12_4_ * iVar11 + auVar64._12_4_) * 3);
          uVar135 = *(undefined4 *)(lVar48 + (iVar158 * iVar11 + iVar150 + 1) * 3);
          uVar120 = *(undefined4 *)(lVar48 + (iVar162 * iVar11 + iVar155 + 1) * 3);
          uVar136 = *(undefined4 *)(lVar48 + (auVar75._8_4_ * iVar11 + auVar64._8_4_ + 1) * 3);
          uVar137 = *(undefined4 *)(lVar48 + (auVar75._12_4_ * iVar11 + auVar64._12_4_ + 1) * 3);
          uVar141 = *(undefined4 *)(lVar48 + (iVar116 + iVar150 + 1) * 3);
          uVar127 = *(undefined4 *)(lVar48 + (iVar119 + iVar155 + 1) * 3);
          uVar142 = *(undefined4 *)(lVar48 + (iVar121 + auVar64._8_4_ + 1) * 3);
          uVar143 = *(undefined4 *)(lVar48 + (iVar123 + auVar64._12_4_ + 1) * 3);
          uVar144 = *(undefined4 *)(lVar48 + (iVar116 + iVar150) * 3);
          uVar132 = *(undefined4 *)(lVar48 + (iVar119 + iVar155) * 3);
          uVar145 = *(undefined4 *)(lVar48 + (iVar121 + auVar64._8_4_) * 3);
          uVar146 = *(undefined4 *)(lVar48 + (iVar123 + auVar64._12_4_) * 3);
          if ((bRam00000001132dfb90 & 1) == 0) {
            uVar63 = auVar64._8_8_;
            uVar74 = auVar75._8_8_;
            iVar116 = 0x132dfb90;
            ___cxa_guard_acquire();
            auVar64._8_8_ = uVar63;
            auVar75._8_8_ = uVar74;
            if (iVar116 != 0) {
              _uRam00000001132dfb88 = 0x80000000;
              _uRam00000001132dfb8c = 0x80000000;
              _uRam00000001132dfb80 = 0x8000000080000000;
              ___cxa_guard_release(0x1132dfb90);
            }
          }
          if (((bRam00000001132dfbb0 & 1) == 0) &&
             (iVar116 = 0x132dfbb0, ___cxa_guard_acquire(), iVar116 != 0)) {
            _uRam00000001132dfba8 = 0x3f000000;
            _uRam00000001132dfbac = 0x3f000000;
            _uRam00000001132dfba0 = 0x3f0000003f000000;
            ___cxa_guard_release(0x1132dfbb0);
          }
          bVar28 = (byte)uRam00000001132dfba0;
          bVar29 = uRam00000001132dfba0._1_1_;
          bVar30 = bRam00000001132dfba2;
          bVar31 = bRam00000001132dfba3;
          bVar32 = bRam00000001132dfba4;
          bVar33 = bRam00000001132dfba5;
          bVar34 = bRam00000001132dfba6;
          bVar35 = bRam00000001132dfba7;
          bVar36 = (byte)uRam00000001132dfba8;
          bVar37 = uRam00000001132dfba8._1_1_;
          bVar38 = bRam00000001132dfbaa;
          bVar39 = bRam00000001132dfbab;
          bVar40 = (byte)uRam00000001132dfbac;
          bVar41 = uRam00000001132dfbac._1_1_;
          bVar42 = bRam00000001132dfbae;
          bVar43 = bRam00000001132dfbaf;
          bVar12 = (byte)uRam00000001132dfb80;
          bVar13 = uRam00000001132dfb80._1_1_;
          bVar14 = bRam00000001132dfb82;
          bVar15 = bRam00000001132dfb83;
          bVar16 = bRam00000001132dfb84;
          bVar17 = bRam00000001132dfb85;
          bVar18 = bRam00000001132dfb86;
          bVar19 = bRam00000001132dfb87;
          bVar20 = (byte)uRam00000001132dfb88;
          bVar21 = uRam00000001132dfb88._1_1_;
          bVar22 = bRam00000001132dfb8a;
          bVar23 = bRam00000001132dfb8b;
          bVar24 = (byte)uRam00000001132dfb8c;
          bVar25 = uRam00000001132dfb8c._1_1_;
          bVar26 = bRam00000001132dfb8e;
          bVar27 = bRam00000001132dfb8f;
          if (((bRam00000001132dfb90 & 1) == 0) &&
             (iVar116 = 0x132dfb90, ___cxa_guard_acquire(), iVar116 != 0)) {
            _uRam00000001132dfb88 = 0x80000000;
            _uRam00000001132dfb8c = 0x80000000;
            _uRam00000001132dfb80 = 0x8000000080000000;
            ___cxa_guard_release(0x1132dfb90);
          }
          if (((bRam00000001132dfbb0 & 1) == 0) &&
             (iVar116 = 0x132dfbb0, ___cxa_guard_acquire(), iVar116 != 0)) {
            _uRam00000001132dfba8 = 0x3f000000;
            _uRam00000001132dfbac = 0x3f000000;
            _uRam00000001132dfba0 = 0x3f0000003f000000;
            ___cxa_guard_release(0x1132dfbb0);
          }
          uVar9 = CONCAT12((char)((uint)uVar144 >> 8),(short)uVar144) & 0xff00ff;
          uVar10 = CONCAT12((char)((uint)uVar145 >> 8),(short)uVar145) & 0xff00ff;
          auVar64 = NEON_scvtf(auVar64,4);
          fVar73 = (fVar159 - auVar64._0_4_) * 64.0;
          fVar80 = (fVar163 - auVar64._4_4_) * 64.0;
          fVar81 = (fVar165 - auVar64._8_4_) * 64.0;
          fVar82 = (fVar167 - auVar64._12_4_) * 64.0;
          fVar87 = (float)CONCAT13(bVar15 & (byte)((uint)fVar73 >> 0x18) | bVar31,
                                   CONCAT12(bVar14 & (byte)((uint)fVar73 >> 0x10) | bVar30,
                                            CONCAT11(bVar13 & (byte)((uint)fVar73 >> 8) | bVar29,
                                                     bVar12 & SUB41(fVar73,0) | bVar28)));
          auVar168._0_8_ =
               CONCAT17(bVar19 & (byte)((uint)fVar80 >> 0x18) | bVar35,
                        CONCAT16(bVar18 & (byte)((uint)fVar80 >> 0x10) | bVar34,
                                 CONCAT15(bVar17 & (byte)((uint)fVar80 >> 8) | bVar33,
                                          CONCAT14(bVar16 & SUB41(fVar80,0) | bVar32,fVar87))));
          auVar168[8] = bVar20 & SUB41(fVar81,0) | bVar36;
          auVar168[9] = bVar21 & (byte)((uint)fVar81 >> 8) | bVar37;
          auVar168[10] = bVar22 & (byte)((uint)fVar81 >> 0x10) | bVar38;
          auVar168[0xb] = bVar23 & (byte)((uint)fVar81 >> 0x18) | bVar39;
          auVar170[0xc] = bVar24 & SUB41(fVar82,0) | bVar40;
          auVar170._0_12_ = auVar168;
          auVar170[0xd] = bVar25 & (byte)((uint)fVar82 >> 8) | bVar41;
          auVar170[0xe] = bVar26 & (byte)((uint)fVar82 >> 0x10) | bVar42;
          auVar170[0xf] = bVar27 & (byte)((uint)fVar82 >> 0x18) | bVar43;
          iVar116 = (int)(fVar73 + fVar87);
          iVar119 = (int)(fVar80 + (float)((ulong)auVar168._0_8_ >> 0x20));
          iVar121 = (int)(fVar81 + auVar168._8_4_);
          auVar152._12_4_ = (int)(fVar82 + auVar170._12_4_);
          auVar64 = NEON_scvtf(auVar75,4);
          fVar62 = (fVar62 - auVar64._0_4_) * 64.0;
          fVar67 = (fVar67 - auVar64._4_4_) * 64.0;
          fVar68 = (fVar68 - auVar64._8_4_) * 64.0;
          fVar69 = (fVar69 - auVar64._12_4_) * 64.0;
          fVar73 = (float)CONCAT13(bRam00000001132dfb83 & (byte)((uint)fVar62 >> 0x18) |
                                   bRam00000001132dfba3,
                                   CONCAT12(bRam00000001132dfb82 & (byte)((uint)fVar62 >> 0x10) |
                                            bRam00000001132dfba2,
                                            CONCAT11(uRam00000001132dfb80._1_1_ &
                                                     (byte)((uint)fVar62 >> 8) |
                                                     uRam00000001132dfba0._1_1_,
                                                     (byte)uRam00000001132dfb80 & SUB41(fVar62,0) |
                                                     (byte)uRam00000001132dfba0)));
          auVar169._0_8_ =
               CONCAT17(bRam00000001132dfb87 & (byte)((uint)fVar67 >> 0x18) | bRam00000001132dfba7,
                        CONCAT16(bRam00000001132dfb86 & (byte)((uint)fVar67 >> 0x10) |
                                 bRam00000001132dfba6,
                                 CONCAT15(bRam00000001132dfb85 & (byte)((uint)fVar67 >> 8) |
                                          bRam00000001132dfba5,
                                          CONCAT14(bRam00000001132dfb84 & SUB41(fVar67,0) |
                                                   bRam00000001132dfba4,fVar73))));
          auVar169[8] = (byte)uRam00000001132dfb88 & SUB41(fVar68,0) | (byte)uRam00000001132dfba8;
          auVar169[9] = uRam00000001132dfb88._1_1_ & (byte)((uint)fVar68 >> 8) |
                        uRam00000001132dfba8._1_1_;
          auVar169[10] = bRam00000001132dfb8a & (byte)((uint)fVar68 >> 0x10) | bRam00000001132dfbaa;
          auVar169[0xb] = bRam00000001132dfb8b & (byte)((uint)fVar68 >> 0x18) | bRam00000001132dfbab
          ;
          auVar171[0xc] = (byte)uRam00000001132dfb8c & SUB41(fVar69,0) | (byte)uRam00000001132dfbac;
          auVar171._0_12_ = auVar169;
          auVar171[0xd] =
               uRam00000001132dfb8c._1_1_ & (byte)((uint)fVar69 >> 8) | uRam00000001132dfbac._1_1_;
          auVar171[0xe] = bRam00000001132dfb8e & (byte)((uint)fVar69 >> 0x10) | bRam00000001132dfbae
          ;
          auVar171[0xf] = bRam00000001132dfb8f & (byte)((uint)fVar69 >> 0x18) | bRam00000001132dfbaf
          ;
          iVar123 = (int)(fVar62 + fVar73);
          iVar150 = (int)(fVar67 + (float)((ulong)auVar169._0_8_ >> 0x20));
          iVar155 = (int)(fVar68 + auVar169._8_4_);
          auVar161._12_4_ = (int)(fVar69 + auVar171._12_4_);
          auVar172._0_8_ = CONCAT44(iVar116,iVar116);
          auVar172._8_4_ = iVar116;
          auVar172._12_4_ = iVar116;
          auVar175._0_8_ = CONCAT44(iVar119,iVar119);
          auVar175._8_4_ = iVar119;
          auVar175._12_4_ = iVar119;
          auVar178._4_4_ = iVar121;
          auVar178._0_4_ = iVar121;
          auVar178._8_4_ = iVar121;
          auVar178._12_4_ = iVar121;
          auVar152._4_4_ = auVar152._12_4_;
          auVar152._0_4_ = auVar152._12_4_;
          auVar152._8_4_ = auVar152._12_4_;
          auVar173._8_8_ = auVar172._8_8_;
          auVar173._0_8_ = NEON_uqxtn(auVar172._0_8_,auVar172,4);
          auVar174 = NEON_uqxtn2(auVar173,auVar175,4);
          auVar176._8_8_ = auVar175._8_8_;
          auVar176._0_8_ = NEON_uqxtn(auVar175._0_8_,auVar178,4);
          auVar177 = NEON_uqxtn2(auVar176,auVar152,4);
          auVar153._0_8_ = CONCAT44(iVar123,iVar123);
          auVar153._8_4_ = iVar123;
          auVar153._12_4_ = iVar123;
          auVar179._0_8_ = CONCAT44(iVar150,iVar150);
          auVar179._8_4_ = iVar150;
          auVar179._12_4_ = iVar150;
          auVar182._4_4_ = iVar155;
          auVar182._0_4_ = iVar155;
          auVar182._8_4_ = iVar155;
          auVar182._12_4_ = iVar155;
          auVar161._4_4_ = auVar161._12_4_;
          auVar161._0_4_ = auVar161._12_4_;
          auVar161._8_4_ = auVar161._12_4_;
          auVar154._8_8_ = auVar153._8_8_;
          auVar154._0_8_ = NEON_uqxtn(auVar153._0_8_,auVar153,4);
          auVar75 = NEON_uqxtn2(auVar154,auVar179,4);
          auVar180._8_8_ = auVar179._8_8_;
          auVar180._0_8_ = NEON_uqxtn(auVar179._0_8_,auVar182,4);
          auVar181 = NEON_uqxtn2(auVar180,auVar161,4);
          auVar5._8_2_ = 0x40;
          auVar5._0_8_ = 0x40004000400040;
          auVar5._10_2_ = 0x40;
          auVar5._12_2_ = 0x40;
          auVar5._14_2_ = 0x40;
          auVar76 = NEON_uqsub(auVar5,auVar174,2);
          auVar6._8_2_ = 0x40;
          auVar6._0_8_ = 0x40004000400040;
          auVar6._10_2_ = 0x40;
          auVar6._12_2_ = 0x40;
          auVar6._14_2_ = 0x40;
          auVar183 = NEON_uqsub(auVar6,auVar75,2);
          auVar88._0_2_ = auVar76._0_2_ * (ushort)(byte)uVar138;
          auVar88._2_2_ = auVar76._2_2_ * (ushort)(byte)((uint)uVar138 >> 8);
          auVar88._4_2_ = auVar76._4_2_ * (ushort)(byte)((uint)uVar138 >> 0x10);
          auVar88._6_2_ = auVar76._6_2_ * (ushort)(byte)((uint)uVar138 >> 0x18);
          auVar88._8_2_ = auVar76._8_2_ * (ushort)(byte)uVar107;
          auVar88._10_2_ = auVar76._10_2_ * (ushort)(byte)((uint)uVar107 >> 8);
          auVar88._12_2_ = auVar76._12_2_ * (ushort)(byte)((uint)uVar107 >> 0x10);
          auVar88._14_2_ = auVar76._14_2_ * (ushort)(byte)((uint)uVar107 >> 0x18);
          auVar102._0_2_ = auVar174._0_2_ * (ushort)(byte)uVar135;
          auVar102._2_2_ = auVar174._2_2_ * (ushort)(byte)((uint)uVar135 >> 8);
          auVar102._4_2_ = auVar174._4_2_ * (ushort)(byte)((uint)uVar135 >> 0x10);
          auVar102._6_2_ = auVar174._6_2_ * (ushort)(byte)((uint)uVar135 >> 0x18);
          auVar102._8_2_ = auVar174._8_2_ * (ushort)(byte)uVar120;
          auVar102._10_2_ = auVar174._10_2_ * (ushort)(byte)((uint)uVar120 >> 8);
          auVar102._12_2_ = auVar174._12_2_ * (ushort)(byte)((uint)uVar120 >> 0x10);
          auVar102._14_2_ = auVar174._14_2_ * (ushort)(byte)((uint)uVar120 >> 0x18);
          auVar64 = NEON_uqadd(auVar88,auVar102,2);
          auVar89._0_2_ = (auVar64._0_2_ >> 6) * auVar183._0_2_;
          auVar89._2_2_ = (auVar64._2_2_ >> 6) * auVar183._2_2_;
          auVar89._4_2_ = (auVar64._4_2_ >> 6) * auVar183._4_2_;
          auVar89._6_2_ = (auVar64._6_2_ >> 6) * auVar183._6_2_;
          auVar89._8_2_ = (auVar64._8_2_ >> 6) * auVar183._8_2_;
          auVar89._10_2_ = (auVar64._10_2_ >> 6) * auVar183._10_2_;
          auVar89._12_2_ = (auVar64._12_2_ >> 6) * auVar183._12_2_;
          auVar89._14_2_ = (auVar64._14_2_ >> 6) * auVar183._14_2_;
          auVar103._0_2_ = auVar76._0_2_ * (short)uVar9;
          auVar103._2_2_ = auVar76._2_2_ * (ushort)(byte)(uVar9 >> 0x10);
          auVar103._4_2_ = auVar76._4_2_ * (ushort)(byte)((uint)uVar144 >> 0x10);
          auVar103._6_2_ = auVar76._6_2_ * (ushort)(byte)((uint)uVar144 >> 0x18);
          auVar103._8_2_ = auVar76._8_2_ * (ushort)(byte)uVar132;
          auVar103._10_2_ = auVar76._10_2_ * (ushort)(byte)((uint)uVar132 >> 8);
          auVar103._12_2_ = auVar76._12_2_ * (ushort)(byte)((uint)uVar132 >> 0x10);
          auVar103._14_2_ = auVar76._14_2_ * (ushort)(byte)((uint)uVar132 >> 0x18);
          auVar118._0_2_ = auVar174._0_2_ * (ushort)(byte)uVar141;
          auVar118._2_2_ = auVar174._2_2_ * (ushort)(byte)((uint)uVar141 >> 8);
          auVar118._4_2_ = auVar174._4_2_ * (ushort)(byte)((uint)uVar141 >> 0x10);
          auVar118._6_2_ = auVar174._6_2_ * (ushort)(byte)((uint)uVar141 >> 0x18);
          auVar118._8_2_ = auVar174._8_2_ * (ushort)(byte)uVar127;
          auVar118._10_2_ = auVar174._10_2_ * (ushort)(byte)((uint)uVar127 >> 8);
          auVar118._12_2_ = auVar174._12_2_ * (ushort)(byte)((uint)uVar127 >> 0x10);
          auVar118._14_2_ = auVar174._14_2_ * (ushort)(byte)((uint)uVar127 >> 0x18);
          auVar64 = NEON_uqadd(auVar103,auVar118,2);
          auVar104._0_2_ = (auVar64._0_2_ >> 6) * auVar75._0_2_;
          auVar104._2_2_ = (auVar64._2_2_ >> 6) * auVar75._2_2_;
          auVar104._4_2_ = (auVar64._4_2_ >> 6) * auVar75._4_2_;
          auVar104._6_2_ = (auVar64._6_2_ >> 6) * auVar75._6_2_;
          auVar104._8_2_ = (auVar64._8_2_ >> 6) * auVar75._8_2_;
          auVar104._10_2_ = (auVar64._10_2_ >> 6) * auVar75._10_2_;
          auVar104._12_2_ = (auVar64._12_2_ >> 6) * auVar75._12_2_;
          auVar104._14_2_ = (auVar64._14_2_ >> 6) * auVar75._14_2_;
          auVar75 = NEON_uqadd(auVar89,auVar104,2);
          auVar7._8_2_ = 0x40;
          auVar7._0_8_ = 0x40004000400040;
          auVar7._10_2_ = 0x40;
          auVar7._12_2_ = 0x40;
          auVar7._14_2_ = 0x40;
          auVar76 = NEON_uqsub(auVar7,auVar177,2);
          auVar8._8_2_ = 0x40;
          auVar8._0_8_ = 0x40004000400040;
          auVar8._10_2_ = 0x40;
          auVar8._12_2_ = 0x40;
          auVar8._14_2_ = 0x40;
          auVar174 = NEON_uqsub(auVar8,auVar181,2);
          auVar65._0_2_ = auVar76._0_2_ * (ushort)(byte)uVar139;
          auVar65._2_2_ = auVar76._2_2_ * (ushort)(byte)((uint)uVar139 >> 8);
          auVar65._4_2_ = auVar76._4_2_ * (ushort)(byte)((uint)uVar139 >> 0x10);
          auVar65._6_2_ = auVar76._6_2_ * (ushort)(byte)((uint)uVar139 >> 0x18);
          auVar65._8_2_ = auVar76._8_2_ * (ushort)(byte)uVar140;
          auVar65._10_2_ = auVar76._10_2_ * (ushort)(byte)((uint)uVar140 >> 8);
          auVar65._12_2_ = auVar76._12_2_ * (ushort)(byte)((uint)uVar140 >> 0x10);
          auVar65._14_2_ = auVar76._14_2_ * (ushort)(byte)((uint)uVar140 >> 0x18);
          auVar113._0_2_ = auVar177._0_2_ * (ushort)(byte)uVar136;
          auVar113._2_2_ = auVar177._2_2_ * (ushort)(byte)((uint)uVar136 >> 8);
          auVar113._4_2_ = auVar177._4_2_ * (ushort)(byte)((uint)uVar136 >> 0x10);
          auVar113._6_2_ = auVar177._6_2_ * (ushort)(byte)((uint)uVar136 >> 0x18);
          auVar113._8_2_ = auVar177._8_2_ * (ushort)(byte)uVar137;
          auVar113._10_2_ = auVar177._10_2_ * (ushort)(byte)((uint)uVar137 >> 8);
          auVar113._12_2_ = auVar177._12_2_ * (ushort)(byte)((uint)uVar137 >> 0x10);
          auVar113._14_2_ = auVar177._14_2_ * (ushort)(byte)((uint)uVar137 >> 0x18);
          auVar64 = NEON_uqadd(auVar65,auVar113,2);
          auVar66._0_2_ = (auVar64._0_2_ >> 6) * auVar174._0_2_;
          auVar66._2_2_ = (auVar64._2_2_ >> 6) * auVar174._2_2_;
          auVar66._4_2_ = (auVar64._4_2_ >> 6) * auVar174._4_2_;
          auVar66._6_2_ = (auVar64._6_2_ >> 6) * auVar174._6_2_;
          auVar66._8_2_ = (auVar64._8_2_ >> 6) * auVar174._8_2_;
          auVar66._10_2_ = (auVar64._10_2_ >> 6) * auVar174._10_2_;
          auVar66._12_2_ = (auVar64._12_2_ >> 6) * auVar174._12_2_;
          auVar66._14_2_ = (auVar64._14_2_ >> 6) * auVar174._14_2_;
          auVar105._0_2_ = auVar76._0_2_ * (short)uVar10;
          auVar105._2_2_ = auVar76._2_2_ * (ushort)(byte)(uVar10 >> 0x10);
          auVar105._4_2_ = auVar76._4_2_ * (ushort)(byte)((uint)uVar145 >> 0x10);
          auVar105._6_2_ = auVar76._6_2_ * (ushort)(byte)((uint)uVar145 >> 0x18);
          auVar105._8_2_ = auVar76._8_2_ * (ushort)(byte)uVar146;
          auVar105._10_2_ = auVar76._10_2_ * (ushort)(byte)((uint)uVar146 >> 8);
          auVar105._12_2_ = auVar76._12_2_ * (ushort)(byte)((uint)uVar146 >> 0x10);
          auVar105._14_2_ = auVar76._14_2_ * (ushort)(byte)((uint)uVar146 >> 0x18);
          auVar77._0_2_ = auVar177._0_2_ * (ushort)(byte)uVar142;
          auVar77._2_2_ = auVar177._2_2_ * (ushort)(byte)((uint)uVar142 >> 8);
          auVar77._4_2_ = auVar177._4_2_ * (ushort)(byte)((uint)uVar142 >> 0x10);
          auVar77._6_2_ = auVar177._6_2_ * (ushort)(byte)((uint)uVar142 >> 0x18);
          auVar77._8_2_ = auVar177._8_2_ * (ushort)(byte)uVar143;
          auVar77._10_2_ = auVar177._10_2_ * (ushort)(byte)((uint)uVar143 >> 8);
          auVar77._12_2_ = auVar177._12_2_ * (ushort)(byte)((uint)uVar143 >> 0x10);
          auVar77._14_2_ = auVar177._14_2_ * (ushort)(byte)((uint)uVar143 >> 0x18);
          auVar64 = NEON_uqadd(auVar105,auVar77,2);
          auVar78._0_8_ =
               CONCAT26((auVar64._6_2_ >> 6) * auVar181._6_2_,
                        CONCAT24((auVar64._4_2_ >> 6) * auVar181._4_2_,
                                 CONCAT22((auVar64._2_2_ >> 6) * auVar181._2_2_,
                                          (auVar64._0_2_ >> 6) * auVar181._0_2_)));
          auVar78._8_2_ = (auVar64._8_2_ >> 6) * auVar181._8_2_;
          auVar78._10_2_ = (auVar64._10_2_ >> 6) * auVar181._10_2_;
          auVar78._12_2_ = (auVar64._12_2_ >> 6) * auVar181._12_2_;
          auVar78._14_2_ = (auVar64._14_2_ >> 6) * auVar181._14_2_;
          auVar64 = NEON_uqadd(auVar66,auVar78,2);
          auVar79._8_8_ = auVar78._8_8_;
          auVar79._0_8_ = NEON_uqshrn(auVar78._0_8_,auVar75,6,2);
          auVar64 = NEON_uqshrn2(auVar79,auVar64,6,2);
          uVar63 = a64_TBL(ZEXT816(0),auVar64,0x908060504020100);
          uVar74 = a64_TBL(ZEXT816(0),auVar64,0xe0d0c0a);
          puVar46[1] = uVar74;
          *puVar46 = uVar63;
          fVar72 = fVar110 + fVar72;
          fVar90 = fVar110 + fVar90;
          fVar92 = fVar110 + fVar92;
          fVar61 = fVar110 + fVar61;
          fVar112 = fVar111 + fVar112;
          fVar114 = fVar111 + fVar114;
          fVar115 = fVar111 + fVar115;
          fVar86 = fVar111 + fVar86;
          fStack_c0 = auVar99._0_4_;
          fStack_bc = auVar99._4_4_;
          fStack_b8 = auVar99._8_4_;
          fStack_b4 = auVar99._12_4_;
          auVar99._0_4_ = fVar97 + fStack_c0;
          auVar99._4_4_ = fVar97 + fStack_bc;
          auVar99._8_4_ = fVar97 + fStack_b8;
          auVar99._12_4_ = fVar97 + fStack_b4;
          iVar49 = iVar49 + 4;
          puVar46 = (undefined8 *)((long)puVar46 + 0xc);
        } while (iVar49 < iVar3);
      }
      uVar44 = uVar44 + 1;
    } while (uVar44 != uVar2);
  }
  return;
}



/* Entry: 1095ceb6c; end: 1095cf6c3;  */

void FUN_1095ceb6c(long param_1,undefined8 param_2,undefined8 param_3,uint *param_4,ulong param_5,
                  undefined8 param_6,undefined8 *param_7,int param_8,char param_9)

{
  uint uVar1;
  uint uVar2;
  char cVar3;
  bool bVar4;
  ulong *puVar5;
  int iVar6;
  ulong uVar7;
  undefined8 *puVar8;
  long lVar9;
  uint *puVar10;
  uint *puVar11;
  uint *puVar12;
  uint uVar13;
  long lVar14;
  int *piVar15;
  ulong uVar16;
  uint *puVar17;
  uint uVar18;
  uint uVar19;
  undefined8 auStack_1f0 [2];
  char cStack_1d9;
  ulong uStack_1d8;
  uint uStack_1d0;
  uint uStack_1cc;
  char cStack_1c1;
  undefined8 uStack_1c0;
  uint uStack_1b8;
  undefined4 uStack_1b4;
  undefined4 uStack_1b0;
  undefined4 uStack_1ac;
  undefined4 uStack_1a8;
  undefined4 uStack_1a4;
  undefined4 uStack_1a0;
  undefined4 uStack_19c;
  undefined4 uStack_198;
  undefined4 uStack_194;
  undefined8 uStack_190;
  undefined8 uStack_188;
  uint *puStack_180;
  undefined8 *puStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  ulong uStack_80;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar12 = param_4 + 4;
  lVar9 = *(long *)puVar12;
  uVar2 = param_4[1];
  uVar7 = (ulong)uVar2;
  uVar18 = (uint)param_6;
  uVar19 = (uint)param_5;
  if (lVar9 == 0) {
LAB_1095cec68:
    if (((2 < (int)uVar2 || param_4[2] != uVar18) || param_4[3] != uVar19 + 0x10) ||
       (lVar9 == 0 || (*param_4 & 0xfff) != 0x10)) {
      uStack_1c0 = (undefined **)CONCAT44(uVar19 + 0x10,uVar18);
      FUN_109a83fd0(param_4,2,&uStack_1c0,0x10);
    }
    uStack_1d8 = 0;
    uStack_1d0 = uVar19;
    uStack_1cc = uVar18;
    FUN_109a852c8(&uStack_1c0,param_4,&uStack_1d8);
    if (*(long *)(param_4 + 0xe) != 0) {
      piVar15 = (int *)(*(long *)(param_4 + 0xe) + 0x14);
      do {
        iVar6 = *piVar15;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar15,0x10);
        if (bVar4) {
          *piVar15 = iVar6 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar6 + -1 == 0) {
        func_0x000109a848d4(param_4);
      }
    }
    param_4[0xe] = 0;
    param_4[0xf] = 0;
    param_4[6] = 0;
    param_4[7] = 0;
    puVar12[0] = 0;
    puVar12[1] = 0;
    param_4[10] = 0;
    param_4[0xb] = 0;
    param_4[8] = 0;
    param_4[9] = 0;
    if (0 < (int)param_4[1]) {
      lVar9 = 0;
      lVar14 = *(long *)(param_4 + 0x10);
      do {
        *(undefined4 *)(lVar14 + lVar9 * 4) = 0;
        lVar9 = lVar9 + 1;
      } while (lVar9 < (int)param_4[1]);
    }
    *(ulong *)(param_4 + 2) = CONCAT44(uStack_1b4,uStack_1b8);
    *(undefined ***)param_4 = uStack_1c0;
    *(ulong *)(param_4 + 6) = CONCAT44(uStack_1a4,uStack_1a8);
    *(ulong *)(param_4 + 4) = CONCAT44(uStack_1ac,uStack_1b0);
    *(ulong *)(param_4 + 10) = CONCAT44(uStack_194,uStack_198);
    *(ulong *)(param_4 + 8) = CONCAT44(uStack_19c,uStack_1a0);
    *(undefined8 *)(param_4 + 0xe) = uStack_188;
    *(undefined8 *)(param_4 + 0xc) = uStack_190;
    puVar10 = *(uint **)(param_4 + 0x12);
    puVar12 = param_4 + 0x14;
    iVar6 = uStack_1c0._4_4_;
    if (puVar10 != puVar12) {
      if (puVar10 != (uint *)0x0) {
        _free(*(undefined8 *)(puVar10 + -2));
      }
      *(uint **)(param_4 + 0x10) = param_4 + 2;
      *(uint **)(param_4 + 0x12) = puVar12;
      puVar10 = puVar12;
      iVar6 = uStack_1c0._4_4_;
    }
    if (2 < iVar6) {
LAB_1095cf108:
      *(uint **)(param_4 + 0x10) = puStack_180;
      *(undefined8 **)(param_4 + 0x12) = puStack_178;
      goto LAB_1095cf110;
    }
    *(undefined8 *)puVar10 = *puStack_178;
    *(undefined8 *)(puVar10 + 2) = puStack_178[1];
  }
  else {
    if ((int)uVar2 < 3) {
      lVar14 = (long)(int)param_4[3] * (long)(int)param_4[2];
    }
    else {
      lVar14 = 1;
      piVar15 = *(int **)(param_4 + 0x10);
      uVar16 = uVar7;
      do {
        lVar14 = lVar14 * *piVar15;
        uVar16 = uVar16 - 1;
        piVar15 = piVar15 + 1;
      } while (uVar16 != 0);
    }
    if (lVar14 == 0) goto LAB_1095cec68;
    puVar10 = param_4 + 2;
    uVar13 = *puVar10;
    if (((param_4[3] == uVar19 && uVar13 == uVar18) &&
        (uVar1 = uVar19 + 0x10,
        (-(ulong)(uVar1 >> 0x1f) & 0xfffffffe00000000 | (ulong)uVar1 << 1) + (long)(int)uVar1 <=
        *(ulong *)(param_4 + 0x14))) &&
       (lVar9 + **(long **)(param_4 + 0x12) * ((long)(int)uVar13 + -1) +
        (-(param_5 >> 0x1f & 1) & 0xfffffffe00000000 | (param_5 & 0xffffffff) << 1) +
        (long)(int)uVar19 + 0x30 <= *(ulong *)(param_4 + 8))) goto LAB_1095cf110;
    if ((int)uVar2 < 3) {
      lVar9 = (long)(int)param_4[3] * (long)(int)uVar13;
    }
    else {
      lVar9 = 1;
      piVar15 = *(int **)(param_4 + 0x10);
      do {
        lVar9 = lVar9 * *piVar15;
        uVar7 = uVar7 - 1;
        piVar15 = piVar15 + 1;
      } while (uVar7 != 0);
    }
    if (lVar9 != 0) {
      uStack_1c0 = (undefined **)0x0;
      uStack_1d8 = 0;
      FUN_109a86b88(param_4,&uStack_1c0,&uStack_1d8);
      FUN_109a86cdc(param_4,*(undefined4 *)((ulong)&uStack_1d8 | 4),
                    *(int *)((ulong)&uStack_1c0 | 4) - param_4[2],uStack_1d8 & 0xffffffff,
                    (int)uStack_1c0 - param_4[3]);
      uVar13 = param_4[2];
    }
    uVar2 = uVar19 + 0x10;
    uVar1 = uVar2 * uVar18;
    puVar17 = param_4 + 0x14;
    if ((ulong)(*(long *)puVar17 * (long)(int)uVar13) <
        (-(ulong)(uVar1 >> 0x1f) & 0xfffffffe00000000 | (ulong)uVar1 << 1) + (long)(int)uVar1) {
      if (((uVar13 != uVar18) || (2 < (int)param_4[1])) ||
         ((param_4[3] != uVar2 || (((*param_4 & 0xfff) != 0x10 || (*(long *)(param_4 + 4) == 0))))))
      {
        uStack_1c0 = (undefined **)CONCAT44(uVar2,uVar18);
        FUN_109a83fd0(param_4,2,&uStack_1c0,0x10);
      }
      uStack_1d8 = 0;
      uStack_1d0 = uVar19;
      uStack_1cc = uVar18;
      FUN_109a852c8(&uStack_1c0,param_4,&uStack_1d8);
      if (*(long *)(param_4 + 0xe) != 0) {
        piVar15 = (int *)(*(long *)(param_4 + 0xe) + 0x14);
        do {
          iVar6 = *piVar15;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar15,0x10);
          if (bVar4) {
            *piVar15 = iVar6 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar6 + -1 == 0) {
          func_0x000109a848d4(param_4);
        }
      }
      param_4[0xe] = 0;
      param_4[0xf] = 0;
      param_4[6] = 0;
      param_4[7] = 0;
      puVar12[0] = 0;
      puVar12[1] = 0;
      param_4[10] = 0;
      param_4[0xb] = 0;
      param_4[8] = 0;
      param_4[9] = 0;
      if (0 < (int)param_4[1]) {
        lVar9 = 0;
        lVar14 = *(long *)(param_4 + 0x10);
        do {
          *(undefined4 *)(lVar14 + lVar9 * 4) = 0;
          lVar9 = lVar9 + 1;
        } while (lVar9 < (int)param_4[1]);
      }
    }
    else {
      FUN_109a890bc(&uStack_1c0,param_4,3,param_6);
      if (*(long *)(param_4 + 0xe) != 0) {
        piVar15 = (int *)(*(long *)(param_4 + 0xe) + 0x14);
        do {
          iVar6 = *piVar15;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar15,0x10);
          if (bVar4) {
            *piVar15 = iVar6 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar6 + -1 == 0) {
          func_0x000109a848d4(param_4);
        }
      }
      param_4[0xe] = 0;
      param_4[0xf] = 0;
      param_4[6] = 0;
      param_4[7] = 0;
      puVar12[0] = 0;
      puVar12[1] = 0;
      param_4[10] = 0;
      param_4[0xb] = 0;
      param_4[8] = 0;
      param_4[9] = 0;
      if (0 < (int)param_4[1]) {
        lVar9 = 0;
        lVar14 = *(long *)(param_4 + 0x10);
        do {
          *(undefined4 *)(lVar14 + lVar9 * 4) = 0;
          lVar9 = lVar9 + 1;
        } while (lVar9 < (int)param_4[1]);
      }
      *(ulong *)(param_4 + 2) = CONCAT44(uStack_1b4,uStack_1b8);
      *(undefined ***)param_4 = uStack_1c0;
      *(ulong *)(param_4 + 6) = CONCAT44(uStack_1a4,uStack_1a8);
      *(ulong *)(param_4 + 4) = CONCAT44(uStack_1ac,uStack_1b0);
      *(ulong *)(param_4 + 10) = CONCAT44(uStack_194,uStack_198);
      *(ulong *)(param_4 + 8) = CONCAT44(uStack_19c,uStack_1a0);
      *(undefined8 *)(param_4 + 0xe) = uStack_188;
      *(undefined8 *)(param_4 + 0xc) = uStack_190;
      puVar11 = *(uint **)(param_4 + 0x12);
      iVar6 = uStack_1c0._4_4_;
      if (puVar11 != puVar17) {
        if (puVar11 != (uint *)0x0) {
          _free(*(undefined8 *)(puVar11 + -2));
          iVar6 = uStack_1c0._4_4_;
        }
        *(uint **)(param_4 + 0x10) = puVar10;
        *(uint **)(param_4 + 0x12) = puVar17;
        puVar11 = puVar17;
      }
      if (iVar6 < 3) {
        puVar8 = (undefined8 *)((ulong)&uStack_1c0 | 4);
        *(undefined8 *)puVar11 = *puStack_178;
        *(undefined8 *)(puVar11 + 2) = puStack_178[1];
        uStack_1c0 = (undefined **)CONCAT44(uStack_1c0._4_4_,0x42ff0000);
        puVar8[1] = 0;
        *puVar8 = 0;
        puVar8[3] = 0;
        puVar8[2] = 0;
        puVar8[5] = 0;
        puVar8[4] = 0;
        *(undefined8 *)((long)puVar8 + 0x34) = 0;
        *(undefined8 *)((long)puVar8 + 0x2c) = 0;
        if (puStack_178 != &uStack_170) {
          _free(puStack_178[-1]);
        }
      }
      else {
        *(uint **)(param_4 + 0x10) = puStack_180;
        *(undefined8 **)(param_4 + 0x12) = puStack_178;
      }
      uStack_1d8 = 0;
      uStack_1d0 = uVar19;
      uStack_1cc = uVar18;
      FUN_109a852c8(&uStack_1c0,param_4,&uStack_1d8);
      if (*(long *)(param_4 + 0xe) != 0) {
        piVar15 = (int *)(*(long *)(param_4 + 0xe) + 0x14);
        do {
          iVar6 = *piVar15;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar15,0x10);
          if (bVar4) {
            *piVar15 = iVar6 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar6 + -1 == 0) {
          func_0x000109a848d4(param_4);
        }
      }
      param_4[0xe] = 0;
      param_4[0xf] = 0;
      param_4[6] = 0;
      param_4[7] = 0;
      puVar12[0] = 0;
      puVar12[1] = 0;
      param_4[10] = 0;
      param_4[0xb] = 0;
      param_4[8] = 0;
      param_4[9] = 0;
      if (0 < (int)param_4[1]) {
        lVar9 = 0;
        lVar14 = *(long *)(param_4 + 0x10);
        do {
          *(undefined4 *)(lVar14 + lVar9 * 4) = 0;
          lVar9 = lVar9 + 1;
        } while (lVar9 < (int)param_4[1]);
      }
    }
    *(ulong *)(param_4 + 2) = CONCAT44(uStack_1b4,uStack_1b8);
    *(undefined ***)param_4 = uStack_1c0;
    *(ulong *)(param_4 + 6) = CONCAT44(uStack_1a4,uStack_1a8);
    *(ulong *)(param_4 + 4) = CONCAT44(uStack_1ac,uStack_1b0);
    *(ulong *)(param_4 + 10) = CONCAT44(uStack_194,uStack_198);
    *(ulong *)(param_4 + 8) = CONCAT44(uStack_19c,uStack_1a0);
    *(undefined8 *)(param_4 + 0xe) = uStack_188;
    *(undefined8 *)(param_4 + 0xc) = uStack_190;
    puVar12 = *(uint **)(param_4 + 0x12);
    iVar6 = uStack_1c0._4_4_;
    if (puVar12 != puVar17) {
      if (puVar12 != (uint *)0x0) {
        _free(*(undefined8 *)(puVar12 + -2));
      }
      *(uint **)(param_4 + 0x10) = puVar10;
      *(uint **)(param_4 + 0x12) = puVar17;
      puVar12 = puVar17;
      iVar6 = uStack_1c0._4_4_;
    }
    if (2 < iVar6) goto LAB_1095cf108;
    *(undefined8 *)puVar12 = *puStack_178;
    *(undefined8 *)(puVar12 + 2) = puStack_178[1];
  }
  puVar8 = (undefined8 *)((ulong)&uStack_1c0 | 4);
  uStack_1c0 = (undefined **)CONCAT44(uStack_1c0._4_4_,0x42ff0000);
  puVar8[1] = 0;
  *puVar8 = 0;
  puVar8[3] = 0;
  puVar8[2] = 0;
  puVar8[5] = 0;
  puVar8[4] = 0;
  *(undefined8 *)((long)puVar8 + 0x34) = 0;
  *(undefined8 *)((long)puVar8 + 0x2c) = 0;
  if (puStack_178 != &uStack_170) {
    _free(puStack_178[-1]);
  }
LAB_1095cf110:
  if ((*(byte *)(param_1 + 0xc) & 1) == 0) {
    if (param_8 == 0) {
      if (4 < iRam00000001132dfb08) {
        uStack_80 = 0;
        uStack_98 = 0;
        uStack_a0 = 0;
        uStack_88 = 0;
        uStack_90 = 0;
        uStack_b8 = 0;
        uStack_c0 = 0;
        uStack_a8 = 0;
        uStack_b0 = 0;
        uStack_d8 = 0;
        uStack_e0 = 0;
        uStack_c8 = 0;
        uStack_d0 = 0;
        uStack_f8 = 0;
        uStack_100 = 0;
        uStack_e8 = 0;
        uStack_f0 = 0;
        uStack_118 = 0;
        uStack_120 = 0;
        uStack_108 = 0;
        uStack_110 = 0;
        uStack_138 = 0;
        uStack_140 = 0;
        uStack_128 = 0;
        uStack_130 = 0;
        uStack_158 = 0;
        uStack_160 = 0;
        uStack_148 = 0;
        uStack_150 = 0;
        puStack_178 = (undefined8 *)0x0;
        puStack_180 = (uint *)0x0;
        uStack_168 = 0;
        uStack_170 = 0;
        uStack_198 = 0;
        uStack_194 = 0;
        uStack_1a0 = 0;
        uStack_19c = 0;
        uStack_188 = 0;
        uStack_190 = 0;
        uStack_1b8 = 0;
        uStack_1b4 = 0;
        uStack_1c0 = (undefined **)0x0;
        uStack_1a8 = 0;
        uStack_1a4 = 0;
        uStack_1b0 = 0;
        uStack_1ac = 0;
        FUN_10926db08(&uStack_1c0);
        uStack_b8 = CONCAT44(uStack_b8._4_4_,3);
        uStack_a8 = 0;
        uStack_b0 = 0;
        uStack_98 = 0;
        uStack_a0 = 0;
        uStack_88 = 0;
        uStack_90 = 0;
        uStack_80 = uStack_80 & 0xffffffff00000000;
        func_0x000107c31940(&uStack_1d8,&UNK_10f5760ce);
        func_0x000107c31940(auStack_1f0,&UNK_10f57618a);
        FUN_109671348(&uStack_1c0,5,&uStack_1d8,auStack_1f0,0x473);
        FUN_1092b4db8();
        if (cStack_1d9 < '\0') {
          __ZdlPv(auStack_1f0[0]);
        }
        if (cStack_1c1 < '\0') {
          __ZdlPv(uStack_1d8);
        }
        FUN_109671170(&uStack_1c0);
      }
      uStack_1c0 = &PTR_DAT_110afea78;
      uStack_1ac = (undefined4)param_7[1];
      uStack_1a8 = (undefined4)((ulong)param_7[1] >> 0x20);
      uStack_1b4 = (undefined4)*param_7;
      uStack_1b0 = (undefined4)((ulong)*param_7 >> 0x20);
      uStack_19c = (undefined4)param_7[3];
      uStack_198 = (undefined4)((ulong)param_7[3] >> 0x20);
      uStack_1a4 = (undefined4)param_7[2];
      uStack_1a0 = (undefined4)((ulong)param_7[2] >> 0x20);
      uStack_194 = *(undefined4 *)(param_7 + 4);
      uStack_1b8 = uRam00000001132dfb70;
      puStack_178 = (undefined8 *)
                    CONCAT44(puStack_178._4_4_,
                             (int)((double)(int)param_4[2] / (double)(int)uRam00000001132dfb70));
      uStack_1d8 = (ulong)uRam00000001132dfb70 << 0x20;
      puVar5 = &uStack_1d8;
      uStack_190 = param_2;
      uStack_188 = param_3;
      puStack_180 = param_4;
      func_0x000109aa87cc(0xbff0000000000000,puVar5,&uStack_1c0);
    }
    else {
      if (4 < iRam00000001132dfb08) {
        uStack_80 = 0;
        uStack_98 = 0;
        uStack_a0 = 0;
        uStack_88 = 0;
        uStack_90 = 0;
        uStack_b8 = 0;
        uStack_c0 = 0;
        uStack_a8 = 0;
        uStack_b0 = 0;
        uStack_d8 = 0;
        uStack_e0 = 0;
        uStack_c8 = 0;
        uStack_d0 = 0;
        uStack_f8 = 0;
        uStack_100 = 0;
        uStack_e8 = 0;
        uStack_f0 = 0;
        uStack_118 = 0;
        uStack_120 = 0;
        uStack_108 = 0;
        uStack_110 = 0;
        uStack_138 = 0;
        uStack_140 = 0;
        uStack_128 = 0;
        uStack_130 = 0;
        uStack_158 = 0;
        uStack_160 = 0;
        uStack_148 = 0;
        uStack_150 = 0;
        puStack_178 = (undefined8 *)0x0;
        puStack_180 = (uint *)0x0;
        uStack_168 = 0;
        uStack_170 = 0;
        uStack_198 = 0;
        uStack_194 = 0;
        uStack_1a0 = 0;
        uStack_19c = 0;
        uStack_188 = 0;
        uStack_190 = 0;
        uStack_1b8 = 0;
        uStack_1b4 = 0;
        uStack_1c0 = (undefined **)0x0;
        uStack_1a8 = 0;
        uStack_1a4 = 0;
        uStack_1b0 = 0;
        uStack_1ac = 0;
        FUN_10926db08(&uStack_1c0);
        uStack_b8 = CONCAT44(uStack_b8._4_4_,3);
        uStack_a8 = 0;
        uStack_b0 = 0;
        uStack_98 = 0;
        uStack_a0 = 0;
        uStack_88 = 0;
        uStack_90 = 0;
        uStack_80 = uStack_80 & 0xffffffff00000000;
        func_0x000107c31940(&uStack_1d8,&UNK_10f5760ce);
        func_0x000107c31940(auStack_1f0,&UNK_10f57618a);
        FUN_109671348(&uStack_1c0,5,&uStack_1d8,auStack_1f0,0x46e);
        FUN_1092b4db8();
        if (cStack_1d9 < '\0') {
          __ZdlPv(auStack_1f0[0]);
        }
        if (cStack_1c1 < '\0') {
          __ZdlPv(uStack_1d8);
        }
        FUN_109671170(&uStack_1c0);
      }
      uStack_1c0 = &PTR_FUN_110afeaa0;
      uStack_1ac = (undefined4)param_7[1];
      uStack_1a8 = (undefined4)((ulong)param_7[1] >> 0x20);
      uStack_1b4 = (undefined4)*param_7;
      uStack_1b0 = (undefined4)((ulong)*param_7 >> 0x20);
      uStack_19c = (undefined4)param_7[3];
      uStack_198 = (undefined4)((ulong)param_7[3] >> 0x20);
      uStack_1a4 = (undefined4)param_7[2];
      uStack_1a0 = (undefined4)((ulong)param_7[2] >> 0x20);
      uStack_194 = *(undefined4 *)(param_7 + 4);
      uStack_1b8 = uRam00000001132dfb70;
      puStack_178 = (undefined8 *)
                    CONCAT44(puStack_178._4_4_,
                             (int)((double)(int)param_4[2] / (double)(int)uRam00000001132dfb70));
      uStack_1d8 = (ulong)uRam00000001132dfb70 << 0x20;
      puVar5 = &uStack_1d8;
      uStack_190 = param_2;
      uStack_188 = param_3;
      puStack_180 = param_4;
      func_0x000109aa87cc(0xbff0000000000000,puVar5,&uStack_1c0);
    }
  }
  else {
    lVar9 = 0x88;
    if (param_9 == '\0') {
      lVar9 = 0xc4;
    }
    if (param_8 == 0) {
      if (4 < iRam00000001132dfb08) {
        uStack_80 = 0;
        uStack_98 = 0;
        uStack_a0 = 0;
        uStack_88 = 0;
        uStack_90 = 0;
        uStack_b8 = 0;
        uStack_c0 = 0;
        uStack_a8 = 0;
        uStack_b0 = 0;
        uStack_d8 = 0;
        uStack_e0 = 0;
        uStack_c8 = 0;
        uStack_d0 = 0;
        uStack_f8 = 0;
        uStack_100 = 0;
        uStack_e8 = 0;
        uStack_f0 = 0;
        uStack_118 = 0;
        uStack_120 = 0;
        uStack_108 = 0;
        uStack_110 = 0;
        uStack_138 = 0;
        uStack_140 = 0;
        uStack_128 = 0;
        uStack_130 = 0;
        uStack_158 = 0;
        uStack_160 = 0;
        uStack_148 = 0;
        uStack_150 = 0;
        puStack_178 = (undefined8 *)0x0;
        puStack_180 = (uint *)0x0;
        uStack_168 = 0;
        uStack_170 = 0;
        uStack_198 = 0;
        uStack_194 = 0;
        uStack_1a0 = 0;
        uStack_19c = 0;
        uStack_188 = 0;
        uStack_190 = 0;
        uStack_1b8 = 0;
        uStack_1b4 = 0;
        uStack_1c0 = (undefined **)0x0;
        uStack_1a8 = 0;
        uStack_1a4 = 0;
        uStack_1b0 = 0;
        uStack_1ac = 0;
        FUN_10926db08(&uStack_1c0);
        uStack_b8 = CONCAT44(uStack_b8._4_4_,3);
        uStack_a8 = 0;
        uStack_b0 = 0;
        uStack_98 = 0;
        uStack_a0 = 0;
        uStack_88 = 0;
        uStack_90 = 0;
        uStack_80 = uStack_80 & 0xffffffff00000000;
        func_0x000107c31940(&uStack_1d8,&UNK_10f5760ce);
        func_0x000107c31940(auStack_1f0,&UNK_10f57618a);
        FUN_109671348(&uStack_1c0,5,&uStack_1d8,auStack_1f0,0x480);
        FUN_1092b4db8();
        if (cStack_1d9 < '\0') {
          __ZdlPv(auStack_1f0[0]);
        }
        if (cStack_1c1 < '\0') {
          __ZdlPv(uStack_1d8);
        }
        FUN_109671170(&uStack_1c0);
      }
      uStack_1c0 = &PTR_DAT_110afea28;
      uStack_1ac = (undefined4)param_7[1];
      uStack_1a8 = (undefined4)((ulong)param_7[1] >> 0x20);
      uStack_1b4 = (undefined4)*param_7;
      uStack_1b0 = (undefined4)((ulong)*param_7 >> 0x20);
      uStack_19c = (undefined4)param_7[3];
      uStack_198 = (undefined4)((ulong)param_7[3] >> 0x20);
      uStack_1a4 = (undefined4)param_7[2];
      uStack_1a0 = (undefined4)((ulong)param_7[2] >> 0x20);
      uStack_194 = *(undefined4 *)(param_7 + 4);
      uStack_1b8 = uRam00000001132dfb70;
      uStack_170 = CONCAT44(uStack_170._4_4_,
                            (int)((double)(int)param_4[2] / (double)(int)uRam00000001132dfb70));
      uStack_1d8 = (ulong)uRam00000001132dfb70 << 0x20;
      puVar5 = &uStack_1d8;
      uStack_190 = param_2;
      uStack_188 = param_3;
      puStack_180 = param_4;
      puStack_178 = (undefined8 *)(param_1 + lVar9);
      func_0x000109aa87cc(0xbff0000000000000,puVar5,&uStack_1c0);
    }
    else {
      if (4 < iRam00000001132dfb08) {
        uStack_80 = 0;
        uStack_98 = 0;
        uStack_a0 = 0;
        uStack_88 = 0;
        uStack_90 = 0;
        uStack_b8 = 0;
        uStack_c0 = 0;
        uStack_a8 = 0;
        uStack_b0 = 0;
        uStack_d8 = 0;
        uStack_e0 = 0;
        uStack_c8 = 0;
        uStack_d0 = 0;
        uStack_f8 = 0;
        uStack_100 = 0;
        uStack_e8 = 0;
        uStack_f0 = 0;
        uStack_118 = 0;
        uStack_120 = 0;
        uStack_108 = 0;
        uStack_110 = 0;
        uStack_138 = 0;
        uStack_140 = 0;
        uStack_128 = 0;
        uStack_130 = 0;
        uStack_158 = 0;
        uStack_160 = 0;
        uStack_148 = 0;
        uStack_150 = 0;
        puStack_178 = (undefined8 *)0x0;
        puStack_180 = (uint *)0x0;
        uStack_168 = 0;
        uStack_170 = 0;
        uStack_198 = 0;
        uStack_194 = 0;
        uStack_1a0 = 0;
        uStack_19c = 0;
        uStack_188 = 0;
        uStack_190 = 0;
        uStack_1b8 = 0;
        uStack_1b4 = 0;
        uStack_1c0 = (undefined **)0x0;
        uStack_1a8 = 0;
        uStack_1a4 = 0;
        uStack_1b0 = 0;
        uStack_1ac = 0;
        FUN_10926db08(&uStack_1c0);
        uStack_b8 = CONCAT44(uStack_b8._4_4_,3);
        uStack_a8 = 0;
        uStack_b0 = 0;
        uStack_98 = 0;
        uStack_a0 = 0;
        uStack_88 = 0;
        uStack_90 = 0;
        uStack_80 = uStack_80 & 0xffffffff00000000;
        func_0x000107c31940(&uStack_1d8,&UNK_10f5760ce);
        func_0x000107c31940(auStack_1f0,&UNK_10f57618a);
        FUN_109671348(&uStack_1c0,5,&uStack_1d8,auStack_1f0,0x47c);
        FUN_1092b4db8();
        if (cStack_1d9 < '\0') {
          __ZdlPv(auStack_1f0[0]);
        }
        if (cStack_1c1 < '\0') {
          __ZdlPv(uStack_1d8);
        }
        FUN_109671170(&uStack_1c0);
      }
      uStack_1c0 = &PTR_DAT_110afea50;
      uStack_1ac = (undefined4)param_7[1];
      uStack_1a8 = (undefined4)((ulong)param_7[1] >> 0x20);
      uStack_1b4 = (undefined4)*param_7;
      uStack_1b0 = (undefined4)((ulong)*param_7 >> 0x20);
      uStack_19c = (undefined4)param_7[3];
      uStack_198 = (undefined4)((ulong)param_7[3] >> 0x20);
      uStack_1a4 = (undefined4)param_7[2];
      uStack_1a0 = (undefined4)((ulong)param_7[2] >> 0x20);
      uStack_194 = *(undefined4 *)(param_7 + 4);
      uStack_1b8 = uRam00000001132dfb70;
      uStack_170 = CONCAT44(uStack_170._4_4_,
                            (int)((double)(int)param_4[2] / (double)(int)uRam00000001132dfb70));
      uStack_1d8 = (ulong)uRam00000001132dfb70 << 0x20;
      puVar5 = &uStack_1d8;
      uStack_190 = param_2;
      uStack_188 = param_3;
      puStack_180 = param_4;
      puStack_178 = (undefined8 *)(param_1 + lVar9);
      func_0x000109aa87cc(0xbff0000000000000,puVar5,&uStack_1c0);
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010567aa40(&uStack_1c0);
  __Unwind_Resume(puVar5);
  return;
}



/* Entry: 1095cf6c4; end: 1095cf6d3;  */

void FUN_1095cf6c4(void)

{
  return;
}



/* Entry: 1095cf6d4; end: 1095cf89b;  */

void FUN_1095cf6d4(undefined8 *param_1,undefined8 param_2,undefined4 *param_3,undefined4 *param_4)

{
  float *pfVar1;
  undefined1 *puVar2;
  long lVar3;
  undefined4 *puVar4;
  long lVar5;
  float *pfVar6;
  long lVar7;
  float *pfVar8;
  float fVar9;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined4 uStack_f0;
  float afStack_e4 [9];
  float afStack_c0 [9];
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined8 uStack_84;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined8 uStack_60;
  undefined4 uStack_58;
  undefined1 uStack_51;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined4 uStack_30;
  
  lVar3 = 0;
  uStack_78 = param_3[2];
  uStack_74 = 0;
  uStack_70 = *param_3;
  uStack_6c = 0;
  uStack_68 = param_3[2];
  uStack_64 = param_3[1];
  uStack_60 = 0;
  uStack_58 = 0x3f800000;
  uStack_9c = param_4[2];
  uStack_98 = 0;
  uStack_94 = *param_4;
  uStack_90 = 0;
  uStack_8c = param_4[2];
  uStack_88 = param_4[1];
  uStack_7c = 0x3f800000;
  puVar4 = &uStack_78;
  uStack_84 = 0;
  do {
    lVar5 = 0;
    pfVar1 = (float *)(param_3 + 0x2c);
    do {
      lVar7 = 0;
      fVar9 = 0.0;
      pfVar6 = pfVar1;
      do {
        fVar9 = fVar9 + *pfVar6 * *(float *)((long)puVar4 + lVar7);
        lVar7 = lVar7 + 4;
        pfVar6 = pfVar6 + 3;
      } while (lVar7 != 0xc);
      afStack_e4[lVar5 + lVar3 * 3] = fVar9;
      lVar5 = lVar5 + 1;
      pfVar1 = pfVar1 + 1;
    } while (lVar5 != 3);
    lVar3 = lVar3 + 1;
    puVar4 = puVar4 + 3;
  } while (lVar3 != 3);
  uStack_30 = 0;
  uStack_48 = 0;
  uStack_50 = 0;
  uStack_38 = 0;
  uStack_40 = 0;
  pfVar1 = afStack_c0;
  func_0x0001095cf8ac(pfVar1,&uStack_9c,&uStack_50,0);
  if ((int)pfVar1 == 0) {
    uStack_f0 = 0;
    uStack_108 = 0;
    uStack_110 = 0;
    uStack_f8 = 0;
    uStack_100 = 0;
  }
  else {
    uStack_108 = uStack_48;
    uStack_110 = uStack_50;
    uStack_f8 = uStack_38;
    uStack_100 = uStack_40;
    uStack_f0 = uStack_30;
  }
  lVar3 = 0;
  pfVar1 = afStack_e4;
  do {
    lVar5 = 0;
    pfVar6 = (float *)&uStack_110;
    do {
      lVar7 = 0;
      fVar9 = 0.0;
      pfVar8 = pfVar6;
      do {
        fVar9 = fVar9 + *pfVar8 * *(float *)((long)pfVar1 + lVar7);
        lVar7 = lVar7 + 4;
        pfVar8 = pfVar8 + 3;
      } while (lVar7 != 0xc);
      afStack_c0[lVar5 + lVar3 * 3] = fVar9;
      lVar5 = lVar5 + 1;
      pfVar6 = pfVar6 + 1;
    } while (lVar5 != 3);
    lVar3 = lVar3 + 1;
    pfVar1 = pfVar1 + 3;
  } while (lVar3 != 3);
  uStack_30 = 0;
  uStack_48 = 0;
  uStack_50 = 0;
  uStack_38 = 0;
  uStack_40 = 0;
  puVar2 = &uStack_51;
  func_0x0001095cf8ac(puVar2,afStack_c0,&uStack_50,0);
  if ((int)puVar2 == 0) {
    *(undefined4 *)(param_1 + 4) = 0;
    param_1[1] = 0;
    *param_1 = 0;
    param_1[3] = 0;
    param_1[2] = 0;
  }
  else {
    param_1[1] = uStack_48;
    *param_1 = uStack_50;
    param_1[3] = uStack_38;
    param_1[2] = uStack_40;
    *(undefined4 *)(param_1 + 4) = uStack_30;
  }
  return;
}



/* Entry: 1095cf89c; end: 1095cf9df;  */

void FUN_1095cf89c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1095cf9e0; end: 1095cfb5f;  */

void FUN_1095cf9e0(float param_1,float param_2,float param_3,float *param_4,float *param_5,
                  float param_6,int param_7)

{
  float *pfVar1;
  float fVar2;
  ulong uVar3;
  undefined8 *extraout_x8;
  undefined4 uVar4;
  long lVar5;
  undefined8 *puVar6;
  int iVar7;
  long lVar8;
  int iVar9;
  int *piVar10;
  float fVar11;
  float *pfVar12;
  float fStack_30;
  float fStack_2c;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  fVar2 = SUB84(param_5,0);
  pfVar1 = param_4;
  if ((((*param_4 != param_1) || (param_4[1] != param_2)) || (param_4[2] != param_3)) ||
     ((param_4[3] != fVar2 || (param_4[4] != param_6)))) {
    *param_4 = param_1;
    param_4[1] = param_2;
    param_4[2] = param_3;
    param_4[3] = fVar2;
    param_4[4] = param_6;
    param_4[5] = 0.0;
    param_4[6] = 0.0;
    param_4[7] = fVar2;
    param_4[8] = param_6;
    *(char *)(param_4 + 0x22) = (char)param_7;
    if (param_7 != 0) {
      if (((2 < (int)param_4[0xb]) || (param_4[0xc] != param_6)) ||
         ((param_4[0xd] != fVar2 ||
          ((((uint)param_4[10] & 0xfff) != 0x15 || (*(long *)(param_4 + 0xe) == 0)))))) {
        pfVar1 = param_4 + 10;
        param_5 = (float *)0x2;
        fStack_30 = param_6;
        fStack_2c = fVar2;
        FUN_109a83fd0(pfVar1,2,&fStack_30,0x15);
        param_6 = param_4[4];
      }
      if (0 < (int)param_6) {
        uVar3 = 0;
        lVar5 = *(long *)(param_4 + 0xe);
        lVar8 = **(long **)(param_4 + 0x1c);
        fVar2 = param_4[3];
        do {
          if (0 < (int)fVar2) {
            fVar11 = 0.0;
            pfVar12 = (float *)(lVar5 + uVar3 * lVar8);
            do {
              *pfVar12 = ((float)(uint)fVar11 - *param_4) / param_4[2];
              pfVar12[1] = ((float)(uVar3 & 0xffffffff) - param_4[1]) / param_4[2];
              pfVar12[2] = 1.0;
              fVar11 = (float)((int)fVar11 + 1);
              pfVar12 = pfVar12 + 3;
            } while (fVar2 != fVar11);
          }
          uVar3 = uVar3 + 1;
        } while (uVar3 != (uint)param_6);
      }
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return;
  }
  ___stack_chk_fail();
  if (*(long *)(pfVar1 + 0xe) != 0) {
    uVar3 = (ulong)(uint)pfVar1[0xb];
    if ((int)pfVar1[0xb] < 3) {
      lVar5 = (long)(int)pfVar1[0xd] * (long)(int)pfVar1[0xc];
    }
    else {
      lVar5 = 1;
      piVar10 = *(int **)(pfVar1 + 0x1a);
      do {
        lVar5 = lVar5 * *piVar10;
        uVar3 = uVar3 - 1;
        piVar10 = piVar10 + 1;
      } while (uVar3 != 0);
    }
    if (lVar5 != 0) {
      iVar7 = (int)(long)(float)(int)*param_5;
      if ((iVar7 < (int)pfVar1[5]) || ((int)pfVar1[7] + (int)pfVar1[5] <= iVar7)) {
LAB_1095cfc40:
        *(undefined4 *)extraout_x8 = 0xbf800000;
        *(undefined8 *)((long)extraout_x8 + 4) = 0;
        return;
      }
      iVar9 = (int)(long)(float)(int)param_5[1];
      if ((iVar9 < (int)pfVar1[6]) || ((int)pfVar1[8] + (int)pfVar1[6] <= iVar9))
      goto LAB_1095cfc40;
      puVar6 = (undefined8 *)
               (*(long *)(pfVar1 + 0xe) + **(long **)(pfVar1 + 0x1c) * (long)iVar9 +
               (long)iVar7 * 0xc);
      *extraout_x8 = *puVar6;
      uVar4 = *(undefined4 *)(puVar6 + 1);
      goto LAB_1095cfc38;
    }
  }
  *extraout_x8 = CONCAT44(((float)((ulong)*(undefined8 *)param_5 >> 0x20) -
                          (float)((ulong)*(undefined8 *)pfVar1 >> 0x20)) * (1.0 / pfVar1[2]),
                          ((float)*(undefined8 *)param_5 - (float)*(undefined8 *)pfVar1) *
                          (1.0 / pfVar1[2]));
  uVar4 = 0x3f800000;
LAB_1095cfc38:
  *(undefined4 *)(extraout_x8 + 1) = uVar4;
  return;
}



/* Entry: 1095cfb60; end: 1095cfc4f;  */

void FUN_1095cfb60(undefined8 *param_1,undefined8 *param_2,float *param_3)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  int iVar3;
  ulong uVar4;
  int iVar5;
  long lVar6;
  int *piVar7;
  
  if (param_2[7] != 0) {
    uVar4 = (ulong)*(uint *)((long)param_2 + 0x2c);
    if ((int)*(uint *)((long)param_2 + 0x2c) < 3) {
      lVar6 = (long)*(int *)((long)param_2 + 0x34) * (long)*(int *)(param_2 + 6);
    }
    else {
      lVar6 = 1;
      piVar7 = (int *)param_2[0xd];
      do {
        lVar6 = lVar6 * *piVar7;
        uVar4 = uVar4 - 1;
        piVar7 = piVar7 + 1;
      } while (uVar4 != 0);
    }
    if (lVar6 != 0) {
      iVar3 = (int)(long)(float)(int)*param_3;
      if ((iVar3 < *(int *)((long)param_2 + 0x14)) ||
         (*(int *)((long)param_2 + 0x1c) + *(int *)((long)param_2 + 0x14) <= iVar3)) {
LAB_1095cfc40:
        *(undefined4 *)param_1 = 0xbf800000;
        *(undefined8 *)((long)param_1 + 4) = 0;
        return;
      }
      iVar5 = (int)(long)(float)(int)param_3[1];
      if ((iVar5 < *(int *)(param_2 + 3)) ||
         (*(int *)(param_2 + 4) + *(int *)(param_2 + 3) <= iVar5)) goto LAB_1095cfc40;
      puVar2 = (undefined8 *)(param_2[7] + *(long *)param_2[0xe] * (long)iVar5 + (long)iVar3 * 0xc);
      *param_1 = *puVar2;
      uVar1 = *(undefined4 *)(puVar2 + 1);
      goto LAB_1095cfc38;
    }
  }
  *param_1 = CONCAT44(((float)((ulong)*(undefined8 *)param_3 >> 0x20) -
                      (float)((ulong)*param_2 >> 0x20)) * (1.0 / *(float *)(param_2 + 1)),
                      ((float)*(undefined8 *)param_3 - (float)*param_2) *
                      (1.0 / *(float *)(param_2 + 1)));
  uVar1 = 0x3f800000;
LAB_1095cfc38:
  *(undefined4 *)(param_1 + 1) = uVar1;
  return;
}



/* Entry: 1095cfc50; end: 1095cfd0b;  */

void FUN_1095cfc50(undefined8 param_1,undefined8 param_2,float param_3,long param_4,
                  undefined8 *param_5)

{
  undefined8 *puVar1;
  long extraout_x8;
  long lVar2;
  float *pfVar3;
  long lVar4;
  float *pfVar5;
  long lVar6;
  float *pfVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  float fVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  float afStack_180 [5];
  float fStack_16c;
  undefined4 uStack_168;
  float fStack_164;
  float fStack_160;
  float afStack_150 [3];
  undefined8 uStack_144;
  undefined4 uStack_13c;
  float fStack_138;
  undefined4 uStack_134;
  float fStack_130;
  float fStack_12c;
  float fStack_128;
  undefined4 uStack_124;
  float fStack_120;
  float fStack_11c;
  undefined8 uStack_118;
  undefined8 uStack_110;
  float afStack_108 [9];
  float afStack_e4 [9];
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined4 uStack_60;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined4 uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar12 = param_5[1];
  uVar11 = *param_5;
  uVar15 = param_5[3];
  uVar14 = param_5[2];
  *(undefined4 *)(param_4 + 0xac) = *(undefined4 *)(param_5 + 4);
  *(undefined8 *)(param_4 + 0xa4) = uVar15;
  *(undefined8 *)(param_4 + 0x9c) = uVar14;
  *(undefined8 *)(param_4 + 0x94) = uVar12;
  *(undefined8 *)(param_4 + 0x8c) = uVar11;
  uStack_60 = 0;
  uStack_78 = 0;
  uStack_80 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  puVar1 = &uStack_50;
  func_0x0001095cf8ac(puVar1,param_4 + 0x8c,&uStack_80,0);
  if ((int)puVar1 == 0) {
    uStack_30 = 0;
    uStack_48 = 0;
    uStack_50 = 0;
    uStack_38 = 0;
    uStack_40 = 0;
  }
  else {
    uStack_48 = uStack_78;
    uStack_50 = uStack_80;
    uStack_38 = uStack_68;
    uStack_40 = uStack_70;
    uStack_30 = uStack_60;
  }
  *(undefined8 *)(param_4 + 0xb8) = uStack_48;
  *(undefined8 *)(param_4 + 0xb0) = uStack_50;
  *(undefined8 *)(param_4 + 200) = uStack_38;
  *(undefined8 *)(param_4 + 0xc0) = uStack_40;
  *(undefined4 *)(param_4 + 0xd0) = uStack_30;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return;
  }
  uVar11 = uStack_50;
  uVar12 = uStack_40;
  ___stack_chk_fail();
  fVar10 = (float)uVar11;
  fVar13 = (float)uVar12;
  __Unwind_Resume();
  fVar8 = fVar13;
  ___sincosf_stret();
  fVar9 = fVar13;
  ___sincosf_stret();
  lVar2 = 0;
  fStack_12c = fVar9;
  fStack_128 = -param_3;
  uStack_124 = 0;
  fStack_120 = param_3;
  fStack_11c = fVar9;
  uStack_110 = 0x3f80000000000000;
  uStack_118 = 0;
  afStack_150[0] = fVar13;
  afStack_150[1] = 0.0;
  afStack_150[2] = fVar8;
  uStack_144 = 0x3f80000000000000;
  uStack_13c = 0;
  fStack_138 = -fVar8;
  uStack_134 = 0;
  pfVar3 = &fStack_12c;
  fStack_130 = fVar13;
  do {
    lVar4 = 0;
    pfVar5 = afStack_150;
    do {
      lVar6 = 0;
      fVar9 = 0.0;
      pfVar7 = pfVar5;
      do {
        afStack_180[4] = *(float *)((long)pfVar3 + lVar6);
        fVar9 = fVar9 + *pfVar7 * afStack_180[4];
        lVar6 = lVar6 + 4;
        pfVar7 = pfVar7 + 3;
      } while (lVar6 != 0xc);
      afStack_108[lVar4 + lVar2 * 3] = fVar9;
      lVar4 = lVar4 + 1;
      pfVar5 = pfVar5 + 1;
    } while (lVar4 != 3);
    lVar2 = lVar2 + 1;
    pfVar3 = pfVar3 + 3;
  } while (lVar2 != 3);
  ___sincosf_stret();
  lVar2 = 0;
  afStack_180[2] = 0.0;
  afStack_180[3] = 0.0;
  afStack_180[0] = 1.0;
  afStack_180[1] = 0.0;
  fStack_16c = -fVar10;
  uStack_168 = 0;
  fStack_164 = fVar10;
  fStack_160 = afStack_180[4];
  pfVar3 = afStack_108;
  do {
    lVar4 = 0;
    pfVar5 = afStack_180;
    do {
      lVar6 = 0;
      fVar9 = 0.0;
      pfVar7 = pfVar5;
      do {
        fVar9 = fVar9 + *pfVar7 * *(float *)((long)pfVar3 + lVar6);
        lVar6 = lVar6 + 4;
        pfVar7 = pfVar7 + 3;
      } while (lVar6 != 0xc);
      afStack_e4[lVar4 + lVar2 * 3] = fVar9;
      lVar4 = lVar4 + 1;
      pfVar5 = pfVar5 + 1;
    } while (lVar4 != 3);
    lVar2 = lVar2 + 1;
    pfVar3 = pfVar3 + 3;
  } while (lVar2 != 3);
  lVar2 = 0;
  pfVar3 = afStack_e4;
  lVar4 = extraout_x8;
  do {
    lVar6 = 0;
    pfVar5 = pfVar3;
    do {
      *(float *)(lVar4 + lVar6) = *pfVar5;
      lVar6 = lVar6 + 4;
      pfVar5 = pfVar5 + 3;
    } while (lVar6 != 0xc);
    lVar2 = lVar2 + 1;
    lVar4 = lVar4 + 0xc;
    pfVar3 = pfVar3 + 1;
  } while (lVar2 != 3);
  return;
}



/* Entry: 1095cfd0c; end: 1095cfecb;  */

void FUN_1095cfd0c(long param_1,float param_2,float param_3,float param_4)

{
  long lVar1;
  float *pfVar2;
  long lVar3;
  float *pfVar4;
  long lVar5;
  float *pfVar6;
  float fVar7;
  float fVar8;
  float afStack_100 [5];
  float fStack_ec;
  undefined4 uStack_e8;
  float fStack_e4;
  float fStack_e0;
  float afStack_d0 [3];
  undefined8 uStack_c4;
  undefined4 uStack_bc;
  float fStack_b8;
  undefined4 uStack_b4;
  float fStack_b0;
  float fStack_ac;
  float fStack_a8;
  undefined4 uStack_a4;
  float fStack_a0;
  float fStack_9c;
  undefined8 uStack_98;
  undefined8 uStack_90;
  float afStack_88 [9];
  float afStack_64 [9];
  
  fVar7 = param_3;
  ___sincosf_stret();
  fVar8 = param_3;
  ___sincosf_stret();
  lVar1 = 0;
  fStack_ac = fVar8;
  fStack_a8 = -param_4;
  uStack_a4 = 0;
  fStack_a0 = param_4;
  fStack_9c = fVar8;
  uStack_90 = 0x3f80000000000000;
  uStack_98 = 0;
  afStack_d0[0] = param_3;
  afStack_d0[1] = 0.0;
  afStack_d0[2] = fVar7;
  uStack_c4 = 0x3f80000000000000;
  uStack_bc = 0;
  fStack_b8 = -fVar7;
  uStack_b4 = 0;
  pfVar2 = &fStack_ac;
  fStack_b0 = param_3;
  do {
    lVar3 = 0;
    pfVar4 = afStack_d0;
    do {
      lVar5 = 0;
      fVar8 = 0.0;
      pfVar6 = pfVar4;
      do {
        afStack_100[4] = *(float *)((long)pfVar2 + lVar5);
        fVar8 = fVar8 + *pfVar6 * afStack_100[4];
        lVar5 = lVar5 + 4;
        pfVar6 = pfVar6 + 3;
      } while (lVar5 != 0xc);
      afStack_88[lVar3 + lVar1 * 3] = fVar8;
      lVar3 = lVar3 + 1;
      pfVar4 = pfVar4 + 1;
    } while (lVar3 != 3);
    lVar1 = lVar1 + 1;
    pfVar2 = pfVar2 + 3;
  } while (lVar1 != 3);
  ___sincosf_stret();
  lVar1 = 0;
  afStack_100[2] = 0.0;
  afStack_100[3] = 0.0;
  afStack_100[0] = 1.0;
  afStack_100[1] = 0.0;
  fStack_ec = -param_2;
  uStack_e8 = 0;
  fStack_e4 = param_2;
  fStack_e0 = afStack_100[4];
  pfVar2 = afStack_88;
  do {
    lVar3 = 0;
    pfVar4 = afStack_100;
    do {
      lVar5 = 0;
      fVar8 = 0.0;
      pfVar6 = pfVar4;
      do {
        fVar8 = fVar8 + *pfVar6 * *(float *)((long)pfVar2 + lVar5);
        lVar5 = lVar5 + 4;
        pfVar6 = pfVar6 + 3;
      } while (lVar5 != 0xc);
      afStack_64[lVar3 + lVar1 * 3] = fVar8;
      lVar3 = lVar3 + 1;
      pfVar4 = pfVar4 + 1;
    } while (lVar3 != 3);
    lVar1 = lVar1 + 1;
    pfVar2 = pfVar2 + 3;
  } while (lVar1 != 3);
  lVar1 = 0;
  pfVar2 = afStack_64;
  do {
    lVar3 = 0;
    pfVar4 = pfVar2;
    do {
      *(float *)(param_1 + lVar3) = *pfVar4;
      lVar3 = lVar3 + 4;
      pfVar4 = pfVar4 + 3;
    } while (lVar3 != 0xc);
    lVar1 = lVar1 + 1;
    param_1 = param_1 + 0xc;
    pfVar2 = pfVar2 + 1;
  } while (lVar1 != 3);
  return;
}



/* Entry: 1095cfecc; end: 1095cff83;  */

void FUN_1095cfecc(undefined8 *param_1,undefined8 *param_2,long param_3,int param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  float fVar4;
  undefined8 uVar5;
  float afStack_1c [7];
  
  lVar1 = 0;
  do {
    *(float *)((long)afStack_1c + lVar1) =
         *(float *)(param_3 + lVar1) - *(float *)((long)param_2 + lVar1 + 0xd4);
    lVar1 = lVar1 + 4;
  } while (lVar1 != 0xc);
  lVar2 = 0;
  lVar1 = (long)param_2 + 0x8c;
  do {
    lVar3 = 0;
    fVar4 = 0.0;
    do {
      fVar4 = fVar4 + *(float *)((long)afStack_1c + lVar3) * *(float *)(lVar1 + lVar3);
      lVar3 = lVar3 + 4;
    } while (lVar3 != 0xc);
    afStack_1c[lVar2 + 3] = fVar4;
    lVar2 = lVar2 + 1;
    lVar1 = lVar1 + 0xc;
  } while (lVar2 != 3);
  if ((param_4 == 0) || (0.0 < afStack_1c[5])) {
    uVar5 = CONCAT44((SUB84(afStack_1c._12_8_,4) / afStack_1c[5]) * *(float *)(param_2 + 1) +
                     (float)((ulong)*param_2 >> 0x20),
                     ((float)afStack_1c._12_8_ / afStack_1c[5]) * *(float *)(param_2 + 1) +
                     (float)*param_2);
  }
  else {
    uVar5 = 0xcb189680cb189680;
  }
  *param_1 = uVar5;
  return;
}



/* Entry: 1095cff84; end: 1095d000b;  */

void FUN_1095cff84(undefined8 *param_1,long param_2)

{
  long lVar1;
  long lVar2;
  float fVar3;
  float afStack_48 [3];
  undefined8 uStack_3c;
  undefined4 uStack_34;
  
  param_2 = param_2 + 0xb0;
  FUN_1095cfb60(afStack_48);
  lVar1 = 0;
  do {
    lVar2 = 0;
    fVar3 = 0.0;
    do {
      fVar3 = fVar3 + *(float *)((long)afStack_48 + lVar2) * *(float *)(param_2 + lVar2);
      lVar2 = lVar2 + 4;
    } while (lVar2 != 0xc);
    *(float *)((long)&uStack_3c + lVar1 * 4) = fVar3;
    lVar1 = lVar1 + 1;
    param_2 = param_2 + 0xc;
  } while (lVar1 != 3);
  *param_1 = uStack_3c;
  *(undefined4 *)(param_1 + 1) = uStack_34;
  return;
}



/* Entry: 1095d000c; end: 1095d0077;  */

void FUN_1095d000c(long param_1)

{
  *(undefined4 *)(param_1 + 0x340) = 0;
  *(undefined1 *)(param_1 + 0x33d) = 0;
  *(undefined1 *)(param_1 + 200) = 0;
  *(undefined4 *)(param_1 + 0xcc) = 0;
  *(undefined1 *)(param_1 + 0x1358) = 1;
  *(undefined2 *)(param_1 + 0x135f) = 0;
  *(undefined1 *)(param_1 + 0x1361) = 0;
  _bzero(param_1 + 0x1364,0x400);
  *(undefined4 *)(param_1 + 0x28) = 0;
  *(undefined1 *)(param_1 + 0x2c) = 0;
  *(undefined1 *)(param_1 + 0x2d) = 0;
  *(undefined1 *)(param_1 + 0x2e) = 0;
  return;
}



/* Entry: 1095d0078; end: 1095d0097;  */

void FUN_1095d0078(long param_1)

{
  *(undefined4 *)(param_1 + 0x28) = 0;
  *(undefined1 *)(param_1 + 0x2c) = 0;
  *(undefined1 *)(param_1 + 0x2d) = 0;
  *(undefined1 *)(param_1 + 0x2e) = 0;
  return;
}



/* Entry: 1095d0098; end: 1095d00ab;  */

void FUN_1095d0098(void)

{
  FUN_1095d00ac();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1095d00ac; end: 1095d2713;  */

undefined8 * FUN_1095d00ac(undefined8 *param_1)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  undefined8 *puVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  
  *param_1 = &PTR_DAT_110afeb28;
  if (param_1[0x8cb] != 0) {
    piVar1 = (int *)(param_1[0x8cb] + 0x14);
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
      func_0x000109a848d4(param_1 + 0x8c4);
    }
  }
  param_1[0x8cb] = 0;
  param_1[0x8c7] = 0;
  param_1[0x8c6] = 0;
  param_1[0x8c9] = 0;
  param_1[0x8c8] = 0;
  if (0 < *(int *)((long)param_1 + 0x4624)) {
    lVar5 = 0;
    lVar8 = param_1[0x8cc];
    do {
      *(undefined4 *)(lVar8 + lVar5 * 4) = 0;
      lVar5 = lVar5 + 1;
    } while (lVar5 < *(int *)((long)param_1 + 0x4624));
  }
  puVar6 = (undefined8 *)param_1[0x8cd];
  if (puVar6 != param_1 + 0x8ce && puVar6 != (undefined8 *)0x0) {
    _free(puVar6[-1]);
  }
  if (param_1[0x8bf] != 0) {
    piVar1 = (int *)(param_1[0x8bf] + 0x14);
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
      func_0x000109a848d4(param_1 + 0x8b8);
    }
  }
  param_1[0x8bf] = 0;
  param_1[0x8bb] = 0;
  param_1[0x8ba] = 0;
  param_1[0x8bd] = 0;
  param_1[0x8bc] = 0;
  if (0 < *(int *)((long)param_1 + 0x45c4)) {
    lVar5 = 0;
    lVar8 = param_1[0x8c0];
    do {
      *(undefined4 *)(lVar8 + lVar5 * 4) = 0;
      lVar5 = lVar5 + 1;
    } while (lVar5 < *(int *)((long)param_1 + 0x45c4));
  }
  puVar6 = (undefined8 *)param_1[0x8c1];
  if (puVar6 != param_1 + 0x8c2 && puVar6 != (undefined8 *)0x0) {
    _free(puVar6[-1]);
  }
  if (param_1[0x8b3] != 0) {
    piVar1 = (int *)(param_1[0x8b3] + 0x14);
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
      func_0x000109a848d4(param_1 + 0x8ac);
    }
  }
  param_1[0x8b3] = 0;
  param_1[0x8af] = 0;
  param_1[0x8ae] = 0;
  param_1[0x8b1] = 0;
  param_1[0x8b0] = 0;
  if (0 < *(int *)((long)param_1 + 0x4564)) {
    lVar5 = 0;
    lVar8 = param_1[0x8b4];
    do {
      *(undefined4 *)(lVar8 + lVar5 * 4) = 0;
      lVar5 = lVar5 + 1;
    } while (lVar5 < *(int *)((long)param_1 + 0x4564));
  }
  puVar6 = (undefined8 *)param_1[0x8b5];
  if (puVar6 != param_1 + 0x8b6 && puVar6 != (undefined8 *)0x0) {
    _free(puVar6[-1]);
  }
  if (param_1[0x8a7] != 0) {
    piVar1 = (int *)(param_1[0x8a7] + 0x14);
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
      func_0x000109a848d4(param_1 + 0x8a0);
    }
  }
  param_1[0x8a7] = 0;
  param_1[0x8a3] = 0;
  param_1[0x8a2] = 0;
  param_1[0x8a5] = 0;
  param_1[0x8a4] = 0;
  if (0 < *(int *)((long)param_1 + 0x4504)) {
    lVar5 = 0;
    lVar8 = param_1[0x8a8];
    do {
      *(undefined4 *)(lVar8 + lVar5 * 4) = 0;
      lVar5 = lVar5 + 1;
    } while (lVar5 < *(int *)((long)param_1 + 0x4504));
  }
  puVar6 = (undefined8 *)param_1[0x8a9];
  if (puVar6 != param_1 + 0x8aa && puVar6 != (undefined8 *)0x0) {
    _free(puVar6[-1]);
  }
  if (param_1[0x89b] != 0) {
    piVar1 = (int *)(param_1[0x89b] + 0x14);
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
      func_0x000109a848d4(param_1 + 0x894);
    }
  }
  param_1[0x89b] = 0;
  param_1[0x897] = 0;
  param_1[0x896] = 0;
  param_1[0x899] = 0;
  param_1[0x898] = 0;
  if (0 < *(int *)((long)param_1 + 0x44a4)) {
    lVar5 = 0;
    lVar8 = param_1[0x89c];
    do {
      *(undefined4 *)(lVar8 + lVar5 * 4) = 0;
      lVar5 = lVar5 + 1;
    } while (lVar5 < *(int *)((long)param_1 + 0x44a4));
  }
  puVar6 = (undefined8 *)param_1[0x89d];
  if (puVar6 != param_1 + 0x89e && puVar6 != (undefined8 *)0x0) {
    _free(puVar6[-1]);
  }
  if (param_1[0x88f] != 0) {
    piVar1 = (int *)(param_1[0x88f] + 0x14);
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
      func_0x000109a848d4(param_1 + 0x888);
    }
  }
  param_1[0x88f] = 0;
  param_1[0x88b] = 0;
  param_1[0x88a] = 0;
  param_1[0x88d] = 0;
  param_1[0x88c] = 0;
  if (0 < *(int *)((long)param_1 + 0x4444)) {
    lVar5 = 0;
    lVar8 = param_1[0x890];
    do {
      *(undefined4 *)(lVar8 + lVar5 * 4) = 0;
      lVar5 = lVar5 + 1;
    } while (lVar5 < *(int *)((long)param_1 + 0x4444));
  }
  puVar6 = (undefined8 *)param_1[0x891];
  if (puVar6 != param_1 + 0x892 && puVar6 != (undefined8 *)0x0) {
    _free(puVar6[-1]);
  }
  FUN_1095d2714(param_1 + 0x886);
  FUN_1095d2714(param_1 + 0x884);
  if (param_1[0x87f] != 0) {
    piVar1 = (int *)(param_1[0x87f] + 0x14);
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
      func_0x000109a848d4(param_1 + 0x878);
    }
  }
  param_1[0x87f] = 0;
  param_1[0x87b] = 0;
  param_1[0x87a] = 0;
  param_1[0x87d] = 0;
  param_1[0x87c] = 0;
  if (0 < *(int *)((long)param_1 + 0x43c4)) {
    lVar5 = 0;
    lVar8 = param_1[0x880];
    do {
      *(undefined4 *)(lVar8 + lVar5 * 4) = 0;
      lVar5 = lVar5 + 1;
    } while (lVar5 < *(int *)((long)param_1 + 0x43c4));
  }
  puVar6 = (undefined8 *)param_1[0x881];
  if (puVar6 != param_1 + 0x882 && puVar6 != (undefined8 *)0x0) {
    _free(puVar6[-1]);
  }
  if (param_1[0x873] != 0) {
    piVar1 = (int *)(param_1[0x873] + 0x14);
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
      func_0x000109a848d4(param_1 + 0x86c);
    }
  }
  param_1[0x873] = 0;
  param_1[0x86f] = 0;
  param_1[0x86e] = 0;
  param_1[0x871] = 0;
  param_1[0x870] = 0;
  if (0 < *(int *)((long)param_1 + 0x4364)) {
    lVar5 = 0;
    lVar8 = param_1[0x874];
    do {
      *(undefined4 *)(lVar8 + lVar5 * 4) = 0;
      lVar5 = lVar5 + 1;
    } while (lVar5 < *(int *)((long)param_1 + 0x4364));
  }
  puVar6 = (undefined8 *)param_1[0x875];
  if (puVar6 != param_1 + 0x876 && puVar6 != (undefined8 *)0x0) {
    _free(puVar6[-1]);
  }
  if (param_1[0x867] != 0) {
    piVar1 = (int *)(param_1[0x867] + 0x14);
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
      func_0x000109a848d4(param_1 + 0x860);
    }
  }
  param_1[0x867] = 0;
  param_1[0x863] = 0;
  param_1[0x862] = 0;
  param_1[0x865] = 0;
  param_1[0x864] = 0;
  if (0 < *(int *)((long)param_1 + 0x4304)) {
    lVar5 = 0;
    lVar8 = param_1[0x868];
    do {
      *(undefined4 *)(lVar8 + lVar5 * 4) = 0;
      lVar5 = lVar5 + 1;
    } while (lVar5 < *(int *)((long)param_1 + 0x4304));
  }
  puVar6 = (undefined8 *)param_1[0x869];
  if (puVar6 != param_1 + 0x86a && puVar6 != (undefined8 *)0x0) {
    _free(puVar6[-1]);
  }
  if (param_1[0x85b] != 0) {
    piVar1 = (int *)(param_1[0x85b] + 0x14);
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
      func_0x000109a848d4(param_1 + 0x854);
    }
  }
  param_1[0x85b] = 0;
  param_1[0x857] = 0;
  param_1[0x856] = 0;
  param_1[0x859] = 0;
  param_1[0x858] = 0;
  if (0 < *(int *)((long)param_1 + 0x42a4)) {
    lVar5 = 0;
    lVar8 = param_1[0x85c];
    do {
      *(undefined4 *)(lVar8 + lVar5 * 4) = 0;
      lVar5 = lVar5 + 1;
    } while (lVar5 < *(int *)((long)param_1 + 0x42a4));
  }
  puVar6 = (undefined8 *)param_1[0x85d];
  if (puVar6 != param_1 + 0x85e && puVar6 != (undefined8 *)0x0) {
    _free(puVar6[-1]);
  }
  if (param_1[0x851] != 0) {
    param_1[0x852] = param_1[0x851];
    __ZdlPv();
  }
  if (*(char *)((long)param_1 + 0x4287) < '\0') {
    __ZdlPv(param_1[0x84e]);
  }
  if (param_1[0x848] != 0) {
    param_1[0x849] = param_1[0x848];
    __ZdlPv();
  }
  if (*(char *)((long)param_1 + 0x423f) < '\0') {
    __ZdlPv(param_1[0x845]);
  }
  if (param_1[0x83f] != 0) {
    param_1[0x840] = param_1[0x83f];
    __ZdlPv();
  }
  if (*(char *)((long)param_1 + 0x41f7) < '\0') {
    __ZdlPv(param_1[0x83c]);
  }
  if (param_1[0x834] != 0) {
    param_1[0x835] = param_1[0x834];
    _free();
  }
  if (param_1[0x831] != 0) {
    param_1[0x832] = param_1[0x831];
    _free();
  }
  if (param_1[0x82e] != 0) {
    param_1[0x82f] = param_1[0x82e];
    _free();
  }
  if (param_1[0x82b] != 0) {
    param_1[0x82c] = param_1[0x82b];
    _free();
  }
  if (param_1[0x826] != 0) {
    piVar1 = (int *)(param_1[0x826] + 0x14);
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
      func_0x000109a848d4(param_1 + 0x81f);
    }
  }
  param_1[0x826] = 0;
  param_1[0x822] = 0;
  param_1[0x821] = 0;
  param_1[0x824] = 0;
  param_1[0x823] = 0;
  if (0 < *(int *)((long)param_1 + 0x40fc)) {
    lVar5 = 0;
    lVar8 = param_1[0x827];
    do {
      *(undefined4 *)(lVar8 + lVar5 * 4) = 0;
      lVar5 = lVar5 + 1;
    } while (lVar5 < *(int *)((long)param_1 + 0x40fc));
  }
  puVar6 = (undefined8 *)param_1[0x828];
  if (puVar6 != param_1 + 0x829 && puVar6 != (undefined8 *)0x0) {
    _free(puVar6[-1]);
  }
  if (param_1[0x81c] != 0) {
    param_1[0x81d] = param_1[0x81c];
    _free();
  }
  if (param_1[0x819] != 0) {
    param_1[0x81a] = param_1[0x819];
    _free();
  }
  if (param_1[0x816] != 0) {
    param_1[0x817] = param_1[0x816];
    _free();
  }
  if (param_1[0x813] != 0) {
    param_1[0x814] = param_1[0x813];
    _free();
  }
  if (param_1[0x810] != 0) {
    param_1[0x811] = param_1[0x810];
    _free();
  }
  if (param_1[0x80d] != 0) {
    param_1[0x80e] = param_1[0x80d];
    _free();
  }
  if (param_1[0x80a] != 0) {
    param_1[0x80b] = param_1[0x80a];
    _free();
  }
  lVar5 = 0x4018;
  do {
    FUN_1095d276c((long)param_1 + lVar5,0);
    lVar5 = lVar5 + -8;
  } while (lVar5 != 0x4000);
  lVar5 = 0x4000;
  do {
    FUN_1095d276c((long)param_1 + lVar5,0);
    lVar5 = lVar5 + -8;
  } while (lVar5 != 0x3fe8);
  if (param_1[0x7f9] != 0) {
    piVar1 = (int *)(param_1[0x7f9] + 0x14);
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
      func_0x000109a848d4(param_1 + 0x7f2);
    }
  }
  param_1[0x7f9] = 0;
  param_1[0x7f5] = 0;
  param_1[0x7f4] = 0;
  param_1[0x7f7] = 0;
  param_1[0x7f6] = 0;
  if (0 < *(int *)((long)param_1 + 0x3f94)) {
    lVar5 = 0;
    lVar8 = param_1[0x7fa];
    do {
      *(undefined4 *)(lVar8 + lVar5 * 4) = 0;
      lVar5 = lVar5 + 1;
    } while (lVar5 < *(int *)((long)param_1 + 0x3f94));
  }
  puVar6 = (undefined8 *)param_1[0x7fb];
  if (puVar6 != param_1 + 0x7fc && puVar6 != (undefined8 *)0x0) {
    _free(puVar6[-1]);
  }
  if (param_1[0x7ed] != 0) {
    piVar1 = (int *)(param_1[0x7ed] + 0x14);
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
      func_0x000109a848d4(param_1 + 0x7e6);
    }
  }
  param_1[0x7ed] = 0;
  param_1[0x7e9] = 0;
  param_1[0x7e8] = 0;
  param_1[0x7eb] = 0;
  param_1[0x7ea] = 0;
  if (0 < *(int *)((long)param_1 + 0x3f34)) {
    lVar5 = 0;
    lVar8 = param_1[0x7ee];
    do {
      *(undefined4 *)(lVar8 + lVar5 * 4) = 0;
      lVar5 = lVar5 + 1;
    } while (lVar5 < *(int *)((long)param_1 + 0x3f34));
  }
  puVar6 = (undefined8 *)param_1[0x7ef];
  if (puVar6 != param_1 + 0x7f0 && puVar6 != (undefined8 *)0x0) {
    _free(puVar6[-1]);
  }
  lVar5 = 0x3f30;
  do {
    lVar5 = lVar5 + -0x60;
    lVar8 = (long)param_1 + lVar5;
    if (*(long *)(lVar8 + 0x38) != 0) {
      piVar1 = (int *)(*(long *)(lVar8 + 0x38) + 0x14);
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
        func_0x000109a848d4(lVar8);
      }
    }
    *(undefined8 *)(lVar8 + 0x38) = 0;
    *(undefined8 *)(lVar8 + 0x18) = 0;
    *(undefined8 *)(lVar8 + 0x10) = 0;
    *(undefined8 *)(lVar8 + 0x28) = 0;
    *(undefined8 *)(lVar8 + 0x20) = 0;
    if (0 < *(int *)(lVar8 + 4)) {
      lVar7 = 0;
      lVar9 = *(long *)(lVar8 + 0x40);
      do {
        *(undefined4 *)(lVar9 + lVar7 * 4) = 0;
        lVar7 = lVar7 + 1;
      } while (lVar7 < *(int *)(lVar8 + 4));
    }
    lVar7 = *(long *)(lVar8 + 0x48);
    if (lVar7 != lVar8 + 0x50 && lVar7 != 0) {
      _free(*(undefined8 *)(lVar7 + -8));
    }
  } while (lVar5 != 0x3e10);
  lVar5 = 0x3e10;
  do {
    lVar5 = lVar5 + -0x60;
    lVar8 = (long)param_1 + lVar5;
    if (*(long *)(lVar8 + 0x38) != 0) {
      piVar1 = (int *)(*(long *)(lVar8 + 0x38) + 0x14);
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
        func_0x000109a848d4(lVar8);
      }
    }
    *(undefined8 *)(lVar8 + 0x38) = 0;
    *(undefined8 *)(lVar8 + 0x18) = 0;
    *(undefined8 *)(lVar8 + 0x10) = 0;
    *(undefined8 *)(lVar8 + 0x28) = 0;
    *(undefined8 *)(lVar8 + 0x20) = 0;
    if (0 < *(int *)(lVar8 + 4)) {
      lVar7 = 0;
      lVar9 = *(long *)(lVar8 + 0x40);
      do {
        *(undefined4 *)(lVar9 + lVar7 * 4) = 0;
        lVar7 = lVar7 + 1;
      } while (lVar7 < *(int *)(lVar8 + 4));
    }
    lVar7 = *(long *)(lVar8 + 0x48);
    if (lVar7 != lVar8 + 0x50 && lVar7 != 0) {
      _free(*(undefined8 *)(lVar7 + -8));
    }
  } while (lVar5 != 0x3cf0);
  lVar5 = 0x3cf0;
  do {
    lVar5 = lVar5 + -0x60;
    lVar8 = (long)param_1 + lVar5;
    if (*(long *)(lVar8 + 0x38) != 0) {
      piVar1 = (int *)(*(long *)(lVar8 + 0x38) + 0x14);
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
        func_0x000109a848d4(lVar8);
      }
    }
    *(undefined8 *)(lVar8 + 0x38) = 0;
    *(undefined8 *)(lVar8 + 0x18) = 0;
    *(undefined8 *)(lVar8 + 0x10) = 0;
    *(undefined8 *)(lVar8 + 0x28) = 0;
    *(undefined8 *)(lVar8 + 0x20) = 0;
    if (0 < *(int *)(lVar8 + 4)) {
      lVar7 = 0;
      lVar9 = *(long *)(lVar8 + 0x40);
      do {
        *(undefined4 *)(lVar9 + lVar7 * 4) = 0;
        lVar7 = lVar7 + 1;
      } while (lVar7 < *(int *)(lVar8 + 4));
    }
    lVar7 = *(long *)(lVar8 + 0x48);
    if (lVar7 != lVar8 + 0x50 && lVar7 != 0) {
      _free(*(undefined8 *)(lVar7 + -8));
    }
  } while (lVar5 != 0x3bd0);
  lVar5 = 0x3bd0;
  do {
    lVar5 = lVar5 + -0x60;
    lVar8 = (long)param_1 + lVar5;
    if (*(long *)(lVar8 + 0x38) != 0) {
      piVar1 = (int *)(*(long *)(lVar8 + 0x38) + 0x14);
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
        func_0x000109a848d4(lVar8);
      }
    }
    *(undefined8 *)(lVar8 + 0x38) = 0;
    *(undefined8 *)(lVar8 + 0x18) = 0;
    *(undefined8 *)(lVar8 + 0x10) = 0;
    *(undefined8 *)(lVar8 + 0x28) = 0;
    *(undefined8 *)(lVar8 + 0x20) = 0;
    if (0 < *(int *)(lVar8 + 4)) {
      lVar7 = 0;
      lVar9 = *(long *)(lVar8 + 0x40);
      do {
        *(undefined4 *)(lVar9 + lVar7 * 4) = 0;
        lVar7 = lVar7 + 1;
      } while (lVar7 < *(int *)(lVar8 + 4));
    }
    lVar7 = *(long *)(lVar8 + 0x48);
    if (lVar7 != lVar8 + 0x50 && lVar7 != 0) {
      _free(*(undefined8 *)(lVar7 + -8));
    }
  } while (lVar5 != 0x3ab0);
  lVar5 = 0x3ab0;
  do {
    lVar5 = lVar5 + -0x60;
    lVar8 = (long)param_1 + lVar5;
    if (*(long *)(lVar8 + 0x38) != 0) {
      piVar1 = (int *)(*(long *)(lVar8 + 0x38) + 0x14);
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
        func_0x000109a848d4(lVar8);
      }
    }
    *(undefined8 *)(lVar8 + 0x38) = 0;
    *(undefined8 *)(lVar8 + 0x18) = 0;
    *(undefined8 *)(lVar8 + 0x10) = 0;
    *(undefined8 *)(lVar8 + 0x28) = 0;
    *(undefined8 *)(lVar8 + 0x20) = 0;
    if (0 < *(int *)(lVar8 + 4)) {
      lVar7 = 0;
      lVar9 = *(long *)(lVar8 + 0x40);
      do {
        *(undefined4 *)(lVar9 + lVar7 * 4) = 0;
        lVar7 = lVar7 + 1;
      } while (lVar7 < *(int *)(lVar8 + 4));
    }
    lVar7 = *(long *)(lVar8 + 0x48);
    if (lVar7 != lVar8 + 0x50 && lVar7 != 0) {
      _free(*(undefined8 *)(lVar7 + -8));
    }
  } while (lVar5 != 0x3990);
  lVar5 = 0x3990;
  do {
    lVar5 = lVar5 + -0x60;
    lVar8 = (long)param_1 + lVar5;
    if (*(long *)(lVar8 + 0x38) != 0) {
      piVar1 = (int *)(*(long *)(lVar8 + 0x38) + 0x14);
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
        func_0x000109a848d4(lVar8);
      }
    }
    *(undefined8 *)(lVar8 + 0x38) = 0;
    *(undefined8 *)(lVar8 + 0x18) = 0;
    *(undefined8 *)(lVar8 + 0x10) = 0;
    *(undefined8 *)(lVar8 + 0x28) = 0;
    *(undefined8 *)(lVar8 + 0x20) = 0;
    if (0 < *(int *)(lVar8 + 4)) {
      lVar7 = 0;
      lVar9 = *(long *)(lVar8 + 0x40);
      do {
        *(undefined4 *)(lVar9 + lVar7 * 4) = 0;
        lVar7 = lVar7 + 1;
      } while (lVar7 < *(int *)(lVar8 + 4));
    }
    lVar7 = *(long *)(lVar8 + 0x48);
    if (lVar7 != lVar8 + 0x50 && lVar7 != 0) {
      _free(*(undefined8 *)(lVar7 + -8));
    }
  } while (lVar5 != 0x3870);
  lVar5 = 0x3870;
  do {
    lVar5 = lVar5 + -0x60;
    lVar8 = (long)param_1 + lVar5;
    if (*(long *)(lVar8 + 0x38) != 0) {
      piVar1 = (int *)(*(long *)(lVar8 + 0x38) + 0x14);
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
        func_0x000109a848d4(lVar8);
      }
    }
    *(undefined8 *)(lVar8 + 0x38) = 0;
    *(undefined8 *)(lVar8 + 0x18) = 0;
    *(undefined8 *)(lVar8 + 0x10) = 0;
    *(undefined8 *)(lVar8 + 0x28) = 0;
    *(undefined8 *)(lVar8 + 0x20) = 0;
    if (0 < *(int *)(lVar8 + 4)) {
      lVar7 = 0;
      lVar9 = *(long *)(lVar8 + 0x40);
      do {
        *(undefined4 *)(lVar9 + lVar7 * 4) = 0;
        lVar7 = lVar7 + 1;
      } while (lVar7 < *(int *)(lVar8 + 4));
    }
    lVar7 = *(long *)(lVar8 + 0x48);
    if (lVar7 != lVar8 + 0x50 && lVar7 != 0) {
      _free(*(undefined8 *)(lVar7 + -8));
    }
  } while (lVar5 != 0x3750);
  lVar5 = 0x3750;
  do {
    lVar5 = lVar5 + -0x60;
    lVar8 = (long)param_1 + lVar5;
    if (*(long *)(lVar8 + 0x38) != 0) {
      piVar1 = (int *)(*(long *)(lVar8 + 0x38) + 0x14);
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
        func_0x000109a848d4(lVar8);
      }
    }
    *(undefined8 *)(lVar8 + 0x38) = 0;
    *(undefined8 *)(lVar8 + 0x18) = 0;
    *(undefined8 *)(lVar8 + 0x10) = 0;
    *(undefined8 *)(lVar8 + 0x28) = 0;
    *(undefined8 *)(lVar8 + 0x20) = 0;
    if (0 < *(int *)(lVar8 + 4)) {
      lVar7 = 0;
      lVar9 = *(long *)(lVar8 + 0x40);
      do {
        *(undefined4 *)(lVar9 + lVar7 * 4) = 0;
        lVar7 = lVar7 + 1;
      } while (lVar7 < *(int *)(lVar8 + 4));
    }
    lVar7 = *(long *)(lVar8 + 0x48);
    if (lVar7 != lVar8 + 0x50 && lVar7 != 0) {
      _free(*(undefined8 *)(lVar7 + -8));
    }
  } while (lVar5 != 0x3630);
  lVar5 = 0x3630;
  do {
    lVar5 = lVar5 + -0x60;
    lVar8 = (long)param_1 + lVar5;
    if (*(long *)(lVar8 + 0x38) != 0) {
      piVar1 = (int *)(*(long *)(lVar8 + 0x38) + 0x14);
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
        func_0x000109a848d4(lVar8);
      }
    }
    *(undefined8 *)(lVar8 + 0x38) = 0;
    *(undefined8 *)(lVar8 + 0x18) = 0;
    *(undefined8 *)(lVar8 + 0x10) = 0;
    *(undefined8 *)(lVar8 + 0x28) = 0;
    *(undefined8 *)(lVar8 + 0x20) = 0;
    if (0 < *(int *)(lVar8 + 4)) {
      lVar7 = 0;
      lVar9 = *(long *)(lVar8 + 0x40);
      do {
        *(undefined4 *)(lVar9 + lVar7 * 4) = 0;
        lVar7 = lVar7 + 1;
      } while (lVar7 < *(int *)(lVar8 + 4));
    }
    lVar7 = *(long *)(lVar8 + 0x48);
    if (lVar7 != lVar8 + 0x50 && lVar7 != 0) {
      _free(*(undefined8 *)(lVar7 + -8));
    }
  } while (lVar5 != 0x3510);
  lVar5 = 0x3510;
  do {
    lVar5 = lVar5 + -0x60;
    lVar8 = (long)param_1 + lVar5;
    if (*(long *)(lVar8 + 0x38) != 0) {
      piVar1 = (int *)(*(long *)(lVar8 + 0x38) + 0x14);
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
        func_0x000109a848d4(lVar8);
      }
    }
    *(undefined8 *)(lVar8 + 0x38) = 0;
    *(undefined8 *)(lVar8 + 0x18) = 0;
    *(undefined8 *)(lVar8 + 0x10) = 0;
    *(undefined8 *)(lVar8 + 0x28) = 0;
    *(undefined8 *)(lVar8 + 0x20) = 0;
    if (0 < *(int *)(lVar8 + 4)) {
      lVar7 = 0;
      lVar9 = *(long *)(lVar8 + 0x40);
      do {
        *(undefined4 *)(lVar9 + lVar7 * 4) = 0;
        lVar7 = lVar7 + 1;
      } while (lVar7 < *(int *)(lVar8 + 4));
    }
    lVar7 = *(long *)(lVar8 + 0x48);
    if (lVar7 != lVar8 + 0x50 && lVar7 != 0) {
      _free(*(undefined8 *)(lVar7 + -8));
    }
  } while (lVar5 != 0x33f0);
  lVar5 = 0x33f0;
  do {
    lVar5 = lVar5 + -0x60;
    lVar8 = (long)param_1 + lVar5;
    if (*(long *)(lVar8 + 0x38) != 0) {
      piVar1 = (int *)(*(long *)(lVar8 + 0x38) + 0x14);
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
        func_0x000109a848d4(lVar8);
      }
    }
    *(undefined8 *)(lVar8 + 0x38) = 0;
    *(undefined8 *)(lVar8 + 0x18) = 0;
    *(undefined8 *)(lVar8 + 0x10) = 0;
    *(undefined8 *)(lVar8 + 0x28) = 0;
    *(undefined8 *)(lVar8 + 0x20) = 0;
    if (0 < *(int *)(lVar8 + 4)) {
      lVar7 = 0;
      lVar9 = *(long *)(lVar8 + 0x40);
      do {
        *(undefined4 *)(lVar9 + lVar7 * 4) = 0;
        lVar7 = lVar7 + 1;
      } while (lVar7 < *(int *)(lVar8 + 4));
    }
    lVar7 = *(long *)(lVar8 + 0x48);
    if (lVar7 != lVar8 + 0x50 && lVar7 != 0) {
      _free(*(undefined8 *)(lVar7 + -8));
    }
  } while (lVar5 != 0x32d0);
  lVar5 = 0x32d0;
  do {
    lVar5 = lVar5 + -0x60;
    lVar8 = (long)param_1 + lVar5;
    if (*(long *)(lVar8 + 0x38) != 0) {
      piVar1 = (int *)(*(long *)(lVar8 + 0x38) + 0x14);
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
        func_0x000109a848d4(lVar8);
      }
    }
    *(undefined8 *)(lVar8 + 0x38) = 0;
    *(undefined8 *)(lVar8 + 0x18) = 0;
    *(undefined8 *)(lVar8 + 0x10) = 0;
    *(undefined8 *)(lVar8 + 0x28) = 0;
    *(undefined8 *)(lVar8 + 0x20) = 0;
    if (0 < *(int *)(lVar8 + 4)) {
      lVar7 = 0;
      lVar9 = *(long *)(lVar8 + 0x40);
      do {
        *(undefined4 *)(lVar9 + lVar7 * 4) = 0;
        lVar7 = lVar7 + 1;
      } while (lVar7 < *(int *)(lVar8 + 4));
    }
    lVar7 = *(long *)(lVar8 + 0x48);
    if (lVar7 != lVar8 + 0x50 && lVar7 != 0) {
      _free(*(undefined8 *)(lVar7 + -8));
    }
  } while (lVar5 != 0x31b0);
  lVar5 = 0x31b0;
  do {
    lVar5 = lVar5 + -0x60;
    lVar8 = (long)param_1 + lVar5;
    if (*(long *)(lVar8 + 0x38) != 0) {
      piVar1 = (int *)(*(long *)(lVar8 + 0x38) + 0x14);
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
        func_0x000109a848d4(lVar8);
      }
    }
    *(undefined8 *)(lVar8 + 0x38) = 0;
    *(undefined8 *)(lVar8 + 0x18) = 0;
    *(undefined8 *)(lVar8 + 0x10) = 0;
    *(undefined8 *)(lVar8 + 0x28) = 0;
    *(undefined8 *)(lVar8 + 0x20) = 0;
    if (0 < *(int *)(lVar8 + 4)) {
      lVar7 = 0;
      lVar9 = *(long *)(lVar8 + 0x40);
      do {
        *(undefined4 *)(lVar9 + lVar7 * 4) = 0;
        lVar7 = lVar7 + 1;
      } while (lVar7 < *(int *)(lVar8 + 4));
    }
    lVar7 = *(long *)(lVar8 + 0x48);
    if (lVar7 != lVar8 + 0x50 && lVar7 != 0) {
      _free(*(undefined8 *)(lVar7 + -8));
    }
  } while (lVar5 != 0x3090);
  lVar5 = 0x3090;
  do {
    lVar5 = lVar5 + -0x60;
    lVar8 = (long)param_1 + lVar5;
    if (*(long *)(lVar8 + 0x38) != 0) {
      piVar1 = (int *)(*(long *)(lVar8 + 0x38) + 0x14);
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
        func_0x000109a848d4(lVar8);
      }
    }
    *(undefined8 *)(lVar8 + 0x38) = 0;
    *(undefined8 *)(lVar8 + 0x18) = 0;
    *(undefined8 *)(lVar8 + 0x10) = 0;
    *(undefined8 *)(lVar8 + 0x28) = 0;
    *(undefined8 *)(lVar8 + 0x20) = 0;
    if (0 < *(int *)(lVar8 + 4)) {
      lVar7 = 0;
      lVar9 = *(long *)(lVar8 + 0x40);
      do {
        *(undefined4 *)(lVar9 + lVar7 * 4) = 0;
        lVar7 = lVar7 + 1;
      } while (lVar7 < *(int *)(lVar8 + 4));
    }
    lVar7 = *(long *)(lVar8 + 0x48);
    if (lVar7 != lVar8 + 0x50 && lVar7 != 0) {
      _free(*(undefined8 *)(lVar7 + -8));
    }
  } while (lVar5 != 0x2f70);
  if (param_1[0x5dc] != 0) {
    piVar1 = (int *)(param_1[0x5dc] + 0x14);
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
      func_0x000109a848d4(param_1 + 0x5d5);
    }
  }
  param_1[0x5dc] = 0;
  param_1[0x5d8] = 0;
  param_1[0x5d7] = 0;
  param_1[0x5da] = 0;
  param_1[0x5d9] = 0;
  if (0 < *(int *)((long)param_1 + 0x2eac)) {
    lVar5 = 0;
    lVar8 = param_1[0x5dd];
    do {
      *(undefined4 *)(lVar8 + lVar5 * 4) = 0;
      lVar5 = lVar5 + 1;
    } while (lVar5 < *(int *)((long)param_1 + 0x2eac));
  }
  puVar6 = (undefined8 *)param_1[0x5de];
  if (puVar6 != param_1 + 0x5df && puVar6 != (undefined8 *)0x0) {
    _free(puVar6[-1]);
  }
  if (param_1[0x5cb] != 0) {
    piVar1 = (int *)(param_1[0x5cb] + 0x14);
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
      func_0x000109a848d4(param_1 + 0x5c4);
    }
  }
  param_1[0x5cb] = 0;
  param_1[0x5c7] = 0;
  param_1[0x5c6] = 0;
  param_1[0x5c9] = 0;
  param_1[0x5c8] = 0;
  if (0 < *(int *)((long)param_1 + 0x2e24)) {
    lVar5 = 0;
    lVar8 = param_1[0x5cc];
    do {
      *(undefined4 *)(lVar8 + lVar5 * 4) = 0;
      lVar5 = lVar5 + 1;
    } while (lVar5 < *(int *)((long)param_1 + 0x2e24));
  }
  puVar6 = (undefined8 *)param_1[0x5cd];
  if (puVar6 != param_1 + 0x5ce && puVar6 != (undefined8 *)0x0) {
    _free(puVar6[-1]);
  }
  if (param_1[0x5bf] != 0) {
    piVar1 = (int *)(param_1[0x5bf] + 0x14);
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
      func_0x000109a848d4(param_1 + 0x5b8);
    }
  }
  param_1[0x5bf] = 0;
  param_1[0x5bb] = 0;
  param_1[0x5ba] = 0;
  param_1[0x5bd] = 0;
  param_1[0x5bc] = 0;
  if (0 < *(int *)((long)param_1 + 0x2dc4)) {
    lVar5 = 0;
    lVar8 = param_1[0x5c0];
    do {
      *(undefined4 *)(lVar8 + lVar5 * 4) = 0;
      lVar5 = lVar5 + 1;
    } while (lVar5 < *(int *)((long)param_1 + 0x2dc4));
  }
  puVar6 = (undefined8 *)param_1[0x5c1];
  if (puVar6 != param_1 + 0x5c2 && puVar6 != (undefined8 *)0x0) {
    _free(puVar6[-1]);
  }
  lVar5 = 0x2dc0;
  do {
    lVar5 = lVar5 + -0x60;
    lVar8 = (long)param_1 + lVar5;
    if (*(long *)(lVar8 + 0x38) != 0) {
      piVar1 = (int *)(*(long *)(lVar8 + 0x38) + 0x14);
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
        func_0x000109a848d4(lVar8);
      }
    }
    *(undefined8 *)(lVar8 + 0x38) = 0;
    *(undefined8 *)(lVar8 + 0x18) = 0;
    *(undefined8 *)(lVar8 + 0x10) = 0;
    *(undefined8 *)(lVar8 + 0x28) = 0;
    *(undefined8 *)(lVar8 + 0x20) = 0;
    if (0 < *(int *)(lVar8 + 4)) {
      lVar7 = 0;
      lVar9 = *(long *)(lVar8 + 0x40);
      do {
        *(undefined4 *)(lVar9 + lVar7 * 4) = 0;
        lVar7 = lVar7 + 1;
      } while (lVar7 < *(int *)(lVar8 + 4));
    }
    lVar7 = *(long *)(lVar8 + 0x48);
    if (lVar7 != lVar8 + 0x50 && lVar7 != 0) {
      _free(*(undefined8 *)(lVar7 + -8));
    }
  } while (lVar5 != 0x2ca0);
  lVar5 = 0x2ca0;
  do {
    lVar5 = lVar5 + -0x60;
    lVar8 = (long)param_1 + lVar5;
    if (*(long *)(lVar8 + 0x38) != 0) {
      piVar1 = (int *)(*(long *)(lVar8 + 0x38) + 0x14);
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
        func_0x000109a848d4(lVar8);
      }
    }
    *(undefined8 *)(lVar8 + 0x38) = 0;
    *(undefined8 *)(lVar8 + 0x18) = 0;
    *(undefined8 *)(lVar8 + 0x10) = 0;
    *(undefined8 *)(lVar8 + 0x28) = 0;
    *(undefined8 *)(lVar8 + 0x20) = 0;
    if (0 < *(int *)(lVar8 + 4)) {
      lVar7 = 0;
      lVar9 = *(long *)(lVar8 + 0x40);
      do {
        *(undefined4 *)(lVar9 + lVar7 * 4) = 0;
        lVar7 = lVar7 + 1;
      } while (lVar7 < *(int *)(lVar8 + 4));
    }
    lVar7 = *(long *)(lVar8 + 0x48);
    if (lVar7 != lVar8 + 0x50 && lVar7 != 0) {
      _free(*(undefined8 *)(lVar7 + -8));
    }
  } while (lVar5 != 0x2b80);
  if (param_1[0x56a] != 0) {
    piVar1 = (int *)(param_1[0x56a] + 0x14);
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
      func_0x000109a848d4(param_1 + 0x563);
    }
  }
  param_1[0x56a] = 0;
  param_1[0x566] = 0;
  param_1[0x565] = 0;
  param_1[0x568] = 0;
  param_1[0x567] = 0;
  if (0 < *(int *)((long)param_1 + 0x2b1c)) {
    lVar5 = 0;
    lVar8 = param_1[0x56b];
    do {
      *(undefined4 *)(lVar8 + lVar5 * 4) = 0;
      lVar5 = lVar5 + 1;
    } while (lVar5 < *(int *)((long)param_1 + 0x2b1c));
  }
  puVar6 = (undefined8 *)param_1[0x56c];
  if (puVar6 != param_1 + 0x56d && puVar6 != (undefined8 *)0x0) {
    _free(puVar6[-1]);
  }
  if (param_1[0x55e] != 0) {
    piVar1 = (int *)(param_1[0x55e] + 0x14);
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
      func_0x000109a848d4(param_1 + 0x557);
    }
  }
  param_1[0x55e] = 0;
  param_1[0x55a] = 0;
  param_1[0x559] = 0;
  param_1[0x55c] = 0;
  param_1[0x55b] = 0;
  if (0 < *(int *)((long)param_1 + 0x2abc)) {
    lVar5 = 0;
    lVar8 = param_1[0x55f];
    do {
      *(undefined4 *)(lVar8 + lVar5 * 4) = 0;
      lVar5 = lVar5 + 1;
    } while (lVar5 < *(int *)((long)param_1 + 0x2abc));
  }
  puVar6 = (undefined8 *)param_1[0x560];
  if (puVar6 != param_1 + 0x561 && puVar6 != (undefined8 *)0x0) {
    _free(puVar6[-1]);
  }
  if (param_1[0x552] != 0) {
    piVar1 = (int *)(param_1[0x552] + 0x14);
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
      func_0x000109a848d4(param_1 + 0x54b);
    }
  }
  param_1[0x552] = 0;
  param_1[0x54e] = 0;
  param_1[0x54d] = 0;
  param_1[0x550] = 0;
  param_1[0x54f] = 0;
  if (0 < *(int *)((long)param_1 + 0x2a5c)) {
    lVar5 = 0;
    lVar8 = param_1[0x553];
    do {
      *(undefined4 *)(lVar8 + lVar5 * 4) = 0;
      lVar5 = lVar5 + 1;
    } while (lVar5 < *(int *)((long)param_1 + 0x2a5c));
  }
  puVar6 = (undefined8 *)param_1[0x554];
  if (puVar6 != param_1 + 0x555 && puVar6 != (undefined8 *)0x0) {
    _free(puVar6[-1]);
  }
  if (param_1[0x546] != 0) {
    piVar1 = (int *)(param_1[0x546] + 0x14);
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
      func_0x000109a848d4(param_1 + 0x53f);
    }
  }
  param_1[0x546] = 0;
  param_1[0x542] = 0;
  param_1[0x541] = 0;
  param_1[0x544] = 0;
  param_1[0x543] = 0;
  if (0 < *(int *)((long)param_1 + 0x29fc)) {
    lVar5 = 0;
    lVar8 = param_1[0x547];
    do {
      *(undefined4 *)(lVar8 + lVar5 * 4) = 0;
      lVar5 = lVar5 + 1;
    } while (lVar5 < *(int *)((long)param_1 + 0x29fc));
  }
  puVar6 = (undefined8 *)param_1[0x548];
  if (puVar6 != param_1 + 0x549 && puVar6 != (undefined8 *)0x0) {
    _free(puVar6[-1]);
  }
  if (param_1[0x53a] != 0) {
    piVar1 = (int *)(param_1[0x53a] + 0x14);
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
      func_0x000109a848d4(param_1 + 0x533);
    }
  }
  param_1[0x53a] = 0;
  param_1[0x536] = 0;
  param_1[0x535] = 0;
  param_1[0x538] = 0;
  param_1[0x537] = 0;
  if (0 < *(int *)((long)param_1 + 0x299c)) {
    lVar5 = 0;
    lVar8 = param_1[0x53b];
    do {
      *(undefined4 *)(lVar8 + lVar5 * 4) = 0;
      lVar5 = lVar5 + 1;
    } while (lVar5 < *(int *)((long)param_1 + 0x299c));
  }
  puVar6 = (undefined8 *)param_1[0x53c];
  if (puVar6 != param_1 + 0x53d && puVar6 != (undefined8 *)0x0) {
    _free(puVar6[-1]);
  }
  if (param_1[0x52e] != 0) {
    piVar1 = (int *)(param_1[0x52e] + 0x14);
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
      func_0x000109a848d4(param_1 + 0x527);
    }
  }
  param_1[0x52e] = 0;
  param_1[0x52a] = 0;
  param_1[0x529] = 0;
  param_1[0x52c] = 0;
  param_1[0x52b] = 0;
  if (0 < *(int *)((long)param_1 + 0x293c)) {
    lVar5 = 0;
    lVar8 = param_1[0x52f];
    do {
      *(undefined4 *)(lVar8 + lVar5 * 4) = 0;
      lVar5 = lVar5 + 1;
    } while (lVar5 < *(int *)((long)param_1 + 0x293c));
  }
  puVar6 = (undefined8 *)param_1[0x530];
  if (puVar6 != param_1 + 0x531 && puVar6 != (undefined8 *)0x0) {
    _free(puVar6[-1]);
  }
  lVar5 = 0x2938;
  do {
    lVar5 = lVar5 + -0x60;
    lVar8 = (long)param_1 + lVar5;
    if (*(long *)(lVar8 + 0x38) != 0) {
      piVar1 = (int *)(*(long *)(lVar8 + 0x38) + 0x14);
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
        func_0x000109a848d4(lVar8);
      }
    }
    *(undefined8 *)(lVar8 + 0x38) = 0;
    *(undefined8 *)(lVar8 + 0x18) = 0;
    *(undefined8 *)(lVar8 + 0x10) = 0;
    *(undefined8 *)(lVar8 + 0x28) = 0;
    *(undefined8 *)(lVar8 + 0x20) = 0;
    if (0 < *(int *)(lVar8 + 4)) {
      lVar7 = 0;
      lVar9 = *(long *)(lVar8 + 0x40);
      do {
        *(undefined4 *)(lVar9 + lVar7 * 4) = 0;
        lVar7 = lVar7 + 1;
      } while (lVar7 < *(int *)(lVar8 + 4));
    }
    lVar7 = *(long *)(lVar8 + 0x48);
    if (lVar7 != lVar8 + 0x50 && lVar7 != 0) {
      _free(*(undefined8 *)(lVar7 + -8));
    }
  } while (lVar5 != 0x2818);
  lVar5 = 0x2818;
  do {
    lVar5 = lVar5 + -0x60;
    lVar8 = (long)param_1 + lVar5;
    if (*(long *)(lVar8 + 0x38) != 0) {
      piVar1 = (int *)(*(long *)(lVar8 + 0x38) + 0x14);
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
        func_0x000109a848d4(lVar8);
      }
    }
    *(undefined8 *)(lVar8 + 0x38) = 0;
    *(undefined8 *)(lVar8 + 0x18) = 0;
    *(undefined8 *)(lVar8 + 0x10) = 0;
    *(undefined8 *)(lVar8 + 0x28) = 0;
    *(undefined8 *)(lVar8 + 0x20) = 0;
    if (0 < *(int *)(lVar8 + 4)) {
      lVar7 = 0;
      lVar9 = *(long *)(lVar8 + 0x40);
      do {
        *(undefined4 *)(lVar9 + lVar7 * 4) = 0;
        lVar7 = lVar7 + 1;
      } while (lVar7 < *(int *)(lVar8 + 4));
    }
    lVar7 = *(long *)(lVar8 + 0x48);
    if (lVar7 != lVar8 + 0x50 && lVar7 != 0) {
      _free(*(undefined8 *)(lVar7 + -8));
    }
  } while (lVar5 != 0x26f8);
  lVar5 = 0x26f8;
  do {
    lVar5 = lVar5 + -0x60;
    lVar8 = (long)param_1 + lVar5;
    if (*(long *)(lVar8 + 0x38) != 0) {
      piVar1 = (int *)(*(long *)(lVar8 + 0x38) + 0x14);
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
        func_0x000109a848d4(lVar8);
      }
    }
    *(undefined8 *)(lVar8 + 0x38) = 0;
    *(undefined8 *)(lVar8 + 0x18) = 0;
    *(undefined8 *)(lVar8 + 0x10) = 0;
    *(undefined8 *)(lVar8 + 0x28) = 0;
    *(undefined8 *)(lVar8 + 0x20) = 0;
    if (0 < *(int *)(lVar8 + 4)) {
      lVar7 = 0;
      lVar9 = *(long *)(lVar8 + 0x40);
      do {
        *(undefined4 *)(lVar9 + lVar7 * 4) = 0;
        lVar7 = lVar7 + 1;
      } while (lVar7 < *(int *)(lVar8 + 4));
    }
    lVar7 = *(long *)(lVar8 + 0x48);
    if (lVar7 != lVar8 + 0x50 && lVar7 != 0) {
      _free(*(undefined8 *)(lVar7 + -8));
    }
  } while (lVar5 != 0x25d8);
  lVar5 = 0x25d8;
  do {
    lVar5 = lVar5 + -0x60;
    lVar8 = (long)param_1 + lVar5;
    if (*(long *)(lVar8 + 0x38) != 0) {
      piVar1 = (int *)(*(long *)(lVar8 + 0x38) + 0x14);
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
        func_0x000109a848d4(lVar8);
      }
    }
    *(undefined8 *)(lVar8 + 0x38) = 0;
    *(undefined8 *)(lVar8 + 0x18) = 0;
    *(undefined8 *)(lVar8 + 0x10) = 0;
    *(undefined8 *)(lVar8 + 0x28) = 0;
    *(undefined8 *)(lVar8 + 0x20) = 0;
    if (0 < *(int *)(lVar8 + 4)) {
      lVar7 = 0;
      lVar9 = *(long *)(lVar8 + 0x40);
      do {
        *(undefined4 *)(lVar9 + lVar7 * 4) = 0;
        lVar7 = lVar7 + 1;
      } while (lVar7 < *(int *)(lVar8 + 4));
    }
    lVar7 = *(long *)(lVar8 + 0x48);
    if (lVar7 != lVar8 + 0x50 && lVar7 != 0) {
      _free(*(undefined8 *)(lVar7 + -8));
    }
  } while (lVar5 != 0x24b8);
  lVar5 = 0x24b8;
  do {
    lVar5 = lVar5 + -0x60;
    lVar8 = (long)param_1 + lVar5;
    if (*(long *)(lVar8 + 0x38) != 0) {
      piVar1 = (int *)(*(long *)(lVar8 + 0x38) + 0x14);
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
        func_0x000109a848d4(lVar8);
      }
    }
    *(undefined8 *)(lVar8 + 0x38) = 0;
    *(undefined8 *)(lVar8 + 0x18) = 0;
    *(undefined8 *)(lVar8 + 0x10) = 0;
    *(undefined8 *)(lVar8 + 0x28) = 0;
    *(undefined8 *)(lVar8 + 0x20) = 0;
    if (0 < *(int *)(lVar8 + 4)) {
      lVar7 = 0;
      lVar9 = *(long *)(lVar8 + 0x40);
      do {
        *(undefined4 *)(lVar9 + lVar7 * 4) = 0;
        lVar7 = lVar7 + 1;
      } while (lVar7 < *(int *)(lVar8 + 4));
    }
    lVar7 = *(long *)(lVar8 + 0x48);
    if (lVar7 != lVar8 + 0x50 && lVar7 != 0) {
      _free(*(undefined8 *)(lVar7 + -8));
    }
  } while (lVar5 != 0x2398);
  lVar5 = 0x2398;
  do {
    lVar5 = lVar5 + -0x60;
    lVar8 = (long)param_1 + lVar5;
    if (*(long *)(lVar8 + 0x38) != 0) {
      piVar1 = (int *)(*(long *)(lVar8 + 0x38) + 0x14);
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
        func_0x000109a848d4(lVar8);
      }
    }
    *(undefined8 *)(lVar8 + 0x38) = 0;
    *(undefined8 *)(lVar8 + 0x18) = 0;
    *(undefined8 *)(lVar8 + 0x10) = 0;
    *(undefined8 *)(lVar8 + 0x28) = 0;
    *(undefined8 *)(lVar8 + 0x20) = 0;
    if (0 < *(int *)(lVar8 + 4)) {
      lVar7 = 0;
      lVar9 = *(long *)(lVar8 + 0x40);
      do {
        *(undefined4 *)(lVar9 + lVar7 * 4) = 0;
        lVar7 = lVar7 + 1;
      } while (lVar7 < *(int *)(lVar8 + 4));
    }
    lVar7 = *(long *)(lVar8 + 0x48);
    if (lVar7 != lVar8 + 0x50 && lVar7 != 0) {
      _free(*(undefined8 *)(lVar7 + -8));
    }
  } while (lVar5 != 0x2278);
  lVar5 = 0x2278;
  do {
    lVar5 = lVar5 + -0x60;
    lVar8 = (long)param_1 + lVar5;
    if (*(long *)(lVar8 + 0x38) != 0) {
      piVar1 = (int *)(*(long *)(lVar8 + 0x38) + 0x14);
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
        func_0x000109a848d4(lVar8);
      }
    }
    *(undefined8 *)(lVar8 + 0x38) = 0;
    *(undefined8 *)(lVar8 + 0x18) = 0;
    *(undefined8 *)(lVar8 + 0x10) = 0;
    *(undefined8 *)(lVar8 + 0x28) = 0;
    *(undefined8 *)(lVar8 + 0x20) = 0;
    if (0 < *(int *)(lVar8 + 4)) {
      lVar7 = 0;
      lVar9 = *(long *)(lVar8 + 0x40);
      do {
        *(undefined4 *)(lVar9 + lVar7 * 4) = 0;
        lVar7 = lVar7 + 1;
      } while (lVar7 < *(int *)(lVar8 + 4));
    }
    lVar7 = *(long *)(lVar8 + 0x48);
    if (lVar7 != lVar8 + 0x50 && lVar7 != 0) {
      _free(*(undefined8 *)(lVar7 + -8));
    }
  } while (lVar5 != 0x2158);
  lVar5 = 0x2158;
  do {
    lVar5 = lVar5 + -0x60;
    lVar8 = (long)param_1 + lVar5;
    if (*(long *)(lVar8 + 0x38) != 0) {
      piVar1 = (int *)(*(long *)(lVar8 + 0x38) + 0x14);
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
        func_0x000109a848d4(lVar8);
      }
    }
    *(undefined8 *)(lVar8 + 0x38) = 0;
    *(undefined8 *)(lVar8 + 0x18) = 0;
    *(undefined8 *)(lVar8 + 0x10) = 0;
    *(undefined8 *)(lVar8 + 0x28) = 0;
    *(undefined8 *)(lVar8 + 0x20) = 0;
    if (0 < *(int *)(lVar8 + 4)) {
      lVar7 = 0;
      lVar9 = *(long *)(lVar8 + 0x40);
      do {
        *(undefined4 *)(lVar9 + lVar7 * 4) = 0;
        lVar7 = lVar7 + 1;
      } while (lVar7 < *(int *)(lVar8 + 4));
    }
    lVar7 = *(long *)(lVar8 + 0x48);
    if (lVar7 != lVar8 + 0x50 && lVar7 != 0) {
      _free(*(undefined8 *)(lVar7 + -8));
    }
  } while (lVar5 != 0x2038);
  if (param_1[0x401] != 0) {
    piVar1 = (int *)(param_1[0x401] + 0x14);
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
      func_0x000109a848d4(param_1 + 0x3fa);
    }
  }
  param_1[0x401] = 0;
  param_1[0x3fd] = 0;
  param_1[0x3fc] = 0;
  param_1[0x3ff] = 0;
  param_1[0x3fe] = 0;
  if (0 < *(int *)((long)param_1 + 0x1fd4)) {
    lVar5 = 0;
    lVar8 = param_1[0x402];
    do {
      *(undefined4 *)(lVar8 + lVar5 * 4) = 0;
      lVar5 = lVar5 + 1;
    } while (lVar5 < *(int *)((long)param_1 + 0x1fd4));
  }
  puVar6 = (undefined8 *)param_1[0x403];
  if (puVar6 != param_1 + 0x404 && puVar6 != (undefined8 *)0x0) {
    _free(puVar6[-1]);
  }
  if (param_1[0x3f5] != 0) {
    piVar1 = (int *)(param_1[0x3f5] + 0x14);
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
      func_0x000109a848d4(param_1 + 0x3ee);
    }
  }
  param_1[0x3f5] = 0;
  param_1[0x3f1] = 0;
  param_1[0x3f0] = 0;
  param_1[0x3f3] = 0;
  param_1[0x3f2] = 0;
  if (0 < *(int *)((long)param_1 + 0x1f74)) {
    lVar5 = 0;
    lVar8 = param_1[0x3f6];
    do {
      *(undefined4 *)(lVar8 + lVar5 * 4) = 0;
      lVar5 = lVar5 + 1;
    } while (lVar5 < *(int *)((long)param_1 + 0x1f74));
  }
  puVar6 = (undefined8 *)param_1[0x3f7];
  if (puVar6 != param_1 + 0x3f8 && puVar6 != (undefined8 *)0x0) {
    _free(puVar6[-1]);
  }
  if (param_1[0x3d8] != 0) {
    piVar1 = (int *)(param_1[0x3d8] + 0x14);
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
      func_0x000109a848d4(param_1 + 0x3d1);
    }
  }
  param_1[0x3d8] = 0;
  param_1[0x3d4] = 0;
  param_1[0x3d3] = 0;
  param_1[0x3d6] = 0;
  param_1[0x3d5] = 0;
  if (0 < *(int *)((long)param_1 + 0x1e8c)) {
    lVar5 = 0;
    lVar8 = param_1[0x3d9];
    do {
      *(undefined4 *)(lVar8 + lVar5 * 4) = 0;
      lVar5 = lVar5 + 1;
    } while (lVar5 < *(int *)((long)param_1 + 0x1e8c));
  }
  puVar6 = (undefined8 *)param_1[0x3da];
  if (puVar6 != param_1 + 0x3db && puVar6 != (undefined8 *)0x0) {
    _free(puVar6[-1]);
  }
  if (param_1[0x3cc] != 0) {
    piVar1 = (int *)(param_1[0x3cc] + 0x14);
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
      func_0x000109a848d4(param_1 + 0x3c5);
    }
  }
  param_1[0x3cc] = 0;
  param_1[0x3c8] = 0;
  param_1[0x3c7] = 0;
  param_1[0x3ca] = 0;
  param_1[0x3c9] = 0;
  if (0 < *(int *)((long)param_1 + 0x1e2c)) {
    lVar5 = 0;
    lVar8 = param_1[0x3cd];
    do {
      *(undefined4 *)(lVar8 + lVar5 * 4) = 0;
      lVar5 = lVar5 + 1;
    } while (lVar5 < *(int *)((long)param_1 + 0x1e2c));
  }
  puVar6 = (undefined8 *)param_1[0x3ce];
  if (puVar6 != param_1 + 0x3cf && puVar6 != (undefined8 *)0x0) {
    _free(puVar6[-1]);
  }
  if (param_1[0x3be] != 0) {
    piVar1 = (int *)(param_1[0x3be] + 0x14);
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
      func_0x000109a848d4(param_1 + 0x3b7);
    }
  }
  param_1[0x3be] = 0;
  param_1[0x3ba] = 0;
  param_1[0x3b9] = 0;
  param_1[0x3bc] = 0;
  param_1[0x3bb] = 0;
  if (0 < *(int *)((long)param_1 + 0x1dbc)) {
    lVar5 = 0;
    lVar8 = param_1[0x3bf];
    do {
      *(undefined4 *)(lVar8 + lVar5 * 4) = 0;
      lVar5 = lVar5 + 1;
    } while (lVar5 < *(int *)((long)param_1 + 0x1dbc));
  }
  puVar6 = (undefined8 *)param_1[0x3c0];
  if (puVar6 != param_1 + 0x3c1 && puVar6 != (undefined8 *)0x0) {
    _free(puVar6[-1]);
  }
  if (param_1[0x3b2] != 0) {
    piVar1 = (int *)(param_1[0x3b2] + 0x14);
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
      func_0x000109a848d4(param_1 + 0x3ab);
    }
  }
  param_1[0x3b2] = 0;
  param_1[0x3ae] = 0;
  param_1[0x3ad] = 0;
  param_1[0x3b0] = 0;
  param_1[0x3af] = 0;
  if (0 < *(int *)((long)param_1 + 0x1d5c)) {
    lVar5 = 0;
    lVar8 = param_1[0x3b3];
    do {
      *(undefined4 *)(lVar8 + lVar5 * 4) = 0;
      lVar5 = lVar5 + 1;
    } while (lVar5 < *(int *)((long)param_1 + 0x1d5c));
  }
  puVar6 = (undefined8 *)param_1[0x3b4];
  if (puVar6 != param_1 + 0x3b5 && puVar6 != (undefined8 *)0x0) {
    _free(puVar6[-1]);
  }
  if (param_1[0x3a5] != 0) {
    piVar1 = (int *)(param_1[0x3a5] + 0x14);
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
      func_0x000109a848d4(param_1 + 0x39e);
    }
  }
  param_1[0x3a5] = 0;
  param_1[0x3a1] = 0;
  param_1[0x3a0] = 0;
  param_1[0x3a3] = 0;
  param_1[0x3a2] = 0;
  if (0 < *(int *)((long)param_1 + 0x1cf4)) {
    lVar5 = 0;
    lVar8 = param_1[0x3a6];
    do {
      *(undefined4 *)(lVar8 + lVar5 * 4) = 0;
      lVar5 = lVar5 + 1;
    } while (lVar5 < *(int *)((long)param_1 + 0x1cf4));
  }
  puVar6 = (undefined8 *)param_1[0x3a7];
  if (puVar6 != param_1 + 0x3a8 && puVar6 != (undefined8 *)0x0) {
    _free(puVar6[-1]);
  }
  if (param_1[0x399] != 0) {
    piVar1 = (int *)(param_1[0x399] + 0x14);
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
      func_0x000109a848d4(param_1 + 0x392);
    }
  }
  param_1[0x399] = 0;
  param_1[0x395] = 0;
  param_1[0x394] = 0;
  param_1[0x397] = 0;
  param_1[0x396] = 0;
  if (0 < *(int *)((long)param_1 + 0x1c94)) {
    lVar5 = 0;
    lVar8 = param_1[0x39a];
    do {
      *(undefined4 *)(lVar8 + lVar5 * 4) = 0;
      lVar5 = lVar5 + 1;
    } while (lVar5 < *(int *)((long)param_1 + 0x1c94));
  }
  puVar6 = (undefined8 *)param_1[0x39b];
  if (puVar6 != param_1 + 0x39c && puVar6 != (undefined8 *)0x0) {
    _free(puVar6[-1]);
  }
  if (param_1[900] != 0) {
    piVar1 = (int *)(param_1[900] + 0x14);
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
      func_0x000109a848d4(param_1 + 0x37d);
    }
  }
  param_1[900] = 0;
  param_1[0x380] = 0;
  param_1[0x37f] = 0;
  param_1[0x382] = 0;
  param_1[0x381] = 0;
  if (0 < *(int *)((long)param_1 + 0x1bec)) {
    lVar5 = 0;
    lVar8 = param_1[0x385];
    do {
      *(undefined4 *)(lVar8 + lVar5 * 4) = 0;
      lVar5 = lVar5 + 1;
    } while (lVar5 < *(int *)((long)param_1 + 0x1bec));
  }
  puVar6 = (undefined8 *)param_1[0x386];
  if (puVar6 != param_1 + 0x387 && puVar6 != (undefined8 *)0x0) {
    _free(puVar6[-1]);
  }
  if (param_1[0x378] != 0) {
    piVar1 = (int *)(param_1[0x378] + 0x14);
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
      func_0x000109a848d4(param_1 + 0x371);
    }
  }
  param_1[0x378] = 0;
  param_1[0x374] = 0;
  param_1[0x373] = 0;
  param_1[0x376] = 0;
  param_1[0x375] = 0;
  if (0 < *(int *)((long)param_1 + 0x1b8c)) {
    lVar5 = 0;
    lVar8 = param_1[0x379];
    do {
      *(undefined4 *)(lVar8 + lVar5 * 4) = 0;
      lVar5 = lVar5 + 1;
    } while (lVar5 < *(int *)((long)param_1 + 0x1b8c));
  }
  puVar6 = (undefined8 *)param_1[0x37a];
  if (puVar6 != param_1 + 0x37b && puVar6 != (undefined8 *)0x0) {
    _free(puVar6[-1]);
  }
  if (param_1[0x36c] != 0) {
    piVar1 = (int *)(param_1[0x36c] + 0x14);
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
      func_0x000109a848d4(param_1 + 0x365);
    }
  }
  param_1[0x36c] = 0;
  param_1[0x368] = 0;
  param_1[0x367] = 0;
  param_1[0x36a] = 0;
  param_1[0x369] = 0;
  if (0 < *(int *)((long)param_1 + 0x1b2c)) {
    lVar5 = 0;
    lVar8 = param_1[0x36d];
    do {
      *(undefined4 *)(lVar8 + lVar5 * 4) = 0;
      lVar5 = lVar5 + 1;
    } while (lVar5 < *(int *)((long)param_1 + 0x1b2c));
  }
  puVar6 = (undefined8 *)param_1[0x36e];
  if (puVar6 != param_1 + 0x36f && puVar6 != (undefined8 *)0x0) {
    _free(puVar6[-1]);
  }
  if (param_1[0x360] != 0) {
    piVar1 = (int *)(param_1[0x360] + 0x14);
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
      func_0x000109a848d4(param_1 + 0x359);
    }
  }
  param_1[0x360] = 0;
  param_1[0x35c] = 0;
  param_1[0x35b] = 0;
  param_1[0x35e] = 0;
  param_1[0x35d] = 0;
  if (0 < *(int *)((long)param_1 + 0x1acc)) {
    lVar5 = 0;
    lVar8 = param_1[0x361];
    do {
      *(undefined4 *)(lVar8 + lVar5 * 4) = 0;
      lVar5 = lVar5 + 1;
    } while (lVar5 < *(int *)((long)param_1 + 0x1acc));
  }
  puVar6 = (undefined8 *)param_1[0x362];
  if (puVar6 != param_1 + 0x363 && puVar6 != (undefined8 *)0x0) {
    _free(puVar6[-1]);
  }
  if (param_1[0x354] != 0) {
    piVar1 = (int *)(param_1[0x354] + 0x14);
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
      func_0x000109a848d4(param_1 + 0x34d);
    }
  }
  param_1[0x354] = 0;
  param_1[0x350] = 0;
  param_1[0x34f] = 0;
  param_1[0x352] = 0;
  param_1[0x351] = 0;
  if (0 < *(int *)((long)param_1 + 0x1a6c)) {
    lVar5 = 0;
    lVar8 = param_1[0x355];
    do {
      *(undefined4 *)(lVar8 + lVar5 * 4) = 0;
      lVar5 = lVar5 + 1;
    } while (lVar5 < *(int *)((long)param_1 + 0x1a6c));
  }
  puVar6 = (undefined8 *)param_1[0x356];
  if (puVar6 != param_1 + 0x357 && puVar6 != (undefined8 *)0x0) {
    _free(puVar6[-1]);
  }
  if (param_1[0x348] != 0) {
    piVar1 = (int *)(param_1[0x348] + 0x14);
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
      func_0x000109a848d4(param_1 + 0x341);
    }
  }
  param_1[0x348] = 0;
  param_1[0x344] = 0;
  param_1[0x343] = 0;
  param_1[0x346] = 0;
  param_1[0x345] = 0;
  if (0 < *(int *)((long)param_1 + 0x1a0c)) {
    lVar5 = 0;
    lVar8 = param_1[0x349];
    do {
      *(undefined4 *)(lVar8 + lVar5 * 4) = 0;
      lVar5 = lVar5 + 1;
    } while (lVar5 < *(int *)((long)param_1 + 0x1a0c));
  }
  puVar6 = (undefined8 *)param_1[0x34a];
  if (puVar6 != param_1 + 0x34b && puVar6 != (undefined8 *)0x0) {
    _free(puVar6[-1]);
  }
  if (param_1[0x33c] != 0) {
    piVar1 = (int *)(param_1[0x33c] + 0x14);
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
      func_0x000109a848d4(param_1 + 0x335);
    }
  }
  param_1[0x33c] = 0;
  param_1[0x338] = 0;
  param_1[0x337] = 0;
  param_1[0x33a] = 0;
  param_1[0x339] = 0;
  if (0 < *(int *)((long)param_1 + 0x19ac)) {
    lVar5 = 0;
    lVar8 = param_1[0x33d];
    do {
      *(undefined4 *)(lVar8 + lVar5 * 4) = 0;
      lVar5 = lVar5 + 1;
    } while (lVar5 < *(int *)((long)param_1 + 0x19ac));
  }
  puVar6 = (undefined8 *)param_1[0x33e];
  if (puVar6 != param_1 + 0x33f && puVar6 != (undefined8 *)0x0) {
    _free(puVar6[-1]);
  }
  if (param_1[0x330] != 0) {
    piVar1 = (int *)(param_1[0x330] + 0x14);
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
      func_0x000109a848d4(param_1 + 0x329);
    }
  }
  param_1[0x330] = 0;
  param_1[0x32c] = 0;
  param_1[0x32b] = 0;
  param_1[0x32e] = 0;
  param_1[0x32d] = 0;
  if (0 < *(int *)((long)param_1 + 0x194c)) {
    lVar5 = 0;
    lVar8 = param_1[0x331];
    do {
      *(undefined4 *)(lVar8 + lVar5 * 4) = 0;
      lVar5 = lVar5 + 1;
    } while (lVar5 < *(int *)((long)param_1 + 0x194c));
  }
  puVar6 = (undefined8 *)param_1[0x332];
  if (puVar6 != param_1 + 0x333 && puVar6 != (undefined8 *)0x0) {
    _free(puVar6[-1]);
  }
  if (param_1[0x326] != 0) {
    param_1[0x327] = param_1[0x326];
    __ZdlPv();
  }
  if (param_1[0x322] != 0) {
    param_1[0x323] = param_1[0x322];
    __ZdlPv();
  }
  if (param_1[0x31e] != 0) {
    param_1[799] = param_1[0x31e];
    __ZdlPv();
  }
  if (param_1[0x315] != 0) {
    param_1[0x316] = param_1[0x315];
    __ZdlPv();
  }
  if (param_1[0x56] != 0) {
    piVar1 = (int *)(param_1[0x56] + 0x14);
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
      func_0x000109a848d4(param_1 + 0x4f);
    }
  }
  param_1[0x56] = 0;
  param_1[0x52] = 0;
  param_1[0x51] = 0;
  param_1[0x54] = 0;
  param_1[0x53] = 0;
  if (0 < *(int *)((long)param_1 + 0x27c)) {
    lVar5 = 0;
    lVar8 = param_1[0x57];
    do {
      *(undefined4 *)(lVar8 + lVar5 * 4) = 0;
      lVar5 = lVar5 + 1;
    } while (lVar5 < *(int *)((long)param_1 + 0x27c));
  }
  puVar6 = (undefined8 *)param_1[0x58];
  if (puVar6 != param_1 + 0x59 && puVar6 != (undefined8 *)0x0) {
    _free(puVar6[-1]);
  }
  if (param_1[0x4a] != 0) {
    piVar1 = (int *)(param_1[0x4a] + 0x14);
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
      func_0x000109a848d4(param_1 + 0x43);
    }
  }
  param_1[0x4a] = 0;
  param_1[0x46] = 0;
  param_1[0x45] = 0;
  param_1[0x48] = 0;
  param_1[0x47] = 0;
  if (0 < *(int *)((long)param_1 + 0x21c)) {
    lVar5 = 0;
    lVar8 = param_1[0x4b];
    do {
      *(undefined4 *)(lVar8 + lVar5 * 4) = 0;
      lVar5 = lVar5 + 1;
    } while (lVar5 < *(int *)((long)param_1 + 0x21c));
  }
  puVar6 = (undefined8 *)param_1[0x4c];
  if (puVar6 != param_1 + 0x4d && puVar6 != (undefined8 *)0x0) {
    _free(puVar6[-1]);
  }
  if (param_1[0x3d] != 0) {
    piVar1 = (int *)(param_1[0x3d] + 0x14);
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
      func_0x000109a848d4(param_1 + 0x36);
    }
  }
  param_1[0x3d] = 0;
  param_1[0x39] = 0;
  param_1[0x38] = 0;
  param_1[0x3b] = 0;
  param_1[0x3a] = 0;
  if (0 < *(int *)((long)param_1 + 0x1b4)) {
    lVar5 = 0;
    lVar8 = param_1[0x3e];
    do {
      *(undefined4 *)(lVar8 + lVar5 * 4) = 0;
      lVar5 = lVar5 + 1;
    } while (lVar5 < *(int *)((long)param_1 + 0x1b4));
  }
  puVar6 = (undefined8 *)param_1[0x3f];
  if (puVar6 != param_1 + 0x40 && puVar6 != (undefined8 *)0x0) {
    _free(puVar6[-1]);
  }
  if (param_1[0x26] != 0) {
    piVar1 = (int *)(param_1[0x26] + 0x14);
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
      func_0x000109a848d4(param_1 + 0x1f);
    }
  }
  param_1[0x26] = 0;
  param_1[0x22] = 0;
  param_1[0x21] = 0;
  param_1[0x24] = 0;
  param_1[0x23] = 0;
  if (0 < *(int *)((long)param_1 + 0xfc)) {
    lVar5 = 0;
    lVar8 = param_1[0x27];
    do {
      *(undefined4 *)(lVar8 + lVar5 * 4) = 0;
      lVar5 = lVar5 + 1;
    } while (lVar5 < *(int *)((long)param_1 + 0xfc));
  }
  puVar6 = (undefined8 *)param_1[0x28];
  if (puVar6 != param_1 + 0x29 && puVar6 != (undefined8 *)0x0) {
    _free(puVar6[-1]);
  }
  if (*(char *)((long)param_1 + 199) < '\0') {
    __ZdlPv(param_1[0x16]);
  }
  FUN_1095ee584(param_1 + 6);
  *param_1 = &PTR_FUN_110afeb78;
  if (*(char *)((long)param_1 + 0x27) < '\0') {
    __ZdlPv(param_1[2]);
  }
  return param_1;
}



/* Entry: 1095d2714; end: 1095d276b;  */

long FUN_1095d2714(long param_1)

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



/* Entry: 1095d276c; end: 1095d2793;  */

void FUN_1095d276c(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 != 0) {
    FUN_1095d2794();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 1095d2794; end: 1095d2ae3;  */

long FUN_1095d2794(long param_1)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  
  if (*(long *)(param_1 + 0x5a8) != 0) {
    piVar1 = (int *)(*(long *)(param_1 + 0x5a8) + 0x14);
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
      func_0x000109a848d4(param_1 + 0x570);
    }
  }
  *(undefined8 *)(param_1 + 0x5a8) = 0;
  *(undefined8 *)(param_1 + 0x588) = 0;
  *(undefined8 *)(param_1 + 0x580) = 0;
  *(undefined8 *)(param_1 + 0x598) = 0;
  *(undefined8 *)(param_1 + 0x590) = 0;
  if (0 < *(int *)(param_1 + 0x574)) {
    lVar5 = 0;
    lVar7 = *(long *)(param_1 + 0x5b0);
    do {
      *(undefined4 *)(lVar7 + lVar5 * 4) = 0;
      lVar5 = lVar5 + 1;
    } while (lVar5 < *(int *)(param_1 + 0x574));
  }
  lVar5 = *(long *)(param_1 + 0x5b8);
  if (lVar5 != param_1 + 0x5c0 && lVar5 != 0) {
    _free(*(undefined8 *)(lVar5 + -8));
  }
  if (*(long *)(param_1 + 0x548) != 0) {
    piVar1 = (int *)(*(long *)(param_1 + 0x548) + 0x14);
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
      func_0x000109a848d4(param_1 + 0x510);
    }
  }
  *(undefined8 *)(param_1 + 0x548) = 0;
  *(undefined8 *)(param_1 + 0x528) = 0;
  *(undefined8 *)(param_1 + 0x520) = 0;
  *(undefined8 *)(param_1 + 0x538) = 0;
  *(undefined8 *)(param_1 + 0x530) = 0;
  if (0 < *(int *)(param_1 + 0x514)) {
    lVar5 = 0;
    lVar7 = *(long *)(param_1 + 0x550);
    do {
      *(undefined4 *)(lVar7 + lVar5 * 4) = 0;
      lVar5 = lVar5 + 1;
    } while (lVar5 < *(int *)(param_1 + 0x514));
  }
  lVar5 = *(long *)(param_1 + 0x558);
  if (lVar5 != param_1 + 0x560 && lVar5 != 0) {
    _free(*(undefined8 *)(lVar5 + -8));
  }
  if (*(long *)(param_1 + 0x4e8) != 0) {
    piVar1 = (int *)(*(long *)(param_1 + 0x4e8) + 0x14);
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
      func_0x000109a848d4(param_1 + 0x4b0);
    }
  }
  *(undefined8 *)(param_1 + 0x4e8) = 0;
  *(undefined8 *)(param_1 + 0x4c8) = 0;
  *(undefined8 *)(param_1 + 0x4c0) = 0;
  *(undefined8 *)(param_1 + 0x4d8) = 0;
  *(undefined8 *)(param_1 + 0x4d0) = 0;
  if (0 < *(int *)(param_1 + 0x4b4)) {
    lVar5 = 0;
    lVar7 = *(long *)(param_1 + 0x4f0);
    do {
      *(undefined4 *)(lVar7 + lVar5 * 4) = 0;
      lVar5 = lVar5 + 1;
    } while (lVar5 < *(int *)(param_1 + 0x4b4));
  }
  lVar5 = *(long *)(param_1 + 0x4f8);
  if (lVar5 != param_1 + 0x500 && lVar5 != 0) {
    _free(*(undefined8 *)(lVar5 + -8));
  }
  lVar5 = 0x4b0;
  do {
    lVar5 = lVar5 + -0x60;
    lVar7 = param_1 + lVar5;
    if (*(long *)(lVar7 + 0x38) != 0) {
      piVar1 = (int *)(*(long *)(lVar7 + 0x38) + 0x14);
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
        func_0x000109a848d4(lVar7);
      }
    }
    *(undefined8 *)(lVar7 + 0x38) = 0;
    *(undefined8 *)(lVar7 + 0x18) = 0;
    *(undefined8 *)(lVar7 + 0x10) = 0;
    *(undefined8 *)(lVar7 + 0x28) = 0;
    *(undefined8 *)(lVar7 + 0x20) = 0;
    if (0 < *(int *)(lVar7 + 4)) {
      lVar6 = 0;
      lVar8 = *(long *)(lVar7 + 0x40);
      do {
        *(undefined4 *)(lVar8 + lVar6 * 4) = 0;
        lVar6 = lVar6 + 1;
      } while (lVar6 < *(int *)(lVar7 + 4));
    }
    lVar6 = *(long *)(lVar7 + 0x48);
    if (lVar6 != lVar7 + 0x50 && lVar6 != 0) {
      _free(*(undefined8 *)(lVar6 + -8));
    }
  } while (lVar5 != 0x330);
  do {
    lVar5 = lVar5 + -0x60;
    lVar7 = param_1 + lVar5;
    if (*(long *)(lVar7 + 0x38) != 0) {
      piVar1 = (int *)(*(long *)(lVar7 + 0x38) + 0x14);
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
        func_0x000109a848d4(lVar7);
      }
    }
    *(undefined8 *)(lVar7 + 0x38) = 0;
    *(undefined8 *)(lVar7 + 0x18) = 0;
    *(undefined8 *)(lVar7 + 0x10) = 0;
    *(undefined8 *)(lVar7 + 0x28) = 0;
    *(undefined8 *)(lVar7 + 0x20) = 0;
    if (0 < *(int *)(lVar7 + 4)) {
      lVar6 = 0;
      lVar8 = *(long *)(lVar7 + 0x40);
      do {
        *(undefined4 *)(lVar8 + lVar6 * 4) = 0;
        lVar6 = lVar6 + 1;
      } while (lVar6 < *(int *)(lVar7 + 4));
    }
    lVar6 = *(long *)(lVar7 + 0x48);
    if (lVar6 != lVar7 + 0x50 && lVar6 != 0) {
      _free(*(undefined8 *)(lVar6 + -8));
    }
  } while (lVar5 != 0x1b0);
  do {
    lVar5 = lVar5 + -0x60;
    lVar7 = param_1 + lVar5;
    if (*(long *)(lVar7 + 0x38) != 0) {
      piVar1 = (int *)(*(long *)(lVar7 + 0x38) + 0x14);
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
        func_0x000109a848d4(lVar7);
      }
    }
    *(undefined8 *)(lVar7 + 0x38) = 0;
    *(undefined8 *)(lVar7 + 0x18) = 0;
    *(undefined8 *)(lVar7 + 0x10) = 0;
    *(undefined8 *)(lVar7 + 0x28) = 0;
    *(undefined8 *)(lVar7 + 0x20) = 0;
    if (0 < *(int *)(lVar7 + 4)) {
      lVar6 = 0;
      lVar8 = *(long *)(lVar7 + 0x40);
      do {
        *(undefined4 *)(lVar8 + lVar6 * 4) = 0;
        lVar6 = lVar6 + 1;
      } while (lVar6 < *(int *)(lVar7 + 4));
    }
    lVar6 = *(long *)(lVar7 + 0x48);
    if (lVar6 != lVar7 + 0x50 && lVar6 != 0) {
      _free(*(undefined8 *)(lVar6 + -8));
    }
  } while (lVar5 != 0x30);
  return param_1;
}



/* Entry: 1095d2ae4; end: 1095d2b5b;  */

undefined8 * FUN_1095d2ae4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110afeb78;
  if (*(char *)((long)param_1 + 0x27) < '\0') {
    __ZdlPv(param_1[2]);
  }
  return param_1;
}



/* Entry: 1095d2b5c; end: 1095d2ed7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1095d2b5c(long param_1,int *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined8 uVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  long lVar16;
  ulong uVar17;
  long lVar18;
  int iVar19;
  int iVar20;
  char *pcVar21;
  undefined1 (*pauVar22) [16];
  int iVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  undefined2 uVar28;
  undefined8 uVar29;
  undefined8 uVar30;
  undefined2 uVar31;
  undefined8 uVar32;
  undefined2 uVar33;
  undefined8 uVar34;
  undefined8 uVar35;
  undefined8 uVar36;
  undefined8 uVar37;
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined8 uVar45;
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  undefined8 uVar57;
  undefined8 uVar58;
  
  auVar15 = _UNK_10dfd7a20;
  uVar3 = *(int *)(param_1 + 0xc) * *param_2;
  lVar16 = *(long *)(param_1 + 0x10);
  uVar2 = *(uint *)(lVar16 + 8);
  uVar1 = uVar2;
  if ((int)uVar3 <= (int)uVar2) {
    uVar1 = uVar3;
  }
  uVar3 = param_2[1] * *(int *)(param_1 + 0xc);
  if ((int)uVar3 <= (int)uVar2) {
    uVar2 = uVar3;
  }
  if (*(int *)(param_1 + 0x20) == 0) {
    uVar24 = 0xc020b0401000100;
    uVar25 = 0x70a0f06000d0701;
    uVar26 = 0x8040e060c030d0e;
    uVar27 = 0x903050b060a0201;
    uVar29 = 0x6030e050c01020b;
    uVar30 = 0xe0507000c090304;
    uVar32 = 0x10d040207060c05;
    uVar34 = 0x607040701000508;
    uVar28 = 1;
    uVar33 = 1;
    uVar31 = 1;
    uVar35 = 0x1040a0507060802;
  }
  else {
    uVar31 = 2;
    uVar33 = 3;
    uVar28 = 2;
    uVar24 = 0xc020b0405000e07;
    uVar25 = 0x10f090d0603080a;
    uVar26 = 0x80405060803020c;
    uVar27 = 0x90d050b070a0201;
    uVar29 = 0x60f0e0a0d01020c;
    uVar30 = 0x805070001090304;
    uVar32 = 0x103040207060805;
    uVar34 = 0x603040701000508;
    uVar35 = 0x104000507060802;
  }
  uVar1 = uVar1 & ((int)uVar1 >> 0x1f ^ 0xffffffffU);
  uVar17 = (ulong)uVar1;
  lVar18 = *(long *)(param_1 + 0x18);
  iVar19 = (int)*(undefined8 *)(lVar16 + 0x50);
  if ((*(byte *)(param_1 + 0x24) & 1) == 0) {
    if ((int)uVar1 < (int)uVar2) {
      iVar23 = *(int *)(lVar16 + 0xc);
      do {
        if (0 < iVar23) {
          iVar20 = 0;
          pcVar21 = (char *)(*(long *)(lVar18 + 0x10) + **(long **)(lVar18 + 0x48) * uVar17);
          pauVar22 = (undefined1 (*) [16])
                     (*(long *)(lVar16 + 0x10) + **(long **)(lVar16 + 0x48) * uVar17 + -3);
          do {
            uVar10 = a64_TBL(ZEXT816(0),*(undefined1 (*) [16])(*pauVar22 + -iVar19),uVar35);
            uVar36 = a64_TBL(ZEXT816(0),*(undefined1 (*) [16])(*pauVar22 + -iVar19),uVar34);
            uVar57 = a64_TBL(ZEXT816(0),*pauVar22,uVar32);
            uVar45 = a64_TBL(ZEXT816(0),*pauVar22,0x5080604020103);
            auVar53._0_8_ =
                 a64_TBL(ZEXT816(0),*(undefined1 (*) [16])(*pauVar22 + iVar19),0x7060504020308);
            auVar53._8_8_ = uVar36;
            auVar55._8_8_ = uVar57;
            auVar55._0_8_ = uVar10;
            uVar37 = a64_TBL(ZEXT816(0),auVar55,uVar30);
            auVar9._8_8_ = uVar57;
            auVar9._0_8_ = uVar10;
            uVar57 = a64_TBL(ZEXT816(0),auVar9,uVar29);
            auVar13._8_8_ = uVar45;
            auVar13._0_8_ = auVar53._0_8_;
            uVar10 = a64_TBL(ZEXT816(0),auVar13,uVar27);
            auVar14._8_8_ = uVar45;
            auVar14._0_8_ = auVar53._0_8_;
            uVar58 = a64_TBL(ZEXT816(0),auVar14,uVar26);
            uVar36 = a64_TBL(ZEXT816(0),auVar53,uVar25);
            uVar45 = a64_TBL(ZEXT816(0),auVar53,uVar24);
            auVar42._0_2_ = (ushort)(byte)uVar37 - (ushort)(byte)uVar10;
            auVar42._2_2_ = (ushort)(byte)((ulong)uVar37 >> 8) - (ushort)(byte)((ulong)uVar10 >> 8);
            auVar42._4_2_ =
                 (ushort)(byte)((ulong)uVar37 >> 0x10) - (ushort)(byte)((ulong)uVar10 >> 0x10);
            auVar42._6_2_ =
                 (ushort)(byte)((ulong)uVar37 >> 0x18) - (ushort)(byte)((ulong)uVar10 >> 0x18);
            auVar42._8_2_ =
                 (ushort)(byte)((ulong)uVar37 >> 0x20) - (ushort)(byte)((ulong)uVar10 >> 0x20);
            auVar42._10_2_ =
                 (ushort)(byte)((ulong)uVar37 >> 0x28) - (ushort)(byte)((ulong)uVar10 >> 0x28);
            auVar42._12_2_ =
                 (ushort)(byte)((ulong)uVar37 >> 0x30) - (ushort)(byte)((ulong)uVar10 >> 0x30);
            auVar42._14_2_ =
                 (ushort)(byte)((ulong)uVar37 >> 0x38) - (ushort)(byte)((ulong)uVar10 >> 0x38);
            auVar54._0_2_ = (ushort)(byte)uVar58 - (ushort)(byte)uVar45;
            auVar54._2_2_ = (ushort)(byte)((ulong)uVar58 >> 8) - (ushort)(byte)((ulong)uVar45 >> 8);
            auVar54._4_2_ =
                 (ushort)(byte)((ulong)uVar58 >> 0x10) - (ushort)(byte)((ulong)uVar45 >> 0x10);
            auVar54._6_2_ =
                 (ushort)(byte)((ulong)uVar58 >> 0x18) - (ushort)(byte)((ulong)uVar45 >> 0x18);
            auVar54._8_2_ =
                 (ushort)(byte)((ulong)uVar58 >> 0x20) - (ushort)(byte)((ulong)uVar45 >> 0x20);
            auVar54._10_2_ =
                 (ushort)(byte)((ulong)uVar58 >> 0x28) - (ushort)(byte)((ulong)uVar45 >> 0x28);
            auVar54._12_2_ =
                 (ushort)(byte)((ulong)uVar58 >> 0x30) - (ushort)(byte)((ulong)uVar45 >> 0x30);
            auVar54._14_2_ =
                 (ushort)(byte)((ulong)uVar58 >> 0x38) - (ushort)(byte)((ulong)uVar45 >> 0x38);
            auVar48._0_2_ = (ushort)(byte)uVar36 - (ushort)(byte)uVar57;
            auVar48._2_2_ = (ushort)(byte)((ulong)uVar36 >> 8) - (ushort)(byte)((ulong)uVar57 >> 8);
            auVar48._4_2_ =
                 (ushort)(byte)((ulong)uVar36 >> 0x10) - (ushort)(byte)((ulong)uVar57 >> 0x10);
            auVar48._6_2_ =
                 (ushort)(byte)((ulong)uVar36 >> 0x18) - (ushort)(byte)((ulong)uVar57 >> 0x18);
            auVar48._8_2_ =
                 (ushort)(byte)((ulong)uVar36 >> 0x20) - (ushort)(byte)((ulong)uVar57 >> 0x20);
            auVar48._10_2_ =
                 (ushort)(byte)((ulong)uVar36 >> 0x28) - (ushort)(byte)((ulong)uVar57 >> 0x28);
            auVar48._12_2_ =
                 (ushort)(byte)((ulong)uVar36 >> 0x30) - (ushort)(byte)((ulong)uVar57 >> 0x30);
            auVar48._14_2_ =
                 (ushort)(byte)((ulong)uVar36 >> 0x38) - (ushort)(byte)((ulong)uVar57 >> 0x38);
            auVar39._4_2_ = uVar28;
            auVar39._0_4_ = 0x10001;
            auVar39._6_2_ = 1;
            auVar39._8_2_ = 1;
            auVar39._10_2_ = 1;
            auVar39._12_2_ = 1;
            auVar39._14_2_ = 1;
            auVar39 = NEON_sqsub(auVar42,auVar39,2);
            auVar47._8_2_ = uVar33;
            auVar47._0_8_ = 0x1000100010001;
            auVar47._10_2_ = 1;
            auVar47._12_2_ = 1;
            auVar47._14_2_ = 1;
            auVar55 = NEON_sqsub(auVar54,auVar47,2);
            auVar51._8_2_ = 1;
            auVar51._0_8_ = 0x1000100010001;
            auVar51._10_2_ = uVar31;
            auVar51._12_2_ = 1;
            auVar51._14_2_ = 1;
            auVar47 = NEON_sqsub(auVar48,auVar51,2);
            auVar43._0_2_ = auVar39._0_2_ >> 0xf;
            auVar43._2_2_ = auVar39._2_2_ >> 0xf;
            auVar43._4_2_ = auVar39._4_2_ >> 0xf;
            auVar43._6_2_ = auVar39._6_2_ >> 0xf;
            auVar43._8_2_ = auVar39._8_2_ >> 0xf;
            auVar43._10_2_ = auVar39._10_2_ >> 0xf;
            auVar43._12_2_ = auVar39._12_2_ >> 0xf;
            auVar43._14_2_ = auVar39._14_2_ >> 0xf;
            auVar39 = NEON_ushl(auVar43,auVar15,2);
            auVar56._0_2_ = auVar55._0_2_ >> 0xf;
            auVar56._2_2_ = auVar55._2_2_ >> 0xf;
            auVar56._4_2_ = auVar55._4_2_ >> 0xf;
            auVar56._6_2_ = auVar55._6_2_ >> 0xf;
            auVar56._8_2_ = auVar55._8_2_ >> 0xf;
            auVar56._10_2_ = auVar55._10_2_ >> 0xf;
            auVar56._12_2_ = auVar55._12_2_ >> 0xf;
            auVar56._14_2_ = auVar55._14_2_ >> 0xf;
            auVar51 = NEON_ushl(auVar56,auVar15,2);
            auVar44._0_2_ = auVar47._0_2_ >> 0xf;
            auVar44._2_2_ = auVar47._2_2_ >> 0xf;
            auVar44._4_2_ = auVar47._4_2_ >> 0xf;
            auVar44._6_2_ = auVar47._6_2_ >> 0xf;
            auVar44._8_2_ = auVar47._8_2_ >> 0xf;
            auVar44._10_2_ = auVar47._10_2_ >> 0xf;
            auVar44._12_2_ = auVar47._12_2_ >> 0xf;
            auVar44._14_2_ = auVar47._14_2_ >> 0xf;
            auVar47 = NEON_ushl(auVar44,auVar15,2);
            *pcVar21 = auVar39[0] + auVar39[2] + auVar39[4] + auVar39[6] +
                       (auVar39[8] + auVar39[10] + auVar39[0xc] + auVar39[0xe]) * '\x10';
            pcVar21[1] = auVar51[0] + auVar51[2] + auVar51[4] + auVar51[6] +
                         (auVar51[8] + auVar51[10] + auVar51[0xc] + auVar51[0xe]) * '\x10';
            pcVar21[2] = auVar47[0] + auVar47[2] + auVar47[4] + auVar47[6] +
                         (auVar47[8] + auVar47[10] + auVar47[0xc] + auVar47[0xe]) * '\x10';
            iVar20 = iVar20 + 1;
            pcVar21 = pcVar21 + 3;
            iVar23 = *(int *)(lVar16 + 0xc);
            pauVar22 = (undefined1 (*) [16])(*pauVar22 + 3);
          } while (iVar20 < iVar23);
        }
        uVar17 = uVar17 + 1;
      } while (uVar17 != uVar2);
    }
  }
  else if ((int)uVar1 < (int)uVar2) {
    iVar23 = *(int *)(lVar16 + 0xc);
    do {
      if (0 < iVar23) {
        iVar20 = 0;
        pcVar21 = (char *)(*(long *)(lVar18 + 0x10) + **(long **)(lVar18 + 0x48) * uVar17);
        pauVar22 = (undefined1 (*) [16])
                   (*(long *)(lVar16 + 0x10) + **(long **)(lVar16 + 0x48) * uVar17 + -3);
        do {
          uVar10 = a64_TBL(ZEXT816(0),*(undefined1 (*) [16])(*pauVar22 + iVar19),uVar35);
          uVar36 = a64_TBL(ZEXT816(0),*(undefined1 (*) [16])(*pauVar22 + iVar19),uVar34);
          uVar57 = a64_TBL(ZEXT816(0),*pauVar22,uVar32);
          uVar45 = a64_TBL(ZEXT816(0),*pauVar22,0x5080604020103);
          auVar49._0_8_ =
               a64_TBL(ZEXT816(0),*(undefined1 (*) [16])(*pauVar22 + -iVar19),0x7060504020308);
          auVar49._8_8_ = uVar36;
          auVar7._8_8_ = uVar57;
          auVar7._0_8_ = uVar10;
          uVar37 = a64_TBL(ZEXT816(0),auVar7,uVar30);
          auVar8._8_8_ = uVar57;
          auVar8._0_8_ = uVar10;
          uVar57 = a64_TBL(ZEXT816(0),auVar8,uVar29);
          auVar11._8_8_ = uVar45;
          auVar11._0_8_ = auVar49._0_8_;
          uVar10 = a64_TBL(ZEXT816(0),auVar11,uVar27);
          auVar12._8_8_ = uVar45;
          auVar12._0_8_ = auVar49._0_8_;
          uVar58 = a64_TBL(ZEXT816(0),auVar12,uVar26);
          uVar36 = a64_TBL(ZEXT816(0),auVar49,uVar25);
          uVar45 = a64_TBL(ZEXT816(0),auVar49,uVar24);
          auVar38._0_2_ = (ushort)(byte)uVar37 - (ushort)(byte)uVar10;
          auVar38._2_2_ = (ushort)(byte)((ulong)uVar37 >> 8) - (ushort)(byte)((ulong)uVar10 >> 8);
          auVar38._4_2_ =
               (ushort)(byte)((ulong)uVar37 >> 0x10) - (ushort)(byte)((ulong)uVar10 >> 0x10);
          auVar38._6_2_ =
               (ushort)(byte)((ulong)uVar37 >> 0x18) - (ushort)(byte)((ulong)uVar10 >> 0x18);
          auVar38._8_2_ =
               (ushort)(byte)((ulong)uVar37 >> 0x20) - (ushort)(byte)((ulong)uVar10 >> 0x20);
          auVar38._10_2_ =
               (ushort)(byte)((ulong)uVar37 >> 0x28) - (ushort)(byte)((ulong)uVar10 >> 0x28);
          auVar38._12_2_ =
               (ushort)(byte)((ulong)uVar37 >> 0x30) - (ushort)(byte)((ulong)uVar10 >> 0x30);
          auVar38._14_2_ =
               (ushort)(byte)((ulong)uVar37 >> 0x38) - (ushort)(byte)((ulong)uVar10 >> 0x38);
          auVar50._0_2_ = (ushort)(byte)uVar58 - (ushort)(byte)uVar45;
          auVar50._2_2_ = (ushort)(byte)((ulong)uVar58 >> 8) - (ushort)(byte)((ulong)uVar45 >> 8);
          auVar50._4_2_ =
               (ushort)(byte)((ulong)uVar58 >> 0x10) - (ushort)(byte)((ulong)uVar45 >> 0x10);
          auVar50._6_2_ =
               (ushort)(byte)((ulong)uVar58 >> 0x18) - (ushort)(byte)((ulong)uVar45 >> 0x18);
          auVar50._8_2_ =
               (ushort)(byte)((ulong)uVar58 >> 0x20) - (ushort)(byte)((ulong)uVar45 >> 0x20);
          auVar50._10_2_ =
               (ushort)(byte)((ulong)uVar58 >> 0x28) - (ushort)(byte)((ulong)uVar45 >> 0x28);
          auVar50._12_2_ =
               (ushort)(byte)((ulong)uVar58 >> 0x30) - (ushort)(byte)((ulong)uVar45 >> 0x30);
          auVar50._14_2_ =
               (ushort)(byte)((ulong)uVar58 >> 0x38) - (ushort)(byte)((ulong)uVar45 >> 0x38);
          auVar46._0_2_ = (ushort)(byte)uVar36 - (ushort)(byte)uVar57;
          auVar46._2_2_ = (ushort)(byte)((ulong)uVar36 >> 8) - (ushort)(byte)((ulong)uVar57 >> 8);
          auVar46._4_2_ =
               (ushort)(byte)((ulong)uVar36 >> 0x10) - (ushort)(byte)((ulong)uVar57 >> 0x10);
          auVar46._6_2_ =
               (ushort)(byte)((ulong)uVar36 >> 0x18) - (ushort)(byte)((ulong)uVar57 >> 0x18);
          auVar46._8_2_ =
               (ushort)(byte)((ulong)uVar36 >> 0x20) - (ushort)(byte)((ulong)uVar57 >> 0x20);
          auVar46._10_2_ =
               (ushort)(byte)((ulong)uVar36 >> 0x28) - (ushort)(byte)((ulong)uVar57 >> 0x28);
          auVar46._12_2_ =
               (ushort)(byte)((ulong)uVar36 >> 0x30) - (ushort)(byte)((ulong)uVar57 >> 0x30);
          auVar46._14_2_ =
               (ushort)(byte)((ulong)uVar36 >> 0x38) - (ushort)(byte)((ulong)uVar57 >> 0x38);
          auVar4._4_2_ = uVar28;
          auVar4._0_4_ = 0x10001;
          auVar4._6_2_ = 1;
          auVar4._8_2_ = 1;
          auVar4._10_2_ = 1;
          auVar4._12_2_ = 1;
          auVar4._14_2_ = 1;
          auVar39 = NEON_sqsub(auVar38,auVar4,2);
          auVar6._8_2_ = uVar33;
          auVar6._0_8_ = 0x1000100010001;
          auVar6._10_2_ = 1;
          auVar6._12_2_ = 1;
          auVar6._14_2_ = 1;
          auVar51 = NEON_sqsub(auVar50,auVar6,2);
          auVar5._8_2_ = 1;
          auVar5._0_8_ = 0x1000100010001;
          auVar5._10_2_ = uVar31;
          auVar5._12_2_ = 1;
          auVar5._14_2_ = 1;
          auVar47 = NEON_sqsub(auVar46,auVar5,2);
          auVar40._0_2_ = auVar39._0_2_ >> 0xf;
          auVar40._2_2_ = auVar39._2_2_ >> 0xf;
          auVar40._4_2_ = auVar39._4_2_ >> 0xf;
          auVar40._6_2_ = auVar39._6_2_ >> 0xf;
          auVar40._8_2_ = auVar39._8_2_ >> 0xf;
          auVar40._10_2_ = auVar39._10_2_ >> 0xf;
          auVar40._12_2_ = auVar39._12_2_ >> 0xf;
          auVar40._14_2_ = auVar39._14_2_ >> 0xf;
          auVar39 = NEON_ushl(auVar40,auVar15,2);
          auVar52._0_2_ = auVar51._0_2_ >> 0xf;
          auVar52._2_2_ = auVar51._2_2_ >> 0xf;
          auVar52._4_2_ = auVar51._4_2_ >> 0xf;
          auVar52._6_2_ = auVar51._6_2_ >> 0xf;
          auVar52._8_2_ = auVar51._8_2_ >> 0xf;
          auVar52._10_2_ = auVar51._10_2_ >> 0xf;
          auVar52._12_2_ = auVar51._12_2_ >> 0xf;
          auVar52._14_2_ = auVar51._14_2_ >> 0xf;
          auVar51 = NEON_ushl(auVar52,auVar15,2);
          auVar41._0_2_ = auVar47._0_2_ >> 0xf;
          auVar41._2_2_ = auVar47._2_2_ >> 0xf;
          auVar41._4_2_ = auVar47._4_2_ >> 0xf;
          auVar41._6_2_ = auVar47._6_2_ >> 0xf;
          auVar41._8_2_ = auVar47._8_2_ >> 0xf;
          auVar41._10_2_ = auVar47._10_2_ >> 0xf;
          auVar41._12_2_ = auVar47._12_2_ >> 0xf;
          auVar41._14_2_ = auVar47._14_2_ >> 0xf;
          auVar47 = NEON_ushl(auVar41,auVar15,2);
          *pcVar21 = auVar39[0] + auVar39[2] + auVar39[4] + auVar39[6] +
                     (auVar39[8] + auVar39[10] + auVar39[0xc] + auVar39[0xe]) * '\x10';
          pcVar21[1] = auVar51[0] + auVar51[2] + auVar51[4] + auVar51[6] +
                       (auVar51[8] + auVar51[10] + auVar51[0xc] + auVar51[0xe]) * '\x10';
          pcVar21[2] = auVar47[0] + auVar47[2] + auVar47[4] + auVar47[6] +
                       (auVar47[8] + auVar47[10] + auVar47[0xc] + auVar47[0xe]) * '\x10';
          iVar20 = iVar20 + 1;
          pcVar21 = pcVar21 + 3;
          iVar23 = *(int *)(lVar16 + 0xc);
          pauVar22 = (undefined1 (*) [16])(*pauVar22 + 3);
        } while (iVar20 < iVar23);
      }
      uVar17 = uVar17 + 1;
    } while (uVar17 != uVar2);
  }
  return;
}



/* Entry: 1095d2ed8; end: 1095d2fd7;  */

void FUN_1095d2ed8(long param_1,uint *param_2,undefined4 param_3,undefined1 param_4)

{
  uint uVar1;
  undefined4 uStack_68;
  int iStack_64;
  undefined **ppuStack_60;
  int iStack_58;
  int iStack_54;
  long lStack_50;
  uint *puStack_48;
  undefined4 uStack_40;
  undefined1 uStack_3c;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(uint *)(param_1 + 8);
  ppuStack_60 = *(undefined ***)(param_1 + 8);
  if (((2 < (int)param_2[1] || param_2[2] != uVar1) || param_2[3] != *(uint *)(param_1 + 0xc)) ||
     ((*param_2 & 0xfff) != 0x10 || *(long *)(param_2 + 4) == 0)) {
    FUN_109a83fd0(param_2,2,&ppuStack_60,0x10);
    uVar1 = *(uint *)(param_1 + 8);
  }
  ppuStack_60 = &PTR_FUN_110afeba0;
  iStack_54 = (int)((double)(int)uVar1 / (double)iRam00000001132dfb70);
  iStack_58 = iRam00000001132dfb70;
  uStack_68 = 0;
  iStack_64 = iRam00000001132dfb70;
  lStack_50 = param_1;
  puStack_48 = param_2;
  uStack_40 = param_3;
  uStack_3c = param_4;
  func_0x000109aa87cc(0xbff0000000000000,&uStack_68,&ppuStack_60);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return;
  }
  ___stack_chk_fail();
  __Unwind_Resume();
  return;
}



/* Entry: 1095d2fd8; end: 1095d2fdf;  */

void FUN_1095d2fd8(void)

{
  return;
}



/* Entry: 1095d2fe0; end: 1095d359b;  */

undefined8 *
FUN_1095d2fe0(uint *param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4,uint *param_5
             ,uint *param_6,undefined8 param_7)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  uint uVar5;
  code *pcVar6;
  uint *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined4 *puVar11;
  ulong uVar12;
  uint uVar13;
  long lVar14;
  undefined8 *puVar15;
  uint *puVar16;
  long lVar17;
  long *plVar18;
  long *plVar19;
  int *piVar20;
  undefined4 uVar21;
  uint uStack_650;
  int iStack_64c;
  uint uStack_648;
  uint uStack_644;
  undefined8 *puStack_640;
  undefined8 *puStack_638;
  undefined8 *puStack_630;
  undefined8 *puStack_628;
  undefined8 uStack_620;
  undefined8 uStack_618;
  ulong uStack_610;
  long *plStack_608;
  long lStack_600;
  ulong uStack_5f8;
  undefined4 *puStack_5f0;
  undefined8 uStack_5e8;
  undefined8 *puStack_5e0;
  undefined8 *puStack_5d8;
  uint *puStack_5d0;
  undefined8 uStack_5c8;
  undefined8 uStack_5c0;
  uint *puStack_5b8;
  undefined8 *puStack_5b0;
  undefined8 *puStack_5a8;
  undefined1 *puStack_5a0;
  code *pcStack_598;
  undefined8 uStack_590;
  undefined8 uStack_588;
  undefined8 uStack_580;
  undefined8 uStack_578;
  undefined8 uStack_570;
  undefined8 uStack_568;
  undefined4 auStack_560 [2];
  undefined8 *puStack_558;
  undefined8 uStack_550;
  undefined4 auStack_548 [2];
  uint *puStack_540;
  undefined8 uStack_538;
  undefined8 uStack_530;
  uint *puStack_528;
  undefined8 uStack_520;
  undefined8 uStack_518;
  undefined8 uStack_508;
  undefined8 uStack_500;
  undefined8 uStack_4f8;
  undefined8 uStack_4f0;
  long lStack_4e0;
  long lStack_4d8;
  undefined1 *puStack_4d0;
  undefined1 auStack_4c8 [16];
  undefined8 uStack_4b8;
  uint *puStack_4b0;
  undefined8 uStack_4a8;
  undefined8 uStack_438;
  uint *puStack_430;
  undefined8 uStack_428;
  undefined8 auStack_3b8 [16];
  undefined8 uStack_338;
  undefined8 uStack_330;
  undefined8 *puStack_328;
  ulong uStack_320;
  undefined4 uStack_318;
  undefined8 uStack_314;
  undefined8 uStack_30c;
  undefined8 uStack_304;
  undefined8 uStack_2fc;
  undefined8 uStack_2f4;
  undefined4 uStack_2ec;
  undefined4 uStack_2e8;
  undefined4 uStack_2e4;
  undefined8 uStack_2e0;
  long lStack_2d8;
  undefined8 *puStack_2d0;
  undefined8 uStack_2c8;
  undefined8 uStack_2c0;
  undefined4 uStack_2b8;
  undefined8 uStack_2b4;
  undefined8 uStack_2ac;
  undefined8 uStack_2a4;
  undefined8 uStack_29c;
  undefined8 uStack_294;
  undefined4 uStack_28c;
  undefined4 uStack_288;
  undefined4 uStack_284;
  undefined8 uStack_280;
  long lStack_278;
  undefined8 *puStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined4 uStack_258;
  undefined8 uStack_254;
  undefined8 uStack_24c;
  undefined8 uStack_244;
  undefined8 uStack_23c;
  undefined8 uStack_234;
  undefined4 uStack_22c;
  undefined4 uStack_228;
  undefined4 uStack_224;
  undefined8 uStack_220;
  long lStack_218;
  undefined8 *puStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined4 uStack_1f8;
  undefined8 uStack_1f4;
  undefined8 uStack_1ec;
  undefined8 uStack_1e4;
  undefined8 uStack_1dc;
  undefined8 uStack_1d4;
  undefined4 uStack_1cc;
  undefined4 uStack_1c8;
  undefined4 uStack_1c4;
  undefined8 uStack_1c0;
  long lStack_1b8;
  undefined8 *puStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined4 uStack_198;
  undefined8 uStack_194;
  undefined8 uStack_18c;
  undefined8 uStack_184;
  undefined8 uStack_17c;
  undefined8 uStack_174;
  undefined4 uStack_16c;
  undefined4 uStack_168;
  undefined4 uStack_164;
  undefined8 uStack_160;
  long lStack_158;
  undefined8 *puStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined4 uStack_138;
  undefined8 uStack_134;
  undefined8 uStack_12c;
  undefined8 uStack_124;
  undefined8 uStack_11c;
  undefined8 uStack_114;
  undefined4 uStack_10c;
  undefined4 uStack_108;
  undefined4 uStack_104;
  undefined8 uStack_100;
  long lStack_f8;
  undefined8 *puStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined4 uStack_d8;
  undefined8 uStack_d4;
  undefined8 uStack_cc;
  undefined8 uStack_c4;
  undefined8 uStack_bc;
  undefined8 uStack_b4;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined8 uStack_a0;
  long lStack_98;
  undefined8 *puStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  long lStack_78;
  
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar16 = (uint *)param_4[8];
  if (((2 < (int)param_6[1] || param_6[2] != *puVar16) || param_6[3] != puVar16[1]) ||
     (puVar7 = param_1, (*param_6 & 0xfff) != (*param_5 & 0xfff) || *(long *)(param_6 + 4) == 0)) {
    puVar7 = param_6;
    uStack_330 = *(undefined8 *)puVar16;
    FUN_109a83fd0(param_6,2,&uStack_330);
  }
  auStack_3b8[0] = 0;
  uStack_330 = CONCAT44(uStack_330._4_4_,0xc1020006);
  puStack_328 = auStack_3b8;
  uStack_320 = 0x100000001;
  FUN_109a91d90();
  puVar15 = &uStack_330;
  FUN_109a48a40(param_6,&uStack_330,puVar7);
  puStack_328 = (undefined8 *)0x0;
  uStack_320 = uStack_320 & 0xffffffff00000000;
  uStack_318 = 0x42ff0000;
  lStack_2d8 = (long)&uStack_314 + 4;
  uStack_30c = 0;
  uStack_314 = 0;
  uStack_2fc = 0;
  uStack_304 = 0;
  uStack_2ec = 0;
  uStack_2f4 = 0;
  uStack_2e0 = 0;
  uStack_2e8 = 0;
  uStack_2e4 = 0;
  puStack_2d0 = &uStack_2c8;
  uStack_2c0 = 0;
  uStack_2c8 = 0;
  uStack_2b8 = 0x42ff0000;
  lStack_278 = (long)&uStack_2b4 + 4;
  uStack_2ac = 0;
  uStack_2b4 = 0;
  uStack_29c = 0;
  uStack_2a4 = 0;
  uStack_28c = 0;
  uStack_294 = 0;
  uStack_280 = 0;
  uStack_288 = 0;
  uStack_284 = 0;
  puStack_270 = &uStack_268;
  uStack_260 = 0;
  uStack_268 = 0;
  uStack_258 = 0x42ff0000;
  lStack_218 = (long)&uStack_254 + 4;
  uStack_220 = 0;
  uStack_224 = 0;
  uStack_22c = 0;
  uStack_228 = 0;
  uStack_234 = 0;
  uStack_23c = 0;
  uStack_244 = 0;
  uStack_24c = 0;
  uStack_254 = 0;
  puStack_210 = &uStack_208;
  uStack_200 = 0;
  uStack_208 = 0;
  uStack_1f8 = 0x42ff0000;
  lStack_1b8 = (long)&uStack_1f4 + 4;
  uStack_1c0 = 0;
  uStack_1c4 = 0;
  uStack_1dc = 0;
  uStack_1e4 = 0;
  uStack_1cc = 0;
  uStack_1c8 = 0;
  uStack_1d4 = 0;
  uStack_1ec = 0;
  uStack_1f4 = 0;
  puStack_1b0 = &uStack_1a8;
  uStack_1a0 = 0;
  uStack_1a8 = 0;
  uStack_198 = 0x42ff0000;
  lStack_158 = (long)&uStack_194 + 4;
  uStack_160 = 0;
  uStack_164 = 0;
  uStack_17c = 0;
  uStack_184 = 0;
  uStack_16c = 0;
  uStack_168 = 0;
  uStack_174 = 0;
  uStack_18c = 0;
  uStack_194 = 0;
  puStack_150 = &uStack_148;
  uStack_140 = 0;
  uStack_148 = 0;
  uStack_138 = 0x42ff0000;
  lStack_f8 = (long)&uStack_134 + 4;
  uStack_100 = 0;
  uStack_104 = 0;
  uStack_11c = 0;
  uStack_124 = 0;
  uStack_10c = 0;
  uStack_108 = 0;
  uStack_114 = 0;
  uStack_12c = 0;
  uStack_134 = 0;
  puStack_f0 = &uStack_e8;
  uStack_e0 = 0;
  uStack_e8 = 0;
  uStack_d8 = 0x42ff0000;
  lStack_98 = (long)&uStack_d4 + 4;
  uStack_a0 = 0;
  uStack_a4 = 0;
  uStack_bc = 0;
  uStack_c4 = 0;
  uStack_ac = 0;
  uStack_a8 = 0;
  uStack_b4 = 0;
  uStack_cc = 0;
  uStack_d4 = 0;
  puStack_90 = &uStack_88;
  uStack_80 = 0;
  uStack_88 = 0;
  uStack_438 = NEON_rev64(**(undefined8 **)(param_6 + 0x10),4);
  uStack_330 = param_2;
  FUN_1095d359c(auStack_3b8,param_2,&uStack_438,5);
  uStack_428 = 0;
  uStack_438._0_4_ = 0x1010000;
  uStack_4b8 = CONCAT44(uStack_4b8._4_4_,0x2010000);
  uStack_4a8 = 0;
  uStack_518 = NEON_rev64(**(undefined8 **)(param_6 + 0x10),4);
  puStack_4b0 = param_6;
  puStack_430 = param_5;
  FUN_109b0f718(0,0,&uStack_438,&uStack_4b8,&uStack_518,1);
  if ((int)param_3 == 0) {
    uVar21 = 0x41440000;
  }
  else {
    iVar2 = 0;
    if (param_5[3] != 0) {
      iVar2 = (int)param_6[3] / (int)param_5[3];
    }
    uStack_438._0_4_ = 0x2010000;
    uStack_428 = 0;
    puStack_430 = param_6;
    FUN_109a41858((double)iVar2,0,param_6,&uStack_438,0xffffffff);
    uVar21 = 0x40d1b717;
  }
  uStack_4b8 = NEON_rev64(**(undefined8 **)(param_6 + 0x10),4);
  FUN_1095d359c(&uStack_438,param_2,&uStack_4b8,5);
  uStack_518 = NEON_rev64(**(undefined8 **)(param_6 + 0x10),4);
  uVar13 = 5;
  FUN_1095d359c(&uStack_4b8,param_2,&uStack_518);
  uStack_580 = CONCAT44((int)param_7,(int)param_7);
  uStack_530 = 0xffffffffffffffff;
  FUN_109b32bf8(&uStack_518,0,&uStack_580,&uStack_530);
  puVar16 = (uint *)0x1;
  puVar10 = param_4;
  func_0x0001095e3324(uVar21,&uStack_330);
  if (0 < (int)param_1) {
    param_7 = 0x1010000;
    param_2 = 0x2010000;
    param_5 = (uint *)&uStack_438;
    param_3 = &uStack_518;
    uStack_588 = 0x7fefffffffffffff;
    uStack_590 = 0x7fefffffffffffff;
    puVar15 = &uStack_4b8;
    do {
      uStack_520 = 0;
      uStack_530._0_4_ = 0x1010000;
      auStack_548[0] = 0x2010000;
      uStack_538 = 0;
      uStack_550 = 0;
      auStack_560[0] = 0x1010000;
      uStack_578 = uStack_588;
      uStack_580 = uStack_590;
      uStack_568 = uStack_588;
      uStack_570 = uStack_590;
      uStack_338 = 0xffffffffffffffff;
      puStack_558 = param_3;
      puStack_540 = param_5;
      puStack_528 = param_6;
      FUN_109b32fd4(1,&uStack_530,auStack_548,auStack_560,&uStack_338,1,0,&uStack_580);
      uStack_520 = 0;
      uStack_530 = CONCAT44(uStack_530._4_4_,0x1010000);
      auStack_548[0] = 0x2010000;
      uStack_538 = 0;
      uStack_550 = 0;
      auStack_560[0] = 0x1010000;
      uStack_578 = uStack_588;
      uStack_580 = uStack_590;
      uStack_568 = uStack_588;
      uStack_570 = uStack_590;
      uStack_338 = 0xffffffffffffffff;
      puStack_558 = param_3;
      puStack_540 = (uint *)puVar15;
      puStack_528 = param_6;
      FUN_109b32fd4(0,&uStack_530,auStack_548,auStack_560,&uStack_338,1,0,&uStack_580);
      puVar16 = param_6;
      FUN_1095e4188(&uStack_330,param_4,param_6,param_6,0);
      uVar13 = (uint)puVar16;
      FUN_109a292ec(param_6,&uStack_4b8,param_6);
      puVar10 = &uStack_438;
      puVar16 = param_6;
      func_0x000109a29358(param_6);
      uVar5 = (int)param_1 - 1;
      param_1 = (uint *)(ulong)uVar5;
    } while (uVar5 != 0);
  }
  if (lStack_4e0 != 0) {
    piVar20 = (int *)(lStack_4e0 + 0x14);
    do {
      iVar2 = *piVar20;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar20,0x10);
      if (bVar4) {
        *piVar20 = iVar2 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar2 + -1 == 0) {
      func_0x000109a848d4(&uStack_518);
    }
  }
  lStack_4e0 = 0;
  uStack_500 = 0;
  uStack_508 = 0;
  uStack_4f0 = 0;
  uStack_4f8 = 0;
  if (0 < uStack_518._4_4_) {
    lVar14 = 0;
    do {
      *(undefined4 *)(lStack_4d8 + lVar14 * 4) = 0;
      lVar14 = lVar14 + 1;
    } while (lVar14 < uStack_518._4_4_);
  }
  if (puStack_4d0 != auStack_4c8 && puStack_4d0 != (undefined1 *)0x0) {
    _free(*(undefined8 *)(puStack_4d0 + -8));
  }
  FUN_1095d3858(&uStack_4b8);
  FUN_1095d3858(&uStack_438);
  FUN_1095d3858(auStack_3b8);
  puVar8 = &uStack_330;
  FUN_1095d3990();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_78) {
    return (undefined8 *)0x1;
  }
  ___stack_chk_fail();
  if ((int)puVar10 != 0) {
    func_0x000104bd46a0();
    FUN_1095d3858(auStack_3b8);
    FUN_1095d3990(&uStack_330);
  }
  puVar9 = puVar8;
  __Unwind_Resume();
  pcStack_598 = FUN_1095d359c;
  *(undefined4 *)puVar9 = 0x42ff0000;
  piVar20 = (int *)((long)puVar9 + 4);
  *(undefined8 *)((long)puVar9 + 0xc) = 0;
  piVar20[0] = 0;
  piVar20[1] = 0;
  *(undefined8 *)((long)puVar9 + 0x1c) = 0;
  *(undefined8 *)((long)puVar9 + 0x14) = 0;
  *(undefined8 *)((long)puVar9 + 0x2c) = 0;
  *(undefined8 *)((long)puVar9 + 0x24) = 0;
  puVar9[7] = 0;
  puVar9[6] = 0;
  plVar19 = puVar9 + 10;
  *plVar19 = 0;
  puVar9[8] = puVar9 + 1;
  puVar9[9] = plVar19;
  puVar9[0xb] = 0;
  puVar9[0xc] = puVar10;
  uVar5 = (uVar13 >> 3 & 0x1ff) + 1 << (ulong)(0xfa50U >> (ulong)((uVar13 & 7) << 1) & 3);
  uVar12 = (ulong)(*puVar16 * uVar5 * puVar16[1]);
  puStack_5e0 = puVar15;
  puStack_5d8 = param_3;
  puStack_5d0 = param_5;
  uStack_5c8 = param_2;
  uStack_5c0 = param_7;
  puStack_5b8 = param_1;
  puStack_5b0 = param_4;
  puStack_5a8 = puVar8;
  puStack_5a0 = &stack0xfffffffffffffff0;
  FUN_1095ee600();
  puVar9[0xd] = puVar10;
  puVar9[0xe] = uVar12;
  uStack_644 = *puVar16;
  uStack_648 = puVar16[1];
  uStack_650 = uVar13 & 0xfff | 0x42ff0000;
  iStack_64c = 2;
  uStack_610 = (ulong)&uStack_650 | 8;
  puStack_628 = (undefined8 *)0x0;
  puStack_630 = (undefined8 *)0x0;
  uStack_618 = 0;
  uStack_620 = 0;
  plStack_608 = &lStack_600;
  lStack_600 = 0;
  uStack_5f8 = 0;
  puStack_640 = puVar10;
  puStack_638 = puVar10;
  if ((puVar10 == (undefined8 *)0x0) && ((long)(int)uStack_644 * (long)(int)uStack_648 != 0)) {
    puVar11 = (undefined4 *)0x24;
    func_0x000107c2ae8c();
    *puVar11 = 1;
    puStack_5f0 = puVar11 + 1;
    uStack_5e8 = 0x1c;
    *(undefined1 *)(puVar11 + 8) = 0;
    *(undefined8 *)(puVar11 + 3) = 0x207c7c2030203d3d;
    *(undefined8 *)(puVar11 + 1) = 0x2029286c61746f74;
    *(undefined8 *)(puVar11 + 6) = 0x4c4c554e203d2120;
    *(undefined8 *)(puVar11 + 4) = 0x61746164207c7c20;
    FUN_109ac3188(0xffffff29,&puStack_5f0,&UNK_10f2e8162,&UNK_10f566d1b,0x19a);
                    /* WARNING: Does not return */
    pcVar6 = (code *)SoftwareBreakpoint(1,0x1095d3808);
    (*pcVar6)();
  }
  uStack_650 = uVar13 & 0xfff | 0x42ff4000;
  lStack_600 = (long)(int)uStack_644 * (long)(int)uVar5;
  uStack_5f8 = (ulong)uVar5;
  puStack_630 = (undefined8 *)
                ((long)puVar10 + (long)(int)uStack_644 * (long)(int)uVar5 * (long)(int)uStack_648);
  puStack_628 = puStack_630;
  if (puVar9[7] != 0) {
    piVar1 = (int *)(puVar9[7] + 0x14);
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
      func_0x000109a848d4(puVar9);
    }
  }
  puVar9[7] = 0;
  puVar9[3] = 0;
  puVar9[2] = 0;
  puVar9[5] = 0;
  puVar9[4] = 0;
  if (0 < *(int *)((long)puVar9 + 4)) {
    lVar14 = 0;
    lVar17 = puVar9[8];
    do {
      *(undefined4 *)(lVar17 + lVar14 * 4) = 0;
      lVar14 = lVar14 + 1;
    } while (lVar14 < *piVar20);
  }
  puVar9[1] = CONCAT44(uStack_644,uStack_648);
  *puVar9 = CONCAT44(iStack_64c,uStack_650);
  puVar9[3] = puStack_638;
  puVar9[2] = puStack_640;
  puVar9[5] = puStack_628;
  puVar9[4] = puStack_630;
  puVar9[7] = uStack_618;
  puVar9[6] = uStack_620;
  plVar18 = (long *)puVar9[9];
  if (plVar18 != plVar19) {
    if (plVar18 != (long *)0x0) {
      _free(plVar18[-1]);
    }
    puVar9[8] = puVar9 + 1;
    puVar9[9] = plVar19;
    plVar18 = plVar19;
  }
  if (iStack_64c < 3) {
    puVar15 = (undefined8 *)((ulong)&uStack_650 | 4);
    *plVar18 = *plStack_608;
    plVar18[1] = plStack_608[1];
    uStack_650 = 0x42ff0000;
    puVar15[1] = 0;
    *puVar15 = 0;
    puVar15[3] = 0;
    puVar15[2] = 0;
    puVar15[5] = 0;
    puVar15[4] = 0;
    *(undefined8 *)((long)puVar15 + 0x34) = 0;
    *(undefined8 *)((long)puVar15 + 0x2c) = 0;
    if (plStack_608 != &lStack_600) {
      _free(plStack_608[-1]);
    }
  }
  else {
    puVar9[8] = uStack_610;
    puVar9[9] = plStack_608;
  }
  *(undefined1 *)(puVar9 + 0xf) = 1;
  return puVar9;
}



/* Entry: 1095d359c; end: 1095d3857;  */

undefined8 * FUN_1095d359c(undefined8 *param_1,long param_2,int *param_3,uint param_4)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  char cVar4;
  bool bVar5;
  code *pcVar6;
  undefined4 *puVar7;
  ulong uVar8;
  long lVar9;
  undefined8 *puVar10;
  long lVar11;
  long *plVar12;
  long *plVar13;
  int *piVar14;
  ulong uVar15;
  uint uStack_c0;
  int iStack_bc;
  int iStack_b8;
  int iStack_b4;
  long lStack_b0;
  long lStack_a8;
  long lStack_a0;
  long lStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  ulong uStack_80;
  long *plStack_78;
  long lStack_70;
  ulong uStack_68;
  undefined4 *puStack_60;
  undefined8 uStack_58;
  
  *(undefined4 *)param_1 = 0x42ff0000;
  piVar14 = (int *)((long)param_1 + 4);
  *(undefined8 *)((long)param_1 + 0xc) = 0;
  piVar14[0] = 0;
  piVar14[1] = 0;
  *(undefined8 *)((long)param_1 + 0x1c) = 0;
  *(undefined8 *)((long)param_1 + 0x14) = 0;
  *(undefined8 *)((long)param_1 + 0x2c) = 0;
  *(undefined8 *)((long)param_1 + 0x24) = 0;
  param_1[7] = 0;
  param_1[6] = 0;
  plVar13 = param_1 + 10;
  *plVar13 = 0;
  param_1[8] = param_1 + 1;
  param_1[9] = plVar13;
  param_1[0xb] = 0;
  param_1[0xc] = param_2;
  uVar3 = (param_4 >> 3 & 0x1ff) + 1 << (ulong)(0xfa50U >> (ulong)((param_4 & 7) << 1) & 3);
  uVar15 = (ulong)uVar3;
  uVar8 = (ulong)(*param_3 * uVar3 * param_3[1]);
  FUN_1095ee600();
  param_1[0xd] = param_2;
  param_1[0xe] = uVar8;
  iStack_b4 = *param_3;
  iStack_b8 = param_3[1];
  uStack_c0 = param_4 & 0xfff | 0x42ff0000;
  iStack_bc = 2;
  uStack_80 = (ulong)&uStack_c0 | 8;
  lStack_98 = 0;
  lStack_a0 = 0;
  uStack_88 = 0;
  uStack_90 = 0;
  lStack_70 = 0;
  uStack_68 = 0;
  lStack_b0 = param_2;
  lStack_a8 = param_2;
  plStack_78 = &lStack_70;
  if ((param_2 == 0) && ((long)iStack_b4 * (long)iStack_b8 != 0)) {
    puVar7 = (undefined4 *)0x24;
    func_0x000107c2ae8c();
    *puVar7 = 1;
    puStack_60 = puVar7 + 1;
    uStack_58 = 0x1c;
    *(undefined1 *)(puVar7 + 8) = 0;
    *(undefined8 *)(puVar7 + 3) = 0x207c7c2030203d3d;
    *(undefined8 *)(puVar7 + 1) = 0x2029286c61746f74;
    *(undefined8 *)(puVar7 + 6) = 0x4c4c554e203d2120;
    *(undefined8 *)(puVar7 + 4) = 0x61746164207c7c20;
    FUN_109ac3188(0xffffff29,&puStack_60,&UNK_10f2e8162,&UNK_10f566d1b,0x19a);
                    /* WARNING: Does not return */
    pcVar6 = (code *)SoftwareBreakpoint(1,0x1095d3808);
    (*pcVar6)();
  }
  lStack_70 = (long)iStack_b4 * (long)(int)uVar3;
  uStack_c0 = param_4 & 0xfff | 0x42ff4000;
  lStack_a0 = param_2 + lStack_70 * iStack_b8;
  lStack_98 = lStack_a0;
  uStack_68 = uVar15;
  if (param_1[7] != 0) {
    piVar1 = (int *)(param_1[7] + 0x14);
    do {
      iVar2 = *piVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = iVar2 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar2 + -1 == 0) {
      func_0x000109a848d4(param_1);
    }
  }
  param_1[7] = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  param_1[5] = 0;
  param_1[4] = 0;
  if (0 < *(int *)((long)param_1 + 4)) {
    lVar9 = 0;
    lVar11 = param_1[8];
    do {
      *(undefined4 *)(lVar11 + lVar9 * 4) = 0;
      lVar9 = lVar9 + 1;
    } while (lVar9 < *piVar14);
  }
  param_1[1] = CONCAT44(iStack_b4,iStack_b8);
  *param_1 = CONCAT44(iStack_bc,uStack_c0);
  param_1[3] = lStack_a8;
  param_1[2] = lStack_b0;
  param_1[5] = lStack_98;
  param_1[4] = lStack_a0;
  param_1[7] = uStack_88;
  param_1[6] = uStack_90;
  plVar12 = (long *)param_1[9];
  if (plVar12 != plVar13) {
    if (plVar12 != (long *)0x0) {
      _free(plVar12[-1]);
    }
    param_1[8] = param_1 + 1;
    param_1[9] = plVar13;
    plVar12 = plVar13;
  }
  if (iStack_bc < 3) {
    puVar10 = (undefined8 *)((ulong)&uStack_c0 | 4);
    *plVar12 = *plStack_78;
    plVar12[1] = plStack_78[1];
    uStack_c0 = 0x42ff0000;
    puVar10[1] = 0;
    *puVar10 = 0;
    puVar10[3] = 0;
    puVar10[2] = 0;
    puVar10[5] = 0;
    puVar10[4] = 0;
    *(undefined8 *)((long)puVar10 + 0x34) = 0;
    *(undefined8 *)((long)puVar10 + 0x2c) = 0;
    if (plStack_78 != &lStack_70) {
      _free(plStack_78[-1]);
    }
  }
  else {
    param_1[8] = uStack_80;
    param_1[9] = plStack_78;
  }
  *(undefined1 *)(param_1 + 0xf) = 1;
  return param_1;
}



/* Entry: 1095d3858; end: 1095d38fb;  */

long FUN_1095d3858(long param_1)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  long lVar6;
  
  FUN_1095d38fc();
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



/* Entry: 1095d38fc; end: 1095d398f;  */

void FUN_1095d38fc(long param_1)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  long lVar6;
  
  if (*(char *)(param_1 + 0x78) == '\x01') {
    FUN_1095eed58(*(undefined8 *)(param_1 + 0x60),param_1 + 0x68);
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
  }
  *(undefined1 *)(param_1 + 0x78) = 0;
  return;
}



/* Entry: 1095d3990; end: 1095d3d2f;  */

long FUN_1095d3990(long param_1)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  long lVar6;
  
  if (*(long *)(param_1 + 0x290) != 0) {
    piVar1 = (int *)(*(long *)(param_1 + 0x290) + 0x14);
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
      func_0x000109a848d4(param_1 + 600);
    }
  }
  *(undefined8 *)(param_1 + 0x290) = 0;
  *(undefined8 *)(param_1 + 0x270) = 0;
  *(undefined8 *)(param_1 + 0x268) = 0;
  *(undefined8 *)(param_1 + 0x280) = 0;
  *(undefined8 *)(param_1 + 0x278) = 0;
  if (0 < *(int *)(param_1 + 0x25c)) {
    lVar5 = 0;
    lVar6 = *(long *)(param_1 + 0x298);
    do {
      *(undefined4 *)(lVar6 + lVar5 * 4) = 0;
      lVar5 = lVar5 + 1;
    } while (lVar5 < *(int *)(param_1 + 0x25c));
  }
  lVar5 = *(long *)(param_1 + 0x2a0);
  if (lVar5 != param_1 + 0x2a8 && lVar5 != 0) {
    _free(*(undefined8 *)(lVar5 + -8));
  }
  if (*(long *)(param_1 + 0x230) != 0) {
    piVar1 = (int *)(*(long *)(param_1 + 0x230) + 0x14);
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
      func_0x000109a848d4(param_1 + 0x1f8);
    }
  }
  *(undefined8 *)(param_1 + 0x230) = 0;
  *(undefined8 *)(param_1 + 0x210) = 0;
  *(undefined8 *)(param_1 + 0x208) = 0;
  *(undefined8 *)(param_1 + 0x220) = 0;
  *(undefined8 *)(param_1 + 0x218) = 0;
  if (0 < *(int *)(param_1 + 0x1fc)) {
    lVar5 = 0;
    lVar6 = *(long *)(param_1 + 0x238);
    do {
      *(undefined4 *)(lVar6 + lVar5 * 4) = 0;
      lVar5 = lVar5 + 1;
    } while (lVar5 < *(int *)(param_1 + 0x1fc));
  }
  lVar5 = *(long *)(param_1 + 0x240);
  if (lVar5 != param_1 + 0x248 && lVar5 != 0) {
    _free(*(undefined8 *)(lVar5 + -8));
  }
  if (*(long *)(param_1 + 0x1d0) != 0) {
    piVar1 = (int *)(*(long *)(param_1 + 0x1d0) + 0x14);
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
      func_0x000109a848d4(param_1 + 0x198);
    }
  }
  *(undefined8 *)(param_1 + 0x1d0) = 0;
  *(undefined8 *)(param_1 + 0x1b0) = 0;
  *(undefined8 *)(param_1 + 0x1a8) = 0;
  *(undefined8 *)(param_1 + 0x1c0) = 0;
  *(undefined8 *)(param_1 + 0x1b8) = 0;
  if (0 < *(int *)(param_1 + 0x19c)) {
    lVar5 = 0;
    lVar6 = *(long *)(param_1 + 0x1d8);
    do {
      *(undefined4 *)(lVar6 + lVar5 * 4) = 0;
      lVar5 = lVar5 + 1;
    } while (lVar5 < *(int *)(param_1 + 0x19c));
  }
  lVar5 = *(long *)(param_1 + 0x1e0);
  if (lVar5 != param_1 + 0x1e8 && lVar5 != 0) {
    _free(*(undefined8 *)(lVar5 + -8));
  }
  if (*(long *)(param_1 + 0x170) != 0) {
    piVar1 = (int *)(*(long *)(param_1 + 0x170) + 0x14);
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
      func_0x000109a848d4(param_1 + 0x138);
    }
  }
  *(undefined8 *)(param_1 + 0x170) = 0;
  *(undefined8 *)(param_1 + 0x150) = 0;
  *(undefined8 *)(param_1 + 0x148) = 0;
  *(undefined8 *)(param_1 + 0x160) = 0;
  *(undefined8 *)(param_1 + 0x158) = 0;
  if (0 < *(int *)(param_1 + 0x13c)) {
    lVar5 = 0;
    lVar6 = *(long *)(param_1 + 0x178);
    do {
      *(undefined4 *)(lVar6 + lVar5 * 4) = 0;
      lVar5 = lVar5 + 1;
    } while (lVar5 < *(int *)(param_1 + 0x13c));
  }
  lVar5 = *(long *)(param_1 + 0x180);
  if (lVar5 != param_1 + 0x188 && lVar5 != 0) {
    _free(*(undefined8 *)(lVar5 + -8));
  }
  if (*(long *)(param_1 + 0x110) != 0) {
    piVar1 = (int *)(*(long *)(param_1 + 0x110) + 0x14);
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
      func_0x000109a848d4(param_1 + 0xd8);
    }
  }
  *(undefined8 *)(param_1 + 0x110) = 0;
  *(undefined8 *)(param_1 + 0xf0) = 0;
  *(undefined8 *)(param_1 + 0xe8) = 0;
  *(undefined8 *)(param_1 + 0x100) = 0;
  *(undefined8 *)(param_1 + 0xf8) = 0;
  if (0 < *(int *)(param_1 + 0xdc)) {
    lVar5 = 0;
    lVar6 = *(long *)(param_1 + 0x118);
    do {
      *(undefined4 *)(lVar6 + lVar5 * 4) = 0;
      lVar5 = lVar5 + 1;
    } while (lVar5 < *(int *)(param_1 + 0xdc));
  }
  lVar5 = *(long *)(param_1 + 0x120);
  if (lVar5 != param_1 + 0x128 && lVar5 != 0) {
    _free(*(undefined8 *)(lVar5 + -8));
  }
  if (*(long *)(param_1 + 0xb0) != 0) {
    piVar1 = (int *)(*(long *)(param_1 + 0xb0) + 0x14);
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
      func_0x000109a848d4(param_1 + 0x78);
    }
  }
  *(undefined8 *)(param_1 + 0xb0) = 0;
  *(undefined8 *)(param_1 + 0x90) = 0;
  *(undefined8 *)(param_1 + 0x88) = 0;
  *(undefined8 *)(param_1 + 0xa0) = 0;
  *(undefined8 *)(param_1 + 0x98) = 0;
  if (0 < *(int *)(param_1 + 0x7c)) {
    lVar5 = 0;
    lVar6 = *(long *)(param_1 + 0xb8);
    do {
      *(undefined4 *)(lVar6 + lVar5 * 4) = 0;
      lVar5 = lVar5 + 1;
    } while (lVar5 < *(int *)(param_1 + 0x7c));
  }
  lVar5 = *(long *)(param_1 + 0xc0);
  if (lVar5 != param_1 + 200 && lVar5 != 0) {
    _free(*(undefined8 *)(lVar5 + -8));
  }
  if (*(long *)(param_1 + 0x50) != 0) {
    piVar1 = (int *)(*(long *)(param_1 + 0x50) + 0x14);
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
      func_0x000109a848d4(param_1 + 0x18);
    }
  }
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  if (0 < *(int *)(param_1 + 0x1c)) {
    lVar5 = 0;
    lVar6 = *(long *)(param_1 + 0x58);
    do {
      *(undefined4 *)(lVar6 + lVar5 * 4) = 0;
      lVar5 = lVar5 + 1;
    } while (lVar5 < *(int *)(param_1 + 0x1c));
  }
  lVar5 = *(long *)(param_1 + 0x60);
  if (lVar5 != param_1 + 0x68 && lVar5 != 0) {
    _free(*(undefined8 *)(lVar5 + -8));
  }
  return param_1;
}



/* Entry: 1095d3d30; end: 1095d42fb;  */

void FUN_1095d3d30(long param_1,int *param_2)

{
  undefined8 *puVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  byte *pbVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  int iVar18;
  long lVar19;
  int iVar20;
  int iVar21;
  int iVar30;
  undefined1 auVar22 [12];
  int iVar31;
  undefined1 auVar23 [12];
  undefined1 auVar24 [12];
  int iVar32;
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  byte bVar33;
  byte bVar39;
  byte bVar40;
  int iVar34;
  byte bVar41;
  byte bVar42;
  byte bVar44;
  byte bVar45;
  int iVar43;
  byte bVar46;
  byte bVar47;
  byte bVar49;
  byte bVar50;
  int iVar48;
  byte bVar51;
  undefined1 auVar35 [12];
  byte bVar52;
  byte bVar54;
  byte bVar55;
  int iVar53;
  byte bVar56;
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  int iVar57;
  float fVar58;
  int iVar59;
  float fVar60;
  int iVar61;
  float fVar62;
  int iVar63;
  float fVar64;
  undefined8 uVar65;
  undefined8 uVar66;
  float fVar67;
  float fVar68;
  undefined1 auVar69 [16];
  float fVar70;
  undefined1 auVar71 [16];
  undefined1 auVar25 [16];
  undefined1 auVar29 [16];
  undefined1 auVar36 [16];
  
  uVar4 = *(int *)(param_1 + 0x48) * *param_2;
  lVar8 = *(long *)(param_1 + 0x10);
  uVar3 = *(uint *)(lVar8 + 8);
  uVar2 = uVar3;
  if ((int)uVar4 <= (int)uVar3) {
    uVar2 = uVar4;
  }
  uVar2 = uVar2 & ((int)uVar2 >> 0x1f ^ 0xffffffffU);
  uVar7 = (ulong)uVar2;
  uVar4 = param_2[1] * *(int *)(param_1 + 0x48);
  if ((int)uVar4 <= (int)uVar3) {
    uVar3 = uVar4;
  }
  if ((int)uVar2 < (int)uVar3) {
    fVar68 = 1.0 / *(float *)(param_1 + 0x40);
    iVar5 = *(int *)(lVar8 + 0xc) + -1;
    auVar69 = NEON_fmov(0xc1a00000,4);
    fVar70 = 1.0 / *(float *)(param_1 + 0x44);
    auVar71 = NEON_fmov(0x3f800000,4);
    do {
      if (0 < *(int *)(lVar8 + 0xc)) {
        lVar17 = 0;
        iVar18 = 0;
        lVar11 = *(long *)(*(long *)(param_1 + 0x38) + 0x10);
        lVar10 = **(long **)(*(long *)(param_1 + 0x38) + 0x48);
        lVar13 = *(long *)(*(long *)(param_1 + 0x30) + 0x10);
        lVar12 = **(long **)(*(long *)(param_1 + 0x30) + 0x48);
        lVar19 = *(long *)(lVar8 + 0x10) + **(long **)(lVar8 + 0x48) * uVar7;
        lVar9 = *(long *)(*(long *)(param_1 + 0x18) + 0x10);
        lVar14 = **(long **)(*(long *)(param_1 + 0x18) + 0x48);
        lVar15 = *(long *)(*(long *)(param_1 + 0x20) + 0x10) +
                 **(long **)(*(long *)(param_1 + 0x20) + 0x48) * uVar7;
        lVar16 = *(long *)(*(long *)(param_1 + 0x28) + 0x10) +
                 **(long **)(*(long *)(param_1 + 0x28) + 0x48) * uVar7;
        do {
          iVar21 = 0x132dfb90;
          uVar66 = ((undefined8 *)(lVar19 + lVar17))[1];
          uVar65 = *(undefined8 *)(lVar19 + lVar17);
          if (((bRam00000001132dfb90 & 1) == 0) && (___cxa_guard_acquire(), iVar21 != 0)) {
            _uRam00000001132dfb88 = 0x80000000;
            _uRam00000001132dfb8c = 0x80000000;
            _uRam00000001132dfb80 = 0x8000000080000000;
            ___cxa_guard_release(0x1132dfb90);
          }
          if (((bRam00000001132dfbb0 & 1) == 0) &&
             (iVar21 = 0x132dfbb0, ___cxa_guard_acquire(), iVar21 != 0)) {
            _uRam00000001132dfba8 = 0x3f000000;
            _uRam00000001132dfbac = 0x3f000000;
            _uRam00000001132dfba0 = 0x3f0000003f000000;
            ___cxa_guard_release(0x1132dfbb0);
          }
          iVar21 = 0x132dfb90;
          fVar58 = (float)CONCAT13(bRam00000001132dfb83 & (byte)((ulong)uVar65 >> 0x18) |
                                   bRam00000001132dfba3,
                                   CONCAT12(bRam00000001132dfb82 & (byte)((ulong)uVar65 >> 0x10) |
                                            bRam00000001132dfba2,
                                            CONCAT11(uRam00000001132dfb80._1_1_ &
                                                     (byte)((ulong)uVar65 >> 8) |
                                                     uRam00000001132dfba0._1_1_,
                                                     (byte)uRam00000001132dfb80 & (byte)uVar65 |
                                                     (byte)uRam00000001132dfba0)));
          auVar22._0_8_ =
               CONCAT17(bRam00000001132dfb87 & (byte)((ulong)uVar65 >> 0x38) | bRam00000001132dfba7,
                        CONCAT16(bRam00000001132dfb86 & (byte)((ulong)uVar65 >> 0x30) |
                                 bRam00000001132dfba6,
                                 CONCAT15(bRam00000001132dfb85 & (byte)((ulong)uVar65 >> 0x28) |
                                          bRam00000001132dfba5,
                                          CONCAT14(bRam00000001132dfb84 &
                                                   (byte)((ulong)uVar65 >> 0x20) |
                                                   bRam00000001132dfba4,fVar58))));
          auVar22[8] = (byte)uRam00000001132dfb88 & (byte)uVar66 | (byte)uRam00000001132dfba8;
          auVar22[9] = uRam00000001132dfb88._1_1_ & (byte)((ulong)uVar66 >> 8) |
                       uRam00000001132dfba8._1_1_;
          auVar22[10] = bRam00000001132dfb8a & (byte)((ulong)uVar66 >> 0x10) | bRam00000001132dfbaa;
          auVar22[0xb] = bRam00000001132dfb8b & (byte)((ulong)uVar66 >> 0x18) | bRam00000001132dfbab
          ;
          auVar27[0xc] = (byte)uRam00000001132dfb8c & (byte)((ulong)uVar66 >> 0x20) |
                         (byte)uRam00000001132dfbac;
          auVar27._0_12_ = auVar22;
          auVar27[0xd] = uRam00000001132dfb8c._1_1_ & (byte)((ulong)uVar66 >> 0x28) |
                         uRam00000001132dfbac._1_1_;
          auVar27[0xe] = bRam00000001132dfb8e & (byte)((ulong)uVar66 >> 0x30) | bRam00000001132dfbae
          ;
          auVar27[0xf] = bRam00000001132dfb8f & (byte)((ulong)uVar66 >> 0x38) | bRam00000001132dfbaf
          ;
          fVar60 = (float)uVar65;
          fVar62 = (float)((ulong)uVar65 >> 0x20);
          fVar64 = (float)uVar66;
          fVar67 = (float)((ulong)uVar66 >> 0x20);
          iVar20 = (int)(fVar60 + fVar58);
          iVar30 = (int)(fVar62 + (float)((ulong)auVar22._0_8_ >> 0x20)) + 1;
          iVar31 = (int)(fVar64 + auVar22._8_4_) + 2;
          iVar32 = (int)(fVar67 + auVar27._12_4_) + 3;
          iVar34 = -(uint)(fVar60 <= 0.0);
          iVar43 = -(uint)(fVar62 <= 0.0);
          iVar48 = -(uint)(fVar64 <= 0.0);
          iVar53 = -(uint)(fVar67 <= 0.0);
          iVar57 = -(uint)(-1 < iVar20 + iVar18);
          iVar59 = -(uint)(-1 < iVar30 + iVar18);
          iVar61 = -(uint)(-1 < iVar31 + iVar18);
          iVar63 = -(uint)(-1 < iVar32 + iVar18);
          bVar33 = (byte)iVar34 & (byte)iVar57;
          bVar39 = (byte)((uint)iVar34 >> 8) & (byte)((uint)iVar57 >> 8);
          bVar40 = (byte)((uint)iVar34 >> 0x10) & (byte)((uint)iVar57 >> 0x10);
          bVar41 = (byte)((uint)iVar34 >> 0x18) & (byte)((uint)iVar57 >> 0x18);
          bVar42 = (byte)iVar43 & (byte)iVar59;
          bVar44 = (byte)((uint)iVar43 >> 8) & (byte)((uint)iVar59 >> 8);
          bVar45 = (byte)((uint)iVar43 >> 0x10) & (byte)((uint)iVar59 >> 0x10);
          bVar46 = (byte)((uint)iVar43 >> 0x18) & (byte)((uint)iVar59 >> 0x18);
          bVar47 = (byte)iVar48 & (byte)iVar61;
          bVar49 = (byte)((uint)iVar48 >> 8) & (byte)((uint)iVar61 >> 8);
          bVar50 = (byte)((uint)iVar48 >> 0x10) & (byte)((uint)iVar61 >> 0x10);
          bVar51 = (byte)((uint)iVar48 >> 0x18) & (byte)((uint)iVar61 >> 0x18);
          bVar52 = (byte)iVar53 & (byte)iVar63;
          bVar54 = (byte)((uint)iVar53 >> 8) & (byte)((uint)iVar63 >> 8);
          bVar55 = (byte)((uint)iVar53 >> 0x10) & (byte)((uint)iVar63 >> 0x10);
          bVar56 = (byte)((uint)iVar53 >> 0x18) & (byte)((uint)iVar63 >> 0x18);
          iVar20 = iVar20 * 4;
          iVar30 = iVar30 * 4;
          iVar31 = iVar31 * 4;
          iVar32 = iVar32 * 4;
          iVar20 = CONCAT13(bVar41 & (byte)((uint)iVar20 >> 0x18),
                            CONCAT12(bVar40 & (byte)((uint)iVar20 >> 0x10),
                                     CONCAT11(bVar39 & (byte)((uint)iVar20 >> 8),
                                              bVar33 & (byte)iVar20)));
          auVar23._0_8_ =
               CONCAT17(bVar46 & (byte)((uint)iVar30 >> 0x18),
                        CONCAT16(bVar45 & (byte)((uint)iVar30 >> 0x10),
                                 CONCAT15(bVar44 & (byte)((uint)iVar30 >> 8),
                                          CONCAT14(bVar42 & (byte)iVar30,iVar20))));
          auVar23[8] = bVar47 & (byte)iVar31;
          auVar23[9] = bVar49 & (byte)((uint)iVar31 >> 8);
          auVar23[10] = bVar50 & (byte)((uint)iVar31 >> 0x10);
          auVar23[0xb] = bVar51 & (byte)((uint)iVar31 >> 0x18);
          auVar25[0xc] = bVar52 & (byte)iVar32;
          auVar25._0_12_ = auVar23;
          auVar25[0xd] = bVar54 & (byte)((uint)iVar32 >> 8);
          auVar25[0xe] = bVar55 & (byte)((uint)iVar32 >> 0x10);
          auVar25[0xf] = bVar56 & (byte)((uint)iVar32 >> 0x18);
          iVar30 = (int)((ulong)auVar23._0_8_ >> 0x20);
          puVar1 = (undefined8 *)(lVar9 + lVar14 * uVar7 + lVar17);
          uVar66 = ((undefined8 *)(lVar15 + lVar17))[1];
          uVar65 = *(undefined8 *)(lVar15 + lVar17);
          auVar26._0_4_ =
               (((float)uVar65 + *(float *)(lVar16 + iVar20 + lVar17)) * fVar68 +
               ABS(fVar60 + *(float *)((long)puVar1 + (long)iVar20)) * fVar70) * -0.5;
          auVar26._4_4_ =
               (((float)((ulong)uVar65 >> 0x20) + *(float *)(lVar16 + iVar30 + lVar17)) * fVar68 +
               ABS(fVar62 + *(float *)((long)puVar1 + (long)iVar30)) * fVar70) * -0.5;
          auVar26._8_4_ =
               (((float)uVar66 + *(float *)(lVar16 + auVar23._8_4_ + lVar17)) * fVar68 +
               ABS(fVar64 + *(float *)((long)puVar1 + (long)auVar23._8_4_)) * fVar70) * -0.5;
          auVar26._12_4_ =
               (((float)((ulong)uVar66 >> 0x20) + *(float *)(lVar16 + auVar25._12_4_ + lVar17)) *
                fVar68 + ABS(fVar67 + *(float *)((long)puVar1 + (long)auVar25._12_4_)) * fVar70) *
               -0.5;
          auVar27 = NEON_fmax(auVar26,auVar69,4);
          fVar58 = auVar71._0_4_ + auVar27._0_4_ * 0.0009765625;
          fVar60 = auVar71._4_4_ + auVar27._4_4_ * 0.0009765625;
          fVar62 = auVar71._8_4_ + auVar27._8_4_ * 0.0009765625;
          fVar64 = auVar71._12_4_ + auVar27._12_4_ * 0.0009765625;
          fVar58 = fVar58 * fVar58;
          fVar60 = fVar60 * fVar60;
          fVar62 = fVar62 * fVar62;
          fVar64 = fVar64 * fVar64;
          fVar58 = fVar58 * fVar58;
          fVar60 = fVar60 * fVar60;
          fVar62 = fVar62 * fVar62;
          fVar64 = fVar64 * fVar64;
          fVar58 = fVar58 * fVar58;
          fVar60 = fVar60 * fVar60;
          fVar62 = fVar62 * fVar62;
          fVar64 = fVar64 * fVar64;
          fVar58 = fVar58 * fVar58;
          fVar60 = fVar60 * fVar60;
          fVar62 = fVar62 * fVar62;
          fVar64 = fVar64 * fVar64;
          fVar58 = fVar58 * fVar58;
          fVar60 = fVar60 * fVar60;
          fVar62 = fVar62 * fVar62;
          fVar64 = fVar64 * fVar64;
          fVar58 = fVar58 * fVar58;
          fVar60 = fVar60 * fVar60;
          fVar62 = fVar62 * fVar62;
          fVar64 = fVar64 * fVar64;
          fVar58 = fVar58 * fVar58;
          fVar60 = fVar60 * fVar60;
          fVar62 = fVar62 * fVar62;
          fVar64 = fVar64 * fVar64;
          fVar58 = fVar58 * fVar58;
          fVar60 = fVar60 * fVar60;
          fVar62 = fVar62 * fVar62;
          fVar64 = fVar64 * fVar64;
          fVar58 = fVar58 * fVar58;
          fVar60 = fVar60 * fVar60;
          fVar62 = fVar62 * fVar62;
          fVar64 = fVar64 * fVar64;
          auVar28._0_4_ = fVar58 * fVar58;
          auVar28._4_4_ = fVar60 * fVar60;
          auVar28._8_4_ = fVar62 * fVar62;
          auVar28._12_4_ = fVar64 * fVar64;
          auVar27 = NEON_fmax(auVar28,ZEXT216(0),4);
          pbVar6 = (byte *)(lVar13 + lVar12 * uVar7 + lVar17);
          pbVar6[8] = bVar47 & auVar27[8];
          pbVar6[9] = bVar49 & auVar27[9];
          pbVar6[10] = bVar50 & auVar27[10];
          pbVar6[0xb] = bVar51 & auVar27[0xb];
          pbVar6[0xc] = bVar52 & auVar27[0xc];
          pbVar6[0xd] = bVar54 & auVar27[0xd];
          pbVar6[0xe] = bVar55 & auVar27[0xe];
          pbVar6[0xf] = bVar56 & auVar27[0xf];
          *pbVar6 = bVar33 & auVar27[0];
          pbVar6[1] = bVar39 & auVar27[1];
          pbVar6[2] = bVar40 & auVar27[2];
          pbVar6[3] = bVar41 & auVar27[3];
          pbVar6[4] = bVar42 & auVar27[4];
          pbVar6[5] = bVar44 & auVar27[5];
          pbVar6[6] = bVar45 & auVar27[6];
          pbVar6[7] = bVar46 & auVar27[7];
          uVar66 = puVar1[1];
          uVar65 = *puVar1;
          if (((bRam00000001132dfb90 & 1) == 0) && (___cxa_guard_acquire(), iVar21 != 0)) {
            _uRam00000001132dfb88 = 0x80000000;
            _uRam00000001132dfb8c = 0x80000000;
            _uRam00000001132dfb80 = 0x8000000080000000;
            ___cxa_guard_release(0x1132dfb90);
          }
          if (((bRam00000001132dfbb0 & 1) == 0) &&
             (iVar21 = 0x132dfbb0, ___cxa_guard_acquire(), iVar21 != 0)) {
            _uRam00000001132dfba8 = 0x3f000000;
            _uRam00000001132dfbac = 0x3f000000;
            _uRam00000001132dfba0 = 0x3f0000003f000000;
            ___cxa_guard_release(0x1132dfbb0);
          }
          fVar58 = (float)CONCAT13(bRam00000001132dfb83 & (byte)((ulong)uVar65 >> 0x18) |
                                   bRam00000001132dfba3,
                                   CONCAT12(bRam00000001132dfb82 & (byte)((ulong)uVar65 >> 0x10) |
                                            bRam00000001132dfba2,
                                            CONCAT11(uRam00000001132dfb80._1_1_ &
                                                     (byte)((ulong)uVar65 >> 8) |
                                                     uRam00000001132dfba0._1_1_,
                                                     (byte)uRam00000001132dfb80 & (byte)uVar65 |
                                                     (byte)uRam00000001132dfba0)));
          auVar24._0_8_ =
               CONCAT17(bRam00000001132dfb87 & (byte)((ulong)uVar65 >> 0x38) | bRam00000001132dfba7,
                        CONCAT16(bRam00000001132dfb86 & (byte)((ulong)uVar65 >> 0x30) |
                                 bRam00000001132dfba6,
                                 CONCAT15(bRam00000001132dfb85 & (byte)((ulong)uVar65 >> 0x28) |
                                          bRam00000001132dfba5,
                                          CONCAT14(bRam00000001132dfb84 &
                                                   (byte)((ulong)uVar65 >> 0x20) |
                                                   bRam00000001132dfba4,fVar58))));
          auVar24[8] = (byte)uRam00000001132dfb88 & (byte)uVar66 | (byte)uRam00000001132dfba8;
          auVar24[9] = uRam00000001132dfb88._1_1_ & (byte)((ulong)uVar66 >> 8) |
                       uRam00000001132dfba8._1_1_;
          auVar24[10] = bRam00000001132dfb8a & (byte)((ulong)uVar66 >> 0x10) | bRam00000001132dfbaa;
          auVar24[0xb] = bRam00000001132dfb8b & (byte)((ulong)uVar66 >> 0x18) | bRam00000001132dfbab
          ;
          auVar29[0xc] = (byte)uRam00000001132dfb8c & (byte)((ulong)uVar66 >> 0x20) |
                         (byte)uRam00000001132dfbac;
          auVar29._0_12_ = auVar24;
          auVar29[0xd] = uRam00000001132dfb8c._1_1_ & (byte)((ulong)uVar66 >> 0x28) |
                         uRam00000001132dfbac._1_1_;
          auVar29[0xe] = bRam00000001132dfb8e & (byte)((ulong)uVar66 >> 0x30) | bRam00000001132dfbae
          ;
          auVar29[0xf] = bRam00000001132dfb8f & (byte)((ulong)uVar66 >> 0x38) | bRam00000001132dfbaf
          ;
          fVar60 = (float)uVar65;
          fVar62 = (float)((ulong)uVar65 >> 0x20);
          fVar64 = (float)uVar66;
          fVar67 = (float)((ulong)uVar66 >> 0x20);
          iVar21 = (int)(fVar60 + fVar58);
          iVar34 = (int)(fVar62 + (float)((ulong)auVar24._0_8_ >> 0x20)) + 1;
          iVar43 = (int)(fVar64 + auVar24._8_4_) + 2;
          iVar48 = (int)(fVar67 + auVar29._12_4_) + 3;
          iVar20 = -(uint)(0.0 <= fVar60);
          iVar30 = -(uint)(0.0 <= fVar62);
          iVar31 = -(uint)(0.0 <= fVar64);
          iVar32 = -(uint)(0.0 <= fVar67);
          iVar53 = -(uint)(iVar21 + iVar18 < iVar5);
          iVar57 = -(uint)(iVar34 + iVar18 < iVar5);
          iVar59 = -(uint)(iVar43 + iVar18 < iVar5);
          iVar61 = -(uint)(iVar48 + iVar18 < iVar5);
          bVar33 = (byte)iVar20 & (byte)iVar53;
          bVar39 = (byte)((uint)iVar20 >> 8) & (byte)((uint)iVar53 >> 8);
          bVar40 = (byte)((uint)iVar20 >> 0x10) & (byte)((uint)iVar53 >> 0x10);
          bVar41 = (byte)((uint)iVar20 >> 0x18) & (byte)((uint)iVar53 >> 0x18);
          bVar42 = (byte)iVar30 & (byte)iVar57;
          bVar44 = (byte)((uint)iVar30 >> 8) & (byte)((uint)iVar57 >> 8);
          bVar45 = (byte)((uint)iVar30 >> 0x10) & (byte)((uint)iVar57 >> 0x10);
          bVar46 = (byte)((uint)iVar30 >> 0x18) & (byte)((uint)iVar57 >> 0x18);
          bVar47 = (byte)iVar31 & (byte)iVar59;
          bVar49 = (byte)((uint)iVar31 >> 8) & (byte)((uint)iVar59 >> 8);
          bVar50 = (byte)((uint)iVar31 >> 0x10) & (byte)((uint)iVar59 >> 0x10);
          bVar51 = (byte)((uint)iVar31 >> 0x18) & (byte)((uint)iVar59 >> 0x18);
          bVar52 = (byte)iVar32 & (byte)iVar61;
          bVar54 = (byte)((uint)iVar32 >> 8) & (byte)((uint)iVar61 >> 8);
          bVar55 = (byte)((uint)iVar32 >> 0x10) & (byte)((uint)iVar61 >> 0x10);
          bVar56 = (byte)((uint)iVar32 >> 0x18) & (byte)((uint)iVar61 >> 0x18);
          iVar21 = iVar21 * 4;
          iVar34 = iVar34 * 4;
          iVar43 = iVar43 * 4;
          iVar48 = iVar48 * 4;
          iVar21 = CONCAT13(bVar41 & (byte)((uint)iVar21 >> 0x18),
                            CONCAT12(bVar40 & (byte)((uint)iVar21 >> 0x10),
                                     CONCAT11(bVar39 & (byte)((uint)iVar21 >> 8),
                                              bVar33 & (byte)iVar21)));
          auVar35._0_8_ =
               CONCAT17(bVar46 & (byte)((uint)iVar34 >> 0x18),
                        CONCAT16(bVar45 & (byte)((uint)iVar34 >> 0x10),
                                 CONCAT15(bVar44 & (byte)((uint)iVar34 >> 8),
                                          CONCAT14(bVar42 & (byte)iVar34,iVar21))));
          auVar35[8] = bVar47 & (byte)iVar43;
          auVar35[9] = bVar49 & (byte)((uint)iVar43 >> 8);
          auVar35[10] = bVar50 & (byte)((uint)iVar43 >> 0x10);
          auVar35[0xb] = bVar51 & (byte)((uint)iVar43 >> 0x18);
          auVar36[0xc] = bVar52 & (byte)iVar48;
          auVar36._0_12_ = auVar35;
          auVar36[0xd] = bVar54 & (byte)((uint)iVar48 >> 8);
          auVar36[0xe] = bVar55 & (byte)((uint)iVar48 >> 0x10);
          auVar36[0xf] = bVar56 & (byte)((uint)iVar48 >> 0x18);
          iVar20 = (int)((ulong)auVar35._0_8_ >> 0x20);
          uVar66 = ((undefined8 *)(lVar16 + lVar17))[1];
          uVar65 = *(undefined8 *)(lVar16 + lVar17);
          auVar37._0_4_ =
               (((float)uVar65 + *(float *)(lVar15 + iVar21 + lVar17)) * fVar68 +
               ABS(fVar60 + *(float *)(lVar19 + iVar21 + lVar17)) * fVar70) * -0.5;
          auVar37._4_4_ =
               (((float)((ulong)uVar65 >> 0x20) + *(float *)(lVar15 + iVar20 + lVar17)) * fVar68 +
               ABS(fVar62 + *(float *)(lVar19 + iVar20 + lVar17)) * fVar70) * -0.5;
          auVar37._8_4_ =
               (((float)uVar66 + *(float *)(lVar15 + auVar35._8_4_ + lVar17)) * fVar68 +
               ABS(fVar64 + *(float *)(lVar19 + auVar35._8_4_ + lVar17)) * fVar70) * -0.5;
          auVar37._12_4_ =
               (((float)((ulong)uVar66 >> 0x20) + *(float *)(lVar15 + auVar36._12_4_ + lVar17)) *
                fVar68 + ABS(fVar67 + *(float *)(lVar19 + auVar36._12_4_ + lVar17)) * fVar70) * -0.5
          ;
          auVar27 = NEON_fmax(auVar37,auVar69,4);
          fVar58 = auVar71._0_4_ + auVar27._0_4_ * 0.0009765625;
          fVar60 = auVar71._4_4_ + auVar27._4_4_ * 0.0009765625;
          fVar62 = auVar71._8_4_ + auVar27._8_4_ * 0.0009765625;
          fVar64 = auVar71._12_4_ + auVar27._12_4_ * 0.0009765625;
          fVar58 = fVar58 * fVar58;
          fVar60 = fVar60 * fVar60;
          fVar62 = fVar62 * fVar62;
          fVar64 = fVar64 * fVar64;
          fVar58 = fVar58 * fVar58;
          fVar60 = fVar60 * fVar60;
          fVar62 = fVar62 * fVar62;
          fVar64 = fVar64 * fVar64;
          fVar58 = fVar58 * fVar58;
          fVar60 = fVar60 * fVar60;
          fVar62 = fVar62 * fVar62;
          fVar64 = fVar64 * fVar64;
          fVar58 = fVar58 * fVar58;
          fVar60 = fVar60 * fVar60;
          fVar62 = fVar62 * fVar62;
          fVar64 = fVar64 * fVar64;
          fVar58 = fVar58 * fVar58;
          fVar60 = fVar60 * fVar60;
          fVar62 = fVar62 * fVar62;
          fVar64 = fVar64 * fVar64;
          fVar58 = fVar58 * fVar58;
          fVar60 = fVar60 * fVar60;
          fVar62 = fVar62 * fVar62;
          fVar64 = fVar64 * fVar64;
          fVar58 = fVar58 * fVar58;
          fVar60 = fVar60 * fVar60;
          fVar62 = fVar62 * fVar62;
          fVar64 = fVar64 * fVar64;
          fVar58 = fVar58 * fVar58;
          fVar60 = fVar60 * fVar60;
          fVar62 = fVar62 * fVar62;
          fVar64 = fVar64 * fVar64;
          fVar58 = fVar58 * fVar58;
          fVar60 = fVar60 * fVar60;
          fVar62 = fVar62 * fVar62;
          fVar64 = fVar64 * fVar64;
          auVar38._0_4_ = fVar58 * fVar58;
          auVar38._4_4_ = fVar60 * fVar60;
          auVar38._8_4_ = fVar62 * fVar62;
          auVar38._12_4_ = fVar64 * fVar64;
          auVar27 = NEON_fmax(auVar38,ZEXT216(0),4);
          pbVar6 = (byte *)(lVar11 + lVar10 * uVar7 + lVar17);
          pbVar6[8] = bVar47 & auVar27[8];
          pbVar6[9] = bVar49 & auVar27[9];
          pbVar6[10] = bVar50 & auVar27[10];
          pbVar6[0xb] = bVar51 & auVar27[0xb];
          pbVar6[0xc] = bVar52 & auVar27[0xc];
          pbVar6[0xd] = bVar54 & auVar27[0xd];
          pbVar6[0xe] = bVar55 & auVar27[0xe];
          pbVar6[0xf] = bVar56 & auVar27[0xf];
          *pbVar6 = bVar33 & auVar27[0];
          pbVar6[1] = bVar39 & auVar27[1];
          pbVar6[2] = bVar40 & auVar27[2];
          pbVar6[3] = bVar41 & auVar27[3];
          pbVar6[4] = bVar42 & auVar27[4];
          pbVar6[5] = bVar44 & auVar27[5];
          pbVar6[6] = bVar45 & auVar27[6];
          pbVar6[7] = bVar46 & auVar27[7];
          iVar18 = iVar18 + 4;
          lVar8 = *(long *)(param_1 + 0x10);
          lVar17 = lVar17 + 0x10;
        } while (iVar18 < *(int *)(lVar8 + 0xc));
      }
      uVar7 = uVar7 + 1;
    } while (uVar7 != uVar3);
  }
  return;
}



/* Entry: 1095d42fc; end: 1095d459f;  */

void FUN_1095d42fc(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  char cVar5;
  bool bVar6;
  long lVar7;
  undefined **ppuVar8;
  undefined8 uVar9;
  undefined **ppuStack_260;
  undefined8 uStack_258;
  undefined **ppuStack_250;
  undefined8 uStack_248;
  undefined1 *puStack_240;
  undefined4 *puStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  int iStack_218;
  undefined8 uStack_210;
  undefined4 auStack_208 [2];
  undefined4 *puStack_200;
  undefined8 uStack_1f8;
  undefined4 auStack_1f0 [2];
  undefined4 *puStack_1e8;
  undefined8 uStack_1e0;
  undefined4 uStack_1d8;
  int iStack_1d4;
  long lStack_1d0;
  undefined8 uStack_1c8;
  undefined4 uStack_1c0;
  undefined8 uStack_1bc;
  undefined4 uStack_1b4;
  undefined4 uStack_1b0;
  undefined4 uStack_1ac;
  undefined4 uStack_1a8;
  undefined4 uStack_1a4;
  undefined4 uStack_1a0;
  undefined4 uStack_19c;
  undefined4 uStack_198;
  undefined4 uStack_194;
  undefined4 uStack_190;
  undefined4 uStack_18c;
  long lStack_188;
  long lStack_180;
  undefined8 *puStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  undefined1 auStack_e0 [128];
  
  uVar3 = **(undefined4 **)(param_2 + 0x40);
  uVar4 = (*(undefined4 **)(param_2 + 0x40))[1];
  uStack_160 = uVar4;
  uStack_15c = uVar3;
  FUN_1095d359c(auStack_e0,param_1,&uStack_160,5);
  uStack_1bc = CONCAT44(uStack_1bc._4_4_,uVar3);
  uStack_1c0 = uVar4;
  FUN_1095d359c(&uStack_160,param_1,&uStack_1c0,5);
  uStack_1c0 = 0x42ff0000;
  uStack_1b4 = 0;
  uStack_1b0 = 0;
  uStack_1bc = 0;
  lStack_180 = (long)&uStack_1bc + 4;
  uStack_1a4 = 0;
  uStack_1a0 = 0;
  uStack_1ac = 0;
  uStack_1a8 = 0;
  uStack_194 = 0;
  uStack_19c = 0;
  uStack_198 = 0;
  lStack_188 = 0;
  uStack_190 = 0;
  uStack_18c = 0;
  uStack_170 = 0;
  uStack_168 = 0;
  uStack_1c8 = 0;
  uStack_1d8 = 0x1010000;
  auStack_1f0[0] = 0x2010000;
  uStack_1e0 = 0;
  uStack_1f8 = 0;
  auStack_208[0] = 0x1010000;
  uStack_210 = 0xffffffffffffffff;
  uVar9 = 0x7fefffffffffffff;
  ppuVar8 = (undefined **)0x7fefffffffffffff;
  uStack_258 = 0x7fefffffffffffff;
  ppuStack_260 = (undefined **)0x7fefffffffffffff;
  uStack_248 = 0x7fefffffffffffff;
  ppuStack_250 = (undefined **)0x7fefffffffffffff;
  puStack_200 = &uStack_1c0;
  puStack_1e8 = (undefined4 *)auStack_e0;
  lStack_1d0 = param_2;
  puStack_178 = &uStack_170;
  FUN_109b33f48(&uStack_1d8,auStack_1f0,4,auStack_208,&uStack_210,1,0,&ppuStack_260,
                0x7fefffffffffffff,0x7fefffffffffffff);
  uStack_1c8 = 0;
  uStack_1d8 = 0x1010000;
  auStack_1f0[0] = 0x2010000;
  uStack_1e0 = 0;
  uStack_1f8 = 0;
  auStack_208[0] = 0x1010000;
  puStack_200 = &uStack_1c0;
  uStack_210 = 0xffffffffffffffff;
  ppuStack_260 = ppuVar8;
  uStack_258 = uVar9;
  ppuStack_250 = ppuVar8;
  uStack_248 = uVar9;
  puStack_1e8 = &uStack_160;
  lStack_1d0 = param_3;
  FUN_109b33f48(&uStack_1d8,auStack_1f0,4,auStack_208,&uStack_210,1,0,&ppuStack_260);
  ppuStack_260 = &PTR_FUN_110afebe0;
  puStack_240 = auStack_e0;
  uStack_220 = NEON_fmov(0x3f800000,4);
  uStack_258 = CONCAT44(uStack_258._4_4_,iRam00000001132dfb70);
  iStack_218 = (int)((double)*(int *)(param_2 + 8) / (double)iRam00000001132dfb70);
  uStack_1d8 = 0;
  iStack_1d4 = iRam00000001132dfb70;
  ppuStack_250 = (undefined **)param_2;
  uStack_248 = param_3;
  puStack_238 = &uStack_160;
  uStack_230 = param_4;
  uStack_228 = param_5;
  func_0x000109aa87cc(0xbff0000000000000,&uStack_1d8,&ppuStack_260);
  if (lStack_188 != 0) {
    piVar1 = (int *)(lStack_188 + 0x14);
    do {
      iVar2 = *piVar1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar6) {
        *piVar1 = iVar2 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar2 + -1 == 0) {
      func_0x000109a848d4(&uStack_1c0);
    }
  }
  lStack_188 = 0;
  uStack_1a8 = 0;
  uStack_1a4 = 0;
  uStack_1b0 = 0;
  uStack_1ac = 0;
  uStack_198 = 0;
  uStack_194 = 0;
  uStack_1a0 = 0;
  uStack_19c = 0;
  if (0 < (int)uStack_1bc) {
    lVar7 = 0;
    do {
      *(undefined4 *)(lStack_180 + lVar7 * 4) = 0;
      lVar7 = lVar7 + 1;
    } while (lVar7 < (int)uStack_1bc);
  }
  if (puStack_178 != &uStack_170 && puStack_178 != (undefined8 *)0x0) {
    _free(puStack_178[-1]);
  }
  FUN_1095d3858(&uStack_160);
  FUN_1095d3858(auStack_e0);
  return;
}



/* Entry: 1095d45a0; end: 1095d45a3;  */

void FUN_1095d45a0(void)

{
  return;
}



/* Entry: 1095d45a4; end: 1095d4ae3;  */

void FUN_1095d45a4(long param_1,int *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  undefined8 *puVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  int iVar19;
  int iVar20;
  int iVar21;
  int iVar34;
  undefined1 auVar22 [12];
  int iVar35;
  undefined1 auVar23 [12];
  int iVar36;
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar24 [12];
  undefined1 auVar25 [12];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  int iVar37;
  float fVar38;
  int iVar40;
  undefined8 uVar39;
  float fVar41;
  int iVar42;
  float fVar43;
  int iVar45;
  undefined8 uVar44;
  float fVar46;
  int iVar47;
  int iVar48;
  int iVar49;
  int iVar50;
  undefined1 auVar51 [16];
  float fVar52;
  undefined1 auVar53 [16];
  undefined1 auVar26 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  
  uVar3 = *(int *)(param_1 + 0x44) * *param_2;
  lVar7 = *(long *)(param_1 + 0x10);
  uVar2 = *(uint *)(lVar7 + 8);
  uVar1 = uVar2;
  if ((int)uVar3 <= (int)uVar2) {
    uVar1 = uVar3;
  }
  uVar1 = uVar1 & ((int)uVar1 >> 0x1f ^ 0xffffffffU);
  uVar6 = (ulong)uVar1;
  uVar3 = param_2[1] * *(int *)(param_1 + 0x44);
  if ((int)uVar3 <= (int)uVar2) {
    uVar2 = uVar3;
  }
  if ((int)uVar1 < (int)uVar2) {
    iVar4 = *(int *)(lVar7 + 0xc) + -1;
    auVar51 = NEON_fmov(0xc1a00000,4);
    fVar52 = 1.0 / *(float *)(param_1 + 0x40);
    auVar53 = NEON_fmov(0x3f800000,4);
    do {
      if (0 < *(int *)(lVar7 + 0xc)) {
        lVar18 = 0;
        iVar19 = 0;
        lVar11 = *(long *)(*(long *)(param_1 + 0x38) + 0x10);
        lVar10 = **(long **)(*(long *)(param_1 + 0x38) + 0x48);
        lVar13 = *(long *)(*(long *)(param_1 + 0x30) + 0x10);
        lVar12 = **(long **)(*(long *)(param_1 + 0x30) + 0x48);
        lVar15 = *(long *)(lVar7 + 0x10);
        lVar8 = **(long **)(lVar7 + 0x48);
        lVar9 = *(long *)(*(long *)(param_1 + 0x18) + 0x10);
        lVar14 = **(long **)(*(long *)(param_1 + 0x18) + 0x48);
        lVar16 = *(long *)(*(long *)(param_1 + 0x20) + 0x10) +
                 **(long **)(*(long *)(param_1 + 0x20) + 0x48) * uVar6;
        lVar17 = *(long *)(*(long *)(param_1 + 0x28) + 0x10) +
                 **(long **)(*(long *)(param_1 + 0x28) + 0x48) * uVar6;
        do {
          iVar21 = 0x132dfb90;
          puVar5 = (undefined8 *)(lVar15 + lVar8 * uVar6 + lVar18);
          uVar44 = puVar5[1];
          uVar39 = *puVar5;
          if (((bRam00000001132dfb90 & 1) == 0) && (___cxa_guard_acquire(), iVar21 != 0)) {
            uRam00000001132dfb88 = 0x80000000;
            uRam00000001132dfb8c = 0x80000000;
            uRam00000001132dfb80 = 0x8000000080000000;
            ___cxa_guard_release(0x1132dfb90);
          }
          if (((bRam00000001132dfbb0 & 1) == 0) &&
             (iVar21 = 0x132dfbb0, ___cxa_guard_acquire(), iVar21 != 0)) {
            _uRam00000001132dfba8 = 0x3f000000;
            _uRam00000001132dfbac = 0x3f000000;
            _uRam00000001132dfba0 = 0x3f0000003f000000;
            ___cxa_guard_release(0x1132dfbb0);
          }
          iVar21 = 0x132dfb90;
          fVar38 = (float)CONCAT13((byte)((ulong)uRam00000001132dfb80 >> 0x18) &
                                   (byte)((ulong)uVar39 >> 0x18) | bRam00000001132dfba3,
                                   CONCAT12((byte)((ulong)uRam00000001132dfb80 >> 0x10) &
                                            (byte)((ulong)uVar39 >> 0x10) | bRam00000001132dfba2,
                                            CONCAT11((byte)((ulong)uRam00000001132dfb80 >> 8) &
                                                     (byte)((ulong)uVar39 >> 8) |
                                                     uRam00000001132dfba0._1_1_,
                                                     (byte)uRam00000001132dfb80 & (byte)uVar39 |
                                                     (byte)uRam00000001132dfba0)));
          auVar22._0_8_ =
               CONCAT17((byte)((ulong)uRam00000001132dfb80 >> 0x38) & (byte)((ulong)uVar39 >> 0x38)
                        | bRam00000001132dfba7,
                        CONCAT16((byte)((ulong)uRam00000001132dfb80 >> 0x30) &
                                 (byte)((ulong)uVar39 >> 0x30) | bRam00000001132dfba6,
                                 CONCAT15((byte)((ulong)uRam00000001132dfb80 >> 0x28) &
                                          (byte)((ulong)uVar39 >> 0x28) | bRam00000001132dfba5,
                                          CONCAT14((byte)((ulong)uRam00000001132dfb80 >> 0x20) &
                                                   (byte)((ulong)uVar39 >> 0x20) |
                                                   bRam00000001132dfba4,fVar38))));
          auVar22[8] = (byte)uRam00000001132dfb88 & (byte)uVar44 | (byte)uRam00000001132dfba8;
          auVar22[9] = (byte)((uint)uRam00000001132dfb88 >> 8) & (byte)((ulong)uVar44 >> 8) |
                       uRam00000001132dfba8._1_1_;
          auVar22[10] = (byte)((uint)uRam00000001132dfb88 >> 0x10) & (byte)((ulong)uVar44 >> 0x10) |
                        bRam00000001132dfbaa;
          auVar22[0xb] = (byte)((uint)uRam00000001132dfb88 >> 0x18) & (byte)((ulong)uVar44 >> 0x18)
                         | bRam00000001132dfbab;
          auVar28[0xc] = (byte)uRam00000001132dfb8c & (byte)((ulong)uVar44 >> 0x20) |
                         (byte)uRam00000001132dfbac;
          auVar28._0_12_ = auVar22;
          auVar28[0xd] = (byte)((uint)uRam00000001132dfb8c >> 8) & (byte)((ulong)uVar44 >> 0x28) |
                         uRam00000001132dfbac._1_1_;
          auVar28[0xe] = (byte)((uint)uRam00000001132dfb8c >> 0x10) & (byte)((ulong)uVar44 >> 0x30)
                         | bRam00000001132dfbae;
          auVar28[0xf] = (byte)((uint)uRam00000001132dfb8c >> 0x18) & (byte)((ulong)uVar44 >> 0x38)
                         | bRam00000001132dfbaf;
          fVar41 = (float)((ulong)uVar39 >> 0x20);
          fVar43 = (float)((ulong)uVar44 >> 0x20);
          iVar20 = (int)((float)uVar39 + fVar38);
          iVar34 = (int)(fVar41 + (float)((ulong)auVar22._0_8_ >> 0x20)) + 1;
          iVar35 = (int)((float)uVar44 + auVar22._8_4_) + 2;
          iVar36 = (int)(fVar43 + auVar28._12_4_) + 3;
          iVar37 = -(uint)((float)uVar39 <= 0.0);
          iVar40 = -(uint)(fVar41 <= 0.0);
          iVar42 = -(uint)((float)uVar44 <= 0.0);
          iVar45 = -(uint)(fVar43 <= 0.0);
          iVar47 = -(uint)(-1 < iVar20 + iVar19);
          iVar48 = -(uint)(-1 < iVar34 + iVar19);
          iVar49 = -(uint)(-1 < iVar35 + iVar19);
          iVar50 = -(uint)(-1 < iVar36 + iVar19);
          iVar20 = CONCAT13((byte)((uint)iVar37 >> 0x18) & (byte)((uint)iVar20 >> 0x18) &
                            (byte)((uint)iVar47 >> 0x18),
                            CONCAT12((byte)((uint)iVar37 >> 0x10) & (byte)((uint)iVar20 >> 0x10) &
                                     (byte)((uint)iVar47 >> 0x10),
                                     CONCAT11((byte)((uint)iVar37 >> 8) & (byte)((uint)iVar20 >> 8)
                                              & (byte)((uint)iVar47 >> 8),
                                              (byte)iVar37 & (byte)iVar20 & (byte)iVar47)));
          auVar23._0_8_ =
               CONCAT17((byte)((uint)iVar40 >> 0x18) & (byte)((uint)iVar34 >> 0x18) &
                        (byte)((uint)iVar48 >> 0x18),
                        CONCAT16((byte)((uint)iVar40 >> 0x10) & (byte)((uint)iVar34 >> 0x10) &
                                 (byte)((uint)iVar48 >> 0x10),
                                 CONCAT15((byte)((uint)iVar40 >> 8) & (byte)((uint)iVar34 >> 8) &
                                          (byte)((uint)iVar48 >> 8),
                                          CONCAT14((byte)iVar40 & (byte)iVar34 & (byte)iVar48,iVar20
                                                  ))));
          auVar23[8] = (byte)iVar42 & (byte)iVar35 & (byte)iVar49;
          auVar23[9] = (byte)((uint)iVar42 >> 8) & (byte)((uint)iVar35 >> 8) &
                       (byte)((uint)iVar49 >> 8);
          auVar23[10] = (byte)((uint)iVar42 >> 0x10) & (byte)((uint)iVar35 >> 0x10) &
                        (byte)((uint)iVar49 >> 0x10);
          auVar23[0xb] = (byte)((uint)iVar42 >> 0x18) & (byte)((uint)iVar35 >> 0x18) &
                         (byte)((uint)iVar49 >> 0x18);
          auVar26[0xc] = (byte)iVar45 & (byte)iVar36 & (byte)iVar50;
          auVar26._0_12_ = auVar23;
          auVar26[0xd] = (byte)((uint)iVar45 >> 8) & (byte)((uint)iVar36 >> 8) &
                         (byte)((uint)iVar50 >> 8);
          auVar26[0xe] = (byte)((uint)iVar45 >> 0x10) & (byte)((uint)iVar36 >> 0x10) &
                         (byte)((uint)iVar50 >> 0x10);
          auVar26[0xf] = (byte)((uint)iVar45 >> 0x18) & (byte)((uint)iVar36 >> 0x18) &
                         (byte)((uint)iVar50 >> 0x18);
          uVar44 = ((undefined8 *)(lVar16 + lVar18))[1];
          uVar39 = *(undefined8 *)(lVar16 + lVar18);
          auVar27._0_4_ =
               ((float)uVar39 + *(float *)(lVar17 + (long)iVar20 * 4 + lVar18)) * fVar52 * -0.5;
          auVar27._4_4_ =
               ((float)((ulong)uVar39 >> 0x20) +
               *(float *)(lVar17 + (long)(int)((ulong)auVar23._0_8_ >> 0x20) * 4 + lVar18)) * fVar52
               * -0.5;
          auVar27._8_4_ =
               ((float)uVar44 + *(float *)(lVar17 + (long)auVar23._8_4_ * 4 + lVar18)) * fVar52 *
               -0.5;
          auVar27._12_4_ =
               ((float)((ulong)uVar44 >> 0x20) +
               *(float *)(lVar17 + (long)auVar26._12_4_ * 4 + lVar18)) * fVar52 * -0.5;
          auVar28 = NEON_fmax(auVar27,auVar51,4);
          fVar38 = auVar53._0_4_ + auVar28._0_4_ * 0.0009765625;
          fVar41 = auVar53._4_4_ + auVar28._4_4_ * 0.0009765625;
          fVar43 = auVar53._8_4_ + auVar28._8_4_ * 0.0009765625;
          fVar46 = auVar53._12_4_ + auVar28._12_4_ * 0.0009765625;
          fVar38 = fVar38 * fVar38;
          fVar41 = fVar41 * fVar41;
          fVar43 = fVar43 * fVar43;
          fVar46 = fVar46 * fVar46;
          fVar38 = fVar38 * fVar38;
          fVar41 = fVar41 * fVar41;
          fVar43 = fVar43 * fVar43;
          fVar46 = fVar46 * fVar46;
          fVar38 = fVar38 * fVar38;
          fVar41 = fVar41 * fVar41;
          fVar43 = fVar43 * fVar43;
          fVar46 = fVar46 * fVar46;
          fVar38 = fVar38 * fVar38;
          fVar41 = fVar41 * fVar41;
          fVar43 = fVar43 * fVar43;
          fVar46 = fVar46 * fVar46;
          fVar38 = fVar38 * fVar38;
          fVar41 = fVar41 * fVar41;
          fVar43 = fVar43 * fVar43;
          fVar46 = fVar46 * fVar46;
          fVar38 = fVar38 * fVar38;
          fVar41 = fVar41 * fVar41;
          fVar43 = fVar43 * fVar43;
          fVar46 = fVar46 * fVar46;
          fVar38 = fVar38 * fVar38;
          fVar41 = fVar41 * fVar41;
          fVar43 = fVar43 * fVar43;
          fVar46 = fVar46 * fVar46;
          fVar38 = fVar38 * fVar38;
          fVar41 = fVar41 * fVar41;
          fVar43 = fVar43 * fVar43;
          fVar46 = fVar46 * fVar46;
          fVar38 = fVar38 * fVar38;
          fVar41 = fVar41 * fVar41;
          fVar43 = fVar43 * fVar43;
          fVar46 = fVar46 * fVar46;
          auVar29._0_4_ = fVar38 * fVar38;
          auVar29._4_4_ = fVar41 * fVar41;
          auVar29._8_4_ = fVar43 * fVar43;
          auVar29._12_4_ = fVar46 * fVar46;
          auVar28 = NEON_fmax(auVar29,ZEXT216(0),4);
          puVar5 = (undefined8 *)(lVar13 + lVar12 * uVar6 + lVar18);
          puVar5[1] = auVar28._8_8_;
          *puVar5 = auVar28._0_8_;
          puVar5 = (undefined8 *)(lVar9 + lVar14 * uVar6 + lVar18);
          uVar44 = puVar5[1];
          uVar39 = *puVar5;
          if (((bRam00000001132dfb90 & 1) == 0) && (___cxa_guard_acquire(), iVar21 != 0)) {
            uRam00000001132dfb88 = 0x80000000;
            uRam00000001132dfb8c = 0x80000000;
            uRam00000001132dfb80 = 0x8000000080000000;
            ___cxa_guard_release(0x1132dfb90);
          }
          if (((bRam00000001132dfbb0 & 1) == 0) &&
             (iVar21 = 0x132dfbb0, ___cxa_guard_acquire(), iVar21 != 0)) {
            _uRam00000001132dfba8 = 0x3f000000;
            _uRam00000001132dfbac = 0x3f000000;
            _uRam00000001132dfba0 = 0x3f0000003f000000;
            ___cxa_guard_release(0x1132dfbb0);
          }
          fVar38 = (float)CONCAT13((byte)((ulong)uRam00000001132dfb80 >> 0x18) &
                                   (byte)((ulong)uVar39 >> 0x18) | bRam00000001132dfba3,
                                   CONCAT12((byte)((ulong)uRam00000001132dfb80 >> 0x10) &
                                            (byte)((ulong)uVar39 >> 0x10) | bRam00000001132dfba2,
                                            CONCAT11((byte)((ulong)uRam00000001132dfb80 >> 8) &
                                                     (byte)((ulong)uVar39 >> 8) |
                                                     uRam00000001132dfba0._1_1_,
                                                     (byte)uRam00000001132dfb80 & (byte)uVar39 |
                                                     (byte)uRam00000001132dfba0)));
          auVar24._0_8_ =
               CONCAT17((byte)((ulong)uRam00000001132dfb80 >> 0x38) & (byte)((ulong)uVar39 >> 0x38)
                        | bRam00000001132dfba7,
                        CONCAT16((byte)((ulong)uRam00000001132dfb80 >> 0x30) &
                                 (byte)((ulong)uVar39 >> 0x30) | bRam00000001132dfba6,
                                 CONCAT15((byte)((ulong)uRam00000001132dfb80 >> 0x28) &
                                          (byte)((ulong)uVar39 >> 0x28) | bRam00000001132dfba5,
                                          CONCAT14((byte)((ulong)uRam00000001132dfb80 >> 0x20) &
                                                   (byte)((ulong)uVar39 >> 0x20) |
                                                   bRam00000001132dfba4,fVar38))));
          auVar24[8] = (byte)uRam00000001132dfb88 & (byte)uVar44 | (byte)uRam00000001132dfba8;
          auVar24[9] = (byte)((uint)uRam00000001132dfb88 >> 8) & (byte)((ulong)uVar44 >> 8) |
                       uRam00000001132dfba8._1_1_;
          auVar24[10] = (byte)((uint)uRam00000001132dfb88 >> 0x10) & (byte)((ulong)uVar44 >> 0x10) |
                        bRam00000001132dfbaa;
          auVar24[0xb] = (byte)((uint)uRam00000001132dfb88 >> 0x18) & (byte)((ulong)uVar44 >> 0x18)
                         | bRam00000001132dfbab;
          auVar30[0xc] = (byte)uRam00000001132dfb8c & (byte)((ulong)uVar44 >> 0x20) |
                         (byte)uRam00000001132dfbac;
          auVar30._0_12_ = auVar24;
          auVar30[0xd] = (byte)((uint)uRam00000001132dfb8c >> 8) & (byte)((ulong)uVar44 >> 0x28) |
                         uRam00000001132dfbac._1_1_;
          auVar30[0xe] = (byte)((uint)uRam00000001132dfb8c >> 0x10) & (byte)((ulong)uVar44 >> 0x30)
                         | bRam00000001132dfbae;
          auVar30[0xf] = (byte)((uint)uRam00000001132dfb8c >> 0x18) & (byte)((ulong)uVar44 >> 0x38)
                         | bRam00000001132dfbaf;
          fVar41 = (float)((ulong)uVar39 >> 0x20);
          fVar43 = (float)((ulong)uVar44 >> 0x20);
          iVar21 = (int)((float)uVar39 + fVar38);
          iVar20 = (int)(fVar41 + (float)((ulong)auVar24._0_8_ >> 0x20)) + 1;
          iVar34 = (int)((float)uVar44 + auVar24._8_4_) + 2;
          iVar35 = (int)(fVar43 + auVar30._12_4_) + 3;
          iVar36 = -(uint)(0.0 <= (float)uVar39);
          iVar37 = -(uint)(0.0 <= fVar41);
          iVar40 = -(uint)(0.0 <= (float)uVar44);
          iVar42 = -(uint)(0.0 <= fVar43);
          iVar45 = -(uint)(iVar21 + iVar19 < iVar4);
          iVar47 = -(uint)(iVar20 + iVar19 < iVar4);
          iVar48 = -(uint)(iVar34 + iVar19 < iVar4);
          iVar49 = -(uint)(iVar35 + iVar19 < iVar4);
          iVar21 = iVar21 * 4;
          iVar20 = iVar20 * 4;
          iVar34 = iVar34 * 4;
          iVar35 = iVar35 * 4;
          iVar21 = CONCAT13((byte)((uint)iVar36 >> 0x18) & (byte)((uint)iVar21 >> 0x18) &
                            (byte)((uint)iVar45 >> 0x18),
                            CONCAT12((byte)((uint)iVar36 >> 0x10) & (byte)((uint)iVar21 >> 0x10) &
                                     (byte)((uint)iVar45 >> 0x10),
                                     CONCAT11((byte)((uint)iVar36 >> 8) & (byte)((uint)iVar21 >> 8)
                                              & (byte)((uint)iVar45 >> 8),
                                              (byte)iVar36 & (byte)iVar21 & (byte)iVar45)));
          auVar25._0_8_ =
               CONCAT17((byte)((uint)iVar37 >> 0x18) & (byte)((uint)iVar20 >> 0x18) &
                        (byte)((uint)iVar47 >> 0x18),
                        CONCAT16((byte)((uint)iVar37 >> 0x10) & (byte)((uint)iVar20 >> 0x10) &
                                 (byte)((uint)iVar47 >> 0x10),
                                 CONCAT15((byte)((uint)iVar37 >> 8) & (byte)((uint)iVar20 >> 8) &
                                          (byte)((uint)iVar47 >> 8),
                                          CONCAT14((byte)iVar37 & (byte)iVar20 & (byte)iVar47,iVar21
                                                  ))));
          auVar25[8] = (byte)iVar40 & (byte)iVar34 & (byte)iVar48;
          auVar25[9] = (byte)((uint)iVar40 >> 8) & (byte)((uint)iVar34 >> 8) &
                       (byte)((uint)iVar48 >> 8);
          auVar25[10] = (byte)((uint)iVar40 >> 0x10) & (byte)((uint)iVar34 >> 0x10) &
                        (byte)((uint)iVar48 >> 0x10);
          auVar25[0xb] = (byte)((uint)iVar40 >> 0x18) & (byte)((uint)iVar34 >> 0x18) &
                         (byte)((uint)iVar48 >> 0x18);
          auVar31[0xc] = (byte)iVar42 & (byte)iVar35 & (byte)iVar49;
          auVar31._0_12_ = auVar25;
          auVar31[0xd] = (byte)((uint)iVar42 >> 8) & (byte)((uint)iVar35 >> 8) &
                         (byte)((uint)iVar49 >> 8);
          auVar31[0xe] = (byte)((uint)iVar42 >> 0x10) & (byte)((uint)iVar35 >> 0x10) &
                         (byte)((uint)iVar49 >> 0x10);
          auVar31[0xf] = (byte)((uint)iVar42 >> 0x18) & (byte)((uint)iVar35 >> 0x18) &
                         (byte)((uint)iVar49 >> 0x18);
          uVar44 = ((undefined8 *)(lVar17 + lVar18))[1];
          uVar39 = *(undefined8 *)(lVar17 + lVar18);
          auVar32._0_4_ = ((float)uVar39 + *(float *)(lVar16 + iVar21 + lVar18)) * fVar52 * -0.5;
          auVar32._4_4_ =
               ((float)((ulong)uVar39 >> 0x20) +
               *(float *)(lVar16 + (int)((ulong)auVar25._0_8_ >> 0x20) + lVar18)) * fVar52 * -0.5;
          auVar32._8_4_ =
               ((float)uVar44 + *(float *)(lVar16 + auVar25._8_4_ + lVar18)) * fVar52 * -0.5;
          auVar32._12_4_ =
               ((float)((ulong)uVar44 >> 0x20) + *(float *)(lVar16 + auVar31._12_4_ + lVar18)) *
               fVar52 * -0.5;
          auVar28 = NEON_fmax(auVar32,auVar51,4);
          fVar38 = auVar53._0_4_ + auVar28._0_4_ * 0.0009765625;
          fVar41 = auVar53._4_4_ + auVar28._4_4_ * 0.0009765625;
          fVar43 = auVar53._8_4_ + auVar28._8_4_ * 0.0009765625;
          fVar46 = auVar53._12_4_ + auVar28._12_4_ * 0.0009765625;
          fVar38 = fVar38 * fVar38;
          fVar41 = fVar41 * fVar41;
          fVar43 = fVar43 * fVar43;
          fVar46 = fVar46 * fVar46;
          fVar38 = fVar38 * fVar38;
          fVar41 = fVar41 * fVar41;
          fVar43 = fVar43 * fVar43;
          fVar46 = fVar46 * fVar46;
          fVar38 = fVar38 * fVar38;
          fVar41 = fVar41 * fVar41;
          fVar43 = fVar43 * fVar43;
          fVar46 = fVar46 * fVar46;
          fVar38 = fVar38 * fVar38;
          fVar41 = fVar41 * fVar41;
          fVar43 = fVar43 * fVar43;
          fVar46 = fVar46 * fVar46;
          fVar38 = fVar38 * fVar38;
          fVar41 = fVar41 * fVar41;
          fVar43 = fVar43 * fVar43;
          fVar46 = fVar46 * fVar46;
          fVar38 = fVar38 * fVar38;
          fVar41 = fVar41 * fVar41;
          fVar43 = fVar43 * fVar43;
          fVar46 = fVar46 * fVar46;
          fVar38 = fVar38 * fVar38;
          fVar41 = fVar41 * fVar41;
          fVar43 = fVar43 * fVar43;
          fVar46 = fVar46 * fVar46;
          fVar38 = fVar38 * fVar38;
          fVar41 = fVar41 * fVar41;
          fVar43 = fVar43 * fVar43;
          fVar46 = fVar46 * fVar46;
          fVar38 = fVar38 * fVar38;
          fVar41 = fVar41 * fVar41;
          fVar43 = fVar43 * fVar43;
          fVar46 = fVar46 * fVar46;
          auVar33._0_4_ = fVar38 * fVar38;
          auVar33._4_4_ = fVar41 * fVar41;
          auVar33._8_4_ = fVar43 * fVar43;
          auVar33._12_4_ = fVar46 * fVar46;
          auVar28 = NEON_fmax(auVar33,ZEXT216(0),4);
          puVar5 = (undefined8 *)(lVar11 + lVar10 * uVar6 + lVar18);
          puVar5[1] = auVar28._8_8_;
          *puVar5 = auVar28._0_8_;
          iVar19 = iVar19 + 4;
          lVar7 = *(long *)(param_1 + 0x10);
          lVar18 = lVar18 + 0x10;
        } while (iVar19 < *(int *)(lVar7 + 0xc));
      }
      uVar6 = uVar6 + 1;
    } while (uVar6 != uVar2);
  }
  return;
}



/* Entry: 1095d4ae4; end: 1095d4e77;  */

void FUN_1095d4ae4(undefined4 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  char cVar4;
  bool bVar5;
  undefined8 *puVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uStack_270;
  undefined8 uStack_268;
  int *piStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  int *piStack_248;
  undefined8 uStack_240;
  long lStack_238;
  undefined8 *puStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  long lStack_210;
  undefined8 uStack_208;
  undefined1 *puStack_200;
  int *piStack_1f8;
  undefined8 uStack_1f0;
  long lStack_1e8;
  undefined4 uStack_1e0;
  int iStack_1dc;
  undefined1 *puStack_1d8;
  undefined1 auStack_1d0 [16];
  int iStack_1c0;
  int iStack_1bc;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  long lStack_188;
  long lStack_180;
  undefined1 *puStack_178;
  undefined1 auStack_170 [16];
  int iStack_160;
  int iStack_15c;
  undefined1 auStack_e0 [128];
  
  iVar2 = **(int **)(param_3 + 0x40);
  iVar3 = (*(int **)(param_3 + 0x40))[1];
  iStack_160 = iVar3;
  iStack_15c = iVar2;
  FUN_1095d359c(auStack_e0,param_2,&iStack_160,5);
  iStack_1c0 = iVar3;
  iStack_1bc = iVar2;
  FUN_1095d359c(&iStack_160,param_2,&iStack_1c0,5);
  uStack_220 = (undefined **)0x300000005;
  lStack_238 = -1;
  FUN_109b32bf8(&iStack_1c0,1,&uStack_220,&lStack_238);
  piStack_248 = (int *)0x300000003;
  uStack_250 = 1;
  puVar6 = &uStack_220;
  FUN_109a852c8(puVar6,&iStack_1c0,&uStack_250);
  uStack_268 = 0x3ff0000000000000;
  lStack_238 = CONCAT44(lStack_238._4_4_,0xc1020006);
  puStack_230 = &uStack_268;
  uStack_228 = 0x100000001;
  FUN_109a91d90();
  FUN_109a48a40(&uStack_220,&lStack_238,puVar6);
  if (lStack_1e8 != 0) {
    piVar1 = (int *)(lStack_1e8 + 0x14);
    do {
      iVar2 = *piVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = iVar2 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar2 + -1 == 0) {
      func_0x000109a848d4(&uStack_220);
    }
  }
  lStack_1e8 = 0;
  uStack_208 = 0;
  lStack_210 = 0;
  piStack_1f8 = (int *)0x0;
  puStack_200 = (undefined1 *)0x0;
  if (0 < uStack_220._4_4_) {
    lVar7 = 0;
    do {
      *(undefined4 *)(CONCAT44(iStack_1dc,uStack_1e0) + lVar7 * 4) = 0;
      lVar7 = lVar7 + 1;
    } while (lVar7 < uStack_220._4_4_);
  }
  if (puStack_1d8 != auStack_1d0 && puStack_1d8 != (undefined1 *)0x0) {
    _free(*(undefined8 *)(puStack_1d8 + -8));
  }
  uStack_228 = 0;
  lStack_238._0_4_ = 0x1010000;
  uStack_250._0_4_ = 0x2010000;
  piStack_248 = (int *)auStack_e0;
  uStack_240 = 0;
  uStack_258 = 0;
  uStack_268._0_4_ = 0x1010000;
  uStack_270 = 0xffffffffffffffff;
  uStack_218 = 0x7fefffffffffffff;
  uStack_220 = (undefined **)0x7fefffffffffffff;
  uStack_208 = 0x7fefffffffffffff;
  lStack_210 = 0x7fefffffffffffff;
  uVar9 = 0x7fefffffffffffff;
  uVar8 = 0x7fefffffffffffff;
  piStack_260 = &iStack_1c0;
  puStack_230 = (undefined8 *)param_3;
  FUN_109b33f48(&lStack_238,&uStack_250,4,&uStack_268,&uStack_270,1,0,&uStack_220,0x7fefffffffffffff
                ,0x7fefffffffffffff);
  uStack_228 = 0;
  lStack_238 = CONCAT44(lStack_238._4_4_,0x1010000);
  uStack_250 = CONCAT44(uStack_250._4_4_,0x2010000);
  uStack_240 = 0;
  uStack_258 = 0;
  uStack_268 = CONCAT44(uStack_268._4_4_,0x1010000);
  uStack_270 = 0xffffffffffffffff;
  piStack_260 = &iStack_1c0;
  piStack_248 = &iStack_160;
  puStack_230 = (undefined8 *)param_4;
  uStack_220 = (undefined **)uVar8;
  uStack_218 = uVar9;
  lStack_210 = uVar8;
  uStack_208 = uVar9;
  FUN_109b33f48(&lStack_238,&uStack_250,4,&uStack_268,&uStack_270,1,0,&uStack_220);
  uStack_220 = &PTR_FUN_110afec08;
  puStack_200 = auStack_e0;
  uStack_218 = CONCAT44(uStack_218._4_4_,uRam00000001132dfb70);
  iStack_1dc = (int)((double)*(int *)(param_3 + 8) / (double)(int)uRam00000001132dfb70);
  lStack_238 = (ulong)uRam00000001132dfb70 << 0x20;
  lStack_210 = param_3;
  uStack_208 = param_4;
  piStack_1f8 = &iStack_160;
  uStack_1f0 = param_5;
  lStack_1e8 = param_6;
  uStack_1e0 = param_1;
  func_0x000109aa87cc(0xbff0000000000000,&lStack_238,&uStack_220);
  if (lStack_188 != 0) {
    piVar1 = (int *)(lStack_188 + 0x14);
    do {
      iVar2 = *piVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = iVar2 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar2 + -1 == 0) {
      func_0x000109a848d4(&iStack_1c0);
    }
  }
  lStack_188 = 0;
  uStack_1a8 = 0;
  uStack_1b0 = 0;
  uStack_198 = 0;
  uStack_1a0 = 0;
  if (0 < iStack_1bc) {
    lVar7 = 0;
    do {
      *(undefined4 *)(lStack_180 + lVar7 * 4) = 0;
      lVar7 = lVar7 + 1;
    } while (lVar7 < iStack_1bc);
  }
  if (puStack_178 != auStack_170 && puStack_178 != (undefined1 *)0x0) {
    _free(*(undefined8 *)(puStack_178 + -8));
  }
  FUN_1095d3858(&iStack_160);
  FUN_1095d3858(auStack_e0);
  return;
}



/* Entry: 1095d4e78; end: 1095d4e7b;  */

void FUN_1095d4e78(void)

{
  return;
}



/* Entry: 1095d4e7c; end: 1095d5347;  */

void FUN_1095d4e7c(long param_1,int *param_2)

{
  undefined8 *puVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  byte *pbVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  ulong uVar14;
  long lVar15;
  int iVar16;
  long lVar17;
  int iVar18;
  int iVar32;
  undefined1 auVar19 [12];
  int iVar33;
  undefined1 auVar20 [12];
  int iVar34;
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar21 [12];
  undefined1 auVar22 [12];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  byte bVar35;
  byte bVar37;
  byte bVar38;
  int iVar36;
  byte bVar39;
  byte bVar40;
  byte bVar42;
  byte bVar43;
  int iVar41;
  byte bVar44;
  byte bVar45;
  byte bVar47;
  byte bVar48;
  int iVar46;
  byte bVar49;
  byte bVar50;
  byte bVar52;
  byte bVar53;
  int iVar51;
  byte bVar54;
  int iVar55;
  float fVar56;
  int iVar57;
  float fVar58;
  int iVar59;
  float fVar60;
  int iVar61;
  float fVar62;
  undefined1 auVar63 [16];
  float fVar64;
  undefined1 auVar65 [16];
  undefined8 uVar66;
  undefined8 uVar67;
  float fVar68;
  undefined1 auVar23 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  
  uVar4 = *(int *)(param_1 + 0x34) * *param_2;
  lVar7 = *(long *)(param_1 + 0x10);
  uVar3 = *(uint *)(lVar7 + 8);
  uVar2 = uVar3;
  if ((int)uVar4 <= (int)uVar3) {
    uVar2 = uVar4;
  }
  uVar2 = uVar2 & ((int)uVar2 >> 0x1f ^ 0xffffffffU);
  uVar14 = (ulong)uVar2;
  uVar4 = param_2[1] * *(int *)(param_1 + 0x34);
  if ((int)uVar4 <= (int)uVar3) {
    uVar3 = uVar4;
  }
  if ((int)uVar2 < (int)uVar3) {
    iVar5 = *(int *)(lVar7 + 0xc) + -1;
    auVar63 = NEON_fmov(0xc1a00000,4);
    fVar64 = 1.0 / *(float *)(param_1 + 0x30);
    auVar65 = NEON_fmov(0x3f800000,4);
    do {
      if (0 < *(int *)(lVar7 + 0xc)) {
        lVar15 = 0;
        iVar16 = 0;
        lVar11 = *(long *)(*(long *)(param_1 + 0x28) + 0x10);
        lVar10 = **(long **)(*(long *)(param_1 + 0x28) + 0x48);
        lVar17 = *(long *)(lVar7 + 0x10) + **(long **)(lVar7 + 0x48) * uVar14;
        lVar8 = *(long *)(*(long *)(param_1 + 0x18) + 0x10);
        lVar13 = **(long **)(*(long *)(param_1 + 0x18) + 0x48);
        lVar9 = *(long *)(*(long *)(param_1 + 0x20) + 0x10);
        lVar12 = **(long **)(*(long *)(param_1 + 0x20) + 0x48);
        do {
          uVar67 = ((undefined8 *)(lVar17 + lVar15))[1];
          uVar66 = *(undefined8 *)(lVar17 + lVar15);
          if (((bRam00000001132dfb90 & 1) == 0) &&
             (iVar18 = 0x132dfb90, ___cxa_guard_acquire(), iVar18 != 0)) {
            uRam00000001132dfb88 = 0x80000000;
            uRam00000001132dfb8c = 0x80000000;
            uRam00000001132dfb80 = 0x8000000080000000;
            ___cxa_guard_release(0x1132dfb90);
          }
          if (((bRam00000001132dfbb0 & 1) == 0) &&
             (iVar18 = 0x132dfbb0, ___cxa_guard_acquire(), iVar18 != 0)) {
            _uRam00000001132dfba8 = 0x3f000000;
            _uRam00000001132dfbac = 0x3f000000;
            _uRam00000001132dfba0 = 0x3f0000003f000000;
            ___cxa_guard_release(0x1132dfbb0);
          }
          fVar56 = (float)CONCAT13((byte)((ulong)uRam00000001132dfb80 >> 0x18) &
                                   (byte)((ulong)uVar66 >> 0x18) | bRam00000001132dfba3,
                                   CONCAT12((byte)((ulong)uRam00000001132dfb80 >> 0x10) &
                                            (byte)((ulong)uVar66 >> 0x10) | bRam00000001132dfba2,
                                            CONCAT11((byte)((ulong)uRam00000001132dfb80 >> 8) &
                                                     (byte)((ulong)uVar66 >> 8) |
                                                     uRam00000001132dfba0._1_1_,
                                                     (byte)uRam00000001132dfb80 & (byte)uVar66 |
                                                     (byte)uRam00000001132dfba0)));
          auVar19._0_8_ =
               CONCAT17((byte)((ulong)uRam00000001132dfb80 >> 0x38) & (byte)((ulong)uVar66 >> 0x38)
                        | bRam00000001132dfba7,
                        CONCAT16((byte)((ulong)uRam00000001132dfb80 >> 0x30) &
                                 (byte)((ulong)uVar66 >> 0x30) | bRam00000001132dfba6,
                                 CONCAT15((byte)((ulong)uRam00000001132dfb80 >> 0x28) &
                                          (byte)((ulong)uVar66 >> 0x28) | bRam00000001132dfba5,
                                          CONCAT14((byte)((ulong)uRam00000001132dfb80 >> 0x20) &
                                                   (byte)((ulong)uVar66 >> 0x20) |
                                                   bRam00000001132dfba4,fVar56))));
          auVar19[8] = (byte)uRam00000001132dfb88 & (byte)uVar67 | (byte)uRam00000001132dfba8;
          auVar19[9] = (byte)((uint)uRam00000001132dfb88 >> 8) & (byte)((ulong)uVar67 >> 8) |
                       uRam00000001132dfba8._1_1_;
          auVar19[10] = (byte)((uint)uRam00000001132dfb88 >> 0x10) & (byte)((ulong)uVar67 >> 0x10) |
                        bRam00000001132dfbaa;
          auVar19[0xb] = (byte)((uint)uRam00000001132dfb88 >> 0x18) & (byte)((ulong)uVar67 >> 0x18)
                         | bRam00000001132dfbab;
          auVar25[0xc] = (byte)uRam00000001132dfb8c & (byte)((ulong)uVar67 >> 0x20) |
                         (byte)uRam00000001132dfbac;
          auVar25._0_12_ = auVar19;
          auVar25[0xd] = (byte)((uint)uRam00000001132dfb8c >> 8) & (byte)((ulong)uVar67 >> 0x28) |
                         uRam00000001132dfbac._1_1_;
          auVar25[0xe] = (byte)((uint)uRam00000001132dfb8c >> 0x10) & (byte)((ulong)uVar67 >> 0x30)
                         | bRam00000001132dfbae;
          auVar25[0xf] = (byte)((uint)uRam00000001132dfb8c >> 0x18) & (byte)((ulong)uVar67 >> 0x38)
                         | bRam00000001132dfbaf;
          fVar58 = (float)uVar66;
          fVar60 = (float)((ulong)uVar66 >> 0x20);
          fVar62 = (float)uVar67;
          fVar68 = (float)((ulong)uVar67 >> 0x20);
          iVar18 = (int)(fVar58 + fVar56);
          iVar32 = (int)(fVar60 + (float)((ulong)auVar19._0_8_ >> 0x20)) + 1;
          iVar33 = (int)(fVar62 + auVar19._8_4_) + 2;
          iVar34 = (int)(fVar68 + auVar25._12_4_) + 3;
          iVar36 = -(uint)(fVar58 <= 0.0);
          iVar41 = -(uint)(fVar60 <= 0.0);
          iVar46 = -(uint)(fVar62 <= 0.0);
          iVar51 = -(uint)(fVar68 <= 0.0);
          iVar55 = -(uint)(-1 < iVar18 + iVar16);
          iVar57 = -(uint)(-1 < iVar32 + iVar16);
          iVar59 = -(uint)(-1 < iVar33 + iVar16);
          iVar61 = -(uint)(-1 < iVar34 + iVar16);
          bVar35 = (byte)iVar36 & (byte)iVar55;
          bVar37 = (byte)((uint)iVar36 >> 8) & (byte)((uint)iVar55 >> 8);
          bVar38 = (byte)((uint)iVar36 >> 0x10) & (byte)((uint)iVar55 >> 0x10);
          bVar39 = (byte)((uint)iVar36 >> 0x18) & (byte)((uint)iVar55 >> 0x18);
          bVar40 = (byte)iVar41 & (byte)iVar57;
          bVar42 = (byte)((uint)iVar41 >> 8) & (byte)((uint)iVar57 >> 8);
          bVar43 = (byte)((uint)iVar41 >> 0x10) & (byte)((uint)iVar57 >> 0x10);
          bVar44 = (byte)((uint)iVar41 >> 0x18) & (byte)((uint)iVar57 >> 0x18);
          bVar45 = (byte)iVar46 & (byte)iVar59;
          bVar47 = (byte)((uint)iVar46 >> 8) & (byte)((uint)iVar59 >> 8);
          bVar48 = (byte)((uint)iVar46 >> 0x10) & (byte)((uint)iVar59 >> 0x10);
          bVar49 = (byte)((uint)iVar46 >> 0x18) & (byte)((uint)iVar59 >> 0x18);
          bVar50 = (byte)iVar51 & (byte)iVar61;
          bVar52 = (byte)((uint)iVar51 >> 8) & (byte)((uint)iVar61 >> 8);
          bVar53 = (byte)((uint)iVar51 >> 0x10) & (byte)((uint)iVar61 >> 0x10);
          bVar54 = (byte)((uint)iVar51 >> 0x18) & (byte)((uint)iVar61 >> 0x18);
          iVar18 = iVar18 * 4;
          iVar32 = iVar32 * 4;
          iVar33 = iVar33 * 4;
          iVar34 = iVar34 * 4;
          iVar18 = CONCAT13(bVar39 & (byte)((uint)iVar18 >> 0x18),
                            CONCAT12(bVar38 & (byte)((uint)iVar18 >> 0x10),
                                     CONCAT11(bVar37 & (byte)((uint)iVar18 >> 8),
                                              bVar35 & (byte)iVar18)));
          auVar20._0_8_ =
               CONCAT17(bVar44 & (byte)((uint)iVar32 >> 0x18),
                        CONCAT16(bVar43 & (byte)((uint)iVar32 >> 0x10),
                                 CONCAT15(bVar42 & (byte)((uint)iVar32 >> 8),
                                          CONCAT14(bVar40 & (byte)iVar32,iVar18))));
          auVar20[8] = bVar45 & (byte)iVar33;
          auVar20[9] = bVar47 & (byte)((uint)iVar33 >> 8);
          auVar20[10] = bVar48 & (byte)((uint)iVar33 >> 0x10);
          auVar20[0xb] = bVar49 & (byte)((uint)iVar33 >> 0x18);
          auVar23[0xc] = bVar50 & (byte)iVar34;
          auVar23._0_12_ = auVar20;
          auVar23[0xd] = bVar52 & (byte)((uint)iVar34 >> 8);
          auVar23[0xe] = bVar53 & (byte)((uint)iVar34 >> 0x10);
          auVar23[0xf] = bVar54 & (byte)((uint)iVar34 >> 0x18);
          puVar1 = (undefined8 *)(lVar8 + lVar13 * uVar14 + lVar15);
          auVar24._0_4_ = ABS(fVar58 + *(float *)((long)puVar1 + (long)iVar18)) * fVar64 * -0.5;
          auVar24._4_4_ =
               ABS(fVar60 + *(float *)((long)puVar1 + (long)(int)((ulong)auVar20._0_8_ >> 0x20))) *
               fVar64 * -0.5;
          auVar24._8_4_ =
               ABS(fVar62 + *(float *)((long)puVar1 + (long)auVar20._8_4_)) * fVar64 * -0.5;
          auVar24._12_4_ =
               ABS(fVar68 + *(float *)((long)puVar1 + (long)auVar23._12_4_)) * fVar64 * -0.5;
          auVar25 = NEON_fmax(auVar24,auVar63,4);
          fVar56 = auVar65._0_4_ + auVar25._0_4_ * 0.0009765625;
          fVar58 = auVar65._4_4_ + auVar25._4_4_ * 0.0009765625;
          fVar60 = auVar65._8_4_ + auVar25._8_4_ * 0.0009765625;
          fVar62 = auVar65._12_4_ + auVar25._12_4_ * 0.0009765625;
          fVar56 = fVar56 * fVar56;
          fVar58 = fVar58 * fVar58;
          fVar60 = fVar60 * fVar60;
          fVar62 = fVar62 * fVar62;
          fVar56 = fVar56 * fVar56;
          fVar58 = fVar58 * fVar58;
          fVar60 = fVar60 * fVar60;
          fVar62 = fVar62 * fVar62;
          fVar56 = fVar56 * fVar56;
          fVar58 = fVar58 * fVar58;
          fVar60 = fVar60 * fVar60;
          fVar62 = fVar62 * fVar62;
          fVar56 = fVar56 * fVar56;
          fVar58 = fVar58 * fVar58;
          fVar60 = fVar60 * fVar60;
          fVar62 = fVar62 * fVar62;
          fVar56 = fVar56 * fVar56;
          fVar58 = fVar58 * fVar58;
          fVar60 = fVar60 * fVar60;
          fVar62 = fVar62 * fVar62;
          fVar56 = fVar56 * fVar56;
          fVar58 = fVar58 * fVar58;
          fVar60 = fVar60 * fVar60;
          fVar62 = fVar62 * fVar62;
          fVar56 = fVar56 * fVar56;
          fVar58 = fVar58 * fVar58;
          fVar60 = fVar60 * fVar60;
          fVar62 = fVar62 * fVar62;
          fVar56 = fVar56 * fVar56;
          fVar58 = fVar58 * fVar58;
          fVar60 = fVar60 * fVar60;
          fVar62 = fVar62 * fVar62;
          fVar56 = fVar56 * fVar56;
          fVar58 = fVar58 * fVar58;
          fVar60 = fVar60 * fVar60;
          fVar62 = fVar62 * fVar62;
          auVar26._0_4_ = fVar56 * fVar56;
          auVar26._4_4_ = fVar58 * fVar58;
          auVar26._8_4_ = fVar60 * fVar60;
          auVar26._12_4_ = fVar62 * fVar62;
          auVar25 = NEON_fmax(auVar26,ZEXT216(0),4);
          pbVar6 = (byte *)(lVar9 + lVar12 * uVar14 + lVar15);
          pbVar6[8] = bVar45 & auVar25[8];
          pbVar6[9] = bVar47 & auVar25[9];
          pbVar6[10] = bVar48 & auVar25[10];
          pbVar6[0xb] = bVar49 & auVar25[0xb];
          pbVar6[0xc] = bVar50 & auVar25[0xc];
          pbVar6[0xd] = bVar52 & auVar25[0xd];
          pbVar6[0xe] = bVar53 & auVar25[0xe];
          pbVar6[0xf] = bVar54 & auVar25[0xf];
          *pbVar6 = bVar35 & auVar25[0];
          pbVar6[1] = bVar37 & auVar25[1];
          pbVar6[2] = bVar38 & auVar25[2];
          pbVar6[3] = bVar39 & auVar25[3];
          pbVar6[4] = bVar40 & auVar25[4];
          pbVar6[5] = bVar42 & auVar25[5];
          pbVar6[6] = bVar43 & auVar25[6];
          pbVar6[7] = bVar44 & auVar25[7];
          uVar67 = puVar1[1];
          uVar66 = *puVar1;
          if (((bRam00000001132dfb90 & 1) == 0) &&
             (iVar18 = 0x132dfb90, ___cxa_guard_acquire(), iVar18 != 0)) {
            uRam00000001132dfb88 = 0x80000000;
            uRam00000001132dfb8c = 0x80000000;
            uRam00000001132dfb80 = 0x8000000080000000;
            ___cxa_guard_release(0x1132dfb90);
          }
          if (((bRam00000001132dfbb0 & 1) == 0) &&
             (iVar18 = 0x132dfbb0, ___cxa_guard_acquire(), iVar18 != 0)) {
            _uRam00000001132dfba8 = 0x3f000000;
            _uRam00000001132dfbac = 0x3f000000;
            _uRam00000001132dfba0 = 0x3f0000003f000000;
            ___cxa_guard_release(0x1132dfbb0);
          }
          fVar56 = (float)CONCAT13((byte)((ulong)uRam00000001132dfb80 >> 0x18) &
                                   (byte)((ulong)uVar66 >> 0x18) | bRam00000001132dfba3,
                                   CONCAT12((byte)((ulong)uRam00000001132dfb80 >> 0x10) &
                                            (byte)((ulong)uVar66 >> 0x10) | bRam00000001132dfba2,
                                            CONCAT11((byte)((ulong)uRam00000001132dfb80 >> 8) &
                                                     (byte)((ulong)uVar66 >> 8) |
                                                     uRam00000001132dfba0._1_1_,
                                                     (byte)uRam00000001132dfb80 & (byte)uVar66 |
                                                     (byte)uRam00000001132dfba0)));
          auVar21._0_8_ =
               CONCAT17((byte)((ulong)uRam00000001132dfb80 >> 0x38) & (byte)((ulong)uVar66 >> 0x38)
                        | bRam00000001132dfba7,
                        CONCAT16((byte)((ulong)uRam00000001132dfb80 >> 0x30) &
                                 (byte)((ulong)uVar66 >> 0x30) | bRam00000001132dfba6,
                                 CONCAT15((byte)((ulong)uRam00000001132dfb80 >> 0x28) &
                                          (byte)((ulong)uVar66 >> 0x28) | bRam00000001132dfba5,
                                          CONCAT14((byte)((ulong)uRam00000001132dfb80 >> 0x20) &
                                                   (byte)((ulong)uVar66 >> 0x20) |
                                                   bRam00000001132dfba4,fVar56))));
          auVar21[8] = (byte)uRam00000001132dfb88 & (byte)uVar67 | (byte)uRam00000001132dfba8;
          auVar21[9] = (byte)((uint)uRam00000001132dfb88 >> 8) & (byte)((ulong)uVar67 >> 8) |
                       uRam00000001132dfba8._1_1_;
          auVar21[10] = (byte)((uint)uRam00000001132dfb88 >> 0x10) & (byte)((ulong)uVar67 >> 0x10) |
                        bRam00000001132dfbaa;
          auVar21[0xb] = (byte)((uint)uRam00000001132dfb88 >> 0x18) & (byte)((ulong)uVar67 >> 0x18)
                         | bRam00000001132dfbab;
          auVar27[0xc] = (byte)uRam00000001132dfb8c & (byte)((ulong)uVar67 >> 0x20) |
                         (byte)uRam00000001132dfbac;
          auVar27._0_12_ = auVar21;
          auVar27[0xd] = (byte)((uint)uRam00000001132dfb8c >> 8) & (byte)((ulong)uVar67 >> 0x28) |
                         uRam00000001132dfbac._1_1_;
          auVar27[0xe] = (byte)((uint)uRam00000001132dfb8c >> 0x10) & (byte)((ulong)uVar67 >> 0x30)
                         | bRam00000001132dfbae;
          auVar27[0xf] = (byte)((uint)uRam00000001132dfb8c >> 0x18) & (byte)((ulong)uVar67 >> 0x38)
                         | bRam00000001132dfbaf;
          fVar58 = (float)uVar66;
          fVar60 = (float)((ulong)uVar66 >> 0x20);
          fVar62 = (float)uVar67;
          fVar68 = (float)((ulong)uVar67 >> 0x20);
          iVar18 = (int)(fVar58 + fVar56);
          iVar32 = (int)(fVar60 + (float)((ulong)auVar21._0_8_ >> 0x20)) + 1;
          iVar33 = (int)(fVar62 + auVar21._8_4_) + 2;
          iVar34 = (int)(fVar68 + auVar27._12_4_) + 3;
          iVar36 = -(uint)(0.0 <= fVar58);
          iVar41 = -(uint)(0.0 <= fVar60);
          iVar46 = -(uint)(0.0 <= fVar62);
          iVar51 = -(uint)(0.0 <= fVar68);
          iVar55 = -(uint)(iVar18 + iVar16 < iVar5);
          iVar57 = -(uint)(iVar32 + iVar16 < iVar5);
          iVar59 = -(uint)(iVar33 + iVar16 < iVar5);
          iVar61 = -(uint)(iVar34 + iVar16 < iVar5);
          bVar35 = (byte)iVar36 & (byte)iVar55;
          bVar37 = (byte)((uint)iVar36 >> 8) & (byte)((uint)iVar55 >> 8);
          bVar38 = (byte)((uint)iVar36 >> 0x10) & (byte)((uint)iVar55 >> 0x10);
          bVar39 = (byte)((uint)iVar36 >> 0x18) & (byte)((uint)iVar55 >> 0x18);
          bVar40 = (byte)iVar41 & (byte)iVar57;
          bVar42 = (byte)((uint)iVar41 >> 8) & (byte)((uint)iVar57 >> 8);
          bVar43 = (byte)((uint)iVar41 >> 0x10) & (byte)((uint)iVar57 >> 0x10);
          bVar44 = (byte)((uint)iVar41 >> 0x18) & (byte)((uint)iVar57 >> 0x18);
          bVar45 = (byte)iVar46 & (byte)iVar59;
          bVar47 = (byte)((uint)iVar46 >> 8) & (byte)((uint)iVar59 >> 8);
          bVar48 = (byte)((uint)iVar46 >> 0x10) & (byte)((uint)iVar59 >> 0x10);
          bVar49 = (byte)((uint)iVar46 >> 0x18) & (byte)((uint)iVar59 >> 0x18);
          bVar50 = (byte)iVar51 & (byte)iVar61;
          bVar52 = (byte)((uint)iVar51 >> 8) & (byte)((uint)iVar61 >> 8);
          bVar53 = (byte)((uint)iVar51 >> 0x10) & (byte)((uint)iVar61 >> 0x10);
          bVar54 = (byte)((uint)iVar51 >> 0x18) & (byte)((uint)iVar61 >> 0x18);
          iVar18 = iVar18 * 4;
          iVar32 = iVar32 * 4;
          iVar33 = iVar33 * 4;
          iVar34 = iVar34 * 4;
          iVar18 = CONCAT13(bVar39 & (byte)((uint)iVar18 >> 0x18),
                            CONCAT12(bVar38 & (byte)((uint)iVar18 >> 0x10),
                                     CONCAT11(bVar37 & (byte)((uint)iVar18 >> 8),
                                              bVar35 & (byte)iVar18)));
          auVar22._0_8_ =
               CONCAT17(bVar44 & (byte)((uint)iVar32 >> 0x18),
                        CONCAT16(bVar43 & (byte)((uint)iVar32 >> 0x10),
                                 CONCAT15(bVar42 & (byte)((uint)iVar32 >> 8),
                                          CONCAT14(bVar40 & (byte)iVar32,iVar18))));
          auVar22[8] = bVar45 & (byte)iVar33;
          auVar22[9] = bVar47 & (byte)((uint)iVar33 >> 8);
          auVar22[10] = bVar48 & (byte)((uint)iVar33 >> 0x10);
          auVar22[0xb] = bVar49 & (byte)((uint)iVar33 >> 0x18);
          auVar28[0xc] = bVar50 & (byte)iVar34;
          auVar28._0_12_ = auVar22;
          auVar28[0xd] = bVar52 & (byte)((uint)iVar34 >> 8);
          auVar28[0xe] = bVar53 & (byte)((uint)iVar34 >> 0x10);
          auVar28[0xf] = bVar54 & (byte)((uint)iVar34 >> 0x18);
          auVar29._0_4_ = ABS(fVar58 + *(float *)(lVar17 + iVar18 + lVar15)) * fVar64 * -0.5;
          auVar29._4_4_ =
               ABS(fVar60 + *(float *)(lVar17 + (int)((ulong)auVar22._0_8_ >> 0x20) + lVar15)) *
               fVar64 * -0.5;
          auVar29._8_4_ = ABS(fVar62 + *(float *)(lVar17 + auVar22._8_4_ + lVar15)) * fVar64 * -0.5;
          auVar29._12_4_ =
               ABS(fVar68 + *(float *)(lVar17 + auVar28._12_4_ + lVar15)) * fVar64 * -0.5;
          auVar25 = NEON_fmax(auVar29,auVar63,4);
          fVar56 = auVar65._0_4_ + auVar25._0_4_ * 0.0009765625;
          fVar58 = auVar65._4_4_ + auVar25._4_4_ * 0.0009765625;
          fVar60 = auVar65._8_4_ + auVar25._8_4_ * 0.0009765625;
          fVar62 = auVar65._12_4_ + auVar25._12_4_ * 0.0009765625;
          fVar56 = fVar56 * fVar56;
          fVar58 = fVar58 * fVar58;
          fVar60 = fVar60 * fVar60;
          fVar62 = fVar62 * fVar62;
          fVar56 = fVar56 * fVar56;
          fVar58 = fVar58 * fVar58;
          fVar60 = fVar60 * fVar60;
          fVar62 = fVar62 * fVar62;
          fVar56 = fVar56 * fVar56;
          fVar58 = fVar58 * fVar58;
          fVar60 = fVar60 * fVar60;
          fVar62 = fVar62 * fVar62;
          fVar56 = fVar56 * fVar56;
          fVar58 = fVar58 * fVar58;
          fVar60 = fVar60 * fVar60;
          fVar62 = fVar62 * fVar62;
          fVar56 = fVar56 * fVar56;
          fVar58 = fVar58 * fVar58;
          fVar60 = fVar60 * fVar60;
          fVar62 = fVar62 * fVar62;
          fVar56 = fVar56 * fVar56;
          fVar58 = fVar58 * fVar58;
          fVar60 = fVar60 * fVar60;
          fVar62 = fVar62 * fVar62;
          fVar56 = fVar56 * fVar56;
          fVar58 = fVar58 * fVar58;
          fVar60 = fVar60 * fVar60;
          fVar62 = fVar62 * fVar62;
          fVar56 = fVar56 * fVar56;
          fVar58 = fVar58 * fVar58;
          fVar60 = fVar60 * fVar60;
          fVar62 = fVar62 * fVar62;
          fVar56 = fVar56 * fVar56;
          fVar58 = fVar58 * fVar58;
          fVar60 = fVar60 * fVar60;
          fVar62 = fVar62 * fVar62;
          auVar30._0_4_ = fVar56 * fVar56;
          auVar30._4_4_ = fVar58 * fVar58;
          auVar30._8_4_ = fVar60 * fVar60;
          auVar30._12_4_ = fVar62 * fVar62;
          auVar25 = NEON_fmax(auVar30,ZEXT216(0),4);
          auVar31._0_8_ =
               CONCAT17(bVar44 & auVar25[7],
                        CONCAT16(bVar43 & auVar25[6],
                                 CONCAT15(bVar42 & auVar25[5],
                                          CONCAT14(bVar40 & auVar25[4],
                                                   CONCAT13(bVar39 & auVar25[3],
                                                            CONCAT12(bVar38 & auVar25[2],
                                                                     CONCAT11(bVar37 & auVar25[1],
                                                                              bVar35 & auVar25[0])))
                                                  ))));
          auVar31[8] = bVar45 & auVar25[8];
          auVar31[9] = bVar47 & auVar25[9];
          auVar31[10] = bVar48 & auVar25[10];
          auVar31[0xb] = bVar49 & auVar25[0xb];
          auVar31[0xc] = bVar50 & auVar25[0xc];
          auVar31[0xd] = bVar52 & auVar25[0xd];
          auVar31[0xe] = bVar53 & auVar25[0xe];
          auVar31[0xf] = bVar54 & auVar25[0xf];
          puVar1 = (undefined8 *)(lVar11 + lVar10 * uVar14 + lVar15);
          puVar1[1] = auVar31._8_8_;
          *puVar1 = auVar31._0_8_;
          iVar16 = iVar16 + 4;
          lVar7 = *(long *)(param_1 + 0x10);
          lVar15 = lVar15 + 0x10;
        } while (iVar16 < *(int *)(lVar7 + 0xc));
      }
      uVar14 = uVar14 + 1;
    } while (uVar14 != uVar3);
  }
  return;
}



/* Entry: 1095d5348; end: 1095d53af;  */

void FUN_1095d5348(undefined4 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined **ppuStack_50;
  int iStack_48;
  long lStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined4 uStack_20;
  int iStack_1c;
  undefined4 uStack_18;
  int iStack_14;
  
  ppuStack_50 = &PTR_FUN_110afec30;
  iStack_48 = iRam00000001132dfb70;
  iStack_1c = (int)((double)*(int *)(param_3 + 8) / (double)iRam00000001132dfb70);
  uStack_18 = 0;
  iStack_14 = iRam00000001132dfb70;
  lStack_40 = param_3;
  uStack_38 = param_4;
  uStack_30 = param_5;
  uStack_28 = param_6;
  uStack_20 = param_1;
  func_0x000109aa87cc(0xbff0000000000000,&uStack_18,&ppuStack_50);
  return;
}



/* Entry: 1095d53b0; end: 1095d53b3;  */

void FUN_1095d53b0(void)

{
  return;
}



/* Entry: 1095d53b4; end: 1095d5a0b;  */

void FUN_1095d53b4(long param_1,int *param_2)

{
  undefined8 *puVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  byte *pbVar6;
  undefined1 auVar7 [16];
  int iVar8;
  int iVar9;
  float fVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  ulong uVar13;
  int iVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  long lVar21;
  long lVar22;
  long lVar23;
  long lVar24;
  int iVar25;
  long lVar26;
  int iVar27;
  int iVar28;
  float fVar29;
  int iVar30;
  int iVar41;
  undefined1 auVar31 [12];
  undefined1 auVar33 [12];
  int iVar43;
  int iVar45;
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  float fVar42;
  float fVar44;
  float fVar46;
  undefined1 auVar39 [16];
  byte bVar47;
  byte bVar54;
  byte bVar55;
  int iVar48;
  byte bVar56;
  byte bVar57;
  byte bVar59;
  byte bVar60;
  int iVar58;
  byte bVar61;
  byte bVar62;
  byte bVar64;
  byte bVar65;
  int iVar63;
  byte bVar66;
  undefined1 auVar49 [12];
  byte bVar67;
  byte bVar69;
  byte bVar70;
  int iVar68;
  byte bVar71;
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined8 uVar72;
  undefined8 uVar73;
  float fVar74;
  undefined1 auVar75 [16];
  undefined1 auVar76 [16];
  float fVar77;
  undefined1 auVar32 [12];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar40 [16];
  undefined1 auVar50 [16];
  
  uVar4 = *(int *)(param_1 + 0x48) * *param_2;
  lVar15 = *(long *)(param_1 + 0x10);
  uVar3 = *(uint *)(lVar15 + 8);
  uVar2 = uVar3;
  if ((int)uVar4 <= (int)uVar3) {
    uVar2 = uVar4;
  }
  uVar2 = uVar2 & ((int)uVar2 >> 0x1f ^ 0xffffffffU);
  uVar13 = (ulong)uVar2;
  uVar4 = param_2[1] * *(int *)(param_1 + 0x48);
  if ((int)uVar4 <= (int)uVar3) {
    uVar3 = uVar4;
  }
  if ((int)uVar2 < (int)uVar3) {
    fVar74 = 1.0 / *(float *)(param_1 + 0x40);
    iVar5 = *(int *)(lVar15 + 0xc) + -1;
    auVar75 = NEON_fmov(0xc1a00000,4);
    auVar76 = NEON_fmov(0x3f800000,4);
    fVar77 = 1.0 / *(float *)(param_1 + 0x44);
    do {
      if (0 < *(int *)(lVar15 + 0xc)) {
        lVar24 = 0;
        iVar25 = 0;
        lVar18 = *(long *)(*(long *)(param_1 + 0x38) + 0x10);
        lVar17 = **(long **)(*(long *)(param_1 + 0x38) + 0x48);
        lVar20 = *(long *)(*(long *)(param_1 + 0x30) + 0x10);
        lVar19 = **(long **)(*(long *)(param_1 + 0x30) + 0x48);
        lVar26 = *(long *)(lVar15 + 0x10) + **(long **)(lVar15 + 0x48) * uVar13;
        lVar16 = *(long *)(*(long *)(param_1 + 0x18) + 0x10);
        lVar21 = **(long **)(*(long *)(param_1 + 0x18) + 0x48);
        lVar22 = *(long *)(*(long *)(param_1 + 0x20) + 0x10) +
                 **(long **)(*(long *)(param_1 + 0x20) + 0x48) * uVar13;
        lVar23 = *(long *)(*(long *)(param_1 + 0x28) + 0x10) +
                 **(long **)(*(long *)(param_1 + 0x28) + 0x48) * uVar13;
        do {
          iVar14 = 0x132dfb90;
          uVar73 = ((undefined8 *)(lVar26 + lVar24))[1];
          uVar72 = *(undefined8 *)(lVar26 + lVar24);
          if (((bRam00000001132dfb90 & 1) == 0) && (___cxa_guard_acquire(), iVar14 != 0)) {
            _uRam00000001132dfb88 = 0x80000000;
            _uRam00000001132dfb8c = 0x80000000;
            _uRam00000001132dfb80 = 0x8000000080000000;
            ___cxa_guard_release(0x1132dfb90);
          }
          fVar29 = (float)uVar72;
          fVar42 = (float)uVar73;
          if (((bRam00000001132dfbb0 & 1) == 0) &&
             (iVar14 = 0x132dfbb0, ___cxa_guard_acquire(), iVar14 != 0)) {
            _uRam00000001132dfba8 = 0x3f0000003f000000;
            _uRam00000001132dfba0 = 0x3f0000003f000000;
            ___cxa_guard_release(0x1132dfbb0);
          }
          iVar30 = 0x132dfb90;
          fVar44 = (float)CONCAT13(bRam00000001132dfb83 & (byte)((ulong)uVar72 >> 0x18) |
                                   bRam00000001132dfba3,
                                   CONCAT12(bRam00000001132dfb82 & (byte)((ulong)uVar72 >> 0x10) |
                                            bRam00000001132dfba2,
                                            CONCAT11(uRam00000001132dfb80._1_1_ &
                                                     (byte)((ulong)uVar72 >> 8) |
                                                     uRam00000001132dfba0._1_1_,
                                                     (byte)uRam00000001132dfb80 & (byte)uVar72 |
                                                     (byte)uRam00000001132dfba0)));
          auVar31._0_8_ =
               CONCAT17(bRam00000001132dfb87 & (byte)((ulong)uVar72 >> 0x38) | bRam00000001132dfba7,
                        CONCAT16(bRam00000001132dfb86 & (byte)((ulong)uVar72 >> 0x30) |
                                 bRam00000001132dfba6,
                                 CONCAT15(bRam00000001132dfb85 & (byte)((ulong)uVar72 >> 0x28) |
                                          bRam00000001132dfba5,
                                          CONCAT14(bRam00000001132dfb84 &
                                                   (byte)((ulong)uVar72 >> 0x20) |
                                                   bRam00000001132dfba4,fVar44))));
          auVar31[8] = (byte)uRam00000001132dfb88 & (byte)uVar73 | (byte)uRam00000001132dfba8;
          auVar31[9] = uRam00000001132dfb88._1_1_ & (byte)((ulong)uVar73 >> 8) |
                       uRam00000001132dfba8._1_1_;
          auVar31[10] = bRam00000001132dfb8a & (byte)((ulong)uVar73 >> 0x10) | bRam00000001132dfbaa;
          auVar31[0xb] = bRam00000001132dfb8b & (byte)((ulong)uVar73 >> 0x18) | bRam00000001132dfbab
          ;
          auVar34[0xc] = (byte)uRam00000001132dfb8c & (byte)((ulong)uVar73 >> 0x20) |
                         bRam00000001132dfbac;
          auVar34._0_12_ = auVar31;
          auVar34[0xd] = uRam00000001132dfb8c._1_1_ & (byte)((ulong)uVar73 >> 0x28) |
                         bRam00000001132dfbad;
          auVar34[0xe] = bRam00000001132dfb8e & (byte)((ulong)uVar73 >> 0x30) | bRam00000001132dfbae
          ;
          auVar34[0xf] = bRam00000001132dfb8f & (byte)((ulong)uVar73 >> 0x38) | bRam00000001132dfbaf
          ;
          fVar46 = (float)((ulong)uVar72 >> 0x20);
          fVar10 = (float)((ulong)uVar73 >> 0x20);
          iVar27 = (int)(fVar29 + fVar44);
          iVar41 = (int)(fVar46 + (float)((ulong)auVar31._0_8_ >> 0x20)) + 1;
          iVar43 = (int)(fVar42 + auVar31._8_4_) + 2;
          iVar45 = (int)(fVar10 + auVar34._12_4_) + 3;
          iVar48 = -(uint)(fVar29 <= 0.0);
          iVar58 = -(uint)(fVar46 <= 0.0);
          iVar63 = -(uint)(fVar42 <= 0.0);
          iVar68 = -(uint)(fVar10 <= 0.0);
          iVar14 = -(uint)(-1 < iVar27 + iVar25);
          iVar8 = -(uint)(-1 < iVar41 + iVar25);
          iVar9 = -(uint)(-1 < iVar43 + iVar25);
          iVar28 = -(uint)(-1 < iVar45 + iVar25);
          bVar47 = (byte)iVar48 & (byte)iVar14;
          bVar54 = (byte)((uint)iVar48 >> 8) & (byte)((uint)iVar14 >> 8);
          bVar55 = (byte)((uint)iVar48 >> 0x10) & (byte)((uint)iVar14 >> 0x10);
          bVar56 = (byte)((uint)iVar48 >> 0x18) & (byte)((uint)iVar14 >> 0x18);
          bVar57 = (byte)iVar58 & (byte)iVar8;
          bVar59 = (byte)((uint)iVar58 >> 8) & (byte)((uint)iVar8 >> 8);
          bVar60 = (byte)((uint)iVar58 >> 0x10) & (byte)((uint)iVar8 >> 0x10);
          bVar61 = (byte)((uint)iVar58 >> 0x18) & (byte)((uint)iVar8 >> 0x18);
          bVar62 = (byte)iVar63 & (byte)iVar9;
          bVar64 = (byte)((uint)iVar63 >> 8) & (byte)((uint)iVar9 >> 8);
          bVar65 = (byte)((uint)iVar63 >> 0x10) & (byte)((uint)iVar9 >> 0x10);
          bVar66 = (byte)((uint)iVar63 >> 0x18) & (byte)((uint)iVar9 >> 0x18);
          bVar67 = (byte)iVar68 & (byte)iVar28;
          bVar69 = (byte)((uint)iVar68 >> 8) & (byte)((uint)iVar28 >> 8);
          bVar70 = (byte)((uint)iVar68 >> 0x10) & (byte)((uint)iVar28 >> 0x10);
          bVar71 = (byte)((uint)iVar68 >> 0x18) & (byte)((uint)iVar28 >> 0x18);
          iVar27 = iVar27 * 4;
          iVar41 = iVar41 * 4;
          iVar43 = iVar43 * 4;
          iVar45 = iVar45 * 4;
          iVar28 = CONCAT13(bVar56 & (byte)((uint)iVar27 >> 0x18),
                            CONCAT12(bVar55 & (byte)((uint)iVar27 >> 0x10),
                                     CONCAT11(bVar54 & (byte)((uint)iVar27 >> 8),
                                              bVar47 & (byte)iVar27)));
          auVar32._0_8_ =
               CONCAT17(bVar61 & (byte)((uint)iVar41 >> 0x18),
                        CONCAT16(bVar60 & (byte)((uint)iVar41 >> 0x10),
                                 CONCAT15(bVar59 & (byte)((uint)iVar41 >> 8),
                                          CONCAT14(bVar57 & (byte)iVar41,iVar28))));
          auVar32[8] = bVar62 & (byte)iVar43;
          auVar32[9] = bVar64 & (byte)((uint)iVar43 >> 8);
          auVar32[10] = bVar65 & (byte)((uint)iVar43 >> 0x10);
          auVar32[0xb] = bVar66 & (byte)((uint)iVar43 >> 0x18);
          auVar35[0xc] = bVar67 & (byte)iVar45;
          auVar35._0_12_ = auVar32;
          auVar35[0xd] = bVar69 & (byte)((uint)iVar45 >> 8);
          auVar35[0xe] = bVar70 & (byte)((uint)iVar45 >> 0x10);
          auVar35[0xf] = bVar71 & (byte)((uint)iVar45 >> 0x18);
          iVar27 = (int)((ulong)auVar32._0_8_ >> 0x20);
          puVar1 = (undefined8 *)(lVar16 + lVar21 * uVar13 + lVar24);
          uVar73 = ((undefined8 *)(lVar22 + lVar24))[1];
          uVar72 = *(undefined8 *)(lVar22 + lVar24);
          iVar14 = -(uint)(fVar46 < -50.0);
          iVar8 = -(uint)(fVar42 < -50.0);
          iVar9 = -(uint)(fVar10 < -50.0);
          fVar44 = ((float)uVar72 + *(float *)(lVar23 + iVar28 + lVar24)) * fVar74 +
                   ABS(fVar29 + *(float *)((long)puVar1 + (long)iVar28)) * fVar77;
          fVar46 = ((float)((ulong)uVar72 >> 0x20) + *(float *)(lVar23 + iVar27 + lVar24)) * fVar74
                   + ABS(fVar46 + *(float *)((long)puVar1 + (long)iVar27)) * fVar77;
          fVar42 = ((float)uVar73 + *(float *)(lVar23 + auVar32._8_4_ + lVar24)) * fVar74 +
                   ABS(fVar42 + *(float *)((long)puVar1 + (long)auVar32._8_4_)) * fVar77;
          fVar10 = ((float)((ulong)uVar73 >> 0x20) + *(float *)(lVar23 + auVar35._12_4_ + lVar24)) *
                   fVar74 + ABS(fVar10 + *(float *)((long)puVar1 + (long)auVar35._12_4_)) * fVar77;
          auVar36._0_4_ = fVar44 * 0.5;
          auVar36._4_4_ = fVar46 * 0.5;
          auVar36._8_4_ = fVar42 * 0.5;
          auVar36._12_4_ = fVar10 * 0.5;
          auVar38[4] = SUB41(fVar46,0);
          auVar38._0_4_ = fVar44;
          auVar38[5] = (char)((uint)fVar46 >> 8);
          auVar38[6] = (char)((uint)fVar46 >> 0x10);
          auVar38[7] = (char)((uint)fVar46 >> 0x18);
          auVar38[8] = SUB41(fVar42,0);
          auVar38[9] = (char)((uint)fVar42 >> 8);
          auVar38[10] = (char)((uint)fVar42 >> 0x10);
          auVar38[0xb] = (char)((uint)fVar42 >> 0x18);
          auVar38[0xc] = SUB41(fVar10,0);
          auVar38[0xd] = (char)((uint)fVar10 >> 8);
          auVar38[0xe] = (char)((uint)fVar10 >> 0x10);
          auVar38[0xf] = (char)((uint)fVar10 >> 0x18);
          auVar11[4] = (char)iVar14;
          auVar11._0_4_ = -(uint)(fVar29 < -50.0);
          auVar11[5] = (char)((uint)iVar14 >> 8);
          auVar11[6] = (char)((uint)iVar14 >> 0x10);
          auVar11[7] = (char)((uint)iVar14 >> 0x18);
          auVar11[8] = (char)iVar8;
          auVar11[9] = (char)((uint)iVar8 >> 8);
          auVar11[10] = (char)((uint)iVar8 >> 0x10);
          auVar11[0xb] = (char)((uint)iVar8 >> 0x18);
          auVar11[0xc] = (char)iVar9;
          auVar11[0xd] = (char)((uint)iVar9 >> 8);
          auVar11[0xe] = (char)((uint)iVar9 >> 0x10);
          auVar11[0xf] = (char)((uint)iVar9 >> 0x18);
          auVar36 = auVar36 ^ (auVar36 ^ auVar38) & ~auVar11;
          auVar37._0_4_ = auVar36._0_4_ * -0.5;
          auVar37._4_4_ = auVar36._4_4_ * -0.5;
          auVar37._8_4_ = auVar36._8_4_ * -0.5;
          auVar37._12_4_ = auVar36._12_4_ * -0.5;
          auVar38 = NEON_fmax(auVar37,auVar75,4);
          fVar29 = auVar76._0_4_ + auVar38._0_4_ * 0.0009765625;
          fVar42 = auVar76._4_4_ + auVar38._4_4_ * 0.0009765625;
          fVar44 = auVar76._8_4_ + auVar38._8_4_ * 0.0009765625;
          fVar46 = auVar76._12_4_ + auVar38._12_4_ * 0.0009765625;
          fVar29 = fVar29 * fVar29;
          fVar42 = fVar42 * fVar42;
          fVar44 = fVar44 * fVar44;
          fVar46 = fVar46 * fVar46;
          fVar29 = fVar29 * fVar29;
          fVar42 = fVar42 * fVar42;
          fVar44 = fVar44 * fVar44;
          fVar46 = fVar46 * fVar46;
          fVar29 = fVar29 * fVar29;
          fVar42 = fVar42 * fVar42;
          fVar44 = fVar44 * fVar44;
          fVar46 = fVar46 * fVar46;
          fVar29 = fVar29 * fVar29;
          fVar42 = fVar42 * fVar42;
          fVar44 = fVar44 * fVar44;
          fVar46 = fVar46 * fVar46;
          fVar29 = fVar29 * fVar29;
          fVar42 = fVar42 * fVar42;
          fVar44 = fVar44 * fVar44;
          fVar46 = fVar46 * fVar46;
          fVar29 = fVar29 * fVar29;
          fVar42 = fVar42 * fVar42;
          fVar44 = fVar44 * fVar44;
          fVar46 = fVar46 * fVar46;
          fVar29 = fVar29 * fVar29;
          fVar42 = fVar42 * fVar42;
          fVar44 = fVar44 * fVar44;
          fVar46 = fVar46 * fVar46;
          fVar29 = fVar29 * fVar29;
          fVar42 = fVar42 * fVar42;
          fVar44 = fVar44 * fVar44;
          fVar46 = fVar46 * fVar46;
          fVar29 = fVar29 * fVar29;
          fVar42 = fVar42 * fVar42;
          fVar44 = fVar44 * fVar44;
          fVar46 = fVar46 * fVar46;
          auVar39._0_4_ = fVar29 * fVar29;
          auVar39._4_4_ = fVar42 * fVar42;
          auVar39._8_4_ = fVar44 * fVar44;
          auVar39._12_4_ = fVar46 * fVar46;
          auVar38 = NEON_fmax(auVar39,ZEXT216(0),4);
          pbVar6 = (byte *)(lVar20 + lVar19 * uVar13 + lVar24);
          pbVar6[8] = bVar62 & auVar38[8];
          pbVar6[9] = bVar64 & auVar38[9];
          pbVar6[10] = bVar65 & auVar38[10];
          pbVar6[0xb] = bVar66 & auVar38[0xb];
          pbVar6[0xc] = bVar67 & auVar38[0xc];
          pbVar6[0xd] = bVar69 & auVar38[0xd];
          pbVar6[0xe] = bVar70 & auVar38[0xe];
          pbVar6[0xf] = bVar71 & auVar38[0xf];
          *pbVar6 = bVar47 & auVar38[0];
          pbVar6[1] = bVar54 & auVar38[1];
          pbVar6[2] = bVar55 & auVar38[2];
          pbVar6[3] = bVar56 & auVar38[3];
          pbVar6[4] = bVar57 & auVar38[4];
          pbVar6[5] = bVar59 & auVar38[5];
          pbVar6[6] = bVar60 & auVar38[6];
          pbVar6[7] = bVar61 & auVar38[7];
          uVar73 = puVar1[1];
          uVar72 = *puVar1;
          if (((bRam00000001132dfb90 & 1) == 0) && (___cxa_guard_acquire(), iVar30 != 0)) {
            _uRam00000001132dfb88 = 0x80000000;
            _uRam00000001132dfb8c = 0x80000000;
            _uRam00000001132dfb80 = 0x8000000080000000;
            ___cxa_guard_release(0x1132dfb90);
          }
          fVar29 = (float)uVar72;
          fVar42 = (float)uVar73;
          if (((bRam00000001132dfbb0 & 1) == 0) &&
             (iVar14 = 0x132dfbb0, ___cxa_guard_acquire(), iVar14 != 0)) {
            _uRam00000001132dfba8 = 0x3f0000003f000000;
            _uRam00000001132dfba0 = 0x3f0000003f000000;
            ___cxa_guard_release(0x1132dfbb0);
          }
          fVar44 = (float)CONCAT13(bRam00000001132dfb83 & (byte)((ulong)uVar72 >> 0x18) |
                                   bRam00000001132dfba3,
                                   CONCAT12(bRam00000001132dfb82 & (byte)((ulong)uVar72 >> 0x10) |
                                            bRam00000001132dfba2,
                                            CONCAT11(uRam00000001132dfb80._1_1_ &
                                                     (byte)((ulong)uVar72 >> 8) |
                                                     uRam00000001132dfba0._1_1_,
                                                     (byte)uRam00000001132dfb80 & (byte)uVar72 |
                                                     (byte)uRam00000001132dfba0)));
          auVar33._0_8_ =
               CONCAT17(bRam00000001132dfb87 & (byte)((ulong)uVar72 >> 0x38) | bRam00000001132dfba7,
                        CONCAT16(bRam00000001132dfb86 & (byte)((ulong)uVar72 >> 0x30) |
                                 bRam00000001132dfba6,
                                 CONCAT15(bRam00000001132dfb85 & (byte)((ulong)uVar72 >> 0x28) |
                                          bRam00000001132dfba5,
                                          CONCAT14(bRam00000001132dfb84 &
                                                   (byte)((ulong)uVar72 >> 0x20) |
                                                   bRam00000001132dfba4,fVar44))));
          auVar33[8] = (byte)uRam00000001132dfb88 & (byte)uVar73 | (byte)uRam00000001132dfba8;
          auVar33[9] = uRam00000001132dfb88._1_1_ & (byte)((ulong)uVar73 >> 8) |
                       uRam00000001132dfba8._1_1_;
          auVar33[10] = bRam00000001132dfb8a & (byte)((ulong)uVar73 >> 0x10) | bRam00000001132dfbaa;
          auVar33[0xb] = bRam00000001132dfb8b & (byte)((ulong)uVar73 >> 0x18) | bRam00000001132dfbab
          ;
          auVar40[0xc] = (byte)uRam00000001132dfb8c & (byte)((ulong)uVar73 >> 0x20) |
                         bRam00000001132dfbac;
          auVar40._0_12_ = auVar33;
          auVar40[0xd] = uRam00000001132dfb8c._1_1_ & (byte)((ulong)uVar73 >> 0x28) |
                         bRam00000001132dfbad;
          auVar40[0xe] = bRam00000001132dfb8e & (byte)((ulong)uVar73 >> 0x30) | bRam00000001132dfbae
          ;
          auVar40[0xf] = bRam00000001132dfb8f & (byte)((ulong)uVar73 >> 0x38) | bRam00000001132dfbaf
          ;
          fVar46 = (float)((ulong)uVar72 >> 0x20);
          fVar10 = (float)((ulong)uVar73 >> 0x20);
          iVar30 = (int)(fVar29 + fVar44);
          iVar48 = (int)(fVar46 + (float)((ulong)auVar33._0_8_ >> 0x20)) + 1;
          iVar58 = (int)(fVar42 + auVar33._8_4_) + 2;
          iVar63 = (int)(fVar10 + auVar40._12_4_) + 3;
          iVar27 = -(uint)(0.0 <= fVar29);
          iVar41 = -(uint)(0.0 <= fVar46);
          iVar43 = -(uint)(0.0 <= fVar42);
          iVar45 = -(uint)(0.0 <= fVar10);
          iVar14 = -(uint)(iVar30 + iVar25 < iVar5);
          iVar8 = -(uint)(iVar48 + iVar25 < iVar5);
          iVar9 = -(uint)(iVar58 + iVar25 < iVar5);
          iVar28 = -(uint)(iVar63 + iVar25 < iVar5);
          bVar47 = (byte)iVar27 & (byte)iVar14;
          bVar54 = (byte)((uint)iVar27 >> 8) & (byte)((uint)iVar14 >> 8);
          bVar55 = (byte)((uint)iVar27 >> 0x10) & (byte)((uint)iVar14 >> 0x10);
          bVar56 = (byte)((uint)iVar27 >> 0x18) & (byte)((uint)iVar14 >> 0x18);
          bVar57 = (byte)iVar41 & (byte)iVar8;
          bVar59 = (byte)((uint)iVar41 >> 8) & (byte)((uint)iVar8 >> 8);
          bVar60 = (byte)((uint)iVar41 >> 0x10) & (byte)((uint)iVar8 >> 0x10);
          bVar61 = (byte)((uint)iVar41 >> 0x18) & (byte)((uint)iVar8 >> 0x18);
          bVar62 = (byte)iVar43 & (byte)iVar9;
          bVar64 = (byte)((uint)iVar43 >> 8) & (byte)((uint)iVar9 >> 8);
          bVar65 = (byte)((uint)iVar43 >> 0x10) & (byte)((uint)iVar9 >> 0x10);
          bVar66 = (byte)((uint)iVar43 >> 0x18) & (byte)((uint)iVar9 >> 0x18);
          bVar67 = (byte)iVar45 & (byte)iVar28;
          bVar69 = (byte)((uint)iVar45 >> 8) & (byte)((uint)iVar28 >> 8);
          bVar70 = (byte)((uint)iVar45 >> 0x10) & (byte)((uint)iVar28 >> 0x10);
          bVar71 = (byte)((uint)iVar45 >> 0x18) & (byte)((uint)iVar28 >> 0x18);
          iVar30 = iVar30 * 4;
          iVar48 = iVar48 * 4;
          iVar58 = iVar58 * 4;
          iVar63 = iVar63 * 4;
          iVar28 = CONCAT13(bVar56 & (byte)((uint)iVar30 >> 0x18),
                            CONCAT12(bVar55 & (byte)((uint)iVar30 >> 0x10),
                                     CONCAT11(bVar54 & (byte)((uint)iVar30 >> 8),
                                              bVar47 & (byte)iVar30)));
          auVar49._0_8_ =
               CONCAT17(bVar61 & (byte)((uint)iVar48 >> 0x18),
                        CONCAT16(bVar60 & (byte)((uint)iVar48 >> 0x10),
                                 CONCAT15(bVar59 & (byte)((uint)iVar48 >> 8),
                                          CONCAT14(bVar57 & (byte)iVar48,iVar28))));
          auVar49[8] = bVar62 & (byte)iVar58;
          auVar49[9] = bVar64 & (byte)((uint)iVar58 >> 8);
          auVar49[10] = bVar65 & (byte)((uint)iVar58 >> 0x10);
          auVar49[0xb] = bVar66 & (byte)((uint)iVar58 >> 0x18);
          auVar50[0xc] = bVar67 & (byte)iVar63;
          auVar50._0_12_ = auVar49;
          auVar50[0xd] = bVar69 & (byte)((uint)iVar63 >> 8);
          auVar50[0xe] = bVar70 & (byte)((uint)iVar63 >> 0x10);
          auVar50[0xf] = bVar71 & (byte)((uint)iVar63 >> 0x18);
          iVar30 = (int)((ulong)auVar49._0_8_ >> 0x20);
          uVar73 = ((undefined8 *)(lVar23 + lVar24))[1];
          uVar72 = *(undefined8 *)(lVar23 + lVar24);
          iVar14 = -(uint)(50.0 < fVar46);
          iVar8 = -(uint)(50.0 < fVar42);
          iVar9 = -(uint)(50.0 < fVar10);
          fVar44 = ((float)uVar72 + *(float *)(lVar22 + iVar28 + lVar24)) * fVar74 +
                   ABS(fVar29 + *(float *)(lVar26 + iVar28 + lVar24)) * fVar77;
          fVar46 = ((float)((ulong)uVar72 >> 0x20) + *(float *)(lVar22 + iVar30 + lVar24)) * fVar74
                   + ABS(fVar46 + *(float *)(lVar26 + iVar30 + lVar24)) * fVar77;
          fVar42 = ((float)uVar73 + *(float *)(lVar22 + auVar49._8_4_ + lVar24)) * fVar74 +
                   ABS(fVar42 + *(float *)(lVar26 + auVar49._8_4_ + lVar24)) * fVar77;
          fVar10 = ((float)((ulong)uVar73 >> 0x20) + *(float *)(lVar22 + auVar50._12_4_ + lVar24)) *
                   fVar74 + ABS(fVar10 + *(float *)(lVar26 + auVar50._12_4_ + lVar24)) * fVar77;
          auVar51._0_4_ = fVar44 * 0.5;
          auVar51._4_4_ = fVar46 * 0.5;
          auVar51._8_4_ = fVar42 * 0.5;
          auVar51._12_4_ = fVar10 * 0.5;
          auVar7[4] = SUB41(fVar46,0);
          auVar7._0_4_ = fVar44;
          auVar7[5] = (char)((uint)fVar46 >> 8);
          auVar7[6] = (char)((uint)fVar46 >> 0x10);
          auVar7[7] = (char)((uint)fVar46 >> 0x18);
          auVar7[8] = SUB41(fVar42,0);
          auVar7[9] = (char)((uint)fVar42 >> 8);
          auVar7[10] = (char)((uint)fVar42 >> 0x10);
          auVar7[0xb] = (char)((uint)fVar42 >> 0x18);
          auVar7[0xc] = SUB41(fVar10,0);
          auVar7[0xd] = (char)((uint)fVar10 >> 8);
          auVar7[0xe] = (char)((uint)fVar10 >> 0x10);
          auVar7[0xf] = (char)((uint)fVar10 >> 0x18);
          auVar12[4] = (char)iVar14;
          auVar12._0_4_ = -(uint)(50.0 < fVar29);
          auVar12[5] = (char)((uint)iVar14 >> 8);
          auVar12[6] = (char)((uint)iVar14 >> 0x10);
          auVar12[7] = (char)((uint)iVar14 >> 0x18);
          auVar12[8] = (char)iVar8;
          auVar12[9] = (char)((uint)iVar8 >> 8);
          auVar12[10] = (char)((uint)iVar8 >> 0x10);
          auVar12[0xb] = (char)((uint)iVar8 >> 0x18);
          auVar12[0xc] = (char)iVar9;
          auVar12[0xd] = (char)((uint)iVar9 >> 8);
          auVar12[0xe] = (char)((uint)iVar9 >> 0x10);
          auVar12[0xf] = (char)((uint)iVar9 >> 0x18);
          auVar51 = auVar51 ^ (auVar51 ^ auVar7) & ~auVar12;
          auVar52._0_4_ = auVar51._0_4_ * -0.5;
          auVar52._4_4_ = auVar51._4_4_ * -0.5;
          auVar52._8_4_ = auVar51._8_4_ * -0.5;
          auVar52._12_4_ = auVar51._12_4_ * -0.5;
          auVar38 = NEON_fmax(auVar52,auVar75,4);
          fVar29 = auVar76._0_4_ + auVar38._0_4_ * 0.0009765625;
          fVar42 = auVar76._4_4_ + auVar38._4_4_ * 0.0009765625;
          fVar44 = auVar76._8_4_ + auVar38._8_4_ * 0.0009765625;
          fVar46 = auVar76._12_4_ + auVar38._12_4_ * 0.0009765625;
          fVar29 = fVar29 * fVar29;
          fVar42 = fVar42 * fVar42;
          fVar44 = fVar44 * fVar44;
          fVar46 = fVar46 * fVar46;
          fVar29 = fVar29 * fVar29;
          fVar42 = fVar42 * fVar42;
          fVar44 = fVar44 * fVar44;
          fVar46 = fVar46 * fVar46;
          fVar29 = fVar29 * fVar29;
          fVar42 = fVar42 * fVar42;
          fVar44 = fVar44 * fVar44;
          fVar46 = fVar46 * fVar46;
          fVar29 = fVar29 * fVar29;
          fVar42 = fVar42 * fVar42;
          fVar44 = fVar44 * fVar44;
          fVar46 = fVar46 * fVar46;
          fVar29 = fVar29 * fVar29;
          fVar42 = fVar42 * fVar42;
          fVar44 = fVar44 * fVar44;
          fVar46 = fVar46 * fVar46;
          fVar29 = fVar29 * fVar29;
          fVar42 = fVar42 * fVar42;
          fVar44 = fVar44 * fVar44;
          fVar46 = fVar46 * fVar46;
          fVar29 = fVar29 * fVar29;
          fVar42 = fVar42 * fVar42;
          fVar44 = fVar44 * fVar44;
          fVar46 = fVar46 * fVar46;
          fVar29 = fVar29 * fVar29;
          fVar42 = fVar42 * fVar42;
          fVar44 = fVar44 * fVar44;
          fVar46 = fVar46 * fVar46;
          fVar29 = fVar29 * fVar29;
          fVar42 = fVar42 * fVar42;
          fVar44 = fVar44 * fVar44;
          fVar46 = fVar46 * fVar46;
          auVar53._0_4_ = fVar29 * fVar29;
          auVar53._4_4_ = fVar42 * fVar42;
          auVar53._8_4_ = fVar44 * fVar44;
          auVar53._12_4_ = fVar46 * fVar46;
          auVar38 = NEON_fmax(auVar53,ZEXT216(0),4);
          pbVar6 = (byte *)(lVar18 + lVar17 * uVar13 + lVar24);
          pbVar6[8] = bVar62 & auVar38[8];
          pbVar6[9] = bVar64 & auVar38[9];
          pbVar6[10] = bVar65 & auVar38[10];
          pbVar6[0xb] = bVar66 & auVar38[0xb];
          pbVar6[0xc] = bVar67 & auVar38[0xc];
          pbVar6[0xd] = bVar69 & auVar38[0xd];
          pbVar6[0xe] = bVar70 & auVar38[0xe];
          pbVar6[0xf] = bVar71 & auVar38[0xf];
          *pbVar6 = bVar47 & auVar38[0];
          pbVar6[1] = bVar54 & auVar38[1];
          pbVar6[2] = bVar55 & auVar38[2];
          pbVar6[3] = bVar56 & auVar38[3];
          pbVar6[4] = bVar57 & auVar38[4];
          pbVar6[5] = bVar59 & auVar38[5];
          pbVar6[6] = bVar60 & auVar38[6];
          pbVar6[7] = bVar61 & auVar38[7];
          iVar25 = iVar25 + 4;
          lVar15 = *(long *)(param_1 + 0x10);
          lVar24 = lVar24 + 0x10;
        } while (iVar25 < *(int *)(lVar15 + 0xc));
      }
      uVar13 = uVar13 + 1;
    } while (uVar13 != uVar3);
  }
  return;
}



/* Entry: 1095d5a0c; end: 1095d5c7f;  */

void FUN_1095d5a0c(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  long lStack_1e0;
  undefined8 uStack_1d8;
  undefined1 *puStack_1d0;
  undefined4 *puStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  int iStack_1a8;
  undefined8 uStack_1a0;
  undefined4 auStack_198 [2];
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined4 auStack_180 [2];
  undefined4 *puStack_178;
  undefined8 uStack_170;
  long lStack_168;
  long lStack_160;
  undefined8 uStack_158;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined1 auStack_d0 [128];
  
  uVar1 = **(undefined4 **)(param_2 + 0x40);
  uVar2 = (*(undefined4 **)(param_2 + 0x40))[1];
  uStack_150 = uVar2;
  uStack_14c = uVar1;
  FUN_1095d359c(auStack_d0,param_1,&uStack_150,5);
  uStack_1f0 = (undefined **)CONCAT44(uVar1,uVar2);
  FUN_1095d359c(&uStack_150,param_1,&uStack_1f0,5);
  if ((bRam00000001137330c0 & 1) == 0) {
    iVar3 = 0x137330c0;
    ___cxa_guard_acquire();
    if (iVar3 != 0) {
      uStack_1f0 = (undefined **)0x100000003;
      lStack_168 = -1;
      FUN_109b32bf8(0x1137330c8,0,&uStack_1f0,&lStack_168);
      ___cxa_atexit(&SUB_10567aa40,0x1137330c8,0x100000000);
      ___cxa_guard_release(0x1137330c0);
    }
  }
  uStack_158 = 0;
  lStack_168._0_4_ = 0x1010000;
  auStack_180[0] = 0x2010000;
  puStack_178 = (undefined4 *)auStack_d0;
  uStack_170 = 0;
  uStack_188 = 0;
  auStack_198[0] = 0x1010000;
  uStack_190 = 0x1137330c8;
  uStack_1a0 = 0xffffffffffffffff;
  uVar5 = 0x7fefffffffffffff;
  uVar4 = 0x7fefffffffffffff;
  uStack_1e8 = 0x7fefffffffffffff;
  uStack_1f0 = (undefined **)0x7fefffffffffffff;
  uStack_1d8 = 0x7fefffffffffffff;
  lStack_1e0 = 0x7fefffffffffffff;
  lStack_160 = param_2;
  FUN_109b33f48(&lStack_168,auStack_180,4,auStack_198,&uStack_1a0,1,0,&uStack_1f0,0x7fefffffffffffff
                ,0x7fefffffffffffff);
  uStack_158 = 0;
  lStack_168 = CONCAT44(lStack_168._4_4_,0x1010000);
  auStack_180[0] = 0x2010000;
  uStack_170 = 0;
  uStack_188 = 0;
  auStack_198[0] = 0x1010000;
  uStack_190 = 0x1137330c8;
  uStack_1a0 = 0xffffffffffffffff;
  uStack_1f0 = (undefined **)uVar4;
  uStack_1e8 = uVar5;
  lStack_1e0 = uVar4;
  uStack_1d8 = uVar5;
  puStack_178 = &uStack_150;
  lStack_160 = param_3;
  FUN_109b33f48(&lStack_168,auStack_180,4,auStack_198,&uStack_1a0,1,0,&uStack_1f0);
  uStack_1f0 = &PTR_FUN_110afec58;
  puStack_1d0 = auStack_d0;
  uStack_1b0 = NEON_fmov(0x3f800000,4);
  uStack_1e8 = CONCAT44(uStack_1e8._4_4_,uRam00000001132dfb70);
  iStack_1a8 = (int)((double)*(int *)(param_2 + 8) / (double)(int)uRam00000001132dfb70);
  lStack_168 = (ulong)uRam00000001132dfb70 << 0x20;
  lStack_1e0 = param_2;
  uStack_1d8 = param_3;
  puStack_1c8 = &uStack_150;
  uStack_1c0 = param_4;
  uStack_1b8 = param_5;
  func_0x000109aa87cc(0xbff0000000000000,&lStack_168,&uStack_1f0);
  FUN_1095d3858(&uStack_150);
  FUN_1095d3858(auStack_d0);
  return;
}



/* Entry: 1095d5c80; end: 1095d5dc3;  */

void FUN_1095d5c80(void)

{
  return;
}



/* Entry: 1095d5dc4; end: 1095d5e27;  */

void FUN_1095d5dc4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined **ppuStack_50;
  int iStack_48;
  long lStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  int iStack_20;
  undefined4 uStack_18;
  int iStack_14;
  
  ppuStack_50 = &PTR_FUN_110afec80;
  iStack_48 = iRam00000001132dfb70;
  iStack_20 = (int)((double)*(int *)(param_1 + 8) / (double)iRam00000001132dfb70);
  uStack_18 = 0;
  iStack_14 = iRam00000001132dfb70;
  lStack_40 = param_1;
  uStack_38 = param_2;
  uStack_30 = param_3;
  uStack_28 = param_4;
  func_0x000109aa87cc(0xbff0000000000000,&uStack_18,&ppuStack_50);
  return;
}



/* Entry: 1095d5e28; end: 1095d5f37;  */

void FUN_1095d5e28(void)

{
  return;
}



/* Entry: 1095d5f38; end: 1095d5f97;  */

void FUN_1095d5f38(undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined **ppuStack_40;
  int iStack_38;
  int iStack_34;
  long lStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined4 uStack_18;
  int iStack_14;
  
  ppuStack_40 = &PTR_FUN_110afeca8;
  iStack_34 = (int)((double)*(int *)(param_2 + 8) / (double)iRam00000001132dfb70);
  iStack_38 = iRam00000001132dfb70;
  uStack_18 = 0;
  iStack_14 = iRam00000001132dfb70;
  lStack_30 = param_2;
  uStack_28 = param_3;
  uStack_20 = param_1;
  func_0x000109aa87cc(0xbff0000000000000,&uStack_18,&ppuStack_40);
  return;
}



/* Entry: 1095d5f98; end: 1095d5fb3;  */

void FUN_1095d5f98(void)

{
  return;
}



/* Entry: 1095d5fb4; end: 1095d6527;  */

void FUN_1095d5fb4(long param_1,int *param_2)

{
  short sVar1;
  short sVar2;
  undefined1 (*pauVar3) [16];
  long lVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  uint uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  uint uVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  bool bVar18;
  ulong uVar19;
  float *pfVar20;
  long lVar21;
  long lVar22;
  long lVar23;
  int iVar24;
  long lVar25;
  uint uVar26;
  long lVar27;
  int iVar28;
  float *pfVar29;
  int iVar30;
  int iVar31;
  uint uVar32;
  uint uVar33;
  int iVar34;
  uint uVar35;
  int iVar36;
  uint uVar37;
  uint uVar40;
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  uint uVar38;
  undefined1 auVar44 [16];
  uint uVar39;
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  
  uVar33 = *(int *)(param_1 + 0xd8) * *param_2;
  lVar27 = *(long *)(param_1 + 8);
  uVar13 = *(uint *)(lVar27 + 8);
  uVar8 = uVar13;
  if ((int)uVar33 <= (int)uVar13) {
    uVar8 = uVar33;
  }
  uVar8 = uVar8 & ((int)uVar8 >> 0x1f ^ 0xffffffffU);
  uVar33 = param_2[1] * *(int *)(param_1 + 0xd8);
  if ((int)uVar33 <= (int)uVar13) {
    uVar13 = uVar33;
  }
  if ((*(byte *)(param_1 + 0xd0) & 1) == 0) {
    if ((int)uVar8 < (int)uVar13) {
      iVar31 = 0;
      lVar9 = **(long **)(lVar27 + 0x48);
      lVar6 = *(long *)(lVar27 + 0x10) + (*(long **)(lVar27 + 0x48))[1] * 2;
      lVar25 = *(long *)(param_1 + 0x20);
      lVar10 = **(long **)(param_1 + 0x58);
      lVar12 = (*(long **)(param_1 + 0x58))[1];
      lVar11 = **(long **)(param_1 + 0xb8);
      lVar7 = *(long *)(param_1 + 0x80) + (*(long **)(param_1 + 0xb8))[1] * 8;
      iVar14 = *(int *)(lVar27 + 0xc);
      uVar19 = (ulong)uVar8;
      do {
        uVar5 = uVar19 + 1;
        if (5 < iVar14) {
          uVar26 = (int)uVar19 - 1;
          uVar33 = uVar8;
          if ((int)uVar8 <= (int)uVar26) {
            uVar33 = uVar26;
          }
          pfVar20 = (float *)(lVar6 + lVar9 * (ulong)uVar33);
          iVar30 = (int)uVar5;
          if ((int)(uVar13 - 1) <= (int)uVar5) {
            iVar30 = uVar13 - 1;
          }
          lVar21 = lVar7 + lVar11 * iVar30;
          lVar22 = lVar7 + lVar11 * (ulong)uVar33;
          lVar23 = lVar7 + uVar19 * lVar11;
          lVar27 = lVar25 + lVar12 * 8 + uVar19 * lVar10;
          pfVar29 = (float *)(lVar6 + uVar19 * lVar9);
          iVar30 = 8;
          iVar36 = 2;
          iVar34 = iVar31;
          do {
            iVar31 = iVar34;
            if (*pfVar29 <= 0.0) {
              iVar31 = (int)(*pfVar29 * 4.0);
              uVar33 = iVar31 + 4;
              sVar1 = (short)uVar33;
              if (0 < iVar30 + sVar1) {
                uVar35 = 0;
                pauVar3 = (undefined1 (*) [16])(lVar27 + -2);
                uVar26 = 4;
                iVar24 = 1000000;
                iVar28 = 1000000;
                do {
                  sVar2 = (short)uVar33;
                  lVar4 = (-((ulong)(uVar33 >> 0xf) & 1) & 0xfffffffffffe0000 |
                          ((ulong)uVar33 & 0xffff) << 1) + (long)sVar2;
                  auVar41 = NEON_uabd(*pauVar3,*(undefined1 (*) [16])(lVar22 + -2 + lVar4),1);
                  auVar45._0_2_ = (ushort)auVar41[0] + (ushort)auVar41[8];
                  auVar45._2_2_ = (ushort)auVar41[1] + (ushort)auVar41[9];
                  auVar45._4_2_ = (ushort)auVar41[2] + (ushort)auVar41[10];
                  auVar45._6_2_ = (ushort)auVar41[3] + (ushort)auVar41[0xb];
                  auVar45._8_2_ = (ushort)auVar41[4] + (ushort)auVar41[0xc];
                  auVar45._10_2_ = (ushort)auVar41[5] + (ushort)auVar41[0xd];
                  auVar45._12_2_ = (ushort)auVar41[6] + (ushort)auVar41[0xe];
                  auVar45._14_2_ = (ushort)auVar41[7] + (ushort)auVar41[0xf];
                  uVar38 = NEON_uaddlv(auVar45,2);
                  auVar41 = NEON_uabd(*pauVar3,*(undefined1 (*) [16])(lVar23 + -2 + lVar4),1);
                  auVar46._0_2_ = (ushort)auVar41[0] + (ushort)auVar41[8];
                  auVar46._2_2_ = (ushort)auVar41[1] + (ushort)auVar41[9];
                  auVar46._4_2_ = (ushort)auVar41[2] + (ushort)auVar41[10];
                  auVar46._6_2_ = (ushort)auVar41[3] + (ushort)auVar41[0xb];
                  auVar46._8_2_ = (ushort)auVar41[4] + (ushort)auVar41[0xc];
                  auVar46._10_2_ = (ushort)auVar41[5] + (ushort)auVar41[0xd];
                  auVar46._12_2_ = (ushort)auVar41[6] + (ushort)auVar41[0xe];
                  auVar46._14_2_ = (ushort)auVar41[7] + (ushort)auVar41[0xf];
                  uVar32 = NEON_uaddlv(auVar46,2);
                  auVar41 = NEON_uabd(*pauVar3,*(undefined1 (*) [16])(lVar21 + -2 + lVar4),1);
                  auVar47._0_2_ = (ushort)auVar41[0] + (ushort)auVar41[8];
                  auVar47._2_2_ = (ushort)auVar41[1] + (ushort)auVar41[9];
                  auVar47._4_2_ = (ushort)auVar41[2] + (ushort)auVar41[10];
                  auVar47._6_2_ = (ushort)auVar41[3] + (ushort)auVar41[0xb];
                  auVar47._8_2_ = (ushort)auVar41[4] + (ushort)auVar41[0xc];
                  auVar47._10_2_ = (ushort)auVar41[5] + (ushort)auVar41[0xd];
                  auVar47._12_2_ = (ushort)auVar41[6] + (ushort)auVar41[0xe];
                  auVar47._14_2_ = (ushort)auVar41[7] + (ushort)auVar41[0xf];
                  uVar40 = NEON_uaddlv(auVar47,2);
                  if (uVar38 <= uVar32) {
                    uVar32 = uVar38;
                  }
                  if (uVar32 <= uVar40) {
                    uVar40 = uVar32;
                  }
                  uVar32 = -uVar26;
                  if (-1 < (int)uVar26) {
                    uVar32 = uVar26;
                  }
                  iVar16 = (int)sVar2 - (int)(short)iVar34;
                  iVar15 = -iVar16;
                  if (-1 < iVar16) {
                    iVar15 = iVar16;
                  }
                  iVar17 = (int)sVar2 - (int)(*pfVar20 * 4.0);
                  iVar16 = -iVar17;
                  if (-1 < iVar17) {
                    iVar16 = iVar17;
                  }
                  iVar15 = uVar40 + (iVar15 + uVar32 + iVar16) * 3;
                  uVar32 = uVar26;
                  if (iVar28 <= iVar15) {
                    iVar15 = iVar28;
                    iVar28 = iVar24;
                    uVar32 = uVar35;
                  }
                  uVar35 = uVar32;
                  iVar24 = iVar28;
                  if ((int)uVar26 < -3) break;
                  iVar16 = iVar30 + sVar1 + uVar26;
                  uVar26 = uVar26 - 1;
                  uVar33 = uVar33 - 1;
                  iVar28 = iVar15;
                } while (1 < iVar16 - 4U);
                if (iVar15 != 1000000) {
                  uVar33 = -uVar35;
                  if (-1 < (int)uVar35) {
                    uVar33 = uVar35;
                  }
                  iVar34 = uVar35 + iVar31;
                  if (((float)iVar15 < (float)iVar24 * 0.8 && uVar33 < 4) && iVar34 < 1) {
                    *pfVar29 = (float)iVar34 / 4.0;
                    iVar31 = iVar34;
                  }
                }
              }
            }
            pfVar29 = pfVar29 + 1;
            pfVar20 = pfVar20 + 1;
            lVar27 = lVar27 + 0xc;
            lVar23 = lVar23 + 0xc;
            lVar22 = lVar22 + 0xc;
            lVar21 = lVar21 + 0xc;
            iVar30 = iVar30 + 4;
            bVar18 = iVar36 != iVar14 + -4;
            iVar36 = iVar36 + 1;
            iVar34 = iVar31;
          } while (bVar18);
        }
        uVar19 = uVar5;
      } while (uVar5 != uVar13);
    }
  }
  else if ((int)uVar8 < (int)uVar13) {
    uVar33 = 0;
    lVar9 = **(long **)(lVar27 + 0x48);
    lVar6 = *(long *)(lVar27 + 0x10) + (*(long **)(lVar27 + 0x48))[1] * 2;
    lVar25 = *(long *)(param_1 + 0x20);
    lVar10 = **(long **)(param_1 + 0x58);
    lVar12 = (*(long **)(param_1 + 0x58))[1];
    lVar11 = **(long **)(param_1 + 0xb8);
    lVar7 = *(long *)(param_1 + 0x80) + (*(long **)(param_1 + 0xb8))[1] * 8;
    iVar14 = *(int *)(lVar27 + 0xc);
    uVar19 = (ulong)uVar8;
    do {
      uVar5 = uVar19 + 1;
      if (5 < iVar14) {
        uVar35 = (int)uVar19 - 1;
        uVar26 = uVar8;
        if ((int)uVar8 <= (int)uVar35) {
          uVar26 = uVar35;
        }
        pfVar20 = (float *)(lVar6 + lVar9 * (ulong)uVar26);
        iVar31 = (int)uVar5;
        if ((int)(uVar13 - 1) <= (int)uVar5) {
          iVar31 = uVar13 - 1;
        }
        lVar21 = lVar7 + lVar11 * iVar31;
        lVar22 = lVar7 + lVar11 * (ulong)uVar26;
        lVar23 = lVar7 + uVar19 * lVar11;
        lVar27 = lVar25 + lVar12 * 8 + uVar19 * lVar10;
        pfVar29 = (float *)(lVar6 + uVar19 * lVar9);
        iVar30 = 2;
        iVar31 = 8;
        do {
          if (0.0 <= *pfVar29) {
            iVar36 = 0;
            uVar32 = (uint)(*pfVar29 * 4.0);
            uVar26 = uVar32 - 4;
            pauVar3 = (undefined1 (*) [16])(lVar27 + -2);
            sVar1 = (short)uVar26;
            iVar34 = 1000000;
            iVar24 = 1000000;
            uVar35 = 0;
            do {
              uVar40 = uVar35;
              if (*(int *)(param_1 + 0x1c) + -5 < iVar31 + sVar1 + iVar36) break;
              uVar40 = iVar36 - 4;
              sVar2 = (short)uVar26;
              lVar4 = (-((ulong)(uVar26 >> 0xf) & 1) & 0xfffffffffffe0000 |
                      ((ulong)uVar26 & 0xffff) << 1) + (long)sVar2;
              auVar41 = NEON_uabd(*pauVar3,*(undefined1 (*) [16])(lVar22 + -2 + lVar4),1);
              auVar42._0_2_ = (ushort)auVar41[0] + (ushort)auVar41[8];
              auVar42._2_2_ = (ushort)auVar41[1] + (ushort)auVar41[9];
              auVar42._4_2_ = (ushort)auVar41[2] + (ushort)auVar41[10];
              auVar42._6_2_ = (ushort)auVar41[3] + (ushort)auVar41[0xb];
              auVar42._8_2_ = (ushort)auVar41[4] + (ushort)auVar41[0xc];
              auVar42._10_2_ = (ushort)auVar41[5] + (ushort)auVar41[0xd];
              auVar42._12_2_ = (ushort)auVar41[6] + (ushort)auVar41[0xe];
              auVar42._14_2_ = (ushort)auVar41[7] + (ushort)auVar41[0xf];
              uVar37 = NEON_uaddlv(auVar42,2);
              auVar41 = NEON_uabd(*pauVar3,*(undefined1 (*) [16])(lVar23 + -2 + lVar4),1);
              auVar43._0_2_ = (ushort)auVar41[0] + (ushort)auVar41[8];
              auVar43._2_2_ = (ushort)auVar41[1] + (ushort)auVar41[9];
              auVar43._4_2_ = (ushort)auVar41[2] + (ushort)auVar41[10];
              auVar43._6_2_ = (ushort)auVar41[3] + (ushort)auVar41[0xb];
              auVar43._8_2_ = (ushort)auVar41[4] + (ushort)auVar41[0xc];
              auVar43._10_2_ = (ushort)auVar41[5] + (ushort)auVar41[0xd];
              auVar43._12_2_ = (ushort)auVar41[6] + (ushort)auVar41[0xe];
              auVar43._14_2_ = (ushort)auVar41[7] + (ushort)auVar41[0xf];
              uVar38 = NEON_uaddlv(auVar43,2);
              auVar41 = NEON_uabd(*pauVar3,*(undefined1 (*) [16])(lVar21 + -2 + lVar4),1);
              auVar44._0_2_ = (ushort)auVar41[0] + (ushort)auVar41[8];
              auVar44._2_2_ = (ushort)auVar41[1] + (ushort)auVar41[9];
              auVar44._4_2_ = (ushort)auVar41[2] + (ushort)auVar41[10];
              auVar44._6_2_ = (ushort)auVar41[3] + (ushort)auVar41[0xb];
              auVar44._8_2_ = (ushort)auVar41[4] + (ushort)auVar41[0xc];
              auVar44._10_2_ = (ushort)auVar41[5] + (ushort)auVar41[0xd];
              auVar44._12_2_ = (ushort)auVar41[6] + (ushort)auVar41[0xe];
              auVar44._14_2_ = (ushort)auVar41[7] + (ushort)auVar41[0xf];
              uVar39 = NEON_uaddlv(auVar44,2);
              if (uVar37 <= uVar38) {
                uVar38 = uVar37;
              }
              if (uVar38 <= uVar39) {
                uVar39 = uVar38;
              }
              uVar38 = -uVar40;
              if (-1 < (int)uVar40) {
                uVar38 = uVar40;
              }
              iVar15 = (int)sVar2 - (int)(short)uVar33;
              iVar28 = -iVar15;
              if (-1 < iVar15) {
                iVar28 = iVar15;
              }
              iVar16 = (int)sVar2 - (int)(*pfVar20 * 4.0);
              iVar15 = -iVar16;
              if (-1 < iVar16) {
                iVar15 = iVar16;
              }
              iVar28 = uVar39 + (iVar28 + uVar38 + iVar15) * 3;
              iVar15 = iVar24;
              if (iVar24 <= iVar28) {
                uVar40 = uVar35;
                iVar15 = iVar34;
                iVar28 = iVar24;
              }
              iVar24 = iVar28;
              iVar34 = iVar15;
              uVar26 = uVar26 + 1;
              iVar36 = iVar36 + 1;
              uVar35 = uVar40;
            } while (iVar36 != 9);
            uVar33 = uVar32;
            if (iVar24 != 1000000) {
              uVar26 = -uVar40;
              if (-1 < (int)uVar40) {
                uVar26 = uVar40;
              }
              if (((float)iVar24 < (float)iVar34 * 0.8 && uVar26 < 4) &&
                 (uVar40 = uVar40 + uVar32, -1 < (int)uVar40)) {
                *pfVar29 = (float)uVar40 / 4.0;
                uVar33 = uVar40;
              }
            }
          }
          pfVar29 = pfVar29 + 1;
          pfVar20 = pfVar20 + 1;
          lVar27 = lVar27 + 0xc;
          lVar23 = lVar23 + 0xc;
          lVar22 = lVar22 + 0xc;
          lVar21 = lVar21 + 0xc;
          iVar31 = iVar31 + 4;
          bVar18 = iVar30 != iVar14 + -4;
          iVar30 = iVar30 + 1;
        } while (bVar18);
      }
      uVar19 = uVar5;
    } while (uVar5 != uVar13);
  }
  return;
}



/* Entry: 1095d6528; end: 1095d6bfb;  */

/* WARNING: Removing unreachable block (ram,0x0001095d6608) */
/* WARNING: Removing unreachable block (ram,0x0001095d660c) */
/* WARNING: Removing unreachable block (ram,0x0001095d6614) */
/* WARNING: Removing unreachable block (ram,0x0001095d661c) */
/* WARNING: Removing unreachable block (ram,0x0001095d6620) */
/* WARNING: Removing unreachable block (ram,0x0001095d669c) */
/* WARNING: Removing unreachable block (ram,0x0001095d66a0) */
/* WARNING: Removing unreachable block (ram,0x0001095d66a8) */
/* WARNING: Removing unreachable block (ram,0x0001095d66b0) */
/* WARNING: Removing unreachable block (ram,0x0001095d66b4) */
/* WARNING: Removing unreachable block (ram,0x0001095d66d4) */
/* WARNING: Removing unreachable block (ram,0x0001095d66dc) */
/* WARNING: Removing unreachable block (ram,0x0001095d66f0) */
/* WARNING: Removing unreachable block (ram,0x0001095d6640) */
/* WARNING: Removing unreachable block (ram,0x0001095d6648) */
/* WARNING: Removing unreachable block (ram,0x0001095d665c) */
/* WARNING: Removing unreachable block (ram,0x0001095d666c) */
/* WARNING: Removing unreachable block (ram,0x0001095d6700) */

void FUN_1095d6528(long param_1,long param_2,byte param_3,undefined4 *param_4,undefined4 *param_5)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  char cVar5;
  bool bVar6;
  int iVar7;
  undefined ***pppuVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  undefined8 **ppuVar13;
  undefined8 *puVar14;
  undefined4 *puVar15;
  undefined8 *puVar16;
  undefined8 *puVar17;
  long *plVar18;
  undefined4 *puVar19;
  undefined8 auStack_1f0 [2];
  char cStack_1d9;
  undefined4 uStack_1d8;
  int iStack_1d4;
  char cStack_1c1;
  undefined **ppuStack_1c0;
  long lStack_1b8;
  undefined4 uStack_1b0;
  int iStack_1ac;
  undefined4 uStack_1a8;
  undefined4 uStack_1a4;
  undefined4 uStack_1a0;
  undefined4 uStack_19c;
  undefined4 uStack_198;
  undefined4 uStack_194;
  undefined4 uStack_190;
  undefined4 uStack_18c;
  undefined4 uStack_188;
  undefined4 uStack_184;
  undefined4 uStack_180;
  undefined4 uStack_17c;
  long lStack_178;
  undefined4 *puStack_170;
  undefined8 *puStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined4 uStack_150;
  int iStack_14c;
  undefined4 uStack_148;
  undefined4 uStack_144;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined4 uStack_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined4 uStack_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  long lStack_118;
  undefined4 *puStack_110;
  undefined8 *puStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  ulong uStack_80;
  
  __ZNSt3__16chrono12steady_clock3nowEv();
  iVar7 = iRam00000001132dfb70;
  ppuStack_1c0 = &PTR_FUN_110afed60;
  uStack_1b0 = 0x42ff0000;
  puVar19 = &uStack_1a8;
  uStack_1a4 = 0;
  uStack_1a0 = 0;
  iStack_1ac = 0;
  uStack_1a8 = 0;
  uStack_194 = 0;
  uStack_190 = 0;
  uStack_19c = 0;
  uStack_198 = 0;
  uStack_184 = 0;
  uStack_18c = 0;
  uStack_188 = 0;
  lStack_178 = 0;
  uStack_180 = 0;
  uStack_17c = 0;
  puStack_168 = &uStack_160;
  uStack_160 = 0;
  uStack_158 = 0;
  uStack_150 = 0x42ff0000;
  uStack_144 = 0;
  uStack_140 = 0;
  iStack_14c = 0;
  uStack_148 = 0;
  uStack_134 = 0;
  uStack_130 = 0;
  uStack_13c = 0;
  uStack_138 = 0;
  uStack_124 = 0;
  uStack_12c = 0;
  uStack_128 = 0;
  lStack_118 = 0;
  uStack_120 = 0;
  uStack_11c = 0;
  puStack_110 = &uStack_148;
  puStack_108 = &uStack_100;
  uStack_100 = 0;
  uStack_f8 = 0;
  uStack_f0 = CONCAT71(uStack_f0._1_7_,param_3) ^ 1;
  lStack_1b8 = param_2;
  puStack_170 = puVar19;
  if (((param_3 ^ 1) & 1) == 0) {
    if (&uStack_1b0 != param_4) {
      if (*(long *)(param_4 + 0xe) != 0) {
        piVar1 = (int *)(*(long *)(param_4 + 0xe) + 0x14);
        do {
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar6) {
            *piVar1 = *piVar1 + 1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
      }
      lStack_178 = 0;
      uStack_198 = 0;
      uStack_194 = 0;
      uStack_1a0 = 0;
      uStack_19c = 0;
      uStack_188 = 0;
      uStack_184 = 0;
      uStack_190 = 0;
      uStack_18c = 0;
      uStack_1b0 = *param_4;
      if ((int)param_4[1] < 3) {
        uStack_1a8 = (undefined4)*(undefined8 *)(param_4 + 2);
        uStack_1a4 = (undefined4)((ulong)*(undefined8 *)(param_4 + 2) >> 0x20);
        uStack_160 = **(undefined8 **)(param_4 + 0x12);
        uStack_158 = (*(undefined8 **)(param_4 + 0x12))[1];
        iStack_1ac = param_4[1];
      }
      else {
        func_0x000109a84868(&uStack_1b0,param_4);
      }
      uStack_198 = (undefined4)*(undefined8 *)(param_4 + 6);
      uStack_194 = (undefined4)((ulong)*(undefined8 *)(param_4 + 6) >> 0x20);
      uStack_1a0 = (undefined4)*(undefined8 *)(param_4 + 4);
      uStack_19c = (undefined4)((ulong)*(undefined8 *)(param_4 + 4) >> 0x20);
      uStack_188 = (undefined4)*(undefined8 *)(param_4 + 10);
      uStack_184 = (undefined4)((ulong)*(undefined8 *)(param_4 + 10) >> 0x20);
      uStack_190 = (undefined4)*(undefined8 *)(param_4 + 8);
      uStack_18c = (undefined4)((ulong)*(undefined8 *)(param_4 + 8) >> 0x20);
      lStack_178 = *(long *)(param_4 + 0xe);
      uStack_180 = (undefined4)*(undefined8 *)(param_4 + 0xc);
      uStack_17c = (undefined4)((ulong)*(undefined8 *)(param_4 + 0xc) >> 0x20);
    }
    if (&uStack_150 == param_5) goto LAB_1095d69ec;
    if (*(long *)(param_5 + 0xe) != 0) {
      piVar1 = (int *)(*(long *)(param_5 + 0xe) + 0x14);
      do {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar6) {
          *piVar1 = *piVar1 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
    }
    if (lStack_118 != 0) {
      piVar1 = (int *)(lStack_118 + 0x14);
      do {
        iVar2 = *piVar1;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar6) {
          *piVar1 = iVar2 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (iVar2 + -1 == 0) {
        func_0x000109a848d4(&uStack_150);
      }
    }
    plVar18 = &lStack_118;
    lStack_118 = 0;
    puVar17 = (undefined8 *)&uStack_140;
    uStack_138 = 0;
    uStack_134 = 0;
    uStack_140 = 0;
    uStack_13c = 0;
    uStack_128 = 0;
    uStack_124 = 0;
    uStack_130 = 0;
    uStack_12c = 0;
    if (iStack_14c < 1) {
      uStack_150 = *param_5;
LAB_1095d68fc:
      if ((int)param_5[1] < 3) {
        ppuVar13 = &puStack_108;
        puVar15 = &uStack_144;
        iStack_14c = param_5[1];
        lVar9 = 0xa0;
        lVar10 = 0x98;
        lVar11 = 0x90;
        lVar12 = 0x88;
        puVar19 = &uStack_148;
        goto LAB_1095d697c;
      }
    }
    else {
      lVar9 = 0;
      do {
        puStack_110[lVar9] = 0;
        lVar9 = lVar9 + 1;
      } while (lVar9 < iStack_14c);
      uStack_150 = *param_5;
      if (iStack_14c < 3) goto LAB_1095d68fc;
    }
    func_0x000109a84868(&uStack_150,param_5);
    lVar9 = 0xa0;
    lVar10 = 0x98;
    lVar11 = 0x90;
    lVar12 = 0x88;
  }
  else {
    if (&uStack_150 != param_4) {
      if (*(long *)(param_4 + 0xe) != 0) {
        piVar1 = (int *)(*(long *)(param_4 + 0xe) + 0x14);
        do {
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar6) {
            *piVar1 = *piVar1 + 1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
      }
      lStack_118 = 0;
      uStack_138 = 0;
      uStack_134 = 0;
      uStack_140 = 0;
      uStack_13c = 0;
      uStack_128 = 0;
      uStack_124 = 0;
      uStack_130 = 0;
      uStack_12c = 0;
      uStack_150 = *param_4;
      if ((int)param_4[1] < 3) {
        iStack_14c = param_4[1];
        uStack_148 = (undefined4)*(undefined8 *)(param_4 + 2);
        uStack_144 = (undefined4)((ulong)*(undefined8 *)(param_4 + 2) >> 0x20);
        uStack_100 = **(undefined8 **)(param_4 + 0x12);
        uStack_f8 = (*(undefined8 **)(param_4 + 0x12))[1];
      }
      else {
        func_0x000109a84868(&uStack_150,param_4);
      }
      uStack_138 = (undefined4)*(undefined8 *)(param_4 + 6);
      uStack_134 = (undefined4)((ulong)*(undefined8 *)(param_4 + 6) >> 0x20);
      uStack_140 = (undefined4)*(undefined8 *)(param_4 + 4);
      uStack_13c = (undefined4)((ulong)*(undefined8 *)(param_4 + 4) >> 0x20);
      uStack_128 = (undefined4)*(undefined8 *)(param_4 + 10);
      uStack_124 = (undefined4)((ulong)*(undefined8 *)(param_4 + 10) >> 0x20);
      uStack_130 = (undefined4)*(undefined8 *)(param_4 + 8);
      uStack_12c = (undefined4)((ulong)*(undefined8 *)(param_4 + 8) >> 0x20);
      lStack_118 = *(long *)(param_4 + 0xe);
      uStack_120 = (undefined4)*(undefined8 *)(param_4 + 0xc);
      uStack_11c = (undefined4)((ulong)*(undefined8 *)(param_4 + 0xc) >> 0x20);
    }
    if (&uStack_1b0 == param_5) goto LAB_1095d69ec;
    if (*(long *)(param_5 + 0xe) != 0) {
      piVar1 = (int *)(*(long *)(param_5 + 0xe) + 0x14);
      do {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar6) {
          *piVar1 = *piVar1 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
    }
    if (lStack_178 != 0) {
      piVar1 = (int *)(lStack_178 + 0x14);
      do {
        iVar2 = *piVar1;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar6) {
          *piVar1 = iVar2 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (iVar2 + -1 == 0) {
        func_0x000109a848d4(&uStack_1b0);
      }
    }
    plVar18 = &lStack_178;
    lStack_178 = 0;
    puVar17 = (undefined8 *)&uStack_1a0;
    uStack_198 = 0;
    uStack_194 = 0;
    uStack_1a0 = 0;
    uStack_19c = 0;
    uStack_188 = 0;
    uStack_184 = 0;
    uStack_190 = 0;
    uStack_18c = 0;
    if (iStack_1ac < 1) {
      uStack_1b0 = *param_5;
LAB_1095d6950:
      if (2 < (int)param_5[1]) goto LAB_1095d69a4;
      ppuVar13 = &puStack_168;
      puVar15 = &uStack_1a4;
      lVar9 = 0x40;
      lVar10 = 0x38;
      lVar11 = 0x30;
      lVar12 = 0x28;
      iStack_1ac = param_5[1];
LAB_1095d697c:
      uVar3 = param_5[3];
      *puVar19 = param_5[2];
      *puVar15 = uVar3;
      puVar16 = *(undefined8 **)(param_5 + 0x12);
      puVar14 = *ppuVar13;
      *puVar14 = *puVar16;
      puVar14[1] = puVar16[1];
    }
    else {
      lVar9 = 0;
      do {
        puStack_170[lVar9] = 0;
        lVar9 = lVar9 + 1;
      } while (lVar9 < iStack_1ac);
      uStack_1b0 = *param_5;
      if (iStack_1ac < 3) goto LAB_1095d6950;
LAB_1095d69a4:
      func_0x000109a84868(&uStack_1b0,param_5);
      lVar9 = 0x40;
      lVar10 = 0x38;
      lVar11 = 0x30;
      lVar12 = 0x28;
    }
  }
  *puVar17 = *(undefined8 *)(param_5 + 4);
  uVar4 = *(undefined8 *)(param_5 + 8);
  *(undefined8 *)((long)&ppuStack_1c0 + lVar12) = *(undefined8 *)(param_5 + 6);
  *(undefined8 *)((long)&ppuStack_1c0 + lVar11) = uVar4;
  uVar4 = *(undefined8 *)(param_5 + 0xc);
  *(undefined8 *)((long)&ppuStack_1c0 + lVar10) = *(undefined8 *)(param_5 + 10);
  *(undefined8 *)((long)&ppuStack_1c0 + lVar9) = uVar4;
  *plVar18 = *(long *)(param_5 + 0xe);
LAB_1095d69ec:
  uStack_f0 = CONCAT44(iVar7,(undefined4)uStack_f0);
  uStack_e8 = CONCAT44(uStack_e8._4_4_,(int)((double)*(int *)(lStack_1b8 + 8) / (double)iVar7));
  uStack_1d8 = 0;
  iStack_1d4 = iRam00000001132dfb70;
  func_0x000109aa87cc(0xbff0000000000000,&uStack_1d8,&ppuStack_1c0);
  pppuVar8 = &ppuStack_1c0;
  FUN_1095d6c14(pppuVar8);
  __ZNSt3__16chrono12steady_clock3nowEv();
  if (4 < iRam00000001132dfb08) {
    uStack_80 = 0;
    uStack_98 = 0;
    uStack_a0 = 0;
    uStack_88 = 0;
    uStack_90 = 0;
    uStack_b8 = 0;
    uStack_c0 = 0;
    uStack_a8 = 0;
    uStack_b0 = 0;
    uStack_d8 = 0;
    uStack_e0 = 0;
    uStack_c8 = 0;
    uStack_d0 = 0;
    uStack_f8 = 0;
    uStack_100 = 0;
    uStack_e8 = 0;
    uStack_f0 = 0;
    lStack_118 = 0;
    uStack_120 = 0;
    uStack_11c = 0;
    puStack_108 = (undefined8 *)0x0;
    puStack_110 = (undefined4 *)0x0;
    uStack_138 = 0;
    uStack_134 = 0;
    uStack_140 = 0;
    uStack_13c = 0;
    uStack_128 = 0;
    uStack_124 = 0;
    uStack_130 = 0;
    uStack_12c = 0;
    uStack_158 = 0;
    uStack_160 = 0;
    uStack_148 = 0;
    uStack_144 = 0;
    uStack_150 = 0;
    iStack_14c = 0;
    lStack_178 = 0;
    uStack_180 = 0;
    uStack_17c = 0;
    puStack_168 = (undefined8 *)0x0;
    puStack_170 = (undefined4 *)0x0;
    uStack_198 = 0;
    uStack_194 = 0;
    uStack_1a0 = 0;
    uStack_19c = 0;
    uStack_188 = 0;
    uStack_184 = 0;
    uStack_190 = 0;
    uStack_18c = 0;
    lStack_1b8 = 0;
    ppuStack_1c0 = (undefined **)0x0;
    uStack_1a8 = 0;
    uStack_1a4 = 0;
    uStack_1b0 = 0;
    iStack_1ac = 0;
    FUN_10926db08(&ppuStack_1c0);
    uStack_b8 = CONCAT44(uStack_b8._4_4_,3);
    uStack_a8 = 0;
    uStack_b0 = 0;
    uStack_98 = 0;
    uStack_a0 = 0;
    uStack_88 = 0;
    uStack_90 = 0;
    uStack_80 = uStack_80 & 0xffffffff00000000;
    func_0x000107c31940(&uStack_1d8,&UNK_10f5761e9);
    func_0x000107c31940(auStack_1f0,&UNK_10f57626a);
    FUN_109671348(&ppuStack_1c0,5,&uStack_1d8,auStack_1f0,0xf6);
    FUN_1092b4db8();
    FUN_1092b4db8();
    __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEf
              ((float)(int)((float)(((long)pppuVar8 - param_1) / 1000) / 10.0) / 100.0);
    FUN_1092b4db8();
    if (cStack_1d9 < '\0') {
      __ZdlPv(auStack_1f0[0]);
    }
    if (cStack_1c1 < '\0') {
      __ZdlPv(CONCAT44(iStack_1d4,uStack_1d8));
    }
    FUN_109671170(&ppuStack_1c0);
  }
  return;
}



/* Entry: 1095d6bfc; end: 1095d6bff;  */

undefined8 * FUN_1095d6bfc(undefined8 *param_1)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  undefined8 *puVar6;
  long lVar7;
  
  *param_1 = &PTR_FUN_110afed60;
  if (param_1[0x15] != 0) {
    piVar1 = (int *)(param_1[0x15] + 0x14);
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
      func_0x000109a848d4(param_1 + 0xe);
    }
  }
  param_1[0x15] = 0;
  param_1[0x11] = 0;
  param_1[0x10] = 0;
  param_1[0x13] = 0;
  param_1[0x12] = 0;
  if (0 < *(int *)((long)param_1 + 0x74)) {
    lVar5 = 0;
    lVar7 = param_1[0x16];
    do {
      *(undefined4 *)(lVar7 + lVar5 * 4) = 0;
      lVar5 = lVar5 + 1;
    } while (lVar5 < *(int *)((long)param_1 + 0x74));
  }
  puVar6 = (undefined8 *)param_1[0x17];
  if (puVar6 != param_1 + 0x18 && puVar6 != (undefined8 *)0x0) {
    _free(puVar6[-1]);
  }
  if (param_1[9] != 0) {
    piVar1 = (int *)(param_1[9] + 0x14);
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
      func_0x000109a848d4(param_1 + 2);
    }
  }
  param_1[9] = 0;
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[7] = 0;
  param_1[6] = 0;
  if (0 < *(int *)((long)param_1 + 0x14)) {
    lVar5 = 0;
    lVar7 = param_1[10];
    do {
      *(undefined4 *)(lVar7 + lVar5 * 4) = 0;
      lVar5 = lVar5 + 1;
    } while (lVar5 < *(int *)((long)param_1 + 0x14));
  }
  puVar6 = (undefined8 *)param_1[0xb];
  if (puVar6 != param_1 + 0xc && puVar6 != (undefined8 *)0x0) {
    _free(puVar6[-1]);
  }
  return param_1;
}



/* Entry: 1095d6c00; end: 1095d6c13;  */

void FUN_1095d6c00(void)

{
  FUN_1095d6c14();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1095d6c14; end: 1095d6d37;  */

undefined8 * FUN_1095d6c14(undefined8 *param_1)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  undefined8 *puVar6;
  long lVar7;
  
  *param_1 = &PTR_FUN_110afed60;
  if (param_1[0x15] != 0) {
    piVar1 = (int *)(param_1[0x15] + 0x14);
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
      func_0x000109a848d4(param_1 + 0xe);
    }
  }
  param_1[0x15] = 0;
  param_1[0x11] = 0;
  param_1[0x10] = 0;
  param_1[0x13] = 0;
  param_1[0x12] = 0;
  if (0 < *(int *)((long)param_1 + 0x74)) {
    lVar5 = 0;
    lVar7 = param_1[0x16];
    do {
      *(undefined4 *)(lVar7 + lVar5 * 4) = 0;
      lVar5 = lVar5 + 1;
    } while (lVar5 < *(int *)((long)param_1 + 0x74));
  }
  puVar6 = (undefined8 *)param_1[0x17];
  if (puVar6 != param_1 + 0x18 && puVar6 != (undefined8 *)0x0) {
    _free(puVar6[-1]);
  }
  if (param_1[9] != 0) {
    piVar1 = (int *)(param_1[9] + 0x14);
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
      func_0x000109a848d4(param_1 + 2);
    }
  }
  param_1[9] = 0;
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[7] = 0;
  param_1[6] = 0;
  if (0 < *(int *)((long)param_1 + 0x14)) {
    lVar5 = 0;
    lVar7 = param_1[10];
    do {
      *(undefined4 *)(lVar7 + lVar5 * 4) = 0;
      lVar5 = lVar5 + 1;
    } while (lVar5 < *(int *)((long)param_1 + 0x14));
  }
  puVar6 = (undefined8 *)param_1[0xb];
  if (puVar6 != param_1 + 0xc && puVar6 != (undefined8 *)0x0) {
    _free(puVar6[-1]);
  }
  return param_1;
}


