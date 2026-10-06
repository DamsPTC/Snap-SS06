/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10a3232f8; end: 10a323523;  */

void FUN_10a3232f8(long *param_1,undefined8 param_2,long param_3,long *param_4)

{
  undefined8 uVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  ulong uVar5;
  long lVar6;
  long *plVar7;
  long *unaff_x25;
  ulong uVar8;
  
  plVar4 = param_1;
  FUN_10a054838();
  plVar7 = (long *)param_1[1];
  if (plVar7 != (long *)0x0) {
    uVar8 = (long)plVar7 - 1;
    if (((ulong)plVar7 & uVar8) == 0) {
      unaff_x25 = (long *)(uVar8 & (ulong)plVar4);
    }
    else {
      unaff_x25 = plVar4;
      if (plVar7 <= plVar4) {
        uVar5 = 0;
        if (plVar7 != (long *)0x0) {
          uVar5 = (ulong)plVar4 / (ulong)plVar7;
        }
        unaff_x25 = (long *)((long)plVar4 - uVar5 * (long)plVar7);
      }
    }
    plVar2 = *(long **)(*param_1 + (long)unaff_x25 * 8);
    if (plVar2 != (long *)0x0) {
      for (plVar2 = (long *)*plVar2; plVar2 != (long *)0x0; plVar2 = (long *)*plVar2) {
        plVar3 = (long *)plVar2[1];
        if (plVar3 == plVar4) {
          if (plVar2[3] == param_3) {
            uVar1 = plVar2[2];
            _memcmp(uVar1,param_2,param_3);
            if ((int)uVar1 == 0) {
              return;
            }
          }
        }
        else {
          if (((ulong)plVar7 & uVar8) == 0) {
            plVar3 = (long *)((ulong)plVar3 & uVar8);
          }
          else if (plVar7 <= plVar3) {
            uVar5 = 0;
            if (plVar7 != (long *)0x0) {
              uVar5 = (ulong)plVar3 / (ulong)plVar7;
            }
            plVar3 = (long *)((long)plVar3 - uVar5 * (long)plVar7);
          }
          if (plVar3 != unaff_x25) break;
        }
      }
    }
  }
  plVar2 = (long *)0x28;
  __Znwm();
  *plVar2 = 0;
  plVar2[1] = (long)plVar4;
  lVar6 = *param_4;
  plVar2[3] = param_4[1];
  plVar2[2] = lVar6;
  plVar2[4] = param_4[2];
  if ((plVar7 == (long *)0x0) || (*(float *)(param_1 + 4) * (float)plVar7 < (float)(param_1[3] + 1))
     ) {
    uVar8 = 1;
    if ((long *)0x2 < plVar7) {
      uVar8 = (ulong)(((ulong)plVar7 & (long)plVar7 - 1U) != 0);
    }
    uVar8 = uVar8 | (long)plVar7 << 1;
    uVar5 = (ulong)((float)(param_1[3] + 1) / *(float *)(param_1 + 4));
    if (uVar8 <= uVar5) {
      uVar8 = uVar5;
    }
    FUN_10a320490(param_1,uVar8);
    plVar7 = (long *)param_1[1];
    if (((ulong)plVar7 & (long)plVar7 - 1U) == 0) {
      unaff_x25 = (long *)((long)plVar7 - 1U & (ulong)plVar4);
    }
    else {
      unaff_x25 = plVar4;
      if (plVar7 <= plVar4) {
        uVar8 = 0;
        if (plVar7 != (long *)0x0) {
          uVar8 = (ulong)plVar4 / (ulong)plVar7;
        }
        unaff_x25 = (long *)((long)plVar4 - uVar8 * (long)plVar7);
      }
    }
  }
  lVar6 = *param_1;
  plVar4 = *(long **)(lVar6 + (long)unaff_x25 * 8);
  if (plVar4 == (long *)0x0) {
    plVar4 = param_1 + 2;
    *plVar2 = *plVar4;
    *plVar4 = (long)plVar2;
    *(long **)(lVar6 + (long)unaff_x25 * 8) = plVar4;
    if (*plVar2 == 0) goto LAB_10a3234e8;
    plVar4 = *(long **)(*plVar2 + 8);
    if (((ulong)plVar7 & (long)plVar7 - 1U) == 0) {
      plVar4 = (long *)((ulong)plVar4 & (long)plVar7 - 1U);
    }
    else if (plVar7 <= plVar4) {
      uVar8 = 0;
      if (plVar7 != (long *)0x0) {
        uVar8 = (ulong)plVar4 / (ulong)plVar7;
      }
      plVar4 = (long *)((long)plVar4 - uVar8 * (long)plVar7);
    }
    plVar4 = (long *)(*param_1 + (long)plVar4 * 8);
  }
  else {
    *plVar2 = *plVar4;
  }
  *plVar4 = (long)plVar2;
LAB_10a3234e8:
  param_1[3] = param_1[3] + 1;
  return;
}



/* Entry: 10a323524; end: 10a3235d3;  */

void FUN_10a323524(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 != 0) {
    func_0x00010a323560(lVar1 + 8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(lVar1);
    return;
  }
  return;
}



/* Entry: 10a3235d4; end: 10a3236cf;  */

long * FUN_10a3235d4(long *param_1,undefined8 *param_2)

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



/* Entry: 10a3236d0; end: 10a323807;  */

