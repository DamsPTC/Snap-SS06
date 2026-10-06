/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10acff758; end: 10acffb27;  */

void FUN_10acff758(long *param_1,long param_2,long param_3)

{
  ulong uVar1;
  code *pcVar2;
  long lVar3;
  long lVar4;
  uint uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  long *plVar9;
  long *plVar10;
  ulong uVar11;
  long *plVar12;
  long *plVar13;
  ulong uVar14;
  ulong uVar15;
  ulong unaff_x24;
  
  uVar5 = (uint)((ulong)param_2 >> 0x20);
  uVar8 = ((ulong)(uint)((int)param_2 << 3) + 8 ^ (ulong)uVar5) * -0x622015f714c7d297;
  uVar8 = ((ulong)uVar5 ^ uVar8 >> 0x2f ^ uVar8) * -0x622015f714c7d297;
  uVar15 = (uVar8 ^ uVar8 >> 0x2f) * -0x622015f714c7d297;
  uVar8 = param_1[1];
  if (uVar8 != 0) {
    uVar6 = uVar8 - 1;
    if ((uVar8 & uVar6) == 0) {
      unaff_x24 = uVar6 & uVar15;
    }
    else {
      unaff_x24 = uVar15;
      if (uVar8 <= uVar15) {
        uVar11 = 0;
        if (uVar8 != 0) {
          uVar11 = uVar15 / uVar8;
        }
        unaff_x24 = uVar15 - uVar11 * uVar8;
      }
    }
    plVar9 = *(long **)(*param_1 + unaff_x24 * 8);
    if (plVar9 != (long *)0x0) {
      do {
        while( true ) {
          plVar9 = (long *)*plVar9;
          if (plVar9 == (long *)0x0) goto LAB_10acff838;
          uVar11 = plVar9[1];
          if (uVar11 != uVar15) break;
          if (plVar9[2] == param_2) {
            return;
          }
        }
        if ((uVar8 & uVar6) == 0) {
          uVar11 = uVar11 & uVar6;
        }
        else if (uVar8 <= uVar11) {
          uVar7 = 0;
          if (uVar8 != 0) {
            uVar7 = uVar11 / uVar8;
          }
          uVar11 = uVar11 - uVar7 * uVar8;
        }
      } while (uVar11 == unaff_x24);
    }
  }
LAB_10acff838:
  plVar9 = (long *)0x18;
  __Znwm();
  *plVar9 = 0;
  plVar9[1] = uVar15;
  plVar9[2] = param_3;
  if ((uVar8 == 0) || (*(float *)(param_1 + 4) * (float)uVar8 < (float)(param_1[3] + 1))) {
    uVar6 = 1;
    if (2 < uVar8) {
      uVar6 = (ulong)((uVar8 & uVar8 - 1) != 0);
    }
    uVar6 = uVar6 | uVar8 << 1;
    uVar11 = (ulong)((float)(param_1[3] + 1) / *(float *)(param_1 + 4));
    if (uVar6 <= uVar11) {
      uVar6 = uVar11;
    }
    if (uVar6 - 1 == 0) {
      uVar6 = 2;
    }
    else if ((uVar6 & uVar6 - 1) != 0) {
      __ZNSt3__112__next_primeEm();
      uVar8 = param_1[1];
    }
    if (uVar8 < uVar6) {
LAB_10acff8d0:
      if (uVar6 >> 0x3d != 0) {
        func_0x000109ffded8();
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x10acffb14);
        (*pcVar2)();
      }
      lVar3 = uVar6 << 3;
      __Znwm();
      lVar4 = *param_1;
      *param_1 = lVar3;
      if (lVar4 != 0) {
        __ZdlPv();
      }
      uVar8 = 0;
      param_1[1] = uVar6;
      do {
        *(undefined8 *)(*param_1 + uVar8 * 8) = 0;
        uVar8 = uVar8 + 1;
      } while (uVar6 != uVar8);
      plVar10 = (long *)param_1[2];
      uVar8 = uVar6;
      if (plVar10 != (long *)0x0) {
        uVar11 = plVar10[1];
        uVar7 = uVar6 - 1;
        if ((uVar6 & uVar7) == 0) {
          uVar11 = uVar11 & uVar7;
        }
        else if (uVar6 <= uVar11) {
          uVar14 = 0;
          if (uVar6 != 0) {
            uVar14 = uVar11 / uVar6;
          }
          uVar11 = uVar11 - uVar14 * uVar6;
        }
        *(long **)(*param_1 + uVar11 * 8) = param_1 + 2;
        plVar12 = (long *)*plVar10;
        while (plVar12 != (long *)0x0) {
          uVar14 = plVar12[1];
          if ((uVar6 & uVar7) == 0) {
            uVar14 = uVar14 & uVar7;
          }
          else if (uVar6 <= uVar14) {
            uVar1 = 0;
            if (uVar6 != 0) {
              uVar1 = uVar14 / uVar6;
            }
            uVar14 = uVar14 - uVar1 * uVar6;
          }
          plVar13 = plVar12;
          if (uVar14 != uVar11) {
            lVar3 = *param_1;
            if (*(long *)(lVar3 + uVar14 * 8) == 0) {
              *(long **)(lVar3 + uVar14 * 8) = plVar10;
              uVar11 = uVar14;
            }
            else {
              *plVar10 = *plVar12;
              *plVar12 = **(undefined8 **)(lVar3 + uVar14 * 8);
              **(long **)(lVar3 + uVar14 * 8) = (long)plVar12;
              plVar13 = plVar10;
            }
          }
          plVar10 = plVar13;
          plVar12 = (long *)*plVar13;
        }
      }
    }
    else if (uVar6 < uVar8) {
      uVar11 = (ulong)((float)(ulong)param_1[3] / *(float *)(param_1 + 4));
      if ((uVar8 < 3) || ((uVar8 & uVar8 - 1) != 0)) {
        __ZNSt3__112__next_primeEm();
      }
      else if (1 < uVar11) {
        uVar11 = 1L << (-LZCOUNT(uVar11 - 1) & 0x3fU);
      }
      if (uVar6 <= uVar11) {
        uVar6 = uVar11;
      }
      if (uVar6 < uVar8) {
        if (uVar6 != 0) goto LAB_10acff8d0;
        lVar3 = *param_1;
        *param_1 = 0;
        if (lVar3 != 0) {
          __ZdlPv();
        }
        param_1[1] = 0;
        uVar8 = 0;
      }
      else {
        uVar8 = param_1[1];
      }
    }
    if ((uVar8 & uVar8 - 1) == 0) {
      unaff_x24 = uVar8 - 1 & uVar15;
    }
    else {
      unaff_x24 = uVar15;
      if (uVar8 <= uVar15) {
        uVar6 = 0;
        if (uVar8 != 0) {
          uVar6 = uVar15 / uVar8;
        }
        unaff_x24 = uVar15 - uVar6 * uVar8;
      }
    }
  }
  lVar3 = *param_1;
  plVar10 = *(long **)(lVar3 + unaff_x24 * 8);
  if (plVar10 == (long *)0x0) {
    plVar10 = param_1 + 2;
    *plVar9 = *plVar10;
    *plVar10 = (long)plVar9;
    *(long **)(lVar3 + unaff_x24 * 8) = plVar10;
    if (*plVar9 == 0) goto LAB_10acffab0;
    uVar15 = *(ulong *)(*plVar9 + 8);
    if ((uVar8 & uVar8 - 1) == 0) {
      uVar15 = uVar15 & uVar8 - 1;
    }
    else if (uVar8 <= uVar15) {
      uVar6 = 0;
      if (uVar8 != 0) {
        uVar6 = uVar15 / uVar8;
      }
      uVar15 = uVar15 - uVar6 * uVar8;
    }
    plVar10 = (long *)(*param_1 + uVar15 * 8);
  }
  else {
    *plVar9 = *plVar10;
  }
  *plVar10 = (long)plVar9;
LAB_10acffab0:
  param_1[3] = param_1[3] + 1;
  return;
}



/* Entry: 10acffb28; end: 10acfff0f;  */

long * FUN_10acffb28(long *param_1,long param_2,long *param_3)

{
  ulong uVar1;
  code *pcVar2;
  long lVar3;
  long lVar4;
  uint uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  long *plVar9;
  ulong uVar10;
  long *plVar11;
  long *plVar12;
  long *plVar13;
  ulong uVar14;
  ulong uVar15;
  ulong unaff_x24;
  
  uVar5 = (uint)((ulong)param_2 >> 0x20);
  uVar8 = ((ulong)(uint)((int)param_2 << 3) + 8 ^ (ulong)uVar5) * -0x622015f714c7d297;
  uVar8 = ((ulong)uVar5 ^ uVar8 >> 0x2f ^ uVar8) * -0x622015f714c7d297;
  uVar15 = (uVar8 ^ uVar8 >> 0x2f) * -0x622015f714c7d297;
  uVar8 = param_1[1];
  if (uVar8 != 0) {
    uVar6 = uVar8 - 1;
    if ((uVar8 & uVar6) == 0) {
      unaff_x24 = uVar6 & uVar15;
    }
    else {
      unaff_x24 = uVar15;
      if (uVar8 <= uVar15) {
        uVar10 = 0;
        if (uVar8 != 0) {
          uVar10 = uVar15 / uVar8;
        }
        unaff_x24 = uVar15 - uVar10 * uVar8;
      }
    }
    plVar9 = *(long **)(*param_1 + unaff_x24 * 8);
    if (plVar9 != (long *)0x0) {
      for (plVar9 = (long *)*plVar9; plVar9 != (long *)0x0; plVar9 = (long *)*plVar9) {
        uVar10 = plVar9[1];
        if (uVar10 == uVar15) {
          if (plVar9[2] == param_2) {
            return plVar9;
          }
        }
        else {
          if ((uVar8 & uVar6) == 0) {
            uVar10 = uVar10 & uVar6;
          }
          else if (uVar8 <= uVar10) {
            uVar7 = 0;
            if (uVar8 != 0) {
              uVar7 = uVar10 / uVar8;
            }
            uVar10 = uVar10 - uVar7 * uVar8;
          }
          if (uVar10 != unaff_x24) break;
        }
      }
    }
  }
  plVar9 = (long *)0x30;
  __Znwm();
  *plVar9 = 0;
  plVar9[1] = uVar15;
  plVar9[2] = *param_3;
  plVar9[3] = 0;
  plVar9[4] = 0;
  plVar9[5] = 0;
  if ((uVar8 == 0) || (*(float *)(param_1 + 4) * (float)uVar8 < (float)(param_1[3] + 1))) {
    uVar6 = 1;
    if (2 < uVar8) {
      uVar6 = (ulong)((uVar8 & uVar8 - 1) != 0);
    }
    uVar6 = uVar6 | uVar8 << 1;
    uVar10 = (ulong)((float)(param_1[3] + 1) / *(float *)(param_1 + 4));
    if (uVar6 <= uVar10) {
      uVar6 = uVar10;
    }
    if (uVar6 - 1 == 0) {
      uVar6 = 2;
    }
    else if ((uVar6 & uVar6 - 1) != 0) {
      __ZNSt3__112__next_primeEm();
      uVar8 = param_1[1];
    }
    if (uVar8 < uVar6) {
LAB_10acffcb0:
      if (uVar6 >> 0x3d != 0) {
        func_0x000109ffded8();
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x10acffef8);
        (*pcVar2)();
      }
      lVar3 = uVar6 << 3;
      __Znwm();
      lVar4 = *param_1;
      *param_1 = lVar3;
      if (lVar4 != 0) {
        __ZdlPv();
      }
      uVar8 = 0;
      param_1[1] = uVar6;
      do {
        *(undefined8 *)(*param_1 + uVar8 * 8) = 0;
        uVar8 = uVar8 + 1;
      } while (uVar6 != uVar8);
      plVar11 = (long *)param_1[2];
      uVar8 = uVar6;
      if (plVar11 != (long *)0x0) {
        uVar10 = plVar11[1];
        uVar7 = uVar6 - 1;
        if ((uVar6 & uVar7) == 0) {
          uVar10 = uVar10 & uVar7;
        }
        else if (uVar6 <= uVar10) {
          uVar14 = 0;
          if (uVar6 != 0) {
            uVar14 = uVar10 / uVar6;
          }
          uVar10 = uVar10 - uVar14 * uVar6;
        }
        *(long **)(*param_1 + uVar10 * 8) = param_1 + 2;
        plVar12 = (long *)*plVar11;
        while (plVar12 != (long *)0x0) {
          uVar14 = plVar12[1];
          if ((uVar6 & uVar7) == 0) {
            uVar14 = uVar14 & uVar7;
          }
          else if (uVar6 <= uVar14) {
            uVar1 = 0;
            if (uVar6 != 0) {
              uVar1 = uVar14 / uVar6;
            }
            uVar14 = uVar14 - uVar1 * uVar6;
          }
          plVar13 = plVar12;
          if (uVar14 != uVar10) {
            lVar3 = *param_1;
            if (*(long *)(lVar3 + uVar14 * 8) == 0) {
              *(long **)(lVar3 + uVar14 * 8) = plVar11;
              uVar10 = uVar14;
            }
            else {
              *plVar11 = *plVar12;
              *plVar12 = **(undefined8 **)(lVar3 + uVar14 * 8);
              **(long **)(lVar3 + uVar14 * 8) = (long)plVar12;
              plVar13 = plVar11;
            }
          }
          plVar11 = plVar13;
          plVar12 = (long *)*plVar13;
        }
      }
    }
    else if (uVar6 < uVar8) {
      uVar10 = (ulong)((float)(ulong)param_1[3] / *(float *)(param_1 + 4));
      if ((uVar8 < 3) || ((uVar8 & uVar8 - 1) != 0)) {
        __ZNSt3__112__next_primeEm();
      }
      else if (1 < uVar10) {
        uVar10 = 1L << (-LZCOUNT(uVar10 - 1) & 0x3fU);
      }
      if (uVar6 <= uVar10) {
        uVar6 = uVar10;
      }
      if (uVar6 < uVar8) {
        if (uVar6 != 0) goto LAB_10acffcb0;
        lVar3 = *param_1;
        *param_1 = 0;
        if (lVar3 != 0) {
          __ZdlPv();
        }
        param_1[1] = 0;
        uVar8 = 0;
      }
      else {
        uVar8 = param_1[1];
      }
    }
    if ((uVar8 & uVar8 - 1) == 0) {
      unaff_x24 = uVar8 - 1 & uVar15;
    }
    else {
      unaff_x24 = uVar15;
      if (uVar8 <= uVar15) {
        uVar6 = 0;
        if (uVar8 != 0) {
          uVar6 = uVar15 / uVar8;
        }
        unaff_x24 = uVar15 - uVar6 * uVar8;
      }
    }
  }
  lVar3 = *param_1;
  plVar11 = *(long **)(lVar3 + unaff_x24 * 8);
  if (plVar11 == (long *)0x0) {
    plVar11 = param_1 + 2;
    *plVar9 = *plVar11;
    *plVar11 = (long)plVar9;
    *(long **)(lVar3 + unaff_x24 * 8) = plVar11;
    if (*plVar9 == 0) goto LAB_10acffe90;
    uVar15 = *(ulong *)(*plVar9 + 8);
    if ((uVar8 & uVar8 - 1) == 0) {
      uVar15 = uVar15 & uVar8 - 1;
    }
    else if (uVar8 <= uVar15) {
      uVar6 = 0;
      if (uVar8 != 0) {
        uVar6 = uVar15 / uVar8;
      }
      uVar15 = uVar15 - uVar6 * uVar8;
    }
    plVar11 = (long *)(*param_1 + uVar15 * 8);
  }
  else {
    *plVar9 = *plVar11;
  }
  *plVar11 = (long)plVar9;
LAB_10acffe90:
  param_1[3] = param_1[3] + 1;
  return plVar9;
}



/* Entry: 10acfff10; end: 10acfff43;  */

void FUN_10acfff10(ulong param_1,long param_2)

{
  if (((param_1 & 1) != 0) && (*(char *)(param_2 + 0x2f) < '\0')) {
    __ZdlPv(*(undefined8 *)(param_2 + 0x18));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_2);
  return;
}



/* Entry: 10acfff44; end: 10ad00123;  */

long * FUN_10acfff44(long *param_1,long param_2)

