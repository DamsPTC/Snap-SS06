/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10a049858; end: 10a0498d3;  */

undefined1  [16] FUN_10a049858(long param_1,ulong param_2,undefined8 param_3)

{
  ulong uVar1;
  code *pcVar2;
  long *plVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  ulong uVar6;
  long *plVar7;
  ulong uVar8;
  long lVar9;
  long *plVar10;
  ulong uVar11;
  ulong unaff_x25;
  ulong uVar12;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  
  lVar9 = param_1;
  if ((ulong)*(uint *)(param_1 + 0x48) < *(ulong *)(param_1 + 0x60)) {
    do {
      lVar9 = param_1 + 0x68;
      param_2 = *(long *)(param_1 + 0x58) + 0x10;
      FUN_10a0492a0();
      if (lVar9 == 0) {
        plVar3 = (long *)&UNK_10f633e07;
        FUN_109ffdddc();
        uVar8 = param_2;
        FUN_10a25428c();
        uVar11 = plVar3[1];
        if (uVar11 == 0) goto LAB_10a0499a0;
        uVar12 = uVar11 - 1;
        if ((uVar11 & uVar12) == 0) {
          unaff_x25 = uVar12 & uVar8;
        }
        else {
          unaff_x25 = uVar8;
          if (uVar11 <= uVar8) {
            uVar6 = 0;
            if (uVar11 != 0) {
              uVar6 = uVar8 / uVar11;
            }
            unaff_x25 = uVar8 - uVar6 * uVar11;
          }
        }
        puVar5 = *(undefined8 **)(*plVar3 + unaff_x25 * 8);
        if ((puVar5 == (undefined8 *)0x0) || (plVar10 = (long *)*puVar5, plVar10 == (long *)0x0))
        goto LAB_10a0499a0;
        goto LAB_10a049950;
      }
      if (*(long *)(lVar9 + 0x48) == 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x10a0498c8);
        (*pcVar2)();
      }
      FUN_10a049ebc(param_1 + 0x50);
      lVar9 = lVar9 + 0x38;
      FUN_10a049ee8(lVar9);
    } while ((ulong)*(uint *)(param_1 + 0x48) < *(ulong *)(param_1 + 0x60));
  }
  auVar13._8_8_ = param_2;
  auVar13._0_8_ = lVar9;
  return auVar13;
LAB_10a049950:
  do {
    uVar6 = plVar10[1];
    if (uVar6 == uVar8) {
      plVar7 = plVar10 + 2;
      FUN_10a04937c(plVar7,param_2);
      if (((ulong)plVar7 & 1) != 0) {
        uVar4 = 0;
        goto LAB_10a049ac8;
      }
    }
    else {
      if ((uVar11 & uVar12) == 0) {
        uVar6 = uVar6 & uVar12;
      }
      else if (uVar11 <= uVar6) {
        uVar1 = 0;
        if (uVar11 != 0) {
          uVar1 = uVar6 / uVar11;
        }
        uVar6 = uVar6 - uVar1 * uVar11;
      }
      if (uVar6 != unaff_x25) break;
    }
    plVar10 = (long *)*plVar10;
  } while (plVar10 != (long *)0x0);
LAB_10a0499a0:
  plVar10 = (long *)0x50;
  __Znwm();
  *plVar10 = 0;
  plVar10[1] = uVar8;
  FUN_10a049b08(plVar10 + 2,param_3);
  if ((uVar11 == 0) || (*(float *)(plVar3 + 4) * (float)uVar11 < (float)(plVar3[3] + 1))) {
    uVar12 = 1;
    if (2 < uVar11) {
      uVar12 = (ulong)((uVar11 & uVar11 - 1) != 0);
    }
    uVar12 = uVar12 | uVar11 << 1;
    uVar11 = (ulong)((float)(plVar3[3] + 1) / *(float *)(plVar3 + 4));
    if (uVar12 <= uVar11) {
      uVar12 = uVar11;
    }
    FUN_10a049ba4(plVar3,uVar12);
    uVar11 = plVar3[1];
    if ((uVar11 & uVar11 - 1) == 0) {
      unaff_x25 = uVar11 - 1 & uVar8;
    }
    else {
      unaff_x25 = uVar8;
      if (uVar11 <= uVar8) {
        uVar12 = 0;
        if (uVar11 != 0) {
          uVar12 = uVar8 / uVar11;
        }
        unaff_x25 = uVar8 - uVar12 * uVar11;
      }
    }
  }
  lVar9 = *plVar3;
  plVar7 = *(long **)(lVar9 + unaff_x25 * 8);
  if (plVar7 == (long *)0x0) {
    plVar7 = plVar3 + 2;
    *plVar10 = *plVar7;
    *plVar7 = (long)plVar10;
    *(long **)(lVar9 + unaff_x25 * 8) = plVar7;
    if (*plVar10 == 0) goto LAB_10a049ab8;
    uVar8 = *(ulong *)(*plVar10 + 8);
    if ((uVar11 & uVar11 - 1) == 0) {
      uVar8 = uVar8 & uVar11 - 1;
    }
    else if (uVar11 <= uVar8) {
      uVar12 = 0;
      if (uVar11 != 0) {
        uVar12 = uVar8 / uVar11;
      }
      uVar8 = uVar8 - uVar12 * uVar11;
    }
    plVar7 = (long *)(*plVar3 + uVar8 * 8);
  }
  else {
    *plVar10 = *plVar7;
  }
  *plVar7 = (long)plVar10;
LAB_10a049ab8:
  plVar3[3] = plVar3[3] + 1;
  uVar4 = 1;
LAB_10a049ac8:
  auVar14._8_8_ = uVar4;
  auVar14._0_8_ = plVar10;
  return auVar14;
}



/* Entry: 10a0498d4; end: 10a049b07;  */

undefined1  [16] FUN_10a0498d4(long *param_1,ulong param_2,undefined8 param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  ulong uVar4;
  long *plVar5;
  ulong uVar6;
  long lVar7;
  long *plVar8;
  ulong uVar9;
  ulong unaff_x25;
  ulong uVar10;
  undefined1 auVar11 [16];
  
  uVar6 = param_2;
  FUN_10a25428c();
  uVar9 = param_1[1];
  if (uVar9 != 0) {
    uVar10 = uVar9 - 1;
    if ((uVar9 & uVar10) == 0) {
      unaff_x25 = uVar10 & uVar6;
    }
    else {
      unaff_x25 = uVar6;
      if (uVar9 <= uVar6) {
        uVar4 = 0;
        if (uVar9 != 0) {
          uVar4 = uVar6 / uVar9;
        }
        unaff_x25 = uVar6 - uVar4 * uVar9;
      }
    }
    puVar3 = *(undefined8 **)(*param_1 + unaff_x25 * 8);
    if (puVar3 != (undefined8 *)0x0) {
      for (plVar8 = (long *)*puVar3; plVar8 != (long *)0x0; plVar8 = (long *)*plVar8) {
        uVar4 = plVar8[1];
        if (uVar4 == uVar6) {
          plVar5 = plVar8 + 2;
          FUN_10a04937c(plVar5,param_2);
          if (((ulong)plVar5 & 1) != 0) {
            uVar2 = 0;
            goto LAB_10a049ac8;
          }
        }
        else {
          if ((uVar9 & uVar10) == 0) {
            uVar4 = uVar4 & uVar10;
          }
          else if (uVar9 <= uVar4) {
            uVar1 = 0;
            if (uVar9 != 0) {
              uVar1 = uVar4 / uVar9;
            }
            uVar4 = uVar4 - uVar1 * uVar9;
          }
          if (uVar4 != unaff_x25) break;
        }
      }
    }
  }
  plVar8 = (long *)0x50;
  __Znwm();
  *plVar8 = 0;
  plVar8[1] = uVar6;
  FUN_10a049b08(plVar8 + 2,param_3);
  if ((uVar9 == 0) || (*(float *)(param_1 + 4) * (float)uVar9 < (float)(param_1[3] + 1))) {
    uVar10 = 1;
    if (2 < uVar9) {
      uVar10 = (ulong)((uVar9 & uVar9 - 1) != 0);
    }
    uVar10 = uVar10 | uVar9 << 1;
    uVar9 = (ulong)((float)(param_1[3] + 1) / *(float *)(param_1 + 4));
    if (uVar10 <= uVar9) {
      uVar10 = uVar9;
    }
    FUN_10a049ba4(param_1,uVar10);
    uVar9 = param_1[1];
    if ((uVar9 & uVar9 - 1) == 0) {
      unaff_x25 = uVar9 - 1 & uVar6;
    }
    else {
      unaff_x25 = uVar6;
      if (uVar9 <= uVar6) {
        uVar10 = 0;
        if (uVar9 != 0) {
          uVar10 = uVar6 / uVar9;
        }
        unaff_x25 = uVar6 - uVar10 * uVar9;
      }
    }
  }
  lVar7 = *param_1;
  plVar5 = *(long **)(lVar7 + unaff_x25 * 8);
  if (plVar5 == (long *)0x0) {
    plVar5 = param_1 + 2;
    *plVar8 = *plVar5;
    *plVar5 = (long)plVar8;
    *(long **)(lVar7 + unaff_x25 * 8) = plVar5;
    if (*plVar8 == 0) goto LAB_10a049ab8;
    uVar6 = *(ulong *)(*plVar8 + 8);
    if ((uVar9 & uVar9 - 1) == 0) {
      uVar6 = uVar6 & uVar9 - 1;
    }
    else if (uVar9 <= uVar6) {
      uVar10 = 0;
      if (uVar9 != 0) {
        uVar10 = uVar6 / uVar9;
      }
      uVar6 = uVar6 - uVar10 * uVar9;
    }
    plVar5 = (long *)(*param_1 + uVar6 * 8);
  }
  else {
    *plVar8 = *plVar5;
  }
  *plVar5 = (long)plVar8;
LAB_10a049ab8:
  param_1[3] = param_1[3] + 1;
  uVar2 = 1;
LAB_10a049ac8:
  auVar11._8_8_ = uVar2;
  auVar11._0_8_ = plVar8;
  return auVar11;
}



/* Entry: 10a049b08; end: 10a049b53;  */

undefined8 * FUN_10a049b08(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  uVar3 = param_2[1];
  uVar2 = *param_2;
  uVar5 = param_2[3];
  uVar4 = param_2[2];
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_2 + 4);
  param_1[1] = uVar3;
  *param_1 = uVar2;
  param_1[3] = uVar5;
  param_1[2] = uVar4;
  puVar1 = param_1 + 5;
  param_1[5] = puVar1;
  param_1[6] = puVar1;
  param_1[7] = 0;
  FUN_10a049b54(puVar1,puVar1,param_2 + 5);
  return param_1;
}



/* Entry: 10a049b54; end: 10a049ba3;  */

void FUN_10a049b54(long *param_1,long *param_2,long *param_3)

{
  long lVar1;
  long *plVar2;
  code *pcVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  
  if (param_1 != param_3) {
    lVar4 = param_3[2];
    if (lVar4 != 0) {
      lVar1 = *param_3;
      plVar2 = (long *)param_3[1];
      plVar5 = *(long **)(lVar1 + 8);
      lVar6 = *plVar2;
      *(long **)(lVar6 + 8) = plVar5;
      *plVar5 = lVar6;
      lVar6 = *param_2;
      *(long **)(lVar6 + 8) = plVar2;
      *plVar2 = lVar6;
      *param_2 = lVar1;
      *(long **)(lVar1 + 8) = param_2;
      param_1[2] = param_1[2] + lVar4;
      param_3[2] = 0;
    }
    return;
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x10a049ba4);
  (*pcVar3)();
}



/* Entry: 10a049ba4; end: 10a049c73;  */

void FUN_10a049ba4(ulong *param_1,ulong param_2)

{
  ulong uVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  
  if (param_2 - 1 == 0) {
    param_2 = 2;
  }
  else if ((param_2 & param_2 - 1) != 0) {
    __ZNSt3__112__next_primeEm();
  }
  uVar7 = param_1[1];
  if (uVar7 < param_2) {
LAB_10a049bec:
    if (param_2 == 0) {
      uVar7 = *param_1;
      *param_1 = 0;
      if (uVar7 != 0) {
        __ZdlPv();
      }
      param_1[1] = 0;
    }
    else {
      if (param_2 >> 0x3d != 0) {
        func_0x000109ffded8();
        uVar7 = *param_1;
        *param_1 = param_2;
        if (uVar7 != 0) {
          if ((char)param_1[2] == '\x01') {
            FUN_10a049e40(uVar7 + 0x38);
          }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)PTR___ZdlPv_110352258)(uVar7);
          return;
        }
        return;
      }
      uVar7 = param_2 << 3;
      __Znwm();
      uVar1 = *param_1;
      *param_1 = uVar7;
      if (uVar1 != 0) {
        __ZdlPv();
      }
      uVar7 = 0;
      param_1[1] = param_2;
      do {
        *(undefined8 *)(*param_1 + uVar7 * 8) = 0;
        uVar7 = uVar7 + 1;
      } while (param_2 != uVar7);
      plVar2 = (long *)param_1[2];
      if (plVar2 != (long *)0x0) {
        uVar7 = plVar2[1];
        uVar1 = param_2 - 1;
        if ((param_2 & uVar1) == 0) {
          uVar7 = uVar7 & uVar1;
        }
        else if (param_2 <= uVar7) {
          uVar5 = 0;
          if (param_2 != 0) {
            uVar5 = uVar7 / param_2;
          }
          uVar7 = uVar7 - uVar5 * param_2;
        }
        *(ulong **)(*param_1 + uVar7 * 8) = param_1 + 2;
        plVar3 = (long *)*plVar2;
        while (plVar3 != (long *)0x0) {
          uVar5 = plVar3[1];
          if ((param_2 & uVar1) == 0) {
            uVar5 = uVar5 & uVar1;
          }
          else if (param_2 <= uVar5) {
            uVar6 = 0;
            if (param_2 != 0) {
              uVar6 = uVar5 / param_2;
            }
            uVar5 = uVar5 - uVar6 * param_2;
          }
          plVar4 = plVar3;
          if (uVar5 != uVar7) {
            uVar6 = *param_1;
            if (*(long *)(uVar6 + uVar5 * 8) == 0) {
              *(long **)(uVar6 + uVar5 * 8) = plVar2;
              uVar7 = uVar5;
            }
            else {
              *plVar2 = *plVar3;
              *plVar3 = **(undefined8 **)(uVar6 + uVar5 * 8);
              **(long **)(uVar6 + uVar5 * 8) = (long)plVar3;
              plVar4 = plVar2;
            }
          }
          plVar2 = plVar4;
          plVar3 = (long *)*plVar4;
        }
      }
    }
    return;
  }
  if (param_2 < uVar7) {
    uVar1 = (ulong)((float)param_1[3] / *(float *)(param_1 + 4));
    if ((uVar7 < 3) || ((uVar7 & uVar7 - 1) != 0)) {
      __ZNSt3__112__next_primeEm();
    }
    else if (1 < uVar1) {
      uVar1 = 1L << (-LZCOUNT(uVar1 - 1) & 0x3fU);
    }
    if (param_2 <= uVar1) {
      param_2 = uVar1;
    }
    if (param_2 < uVar7) goto LAB_10a049bec;
  }
  return;
}



/* Entry: 10a049c74; end: 10a049df7;  */

void FUN_10a049c74(ulong *param_1,ulong param_2)

{
  ulong uVar1;
  ulong uVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  ulong uVar6;
  ulong uVar7;
  
  if (param_2 == 0) {
    uVar1 = *param_1;
    *param_1 = 0;
    if (uVar1 != 0) {
      __ZdlPv();
    }
    param_1[1] = 0;
  }
  else {
    if (param_2 >> 0x3d != 0) {
      func_0x000109ffded8();
      uVar1 = *param_1;
      *param_1 = param_2;
      if (uVar1 != 0) {
        if ((char)param_1[2] == '\x01') {
          FUN_10a049e40(uVar1 + 0x38);
        }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR___ZdlPv_110352258)(uVar1);
        return;
      }
      return;
    }
    uVar1 = param_2 << 3;
    __Znwm();
    uVar2 = *param_1;
    *param_1 = uVar1;
    if (uVar2 != 0) {
      __ZdlPv();
    }
    uVar1 = 0;
    param_1[1] = param_2;
    do {
      *(undefined8 *)(*param_1 + uVar1 * 8) = 0;
      uVar1 = uVar1 + 1;
    } while (param_2 != uVar1);
    plVar3 = (long *)param_1[2];
    if (plVar3 != (long *)0x0) {
      uVar1 = plVar3[1];
      uVar2 = param_2 - 1;
      if ((param_2 & uVar2) == 0) {
        uVar1 = uVar1 & uVar2;
      }
      else if (param_2 <= uVar1) {
        uVar6 = 0;
        if (param_2 != 0) {
          uVar6 = uVar1 / param_2;
        }
        uVar1 = uVar1 - uVar6 * param_2;
      }
      *(ulong **)(*param_1 + uVar1 * 8) = param_1 + 2;
      plVar4 = (long *)*plVar3;
      while (plVar4 != (long *)0x0) {
        uVar6 = plVar4[1];
        if ((param_2 & uVar2) == 0) {
          uVar6 = uVar6 & uVar2;
        }
        else if (param_2 <= uVar6) {
          uVar7 = 0;
          if (param_2 != 0) {
            uVar7 = uVar6 / param_2;
          }
          uVar6 = uVar6 - uVar7 * param_2;
        }
        plVar5 = plVar4;
        if (uVar6 != uVar1) {
          uVar7 = *param_1;
          if (*(long *)(uVar7 + uVar6 * 8) == 0) {
            *(long **)(uVar7 + uVar6 * 8) = plVar3;
            uVar1 = uVar6;
          }
          else {
            *plVar3 = *plVar4;
            *plVar4 = **(undefined8 **)(uVar7 + uVar6 * 8);
            **(long **)(uVar7 + uVar6 * 8) = (long)plVar4;
            plVar5 = plVar3;
          }
        }
        plVar3 = plVar5;
        plVar4 = (long *)*plVar5;
      }
    }
  }
  return;
}



/* Entry: 10a049df8; end: 10a049e3f;  */

undefined8 * FUN_10a049df8(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  uVar3 = param_2[1];
  uVar2 = *param_2;
  uVar5 = param_2[3];
  uVar4 = param_2[2];
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_2 + 4);
  param_1[1] = uVar3;
  *param_1 = uVar2;
  param_1[3] = uVar5;
  param_1[2] = uVar4;
  puVar1 = param_1 + 5;
  param_1[5] = puVar1;
  param_1[6] = puVar1;
  param_1[7] = 0;
  FUN_10a049b54(puVar1,puVar1);
  return param_1;
}



/* Entry: 10a049e40; end: 10a049ebb;  */

void FUN_10a049e40(long *param_1)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  long *plVar4;
  
  if (param_1[2] != 0) {
    plVar1 = (long *)param_1[1];
    plVar2 = *(long **)(*param_1 + 8);
    lVar3 = *plVar1;
    *(long **)(lVar3 + 8) = plVar2;
    *plVar2 = lVar3;
    param_1[2] = 0;
    while (plVar1 != param_1) {
      plVar4 = (long *)plVar1[1];
      plVar2 = (long *)plVar1[3];
      plVar1[3] = 0;
      if (plVar2 != (long *)0x0) {
        (**(code **)(*plVar2 + 8))();
      }
      __ZdlPv(plVar1);
      plVar1 = plVar4;
    }
  }
  return;
}



/* Entry: 10a049ebc; end: 10a049ee7;  */

void FUN_10a049ebc(long param_1)

{
  long lVar1;
  long *plVar2;
  code *pcVar3;
  long *plVar4;
  long lVar5;
  
  lVar5 = *(long *)(param_1 + 0x10);
  if (lVar5 != 0) {
    plVar4 = *(long **)(param_1 + 8);
    lVar1 = *plVar4;
    plVar2 = (long *)plVar4[1];
    *(long **)(lVar1 + 8) = plVar2;
    *plVar2 = lVar1;
    *(long *)(param_1 + 0x10) = lVar5 + -1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(plVar4);
    return;
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x10a049ee8);
  (*pcVar3)();
}



/* Entry: 10a049ee8; end: 10a049f97;  */

void FUN_10a049ee8(long param_1)