void FUN_10a3236d0(long *param_1)

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
  FUN_10a3235d4();
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
LAB_10a323770:
    if (lVar3 == 0) {
LAB_10a3237a4:
      *(undefined8 *)(*param_1 + uVar4 * 8) = 0;
      lVar3 = *plVar2;
      goto LAB_10a3237ac;
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
    if (uVar9 != uVar4) goto LAB_10a3237a4;
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
    if (uVar8 != uVar4) goto LAB_10a323770;
LAB_10a3237ac:
    if (lVar3 == 0) goto LAB_10a3237e8;
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
LAB_10a3237e8:
  *plVar7 = lVar3;
  *plVar2 = 0;
  param_1[3] = param_1[3] + -1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a323808; end: 10a3238a7;  */

void FUN_10a323808(long *param_1,undefined8 *param_2)

{
  long *plVar1;
  undefined8 *puVar2;
  long *plVar3;
  long *plVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  puVar2 = (undefined8 *)0x40;
  __Znwm();
  uVar5 = *param_2;
  uVar7 = param_2[3];
  uVar6 = param_2[2];
  puVar2[5] = param_2[1];
  puVar2[4] = uVar5;
  puVar2[7] = uVar7;
  puVar2[6] = uVar6;
  plVar4 = param_1 + 1;
  plVar3 = plVar4;
  if ((long *)*plVar4 != (long *)0x0) {
    uVar5 = puVar2[4];
    uVar6 = puVar2[5];
    plVar1 = (long *)*plVar4;
    do {
      while (plVar4 = plVar1, uVar7 = uVar5, FUN_10a003d5c(uVar5,uVar6,plVar4[4],plVar4[5]),
            ((uint)uVar7 >> 7 & 1) != 0) {
        plVar3 = plVar4;
        plVar1 = (long *)*plVar4;
        if ((long *)*plVar4 == (long *)0x0) goto LAB_10a323888;
      }
      plVar1 = (long *)plVar4[1];
    } while ((long *)plVar4[1] != (long *)0x0);
    plVar3 = plVar4 + 1;
  }
LAB_10a323888:
  *puVar2 = 0;
  puVar2[1] = 0;
  puVar2[2] = plVar4;
  *plVar3 = (long)puVar2;
  if (*(long *)*param_1 != 0) {
    *param_1 = *(long *)*param_1;
    puVar2 = (undefined8 *)*plVar3;
  }
  func_0x000107c2b058(param_1[1],puVar2);
  param_1[2] = param_1[2] + 1;
  return;
}



/* Entry: 10a3238a8; end: 10a3238fb;  */

void FUN_10a3238a8(long *param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4)

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



/* Entry: 10a3238fc; end: 10a323b2f;  */

long * FUN_10a3238fc(long *param_1,undefined8 *param_2,long *param_3)

{
  undefined8 uVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  ulong uVar6;
  long lVar7;
  long *plVar8;
  long *unaff_x26;
  ulong uVar9;
  
  plVar5 = param_1;
  FUN_10a054838(param_1,*param_2,param_2[1]);
  plVar8 = (long *)param_1[1];
  if (plVar8 != (long *)0x0) {
    uVar9 = (long)plVar8 - 1;
    if (((ulong)plVar8 & uVar9) == 0) {
      unaff_x26 = (long *)(uVar9 & (ulong)plVar5);
    }
    else {
      unaff_x26 = plVar5;
      if (plVar8 <= plVar5) {
        uVar6 = 0;
        if (plVar8 != (long *)0x0) {
          uVar6 = (ulong)plVar5 / (ulong)plVar8;
        }
        unaff_x26 = (long *)((long)plVar5 - uVar6 * (long)plVar8);
      }
    }
    plVar3 = *(long **)(*param_1 + (long)unaff_x26 * 8);
    if ((plVar3 != (long *)0x0) && (plVar3 = (long *)*plVar3, plVar3 != (long *)0x0)) {
      uVar1 = *param_2;
      lVar7 = param_2[1];
      do {
        plVar4 = (long *)plVar3[1];
        if (plVar4 == plVar5) {
          if (plVar3[3] == lVar7) {
            lVar2 = plVar3[2];
            _memcmp(lVar2,uVar1,lVar7);
            if ((int)lVar2 == 0) {
              return plVar3;
            }
          }
        }
        else {
          if (((ulong)plVar8 & uVar9) == 0) {
            plVar4 = (long *)((ulong)plVar4 & uVar9);
          }
          else if (plVar8 <= plVar4) {
            uVar6 = 0;
            if (plVar8 != (long *)0x0) {
              uVar6 = (ulong)plVar4 / (ulong)plVar8;
            }
            plVar4 = (long *)((long)plVar4 - uVar6 * (long)plVar8);
          }
          if (plVar4 != unaff_x26) break;
        }
        plVar3 = (long *)*plVar3;
      } while (plVar3 != (long *)0x0);
    }
  }
  plVar3 = (long *)0x28;
  __Znwm();
  *plVar3 = 0;
  plVar3[1] = (long)plVar5;
  lVar7 = *param_3;
  plVar3[3] = param_3[1];
  plVar3[2] = lVar7;
  plVar3[4] = 0;
  if ((plVar8 == (long *)0x0) || (*(float *)(param_1 + 4) * (float)plVar8 < (float)(param_1[3] + 1))
     ) {
    uVar9 = 1;
    if ((long *)0x2 < plVar8) {
      uVar9 = (ulong)(((ulong)plVar8 & (long)plVar8 - 1U) != 0);
    }
    uVar9 = uVar9 | (long)plVar8 << 1;
    uVar6 = (ulong)((float)(param_1[3] + 1) / *(float *)(param_1 + 4));
    if (uVar9 <= uVar6) {
      uVar9 = uVar6;
    }
    FUN_10a320490(param_1,uVar9);
    plVar8 = (long *)param_1[1];
    if (((ulong)plVar8 & (long)plVar8 - 1U) == 0) {
      unaff_x26 = (long *)((long)plVar8 - 1U & (ulong)plVar5);
    }
    else {
      unaff_x26 = plVar5;
      if (plVar8 <= plVar5) {
        uVar9 = 0;
        if (plVar8 != (long *)0x0) {
          uVar9 = (ulong)plVar5 / (ulong)plVar8;
        }
        unaff_x26 = (long *)((long)plVar5 - uVar9 * (long)plVar8);
      }
    }
  }
  lVar7 = *param_1;
  plVar5 = *(long **)(lVar7 + (long)unaff_x26 * 8);
  if (plVar5 == (long *)0x0) {
    plVar5 = param_1 + 2;
    *plVar3 = *plVar5;
    *plVar5 = (long)plVar3;
    *(long **)(lVar7 + (long)unaff_x26 * 8) = plVar5;
    if (*plVar3 == 0) goto LAB_10a323af0;
    plVar5 = *(long **)(*plVar3 + 8);
    if (((ulong)plVar8 & (long)plVar8 - 1U) == 0) {
      plVar5 = (long *)((ulong)plVar5 & (long)plVar8 - 1U);
    }
    else if (plVar8 <= plVar5) {
      uVar9 = 0;
      if (plVar8 != (long *)0x0) {
        uVar9 = (ulong)plVar5 / (ulong)plVar8;
      }
      plVar5 = (long *)((long)plVar5 - uVar9 * (long)plVar8);
    }
    plVar5 = (long *)(*param_1 + (long)plVar5 * 8);
  }
  else {
    *plVar3 = *plVar5;
  }
  *plVar5 = (long)plVar3;
LAB_10a323af0:
  param_1[3] = param_1[3] + 1;
  return plVar3;
}



/* Entry: 10a323b30; end: 10a323b33;  */

void FUN_10a323b30(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10a323b34; end: 10a323b67;  */

void FUN_10a323b34(void)

{
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a323b68; end: 10a323b9f;  */

undefined8 FUN_10a323b68(undefined8 param_1,undefined8 param_2)

{
  FUN_10a042ab0(param_2,&PTR_DAT_110bc4390);
  if ((int)param_2 == 0) {
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 10a323ba0; end: 10a323ba3;  */

void FUN_10a323ba0(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a323ba4; end: 10a324017;  */

long * FUN_10a323ba4(long *param_1,int *param_2,long *param_3)

{
  ulong uVar1;
  code *pcVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  long *plVar12;
  ulong uVar13;
  ulong uVar14;
  ulong unaff_x24;
  
  uVar11 = (long)*param_2 + 0x9e3779b9;
  uVar11 = (long)param_2[1] + uVar11 * 0x40 + (uVar11 >> 2) + 0x9e3779b9 ^ uVar11;
  uVar11 = (long)param_2[2] + uVar11 * 0x40 + (uVar11 >> 2) + 0x9e3779b9 ^ uVar11;
  uVar11 = (ulong)(uint)param_2[4] + uVar11 * 0x40 + (uVar11 >> 2) + 0x9e3779b9 ^ uVar11;
  uVar11 = (ulong)*(byte *)(param_2 + 5) + uVar11 * 0x40 + (uVar11 >> 2) + 0x9e3779b9 ^ uVar11;
  uVar11 = (ulong)(uint)param_2[3] + uVar11 * 0x40 + (uVar11 >> 2) + 0x9e3779b9 ^ uVar11;
  uVar14 = param_1[1];
  if (uVar14 != 0) {
    uVar10 = uVar14 - 1;
    if ((uVar14 & uVar10) == 0) {
      unaff_x24 = uVar11 & uVar10;
    }
    else {
      unaff_x24 = uVar11;
      if (uVar14 <= uVar11) {
        uVar13 = 0;
        if (uVar14 != 0) {
          uVar13 = uVar11 / uVar14;
        }
        unaff_x24 = uVar11 - uVar13 * uVar14;
      }
    }
    plVar12 = *(long **)(*param_1 + unaff_x24 * 8);
    if (plVar12 != (long *)0x0) {
      for (plVar12 = (long *)*plVar12; plVar12 != (long *)0x0; plVar12 = (long *)*plVar12) {
        uVar13 = plVar12[1];
        if (uVar13 == uVar11) {
          if ((((*(int *)(plVar12 + 2) == *param_2 && *(int *)((long)plVar12 + 0x14) == param_2[1])
               && (*(int *)(plVar12 + 3) == param_2[2])) && (*(uint *)(plVar12 + 4) == param_2[4]))
             && ((*(byte *)((long)plVar12 + 0x24) == *(byte *)(param_2 + 5) &&
                 (*(uint *)((long)plVar12 + 0x1c) == param_2[3])))) {
            return plVar12;
          }
        }
        else {
          if ((uVar14 & uVar10) == 0) {
            uVar13 = uVar13 & uVar10;
          }
          else if (uVar14 <= uVar13) {
            uVar5 = 0;
            if (uVar14 != 0) {
              uVar5 = uVar13 / uVar14;
            }
            uVar13 = uVar13 - uVar5 * uVar14;
          }
          if (uVar13 != unaff_x24) break;
        }
      }
    }
  }
  plVar12 = (long *)0x58;
  __Znwm();
  *plVar12 = 0;
  plVar12[1] = uVar11;
  lVar3 = *param_3;
  plVar12[3] = param_3[1];
  plVar12[2] = lVar3;
  plVar12[4] = param_3[2];
  plVar12[6] = 0;
  plVar12[5] = 0;
  plVar12[8] = 0;
  plVar12[7] = 0;
  plVar12[10] = 0;
  plVar12[9] = 0;
  if ((uVar14 == 0) || (*(float *)(param_1 + 4) * (float)uVar14 < (float)(param_1[3] + 1))) {
    uVar10 = 1;
    if (2 < uVar14) {
      uVar10 = (ulong)((uVar14 & uVar14 - 1) != 0);
    }
    uVar10 = uVar10 | uVar14 << 1;
    uVar13 = (ulong)((float)(param_1[3] + 1) / *(float *)(param_1 + 4));
    if (uVar10 <= uVar13) {
      uVar10 = uVar13;
    }
    if (uVar10 - 1 == 0) {
      uVar10 = 2;
    }
    else if ((uVar10 & uVar10 - 1) != 0) {
      __ZNSt3__112__next_primeEm();
      uVar14 = param_1[1];
    }
    if (uVar14 < uVar10) {
LAB_10a323db8:
      if (uVar10 >> 0x3d != 0) {
        func_0x000109ffded8();
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x10a324004);
        (*pcVar2)();
      }
      lVar3 = uVar10 << 3;
      __Znwm();
      lVar4 = *param_1;
      *param_1 = lVar3;
      if (lVar4 != 0) {
        __ZdlPv();
      }
      uVar14 = 0;
      param_1[1] = uVar10;
      do {
        *(undefined8 *)(*param_1 + uVar14 * 8) = 0;
        uVar14 = uVar14 + 1;
      } while (uVar10 != uVar14);
      plVar6 = (long *)param_1[2];
      uVar14 = uVar10;
      if (plVar6 != (long *)0x0) {
        uVar13 = plVar6[1];
        uVar5 = uVar10 - 1;
        if ((uVar10 & uVar5) == 0) {
          uVar13 = uVar13 & uVar5;
        }
        else if (uVar10 <= uVar13) {
          uVar9 = 0;
          if (uVar10 != 0) {
            uVar9 = uVar13 / uVar10;
          }
          uVar13 = uVar13 - uVar9 * uVar10;
        }
        *(long **)(*param_1 + uVar13 * 8) = param_1 + 2;
        plVar7 = (long *)*plVar6;
        while (plVar7 != (long *)0x0) {
          uVar9 = plVar7[1];
          if ((uVar10 & uVar5) == 0) {
            uVar9 = uVar9 & uVar5;
          }
          else if (uVar10 <= uVar9) {
            uVar1 = 0;
            if (uVar10 != 0) {
              uVar1 = uVar9 / uVar10;
            }
            uVar9 = uVar9 - uVar1 * uVar10;
          }
          plVar8 = plVar7;
          if (uVar9 != uVar13) {
            lVar3 = *param_1;
            if (*(long *)(lVar3 + uVar9 * 8) == 0) {
              *(long **)(lVar3 + uVar9 * 8) = plVar6;
              uVar13 = uVar9;
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
    else if (uVar10 < uVar14) {
      uVar13 = (ulong)((float)(ulong)param_1[3] / *(float *)(param_1 + 4));
      if ((uVar14 < 3) || ((uVar14 & uVar14 - 1) != 0)) {
        __ZNSt3__112__next_primeEm();
      }
      else if (1 < uVar13) {
        uVar13 = 1L << (-LZCOUNT(uVar13 - 1) & 0x3fU);
      }
      if (uVar10 <= uVar13) {
        uVar10 = uVar13;
      }
      if (uVar10 < uVar14) {
        if (uVar10 != 0) goto LAB_10a323db8;
        lVar3 = *param_1;
        *param_1 = 0;
        if (lVar3 != 0) {
          __ZdlPv();
        }
        param_1[1] = 0;
        uVar14 = 0;
      }
      else {
        uVar14 = param_1[1];
      }
    }
    if ((uVar14 & uVar14 - 1) == 0) {
      unaff_x24 = uVar14 - 1 & uVar11;
    }
    else {
      unaff_x24 = uVar11;
      if (uVar14 <= uVar11) {
        uVar10 = 0;
        if (uVar14 != 0) {
          uVar10 = uVar11 / uVar14;
        }
        unaff_x24 = uVar11 - uVar10 * uVar14;
      }
    }
  }
  lVar3 = *param_1;
  plVar6 = *(long **)(lVar3 + unaff_x24 * 8);
  if (plVar6 == (long *)0x0) {
    plVar6 = param_1 + 2;
    *plVar12 = *plVar6;
    *plVar6 = (long)plVar12;
    *(long **)(lVar3 + unaff_x24 * 8) = plVar6;
    if (*plVar12 == 0) goto LAB_10a323f98;
    uVar11 = *(ulong *)(*plVar12 + 8);
    if ((uVar14 & uVar14 - 1) == 0) {
      uVar11 = uVar11 & uVar14 - 1;
    }
    else if (uVar14 <= uVar11) {
      uVar10 = 0;
      if (uVar14 != 0) {
        uVar10 = uVar11 / uVar14;
      }
      uVar11 = uVar11 - uVar10 * uVar14;
    }
    plVar6 = (long *)(*param_1 + uVar11 * 8);
  }
  else {
    *plVar12 = *plVar6;
  }
  *plVar6 = (long)plVar12;
LAB_10a323f98:
  param_1[3] = param_1[3] + 1;
  return plVar12;
}



/* Entry: 10a324018; end: 10a32405f;  */

void FUN_10a324018(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
    if ((char)param_1[2] == '\x01') {
      FUN_10a3209f8(lVar1 + 0x28);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(lVar1);
    return;
  }
  return;
}



/* Entry: 10a324060; end: 10a32436f;  */

void FUN_10a324060(ulong *param_1,undefined8 *param_2)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  ulong uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  ulong uVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  long lVar12;
  long lVar13;
  undefined8 *puVar14;
  ulong uVar15;
  
  if (0x1ff < param_1[4]) {
    param_1[4] = param_1[4] - 0x200;
    puVar10 = (undefined8 *)param_1[1] + 1;
    uVar3 = *(undefined8 *)param_1[1];
LAB_10a324098:
    param_1[1] = (ulong)puVar10;
    puVar10 = (undefined8 *)param_1[2];
    if (puVar10 == (undefined8 *)param_1[3]) {
      uVar15 = *param_1;
      uVar5 = param_1[1];
      if (uVar5 < uVar15 || uVar5 - uVar15 == 0) {
        uVar8 = (long)((long)puVar10 - uVar15) >> 2;
        if ((long)puVar10 - uVar15 == 0) {
          uVar8 = 1;
        }
        uVar15 = uVar8;
        FUN_10a32446c();
        puVar11 = (undefined8 *)(uVar15 + (uVar8 >> 2) * 8);
        lVar12 = param_1[2] - (long)param_1[1];
        puVar10 = puVar11;
        if (lVar12 != 0) {
          puVar10 = (undefined8 *)((long)puVar11 + lVar12);
          puVar7 = (undefined8 *)param_1[1];
          puVar9 = puVar11;
          do {
            *puVar9 = *puVar7;
            lVar12 = lVar12 + -8;
            puVar7 = puVar7 + 1;
            puVar9 = puVar9 + 1;
          } while (lVar12 != 0);
        }
        uVar8 = *param_1;
        *param_1 = uVar15;
        param_1[1] = (ulong)puVar11;
        param_1[2] = (ulong)puVar10;
        param_1[3] = uVar15 + uVar5 * 8;
        if (uVar8 != 0) {
          __ZdlPv(uVar8);
          puVar10 = (undefined8 *)param_1[2];
        }
      }
      else {
        lVar12 = (((long)(uVar5 - uVar15) >> 3) + 1) / 2;
        lVar13 = uVar5 + lVar12 * -8;
        lVar1 = (long)puVar10 - uVar5;
        if (lVar1 != 0) {
          _memmove(lVar13,uVar5,lVar1);
          uVar5 = param_1[1];
        }
        puVar10 = (undefined8 *)(lVar13 + lVar1);
        param_1[1] = uVar5 + lVar12 * -8;
        param_1[2] = (ulong)puVar10;
      }
    }
    *puVar10 = uVar3;
    param_1[2] = param_1[2] + 8;
    return;
  }
  puVar11 = (undefined8 *)param_1[2];
  puVar9 = (undefined8 *)param_1[3];
  puVar7 = (undefined8 *)*param_1;
  puVar10 = (undefined8 *)param_1[1];
  uVar15 = (long)puVar11 - (long)puVar10;
  if (uVar15 < (ulong)((long)puVar9 - (long)puVar7)) {
    uVar3 = 0x1000;
    __Znwm();
    if (puVar9 == puVar11) {
      if (puVar10 == puVar7) {
        uVar15 = (long)puVar9 - (long)puVar10 >> 2;
        if (puVar11 == puVar10) {
          uVar15 = 1;
        }
        lVar12 = uVar15 * 2;
        FUN_10a32446c();
        puVar10 = (undefined8 *)(uVar15 + (lVar12 + 6U & 0xfffffffffffffff8));
        lVar12 = param_1[2] - (long)param_1[1];
        puVar11 = puVar10;
        if (lVar12 != 0) {
          puVar11 = (undefined8 *)((long)puVar10 + lVar12);
          puVar7 = (undefined8 *)param_1[1];
          puVar9 = puVar10;
          do {
            *puVar9 = *puVar7;
            lVar12 = lVar12 + -8;
            puVar7 = puVar7 + 1;
            puVar9 = puVar9 + 1;
          } while (lVar12 != 0);
        }
        uVar5 = *param_1;
        *param_1 = uVar15;
        param_1[1] = (ulong)puVar10;
        param_1[2] = (ulong)puVar11;
        param_1[3] = uVar15 + (long)param_2 * 8;
        if (uVar5 != 0) {
          __ZdlPv(uVar5);
          puVar10 = (undefined8 *)param_1[1];
        }
      }
      puVar10[-1] = uVar3;
      puVar10 = (undefined8 *)param_1[1];
      param_1[1] = (ulong)(puVar10 + -1);
      uVar3 = puVar10[-1];
      goto LAB_10a324098;
    }
    *puVar11 = uVar3;
    param_1[2] = param_1[2] + 8;
  }
  else {
    puVar6 = (undefined8 *)((long)puVar9 - (long)puVar7 >> 2);
    if (puVar9 == puVar7) {
      puVar6 = (undefined8 *)0x1;
    }
    FUN_10a32446c();
    uVar3 = 0x1000;
    puVar4 = param_2;
    __Znwm();
    puVar7 = (undefined8 *)((long)puVar6 + uVar15);
    puVar9 = puVar6 + (long)param_2;
    puVar2 = puVar6;
    if (uVar15 == (long)param_2 * 8) {
      if ((long)uVar15 < 1) {
        puVar7 = (undefined8 *)((long)puVar7 - (long)puVar6 >> 2);
        if (puVar11 == puVar10) {
          puVar7 = (undefined8 *)0x1;
        }
        puVar2 = puVar7;
        FUN_10a32446c();
        puVar7 = puVar2 + ((ulong)puVar7 >> 2);
        puVar9 = puVar2 + (long)puVar4;
        if (puVar6 != (undefined8 *)0x0) {
          __ZdlPv(puVar6);
        }
      }
      else {
        lVar12 = ((long)puVar7 - (long)puVar6 >> 3) + 1;
        puVar7 = puVar7 + -((ulong)(lVar12 - (lVar12 >> 0x3f)) >> 1);
      }
    }
    puVar10 = puVar7 + 1;
    *puVar7 = uVar3;
    puVar11 = (undefined8 *)param_1[2];
    puVar6 = puVar2;
    if (puVar11 != (undefined8 *)param_1[1]) {
      do {
        puVar2 = puVar6;
        puVar14 = puVar7;
        if (puVar7 == puVar6) {
          if (puVar10 < puVar9) {
            lVar12 = ((long)puVar9 - (long)puVar10 >> 3) + 1;
            lVar1 = (long)puVar10 - (long)puVar6;
            lVar13 = (long)puVar10 - (long)puVar6;
            puVar10 = puVar10 + ((ulong)(lVar12 - (lVar12 >> 0x3f)) >> 1);
            puVar14 = (undefined8 *)((long)puVar10 - lVar1);
            if (lVar13 != 0) {
              _memmove(puVar14,puVar7,lVar13);
              puVar4 = puVar7;
            }
          }
          else {
            puVar14 = (undefined8 *)((long)puVar9 - (long)puVar6 >> 2);
            if ((long)puVar9 - (long)puVar6 == 0) {
              puVar14 = (undefined8 *)0x1;
            }
            puVar2 = puVar14;
            FUN_10a32446c();
            puVar14 = (undefined8 *)((long)puVar2 + ((long)puVar14 * 2 + 6U & 0xfffffffffffffff8));
            lVar12 = (long)puVar10 - (long)puVar6;
            puVar10 = puVar14;
            if (lVar12 != 0) {
              puVar10 = (undefined8 *)((long)puVar14 + lVar12);
              puVar9 = puVar14;
              do {
                *puVar9 = *puVar7;
                lVar12 = lVar12 + -8;
                puVar9 = puVar9 + 1;
                puVar7 = puVar7 + 1;
              } while (lVar12 != 0);
            }
            puVar9 = puVar2 + (long)puVar4;
            if (puVar6 != (undefined8 *)0x0) {
              __ZdlPv(puVar6);
            }
          }
        }
        puVar11 = puVar11 + -1;
        puVar7 = puVar14 + -1;
        *puVar7 = *puVar11;
        puVar6 = puVar2;
      } while (puVar11 != (undefined8 *)param_1[1]);
    }
    uVar15 = *param_1;
    *param_1 = (ulong)puVar2;
    param_1[1] = (ulong)puVar7;
    param_1[2] = (ulong)puVar10;
    param_1[3] = (ulong)puVar9;
    if (uVar15 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___ZdlPv_110352258)();
      return;
    }
  }
  return;
}



/* Entry: 10a324370; end: 10a32446b;  */

void FUN_10a324370(ulong *param_1,undefined8 param_2)

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
      FUN_10a32446c();
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
  *puVar7 = param_2;
  param_1[2] = param_1[2] + 8;
  return;
}



/* Entry: 10a32446c; end: 10a32449f;  */

void FUN_10a32446c(long *param_1,long *param_2)

{
  long *plVar1;
  ulong uVar2;
  char cVar3;
  bool bVar4;
  code *pcVar5;
  long *plVar6;
  long lVar7;
  undefined **ppuVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  long lVar12;
  
  if ((ulong)param_1 >> 0x3d == 0) {
    __Znwm((long)param_1 << 3);
    return;
  }
  func_0x000109ffded8();
  plVar6 = (long *)param_1[1];
  if (plVar6 == (long *)0x0) {
    plVar6 = (long *)0x0;
  }
  else {
    __ZNSt3__119__shared_weak_count4lockEv();
    if ((plVar6 != (long *)0x0) && (lVar12 = *param_1, lVar12 != 0)) {
      __ZNSt3__15mutex4lockEv(lVar12 + 0x80);
      if ((*(byte *)(lVar12 + 0x78) & 1) == 0) {
        if (2 < (ulong)*(byte *)(param_1 + 2)) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x10a324618);
          (*pcVar5)();
        }
        lVar7 = lVar12 + (ulong)*(byte *)(param_1 + 2) * 0x28;
        FUN_10a323ba4(lVar7,(long)param_1 + 0x14,(long)param_1 + 0x14);
        lVar9 = *(long *)(lVar7 + 0x30);
        uVar2 = 0;
        if (*(long *)(lVar7 + 0x38) != lVar9) {
          uVar2 = (*(long *)(lVar7 + 0x38) - lVar9) * 0x40 - 1;
        }
        lVar10 = *(long *)(lVar7 + 0x50);
        uVar11 = lVar10 + *(long *)(lVar7 + 0x48);
        if (uVar2 == uVar11) {
          FUN_10a324060(lVar7 + 0x28);
          lVar9 = *(long *)(lVar7 + 0x30);
          lVar10 = *(long *)(lVar7 + 0x50);
          uVar11 = *(long *)(lVar7 + 0x48) + lVar10;
        }
        *(long **)(*(long *)(lVar9 + (uVar11 >> 9) * 8) + (uVar11 & 0x1ff) * 8) = param_2;
        *(long *)(lVar7 + 0x50) = lVar10 + 1;
        __ZNSt3__15mutex6unlockEv(lVar12 + 0x80);
        goto LAB_10a32453c;
      }
      __ZNSt3__15mutex6unlockEv(lVar12 + 0x80);
    }
  }
  if (param_2 != (long *)0x0) {
    (**(code **)(*param_2 + 8))(param_2);
  }
  ppuVar8 = &PTR_PTR_1133013a8;
  FUN_10ae079a0(0,&PTR_PTR_1133013a8);
  FUN_10ae07cd4(ppuVar8,&PTR_PTR_1133013a8);
  if (plVar6 == (long *)0x0) {
    return;
  }
LAB_10a32453c:
  plVar1 = plVar6 + 1;
  do {
    lVar12 = *plVar1;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar4) {
      *plVar1 = lVar12 + -1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  if (lVar12 != 0) {
    return;
  }
  (**(code **)(*plVar6 + 0x10))(plVar6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_count14__release_weakEv_110346648)(plVar6);
  return;
}



/* Entry: 10a3244a0; end: 10a32463b;  */

void FUN_10a3244a0(long *param_1,long *param_2)

{
  long *plVar1;
  ulong uVar2;
  char cVar3;
  bool bVar4;
  code *pcVar5;
  long *plVar6;
  long lVar7;
  undefined **ppuVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  long lVar12;
  
  plVar6 = (long *)param_1[1];
  if (plVar6 == (long *)0x0) {
    plVar6 = (long *)0x0;
  }
  else {
    __ZNSt3__119__shared_weak_count4lockEv();
    if ((plVar6 != (long *)0x0) && (lVar12 = *param_1, lVar12 != 0)) {
      __ZNSt3__15mutex4lockEv(lVar12 + 0x80);
      if ((*(byte *)(lVar12 + 0x78) & 1) == 0) {
        if (2 < (ulong)*(byte *)(param_1 + 2)) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x10a324618);
          (*pcVar5)();
        }
        lVar7 = lVar12 + (ulong)*(byte *)(param_1 + 2) * 0x28;
        FUN_10a323ba4(lVar7,(long)param_1 + 0x14,(long)param_1 + 0x14);
        lVar9 = *(long *)(lVar7 + 0x30);
        uVar2 = 0;
        if (*(long *)(lVar7 + 0x38) != lVar9) {
          uVar2 = (*(long *)(lVar7 + 0x38) - lVar9) * 0x40 - 1;
        }
        lVar10 = *(long *)(lVar7 + 0x50);
        uVar11 = lVar10 + *(long *)(lVar7 + 0x48);
        if (uVar2 == uVar11) {
          FUN_10a324060(lVar7 + 0x28);
          lVar9 = *(long *)(lVar7 + 0x30);
          lVar10 = *(long *)(lVar7 + 0x50);
          uVar11 = *(long *)(lVar7 + 0x48) + lVar10;
        }
        *(long **)(*(long *)(lVar9 + (uVar11 >> 9) * 8) + (uVar11 & 0x1ff) * 8) = param_2;
        *(long *)(lVar7 + 0x50) = lVar10 + 1;
        __ZNSt3__15mutex6unlockEv(lVar12 + 0x80);
        goto LAB_10a32453c;
      }
      __ZNSt3__15mutex6unlockEv(lVar12 + 0x80);
    }
  }
  if (param_2 != (long *)0x0) {
    (**(code **)(*param_2 + 8))(param_2);
  }
  ppuVar8 = &PTR_PTR_1133013a8;
  FUN_10ae079a0(0,&PTR_PTR_1133013a8);
  FUN_10ae07cd4(ppuVar8,&PTR_PTR_1133013a8);
  if (plVar6 == (long *)0x0) {
    return;
  }
LAB_10a32453c:
  plVar1 = plVar6 + 1;
  do {
    lVar12 = *plVar1;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar4) {
      *plVar1 = lVar12 + -1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  if (lVar12 != 0) {
    return;
  }
  (**(code **)(*plVar6 + 0x10))(plVar6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_count14__release_weakEv_110346648)(plVar6);
  return;
}



/* Entry: 10a32463c; end: 10a3246af;  */

void FUN_10a32463c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110bc43b0;
  if (param_1[5] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)(param_1);
  return;
}



/* Entry: 10a3246b0; end: 10a3246ef;  */

void FUN_10a3246b0(long param_1)

{
  FUN_10a3244a0(param_1 + 0x20,*(undefined8 *)(param_1 + 0x18));
  if (*(long *)(param_1 + 0x28) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZNSt3__119__shared_weak_count14__release_weakEv_110346648)();
    return;
  }
  return;
}



/* Entry: 10a3246f0; end: 10a32472b;  */

long FUN_10a3246f0(long param_1,undefined8 param_2)

{
  FUN_10a042ab0(param_2,&PTR_DAT_110bc43f0);
  param_1 = param_1 + 0x20;
  if ((int)param_2 == 0) {
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 10a32472c; end: 10a32472f;  */

void FUN_10a32472c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a324730; end: 10a324807;  */

void FUN_10a324730(long *param_1)

{
  long lVar1;
  long lVar2;
  
  if (param_1[3] != 0) {
    func_0x00010a3209bc(param_1,param_1[2]);
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



/* Entry: 10a324808; end: 10a324a1b;  */

long * FUN_10a324808(long *param_1,int param_2,undefined4 *param_3)

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
    FUN_10a23b73c(param_1,uVar2);
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
    if (*plVar4 == 0) goto LAB_10a3249dc;
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
LAB_10a3249dc:
  param_1[3] = param_1[3] + 1;
  return plVar4;
}



/* Entry: 10a324a1c; end: 10a324e8f;  */

void FUN_10a324a1c(long *param_1,long *param_2)

{
  int iVar1;
  ulong uVar2;
  code *pcVar3;
  undefined **ppuVar4;
  long *plVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  long *plVar10;
  ulong uVar11;
  long *plVar12;
  ulong uVar13;
  long lVar14;
  ulong unaff_x26;
  long *plStack_c0;
  long *plStack_b8;
  long lStack_b0;
  long lStack_a8;
  long lStack_a0;
  undefined8 uStack_98;
  long *plStack_88;
  long *plStack_80;
  long *plStack_78;
  long lStack_70;
  undefined1 *puStack_68;
  
  lStack_a8 = 0;
  lStack_a0 = 0;
  uStack_98 = 0;
  FUN_10a324e90(param_1,&PTR_DAT_110bc4460,&lStack_a8);
  plStack_c0 = (long *)0x0;
  plStack_b8 = (long *)0x0;
  lStack_b0 = 0;
  ppuVar4 = &PTR_DAT_110bc4400;
  (**(code **)(*param_1 + 0x210))(param_1);
  plVar5 = param_1;
  (**(code **)(*param_1 + 0x208))();
  plVar12 = plStack_b8;
  uVar13 = (ulong)plVar5 & 0xffffffff;
  lVar14 = (long)plStack_b8 - (long)plStack_c0;
  uVar6 = lVar14 >> 4;
  if (uVar6 < uVar13) {
    uVar6 = uVar13 - uVar6;
    if ((ulong)(lStack_b0 - (long)plStack_b8 >> 4) < uVar6) {
      uVar7 = lStack_b0 - (long)plStack_c0 >> 3;
      if (uVar7 <= uVar13) {
        uVar7 = uVar13;
      }
      if (0x7fffffffffffffef < (ulong)(lStack_b0 - (long)plStack_c0)) {
        uVar7 = 0xfffffffffffffff;
      }
      puStack_68 = (undefined1 *)&plStack_c0;
      FUN_10a325204();
      lVar14 = uVar7 + lVar14;
      _bzero(lVar14,uVar6 * 0x10);
      plVar12 = (long *)(lVar14 - ((long)plStack_b8 - (long)plStack_c0));
      _memcpy(plVar12);
      plStack_78 = plStack_c0;
      lStack_70 = lStack_b0;
      plStack_88 = plStack_c0;
      plStack_80 = plStack_c0;
      plStack_c0 = plVar12;
      plStack_b8 = (long *)(lVar14 + uVar6 * 0x10);
      lStack_b0 = uVar7 + (long)ppuVar4 * 0x10;
      func_0x00010a325238(&plStack_88);
      plVar12 = plStack_b8;
    }
    else {
      _bzero(plStack_b8,uVar6 * 0x10);
      plVar12 = plVar12 + uVar6 * 2;
    }
  }
  else if (uVar13 < uVar6) {
    plVar12 = plStack_c0 + uVar13 * 2;
    plVar10 = plStack_b8;
    while (plVar10 != plVar12) {
      plVar10 = plVar10 + -2;
      func_0x00010a234870(plVar10);
    }
  }
  plStack_b8 = plVar12;
  if ((int)plVar5 != 0) {
    lVar14 = 0;
    uVar6 = 0;
    do {
      if ((ulong)((long)plStack_b8 - (long)plStack_c0 >> 4) <= uVar6) goto LAB_10a324e3c;
      FUN_10a32513c(param_1,uVar6,(long)plStack_c0 + lVar14);
      uVar6 = uVar6 + 1;
      lVar14 = lVar14 + 0x10;
    } while (uVar13 != uVar6);
  }
  (**(code **)(*param_1 + 0x220))(param_1);
  if (param_2[3] != 0) {
    func_0x00010a23b9c8(param_2,param_2[2]);
    param_2[2] = 0;
    lVar14 = param_2[1];
    if (lVar14 != 0) {
      lVar8 = 0;
      do {
        *(undefined8 *)(*param_2 + lVar8 * 8) = 0;
        lVar8 = lVar8 + 1;
      } while (lVar14 != lVar8);
    }
    param_2[3] = 0;
  }
  if (lStack_a0 != lStack_a8) {
    uVar6 = 0;
    plVar12 = param_2 + 2;
    lVar14 = lStack_a0;
    lVar8 = lStack_a8;
    do {
      plVar5 = plStack_c0;
      if ((ulong)((long)plStack_b8 - (long)plStack_c0 >> 4) <= uVar6) {
LAB_10a324e3c:
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x10a324e40);
        (*pcVar3)();
      }
      iVar1 = *(int *)(lVar8 + uVar6 * 4);
      uVar7 = (ulong)iVar1;
      uVar13 = param_2[1];
      if (uVar13 != 0) {
        uVar9 = uVar13 - 1;
        if ((uVar13 & uVar9) == 0) {
          unaff_x26 = uVar9 & uVar7;
        }
        else {
          unaff_x26 = uVar7;
          if (uVar13 <= uVar7) {
            uVar11 = 0;
            if (uVar13 != 0) {
              uVar11 = uVar7 / uVar13;
            }
            unaff_x26 = uVar7 - uVar11 * uVar13;
          }
        }
        plVar10 = *(long **)(*param_2 + unaff_x26 * 8);
        if (plVar10 != (long *)0x0) {
          do {
            while( true ) {
              plVar10 = (long *)*plVar10;
              if (plVar10 == (long *)0x0) goto LAB_10a324cc4;
              uVar11 = plVar10[1];
              if (uVar11 != uVar7) break;
              if (*(int *)(plVar10 + 2) == iVar1) goto LAB_10a324dec;
            }
            if ((uVar13 & uVar9) == 0) {
              uVar11 = uVar11 & uVar9;
            }
            else if (uVar13 <= uVar11) {
              uVar2 = 0;
              if (uVar13 != 0) {
                uVar2 = uVar11 / uVar13;
              }
              uVar11 = uVar11 - uVar2 * uVar13;
            }
          } while (uVar11 == unaff_x26);
        }
      }
LAB_10a324cc4:
      plVar10 = (long *)0x28;
      __Znwm();
      plVar5 = plVar5 + uVar6 * 2;
      plStack_78 = (long *)0x1;
      *plVar10 = 0;
      plVar10[1] = uVar7;
      *(int *)(plVar10 + 2) = iVar1;
      lVar14 = *plVar5;
      plVar10[4] = plVar5[1];
      plVar10[3] = lVar14;
      *plVar5 = 0;
      plVar5[1] = 0;
      plStack_88 = plVar10;
      plStack_80 = param_2;
      if ((uVar13 == 0) || (*(float *)(param_2 + 4) * (float)uVar13 < (float)(param_2[3] + 1))) {
        uVar9 = 1;
        if (2 < uVar13) {
          uVar9 = (ulong)((uVar13 & uVar13 - 1) != 0);
        }
        uVar9 = uVar9 | uVar13 << 1;
        uVar13 = (ulong)((float)(param_2[3] + 1) / *(float *)(param_2 + 4));
        if (uVar9 <= uVar13) {
          uVar9 = uVar13;
        }
        FUN_10a23b73c(param_2,uVar9);
        uVar13 = param_2[1];
        if ((uVar13 & uVar13 - 1) == 0) {
          unaff_x26 = uVar13 - 1 & uVar7;
        }
        else {
          unaff_x26 = uVar7;
          if (uVar13 <= uVar7) {
            uVar9 = 0;
            if (uVar13 != 0) {
              uVar9 = uVar7 / uVar13;
            }
            unaff_x26 = uVar7 - uVar9 * uVar13;
          }
        }
      }
      lVar14 = *param_2;
      plVar5 = *(long **)(lVar14 + unaff_x26 * 8);
      if (plVar5 == (long *)0x0) {
        *plVar10 = *plVar12;
        *plVar12 = (long)plVar10;
        *(long **)(lVar14 + unaff_x26 * 8) = plVar12;
        if (*plVar10 != 0) {
          uVar7 = *(ulong *)(*plVar10 + 8);
          if ((uVar13 & uVar13 - 1) == 0) {
            uVar7 = uVar7 & uVar13 - 1;
          }
          else if (uVar13 <= uVar7) {
            uVar9 = 0;
            if (uVar13 != 0) {
              uVar9 = uVar7 / uVar13;
            }
            uVar7 = uVar7 - uVar9 * uVar13;
          }
          plVar5 = (long *)(*param_2 + uVar7 * 8);
          goto LAB_10a324dd8;
        }
      }
      else {
        *plVar10 = *plVar5;
LAB_10a324dd8:
        *plVar5 = (long)plVar10;
      }
      param_2[3] = param_2[3] + 1;
      lVar14 = lStack_a0;
      lVar8 = lStack_a8;
LAB_10a324dec:
      uVar6 = uVar6 + 1;
    } while (uVar6 < (ulong)(lVar14 - lVar8 >> 2));
  }
  plStack_88 = (long *)&plStack_c0;
  FUN_10a325284(&plStack_88);
  if (lStack_a8 != 0) {
    lStack_a0 = lStack_a8;
    __ZdlPv();
  }
  return;
}



/* Entry: 10a324e90; end: 10a324f0f;  */

void FUN_10a324e90(long *param_1,undefined8 param_2,undefined8 *param_3)

{
  code *pcVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined1 auStack_2c0 [264];
  undefined1 auStack_1b8 [16];
  undefined1 auStack_1a8 [264];
  char cStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_38;
  ulong uStack_30;
  byte bStack_28;
  
  (**(code **)(*param_1 + 0x1d8))(&uStack_38);
  if ((bStack_28 & 1) == 0) {
    FUN_10a108fd4(param_2);
  }
  else if ((uStack_30 & 3) == 0) {
    func_0x000108a5942c(param_3,uStack_30 >> 2);
    if ((bStack_28 & 1) != 0) {
      _memcpy(*param_3,uStack_38,uStack_30);
      return;
    }
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10a324f00);
    (*pcVar1)();
  }
  FUN_10a324f10(param_2);
  uStack_78 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  FUN_10a325004(auStack_1b8,param_2);
  func_0x00010a0ec6dc(auStack_2c0,1);
  if (cStack_a0 == '\x01') {
    _memcpy(auStack_1a8,auStack_2c0,0x104);
  }
  else {
    _memcpy(auStack_1a8,auStack_2c0,0x108);
    cStack_a0 = '\x01';
  }
  puVar2 = (undefined8 *)0x140;
  ___cxa_allocate_exception();
  puVar3 = puVar2;
  __ZNSt13runtime_errorC2ERKS_();
  *puVar3 = &PTR_FUN_110b99e98;
  _memcpy(puVar3 + 2,auStack_1a8,0x110);
  *puVar2 = &PTR_FUN_110bc4448;
  puVar2[0x25] = uStack_90;
  puVar2[0x24] = uStack_98;
  puVar2[0x27] = uStack_80;
  puVar2[0x26] = uStack_88;
  ___cxa_throw(puVar2,&PTR_DAT_110bc4420,FUN_10a325000);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10a324fe0);
  (*pcVar1)();
}



/* Entry: 10a324f10; end: 10a324fff;  */

void FUN_10a324f10(undefined8 param_1)

{
  code *pcVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined1 auStack_280 [264];
  undefined1 auStack_178 [16];
  undefined1 auStack_168 [264];
  char cStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uStack_38 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  FUN_10a325004(auStack_178,param_1);
  func_0x00010a0ec6dc(auStack_280,1);
  if (cStack_60 == '\x01') {
    _memcpy(auStack_168,auStack_280,0x104);
  }
  else {
    _memcpy(auStack_168,auStack_280,0x108);
    cStack_60 = '\x01';
  }
  puVar2 = (undefined8 *)0x140;
  ___cxa_allocate_exception();
  puVar3 = puVar2;
  __ZNSt13runtime_errorC2ERKS_();
  *puVar3 = &PTR_FUN_110b99e98;
  _memcpy(puVar3 + 2,auStack_168,0x110);
  *puVar2 = &PTR_FUN_110bc4448;
  puVar2[0x25] = uStack_50;
  puVar2[0x24] = uStack_58;
  puVar2[0x27] = uStack_40;
  puVar2[0x26] = uStack_48;
  ___cxa_throw(puVar2,&PTR_DAT_110bc4420,FUN_10a325000);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10a324fe0);
  (*pcVar1)();
}



/* Entry: 10a325000; end: 10a325003;  */

void FUN_10a325000(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbcc74. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt13runtime_errorD2Ev_1103461e0)();
  return;
}



/* Entry: 10a325004; end: 10a325127;  */

undefined8 * FUN_10a325004(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 auStack_70 [2];
  char cStack_59;
  undefined8 auStack_58 [2];
  char cStack_41;
  undefined8 uStack_40;
  undefined8 uStack_38;
  long lStack_30;
  
  FUN_109ffe064(auStack_70,*param_2,param_2[1]);
  __ZNSt3__1plIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_12basic_stringIT_T0_T1_EEPKS6_RKS9_
            (auStack_58,&UNK_10f6854a8,auStack_70);
  puVar1 = auStack_58;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (puVar1,&UNK_10f6854b4,0x12);
  uStack_38 = puVar1[1];
  uStack_40 = *puVar1;
  lStack_30 = puVar1[2];
  puVar1[1] = 0;
  puVar1[2] = 0;
  *puVar1 = 0;
  FUN_10a002a94(param_1,&uStack_40);
  *param_1 = &PTR_FUN_110b99e70;
  if (lStack_30 < 0) {
    __ZdlPv(uStack_40);
  }
  if (cStack_41 < '\0') {
    __ZdlPv(auStack_58[0]);
  }
  if (cStack_59 < '\0') {
    __ZdlPv(auStack_70[0]);
  }
  *param_1 = &PTR_FUN_110bc4448;
  uVar2 = *param_2;
  uVar4 = param_2[3];
  uVar3 = param_2[2];
  param_1[0x25] = param_2[1];
  param_1[0x24] = uVar2;
  param_1[0x27] = uVar4;
  param_1[0x26] = uVar3;
  return param_1;
}



/* Entry: 10a325128; end: 10a32513b;  */

void FUN_10a325128(void)

{
  __ZNSt13runtime_errorD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a32513c; end: 10a3251ef;  */

void FUN_10a32513c(long *param_1,undefined8 param_2,undefined8 *param_3)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long lVar4;
  undefined1 auStack_40 [8];
  long *plStack_38;
  
  (**(code **)(*param_1 + 0x218))();
  plVar3 = param_1;
  (**(code **)(*param_1 + 0x208))();
  if ((int)plVar3 != 0) {
    func_0x00010a324784(auStack_40);
    FUN_10a310a5c(param_3,auStack_40);
    if (plStack_38 != (long *)0x0) {
      plVar3 = plStack_38 + 1;
      do {
        lVar4 = *plVar3;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
        if (bVar2) {
          *plVar3 = lVar4 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (lVar4 == 0) {
        (**(code **)(*plStack_38 + 0x10))(plStack_38);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_38);
      }
    }
    FUN_10a0ecdc0(*param_3,param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010a3251ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x220))(param_1);
  return;
}



/* Entry: 10a3251f0; end: 10a325203;  */

undefined1  [16] FUN_10a3251f0(undefined8 param_1,undefined8 param_2)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  
  plVar1 = (long *)&DAT_10f62a4d8;
  FUN_109ffde64();
  if ((ulong)plVar1 >> 0x3c == 0) {
    lVar2 = (long)plVar1 << 4;
    __Znwm(lVar2);
    auVar4._8_8_ = plVar1;
    auVar4._0_8_ = lVar2;
    return auVar4;
  }
  func_0x000109ffded8();
  lVar2 = plVar1[1];
  lVar3 = plVar1[2];
  while (lVar3 != lVar2) {
    plVar1[2] = lVar3 + -0x10;
    func_0x00010a234870();
    lVar3 = plVar1[2];
  }
  if (*plVar1 != 0) {
    __ZdlPv();
  }
  auVar5._8_8_ = param_2;
  auVar5._0_8_ = plVar1;
  return auVar5;
}



/* Entry: 10a325204; end: 10a325283;  */

undefined1  [16] FUN_10a325204(long *param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  
  if ((ulong)param_1 >> 0x3c == 0) {
    lVar1 = (long)param_1 << 4;
    __Znwm(lVar1);
    auVar3._8_8_ = param_1;
    auVar3._0_8_ = lVar1;
    return auVar3;
  }
  func_0x000109ffded8();
  lVar1 = param_1[1];
  lVar2 = param_1[2];
  while (lVar2 != lVar1) {
    param_1[2] = lVar2 + -0x10;
    func_0x00010a234870();
    lVar2 = param_1[2];
  }
  if (*param_1 != 0) {
    __ZdlPv();
  }
  auVar4._8_8_ = param_2;
  auVar4._0_8_ = param_1;
  return auVar4;
}



/* Entry: 10a325284; end: 10a325393;  */

void FUN_10a325284(long *param_1)

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
        func_0x00010a234870();
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



/* Entry: 10a325394; end: 10a32546b;  */

void FUN_10a325394(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
  code *pcVar1;
  undefined1 auStack_80 [24];
  undefined1 auStack_68 [24];
  undefined1 auStack_50 [24];
  undefined8 uStack_38;
  long lStack_30;
  byte bStack_28;
  
  FUN_10a32546c(&uStack_38);
  if ((bStack_28 & 1) != 0) {
    if (lStack_30 != 0) {
      _memcpy(param_3,uStack_38);
      return;
    }
    FUN_109ffe064(auStack_80,*param_2,param_2[1]);
    __ZNSt3__1plIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_12basic_stringIT_T0_T1_EEPKS6_RKS9_
              (auStack_68,&UNK_10f6854a8,auStack_80);
    FUN_10a012db0(auStack_50,auStack_68,&UNK_10f64efcb);
    FUN_10a0029c0(auStack_50);
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10a325420);
  (*pcVar1)();
}



/* Entry: 10a32546c; end: 10a32559f;  */

void FUN_10a32546c(long param_1,long *param_2,undefined8 *param_3)

{
  code *pcVar1;
  ulong uVar2;
  undefined1 auStack_68 [24];
  undefined1 auStack_50 [24];
  undefined1 auStack_38 [24];
  
  (**(code **)(*param_2 + 0x1d8))(param_1);
  if (*(char *)(param_1 + 0x10) == '\x01') {
    uVar2 = *(ulong *)(param_1 + 8);
    if ((uVar2 == 0) || (7 < uVar2 && (uVar2 & 7) == 0)) {
      return;
    }
    FUN_109ffe064(auStack_68,*param_3,param_3[1]);
    __ZNSt3__1plIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_12basic_stringIT_T0_T1_EEPKS6_RKS9_
              (auStack_50,&UNK_10f6854a8,auStack_68);
    FUN_10a012db0(auStack_38,auStack_50,&UNK_10f6854b4);
    FUN_10a0029c0(auStack_38);
  }
  else {
    FUN_109ffe064(auStack_68,*param_3,param_3[1]);
    __ZNSt3__1plIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_12basic_stringIT_T0_T1_EEPKS6_RKS9_
              (auStack_50,&UNK_10f6854a8,auStack_68);
    FUN_10a012db0(auStack_38,auStack_50,&UNK_10f63cc0e);
    FUN_10a0029c0(auStack_38);
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10a325548);
  (*pcVar1)();
}



/* Entry: 10a3255a0; end: 10a32563b;  */

void FUN_10a3255a0(long *param_1,undefined8 param_2)

{
  long lStack_58;
  long lStack_50;
  undefined1 auStack_40 [24];
  undefined1 *puStack_28;
  
  FUN_10a32563c(&lStack_58,param_2);
  (**(code **)(*param_1 + 0x28))(param_1,&PTR_DAT_110bc4460,lStack_58,lStack_50 - lStack_58);
  FUN_10a3256c0(param_1,&PTR_DAT_110bc4400,auStack_40);
  puStack_28 = auStack_40;
  FUN_10a325284(&puStack_28);
  if (lStack_58 != 0) {
    lStack_50 = lStack_58;
    __ZdlPv();
  }
  return;
}



/* Entry: 10a32563c; end: 10a3256bf;  */

void FUN_10a32563c(undefined8 *param_1,long param_2)

{
  long *plVar1;
  
  param_1[3] = 0;
  param_1[2] = 0;
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[1] = 0;
  *param_1 = 0;
  func_0x000107c27e9c(param_1,*(undefined8 *)(param_2 + 0x18));
  FUN_10a325768(param_1 + 3,*(undefined8 *)(param_2 + 0x18));
  plVar1 = (long *)(param_2 + 0x10);
  while (plVar1 = (long *)*plVar1, plVar1 != (long *)0x0) {
    func_0x000109febdc8(param_1,plVar1 + 2);
    func_0x00010a325804(param_1 + 3,plVar1 + 3);
  }
  return;
}



/* Entry: 10a3256c0; end: 10a32571f;  */

void FUN_10a3256c0(long *param_1,undefined8 param_2,long *param_3)

{
  long lVar1;
  long lVar2;
  
  (**(code **)(*param_1 + 0x18))();
  lVar1 = param_3[1];
  for (lVar2 = *param_3; lVar2 != lVar1; lVar2 = lVar2 + 0x10) {
    FUN_10a325918(param_1,lVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010a32571c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x20))(param_1);
  return;
}



/* Entry: 10a325720; end: 10a325767;  */

long * FUN_10a325720(long *param_1)

{
  long *plStack_28;
  
  plStack_28 = param_1 + 3;
  FUN_10a325284(&plStack_28);
  if (*param_1 != 0) {
    param_1[1] = *param_1;
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 10a325768; end: 10a325917;  */

void FUN_10a325768(long *param_1,long *param_2)

{
  long *plVar1;
  ulong uVar2;
  char cVar3;
  bool bVar4;
  long *plVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  long lStack_b8;
  long lStack_b0;
  long lStack_a8;
  long lStack_a0;
  long *plStack_98;
  long lStack_58;
  long lStack_50;
  long lStack_48;
  long lStack_40;
  long *plStack_38;
  
  lVar7 = *param_1;
  if ((long *)(param_1[2] - lVar7 >> 4) < param_2) {
    if ((ulong)param_2 >> 0x3c != 0) {
      FUN_10a3251f0();
      plVar5 = (long *)param_1[1];
      if (plVar5 < (long *)param_1[2]) {
        lVar7 = param_2[1];
        lVar8 = *param_2;
        plVar5[1] = param_2[1];
        *plVar5 = lVar8;
        if (lVar7 != 0) {
          plVar1 = (long *)(lVar7 + 8);
          do {
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar4) {
              *plVar1 = *plVar1 + 1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
        }
        plVar5 = plVar5 + 2;
      }
      else {
        lVar7 = (long)plVar5 - *param_1;
        uVar2 = (lVar7 >> 4) + 1;
        if (uVar2 >> 0x3c != 0) {
          FUN_10a3251f0();
          (**(code **)(*param_1 + 0x10))();
          if (*param_2 != 0) {
            FUN_10a0ed360(*param_2,param_1);
          }
                    /* WARNING: Could not recover jumptable at 0x00010a32595c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(*param_1 + 0x20))(param_1);
          return;
        }
        uVar9 = param_1[2] - *param_1;
        uVar10 = (long)uVar9 >> 3;
        if (uVar10 <= uVar2) {
          uVar10 = uVar2;
        }
        if (0x7fffffffffffffef < uVar9) {
          uVar10 = 0xfffffffffffffff;
        }
        plVar6 = param_2;
        plStack_98 = param_1;
        FUN_10a325204();
        plVar1 = (long *)(uVar10 + lVar7);
        lVar7 = param_2[1];
        lVar8 = *param_2;
        plVar1[1] = param_2[1];
        *plVar1 = lVar8;
        if (lVar7 != 0) {
          plVar5 = (long *)(lVar7 + 8);
          do {
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(plVar5,0x10);
            if (bVar4) {
              *plVar5 = *plVar5 + 1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
        }
        plVar5 = plVar1 + 2;
        lVar7 = (long)plVar1 - (param_1[1] - *param_1);
        _memcpy(lVar7);
        lStack_b8 = *param_1;
        *param_1 = lVar7;
        param_1[1] = (long)plVar5;
        lStack_a0 = param_1[2];
        param_1[2] = uVar10 + (long)plVar6 * 0x10;
        lStack_b0 = lStack_b8;
        lStack_a8 = lStack_b8;
        func_0x00010a325238(&lStack_b8);
      }
      param_1[1] = (long)plVar5;
      return;
    }
    lVar8 = param_1[1];
    plVar5 = param_2;
    plStack_38 = param_1;
    FUN_10a325204();
    lVar7 = (long)param_2 + (lVar8 - lVar7);
    lVar8 = lVar7 - (param_1[1] - *param_1);
    _memcpy(lVar8);
    lStack_58 = *param_1;
    *param_1 = lVar8;
    param_1[1] = lVar7;
    lStack_40 = param_1[2];
    param_1[2] = (long)(param_2 + (long)plVar5 * 2);
    lStack_50 = lStack_58;
    lStack_48 = lStack_58;
    func_0x00010a325238(&lStack_58);
  }
  return;
}



/* Entry: 10a325918; end: 10a32595f;  */

void FUN_10a325918(long *param_1,long *param_2)

{
  (**(code **)(*param_1 + 0x10))();
  if (*param_2 != 0) {
    FUN_10a0ed360(*param_2,param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010a32595c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x20))(param_1);
  return;
}



/* Entry: 10a325960; end: 10a325ac3;  */

long * FUN_10a325960(long *param_1)

{
  long *plVar1;
  long *plVar2;
  undefined8 *puVar3;
  long lVar4;
  ulong uVar5;
  undefined8 *puVar6;
  long *plVar7;
  undefined8 *puVar8;
  long *plVar9;
  
  puVar6 = (undefined8 *)param_1[1];
  puVar3 = (undefined8 *)param_1[2];
  puVar8 = puVar6;
  if (puVar3 != puVar6) {
    uVar5 = param_1[4];
    plVar7 = puVar6 + (uVar5 >> 9);
    plVar9 = (long *)(*plVar7 + (uVar5 & 0x1ff) * 8);
    plVar1 = (long *)(puVar6[param_1[5] + uVar5 >> 9] + (param_1[5] + uVar5 & 0x1ff) * 8);
    puVar8 = puVar3;
    if (plVar9 != plVar1) {
      do {
        plVar2 = (long *)*plVar9;
        *plVar9 = 0;
        if (plVar2 != (long *)0x0) {
          (**(code **)(*plVar2 + 0x20))();
        }
        plVar9 = plVar9 + 1;
        if ((long)plVar9 - *plVar7 == 0x1000) {
          plVar7 = plVar7 + 1;
          plVar9 = (long *)*plVar7;
        }
      } while (plVar9 != plVar1);
      puVar6 = (undefined8 *)param_1[1];
      puVar3 = (undefined8 *)param_1[2];
      puVar8 = puVar3;
    }
  }
  param_1[5] = 0;
  lVar4 = (long)puVar8 - (long)puVar6;
  while (uVar5 = lVar4 >> 3, 2 < uVar5) {
    __ZdlPv(*puVar6);
    puVar3 = (undefined8 *)param_1[2];
    puVar6 = (undefined8 *)(param_1[1] + 8);
    param_1[1] = (long)puVar6;
    puVar8 = puVar3;
    lVar4 = (long)puVar3 - (long)puVar6;
  }
  if (uVar5 == 1) {
    lVar4 = 0x100;
  }
  else {
    if (uVar5 != 2) goto LAB_10a325a68;
    lVar4 = 0x200;
  }
  param_1[4] = lVar4;
LAB_10a325a68:
  if (puVar6 != puVar8) {
    do {
      puVar3 = puVar6 + 1;
      __ZdlPv(*puVar6);
      puVar6 = puVar3;
    } while (puVar3 != puVar8);
    puVar8 = (undefined8 *)param_1[1];
    puVar3 = (undefined8 *)param_1[2];
  }
  if (puVar3 != puVar8) {
    param_1[2] = (long)puVar3 + ((long)puVar8 + (7 - (long)puVar3) & 0xfffffffffffffff8U);
  }
  if (*param_1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 10a325ac4; end: 10a325b2b;  */

void FUN_10a325ac4(undefined8 param_1,long param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010a325ad0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_2 + 0x10) + 0x38))();
  return;
}



/* Entry: 10a325b2c; end: 10a325b83;  */

long FUN_10a325b2c(long param_1)

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



/* Entry: 10a325b84; end: 10a325b93;  */

void FUN_10a325b84(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110bc44b0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10a325b94; end: 10a325bb3;  */

void FUN_10a325b94(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110bc44b0;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a325bb4; end: 10a325c6b;  */

long * FUN_10a325bb4(long param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long *plVar5;
  ulong uVar6;
  
  plVar4 = *(long **)(param_1 + 0x68);
  if (plVar4 != (long *)0x0) {
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
  func_0x00010a054cfc(param_1 + 0x58);
  func_0x00010a321c6c(param_1 + 0x48);
  func_0x00010a09dab4(param_1 + 0x38);
  FUN_10a321dec(param_1 + 0x28);
  plVar4 = *(long **)(param_1 + 0x20);
  *(undefined8 *)(param_1 + 0x20) = 0;
  if (plVar4 != (long *)0x0) {
    (**(code **)(*plVar4 + 0x10))();
  }
  plVar5 = *(long **)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x18) = 0;
  if (plVar5 != (long *)0x0) {
    if (plVar5 != (long *)0x0) {
      FUN_10a08ef58(plVar5 + 0xd);
      if ((char)plVar5[0xc] == '\x01') {
        func_0x00010a09a9f4(plVar5);
      }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___ZdlPv_110352258)(plVar5);
      return plVar5;
    }
    return (long *)(param_1 + 0x18);
  }
  return plVar4;
}



/* Entry: 10a325c6c; end: 10a325c6f;  */

void FUN_10a325c6c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a325c70; end: 10a325cb3;  */

undefined ** FUN_10a325c70(long param_1)

{
  code *pcVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  long lVar5;
  undefined *puStack_88;
  undefined8 uStack_80;
  long lStack_28;
  
  lVar5 = *(long *)(param_1 + 0x10);
  ppuVar4 = &PTR_PTR_1133013e0;
  FUN_10ae079a0(0,&PTR_PTR_1133013e0);
  FUN_10ae07cd4(ppuVar4,&PTR_PTR_1133013e0);
  lVar5 = **(long **)(lVar5 + 0x50);
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_88 = &UNK_10f64ef40;
  uStack_80 = 0x58;
  if (*(char *)(lVar5 + 0x60) == '\x01') {
    FUN_10a0edfc4(&puStack_88);
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10a3232a0);
    (*pcVar1)();
  }
  FUN_10a08f044(&puStack_88,lVar5 + 0x68);
  FUN_10a31ed10(lVar5);
  ppuVar4 = &puStack_88;
  FUN_10a3232a8(lVar5);
  *(undefined1 *)(lVar5 + 0x60) = 1;
  ppuVar2 = &puStack_88;
  func_0x00010a09a9f4();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return ppuVar2;
  }
  ___stack_chk_fail();
  __Unwind_Resume();
  ppuVar3 = ppuVar2;
  func_0x00010a09aa90();
  ppuVar3[8] = (undefined *)0x0;
  if (ppuVar4[8] != (undefined *)0x0) {
    (**(code **)(ppuVar4[8] + 8))(ppuVar2 + 9,ppuVar4 + 9);
    ppuVar2[8] = ppuVar4[8];
    ppuVar4[8] = (undefined *)0x0;
  }
  return ppuVar2;
}



/* Entry: 10a325cb4; end: 10a325ccf;  */

void FUN_10a325cb4(void)

{
  return;
}



/* Entry: 10a325cd0; end: 10a325d33;  */

void FUN_10a325cd0(long param_1)

{
  long *plVar1;
  undefined **ppuVar2;
  long lVar3;
  
  lVar3 = *(long *)(param_1 + 0x10);
  ppuVar2 = &PTR_PTR_113301418;
  FUN_10ae079a0(0,&PTR_PTR_113301418);
  FUN_10ae07cd4(ppuVar2,&PTR_PTR_113301418);
  FUN_10a31ecd8(**(undefined8 **)(lVar3 + 0x50));
  plVar1 = *(long **)(lVar3 + 0x50);
  lVar3 = *plVar1;
  *plVar1 = 0;
  if (lVar3 == 0) {
    return;
  }
  if (lVar3 != 0) {
    FUN_10a08ef58(lVar3 + 0x68);
    if (*(char *)(lVar3 + 0x60) == '\x01') {
      func_0x00010a09a9f4(lVar3);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(lVar3);
    return;
  }
  return;
}



/* Entry: 10a325d34; end: 10a325d4f;  */

void FUN_10a325d34(void)

{
  return;
}



/* Entry: 10a325d50; end: 10a32605f;  */

void FUN_10a325d50(ulong *param_1,undefined8 *param_2)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  ulong uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  ulong uVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  long lVar12;
  long lVar13;
  undefined8 *puVar14;
  ulong uVar15;
  
  if (0x1ff < param_1[4]) {
    param_1[4] = param_1[4] - 0x200;
    puVar10 = (undefined8 *)param_1[1] + 1;
    uVar3 = *(undefined8 *)param_1[1];
LAB_10a325d88:
    param_1[1] = (ulong)puVar10;
    puVar10 = (undefined8 *)param_1[2];
    if (puVar10 == (undefined8 *)param_1[3]) {
      uVar15 = *param_1;
      uVar5 = param_1[1];
      if (uVar5 < uVar15 || uVar5 - uVar15 == 0) {
        uVar8 = (long)((long)puVar10 - uVar15) >> 2;
        if ((long)puVar10 - uVar15 == 0) {
          uVar8 = 1;
        }
        uVar15 = uVar8;
        FUN_10a32615c();
        puVar11 = (undefined8 *)(uVar15 + (uVar8 >> 2) * 8);
        lVar12 = param_1[2] - (long)param_1[1];
        puVar10 = puVar11;
        if (lVar12 != 0) {
          puVar10 = (undefined8 *)((long)puVar11 + lVar12);
          puVar7 = (undefined8 *)param_1[1];
          puVar9 = puVar11;
          do {
            *puVar9 = *puVar7;
            lVar12 = lVar12 + -8;
            puVar7 = puVar7 + 1;
            puVar9 = puVar9 + 1;
          } while (lVar12 != 0);
        }
        uVar8 = *param_1;
        *param_1 = uVar15;
        param_1[1] = (ulong)puVar11;
        param_1[2] = (ulong)puVar10;
        param_1[3] = uVar15 + uVar5 * 8;
        if (uVar8 != 0) {
          __ZdlPv(uVar8);
          puVar10 = (undefined8 *)param_1[2];
        }
      }
      else {
        lVar12 = (((long)(uVar5 - uVar15) >> 3) + 1) / 2;
        lVar13 = uVar5 + lVar12 * -8;
        lVar1 = (long)puVar10 - uVar5;
        if (lVar1 != 0) {
          _memmove(lVar13,uVar5,lVar1);
          uVar5 = param_1[1];
        }
        puVar10 = (undefined8 *)(lVar13 + lVar1);
        param_1[1] = uVar5 + lVar12 * -8;
        param_1[2] = (ulong)puVar10;
      }
    }
    *puVar10 = uVar3;
    param_1[2] = param_1[2] + 8;
    return;
  }
  puVar11 = (undefined8 *)param_1[2];
  puVar9 = (undefined8 *)param_1[3];
  puVar7 = (undefined8 *)*param_1;
  puVar10 = (undefined8 *)param_1[1];
  uVar15 = (long)puVar11 - (long)puVar10;
  if (uVar15 < (ulong)((long)puVar9 - (long)puVar7)) {
    uVar3 = 0x1000;
    __Znwm();
    if (puVar9 == puVar11) {
      if (puVar10 == puVar7) {
        uVar15 = (long)puVar9 - (long)puVar10 >> 2;
        if (puVar11 == puVar10) {
          uVar15 = 1;
        }
        lVar12 = uVar15 * 2;
        FUN_10a32615c();
        puVar10 = (undefined8 *)(uVar15 + (lVar12 + 6U & 0xfffffffffffffff8));
        lVar12 = param_1[2] - (long)param_1[1];
        puVar11 = puVar10;
        if (lVar12 != 0) {
          puVar11 = (undefined8 *)((long)puVar10 + lVar12);
          puVar7 = (undefined8 *)param_1[1];
          puVar9 = puVar10;
          do {
            *puVar9 = *puVar7;
            lVar12 = lVar12 + -8;
            puVar7 = puVar7 + 1;
            puVar9 = puVar9 + 1;
          } while (lVar12 != 0);
        }
        uVar5 = *param_1;
        *param_1 = uVar15;
        param_1[1] = (ulong)puVar10;
        param_1[2] = (ulong)puVar11;
        param_1[3] = uVar15 + (long)param_2 * 8;
        if (uVar5 != 0) {
          __ZdlPv(uVar5);
          puVar10 = (undefined8 *)param_1[1];
        }
      }
      puVar10[-1] = uVar3;
      puVar10 = (undefined8 *)param_1[1];
      param_1[1] = (ulong)(puVar10 + -1);
      uVar3 = puVar10[-1];
      goto LAB_10a325d88;
    }
    *puVar11 = uVar3;
    param_1[2] = param_1[2] + 8;
  }
  else {
    puVar6 = (undefined8 *)((long)puVar9 - (long)puVar7 >> 2);
    if (puVar9 == puVar7) {
      puVar6 = (undefined8 *)0x1;
    }
    FUN_10a32615c();
    uVar3 = 0x1000;
    puVar4 = param_2;
    __Znwm();
    puVar7 = (undefined8 *)((long)puVar6 + uVar15);
    puVar9 = puVar6 + (long)param_2;
    puVar2 = puVar6;
    if (uVar15 == (long)param_2 * 8) {
      if ((long)uVar15 < 1) {
        puVar7 = (undefined8 *)((long)puVar7 - (long)puVar6 >> 2);
        if (puVar11 == puVar10) {
          puVar7 = (undefined8 *)0x1;
        }
        puVar2 = puVar7;
        FUN_10a32615c();
        puVar7 = puVar2 + ((ulong)puVar7 >> 2);
        puVar9 = puVar2 + (long)puVar4;
        if (puVar6 != (undefined8 *)0x0) {
          __ZdlPv(puVar6);
        }
      }
      else {
        lVar12 = ((long)puVar7 - (long)puVar6 >> 3) + 1;
        puVar7 = puVar7 + -((ulong)(lVar12 - (lVar12 >> 0x3f)) >> 1);
      }
    }
    puVar10 = puVar7 + 1;
    *puVar7 = uVar3;
    puVar11 = (undefined8 *)param_1[2];
    puVar6 = puVar2;
    if (puVar11 != (undefined8 *)param_1[1]) {
      do {
        puVar2 = puVar6;
        puVar14 = puVar7;
        if (puVar7 == puVar6) {
          if (puVar10 < puVar9) {
            lVar12 = ((long)puVar9 - (long)puVar10 >> 3) + 1;
            lVar1 = (long)puVar10 - (long)puVar6;
            lVar13 = (long)puVar10 - (long)puVar6;
            puVar10 = puVar10 + ((ulong)(lVar12 - (lVar12 >> 0x3f)) >> 1);
            puVar14 = (undefined8 *)((long)puVar10 - lVar1);
            if (lVar13 != 0) {
              _memmove(puVar14,puVar7,lVar13);
              puVar4 = puVar7;
            }
          }
          else {
            puVar14 = (undefined8 *)((long)puVar9 - (long)puVar6 >> 2);
            if ((long)puVar9 - (long)puVar6 == 0) {
              puVar14 = (undefined8 *)0x1;
            }
            puVar2 = puVar14;
            FUN_10a32615c();
            puVar14 = (undefined8 *)((long)puVar2 + ((long)puVar14 * 2 + 6U & 0xfffffffffffffff8));
            lVar12 = (long)puVar10 - (long)puVar6;
            puVar10 = puVar14;
            if (lVar12 != 0) {
              puVar10 = (undefined8 *)((long)puVar14 + lVar12);
              puVar9 = puVar14;
              do {
                *puVar9 = *puVar7;
                lVar12 = lVar12 + -8;
                puVar9 = puVar9 + 1;
                puVar7 = puVar7 + 1;
              } while (lVar12 != 0);
            }
            puVar9 = puVar2 + (long)puVar4;
            if (puVar6 != (undefined8 *)0x0) {
              __ZdlPv(puVar6);
            }
          }
        }
        puVar11 = puVar11 + -1;
        puVar7 = puVar14 + -1;
        *puVar7 = *puVar11;
        puVar6 = puVar2;
      } while (puVar11 != (undefined8 *)param_1[1]);
    }
    uVar15 = *param_1;
    *param_1 = (ulong)puVar2;
    param_1[1] = (ulong)puVar7;
    param_1[2] = (ulong)puVar10;
    param_1[3] = (ulong)puVar9;
    if (uVar15 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___ZdlPv_110352258)();
      return;
    }
  }
  return;
}



/* Entry: 10a326060; end: 10a32615b;  */

void FUN_10a326060(ulong *param_1,undefined8 param_2)

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
      FUN_10a32615c();
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
  *puVar7 = param_2;
  param_1[2] = param_1[2] + 8;
  return;
}



/* Entry: 10a32615c; end: 10a32618f;  */

void FUN_10a32615c(ulong *param_1,undefined8 param_2)

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
  
  if ((ulong)param_1 >> 0x3d == 0) {
    __Znwm((long)param_1 << 3);
    return;
  }
  func_0x000109ffded8();
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
      FUN_10a32628c();
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
  *puVar7 = param_2;
  param_1[2] = param_1[2] + 8;
  return;
}



/* Entry: 10a326190; end: 10a32628b;  */

void FUN_10a326190(ulong *param_1,undefined8 param_2)

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
      FUN_10a32628c();
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
  *puVar7 = param_2;
  param_1[2] = param_1[2] + 8;
  return;
}



/* Entry: 10a32628c; end: 10a3263ab;  */

undefined1  [16] FUN_10a32628c(ulong param_1)

{
  uint uVar1;
  code *pcVar2;
  long lVar3;
  long *plVar4;
  undefined8 uVar5;
  long *plVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  
  if (param_1 >> 0x3d == 0) {
    lVar3 = param_1 << 3;
    __Znwm(lVar3);
    auVar7._8_8_ = param_1;
    auVar7._0_8_ = lVar3;
    return auVar7;
  }
  func_0x000109ffded8();
  if (*(long *)(param_1 + 0x28) != 0) {
    plVar6 = (long *)(*(long *)(*(long *)(param_1 + 8) + (*(ulong *)(param_1 + 0x20) / 0xaa) * 8) +
                     (*(ulong *)(param_1 + 0x20) % 0xaa) * 0x18);
    FUN_10a232e34(plVar6 + 1);
    plVar4 = (long *)*plVar6;
    *plVar6 = 0;
    if (plVar4 != (long *)0x0) {
      (**(code **)(*plVar4 + 0x20))();
    }
    *(long *)(param_1 + 0x28) = *(long *)(param_1 + 0x28) + -1;
    *(long *)(param_1 + 0x20) = *(long *)(param_1 + 0x20) + 1;
    uVar5 = 1;
    uVar1 = (uint)(*(ulong *)(param_1 + 0x20) < 0x154);
    if (uVar1 == 0) {
      __ZdlPv(**(undefined8 **)(param_1 + 8));
      *(long *)(param_1 + 8) = *(long *)(param_1 + 8) + 8;
      *(long *)(param_1 + 0x20) = *(long *)(param_1 + 0x20) + -0xaa;
    }
    auVar8._4_4_ = 0;
    auVar8._0_4_ = uVar1 ^ 1;
    auVar8._8_8_ = uVar5;
    return auVar8;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10a326350);
  (*pcVar2)();
}



/* Entry: 10a3263ac; end: 10a3264a7;  */

void FUN_10a3263ac(ulong *param_1,undefined8 param_2)

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
      FUN_10a3264a8();
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
  *puVar7 = param_2;
  param_1[2] = param_1[2] + 8;
  return;
}



/* Entry: 10a3264a8; end: 10a3265c7;  */

void FUN_10a3264a8(ulong param_1,undefined8 *param_2)

{
  long *plVar1;
  ulong uVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  undefined8 *puVar6;
  ulong uVar7;
  undefined8 uVar8;
  
  if (param_1 >> 0x3d == 0) {
    __Znwm(param_1 << 3);
    return;
  }
  func_0x000109ffded8();
  lVar5 = *(long *)(param_1 + 8);
  uVar2 = 0;
  if (*(long *)(param_1 + 0x10) != lVar5) {
    uVar2 = (*(long *)(param_1 + 0x10) - lVar5 >> 3) * 0x66 - 1;
  }
  uVar7 = *(long *)(param_1 + 0x28) + *(long *)(param_1 + 0x20);
  if (uVar2 == uVar7) {
    FUN_10a3265c8(param_1);
    lVar5 = *(long *)(param_1 + 8);
    uVar7 = *(long *)(param_1 + 0x28) + *(long *)(param_1 + 0x20);
  }
  puVar6 = (undefined8 *)(*(long *)(lVar5 + (uVar7 / 0x66) * 8) + (uVar7 % 0x66) * 0x28);
  lVar5 = param_2[1];
  uVar8 = *param_2;
  puVar6[1] = param_2[1];
  *puVar6 = uVar8;
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
  lVar5 = param_2[3];
  uVar8 = param_2[2];
  puVar6[3] = param_2[3];
  puVar6[2] = uVar8;
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
  *(undefined4 *)(puVar6 + 4) = *(undefined4 *)(param_2 + 4);
  *(long *)(param_1 + 0x28) = *(long *)(param_1 + 0x28) + 1;
  return;
}



/* Entry: 10a3265c8; end: 10a3268d7;  */

void FUN_10a3265c8(ulong *param_1,undefined8 *param_2)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  ulong uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  ulong uVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  long lVar12;
  long lVar13;
  undefined8 *puVar14;
  ulong uVar15;
  
  if (0x65 < param_1[4]) {
    param_1[4] = param_1[4] - 0x66;
    puVar10 = (undefined8 *)param_1[1] + 1;
    uVar3 = *(undefined8 *)param_1[1];
LAB_10a326600:
    param_1[1] = (ulong)puVar10;
    puVar10 = (undefined8 *)param_1[2];
    if (puVar10 == (undefined8 *)param_1[3]) {
      uVar15 = *param_1;
      uVar5 = param_1[1];
      if (uVar5 < uVar15 || uVar5 - uVar15 == 0) {
        uVar8 = (long)((long)puVar10 - uVar15) >> 2;
        if ((long)puVar10 - uVar15 == 0) {
          uVar8 = 1;
        }
        uVar15 = uVar8;
        FUN_10a3269d4();
        puVar11 = (undefined8 *)(uVar15 + (uVar8 >> 2) * 8);
        lVar12 = param_1[2] - (long)param_1[1];
        puVar10 = puVar11;
        if (lVar12 != 0) {
          puVar10 = (undefined8 *)((long)puVar11 + lVar12);
          puVar7 = (undefined8 *)param_1[1];
          puVar9 = puVar11;
          do {
            *puVar9 = *puVar7;
            lVar12 = lVar12 + -8;
            puVar7 = puVar7 + 1;
            puVar9 = puVar9 + 1;
          } while (lVar12 != 0);
        }
        uVar8 = *param_1;
        *param_1 = uVar15;
        param_1[1] = (ulong)puVar11;
        param_1[2] = (ulong)puVar10;
        param_1[3] = uVar15 + uVar5 * 8;
        if (uVar8 != 0) {
          __ZdlPv(uVar8);
          puVar10 = (undefined8 *)param_1[2];
        }
      }
      else {
        lVar12 = (((long)(uVar5 - uVar15) >> 3) + 1) / 2;
        lVar13 = uVar5 + lVar12 * -8;
        lVar1 = (long)puVar10 - uVar5;
        if (lVar1 != 0) {
          _memmove(lVar13,uVar5,lVar1);
          uVar5 = param_1[1];
        }
        puVar10 = (undefined8 *)(lVar13 + lVar1);
        param_1[1] = uVar5 + lVar12 * -8;
        param_1[2] = (ulong)puVar10;
      }
    }
    *puVar10 = uVar3;
    param_1[2] = param_1[2] + 8;
    return;
  }
  puVar11 = (undefined8 *)param_1[2];
  puVar9 = (undefined8 *)param_1[3];
  puVar7 = (undefined8 *)*param_1;
  puVar10 = (undefined8 *)param_1[1];
  uVar15 = (long)puVar11 - (long)puVar10;
  if (uVar15 < (ulong)((long)puVar9 - (long)puVar7)) {
    uVar3 = 0xff0;
    __Znwm();
    if (puVar9 == puVar11) {
      if (puVar10 == puVar7) {
        uVar15 = (long)puVar9 - (long)puVar10 >> 2;
        if (puVar11 == puVar10) {
          uVar15 = 1;
        }
        lVar12 = uVar15 * 2;
        FUN_10a3269d4();
        puVar10 = (undefined8 *)(uVar15 + (lVar12 + 6U & 0xfffffffffffffff8));
        lVar12 = param_1[2] - (long)param_1[1];
        puVar11 = puVar10;
        if (lVar12 != 0) {
          puVar11 = (undefined8 *)((long)puVar10 + lVar12);
          puVar7 = (undefined8 *)param_1[1];
          puVar9 = puVar10;
          do {
            *puVar9 = *puVar7;
            lVar12 = lVar12 + -8;
            puVar7 = puVar7 + 1;
            puVar9 = puVar9 + 1;
          } while (lVar12 != 0);
        }
        uVar5 = *param_1;
        *param_1 = uVar15;
        param_1[1] = (ulong)puVar10;
        param_1[2] = (ulong)puVar11;
        param_1[3] = uVar15 + (long)param_2 * 8;
        if (uVar5 != 0) {
          __ZdlPv(uVar5);
          puVar10 = (undefined8 *)param_1[1];
        }
      }
      puVar10[-1] = uVar3;
      puVar10 = (undefined8 *)param_1[1];
      param_1[1] = (ulong)(puVar10 + -1);
      uVar3 = puVar10[-1];
      goto LAB_10a326600;
    }
    *puVar11 = uVar3;
    param_1[2] = param_1[2] + 8;
  }
  else {
    puVar6 = (undefined8 *)((long)puVar9 - (long)puVar7 >> 2);
    if (puVar9 == puVar7) {
      puVar6 = (undefined8 *)0x1;
    }
    FUN_10a3269d4();
    uVar3 = 0xff0;
    puVar4 = param_2;
    __Znwm();
    puVar7 = (undefined8 *)((long)puVar6 + uVar15);
    puVar9 = puVar6 + (long)param_2;
    puVar2 = puVar6;
    if (uVar15 == (long)param_2 * 8) {
      if ((long)uVar15 < 1) {
        puVar7 = (undefined8 *)((long)puVar7 - (long)puVar6 >> 2);
        if (puVar11 == puVar10) {
          puVar7 = (undefined8 *)0x1;
        }
        puVar2 = puVar7;
        FUN_10a3269d4();
        puVar7 = puVar2 + ((ulong)puVar7 >> 2);
        puVar9 = puVar2 + (long)puVar4;
        if (puVar6 != (undefined8 *)0x0) {
          __ZdlPv(puVar6);
        }
      }
      else {
        lVar12 = ((long)puVar7 - (long)puVar6 >> 3) + 1;
        puVar7 = puVar7 + -((ulong)(lVar12 - (lVar12 >> 0x3f)) >> 1);
      }
    }
    puVar10 = puVar7 + 1;
    *puVar7 = uVar3;
    puVar11 = (undefined8 *)param_1[2];
    puVar6 = puVar2;
    if (puVar11 != (undefined8 *)param_1[1]) {
      do {
        puVar2 = puVar6;
        puVar14 = puVar7;
        if (puVar7 == puVar6) {
          if (puVar10 < puVar9) {
            lVar12 = ((long)puVar9 - (long)puVar10 >> 3) + 1;
            lVar1 = (long)puVar10 - (long)puVar6;
            lVar13 = (long)puVar10 - (long)puVar6;
            puVar10 = puVar10 + ((ulong)(lVar12 - (lVar12 >> 0x3f)) >> 1);
            puVar14 = (undefined8 *)((long)puVar10 - lVar1);
            if (lVar13 != 0) {
              _memmove(puVar14,puVar7,lVar13);
              puVar4 = puVar7;
            }
          }
          else {
            puVar14 = (undefined8 *)((long)puVar9 - (long)puVar6 >> 2);
            if ((long)puVar9 - (long)puVar6 == 0) {
              puVar14 = (undefined8 *)0x1;
            }
            puVar2 = puVar14;
            FUN_10a3269d4();
            puVar14 = (undefined8 *)((long)puVar2 + ((long)puVar14 * 2 + 6U & 0xfffffffffffffff8));
            lVar12 = (long)puVar10 - (long)puVar6;
            puVar10 = puVar14;
            if (lVar12 != 0) {
              puVar10 = (undefined8 *)((long)puVar14 + lVar12);
              puVar9 = puVar14;
              do {
                *puVar9 = *puVar7;
                lVar12 = lVar12 + -8;
                puVar9 = puVar9 + 1;
                puVar7 = puVar7 + 1;
              } while (lVar12 != 0);
            }
            puVar9 = puVar2 + (long)puVar4;
            if (puVar6 != (undefined8 *)0x0) {
              __ZdlPv(puVar6);
            }
          }
        }
        puVar11 = puVar11 + -1;
        puVar7 = puVar14 + -1;
        *puVar7 = *puVar11;
        puVar6 = puVar2;
      } while (puVar11 != (undefined8 *)param_1[1]);
    }
    uVar15 = *param_1;
    *param_1 = (ulong)puVar2;
    param_1[1] = (ulong)puVar7;
    param_1[2] = (ulong)puVar10;
    param_1[3] = (ulong)puVar9;
    if (uVar15 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___ZdlPv_110352258)();
      return;
    }
  }
  return;
}