{
  ulong uVar1;
  uint uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  long *plVar7;
  ulong uVar8;
  
  uVar2 = (uint)((ulong)param_2 >> 0x20);
  uVar3 = param_1[1];
  if (uVar3 != 0) {
    uVar4 = ((ulong)(uint)((int)param_2 << 3) + 8 ^ (ulong)uVar2) * -0x622015f714c7d297;
    uVar4 = ((ulong)uVar2 ^ uVar4 >> 0x2f ^ uVar4) * -0x622015f714c7d297;
    uVar4 = (uVar4 ^ uVar4 >> 0x2f) * -0x622015f714c7d297;
    uVar5 = uVar3 - 1;
    if ((uVar3 & uVar5) == 0) {
      uVar6 = uVar5 & uVar4;
    }
    else {
      uVar6 = uVar4;
      if (uVar3 <= uVar4) {
        uVar6 = 0;
        if (uVar3 != 0) {
          uVar6 = uVar4 / uVar3;
        }
        uVar6 = uVar4 - uVar6 * uVar3;
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
          if (plVar7[2] == param_2) {
            return plVar7;
          }
        }
        else {
          if ((uVar3 & uVar5) == 0) {
            uVar8 = uVar8 & uVar5;
          }
          else if (uVar3 <= uVar8) {
            uVar1 = 0;
            if (uVar3 != 0) {
              uVar1 = uVar8 / uVar3;
            }
            uVar8 = uVar8 - uVar1 * uVar3;
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



/* Entry: 10ad00124; end: 10ad00207;  */

long FUN_10ad00124(long *param_1,undefined8 param_2)

{
  ulong uVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  ulong uVar6;
  long *plVar7;
  
  plVar2 = param_1;
  func_0x000107c2b05c();
  plVar5 = (long *)param_1[1];
  if (plVar5 != (long *)0x0) {
    uVar6 = (long)plVar5 - 1;
    if (((ulong)plVar5 & uVar6) == 0) {
      plVar7 = (long *)(uVar6 & (ulong)plVar2);
    }
    else {
      plVar7 = plVar2;
      if (plVar5 <= plVar2) {
        uVar1 = 0;
        if (plVar5 != (long *)0x0) {
          uVar1 = (ulong)plVar2 / (ulong)plVar5;
        }
        plVar7 = (long *)((long)plVar2 - uVar1 * (long)plVar5);
      }
    }
    plVar3 = *(long **)(*param_1 + (long)plVar7 * 8);
    if (plVar3 != (long *)0x0) {
      plVar3 = (long *)*plVar3;
      do {
        if (plVar3 == (long *)0x0) {
          return 0;
        }
        plVar4 = (long *)plVar3[1];
        if (plVar4 == plVar2) {
          plVar4 = param_1;
          func_0x000107c2b068(param_1,plVar3 + 2,param_2);
          if (((ulong)plVar4 & 1) != 0) {
            return (long)plVar3;
          }
        }
        else {
          if (((ulong)plVar5 & uVar6) == 0) {
            plVar4 = (long *)((ulong)plVar4 & uVar6);
          }
          else if (plVar5 <= plVar4) {
            uVar1 = 0;
            if (plVar5 != (long *)0x0) {
              uVar1 = (ulong)plVar4 / (ulong)plVar5;
            }
            plVar4 = (long *)((long)plVar4 - uVar1 * (long)plVar5);
          }
          if (plVar4 != plVar7) {
            return 0;
          }
        }
        plVar3 = (long *)*plVar3;
      } while( true );
    }
  }
  return 0;
}



/* Entry: 10ad00208; end: 10ad00337;  */

void FUN_10ad00208(long *param_1,long *param_2)

{
  ulong uVar1;
  long *plVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  long *plVar7;
  ulong uVar8;
  
  uVar5 = param_1[1];
  lVar3 = *param_2;
  uVar4 = param_2[1];
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
  plVar2 = *(long **)(*param_1 + uVar4 * 8);
  do {
    plVar7 = plVar2;
    plVar2 = (long *)*plVar7;
  } while ((long *)*plVar7 != param_2);
  if (plVar7 == param_1 + 2) {
LAB_10ad00294:
    if (lVar3 == 0) {
LAB_10ad002c4:
      *(undefined8 *)(*param_1 + uVar4 * 8) = 0;
      lVar3 = *param_2;
      goto LAB_10ad002cc;
    }
    uVar8 = *(ulong *)(lVar3 + 8);
    if ((uVar5 & uVar6) == 0) {
      uVar8 = uVar8 & uVar6;
    }
    else if (uVar5 <= uVar8) {
      uVar1 = 0;
      if (uVar5 != 0) {
        uVar1 = uVar8 / uVar5;
      }
      uVar8 = uVar8 - uVar1 * uVar5;
    }
    if (uVar8 != uVar4) goto LAB_10ad002c4;
  }
  else {
    uVar8 = plVar7[1];
    if ((uVar5 & uVar6) == 0) {
      uVar8 = uVar8 & uVar6;
    }
    else if (uVar5 <= uVar8) {
      uVar1 = 0;
      if (uVar5 != 0) {
        uVar1 = uVar8 / uVar5;
      }
      uVar8 = uVar8 - uVar1 * uVar5;
    }
    if (uVar8 != uVar4) goto LAB_10ad00294;
LAB_10ad002cc:
    if (lVar3 == 0) goto LAB_10ad00308;
  }
  uVar8 = *(ulong *)(lVar3 + 8);
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
    lVar3 = *param_2;
  }
LAB_10ad00308:
  *plVar7 = lVar3;
  *param_2 = 0;
  param_1[3] = param_1[3] + -1;
  FUN_10acff2a0(param_2 + 2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_2);
  return;
}



/* Entry: 10ad00338; end: 10ad00457;  */

void FUN_10ad00338(undefined8 *param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined1 uStack_58;
  undefined1 auStack_50 [24];
  undefined1 uStack_38;
  
  uVar2 = 0x50;
  ___cxa_allocate_exception(0x50);
  func_0x000107c2b054(auStack_50,&UNK_10f6a2aa8);
  uStack_38 = 1;
  if (*(char *)((long)param_1 + 0x17) < '\0') {
    func_0x000107c3192c(&uStack_70,*param_1,param_1[1]);
  }
  else {
    uStack_68 = param_1[1];
    uStack_70 = *param_1;
    uStack_60 = param_1[2];
  }
  uStack_58 = 1;
  FUN_10a234b84(uVar2,auStack_50,&uStack_70);
  ___cxa_throw(uVar2,&PTR_DAT_110bb57a0,FUN_10a234b20);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10ad003d4);
  (*pcVar1)();
}



/* Entry: 10ad00458; end: 10ad004af;  */

void FUN_10ad00458(long param_1)

{
  undefined **ppuVar1;
  undefined *puVar2;
  long *extraout_x8;
  long *plVar3;
  
  plVar3 = *(long **)(param_1 + 0x10);
  puVar2 = *(undefined **)(param_1 + 0x18);
  if (puVar2[0x20] == '\x01') {
    ppuVar1 = &PTR___tlv_bootstrap_11340dfd8;
    (*(code *)PTR___tlv_bootstrap_11340dfd8)();
    if (*ppuVar1 == puVar2) {
      *ppuVar1 = *(undefined **)(puVar2 + 0x18);
    }
    *(undefined8 *)(puVar2 + 0x18) = 0;
    puVar2[0x20] = 0;
    plVar3 = extraout_x8;
  }
                    /* WARNING: Could not recover jumptable at 0x00010ad004ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar3 + 0x28))(plVar3);
  return;
}



/* Entry: 10ad004b0; end: 10ad004d7;  */

void FUN_10ad004b0(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x10);
  *(long *)(param_1 + 0x10) = 0;
  if (lVar1 != 0) {
    func_0x00010ad0070c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10ad004d8; end: 10ad00813;  */

undefined8 * FUN_10ad004d8(undefined8 *param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  ulong uVar5;
  long *plStack_50;
  long *plStack_48;
  long *plStack_40;
  long *plStack_38;
  
  *param_1 = &PTR_FUN_110c6df70;
  param_1[3] = 0;
  *(undefined1 *)(param_1 + 4) = 0;
  param_1[2] = 0;
  param_1[1] = 0;
  FUN_109d1b010(&plStack_40);
  plStack_48 = plStack_38;
  plStack_50 = plStack_40;
  plStack_40 = param_1 + 1;
  plStack_38 = param_1 + 2;
  FUN_10a94ff58(&plStack_40,&plStack_50);
  if (plStack_48 != (long *)0x0) {
    puVar1 = (ulong *)(plStack_48 + 1);
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
        (**(code **)(*plStack_48 + 8))();
      }
    }
  }
  plVar4 = plStack_50;
  if (plStack_50 != (long *)0x0) {
    puVar1 = (ulong *)(plStack_50 + 1);
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
      (**(code **)(*plStack_50 + 0x10))(plStack_50);
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
        (**(code **)(*plVar4 + 8))(plVar4);
      }
    }
  }
  return param_1;
}



/* Entry: 10ad00814; end: 10ad00817;  */

undefined * FUN_10ad00814(undefined *param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  undefined **ppuVar4;
  long *plVar5;
  ulong uVar6;
  
  if (param_1[0x20] == '\x01') {
    ppuVar4 = &PTR___tlv_bootstrap_11340dfd8;
    (*(code *)PTR___tlv_bootstrap_11340dfd8)();
    if (*ppuVar4 == param_1) {
      *ppuVar4 = *(undefined **)(param_1 + 0x18);
    }
    *(undefined8 *)(param_1 + 0x18) = 0;
    param_1[0x20] = 0;
  }
  plVar5 = *(long **)(param_1 + 0x10);
  if (plVar5 != (long *)0x0) {
    puVar1 = (ulong *)(plVar5 + 1);
    do {
      uVar6 = *puVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = uVar6 - 0x200000000;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (uVar6 >> 0x21 == 1) {
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
  plVar5 = *(long **)(param_1 + 8);
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
  return param_1;
}



/* Entry: 10ad00818; end: 10ad0082b;  */

void FUN_10ad00818(void)

{
  func_0x00010ad0070c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10ad0082c; end: 10ad0088f;  */

void FUN_10ad0082c(long *param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  
  lVar5 = *(long *)(param_2 + 0x10);
  plVar1 = (long *)(lVar5 + 0x10);
  do {
    lVar6 = *plVar1;
    if (lVar6 == 0) {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = 2;
        cVar2 = ExclusiveMonitorsStatus();
      }
      if (cVar2 == '\0') {
        FUN_109d1b4dc(lVar5 + 0x18);
        goto FUN_109d1b124;
      }
    }
    else {
      ClearExclusiveLocal();
    }
    if (((uint)lVar6 >> 1 & 1) != 0) {
FUN_109d1b124:
      if ((bRam00000001138334e0 & 1) == 0) {
        iVar4 = 0x138334e0;
        ___cxa_guard_acquire();
        if (iVar4 != 0) {
          FUN_109d1b1bc();
          ___cxa_atexit(FUN_109d1b2e8,0x1138334d8,0x100000000);
          ___cxa_guard_release(0x1138334e0);
        }
      }
      lVar5 = lRam00000001138334d8;
      *param_1 = lRam00000001138334d8;
      if (lVar5 != 0) {
        plVar1 = (long *)(lVar5 + 8);
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar3) {
            *plVar1 = *plVar1 + 4;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      return;
    }
  } while( true );
}



/* Entry: 10ad00890; end: 10ad008d7;  */

void FUN_10ad00890(void)

{
  return;
}



/* Entry: 10ad008d8; end: 10ad009ab;  */

void FUN_10ad008d8(undefined8 *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  int iVar5;
  undefined8 *puVar6;
  
  if ((bRam0000000113835d20 & 1) == 0) {
    iVar5 = 0x13835d20;
    ___cxa_guard_acquire();
    if (iVar5 != 0) {
      puVar6 = (undefined8 *)0x20;
      __Znwm();
      puVar6[1] = 0;
      puVar6[2] = 0;
      *puVar6 = &PTR_DAT_110c6e060;
      puRam0000000113835d10 = puVar6 + 3;
      *puRam0000000113835d10 = &PTR_FUN_110c6dfb0;
      puRam0000000113835d18 = puVar6;
      ___cxa_atexit(FUN_10ad009ac,0x113835d10,0x100000000);
      ___cxa_guard_release(0x113835d20);
    }
  }
  puVar4 = puRam0000000113835d18;
  puVar6 = puRam0000000113835d10;
  param_1[1] = puRam0000000113835d18;
  *param_1 = puVar6;
  if (puVar4 != (undefined8 *)0x0) {
    plVar1 = puVar4 + 1;
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



/* Entry: 10ad009ac; end: 10ad00a03;  */

long FUN_10ad009ac(long param_1)

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



/* Entry: 10ad00a04; end: 10ad00a4b;  */

void FUN_10ad00a04(void)

{
  return;
}



/* Entry: 10ad00a4c; end: 10ad00a6b;  */

void FUN_10ad00a4c(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110c6e060;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10ad00a6c; end: 10ad00a7b;  */

void FUN_10ad00a6c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010ad00a74. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x18) + 8))();
  return;
}



/* Entry: 10ad00a7c; end: 10ad00b0b;  */

void FUN_10ad00a7c(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined1 auStack_58 [48];
  byte bStack_28;
  
  FUN_10a0f1b8c(auStack_58,param_2,0);
  if ((bStack_28 & 1) != 0) {
    FUN_10a0f1f4c(param_1,auStack_58);
    if (bStack_28 == 1) {
      FUN_10a0f1ea0(auStack_58);
    }
    return;
  }
  FUN_10a10a2f4(&UNK_10f6a2ad3,param_2);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10ad00aec);
  (*pcVar1)();
}



/* Entry: 10ad00b0c; end: 10ad00cf7;  */

bool FUN_10ad00b0c(long *param_1)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  char *pcVar4;
  undefined8 ***pppuVar5;
  ulong uVar6;
  char *pcVar7;
  undefined8 **appuStack_88 [2];
  char cStack_71;
  undefined8 **ppuStack_70;
  undefined8 *puStack_68;
  undefined8 *puStack_60;
  undefined1 uStack_51;
  
  plVar2 = (long *)*param_1;
  if (-1 < *(char *)((long)param_1 + 0x17)) {
    plVar2 = param_1;
  }
  _opendir();
  if (plVar2 != (long *)0x0) {
    lVar3 = (long)plVar2;
    _readdir();
    if (lVar3 != 0) {
      do {
        pcVar7 = (char *)(lVar3 + 0x15);
        if ((*pcVar7 != '.') ||
           ((*(char *)(lVar3 + 0x16) != '\0' &&
            ((*(char *)(lVar3 + 0x16) != '.' || (*(char *)(lVar3 + 0x17) != '\0')))))) {
          uVar6 = param_1[1];
          if (-1 < (char)*(byte *)((long)param_1 + 0x17)) {
            uVar6 = (ulong)*(byte *)((long)param_1 + 0x17);
          }
          FUN_10a003c90(appuStack_88,uVar6 + 1,&uStack_51);
          pppuVar5 = (undefined8 ***)appuStack_88[0];
          if (-1 < cStack_71) {
            pppuVar5 = appuStack_88;
          }
          if (uVar6 != 0) {
            plVar1 = (long *)*param_1;
            if (-1 < *(char *)((long)param_1 + 0x17)) {
              plVar1 = param_1;
            }
            _memmove(pppuVar5,plVar1,uVar6);
          }
          *(undefined2 *)((long)pppuVar5 + uVar6) = 0x2f;
          pcVar4 = pcVar7;
          _strlen(pcVar7);
          pppuVar5 = appuStack_88;
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                    (pppuVar5,pcVar7,pcVar4);
          puStack_68 = pppuVar5[1];
          ppuStack_70 = *pppuVar5;
          puStack_60 = pppuVar5[2];
          pppuVar5[1] = (undefined8 **)0x0;
          pppuVar5[2] = (undefined8 **)0x0;
          *pppuVar5 = (undefined8 **)0x0;
          uVar6 = 0;
          FUN_10ad00b0c();
          if ((long)puStack_60 < 0) {
            __ZdlPv(ppuStack_70);
          }
          if (cStack_71 < '\0') {
            __ZdlPv(appuStack_88[0]);
          }
          if ((uVar6 & 1) == 0) {
            _closedir(plVar2);
            return false;
          }
        }
        lVar3 = (long)plVar2;
        _readdir();
      } while (lVar3 != 0);
    }
    _closedir(plVar2);
  }
  plVar2 = (long *)*param_1;
  if (-1 < *(char *)((long)param_1 + 0x17)) {
    plVar2 = param_1;
  }
  func_0x000107c2b054(&ppuStack_70,plVar2);
  pppuVar5 = (undefined8 ***)ppuStack_70;
  if (-1 < (long)puStack_60) {
    pppuVar5 = &ppuStack_70;
  }
  _remove(pppuVar5);
  if ((long)puStack_60 < 0) {
    __ZdlPv(ppuStack_70);
  }
  return (int)pppuVar5 == 0;
}



/* Entry: 10ad00cf8; end: 10ad00d7b;  */

bool FUN_10ad00cf8(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 auStack_48 [2];
  char cStack_31;
  int aiStack_30 [2];
  undefined8 uStack_28;
  
  aiStack_30[0] = 0;
  uVar1 = param_1;
  __ZNSt3__115system_categoryEv();
  uStack_28 = uVar1;
  FUN_10a09d9a0(auStack_48,param_1,0);
  __ZNSt3__14__fs10filesystem20__create_directoriesERKNS1_4pathEPNS_10error_codeE
            (auStack_48,aiStack_30);
  if (cStack_31 < '\0') {
    __ZdlPv(auStack_48[0]);
  }
  return aiStack_30[0] == 0;
}



/* Entry: 10ad00d7c; end: 10ad00f3b;  */

undefined *** FUN_10ad00d7c(long *param_1,undefined8 param_2,undefined8 param_3)

{
  uint uVar1;
  long *plVar2;
  long lVar3;
  undefined ****ppppuVar4;
  undefined1 *puVar5;
  undefined ***extraout_x8;
  undefined **ppuVar6;
  undefined **ppuVar7;
  undefined **ppuVar8;
  undefined ***pppuVar9;
  undefined1 uStack_2c1;
  undefined1 *puStack_2c0;
  code *pcStack_2b8;
  undefined ***apppuStack_2b0 [2];
  char cStack_299;
  undefined ***apppuStack_298 [2];
  char cStack_281;
  undefined **ppuStack_280;
  undefined1 auStack_278 [24];
  uint auStack_260 [96];
  undefined **appuStack_e0 [19];
  long lStack_48;
  
  ppppuVar4 = apppuStack_2b0;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar2 = (long *)*param_1;
  if (-1 < *(char *)((long)param_1 + 0x17)) {
    plVar2 = param_1;
  }
  func_0x000107c2b054(apppuStack_298,plVar2);
  FUN_10ad00f3c(apppuStack_2b0,apppuStack_298);
  FUN_10ad00cf8();
  if (((ulong)ppppuVar4 & 1) == 0) {
    pppuVar9 = (undefined ***)0x0;
  }
  else {
    func_0x000107c2800c(&ppuStack_280,apppuStack_298,0x24);
    uVar1 = *(uint *)((long)auStack_260 + (long)ppuStack_280[-3]) & 5;
    pppuVar9 = (undefined ***)(ulong)(uVar1 == 0);
    if (uVar1 == 0) {
      __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEE5writeEPKcl(&ppuStack_280,param_2,param_3);
      puVar5 = auStack_278;
      func_0x000107c27ffc();
      if (puVar5 == (undefined1 *)0x0) {
        __ZNSt3__18ios_base5clearEj
                  (auStack_278 + (long)(ppuStack_280[-3] + -8),
                   *(uint *)((long)auStack_260 + (long)ppuStack_280[-3]) | 4);
      }
    }
    ppuStack_280 = &PTR_DAT_11087cb40;
    appuStack_e0[0] = &PTR_DAT_11087cb68;
    func_0x000107c28018(auStack_278);
    __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEED2Ev(&ppuStack_280,&PTR_PTR_11087cb80);
    ppppuVar4 = (undefined ****)appuStack_e0;
    __ZNSt3__19basic_iosIcNS_11char_traitsIcEEED2Ev();
  }
  if (cStack_299 < '\0') {
    ppppuVar4 = (undefined ****)apppuStack_2b0[0];
    __ZdlPv();
  }
  if (cStack_281 < '\0') {
    ppppuVar4 = (undefined ****)apppuStack_298[0];
    __ZdlPv();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return pppuVar9;
  }
  ___stack_chk_fail();
  func_0x000107c28010(&ppuStack_280);
  if (cStack_299 < '\0') {
    __ZdlPv(apppuStack_2b0[0]);
  }
  if (cStack_281 < '\0') {
    __ZdlPv(apppuStack_298[0]);
  }
  __Unwind_Resume();
  pcStack_2b8 = FUN_10ad00f3c;
  *extraout_x8 = (undefined **)0x0;
  extraout_x8[1] = (undefined **)0x0;
  extraout_x8[2] = (undefined **)0x0;
  ppuVar6 = (undefined **)(long)*(char *)((long)ppppuVar4 + 0x17);
  pppuVar9 = *ppppuVar4;
  if (-1 < (long)ppuVar6) {
    pppuVar9 = (undefined ***)ppppuVar4;
  }
  ppuVar8 = (undefined **)ppppuVar4[1];
  ppuVar7 = (undefined **)ppppuVar4[1];
  if (-1 < *(char *)((long)ppppuVar4 + 0x17)) {
    ppuVar8 = ppuVar6;
    ppuVar7 = ppuVar6;
  }
  do {
    if (ppuVar8 == (undefined **)0x0) goto LAB_10ad00fa4;
    lVar3 = (long)ppuVar8 + -1;
    ppuVar8 = (undefined **)((long)ppuVar8 + -1);
  } while (*(char *)((long)pppuVar9 + lVar3) != '/');
  if (ppuVar8 == (undefined **)0xffffffffffffffff) {
LAB_10ad00fa4:
    do {
      if (ppuVar7 == (undefined **)0x0) {
        return (undefined ***)ppppuVar4;
      }
      lVar3 = (long)ppuVar7 + -1;
      ppuVar7 = (undefined **)((long)ppuVar7 + -1);
    } while (*(char *)((long)pppuVar9 + lVar3) != '\\');
    ppuVar8 = ppuVar7;
    if (ppuVar7 == (undefined **)0xffffffffffffffff) {
      return (undefined ***)ppppuVar4;
    }
  }
  pppuVar9 = extraout_x8;
  puStack_2c0 = &stack0xfffffffffffffff0;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_mmRKS4_
            (extraout_x8,ppppuVar4,0,(long)ppuVar8 + 1,&uStack_2c1);
  return pppuVar9;
}



/* Entry: 10ad00f3c; end: 10ad00fd7;  */

void FUN_10ad00f3c(undefined8 *param_1,long *param_2)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined1 uStack_11;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  lVar2 = (long)*(char *)((long)param_2 + 0x17);
  plVar1 = (long *)*param_2;
  if (-1 < lVar2) {
    plVar1 = param_2;
  }
  lVar4 = param_2[1];
  lVar3 = param_2[1];
  if (-1 < *(char *)((long)param_2 + 0x17)) {
    lVar4 = lVar2;
    lVar3 = lVar2;
  }
  do {
    if (lVar4 == 0) goto LAB_10ad00fa4;
    lVar2 = lVar4 + -1;
    lVar4 = lVar4 + -1;
  } while (*(char *)((long)plVar1 + lVar2) != '/');
  if (lVar4 == -1) {
LAB_10ad00fa4:
    do {
      if (lVar3 == 0) {
        return;
      }
      lVar2 = lVar3 + -1;
      lVar3 = lVar3 + -1;
    } while (*(char *)((long)plVar1 + lVar2) != '\\');
    lVar4 = lVar3;
    if (lVar3 == -1) {
      return;
    }
  }
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_mmRKS4_
            (param_1,param_2,0,lVar4 + 1,&uStack_11);
  return;
}



/* Entry: 10ad00fd8; end: 10ad0112f;  */

/* WARNING: Removing unreachable block (ram,0x00010a151ccc) */
/* WARNING: Removing unreachable block (ram,0x00010a151abc) */
/* WARNING: Removing unreachable block (ram,0x00010a151cbc) */
/* WARNING: Removing unreachable block (ram,0x00010a151cdc) */

undefined ****** FUN_10ad00fd8(undefined ******param_1,undefined ******param_2)

{
  byte *pbVar1;
  ulong uVar2;
  undefined *****pppppuVar3;
  long lVar4;
  char cVar5;
  bool bVar6;
  undefined7 *puVar7;
  long *plVar8;
  long lVar9;
  undefined8 ****ppppuVar10;
  long *plVar11;
  undefined ******ppppppuVar12;
  undefined ******ppppppuVar13;
  undefined ******ppppppuVar14;
  undefined *****pppppuVar15;
  undefined ******ppppppuVar16;
  char *pcVar17;
  uint uVar18;
  long lVar19;
  undefined8 *****pppppuVar20;
  undefined *****pppppuVar21;
  undefined8 *puVar22;
  undefined8 *unaff_x21;
  char *pcVar23;
  long unaff_x26;
  undefined *****pppppuStack_1a0;
  ulong uStack_198;
  byte bStack_189;
  undefined *****apppppuStack_188 [2];
  char cStack_171;
  undefined *****pppppuStack_170;
  undefined ****ppppuStack_168;
  undefined ****ppppuStack_160;
  undefined *****apppppuStack_158 [2];
  char cStack_141;
  long lStack_140;
  undefined *****pppppuStack_138;
  undefined8 ***pppuStack_130;
  long *plStack_128;
  long lStack_120;
  char cStack_111;
  undefined8 ****ppppuStack_110;
  undefined8 ****ppppuStack_108;
  byte bStack_f9;
  undefined7 uStack_f8;
  char cStack_f1;
  undefined8 ***pppuStack_f0;
  undefined8 uStack_e8;
  undefined8 ***pppuStack_e0;
  undefined8 uStack_d8;
  long in_stack_ffffffffffffff30;
  long *in_stack_ffffffffffffff38;
  undefined *****in_stack_ffffffffffffff40;
  undefined *****in_stack_ffffffffffffff50;
  undefined *****pppppuStack_a0;
  undefined *****pppppuStack_98;
  undefined1 *puStack_90;
  code *pcStack_88;
  byte bStack_79;
  undefined8 uStack_78;
  undefined ****ppppuStack_70;
  byte *pbStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  lVar19 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pppppuVar21 = param_1[1];
  ppppppuVar13 = (undefined ******)*param_1;
  if (-1 < (char)*(byte *)((long)param_1 + 0x17)) {
    pppppuVar21 = (undefined *****)(ulong)*(byte *)((long)param_1 + 0x17);
    ppppppuVar13 = param_1;
  }
  func_0x00010a1512bc();
  if ((int)ppppppuVar13 == 0) {
    pppppuVar21 = (undefined *****)0x4000;
    ppppppuVar13 = param_1;
    FUN_10ad015f0();
    if ((int)ppppppuVar13 == 0) {
LAB_10ad010dc:
      uVar18 = 0;
    }
    else {
      pppppuVar21 = (undefined *****)0x4000;
      ppppppuVar13 = param_2;
      FUN_10ad015f0();
      if ((((ulong)ppppppuVar13 & 1) == 0) &&
         (ppppppuVar13 = param_2, FUN_10ad00cf8(), (int)ppppppuVar13 == 0)) goto LAB_10ad010dc;
      bStack_79 = 1;
      unaff_x21 = &uStack_78;
      uStack_78 = FUN_10ad02ecc;
      ppppuStack_70 = (undefined ****)&PTR_FUN_110c6e130;
      pbStack_68 = &bStack_79;
      pppppuVar21 = (undefined *****)&uStack_78;
      uStack_60 = param_2;
      uStack_58 = param_1;
      FUN_10ad01130(param_1);
      ppppppuVar13 = (undefined ******)&ppppuStack_70;
      (*(code *)*ppppuStack_70)();
      uVar18 = (uint)bStack_79;
    }
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar19) {
      return (undefined ******)(ulong)(uVar18 & 1);
    }
  }
  else {
    func_0x00010a151214();
    ppppppuVar13 = (undefined ******)*ppppppuVar13;
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar19) {
      ppppppuVar14 = ppppppuVar13;
      FUN_10a14f7dc();
      if (((int)ppppppuVar14 == 0) ||
         ((ppppppuVar14 = param_2, FUN_10ad015f0(param_2,0x4000), ((ulong)ppppppuVar14 & 1) == 0 &&
          (ppppppuVar14 = param_2, FUN_10ad00cf8(), (int)ppppppuVar14 == 0)))) {
        ppppppuVar13 = (undefined ******)0x0;
      }
      else {
        if (*(char *)((long)param_1 + 0x17) < '\0') {
          func_0x000107c3192c(&stack0xffffffffffffff40,*param_1,param_1[1]);
        }
        else {
          in_stack_ffffffffffffff40 = *param_1;
          in_stack_ffffffffffffff50 = param_1[2];
        }
        FUN_10ad03508(&pppppuStack_a0,&stack0xffffffffffffff40);
        pppppuVar21 = pppppuStack_98;
        ppppppuVar14 = (undefined ******)pppppuStack_a0;
        if (-1 < (long)puStack_90) {
          pppppuVar21 = (undefined *****)((ulong)puStack_90 >> 0x38);
          ppppppuVar14 = &pppppuStack_a0;
        }
        FUN_10a1513b8(&pcStack_88,ppppppuVar14,pppppuVar21);
        if ((long)puStack_90 < 0) {
          __ZdlPv(pppppuStack_a0);
        }
        if ((long)in_stack_ffffffffffffff50 < 0) {
          __ZdlPv(in_stack_ffffffffffffff40);
        }
        FUN_10a151e50(&stack0xffffffffffffff30,ppppppuVar13,&pcStack_88);
        puVar22 = *(undefined8 **)(in_stack_ffffffffffffff30 + 0x18);
        func_0x0001092bce90(puVar22);
        plVar8 = (long *)*puVar22;
        (**(code **)(*plVar8 + 0x50))();
        lVar4 = plVar8[1];
        for (lVar19 = *plVar8; lVar19 != lVar4; lVar19 = lVar19 + 0x28) {
          lVar9 = lVar19;
          FUN_10a1520c4(lVar19,&ppppuStack_70);
          if ((int)lVar9 != 0) {
            func_0x0001092beca0(&uStack_d8,*(undefined8 *)(in_stack_ffffffffffffff30 + 0x18),lVar19)
            ;
            pbVar1 = pbStack_68;
            if (-1 < (long)uStack_60) {
              pbVar1 = (byte *)((ulong)uStack_60 >> 0x38);
            }
            __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_mmRKS4_
                      (&pppuStack_f0,lVar19,pbVar1,0xffffffffffffffff,(long)&uStack_58 + 7);
            pppppuVar21 = param_2[1];
            ppppppuVar13 = (undefined ******)*param_2;
            if (-1 < (char)*(byte *)((long)param_2 + 0x17)) {
              pppppuVar21 = (undefined *****)(ulong)*(byte *)((long)param_2 + 0x17);
              ppppppuVar13 = param_2;
            }
            ppppuVar10 = &pppuStack_f0;
            __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6insertEmPKcm
                      (&pppuStack_f0,0,ppppppuVar13,pppppuVar21);
            pppppuStack_98 = (undefined *****)ppppuVar10[1];
            pppppuStack_a0 = (undefined *****)*ppppuVar10;
            puStack_90 = (undefined1 *)ppppuVar10[2];
            ppppuVar10[1] = (undefined8 ***)0x0;
            ppppuVar10[2] = (undefined8 ***)0x0;
            *ppppuVar10 = (undefined8 ***)0x0;
            if ((long)pppuStack_e0 < 0) {
              __ZdlPv(pppuStack_f0);
            }
            if (uStack_d8 == (long *)0x0) {
              if ((long)puStack_90 < 0) {
                __ZdlPv(pppppuStack_a0);
                plVar8 = uStack_d8;
                uStack_d8 = (long *)0x0;
                if (plVar8 != (long *)0x0) {
                  plVar11 = (long *)*plVar8;
                  *plVar8 = 0;
                  if (plVar11 != (long *)0x0) {
                    (**(code **)(*plVar11 + 0x40))();
                  }
                  __ZdlPv(plVar8);
                }
              }
            }
            else {
              puVar22 = (undefined8 *)*uStack_d8;
              (**(code **)*puVar22)();
              plVar8 = (long *)*uStack_d8;
              (**(code **)(*plVar8 + 0x18))();
              ppppppuVar13 = &pppppuStack_a0;
              FUN_10ad00d7c(ppppppuVar13,puVar22,plVar8);
              if ((long)puStack_90 < 0) {
                __ZdlPv(pppppuStack_a0);
              }
              plVar8 = uStack_d8;
              uStack_d8 = (long *)0x0;
              if (plVar8 != (long *)0x0) {
                plVar11 = (long *)*plVar8;
                *plVar8 = 0;
                if (plVar11 != (long *)0x0) {
                  (**(code **)(*plVar11 + 0x40))();
                }
                __ZdlPv(plVar8);
              }
              if (((ulong)ppppppuVar13 & 1) != 0) goto LAB_10a15017c;
            }
            ppppppuVar13 = (undefined ******)0x0;
            goto LAB_10a1501d0;
          }
LAB_10a15017c:
        }
        ppppppuVar13 = (undefined ******)0x1;
LAB_10a1501d0:
        if (in_stack_ffffffffffffff38 != (long *)0x0) {
          plVar8 = in_stack_ffffffffffffff38 + 1;
          do {
            lVar19 = *plVar8;
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(plVar8,0x10);
            if (bVar6) {
              *plVar8 = lVar19 + -1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (lVar19 == 0) {
            (**(code **)(*in_stack_ffffffffffffff38 + 0x10))(in_stack_ffffffffffffff38);
            __ZNSt3__119__shared_weak_count14__release_weakEv(in_stack_ffffffffffffff38);
          }
        }
        if (uStack_60._7_1_ < '\0') {
          __ZdlPv(ppppuStack_70);
        }
        if (uStack_78._7_1_ < '\0') {
          __ZdlPv(pcStack_88);
        }
      }
      return ppppppuVar13;
    }
  }
  ___stack_chk_fail();
  (*(code *)*ppppuStack_70)(unaff_x21 + 1);
  ppppppuVar14 = ppppppuVar13;
  __Unwind_Resume();
  pppppuStack_a0 = (undefined *****)param_2;
  pppppuStack_98 = (undefined *****)ppppppuVar13;
  puStack_90 = &stack0xfffffffffffffff0;
  pcStack_88 = FUN_10ad01130;
  pppppuVar3 = ppppppuVar14[1];
  ppppppuVar13 = (undefined ******)*ppppppuVar14;
  if (-1 < (char)*(byte *)((long)ppppppuVar14 + 0x17)) {
    pppppuVar3 = (undefined *****)(ulong)*(byte *)((long)ppppppuVar14 + 0x17);
    ppppppuVar13 = ppppppuVar14;
  }
  func_0x00010a1512bc(ppppppuVar13,pppppuVar3);
  if ((int)ppppppuVar13 == 0) {
    ppppppuVar13 = (undefined ******)*ppppppuVar14;
    if (-1 < *(char *)((long)ppppppuVar14 + 0x17)) {
      ppppppuVar13 = ppppppuVar14;
    }
    _opendir();
    if (ppppppuVar13 == (undefined ******)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00010ad01310. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)*pppppuVar21)(ppppppuVar14,pppppuVar21);
      return ppppppuVar14;
    }
    ppppppuVar16 = ppppppuVar13;
    _readdir();
    if (ppppppuVar16 != (undefined ******)0x0) {
      do {
        pcVar23 = (char *)((long)ppppppuVar16 + 0x15);
        if ((*pcVar23 != '.') ||
           ((*(char *)((long)ppppppuVar16 + 0x16) != '\0' &&
            ((*(char *)((long)ppppppuVar16 + 0x16) != '.' ||
             (*(char *)((long)ppppppuVar16 + 0x17) != '\0')))))) {
          pppppuVar3 = ppppppuVar14[1];
          if (-1 < (char)*(byte *)((long)ppppppuVar14 + 0x17)) {
            pppppuVar3 = (undefined *****)(ulong)*(byte *)((long)ppppppuVar14 + 0x17);
          }
          FUN_10a003c90(&ppppuStack_108,(long)pppppuVar3 + 1,(long)&uStack_d8 + 7);
          pppppuVar20 = (undefined8 *****)ppppuStack_108;
          if (-1 < cStack_f1) {
            pppppuVar20 = &ppppuStack_108;
          }
          if (pppppuVar3 != (undefined *****)0x0) {
            ppppppuVar16 = (undefined ******)*ppppppuVar14;
            if (-1 < *(char *)((long)ppppppuVar14 + 0x17)) {
              ppppppuVar16 = ppppppuVar14;
            }
            _memmove(pppppuVar20,ppppppuVar16,pppppuVar3);
          }
          *(undefined2 *)((long)pppppuVar20 + (long)pppppuVar3) = 0x2f;
          pcVar17 = pcVar23;
          _strlen(pcVar23);
          pppppuVar20 = &ppppuStack_108;
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                    (pppppuVar20,pcVar23,pcVar17);
          uStack_e8 = pppppuVar20[1];
          pppuStack_f0 = *pppppuVar20;
          pppuStack_e0 = pppppuVar20[2];
          pppppuVar20[1] = (undefined8 ****)0x0;
          pppppuVar20[2] = (undefined8 ****)0x0;
          *pppppuVar20 = (undefined8 ****)0x0;
          FUN_10ad01130(&pppuStack_f0,pppppuVar21);
          if ((long)pppuStack_e0 < 0) {
            __ZdlPv(pppuStack_f0);
          }
          if (cStack_f1 < '\0') {
            __ZdlPv(ppppuStack_108);
          }
        }
        ppppppuVar16 = ppppppuVar13;
        _readdir();
      } while (ppppppuVar16 != (undefined ******)0x0);
    }
    _closedir(ppppppuVar13);
    return ppppppuVar13;
  }
  func_0x00010a151214();
  pppppuVar3 = ppppppuVar14[1];
  ppppppuVar16 = (undefined ******)*ppppppuVar14;
  if (-1 < (char)*(byte *)((long)ppppppuVar14 + 0x17)) {
    pppppuVar3 = (undefined *****)(ulong)*(byte *)((long)ppppppuVar14 + 0x17);
    ppppppuVar16 = ppppppuVar14;
  }
  pppppuVar15 = *ppppppuVar13;
  FUN_10a1513b8(&uStack_f8,ppppppuVar16,pppppuVar3);
  plStack_128 = uStack_d8;
  pppuStack_130 = pppuStack_e0;
  lStack_120 = unaff_x26;
  FUN_10ad03508(&ppppuStack_110,&pppuStack_130);
  if (lStack_120 < 0) {
    __ZdlPv(pppuStack_130);
  }
  lVar19 = (long)(char)bStack_f9;
  if (lVar19 < 0) {
    if (((undefined8 *****)ppppuStack_108 == (undefined8 *****)0x0) ||
       (*(char *)((long)ppppuStack_110 + (long)ppppuStack_108 + -1) != '/')) goto LAB_10a151b3c;
    pppppuVar20 = (undefined8 *****)((long)ppppuStack_108 + -1);
    ppppuStack_108 = pppppuVar20;
  }
  else {
    if ((bStack_f9 == 0) || ((&cStack_111)[lVar19] != '/')) goto LAB_10a151b3c;
    pppppuVar20 = (undefined8 *****)(lVar19 + -1);
    bStack_f9 = (byte)pppppuVar20;
    ppppuStack_110 = &ppppuStack_110;
  }
  *(undefined1 *)((long)ppppuStack_110 + (long)pppppuVar20) = 0;
