/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 100039988; end: 100039a57;  */

void FUN_100039988(long *param_1,ulong param_2,long *param_3)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  long *plVar5;
  ulong uVar6;
  long *plVar7;
  long *plVar8;
  ulong uVar9;
  ulong uVar10;
  ulong unaff_x24;
  
  if (param_2 - 1 == 0) {
    param_2 = 2;
  }
  else if ((param_2 & param_2 - 1) != 0) {
    func_0x000107c60c44();
  }
  uVar10 = param_1[1];
  if (uVar10 > param_2 || param_2 == uVar10) {
    if (uVar10 <= param_2) {
      return;
    }
    uVar4 = (ulong)((float)(ulong)param_1[3] / *(float *)(param_1 + 4));
    if ((uVar10 < 3) || ((uVar10 & uVar10 - 1) != 0)) {
      func_0x000107c60c44();
    }
    else if (1 < uVar4) {
      uVar4 = 1L << (-LZCOUNT(uVar4 - 1) & 0x3fU);
    }
    if (param_2 <= uVar4) {
      param_2 = uVar4;
    }
    if (uVar10 <= param_2) {
      return;
    }
  }
  if (param_2 == 0) {
    lVar2 = *param_1;
    *param_1 = 0;
    if (lVar2 != 0) {
      func_0x000107c60e14();
    }
    param_1[1] = 0;
    return;
  }
  if (param_2 >> 0x3d == 0) {
    lVar2 = param_2 << 3;
    func_0x000107c60e20();
    lVar3 = *param_1;
    *param_1 = lVar2;
    if (lVar3 != 0) {
      func_0x000107c60e14();
    }
    uVar10 = 0;
    param_1[1] = param_2;
    do {
      *(undefined8 *)(*param_1 + uVar10 * 8) = 0;
      uVar10 = uVar10 + 1;
    } while (param_2 != uVar10);
    plVar5 = (long *)param_1[2];
    if (plVar5 == (long *)0x0) {
      return;
    }
    uVar10 = plVar5[1];
    uVar4 = param_2 - 1;
    if ((param_2 & uVar4) == 0) {
      uVar10 = uVar10 & uVar4;
    }
    else if (param_2 <= uVar10) {
      uVar9 = 0;
      if (param_2 != 0) {
        uVar9 = uVar10 / param_2;
      }
      uVar10 = uVar10 - uVar9 * param_2;
    }
    *(long **)(*param_1 + uVar10 * 8) = param_1 + 2;
    plVar7 = (long *)*plVar5;
    while (plVar7 != (long *)0x0) {
      uVar9 = plVar7[1];
      if ((param_2 & uVar4) == 0) {
        uVar9 = uVar9 & uVar4;
      }
      else if (param_2 <= uVar9) {
        uVar6 = 0;
        if (param_2 != 0) {
          uVar6 = uVar9 / param_2;
        }
        uVar9 = uVar9 - uVar6 * param_2;
      }
      plVar8 = plVar7;
      if (uVar9 != uVar10) {
        lVar2 = *param_1;
        if (*(long *)(lVar2 + uVar9 * 8) == 0) {
          *(long **)(lVar2 + uVar9 * 8) = plVar5;
          uVar10 = uVar9;
        }
        else {
          *plVar5 = *plVar7;
          *plVar7 = **(undefined8 **)(lVar2 + uVar9 * 8);
          **(long **)(lVar2 + uVar9 * 8) = (long)plVar7;
          plVar8 = plVar5;
        }
      }
      plVar5 = plVar8;
      plVar7 = (long *)*plVar8;
    }
    return;
  }
  func_0x000104c4f740();
  uVar4 = (ulong)(int)param_2;
  uVar10 = param_1[1];
  if (uVar10 != 0) {
    uVar9 = uVar10 - 1;
    if ((uVar10 & uVar9) == 0) {
      unaff_x24 = uVar9 & uVar4;
    }
    else {
      unaff_x24 = uVar4;
      if (uVar10 <= uVar4) {
        uVar6 = 0;
        if (uVar10 != 0) {
          uVar6 = uVar4 / uVar10;
        }
        unaff_x24 = uVar4 - uVar6 * uVar10;
      }
    }
    plVar5 = *(long **)(*param_1 + unaff_x24 * 8);
    if (plVar5 != (long *)0x0) {
      do {
        while( true ) {
          plVar5 = (long *)*plVar5;
          if (plVar5 == (long *)0x0) goto LAB_100039c40;
          uVar6 = plVar5[1];
          if (uVar6 != uVar4) break;
          if (*(int *)(plVar5 + 2) == (int)param_2) {
            return;
          }
        }
        if ((uVar10 & uVar9) == 0) {
          uVar6 = uVar6 & uVar9;
        }
        else if (uVar10 <= uVar6) {
          uVar1 = 0;
          if (uVar10 != 0) {
            uVar1 = uVar6 / uVar10;
          }
          uVar6 = uVar6 - uVar1 * uVar10;
        }
      } while (uVar6 == unaff_x24);
    }
  }
LAB_100039c40:
  plVar5 = (long *)0x28;
  func_0x000107c60e20();
  *plVar5 = 0;
  plVar5[1] = uVar4;
  lVar2 = *param_3;
  plVar5[3] = param_3[1];
  plVar5[2] = lVar2;
  *(int *)(plVar5 + 4) = (int)param_3[2];
  if ((uVar10 == 0) || (*(float *)(param_1 + 4) * (float)uVar10 < (float)(param_1[3] + 1))) {
    uVar9 = 1;
    if (2 < uVar10) {
      uVar9 = (ulong)((uVar10 & uVar10 - 1) != 0);
    }
    uVar9 = uVar9 | uVar10 << 1;
    uVar10 = (ulong)((float)(param_1[3] + 1) / *(float *)(param_1 + 4));
    if (uVar9 <= uVar10) {
      uVar9 = uVar10;
    }
    FUN_100039e00(param_1,uVar9);
    uVar10 = param_1[1];
    if ((uVar10 & uVar10 - 1) == 0) {
      unaff_x24 = uVar10 - 1 & uVar4;
    }
    else {
      unaff_x24 = uVar4;
      if (uVar10 <= uVar4) {
        uVar9 = 0;
        if (uVar10 != 0) {
          uVar9 = uVar4 / uVar10;
        }
        unaff_x24 = uVar4 - uVar9 * uVar10;
      }
    }
  }
  lVar2 = *param_1;
  plVar7 = *(long **)(lVar2 + unaff_x24 * 8);
  if (plVar7 == (long *)0x0) {
    plVar7 = param_1 + 2;
    *plVar5 = *plVar7;
    *plVar7 = (long)plVar5;
    *(long **)(lVar2 + unaff_x24 * 8) = plVar7;
    if (*plVar5 == 0) goto LAB_100039d54;
    uVar4 = *(ulong *)(*plVar5 + 8);
    if ((uVar10 & uVar10 - 1) == 0) {
      uVar4 = uVar4 & uVar10 - 1;
    }
    else if (uVar10 <= uVar4) {
      uVar9 = 0;
      if (uVar10 != 0) {
        uVar9 = uVar4 / uVar10;
      }
      uVar4 = uVar4 - uVar9 * uVar10;
    }
    plVar7 = (long *)(*param_1 + uVar4 * 8);
  }
  else {
    *plVar5 = *plVar7;
  }
  *plVar7 = (long)plVar5;
LAB_100039d54:
  param_1[3] = param_1[3] + 1;
  return;
}



/* Entry: 100039a58; end: 100039b93;  */

void FUN_100039a58(long *param_1,ulong param_2,long *param_3)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  long *plVar6;
  ulong uVar7;
  long *plVar8;
  long *plVar9;
  ulong uVar10;
  ulong unaff_x24;
  
  if (param_2 == 0) {
    lVar2 = *param_1;
    *param_1 = 0;
    if (lVar2 != 0) {
      func_0x000107c60e14();
    }
    param_1[1] = 0;
    return;
  }
  if (param_2 >> 0x3d == 0) {
    lVar2 = param_2 << 3;
    func_0x000107c60e20();
    lVar3 = *param_1;
    *param_1 = lVar2;
    if (lVar3 != 0) {
      func_0x000107c60e14();
    }
    uVar4 = 0;
    param_1[1] = param_2;
    do {
      *(undefined8 *)(*param_1 + uVar4 * 8) = 0;
      uVar4 = uVar4 + 1;
    } while (param_2 != uVar4);
    plVar6 = (long *)param_1[2];
    if (plVar6 == (long *)0x0) {
      return;
    }
    uVar4 = plVar6[1];
    uVar5 = param_2 - 1;
    if ((param_2 & uVar5) == 0) {
      uVar4 = uVar4 & uVar5;
    }
    else if (param_2 <= uVar4) {
      uVar10 = 0;
      if (param_2 != 0) {
        uVar10 = uVar4 / param_2;
      }
      uVar4 = uVar4 - uVar10 * param_2;
    }
    *(long **)(*param_1 + uVar4 * 8) = param_1 + 2;
    plVar8 = (long *)*plVar6;
    while (plVar8 != (long *)0x0) {
      uVar10 = plVar8[1];
      if ((param_2 & uVar5) == 0) {
        uVar10 = uVar10 & uVar5;
      }
      else if (param_2 <= uVar10) {
        uVar7 = 0;
        if (param_2 != 0) {
          uVar7 = uVar10 / param_2;
        }
        uVar10 = uVar10 - uVar7 * param_2;
      }
      plVar9 = plVar8;
      if (uVar10 != uVar4) {
        lVar2 = *param_1;
        if (*(long *)(lVar2 + uVar10 * 8) == 0) {
          *(long **)(lVar2 + uVar10 * 8) = plVar6;
          uVar4 = uVar10;
        }
        else {
          *plVar6 = *plVar8;
          *plVar8 = **(undefined8 **)(lVar2 + uVar10 * 8);
          **(long **)(lVar2 + uVar10 * 8) = (long)plVar8;
          plVar9 = plVar6;
        }
      }
      plVar6 = plVar9;
      plVar8 = (long *)*plVar9;
    }
    return;
  }
  func_0x000104c4f740();
  uVar5 = (ulong)(int)param_2;
  uVar4 = param_1[1];
  if (uVar4 != 0) {
    uVar10 = uVar4 - 1;
    if ((uVar4 & uVar10) == 0) {
      unaff_x24 = uVar10 & uVar5;
    }
    else {
      unaff_x24 = uVar5;
      if (uVar4 <= uVar5) {
        uVar7 = 0;
        if (uVar4 != 0) {
          uVar7 = uVar5 / uVar4;
        }
        unaff_x24 = uVar5 - uVar7 * uVar4;
      }
    }
    plVar6 = *(long **)(*param_1 + unaff_x24 * 8);
    if (plVar6 != (long *)0x0) {
      do {
        while( true ) {
          plVar6 = (long *)*plVar6;
          if (plVar6 == (long *)0x0) goto LAB_100039c40;
          uVar7 = plVar6[1];
          if (uVar7 != uVar5) break;
          if (*(int *)(plVar6 + 2) == (int)param_2) {
            return;
          }
        }
        if ((uVar4 & uVar10) == 0) {
          uVar7 = uVar7 & uVar10;
        }
        else if (uVar4 <= uVar7) {
          uVar1 = 0;
          if (uVar4 != 0) {
            uVar1 = uVar7 / uVar4;
          }
          uVar7 = uVar7 - uVar1 * uVar4;
        }
      } while (uVar7 == unaff_x24);
    }
  }
LAB_100039c40:
  plVar6 = (long *)0x28;
  func_0x000107c60e20();
  *plVar6 = 0;
  plVar6[1] = uVar5;
  lVar2 = *param_3;
  plVar6[3] = param_3[1];
  plVar6[2] = lVar2;
  *(int *)(plVar6 + 4) = (int)param_3[2];
  if ((uVar4 == 0) || (*(float *)(param_1 + 4) * (float)uVar4 < (float)(param_1[3] + 1))) {
    uVar10 = 1;
    if (2 < uVar4) {
      uVar10 = (ulong)((uVar4 & uVar4 - 1) != 0);
    }
    uVar10 = uVar10 | uVar4 << 1;
    uVar4 = (ulong)((float)(param_1[3] + 1) / *(float *)(param_1 + 4));
    if (uVar10 <= uVar4) {
      uVar10 = uVar4;
    }
    FUN_100039e00(param_1,uVar10);
    uVar4 = param_1[1];
    if ((uVar4 & uVar4 - 1) == 0) {
      unaff_x24 = uVar4 - 1 & uVar5;
    }
    else {
      unaff_x24 = uVar5;
      if (uVar4 <= uVar5) {
        uVar10 = 0;
        if (uVar4 != 0) {
          uVar10 = uVar5 / uVar4;
        }
        unaff_x24 = uVar5 - uVar10 * uVar4;
      }
    }
  }
  lVar2 = *param_1;
  plVar8 = *(long **)(lVar2 + unaff_x24 * 8);
  if (plVar8 == (long *)0x0) {
    plVar8 = param_1 + 2;
    *plVar6 = *plVar8;
    *plVar8 = (long)plVar6;
    *(long **)(lVar2 + unaff_x24 * 8) = plVar8;
    if (*plVar6 == 0) goto LAB_100039d54;
    uVar5 = *(ulong *)(*plVar6 + 8);
    if ((uVar4 & uVar4 - 1) == 0) {
      uVar5 = uVar5 & uVar4 - 1;
    }
    else if (uVar4 <= uVar5) {
      uVar10 = 0;
      if (uVar4 != 0) {
        uVar10 = uVar5 / uVar4;
      }
      uVar5 = uVar5 - uVar10 * uVar4;
    }
    plVar8 = (long *)(*param_1 + uVar5 * 8);
  }
  else {
    *plVar6 = *plVar8;
  }
  *plVar8 = (long)plVar6;
LAB_100039d54:
  param_1[3] = param_1[3] + 1;
  return;
}



/* Entry: 100039b94; end: 100039d87;  */

void FUN_100039b94(long *param_1,int param_2,long *param_3)

{
  ulong uVar1;
  ulong uVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
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
        uVar6 = 0;
        if (uVar7 != 0) {
          uVar6 = uVar8 / uVar7;
        }
        unaff_x24 = uVar8 - uVar6 * uVar7;
      }
    }
    plVar4 = *(long **)(*param_1 + unaff_x24 * 8);
    if (plVar4 != (long *)0x0) {
      do {
        while( true ) {
          plVar4 = (long *)*plVar4;
          if (plVar4 == (long *)0x0) goto LAB_100039c40;
          uVar6 = plVar4[1];
          if (uVar6 != uVar8) break;
          if (*(int *)(plVar4 + 2) == param_2) {
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
      } while (uVar6 == unaff_x24);
    }
  }
LAB_100039c40:
  plVar4 = (long *)0x28;
  func_0x000107c60e20();
  *plVar4 = 0;
  plVar4[1] = uVar8;
  lVar5 = *param_3;
  plVar4[3] = param_3[1];
  plVar4[2] = lVar5;
  *(int *)(plVar4 + 4) = (int)param_3[2];
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
    FUN_100039e00(param_1,uVar2);
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
  lVar5 = *param_1;
  plVar3 = *(long **)(lVar5 + unaff_x24 * 8);
  if (plVar3 == (long *)0x0) {
    plVar3 = param_1 + 2;
    *plVar4 = *plVar3;
    *plVar3 = (long)plVar4;
    *(long **)(lVar5 + unaff_x24 * 8) = plVar3;
    if (*plVar4 == 0) goto LAB_100039d54;
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
LAB_100039d54:
  param_1[3] = param_1[3] + 1;
  return;
}



/* Entry: 100039d88; end: 100039dff;  */

undefined8 * FUN_100039d88(undefined8 *param_1,undefined4 *param_2,long param_3)

{
  param_1[1] = 0;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 4) = 0x3f800000;
  if (param_3 != 0) {
    param_3 = param_3 * 0x14;
    do {
      FUN_100039b94(param_1,*param_2,param_2);
      param_2 = param_2 + 5;
      param_3 = param_3 + -0x14;
    } while (param_3 != 0);
  }
  return param_1;
}



/* Entry: 100039e00; end: 100039fcf;  */

long * FUN_100039e00(long *param_1,long *param_2)

{
  ulong uVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  ulong uVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  
  plVar3 = param_1;
  plVar4 = param_2;
  if ((long)param_2 - 1U == 0) {
    param_2 = (long *)0x2;
  }
  else if (((ulong)param_2 & (long)param_2 - 1U) != 0) {
    func_0x000107c60c44();
    plVar3 = param_2;
  }
  plVar9 = (long *)param_1[1];
  if (plVar9 > param_2 || param_2 == plVar9) {
    if (plVar9 <= param_2) {
      return plVar3;
    }
    plVar3 = (long *)(long)((float)(ulong)param_1[3] / *(float *)(param_1 + 4));
    if ((plVar9 < (long *)0x3) || (((ulong)plVar9 & (long)plVar9 - 1U) != 0)) {
      func_0x000107c60c44();
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
        func_0x000107c60e14();
      }
      param_1[1] = 0;
      return plVar3;
    }
  }
  if ((ulong)param_2 >> 0x3d == 0) {
    lVar2 = (long)param_2 << 3;
    func_0x000107c60e20();
    plVar3 = (long *)*param_1;
    *param_1 = lVar2;
    if (plVar3 != (long *)0x0) {
      func_0x000107c60e14();
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
    return plVar3;
  }
  func_0x000104c4f740();
  plVar3[1] = 0;
  *plVar3 = 0;
  plVar3[3] = 0;
  plVar3[2] = 0;
  *(int *)(plVar3 + 4) = (int)plVar4[4];
  FUN_100039e00();
  for (plVar4 = (long *)plVar4[2]; plVar4 != (long *)0x0; plVar4 = (long *)*plVar4) {
    FUN_100039b94(plVar3,*(undefined4 *)(plVar4 + 2));
  }
  return plVar3;
}



/* Entry: 100039fd0; end: 10003a043;  */

undefined8 * FUN_100039fd0(undefined8 *param_1,long param_2)

{
  long *plVar1;
  
  param_1[1] = 0;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_2 + 0x20);
  FUN_100039e00(param_1,*(undefined8 *)(param_2 + 8));
  for (plVar1 = *(long **)(param_2 + 0x10); plVar1 != (long *)0x0; plVar1 = (long *)*plVar1) {
    FUN_100039b94(param_1,*(undefined4 *)(plVar1 + 2));
  }
  return param_1;
}



/* Entry: 10003a044; end: 10003a08b;  */

long * FUN_10003a044(long *param_1)

{
  long *plVar1;
  long lVar2;
  
  plVar1 = (long *)param_1[2];
  while (plVar1 != (long *)0x0) {
    plVar1 = (long *)*plVar1;
    func_0x000107c60e14();
  }
  lVar2 = *param_1;
  *param_1 = 0;
  if (lVar2 != 0) {
    func_0x000107c60e14();
  }
  return param_1;
}



/* Entry: 10003a08c; end: 10003e4d7;  */

/* WARNING: Removing unreachable block (ram,0x00010003d234) */
/* WARNING: Removing unreachable block (ram,0x00010003c2dc) */
/* WARNING: Removing unreachable block (ram,0x00010003bf10) */
/* WARNING: Removing unreachable block (ram,0x00010003bc34) */
/* WARNING: Removing unreachable block (ram,0x00010003b184) */
/* WARNING: Removing unreachable block (ram,0x00010003a81c) */
/* WARNING: Removing unreachable block (ram,0x00010003ab78) */
/* WARNING: Removing unreachable block (ram,0x00010003b300) */
/* WARNING: Removing unreachable block (ram,0x00010003bdb0) */
/* WARNING: Removing unreachable block (ram,0x00010003c160) */
/* WARNING: Removing unreachable block (ram,0x00010003c958) */
/* WARNING: Removing unreachable block (ram,0x00010003d538) */

long * FUN_10003a08c(void)

{
  int *piVar1;
  bool bVar2;
  int iVar3;
  ulong uVar4;
  code *pcVar5;
  int *piVar6;
  ulong uVar7;
  long *plVar8;
  long *plVar9;
  long *plVar10;
  ulong uVar11;
  long *plVar12;
  ulong uVar13;
  ulong uVar14;
  undefined8 *puVar15;
  long lVar16;
  long lVar17;
  ulong uVar18;
  ulong unaff_x27;
  ulong uVar19;
  ulong uVar20;
  long lVar21;
  undefined8 uStack_ae0;
  undefined8 uStack_ad8;
  long lStack_ad0;
  undefined8 uStack_ac8;
  undefined8 uStack_ac0;
  long lStack_ab8;
  undefined8 uStack_ab0;
  undefined8 uStack_aa8;
  long lStack_aa0;
  undefined8 uStack_a98;
  undefined8 uStack_a90;
  long lStack_a88;
  undefined8 uStack_a80;
  undefined8 uStack_a78;
  long lStack_a70;
  undefined8 uStack_a68;
  undefined8 uStack_a60;
  long lStack_a58;
  undefined8 uStack_a50;
  undefined8 uStack_a48;
  long lStack_a40;
  undefined8 uStack_a38;
  undefined8 uStack_a30;
  long lStack_a28;
  undefined8 uStack_a20;
  undefined8 uStack_a18;
  long lStack_a10;
  long lStack_a08;
  undefined8 uStack_a00;
  long lStack_9f8;
  int aiStack_9f0 [2];
  long alStack_9e8 [2];
  char cStack_9d8;
  char cStack_9d7;
  char cStack_9d6;
  char cStack_9d5;
  char cStack_9d4;
  char cStack_9d3;
  char cStack_9d2;
  char acStack_9d1 [9];
  undefined8 auStack_9c8 [2];
  char cStack_9b8;
  char cStack_9b7;
  char cStack_9b6;
  char cStack_9b5;
  char cStack_9b4;
  char cStack_9b3;
  char cStack_9b2;
  char acStack_9b1 [9];
  undefined8 auStack_9a8 [2];
  char cStack_998;
  char cStack_997;
  char cStack_996;
  char cStack_995;
  char cStack_994;
  char cStack_993;
  char cStack_992;
  char acStack_991 [9];
  undefined8 uStack_988;
  undefined8 uStack_980;
  undefined8 uStack_978;
  undefined4 uStack_970;
  undefined8 auStack_968 [2];
  char cStack_958;
  char cStack_957;
  char cStack_956;
  char cStack_955;
  char cStack_954;
  char cStack_953;
  char cStack_952;
  char acStack_951 [9];
  undefined8 auStack_948 [2];
  char cStack_938;
  char cStack_937;
  char cStack_936;
  char cStack_935;
  char cStack_934;
  char cStack_933;
  char cStack_932;
  char acStack_931 [9];
  undefined8 uStack_928;
  undefined8 uStack_920;
  undefined8 uStack_918;
  undefined4 uStack_910;
  undefined8 auStack_908 [2];
  char cStack_8f8;
  char cStack_8f7;
  char cStack_8f6;
  char cStack_8f5;
  char cStack_8f4;
  char cStack_8f3;
  char cStack_8f2;
  char acStack_8f1 [9];
  undefined8 uStack_8e8;
  undefined8 uStack_8e0;
  undefined8 uStack_8d8;
  undefined4 uStack_8d0;
  undefined8 uStack_8c8;
  undefined8 uStack_8c0;
  undefined8 uStack_8b8;
  undefined4 uStack_8b0;
  undefined1 auStack_8a8 [24];
  undefined4 uStack_890;
  undefined1 auStack_888 [24];
  undefined4 uStack_870;
  undefined1 auStack_868 [24];
  undefined4 uStack_850;
  undefined1 auStack_848 [24];
  undefined4 uStack_830;
  undefined1 auStack_828 [24];
  undefined4 uStack_810;
  undefined1 auStack_808 [24];
  undefined4 uStack_7f0;
  undefined1 auStack_7e8 [24];
  undefined4 uStack_7d0;
  undefined1 auStack_7c8 [24];
  undefined4 uStack_7b0;
  undefined1 auStack_7a8 [24];
  undefined4 uStack_790;
  undefined1 auStack_788 [24];
  undefined4 uStack_770;
  undefined1 auStack_768 [24];
  undefined4 uStack_750;
  undefined1 auStack_748 [24];
  undefined4 uStack_730;
  undefined1 auStack_728 [24];
  undefined4 uStack_710;
  undefined1 auStack_708 [24];
  undefined4 uStack_6f0;
  undefined1 auStack_6e8 [24];
  undefined4 uStack_6d0;
  undefined1 auStack_6c8 [24];
  undefined4 uStack_6b0;
  undefined1 auStack_6a8 [24];
  undefined4 uStack_690;
  undefined1 auStack_688 [24];
  undefined4 uStack_670;
  undefined1 auStack_668 [24];
  undefined4 uStack_650;
  undefined1 auStack_648 [24];
  undefined4 uStack_630;
  undefined1 auStack_628 [24];
  undefined4 uStack_610;
  undefined1 auStack_608 [24];
  undefined4 uStack_5f0;
  undefined1 auStack_5e8 [24];
  undefined4 uStack_5d0;
  undefined1 auStack_5c8 [24];
  undefined4 uStack_5b0;
  undefined1 auStack_5a8 [24];
  undefined4 uStack_590;
  undefined1 auStack_588 [24];
  undefined4 uStack_570;
  undefined1 auStack_568 [24];
  undefined4 uStack_550;
  undefined1 auStack_548 [24];
  undefined4 uStack_530;
  undefined1 auStack_528 [24];
  undefined4 uStack_510;
  undefined1 auStack_508 [24];
  undefined4 uStack_4f0;
  undefined1 auStack_4e8 [24];
  undefined4 uStack_4d0;
  undefined1 auStack_4c8 [24];
  undefined4 uStack_4b0;
  undefined1 auStack_4a8 [24];
  undefined4 uStack_490;
  undefined1 auStack_488 [24];
  undefined4 uStack_470;
  undefined1 auStack_468 [24];
  undefined4 uStack_450;
  undefined1 auStack_448 [24];
  undefined4 uStack_430;
  undefined1 auStack_428 [24];
  undefined4 uStack_410;
  undefined1 auStack_408 [24];
  undefined4 uStack_3f0;
  undefined1 auStack_3e8 [24];
  undefined4 uStack_3d0;
  undefined1 auStack_3c8 [24];
  undefined4 uStack_3b0;
  undefined1 auStack_3a8 [24];
  undefined4 uStack_390;
  undefined1 auStack_388 [24];
  undefined4 uStack_370;
  undefined1 auStack_368 [24];
  undefined4 uStack_350;
  undefined1 auStack_348 [24];
  undefined4 uStack_330;
  undefined1 auStack_328 [24];
  undefined4 uStack_310;
  undefined1 auStack_308 [24];
  undefined4 uStack_2f0;
  undefined1 auStack_2e8 [24];
  undefined4 uStack_2d0;
  undefined1 auStack_2c8 [24];
  undefined4 uStack_2b0;
  undefined1 auStack_2a8 [24];
  undefined4 uStack_290;
  undefined1 auStack_288 [24];
  undefined4 uStack_270;
  undefined1 auStack_268 [24];
  undefined4 uStack_250;
  undefined1 auStack_248 [24];
  undefined4 uStack_230;
  undefined1 auStack_228 [24];
  undefined4 uStack_210;
  undefined1 auStack_208 [24];
  undefined4 uStack_1f0;
  undefined1 auStack_1e8 [24];
  undefined4 uStack_1d0;
  undefined1 auStack_1c8 [24];
  undefined4 uStack_1b0;
  undefined1 auStack_1a8 [24];
  undefined4 uStack_190;
  undefined1 auStack_188 [24];
  undefined4 uStack_170;
  undefined1 auStack_168 [24];
  undefined4 uStack_150;
  undefined1 auStack_148 [24];
  undefined4 uStack_130;
  undefined1 auStack_128 [24];
  undefined4 uStack_110;
  undefined1 auStack_108 [24];
  undefined4 uStack_f0;
  undefined1 auStack_e8 [24];
  undefined4 uStack_d0;
  undefined1 auStack_c8 [24];
  undefined4 uStack_b0;
  undefined1 auStack_a8 [24];
  undefined4 uStack_90;
  undefined1 auStack_88 [24];
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  aiStack_9f0[0] = 0;
  FUN_10002d4d8(alStack_9e8,"camera");
  acStack_9d1[1] = '\x02';
  acStack_9d1[2] = '\0';
  acStack_9d1[3] = '\0';
  acStack_9d1[4] = '\0';
  FUN_10002d4d8(auStack_9c8,&UNK_10f58853b);
  acStack_9b1[1] = '\x01';
  acStack_9b1[2] = '\0';
  acStack_9b1[3] = '\0';
  acStack_9b1[4] = '\0';
  FUN_10002d4d8(auStack_9a8,"display");
  FUN_10003e4d8(0x11373bfa0,aiStack_9f0,3);
  lVar17 = 0;
  do {
    if (acStack_991[lVar17] < '\0') {
      func_0x000107c60e14(*(undefined8 *)((long)auStack_9a8 + lVar17));
    }
    lVar17 = lVar17 + -0x20;
  } while (lVar17 != -0x60);
  func_0x000107c60e34(&UNK_1098f6bd0,0x11373bfa0,0x100000000);
  aiStack_9f0[0] = 0x1d;
  FUN_10002d4d8(alStack_9e8,&UNK_10f58853f);
  acStack_9d1[1] = '\x1e';
  acStack_9d1[2] = '\0';
  acStack_9d1[3] = '\0';
  acStack_9d1[4] = '\0';
  FUN_10002d4d8(auStack_9c8,&UNK_10f58854c);
  FUN_10003e988(0x11373bfc8,aiStack_9f0,2);
  lVar17 = 0;
  do {
    if (acStack_9b1[lVar17] < '\0') {
      func_0x000107c60e14(*(undefined8 *)((long)auStack_9c8 + lVar17));
    }
    lVar17 = lVar17 + -0x20;
  } while (lVar17 != -0x40);
  func_0x000107c60e34(&UNK_1098f6bd4,0x11373bfc8,0x100000000);
  FUN_10002d4d8(&lStack_a08,&UNK_10f5884f3);
  aiStack_9f0[0] = 0;
  alStack_9e8[1] = uStack_a00;
  alStack_9e8[0] = lStack_a08;
  cStack_9d8 = (undefined1)lStack_9f8;
  cStack_9d7 = lStack_9f8._1_1_;
  cStack_9d6 = lStack_9f8._2_1_;
  cStack_9d5 = lStack_9f8._3_1_;
  cStack_9d4 = lStack_9f8._4_1_;
  cStack_9d3 = lStack_9f8._5_1_;
  cStack_9d2 = lStack_9f8._6_1_;
  acStack_9d1[0] = lStack_9f8._7_1_;
  lStack_a08 = 0;
  uStack_a00 = 0;
  lStack_9f8 = 0;
  FUN_10002d4d8(&uStack_a20,&UNK_10f588500);
  acStack_9d1[1] = '\x01';
  acStack_9d1[2] = '\0';
  acStack_9d1[3] = '\0';
  acStack_9d1[4] = '\0';
  auStack_9c8[1] = uStack_a18;
  auStack_9c8[0] = uStack_a20;
  cStack_9b8 = (undefined1)lStack_a10;
  cStack_9b7 = lStack_a10._1_1_;
  cStack_9b6 = lStack_a10._2_1_;
  cStack_9b5 = lStack_a10._3_1_;
  cStack_9b4 = lStack_a10._4_1_;
  cStack_9b3 = lStack_a10._5_1_;
  cStack_9b2 = lStack_a10._6_1_;
  acStack_9b1[0] = lStack_a10._7_1_;
  uStack_a20 = 0;
  uStack_a18 = 0;
  lStack_a10 = 0;
  FUN_10002d4d8(&uStack_a38,&UNK_10f5884fb);
  acStack_9b1[1] = '\x02';
  acStack_9b1[2] = '\0';
  acStack_9b1[3] = '\0';
  acStack_9b1[4] = '\0';
  auStack_9a8[1] = uStack_a30;
  auStack_9a8[0] = uStack_a38;
  cStack_998 = (undefined1)lStack_a28;
  cStack_997 = lStack_a28._1_1_;
  cStack_996 = lStack_a28._2_1_;
  cStack_995 = lStack_a28._3_1_;
  cStack_994 = lStack_a28._4_1_;
  cStack_993 = lStack_a28._5_1_;
  cStack_992 = lStack_a28._6_1_;
  acStack_991[0] = lStack_a28._7_1_;
  uStack_a38 = 0;
  uStack_a30 = 0;
  lStack_a28 = 0;
  FUN_10002d4d8(&uStack_a50,&UNK_10f588505);
  acStack_991[1] = '\x03';
  acStack_991[2] = '\0';
  acStack_991[3] = '\0';
  acStack_991[4] = '\0';
  uStack_980 = uStack_a48;
  uStack_988 = uStack_a50;
  uStack_978 = lStack_a40;
  uStack_a50 = 0;
  uStack_a48 = 0;
  lStack_a40 = 0;
  FUN_10002d4d8(&uStack_a68,&UNK_10f58850b);
  uStack_970 = 4;
  auStack_968[1] = uStack_a60;
  auStack_968[0] = uStack_a68;
  cStack_958 = (undefined1)lStack_a58;
  cStack_957 = lStack_a58._1_1_;
  cStack_956 = lStack_a58._2_1_;
  cStack_955 = lStack_a58._3_1_;
  cStack_954 = lStack_a58._4_1_;
  cStack_953 = lStack_a58._5_1_;
  cStack_952 = lStack_a58._6_1_;
  acStack_951[0] = lStack_a58._7_1_;
  uStack_a68 = 0;
  uStack_a60 = 0;
  lStack_a58 = 0;
  FUN_10002d4d8(&uStack_a80,&UNK_10f588513);
  acStack_951[1] = '\x05';
  acStack_951[2] = '\0';
  acStack_951[3] = '\0';
  acStack_951[4] = '\0';
  auStack_948[1] = uStack_a78;
  auStack_948[0] = uStack_a80;
  cStack_938 = (undefined1)lStack_a70;
  cStack_937 = lStack_a70._1_1_;
  cStack_936 = lStack_a70._2_1_;
  cStack_935 = lStack_a70._3_1_;
  cStack_934 = lStack_a70._4_1_;
  cStack_933 = lStack_a70._5_1_;
  cStack_932 = lStack_a70._6_1_;
  acStack_931[0] = lStack_a70._7_1_;
  uStack_a80 = 0;
  uStack_a78 = 0;
  lStack_a70 = 0;
  FUN_10002d4d8(&uStack_a98,&UNK_10f58851b);
  acStack_931[1] = '\x06';
  acStack_931[2] = '\0';
  acStack_931[3] = '\0';
  acStack_931[4] = '\0';
  uStack_920 = uStack_a90;
  uStack_928 = uStack_a98;
  uStack_918 = lStack_a88;
  uStack_a98 = 0;
  uStack_a90 = 0;
  lStack_a88 = 0;
  FUN_10002d4d8(&uStack_ab0,&UNK_10f588522);
  uStack_910 = 7;
  auStack_908[1] = uStack_aa8;
  auStack_908[0] = uStack_ab0;
  cStack_8f8 = (undefined1)lStack_aa0;
  cStack_8f7 = lStack_aa0._1_1_;
  cStack_8f6 = lStack_aa0._2_1_;
  cStack_8f5 = lStack_aa0._3_1_;
  cStack_8f4 = lStack_aa0._4_1_;
  cStack_8f3 = lStack_aa0._5_1_;
  cStack_8f2 = lStack_aa0._6_1_;
  acStack_8f1[0] = lStack_aa0._7_1_;
  uStack_ab0 = 0;
  uStack_aa8 = 0;
  lStack_aa0 = 0;
  FUN_10002d4d8(&uStack_ac8,&UNK_10f58852a);
  acStack_8f1[1] = '\b';
  acStack_8f1[2] = '\0';
  acStack_8f1[3] = '\0';
  acStack_8f1[4] = '\0';
  uStack_8e0 = uStack_ac0;
  uStack_8e8 = uStack_ac8;
  uStack_8d8 = lStack_ab8;
  uStack_ac8 = 0;
  uStack_ac0 = 0;
  lStack_ab8 = 0;
  FUN_10002d4d8(&uStack_ae0,&UNK_10f588535);
  uVar14 = 0;
  lVar17 = 0;
  uStack_8d0 = 9;
  uStack_8c0 = uStack_ad8;
  uStack_8c8 = uStack_ae0;
  uStack_8b8 = lStack_ad0;
  uStack_ae0 = 0;
  uStack_ad8 = 0;
  lStack_ad0 = 0;
  fRam000000011373c010 = 1.0;
  uVar20 = 0x11373b000;
  uRam000000011373bff8 = 0;
  lRam000000011373bff0 = 0;
  uRam000000011373c008 = 0;
  plRam000000011373c000 = (long *)0x0;
  do {
    uVar19 = uRam000000011373bff8;
    iVar3 = *(int *)((long)aiStack_9f0 + lVar17);
    uVar18 = (ulong)iVar3;
    if (uRam000000011373bff8 != 0) {
      uVar7 = uRam000000011373bff8 - 1;
      if ((uRam000000011373bff8 & uVar7) == 0) {
        unaff_x27 = uVar7 & uVar18;
      }
      else {
        unaff_x27 = uVar18;
        if (uRam000000011373bff8 <= uVar18) {
          uVar11 = 0;
          if (uRam000000011373bff8 != 0) {
            uVar11 = uVar18 / uRam000000011373bff8;
          }
          unaff_x27 = uVar18 - uVar11 * uRam000000011373bff8;
        }
      }
      plVar8 = *(long **)(lRam000000011373bff0 + unaff_x27 * 8);
      if (plVar8 != (long *)0x0) {
        do {
          while( true ) {
            plVar8 = (long *)*plVar8;
            if (plVar8 == (long *)0x0) goto LAB_10003a4d0;
            uVar11 = plVar8[1];
            if (uVar11 != uVar18) break;
            if (*(int *)(plVar8 + 2) == iVar3) goto LAB_10003a7ac;
          }
          if ((uRam000000011373bff8 & uVar7) == 0) {
            uVar11 = uVar11 & uVar7;
          }
          else if (uRam000000011373bff8 <= uVar11) {
            uVar13 = 0;
            if (uRam000000011373bff8 != 0) {
              uVar13 = uVar11 / uRam000000011373bff8;
            }
            uVar11 = uVar11 - uVar13 * uRam000000011373bff8;
          }
        } while (uVar11 == unaff_x27);
      }
    }
LAB_10003a4d0:
    plVar8 = (long *)0x30;
    func_0x000107c60e20();
    *plVar8 = 0;
    plVar8[1] = uVar18;
    *(int *)(plVar8 + 2) = iVar3;
    if (acStack_9d1[lVar17] < '\0') {
      FUN_100033dac(plVar8 + 3,*(undefined8 *)((long)alStack_9e8 + lVar17),
                    *(undefined8 *)((long)alStack_9e8 + lVar17 + 8));
      uVar14 = uRam000000011373c008;
    }
    else {
      lVar16 = *(long *)((long)alStack_9e8 + lVar17);
      plVar8[4] = *(long *)((long)alStack_9e8 + lVar17 + 8);
      plVar8[3] = lVar16;
      plVar8[5] = *(long *)(&stack0xfffffffffffff628 + lVar17);
    }
    if ((uVar19 == 0) || (fRam000000011373c010 * (float)uVar19 < (float)(uVar14 + 1))) {
      uVar7 = 1;
      if (2 < uVar19) {
        uVar7 = (ulong)((uVar19 & uVar19 - 1) != 0);
      }
      uVar7 = uVar7 | uVar19 << 1;
      uVar14 = (ulong)((float)(uVar14 + 1) / fRam000000011373c010);
      if (uVar7 <= uVar14) {
        uVar7 = uVar14;
      }
      if (uVar7 - 1 == 0) {
        uVar7 = 2;
      }
      else if ((uVar7 & uVar7 - 1) != 0) {
        func_0x000107c60c44();
      }
      uVar14 = uRam000000011373bff8;
      if (uRam000000011373bff8 < uVar7) {
LAB_10003a59c:
        if (uVar7 >> 0x3d != 0) {
          func_0x000104c4f740();
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x10003d820);
          (*pcVar5)();
        }
        lVar16 = uVar7 << 3;
        func_0x000107c60e20();
        bVar2 = lRam000000011373bff0 != 0;
        lRam000000011373bff0 = lVar16;
        if (bVar2) {
          func_0x000107c60e14();
        }
        uVar14 = 0;
        uRam000000011373bff8 = uVar7;
        do {
          *(undefined8 *)(lRam000000011373bff0 + uVar14 * 8) = 0;
          plVar9 = plRam000000011373c000;
          uVar14 = uVar14 + 1;
        } while (uVar7 != uVar14);
        uVar19 = uVar7;
        if (plRam000000011373c000 != (long *)0x0) {
          uVar14 = plRam000000011373c000[1];
          uVar11 = uVar7 - 1;
          if ((uVar7 & uVar11) == 0) {
            uVar14 = uVar14 & uVar11;
          }
          else if (uVar7 <= uVar14) {
            uVar13 = 0;
            if (uVar7 != 0) {
              uVar13 = uVar14 / uVar7;
            }
            uVar14 = uVar14 - uVar13 * uVar7;
          }
          *(undefined8 *)(lRam000000011373bff0 + uVar14 * 8) = 0x11373c000;
          plVar10 = (long *)*plVar9;
          lVar16 = lRam000000011373bff0;
          while (lRam000000011373bff0 = lVar16, plVar10 != (long *)0x0) {
            uVar13 = plVar10[1];
            if ((uVar7 & uVar11) == 0) {
              uVar13 = uVar13 & uVar11;
            }
            else if (uVar7 <= uVar13) {
              uVar4 = 0;
              if (uVar7 != 0) {
                uVar4 = uVar13 / uVar7;
              }
              uVar13 = uVar13 - uVar4 * uVar7;
            }
            plVar12 = plVar10;
            if (uVar13 != uVar14) {
              if (*(long *)(lVar16 + uVar13 * 8) == 0) {
                *(long **)(lVar16 + uVar13 * 8) = plVar9;
                uVar14 = uVar13;
              }
              else {
                *plVar9 = *plVar10;
                *plVar10 = **(long **)(lVar16 + uVar13 * 8);
                **(undefined8 **)(lVar16 + uVar13 * 8) = plVar10;
                plVar12 = plVar9;
              }
            }
            lVar16 = lRam000000011373bff0;
            plVar9 = plVar12;
            plVar10 = (long *)*plVar12;
          }
        }
      }
      else {
        uVar19 = uRam000000011373bff8;
        if (uVar7 < uRam000000011373bff8) {
          uVar19 = (ulong)((float)uRam000000011373c008 / fRam000000011373c010);
          if ((uRam000000011373bff8 < 3) || ((uRam000000011373bff8 & uRam000000011373bff8 - 1) != 0)
             ) {
            func_0x000107c60c44();
          }
          else if (1 < uVar19) {
            uVar19 = 1L << (-LZCOUNT(uVar19 - 1) & 0x3fU);
          }
          lVar16 = lRam000000011373bff0;
          if (uVar7 <= uVar19) {
            uVar7 = uVar19;
          }
          uVar19 = uRam000000011373bff8;
          if (uVar7 < uVar14) {
            if (uVar7 != 0) goto LAB_10003a59c;
            lRam000000011373bff0 = 0;
            if (lVar16 != 0) {
              func_0x000107c60e14();
            }
            uRam000000011373bff8 = 0;
            uVar19 = 0;
          }
        }
      }
      if ((uVar19 & uVar19 - 1) == 0) {
        unaff_x27 = uVar19 - 1 & uVar18;
      }
      else {
        unaff_x27 = uVar18;
        if (uVar19 <= uVar18) {
          uVar14 = 0;
          if (uVar19 != 0) {
            uVar14 = uVar18 / uVar19;
          }
          unaff_x27 = uVar18 - uVar14 * uVar19;
        }
      }
    }
    lVar16 = lRam000000011373bff0;
    plVar9 = *(long **)(lRam000000011373bff0 + unaff_x27 * 8);
    if (plVar9 == (long *)0x0) {
      *plVar8 = (long)plRam000000011373c000;
      plRam000000011373c000 = plVar8;
      *(undefined8 *)(lVar16 + unaff_x27 * 8) = 0x11373c000;
      if (*plVar8 != 0) {
        uVar14 = *(ulong *)(*plVar8 + 8);
        if ((uVar19 & uVar19 - 1) == 0) {
          uVar14 = uVar14 & uVar19 - 1;
        }
        else if (uVar19 <= uVar14) {
          uVar18 = 0;
          if (uVar19 != 0) {
            uVar18 = uVar14 / uVar19;
          }
          uVar14 = uVar14 - uVar18 * uVar19;
        }
        *(long **)(lRam000000011373bff0 + uVar14 * 8) = plVar8;
      }
    }
    else {
      *plVar8 = *plVar9;
      *plVar9 = (long)plVar8;
    }
    uVar14 = uRam000000011373c008 + 1;
    uRam000000011373c008 = uVar14;
LAB_10003a7ac:
    lVar17 = lVar17 + 0x20;
    if (lVar17 == 0x140) {
      lVar17 = 0x140;
      do {
        lVar17 = lVar17 + -0x20;
      } while (lVar17 != 0);
      if (lStack_ad0 < 0) {
        func_0x000107c60e14(uStack_ae0);
      }
      if (lStack_ab8 < 0) {
        func_0x000107c60e14(uStack_ac8);
      }
      if (lStack_aa0 < 0) {
        func_0x000107c60e14(uStack_ab0);
      }
      if (lStack_a88 < 0) {
        func_0x000107c60e14(uStack_a98);
      }
      if (lStack_a70 < 0) {
        func_0x000107c60e14(uStack_a80);
      }
      if (lStack_a58 < 0) {
        func_0x000107c60e14(uStack_a68);
      }
      if (lStack_a40 < 0) {
        func_0x000107c60e14(uStack_a50);
      }
      if (lStack_a28 < 0) {
        func_0x000107c60e14(uStack_a38);
      }
      if (lStack_a10 < 0) {
        func_0x000107c60e14(uStack_a20);
      }
      if (lStack_9f8 < 0) {
        func_0x000107c60e14(lStack_a08);
      }
      func_0x000107c60e34(&UNK_1098f6bd8,0x11373bff0,0x100000000);
      aiStack_9f0[0] = 0x23;
      FUN_10002d4d8(alStack_9e8,&DAT_10f58855a);
      FUN_10003ee38(0x11373c018,aiStack_9f0,1);
      if ((long)_cStack_9d8 < 0) {
        func_0x000107c60e14(alStack_9e8[0]);
      }
      func_0x000107c60e34(&UNK_1098f6bdc,0x11373c018,0x100000000);
      aiStack_9f0[0] = 0;
      FUN_10002d4d8(alStack_9e8,&UNK_10f588560);
      acStack_9d1[1] = '\x01';
      acStack_9d1[2] = '\0';
      acStack_9d1[3] = '\0';
      acStack_9d1[4] = '\0';
      FUN_10002d4d8(auStack_9c8,&UNK_10f588568);
      acStack_9b1[1] = '\x02';
      acStack_9b1[2] = '\0';
      acStack_9b1[3] = '\0';
      acStack_9b1[4] = '\0';
      FUN_10002d4d8(auStack_9a8,&UNK_10f58856d);
      acStack_991[1] = '\x03';
      acStack_991[2] = '\0';
      acStack_991[3] = '\0';
      acStack_991[4] = '\0';
      FUN_10002d4d8(&uStack_988,&UNK_10f588578);
      uStack_970 = 4;
      FUN_10002d4d8(auStack_968,&UNK_10f588581);
      FUN_10003f2e8(0x11373c040,aiStack_9f0,5);
      lVar17 = 0;
      do {
        if (acStack_951[lVar17] < '\0') {
          func_0x000107c60e14(*(undefined8 *)((long)auStack_968 + lVar17));
        }
        lVar17 = lVar17 + -0x20;
      } while (lVar17 != -0xa0);
      func_0x000107c60e34(&UNK_1098f6be0,0x11373c040,0x100000000);
      aiStack_9f0[0] = 0;
      FUN_10002d4d8(alStack_9e8,&UNK_10f588560);
      acStack_9d1[1] = '\x01';
      acStack_9d1[2] = '\0';
      acStack_9d1[3] = '\0';
      acStack_9d1[4] = '\0';
      FUN_10002d4d8(auStack_9c8,&UNK_10f588568);
      acStack_9b1[1] = '\x02';
      acStack_9b1[2] = '\0';
      acStack_9b1[3] = '\0';
      acStack_9b1[4] = '\0';
      FUN_10002d4d8(auStack_9a8,&UNK_10f58856d);
      acStack_991[1] = '\x03';
      acStack_991[2] = '\0';
      acStack_991[3] = '\0';
      acStack_991[4] = '\0';
      FUN_10002d4d8(&uStack_988,&UNK_10f588578);
      uStack_970 = 4;
      FUN_10002d4d8(auStack_968,&UNK_10f588581);
      acStack_951[1] = ':';
      acStack_951[2] = '\0';
      acStack_951[3] = '\0';
      acStack_951[4] = '\0';
      FUN_10002d4d8(auStack_948,&UNK_10f58858b);
      acStack_931[1] = ';';
      acStack_931[2] = '\0';
      acStack_931[3] = '\0';
      acStack_931[4] = '\0';
      FUN_10002d4d8(&uStack_928,&UNK_10f58859c);
      uStack_910 = 0x3c;
      FUN_10002d4d8(auStack_908,&UNK_10f5885ad);
      acStack_8f1[1] = '=';
      acStack_8f1[2] = '\0';
      acStack_8f1[3] = '\0';
      acStack_8f1[4] = '\0';
      FUN_10002d4d8(&uStack_8e8,&UNK_10f5885be);
      uStack_8d0 = 0x3e;
      FUN_10002d4d8(&uStack_8c8,&UNK_10f5885cf);
      FUN_10003f2e8(0x11373c068,aiStack_9f0,10);
      lVar17 = 0x140;
      do {
        lVar17 = lVar17 + -0x20;
      } while (lVar17 != 0);
      func_0x000107c60e34(&UNK_1098f6be0,0x11373c068,0x100000000);
      aiStack_9f0[0] = 0;
      FUN_10002d4d8(alStack_9e8,&UNK_10f586ba8);
      acStack_9d1[1] = '\x01';
      acStack_9d1[2] = '\0';
      acStack_9d1[3] = '\0';
      acStack_9d1[4] = '\0';
      FUN_10002d4d8(auStack_9c8,&UNK_10f5885e0);
      acStack_9b1[1] = '\x03';
      acStack_9b1[2] = '\0';
      acStack_9b1[3] = '\0';
      acStack_9b1[4] = '\0';
      FUN_10002d4d8(auStack_9a8,"metadata");
      acStack_991[1] = '\x06';
      acStack_991[2] = '\0';
      acStack_991[3] = '\0';
      acStack_991[4] = '\0';
      FUN_10002d4d8(&uStack_988,&DAT_10f68f148);
      uStack_970 = 7;
      FUN_10002d4d8(auStack_968,&DAT_10f6389e8);
      acStack_951[1] = '\b';
      acStack_951[2] = '\0';
      acStack_951[3] = '\0';
      acStack_951[4] = '\0';
      FUN_10002d4d8(auStack_948,"id");
      acStack_931[1] = '\t';
      acStack_931[2] = '\0';
      acStack_931[3] = '\0';
      acStack_931[4] = '\0';
      FUN_10002d4d8(&uStack_928,&UNK_10f5885f0);
      uStack_910 = 10;
      FUN_10002d4d8(auStack_908,&UNK_10f588603);
      acStack_8f1[1] = '\v';
      acStack_8f1[2] = '\0';
      acStack_8f1[3] = '\0';
      acStack_8f1[4] = '\0';
      FUN_10002d4d8(&uStack_8e8,&UNK_10f588617);
      uStack_8d0 = 0xc;
      FUN_10002d4d8(&uStack_8c8,&UNK_10f588626);
      uStack_8b0 = 0xd;
      FUN_10002d4d8(auStack_8a8,&UNK_10f58863a);
      uStack_890 = 0xe;
      FUN_10002d4d8(auStack_888,&UNK_10f588653);
      uStack_870 = 0xf;
      FUN_10002d4d8(auStack_868,&UNK_10f488f9b);
      uStack_850 = 0x14;
      FUN_10002d4d8(auStack_848,&UNK_10f588670);
      uStack_830 = 0x15;
      FUN_10002d4d8(auStack_828,&UNK_10f588684);
      uStack_810 = 0x16;
      FUN_10002d4d8(auStack_808,&UNK_10f58869d);
      uStack_7f0 = 0x17;
      FUN_10002d4d8(auStack_7e8,&UNK_10f5886bb);
      uStack_7d0 = 0x18;
      FUN_10002d4d8(auStack_7c8,&UNK_10f5886e0);
      uStack_7b0 = 0x19;
      FUN_10002d4d8(auStack_7a8,&UNK_10f5886ea);
      uStack_790 = 0x2d;
      FUN_10002d4d8(auStack_788,&UNK_10f5886f2);
      uStack_770 = 0x2e;
      FUN_10002d4d8(auStack_768,&UNK_10f588701);
      uStack_750 = 0x2f;
      FUN_10002d4d8(auStack_748,&UNK_10f588716);
      uStack_730 = 0x30;
      FUN_10002d4d8(auStack_728,"source");
      uStack_710 = 0x31;
      FUN_10002d4d8(auStack_708,&DAT_10f638ab2);
      uStack_6f0 = 0x32;
      FUN_10002d4d8(auStack_6e8,&DAT_10f2da5ea);
      uStack_6d0 = 0x33;
      FUN_10002d4d8(auStack_6c8,&DAT_10f588728);
      uStack_6b0 = 0x34;
      FUN_10002d4d8(auStack_6a8,"sourceType");
      uStack_690 = 0x35;
      FUN_10002d4d8(auStack_688,&UNK_10f588731);
      uStack_670 = 0x36;
      FUN_10002d4d8(auStack_668,&UNK_10f58873c);
      uStack_650 = 0x37;
      FUN_10002d4d8(auStack_648,&UNK_10f588759);
      uStack_630 = 0x38;
      FUN_10002d4d8(auStack_628,&UNK_10f588770);
      uStack_610 = 0x39;
      FUN_10002d4d8(auStack_608,&UNK_10f588783);
      uStack_5f0 = 0x3a;
      FUN_10002d4d8(auStack_5e8,&UNK_10f58879d);
      uStack_5d0 = 0x3c;
      FUN_10002d4d8(auStack_5c8,&UNK_10f5887ad);
      uStack_5b0 = 0x3d;
      FUN_10002d4d8(auStack_5a8,"hardwareVersion");
      uStack_590 = 0x3e;
      FUN_10002d4d8(auStack_588,&UNK_10f5887bb);
      uStack_570 = 0x3f;
      FUN_10002d4d8(auStack_568,&UNK_10f5887d0);
      uStack_550 = 0x40;
      FUN_10002d4d8(auStack_548,&UNK_10f5887e2);
      uStack_530 = 0x49;
      FUN_10002d4d8(auStack_528,&UNK_10f5887f6);
      uStack_510 = 0x4a;
      FUN_10002d4d8(auStack_508,&UNK_10f58880e);
      uStack_4f0 = 0x4b;
      FUN_10002d4d8(auStack_4e8,&UNK_10f588835);
      uStack_4d0 = 0x4c;
      FUN_10002d4d8(auStack_4c8,&UNK_10f588844);
      uStack_4b0 = 0x4d;
      FUN_10002d4d8(auStack_4a8,&UNK_10f588866);
      uStack_490 = 0x4e;
      FUN_10002d4d8(auStack_488,&UNK_10f58889b);
      uStack_470 = 0x4f;
      FUN_10002d4d8(auStack_468,&UNK_10f5888cb);
      uStack_450 = 0x50;
      FUN_10002d4d8(auStack_448,&UNK_10f5888f9);
      uStack_430 = 0x51;
      FUN_10002d4d8(auStack_428,&DAT_10f588924);
      uStack_410 = 0x52;
      FUN_10002d4d8(auStack_408,&UNK_10f58892c);
      uStack_3f0 = 0x53;
      FUN_10002d4d8(auStack_3e8,&UNK_10f58893d);
      FUN_10003f798(0x11373c090,aiStack_9f0,0x31);
      lVar17 = 0x620;
      do {
        lVar17 = lVar17 + -0x20;
      } while (lVar17 != 0);
      func_0x000107c60e34(&UNK_1098f6be4,0x11373c090,0x100000000);
      aiStack_9f0[0] = 5;
      FUN_10002d4d8(alStack_9e8,&UNK_10f588950);
      acStack_9d1[1] = '\x06';
      acStack_9d1[2] = '\0';
      acStack_9d1[3] = '\0';
      acStack_9d1[4] = '\0';
      FUN_10002d4d8(auStack_9c8,&UNK_10f588963);
      acStack_9b1[1] = '\a';
      acStack_9b1[2] = '\0';
      acStack_9b1[3] = '\0';
      acStack_9b1[4] = '\0';
      FUN_10002d4d8(auStack_9a8,&UNK_10f58896f);
      acStack_991[1] = '\b';
      acStack_991[2] = '\0';
      acStack_991[3] = '\0';
      acStack_991[4] = '\0';
      FUN_10002d4d8(&uStack_988,&UNK_10f588986);
      uStack_970 = 0x1b;
      FUN_10002d4d8(auStack_968,&UNK_10f588991);
      acStack_951[1] = '\x1c';
      acStack_951[2] = '\0';
      acStack_951[3] = '\0';
      acStack_951[4] = '\0';
      FUN_10002d4d8(auStack_948,&UNK_10f5889a1);
      acStack_931[1] = '\x17';
      acStack_931[2] = '\0';
      acStack_931[3] = '\0';
      acStack_931[4] = '\0';
      FUN_10002d4d8(&uStack_928,&UNK_10f5889b2);
      uStack_910 = 0x18;
      FUN_10002d4d8(auStack_908,&UNK_10f5889be);
      acStack_8f1[1] = '\x19';
      acStack_8f1[2] = '\0';
      acStack_8f1[3] = '\0';
      acStack_8f1[4] = '\0';
      FUN_10002d4d8(&uStack_8e8,&UNK_10f5889cd);
      uStack_8d0 = 0x1a;
      FUN_10002d4d8(&uStack_8c8,&UNK_10f5889dd);
      FUN_10003fc48(0x11373c0b8,aiStack_9f0,10);
      lVar17 = 0x140;
      do {
        lVar17 = lVar17 + -0x20;
      } while (lVar17 != 0);
      func_0x000107c60e34(&UNK_1098f6be8,0x11373c0b8,0x100000000);
      aiStack_9f0[0] = 0;
      FUN_10002d4d8(alStack_9e8,&UNK_10f586ba8);
      acStack_9d1[1] = '\x01';
      acStack_9d1[2] = '\0';
      acStack_9d1[3] = '\0';
      acStack_9d1[4] = '\0';
      FUN_10002d4d8(auStack_9c8,&UNK_10f5885e0);
      acStack_9b1[1] = '\x02';
      acStack_9b1[2] = '\0';
      acStack_9b1[3] = '\0';
      acStack_9b1[4] = '\0';
      FUN_10002d4d8(auStack_9a8,&UNK_10f5889ec);
      acStack_991[1] = '\x03';
      acStack_991[2] = '\0';
      acStack_991[3] = '\0';
      acStack_991[4] = '\0';
      FUN_10002d4d8(&uStack_988,"metadata");
      uStack_970 = 4;
      FUN_10002d4d8(auStack_968,&UNK_10f5889f8);
      acStack_951[1] = '\x05';
      acStack_951[2] = '\0';
      acStack_951[3] = '\0';
      acStack_951[4] = '\0';
      FUN_10002d4d8(auStack_948,&UNK_10f588a10);
      acStack_931[1] = '\x06';
      acStack_931[2] = '\0';
      acStack_931[3] = '\0';
      acStack_931[4] = '\0';
      FUN_10002d4d8(&uStack_928,&DAT_10f68f148);
      uStack_910 = 7;
      FUN_10002d4d8(auStack_908,&DAT_10f6389e8);
      acStack_8f1[1] = '\t';
      acStack_8f1[2] = '\0';
      acStack_8f1[3] = '\0';
      acStack_8f1[4] = '\0';
      FUN_10002d4d8(&uStack_8e8,&UNK_10f588a23);
      uStack_8d0 = 10;
      FUN_10002d4d8(&uStack_8c8,&UNK_10f588a34);
      uStack_8b0 = 0xb;
      FUN_10002d4d8(auStack_8a8,&UNK_10f588a46);
      uStack_890 = 0xc;
      FUN_10002d4d8(auStack_888,&UNK_10f588a5b);
      uStack_870 = 0xd;
      FUN_10002d4d8(auStack_868,&UNK_10f588a6b);
      uStack_850 = 0x10;
      FUN_10002d4d8(auStack_848,&UNK_10f588a80);
      uStack_830 = 0x11;
      FUN_10002d4d8(auStack_828,&UNK_10f588a96);
      uStack_810 = 0x12;
      FUN_10002d4d8(auStack_808,&UNK_10f588aa6);
      uStack_7f0 = 0x13;
      FUN_10002d4d8(auStack_7e8,&UNK_10f588ab6);
      uStack_7d0 = 0x14;
      FUN_10002d4d8(auStack_7c8,&UNK_10f588670);
      uStack_7b0 = 0x15;
      FUN_10002d4d8(auStack_7a8,&UNK_10f588684);
      uStack_790 = 0x16;
      FUN_10002d4d8(auStack_788,&UNK_10f58869d);
      uStack_770 = 0x17;
      FUN_10002d4d8(auStack_768,&UNK_10f5886bb);
      uStack_750 = 0x18;
      FUN_10002d4d8(auStack_748,&UNK_10f5886e0);
      uStack_730 = 0x19;
      FUN_10002d4d8(auStack_728,&UNK_10f5886ea);
      uStack_710 = 0x1a;
      FUN_10002d4d8(auStack_708,&UNK_10f588acd);
      uStack_6f0 = 0x1b;
      FUN_10002d4d8(auStack_6e8,&UNK_10f588ae3);
      uStack_6d0 = 0x1c;
      FUN_10002d4d8(auStack_6c8,&UNK_10f588af3);
      uStack_6b0 = 0x1d;
      FUN_10002d4d8(auStack_6a8,&UNK_10f588b08);
      uStack_690 = 0x1e;
      FUN_10002d4d8(auStack_688,&UNK_10f588b22);
      uStack_670 = 0x1f;
      FUN_10002d4d8(auStack_668,&UNK_10f588b32);
      uStack_650 = 0x20;
      FUN_10002d4d8(auStack_648,&UNK_10f588b4c);
      uStack_630 = 0x21;
      FUN_10002d4d8(auStack_628,&UNK_10f588b6b);
      uStack_610 = 0x22;
      FUN_10002d4d8(auStack_608,&UNK_10f588b87);
      uStack_5f0 = 0x23;
      FUN_10002d4d8(auStack_5e8,&UNK_10f588b96);
      uStack_5d0 = 0x24;
      FUN_10002d4d8(auStack_5c8,&UNK_10f588ba1);
      uStack_5b0 = 0x25;
      FUN_10002d4d8(auStack_5a8,&UNK_10f588bb0);
      uStack_590 = 0x26;
      FUN_10002d4d8(auStack_588,&UNK_10f588bca);
      uStack_570 = 0x27;
      FUN_10002d4d8(auStack_568,&UNK_10f588bdd);
      uStack_550 = 0x28;
      FUN_10002d4d8(auStack_548,&UNK_10f588bfd);
      uStack_530 = 0x29;
      FUN_10002d4d8(auStack_528,&UNK_10f588c0d);
      uStack_510 = 0x2a;
      FUN_10002d4d8(auStack_508,&UNK_10f588c19);
      uStack_4f0 = 0x2b;
      FUN_10002d4d8(auStack_4e8,"value");
      uStack_4d0 = 0x2c;
      FUN_10002d4d8(auStack_4c8,&UNK_10f588c26);
      uStack_4b0 = 0x2d;
      FUN_10002d4d8(auStack_4a8,&UNK_10f588c32);
      uStack_490 = 0x2e;
      FUN_10002d4d8(auStack_488,&UNK_10f588c41);
      uStack_470 = 0x2f;
      FUN_10002d4d8(auStack_468,&UNK_10f588c53);
      uStack_450 = 0x30;
      FUN_10002d4d8(auStack_448,"from");
      uStack_430 = 0x31;
      FUN_10002d4d8(auStack_428,"to");
      uStack_410 = 0x36;
      FUN_10002d4d8(auStack_408,&UNK_10f58873c);
      uStack_3f0 = 0x37;
      FUN_10002d4d8(auStack_3e8,&UNK_10f588c70);
      uStack_3d0 = 0x38;
      FUN_10002d4d8(auStack_3c8,&UNK_10f588c8a);
      uStack_3b0 = 0x39;
      FUN_10002d4d8(auStack_3a8,&UNK_10f588c9e);
      uStack_390 = 0x3a;
      FUN_10002d4d8(auStack_388,&UNK_10f58879d);
      uStack_370 = 0x3b;
      FUN_10002d4d8(auStack_368,&UNK_10f588cb9);
      uStack_350 = 0x3c;
      FUN_10002d4d8(auStack_348,&UNK_10f5887ad);
      uStack_330 = 0x3d;
      FUN_10002d4d8(auStack_328,&UNK_10f588cc8);
      uStack_310 = 0x3e;
      FUN_10002d4d8(auStack_308,&UNK_10f5887bb);
      uStack_2f0 = 0x3f;
      FUN_10002d4d8(auStack_2e8,&UNK_10f588cd9);
      uStack_2d0 = 0x41;
      FUN_10002d4d8(auStack_2c8,"firmwareVersion");
      uStack_2b0 = 0x42;
      FUN_10002d4d8(auStack_2a8,&UNK_10f588cf7);
      uStack_290 = 0x43;
      FUN_10002d4d8(auStack_288,&DAT_10f558811);
      uStack_270 = 0x44;
      FUN_10002d4d8(auStack_268,&UNK_10f588cff);
      uStack_250 = 0x45;
      FUN_10002d4d8(auStack_248,&UNK_10f588d13);
      uStack_230 = 0x46;
      FUN_10002d4d8(auStack_228,&UNK_10f588d22);
      uStack_210 = 0x47;
      FUN_10002d4d8(auStack_208,&UNK_10f588d32);
      uStack_1f0 = 0x48;
      FUN_10002d4d8(auStack_1e8,&UNK_10f588d49);
      uStack_1d0 = 0x49;
      FUN_10002d4d8(auStack_1c8,&UNK_10f588d5c);
      uStack_1b0 = 0x4a;
      FUN_10002d4d8(auStack_1a8,&UNK_10f588d6f);
      uStack_190 = 0x4b;
      FUN_10002d4d8(auStack_188,&UNK_10f588d9d);
      uStack_170 = 0x4c;
      FUN_10002d4d8(auStack_168,&UNK_10f588da7);
      uStack_150 = 0x4d;
      FUN_10002d4d8(auStack_148,&UNK_10f588dc6);
      uStack_130 = 0x4e;
      FUN_10002d4d8(auStack_128,&UNK_10f588def);
      uStack_110 = 0x4f;
      FUN_10002d4d8(auStack_108,&UNK_10f588e19);
      uStack_f0 = 0x50;
      FUN_10002d4d8(auStack_e8,&UNK_10f588e3f);
      uStack_d0 = 0x51;
      FUN_10002d4d8(auStack_c8,&DAT_10f588924);
      uStack_b0 = 0x53;
      FUN_10002d4d8(auStack_a8,&UNK_10f588e66);
      uStack_90 = 0x54;
      FUN_10002d4d8(auStack_88,&UNK_10f588e73);
      FUN_10003f798(0x11373c0e0,aiStack_9f0,0x4c);
      lVar17 = 0x980;
      do {
        lVar17 = lVar17 + -0x20;
      } while (lVar17 != 0);
      func_0x000107c60e34(&UNK_1098f6be4,0x11373c0e0,0x100000000);
      aiStack_9f0[0] = 5;
      FUN_10002d4d8(alStack_9e8,&UNK_10f588e91);
      acStack_9d1[1] = '\x06';
      acStack_9d1[2] = '\0';
      acStack_9d1[3] = '\0';
      acStack_9d1[4] = '\0';
      FUN_10002d4d8(auStack_9c8,&UNK_10f588ea5);
      acStack_9b1[1] = '\a';
      acStack_9b1[2] = '\0';
      acStack_9b1[3] = '\0';
      acStack_9b1[4] = '\0';
      FUN_10002d4d8(auStack_9a8,&UNK_10f588eb6);
      acStack_991[1] = '\b';
      acStack_991[2] = '\0';
      acStack_991[3] = '\0';
      acStack_991[4] = '\0';
      FUN_10002d4d8(&uStack_988,&UNK_10f588ece);
      uStack_970 = 0x1b;
      FUN_10002d4d8(auStack_968,&UNK_10f588ed6);
      acStack_951[1] = '\x1c';
      acStack_951[2] = '\0';
      acStack_951[3] = '\0';
      acStack_951[4] = '\0';
      FUN_10002d4d8(auStack_948,&UNK_10f588ee3);
      acStack_931[1] = '\x17';
      acStack_931[2] = '\0';
      acStack_931[3] = '\0';
      acStack_931[4] = '\0';
      FUN_10002d4d8(&uStack_928,&UNK_10f588ef1);
      uStack_910 = 0x18;
      FUN_10002d4d8(auStack_908,&UNK_10f588efe);
      acStack_8f1[1] = '\x19';
      acStack_8f1[2] = '\0';
      acStack_8f1[3] = '\0';
      acStack_8f1[4] = '\0';
      FUN_10002d4d8(&uStack_8e8,&UNK_10f588f13);
      uStack_8d0 = 0x1a;
      FUN_10002d4d8(&uStack_8c8,&UNK_10f588f29);
      FUN_10003fc48(0x11373c108,aiStack_9f0,10);
      lVar17 = 0x140;
      do {
        lVar17 = lVar17 + -0x20;
      } while (lVar17 != 0);
      func_0x000107c60e34(&UNK_1098f6be8,0x11373c108,0x100000000);
      aiStack_9f0[0] = 5;
      FUN_10002d4d8(alStack_9e8,&UNK_10f588f35);
      acStack_9d1[1] = '\b';
      acStack_9d1[2] = '\0';
      acStack_9d1[3] = '\0';
      acStack_9d1[4] = '\0';
      FUN_10002d4d8(auStack_9c8,&UNK_10f588f3f);
      acStack_9b1[1] = '\t';
      acStack_9b1[2] = '\0';
      acStack_9b1[3] = '\0';
      acStack_9b1[4] = '\0';
      FUN_10002d4d8(auStack_9a8,&UNK_10f588f4c);
      acStack_991[1] = '\n';
      acStack_991[2] = '\0';
      acStack_991[3] = '\0';
      acStack_991[4] = '\0';
      FUN_10002d4d8(&uStack_988,&UNK_10f588f5a);
      uStack_970 = 0xb;
      FUN_10002d4d8(auStack_968,&UNK_10f588f6c);
      acStack_951[1] = '\x1b';
      acStack_951[2] = '\0';
      acStack_951[3] = '\0';
      acStack_951[4] = '\0';
      FUN_10002d4d8(auStack_948,&UNK_10f588f7f);
      acStack_931[1] = '\x1c';
      acStack_931[2] = '\0';
      acStack_931[3] = '\0';
      acStack_931[4] = '\0';
      FUN_10002d4d8(&uStack_928,&UNK_10f588f8c);
      uStack_910 = 0x17;
      FUN_10002d4d8(auStack_908,&UNK_10f588f9a);
      acStack_8f1[1] = '\x1a';
      acStack_8f1[2] = '\0';
      acStack_8f1[3] = '\0';
      acStack_8f1[4] = '\0';
      FUN_10002d4d8(&uStack_8e8,&UNK_10f588f29);
      FUN_10003fc48(0x11373c130,aiStack_9f0,9);
      lVar17 = 0x120;
      do {
        lVar17 = lVar17 + -0x20;
      } while (lVar17 != 0);
      func_0x000107c60e34(&UNK_1098f6be8,0x11373c130,0x100000000);
      aiStack_9f0[0] = 5;
      FUN_10002d4d8(alStack_9e8,&UNK_10f588f35);
      acStack_9d1[1] = '\x06';
      acStack_9d1[2] = '\0';
      acStack_9d1[3] = '\0';
      acStack_9d1[4] = '\0';
      FUN_10002d4d8(auStack_9c8,&UNK_10f588fa8);
      acStack_9b1[1] = '\a';
      acStack_9b1[2] = '\0';
      acStack_9b1[3] = '\0';
      acStack_9b1[4] = '\0';
      FUN_10002d4d8(auStack_9a8,&UNK_10f588fb3);
      acStack_991[1] = '\b';
      acStack_991[2] = '\0';
      acStack_991[3] = '\0';
      acStack_991[4] = '\0';
      FUN_10002d4d8(&uStack_988,&UNK_10f588f3f);
      uStack_970 = 9;
      FUN_10002d4d8(auStack_968,&UNK_10f588f4c);
      acStack_951[1] = '\n';
      acStack_951[2] = '\0';
      acStack_951[3] = '\0';
      acStack_951[4] = '\0';
      FUN_10002d4d8(auStack_948,&UNK_10f588f5a);
      acStack_931[1] = '\v';
      acStack_931[2] = '\0';
      acStack_931[3] = '\0';
      acStack_931[4] = '\0';
      FUN_10002d4d8(&uStack_928,&UNK_10f588f6c);
      uStack_910 = 0x10;
      FUN_10002d4d8(auStack_908,&UNK_10f588fbe);
      acStack_8f1[1] = '\x11';
      acStack_8f1[2] = '\0';
      acStack_8f1[3] = '\0';
      acStack_8f1[4] = '\0';
      FUN_10002d4d8(&uStack_8e8,&UNK_10f588fd8);
      uStack_8d0 = 0x13;
      FUN_10002d4d8(&uStack_8c8,&UNK_10f588ff3);
      uStack_8b0 = 0x14;
      FUN_10002d4d8(auStack_8a8,&UNK_10f589015);
      uStack_890 = 0x1b;
      FUN_10002d4d8(auStack_888,&UNK_10f588f7f);
      uStack_870 = 0x1c;
      FUN_10002d4d8(auStack_868,&UNK_10f588f8c);
      uStack_850 = 0x17;
      FUN_10002d4d8(auStack_848,&UNK_10f589038);
      uStack_830 = 0x18;
      FUN_10002d4d8(auStack_828,&UNK_10f589042);
      uStack_810 = 0x19;
      FUN_10002d4d8(auStack_808,&UNK_10f58905a);
      uStack_7f0 = 0x1a;
      FUN_10002d4d8(auStack_7e8,&UNK_10f588f29);
      FUN_10003fc48(0x11373c158,aiStack_9f0,0x11);
      lVar17 = 0x220;
      do {
        lVar17 = lVar17 + -0x20;
      } while (lVar17 != 0);
      func_0x000107c60e34(&UNK_1098f6be8,0x11373c158,0x100000000);
      aiStack_9f0[0] = 5;
      FUN_10002d4d8(alStack_9e8,&UNK_10f589073);
      acStack_9d1[1] = '\x06';
      acStack_9d1[2] = '\0';
      acStack_9d1[3] = '\0';
      acStack_9d1[4] = '\0';
      FUN_10002d4d8(auStack_9c8,&UNK_10f589082);
      acStack_9b1[1] = '\b';
      acStack_9b1[2] = '\0';
      acStack_9b1[3] = '\0';
      acStack_9b1[4] = '\0';
      FUN_10002d4d8(auStack_9a8,&UNK_10f589092);
      acStack_991[1] = '\t';
      acStack_991[2] = '\0';
      acStack_991[3] = '\0';
      acStack_991[4] = '\0';
      FUN_10002d4d8(&uStack_988,&UNK_10f58909e);
      uStack_970 = 0x1b;
      FUN_10002d4d8(auStack_968,&UNK_10f588f7f);
      acStack_951[1] = '\x1c';
      acStack_951[2] = '\0';
      acStack_951[3] = '\0';
      acStack_951[4] = '\0';
      FUN_10002d4d8(auStack_948,&UNK_10f588f8c);
      acStack_931[1] = '\x10';
      acStack_931[2] = '\0';
      acStack_931[3] = '\0';
      acStack_931[4] = '\0';
      FUN_10002d4d8(&uStack_928,&UNK_10f5890ab);
      uStack_910 = 0x11;
      FUN_10002d4d8(auStack_908,&UNK_10f5890c1);
      acStack_8f1[1] = '\x15';
      acStack_8f1[2] = '\0';
      acStack_8f1[3] = '\0';
      acStack_8f1[4] = '\0';
      FUN_10002d4d8(&uStack_8e8,&UNK_10f5890d8);
      uStack_8d0 = 0x16;
      FUN_10002d4d8(&uStack_8c8,&UNK_10f5890f1);
      FUN_10003fc48(0x11373c180,aiStack_9f0,10);
      lVar17 = 0x140;
      do {
        lVar17 = lVar17 + -0x20;
      } while (lVar17 != 0);
      func_0x000107c60e34(&UNK_1098f6be8,0x11373c180,0x100000000);
      aiStack_9f0[0] = 5;
      FUN_10002d4d8(alStack_9e8,&UNK_10f589073);
      acStack_9d1[1] = '\x06';
      acStack_9d1[2] = '\0';
      acStack_9d1[3] = '\0';
      acStack_9d1[4] = '\0';
      FUN_10002d4d8(auStack_9c8,&UNK_10f589082);
      acStack_9b1[1] = '\b';
      acStack_9b1[2] = '\0';
      acStack_9b1[3] = '\0';
      acStack_9b1[4] = '\0';
      FUN_10002d4d8(auStack_9a8,&UNK_10f58910b);
      acStack_991[1] = '\t';
      acStack_991[2] = '\0';
      acStack_991[3] = '\0';
      acStack_991[4] = '\0';
      FUN_10002d4d8(&uStack_988,&UNK_10f589117);
      uStack_970 = 0x1b;
      FUN_10002d4d8(auStack_968,&UNK_10f588f7f);
      acStack_951[1] = '\x1c';
      acStack_951[2] = '\0';
      acStack_951[3] = '\0';
      acStack_951[4] = '\0';
      FUN_10002d4d8(auStack_948,&UNK_10f588f8c);
      FUN_10003fc48(0x11373c1a8,aiStack_9f0,6);
      lVar17 = 0;
      do {
        if (acStack_931[lVar17] < '\0') {
          func_0x000107c60e14(*(undefined8 *)((long)auStack_948 + lVar17));
        }
        lVar17 = lVar17 + -0x20;
      } while (lVar17 != -0xc0);
      func_0x000107c60e34(&UNK_1098f6be8,0x11373c1a8,0x100000000);
      aiStack_9f0[0] = 8;
      FUN_10002d4d8(alStack_9e8,&UNK_10f589092);
      acStack_9d1[1] = '\x06';
      acStack_9d1[2] = '\0';
      acStack_9d1[3] = '\0';
      acStack_9d1[4] = '\0';
      FUN_10002d4d8(auStack_9c8,&UNK_10f589082);
      acStack_9b1[1] = '\f';
      acStack_9b1[2] = '\0';
      acStack_9b1[3] = '\0';
      acStack_9b1[4] = '\0';
      FUN_10002d4d8(auStack_9a8,&UNK_10f58910b);
      acStack_991[1] = '\r';
      acStack_991[2] = '\0';
      acStack_991[3] = '\0';
      acStack_991[4] = '\0';
      FUN_10002d4d8(&uStack_988,&UNK_10f589117);
      uStack_970 = 0xe;
      FUN_10002d4d8(auStack_968,&UNK_10f589124);
      acStack_951[1] = '\x0f';
      acStack_951[2] = '\0';
      acStack_951[3] = '\0';
      acStack_951[4] = '\0';
      FUN_10002d4d8(auStack_948,&UNK_10f589137);
      acStack_931[1] = '\x1b';
      acStack_931[2] = '\0';
      acStack_931[3] = '\0';
      acStack_931[4] = '\0';
      FUN_10002d4d8(&uStack_928,&UNK_10f588f7f);
      uStack_910 = 0x1c;
      FUN_10002d4d8(auStack_908,&UNK_10f588f8c);
      FUN_10003fc48(0x11373c1d0,aiStack_9f0,8);
      lVar17 = 0;
      do {
        if (acStack_8f1[lVar17] < '\0') {
          func_0x000107c60e14(*(undefined8 *)((long)auStack_908 + lVar17));
        }
        lVar17 = lVar17 + -0x20;
      } while (lVar17 != -0x100);
      func_0x000107c60e34(&UNK_1098f6be8,0x11373c1d0,0x100000000);
      aiStack_9f0[0] = 8;
      FUN_10002d4d8(alStack_9e8,&UNK_10f589092);
      acStack_9d1[1] = '\t';
      acStack_9d1[2] = '\0';
      acStack_9d1[3] = '\0';
      acStack_9d1[4] = '\0';
      FUN_10002d4d8(auStack_9c8,&UNK_10f58909e);
      acStack_9b1[1] = '\x05';
      acStack_9b1[2] = '\0';
      acStack_9b1[3] = '\0';
      acStack_9b1[4] = '\0';
      FUN_10002d4d8(auStack_9a8,&UNK_10f589073);
      acStack_991[1] = '\x06';
      acStack_991[2] = '\0';
      acStack_991[3] = '\0';
      acStack_991[4] = '\0';
      FUN_10002d4d8(&uStack_988,&UNK_10f589082);
      uStack_970 = 0xc;
      FUN_10002d4d8(auStack_968,&UNK_10f58910b);
      acStack_951[1] = '\r';
      acStack_951[2] = '\0';
      acStack_951[3] = '\0';
      acStack_951[4] = '\0';
      FUN_10002d4d8(auStack_948,&UNK_10f589117);
      acStack_931[1] = '\x0e';
      acStack_931[2] = '\0';
      acStack_931[3] = '\0';
      acStack_931[4] = '\0';
      FUN_10002d4d8(&uStack_928,&UNK_10f589124);
      uStack_910 = 0xf;
      FUN_10002d4d8(auStack_908,&UNK_10f589137);
      acStack_8f1[1] = '\a';
      acStack_8f1[2] = '\0';
      acStack_8f1[3] = '\0';
      acStack_8f1[4] = '\0';
      FUN_10002d4d8(&uStack_8e8,&UNK_10f588fb3);
      uStack_8d0 = 10;
      FUN_10002d4d8(&uStack_8c8,&UNK_10f588f5a);
      uStack_8b0 = 0xb;
      FUN_10002d4d8(auStack_8a8,&UNK_10f588f6c);
      uStack_890 = 0x10;
      FUN_10002d4d8(auStack_888,&UNK_10f588fbe);
      uStack_870 = 0x11;
      FUN_10002d4d8(auStack_868,&UNK_10f588fd8);
      uStack_850 = 0x13;
      FUN_10002d4d8(auStack_848,&UNK_10f588ff3);
      uStack_830 = 0x14;
      FUN_10002d4d8(auStack_828,&UNK_10f589015);
      uStack_810 = 0x15;
      FUN_10002d4d8(auStack_808,&UNK_10f5890d8);
      uStack_7f0 = 0x16;
      FUN_10002d4d8(auStack_7e8,&UNK_10f5890f1);
      uStack_7d0 = 0x1b;
      FUN_10002d4d8(auStack_7c8,&UNK_10f588f7f);
      uStack_7b0 = 0x1c;
      FUN_10002d4d8(auStack_7a8,&UNK_10f588f8c);
      uStack_790 = 0x17;
      FUN_10002d4d8(auStack_788,&UNK_10f589038);
      uStack_770 = 0x18;
      FUN_10002d4d8(auStack_768,&UNK_10f589042);
      uStack_750 = 0x19;
      FUN_10002d4d8(auStack_748,&UNK_10f58905a);
      uStack_730 = 0x1a;
      FUN_10002d4d8(auStack_728,&UNK_10f588f29);
      uStack_710 = 0x30;
      FUN_10002d4d8(auStack_708,&UNK_10f58914b);
      uStack_6f0 = 0x31;
      FUN_10002d4d8(auStack_6e8,&UNK_10f58915c);
      uStack_6d0 = 0x32;
      FUN_10002d4d8(auStack_6c8,&UNK_10f58916d);
      uStack_6b0 = 0x33;
      FUN_10002d4d8(auStack_6a8,&UNK_10f58917e);
      uStack_690 = 0x34;
      FUN_10002d4d8(auStack_688,&UNK_10f58918f);
      uStack_670 = 0x35;
      FUN_10002d4d8(auStack_668,&UNK_10f5891a0);
      uStack_650 = 0x36;
      FUN_10002d4d8(auStack_648,&UNK_10f5891b1);
      uStack_630 = 0x37;
      FUN_10002d4d8(auStack_628,&UNK_10f5891c2);
      uStack_610 = 0x38;
      FUN_10002d4d8(auStack_608,&UNK_10f5891d3);
      uStack_5f0 = 0x39;
      FUN_10002d4d8(auStack_5e8,&UNK_10f5891e4);
      FUN_10003fc48(0x11373c1f8,aiStack_9f0,0x21);
      lVar17 = 0x420;
      do {
        lVar17 = lVar17 + -0x20;
      } while (lVar17 != 0);
      func_0x000107c60e34(&UNK_1098f6be8,0x11373c1f8,0x100000000);
      aiStack_9f0[0] = 0;
      FUN_10002d4d8(alStack_9e8,"I");
      acStack_9d1[1] = '\x01';
      acStack_9d1[2] = '\0';
      acStack_9d1[3] = '\0';
      acStack_9d1[4] = '\0';
      FUN_10002d4d8(auStack_9c8,&DAT_10f31a1ff);
      acStack_9b1[1] = '\x02';
      acStack_9b1[2] = '\0';
      acStack_9b1[3] = '\0';
      acStack_9b1[4] = '\0';
      FUN_10002d4d8(auStack_9a8,&UNK_10f5891f6);
      acStack_991[1] = '\x03';
      acStack_991[2] = '\0';
      acStack_991[3] = '\0';
      acStack_991[4] = '\0';
      FUN_10002d4d8(&uStack_988,&DAT_10f31a209);
      uStack_970 = 4;
      FUN_10002d4d8(auStack_968,&UNK_10f5891fa);
      acStack_951[1] = '\x05';
      acStack_951[2] = '\0';
      acStack_951[3] = '\0';
      acStack_951[4] = '\0';
      FUN_10002d4d8(auStack_948,&UNK_10f5891fd);
      acStack_931[1] = '\x06';
      acStack_931[2] = '\0';
      acStack_931[3] = '\0';
      acStack_931[4] = '\0';
      FUN_10002d4d8(&uStack_928,&DAT_10f4086e7);
      uStack_910 = 7;
      FUN_10002d4d8(auStack_908,&DAT_10f387fc3);
      acStack_8f1[1] = '\t';
      acStack_8f1[2] = '\0';
      acStack_8f1[3] = '\0';
      acStack_8f1[4] = '\0';
      FUN_10002d4d8(&uStack_8e8,&DAT_10f31a211);
      uStack_8d0 = 10;
      FUN_10002d4d8(&uStack_8c8,&DAT_10f4648c9);
      uStack_8b0 = 0xb;
      FUN_10002d4d8(auStack_8a8,&UNK_10f589200);
      uStack_890 = 0xc;
      FUN_10002d4d8(auStack_888,&DAT_10f53facd);
      uStack_870 = 0xd;
      FUN_10002d4d8(auStack_868,&UNK_10f589203);
      uStack_850 = 0x10;
      FUN_10002d4d8(auStack_848,&UNK_10f589206);
      uStack_830 = 0x11;
      FUN_10002d4d8(auStack_828,&UNK_10f58920a);
      uStack_810 = 0x12;
      FUN_10002d4d8(auStack_808,"AR");
      uStack_7f0 = 0x13;
      FUN_10002d4d8(auStack_7e8,&UNK_10f58920e);
      uStack_7d0 = 0x14;
      FUN_10002d4d8(auStack_7c8,&DAT_10f4085fa);
      uStack_7b0 = 0x15;
      FUN_10002d4d8(auStack_7a8,&DAT_10f36f0dc);
      uStack_790 = 0x16;
      FUN_10002d4d8(auStack_788,&UNK_10f589212);
      uStack_770 = 0x17;
      FUN_10002d4d8(auStack_768,&UNK_10f589215);
      uStack_750 = 0x18;
      FUN_10002d4d8(auStack_748,&UNK_10f589219);
      uStack_730 = 0x19;
      FUN_10002d4d8(auStack_728,&DAT_10f53fae4);
      uStack_710 = 0x1a;
      FUN_10002d4d8(auStack_708,&DAT_10f3a3b2e);
      uStack_6f0 = 0x1b;
      FUN_10002d4d8(auStack_6e8,&UNK_10f58921c);
      uStack_6d0 = 0x1c;
      FUN_10002d4d8(auStack_6c8,&UNK_10f589220);
      uStack_6b0 = 0x1d;
      FUN_10002d4d8(auStack_6a8,&UNK_10f589224);
      uStack_690 = 0x1e;
      FUN_10002d4d8(auStack_688,&UNK_10f589228);
      uStack_670 = 0x1f;
      FUN_10002d4d8(auStack_668,&UNK_10f58922c);
      uStack_650 = 0x20;
      FUN_10002d4d8(auStack_648,&UNK_10f589230);
      uStack_630 = 0x21;
      FUN_10002d4d8(auStack_628,&UNK_10f589234);
      uStack_610 = 0x22;
      FUN_10002d4d8(auStack_608,&UNK_10f589238);
      uStack_5f0 = 0x23;
      FUN_10002d4d8(auStack_5e8,&UNK_10f58923c);
      uStack_5d0 = 0x24;
      FUN_10002d4d8(auStack_5c8,&UNK_10f589240);
      uStack_5b0 = 0x25;
      FUN_10002d4d8(auStack_5a8,&UNK_10f589244);
      uStack_590 = 0x26;
      FUN_10002d4d8(auStack_588,&UNK_10f589248);
      uStack_570 = 0x27;
      FUN_10002d4d8(auStack_568,&UNK_10f58924c);
      uStack_550 = 0x28;
      FUN_10002d4d8(auStack_548,&UNK_10f589250);
      uStack_530 = 0x29;
      FUN_10002d4d8(auStack_528,&UNK_10f589254);
      uStack_510 = 0x2d;
      FUN_10002d4d8(auStack_508,"Q");
      uStack_4f0 = 0x2e;
      FUN_10002d4d8(auStack_4e8,"TR");
      uStack_4d0 = 0x2f;
      FUN_10002d4d8(auStack_4c8,&DAT_10f53fae1);
      uStack_4b0 = 0x30;
      FUN_10002d4d8(auStack_4a8,"F");
      uStack_490 = 0x31;
      FUN_10002d4d8(auStack_488,&DAT_10f62bbec);
      uStack_470 = 0x36;
      FUN_10002d4d8(auStack_468,&DAT_10f3ab35e);
      uStack_450 = 0x37;
      FUN_10002d4d8(auStack_448,&UNK_10f589258);
      uStack_430 = 0x38;
      FUN_10002d4d8(auStack_428,&UNK_10f48a1b8);
      uStack_410 = 0x39;
      FUN_10002d4d8(auStack_408,&DAT_10f4086f0);
      uStack_3f0 = 0x3a;
      FUN_10002d4d8(auStack_3e8,&DAT_10f3880ff);
      uStack_3d0 = 0x3b;
      FUN_10002d4d8(auStack_3c8,&DAT_10f58925b);
      uStack_3b0 = 0x3c;
      FUN_10002d4d8(auStack_3a8,&UNK_10f58925f);
      uStack_390 = 0x3d;
      FUN_10002d4d8(auStack_388,&DAT_10f408657);
      uStack_370 = 0x3e;
      FUN_10002d4d8(auStack_368,&DAT_10f53fa97);
      uStack_350 = 0x3f;
      FUN_10002d4d8(auStack_348,&UNK_10f589262);
      uStack_330 = 0x41;
      FUN_10002d4d8(auStack_328,&DAT_10f2c1a71);
      uStack_310 = 0x42;
      FUN_10002d4d8(auStack_308,&UNK_10f589265);
      uStack_2f0 = 0x43;
      FUN_10002d4d8(auStack_2e8,&UNK_10f589269);
      uStack_2d0 = 0x44;
      FUN_10002d4d8(auStack_2c8,&UNK_10f58926d);
      uStack_2b0 = 0x45;
      FUN_10002d4d8(auStack_2a8,&DAT_10f49cb2a);
      uStack_290 = 0x46;
      FUN_10002d4d8(auStack_288,&UNK_10f589270);
      uStack_270 = 0x47;
      FUN_10002d4d8(auStack_268,&UNK_10f589274);
      uStack_250 = 0x48;
      FUN_10002d4d8(auStack_248,&UNK_10f589278);
      uStack_230 = 0x49;
      FUN_10002d4d8(auStack_228,&DAT_10f53faf3);
      uStack_210 = 0x4a;
      FUN_10002d4d8(auStack_208,&DAT_10f58927c);
      uStack_1f0 = 0x4b;
      FUN_10002d4d8(auStack_1e8,&DAT_10f58927f);
      uStack_1d0 = 0x4c;
      FUN_10002d4d8(auStack_1c8,"GB");
      uStack_1b0 = 0x4d;
      FUN_10002d4d8(auStack_1a8,&UNK_10f589282);
      uStack_190 = 0x4e;
      FUN_10002d4d8(auStack_188,&UNK_10f589286);
      uStack_170 = 0x4f;
      FUN_10002d4d8(auStack_168,&UNK_10f58928a);
      uStack_150 = 0x50;
      FUN_10002d4d8(auStack_148,&UNK_10f58928e);
      uStack_130 = 0x51;
      FUN_10002d4d8(auStack_128,&DAT_10f31a201);
      uStack_110 = 0x53;
      FUN_10002d4d8(auStack_108,&UNK_10f589292);
      uStack_f0 = 0x54;
      FUN_10002d4d8(auStack_e8,&UNK_10f589296);
      FUN_10003f798(0x11373c220,aiStack_9f0,0x49);
      lVar17 = 0x920;
      do {
        lVar17 = lVar17 + -0x20;
      } while (lVar17 != 0);
      func_0x000107c60e34(&UNK_1098f6be4,0x11373c220,0x100000000);
      aiStack_9f0[0] = 5;
      FUN_10002d4d8(alStack_9e8,&UNK_10f58929a);
      acStack_9d1[1] = '\x06';
      acStack_9d1[2] = '\0';
      acStack_9d1[3] = '\0';
      acStack_9d1[4] = '\0';
      FUN_10002d4d8(auStack_9c8,&UNK_10f58929d);
      acStack_9b1[1] = '\a';
      acStack_9b1[2] = '\0';
      acStack_9b1[3] = '\0';
      acStack_9b1[4] = '\0';
      FUN_10002d4d8(auStack_9a8,&UNK_10f5892a0);
      acStack_991[1] = '\b';
      acStack_991[2] = '\0';
      acStack_991[3] = '\0';
      acStack_991[4] = '\0';
      FUN_10002d4d8(&uStack_988,&UNK_10f5892a3);
      uStack_970 = 9;
      FUN_10002d4d8(auStack_968,&UNK_10f5892a6);
      acStack_951[1] = '\n';
      acStack_951[2] = '\0';
      acStack_951[3] = '\0';
      acStack_951[4] = '\0';
      FUN_10002d4d8(auStack_948,&UNK_10f5892a9);
      acStack_931[1] = '\v';
      acStack_931[2] = '\0';
      acStack_931[3] = '\0';
      acStack_931[4] = '\0';
      FUN_10002d4d8(&uStack_928,&UNK_10f5892ad);
      uStack_910 = 0xc;
      FUN_10002d4d8(auStack_908,&UNK_10f5892b1);
      acStack_8f1[1] = '\r';
      acStack_8f1[2] = '\0';
      acStack_8f1[3] = '\0';
      acStack_8f1[4] = '\0';
      FUN_10002d4d8(&uStack_8e8,&UNK_10f5892b5);
      uStack_8d0 = 0xe;
      FUN_10002d4d8(&uStack_8c8,&UNK_10f5892b9);
      uStack_8b0 = 0xf;
      FUN_10002d4d8(auStack_8a8,&UNK_10f5892be);
      uStack_890 = 0x10;
      FUN_10002d4d8(auStack_888,&UNK_10f5892c3);
      uStack_870 = 0x11;
      FUN_10002d4d8(auStack_868,&UNK_10f589234);
      uStack_850 = 0x13;
      FUN_10002d4d8(auStack_848,&UNK_10f5892c7);
      uStack_830 = 0x14;
      FUN_10002d4d8(auStack_828,&UNK_10f5892cc);
      uStack_810 = 0x15;
      FUN_10002d4d8(auStack_808,&UNK_10f5892d1);
      uStack_7f0 = 0x16;
      FUN_10002d4d8(auStack_7e8,&UNK_10f5892d5);
      uStack_7d0 = 0x1b;
      FUN_10002d4d8(auStack_7c8,&UNK_10f5892d9);
      uStack_7b0 = 0x1c;
      FUN_10002d4d8(auStack_7a8,&DAT_10f408627);
      uStack_790 = 0x17;
      FUN_10002d4d8(auStack_788,&DAT_10f31a1fd);
      uStack_770 = 0x18;
      FUN_10002d4d8(auStack_768,&DAT_10f408663);
      uStack_750 = 0x19;
      FUN_10002d4d8(auStack_748,&DAT_10f408660);
      uStack_730 = 0x1a;
      FUN_10002d4d8(auStack_728,&DAT_10f62bbec);
      FUN_10003fc48(0x11373c248,aiStack_9f0,0x17);
      lVar17 = 0x2e0;
      do {
        lVar17 = lVar17 + -0x20;
      } while (lVar17 != 0);
      func_0x000107c60e34(&UNK_1098f6be8,0x11373c248,0x100000000);
      aiStack_9f0[0] = 0x1d;
      FUN_10002d4d8(alStack_9e8,&DAT_10f2c1b3b);
      acStack_9d1[1] = '\x1e';
      acStack_9d1[2] = '\0';
      acStack_9d1[3] = '\0';
      acStack_9d1[4] = '\0';
      FUN_10002d4d8(auStack_9c8,&UNK_10f5892dc);
      FUN_10003e988(0x11373c270,aiStack_9f0,2);
      lVar17 = 0;
      do {
        if (acStack_9b1[lVar17] < '\0') {
          func_0x000107c60e14(*(undefined8 *)((long)auStack_9c8 + lVar17));
        }
        lVar17 = lVar17 + -0x20;
      } while (lVar17 != -0x40);
      func_0x000107c60e34(&UNK_1098f6bd4,0x11373c270,0x100000000);
      aiStack_9f0[0] = 0;
      FUN_10002d4d8(alStack_9e8,&UNK_10f5892df);
      acStack_9d1[1] = '\x01';
      acStack_9d1[2] = '\0';
      acStack_9d1[3] = '\0';
      acStack_9d1[4] = '\0';
      FUN_10002d4d8(auStack_9c8,&UNK_10f491237);
      acStack_9b1[1] = '\x02';
      acStack_9b1[2] = '\0';
      acStack_9b1[3] = '\0';
      acStack_9b1[4] = '\0';
      FUN_10002d4d8(auStack_9a8,&UNK_10f5892e2);
      acStack_991[1] = '\x03';
      acStack_991[2] = '\0';
      acStack_991[3] = '\0';
      acStack_991[4] = '\0';
      FUN_10002d4d8(&uStack_988,&UNK_10f5892e6);
      uStack_970 = 4;
      FUN_10002d4d8(auStack_968,&UNK_10f5892ea);
      FUN_10003f2e8(0x11373c298,aiStack_9f0,5);
      lVar17 = 0;
      do {
        if (acStack_951[lVar17] < '\0') {
          func_0x000107c60e14(*(undefined8 *)((long)auStack_968 + lVar17));
        }
        lVar17 = lVar17 + -0x20;
      } while (lVar17 != -0xa0);
      func_0x000107c60e34(&UNK_1098f6be0,0x11373c298,0x100000000);
      aiStack_9f0[0] = 0x23;
      FUN_10002d4d8(alStack_9e8,&UNK_10f5892ee);
      FUN_10003ee38(0x11373c2c0,aiStack_9f0,1);
      if ((long)_cStack_9d8 < 0) {
        func_0x000107c60e14(alStack_9e8[0]);
      }
      func_0x000107c60e34(&UNK_1098f6bdc,0x11373c2c0,0x100000000);
      aiStack_9f0[0] = 0;
      FUN_10002d4d8(alStack_9e8,&DAT_10f31a1fb);
      acStack_9d1[1] = '\x02';
      acStack_9d1[2] = '\0';
      acStack_9d1[3] = '\0';
      acStack_9d1[4] = '\0';
      FUN_10002d4d8(auStack_9c8,"I");
      acStack_9b1[1] = '\x01';
      acStack_9b1[2] = '\0';
      acStack_9b1[3] = '\0';
      acStack_9b1[4] = '\0';
      FUN_10002d4d8(auStack_9a8,&DAT_10f31a1fd);
      FUN_10003e4d8(0x11373c2e8,aiStack_9f0,3);
      lVar17 = 0;
      do {
        if (acStack_991[lVar17] < '\0') {
          func_0x000107c60e14(*(undefined8 *)((long)auStack_9a8 + lVar17));
        }
        lVar17 = lVar17 + -0x20;
      } while (lVar17 != -0x60);
      plVar8 = (long *)&UNK_1098f6bd0;
      piVar6 = (int *)0x11373c2e8;
      lVar17 = 0x100000000;
      func_0x000107c60e34();
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
        return plVar8;
      }
      func_0x000107c60e78();
      puVar15 = auStack_9a8;
      lVar16 = -0x60;
      do {
        if (*(char *)((long)puVar15 + 0x17) < '\0') {
          func_0x000107c60e14(*puVar15);
        }
        puVar15 = puVar15 + -4;
        lVar16 = lVar16 + 0x20;
      } while (lVar16 != 0);
      func_0x000107c60bd8();
      plVar8[1] = 0;
      *plVar8 = 0;
      plVar8[3] = 0;
      plVar8[2] = 0;
      *(undefined4 *)(plVar8 + 4) = 0x3f800000;
      if (lVar17 != 0) {
        lVar16 = 0;
        plVar9 = plVar8 + 2;
        piVar1 = piVar6 + lVar17 * 8;
        do {
          iVar3 = *piVar6;
          uVar19 = (ulong)iVar3;
          uVar14 = plVar8[1];
          if (uVar14 != 0) {
            uVar18 = uVar14 - 1;
            if ((uVar14 & uVar18) == 0) {
              uVar20 = uVar18 & uVar19;
            }
            else {
              uVar20 = uVar19;
              if (uVar14 <= uVar19) {
                uVar20 = 0;
                if (uVar14 != 0) {
                  uVar20 = uVar19 / uVar14;
                }
                uVar20 = uVar19 - uVar20 * uVar14;
              }
            }
            plVar10 = *(long **)(*plVar8 + uVar20 * 8);
            if (plVar10 != (long *)0x0) {
              do {
                while( true ) {
                  plVar10 = (long *)*plVar10;
                  if (plVar10 == (long *)0x0) goto LAB_10003e5b0;
                  uVar7 = plVar10[1];
                  if (uVar7 != uVar19) break;
                  if (*(int *)(plVar10 + 2) == iVar3) goto LAB_10003e700;
                }
                if ((uVar14 & uVar18) == 0) {
                  uVar7 = uVar7 & uVar18;
                }
                else if (uVar14 <= uVar7) {
                  uVar11 = 0;
                  if (uVar14 != 0) {
                    uVar11 = uVar7 / uVar14;
                  }
                  uVar7 = uVar7 - uVar11 * uVar14;
                }
              } while (uVar7 == uVar20);
            }
          }
LAB_10003e5b0:
          plVar10 = (long *)0x30;
          func_0x000107c60e20();
          *plVar10 = 0;
          plVar10[1] = uVar19;
          *(int *)(plVar10 + 2) = iVar3;
          if (*(char *)((long)piVar6 + 0x1f) < '\0') {
            FUN_100033dac(plVar10 + 3,*(undefined8 *)(piVar6 + 2),*(undefined8 *)(piVar6 + 4));
            lVar16 = plVar8[3];
          }
          else {
            lVar21 = *(long *)(piVar6 + 4);
            lVar17 = *(long *)(piVar6 + 2);
            plVar10[5] = *(long *)(piVar6 + 6);
            plVar10[4] = lVar21;
            plVar10[3] = lVar17;
          }
          if ((uVar14 == 0) || (*(float *)(plVar8 + 4) * (float)uVar14 < (float)(lVar16 + 1))) {
            uVar20 = 1;
            if (2 < uVar14) {
              uVar20 = (ulong)((uVar14 & uVar14 - 1) != 0);
            }
            uVar20 = uVar20 | uVar14 << 1;
            uVar14 = (ulong)((float)(lVar16 + 1) / *(float *)(plVar8 + 4));
            if (uVar20 <= uVar14) {
              uVar20 = uVar14;
            }
            FUN_10003e77c(plVar8,uVar20);
            uVar14 = plVar8[1];
            if ((uVar14 & uVar14 - 1) == 0) {
              uVar20 = uVar14 - 1 & uVar19;
            }
            else {
              uVar20 = uVar19;
              if (uVar14 <= uVar19) {
                uVar20 = 0;
                if (uVar14 != 0) {
                  uVar20 = uVar19 / uVar14;
                }
                uVar20 = uVar19 - uVar20 * uVar14;
              }
            }
          }
          lVar17 = *plVar8;
          plVar12 = *(long **)(lVar17 + uVar20 * 8);
          if (plVar12 == (long *)0x0) {
            *plVar10 = *plVar9;
            *plVar9 = (long)plVar10;
            *(long **)(lVar17 + uVar20 * 8) = plVar9;
            if (*plVar10 != 0) {
              uVar19 = *(ulong *)(*plVar10 + 8);
              if ((uVar14 & uVar14 - 1) == 0) {
                uVar19 = uVar19 & uVar14 - 1;
              }
              else if (uVar14 <= uVar19) {
                uVar18 = 0;
                if (uVar14 != 0) {
                  uVar18 = uVar19 / uVar14;
                }
                uVar19 = uVar19 - uVar18 * uVar14;
              }
              *(long **)(*plVar8 + uVar19 * 8) = plVar10;
            }
          }
          else {
            *plVar10 = *plVar12;
            *plVar12 = (long)plVar10;
          }
          lVar16 = plVar8[3] + 1;
          plVar8[3] = lVar16;
LAB_10003e700:
          piVar6 = piVar6 + 8;
        } while (piVar6 != piVar1);
      }
      return plVar8;
    }
  } while( true );
}



/* Entry: 10003e4d8; end: 10003e77b;  */

long * FUN_10003e4d8(long *param_1,int *param_2,long param_3)

{
  long *plVar1;
  int *piVar2;
  int iVar3;
  ulong uVar4;
  ulong uVar5;
  long *plVar6;
  ulong uVar7;
  long *plVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  ulong unaff_x28;
  long lVar12;
  long lVar13;
  
  param_1[1] = 0;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 4) = 0x3f800000;
  if (param_3 != 0) {
    lVar9 = 0;
    plVar1 = param_1 + 2;
    piVar2 = param_2 + param_3 * 8;
    do {
      iVar3 = *param_2;
      uVar11 = (ulong)iVar3;
      uVar10 = param_1[1];
      if (uVar10 != 0) {
        uVar5 = uVar10 - 1;
        if ((uVar10 & uVar5) == 0) {
          unaff_x28 = uVar5 & uVar11;
        }
        else {
          unaff_x28 = uVar11;
          if (uVar10 <= uVar11) {
            uVar7 = 0;
            if (uVar10 != 0) {
              uVar7 = uVar11 / uVar10;
            }
            unaff_x28 = uVar11 - uVar7 * uVar10;
          }
        }
        plVar6 = *(long **)(*param_1 + unaff_x28 * 8);
        if (plVar6 != (long *)0x0) {
          do {
            while( true ) {
              plVar6 = (long *)*plVar6;
              if (plVar6 == (long *)0x0) goto LAB_10003e5b0;
              uVar7 = plVar6[1];
              if (uVar7 != uVar11) break;
              if (*(int *)(plVar6 + 2) == iVar3) goto LAB_10003e700;
            }
            if ((uVar10 & uVar5) == 0) {
              uVar7 = uVar7 & uVar5;
            }
            else if (uVar10 <= uVar7) {
              uVar4 = 0;
              if (uVar10 != 0) {
                uVar4 = uVar7 / uVar10;
              }
              uVar7 = uVar7 - uVar4 * uVar10;
            }
          } while (uVar7 == unaff_x28);
        }
      }
LAB_10003e5b0:
      plVar6 = (long *)0x30;
      func_0x000107c60e20();
      *plVar6 = 0;
      plVar6[1] = uVar11;
      *(int *)(plVar6 + 2) = iVar3;
      if (*(char *)((long)param_2 + 0x1f) < '\0') {
        FUN_100033dac(plVar6 + 3,*(undefined8 *)(param_2 + 2),*(undefined8 *)(param_2 + 4));
        lVar9 = param_1[3];
      }
      else {
        lVar13 = *(long *)(param_2 + 4);
        lVar12 = *(long *)(param_2 + 2);
        plVar6[5] = *(long *)(param_2 + 6);
        plVar6[4] = lVar13;
        plVar6[3] = lVar12;
      }
      if ((uVar10 == 0) || (*(float *)(param_1 + 4) * (float)uVar10 < (float)(lVar9 + 1))) {
        uVar5 = 1;
        if (2 < uVar10) {
          uVar5 = (ulong)((uVar10 & uVar10 - 1) != 0);
        }
        uVar5 = uVar5 | uVar10 << 1;
        uVar10 = (ulong)((float)(lVar9 + 1) / *(float *)(param_1 + 4));
        if (uVar5 <= uVar10) {
          uVar5 = uVar10;
        }
        FUN_10003e77c(param_1,uVar5);
        uVar10 = param_1[1];
        if ((uVar10 & uVar10 - 1) == 0) {
          unaff_x28 = uVar10 - 1 & uVar11;
        }
        else {
          unaff_x28 = uVar11;
          if (uVar10 <= uVar11) {
            uVar5 = 0;
            if (uVar10 != 0) {
              uVar5 = uVar11 / uVar10;
            }
            unaff_x28 = uVar11 - uVar5 * uVar10;
          }
        }
      }
      lVar9 = *param_1;
      plVar8 = *(long **)(lVar9 + unaff_x28 * 8);
      if (plVar8 == (long *)0x0) {
        *plVar6 = *plVar1;
        *plVar1 = (long)plVar6;
        *(long **)(lVar9 + unaff_x28 * 8) = plVar1;
        if (*plVar6 != 0) {
          uVar11 = *(ulong *)(*plVar6 + 8);
          if ((uVar10 & uVar10 - 1) == 0) {
            uVar11 = uVar11 & uVar10 - 1;
          }
          else if (uVar10 <= uVar11) {
            uVar5 = 0;
            if (uVar10 != 0) {
              uVar5 = uVar11 / uVar10;
            }
            uVar11 = uVar11 - uVar5 * uVar10;
          }
          *(long **)(*param_1 + uVar11 * 8) = plVar6;
        }
      }
      else {
        *plVar6 = *plVar8;
        *plVar8 = (long)plVar6;
      }
      lVar9 = param_1[3] + 1;
      param_1[3] = lVar9;
LAB_10003e700:
      param_2 = param_2 + 8;
    } while (param_2 != piVar2);
  }
  return param_1;
}



/* Entry: 10003e77c; end: 10003e84b;  */

long * FUN_10003e77c(long *param_1,long *param_2,long param_3)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  long *plVar4;
  ulong uVar5;
  ulong uVar6;
  long *plVar7;
  ulong uVar8;
  long *plVar9;
  long *plVar10;
  long *plVar11;
  long *plVar12;
  ulong uVar13;
  ulong unaff_x28;
  long lVar14;
  long lVar15;
  
  plVar4 = param_1;
  if ((long)param_2 - 1U == 0) {
    param_2 = (long *)0x2;
  }
  else if (((ulong)param_2 & (long)param_2 - 1U) != 0) {
    func_0x000107c60c44();
    plVar4 = param_2;
  }
  plVar12 = (long *)param_1[1];
  if (plVar12 < param_2) {
LAB_10003e7c4:
    if (param_2 == (long *)0x0) {
      plVar4 = (long *)*param_1;
      *param_1 = 0;
      if (plVar4 != (long *)0x0) {
        func_0x000107c60e14();
      }
      param_1[1] = 0;
    }
    else {
      if ((ulong)param_2 >> 0x3d != 0) {
        func_0x000104c4f740();
        param_1[1] = 0;
        *param_1 = 0;
        param_1[3] = 0;
        param_1[2] = 0;
        *(int *)(param_1 + 4) = 0x3f800000;
        if (param_3 != 0) {
          lVar3 = 0;
          plVar4 = param_1 + 2;
          plVar12 = param_2 + param_3 * 4;
          do {
            iVar1 = (int)*param_2;
            uVar13 = (ulong)iVar1;
            uVar5 = param_1[1];
            if (uVar5 != 0) {
              uVar6 = uVar5 - 1;
              if ((uVar5 & uVar6) == 0) {
                unaff_x28 = uVar6 & uVar13;
              }
              else {
                unaff_x28 = uVar13;
                if (uVar5 <= uVar13) {
                  uVar8 = 0;
                  if (uVar5 != 0) {
                    uVar8 = uVar13 / uVar5;
                  }
                  unaff_x28 = uVar13 - uVar8 * uVar5;
                }
              }
              plVar7 = *(long **)(*param_1 + unaff_x28 * 8);
              if (plVar7 != (long *)0x0) {
                do {
                  while( true ) {
                    plVar7 = (long *)*plVar7;
                    if (plVar7 == (long *)0x0) goto LAB_10003ea60;
                    uVar8 = plVar7[1];
                    if (uVar8 != uVar13) break;
                    if (*(int *)(plVar7 + 2) == iVar1) goto LAB_10003ebb0;
                  }
                  if ((uVar5 & uVar6) == 0) {
                    uVar8 = uVar8 & uVar6;
                  }
                  else if (uVar5 <= uVar8) {
                    uVar2 = 0;
                    if (uVar5 != 0) {
                      uVar2 = uVar8 / uVar5;
                    }
                    uVar8 = uVar8 - uVar2 * uVar5;
                  }
                } while (uVar8 == unaff_x28);
              }
            }
LAB_10003ea60:
            plVar7 = (long *)0x30;
            func_0x000107c60e20();
            *plVar7 = 0;
            plVar7[1] = uVar13;
            *(int *)(plVar7 + 2) = iVar1;
            if (*(char *)((long)param_2 + 0x1f) < '\0') {
              FUN_100033dac(plVar7 + 3,param_2[1],param_2[2]);
              lVar3 = param_1[3];
            }
            else {
              lVar15 = param_2[2];
              lVar14 = param_2[1];
              plVar7[5] = param_2[3];
              plVar7[4] = lVar15;
              plVar7[3] = lVar14;
            }
            if ((uVar5 == 0) || (*(float *)(param_1 + 4) * (float)uVar5 < (float)(lVar3 + 1))) {
              uVar6 = 1;
              if (2 < uVar5) {
                uVar6 = (ulong)((uVar5 & uVar5 - 1) != 0);
              }
              uVar6 = uVar6 | uVar5 << 1;
              uVar5 = (ulong)((float)(lVar3 + 1) / *(float *)(param_1 + 4));
              if (uVar6 <= uVar5) {
                uVar6 = uVar5;
              }
              FUN_10003ec2c(param_1,uVar6);
              uVar5 = param_1[1];
              if ((uVar5 & uVar5 - 1) == 0) {
                unaff_x28 = uVar5 - 1 & uVar13;
              }
              else {
                unaff_x28 = uVar13;
                if (uVar5 <= uVar13) {
                  uVar6 = 0;
                  if (uVar5 != 0) {
                    uVar6 = uVar13 / uVar5;
                  }
                  unaff_x28 = uVar13 - uVar6 * uVar5;
                }
              }
            }
            lVar3 = *param_1;
            plVar9 = *(long **)(lVar3 + unaff_x28 * 8);
            if (plVar9 == (long *)0x0) {
              *plVar7 = *plVar4;
              *plVar4 = (long)plVar7;
              *(long **)(lVar3 + unaff_x28 * 8) = plVar4;
              if (*plVar7 != 0) {
                uVar13 = *(ulong *)(*plVar7 + 8);
                if ((uVar5 & uVar5 - 1) == 0) {
                  uVar13 = uVar13 & uVar5 - 1;
                }
                else if (uVar5 <= uVar13) {
                  uVar6 = 0;
                  if (uVar5 != 0) {
                    uVar6 = uVar13 / uVar5;
                  }
                  uVar13 = uVar13 - uVar6 * uVar5;
                }
                *(long **)(*param_1 + uVar13 * 8) = plVar7;
              }
            }
            else {
              *plVar7 = *plVar9;
              *plVar9 = (long)plVar7;
            }
            lVar3 = param_1[3] + 1;
            param_1[3] = lVar3;
LAB_10003ebb0:
            param_2 = param_2 + 4;
          } while (param_2 != plVar12);
        }
        return param_1;
      }
      lVar3 = (long)param_2 << 3;
      func_0x000107c60e20();
      plVar4 = (long *)*param_1;
      *param_1 = lVar3;
      if (plVar4 != (long *)0x0) {
        func_0x000107c60e14();
      }
      plVar12 = (long *)0x0;
      param_1[1] = (long)param_2;
      do {
        *(undefined8 *)(*param_1 + (long)plVar12 * 8) = 0;
        plVar12 = (long *)((long)plVar12 + 1);
      } while (param_2 != plVar12);
      plVar12 = (long *)param_1[2];
      if (plVar12 != (long *)0x0) {
        plVar7 = (long *)plVar12[1];
        uVar5 = (long)param_2 - 1;
        if (((ulong)param_2 & uVar5) == 0) {
          plVar7 = (long *)((ulong)plVar7 & uVar5);
        }
        else if (param_2 <= plVar7) {
          uVar13 = 0;
          if (param_2 != (long *)0x0) {
            uVar13 = (ulong)plVar7 / (ulong)param_2;
          }
          plVar7 = (long *)((long)plVar7 - uVar13 * (long)param_2);
        }
        *(long **)(*param_1 + (long)plVar7 * 8) = param_1 + 2;
        plVar9 = (long *)*plVar12;
        while (plVar9 != (long *)0x0) {
          plVar11 = (long *)plVar9[1];
          if (((ulong)param_2 & uVar5) == 0) {
            plVar11 = (long *)((ulong)plVar11 & uVar5);
          }
          else if (param_2 <= plVar11) {
            uVar13 = 0;
            if (param_2 != (long *)0x0) {
              uVar13 = (ulong)plVar11 / (ulong)param_2;
            }
            plVar11 = (long *)((long)plVar11 - uVar13 * (long)param_2);
          }
          plVar10 = plVar9;
          if (plVar11 != plVar7) {
            lVar3 = *param_1;
            if (*(long *)(lVar3 + (long)plVar11 * 8) == 0) {
              *(long **)(lVar3 + (long)plVar11 * 8) = plVar12;
              plVar7 = plVar11;
            }
            else {
              *plVar12 = *plVar9;
              *plVar9 = **(undefined8 **)(lVar3 + (long)plVar11 * 8);
              **(long **)(lVar3 + (long)plVar11 * 8) = (long)plVar9;
              plVar10 = plVar12;
            }
          }
          plVar12 = plVar10;
          plVar9 = (long *)*plVar10;
        }
      }
    }
    return plVar4;
  }
  if (param_2 < plVar12) {
    plVar4 = (long *)(long)((float)(ulong)param_1[3] / *(float *)(param_1 + 4));
    if ((plVar12 < (long *)0x3) || (((ulong)plVar12 & (long)plVar12 - 1U) != 0)) {
      func_0x000107c60c44();
    }
    else if ((long *)0x1 < plVar4) {
      plVar4 = (long *)(1L << (-LZCOUNT((long)plVar4 + -1) & 0x3fU));
    }
    if (param_2 <= plVar4) {
      param_2 = plVar4;
    }
    if (param_2 < plVar12) goto LAB_10003e7c4;
  }
  return plVar4;
}



/* Entry: 10003e84c; end: 10003e987;  */

long * FUN_10003e84c(long *param_1,int *param_2,long param_3)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  long *plVar4;
  int *piVar5;
  ulong uVar6;
  ulong uVar7;
  long *plVar8;
  ulong uVar9;
  long *plVar10;
  long *plVar11;
  int *piVar12;
  ulong uVar13;
  ulong unaff_x28;
  long lVar14;
  long lVar15;
  
  if (param_2 == (int *)0x0) {
    plVar4 = (long *)*param_1;
    *param_1 = 0;
    if (plVar4 != (long *)0x0) {
      func_0x000107c60e14();
    }
    param_1[1] = 0;
  }
  else {
    if ((ulong)param_2 >> 0x3d != 0) {
      func_0x000104c4f740();
      param_1[1] = 0;
      *param_1 = 0;
      param_1[3] = 0;
      param_1[2] = 0;
      *(undefined4 *)(param_1 + 4) = 0x3f800000;
      if (param_3 != 0) {
        lVar3 = 0;
        plVar4 = param_1 + 2;
        piVar5 = param_2 + param_3 * 8;
        do {
          iVar1 = *param_2;
          uVar13 = (ulong)iVar1;
          uVar6 = param_1[1];
          if (uVar6 != 0) {
            uVar7 = uVar6 - 1;
            if ((uVar6 & uVar7) == 0) {
              unaff_x28 = uVar7 & uVar13;
            }
            else {
              unaff_x28 = uVar13;
              if (uVar6 <= uVar13) {
                uVar9 = 0;
                if (uVar6 != 0) {
                  uVar9 = uVar13 / uVar6;
                }
                unaff_x28 = uVar13 - uVar9 * uVar6;
              }
            }
            plVar8 = *(long **)(*param_1 + unaff_x28 * 8);
            if (plVar8 != (long *)0x0) {
              do {
                while( true ) {
                  plVar8 = (long *)*plVar8;
                  if (plVar8 == (long *)0x0) goto LAB_10003ea60;
                  uVar9 = plVar8[1];
                  if (uVar9 != uVar13) break;
                  if (*(int *)(plVar8 + 2) == iVar1) goto LAB_10003ebb0;
                }
                if ((uVar6 & uVar7) == 0) {
                  uVar9 = uVar9 & uVar7;
                }
                else if (uVar6 <= uVar9) {
                  uVar2 = 0;
                  if (uVar6 != 0) {
                    uVar2 = uVar9 / uVar6;
                  }
                  uVar9 = uVar9 - uVar2 * uVar6;
                }
              } while (uVar9 == unaff_x28);
            }
          }
LAB_10003ea60:
          plVar8 = (long *)0x30;
          func_0x000107c60e20();
          *plVar8 = 0;
          plVar8[1] = uVar13;
          *(int *)(plVar8 + 2) = iVar1;
          if (*(char *)((long)param_2 + 0x1f) < '\0') {
            FUN_100033dac(plVar8 + 3,*(undefined8 *)(param_2 + 2),*(undefined8 *)(param_2 + 4));
            lVar3 = param_1[3];
          }
          else {
            lVar15 = *(long *)(param_2 + 4);
            lVar14 = *(long *)(param_2 + 2);
            plVar8[5] = *(long *)(param_2 + 6);
            plVar8[4] = lVar15;
            plVar8[3] = lVar14;
          }
          if ((uVar6 == 0) || (*(float *)(param_1 + 4) * (float)uVar6 < (float)(lVar3 + 1))) {
            uVar7 = 1;
            if (2 < uVar6) {
              uVar7 = (ulong)((uVar6 & uVar6 - 1) != 0);
            }
            uVar7 = uVar7 | uVar6 << 1;
            uVar6 = (ulong)((float)(lVar3 + 1) / *(float *)(param_1 + 4));
            if (uVar7 <= uVar6) {
              uVar7 = uVar6;
            }
            FUN_10003ec2c(param_1,uVar7);
            uVar6 = param_1[1];
            if ((uVar6 & uVar6 - 1) == 0) {
              unaff_x28 = uVar6 - 1 & uVar13;
            }
            else {
              unaff_x28 = uVar13;
              if (uVar6 <= uVar13) {
                uVar7 = 0;
                if (uVar6 != 0) {
                  uVar7 = uVar13 / uVar6;
                }
                unaff_x28 = uVar13 - uVar7 * uVar6;
              }
            }
          }
          lVar3 = *param_1;
          plVar10 = *(long **)(lVar3 + unaff_x28 * 8);
          if (plVar10 == (long *)0x0) {
            *plVar8 = *plVar4;
            *plVar4 = (long)plVar8;
            *(long **)(lVar3 + unaff_x28 * 8) = plVar4;
            if (*plVar8 != 0) {
              uVar13 = *(ulong *)(*plVar8 + 8);
              if ((uVar6 & uVar6 - 1) == 0) {
                uVar13 = uVar13 & uVar6 - 1;
              }
              else if (uVar6 <= uVar13) {
                uVar7 = 0;
                if (uVar6 != 0) {
                  uVar7 = uVar13 / uVar6;
                }
                uVar13 = uVar13 - uVar7 * uVar6;
              }
              *(long **)(*param_1 + uVar13 * 8) = plVar8;
            }
          }
          else {
            *plVar8 = *plVar10;
            *plVar10 = (long)plVar8;
          }
          lVar3 = param_1[3] + 1;
          param_1[3] = lVar3;
LAB_10003ebb0:
          param_2 = param_2 + 8;
        } while (param_2 != piVar5);
      }
      return param_1;
    }
    lVar3 = (long)param_2 << 3;
    func_0x000107c60e20();
    plVar4 = (long *)*param_1;
    *param_1 = lVar3;
    if (plVar4 != (long *)0x0) {
      func_0x000107c60e14();
    }
    piVar5 = (int *)0x0;
    param_1[1] = (long)param_2;
    do {
      *(undefined8 *)(*param_1 + (long)piVar5 * 8) = 0;
      piVar5 = (int *)((long)piVar5 + 1);
    } while (param_2 != piVar5);
    plVar8 = (long *)param_1[2];
    if (plVar8 != (long *)0x0) {
      piVar5 = (int *)plVar8[1];
      uVar6 = (long)param_2 - 1;
      if (((ulong)param_2 & uVar6) == 0) {
        piVar5 = (int *)((ulong)piVar5 & uVar6);
      }
      else if (param_2 <= piVar5) {
        uVar13 = 0;
        if (param_2 != (int *)0x0) {
          uVar13 = (ulong)piVar5 / (ulong)param_2;
        }
        piVar5 = (int *)((long)piVar5 - uVar13 * (long)param_2);
      }
      *(long **)(*param_1 + (long)piVar5 * 8) = param_1 + 2;
      plVar10 = (long *)*plVar8;
      while (plVar10 != (long *)0x0) {
        piVar12 = (int *)plVar10[1];
        if (((ulong)param_2 & uVar6) == 0) {
          piVar12 = (int *)((ulong)piVar12 & uVar6);
        }
        else if (param_2 <= piVar12) {
          uVar13 = 0;
          if (param_2 != (int *)0x0) {
            uVar13 = (ulong)piVar12 / (ulong)param_2;
          }
          piVar12 = (int *)((long)piVar12 - uVar13 * (long)param_2);
        }
        plVar11 = plVar10;
        if (piVar12 != piVar5) {
          lVar3 = *param_1;
          if (*(long *)(lVar3 + (long)piVar12 * 8) == 0) {
            *(long **)(lVar3 + (long)piVar12 * 8) = plVar8;
            piVar5 = piVar12;
          }
          else {
            *plVar8 = *plVar10;
            *plVar10 = **(undefined8 **)(lVar3 + (long)piVar12 * 8);
            **(long **)(lVar3 + (long)piVar12 * 8) = (long)plVar10;
            plVar11 = plVar8;
          }
        }
        plVar8 = plVar11;
        plVar10 = (long *)*plVar11;
      }
    }
  }
  return plVar4;
}



/* Entry: 10003e988; end: 10003ec2b;  */

long * FUN_10003e988(long *param_1,int *param_2,long param_3)

{
  long *plVar1;
  int *piVar2;
  int iVar3;
  ulong uVar4;
  ulong uVar5;
  long *plVar6;
  ulong uVar7;
  long *plVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  ulong unaff_x28;
  long lVar12;
  long lVar13;
  
  param_1[1] = 0;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 4) = 0x3f800000;
  if (param_3 != 0) {
    lVar9 = 0;
    plVar1 = param_1 + 2;
    piVar2 = param_2 + param_3 * 8;
    do {
      iVar3 = *param_2;
      uVar11 = (ulong)iVar3;
      uVar10 = param_1[1];
      if (uVar10 != 0) {
        uVar5 = uVar10 - 1;
        if ((uVar10 & uVar5) == 0) {
          unaff_x28 = uVar5 & uVar11;
        }
        else {
          unaff_x28 = uVar11;
          if (uVar10 <= uVar11) {
            uVar7 = 0;
            if (uVar10 != 0) {
              uVar7 = uVar11 / uVar10;
            }
            unaff_x28 = uVar11 - uVar7 * uVar10;
          }
        }
        plVar6 = *(long **)(*param_1 + unaff_x28 * 8);
        if (plVar6 != (long *)0x0) {
          do {
            while( true ) {
              plVar6 = (long *)*plVar6;
              if (plVar6 == (long *)0x0) goto LAB_10003ea60;
              uVar7 = plVar6[1];
              if (uVar7 != uVar11) break;
              if (*(int *)(plVar6 + 2) == iVar3) goto LAB_10003ebb0;
            }
            if ((uVar10 & uVar5) == 0) {
              uVar7 = uVar7 & uVar5;
            }
            else if (uVar10 <= uVar7) {
              uVar4 = 0;
              if (uVar10 != 0) {
                uVar4 = uVar7 / uVar10;
              }
              uVar7 = uVar7 - uVar4 * uVar10;
            }
          } while (uVar7 == unaff_x28);
        }
      }
LAB_10003ea60:
      plVar6 = (long *)0x30;
      func_0x000107c60e20();
      *plVar6 = 0;
      plVar6[1] = uVar11;
      *(int *)(plVar6 + 2) = iVar3;
      if (*(char *)((long)param_2 + 0x1f) < '\0') {
        FUN_100033dac(plVar6 + 3,*(undefined8 *)(param_2 + 2),*(undefined8 *)(param_2 + 4));
        lVar9 = param_1[3];
      }
      else {
        lVar13 = *(long *)(param_2 + 4);
        lVar12 = *(long *)(param_2 + 2);
        plVar6[5] = *(long *)(param_2 + 6);
        plVar6[4] = lVar13;
        plVar6[3] = lVar12;
      }
      if ((uVar10 == 0) || (*(float *)(param_1 + 4) * (float)uVar10 < (float)(lVar9 + 1))) {
        uVar5 = 1;
        if (2 < uVar10) {
          uVar5 = (ulong)((uVar10 & uVar10 - 1) != 0);
        }
        uVar5 = uVar5 | uVar10 << 1;
        uVar10 = (ulong)((float)(lVar9 + 1) / *(float *)(param_1 + 4));
        if (uVar5 <= uVar10) {
          uVar5 = uVar10;
        }
        FUN_10003ec2c(param_1,uVar5);
        uVar10 = param_1[1];
        if ((uVar10 & uVar10 - 1) == 0) {
          unaff_x28 = uVar10 - 1 & uVar11;
        }
        else {
          unaff_x28 = uVar11;
          if (uVar10 <= uVar11) {
            uVar5 = 0;
            if (uVar10 != 0) {
              uVar5 = uVar11 / uVar10;
            }
            unaff_x28 = uVar11 - uVar5 * uVar10;
          }
        }
      }
      lVar9 = *param_1;
      plVar8 = *(long **)(lVar9 + unaff_x28 * 8);
      if (plVar8 == (long *)0x0) {
        *plVar6 = *plVar1;
        *plVar1 = (long)plVar6;
        *(long **)(lVar9 + unaff_x28 * 8) = plVar1;
        if (*plVar6 != 0) {
          uVar11 = *(ulong *)(*plVar6 + 8);
          if ((uVar10 & uVar10 - 1) == 0) {
            uVar11 = uVar11 & uVar10 - 1;
          }
          else if (uVar10 <= uVar11) {
            uVar5 = 0;
            if (uVar10 != 0) {
              uVar5 = uVar11 / uVar10;
            }
            uVar11 = uVar11 - uVar5 * uVar10;
          }
          *(long **)(*param_1 + uVar11 * 8) = plVar6;
        }
      }
      else {
        *plVar6 = *plVar8;
        *plVar8 = (long)plVar6;
      }
      lVar9 = param_1[3] + 1;
      param_1[3] = lVar9;
LAB_10003ebb0:
      param_2 = param_2 + 8;
    } while (param_2 != piVar2);
  }
  return param_1;
}



/* Entry: 10003ec2c; end: 10003ecfb;  */

long * FUN_10003ec2c(long *param_1,long *param_2,long param_3)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  long *plVar4;
  ulong uVar5;
  ulong uVar6;
  long *plVar7;
  ulong uVar8;
  long *plVar9;
  long *plVar10;
  long *plVar11;
  long *plVar12;
  ulong uVar13;
  ulong unaff_x28;
  long lVar14;
  long lVar15;
  
  plVar4 = param_1;
  if ((long)param_2 - 1U == 0) {
    param_2 = (long *)0x2;
  }
  else if (((ulong)param_2 & (long)param_2 - 1U) != 0) {
    func_0x000107c60c44();
    plVar4 = param_2;
  }
  plVar12 = (long *)param_1[1];
  if (plVar12 < param_2) {
LAB_10003ec74:
    if (param_2 == (long *)0x0) {
      plVar4 = (long *)*param_1;
      *param_1 = 0;
      if (plVar4 != (long *)0x0) {
        func_0x000107c60e14();
      }
      param_1[1] = 0;
    }
    else {
      if ((ulong)param_2 >> 0x3d != 0) {
        func_0x000104c4f740();
        param_1[1] = 0;
        *param_1 = 0;
        param_1[3] = 0;
        param_1[2] = 0;
        *(int *)(param_1 + 4) = 0x3f800000;
        if (param_3 != 0) {
          lVar3 = 0;
          plVar4 = param_1 + 2;
          plVar12 = param_2 + param_3 * 4;
          do {
            iVar1 = (int)*param_2;
            uVar13 = (ulong)iVar1;
            uVar5 = param_1[1];
            if (uVar5 != 0) {
              uVar6 = uVar5 - 1;
              if ((uVar5 & uVar6) == 0) {
                unaff_x28 = uVar6 & uVar13;
              }
              else {
                unaff_x28 = uVar13;
                if (uVar5 <= uVar13) {
                  uVar8 = 0;
                  if (uVar5 != 0) {
                    uVar8 = uVar13 / uVar5;
                  }
                  unaff_x28 = uVar13 - uVar8 * uVar5;
                }
              }
              plVar7 = *(long **)(*param_1 + unaff_x28 * 8);
              if (plVar7 != (long *)0x0) {
                do {
                  while( true ) {
                    plVar7 = (long *)*plVar7;
                    if (plVar7 == (long *)0x0) goto LAB_10003ef10;
                    uVar8 = plVar7[1];
                    if (uVar8 != uVar13) break;
                    if (*(int *)(plVar7 + 2) == iVar1) goto LAB_10003f060;
                  }
                  if ((uVar5 & uVar6) == 0) {
                    uVar8 = uVar8 & uVar6;
                  }
                  else if (uVar5 <= uVar8) {
                    uVar2 = 0;
                    if (uVar5 != 0) {
                      uVar2 = uVar8 / uVar5;
                    }
                    uVar8 = uVar8 - uVar2 * uVar5;
                  }
                } while (uVar8 == unaff_x28);
              }
            }
LAB_10003ef10:
            plVar7 = (long *)0x30;
            func_0x000107c60e20();
            *plVar7 = 0;
            plVar7[1] = uVar13;
            *(int *)(plVar7 + 2) = iVar1;
            if (*(char *)((long)param_2 + 0x1f) < '\0') {
              FUN_100033dac(plVar7 + 3,param_2[1],param_2[2]);
              lVar3 = param_1[3];
            }
            else {
              lVar15 = param_2[2];
              lVar14 = param_2[1];
              plVar7[5] = param_2[3];
              plVar7[4] = lVar15;
              plVar7[3] = lVar14;
            }
            if ((uVar5 == 0) || (*(float *)(param_1 + 4) * (float)uVar5 < (float)(lVar3 + 1))) {
              uVar6 = 1;
              if (2 < uVar5) {
                uVar6 = (ulong)((uVar5 & uVar5 - 1) != 0);
              }
              uVar6 = uVar6 | uVar5 << 1;
              uVar5 = (ulong)((float)(lVar3 + 1) / *(float *)(param_1 + 4));
              if (uVar6 <= uVar5) {
                uVar6 = uVar5;
              }
              FUN_10003f0dc(param_1,uVar6);
              uVar5 = param_1[1];
              if ((uVar5 & uVar5 - 1) == 0) {
                unaff_x28 = uVar5 - 1 & uVar13;
              }
              else {
                unaff_x28 = uVar13;
                if (uVar5 <= uVar13) {
                  uVar6 = 0;
                  if (uVar5 != 0) {
                    uVar6 = uVar13 / uVar5;
                  }
                  unaff_x28 = uVar13 - uVar6 * uVar5;
                }
              }
            }
            lVar3 = *param_1;
            plVar9 = *(long **)(lVar3 + unaff_x28 * 8);
            if (plVar9 == (long *)0x0) {
              *plVar7 = *plVar4;
              *plVar4 = (long)plVar7;
              *(long **)(lVar3 + unaff_x28 * 8) = plVar4;
              if (*plVar7 != 0) {
                uVar13 = *(ulong *)(*plVar7 + 8);
                if ((uVar5 & uVar5 - 1) == 0) {
                  uVar13 = uVar13 & uVar5 - 1;
                }
                else if (uVar5 <= uVar13) {
                  uVar6 = 0;
                  if (uVar5 != 0) {
                    uVar6 = uVar13 / uVar5;
                  }
                  uVar13 = uVar13 - uVar6 * uVar5;
                }
                *(long **)(*param_1 + uVar13 * 8) = plVar7;
              }
            }
            else {
              *plVar7 = *plVar9;
              *plVar9 = (long)plVar7;
            }
            lVar3 = param_1[3] + 1;
            param_1[3] = lVar3;
LAB_10003f060:
            param_2 = param_2 + 4;
          } while (param_2 != plVar12);
        }
        return param_1;
      }
      lVar3 = (long)param_2 << 3;
      func_0x000107c60e20();
      plVar4 = (long *)*param_1;
      *param_1 = lVar3;
      if (plVar4 != (long *)0x0) {
        func_0x000107c60e14();
      }
      plVar12 = (long *)0x0;
      param_1[1] = (long)param_2;
      do {
        *(undefined8 *)(*param_1 + (long)plVar12 * 8) = 0;
        plVar12 = (long *)((long)plVar12 + 1);
      } while (param_2 != plVar12);
      plVar12 = (long *)param_1[2];
      if (plVar12 != (long *)0x0) {
        plVar7 = (long *)plVar12[1];
        uVar5 = (long)param_2 - 1;
        if (((ulong)param_2 & uVar5) == 0) {
          plVar7 = (long *)((ulong)plVar7 & uVar5);
        }
        else if (param_2 <= plVar7) {
          uVar13 = 0;
          if (param_2 != (long *)0x0) {
            uVar13 = (ulong)plVar7 / (ulong)param_2;
          }
          plVar7 = (long *)((long)plVar7 - uVar13 * (long)param_2);
        }
        *(long **)(*param_1 + (long)plVar7 * 8) = param_1 + 2;
        plVar9 = (long *)*plVar12;
        while (plVar9 != (long *)0x0) {
          plVar11 = (long *)plVar9[1];
          if (((ulong)param_2 & uVar5) == 0) {
            plVar11 = (long *)((ulong)plVar11 & uVar5);
          }
          else if (param_2 <= plVar11) {
            uVar13 = 0;
            if (param_2 != (long *)0x0) {
              uVar13 = (ulong)plVar11 / (ulong)param_2;
            }
            plVar11 = (long *)((long)plVar11 - uVar13 * (long)param_2);
          }
          plVar10 = plVar9;
          if (plVar11 != plVar7) {
            lVar3 = *param_1;
            if (*(long *)(lVar3 + (long)plVar11 * 8) == 0) {
              *(long **)(lVar3 + (long)plVar11 * 8) = plVar12;
              plVar7 = plVar11;
            }
            else {
              *plVar12 = *plVar9;
              *plVar9 = **(undefined8 **)(lVar3 + (long)plVar11 * 8);
              **(long **)(lVar3 + (long)plVar11 * 8) = (long)plVar9;
              plVar10 = plVar12;
            }
          }
          plVar12 = plVar10;
          plVar9 = (long *)*plVar10;
        }
      }
    }
    return plVar4;
  }
  if (param_2 < plVar12) {
    plVar4 = (long *)(long)((float)(ulong)param_1[3] / *(float *)(param_1 + 4));
    if ((plVar12 < (long *)0x3) || (((ulong)plVar12 & (long)plVar12 - 1U) != 0)) {
      func_0x000107c60c44();
    }
    else if ((long *)0x1 < plVar4) {
      plVar4 = (long *)(1L << (-LZCOUNT((long)plVar4 + -1) & 0x3fU));
    }
    if (param_2 <= plVar4) {
      param_2 = plVar4;
    }
    if (param_2 < plVar12) goto LAB_10003ec74;
  }
  return plVar4;
}



/* Entry: 10003ecfc; end: 10003ee37;  */

long * FUN_10003ecfc(long *param_1,int *param_2,long param_3)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  long *plVar4;
  int *piVar5;
  ulong uVar6;
  ulong uVar7;
  long *plVar8;
  ulong uVar9;
  long *plVar10;
  long *plVar11;
  int *piVar12;
  ulong uVar13;
  ulong unaff_x28;
  long lVar14;
  long lVar15;
  
  if (param_2 == (int *)0x0) {
    plVar4 = (long *)*param_1;
    *param_1 = 0;
    if (plVar4 != (long *)0x0) {
      func_0x000107c60e14();
    }
    param_1[1] = 0;
  }
  else {
    if ((ulong)param_2 >> 0x3d != 0) {
      func_0x000104c4f740();
      param_1[1] = 0;
      *param_1 = 0;
      param_1[3] = 0;
      param_1[2] = 0;
      *(undefined4 *)(param_1 + 4) = 0x3f800000;
      if (param_3 != 0) {
        lVar3 = 0;
        plVar4 = param_1 + 2;
        piVar5 = param_2 + param_3 * 8;
        do {
          iVar1 = *param_2;
          uVar13 = (ulong)iVar1;
          uVar6 = param_1[1];
          if (uVar6 != 0) {
            uVar7 = uVar6 - 1;
            if ((uVar6 & uVar7) == 0) {
              unaff_x28 = uVar7 & uVar13;
            }
            else {
              unaff_x28 = uVar13;
              if (uVar6 <= uVar13) {
                uVar9 = 0;
                if (uVar6 != 0) {
                  uVar9 = uVar13 / uVar6;
                }
                unaff_x28 = uVar13 - uVar9 * uVar6;
              }
            }
            plVar8 = *(long **)(*param_1 + unaff_x28 * 8);
            if (plVar8 != (long *)0x0) {
              do {
                while( true ) {
                  plVar8 = (long *)*plVar8;
                  if (plVar8 == (long *)0x0) goto LAB_10003ef10;
                  uVar9 = plVar8[1];
                  if (uVar9 != uVar13) break;
                  if (*(int *)(plVar8 + 2) == iVar1) goto LAB_10003f060;
                }
                if ((uVar6 & uVar7) == 0) {
                  uVar9 = uVar9 & uVar7;
                }
                else if (uVar6 <= uVar9) {
                  uVar2 = 0;
                  if (uVar6 != 0) {
                    uVar2 = uVar9 / uVar6;
                  }
                  uVar9 = uVar9 - uVar2 * uVar6;
                }
              } while (uVar9 == unaff_x28);
            }
          }
LAB_10003ef10:
          plVar8 = (long *)0x30;
          func_0x000107c60e20();
          *plVar8 = 0;
          plVar8[1] = uVar13;
          *(int *)(plVar8 + 2) = iVar1;
          if (*(char *)((long)param_2 + 0x1f) < '\0') {
            FUN_100033dac(plVar8 + 3,*(undefined8 *)(param_2 + 2),*(undefined8 *)(param_2 + 4));
            lVar3 = param_1[3];
          }
          else {
            lVar15 = *(long *)(param_2 + 4);
            lVar14 = *(long *)(param_2 + 2);
            plVar8[5] = *(long *)(param_2 + 6);
            plVar8[4] = lVar15;
            plVar8[3] = lVar14;
          }
          if ((uVar6 == 0) || (*(float *)(param_1 + 4) * (float)uVar6 < (float)(lVar3 + 1))) {
            uVar7 = 1;
            if (2 < uVar6) {
              uVar7 = (ulong)((uVar6 & uVar6 - 1) != 0);
            }
            uVar7 = uVar7 | uVar6 << 1;
            uVar6 = (ulong)((float)(lVar3 + 1) / *(float *)(param_1 + 4));
            if (uVar7 <= uVar6) {
              uVar7 = uVar6;
            }
            FUN_10003f0dc(param_1,uVar7);
            uVar6 = param_1[1];
            if ((uVar6 & uVar6 - 1) == 0) {
              unaff_x28 = uVar6 - 1 & uVar13;
            }
            else {
              unaff_x28 = uVar13;
              if (uVar6 <= uVar13) {
                uVar7 = 0;
                if (uVar6 != 0) {
                  uVar7 = uVar13 / uVar6;
                }
                unaff_x28 = uVar13 - uVar7 * uVar6;
              }
            }
          }
          lVar3 = *param_1;
          plVar10 = *(long **)(lVar3 + unaff_x28 * 8);
          if (plVar10 == (long *)0x0) {
            *plVar8 = *plVar4;
            *plVar4 = (long)plVar8;
            *(long **)(lVar3 + unaff_x28 * 8) = plVar4;
            if (*plVar8 != 0) {
              uVar13 = *(ulong *)(*plVar8 + 8);
              if ((uVar6 & uVar6 - 1) == 0) {
                uVar13 = uVar13 & uVar6 - 1;
              }
              else if (uVar6 <= uVar13) {
                uVar7 = 0;
                if (uVar6 != 0) {
                  uVar7 = uVar13 / uVar6;
                }
                uVar13 = uVar13 - uVar7 * uVar6;
              }
              *(long **)(*param_1 + uVar13 * 8) = plVar8;
            }
          }
          else {
            *plVar8 = *plVar10;
            *plVar10 = (long)plVar8;
          }
          lVar3 = param_1[3] + 1;
          param_1[3] = lVar3;
LAB_10003f060:
          param_2 = param_2 + 8;
        } while (param_2 != piVar5);
      }
      return param_1;
    }
    lVar3 = (long)param_2 << 3;
    func_0x000107c60e20();
    plVar4 = (long *)*param_1;
    *param_1 = lVar3;
    if (plVar4 != (long *)0x0) {
      func_0x000107c60e14();
    }
    piVar5 = (int *)0x0;
    param_1[1] = (long)param_2;
    do {
      *(undefined8 *)(*param_1 + (long)piVar5 * 8) = 0;
      piVar5 = (int *)((long)piVar5 + 1);
    } while (param_2 != piVar5);
    plVar8 = (long *)param_1[2];
    if (plVar8 != (long *)0x0) {
      piVar5 = (int *)plVar8[1];
      uVar6 = (long)param_2 - 1;
      if (((ulong)param_2 & uVar6) == 0) {
        piVar5 = (int *)((ulong)piVar5 & uVar6);
      }
      else if (param_2 <= piVar5) {
        uVar13 = 0;
        if (param_2 != (int *)0x0) {
          uVar13 = (ulong)piVar5 / (ulong)param_2;
        }
        piVar5 = (int *)((long)piVar5 - uVar13 * (long)param_2);
      }
      *(long **)(*param_1 + (long)piVar5 * 8) = param_1 + 2;
      plVar10 = (long *)*plVar8;
      while (plVar10 != (long *)0x0) {
        piVar12 = (int *)plVar10[1];
        if (((ulong)param_2 & uVar6) == 0) {
          piVar12 = (int *)((ulong)piVar12 & uVar6);
        }
        else if (param_2 <= piVar12) {
          uVar13 = 0;
          if (param_2 != (int *)0x0) {
            uVar13 = (ulong)piVar12 / (ulong)param_2;
          }
          piVar12 = (int *)((long)piVar12 - uVar13 * (long)param_2);
        }
        plVar11 = plVar10;
        if (piVar12 != piVar5) {
          lVar3 = *param_1;
          if (*(long *)(lVar3 + (long)piVar12 * 8) == 0) {
            *(long **)(lVar3 + (long)piVar12 * 8) = plVar8;
            piVar5 = piVar12;
          }
          else {
            *plVar8 = *plVar10;
            *plVar10 = **(undefined8 **)(lVar3 + (long)piVar12 * 8);
            **(long **)(lVar3 + (long)piVar12 * 8) = (long)plVar10;
            plVar11 = plVar8;
          }
        }
        plVar8 = plVar11;
        plVar10 = (long *)*plVar11;
      }
    }
  }
  return plVar4;
}



/* Entry: 10003ee38; end: 10003f0db;  */

long * FUN_10003ee38(long *param_1,int *param_2,long param_3)

{
  long *plVar1;
  int *piVar2;
  int iVar3;
  ulong uVar4;
  ulong uVar5;
  long *plVar6;
  ulong uVar7;
  long *plVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  ulong unaff_x28;
  long lVar12;
  long lVar13;
  
  param_1[1] = 0;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 4) = 0x3f800000;
  if (param_3 != 0) {
    lVar9 = 0;
    plVar1 = param_1 + 2;
    piVar2 = param_2 + param_3 * 8;
    do {
      iVar3 = *param_2;
      uVar11 = (ulong)iVar3;
      uVar10 = param_1[1];
      if (uVar10 != 0) {
        uVar5 = uVar10 - 1;
        if ((uVar10 & uVar5) == 0) {
          unaff_x28 = uVar5 & uVar11;
        }
        else {
          unaff_x28 = uVar11;
          if (uVar10 <= uVar11) {
            uVar7 = 0;
            if (uVar10 != 0) {
              uVar7 = uVar11 / uVar10;
            }
            unaff_x28 = uVar11 - uVar7 * uVar10;
          }
        }
        plVar6 = *(long **)(*param_1 + unaff_x28 * 8);
        if (plVar6 != (long *)0x0) {
          do {
            while( true ) {
              plVar6 = (long *)*plVar6;
              if (plVar6 == (long *)0x0) goto LAB_10003ef10;
              uVar7 = plVar6[1];
              if (uVar7 != uVar11) break;
              if (*(int *)(plVar6 + 2) == iVar3) goto LAB_10003f060;
            }
            if ((uVar10 & uVar5) == 0) {
              uVar7 = uVar7 & uVar5;
            }
            else if (uVar10 <= uVar7) {
              uVar4 = 0;
              if (uVar10 != 0) {
                uVar4 = uVar7 / uVar10;
              }
              uVar7 = uVar7 - uVar4 * uVar10;
            }
          } while (uVar7 == unaff_x28);
        }
      }
LAB_10003ef10:
      plVar6 = (long *)0x30;
      func_0x000107c60e20();
      *plVar6 = 0;
      plVar6[1] = uVar11;
      *(int *)(plVar6 + 2) = iVar3;
      if (*(char *)((long)param_2 + 0x1f) < '\0') {
        FUN_100033dac(plVar6 + 3,*(undefined8 *)(param_2 + 2),*(undefined8 *)(param_2 + 4));
        lVar9 = param_1[3];
      }
      else {
        lVar13 = *(long *)(param_2 + 4);
        lVar12 = *(long *)(param_2 + 2);
        plVar6[5] = *(long *)(param_2 + 6);
        plVar6[4] = lVar13;
        plVar6[3] = lVar12;
      }
      if ((uVar10 == 0) || (*(float *)(param_1 + 4) * (float)uVar10 < (float)(lVar9 + 1))) {
        uVar5 = 1;
        if (2 < uVar10) {
          uVar5 = (ulong)((uVar10 & uVar10 - 1) != 0);
        }
        uVar5 = uVar5 | uVar10 << 1;
        uVar10 = (ulong)((float)(lVar9 + 1) / *(float *)(param_1 + 4));
        if (uVar5 <= uVar10) {
          uVar5 = uVar10;
        }
        FUN_10003f0dc(param_1,uVar5);
        uVar10 = param_1[1];
        if ((uVar10 & uVar10 - 1) == 0) {
          unaff_x28 = uVar10 - 1 & uVar11;
        }
        else {
          unaff_x28 = uVar11;
          if (uVar10 <= uVar11) {
            uVar5 = 0;
            if (uVar10 != 0) {
              uVar5 = uVar11 / uVar10;
            }
            unaff_x28 = uVar11 - uVar5 * uVar10;
          }
        }
      }
      lVar9 = *param_1;
      plVar8 = *(long **)(lVar9 + unaff_x28 * 8);
      if (plVar8 == (long *)0x0) {
        *plVar6 = *plVar1;
        *plVar1 = (long)plVar6;
        *(long **)(lVar9 + unaff_x28 * 8) = plVar1;
        if (*plVar6 != 0) {
          uVar11 = *(ulong *)(*plVar6 + 8);
          if ((uVar10 & uVar10 - 1) == 0) {
            uVar11 = uVar11 & uVar10 - 1;
          }
          else if (uVar10 <= uVar11) {
            uVar5 = 0;
            if (uVar10 != 0) {
              uVar5 = uVar11 / uVar10;
            }
            uVar11 = uVar11 - uVar5 * uVar10;
          }
          *(long **)(*param_1 + uVar11 * 8) = plVar6;
        }
      }
      else {
        *plVar6 = *plVar8;
        *plVar8 = (long)plVar6;
      }
      lVar9 = param_1[3] + 1;
      param_1[3] = lVar9;
LAB_10003f060:
      param_2 = param_2 + 8;
    } while (param_2 != piVar2);
  }
  return param_1;
}



/* Entry: 10003f0dc; end: 10003f1ab;  */

long * FUN_10003f0dc(long *param_1,long *param_2,long param_3)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  long *plVar4;
  ulong uVar5;
  ulong uVar6;
  long *plVar7;
  ulong uVar8;
  long *plVar9;
  long *plVar10;
  long *plVar11;
  long *plVar12;
  ulong uVar13;
  ulong unaff_x28;
  long lVar14;
  long lVar15;
  
  plVar4 = param_1;
  if ((long)param_2 - 1U == 0) {
    param_2 = (long *)0x2;
  }
  else if (((ulong)param_2 & (long)param_2 - 1U) != 0) {
    func_0x000107c60c44();
    plVar4 = param_2;
  }
  plVar12 = (long *)param_1[1];
  if (plVar12 < param_2) {
LAB_10003f124:
    if (param_2 == (long *)0x0) {
      plVar4 = (long *)*param_1;
      *param_1 = 0;
      if (plVar4 != (long *)0x0) {
        func_0x000107c60e14();
      }
      param_1[1] = 0;
    }
    else {
      if ((ulong)param_2 >> 0x3d != 0) {
        func_0x000104c4f740();
        param_1[1] = 0;
        *param_1 = 0;
        param_1[3] = 0;
        param_1[2] = 0;
        *(int *)(param_1 + 4) = 0x3f800000;
        if (param_3 != 0) {
          lVar3 = 0;
          plVar4 = param_1 + 2;
          plVar12 = param_2 + param_3 * 4;
          do {
            iVar1 = (int)*param_2;
            uVar13 = (ulong)iVar1;
            uVar5 = param_1[1];
            if (uVar5 != 0) {
              uVar6 = uVar5 - 1;
              if ((uVar5 & uVar6) == 0) {
                unaff_x28 = uVar6 & uVar13;
              }
              else {
                unaff_x28 = uVar13;
                if (uVar5 <= uVar13) {
                  uVar8 = 0;
                  if (uVar5 != 0) {
                    uVar8 = uVar13 / uVar5;
                  }
                  unaff_x28 = uVar13 - uVar8 * uVar5;
                }
              }
              plVar7 = *(long **)(*param_1 + unaff_x28 * 8);
              if (plVar7 != (long *)0x0) {
                do {
                  while( true ) {
                    plVar7 = (long *)*plVar7;
                    if (plVar7 == (long *)0x0) goto LAB_10003f3c0;
                    uVar8 = plVar7[1];
                    if (uVar8 != uVar13) break;
                    if (*(int *)(plVar7 + 2) == iVar1) goto LAB_10003f510;
                  }
                  if ((uVar5 & uVar6) == 0) {
                    uVar8 = uVar8 & uVar6;
                  }
                  else if (uVar5 <= uVar8) {
                    uVar2 = 0;
                    if (uVar5 != 0) {
                      uVar2 = uVar8 / uVar5;
                    }
                    uVar8 = uVar8 - uVar2 * uVar5;
                  }
                } while (uVar8 == unaff_x28);
              }
            }
LAB_10003f3c0:
            plVar7 = (long *)0x30;
            func_0x000107c60e20();
            *plVar7 = 0;
            plVar7[1] = uVar13;
            *(int *)(plVar7 + 2) = iVar1;
            if (*(char *)((long)param_2 + 0x1f) < '\0') {
              FUN_100033dac(plVar7 + 3,param_2[1],param_2[2]);
              lVar3 = param_1[3];
            }
            else {
              lVar15 = param_2[2];
              lVar14 = param_2[1];
              plVar7[5] = param_2[3];
              plVar7[4] = lVar15;
              plVar7[3] = lVar14;
            }
            if ((uVar5 == 0) || (*(float *)(param_1 + 4) * (float)uVar5 < (float)(lVar3 + 1))) {
              uVar6 = 1;
              if (2 < uVar5) {
                uVar6 = (ulong)((uVar5 & uVar5 - 1) != 0);
              }
              uVar6 = uVar6 | uVar5 << 1;
              uVar5 = (ulong)((float)(lVar3 + 1) / *(float *)(param_1 + 4));
              if (uVar6 <= uVar5) {
                uVar6 = uVar5;
              }
              FUN_10003f58c(param_1,uVar6);
              uVar5 = param_1[1];
              if ((uVar5 & uVar5 - 1) == 0) {
                unaff_x28 = uVar5 - 1 & uVar13;
              }
              else {
                unaff_x28 = uVar13;
                if (uVar5 <= uVar13) {
                  uVar6 = 0;
                  if (uVar5 != 0) {
                    uVar6 = uVar13 / uVar5;
                  }
                  unaff_x28 = uVar13 - uVar6 * uVar5;
                }
              }
            }
            lVar3 = *param_1;
            plVar9 = *(long **)(lVar3 + unaff_x28 * 8);
            if (plVar9 == (long *)0x0) {
              *plVar7 = *plVar4;
              *plVar4 = (long)plVar7;
              *(long **)(lVar3 + unaff_x28 * 8) = plVar4;
              if (*plVar7 != 0) {
                uVar13 = *(ulong *)(*plVar7 + 8);
                if ((uVar5 & uVar5 - 1) == 0) {
                  uVar13 = uVar13 & uVar5 - 1;
                }
                else if (uVar5 <= uVar13) {
                  uVar6 = 0;
                  if (uVar5 != 0) {
                    uVar6 = uVar13 / uVar5;
                  }
                  uVar13 = uVar13 - uVar6 * uVar5;
                }
                *(long **)(*param_1 + uVar13 * 8) = plVar7;
              }
            }
            else {
              *plVar7 = *plVar9;
              *plVar9 = (long)plVar7;
            }
            lVar3 = param_1[3] + 1;
            param_1[3] = lVar3;
LAB_10003f510:
            param_2 = param_2 + 4;
          } while (param_2 != plVar12);
        }
        return param_1;
      }
      lVar3 = (long)param_2 << 3;
      func_0x000107c60e20();
      plVar4 = (long *)*param_1;
      *param_1 = lVar3;
      if (plVar4 != (long *)0x0) {
        func_0x000107c60e14();
      }
      plVar12 = (long *)0x0;
      param_1[1] = (long)param_2;
      do {
        *(undefined8 *)(*param_1 + (long)plVar12 * 8) = 0;
        plVar12 = (long *)((long)plVar12 + 1);
      } while (param_2 != plVar12);
      plVar12 = (long *)param_1[2];
      if (plVar12 != (long *)0x0) {
        plVar7 = (long *)plVar12[1];
        uVar5 = (long)param_2 - 1;
        if (((ulong)param_2 & uVar5) == 0) {
          plVar7 = (long *)((ulong)plVar7 & uVar5);
        }
        else if (param_2 <= plVar7) {
          uVar13 = 0;
          if (param_2 != (long *)0x0) {
            uVar13 = (ulong)plVar7 / (ulong)param_2;
          }
          plVar7 = (long *)((long)plVar7 - uVar13 * (long)param_2);
        }
        *(long **)(*param_1 + (long)plVar7 * 8) = param_1 + 2;
        plVar9 = (long *)*plVar12;
        while (plVar9 != (long *)0x0) {
          plVar11 = (long *)plVar9[1];
          if (((ulong)param_2 & uVar5) == 0) {
            plVar11 = (long *)((ulong)plVar11 & uVar5);
          }
          else if (param_2 <= plVar11) {
            uVar13 = 0;
            if (param_2 != (long *)0x0) {
              uVar13 = (ulong)plVar11 / (ulong)param_2;
            }
            plVar11 = (long *)((long)plVar11 - uVar13 * (long)param_2);
          }
          plVar10 = plVar9;
          if (plVar11 != plVar7) {
            lVar3 = *param_1;
            if (*(long *)(lVar3 + (long)plVar11 * 8) == 0) {
              *(long **)(lVar3 + (long)plVar11 * 8) = plVar12;
              plVar7 = plVar11;
            }
            else {
              *plVar12 = *plVar9;
              *plVar9 = **(undefined8 **)(lVar3 + (long)plVar11 * 8);
              **(long **)(lVar3 + (long)plVar11 * 8) = (long)plVar9;
              plVar10 = plVar12;
            }
          }
          plVar12 = plVar10;
          plVar9 = (long *)*plVar10;
        }
      }
    }
    return plVar4;
  }
  if (param_2 < plVar12) {
    plVar4 = (long *)(long)((float)(ulong)param_1[3] / *(float *)(param_1 + 4));
    if ((plVar12 < (long *)0x3) || (((ulong)plVar12 & (long)plVar12 - 1U) != 0)) {
      func_0x000107c60c44();
    }
    else if ((long *)0x1 < plVar4) {
      plVar4 = (long *)(1L << (-LZCOUNT((long)plVar4 + -1) & 0x3fU));
    }
    if (param_2 <= plVar4) {
      param_2 = plVar4;
    }
    if (param_2 < plVar12) goto LAB_10003f124;
  }
  return plVar4;
}



/* Entry: 10003f1ac; end: 10003f2e7;  */

long * FUN_10003f1ac(long *param_1,int *param_2,long param_3)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  long *plVar4;
  int *piVar5;
  ulong uVar6;
  ulong uVar7;
  long *plVar8;
  ulong uVar9;
  long *plVar10;
  long *plVar11;
  int *piVar12;
  ulong uVar13;
  ulong unaff_x28;
  long lVar14;
  long lVar15;
  
  if (param_2 == (int *)0x0) {
    plVar4 = (long *)*param_1;
    *param_1 = 0;
    if (plVar4 != (long *)0x0) {
      func_0x000107c60e14();
    }
    param_1[1] = 0;
  }
  else {
    if ((ulong)param_2 >> 0x3d != 0) {
      func_0x000104c4f740();
      param_1[1] = 0;
      *param_1 = 0;
      param_1[3] = 0;
      param_1[2] = 0;
      *(undefined4 *)(param_1 + 4) = 0x3f800000;
      if (param_3 != 0) {
        lVar3 = 0;
        plVar4 = param_1 + 2;
        piVar5 = param_2 + param_3 * 8;
        do {
          iVar1 = *param_2;
          uVar13 = (ulong)iVar1;
          uVar6 = param_1[1];
          if (uVar6 != 0) {
            uVar7 = uVar6 - 1;
            if ((uVar6 & uVar7) == 0) {
              unaff_x28 = uVar7 & uVar13;
            }
            else {
              unaff_x28 = uVar13;
              if (uVar6 <= uVar13) {
                uVar9 = 0;
                if (uVar6 != 0) {
                  uVar9 = uVar13 / uVar6;
                }
                unaff_x28 = uVar13 - uVar9 * uVar6;
              }
            }
            plVar8 = *(long **)(*param_1 + unaff_x28 * 8);
            if (plVar8 != (long *)0x0) {
              do {
                while( true ) {
                  plVar8 = (long *)*plVar8;
                  if (plVar8 == (long *)0x0) goto LAB_10003f3c0;
                  uVar9 = plVar8[1];
                  if (uVar9 != uVar13) break;
                  if (*(int *)(plVar8 + 2) == iVar1) goto LAB_10003f510;
                }
                if ((uVar6 & uVar7) == 0) {
                  uVar9 = uVar9 & uVar7;
                }
                else if (uVar6 <= uVar9) {
                  uVar2 = 0;
                  if (uVar6 != 0) {
                    uVar2 = uVar9 / uVar6;
                  }
                  uVar9 = uVar9 - uVar2 * uVar6;
                }
              } while (uVar9 == unaff_x28);
            }
          }
LAB_10003f3c0:
          plVar8 = (long *)0x30;
          func_0x000107c60e20();
          *plVar8 = 0;
          plVar8[1] = uVar13;
          *(int *)(plVar8 + 2) = iVar1;
          if (*(char *)((long)param_2 + 0x1f) < '\0') {
            FUN_100033dac(plVar8 + 3,*(undefined8 *)(param_2 + 2),*(undefined8 *)(param_2 + 4));
            lVar3 = param_1[3];
          }
          else {
            lVar15 = *(long *)(param_2 + 4);
            lVar14 = *(long *)(param_2 + 2);
            plVar8[5] = *(long *)(param_2 + 6);
            plVar8[4] = lVar15;
            plVar8[3] = lVar14;
          }
          if ((uVar6 == 0) || (*(float *)(param_1 + 4) * (float)uVar6 < (float)(lVar3 + 1))) {
            uVar7 = 1;
            if (2 < uVar6) {
              uVar7 = (ulong)((uVar6 & uVar6 - 1) != 0);
            }
            uVar7 = uVar7 | uVar6 << 1;
            uVar6 = (ulong)((float)(lVar3 + 1) / *(float *)(param_1 + 4));
            if (uVar7 <= uVar6) {
              uVar7 = uVar6;
            }
            FUN_10003f58c(param_1,uVar7);
            uVar6 = param_1[1];
            if ((uVar6 & uVar6 - 1) == 0) {
              unaff_x28 = uVar6 - 1 & uVar13;
            }
            else {
              unaff_x28 = uVar13;
              if (uVar6 <= uVar13) {
                uVar7 = 0;
                if (uVar6 != 0) {
                  uVar7 = uVar13 / uVar6;
                }
                unaff_x28 = uVar13 - uVar7 * uVar6;
              }
            }
          }
          lVar3 = *param_1;
          plVar10 = *(long **)(lVar3 + unaff_x28 * 8);
          if (plVar10 == (long *)0x0) {
            *plVar8 = *plVar4;
            *plVar4 = (long)plVar8;
            *(long **)(lVar3 + unaff_x28 * 8) = plVar4;
            if (*plVar8 != 0) {
              uVar13 = *(ulong *)(*plVar8 + 8);
              if ((uVar6 & uVar6 - 1) == 0) {
                uVar13 = uVar13 & uVar6 - 1;
              }
              else if (uVar6 <= uVar13) {
                uVar7 = 0;
                if (uVar6 != 0) {
                  uVar7 = uVar13 / uVar6;
                }
                uVar13 = uVar13 - uVar7 * uVar6;
              }
              *(long **)(*param_1 + uVar13 * 8) = plVar8;
            }
          }
          else {
            *plVar8 = *plVar10;
            *plVar10 = (long)plVar8;
          }
          lVar3 = param_1[3] + 1;
          param_1[3] = lVar3;
LAB_10003f510:
          param_2 = param_2 + 8;
        } while (param_2 != piVar5);
      }
      return param_1;
    }
    lVar3 = (long)param_2 << 3;
    func_0x000107c60e20();
    plVar4 = (long *)*param_1;
    *param_1 = lVar3;
    if (plVar4 != (long *)0x0) {
      func_0x000107c60e14();
    }
    piVar5 = (int *)0x0;
    param_1[1] = (long)param_2;
    do {
      *(undefined8 *)(*param_1 + (long)piVar5 * 8) = 0;
      piVar5 = (int *)((long)piVar5 + 1);
    } while (param_2 != piVar5);
    plVar8 = (long *)param_1[2];
    if (plVar8 != (long *)0x0) {
      piVar5 = (int *)plVar8[1];
      uVar6 = (long)param_2 - 1;
      if (((ulong)param_2 & uVar6) == 0) {
        piVar5 = (int *)((ulong)piVar5 & uVar6);
      }
      else if (param_2 <= piVar5) {
        uVar13 = 0;
        if (param_2 != (int *)0x0) {
          uVar13 = (ulong)piVar5 / (ulong)param_2;
        }
        piVar5 = (int *)((long)piVar5 - uVar13 * (long)param_2);
      }
      *(long **)(*param_1 + (long)piVar5 * 8) = param_1 + 2;
      plVar10 = (long *)*plVar8;
      while (plVar10 != (long *)0x0) {
        piVar12 = (int *)plVar10[1];
        if (((ulong)param_2 & uVar6) == 0) {
          piVar12 = (int *)((ulong)piVar12 & uVar6);
        }
        else if (param_2 <= piVar12) {
          uVar13 = 0;
          if (param_2 != (int *)0x0) {
            uVar13 = (ulong)piVar12 / (ulong)param_2;
          }
          piVar12 = (int *)((long)piVar12 - uVar13 * (long)param_2);
        }
        plVar11 = plVar10;
        if (piVar12 != piVar5) {
          lVar3 = *param_1;
          if (*(long *)(lVar3 + (long)piVar12 * 8) == 0) {
            *(long **)(lVar3 + (long)piVar12 * 8) = plVar8;
            piVar5 = piVar12;
          }
          else {
            *plVar8 = *plVar10;
            *plVar10 = **(undefined8 **)(lVar3 + (long)piVar12 * 8);
            **(long **)(lVar3 + (long)piVar12 * 8) = (long)plVar10;
            plVar11 = plVar8;
          }
        }
        plVar8 = plVar11;
        plVar10 = (long *)*plVar11;
      }
    }
  }
  return plVar4;
}



/* Entry: 10003f2e8; end: 10003f58b;  */

long * FUN_10003f2e8(long *param_1,int *param_2,long param_3)

{
  long *plVar1;
  int *piVar2;
  int iVar3;
  ulong uVar4;
  ulong uVar5;
  long *plVar6;
  ulong uVar7;
  long *plVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  ulong unaff_x28;
  long lVar12;
  long lVar13;
  
  param_1[1] = 0;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 4) = 0x3f800000;
  if (param_3 != 0) {
    lVar9 = 0;
    plVar1 = param_1 + 2;
    piVar2 = param_2 + param_3 * 8;
    do {
      iVar3 = *param_2;
      uVar11 = (ulong)iVar3;
      uVar10 = param_1[1];
      if (uVar10 != 0) {
        uVar5 = uVar10 - 1;
        if ((uVar10 & uVar5) == 0) {
          unaff_x28 = uVar5 & uVar11;
        }
        else {
          unaff_x28 = uVar11;
          if (uVar10 <= uVar11) {
            uVar7 = 0;
            if (uVar10 != 0) {
              uVar7 = uVar11 / uVar10;
            }
            unaff_x28 = uVar11 - uVar7 * uVar10;
          }
        }
        plVar6 = *(long **)(*param_1 + unaff_x28 * 8);
        if (plVar6 != (long *)0x0) {
          do {
            while( true ) {
              plVar6 = (long *)*plVar6;
              if (plVar6 == (long *)0x0) goto LAB_10003f3c0;
              uVar7 = plVar6[1];
              if (uVar7 != uVar11) break;
              if (*(int *)(plVar6 + 2) == iVar3) goto LAB_10003f510;
            }
            if ((uVar10 & uVar5) == 0) {
              uVar7 = uVar7 & uVar5;
            }
            else if (uVar10 <= uVar7) {
              uVar4 = 0;
              if (uVar10 != 0) {
                uVar4 = uVar7 / uVar10;
              }
              uVar7 = uVar7 - uVar4 * uVar10;
            }
          } while (uVar7 == unaff_x28);
        }
      }
LAB_10003f3c0:
      plVar6 = (long *)0x30;
      func_0x000107c60e20();
      *plVar6 = 0;
      plVar6[1] = uVar11;
      *(int *)(plVar6 + 2) = iVar3;
      if (*(char *)((long)param_2 + 0x1f) < '\0') {
        FUN_100033dac(plVar6 + 3,*(undefined8 *)(param_2 + 2),*(undefined8 *)(param_2 + 4));
        lVar9 = param_1[3];
      }
      else {
        lVar13 = *(long *)(param_2 + 4);
        lVar12 = *(long *)(param_2 + 2);
        plVar6[5] = *(long *)(param_2 + 6);
        plVar6[4] = lVar13;
        plVar6[3] = lVar12;
      }
      if ((uVar10 == 0) || (*(float *)(param_1 + 4) * (float)uVar10 < (float)(lVar9 + 1))) {
        uVar5 = 1;
        if (2 < uVar10) {
          uVar5 = (ulong)((uVar10 & uVar10 - 1) != 0);
        }
        uVar5 = uVar5 | uVar10 << 1;
        uVar10 = (ulong)((float)(lVar9 + 1) / *(float *)(param_1 + 4));
        if (uVar5 <= uVar10) {
          uVar5 = uVar10;
        }
        FUN_10003f58c(param_1,uVar5);
        uVar10 = param_1[1];
        if ((uVar10 & uVar10 - 1) == 0) {
          unaff_x28 = uVar10 - 1 & uVar11;
        }
        else {
          unaff_x28 = uVar11;
          if (uVar10 <= uVar11) {
            uVar5 = 0;
            if (uVar10 != 0) {
              uVar5 = uVar11 / uVar10;
            }
            unaff_x28 = uVar11 - uVar5 * uVar10;
          }
        }
      }
      lVar9 = *param_1;
      plVar8 = *(long **)(lVar9 + unaff_x28 * 8);
      if (plVar8 == (long *)0x0) {
        *plVar6 = *plVar1;
        *plVar1 = (long)plVar6;
        *(long **)(lVar9 + unaff_x28 * 8) = plVar1;
        if (*plVar6 != 0) {
          uVar11 = *(ulong *)(*plVar6 + 8);
          if ((uVar10 & uVar10 - 1) == 0) {
            uVar11 = uVar11 & uVar10 - 1;
          }
          else if (uVar10 <= uVar11) {
            uVar5 = 0;
            if (uVar10 != 0) {
              uVar5 = uVar11 / uVar10;
            }
            uVar11 = uVar11 - uVar5 * uVar10;
          }
          *(long **)(*param_1 + uVar11 * 8) = plVar6;
        }
      }
      else {
        *plVar6 = *plVar8;
        *plVar8 = (long)plVar6;
      }
      lVar9 = param_1[3] + 1;
      param_1[3] = lVar9;
LAB_10003f510:
      param_2 = param_2 + 8;
    } while (param_2 != piVar2);
  }
  return param_1;
}



/* Entry: 10003f58c; end: 10003f65b;  */

long * FUN_10003f58c(long *param_1,long *param_2,long param_3)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  long *plVar4;
  ulong uVar5;
  ulong uVar6;
  long *plVar7;
  ulong uVar8;
  long *plVar9;
  long *plVar10;
  long *plVar11;
  long *plVar12;
  ulong uVar13;
  ulong unaff_x28;
  long lVar14;
  long lVar15;
  
  plVar4 = param_1;
  if ((long)param_2 - 1U == 0) {
    param_2 = (long *)0x2;
  }
  else if (((ulong)param_2 & (long)param_2 - 1U) != 0) {
    func_0x000107c60c44();
    plVar4 = param_2;
  }
  plVar12 = (long *)param_1[1];
  if (plVar12 < param_2) {
LAB_10003f5d4:
    if (param_2 == (long *)0x0) {
      plVar4 = (long *)*param_1;
      *param_1 = 0;
      if (plVar4 != (long *)0x0) {
        func_0x000107c60e14();
      }
      param_1[1] = 0;
    }
    else {
      if ((ulong)param_2 >> 0x3d != 0) {
        func_0x000104c4f740();
        param_1[1] = 0;
        *param_1 = 0;
        param_1[3] = 0;
        param_1[2] = 0;
        *(int *)(param_1 + 4) = 0x3f800000;
        if (param_3 != 0) {
          lVar3 = 0;
          plVar4 = param_1 + 2;
          plVar12 = param_2 + param_3 * 4;
          do {
            iVar1 = (int)*param_2;
            uVar13 = (ulong)iVar1;
            uVar5 = param_1[1];
            if (uVar5 != 0) {
              uVar6 = uVar5 - 1;
              if ((uVar5 & uVar6) == 0) {
                unaff_x28 = uVar6 & uVar13;
              }
              else {
                unaff_x28 = uVar13;
                if (uVar5 <= uVar13) {
                  uVar8 = 0;
                  if (uVar5 != 0) {
                    uVar8 = uVar13 / uVar5;
                  }
                  unaff_x28 = uVar13 - uVar8 * uVar5;
                }
              }
              plVar7 = *(long **)(*param_1 + unaff_x28 * 8);
              if (plVar7 != (long *)0x0) {
                do {
                  while( true ) {
                    plVar7 = (long *)*plVar7;
                    if (plVar7 == (long *)0x0) goto LAB_10003f870;
                    uVar8 = plVar7[1];
                    if (uVar8 != uVar13) break;
                    if (*(int *)(plVar7 + 2) == iVar1) goto LAB_10003f9c0;
                  }
                  if ((uVar5 & uVar6) == 0) {
                    uVar8 = uVar8 & uVar6;
                  }
                  else if (uVar5 <= uVar8) {
                    uVar2 = 0;
                    if (uVar5 != 0) {
                      uVar2 = uVar8 / uVar5;
                    }
                    uVar8 = uVar8 - uVar2 * uVar5;
                  }
                } while (uVar8 == unaff_x28);
              }
            }
LAB_10003f870:
            plVar7 = (long *)0x30;
            func_0x000107c60e20();
            *plVar7 = 0;
            plVar7[1] = uVar13;
            *(int *)(plVar7 + 2) = iVar1;
            if (*(char *)((long)param_2 + 0x1f) < '\0') {
              FUN_100033dac(plVar7 + 3,param_2[1],param_2[2]);
              lVar3 = param_1[3];
            }
            else {
              lVar15 = param_2[2];
              lVar14 = param_2[1];
              plVar7[5] = param_2[3];
              plVar7[4] = lVar15;
              plVar7[3] = lVar14;
            }
            if ((uVar5 == 0) || (*(float *)(param_1 + 4) * (float)uVar5 < (float)(lVar3 + 1))) {
              uVar6 = 1;
              if (2 < uVar5) {
                uVar6 = (ulong)((uVar5 & uVar5 - 1) != 0);
              }
              uVar6 = uVar6 | uVar5 << 1;
              uVar5 = (ulong)((float)(lVar3 + 1) / *(float *)(param_1 + 4));
              if (uVar6 <= uVar5) {
                uVar6 = uVar5;
              }
              FUN_10003fa3c(param_1,uVar6);
              uVar5 = param_1[1];
              if ((uVar5 & uVar5 - 1) == 0) {
                unaff_x28 = uVar5 - 1 & uVar13;
              }
              else {
                unaff_x28 = uVar13;
                if (uVar5 <= uVar13) {
                  uVar6 = 0;
                  if (uVar5 != 0) {
                    uVar6 = uVar13 / uVar5;
                  }
                  unaff_x28 = uVar13 - uVar6 * uVar5;
                }
              }
            }
            lVar3 = *param_1;
            plVar9 = *(long **)(lVar3 + unaff_x28 * 8);
            if (plVar9 == (long *)0x0) {
              *plVar7 = *plVar4;
              *plVar4 = (long)plVar7;
              *(long **)(lVar3 + unaff_x28 * 8) = plVar4;
              if (*plVar7 != 0) {
                uVar13 = *(ulong *)(*plVar7 + 8);
                if ((uVar5 & uVar5 - 1) == 0) {
                  uVar13 = uVar13 & uVar5 - 1;
                }
                else if (uVar5 <= uVar13) {
                  uVar6 = 0;
                  if (uVar5 != 0) {
                    uVar6 = uVar13 / uVar5;
                  }
                  uVar13 = uVar13 - uVar6 * uVar5;
                }
                *(long **)(*param_1 + uVar13 * 8) = plVar7;
              }
            }
            else {
              *plVar7 = *plVar9;
              *plVar9 = (long)plVar7;
            }
            lVar3 = param_1[3] + 1;
            param_1[3] = lVar3;
LAB_10003f9c0:
            param_2 = param_2 + 4;
          } while (param_2 != plVar12);
        }
        return param_1;
      }
      lVar3 = (long)param_2 << 3;
      func_0x000107c60e20();
      plVar4 = (long *)*param_1;
      *param_1 = lVar3;
      if (plVar4 != (long *)0x0) {
        func_0x000107c60e14();
      }
      plVar12 = (long *)0x0;
      param_1[1] = (long)param_2;
      do {
        *(undefined8 *)(*param_1 + (long)plVar12 * 8) = 0;
        plVar12 = (long *)((long)plVar12 + 1);
      } while (param_2 != plVar12);
      plVar12 = (long *)param_1[2];
      if (plVar12 != (long *)0x0) {
        plVar7 = (long *)plVar12[1];
        uVar5 = (long)param_2 - 1;
        if (((ulong)param_2 & uVar5) == 0) {
          plVar7 = (long *)((ulong)plVar7 & uVar5);
        }
        else if (param_2 <= plVar7) {
          uVar13 = 0;
          if (param_2 != (long *)0x0) {
            uVar13 = (ulong)plVar7 / (ulong)param_2;
          }
          plVar7 = (long *)((long)plVar7 - uVar13 * (long)param_2);
        }
        *(long **)(*param_1 + (long)plVar7 * 8) = param_1 + 2;
        plVar9 = (long *)*plVar12;
        while (plVar9 != (long *)0x0) {
          plVar11 = (long *)plVar9[1];
          if (((ulong)param_2 & uVar5) == 0) {
            plVar11 = (long *)((ulong)plVar11 & uVar5);
          }
          else if (param_2 <= plVar11) {
            uVar13 = 0;
            if (param_2 != (long *)0x0) {
              uVar13 = (ulong)plVar11 / (ulong)param_2;
            }
            plVar11 = (long *)((long)plVar11 - uVar13 * (long)param_2);
          }
          plVar10 = plVar9;
          if (plVar11 != plVar7) {
            lVar3 = *param_1;
            if (*(long *)(lVar3 + (long)plVar11 * 8) == 0) {
              *(long **)(lVar3 + (long)plVar11 * 8) = plVar12;
              plVar7 = plVar11;
            }
            else {
              *plVar12 = *plVar9;
              *plVar9 = **(undefined8 **)(lVar3 + (long)plVar11 * 8);
              **(long **)(lVar3 + (long)plVar11 * 8) = (long)plVar9;
              plVar10 = plVar12;
            }
          }
          plVar12 = plVar10;
          plVar9 = (long *)*plVar10;
        }
      }
    }
    return plVar4;
  }
  if (param_2 < plVar12) {
    plVar4 = (long *)(long)((float)(ulong)param_1[3] / *(float *)(param_1 + 4));
    if ((plVar12 < (long *)0x3) || (((ulong)plVar12 & (long)plVar12 - 1U) != 0)) {
      func_0x000107c60c44();
    }
    else if ((long *)0x1 < plVar4) {
      plVar4 = (long *)(1L << (-LZCOUNT((long)plVar4 + -1) & 0x3fU));
    }
    if (param_2 <= plVar4) {
      param_2 = plVar4;
    }
    if (param_2 < plVar12) goto LAB_10003f5d4;
  }
  return plVar4;
}



/* Entry: 10003f65c; end: 10003f797;  */

long * FUN_10003f65c(long *param_1,int *param_2,long param_3)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  long *plVar4;
  int *piVar5;
  ulong uVar6;
  ulong uVar7;
  long *plVar8;
  ulong uVar9;
  long *plVar10;
  long *plVar11;
  int *piVar12;
  ulong uVar13;
  ulong unaff_x28;
  long lVar14;
  long lVar15;
  
  if (param_2 == (int *)0x0) {
    plVar4 = (long *)*param_1;
    *param_1 = 0;
    if (plVar4 != (long *)0x0) {
      func_0x000107c60e14();
    }
    param_1[1] = 0;
  }
  else {
    if ((ulong)param_2 >> 0x3d != 0) {
      func_0x000104c4f740();
      param_1[1] = 0;
      *param_1 = 0;
      param_1[3] = 0;
      param_1[2] = 0;
      *(undefined4 *)(param_1 + 4) = 0x3f800000;
      if (param_3 != 0) {
        lVar3 = 0;
        plVar4 = param_1 + 2;
        piVar5 = param_2 + param_3 * 8;
        do {
          iVar1 = *param_2;
          uVar13 = (ulong)iVar1;
          uVar6 = param_1[1];
          if (uVar6 != 0) {
            uVar7 = uVar6 - 1;
            if ((uVar6 & uVar7) == 0) {
              unaff_x28 = uVar7 & uVar13;
            }
            else {
              unaff_x28 = uVar13;
              if (uVar6 <= uVar13) {
                uVar9 = 0;
                if (uVar6 != 0) {
                  uVar9 = uVar13 / uVar6;
                }
                unaff_x28 = uVar13 - uVar9 * uVar6;
              }
            }
            plVar8 = *(long **)(*param_1 + unaff_x28 * 8);
            if (plVar8 != (long *)0x0) {
              do {
                while( true ) {
                  plVar8 = (long *)*plVar8;
                  if (plVar8 == (long *)0x0) goto LAB_10003f870;
                  uVar9 = plVar8[1];
                  if (uVar9 != uVar13) break;
                  if (*(int *)(plVar8 + 2) == iVar1) goto LAB_10003f9c0;
                }
                if ((uVar6 & uVar7) == 0) {
                  uVar9 = uVar9 & uVar7;
                }
                else if (uVar6 <= uVar9) {
                  uVar2 = 0;
                  if (uVar6 != 0) {
                    uVar2 = uVar9 / uVar6;
                  }
                  uVar9 = uVar9 - uVar2 * uVar6;
                }
              } while (uVar9 == unaff_x28);
            }
          }
LAB_10003f870:
          plVar8 = (long *)0x30;
          func_0x000107c60e20();
          *plVar8 = 0;
          plVar8[1] = uVar13;
          *(int *)(plVar8 + 2) = iVar1;
          if (*(char *)((long)param_2 + 0x1f) < '\0') {
            FUN_100033dac(plVar8 + 3,*(undefined8 *)(param_2 + 2),*(undefined8 *)(param_2 + 4));
            lVar3 = param_1[3];
          }
          else {
            lVar15 = *(long *)(param_2 + 4);
            lVar14 = *(long *)(param_2 + 2);
            plVar8[5] = *(long *)(param_2 + 6);
            plVar8[4] = lVar15;
            plVar8[3] = lVar14;
          }
          if ((uVar6 == 0) || (*(float *)(param_1 + 4) * (float)uVar6 < (float)(lVar3 + 1))) {
            uVar7 = 1;
            if (2 < uVar6) {
              uVar7 = (ulong)((uVar6 & uVar6 - 1) != 0);
            }
            uVar7 = uVar7 | uVar6 << 1;
            uVar6 = (ulong)((float)(lVar3 + 1) / *(float *)(param_1 + 4));
            if (uVar7 <= uVar6) {
              uVar7 = uVar6;
            }
            FUN_10003fa3c(param_1,uVar7);
            uVar6 = param_1[1];
            if ((uVar6 & uVar6 - 1) == 0) {
              unaff_x28 = uVar6 - 1 & uVar13;
            }
            else {
              unaff_x28 = uVar13;
              if (uVar6 <= uVar13) {
                uVar7 = 0;
                if (uVar6 != 0) {
                  uVar7 = uVar13 / uVar6;
                }
                unaff_x28 = uVar13 - uVar7 * uVar6;
              }
            }
          }
          lVar3 = *param_1;
          plVar10 = *(long **)(lVar3 + unaff_x28 * 8);
          if (plVar10 == (long *)0x0) {
            *plVar8 = *plVar4;
            *plVar4 = (long)plVar8;
            *(long **)(lVar3 + unaff_x28 * 8) = plVar4;
            if (*plVar8 != 0) {
              uVar13 = *(ulong *)(*plVar8 + 8);
              if ((uVar6 & uVar6 - 1) == 0) {
                uVar13 = uVar13 & uVar6 - 1;
              }
              else if (uVar6 <= uVar13) {
                uVar7 = 0;
                if (uVar6 != 0) {
                  uVar7 = uVar13 / uVar6;
                }
                uVar13 = uVar13 - uVar7 * uVar6;
              }
              *(long **)(*param_1 + uVar13 * 8) = plVar8;
            }
          }
          else {
            *plVar8 = *plVar10;
            *plVar10 = (long)plVar8;
          }
          lVar3 = param_1[3] + 1;
          param_1[3] = lVar3;
LAB_10003f9c0:
          param_2 = param_2 + 8;
        } while (param_2 != piVar5);
      }
      return param_1;
    }
    lVar3 = (long)param_2 << 3;
    func_0x000107c60e20();
    plVar4 = (long *)*param_1;
    *param_1 = lVar3;
    if (plVar4 != (long *)0x0) {
      func_0x000107c60e14();
    }
    piVar5 = (int *)0x0;
    param_1[1] = (long)param_2;
    do {
      *(undefined8 *)(*param_1 + (long)piVar5 * 8) = 0;
      piVar5 = (int *)((long)piVar5 + 1);
    } while (param_2 != piVar5);
    plVar8 = (long *)param_1[2];
    if (plVar8 != (long *)0x0) {
      piVar5 = (int *)plVar8[1];
      uVar6 = (long)param_2 - 1;
      if (((ulong)param_2 & uVar6) == 0) {
        piVar5 = (int *)((ulong)piVar5 & uVar6);
      }
      else if (param_2 <= piVar5) {
        uVar13 = 0;
        if (param_2 != (int *)0x0) {
          uVar13 = (ulong)piVar5 / (ulong)param_2;
        }
        piVar5 = (int *)((long)piVar5 - uVar13 * (long)param_2);
      }
      *(long **)(*param_1 + (long)piVar5 * 8) = param_1 + 2;
      plVar10 = (long *)*plVar8;
      while (plVar10 != (long *)0x0) {
        piVar12 = (int *)plVar10[1];
        if (((ulong)param_2 & uVar6) == 0) {
          piVar12 = (int *)((ulong)piVar12 & uVar6);
        }
        else if (param_2 <= piVar12) {
          uVar13 = 0;
          if (param_2 != (int *)0x0) {
            uVar13 = (ulong)piVar12 / (ulong)param_2;
          }
          piVar12 = (int *)((long)piVar12 - uVar13 * (long)param_2);
        }
        plVar11 = plVar10;
        if (piVar12 != piVar5) {
          lVar3 = *param_1;
          if (*(long *)(lVar3 + (long)piVar12 * 8) == 0) {
            *(long **)(lVar3 + (long)piVar12 * 8) = plVar8;
            piVar5 = piVar12;
          }
          else {
            *plVar8 = *plVar10;
            *plVar10 = **(undefined8 **)(lVar3 + (long)piVar12 * 8);
            **(long **)(lVar3 + (long)piVar12 * 8) = (long)plVar10;
            plVar11 = plVar8;
          }
        }
        plVar8 = plVar11;
        plVar10 = (long *)*plVar11;
      }
    }
  }
  return plVar4;
}



/* Entry: 10003f798; end: 10003fa3b;  */

long * FUN_10003f798(long *param_1,int *param_2,long param_3)

{
  long *plVar1;
  int *piVar2;
  int iVar3;
  ulong uVar4;
  ulong uVar5;
  long *plVar6;
  ulong uVar7;
  long *plVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  ulong unaff_x28;
  long lVar12;
  long lVar13;
  
  param_1[1] = 0;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 4) = 0x3f800000;
  if (param_3 != 0) {
    lVar9 = 0;
    plVar1 = param_1 + 2;
    piVar2 = param_2 + param_3 * 8;
    do {
      iVar3 = *param_2;
      uVar11 = (ulong)iVar3;
      uVar10 = param_1[1];
      if (uVar10 != 0) {
        uVar5 = uVar10 - 1;
        if ((uVar10 & uVar5) == 0) {
          unaff_x28 = uVar5 & uVar11;
        }
        else {
          unaff_x28 = uVar11;
          if (uVar10 <= uVar11) {
            uVar7 = 0;
            if (uVar10 != 0) {
              uVar7 = uVar11 / uVar10;
            }
            unaff_x28 = uVar11 - uVar7 * uVar10;
          }
        }
        plVar6 = *(long **)(*param_1 + unaff_x28 * 8);
        if (plVar6 != (long *)0x0) {
          do {
            while( true ) {
              plVar6 = (long *)*plVar6;
              if (plVar6 == (long *)0x0) goto LAB_10003f870;
              uVar7 = plVar6[1];
              if (uVar7 != uVar11) break;
              if (*(int *)(plVar6 + 2) == iVar3) goto LAB_10003f9c0;
            }
            if ((uVar10 & uVar5) == 0) {
              uVar7 = uVar7 & uVar5;
            }
            else if (uVar10 <= uVar7) {
              uVar4 = 0;
              if (uVar10 != 0) {
                uVar4 = uVar7 / uVar10;
              }
              uVar7 = uVar7 - uVar4 * uVar10;
            }
          } while (uVar7 == unaff_x28);
        }
      }
LAB_10003f870:
      plVar6 = (long *)0x30;
      func_0x000107c60e20();
      *plVar6 = 0;
      plVar6[1] = uVar11;
      *(int *)(plVar6 + 2) = iVar3;
      if (*(char *)((long)param_2 + 0x1f) < '\0') {
        FUN_100033dac(plVar6 + 3,*(undefined8 *)(param_2 + 2),*(undefined8 *)(param_2 + 4));
        lVar9 = param_1[3];
      }
      else {
        lVar13 = *(long *)(param_2 + 4);
        lVar12 = *(long *)(param_2 + 2);
        plVar6[5] = *(long *)(param_2 + 6);
        plVar6[4] = lVar13;
        plVar6[3] = lVar12;
      }
      if ((uVar10 == 0) || (*(float *)(param_1 + 4) * (float)uVar10 < (float)(lVar9 + 1))) {
        uVar5 = 1;
        if (2 < uVar10) {
          uVar5 = (ulong)((uVar10 & uVar10 - 1) != 0);
        }
        uVar5 = uVar5 | uVar10 << 1;
        uVar10 = (ulong)((float)(lVar9 + 1) / *(float *)(param_1 + 4));
        if (uVar5 <= uVar10) {
          uVar5 = uVar10;
        }
        FUN_10003fa3c(param_1,uVar5);
        uVar10 = param_1[1];
        if ((uVar10 & uVar10 - 1) == 0) {
          unaff_x28 = uVar10 - 1 & uVar11;
        }
        else {
          unaff_x28 = uVar11;
          if (uVar10 <= uVar11) {
            uVar5 = 0;
            if (uVar10 != 0) {
              uVar5 = uVar11 / uVar10;
            }
            unaff_x28 = uVar11 - uVar5 * uVar10;
          }
        }
      }
      lVar9 = *param_1;
      plVar8 = *(long **)(lVar9 + unaff_x28 * 8);
      if (plVar8 == (long *)0x0) {
        *plVar6 = *plVar1;
        *plVar1 = (long)plVar6;
        *(long **)(lVar9 + unaff_x28 * 8) = plVar1;
        if (*plVar6 != 0) {
          uVar11 = *(ulong *)(*plVar6 + 8);
          if ((uVar10 & uVar10 - 1) == 0) {
            uVar11 = uVar11 & uVar10 - 1;
          }
          else if (uVar10 <= uVar11) {
            uVar5 = 0;
            if (uVar10 != 0) {
              uVar5 = uVar11 / uVar10;
            }
            uVar11 = uVar11 - uVar5 * uVar10;
          }
          *(long **)(*param_1 + uVar11 * 8) = plVar6;
        }
      }
      else {
        *plVar6 = *plVar8;
        *plVar8 = (long)plVar6;
      }
      lVar9 = param_1[3] + 1;
      param_1[3] = lVar9;
LAB_10003f9c0:
      param_2 = param_2 + 8;
    } while (param_2 != piVar2);
  }
  return param_1;
}



/* Entry: 10003fa3c; end: 10003fb0b;  */

long * FUN_10003fa3c(long *param_1,long *param_2,long param_3)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  long *plVar4;
  ulong uVar5;
  ulong uVar6;
  long *plVar7;
  ulong uVar8;
  long *plVar9;
  long *plVar10;
  long *plVar11;
  long *plVar12;
  ulong uVar13;
  ulong unaff_x28;
  long lVar14;
  long lVar15;
  
  plVar4 = param_1;
  if ((long)param_2 - 1U == 0) {
    param_2 = (long *)0x2;
  }
  else if (((ulong)param_2 & (long)param_2 - 1U) != 0) {
    func_0x000107c60c44();
    plVar4 = param_2;
  }
  plVar12 = (long *)param_1[1];
  if (plVar12 < param_2) {
LAB_10003fa84:
    if (param_2 == (long *)0x0) {
      plVar4 = (long *)*param_1;
      *param_1 = 0;
      if (plVar4 != (long *)0x0) {
        func_0x000107c60e14();
      }
      param_1[1] = 0;
    }
    else {
      if ((ulong)param_2 >> 0x3d != 0) {
        func_0x000104c4f740();
        param_1[1] = 0;
        *param_1 = 0;
        param_1[3] = 0;
        param_1[2] = 0;
        *(int *)(param_1 + 4) = 0x3f800000;
        if (param_3 != 0) {
          lVar3 = 0;
          plVar4 = param_1 + 2;
          plVar12 = param_2 + param_3 * 4;
          do {
            iVar1 = (int)*param_2;
            uVar13 = (ulong)iVar1;
            uVar5 = param_1[1];
            if (uVar5 != 0) {
              uVar6 = uVar5 - 1;
              if ((uVar5 & uVar6) == 0) {
                unaff_x28 = uVar6 & uVar13;
              }
              else {
                unaff_x28 = uVar13;
                if (uVar5 <= uVar13) {
                  uVar8 = 0;
                  if (uVar5 != 0) {
                    uVar8 = uVar13 / uVar5;
                  }
                  unaff_x28 = uVar13 - uVar8 * uVar5;
                }
              }
              plVar7 = *(long **)(*param_1 + unaff_x28 * 8);
              if (plVar7 != (long *)0x0) {
                do {
                  while( true ) {
                    plVar7 = (long *)*plVar7;
                    if (plVar7 == (long *)0x0) goto LAB_10003fd20;
                    uVar8 = plVar7[1];
                    if (uVar8 != uVar13) break;
                    if (*(int *)(plVar7 + 2) == iVar1) goto LAB_10003fe70;
                  }
                  if ((uVar5 & uVar6) == 0) {
                    uVar8 = uVar8 & uVar6;
                  }
                  else if (uVar5 <= uVar8) {
                    uVar2 = 0;
                    if (uVar5 != 0) {
                      uVar2 = uVar8 / uVar5;
                    }
                    uVar8 = uVar8 - uVar2 * uVar5;
                  }
                } while (uVar8 == unaff_x28);
              }
            }
LAB_10003fd20:
            plVar7 = (long *)0x30;
            func_0x000107c60e20();
            *plVar7 = 0;
            plVar7[1] = uVar13;
            *(int *)(plVar7 + 2) = iVar1;
            if (*(char *)((long)param_2 + 0x1f) < '\0') {
              FUN_100033dac(plVar7 + 3,param_2[1],param_2[2]);
              lVar3 = param_1[3];
            }
            else {
              lVar15 = param_2[2];
              lVar14 = param_2[1];
              plVar7[5] = param_2[3];
              plVar7[4] = lVar15;
              plVar7[3] = lVar14;
            }
            if ((uVar5 == 0) || (*(float *)(param_1 + 4) * (float)uVar5 < (float)(lVar3 + 1))) {
              uVar6 = 1;
              if (2 < uVar5) {
                uVar6 = (ulong)((uVar5 & uVar5 - 1) != 0);
              }
              uVar6 = uVar6 | uVar5 << 1;
              uVar5 = (ulong)((float)(lVar3 + 1) / *(float *)(param_1 + 4));
              if (uVar6 <= uVar5) {
                uVar6 = uVar5;
              }
              FUN_10003feec(param_1,uVar6);
              uVar5 = param_1[1];
              if ((uVar5 & uVar5 - 1) == 0) {
                unaff_x28 = uVar5 - 1 & uVar13;
              }
              else {
                unaff_x28 = uVar13;
                if (uVar5 <= uVar13) {
                  uVar6 = 0;
                  if (uVar5 != 0) {
                    uVar6 = uVar13 / uVar5;
                  }
                  unaff_x28 = uVar13 - uVar6 * uVar5;
                }
              }
            }
            lVar3 = *param_1;
            plVar9 = *(long **)(lVar3 + unaff_x28 * 8);
            if (plVar9 == (long *)0x0) {
              *plVar7 = *plVar4;
              *plVar4 = (long)plVar7;
              *(long **)(lVar3 + unaff_x28 * 8) = plVar4;
              if (*plVar7 != 0) {
                uVar13 = *(ulong *)(*plVar7 + 8);
                if ((uVar5 & uVar5 - 1) == 0) {
                  uVar13 = uVar13 & uVar5 - 1;
                }
                else if (uVar5 <= uVar13) {
                  uVar6 = 0;
                  if (uVar5 != 0) {
                    uVar6 = uVar13 / uVar5;
                  }
                  uVar13 = uVar13 - uVar6 * uVar5;
                }
                *(long **)(*param_1 + uVar13 * 8) = plVar7;
              }
            }
            else {
              *plVar7 = *plVar9;
              *plVar9 = (long)plVar7;
            }
            lVar3 = param_1[3] + 1;
            param_1[3] = lVar3;
LAB_10003fe70:
            param_2 = param_2 + 4;
          } while (param_2 != plVar12);
        }
        return param_1;
      }
      lVar3 = (long)param_2 << 3;
      func_0x000107c60e20();
      plVar4 = (long *)*param_1;
      *param_1 = lVar3;
      if (plVar4 != (long *)0x0) {
        func_0x000107c60e14();
      }
      plVar12 = (long *)0x0;
      param_1[1] = (long)param_2;
      do {
        *(undefined8 *)(*param_1 + (long)plVar12 * 8) = 0;
        plVar12 = (long *)((long)plVar12 + 1);
      } while (param_2 != plVar12);
      plVar12 = (long *)param_1[2];
      if (plVar12 != (long *)0x0) {
        plVar7 = (long *)plVar12[1];
        uVar5 = (long)param_2 - 1;
        if (((ulong)param_2 & uVar5) == 0) {
          plVar7 = (long *)((ulong)plVar7 & uVar5);
        }
        else if (param_2 <= plVar7) {
          uVar13 = 0;
          if (param_2 != (long *)0x0) {
            uVar13 = (ulong)plVar7 / (ulong)param_2;
          }
          plVar7 = (long *)((long)plVar7 - uVar13 * (long)param_2);
        }
        *(long **)(*param_1 + (long)plVar7 * 8) = param_1 + 2;
        plVar9 = (long *)*plVar12;
        while (plVar9 != (long *)0x0) {
          plVar11 = (long *)plVar9[1];
          if (((ulong)param_2 & uVar5) == 0) {
            plVar11 = (long *)((ulong)plVar11 & uVar5);
          }
          else if (param_2 <= plVar11) {
            uVar13 = 0;
            if (param_2 != (long *)0x0) {
              uVar13 = (ulong)plVar11 / (ulong)param_2;
            }
            plVar11 = (long *)((long)plVar11 - uVar13 * (long)param_2);
          }
          plVar10 = plVar9;
          if (plVar11 != plVar7) {
            lVar3 = *param_1;
            if (*(long *)(lVar3 + (long)plVar11 * 8) == 0) {
              *(long **)(lVar3 + (long)plVar11 * 8) = plVar12;
              plVar7 = plVar11;
            }
            else {
              *plVar12 = *plVar9;
              *plVar9 = **(undefined8 **)(lVar3 + (long)plVar11 * 8);
              **(long **)(lVar3 + (long)plVar11 * 8) = (long)plVar9;
              plVar10 = plVar12;
            }
          }
          plVar12 = plVar10;
          plVar9 = (long *)*plVar10;
        }
      }
    }
    return plVar4;
  }
  if (param_2 < plVar12) {
    plVar4 = (long *)(long)((float)(ulong)param_1[3] / *(float *)(param_1 + 4));
    if ((plVar12 < (long *)0x3) || (((ulong)plVar12 & (long)plVar12 - 1U) != 0)) {
      func_0x000107c60c44();
    }
    else if ((long *)0x1 < plVar4) {
      plVar4 = (long *)(1L << (-LZCOUNT((long)plVar4 + -1) & 0x3fU));
    }
    if (param_2 <= plVar4) {
      param_2 = plVar4;
    }
    if (param_2 < plVar12) goto LAB_10003fa84;
  }
  return plVar4;
}



/* Entry: 10003fb0c; end: 10003fc47;  */

long * FUN_10003fb0c(long *param_1,int *param_2,long param_3)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  long *plVar4;
  int *piVar5;
  ulong uVar6;
  ulong uVar7;
  long *plVar8;
  ulong uVar9;
  long *plVar10;
  long *plVar11;
  int *piVar12;
  ulong uVar13;
  ulong unaff_x28;
  long lVar14;
  long lVar15;
  
  if (param_2 == (int *)0x0) {
    plVar4 = (long *)*param_1;
    *param_1 = 0;
    if (plVar4 != (long *)0x0) {
      func_0x000107c60e14();
    }
    param_1[1] = 0;
  }
  else {
    if ((ulong)param_2 >> 0x3d != 0) {
      func_0x000104c4f740();
      param_1[1] = 0;
      *param_1 = 0;
      param_1[3] = 0;
      param_1[2] = 0;
      *(undefined4 *)(param_1 + 4) = 0x3f800000;
      if (param_3 != 0) {
        lVar3 = 0;
        plVar4 = param_1 + 2;
        piVar5 = param_2 + param_3 * 8;
        do {
          iVar1 = *param_2;
          uVar13 = (ulong)iVar1;
          uVar6 = param_1[1];
          if (uVar6 != 0) {
            uVar7 = uVar6 - 1;
            if ((uVar6 & uVar7) == 0) {
              unaff_x28 = uVar7 & uVar13;
            }
            else {
              unaff_x28 = uVar13;
              if (uVar6 <= uVar13) {
                uVar9 = 0;
                if (uVar6 != 0) {
                  uVar9 = uVar13 / uVar6;
                }
                unaff_x28 = uVar13 - uVar9 * uVar6;
              }
            }
            plVar8 = *(long **)(*param_1 + unaff_x28 * 8);
            if (plVar8 != (long *)0x0) {
              do {
                while( true ) {
                  plVar8 = (long *)*plVar8;
                  if (plVar8 == (long *)0x0) goto LAB_10003fd20;
                  uVar9 = plVar8[1];
                  if (uVar9 != uVar13) break;
                  if (*(int *)(plVar8 + 2) == iVar1) goto LAB_10003fe70;
                }
                if ((uVar6 & uVar7) == 0) {
                  uVar9 = uVar9 & uVar7;
                }
                else if (uVar6 <= uVar9) {
                  uVar2 = 0;
                  if (uVar6 != 0) {
                    uVar2 = uVar9 / uVar6;
                  }
                  uVar9 = uVar9 - uVar2 * uVar6;
                }
              } while (uVar9 == unaff_x28);
            }
          }
LAB_10003fd20:
          plVar8 = (long *)0x30;
          func_0x000107c60e20();
          *plVar8 = 0;
          plVar8[1] = uVar13;
          *(int *)(plVar8 + 2) = iVar1;
          if (*(char *)((long)param_2 + 0x1f) < '\0') {
            FUN_100033dac(plVar8 + 3,*(undefined8 *)(param_2 + 2),*(undefined8 *)(param_2 + 4));
            lVar3 = param_1[3];
          }
          else {
            lVar15 = *(long *)(param_2 + 4);
            lVar14 = *(long *)(param_2 + 2);
            plVar8[5] = *(long *)(param_2 + 6);
            plVar8[4] = lVar15;
            plVar8[3] = lVar14;
          }
          if ((uVar6 == 0) || (*(float *)(param_1 + 4) * (float)uVar6 < (float)(lVar3 + 1))) {
            uVar7 = 1;
            if (2 < uVar6) {
              uVar7 = (ulong)((uVar6 & uVar6 - 1) != 0);
            }
            uVar7 = uVar7 | uVar6 << 1;
            uVar6 = (ulong)((float)(lVar3 + 1) / *(float *)(param_1 + 4));
            if (uVar7 <= uVar6) {
              uVar7 = uVar6;
            }
            FUN_10003feec(param_1,uVar7);
            uVar6 = param_1[1];
            if ((uVar6 & uVar6 - 1) == 0) {
              unaff_x28 = uVar6 - 1 & uVar13;
            }
            else {
              unaff_x28 = uVar13;
              if (uVar6 <= uVar13) {
                uVar7 = 0;
                if (uVar6 != 0) {
                  uVar7 = uVar13 / uVar6;
                }
                unaff_x28 = uVar13 - uVar7 * uVar6;
              }
            }
          }
          lVar3 = *param_1;
          plVar10 = *(long **)(lVar3 + unaff_x28 * 8);
          if (plVar10 == (long *)0x0) {
            *plVar8 = *plVar4;
            *plVar4 = (long)plVar8;
            *(long **)(lVar3 + unaff_x28 * 8) = plVar4;
            if (*plVar8 != 0) {
              uVar13 = *(ulong *)(*plVar8 + 8);
              if ((uVar6 & uVar6 - 1) == 0) {
                uVar13 = uVar13 & uVar6 - 1;
              }
              else if (uVar6 <= uVar13) {
                uVar7 = 0;
                if (uVar6 != 0) {
                  uVar7 = uVar13 / uVar6;
                }
                uVar13 = uVar13 - uVar7 * uVar6;
              }
              *(long **)(*param_1 + uVar13 * 8) = plVar8;
            }
          }
          else {
            *plVar8 = *plVar10;
            *plVar10 = (long)plVar8;
          }
          lVar3 = param_1[3] + 1;
          param_1[3] = lVar3;
LAB_10003fe70:
          param_2 = param_2 + 8;
        } while (param_2 != piVar5);
      }
      return param_1;
    }
    lVar3 = (long)param_2 << 3;
    func_0x000107c60e20();
    plVar4 = (long *)*param_1;
    *param_1 = lVar3;
    if (plVar4 != (long *)0x0) {
      func_0x000107c60e14();
    }
    piVar5 = (int *)0x0;
    param_1[1] = (long)param_2;
    do {
      *(undefined8 *)(*param_1 + (long)piVar5 * 8) = 0;
      piVar5 = (int *)((long)piVar5 + 1);
    } while (param_2 != piVar5);
    plVar8 = (long *)param_1[2];
    if (plVar8 != (long *)0x0) {
      piVar5 = (int *)plVar8[1];
      uVar6 = (long)param_2 - 1;
      if (((ulong)param_2 & uVar6) == 0) {
        piVar5 = (int *)((ulong)piVar5 & uVar6);
      }
      else if (param_2 <= piVar5) {
        uVar13 = 0;
        if (param_2 != (int *)0x0) {
          uVar13 = (ulong)piVar5 / (ulong)param_2;
        }
        piVar5 = (int *)((long)piVar5 - uVar13 * (long)param_2);
      }
      *(long **)(*param_1 + (long)piVar5 * 8) = param_1 + 2;
      plVar10 = (long *)*plVar8;
      while (plVar10 != (long *)0x0) {
        piVar12 = (int *)plVar10[1];
        if (((ulong)param_2 & uVar6) == 0) {
          piVar12 = (int *)((ulong)piVar12 & uVar6);
        }
        else if (param_2 <= piVar12) {
          uVar13 = 0;
          if (param_2 != (int *)0x0) {
            uVar13 = (ulong)piVar12 / (ulong)param_2;
          }
          piVar12 = (int *)((long)piVar12 - uVar13 * (long)param_2);
        }
        plVar11 = plVar10;
        if (piVar12 != piVar5) {
          lVar3 = *param_1;
          if (*(long *)(lVar3 + (long)piVar12 * 8) == 0) {
            *(long **)(lVar3 + (long)piVar12 * 8) = plVar8;
            piVar5 = piVar12;
          }
          else {
            *plVar8 = *plVar10;
            *plVar10 = **(undefined8 **)(lVar3 + (long)piVar12 * 8);
            **(long **)(lVar3 + (long)piVar12 * 8) = (long)plVar10;
            plVar11 = plVar8;
          }
        }
        plVar8 = plVar11;
        plVar10 = (long *)*plVar11;
      }
    }
  }
  return plVar4;
}



/* Entry: 10003fc48; end: 10003feeb;  */

long * FUN_10003fc48(long *param_1,int *param_2,long param_3)

{
  long *plVar1;
  int *piVar2;
  int iVar3;
  ulong uVar4;
  ulong uVar5;
  long *plVar6;
  ulong uVar7;
  long *plVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  ulong unaff_x28;
  long lVar12;
  long lVar13;
  
  param_1[1] = 0;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 4) = 0x3f800000;
  if (param_3 != 0) {
    lVar9 = 0;
    plVar1 = param_1 + 2;
    piVar2 = param_2 + param_3 * 8;
    do {
      iVar3 = *param_2;
      uVar11 = (ulong)iVar3;
      uVar10 = param_1[1];
      if (uVar10 != 0) {
        uVar5 = uVar10 - 1;
        if ((uVar10 & uVar5) == 0) {
          unaff_x28 = uVar5 & uVar11;
        }
        else {
          unaff_x28 = uVar11;
          if (uVar10 <= uVar11) {
            uVar7 = 0;
            if (uVar10 != 0) {
              uVar7 = uVar11 / uVar10;
            }
            unaff_x28 = uVar11 - uVar7 * uVar10;
          }
        }
        plVar6 = *(long **)(*param_1 + unaff_x28 * 8);
        if (plVar6 != (long *)0x0) {
          do {
            while( true ) {
              plVar6 = (long *)*plVar6;
              if (plVar6 == (long *)0x0) goto LAB_10003fd20;
              uVar7 = plVar6[1];
              if (uVar7 != uVar11) break;
              if (*(int *)(plVar6 + 2) == iVar3) goto LAB_10003fe70;
            }
            if ((uVar10 & uVar5) == 0) {
              uVar7 = uVar7 & uVar5;
            }
            else if (uVar10 <= uVar7) {
              uVar4 = 0;
              if (uVar10 != 0) {
                uVar4 = uVar7 / uVar10;
              }
              uVar7 = uVar7 - uVar4 * uVar10;
            }
          } while (uVar7 == unaff_x28);
        }
      }
LAB_10003fd20:
      plVar6 = (long *)0x30;
      func_0x000107c60e20();
      *plVar6 = 0;
      plVar6[1] = uVar11;
      *(int *)(plVar6 + 2) = iVar3;
      if (*(char *)((long)param_2 + 0x1f) < '\0') {
        FUN_100033dac(plVar6 + 3,*(undefined8 *)(param_2 + 2),*(undefined8 *)(param_2 + 4));
        lVar9 = param_1[3];
      }
      else {
        lVar13 = *(long *)(param_2 + 4);
        lVar12 = *(long *)(param_2 + 2);
        plVar6[5] = *(long *)(param_2 + 6);
        plVar6[4] = lVar13;
        plVar6[3] = lVar12;
      }
      if ((uVar10 == 0) || (*(float *)(param_1 + 4) * (float)uVar10 < (float)(lVar9 + 1))) {
        uVar5 = 1;
        if (2 < uVar10) {
          uVar5 = (ulong)((uVar10 & uVar10 - 1) != 0);
        }
        uVar5 = uVar5 | uVar10 << 1;
        uVar10 = (ulong)((float)(lVar9 + 1) / *(float *)(param_1 + 4));
        if (uVar5 <= uVar10) {
          uVar5 = uVar10;
        }
        FUN_10003feec(param_1,uVar5);
        uVar10 = param_1[1];
        if ((uVar10 & uVar10 - 1) == 0) {
          unaff_x28 = uVar10 - 1 & uVar11;
        }
        else {
          unaff_x28 = uVar11;
          if (uVar10 <= uVar11) {
            uVar5 = 0;
            if (uVar10 != 0) {
              uVar5 = uVar11 / uVar10;
            }
            unaff_x28 = uVar11 - uVar5 * uVar10;
          }
        }
      }
      lVar9 = *param_1;
      plVar8 = *(long **)(lVar9 + unaff_x28 * 8);
      if (plVar8 == (long *)0x0) {
        *plVar6 = *plVar1;
        *plVar1 = (long)plVar6;
        *(long **)(lVar9 + unaff_x28 * 8) = plVar1;
        if (*plVar6 != 0) {
          uVar11 = *(ulong *)(*plVar6 + 8);
          if ((uVar10 & uVar10 - 1) == 0) {
            uVar11 = uVar11 & uVar10 - 1;
          }
          else if (uVar10 <= uVar11) {
            uVar5 = 0;
            if (uVar10 != 0) {
              uVar5 = uVar11 / uVar10;
            }
            uVar11 = uVar11 - uVar5 * uVar10;
          }
          *(long **)(*param_1 + uVar11 * 8) = plVar6;
        }
      }
      else {
        *plVar6 = *plVar8;
        *plVar8 = (long)plVar6;
      }
      lVar9 = param_1[3] + 1;
      param_1[3] = lVar9;
LAB_10003fe70:
      param_2 = param_2 + 8;
    } while (param_2 != piVar2);
  }
  return param_1;
}



/* Entry: 10003feec; end: 10003ffbb;  */

/* WARNING: Possible PIC construction at 0x0001000401b8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001000401bc) */

void FUN_10003feec(long *param_1,ulong param_2)

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
  undefined1 auVar10 [16];
  
  if (param_2 - 1 == 0) {
    param_2 = 2;
  }
  else if ((param_2 & param_2 - 1) != 0) {
    func_0x000107c60c44();
  }
  uVar9 = param_1[1];
  if (uVar9 < param_2) {
LAB_10003ff34:
    if (param_2 == 0) {
      lVar2 = *param_1;
      *param_1 = 0;
      if (lVar2 != 0) {
        func_0x000107c60e14();
      }
      param_1[1] = 0;
    }
    else {
      if (param_2 >> 0x3d != 0) {
        func_0x000104c4f740();
        uRam000000011373c330 = 0x405b3883126e978d;
        auVar10 = NEON_fmov(0x3fe0000000000000,8);
        uRam000000011373c318 = auVar10._8_8_;
        uRam000000011373c310 = auVar10._0_8_;
        uRam000000011373c328 = 0x4059000000000000;
        uRam000000011373c320 = 0x4057c3020c49ba5e;
        FUN_10002d4d8(0x11373c510,&UNK_10f5892f8);
        FUN_10002d4d8(0x11373c528,&UNK_10f589312);
        FUN_10002d4d8(0x11373c540,&UNK_10f589345);
        FUN_10002d4d8(0x11373c558,&UNK_10f58936f);
        FUN_10002d4d8(0x11373c570,&UNK_10f58938e);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd844. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR____cxa_atexit_11034bd48)(&UNK_1098f8b6c,0,0x100000000);
        return;
      }
      lVar2 = param_2 << 3;
      func_0x000107c60e20();
      lVar3 = *param_1;
      *param_1 = lVar2;
      if (lVar3 != 0) {
        func_0x000107c60e14();
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
      func_0x000107c60c44();
    }
    else if (1 < uVar4) {
      uVar4 = 1L << (-LZCOUNT(uVar4 - 1) & 0x3fU);
    }
    if (param_2 <= uVar4) {
      param_2 = uVar4;
    }
    if (param_2 < uVar9) goto LAB_10003ff34;
  }
  return;
}



/* Entry: 10003ffbc; end: 1000400f7;  */

/* WARNING: Possible PIC construction at 0x0001000401b8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001000401bc) */

void FUN_10003ffbc(long *param_1,ulong param_2)

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
  undefined1 auVar10 [16];
  
  if (param_2 == 0) {
    lVar2 = *param_1;
    *param_1 = 0;
    if (lVar2 != 0) {
      func_0x000107c60e14();
    }
    param_1[1] = 0;
  }
  else {
    if (param_2 >> 0x3d != 0) {
      func_0x000104c4f740();
      uRam000000011373c330 = 0x405b3883126e978d;
      auVar10 = NEON_fmov(0x3fe0000000000000,8);
      uRam000000011373c318 = auVar10._8_8_;
      uRam000000011373c310 = auVar10._0_8_;
      uRam000000011373c328 = 0x4059000000000000;
      uRam000000011373c320 = 0x4057c3020c49ba5e;
      FUN_10002d4d8(0x11373c510,&UNK_10f5892f8);
      FUN_10002d4d8(0x11373c528,&UNK_10f589312);
      FUN_10002d4d8(0x11373c540,&UNK_10f589345);
      FUN_10002d4d8(0x11373c558,&UNK_10f58936f);
      FUN_10002d4d8(0x11373c570,&UNK_10f58938e);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd844. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR____cxa_atexit_11034bd48)(&UNK_1098f8b6c,0,0x100000000);
      return;
    }
    lVar2 = param_2 << 3;
    func_0x000107c60e20();
    lVar3 = *param_1;
    *param_1 = lVar2;
    if (lVar3 != 0) {
      func_0x000107c60e14();
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



/* Entry: 1000400f8; end: 10004020f;  */

/* WARNING: Possible PIC construction at 0x0001000401b8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001000401bc) */

void FUN_1000400f8(void)

{
  undefined1 auVar1 [16];
  
  uRam000000011373c330 = 0x405b3883126e978d;
  auVar1 = NEON_fmov(0x3fe0000000000000,8);
  uRam000000011373c318 = auVar1._8_8_;
  uRam000000011373c310 = auVar1._0_8_;
  uRam000000011373c328 = 0x4059000000000000;
  uRam000000011373c320 = 0x4057c3020c49ba5e;
  FUN_10002d4d8(0x11373c510,&UNK_10f5892f8);
  FUN_10002d4d8(0x11373c528,&UNK_10f589312);
  FUN_10002d4d8(0x11373c540,&UNK_10f589345);
  FUN_10002d4d8(0x11373c558,&UNK_10f58936f);
  FUN_10002d4d8(0x11373c570,&UNK_10f58938e);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd844. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR____cxa_atexit_11034bd48)(&UNK_1098f8b6c,0,0x100000000);
  return;
}



/* Entry: 100040210; end: 100040253;  */

void FUN_100040210(void)

{
  FUN_10002d4d8(0x11373c588,&UNK_10f636fe2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd844. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR____cxa_atexit_11034bd48)
            (PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED1Ev_110346340,
             0x11373c588,0x100000000);
  return;
}



/* Entry: 100040254; end: 1000403bf;  */

void FUN_100040254(void)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  code *pcVar4;
  ulong uVar5;
  ulong uVar6;
  undefined1 auVar7 [16];
  undefined8 auStack_a0 [5];
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  if ((bRam000000011373c5a0 & 1) != 0) {
    return;
  }
  bRam000000011373c5a0 = 1;
  auStack_a0[1] = 0;
  auStack_a0[0] = 0;
  auStack_a0[3] = 0;
  auStack_a0[2] = 0;
  auVar7 = NEON_fmov(0xbff0000000000000,8);
  uStack_78 = auVar7._8_8_;
  auStack_a0[4] = auVar7._0_8_;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uRam000000011373c5b0 = 0;
  uRam000000011373c5b8 = 0;
  uVar5 = 0x60;
  uStack_50 = auStack_a0[4];
  uStack_48 = uStack_78;
  func_0x000107c610a0();
  if (uVar5 != 0) {
    uRam000000011373c5b8 = 0xc;
    uVar6 = uVar5 >> 3 & 1;
    uVar2 = uVar6;
    if ((uVar5 & 7) != 0) {
      uVar2 = 0xc;
    }
    uRam000000011373c5b0 = uVar5;
    if (uVar2 != 0) {
      func_0x000107c610b4(uVar5,auStack_a0,uVar2 << 3);
    }
    uVar1 = (0xc - uVar2 & 0xe) + uVar2;
    if ((uVar5 & 7) == 0) {
      uVar3 = uVar1;
      if (uVar1 <= (uVar6 | 2)) {
        uVar3 = uVar6 | 2;
      }
      func_0x000107c610b4(uVar5 + uVar6 * 8,(ulong)auStack_a0 | uVar6 << 3,
                          (uVar3 + ~uVar6 & 0xffffffffffffffe) * 8 + 0x10);
    }
    if (uVar1 < 0xc) {
      func_0x000107c610b4(uVar5 + uVar1 * 8,auStack_a0 + uVar1,(0xc - uVar2 & 1) << 3);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd844. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR____cxa_atexit_11034bd48)(&UNK_1098f9c10,0x11373c5b0,0x100000000);
    return;
  }
  func_0x000107c60e30(8);
  func_0x000107c60df8();
  func_0x000107c60e54();
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x1000403a8);
  (*pcVar4)();
}



/* Entry: 1000403c0; end: 100040543;  */

void FUN_1000403c0(void)

{
  ulong uVar1;
  uint uVar2;
  code *pcVar3;
  undefined8 *puVar4;
  long lVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 auStack_60 [6];
  
  if ((bRam000000011373c5a8 & 1) != 0) {
    return;
  }
  bRam000000011373c5a8 = 1;
  auStack_60[0] = 0;
  auStack_60[1] = 0;
  auStack_60[2] = NEON_fmov(0xbf800000,4);
  auStack_60[3] = 0;
  auStack_60[4] = 0;
  puRam000000011373c5c0 = (undefined8 *)0x0;
  uRam000000011373c5c8 = 0;
  puVar4 = (undefined8 *)0x30;
  auStack_60[5] = auStack_60[2];
  func_0x000107c610a0();
  if (puVar4 != (undefined8 *)0x0) {
    uRam000000011373c5c8 = 0xc;
    puRam000000011373c5c0 = puVar4;
    if (((ulong)puVar4 & 3) == 0) {
      uVar2 = -((uint)puVar4 >> 2);
      uVar1 = (ulong)uVar2 & 3;
      lVar5 = uVar1 * 4;
      if ((uVar2 & 3) == 0) {
        puVar4 = (undefined8 *)((long)puVar4 + lVar5);
        uVar7 = *(undefined8 *)((long)auStack_60 + lVar5);
        uVar9 = *(undefined8 *)((long)auStack_60 + lVar5 + 0x18);
        uVar8 = *(undefined8 *)((long)auStack_60 + lVar5 + 0x10);
        puVar4[1] = *(undefined8 *)((long)auStack_60 + lVar5 + 8);
        *puVar4 = uVar7;
        puVar4[3] = uVar9;
        puVar4[2] = uVar8;
        uVar7 = *(undefined8 *)((long)auStack_60 + lVar5 + 0x20);
        puVar4[5] = *(undefined8 *)((long)auStack_60 + lVar5 + 0x28);
        puVar4[4] = uVar7;
      }
      else {
        uVar6 = (ulong)(0xc - (int)uVar1) & 0xc | uVar1;
        func_0x000107c610b4(puVar4,auStack_60);
        func_0x000107c610b4((long)puVar4 + uVar1 * 4,(long)auStack_60 + uVar1 * 4,
                            (uVar6 + ~uVar1 & 0x1ffffffffffffffc) * 4 + 0x10);
        func_0x000107c610b4((long)puVar4 + uVar6 * 4,(long)auStack_60 + uVar6 * 4,uVar6 * -4 + 0x30)
        ;
      }
    }
    else {
      puVar4[1] = auStack_60[1];
      *puVar4 = auStack_60[0];
      puVar4[3] = auStack_60[3];
      puVar4[2] = auStack_60[2];
      puVar4[5] = auStack_60[5];
      puVar4[4] = auStack_60[4];
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd844. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR____cxa_atexit_11034bd48)(&UNK_1098f9c38,0x11373c5c0,0x100000000);
    return;
  }
  func_0x000107c60e30(8);
  func_0x000107c60df8();
  func_0x000107c60e54();
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x10004052c);
  (*pcVar3)();
}



/* Entry: 100040544; end: 1000411d3;  */

undefined1  [16] FUN_100040544(void)

{
  long *plVar1;
  int *piVar2;
  undefined8 uVar3;
  mach_header *pmVar4;
  undefined8 *puVar5;
  long *plVar6;
  ulong uVar7;
  long lVar8;
  long *plVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  ulong uVar13;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined8 uStack_3c0;
  undefined8 uStack_3b8;
  undefined2 uStack_3b0;
  undefined8 uStack_3a8;
  undefined8 uStack_3a0;
  undefined8 uStack_398;
  undefined8 uStack_390;
  undefined8 uStack_388;
  undefined2 uStack_380;
  undefined8 uStack_378;
  undefined8 uStack_370;
  undefined8 uStack_368;
  undefined8 uStack_360;
  undefined8 uStack_358;
  undefined2 uStack_350;
  undefined8 uStack_348;
  undefined8 uStack_340;
  undefined8 uStack_338;
  undefined8 uStack_330;
  undefined8 uStack_328;
  undefined2 uStack_320;
  undefined8 uStack_318;
  undefined8 uStack_310;
  undefined8 uStack_308;
  undefined8 uStack_300;
  undefined8 uStack_2f8;
  undefined2 uStack_2f0;
  undefined8 uStack_2e8;
  undefined8 uStack_2e0;
  undefined8 uStack_2d8;
  undefined8 uStack_2d0;
  undefined8 uStack_2c8;
  undefined2 uStack_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  undefined2 uStack_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined2 uStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined2 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined2 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined2 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined2 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined2 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined2 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined2 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined2 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined2 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined2 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar12 = &uStack_3c0;
  uRam000000011373c788 = 0x4059000000000000;
  uRam000000011373c780 = 0x4057c3020c49ba5e;
  uRam000000011373c790 = 0x405b3883126e978d;
  uStack_3b8 = 0x800000005;
  uStack_3c0 = 0x500000006;
  uStack_3b0 = 1;
  uStack_3a0 = 0x3f9f43b383dc8b34;
  uStack_3a8 = 0xbf12f3eacc50cbd6;
  uStack_398 = 0;
  uStack_388 = 0x800000005;
  uStack_390 = 0x500000006;
  uStack_380 = 0x101;
  uStack_370 = 0x3f9ce7a8214514ca;
  uStack_378 = 0xbef8dfda4c907216;
  uStack_368 = 0;
  uStack_358 = 0x800000005;
  uStack_360 = 0x500000006;
  uStack_350 = 0x201;
  uStack_340 = 0x3f6df82741d90071;
  uStack_348 = 0xbef91205f822cd1b;
  uStack_338 = 0;
  uStack_328 = 0x900000006;
  uStack_330 = 0x500000006;
  uStack_320 = 1;
  uStack_310 = 0x3f9959ba8f103159;
  uStack_318 = 0xbf11e5e94ffb9b0a;
  uStack_308 = 0;
  uStack_2f8 = 0x900000006;
  uStack_300 = 0x500000006;
  uStack_2f0 = 0x101;
  uStack_2e0 = 0xbf9fbbdb15987637;
  uStack_2e8 = 0xbf0149deae3c3715;
  uStack_2d8 = 0;
  uStack_2c8 = 0x900000006;
  uStack_2d0 = 0x500000006;
  uStack_2c0 = 0x201;
  uStack_2b8 = 0x3ee30835fd94a01e;
  uStack_2a8 = 0;
  uStack_2b0 = 0xbf7dec95fc116f24;
  uStack_298 = 0x1d00000005;
  uStack_2a0 = 0x500000006;
  uStack_290 = 1;
  uStack_288 = 0x3f1180843f825b6b;
  uStack_278 = 0;
  uStack_280 = 0xbfb40043f97d4fa4;
  uStack_268 = 0x1d00000005;
  uStack_270 = 0x500000006;
  uStack_260 = 0x101;
  uStack_258 = 0x3f2d0eeb9696a3d4;
  uStack_248 = 0;
  uStack_250 = 0xbfd53c27617f072d;
  uStack_238 = 0x1d00000005;
  uStack_240 = 0x500000006;
  uStack_230 = 0x201;
  uStack_228 = 0x3ef7c3568693654a;
  uStack_218 = 0;
  uStack_220 = 0xbf90a95ca4289058;
  uStack_208 = 0x1e00000006;
  uStack_210 = 0x500000006;
  uStack_200 = 1;
  uStack_1f8 = 0x3f1d8ecaf850221b;
  uStack_1e8 = 0;
  uStack_1f0 = 0xbfb5cca0d41ec657;
  uStack_1d8 = 0x1e00000006;
  uStack_1e0 = 0x500000006;
  uStack_1d0 = 0x101;
  uStack_1c8 = 0xbf2aaa7616cfd3a7;
  uStack_1b8 = 0;
  uStack_1c0 = 0x3fd6f99467c54ff0;
  uStack_1a8 = 0x1e00000006;
  uStack_1b0 = 0x500000006;
  uStack_1a0 = 0x201;
  uStack_198 = 0xbeb83dcc59d966ee;
  uStack_188 = 0;
  uStack_190 = 0x3f932f12e6574f82;
  uStack_178 = 0x1d00000025;
  uStack_180 = 0x500000006;
  uStack_170 = 1;
  uStack_168 = 0x3f11a2e20f20a6b6;
  uStack_158 = 0;
  uStack_160 = 0xbfb57c51c9c714ef;
  uStack_148 = 0x1d00000025;
  uStack_150 = 0x500000006;
  uStack_140 = 0x101;
  uStack_138 = 0x3f2aa9ed8257913f;
  uStack_128 = 0;
  uStack_130 = 0x3fc51b35bad3cf40;
  uStack_118 = 0x1d00000025;
  uStack_120 = 0x500000006;
  uStack_110 = 0x201;
  uStack_108 = 0x3eeb5f4af6f0ce0e;
  uStack_f8 = 0;
  uStack_100 = 0xbf6a8b8759bc6413;
  uStack_e8 = 0x1e00000025;
  uStack_f0 = 0x500000006;
  uStack_e0 = 1;
  uStack_d8 = 0x3f1c0aa29b4af49b;
  uStack_c8 = 0;
  uStack_d0 = 0xbfb5940a909f167e;
  uStack_b8 = 0x1e00000025;
  uStack_c0 = 0x500000006;
  uStack_b0 = 0x101;
  uStack_a8 = 0xbf2d72f0771bcc57;
  uStack_98 = 0;
  uStack_a0 = 0xbfc2b2094b2f07bd;
  uStack_88 = 0x1e00000025;
  uStack_90 = 0x500000006;
  uStack_80 = 0x201;
  uStack_78 = 0x3ef8ef274f2b34ad;
  uStack_68 = 0;
  uStack_70 = 0x3f77dbf4da7358b1;
  FUN_100041444(0x11373c798,&uStack_3c0,0x12);
  plVar1 = (long *)&UNK_10990216c;
  pmVar4 = &MACH_HEADER;
  func_0x000107c60e34(&UNK_10990216c,0x11373c798,0x100000000);
  uStack_3b8 = 0x800000005;
  uStack_3c0 = 0x500000006;
  uStack_3b0 = 1;
  uStack_3a0 = 0x3f876ae0de2194ed;
  uStack_3a8 = 0xbecded93d1348ec9;
  uStack_398 = 0;
  uStack_388 = 0x800000005;
  uStack_390 = 0x500000006;
  uStack_380 = 0x101;
  uStack_370 = 0x3f99f6a2032ba0c6;
  uStack_378 = 0x3f08194031b822b5;
  uStack_368 = 0;
  uStack_358 = 0x800000005;
  uStack_360 = 0x500000006;
  uStack_350 = 0x201;
  uStack_340 = 0xbf34dcafa69dcf63;
  uStack_348 = 0x3ef9c14fc99f7960;
  uStack_338 = 0;
  uStack_328 = 0x900000006;
  uStack_330 = 0x500000006;
  uStack_320 = 1;
  uStack_310 = 0xbf60e0a882ddc3d5;
  uStack_318 = 0xbf0e63201379621f;
  uStack_308 = 0;
  uStack_2f8 = 0x900000006;
  uStack_300 = 0x500000006;
  uStack_2f0 = 0x101;
  uStack_2e0 = 0xbf95624bf557f893;
  uStack_2e8 = 0xbf039bb757cfdd94;
  uStack_2d8 = 0;
  uStack_2c8 = 0x900000006;
  uStack_2d0 = 0x500000006;
  uStack_2c0 = 0x201;
  uStack_2b8 = 0xbf0ec00473746f52;
  uStack_2a8 = 0;
  uStack_2b0 = 0xbf5164a74615e914;
  uStack_298 = 0x1d00000005;
  uStack_2a0 = 0x500000006;
  uStack_290 = 1;
  uStack_288 = 0xbf0586bd0286406c;
  uStack_278 = 0;
  uStack_280 = 0xbfb420779b095eb8;
  uStack_268 = 0x1d00000005;
  uStack_270 = 0x500000006;
  uStack_260 = 0x101;
  uStack_258 = 0xbf13429352a19b42;
  uStack_248 = 0;
  uStack_250 = 0xbfd52c66fa6dc165;
  uStack_238 = 0x1d00000005;
  uStack_240 = 0x500000006;
  uStack_230 = 0x201;
  uStack_228 = 0xbedf0701510de49a;
  uStack_218 = 0;
  uStack_220 = 0xbf7f8a72e8b365d1;
  uStack_208 = 0x1e00000006;
  uStack_210 = 0x500000006;
  uStack_200 = 1;
  uStack_1f8 = 0x3ee2a0c181143ca3;
  uStack_1e8 = 0;
  uStack_1f0 = 0xbfada73812c0f7d7;
  uStack_1d8 = 0x1e00000006;
  uStack_1e0 = 0x500000006;
  uStack_1d0 = 0x101;
  uStack_1c8 = 0x3efe03e947158e13;
  uStack_1b8 = 0;
  uStack_1c0 = 0x3fd399afe07523ad;
  uStack_1a8 = 0x1e00000006;
  uStack_1b0 = 0x500000006;
  uStack_1a0 = 0x201;
  uStack_198 = 0x3ecaeeecfddcc9a1;
  uStack_188 = 0;
  uStack_190 = 0x3f799751c0bcf412;
  uStack_178 = 0x1d00000025;
  uStack_180 = 0x500000006;
  uStack_170 = 1;
  uStack_168 = 0xbf079fd9cf94a843;
  uStack_158 = 0;
  uStack_160 = 0xbfb3dff3618a5444;
  uStack_148 = 0x1d00000025;
  uStack_150 = 0x500000006;
  uStack_140 = 0x101;
  uStack_138 = 0x3ef588f082733233;
  uStack_128 = 0;
  uStack_130 = 0x3fc595aeed63a737;
  uStack_118 = 0x1d00000025;
  uStack_120 = 0x500000006;
  uStack_110 = 0x201;
  uStack_108 = 0xbf0426e2f4aaacff;
  uStack_f8 = 0;
  uStack_100 = 0xbf7959794ba3f5f2;
  uStack_e8 = 0x1e00000025;
  uStack_f0 = 0x500000006;
  uStack_e0 = 1;
  uStack_d8 = 0xbee426e66446a83a;
  uStack_c8 = 0;
  uStack_d0 = 0xbfb0fc57455f7b53;
  uStack_b8 = 0x1e00000025;
  uStack_c0 = 0x500000006;
  uStack_b0 = 0x101;
  uStack_a8 = 0x3f214e8b422cba0c;
  uStack_98 = 0;
  uStack_a0 = 0xbfc8edcd4d44393c;
  uStack_88 = 0x1e00000025;
  uStack_90 = 0x500000006;
  uStack_80 = 0x201;
  uStack_78 = 0xbef735a183901b55;
  uStack_68 = 0;
  uStack_70 = 0x3f691685d3691e27;
  FUN_100041444(0x11373c7c0,&uStack_3c0,0x12);
  func_0x000107c60e34(&UNK_10990216c,0x11373c7c0,0x100000000);
  uStack_3b8 = 0x800000005;
  uStack_3c0 = 0x500000006;
  uStack_3b0 = 1;
  uStack_3a0 = 0xbf4e60fb9bd6db7b;
  uStack_3a8 = 0xbf113fc51c3c3c3f;
  uStack_398 = 0;
  uStack_388 = 0x800000005;
  uStack_390 = 0x500000006;
  uStack_380 = 0x101;
  uStack_370 = 0x3f9b7e21f09ff89f;
  uStack_378 = 0x3f1742ecd893a6fd;
  uStack_368 = 0;
  uStack_358 = 0x800000005;
  uStack_360 = 0x500000006;
  uStack_350 = 0x201;
  uStack_340 = 0xbf4c11638bb2d493;
  uStack_348 = 0x3f08f6c01208a90c;
  uStack_338 = 0;
  uStack_328 = 0x900000006;
  uStack_330 = 0x500000006;
  uStack_320 = 1;
  uStack_310 = 0xbf2be78dd47aa74c;
  uStack_318 = 0xbf0bc534505f560b;
  uStack_308 = 0;
  uStack_2f8 = 0x900000006;
  uStack_300 = 0x500000006;
  uStack_2f0 = 0x101;
  uStack_2e0 = 0xbf977d96ec869f99;
  uStack_2e8 = 0xbf0b5d47918b9981;
  uStack_2d8 = 0;
  uStack_2c8 = 0x900000006;
  uStack_2d0 = 0x500000006;
  uStack_2c0 = 0x201;
  uStack_2b8 = 0xbf15cdf7b9175fd9;
  uStack_2a8 = 0;
  uStack_2b0 = 0xbf5e070a4a00b626;
  uStack_298 = 0x1d00000005;
  uStack_2a0 = 0x500000006;
  uStack_290 = 1;
  uStack_288 = 0xbf1a662a22e0a20e;
  uStack_278 = 0;
  uStack_280 = 0xbfb1f3564ed93b77;
  uStack_268 = 0x1d00000005;
  uStack_270 = 0x500000006;
  uStack_260 = 0x101;
  uStack_258 = 0x3f11f456fbfb93a9;
  uStack_248 = 0;
  uStack_250 = 0xbfd4e1e0cc874d54;
  uStack_238 = 0x1d00000005;
  uStack_240 = 0x500000006;
  uStack_230 = 0x201;
  uStack_228 = 0xbee1db66f1e631af;
  uStack_218 = 0;
  uStack_220 = 0xbf7c288bd5dabf33;
  uStack_208 = 0x1e00000006;
  uStack_210 = 0x500000006;
  uStack_200 = 1;
  uStack_1f8 = 0xbf0fe62b40ec1b81;
  uStack_1e8 = 0;
  uStack_1f0 = 0xbfb1e1ab8e7326bc;
  uStack_1d8 = 0x1e00000006;
  uStack_1e0 = 0x500000006;
  uStack_1d0 = 0x101;
  uStack_1c8 = 0x3f15292b1e462417;
  uStack_1b8 = 0;
  uStack_1c0 = 0x3fd5967d6e50fcae;
  uStack_1a8 = 0x1e00000006;
  uStack_1b0 = 0x500000006;
  uStack_1a0 = 0x201;
  uStack_198 = 0x3ef95d4409e25a67;
  uStack_188 = 0;
  uStack_190 = 0x3f84327fb0c49663;
  uStack_178 = 0x1d00000025;
  uStack_180 = 0x500000006;
  uStack_170 = 1;
  uStack_168 = 0xbf1ac9d086244dbb;
  uStack_158 = 0;
  uStack_160 = 0xbfb3a6df26917048;
  uStack_148 = 0x1d00000025;
  uStack_150 = 0x500000006;
  uStack_140 = 0x101;
  uStack_138 = 0x3f2390d9ec14f29e;
  uStack_128 = 0;
  uStack_130 = 0x3fc5943056f47e4e;
  uStack_118 = 0x1d00000025;
  uStack_120 = 0x500000006;
  uStack_110 = 0x201;
  uStack_108 = 0xbeeba1017e1595d0;
  uStack_f8 = 0;
  uStack_100 = 0xbf67b013d97bb1d2;
  uStack_e8 = 0x1e00000025;
  uStack_f0 = 0x500000006;
  uStack_e0 = 1;
  uStack_d8 = 0xbf124e26cda0e77f;
  uStack_c8 = 0;
  uStack_d0 = 0xbfb1f5d4c28a5fb2;
  uStack_b8 = 0x1e00000025;
  uStack_c0 = 0x500000006;
  uStack_b0 = 0x101;
  uStack_a8 = 0x3f2553da5fc1e363;
  uStack_98 = 0;
  uStack_a0 = 0xbfc594c1fe24a41d;
  uStack_88 = 0x1e00000025;
  uStack_90 = 0x500000006;
  uStack_80 = 0x201;
  uStack_78 = 0x3ee3d8c9062317a3;
  uStack_68 = 0;
  uStack_70 = 0x3f697b8482469be5;
  FUN_100041444(0x11373c7e8,&uStack_3c0,0x12);
  func_0x000107c60e34(&UNK_10990216c,0x11373c7e8,0x100000000);
  uStack_3b8 = 0x800000005;
  uStack_3c0 = 0x500000006;
  uStack_3b0 = 1;
  uStack_3a0 = 0x3f55e03f1702802c;
  uStack_3a8 = 0xbf0feb9e424c8b06;
  uStack_398 = 0;
  uStack_388 = 0x800000005;
  uStack_390 = 0x500000006;
  uStack_380 = 0x101;
  uStack_370 = 0x3f951315565f7a67;
  uStack_378 = 0x3f01dfe28f67f89e;
  uStack_368 = 0;
  uStack_358 = 0x800000005;
  uStack_360 = 0x500000006;
  uStack_350 = 0x201;
  uStack_340 = 0x3ec6f504bc61cc77;
  uStack_348 = 0x3ef0b6fed1a41972;
  uStack_338 = 0;
  uStack_328 = 0x900000006;
  uStack_330 = 0x500000006;
  uStack_320 = 1;
  uStack_310 = 0xbf7d86d7132f843d;
  uStack_318 = 0xbefa29b4cac68efa;
  uStack_308 = 0;
  uStack_2f8 = 0x900000006;
  uStack_300 = 0x500000006;
  uStack_2f0 = 0x101;
  uStack_2e0 = 0xbf927e35a4a26d45;
  uStack_2e8 = 0x3ef3b1e39261161a;
  uStack_2d8 = 0;
  uStack_2c8 = 0x900000006;
  uStack_2d0 = 0x500000006;
  uStack_2c0 = 0x201;
  uStack_2b8 = 0xbf03774d8bc669a9;
  uStack_2a8 = 0;
  uStack_2b0 = 0xbf7819f39012d9b8;
  uStack_298 = 0x1d00000005;
  uStack_2a0 = 0x500000006;
  uStack_290 = 1;
  uStack_288 = 0x3f1a1897ecea504b;
  uStack_278 = 0;
  uStack_280 = 0xbfaf9c54cdcc4bff;
  uStack_268 = 0x1d00000005;
  uStack_270 = 0x500000006;
  uStack_260 = 0x101;
  uStack_258 = 0xbf01d2543a02c9f9;
  uStack_248 = 0;
  uStack_250 = 0xbfd542c9e6cddbbf;
  uStack_238 = 0x1d00000005;
  uStack_240 = 0x500000006;
  uStack_230 = 0x201;
  uStack_228 = 0xbed57e63d589d726;
  uStack_218 = 0;
  uStack_220 = 0xbf699ae0726f53e3;
  uStack_208 = 0x1e00000006;
  uStack_210 = 0x500000006;
  uStack_200 = 1;
  uStack_1f8 = 0x3f21ae4aa308d081;
  uStack_1e8 = 0;
  uStack_1f0 = 0xbfb12d05acf43199;
  uStack_1d8 = 0x1e00000006;
  uStack_1e0 = 0x500000006;
  uStack_1d0 = 0x101;
  uStack_1c8 = 0xbee38e6dba9a4f8a;
  uStack_1b8 = 0;
  uStack_1c0 = 0x3fd4a3fa53f3bc08;
  uStack_1a8 = 0x1e00000006;
  uStack_1b0 = 0x500000006;
  uStack_1a0 = 0x201;
  uStack_198 = 0xbea0f6364174585b;
  uStack_188 = 0;
  uStack_190 = 0x3f87a4a51c76dc95;
  uStack_178 = 0x1d00000025;
  uStack_180 = 0x500000006;
  uStack_170 = 1;
  uStack_168 = 0x3f16a104b190675e;
  uStack_158 = 0;
  uStack_160 = 0xbfb35227256f0b8d;
  uStack_148 = 0x1d00000025;
  uStack_150 = 0x500000006;
  uStack_140 = 0x101;
  uStack_138 = 0x3efe23ef82e119ac;
  uStack_128 = 0;
  uStack_130 = 0x3fc51371c7a48c14;
  uStack_118 = 0x1d00000025;
  uStack_120 = 0x500000006;
  uStack_110 = 0x201;
  uStack_108 = 0x3e7b31487240ac71;
  uStack_f8 = 0;
  uStack_100 = 0xbf5e3743f5338478;
  uStack_e8 = 0x1e00000025;
  uStack_f0 = 0x500000006;
  uStack_e0 = 1;
  uStack_d8 = 0x3f20563c06476b19;
  uStack_c8 = 0;
  uStack_d0 = 0xbfac45b4152016af;
  uStack_b8 = 0x1e00000025;
  uStack_c0 = 0x500000006;
  uStack_b0 = 0x101;
  uStack_a8 = 0x3f112bf3e519bea6;
  uStack_98 = 0;
  uStack_a0 = 0xbfc742bd7b3d667d;
  uStack_88 = 0x1e00000025;
  uStack_90 = 0x500000006;
  uStack_80 = 0x201;
  uStack_78 = 0x3ee9247020193d22;
  uStack_68 = 0;
  uStack_70 = 0x3f82e6447086f68b;
  FUN_100041444(0x11373c810,&uStack_3c0,0x12);
  func_0x000107c60e34(&UNK_10990216c,0x11373c810,0x100000000);
  uStack_3b8 = 0x800000005;
  uStack_3c0 = 0x500000006;
  uStack_3b0 = 1;
  uStack_3a0 = 0x3f7924b00a34bc69;
  uStack_3a8 = 0xbf05aff8524d0409;
  uStack_398 = 0;
  uStack_388 = 0x800000005;
  uStack_390 = 0x500000006;
  uStack_380 = 0x101;
  uStack_370 = 0x3f914a70f00ac80e;
  uStack_378 = 0x3edb1ad77f7fd34f;
  uStack_368 = 0;
  uStack_358 = 0x800000005;
  uStack_360 = 0x500000006;
  uStack_350 = 0x201;
  uStack_340 = 0xbf53484ab9bb0bd5;
  uStack_348 = 0x3f0548b75ff05903;
  uStack_338 = 0;
  uStack_328 = 0x900000006;
  uStack_330 = 0x500000006;
  uStack_320 = 1;
  uStack_310 = 0x3f360818ecfaae76;
  uStack_318 = 0xbf0535827f070264;
  uStack_308 = 0;
  uStack_2f8 = 0x900000006;
  uStack_300 = 0x500000006;
  uStack_2f0 = 0x101;
  uStack_2e0 = 0xbf8ea9a4b22f1a52;
  uStack_2e8 = 0x3eef2db6aa4828e9;
  uStack_2d8 = 0;
  uStack_2c8 = 0x900000006;
  uStack_2d0 = 0x500000006;
  uStack_2c0 = 0x201;
  uStack_2b8 = 0xbee90df16ee87715;
  uStack_2a8 = 0;
  uStack_2b0 = 0x3f71749ea211ef33;
  uStack_298 = 0x1d00000025;
  uStack_2a0 = 0x500000006;
  uStack_290 = 1;
  uStack_288 = 0xbf0165ebddad467f;
  uStack_278 = 0;
  uStack_280 = 0xbfaebe8143572fcc;
  uStack_268 = 0x1d00000025;
  uStack_270 = 0x500000006;
  uStack_260 = 0x101;
  uStack_258 = 0xbefe4d3f704fc0aa;
  uStack_248 = 0;
  uStack_250 = 0x3fc6888a5b40cc01;
  uStack_238 = 0x1d00000025;
  uStack_240 = 0x500000006;
  uStack_230 = 0x201;
  uStack_228 = 0x3efb0791708a948a;
  uStack_218 = 0;
  uStack_220 = 0x3f4e7203a5117715;
  uStack_208 = 0x1e00000025;
  uStack_210 = 0x500000006;
  uStack_200 = 1;
  uStack_1f8 = 0x3f0cce7577031f4d;
  uStack_1e8 = 0;
  uStack_1f0 = 0xbfa9698a814f802e;
  uStack_1d8 = 0x1e00000025;
  uStack_1e0 = 0x500000006;
  uStack_1d0 = 0x101;
  uStack_1c8 = 0x3f14cfa1bc9e6e7a;
  uStack_1b8 = 0;
  uStack_1c0 = 0xbfc63f2bd758c8c2;
  uStack_1a8 = 0x1e00000025;
  uStack_1b0 = 0x500000006;
  uStack_1a0 = 0x201;
  uStack_198 = 0x3ef9c8d3eed50a5e;
  uStack_188 = 0;
  uStack_190 = 0x3f6d79782c859bc0;
  FUN_100041444(0x11373c838,&uStack_3c0,0xc);
  piVar2 = (int *)0x11373c838;
  func_0x000107c60e34();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    auVar14._8_8_ = piVar2;
    auVar14._0_8_ = plVar1;
    return auVar14;
  }
  func_0x000107c60e78();
  puVar11 = (undefined8 *)
            ((long)*piVar2 * 0x3d0bf + (long)piVar2[1] * 0xf81 + (long)piVar2[2] * 0x3f +
             (long)piVar2[3] + (ulong)*(byte *)(piVar2 + 4) * 0xef6ea1ff +
            (ulong)*(byte *)((long)piVar2 + 0x11) * 0xf05f01);
  puVar10 = (undefined8 *)plVar1[1];
  if (puVar10 != (undefined8 *)0x0) {
    uVar13 = (long)puVar10 - 1;
    if (((ulong)puVar10 & uVar13) == 0) {
      puVar12 = (undefined8 *)((ulong)puVar11 & uVar13);
    }
    else {
      puVar12 = puVar11;
      if (puVar10 <= puVar11) {
        uVar7 = 0;
        if (puVar10 != (undefined8 *)0x0) {
          uVar7 = (ulong)puVar11 / (ulong)puVar10;
        }
        puVar12 = (undefined8 *)((long)puVar11 - uVar7 * (long)puVar10);
      }
    }
    puVar5 = *(undefined8 **)(*plVar1 + (long)puVar12 * 8);
    if (puVar5 != (undefined8 *)0x0) {
      for (plVar9 = (long *)*puVar5; plVar9 != (long *)0x0; plVar9 = (long *)*plVar9) {
        puVar5 = (undefined8 *)plVar9[1];
        if (puVar5 == puVar11) {
          plVar6 = plVar9 + 2;
          func_0x000107c2ae14(plVar6,piVar2);
          if (((ulong)plVar6 & 1) != 0) {
            uVar3 = 0;
            goto LAB_10004140c;
          }
        }
        else {
          if (((ulong)puVar10 & uVar13) == 0) {
            puVar5 = (undefined8 *)((ulong)puVar5 & uVar13);
          }
          else if (puVar10 <= puVar5) {
            uVar7 = 0;
            if (puVar10 != (undefined8 *)0x0) {
              uVar7 = (ulong)puVar5 / (ulong)puVar10;
            }
            puVar5 = (undefined8 *)((long)puVar5 - uVar7 * (long)puVar10);
          }
          if (puVar5 != puVar12) break;
        }
      }
    }
  }
  plVar9 = (long *)0x40;
  func_0x000107c60e20();
  *plVar9 = 0;
  plVar9[1] = (long)puVar11;
  lVar8 = *(long *)pmVar4;
  plVar9[3] = *(long *)&pmVar4->cpusubtype;
  plVar9[2] = lVar8;
  *(dword *)(plVar9 + 4) = pmVar4->ncmds;
  lVar8 = *(long *)&pmVar4->flags;
  plVar9[6] = *(long *)(pmVar4 + 1);
  plVar9[5] = lVar8;
  plVar9[7] = *(long *)&pmVar4[1].cpusubtype;
  if ((puVar10 == (undefined8 *)0x0) ||
     (*(float *)(plVar1 + 4) * (float)puVar10 < (float)(plVar1[3] + 1))) {
    uVar13 = 1;
    if ((undefined8 *)0x2 < puVar10) {
      uVar13 = (ulong)(((ulong)puVar10 & (long)puVar10 - 1U) != 0);
    }
    uVar13 = uVar13 | (long)puVar10 << 1;
    uVar7 = (ulong)((float)(plVar1[3] + 1) / *(float *)(plVar1 + 4));
    if (uVar13 <= uVar7) {
      uVar13 = uVar7;
    }
    FUN_1000414bc(plVar1,uVar13);
    puVar10 = (undefined8 *)plVar1[1];
    if (((ulong)puVar10 & (long)puVar10 - 1U) == 0) {
      puVar12 = (undefined8 *)((long)puVar10 - 1U & (ulong)puVar11);
    }
    else {
      puVar12 = puVar11;
      if (puVar10 <= puVar11) {
        uVar13 = 0;
        if (puVar10 != (undefined8 *)0x0) {
          uVar13 = (ulong)puVar11 / (ulong)puVar10;
        }
        puVar12 = (undefined8 *)((long)puVar11 - uVar13 * (long)puVar10);
      }
    }
  }
  lVar8 = *plVar1;
  plVar6 = *(long **)(lVar8 + (long)puVar12 * 8);
  if (plVar6 == (long *)0x0) {
    plVar6 = plVar1 + 2;
    *plVar9 = *plVar6;
    *plVar6 = (long)plVar9;
    *(long **)(lVar8 + (long)puVar12 * 8) = plVar6;
    if (*plVar9 == 0) goto LAB_1000413fc;
    puVar12 = *(undefined8 **)(*plVar9 + 8);
    if (((ulong)puVar10 & (long)puVar10 - 1U) == 0) {
      puVar12 = (undefined8 *)((ulong)puVar12 & (long)puVar10 - 1U);
    }
    else if (puVar10 <= puVar12) {
      uVar13 = 0;
      if (puVar10 != (undefined8 *)0x0) {
        uVar13 = (ulong)puVar12 / (ulong)puVar10;
      }
      puVar12 = (undefined8 *)((long)puVar12 - uVar13 * (long)puVar10);
    }
    plVar6 = (long *)(*plVar1 + (long)puVar12 * 8);
  }
  else {
    *plVar9 = *plVar6;
  }
  *plVar6 = (long)plVar9;
LAB_1000413fc:
  plVar1[3] = plVar1[3] + 1;
  uVar3 = 1;
LAB_10004140c:
  auVar15._8_8_ = uVar3;
  auVar15._0_8_ = plVar9;
  return auVar15;
}



/* Entry: 1000411d4; end: 100041443;  */

undefined1  [16] FUN_1000411d4(long *param_1,int *param_2,long *param_3)

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
  undefined1 auVar11 [16];
  
  uVar9 = (long)*param_2 * 0x3d0bf + (long)param_2[1] * 0xf81 + (long)param_2[2] * 0x3f +
          (long)param_2[3] + (ulong)*(byte *)(param_2 + 4) * 0xef6ea1ff +
          (ulong)*(byte *)((long)param_2 + 0x11) * 0xf05f01;
  uVar8 = param_1[1];
  if (uVar8 != 0) {
    uVar10 = uVar8 - 1;
    if ((uVar8 & uVar10) == 0) {
      unaff_x25 = uVar9 & uVar10;
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
          plVar5 = plVar7 + 2;
          func_0x000107c2ae14(plVar5,param_2);
          if (((ulong)plVar5 & 1) != 0) {
            uVar2 = 0;
            goto LAB_10004140c;
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
  plVar7 = (long *)0x40;
  func_0x000107c60e20();
  *plVar7 = 0;
  plVar7[1] = uVar9;
  lVar6 = *param_3;
  plVar7[3] = param_3[1];
  plVar7[2] = lVar6;
  *(int *)(plVar7 + 4) = (int)param_3[2];
  lVar6 = param_3[3];
  plVar7[6] = param_3[4];
  plVar7[5] = lVar6;
  plVar7[7] = param_3[5];
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
    FUN_1000414bc(param_1,uVar10);
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
    if (*plVar7 == 0) goto LAB_1000413fc;
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
LAB_1000413fc:
  param_1[3] = param_1[3] + 1;
  uVar2 = 1;
LAB_10004140c:
  auVar11._8_8_ = uVar2;
  auVar11._0_8_ = plVar7;
  return auVar11;
}



/* Entry: 100041444; end: 1000414bb;  */

undefined8 * FUN_100041444(undefined8 *param_1,long param_2,long param_3)

{
  param_1[1] = 0;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 4) = 0x3f800000;
  if (param_3 != 0) {
    param_3 = param_3 * 0x30;
    do {
      FUN_1000411d4(param_1,param_2,param_2);
      param_2 = param_2 + 0x30;
      param_3 = param_3 + -0x30;
    } while (param_3 != 0);
  }
  return param_1;
}



/* Entry: 1000414bc; end: 10004158b;  */

void FUN_1000414bc(long *param_1,ulong param_2)

{
  ulong uVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  ulong uVar9;
  ulong uVar10;
  
  if (param_2 - 1 == 0) {
    param_2 = 2;
  }
  else if ((param_2 & param_2 - 1) != 0) {
    func_0x000107c60c44();
  }
  uVar10 = param_1[1];
  if (uVar10 < param_2) {
LAB_100041504:
    if (param_2 == 0) {
      lVar3 = *param_1;
      *param_1 = 0;
      if (lVar3 != 0) {
        func_0x000107c60e14();
      }
      param_1[1] = 0;
    }
    else {
      if (param_2 >> 0x3d != 0) {
        func_0x000104c4f740();
        if (((bRam000000011373c878 & 1) == 0) &&
           (bRam000000011373c878 = 1, (bRam000000011373c888 & 1) == 0)) {
          iVar2 = 0x1373c888;
          func_0x000107c60e48();
          if (iVar2 != 0) {
            uRam000000011373c8a8 = 0;
            uRam000000011373c8a0 = 0;
            uRam000000011373c898 = 0;
            uRam000000011373c890 = 0;
            uRam000000011373c8b0 = 0x3f800000;
            uRam000000011373c8c8 = 0;
            uRam000000011373c8c0 = 0;
            uRam000000011373c8b8 = 0x11373c8c0;
            func_0x000107c60e34(&UNK_1099023d0,0x11373c890,0x100000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd8c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (*(code *)PTR____cxa_guard_release_110346be8)(0x11373c888);
            return;
          }
        }
        return;
      }
      lVar3 = param_2 << 3;
      func_0x000107c60e20();
      lVar4 = *param_1;
      *param_1 = lVar3;
      if (lVar4 != 0) {
        func_0x000107c60e14();
      }
      uVar10 = 0;
      param_1[1] = param_2;
      do {
        *(undefined8 *)(*param_1 + uVar10 * 8) = 0;
        uVar10 = uVar10 + 1;
      } while (param_2 != uVar10);
      plVar6 = (long *)param_1[2];
      if (plVar6 != (long *)0x0) {
        uVar10 = plVar6[1];
        uVar5 = param_2 - 1;
        if ((param_2 & uVar5) == 0) {
          uVar10 = uVar10 & uVar5;
        }
        else if (param_2 <= uVar10) {
          uVar9 = 0;
          if (param_2 != 0) {
            uVar9 = uVar10 / param_2;
          }
          uVar10 = uVar10 - uVar9 * param_2;
        }
        *(long **)(*param_1 + uVar10 * 8) = param_1 + 2;
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
          if (uVar9 != uVar10) {
            lVar3 = *param_1;
            if (*(long *)(lVar3 + uVar9 * 8) == 0) {
              *(long **)(lVar3 + uVar9 * 8) = plVar6;
              uVar10 = uVar9;
            }
            else {
              *plVar6 = *plVar7;
              *plVar7 = **(undefined8 **)(lVar3 + uVar9 * 8);
              **(long **)(lVar3 + uVar9 * 8) = (long)plVar7;
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
  if (param_2 < uVar10) {
    uVar5 = (ulong)((float)(ulong)param_1[3] / *(float *)(param_1 + 4));
    if ((uVar10 < 3) || ((uVar10 & uVar10 - 1) != 0)) {
      func_0x000107c60c44();
    }
    else if (1 < uVar5) {
      uVar5 = 1L << (-LZCOUNT(uVar5 - 1) & 0x3fU);
    }
    if (param_2 <= uVar5) {
      param_2 = uVar5;
    }
    if (param_2 < uVar10) goto LAB_100041504;
  }
  return;
}



/* Entry: 10004158c; end: 1000417a7;  */

void FUN_10004158c(long *param_1,ulong param_2)

{
  ulong uVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  ulong uVar10;
  
  if (param_2 == 0) {
    lVar3 = *param_1;
    *param_1 = 0;
    if (lVar3 != 0) {
      func_0x000107c60e14();
    }
    param_1[1] = 0;
  }
  else {
    if (param_2 >> 0x3d != 0) {
      func_0x000104c4f740();
      if (((bRam000000011373c878 & 1) == 0) &&
         (bRam000000011373c878 = 1, (bRam000000011373c888 & 1) == 0)) {
        iVar2 = 0x1373c888;
        func_0x000107c60e48();
        if (iVar2 != 0) {
          uRam000000011373c8a8 = 0;
          uRam000000011373c8a0 = 0;
          uRam000000011373c898 = 0;
          uRam000000011373c890 = 0;
          uRam000000011373c8b0 = 0x3f800000;
          uRam000000011373c8c8 = 0;
          uRam000000011373c8c0 = 0;
          uRam000000011373c8b8 = 0x11373c8c0;
          func_0x000107c60e34(&UNK_1099023d0,0x11373c890,0x100000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd8c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)PTR____cxa_guard_release_110346be8)(0x11373c888);
          return;
        }
      }
      return;
    }
    lVar3 = param_2 << 3;
    func_0x000107c60e20();
    lVar4 = *param_1;
    *param_1 = lVar3;
    if (lVar4 != 0) {
      func_0x000107c60e14();
    }
    uVar5 = 0;
    param_1[1] = param_2;
    do {
      *(undefined8 *)(*param_1 + uVar5 * 8) = 0;
      uVar5 = uVar5 + 1;
    } while (param_2 != uVar5);
    plVar7 = (long *)param_1[2];
    if (plVar7 != (long *)0x0) {
      uVar5 = plVar7[1];
      uVar6 = param_2 - 1;
      if ((param_2 & uVar6) == 0) {
        uVar5 = uVar5 & uVar6;
      }
      else if (param_2 <= uVar5) {
        uVar10 = 0;
        if (param_2 != 0) {
          uVar10 = uVar5 / param_2;
        }
        uVar5 = uVar5 - uVar10 * param_2;
      }
      *(long **)(*param_1 + uVar5 * 8) = param_1 + 2;
      plVar8 = (long *)*plVar7;
      while (plVar8 != (long *)0x0) {
        uVar10 = plVar8[1];
        if ((param_2 & uVar6) == 0) {
          uVar10 = uVar10 & uVar6;
        }
        else if (param_2 <= uVar10) {
          uVar1 = 0;
          if (param_2 != 0) {
            uVar1 = uVar10 / param_2;
          }
          uVar10 = uVar10 - uVar1 * param_2;
        }
        plVar9 = plVar8;
        if (uVar10 != uVar5) {
          lVar3 = *param_1;
          if (*(long *)(lVar3 + uVar10 * 8) == 0) {
            *(long **)(lVar3 + uVar10 * 8) = plVar7;
            uVar5 = uVar10;
          }
          else {
            *plVar7 = *plVar8;
            *plVar8 = **(undefined8 **)(lVar3 + uVar10 * 8);
            **(long **)(lVar3 + uVar10 * 8) = (long)plVar8;
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



/* Entry: 1000417a8; end: 100042417;  */

/* WARNING: Possible PIC construction at 0x000100041adc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100041d78: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100042014: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100042208: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001000423dc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100042600: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010004276c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001000427dc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100042808: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001000428ec: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100042978: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001000429a0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001000429e0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100042afc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100042b40: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100042b7c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100042b44) */
/* WARNING: Removing unreachable block (ram,0x000100042b00) */
/* WARNING: Removing unreachable block (ram,0x000100042b14) */
/* WARNING: Removing unreachable block (ram,0x000100042b28) */
/* WARNING: Removing unreachable block (ram,0x0001000429e4) */
/* WARNING: Removing unreachable block (ram,0x000100042ad8) */
/* WARNING: Removing unreachable block (ram,0x0001000429f4) */
/* WARNING: Removing unreachable block (ram,0x000100042a00) */
/* WARNING: Removing unreachable block (ram,0x000100042a14) */
/* WARNING: Removing unreachable block (ram,0x000100042a28) */
/* WARNING: Removing unreachable block (ram,0x000100042a3c) */
/* WARNING: Removing unreachable block (ram,0x000100042a50) */
/* WARNING: Removing unreachable block (ram,0x000100042a64) */
/* WARNING: Removing unreachable block (ram,0x000100042a78) */
/* WARNING: Removing unreachable block (ram,0x000100042a8c) */
/* WARNING: Removing unreachable block (ram,0x000100042aa0) */
/* WARNING: Removing unreachable block (ram,0x000100042ad0) */
/* WARNING: Removing unreachable block (ram,0x000100042ab4) */
/* WARNING: Removing unreachable block (ram,0x000100042adc) */
/* WARNING: Removing unreachable block (ram,0x0001000429a4) */
/* WARNING: Removing unreachable block (ram,0x0001000429b4) */
/* WARNING: Removing unreachable block (ram,0x0001000429c8) */
/* WARNING: Removing unreachable block (ram,0x00010004297c) */
/* WARNING: Removing unreachable block (ram,0x0001000428f0) */
/* WARNING: Removing unreachable block (ram,0x000100042920) */
/* WARNING: Removing unreachable block (ram,0x000100042900) */
/* WARNING: Removing unreachable block (ram,0x000100042924) */
/* WARNING: Removing unreachable block (ram,0x000100042944) */
/* WARNING: Removing unreachable block (ram,0x000100042bb0) */
/* WARNING: Removing unreachable block (ram,0x000100042bcc) */
/* WARNING: Removing unreachable block (ram,0x000100042be8) */
/* WARNING: Removing unreachable block (ram,0x000100042958) */
/* WARNING: Removing unreachable block (ram,0x00010004280c) */
/* WARNING: Removing unreachable block (ram,0x000100042870) */
/* WARNING: Removing unreachable block (ram,0x00010004281c) */
/* WARNING: Removing unreachable block (ram,0x000100042874) */
/* WARNING: Removing unreachable block (ram,0x0001000428ac) */
/* WARNING: Removing unreachable block (ram,0x00010004288c) */
/* WARNING: Removing unreachable block (ram,0x0001000428b0) */
/* WARNING: Removing unreachable block (ram,0x0001000428cc) */
/* WARNING: Removing unreachable block (ram,0x0001000427e0) */
/* WARNING: Removing unreachable block (ram,0x0001000427f0) */
/* WARNING: Removing unreachable block (ram,0x000100042770) */
/* WARNING: Removing unreachable block (ram,0x000100042790) */
/* WARNING: Removing unreachable block (ram,0x000100042780) */
/* WARNING: Removing unreachable block (ram,0x000100042794) */
/* WARNING: Removing unreachable block (ram,0x00010004282c) */
/* WARNING: Removing unreachable block (ram,0x00010004283c) */
/* WARNING: Removing unreachable block (ram,0x000100042848) */
/* WARNING: Removing unreachable block (ram,0x000100042858) */
/* WARNING: Removing unreachable block (ram,0x000100042864) */
/* WARNING: Removing unreachable block (ram,0x0001000427b0) */
/* WARNING: Removing unreachable block (ram,0x000100042604) */
/* WARNING: Removing unreachable block (ram,0x000100042634) */
/* WARNING: Removing unreachable block (ram,0x000100042614) */
/* WARNING: Removing unreachable block (ram,0x000100042638) */
/* WARNING: Removing unreachable block (ram,0x000100042670) */
/* WARNING: Removing unreachable block (ram,0x000100042650) */
/* WARNING: Removing unreachable block (ram,0x000100042674) */
/* WARNING: Removing unreachable block (ram,0x00010004268c) */
/* WARNING: Removing unreachable block (ram,0x000100042698) */
/* WARNING: Removing unreachable block (ram,0x0001000426b0) */
/* WARNING: Removing unreachable block (ram,0x0001000426bc) */
/* WARNING: Removing unreachable block (ram,0x0001000426e4) */
/* WARNING: Removing unreachable block (ram,0x0001000426d4) */
/* WARNING: Removing unreachable block (ram,0x0001000426e8) */
/* WARNING: Removing unreachable block (ram,0x000100042700) */
/* WARNING: Removing unreachable block (ram,0x00010004270c) */
/* WARNING: Removing unreachable block (ram,0x00010004272c) */
/* WARNING: Removing unreachable block (ram,0x00010004271c) */
/* WARNING: Removing unreachable block (ram,0x000100042730) */
/* WARNING: Removing unreachable block (ram,0x00010004274c) */
/* WARNING: Removing unreachable block (ram,0x0001000423e0) */
/* WARNING: Removing unreachable block (ram,0x000100042414) */
/* WARNING: Removing unreachable block (ram,0x000100042458) */
/* WARNING: Removing unreachable block (ram,0x000100042438) */
/* WARNING: Removing unreachable block (ram,0x000100042468) */
/* WARNING: Removing unreachable block (ram,0x0001000424a0) */
/* WARNING: Removing unreachable block (ram,0x000100042480) */
/* WARNING: Removing unreachable block (ram,0x0001000424b0) */
/* WARNING: Removing unreachable block (ram,0x0001000424e8) */
/* WARNING: Removing unreachable block (ram,0x0001000424c8) */
/* WARNING: Removing unreachable block (ram,0x0001000424f8) */
/* WARNING: Removing unreachable block (ram,0x000100042530) */
/* WARNING: Removing unreachable block (ram,0x000100042510) */
/* WARNING: Removing unreachable block (ram,0x000100042534) */
/* WARNING: Removing unreachable block (ram,0x00010004256c) */
/* WARNING: Removing unreachable block (ram,0x00010004254c) */
/* WARNING: Removing unreachable block (ram,0x000100042570) */
/* WARNING: Removing unreachable block (ram,0x0001000425a8) */
/* WARNING: Removing unreachable block (ram,0x000100042588) */
/* WARNING: Removing unreachable block (ram,0x0001000425b8) */
/* WARNING: Removing unreachable block (ram,0x0001000425d8) */
/* WARNING: Removing unreachable block (ram,0x0001000423f8) */
/* WARNING: Removing unreachable block (ram,0x00010004220c) */
/* WARNING: Removing unreachable block (ram,0x000100042018) */
/* WARNING: Removing unreachable block (ram,0x000100041d7c) */
/* WARNING: Removing unreachable block (ram,0x000100041ae0) */
/* WARNING: Removing unreachable block (ram,0x000100042b80) */

void FUN_1000417a8(void)

{
  undefined8 uStack_3c0;
  undefined8 uStack_3b8;
  undefined2 uStack_3b0;
  undefined8 uStack_3a8;
  undefined8 uStack_3a0;
  undefined8 uStack_398;
  undefined8 uStack_390;
  undefined8 uStack_388;
  undefined2 uStack_380;
  undefined8 uStack_378;
  undefined8 uStack_370;
  undefined8 uStack_368;
  undefined8 uStack_360;
  undefined8 uStack_358;
  undefined2 uStack_350;
  undefined8 uStack_348;
  undefined8 uStack_340;
  undefined8 uStack_338;
  undefined8 uStack_330;
  undefined8 uStack_328;
  undefined2 uStack_320;
  undefined8 uStack_318;
  undefined8 uStack_310;
  undefined8 uStack_308;
  undefined8 uStack_300;
  undefined8 uStack_2f8;
  undefined2 uStack_2f0;
  undefined8 uStack_2e8;
  undefined8 uStack_2e0;
  undefined8 uStack_2d8;
  undefined8 uStack_2d0;
  undefined8 uStack_2c8;
  undefined2 uStack_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  undefined2 uStack_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined2 uStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined2 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined2 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined2 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined2 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined2 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined2 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined2 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined2 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined2 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined2 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_58;
  
  uStack_58 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  uRam000000011373c958 = 0x4059000000000000;
  uRam000000011373c950 = 0x4057c3020c49ba5e;
  uRam000000011373c960 = 0x405b3883126e978d;
  uStack_3b8 = 0x1d00000025;
  uStack_3c0 = 0x800000006;
  uStack_3b0 = 0;
  uStack_3a0 = 0xbfa2141b41af34d2;
  uStack_3a8 = 0xbf9b8320c95db363;
  uStack_398 = 0;
  uStack_388 = 0x1d00000025;
  uStack_390 = 0x800000006;
  uStack_380 = 0x100;
  uStack_370 = 0x3fa1b2147b116236;
  uStack_378 = 0xbffcf981d7860e4c;
  uStack_368 = 0;
  uStack_358 = 0x1d00000025;
  uStack_360 = 0x800000006;
  uStack_350 = 0x200;
  uStack_340 = 0xbf84b55480cdd53c;
  uStack_348 = 0xbfb19feb9988d612;
  uStack_338 = 0;
  uStack_328 = 0x1e00000025;
  uStack_330 = 0x800000006;
  uStack_320 = 0;
  uStack_310 = 0xbf9965002df9edaa;
  uStack_318 = 0xbfd60ebafd92488a;
  uStack_308 = 0;
  uStack_2f8 = 0x1e00000025;
  uStack_300 = 0x800000006;
  uStack_2f0 = 0x100;
  uStack_2e0 = 0x3f86a901fbdf8831;
  uStack_2e8 = 0x3ff94ae03fea5279;
  uStack_2d8 = 0;
  uStack_2c8 = 0x1e00000025;
  uStack_2d0 = 0x800000006;
  uStack_2c0 = 0x200;
  uStack_2b8 = 0x3f9dd3f3b6045937;
  uStack_2a8 = 0;
  uStack_2b0 = 0x3f91d88bb4e3fec1;
  uStack_298 = 0xc00000008;
  uStack_2a0 = 0x800000006;
  uStack_290 = 0;
  uStack_288 = 0x3f841d274c2cfbcd;
  uStack_278 = 0;
  uStack_280 = 0xbf7a4d29e2233696;
  uStack_268 = 0xc00000008;
  uStack_270 = 0x800000006;
  uStack_260 = 0x100;
  uStack_258 = 0x3fa1ef7ee052321e;
  uStack_248 = 0;
  uStack_250 = 0xbf95f502570f89ca;
  uStack_238 = 0xc00000008;
  uStack_240 = 0x800000006;
  uStack_230 = 0x200;
  uStack_228 = 0xbfbcefc9b29633c1;
  uStack_218 = 0;
  uStack_220 = 0xbf8eeb5cdff3d3c9;
  uStack_208 = 0xd00000006;
  uStack_210 = 0x800000006;
  uStack_200 = 0;
  uStack_1f8 = 0xbf5f902fde4b16ad;
  uStack_1e8 = 0;
  uStack_1f0 = 0xbf83f5ce48aee2af;
  uStack_1d8 = 0xd00000006;
  uStack_1e0 = 0x800000006;
  uStack_1d0 = 0x100;
  uStack_1c8 = 0xbf926f6f70f37f8b;
  uStack_1b8 = 0;
  uStack_1c0 = 0x3f915351627d8b8d;
  uStack_1a8 = 0xd00000006;
  uStack_1b0 = 0x800000006;
  uStack_1a0 = 0x200;
  uStack_198 = 0xbfc2f14fe2362d9e;
  uStack_188 = 0;
  uStack_190 = 0x3f9dc2ee800f7fb1;
  uStack_178 = 0xe00000025;
  uStack_180 = 0x800000006;
  uStack_170 = 0;
  uStack_168 = 0xbfca98a227c58757;
  uStack_158 = 0;
  uStack_160 = 0x3f9180dd61cfbbb0;
  uStack_148 = 0xe00000025;
  uStack_150 = 0x800000006;
  uStack_140 = 0x100;
  uStack_138 = 0xbfbf41703e3cb7d2;
  uStack_128 = 0;
  uStack_130 = 0xbfab0230225ae973;
  uStack_118 = 0xe00000025;
  uStack_120 = 0x800000006;
  uStack_110 = 0x200;
  uStack_108 = 0x3fab17584177a90b;
  uStack_f8 = 0;
  uStack_100 = 0x3f73e64ca5a00d26;
  uStack_e8 = 0xf00000025;
  uStack_f0 = 0x800000006;
  uStack_e0 = 0;
  uStack_d8 = 0xbfd0ec029d4a4577;
  uStack_c8 = 0;
  uStack_d0 = 0x3f8ee34d88423006;
  uStack_b8 = 0xf00000025;
  uStack_c0 = 0x800000006;
  uStack_b0 = 0x100;
  uStack_a8 = 0x3fa96fbeb2606d87;
  uStack_98 = 0;
  uStack_a0 = 0x3fb2a193e8b18310;
  uStack_88 = 0xf00000025;
  uStack_90 = 0x800000006;
  uStack_80 = 0x200;
  uStack_78 = 0x3fa627dc957c2f7a;
  uStack_68 = 0;
  uStack_70 = 0xbf70f60d13e30185;
  FUN_100041444(0x11373c968,&uStack_3c0,0x12);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd844. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR____cxa_atexit_11034bd48)(&UNK_10990216c,0x11373c968,0x100000000);
  return;
}



/* Entry: 100042418; end: 100042bb3;  */

/* WARNING: Possible PIC construction at 0x000100042600: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010004276c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001000427dc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100042808: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001000428ec: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100042978: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001000429a0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001000429e0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100042afc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100042b40: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100042b7c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100042b44) */
/* WARNING: Removing unreachable block (ram,0x000100042b00) */
/* WARNING: Removing unreachable block (ram,0x000100042b14) */
/* WARNING: Removing unreachable block (ram,0x000100042b28) */
/* WARNING: Removing unreachable block (ram,0x0001000429e4) */
/* WARNING: Removing unreachable block (ram,0x000100042ad8) */
/* WARNING: Removing unreachable block (ram,0x0001000429f4) */
/* WARNING: Removing unreachable block (ram,0x000100042a00) */
/* WARNING: Removing unreachable block (ram,0x000100042a14) */
/* WARNING: Removing unreachable block (ram,0x000100042a28) */
/* WARNING: Removing unreachable block (ram,0x000100042a3c) */
/* WARNING: Removing unreachable block (ram,0x000100042a50) */
/* WARNING: Removing unreachable block (ram,0x000100042a64) */
/* WARNING: Removing unreachable block (ram,0x000100042a78) */
/* WARNING: Removing unreachable block (ram,0x000100042a8c) */
/* WARNING: Removing unreachable block (ram,0x000100042aa0) */
/* WARNING: Removing unreachable block (ram,0x000100042ad0) */
/* WARNING: Removing unreachable block (ram,0x000100042ab4) */
/* WARNING: Removing unreachable block (ram,0x000100042adc) */
/* WARNING: Removing unreachable block (ram,0x0001000429a4) */
/* WARNING: Removing unreachable block (ram,0x0001000429b4) */
/* WARNING: Removing unreachable block (ram,0x0001000429c8) */
/* WARNING: Removing unreachable block (ram,0x00010004297c) */
/* WARNING: Removing unreachable block (ram,0x0001000428f0) */
/* WARNING: Removing unreachable block (ram,0x000100042920) */
/* WARNING: Removing unreachable block (ram,0x000100042900) */
/* WARNING: Removing unreachable block (ram,0x000100042924) */
/* WARNING: Removing unreachable block (ram,0x000100042944) */
/* WARNING: Removing unreachable block (ram,0x000100042bb0) */
/* WARNING: Removing unreachable block (ram,0x000100042bcc) */
/* WARNING: Removing unreachable block (ram,0x000100042be8) */
/* WARNING: Removing unreachable block (ram,0x000100042958) */
/* WARNING: Removing unreachable block (ram,0x00010004280c) */
/* WARNING: Removing unreachable block (ram,0x000100042870) */
/* WARNING: Removing unreachable block (ram,0x00010004281c) */
/* WARNING: Removing unreachable block (ram,0x000100042874) */
/* WARNING: Removing unreachable block (ram,0x0001000428ac) */
/* WARNING: Removing unreachable block (ram,0x00010004288c) */
/* WARNING: Removing unreachable block (ram,0x0001000428b0) */
/* WARNING: Removing unreachable block (ram,0x0001000428cc) */
/* WARNING: Removing unreachable block (ram,0x0001000427e0) */
/* WARNING: Removing unreachable block (ram,0x0001000427f0) */
/* WARNING: Removing unreachable block (ram,0x000100042770) */
/* WARNING: Removing unreachable block (ram,0x000100042790) */
/* WARNING: Removing unreachable block (ram,0x000100042780) */
/* WARNING: Removing unreachable block (ram,0x000100042794) */
/* WARNING: Removing unreachable block (ram,0x00010004282c) */
/* WARNING: Removing unreachable block (ram,0x00010004283c) */
/* WARNING: Removing unreachable block (ram,0x000100042848) */
/* WARNING: Removing unreachable block (ram,0x000100042858) */
/* WARNING: Removing unreachable block (ram,0x000100042864) */
/* WARNING: Removing unreachable block (ram,0x0001000427b0) */
/* WARNING: Removing unreachable block (ram,0x000100042604) */
/* WARNING: Removing unreachable block (ram,0x000100042634) */
/* WARNING: Removing unreachable block (ram,0x000100042614) */
/* WARNING: Removing unreachable block (ram,0x000100042638) */
/* WARNING: Removing unreachable block (ram,0x000100042670) */
/* WARNING: Removing unreachable block (ram,0x000100042650) */
/* WARNING: Removing unreachable block (ram,0x000100042674) */
/* WARNING: Removing unreachable block (ram,0x00010004268c) */
/* WARNING: Removing unreachable block (ram,0x000100042698) */
/* WARNING: Removing unreachable block (ram,0x0001000426b0) */
/* WARNING: Removing unreachable block (ram,0x0001000426bc) */
/* WARNING: Removing unreachable block (ram,0x0001000426e4) */
/* WARNING: Removing unreachable block (ram,0x0001000426d4) */
/* WARNING: Removing unreachable block (ram,0x0001000426e8) */
/* WARNING: Removing unreachable block (ram,0x000100042700) */
/* WARNING: Removing unreachable block (ram,0x00010004270c) */
/* WARNING: Removing unreachable block (ram,0x00010004272c) */
/* WARNING: Removing unreachable block (ram,0x00010004271c) */
/* WARNING: Removing unreachable block (ram,0x000100042730) */
/* WARNING: Removing unreachable block (ram,0x00010004274c) */
/* WARNING: Removing unreachable block (ram,0x000100042b80) */

void FUN_100042418(void)

{
  char *pcVar1;
  undefined1 uVar2;
  char *pcVar3;
  undefined *puVar4;
  
  pcVar3 = "GLOG_timestamp_in_logfile_name";
  func_0x000107c60ffc();
  if (pcVar3 == (char *)0x0) {
    uVar2 = 0xdc;
    FUN_100042bb4(&UNK_10f5934dc,1);
    uRam000000011374c020 = uVar2;
  }
  else {
    puVar4 = &UNK_10e00f5d0;
    func_0x000107c610ac(&UNK_10e00f5d0,(long)*pcVar3,6);
    uRam000000011374c020 = puVar4 != (undefined *)0x0;
  }
  pcVar3 = "GLOG_logtostderr";
  func_0x000107c60ffc();
  if (pcVar3 == (char *)0x0) {
    uVar2 = 0xe;
    FUN_100042bb4(&UNK_10f59350e,0);
    uRam000000011382bab8 = uVar2;
  }
  else {
    puVar4 = &UNK_10e00f5d0;
    func_0x000107c610ac(&UNK_10e00f5d0,(long)*pcVar3,6);
    uRam000000011382bab8 = puVar4 != (undefined *)0x0;
  }
  pcVar3 = "GLOG_alsologtostderr";
  func_0x000107c60ffc();
  if (pcVar3 == (char *)0x0) {
    uVar2 = 0x36;
    FUN_100042bb4(&UNK_10f593536,0);
    uRam000000011382bab9 = uVar2;
  }
  else {
    puVar4 = &UNK_10e00f5d0;
    func_0x000107c610ac(&UNK_10e00f5d0,(long)*pcVar3,6);
    uRam000000011382bab9 = puVar4 != (undefined *)0x0;
  }
  pcVar3 = "GLOG_colorlogtostderr";
  func_0x000107c60ffc();
  if (pcVar3 == (char *)0x0) {
    uRam000000011374c021 = false;
  }
  else {
    puVar4 = &UNK_10e00f5d0;
    func_0x000107c610ac(&UNK_10e00f5d0,(long)*pcVar3,6);
    uRam000000011374c021 = puVar4 != (undefined *)0x0;
  }
  pcVar3 = "GLOG_colorlogtostdout";
  func_0x000107c60ffc();
  if (pcVar3 == (char *)0x0) {
    uRam000000011374c022 = false;
  }
  else {
    puVar4 = &UNK_10e00f5d0;
    func_0x000107c610ac(&UNK_10e00f5d0,(long)*pcVar3,6);
    uRam000000011374c022 = puVar4 != (undefined *)0x0;
  }
  pcVar3 = "GLOG_logtostdout";
  func_0x000107c60ffc();
  if (pcVar3 == (char *)0x0) {
    uVar2 = 0x8a;
    FUN_100042bb4(&UNK_10f59358a,0);
    uRam000000011382baba = uVar2;
  }
  else {
    puVar4 = &UNK_10e00f5d0;
    func_0x000107c610ac(&UNK_10e00f5d0,(long)*pcVar3,6);
    uRam000000011382baba = puVar4 != (undefined *)0x0;
  }
  pcVar3 = "GLOG_alsologtoemail";
  func_0x000107c60ffc();
  pcVar1 = "";
  if (pcVar3 != (char *)0x0) {
    pcVar1 = pcVar3;
  }
  FUN_10002d4d8(0x11374c048,pcVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd844. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR____cxa_atexit_11034bd48)
            (PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED1Ev_110346340,
             0x11374c048,0x100000000);
  return;
}



/* Entry: 100042bb4; end: 100042bf7;  */

ulong FUN_100042bb4(char *param_1,ulong param_2)

{
  undefined *puVar1;
  
  func_0x000107c60ffc();
  if (param_1 != (char *)0x0) {
    puVar1 = &UNK_10e00f5d0;
    func_0x000107c610ac(&UNK_10e00f5d0,(long)*param_1,6);
    param_2 = (ulong)(puVar1 != (undefined *)0x0);
  }
  return param_2;
}



/* Entry: 100042bf8; end: 100042d57;  */

long FUN_100042bf8(long param_1,ulong param_2)

{
  long lVar1;
  
  if (param_2 < 0x7531) {
    lVar1 = param_1 + 4;
  }
  else {
    lVar1 = param_2 + 1;
    func_0x000107c60e1c();
  }
  *(long *)(param_1 + 0x7538) = lVar1;
  *(undefined8 *)(param_1 + 0x75c8) = 0;
  *(undefined ***)(param_1 + 0x7540) =
       &PTR___ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEED1Ev_110b1f180;
  *(undefined ***)(param_1 + 0x7598) =
       &PTR___ZTv0_n24_NSt3__113basic_ostreamIcNS_11char_traitsIcEEED1Ev_110b1f1a8;
  func_0x000107c60dd0(param_1 + 0x7598,0);
  *(undefined8 *)(param_1 + 0x7620) = 0;
  *(undefined4 *)(param_1 + 0x7628) = 0xffffffff;
  *(undefined ***)(param_1 + 0x7540) = &PTR_DAT_110b1f110;
  *(undefined ***)(param_1 + 0x7598) = &PTR_DAT_110b1f138;
  *(undefined **)(param_1 + 0x7548) =
       PTR___ZTVNSt3__115basic_streambufIcNS_11char_traitsIcEEEE_110346b20 + 0x10;
  func_0x000107c60dac(param_1 + 0x7550);
  *(undefined8 *)(param_1 + 0x7560) = 0;
  *(undefined8 *)(param_1 + 0x7558) = 0;
  *(undefined8 *)(param_1 + 0x7568) = 0;
  *(undefined ***)(param_1 + 0x7548) = &PTR_DAT_110b1f1c8;
  *(long *)(param_1 + 0x7578) = lVar1;
  *(long *)(param_1 + 0x7570) = lVar1;
  *(long *)(param_1 + 0x7580) = lVar1 + (int)param_2 + -2;
  *(undefined8 *)(param_1 + 0x7588) = 0;
  *(long *)(param_1 + 0x7590) = param_1 + 0x7540;
  lVar1 = param_1 + 0x7540 + *(long *)(*(long *)(param_1 + 0x7540) + -0x18);
  *(long *)(lVar1 + 0x28) = param_1 + 0x7548;
  func_0x000107c60dd4(lVar1,0);
  return param_1;
}



/* Entry: 100042d58; end: 100042eef;  */

/* WARNING: Removing unreachable block (ram,0x000100042e0c) */

code * FUN_100042d58(void)

{
  undefined4 uVar1;
  undefined *puVar2;
  code *pcVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  uint uVar7;
  ulong uVar8;
  undefined8 *puVar9;
  code *pcVar10;
  undefined1 auStack_438 [1024];
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = 0xf5939e1;
  func_0x000107c60ffc();
  func_0x000107c6100c();
  uRam000000011382bae8 = uVar1;
  func_0x000107c60e34(PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED1Ev_110346340
                      ,0x11382baf0,0x100000000);
  puVar2 = &DAT_10f450c35;
  func_0x000107c60ffc();
  if (puVar2 == (undefined *)0x0) {
    func_0x000107c60ee4(auStack_438,0x400);
    func_0x000107c61000();
    func_0x000107c61014();
    func_0x000107c61318(auStack_438,0x400,&UNK_10f593a03);
    FUN_100042ef0(0x11382baf0,auStack_438);
    uVar5 = uRam000000011382baf8;
    if (-1 < (char)bRam000000011382bb07) {
      uVar5 = (ulong)bRam000000011382bb07;
    }
    if (uVar5 == 0) {
      if ((char)bRam000000011382bb07 < '\0') {
        uRam000000011382baf8 = 0xc;
        puVar9 = puRam000000011382baf0;
      }
      else {
        bRam000000011382bb07 = 0xc;
        puVar9 = (undefined8 *)0x11382baf0;
      }
      *(undefined4 *)(puVar9 + 1) = 0x72657375;
      *puVar9 = 0x2d64696c61766e69;
      *(undefined1 *)((long)puVar9 + 0xc) = 0;
    }
  }
  else {
    FUN_100042ef0(0x11382baf0,puVar2);
  }
  pcVar3 = FUN_100043000;
  uVar5 = 0;
  func_0x000107c60bd4();
  uRam000000011382bb10 = 1;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return pcVar3;
  }
  func_0x000107c60e78();
  func_0x000107c60bd8();
  uVar4 = uVar5;
  func_0x000107c613d0();
  uVar8 = (ulong)(char)pcVar3[0x17];
  if ((long)uVar8 < 0) {
    uVar6 = (*(ulong *)(pcVar3 + 0x10) & 0x7fffffffffffffff) - 1;
    if (uVar4 <= uVar6) {
      uVar8 = *(ulong *)(pcVar3 + 0x10) >> 0x38;
      pcVar10 = *(code **)pcVar3;
      goto LAB_100042fa8;
    }
    uVar8 = *(ulong *)(pcVar3 + 8);
  }
  else {
    pcVar10 = pcVar3;
    if (uVar4 < 0x17) {
LAB_100042fa8:
      uVar7 = (uint)uVar8;
      if (uVar4 != 0) {
        func_0x000107c610b8(pcVar10,uVar5,uVar4);
        uVar7 = (uint)(byte)pcVar3[0x17];
      }
      if ((uVar7 >> 7 & 1) != 0) {
        *(ulong *)(pcVar3 + 8) = uVar4;
        pcVar10[uVar4] = (code)0x0;
        return pcVar3;
      }
      pcVar3[0x17] = (code)((byte)uVar4 & 0x7f);
      pcVar10[uVar4] = (code)0x0;
      return pcVar3;
    }
    uVar6 = 0x16;
  }
  func_0x000107c60c48(pcVar3,uVar6,uVar4 - uVar6,uVar8,0,uVar8,uVar4);
  return pcVar3;
}



/* Entry: 100042ef0; end: 100042f23;  */

undefined8 * FUN_100042ef0(undefined8 *param_1,ulong param_2)

{
  ulong uVar1;
  ulong uVar2;
  uint uVar3;
  ulong uVar4;
  undefined8 *puVar5;
  
  uVar1 = param_2;
  func_0x000107c613d0();
  uVar4 = (ulong)*(char *)((long)param_1 + 0x17);
  if ((long)uVar4 < 0) {
    uVar2 = (param_1[2] & 0x7fffffffffffffff) - 1;
    if (uVar1 <= uVar2) {
      uVar4 = (ulong)param_1[2] >> 0x38;
      puVar5 = (undefined8 *)*param_1;
      goto LAB_100042fa8;
    }
    uVar4 = param_1[1];
  }
  else {
    puVar5 = param_1;
    if (uVar1 < 0x17) {
LAB_100042fa8:
      uVar3 = (uint)uVar4;
      if (uVar1 != 0) {
        func_0x000107c610b8(puVar5,param_2,uVar1);
        uVar3 = (uint)*(byte *)((long)param_1 + 0x17);
      }
      if ((uVar3 >> 7 & 1) == 0) {
        *(byte *)((long)param_1 + 0x17) = (byte)uVar1 & 0x7f;
        *(undefined1 *)((long)puVar5 + uVar1) = 0;
        return param_1;
      }
      param_1[1] = uVar1;
      *(undefined1 *)((long)puVar5 + uVar1) = 0;
      return param_1;
    }
    uVar2 = 0x16;
  }
  func_0x000107c60c48(param_1,uVar2,uVar1 - uVar2,uVar4,0,uVar4,uVar1);
  return param_1;
}



/* Entry: 100042f24; end: 100042fff;  */

undefined8 * FUN_100042f24(undefined8 *param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  uint uVar2;
  ulong uVar3;
  undefined8 *puVar4;
  
  uVar3 = (ulong)*(char *)((long)param_1 + 0x17);
  if ((long)uVar3 < 0) {
    uVar1 = (param_1[2] & 0x7fffffffffffffff) - 1;
    if (param_3 <= uVar1) {
      uVar3 = (ulong)param_1[2] >> 0x38;
      puVar4 = (undefined8 *)*param_1;
      goto LAB_100042fa8;
    }
    uVar3 = param_1[1];
  }
  else {
    puVar4 = param_1;
    if (param_3 < 0x17) {
LAB_100042fa8:
      uVar2 = (uint)uVar3;
      if (param_3 != 0) {
        func_0x000107c610b8(puVar4,param_2,param_3);
        uVar2 = (uint)*(byte *)((long)param_1 + 0x17);
      }
      if ((uVar2 >> 7 & 1) == 0) {
        *(byte *)((long)param_1 + 0x17) = (byte)param_3 & 0x7f;
        *(undefined1 *)((long)puVar4 + param_3) = 0;
        return param_1;
      }
      param_1[1] = param_3;
      *(undefined1 *)((long)puVar4 + param_3) = 0;
      return param_1;
    }
    uVar1 = 0x16;
  }
  func_0x000107c60c48(param_1,uVar1,param_3 - uVar1,uVar3,0,uVar3,param_3);
  return param_1;
}



/* Entry: 100043000; end: 100043007;  */

undefined8 FUN_100043000(void)

{
  return 0;
}



/* Entry: 100043008; end: 1000430cb;  */

/* WARNING: Possible PIC construction at 0x000100043078: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010004307c) */
/* WARNING: Removing unreachable block (ram,0x000100043090) */
/* WARNING: Removing unreachable block (ram,0x0001000430c8) */
/* WARNING: Removing unreachable block (ram,0x0001000430a4) */

void FUN_100043008(void)

{
  char *pcVar1;
  undefined *puVar2;
  char *pcVar3;
  
  puVar2 = &UNK_10f593a17;
  func_0x000107c60ffc();
  if (puVar2 != (undefined *)0x0) {
    func_0x000107c613e8();
  }
  uRam000000011382bb14 = SUB84(puVar2,0);
  pcVar3 = "GLOG_vmodule";
  func_0x000107c60ffc();
  pcVar1 = "";
  if (pcVar3 != (char *)0x0) {
    pcVar1 = pcVar3;
  }
  FUN_10002d4d8(0x11374c4e8,pcVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd844. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR____cxa_atexit_11034bd48)
            (PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED1Ev_110346340,
             0x11374c4e8,0x100000000);
  return;
}



/* Entry: 1000430cc; end: 1000430ef;  */

void FUN_1000430cc(void)

{
  uRam000000011374c5d0 = 0;
  uRam000000011374c5d8 = 0;
  uRam000000011374c5e0 = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd844. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR____cxa_atexit_11034bd48)(&UNK_1099ae008,0x11374c5d0,0x100000000);
  return;
}



/* Entry: 1000430f0; end: 10004315b;  */

void FUN_1000430f0(undefined8 param_1)

{
  func_0x000107c6110c();
  uRam000000011374c5f0 = 0;
  uRam000000011374c5e8 = 0;
  uRam000000011374c600 = 0;
  uRam000000011374c5f8 = 0;
  uRam000000011374c608 = 0x3f800000;
  func_0x000107c60e34(&UNK_1099f6bb8,0x11374c5e8,0x100000000);
  func_0x000107c60e34(PTR___ZNSt3__15mutexD1Ev_110346798,0x1132e81e0,0x100000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf278. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleasePoolPop_11034d1d0)(param_1);
  return;
}



/* Entry: 10004315c; end: 10004345b;  */

void FUN_10004315c(void)

{
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  
  uStack_a8 = 0x4800000000;
  uStack_a0 = 0;
  uStack_98 = 0;
  puStack_90 = &UNK_10f59933f;
  puStack_88 = &UNK_109aae494;
  puStack_80 = &UNK_109aae4ac;
  puStack_78 = &UNK_109aae568;
  puStack_70 = &UNK_109aaef54;
  puStack_68 = &UNK_109aaf0b0;
  FUN_10004345c(&uStack_a8);
  uRam000000011374c7f0 = uRam000000011382bbc0;
  func_0x000107c60e34(&UNK_109aae40c,0x11374c7f0,0x100000000);
  uStack_a8 = 0x4800000000;
  uStack_a0 = 0;
  uStack_98 = 0;
  puStack_90 = &UNK_10f59934f;
  puStack_88 = &UNK_109aae494;
  puStack_80 = &UNK_109aae4ac;
  puStack_78 = &UNK_109aaf0c0;
  puStack_70 = &UNK_109aaef54;
  puStack_68 = &UNK_109aaf0b0;
  FUN_10004345c(&uStack_a8);
  uRam000000011374c7f8 = uRam000000011382bbc0;
  func_0x000107c60e34(&UNK_109aae40c,0x11374c7f8,0x100000000);
  uStack_a8 = 0x4800000000;
  uStack_a0 = 0;
  uStack_98 = 0;
  puStack_90 = &UNK_10f599364;
  puStack_88 = &UNK_109aaf39c;
  puStack_80 = &UNK_109aaf3c0;
  puStack_78 = &UNK_109aaf47c;
  puStack_70 = &UNK_109aaffac;
  puStack_68 = &UNK_109ab0598;
  FUN_10004345c(&uStack_a8);
  uRam000000011374c800 = uRam000000011382bbc0;
  func_0x000107c60e34(&UNK_109aae40c,0x11374c800,0x100000000);
  uStack_a8 = 0x4800000000;
  uStack_a0 = 0;
  uStack_98 = 0;
  puStack_90 = &UNK_10f599371;
  puStack_88 = &UNK_109ab05a0;
  puStack_80 = &UNK_109a3afa4;
  puStack_78 = &UNK_109ab05b8;
  puStack_70 = &UNK_109ab0b1c;
  puStack_68 = &UNK_109a3b0f0;
  FUN_10004345c(&uStack_a8);
  uRam000000011374c808 = uRam000000011382bbc0;
  func_0x000107c60e34(&UNK_109aae40c,0x11374c808,0x100000000);
  uStack_a8 = 0x4800000000;
  uStack_a0 = 0;
  uStack_98 = 0;
  puStack_90 = &UNK_10f599386;
  puStack_88 = &UNK_109ab0e1c;
  puStack_80 = &UNK_109a3d454;
  puStack_78 = &UNK_109ab0e30;
  puStack_70 = &UNK_109ab1508;
  puStack_68 = &UNK_109a3d86c;
  FUN_10004345c(&uStack_a8);
  uRam000000011374c810 = uRam000000011382bbc0;
  func_0x000107c60e34(&UNK_109aae40c,0x11374c810,0x100000000);
  uStack_a8 = 0x4800000000;
  uStack_a0 = 0;
  uStack_98 = 0;
  puStack_90 = &UNK_10f599393;
  puStack_88 = &UNK_109ab1868;
  puStack_80 = &UNK_109a395e8;
  puStack_78 = &UNK_109ab189c;
  puStack_70 = &UNK_109ab1c14;
  puStack_68 = &UNK_109a39788;
  FUN_10004345c(&uStack_a8);
  uRam000000011374c818 = uRam000000011382bbc0;
  func_0x000107c60e34(&UNK_109aae40c,0x11374c818,0x100000000);
  uStack_a8 = 0x4800000000;
  uStack_a0 = 0;
  uStack_98 = 0;
  puStack_90 = &UNK_10f5993a1;
  puStack_88 = &UNK_109ab1d68;
  puStack_80 = &UNK_109ab1d80;
  puStack_78 = &UNK_109ab1d84;
  puStack_70 = &UNK_109ab2154;
  puStack_68 = &UNK_109a39cf4;
  FUN_10004345c(&uStack_a8);
  uRam000000011374c820 = uRam000000011382bbc0;
  func_0x000107c60e34(&UNK_109aae40c,0x11374c820,0x100000000);
  return;
}



/* Entry: 10004345c; end: 1000437c7;  */

void FUN_10004345c(undefined8 *param_1)

{
  undefined8 *puVar1;
  byte bVar2;
  code *pcVar3;
  byte *pbVar4;
  undefined8 *puVar5;
  undefined4 *puVar6;
  ulong uVar7;
  undefined8 uVar8;
  int iVar9;
  byte *pbVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined4 *puStack_40;
  undefined8 uStack_38;
  
  if ((param_1 == (undefined8 *)0x0) || (*(int *)((long)param_1 + 4) != 0x48)) {
    puVar6 = (undefined4 *)0x18;
    FUN_1000437c8();
    *puVar6 = 1;
    puStack_40 = puVar6 + 1;
    uStack_38 = 0x11;
    *(undefined2 *)(puVar6 + 5) = 0x6f;
    *(undefined8 *)(puVar6 + 3) = 0x666e692065707974;
    *(undefined8 *)(puVar6 + 1) = 0x2064696c61766e49;
    func_0x000107c2ae94(0xffffff37,&puStack_40,&UNK_10f5993c4,&UNK_10f598d74,0x12d5);
  }
  else if ((((param_1[4] == 0) || (param_1[5] == 0)) || (param_1[6] == 0)) || (param_1[7] == 0)) {
    puVar6 = (undefined4 *)0x58;
    FUN_1000437c8();
    *(undefined8 *)(puVar6 + 7) = 0x65746e696f70206e;
    *(undefined8 *)(puVar6 + 5) = 0x6f6974636e756620;
    *(undefined8 *)(puVar6 + 0xb) = 0x2c65636e6174736e;
    *(undefined8 *)(puVar6 + 9) = 0x695f736928207372;
    *(undefined8 *)(puVar6 + 0xf) = 0x6f2064616572202c;
    *(undefined8 *)(puVar6 + 0xd) = 0x657361656c657220;
    *(undefined8 *)(puVar6 + 0x13) = 0x4c554e2065726120;
    *(undefined8 *)(puVar6 + 0x11) = 0x2965746972772072;
    *puVar6 = 1;
    puStack_40 = puVar6 + 1;
    uStack_38 = 0x51;
    *(undefined2 *)(puVar6 + 0x15) = 0x4c;
    *(undefined8 *)(puVar6 + 3) = 0x6465726975716572;
    *(undefined8 *)(puVar6 + 1) = 0x20666f20656d6f53;
    func_0x000107c2ae94(0xffffffe5,&puStack_40,&UNK_10f5993c4,&UNK_10f598d74,0x12db);
  }
  else {
    pbVar10 = (byte *)param_1[3];
    if (*pbVar10 == 0x5f || (*pbVar10 & 0xffffffdf) - 0x41 < 0x1a) {
      pbVar4 = pbVar10;
      func_0x000107c613d0();
      iVar9 = (int)pbVar4;
      if (0 < iVar9) {
        uVar7 = (ulong)pbVar4 & 0x7fffffff;
        do {
          bVar2 = *pbVar10;
          if ((((byte)(bVar2 - 0x3a) < 0xf6) && ((byte)((bVar2 & 0xdf) + 0xa5) < 0xe6)) &&
             ((bVar2 != 0x2d && (bVar2 != 0x5f)))) {
            puVar6 = (undefined4 *)0x3c;
            FUN_1000437c8();
            *(undefined8 *)(puVar6 + 3) = 0x646c756f68732065;
            *(undefined8 *)(puVar6 + 1) = 0x6d616e2065707954;
            *puVar6 = 1;
            puStack_40 = puVar6 + 1;
            uStack_38 = 0x36;
            *(undefined1 *)((long)puVar6 + 0x3a) = 0;
            *(undefined8 *)(puVar6 + 7) = 0x656c20796c6e6f20;
            *(undefined8 *)(puVar6 + 5) = 0x6e6961746e6f6320;
            *(undefined8 *)(puVar6 + 0xb) = 0x2d202c7374696769;
            *(undefined8 *)(puVar6 + 9) = 0x64202c7372657474;
            *(undefined8 *)((long)puVar6 + 0x32) = 0x5f20646e61202d20;
            func_0x000107c2ae94(0xfffffffb,&puStack_40,&UNK_10f5993c4,&UNK_10f598d74,0x12e8);
            goto LAB_100043740;
          }
          uVar7 = uVar7 - 1;
          pbVar10 = pbVar10 + 1;
        } while (uVar7 != 0);
      }
      puVar5 = (undefined8 *)((long)iVar9 + 0x49);
      FUN_1000437c8();
      uVar14 = param_1[5];
      uVar13 = param_1[4];
      uVar12 = param_1[7];
      uVar11 = param_1[6];
      uVar8 = param_1[8];
      uVar15 = param_1[2];
      puVar5[3] = param_1[3];
      puVar5[2] = uVar15;
      uVar15 = *param_1;
      puVar5[1] = param_1[1];
      *puVar5 = uVar15;
      puVar5[8] = uVar8;
      puVar5[5] = uVar14;
      puVar5[4] = uVar13;
      puVar5[7] = uVar12;
      puVar5[6] = uVar11;
      puVar5[3] = puVar5 + 9;
      func_0x000107c610b4(puVar5 + 9,param_1[3],(long)(iVar9 + 1));
      *(undefined4 *)puVar5 = 0;
      puVar5[1] = 0;
      puVar5[2] = puRam000000011382bbc0;
      puVar1 = (undefined8 *)0x11374c7e8;
      if (puRam000000011382bbc0 != (undefined8 *)0x0) {
        puVar1 = (undefined8 *)((long)puRam000000011382bbc0 + 8);
      }
      *puVar1 = puVar5;
      puRam000000011382bbc0 = puVar5;
      return;
    }
    puVar6 = (undefined4 *)0x30;
    FUN_1000437c8();
    *(undefined8 *)(puVar6 + 3) = 0x646c756f68732065;
    *(undefined8 *)(puVar6 + 1) = 0x6d616e2065707954;
    *puVar6 = 1;
    puStack_40 = puVar6 + 1;
    uStack_38 = 0x29;
    *(undefined1 *)((long)puVar6 + 0x2d) = 0;
    *(undefined8 *)(puVar6 + 7) = 0x656c206120687469;
    *(undefined8 *)(puVar6 + 5) = 0x7720747261747320;
    *(undefined8 *)((long)puVar6 + 0x25) = 0x5f20726f20726574;
    *(undefined8 *)((long)puVar6 + 0x1d) = 0x74656c2061206874;
    func_0x000107c2ae94(0xfffffffb,&puStack_40,&UNK_10f5993c4,&UNK_10f598d74,0x12df);
  }
LAB_100043740:
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x100043744);
  (*pcVar3)();
}



/* Entry: 1000437c8; end: 100043877;  */

ulong FUN_1000437c8(long param_1)

{
  code *pcVar1;
  ulong uVar2;
  undefined1 auStack_30 [16];
  
  param_1 = param_1 + 0x18;
  func_0x000107c610a0();
  if (param_1 != 0) {
    uVar2 = param_1 + 0x17U & 0xfffffffffffffff0;
    *(long *)(uVar2 - 8) = param_1;
    return uVar2;
  }
  func_0x000107c2ae90(auStack_30,&UNK_10f594d30);
  func_0x000107c2ae94(0xfffffffc,auStack_30,&UNK_10f594d4d,&UNK_10f594d5e,0x34);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100043840);
  (*pcVar1)();
}



/* Entry: 100043878; end: 10004390b;  */

void FUN_100043878(void)

{
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined *puStack_40;
  undefined *puStack_38;
  undefined *puStack_30;
  undefined *puStack_28;
  undefined *puStack_20;
  undefined *puStack_18;
  
  uStack_58 = 0x4800000000;
  uStack_50 = 0;
  uStack_48 = 0;
  puStack_40 = &UNK_10f59d2f0;
  puStack_38 = &UNK_109b0e99c;
  puStack_30 = &UNK_109b0e808;
  puStack_28 = &UNK_109b0e9c8;
  puStack_20 = &UNK_109b0ef44;
  puStack_18 = &UNK_109b0f110;
  FUN_10004345c(&uStack_58);
  uRam000000011375b130 = uRam000000011382bbc0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd844. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR____cxa_atexit_11034bd48)(&UNK_109aae40c,0x11375b130,0x100000000);
  return;
}



/* Entry: 10004390c; end: 10004398b;  */

void FUN_10004390c(void)

{
  uRam00000001137e1180 = 0x11375b140;
  FUN_10004398c(1,0);
  FUN_10004398c(1,1);
  FUN_10004398c(2,0);
  FUN_10004398c(2,1);
  FUN_10004398c(4,0);
  FUN_10004398c(4,1);
  uRam00000001137e1178 = 1;
  return;
}



/* Entry: 10004398c; end: 100044087;  */

float * FUN_10004398c(uint param_1,int param_2)

{
  uint uVar1;
  short sVar2;
  short sVar3;
  double dVar4;
  ulong uVar5;
  code *pcVar6;
  undefined4 *puVar7;
  float *pfVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  double *pdVar12;
  long lVar13;
  ulong uVar14;
  undefined2 *puVar15;
  ulong uVar16;
  ulong uVar17;
  ulong uVar18;
  undefined2 *puVar19;
  float *pfVar20;
  long lVar21;
  float *pfVar22;
  ulong uVar23;
  uint uVar24;
  float *pfVar25;
  float *pfVar26;
  float *pfVar27;
  float *pfVar28;
  float *pfVar29;
  ulong uVar30;
  ulong uVar31;
  long lVar32;
  uint uVar33;
  ulong uVar34;
  uint uVar35;
  long lVar36;
  undefined1 uVar37;
  undefined1 uVar38;
  undefined1 uVar39;
  undefined1 uVar40;
  undefined1 uVar41;
  undefined1 uVar42;
  undefined1 uVar43;
  undefined1 uVar44;
  undefined1 uVar45;
  undefined1 uVar46;
  undefined1 uVar47;
  undefined1 uVar48;
  undefined1 uVar49;
  undefined1 uVar50;
  undefined1 uVar51;
  undefined1 uVar52;
  float fVar53;
  double extraout_d1;
  float fVar54;
  int iVar55;
  int iVar56;
  int iVar57;
  int iVar58;
  undefined1 auVar59 [16];
  float fVar60;
  double dVar61;
  undefined1 auVar62 [16];
  float fVar64;
  double dVar65;
  undefined1 auVar63 [16];
  double dVar66;
  double dVar68;
  double dVar69;
  undefined1 auVar67 [16];
  undefined1 auVar70 [16];
  undefined1 auVar71 [16];
  float fVar72;
  float fVar74;
  float fVar75;
  undefined1 auVar73 [16];
  float fVar76;
  float fVar77;
  float fVar78;
  float fVar79;
  float fVar80;
  float fVar81;
  float fVar83;
  float fVar84;
  undefined1 auVar82 [16];
  float fVar85;
  float *pfStack_4d8;
  undefined8 uStack_4d0;
  float afStack_4c8 [2];
  undefined8 uStack_4c0;
  float afStack_4b8 [2];
  undefined8 uStack_4b0;
  float afStack_4a8 [256];
  undefined4 *puStack_a8;
  undefined8 uStack_a0;
  
  pfVar29 = (float *)0x113767178;
  if (param_1 == 1) {
    pfVar28 = (float *)0x113763178;
    uVar34 = 2;
  }
  else if (param_1 == 2) {
    pfVar28 = (float *)0x113769178;
    uVar34 = 4;
    pfVar29 = (float *)0x113779178;
  }
  else {
    if (param_1 != 4) {
      puVar7 = (undefined4 *)0x2c;
      FUN_1000437c8();
      *puVar7 = 1;
      pfStack_4d8 = (float *)(puVar7 + 1);
      uStack_4d0 = 0x26;
      *(undefined8 *)(puVar7 + 3) = 0x726f707075736e75;
      *(undefined8 *)(puVar7 + 1) = 0x2f6e776f6e6b6e55;
      *(undefined1 *)((long)puVar7 + 0x2a) = 0;
      *(undefined8 *)(puVar7 + 7) = 0x6f6974616c6f7072;
      *(undefined8 *)(puVar7 + 5) = 0x65746e6920646574;
      *(undefined8 *)((long)puVar7 + 0x22) = 0x65707974206e6f69;
      func_0x000107c2ae94(0xfffffffb,&pfStack_4d8,&UNK_10f59d779,&UNK_10f59d381,0xe0);
      goto LAB_100044014;
    }
    pfVar28 = (float *)0x113781178;
    uVar34 = 8;
    pfVar29 = (float *)0x1137c1178;
  }
  if ((*(byte *)((ulong)param_1 + 0x1137e1188) & 1) == 0) {
    uStack_4d0 = 0x100;
    pfStack_4d8 = afStack_4c8;
    if (param_1 == 1) {
      lVar13 = 0;
      uVar45 = 2;
      uVar46 = 0;
      uVar47 = 0;
      uVar48 = 0;
      uVar49 = 3;
      uVar50 = 0;
      uVar51 = 0;
      uVar52 = 0;
      uVar37 = 0;
      uVar38 = 0;
      uVar39 = 0;
      uVar40 = 0;
      uVar41 = 1;
      uVar42 = 0;
      uVar43 = 0;
      uVar44 = 0;
      auVar82 = NEON_fmov(0x3f800000,4);
      do {
        auVar62[1] = uVar38;
        auVar62[0] = uVar37;
        auVar62[2] = uVar39;
        auVar62[3] = uVar40;
        auVar62[4] = uVar41;
        auVar62[5] = uVar42;
        auVar62[6] = uVar43;
        auVar62[7] = uVar44;
        auVar62[8] = uVar45;
        auVar62[9] = uVar46;
        auVar62[10] = uVar47;
        auVar62[0xb] = uVar48;
        auVar62[0xc] = uVar49;
        auVar62[0xd] = uVar50;
        auVar62[0xe] = uVar51;
        auVar62[0xf] = uVar52;
        auVar62 = NEON_ucvtf(auVar62,4);
        fVar53 = auVar62._0_4_ * 0.03125;
        fVar54 = auVar62._4_4_ * 0.03125;
        fVar60 = auVar62._8_4_ * 0.03125;
        fVar64 = auVar62._12_4_ * 0.03125;
        *(float *)((long)afStack_4c8 + lVar13) = auVar82._0_4_ - fVar53;
        *(float *)((long)afStack_4c8 + lVar13 + 4) = fVar53;
        *(float *)((long)&uStack_4c0 + lVar13) = auVar82._4_4_ - fVar54;
        *(float *)((long)&uStack_4c0 + lVar13 + 4) = fVar54;
        *(float *)((long)afStack_4b8 + lVar13) = auVar82._8_4_ - fVar60;
        *(float *)((long)afStack_4b8 + lVar13 + 4) = fVar60;
        *(float *)((long)afStack_4a8 + lVar13 + -8) = auVar82._12_4_ - fVar64;
        *(float *)((long)afStack_4a8 + lVar13 + -4) = fVar64;
        iVar55 = CONCAT13(uVar40,CONCAT12(uVar39,CONCAT11(uVar38,uVar37))) + 4;
        uVar37 = (undefined1)iVar55;
        uVar38 = (undefined1)((uint)iVar55 >> 8);
        uVar39 = (undefined1)((uint)iVar55 >> 0x10);
        uVar40 = (undefined1)((uint)iVar55 >> 0x18);
        iVar55 = CONCAT13(uVar44,CONCAT12(uVar43,CONCAT11(uVar42,uVar41))) + 4;
        uVar41 = (undefined1)iVar55;
        uVar42 = (undefined1)((uint)iVar55 >> 8);
        uVar43 = (undefined1)((uint)iVar55 >> 0x10);
        uVar44 = (undefined1)((uint)iVar55 >> 0x18);
        iVar55 = CONCAT13(uVar48,CONCAT12(uVar47,CONCAT11(uVar46,uVar45))) + 4;
        uVar45 = (undefined1)iVar55;
        uVar46 = (undefined1)((uint)iVar55 >> 8);
        uVar47 = (undefined1)((uint)iVar55 >> 0x10);
        uVar48 = (undefined1)((uint)iVar55 >> 0x18);
        iVar55 = CONCAT13(uVar52,CONCAT12(uVar51,CONCAT11(uVar50,uVar49))) + 4;
        uVar49 = (undefined1)iVar55;
        uVar50 = (undefined1)((uint)iVar55 >> 8);
        uVar51 = (undefined1)((uint)iVar55 >> 0x10);
        uVar52 = (undefined1)((uint)iVar55 >> 0x18);
        lVar13 = lVar13 + 0x20;
      } while (lVar13 != 0x100);
    }
    else if (param_1 == 2) {
      lVar13 = 0;
      auVar82 = NEON_fmov(0x3f800000,4);
      auVar62 = NEON_fmov(0xbf400000,4);
      iVar57 = 2;
      iVar58 = 3;
      iVar55 = 0;
      iVar56 = 1;
      auVar59 = NEON_fmov(0x40700000,4);
      auVar63 = NEON_fmov(0xc0c00000,4);
      auVar67 = NEON_fmov(0x40400000,4);
      auVar70 = NEON_fmov(0x3fa00000,4);
      auVar71 = NEON_fmov(0xc0100000,4);
      do {
        auVar73._4_4_ = iVar56;
        auVar73._0_4_ = iVar55;
        auVar73._8_4_ = iVar57;
        auVar73._12_4_ = iVar58;
        auVar73 = NEON_ucvtf(auVar73,4);
        fVar72 = auVar73._0_4_ * 0.03125;
        fVar74 = auVar73._4_4_ * 0.03125;
        fVar75 = auVar73._8_4_ * 0.03125;
        fVar76 = auVar73._12_4_ * 0.03125;
        fVar53 = auVar82._0_4_;
        fVar77 = fVar72 + fVar53;
        fVar54 = auVar82._4_4_;
        fVar78 = fVar74 + fVar54;
        fVar60 = auVar82._8_4_;
        fVar79 = fVar75 + fVar60;
        fVar64 = auVar82._12_4_;
        fVar80 = fVar76 + fVar64;
        fVar81 = auVar67._0_4_ +
                 fVar77 * (auVar63._0_4_ + fVar77 * (auVar59._0_4_ + auVar62._0_4_ * fVar77));
        fVar83 = auVar67._4_4_ +
                 fVar78 * (auVar63._4_4_ + fVar78 * (auVar59._4_4_ + auVar62._4_4_ * fVar78));
        fVar84 = auVar67._8_4_ +
                 fVar79 * (auVar63._8_4_ + fVar79 * (auVar59._8_4_ + auVar62._8_4_ * fVar79));
        fVar85 = auVar67._12_4_ +
                 fVar80 * (auVar63._12_4_ + fVar80 * (auVar59._12_4_ + auVar62._12_4_ * fVar80));
        fVar77 = fVar53 - fVar72;
        fVar78 = fVar54 - fVar74;
        fVar79 = fVar60 - fVar75;
        fVar80 = fVar64 - fVar76;
        fVar72 = fVar53 + fVar72 * fVar72 * (auVar71._0_4_ + auVar70._0_4_ * fVar72);
        fVar74 = fVar54 + fVar74 * fVar74 * (auVar71._4_4_ + auVar70._4_4_ * fVar74);
        fVar75 = fVar60 + fVar75 * fVar75 * (auVar71._8_4_ + auVar70._8_4_ * fVar75);
        fVar76 = fVar64 + fVar76 * fVar76 * (auVar71._12_4_ + auVar70._12_4_ * fVar76);
        fVar77 = fVar53 + fVar77 * fVar77 * (auVar71._0_4_ + auVar70._0_4_ * fVar77);
        fVar78 = fVar54 + fVar78 * fVar78 * (auVar71._4_4_ + auVar70._4_4_ * fVar78);
        fVar79 = fVar60 + fVar79 * fVar79 * (auVar71._8_4_ + auVar70._8_4_ * fVar79);
        fVar80 = fVar64 + fVar80 * fVar80 * (auVar71._12_4_ + auVar70._12_4_ * fVar80);
        *(float *)((long)afStack_4c8 + lVar13) = fVar81;
        *(float *)((long)afStack_4c8 + lVar13 + 4) = fVar72;
        *(float *)((long)&uStack_4c0 + lVar13) = fVar77;
        *(float *)((long)&uStack_4c0 + lVar13 + 4) = ((fVar53 - fVar81) - fVar72) - fVar77;
        *(float *)((long)afStack_4b8 + lVar13) = fVar83;
        *(float *)((long)afStack_4b8 + lVar13 + 4) = fVar74;
        *(float *)((long)afStack_4a8 + lVar13 + -8) = fVar78;
        *(float *)((long)afStack_4a8 + lVar13 + -4) = ((fVar54 - fVar83) - fVar74) - fVar78;
        *(float *)((long)afStack_4a8 + lVar13) = fVar84;
        *(float *)((long)afStack_4a8 + lVar13 + 4) = fVar75;
        *(float *)((long)afStack_4a8 + lVar13 + 8) = fVar79;
        *(float *)((long)afStack_4a8 + lVar13 + 0xc) = ((fVar60 - fVar84) - fVar75) - fVar79;
        *(float *)((long)afStack_4a8 + lVar13 + 0x10) = fVar85;
        *(float *)((long)afStack_4a8 + lVar13 + 0x14) = fVar76;
        *(float *)((long)afStack_4a8 + lVar13 + 0x18) = fVar80;
        *(float *)((long)afStack_4a8 + lVar13 + 0x1c) = ((fVar64 - fVar85) - fVar76) - fVar80;
        iVar55 = iVar55 + 4;
        iVar56 = iVar56 + 4;
        iVar57 = iVar57 + 4;
        iVar58 = iVar58 + 4;
        lVar13 = lVar13 + 0x40;
      } while (lVar13 != 0x200);
    }
    else {
      if (param_1 != 4) {
        puVar7 = (undefined4 *)0x24;
        FUN_1000437c8();
        *puVar7 = 1;
        puStack_a8 = puVar7 + 1;
        uStack_a0 = 0x1c;
        *(undefined1 *)(puVar7 + 8) = 0;
        *(undefined8 *)(puVar7 + 3) = 0x6c6f707265746e69;
        *(undefined8 *)(puVar7 + 1) = 0x206e776f6e6b6e55;
        *(undefined8 *)(puVar7 + 6) = 0x646f6874656d206e;
        *(undefined8 *)(puVar7 + 4) = 0x6f6974616c6f7072;
        func_0x000107c2ae94(0xfffffffb,&puStack_a8,&UNK_10f59d788,&UNK_10f59d381,0xcf);
LAB_100044014:
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x100044018);
        (*pcVar6)();
      }
      uVar35 = 0;
      auVar82 = NEON_fmov(0xbfd0000000000000,8);
      pfVar26 = afStack_4c8;
      do {
        if (1.1920929e-07 <= (float)uVar35 / 32.0) {
          fVar53 = (float)uVar35 / 32.0 + 3.0;
          dVar4 = (double)fVar53 * 3.141592653589793 * -0.25;
          uVar37 = SUB81(dVar4,0);
          uVar38 = (undefined1)((ulong)dVar4 >> 8);
          uVar39 = (undefined1)((ulong)dVar4 >> 0x10);
          uVar40 = (undefined1)((ulong)dVar4 >> 0x18);
          uVar41 = (undefined1)((ulong)dVar4 >> 0x20);
          uVar42 = (undefined1)((ulong)dVar4 >> 0x28);
          uVar43 = (undefined1)((ulong)dVar4 >> 0x30);
          uVar44 = (undefined1)((ulong)dVar4 >> 0x38);
          func_0x000107c60e70();
          lVar13 = 0;
          auVar59._8_8_ = 0x300000002;
          auVar59._0_8_ = 0x100000000;
          fVar54 = 0.0;
          pdVar12 = (double *)&UNK_10e0329e8;
          do {
            auVar62 = NEON_ucvtf(auVar59,4);
            dVar66 = (double)(fVar53 - auVar62._8_4_) * 3.141592653589793 * auVar82._0_8_;
            dVar68 = (double)(fVar53 - auVar62._12_4_) * 3.141592653589793 * auVar82._8_8_;
            dVar61 = (double)(fVar53 - auVar62._0_4_) * 3.141592653589793 * auVar82._0_8_;
            dVar65 = (double)(fVar53 - auVar62._4_4_) * 3.141592653589793 * auVar82._8_8_;
            dVar4 = (double)CONCAT17(uVar44,CONCAT16(uVar43,CONCAT15(uVar42,CONCAT14(uVar41,CONCAT13
                                                  (uVar40,CONCAT12(uVar39,CONCAT11(uVar38,uVar37))))
                                                  )));
            dVar69 = (double)CONCAT17(uVar44,CONCAT16(uVar43,CONCAT15(uVar42,CONCAT14(uVar41,
                                                  CONCAT13(uVar40,CONCAT12(uVar39,CONCAT11(uVar38,
                                                  uVar37)))))));
            dVar66 = (pdVar12[5] * extraout_d1 + pdVar12[4] * dVar69) / (dVar66 * dVar66);
            dVar69 = (pdVar12[7] * extraout_d1 + pdVar12[6] * dVar69) / (dVar68 * dVar68);
            fVar60 = (float)((pdVar12[1] * extraout_d1 + *pdVar12 * dVar4) / (dVar61 * dVar61));
            fVar64 = (float)((pdVar12[3] * extraout_d1 + pdVar12[2] * dVar4) / (dVar65 * dVar65));
            ((undefined8 *)((long)pfVar26 + lVar13))[1] = CONCAT44((float)dVar69,(float)dVar66);
            *(undefined8 *)((long)pfVar26 + lVar13) = CONCAT44(fVar64,fVar60);
            fVar54 = fVar54 + fVar60 + fVar64 + (float)dVar66 + (float)dVar69;
            auVar63._0_4_ = auVar59._0_4_ + 4;
            auVar63._4_4_ = auVar59._4_4_ + 4;
            auVar63._8_4_ = auVar59._8_4_ + 4;
            auVar63._12_4_ = auVar59._12_4_ + 4;
            lVar13 = lVar13 + 0x10;
            pdVar12 = pdVar12 + 8;
            auVar59 = auVar63;
          } while (lVar13 != 0x20);
          fVar54 = 1.0 / fVar54;
          fVar53 = pfVar26[5] * fVar54;
          fVar60 = pfVar26[7] * fVar54;
          pfVar26[2] = pfVar26[2] * fVar54;
          pfVar26[3] = pfVar26[3] * fVar54;
          *pfVar26 = *pfVar26 * fVar54;
          pfVar26[1] = pfVar26[1] * fVar54;
          *(ulong *)(pfVar26 + 6) =
               CONCAT17((char)((uint)fVar60 >> 0x18),
                        CONCAT16((char)((uint)fVar60 >> 0x10),
                                 CONCAT15((char)((uint)fVar60 >> 8),
                                          CONCAT14(SUB41(fVar60,0),pfVar26[6] * fVar54))));
          *(ulong *)(pfVar26 + 4) =
               CONCAT17((char)((uint)fVar53 >> 0x18),
                        CONCAT16((char)((uint)fVar53 >> 0x10),
                                 CONCAT15((char)((uint)fVar53 >> 8),
                                          CONCAT14(SUB41(fVar53,0),pfVar26[4] * fVar54))));
        }
        else {
          pfVar26[2] = 0.0;
          pfVar26[3] = 0.0;
          pfVar26[0] = 0.0;
          pfVar26[1] = 0.0;
          pfVar26[6] = 0.0;
          pfVar26[7] = 0.0;
          pfVar26[4] = 0.0;
          pfVar26[5] = 0.0;
          pfVar26[3] = 1.0;
        }
        uVar35 = uVar35 + 1;
        pfVar26 = pfVar26 + 8;
      } while (uVar35 != 0x20);
    }
    uVar16 = 0;
    uVar33 = (uint)uVar34;
    uVar35 = uVar33 * uVar33;
    uVar14 = uVar34 >> 1;
    lVar13 = (ulong)uVar35 * 2;
    do {
      uVar11 = 0;
      lVar36 = (long)pfVar29 + uVar34 + uVar34 * uVar34;
      pfVar26 = pfStack_4d8;
      do {
        uVar17 = 0;
        iVar55 = 0;
        lVar21 = (uVar11 + uVar16 * 0x20) * 2;
        *(bool *)(lVar21 + 0x1137e1190) = uVar11 < 0x10;
        *(bool *)(lVar21 + 0x1137e1191) = uVar16 < 0x10;
        pfVar20 = pfVar28;
        pfVar22 = pfVar29;
        do {
          fVar53 = pfStack_4d8[uVar16 * uVar34 + uVar17];
          pfVar8 = pfVar26;
          pfVar25 = pfVar20;
          pfVar27 = pfVar22;
          uVar10 = uVar34;
          do {
            fVar54 = *pfVar8;
            *pfVar25 = fVar53 * fVar54;
            iVar56 = (int)(long)(float)(int)(fVar53 * fVar54 * 32768.0);
            if (iVar56 < -0x7fff) {
              iVar56 = -0x8000;
            }
            if (0x7ffe < iVar56) {
              iVar56 = 0x7fff;
            }
            *(short *)pfVar27 = (short)iVar56;
            iVar55 = iVar56 + iVar55;
            uVar10 = uVar10 - 1;
            pfVar8 = pfVar8 + 1;
            pfVar25 = pfVar25 + 1;
            pfVar27 = (float *)((long)pfVar27 + 2);
          } while (uVar10 != 0);
          uVar17 = uVar17 + 1;
          pfVar22 = (float *)((long)pfVar22 + uVar34 * 2);
          pfVar20 = pfVar20 + uVar34;
        } while (uVar17 != uVar34);
        if (iVar55 != 0x8000) {
          uVar10 = (ulong)(uVar33 >> 1);
          uVar18 = uVar10;
          uVar17 = uVar14;
          uVar23 = uVar10;
          lVar21 = lVar36;
          uVar31 = uVar10;
          do {
            lVar32 = 0;
            uVar9 = uVar10;
            uVar5 = uVar14;
            uVar30 = uVar31;
            do {
              uVar10 = uVar5;
              sVar2 = *(short *)(lVar21 + lVar32);
              uVar24 = (uint)uVar10;
              uVar31 = uVar17;
              if (*(short *)((long)pfVar29 + (ulong)((int)uVar9 + (int)uVar30 * uVar33) * 2) <=
                  sVar2) {
                sVar3 = *(short *)((long)pfVar29 + (ulong)((uint)uVar23 + (uint)uVar18 * uVar33) * 2
                                  );
                uVar1 = (uint)uVar17;
                if (sVar2 <= sVar3) {
                  uVar1 = (uint)uVar18;
                }
                uVar18 = (ulong)uVar1;
                uVar1 = uVar24;
                if (sVar2 <= sVar3) {
                  uVar1 = (uint)uVar23;
                }
                uVar23 = (ulong)uVar1;
                uVar10 = uVar9;
                uVar31 = uVar30;
              }
              lVar32 = lVar32 + 2;
              uVar9 = uVar10;
              uVar5 = (ulong)(uVar24 + 1);
              uVar30 = uVar31;
            } while (lVar32 != 4);
            uVar17 = uVar17 + 1;
            lVar21 = lVar21 + uVar34 * 2;
          } while (uVar17 != uVar14 + 2);
          iVar57 = (int)uVar18;
          iVar56 = (int)uVar23;
          if (0x7fff < iVar55) {
            iVar57 = (int)uVar31;
            iVar56 = (int)uVar10;
          }
          uVar24 = iVar56 + iVar57 * uVar33;
          *(ushort *)((long)pfVar29 + (ulong)uVar24 * 2) =
               *(short *)((long)pfVar29 + (ulong)uVar24 * 2) - ((ushort)iVar55 ^ 0x8000);
        }
        uVar11 = uVar11 + 1;
        pfVar28 = pfVar28 + uVar35;
        pfVar29 = (float *)((long)pfVar29 + lVar13);
        pfVar26 = pfVar26 + uVar34;
        lVar36 = lVar36 + lVar13;
      } while (uVar11 != 0x20);
      uVar16 = uVar16 + 1;
    } while (uVar16 != 0x20);
    if (param_1 == 1) {
      lVar13 = 0;
      puVar15 = (undefined2 *)(lRam00000001137e1180 + 0x12);
      do {
        lVar36 = lVar13 * 8;
        lVar21 = 4;
        puVar19 = puVar15;
        do {
          puVar19[-9] = *(undefined2 *)(lVar36 + 0x113767178);
          puVar19[-8] = *(undefined2 *)(lVar36 + 0x11376717a);
          puVar19[-1] = *(undefined2 *)(lVar36 + 0x11376717c);
          *puVar19 = *(undefined2 *)(lVar36 + 0x11376717e);
          lVar21 = lVar21 + -1;
          puVar19 = puVar19 + 2;
        } while (lVar21 != 0);
        lVar13 = lVar13 + 1;
        puVar15 = puVar15 + 0x10;
      } while (lVar13 != 0x400);
    }
    pfVar28 = pfVar28 + -(ulong)(uVar35 * 0x400);
    pfVar29 = (float *)((long)pfVar29 + (ulong)(uVar35 * 0x400) * -2);
    *(undefined1 *)((ulong)param_1 + 0x1137e1188) = 1;
    if ((pfStack_4d8 != afStack_4c8) && (pfStack_4d8 != (float *)0x0)) {
      func_0x000107c60e10();
    }
  }
  if (param_2 == 0) {
    pfVar29 = pfVar28;
  }
  return pfVar29;
}



/* Entry: 100044088; end: 10004468b;  */

void FUN_100044088(void)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  long lStack_40;
  undefined8 uStack_38;
  long lStack_30;
  undefined8 uStack_28;
  
  uRam00000001137e19a8 = 0;
  uRam00000001137e19a0 = 0;
  uRam00000001137e19b8 = 0;
  uRam00000001137e19b0 = 0;
  uRam00000001137e1998 = 0;
  uRam00000001137e1990 = 0;
  FUN_10004468c(&lStack_40);
  uStack_28 = uStack_38;
  lStack_30 = lStack_40;
  if (lStack_40 != 0) {
    piVar1 = (int *)(lStack_40 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = *piVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  FUN_1000447e4(&lStack_30);
  FUN_100044928(&lStack_30);
  FUN_10004497c(&lStack_40);
  FUN_1000449d0(&lStack_40);
  uStack_28 = uStack_38;
  lStack_30 = lStack_40;
  if (lStack_40 != 0) {
    piVar1 = (int *)(lStack_40 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = *piVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  FUN_100044ac4(&lStack_30);
  FUN_100044c08(&lStack_30);
  FUN_100044c5c(&lStack_40);
  FUN_100044cb0(&lStack_40);
  uStack_28 = uStack_38;
  lStack_30 = lStack_40;
  if (lStack_40 != 0) {
    piVar1 = (int *)(lStack_40 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = *piVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  FUN_1000447e4(&lStack_30);
  FUN_100044928(&lStack_30);
  FUN_100044e84(&lStack_40);
  FUN_100044ed8(&lStack_40);
  uStack_28 = uStack_38;
  lStack_30 = lStack_40;
  if (lStack_40 != 0) {
    piVar1 = (int *)(lStack_40 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = *piVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  FUN_100044ac4(&lStack_30);
  FUN_100044c08(&lStack_30);
  FUN_100044fc8(&lStack_40);
  FUN_10004501c(&lStack_40);
  uStack_28 = uStack_38;
  lStack_30 = lStack_40;
  if (lStack_40 != 0) {
    piVar1 = (int *)(lStack_40 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = *piVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  FUN_1000447e4(&lStack_30);
  FUN_100044928(&lStack_30);
  FUN_10004514c(&lStack_40);
  FUN_1000451a0(&lStack_40);
  uStack_28 = uStack_38;
  lStack_30 = lStack_40;
  if (lStack_40 != 0) {
    piVar1 = (int *)(lStack_40 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = *piVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  FUN_100044ac4(&lStack_30);
  FUN_100044c08(&lStack_30);
  FUN_100045294(&lStack_40);
  FUN_1000452e8(&lStack_40);
  uStack_28 = uStack_38;
  lStack_30 = lStack_40;
  if (lStack_40 != 0) {
    piVar1 = (int *)(lStack_40 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = *piVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  FUN_1000447e4(&lStack_30);
  FUN_100044928(&lStack_30);
  FUN_1000453b8(&lStack_40);
  FUN_10004540c(&lStack_40);
  uStack_28 = uStack_38;
  lStack_30 = lStack_40;
  if (lStack_40 != 0) {
    piVar1 = (int *)(lStack_40 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = *piVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  FUN_100044ac4(&lStack_30);
  FUN_100044c08(&lStack_30);
  FUN_100045504(&lStack_40);
  FUN_100045558(&lStack_40);
  uStack_28 = uStack_38;
  lStack_30 = lStack_40;
  if (lStack_40 != 0) {
    piVar1 = (int *)(lStack_40 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = *piVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  FUN_1000447e4(&lStack_30);
  FUN_100044928(&lStack_30);
  FUN_1000456b0(&lStack_40);
  FUN_100045704(&lStack_40);
  uStack_28 = uStack_38;
  lStack_30 = lStack_40;
  if (lStack_40 != 0) {
    piVar1 = (int *)(lStack_40 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = *piVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  FUN_100044ac4(&lStack_30);
  FUN_100044c08(&lStack_30);
  FUN_1000457f4(&lStack_40);
  FUN_100045848(&lStack_40);
  uStack_28 = uStack_38;
  lStack_30 = lStack_40;
  if (lStack_40 != 0) {
    piVar1 = (int *)(lStack_40 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = *piVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  FUN_1000447e4(&lStack_30);
  FUN_100044928(&lStack_30);
  FUN_100045918(&lStack_40);
  FUN_10004596c(&lStack_40);
  uStack_28 = uStack_38;
  lStack_30 = lStack_40;
  if (lStack_40 != 0) {
    piVar1 = (int *)(lStack_40 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = *piVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  FUN_100044ac4(&lStack_30);
  FUN_100044c08(&lStack_30);
  FUN_100045a68(&lStack_40);
  FUN_100045abc(&lStack_40);
  uStack_28 = uStack_38;
  lStack_30 = lStack_40;
  if (lStack_40 != 0) {
    piVar1 = (int *)(lStack_40 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = *piVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  FUN_100044ac4(&lStack_30);
  FUN_100044c08(&lStack_30);
  FUN_100045bb0(&lStack_40);
  FUN_100045c04(&lStack_40);
  uStack_28 = uStack_38;
  lStack_30 = lStack_40;
  if (lStack_40 != 0) {
    piVar1 = (int *)(lStack_40 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = *piVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  FUN_1000447e4(&lStack_30);
  FUN_100044928(&lStack_30);
  FUN_100045d3c(&lStack_40);
  FUN_100045d90(&lStack_40);
  uStack_28 = uStack_38;
  lStack_30 = lStack_40;
  if (lStack_40 != 0) {
    piVar1 = (int *)(lStack_40 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = *piVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  FUN_100044ac4(&lStack_30);
  FUN_100044c08(&lStack_30);
  FUN_100045e84(&lStack_40);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd844. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR____cxa_atexit_11034bd48)(&UNK_109b7e440,0x1137e1990,0x100000000);
  return;
}



/* Entry: 10004468c; end: 1000446ef;  */

void FUN_10004468c(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  uVar1 = 0x4f0;
  func_0x000107c60e20();
  FUN_1000446f0();
  puVar2 = (undefined8 *)0x20;
  func_0x000107c60e20();
  *(undefined4 *)(puVar2 + 1) = 1;
  *puVar2 = &PTR_DAT_110b28cf8;
  puVar2[2] = uVar1;
  *param_1 = puVar2;
  param_1[1] = uVar1;
  return;
}



/* Entry: 1000446f0; end: 1000447e3;  */

undefined8 * FUN_1000446f0(undefined8 *param_1)

{
  undefined4 *puVar1;
  
  param_1[3] = 0;
  param_1[4] = 0;
  *(undefined4 *)(param_1 + 7) = 0x42ff0000;
  *(undefined8 *)((long)param_1 + 0x44) = 0;
  *(undefined8 *)((long)param_1 + 0x3c) = 0;
  *(undefined8 *)((long)param_1 + 0x54) = 0;
  *(undefined8 *)((long)param_1 + 0x4c) = 0;
  *(undefined8 *)((long)param_1 + 100) = 0;
  *(undefined8 *)((long)param_1 + 0x5c) = 0;
  param_1[0x11] = 0;
  param_1[0xe] = 0;
  param_1[0xd] = 0;
  param_1[0xf] = param_1 + 8;
  param_1[0x10] = param_1 + 0x11;
  param_1[0x12] = 0;
  *(undefined1 *)(param_1 + 0x13) = 0;
  param_1[2] = 0x1ffffffff;
  param_1[1] = 0;
  *param_1 = &PTR_DAT_110b28c00;
  param_1[0x17] = 0;
  param_1[0x16] = 0;
  param_1[0x19] = 0;
  param_1[0x18] = 0;
  *(undefined4 *)(param_1 + 0x1a) = 0x8000;
  *(undefined1 *)(param_1 + 0x1b) = 0;
  param_1[0x14] = &PTR_DAT_110b28968;
  *(undefined1 *)(param_1 + 0x15) = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  puVar1 = (undefined4 *)0x8;
  FUN_1000437c8();
  *puVar1 = 1;
  param_1[5] = puVar1 + 1;
  param_1[6] = 2;
  *(undefined1 *)((long)puVar1 + 6) = 0;
  *(undefined2 *)param_1[5] = 0x4d42;
  *(undefined4 *)(param_1 + 0x9d) = 0xffffffff;
  *(undefined1 *)(param_1 + 0x13) = 1;
  return param_1;
}



/* Entry: 1000447e4; end: 100044927;  */

long * FUN_1000447e4(long *param_1)

{
  ulong uVar1;
  int *piVar2;
  long *plVar3;
  long *plVar4;
  char cVar5;
  bool bVar6;
  int iVar7;
  long *plVar8;
  long lVar9;
  long *plVar10;
  long *plVar11;
  ulong uVar12;
  long *plVar13;
  long lVar14;
  long *plVar15;
  long lVar16;
  
  if (plRam00000001137e1998 < plRam00000001137e19a0) {
    lVar14 = *param_1;
    plVar15 = plRam00000001137e1998 + 2;
    plRam00000001137e1998[1] = param_1[1];
    *plRam00000001137e1998 = lVar14;
    *param_1 = 0;
    param_1[1] = 0;
  }
  else {
    lVar14 = (long)plRam00000001137e1998 - (long)plRam00000001137e1990;
    uVar1 = (lVar14 >> 4) + 1;
    if (uVar1 >> 0x3c != 0) {
      func_0x000107c2af20();
LAB_100044924:
      func_0x000104c4f740();
      plVar11 = (long *)*param_1;
      if (plVar11 != (long *)0x0) {
        plVar10 = plVar11 + 1;
        do {
          iVar7 = (int)*plVar10 + -1;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar10,0x10);
          if (bVar6) {
            *(int *)plVar10 = iVar7;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (iVar7 == 0) {
          (**(code **)(*plVar11 + 0x10))();
        }
      }
      *param_1 = 0;
      param_1[1] = 0;
      return param_1;
    }
    uVar12 = (long)plRam00000001137e19a0 - (long)plRam00000001137e1990 >> 3;
    if (uVar12 <= uVar1) {
      uVar12 = uVar1;
    }
    if (0x7fffffffffffffef < (ulong)((long)plRam00000001137e19a0 - (long)plRam00000001137e1990)) {
      uVar12 = 0xfffffffffffffff;
    }
    if (uVar12 == 0) {
      lVar9 = 0;
    }
    else {
      if (uVar12 >> 0x3c != 0) goto LAB_100044924;
      lVar9 = uVar12 << 4;
      func_0x000107c60e20();
    }
    plVar11 = (long *)(lVar9 + lVar14);
    plVar3 = (long *)(lVar9 + uVar12 * 0x10);
    lVar16 = param_1[1];
    lVar9 = *param_1;
    *param_1 = 0;
    param_1[1] = 0;
    plVar8 = plRam00000001137e1998;
    plVar10 = plRam00000001137e1990;
    lVar14 = (long)plRam00000001137e1990 - (long)plRam00000001137e1998;
    plVar4 = (long *)((long)plVar11 + lVar14);
    plVar15 = plVar11 + 2;
    plVar11[1] = lVar16;
    *plVar11 = lVar9;
    param_1 = plVar10;
    plVar11 = plVar10;
    plVar13 = plVar4;
    if (lVar14 != 0) {
      do {
        lVar14 = *plVar11;
        plVar13[1] = plVar11[1];
        *plVar13 = lVar14;
        if (lVar14 != 0) {
          piVar2 = (int *)(lVar14 + 8);
          do {
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(piVar2,0x10);
            if (bVar6) {
              *piVar2 = *piVar2 + 1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
        }
        plVar11 = plVar11 + 2;
        plVar13 = plVar13 + 2;
      } while (plVar11 != plVar8);
      do {
        FUN_100044928();
        plVar10 = plVar10 + 2;
        param_1 = plRam00000001137e1990;
      } while (plVar10 != plVar8);
    }
    plRam00000001137e1990 = plVar4;
    plRam00000001137e19a0 = plVar3;
    if (param_1 != (long *)0x0) {
      plRam00000001137e1998 = plVar15;
      func_0x000107c60e14();
    }
  }
  plRam00000001137e1998 = plVar15;
  return param_1;
}



/* Entry: 100044928; end: 10004497b;  */

long * FUN_100044928(long *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  long *plVar5;
  
  plVar5 = (long *)*param_1;
  if (plVar5 != (long *)0x0) {
    plVar1 = plVar5 + 1;
    do {
      iVar4 = (int)*plVar1 + -1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *(int *)plVar1 = iVar4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar4 == 0) {
      (**(code **)(*plVar5 + 0x10))();
    }
  }
  *param_1 = 0;
  param_1[1] = 0;
  return param_1;
}



/* Entry: 10004497c; end: 1000449cf;  */

long * FUN_10004497c(long *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  long *plVar5;
  
  plVar5 = (long *)*param_1;
  if (plVar5 != (long *)0x0) {
    plVar1 = plVar5 + 1;
    do {
      iVar4 = (int)*plVar1 + -1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *(int *)plVar1 = iVar4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar4 == 0) {
      (**(code **)(*plVar5 + 0x10))();
    }
  }
  *param_1 = 0;
  param_1[1] = 0;
  return param_1;
}



/* Entry: 1000449d0; end: 100044a33;  */

void FUN_1000449d0(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  uVar1 = 0x48;
  func_0x000107c60e20();
  FUN_100044a34();
  puVar2 = (undefined8 *)0x20;
  func_0x000107c60e20();
  *(undefined4 *)(puVar2 + 1) = 1;
  *puVar2 = &PTR_DAT_110b28d38;
  puVar2[2] = uVar1;
  *param_1 = puVar2;
  param_1[1] = uVar1;
  return;
}



/* Entry: 100044a34; end: 100044ac3;  */

undefined8 * FUN_100044a34(undefined8 *param_1)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  
  param_1[7] = 0;
  param_1[8] = 0;
  *(undefined1 *)(param_1 + 6) = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_DAT_110b28c70;
  puVar1 = (undefined4 *)0x24;
  FUN_1000437c8();
  *puVar1 = 1;
  param_1[1] = puVar1 + 1;
  param_1[2] = 0x1c;
  *(undefined1 *)(puVar1 + 8) = 0;
  puVar2 = (undefined8 *)param_1[1];
  *(undefined8 *)((long)puVar2 + 0x14) = 0x296269642e2a3b70;
  *(undefined8 *)((long)puVar2 + 0xc) = 0x6d622e2a28207061;
  puVar2[1] = 0x282070616d746962;
  *puVar2 = 0x2073776f646e6957;
  *(undefined1 *)(param_1 + 6) = 1;
  return param_1;
}



/* Entry: 100044ac4; end: 100044c07;  */

long * FUN_100044ac4(long *param_1)

{
  ulong uVar1;
  int *piVar2;
  long *plVar3;
  long *plVar4;
  char cVar5;
  bool bVar6;
  int iVar7;
  long *plVar8;
  long lVar9;
  long *plVar10;
  long *plVar11;
  ulong uVar12;
  long *plVar13;
  long lVar14;
  long *plVar15;
  long lVar16;
  
  if (plRam00000001137e19b0 < plRam00000001137e19b8) {
    lVar14 = *param_1;
    plVar15 = plRam00000001137e19b0 + 2;
    plRam00000001137e19b0[1] = param_1[1];
    *plRam00000001137e19b0 = lVar14;
    *param_1 = 0;
    param_1[1] = 0;
  }
  else {
    lVar14 = (long)plRam00000001137e19b0 - (long)plRam00000001137e19a8;
    uVar1 = (lVar14 >> 4) + 1;
    if (uVar1 >> 0x3c != 0) {
      func_0x000107c2af24();
LAB_100044c04:
      func_0x000104c4f740();
      plVar11 = (long *)*param_1;
      if (plVar11 != (long *)0x0) {
        plVar10 = plVar11 + 1;
        do {
          iVar7 = (int)*plVar10 + -1;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar10,0x10);
          if (bVar6) {
            *(int *)plVar10 = iVar7;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (iVar7 == 0) {
          (**(code **)(*plVar11 + 0x10))();
        }
      }
      *param_1 = 0;
      param_1[1] = 0;
      return param_1;
    }
    uVar12 = (long)plRam00000001137e19b8 - (long)plRam00000001137e19a8 >> 3;
    if (uVar12 <= uVar1) {
      uVar12 = uVar1;
    }
    if (0x7fffffffffffffef < (ulong)((long)plRam00000001137e19b8 - (long)plRam00000001137e19a8)) {
      uVar12 = 0xfffffffffffffff;
    }
    if (uVar12 == 0) {
      lVar9 = 0;
    }
    else {
      if (uVar12 >> 0x3c != 0) goto LAB_100044c04;
      lVar9 = uVar12 << 4;
      func_0x000107c60e20();
    }
    plVar11 = (long *)(lVar9 + lVar14);
    plVar3 = (long *)(lVar9 + uVar12 * 0x10);
    lVar16 = param_1[1];
    lVar9 = *param_1;
    *param_1 = 0;
    param_1[1] = 0;
    plVar8 = plRam00000001137e19b0;
    plVar10 = plRam00000001137e19a8;
    lVar14 = (long)plRam00000001137e19a8 - (long)plRam00000001137e19b0;
    plVar4 = (long *)((long)plVar11 + lVar14);
    plVar15 = plVar11 + 2;
    plVar11[1] = lVar16;
    *plVar11 = lVar9;
    param_1 = plVar10;
    plVar11 = plVar10;
    plVar13 = plVar4;
    if (lVar14 != 0) {
      do {
        lVar14 = *plVar11;
        plVar13[1] = plVar11[1];
        *plVar13 = lVar14;
        if (lVar14 != 0) {
          piVar2 = (int *)(lVar14 + 8);
          do {
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(piVar2,0x10);
            if (bVar6) {
              *piVar2 = *piVar2 + 1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
        }
        plVar11 = plVar11 + 2;
        plVar13 = plVar13 + 2;
      } while (plVar11 != plVar8);
      do {
        FUN_100044c08();
        plVar10 = plVar10 + 2;
        param_1 = plRam00000001137e19a8;
      } while (plVar10 != plVar8);
    }
    plRam00000001137e19a8 = plVar4;
    plRam00000001137e19b8 = plVar3;
    if (param_1 != (long *)0x0) {
      plRam00000001137e19b0 = plVar15;
      func_0x000107c60e14();
    }
  }
  plRam00000001137e19b0 = plVar15;
  return param_1;
}



/* Entry: 100044c08; end: 100044c5b;  */

long * FUN_100044c08(long *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  long *plVar5;
  
  plVar5 = (long *)*param_1;
  if (plVar5 != (long *)0x0) {
    plVar1 = plVar5 + 1;
    do {
      iVar4 = (int)*plVar1 + -1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *(int *)plVar1 = iVar4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar4 == 0) {
      (**(code **)(*plVar5 + 0x10))();
    }
  }
  *param_1 = 0;
  param_1[1] = 0;
  return param_1;
}



/* Entry: 100044c5c; end: 100044caf;  */

long * FUN_100044c5c(long *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  long *plVar5;
  
  plVar5 = (long *)*param_1;
  if (plVar5 != (long *)0x0) {
    plVar1 = plVar5 + 1;
    do {
      iVar4 = (int)*plVar1 + -1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *(int *)plVar1 = iVar4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar4 == 0) {
      (**(code **)(*plVar5 + 0x10))();
    }
  }
  *param_1 = 0;
  param_1[1] = 0;
  return param_1;
}



/* Entry: 100044cb0; end: 100044d13;  */

void FUN_100044cb0(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  uVar1 = 0xb8;
  func_0x000107c60e20();
  FUN_100044d14();
  puVar2 = (undefined8 *)0x20;
  func_0x000107c60e20();
  *(undefined4 *)(puVar2 + 1) = 1;
  *puVar2 = &PTR_DAT_110b28e70;
  puVar2[2] = uVar1;
  *param_1 = puVar2;
  param_1[1] = uVar1;
  return;
}



/* Entry: 100044d14; end: 100044e83;  */

undefined8 * FUN_100044d14(undefined8 *param_1)

{
  int iVar1;
  char cVar2;
  bool bVar3;
  undefined4 *puVar4;
  long lVar5;
  undefined8 *puVar6;
  int *piVar7;
  
  param_1[3] = 0;
  param_1[4] = 0;
  *(undefined4 *)(param_1 + 7) = 0x42ff0000;
  *(undefined8 *)((long)param_1 + 0x44) = 0;
  *(undefined8 *)((long)param_1 + 0x3c) = 0;
  *(undefined8 *)((long)param_1 + 0x54) = 0;
  *(undefined8 *)((long)param_1 + 0x4c) = 0;
  *(undefined8 *)((long)param_1 + 100) = 0;
  *(undefined8 *)((long)param_1 + 0x5c) = 0;
  param_1[0xe] = 0;
  param_1[0xd] = 0;
  param_1[0x11] = 0;
  param_1[0xf] = param_1 + 8;
  param_1[0x10] = param_1 + 0x11;
  param_1[0x12] = 0;
  *(undefined1 *)(param_1 + 0x13) = 0;
  param_1[2] = 0x1ffffffff;
  param_1[1] = 0;
  *param_1 = &PTR_DAT_110b28d78;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  puVar4 = (undefined4 *)0xc;
  FUN_1000437c8();
  *puVar4 = 1;
  param_1[5] = puVar4 + 1;
  param_1[6] = 6;
  *(undefined1 *)((long)puVar4 + 10) = 0;
  puVar4 = (undefined4 *)param_1[5];
  *(undefined2 *)(puVar4 + 1) = 0x4542;
  *puVar4 = 0x47523f23;
  lVar5 = param_1[0x14];
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  if (lVar5 != 0) {
    piVar7 = (int *)(lVar5 + -4);
    do {
      iVar1 = *piVar7;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar7,0x10);
      if (bVar3) {
        *piVar7 = iVar1 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar1 + -1 == 0) {
      func_0x000107c60fd0(*(undefined8 *)(lVar5 + -0xc));
    }
  }
  puVar4 = (undefined4 *)0x10;
  FUN_1000437c8();
  *puVar4 = 1;
  param_1[0x14] = puVar4 + 1;
  param_1[0x15] = 10;
  *(undefined1 *)((long)puVar4 + 0xe) = 0;
  puVar6 = (undefined8 *)param_1[0x14];
  *(undefined2 *)(puVar6 + 1) = 0x4543;
  *puVar6 = 0x4e41494441523f23;
  param_1[0x16] = 0;
  *(undefined4 *)(param_1 + 2) = 0x15;
  return param_1;
}



/* Entry: 100044e84; end: 100044ed7;  */

long * FUN_100044e84(long *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  long *plVar5;
  
  plVar5 = (long *)*param_1;
  if (plVar5 != (long *)0x0) {
    plVar1 = plVar5 + 1;
    do {
      iVar4 = (int)*plVar1 + -1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *(int *)plVar1 = iVar4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar4 == 0) {
      (**(code **)(*plVar5 + 0x10))();
    }
  }
  *param_1 = 0;
  param_1[1] = 0;
  return param_1;
}



/* Entry: 100044ed8; end: 100044f3b;  */

void FUN_100044ed8(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  uVar1 = 0x48;
  func_0x000107c60e20();
  FUN_100044f3c();
  puVar2 = (undefined8 *)0x20;
  func_0x000107c60e20();
  *(undefined4 *)(puVar2 + 1) = 1;
  *puVar2 = &PTR_DAT_110b28eb0;
  puVar2[2] = uVar1;
  *param_1 = puVar2;
  param_1[1] = uVar1;
  return;
}



/* Entry: 100044f3c; end: 100044fc7;  */

undefined8 * FUN_100044f3c(undefined8 *param_1)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  
  param_1[7] = 0;
  param_1[8] = 0;
  *(undefined1 *)(param_1 + 6) = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_DAT_110b28de8;
  puVar1 = (undefined4 *)0x20;
  FUN_1000437c8();
  *puVar1 = 1;
  param_1[1] = puVar1 + 1;
  param_1[2] = 0x1a;
  *(undefined1 *)((long)puVar1 + 0x1e) = 0;
  puVar2 = (undefined8 *)param_1[1];
  *(undefined8 *)((long)puVar2 + 0x12) = 0x296369702e2a3b72;
  *(undefined8 *)((long)puVar2 + 10) = 0x64682e2a28205244;
  puVar2[1] = 0x2e2a282052444820;
  *puVar2 = 0x65636e6169646152;
  return param_1;
}



/* Entry: 100044fc8; end: 10004501b;  */

long * FUN_100044fc8(long *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  long *plVar5;
  
  plVar5 = (long *)*param_1;
  if (plVar5 != (long *)0x0) {
    plVar1 = plVar5 + 1;
    do {
      iVar4 = (int)*plVar1 + -1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *(int *)plVar1 = iVar4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar4 == 0) {
      (**(code **)(*plVar5 + 0x10))();
    }
  }
  *param_1 = 0;
  param_1[1] = 0;
  return param_1;
}



/* Entry: 10004501c; end: 10004507f;  */

void FUN_10004501c(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  uVar1 = 0xb8;
  func_0x000107c60e20();
  FUN_100045080();
  puVar2 = (undefined8 *)0x20;
  func_0x000107c60e20();
  *(undefined4 *)(puVar2 + 1) = 1;
  *puVar2 = &PTR_DAT_110b28fe8;
  puVar2[2] = uVar1;
  *param_1 = puVar2;
  param_1[1] = uVar1;
  return;
}



/* Entry: 100045080; end: 10004514b;  */

undefined8 * FUN_100045080(undefined8 *param_1)

{
  undefined4 *puVar1;
  undefined2 *puVar2;
  
  param_1[3] = 0;
  param_1[4] = 0;
  *(undefined4 *)(param_1 + 7) = 0x42ff0000;
  *(undefined8 *)((long)param_1 + 0x44) = 0;
  *(undefined8 *)((long)param_1 + 0x3c) = 0;
  *(undefined8 *)((long)param_1 + 0x54) = 0;
  *(undefined8 *)((long)param_1 + 0x4c) = 0;
  *(undefined8 *)((long)param_1 + 100) = 0;
  *(undefined8 *)((long)param_1 + 0x5c) = 0;
  param_1[0xe] = 0;
  param_1[0xd] = 0;
  param_1[0x11] = 0;
  param_1[0xf] = param_1 + 8;
  param_1[0x10] = param_1 + 0x11;
  param_1[0x12] = 0;
  *(undefined1 *)(param_1 + 0x13) = 0;
  param_1[2] = 0x1ffffffff;
  param_1[1] = 0;
  *param_1 = &PTR_DAT_110b28ef0;
  param_1[5] = 0;
  param_1[6] = 0;
  puVar1 = (undefined4 *)0x8;
  FUN_1000437c8();
  *puVar1 = 1;
  param_1[5] = puVar1 + 1;
  param_1[6] = 3;
  *(undefined1 *)((long)puVar1 + 7) = 0;
  puVar2 = (undefined2 *)param_1[5];
  *(undefined1 *)(puVar2 + 1) = 0xff;
  *puVar2 = 0xd8ff;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  *(undefined1 *)(param_1 + 0x13) = 1;
  *(undefined4 *)(param_1 + 0x16) = 1;
  return param_1;
}



/* Entry: 10004514c; end: 10004519f;  */

long * FUN_10004514c(long *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  long *plVar5;
  
  plVar5 = (long *)*param_1;
  if (plVar5 != (long *)0x0) {
    plVar1 = plVar5 + 1;
    do {
      iVar4 = (int)*plVar1 + -1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *(int *)plVar1 = iVar4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar4 == 0) {
      (**(code **)(*plVar5 + 0x10))();
    }
  }
  *param_1 = 0;
  param_1[1] = 0;
  return param_1;
}



/* Entry: 1000451a0; end: 100045203;  */

void FUN_1000451a0(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  uVar1 = 0x48;
  func_0x000107c60e20();
  FUN_100045204();
  puVar2 = (undefined8 *)0x20;
  func_0x000107c60e20();
  *(undefined4 *)(puVar2 + 1) = 1;
  *puVar2 = &PTR_DAT_110b29028;
  puVar2[2] = uVar1;
  *param_1 = puVar2;
  param_1[1] = uVar1;
  return;
}



/* Entry: 100045204; end: 100045293;  */

undefined8 * FUN_100045204(undefined8 *param_1)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  
  param_1[7] = 0;
  param_1[8] = 0;
  *(undefined1 *)(param_1 + 6) = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_DAT_110b28f60;
  puVar1 = (undefined4 *)0x24;
  FUN_1000437c8();
  *puVar1 = 1;
  param_1[1] = puVar1 + 1;
  param_1[2] = 0x1f;
  *(undefined1 *)((long)puVar1 + 0x23) = 0;
  puVar2 = (undefined8 *)param_1[1];
  *(undefined8 *)((long)puVar2 + 0x17) = 0x2965706a2e2a3b67;
  *(undefined8 *)((long)puVar2 + 0xf) = 0x706a2e2a3b676570;
  puVar2[1] = 0x706a2e2a28207365;
  *puVar2 = 0x6c6966204745504a;
  *(undefined1 *)(param_1 + 6) = 1;
  return param_1;
}



/* Entry: 100045294; end: 1000452e7;  */

long * FUN_100045294(long *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  long *plVar5;
  
  plVar5 = (long *)*param_1;
  if (plVar5 != (long *)0x0) {
    plVar1 = plVar5 + 1;
    do {
      iVar4 = (int)*plVar1 + -1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *(int *)plVar1 = iVar4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar4 == 0) {
      (**(code **)(*plVar5 + 0x10))();
    }
  }
  *param_1 = 0;
  param_1[1] = 0;
  return param_1;
}



/* Entry: 1000452e8; end: 1000453b7;  */

void FUN_1000452e8(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar1 = (undefined8 *)0x108;
  func_0x000107c60e20();
  puVar1[4] = 0;
  puVar1[3] = 0;
  puVar1[6] = 0;
  puVar1[5] = 0;
  *(undefined4 *)(puVar1 + 7) = 0x42ff0000;
  *(undefined8 *)((long)puVar1 + 0x44) = 0;
  *(undefined8 *)((long)puVar1 + 0x3c) = 0;
  *(undefined8 *)((long)puVar1 + 0x54) = 0;
  *(undefined8 *)((long)puVar1 + 0x4c) = 0;
  *(undefined8 *)((long)puVar1 + 100) = 0;
  *(undefined8 *)((long)puVar1 + 0x5c) = 0;
  puVar1[0x11] = 0;
  puVar1[0xe] = 0;
  puVar1[0xd] = 0;
  puVar1[0xf] = puVar1 + 8;
  puVar1[0x10] = puVar1 + 0x11;
  puVar1[0x12] = 0;
  puVar1[2] = 0x1ffffffff;
  puVar1[1] = 0;
  *puVar1 = &PTR_DAT_110b29590;
  *(undefined4 *)(puVar1 + 0x14) = 0x42ff0000;
  *(undefined8 *)((long)puVar1 + 0xac) = 0;
  *(undefined8 *)((long)puVar1 + 0xa4) = 0;
  *(undefined8 *)((long)puVar1 + 0xbc) = 0;
  *(undefined8 *)((long)puVar1 + 0xb4) = 0;
  *(undefined8 *)((long)puVar1 + 0xcc) = 0;
  *(undefined8 *)((long)puVar1 + 0xc4) = 0;
  puVar1[0x1e] = 0;
  puVar1[0x1b] = 0;
  puVar1[0x1a] = 0;
  puVar1[0x1c] = puVar1 + 0x15;
  puVar1[0x1d] = puVar1 + 0x1e;
  puVar1[0x1f] = 0;
  *(undefined1 *)(puVar1 + 0x13) = 1;
  puVar2 = (undefined8 *)0x20;
  func_0x000107c60e20();
  *(undefined4 *)(puVar2 + 1) = 1;
  *puVar2 = &PTR_DAT_110b29688;
  puVar2[2] = puVar1;
  *param_1 = puVar2;
  param_1[1] = puVar1;
  return;
}



/* Entry: 1000453b8; end: 10004540b;  */

long * FUN_1000453b8(long *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  long *plVar5;
  
  plVar5 = (long *)*param_1;
  if (plVar5 != (long *)0x0) {
    plVar1 = plVar5 + 1;
    do {
      iVar4 = (int)*plVar1 + -1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *(int *)plVar1 = iVar4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar4 == 0) {
      (**(code **)(*plVar5 + 0x10))();
    }
  }
  *param_1 = 0;
  param_1[1] = 0;
  return param_1;
}



/* Entry: 10004540c; end: 10004546f;  */

void FUN_10004540c(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  uVar1 = 0x48;
  func_0x000107c60e20();
  FUN_100045470();
  puVar2 = (undefined8 *)0x20;
  func_0x000107c60e20();
  *(undefined4 *)(puVar2 + 1) = 1;
  *puVar2 = &PTR_DAT_110b296c8;
  puVar2[2] = uVar1;
  *param_1 = puVar2;
  param_1[1] = uVar1;
  return;
}



/* Entry: 100045470; end: 100045503;  */

undefined8 * FUN_100045470(undefined8 *param_1)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  
  param_1[7] = 0;
  param_1[8] = 0;
  *(undefined1 *)(param_1 + 6) = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_DAT_110b29600;
  puVar1 = (undefined4 *)0x18;
  FUN_1000437c8();
  *puVar1 = 1;
  param_1[1] = puVar1 + 1;
  param_1[2] = 0x13;
  *(undefined1 *)((long)puVar1 + 0x17) = 0;
  puVar2 = (undefined8 *)param_1[1];
  *(undefined4 *)((long)puVar2 + 0xf) = 0x29706265;
  puVar2[1] = 0x65772e2a28207365;
  *puVar2 = 0x6c69662050626557;
  *(undefined1 *)(param_1 + 6) = 1;
  return param_1;
}



/* Entry: 100045504; end: 100045557;  */

long * FUN_100045504(long *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  long *plVar5;
  
  plVar5 = (long *)*param_1;
  if (plVar5 != (long *)0x0) {
    plVar1 = plVar5 + 1;
    do {
      iVar4 = (int)*plVar1 + -1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *(int *)plVar1 = iVar4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar4 == 0) {
      (**(code **)(*plVar5 + 0x10))();
    }
  }
  *param_1 = 0;
  param_1[1] = 0;
  return param_1;
}



/* Entry: 100045558; end: 1000455bb;  */

void FUN_100045558(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  uVar1 = 0x4f8;
  func_0x000107c60e20();
  FUN_1000455bc();
  puVar2 = (undefined8 *)0x20;
  func_0x000107c60e20();
  *(undefined4 *)(puVar2 + 1) = 1;
  *puVar2 = &PTR_DAT_110b29460;
  puVar2[2] = uVar1;
  *param_1 = puVar2;
  param_1[1] = uVar1;
  return;
}



/* Entry: 1000455bc; end: 1000456af;  */

undefined8 * FUN_1000455bc(undefined8 *param_1)

{
  undefined4 *puVar1;
  
  param_1[3] = 0;
  param_1[4] = 0;
  *(undefined4 *)(param_1 + 7) = 0x42ff0000;
  *(undefined8 *)((long)param_1 + 0x44) = 0;
  *(undefined8 *)((long)param_1 + 0x3c) = 0;
  *(undefined8 *)((long)param_1 + 0x54) = 0;
  *(undefined8 *)((long)param_1 + 0x4c) = 0;
  *(undefined8 *)((long)param_1 + 100) = 0;
  *(undefined8 *)((long)param_1 + 0x5c) = 0;
  param_1[0xe] = 0;
  param_1[0xd] = 0;
  param_1[0x11] = 0;
  param_1[0xf] = param_1 + 8;
  param_1[0x10] = param_1 + 0x11;
  param_1[0x12] = 0;
  *(undefined1 *)(param_1 + 0x13) = 0;
  param_1[2] = 0x1ffffffff;
  param_1[1] = 0;
  *param_1 = &PTR_DAT_110b29368;
  param_1[0x17] = 0;
  param_1[0x16] = 0;
  param_1[0x19] = 0;
  param_1[0x18] = 0;
  *(undefined4 *)(param_1 + 0x1a) = 0x8000;
  param_1[0x14] = &PTR_DAT_110b289d0;
  *(undefined1 *)(param_1 + 0x1b) = 0;
  *(undefined1 *)(param_1 + 0x15) = 0;
  *(undefined4 *)((long)param_1 + 0x4e4) = 0xffffffff;
  param_1[5] = 0;
  param_1[6] = 0;
  puVar1 = (undefined4 *)0xc;
  FUN_1000437c8();
  *puVar1 = 1;
  param_1[5] = puVar1 + 1;
  param_1[6] = 4;
  *(undefined1 *)(puVar1 + 2) = 0;
  *(undefined4 *)param_1[5] = 0x956aa659;
  return param_1;
}



/* Entry: 1000456b0; end: 100045703;  */

long * FUN_1000456b0(long *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  long *plVar5;
  
  plVar5 = (long *)*param_1;
  if (plVar5 != (long *)0x0) {
    plVar1 = plVar5 + 1;
    do {
      iVar4 = (int)*plVar1 + -1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *(int *)plVar1 = iVar4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar4 == 0) {
      (**(code **)(*plVar5 + 0x10))();
    }
  }
  *param_1 = 0;
  param_1[1] = 0;
  return param_1;
}



/* Entry: 100045704; end: 100045767;  */

void FUN_100045704(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  uVar1 = 0x48;
  func_0x000107c60e20();
  FUN_100045768();
  puVar2 = (undefined8 *)0x20;
  func_0x000107c60e20();
  *(undefined4 *)(puVar2 + 1) = 1;
  *puVar2 = &PTR_DAT_110b294a0;
  puVar2[2] = uVar1;
  *param_1 = puVar2;
  param_1[1] = uVar1;
  return;
}



/* Entry: 100045768; end: 1000457f3;  */

undefined8 * FUN_100045768(undefined8 *param_1)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  
  param_1[7] = 0;
  param_1[8] = 0;
  *(undefined1 *)(param_1 + 6) = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_DAT_110b293d8;
  puVar1 = (undefined4 *)0x24;
  FUN_1000437c8();
  *puVar1 = 1;
  param_1[1] = puVar1 + 1;
  param_1[2] = 0x1d;
  *(undefined1 *)((long)puVar1 + 0x21) = 0;
  puVar2 = (undefined8 *)param_1[1];
  *(undefined8 *)((long)puVar2 + 0x15) = 0x297361722e2a3b72;
  *(undefined8 *)((long)puVar2 + 0xd) = 0x732e2a282073656c;
  puVar2[1] = 0x73656c6966207265;
  *puVar2 = 0x74736172206e7553;
  return param_1;
}



/* Entry: 1000457f4; end: 100045847;  */

long * FUN_1000457f4(long *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  long *plVar5;
  
  plVar5 = (long *)*param_1;
  if (plVar5 != (long *)0x0) {
    plVar1 = plVar5 + 1;
    do {
      iVar4 = (int)*plVar1 + -1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *(int *)plVar1 = iVar4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar4 == 0) {
      (**(code **)(*plVar5 + 0x10))();
    }
  }
  *param_1 = 0;
  param_1[1] = 0;
  return param_1;
}



/* Entry: 100045848; end: 100045917;  */

void FUN_100045848(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar1 = (undefined8 *)0x4f0;
  func_0x000107c60e20();
  puVar1[4] = 0;
  puVar1[3] = 0;
  puVar1[6] = 0;
  puVar1[5] = 0;
  *(undefined4 *)(puVar1 + 7) = 0x42ff0000;
  *(undefined8 *)((long)puVar1 + 0x44) = 0;
  *(undefined8 *)((long)puVar1 + 0x3c) = 0;
  *(undefined8 *)((long)puVar1 + 0x54) = 0;
  *(undefined8 *)((long)puVar1 + 0x4c) = 0;
  *(undefined8 *)((long)puVar1 + 100) = 0;
  *(undefined8 *)((long)puVar1 + 0x5c) = 0;
  puVar1[0xe] = 0;
  puVar1[0xd] = 0;
  puVar1[0x11] = 0;
  puVar1[0xf] = puVar1 + 8;
  puVar1[0x10] = puVar1 + 0x11;
  puVar1[0x12] = 0;
  puVar1[2] = 0x1ffffffff;
  puVar1[1] = 0;
  *puVar1 = &PTR_DAT_110b291e0;
  puVar1[0x17] = 0;
  puVar1[0x16] = 0;
  puVar1[0x19] = 0;
  puVar1[0x18] = 0;
  *(undefined4 *)(puVar1 + 0x1a) = 0x8000;
  *(undefined1 *)(puVar1 + 0x1b) = 0;
  *(undefined1 *)(puVar1 + 0x15) = 0;
  puVar1[0x14] = &PTR_DAT_110b28968;
  *(undefined4 *)((long)puVar1 + 0x4e4) = 0xffffffff;
  *(undefined1 *)(puVar1 + 0x13) = 1;
  puVar2 = (undefined8 *)0x20;
  func_0x000107c60e20();
  *(undefined4 *)(puVar2 + 1) = 1;
  *puVar2 = &PTR_DAT_110b292e8;
  puVar2[2] = puVar1;
  *param_1 = puVar2;
  param_1[1] = puVar1;
  return;
}



/* Entry: 100045918; end: 10004596b;  */

long * FUN_100045918(long *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  long *plVar5;
  
  plVar5 = (long *)*param_1;
  if (plVar5 != (long *)0x0) {
    plVar1 = plVar5 + 1;
    do {
      iVar4 = (int)*plVar1 + -1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *(int *)plVar1 = iVar4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar4 == 0) {
      (**(code **)(*plVar5 + 0x10))();
    }
  }
  *param_1 = 0;
  param_1[1] = 0;
  return param_1;
}



/* Entry: 10004596c; end: 1000459cf;  */

void FUN_10004596c(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  uVar1 = 0x48;
  func_0x000107c60e20();
  FUN_1000459d0();
  puVar2 = (undefined8 *)0x20;
  func_0x000107c60e20();
  *(undefined4 *)(puVar2 + 1) = 1;
  *puVar2 = &PTR_DAT_110b29328;
  puVar2[2] = uVar1;
  *param_1 = puVar2;
  param_1[1] = uVar1;
  return;
}



/* Entry: 1000459d0; end: 100045a67;  */

undefined8 * FUN_1000459d0(undefined8 *param_1)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  
  param_1[7] = 0;
  param_1[8] = 0;
  *(undefined1 *)(param_1 + 6) = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_DAT_110b29260;
  puVar1 = (undefined4 *)0x3c;
  FUN_1000437c8();
  *puVar1 = 1;
  param_1[1] = puVar1 + 1;
  param_1[2] = 0x35;
  *(undefined1 *)((long)puVar1 + 0x39) = 0;
  puVar2 = (undefined8 *)param_1[1];
  *(undefined8 *)((long)puVar2 + 0x2d) = 0x296d6e702e2a3b6d;
  puVar2[5] = 0x2a3b6d78702e2a3b;
  puVar2[4] = 0x6d70702e2a3b6d67;
  puVar2[1] = 0x66206567616d6920;
  *puVar2 = 0x656c626174726f50;
  puVar2[3] = 0x702e2a3b6d62702e;
  puVar2[2] = 0x2a282074616d726f;
  *(undefined1 *)(param_1 + 6) = 1;
  return param_1;
}



/* Entry: 100045a68; end: 100045abb;  */

long * FUN_100045a68(long *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  long *plVar5;
  
  plVar5 = (long *)*param_1;
  if (plVar5 != (long *)0x0) {
    plVar1 = plVar5 + 1;
    do {
      iVar4 = (int)*plVar1 + -1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *(int *)plVar1 = iVar4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar4 == 0) {
      (**(code **)(*plVar5 + 0x10))();
    }
  }
  *param_1 = 0;
  param_1[1] = 0;
  return param_1;
}



/* Entry: 100045abc; end: 100045b1f;  */

void FUN_100045abc(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  uVar1 = 0x48;
  func_0x000107c60e20();
  FUN_100045b20();
  puVar2 = (undefined8 *)0x20;
  func_0x000107c60e20();
  *(undefined4 *)(puVar2 + 1) = 1;
  *puVar2 = &PTR_DAT_110b29550;
  puVar2[2] = uVar1;
  *param_1 = puVar2;
  param_1[1] = uVar1;
  return;
}



/* Entry: 100045b20; end: 100045baf;  */

undefined8 * FUN_100045b20(undefined8 *param_1)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  
  param_1[7] = 0;
  param_1[8] = 0;
  *(undefined1 *)(param_1 + 6) = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_DAT_110b294e0;
  puVar1 = (undefined4 *)0x20;
  FUN_1000437c8();
  *puVar1 = 1;
  param_1[1] = puVar1 + 1;
  param_1[2] = 0x19;
  *(undefined1 *)((long)puVar1 + 0x1d) = 0;
  puVar2 = (undefined8 *)param_1[1];
  *(undefined8 *)((long)puVar2 + 0x11) = 0x296669742e2a3b66;
  *(undefined8 *)((long)puVar2 + 9) = 0x6669742e2a282073;
  puVar2[1] = 0x69742e2a28207365;
  *puVar2 = 0x6c69462046464954;
  *(undefined1 *)(param_1 + 6) = 1;
  return param_1;
}



/* Entry: 100045bb0; end: 100045c03;  */

long * FUN_100045bb0(long *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  long *plVar5;
  
  plVar5 = (long *)*param_1;
  if (plVar5 != (long *)0x0) {
    plVar1 = plVar5 + 1;
    do {
      iVar4 = (int)*plVar1 + -1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *(int *)plVar1 = iVar4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar4 == 0) {
      (**(code **)(*plVar5 + 0x10))();
    }
  }
  *param_1 = 0;
  param_1[1] = 0;
  return param_1;
}



/* Entry: 100045c04; end: 100045c67;  */

void FUN_100045c04(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  uVar1 = 0xd0;
  func_0x000107c60e20();
  FUN_100045c68();
  puVar2 = (undefined8 *)0x20;
  func_0x000107c60e20();
  *(undefined4 *)(puVar2 + 1) = 1;
  *puVar2 = &PTR_DAT_110b29160;
  puVar2[2] = uVar1;
  *param_1 = puVar2;
  param_1[1] = uVar1;
  return;
}



/* Entry: 100045c68; end: 100045d3b;  */

undefined8 * FUN_100045c68(undefined8 *param_1)

{
  undefined4 *puVar1;
  
  param_1[3] = 0;
  param_1[4] = 0;
  *(undefined4 *)(param_1 + 7) = 0x42ff0000;
  *(undefined8 *)((long)param_1 + 0x44) = 0;
  *(undefined8 *)((long)param_1 + 0x3c) = 0;
  *(undefined8 *)((long)param_1 + 0x54) = 0;
  *(undefined8 *)((long)param_1 + 0x4c) = 0;
  *(undefined8 *)((long)param_1 + 100) = 0;
  *(undefined8 *)((long)param_1 + 0x5c) = 0;
  param_1[0xe] = 0;
  param_1[0xd] = 0;
  param_1[0x11] = 0;
  param_1[0xf] = param_1 + 8;
  param_1[0x10] = param_1 + 0x11;
  param_1[0x12] = 0;
  *(undefined1 *)(param_1 + 0x13) = 0;
  param_1[2] = 0x1ffffffff;
  param_1[1] = 0;
  *param_1 = &PTR_DAT_110b29068;
  param_1[5] = 0;
  param_1[6] = 0;
  puVar1 = (undefined4 *)0x10;
  FUN_1000437c8();
  *puVar1 = 1;
  param_1[5] = puVar1 + 1;
  param_1[6] = 8;
  *(undefined1 *)(puVar1 + 3) = 0;
  *(undefined8 *)param_1[5] = 0xa1a0a0d474e5089;
  *(undefined4 *)(param_1 + 0x18) = 0;
  param_1[0x15] = 0;
  param_1[0x14] = 0;
  param_1[0x17] = 0;
  param_1[0x16] = 0;
  *(undefined1 *)(param_1 + 0x13) = 1;
  param_1[0x19] = 0;
  return param_1;
}



/* Entry: 100045d3c; end: 100045d8f;  */

long * FUN_100045d3c(long *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  long *plVar5;
  
  plVar5 = (long *)*param_1;
  if (plVar5 != (long *)0x0) {
    plVar1 = plVar5 + 1;
    do {
      iVar4 = (int)*plVar1 + -1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *(int *)plVar1 = iVar4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar4 == 0) {
      (**(code **)(*plVar5 + 0x10))();
    }
  }
  *param_1 = 0;
  param_1[1] = 0;
  return param_1;
}



/* Entry: 100045d90; end: 100045df3;  */

void FUN_100045d90(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  uVar1 = 0x48;
  func_0x000107c60e20();
  FUN_100045df4();
  puVar2 = (undefined8 *)0x20;
  func_0x000107c60e20();
  *(undefined4 *)(puVar2 + 1) = 1;
  *puVar2 = &PTR_DAT_110b291a0;
  puVar2[2] = uVar1;
  *param_1 = puVar2;
  param_1[1] = uVar1;
  return;
}



/* Entry: 100045df4; end: 100045e83;  */

undefined8 * FUN_100045df4(undefined8 *param_1)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  
  param_1[7] = 0;
  param_1[8] = 0;
  *(undefined1 *)(param_1 + 6) = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_DAT_110b290d8;
  puVar1 = (undefined4 *)0x2c;
  FUN_1000437c8();
  *puVar1 = 1;
  param_1[1] = puVar1 + 1;
  param_1[2] = 0x27;
  *(undefined1 *)((long)puVar1 + 0x2b) = 0;
  puVar2 = (undefined8 *)param_1[1];
  *(undefined8 *)((long)puVar2 + 0x1f) = 0x29676e702e2a2820;
  puVar2[1] = 0x6b726f7774654e20;
  *puVar2 = 0x656c626174726f50;
  puVar2[3] = 0x2073656c69662073;
  puVar2[2] = 0x6369687061724720;
  *(undefined1 *)(param_1 + 6) = 1;
  return param_1;
}



/* Entry: 100045e84; end: 100045ed7;  */

long * FUN_100045e84(long *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  long *plVar5;
  
  plVar5 = (long *)*param_1;
  if (plVar5 != (long *)0x0) {
    plVar1 = plVar5 + 1;
    do {
      iVar4 = (int)*plVar1 + -1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *(int *)plVar1 = iVar4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar4 == 0) {
      (**(code **)(*plVar5 + 0x10))();
    }
  }
  *param_1 = 0;
  param_1[1] = 0;
  return param_1;
}