/* Entry: 10a3268d8; end: 10a3269d3;  */

void FUN_10a3268d8(ulong *param_1,undefined8 param_2)

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
      FUN_10a3269d4();
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
  *puVar7 = param_2;
  param_1[2] = param_1[2] + 8;
  return;
}



/* Entry: 10a3269d4; end: 10a326acf;  */

undefined1  [16] FUN_10a3269d4(ulong param_1)

{
  uint uVar1;
  code *pcVar2;
  long lVar3;
  undefined8 uVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  
  if (param_1 >> 0x3d == 0) {
    lVar3 = param_1 << 3;
    __Znwm(lVar3);
    auVar5._8_8_ = param_1;
    auVar5._0_8_ = lVar3;
    return auVar5;
  }
  func_0x000109ffded8();
  if (*(long *)(param_1 + 0x28) != 0) {
    lVar3 = *(long *)(*(long *)(param_1 + 8) + (*(ulong *)(param_1 + 0x20) >> 7) * 8) +
            (*(ulong *)(param_1 + 0x20) & 0x7f) * 0x20;
    FUN_10a232e34(lVar3 + 0x10);
    FUN_10a0d92c8(lVar3);
    *(long *)(param_1 + 0x28) = *(long *)(param_1 + 0x28) + -1;
    *(long *)(param_1 + 0x20) = *(long *)(param_1 + 0x20) + 1;
    uVar4 = 1;
    uVar1 = (uint)(*(ulong *)(param_1 + 0x20) < 0x100);
    if (uVar1 == 0) {
      __ZdlPv(**(undefined8 **)(param_1 + 8));
      *(long *)(param_1 + 8) = *(long *)(param_1 + 8) + 8;
      *(long *)(param_1 + 0x20) = *(long *)(param_1 + 0x20) + -0x80;
    }
    auVar6._4_4_ = 0;
    auVar6._0_4_ = uVar1 ^ 1;
    auVar6._8_8_ = uVar4;
    return auVar6;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10a326a74);
  (*pcVar2)();
}