LAB_10a151b3c:
  FUN_10a151e50(&lStack_140,pppppuVar15,&uStack_f8);
  puVar7 = (undefined7 *)CONCAT17(cStack_f1,uStack_f8);
  if (-1 < (char)uStack_e8._7_1_) {
    pppuStack_f0 = (undefined8 ****)(ulong)uStack_e8._7_1_;
    puVar7 = &uStack_f8;
  }
  FUN_10a151324(apppppuStack_158,puVar7,pppuStack_f0);
  puVar22 = *(undefined8 **)(lStack_140 + 0x18);
  func_0x0001092bce90(puVar22);
  ppppppuVar13 = (undefined ******)*puVar22;
  (*(code *)(*ppppppuVar13)[10])();
  ppppppuVar16 = (undefined ******)ppppppuVar13[1];
  ppppppuVar12 = (undefined ******)apppppuStack_158[0];
  for (ppppppuVar14 = (undefined ******)*ppppppuVar13; ppppppuVar14 != ppppppuVar16;
      ppppppuVar14 = ppppppuVar14 + 5) {
    ppppppuVar13 = ppppppuVar14;
    apppppuStack_158[0] = (undefined *****)ppppppuVar12;
    FUN_10a1520c4(ppppppuVar14,&ppppuStack_110);
    if ((int)ppppppuVar13 != 0) {
      FUN_10a0b4df8(apppppuStack_188,apppppuStack_158,&pppuStack_e0);
      pppppuVar20 = (undefined8 *****)ppppuStack_108;
      if (-1 < (char)bStack_f9) {
        pppppuVar20 = (undefined8 *****)(ulong)bStack_f9;
      }
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_mmRKS4_
                (&pppppuStack_1a0,ppppppuVar14,pppppuVar20,0xffffffffffffffff,
                 &stack0xffffffffffffff3f);
      uVar2 = uStack_198;
      ppppppuVar13 = (undefined ******)pppppuStack_1a0;
      if (-1 < (char)bStack_189) {
        uVar2 = (ulong)bStack_189;
        ppppppuVar13 = &pppppuStack_1a0;
      }
      ppppppuVar12 = apppppuStack_188;
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                (ppppppuVar12,ppppppuVar13,uVar2);
      ppppuStack_168 = (undefined ****)ppppppuVar12[1];
      pppppuStack_170 = *ppppppuVar12;
      ppppuStack_160 = (undefined ****)ppppppuVar12[2];
      ppppppuVar12[1] = (undefined *****)0x0;
      ppppppuVar12[2] = (undefined *****)0x0;
      *ppppppuVar12 = (undefined *****)0x0;
      ppppppuVar13 = &pppppuStack_170;
      (*(code *)*pppppuVar21)(ppppppuVar13,pppppuVar21);
      if ((long)ppppuStack_160 < 0) {
        ppppppuVar13 = (undefined ******)pppppuStack_170;
        __ZdlPv(pppppuStack_170);
      }
      if ((char)bStack_189 < '\0') {
        ppppppuVar13 = (undefined ******)pppppuStack_1a0;
        __ZdlPv(pppppuStack_1a0);
      }
      if (cStack_171 < '\0') {
        ppppppuVar13 = (undefined ******)apppppuStack_188[0];
        __ZdlPv(apppppuStack_188[0]);
      }
    }
    ppppppuVar12 = (undefined ******)apppppuStack_158[0];
  }
  if (cStack_141 < '\0') {
    __ZdlPv(ppppppuVar12);
    ppppppuVar13 = ppppppuVar12;
  }
  if ((undefined ******)pppppuStack_138 != (undefined ******)0x0) {
    ppppppuVar14 = (undefined ******)(pppppuStack_138 + 1);
    do {
      pppppuVar21 = *ppppppuVar14;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(ppppppuVar14,0x10);
      if (bVar6) {
        *ppppppuVar14 = (undefined *****)((long)pppppuVar21 + -1);
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (pppppuVar21 == (undefined *****)0x0) {
      (*(code *)(*pppppuStack_138)[2])(pppppuStack_138);
      __ZNSt3__119__shared_weak_count14__release_weakEv(pppppuStack_138);
      ppppppuVar13 = (undefined ******)pppppuStack_138;
    }
  }
  return ppppppuVar13;
}



/* Entry: 10ad01130; end: 10ad01347;  */

/* WARNING: Removing unreachable block (ram,0x00010a151ccc) */
/* WARNING: Removing unreachable block (ram,0x00010a151abc) */
/* WARNING: Removing unreachable block (ram,0x00010a151cbc) */
/* WARNING: Removing unreachable block (ram,0x00010a151cdc) */

void FUN_10ad01130(undefined8 *param_1,undefined8 *param_2)

{
  ulong uVar1;
  long lVar2;
  char cVar3;
  bool bVar4;
  undefined7 *puVar5;
  undefined1 **ppuVar6;
  long *plVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  char *pcVar11;
  long lVar12;
  undefined8 *****pppppuVar13;
  undefined8 *puVar14;
  char *pcVar15;
  long unaff_x26;
  undefined1 *puStack_120;
  ulong uStack_118;
  byte bStack_109;
  undefined8 auStack_108 [2];
  char cStack_f1;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  long lStack_e0;
  undefined8 auStack_d8 [2];
  char cStack_c1;
  long lStack_c0;
  long *plStack_b8;
  undefined8 ***pppuStack_b0;
  undefined8 uStack_a8;
  long lStack_a0;
  char cStack_91;
  undefined8 ****ppppuStack_90;
  undefined8 ****ppppuStack_88;
  byte bStack_79;
  undefined7 uStack_78;
  char cStack_71;
  undefined8 ***pppuStack_70;
  undefined8 uStack_68;
  undefined8 ***pppuStack_60;
  undefined8 uStack_58;
  
  uVar1 = param_1[1];
  puVar14 = (undefined8 *)*param_1;
  if (-1 < (char)*(byte *)((long)param_1 + 0x17)) {
    uVar1 = (ulong)*(byte *)((long)param_1 + 0x17);
    puVar14 = param_1;
  }
  func_0x00010a1512bc(puVar14,uVar1);
  if ((int)puVar14 == 0) {
    puVar14 = (undefined8 *)*param_1;
    if (-1 < *(char *)((long)param_1 + 0x17)) {
      puVar14 = param_1;
    }
    _opendir();
    if (puVar14 == (undefined8 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00010ad01310. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)*param_2)(param_1,param_2);
      return;
    }
    puVar10 = puVar14;
    _readdir();
    if (puVar10 != (undefined8 *)0x0) {
      do {
        pcVar15 = (char *)((long)puVar10 + 0x15);
        if ((*pcVar15 != '.') ||
           ((*(char *)((long)puVar10 + 0x16) != '\0' &&
            ((*(char *)((long)puVar10 + 0x16) != '.' || (*(char *)((long)puVar10 + 0x17) != '\0'))))
           )) {
          uVar1 = param_1[1];
          if (-1 < (char)*(byte *)((long)param_1 + 0x17)) {
            uVar1 = (ulong)*(byte *)((long)param_1 + 0x17);
          }
          FUN_10a003c90(&ppppuStack_88,uVar1 + 1,(long)&uStack_58 + 7);
          pppppuVar13 = (undefined8 *****)ppppuStack_88;
          if (-1 < cStack_71) {
            pppppuVar13 = &ppppuStack_88;
          }
          if (uVar1 != 0) {
            puVar10 = (undefined8 *)*param_1;
            if (-1 < *(char *)((long)param_1 + 0x17)) {
              puVar10 = param_1;
            }
            _memmove(pppppuVar13,puVar10,uVar1);
          }
          *(undefined2 *)((long)pppppuVar13 + uVar1) = 0x2f;
          pcVar11 = pcVar15;
          _strlen(pcVar15);
          pppppuVar13 = &ppppuStack_88;
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                    (pppppuVar13,pcVar15,pcVar11);
          uStack_68 = pppppuVar13[1];
          pppuStack_70 = *pppppuVar13;
          pppuStack_60 = pppppuVar13[2];
          pppppuVar13[1] = (undefined8 ****)0x0;
          pppppuVar13[2] = (undefined8 ****)0x0;
          *pppppuVar13 = (undefined8 ****)0x0;
          FUN_10ad01130(&pppuStack_70,param_2);
          if ((long)pppuStack_60 < 0) {
            __ZdlPv(pppuStack_70);
          }
          if (cStack_71 < '\0') {
            __ZdlPv(ppppuStack_88);
          }
        }
        puVar10 = puVar14;
        _readdir();
      } while (puVar10 != (undefined8 *)0x0);
    }
    _closedir(puVar14);
    return;
  }
  func_0x00010a151214();
  uVar1 = param_1[1];
  puVar10 = (undefined8 *)*param_1;
  if (-1 < (char)*(byte *)((long)param_1 + 0x17)) {
    uVar1 = (ulong)*(byte *)((long)param_1 + 0x17);
    puVar10 = param_1;
  }
  uVar9 = *puVar14;
  FUN_10a1513b8(&uStack_78,puVar10,uVar1);
  uStack_a8 = uStack_58;
  pppuStack_b0 = pppuStack_60;
  lStack_a0 = unaff_x26;
  FUN_10ad03508(&ppppuStack_90,&pppuStack_b0);
  if (lStack_a0 < 0) {
    __ZdlPv(pppuStack_b0);
  }
  lVar12 = (long)(char)bStack_79;
  if (lVar12 < 0) {
    if (((undefined8 *****)ppppuStack_88 == (undefined8 *****)0x0) ||
       (*(char *)((long)ppppuStack_90 + (long)ppppuStack_88 + -1) != '/')) goto LAB_10a151b3c;
    pppppuVar13 = (undefined8 *****)((long)ppppuStack_88 + -1);
    ppppuStack_88 = pppppuVar13;
  }
  else {
    if ((bStack_79 == 0) || ((&cStack_91)[lVar12] != '/')) goto LAB_10a151b3c;
    pppppuVar13 = (undefined8 *****)(lVar12 + -1);
    bStack_79 = (byte)pppppuVar13;
    ppppuStack_90 = &ppppuStack_90;
  }
  *(undefined1 *)((long)ppppuStack_90 + (long)pppppuVar13) = 0;
LAB_10a151b3c:
  FUN_10a151e50(&lStack_c0,uVar9,&uStack_78);
  puVar5 = (undefined7 *)CONCAT17(cStack_71,uStack_78);
  if (-1 < (char)uStack_68._7_1_) {
    pppuStack_70 = (undefined8 ****)(ulong)uStack_68._7_1_;
    puVar5 = &uStack_78;
  }
  FUN_10a151324(auStack_d8,puVar5,pppuStack_70);
  puVar14 = *(undefined8 **)(lStack_c0 + 0x18);
  func_0x0001092bce90(puVar14);
  plVar7 = (long *)*puVar14;
  (**(code **)(*plVar7 + 0x50))();
  lVar2 = plVar7[1];
  for (lVar12 = *plVar7; lVar12 != lVar2; lVar12 = lVar12 + 0x28) {
    lVar8 = lVar12;
    FUN_10a1520c4(lVar12,&ppppuStack_90);
    if ((int)lVar8 != 0) {
      FUN_10a0b4df8(auStack_108,auStack_d8,&pppuStack_60);
      pppppuVar13 = (undefined8 *****)ppppuStack_88;
      if (-1 < (char)bStack_79) {
        pppppuVar13 = (undefined8 *****)(ulong)bStack_79;
      }
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_mmRKS4_
                (&puStack_120,lVar12,pppppuVar13,0xffffffffffffffff,&stack0xffffffffffffffbf);
      uVar1 = uStack_118;
      ppuVar6 = (undefined1 **)puStack_120;
      if (-1 < (char)bStack_109) {
        uVar1 = (ulong)bStack_109;
        ppuVar6 = &puStack_120;
      }
      puVar14 = auStack_108;
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                (puVar14,ppuVar6,uVar1);
      uStack_e8 = puVar14[1];
      uStack_f0 = *puVar14;
      lStack_e0 = puVar14[2];
      puVar14[1] = 0;
      puVar14[2] = 0;
      *puVar14 = 0;
      (*(code *)*param_2)(&uStack_f0,param_2);
      if (lStack_e0 < 0) {
        __ZdlPv(uStack_f0);
      }
      if ((char)bStack_109 < '\0') {
        __ZdlPv(puStack_120);
      }
      if (cStack_f1 < '\0') {
        __ZdlPv(auStack_108[0]);
      }
    }
  }
  if (cStack_c1 < '\0') {
    __ZdlPv(auStack_d8[0]);
  }
  if (plStack_b8 != (long *)0x0) {
    plVar7 = plStack_b8 + 1;
    do {
      lVar12 = *plVar7;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar4) {
        *plVar7 = lVar12 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar12 == 0) {
      (**(code **)(*plStack_b8 + 0x10))(plStack_b8);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_b8);
    }
  }
  return;
}



/* Entry: 10ad01348; end: 10ad015ef;  */

/* WARNING: Removing unreachable block (ram,0x00010a14f950) */
/* WARNING: Removing unreachable block (ram,0x00010a14fcc0) */
/* WARNING: Removing unreachable block (ram,0x00010a14fd2c) */

ulong FUN_10ad01348(long *param_1,long *param_2)

{
  ulong uVar1;
  ulong uVar2;
  char cVar3;
  bool bVar4;
  long *******ppppppplVar5;
  ulong *puVar6;
  long ******pppppplVar7;
  long ******pppppplVar8;
  long *plVar9;
  undefined ********ppppppppuVar10;
  undefined ********ppppppppuVar11;
  undefined *******pppppppuVar12;
  ulong uVar13;
  uint uVar14;
  ulong uVar15;
  long lVar16;
  undefined8 *puVar17;
  undefined8 uVar18;
  undefined1 auStack_5c0 [4];
  ushort uStack_5bc;
  long lStack_5a0;
  long *plStack_598;
  undefined8 auStack_590 [2];
  char cStack_579;
  undefined8 uStack_578;
  ulong uStack_570;
  byte bStack_561;
  undefined ******ppppppuStack_560;
  undefined ******ppppppuStack_558;
  undefined ******ppppppuStack_550;
  undefined8 ******ppppppuStack_548;
  ulong uStack_540;
  byte bStack_531;
  undefined *******apppppppuStack_4f8 [2];
  char cStack_4e1;
  undefined *******apppppppuStack_4e0 [2];
  char cStack_4c9;
  undefined *******apppppppuStack_4c8 [2];
  char cStack_4b1;
  undefined **ppuStack_4b0;
  undefined1 auStack_4a8 [24];
  byte abStack_490 [384];
  undefined **appuStack_310 [19];
  undefined **appuStack_278 [2];
  undefined1 auStack_268 [16];
  byte abStack_258 [392];
  undefined ******appppppuStack_d0 [6];
  long lStack_a0;
  long *plStack_98;
  long lStack_90;
  long lStack_88;
  long lStack_80;
  undefined8 auStack_78 [2];
  char cStack_61;
  undefined8 auStack_60 [2];
  char cStack_49;
  long ******pppppplStack_48;
  ulong uStack_40;
  ulong uStack_38;
  
  uStack_38 = *(ulong *)PTR____stack_chk_guard_11034bdc0;
  plVar9 = (long *)*param_1;
  uVar14 = (uint)param_1[1];
  if (-1 < (char)*(byte *)((long)param_1 + 0x17)) {
    plVar9 = param_1;
    uVar14 = (uint)*(byte *)((long)param_1 + 0x17);
  }
  func_0x00010a1512bc();
  if ((int)plVar9 == 0) {
    plVar9 = (long *)*param_1;
    if (-1 < *(char *)((long)param_1 + 0x17)) {
      plVar9 = param_1;
    }
    func_0x000107c2b054(apppppppuStack_4c8,plVar9);
    plVar9 = (long *)*param_2;
    if (-1 < *(char *)((long)param_2 + 0x17)) {
      plVar9 = param_2;
    }
    uVar14 = (uint)plVar9;
    func_0x000107c2b054(apppppppuStack_4e0);
    FUN_10ad00f3c(apppppppuStack_4f8,apppppppuStack_4e0);
    ppppppppuVar10 = apppppppuStack_4f8;
    FUN_10ad00cf8();
    if (((ulong)ppppppppuVar10 & 1) == 0) {
      uVar13 = 0;
    }
    else {
      func_0x000107c28038(appuStack_278,apppppppuStack_4c8,4);
      func_0x000107c2800c(&ppuStack_4b0,apppppppuStack_4e0,4);
      if (((abStack_258[(long)appuStack_278[0][-3]] & 5) == 0) &&
         ((abStack_490[(long)ppuStack_4b0[-3]] & 5) == 0)) {
        __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEPNS_15basic_streambufIcS2_EE
                  (&ppuStack_4b0,auStack_268);
        uVar13 = 1;
      }
      else {
        uVar13 = 0;
      }
      ppuStack_4b0 = &PTR_DAT_11087cb40;
      appuStack_310[0] = &PTR_DAT_11087cb68;
      func_0x000107c28018(auStack_4a8);
      __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEED2Ev(&ppuStack_4b0,&PTR_PTR_11087cb80);
      __ZNSt3__19basic_iosIcNS_11char_traitsIcEEED2Ev(appuStack_310);
      appuStack_278[0] = &PTR_DAT_11087cf48;
      appppppuStack_d0[0] = (undefined ******)&PTR_DAT_11087cf70;
      func_0x000107c28018(auStack_268);
      uVar14 = 0x1087cf88;
      __ZNSt3__113basic_istreamIcNS_11char_traitsIcEEED2Ev(appuStack_278);
      ppppppppuVar10 = (undefined ********)appppppuStack_d0;
      __ZNSt3__19basic_iosIcNS_11char_traitsIcEEED2Ev();
    }
    if (cStack_4e1 < '\0') {
      ppppppppuVar10 = (undefined ********)apppppppuStack_4f8[0];
      __ZdlPv();
    }
    if (cStack_4c9 < '\0') {
      ppppppppuVar10 = (undefined ********)apppppppuStack_4e0[0];
      __ZdlPv();
    }
    if (cStack_4b1 < '\0') {
      ppppppppuVar10 = (undefined ********)apppppppuStack_4c8[0];
      __ZdlPv();
    }
    if (*(ulong *)PTR____stack_chk_guard_11034bdc0 == uStack_38) {
      return uVar13;
    }
  }
  else {
    func_0x00010a151214();
    ppppppppuVar10 = (undefined ********)*plVar9;
    if (*(ulong *)PTR____stack_chk_guard_11034bdc0 == uStack_38) {
      if (*(char *)((long)param_1 + 0x17) < '\0') {
        func_0x000107c3192c(&lStack_90,*param_1,param_1[1]);
      }
      else {
        lStack_88 = param_1[1];
        lStack_90 = *param_1;
        lStack_80 = param_1[2];
      }
      FUN_10ad03508(&pppppplStack_48,&lStack_90);
      ppppppplVar5 = (long *******)pppppplStack_48;
      if (-1 < (long)uStack_38) {
        uStack_40 = uStack_38 >> 0x38;
        ppppppplVar5 = &pppppplStack_48;
      }
      FUN_10a1513b8(auStack_78,ppppppplVar5,uStack_40);
      if (lStack_80 < 0) {
        __ZdlPv(lStack_90);
      }
      FUN_10a151e50(&lStack_a0,ppppppppuVar10,auStack_78);
      if (*(int *)(lStack_a0 + 0x28) == 1) {
        uVar18 = *(undefined8 *)(lStack_a0 + 0x18);
        FUN_10a09d9a0(&pppppplStack_48,param_2,0);
        func_0x0001092bee64(uVar18,auStack_60,&pppppplStack_48);
        param_2 = (long *)0x1;
      }
      else {
        func_0x0001092beca0(&pppppplStack_48,*(undefined8 *)(lStack_a0 + 0x18),auStack_60);
        if ((long *******)pppppplStack_48 == (long *******)0x0) {
          param_2 = (long *)0x0;
        }
        else {
          pppppplVar7 = (long ******)*pppppplStack_48;
          (*(code *)**pppppplVar7)();
          pppppplVar8 = (long ******)*pppppplStack_48;
          (*(code *)(*pppppplVar8)[3])();
          FUN_10ad00d7c(param_2,pppppplVar7,pppppplVar8);
          pppppplVar7 = pppppplStack_48;
          pppppplStack_48 = (long ******)0x0;
          if ((long *******)pppppplVar7 != (long *******)0x0) {
            pppppplVar8 = (long ******)*pppppplVar7;
            *pppppplVar7 = (long *****)0x0;
            if (pppppplVar8 != (long ******)0x0) {
              (*(code *)(*pppppplVar8)[8])();
            }
            __ZdlPv(pppppplVar7);
          }
        }
      }
      if (plStack_98 != (long *)0x0) {
        plVar9 = plStack_98 + 1;
        do {
          lVar16 = *plVar9;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar9,0x10);
          if (bVar4) {
            *plVar9 = lVar16 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (lVar16 == 0) {
          (**(code **)(*plStack_98 + 0x10))(plStack_98);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_98);
        }
      }
      if (cStack_49 < '\0') {
        __ZdlPv(auStack_60[0]);
      }
      if (cStack_61 < '\0') {
        __ZdlPv(auStack_78[0]);
      }
      return (ulong)param_2;
    }
  }
  ___stack_chk_fail();
  func_0x000107c28010(&ppuStack_4b0);
  func_0x000107c2803c(appuStack_278);
  if (cStack_4e1 < '\0') {
    __ZdlPv(apppppppuStack_4f8[0]);
  }
  if (cStack_4c9 < '\0') {
    __ZdlPv(apppppppuStack_4e0[0]);
  }
  if (cStack_4b1 < '\0') {
    __ZdlPv(apppppppuStack_4c8[0]);
  }
  __Unwind_Resume();
  pppppppuVar12 = ppppppppuVar10[1];
  ppppppppuVar11 = (undefined ********)*ppppppppuVar10;
  if (-1 < (char)*(byte *)((long)ppppppppuVar10 + 0x17)) {
    pppppppuVar12 = (undefined *******)(ulong)*(byte *)((long)ppppppppuVar10 + 0x17);
    ppppppppuVar11 = ppppppppuVar10;
  }
  func_0x00010a1512bc(ppppppppuVar11,pppppppuVar12);
  if ((int)ppppppppuVar11 == 0) {
    ppppppppuVar11 = (undefined ********)*ppppppppuVar10;
    if (-1 < *(char *)((long)ppppppppuVar10 + 0x17)) {
      ppppppppuVar11 = ppppppppuVar10;
    }
    _stat(ppppppppuVar11,auStack_5c0);
    uVar13 = (ulong)((uStack_5bc & uVar14) != 0 && (int)ppppppppuVar11 != -1);
  }
  else {
    func_0x00010a151214();
    if ((uVar14 >> 0xf & 1) != 0) {
      pppppppuVar12 = *ppppppppuVar11;
      FUN_10a14f9c4(pppppppuVar12,ppppppppuVar10);
      if (((ulong)pppppppuVar12 & 1) != 0) {
        return 1;
      }
    }
    if ((uVar14 >> 0xe & 1) != 0) {
      pppppppuVar12 = *ppppppppuVar11;
      if (*(char *)((long)ppppppppuVar10 + 0x17) < '\0') {
        func_0x000107c3192c(&ppppppuStack_560,*ppppppppuVar10,ppppppppuVar10[1]);
      }
      else {
        ppppppuStack_558 = (undefined ******)ppppppppuVar10[1];
        ppppppuStack_560 = (undefined ******)*ppppppppuVar10;
        ppppppuStack_550 = (undefined ******)ppppppppuVar10[2];
      }
      FUN_10ad03508(&ppppppuStack_548,&ppppppuStack_560);
      if ((long)ppppppuStack_550 < 0) {
        __ZdlPv(ppppppuStack_560);
      }
      if (-1 < (char)bStack_531) {
        uStack_540 = (ulong)bStack_531;
        ppppppuStack_548 = &ppppppuStack_548;
      }
      FUN_10a1513b8(auStack_590,ppppppuStack_548,uStack_540);
      FUN_10a151e50(&lStack_5a0,pppppppuVar12,auStack_590);
      puVar17 = *(undefined8 **)(lStack_5a0 + 0x18);
      func_0x0001092bce90(puVar17);
      puVar6 = (ulong *)*puVar17;
      (**(code **)(*puVar6 + 0x50))();
      uVar13 = *puVar6;
      uVar2 = puVar6[1];
      if (uVar13 != uVar2) {
        uVar1 = uStack_570;
        if (-1 < (char)bStack_561) {
          uVar1 = (ulong)bStack_561;
        }
        do {
          uVar15 = (ulong)*(char *)(uVar13 + 0x17);
          if ((long)uVar15 < 0) {
            uVar15 = *(ulong *)(uVar13 + 8);
          }
          if ((uVar1 < uVar15) &&
             (uVar15 = uVar13, FUN_10a1520c4(uVar13,&uStack_578), (uVar15 & 1) != 0)) {
            uVar13 = 1;
            goto LAB_10a14f8f0;
          }
          uVar13 = uVar13 + 0x28;
        } while (uVar13 != uVar2);
      }
      uVar13 = 0;
LAB_10a14f8f0:
      if (plStack_598 != (long *)0x0) {
        plVar9 = plStack_598 + 1;
        do {
          lVar16 = *plVar9;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar9,0x10);
          if (bVar4) {
            *plVar9 = lVar16 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (lVar16 == 0) {
          (**(code **)(*plStack_598 + 0x10))(plStack_598);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_598);
        }
      }
      if ((char)bStack_561 < '\0') {
        __ZdlPv(uStack_578);
      }
      if (cStack_579 < '\0') {
        __ZdlPv(auStack_590[0]);
      }
      return uVar13;
    }
    uVar13 = 0;
  }
  return uVar13;
}



/* Entry: 10ad015f0; end: 10ad016b7;  */

/* WARNING: Removing unreachable block (ram,0x00010a14f950) */

bool FUN_10ad015f0(ulong *param_1,uint param_2)

{
  long *plVar1;
  ulong uVar2;
  ulong uVar3;
  char cVar4;
  bool bVar5;
  bool bVar6;
  ulong *puVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  undefined8 *puVar11;
  undefined1 auStack_c0 [4];
  ushort uStack_bc;
  long lStack_a0;
  long *plStack_98;
  undefined8 auStack_90 [2];
  char cStack_79;
  undefined8 uStack_78;
  ulong uStack_70;
  byte bStack_61;
  ulong uStack_60;
  ulong uStack_58;
  ulong uStack_50;
  undefined8 *****pppppuStack_48;
  ulong uStack_40;
  byte bStack_31;
  
  uVar8 = param_1[1];
  puVar7 = (ulong *)*param_1;
  if (-1 < (char)*(byte *)((long)param_1 + 0x17)) {
    uVar8 = (ulong)*(byte *)((long)param_1 + 0x17);
    puVar7 = param_1;
  }
  func_0x00010a1512bc(puVar7,uVar8);
  if ((int)puVar7 == 0) {
    puVar7 = (ulong *)*param_1;
    if (-1 < *(char *)((long)param_1 + 0x17)) {
      puVar7 = param_1;
    }
    _stat(puVar7,auStack_c0);
    bVar6 = (uStack_bc & param_2) != 0 && (int)puVar7 != -1;
  }
  else {
    func_0x00010a151214();
    if ((param_2 >> 0xf & 1) != 0) {
      uVar8 = *puVar7;
      FUN_10a14f9c4(uVar8,param_1);
      if ((uVar8 & 1) != 0) {
        return true;
      }
    }
    if ((param_2 >> 0xe & 1) != 0) {
      uVar8 = *puVar7;
      if (*(char *)((long)param_1 + 0x17) < '\0') {
        func_0x000107c3192c(&uStack_60,*param_1,param_1[1]);
      }
      else {
        uStack_58 = param_1[1];
        uStack_60 = *param_1;
        uStack_50 = param_1[2];
      }
      FUN_10ad03508(&pppppuStack_48,&uStack_60);
      if ((long)uStack_50 < 0) {
        __ZdlPv(uStack_60);
      }
      if (-1 < (char)bStack_31) {
        uStack_40 = (ulong)bStack_31;
        pppppuStack_48 = &pppppuStack_48;
      }
      FUN_10a1513b8(auStack_90,pppppuStack_48,uStack_40);
      FUN_10a151e50(&lStack_a0,uVar8,auStack_90);
      puVar11 = *(undefined8 **)(lStack_a0 + 0x18);
      func_0x0001092bce90(puVar11);
      puVar7 = (ulong *)*puVar11;
      (**(code **)(*puVar7 + 0x50))();
      uVar8 = *puVar7;
      uVar3 = puVar7[1];
      if (uVar8 != uVar3) {
        uVar2 = uStack_70;
        if (-1 < (char)bStack_61) {
          uVar2 = (ulong)bStack_61;
        }
        do {
          uVar9 = (ulong)*(char *)(uVar8 + 0x17);
          if ((long)uVar9 < 0) {
            uVar9 = *(ulong *)(uVar8 + 8);
          }
          if ((uVar2 < uVar9) && (uVar9 = uVar8, FUN_10a1520c4(uVar8,&uStack_78), (uVar9 & 1) != 0))
          {
            bVar6 = true;
            goto LAB_10a14f8f0;
          }
          uVar8 = uVar8 + 0x28;
        } while (uVar8 != uVar3);
      }
      bVar6 = false;
LAB_10a14f8f0:
      if (plStack_98 != (long *)0x0) {
        plVar1 = plStack_98 + 1;
        do {
          lVar10 = *plVar1;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar5) {
            *plVar1 = lVar10 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (lVar10 == 0) {
          (**(code **)(*plStack_98 + 0x10))(plStack_98);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_98);
        }
      }
      if ((char)bStack_61 < '\0') {
        __ZdlPv(uStack_78);
      }
      if (cStack_79 < '\0') {
        __ZdlPv(auStack_90[0]);
      }
      return bVar6;
    }
    bVar6 = false;
  }
  return bVar6;
}



/* Entry: 10ad016b8; end: 10ad0173b;  */

void FUN_10ad016b8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 auStack_48 [2];
  char cStack_31;
  
  func_0x000107c2b054(auStack_48,&UNK_10f6a2add);
  FUN_10ad0173c(param_1,param_2,auStack_48,param_3);
  if (cStack_31 < '\0') {
    __ZdlPv(auStack_48[0]);
  }
  return;
}



/* Entry: 10ad0173c; end: 10ad01a03;  */

void FUN_10ad0173c(ulong *param_1,ulong *param_2,undefined8 *param_3,long param_4)

{
  ulong uVar1;
  undefined5 *puVar2;
  code *pcVar3;
  undefined **ppuVar4;
  undefined8 *puVar5;
  ulong *puVar6;
  undefined8 in_x6;
  undefined8 in_x7;
  ulong uVar7;
  int iVar8;
  undefined5 uStack_90;
  undefined3 uStack_8b;
  undefined5 uStack_88;
  undefined3 uStack_83;
  byte bStack_79;
  undefined8 uStack_78;
  
  ppuVar4 = &PTR___tlv_bootstrap_11340ddc8;
  (*(code *)PTR___tlv_bootstrap_11340ddc8)();
  iVar8 = 0;
  do {
    if (*(char *)((long)param_2 + 0x17) < '\0') {
      func_0x000107c3192c(param_1,*param_2,param_2[1]);
    }
    else {
      uVar7 = *param_2;
      param_1[1] = param_2[1];
      *param_1 = uVar7;
      param_1[2] = param_2[2];
    }
    uVar7 = param_3[1];
    puVar5 = (undefined8 *)*param_3;
    if (-1 < (char)*(byte *)((long)param_3 + 0x17)) {
      uVar7 = (ulong)*(byte *)((long)param_3 + 0x17);
      puVar5 = param_3;
    }
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_1,puVar5,uVar7);
    uVar7 = 0;
    bStack_79 = 0xc;
    uStack_90 = 0;
    uStack_8b = 0;
    uStack_88 = 0;
    do {
      FUN_10a0095ac();
      uStack_78 = 0x3d00000000;
      puVar5 = &uStack_78;
      func_0x00010937f57c(puVar5,ppuVar4,&uStack_78);
      uVar1 = CONCAT35(uStack_83,uStack_88);
      if (-1 < (char)bStack_79) {
        uVar1 = (ulong)bStack_79;
      }
      if (uVar1 < uVar7) goto LAB_10ad01988;
      puVar2 = (undefined5 *)CONCAT35(uStack_8b,uStack_90);
      if (-1 < (char)bStack_79) {
        puVar2 = &uStack_90;
      }
      *(undefined *)((long)puVar2 + uVar7) = (&UNK_10e4b07dc)[(int)puVar5];
      uVar7 = uVar7 + 1;
    } while (uVar7 != 0xc);
    uVar7 = CONCAT35(uStack_83,uStack_88);
    puVar2 = (undefined5 *)CONCAT35(uStack_8b,uStack_90);
    if (-1 < (char)bStack_79) {
      uVar7 = (ulong)bStack_79;
      puVar2 = &uStack_90;
    }
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_1,puVar2,uVar7);
    if ((char)bStack_79 < '\0') {
      __ZdlPv(CONCAT35(uStack_8b,uStack_90));
    }
    uVar7 = *(ulong *)(param_4 + 8);
    if (-1 < (char)*(byte *)(param_4 + 0x17)) {
      uVar7 = (ulong)*(byte *)(param_4 + 0x17);
    }
    if (uVar7 != 0) {
      __ZNSt3__1plIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_12basic_stringIT_T0_T1_EEPKS6_RKS9_
                (&uStack_90,&DAT_10f62a9de,param_4);
      uVar7 = CONCAT35(uStack_83,uStack_88);
      puVar2 = (undefined5 *)CONCAT35(uStack_8b,uStack_90);
      if (-1 < (char)bStack_79) {
        uVar7 = (ulong)bStack_79;
        puVar2 = &uStack_90;
      }
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                (param_1,puVar2,uVar7);
      if ((char)bStack_79 < '\0') {
        __ZdlPv(CONCAT35(uStack_8b,uStack_90));
      }
    }
    puVar6 = param_1;
    FUN_10ad01a04();
    if ((((ulong)puVar6 & 1) == 0) &&
       (puVar6 = param_1, FUN_10ad015f0(param_1,0x4000), (int)puVar6 == 0)) {
      return;
    }
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_1,&UNK_10f6a2ade,0x24);
    if ((bRam000000011330a9e8 & 1) != 0) {
      puVar6 = (ulong *)*param_1;
      if (-1 < *(char *)((long)param_1 + 0x17)) {
        puVar6 = param_1;
      }
      func_0x00010ae06f08(0,1,&UNK_10f6a2b03,&UNK_10f6a2b2d,0x102,"%s",in_x6,in_x7,puVar6);
    }
    if (*(char *)((long)param_1 + 0x17) < '\0') {
      __ZdlPv(*param_1);
    }
    iVar8 = iVar8 + 1;
  } while (iVar8 != 100);
  __ZNSt3__1plIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_12basic_stringIT_T0_T1_EEPKS6_RKS9_
            (&uStack_90,&UNK_10f6a2ba5,param_2);
  FUN_10a0029c0(&uStack_90);
LAB_10ad01988:
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x10ad0198c);
  (*pcVar3)();
}



/* Entry: 10ad01a04; end: 10ad01b0b;  */

undefined8 * FUN_10ad01a04(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 uStack_70;
  undefined8 uStack_68;
  long lStack_60;
  undefined8 auStack_58 [2];
  char cStack_41;
  undefined8 uStack_40;
  undefined8 uStack_38;
  long lStack_30;
  
  if (*(char *)((long)param_1 + 0x17) < '\0') {
    func_0x000107c3192c(&uStack_40,*param_1,param_1[1]);
  }
  else {
    uStack_38 = param_1[1];
    uStack_40 = *param_1;
    lStack_30 = param_1[2];
  }
  if (lStack_30 < 0) {
    func_0x000107c3192c(&uStack_70,uStack_40,uStack_38);
  }
  else {
    uStack_68 = uStack_38;
    uStack_70 = uStack_40;
    lStack_60 = lStack_30;
  }
  FUN_10ad03508(auStack_58,&uStack_70);
  if (lStack_60 < 0) {
    __ZdlPv(uStack_70);
  }
  puVar1 = auStack_58;
  FUN_10ad015f0(puVar1,0xc000);
  if (cStack_41 < '\0') {
    __ZdlPv(auStack_58[0]);
  }
  if (lStack_30 < 0) {
    __ZdlPv(uStack_40);
  }
  return puVar1;
}



/* Entry: 10ad01b0c; end: 10ad01b9b;  */

