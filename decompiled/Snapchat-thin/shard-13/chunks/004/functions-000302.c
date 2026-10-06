/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10a61c6bc; end: 10a61c6fb;  */

void FUN_10a61c6bc(ulong param_1,long param_2)

{
  long lStack_28;
  
  if ((param_1 & 1) != 0) {
    lStack_28 = param_2 + 0x18;
    FUN_10a0ca968(&lStack_28);
  }
  __ZdlPv(param_2);
  return;
}



/* Entry: 10a61c6fc; end: 10a61c907;  */

long * FUN_10a61c6fc(long *param_1,uint param_2,undefined4 *param_3)

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
  ulong uVar10;
  ulong unaff_x24;
  
  uVar10 = (ulong)param_2;
  uVar9 = param_1[1];
  if (uVar9 != 0) {
    uVar3 = uVar9 - 1;
    uVar8 = (uint)uVar9;
    if ((uVar9 & uVar3) == 0) {
      unaff_x24 = (ulong)(uVar8 - 1 & param_2);
    }
    else {
      unaff_x24 = uVar10;
      if (uVar9 <= uVar10) {
        uVar1 = 0;
        if (uVar8 != 0) {
          uVar1 = param_2 / uVar8;
        }
        unaff_x24 = (ulong)(param_2 - uVar1 * uVar8);
      }
    }
    plVar5 = *(long **)(*param_1 + unaff_x24 * 8);
    if (plVar5 != (long *)0x0) {
      for (plVar5 = (long *)*plVar5; plVar5 != (long *)0x0; plVar5 = (long *)*plVar5) {
        uVar6 = plVar5[1];
        if (uVar6 == uVar10) {
          if (*(uint *)(plVar5 + 2) == param_2) {
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
  plVar5 = (long *)0x30;
  __Znwm();
  *plVar5 = 0;
  plVar5[1] = uVar10;
  *(undefined4 *)(plVar5 + 2) = *param_3;
  plVar5[4] = 0;
  plVar5[5] = 0;
  plVar5[3] = 0;
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
    func_0x00010a61c4ec(param_1,uVar3);
    uVar9 = param_1[1];
    if ((uVar9 & uVar9 - 1) == 0) {
      unaff_x24 = (ulong)((int)uVar9 - 1U & param_2);
    }
    else {
      unaff_x24 = uVar10;
      if (uVar9 <= uVar10) {
        uVar3 = 0;
        if (uVar9 != 0) {
          uVar3 = uVar10 / uVar9;
        }
        unaff_x24 = uVar10 - uVar3 * uVar9;
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
    if (*plVar5 == 0) goto LAB_10a61c8cc;
    uVar10 = *(ulong *)(*plVar5 + 8);
    if ((uVar9 & uVar9 - 1) == 0) {
      uVar10 = uVar10 & uVar9 - 1;
    }
    else if (uVar9 <= uVar10) {
      uVar3 = 0;
      if (uVar9 != 0) {
        uVar3 = uVar10 / uVar9;
      }
      uVar10 = uVar10 - uVar3 * uVar9;
    }
    plVar4 = (long *)(*param_1 + uVar10 * 8);
  }
  else {
    *plVar5 = *plVar4;
  }
  *plVar4 = (long)plVar5;
LAB_10a61c8cc:
  param_1[3] = param_1[3] + 1;
  return plVar5;
}



/* Entry: 10a61c908; end: 10a61c9a3;  */

long * FUN_10a61c908(long param_1,ulong param_2,uint param_3)

{
  uint uVar1;
  ulong uVar2;
  uint uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  long *plVar7;
  ulong uVar8;
  
  uVar3 = (uint)param_2;
  if (param_2 != 0) {
    uVar4 = (ulong)param_3;
    uVar5 = param_2 - 1;
    if ((param_2 & uVar5) == 0) {
      uVar6 = (ulong)(uVar3 - 1 & param_3);
    }
    else {
      uVar6 = uVar4;
      if (param_2 <= uVar4) {
        uVar1 = 0;
        if (uVar3 != 0) {
          uVar1 = param_3 / uVar3;
        }
        uVar6 = (ulong)(param_3 - uVar1 * uVar3);
      }
    }
    plVar7 = *(long **)(param_1 + uVar6 * 8);
    if (plVar7 != (long *)0x0) {
      plVar7 = (long *)*plVar7;
      do {
        if (plVar7 == (long *)0x0) {
          return (long *)0x0;
        }
        uVar8 = plVar7[1];
        if (uVar8 == uVar4) {
          if (*(uint *)(plVar7 + 2) == param_3) {
            return plVar7;
          }
        }
        else {
          if ((param_2 & uVar5) == 0) {
            uVar8 = uVar8 & uVar5;
          }
          else if (param_2 <= uVar8) {
            uVar2 = 0;
            if (param_2 != 0) {
              uVar2 = uVar8 / param_2;
            }
            uVar8 = uVar8 - uVar2 * param_2;
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



/* Entry: 10a61c9a4; end: 10a61cbc7;  */

long * FUN_10a61c9a4(long *param_1,uint param_2,undefined4 *param_3)

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
  ulong uVar10;
  ulong unaff_x24;
  
  uVar10 = (ulong)param_2;
  uVar9 = param_1[1];
  if (uVar9 != 0) {
    uVar3 = uVar9 - 1;
    uVar8 = (uint)uVar9;
    if ((uVar9 & uVar3) == 0) {
      unaff_x24 = (ulong)(uVar8 - 1 & param_2);
    }
    else {
      unaff_x24 = uVar10;
      if (uVar9 <= uVar10) {
        uVar1 = 0;
        if (uVar8 != 0) {
          uVar1 = param_2 / uVar8;
        }
        unaff_x24 = (ulong)(param_2 - uVar1 * uVar8);
      }
    }
    plVar5 = *(long **)(*param_1 + unaff_x24 * 8);
    if (plVar5 != (long *)0x0) {
      for (plVar5 = (long *)*plVar5; plVar5 != (long *)0x0; plVar5 = (long *)*plVar5) {
        uVar6 = plVar5[1];
        if (uVar6 == uVar10) {
          if (*(uint *)(plVar5 + 2) == param_2) {
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
  plVar5 = (long *)0x30;
  __Znwm();
  *plVar5 = 0;
  plVar5[1] = uVar10;
  *(undefined4 *)(plVar5 + 2) = *param_3;
  plVar5[4] = 0;
  plVar5[5] = 0;
  plVar5[3] = 0;
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
    FUN_10a61c274(param_1,uVar3);
    uVar9 = param_1[1];
    if ((uVar9 & uVar9 - 1) == 0) {
      unaff_x24 = (ulong)((int)uVar9 - 1U & param_2);
    }
    else {
      unaff_x24 = uVar10;
      if (uVar9 <= uVar10) {
        uVar3 = 0;
        if (uVar9 != 0) {
          uVar3 = uVar10 / uVar9;
        }
        unaff_x24 = uVar10 - uVar3 * uVar9;
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
    if (*plVar5 == 0) goto LAB_10a61cb84;
    uVar10 = *(ulong *)(*plVar5 + 8);
    if ((uVar9 & uVar9 - 1) == 0) {
      uVar10 = uVar10 & uVar9 - 1;
    }
    else if (uVar9 <= uVar10) {
      uVar3 = 0;
      if (uVar9 != 0) {
        uVar3 = uVar10 / uVar9;
      }
      uVar10 = uVar10 - uVar3 * uVar9;
    }
    plVar4 = (long *)(*param_1 + uVar10 * 8);
  }
  else {
    *plVar5 = *plVar4;
  }
  *plVar4 = (long)plVar5;
LAB_10a61cb84:
  param_1[3] = param_1[3] + 1;
  return plVar5;
}



/* Entry: 10a61cbc8; end: 10a61cc1b;  */

void FUN_10a61cbc8(long *param_1)

{
  long lVar1;
  long lVar2;
  
  if (param_1[3] != 0) {
    func_0x00010a61bd58(param_1[2]);
    param_1[2] = 0;
    lVar1 = param_1[1];
    if (lVar1 != 0) {
      lVar2 = 0;
      do {
        *(undefined8 *)(*param_1 + lVar2 * 8) = 0;
        lVar2 = lVar2 + 1;
      } while (lVar1 != lVar2);
    }
    param_1[3] = 0;
  }
  return;
}



/* Entry: 10a61cc1c; end: 10a61ccb7;  */

long * FUN_10a61cc1c(long param_1,ulong param_2,uint param_3)

{
  uint uVar1;
  ulong uVar2;
  uint uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  long *plVar7;
  ulong uVar8;
  
  uVar3 = (uint)param_2;
  if (param_2 != 0) {
    uVar4 = (ulong)param_3;
    uVar5 = param_2 - 1;
    if ((param_2 & uVar5) == 0) {
      uVar6 = (ulong)(uVar3 - 1 & param_3);
    }
    else {
      uVar6 = uVar4;
      if (param_2 <= uVar4) {
        uVar1 = 0;
        if (uVar3 != 0) {
          uVar1 = param_3 / uVar3;
        }
        uVar6 = (ulong)(param_3 - uVar1 * uVar3);
      }
    }
    plVar7 = *(long **)(param_1 + uVar6 * 8);
    if (plVar7 != (long *)0x0) {
      plVar7 = (long *)*plVar7;
      do {
        if (plVar7 == (long *)0x0) {
          return (long *)0x0;
        }
        uVar8 = plVar7[1];
        if (uVar8 == uVar4) {
          if (*(uint *)(plVar7 + 2) == param_3) {
            return plVar7;
          }
        }
        else {
          if ((param_2 & uVar5) == 0) {
            uVar8 = uVar8 & uVar5;
          }
          else if (param_2 <= uVar8) {
            uVar2 = 0;
            if (param_2 != 0) {
              uVar2 = uVar8 / param_2;
            }
            uVar8 = uVar8 - uVar2 * param_2;
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



/* Entry: 10a61ccb8; end: 10a61d07b;  */

void FUN_10a61ccb8(long *param_1,uint param_2,undefined4 *param_3)

{
  uint uVar1;
  ulong uVar2;
  code *pcVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  long *plVar8;
  long *plVar9;
  ulong uVar10;
  long *plVar11;
  long *plVar12;
  ulong uVar13;
  ulong uVar14;
  uint uVar15;
  ulong uVar16;
  ulong unaff_x24;
  
  uVar14 = (ulong)param_2;
  uVar16 = param_1[1];
  if (uVar16 != 0) {
    uVar6 = uVar16 - 1;
    uVar15 = (uint)uVar16;
    if ((uVar16 & uVar6) == 0) {
      unaff_x24 = (ulong)(uVar15 - 1 & param_2);
    }
    else {
      unaff_x24 = uVar14;
      if (uVar16 <= uVar14) {
        uVar1 = 0;
        if (uVar15 != 0) {
          uVar1 = param_2 / uVar15;
        }
        unaff_x24 = (ulong)(param_2 - uVar1 * uVar15);
      }
    }
    plVar8 = *(long **)(*param_1 + unaff_x24 * 8);
    if (plVar8 != (long *)0x0) {
      do {
        while( true ) {
          plVar8 = (long *)*plVar8;
          if (plVar8 == (long *)0x0) goto LAB_10a61cd68;
          uVar10 = plVar8[1];
          if (uVar10 != uVar14) break;
          if (*(uint *)(plVar8 + 2) == param_2) {
            return;
          }
        }
        if ((uVar16 & uVar6) == 0) {
          uVar10 = uVar10 & uVar6;
        }
        else if (uVar16 <= uVar10) {
          uVar7 = 0;
          if (uVar16 != 0) {
            uVar7 = uVar10 / uVar16;
          }
          uVar10 = uVar10 - uVar7 * uVar16;
        }
      } while (uVar10 == unaff_x24);
    }
  }
LAB_10a61cd68:
  plVar8 = (long *)0x30;
  __Znwm();
  *plVar8 = 0;
  plVar8[1] = uVar14;
  *(undefined4 *)(plVar8 + 2) = *param_3;
  lVar4 = *(long *)(param_3 + 2);
  plVar8[4] = *(long *)(param_3 + 4);
  plVar8[3] = lVar4;
  plVar8[5] = *(long *)(param_3 + 6);
  *(undefined8 *)(param_3 + 2) = 0;
  *(undefined8 *)(param_3 + 4) = 0;
  *(undefined8 *)(param_3 + 6) = 0;
  if ((uVar16 == 0) || (*(float *)(param_1 + 4) * (float)uVar16 < (float)(param_1[3] + 1))) {
    uVar6 = 1;
    if (2 < uVar16) {
      uVar6 = (ulong)((uVar16 & uVar16 - 1) != 0);
    }
    uVar6 = uVar6 | uVar16 << 1;
    uVar16 = (ulong)((float)(param_1[3] + 1) / *(float *)(param_1 + 4));
    if (uVar6 <= uVar16) {
      uVar6 = uVar16;
    }
    if (uVar6 - 1 == 0) {
      uVar6 = 2;
    }
    else if ((uVar6 & uVar6 - 1) != 0) {
      __ZNSt3__112__next_primeEm();
    }
    uVar16 = param_1[1];
    if (uVar16 < uVar6) {
LAB_10a61ce1c:
      if (uVar6 >> 0x3d != 0) {
        func_0x000109ffded8();
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x10a61d064);
        (*pcVar3)();
      }
      lVar4 = uVar6 << 3;
      __Znwm();
      lVar5 = *param_1;
      *param_1 = lVar4;
      if (lVar5 != 0) {
        __ZdlPv();
      }
      uVar16 = 0;
      param_1[1] = uVar6;
      do {
        *(undefined8 *)(*param_1 + uVar16 * 8) = 0;
        uVar16 = uVar16 + 1;
      } while (uVar6 != uVar16);
      plVar9 = (long *)param_1[2];
      uVar16 = uVar6;
      if (plVar9 != (long *)0x0) {
        uVar10 = plVar9[1];
        uVar7 = uVar6 - 1;
        if ((uVar6 & uVar7) == 0) {
          uVar10 = uVar10 & uVar7;
        }
        else if (uVar6 <= uVar10) {
          uVar13 = 0;
          if (uVar6 != 0) {
            uVar13 = uVar10 / uVar6;
          }
          uVar10 = uVar10 - uVar13 * uVar6;
        }
        *(long **)(*param_1 + uVar10 * 8) = param_1 + 2;
        plVar11 = (long *)*plVar9;
        while (plVar11 != (long *)0x0) {
          uVar13 = plVar11[1];
          if ((uVar6 & uVar7) == 0) {
            uVar13 = uVar13 & uVar7;
          }
          else if (uVar6 <= uVar13) {
            uVar2 = 0;
            if (uVar6 != 0) {
              uVar2 = uVar13 / uVar6;
            }
            uVar13 = uVar13 - uVar2 * uVar6;
          }
          plVar12 = plVar11;
          if (uVar13 != uVar10) {
            lVar4 = *param_1;
            if (*(long *)(lVar4 + uVar13 * 8) == 0) {
              *(long **)(lVar4 + uVar13 * 8) = plVar9;
              uVar10 = uVar13;
            }
            else {
              *plVar9 = *plVar11;
              *plVar11 = **(undefined8 **)(lVar4 + uVar13 * 8);
              **(long **)(lVar4 + uVar13 * 8) = (long)plVar11;
              plVar12 = plVar9;
            }
          }
          plVar9 = plVar12;
          plVar11 = (long *)*plVar12;
        }
      }
    }
    else if (uVar6 < uVar16) {
      uVar10 = (ulong)((float)(ulong)param_1[3] / *(float *)(param_1 + 4));
      if ((uVar16 < 3) || ((uVar16 & uVar16 - 1) != 0)) {
        __ZNSt3__112__next_primeEm();
      }
      else if (1 < uVar10) {
        uVar10 = 1L << (-LZCOUNT(uVar10 - 1) & 0x3fU);
      }
      if (uVar6 <= uVar10) {
        uVar6 = uVar10;
      }
      if (uVar6 < uVar16) {
        if (uVar6 != 0) goto LAB_10a61ce1c;
        lVar4 = *param_1;
        *param_1 = 0;
        if (lVar4 != 0) {
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
      unaff_x24 = (ulong)((int)uVar16 - 1U & param_2);
    }
    else {
      unaff_x24 = uVar14;
      if (uVar16 <= uVar14) {
        uVar6 = 0;
        if (uVar16 != 0) {
          uVar6 = uVar14 / uVar16;
        }
        unaff_x24 = uVar14 - uVar6 * uVar16;
      }
    }
  }
  lVar4 = *param_1;
  plVar9 = *(long **)(lVar4 + unaff_x24 * 8);
  if (plVar9 == (long *)0x0) {
    plVar9 = param_1 + 2;
    *plVar8 = *plVar9;
    *plVar9 = (long)plVar8;
    *(long **)(lVar4 + unaff_x24 * 8) = plVar9;
    if (*plVar8 == 0) goto LAB_10a61d000;
    uVar14 = *(ulong *)(*plVar8 + 8);
    if ((uVar16 & uVar16 - 1) == 0) {
      uVar14 = uVar14 & uVar16 - 1;
    }
    else if (uVar16 <= uVar14) {
      uVar6 = 0;
      if (uVar16 != 0) {
        uVar6 = uVar14 / uVar16;
      }
      uVar14 = uVar14 - uVar6 * uVar16;
    }
    plVar9 = (long *)(*param_1 + uVar14 * 8);
  }
  else {
    *plVar8 = *plVar9;
  }
  *plVar9 = (long)plVar8;
LAB_10a61d000:
  param_1[3] = param_1[3] + 1;
  return;
}



/* Entry: 10a61d07c; end: 10a61d103;  */

void FUN_10a61d07c(ulong param_1,long param_2)

{
  if (((param_1 & 1) != 0) && (*(long *)(param_2 + 0x18) != 0)) {
    *(long *)(param_2 + 0x20) = *(long *)(param_2 + 0x18);
    __ZdlPv();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_2);
  return;
}



/* Entry: 10a61d104; end: 10a61d1d3;  */

void FUN_10a61d104(undefined8 param_1)

{
  code *pcVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined1 auStack_258 [264];
  undefined **appuStack_150 [2];
  undefined1 auStack_140 [264];
  char cStack_38;
  
  FUN_10a10bd84(appuStack_150,param_1);
  appuStack_150[0] = &PTR_FUN_110ba5648;
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
  *puVar2 = &PTR_FUN_110ba5648;
  ___cxa_throw(puVar2,&PTR_DAT_110ba5620,FUN_10a10bd80);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10a61d1bc);
  (*pcVar1)();
}



/* Entry: 10a61d1d4; end: 10a61d22b;  */

void FUN_10a61d1d4(long *param_1)

{
  long *plVar1;
  long lVar2;
  
  lVar2 = *param_1;
  *param_1 = 0;
  if (lVar2 != 0) {
    if ((char)param_1[2] == '\x01') {
      plVar1 = *(long **)(lVar2 + 0x18);
      *(undefined8 *)(lVar2 + 0x18) = 0;
      if (plVar1 != (long *)0x0) {
        (**(code **)(*plVar1 + 8))();
      }
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(lVar2);
    return;
  }
  return;
}



/* Entry: 10a61d22c; end: 10a61d2cf;  */

long * FUN_10a61d22c(long *param_1,uint param_2)

{
  uint uVar1;
  ulong uVar2;
  uint uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  long *plVar8;
  ulong uVar9;
  
  uVar4 = param_1[1];
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
    plVar8 = *(long **)(*param_1 + uVar7 * 8);
    if (plVar8 != (long *)0x0) {
      plVar8 = (long *)*plVar8;
      do {
        if (plVar8 == (long *)0x0) {
          return (long *)0x0;
        }
        uVar9 = plVar8[1];
        if (uVar9 == uVar5) {
          if (*(uint *)(plVar8 + 2) == param_2) {
            return plVar8;
          }
        }
        else {
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
          if (uVar9 != uVar7) {
            return (long *)0x0;
          }
        }
        plVar8 = (long *)*plVar8;
      } while( true );
    }
  }
  return (long *)0x0;
}



/* Entry: 10a61d2d0; end: 10a61d4db;  */

void FUN_10a61d2d0(undefined8 *param_1,long *param_2)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  long *plVar6;
  undefined8 *puStack_90;
  undefined8 *puStack_88;
  int aiStack_80 [2];
  undefined8 *puStack_78;
  undefined *puStack_70;
  undefined8 *puStack_68;
  undefined8 **ppuStack_60;
  long *plStack_58;
  undefined1 *puStack_50;
  undefined ***pppuStack_48;
  undefined **ppuStack_40;
  undefined8 uStack_38;
  
  func_0x000109884c0c(&ppuStack_60,param_1 + 1,*param_1);
  func_0x000109884820(&puStack_88,&ppuStack_60,*param_1);
  if (ppuStack_60 != (undefined8 **)0x0) {
    (*(code *)**ppuStack_60)();
  }
  (**(code **)(*(long *)*param_1 + 0x30))(&puStack_90);
  plVar6 = (long *)*param_1;
  lVar5 = *param_2;
  plStack_58 = (long *)param_2[1];
  if (plStack_58 != (long *)0x0) {
    plVar1 = plStack_58 + 1;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = *plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  ppuStack_60 = (undefined8 **)0x0;
  if (lVar5 != 0) {
    ppuStack_60 = (undefined8 **)(lVar5 + 0x10);
  }
  ppuStack_40 = &PTR_DAT_110bfe048;
  func_0x000109899de4(&puStack_70,plVar6,&ppuStack_60,&ppuStack_40,0,0);
  plVar1 = plStack_58;
  if (plStack_58 != (long *)0x0) {
    plVar2 = plStack_58 + 1;
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
      (**(code **)(*plStack_58 + 0x10))(plStack_58);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar1);
    }
  }
  uStack_38 = 1;
  ppuStack_40 = &puStack_70;
  (**(code **)(*plVar6 + 0x58))(plVar6);
  ppuStack_60 = &puStack_88;
  plStack_58 = plVar6;
  puStack_50 = (undefined1 *)&puStack_90;
  pppuStack_48 = &ppuStack_40;
  func_0x0001098960c0(aiStack_80);
  if ((3 < aiStack_80[0]) && (puStack_78 != (undefined8 *)0x0)) {
    (**(code **)*puStack_78)();
  }
  if ((3 < (int)puStack_70) && (puStack_68 != (undefined8 *)0x0)) {
    (**(code **)*puStack_68)();
  }
  if (puStack_90 != (undefined8 *)0x0) {
    (**(code **)*puStack_90)();
  }
  if (puStack_88 != (undefined8 *)0x0) {
    (**(code **)*puStack_88)();
  }
  return;
}



/* Entry: 10a61d4dc; end: 10a61d4eb;  */

void FUN_10a61d4dc(long param_1)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  undefined8 *puVar5;
  long lVar6;
  long *plVar7;
  undefined8 *puStack_90;
  undefined8 *puStack_88;
  int aiStack_80 [2];
  undefined8 *puStack_78;
  undefined *puStack_70;
  undefined8 *puStack_68;
  undefined8 **ppuStack_60;
  long *plStack_58;
  undefined1 *puStack_50;
  undefined ***pppuStack_48;
  undefined **ppuStack_40;
  undefined8 uStack_38;
  
  puVar5 = *(undefined8 **)(param_1 + 0x10);
  func_0x000109884c0c(&ppuStack_60,puVar5 + 1,*puVar5);
  func_0x000109884820(&puStack_88,&ppuStack_60,*puVar5);
  if (ppuStack_60 != (undefined8 **)0x0) {
    (*(code *)**ppuStack_60)();
  }
  (**(code **)(*(long *)*puVar5 + 0x30))(&puStack_90);
  plVar7 = (long *)*puVar5;
  lVar6 = *(long *)(param_1 + 0x20);
  plStack_58 = *(long **)(param_1 + 0x28);
  if (plStack_58 != (long *)0x0) {
    plVar1 = plStack_58 + 1;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = *plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  ppuStack_60 = (undefined8 **)0x0;
  if (lVar6 != 0) {
    ppuStack_60 = (undefined8 **)(lVar6 + 0x10);
  }
  ppuStack_40 = &PTR_DAT_110bfe048;
  func_0x000109899de4(&puStack_70,plVar7,&ppuStack_60,&ppuStack_40,0,0);
  plVar1 = plStack_58;
  if (plStack_58 != (long *)0x0) {
    plVar2 = plStack_58 + 1;
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
      (**(code **)(*plStack_58 + 0x10))(plStack_58);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar1);
    }
  }
  uStack_38 = 1;
  ppuStack_40 = &puStack_70;
  (**(code **)(*plVar7 + 0x58))(plVar7);
  ppuStack_60 = &puStack_88;
  plStack_58 = plVar7;
  puStack_50 = (undefined1 *)&puStack_90;
  pppuStack_48 = &ppuStack_40;
  func_0x0001098960c0(aiStack_80);
  if ((3 < aiStack_80[0]) && (puStack_78 != (undefined8 *)0x0)) {
    (**(code **)*puStack_78)();
  }
  if ((3 < (int)puStack_70) && (puStack_68 != (undefined8 *)0x0)) {
    (**(code **)*puStack_68)();
  }
  if (puStack_90 != (undefined8 *)0x0) {
    (**(code **)*puStack_90)();
  }
  if (puStack_88 != (undefined8 *)0x0) {
    (**(code **)*puStack_88)();
  }
  return;
}



/* Entry: 10a61d4ec; end: 10a61d513;  */

long FUN_10a61d4ec(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  FUN_10a61be10(param_1 + 0x18);
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



/* Entry: 10a61d514; end: 10a61d553;  */

void FUN_10a61d514(undefined8 *param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined8 uVar5;
  
  *param_1 = &PTR_FUN_110c00ea0;
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



/* Entry: 10a61d554; end: 10a61d5d7;  */

void FUN_10a61d554(undefined8 *param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar4 = *(undefined8 *)(param_2 + 0x10);
  lVar5 = param_1[1];
  uStack_28 = param_1[1];
  uStack_30 = *param_1;
  if (lVar5 != 0) {
    plVar1 = (long *)(lVar5 + 0x10);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  FUN_10a5f4760(uVar4,&uStack_30);
  if (lVar5 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZNSt3__119__shared_weak_count14__release_weakEv_110346648)(lVar5);
    return;
  }
  return;
}



/* Entry: 10a61d5d8; end: 10a61d5f3;  */

void FUN_10a61d5d8(void)

{
  return;
}



/* Entry: 10a61d5f4; end: 10a61d69b;  */

void FUN_10a61d5f4(undefined8 *param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 uVar4;
  long lVar5;
  long *plVar6;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar4 = *(undefined8 *)(param_2 + 0x10);
  plVar6 = (long *)param_1[1];
  uStack_28 = param_1[1];
  uStack_30 = *param_1;
  if (plVar6 != (long *)0x0) {
    plVar1 = plVar6 + 1;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  FUN_10a5f9758(uVar4,&uStack_30);
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
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___ZNSt3__119__shared_weak_count14__release_weakEv_110346648)(plVar6);
      return;
    }
  }
  return;
}



/* Entry: 10a61d69c; end: 10a61d6b7;  */

void FUN_10a61d69c(void)

{
  return;
}



/* Entry: 10a61d6b8; end: 10a61d757;  */

void FUN_10a61d6b8(undefined8 *param_1,long param_2)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uStack_30;
  long *plStack_28;
  
  uVar5 = *(undefined8 *)(param_2 + 0x10);
  plStack_28 = (long *)param_1[1];
  uStack_30 = *param_1;
  if (param_1[1] != 0) {
    plVar1 = (long *)(param_1[1] + 8);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = *plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  FUN_10a5f4a70(uVar5,&uStack_30);
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



/* Entry: 10a61d758; end: 10a61d773;  */

void FUN_10a61d758(void)

{
  return;
}



/* Entry: 10a61d774; end: 10a61d813;  */

void FUN_10a61d774(undefined8 *param_1,long param_2)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uStack_30;
  long *plStack_28;
  
  uVar5 = *(undefined8 *)(param_2 + 0x10);
  plStack_28 = (long *)param_1[1];
  uStack_30 = *param_1;
  if (param_1[1] != 0) {
    plVar1 = (long *)(param_1[1] + 8);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = *plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  FUN_10a5f4934(uVar5,&uStack_30);
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



/* Entry: 10a61d814; end: 10a61d82f;  */

void FUN_10a61d814(void)

{
  return;
}



/* Entry: 10a61d830; end: 10a61d8b3;  */

void FUN_10a61d830(undefined8 *param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar4 = *(undefined8 *)(param_2 + 0x10);
  lVar5 = param_1[1];
  uStack_28 = param_1[1];
  uStack_30 = *param_1;
  if (lVar5 != 0) {
    plVar1 = (long *)(lVar5 + 0x10);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  FUN_10a5f4760(uVar4,&uStack_30);
  if (lVar5 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZNSt3__119__shared_weak_count14__release_weakEv_110346648)(lVar5);
    return;
  }
  return;
}



/* Entry: 10a61d8b4; end: 10a61d8cf;  */

void FUN_10a61d8b4(void)

{
  return;
}



/* Entry: 10a61d8d0; end: 10a61daa7;  */

/* WARNING: Removing unreachable block (ram,0x00010a61da00) */
/* WARNING: Removing unreachable block (ram,0x00010a61da04) */
/* WARNING: Removing unreachable block (ram,0x00010a61da0c) */
/* WARNING: Removing unreachable block (ram,0x00010a61da14) */
/* WARNING: Removing unreachable block (ram,0x00010a61da18) */

void FUN_10a61d8d0(long *param_1,long param_2)

{
  long *plVar1;
  long *plVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  char cVar5;
  bool bVar6;
  long lVar7;
  undefined8 in_x6;
  undefined8 in_x7;
  undefined8 *puVar8;
  long *plVar9;
  long lVar10;
  long lStack_40;
  long *plStack_38;
  
  puVar8 = *(undefined8 **)(param_2 + 0x10);
  lVar7 = *param_1;
  plVar9 = (long *)param_1[1];
  *param_1 = 0;
  param_1[1] = 0;
  lVar10 = (long)*(char *)((long)puVar8 + 0x57);
  if (lVar10 < 0) {
    puVar4 = (undefined8 *)puVar8[8];
    lVar10 = puVar8[9];
  }
  else {
    puVar4 = puVar8 + 8;
  }
  if (lVar7 == 0) {
    plStack_38 = (long *)0x0;
  }
  else {
    ___dynamic_cast(lVar7,&PTR_DAT_110bf32c0,&PTR_DAT_110c4a690,0);
    if (lVar7 == 0) {
      if ((bRam000000011330a9e8 >> 1 & 1) != 0) {
        puVar3 = (undefined8 *)&UNK_10f667746;
        if (lVar10 != 0) {
          puVar3 = puVar4;
        }
        func_0x00010ae06f08(1,2,&UNK_10f634897,&UNK_10f66a591,0x34,&UNK_10f63498b,in_x6,in_x7,lVar10
                            ,puVar3);
      }
      lVar7 = 0;
      plStack_38 = (long *)0x0;
    }
    else {
      plStack_38 = plVar9;
      if (plVar9 != (long *)0x0) {
        plVar1 = plVar9 + 1;
        do {
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar6) {
            *plVar1 = *plVar1 + 1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
      }
    }
  }
  lStack_40 = lVar7;
  (*(code *)*puVar8)(&lStack_40,puVar8);
  plVar1 = plStack_38;
  if (plStack_38 != (long *)0x0) {
    plVar2 = plStack_38 + 1;
    do {
      lVar10 = *plVar2;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar6) {
        *plVar2 = lVar10 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (lVar10 == 0) {
      (**(code **)(*plStack_38 + 0x10))(plStack_38);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar1);
    }
  }
  if (plVar9 != (long *)0x0) {
    plVar1 = plVar9 + 1;
    do {
      lVar10 = *plVar1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar6) {
        *plVar1 = lVar10 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (lVar10 == 0) {
      (**(code **)(*plVar9 + 0x10))(plVar9);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar9);
    }
  }
  return;
}



/* Entry: 10a61daa8; end: 10a61daf7;  */

void FUN_10a61daa8(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 8);
  if (lVar1 != 0) {
    if (*(char *)(lVar1 + 0x57) < '\0') {
      __ZdlPv(*(undefined8 *)(lVar1 + 0x40));
    }
    (*(code *)**(undefined8 **)(lVar1 + 8))();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(lVar1);
    return;
  }
  return;
}



/* Entry: 10a61daf8; end: 10a61db0f;  */

void FUN_10a61daf8(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_2[1] = 0;
  return;
}



/* Entry: 10a61db10; end: 10a61dbb3;  */

void FUN_10a61db10(long *param_1,long param_2)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  long lStack_30;
  long *plStack_28;
  
  lVar5 = *(long *)(param_2 + 0x10);
  lStack_30 = *param_1;
  plStack_28 = (long *)param_1[1];
  if (plStack_28 != (long *)0x0) {
    plVar1 = plStack_28 + 1;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = *plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  if (*(long *)(lVar5 + 0x520) != lStack_30) {
    func_0x00010a5f96f4(lVar5 + 0x520,&lStack_30);
    *(undefined2 *)(lVar5 + 0x59c) = 0;
  }
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
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___ZNSt3__119__shared_weak_count14__release_weakEv_110346648)(plVar1);
      return;
    }
  }
  return;
}



/* Entry: 10a61dbb4; end: 10a61dbcf;  */

void FUN_10a61dbb4(void)

{
  return;
}



/* Entry: 10a61dbd0; end: 10a61dc77;  */

void FUN_10a61dbd0(undefined8 *param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 uVar4;
  long lVar5;
  long *plVar6;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar4 = *(undefined8 *)(param_2 + 0x10);
  plVar6 = (long *)param_1[1];
  uStack_28 = param_1[1];
  uStack_30 = *param_1;
  if (plVar6 != (long *)0x0) {
    plVar1 = plVar6 + 1;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  FUN_10a5f9758(uVar4,&uStack_30);
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
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___ZNSt3__119__shared_weak_count14__release_weakEv_110346648)(plVar6);
      return;
    }
  }
  return;
}



/* Entry: 10a61dc78; end: 10a61dc93;  */

void FUN_10a61dc78(void)

{
  return;
}



/* Entry: 10a61dc94; end: 10a61dd33;  */

void FUN_10a61dc94(undefined8 *param_1,long param_2)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uStack_30;
  long *plStack_28;
  
  uVar5 = *(undefined8 *)(param_2 + 0x10);
  plStack_28 = (long *)param_1[1];
  uStack_30 = *param_1;
  if (param_1[1] != 0) {
    plVar1 = (long *)(param_1[1] + 8);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = *plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  FUN_10a5f4a70(uVar5,&uStack_30);
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



/* Entry: 10a61dd34; end: 10a61dd4f;  */

void FUN_10a61dd34(void)

{
  return;
}



/* Entry: 10a61dd50; end: 10a61ddef;  */

void FUN_10a61dd50(undefined8 *param_1,long param_2)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uStack_30;
  long *plStack_28;
  
  uVar5 = *(undefined8 *)(param_2 + 0x10);
  plStack_28 = (long *)param_1[1];
  uStack_30 = *param_1;
  if (param_1[1] != 0) {
    plVar1 = (long *)(param_1[1] + 8);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = *plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  FUN_10a5f4934(uVar5,&uStack_30);
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



/* Entry: 10a61ddf0; end: 10a61de0b;  */

void FUN_10a61ddf0(void)

{
  return;
}



/* Entry: 10a61de0c; end: 10a61df17;  */

void FUN_10a61de0c(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  int param_5)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  long *plVar4;
  bool bVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  ulong uVar14;
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
  FUN_10a61df18(param_2);
  FUN_10a052e3c();
  FUN_10ad59950();
  if (param_5 == 7) {
    FUN_10ad59dac();
    lVar7 = 0;
    do {
      if (*(int *)(&stack0xffffffffffffffb0 + lVar7) != *(int *)(&UNK_10e4cefe0 + lVar7)) {
        bVar5 = *(int *)(&UNK_10e4cefe0 + lVar7) <= *(int *)(&stack0xffffffffffffffb0 + lVar7);
        goto SUB_10988c170;
      }
      lVar7 = lVar7 + 4;
    } while (lVar7 != 0x10);
    bVar5 = true;
  }
  else {
    bVar5 = false;
  }
SUB_10988c170:
  *param_1 = 2;
  *(bool *)(param_1 + 2) = bVar5;
  plVar1 = plVar4 + 0x4b;
  lVar7 = plVar4[0x59];
  uVar6 = lVar7 - 1;
  plVar4[0x59] = uVar6;
  if (uVar6 < 8) {
    uVar6 = plVar1[lVar7 + 2];
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
  lVar7 = *plVar1;
  lVar11 = plVar4[0x4c];
  lVar9 = lVar11 - lVar7;
  uVar13 = lVar9 >> 4;
  if (uVar13 < uVar6) {
    uVar14 = uVar6 - uVar13;
    lVar12 = plVar4[0x4d];
    if ((ulong)(lVar12 - lVar11 >> 4) < uVar14) {
      if (uVar6 >> 0x3c == 0) {
        uVar8 = lVar12 - lVar7 >> 3;
        if (uVar8 <= uVar6) {
          uVar8 = uVar6;
        }
        if (0x7fffffffffffffef < (ulong)(lVar12 - lVar7)) {
          uVar8 = 0xfffffffffffffff;
        }
        plStack_68 = plVar1;
        if (uVar8 >> 0x3c == 0) {
          lVar3 = uVar8 << 4;
          __Znwm();
          lVar11 = lVar3 + lVar9;
          _bzero(lVar11,uVar14 * 0x10);
          lVar10 = lVar11 + uVar13 * -0x10;
          _memcpy(lVar10,lVar7,lVar9);
          *plVar1 = lVar10;
          plVar4[0x4c] = lVar11 + uVar14 * 0x10;
          plVar4[0x4d] = lVar3 + uVar8 * 0x10;
          lStack_88 = lVar7;
          lStack_80 = lVar7;
          lStack_78 = lVar7;
          lStack_70 = lVar12;
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
    _bzero(lVar11,uVar14 * 0x10);
    plVar4[0x4c] = lVar11 + uVar14 * 0x10;
  }
  else if (uVar6 < uVar13) {
    lVar7 = lVar7 + uVar6 * 0x10;
    while (lVar11 != lVar7) {
      lVar11 = lVar11 + -0x10;
      func_0x00010988c204(lVar11);
    }
    plVar4[0x4c] = lVar7;
  }
code_r0x00010988c138:
  plVar4[0x5a] = uVar6;
  return;
}



/* Entry: 10a61df18; end: 10a61df7f;  */

void FUN_10a61df18(undefined **param_1,undefined **param_2,undefined **param_3,undefined8 param_4)

{
  undefined1 *puVar1;
  code *pcVar2;
  long lVar3;
  undefined **ppuVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  long lVar8;
  ulong uVar9;
  undefined4 *extraout_x8;
  ulong uVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  ulong uVar15;
  ulong uVar16;
  long lStack_a8;
  long lStack_a0;
  long lStack_98;
  long lStack_90;
  long *plStack_88;
  undefined1 *in_stack_ffffffffffffff88;
  ulong in_stack_ffffffffffffff90;
  ulong in_stack_ffffffffffffff98;
  
  ppuVar4 = param_1;
  func_0x000109898688();
  if (ppuVar4 != (undefined **)0x0) {
    FUN_10a052c2c(param_1,ppuVar4);
    param_2 = ppuVar4;
    if (param_1 != (undefined **)0x0) {
      param_2 = &PTR_DAT_110b178e0;
      param_3 = &PTR_DAT_110bfe378;
      param_4 = 0x10;
      ___dynamic_cast();
      if (param_1 != (undefined **)0x0) {
        return;
      }
    }
    func_0x00010988bd28(&UNK_10f685496);
  }
  plVar5 = (long *)&UNK_10f68f52e;
  func_0x00010988bd28();
  plVar6 = plVar5;
  (**(code **)(*plVar5 + 0x58))();
  if ((ulong)plVar6[0x59] < 8) {
    plVar6[plVar6[0x59] + 0x4e] = plVar6[0x5a];
    plVar6[0x59] = plVar6[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar6 + 0x4b);
  }
  plVar7 = plVar5;
  FUN_10a61e094(plVar5,param_2);
  FUN_10a48f3fc(param_4);
  FUN_10a3f3f30(&stack0xffffffffffffff88,plVar5,param_3);
  puVar1 = in_stack_ffffffffffffff88;
  if (-1 < (long)in_stack_ffffffffffffff98) {
    in_stack_ffffffffffffff90 = in_stack_ffffffffffffff98 >> 0x38;
    puVar1 = &stack0xffffffffffffff88;
  }
  FUN_10a5fc7d0(plVar7,puVar1,in_stack_ffffffffffffff90);
  if ((long)in_stack_ffffffffffffff98 < 0) {
    __ZdlPv(in_stack_ffffffffffffff88);
  }
  *extraout_x8 = 0;
  plVar5 = plVar6 + 0x4b;
  lVar8 = plVar6[0x59];
  uVar9 = lVar8 - 1;
  plVar6[0x59] = uVar9;
  if (uVar9 < 8) {
    uVar9 = plVar5[lVar8 + 2];
    if (plVar6[0x5a] == uVar9) {
      return;
    }
  }
  else {
    uVar9 = *(ulong *)(plVar6[0x57] + -8);
    plVar6[0x57] = plVar6[0x57] + -8;
    if (plVar6[0x5a] == uVar9) {
      return;
    }
  }
  lVar8 = *plVar5;
  lVar13 = plVar6[0x4c];
  lVar11 = lVar13 - lVar8;
  uVar15 = lVar11 >> 4;
  if (uVar15 < uVar9) {
    uVar16 = uVar9 - uVar15;
    lVar14 = plVar6[0x4d];
    if ((ulong)(lVar14 - lVar13 >> 4) < uVar16) {
      if (uVar9 >> 0x3c == 0) {
        uVar10 = lVar14 - lVar8 >> 3;
        if (uVar10 <= uVar9) {
          uVar10 = uVar9;
        }
        if (0x7fffffffffffffef < (ulong)(lVar14 - lVar8)) {
          uVar10 = 0xfffffffffffffff;
        }
        plStack_88 = plVar5;
        if (uVar10 >> 0x3c == 0) {
          lVar3 = uVar10 << 4;
          __Znwm();
          lVar13 = lVar3 + lVar11;
          _bzero(lVar13,uVar16 * 0x10);
          lVar12 = lVar13 + uVar15 * -0x10;
          _memcpy(lVar12,lVar8,lVar11);
          *plVar5 = lVar12;
          plVar6[0x4c] = lVar13 + uVar16 * 0x10;
          plVar6[0x4d] = lVar3 + uVar10 * 0x10;
          lStack_a8 = lVar8;
          lStack_a0 = lVar8;
          lStack_98 = lVar8;
          lStack_90 = lVar14;
          func_0x00010988c1b8(&lStack_a8);
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
    _bzero(lVar13,uVar16 * 0x10);
    plVar6[0x4c] = lVar13 + uVar16 * 0x10;
  }
  else if (uVar9 < uVar15) {
    lVar8 = lVar8 + uVar9 * 0x10;
    while (lVar13 != lVar8) {
      lVar13 = lVar13 + -0x10;
      func_0x00010988c204(lVar13);
    }
    plVar6[0x4c] = lVar8;
  }
code_r0x00010988c138:
  plVar6[0x5a] = uVar9;
  return;
}



/* Entry: 10a61df80; end: 10a61e093;  */

void FUN_10a61df80(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined1 *puVar1;
  code *pcVar2;
  long lVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  ulong uVar14;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long *plStack_68;
  undefined1 *in_stack_ffffffffffffffa8;
  ulong in_stack_ffffffffffffffb0;
  ulong in_stack_ffffffffffffffb8;
  
  plVar4 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar4[0x59] < 8) {
    plVar4[plVar4[0x59] + 0x4e] = plVar4[0x5a];
    plVar4[0x59] = plVar4[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar4 + 0x4b);
  }
  plVar5 = param_2;
  FUN_10a61e094(param_2,param_3);
  FUN_10a48f3fc(param_5);
  FUN_10a3f3f30(&stack0xffffffffffffffa8,param_2,param_4);
  puVar1 = in_stack_ffffffffffffffa8;
  if (-1 < (long)in_stack_ffffffffffffffb8) {
    in_stack_ffffffffffffffb0 = in_stack_ffffffffffffffb8 >> 0x38;
    puVar1 = &stack0xffffffffffffffa8;
  }
  FUN_10a5fc7d0(plVar5,puVar1,in_stack_ffffffffffffffb0);
  if ((long)in_stack_ffffffffffffffb8 < 0) {
    __ZdlPv(in_stack_ffffffffffffffa8);
  }
  *param_1 = 0;
  plVar5 = plVar4 + 0x4b;
  lVar6 = plVar4[0x59];
  uVar7 = lVar6 - 1;
  plVar4[0x59] = uVar7;
  if (uVar7 < 8) {
    uVar7 = plVar5[lVar6 + 2];
    if (plVar4[0x5a] == uVar7) {
      return;
    }
  }
  else {
    uVar7 = *(ulong *)(plVar4[0x57] + -8);
    plVar4[0x57] = plVar4[0x57] + -8;
    if (plVar4[0x5a] == uVar7) {
      return;
    }
  }
  lVar6 = *plVar5;
  lVar11 = plVar4[0x4c];
  lVar9 = lVar11 - lVar6;
  uVar13 = lVar9 >> 4;
  if (uVar13 < uVar7) {
    uVar14 = uVar7 - uVar13;
    lVar12 = plVar4[0x4d];
    if ((ulong)(lVar12 - lVar11 >> 4) < uVar14) {
      if (uVar7 >> 0x3c == 0) {
        uVar8 = lVar12 - lVar6 >> 3;
        if (uVar8 <= uVar7) {
          uVar8 = uVar7;
        }
        if (0x7fffffffffffffef < (ulong)(lVar12 - lVar6)) {
          uVar8 = 0xfffffffffffffff;
        }
        plStack_68 = plVar5;
        if (uVar8 >> 0x3c == 0) {
          lVar3 = uVar8 << 4;
          __Znwm();
          lVar11 = lVar3 + lVar9;
          _bzero(lVar11,uVar14 * 0x10);
          lVar10 = lVar11 + uVar13 * -0x10;
          _memcpy(lVar10,lVar6,lVar9);
          *plVar5 = lVar10;
          plVar4[0x4c] = lVar11 + uVar14 * 0x10;
          plVar4[0x4d] = lVar3 + uVar8 * 0x10;
          lStack_88 = lVar6;
          lStack_80 = lVar6;
          lStack_78 = lVar6;
          lStack_70 = lVar12;
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
    _bzero(lVar11,uVar14 * 0x10);
    plVar4[0x4c] = lVar11 + uVar14 * 0x10;
  }
  else if (uVar7 < uVar13) {
    lVar6 = lVar6 + uVar7 * 0x10;
    while (lVar11 != lVar6) {
      lVar11 = lVar11 + -0x10;
      func_0x00010988c204(lVar11);
    }
    plVar4[0x4c] = lVar6;
  }
code_r0x00010988c138:
  plVar4[0x5a] = uVar7;
  return;
}



/* Entry: 10a61e094; end: 10a61e0fb;  */

void FUN_10a61e094(undefined **param_1,undefined **param_2,undefined **param_3,undefined8 param_4)

{
  code *pcVar1;
  long lVar2;
  undefined **ppuVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  ulong uVar9;
  undefined4 *extraout_x8;
  long lVar10;
  ulong uVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  ulong uVar16;
  ulong uVar17;
  long lStack_a8;
  long lStack_a0;
  long lStack_98;
  long lStack_90;
  long *plStack_88;
  
  ppuVar3 = param_1;
  func_0x000109898688();
  if (ppuVar3 != (undefined **)0x0) {
    FUN_10a053854(param_1,ppuVar3);
    param_2 = ppuVar3;
    if (param_1 != (undefined **)0x0) {
      param_2 = &PTR_DAT_110b178e0;
      param_3 = &PTR_DAT_110bfe378;
      param_4 = 0x10;
      ___dynamic_cast();
      if (param_1 != (undefined **)0x0) {
        return;
      }
    }
    func_0x00010988bd28(&UNK_10f685496);
  }
  plVar4 = (long *)&UNK_10f68f52e;
  func_0x00010988bd28();
  plVar5 = plVar4;
  (**(code **)(*plVar4 + 0x58))();
  if ((ulong)plVar5[0x59] < 8) {
    plVar5[plVar5[0x59] + 0x4e] = plVar5[0x5a];
    plVar5[0x59] = plVar5[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar5 + 0x4b);
  }
  plVar6 = plVar4;
  FUN_10a61e094(plVar4,param_2);
  FUN_10a61e1ec(param_4);
  plVar7 = plVar4;
  func_0x000109898518(plVar4,param_3);
  plVar8 = plVar4;
  func_0x000109898518(plVar4,param_3 + 2);
  func_0x000109898518(plVar4,param_3 + 4);
  lVar10 = plVar6[0x45];
  *(int *)(lVar10 + 0x10) = (int)plVar7;
  *(int *)(lVar10 + 0x14) = (int)plVar8;
  *(int *)(lVar10 + 0x18) = (int)plVar4;
  *extraout_x8 = 0;
  plVar4 = plVar5 + 0x4b;
  lVar10 = plVar5[0x59];
  uVar9 = lVar10 - 1;
  plVar5[0x59] = uVar9;
  if (uVar9 < 8) {
    uVar9 = plVar4[lVar10 + 2];
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
  lVar10 = *plVar4;
  lVar14 = plVar5[0x4c];
  lVar12 = lVar14 - lVar10;
  uVar16 = lVar12 >> 4;
  if (uVar16 < uVar9) {
    uVar17 = uVar9 - uVar16;
    lVar15 = plVar5[0x4d];
    if ((ulong)(lVar15 - lVar14 >> 4) < uVar17) {
      if (uVar9 >> 0x3c == 0) {
        uVar11 = lVar15 - lVar10 >> 3;
        if (uVar11 <= uVar9) {
          uVar11 = uVar9;
        }
        if (0x7fffffffffffffef < (ulong)(lVar15 - lVar10)) {
          uVar11 = 0xfffffffffffffff;
        }
        plStack_88 = plVar4;
        if (uVar11 >> 0x3c == 0) {
          lVar2 = uVar11 << 4;
          __Znwm();
          lVar14 = lVar2 + lVar12;
          _bzero(lVar14,uVar17 * 0x10);
          lVar13 = lVar14 + uVar16 * -0x10;
          _memcpy(lVar13,lVar10,lVar12);
          *plVar4 = lVar13;
          plVar5[0x4c] = lVar14 + uVar17 * 0x10;
          plVar5[0x4d] = lVar2 + uVar11 * 0x10;
          lStack_a8 = lVar10;
          lStack_a0 = lVar10;
          lStack_98 = lVar10;
          lStack_90 = lVar15;
          func_0x00010988c1b8(&lStack_a8);
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
    _bzero(lVar14,uVar17 * 0x10);
    plVar5[0x4c] = lVar14 + uVar17 * 0x10;
  }
  else if (uVar9 < uVar16) {
    lVar10 = lVar10 + uVar9 * 0x10;
    while (lVar14 != lVar10) {
      lVar14 = lVar14 + -0x10;
      func_0x00010988c204(lVar14);
    }
    plVar5[0x4c] = lVar10;
  }
code_r0x00010988c138:
  plVar5[0x5a] = uVar9;
  return;
}



/* Entry: 10a61e0fc; end: 10a61e1eb;  */

void FUN_10a61e0fc(undefined4 *param_1,long *param_2,undefined8 param_3,long param_4,
                  undefined8 param_5)

{
  code *pcVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  ulong uVar14;
  ulong uVar15;
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
  FUN_10a61e094(param_2,param_3);
  FUN_10a61e1ec(param_5);
  plVar5 = param_2;
  func_0x000109898518(param_2,param_4);
  plVar6 = param_2;
  func_0x000109898518(param_2,param_4 + 0x10);
  func_0x000109898518(param_2,param_4 + 0x20);
  lVar8 = plVar4[0x45];
  *(int *)(lVar8 + 0x10) = (int)plVar5;
  *(int *)(lVar8 + 0x14) = (int)plVar6;
  *(int *)(lVar8 + 0x18) = (int)param_2;
  *param_1 = 0;
  plVar4 = plVar3 + 0x4b;
  lVar8 = plVar3[0x59];
  uVar7 = lVar8 - 1;
  plVar3[0x59] = uVar7;
  if (uVar7 < 8) {
    uVar7 = plVar4[lVar8 + 2];
    if (plVar3[0x5a] == uVar7) {
      return;
    }
  }
  else {
    uVar7 = *(ulong *)(plVar3[0x57] + -8);
    plVar3[0x57] = plVar3[0x57] + -8;
    if (plVar3[0x5a] == uVar7) {
      return;
    }
  }
  lVar8 = *plVar4;
  lVar12 = plVar3[0x4c];
  lVar10 = lVar12 - lVar8;
  uVar14 = lVar10 >> 4;
  if (uVar14 < uVar7) {
    uVar15 = uVar7 - uVar14;
    lVar13 = plVar3[0x4d];
    if ((ulong)(lVar13 - lVar12 >> 4) < uVar15) {
      if (uVar7 >> 0x3c == 0) {
        uVar9 = lVar13 - lVar8 >> 3;
        if (uVar9 <= uVar7) {
          uVar9 = uVar7;
        }
        if (0x7fffffffffffffef < (ulong)(lVar13 - lVar8)) {
          uVar9 = 0xfffffffffffffff;
        }
        plStack_68 = plVar4;
        if (uVar9 >> 0x3c == 0) {
          lVar2 = uVar9 << 4;
          __Znwm();
          lVar12 = lVar2 + lVar10;
          _bzero(lVar12,uVar15 * 0x10);
          lVar11 = lVar12 + uVar14 * -0x10;
          _memcpy(lVar11,lVar8,lVar10);
          *plVar4 = lVar11;
          plVar3[0x4c] = lVar12 + uVar15 * 0x10;
          plVar3[0x4d] = lVar2 + uVar9 * 0x10;
          lStack_88 = lVar8;
          lStack_80 = lVar8;
          lStack_78 = lVar8;
          lStack_70 = lVar13;
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
    _bzero(lVar12,uVar15 * 0x10);
    plVar3[0x4c] = lVar12 + uVar15 * 0x10;
  }
  else if (uVar7 < uVar14) {
    lVar8 = lVar8 + uVar7 * 0x10;
    while (lVar12 != lVar8) {
      lVar12 = lVar12 + -0x10;
      func_0x00010988c204(lVar12);
    }
    plVar3[0x4c] = lVar8;
  }
code_r0x00010988c138:
  plVar3[0x5a] = uVar7;
  return;
}



/* Entry: 10a61e1ec; end: 10a61e20f;  */

void FUN_10a61e1ec(int *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  float fVar1;
  code *pcVar2;
  long lVar3;
  long *plVar4;
  long *plVar5;
  undefined8 uVar6;
  ulong uVar7;
  undefined4 *extraout_x8;
  long lVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  ulong uVar14;
  ulong uVar15;
  float fVar16;
  float fVar17;
  long lStack_98;
  long lStack_90;
  long lStack_88;
  long lStack_80;
  long *plStack_78;
  
  if ((int)param_1 == 3) {
    return;
  }
  plVar4 = (long *)0x3;
  uVar6 = 0;
  FUN_10a052ee0(3,0);
  plVar5 = plVar4;
  (**(code **)(*plVar4 + 0x58))();
  if ((ulong)plVar5[0x59] < 8) {
    plVar5[plVar5[0x59] + 0x4e] = plVar5[0x5a];
    plVar5[0x59] = plVar5[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar5 + 0x4b);
  }
  FUN_10a61e094(plVar4,uVar6);
  FUN_10a472f1c(param_4);
  if (((*param_1 != 3) || (param_1[4] != 3)) || (param_1[8] != 3)) {
    func_0x00010988bd28(&UNK_10f68f550);
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x10a61e33c);
    (*pcVar2)();
  }
  fVar16 = (float)*(double *)(param_1 + 6);
  fVar17 = (float)*(double *)(param_1 + 10);
  if (0x7fefffffffffffff < (ulong)ABS(*(double *)(param_1 + 10))) {
    fVar17 = 0.0;
  }
  if (0x7fefffffffffffff < (ulong)ABS(*(double *)(param_1 + 6))) {
    fVar16 = 0.0;
  }
  lVar8 = plVar4[0x45];
  fVar1 = (float)*(double *)(param_1 + 2);
  if (0x7fefffffffffffff < (ulong)ABS(*(double *)(param_1 + 2))) {
    fVar1 = 0.0;
  }
  *(float *)(lVar8 + 0x1c) = fVar1;
  *(float *)(lVar8 + 0x20) = fVar16;
  *(float *)(lVar8 + 0x24) = fVar17;
  *extraout_x8 = 0;
  plVar4 = plVar5 + 0x4b;
  lVar8 = plVar5[0x59];
  uVar7 = lVar8 - 1;
  plVar5[0x59] = uVar7;
  if (uVar7 < 8) {
    uVar7 = plVar4[lVar8 + 2];
    if (plVar5[0x5a] == uVar7) {
      return;
    }
  }
  else {
    uVar7 = *(ulong *)(plVar5[0x57] + -8);
    plVar5[0x57] = plVar5[0x57] + -8;
    if (plVar5[0x5a] == uVar7) {
      return;
    }
  }
  lVar8 = *plVar4;
  lVar12 = plVar5[0x4c];
  lVar10 = lVar12 - lVar8;
  uVar14 = lVar10 >> 4;
  if (uVar14 < uVar7) {
    uVar15 = uVar7 - uVar14;
    lVar13 = plVar5[0x4d];
    if ((ulong)(lVar13 - lVar12 >> 4) < uVar15) {
      if (uVar7 >> 0x3c == 0) {
        uVar9 = lVar13 - lVar8 >> 3;
        if (uVar9 <= uVar7) {
          uVar9 = uVar7;
        }
        if (0x7fffffffffffffef < (ulong)(lVar13 - lVar8)) {
          uVar9 = 0xfffffffffffffff;
        }
        plStack_78 = plVar4;
        if (uVar9 >> 0x3c == 0) {
          lVar3 = uVar9 << 4;
          __Znwm();
          lVar12 = lVar3 + lVar10;
          _bzero(lVar12,uVar15 * 0x10);
          lVar11 = lVar12 + uVar14 * -0x10;
          _memcpy(lVar11,lVar8,lVar10);
          *plVar4 = lVar11;
          plVar5[0x4c] = lVar12 + uVar15 * 0x10;
          plVar5[0x4d] = lVar3 + uVar9 * 0x10;
          lStack_98 = lVar8;
          lStack_90 = lVar8;
          lStack_88 = lVar8;
          lStack_80 = lVar13;
          func_0x00010988c1b8(&lStack_98);
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
    _bzero(lVar12,uVar15 * 0x10);
    plVar5[0x4c] = lVar12 + uVar15 * 0x10;
  }
  else if (uVar7 < uVar14) {
    lVar8 = lVar8 + uVar7 * 0x10;
    while (lVar12 != lVar8) {
      lVar12 = lVar12 + -0x10;
      func_0x00010988c204(lVar12);
    }
    plVar5[0x4c] = lVar8;
  }
code_r0x00010988c138:
  plVar5[0x5a] = uVar7;
  return;
}



/* Entry: 10a61e210; end: 10a61e34f;  */

void FUN_10a61e210(undefined4 *param_1,long *param_2,undefined8 param_3,int *param_4,
                  undefined8 param_5)

{
  long *plVar1;
  float fVar2;
  code *pcVar3;
  long lVar4;
  long *plVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  ulong uVar14;
  float fVar15;
  float fVar16;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long *plStack_68;
  
  plVar5 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar5[0x59] < 8) {
    plVar5[plVar5[0x59] + 0x4e] = plVar5[0x5a];
    plVar5[0x59] = plVar5[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar5 + 0x4b);
  }
  FUN_10a61e094(param_2,param_3);
  FUN_10a472f1c(param_5);
  if (((*param_4 != 3) || (param_4[4] != 3)) || (param_4[8] != 3)) {
    func_0x00010988bd28(&UNK_10f68f550);
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x10a61e33c);
    (*pcVar3)();
  }
  fVar15 = (float)*(double *)(param_4 + 6);
  fVar16 = (float)*(double *)(param_4 + 10);
  if (0x7fefffffffffffff < (ulong)ABS(*(double *)(param_4 + 10))) {
    fVar16 = 0.0;
  }
  if (0x7fefffffffffffff < (ulong)ABS(*(double *)(param_4 + 6))) {
    fVar15 = 0.0;
  }
  lVar7 = param_2[0x45];
  fVar2 = (float)*(double *)(param_4 + 2);
  if (0x7fefffffffffffff < (ulong)ABS(*(double *)(param_4 + 2))) {
    fVar2 = 0.0;
  }
  *(float *)(lVar7 + 0x1c) = fVar2;
  *(float *)(lVar7 + 0x20) = fVar15;
  *(float *)(lVar7 + 0x24) = fVar16;
  *param_1 = 0;
  plVar1 = plVar5 + 0x4b;
  lVar7 = plVar5[0x59];
  uVar6 = lVar7 - 1;
  plVar5[0x59] = uVar6;
  if (uVar6 < 8) {
    uVar6 = plVar1[lVar7 + 2];
    if (plVar5[0x5a] == uVar6) {
      return;
    }
  }
  else {
    uVar6 = *(ulong *)(plVar5[0x57] + -8);
    plVar5[0x57] = plVar5[0x57] + -8;
    if (plVar5[0x5a] == uVar6) {
      return;
    }
  }
  lVar7 = *plVar1;
  lVar11 = plVar5[0x4c];
  lVar9 = lVar11 - lVar7;
  uVar13 = lVar9 >> 4;
  if (uVar13 < uVar6) {
    uVar14 = uVar6 - uVar13;
    lVar12 = plVar5[0x4d];
    if ((ulong)(lVar12 - lVar11 >> 4) < uVar14) {
      if (uVar6 >> 0x3c == 0) {
        uVar8 = lVar12 - lVar7 >> 3;
        if (uVar8 <= uVar6) {
          uVar8 = uVar6;
        }
        if (0x7fffffffffffffef < (ulong)(lVar12 - lVar7)) {
          uVar8 = 0xfffffffffffffff;
        }
        plStack_68 = plVar1;
        if (uVar8 >> 0x3c == 0) {
          lVar4 = uVar8 << 4;
          __Znwm();
          lVar11 = lVar4 + lVar9;
          _bzero(lVar11,uVar14 * 0x10);
          lVar10 = lVar11 + uVar13 * -0x10;
          _memcpy(lVar10,lVar7,lVar9);
          *plVar1 = lVar10;
          plVar5[0x4c] = lVar11 + uVar14 * 0x10;
          plVar5[0x4d] = lVar4 + uVar8 * 0x10;
          lStack_88 = lVar7;
          lStack_80 = lVar7;
          lStack_78 = lVar7;
          lStack_70 = lVar12;
          func_0x00010988c1b8(&lStack_88);
          goto code_r0x00010988c138;
        }
        func_0x000104c4f740();
      }
      else {
        func_0x00010988c1a4();
      }
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar3)();
    }
    _bzero(lVar11,uVar14 * 0x10);
    plVar5[0x4c] = lVar11 + uVar14 * 0x10;
  }
  else if (uVar6 < uVar13) {
    lVar7 = lVar7 + uVar6 * 0x10;
    while (lVar11 != lVar7) {
      lVar11 = lVar11 + -0x10;
      func_0x00010988c204(lVar11);
    }
    plVar5[0x4c] = lVar7;
  }
code_r0x00010988c138:
  plVar5[0x5a] = uVar6;
  return;
}



/* Entry: 10a61e350; end: 10a61e40f;  */

void FUN_10a61e350(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  long *plVar4;
  ulong uVar5;
  long lVar6;
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
  FUN_10a61e094(param_2,param_3);
  FUN_10a052e3c(param_5);
  uVar5 = param_2[0x45];
  FUN_10a5fbd7c();
  *param_1 = 3;
  *(double *)(param_1 + 2) = (double)uVar5;
  plVar1 = plVar4 + 0x4b;
  lVar6 = plVar4[0x59];
  uVar5 = lVar6 - 1;
  plVar4[0x59] = uVar5;
  if (uVar5 < 8) {
    uVar5 = plVar1[lVar6 + 2];
    if (plVar4[0x5a] == uVar5) {
      return;
    }
  }
  else {
    uVar5 = *(ulong *)(plVar4[0x57] + -8);
    plVar4[0x57] = plVar4[0x57] + -8;
    if (plVar4[0x5a] == uVar5) {
      return;
    }
  }
  lVar6 = *plVar1;
  lVar10 = plVar4[0x4c];
  lVar8 = lVar10 - lVar6;
  uVar12 = lVar8 >> 4;
  if (uVar12 < uVar5) {
    uVar13 = uVar5 - uVar12;
    lVar11 = plVar4[0x4d];
    if ((ulong)(lVar11 - lVar10 >> 4) < uVar13) {
      if (uVar5 >> 0x3c == 0) {
        uVar7 = lVar11 - lVar6 >> 3;
        if (uVar7 <= uVar5) {
          uVar7 = uVar5;
        }
        if (0x7fffffffffffffef < (ulong)(lVar11 - lVar6)) {
          uVar7 = 0xfffffffffffffff;
        }
        plStack_68 = plVar1;
        if (uVar7 >> 0x3c == 0) {
          lVar3 = uVar7 << 4;
          __Znwm();
          lVar10 = lVar3 + lVar8;
          _bzero(lVar10,uVar13 * 0x10);
          lVar9 = lVar10 + uVar12 * -0x10;
          _memcpy(lVar9,lVar6,lVar8);
          *plVar1 = lVar9;
          plVar4[0x4c] = lVar10 + uVar13 * 0x10;
          plVar4[0x4d] = lVar3 + uVar7 * 0x10;
          lStack_88 = lVar6;
          lStack_80 = lVar6;
          lStack_78 = lVar6;
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
  else if (uVar5 < uVar12) {
    lVar6 = lVar6 + uVar5 * 0x10;
    while (lVar10 != lVar6) {
      lVar10 = lVar10 + -0x10;
      func_0x00010988c204(lVar10);
    }
    plVar4[0x4c] = lVar6;
  }
code_r0x00010988c138:
  plVar4[0x5a] = uVar5;
  return;
}



/* Entry: 10a61e410; end: 10a61e4f3;  */

void FUN_10a61e410(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  code *pcVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  ulong uVar14;
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
  FUN_10a61e094(param_2,param_3);
  FUN_10a076f00(param_5);
  plVar5 = param_2;
  func_0x000109898518(param_2,param_4);
  FUN_10a5fc9a4(plVar4,plVar5);
  FUN_10a065390(param_1,param_2,&stack0xffffffffffffffb4);
  plVar4 = plVar3 + 0x4b;
  lVar6 = plVar3[0x59];
  uVar7 = lVar6 - 1;
  plVar3[0x59] = uVar7;
  if (uVar7 < 8) {
    uVar7 = plVar4[lVar6 + 2];
    if (plVar3[0x5a] == uVar7) {
      return;
    }
  }
  else {
    uVar7 = *(ulong *)(plVar3[0x57] + -8);
    plVar3[0x57] = plVar3[0x57] + -8;
    if (plVar3[0x5a] == uVar7) {
      return;
    }
  }
  lVar6 = *plVar4;
  lVar11 = plVar3[0x4c];
  lVar9 = lVar11 - lVar6;
  uVar13 = lVar9 >> 4;
  if (uVar13 < uVar7) {
    uVar14 = uVar7 - uVar13;
    lVar12 = plVar3[0x4d];
    if ((ulong)(lVar12 - lVar11 >> 4) < uVar14) {
      if (uVar7 >> 0x3c == 0) {
        uVar8 = lVar12 - lVar6 >> 3;
        if (uVar8 <= uVar7) {
          uVar8 = uVar7;
        }
        if (0x7fffffffffffffef < (ulong)(lVar12 - lVar6)) {
          uVar8 = 0xfffffffffffffff;
        }
        plStack_68 = plVar4;
        if (uVar8 >> 0x3c == 0) {
          lVar2 = uVar8 << 4;
          __Znwm();
          lVar11 = lVar2 + lVar9;
          _bzero(lVar11,uVar14 * 0x10);
          lVar10 = lVar11 + uVar13 * -0x10;
          _memcpy(lVar10,lVar6,lVar9);
          *plVar4 = lVar10;
          plVar3[0x4c] = lVar11 + uVar14 * 0x10;
          plVar3[0x4d] = lVar2 + uVar8 * 0x10;
          lStack_88 = lVar6;
          lStack_80 = lVar6;
          lStack_78 = lVar6;
          lStack_70 = lVar12;
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
    _bzero(lVar11,uVar14 * 0x10);
    plVar3[0x4c] = lVar11 + uVar14 * 0x10;
  }
  else if (uVar7 < uVar13) {
    lVar6 = lVar6 + uVar7 * 0x10;
    while (lVar11 != lVar6) {
      lVar11 = lVar11 + -0x10;
      func_0x00010988c204(lVar11);
    }
    plVar3[0x4c] = lVar6;
  }
code_r0x00010988c138:
  plVar3[0x5a] = uVar7;
  return;
}



/* Entry: 10a61e4f4; end: 10a61e61f;  */

void FUN_10a61e4f4(undefined8 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                  long *param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

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
  undefined8 uStack_78;
  long lStack_70;
  long *plStack_68;
  
  plVar3 = param_5;
  (**(code **)(*param_5 + 0x58))();
  if ((ulong)plVar3[0x59] < 8) {
    plVar3[plVar3[0x59] + 0x4e] = plVar3[0x5a];
    plVar3[0x59] = plVar3[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar3 + 0x4b);
  }
  plVar4 = param_5;
  FUN_10a61e094(param_5,param_6);
  FUN_10a61e620(param_8);
  FUN_10a36cc70(&uStack_78,param_5,param_7);
  FUN_10a5fca90(plVar4,&uStack_78);
  if (uStack_78 != 0) {
    lStack_70 = uStack_78;
    __ZdlPv();
  }
  uStack_78 = CONCAT44(param_3,param_2);
  lStack_70 = CONCAT44(lStack_70._4_4_,param_4);
  FUN_10a065390(param_1,param_5,&uStack_78);
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
          uStack_78 = lVar5;
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



/* Entry: 10a61e620; end: 10a61e643;  */

void FUN_10a61e620(undefined4 param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  undefined8 uVar5;
  undefined8 extraout_x8;
  undefined4 uStack_58;
  undefined4 uStack_54;
  
  if ((int)param_3 == 1) {
    return;
  }
  plVar1 = (long *)0x1;
  uVar5 = 0;
  FUN_10a052ee0(1,0,param_3);
  plVar2 = plVar1;
  (**(code **)(*plVar1 + 0x58))();
  if ((ulong)plVar2[0x59] < 8) {
    plVar2[plVar2[0x59] + 0x4e] = plVar2[0x5a];
    plVar2[0x59] = plVar2[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar2 + 0x4b);
  }
  plVar3 = plVar1;
  FUN_10a61e094(plVar1,uVar5);
  FUN_10a076f00(param_6);
  plVar4 = plVar1;
  func_0x000109898518(plVar1,param_3);
  FUN_10a5fbcc4(plVar3[0x45],plVar4);
  uStack_58 = param_1;
  uStack_54 = param_2;
  FUN_10a07ff64(extraout_x8,plVar1,&uStack_58);
  func_0x00010988c170(plVar2 + 0x4b);
  return;
}



/* Entry: 10a61e644; end: 10a61e727;  */

void FUN_10a61e644(undefined8 param_1,undefined4 param_2,undefined4 param_3,long *param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  undefined4 uStack_48;
  undefined4 uStack_44;
  
  plVar1 = param_4;
  (**(code **)(*param_4 + 0x58))();
  if ((ulong)plVar1[0x59] < 8) {
    plVar1[plVar1[0x59] + 0x4e] = plVar1[0x5a];
    plVar1[0x59] = plVar1[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar1 + 0x4b);
  }
  plVar2 = param_4;
  FUN_10a61e094(param_4,param_5);
  FUN_10a076f00(param_7);
  plVar3 = param_4;
  func_0x000109898518(param_4,param_6);
  FUN_10a5fbcc4(plVar2[0x45],plVar3);
  uStack_48 = param_2;
  uStack_44 = param_3;
  FUN_10a07ff64(param_1,param_4,&uStack_48);
  func_0x00010988c170(plVar1 + 0x4b);
  return;
}



/* Entry: 10a61e728; end: 10a61e80b;  */

void FUN_10a61e728(undefined8 param_1,undefined4 param_2,undefined4 param_3,long *param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  undefined4 uStack_48;
  undefined4 uStack_44;
  
  plVar1 = param_4;
  (**(code **)(*param_4 + 0x58))();
  if ((ulong)plVar1[0x59] < 8) {
    plVar1[plVar1[0x59] + 0x4e] = plVar1[0x5a];
    plVar1[0x59] = plVar1[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar1 + 0x4b);
  }
  plVar2 = param_4;
  FUN_10a61e094(param_4,param_5);
  FUN_10a076f00(param_7);
  plVar3 = param_4;
  func_0x000109898518(param_4,param_6);
  FUN_10a5fbcc4(plVar2[0x45],plVar3);
  uStack_48 = param_2;
  uStack_44 = param_3;
  FUN_10a07ff64(param_1,param_4,&uStack_48);
  func_0x00010988c170(plVar1 + 0x4b);
  return;
}



/* Entry: 10a61e80c; end: 10a61e927;  */

void FUN_10a61e80c(undefined8 param_1,undefined4 param_2,undefined4 param_3,long *param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

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
  undefined8 uStack_68;
  
  plVar3 = param_4;
  (**(code **)(*param_4 + 0x58))();
  if ((ulong)plVar3[0x59] < 8) {
    plVar3[plVar3[0x59] + 0x4e] = plVar3[0x5a];
    plVar3[0x59] = plVar3[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar3 + 0x4b);
  }
  plVar4 = param_4;
  FUN_10a61e094(param_4,param_5);
  FUN_10a61e620(param_7);
  FUN_10a36cc70(&uStack_68,param_4,param_6);
  FUN_10a5fcc0c(plVar4,&uStack_68);
  if (uStack_68 != (long *)0x0) {
    __ZdlPv();
  }
  uStack_68 = (long *)CONCAT44(param_3,param_2);
  FUN_10a07ff64(param_1,param_4,&uStack_68);
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
        uStack_68 = plVar4;
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



/* Entry: 10a61e928; end: 10a61ea07;  */

void FUN_10a61e928(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  plVar1 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar1[0x59] < 8) {
    plVar1[plVar1[0x59] + 0x4e] = plVar1[0x5a];
    plVar1[0x59] = plVar1[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar1 + 0x4b);
  }
  plVar2 = param_2;
  FUN_10a61e094(param_2,param_3);
  FUN_10a052e3c(param_5);
  lVar3 = *(long *)(*(long *)plVar2[0x45] + 0x178);
  func_0x00010a0d8ae0(lVar3);
  uStack_48 = *(undefined8 *)(lVar3 + 0x5c);
  uStack_50 = *(undefined8 *)(lVar3 + 0x54);
  FUN_10a085248(param_1,param_2,&uStack_50);
  func_0x00010988c170(plVar1 + 0x4b);
  return;
}



/* Entry: 10a61ea08; end: 10a61eb4b;  */

void FUN_10a61ea08(undefined8 param_1,undefined4 param_2,undefined4 param_3,long *param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  undefined4 uStack_58;
  undefined4 uStack_54;
  
  plVar1 = param_4;
  (**(code **)(*param_4 + 0x58))();
  if ((ulong)plVar1[0x59] < 8) {
    plVar1[plVar1[0x59] + 0x4e] = plVar1[0x5a];
    plVar1[0x59] = plVar1[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar1 + 0x4b);
  }
  plVar2 = param_4;
  FUN_10a61e094(param_4,param_5);
  FUN_10a052e3c(param_7);
  lVar3 = plVar2[0x45];
  FUN_10a5fb1c8(lVar3,1);
  if (lVar3 == 0) {
    param_2 = 0;
    param_3 = 0;
    if ((bRam000000011330a9e8 >> 1 & 1) != 0) {
      func_0x00010ae06f08(1,2,&UNK_10f66893b,&UNK_10f668bb2,0x1b0,&UNK_10f668bed);
      param_3 = 0;
    }
  }
  else if (*(long *)(lVar3 + 0x18) == *(long *)(lVar3 + 0x10)) {
    param_2 = 0;
    param_3 = 0;
  }
  else {
    FUN_10a14cdf8();
  }
  uStack_58 = param_2;
  uStack_54 = param_3;
  FUN_10a07ff64(param_1,param_4,&uStack_58);
  func_0x00010988c170(plVar1 + 0x4b);
  return;
}



/* Entry: 10a61eb4c; end: 10a61ec27;  */

void FUN_10a61eb4c(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  double dVar14;
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
  FUN_10a61df18(param_2,param_3);
  FUN_10a052e3c(param_5);
  lVar5 = param_2[0x45];
  FUN_10a5fb1c8(lVar5,0);
  if (lVar5 == 0) {
    dVar14 = 0.0;
  }
  else {
    dVar14 = (double)(ulong)(*(long *)(lVar5 + 0x18) - *(long *)(lVar5 + 0x10) >> 3);
  }
  *param_1 = 3;
  *(double *)(param_1 + 2) = dVar14;
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



/* Entry: 10a61ec28; end: 10a61ed23;  */

void FUN_10a61ec28(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  long in_stack_ffffffffffffffa8;
  long in_stack_ffffffffffffffb0;
  
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
  FUN_10a61df18(param_2,param_3);
  FUN_10a052e3c(param_5);
  FUN_10a5fc94c(&stack0xffffffffffffffa8,plVar4);
  FUN_10a07b090(param_1,param_2,in_stack_ffffffffffffffa8,
                in_stack_ffffffffffffffb0 - in_stack_ffffffffffffffa8 >> 3);
  if (in_stack_ffffffffffffffa8 != 0) {
    __ZdlPv();
  }
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



/* Entry: 10a61ed24; end: 10a61ed87;  */

ulong FUN_10a61ed24(ulong param_1,undefined8 *param_2)

{
  code *pcVar1;
  ulong uVar2;
  
  uVar2 = param_1;
  FUN_10a0051e8(param_1,*(undefined4 *)(param_2 + 3),*(undefined4 *)((long)param_2 + 0x1c),
                *(undefined4 *)(param_2 + 10),*(undefined4 *)(param_2 + 4),
                *(undefined4 *)((long)param_2 + 0x24));
  if ((uVar2 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10a61ed88);
      (*pcVar1)();
    }
    FUN_10a054dac(param_1,*param_2,FUN_10a61ed88,1,*(undefined8 *)(param_1 + 0x40));
  }
  return param_1;
}



/* Entry: 10a61ed88; end: 10a61ee9b;  */

void FUN_10a61ed88(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  long *plVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
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
  undefined8 in_stack_ffffffffffffffa8;
  long in_stack_ffffffffffffffb8;
  
  plVar4 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar4[0x59] < 8) {
    plVar4[plVar4[0x59] + 0x4e] = plVar4[0x5a];
    plVar4[0x59] = plVar4[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar4 + 0x4b);
  }
  FUN_10a61e094(param_2,param_3);
  FUN_10a052e3c(param_5);
  lVar8 = param_2[0x2e];
  func_0x000107c2b054(&stack0xffffffffffffffa8,&UNK_10f668d8d);
  if (lVar8 != 0) {
    FUN_10a76c080(*(undefined8 *)(lVar8 + 0x8d8),&stack0xffffffffffffffa8);
  }
  if (in_stack_ffffffffffffffb8 < 0) {
    __ZdlPv(in_stack_ffffffffffffffa8);
  }
  lVar8 = param_2[0x45];
  *(undefined1 *)(lVar8 + 0x29) = 1;
  FUN_10a5fbfd8(lVar8,2);
  *param_1 = 0;
  plVar1 = plVar4 + 0x4b;
  lVar8 = plVar4[0x59];
  uVar5 = lVar8 - 1;
  plVar4[0x59] = uVar5;
  if (uVar5 < 8) {
    uVar5 = plVar1[lVar8 + 2];
    if (plVar4[0x5a] == uVar5) {
      return;
    }
  }
  else {
    uVar5 = *(ulong *)(plVar4[0x57] + -8);
    plVar4[0x57] = plVar4[0x57] + -8;
    if (plVar4[0x5a] == uVar5) {
      return;
    }
  }
  lVar8 = *plVar1;
  lVar10 = plVar4[0x4c];
  lVar7 = lVar10 - lVar8;
  uVar12 = lVar7 >> 4;
  if (uVar12 < uVar5) {
    uVar13 = uVar5 - uVar12;
    lVar11 = plVar4[0x4d];
    if ((ulong)(lVar11 - lVar10 >> 4) < uVar13) {
      if (uVar5 >> 0x3c == 0) {
        uVar6 = lVar11 - lVar8 >> 3;
        if (uVar6 <= uVar5) {
          uVar6 = uVar5;
        }
        if (0x7fffffffffffffef < (ulong)(lVar11 - lVar8)) {
          uVar6 = 0xfffffffffffffff;
        }
        plStack_68 = plVar1;
        if (uVar6 >> 0x3c == 0) {
          lVar3 = uVar6 << 4;
          __Znwm();
          lVar10 = lVar3 + lVar7;
          _bzero(lVar10,uVar13 * 0x10);
          lVar9 = lVar10 + uVar12 * -0x10;
          _memcpy(lVar9,lVar8,lVar7);
          *plVar1 = lVar9;
          plVar4[0x4c] = lVar10 + uVar13 * 0x10;
          plVar4[0x4d] = lVar3 + uVar6 * 0x10;
          lStack_88 = lVar8;
          lStack_80 = lVar8;
          lStack_78 = lVar8;
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
  else if (uVar5 < uVar12) {
    lVar8 = lVar8 + uVar5 * 0x10;
    while (lVar10 != lVar8) {
      lVar10 = lVar10 + -0x10;
      func_0x00010988c204(lVar10);
    }
    plVar4[0x4c] = lVar8;
  }
code_r0x00010988c138:
  plVar4[0x5a] = uVar5;
  return;
}



/* Entry: 10a61ee9c; end: 10a61ef6f;  */

void FUN_10a61ee9c(undefined4 *param_1,float param_2,long *param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

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
  
  plVar3 = param_3;
  (**(code **)(*param_3 + 0x58))();
  if ((ulong)plVar3[0x59] < 8) {
    plVar3[plVar3[0x59] + 0x4e] = plVar3[0x5a];
    plVar3[0x59] = plVar3[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar3 + 0x4b);
  }
  plVar4 = param_3;
  FUN_10a61df18(param_3,param_4);
  FUN_10a076f00(param_6);
  func_0x000109898518(param_3,param_5);
  FUN_10a5fcd84(plVar4,param_3);
  *param_1 = 3;
  *(double *)(param_1 + 2) = (double)param_2;
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



/* Entry: 10a61ef70; end: 10a61f077;  */

void FUN_10a61ef70(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  long *plVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
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
  undefined8 in_stack_ffffffffffffffa8;
  long in_stack_ffffffffffffffb8;
  
  plVar4 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar4[0x59] < 8) {
    plVar4[plVar4[0x59] + 0x4e] = plVar4[0x5a];
    plVar4[0x59] = plVar4[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar4 + 0x4b);
  }
  FUN_10a61df18(param_2,param_3);
  FUN_10a052e3c(param_5);
  lVar7 = param_2[0x2e];
  func_0x000107c2b054(&stack0xffffffffffffffa8,&UNK_10f668f3d);
  if (lVar7 != 0) {
    FUN_10a76c080(*(undefined8 *)(lVar7 + 0x8d8),&stack0xffffffffffffffa8);
  }
  if (in_stack_ffffffffffffffb8 < 0) {
    __ZdlPv(in_stack_ffffffffffffffa8);
  }
  *param_1 = 3;
  *(undefined8 *)(param_1 + 2) = 0;
  plVar1 = plVar4 + 0x4b;
  lVar7 = plVar4[0x59];
  uVar5 = lVar7 - 1;
  plVar4[0x59] = uVar5;
  if (uVar5 < 8) {
    uVar5 = plVar1[lVar7 + 2];
    if (plVar4[0x5a] == uVar5) {
      return;
    }
  }
  else {
    uVar5 = *(ulong *)(plVar4[0x57] + -8);
    plVar4[0x57] = plVar4[0x57] + -8;
    if (plVar4[0x5a] == uVar5) {
      return;
    }
  }
  lVar7 = *plVar1;
  lVar10 = plVar4[0x4c];
  lVar8 = lVar10 - lVar7;
  uVar12 = lVar8 >> 4;
  if (uVar12 < uVar5) {
    uVar13 = uVar5 - uVar12;
    lVar11 = plVar4[0x4d];
    if ((ulong)(lVar11 - lVar10 >> 4) < uVar13) {
      if (uVar5 >> 0x3c == 0) {
        uVar6 = lVar11 - lVar7 >> 3;
        if (uVar6 <= uVar5) {
          uVar6 = uVar5;
        }
        if (0x7fffffffffffffef < (ulong)(lVar11 - lVar7)) {
          uVar6 = 0xfffffffffffffff;
        }
        plStack_68 = plVar1;
        if (uVar6 >> 0x3c == 0) {
          lVar3 = uVar6 << 4;
          __Znwm();
          lVar10 = lVar3 + lVar8;
          _bzero(lVar10,uVar13 * 0x10);
          lVar9 = lVar10 + uVar12 * -0x10;
          _memcpy(lVar9,lVar7,lVar8);
          *plVar1 = lVar9;
          plVar4[0x4c] = lVar10 + uVar13 * 0x10;
          plVar4[0x4d] = lVar3 + uVar6 * 0x10;
          lStack_88 = lVar7;
          lStack_80 = lVar7;
          lStack_78 = lVar7;
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
  else if (uVar5 < uVar12) {
    lVar7 = lVar7 + uVar5 * 0x10;
    while (lVar10 != lVar7) {
      lVar10 = lVar10 + -0x10;
      func_0x00010988c204(lVar10);
    }
    plVar4[0x4c] = lVar7;
  }
code_r0x00010988c138:
  plVar4[0x5a] = uVar5;
  return;
}



/* Entry: 10a61f078; end: 10a61f197;  */

void FUN_10a61f078(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined1 *puVar1;
  code *pcVar2;
  long lVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  ulong uVar14;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long *plStack_68;
  undefined1 *in_stack_ffffffffffffffa8;
  ulong in_stack_ffffffffffffffb0;
  ulong in_stack_ffffffffffffffb8;
  
  plVar4 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar4[0x59] < 8) {
    plVar4[plVar4[0x59] + 0x4e] = plVar4[0x5a];
    plVar4[0x59] = plVar4[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar4 + 0x4b);
  }
  plVar5 = param_2;
  FUN_10a61df18(param_2,param_3);
  FUN_10a48f3fc(param_5);
  FUN_10a3f3f30(&stack0xffffffffffffffa8,param_2,param_4);
  puVar1 = in_stack_ffffffffffffffa8;
  if (-1 < (long)in_stack_ffffffffffffffb8) {
    in_stack_ffffffffffffffb0 = in_stack_ffffffffffffffb8 >> 0x38;
    puVar1 = &stack0xffffffffffffffa8;
  }
  FUN_10a5fcf18(plVar5,puVar1,in_stack_ffffffffffffffb0);
  if ((long)in_stack_ffffffffffffffb8 < 0) {
    __ZdlPv(in_stack_ffffffffffffffa8);
  }
  *param_1 = 2;
  *(char *)(param_1 + 2) = (char)plVar5;
  plVar5 = plVar4 + 0x4b;
  lVar6 = plVar4[0x59];
  uVar7 = lVar6 - 1;
  plVar4[0x59] = uVar7;
  if (uVar7 < 8) {
    uVar7 = plVar5[lVar6 + 2];
    if (plVar4[0x5a] == uVar7) {
      return;
    }
  }
  else {
    uVar7 = *(ulong *)(plVar4[0x57] + -8);
    plVar4[0x57] = plVar4[0x57] + -8;
    if (plVar4[0x5a] == uVar7) {
      return;
    }
  }
  lVar6 = *plVar5;
  lVar11 = plVar4[0x4c];
  lVar9 = lVar11 - lVar6;
  uVar13 = lVar9 >> 4;
  if (uVar13 < uVar7) {
    uVar14 = uVar7 - uVar13;
    lVar12 = plVar4[0x4d];
    if ((ulong)(lVar12 - lVar11 >> 4) < uVar14) {
      if (uVar7 >> 0x3c == 0) {
        uVar8 = lVar12 - lVar6 >> 3;
        if (uVar8 <= uVar7) {
          uVar8 = uVar7;
        }
        if (0x7fffffffffffffef < (ulong)(lVar12 - lVar6)) {
          uVar8 = 0xfffffffffffffff;
        }
        plStack_68 = plVar5;
        if (uVar8 >> 0x3c == 0) {
          lVar3 = uVar8 << 4;
          __Znwm();
          lVar11 = lVar3 + lVar9;
          _bzero(lVar11,uVar14 * 0x10);
          lVar10 = lVar11 + uVar13 * -0x10;
          _memcpy(lVar10,lVar6,lVar9);
          *plVar5 = lVar10;
          plVar4[0x4c] = lVar11 + uVar14 * 0x10;
          plVar4[0x4d] = lVar3 + uVar8 * 0x10;
          lStack_88 = lVar6;
          lStack_80 = lVar6;
          lStack_78 = lVar6;
          lStack_70 = lVar12;
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
    _bzero(lVar11,uVar14 * 0x10);
    plVar4[0x4c] = lVar11 + uVar14 * 0x10;
  }
  else if (uVar7 < uVar13) {
    lVar6 = lVar6 + uVar7 * 0x10;
    while (lVar11 != lVar6) {
      lVar11 = lVar11 + -0x10;
      func_0x00010988c204(lVar11);
    }
    plVar4[0x4c] = lVar6;
  }
code_r0x00010988c138:
  plVar4[0x5a] = uVar7;
  return;
}



/* Entry: 10a61f198; end: 10a61f2c3;  */

void FUN_10a61f198(undefined4 *param_1,float param_2,long *param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  long lVar1;
  long ***ppplVar2;
  long ****pppplVar3;
  code *pcVar4;
  long lVar5;
  long *plVar6;
  long *plVar7;
  long ***ppplVar8;
  long lVar9;
  ulong uVar10;
  long ***ppplVar11;
  long lVar12;
  long ***ppplVar13;
  long **pplStack_88;
  long **pplStack_80;
  long **pplStack_78;
  long lStack_70;
  long ***ppplStack_68;
  ulong in_stack_ffffffffffffffa0;
  ulong in_stack_ffffffffffffffa8;
  
  plVar6 = param_3;
  (**(code **)(*param_3 + 0x58))();
  if ((ulong)plVar6[0x59] < 8) {
    plVar6[plVar6[0x59] + 0x4e] = plVar6[0x5a];
    plVar6[0x59] = plVar6[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar6 + 0x4b);
  }
  plVar7 = param_3;
  FUN_10a61df18(param_3,param_4);
  FUN_10a48f3fc(param_6);
  FUN_10a3f3f30(&ppplStack_68,param_3,param_5);
  pppplVar3 = (long ****)ppplStack_68;
  if (-1 < (long)in_stack_ffffffffffffffa8) {
    in_stack_ffffffffffffffa0 = in_stack_ffffffffffffffa8 >> 0x38;
    pppplVar3 = &ppplStack_68;
  }
  FUN_10a5fd00c(plVar7,pppplVar3,in_stack_ffffffffffffffa0);
  if ((long)in_stack_ffffffffffffffa8 < 0) {
    __ZdlPv(ppplStack_68);
  }
  *param_1 = 3;
  *(double *)(param_1 + 2) = (double)param_2;
  pppplVar3 = (long ****)(plVar6 + 0x4b);
  lVar9 = plVar6[0x59];
  uVar10 = lVar9 - 1;
  plVar6[0x59] = uVar10;
  if (uVar10 < 8) {
    ppplVar8 = pppplVar3[lVar9 + 2];
    if ((long ***)plVar6[0x5a] == ppplVar8) {
      return;
    }
  }
  else {
    ppplVar8 = *(long ****)(plVar6[0x57] + -8);
    plVar6[0x57] = (long)(plVar6[0x57] + -8);
    if ((long ***)plVar6[0x5a] == ppplVar8) {
      return;
    }
  }
  ppplVar2 = *pppplVar3;
  ppplVar11 = (long ***)plVar6[0x4c];
  lVar9 = (long)ppplVar11 - (long)ppplVar2;
  ppplVar13 = (long ***)(lVar9 >> 4);
  if (ppplVar13 < ppplVar8) {
    uVar10 = (long)ppplVar8 - (long)ppplVar13;
    lVar12 = plVar6[0x4d];
    if ((ulong)(lVar12 - (long)ppplVar11 >> 4) < uVar10) {
      if ((ulong)ppplVar8 >> 0x3c == 0) {
        ppplVar11 = (long ***)(lVar12 - (long)ppplVar2 >> 3);
        if (ppplVar11 <= ppplVar8) {
          ppplVar11 = ppplVar8;
        }
        if (0x7fffffffffffffef < (ulong)(lVar12 - (long)ppplVar2)) {
          ppplVar11 = (long ***)0xfffffffffffffff;
        }
        ppplStack_68 = (long ***)pppplVar3;
        if ((ulong)ppplVar11 >> 0x3c == 0) {
          lVar5 = (long)ppplVar11 << 4;
          __Znwm();
          lVar1 = lVar5 + lVar9;
          _bzero(lVar1,uVar10 * 0x10);
          ppplVar13 = (long ***)(lVar1 + (long)ppplVar13 * -0x10);
          _memcpy(ppplVar13,ppplVar2,lVar9);
          *pppplVar3 = ppplVar13;
          plVar6[0x4c] = lVar1 + uVar10 * 0x10;
          plVar6[0x4d] = lVar5 + (long)ppplVar11 * 0x10;
          pplStack_88 = (long **)ppplVar2;
          pplStack_80 = (long **)ppplVar2;
          pplStack_78 = (long **)ppplVar2;
          lStack_70 = lVar12;
          func_0x00010988c1b8(&pplStack_88);
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
    _bzero(ppplVar11,uVar10 * 0x10);
    plVar6[0x4c] = (long)(ppplVar11 + uVar10 * 2);
  }
  else if (ppplVar8 < ppplVar13) {
    while (ppplVar11 != ppplVar2 + (long)ppplVar8 * 2) {
      ppplVar11 = ppplVar11 + -2;
      func_0x00010988c204(ppplVar11);
    }
    plVar6[0x4c] = (long)(ppplVar2 + (long)ppplVar8 * 2);
  }
code_r0x00010988c138:
  plVar6[0x5a] = (long)ppplVar8;
  return;
}



/* Entry: 10a61f2c4; end: 10a61f383;  */

void FUN_10a61f2c4(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long *plVar1;
  int iVar2;
  code *pcVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  ulong uVar14;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long *plStack_68;
  
  plVar5 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar5[0x59] < 8) {
    plVar5[plVar5[0x59] + 0x4e] = plVar5[0x5a];
    plVar5[0x59] = plVar5[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar5 + 0x4b);
  }
  FUN_10a61df18(param_2,param_3);
  FUN_10a052e3c(param_5);
  iVar2 = *(int *)(param_2[0x45] + 0x58);
  *param_1 = 3;
  *(double *)(param_1 + 2) = (double)iVar2;
  plVar1 = plVar5 + 0x4b;
  lVar6 = plVar5[0x59];
  uVar7 = lVar6 - 1;
  plVar5[0x59] = uVar7;
  if (uVar7 < 8) {
    uVar7 = plVar1[lVar6 + 2];
    if (plVar5[0x5a] == uVar7) {
      return;
    }
  }
  else {
    uVar7 = *(ulong *)(plVar5[0x57] + -8);
    plVar5[0x57] = plVar5[0x57] + -8;
    if (plVar5[0x5a] == uVar7) {
      return;
    }
  }
  lVar6 = *plVar1;
  lVar11 = plVar5[0x4c];
  lVar9 = lVar11 - lVar6;
  uVar13 = lVar9 >> 4;
  if (uVar13 < uVar7) {
    uVar14 = uVar7 - uVar13;
    lVar12 = plVar5[0x4d];
    if ((ulong)(lVar12 - lVar11 >> 4) < uVar14) {
      if (uVar7 >> 0x3c == 0) {
        uVar8 = lVar12 - lVar6 >> 3;
        if (uVar8 <= uVar7) {
          uVar8 = uVar7;
        }
        if (0x7fffffffffffffef < (ulong)(lVar12 - lVar6)) {
          uVar8 = 0xfffffffffffffff;
        }
        plStack_68 = plVar1;
        if (uVar8 >> 0x3c == 0) {
          lVar4 = uVar8 << 4;
          __Znwm();
          lVar11 = lVar4 + lVar9;
          _bzero(lVar11,uVar14 * 0x10);
          lVar10 = lVar11 + uVar13 * -0x10;
          _memcpy(lVar10,lVar6,lVar9);
          *plVar1 = lVar10;
          plVar5[0x4c] = lVar11 + uVar14 * 0x10;
          plVar5[0x4d] = lVar4 + uVar8 * 0x10;
          lStack_88 = lVar6;
          lStack_80 = lVar6;
          lStack_78 = lVar6;
          lStack_70 = lVar12;
          func_0x00010988c1b8(&lStack_88);
          goto code_r0x00010988c138;
        }
        func_0x000104c4f740();
      }
      else {
        func_0x00010988c1a4();
      }
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar3)();
    }
    _bzero(lVar11,uVar14 * 0x10);
    plVar5[0x4c] = lVar11 + uVar14 * 0x10;
  }
  else if (uVar7 < uVar13) {
    lVar6 = lVar6 + uVar7 * 0x10;
    while (lVar11 != lVar6) {
      lVar11 = lVar11 + -0x10;
      func_0x00010988c204(lVar11);
    }
    plVar5[0x4c] = lVar6;
  }
code_r0x00010988c138:
  plVar5[0x5a] = uVar7;
  return;
}



/* Entry: 10a61f384; end: 10a61f45f;  */

void FUN_10a61f384(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  FUN_10a61e094(param_2,param_3);
  FUN_10a076f00(param_5);
  func_0x000109898518(param_2,param_4);
  if (0x7f < (uint)param_2) {
    FUN_10a00946c(&UNK_10f652c32);
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10a61f44c);
    (*pcVar1)();
  }
  *(uint *)(plVar4[0x45] + 0x58) = (uint)param_2;
  *param_1 = 0;
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



/* Entry: 10a61f460; end: 10a61f56f;  */

void FUN_10a61f460(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  code *pcVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
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
  undefined8 in_stack_ffffffffffffffa8;
  long in_stack_ffffffffffffffb8;
  
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
  FUN_10a61df18(param_2,param_3);
  FUN_10a052e3c(param_5);
  lVar10 = plVar4[0x2e];
  func_0x000107c2b054(&stack0xffffffffffffffa8,&UNK_10f6690f1);
  if (lVar10 != 0) {
    FUN_10a76c080(*(undefined8 *)(lVar10 + 0x8d8),&stack0xffffffffffffffa8);
  }
  if (in_stack_ffffffffffffffb8 < 0) {
    __ZdlPv(in_stack_ffffffffffffffa8);
  }
  FUN_10a05b924(param_1,param_2,plVar4[0x45] + 0x40);
  plVar4 = plVar3 + 0x4b;
  lVar10 = plVar3[0x59];
  uVar5 = lVar10 - 1;
  plVar3[0x59] = uVar5;
  if (uVar5 < 8) {
    uVar5 = plVar4[lVar10 + 2];
    if (plVar3[0x5a] == uVar5) {
      return;
    }
  }
  else {
    uVar5 = *(ulong *)(plVar3[0x57] + -8);
    plVar3[0x57] = plVar3[0x57] + -8;
    if (plVar3[0x5a] == uVar5) {
      return;
    }
  }
  lVar10 = *plVar4;
  lVar9 = plVar3[0x4c];
  lVar7 = lVar9 - lVar10;
  uVar12 = lVar7 >> 4;
  if (uVar12 < uVar5) {
    uVar13 = uVar5 - uVar12;
    lVar11 = plVar3[0x4d];
    if ((ulong)(lVar11 - lVar9 >> 4) < uVar13) {
      if (uVar5 >> 0x3c == 0) {
        uVar6 = lVar11 - lVar10 >> 3;
        if (uVar6 <= uVar5) {
          uVar6 = uVar5;
        }
        if (0x7fffffffffffffef < (ulong)(lVar11 - lVar10)) {
          uVar6 = 0xfffffffffffffff;
        }
        plStack_68 = plVar4;
        if (uVar6 >> 0x3c == 0) {
          lVar2 = uVar6 << 4;
          __Znwm();
          lVar9 = lVar2 + lVar7;
          _bzero(lVar9,uVar13 * 0x10);
          lVar8 = lVar9 + uVar12 * -0x10;
          _memcpy(lVar8,lVar10,lVar7);
          *plVar4 = lVar8;
          plVar3[0x4c] = lVar9 + uVar13 * 0x10;
          plVar3[0x4d] = lVar2 + uVar6 * 0x10;
          lStack_88 = lVar10;
          lStack_80 = lVar10;
          lStack_78 = lVar10;
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
    _bzero(lVar9,uVar13 * 0x10);
    plVar3[0x4c] = lVar9 + uVar13 * 0x10;
  }
  else if (uVar5 < uVar12) {
    lVar10 = lVar10 + uVar5 * 0x10;
    while (lVar9 != lVar10) {
      lVar9 = lVar9 + -0x10;
      func_0x00010988c204(lVar9);
    }
    plVar3[0x4c] = lVar10;
  }
code_r0x00010988c138:
  plVar3[0x5a] = uVar5;
  return;
}



/* Entry: 10a61f570; end: 10a61f68b;  */

void FUN_10a61f570(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  char cVar1;
  bool bVar2;
  code *pcVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  ulong uVar14;
  ulong uVar15;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long *plStack_68;
  long *in_stack_ffffffffffffffb8;
  
  plVar5 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar5[0x59] < 8) {
    plVar5[plVar5[0x59] + 0x4e] = plVar5[0x5a];
    plVar5[0x59] = plVar5[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar5 + 0x4b);
  }
  plVar6 = param_2;
  FUN_10a61e094(param_2,param_3);
  FUN_10a1f9134(param_5);
  FUN_10a065cdc(&stack0xffffffffffffffb0,param_2,param_4);
  FUN_10a5fd3d4(plVar6,&stack0xffffffffffffffb0);
  if (in_stack_ffffffffffffffb8 != (long *)0x0) {
    plVar6 = in_stack_ffffffffffffffb8 + 1;
    do {
      lVar9 = *plVar6;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar2) {
        *plVar6 = lVar9 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar9 == 0) {
      (**(code **)(*in_stack_ffffffffffffffb8 + 0x10))(in_stack_ffffffffffffffb8);
      __ZNSt3__119__shared_weak_count14__release_weakEv(in_stack_ffffffffffffffb8);
    }
  }
  *param_1 = 0;
  plVar6 = plVar5 + 0x4b;
  lVar9 = plVar5[0x59];
  uVar7 = lVar9 - 1;
  plVar5[0x59] = uVar7;
  if (uVar7 < 8) {
    uVar7 = plVar6[lVar9 + 2];
    if (plVar5[0x5a] == uVar7) {
      return;
    }
  }
  else {
    uVar7 = *(ulong *)(plVar5[0x57] + -8);
    plVar5[0x57] = plVar5[0x57] + -8;
    if (plVar5[0x5a] == uVar7) {
      return;
    }
  }
  lVar9 = *plVar6;
  lVar12 = plVar5[0x4c];
  lVar10 = lVar12 - lVar9;
  uVar14 = lVar10 >> 4;
  if (uVar14 < uVar7) {
    uVar15 = uVar7 - uVar14;
    lVar13 = plVar5[0x4d];
    if ((ulong)(lVar13 - lVar12 >> 4) < uVar15) {
      if (uVar7 >> 0x3c == 0) {
        uVar8 = lVar13 - lVar9 >> 3;
        if (uVar8 <= uVar7) {
          uVar8 = uVar7;
        }
        if (0x7fffffffffffffef < (ulong)(lVar13 - lVar9)) {
          uVar8 = 0xfffffffffffffff;
        }
        plStack_68 = plVar6;
        if (uVar8 >> 0x3c == 0) {
          lVar4 = uVar8 << 4;
          __Znwm();
          lVar12 = lVar4 + lVar10;
          _bzero(lVar12,uVar15 * 0x10);
          lVar11 = lVar12 + uVar14 * -0x10;
          _memcpy(lVar11,lVar9,lVar10);
          *plVar6 = lVar11;
          plVar5[0x4c] = lVar12 + uVar15 * 0x10;
          plVar5[0x4d] = lVar4 + uVar8 * 0x10;
          lStack_88 = lVar9;
          lStack_80 = lVar9;
          lStack_78 = lVar9;
          lStack_70 = lVar13;
          func_0x00010988c1b8(&lStack_88);
          goto code_r0x00010988c138;
        }
        func_0x000104c4f740();
      }
      else {
        func_0x00010988c1a4();
      }
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar3)();
    }
    _bzero(lVar12,uVar15 * 0x10);
    plVar5[0x4c] = lVar12 + uVar15 * 0x10;
  }
  else if (uVar7 < uVar14) {
    lVar9 = lVar9 + uVar7 * 0x10;
    while (lVar12 != lVar9) {
      lVar12 = lVar12 + -0x10;
      func_0x00010988c204(lVar12);
    }
    plVar5[0x4c] = lVar9;
  }
code_r0x00010988c138:
  plVar5[0x5a] = uVar7;
  return;
}



/* Entry: 10a61f68c; end: 10a61f7af;  */

void FUN_10a61f68c(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  long *plVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  double dVar14;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long *plStack_68;
  undefined8 in_stack_ffffffffffffffa8;
  long in_stack_ffffffffffffffb8;
  
  plVar4 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar4[0x59] < 8) {
    plVar4[plVar4[0x59] + 0x4e] = plVar4[0x5a];
    plVar4[0x59] = plVar4[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar4 + 0x4b);
  }
  FUN_10a61df18(param_2,param_3);
  FUN_10a052e3c(param_5);
  lVar8 = param_2[0x2e];
  func_0x000107c2b054(&stack0xffffffffffffffa8,&UNK_10f668d77);
  if (lVar8 != 0) {
    FUN_10a76c080(*(undefined8 *)(lVar8 + 0x8d8),&stack0xffffffffffffffa8);
  }
  if (in_stack_ffffffffffffffb8 < 0) {
    __ZdlPv(in_stack_ffffffffffffffa8);
  }
  dVar14 = -1.0;
  if (*(char *)(param_2[0x45] + 0xa8) == '\x01') {
    dVar14 = (double)*(float *)(param_2[0x45] + 0xa4);
  }
  *param_1 = 3;
  *(double *)(param_1 + 2) = dVar14;
  plVar1 = plVar4 + 0x4b;
  lVar8 = plVar4[0x59];
  uVar5 = lVar8 - 1;
  plVar4[0x59] = uVar5;
  if (uVar5 < 8) {
    uVar5 = plVar1[lVar8 + 2];
    if (plVar4[0x5a] == uVar5) {
      return;
    }
  }
  else {
    uVar5 = *(ulong *)(plVar4[0x57] + -8);
    plVar4[0x57] = plVar4[0x57] + -8;
    if (plVar4[0x5a] == uVar5) {
      return;
    }
  }
  lVar8 = *plVar1;
  lVar10 = plVar4[0x4c];
  lVar7 = lVar10 - lVar8;
  uVar12 = lVar7 >> 4;
  if (uVar12 < uVar5) {
    uVar13 = uVar5 - uVar12;
    lVar11 = plVar4[0x4d];
    if ((ulong)(lVar11 - lVar10 >> 4) < uVar13) {
      if (uVar5 >> 0x3c == 0) {
        uVar6 = lVar11 - lVar8 >> 3;
        if (uVar6 <= uVar5) {
          uVar6 = uVar5;
        }
        if (0x7fffffffffffffef < (ulong)(lVar11 - lVar8)) {
          uVar6 = 0xfffffffffffffff;
        }
        plStack_68 = plVar1;
        if (uVar6 >> 0x3c == 0) {
          lVar3 = uVar6 << 4;
          __Znwm();
          lVar10 = lVar3 + lVar7;
          _bzero(lVar10,uVar13 * 0x10);
          lVar9 = lVar10 + uVar12 * -0x10;
          _memcpy(lVar9,lVar8,lVar7);
          *plVar1 = lVar9;
          plVar4[0x4c] = lVar10 + uVar13 * 0x10;
          plVar4[0x4d] = lVar3 + uVar6 * 0x10;
          lStack_88 = lVar8;
          lStack_80 = lVar8;
          lStack_78 = lVar8;
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
  else if (uVar5 < uVar12) {
    lVar8 = lVar8 + uVar5 * 0x10;
    while (lVar10 != lVar8) {
      lVar10 = lVar10 + -0x10;
      func_0x00010988c204(lVar10);
    }
    plVar4[0x4c] = lVar8;
  }
code_r0x00010988c138:
  plVar4[0x5a] = uVar5;
  return;
}



/* Entry: 10a61f7b0; end: 10a61f91b;  */

void FUN_10a61f7b0(undefined4 *param_1,long *param_2,undefined8 param_3,int *param_4,
                  undefined8 param_5)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  long *plVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  double dVar17;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long *plStack_68;
  long in_stack_ffffffffffffffa8;
  
  plVar4 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar4[0x59] < 8) {
    plVar4[plVar4[0x59] + 0x4e] = plVar4[0x5a];
    plVar4[0x59] = plVar4[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar4 + 0x4b);
  }
  FUN_10a61e094(param_2,param_3);
  FUN_10a05ed04(param_5);
  if (*param_4 != 3) {
    func_0x00010988bd28(&UNK_10f68f550);
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x10a61f8f0);
    (*pcVar2)();
  }
  dVar17 = *(double *)(param_4 + 2);
  lVar8 = param_2[0x2e];
  func_0x000107c2b054(&plStack_68,&UNK_10f668d61);
  if (lVar8 != 0) {
    FUN_10a76c080(*(undefined8 *)(lVar8 + 0x8d8),&plStack_68);
  }
  if (in_stack_ffffffffffffffa8 < 0) {
    __ZdlPv(plStack_68);
  }
  fVar14 = (float)dVar17;
  if (0x7fefffffffffffff < (ulong)ABS(dVar17)) {
    fVar14 = 0.0;
  }
  fVar16 = 1.0;
  if (fVar14 <= 1.0) {
    fVar16 = fVar14;
  }
  fVar15 = 0.0;
  if (0.0 <= fVar14) {
    fVar15 = fVar16;
  }
  lVar8 = param_2[0x45];
  *(float *)(lVar8 + 0xa4) = fVar15;
  *(undefined1 *)(lVar8 + 0xa8) = 1;
  *param_1 = 0;
  plVar1 = plVar4 + 0x4b;
  lVar8 = plVar4[0x59];
  uVar5 = lVar8 - 1;
  plVar4[0x59] = uVar5;
  if (uVar5 < 8) {
    uVar5 = plVar1[lVar8 + 2];
    if (plVar4[0x5a] == uVar5) {
      return;
    }
  }
  else {
    uVar5 = *(ulong *)(plVar4[0x57] + -8);
    plVar4[0x57] = plVar4[0x57] + -8;
    if (plVar4[0x5a] == uVar5) {
      return;
    }
  }
  lVar8 = *plVar1;
  lVar10 = plVar4[0x4c];
  lVar7 = lVar10 - lVar8;
  uVar12 = lVar7 >> 4;
  if (uVar12 < uVar5) {
    uVar13 = uVar5 - uVar12;
    lVar11 = plVar4[0x4d];
    if ((ulong)(lVar11 - lVar10 >> 4) < uVar13) {
      if (uVar5 >> 0x3c == 0) {
        uVar6 = lVar11 - lVar8 >> 3;
        if (uVar6 <= uVar5) {
          uVar6 = uVar5;
        }
        if (0x7fffffffffffffef < (ulong)(lVar11 - lVar8)) {
          uVar6 = 0xfffffffffffffff;
        }
        plStack_68 = plVar1;
        if (uVar6 >> 0x3c == 0) {
          lVar3 = uVar6 << 4;
          __Znwm();
          lVar10 = lVar3 + lVar7;
          _bzero(lVar10,uVar13 * 0x10);
          lVar9 = lVar10 + uVar12 * -0x10;
          _memcpy(lVar9,lVar8,lVar7);
          *plVar1 = lVar9;
          plVar4[0x4c] = lVar10 + uVar13 * 0x10;
          plVar4[0x4d] = lVar3 + uVar6 * 0x10;
          lStack_88 = lVar8;
          lStack_80 = lVar8;
          lStack_78 = lVar8;
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
  else if (uVar5 < uVar12) {
    lVar8 = lVar8 + uVar5 * 0x10;
    while (lVar10 != lVar8) {
      lVar10 = lVar10 + -0x10;
      func_0x00010988c204(lVar10);
    }
    plVar4[0x4c] = lVar8;
  }
code_r0x00010988c138:
  plVar4[0x5a] = uVar5;
  return;
}



/* Entry: 10a61f91c; end: 10a61f9d7;  */

void FUN_10a61f91c(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long *plVar1;
  undefined1 uVar2;
  code *pcVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  ulong uVar14;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long *plStack_68;
  
  plVar5 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar5[0x59] < 8) {
    plVar5[plVar5[0x59] + 0x4e] = plVar5[0x5a];
    plVar5[0x59] = plVar5[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar5 + 0x4b);
  }
  FUN_10a61df18(param_2,param_3);
  FUN_10a052e3c(param_5);
  uVar2 = *(undefined1 *)(param_2[0x45] + 0xc);
  *param_1 = 2;
  *(undefined1 *)(param_1 + 2) = uVar2;
  plVar1 = plVar5 + 0x4b;
  lVar6 = plVar5[0x59];
  uVar7 = lVar6 - 1;
  plVar5[0x59] = uVar7;
  if (uVar7 < 8) {
    uVar7 = plVar1[lVar6 + 2];
    if (plVar5[0x5a] == uVar7) {
      return;
    }
  }
  else {
    uVar7 = *(ulong *)(plVar5[0x57] + -8);
    plVar5[0x57] = plVar5[0x57] + -8;
    if (plVar5[0x5a] == uVar7) {
      return;
    }
  }
  lVar6 = *plVar1;
  lVar11 = plVar5[0x4c];
  lVar9 = lVar11 - lVar6;
  uVar13 = lVar9 >> 4;
  if (uVar13 < uVar7) {
    uVar14 = uVar7 - uVar13;
    lVar12 = plVar5[0x4d];
    if ((ulong)(lVar12 - lVar11 >> 4) < uVar14) {
      if (uVar7 >> 0x3c == 0) {
        uVar8 = lVar12 - lVar6 >> 3;
        if (uVar8 <= uVar7) {
          uVar8 = uVar7;
        }
        if (0x7fffffffffffffef < (ulong)(lVar12 - lVar6)) {
          uVar8 = 0xfffffffffffffff;
        }
        plStack_68 = plVar1;
        if (uVar8 >> 0x3c == 0) {
          lVar4 = uVar8 << 4;
          __Znwm();
          lVar11 = lVar4 + lVar9;
          _bzero(lVar11,uVar14 * 0x10);
          lVar10 = lVar11 + uVar13 * -0x10;
          _memcpy(lVar10,lVar6,lVar9);
          *plVar1 = lVar10;
          plVar5[0x4c] = lVar11 + uVar14 * 0x10;
          plVar5[0x4d] = lVar4 + uVar8 * 0x10;
          lStack_88 = lVar6;
          lStack_80 = lVar6;
          lStack_78 = lVar6;
          lStack_70 = lVar12;
          func_0x00010988c1b8(&lStack_88);
          goto code_r0x00010988c138;
        }
        func_0x000104c4f740();
      }
      else {
        func_0x00010988c1a4();
      }
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar3)();
    }
    _bzero(lVar11,uVar14 * 0x10);
    plVar5[0x4c] = lVar11 + uVar14 * 0x10;
  }
  else if (uVar7 < uVar13) {
    lVar6 = lVar6 + uVar7 * 0x10;
    while (lVar11 != lVar6) {
      lVar11 = lVar11 + -0x10;
      func_0x00010988c204(lVar11);
    }
    plVar5[0x4c] = lVar6;
  }
code_r0x00010988c138:
  plVar5[0x5a] = uVar7;
  return;
}



/* Entry: 10a61f9d8; end: 10a61faab;  */

void FUN_10a61f9d8(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  code *pcVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  ulong uVar5;
  long lVar6;
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
  FUN_10a61e094(param_2,param_3);
  FUN_10a065020(param_5);
  func_0x00010989847c(param_2,param_4);
  lVar6 = plVar4[0x45];
  *(char *)(lVar6 + 0xc) = (char)param_2;
  if ((int)param_2 != 0) {
    FUN_10a5fbfd8(lVar6,3);
  }
  *param_1 = 0;
  plVar4 = plVar3 + 0x4b;
  lVar6 = plVar3[0x59];
  uVar5 = lVar6 - 1;
  plVar3[0x59] = uVar5;
  if (uVar5 < 8) {
    uVar5 = plVar4[lVar6 + 2];
    if (plVar3[0x5a] == uVar5) {
      return;
    }
  }
  else {
    uVar5 = *(ulong *)(plVar3[0x57] + -8);
    plVar3[0x57] = plVar3[0x57] + -8;
    if (plVar3[0x5a] == uVar5) {
      return;
    }
  }
  lVar6 = *plVar4;
  lVar10 = plVar3[0x4c];
  lVar8 = lVar10 - lVar6;
  uVar12 = lVar8 >> 4;
  if (uVar12 < uVar5) {
    uVar13 = uVar5 - uVar12;
    lVar11 = plVar3[0x4d];
    if ((ulong)(lVar11 - lVar10 >> 4) < uVar13) {
      if (uVar5 >> 0x3c == 0) {
        uVar7 = lVar11 - lVar6 >> 3;
        if (uVar7 <= uVar5) {
          uVar7 = uVar5;
        }
        if (0x7fffffffffffffef < (ulong)(lVar11 - lVar6)) {
          uVar7 = 0xfffffffffffffff;
        }
        plStack_68 = plVar4;
        if (uVar7 >> 0x3c == 0) {
          lVar2 = uVar7 << 4;
          __Znwm();
          lVar10 = lVar2 + lVar8;
          _bzero(lVar10,uVar13 * 0x10);
          lVar9 = lVar10 + uVar12 * -0x10;
          _memcpy(lVar9,lVar6,lVar8);
          *plVar4 = lVar9;
          plVar3[0x4c] = lVar10 + uVar13 * 0x10;
          plVar3[0x4d] = lVar2 + uVar7 * 0x10;
          lStack_88 = lVar6;
          lStack_80 = lVar6;
          lStack_78 = lVar6;
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
  else if (uVar5 < uVar12) {
    lVar6 = lVar6 + uVar5 * 0x10;
    while (lVar10 != lVar6) {
      lVar10 = lVar10 + -0x10;
      func_0x00010988c204(lVar10);
    }
    plVar3[0x4c] = lVar6;
  }
code_r0x00010988c138:
  plVar3[0x5a] = uVar5;
  return;
}



/* Entry: 10a61faac; end: 10a61fb33;  */

void FUN_10a61faac(undefined4 *param_1,long param_2,code *param_3,ulong param_4,undefined8 param_5,
                  undefined8 param_6,undefined8 param_7)

{
  long *plVar1;
  long lVar2;
  
  lVar2 = param_2;
  FUN_10a61e094(param_2,param_5);
  FUN_10a065020(param_7);
  func_0x00010989847c(param_2,param_6);
  plVar1 = (long *)(lVar2 + ((long)param_4 >> 1));
  if ((param_4 & 1) != 0) {
    param_3 = *(code **)(*plVar1 + ((ulong)param_3 & 0xffffffff));
  }
  (*param_3)(plVar1,param_2);
  *param_1 = 0;
  return;
}



/* Entry: 10a61fb34; end: 10a61fc3b;  */

void FUN_10a61fb34(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  long *plVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
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
  undefined8 in_stack_ffffffffffffffa8;
  long in_stack_ffffffffffffffb8;
  
  plVar4 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar4[0x59] < 8) {
    plVar4[plVar4[0x59] + 0x4e] = plVar4[0x5a];
    plVar4[0x59] = plVar4[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar4 + 0x4b);
  }
  FUN_10a61df18(param_2,param_3);
  FUN_10a052e3c(param_5);
  lVar7 = param_2[0x2e];
  func_0x000107c2b054(&stack0xffffffffffffffa8,&UNK_10f668dca);
  if (lVar7 != 0) {
    FUN_10a76c080(*(undefined8 *)(lVar7 + 0x8d8),&stack0xffffffffffffffa8);
  }
  if (in_stack_ffffffffffffffb8 < 0) {
    __ZdlPv(in_stack_ffffffffffffffa8);
  }
  *param_1 = 2;
  *(undefined1 *)(param_1 + 2) = 0;
  plVar1 = plVar4 + 0x4b;
  lVar7 = plVar4[0x59];
  uVar5 = lVar7 - 1;
  plVar4[0x59] = uVar5;
  if (uVar5 < 8) {
    uVar5 = plVar1[lVar7 + 2];
    if (plVar4[0x5a] == uVar5) {
      return;
    }
  }
  else {
    uVar5 = *(ulong *)(plVar4[0x57] + -8);
    plVar4[0x57] = plVar4[0x57] + -8;
    if (plVar4[0x5a] == uVar5) {
      return;
    }
  }
  lVar7 = *plVar1;
  lVar10 = plVar4[0x4c];
  lVar8 = lVar10 - lVar7;
  uVar12 = lVar8 >> 4;
  if (uVar12 < uVar5) {
    uVar13 = uVar5 - uVar12;
    lVar11 = plVar4[0x4d];
    if ((ulong)(lVar11 - lVar10 >> 4) < uVar13) {
      if (uVar5 >> 0x3c == 0) {
        uVar6 = lVar11 - lVar7 >> 3;
        if (uVar6 <= uVar5) {
          uVar6 = uVar5;
        }
        if (0x7fffffffffffffef < (ulong)(lVar11 - lVar7)) {
          uVar6 = 0xfffffffffffffff;
        }
        plStack_68 = plVar1;
        if (uVar6 >> 0x3c == 0) {
          lVar3 = uVar6 << 4;
          __Znwm();
          lVar10 = lVar3 + lVar8;
          _bzero(lVar10,uVar13 * 0x10);
          lVar9 = lVar10 + uVar12 * -0x10;
          _memcpy(lVar9,lVar7,lVar8);
          *plVar1 = lVar9;
          plVar4[0x4c] = lVar10 + uVar13 * 0x10;
          plVar4[0x4d] = lVar3 + uVar6 * 0x10;
          lStack_88 = lVar7;
          lStack_80 = lVar7;
          lStack_78 = lVar7;
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
  else if (uVar5 < uVar12) {
    lVar7 = lVar7 + uVar5 * 0x10;
    while (lVar10 != lVar7) {
      lVar10 = lVar10 + -0x10;
      func_0x00010988c204(lVar10);
    }
    plVar4[0x4c] = lVar7;
  }
code_r0x00010988c138:
  plVar4[0x5a] = uVar5;
  return;
}



/* Entry: 10a61fc3c; end: 10a61fcf3;  */

void FUN_10a61fc3c(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  FUN_10a61faac(param_1,param_2,FUN_10a5fc854,0,param_3,param_4,param_5);
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



/* Entry: 10a61fcf4; end: 10a61fe03;  */

void FUN_10a61fcf4(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long *plVar1;
  undefined1 uVar2;
  code *pcVar3;
  long lVar4;
  long *plVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  ulong uVar14;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long *plStack_68;
  undefined8 in_stack_ffffffffffffffa8;
  long in_stack_ffffffffffffffb8;
  
  plVar5 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar5[0x59] < 8) {
    plVar5[plVar5[0x59] + 0x4e] = plVar5[0x5a];
    plVar5[0x59] = plVar5[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar5 + 0x4b);
  }
  FUN_10a61df18(param_2,param_3);
  FUN_10a052e3c(param_5);
  lVar9 = param_2[0x2e];
  func_0x000107c2b054(&stack0xffffffffffffffa8,&UNK_10f668e04);
  if (lVar9 != 0) {
    FUN_10a76c080(*(undefined8 *)(lVar9 + 0x8d8),&stack0xffffffffffffffa8);
  }
  if (in_stack_ffffffffffffffb8 < 0) {
    __ZdlPv(in_stack_ffffffffffffffa8);
  }
  uVar2 = *(undefined1 *)(param_2[0x45] + 0x28);
  *param_1 = 2;
  *(undefined1 *)(param_1 + 2) = uVar2;
  plVar1 = plVar5 + 0x4b;
  lVar9 = plVar5[0x59];
  uVar6 = lVar9 - 1;
  plVar5[0x59] = uVar6;
  if (uVar6 < 8) {
    uVar6 = plVar1[lVar9 + 2];
    if (plVar5[0x5a] == uVar6) {
      return;
    }
  }
  else {
    uVar6 = *(ulong *)(plVar5[0x57] + -8);
    plVar5[0x57] = plVar5[0x57] + -8;
    if (plVar5[0x5a] == uVar6) {
      return;
    }
  }
  lVar9 = *plVar1;
  lVar11 = plVar5[0x4c];
  lVar8 = lVar11 - lVar9;
  uVar13 = lVar8 >> 4;
  if (uVar13 < uVar6) {
    uVar14 = uVar6 - uVar13;
    lVar12 = plVar5[0x4d];
    if ((ulong)(lVar12 - lVar11 >> 4) < uVar14) {
      if (uVar6 >> 0x3c == 0) {
        uVar7 = lVar12 - lVar9 >> 3;
        if (uVar7 <= uVar6) {
          uVar7 = uVar6;
        }
        if (0x7fffffffffffffef < (ulong)(lVar12 - lVar9)) {
          uVar7 = 0xfffffffffffffff;
        }
        plStack_68 = plVar1;
        if (uVar7 >> 0x3c == 0) {
          lVar4 = uVar7 << 4;
          __Znwm();
          lVar11 = lVar4 + lVar8;
          _bzero(lVar11,uVar14 * 0x10);
          lVar10 = lVar11 + uVar13 * -0x10;
          _memcpy(lVar10,lVar9,lVar8);
          *plVar1 = lVar10;
          plVar5[0x4c] = lVar11 + uVar14 * 0x10;
          plVar5[0x4d] = lVar4 + uVar7 * 0x10;
          lStack_88 = lVar9;
          lStack_80 = lVar9;
          lStack_78 = lVar9;
          lStack_70 = lVar12;
          func_0x00010988c1b8(&lStack_88);
          goto code_r0x00010988c138;
        }
        func_0x000104c4f740();
      }
      else {
        func_0x00010988c1a4();
      }
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar3)();
    }
    _bzero(lVar11,uVar14 * 0x10);
    plVar5[0x4c] = lVar11 + uVar14 * 0x10;
  }
  else if (uVar6 < uVar13) {
    lVar9 = lVar9 + uVar6 * 0x10;
    while (lVar11 != lVar9) {
      lVar11 = lVar11 + -0x10;
      func_0x00010988c204(lVar11);
    }
    plVar5[0x4c] = lVar9;
  }
code_r0x00010988c138:
  plVar5[0x5a] = uVar6;
  return;
}



/* Entry: 10a61fe04; end: 10a61febb;  */

void FUN_10a61fe04(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  FUN_10a61faac(param_1,param_2,FUN_10a5fc8c4,0,param_3,param_4,param_5);
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



/* Entry: 10a61febc; end: 10a61ff77;  */

void FUN_10a61febc(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  FUN_10a61df18(param_2,param_3);
  FUN_10a052e3c(param_5);
  FUN_10a3af424(param_1,param_2,plVar4[0x45] + 0xb8);
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



/* Entry: 10a61ff78; end: 10a62007b;  */

void FUN_10a61ff78(undefined4 *param_1,long *param_2,undefined8 param_3,uint *param_4,
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
  FUN_10a61e094(param_2,param_3);
  FUN_10a3af5a8(param_5);
  if (1 < *param_4) {
    FUN_10a3af5cc(&stack0xffffffffffffffa8,param_2,param_4);
  }
  FUN_10a3a754c(plVar4[0x45] + 0xb8,&stack0xffffffffffffffa8);
  FUN_10a3a75a8(&stack0xffffffffffffffa8);
  *param_1 = 0;
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



/* Entry: 10a62007c; end: 10a620133;  */

void FUN_10a62007c(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  FUN_10a61df18(param_2,param_3);
  FUN_10a052e3c(param_5);
  FUN_10a3b04a0(param_1,param_2,plVar4 + 0x3f);
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



/* Entry: 10a620134; end: 10a62033b;  */

void FUN_10a620134(ulong param_1)

{
  undefined ***pppuVar1;
  undefined **ppuVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  long lVar7;
  undefined4 uVar8;
  code *pcVar9;
  ulong uVar10;
  undefined **appuStack_c0 [2];
  char cStack_a9;
  undefined **ppuStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
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
  
  func_0x000109887da8(appuStack_c0,&UNK_10e4cfb4b,0x71);
  pppuVar1 = (undefined ***)appuStack_c0[0];
  if (-1 < cStack_a9) {
    pppuVar1 = appuStack_c0;
  }
  *(undefined ***)(param_1 + 0x1b0) = &PTR_DAT_110c00fa8;
  ppuVar2 = (undefined **)&UNK_10f667746;
  if (pppuVar1 != (undefined ***)0x0) {
    ppuVar2 = (undefined **)pppuVar1;
  }
  func_0x000107c2c4dc(param_1 + 0x1b8,ppuVar2);
  uStack_a0 = 0;
  uStack_98 = 0;
  uStack_88 = 0xffffffffffffffff;
  uStack_90 = 0x100000064;
  uStack_78 = 0;
  uStack_80 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_60 = 0;
  uStack_58 = 0xffffffff;
  uStack_50 = 0;
  uStack_48 = 0;
  ppuStack_a8 = (undefined **)pppuVar1;
  func_0x00010a052690(param_1 + 0x168,&ppuStack_a8);
  uVar10 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar10 & 1) == 0) {
    ppuStack_40 = &PTR_DAT_110c00fa8;
    uStack_38 = 0;
    ppuStack_a8 = &PTR_DAT_110b178e0;
    uStack_a0 = 0;
    uStack_98 = CONCAT71(uStack_98._1_7_,1);
    func_0x0001098949cc(param_1,pppuVar1,&ppuStack_40,&ppuStack_a8);
  }
  if (cStack_a9 < '\0') {
    __ZdlPv(appuStack_c0[0]);
  }
  uVar10 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar10 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a62031c;
    FUN_10a054dac(param_1,&DAT_10f68571c,FUN_10a62055c,2,*(undefined8 *)(param_1 + 0x40));
  }
  uVar10 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar10 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a62031c;
    FUN_10a054dac(param_1,&DAT_10f685720,FUN_10a620e20,2,*(undefined8 *)(param_1 + 0x40));
  }
  *(undefined **)(param_1 + 0x1b0) = PTR___ZTIDn_1103469e8;
  lVar7 = *(long *)(param_1 + 0x170);
  if (*(long *)(param_1 + 0x168) != lVar7) {
    uVar3 = *(undefined4 *)(lVar7 + -0x50);
    uVar5 = *(undefined4 *)(lVar7 + -0x4c);
    uVar4 = *(undefined4 *)(lVar7 + -0x48);
    uVar6 = *(undefined4 *)(lVar7 + -0x44);
    uVar8 = *(undefined4 *)(lVar7 + -0x18);
    *(long *)(param_1 + 0x170) = lVar7 + -0x68;
    uVar10 = param_1;
    FUN_10a0051e8(param_1,uVar3,uVar5,uVar8,uVar4,uVar6);
    if ((uVar10 & 1) == 0) {
      func_0x000109894f40(param_1,0);
      FUN_10a05431c(param_1);
    }
    return;
  }
LAB_10a62031c:
                    /* WARNING: Does not return */
  pcVar9 = (code *)SoftwareBreakpoint(1,0x10a620320);
  (*pcVar9)();
}



/* Entry: 10a62033c; end: 10a62050b;  */

void FUN_10a62033c(long *param_1,long *param_2)

{
  ulong uVar1;
  code *pcVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  ulong uVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  long *plVar10;
  
  plVar5 = param_1;
  plVar7 = param_2;
  if ((long)param_2 - 1U == 0) {
    param_2 = (long *)0x2;
  }
  else if (((ulong)param_2 & (long)param_2 - 1U) != 0) {
    __ZNSt3__112__next_primeEm();
    plVar5 = param_2;
  }
  plVar10 = (long *)param_1[1];
  if (plVar10 > param_2 || param_2 == plVar10) {
    if (plVar10 <= param_2) {
      return;
    }
    plVar5 = (long *)(long)((float)(ulong)param_1[3] / *(float *)(param_1 + 4));
    if ((plVar10 < (long *)0x3) || (((ulong)plVar10 & (long)plVar10 - 1U) != 0)) {
      __ZNSt3__112__next_primeEm();
    }
    else if ((long *)0x1 < plVar5) {
      plVar5 = (long *)(1L << (-LZCOUNT((long)plVar5 + -1) & 0x3fU));
    }
    if (param_2 <= plVar5) {
      param_2 = plVar5;
    }
    if (plVar10 <= param_2) {
      return;
    }
    if (param_2 == (long *)0x0) {
      lVar3 = *param_1;
      *param_1 = 0;
      if (lVar3 != 0) {
        __ZdlPv();
      }
      param_1[1] = 0;
      return;
    }
  }
  if ((ulong)param_2 >> 0x3d == 0) {
    lVar3 = (long)param_2 << 3;
    __Znwm();
    lVar4 = *param_1;
    *param_1 = lVar3;
    if (lVar4 != 0) {
      __ZdlPv();
    }
    plVar5 = (long *)0x0;
    param_1[1] = (long)param_2;
    do {
      *(undefined8 *)(*param_1 + (long)plVar5 * 8) = 0;
      plVar5 = (long *)((long)plVar5 + 1);
    } while (param_2 != plVar5);
    plVar5 = (long *)param_1[2];
    if (plVar5 != (long *)0x0) {
      plVar7 = (long *)plVar5[1];
      uVar6 = (long)param_2 - 1;
      if (((ulong)param_2 & uVar6) == 0) {
        plVar7 = (long *)((ulong)plVar7 & uVar6);
      }
      else if (param_2 <= plVar7) {
        uVar1 = 0;
        if (param_2 != (long *)0x0) {
          uVar1 = (ulong)plVar7 / (ulong)param_2;
        }
        plVar7 = (long *)((long)plVar7 - uVar1 * (long)param_2);
      }
      *(long **)(*param_1 + (long)plVar7 * 8) = param_1 + 2;
      plVar10 = (long *)*plVar5;
      while (plVar10 != (long *)0x0) {
        plVar9 = (long *)plVar10[1];
        if (((ulong)param_2 & uVar6) == 0) {
          plVar9 = (long *)((ulong)plVar9 & uVar6);
        }
        else if (param_2 <= plVar9) {
          uVar1 = 0;
          if (param_2 != (long *)0x0) {
            uVar1 = (ulong)plVar9 / (ulong)param_2;
          }
          plVar9 = (long *)((long)plVar9 - uVar1 * (long)param_2);
        }
        plVar8 = plVar10;
        if (plVar9 != plVar7) {
          lVar3 = *param_1;
          if (*(long *)(lVar3 + (long)plVar9 * 8) == 0) {
            *(long **)(lVar3 + (long)plVar9 * 8) = plVar5;
            plVar7 = plVar9;
          }
          else {
            *plVar5 = *plVar10;
            *plVar10 = **(undefined8 **)(lVar3 + (long)plVar9 * 8);
            **(long **)(lVar3 + (long)plVar9 * 8) = (long)plVar10;
            plVar8 = plVar5;
          }
        }
        plVar5 = plVar8;
        plVar10 = (long *)*plVar8;
      }
    }
    return;
  }
  func_0x000109ffded8();
  if (((ulong)plVar5 & 1) != 0) {
    if (3 < (ulong)*(byte *)(plVar7 + 0xc)) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10a62055c);
      (*pcVar2)();
    }
    (*(code *)(&PTR_FUN_110b9a040)[*(byte *)(plVar7 + 0xc)])(plVar7 + 4);
    FUN_10a004978(plVar7 + 2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(plVar7);
  return;
}



/* Entry: 10a62050c; end: 10a62055b;  */

void FUN_10a62050c(ulong param_1,long param_2)

{
  code *pcVar1;
  
  if ((param_1 & 1) != 0) {
    if (3 < (ulong)*(byte *)(param_2 + 0x60)) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10a62055c);
      (*pcVar1)();
    }
    (*(code *)(&PTR_FUN_110b9a040)[*(byte *)(param_2 + 0x60)])(param_2 + 0x20);
    FUN_10a004978(param_2 + 0x10);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_2);
  return;
}



/* Entry: 10a62055c; end: 10a620b57;  */

/* WARNING: Possible PIC construction at 0x00010a620b4c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010a620b50) */
/* WARNING: Removing unreachable block (ram,0x00010a620b70) */
/* WARNING: Removing unreachable block (ram,0x00010a620b80) */
/* WARNING: Removing unreachable block (ram,0x00010a620ba8) */
/* WARNING: Removing unreachable block (ram,0x00010a620bb4) */
/* WARNING: Removing unreachable block (ram,0x00010a620bcc) */
/* WARNING: Removing unreachable block (ram,0x00010a620c04) */
/* WARNING: Removing unreachable block (ram,0x00010a620c30) */
/* WARNING: Removing unreachable block (ram,0x00010a620c1c) */
/* WARNING: Removing unreachable block (ram,0x00010a620c24) */
/* WARNING: Removing unreachable block (ram,0x00010a620c34) */
/* WARNING: Removing unreachable block (ram,0x00010a620c3c) */
/* WARNING: Removing unreachable block (ram,0x00010a620c4c) */
/* WARNING: Removing unreachable block (ram,0x00010a620c58) */
/* WARNING: Removing unreachable block (ram,0x00010a620c78) */
/* WARNING: Removing unreachable block (ram,0x00010a620c64) */
/* WARNING: Removing unreachable block (ram,0x00010a620c6c) */
/* WARNING: Removing unreachable block (ram,0x00010a620c7c) */
/* WARNING: Removing unreachable block (ram,0x00010a620c84) */
/* WARNING: Removing unreachable block (ram,0x00010a620c88) */
/* WARNING: Removing unreachable block (ram,0x00010a620cac) */
/* WARNING: Removing unreachable block (ram,0x00010a620c94) */
/* WARNING: Removing unreachable block (ram,0x00010a620ca0) */
/* WARNING: Removing unreachable block (ram,0x00010a620cb0) */
/* WARNING: Removing unreachable block (ram,0x00010a620cb8) */
/* WARNING: Removing unreachable block (ram,0x00010a620cc0) */
/* WARNING: Removing unreachable block (ram,0x00010a620cc4) */
/* WARNING: Removing unreachable block (ram,0x00010a620cc8) */
/* WARNING: Removing unreachable block (ram,0x00010a620ce4) */
/* WARNING: Removing unreachable block (ram,0x00010a620cd0) */
/* WARNING: Removing unreachable block (ram,0x00010a620cd8) */
/* WARNING: Removing unreachable block (ram,0x00010a620ce8) */
/* WARNING: Removing unreachable block (ram,0x00010a620cf0) */
/* WARNING: Removing unreachable block (ram,0x00010a620cfc) */
/* WARNING: Removing unreachable block (ram,0x00010a620d18) */
/* WARNING: Removing unreachable block (ram,0x00010a620d40) */
/* WARNING: Removing unreachable block (ram,0x00010a620d28) */
/* WARNING: Removing unreachable block (ram,0x00010a620bc8) */
/* WARNING: Removing unreachable block (ram,0x00010a620b9c) */

void FUN_10a62055c(undefined8 param_1,long *param_2,undefined8 param_3,int *param_4,
                  undefined8 param_5)

{
  undefined1 *puVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  ulong uVar5;
  code *pcVar6;
  long lVar7;
  long *plVar8;
  long *plVar9;
  long lVar10;
  long *plVar11;
  long *plVar12;
  ulong uVar13;
  ulong uVar14;
  undefined8 *puVar15;
  ulong uVar16;
  long *unaff_x19;
  long *unaff_x20;
  long *unaff_x21;
  long lVar17;
  long *unaff_x22;
  long lVar18;
  long lVar19;
  long *unaff_x23;
  long *plVar20;
  long lVar21;
  long *unaff_x24;
  long *plVar22;
  ulong unaff_x25;
  ulong uVar23;
  ulong unaff_x26;
  ulong uVar24;
  long *unaff_x27;
  ulong unaff_x28;
  undefined1 *unaff_x29;
  undefined8 unaff_x30;
  undefined1 auStack_f0 [8];
  undefined8 uStack_e8;
  long *plStack_e0;
  long lStack_d8;
  long *plStack_d0;
  long lStack_c8;
  long *plStack_c0;
  long *plStack_b8;
  long *plStack_b0;
  long lStack_a8;
  long *plStack_a0;
  long lStack_98;
  byte bStack_70;
  long lStack_68;
  
  puVar1 = &stack0xfffffffffffffff0;
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar8 = param_2;
  uStack_e8 = param_1;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar8[0x59] < 8) {
    plVar8[plVar8[0x59] + 0x4e] = plVar8[0x5a];
    plVar8[0x59] = plVar8[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar8 + 0x4b);
  }
  plVar9 = param_2;
  FUN_10a620b58(param_2,param_3);
  FUN_10a620bc0(param_5);
  if (*param_4 == 7) {
    plVar11 = param_2;
    (**(code **)(*param_2 + 0x98))(param_2,*(undefined8 *)(param_4 + 2));
    plVar12 = param_2;
    plStack_c0 = plVar11;
    (**(code **)(*param_2 + 0x228))(param_2,&plStack_c0);
    if ((int)plVar12 != 0) {
      plVar11 = param_2;
      (**(code **)(*param_2 + 0x58))();
      lVar10 = plVar11[0x48];
      if ((lVar10 == 0) ||
         (___dynamic_cast(lVar10,&PTR_DAT_110b9fb60,&PTR_DAT_110b9fb70,0), plVar11 = plStack_c0,
         lVar10 == 0)) {
        func_0x00010988bd28(&UNK_10f685540);
        goto LAB_10a620b40;
      }
      plStack_c0 = (long *)0x0;
      lStack_a8 = CONCAT44(lStack_a8._4_4_,7);
      plStack_a0 = plVar11;
      plStack_b0 = param_2;
      FUN_10a688ac0(&plStack_e0,&plStack_b0,*(undefined8 *)(lVar10 + 8));
      if ((3 < (int)lStack_a8) && (plStack_a0 != (long *)0x0)) {
        (**(code **)*plStack_a0)();
      }
    }
    if (plStack_c0 != (long *)0x0) {
      (**(code **)*plStack_c0)();
    }
    if (((ulong)plVar12 & 1) != 0) {
      plStack_b0 = plStack_e0;
      lStack_a8 = lStack_d8;
      if (lStack_d8 != 0) {
        plVar11 = (long *)(lStack_d8 + 8);
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar11,0x10);
          if (bVar4) {
            *plVar11 = *plVar11 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
      lStack_98 = lStack_c8;
      plStack_a0 = plStack_d0;
      if (lStack_c8 != 0) {
        plVar11 = (long *)(lStack_c8 + 0x10);
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar11,0x10);
          if (bVar4) {
            *plVar11 = *plVar11 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
      bStack_70 = 2;
      plVar11 = (long *)0x30;
      __Znwm();
      plVar12 = plVar11 + 1;
      *plVar12 = 0;
      plVar11[2] = 0;
      *plVar11 = (long)&PTR_FUN_110b9fc88;
      plVar22 = plVar11 + 3;
      *plVar22 = (long)&PTR_FUN_110c0f9b0;
      plVar11[4] = 0;
      plVar11[5] = 0;
      uVar14 = ((ulong)(uint)((int)plVar22 << 3) + 8 ^ (ulong)plVar22 >> 0x20) * -0x622015f714c7d297
      ;
      uVar14 = ((ulong)plVar22 >> 0x20 ^ uVar14 >> 0x2f ^ uVar14) * -0x622015f714c7d297;
      uVar24 = (uVar14 ^ uVar14 >> 0x2f) * -0x622015f714c7d297;
      uVar23 = plVar9[4];
      uVar14 = unaff_x28;
      plStack_c0 = plVar22;
      plStack_b8 = plVar11;
      if (uVar23 != 0) {
        uVar13 = uVar23 - 1;
        if ((uVar23 & uVar13) == 0) {
          uVar14 = uVar13 & uVar24;
        }
        else {
          uVar14 = uVar24;
          if (uVar23 <= uVar24) {
            uVar14 = 0;
            if (uVar23 != 0) {
              uVar14 = uVar24 / uVar23;
            }
            uVar14 = uVar24 - uVar14 * uVar23;
          }
        }
        puVar15 = *(undefined8 **)(plVar9[3] + uVar14 * 8);
        if (puVar15 != (undefined8 *)0x0) {
          for (plVar20 = (long *)*puVar15; plVar20 != (long *)0x0; plVar20 = (long *)*plVar20) {
            uVar16 = plVar20[1];
            if (uVar16 == uVar24) {
              if ((long *)plVar20[2] == plVar22) goto LAB_10a6208fc;
            }
            else {
              if ((uVar23 & uVar13) == 0) {
                uVar16 = uVar16 & uVar13;
              }
              else if (uVar23 <= uVar16) {
                uVar5 = 0;
                if (uVar23 != 0) {
                  uVar5 = uVar16 / uVar23;
                }
                uVar16 = uVar16 - uVar5 * uVar23;
              }
              if (uVar16 != uVar14) break;
            }
          }
        }
      }
      plVar20 = (long *)0x68;
      __Znwm();
      *plVar20 = 0;
      plVar20[1] = uVar24;
      plVar20[2] = (long)plVar22;
      plVar20[3] = (long)plVar11;
      plStack_c0 = (long *)0x0;
      plStack_b8 = (long *)0x0;
      *(undefined1 *)(plVar20 + 0xc) = 3;
      plVar20[4] = (long)plStack_e0;
      plVar20[5] = lStack_a8;
      if (lStack_a8 != 0) {
        plVar12 = (long *)(lStack_a8 + 8);
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar12,0x10);
          if (bVar4) {
            *plVar12 = *plVar12 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
      plVar20[7] = lStack_98;
      plVar20[6] = (long)plStack_a0;
      if (lStack_98 != 0) {
        plVar12 = (long *)(lStack_98 + 0x10);
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar12,0x10);
          if (bVar4) {
            *plVar12 = *plVar12 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
      *(byte *)(plVar20 + 0xc) = bStack_70;
      if ((uVar23 == 0) || (*(float *)(plVar9 + 7) * (float)uVar23 < (float)(plVar9[6] + 1))) {
        uVar14 = 1;
        if (2 < uVar23) {
          uVar14 = (ulong)((uVar23 & uVar23 - 1) != 0);
        }
        uVar14 = uVar14 | uVar23 << 1;
        uVar23 = (ulong)((float)(plVar9[6] + 1) / *(float *)(plVar9 + 7));
        if (uVar14 <= uVar23) {
          uVar14 = uVar23;
        }
        FUN_10a62033c(plVar9 + 3,uVar14);
        uVar23 = plVar9[4];
        if ((uVar23 & uVar23 - 1) == 0) {
          uVar14 = uVar23 - 1 & uVar24;
        }
        else {
          uVar14 = uVar24;
          if (uVar23 <= uVar24) {
            uVar14 = 0;
            if (uVar23 != 0) {
              uVar14 = uVar24 / uVar23;
            }
            uVar14 = uVar24 - uVar14 * uVar23;
          }
        }
      }
      lVar10 = plVar9[3];
      plVar12 = *(long **)(lVar10 + uVar14 * 8);
      if (plVar12 == (long *)0x0) {
        plVar12 = plVar9 + 5;
        *plVar20 = *plVar12;
        *plVar12 = (long)plVar20;
        *(long **)(lVar10 + uVar14 * 8) = plVar12;
        if (*plVar20 != 0) {
          uVar13 = *(ulong *)(*plVar20 + 8);
          if ((uVar23 & uVar23 - 1) == 0) {
            uVar13 = uVar13 & uVar23 - 1;
          }
          else if (uVar23 <= uVar13) {
            uVar16 = 0;
            if (uVar23 != 0) {
              uVar16 = uVar13 / uVar23;
            }
            uVar13 = uVar13 - uVar16 * uVar23;
          }
          plVar12 = (long *)(plVar9[3] + uVar13 * 8);
          goto LAB_10a6209a0;
        }
      }
      else {
        *plVar20 = *plVar12;
LAB_10a6209a0:
        *plVar12 = (long)plVar20;
      }
      plVar9[6] = plVar9[6] + 1;
      goto LAB_10a6209b0;
    }
  }
  func_0x00010988bd28(&UNK_10f6347ad);
  goto LAB_10a620b40;
LAB_10a6208fc:
  do {
    lVar10 = *plVar12;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar12,0x10);
    if (bVar4) {
      *plVar12 = lVar10 + -1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  if (lVar10 == 0) {
    (**(code **)(*plVar11 + 0x10))(plVar11);
    __ZNSt3__119__shared_weak_count14__release_weakEv(plVar11);
  }
LAB_10a6209b0:
  if (*(char *)(plVar9[9] + 8) == '\x01') {
    (*(code *)plVar9[8])(plVar9);
  }
  plStack_b8 = (long *)plVar20[3];
  plStack_c0 = (long *)plVar20[2];
  if (plVar20[3] != 0) {
    plVar12 = (long *)(plVar20[3] + 8);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar12,0x10);
      if (bVar4) {
        *plVar12 = *plVar12 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  if ((ulong)bStack_70 < 4) {
    (*(code *)(&PTR_FUN_110b9a040)[bStack_70])(&plStack_b0);
    FUN_10a688c1c(&plStack_e0);
    FUN_10a05ff7c(uStack_e8,param_2,&plStack_c0);
    plVar12 = plStack_b8;
    if (plStack_b8 != (long *)0x0) {
      plVar2 = plStack_b8 + 1;
      do {
        lVar10 = *plVar2;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar4) {
          *plVar2 = lVar10 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar10 == 0) {
        (**(code **)(*plStack_b8 + 0x10))(plStack_b8);
        __ZNSt3__119__shared_weak_count14__release_weakEv();
        param_2 = plVar12;
      }
    }
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_68) {
      ___stack_chk_fail();
      FUN_10a62050c(1,plVar20);
      FUN_10a004978(&plStack_c0);
      if (3 < (ulong)bStack_70) goto LAB_10a620b40;
      (*(code *)(&PTR_FUN_110b9a040)[bStack_70])(&plStack_b0);
      FUN_10a688c1c(&plStack_e0);
      unaff_x30 = 0x10a620b50;
      register0x00000008 = (BADSPACEBASE *)auStack_f0;
      unaff_x19 = plVar8;
      unaff_x20 = param_2;
      unaff_x21 = plVar11;
      unaff_x22 = plVar9;
      unaff_x23 = plVar20;
      unaff_x24 = plVar22;
      unaff_x25 = uVar23;
      unaff_x26 = uVar24;
      unaff_x27 = plStack_e0;
      unaff_x28 = uVar14;
      unaff_x29 = puVar1;
    }
    plVar9 = plVar8 + 0x4b;
    lVar10 = plVar8[0x59];
    uVar14 = lVar10 - 1;
    plVar8[0x59] = uVar14;
    if (uVar14 < 8) {
      uVar14 = plVar9[lVar10 + 2];
      if (plVar8[0x5a] == uVar14) {
        return;
      }
    }
    else {
      uVar14 = *(ulong *)(plVar8[0x57] + -8);
      plVar8[0x57] = plVar8[0x57] + -8;
      if (plVar8[0x5a] == uVar14) {
        return;
      }
    }
    *(ulong *)((long)register0x00000008 + -0x60) = unaff_x28;
    *(long **)((long)register0x00000008 + -0x58) = unaff_x27;
    *(ulong *)((long)register0x00000008 + -0x50) = unaff_x26;
    *(ulong *)((long)register0x00000008 + -0x48) = unaff_x25;
    *(long **)((long)register0x00000008 + -0x40) = unaff_x24;
    *(long **)((long)register0x00000008 + -0x38) = unaff_x23;
    *(long **)((long)register0x00000008 + -0x30) = unaff_x22;
    *(long **)((long)register0x00000008 + -0x28) = unaff_x21;
    *(long **)((long)register0x00000008 + -0x20) = unaff_x20;
    *(long **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
    lVar10 = *plVar9;
    lVar19 = plVar8[0x4c];
    lVar17 = lVar19 - lVar10;
    uVar23 = lVar17 >> 4;
    if (uVar23 < uVar14) {
      uVar24 = uVar14 - uVar23;
      lVar21 = plVar8[0x4d];
      if ((ulong)(lVar21 - lVar19 >> 4) < uVar24) {
        if (uVar14 >> 0x3c == 0) {
          uVar13 = lVar21 - lVar10 >> 3;
          if (uVar13 <= uVar14) {
            uVar13 = uVar14;
          }
          if (0x7fffffffffffffef < (ulong)(lVar21 - lVar10)) {
            uVar13 = 0xfffffffffffffff;
          }
          *(long **)((long)register0x00000008 + -0x68) = plVar9;
          if (uVar13 >> 0x3c == 0) {
            lVar7 = uVar13 << 4;
            __Znwm();
            lVar19 = lVar7 + lVar17;
            _bzero(lVar19,uVar24 * 0x10);
            lVar18 = lVar19 + uVar23 * -0x10;
            _memcpy(lVar18,lVar10,lVar17);
            *plVar9 = lVar18;
            plVar8[0x4c] = lVar19 + uVar24 * 0x10;
            plVar8[0x4d] = lVar7 + uVar13 * 0x10;
            *(long *)((long)register0x00000008 + -0x78) = lVar10;
            *(long *)((long)register0x00000008 + -0x70) = lVar21;
            *(long *)((long)register0x00000008 + -0x88) = lVar10;
            *(long *)((long)register0x00000008 + -0x80) = lVar10;
            func_0x00010988c1b8((undefined1 *)((long)register0x00000008 + -0x88));
            goto code_r0x00010988c138;
          }
          func_0x000104c4f740();
        }
        else {
          func_0x00010988c1a4();
        }
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x10988c16c);
        (*pcVar6)();
      }
      _bzero(lVar19,uVar24 * 0x10);
      plVar8[0x4c] = lVar19 + uVar24 * 0x10;
    }
    else if (uVar14 < uVar23) {
      lVar10 = lVar10 + uVar14 * 0x10;
      while (lVar19 != lVar10) {
        lVar19 = lVar19 + -0x10;
        func_0x00010988c204(lVar19);
      }
      plVar8[0x4c] = lVar10;
    }
code_r0x00010988c138:
    plVar8[0x5a] = uVar14;
    return;
  }
LAB_10a620b40:
                    /* WARNING: Does not return */
  pcVar6 = (code *)SoftwareBreakpoint(1,0x10a620b44);
  (*pcVar6)();
}



/* Entry: 10a620b58; end: 10a620bbf;  */

void FUN_10a620b58(long param_1)

{
  long *plVar1;
  undefined *puVar2;
  long lVar3;
  long *plVar4;
  undefined8 *puVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  long *plVar10;
  ulong uVar11;
  ulong uVar12;
  
  lVar3 = param_1;
  func_0x000109898688();
  if (lVar3 != 0) {
    FUN_10a053854(param_1,lVar3);
    if ((param_1 != 0) && (___dynamic_cast(), param_1 != 0)) {
      return;
    }
    func_0x00010988bd28(&UNK_10f685496);
  }
  puVar2 = &UNK_10f68f52e;
  func_0x00010988bd28();
  if ((int)puVar2 == 1) {
    return;
  }
  lVar3 = 1;
  puVar5 = (undefined8 *)0x0;
  FUN_10a052ee0(1,0,puVar2);
  plVar4 = (long *)(lVar3 + 0x18);
  FUN_10a620d4c(plVar4,*puVar5);
  if (plVar4 == (long *)0x0) goto LAB_10a620d18;
  uVar8 = *(ulong *)(lVar3 + 0x20);
  lVar6 = *plVar4;
  uVar7 = plVar4[1];
  uVar9 = uVar8 - 1;
  if ((uVar8 & uVar9) == 0) {
    uVar7 = uVar9 & uVar7;
  }
  else if (uVar8 <= uVar7) {
    uVar11 = 0;
    if (uVar8 != 0) {
      uVar11 = uVar7 / uVar8;
    }
    uVar7 = uVar7 - uVar11 * uVar8;
  }
  plVar1 = *(long **)(*(long *)(lVar3 + 0x18) + uVar7 * 8);
  do {
    plVar10 = plVar1;
    plVar1 = (long *)*plVar10;
  } while ((long *)*plVar10 != plVar4);
  if (plVar10 == (long *)(lVar3 + 0x28)) {
LAB_10a620c84:
    if (lVar6 == 0) {
LAB_10a620cb8:
      *(undefined8 *)(*(long *)(lVar3 + 0x18) + uVar7 * 8) = 0;
      lVar6 = *plVar4;
      goto LAB_10a620cc0;
    }
    uVar11 = *(ulong *)(lVar6 + 8);
    if ((uVar8 & uVar9) == 0) {
      uVar12 = uVar11 & uVar9;
    }
    else {
      uVar12 = uVar11;
      if (uVar8 <= uVar11) {
        uVar12 = 0;
        if (uVar8 != 0) {
          uVar12 = uVar11 / uVar8;
        }
        uVar12 = uVar11 - uVar12 * uVar8;
      }
    }
    if (uVar12 != uVar7) goto LAB_10a620cb8;
LAB_10a620cc8:
    if ((uVar8 & uVar9) == 0) {
      uVar11 = uVar11 & uVar9;
    }
    else if (uVar8 <= uVar11) {
      uVar9 = 0;
      if (uVar8 != 0) {
        uVar9 = uVar11 / uVar8;
      }
      uVar11 = uVar11 - uVar9 * uVar8;
    }
    if (uVar11 != uVar7) {
      *(long **)(*(long *)(lVar3 + 0x18) + uVar11 * 8) = plVar10;
      lVar6 = *plVar4;
    }
  }
  else {
    uVar11 = plVar10[1];
    if ((uVar8 & uVar9) == 0) {
      uVar11 = uVar11 & uVar9;
    }
    else if (uVar8 <= uVar11) {
      uVar12 = 0;
      if (uVar8 != 0) {
        uVar12 = uVar11 / uVar8;
      }
      uVar11 = uVar11 - uVar12 * uVar8;
    }
    if (uVar11 != uVar7) goto LAB_10a620c84;
LAB_10a620cc0:
    if (lVar6 != 0) {
      uVar11 = *(ulong *)(lVar6 + 8);
      goto LAB_10a620cc8;
    }
  }
  *plVar10 = lVar6;
  *plVar4 = 0;
  *(long *)(lVar3 + 0x30) = *(long *)(lVar3 + 0x30) + -1;
  FUN_10a62050c(1);
LAB_10a620d18:
  if (*(char *)(*(long *)(lVar3 + 0x48) + 8) == '\x01') {
                    /* WARNING: Could not recover jumptable at 0x00010a620d3c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar3 + 0x40))(lVar3);
    return;
  }
  return;
}



/* Entry: 10a620bc0; end: 10a620be3;  */

void FUN_10a620bc0(undefined8 param_1)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  undefined8 *puVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  long *plVar9;
  ulong uVar10;
  ulong uVar11;
  
  if ((int)param_1 == 1) {
    return;
  }
  lVar2 = 1;
  puVar4 = (undefined8 *)0x0;
  FUN_10a052ee0(1,0,param_1);
  plVar3 = (long *)(lVar2 + 0x18);
  FUN_10a620d4c(plVar3,*puVar4);
  if (plVar3 == (long *)0x0) goto LAB_10a620d18;
  uVar7 = *(ulong *)(lVar2 + 0x20);
  lVar5 = *plVar3;
  uVar6 = plVar3[1];
  uVar8 = uVar7 - 1;
  if ((uVar7 & uVar8) == 0) {
    uVar6 = uVar8 & uVar6;
  }
  else if (uVar7 <= uVar6) {
    uVar10 = 0;
    if (uVar7 != 0) {
      uVar10 = uVar6 / uVar7;
    }
    uVar6 = uVar6 - uVar10 * uVar7;
  }
  plVar1 = *(long **)(*(long *)(lVar2 + 0x18) + uVar6 * 8);
  do {
    plVar9 = plVar1;
    plVar1 = (long *)*plVar9;
  } while ((long *)*plVar9 != plVar3);
  if (plVar9 == (long *)(lVar2 + 0x28)) {
LAB_10a620c84:
    if (lVar5 == 0) {
LAB_10a620cb8:
      *(undefined8 *)(*(long *)(lVar2 + 0x18) + uVar6 * 8) = 0;
      lVar5 = *plVar3;
      goto LAB_10a620cc0;
    }
    uVar10 = *(ulong *)(lVar5 + 8);
    if ((uVar7 & uVar8) == 0) {
      uVar11 = uVar10 & uVar8;
    }
    else {
      uVar11 = uVar10;
      if (uVar7 <= uVar10) {
        uVar11 = 0;
        if (uVar7 != 0) {
          uVar11 = uVar10 / uVar7;
        }
        uVar11 = uVar10 - uVar11 * uVar7;
      }
    }
    if (uVar11 != uVar6) goto LAB_10a620cb8;
LAB_10a620cc8:
    if ((uVar7 & uVar8) == 0) {
      uVar10 = uVar10 & uVar8;
    }
    else if (uVar7 <= uVar10) {
      uVar8 = 0;
      if (uVar7 != 0) {
        uVar8 = uVar10 / uVar7;
      }
      uVar10 = uVar10 - uVar8 * uVar7;
    }
    if (uVar10 != uVar6) {
      *(long **)(*(long *)(lVar2 + 0x18) + uVar10 * 8) = plVar9;
      lVar5 = *plVar3;
    }
  }
  else {
    uVar10 = plVar9[1];
    if ((uVar7 & uVar8) == 0) {
      uVar10 = uVar10 & uVar8;
    }
    else if (uVar7 <= uVar10) {
      uVar11 = 0;
      if (uVar7 != 0) {
        uVar11 = uVar10 / uVar7;
      }
      uVar10 = uVar10 - uVar11 * uVar7;
    }
    if (uVar10 != uVar6) goto LAB_10a620c84;
LAB_10a620cc0:
    if (lVar5 != 0) {
      uVar10 = *(ulong *)(lVar5 + 8);
      goto LAB_10a620cc8;
    }
  }
  *plVar9 = lVar5;
  *plVar3 = 0;
  *(long *)(lVar2 + 0x30) = *(long *)(lVar2 + 0x30) + -1;
  FUN_10a62050c(1);
LAB_10a620d18:
  if (*(char *)(*(long *)(lVar2 + 0x48) + 8) == '\x01') {
                    /* WARNING: Could not recover jumptable at 0x00010a620d3c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar2 + 0x40))(lVar2);
    return;
  }
  return;
}



/* Entry: 10a620be4; end: 10a620d4b;  */

void FUN_10a620be4(long param_1,undefined8 *param_2)

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
  
  plVar2 = (long *)(param_1 + 0x18);
  FUN_10a620d4c(plVar2,*param_2);
  if (plVar2 == (long *)0x0) goto LAB_10a620d18;
  uVar5 = *(ulong *)(param_1 + 0x20);
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
  plVar1 = *(long **)(*(long *)(param_1 + 0x18) + uVar4 * 8);
  do {
    plVar7 = plVar1;
    plVar1 = (long *)*plVar7;
  } while ((long *)*plVar7 != plVar2);
  if (plVar7 == (long *)(param_1 + 0x28)) {
LAB_10a620c84:
    if (lVar3 == 0) {
LAB_10a620cb8:
      *(undefined8 *)(*(long *)(param_1 + 0x18) + uVar4 * 8) = 0;
      lVar3 = *plVar2;
      goto LAB_10a620cc0;
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
    if (uVar9 != uVar4) goto LAB_10a620cb8;
LAB_10a620cc8:
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
      *(long **)(*(long *)(param_1 + 0x18) + uVar8 * 8) = plVar7;
      lVar3 = *plVar2;
    }
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
    if (uVar8 != uVar4) goto LAB_10a620c84;
LAB_10a620cc0:
    if (lVar3 != 0) {
      uVar8 = *(ulong *)(lVar3 + 8);
      goto LAB_10a620cc8;
    }
  }
  *plVar7 = lVar3;
  *plVar2 = 0;
  *(long *)(param_1 + 0x30) = *(long *)(param_1 + 0x30) + -1;
  FUN_10a62050c(1);
LAB_10a620d18:
  if (*(char *)(*(long *)(param_1 + 0x48) + 8) == '\x01') {
                    /* WARNING: Could not recover jumptable at 0x00010a620d3c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(param_1 + 0x40))(param_1);
    return;
  }
  return;
}



/* Entry: 10a620d4c; end: 10a620e1f;  */

long * FUN_10a620d4c(long *param_1,long param_2)

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



/* Entry: 10a620e20; end: 10a620f3b;  */

void FUN_10a620e20(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  char cVar1;
  bool bVar2;
  code *pcVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  ulong uVar14;
  ulong uVar15;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long *plStack_68;
  long *in_stack_ffffffffffffffb8;
  
  plVar5 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar5[0x59] < 8) {
    plVar5[plVar5[0x59] + 0x4e] = plVar5[0x5a];
    plVar5[0x59] = plVar5[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar5 + 0x4b);
  }
  plVar6 = param_2;
  FUN_10a620b58(param_2,param_3);
  FUN_10a060490(param_5);
  FUN_10a0604b4(&stack0xffffffffffffffb0,param_2,param_4);
  FUN_10a620be4(plVar6,&stack0xffffffffffffffb0);
  if (in_stack_ffffffffffffffb8 != (long *)0x0) {
    plVar6 = in_stack_ffffffffffffffb8 + 1;
    do {
      lVar9 = *plVar6;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar2) {
        *plVar6 = lVar9 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar9 == 0) {
      (**(code **)(*in_stack_ffffffffffffffb8 + 0x10))(in_stack_ffffffffffffffb8);
      __ZNSt3__119__shared_weak_count14__release_weakEv(in_stack_ffffffffffffffb8);
    }
  }
  *param_1 = 0;
  plVar6 = plVar5 + 0x4b;
  lVar9 = plVar5[0x59];
  uVar7 = lVar9 - 1;
  plVar5[0x59] = uVar7;
  if (uVar7 < 8) {
    uVar7 = plVar6[lVar9 + 2];
    if (plVar5[0x5a] == uVar7) {
      return;
    }
  }
  else {
    uVar7 = *(ulong *)(plVar5[0x57] + -8);
    plVar5[0x57] = plVar5[0x57] + -8;
    if (plVar5[0x5a] == uVar7) {
      return;
    }
  }
  lVar9 = *plVar6;
  lVar12 = plVar5[0x4c];
  lVar10 = lVar12 - lVar9;
  uVar14 = lVar10 >> 4;
  if (uVar14 < uVar7) {
    uVar15 = uVar7 - uVar14;
    lVar13 = plVar5[0x4d];
    if ((ulong)(lVar13 - lVar12 >> 4) < uVar15) {
      if (uVar7 >> 0x3c == 0) {
        uVar8 = lVar13 - lVar9 >> 3;
        if (uVar8 <= uVar7) {
          uVar8 = uVar7;
        }
        if (0x7fffffffffffffef < (ulong)(lVar13 - lVar9)) {
          uVar8 = 0xfffffffffffffff;
        }
        plStack_68 = plVar6;
        if (uVar8 >> 0x3c == 0) {
          lVar4 = uVar8 << 4;
          __Znwm();
          lVar12 = lVar4 + lVar10;
          _bzero(lVar12,uVar15 * 0x10);
          lVar11 = lVar12 + uVar14 * -0x10;
          _memcpy(lVar11,lVar9,lVar10);
          *plVar6 = lVar11;
          plVar5[0x4c] = lVar12 + uVar15 * 0x10;
          plVar5[0x4d] = lVar4 + uVar8 * 0x10;
          lStack_88 = lVar9;
          lStack_80 = lVar9;
          lStack_78 = lVar9;
          lStack_70 = lVar13;
          func_0x00010988c1b8(&lStack_88);
          goto code_r0x00010988c138;
        }
        func_0x000104c4f740();
      }
      else {
        func_0x00010988c1a4();
      }
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar3)();
    }
    _bzero(lVar12,uVar15 * 0x10);
    plVar5[0x4c] = lVar12 + uVar15 * 0x10;
  }
  else if (uVar7 < uVar14) {
    lVar9 = lVar9 + uVar7 * 0x10;
    while (lVar12 != lVar9) {
      lVar12 = lVar12 + -0x10;
      func_0x00010988c204(lVar12);
    }
    plVar5[0x4c] = lVar9;
  }
code_r0x00010988c138:
  plVar5[0x5a] = uVar7;
  return;
}



/* Entry: 10a620f3c; end: 10a62106f;  */

void FUN_10a620f3c(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  long lVar5;
  long *plVar6;
  ulong uVar7;
  long *plVar8;
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
  
  plVar6 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar6[0x59] < 8) {
    plVar6[plVar6[0x59] + 0x4e] = plVar6[0x5a];
    plVar6[0x59] = plVar6[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar6 + 0x4b);
  }
  plVar8 = param_2;
  FUN_10a61df18(param_2,param_3);
  FUN_10a052e3c(param_5);
  plVar8 = (long *)plVar8[0x44];
  if (plVar8 != (long *)0x0) {
    plVar1 = plVar8 + 1;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  func_0x000109899de4(param_1,param_2,&stack0xffffffffffffffb0,&stack0xffffffffffffffa8,0,0);
  if (plVar8 != (long *)0x0) {
    plVar1 = plVar8 + 1;
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
      (**(code **)(*plVar8 + 0x10))(plVar8);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar8);
    }
  }
  plVar8 = plVar6 + 0x4b;
  lVar10 = plVar6[0x59];
  uVar7 = lVar10 - 1;
  plVar6[0x59] = uVar7;
  if (uVar7 < 8) {
    uVar7 = plVar8[lVar10 + 2];
    if (plVar6[0x5a] == uVar7) {
      return;
    }
  }
  else {
    uVar7 = *(ulong *)(plVar6[0x57] + -8);
    plVar6[0x57] = plVar6[0x57] + -8;
    if (plVar6[0x5a] == uVar7) {
      return;
    }
  }
  lVar10 = *plVar8;
  lVar13 = plVar6[0x4c];
  lVar11 = lVar13 - lVar10;
  uVar15 = lVar11 >> 4;
  if (uVar15 < uVar7) {
    uVar16 = uVar7 - uVar15;
    lVar14 = plVar6[0x4d];
    if ((ulong)(lVar14 - lVar13 >> 4) < uVar16) {
      if (uVar7 >> 0x3c == 0) {
        uVar9 = lVar14 - lVar10 >> 3;
        if (uVar9 <= uVar7) {
          uVar9 = uVar7;
        }
        if (0x7fffffffffffffef < (ulong)(lVar14 - lVar10)) {
          uVar9 = 0xfffffffffffffff;
        }
        plStack_68 = plVar8;
        if (uVar9 >> 0x3c == 0) {
          lVar5 = uVar9 << 4;
          __Znwm();
          lVar13 = lVar5 + lVar11;
          _bzero(lVar13,uVar16 * 0x10);
          lVar12 = lVar13 + uVar15 * -0x10;
          _memcpy(lVar12,lVar10,lVar11);
          *plVar8 = lVar12;
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
  else if (uVar7 < uVar15) {
    lVar10 = lVar10 + uVar7 * 0x10;
    while (lVar13 != lVar10) {
      lVar13 = lVar13 + -0x10;
      func_0x00010988c204(lVar13);
    }
    plVar6[0x4c] = lVar10;
  }
code_r0x00010988c138:
  plVar6[0x5a] = uVar7;
  return;
}



/* Entry: 10a621070; end: 10a6210e3;  */

void FUN_10a621070(undefined8 *param_1,undefined8 param_2,int param_3)

{
  code *pcVar1;
  int aiStack_20 [2];
  undefined8 *puStack_18;
  
  if (param_1[2] != param_1[3]) {
    aiStack_20[0] = 3;
    puStack_18 = (undefined8 *)(double)param_3;
    FUN_10a005308(param_1[3] + -8,*param_1,param_2,aiStack_20);
    if ((3 < aiStack_20[0]) && (puStack_18 != (undefined8 *)0x0)) {
      (**(code **)*puStack_18)();
    }
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10a6210e4);
  (*pcVar1)();
}



/* Entry: 10a6210e4; end: 10a621193;  */

long FUN_10a6210e4(long param_1)

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



/* Entry: 10a621194; end: 10a6211a3;  */

void FUN_10a621194(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c00fd0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10a6211a4; end: 10a6211c3;  */

void FUN_10a6211a4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c00fd0;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a6211c4; end: 10a6211d3;  */

void FUN_10a6211c4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010a6211cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 10a6211d4; end: 10a62127b;  */

undefined8 * FUN_10a6211d4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c01020;
  (**(code **)param_1[9])();
  FUN_10a621420(param_1 + 3);
  *param_1 = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + 1);
  return param_1;
}



/* Entry: 10a62127c; end: 10a6212df;  */

bool FUN_10a62127c(undefined8 param_1,long *param_2,long param_3)

{
  int iVar1;
  
  if (param_3 == 0xc) {
    return *param_2 == 0x624f747069726353 && (int)param_2[1] == 0x7463656a;
  }
  if (param_3 == 0x71) {
    iVar1 = 0xe4cfb4b;
    _memcmp(&UNK_10e4cfb4b);
    return iVar1 == 0;
  }
  return false;
}



/* Entry: 10a6212e0; end: 10a6213ff;  */

void FUN_10a6212e0(long *param_1,long param_2)

{
  ulong uVar1;
  undefined8 ***pppuVar2;
  undefined8 **ppuStack_38;
  ulong uStack_30;
  undefined7 uStack_28;
  byte bStack_21;
  
  func_0x000107c2b054(param_1,&UNK_10f667746);
  uVar1 = param_1[1];
  if (-1 < (char)*(byte *)((long)param_1 + 0x17)) {
    uVar1 = (ulong)*(byte *)((long)param_1 + 0x17);
  }
  if (uVar1 == 0) {
    func_0x00010989f98c(&ppuStack_38,param_2);
    if (*(char *)((long)param_1 + 0x17) < '\0') {
      __ZdlPv(*param_1);
    }
    param_1[1] = uStack_30;
    *param_1 = (long)ppuStack_38;
    param_1[2] = CONCAT17(bStack_21,uStack_28);
  }
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (param_1,&UNK_10f685178,7);
  __ZNSt3__19to_stringEm(&ppuStack_38,*(undefined8 *)(param_2 + 0x30));
  pppuVar2 = (undefined8 ***)ppuStack_38;
  if (-1 < (char)bStack_21) {
    uStack_30 = (ulong)bStack_21;
    pppuVar2 = &ppuStack_38;
  }
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (param_1,pppuVar2,uStack_30);
  if ((char)bStack_21 < '\0') {
    __ZdlPv(ppuStack_38);
  }
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (param_1,&DAT_10f684600,1);
  return;
}



/* Entry: 10a621400; end: 10a62140f;  */

undefined1  [16] FUN_10a621400(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x71;
  auVar1._0_8_ = &UNK_10e4cfb4b;
  return auVar1;
}



/* Entry: 10a621410; end: 10a62141f;  */

long * FUN_10a621410(undefined8 param_1,long *param_2)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  
  func_0x000105277f8c();
  plVar1 = (long *)param_2[2];
  while( true ) {
    if (plVar1 == (long *)0x0) {
      lVar3 = *param_2;
      *param_2 = 0;
      if (lVar3 != 0) {
        __ZdlPv();
      }
      return param_2;
    }
    if (3 < (ulong)*(byte *)(plVar1 + 0xc)) break;
    lVar3 = *plVar1;
    (*(code *)(&PTR_FUN_110b9a040)[*(byte *)(plVar1 + 0xc)])(plVar1 + 4);
    FUN_10a004978(plVar1 + 2);
    __ZdlPv(plVar1);
    plVar1 = (long *)lVar3;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10a6214a0);
  (*pcVar2)();
}



/* Entry: 10a621420; end: 10a62149f;  */

long * FUN_10a621420(long *param_1)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  
  plVar1 = (long *)param_1[2];
  while( true ) {
    if (plVar1 == (long *)0x0) {
      lVar3 = *param_1;
      *param_1 = 0;
      if (lVar3 != 0) {
        __ZdlPv();
      }
      return param_1;
    }
    if (3 < (ulong)*(byte *)(plVar1 + 0xc)) break;
    lVar3 = *plVar1;
    (*(code *)(&PTR_FUN_110b9a040)[*(byte *)(plVar1 + 0xc)])(plVar1 + 4);
    FUN_10a004978(plVar1 + 2);
    __ZdlPv(plVar1);
    plVar1 = (long *)lVar3;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10a6214a0);
  (*pcVar2)();
}



/* Entry: 10a6214a0; end: 10a621593;  */

long FUN_10a6214a0(long *param_1,undefined8 param_2,long param_3)

{
  ulong uVar1;
  long *plVar2;
  undefined8 uVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  ulong uVar7;
  long *plVar8;
  
  plVar2 = param_1;
  FUN_10a054838();
  plVar6 = (long *)param_1[1];
  if (plVar6 != (long *)0x0) {
    uVar7 = (long)plVar6 - 1;
    if (((ulong)plVar6 & uVar7) == 0) {
      plVar8 = (long *)(uVar7 & (ulong)plVar2);
    }
    else {
      plVar8 = plVar2;
      if (plVar6 <= plVar2) {
        uVar1 = 0;
        if (plVar6 != (long *)0x0) {
          uVar1 = (ulong)plVar2 / (ulong)plVar6;
        }
        plVar8 = (long *)((long)plVar2 - uVar1 * (long)plVar6);
      }
    }
    plVar4 = *(long **)(*param_1 + (long)plVar8 * 8);
    if (plVar4 != (long *)0x0) {
      plVar4 = (long *)*plVar4;
      do {
        if (plVar4 == (long *)0x0) {
          return 0;
        }
        plVar5 = (long *)plVar4[1];
        if (plVar2 == plVar5) {
          if (plVar4[3] == param_3) {
            uVar3 = plVar4[2];
            _memcmp(uVar3,param_2,param_3);
            if ((int)uVar3 == 0) {
              return (long)plVar4;
            }
          }
        }
        else {
          if (((ulong)plVar6 & uVar7) == 0) {
            plVar5 = (long *)((ulong)plVar5 & uVar7);
          }
          else if (plVar6 <= plVar5) {
            uVar1 = 0;
            if (plVar6 != (long *)0x0) {
              uVar1 = (ulong)plVar5 / (ulong)plVar6;
            }
            plVar5 = (long *)((long)plVar5 - uVar1 * (long)plVar6);
          }
          if (plVar5 != plVar8) {
            return 0;
          }
        }
        plVar4 = (long *)*plVar4;
      } while( true );
    }
  }
  return 0;
}



/* Entry: 10a621594; end: 10a621597;  */

void FUN_10a621594(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10a621598; end: 10a6215ab;  */

void FUN_10a621598(void)

{
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}