/* Entry: 10a326ad0; end: 10a326af7;  */

void FUN_10a326ad0(void)

{
  return;
}



/* Entry: 10a326af8; end: 10a326b3f;  */

void FUN_10a326af8(undefined8 param_1,long param_2)

{
  if (param_2 != 0) {
    func_0x00010a0d9320(param_2 + 0x40);
    func_0x00010a0d92c8(param_2 + 0x30);
    func_0x00010a09db0c(param_2 + 0x20);
    FUN_10a0eb918(param_2 + 8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(param_2);
    return;
  }
  return;
}



/* Entry: 10a326b40; end: 10a326b9f;  */

void FUN_10a326b40(long *param_1)

{
  long lVar1;
  
  lVar1 = 0xa8;
  __Znwm();
  FUN_10a326ba0();
  *param_1 = lVar1 + 0x18;
  param_1[1] = lVar1;
  return;
}



/* Entry: 10a326ba0; end: 10a326bf3;  */

undefined8 * FUN_10a326ba0(undefined8 *param_1,undefined8 *param_2,undefined4 *param_3)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_FUN_110baa4d8;
  FUN_10a1b2a84(param_1 + 3,*param_2,*param_3,1);
  return param_1;
}



/* Entry: 10a326bf4; end: 10a326c53;  */

void FUN_10a326bf4(long *param_1)

{
  long lVar1;
  
  lVar1 = 0xa8;
  __Znwm();
  FUN_10a326c54();
  *param_1 = lVar1 + 0x18;
  param_1[1] = lVar1;
  return;
}



/* Entry: 10a326c54; end: 10a326ca7;  */

undefined8 * FUN_10a326c54(undefined8 *param_1,undefined8 *param_2,undefined4 *param_3)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_FUN_110baa4d8;
  FUN_10a1b2a84(param_1 + 3,*param_2,*param_3,1);
  return param_1;
}



/* Entry: 10a326ca8; end: 10a326d2b;  */

undefined1  [16] FUN_10a326ca8(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x18;
  auVar1._0_8_ = &UNK_10f650afb;
  return auVar1;
}



/* Entry: 10a326d2c; end: 10a326e2f;  */

void FUN_10a326d2c(undefined8 param_1)

{
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined4 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uStack_90 = 0xffffffff00000001;
  puStack_98 = (undefined *)0x0;
  uStack_88 = CONCAT44(uStack_88._4_4_,4);
  puStack_80 = &UNK_10f64efef;
  uStack_78 = 0;
  uStack_68 = 0;
  puStack_70 = (undefined *)0x0;
  uStack_60 = 0x14d0000016c;
  uStack_58 = CONCAT44(uStack_58._4_4_,0xffffffff);
  FUN_10a326e30(param_1,&puStack_98);
  uStack_90 = 0;
  uStack_88 = 0;
  puStack_98 = &UNK_10f64eff0;
  uStack_78 = 0xffffffffffffffff;
  puStack_80 = (undefined *)0x100000064;
  puStack_70 = &UNK_10f64efef;
  uStack_60 = 0;
  uStack_68 = 0;
  uStack_50 = 0;
  uStack_58 = 0;
  uStack_48 = 0xffffffff;
  uStack_40 = 0;
  uStack_38 = 0;
  FUN_10a3554c8();
  uStack_90 = 0;
  uStack_88 = 0;
  puStack_98 = &UNK_10f64eff7;
  uStack_78 = 0xffffffffffffffff;
  puStack_80 = (undefined *)0x100000064;
  puStack_70 = &UNK_10f64efef;
  uStack_60 = 0;
  uStack_68 = 0;
  uStack_50 = 0;
  uStack_58 = 0;
  uStack_48 = 0xffffffff;
  uStack_40 = 0;
  uStack_38 = 0;
  func_0x00010a3556a8(param_1,&puStack_98,0);
  FUN_10a357aa0(param_1);
  return;
}



/* Entry: 10a326e30; end: 10a326f07;  */

/* WARNING: Removing unreachable block (ram,0x00010a326ec8) */

undefined1  [16] FUN_10a326e30(undefined8 param_1,long param_2)

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
  func_0x000109887da8(auStack_48,&UNK_10f650afb,0x18);
  uStack_88 = *(undefined8 *)(param_2 + 8);
  uStack_80 = *(undefined4 *)(param_2 + 0x10);
  uStack_70 = *(undefined8 *)(param_2 + 0x20);
  uStack_78 = *(undefined8 *)(param_2 + 0x18);
  uStack_60 = *(undefined8 *)(param_2 + 0x30);
  uStack_68 = *(undefined8 *)(param_2 + 0x28);
  uStack_58 = *(undefined8 *)(param_2 + 0x38);
  uStack_50 = *(undefined4 *)(param_2 + 0x40);
  puStack_90 = auStack_48;
  FUN_10a3553cc(param_1,&puStack_90,100);
  auVar2._8_8_ = ppuVar1;
  auVar2._0_8_ = param_1;
  return auVar2;
}



/* Entry: 10a326f08; end: 10a326f8b;  */