void FUN_10ad01b0c(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined1 auStack_58 [48];
  byte bStack_28;
  
  FUN_10a0f1b8c(auStack_58,param_2,0);
  if ((bStack_28 & 1) != 0) {
    FUN_10a0f20c0(param_1,auStack_58);
    if (bStack_28 == 1) {
      FUN_10a0f1ea0(auStack_58);
    }
    return;
  }
  FUN_10a10a2f4(&UNK_10f6a2ad3,param_2);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10ad01b7c);
  (*pcVar1)();
}



/* Entry: 10ad01b9c; end: 10ad0210f;  */

void FUN_10ad01b9c(undefined8 *param_1,undefined8 *param_2)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  code **ppcVar5;
  long *plVar6;
  long *plVar7;
  ulong uVar8;
  undefined8 *puVar9;
  long *plVar10;
  code *pcStack_d0;
  long *plStack_c8;
  undefined8 *puStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  long lStack_a8;
  long lStack_98;
  long *plStack_90;
  long *plStack_88;
  long *plStack_80;
  code *pcStack_78;
  code *pcStack_70;
  long *plStack_68;
  undefined8 *puStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  long lStack_48;
  long lStack_38;
  
  ppcVar5 = &pcStack_d0;
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if (*(char *)((long)param_1 + 0x17) < '\0') {
    if (param_1[1] != 0) {
      func_0x000107c3192c(&pcStack_d0,*param_1);
      goto LAB_10ad01bf8;
    }
  }
  else if (*(char *)((long)param_1 + 0x17) != '\0') {
    plStack_c8 = (long *)param_1[1];
    pcStack_d0 = (code *)*param_1;
    puStack_c0 = (undefined8 *)param_1[2];
    ppcVar5 = (code **)param_1;
LAB_10ad01bf8:
    if (*(char *)((long)param_2 + 0x17) < '\0') {
      ppcVar5 = (code **)&uStack_b8;
      func_0x000107c3192c(ppcVar5,*param_2,param_2[1]);
    }
    else {
      uStack_b0 = param_2[1];
      uStack_b8 = *param_2;
      lStack_a8 = param_2[2];
    }
    FUN_109d1a80c();
    puVar9 = (undefined8 *)ppcVar5[9];
    plVar10 = (long *)puVar9[2];
    plStack_88 = (long *)0x0;
    plStack_80 = (long *)0x0;
    if (plVar10 == (long *)0x0) {
      if ((long)puStack_c0 < 0) {
        func_0x000107c3192c(&pcStack_70,pcStack_d0,plStack_c8);
      }
      else {
        plStack_68 = plStack_c8;
        pcStack_70 = pcStack_d0;
        puStack_60 = puStack_c0;
      }
      if (lStack_a8 < 0) {
        func_0x000107c3192c(&uStack_58,uStack_b8,uStack_b0);
      }
      else {
        uStack_50 = uStack_b0;
        uStack_58 = uStack_b8;
        lStack_48 = lStack_a8;
      }
      plVar7 = (long *)0xe8;
      __Znwm();
      *(undefined2 *)(plVar7 + 3) = 4;
      plVar7[2] = 0;
      plVar7[1] = 0x200000006;
      plVar7[5] = 0;
      plVar7[4] = 0;
      plVar7[7] = 0;
      plVar7[6] = 0;
      plVar7[9] = 0;
      plVar7[8] = 0;
      plVar7[0xb] = 0;
      plVar7[10] = 0;
      plVar7[0xd] = 0;
      plVar7[0xc] = 0;
      plVar7[0xf] = 0;
      plVar7[0xe] = 0;
      plVar7[0x12] = 0;
      plVar7[0x10] = 0;
      plVar7[0x11] = (long)(plVar7 + 3);
      *plVar7 = (long)&PTR_FUN_110c6e0e8;
      plVar10 = plVar7 + 0x14;
      *(undefined2 *)(plVar7 + 0x13) = 0;
      FUN_10ad02bc8(plVar10,&pcStack_70);
      plVar7[0x1c] = 0;
      if (plStack_88 != (long *)0x0) {
        puVar1 = (ulong *)(plStack_88 + 1);
        do {
          uVar8 = *puVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar3) {
            *puVar1 = uVar8 - 4;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if ((uVar8 & 0x1fffffffc) == 4) {
          do {
            uVar8 = *puVar1;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
            if (bVar3) {
              *puVar1 = uVar8 - 1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (uVar8 - 1 == 0) {
            (**(code **)(*plStack_88 + 8))();
          }
        }
      }
      plStack_88 = plVar7;
      if (plStack_80 != (long *)0x0) {
        func_0x0001092b4274(&plStack_80);
      }
      plStack_90 = plVar10;
      plStack_80 = plVar7;
      if (lStack_48 < 0) {
        __ZdlPv(uStack_58);
      }
      if ((long)puStack_60 < 0) {
        __ZdlPv(pcStack_70);
      }
      pcStack_78 = FUN_10ad02930;
    }
    else {
      lStack_98 = 0;
      (**(code **)(*plVar10 + 0x28))(plVar10,0,&lStack_98);
      if (lStack_98 != 0) goto LAB_10ad02038;
      if ((long)puStack_c0 < 0) {
        func_0x000107c3192c(&pcStack_70,pcStack_d0,plStack_c8);
      }
      else {
        plStack_68 = plStack_c8;
        pcStack_70 = pcStack_d0;
        puStack_60 = puStack_c0;
      }
      if (lStack_a8 < 0) {
        func_0x000107c3192c(&uStack_58,uStack_b8,uStack_b0);
      }
      else {
        uStack_50 = uStack_b0;
        uStack_58 = uStack_b8;
        lStack_48 = lStack_a8;
      }
      plVar6 = (long *)0xf0;
      __Znwm();
      plVar6[2] = 0;
      plVar6[1] = 0x200000006;
      *(undefined2 *)(plVar6 + 3) = 4;
      plVar6[5] = 0;
      plVar6[4] = 0;
      plVar6[7] = 0;
      plVar6[6] = 0;
      plVar6[9] = 0;
      plVar6[8] = 0;
      plVar6[0xb] = 0;
      plVar6[10] = 0;
      plVar6[0xd] = 0;
      plVar6[0xc] = 0;
      plVar6[0xf] = 0;
      plVar6[0xe] = 0;
      plVar6[0x10] = 0;
      plVar6[0x11] = (long)(plVar6 + 3);
      plVar6[0x12] = 0;
      *(undefined2 *)(plVar6 + 0x13) = 0;
      plVar7 = plVar6 + 0x14;
      *plVar6 = (long)&PTR_FUN_110c6e0b0;
      FUN_10ad02bc8(plVar7,&pcStack_70);
      plVar6[0x1c] = 0;
      plVar6[0x1d] = (long)plVar10;
      if (plStack_88 != (long *)0x0) {
        puVar1 = (ulong *)(plStack_88 + 1);
        do {
          uVar8 = *puVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar3) {
            *puVar1 = uVar8 - 4;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if ((uVar8 & 0x1fffffffc) == 4) {
          do {
            uVar8 = *puVar1;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
            if (bVar3) {
              *puVar1 = uVar8 - 1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (uVar8 - 1 == 0) {
            (**(code **)(*plStack_88 + 8))();
          }
        }
      }
      plStack_88 = plVar6;
      if (plStack_80 != (long *)0x0) {
        func_0x0001092b4274(&plStack_80);
      }
      plStack_90 = plVar7;
      plStack_80 = plVar6;
      if (lStack_48 < 0) {
        __ZdlPv(uStack_58);
      }
      if ((long)puStack_60 < 0) {
        __ZdlPv(pcStack_70);
      }
      pcStack_78 = FUN_10ad02900;
      __ZNSt13exception_ptrD1Ev(&lStack_98);
    }
    plVar10 = plStack_90;
    if (plStack_90[8] != 0) {
      func_0x0001092b4274();
    }
    plVar10[8] = (long)plStack_80;
    plStack_80 = (long *)0x0;
    pcStack_70 = pcStack_78;
    plStack_68 = plStack_90;
    puStack_60 = puVar9;
    (**(code **)*puVar9)(puVar9,&pcStack_70);
    plVar10 = plStack_88;
    plStack_88 = (long *)0x0;
    if (plStack_80 != (long *)0x0) {
      func_0x0001092b4274(&plStack_80);
      if (plStack_88 != (long *)0x0) {
        puVar1 = (ulong *)(plStack_88 + 1);
        do {
          uVar8 = *puVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar3) {
            *puVar1 = uVar8 - 4;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if ((uVar8 & 0x1fffffffc) == 4) {
          do {
            uVar8 = *puVar1;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
            if (bVar3) {
              *puVar1 = uVar8 - 1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (uVar8 - 1 == 0) {
            (**(code **)(*plStack_88 + 8))();
          }
        }
      }
    }
    if (plVar10 != (long *)0x0) {
      puVar1 = (ulong *)(plVar10 + 1);
      do {
        uVar8 = *puVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = uVar8 - 4;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if ((uVar8 & 0x1fffffffc) == 4) {
        do {
          uVar8 = *puVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar3) {
            *puVar1 = uVar8 - 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (uVar8 - 1 == 0) {
          (**(code **)(*plVar10 + 8))(plVar10);
        }
      }
    }
    if (lStack_a8 < 0) {
      __ZdlPv(uStack_b8);
    }
    if ((long)puStack_c0 < 0) {
      __ZdlPv(pcStack_d0);
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return;
  }
  ___stack_chk_fail();
LAB_10ad02038:
  func_0x0001092af97c(&lStack_98);
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x10ad02044);
  (*pcVar4)();
}



/* Entry: 10ad02110; end: 10ad0214f;  */

undefined8 * FUN_10ad02110(undefined8 *param_1)

{
  if (*(char *)((long)param_1 + 0x2f) < '\0') {
    __ZdlPv(param_1[3]);
  }
  if (*(char *)((long)param_1 + 0x17) < '\0') {
    __ZdlPv(*param_1);
  }
  return param_1;
}



/* Entry: 10ad02150; end: 10ad0220b;  */

undefined8 * FUN_10ad02150(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 uStack_50;
  undefined8 uStack_48;
  long lStack_40;
  undefined8 auStack_38 [2];
  char cStack_21;
  
  if (*(char *)((long)param_1 + 0x17) < '\0') {
    func_0x000107c3192c(&uStack_50,*param_1,param_1[1]);
  }
  else {
    uStack_48 = param_1[1];
    uStack_50 = *param_1;
    lStack_40 = param_1[2];
  }
  FUN_10ad03508(auStack_38,&uStack_50);
  if (lStack_40 < 0) {
    __ZdlPv(uStack_50);
  }
  puVar1 = auStack_38;
  FUN_10ad015f0(puVar1,0xc000);
  if (cStack_21 < '\0') {
    __ZdlPv(auStack_38[0]);
  }
  return puVar1;
}



/* Entry: 10ad0220c; end: 10ad0228f;  */

undefined8 FUN_10ad0220c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lStack_40;
  long lStack_38;
  char cStack_28;
  
  FUN_10ad02290(&lStack_40,param_1,param_3);
  if (cStack_28 == '\x01') {
    FUN_10ad00d7c(param_2,lStack_40,lStack_38 - lStack_40);
    if (lStack_40 != 0) {
      __ZdlPv(lStack_40);
    }
  }
  else {
    param_2 = 0;
  }
  return param_2;
}



/* Entry: 10ad02290; end: 10ad024ef;  */

/* WARNING: Removing unreachable block (ram,0x00010ad0230c) */

void FUN_10ad02290(undefined8 *param_1,long *param_2,undefined4 param_3,long param_4)

{
  undefined8 *puVar1;
  code *pcVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  ulong uVar7;
  undefined8 *puVar8;
  long lVar9;
  ulong uVar10;
  code **unaff_x22;
  long *plVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  int iStack_190;
  undefined4 uStack_18c;
  long lStack_188;
  undefined8 *puStack_178;
  undefined8 *puStack_170;
  undefined8 *puStack_168;
  undefined8 *puStack_160;
  long *plStack_158;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d0;
  undefined4 uStack_c8;
  undefined8 uStack_c4;
  undefined4 uStack_bc;
  undefined8 *puStack_b8;
  undefined8 **ppuStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 *puStack_90;
  undefined8 *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined **ppuStack_70;
  undefined8 **ppuStack_68;
  long *plStack_60;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_90 = (undefined8 *)0x0;
  puStack_88 = (undefined8 *)0x0;
  uStack_80 = 0;
  uStack_a8 = 0;
  uStack_a0 = 0;
  uStack_98 = 0;
  puStack_b8 = &uStack_a8;
  ppuStack_b0 = &puStack_90;
  plVar11 = param_2;
  FUN_10ad015f0(param_2,0x8000);
  if ((int)plVar11 == 0) {
    puVar5 = (undefined8 *)0x4000;
    plVar11 = param_2;
    FUN_10ad015f0(param_2,0x4000);
    if ((int)plVar11 != 0) {
      unaff_x22 = &pcStack_78;
      pcStack_78 = FUN_10ad030ac;
      ppuStack_70 = &PTR_FUN_110c6e150;
      ppuStack_68 = &puStack_b8;
      plStack_60 = param_2;
      FUN_10ad01130(param_2,&pcStack_78);
      (*(code *)*ppuStack_70)(&ppuStack_70);
      goto LAB_10ad02364;
    }
    *(undefined1 *)param_1 = 0;
    *(undefined1 *)(param_1 + 3) = 0;
  }
  else {
    FUN_10ad02700(&pcStack_78,param_2);
    FUN_10ad024f0(&puStack_b8,param_2,&pcStack_78);
LAB_10ad02364:
    uStack_d0 = 0x100000001;
    uStack_c4 = 1;
    uStack_bc = 0;
    uStack_c8 = param_3;
    func_0x0001092bcd24(&pcStack_78,&uStack_d0);
    uStack_f0 = 0;
    uStack_e8 = 0;
    uStack_e0 = 0;
    param_4 = (long)puStack_88 - (long)puStack_90;
    puVar5 = puStack_90;
    (**(code **)*plStack_60)(plStack_60,puStack_90,param_4,&uStack_a8,&uStack_f0);
    plVar11 = plStack_60;
    param_1[1] = uStack_e8;
    *param_1 = uStack_f0;
    param_1[2] = uStack_e0;
    *(undefined1 *)(param_1 + 3) = 1;
    plStack_60 = (long *)0x0;
    if (plVar11 != (long *)0x0) {
      (**(code **)(*plVar11 + 0x28))();
    }
  }
  FUN_10ad02e5c(&uStack_a8);
  puVar3 = puStack_90;
  if (puStack_90 != (undefined8 *)0x0) {
    puStack_88 = puStack_90;
    __ZdlPv();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return;
  }
  ___stack_chk_fail();
  (*(code *)*ppuStack_70)(unaff_x22 + 1);
  FUN_10ad02e5c(&uStack_a8);
  if (puStack_90 != (undefined8 *)0x0) {
    puStack_88 = puStack_90;
    __ZdlPv();
  }
  __Unwind_Resume();
  FUN_10ad00a7c(&iStack_190,puVar5);
  plVar11 = (long *)*puVar3;
  puVar5 = (undefined8 *)plVar11[1];
  puVar13 = (undefined8 *)plVar11[2];
  if (puVar5 < puVar13) {
    puVar5[4] = 0;
    puVar5[1] = 0;
    *puVar5 = 0;
    puVar5[3] = 0;
    puVar5[2] = 0;
    puVar5 = puVar5 + 5;
LAB_10ad02658:
    plVar11[1] = (long)puVar5;
    *(int *)(puVar5 + -2) = ((int *)puVar3[1])[2] - *(int *)puVar3[1];
    *(int *)(puVar5 + -1) = (int)lStack_188 - iStack_190;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_(puVar5 + -5,param_4);
    FUN_10a131794(puVar3[1],*(undefined8 *)(puVar3[1] + 8),CONCAT44(uStack_18c,iStack_190),
                  lStack_188,lStack_188 - CONCAT44(uStack_18c,iStack_190));
    if (CONCAT44(uStack_18c,iStack_190) != 0) {
      __ZdlPv();
    }
    return;
  }
  puVar12 = (undefined8 *)*plVar11;
  uVar7 = ((long)puVar5 - (long)puVar12 >> 3) * -0x3333333333333333 + 1;
  if (uVar7 < 0x666666666666667) {
    lVar9 = (long)puVar13 - (long)puVar12 >> 3;
    uVar10 = lVar9 * -0x6666666666666666;
    if (uVar10 < uVar7 || uVar10 - uVar7 == 0) {
      uVar10 = uVar7;
    }
    if (0x333333333333332 < (ulong)(lVar9 * -0x3333333333333333)) {
      uVar10 = 0x666666666666666;
    }
    plStack_158 = plVar11;
    if (uVar10 < 0x666666666666667) {
      puVar4 = (undefined8 *)(uVar10 * 0x28);
      __Znwm();
      puVar1 = (undefined8 *)((long)puVar4 + ((long)puVar5 - (long)puVar12));
      puVar1[4] = 0;
      puVar1[1] = 0;
      *puVar1 = 0;
      puVar1[3] = 0;
      puVar1[2] = 0;
      puVar6 = puVar12;
      puVar8 = puVar4;
      if (puVar12 != puVar5) {
        do {
          uVar15 = puVar6[1];
          uVar14 = *puVar6;
          puVar8[2] = puVar6[2];
          puVar8[1] = uVar15;
          *puVar8 = uVar14;
          puVar6[1] = 0;
          puVar6[2] = 0;
          *puVar6 = 0;
          uVar14 = puVar6[3];
          puVar8[4] = puVar6[4];
          puVar8[3] = uVar14;
          puVar6 = puVar6 + 5;
          puVar8 = puVar8 + 5;
        } while (puVar6 != puVar5);
        do {
          if (*(char *)((long)puVar12 + 0x17) < '\0') {
            __ZdlPv(*puVar12);
          }
          puVar12 = puVar12 + 5;
        } while (puVar12 != puVar5);
        puVar12 = (undefined8 *)*plVar11;
        puVar13 = (undefined8 *)plVar11[2];
      }
      puVar5 = puVar1 + 5;
      *plVar11 = (long)puVar4;
      plVar11[1] = (long)puVar5;
      plVar11[2] = (long)(puVar4 + uVar10 * 5);
      puStack_178 = puVar12;
      puStack_170 = puVar12;
      puStack_168 = puVar12;
      puStack_160 = puVar13;
      func_0x0001092a3c04(&puStack_178);
      goto LAB_10ad02658;
    }
    func_0x000109ffded8();
  }
  else {
    FUN_10ad02e48();
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10ad026e0);
  (*pcVar2)();
}



/* Entry: 10ad024f0; end: 10ad026ff;  */

void FUN_10ad024f0(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  code *pcVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  ulong uVar5;
  undefined8 *puVar6;
  long lVar7;
  ulong uVar8;
  long *plVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  int iStack_a0;
  undefined4 uStack_9c;
  long lStack_98;
  undefined8 *puStack_88;
  undefined8 *puStack_80;
  undefined8 *puStack_78;
  undefined8 *puStack_70;
  long *plStack_68;
  
  FUN_10ad00a7c(&iStack_a0,param_2);
  plVar9 = (long *)*param_1;
  puVar11 = (undefined8 *)plVar9[1];
  puVar12 = (undefined8 *)plVar9[2];
  if (puVar11 < puVar12) {
    puVar11[4] = 0;
    puVar11[1] = 0;
    *puVar11 = 0;
    puVar11[3] = 0;
    puVar11[2] = 0;
    puVar11 = puVar11 + 5;
LAB_10ad02658:
    plVar9[1] = (long)puVar11;
    *(int *)(puVar11 + -2) = ((int *)param_1[1])[2] - *(int *)param_1[1];
    *(int *)(puVar11 + -1) = (int)lStack_98 - iStack_a0;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_(puVar11 + -5,param_3);
    FUN_10a131794(param_1[1],*(undefined8 *)(param_1[1] + 8),CONCAT44(uStack_9c,iStack_a0),lStack_98
                  ,lStack_98 - CONCAT44(uStack_9c,iStack_a0));
    if (CONCAT44(uStack_9c,iStack_a0) != 0) {
      __ZdlPv();
    }
    return;
  }
  puVar10 = (undefined8 *)*plVar9;
  uVar5 = ((long)puVar11 - (long)puVar10 >> 3) * -0x3333333333333333 + 1;
  if (uVar5 < 0x666666666666667) {
    lVar7 = (long)puVar12 - (long)puVar10 >> 3;
    uVar8 = lVar7 * -0x6666666666666666;
    if (uVar8 < uVar5 || uVar8 - uVar5 == 0) {
      uVar8 = uVar5;
    }
    if (0x333333333333332 < (ulong)(lVar7 * -0x3333333333333333)) {
      uVar8 = 0x666666666666666;
    }
    plStack_68 = plVar9;
    if (uVar8 < 0x666666666666667) {
      puVar3 = (undefined8 *)(uVar8 * 0x28);
      __Znwm();
      puVar1 = (undefined8 *)((long)puVar3 + ((long)puVar11 - (long)puVar10));
      puVar1[4] = 0;
      puVar1[1] = 0;
      *puVar1 = 0;
      puVar1[3] = 0;
      puVar1[2] = 0;
      puVar4 = puVar10;
      puVar6 = puVar3;
      if (puVar10 != puVar11) {
        do {
          uVar14 = puVar4[1];
          uVar13 = *puVar4;
          puVar6[2] = puVar4[2];
          puVar6[1] = uVar14;
          *puVar6 = uVar13;
          puVar4[1] = 0;
          puVar4[2] = 0;
          *puVar4 = 0;
          uVar13 = puVar4[3];
          puVar6[4] = puVar4[4];
          puVar6[3] = uVar13;
          puVar4 = puVar4 + 5;
          puVar6 = puVar6 + 5;
        } while (puVar4 != puVar11);
        do {
          if (*(char *)((long)puVar10 + 0x17) < '\0') {
            __ZdlPv(*puVar10);
          }
          puVar10 = puVar10 + 5;
        } while (puVar10 != puVar11);
        puVar10 = (undefined8 *)*plVar9;
        puVar12 = (undefined8 *)plVar9[2];
      }
      puVar11 = puVar1 + 5;
      *plVar9 = (long)puVar3;
      plVar9[1] = (long)puVar11;
      plVar9[2] = (long)(puVar3 + uVar8 * 5);
      puStack_88 = puVar10;
      puStack_80 = puVar10;
      puStack_78 = puVar10;
      puStack_70 = puVar12;
      func_0x0001092a3c04(&puStack_88);
      goto LAB_10ad02658;
    }
    func_0x000109ffded8();
  }
  else {
    FUN_10ad02e48();
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10ad026e0);
  (*pcVar2)();
}



/* Entry: 10ad02700; end: 10ad0279b;  */

void FUN_10ad02700(undefined8 *param_1,long *param_2)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined1 uStack_11;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  lVar2 = (long)*(char *)((long)param_2 + 0x17);
  plVar1 = (long *)*param_2;
  if (-1 < lVar2) {
    plVar1 = param_2;
  }
  lVar4 = param_2[1];
  lVar3 = param_2[1];
  if (-1 < *(char *)((long)param_2 + 0x17)) {
    lVar4 = lVar2;
    lVar3 = lVar2;
  }
  do {
    if (lVar4 == 0) goto LAB_10ad02768;
    lVar2 = lVar4 + -1;
    lVar4 = lVar4 + -1;
  } while (*(char *)((long)plVar1 + lVar2) != '/');
  if (lVar4 == -1) {
LAB_10ad02768:
    do {
      if (lVar3 == 0) {
        return;
      }
      lVar2 = lVar3 + -1;
      lVar3 = lVar3 + -1;
    } while (*(char *)((long)plVar1 + lVar2) != '\\');
    lVar4 = lVar3;
    if (lVar3 == -1) {
      return;
    }
  }
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_mmRKS4_
            (param_1,param_2,lVar4 + 1,0xffffffffffffffff,&uStack_11);
  return;
}



/* Entry: 10ad0279c; end: 10ad028ff;  */

void FUN_10ad0279c(undefined8 *param_1,undefined8 *param_2)

{
  undefined ******ppppppuVar1;
  undefined *****pppppuVar2;
  undefined ******ppppppuVar3;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  long lStack_90;
  undefined *****pppppuStack_80;
  ulong uStack_78;
  byte bStack_69;
  undefined ****ppppuStack_68;
  undefined ****ppppuStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_98 = param_2[1];
  uStack_a0 = *param_2;
  lStack_90 = param_2[2];
  param_2[1] = 0;
  param_2[2] = 0;
  *param_2 = 0;
  FUN_10ad03508(&pppppuStack_80,&uStack_a0);
  if (lStack_90 < 0) {
    __ZdlPv(uStack_a0);
  }
  ppppppuVar3 = &pppppuStack_80;
  ppppppuVar1 = (undefined ******)pppppuStack_80;
  if (-1 < (char)bStack_69) {
    uStack_78 = (ulong)bStack_69;
    ppppppuVar1 = ppppppuVar3;
  }
  func_0x00010a1512bc(ppppppuVar1,uStack_78);
  if ((int)ppppppuVar1 == 0) {
    *param_1 = 0;
    param_1[1] = 0;
  }
  else {
    func_0x00010a151214();
    uStack_50 = 0;
    uStack_58 = 0;
    uStack_40 = 0;
    uStack_48 = 0;
    uStack_30 = 0;
    uStack_38 = 0;
    ppppppuVar3 = (undefined ******)&ppppuStack_68;
    ppppuStack_68 = (undefined ****)&UNK_1069b161c;
    ppppuStack_60 = (undefined ****)&PTR_DAT_110950c70;
    FUN_10a150300(param_1);
    ppppppuVar1 = (undefined ******)&ppppuStack_60;
    (*(code *)*ppppuStack_60)();
  }
  if ((char)bStack_69 < '\0') {
    ppppppuVar1 = (undefined ******)pppppuStack_80;
    __ZdlPv();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_28) {
    ___stack_chk_fail();
    (*(code *)*ppppuStack_60)(ppppppuVar3 + 1);
    if ((char)bStack_69 < '\0') {
      __ZdlPv(pppppuStack_80);
    }
    __Unwind_Resume();
    pppppuVar2 = ppppppuVar1[9];
    FUN_10ad02930();
                    /* WARNING: Could not recover jumptable at 0x00010ad0292c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(*pppppuVar2)[6])(pppppuVar2,0);
    return;
  }
  return;
}



/* Entry: 10ad02900; end: 10ad0292f;  */

void FUN_10ad02900(long param_1)

{
  long *plVar1;
  
  plVar1 = *(long **)(param_1 + 0x48);
  FUN_10ad02930();
                    /* WARNING: Could not recover jumptable at 0x00010ad0292c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x30))(plVar1,0);
  return;
}



/* Entry: 10ad02930; end: 10ad02acb;  */

undefined *** FUN_10ad02930(long *param_1)

{
  undefined ***pppuVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  undefined ***pppuVar5;
  int iVar6;
  undefined ***pppuVar7;
  undefined **ppuVar8;
  undefined ***pppuVar9;
  undefined **ppuStack_90;
  undefined **ppuStack_88;
  undefined **ppuStack_80;
  long *plStack_78;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if ((*(byte *)(param_1 + 7) & 1) == 0) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x10ad02a6c);
    (*pcVar4)();
  }
  pppuVar9 = (undefined ***)param_1[8];
  param_1[8] = 0;
  ppuStack_88 = (undefined **)0x10ad02d5c;
  ppuStack_80 = &PTR_FUN_110c6e110;
  pppuVar7 = &ppuStack_88;
  ppuStack_90 = (undefined **)pppuVar9;
  plStack_78 = param_1 + 3;
  FUN_10ad01130();
  pppuVar5 = &ppuStack_80;
  (*(code *)*ppuStack_80)();
  pppuVar1 = pppuVar9 + 2;
  do {
    ppuVar8 = *pppuVar1;
    if (ppuVar8 == (undefined **)0x0) {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(pppuVar1,0x10);
      if (bVar3) {
        *pppuVar1 = (undefined **)0x2;
        cVar2 = ExclusiveMonitorsStatus();
      }
      if (cVar2 == '\0') {
        pppuVar5 = pppuVar9 + 3;
        FUN_109d1b4dc();
        goto LAB_10ad029e4;
      }
    }
    else {
      ClearExclusiveLocal();
    }
    if (((uint)ppuVar8 >> 1 & 1) != 0) {
LAB_10ad029e4:
      while( true ) {
        if ((char)param_1[7] == '\x01') {
          if (*(char *)((long)param_1 + 0x2f) < '\0') {
            pppuVar5 = (undefined ***)param_1[3];
            __ZdlPv();
          }
          if (*(char *)((long)param_1 + 0x17) < '\0') {
            pppuVar5 = (undefined ***)*param_1;
            __ZdlPv();
          }
          *(undefined1 *)(param_1 + 7) = 0;
        }
        ppuStack_90 = (undefined **)0x0;
        if ((pppuVar9 != (undefined ***)0x0) &&
           (pppuVar5 = &ppuStack_90, func_0x0001092b4274(&ppuStack_90,pppuVar9),
           pppuVar7 = (undefined ***)ppuStack_90, (undefined ***)ppuStack_90 != (undefined ***)0x0))
        {
          pppuVar5 = &ppuStack_90;
          func_0x0001092b4274();
        }
        iVar6 = (int)pppuVar7;
        if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) break;
        ___stack_chk_fail();
        if (iVar6 == 0) {
          __Unwind_Resume(pppuVar5);
          func_0x000104bd46a0();
          *pppuVar5 = &PTR_FUN_110c6e0b0;
          if (pppuVar5[0x1c] != (undefined **)0x0) {
            func_0x0001092b4274();
          }
          if (*(char *)(pppuVar5 + 0x1b) == '\x01') {
            if (*(char *)((long)pppuVar5 + 0xcf) < '\0') {
              __ZdlPv(pppuVar5[0x17]);
            }
            if (*(char *)((long)pppuVar5 + 0xb7) < '\0') {
              __ZdlPv(pppuVar5[0x14]);
            }
          }
          *pppuVar5 = &PTR_DAT_110ae8be8;
          __ZNSt13exception_ptrD1Ev(pppuVar5 + 0x12);
          *pppuVar5 = &PTR_DAT_110ae8c08;
          return pppuVar5;
        }
        (*(code *)*ppuStack_80)(&ppuStack_80);
        ___cxa_begin_catch(pppuVar5);
        __ZSt17current_exceptionv(&ppuStack_88);
        pppuVar7 = &ppuStack_88;
        func_0x000109d1b350(pppuVar9);
        pppuVar5 = &ppuStack_88;
        __ZNSt13exception_ptrD1Ev();
        ___cxa_end_catch();
      }
      return pppuVar5;
    }
  } while( true );
}



/* Entry: 10ad02acc; end: 10ad02bc7;  */

undefined8 * FUN_10ad02acc(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c6e0b0;
  if (param_1[0x1c] != 0) {
    func_0x0001092b4274();
  }
  if (*(char *)(param_1 + 0x1b) == '\x01') {
    if (*(char *)((long)param_1 + 0xcf) < '\0') {
      __ZdlPv(param_1[0x17]);
    }
    if (*(char *)((long)param_1 + 0xb7) < '\0') {
      __ZdlPv(param_1[0x14]);
    }
  }
  *param_1 = &PTR_DAT_110ae8be8;
  __ZNSt13exception_ptrD1Ev(param_1 + 0x12);
  *param_1 = &PTR_DAT_110ae8c08;
  return param_1;
}



/* Entry: 10ad02bc8; end: 10ad02c5f;  */

undefined8 * FUN_10ad02bc8(undefined8 *param_1,undefined8 *param_2)

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
  if (*(char *)((long)param_2 + 0x2f) < '\0') {
    func_0x000107c3192c(param_1 + 3,param_2[3],param_2[4]);
  }
  else {
    uVar2 = param_2[4];
    uVar1 = param_2[3];
    param_1[5] = param_2[5];
    param_1[4] = uVar2;
    param_1[3] = uVar1;
  }
  *(undefined1 *)(param_1 + 7) = 1;
  return param_1;
}



/* Entry: 10ad02c60; end: 10ad02e13;  */

undefined8 * FUN_10ad02c60(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c6e0e8;
  if (param_1[0x1c] != 0) {
    func_0x0001092b4274();
  }
  if (*(char *)(param_1 + 0x1b) == '\x01') {
    if (*(char *)((long)param_1 + 0xcf) < '\0') {
      __ZdlPv(param_1[0x17]);
    }
    if (*(char *)((long)param_1 + 0xb7) < '\0') {
      __ZdlPv(param_1[0x14]);
    }
  }
  *param_1 = &PTR_DAT_110ae8be8;
  __ZNSt13exception_ptrD1Ev(param_1 + 0x12);
  *param_1 = &PTR_DAT_110ae8c08;
  return param_1;
}



/* Entry: 10ad02e14; end: 10ad02e47;  */

void FUN_10ad02e14(void)

{
  return;
}



/* Entry: 10ad02e48; end: 10ad02e5b;  */

/* WARNING: Removing unreachable block (ram,0x00010ad02e94) */

void FUN_10ad02e48(void)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  plVar1 = (long *)&DAT_10f62a4d8;
  FUN_109ffde64();
  lVar3 = *plVar1;
  if (lVar3 == 0) {
    return;
  }
  lVar4 = plVar1[1];
  lVar2 = lVar3;
  if (lVar4 != lVar3) {
    do {
      lVar4 = lVar4 + -0x28;
    } while (lVar4 != lVar3);
    lVar2 = *plVar1;
  }
  plVar1[1] = lVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(lVar2);
  return;
}



/* Entry: 10ad02e5c; end: 10ad02ecb;  */

/* WARNING: Removing unreachable block (ram,0x00010ad02e94) */

void FUN_10ad02e5c(long *param_1)

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
      lVar3 = lVar3 + -0x28;
    } while (lVar3 != lVar2);
    lVar1 = *param_1;
  }
  param_1[1] = lVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(lVar1);
  return;
}



/* Entry: 10ad02ecc; end: 10ad03067;  */

void FUN_10ad02ecc(ulong param_1,long param_2)

{
  ulong uVar1;
  undefined8 *puVar2;
  undefined1 **ppuVar3;
  undefined8 ***pppuVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined1 *puStack_90;
  ulong uStack_88;
  byte bStack_79;
  undefined8 **appuStack_78 [2];
  char cStack_61;
  undefined8 *puStack_60;
  undefined8 *puStack_58;
  undefined8 *puStack_50;
  undefined1 uStack_41;
  
  if (**(char **)(param_2 + 0x10) == '\x01') {
    puVar6 = *(undefined8 **)(param_2 + 0x18);
    uVar1 = puVar6[1];
    if (-1 < (char)*(byte *)((long)puVar6 + 0x17)) {
      uVar1 = (ulong)*(byte *)((long)puVar6 + 0x17);
    }
    FUN_10a003c90(appuStack_78,uVar1 + 1,&puStack_90);
    pppuVar4 = (undefined8 ***)appuStack_78[0];
    if (-1 < cStack_61) {
      pppuVar4 = appuStack_78;
    }
    if (uVar1 != 0) {
      puVar2 = (undefined8 *)*puVar6;
      if (-1 < *(char *)((long)puVar6 + 0x17)) {
        puVar2 = puVar6;
      }
      _memmove(pppuVar4,puVar2,uVar1);
    }
    *(undefined2 *)((long)pppuVar4 + uVar1) = 0x2f;
    lVar5 = (long)*(char *)(*(long *)(param_2 + 0x20) + 0x17);
    if (lVar5 < 0) {
      lVar5 = *(long *)(*(long *)(param_2 + 0x20) + 8);
    }
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_mmRKS4_
              (&puStack_90,param_1,lVar5,0xffffffffffffffff,&uStack_41);
    ppuVar3 = (undefined1 **)puStack_90;
    if (-1 < (char)bStack_79) {
      uStack_88 = (ulong)bStack_79;
      ppuVar3 = &puStack_90;
    }
    pppuVar4 = appuStack_78;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (pppuVar4,ppuVar3,uStack_88);
    puStack_58 = pppuVar4[1];
    puStack_60 = *pppuVar4;
    puStack_50 = pppuVar4[2];
    pppuVar4[1] = (undefined8 **)0x0;
    pppuVar4[2] = (undefined8 **)0x0;
    *pppuVar4 = (undefined8 **)0x0;
    if ((char)bStack_79 < '\0') {
      __ZdlPv(puStack_90);
    }
    if (cStack_61 < '\0') {
      __ZdlPv(appuStack_78[0]);
    }
    FUN_10ad01348(param_1,&puStack_60);
    if ((param_1 & 1) == 0) {
      **(undefined1 **)(param_2 + 0x10) = 0;
    }
    if ((long)puStack_50 < 0) {
      __ZdlPv(puStack_60);
    }
  }
  return;
}



/* Entry: 10ad03068; end: 10ad030ab;  */

void FUN_10ad03068(void)

{
  return;
}



/* Entry: 10ad030ac; end: 10ad0312f;  */

void FUN_10ad030ac(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 auStack_40 [2];
  char cStack_29;
  undefined1 uStack_21;
  
  uVar1 = *(undefined8 *)(param_2 + 0x10);
  lVar2 = (long)*(char *)(*(long *)(param_2 + 0x18) + 0x17);
  if (lVar2 < 0) {
    lVar2 = *(long *)(*(long *)(param_2 + 0x18) + 8);
  }
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_mmRKS4_
            (auStack_40,param_1,lVar2,0xffffffffffffffff,&uStack_21);
  FUN_10ad024f0(uVar1,param_1,auStack_40);
  if (cStack_29 < '\0') {
    __ZdlPv(auStack_40[0]);
  }
  return;
}



/* Entry: 10ad03130; end: 10ad03163;  */

void FUN_10ad03130(void)

{
  return;
}



/* Entry: 10ad03164; end: 10ad0338b;  */

undefined8 FUN_10ad03164(void)

{
  undefined1 uStack_21;
  undefined1 **ppuStack_20;
  undefined1 *puStack_18;
  
  if (lRam0000000113835df0 != -1) {
    puStack_18 = &uStack_21;
    ppuStack_20 = &puStack_18;
    __ZNSt3__111__call_onceERVmPvPFvS2_E(0x113835df0,&ppuStack_20,FUN_10ad04610);
  }
  return 0x113835d40;
}



/* Entry: 10ad0338c; end: 10ad03447;  */

void FUN_10ad0338c(long *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 auStack_70 [2];
  char cStack_59;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  char cStack_41;
  undefined8 uStack_40;
  byte *pbStack_38;
  byte bStack_29;
  undefined8 **ppuStack_28;
  
  bStack_29 = 0;
  pbStack_38 = &bStack_29;
  uStack_40 = param_2;
  if (*param_1 != -1) {
    puStack_58 = &uStack_40;
    ppuStack_28 = &puStack_58;
    uStack_50 = param_3;
    __ZNSt3__111__call_onceERVmPvPFvS2_E(param_1,&ppuStack_28,FUN_10ad04560);
  }
  if ((bStack_29 & 1) == 0) {
    FUN_10a09d9a0(auStack_70,param_3,0);
    FUN_10ad03448(&puStack_58,auStack_70);
    if (cStack_59 < '\0') {
      __ZdlPv(auStack_70[0]);
    }
    if (cStack_41 < '\0') {
      __ZdlPv(puStack_58);
    }
  }
  return;
}



/* Entry: 10ad03448; end: 10ad03507;  */

void FUN_10ad03448(undefined8 *param_1,undefined8 *param_2)

{
  code *pcVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  
  if (*(char *)((long)param_2 + 0x17) < '\0') {
    if (param_2[1] == 0) goto LAB_10ad034a0;
    func_0x000107c3192c(param_1,*param_2);
  }
  else {
    if (*(char *)((long)param_2 + 0x17) == '\0') {
LAB_10ad034a0:
      *(undefined1 *)((long)param_1 + 0x17) = 1;
      *(undefined2 *)param_1 = 0x2f;
      return;
    }
    uVar4 = *param_2;
    param_1[1] = param_2[1];
    *param_1 = uVar4;
    param_1[2] = param_2[2];
  }
  lVar2 = (long)*(char *)((long)param_1 + 0x17);
  if (lVar2 < 0) {
    lVar2 = param_1[1];
    if (lVar2 == 0) goto LAB_10ad034e8;
    puVar3 = (undefined8 *)*param_1;
  }
  else {
    puVar3 = param_1;
    if (*(char *)((long)param_1 + 0x17) == '\0') {
LAB_10ad034e8:
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10ad034ec);
      (*pcVar1)();
    }
  }
  if (*(char *)((long)puVar3 + lVar2 + -1) != '/') {
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE9push_backEc(param_1,0x2f);
  }
  return;
}



/* Entry: 10ad03508; end: 10ad03a43;  */

undefined8 * FUN_10ad03508(undefined8 *param_1,ulong param_2,ulong param_3)

{
  uint uVar1;
  char cVar2;
  char cVar3;
  code *pcVar4;
  int iVar5;
  int iVar6;
  undefined8 *extraout_x8;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  undefined8 *puVar10;
  int iVar11;
  undefined8 *puVar12;
  long lVar13;
  uint uVar14;
  ulong uVar15;
  int iVar16;
  ulong uVar17;
  ulong uVar18;
  uint uVar19;
  ulong uVar20;
  ulong uVar21;
  undefined8 uVar22;
  undefined8 uStack_1090;
  undefined8 uStack_1088;
  undefined7 uStack_1080;
  undefined1 uStack_1079;
  undefined8 uStack_90;
  undefined8 uStack_88;
  long lStack_80;
  
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  uStack_88 = param_1[1];
  uStack_90 = *param_1;
  lStack_80 = param_1[2];
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = 0;
  FUN_10a1a7cf8(&uStack_1090,&uStack_90);
  if (*(char *)((long)param_1 + 0x17) < '\0') {
    __ZdlPv(*param_1);
  }
  param_1[1] = uStack_1088;
  *param_1 = CONCAT71(uStack_1090._1_7_,(undefined1)uStack_1090);
  param_1[2] = CONCAT17(uStack_1079,uStack_1080);
  uStack_1079 = 0;
  uStack_1090._0_1_ = 0;
  if (lStack_80 < 0) {
    __ZdlPv(uStack_90);
  }
  uVar15 = 0;
  uVar20 = 0xffffffff;
  uVar17 = 0xffffffff;
LAB_10ad035bc:
  iVar5 = (int)param_3;
  iVar6 = (int)param_2;
  uVar14 = (uint)uVar15;
  uVar7 = (ulong)(int)uVar14;
  cVar3 = *(char *)((long)param_1 + 0x17);
  iVar11 = (int)cVar3;
  uVar21 = (ulong)iVar11;
  iVar16 = (int)uVar17;
  if (iVar11 < 0) {
    uVar9 = param_1[1];
    if (uVar9 <= uVar7) {
      puVar10 = (undefined8 *)*param_1;
      uVar17 = (long)puVar10 + (long)(iVar16 + 1);
      uVar21 = (long)puVar10 + uVar9;
      if (uVar17 <= uVar21) goto LAB_10ad039cc;
      goto LAB_10ad03a18;
    }
  }
  else {
    uVar9 = uVar21;
    if ((uint)(int)cVar3 <= uVar14) {
      uVar17 = (long)param_1 + (long)(iVar16 + 1);
      uVar21 = (long)param_1 + uVar21;
      puVar10 = param_1;
      if (uVar17 <= uVar21) {
LAB_10ad039cc:
        puVar12 = param_1;
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE5eraseEmm
                  (param_1,uVar17 - (long)puVar10,uVar21 - uVar17);
        uVar22 = *param_1;
        extraout_x8[1] = param_1[1];
        *extraout_x8 = uVar22;
        extraout_x8[2] = param_1[2];
        *param_1 = 0;
        param_1[1] = 0;
        param_1[2] = 0;
        return puVar12;
      }
      goto LAB_10ad03a18;
    }
  }
  if (uVar9 < uVar7) goto LAB_10ad03a18;
  puVar10 = param_1;
  if (iVar11 < 0) {
    puVar10 = (undefined8 *)*param_1;
  }
  cVar2 = *(char *)((long)puVar10 + uVar7);
  if (cVar2 == '\\') {
LAB_10ad03618:
    if (0 < iVar16) {
      uVar7 = uVar21;
      if (cVar3 < 0) {
        uVar7 = param_1[1];
      }
      if (uVar7 < (uVar17 & 0xffffffff)) goto LAB_10ad03a18;
      puVar10 = param_1;
      if (iVar11 < 0) {
        puVar10 = (undefined8 *)*param_1;
      }
      if (*(char *)((long)puVar10 + (uVar17 & 0xffffffff)) == '/') goto LAB_10ad037d8;
    }
    if (iVar11 < 0) {
      uVar21 = param_1[1];
    }
    uVar17 = (long)iVar16 + 1;
    if (uVar21 < uVar17) {
LAB_10ad03a18:
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x10ad03a1c);
      (*pcVar4)();
    }
    puVar10 = param_1;
    if (iVar11 < 0) {
      puVar10 = (undefined8 *)*param_1;
    }
    *(undefined1 *)((long)puVar10 + uVar17) = 0x2f;
  }
  else {
    uVar19 = (uint)uVar20;
    if (cVar2 == ':') {
      if (iVar11 < 0) {
        uVar21 = param_1[1];
      }
      uVar17 = (ulong)(iVar16 + 1);
      if (uVar21 < uVar17) goto LAB_10ad03a18;
      puVar10 = param_1;
      if (iVar11 < 0) {
        puVar10 = (undefined8 *)*param_1;
      }
      lVar13 = 0;
      *(undefined1 *)((long)puVar10 + uVar17) = 0x3a;
      iVar6 = uVar14 + 1;
      lVar8 = (long)iVar6;
      iVar5 = uVar14 + 3;
      if (iVar5 <= iVar6) {
        iVar5 = uVar14 + 1;
      }
      iVar11 = iVar5 + 1;
      do {
        uVar20 = lVar8 + lVar13;
        cVar3 = *(char *)((long)param_1 + 0x17);
        uVar15 = (ulong)cVar3;
        if ((long)uVar15 < 0) {
          uVar21 = param_1[1];
          if (uVar20 < uVar21) goto LAB_10ad03724;
LAB_10ad037c4:
          iVar11 = iVar6 + (int)lVar13;
          break;
        }
        uVar21 = uVar15;
        if (uVar15 <= uVar20) goto LAB_10ad037c4;
LAB_10ad03724:
        if (uVar21 < uVar20) goto LAB_10ad03a18;
        puVar10 = param_1;
        if (cVar3 < '\0') {
          puVar10 = (undefined8 *)*param_1;
        }
        if (*(char *)((long)puVar10 + lVar13 + lVar8) != '/') {
          uVar21 = uVar15;
          if (cVar3 < '\0') {
            uVar21 = param_1[1];
          }
          if (uVar21 < uVar20) goto LAB_10ad03a18;
          puVar10 = param_1;
          if (cVar3 < '\0') {
            puVar10 = (undefined8 *)*param_1;
          }
          if (*(char *)((long)puVar10 + lVar13 + lVar8) != '\\') goto LAB_10ad037c4;
        }
        if (cVar3 < '\0') {
          uVar15 = param_1[1];
        }
        if (uVar15 < uVar17 + lVar13 + 1) goto LAB_10ad03a18;
        puVar10 = param_1;
        if (cVar3 < '\0') {
          puVar10 = (undefined8 *)*param_1;
        }
        *(undefined1 *)((long)puVar10 + lVar13 + uVar17 + 1) = 0x2f;
        lVar13 = lVar13 + 1;
      } while (((long)iVar5 - (long)iVar6) + 1 != lVar13);
      uVar17 = uVar17 + lVar13;
      if (iVar6 < iVar11) {
        uVar19 = 0xffffffff;
      }
      uVar20 = (ulong)uVar19;
      uVar15 = (ulong)(iVar11 - 1);
    }
    else {
      if (cVar2 == '/') goto LAB_10ad03618;
      if ((cVar2 == '.') && (iVar16 != -1)) {
        uVar9 = uVar21;
        if (iVar11 < 0) {
          uVar9 = param_1[1];
        }
        uVar18 = (ulong)iVar16;
        if (uVar9 < uVar18) goto LAB_10ad03a18;
        puVar10 = param_1;
        if (iVar11 < 0) {
          puVar10 = (undefined8 *)*param_1;
        }
        if ((*(char *)((long)puVar10 + uVar18) == '/') && (uVar19 != 0xffffffff)) {
          uVar9 = uVar21;
          if (iVar11 < 0) {
            uVar9 = param_1[1];
          }
          if ((uVar7 < uVar9 - 1) &&
             (puVar10 = param_1, FUN_10ad03a44(param_1,uVar15,uVar14 + 1), (int)puVar10 != 0)) {
            if (0x3ff < uVar19) goto LAB_10ad03a18;
            uVar1 = *(uint *)((long)&uStack_1090 + uVar20 * 4);
            param_2 = (ulong)uVar1;
            param_3 = (ulong)(uVar14 - 2);
            puVar10 = param_1;
            FUN_10ad03a44();
            iVar5 = (int)param_3;
            iVar6 = (int)param_2;
            if ((int)puVar10 != 0) {
              if (iVar11 < 0) {
                uVar21 = param_1[1];
              }
              uVar17 = uVar18 + 1;
              if (uVar21 < uVar17) goto LAB_10ad03a18;
              puVar10 = param_1;
              if (iVar11 < 0) {
                puVar10 = (undefined8 *)*param_1;
              }
              *(undefined1 *)((long)puVar10 + uVar17) = 0x2e;
              uVar19 = uVar19 + 1;
              uVar20 = (ulong)uVar19;
              if (uVar19 != 0x400) {
                *(int *)((long)&uStack_1090 + (ulong)uVar19 * 4) = (int)uVar17;
                goto LAB_10ad037d8;
              }
              goto LAB_10ad03a1c;
            }
            uVar17 = (ulong)(uVar1 - 1);
            uVar20 = (ulong)(uVar19 - 1);
            uVar15 = (ulong)(uVar14 + 2);
          }
          else {
            puVar10 = param_1;
            param_2 = uVar15;
            param_3 = uVar15;
            FUN_10ad03a44();
            iVar5 = (int)param_3;
            iVar6 = (int)param_2;
            if (((ulong)puVar10 & 1) == 0) {
              if (iVar11 < 0) {
                uVar21 = param_1[1];
              }
              uVar17 = uVar18 + 1;
              if (uVar21 < uVar17) goto LAB_10ad03a18;
              puVar10 = param_1;
              if (iVar11 < 0) {
                puVar10 = (undefined8 *)*param_1;
              }
              *(undefined1 *)((long)puVar10 + uVar17) = 0x2e;
              uVar14 = uVar19 + 1;
              uVar20 = (ulong)uVar14;
              if (uVar14 == 0x400) goto LAB_10ad03a1c;
              if (0x3fe < uVar19) goto LAB_10ad03a18;
              *(int *)((long)&uStack_1090 + (ulong)uVar14 * 4) = (int)uVar17;
            }
          }
          goto LAB_10ad037d8;
        }
      }
      if (iVar11 < 0) {
        uVar21 = param_1[1];
      }
      uVar7 = (ulong)iVar16;
      uVar17 = uVar7 + 1;
      if (uVar21 < uVar17) goto LAB_10ad03a18;
      puVar10 = param_1;
      if (iVar11 < 0) {
        puVar10 = (undefined8 *)*param_1;
      }
      *(char *)((long)puVar10 + uVar17) = cVar2;
      if ((int)uVar17 != 0) {
        uVar21 = (ulong)*(char *)((long)param_1 + 0x17);
        if ((long)uVar21 < 0) {
          uVar21 = param_1[1];
        }
        if (uVar21 < uVar7) goto LAB_10ad03a18;
        puVar10 = param_1;
        if (*(char *)((long)param_1 + 0x17) < '\0') {
          puVar10 = (undefined8 *)*param_1;
        }
        if (*(char *)((long)puVar10 + uVar7) != '/') goto LAB_10ad037d8;
      }
      uVar19 = uVar19 + 1;
      uVar20 = (ulong)uVar19;
      if (uVar19 == 0x400) goto LAB_10ad03a1c;
      if (0x3ff < uVar19) goto LAB_10ad03a18;
      *(int *)((long)&uStack_1090 + uVar20 * 4) = (int)uVar17;
    }
  }
LAB_10ad037d8:
  uVar15 = (ulong)((int)uVar15 + 1);
  goto LAB_10ad035bc;
LAB_10ad03a1c:
  puVar10 = (undefined8 *)&UNK_10f6a2bc8;
  FUN_10a00946c();
  if (*(char *)(uVar15 + 0x17) < '\0') {
    __ZdlPv(uStack_90);
  }
  __Unwind_Resume();
  if (iVar5 == iVar6) {
    uVar20 = (ulong)*(char *)((long)puVar10 + 0x17);
    uVar17 = uVar20;
    if ((long)uVar20 < 0) {
      uVar17 = puVar10[1];
    }
    if (uVar17 < (ulong)(long)iVar5) goto LAB_10ad03ba8;
    puVar12 = puVar10;
    if (*(char *)((long)puVar10 + 0x17) < '\0') {
      puVar12 = (undefined8 *)*puVar10;
    }
    cVar3 = *(char *)((long)puVar12 + (long)iVar5);
  }
  else {
    if (iVar5 - iVar6 != 1) {
      return (undefined8 *)0x0;
    }
    cVar3 = *(char *)((long)puVar10 + 0x17);
    uVar20 = (ulong)cVar3;
    uVar17 = uVar20;
    if ((long)uVar20 < 0) {
      uVar17 = puVar10[1];
    }
    if (uVar17 < (ulong)(long)iVar6) goto LAB_10ad03ba8;
    puVar12 = puVar10;
    if (cVar3 < '\0') {
      puVar12 = (undefined8 *)*puVar10;
    }
    if (*(char *)((long)puVar12 + (long)iVar6) != '.') {
      return (undefined8 *)0x0;
    }
    uVar17 = uVar20;
    if (cVar3 < '\0') {
      uVar17 = puVar10[1];
    }
    if (uVar17 < (ulong)(long)iVar5) goto LAB_10ad03ba8;
    puVar12 = puVar10;
    if (cVar3 < '\0') {
      puVar12 = (undefined8 *)*puVar10;
    }
    cVar3 = *(char *)((long)puVar12 + (long)iVar5);
  }
  if (cVar3 != '.') {
    return (undefined8 *)0x0;
  }
  uVar17 = (long)iVar5 + 1;
  iVar6 = (int)uVar20;
  if (iVar6 < 0) {
    uVar20 = puVar10[1];
    if (uVar20 == uVar17) {
      return (undefined8 *)0x1;
    }
  }
  else {
    if ((int)uVar17 == iVar6) {
      return (undefined8 *)0x1;
    }
    uVar20 = (ulong)iVar6;
  }
  if (uVar17 <= uVar20) {
    puVar12 = puVar10;
    if (iVar6 < 0) {
      puVar12 = (undefined8 *)*puVar10;
    }
    if (*(char *)((long)puVar12 + uVar17) == '/') {
      return (undefined8 *)0x1;
    }
    if (iVar6 < 0) {
      uVar20 = puVar10[1];
    }
    else {
      uVar20 = (ulong)iVar6;
    }
    if (uVar17 <= uVar20) {
      puVar12 = puVar10;
      if (iVar6 < 0) {
        puVar12 = (undefined8 *)*puVar10;
      }
      if (*(char *)((long)puVar12 + uVar17) == '\\') {
        return (undefined8 *)0x1;
      }
      if (iVar6 < 0) {
        uVar20 = puVar10[1];
      }
      else {
        uVar20 = (ulong)iVar6;
      }
      if (uVar17 <= uVar20) {
        if (iVar6 < 0) {
          puVar10 = (undefined8 *)*puVar10;
        }
        return (undefined8 *)(ulong)(*(char *)((long)puVar10 + uVar17) == ':');
      }
    }
  }
LAB_10ad03ba8:
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x10ad03bac);
  (*pcVar4)();
}