{
  long lVar1;
  code *pcVar2;
  long *plVar3;
  long lVar4;
  long *plVar5;
  
  lVar4 = *(long *)(param_1 + 0x10);
  if (lVar4 != 0) {
    plVar5 = *(long **)(param_1 + 8);
    lVar1 = *plVar5;
    plVar3 = (long *)plVar5[1];
    *(long **)(lVar1 + 8) = plVar3;
    *plVar3 = lVar1;
    *(long *)(param_1 + 0x10) = lVar4 + -1;
    plVar3 = (long *)plVar5[3];
    plVar5[3] = 0;
    if (plVar3 != (long *)0x0) {
      (**(code **)(*plVar3 + 8))();
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(plVar5);
    return;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10a049f40);
  (*pcVar2)();
}



/* Entry: 10a049f98; end: 10a04a153;  */

void FUN_10a049f98(ulong *param_1,ulong *param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  ulong *puVar4;
  ulong uVar5;
  ulong uVar6;
  ulong *puVar7;
  ulong uVar8;
  ulong *puVar9;
  ulong *puVar10;
  ulong uVar11;
  ulong uVar12;
  ulong *puVar13;
  long lVar14;
  long lVar15;
  ulong uVar16;
  
  if (param_1 != param_2) {
    puVar9 = param_1 + 1;
    uVar11 = *param_1;
    puVar10 = param_2 + 1;
    uVar8 = *param_2;
    uVar12 = uVar11;
    if (uVar8 <= uVar11) {
      uVar12 = uVar8;
    }
    lVar1 = 0;
    if (uVar11 <= uVar8) {
      lVar1 = uVar8 - uVar11;
    }
    if (uVar12 != 0) {
      lVar14 = 0;
      puVar4 = puVar10;
      puVar13 = puVar9;
      do {
        puVar10 = puVar4 + 6;
        puVar9 = puVar13 + 6;
        *(short *)puVar13 = (short)*puVar4;
        if (puVar13 != puVar4) {
          uVar5 = puVar13[1];
          uVar16 = puVar4[1];
          uVar6 = uVar5;
          if (uVar16 <= uVar5) {
            uVar6 = uVar16;
          }
          lVar15 = 0;
          if (uVar5 <= uVar16) {
            lVar15 = uVar16 - uVar5;
          }
          lVar2 = lVar14;
          if (uVar6 == 0) {
            puVar7 = puVar13 + 2;
          }
          else {
            do {
              lVar3 = lVar2;
              *(undefined8 *)((long)param_1 + lVar3 + 0x18) =
                   *(undefined8 *)((long)param_2 + lVar3 + 0x18);
              uVar6 = uVar6 - 1;
              lVar2 = lVar3 + 8;
            } while (uVar6 != 0);
            puVar7 = (ulong *)((long)param_1 + lVar3 + 0x20);
            puVar4 = (ulong *)((long)param_2 + lVar3 + 0x10);
          }
          if (uVar5 < uVar16) {
            puVar4 = puVar4 + 2;
            do {
              *puVar7 = *puVar4;
              lVar15 = lVar15 + -1;
              puVar4 = puVar4 + 1;
              puVar7 = puVar7 + 1;
            } while (lVar15 != 0);
          }
          puVar13[1] = uVar16;
        }
        lVar14 = lVar14 + 0x30;
        uVar12 = uVar12 - 1;
        puVar4 = puVar10;
        puVar13 = puVar9;
      } while (uVar12 != 0);
    }
    if (uVar11 < uVar8) {
      lVar14 = 0;
      puVar4 = puVar10;
      do {
        *(short *)puVar9 = (short)puVar10[lVar14 * 6];
        puVar9[1] = 0;
        uVar12 = (puVar10 + lVar14 * 6)[1];
        puVar9[1] = uVar12;
        if (uVar12 != 0) {
          lVar15 = 0x10;
          do {
            *(undefined8 *)((long)puVar9 + lVar15) = *(undefined8 *)((long)puVar4 + lVar15);
            lVar15 = lVar15 + 8;
            uVar12 = uVar12 - 1;
          } while (uVar12 != 0);
        }
        puVar9 = puVar9 + 6;
        lVar14 = lVar14 + 1;
        puVar4 = puVar4 + 6;
      } while (lVar14 != lVar1);
    }
    *param_1 = uVar8;
  }
  return;
}



/* Entry: 10a04a154; end: 10a04a2b3;  */

void FUN_10a04a154(undefined8 param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined4 uVar4;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 uStack_48;
  undefined4 uStack_40;
  undefined1 uStack_3c;
  undefined8 uStack_38;
  
  lVar1 = 200;
  if (*(ulong *)(*(long *)(param_2 + 0x18) + 0x2b8) < 2) {
    lVar1 = 0x1e0;
  }
  lVar1 = *(long *)(param_2 + 0x18) + lVar1;
  lVar3 = **(long **)(param_2 + 0x10);
  uVar4 = *(undefined4 *)((long)*(long **)(param_2 + 0x10) + 0x14);
  *(ulong *)(lVar3 + 0xf8) =
       CONCAT44(**(undefined4 **)(param_2 + 0x28),**(undefined4 **)(param_2 + 0x20));
  lVar2 = *(long *)(*(long *)(lVar3 + 0xf0) + 0x30);
  ___dynamic_cast(lVar2,&PTR_DAT_110ae2620,&PTR_DAT_110b98940,0);
  uStack_b8 = *(undefined4 *)(lVar1 + 0x130);
  uStack_b4 = *(undefined4 *)(lVar1 + 0x140);
  uStack_b0 = *(undefined4 *)(lVar1 + 0x150);
  uStack_ac = *(undefined4 *)(lVar1 + 0x160);
  uStack_a8 = *(undefined4 *)(lVar1 + 0x134);
  uStack_a4 = *(undefined4 *)(lVar1 + 0x144);
  uStack_a0 = *(undefined4 *)(lVar1 + 0x154);
  uStack_9c = *(undefined4 *)(lVar1 + 0x164);
  uStack_98 = *(undefined4 *)(lVar1 + 0x138);
  uStack_94 = *(undefined4 *)(lVar1 + 0x148);
  uStack_90 = *(undefined4 *)(lVar1 + 0x158);
  uStack_8c = *(undefined4 *)(lVar1 + 0x168);
  uStack_88 = *(undefined4 *)(lVar1 + 0x13c);
  uStack_84 = *(undefined4 *)(lVar1 + 0x14c);
  uStack_80 = *(undefined4 *)(lVar1 + 0x15c);
  uStack_7c = *(undefined4 *)(lVar1 + 0x16c);
  uStack_74 = *(undefined4 *)(lVar1 + 0x100);
  uStack_78 = *(undefined4 *)(lVar1 + 0xf0);
  uStack_68 = *(undefined4 *)(lVar1 + 0xf4);
  uStack_70 = *(undefined4 *)(lVar1 + 0x110);
  uStack_6c = *(undefined4 *)(lVar1 + 0x120);
  uStack_64 = *(undefined4 *)(lVar1 + 0x104);
  uStack_60 = *(undefined4 *)(lVar1 + 0x114);
  uStack_5c = *(undefined4 *)(lVar1 + 0x124);
  uStack_58 = *(undefined4 *)(lVar1 + 0xf8);
  uStack_54 = *(undefined4 *)(lVar1 + 0x108);
  uStack_50 = *(undefined4 *)(lVar1 + 0x118);
  uStack_4c = *(undefined4 *)(lVar1 + 0x128);
  uStack_48 = 0x500008fff;
  uStack_3c = 0x1f;
  uStack_38 = *(undefined8 *)(lVar3 + 0x88);
  uStack_40 = uVar4;
  func_0x000109a144f8(*(undefined8 *)**(undefined8 **)(lVar3 + 0x38),*(undefined8 *)(lVar2 + 0xf0),
                      &uStack_b8);
  *(undefined8 *)(lVar3 + 0xf8) = 0;
  return;
}



/* Entry: 10a04a2b4; end: 10a04a2d7;  */

void FUN_10a04a2b4(void)

{
  return;
}



/* Entry: 10a04a2d8; end: 10a04a34b;  */

void FUN_10a04a2d8(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  
  if (param_4 != 0) {
    FUN_10a04a34c(param_1,param_4);
    lVar1 = param_1;
    FUN_10a04a3f0(param_1,param_2,param_3,*(undefined8 *)(param_1 + 8));
    *(long *)(param_1 + 8) = lVar1;
  }
  return;
}



/* Entry: 10a04a34c; end: 10a04a397;  */

undefined1  [16] FUN_10a04a34c(undefined8 *param_1,long *param_2,long *param_3,undefined8 *param_4)

{
  long *plVar1;
  undefined8 *puVar2;
  char cVar3;
  bool bVar4;
  undefined *puVar5;
  long lVar6;
  long *plVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  
  if (param_2 < (long *)0xaaaaaaaaaaaaaab) {
    plVar7 = param_2;
    FUN_10a04a3ac();
    *param_1 = param_2;
    param_1[1] = param_2;
    param_1[2] = param_2 + (long)plVar7 * 3;
    auVar11._8_8_ = plVar7;
    auVar11._0_8_ = param_2;
    return auVar11;
  }
  FUN_10a04a398();
  puVar5 = &UNK_10f6334ac;
  FUN_109ffde64();
  if (puVar5 < (undefined *)0xaaaaaaaaaaaaaab) {
    lVar6 = (long)puVar5 * 0x18;
    __Znwm(lVar6);
    auVar12._8_8_ = puVar5;
    auVar12._0_8_ = lVar6;
    return auVar12;
  }
  func_0x000109ffded8();
  plVar7 = param_2;
  for (; param_2 != param_3; param_2 = param_2 + 3) {
    *param_4 = 0;
    param_4[1] = 0;
    param_4[2] = 0;
    puVar9 = (undefined8 *)*param_2;
    puVar2 = (undefined8 *)param_2[1];
    lVar6 = (long)puVar2 - (long)puVar9;
    if (lVar6 != 0) {
      plVar7 = (long *)(lVar6 >> 4);
      FUN_10a04a4e8(param_4,plVar7);
      puVar8 = (undefined8 *)param_4[1];
      do {
        lVar6 = puVar9[1];
        uVar10 = *puVar9;
        puVar8[1] = puVar9[1];
        *puVar8 = uVar10;
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
        puVar9 = puVar9 + 2;
        puVar8 = puVar8 + 2;
      } while (puVar9 != puVar2);
      param_4[1] = puVar8;
    }
    param_4 = param_4 + 3;
  }
  auVar13._8_8_ = plVar7;
  auVar13._0_8_ = param_4;
  return auVar13;
}



/* Entry: 10a04a398; end: 10a04a3ab;  */

undefined1  [16] FUN_10a04a398(undefined8 param_1,long *param_2,long *param_3,undefined8 *param_4)

{
  long *plVar1;
  undefined8 *puVar2;
  char cVar3;
  bool bVar4;
  undefined *puVar5;
  long lVar6;
  long *plVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  
  puVar5 = &UNK_10f6334ac;
  FUN_109ffde64();
  if (puVar5 < (undefined *)0xaaaaaaaaaaaaaab) {
    lVar6 = (long)puVar5 * 0x18;
    __Znwm(lVar6);
    auVar11._8_8_ = puVar5;
    auVar11._0_8_ = lVar6;
    return auVar11;
  }
  func_0x000109ffded8();
  plVar7 = param_2;
  for (; param_2 != param_3; param_2 = param_2 + 3) {
    *param_4 = 0;
    param_4[1] = 0;
    param_4[2] = 0;
    puVar9 = (undefined8 *)*param_2;
    puVar2 = (undefined8 *)param_2[1];
    lVar6 = (long)puVar2 - (long)puVar9;
    if (lVar6 != 0) {
      plVar7 = (long *)(lVar6 >> 4);
      FUN_10a04a4e8(param_4,plVar7);
      puVar8 = (undefined8 *)param_4[1];
      do {
        lVar6 = puVar9[1];
        uVar10 = *puVar9;
        puVar8[1] = puVar9[1];
        *puVar8 = uVar10;
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
        puVar9 = puVar9 + 2;
        puVar8 = puVar8 + 2;
      } while (puVar9 != puVar2);
      param_4[1] = puVar8;
    }
    param_4 = param_4 + 3;
  }
  auVar12._8_8_ = plVar7;
  auVar12._0_8_ = param_4;
  return auVar12;
}



/* Entry: 10a04a3ac; end: 10a04a3ef;  */

undefined1  [16] FUN_10a04a3ac(ulong param_1,long *param_2,long *param_3,undefined8 *param_4)

{
  long *plVar1;
  undefined8 *puVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  long *plVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  
  if (param_1 < 0xaaaaaaaaaaaaaab) {
    lVar5 = param_1 * 0x18;
    __Znwm(lVar5);
    auVar10._8_8_ = param_1;
    auVar10._0_8_ = lVar5;
    return auVar10;
  }
  func_0x000109ffded8();
  plVar6 = param_2;
  for (; param_2 != param_3; param_2 = param_2 + 3) {
    *param_4 = 0;
    param_4[1] = 0;
    param_4[2] = 0;
    puVar8 = (undefined8 *)*param_2;
    puVar2 = (undefined8 *)param_2[1];
    lVar5 = (long)puVar2 - (long)puVar8;
    if (lVar5 != 0) {
      plVar6 = (long *)(lVar5 >> 4);
      FUN_10a04a4e8(param_4,plVar6);
      puVar7 = (undefined8 *)param_4[1];
      do {
        lVar5 = puVar8[1];
        uVar9 = *puVar8;
        puVar7[1] = puVar8[1];
        *puVar7 = uVar9;
        if (lVar5 != 0) {
          plVar1 = (long *)(lVar5 + 8);
          do {
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar4) {
              *plVar1 = *plVar1 + 1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
        }
        puVar8 = puVar8 + 2;
        puVar7 = puVar7 + 2;
      } while (puVar8 != puVar2);
      param_4[1] = puVar7;
    }
    param_4 = param_4 + 3;
  }
  auVar11._8_8_ = plVar6;
  auVar11._0_8_ = param_4;
  return auVar11;
}



/* Entry: 10a04a3f0; end: 10a04a4e7;  */

undefined8 * FUN_10a04a3f0(undefined8 param_1,long *param_2,long *param_3,undefined8 *param_4)

{
  long *plVar1;
  undefined8 *puVar2;
  char cVar3;
  bool bVar4;
  undefined8 *puVar5;
  long lVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  
  for (; param_2 != param_3; param_2 = param_2 + 3) {
    *param_4 = 0;
    param_4[1] = 0;
    param_4[2] = 0;
    puVar7 = (undefined8 *)*param_2;
    puVar2 = (undefined8 *)param_2[1];
    lVar6 = (long)puVar2 - (long)puVar7;
    if (lVar6 != 0) {
      FUN_10a04a4e8(param_4,lVar6 >> 4);
      puVar5 = (undefined8 *)param_4[1];
      do {
        lVar6 = puVar7[1];
        uVar8 = *puVar7;
        puVar5[1] = puVar7[1];
        *puVar5 = uVar8;
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
        puVar7 = puVar7 + 2;
        puVar5 = puVar5 + 2;
      } while (puVar7 != puVar2);
      param_4[1] = puVar5;
    }
    param_4 = param_4 + 3;
  }
  return param_4;
}



/* Entry: 10a04a4e8; end: 10a04a51f;  */

void FUN_10a04a4e8(long *param_1,ulong param_2)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  
  if (param_2 >> 0x3c == 0) {
    plVar1 = param_1;
    FUN_10a04a534();
    *param_1 = (long)plVar1;
    param_1[1] = (long)plVar1;
    param_1[2] = (long)(plVar1 + param_2 * 2);
    return;
  }
  FUN_10a04a520();
  plVar1 = (long *)&UNK_10f6334ac;
  FUN_109ffde64();
  if (param_2 >> 0x3c == 0) {
    __Znwm(param_2 << 4);
    return;
  }
  func_0x000109ffded8();
  plVar4 = (long *)*plVar1;
  lVar5 = *plVar4;
  if (lVar5 != 0) {
    lVar2 = plVar4[1];
    lVar3 = lVar5;
    if (lVar2 != lVar5) {
      do {
        lVar2 = lVar2 + -0x10;
        func_0x00010a05248c();
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



/* Entry: 10a04a520; end: 10a04a533;  */

void FUN_10a04a520(undefined8 param_1,ulong param_2)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  
  plVar1 = (long *)&UNK_10f6334ac;
  FUN_109ffde64();
  if (param_2 >> 0x3c == 0) {
    __Znwm(param_2 << 4);
    return;
  }
  func_0x000109ffded8();
  plVar4 = (long *)*plVar1;
  lVar5 = *plVar4;
  if (lVar5 != 0) {
    lVar2 = plVar4[1];
    lVar3 = lVar5;
    if (lVar2 != lVar5) {
      do {
        lVar2 = lVar2 + -0x10;
        func_0x00010a05248c();
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



/* Entry: 10a04a534; end: 10a04a567;  */

void FUN_10a04a534(long *param_1,ulong param_2)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  
  if (param_2 >> 0x3c == 0) {
    __Znwm(param_2 << 4);
    return;
  }
  func_0x000109ffded8();
  plVar3 = (long *)*param_1;
  lVar4 = *plVar3;
  if (lVar4 != 0) {
    lVar1 = plVar3[1];
    lVar2 = lVar4;
    if (lVar1 != lVar4) {
      do {
        lVar1 = lVar1 + -0x10;
        func_0x00010a05248c();
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



/* Entry: 10a04a568; end: 10a04a6a7;  */

void FUN_10a04a568(long *param_1)

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
        func_0x00010a05248c();
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



/* Entry: 10a04a6a8; end: 10a04a877;  */

long * FUN_10a04a6a8(long *param_1)

{
  long lVar1;
  long lVar2;
  long lStack_28;
  
  lVar1 = param_1[1];
  lVar2 = param_1[2];
  while (lVar2 != lVar1) {
    lStack_28 = lVar2 + -0x18;
    param_1[2] = lStack_28;
    FUN_10a04a568(&lStack_28);
    lVar2 = param_1[2];
  }
  if (*param_1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 10a04a878; end: 10a04a8db;  */

long * FUN_10a04a878(long *param_1,long *param_2,long *param_3)

{
  for (; param_1 != param_2; param_1 = param_1 + 3) {
    if (param_1 != param_3) {
      FUN_10a04a8dc(param_3,*param_1,param_1[1],param_1[1] - *param_1 >> 4);
    }
    param_3 = param_3 + 3;
  }
  return param_3;
}



/* Entry: 10a04a8dc; end: 10a04aa77;  */

void FUN_10a04a8dc(long *param_1,undefined8 *param_2,undefined8 *param_3,ulong param_4)

{
  undefined8 *puVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  undefined8 *puVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  
  puVar10 = (undefined8 *)*param_1;
  if ((ulong)(param_1[2] - (long)puVar10 >> 4) < param_4) {
    plVar4 = param_1;
    FUN_10a04aa78();
    if (param_4 >> 0x3c != 0) {
      FUN_10a04a520();
      lVar9 = *plVar4;
      if (lVar9 != 0) {
        lVar5 = plVar4[1];
        lVar7 = lVar9;
        if (lVar5 != lVar9) {
          do {
            lVar5 = lVar5 + -0x10;
            func_0x00010a05248c();
          } while (lVar5 != lVar9);
          lVar7 = *plVar4;
        }
        plVar4[1] = lVar9;
        __ZdlPv(lVar7);
        *plVar4 = 0;
        plVar4[1] = 0;
        plVar4[2] = 0;
      }
      return;
    }
    uVar8 = param_1[2] - *param_1 >> 3;
    if (uVar8 <= param_4) {
      uVar8 = param_4;
    }
    if (0x7fffffffffffffef < (ulong)(param_1[2] - *param_1)) {
      uVar8 = 0xfffffffffffffff;
    }
    FUN_10a04a4e8(param_1,uVar8);
    puVar6 = (undefined8 *)param_1[1];
    for (; param_2 != param_3; param_2 = param_2 + 2) {
      lVar9 = param_2[1];
      uVar11 = *param_2;
      puVar6[1] = param_2[1];
      *puVar6 = uVar11;
      if (lVar9 != 0) {
        plVar4 = (long *)(lVar9 + 8);
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar4,0x10);
          if (bVar3) {
            *plVar4 = *plVar4 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      puVar6 = puVar6 + 2;
    }
  }
  else {
    puVar6 = (undefined8 *)param_1[1];
    lVar9 = (long)puVar6 - (long)puVar10;
    if (param_4 <= (ulong)(lVar9 >> 4)) {
      if (param_2 != param_3) {
        do {
          func_0x00010a04a704(puVar10,param_2);
          param_2 = param_2 + 2;
          puVar10 = puVar10 + 2;
        } while (param_2 != param_3);
        puVar6 = (undefined8 *)param_1[1];
      }
      while (puVar6 != puVar10) {
        puVar6 = puVar6 + -2;
        func_0x00010a05248c();
      }
      param_1[1] = (long)puVar10;
      return;
    }
    puVar1 = (undefined8 *)((long)param_2 + lVar9);
    if (puVar6 != puVar10) {
      do {
        func_0x00010a04a704(puVar10,param_2);
        param_2 = param_2 + 2;
        puVar10 = puVar10 + 2;
        lVar9 = lVar9 + -0x10;
      } while (lVar9 != 0);
      puVar6 = (undefined8 *)param_1[1];
    }
    for (; puVar1 != param_3; puVar1 = puVar1 + 2) {
      lVar9 = puVar1[1];
      uVar11 = *puVar1;
      puVar6[1] = puVar1[1];
      *puVar6 = uVar11;
      if (lVar9 != 0) {
        plVar4 = (long *)(lVar9 + 8);
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar4,0x10);
          if (bVar3) {
            *plVar4 = *plVar4 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      puVar6 = puVar6 + 2;
    }
  }
  param_1[1] = (long)puVar6;
  return;
}



/* Entry: 10a04aa78; end: 10a04ab7b;  */

void FUN_10a04aa78(long *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar3 = *param_1;
  if (lVar3 != 0) {
    lVar1 = param_1[1];
    lVar2 = lVar3;
    if (lVar1 != lVar3) {
      do {
        lVar1 = lVar1 + -0x10;
        func_0x00010a05248c();
      } while (lVar1 != lVar3);
      lVar2 = *param_1;
    }
    param_1[1] = lVar3;
    __ZdlPv(lVar2);
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  return;
}



/* Entry: 10a04ab7c; end: 10a04ad3b;  */

void FUN_10a04ab7c(long *param_1)

{
  char cVar1;
  bool bVar2;
  code *pcVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  long lStack_58;
  long *plStack_50;
  long *plStack_48;
  long *plStack_40;
  
  if ((*(byte *)(param_1 + 2) & 1) == 0) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x10a04acf8);
    (*pcVar3)();
  }
  lVar6 = param_1[3];
  param_1[3] = 0;
  plVar4 = (long *)*param_1;
  *(undefined1 *)((long)plVar4 + 0xc) = 0;
  lStack_58 = lVar6;
  if (((int)plVar4[1] < 1) && (*(int *)(*plVar4 + 0x278) == 4)) {
    (**(code **)(**(long **)(*(long *)(*plVar4 + 0x100) + 0x1c8) + 0xd8))(&plStack_50);
    plStack_40 = (long *)0x0;
    if (plStack_48 != (long *)0x0) {
      plVar4 = plStack_48;
      __ZNSt3__119__shared_weak_count4lockEv();
      if (plVar4 == (long *)0x0) {
        plVar7 = (long *)0x0;
      }
      else {
        plStack_40 = plStack_50;
        plVar7 = plStack_50;
      }
      if (plStack_48 != (long *)0x0) {
        __ZNSt3__119__shared_weak_count14__release_weakEv();
      }
      if (plVar7 != (long *)0x0) {
        (**(code **)(*plVar7 + 0x10))(plVar7);
      }
      if (plVar4 != (long *)0x0) {
        plVar7 = plVar4 + 1;
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
      }
    }
  }
  plVar4 = (long *)(lVar6 + 0x10);
  do {
    lVar5 = *plVar4;
    if (lVar5 == 0) {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
      if (bVar2) {
        *plVar4 = 2;
        cVar1 = ExclusiveMonitorsStatus();
      }
      if (cVar1 == '\0') {
        FUN_109d1b4dc(lVar6 + 0x18);
        goto LAB_10a04acac;
      }
    }
    else {
      ClearExclusiveLocal();
    }
    if (((uint)lVar5 >> 1 & 1) != 0) {
LAB_10a04acac:
      if ((char)param_1[2] == '\x01') {
        *(undefined1 *)(param_1 + 2) = 0;
      }
      lStack_58 = 0;
      if ((lVar6 != 0) && (func_0x0001092b4274(&lStack_58,lVar6), lStack_58 != 0)) {
        func_0x0001092b4274(&lStack_58);
      }
      return;
    }
  } while( true );
}



/* Entry: 10a04ad3c; end: 10a04ae83;  */

undefined8 * FUN_10a04ad3c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110b9d4c0;
  if (param_1[0x17] != 0) {
    func_0x0001092b4274();
  }
  *param_1 = &PTR_DAT_110ae8be8;
  __ZNSt13exception_ptrD1Ev(param_1 + 0x12);
  *param_1 = &PTR_DAT_110ae8c08;
  return param_1;
}



/* Entry: 10a04ae84; end: 10a04af1f;  */

void FUN_10a04ae84(long param_1,undefined8 *param_2,undefined8 *param_3,long param_4)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 uVar6;
  
  if (param_4 != 0) {
    FUN_10a04af20(param_1,param_4);
    puVar4 = *(undefined8 **)(param_1 + 8);
    for (; param_2 != param_3; param_2 = param_2 + 2) {
      lVar5 = param_2[1];
      uVar6 = *param_2;
      puVar4[1] = param_2[1];
      *puVar4 = uVar6;
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
      puVar4 = puVar4 + 2;
    }
    *(undefined8 **)(param_1 + 8) = puVar4;
  }
  return;
}



/* Entry: 10a04af20; end: 10a04af57;  */

void FUN_10a04af20(long *param_1,ulong param_2)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  
  if (param_2 >> 0x3c == 0) {
    plVar1 = param_1;
    FUN_10a04af6c();
    *param_1 = (long)plVar1;
    param_1[1] = (long)plVar1;
    param_1[2] = (long)(plVar1 + param_2 * 2);
    return;
  }
  FUN_10a04af58();
  plVar1 = (long *)&UNK_10f6334ac;
  FUN_109ffde64();
  if (param_2 >> 0x3c == 0) {
    __Znwm(param_2 << 4);
    return;
  }
  func_0x000109ffded8();
  plVar4 = (long *)*plVar1;
  lVar5 = *plVar4;
  if (lVar5 != 0) {
    lVar2 = plVar4[1];
    lVar3 = lVar5;
    if (lVar2 != lVar5) {
      do {
        lVar2 = lVar2 + -0x10;
        func_0x00010a06b8b0();
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



/* Entry: 10a04af58; end: 10a04af6b;  */

void FUN_10a04af58(undefined8 param_1,ulong param_2)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  
  plVar1 = (long *)&UNK_10f6334ac;
  FUN_109ffde64();
  if (param_2 >> 0x3c == 0) {
    __Znwm(param_2 << 4);
    return;
  }
  func_0x000109ffded8();
  plVar4 = (long *)*plVar1;
  lVar5 = *plVar4;
  if (lVar5 != 0) {
    lVar2 = plVar4[1];
    lVar3 = lVar5;
    if (lVar2 != lVar5) {
      do {
        lVar2 = lVar2 + -0x10;
        func_0x00010a06b8b0();
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



/* Entry: 10a04af6c; end: 10a04af9f;  */

void FUN_10a04af6c(long *param_1,ulong param_2)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  
  if (param_2 >> 0x3c == 0) {
    __Znwm(param_2 << 4);
    return;
  }
  func_0x000109ffded8();
  plVar3 = (long *)*param_1;
  lVar4 = *plVar3;
  if (lVar4 != 0) {
    lVar1 = plVar3[1];
    lVar2 = lVar4;
    if (lVar1 != lVar4) {
      do {
        lVar1 = lVar1 + -0x10;
        func_0x00010a06b8b0();
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



/* Entry: 10a04afa0; end: 10a04b00f;  */

void FUN_10a04afa0(long *param_1)

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
        func_0x00010a06b8b0();
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



/* Entry: 10a04b010; end: 10a04b0af;  */

undefined8 * FUN_10a04b010(undefined8 *param_1)

{
  undefined8 *puStack_28;
  
  *param_1 = &PTR_DAT_110b214b8;
  puStack_28 = param_1 + 6;
  func_0x00010a04b070(&puStack_28);
  puStack_28 = param_1 + 3;
  func_0x00010a04b0f8(&puStack_28);
  if (param_1[2] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  return param_1;
}



/* Entry: 10a04b0b0; end: 10a04b167;  */

void FUN_10a04b0b0(long *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *param_1;
  for (lVar2 = param_1[1]; lVar2 != lVar1; lVar2 = lVar2 + -0x10) {
    if (*(long *)(lVar2 + -8) != 0) {
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
  }
  param_1[1] = lVar1;
  return;
}



/* Entry: 10a04b168; end: 10a04b1bf;  */

long FUN_10a04b168(long param_1)

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



/* Entry: 10a04b1c0; end: 10a04b1d3;  */

void FUN_10a04b1c0(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,long param_4)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  undefined8 *puVar5;
  long lVar6;
  undefined8 uVar7;
  
  puVar4 = &UNK_10f6334ac;
  FUN_109ffdddc();
  if (param_4 != 0) {
    FUN_10a04af20();
    puVar5 = *(undefined8 **)(puVar4 + 8);
    for (; param_2 != param_3; param_2 = param_2 + 2) {
      lVar6 = param_2[1];
      uVar7 = *param_2;
      puVar5[1] = param_2[1];
      *puVar5 = uVar7;
      if (lVar6 != 0) {
        plVar1 = (long *)(lVar6 + 8);
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar3) {
            *plVar1 = *plVar1 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      puVar5 = puVar5 + 2;
    }
    *(undefined8 **)(puVar4 + 8) = puVar5;
  }
  return;
}



/* Entry: 10a04b1d4; end: 10a04b26f;  */

void FUN_10a04b1d4(long param_1,undefined8 *param_2,undefined8 *param_3,long param_4)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 uVar6;
  
  if (param_4 != 0) {
    FUN_10a04af20(param_1,param_4);
    puVar4 = *(undefined8 **)(param_1 + 8);
    for (; param_2 != param_3; param_2 = param_2 + 2) {
      lVar5 = param_2[1];
      uVar6 = *param_2;
      puVar4[1] = param_2[1];
      *puVar4 = uVar6;
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
      puVar4 = puVar4 + 2;
    }
    *(undefined8 **)(param_1 + 8) = puVar4;
  }
  return;
}



/* Entry: 10a04b270; end: 10a04b27f;  */

void FUN_10a04b270(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110b9d530;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10a04b280; end: 10a04b29f;  */

void FUN_10a04b280(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110b9d530;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a04b2a0; end: 10a04b2ab;  */

void FUN_10a04b2a0(long param_1)

{
  long lStack_28;
  
  if (*(char *)(param_1 + 0xdf) < '\0') {
    __ZdlPv(*(undefined8 *)(param_1 + 200));
  }
  if (*(char *)(param_1 + 199) < '\0') {
    __ZdlPv(*(undefined8 *)(param_1 + 0xb0));
  }
  lStack_28 = param_1 + 0x98;
  func_0x000109a1aba8(&lStack_28);
  lStack_28 = param_1 + 0x78;
  func_0x000109378cec(&lStack_28);
  lStack_28 = param_1 + 0x60;
  func_0x000109378cec(&lStack_28);
  if (*(char *)(param_1 + 0x5f) < '\0') {
    __ZdlPv(*(undefined8 *)(param_1 + 0x48));
  }
  if (*(char *)(param_1 + 0x47) < '\0') {
    __ZdlPv(*(undefined8 *)(param_1 + 0x30));
  }
  func_0x000109a1ac6c(param_1 + 0x18);
  return;
}



/* Entry: 10a04b2ac; end: 10a04b31b;  */

void FUN_10a04b2ac(long *param_1)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  
  plVar3 = (long *)*param_1;
  lVar4 = *plVar3;
  if (lVar4 != 0) {
    lVar2 = plVar3[1];
    lVar1 = lVar4;
    if (lVar2 != lVar4) {
      do {
        lVar2 = lVar2 + -0x58;
        FUN_10a04b31c(lVar2);
      } while (lVar2 != lVar4);
      lVar1 = *(long *)*param_1;
    }
    plVar3[1] = lVar4;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(lVar1);
    return;
  }
  return;
}



/* Entry: 10a04b31c; end: 10a04b3c3;  */

void FUN_10a04b31c(undefined8 *param_1)

{
  if ((*(char *)(param_1 + 10) == '\x01') && (param_1[7] != 0)) {
    param_1[8] = param_1[7];
    __ZdlPv();
  }
  if (-1 < *(char *)((long)param_1 + 0x17)) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(*param_1);
  return;
}



/* Entry: 10a04b3c4; end: 10a04b4d3;  */

/* WARNING: Possible PIC construction at 0x00010a04b480: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010a04b484) */

void FUN_10a04b3c4(long *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  ulong uVar1;
  undefined1 *puVar2;
  long *plVar3;
  long *plVar4;
  ulong uVar5;
  undefined8 *puVar6;
  ulong uVar7;
  undefined8 *unaff_x20;
  long lVar8;
  undefined1 **ppuVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined1 auStack_c8 [56];
  undefined1 *puStack_80;
  code *pcStack_78;
  undefined1 **ppuStack_70;
  code *pcStack_68;
  undefined1 auStack_60 [8];
  long *plStack_58;
  undefined8 *puStack_50;
  undefined8 *puStack_48;
  long *plStack_40;
  long *plStack_38;
  
  puVar2 = auStack_60;
  ppuVar9 = (undefined1 **)&stack0xfffffffffffffff0;
  lVar8 = param_1[1] - *param_1;
  uVar1 = (lVar8 >> 5) + 1;
  if (uVar1 >> 0x3b == 0) {
    uVar5 = param_1[2] - *param_1;
    uVar7 = (long)uVar5 >> 4;
    if (uVar7 <= uVar1) {
      uVar7 = uVar1;
    }
    if (0x7fffffffffffffdf < uVar5) {
      uVar7 = 0x7ffffffffffffff;
    }
    plStack_38 = param_1;
    if (uVar7 == 0) {
      plVar3 = (long *)0x0;
    }
    else {
      plVar3 = param_1;
      FUN_10a04b4e8();
    }
    puStack_50 = (undefined8 *)((long)plVar3 + lVar8);
    plStack_40 = plVar3 + uVar7 * 4;
    uVar11 = param_2[1];
    uVar10 = *param_2;
    puStack_50[2] = param_2[2];
    puStack_50[1] = uVar11;
    *puStack_50 = uVar10;
    param_2[1] = 0;
    param_2[2] = 0;
    *param_2 = 0;
    *(undefined4 *)(puStack_50 + 3) = *(undefined4 *)(param_2 + 3);
    unaff_x20 = puStack_50 + 4;
    param_2 = (undefined8 *)*param_1;
    param_3 = (undefined8 *)param_1[1];
    param_4 = (undefined8 *)((long)puStack_50 + ((long)param_2 - (long)param_3));
    uVar10 = 0x10a04b484;
    plVar4 = param_1;
    plStack_58 = plVar3;
    puStack_48 = unaff_x20;
  }
  else {
    FUN_10a04b4d4();
    func_0x00010a04b64c(&plStack_58);
    __Unwind_Resume(param_1);
    pcStack_68 = FUN_10a04b4d4;
    plVar4 = (long *)&UNK_10f6334ac;
    ppuStack_70 = ppuVar9;
    FUN_109ffde64();
    puVar2 = &stack0xffffffffffffff70;
    pcStack_78 = FUN_10a04b4e8;
    ppuVar9 = &puStack_80;
    if ((ulong)param_2 >> 0x3b == 0) {
      puStack_80 = (undefined1 *)&ppuStack_70;
      __Znwm((long)param_2 << 5);
      return;
    }
    uVar10 = 0x10a04b51c;
    puStack_80 = (undefined1 *)&ppuStack_70;
    func_0x000109ffded8();
  }
  *(undefined8 **)(puVar2 + -0x20) = unaff_x20;
  *(long **)(puVar2 + -0x18) = param_1;
  *(undefined1 ***)(puVar2 + -0x10) = ppuVar9;
  *(undefined8 *)(puVar2 + -8) = uVar10;
  *(undefined8 **)(puVar2 + -0x28) = param_4;
  *(undefined8 **)(puVar2 + -0x30) = param_4;
  *(long **)(puVar2 + -0x50) = plVar4;
  *(undefined1 **)(puVar2 + -0x48) = puVar2 + -0x30;
  *(undefined1 **)(puVar2 + -0x40) = puVar2 + -0x28;
  puVar6 = param_2;
  if (param_2 == param_3) {
    puVar2[-0x38] = 1;
  }
  else {
    do {
      uVar11 = puVar6[1];
      uVar10 = *puVar6;
      param_4[2] = puVar6[2];
      param_4[1] = uVar11;
      *param_4 = uVar10;
      puVar6[1] = 0;
      puVar6[2] = 0;
      *puVar6 = 0;
      *(undefined4 *)(param_4 + 3) = *(undefined4 *)(puVar6 + 3);
      puVar6 = puVar6 + 4;
      param_4 = param_4 + 4;
    } while (puVar6 != param_3);
    *(undefined8 **)(puVar2 + -0x28) = param_4;
    puVar2[-0x38] = 1;
    do {
      if (*(char *)((long)param_2 + 0x17) < '\0') {
        __ZdlPv(*param_2);
      }
      param_2 = param_2 + 4;
    } while (param_2 != param_3);
  }
  FUN_10a04b5d4(puVar2 + -0x50);
  return;
}



/* Entry: 10a04b4d4; end: 10a04b4e7;  */

void FUN_10a04b4d4(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  undefined *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puStack_80;
  undefined8 **ppuStack_78;
  undefined8 **ppuStack_70;
  undefined1 uStack_68;
  undefined8 *puStack_60;
  undefined8 *puStack_58;
  
  puVar1 = &UNK_10f6334ac;
  FUN_109ffde64();
  if ((ulong)param_2 >> 0x3b != 0) {
    func_0x000109ffded8();
    ppuStack_78 = &puStack_60;
    ppuStack_70 = &puStack_58;
    puStack_58 = param_4;
    puVar2 = param_2;
    puStack_80 = puVar1;
    puStack_60 = param_4;
    if (param_2 == param_3) {
      uStack_68 = 1;
    }
    else {
      do {
        uVar4 = puVar2[1];
        uVar3 = *puVar2;
        puStack_58[2] = puVar2[2];
        puStack_58[1] = uVar4;
        *puStack_58 = uVar3;
        puVar2[1] = 0;
        puVar2[2] = 0;
        *puVar2 = 0;
        *(undefined4 *)(puStack_58 + 3) = *(undefined4 *)(puVar2 + 3);
        puVar2 = puVar2 + 4;
        puStack_58 = puStack_58 + 4;
      } while (puVar2 != param_3);
      uStack_68 = 1;
      do {
        if (*(char *)((long)param_2 + 0x17) < '\0') {
          __ZdlPv(*param_2);
        }
        param_2 = param_2 + 4;
      } while (param_2 != param_3);
    }
    FUN_10a04b5d4(&puStack_80);
    return;
  }
  __Znwm((long)param_2 << 5);
  return;
}



/* Entry: 10a04b4e8; end: 10a04b5d3;  */

void FUN_10a04b4e8(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_70;
  undefined8 **ppuStack_68;
  undefined8 **ppuStack_60;
  undefined1 uStack_58;
  undefined8 *puStack_50;
  undefined8 *puStack_48;
  
  if ((ulong)param_2 >> 0x3b != 0) {
    func_0x000109ffded8();
    ppuStack_68 = &puStack_50;
    ppuStack_60 = &puStack_48;
    puStack_48 = param_4;
    puVar1 = param_2;
    uStack_70 = param_1;
    puStack_50 = param_4;
    if (param_2 == param_3) {
      uStack_58 = 1;
    }
    else {
      do {
        uVar3 = puVar1[1];
        uVar2 = *puVar1;
        puStack_48[2] = puVar1[2];
        puStack_48[1] = uVar3;
        *puStack_48 = uVar2;
        puVar1[1] = 0;
        puVar1[2] = 0;
        *puVar1 = 0;
        *(undefined4 *)(puStack_48 + 3) = *(undefined4 *)(puVar1 + 3);
        puVar1 = puVar1 + 4;
        puStack_48 = puStack_48 + 4;
      } while (puVar1 != param_3);
      uStack_58 = 1;
      do {
        if (*(char *)((long)param_2 + 0x17) < '\0') {
          __ZdlPv(*param_2);
        }
        param_2 = param_2 + 4;
      } while (param_2 != param_3);
    }
    FUN_10a04b5d4(&uStack_70);
    return;
  }
  __Znwm((long)param_2 << 5);
  return;
}



/* Entry: 10a04b5d4; end: 10a04b607;  */

long FUN_10a04b5d4(long param_1)

{
  if ((*(byte *)(param_1 + 0x18) & 1) == 0) {
    FUN_10a04b608(param_1);
  }
  return param_1;
}



/* Entry: 10a04b608; end: 10a04b777;  */

/* WARNING: Removing unreachable block (ram,0x00010a04b634) */

void FUN_10a04b608(long param_1)

{
  long lVar1;
  
  for (lVar1 = **(long **)(param_1 + 0x10); lVar1 != **(long **)(param_1 + 8); lVar1 = lVar1 + -0x20
      ) {
  }
  return;
}



/* Entry: 10a04b778; end: 10a04b8c7;  */

void FUN_10a04b778(undefined8 *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  long lVar5;
  long lVar6;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  if ((*(byte *)(param_1 + 10) & 1) == 0) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x10a04b89c);
    (*pcVar4)();
  }
  lVar6 = param_1[0xb];
  param_1[0xb] = 0;
  lStack_28 = lVar6;
  func_0x000109a17fdc(&uStack_40,*param_1,param_1 + 2);
  plVar1 = (long *)(lVar6 + 0x10);
  do {
    lVar5 = *plVar1;
    if (lVar5 == 0) {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
      if (cVar2 == '\0') {
        if (*(char *)(lVar6 + 0xb0) == '\x01') {
          func_0x000109a18054(lVar6 + 0x98);
        }
        *(undefined8 *)(lVar6 + 0xa0) = uStack_38;
        *(undefined8 *)(lVar6 + 0x98) = uStack_40;
        uStack_38 = 0;
        *(undefined8 *)(lVar6 + 0xa8) = uStack_30;
        *(undefined1 *)(lVar6 + 0xb0) = 1;
        *(undefined8 *)(lVar6 + 0x10) = 2;
        FUN_109d1b4dc(lVar6 + 0x18);
        goto LAB_10a04b82c;
      }
    }
    else {
      ClearExclusiveLocal();
    }
    if (((uint)lVar5 >> 1 & 1) != 0) {
LAB_10a04b82c:
      func_0x000109a18054(&uStack_40);
      if (*(char *)(param_1 + 10) == '\x01') {
        if (param_1[5] != 0) {
          param_1[6] = param_1[5];
          __ZdlPv();
        }
        func_0x000109a18110(param_1 + 3);
        func_0x00010a06e004(param_1);
        *(undefined1 *)(param_1 + 10) = 0;
      }
      lStack_28 = 0;
      if ((lVar6 != 0) && (func_0x0001092b4274(&lStack_28,lVar6), lStack_28 != 0)) {
        func_0x0001092b4274(&lStack_28);
      }
      return;
    }
  } while( true );
}



/* Entry: 10a04b8c8; end: 10a04bc33;  */

undefined8 * FUN_10a04b8c8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110b9d580;
  if (param_1[0x22] != 0) {
    func_0x0001092b4274(param_1 + 0x22);
  }
  if (*(char *)(param_1 + 0x21) == '\x01') {
    if (param_1[0x1c] != 0) {
      param_1[0x1d] = param_1[0x1c];
      __ZdlPv();
    }
    func_0x000109a18110(param_1 + 0x1a);
    func_0x00010a06e004(param_1 + 0x17);
  }
  *param_1 = &PTR_DAT_110b9d5d0;
  if (*(char *)(param_1 + 0x16) == '\x01') {
    func_0x000109a18054(param_1 + 0x13);
  }
  *param_1 = &PTR_DAT_110ae8be8;
  __ZNSt13exception_ptrD1Ev(param_1 + 0x12);
  *param_1 = &PTR_DAT_110ae8c08;
  return param_1;
}



/* Entry: 10a04bc34; end: 10a04c11b;  */

/* WARNING: Removing unreachable block (ram,0x00010a04be7c) */

long ******* FUN_10a04bc34(long *******param_1)

{
  long *******ppppppplVar1;
  char cVar2;
  bool bVar3;
  ulong uVar4;
  code *pcVar5;
  long *******ppppppplVar6;
  int iVar7;
  long *****ppppplVar8;
  long ******pppppplVar9;
  long **pplVar10;
  ulong uVar11;
  long *******ppppppplVar12;
  long ******pppppplVar13;
  long *****ppppplStack_208;
  long ******pppppplStack_200;
  long ******pppppplStack_1f8;
  long *****ppppplStack_1f0;
  long *plStack_1e8;
  long ***ppplStack_1e0;
  long lStack_1d8;
  undefined4 uStack_1d0;
  long lStack_1c8;
  ulong uStack_1c0;
  long lStack_1b8;
  long lStack_1b0;
  undefined4 uStack_1a8;
  undefined8 auStack_1a0 [2];
  char cStack_189;
  long *****ppppplStack_118;
  long *****ppppplStack_110;
  long *plStack_108;
  long **pplStack_100;
  long lStack_f8;
  undefined4 uStack_f0;
  long lStack_e8;
  ulong uStack_e0;
  long lStack_d8;
  long lStack_d0;
  undefined4 uStack_c8;
  long *****ppppplStack_c0;
  long *****ppppplStack_b8;
  long *****ppppplStack_b0;
  undefined8 *apuStack_a8 [7];
  long *****ppppplStack_70;
  long *****ppppplStack_68;
  long *****ppppplStack_60;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if (((ulong)param_1[0x20] & 1) != 0) {
    ppppppplVar12 = (long *******)param_1[0x21];
    param_1[0x21] = (long ******)0x0;
    pppppplStack_1f8 = (long ******)ppppppplVar12;
    if (((uint)param_1[0x1e][2] >> 1 & 1) == 0) {
      plStack_108 = (long *)0x0;
      ppppplStack_110 = (long *****)0x0;
      lStack_f8 = 0;
      pplStack_100 = (long **)0x0;
      uStack_e0 = 0;
      lStack_e8 = 0;
      lStack_d0 = 0;
      lStack_d8 = 0;
      uStack_f0 = 0x3f800000;
      uStack_c8 = 0x3f800000;
      ppppplStack_c0 = (long *****)&PTR_DAT_110b212d0;
      ppppplStack_b8 = (long *****)0x0;
      ppppplStack_b0 = (long *****)((ulong)ppppplStack_b0 & 0xffffffff00000000);
      func_0x00010b4d1294(auStack_1a0,&ppppplStack_c0);
      func_0x000109a18764(&ppppplStack_110,auStack_1a0,&DAT_110b9fdf8);
      if (cStack_189 < '\0') {
        __ZdlPv(auStack_1a0[0]);
      }
      if (((ulong)ppppplStack_b8 & 1) != 0) {
        func_0x0001053936ac(&ppppplStack_b8);
      }
      FUN_10ad04f10(&ppppplStack_110);
      FUN_10ad4a0bc(&ppppplStack_110);
      func_0x000109a19274(auStack_1a0,0,param_1);
      ppppplStack_b8 = (long *****)param_1[0x12];
      ppppplStack_c0 = (long *****)param_1[0x11];
      param_1[0x11] = (long ******)0x0;
      param_1[0x12] = (long ******)0x0;
      ppppplStack_b0 = (long *****)param_1[0x13];
      (*(code *)param_1[0x14][2])(apuStack_a8,param_1 + 0x14);
      uStack_1c0 = uStack_e0;
      lStack_1c8 = lStack_e8;
      plStack_1e8 = plStack_108;
      ppppplStack_1f0 = ppppplStack_110;
      ppppplStack_68 = (long *****)param_1[0x1c];
      ppppplStack_70 = (long *****)param_1[0x1b];
      ppppplStack_60 = (long *****)param_1[0x1d];
      param_1[0x1c] = (long ******)0x0;
      param_1[0x1d] = (long ******)0x0;
      param_1[0x1b] = (long ******)0x0;
      ppppplStack_110 = (long *****)0x0;
      plStack_108 = (long *)0x0;
      ppplStack_1e0 = (long ***)pplStack_100;
      lStack_1d8 = lStack_f8;
      uStack_1d0 = uStack_f0;
      if (lStack_f8 != 0) {
        pplVar10 = (long **)pplStack_100[1];
        if (((ulong)plStack_1e8 & (long)plStack_1e8 - 1U) == 0) {
          pplVar10 = (long **)((ulong)pplVar10 & (long)plStack_1e8 - 1U);
        }
        else if (plStack_1e8 <= pplVar10) {
          uVar11 = 0;
          if ((long **)plStack_1e8 != (long **)0x0) {
            uVar11 = (ulong)pplVar10 / (ulong)plStack_1e8;
          }
          pplVar10 = (long **)((long)pplVar10 - uVar11 * (long)plStack_1e8);
        }
        ppppplStack_1f0[(long)pplVar10] = &ppplStack_1e0;
        pplStack_100 = (long **)0x0;
        lStack_f8 = 0;
      }
      lStack_e8 = 0;
      uStack_e0 = 0;
      lStack_1b8 = lStack_d8;
      lStack_1b0 = lStack_d0;
      uStack_1a8 = uStack_c8;
      if (lStack_d0 != 0) {
        uVar11 = *(ulong *)(lStack_d8 + 8);
        if ((uStack_1c0 & uStack_1c0 - 1) == 0) {
          uVar11 = uVar11 & uStack_1c0 - 1;
        }
        else if (uStack_1c0 <= uVar11) {
          uVar4 = 0;
          if (uStack_1c0 != 0) {
            uVar4 = uVar11 / uStack_1c0;
          }
          uVar11 = uVar11 - uVar4 * uStack_1c0;
        }
        *(long **)(lStack_1c8 + uVar11 * 8) = &lStack_1b8;
        lStack_d8 = 0;
        lStack_d0 = 0;
      }
      func_0x000109a18f50(&ppppplStack_118,auStack_1a0,&ppppplStack_c0,&ppppplStack_1f0);
      ppppplStack_208 = ppppplStack_118;
      if ((long ******)ppppplStack_118 == (long ******)0x0) {
        ppppppplVar6 = (long *******)0x0;
      }
      else {
        ppppppplVar6 = (long *******)0x20;
        __Znwm();
        *ppppppplVar6 = (long ******)&PTR_FUN_110b9d6d0;
        ppppppplVar6[1] = (long ******)0x0;
        ppppppplVar6[2] = (long ******)0x0;
        ppppppplVar6[3] = (long ******)ppppplStack_118;
      }
      ppppplStack_118 = (long *****)0x0;
      pppppplStack_200 = (long ******)ppppppplVar6;
      func_0x000109a1933c(&lStack_1c8);
      func_0x000109a193b8(&ppppplStack_1f0);
      (*(code *)*apuStack_a8[0])(apuStack_a8);
      pppppplVar13 = (long ******)ppppplStack_b8;
      if ((long ******)ppppplStack_b8 != (long ******)0x0) {
        pppppplVar9 = (long ******)(ppppplStack_b8 + 1);
        do {
          ppppplVar8 = *pppppplVar9;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(pppppplVar9,0x10);
          if (bVar3) {
            *pppppplVar9 = (long *****)((long)ppppplVar8 + -1);
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (ppppplVar8 == (long *****)0x0) {
          (*(code *)(*ppppplStack_b8)[2])(ppppplStack_b8);
          __ZNSt3__119__shared_weak_count14__release_weakEv(pppppplVar13);
        }
      }
      func_0x000109a1dbe4(auStack_1a0);
      func_0x000109a1933c(&lStack_e8);
      func_0x000109a193b8(&ppppplStack_110);
      FUN_10a04c514(ppppppplVar12,&ppppplStack_208);
      ppppppplVar6 = (long *******)pppppplStack_200;
      if ((long *******)pppppplStack_200 != (long *******)0x0) {
        ppppppplVar1 = (long *******)(pppppplStack_200 + 1);
        do {
          pppppplVar9 = *ppppppplVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(ppppppplVar1,0x10);
          if (bVar3) {
            *ppppppplVar1 = (long ******)((long)pppppplVar9 + -1);
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (pppppplVar9 == (long ******)0x0) {
          (*(code *)(*pppppplStack_200)[2])(pppppplStack_200);
          __ZNSt3__119__shared_weak_count14__release_weakEv();
          ppppppplVar12 = ppppppplVar6;
        }
      }
      while( true ) {
        if (*(char *)(param_1 + 0x20) == '\x01') {
          pppppplVar9 = param_1[0x1e];
          if (pppppplVar9 != (long ******)0x0) {
            pppppplVar13 = pppppplVar9 + 1;
            do {
              ppppplVar8 = *pppppplVar13;
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(pppppplVar13,0x10);
              if (bVar3) {
                *pppppplVar13 = (long *****)((long)ppppplVar8 + -4);
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
            if (((ulong)ppppplVar8 & 0x1fffffffc) == 4) {
              (*(code *)(*pppppplVar9)[2])(pppppplVar9);
              do {
                ppppplVar8 = *pppppplVar13;
                cVar2 = '\x01';
                bVar3 = (bool)ExclusiveMonitorPass(pppppplVar13,0x10);
                if (bVar3) {
                  *pppppplVar13 = (long *****)((long)ppppplVar8 + -1);
                  cVar2 = ExclusiveMonitorsStatus();
                }
              } while (cVar2 != '\0');
              if ((long *****)((long)ppppplVar8 + -1) == (long *****)0x0) {
                (*(code *)(*pppppplVar9)[1])(pppppplVar9);
              }
            }
          }
          if (*(char *)((long)param_1 + 0xef) < '\0') {
            __ZdlPv(param_1[0x1b]);
          }
          (*(code *)*param_1[0x14])();
          FUN_10a071d0c(param_1 + 0x11);
          ppppppplVar12 = param_1;
          func_0x000109a1dbe4();
          *(undefined1 *)(param_1 + 0x20) = 0;
        }
        pppppplVar9 = pppppplStack_1f8;
        pppppplStack_1f8 = (long ******)0x0;
        ppppppplVar6 = (long *******)0x0;
        if ((long *******)pppppplVar9 != (long *******)0x0) {
          ppppppplVar12 = &pppppplStack_1f8;
          func_0x0001092b4274();
          ppppppplVar6 = (long *******)pppppplStack_1f8;
          if ((long *******)pppppplStack_1f8 != (long *******)0x0) {
            ppppppplVar12 = &pppppplStack_1f8;
            func_0x0001092b4274();
          }
        }
        iVar7 = (int)ppppppplVar6;
        if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) break;
        ___stack_chk_fail();
        if (iVar7 == 0) {
          __Unwind_Resume(ppppppplVar12);
          func_0x000104bd46a0();
          *ppppppplVar12 = (long ******)&PTR_FUN_110b9d628;
          if (ppppppplVar12[0x37] != (long ******)0x0) {
            func_0x0001092b4274(ppppppplVar12 + 0x37);
          }
          if (*(char *)(ppppppplVar12 + 0x36) == '\x01') {
            pppppplVar13 = ppppppplVar12[0x34];
            if (pppppplVar13 != (long ******)0x0) {
              pppppplVar9 = pppppplVar13 + 1;
              do {
                ppppplVar8 = *pppppplVar9;
                cVar2 = '\x01';
                bVar3 = (bool)ExclusiveMonitorPass(pppppplVar9,0x10);
                if (bVar3) {
                  *pppppplVar9 = (long *****)((long)ppppplVar8 + -4);
                  cVar2 = ExclusiveMonitorsStatus();
                }
              } while (cVar2 != '\0');
              if (((ulong)ppppplVar8 & 0x1fffffffc) == 4) {
                (*(code *)(*pppppplVar13)[2])(pppppplVar13);
                do {
                  ppppplVar8 = *pppppplVar9;
                  cVar2 = '\x01';
                  bVar3 = (bool)ExclusiveMonitorPass(pppppplVar9,0x10);
                  if (bVar3) {
                    *pppppplVar9 = (long *****)((long)ppppplVar8 + -1);
                    cVar2 = ExclusiveMonitorsStatus();
                  }
                } while (cVar2 != '\0');
                if ((long *****)((long)ppppplVar8 + -1) == (long *****)0x0) {
                  (*(code *)(*pppppplVar13)[1])(pppppplVar13);
                }
              }
            }
            if (*(char *)((long)ppppppplVar12 + 0x19f) < '\0') {
              __ZdlPv(ppppppplVar12[0x31]);
            }
            (*(code *)*ppppppplVar12[0x2a])(ppppppplVar12 + 0x2a);
            FUN_10a071d0c(ppppppplVar12 + 0x27);
            func_0x000109a1dbe4(ppppppplVar12 + 0x16);
          }
          *ppppppplVar12 = (long ******)&PTR_FUN_110b9d678;
          if (*(char *)(ppppppplVar12 + 0x15) == '\x01') {
            func_0x00010a06e004(ppppppplVar12 + 0x13);
          }
          *ppppppplVar12 = (long ******)&PTR_DAT_110ae8be8;
          __ZNSt13exception_ptrD1Ev(ppppppplVar12 + 0x12);
          *ppppppplVar12 = (long ******)&PTR_DAT_110ae8c08;
          return ppppppplVar12;
        }
        ppppplStack_118 = (long *****)0x0;
        func_0x000109a17cec(pppppplVar13);
        __ZdlPv();
        func_0x000109a1933c(&lStack_1c8);
        func_0x000109a193b8(&ppppplStack_1f0);
        func_0x000109a191dc(&ppppplStack_c0);
        func_0x000109a1dbe4(auStack_1a0);
        func_0x000109a1933c(&lStack_e8);
        func_0x000109a193b8(&ppppplStack_110);
        ___cxa_begin_catch(ppppppplVar12);
        pppppplVar9 = pppppplStack_1f8;
        __ZSt17current_exceptionv(&ppppplStack_110);
        func_0x000109d1b350(pppppplVar9,&ppppplStack_110);
        ppppppplVar12 = (long *******)&ppppplStack_110;
        __ZNSt13exception_ptrD1Ev();
        ___cxa_end_catch();
      }
      return ppppppplVar12;
    }
    FUN_10a00946c(&UNK_10f6341cd);
  }
                    /* WARNING: Does not return */
  pcVar5 = (code *)SoftwareBreakpoint(1,0x10a04c02c);
  (*pcVar5)();
}



/* Entry: 10a04c11c; end: 10a04c237;  */

undefined8 * FUN_10a04c11c(undefined8 *param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  ulong uVar4;
  long *plVar5;
  
  *param_1 = &PTR_FUN_110b9d628;
  if (param_1[0x37] != 0) {
    func_0x0001092b4274(param_1 + 0x37);
  }
  if (*(char *)(param_1 + 0x36) == '\x01') {
    plVar5 = (long *)param_1[0x34];
    if (plVar5 != (long *)0x0) {
      puVar1 = (ulong *)(plVar5 + 1);
      do {
        uVar4 = *puVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = uVar4 - 4;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if ((uVar4 & 0x1fffffffc) == 4) {
        (**(code **)(*plVar5 + 0x10))(plVar5);
        do {
          uVar4 = *puVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar3) {
            *puVar1 = uVar4 - 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (uVar4 - 1 == 0) {
          (**(code **)(*plVar5 + 8))(plVar5);
        }
      }
    }
    if (*(char *)((long)param_1 + 0x19f) < '\0') {
      __ZdlPv(param_1[0x31]);
    }
    (**(code **)param_1[0x2a])(param_1 + 0x2a);
    FUN_10a071d0c(param_1 + 0x27);
    func_0x000109a1dbe4(param_1 + 0x16);
  }
  *param_1 = &PTR_FUN_110b9d678;
  if (*(char *)(param_1 + 0x15) == '\x01') {
    func_0x00010a06e004(param_1 + 0x13);
  }
  *param_1 = &PTR_DAT_110ae8be8;
  __ZNSt13exception_ptrD1Ev(param_1 + 0x12);
  *param_1 = &PTR_DAT_110ae8c08;
  return param_1;
}



/* Entry: 10a04c238; end: 10a04c24b;  */

void FUN_10a04c238(void)

{
  FUN_10a04c11c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a04c24c; end: 10a04c3e3;  */

undefined8 * FUN_10a04c24c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110b9d678;
  if (*(char *)(param_1 + 0x15) == '\x01') {
    func_0x00010a06e004(param_1 + 0x13);
  }
  *param_1 = &PTR_DAT_110ae8be8;
  __ZNSt13exception_ptrD1Ev(param_1 + 0x12);
  *param_1 = &PTR_DAT_110ae8c08;
  return param_1;
}



/* Entry: 10a04c3e4; end: 10a04c4ff;  */

undefined8 * FUN_10a04c3e4(undefined8 *param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  ulong uVar4;
  long *plVar5;
  
  *param_1 = &PTR_FUN_110b9d698;
  if (param_1[0x37] != 0) {
    func_0x0001092b4274(param_1 + 0x37);
  }
  if (*(char *)(param_1 + 0x36) == '\x01') {
    plVar5 = (long *)param_1[0x34];
    if (plVar5 != (long *)0x0) {
      puVar1 = (ulong *)(plVar5 + 1);
      do {
        uVar4 = *puVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = uVar4 - 4;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if ((uVar4 & 0x1fffffffc) == 4) {
        (**(code **)(*plVar5 + 0x10))(plVar5);
        do {
          uVar4 = *puVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar3) {
            *puVar1 = uVar4 - 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (uVar4 - 1 == 0) {
          (**(code **)(*plVar5 + 8))(plVar5);
        }
      }
    }
    if (*(char *)((long)param_1 + 0x19f) < '\0') {
      __ZdlPv(param_1[0x31]);
    }
    (**(code **)param_1[0x2a])(param_1 + 0x2a);
    FUN_10a071d0c(param_1 + 0x27);
    func_0x000109a1dbe4(param_1 + 0x16);
  }
  *param_1 = &PTR_FUN_110b9d678;
  if (*(char *)(param_1 + 0x15) == '\x01') {
    func_0x00010a06e004(param_1 + 0x13);
  }
  *param_1 = &PTR_DAT_110ae8be8;
  __ZNSt13exception_ptrD1Ev(param_1 + 0x12);
  *param_1 = &PTR_DAT_110ae8c08;
  return param_1;
}



/* Entry: 10a04c500; end: 10a04c513;  */

void FUN_10a04c500(void)

{
  FUN_10a04c3e4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a04c514; end: 10a04c5ab;  */

void FUN_10a04c514(long param_1,undefined8 *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined8 *puVar5;
  ulong uVar6;
  undefined1 *puVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
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
  
  plVar1 = (long *)(param_1 + 0x10);
  do {
    lVar4 = *plVar1;
    if (lVar4 == 0) {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
      if (cVar2 == '\0') {
        if (*(char *)(param_1 + 0xa8) == '\x01') {
          func_0x00010a06e004(param_1 + 0x98);
        }
        uVar9 = *param_2;
        *(undefined8 *)(param_1 + 0xa0) = param_2[1];
        *(undefined8 *)(param_1 + 0x98) = uVar9;
        *param_2 = 0;
        param_2[1] = 0;
        *(undefined1 *)(param_1 + 0xa8) = 1;
        *(undefined8 *)(param_1 + 0x10) = 2;
        uStack_78 = *(undefined8 *)(param_1 + 0x60);
        uStack_80 = *(undefined8 *)(param_1 + 0x58);
        uStack_68 = *(undefined8 *)(param_1 + 0x70);
        uStack_70 = *(undefined8 *)(param_1 + 0x68);
        uStack_58 = *(undefined8 *)(param_1 + 0x80);
        uStack_60 = *(undefined8 *)(param_1 + 0x78);
        uStack_c0 = *(undefined8 *)(param_1 + 0x18);
        uStack_b8 = *(undefined8 *)(param_1 + 0x20);
        uStack_a8 = *(undefined8 *)(param_1 + 0x30);
        uStack_b0 = *(undefined8 *)(param_1 + 0x28);
        *(undefined8 **)(param_1 + 0x88) = (undefined8 *)(param_1 + 0x18);
        *(undefined1 *)(param_1 + 0x19) = 0;
        uStack_98 = *(undefined8 *)(param_1 + 0x40);
        uStack_a0 = *(undefined8 *)(param_1 + 0x38);
        uStack_88 = *(undefined8 *)(param_1 + 0x50);
        uStack_90 = *(undefined8 *)(param_1 + 0x48);
        puVar5 = &uStack_c0;
        do {
          uVar6 = (ulong)*(byte *)((long)puVar5 + 1);
          if (uVar6 != 0) {
            puVar8 = (undefined8 *)((long)puVar5 + 0x20);
            do {
              uStack_48 = puVar8[-1];
              uStack_50 = puVar8[-2];
              uStack_40 = *puVar8;
              (*(code *)**(undefined8 **)*puVar8)((undefined8 *)*puVar8,&uStack_50);
              uVar6 = uVar6 - 1;
              puVar8 = puVar8 + 3;
            } while (uVar6 != 0);
          }
          puVar7 = *(undefined1 **)((long)puVar5 + 8);
          if (puVar5 != &uStack_c0) {
            _free(puVar5);
          }
          puVar5 = (undefined8 *)puVar7;
        } while (puVar7 != (undefined1 *)0x0);
        return;
      }
    }
    else {
      ClearExclusiveLocal();
    }
    if (((uint)lVar4 >> 1 & 1) != 0) {
      return;
    }
  } while( true );
}



/* Entry: 10a04c5ac; end: 10a04c5af;  */

long FUN_10a04c5ac(long param_1)

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



/* Entry: 10a04c5b0; end: 10a04c607;  */

long FUN_10a04c5b0(long param_1)

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



/* Entry: 10a04c608; end: 10a04c60b;  */

void FUN_10a04c608(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10a04c60c; end: 10a04c63f;  */

void FUN_10a04c60c(void)

{
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a04c640; end: 10a04c677;  */

undefined8 FUN_10a04c640(undefined8 param_1,undefined8 param_2)

{
  FUN_10a042ab0(param_2,&PTR_DAT_110b9d710);
  if ((int)param_2 == 0) {
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 10a04c678; end: 10a04c67b;  */

void FUN_10a04c678(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a04c67c; end: 10a04c73b;  */

void FUN_10a04c67c(long param_1,undefined8 *param_2)

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
          func_0x00010a04d5a8(lVar8 + 0x98);
        }
        uVar9 = *param_2;
        *(undefined8 *)(lVar8 + 0xa0) = param_2[1];
        *(undefined8 *)(lVar8 + 0x98) = uVar9;
        *param_2 = 0;
        param_2[1] = 0;
        *(undefined1 *)(lVar8 + 0xa8) = 1;
        *(undefined8 *)(lVar8 + 0x10) = 2;
        FUN_109d1b4dc(lVar8 + 0x18);
        goto LAB_10a04c70c;
      }
    }
    else {
      ClearExclusiveLocal();
    }
    if (((uint)lVar6 >> 1 & 1) != 0) {
LAB_10a04c70c:
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



/* Entry: 10a04c73c; end: 10a04d453;  */

/* WARNING: Removing unreachable block (ram,0x00010a04ca1c) */
/* WARNING: Removing unreachable block (ram,0x00010a04c888) */
/* WARNING: Removing unreachable block (ram,0x00010a04cad8) */
/* WARNING: Removing unreachable block (ram,0x00010a04cd00) */
/* WARNING: Removing unreachable block (ram,0x00010a04c8c8) */

void FUN_10a04c73c(long *param_1,long param_2)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  ulong uVar4;
  undefined8 *puVar5;
  code *pcVar6;
  code *pcVar7;
  long *plVar8;
  long *plVar9;
  long lVar10;
  undefined8 uVar11;
  ulong uVar12;
  long lVar13;
  long lVar14;
  ulong uVar15;
  long *plVar16;
  code *pcVar17;
  long lVar18;
  code *pcStack_90;
  code *pcStack_88;
  code *pcStack_80;
  code *pcStack_70;
  code *pcStack_68;
  undefined **ppuStack_60;
  
  puVar5 = (undefined8 *)0x1b8;
  __Znwm();
  *puVar5 = FUN_10a08ab9c;
  puVar5[1] = FUN_10a08b2b0;
  puVar5[0x35] = param_2;
  FUN_10a04d454(puVar5 + 2);
  lVar10 = puVar5[7];
  if (lVar10 != 0) {
    plVar8 = (long *)(lVar10 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar3) {
        *plVar8 = *plVar8 + 4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  *param_1 = lVar10;
  pcVar6 = (code *)0x118;
  __Znwm();
  *(long *)(pcVar6 + 0x10) = 0;
  *(long *)(pcVar6 + 8) = 0x200000006;
  *(undefined2 *)(pcVar6 + 0x18) = 4;
  *(long *)(pcVar6 + 0x28) = 0;
  *(long *)(pcVar6 + 0x20) = 0;
  *(long *)(pcVar6 + 0x38) = 0;
  *(long *)(pcVar6 + 0x30) = 0;
  *(long *)(pcVar6 + 0x48) = 0;
  *(long *)(pcVar6 + 0x40) = 0;
  *(long *)(pcVar6 + 0x58) = 0;
  *(long *)(pcVar6 + 0x50) = 0;
  *(long *)(pcVar6 + 0x68) = 0;
  *(long *)(pcVar6 + 0x60) = 0;
  *(long *)(pcVar6 + 0x78) = 0;
  *(long *)(pcVar6 + 0x70) = 0;
  *(long *)(pcVar6 + 0x80) = 0;
  *(code **)(pcVar6 + 0x88) = pcVar6 + 0x18;
  *(long *)(pcVar6 + 0x90) = 0;
  pcVar6[0x98] = (code)0x0;
  pcVar6[0xa8] = (code)0x0;
  *(undefined ***)pcVar6 = &PTR_FUN_110b9d768;
  lVar10 = *(long *)(param_2 + 0x70);
  pcVar17 = pcVar6 + 0xb0;
  *(long *)(pcVar6 + 0xb8) = *(long *)(param_2 + 0x78);
  *(long *)pcVar17 = lVar10;
  plVar8 = (long *)(*(long *)(param_2 + 0x78) + 8);
  *(undefined8 *)(param_2 + 0x70) = 0;
  do {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar8,0x10);
    if (bVar3) {
      *plVar8 = *plVar8 + 4;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  *(long *)(pcVar6 + 0xd0) = 0;
  *(long *)(pcVar6 + 0xd8) = 0x32aaaba7;
  *(long *)(pcVar6 + 0xe8) = 0;
  *(long *)(pcVar6 + 0xe0) = 0;
  *(long *)(pcVar6 + 0xf8) = 0;
  *(long *)(pcVar6 + 0xf0) = 0;
  *(long *)(pcVar6 + 0x108) = 0;
  *(long *)(pcVar6 + 0x100) = 0;
  *(long *)(pcVar6 + 0x110) = 0;
  pcStack_88 = (code *)0x0;
  *(code **)(pcVar6 + 0xc0) = pcVar6;
  *(long *)(pcVar6 + 200) = 0;
  pcStack_90 = pcVar6;
  pcStack_80 = pcVar17;
  if (((uint)*(undefined8 *)(*(long *)(pcVar6 + 0xb8) + 0x10) >> 1 & 1) == 0) {
    __ZNSt3__15mutex4lockEv(pcVar6 + 0xd8);
    lVar10 = *(long *)pcVar17;
    plVar8 = (long *)(lVar10 + 0x10);
    do {
      lVar13 = *plVar8;
      if (lVar13 == 0) {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar8,0x10);
        if (bVar3) {
          *plVar8 = 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
        if (cVar2 == '\0') {
          lVar13 = lVar10 + 0x18;
          pcStack_70 = FUN_10a04d754;
          ppuStack_60 = &PTR_PTR_1132fed68;
          pcStack_68 = pcVar17;
          func_0x000109d1b588(lVar13,&pcStack_70);
          *(undefined8 *)(lVar10 + 0x10) = 0;
          *(long *)(pcStack_80 + 0x18) = lVar13;
          lVar10 = *(long *)(pcVar6 + 0xb8);
          plVar8 = (long *)(lVar10 + 0x10);
          goto LAB_10a04ca08;
        }
      }
      else {
        ClearExclusiveLocal();
      }
    } while (((uint)lVar13 >> 1 & 1) == 0);
    *(long *)(pcStack_80 + 0x18) = 0;
    lVar10 = *(long *)(pcVar6 + 0xc0);
    plVar8 = (long *)(lVar10 + 0x10);
    do {
      lVar13 = *plVar8;
      if (lVar13 == 0) {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar8,0x10);
        if (bVar3) {
          *plVar8 = 2;
          cVar2 = ExclusiveMonitorsStatus();
        }
        if (cVar2 == '\0') {
          func_0x000109d1b4dc(lVar10 + 0x18);
          break;
        }
      }
      else {
        ClearExclusiveLocal();
      }
    } while (((uint)lVar13 >> 1 & 1) == 0);
    plVar8 = *(long **)(pcVar6 + 0xb8);
    *(long *)(pcVar6 + 0xb8) = 0;
    if (plVar8 != (long *)0x0) {
      puVar1 = (ulong *)(plVar8 + 1);
      do {
        uVar12 = *puVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = uVar12 - 4;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if ((uVar12 & 0x1fffffffc) == 4) {
        (**(code **)(*plVar8 + 0x10))(plVar8);
        do {
          uVar12 = *puVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar3) {
            *puVar1 = uVar12 - 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (uVar12 - 1 == 0) {
          (**(code **)(*plVar8 + 8))(plVar8);
        }
      }
    }
    lVar10 = *(long *)(pcVar6 + 0xc0);
    *(long *)(pcVar6 + 0xc0) = 0;
    if (lVar10 != 0) {
      func_0x0001092b4274(pcVar6 + 0xc0);
    }
    puVar5[0x1b] = *(long *)pcVar17;
    *(long *)pcVar17 = 0;
LAB_10a04cc48:
    __ZNSt3__15mutex6unlockEv(pcVar6 + 0xd8);
  }
  else {
    lVar10 = *(long *)(pcVar6 + 0xc0);
    pcVar7 = pcVar6;
    FUN_109d1857c();
    func_0x000109d1b350(lVar10,pcVar7);
    plVar8 = *(long **)pcVar17;
    *(long *)pcVar17 = 0;
    if (plVar8 != (long *)0x0) {
      puVar1 = (ulong *)(plVar8 + 1);
      do {
        uVar12 = *puVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = uVar12 - 4;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if ((uVar12 & 0x1fffffffc) == 4) {
        do {
          uVar12 = *puVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar3) {
            *puVar1 = uVar12 - 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (uVar12 - 1 == 0) {
          (**(code **)(*plVar8 + 8))();
        }
      }
    }
    plVar8 = *(long **)(pcVar6 + 0xb8);
    *(long *)(pcVar6 + 0xb8) = 0;
    if (plVar8 != (long *)0x0) {
      puVar1 = (ulong *)(plVar8 + 1);
      do {
        uVar12 = *puVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = uVar12 - 4;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if ((uVar12 & 0x1fffffffc) == 4) {
        (**(code **)(*plVar8 + 0x10))(plVar8);
        do {
          uVar12 = *puVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar3) {
            *puVar1 = uVar12 - 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (uVar12 - 1 == 0) {
          (**(code **)(*plVar8 + 8))(plVar8);
        }
      }
    }
    lVar10 = *(long *)(pcVar6 + 0xc0);
    *(long *)(pcVar6 + 0xc0) = 0;
    if (lVar10 != 0) {
      func_0x0001092b4274(pcVar6 + 0xc0);
    }
    puVar5[0x1b] = pcStack_90;
    pcStack_90 = (code *)0x0;
  }
  if (pcStack_88 != (code *)0x0) {
    func_0x0001092b4274(&pcStack_88);
  }
  if (pcStack_90 != (code *)0x0) {
    pcVar6 = pcStack_90 + 8;
    do {
      uVar12 = *(ulong *)pcVar6;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(pcVar6,0x10);
      if (bVar3) {
        *(ulong *)pcVar6 = uVar12 - 4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((uVar12 & 0x1fffffffc) == 4) {
      do {
        uVar12 = *(ulong *)pcVar6;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(pcVar6,0x10);
        if (bVar3) {
          *(ulong *)pcVar6 = uVar12 - 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (uVar12 - 1 == 0) {
        (**(code **)(*(long *)pcStack_90 + 8))();
      }
    }
  }
  puVar5[0x16] = puVar5[0x1b];
  plVar8 = (long *)(puVar5[0x1b] + 8);
  do {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar8,0x10);
    if (bVar3) {
      *plVar8 = *plVar8 + 4;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (((uint)*(undefined8 *)(puVar5[0x16] + 0x10) >> 1 & 1) == 0) {
    *(undefined1 *)(puVar5 + 0x36) = 0;
    lVar10 = puVar5[0x16];
    plVar8 = (long *)(lVar10 + 0x10);
    uVar11 = puVar5[3];
    do {
      lVar13 = *plVar8;
      if (lVar13 == 0) {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar8,0x10);
        if (bVar3) {
          *plVar8 = 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
        if (cVar2 == '\0') {
          pcStack_70 = (code *)0x0;
          pcStack_68 = (code *)puVar5;
          ppuStack_60 = (undefined **)uVar11;
          func_0x000109d1b588(lVar10 + 0x18,&pcStack_70);
          *(undefined8 *)(lVar10 + 0x10) = 0;
          return;
        }
      }
      else {
        ClearExclusiveLocal();
      }
    } while (((uint)lVar13 >> 1 & 1) == 0);
  }
  plVar8 = (long *)puVar5[0x16];
  if (((uint)*(undefined8 *)(puVar5[0x16] + 0x10) >> 5 & 1) != 0) {
    func_0x0001092af97c(plVar8 + 0x12);
LAB_10a04d2cc:
                    /* WARNING: Does not return */
    pcVar6 = (code *)SoftwareBreakpoint(1,0x10a04d2d0);
    (*pcVar6)();
  }
  if ((*(byte *)(plVar8 + 0x15) & 1) == 0) goto LAB_10a04d2cc;
  lVar10 = plVar8[0x14];
  lVar13 = plVar8[0x13];
  puVar5[0x2d] = plVar8[0x14];
  puVar5[0x2c] = lVar13;
  if (lVar10 != 0) {
    plVar9 = (long *)(lVar10 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar3) {
        *plVar9 = *plVar9 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  puVar1 = (ulong *)(plVar8 + 1);
  do {
    uVar12 = *puVar1;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
    if (bVar3) {
      *puVar1 = uVar12 - 4;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if ((uVar12 & 0x1fffffffc) == 4) {
    do {
      uVar12 = *puVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = uVar12 - 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (uVar12 - 1 == 0) {
      (**(code **)(*plVar8 + 8))();
    }
  }
  plVar8 = (long *)puVar5[0x1b];
  if (plVar8 != (long *)0x0) {
    puVar1 = (ulong *)(plVar8 + 1);
    do {
      uVar12 = *puVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = uVar12 - 4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((uVar12 & 0x1fffffffc) == 4) {
      do {
        uVar12 = *puVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = uVar12 - 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (uVar12 - 1 == 0) {
        (**(code **)(*plVar8 + 8))();
      }
    }
  }
  lVar10 = puVar5[0x2c];
  if (lVar10 != 0) {
    plVar8 = (long *)puVar5[0x35];
    lVar13 = *plVar8;
    if (*(long *)(lVar13 + 0x870) != 0) {
      lVar18 = plVar8[2];
      lVar14 = plVar8[1];
      puVar5[0xb] = plVar8[3];
      puVar5[10] = lVar18;
      puVar5[9] = lVar14;
      plVar8[2] = 0;
      plVar8[3] = 0;
      plVar8[1] = 0;
      FUN_10a04d600(puVar5 + 0xc,plVar8 + 4);
      FUN_10a04d600(puVar5 + 0x11,plVar8 + 9);
      puVar5[0x30] = lVar10;
      puVar5[0x31] = puVar5[0x2d];
      puVar5[0x2c] = 0;
      puVar5[0x2d] = 0;
      lVar10 = plVar8[0x10];
      puVar5[0x33] = plVar8[0x11];
      puVar5[0x32] = lVar10;
      plVar8[0x10] = 0;
      plVar8[0x11] = 0;
      puVar5[0x34] = lVar13;
      puVar5[0x17] = 0;
      puVar5[0x16] = 0;
      puVar5[0x19] = 0;
      puVar5[0x18] = 0;
      *(undefined4 *)(puVar5 + 0x1a) = 0x3f800000;
      FUN_10a04e1bc(puVar5 + 0x16,(long)(float)(ulong)puVar5[0xf]);
      for (plVar8 = (long *)puVar5[0xe]; plVar8 != (long *)0x0; plVar8 = (long *)*plVar8) {
        plVar16 = (long *)plVar8[5];
        plVar9 = plVar16;
        (**(code **)(*plVar16 + 0x48))();
        if (plVar9 == (long *)&DAT_110b20ce8) {
          pcVar6 = (code *)0x58;
          __Znwm();
          *(long *)(pcVar6 + 8) = 0;
          *(long *)(pcVar6 + 0x10) = 0;
          *(undefined ***)pcVar6 = &PTR_FUN_110b9d7a0;
          *(long *)(pcVar6 + 0x28) = 0;
          *(long *)(pcVar6 + 0x20) = 0;
          *(long *)(pcVar6 + 0x38) = 0;
          *(long *)(pcVar6 + 0x30) = 0;
          *(long *)(pcVar6 + 0x48) = 0;
          *(long *)(pcVar6 + 0x40) = 0;
          *(long *)(pcVar6 + 0x50) = 0;
          pcStack_90 = pcVar6 + 0x18;
          *(undefined ***)pcStack_90 = &PTR_FUN_110b9c730;
          pcStack_88 = pcVar6;
        }
        else {
          (**(code **)(*plVar16 + 0x48))();
          if (plVar16 != (long *)&DAT_110b9fdf8) {
            FUN_10a00946c(&UNK_10f634217);
            goto LAB_10a04d2cc;
          }
          FUN_10a04e6b0(&pcStack_70);
          pcStack_88 = pcStack_68;
          pcStack_90 = pcStack_70;
        }
        FUN_10a04e38c(puVar5 + 0x16,plVar8 + 2,plVar8 + 2,&pcStack_90);
        pcVar6 = pcStack_88;
        if (pcStack_88 != (code *)0x0) {
          pcVar17 = pcStack_88 + 8;
          do {
            lVar10 = *(long *)pcVar17;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(pcVar17,0x10);
            if (bVar3) {
              *(long *)pcVar17 = lVar10 + -1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (lVar10 == 0) {
            (**(code **)(*(long *)pcStack_88 + 0x10))(pcStack_88);
            __ZNSt3__119__shared_weak_count14__release_weakEv(pcVar6);
          }
        }
      }
      puVar5[0x1e] = 0;
      puVar5[0x1d] = 0;
      puVar5[0x1c] = 0;
      puVar5[0x1b] = 0;
      *(undefined4 *)(puVar5 + 0x1f) = 0x3f800000;
      FUN_10a04e818(puVar5 + 0x1b,(long)(float)(ulong)puVar5[0x14]);
      for (plVar8 = (long *)puVar5[0x13]; plVar8 != (long *)0x0; plVar8 = (long *)*plVar8) {
        plVar9 = (long *)plVar8[5];
        (**(code **)(*plVar9 + 0x48))();
        if (plVar9 != (long *)&DAT_110b20ce8) {
          FUN_10a00946c(&UNK_10f6341ef);
          goto LAB_10a04d2cc;
        }
        FUN_10a04ed24(&pcStack_70,puVar5[0x34]);
        FUN_10a04e9e8(puVar5 + 0x1b,plVar8 + 2,plVar8 + 2,&pcStack_70);
        pcVar6 = pcStack_68;
        if (pcStack_68 != (code *)0x0) {
          pcVar17 = pcStack_68 + 8;
          do {
            lVar10 = *(long *)pcVar17;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(pcVar17,0x10);
            if (bVar3) {
              *(long *)pcVar17 = lVar10 + -1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (lVar10 == 0) {
            (**(code **)(*(long *)pcStack_68 + 0x10))(pcStack_68);
            __ZNSt3__119__shared_weak_count14__release_weakEv(pcVar6);
          }
        }
      }
      lVar13 = puVar5[0x18];
      uVar11 = puVar5[0x34];
      puVar5[0x2b] = puVar5[0x31];
      puVar5[0x2a] = puVar5[0x30];
      puVar5[0x30] = 0;
      puVar5[0x31] = 0;
      lVar10 = puVar5[0x16];
      uVar12 = puVar5[0x17];
      puVar5[0x16] = 0;
      puVar5[0x17] = 0;
      puVar5[0x20] = lVar10;
      puVar5[0x21] = uVar12;
      puVar5[0x22] = lVar13;
      puVar5[0x23] = puVar5[0x19];
      *(undefined4 *)(puVar5 + 0x24) = *(undefined4 *)(puVar5 + 0x1a);
      if (puVar5[0x19] != 0) {
        uVar15 = *(ulong *)(lVar13 + 8);
        if ((uVar12 & uVar12 - 1) == 0) {
          uVar15 = uVar15 & uVar12 - 1;
        }
        else if (uVar12 <= uVar15) {
          uVar4 = 0;
          if (uVar12 != 0) {
            uVar4 = uVar15 / uVar12;
          }
          uVar15 = uVar15 - uVar4 * uVar12;
        }
        *(undefined8 **)(lVar10 + uVar15 * 8) = puVar5 + 0x22;
        puVar5[0x18] = 0;
        puVar5[0x19] = 0;
      }
      lVar13 = puVar5[0x1d];
      lVar10 = puVar5[0x1b];
      uVar12 = puVar5[0x1c];
      puVar5[0x1b] = 0;
      puVar5[0x1c] = 0;
      puVar5[0x25] = lVar10;
      puVar5[0x26] = uVar12;
      puVar5[0x27] = lVar13;
      puVar5[0x28] = puVar5[0x1e];
      *(undefined4 *)(puVar5 + 0x29) = *(undefined4 *)(puVar5 + 0x1f);
      if (puVar5[0x1e] != 0) {
        uVar15 = *(ulong *)(lVar13 + 8);
        if ((uVar12 & uVar12 - 1) == 0) {
          uVar15 = uVar15 & uVar12 - 1;
        }
        else if (uVar12 <= uVar15) {
          uVar4 = 0;
          if (uVar12 != 0) {
            uVar4 = uVar15 / uVar12;
          }
          uVar15 = uVar15 - uVar4 * uVar12;
        }
        *(undefined8 **)(lVar10 + uVar15 * 8) = puVar5 + 0x27;
        puVar5[0x1d] = 0;
        puVar5[0x1e] = 0;
      }
      FUN_10a04dd0c(puVar5 + 0x2e,uVar11,puVar5 + 0x2a,puVar5 + 0x20,puVar5 + 0x25,puVar5 + 0x32);
      FUN_10a06e1a8(puVar5 + 0x25);
      FUN_10a06e0c8(puVar5 + 0x20);
      plVar8 = (long *)puVar5[0x2b];
      if (plVar8 != (long *)0x0) {
        plVar9 = plVar8 + 1;
        do {
          lVar10 = *plVar9;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
          if (bVar3) {
            *plVar9 = lVar10 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar10 == 0) {
          (**(code **)(*plVar8 + 0x10))(plVar8);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar8);
        }
      }
      FUN_10a06e1a8(puVar5 + 0x1b);
      FUN_10a06e0c8(puVar5 + 0x16);
      FUN_10a04c67c(puVar5 + 2,puVar5 + 0x2e);
      plVar8 = (long *)puVar5[0x2f];
      if (plVar8 != (long *)0x0) {
        plVar9 = plVar8 + 1;
        do {
          lVar10 = *plVar9;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
          if (bVar3) {
            *plVar9 = lVar10 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar10 == 0) {
          (**(code **)(*plVar8 + 0x10))(plVar8);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar8);
        }
      }
      plVar8 = (long *)puVar5[0x33];
      if (plVar8 != (long *)0x0) {
        plVar9 = plVar8 + 1;
        do {
          lVar10 = *plVar9;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
          if (bVar3) {
            *plVar9 = lVar10 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar10 == 0) {
          (**(code **)(*plVar8 + 0x10))(plVar8);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar8);
        }
      }
      plVar8 = (long *)puVar5[0x31];
      if (plVar8 != (long *)0x0) {
        plVar9 = plVar8 + 1;
        do {
          lVar10 = *plVar9;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
          if (bVar3) {
            *plVar9 = lVar10 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar10 == 0) {
          (**(code **)(*plVar8 + 0x10))(plVar8);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar8);
        }
      }
      func_0x00010a04ef7c(puVar5 + 0x11);
      func_0x00010a04ef7c(puVar5 + 0xc);
      if (*(char *)((long)puVar5 + 0x5f) < '\0') {
        __ZdlPv(puVar5[9]);
      }
      goto LAB_10a04d240;
    }
  }
  FUN_10a04d66c(puVar5 + 2);
LAB_10a04d240:
  plVar8 = (long *)puVar5[0x2d];
  if (plVar8 != (long *)0x0) {
    plVar9 = plVar8 + 1;
    do {
      lVar10 = *plVar9;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar3) {
        *plVar9 = lVar10 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar10 == 0) {
      (**(code **)(*plVar8 + 0x10))(plVar8);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar8);
    }
  }
  func_0x000109d1a1d0(puVar5 + 2);
  __ZdlPv(puVar5);
  return;
LAB_10a04ca08:
  do {
    lVar14 = *plVar8;
    if (lVar14 == 0) {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar3) {
        *plVar8 = 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
      if (cVar2 == '\0') {
        lVar13 = lVar10 + 0x18;
        pcStack_70 = FUN_10a04d8fc;
        ppuStack_60 = &PTR_PTR_1132fed68;
        pcStack_68 = pcVar17;
        func_0x000109d1b588(lVar13,&pcStack_70);
        *(undefined8 *)(lVar10 + 0x10) = 0;
        *(long *)(pcStack_80 + 0x20) = lVar13;
        puVar5[0x1b] = pcStack_90;
        goto LAB_10a04cc44;
      }
    }
    else {
      ClearExclusiveLocal();
    }
  } while (((uint)lVar14 >> 1 & 1) == 0);
  *(long *)(pcStack_80 + 0x20) = 0;
  lVar10 = *(long *)(pcVar6 + 0xc0);
  FUN_109d1857c();
  func_0x000109d1b350(lVar10,lVar13);
  plVar8 = *(long **)(pcVar6 + 0xb8);
  *(long *)(pcVar6 + 0xb8) = 0;
  if (plVar8 != (long *)0x0) {
    puVar1 = (ulong *)(plVar8 + 1);
    do {
      uVar12 = *puVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = uVar12 - 4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((uVar12 & 0x1fffffffc) == 4) {
      (**(code **)(*plVar8 + 0x10))(plVar8);
      do {
        uVar12 = *puVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = uVar12 - 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (uVar12 - 1 == 0) {
        (**(code **)(*plVar8 + 8))(plVar8);
      }
    }
  }
  lVar13 = *(long *)pcVar17;
  plVar8 = (long *)(lVar13 + 0x10);
  lVar10 = *(long *)(pcStack_80 + 0x18);
  while (lVar14 = *plVar8, lVar14 != 0) {
    ClearExclusiveLocal();
LAB_10a04caec:
    if (((uint)lVar14 >> 1 & 1) != 0) goto LAB_10a04cc3c;
  }
  cVar2 = '\x01';
  bVar3 = (bool)ExclusiveMonitorPass(plVar8,0x10);
  if (bVar3) {
    *plVar8 = 1;
    cVar2 = ExclusiveMonitorsStatus();
  }
  if (cVar2 != '\0') goto LAB_10a04caec;
  pcStack_70 = FUN_10a04d754;
  ppuStack_60 = &PTR_PTR_1132fed68;
  pcStack_68 = pcVar17;
  FUN_109d1b624(lVar13 + 0x18,&pcStack_70,lVar10);
  *(undefined8 *)(lVar13 + 0x10) = 0;
  *(long *)(pcStack_80 + 0x18) = 0;
  plVar8 = *(long **)pcVar17;
  *(long *)pcVar17 = 0;
  if (plVar8 != (long *)0x0) {
    puVar1 = (ulong *)(plVar8 + 1);
    do {
      uVar12 = *puVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = uVar12 - 4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((uVar12 & 0x1fffffffc) == 4) {
      do {
        uVar12 = *puVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = uVar12 - 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (uVar12 - 1 == 0) {
        (**(code **)(*plVar8 + 8))();
      }
    }
  }
  lVar10 = *(long *)(pcVar6 + 0xc0);
  *(long *)(pcVar6 + 0xc0) = 0;
  if (lVar10 != 0) {
    func_0x0001092b4274(pcVar6 + 0xc0);
  }
LAB_10a04cc3c:
  puVar5[0x1b] = pcStack_90;
LAB_10a04cc44:
  pcStack_90 = (code *)0x0;
  goto LAB_10a04cc48;
}



/* Entry: 10a04d454; end: 10a04d4f3;  */

undefined8 * FUN_10a04d454(undefined8 *param_1)

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
  *puVar1 = &PTR_FUN_110b9d730;
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



/* Entry: 10a04d4f4; end: 10a04d5ff;  */

undefined8 * FUN_10a04d4f4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110b9d730;
  if (*(char *)(param_1 + 0x15) == '\x01') {
    func_0x00010a04d5a8(param_1 + 0x13);
  }
  *param_1 = &PTR_DAT_110ae8be8;
  __ZNSt13exception_ptrD1Ev(param_1 + 0x12);
  *param_1 = &PTR_DAT_110ae8c08;
  return param_1;
}



/* Entry: 10a04d600; end: 10a04d66b;  */

void FUN_10a04d600(long *param_1,long *param_2)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  
  lVar2 = *param_2;
  *param_2 = 0;
  *param_1 = lVar2;
  lVar4 = param_2[2];
  lVar3 = param_2[1];
  param_1[2] = param_2[2];
  param_1[1] = lVar3;
  param_2[1] = 0;
  lVar3 = param_2[3];
  param_1[3] = lVar3;
  *(int *)(param_1 + 4) = (int)param_2[4];
  if (lVar3 != 0) {
    uVar5 = *(ulong *)(lVar4 + 8);
    uVar6 = param_1[1];
    if ((uVar6 & uVar6 - 1) == 0) {
      uVar5 = uVar6 - 1 & uVar5;
    }
    else if (uVar6 <= uVar5) {
      uVar1 = 0;
      if (uVar6 != 0) {
        uVar1 = uVar5 / uVar6;
      }
      uVar5 = uVar5 - uVar1 * uVar6;
    }
    *(long **)(lVar2 + uVar5 * 8) = param_1 + 2;
    param_2[2] = 0;
    param_2[3] = 0;
  }
  return;
}



/* Entry: 10a04d66c; end: 10a04d753;  */

void FUN_10a04d66c(long param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  ulong uVar5;
  long lVar6;
  long *plVar7;
  long lVar8;
  
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
          func_0x00010a04d5a8(lVar8 + 0x98);
        }
        *(undefined8 *)(lVar8 + 0x98) = 0;
        *(undefined8 *)(lVar8 + 0xa0) = 0;
        *(undefined1 *)(lVar8 + 0xa8) = 1;
        *(undefined8 *)(lVar8 + 0x10) = 2;
        FUN_109d1b4dc(lVar8 + 0x18);
        goto LAB_10a04d6ec;
      }
    }
    else {
      ClearExclusiveLocal();
    }
    if (((uint)lVar6 >> 1 & 1) != 0) {
LAB_10a04d6ec:
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



/* Entry: 10a04d754; end: 10a04d8fb;  */

void FUN_10a04d754(long *param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  long *plVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  long *plVar9;
  code *pcStack_40;
  long *plStack_38;
  undefined **ppuStack_30;
  
  __ZNSt3__15mutex4lockEv(param_1 + 5);
  pcStack_40 = FUN_10a04d8fc;
  ppuStack_30 = &PTR_PTR_1132fed68;
  plStack_38 = param_1;
  func_0x0001092ba560(param_1 + 1,param_1 + 4,&pcStack_40);
  lVar8 = param_1[2];
  if (((uint)*(undefined8 *)(*param_1 + 0x10) >> 5 & 1) == 0) {
    func_0x0001092af8bc(param_1);
    lVar6 = *param_1;
    if ((*(byte *)(lVar6 + 0xa8) & 1) == 0) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x10a04d8f8);
      (*pcVar4)();
    }
    plVar9 = *(long **)(lVar6 + 0xa0);
    pcVar4 = *(code **)(lVar6 + 0x98);
    *(undefined8 *)(lVar6 + 0x98) = 0;
    *(undefined8 *)(lVar6 + 0xa0) = 0;
    plVar5 = (long *)*param_1;
    *param_1 = 0;
    if (plVar5 != (long *)0x0) {
      puVar1 = (ulong *)(plVar5 + 1);
      do {
        uVar7 = *puVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = uVar7 - 4;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if ((uVar7 & 0x1fffffffc) == 4) {
        do {
          uVar7 = *puVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar3) {
            *puVar1 = uVar7 - 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (uVar7 - 1 == 0) {
          (**(code **)(*plVar5 + 8))();
        }
      }
    }
    pcStack_40 = pcVar4;
    plStack_38 = plVar9;
    FUN_10a04c514(lVar8,&pcStack_40);
    plVar5 = plStack_38;
    if (plStack_38 != (long *)0x0) {
      plVar9 = plStack_38 + 1;
      do {
        lVar8 = *plVar9;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
        if (bVar3) {
          *plVar9 = lVar8 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar8 == 0) {
        (**(code **)(*plStack_38 + 0x10))(plStack_38);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
      }
    }
  }
  else {
    __ZNSt13exception_ptrC1ERKS_(&pcStack_40,*param_1 + 0x90);
    func_0x000109d1b350(lVar8,&pcStack_40);
    __ZNSt13exception_ptrD1Ev(&pcStack_40);
    plVar5 = (long *)*param_1;
    *param_1 = 0;
    if (plVar5 != (long *)0x0) {
      puVar1 = (ulong *)(plVar5 + 1);
      do {
        uVar7 = *puVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = uVar7 - 4;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if ((uVar7 & 0x1fffffffc) == 4) {
        do {
          uVar7 = *puVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar3) {
            *puVar1 = uVar7 - 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (uVar7 - 1 == 0) {
          (**(code **)(*plVar5 + 8))();
        }
      }
    }
  }
  FUN_10a04dc9c(param_1,param_1 + 3);
  return;
}



/* Entry: 10a04d8fc; end: 10a04d9db;  */

void FUN_10a04d8fc(long param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  ulong uVar5;
  undefined8 uVar6;
  long *plVar7;
  code *pcStack_48;
  long lStack_40;
  undefined **ppuStack_38;
  
  __ZNSt3__15mutex4lockEv(param_1 + 0x28);
  pcStack_48 = FUN_10a04d754;
  ppuStack_38 = &PTR_PTR_1132fed68;
  lVar4 = param_1;
  lStack_40 = param_1;
  func_0x0001098adf90(param_1,param_1 + 0x18,&pcStack_48);
  uVar6 = *(undefined8 *)(param_1 + 0x10);
  FUN_109d1857c();
  func_0x000109d1b350(uVar6,lVar4);
  plVar7 = *(long **)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = 0;
  if (plVar7 != (long *)0x0) {
    puVar1 = (ulong *)(plVar7 + 1);
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
      (**(code **)(*plVar7 + 0x10))(plVar7);
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
        (**(code **)(*plVar7 + 8))(plVar7);
      }
    }
  }
  FUN_10a04dc9c(param_1,param_1 + 0x20);
  return;
}



/* Entry: 10a04d9dc; end: 10a04da4f;  */

long * FUN_10a04d9dc(long *param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  ulong uVar5;
  
  if (param_1[1] != 0) {
    func_0x0001092b4274();
  }
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



/* Entry: 10a04da50; end: 10a04dc9b;  */

undefined8 * FUN_10a04da50(undefined8 *param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  ulong uVar4;
  long *plVar5;
  
  *param_1 = &PTR_FUN_110b9d768;
  __ZNSt3__15mutexD1Ev(param_1 + 0x1b);
  if (param_1[0x18] != 0) {
    func_0x0001092b4274();
  }
  plVar5 = (long *)param_1[0x17];
  if (plVar5 != (long *)0x0) {
    puVar1 = (ulong *)(plVar5 + 1);
    do {
      uVar4 = *puVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = uVar4 - 4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((uVar4 & 0x1fffffffc) == 4) {
      (**(code **)(*plVar5 + 0x10))(plVar5);
      do {
        uVar4 = *puVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = uVar4 - 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (uVar4 - 1 == 0) {
        (**(code **)(*plVar5 + 8))(plVar5);
      }
    }
  }
  plVar5 = (long *)param_1[0x16];
  if (plVar5 != (long *)0x0) {
    puVar1 = (ulong *)(plVar5 + 1);
    do {
      uVar4 = *puVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = uVar4 - 4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((uVar4 & 0x1fffffffc) == 4) {
      do {
        uVar4 = *puVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = uVar4 - 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (uVar4 - 1 == 0) {
        (**(code **)(*plVar5 + 8))();
      }
    }
  }
  *param_1 = &PTR_FUN_110b9d678;
  if (*(char *)(param_1 + 0x15) == '\x01') {
    func_0x00010a06e004(param_1 + 0x13);
  }
  *param_1 = &PTR_DAT_110ae8be8;
  __ZNSt13exception_ptrD1Ev(param_1 + 0x12);
  *param_1 = &PTR_DAT_110ae8c08;
  return param_1;
}



/* Entry: 10a04dc9c; end: 10a04dd0b;  */

void FUN_10a04dc9c(long param_1,undefined8 *param_2)

{
  long lVar1;
  long lStack_28;
  
  *param_2 = 0;
  if ((*(long *)(param_1 + 0x18) == 0) && (*(long *)(param_1 + 0x20) == 0)) {
    lVar1 = *(long *)(param_1 + 0x10);
    *(undefined8 *)(param_1 + 0x10) = 0;
    __ZNSt3__15mutex6unlockEv(param_1 + 0x28);
    lStack_28 = 0;
    if (lVar1 != 0) {
      func_0x0001092b4274(&lStack_28,lVar1);
      if (lStack_28 != 0) {
        func_0x0001092b4274(&lStack_28);
      }
    }
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd478. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__15mutex6unlockEv_110346788)(param_1 + 0x28);
  return;
}



/* Entry: 10a04dd0c; end: 10a04e1bb;  */

/* WARNING: Removing unreachable block (ram,0x00010a04e018) */
/* WARNING: Removing unreachable block (ram,0x00010a04e01c) */
/* WARNING: Removing unreachable block (ram,0x00010a04e024) */
/* WARNING: Removing unreachable block (ram,0x00010a04e02c) */
/* WARNING: Removing unreachable block (ram,0x00010a04e030) */

void FUN_10a04dd0c(long *param_1,undefined8 param_2,undefined8 *param_3,long param_4,long param_5,
                  undefined8 *param_6)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  ulong uVar4;
  code *pcVar5;
  undefined8 *puVar6;
  long *plVar7;
  long lVar8;
  ulong uVar9;
  long *plVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  long lStack_110;
  ulong uStack_108;
  long lStack_100;
  long lStack_f8;
  undefined4 uStack_f0;
  long lStack_e8;
  ulong uStack_e0;
  long lStack_d8;
  long lStack_d0;
  undefined4 uStack_c8;
  undefined8 uStack_c0;
  long *plStack_b8;
  long lStack_b0;
  ulong uStack_a8;
  long lStack_a0;
  long lStack_98;
  undefined4 uStack_90;
  long lStack_88;
  long *plStack_80;
  long lStack_78;
  long lStack_70;
  undefined4 uStack_68;
  undefined8 uStack_60;
  long *plStack_58;
  
  plVar7 = (long *)(param_4 + 0x10);
  do {
    plVar7 = (long *)*plVar7;
    if (plVar7 == (long *)0x0) {
      plVar7 = (long *)(param_5 + 0x10);
      goto LAB_10a04dd8c;
    }
  } while (plVar7[5] != 0);
  __ZNSt3__1plIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_12basic_stringIT_T0_T1_EEPKS6_RKS9_
            (&lStack_b0,&UNK_10f63423e,plVar7 + 2);
  FUN_10a012db0(&lStack_88,&lStack_b0,&UNK_10f594713);
  FUN_10a0029c0(&lStack_88);
  goto LAB_10a04ddcc;
  while (plVar7[5] != 0) {
LAB_10a04dd8c:
    plVar7 = (long *)*plVar7;
    if (plVar7 == (long *)0x0) {
      puVar6 = (undefined8 *)0x148;
      __Znwm();
      plVar7 = (long *)param_3[1];
      uVar11 = *param_3;
      *param_3 = 0;
      param_3[1] = 0;
      FUN_10a06e05c(&lStack_e8,param_4);
      FUN_10a06e13c(&lStack_110,param_5);
      plStack_80 = (long *)uStack_e0;
      lStack_88 = lStack_e8;
      uStack_a8 = uStack_108;
      lStack_b0 = lStack_110;
      uVar13 = param_6[1];
      uVar12 = *param_6;
      *param_6 = 0;
      param_6[1] = 0;
      uStack_c0 = 0;
      plStack_b8 = (long *)0x0;
      lStack_e8 = 0;
      uStack_e0 = 0;
      lStack_78 = lStack_d8;
      lStack_70 = lStack_d0;
      uStack_68 = uStack_c8;
      if (lStack_d0 != 0) {
        uVar9 = *(ulong *)(lStack_d8 + 8);
        if (((ulong)plStack_80 & (long)plStack_80 - 1U) == 0) {
          uVar9 = uVar9 & (long)plStack_80 - 1U;
        }
        else if (plStack_80 <= uVar9) {
          uVar4 = 0;
          if (plStack_80 != (long *)0x0) {
            uVar4 = uVar9 / (ulong)plStack_80;
          }
          uVar9 = uVar9 - uVar4 * (long)plStack_80;
        }
        *(long **)(lStack_88 + uVar9 * 8) = &lStack_78;
        lStack_d8 = 0;
        lStack_d0 = 0;
      }
      lStack_110 = 0;
      uStack_108 = 0;
      lStack_a0 = lStack_100;
      lStack_98 = lStack_f8;
      uStack_90 = uStack_f0;
      if (lStack_f8 != 0) {
        uVar9 = *(ulong *)(lStack_100 + 8);
        if ((uStack_a8 & uStack_a8 - 1) == 0) {
          uVar9 = uVar9 & uStack_a8 - 1;
        }
        else if (uStack_a8 <= uVar9) {
          uVar4 = 0;
          if (uStack_a8 != 0) {
            uVar4 = uVar9 / uStack_a8;
          }
          uVar9 = uVar9 - uVar4 * uStack_a8;
        }
        *(long **)(lStack_b0 + uVar9 * 8) = &lStack_a0;
        lStack_100 = 0;
        lStack_f8 = 0;
      }
      uStack_60 = uVar11;
      plStack_58 = plVar7;
      FUN_10a10de24(puVar6,param_2,&uStack_60,&lStack_88,&lStack_b0);
      FUN_10a06e1a8(&lStack_b0);
      FUN_10a06e0c8(&lStack_88);
      plVar7 = plStack_58;
      if (plStack_58 != (long *)0x0) {
        plVar10 = plStack_58 + 1;
        do {
          lVar8 = *plVar10;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar10,0x10);
          if (bVar3) {
            *plVar10 = lVar8 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar8 == 0) {
          (**(code **)(*plStack_58 + 0x10))(plStack_58);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
        }
      }
      *puVar6 = &PTR_FUN_110b9b968;
      puVar6[0x28] = uVar13;
      puVar6[0x27] = uVar12;
      *param_1 = (long)puVar6;
      plVar7 = (long *)0x20;
      __Znwm();
      plVar10 = plVar7 + 1;
      *plVar10 = 0;
      *plVar7 = (long)&PTR_FUN_110b9d890;
      plVar7[2] = 0;
      plVar7[3] = (long)puVar6;
      param_1[1] = (long)plVar7;
      if (puVar6[4] == 0) {
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar10,0x10);
          if (bVar3) {
            *plVar10 = *plVar10 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        plVar1 = plVar7 + 2;
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar3) {
            *plVar1 = *plVar1 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        puVar6[3] = puVar6;
        puVar6[4] = plVar7;
      }
      else {
        if (*(long *)(puVar6[4] + 8) != -1) goto LAB_10a04e010;
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar10,0x10);
          if (bVar3) {
            *plVar10 = *plVar10 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        plVar1 = plVar7 + 2;
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar3) {
            *plVar1 = *plVar1 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        puVar6[3] = puVar6;
        puVar6[4] = plVar7;
        __ZNSt3__119__shared_weak_count14__release_weakEv();
      }
      do {
        lVar8 = *plVar10;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar10,0x10);
        if (bVar3) {
          *plVar10 = lVar8 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar8 == 0) {
        (**(code **)(*plVar7 + 0x10))(plVar7);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
      }
LAB_10a04e010:
      FUN_10a06e1a8(&lStack_110);
      FUN_10a06e0c8(&lStack_e8);
      plVar7 = plStack_b8;
      if (plStack_b8 != (long *)0x0) {
        plVar10 = plStack_b8 + 1;
        do {
          lVar8 = *plVar10;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar10,0x10);
          if (bVar3) {
            *plVar10 = lVar8 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar8 == 0) {
          (**(code **)(*plStack_b8 + 0x10))(plStack_b8);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
        }
      }
      lStack_88 = *param_1;
      plVar7 = (long *)param_1[1];
      if (plVar7 != (long *)0x0) {
        plVar10 = plVar7 + 1;
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar10,0x10);
          if (bVar3) {
            *plVar10 = *plVar10 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      plStack_80 = plVar7;
      FUN_10a10dfa4(lStack_88,&lStack_88);
      if (plVar7 != (long *)0x0) {
        plVar10 = plVar7 + 1;
        do {
          lVar8 = *plVar10;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar10,0x10);
          if (bVar3) {
            *plVar10 = lVar8 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar8 == 0) {
          (**(code **)(*plVar7 + 0x10))(plVar7);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
        }
      }
      return;
    }
  }
  __ZNSt3__1plIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_12basic_stringIT_T0_T1_EEPKS6_RKS9_
            (&lStack_b0,&UNK_10f634254,plVar7 + 2);
  FUN_10a012db0(&lStack_88,&lStack_b0,&UNK_10f594713);
  FUN_10a0029c0(&lStack_88);
LAB_10a04ddcc:
                    /* WARNING: Does not return */
  pcVar5 = (code *)SoftwareBreakpoint(1,0x10a04ddd0);
  (*pcVar5)();
}



/* Entry: 10a04e1bc; end: 10a04e38b;  */

void FUN_10a04e1bc(long *param_1,long *param_2,long *param_3,long *param_4)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  ulong uVar4;
  long *plVar5;
  long *plVar6;
  ulong uVar7;
  long *plVar8;
  long *plVar9;
  long *plVar10;
  long *unaff_x25;
  
  plVar3 = param_1;
  plVar8 = param_2;
  if ((long)param_2 - 1U == 0) {
    param_2 = (long *)0x2;
  }
  else if (((ulong)param_2 & (long)param_2 - 1U) != 0) {
    __ZNSt3__112__next_primeEm();
    plVar3 = param_2;
  }
  plVar10 = (long *)param_1[1];
  if (plVar10 > param_2 || param_2 == plVar10) {
    if (plVar10 <= param_2) {
      return;
    }
    plVar3 = (long *)(long)((float)(ulong)param_1[3] / *(float *)(param_1 + 4));
    if ((plVar10 < (long *)0x3) || (((ulong)plVar10 & (long)plVar10 - 1U) != 0)) {
      __ZNSt3__112__next_primeEm();
    }
    else if ((long *)0x1 < plVar3) {
      plVar3 = (long *)(1L << (-LZCOUNT((long)plVar3 + -1) & 0x3fU));
    }
    if (param_2 <= plVar3) {
      param_2 = plVar3;
    }
    if (plVar10 <= param_2) {
      return;
    }
    if (param_2 == (long *)0x0) {
      lVar1 = *param_1;
      *param_1 = 0;
      if (lVar1 != 0) {
        __ZdlPv();
      }
      param_1[1] = 0;
      return;
    }
  }
  if ((ulong)param_2 >> 0x3d == 0) {
    lVar1 = (long)param_2 << 3;
    __Znwm();
    lVar2 = *param_1;
    *param_1 = lVar1;
    if (lVar2 != 0) {
      __ZdlPv();
    }
    plVar3 = (long *)0x0;
    param_1[1] = (long)param_2;
    do {
      *(undefined8 *)(*param_1 + (long)plVar3 * 8) = 0;
      plVar3 = (long *)((long)plVar3 + 1);
    } while (param_2 != plVar3);
    plVar3 = (long *)param_1[2];
    if (plVar3 != (long *)0x0) {
      plVar8 = (long *)plVar3[1];
      uVar4 = (long)param_2 - 1;
      if (((ulong)param_2 & uVar4) == 0) {
        plVar8 = (long *)((ulong)plVar8 & uVar4);
      }
      else if (param_2 <= plVar8) {
        uVar7 = 0;
        if (param_2 != (long *)0x0) {
          uVar7 = (ulong)plVar8 / (ulong)param_2;
        }
        plVar8 = (long *)((long)plVar8 - uVar7 * (long)param_2);
      }
      *(long **)(*param_1 + (long)plVar8 * 8) = param_1 + 2;
      plVar10 = (long *)*plVar3;
      while (plVar10 != (long *)0x0) {
        plVar9 = (long *)plVar10[1];
        if (((ulong)param_2 & uVar4) == 0) {
          plVar9 = (long *)((ulong)plVar9 & uVar4);
        }
        else if (param_2 <= plVar9) {
          uVar7 = 0;
          if (param_2 != (long *)0x0) {
            uVar7 = (ulong)plVar9 / (ulong)param_2;
          }
          plVar9 = (long *)((long)plVar9 - uVar7 * (long)param_2);
        }
        plVar5 = plVar10;
        if (plVar9 != plVar8) {
          lVar1 = *param_1;
          if (*(long *)(lVar1 + (long)plVar9 * 8) == 0) {
            *(long **)(lVar1 + (long)plVar9 * 8) = plVar3;
            plVar8 = plVar9;
          }
          else {
            *plVar3 = *plVar10;
            *plVar10 = **(undefined8 **)(lVar1 + (long)plVar9 * 8);
            **(long **)(lVar1 + (long)plVar9 * 8) = (long)plVar10;
            plVar5 = plVar3;
          }
        }
        plVar3 = plVar5;
        plVar10 = (long *)*plVar5;
      }
    }
    return;
  }
  func_0x000109ffded8();
  plVar10 = plVar3;
  func_0x000107c2b05c();
  plVar9 = (long *)plVar3[1];
  if (plVar9 != (long *)0x0) {
    uVar4 = (long)plVar9 - 1;
    if (((ulong)plVar9 & uVar4) == 0) {
      unaff_x25 = (long *)(uVar4 & (ulong)plVar10);
    }
    else {
      unaff_x25 = plVar10;
      if (plVar9 <= plVar10) {
        uVar7 = 0;
        if (plVar9 != (long *)0x0) {
          uVar7 = (ulong)plVar10 / (ulong)plVar9;
        }
        unaff_x25 = (long *)((long)plVar10 - uVar7 * (long)plVar9);
      }
    }
    plVar5 = *(long **)(*plVar3 + (long)unaff_x25 * 8);
    if (plVar5 != (long *)0x0) {
      for (plVar5 = (long *)*plVar5; plVar5 != (long *)0x0; plVar5 = (long *)*plVar5) {
        plVar6 = (long *)plVar5[1];
        if (plVar6 == plVar10) {
          plVar6 = plVar3;
          func_0x000107c2b068(plVar3,plVar5 + 2,plVar8);
          if (((ulong)plVar6 & 1) != 0) {
            return;
          }
        }
        else {
          if (((ulong)plVar9 & uVar4) == 0) {
            plVar6 = (long *)((ulong)plVar6 & uVar4);
          }
          else if (plVar9 <= plVar6) {
            uVar7 = 0;
            if (plVar9 != (long *)0x0) {
              uVar7 = (ulong)plVar6 / (ulong)plVar9;
            }
            plVar6 = (long *)((long)plVar6 - uVar7 * (long)plVar9);
          }
          if (plVar6 != unaff_x25) break;
        }
      }
    }
  }
  plVar8 = (long *)0x38;
  __Znwm();
  *plVar8 = 0;
  plVar8[1] = (long)plVar10;
  if (*(char *)((long)param_3 + 0x17) < '\0') {
    func_0x000107c3192c(plVar8 + 2,*param_3,param_3[1]);
  }
  else {
    lVar1 = *param_3;
    plVar8[3] = param_3[1];
    plVar8[2] = lVar1;
    plVar8[4] = param_3[2];
  }
  lVar1 = *param_4;
  plVar8[6] = param_4[1];
  plVar8[5] = lVar1;
  *param_4 = 0;
  param_4[1] = 0;
  if ((plVar9 == (long *)0x0) || (*(float *)(plVar3 + 4) * (float)plVar9 < (float)(plVar3[3] + 1)))
  {
    uVar4 = 1;
    if ((long *)0x2 < plVar9) {
      uVar4 = (ulong)(((ulong)plVar9 & (long)plVar9 - 1U) != 0);
    }
    uVar4 = uVar4 | (long)plVar9 << 1;
    uVar7 = (ulong)((float)(plVar3[3] + 1) / *(float *)(plVar3 + 4));
    if (uVar4 <= uVar7) {
      uVar4 = uVar7;
    }
    FUN_10a04e1bc(plVar3,uVar4);
    plVar9 = (long *)plVar3[1];
    if (((ulong)plVar9 & (long)plVar9 - 1U) == 0) {
      unaff_x25 = (long *)((long)plVar9 - 1U & (ulong)plVar10);
    }
    else {
      unaff_x25 = plVar10;
      if (plVar9 <= plVar10) {
        uVar4 = 0;
        if (plVar9 != (long *)0x0) {
          uVar4 = (ulong)plVar10 / (ulong)plVar9;
        }
        unaff_x25 = (long *)((long)plVar10 - uVar4 * (long)plVar9);
      }
    }
  }
  lVar1 = *plVar3;
  plVar10 = *(long **)(lVar1 + (long)unaff_x25 * 8);
  if (plVar10 == (long *)0x0) {
    plVar10 = plVar3 + 2;
    *plVar8 = *plVar10;
    *plVar10 = (long)plVar8;
    *(long **)(lVar1 + (long)unaff_x25 * 8) = plVar10;
    if (*plVar8 != 0) {
      plVar10 = *(long **)(*plVar8 + 8);
      if (((ulong)plVar9 & (long)plVar9 - 1U) == 0) {
        plVar10 = (long *)((ulong)plVar10 & (long)plVar9 - 1U);
      }
      else if (plVar9 <= plVar10) {
        uVar4 = 0;
        if (plVar9 != (long *)0x0) {
          uVar4 = (ulong)plVar10 / (ulong)plVar9;
        }
        plVar10 = (long *)((long)plVar10 - uVar4 * (long)plVar9);
      }
      *(long **)(*plVar3 + (long)plVar10 * 8) = plVar8;
    }
  }
  else {
    *plVar8 = *plVar10;
    *plVar10 = (long)plVar8;
  }
  plVar3[3] = plVar3[3] + 1;
  return;
}



/* Entry: 10a04e38c; end: 10a04e5eb;  */

void FUN_10a04e38c(long *param_1,undefined8 param_2,long *param_3,long *param_4)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  ulong uVar4;
  long *plVar5;
  long *plVar6;
  long *unaff_x25;
  ulong uVar7;
  
  plVar5 = param_1;
  func_0x000107c2b05c();
  plVar6 = (long *)param_1[1];
  if (plVar6 != (long *)0x0) {
    uVar7 = (long)plVar6 - 1;
    if (((ulong)plVar6 & uVar7) == 0) {
      unaff_x25 = (long *)(uVar7 & (ulong)plVar5);
    }
    else {
      unaff_x25 = plVar5;
      if (plVar6 <= plVar5) {
        uVar4 = 0;
        if (plVar6 != (long *)0x0) {
          uVar4 = (ulong)plVar5 / (ulong)plVar6;
        }
        unaff_x25 = (long *)((long)plVar5 - uVar4 * (long)plVar6);
      }
    }
    plVar1 = *(long **)(*param_1 + (long)unaff_x25 * 8);
    if (plVar1 != (long *)0x0) {
      for (plVar1 = (long *)*plVar1; plVar1 != (long *)0x0; plVar1 = (long *)*plVar1) {
        plVar2 = (long *)plVar1[1];
        if (plVar2 == plVar5) {
          plVar2 = param_1;
          func_0x000107c2b068(param_1,plVar1 + 2,param_2);
          if (((ulong)plVar2 & 1) != 0) {
            return;
          }
        }
        else {
          if (((ulong)plVar6 & uVar7) == 0) {
            plVar2 = (long *)((ulong)plVar2 & uVar7);
          }
          else if (plVar6 <= plVar2) {
            uVar4 = 0;
            if (plVar6 != (long *)0x0) {
              uVar4 = (ulong)plVar2 / (ulong)plVar6;
            }
            plVar2 = (long *)((long)plVar2 - uVar4 * (long)plVar6);
          }
          if (plVar2 != unaff_x25) break;
        }
      }
    }
  }
  plVar1 = (long *)0x38;
  __Znwm();
  *plVar1 = 0;
  plVar1[1] = (long)plVar5;
  if (*(char *)((long)param_3 + 0x17) < '\0') {
    func_0x000107c3192c(plVar1 + 2,*param_3,param_3[1]);
  }
  else {
    lVar3 = *param_3;
    plVar1[3] = param_3[1];
    plVar1[2] = lVar3;
    plVar1[4] = param_3[2];
  }
  lVar3 = *param_4;
  plVar1[6] = param_4[1];
  plVar1[5] = lVar3;
  *param_4 = 0;
  param_4[1] = 0;
  if ((plVar6 == (long *)0x0) || (*(float *)(param_1 + 4) * (float)plVar6 < (float)(param_1[3] + 1))
     ) {
    uVar7 = 1;
    if ((long *)0x2 < plVar6) {
      uVar7 = (ulong)(((ulong)plVar6 & (long)plVar6 - 1U) != 0);
    }
    uVar7 = uVar7 | (long)plVar6 << 1;
    uVar4 = (ulong)((float)(param_1[3] + 1) / *(float *)(param_1 + 4));
    if (uVar7 <= uVar4) {
      uVar7 = uVar4;
    }
    FUN_10a04e1bc(param_1,uVar7);
    plVar6 = (long *)param_1[1];
    if (((ulong)plVar6 & (long)plVar6 - 1U) == 0) {
      unaff_x25 = (long *)((long)plVar6 - 1U & (ulong)plVar5);
    }
    else {
      unaff_x25 = plVar5;
      if (plVar6 <= plVar5) {
        uVar7 = 0;
        if (plVar6 != (long *)0x0) {
          uVar7 = (ulong)plVar5 / (ulong)plVar6;
        }
        unaff_x25 = (long *)((long)plVar5 - uVar7 * (long)plVar6);
      }
    }
  }
  lVar3 = *param_1;
  plVar5 = *(long **)(lVar3 + (long)unaff_x25 * 8);
  if (plVar5 == (long *)0x0) {
    plVar5 = param_1 + 2;
    *plVar1 = *plVar5;
    *plVar5 = (long)plVar1;
    *(long **)(lVar3 + (long)unaff_x25 * 8) = plVar5;
    if (*plVar1 != 0) {
      plVar5 = *(long **)(*plVar1 + 8);
      if (((ulong)plVar6 & (long)plVar6 - 1U) == 0) {
        plVar5 = (long *)((ulong)plVar5 & (long)plVar6 - 1U);
      }
      else if (plVar6 <= plVar5) {
        uVar7 = 0;
        if (plVar6 != (long *)0x0) {
          uVar7 = (ulong)plVar5 / (ulong)plVar6;
        }
        plVar5 = (long *)((long)plVar5 - uVar7 * (long)plVar6);
      }
      *(long **)(*param_1 + (long)plVar5 * 8) = plVar1;
    }
  }
  else {
    *plVar1 = *plVar5;
    *plVar5 = (long)plVar1;
  }
  param_1[3] = param_1[3] + 1;
  return;
}



/* Entry: 10a04e5ec; end: 10a04e66f;  */

void FUN_10a04e5ec(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
    if ((char)param_1[2] == '\x01') {
      func_0x00010a04e634(lVar1 + 0x10);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(lVar1);
    return;
  }
  return;
}



/* Entry: 10a04e670; end: 10a04e67f;  */

void FUN_10a04e670(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110b9d7a0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10a04e680; end: 10a04e69f;  */

void FUN_10a04e680(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110b9d7a0;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a04e6a0; end: 10a04e6af;  */

void FUN_10a04e6a0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010a04e6a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 10a04e6b0; end: 10a04e77f;  */

void FUN_10a04e6b0(undefined8 *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  long lVar7;
  
  plVar4 = (long *)0x98;
  __Znwm();
  plVar5 = plVar4 + 1;
  *plVar5 = 0;
  plVar4[2] = 0;
  *plVar4 = (long)&PTR_FUN_110b9d7f0;
  plVar6 = plVar4 + 3;
  *plVar6 = (long)&PTR_FUN_110ba77b8;
  plVar4[0xd] = 0;
  plVar4[0xc] = 0;
  plVar4[0xf] = 0;
  plVar4[0xe] = 0;
  plVar4[5] = 0;
  plVar4[4] = 0;
  plVar4[7] = 0;
  plVar4[6] = 0;
  plVar4[9] = 0;
  plVar4[8] = 0;
  plVar4[0xb] = 0;
  plVar4[10] = 0;
  plVar4[0x11] = 0;
  plVar4[0x10] = 0;
  plVar4[0x12] = 0;
  *(undefined1 *)(plVar4 + 0xf) = 0;
  plVar4[0xd] = 0;
  plVar4[0xe] = 0;
  *param_1 = plVar6;
  param_1[1] = plVar4;
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
  plVar4[0xb] = (long)plVar6;
  plVar4[0xc] = (long)plVar4;
  do {
    lVar7 = *plVar5;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
    if (bVar3) {
      *plVar5 = lVar7 + -1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (lVar7 != 0) {
    return;
  }
  (**(code **)(*plVar4 + 0x10))(plVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_count14__release_weakEv_110346648)(plVar4);
  return;
}



/* Entry: 10a04e780; end: 10a04e78f;  */

void FUN_10a04e780(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110b9d7f0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10a04e790; end: 10a04e7af;  */

void FUN_10a04e790(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110b9d7f0;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a04e7b0; end: 10a04e7bf;  */

void FUN_10a04e7b0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010a04e7b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 10a04e7c0; end: 10a04e817;  */

long FUN_10a04e7c0(long param_1)

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



/* Entry: 10a04e818; end: 10a04e9e7;  */

void FUN_10a04e818(long *param_1,long *param_2,long *param_3,long *param_4)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  ulong uVar4;
  long *plVar5;
  long *plVar6;
  ulong uVar7;
  long *plVar8;
  long *plVar9;
  long *plVar10;
  long *unaff_x25;
  
  plVar3 = param_1;
  plVar8 = param_2;
  if ((long)param_2 - 1U == 0) {
    param_2 = (long *)0x2;
  }
  else if (((ulong)param_2 & (long)param_2 - 1U) != 0) {
    __ZNSt3__112__next_primeEm();
    plVar3 = param_2;
  }
  plVar10 = (long *)param_1[1];
  if (plVar10 > param_2 || param_2 == plVar10) {
    if (plVar10 <= param_2) {
      return;
    }
    plVar3 = (long *)(long)((float)(ulong)param_1[3] / *(float *)(param_1 + 4));
    if ((plVar10 < (long *)0x3) || (((ulong)plVar10 & (long)plVar10 - 1U) != 0)) {
      __ZNSt3__112__next_primeEm();
    }
    else if ((long *)0x1 < plVar3) {
      plVar3 = (long *)(1L << (-LZCOUNT((long)plVar3 + -1) & 0x3fU));
    }
    if (param_2 <= plVar3) {
      param_2 = plVar3;
    }
    if (plVar10 <= param_2) {
      return;
    }
    if (param_2 == (long *)0x0) {
      lVar1 = *param_1;
      *param_1 = 0;
      if (lVar1 != 0) {
        __ZdlPv();
      }
      param_1[1] = 0;
      return;
    }
  }
  if ((ulong)param_2 >> 0x3d == 0) {
    lVar1 = (long)param_2 << 3;
    __Znwm();
    lVar2 = *param_1;
    *param_1 = lVar1;
    if (lVar2 != 0) {
      __ZdlPv();
    }
    plVar3 = (long *)0x0;
    param_1[1] = (long)param_2;
    do {
      *(undefined8 *)(*param_1 + (long)plVar3 * 8) = 0;
      plVar3 = (long *)((long)plVar3 + 1);
    } while (param_2 != plVar3);
    plVar3 = (long *)param_1[2];
    if (plVar3 != (long *)0x0) {
      plVar8 = (long *)plVar3[1];
      uVar4 = (long)param_2 - 1;
      if (((ulong)param_2 & uVar4) == 0) {
        plVar8 = (long *)((ulong)plVar8 & uVar4);
      }
      else if (param_2 <= plVar8) {
        uVar7 = 0;
        if (param_2 != (long *)0x0) {
          uVar7 = (ulong)plVar8 / (ulong)param_2;
        }
        plVar8 = (long *)((long)plVar8 - uVar7 * (long)param_2);
      }
      *(long **)(*param_1 + (long)plVar8 * 8) = param_1 + 2;
      plVar10 = (long *)*plVar3;
      while (plVar10 != (long *)0x0) {
        plVar9 = (long *)plVar10[1];
        if (((ulong)param_2 & uVar4) == 0) {
          plVar9 = (long *)((ulong)plVar9 & uVar4);
        }
        else if (param_2 <= plVar9) {
          uVar7 = 0;
          if (param_2 != (long *)0x0) {
            uVar7 = (ulong)plVar9 / (ulong)param_2;
          }
          plVar9 = (long *)((long)plVar9 - uVar7 * (long)param_2);
        }
        plVar5 = plVar10;
        if (plVar9 != plVar8) {
          lVar1 = *param_1;
          if (*(long *)(lVar1 + (long)plVar9 * 8) == 0) {
            *(long **)(lVar1 + (long)plVar9 * 8) = plVar3;
            plVar8 = plVar9;
          }
          else {
            *plVar3 = *plVar10;
            *plVar10 = **(undefined8 **)(lVar1 + (long)plVar9 * 8);
            **(long **)(lVar1 + (long)plVar9 * 8) = (long)plVar10;
            plVar5 = plVar3;
          }
        }
        plVar3 = plVar5;
        plVar10 = (long *)*plVar5;
      }
    }
    return;
  }
  func_0x000109ffded8();
  plVar10 = plVar3;
  func_0x000107c2b05c();
  plVar9 = (long *)plVar3[1];
  if (plVar9 != (long *)0x0) {
    uVar4 = (long)plVar9 - 1;
    if (((ulong)plVar9 & uVar4) == 0) {
      unaff_x25 = (long *)(uVar4 & (ulong)plVar10);
    }
    else {
      unaff_x25 = plVar10;
      if (plVar9 <= plVar10) {
        uVar7 = 0;
        if (plVar9 != (long *)0x0) {
          uVar7 = (ulong)plVar10 / (ulong)plVar9;
        }
        unaff_x25 = (long *)((long)plVar10 - uVar7 * (long)plVar9);
      }
    }
    plVar5 = *(long **)(*plVar3 + (long)unaff_x25 * 8);
    if (plVar5 != (long *)0x0) {
      for (plVar5 = (long *)*plVar5; plVar5 != (long *)0x0; plVar5 = (long *)*plVar5) {
        plVar6 = (long *)plVar5[1];
        if (plVar6 == plVar10) {
          plVar6 = plVar3;
          func_0x000107c2b068(plVar3,plVar5 + 2,plVar8);
          if (((ulong)plVar6 & 1) != 0) {
            return;
          }
        }
        else {
          if (((ulong)plVar9 & uVar4) == 0) {
            plVar6 = (long *)((ulong)plVar6 & uVar4);
          }
          else if (plVar9 <= plVar6) {
            uVar7 = 0;
            if (plVar9 != (long *)0x0) {
              uVar7 = (ulong)plVar6 / (ulong)plVar9;
            }
            plVar6 = (long *)((long)plVar6 - uVar7 * (long)plVar9);
          }
          if (plVar6 != unaff_x25) break;
        }
      }
    }
  }
  plVar8 = (long *)0x38;
  __Znwm();
  *plVar8 = 0;
  plVar8[1] = (long)plVar10;
  if (*(char *)((long)param_3 + 0x17) < '\0') {
    func_0x000107c3192c(plVar8 + 2,*param_3,param_3[1]);
  }
  else {
    lVar1 = *param_3;
    plVar8[3] = param_3[1];
    plVar8[2] = lVar1;
    plVar8[4] = param_3[2];
  }
  lVar1 = *param_4;
  plVar8[6] = param_4[1];
  plVar8[5] = lVar1;
  *param_4 = 0;
  param_4[1] = 0;
  if ((plVar9 == (long *)0x0) || (*(float *)(plVar3 + 4) * (float)plVar9 < (float)(plVar3[3] + 1)))
  {
    uVar4 = 1;
    if ((long *)0x2 < plVar9) {
      uVar4 = (ulong)(((ulong)plVar9 & (long)plVar9 - 1U) != 0);
    }
    uVar4 = uVar4 | (long)plVar9 << 1;
    uVar7 = (ulong)((float)(plVar3[3] + 1) / *(float *)(plVar3 + 4));
    if (uVar4 <= uVar7) {
      uVar4 = uVar7;
    }
    FUN_10a04e818(plVar3,uVar4);
    plVar9 = (long *)plVar3[1];
    if (((ulong)plVar9 & (long)plVar9 - 1U) == 0) {
      unaff_x25 = (long *)((long)plVar9 - 1U & (ulong)plVar10);
    }
    else {
      unaff_x25 = plVar10;
      if (plVar9 <= plVar10) {
        uVar4 = 0;
        if (plVar9 != (long *)0x0) {
          uVar4 = (ulong)plVar10 / (ulong)plVar9;
        }
        unaff_x25 = (long *)((long)plVar10 - uVar4 * (long)plVar9);
      }
    }
  }
  lVar1 = *plVar3;
  plVar10 = *(long **)(lVar1 + (long)unaff_x25 * 8);
  if (plVar10 == (long *)0x0) {
    plVar10 = plVar3 + 2;
    *plVar8 = *plVar10;
    *plVar10 = (long)plVar8;
    *(long **)(lVar1 + (long)unaff_x25 * 8) = plVar10;
    if (*plVar8 != 0) {
      plVar10 = *(long **)(*plVar8 + 8);
      if (((ulong)plVar9 & (long)plVar9 - 1U) == 0) {
        plVar10 = (long *)((ulong)plVar10 & (long)plVar9 - 1U);
      }
      else if (plVar9 <= plVar10) {
        uVar4 = 0;
        if (plVar9 != (long *)0x0) {
          uVar4 = (ulong)plVar10 / (ulong)plVar9;
        }
        plVar10 = (long *)((long)plVar10 - uVar4 * (long)plVar9);
      }
      *(long **)(*plVar3 + (long)plVar10 * 8) = plVar8;
    }
  }
  else {
    *plVar8 = *plVar10;
    *plVar10 = (long)plVar8;
  }
  plVar3[3] = plVar3[3] + 1;
  return;
}



/* Entry: 10a04e9e8; end: 10a04ec47;  */

void FUN_10a04e9e8(long *param_1,undefined8 param_2,long *param_3,long *param_4)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  ulong uVar4;
  long *plVar5;
  long *plVar6;
  long *unaff_x25;
  ulong uVar7;
  
  plVar5 = param_1;
  func_0x000107c2b05c();
  plVar6 = (long *)param_1[1];
  if (plVar6 != (long *)0x0) {
    uVar7 = (long)plVar6 - 1;
    if (((ulong)plVar6 & uVar7) == 0) {
      unaff_x25 = (long *)(uVar7 & (ulong)plVar5);
    }
    else {
      unaff_x25 = plVar5;
      if (plVar6 <= plVar5) {
        uVar4 = 0;
        if (plVar6 != (long *)0x0) {
          uVar4 = (ulong)plVar5 / (ulong)plVar6;
        }
        unaff_x25 = (long *)((long)plVar5 - uVar4 * (long)plVar6);
      }
    }
    plVar1 = *(long **)(*param_1 + (long)unaff_x25 * 8);
    if (plVar1 != (long *)0x0) {
      for (plVar1 = (long *)*plVar1; plVar1 != (long *)0x0; plVar1 = (long *)*plVar1) {
        plVar2 = (long *)plVar1[1];
        if (plVar2 == plVar5) {
          plVar2 = param_1;
          func_0x000107c2b068(param_1,plVar1 + 2,param_2);
          if (((ulong)plVar2 & 1) != 0) {
            return;
          }
        }
        else {
          if (((ulong)plVar6 & uVar7) == 0) {
            plVar2 = (long *)((ulong)plVar2 & uVar7);
          }
          else if (plVar6 <= plVar2) {
            uVar4 = 0;
            if (plVar6 != (long *)0x0) {
              uVar4 = (ulong)plVar2 / (ulong)plVar6;
            }
            plVar2 = (long *)((long)plVar2 - uVar4 * (long)plVar6);
          }
          if (plVar2 != unaff_x25) break;
        }
      }
    }
  }
  plVar1 = (long *)0x38;
  __Znwm();
  *plVar1 = 0;
  plVar1[1] = (long)plVar5;
  if (*(char *)((long)param_3 + 0x17) < '\0') {
    func_0x000107c3192c(plVar1 + 2,*param_3,param_3[1]);
  }
  else {
    lVar3 = *param_3;
    plVar1[3] = param_3[1];
    plVar1[2] = lVar3;
    plVar1[4] = param_3[2];
  }
  lVar3 = *param_4;
  plVar1[6] = param_4[1];
  plVar1[5] = lVar3;
  *param_4 = 0;
  param_4[1] = 0;
  if ((plVar6 == (long *)0x0) || (*(float *)(param_1 + 4) * (float)plVar6 < (float)(param_1[3] + 1))
     ) {
    uVar7 = 1;
    if ((long *)0x2 < plVar6) {
      uVar7 = (ulong)(((ulong)plVar6 & (long)plVar6 - 1U) != 0);
    }
    uVar7 = uVar7 | (long)plVar6 << 1;
    uVar4 = (ulong)((float)(param_1[3] + 1) / *(float *)(param_1 + 4));
    if (uVar7 <= uVar4) {
      uVar7 = uVar4;
    }
    FUN_10a04e818(param_1,uVar7);
    plVar6 = (long *)param_1[1];
    if (((ulong)plVar6 & (long)plVar6 - 1U) == 0) {
      unaff_x25 = (long *)((long)plVar6 - 1U & (ulong)plVar5);
    }
    else {
      unaff_x25 = plVar5;
      if (plVar6 <= plVar5) {
        uVar7 = 0;
        if (plVar6 != (long *)0x0) {
          uVar7 = (ulong)plVar5 / (ulong)plVar6;
        }
        unaff_x25 = (long *)((long)plVar5 - uVar7 * (long)plVar6);
      }
    }
  }
  lVar3 = *param_1;
  plVar5 = *(long **)(lVar3 + (long)unaff_x25 * 8);
  if (plVar5 == (long *)0x0) {
    plVar5 = param_1 + 2;
    *plVar1 = *plVar5;
    *plVar5 = (long)plVar1;
    *(long **)(lVar3 + (long)unaff_x25 * 8) = plVar5;
    if (*plVar1 != 0) {
      plVar5 = *(long **)(*plVar1 + 8);
      if (((ulong)plVar6 & (long)plVar6 - 1U) == 0) {
        plVar5 = (long *)((ulong)plVar5 & (long)plVar6 - 1U);
      }
      else if (plVar6 <= plVar5) {
        uVar7 = 0;
        if (plVar6 != (long *)0x0) {
          uVar7 = (ulong)plVar5 / (ulong)plVar6;
        }
        plVar5 = (long *)((long)plVar5 - uVar7 * (long)plVar6);
      }
      *(long **)(*param_1 + (long)plVar5 * 8) = plVar1;
    }
  }
  else {
    *plVar1 = *plVar5;
    *plVar5 = (long)plVar1;
  }
  param_1[3] = param_1[3] + 1;
  return;
}



/* Entry: 10a04ec48; end: 10a04ed23;  */

void FUN_10a04ec48(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
    if ((char)param_1[2] == '\x01') {
      func_0x00010a04ec90(lVar1 + 0x10);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(lVar1);
    return;
  }
  return;
}



/* Entry: 10a04ed24; end: 10a04ee1f;  */

void FUN_10a04ed24(undefined8 *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar1 = (undefined8 *)0x48;
  __Znwm();
  puVar1[1] = 0;
  puVar1[2] = 0;
  *puVar1 = &PTR_FUN_110b9d840;
  puVar1[3] = &PTR_FUN_110b9ba20;
  puVar1[4] = 0;
  puVar1[5] = 0;
  puVar2 = (undefined8 *)0x98;
  __Znwm();
  puVar2[1] = 0;
  puVar2[2] = 0;
  *puVar2 = &PTR_FUN_110b9e2f8;
  puVar2[0xd] = 0;
  puVar2[0xc] = 0;
  puVar2[0xf] = 0;
  puVar2[0xe] = 0;
  puVar2[0x11] = 0;
  puVar2[0x10] = 0;
  puVar2[3] = &PTR_FUN_110b9e348;
  puVar2[0x12] = 0;
  puVar2[9] = 0;
  puVar2[8] = 0;
  puVar2[0xb] = 0;
  puVar2[10] = 0;
  puVar2[5] = 0;
  puVar2[4] = 0;
  puVar2[7] = 0;
  puVar2[6] = 0;
  *(undefined4 *)(puVar2 + 10) = 0x3f800000;
  puVar2[0xb] = FUN_10a073874;
  puVar2[0xc] = &PTR_DAT_110ae9180;
  puVar1[6] = puVar2 + 3;
  puVar1[7] = puVar2;
  puVar1[8] = param_2;
  *param_1 = puVar1 + 3;
  param_1[1] = puVar1;
  return;
}



/* Entry: 10a04ee20; end: 10a04ee2f;  */

void FUN_10a04ee20(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110b9d840;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10a04ee30; end: 10a04ee4f;  */

void FUN_10a04ee30(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110b9d840;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a04ee50; end: 10a04ee5f;  */

void FUN_10a04ee50(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010a04ee58. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 10a04ee60; end: 10a04eeb7;  */

long FUN_10a04ee60(long param_1)

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



/* Entry: 10a04eeb8; end: 10a04eebb;  */

void FUN_10a04eeb8(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10a04eebc; end: 10a04eecf;  */

void FUN_10a04eebc(void)

{
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a04eed0; end: 10a04eee7;  */

void FUN_10a04eed0(long param_1)

{
  if (*(long **)(param_1 + 0x18) != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00010a04eee0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(param_1 + 0x18) + 8))();
    return;
  }
  return;
}



/* Entry: 10a04eee8; end: 10a04ef1f;  */

undefined8 FUN_10a04eee8(undefined8 param_1,undefined8 param_2)

{
  FUN_10a042ab0(param_2,&PTR_DAT_110b9d8e0);
  if ((int)param_2 == 0) {
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 10a04ef20; end: 10a04ef23;  */

void FUN_10a04ef20(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a04ef24; end: 10a04f02b;  */

long FUN_10a04ef24(long param_1)

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