undefined8 * FUN_10a326f08(undefined8 *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  *param_1 = &PTR_FUN_110bc4690;
  param_1[2] = &PTR_DAT_110bc4730;
  param_1[7] = &PTR_DAT_110bc4788;
  plVar5 = (long *)param_1[0x20];
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
  if (*(char *)((long)param_1 + 0xf7) < '\0') {
    __ZdlPv(param_1[0x1c]);
  }
  *param_1 = &PTR_FUN_110c3ec18;
  param_1[2] = &PTR_DAT_110c3ecb8;
  param_1[7] = &PTR_DAT_110c3ed10;
  func_0x00010aa92258(param_1 + 0x1a);
  if (param_1[0x19] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  __ZNSt3__15mutexD1Ev(param_1 + 0x10);
  if (param_1[0xf] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  if (*(char *)((long)param_1 + 0x6f) < '\0') {
    __ZdlPv(param_1[0xb]);
  }
  if (param_1[6] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  param_1[2] = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + 3);
  return param_1;
}



/* Entry: 10a326f8c; end: 10a326f9f;  */

undefined8 * FUN_10a326f8c(undefined8 *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  *param_1 = &PTR_FUN_110bc4690;
  param_1[2] = &PTR_DAT_110bc4730;
  param_1[7] = &PTR_DAT_110bc4788;
  plVar5 = (long *)param_1[0x20];
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
  if (*(char *)((long)param_1 + 0xf7) < '\0') {
    __ZdlPv(param_1[0x1c]);
  }
  *param_1 = &PTR_FUN_110c3ec18;
  param_1[2] = &PTR_DAT_110c3ecb8;
  param_1[7] = &PTR_DAT_110c3ed10;
  func_0x00010aa92258(param_1 + 0x1a);
  if (param_1[0x19] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  __ZNSt3__15mutexD1Ev(param_1 + 0x10);
  if (param_1[0xf] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  if (*(char *)((long)param_1 + 0x6f) < '\0') {
    __ZdlPv(param_1[0xb]);
  }
  if (param_1[6] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  param_1[2] = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + 3);
  return param_1;
}



/* Entry: 10a326fa0; end: 10a326fe3;  */

void FUN_10a326fa0(void)

{
  FUN_10a326f08();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a326fe4; end: 10a3271d7;  */

void FUN_10a326fe4(undefined8 *param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  undefined **ppuVar5;
  long lVar6;
  long *plVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  long lStack_90;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 *puStack_48;
  undefined8 *apuStack_40 [2];
  
  if (*(long *)(param_2 + 0xf8) == 0) {
    puVar4 = (undefined8 *)0x20;
    __Znwm();
    puVar4[1] = 0;
    puVar4[2] = 0;
    *puVar4 = &PTR_FUN_110bc6498;
    plVar7 = *(long **)(param_2 + 0x100);
    *(undefined8 **)(param_2 + 0xf8) = puVar4 + 3;
    *(undefined8 **)(param_2 + 0x100) = puVar4;
    if (plVar7 != (long *)0x0) {
      plVar1 = plVar7 + 1;
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
        (**(code **)(*plVar7 + 0x10))(plVar7);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
      }
    }
  }
  if (*(char *)(param_2 + 0xf7) < '\0') {
    func_0x000107c3192c(&uStack_a0,*(undefined8 *)(param_2 + 0xe0),*(undefined8 *)(param_2 + 0xe8));
  }
  else {
    uStack_98 = *(undefined8 *)(param_2 + 0xe8);
    uStack_a0 = *(undefined8 *)(param_2 + 0xe0);
    lStack_90 = *(long *)(param_2 + 0xf0);
  }
  puVar4 = (undefined8 *)0xb0;
  __Znwm();
  plVar7 = puVar4 + 1;
  puVar4[2] = 0;
  *plVar7 = 0x200000006;
  *(undefined2 *)(puVar4 + 3) = 4;
  uVar8 = 0;
  uVar9 = 0;
  puVar4[5] = 0;
  puVar4[4] = 0;
  puVar4[7] = 0;
  puVar4[6] = 0;
  puVar4[9] = 0;
  puVar4[8] = 0;
  puVar4[0xb] = 0;
  puVar4[10] = 0;
  puVar4[0xd] = 0;
  puVar4[0xc] = 0;
  puVar4[0xf] = 0;
  puVar4[0xe] = 0;
  puVar4[0x10] = 0;
  puVar4[0x11] = puVar4 + 3;
  puVar4[0x12] = 0;
  *puVar4 = &PTR_FUN_110bc5718;
  *(undefined1 *)(puVar4 + 0x13) = 0;
  *(undefined1 *)(puVar4 + 0x15) = 0;
  ppuVar5 = &PTR___tlv_bootstrap_11340dd98;
  (*(code *)PTR___tlv_bootstrap_11340dd98)();
  uStack_50 = 0;
  uStack_70 = uVar8;
  uStack_68 = uVar9;
  uStack_60 = uVar8;
  uStack_58 = uVar9;
  FUN_109d18960(&uStack_70,*ppuVar5,0);
  do {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar7,0x10);
    if (bVar3) {
      *plVar7 = *plVar7 + 4;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  *param_1 = puVar4;
  plVar7 = puVar4 + 2;
  do {
    lVar6 = *plVar7;
    puStack_48 = puVar4;
    apuStack_40[0] = puVar4;
    if (lVar6 == 0) {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar3) {
        *plVar7 = 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
      if (cVar2 == '\0') {
        if (*(char *)(puVar4 + 0x15) == '\x01') {
          func_0x00010a004dac(puVar4 + 0x13);
        }
        puVar4[0x13] = 0;
        puVar4[0x14] = 0;
        *(undefined1 *)(puVar4 + 0x15) = 1;
        puVar4[2] = 2;
        FUN_109d1b4dc(puVar4 + 3);
        goto LAB_10a327194;
      }
    }
    else {
      ClearExclusiveLocal();
    }
    if (((uint)lVar6 >> 1 & 1) != 0) {
LAB_10a327194:
      puVar4 = apuStack_40[0];
      apuStack_40[0] = (undefined8 *)0x0;
      if (puVar4 != (undefined8 *)0x0) {
        func_0x0001092b4274(apuStack_40);
      }
      func_0x000109d1a1d0(&uStack_70);
      if (lStack_90 < 0) {
        __ZdlPv(uStack_a0);
      }
      return;
    }
  } while( true );
}



/* Entry: 10a3271d8; end: 10a3272ef;  */

void FUN_10a3271d8(long *param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  int iVar5;
  undefined1 auStack_60 [40];
  long lStack_38;
  
  if (*(long *)(param_2 + 0xf8) != 0) {
    func_0x0001092ba17c(auStack_60);
    if (lStack_38 != 0) {
      plVar1 = (long *)(lStack_38 + 8);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = *plVar1 + 4;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    *param_1 = lStack_38;
    func_0x0001092ba100(auStack_60);
    func_0x000109d1a1d0(auStack_60);
    return;
  }
  if ((bRam00000001138334e0 & 1) == 0) {
    iVar5 = 0x138334e0;
    ___cxa_guard_acquire();
    if (iVar5 != 0) {
      FUN_109d1b1bc();
      ___cxa_atexit(FUN_109d1b2e8,0x1138334d8,0x100000000);
      ___cxa_guard_release(0x1138334e0);
    }
  }
  lVar4 = lRam00000001138334d8;
  *param_1 = lRam00000001138334d8;
  if (lVar4 != 0) {
    plVar1 = (long *)(lVar4 + 8);
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



/* Entry: 10a3272f0; end: 10a327353;  */

undefined8 FUN_10a3272f0(void)

{
  return 0x30000;
}



/* Entry: 10a327354; end: 10a3273ab;  */

void FUN_10a327354(undefined8 param_1)

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
  
  uStack_58 = 0;
  uStack_50 = 0xffffffff00000001;
  uStack_48 = 0xffffffff;
  puStack_40 = &UNK_10f64efef;
  uStack_30 = 0;
  uStack_38 = 0;
  uStack_20 = 0;
  uStack_28 = 0;
  uStack_18 = 0xffffffff;
  FUN_10a3273ac(param_1,&uStack_58);
  FUN_10a357e9c();
  return;
}



/* Entry: 10a3273ac; end: 10a327483;  */

/* WARNING: Removing unreachable block (ram,0x00010a327444) */

undefined1  [16] FUN_10a3273ac(undefined8 param_1,long param_2)

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
  func_0x000109887da8(auStack_48,&UNK_10f650b20,0x13);
  uStack_88 = *(undefined8 *)(param_2 + 8);
  uStack_80 = *(undefined4 *)(param_2 + 0x10);
  uStack_70 = *(undefined8 *)(param_2 + 0x20);
  uStack_78 = *(undefined8 *)(param_2 + 0x18);
  uStack_60 = *(undefined8 *)(param_2 + 0x30);
  uStack_68 = *(undefined8 *)(param_2 + 0x28);
  uStack_58 = *(undefined8 *)(param_2 + 0x38);
  uStack_50 = *(undefined4 *)(param_2 + 0x40);
  puStack_90 = auStack_48;
  FUN_10a357da0(param_1,&puStack_90,100);
  auVar2._8_8_ = ppuVar1;
  auVar2._0_8_ = param_1;
  return auVar2;
}



/* Entry: 10a327484; end: 10a327613;  */

void FUN_10a327484(ulong param_1)

{
  ulong uVar1;
  char *pcStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined4 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  FUN_10a003e74(param_1,&UNK_10f64effc,0x10);
  uStack_a0 = 0;
  uStack_98 = 0;
  pcStack_a8 = "TrackingMode";
  uStack_88 = 0xffffffffffffffff;
  uStack_90 = 0x100000064;
  puStack_80 = &UNK_10f64efef;
  uStack_78 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_60 = 0x8e;
  uStack_58 = 0xffffffff;
  uStack_50 = 0;
  uStack_48 = 0;
  *(undefined1 *)(param_1 + 0x1ac) = 1;
  FUN_10a0050a8(param_1 + 0x168,&pcStack_a8);
  uVar1 = param_1;
  FUN_10a0051e8(param_1,uStack_90 & 0xffffffff,uStack_90._4_4_,uStack_58,uStack_88 & 0xffffffff,
                uStack_88._4_4_);
  if ((uVar1 & 1) == 0) {
    func_0x0001098946ac(param_1,pcStack_a8);
  }
  uStack_a0 = 0;
  uStack_98 = 0;
  pcStack_a8 = "ProportionsAndPose";
  uStack_88 = 0xffffffffffffffff;
  uStack_90 = 0x100000064;
  puStack_80 = &UNK_10f64efef;
  uStack_78 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_60 = 0x8e;
  uStack_58 = 0xffffffff;
  uStack_50 = 0;
  uStack_48 = 0;
  FUN_10a327614(param_1,&pcStack_a8,0);
  uStack_a0 = 0;
  uStack_98 = 0;
  pcStack_a8 = "PoseOnly";
  uStack_88 = 0xffffffffffffffff;
  uStack_90 = 0x100000064;
  puStack_80 = &UNK_10f64efef;
  uStack_78 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_60 = 0x8e;
  uStack_58 = 0xffffffff;
  uStack_50 = 0;
  uStack_48 = 0;
  FUN_10a327614();
  uStack_a0 = 0;
  uStack_98 = 0;
  pcStack_a8 = "Attachment";
  uStack_88 = 0xffffffffffffffff;
  uStack_90 = 0x100000064;
  puStack_80 = &UNK_10f64efef;
  uStack_78 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_60 = 0x8e;
  uStack_58 = 0xffffffff;
  uStack_50 = 0;
  uStack_48 = 0;
  FUN_10a327614();
  FUN_10a003ff4();
  func_0x00010a004064(param_1);
  return;
}



/* Entry: 10a327614; end: 10a3276b7;  */

undefined8 * FUN_10a327614(undefined8 *param_1,undefined8 *param_2,int param_3)

{
  code *pcVar1;
  undefined8 *puVar2;
  int aiStack_40 [2];
  undefined8 *puStack_38;
  
  puVar2 = param_1;
  FUN_10a0051e8(param_1,*(undefined4 *)(param_2 + 3),*(undefined4 *)((long)param_2 + 0x1c),
                *(undefined4 *)(param_2 + 10),*(undefined4 *)(param_2 + 4),
                *(undefined4 *)((long)param_2 + 0x24));
  if (((ulong)puVar2 & 1) == 0) {
    if (param_1[2] == param_1[3]) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10a3276b8);
      (*pcVar1)();
    }
    aiStack_40[0] = 3;
    puStack_38 = (undefined8 *)(double)param_3;
    FUN_10a005308(param_1[3] + -8,*param_1,*param_2,aiStack_40);
    if ((3 < aiStack_40[0]) && (puStack_38 != (undefined8 *)0x0)) {
      (**(code **)*puStack_38)();
    }
  }
  return param_1;
}



/* Entry: 10a3276b8; end: 10a32772f;  */

undefined1  [16] FUN_10a3276b8(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x12;
  auVar1._0_8_ = &UNK_10f650b34;
  return auVar1;
}



/* Entry: 10a327730; end: 10a327a1b;  */

void FUN_10a327730(ulong param_1)

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
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  ulong uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  func_0x000109887da8(appuStack_c8,&UNK_10f650b34,0x12);
  pppuVar1 = (undefined8 ***)appuStack_c8[0];
  if (-1 < cStack_b1) {
    pppuVar1 = appuStack_c8;
  }
  *(undefined ***)(param_1 + 0x1b0) = &PTR_DAT_110bc7b48;
  pppuVar2 = (undefined8 ***)&UNK_10f64efef;
  if (pppuVar1 != (undefined8 ***)0x0) {
    pppuVar2 = pppuVar1;
  }
  func_0x000107c2c4dc(param_1 + 0x1b8,pppuVar2);
  uStack_98 = 0;
  uStack_90 = 0;
  uStack_80 = 0xffffffffffffffff;
  uStack_88 = 0x100000064;
  uStack_70 = 0;
  puStack_78 = (undefined *)0x0;
  uStack_60 = 0;
  puStack_68 = (undefined *)0x0;
  uStack_58 = 0;
  uStack_50 = CONCAT44(uStack_50._4_4_,0xffffffff);
  uStack_48 = 0;
  uStack_40 = 0;
  ppuStack_a0 = pppuVar1;
  func_0x00010a052690(param_1 + 0x168,&ppuStack_a0);
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    ppuStack_b0 = &PTR_DAT_110bc7b48;
    uStack_a8 = 0;
    ppuStack_a0 = (undefined8 **)&PTR_DAT_110c42c58;
    uStack_98 = 0;
    uStack_90 = CONCAT71(uStack_90._1_7_,1);
    func_0x0001098949cc(param_1,pppuVar1,&ppuStack_b0,&ppuStack_a0);
  }
  if (cStack_b1 < '\0') {
    __ZdlPv(appuStack_c8[0]);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,0x20,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a3279fc;
    FUN_10a054dac(param_1,&UNK_10f64f036,FUN_10a357f58,2,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,0x20,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a3279fc;
    FUN_10a054dac(param_1,&UNK_10f64f042,FUN_10a3581b0,5,*(undefined8 *)(param_1 + 0x40));
  }
  *(undefined **)(param_1 + 0x1b0) = PTR___ZTIDn_1103469e8;
  lVar3 = *(long *)(param_1 + 0x170);
  if (*(long *)(param_1 + 0x168) != lVar3) {
    uStack_98 = *(undefined8 *)(lVar3 + -0x60);
    ppuStack_a0 = *(undefined8 ***)(lVar3 + -0x68);
    puStack_78 = *(undefined **)(lVar3 + -0x40);
    uVar8 = *(ulong *)(lVar3 + -0x48);
    uVar9 = *(ulong *)(lVar3 + -0x50);
    uStack_90 = *(undefined8 *)(lVar3 + -0x58);
    puStack_68 = *(undefined **)(lVar3 + -0x30);
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
      FUN_10a054234(param_1,&ppuStack_a0,param_1 + 0x1b8,&UNK_10f650b34,0x12);
      FUN_10a05431c(param_1);
    }
    uStack_98 = 0;
    uStack_90 = 0;
    ppuStack_a0 = (undefined8 **)&UNK_10f64f053;
    uStack_80 = 0xffffffffffffffff;
    uStack_88 = 0x100000064;
    puStack_78 = &UNK_10f64efef;
    uStack_70 = 0;
    uStack_60 = 0;
    uStack_58 = 0;
    puStack_68 = &UNK_10f64efef;
    uStack_50 = CONCAT44(uStack_50._4_4_,0xffffffff);
    uStack_48 = 0;
    uStack_40 = 0;
    func_0x00010a004eb4(param_1,&ppuStack_a0);
    uVar7 = param_1;
    FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
    if ((uVar7 & 1) == 0) {
      if (*(long *)(param_1 + 0x10) == *(long *)(param_1 + 0x18)) goto LAB_10a3279fc;
      FUN_10a054dac(param_1,&UNK_10f64f060,FUN_10a359250,1,*(long *)(param_1 + 0x18) + -8);
    }
    func_0x00010a004064(param_1);
    return;
  }
LAB_10a3279fc:
                    /* WARNING: Does not return */
  pcVar6 = (code *)SoftwareBreakpoint(1,0x10a327a00);
  (*pcVar6)();
}



/* Entry: 10a327a1c; end: 10a327e8f;  */

undefined8 * FUN_10a327a1c(undefined8 *param_1)

{
  long **pplVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  long *plVar5;
  undefined8 *puVar6;
  undefined8 in_x4;
  long lVar7;
  long lVar8;
  long *plVar9;
  undefined **ppuStack_298;
  undefined **ppuStack_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined4 uStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  long *plStack_250;
  undefined8 uStack_248;
  undefined4 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  long *plStack_228;
  undefined8 uStack_220;
  undefined4 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined4 uStack_1f0;
  undefined8 uStack_1e8;
  undefined1 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined4 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined4 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined4 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined4 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined4 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined4 uStack_e0;
  undefined8 uStack_d8;
  undefined **ppuStack_d0;
  undefined **ppuStack_c8;
  undefined **appuStack_c0 [2];
  undefined **appuStack_b0 [2];
  undefined **appuStack_a0 [3];
  long *plStack_88;
  long lStack_80;
  long *plStack_78;
  long lStack_70;
  long *plStack_68;
  
  puVar6 = param_1;
  FUN_10aa7093c();
  *puVar6 = &PTR_FUN_110bc4808;
  puVar6[2] = &PTR_DAT_110bc48a8;
  puVar6[0x1d] = 0;
  puVar6[0x1c] = 0;
  puVar6[7] = &PTR_FUN_110bc4900;
  puVar6[0x1f] = 0;
  puVar6[0x1e] = 0;
  puVar6[0x21] = 0;
  puVar6[0x20] = 0;
  puVar6[0x22] = 0;
  *(undefined4 *)(puVar6 + 0x23) = 0x3f800000;
  puVar6[0x25] = 0;
  puVar6[0x24] = 0;
  puVar6[0x27] = 0;
  puVar6[0x26] = 0;
  *(undefined4 *)(puVar6 + 0x28) = 0x3f800000;
  puVar6[0x2a] = 0;
  puVar6[0x29] = 0;
  puVar6[0x2c] = 0;
  puVar6[0x2b] = 0;
  puVar6[0x2e] = 0;
  puVar6[0x2d] = 0;
  puVar6[0x30] = 0;
  puVar6[0x2f] = 0;
  puVar6[0x32] = 0;
  puVar6[0x31] = 0;
  *(undefined4 *)(puVar6 + 0x33) = 0x3f800000;
  puVar6[0x38] = 0;
  *(undefined1 *)(puVar6 + 0x39) = 0;
  puVar6[0x34] = 0;
  puVar6[0x35] = 0;
  *(undefined1 *)(puVar6 + 0x37) = 0;
  puVar6[0x36] = 0;
  *(undefined1 *)((long)puVar6 + 0x1c9) = 1;
  FUN_10a0f984c(&ppuStack_d0);
  FUN_10a0fff24();
  func_0x00010a0fb0f4(&ppuStack_d0,puVar6 + 0x1c);
  uStack_1e8 = param_1[10];
  uStack_280 = 0;
  uStack_288 = 0;
  uStack_270 = 0;
  uStack_278 = 0;
  uStack_268 = 0x3f800000;
  uStack_258 = 0;
  uStack_260 = 0;
  uStack_248 = 0;
  plStack_250 = (long *)0x0;
  uStack_240 = 0x3f800000;
  uStack_230 = 0;
  uStack_238 = 0;
  uStack_220 = 0;
  plStack_228 = (long *)0x0;
  uStack_208 = 0;
  uStack_210 = 0;
  uStack_1f8 = 0;
  uStack_200 = 0;
  uStack_218 = 0x3f800000;
  uStack_1f0 = 0x3f800000;
  uStack_1e0 = 0;
  uStack_1d0 = 0;
  uStack_1d8 = 0;
  uStack_1c0 = 0;
  uStack_1c8 = 0;
  uStack_198 = 0;
  uStack_1a0 = 0;
  uStack_1a8 = 0;
  uStack_1b0 = 0;
  uStack_1b8 = 0x3f800000;
  uStack_190 = 0x3f800000;
  uStack_180 = 0;
  uStack_188 = 0;
  uStack_170 = 0;
  uStack_178 = 0;
  uStack_160 = 0;
  uStack_168 = 0;
  uStack_158 = 0;
  uStack_150 = 0x3f800000;
  uStack_140 = 0;
  uStack_138 = 0;
  uStack_148 = 0;
  ppuStack_298 = &PTR_FUN_110bc5750;
  ppuStack_290 = &PTR_DAT_110bc5910;
  uStack_130 = 0;
  uStack_120 = 0;
  uStack_128 = 0;
  uStack_110 = 0;
  uStack_118 = 0;
  uStack_108 = 0x3f800000;
  uStack_f8 = 0;
  uStack_100 = 0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  uStack_e0 = 0x3f800000;
  uStack_d8 = 0;
  FUN_10a3282cc(&ppuStack_298,in_x4,0);
  FUN_10a327f30(param_1,&uStack_288,&uStack_100);
  func_0x00010a328368(param_1 + 0x2c);
  if (plStack_250 != (long *)0x0) {
    plVar9 = plStack_250;
    do {
      lVar7 = plVar9[2];
      plVar2 = (long *)plVar9[3];
      lVar8 = plVar9[4];
      puVar6 = &uStack_210;
      lStack_70 = lVar7;
      plStack_68 = plVar2;
      func_0x00010a35bf90(puVar6,&lStack_70);
      pplVar1 = &plStack_68;
      plVar5 = &lStack_70;
      if (puVar6 != (undefined8 *)0x0) {
        pplVar1 = (long **)(puVar6 + 5);
        plVar5 = puVar6 + 4;
      }
      if ((*plVar5 == lVar7 && *pplVar1 == plVar2) && lVar8 != 0) {
        FUN_10a03d13c(&lStack_80,lVar8);
        plStack_68 = plStack_78;
        lStack_70 = lStack_80;
        if (plStack_78 != (long *)0x0) {
          plVar2 = plStack_78 + 2;
          do {
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
            if (bVar4) {
              *plVar2 = *plVar2 + 1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
        }
        FUN_10a35a0d8(param_1 + 0x2c,&lStack_70);
        if (plStack_68 != (long *)0x0) {
          __ZNSt3__119__shared_weak_count14__release_weakEv();
        }
        plVar2 = plStack_78;
        if (plStack_78 != (long *)0x0) {
          plVar5 = plStack_78 + 1;
          do {
            lVar7 = *plVar5;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(plVar5,0x10);
            if (bVar4) {
              *plVar5 = lVar7 + -1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (lVar7 == 0) {
            (**(code **)(*plStack_78 + 0x10))(plStack_78);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar2);
          }
        }
      }
      plVar9 = (long *)*plVar9;
    } while (plVar9 != (long *)0x0);
  }
  if (plStack_228 != (long *)0x0) {
    plVar9 = plStack_228;
    do {
      lVar7 = plVar9[2];
      plVar2 = (long *)plVar9[3];
      lVar8 = plVar9[4];
      puVar6 = &uStack_210;
      lStack_70 = lVar7;
      plStack_68 = plVar2;
      func_0x00010a35bf90(puVar6,&lStack_70);
      pplVar1 = &plStack_68;
      plVar5 = &lStack_70;
      if (puVar6 != (undefined8 *)0x0) {
        pplVar1 = (long **)(puVar6 + 5);
        plVar5 = puVar6 + 4;
      }
      if ((*plVar5 == lVar7 && *pplVar1 == plVar2) && lVar8 != 0) {
        FUN_10a03d13c(&lStack_80,lVar8);
        plStack_68 = plStack_78;
        lStack_70 = lStack_80;
        if (plStack_78 != (long *)0x0) {
          plVar2 = plStack_78 + 2;
          do {
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
            if (bVar4) {
              *plVar2 = *plVar2 + 1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
        }
        FUN_10a35a0d8(param_1 + 0x2c,&lStack_70);
        if (plStack_68 != (long *)0x0) {
          __ZNSt3__119__shared_weak_count14__release_weakEv();
        }
        plVar2 = plStack_78;
        if (plStack_78 != (long *)0x0) {
          plVar5 = plStack_78 + 1;
          do {
            lVar7 = *plVar5;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(plVar5,0x10);
            if (bVar4) {
              *plVar5 = lVar7 + -1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (lVar7 == 0) {
            (**(code **)(*plStack_78 + 0x10))(plStack_78);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar2);
          }
        }
      }
      plVar9 = (long *)*plVar9;
    } while (plVar9 != (long *)0x0);
  }
  *(undefined1 *)(param_1 + 0x37) = 1;
  param_1[0x38] = uStack_d8;
  FUN_10a3283b0(&ppuStack_298);
  plVar9 = plStack_88;
  ppuStack_d0 = &PTR_FUN_110ba53b0;
  ppuStack_c8 = &PTR_FUN_110ba5578;
  plStack_88 = (long *)0x0;
  if (plVar9 != (long *)0x0) {
    (**(code **)(*plVar9 + 8))();
  }
  appuStack_a0[0] = &PTR_SUB_110b01d60;
  func_0x000107c2acd4(appuStack_a0);
  appuStack_b0[0] = &PTR_SUB_110b01d60;
  func_0x000107c2acd4(appuStack_b0);
  appuStack_c0[0] = &PTR_SUB_110b01d60;
  func_0x000107c2acd4(appuStack_c0);
  return param_1;
}



/* Entry: 10a327e90; end: 10a327f2f;  */

void FUN_10a327e90(undefined8 *param_1)

{
  undefined8 *puStack_28;
  
  *param_1 = &PTR_FUN_110bc4808;
  param_1[2] = &PTR_DAT_110bc48a8;
  param_1[7] = &PTR_FUN_110bc4900;
  if (param_1[0x34] != 0) {
    param_1[0x35] = param_1[0x34];
    __ZdlPv();
  }
  func_0x00010a10a78c(param_1 + 0x2f);
  puStack_28 = param_1 + 0x2c;
  FUN_10a34c804(&puStack_28);
  puStack_28 = param_1 + 0x29;
  FUN_10a34c844(&puStack_28);
  FUN_10a34c8b4(param_1 + 0x24);
  func_0x00010a34c8fc(param_1 + 0x1f);
  if (param_1[0x1c] != 0) {
    param_1[0x1d] = param_1[0x1c];
    __ZdlPv();
  }
  func_0x00010aa71c88(param_1);
  return;
}



/* Entry: 10a327f30; end: 10a3280d7;  */

void FUN_10a327f30(long param_1,long param_2,long param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  long *plVar5;
  code *pcVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  long *plVar10;
  undefined1 auStack_80 [8];
  long *plStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  
  FUN_10a359b98(param_1 + 0xf8);
  func_0x00010a359bfc(param_1 + 0x120);
  uVar9 = *(ulong *)(param_2 + 0x18);
  FUN_10a34cdc4(param_1 + 0xf8,(long)((float)uVar9 / *(float *)(param_1 + 0x118)));
  FUN_10a359c60(param_1 + 0x120,(long)((float)uVar9 / *(float *)(param_1 + 0x140)));
  uStack_70 = 0xffffffffffffffff;
  uStack_68 = 0xffffffffffffffff;
  FUN_10a3280d8(param_1 + 0x1a0,uVar9,&uStack_70);
  FUN_10a3281fc(param_1 + 0x148,uVar9);
  plVar10 = *(long **)(param_2 + 0x10);
  while( true ) {
    if (plVar10 == (long *)0x0) {
      FUN_10a3c10cc(*(undefined8 *)(*(long *)(param_1 + 0x50) + 0x858),
                    *(undefined8 *)(param_1 + 0x40),*(undefined8 *)(param_1 + 0x48),param_1 + 0xf8);
      return;
    }
    uStack_68 = plVar10[3];
    uStack_70 = plVar10[2];
    uStack_60 = plVar10[4];
    uVar9 = *(ulong *)(param_1 + 0x138);
    FUN_10a03d13c(auStack_80);
    FUN_10a357b94(param_1 + 0xf8,&uStack_70,&uStack_70);
    lVar7 = param_3;
    FUN_10a35a030(param_3,&uStack_70);
    lVar8 = param_1 + 0x120;
    FUN_10a359e30(lVar8,uStack_70,uStack_68,&uStack_70);
    *(uint *)(lVar8 + 0x20) = (uint)(lVar7 == 0);
    if ((ulong)(*(long *)(param_1 + 0x1a8) - *(long *)(param_1 + 0x1a0) >> 4) <= uVar9) break;
    puVar4 = (undefined8 *)(*(long *)(param_1 + 0x1a0) + uVar9 * 0x10);
    puVar4[1] = uStack_68;
    *puVar4 = uStack_70;
    if ((ulong)(*(long *)(param_1 + 0x150) - *(long *)(param_1 + 0x148) >> 4) <= uVar9) break;
    func_0x00010a328268(*(long *)(param_1 + 0x148) + uVar9 * 0x10,auStack_80);
    plVar5 = plStack_78;
    if (plStack_78 != (long *)0x0) {
      plVar1 = plStack_78 + 1;
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
        (**(code **)(*plStack_78 + 0x10))(plStack_78);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
      }
    }
    plVar10 = (long *)*plVar10;
  }
                    /* WARNING: Does not return */
  pcVar6 = (code *)SoftwareBreakpoint(1,0x10a3280c4);
  (*pcVar6)();
}



/* Entry: 10a3280d8; end: 10a3281fb;  */

/* WARNING: Possible PIC construction at 0x00010a34ca28: Changing call to branch */

undefined1  [16] FUN_10a3280d8(ulong *param_1,ulong param_2,undefined8 *param_3)

{
  long lVar1;
  undefined8 *puVar2;
  ulong *puVar3;
  ulong *puVar4;
  ulong *puVar5;
  ulong *puVar6;
  ulong uVar7;
  undefined8 *puVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  long lVar12;
  ulong uVar13;
  undefined1 **ppuVar14;
  undefined8 uVar15;
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  ulong uStack_e0;
  ulong *puStack_d8;
  undefined1 *puStack_d0;
  code *pcStack_c8;
  undefined1 **ppuStack_c0;
  code *pcStack_b8;
  undefined1 auStack_b0 [8];
  ulong uStack_a8;
  ulong uStack_a0;
  ulong uStack_98;
  ulong uStack_90;
  ulong *puStack_88;
  ulong uStack_80;
  long lStack_78;
  ulong uStack_70;
  ulong uStack_68;
  undefined8 *puStack_60;
  ulong *puStack_58;
  undefined1 *puStack_50;
  code *pcStack_48;
  
  uVar7 = *param_1;
  puVar2 = (undefined8 *)param_1[1];
  lVar12 = (long)puVar2 - uVar7;
  uVar11 = lVar12 >> 4;
  if (uVar11 < param_2) {
    uVar13 = param_2 - uVar11;
    if ((ulong)((long)(param_1[2] - (long)puVar2) >> 4) < uVar13) {
      if (param_2 >> 0x3c != 0) {
        puVar4 = param_1;
        uVar7 = param_2;
        func_0x00010a044abc();
        pcStack_48 = FUN_10a3281fc;
        uVar9 = puVar4[1];
        uVar10 = (long)(uVar9 - *puVar4) >> 4;
        puStack_60 = param_3;
        puStack_58 = param_1;
        puStack_50 = &stack0xfffffffffffffff0;
        if (uVar7 <= uVar10) {
          if (uVar7 < uVar10) {
            uVar11 = *puVar4 + uVar7 * 0x10;
            while (uVar9 != uVar11) {
              uVar9 = uVar9 - 0x10;
              func_0x00010a052384();
            }
            puVar4[1] = uVar11;
          }
          auVar17._8_8_ = uVar7;
          auVar17._0_8_ = uVar9;
          return auVar17;
        }
        uVar7 = uVar7 - uVar10;
        puVar3 = (ulong *)auStack_b0;
        pcStack_48 = FUN_10a3281fc;
        ppuVar14 = &puStack_50;
        puVar6 = (ulong *)puVar4[1];
        uStack_80 = uVar13;
        lStack_78 = lVar12;
        uStack_70 = uVar11;
        uStack_68 = param_2;
        if ((ulong)((long)(puVar4[2] - (long)puVar6) >> 4) < uVar7) {
          lVar12 = (long)puVar6 - *puVar4;
          uVar11 = uVar7 + (lVar12 >> 4);
          if (uVar11 >> 0x3c == 0) {
            uVar9 = puVar4[2] - *puVar4;
            uVar13 = (long)uVar9 >> 3;
            if (uVar13 <= uVar11) {
              uVar13 = uVar11;
            }
            if (0x7fffffffffffffef < uVar9) {
              uVar13 = 0xfffffffffffffff;
            }
            puStack_88 = puVar4;
            if (uVar13 == 0) {
              puVar6 = (ulong *)0x0;
            }
            else {
              puVar6 = puVar4;
              FUN_10a34ca5c();
            }
            lVar12 = (long)puVar6 + lVar12;
            _bzero(lVar12,uVar7 * 0x10);
            lVar1 = uVar7 * 0x10;
            uVar11 = *puVar4;
            uVar7 = lVar12 - (puVar4[1] - uVar11);
            _memcpy(uVar7);
            uStack_98 = *puVar4;
            *puVar4 = uVar7;
            puVar4[1] = lVar12 + lVar1;
            uStack_90 = puVar4[2];
            puVar4[2] = (ulong)(puVar6 + uVar13 * 2);
            uStack_a8 = uStack_98;
            uStack_a0 = uStack_98;
            puVar6 = &uStack_a8;
            uVar15 = 0x10a34ca2c;
          }
          else {
            uVar11 = uVar7;
            FUN_10a34ca48();
            pcStack_b8 = FUN_10a34ca48;
            puVar6 = (ulong *)&DAT_10f62a4d8;
            ppuStack_c0 = ppuVar14;
            FUN_109ffde64();
            puVar3 = &uStack_e0;
            pcStack_c8 = FUN_10a34ca5c;
            ppuVar14 = &puStack_d0;
            uStack_e0 = uVar7;
            puStack_d8 = puVar4;
            if (uVar11 >> 0x3c == 0) {
              lVar12 = uVar11 << 4;
              puStack_d0 = (undefined1 *)&ppuStack_c0;
              __Znwm(lVar12);
              auVar19._8_8_ = uVar11;
              auVar19._0_8_ = lVar12;
              return auVar19;
            }
            uVar15 = 0x10a34ca90;
            puStack_d0 = (undefined1 *)&ppuStack_c0;
            func_0x000109ffded8();
          }
          *(ulong *)((long)puVar3 + -0x20) = uVar7;
          *(ulong **)((long)puVar3 + -0x18) = puVar4;
          *(undefined1 ***)((long)puVar3 + -0x10) = ppuVar14;
          *(undefined8 *)((long)puVar3 + -8) = uVar15;
          uVar7 = puVar6[1];
          uVar13 = puVar6[2];
          while (uVar13 != uVar7) {
            puVar6[2] = uVar13 - 0x10;
            func_0x00010a052384();
            uVar13 = puVar6[2];
          }
          if (*puVar6 != 0) {
            __ZdlPv();
          }
          auVar20._8_8_ = uVar11;
          auVar20._0_8_ = puVar6;
          return auVar20;
        }
        lVar12 = 0;
        puVar5 = puVar4;
        if (uVar7 != 0) {
          lVar12 = uVar7 * 0x10;
          puVar5 = puVar6;
          _bzero(puVar6,lVar12);
          puVar6 = puVar6 + uVar7 * 2;
        }
        puVar4[1] = (ulong)puVar6;
        auVar18._8_8_ = lVar12;
        auVar18._0_8_ = puVar5;
        return auVar18;
      }
      uVar7 = param_1[2] - uVar7;
      uVar9 = (long)uVar7 >> 3;
      if (uVar9 <= param_2) {
        uVar9 = param_2;
      }
      if (0x7fffffffffffffef < uVar7) {
        uVar9 = 0xfffffffffffffff;
      }
      puVar4 = param_1;
      FUN_10a044ad0();
      puVar2 = (undefined8 *)((long)puVar4 + lVar12);
      lVar12 = param_2 * 0x10 + uVar11 * -0x10;
      puVar8 = puVar2;
      do {
        uVar15 = *param_3;
        puVar8[1] = param_3[1];
        *puVar8 = uVar15;
        lVar12 = lVar12 + -0x10;
        puVar8 = puVar8 + 2;
      } while (lVar12 != 0);
      param_2 = *param_1;
      uVar11 = (long)puVar2 - (param_1[1] - param_2);
      _memcpy(uVar11);
      uVar7 = *param_1;
      *param_1 = uVar11;
      param_1[1] = (ulong)(puVar2 + uVar13 * 2);
      param_1[2] = (ulong)(puVar4 + uVar9 * 2);
      param_1 = (ulong *)0x0;
      if (uVar7 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR___ZdlPv_110352258)();
        auVar21._8_8_ = param_2;
        auVar21._0_8_ = uVar7;
        return auVar21;
      }
    }
    else {
      lVar12 = param_2 * 0x10 + uVar11 * -0x10;
      puVar8 = puVar2;
      do {
        uVar15 = *param_3;
        puVar8[1] = param_3[1];
        *puVar8 = uVar15;
        lVar12 = lVar12 + -0x10;
        puVar8 = puVar8 + 2;
      } while (lVar12 != 0);
      param_1[1] = (ulong)(puVar2 + uVar13 * 2);
    }
  }
  else if (param_2 < uVar11) {
    param_1[1] = uVar7 + param_2 * 0x10;
  }
  auVar16._8_8_ = param_2;
  auVar16._0_8_ = param_1;
  return auVar16;
}



/* Entry: 10a3281fc; end: 10a3282cb;  */

/* WARNING: Possible PIC construction at 0x00010a34ca28: Changing call to branch */

undefined1  [16] FUN_10a3281fc(ulong *param_1,ulong param_2)

{
  long lVar1;
  ulong *puVar2;
  ulong uVar3;
  ulong *puVar4;
  ulong *puVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  undefined1 **ppuVar9;
  undefined8 uVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  ulong uStack_a0;
  ulong *puStack_98;
  undefined1 *puStack_90;
  code *pcStack_88;
  undefined1 **ppuStack_80;
  code *pcStack_78;
  undefined1 auStack_70 [8];
  ulong uStack_68;
  ulong uStack_60;
  ulong uStack_58;
  ulong uStack_50;
  ulong *puStack_48;
  
  uVar3 = param_1[1];
  uVar7 = (long)(uVar3 - *param_1) >> 4;
  if (param_2 <= uVar7) {
    if (param_2 < uVar7) {
      uVar7 = *param_1 + param_2 * 0x10;
      while (uVar3 != uVar7) {
        uVar3 = uVar3 - 0x10;
        func_0x00010a052384();
      }
      param_1[1] = uVar7;
    }
    auVar11._8_8_ = param_2;
    auVar11._0_8_ = uVar3;
    return auVar11;
  }
  param_2 = param_2 - uVar7;
  puVar2 = (ulong *)auStack_70;
  ppuVar9 = (undefined1 **)&stack0xfffffffffffffff0;
  puVar5 = (ulong *)param_1[1];
  if ((ulong)((long)(param_1[2] - (long)puVar5) >> 4) < param_2) {
    lVar8 = (long)puVar5 - *param_1;
    uVar3 = param_2 + (lVar8 >> 4);
    if (uVar3 >> 0x3c == 0) {
      uVar6 = param_1[2] - *param_1;
      uVar7 = (long)uVar6 >> 3;
      if (uVar7 <= uVar3) {
        uVar7 = uVar3;
      }
      if (0x7fffffffffffffef < uVar6) {
        uVar7 = 0xfffffffffffffff;
      }
      puStack_48 = param_1;
      if (uVar7 == 0) {
        puVar5 = (ulong *)0x0;
      }
      else {
        puVar5 = param_1;
        FUN_10a34ca5c();
      }
      lVar8 = (long)puVar5 + lVar8;
      _bzero(lVar8,param_2 * 0x10);
      lVar1 = param_2 * 0x10;
      uVar3 = *param_1;
      param_2 = lVar8 - (param_1[1] - uVar3);
      _memcpy(param_2);
      uStack_58 = *param_1;
      *param_1 = param_2;
      param_1[1] = lVar8 + lVar1;
      uStack_50 = param_1[2];
      param_1[2] = (ulong)(puVar5 + uVar7 * 2);
      uStack_68 = uStack_58;
      uStack_60 = uStack_58;
      puVar5 = &uStack_68;
      uVar10 = 0x10a34ca2c;
    }
    else {
      uVar3 = param_2;
      FUN_10a34ca48();
      pcStack_78 = FUN_10a34ca48;
      puVar5 = (ulong *)&DAT_10f62a4d8;
      ppuStack_80 = ppuVar9;
      FUN_109ffde64();
      puVar2 = &uStack_a0;
      pcStack_88 = FUN_10a34ca5c;
      ppuVar9 = &puStack_90;
      uStack_a0 = param_2;
      puStack_98 = param_1;
      if (uVar3 >> 0x3c == 0) {
        lVar8 = uVar3 << 4;
        puStack_90 = (undefined1 *)&ppuStack_80;
        __Znwm(lVar8);
        auVar13._8_8_ = uVar3;
        auVar13._0_8_ = lVar8;
        return auVar13;
      }
      uVar10 = 0x10a34ca90;
      puStack_90 = (undefined1 *)&ppuStack_80;
      func_0x000109ffded8();
    }
    *(ulong *)((long)puVar2 + -0x20) = param_2;
    *(ulong **)((long)puVar2 + -0x18) = param_1;
    *(undefined1 ***)((long)puVar2 + -0x10) = ppuVar9;
    *(undefined8 *)((long)puVar2 + -8) = uVar10;
    uVar7 = puVar5[1];
    uVar6 = puVar5[2];
    while (uVar6 != uVar7) {
      puVar5[2] = uVar6 - 0x10;
      func_0x00010a052384();
      uVar6 = puVar5[2];
    }
    if (*puVar5 != 0) {
      __ZdlPv();
    }
    auVar14._8_8_ = uVar3;
    auVar14._0_8_ = puVar5;
    return auVar14;
  }
  lVar8 = 0;
  puVar4 = param_1;
  if (param_2 != 0) {
    lVar8 = param_2 * 0x10;
    puVar4 = puVar5;
    _bzero(puVar5,lVar8);
    puVar5 = puVar5 + param_2 * 2;
  }
  param_1[1] = (ulong)puVar5;
  auVar12._8_8_ = lVar8;
  auVar12._0_8_ = puVar4;
  return auVar12;
}



/* Entry: 10a3282cc; end: 10a3283af;  */

void FUN_10a3282cc(undefined ***param_1,undefined ***param_2,long param_3)

{
  undefined ***pppuVar1;
  ulong uVar2;
  undefined **unaff_x22;
  code **unaff_x23;
  code *pcStack_118;
  undefined **ppuStack_110;
  undefined ***pppuStack_108;
  undefined1 uStack_100;
  code *pcStack_d8;
  undefined **ppuStack_d0;
  undefined ***pppuStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  undefined **ppuStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  long lStack_58;
  
  if (param_2 == (undefined ***)0x0) {
    uVar2 = 0;
  }
  else {
    pppuVar1 = param_2;
    ___dynamic_cast(param_2,&PTR_DAT_110b9fe10,&PTR_DAT_110bd3290,0);
    if (pppuVar1 == (undefined ***)0x0) {
      pppuVar1 = param_2;
      ___dynamic_cast(param_2,&PTR_DAT_110b9fe10,&PTR_DAT_110bd31d8,0);
      uVar2 = (ulong)(pppuVar1 != (undefined ***)0x0);
    }
    else {
      uVar2 = 1;
    }
  }
  param_1[0x38] = (undefined **)((long)param_1[0x38] + uVar2);
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if ((param_2 != (undefined ***)0x0) &&
     ((*(char *)(param_2 + 1) != '\x01' || ((param_3 != 0 && ((*(byte *)(param_3 + 8) & 1) == 0)))))
     ) {
    uStack_60 = 0;
    uStack_68 = 0;
    uStack_70 = 0;
    uStack_78 = 0;
    uStack_80 = 0;
    uStack_88 = 0;
    unaff_x22 = &puStack_98;
    puStack_98 = &UNK_1053a6a3c;
    ppuStack_90 = &PTR_DAT_110ae9180;
    pppuVar1 = param_2;
    (*(code *)(*param_2)[5])();
    if (pppuVar1 != (undefined ***)0x0) {
      *(ushort *)((long)pppuVar1 + 0x59) =
           *(ushort *)((long)pppuVar1 + 0x59) & 0xff80 |
           *(ushort *)((long)pppuVar1 + 0x59) + 1 & 0x7f;
      uStack_c0 = CONCAT71(uStack_c0._1_7_,1);
      pcStack_d8 = FUN_10a1d0710;
      ppuStack_d0 = &PTR_FUN_110bad6c8;
      pppuStack_c8 = pppuVar1;
      func_0x00010a108320(&puStack_98,&pcStack_d8);
      FUN_10a044790(&pcStack_d8);
      (*(code *)*ppuStack_d0)(&ppuStack_d0);
    }
    uStack_a0 = 0;
    uStack_a8 = 0;
    uStack_b0 = 0;
    uStack_b8 = 0;
    uStack_c0 = 0;
    pppuStack_c8 = (undefined ***)0x0;
    unaff_x23 = &pcStack_d8;
    pcStack_d8 = (code *)&UNK_1053a6a3c;
    ppuStack_d0 = &PTR_DAT_110ae9180;
    pppuVar1 = param_2;
    (*(code *)(*param_2)[6])();
    if (pppuVar1 != (undefined ***)0x0) {
      *(ushort *)(pppuVar1 + 6) =
           *(ushort *)(pppuVar1 + 6) & 0xff80 | *(ushort *)(pppuVar1 + 6) + 1 & 0x7f;
      uStack_100 = 1;
      pcStack_118 = FUN_10a1d355c;
      ppuStack_110 = &PTR_FUN_110bad800;
      pppuStack_108 = pppuVar1;
      func_0x00010a108320(&pcStack_d8,&pcStack_118);
      FUN_10a044790(&pcStack_118);
      (*(code *)*ppuStack_110)(&ppuStack_110);
    }
    (*(code *)(*param_2)[4])(param_2);
    FUN_10a044790(&pcStack_d8);
    (*(code *)*ppuStack_d0)(&ppuStack_d0);
    param_2 = param_1;
    FUN_10a044790(&puStack_98);
    param_1 = &ppuStack_90;
    (*(code *)*ppuStack_90)();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  FUN_10a044790(&pcStack_d8);
  (*(code *)*ppuStack_d0)(unaff_x23 + 1);
  FUN_10a044790(&puStack_98);
  (*(code *)*ppuStack_90)(unaff_x22 + 1);
  __Unwind_Resume();
  (*(code *)(*param_1)[2])();
  if ((param_2 != (undefined ***)0x0) &&
     ((*(char *)(param_2 + 1) != '\x01' || ((param_3 != 0 && ((*(byte *)(param_3 + 8) & 1) == 0)))))
     ) {
    (*(code *)(*param_1)[0x24])(param_1,param_2,param_3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010a1001cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(*param_1)[4])(param_1);
  return;
}



/* Entry: 10a3283b0; end: 10a3283eb;  */

undefined8 * FUN_10a3283b0(undefined8 *param_1)

{
  undefined8 *puStack_28;
  
  *param_1 = &PTR_FUN_110bc5750;
  param_1[1] = &PTR_DAT_110bc5910;
  func_0x00010a34c8fc(param_1 + 0x33);
  func_0x00010a34c8fc(param_1 + 0x2e);
  *param_1 = &PTR_FUN_110bf1728;
  param_1[1] = &PTR_DAT_110bf18e8;
  puStack_28 = param_1 + 0x2a;
  FUN_10a577b90(&puStack_28);
  FUN_10a10a718(param_1 + 0x25);
  puStack_28 = param_1 + 0x22;
  FUN_10a577b90(&puStack_28);
  FUN_10a10a718(param_1 + 0x1d);
  FUN_10a10a718(param_1 + 0x18);
  func_0x00010a10a78c(param_1 + 0x11);
  func_0x00010a577e94(param_1 + 0xc);
  FUN_10a3f2240(param_1 + 7);
  func_0x00010a577e4c(param_1 + 2);
  return param_1;
}



/* Entry: 10a3283ec; end: 10a3285f3;  */

void FUN_10a3283ec(long *param_1,long param_2,long param_3,long *param_4)

{
  ulong *puVar1;
  code *pcVar2;
  uint uVar3;
  long *plVar4;
  long lVar6;
  undefined **ppuVar7;
  ulong uVar8;
  long lVar9;
  long *plStack_70;
  undefined **ppuStack_68;
  long *plVar5;
  
  plVar4 = param_1;
  (**(code **)(*param_1 + 0x200))(param_1,&PTR_DAT_110bc4910);
  if ((int)plVar4 != 0) {
    (**(code **)(*param_1 + 0x210))(param_1,&PTR_DAT_110bc4910);
    plVar4 = param_1;
    (**(code **)(*param_1 + 0x208))();
    if (param_2 != 0) {
      FUN_10a34cdc4(param_2,(long)((float)((ulong)plVar4 & 0xffffffff) / *(float *)(param_2 + 0x20))
                   );
    }
    if (param_4 != (long *)0x0) {
      plStack_70 = (long *)0xffffffffffffffff;
      ppuStack_68 = (undefined **)0xffffffffffffffff;
      FUN_10a3280d8(param_4,(ulong)plVar4 & 0xffffffff,&plStack_70);
    }
    if ((int)plVar4 != 0) {
      lVar9 = 0;
      uVar8 = 0;
      do {
        (**(code **)(*param_1 + 0x218))(param_1,uVar8);
        if (param_3 == 0) {
          uVar3 = 1;
        }
        else {
          plVar5 = param_1;
          (**(code **)(*param_1 + 0x58))(param_1,&PTR_DAT_110bc4930,1);
          uVar3 = (uint)plVar5;
        }
        plVar5 = param_1;
        ppuVar7 = &PTR_DAT_110bc5938;
        (**(code **)(*param_1 + 0x228))();
        plStack_70 = plVar5;
        ppuStack_68 = ppuVar7;
        if (param_2 != 0) {
          FUN_10a357b94(param_2,&plStack_70,&plStack_70);
        }
        if (param_3 != 0) {
          lVar6 = param_3;
          FUN_10a359e30(param_3,plStack_70,ppuStack_68,&plStack_70);
          *(uint *)(lVar6 + 0x20) = uVar3 ^ 1;
        }
        if (param_4 != (long *)0x0) {
          if ((ulong)(param_4[1] - *param_4 >> 4) <= uVar8) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x10a3285ac);
            (*pcVar2)();
          }
          puVar1 = (ulong *)(*param_4 + lVar9);
          puVar1[1] = (ulong)ppuStack_68;
          *puVar1 = (ulong)plStack_70;
        }
        (**(code **)(*param_1 + 0x220))(param_1);
        uVar8 = uVar8 + 1;
        lVar9 = lVar9 + 0x10;
      } while (((ulong)plVar4 & 0xffffffff) << 4 != lVar9);
    }
    (**(code **)(*param_1 + 0x220))(param_1);
  }
  return;
}



/* Entry: 10a3285f4; end: 10a328983;  */

void FUN_10a3285f4(undefined ***param_1,long *param_2)

{
  uint uVar1;
  undefined ***pppuVar2;
  undefined ***pppuVar3;
  undefined8 uVar4;
  undefined **ppuVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  char cVar8;
  bool bVar9;
  code *pcVar10;
  long *plVar11;
  long *plVar12;
  long *plVar13;
  undefined **ppuVar14;
  long lVar15;
  long lVar16;
  undefined ***pppuVar17;
  undefined8 *puVar18;
  byte unaff_w23;
  ulong unaff_x24;
  ulong uVar19;
  undefined **unaff_x25;
  long lVar20;
  long *unaff_x26;
  undefined **unaff_x27;
  undefined *puStack_130;
  long *plStack_128;
  undefined ***pppuStack_120;
  undefined **ppuStack_118;
  long *plStack_110;
  undefined **ppuStack_108;
  ulong uStack_100;
  undefined ***pppuStack_f8;
  long *plStack_f0;
  undefined ***pppuStack_e8;
  undefined **ppuStack_e0;
  long *plStack_d8;
  undefined1 *puStack_d0;
  code *pcStack_c8;
  undefined ***pppuStack_b8;
  undefined **ppuStack_b0;
  code *pcStack_a8;
  undefined **ppuStack_a0;
  long *plStack_98;
  undefined1 auStack_90 [24];
  undefined1 auStack_78 [16];
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x00010aa70acc();
  ppuStack_b0 = param_1[8];
  ppuVar5 = param_1[9];
  pppuVar2 = param_1 + 0x2f;
  pppuStack_b8 = param_1;
  (**(code **)(*param_2 + 0x210))(param_2,&PTR_DAT_110bc4950);
  plVar13 = param_2;
  (**(code **)(*param_2 + 0x208))();
  FUN_10a35a288(param_1 + 0x2c,(ulong)plVar13 & 0xffffffff);
  uVar19 = unaff_x24;
  if ((uint)plVar13 != 0) {
    uVar19 = 0;
    unaff_x25 = &PTR_DAT_110bc5938;
    do {
      (**(code **)(*param_2 + 0x218))(param_2,uVar19);
      unaff_x26 = param_2;
      unaff_x27 = unaff_x25;
      (**(code **)(*param_2 + 0x228))();
      pcStack_a8 = FUN_10a35a408;
      ppuStack_a0 = &PTR_FUN_110bc6588;
      plVar11 = (long *)0x38;
      __Znwm();
      *plVar11 = (long)(param_1 + 0x2c);
      plVar11[1] = (long)pppuVar2;
      *(int *)(plVar11 + 2) = (int)uVar19;
      plVar11[3] = (long)ppuStack_b0;
      plVar11[4] = (long)ppuVar5;
      plVar11[5] = (long)unaff_x26;
      plVar11[6] = (long)unaff_x27;
      plStack_98 = plVar11;
      FUN_10a1f46a0(param_2,&PTR_DAT_110bc5938,&pcStack_a8,0);
      (*(code *)*ppuStack_a0)(&ppuStack_a0);
      (**(code **)(*param_2 + 0x220))(param_2);
      uVar1 = (int)uVar19 + 1;
      uVar19 = (ulong)uVar1;
    } while ((uint)plVar13 != uVar1);
  }
  (**(code **)(*param_2 + 0x220))(param_2);
  plVar13 = param_2;
  (**(code **)(*param_2 + 0x200))(param_2,&PTR_DAT_110bc47b8);
  *(char *)(pppuStack_b8 + 0x37) = (char)plVar13;
  plVar13 = param_2;
  (**(code **)(*param_2 + 0x58))(param_2,&PTR_DAT_110bc47b8,0);
  *(char *)(pppuStack_b8 + 0x39) = (char)plVar13;
  plVar13 = param_2;
  (**(code **)(*param_2 + 0x58))(param_2,&PTR_DAT_110bc47d8,1);
  *(char *)((long)pppuStack_b8 + 0x1c9) = (char)plVar13;
  plVar13 = param_2;
  (**(code **)(*param_2 + 0x38))(param_2,&PTR_DAT_110bc4970,0);
  pppuVar17 = pppuStack_b8;
  pppuStack_b8[0x38] = (undefined **)(long)(int)plVar13;
  func_0x00010a359bfc(pppuStack_b8 + 0x24);
  pppuVar17[0x35] = pppuVar17[0x34];
  FUN_10a3283ec(param_2,pppuVar17 + 0x1f,pppuVar17 + 0x24,pppuVar17 + 0x34);
  (**(code **)(*param_2 + 0x210))(param_2,&PTR_DAT_110bc4910);
  plVar13 = param_2;
  (**(code **)(*param_2 + 0x208))();
  pppuVar3 = pppuStack_b8 + 0x29;
  ppuVar14 = (undefined **)((ulong)plVar13 & 0xffffffff);
  FUN_10a3281fc(pppuVar3);
  if ((uint)plVar13 != 0) {
    uVar19 = 0;
    pppuVar17 = &ppuStack_a0;
    unaff_x25 = &PTR_DAT_110bc5938;
    do {
      (**(code **)(*param_2 + 0x218))(param_2,uVar19);
      unaff_x26 = param_2;
      unaff_x27 = unaff_x25;
      (**(code **)(*param_2 + 0x228))();
      pcStack_a8 = FUN_10a35a798;
      ppuStack_a0 = &PTR_FUN_110bc65a0;
      plVar11 = (long *)0x38;
      __Znwm();
      *plVar11 = (long)pppuVar3;
      plVar11[1] = (long)pppuVar2;
      *(int *)(plVar11 + 2) = (int)uVar19;
      plVar11[3] = (long)ppuStack_b0;
      plVar11[4] = (long)ppuVar5;
      plVar11[5] = (long)unaff_x26;
      plVar11[6] = (long)unaff_x27;
      ppuVar14 = unaff_x25;
      plStack_98 = plVar11;
      FUN_10a1f46a0(param_2,&PTR_DAT_110bc5938,&pcStack_a8,0);
      (*(code *)*ppuStack_a0)(pppuVar17);
      (**(code **)(*param_2 + 0x220))(param_2);
      uVar1 = (int)uVar19 + 1;
      uVar19 = (ulong)uVar1;
    } while ((uint)plVar13 != uVar1);
  }
  plVar11 = param_2;
  (**(code **)(*param_2 + 0x220))();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    pppuVar2 = pppuStack_b8 + 0x1c;
    (**(code **)(*param_2 + 0x1d8))(&stack0xffffffffffffffb8);
    if ((unaff_w23 & 1) == 0) {
      FUN_109ffe064(auStack_90,&DAT_10f64fbc6,4);
      __ZNSt3__1plIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_12basic_stringIT_T0_T1_EEPKS6_RKS9_
                (auStack_78,&UNK_10f63b9fc,auStack_90);
      FUN_10a012db0(&stack0xffffffffffffffa0,auStack_78,&UNK_10f63ba05);
      FUN_10a0029c0(&stack0xffffffffffffffa0);
    }
    else {
      (*(code *)0x10a35a23c)(unaff_x24,pppuVar2);
      if ((unaff_w23 & 1) != 0) {
        _memcpy();
        return;
      }
    }
                    /* WARNING: Does not return */
    pcVar10 = (code *)SoftwareBreakpoint(1,0x10a0ff2fc);
    (*pcVar10)();
  }
  ___stack_chk_fail();
  (*(code *)**pppuVar17)(pppuVar17);
  plVar12 = plVar11;
  __Unwind_Resume();
  pcStack_c8 = FUN_10a328984;
  pppuStack_120 = pppuVar2;
  ppuStack_118 = unaff_x27;
  plStack_110 = unaff_x26;
  ppuStack_108 = unaff_x25;
  uStack_100 = uVar19;
  pppuStack_f8 = pppuVar3;
  plStack_f0 = plVar13;
  pppuStack_e8 = pppuVar17;
  ppuStack_e0 = ppuVar5;
  plStack_d8 = plVar11;
  puStack_d0 = &stack0xfffffffffffffff0;
  func_0x00010aa70b70();
  (**(code **)(*ppuVar14 + 0x70))(ppuVar14,&PTR_DAT_110bc47b8,(char)plVar12[0x39]);
  (**(code **)(*ppuVar14 + 0x70))
            (ppuVar14,&PTR_DAT_110bc47d8,*(undefined1 *)((long)plVar12 + 0x1c9));
  (**(code **)(*ppuVar14 + 0x40))(ppuVar14,&PTR_DAT_110bc4970,(int)plVar12[0x38]);
  (**(code **)(*ppuVar14 + 0x18))(ppuVar14,&PTR_DAT_110bc4950);
  puVar6 = (undefined8 *)plVar12[0x2d];
  for (puVar18 = (undefined8 *)plVar12[0x2c]; puVar18 != puVar6; puVar18 = puVar18 + 2) {
    plVar13 = (long *)puVar18[1];
    if (plVar13 != (long *)0x0) {
      __ZNSt3__119__shared_weak_count4lockEv();
      plStack_128 = plVar13;
      if (plVar13 != (long *)0x0) {
        puStack_130 = (undefined *)*puVar18;
        if (puStack_130 != (undefined *)0x0) {
          (**(code **)(*ppuVar14 + 0x10))(ppuVar14);
          FUN_10a329184(ppuVar14,&puStack_130);
          (**(code **)(*ppuVar14 + 0x20))(ppuVar14);
        }
        plVar11 = plVar13 + 1;
        do {
          lVar15 = *plVar11;
          cVar8 = '\x01';
          bVar9 = (bool)ExclusiveMonitorPass(plVar11,0x10);
          if (bVar9) {
            *plVar11 = lVar15 + -1;
            cVar8 = ExclusiveMonitorsStatus();
          }
        } while (cVar8 != '\0');
        if (lVar15 == 0) {
          (**(code **)(*plVar13 + 0x10))(plVar13);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar13);
        }
      }
    }
  }
  (**(code **)(*ppuVar14 + 0x20))(ppuVar14);
  (**(code **)(*ppuVar14 + 0x18))(ppuVar14,&PTR_DAT_110bc4910);
  lVar15 = plVar12[0x34];
  lVar16 = plVar12[0x35] - lVar15;
  if (lVar16 != 0) {
    lVar20 = 0;
    uVar19 = 0;
    do {
      if ((ulong)(lVar16 >> 4) <= uVar19) {
LAB_10a328c30:
                    /* WARNING: Does not return */
        pcVar10 = (code *)SoftwareBreakpoint(1,0x10a328c34);
        (*pcVar10)();
      }
      uVar4 = *(undefined8 *)(lVar15 + lVar20);
      uVar7 = ((undefined8 *)(lVar15 + lVar20))[1];
      (**(code **)(*ppuVar14 + 0x10))(ppuVar14);
      if (((char)plVar12[0x39] == '\x01') && ((*(byte *)(plVar12 + 0x37) & 1) != 0)) {
LAB_10a328b64:
        puStack_130 = &UNK_10f64efef;
        plStack_128 = (long *)0x0;
        (**(code **)(*ppuVar14 + 0x100))(ppuVar14,&PTR_DAT_110bc5938,uVar4,uVar7,&puStack_130);
      }
      else {
        lVar15 = plVar12[0x29];
        if ((ulong)(plVar12[0x2a] - lVar15 >> 4) <= uVar19) goto LAB_10a328c30;
        if (*(long *)(lVar15 + lVar20) == 0) goto LAB_10a328b64;
        FUN_10a329184(ppuVar14,lVar15 + lVar20);
      }
      plVar13 = plVar12 + 0x24;
      func_0x00010a35a8e0(plVar13,uVar4,uVar7);
      (**(code **)(*ppuVar14 + 0x70))(ppuVar14,&PTR_DAT_110bc4930,(int)plVar13[4] == 0);
      (**(code **)(*ppuVar14 + 0x20))(ppuVar14);
      uVar19 = uVar19 + 1;
      lVar15 = plVar12[0x34];
      lVar16 = plVar12[0x35] - lVar15;
      lVar20 = lVar20 + 0x10;
    } while (uVar19 != lVar16 >> 4);
  }
  (**(code **)(*ppuVar14 + 0x20))(ppuVar14);
                    /* WARNING: Could not recover jumptable at 0x00010a328c2c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*ppuVar14 + 0x28))
            (ppuVar14,&PTR_DAT_110bc5958,plVar12[0x1c],plVar12[0x1d] - plVar12[0x1c]);
  return;
}



/* Entry: 10a328984; end: 10a328cb3;  */

void FUN_10a328984(long param_1,long *param_2)

{
  long *plVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  char cVar5;
  bool bVar6;
  code *pcVar7;
  long *plVar8;
  long lVar9;
  long lVar10;
  undefined8 *puVar11;
  long lVar12;
  ulong uVar13;
  undefined *puStack_70;
  long *plStack_68;
  
  func_0x00010aa70b70();
  (**(code **)(*param_2 + 0x70))(param_2,&PTR_DAT_110bc47b8,*(undefined1 *)(param_1 + 0x1c8));
  (**(code **)(*param_2 + 0x70))(param_2,&PTR_DAT_110bc47d8,*(undefined1 *)(param_1 + 0x1c9));
  (**(code **)(*param_2 + 0x40))(param_2,&PTR_DAT_110bc4970,*(undefined4 *)(param_1 + 0x1c0));
  (**(code **)(*param_2 + 0x18))(param_2,&PTR_DAT_110bc4950);
  puVar3 = *(undefined8 **)(param_1 + 0x168);
  for (puVar11 = *(undefined8 **)(param_1 + 0x160); puVar11 != puVar3; puVar11 = puVar11 + 2) {
    plVar8 = (long *)puVar11[1];
    if (plVar8 != (long *)0x0) {
      __ZNSt3__119__shared_weak_count4lockEv();
      plStack_68 = plVar8;
      if (plVar8 != (long *)0x0) {
        puStack_70 = (undefined *)*puVar11;
        if (puStack_70 != (undefined *)0x0) {
          (**(code **)(*param_2 + 0x10))(param_2);
          FUN_10a329184(param_2,&puStack_70);
          (**(code **)(*param_2 + 0x20))(param_2);
        }
        plVar1 = plVar8 + 1;
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
          (**(code **)(*plVar8 + 0x10))(plVar8);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar8);
        }
      }
    }
  }
  (**(code **)(*param_2 + 0x20))(param_2);
  (**(code **)(*param_2 + 0x18))(param_2,&PTR_DAT_110bc4910);
  lVar9 = *(long *)(param_1 + 0x1a0);
  lVar10 = *(long *)(param_1 + 0x1a8) - lVar9;
  if (lVar10 != 0) {
    lVar12 = 0;
    uVar13 = 0;
    do {
      if ((ulong)(lVar10 >> 4) <= uVar13) {
LAB_10a328c30:
                    /* WARNING: Does not return */
        pcVar7 = (code *)SoftwareBreakpoint(1,0x10a328c34);
        (*pcVar7)();
      }
      uVar2 = *(undefined8 *)(lVar9 + lVar12);
      uVar4 = ((undefined8 *)(lVar9 + lVar12))[1];
      (**(code **)(*param_2 + 0x10))(param_2);
      if ((*(char *)(param_1 + 0x1c8) == '\x01') && ((*(byte *)(param_1 + 0x1b8) & 1) != 0)) {
LAB_10a328b64:
        puStack_70 = &UNK_10f64efef;
        plStack_68 = (long *)0x0;
        (**(code **)(*param_2 + 0x100))(param_2,&PTR_DAT_110bc5938,uVar2,uVar4,&puStack_70);
      }
      else {
        lVar9 = *(long *)(param_1 + 0x148);
        if ((ulong)(*(long *)(param_1 + 0x150) - lVar9 >> 4) <= uVar13) goto LAB_10a328c30;
        if (*(long *)(lVar9 + lVar12) == 0) goto LAB_10a328b64;
        FUN_10a329184(param_2,lVar9 + lVar12);
      }
      lVar9 = param_1 + 0x120;
      func_0x00010a35a8e0(lVar9,uVar2,uVar4);
      (**(code **)(*param_2 + 0x70))(param_2,&PTR_DAT_110bc4930,*(int *)(lVar9 + 0x20) == 0);
      (**(code **)(*param_2 + 0x20))(param_2);
      uVar13 = uVar13 + 1;
      lVar9 = *(long *)(param_1 + 0x1a0);
      lVar10 = *(long *)(param_1 + 0x1a8) - lVar9;
      lVar12 = lVar12 + 0x10;
    } while (uVar13 != lVar10 >> 4);
  }
  (**(code **)(*param_2 + 0x20))(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010a328c2c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_2 + 0x28))
            (param_2,&PTR_DAT_110bc5958,*(long *)(param_1 + 0xe0),
             *(long *)(param_1 + 0xe8) - *(long *)(param_1 + 0xe0));
  return;
}



/* Entry: 10a328cb4; end: 10a329003;  */

void FUN_10a328cb4(long param_1,undefined8 param_2)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  char cVar4;
  bool bVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  undefined8 uVar9;
  long lVar10;
  undefined *puVar11;
  undefined ***pppuVar12;
  undefined ***pppuVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  long *plVar16;
  undefined **ppuVar17;
  long lVar18;
  undefined8 unaff_x19;
  undefined8 uVar19;
  long lStack_320;
  long *plStack_318;
  undefined8 uStack_310;
  undefined8 uStack_308;
  long *plStack_300;
  undefined ***pppuStack_2f8;
  undefined8 uStack_2f0;
  undefined8 uStack_2e8;
  undefined1 *puStack_2e0;
  code *pcStack_2d8;
  long lStack_2c8;
  int iStack_2bc;
  undefined1 auStack_2b8 [8];
  long *plStack_2b0;
  long lStack_2a8;
  long *plStack_2a0;
  long *plStack_298;
  long *plStack_290;
  undefined **ppuStack_280;
  undefined **ppuStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined4 uStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined4 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined4 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined4 uStack_1d8;
  undefined8 uStack_1d0;
  undefined1 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined4 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined4 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined4 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined4 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined4 uStack_f0;
  long lStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined4 uStack_c8;
  undefined8 uStack_c0;
  long lStack_b8;
  undefined ***pppuStack_b0;
  char cStack_a8;
  long **pplStack_a0;
  undefined8 uStack_98;
  undefined *puStack_90;
  undefined4 uStack_88;
  int iStack_84;
  undefined *puStack_80;
  undefined8 uStack_78;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar19 = *(undefined8 *)(*(long *)(param_1 + 0x50) + 0x858);
  FUN_10a3c2fa8(&lStack_b8);
  lStack_2c8 = lStack_b8;
  ppuVar17 = (undefined **)0x0;
  uVar9 = uVar19;
  FUN_10a3c1f6c(uVar19,lStack_b8,param_1 + 0xf8,0,param_2);
  iStack_2bc = (int)uVar9;
  uStack_1d0 = *(undefined8 *)(param_1 + 0x50);
  uStack_268 = 0;
  uStack_270 = 0;
  uStack_258 = 0;
  uStack_260 = 0;
  uStack_250 = 0x3f800000;
  uStack_240 = 0;
  uStack_248 = 0;
  uStack_230 = 0;
  uStack_238 = 0;
  uStack_218 = 0;
  uStack_220 = 0;
  uStack_208 = 0;
  uStack_210 = 0;
  uStack_228 = 0x3f800000;
  uStack_200 = 0x3f800000;
  uStack_1f0 = 0;
  uStack_1f8 = 0;
  uStack_1e0 = 0;
  uStack_1e8 = 0;
  uStack_1d8 = 0x3f800000;
  uStack_1c8 = 0;
  uStack_1b8 = 0;
  uStack_1c0 = 0;
  uStack_1a8 = 0;
  uStack_1b0 = 0;
  uStack_180 = 0;
  uStack_188 = 0;
  uStack_190 = 0;
  uStack_198 = 0;
  uStack_1a0 = 0x3f800000;
  uStack_178 = 0x3f800000;
  uStack_168 = 0;
  uStack_170 = 0;
  uStack_158 = 0;
  uStack_160 = 0;
  uStack_148 = 0;
  uStack_150 = 0;
  uStack_140 = 0;
  uStack_138 = 0x3f800000;
  uStack_128 = 0;
  uStack_120 = 0;
  uStack_130 = 0;
  ppuStack_280 = &PTR_FUN_110bc5750;
  ppuStack_278 = &PTR_DAT_110bc5910;
  uStack_118 = 0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  uStack_f0 = 0x3f800000;
  uStack_e0 = 0;
  lStack_e8 = 0;
  uStack_d0 = 0;
  uStack_d8 = 0;
  uStack_c8 = 0x3f800000;
  uStack_c0 = 0;
  FUN_10a3c3568(&plStack_298,uVar19);
  if (plStack_298 != plStack_290) {
    param_2 = 0xd6500b41;
    unaff_x19 = 0xc0eb86b;
    plVar16 = plStack_298;
    do {
      lVar18 = *plVar16;
      plVar3 = (long *)plVar16[1];
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
      lVar10 = param_1 + 0x120;
      lStack_2a8 = lVar18;
      plStack_2a0 = plVar3;
      func_0x00010a35a8e0(lVar10,*(undefined8 *)(lVar18 + 0x40),*(undefined8 *)(lVar18 + 0x48));
      if ((lVar10 != 0) && (*(int *)(lVar10 + 0x20) == 0)) {
        pplStack_a0 = (long **)&UNK_10f64efef;
        uStack_98 = 0;
        puVar11 = &UNK_10f64efef;
        uVar6 = 0;
        func_0x00010a107b84();
        uStack_88 = uVar6;
        puStack_80 = (undefined *)0x0;
        uStack_78 = 0;
        iVar7 = (int)&puStack_80;
        puStack_90 = puVar11;
        func_0x00010a107cac();
        iVar8 = (int)&puStack_80;
        func_0x00010a107d20();
        iStack_84 = iVar7 * -0x29aff4bf + iVar8 * 0xc0eb86b;
        FUN_10a03d13c(auStack_2b8,lVar18);
        puStack_80 = &UNK_10f64efef;
        uStack_78 = 0;
        ppuVar17 = &puStack_80;
        FUN_10a329004(&ppuStack_280,&pplStack_a0,auStack_2b8,ppuVar17);
        plVar1 = plStack_2b0;
        plVar3 = plStack_2a0;
        if (plStack_2b0 != (long *)0x0) {
          plVar2 = plStack_2b0 + 1;
          do {
            lVar18 = *plVar2;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
            if (bVar5) {
              *plVar2 = lVar18 + -1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (lVar18 == 0) {
            (**(code **)(*plStack_2b0 + 0x10))(plStack_2b0);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar1);
            plVar3 = plStack_2a0;
          }
        }
      }
      if (plVar3 != (long *)0x0) {
        plVar1 = plVar3 + 1;
        do {
          lVar18 = *plVar1;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar5) {
            *plVar1 = lVar18 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (lVar18 == 0) {
          (**(code **)(*plVar3 + 0x10))(plVar3);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar3);
        }
      }
      plVar16 = plVar16 + 2;
    } while (plVar16 != plStack_290);
  }
  pplStack_a0 = &plStack_298;
  FUN_10a34cfd0(&pplStack_a0);
  puVar14 = &uStack_270;
  plVar16 = &lStack_e8;
  FUN_10a327f30(param_1,puVar14);
  pppuVar12 = &ppuStack_280;
  FUN_10a3283b0();
  if (iStack_2bc != 0) {
    pppuVar12 = *(undefined ****)(lStack_2c8 + 8);
    FUN_10a57120c();
  }
  if (cStack_a8 == '\x01') {
    pppuVar12 = pppuStack_b0;
    __ZNSt3__15mutex6unlockEv();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  FUN_10a3283b0(&ppuStack_280);
  if (iStack_2bc != 0) {
    FUN_10a57120c(*(undefined8 *)(lStack_2c8 + 8));
  }
  if (cStack_a8 == '\x01') {
    __ZNSt3__15mutex6unlockEv(pppuStack_b0);
  }
  pppuVar13 = pppuVar12;
  __Unwind_Resume();
  pcStack_2d8 = FUN_10a329004;
  lVar18 = *plVar16;
  if (lVar18 != 0) {
    uStack_308 = *(undefined8 *)(lVar18 + 0x48);
    uStack_310 = *(undefined8 *)(lVar18 + 0x40);
    puVar15 = &uStack_310;
    plStack_300 = &lStack_e8;
    pppuStack_2f8 = pppuVar12;
    uStack_2f0 = param_2;
    uStack_2e8 = unaff_x19;
    puStack_2e0 = &stack0xfffffffffffffff0;
    FUN_10a34cbb8(pppuVar13 + 0x2e,puVar15,&uStack_310);
    if (((ulong)puVar15 & 1) != 0) {
      plStack_318 = (long *)plVar16[1];
      lStack_320 = *plVar16;
      if (plVar16[1] != 0) {
        plVar3 = (long *)(plVar16[1] + 8);
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar3,0x10);
          if (bVar5) {
            *plVar3 = *plVar3 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
      }
      FUN_10a5717e8(pppuVar13,puVar14,&lStack_320,ppuVar17);
      plVar3 = plStack_318;
      if (plStack_318 != (long *)0x0) {
        plVar1 = plStack_318 + 1;
        do {
          lVar18 = *plVar1;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar5) {
            *plVar1 = lVar18 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (lVar18 == 0) {
          (**(code **)(*plStack_318 + 0x10))(plStack_318);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar3);
        }
      }
      lVar18 = *plVar16;
      if ((lVar18 != 0) &&
         (___dynamic_cast(lVar18,&PTR_DAT_110bf32c0,&PTR_DAT_110c42c58,0), lVar18 != 0)) {
        iVar7 = *(int *)(pppuVar13 + 0x2d);
        *(int *)(pppuVar13 + 0x2d) = iVar7 + 1;
        if (iVar7 == 0) {
          uStack_308 = *(undefined8 *)(lVar18 + 0x48);
          uStack_310 = *(undefined8 *)(lVar18 + 0x40);
          FUN_10a34cbb8(pppuVar13 + 0x33,&uStack_310,&uStack_310);
        }
        lVar10 = lVar18;
        ___dynamic_cast(lVar18,&PTR_DAT_110c42c58,&PTR_DAT_110bc7b48,0);
        if (lVar10 == 0) {
          FUN_10a0fff24(pppuVar13,lVar18,0);
        }
        *(int *)(pppuVar13 + 0x2d) = *(int *)(pppuVar13 + 0x2d) + -1;
      }
    }
  }
  return;
}



/* Entry: 10a329004; end: 10a329183;  */

void FUN_10a329004(long param_1,undefined8 param_2,long *param_3,undefined8 param_4)

{
  long *plVar1;
  long *plVar2;
  int iVar3;
  char cVar4;
  bool bVar5;
  long lVar6;
  undefined8 *puVar7;
  long lVar8;
  long lStack_50;
  long *plStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  lVar8 = *param_3;
  if (lVar8 != 0) {
    uStack_38 = *(undefined8 *)(lVar8 + 0x48);
    uStack_40 = *(undefined8 *)(lVar8 + 0x40);
    puVar7 = &uStack_40;
    FUN_10a34cbb8(param_1 + 0x170,puVar7,&uStack_40);
    if (((ulong)puVar7 & 1) != 0) {
      plStack_48 = (long *)param_3[1];
      lStack_50 = *param_3;
      if (param_3[1] != 0) {
        plVar1 = (long *)(param_3[1] + 8);
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar5) {
            *plVar1 = *plVar1 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
      }
      FUN_10a5717e8(param_1,param_2,&lStack_50,param_4);
      plVar1 = plStack_48;
      if (plStack_48 != (long *)0x0) {
        plVar2 = plStack_48 + 1;
        do {
          lVar8 = *plVar2;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
          if (bVar5) {
            *plVar2 = lVar8 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (lVar8 == 0) {
          (**(code **)(*plStack_48 + 0x10))(plStack_48);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar1);
        }
      }
      lVar8 = *param_3;
      if ((lVar8 != 0) &&
         (___dynamic_cast(lVar8,&PTR_DAT_110bf32c0,&PTR_DAT_110c42c58,0), lVar8 != 0)) {
        iVar3 = *(int *)(param_1 + 0x168);
        *(int *)(param_1 + 0x168) = iVar3 + 1;
        if (iVar3 == 0) {
          uStack_38 = *(undefined8 *)(lVar8 + 0x48);
          uStack_40 = *(undefined8 *)(lVar8 + 0x40);
          FUN_10a34cbb8(param_1 + 0x198,&uStack_40,&uStack_40);
        }
        lVar6 = lVar8;
        ___dynamic_cast(lVar8,&PTR_DAT_110c42c58,&PTR_DAT_110bc7b48,0);
        if (lVar6 == 0) {
          FUN_10a0fff24(param_1,lVar8,0);
        }
        *(int *)(param_1 + 0x168) = *(int *)(param_1 + 0x168) + -1;
      }
    }
  }
  return;
}



/* Entry: 10a329184; end: 10a329267;  */

void FUN_10a329184(long *param_1,long *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  long lStack_40;
  long *plStack_38;
  long *plStack_30;
  long *plStack_28;
  
  plVar4 = (long *)*param_2;
  if (plVar4 == (long *)0x0) {
    lStack_40 = 0;
    plVar4 = (long *)&UNK_10f650bb8;
    plVar5 = (long *)0x13;
  }
  else {
    plVar5 = param_2;
    (**(code **)(*plVar4 + 0x38))();
    lStack_40 = *param_2;
  }
  plStack_38 = (long *)param_2[1];
  if (plStack_38 != (long *)0x0) {
    plVar1 = plStack_38 + 1;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  plStack_30 = plVar4;
  plStack_28 = plVar5;
  (**(code **)(*param_1 + 0x108))(param_1,&PTR_DAT_110bc5938,&lStack_40,&plStack_30);
  plVar4 = plStack_38;
  if (plStack_38 != (long *)0x0) {
    plVar5 = plStack_38 + 1;
    do {
      lVar6 = *plVar5;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar3) {
        *plVar5 = lVar6 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar6 == 0) {
      (**(code **)(*plStack_38 + 0x10))(plStack_38);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
    }
  }
  return;
}



/* Entry: 10a329268; end: 10a329a57;  */

void FUN_10a329268(undefined8 *param_1,long *param_2,undefined8 param_3)

{
  long lVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  undefined8 *puVar5;
  ulong uVar6;
  undefined8 uVar7;
  ulong uVar8;
  long *plVar9;
  long *plVar10;
  long *plVar11;
  ulong uVar12;
  long *plVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  long *plStack_a0;
  long *plStack_98;
  long lStack_90;
  long *plStack_88;
  long lStack_80;
  long *plStack_78;
  long lStack_70;
  long *plStack_68;
  long *plStack_60;
  long *plStack_58;
  
  lVar16 = param_2[10];
  plVar9 = param_2;
  func_0x00010a0fda30();
  if (lVar16 == 0) {
    plVar10 = (long *)0x1e8;
    __Znwm();
    plVar10[1] = 0;
    plVar10[2] = 0;
    *plVar10 = (long)&PTR_DAT_110bc6548;
    plVar13 = plVar10 + 3;
    FUN_10aa7093c(plVar13,0,plVar9,param_3);
    plVar10[3] = (long)&PTR_FUN_110bc4808;
    plVar10[5] = (long)&PTR_DAT_110bc48a8;
    plVar10[10] = (long)&PTR_FUN_110bc4900;
    plVar10[0x25] = 0;
    plVar10[0x20] = 0;
    plVar10[0x1f] = 0;
    plVar10[0x22] = 0;
    plVar10[0x21] = 0;
    plVar10[0x24] = 0;
    plVar10[0x23] = 0;
    *(undefined4 *)(plVar10 + 0x26) = 0x3f800000;
    plVar10[0x28] = 0;
    plVar10[0x27] = 0;
    plVar10[0x2a] = 0;
    plVar10[0x29] = 0;
    *(undefined4 *)(plVar10 + 0x2b) = 0x3f800000;
    plVar10[0x2d] = 0;
    plVar10[0x2c] = 0;
    plVar10[0x2f] = 0;
    plVar10[0x2e] = 0;
    plVar10[0x31] = 0;
    plVar10[0x30] = 0;
    plVar10[0x33] = 0;
    plVar10[0x32] = 0;
    plVar10[0x35] = 0;
    plVar10[0x34] = 0;
    *(undefined4 *)(plVar10 + 0x36) = 0x3f800000;
    plVar10[0x3b] = 0;
    *(undefined1 *)(plVar10 + 0x3c) = 0;
    plVar10[0x37] = 0;
    plVar10[0x38] = 0;
    *(undefined1 *)(plVar10 + 0x3a) = 0;
    plVar10[0x39] = 0;
    *(undefined1 *)((long)plVar10 + 0x1e1) = 1;
    plStack_60 = plVar13;
    plStack_58 = plVar10;
    FUN_10a3599b8(&plStack_60,plVar10 + 8,plVar13);
    FUN_10a3597bc(&plStack_a0,&plStack_60);
    if (plStack_58 != (long *)0x0) {
      plVar9 = plStack_58 + 1;
      do {
        lVar16 = *plVar9;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
        if (bVar3) {
          *plVar9 = lVar16 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
        plVar13 = plStack_58;
      } while (cVar2 != '\0');
      goto LAB_10a3295a0;
    }
  }
  else {
    lVar17 = *(long *)(lVar16 + 0x858);
    plVar9 = *(long **)(lVar16 + 0x860);
    if (plVar9 != (long *)0x0) {
      plVar13 = plVar9 + 1;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar13,0x10);
        if (bVar3) {
          *plVar13 = *plVar13 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    puVar5 = (undefined8 *)0x1d0;
    lStack_90 = lVar17;
    plStack_88 = plVar9;
    __Znwm();
    FUN_10aa7093c();
    *puVar5 = &PTR_FUN_110bc4808;
    puVar5[2] = &PTR_DAT_110bc48a8;
    puVar5[7] = &PTR_FUN_110bc4900;
    puVar5[0x1d] = 0;
    puVar5[0x1c] = 0;
    puVar5[0x1f] = 0;
    puVar5[0x1e] = 0;
    puVar5[0x21] = 0;
    puVar5[0x20] = 0;
    puVar5[0x22] = 0;
    *(undefined4 *)(puVar5 + 0x23) = 0x3f800000;
    puVar5[0x25] = 0;
    puVar5[0x24] = 0;
    puVar5[0x27] = 0;
    puVar5[0x26] = 0;
    *(undefined4 *)(puVar5 + 0x28) = 0x3f800000;
    puVar5[0x2a] = 0;
    puVar5[0x29] = 0;
    puVar5[0x2c] = 0;
    puVar5[0x2b] = 0;
    puVar5[0x2e] = 0;
    puVar5[0x2d] = 0;
    puVar5[0x30] = 0;
    puVar5[0x2f] = 0;
    puVar5[0x32] = 0;
    puVar5[0x31] = 0;
    *(undefined4 *)(puVar5 + 0x33) = 0x3f800000;
    puVar5[0x38] = 0;
    *(undefined1 *)(puVar5 + 0x39) = 0;
    puVar5[0x34] = 0;
    puVar5[0x35] = 0;
    *(undefined1 *)(puVar5 + 0x37) = 0;
    puVar5[0x36] = 0;
    *(undefined1 *)((long)puVar5 + 0x1c9) = 1;
    lStack_80 = lVar17;
    plStack_78 = plVar9;
    if (plVar9 != (long *)0x0) {
      plVar13 = plVar9 + 1;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar13,0x10);
        if (bVar3) {
          *plVar13 = *plVar13 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      plVar13 = plVar9 + 2;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar13,0x10);
        if (bVar3) {
          *plVar13 = *plVar13 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar13,0x10);
        if (bVar3) {
          *plVar13 = *plVar13 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar9);
    }
    lStack_70 = lVar17;
    plStack_68 = plVar9;
    FUN_10a359920(&plStack_60,puVar5,&lStack_70);
    FUN_10a3597bc(&plStack_a0,&plStack_60);
    plVar9 = plStack_58;
    if (plStack_58 != (long *)0x0) {
      plVar13 = plStack_58 + 1;
      do {
        lVar16 = *plVar13;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar13,0x10);
        if (bVar3) {
          *plVar13 = lVar16 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar16 == 0) {
        (**(code **)(*plStack_58 + 0x10))(plStack_58);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar9);
      }
    }
    if (plStack_68 != (long *)0x0) {
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
    plVar9 = plStack_78;
    if (plStack_78 != (long *)0x0) {
      plVar13 = plStack_78 + 1;
      do {
        lVar16 = *plVar13;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar13,0x10);
        if (bVar3) {
          *plVar13 = lVar16 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar16 == 0) {
        (**(code **)(*plStack_78 + 0x10))(plStack_78);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar9);
      }
    }
    if ((lStack_90 != 0) && (plStack_a0 != (long *)0x0)) {
      plStack_60 = plStack_a0;
      plStack_58 = plStack_98;
      if (plStack_98 != (long *)0x0) {
        plVar9 = plStack_98 + 1;
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
          if (bVar3) {
            *plVar9 = *plVar9 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      FUN_10aa88c30(lStack_90,&plStack_60);
      plVar9 = plStack_58;
      if (plStack_58 != (long *)0x0) {
        plVar13 = plStack_58 + 1;
        do {
          lVar16 = *plVar13;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar13,0x10);
          if (bVar3) {
            *plVar13 = lVar16 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar16 == 0) {
          (**(code **)(*plStack_58 + 0x10))(plStack_58);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar9);
        }
      }
    }
    if (plStack_88 != (long *)0x0) {
      plVar9 = plStack_88 + 1;
      do {
        lVar16 = *plVar9;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
        if (bVar3) {
          *plVar9 = lVar16 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
        plVar13 = plStack_88;
      } while (cVar2 != '\0');
LAB_10a3295a0:
      if (lVar16 == 0) {
        (**(code **)(*plVar13 + 0x10))(plVar13);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar13);
      }
    }
  }
  plVar9 = plStack_a0;
  if (plStack_a0 != param_2) {
    plVar13 = plStack_a0 + 0x1c;
    lVar15 = *plVar13;
    lVar16 = param_2[0x1c];
    lVar17 = param_2[0x1d];
    uVar12 = lVar17 - lVar16;
    uVar6 = plStack_a0[0x1e];
    if (uVar6 - lVar15 < uVar12) {
      if (lVar15 != 0) {
        plStack_a0[0x1d] = lVar15;
        __ZdlPv(lVar15);
        uVar6 = 0;
        *plVar13 = 0;
        plVar9[0x1d] = 0;
        plVar9[0x1e] = 0;
      }
      if ((long)uVar12 < 0) {
        FUN_10a0cd644();
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x10a329a1c);
        (*pcVar4)();
      }
      uVar8 = uVar6 * 2;
      if (uVar8 < uVar12 || uVar8 - uVar12 == 0) {
        uVar8 = uVar12;
      }
      if (0x3ffffffffffffffe < uVar6) {
        uVar8 = 0x7fffffffffffffff;
      }
      FUN_10a103344(plVar13,uVar8);
      lVar14 = plVar9[0x1d];
      if (lVar17 != lVar16) {
        _memmove(lVar14,lVar16,uVar12);
      }
      lVar14 = lVar14 + uVar12;
    }
    else {
      lVar14 = plStack_a0[0x1d];
      if ((ulong)(lVar14 - lVar15) < uVar12) {
        lVar1 = lVar16 + (lVar14 - lVar15);
        if (lVar14 != lVar15) {
          _memmove(lVar15,lVar16);
          lVar14 = plVar9[0x1d];
        }
        lVar17 = lVar17 - lVar1;
        if (lVar17 != 0) {
          _memmove(lVar14,lVar1,lVar17);
        }
        lVar14 = lVar14 + lVar17;
      }
      else {
        if (lVar17 != lVar16) {
          _memmove(lVar15,lVar16,uVar12);
        }
        lVar14 = lVar15 + uVar12;
      }
    }
    plVar9[0x1d] = lVar14;
    FUN_10a34d040(plVar9 + 0x29,param_2[0x29],param_2[0x2a],param_2[0x2a] - param_2[0x29] >> 4);
    FUN_10a34d2ec(plVar9 + 0x2c,param_2[0x2c],param_2[0x2d],param_2[0x2d] - param_2[0x2c] >> 4);
    *(int *)(plVar9 + 0x33) = (int)param_2[0x33];
    plVar13 = (long *)param_2[0x31];
    lVar16 = plVar9[0x30];
    if (lVar16 != 0) {
      lVar17 = 0;
      do {
        *(undefined8 *)(plVar9[0x2f] + lVar17 * 8) = 0;
        lVar17 = lVar17 + 1;
      } while (lVar16 != lVar17);
      plVar10 = (long *)plVar9[0x31];
      plVar9[0x31] = 0;
      plVar9[0x32] = 0;
      while (plVar10 != (long *)0x0) {
        if (plVar13 == (long *)0x0) goto LAB_10a329908;
        uVar7 = plVar13[2];
        plVar10[3] = plVar13[3];
        plVar10[2] = uVar7;
        uVar7 = plVar13[4];
        plVar10[5] = plVar13[5];
        plVar10[4] = uVar7;
        lVar16 = *plVar10;
        plVar10[1] = plVar10[3];
        plVar11 = plVar9 + 0x2f;
        FUN_10a35a980(plVar11,plVar10[3],plVar10 + 2);
        FUN_10a35ac9c(plVar9 + 0x2f,plVar10,plVar11);
        plVar13 = (long *)*plVar13;
        plVar10 = (long *)lVar16;
      }
    }
    for (; plVar13 != (undefined8 *)0x0; plVar13 = (long *)*plVar13) {
      puVar5 = (undefined8 *)0x30;
      __Znwm();
      *puVar5 = 0;
      uVar19 = plVar13[2];
      uVar18 = plVar13[5];
      uVar7 = plVar13[4];
      puVar5[3] = plVar13[3];
      puVar5[2] = uVar19;
      puVar5[5] = uVar18;
      puVar5[4] = uVar7;
      puVar5[1] = puVar5[3];
      plVar10 = plVar9 + 0x2f;
      FUN_10a35a980(plVar10,puVar5[3],puVar5 + 2);
      FUN_10a35ac9c(plVar9 + 0x2f,puVar5,plVar10);
    }
  }
  goto LAB_10a3297ac;
LAB_10a329924:
  do {
    plVar9 = (long *)*plVar11;
    __ZdlPv(plVar11);
    plVar11 = plVar9;
    plVar13 = plStack_a0;
  } while (plVar9 != (long *)0x0);
  goto LAB_10a3298ac;
LAB_10a329908:
  do {
    plVar13 = (long *)*plVar10;
    __ZdlPv(plVar10);
    plVar10 = plVar13;
    plVar9 = plStack_a0;
  } while (plVar13 != (long *)0x0);
LAB_10a3297ac:
  if (plVar9 != param_2) {
    *(int *)(plVar9 + 0x23) = (int)param_2[0x23];
    FUN_10a35ad6c(plVar9 + 0x1f,param_2[0x21],0);
    plVar9 = plStack_a0;
  }
  plVar13 = plVar9;
  if (plVar9 != param_2) {
    *(int *)(plVar9 + 0x28) = (int)param_2[0x28];
    plVar10 = (long *)param_2[0x26];
    lVar16 = plVar9[0x25];
    if (lVar16 != 0) {
      lVar17 = 0;
      do {
        *(undefined8 *)(plVar9[0x24] + lVar17 * 8) = 0;
        lVar17 = lVar17 + 1;
      } while (lVar16 != lVar17);
      plVar11 = (long *)plVar9[0x26];
      plVar9[0x26] = 0;
      plVar9[0x27] = 0;
      while (plVar11 != (long *)0x0) {
        if (plVar10 == (long *)0x0) goto LAB_10a329924;
        uVar7 = plVar10[2];
        plVar11[3] = plVar10[3];
        plVar11[2] = uVar7;
        *(undefined4 *)(plVar11 + 4) = *(undefined4 *)(plVar10 + 4);
        lVar16 = *plVar11;
        plVar11[1] = plVar11[3];
        plVar13 = plVar9 + 0x24;
        FUN_10a35b32c(plVar13,plVar11[3],plVar11 + 2);
        FUN_10a35b648(plVar9 + 0x24,plVar11,plVar13);
        plVar10 = (long *)*plVar10;
        plVar11 = (long *)lVar16;
      }
    }
    for (; plVar13 = plStack_a0, plVar10 != (undefined8 *)0x0; plVar10 = (long *)*plVar10) {
      puVar5 = (undefined8 *)0x28;
      __Znwm();
      *puVar5 = 0;
      uVar7 = plVar10[4];
      uVar18 = plVar10[2];
      puVar5[3] = plVar10[3];
      puVar5[2] = uVar18;
      puVar5[4] = uVar7;
      puVar5[1] = puVar5[3];
      plVar13 = plVar9 + 0x24;
      FUN_10a35b32c(plVar13,puVar5[3],puVar5 + 2);
      FUN_10a35b648(plVar9 + 0x24,puVar5,plVar13);
    }
  }
LAB_10a3298ac:
  if (plVar13 != param_2) {
    FUN_10a187bbc(plVar13 + 0x34,param_2[0x34],param_2[0x35],param_2[0x35] - param_2[0x34] >> 4);
    plVar13 = plStack_a0;
  }
  *(char *)(plVar13 + 0x37) = (char)param_2[0x37];
  plVar13[0x38] = param_2[0x38];
  *(short *)(plVar13 + 0x39) = (short)param_2[0x39];
  *param_1 = plVar13;
  param_1[1] = plStack_98;
  return;
}



/* Entry: 10a329a58; end: 10a329b1b;  */

void FUN_10a329a58(undefined8 *param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined8 uStack_40;
  long *plStack_38;
  
  lVar4 = *(long *)(param_2 + 0x30);
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
    lVar4 = *(long *)(lVar4 + 8);
    __ZNSt3__119__shared_weak_count14__release_weakEv();
    if (lVar4 != -1) {
      func_0x00010a0d77bc(&uStack_40,param_2);
      param_1[1] = plStack_38;
      *param_1 = uStack_40;
      if (plStack_38 == (long *)0x0) {
        return;
      }
      plVar1 = plStack_38 + 2;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = *plVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
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
      if (lVar4 != 0) {
        return;
      }
      (**(code **)(*plStack_38 + 0x10))(plStack_38);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_38);
      return;
    }
  }
  *param_1 = 0;
  param_1[1] = 0;
  return;
}



/* Entry: 10a329b1c; end: 10a329b4f;  */

long FUN_10a329b1c(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  if (*(long *)(param_1 + 0x40) != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  FUN_10a35b840(param_1 + 0x10);
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



/* Entry: 10a329b50; end: 10a329c23;  */

undefined *** FUN_10a329b50(undefined ***param_1,int param_2)

{
  long lVar1;
  undefined ***pppuVar2;
  int iVar3;
  char cVar4;
  bool bVar5;
  undefined ***pppuVar6;
  undefined *puVar7;
  long *extraout_x8;
  undefined **ppuVar8;
  long lVar9;
  long lStack_b0;
  undefined ***pppuStack_a8;
  code *pcStack_68;
  undefined **ppuStack_60;
  undefined *puStack_58;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  iVar3 = *(int *)(param_1 + 3);
  pppuVar6 = param_1;
  __ZSt19uncaught_exceptionsv();
  if (iVar3 < (int)pppuVar6) {
    ppuVar8 = param_1[1];
    func_0x000107c2c4d8(**param_1 + 8,&UNK_10f651456,0x4d);
    puVar7 = *param_1[2];
    puStack_58 = **param_1;
    pcStack_68 = FUN_10a35bae8;
    ppuStack_60 = &PTR_DAT_110bc6680;
    FUN_10a3e0e30(ppuVar8[10],puVar7,&pcStack_68);
    param_2 = (int)puVar7;
    pppuVar6 = &ppuStack_60;
    (*(code *)*ppuStack_60)(pppuVar6);
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return param_1;
  }
  ___stack_chk_fail();
  if (param_2 == 0) {
    __Unwind_Resume();
  }
  func_0x000104bd46a0();
  FUN_10a329d10(&lStack_b0);
  *(undefined1 *)(lStack_b0 + 8) = 1;
  lVar1 = lStack_b0 + 400;
  for (lVar9 = *(long *)(lStack_b0 + 0x198); lVar9 != lVar1; lVar9 = *(long *)(lVar9 + 8)) {
    pppuVar6 = *(undefined ****)(lVar9 + 0x10);
    FUN_10a3e7798(pppuVar6,1);
  }
  *extraout_x8 = lStack_b0;
  extraout_x8[1] = (long)pppuStack_a8;
  if (pppuStack_a8 != (undefined ***)0x0) {
    pppuVar2 = pppuStack_a8 + 2;
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(pppuVar2,0x10);
      if (bVar5) {
        *pppuVar2 = (undefined **)((long)*pppuVar2 + 1);
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    pppuVar2 = pppuStack_a8 + 1;
    do {
      ppuVar8 = *pppuVar2;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(pppuVar2,0x10);
      if (bVar5) {
        *pppuVar2 = (undefined **)((long)ppuVar8 + -1);
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (ppuVar8 == (undefined **)0x0) {
      (*(code *)(*pppuStack_a8)[2])(pppuStack_a8);
      __ZNSt3__119__shared_weak_count14__release_weakEv(pppuStack_a8);
      pppuVar6 = pppuStack_a8;
    }
  }
  return pppuVar6;
}