/* Entry: 10ad03a44; end: 10ad03bab;  */

bool FUN_10ad03a44(undefined8 *param_1,int param_2,int param_3)

{
  char cVar1;
  code *pcVar2;
  int iVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 *puVar6;
  
  if (param_3 == param_2) {
    uVar4 = (ulong)*(char *)((long)param_1 + 0x17);
    uVar5 = uVar4;
    if ((long)uVar4 < 0) {
      uVar5 = param_1[1];
    }
    if (uVar5 < (ulong)(long)param_3) goto LAB_10ad03ba8;
    puVar6 = param_1;
    if (*(char *)((long)param_1 + 0x17) < '\0') {
      puVar6 = (undefined8 *)*param_1;
    }
    cVar1 = *(char *)((long)puVar6 + (long)param_3);
  }
  else {
    if (param_3 - param_2 != 1) {
      return false;
    }
    cVar1 = *(char *)((long)param_1 + 0x17);
    uVar4 = (ulong)cVar1;
    uVar5 = uVar4;
    if ((long)uVar4 < 0) {
      uVar5 = param_1[1];
    }
    if (uVar5 < (ulong)(long)param_2) goto LAB_10ad03ba8;
    puVar6 = param_1;
    if (cVar1 < '\0') {
      puVar6 = (undefined8 *)*param_1;
    }
    if (*(char *)((long)puVar6 + (long)param_2) != '.') {
      return false;
    }
    uVar5 = uVar4;
    if (cVar1 < '\0') {
      uVar5 = param_1[1];
    }
    if (uVar5 < (ulong)(long)param_3) goto LAB_10ad03ba8;
    puVar6 = param_1;
    if (cVar1 < '\0') {
      puVar6 = (undefined8 *)*param_1;
    }
    cVar1 = *(char *)((long)puVar6 + (long)param_3);
  }
  if (cVar1 != '.') {
    return false;
  }
  uVar5 = (long)param_3 + 1;
  iVar3 = (int)uVar4;
  if (iVar3 < 0) {
    uVar4 = param_1[1];
    if (uVar4 == uVar5) {
      return true;
    }
  }
  else {
    if ((int)uVar5 == iVar3) {
      return true;
    }
    uVar4 = (ulong)iVar3;
  }
  if (uVar5 <= uVar4) {
    puVar6 = param_1;
    if (iVar3 < 0) {
      puVar6 = (undefined8 *)*param_1;
    }
    if (*(char *)((long)puVar6 + uVar5) == '/') {
      return true;
    }
    if (iVar3 < 0) {
      uVar4 = param_1[1];
    }
    else {
      uVar4 = (ulong)iVar3;
    }
    if (uVar5 <= uVar4) {
      puVar6 = param_1;
      if (iVar3 < 0) {
        puVar6 = (undefined8 *)*param_1;
      }
      if (*(char *)((long)puVar6 + uVar5) == '\\') {
        return true;
      }
      if (iVar3 < 0) {
        uVar4 = param_1[1];
      }
      else {
        uVar4 = (ulong)iVar3;
      }
      if (uVar5 <= uVar4) {
        if (iVar3 < 0) {
          param_1 = (undefined8 *)*param_1;
        }
        return *(char *)((long)param_1 + uVar5) == ':';
      }
    }
  }
LAB_10ad03ba8:
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10ad03bac);
  (*pcVar2)();
}



/* Entry: 10ad03bac; end: 10ad03cef;  */

void FUN_10ad03bac(short *param_1)

{
  ulong uVar1;
  ulong uVar2;
  byte bVar3;
  char cVar4;
  short *psVar5;
  code *pcVar6;
  short *psVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  
  uVar9 = 0;
  bVar3 = *(byte *)((long)param_1 + 0x17);
  uVar2 = *(ulong *)(param_1 + 4);
  uVar1 = uVar2;
  psVar5 = *(short **)param_1;
  if (-1 < (char)bVar3) {
    uVar1 = (ulong)bVar3;
    psVar5 = param_1;
  }
  do {
    lVar8 = uVar1 - uVar9;
    if (lVar8 < 2) {
      return;
    }
    psVar7 = (short *)((long)psVar5 + uVar9);
    while( true ) {
      _memchr(psVar7,0x2e,lVar8 + -1);
      if (psVar7 == (short *)0x0) {
        return;
      }
      if (*psVar7 == 0x2e2e) break;
      psVar7 = (short *)((long)psVar7 + 1);
      lVar8 = (long)((long)psVar5 + uVar1) - (long)psVar7;
      if (lVar8 < 2) {
        return;
      }
    }
    if (psVar7 == (short *)((long)psVar5 + uVar1)) {
      return;
    }
    lVar8 = (long)psVar7 - (long)psVar5;
    if (lVar8 == -1) {
      return;
    }
    uVar9 = lVar8 + 2;
    uVar10 = uVar2;
    if (-1 < (char)bVar3) {
      uVar10 = (ulong)bVar3;
    }
    if (psVar7 == psVar5) {
      if (uVar9 == uVar10) {
        return;
      }
LAB_10ad03ca0:
      if (uVar1 < uVar9) {
LAB_10ad03cec:
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x10ad03cf0);
        (*pcVar6)();
      }
      cVar4 = *(char *)((long)psVar5 + uVar9);
    }
    else {
      if (uVar10 < lVar8 - 1U) goto LAB_10ad03cec;
      cVar4 = *(char *)((long)psVar5 + (lVar8 - 1U));
      if ((cVar4 == '/' || cVar4 == '\\') && uVar9 != uVar10) goto LAB_10ad03ca0;
    }
    if (cVar4 == '/') {
      return;
    }
    if (cVar4 == '\\') {
      return;
    }
    if (uVar1 < uVar9) {
      return;
    }
  } while( true );
}



/* Entry: 10ad03cf0; end: 10ad03f73;  */

void FUN_10ad03cf0(long *param_1,long param_2,long *param_3)

{
  char cVar1;
  long lVar2;
  long lVar3;
  code *pcVar4;
  long lVar5;
  long *plVar6;
  undefined8 ******ppppppuVar7;
  long *plVar8;
  long *plVar9;
  undefined8 *****pppppuStack_98;
  long *plStack_90;
  undefined7 uStack_88;
  char cStack_81;
  undefined8 *****pppppuStack_80;
  long *plStack_78;
  undefined8 uStack_70;
  undefined8 *****pppppuStack_60;
  long *plStack_58;
  long lStack_50;
  long lStack_40;
  long *plStack_38;
  
  if (param_3 == (long *)0x0) {
    *param_1 = 0;
    param_1[1] = 0;
    param_1[3] = 0;
    param_1[2] = param_2;
    return;
  }
  lStack_40 = param_2;
  plStack_38 = param_3;
  FUN_10a09cbb0(&pppppuStack_98,&lStack_40,0);
  if (cStack_81 < '\0') {
    func_0x000107c3192c(&pppppuStack_80,pppppuStack_98,plStack_90);
    plStack_58 = plStack_78;
    pppppuStack_60 = pppppuStack_80;
    lStack_50 = uStack_70;
    pppppuStack_80 = (undefined8 ******)0x0;
    plStack_78 = (long *)0x0;
    uStack_70 = 0;
    if (cStack_81 < '\0') {
      __ZdlPv(pppppuStack_98);
    }
  }
  else {
    plStack_58 = plStack_90;
    pppppuStack_60 = pppppuStack_98;
    lStack_50 = CONCAT17(cStack_81,uStack_88);
  }
  FUN_10a177ca8(&pppppuStack_98,&pppppuStack_60);
  if (cStack_81 < '\0') {
    func_0x000107c3192c(&pppppuStack_80,pppppuStack_98,plStack_90);
    if (cStack_81 < '\0') {
      __ZdlPv(pppppuStack_98);
    }
  }
  else {
    plStack_78 = plStack_90;
    pppppuStack_80 = pppppuStack_98;
    uStack_70 = CONCAT17(cStack_81,uStack_88);
  }
  plVar6 = plStack_38;
  lVar3 = lStack_40;
  lVar2 = uStack_70;
  plVar9 = (long *)(long)uStack_70._7_1_;
  if ((long)plVar9 < 0) {
    if ((plStack_78 != (long *)0x0) &&
       (ppppppuVar7 = (undefined8 ******)pppppuStack_80, plVar8 = plStack_78,
       plStack_78 <= plStack_38)) goto LAB_10ad03e10;
  }
  else if ((uStack_70._7_1_ != '\0') && (plVar9 <= plStack_38)) {
    ppppppuVar7 = &pppppuStack_80;
    plVar8 = plVar9;
LAB_10ad03e10:
    lVar5 = (long)plStack_38 + (lStack_40 - (long)plVar8);
    _memcmp(lVar5,ppppppuVar7,plVar8);
    if ((int)lVar5 == 0) {
      plVar8 = plStack_78;
      if (-1 < lVar2) {
        plVar8 = plVar9;
      }
      lVar2 = (long)plVar6 - (long)plVar8;
      if (lVar2 != 0) {
        if (plVar6 <= (long *)(lVar2 + -1)) goto LAB_10ad03f10;
        cVar1 = *(char *)(lVar3 + lVar2 + -1);
        if ((cVar1 == '\\') || (cVar1 == '/')) {
          if (plVar6 < plVar8) {
            FUN_109ffdddc(&UNK_10f2fca6e);
            goto LAB_10ad03f10;
          }
          *param_1 = lVar3;
          param_1[1] = lVar2;
          param_1[2] = lVar3 + lVar2;
          param_1[3] = (long)plVar8;
          if ((cVar1 == '/') || (cVar1 == '\\')) goto LAB_10ad03ec0;
        }
      }
    }
  }
  plVar6 = &lStack_40;
  FUN_10a1aea04(plVar6,&UNK_10f64210b,0xffffffffffffffff);
  if (plVar6 == (long *)0xffffffffffffffff) {
    *param_1 = 0;
    param_1[1] = 0;
    param_1[3] = (long)plStack_38;
    param_1[2] = lStack_40;
  }
  else {
    if (plStack_38 <= plVar6) {
      FUN_109ffdddc(&UNK_10f2fca6e);
LAB_10ad03f10:
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x10ad03f14);
      (*pcVar4)();
    }
    lVar2 = (long)plVar6 + 1;
    *param_1 = lStack_40;
    param_1[1] = lVar2;
    param_1[2] = lStack_40 + lVar2;
    param_1[3] = (long)plStack_38 - lVar2;
  }
LAB_10ad03ec0:
  if (uStack_70 < 0) {
    __ZdlPv(pppppuStack_80);
  }
  if (lStack_50 < 0) {
    __ZdlPv(pppppuStack_60);
  }
  return;
}



/* Entry: 10ad03f74; end: 10ad04027;  */

void FUN_10ad03f74(undefined8 *param_1)

{
  undefined **ppuVar1;
  
  __ZNSt3__15mutex4lockEv(0x113835e28);
  if (((ulong)ppuRam0000000113835e70[1] & 1) == 0) {
    pcRam0000000113835e68 = FUN_10ad04eac;
    (*(code *)*ppuRam0000000113835e70)(0x113835e70);
    ppuRam0000000113835e70 = &PTR_DAT_110c6e170;
    pcRam0000000113835e78 = FUN_10ad04028;
  }
  ppuVar1 = ppuRam0000000113835e70;
  *param_1 = pcRam0000000113835e68;
  (*(code *)ppuVar1[3])(param_1 + 1,0x113835e70);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd478. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__15mutex6unlockEv_110346788)(0x113835e28);
  return;
}



/* Entry: 10ad04028; end: 10ad040bf;  */

uint * FUN_10ad04028(uint *param_1,undefined8 param_2)

{
  uint *puVar1;
  uint *puVar2;
  ulong uVar3;
  undefined8 in_x6;
  undefined8 in_x7;
  
  puVar1 = param_1;
  _fopen();
  if (((puVar1 == (uint *)0x0) && (puVar2 = puVar1, ___error(), *puVar2 != 2)) &&
     ((bRam000000011330a9e8 >> 1 & 1) != 0)) {
    ___error();
    uVar3 = (ulong)*puVar2;
    _strerror();
    func_0x00010ae06f08(1,2,&UNK_10f6a2c08,&UNK_10f6a2cfc,399,&UNK_10f6a2d4d,in_x6,in_x7,param_1,
                        param_2,uVar3);
  }
  return puVar1;
}



/* Entry: 10ad040c0; end: 10ad042c3;  */

undefined ******* FUN_10ad040c0(undefined *******param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  undefined ******ppppppuVar2;
  undefined *******pppppppuVar3;
  undefined *******pppppppuVar4;
  undefined *******pppppppuVar5;
  undefined *****pppppuVar6;
  undefined ******ppppppuVar7;
  undefined ******ppppppuStack_120;
  undefined8 uStack_118;
  undefined *****pppppuStack_110;
  undefined *****pppppuStack_108;
  long lStack_d8;
  undefined ******ppppppuStack_d0;
  undefined ******ppppppuStack_c8;
  undefined1 *puStack_c0;
  code *pcStack_b8;
  undefined8 auStack_a8 [2];
  char cStack_91;
  undefined ******ppppppuStack_90;
  ulong uStack_88;
  byte bStack_79;
  undefined ******ppppppuStack_78;
  undefined *****apppppuStack_70 [7];
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x000107c2b054(auStack_a8,param_2);
  FUN_10ad03508(&ppppppuStack_90,auStack_a8);
  if (cStack_91 < '\0') {
    __ZdlPv(auStack_a8[0]);
  }
  *param_1 = (undefined ******)0x0;
  pppppppuVar4 = &ppppppuStack_90;
  uVar1 = uStack_88;
  pppppppuVar5 = (undefined *******)ppppppuStack_90;
  if (-1 < (char)bStack_79) {
    uVar1 = (ulong)bStack_79;
    pppppppuVar5 = pppppppuVar4;
  }
  func_0x00010a1512bc(pppppppuVar5,uVar1);
  if ((int)pppppppuVar5 == 0) {
    FUN_10ad03f74(&ppppppuStack_78);
    pppppppuVar5 = (undefined *******)ppppppuStack_90;
    if (-1 < (char)bStack_79) {
      pppppppuVar5 = &ppppppuStack_90;
    }
    pppppppuVar4 = &ppppppuStack_78;
    (*(code *)ppppppuStack_78)(pppppppuVar5,param_3,&ppppppuStack_78);
    pppppppuVar3 = (undefined *******)apppppuStack_70;
    (*(code *)*apppppuStack_70[0])();
    if (pppppppuVar5 != (undefined *******)0x0) {
      pppppppuVar4 = (undefined *******)0x10;
      __Znwm(0x10);
      func_0x0001092c0568();
      pppppppuVar3 = param_1;
      func_0x00010a109514(param_1,pppppppuVar4);
    }
  }
  else {
    func_0x00010a151214();
    pppppppuVar3 = (undefined *******)ppppppuStack_90;
    if (-1 < (char)bStack_79) {
      uStack_88 = (ulong)bStack_79;
      pppppppuVar3 = pppppppuVar4;
    }
    FUN_10a14f6f8(&ppppppuStack_78,*pppppppuVar5,pppppppuVar3,uStack_88);
    ppppppuVar7 = ppppppuStack_78;
    ppppppuStack_78 = (undefined ******)0x0;
    func_0x00010a109514(param_1,ppppppuVar7);
    ppppppuVar7 = ppppppuStack_78;
    ppppppuStack_78 = (undefined ******)0x0;
    pppppppuVar3 = param_1;
    param_1 = (undefined *******)ppppppuVar7;
    if ((undefined *******)ppppppuVar7 != (undefined *******)0x0) {
      ppppppuVar2 = (undefined ******)*ppppppuVar7;
      *ppppppuVar7 = (undefined *****)0x0;
      if (ppppppuVar2 != (undefined ******)0x0) {
        (*(code *)(*ppppppuVar2)[8])();
      }
      pppppppuVar3 = (undefined *******)ppppppuVar7;
      __ZdlPv();
    }
  }
  if ((char)bStack_79 < '\0') {
    pppppppuVar3 = (undefined *******)ppppppuStack_90;
    __ZdlPv();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return pppppppuVar3;
  }
  ___stack_chk_fail();
  __ZdlPv(pppppppuVar4);
  func_0x00010a109514(param_1,0);
  if ((char)bStack_79 < '\0') {
    __ZdlPv(ppppppuStack_90);
  }
  pppppppuVar4 = pppppppuVar3;
  __Unwind_Resume();
  pcStack_b8 = FUN_10ad042c4;
  lStack_d8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppppppuStack_d0 = (undefined ******)pppppppuVar3;
  ppppppuStack_c8 = (undefined ******)param_1;
  puStack_c0 = &stack0xfffffffffffffff0;
  FUN_10ad040c0(&ppppppuStack_120);
  if (ppppppuStack_120 == (undefined ******)0x0) {
    pppppppuVar5 = (undefined *******)0x0;
  }
  else {
    pppppppuVar5 = (undefined *******)*ppppppuStack_120;
    (*(code *)**pppppppuVar5)();
    pppppuVar6 = *ppppppuStack_120;
    (*(code *)(*pppppuVar6)[3])();
    pppppuStack_108 = (undefined *****)ppppppuStack_120;
    ppppppuStack_120 = (undefined ******)0x0;
    uStack_118 = 0x10ad04ee8;
    pppppuStack_110 = (undefined *****)&PTR_DAT_110c6e190;
    FUN_10ad4df34(pppppppuVar5,pppppuVar6,0,&uStack_118);
    pppppppuVar4 = (undefined *******)&pppppuStack_110;
    (*(code *)*pppppuStack_110)();
    pppppppuVar3 = (undefined *******)ppppppuStack_120;
    ppppppuStack_120 = (undefined ******)0x0;
    if (pppppppuVar3 != (undefined *******)0x0) {
      ppppppuVar7 = *pppppppuVar3;
      *pppppppuVar3 = (undefined ******)0x0;
      if (ppppppuVar7 != (undefined ******)0x0) {
        (*(code *)(*ppppppuVar7)[8])();
      }
      pppppppuVar4 = pppppppuVar3;
      __ZdlPv();
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_d8) {
    ___stack_chk_fail();
    (*(code *)*pppppuStack_110)(pppppppuVar3 + 1);
    ppppppuVar7 = ppppppuStack_120;
    ppppppuStack_120 = (undefined ******)0x0;
    if (ppppppuVar7 != (undefined ******)0x0) {
      pppppuVar6 = *ppppppuVar7;
      *ppppppuVar7 = (undefined *****)0x0;
      if (pppppuVar6 != (undefined *****)0x0) {
        (*(code *)(*pppppuVar6)[8])();
      }
      __ZdlPv(ppppppuVar7);
    }
    __Unwind_Resume(pppppppuVar4);
    FUN_10ad040c0();
    return pppppppuVar4;
  }
  return pppppppuVar5;
}



/* Entry: 10ad042c4; end: 10ad04423;  */

undefined *** FUN_10ad042c4(undefined ***param_1)

{
  undefined ***pppuVar1;
  undefined **ppuVar2;
  undefined ***unaff_x20;
  undefined ***pppuStack_70;
  undefined8 uStack_68;
  undefined **ppuStack_60;
  undefined ***pppuStack_58;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  FUN_10ad040c0(&pppuStack_70);
  if (pppuStack_70 == (undefined ***)0x0) {
    pppuVar1 = (undefined ***)0x0;
  }
  else {
    pppuVar1 = (undefined ***)*pppuStack_70;
    (*(code *)**pppuVar1)();
    ppuVar2 = *pppuStack_70;
    (**(code **)(*ppuVar2 + 0x18))();
    pppuStack_58 = pppuStack_70;
    pppuStack_70 = (undefined ***)0x0;
    uStack_68 = 0x10ad04ee8;
    ppuStack_60 = &PTR_DAT_110c6e190;
    FUN_10ad4df34(pppuVar1,ppuVar2,0,&uStack_68);
    param_1 = &ppuStack_60;
    (*(code *)*ppuStack_60)();
    unaff_x20 = pppuStack_70;
    pppuStack_70 = (undefined ***)0x0;
    if (unaff_x20 != (undefined ***)0x0) {
      ppuVar2 = *unaff_x20;
      *unaff_x20 = (undefined **)0x0;
      if (ppuVar2 != (undefined **)0x0) {
        (**(code **)(*ppuVar2 + 0x40))();
      }
      param_1 = unaff_x20;
      __ZdlPv();
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return pppuVar1;
  }
  ___stack_chk_fail();
  (*(code *)*ppuStack_60)(unaff_x20 + 1);
  pppuVar1 = pppuStack_70;
  pppuStack_70 = (undefined ***)0x0;
  if (pppuVar1 != (undefined ***)0x0) {
    ppuVar2 = *pppuVar1;
    *pppuVar1 = (undefined **)0x0;
    if (ppuVar2 != (undefined **)0x0) {
      (**(code **)(*ppuVar2 + 0x40))();
    }
    __ZdlPv(pppuVar1);
  }
  __Unwind_Resume(param_1);
  FUN_10ad040c0();
  return param_1;
}



/* Entry: 10ad04424; end: 10ad04457;  */

void FUN_10ad04424(void)

{
  FUN_10ad040c0();
  return;
}



/* Entry: 10ad04458; end: 10ad044f3;  */

/* WARNING: Possible PIC construction at 0x00010ad044a0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010ad044a4) */

ulong * FUN_10ad04458(ulong *param_1,ulong *param_2)

{
  undefined1 *puVar1;
  ulong *puVar2;
  ulong *puVar3;
  undefined8 *puVar4;
  ulong *puVar5;
  ulong *unaff_x19;
  ulong *unaff_x20;
  undefined8 unaff_x21;
  undefined8 unaff_x22;
  undefined8 unaff_x23;
  undefined8 unaff_x24;
  undefined1 *unaff_x29;
  undefined8 unaff_x30;
  undefined1 auStack_40 [12];
  int iStack_34;
  
  puVar1 = &stack0xfffffffffffffff0;
  if (param_2 == (ulong *)0x0) {
    param_2 = (ulong *)&UNK_10f6a2cf4;
  }
  else {
    iStack_34 = -1;
    puVar5 = param_2;
    ___cxa_demangle(param_2,0,0,&iStack_34);
    if (iStack_34 == 0) {
      func_0x000107c2b054(param_1,puVar5);
      _free(puVar5);
      return puVar5;
    }
    unaff_x30 = 0x10ad044a4;
    register0x00000008 = (BADSPACEBASE *)auStack_40;
    unaff_x19 = param_1;
    unaff_x20 = param_2;
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
  puVar5 = param_2;
  func_0x000107c613d0();
  if ((ulong *)0x7ffffffffffffff7 < puVar5) {
    func_0x000107c2b040();
    *(ulong **)((long)register0x00000008 + -0x60) = unaff_x20;
    *(ulong **)((long)register0x00000008 + -0x58) = param_1;
    *(undefined1 **)((long)register0x00000008 + -0x50) =
         (undefined1 *)((long)register0x00000008 + -0x10);
    *(undefined **)((long)register0x00000008 + -0x48) = &UNK_100053800;
    if ((bRam00000001132ffc88 & 1) == 0) {
      puVar5 = (ulong *)0x1132ffc88;
      func_0x000107c60e48();
      if ((int)puVar5 != 0) {
        puVar4 = (undefined8 *)0x30;
        func_0x000107c60e20();
        uRam00000001132ffc38 = 0x8000000000000030;
        uRam00000001132ffc30 = 0x2c;
        puRam00000001132ffc28 = puVar4;
        puVar4[1] = 0x434948504152475f;
        *puVar4 = 0x45524f43534e454c;
        puVar4[3] = 0x525f595a414c5f54;
        puVar4[2] = 0x5845544e4f435f53;
        *(undefined8 *)((long)puVar4 + 0x24) = 0x54494e495f454352;
        *(undefined8 *)((long)puVar4 + 0x1c) = 0x554f5345525f595a;
        *(undefined1 *)((long)puVar4 + 0x2c) = 0;
        uRam00000001132ffc40 = 0;
        pcRam00000001132ffc48 = FUN_10a09e854;
        ppuRam00000001132ffc50 = &PTR_DAT_110ba0fe0;
        func_0x000107c60e34(0x10a08e670,0x1132ffc28,0x100000000);
        puVar5 = (ulong *)0x1132ffc88;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd8c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR____cxa_guard_release_110346be8)(0x1132ffc88);
        return puVar5;
      }
    }
    return puVar5;
  }
  if (puVar5 < (ulong *)0x17) {
    *(char *)((long)param_1 + 0x17) = (char)puVar5;
    puVar3 = param_1;
    if (puVar5 == (ulong *)0x0) goto code_r0x0001000537e0;
  }
  else {
    puVar2 = (ulong *)0x19;
    if (((ulong)puVar5 | 7) != 0x17) {
      puVar2 = (ulong *)(((ulong)puVar5 | 7) + 1);
    }
    puVar3 = puVar2;
    func_0x000107c60e20();
    param_1[1] = (ulong)puVar5;
    param_1[2] = (ulong)puVar2 | 0x8000000000000000;
    *param_1 = (ulong)puVar3;
  }
  func_0x000107c610b8(puVar3,param_2,puVar5);
code_r0x0001000537e0:
  *(undefined1 *)((long)puVar3 + (long)puVar5) = 0;
  return param_1;
}



/* Entry: 10ad044f4; end: 10ad0455f;  */

void FUN_10ad044f4(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  long lStack_f0;
  undefined1 uStack_e8;
  undefined7 uStack_e7;
  undefined8 uStack_e0;
  undefined7 uStack_d8;
  undefined1 uStack_d1;
  undefined1 auStack_a8 [128];
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _pthread_self();
  _pthread_getname_np();
  func_0x000107c2b054(param_1,auStack_a8);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return;
  }
  ___stack_chk_fail();
  puVar1 = *(undefined8 **)*param_1;
  puVar2 = (undefined8 *)((long *)*param_1)[1];
  uStack_f8 = puVar2[1];
  uStack_100 = *puVar2;
  lStack_f0 = puVar2[2];
  puVar2[1] = 0;
  puVar2[2] = 0;
  *puVar2 = 0;
  FUN_10ad03448(&uStack_e8,&uStack_100);
  puVar2 = (undefined8 *)*puVar1;
  if (*(char *)((long)puVar2 + 0x17) < '\0') {
    __ZdlPv(*puVar2);
  }
  puVar2[2] = CONCAT17(uStack_d1,uStack_d8);
  puVar2[1] = uStack_e0;
  *puVar2 = CONCAT71(uStack_e7,uStack_e8);
  uStack_d1 = 0;
  uStack_e8 = 0;
  if (lStack_f0 < 0) {
    __ZdlPv(uStack_100);
  }
  *(undefined1 *)puVar1[1] = 1;
  return;
}



/* Entry: 10ad04560; end: 10ad0460f;  */

void FUN_10ad04560(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uStack_50;
  undefined8 uStack_48;
  long lStack_40;
  undefined1 uStack_38;
  undefined7 uStack_37;
  undefined8 uStack_30;
  undefined7 uStack_28;
  undefined1 uStack_21;
  
  puVar1 = *(undefined8 **)*param_1;
  puVar2 = (undefined8 *)((long *)*param_1)[1];
  uStack_48 = puVar2[1];
  uStack_50 = *puVar2;
  lStack_40 = puVar2[2];
  puVar2[1] = 0;
  puVar2[2] = 0;
  *puVar2 = 0;
  FUN_10ad03448(&uStack_38,&uStack_50);
  puVar2 = (undefined8 *)*puVar1;
  if (*(char *)((long)puVar2 + 0x17) < '\0') {
    __ZdlPv(*puVar2);
  }
  puVar2[2] = CONCAT17(uStack_21,uStack_28);
  puVar2[1] = uStack_30;
  *puVar2 = CONCAT71(uStack_37,uStack_38);
  uStack_21 = 0;
  uStack_38 = 0;
  if (lStack_40 < 0) {
    __ZdlPv(uStack_50);
  }
  *(undefined1 *)puVar1[1] = 1;
  return;
}



/* Entry: 10ad04610; end: 10ad046df;  */

void FUN_10ad04610(void)

{
  undefined8 uStack_68;
  undefined8 uStack_60;
  long lStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  long lStack_40;
  undefined1 uStack_38;
  undefined7 uStack_37;
  undefined8 uStack_30;
  undefined7 uStack_28;
  undefined1 uStack_21;
  
  FUN_10ad57d08(&uStack_68);
  uStack_48 = uStack_60;
  uStack_50 = uStack_68;
  lStack_40 = lStack_58;
  uStack_60 = 0;
  lStack_58 = 0;
  uStack_68 = 0;
  FUN_10ad03448(&uStack_38,&uStack_50);
  if (lRam0000000113835d50 < 0) {
    __ZdlPv(uRam0000000113835d40);
  }
  uRam0000000113835d40 = CONCAT71(uStack_37,uStack_38);
  uRam0000000113835d48 = uStack_30;
  lRam0000000113835d50 = CONCAT17(uStack_21,uStack_28);
  uStack_21 = 0;
  uStack_38 = 0;
  if (lStack_40 < 0) {
    __ZdlPv(uStack_50);
  }
  if (lStack_58 < 0) {
    __ZdlPv(uStack_68);
  }
  return;
}



/* Entry: 10ad046e0; end: 10ad047af;  */

void FUN_10ad046e0(void)

{
  undefined8 uStack_68;
  undefined8 uStack_60;
  long lStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  long lStack_40;
  undefined1 uStack_38;
  undefined7 uStack_37;
  undefined8 uStack_30;
  undefined7 uStack_28;
  undefined1 uStack_21;
  
  FUN_10ad57ed4(&uStack_68);
  uStack_48 = uStack_60;
  uStack_50 = uStack_68;
  lStack_40 = lStack_58;
  uStack_60 = 0;
  lStack_58 = 0;
  uStack_68 = 0;
  FUN_10ad03448(&uStack_38,&uStack_50);
  if (lRam0000000113835d80 < 0) {
    __ZdlPv(uRam0000000113835d70);
  }
  uRam0000000113835d70 = CONCAT71(uStack_37,uStack_38);
  uRam0000000113835d78 = uStack_30;
  lRam0000000113835d80 = CONCAT17(uStack_21,uStack_28);
  uStack_21 = 0;
  uStack_38 = 0;
  if (lStack_40 < 0) {
    __ZdlPv(uStack_50);
  }
  if (lStack_58 < 0) {
    __ZdlPv(uStack_68);
  }
  return;
}



/* Entry: 10ad047b0; end: 10ad0487f;  */

void FUN_10ad047b0(void)

{
  undefined8 uStack_68;
  undefined8 uStack_60;
  long lStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  long lStack_40;
  undefined1 uStack_38;
  undefined7 uStack_37;
  undefined8 uStack_30;
  undefined7 uStack_28;
  undefined1 uStack_21;
  
  FUN_10ad581ec(&uStack_68);
  uStack_48 = uStack_60;
  uStack_50 = uStack_68;
  lStack_40 = lStack_58;
  uStack_60 = 0;
  lStack_58 = 0;
  uStack_68 = 0;
  FUN_10ad03448(&uStack_38,&uStack_50);
  if (lRam0000000113835de0 < 0) {
    __ZdlPv(uRam0000000113835dd0);
  }
  uRam0000000113835dd0 = CONCAT71(uStack_37,uStack_38);
  uRam0000000113835dd8 = uStack_30;
  lRam0000000113835de0 = CONCAT17(uStack_21,uStack_28);
  uStack_21 = 0;
  uStack_38 = 0;
  if (lStack_40 < 0) {
    __ZdlPv(uStack_50);
  }
  if (lStack_58 < 0) {
    __ZdlPv(uStack_68);
  }
  return;
}



/* Entry: 10ad04880; end: 10ad04b1b;  */

/* WARNING: Removing unreachable block (ram,0x00010ad049f0) */
/* WARNING: Removing unreachable block (ram,0x00010ad049cc) */
/* WARNING: Removing unreachable block (ram,0x00010ad048f0) */
/* WARNING: Removing unreachable block (ram,0x00010ad04904) */
/* WARNING: Removing unreachable block (ram,0x00010ad049e0) */
/* WARNING: Removing unreachable block (ram,0x00010ad04a5c) */

void FUN_10ad04880(void)

{
  int iVar1;
  undefined8 in_x6;
  undefined8 in_x7;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  long lStack_b0;
  undefined1 uStack_a0;
  undefined7 uStack_9f;
  undefined8 uStack_98;
  undefined7 uStack_90;
  undefined1 uStack_89;
  undefined8 uStack_88;
  undefined8 uStack_80;
  long lStack_78;
  undefined8 auStack_70 [2];
  char cStack_59;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined7 uStack_48;
  undefined1 uStack_41;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 *puVar2;
  
  func_0x00010ad031c0();
  FUN_10a09d9a0(auStack_70,0x113835d70,0);
  uStack_88 = 0;
  uStack_80 = 0;
  lStack_78 = 0;
  FUN_10a09cc04(&uStack_88,&UNK_10f6a2bfb,&UNK_10f6a2c07);
  FUN_10a177c38(&uStack_58,auStack_70,&uStack_88);
  uStack_38 = uStack_50;
  uStack_40 = uStack_58;
  uStack_30 = CONCAT17(uStack_41,uStack_48);
  if (lStack_78 < 0) {
    __ZdlPv(uStack_88);
  }
  if (cStack_59 < '\0') {
    __ZdlPv(auStack_70[0]);
  }
  puVar2 = &uStack_58;
  func_0x000107c2b054(puVar2,&uStack_40);
  iVar1 = (int)puVar2;
  FUN_10ad00cf8();
  if (iVar1 == 0) {
    if ((bRam000000011330a9e8 >> 1 & 1) != 0) {
      func_0x00010ae06f08(1,2,&UNK_10f6a2c08,&UNK_10f6a2c30,0x14b,&UNK_10f6a2c64,in_x6,in_x7,
                          &uStack_58);
    }
    func_0x000107c2b054(&uStack_c0,"");
  }
  else {
    uStack_b8 = uStack_38;
    uStack_c0 = uStack_40;
    lStack_b0 = uStack_30;
  }
  uStack_38 = uStack_b8;
  uStack_40 = uStack_c0;
  uStack_30 = lStack_b0;
  uStack_c0 = 0;
  uStack_b8 = 0;
  lStack_b0 = 0;
  FUN_10ad03448(&uStack_a0,&uStack_40);
  if (lRam0000000113835d98 < 0) {
    __ZdlPv(uRam0000000113835d88);
  }
  uRam0000000113835d88 = CONCAT71(uStack_9f,uStack_a0);
  uRam0000000113835d90 = uStack_98;
  lRam0000000113835d98 = CONCAT17(uStack_89,uStack_90);
  uStack_89 = 0;
  uStack_a0 = 0;
  if (lStack_b0 < 0) {
    __ZdlPv(uStack_c0);
  }
  return;
}



/* Entry: 10ad04b1c; end: 10ad04ddb;  */

/* WARNING: Removing unreachable block (ram,0x00010ad04c8c) */
/* WARNING: Removing unreachable block (ram,0x00010ad04c68) */
/* WARNING: Removing unreachable block (ram,0x00010ad04b8c) */
/* WARNING: Removing unreachable block (ram,0x00010ad04ba0) */
/* WARNING: Removing unreachable block (ram,0x00010ad04c7c) */
/* WARNING: Removing unreachable block (ram,0x00010ad04d14) */

void FUN_10ad04b1c(void)

{
  ulong uVar1;
  int iVar2;
  undefined8 in_x6;
  undefined8 in_x7;
  ulong uStack_a0;
  ulong uStack_98;
  ulong uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  long lStack_78;
  undefined8 auStack_70 [2];
  char cStack_59;
  ulong uStack_58;
  ulong uStack_50;
  undefined7 uStack_48;
  undefined1 uStack_41;
  ulong uStack_40;
  ulong uStack_38;
  ulong uStack_30;
  ulong *puVar3;
  
  func_0x00010ad031c0();
  FUN_10a09d9a0(auStack_70,0x113835d70,0);
  uStack_88 = 0;
  uStack_80 = 0;
  lStack_78 = 0;
  FUN_10a09cc04(&uStack_88,&UNK_10f6a2c8d,&UNK_10f6a2c98);
  FUN_10a177c38(&uStack_58,auStack_70,&uStack_88);
  uStack_38 = uStack_50;
  uStack_40 = uStack_58;
  uStack_30 = CONCAT17(uStack_41,uStack_48);
  if (lStack_78 < 0) {
    __ZdlPv(uStack_88);
  }
  if (cStack_59 < '\0') {
    __ZdlPv(auStack_70[0]);
  }
  puVar3 = &uStack_58;
  func_0x000107c2b054(puVar3,&uStack_40);
  iVar2 = (int)puVar3;
  FUN_10ad00cf8();
  if (iVar2 == 0) {
    if ((bRam000000011330a9e8 >> 1 & 1) != 0) {
      func_0x00010ae06f08(1,2,&UNK_10f6a2c08,&UNK_10f6a2c99,0x15a,&UNK_10f6a2ccc,in_x6,in_x7,
                          &uStack_58);
    }
    func_0x000107c2b054(&uStack_a0,"");
  }
  else {
    uStack_98 = uStack_38;
    uStack_a0 = uStack_40;
    uStack_90 = uStack_30;
  }
  uVar1 = uStack_98;
  if (-1 < (long)uStack_90) {
    uVar1 = uStack_90 >> 0x38;
  }
  if (uVar1 == 0) {
    uStack_40 = 0;
    uStack_38 = 0;
    uStack_30 = 0;
  }
  else {
    FUN_10a09d9a0(&uStack_58,&uStack_a0,0);
    FUN_10ad03448(&uStack_40);
  }
  if ((long)uRam0000000113835dc8 < 0) {
    __ZdlPv(uRam0000000113835db8);
  }
  uRam0000000113835dc0 = uStack_38;
  uRam0000000113835db8 = uStack_40;
  uRam0000000113835dc8 = uStack_30;
  uStack_30 = uStack_30 & 0xffffffffffffff;
  uStack_40 = uStack_40 & 0xffffffffffffff00;
  if ((long)uStack_90 < 0) {
    __ZdlPv(uStack_a0);
  }
  return;
}



/* Entry: 10ad04ddc; end: 10ad04eab;  */

void FUN_10ad04ddc(void)

{
  undefined8 uStack_68;
  undefined8 uStack_60;
  long lStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  long lStack_40;
  undefined1 uStack_38;
  undefined7 uStack_37;
  undefined8 uStack_30;
  undefined7 uStack_28;
  undefined1 uStack_21;
  
  FUN_10ad57dcc(&uStack_68);
  uStack_48 = uStack_60;
  uStack_50 = uStack_68;
  lStack_40 = lStack_58;
  uStack_60 = 0;
  lStack_58 = 0;
  uStack_68 = 0;
  FUN_10ad03448(&uStack_38,&uStack_50);
  if (lRam0000000113835d68 < 0) {
    __ZdlPv(uRam0000000113835d58);
  }
  uRam0000000113835d58 = CONCAT71(uStack_37,uStack_38);
  uRam0000000113835d60 = uStack_30;
  lRam0000000113835d68 = CONCAT17(uStack_21,uStack_28);
  uStack_21 = 0;
  uStack_38 = 0;
  if (lStack_40 < 0) {
    __ZdlPv(uStack_50);
  }
  if (lStack_58 < 0) {
    __ZdlPv(uStack_68);
  }
  return;
}



/* Entry: 10ad04eac; end: 10ad04f0f;  */

void FUN_10ad04eac(undefined8 param_1,undefined8 param_2,long param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010ad04eb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_3 + 0x10))();
  return;
}



/* Entry: 10ad04f10; end: 10ad04fff;  */

void FUN_10ad04f10(long param_1)

{
  undefined8 *puVar1;
  undefined7 uStack_48;
  undefined4 uStack_41;
  undefined1 uStack_3d;
  char cStack_31;
  undefined1 uStack_29;
  undefined7 *puStack_28;
  
  cStack_31 = '\v';
  uStack_48 = 0x65526567616d49;
  uStack_41 = 0x657a6973;
  uStack_3d = 0;
  puStack_28 = &uStack_48;
  func_0x000109a1b56c(param_1,&uStack_48,&UNK_10dd5b8f9,&puStack_28,&uStack_29);
  puVar1 = (undefined8 *)(param_1 + 0x38);
  *(undefined **)(param_1 + 0x28) = &DAT_110c6e1a8;
  *(code **)(param_1 + 0x30) = FUN_10ad05004;
  (**(code **)*puVar1)(puVar1);
  *puVar1 = &PTR_FUN_110c6e1c0;
  *(undefined ***)(param_1 + 0x88) = &PTR_DAT_110c6e1e8;
  *(undefined8 *)(param_1 + 0x80) = 2;
  *(undefined8 *)(param_1 + 0x98) = 0;
  *(undefined8 *)(param_1 + 0x90) = 1;
  *(undefined8 *)(param_1 + 0xa8) = 1;
  *(undefined8 *)(param_1 + 0xa0) = 0;
  *(undefined1 *)(param_1 + 0xb0) = 0;
  *(undefined ***)(param_1 + 0x78) = &PTR_DAT_110c6e1d8;
  *(code **)(param_1 + 0x70) = FUN_10ad05200;
  if (cStack_31 < '\0') {
    __ZdlPv(CONCAT17((undefined1)uStack_41,uStack_48));
  }
  return;
}



/* Entry: 10ad05000; end: 10ad05003;  */

void FUN_10ad05000(void)

{
  return;
}



/* Entry: 10ad05004; end: 10ad051eb;  */

/* WARNING: Removing unreachable block (ram,0x00010ad0517c) */

void FUN_10ad05004(ulong *param_1,long *param_2)

{
  undefined **ppuVar1;
  ulong *puVar2;
  long lVar3;
  code *pcVar4;
  bool bVar5;
  bool bVar6;
  ulong uVar7;
  long lVar8;
  undefined8 *puVar9;
  undefined *puVar10;
  undefined **ppuVar11;
  undefined1 *puStack_b0;
  ulong uStack_a8;
  byte bStack_99;
  undefined8 auStack_98 [2];
  char cStack_81;
  undefined8 auStack_80 [2];
  char cStack_69;
  undefined8 auStack_68 [2];
  char cStack_51;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  puVar2 = (ulong *)*param_2;
  if (param_2[1] - (long)puVar2 == 0x30) {
    if ((ulong *)param_2[1] != puVar2) {
      uVar7 = *puVar2;
      ppuVar1 = &PTR_PTR_1134051b0;
      if (*(undefined ***)(puVar2[2] + 0x28) != (undefined **)0x0) {
        ppuVar1 = *(undefined ***)(puVar2[2] + 0x28);
      }
      func_0x000109a1a810(uVar7,puVar2[1],ppuVar1);
      lVar3 = *param_2;
      if (1 < (ulong)((param_2[1] - lVar3 >> 3) * -0x5555555555555555)) {
        lVar8 = *(long *)(lVar3 + 0x18);
        ppuVar11 = *(undefined ***)(*(long *)(lVar3 + 0x28) + 0x28);
        ppuVar1 = &PTR_PTR_1134051b0;
        if (ppuVar11 != (undefined **)0x0) {
          ppuVar1 = ppuVar11;
        }
        func_0x000109a1a810(lVar8,*(undefined8 *)(lVar3 + 0x20),ppuVar1);
        bVar6 = false;
        bVar5 = true;
        if (0 < (int)uVar7) {
          bVar6 = (int)lVar8 < 0;
          bVar5 = (int)lVar8 == 0;
        }
        if (bVar5 || bVar6) {
          puVar10 = &UNK_10f6a2d7d;
          FUN_10a00946c(&UNK_10f6a2d7d);
          if ((char)bStack_99 < '\0') {
            __ZdlPv(puStack_b0);
          }
          if (cStack_51 < '\0') {
            __ZdlPv(auStack_68[0]);
          }
          if (cStack_69 < '\0') {
            __ZdlPv(auStack_80[0]);
          }
          if (cStack_81 < '\0') {
            __ZdlPv(auStack_98[0]);
          }
          __Unwind_Resume(puVar10);
          return;
        }
        *param_1 = uVar7 & 0xffffffff | lVar8 << 0x20;
        *(undefined1 *)(param_1 + 1) = 1;
        return;
      }
    }
  }
  else {
    __ZNSt3__19to_stringEm(auStack_98,2);
    FUN_109feb280(auStack_80,&UNK_10f6a2dee,auStack_98);
    FUN_10a012db0(auStack_68,auStack_80,&UNK_10f638754);
    __ZNSt3__19to_stringEm(&puStack_b0,(param_2[1] - *param_2 >> 3) * -0x5555555555555555);
    if (-1 < (char)bStack_99) {
      uStack_a8 = (ulong)bStack_99;
      puStack_b0 = (undefined1 *)&puStack_b0;
    }
    puVar9 = auStack_68;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (puVar9,puStack_b0,uStack_a8);
    uStack_48 = puVar9[1];
    uStack_50 = *puVar9;
    uStack_40 = puVar9[2];
    puVar9[1] = 0;
    puVar9[2] = 0;
    *puVar9 = 0;
    func_0x000105687ee0(&uStack_50);
  }
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x10ad05164);
  (*pcVar4)();
}



/* Entry: 10ad051ec; end: 10ad051ff;  */

void FUN_10ad051ec(void)

{
  return;
}



/* Entry: 10ad05200; end: 10ad053f7;  */

undefined *** FUN_10ad05200(undefined8 *param_1)

{
  uint uVar1;
  uint uVar2;
  char cVar3;
  bool bVar4;
  byte bVar5;
  uint uVar6;
  undefined8 *puVar7;
  undefined **ppuVar8;
  ulong uVar9;
  ulong uVar10;
  undefined ***pppuVar11;
  int iVar12;
  undefined **ppuVar13;
  undefined4 uVar14;
  uint *puVar15;
  long *plVar16;
  undefined *puVar17;
  undefined **unaff_x22;
  undefined *puVar18;
  undefined *puStack_c78;
  undefined8 uStack_c70;
  undefined1 uStack_c68;
  undefined *puStack_c60;
  undefined8 uStack_c58;
  undefined1 uStack_c50;
  undefined **ppuStack_c48;
  undefined *puStack_c40;
  undefined *puStack_c38;
  ulong uStack_c30;
  ulong uStack_c28;
  ulong uStack_c20;
  undefined4 uStack_c18;
  undefined **ppuStack_c10;
  undefined *puStack_c08;
  undefined8 uStack_c00;
  undefined1 uStack_bf8;
  undefined *puStack_bf0;
  undefined8 uStack_be8;
  undefined1 uStack_be0;
  int iStack_bd8;
  undefined1 auStack_bd0 [1024];
  undefined1 auStack_7d0 [1024];
  long lStack_3d0;
  undefined *puStack_358;
  undefined **appuStack_350 [7];
  undefined *puStack_318;
  undefined **appuStack_310 [4];
  byte bStack_2ef;
  ushort uStack_2e6;
  undefined1 auStack_288 [208];
  undefined1 auStack_1b8 [112];
  undefined8 *apuStack_148 [8];
  undefined8 *apuStack_108 [24];
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar16 = (long *)param_1[1];
  if (*plVar16 == 0) {
    pppuVar11 = (undefined ***)&UNK_10f6a2db1;
    FUN_10a00946c();
  }
  else {
    puVar15 = (uint *)*param_1;
    FUN_10a314fa4(auStack_288);
    uVar1 = *puVar15;
    uVar2 = puVar15[1];
    FUN_10a314fa4(&puStack_358,*plVar16);
    uVar6 = (uint)uStack_2e6;
    if (uStack_2e6 == 0) {
      uVar6 = (uint)bStack_2ef;
      func_0x0001096f1f84();
    }
    if (uVar6 - 1 < 4) {
      uVar14 = *(undefined4 *)(&UNK_10df13380 + (ulong)(uVar6 - 1) * 4);
    }
    else {
      uVar14 = 0;
    }
    unaff_x22 = &puStack_358;
    puStack_358 = &UNK_1096f34d4;
    appuStack_350[0] = &PTR_DAT_110b0afd0;
    puStack_318 = &UNK_1096f3724;
    appuStack_310[0] = &PTR_DAT_110b0afe8;
    func_0x0001096f38ec(auStack_1b8,auStack_288,
                        CONCAT44(uVar2 & ((int)uVar2 >> 0x1f ^ 0xffffffffU),
                                 uVar1 & ((int)uVar1 >> 0x1f ^ 0xffffffffU)),uVar14,&puStack_358);
    puVar7 = (undefined8 *)0x188;
    __Znwm();
    puVar7[1] = 0;
    puVar7[2] = 0;
    *puVar7 = &PTR_DAT_110ba6ac0;
    func_0x0001096f2390(puVar7 + 3,auStack_1b8);
    func_0x0001096f2328(auStack_1b8);
    (*(code *)*apuStack_108[0])(apuStack_108);
    (*(code *)*apuStack_148[0])(apuStack_148);
    (*(code *)*appuStack_310[0])(appuStack_310);
    pppuVar11 = appuStack_350;
    (*(code *)*appuStack_350[0])();
    plVar16 = (long *)param_1[2];
    *plVar16 = (long)(puVar7 + 3);
    plVar16[1] = (long)puVar7;
    *(undefined1 *)(plVar16 + 2) = 1;
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
      return pppuVar11;
    }
  }
  ___stack_chk_fail();
  func_0x0001096f2328(auStack_1b8);
  (*(code *)*apuStack_108[0])(apuStack_108);
  (*(code *)*apuStack_148[0])(apuStack_148);
  (*(code *)*appuStack_310[0])(unaff_x22 + 9);
  (*(code *)*appuStack_350[0])(unaff_x22 + 1);
  __Unwind_Resume();
  do {
    bVar5 = bRam0000000113835f63;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(0x113835f63,0x10);
    if (bVar4) {
      bRam0000000113835f63 = 1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  while ((bVar5 & 1) != 0) {
    do {
    } while ((bRam0000000113835f63 & 1) != 0);
    do {
      bVar5 = bRam0000000113835f63;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(0x113835f63,0x10);
      if (bVar4) {
        bRam0000000113835f63 = 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  bRam0000000113835f63 = 0;
  ppuVar8 = (undefined **)pppuVar11;
  if ((bRam0000000113835f62 & 1) == 0) {
    ppuVar8 = *pppuVar11;
    if (ppuVar8 == (undefined **)0x0) {
      ppuVar8 = (undefined **)0x113835f48;
      FUN_10a09f0cc(0x113835f48,0);
    }
    else {
      (**(code **)(*ppuVar8 + 0x80))(ppuVar8,0x113835f48);
    }
    FUN_10ad055a0();
    func_0x00010ae02ecc(0,ppuVar8);
    ppuVar8 = &PTR_PTR_113307468;
    FUN_10ae079a0();
    func_0x00010ae02edc();
    FUN_10ae07cd4(ppuVar8,&PTR_PTR_113307468);
  }
  do {
    bVar5 = bRam0000000113835fc3;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(0x113835fc3,0x10);
    if (bVar4) {
      bRam0000000113835fc3 = 1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  while ((bVar5 & 1) != 0) {
    do {
    } while ((bRam0000000113835fc3 & 1) != 0);
    do {
      bVar5 = bRam0000000113835fc3;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(0x113835fc3,0x10);
      if (bVar4) {
        bRam0000000113835fc3 = 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  bRam0000000113835fc3 = 0;
  if ((bRam0000000113835fc2 & 1) == 0) {
    ppuVar8 = *pppuVar11;
    if (ppuVar8 == (undefined **)0x0) {
      ppuVar8 = (undefined **)0x113835fa8;
      FUN_10a09f0cc(0x113835fa8,0);
    }
    else {
      (**(code **)(*ppuVar8 + 0x80))(ppuVar8,0x113835fa8);
    }
    func_0x00010ad0561c();
    func_0x00010ae02ecc(0,ppuVar8);
    ppuVar8 = &PTR_PTR_1133074a8;
    ppuVar13 = ppuVar8;
    FUN_10ae079a0();
    func_0x00010ae02edc();
    lStack_3d0 = *(long *)PTR____stack_chk_guard_11034bdc0;
    pppuVar11 = (undefined ***)0x0;
    if (ppuVar13 != (undefined **)0x0) {
      FUN_10ae03188(&puStack_c08,auStack_7d0,0x400,auStack_bd0,0x400,ppuVar13[0x13],ppuVar13[0xf],
                    ppuVar13 + 0x14,0x400);
      puStack_c78 = puStack_bf0;
      uStack_c70 = uStack_be8;
      puStack_c60 = puStack_c08;
      uStack_c58 = uStack_c00;
      uStack_c68 = uStack_be0;
      if (iStack_bd8 != 0) {
        puStack_c78 = &UNK_10f6c352e;
        uStack_c70 = 0x10;
        puStack_c60 = &UNK_10f6c352e;
        uStack_c58 = 0x10;
        uStack_c68 = 0;
        uStack_bf8 = 0;
      }
      puVar18 = ppuVar13[0x12];
      puVar17 = ppuVar13[0xb];
      uVar9 = 0;
      _clock_gettime_nsec_np();
      uVar10 = uVar9;
      _pthread_self();
      _pthread_mach_thread_np();
      ppuStack_c48 = ppuVar13 + 1;
      uStack_c18 = *(undefined4 *)(ppuVar13 + 0xe);
      uStack_c20 = uVar10 & 0xffffffff;
      ppuStack_c10 = ppuVar13 + 0x10;
      pppuVar11 = (undefined ***)*ppuVar13;
      ppuVar8 = (undefined **)&ppuStack_c48;
      uStack_c50 = uStack_bf8;
      puStack_c40 = puVar17;
      puStack_c38 = puVar18;
      uStack_c30 = (ulong)(puVar18 != (undefined *)0x0);
      uStack_c28 = uVar9;
      FUN_10ae0784c(pppuVar11,ppuVar8,&puStack_c60,&puStack_c78);
    }
    iVar12 = (int)ppuVar8;
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_3d0) {
      ___stack_chk_fail();
      if (iVar12 == 0) {
        __Unwind_Resume();
      }
      func_0x000104bd46a0();
      func_0x00010ae087bc();
      FUN_10ae07e54(pppuVar11);
      return pppuVar11;
    }
    return pppuVar11;
  }
  return (undefined ***)ppuVar8;
}



/* Entry: 10ad053f8; end: 10ad0559f;  */

undefined ** FUN_10ad053f8(undefined **param_1)

{
  char cVar1;
  bool bVar2;
  byte bVar3;
  long *plVar4;
  undefined **ppuVar5;
  ulong uVar6;
  ulong uVar7;
  undefined **ppuVar8;
  int iVar9;
  undefined **ppuVar10;
  undefined *puVar11;
  undefined *puVar12;
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
  
  do {
    bVar3 = bRam0000000113835f63;
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(0x113835f63,0x10);
    if (bVar2) {
      bRam0000000113835f63 = 1;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  while ((bVar3 & 1) != 0) {
    do {
    } while ((bRam0000000113835f63 & 1) != 0);
    do {
      bVar3 = bRam0000000113835f63;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x113835f63,0x10);
      if (bVar2) {
        bRam0000000113835f63 = 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  bRam0000000113835f63 = 0;
  ppuVar5 = param_1;
  if ((bRam0000000113835f62 & 1) == 0) {
    plVar4 = (long *)*param_1;
    if (plVar4 == (long *)0x0) {
      plVar4 = (long *)0x113835f48;
      FUN_10a09f0cc(0x113835f48,0);
    }
    else {
      (**(code **)(*plVar4 + 0x80))(plVar4,0x113835f48);
    }
    FUN_10ad055a0();
    func_0x00010ae02ecc(0,plVar4);
    ppuVar5 = &PTR_PTR_113307468;
    FUN_10ae079a0();
    func_0x00010ae02edc();
    FUN_10ae07cd4(ppuVar5,&PTR_PTR_113307468);
  }
  do {
    bVar3 = bRam0000000113835fc3;
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(0x113835fc3,0x10);
    if (bVar2) {
      bRam0000000113835fc3 = 1;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  while ((bVar3 & 1) != 0) {
    do {
    } while ((bRam0000000113835fc3 & 1) != 0);
    do {
      bVar3 = bRam0000000113835fc3;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x113835fc3,0x10);
      if (bVar2) {
        bRam0000000113835fc3 = 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  bRam0000000113835fc3 = 0;
  if ((bRam0000000113835fc2 & 1) == 0) {
    plVar4 = (long *)*param_1;
    if (plVar4 == (long *)0x0) {
      plVar4 = (long *)0x113835fa8;
      FUN_10a09f0cc(0x113835fa8,0);
    }
    else {
      (**(code **)(*plVar4 + 0x80))(plVar4,0x113835fa8);
    }
    func_0x00010ad0561c();
    func_0x00010ae02ecc(0,plVar4);
    ppuVar5 = &PTR_PTR_1133074a8;
    ppuVar10 = ppuVar5;
    FUN_10ae079a0();
    func_0x00010ae02edc();
    lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
    ppuVar8 = (undefined **)0x0;
    if (ppuVar10 != (undefined **)0x0) {
      FUN_10ae03188(&puStack_8a8,auStack_470,0x400,auStack_870,0x400,ppuVar10[0x13],ppuVar10[0xf],
                    ppuVar10 + 0x14,0x400);
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
      puVar12 = ppuVar10[0x12];
      puVar11 = ppuVar10[0xb];
      uVar6 = 0;
      _clock_gettime_nsec_np();
      uVar7 = uVar6;
      _pthread_self();
      _pthread_mach_thread_np();
      ppuStack_8e8 = ppuVar10 + 1;
      uStack_8b8 = *(undefined4 *)(ppuVar10 + 0xe);
      uStack_8c0 = uVar7 & 0xffffffff;
      ppuStack_8b0 = ppuVar10 + 0x10;
      ppuVar8 = (undefined **)*ppuVar10;
      ppuVar5 = (undefined **)&ppuStack_8e8;
      uStack_8f0 = uStack_898;
      puStack_8e0 = puVar11;
      puStack_8d8 = puVar12;
      uStack_8d0 = (ulong)(puVar12 != (undefined *)0x0);
      uStack_8c8 = uVar6;
      FUN_10ae0784c(ppuVar8,ppuVar5,&puStack_900,&puStack_918);
    }
    iVar9 = (int)ppuVar5;
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_70) {
      ___stack_chk_fail();
      if (iVar9 == 0) {
        __Unwind_Resume();
      }
      func_0x000104bd46a0();
      func_0x00010ae087bc();
      FUN_10ae07e54(ppuVar8);
      return ppuVar8;
    }
    return ppuVar8;
  }
  return ppuVar5;
}



/* Entry: 10ad055a0; end: 10ad05697;  */

byte FUN_10ad055a0(void)

{
  char cVar1;
  bool bVar2;
  byte *pbVar3;
  byte bVar4;
  
  do {
    bVar4 = bRam0000000113835f63;
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(0x113835f63,0x10);
    if (bVar2) {
      bRam0000000113835f63 = 1;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  while ((bVar4 & 1) != 0) {
    do {
    } while ((bRam0000000113835f63 & 1) != 0);
    do {
      bVar4 = bRam0000000113835f63;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x113835f63,0x10);
      if (bVar2) {
        bRam0000000113835f63 = 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  bVar4 = 0;
  bRam0000000113835f63 = 0;
  if (cRam0000000113835f62 == '\x01') {
    pbVar3 = (byte *)0x113835f48;
    FUN_10a08f69c();
    bVar4 = *pbVar3;
  }
  return bVar4 & 1;
}



/* Entry: 10ad05698; end: 10ad0582b;  */

void FUN_10ad05698(undefined8 *param_1,undefined8 *param_2)

{
  long lVar1;
  ulong uVar2;
  bool bVar3;
  undefined *puVar4;
  undefined8 in_x6;
  undefined8 in_x7;
  long lVar5;
  undefined8 *puVar6;
  undefined **ppuVar7;
  undefined8 uVar8;
  
  ppuVar7 = (undefined **)&UNK_110c6e280;
  lVar5 = 0;
  do {
    puVar4 = (&PTR_DAT_110c6e238)[lVar5 * 3];
    uVar2 = param_2[1];
    puVar6 = (undefined8 *)*param_2;
    if (-1 < (char)*(byte *)((long)param_2 + 0x17)) {
      uVar2 = (ulong)*(byte *)((long)param_2 + 0x17);
      puVar6 = param_2;
    }
    FUN_10a003d5c(puVar4,*(undefined8 *)(&UNK_110c6e240 + lVar5 * 0x18),puVar6,uVar2);
    bVar3 = -1 < (char)puVar4;
    if (bVar3) {
      ppuVar7 = &PTR_DAT_110c6e238 + lVar5 * 3;
    }
    lVar1 = 1;
    if (!bVar3) {
      lVar1 = 2;
    }
    bVar3 = lVar5 == 0;
    lVar5 = lVar1;
  } while (bVar3);
  if (ppuVar7 != (undefined **)&UNK_110c6e280) {
    puVar4 = *ppuVar7;
    uVar2 = param_2[1];
    puVar6 = (undefined8 *)*param_2;
    if (-1 < (char)*(byte *)((long)param_2 + 0x17)) {
      uVar2 = (ulong)*(byte *)((long)param_2 + 0x17);
      puVar6 = param_2;
    }
    FUN_10a003d5c(puVar4,ppuVar7[1],puVar6,uVar2);
    if ((char)puVar4 < '\x01') {
      if ((bRam000000011330a9e8 >> 2 & 1) != 0) {
        puVar6 = param_2;
        if (*(char *)((long)param_2 + 0x17) < '\0') {
          puVar6 = (undefined8 *)*param_2;
        }
        func_0x00010ae06f08(1,4,&UNK_10f6a2eb2,&UNK_10f6a2ef3,0x25,&UNK_10f6a2fa8,in_x6,in_x7,puVar6
                           );
      }
      uRam0000000113833330 = *(undefined1 *)(ppuVar7 + 2);
      goto LAB_10ad0579c;
    }
  }
  if ((bRam000000011330a9e8 >> 1 & 1) != 0) {
    puVar6 = param_2;
    if (*(char *)((long)param_2 + 0x17) < '\0') {
      puVar6 = (undefined8 *)*param_2;
    }
    func_0x00010ae06f08(1,2,&UNK_10f6a2eb2,&UNK_10f6a2ef3,0x22,&UNK_10f6a2f4a,in_x6,in_x7,puVar6);
  }
  uRam0000000113833330 = 0;
LAB_10ad0579c:
  uVar8 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar8;
  param_1[2] = param_2[2];
  param_2[1] = 0;
  param_2[2] = 0;
  *param_2 = 0;
  return;
}



/* Entry: 10ad0582c; end: 10ad059bb;  */

void FUN_10ad0582c(undefined8 *param_1,undefined8 *param_2)

{
  ulong uVar1;
  undefined8 *puVar2;
  undefined8 in_x6;
  undefined8 in_x7;
  long lVar3;
  undefined8 *puVar4;
  bool bVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  
  bVar5 = false;
  lVar3 = 0;
  puVar4 = (undefined8 *)&UNK_110c6e2b8;
  do {
    puVar6 = puVar4;
    puVar4 = (undefined8 *)((long)&PTR_DAT_110c6e288 + lVar3);
    uVar7 = *puVar4;
    uVar1 = param_2[1];
    puVar2 = (undefined8 *)*param_2;
    if (-1 < (char)*(byte *)((long)param_2 + 0x17)) {
      uVar1 = (ulong)*(byte *)((long)param_2 + 0x17);
      puVar2 = param_2;
    }
    FUN_10a003d5c(uVar7,*(undefined8 *)(&UNK_110c6e290 + lVar3),puVar2,uVar1);
    if (bVar5) break;
    bVar5 = true;
    lVar3 = 0x18;
  } while (-1 < (char)uVar7);
  if (-1 < (char)uVar7) {
    puVar6 = puVar4;
  }
  if (puVar6 != (undefined8 *)&UNK_110c6e2b8) {
    uVar7 = *puVar6;
    uVar1 = param_2[1];
    puVar4 = (undefined8 *)*param_2;
    if (-1 < (char)*(byte *)((long)param_2 + 0x17)) {
      uVar1 = (ulong)*(byte *)((long)param_2 + 0x17);
      puVar4 = param_2;
    }
    FUN_10a003d5c(uVar7,puVar6[1],puVar4,uVar1);
    if ((char)uVar7 < '\x01') {
      if ((bRam000000011330a9e8 >> 2 & 1) != 0) {
        puVar4 = param_2;
        if (*(char *)((long)param_2 + 0x17) < '\0') {
          puVar4 = (undefined8 *)*param_2;
        }
        func_0x00010ae06f08(1,4,&UNK_10f6a2eb2,&UNK_10f6a3021,0x37,&UNK_10f6a30e2,in_x6,in_x7,puVar4
                           );
      }
      uRam0000000113833331 = *(undefined1 *)(puVar6 + 2);
      goto LAB_10ad05930;
    }
  }
  if ((bRam000000011330a9e8 >> 1 & 1) != 0) {
    puVar4 = param_2;
    if (*(char *)((long)param_2 + 0x17) < '\0') {
      puVar4 = (undefined8 *)*param_2;
    }
    func_0x00010ae06f08(1,2,&UNK_10f6a2eb2,&UNK_10f6a3021,0x34,&UNK_10f6a307e,in_x6,in_x7,puVar4);
  }
  uRam0000000113833331 = 0;
LAB_10ad05930:
  uVar7 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar7;
  param_1[2] = param_2[2];
  param_2[1] = 0;
  param_2[2] = 0;
  *param_2 = 0;
  return;
}



/* Entry: 10ad059bc; end: 10ad05a2b;  */

void FUN_10ad059bc(undefined8 *param_1,long param_2)

{
  code *pcVar1;
  undefined8 uStack_40;
  undefined8 uStack_38;
  long lStack_30;
  
  pcVar1 = *(code **)(param_2 + 0x10);
  uStack_38 = param_1[1];
  uStack_40 = *param_1;
  lStack_30 = param_1[2];
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = 0;
  (*pcVar1)(&uStack_40);
  if (lStack_30 < 0) {
    __ZdlPv(uStack_40);
  }
  return;
}



/* Entry: 10ad05a2c; end: 10ad05ac3;  */

undefined * FUN_10ad05a2c(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  ulong uVar3;
  ulong uVar4;
  undefined *puVar5;
  int iVar6;
  undefined **ppuVar7;
  undefined **ppuVar8;
  undefined *puVar9;
  undefined *puVar10;
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
  
  puVar2 = (undefined8 *)0x113836138;
  FUN_10a2194d4(0x113836138,*param_1);
  FUN_10a051594();
  uVar4 = puVar2[1];
  puVar1 = (undefined8 *)*puVar2;
  if (-1 < (char)*(byte *)((long)puVar2 + 0x17)) {
    uVar4 = (ulong)*(byte *)((long)puVar2 + 0x17);
    puVar1 = puVar2;
  }
  FUN_10ae03140(0,puVar1,uVar4);
  ppuVar8 = &PTR_PTR_1133074f0;
  ppuVar7 = ppuVar8;
  FUN_10ae079a0();
  FUN_10ae0314c();
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar5 = (undefined *)0x0;
  if (ppuVar7 != (undefined **)0x0) {
    FUN_10ae03188(&puStack_8a8,auStack_470,0x400,auStack_870,0x400,ppuVar7[0x13],ppuVar7[0xf],
                  ppuVar7 + 0x14,0x400);
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
    puVar10 = ppuVar7[0x12];
    puVar9 = ppuVar7[0xb];
    uVar3 = 0;
    _clock_gettime_nsec_np();
    uVar4 = uVar3;
    _pthread_self();
    _pthread_mach_thread_np();
    ppuStack_8e8 = ppuVar7 + 1;
    uStack_8b8 = *(undefined4 *)(ppuVar7 + 0xe);
    uStack_8c0 = uVar4 & 0xffffffff;
    ppuStack_8b0 = ppuVar7 + 0x10;
    puVar5 = *ppuVar7;
    ppuVar8 = (undefined **)&ppuStack_8e8;
    uStack_8f0 = uStack_898;
    puStack_8e0 = puVar9;
    puStack_8d8 = puVar10;
    uStack_8d0 = (ulong)(puVar10 != (undefined *)0x0);
    uStack_8c8 = uVar3;
    FUN_10ae0784c(puVar5,ppuVar8,&puStack_900,&puStack_918);
  }
  iVar6 = (int)ppuVar8;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_70) {
    ___stack_chk_fail();
    if (iVar6 == 0) {
      __Unwind_Resume();
    }
    func_0x000104bd46a0();
    func_0x00010ae087bc();
    FUN_10ae07e54(puVar5);
    return puVar5;
  }
  return puVar5;
}



/* Entry: 10ad05ac4; end: 10ad05c6b;  */

uint FUN_10ad05ac4(void)

{
  int iVar1;
  ulong uVar2;
  byte *pbVar3;
  byte *pbVar4;
  ulong uVar5;
  byte *pbVar6;
  byte *pbVar7;
  ulong uVar8;
  uint uStack_28;
  uint uStack_24;
  
  pbVar3 = (byte *)0x113836138;
  FUN_10a051594();
  uVar2 = *(ulong *)(pbVar3 + 8);
  pbVar6 = *(byte **)pbVar3;
  if (-1 < (char)pbVar3[0x17]) {
    uVar2 = (ulong)pbVar3[0x17];
    pbVar6 = pbVar3;
  }
  if (uVar2 == 0) {
    uVar5 = 0xffffffffffffffff;
  }
  else {
    pbVar3 = pbVar6;
    _memchr(pbVar6,0x3b,uVar2);
    uVar5 = (long)pbVar3 - (long)pbVar6;
    if (pbVar3 == (byte *)0x0) {
      uVar5 = 0xffffffffffffffff;
    }
  }
  if (uVar5 <= uVar2) {
    uVar2 = uVar5;
  }
  pbVar3 = pbVar6;
  if (uVar2 == 0) {
    uVar5 = 0;
    uVar8 = 0;
  }
  else {
    uVar5 = uVar2;
    do {
      if (*pbVar3 != 0x20) {
        pbVar6 = pbVar6 + uVar2;
        goto LAB_10ad05b70;
      }
      pbVar3 = pbVar3 + 1;
      uVar5 = uVar5 - 1;
    } while (uVar5 != 0);
    uVar8 = 0;
    pbVar3 = pbVar6 + uVar2;
    pbVar6 = pbVar6 + uVar2;
  }
  goto LAB_10ad05ba0;
  while( true ) {
    pbVar6 = pbVar6 + -1;
    uVar5 = uVar5 - 1;
    if (uVar5 == 0) break;
LAB_10ad05b70:
    if (pbVar6[-1] != 0x20) {
      uVar8 = (ulong)(*pbVar3 == 0x2d);
      goto LAB_10ad05ba0;
    }
  }
  uVar8 = 0;
  pbVar6 = pbVar3;
LAB_10ad05ba0:
  pbVar3 = pbVar3 + uVar8;
  pbVar4 = pbVar3;
  pbVar7 = pbVar6;
  if (uVar5 == uVar8) {
LAB_10ad05bb0:
    if ((pbVar4 != pbVar6) && (pbVar7 = pbVar4, *pbVar4 - 0x30 < 10)) {
      FUN_10a10ca04(pbVar4,pbVar6,&uStack_24,&uStack_28);
      if (((pbVar4 != pbVar6) && (*pbVar4 - 0x30 < 10)) || (CARRY4(uStack_24,uStack_28))) {
        return 0;
      }
      uStack_24 = uStack_24 + uStack_28;
      if ((int)uVar8 == 0) {
        return uStack_24 & ((int)uStack_24 >> 0x1f ^ 0xffffffffU);
      }
      if (0x80000000 < uStack_24) {
        return 0;
      }
      goto LAB_10ad05c38;
    }
  }
  else {
    do {
      if (*pbVar4 != 0x30) goto LAB_10ad05bb0;
      pbVar4 = pbVar4 + 1;
    } while (pbVar4 != pbVar6);
  }
  uStack_24 = 0;
  iVar1 = 0;
  if (pbVar7 != pbVar3) {
    iVar1 = (int)uVar8;
  }
  if (iVar1 == 0) {
    return 0;
  }
LAB_10ad05c38:
  return -uStack_24;
}



/* Entry: 10ad05c6c; end: 10ad05e0b;  */

long * FUN_10ad05c6c(undefined8 param_1,ulong param_2)

{
  ulong uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  long lVar5;
  char *pcVar6;
  char *pcVar7;
  long *plVar8;
  long *plVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  char *pcVar13;
  ulong uVar14;
  long lVar15;
  undefined1 uStack_90;
  undefined7 uStack_8f;
  char cStack_79;
  char cStack_78;
  undefined8 uStack_70;
  ulong uStack_68;
  undefined1 *puStack_60;
  code *pcStack_58;
  
  uVar3 = param_1;
  FUN_10ad05ac4();
  if ((int)uVar3 < 1) {
    return (long *)0x0;
  }
  if (param_2 == 0) {
    return (long *)0x0;
  }
  puVar4 = (undefined8 *)0x113836138;
  FUN_10a051594();
  uVar14 = puVar4[1];
  puVar2 = (undefined8 *)*puVar4;
  if (-1 < (char)*(byte *)((long)puVar4 + 0x17)) {
    uVar14 = (ulong)*(byte *)((long)puVar4 + 0x17);
    puVar2 = puVar4;
  }
  if (uVar14 != 0) {
    puVar4 = puVar2;
    _memchr(puVar2,0x3b,uVar14);
    uVar10 = (long)puVar4 - (long)puVar2;
    if (puVar4 != (undefined8 *)0x0 && uVar10 != 0xffffffffffffffff) {
      if (uVar14 <= uVar10) {
        plVar9 = (long *)&UNK_10f6a3144;
        FUN_109ffdddc();
        pcStack_58 = FUN_10ad05e0c;
        plVar8 = (long *)*plVar9;
        uStack_70 = param_1;
        uStack_68 = param_2;
        puStack_60 = &stack0xfffffffffffffff0;
        if (plVar8 == (long *)0x0) {
          FUN_10a09f0cc(0x1138361d0,0);
        }
        else {
          (**(code **)(*plVar8 + 0x80))(plVar8,0x1138361d0);
        }
        plVar9 = (long *)*plVar9;
        plVar8 = (long *)0x113836230;
        if (plVar9 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00010a219508. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(*plVar9 + 0x90))(plVar9,0x113836230);
          return plVar9;
        }
        uStack_90 = 0;
        cStack_78 = '\0';
        FUN_10a09f1ec(0x113836230,&uStack_90);
        if ((cStack_78 == '\x01') && (cStack_79 < '\0')) {
          plVar8 = (long *)CONCAT71(uStack_8f,uStack_90);
          __ZdlPv(plVar8);
        }
        return plVar8;
      }
      lVar15 = (long)puVar2 + uVar10 + 1;
      uVar14 = uVar14 - (uVar10 + 1);
      goto LAB_10ad05d0c;
    }
  }
  uVar14 = 0;
  lVar15 = 0;
LAB_10ad05d0c:
  uVar10 = 0;
LAB_10ad05d14:
  uVar1 = uVar14 - uVar10;
  if (uVar14 < uVar10 || uVar1 == 0) {
    uVar11 = 0xffffffffffffffff;
  }
  else {
    lVar5 = lVar15 + uVar10;
    _memchr(lVar5,0x2c,uVar1);
    uVar11 = lVar5 - lVar15;
    if (lVar5 == 0) {
      uVar11 = 0xffffffffffffffff;
    }
  }
  pcVar6 = (char *)(lVar15 + uVar10);
  uVar12 = uVar1;
  if (uVar11 - uVar10 <= uVar1) {
    uVar12 = uVar11 - uVar10;
  }
  if (uVar11 != 0xffffffffffffffff) {
    uVar1 = uVar12;
  }
  if (uVar1 == 0) {
    uVar12 = 0;
    pcVar7 = pcVar6;
  }
  else {
    pcVar7 = pcVar6 + uVar1;
    uVar12 = uVar1;
    do {
      if (*pcVar6 != ' ') {
        pcVar13 = (char *)(lVar15 + -1 + uVar1 + uVar10);
        goto LAB_10ad05d94;
      }
      pcVar6 = pcVar6 + 1;
      uVar12 = uVar12 - 1;
    } while (uVar12 != 0);
  }
  goto LAB_10ad05da8;
  while (uVar12 = uVar12 - 1, pcVar13 = pcVar13 + -1, uVar12 != 0) {
LAB_10ad05d94:
    pcVar7 = pcVar6;
    if (*pcVar13 != ' ') break;
  }
LAB_10ad05da8:
  if (uVar12 == param_2) {
    _memcmp(pcVar7,param_1,param_2);
    if (uVar11 == 0xffffffffffffffff) {
      return (long *)(ulong)((int)pcVar7 == 0);
    }
    if ((int)pcVar7 == 0) {
      return (long *)0x1;
    }
  }
  if (uVar14 <= uVar11) {
    return (long *)0x0;
  }
  uVar10 = uVar11 + 1;
  goto LAB_10ad05d14;
}



/* Entry: 10ad05e0c; end: 10ad05e63;  */

void FUN_10ad05e0c(long *param_1)

{
  long *plVar1;
  undefined1 uStack_40;
  undefined7 uStack_3f;
  char cStack_29;
  char cStack_28;
  
  plVar1 = (long *)*param_1;
  if (plVar1 == (long *)0x0) {
    FUN_10a09f0cc(0x1138361d0,0);
  }
  else {
    (**(code **)(*plVar1 + 0x80))(plVar1,0x1138361d0);
  }
  param_1 = (long *)*param_1;
  if (param_1 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00010a219508. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x90))(param_1,0x113836230);
    return;
  }
  uStack_40 = 0;
  cStack_28 = '\0';
  FUN_10a09f1ec(0x113836230,&uStack_40);
  if ((cStack_28 == '\x01') && (cStack_29 < '\0')) {
    __ZdlPv(CONCAT71(uStack_3f,uStack_40));
  }
  return;
}



/* Entry: 10ad05e64; end: 10ad05edf;  */

byte FUN_10ad05e64(void)

{
  char cVar1;
  bool bVar2;
  byte *pbVar3;
  byte bVar4;
  
  do {
    bVar4 = bRam00000001138362e3;
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(0x1138362e3,0x10);
    if (bVar2) {
      bRam00000001138362e3 = 1;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  while ((bVar4 & 1) != 0) {
    do {
    } while ((bRam00000001138362e3 & 1) != 0);
    do {
      bVar4 = bRam00000001138362e3;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1138362e3,0x10);
      if (bVar2) {
        bRam00000001138362e3 = 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  bVar4 = 0;
  bRam00000001138362e3 = 0;
  if (cRam00000001138362e2 == '\x01') {
    pbVar3 = (byte *)0x1138362c8;
    FUN_10a08f69c();
    bVar4 = *pbVar3;
  }
  return bVar4 & 1;
}



/* Entry: 10ad05ee0; end: 10ad05fa7;  */

undefined * FUN_10ad05ee0(long *param_1,long param_2)

{
  undefined1 *puVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  int iVar5;
  undefined8 uVar6;
  undefined **ppuVar7;
  undefined **ppuVar8;
  undefined *puVar9;
  undefined *puVar10;
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
  
  if (param_2 == 0) {
    uVar6 = 0;
  }
  else if ((*(int *)(param_2 + 0x734) == 1) && (*(int *)(param_2 + 0x738) == 0x3fc)) {
    param_1 = (long *)*param_1;
    if (param_1 != (long *)0x0) {
      (**(code **)(*param_1 + 0x80))(param_1,0x113836328);
      goto LAB_10ad05f58;
    }
    uVar6 = 0;
  }
  else {
    uVar6 = 0x100;
  }
  FUN_10a09f0cc(0x113836328,uVar6);
LAB_10ad05f58:
  puVar1 = (undefined1 *)0x113836328;
  FUN_10a08f69c();
  func_0x00010ae02ecc(0,*puVar1);
  ppuVar8 = &PTR_PTR_113307528;
  ppuVar7 = ppuVar8;
  FUN_10ae079a0();
  func_0x00010ae02edc();
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar4 = (undefined *)0x0;
  if (ppuVar7 != (undefined **)0x0) {
    FUN_10ae03188(&puStack_8a8,auStack_470,0x400,auStack_870,0x400,ppuVar7[0x13],ppuVar7[0xf],
                  ppuVar7 + 0x14,0x400);
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
    puVar10 = ppuVar7[0x12];
    puVar9 = ppuVar7[0xb];
    uVar2 = 0;
    _clock_gettime_nsec_np();
    uVar3 = uVar2;
    _pthread_self();
    _pthread_mach_thread_np();
    ppuStack_8e8 = ppuVar7 + 1;
    uStack_8b8 = *(undefined4 *)(ppuVar7 + 0xe);
    uStack_8c0 = uVar3 & 0xffffffff;
    ppuStack_8b0 = ppuVar7 + 0x10;
    puVar4 = *ppuVar7;
    ppuVar8 = (undefined **)&ppuStack_8e8;
    uStack_8f0 = uStack_898;
    puStack_8e0 = puVar9;
    puStack_8d8 = puVar10;
    uStack_8d0 = (ulong)(puVar10 != (undefined *)0x0);
    uStack_8c8 = uVar2;
    FUN_10ae0784c(puVar4,ppuVar8,&puStack_900,&puStack_918);
  }
  iVar5 = (int)ppuVar8;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_70) {
    ___stack_chk_fail();
    if (iVar5 == 0) {
      __Unwind_Resume();
    }
    func_0x000104bd46a0();
    func_0x00010ae087bc();
    FUN_10ae07e54(puVar4);
    return puVar4;
  }
  return puVar4;
}



/* Entry: 10ad05fa8; end: 10ad06023;  */

byte FUN_10ad05fa8(void)

{
  char cVar1;
  bool bVar2;
  byte *pbVar3;
  byte bVar4;
  
  do {
    bVar4 = bRam00000001138363a3;
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(0x1138363a3,0x10);
    if (bVar2) {
      bRam00000001138363a3 = 1;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  while ((bVar4 & 1) != 0) {
    do {
    } while ((bRam00000001138363a3 & 1) != 0);
    do {
      bVar4 = bRam00000001138363a3;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1138363a3,0x10);
      if (bVar2) {
        bRam00000001138363a3 = 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  bVar4 = 0;
  bRam00000001138363a3 = 0;
  if (cRam00000001138363a2 == '\x01') {
    pbVar3 = (byte *)0x113836388;
    FUN_10a08f69c();
    bVar4 = *pbVar3;
  }
  return bVar4 & 1;
}



/* Entry: 10ad06024; end: 10ad060c7;  */

undefined1 FUN_10ad06024(long *param_1)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined **ppuVar3;
  
  param_1 = (long *)*param_1;
  if (param_1 == (long *)0x0) {
    FUN_10a09f0cc(0x113836450,0);
  }
  else {
    (**(code **)(*param_1 + 0x80))(param_1,0x113836450);
  }
  puVar2 = (undefined1 *)0x113836450;
  puVar1 = puVar2;
  FUN_10a08f69c();
  func_0x00010ae02ecc(0,*puVar1);
  ppuVar3 = &PTR_PTR_113307550;
  FUN_10ae079a0();
  func_0x00010ae02edc();
  FUN_10ae07cd4(ppuVar3,&PTR_PTR_113307550);
  FUN_10a08f69c();
  return *puVar2;
}



/* Entry: 10ad060c8; end: 10ad06117;  */

/* WARNING: Removing unreachable block (ram,0x00010ad06100) */

long FUN_10ad060c8(long param_1)

{
  (*(code *)**(undefined8 **)(param_1 + 0x80))();
  (*(code *)**(undefined8 **)(param_1 + 0x40))((undefined8 *)(param_1 + 0x40));
  return param_1;
}



/* Entry: 10ad06118; end: 10ad06187;  */

undefined * FUN_10ad06118(undefined8 *param_1)

{
  undefined4 *puVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  int iVar5;
  undefined **ppuVar6;
  undefined **ppuVar7;
  undefined *puVar8;
  undefined *puVar9;
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
  
  puVar1 = (undefined4 *)0x113836510;
  FUN_10ad06188(0x113836510,*param_1);
  FUN_10ad0621c();
  func_0x00010ae02ecc(0,*puVar1);
  ppuVar7 = &PTR_PTR_113307578;
  ppuVar6 = ppuVar7;
  FUN_10ae079a0();
  func_0x00010ae02edc();
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar4 = (undefined *)0x0;
  if (ppuVar6 != (undefined **)0x0) {
    FUN_10ae03188(&puStack_8a8,auStack_470,0x400,auStack_870,0x400,ppuVar6[0x13],ppuVar6[0xf],
                  ppuVar6 + 0x14,0x400);
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
    puVar9 = ppuVar6[0x12];
    puVar8 = ppuVar6[0xb];
    uVar2 = 0;
    _clock_gettime_nsec_np();
    uVar3 = uVar2;
    _pthread_self();
    _pthread_mach_thread_np();
    ppuStack_8e8 = ppuVar6 + 1;
    uStack_8b8 = *(undefined4 *)(ppuVar6 + 0xe);
    uStack_8c0 = uVar3 & 0xffffffff;
    ppuStack_8b0 = ppuVar6 + 0x10;
    puVar4 = *ppuVar6;
    ppuVar7 = (undefined **)&ppuStack_8e8;
    uStack_8f0 = uStack_898;
    puStack_8e0 = puVar8;
    puStack_8d8 = puVar9;
    uStack_8d0 = (ulong)(puVar9 != (undefined *)0x0);
    uStack_8c8 = uVar2;
    FUN_10ae0784c(puVar4,ppuVar7,&puStack_900,&puStack_918);
  }
  iVar5 = (int)ppuVar7;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_70) {
    ___stack_chk_fail();
    if (iVar5 == 0) {
      __Unwind_Resume();
    }
    func_0x000104bd46a0();
    func_0x00010ae087bc();
    FUN_10ae07e54(puVar4);
    return puVar4;
  }
  return puVar4;
}



/* Entry: 10ad06188; end: 10ad0621b;  */

void FUN_10ad06188(byte *param_1,long *param_2)

{
  byte bVar1;
  char cVar2;
  bool bVar3;
  
  do {
    bVar1 = *param_1;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(param_1,0x10);
    if (bVar3) {
      *param_1 = 1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  while ((bVar1 & 1) != 0) {
    do {
    } while ((*param_1 & 1) != 0);
    do {
      bVar1 = *param_1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(param_1,0x10);
      if (bVar3) {
        *param_1 = 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  if (param_1[8] == 1) {
    param_1[8] = 0;
  }
  if (param_2 == (long *)0x0) {
    FUN_10a09efac(param_1 + 0x10,0);
  }
  else {
    (**(code **)(*param_2 + 0x70))(param_2,param_1 + 0x10);
  }
  *param_1 = 0;
  return;
}



/* Entry: 10ad0621c; end: 10ad062ab;  */

byte * FUN_10ad0621c(byte *param_1)

{
  byte bVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  code *pcVar5;
  
  do {
    bVar1 = *param_1;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(param_1,0x10);
    if (bVar3) {
      *param_1 = 1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  while ((bVar1 & 1) != 0) {
    do {
    } while ((*param_1 & 1) != 0);
    do {
      bVar1 = *param_1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(param_1,0x10);
      if (bVar3) {
        *param_1 = 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  if ((param_1[8] & 1) == 0) {
    pcVar5 = *(code **)(param_1 + 0x78);
    iVar4 = (int)param_1 + 0x10;
    FUN_10a08fec0();
    (*pcVar5)();
    *(int *)(param_1 + 4) = iVar4;
    param_1[8] = 1;
  }
  *param_1 = 0;
  return param_1 + 4;
}



/* Entry: 10ad062ac; end: 10ad062eb;  */

byte FUN_10ad062ac(void)

{
  byte bVar1;
  byte *pbVar2;
  
  pbVar2 = (byte *)0x113836510;
  FUN_10ad0621c();
  if ((*pbVar2 >> 2 & 1) == 0) {
    pbVar2 = (byte *)0x113836510;
    FUN_10ad0621c();
    bVar1 = *pbVar2 >> 3 & 1;
  }
  else {
    bVar1 = 1;
  }
  return bVar1;
}



/* Entry: 10ad062ec; end: 10ad06307;  */

undefined4 FUN_10ad062ec(undefined4 *param_1)

{
  return *param_1;
}



/* Entry: 10ad06308; end: 10ad0644f;  */

long * FUN_10ad06308(long *param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  undefined8 uVar7;
  long *plVar8;
  undefined8 *puVar9;
  undefined8 *extraout_x8;
  int *piVar10;
  int *piVar11;
  ulong uVar12;
  int iStack_284;
  long *plStack_280;
  long *plStack_278;
  long *plStack_270;
  long *plStack_268;
  undefined1 **ppuStack_260;
  code *pcStack_258;
  long *plStack_250;
  long *plStack_240;
  long *plStack_238;
  long *plStack_230;
  long lStack_228;
  undefined1 auStack_220 [96];
  long lStack_1c0;
  long lStack_1b8;
  undefined4 uStack_1b0;
  long lStack_1a8;
  undefined1 auStack_1a0 [72];
  long lStack_158;
  undefined1 *puStack_120;
  code *pcStack_118;
  undefined8 uStack_110;
  long lStack_108;
  undefined1 auStack_100 [96];
  long lStack_a0;
  long lStack_98;
  undefined4 uStack_90;
  long lStack_88;
  undefined1 auStack_80 [72];
  long lStack_38;
  
  puVar9 = &uStack_110;
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lStack_108 = *param_1;
  if (lStack_108 != 0) {
    _memcpy(auStack_100,param_1 + 1,lStack_108 << 5);
  }
  lStack_98 = param_1[0xe];
  lStack_a0 = param_1[0xd];
  uStack_90 = (undefined4)param_1[0xf];
  lStack_88 = param_1[0x10];
  if (lStack_88 != 0) {
    _memcpy(auStack_80,param_1 + 0x11,lStack_88 * 0x18);
  }
  plVar2 = (long *)PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c25da80();
  _objc_retainAutoreleasedReturnValue();
  FUN_10ad065fc(&uStack_110,param_3);
  plVar3 = &lStack_108;
  plVar8 = plVar2;
  FUN_10ad06450(plVar3,plVar2,*(undefined8 *)PTR__kUTTypeJPEG_11034b1d8);
  FUN_10aa12064(&uStack_110);
  plVar4 = plVar2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return plVar3;
  }
  ___stack_chk_fail();
  FUN_10aa12064(&uStack_110);
  _objc_release(plVar2);
  __Unwind_Resume();
  pcStack_118 = FUN_10ad06450;
  lStack_158 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_120 = &stack0xfffffffffffffff0;
  _objc_retain(plVar8);
  plVar3 = (long *)PTR__OBJC_CLASS___NSURL_1126ae598;
  func_0x00010bfad300();
  _objc_retainAutoreleasedReturnValue();
  plStack_230 = plVar3;
  _CGImageDestinationCreateWithURL();
  lStack_228 = *plVar4;
  plStack_238 = plVar3;
  if (lStack_228 != 0) {
    _memcpy(auStack_220,plVar4 + 1,lStack_228 << 5);
  }
  lStack_1b8 = plVar4[0xe];
  lStack_1c0 = plVar4[0xd];
  uStack_1b0 = (undefined4)plVar4[0xf];
  lStack_1a8 = plVar4[0x10];
  if (lStack_1a8 != 0) {
    _memcpy(auStack_1a0,plVar4 + 0x11,lStack_1a8 * 0x18);
  }
  plVar2 = &lStack_228;
  FUN_10ad51860(plVar2,1);
  plStack_240 = plVar2;
  _CGImageDestinationAddImage(plVar3,plVar2,*puVar9);
  plVar2 = plVar3;
  _CGImageDestinationFinalize();
  if (((ulong)plVar2 & 1) == 0) {
    plStack_250 = plVar8;
    _NSLog(&PTR____CFConstantStringClassReference_110f2dbf8);
  }
  FUN_10a1b0db4(&plStack_240);
  FUN_10ad06c30(&plStack_238);
  FUN_10a1b0d54(&plStack_230);
  plVar5 = plVar8;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_158) {
    return plVar2;
  }
  ___stack_chk_fail();
  FUN_10ad06c30(&plStack_238);
  FUN_10a1b0d54(&plStack_230);
  _objc_release(plVar8);
  plVar2 = plVar5;
  __Unwind_Resume();
  pcStack_258 = FUN_10ad065fc;
  plVar6 = *(long **)PTR__kCFAllocatorDefault_11034ab78;
  plStack_280 = plVar3;
  plStack_278 = plVar4;
  plStack_270 = plVar5;
  plStack_268 = plVar8;
  ppuStack_260 = &puStack_120;
  _CFDictionaryCreateMutable
            (plVar6,1,PTR__kCFTypeDictionaryKeyCallBacks_11034ac18,
             PTR__kCFTypeDictionaryValueCallBacks_11034ac20);
  uVar12 = 0;
  *extraout_x8 = plVar6;
  piVar10 = (int *)&UNK_10e50dd20;
  while( true ) {
    while( true ) {
      piVar11 = (int *)(&UNK_10e50dcf8 + uVar12 * 8);
      if ((int)plVar2 <= *piVar11) break;
      piVar11 = piVar10;
      if (1 < uVar12) goto LAB_10ad0669c;
      uVar12 = uVar12 * 2 + 2;
    }
    if (1 < uVar12) break;
    uVar12 = uVar12 << 1 | 1;
    piVar10 = piVar11;
  }
LAB_10ad0669c:
  if ((piVar11 != (int *)&UNK_10e50dd20) &&
     (*piVar11 <= (int)plVar2 && piVar11 != (int *)&UNK_10e50dd20)) {
    iStack_284 = piVar11[1];
    uVar7 = 0;
    _CFNumberCreate(0,0xc,&iStack_284);
    _CFDictionarySetValue
              (plVar6,*(undefined8 *)PTR__kCGImageDestinationLossyCompressionQuality_110349c80,uVar7
              );
    return plVar6;
  }
  FUN_10a00946c(&UNK_10f6a32bf);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10ad06708);
  (*pcVar1)();
}



/* Entry: 10ad06450; end: 10ad065fb;  */

undefined * FUN_10ad06450(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  code *pcVar1;
  undefined *puVar2;
  long *plVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 *extraout_x8;
  int *piVar7;
  int *piVar8;
  ulong uVar9;
  int iStack_174;
  undefined *puStack_170;
  long *plStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined1 *puStack_150;
  code *pcStack_148;
  undefined8 uStack_140;
  long *plStack_130;
  undefined *puStack_128;
  undefined *puStack_120;
  long lStack_118;
  undefined1 auStack_110 [96];
  long lStack_b0;
  long lStack_a8;
  undefined4 uStack_a0;
  long lStack_98;
  undefined1 auStack_90 [72];
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_2);
  puVar2 = PTR__OBJC_CLASS___NSURL_1126ae598;
  func_0x00010bfad300();
  _objc_retainAutoreleasedReturnValue();
  puStack_120 = puVar2;
  _CGImageDestinationCreateWithURL();
  lStack_118 = *param_1;
  puStack_128 = puVar2;
  if (lStack_118 != 0) {
    _memcpy(auStack_110,param_1 + 1,lStack_118 << 5);
  }
  lStack_a8 = param_1[0xe];
  lStack_b0 = param_1[0xd];
  uStack_a0 = (undefined4)param_1[0xf];
  lStack_98 = param_1[0x10];
  if (lStack_98 != 0) {
    _memcpy(auStack_90,param_1 + 0x11,lStack_98 * 0x18);
  }
  plVar3 = &lStack_118;
  FUN_10ad51860(plVar3,1);
  plStack_130 = plVar3;
  _CGImageDestinationAddImage(puVar2,plVar3,*param_4);
  puVar5 = puVar2;
  _CGImageDestinationFinalize();
  if (((ulong)puVar5 & 1) == 0) {
    uStack_140 = param_2;
    _NSLog(&PTR____CFConstantStringClassReference_110f2dbf8);
  }
  FUN_10a1b0db4(&plStack_130);
  FUN_10ad06c30(&puStack_128);
  FUN_10a1b0d54(&puStack_120);
  uVar6 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return puVar5;
  }
  ___stack_chk_fail();
  FUN_10ad06c30(&puStack_128);
  FUN_10a1b0d54(&puStack_120);
  _objc_release(param_2);
  uVar4 = uVar6;
  __Unwind_Resume();
  pcStack_148 = FUN_10ad065fc;
  puVar5 = *(undefined **)PTR__kCFAllocatorDefault_11034ab78;
  puStack_170 = puVar2;
  plStack_168 = param_1;
  uStack_160 = uVar6;
  uStack_158 = param_2;
  puStack_150 = &stack0xfffffffffffffff0;
  _CFDictionaryCreateMutable
            (puVar5,1,PTR__kCFTypeDictionaryKeyCallBacks_11034ac18,
             PTR__kCFTypeDictionaryValueCallBacks_11034ac20);
  uVar9 = 0;
  *extraout_x8 = puVar5;
  piVar7 = (int *)&UNK_10e50dd20;
  while( true ) {
    while( true ) {
      piVar8 = (int *)(&UNK_10e50dcf8 + uVar9 * 8);
      if ((int)uVar4 <= *piVar8) break;
      piVar8 = piVar7;
      if (1 < uVar9) goto LAB_10ad0669c;
      uVar9 = uVar9 * 2 + 2;
    }
    if (1 < uVar9) break;
    uVar9 = uVar9 << 1 | 1;
    piVar7 = piVar8;
  }
LAB_10ad0669c:
  if ((piVar8 != (int *)&UNK_10e50dd20) &&
     (*piVar8 <= (int)uVar4 && piVar8 != (int *)&UNK_10e50dd20)) {
    iStack_174 = piVar8[1];
    uVar6 = 0;
    _CFNumberCreate(0,0xc,&iStack_174);
    _CFDictionarySetValue
              (puVar5,*(undefined8 *)PTR__kCGImageDestinationLossyCompressionQuality_110349c80,uVar6
              );
    return puVar5;
  }
  FUN_10a00946c(&UNK_10f6a32bf);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10ad06708);
  (*pcVar1)();
}


