/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 109685fa4; end: 109686067;  */

void FUN_109685fa4(undefined8 param_1)

{
  uint uVar1;
  int *piVar2;
  undefined8 *puVar3;
  int **ppiVar4;
  ulong uVar5;
  int *piVar6;
  undefined8 *puVar7;
  long lVar8;
  int *piStack_48;
  int *piStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_30 = 0x2800000028;
  piStack_40 = (int *)0x0;
  uStack_38 = 0;
  piStack_48 = (int *)0x0;
  FUN_109522b28(&piStack_48,&uStack_30,&lStack_28,2);
  ppiVar4 = &piStack_48;
  puVar3 = (undefined8 *)0x0;
  FUN_109680a78(param_1,0,ppiVar4,FUN_1096860bc);
  piVar2 = piStack_48;
  if (piStack_48 != (int *)0x0) {
    piStack_40 = piStack_48;
    __ZdlPv();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return;
  }
  ___stack_chk_fail();
  if (piStack_48 != (int *)0x0) {
    piStack_40 = piStack_48;
    __ZdlPv();
  }
  __Unwind_Resume();
  if (*piVar2 == 0) {
    uVar5 = 1;
  }
  else {
    lVar8 = (long)*piVar2 << 2;
    uVar5 = 1;
    piVar6 = *(int **)(piVar2 + 2);
    do {
      uVar1 = *piVar6 * (int)uVar5;
      uVar5 = (ulong)uVar1;
      lVar8 = lVar8 + -4;
      piVar6 = piVar6 + 1;
    } while (lVar8 != 0);
    if ((int)uVar1 < 1) {
      return;
    }
  }
  puVar7 = *(undefined8 **)(piVar2 + 4);
  do {
    *puVar7 = CONCAT44((float)((ulong)*puVar3 >> 0x20) - (float)((ulong)*ppiVar4 >> 0x20),
                       (float)*puVar3 - SUB84(*ppiVar4,0));
    uVar5 = uVar5 - 1;
    puVar3 = puVar3 + 1;
    ppiVar4 = ppiVar4 + 1;
    puVar7 = puVar7 + 1;
  } while (uVar5 != 0);
  return;
}



/* Entry: 109686068; end: 1096860bb;  */

void FUN_109686068(int *param_1,undefined8 *param_2,undefined8 *param_3)

{
  uint uVar1;
  ulong uVar2;
  int *piVar3;
  undefined8 *puVar4;
  long lVar5;
  
  if (*param_1 == 0) {
    uVar2 = 1;
  }
  else {
    lVar5 = (long)*param_1 << 2;
    uVar2 = 1;
    piVar3 = *(int **)(param_1 + 2);
    do {
      uVar1 = *piVar3 * (int)uVar2;
      uVar2 = (ulong)uVar1;
      lVar5 = lVar5 + -4;
      piVar3 = piVar3 + 1;
    } while (lVar5 != 0);
    if ((int)uVar1 < 1) {
      return;
    }
  }
  puVar4 = *(undefined8 **)(param_1 + 4);
  do {
    *puVar4 = CONCAT44((float)((ulong)*param_2 >> 0x20) - (float)((ulong)*param_3 >> 0x20),
                       (float)*param_2 - (float)*param_3);
    uVar2 = uVar2 - 1;
    param_2 = param_2 + 1;
    param_3 = param_3 + 1;
    puVar4 = puVar4 + 1;
  } while (uVar2 != 0);
  return;
}



/* Entry: 1096860bc; end: 1096860fb;  */

void FUN_1096860bc(undefined8 param_1,long *param_2)

{
  long lVar1;
  undefined4 auStack_28 [2];
  long lStack_20;
  undefined8 uStack_18;
  
  lVar1 = *param_2;
  uStack_18 = *(undefined8 *)(lVar1 + 8);
  lStack_20 = *(long *)(lVar1 + 0x10);
  auStack_28[0] = (undefined4)((ulong)(*(long *)(lVar1 + 0x18) - lStack_20) >> 2);
  FUN_109686068(auStack_28,uStack_18,*(undefined8 *)(param_2[1] + 8));
  return;
}



/* Entry: 1096860fc; end: 109686113;  */

void FUN_1096860fc(long *param_1,uint *param_2)

{
  uint uVar1;
  uint uVar2;
  uint *puVar3;
  uint *puVar4;
  uint *puVar5;
  long lVar6;
  long lVar7;
  uint uVar8;
  uint uVar9;
  
  puVar4 = *(uint **)(param_2 + 2);
  uVar9 = *param_2;
  puVar5 = *(uint **)(param_2 + 6);
  uVar8 = param_2[4];
  puVar3 = puVar4;
  uVar1 = uVar8;
  if ((int)uVar9 < (int)uVar8) {
    do {
      uVar8 = uVar9;
      uVar9 = uVar1;
      puVar4 = puVar5;
      puVar5 = puVar3;
      puVar3 = puVar4;
      uVar1 = uVar8;
    } while ((int)uVar9 < (int)uVar8);
  }
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  FUN_1092d1c20(param_1,puVar4,(long)puVar4 + ((long)((ulong)uVar9 << 0x20) >> 0x1e),
                (long)(int)uVar9);
  if (0 < (int)uVar8) {
    lVar6 = *param_1;
    lVar7 = (long)(int)(uVar9 - uVar8);
    do {
      uVar2 = *(uint *)(lVar6 + lVar7 * 4);
      uVar1 = *puVar5;
      uVar8 = uVar2 ^ uVar1 ^ 1;
      if (uVar1 != 1 && uVar2 != 1) {
        uVar8 = uVar1 & uVar2;
      }
      *(uint *)(lVar6 + lVar7 * 4) = uVar8;
      lVar7 = lVar7 + 1;
      puVar5 = puVar5 + 1;
    } while (lVar7 < (int)uVar9);
  }
  return;
}



/* Entry: 109686114; end: 10968616b;  */

void FUN_109686114(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  
  uStack_20 = param_1[2];
  uStack_28 = param_1[1];
  uStack_30 = *param_1;
  uStack_40 = param_2[2];
  uStack_48 = param_2[1];
  uStack_50 = *param_2;
  uStack_60 = param_3[2];
  uStack_68 = param_3[1];
  uStack_70 = *param_3;
  FUN_109686238(&uStack_30,&uStack_50,&uStack_70);
  return;
}



/* Entry: 10968616c; end: 109686237;  */

void FUN_10968616c(undefined8 param_1)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int *piVar5;
  long *plVar6;
  int **ppiVar7;
  float *pfVar8;
  long lVar9;
  long lVar10;
  float *pfVar11;
  float *pfVar12;
  long lVar13;
  ulong uVar14;
  long lStack_120;
  long lStack_118;
  long lStack_110;
  float *pfStack_100;
  long lStack_f8;
  long lStack_f0;
  long lStack_e0;
  float *pfStack_c8;
  long lStack_c0;
  long lStack_b8;
  long lStack_a8;
  long lStack_a0;
  int *piStack_50;
  int *piStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined4 uStack_30;
  undefined1 auStack_2c [4];
  long lStack_28;
  
  ppiVar7 = &piStack_50;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_38 = 0x1800000018;
  uStack_30 = 0x18;
  piStack_48 = (int *)0x0;
  uStack_40 = 0;
  piStack_50 = (int *)0x0;
  FUN_109522b28(&piStack_50,&uStack_38,auStack_2c,3);
  plVar6 = (long *)0x0;
  FUN_109680a78(param_1,0,&piStack_50,FUN_1096864b4);
  piVar5 = piStack_50;
  if (piStack_50 != (int *)0x0) {
    piStack_48 = piStack_50;
    __ZdlPv();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return;
  }
  ___stack_chk_fail();
  if (piStack_50 != (int *)0x0) {
    piStack_48 = piStack_50;
    __ZdlPv();
  }
  __Unwind_Resume();
  lStack_f0 = plVar6[2];
  lStack_f8 = plVar6[1];
  pfStack_100 = (float *)*plVar6;
  FUN_109684e4c(&pfStack_c8,&pfStack_100);
  lStack_110 = (long)ppiVar7[2];
  lStack_118 = (long)ppiVar7[1];
  lStack_120 = (long)*ppiVar7;
  FUN_109684e4c(&pfStack_100,&lStack_120);
  FUN_10925b8c4(&lStack_120,(long)*piVar5 + -1);
  if (*piVar5 == 0) {
    lVar10 = 1;
  }
  else {
    lVar10 = (long)*(int *)(*(long *)(piVar5 + 2) + (long)*piVar5 * 4 + -4);
  }
  pfVar8 = *(float **)(piVar5 + 4);
  lVar9 = lStack_120 + -4;
  pfVar11 = pfStack_c8;
  pfVar12 = pfStack_100;
  while( true ) {
    *pfVar8 = -(pfVar11[2] * pfVar12[1]) + pfVar12[2] * pfVar11[1];
    pfVar8[1] = -(*pfVar11 * pfVar12[2]) + *pfVar12 * pfVar11[2];
    pfVar8[2] = -(pfVar11[1] * *pfVar12) + pfVar12[1] * *pfVar11;
    if ((int)((ulong)(lStack_118 - lStack_120) >> 2) < 1) break;
    lVar13 = *(long *)(piVar5 + 2);
    uVar14 = (ulong)(lStack_118 - lStack_120) >> 2 & 0x7fffffff;
    while (iVar2 = *(int *)(lVar9 + uVar14 * 4) + 1, *(int *)(lVar13 + -4 + uVar14 * 4) <= iVar2) {
      *(undefined4 *)(lVar9 + uVar14 * 4) = 0;
      bVar1 = uVar14 < 2;
      uVar14 = uVar14 - 1;
      if (bVar1) goto LAB_10968642c;
    }
    *(int *)(lVar9 + uVar14 * 4) = iVar2;
    if ((long)uVar14 < 1) goto LAB_10968642c;
    if (lStack_c0 != lStack_b8) {
      uVar3 = (((int)((ulong)(lStack_b8 - lStack_c0) >> 2) + -1) - *piVar5) + (int)uVar14;
      uVar4 = uVar3;
      if (0x7fffffff < uVar3) {
        uVar4 = 0xffffffff;
      }
      iVar2 = *(int *)(lStack_a8 + 4 + (long)(int)uVar4 * 4);
      pfVar11 = pfVar11 + -(long)iVar2;
      pfStack_c8 = pfVar11;
      if ((-1 < (int)uVar3) && (*(int *)(lStack_a8 + (ulong)uVar4 * 4) != iVar2)) {
        pfVar11 = pfVar11 + *(int *)(lStack_c0 + (ulong)uVar4 * 4);
        pfStack_c8 = pfVar11;
      }
    }
    if (lStack_f8 != lStack_f0) {
      uVar3 = (((int)((ulong)(lStack_f0 - lStack_f8) >> 2) + -1) - *piVar5) + (int)uVar14;
      uVar4 = uVar3;
      if (0x7fffffff < uVar3) {
        uVar4 = 0xffffffff;
      }
      iVar2 = *(int *)(lStack_e0 + 4 + (long)(int)uVar4 * 4);
      pfVar12 = pfVar12 + -(long)iVar2;
      pfStack_100 = pfVar12;
      if ((-1 < (int)uVar3) && (*(int *)(lStack_e0 + (ulong)uVar4 * 4) != iVar2)) {
        pfVar12 = pfVar12 + *(int *)(lStack_f8 + (ulong)uVar4 * 4);
        pfStack_100 = pfVar12;
      }
    }
    pfVar8 = pfVar8 + lVar10;
  }
  if (lStack_120 != 0) {
LAB_10968642c:
    lStack_118 = lStack_120;
    __ZdlPv();
  }
  if (lStack_e0 != 0) {
    __ZdlPv(lStack_e0);
  }
  if (lStack_f8 != 0) {
    lStack_f0 = lStack_f8;
    __ZdlPv();
  }
  if (lStack_a8 != 0) {
    lStack_a0 = lStack_a8;
    __ZdlPv();
  }
  if (lStack_c0 != 0) {
    lStack_b8 = lStack_c0;
    __ZdlPv();
  }
  return;
}



/* Entry: 109686238; end: 1096864b3;  */

void FUN_109686238(int *param_1,long *param_2,long *param_3)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  float *pfVar5;
  long lVar6;
  long lVar7;
  float *pfVar8;
  float *pfVar9;
  long lVar10;
  ulong uVar11;
  long lStack_d0;
  long lStack_c8;
  long lStack_c0;
  float *pfStack_b0;
  long lStack_a8;
  long lStack_a0;
  long lStack_90;
  float *pfStack_78;
  long lStack_70;
  long lStack_68;
  long lStack_58;
  long lStack_50;
  
  lStack_a0 = param_2[2];
  lStack_a8 = param_2[1];
  pfStack_b0 = (float *)*param_2;
  FUN_109684e4c(&pfStack_78,&pfStack_b0);
  lStack_c0 = param_3[2];
  lStack_c8 = param_3[1];
  lStack_d0 = *param_3;
  FUN_109684e4c(&pfStack_b0,&lStack_d0);
  FUN_10925b8c4(&lStack_d0,(long)*param_1 + -1);
  if (*param_1 == 0) {
    lVar7 = 1;
  }
  else {
    lVar7 = (long)*(int *)(*(long *)(param_1 + 2) + (long)*param_1 * 4 + -4);
  }
  pfVar5 = *(float **)(param_1 + 4);
  lVar6 = lStack_d0 + -4;
  pfVar8 = pfStack_78;
  pfVar9 = pfStack_b0;
  while( true ) {
    *pfVar5 = -(pfVar8[2] * pfVar9[1]) + pfVar9[2] * pfVar8[1];
    pfVar5[1] = -(*pfVar8 * pfVar9[2]) + *pfVar9 * pfVar8[2];
    pfVar5[2] = -(pfVar8[1] * *pfVar9) + pfVar9[1] * *pfVar8;
    if ((int)((ulong)(lStack_c8 - lStack_d0) >> 2) < 1) break;
    lVar10 = *(long *)(param_1 + 2);
    uVar11 = (ulong)(lStack_c8 - lStack_d0) >> 2 & 0x7fffffff;
    while (iVar2 = *(int *)(lVar6 + uVar11 * 4) + 1, *(int *)(lVar10 + -4 + uVar11 * 4) <= iVar2) {
      *(undefined4 *)(lVar6 + uVar11 * 4) = 0;
      bVar1 = uVar11 < 2;
      uVar11 = uVar11 - 1;
      if (bVar1) goto LAB_10968642c;
    }
    *(int *)(lVar6 + uVar11 * 4) = iVar2;
    if ((long)uVar11 < 1) goto LAB_10968642c;
    if (lStack_70 != lStack_68) {
      uVar3 = (((int)((ulong)(lStack_68 - lStack_70) >> 2) + -1) - *param_1) + (int)uVar11;
      uVar4 = uVar3;
      if (0x7fffffff < uVar3) {
        uVar4 = 0xffffffff;
      }
      iVar2 = *(int *)(lStack_58 + 4 + (long)(int)uVar4 * 4);
      pfVar8 = pfVar8 + -(long)iVar2;
      pfStack_78 = pfVar8;
      if ((-1 < (int)uVar3) && (*(int *)(lStack_58 + (ulong)uVar4 * 4) != iVar2)) {
        pfVar8 = pfVar8 + *(int *)(lStack_70 + (ulong)uVar4 * 4);
        pfStack_78 = pfVar8;
      }
    }
    if (lStack_a8 != lStack_a0) {
      uVar3 = (((int)((ulong)(lStack_a0 - lStack_a8) >> 2) + -1) - *param_1) + (int)uVar11;
      uVar4 = uVar3;
      if (0x7fffffff < uVar3) {
        uVar4 = 0xffffffff;
      }
      iVar2 = *(int *)(lStack_90 + 4 + (long)(int)uVar4 * 4);
      pfVar9 = pfVar9 + -(long)iVar2;
      pfStack_b0 = pfVar9;
      if ((-1 < (int)uVar3) && (*(int *)(lStack_90 + (ulong)uVar4 * 4) != iVar2)) {
        pfVar9 = pfVar9 + *(int *)(lStack_a8 + (ulong)uVar4 * 4);
        pfStack_b0 = pfVar9;
      }
    }
    pfVar5 = pfVar5 + lVar7;
  }
  if (lStack_d0 != 0) {
LAB_10968642c:
    lStack_c8 = lStack_d0;
    __ZdlPv();
  }
  if (lStack_90 != 0) {
    __ZdlPv(lStack_90);
  }
  if (lStack_a8 != 0) {
    lStack_a0 = lStack_a8;
    __ZdlPv();
  }
  if (lStack_58 != 0) {
    lStack_50 = lStack_58;
    __ZdlPv();
  }
  if (lStack_70 != 0) {
    lStack_68 = lStack_70;
    __ZdlPv();
  }
  return;
}



/* Entry: 1096864b4; end: 10968652b;  */

void FUN_1096864b4(undefined8 param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined4 auStack_58 [2];
  long lStack_50;
  undefined8 uStack_48;
  undefined4 auStack_40 [2];
  long lStack_38;
  undefined8 uStack_30;
  undefined4 auStack_28 [2];
  long lStack_20;
  undefined8 uStack_18;
  
  lVar1 = *param_2;
  lVar2 = param_2[1];
  lVar3 = param_2[2];
  uStack_18 = *(undefined8 *)(lVar1 + 8);
  lStack_20 = *(long *)(lVar1 + 0x10);
  uStack_30 = *(undefined8 *)(lVar2 + 8);
  lStack_38 = *(long *)(lVar2 + 0x10);
  uStack_48 = *(undefined8 *)(lVar3 + 8);
  lStack_50 = *(long *)(lVar3 + 0x10);
  auStack_28[0] = (undefined4)((ulong)(*(long *)(lVar1 + 0x18) - lStack_20) >> 2);
  auStack_40[0] = (undefined4)((ulong)(*(long *)(lVar2 + 0x18) - lStack_38) >> 2);
  auStack_58[0] = (undefined4)((ulong)(*(long *)(lVar3 + 0x18) - lStack_50) >> 2);
  FUN_109686238(auStack_28,auStack_40,auStack_58);
  return;
}



/* Entry: 10968652c; end: 109686577;  */

void FUN_10968652c(void)

{
  int *piVar1;
  int *piVar2;
  int **ppiVar3;
  code *pcVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 *puStack_60;
  code *pcStack_58;
  int *piStack_50;
  int *piStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined4 uStack_30;
  undefined1 auStack_2c [4];
  long lStack_28;
  
  FUN_10968098c(&UNK_10dfdaaa3,FUN_109686578);
  FUN_1096865e8(&UNK_10dfdaaa3,FUN_109686590);
  ppiVar3 = &piStack_50;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_38 = 0x2800000028;
  uStack_30 = 0x28;
  piStack_48 = (int *)0x0;
  uStack_40 = 0;
  piStack_50 = (int *)0x0;
  FUN_109522b28(&piStack_50,&uStack_38,auStack_2c,3);
  piVar2 = (int *)0x0;
  FUN_109680a78(&UNK_10dfdaaa3,0,&piStack_50,FUN_109686c54);
  piVar1 = piStack_50;
  if (piStack_50 != (int *)0x0) {
    piStack_48 = piStack_50;
    __ZdlPv();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return;
  }
  ___stack_chk_fail();
  if (piStack_50 != (int *)0x0) {
    piStack_48 = piStack_50;
    __ZdlPv();
  }
  __Unwind_Resume();
  if (*piVar1 != 0) {
    if ((*piVar2 == 0) || (*(int *)(*(long *)(piVar2 + 2) + (long)*piVar2 * 4 + -4) == 1)) {
      if ((*(int *)ppiVar3 == 0) ||
         (*(int *)(*(long *)((long)ppiVar3 + 8) + (long)*(int *)ppiVar3 * 4 + -4) == 1)) {
        pcVar4 = FUN_109686b14;
      }
      else {
        pcVar4 = (code *)0x109686b60;
      }
    }
    else if ((*(int *)ppiVar3 == 0) ||
            (*(int *)(*(long *)((long)ppiVar3 + 8) + (long)*(int *)ppiVar3 * 4 + -4) == 1)) {
      pcVar4 = (code *)0x109686bb4;
    }
    else {
      pcVar4 = (code *)0x109686c00;
    }
    pcStack_58 = FUN_1096869f0;
    uStack_70 = *(undefined8 *)(piVar1 + 4);
    uStack_78 = *(undefined8 *)(piVar1 + 2);
    uStack_80 = *(undefined8 *)piVar1;
    uStack_90 = *(undefined8 *)(piVar2 + 4);
    uStack_98 = *(undefined8 *)(piVar2 + 2);
    uStack_a0 = *(undefined8 *)piVar2;
    uStack_b0 = *(undefined8 *)((long)ppiVar3 + 0x10);
    uStack_b8 = *(undefined8 *)((long)ppiVar3 + 8);
    uStack_c0 = *ppiVar3;
    puStack_60 = &stack0xfffffffffffffff0;
    FUN_10968528c(&uStack_80,&uStack_a0,&uStack_c0,pcVar4);
    return;
  }
  fVar5 = **(float **)((long)ppiVar3 + 0x10);
  fVar6 = (*(float **)((long)ppiVar3 + 0x10))[1];
  fVar7 = 1.0 / (fVar6 * fVar6 + fVar5 * fVar5);
  fVar8 = (float)**(undefined8 **)(piVar2 + 4);
  fVar9 = (float)((ulong)**(undefined8 **)(piVar2 + 4) >> 0x20);
  **(undefined8 **)(piVar1 + 4) =
       CONCAT44((-fVar8 * fVar6 + fVar9 * fVar5) * fVar7,(fVar9 * fVar6 + fVar8 * fVar5) * fVar7);
  return;
}



/* Entry: 109686578; end: 10968658f;  */

void FUN_109686578(long *param_1,uint *param_2)

{
  uint uVar1;
  uint uVar2;
  uint *puVar3;
  uint *puVar4;
  uint *puVar5;
  long lVar6;
  long lVar7;
  uint uVar8;
  uint uVar9;
  
  puVar4 = *(uint **)(param_2 + 2);
  uVar9 = *param_2;
  puVar5 = *(uint **)(param_2 + 6);
  uVar8 = param_2[4];
  puVar3 = puVar4;
  uVar1 = uVar8;
  if ((int)uVar9 < (int)uVar8) {
    do {
      uVar8 = uVar9;
      uVar9 = uVar1;
      puVar4 = puVar5;
      puVar5 = puVar3;
      puVar3 = puVar4;
      uVar1 = uVar8;
    } while ((int)uVar9 < (int)uVar8);
  }
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  FUN_1092d1c20(param_1,puVar4,(long)puVar4 + ((long)((ulong)uVar9 << 0x20) >> 0x1e),
                (long)(int)uVar9);
  if (0 < (int)uVar8) {
    lVar6 = *param_1;
    lVar7 = (long)(int)(uVar9 - uVar8);
    do {
      uVar2 = *(uint *)(lVar6 + lVar7 * 4);
      uVar1 = *puVar5;
      uVar8 = uVar2 ^ uVar1 ^ 1;
      if (uVar1 != 1 && uVar2 != 1) {
        uVar8 = uVar1 & uVar2;
      }
      *(uint *)(lVar6 + lVar7 * 4) = uVar8;
      lVar7 = lVar7 + 1;
      puVar5 = puVar5 + 1;
    } while (lVar7 < (int)uVar9);
  }
  return;
}



/* Entry: 109686590; end: 1096865e7;  */

void FUN_109686590(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  
  uStack_20 = param_1[2];
  uStack_28 = param_1[1];
  uStack_30 = *param_1;
  uStack_40 = param_2[2];
  uStack_48 = param_2[1];
  uStack_50 = *param_2;
  uStack_60 = param_3[2];
  uStack_68 = param_3[1];
  uStack_70 = *param_3;
  FUN_1096866b4(&uStack_30,&uStack_50,&uStack_70);
  return;
}



/* Entry: 1096865e8; end: 1096866b3;  */

void FUN_1096865e8(undefined8 param_1)

{
  int *piVar1;
  int *piVar2;
  int **ppiVar3;
  code *pcVar4;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 *puStack_60;
  code *pcStack_58;
  int *piStack_50;
  int *piStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined4 uStack_30;
  undefined1 auStack_2c [4];
  long lStack_28;
  
  ppiVar3 = &piStack_50;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_38 = 0x1800000018;
  uStack_30 = 0x18;
  piStack_48 = (int *)0x0;
  uStack_40 = 0;
  piStack_50 = (int *)0x0;
  FUN_109522b28(&piStack_50,&uStack_38,auStack_2c,3);
  piVar2 = (int *)0x0;
  FUN_109680a78(param_1,0,&piStack_50,FUN_109686854);
  piVar1 = piStack_50;
  if (piStack_50 != (int *)0x0) {
    piStack_48 = piStack_50;
    __ZdlPv();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return;
  }
  ___stack_chk_fail();
  if (piStack_50 != (int *)0x0) {
    piStack_48 = piStack_50;
    __ZdlPv();
  }
  __Unwind_Resume();
  if (*piVar1 != 0) {
    if ((*piVar2 == 0) || (*(int *)(*(long *)(piVar2 + 2) + (long)*piVar2 * 4 + -4) == 1)) {
      if ((*(int *)ppiVar3 == 0) ||
         (*(int *)(*(long *)((long)ppiVar3 + 8) + (long)*(int *)ppiVar3 * 4 + -4) == 1)) {
        pcVar4 = FUN_1096867b4;
      }
      else {
        pcVar4 = (code *)0x1096867dc;
      }
    }
    else if ((*(int *)ppiVar3 == 0) ||
            (*(int *)(*(long *)((long)ppiVar3 + 8) + (long)*(int *)ppiVar3 * 4 + -4) == 1)) {
      pcVar4 = (code *)0x109686804;
    }
    else {
      pcVar4 = (code *)0x10968682c;
    }
    pcStack_58 = FUN_1096866b4;
    uStack_70 = *(undefined8 *)(piVar1 + 4);
    uStack_78 = *(undefined8 *)(piVar1 + 2);
    uStack_80 = *(undefined8 *)piVar1;
    uStack_90 = *(undefined8 *)(piVar2 + 4);
    uStack_98 = *(undefined8 *)(piVar2 + 2);
    uStack_a0 = *(undefined8 *)piVar2;
    uStack_b0 = *(undefined8 *)((long)ppiVar3 + 0x10);
    uStack_b8 = *(undefined8 *)((long)ppiVar3 + 8);
    uStack_c0 = *ppiVar3;
    puStack_60 = &stack0xfffffffffffffff0;
    FUN_109684bac(&uStack_80,&uStack_a0,&uStack_c0,pcVar4);
    return;
  }
  **(float **)(piVar1 + 4) = **(float **)(piVar2 + 4) / **(float **)((long)ppiVar3 + 0x10);
  return;
}



/* Entry: 1096866b4; end: 1096867b3;  */

void FUN_1096866b4(int *param_1,int *param_2,int *param_3)

{
  code *pcVar1;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  
  if (*param_1 != 0) {
    if ((*param_2 == 0) || (*(int *)(*(long *)(param_2 + 2) + (long)*param_2 * 4 + -4) == 1)) {
      if ((*param_3 == 0) || (*(int *)(*(long *)(param_3 + 2) + (long)*param_3 * 4 + -4) == 1)) {
        pcVar1 = FUN_1096867b4;
      }
      else {
        pcVar1 = (code *)0x1096867dc;
      }
    }
    else if ((*param_3 == 0) || (*(int *)(*(long *)(param_3 + 2) + (long)*param_3 * 4 + -4) == 1)) {
      pcVar1 = (code *)0x109686804;
    }
    else {
      pcVar1 = (code *)0x10968682c;
    }
    uStack_20 = *(undefined8 *)(param_1 + 4);
    uStack_28 = *(undefined8 *)(param_1 + 2);
    uStack_30 = *(undefined8 *)param_1;
    uStack_40 = *(undefined8 *)(param_2 + 4);
    uStack_48 = *(undefined8 *)(param_2 + 2);
    uStack_50 = *(undefined8 *)param_2;
    uStack_60 = *(undefined8 *)(param_3 + 4);
    uStack_68 = *(undefined8 *)(param_3 + 2);
    uStack_70 = *(undefined8 *)param_3;
    FUN_109684bac(&uStack_30,&uStack_50,&uStack_70,pcVar1);
    return;
  }
  **(float **)(param_1 + 4) = **(float **)(param_2 + 4) / **(float **)(param_3 + 4);
  return;
}



/* Entry: 1096867b4; end: 109686853;  */

void FUN_1096867b4(float *param_1,float *param_2,float *param_3,int param_4)

{
  long lVar1;
  float fVar2;
  float fVar3;
  
  if (0 < param_4) {
    fVar2 = *param_2;
    fVar3 = *param_3;
    lVar1 = (long)param_4;
    do {
      *param_1 = fVar2 / fVar3;
      lVar1 = lVar1 + -1;
      param_1 = param_1 + 1;
    } while (lVar1 != 0);
  }
  return;
}



/* Entry: 109686854; end: 109686923;  */

void FUN_109686854(undefined8 param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined4 auStack_58 [2];
  long lStack_50;
  undefined8 uStack_48;
  undefined4 auStack_40 [2];
  long lStack_38;
  undefined8 uStack_30;
  undefined4 auStack_28 [2];
  long lStack_20;
  undefined8 uStack_18;
  
  lVar1 = *param_2;
  lVar2 = param_2[1];
  lVar3 = param_2[2];
  uStack_18 = *(undefined8 *)(lVar1 + 8);
  lStack_20 = *(long *)(lVar1 + 0x10);
  uStack_30 = *(undefined8 *)(lVar2 + 8);
  lStack_38 = *(long *)(lVar2 + 0x10);
  uStack_48 = *(undefined8 *)(lVar3 + 8);
  lStack_50 = *(long *)(lVar3 + 0x10);
  auStack_28[0] = (undefined4)((ulong)(*(long *)(lVar1 + 0x18) - lStack_20) >> 2);
  auStack_40[0] = (undefined4)((ulong)(*(long *)(lVar2 + 0x18) - lStack_38) >> 2);
  auStack_58[0] = (undefined4)((ulong)(*(long *)(lVar3 + 0x18) - lStack_50) >> 2);
  FUN_1096866b4(auStack_28,auStack_40,auStack_58);
  return;
}



/* Entry: 109686924; end: 1096869ef;  */

void FUN_109686924(undefined8 param_1)

{
  int *piVar1;
  int *piVar2;
  int **ppiVar3;
  code *pcVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 *puStack_60;
  code *pcStack_58;
  int *piStack_50;
  int *piStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined4 uStack_30;
  undefined1 auStack_2c [4];
  long lStack_28;
  
  ppiVar3 = &piStack_50;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_38 = 0x2800000028;
  uStack_30 = 0x28;
  piStack_48 = (int *)0x0;
  uStack_40 = 0;
  piStack_50 = (int *)0x0;
  FUN_109522b28(&piStack_50,&uStack_38,auStack_2c,3);
  piVar2 = (int *)0x0;
  FUN_109680a78(param_1,0,&piStack_50,FUN_109686c54);
  piVar1 = piStack_50;
  if (piStack_50 != (int *)0x0) {
    piStack_48 = piStack_50;
    __ZdlPv();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return;
  }
  ___stack_chk_fail();
  if (piStack_50 != (int *)0x0) {
    piStack_48 = piStack_50;
    __ZdlPv();
  }
  __Unwind_Resume();
  if (*piVar1 != 0) {
    if ((*piVar2 == 0) || (*(int *)(*(long *)(piVar2 + 2) + (long)*piVar2 * 4 + -4) == 1)) {
      if ((*(int *)ppiVar3 == 0) ||
         (*(int *)(*(long *)((long)ppiVar3 + 8) + (long)*(int *)ppiVar3 * 4 + -4) == 1)) {
        pcVar4 = FUN_109686b14;
      }
      else {
        pcVar4 = (code *)0x109686b60;
      }
    }
    else if ((*(int *)ppiVar3 == 0) ||
            (*(int *)(*(long *)((long)ppiVar3 + 8) + (long)*(int *)ppiVar3 * 4 + -4) == 1)) {
      pcVar4 = (code *)0x109686bb4;
    }
    else {
      pcVar4 = (code *)0x109686c00;
    }
    pcStack_58 = FUN_1096869f0;
    uStack_70 = *(undefined8 *)(piVar1 + 4);
    uStack_78 = *(undefined8 *)(piVar1 + 2);
    uStack_80 = *(undefined8 *)piVar1;
    uStack_90 = *(undefined8 *)(piVar2 + 4);
    uStack_98 = *(undefined8 *)(piVar2 + 2);
    uStack_a0 = *(undefined8 *)piVar2;
    uStack_b0 = *(undefined8 *)((long)ppiVar3 + 0x10);
    uStack_b8 = *(undefined8 *)((long)ppiVar3 + 8);
    uStack_c0 = *ppiVar3;
    puStack_60 = &stack0xfffffffffffffff0;
    FUN_10968528c(&uStack_80,&uStack_a0,&uStack_c0,pcVar4);
    return;
  }
  fVar5 = **(float **)((long)ppiVar3 + 0x10);
  fVar6 = (*(float **)((long)ppiVar3 + 0x10))[1];
  fVar7 = 1.0 / (fVar6 * fVar6 + fVar5 * fVar5);
  fVar8 = (float)**(undefined8 **)(piVar2 + 4);
  fVar9 = (float)((ulong)**(undefined8 **)(piVar2 + 4) >> 0x20);
  **(undefined8 **)(piVar1 + 4) =
       CONCAT44((-fVar8 * fVar6 + fVar9 * fVar5) * fVar7,(fVar9 * fVar6 + fVar8 * fVar5) * fVar7);
  return;
}



/* Entry: 1096869f0; end: 109686b13;  */

void FUN_1096869f0(int *param_1,int *param_2,int *param_3)

{
  code *pcVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  
  if (*param_1 != 0) {
    if ((*param_2 == 0) || (*(int *)(*(long *)(param_2 + 2) + (long)*param_2 * 4 + -4) == 1)) {
      if ((*param_3 == 0) || (*(int *)(*(long *)(param_3 + 2) + (long)*param_3 * 4 + -4) == 1)) {
        pcVar1 = FUN_109686b14;
      }
      else {
        pcVar1 = (code *)0x109686b60;
      }
    }
    else if ((*param_3 == 0) || (*(int *)(*(long *)(param_3 + 2) + (long)*param_3 * 4 + -4) == 1)) {
      pcVar1 = (code *)0x109686bb4;
    }
    else {
      pcVar1 = (code *)0x109686c00;
    }
    uStack_20 = *(undefined8 *)(param_1 + 4);
    uStack_28 = *(undefined8 *)(param_1 + 2);
    uStack_30 = *(undefined8 *)param_1;
    uStack_40 = *(undefined8 *)(param_2 + 4);
    uStack_48 = *(undefined8 *)(param_2 + 2);
    uStack_50 = *(undefined8 *)param_2;
    uStack_60 = *(undefined8 *)(param_3 + 4);
    uStack_68 = *(undefined8 *)(param_3 + 2);
    uStack_70 = *(undefined8 *)param_3;
    FUN_10968528c(&uStack_30,&uStack_50,&uStack_70,pcVar1);
    return;
  }
  fVar2 = **(float **)(param_3 + 4);
  fVar3 = (*(float **)(param_3 + 4))[1];
  fVar4 = 1.0 / (fVar3 * fVar3 + fVar2 * fVar2);
  fVar5 = (float)**(undefined8 **)(param_2 + 4);
  fVar6 = (float)((ulong)**(undefined8 **)(param_2 + 4) >> 0x20);
  **(undefined8 **)(param_1 + 4) =
       CONCAT44((-fVar5 * fVar3 + fVar6 * fVar2) * fVar4,(fVar6 * fVar3 + fVar5 * fVar2) * fVar4);
  return;
}



/* Entry: 109686b14; end: 109686c53;  */

void FUN_109686b14(undefined8 *param_1,undefined8 *param_2,float *param_3,int param_4)

{
  long lVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  if (0 < param_4) {
    fVar2 = *param_3;
    fVar3 = param_3[1];
    fVar4 = 1.0 / (fVar3 * fVar3 + fVar2 * fVar2);
    fVar5 = (float)*param_2;
    fVar6 = (float)((ulong)*param_2 >> 0x20);
    lVar1 = (long)param_4;
    do {
      *param_1 = CONCAT44((-fVar5 * fVar3 + fVar6 * fVar2) * fVar4,
                          (fVar6 * fVar3 + fVar5 * fVar2) * fVar4);
      lVar1 = lVar1 + -1;
      param_1 = param_1 + 1;
    } while (lVar1 != 0);
  }
  return;
}



/* Entry: 109686c54; end: 109686ccb;  */

void FUN_109686c54(undefined8 param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined4 auStack_58 [2];
  long lStack_50;
  undefined8 uStack_48;
  undefined4 auStack_40 [2];
  long lStack_38;
  undefined8 uStack_30;
  undefined4 auStack_28 [2];
  long lStack_20;
  undefined8 uStack_18;
  
  lVar1 = *param_2;
  lVar2 = param_2[1];
  lVar3 = param_2[2];
  uStack_18 = *(undefined8 *)(lVar1 + 8);
  lStack_20 = *(long *)(lVar1 + 0x10);
  uStack_30 = *(undefined8 *)(lVar2 + 8);
  lStack_38 = *(long *)(lVar2 + 0x10);
  uStack_48 = *(undefined8 *)(lVar3 + 8);
  lStack_50 = *(long *)(lVar3 + 0x10);
  auStack_28[0] = (undefined4)((ulong)(*(long *)(lVar1 + 0x18) - lStack_20) >> 2);
  auStack_40[0] = (undefined4)((ulong)(*(long *)(lVar2 + 0x18) - lStack_38) >> 2);
  auStack_58[0] = (undefined4)((ulong)(*(long *)(lVar3 + 0x18) - lStack_50) >> 2);
  FUN_1096869f0(auStack_28,auStack_40,auStack_58);
  return;
}



/* Entry: 109686ccc; end: 109686ce3;  */

void FUN_109686ccc(long *param_1,uint *param_2)

{
  uint uVar1;
  uint uVar2;
  uint *puVar3;
  uint *puVar4;
  uint *puVar5;
  long lVar6;
  long lVar7;
  uint uVar8;
  uint uVar9;
  
  puVar4 = *(uint **)(param_2 + 2);
  uVar9 = *param_2;
  puVar5 = *(uint **)(param_2 + 6);
  uVar8 = param_2[4];
  puVar3 = puVar4;
  uVar1 = uVar8;
  if ((int)uVar9 < (int)uVar8) {
    do {
      uVar8 = uVar9;
      uVar9 = uVar1;
      puVar4 = puVar5;
      puVar5 = puVar3;
      puVar3 = puVar4;
      uVar1 = uVar8;
    } while ((int)uVar9 < (int)uVar8);
  }
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  FUN_1092d1c20(param_1,puVar4,(long)puVar4 + ((long)((ulong)uVar9 << 0x20) >> 0x1e),
                (long)(int)uVar9);
  if (0 < (int)uVar8) {
    lVar6 = *param_1;
    lVar7 = (long)(int)(uVar9 - uVar8);
    do {
      uVar2 = *(uint *)(lVar6 + lVar7 * 4);
      uVar1 = *puVar5;
      uVar8 = uVar2 ^ uVar1 ^ 1;
      if (uVar1 != 1 && uVar2 != 1) {
        uVar8 = uVar1 & uVar2;
      }
      *(uint *)(lVar6 + lVar7 * 4) = uVar8;
      lVar7 = lVar7 + 1;
      puVar5 = puVar5 + 1;
    } while (lVar7 < (int)uVar9);
  }
  return;
}



/* Entry: 109686ce4; end: 109686d3b;  */

void FUN_109686ce4(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  
  uStack_20 = param_1[2];
  uStack_28 = param_1[1];
  uStack_30 = *param_1;
  uStack_40 = param_2[2];
  uStack_48 = param_2[1];
  uStack_50 = *param_2;
  uStack_60 = param_3[2];
  uStack_68 = param_3[1];
  uStack_70 = *param_3;
  FUN_109686e08(&uStack_30,&uStack_50,&uStack_70);
  return;
}



/* Entry: 109686d3c; end: 109686e07;  */

void FUN_109686d3c(undefined8 param_1)

{
  int *piVar1;
  int *piVar2;
  int **ppiVar3;
  code *pcVar4;
  undefined4 uVar5;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 *puStack_60;
  code *pcStack_58;
  int *piStack_50;
  int *piStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined4 uStack_30;
  undefined1 auStack_2c [4];
  long lStack_28;
  
  ppiVar3 = &piStack_50;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_38 = 0x1800000018;
  uStack_30 = 0x18;
  piStack_48 = (int *)0x0;
  uStack_40 = 0;
  piStack_50 = (int *)0x0;
  FUN_109522b28(&piStack_50,&uStack_38,auStack_2c,3);
  piVar2 = (int *)0x0;
  FUN_109680a78(param_1,0,&piStack_50,FUN_109686fe4);
  piVar1 = piStack_50;
  if (piStack_50 != (int *)0x0) {
    piStack_48 = piStack_50;
    __ZdlPv();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return;
  }
  ___stack_chk_fail();
  if (piStack_50 != (int *)0x0) {
    piStack_48 = piStack_50;
    __ZdlPv();
  }
  __Unwind_Resume();
  if (*piVar1 != 0) {
    if ((*piVar2 == 0) || (*(int *)(*(long *)(piVar2 + 2) + (long)*piVar2 * 4 + -4) == 1)) {
      if ((*(int *)ppiVar3 == 0) ||
         (*(int *)(*(long *)((long)ppiVar3 + 8) + (long)*(int *)ppiVar3 * 4 + -4) == 1)) {
        pcVar4 = FUN_109686f14;
      }
      else {
        pcVar4 = (code *)0x109686f48;
      }
    }
    else if ((*(int *)ppiVar3 == 0) ||
            (*(int *)(*(long *)((long)ppiVar3 + 8) + (long)*(int *)ppiVar3 * 4 + -4) == 1)) {
      pcVar4 = (code *)0x109686f7c;
    }
    else {
      pcVar4 = (code *)0x109686fb0;
    }
    pcStack_58 = FUN_109686e08;
    uStack_70 = *(undefined8 *)(piVar1 + 4);
    uStack_78 = *(undefined8 *)(piVar1 + 2);
    uStack_80 = *(undefined8 *)piVar1;
    uStack_90 = *(undefined8 *)(piVar2 + 4);
    uStack_98 = *(undefined8 *)(piVar2 + 2);
    uStack_a0 = *(undefined8 *)piVar2;
    uStack_b0 = *(undefined8 *)((long)ppiVar3 + 0x10);
    uStack_b8 = *(undefined8 *)((long)ppiVar3 + 8);
    uStack_c0 = *ppiVar3;
    puStack_60 = &stack0xfffffffffffffff0;
    FUN_109684bac(&uStack_80,&uStack_a0,&uStack_c0,pcVar4);
    return;
  }
  uVar5 = 0x3f800000;
  if (**(float **)((long)ppiVar3 + 0x10) <= **(float **)(piVar2 + 4)) {
    uVar5 = 0;
  }
  **(undefined4 **)(piVar1 + 4) = uVar5;
  return;
}



/* Entry: 109686e08; end: 109686f13;  */

void FUN_109686e08(int *param_1,int *param_2,int *param_3)

{
  code *pcVar1;
  undefined4 uVar2;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  
  if (*param_1 != 0) {
    if ((*param_2 == 0) || (*(int *)(*(long *)(param_2 + 2) + (long)*param_2 * 4 + -4) == 1)) {
      if ((*param_3 == 0) || (*(int *)(*(long *)(param_3 + 2) + (long)*param_3 * 4 + -4) == 1)) {
        pcVar1 = FUN_109686f14;
      }
      else {
        pcVar1 = (code *)0x109686f48;
      }
    }
    else if ((*param_3 == 0) || (*(int *)(*(long *)(param_3 + 2) + (long)*param_3 * 4 + -4) == 1)) {
      pcVar1 = (code *)0x109686f7c;
    }
    else {
      pcVar1 = (code *)0x109686fb0;
    }
    uStack_20 = *(undefined8 *)(param_1 + 4);
    uStack_28 = *(undefined8 *)(param_1 + 2);
    uStack_30 = *(undefined8 *)param_1;
    uStack_40 = *(undefined8 *)(param_2 + 4);
    uStack_48 = *(undefined8 *)(param_2 + 2);
    uStack_50 = *(undefined8 *)param_2;
    uStack_60 = *(undefined8 *)(param_3 + 4);
    uStack_68 = *(undefined8 *)(param_3 + 2);
    uStack_70 = *(undefined8 *)param_3;
    FUN_109684bac(&uStack_30,&uStack_50,&uStack_70,pcVar1);
    return;
  }
  uVar2 = 0x3f800000;
  if (**(float **)(param_3 + 4) <= **(float **)(param_2 + 4)) {
    uVar2 = 0;
  }
  **(undefined4 **)(param_1 + 4) = uVar2;
  return;
}



/* Entry: 109686f14; end: 109686fe3;  */

void FUN_109686f14(undefined4 *param_1,float *param_2,float *param_3,int param_4)

{
  long lVar1;
  undefined4 uVar2;
  
  uVar2 = 0x3f800000;
  if (*param_3 <= *param_2) {
    uVar2 = 0;
  }
  if (0 < param_4) {
    lVar1 = (long)param_4;
    do {
      *param_1 = uVar2;
      lVar1 = lVar1 + -1;
      param_1 = param_1 + 1;
    } while (lVar1 != 0);
  }
  return;
}



/* Entry: 109686fe4; end: 10968705b;  */

void FUN_109686fe4(undefined8 param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined4 auStack_58 [2];
  long lStack_50;
  undefined8 uStack_48;
  undefined4 auStack_40 [2];
  long lStack_38;
  undefined8 uStack_30;
  undefined4 auStack_28 [2];
  long lStack_20;
  undefined8 uStack_18;
  
  lVar1 = *param_2;
  lVar2 = param_2[1];
  lVar3 = param_2[2];
  uStack_18 = *(undefined8 *)(lVar1 + 8);
  lStack_20 = *(long *)(lVar1 + 0x10);
  uStack_30 = *(undefined8 *)(lVar2 + 8);
  lStack_38 = *(long *)(lVar2 + 0x10);
  uStack_48 = *(undefined8 *)(lVar3 + 8);
  lStack_50 = *(long *)(lVar3 + 0x10);
  auStack_28[0] = (undefined4)((ulong)(*(long *)(lVar1 + 0x18) - lStack_20) >> 2);
  auStack_40[0] = (undefined4)((ulong)(*(long *)(lVar2 + 0x18) - lStack_38) >> 2);
  auStack_58[0] = (undefined4)((ulong)(*(long *)(lVar3 + 0x18) - lStack_50) >> 2);
  FUN_109686e08(auStack_28,auStack_40,auStack_58);
  return;
}



/* Entry: 10968705c; end: 1096870a7;  */

void FUN_10968705c(void)

{
  uint uVar1;
  int *piVar2;
  undefined8 *puVar3;
  ulong uVar4;
  int *piVar5;
  undefined8 *puVar6;
  long lVar7;
  int *piStack_48;
  int *piStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  FUN_10968098c(&UNK_10dfdaa86,FUN_1096870a8);
  FUN_10968711c(&UNK_10dfdaa86,0x1096870c8);
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_30 = 0x2800000028;
  piStack_40 = (int *)0x0;
  uStack_38 = 0;
  piStack_48 = (int *)0x0;
  FUN_109522b28(&piStack_48,&uStack_30,&lStack_28,2);
  puVar3 = (undefined8 *)0x0;
  FUN_109680a78(&UNK_10dfdaa86,0,&piStack_48,FUN_10968735c);
  piVar2 = piStack_48;
  if (piStack_48 != (int *)0x0) {
    piStack_40 = piStack_48;
    __ZdlPv();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return;
  }
  ___stack_chk_fail();
  if (piStack_48 != (int *)0x0) {
    piStack_40 = piStack_48;
    __ZdlPv();
  }
  __Unwind_Resume();
  if (*piVar2 == 0) {
    uVar4 = 1;
  }
  else {
    lVar7 = (long)*piVar2 << 2;
    uVar4 = 1;
    piVar5 = *(int **)(piVar2 + 2);
    do {
      uVar1 = *piVar5 * (int)uVar4;
      uVar4 = (ulong)uVar1;
      lVar7 = lVar7 + -4;
      piVar5 = piVar5 + 1;
    } while (lVar7 != 0);
    if ((int)uVar1 < 1) {
      return;
    }
  }
  puVar6 = *(undefined8 **)(piVar2 + 4);
  do {
    *puVar6 = CONCAT44(-(float)((ulong)*puVar3 >> 0x20),-(float)*puVar3);
    uVar4 = uVar4 - 1;
    puVar3 = puVar3 + 1;
    puVar6 = puVar6 + 1;
  } while (uVar4 != 0);
  return;
}



/* Entry: 1096870a8; end: 10968711b;  */

void FUN_1096870a8(undefined8 *param_1,int *param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  long lVar3;
  undefined4 *puVar4;
  
  puVar2 = *(undefined4 **)(param_2 + 2);
  lVar3 = (long)*param_2;
  puVar1 = (undefined4 *)((long)puVar2 + ((lVar3 << 0x20) >> 0x1e));
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = 0;
  if (lVar3 != 0) {
    FUN_10925b938(param_1,lVar3);
    puVar4 = (undefined4 *)param_1[1];
    for (; puVar2 != puVar1; puVar2 = puVar2 + 1) {
      *puVar4 = *puVar2;
      puVar4 = puVar4 + 1;
    }
    param_1[1] = puVar4;
  }
  return;
}



/* Entry: 10968711c; end: 1096871df;  */

void FUN_10968711c(undefined8 param_1)

{
  uint uVar1;
  long lVar2;
  long *plVar3;
  float *pfVar4;
  float *pfVar5;
  ulong uVar6;
  int *piVar7;
  long lVar8;
  long lStack_48;
  long lStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_30 = 0x1800000018;
  lStack_40 = 0;
  uStack_38 = 0;
  lStack_48 = 0;
  FUN_109522b28(&lStack_48,&uStack_30,&lStack_28,2);
  plVar3 = (long *)0x0;
  FUN_109680a78(param_1,0,&lStack_48,FUN_1096871e0);
  lVar2 = lStack_48;
  if (lStack_48 != 0) {
    lStack_40 = lStack_48;
    __ZdlPv();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return;
  }
  ___stack_chk_fail();
  if (lStack_48 != 0) {
    lStack_40 = lStack_48;
    __ZdlPv();
  }
  __Unwind_Resume(lVar2);
  lVar2 = *plVar3;
  pfVar4 = *(float **)(plVar3[1] + 8);
  pfVar5 = *(float **)(lVar2 + 8);
  uVar6 = *(long *)(lVar2 + 0x18) - (long)*(int **)(lVar2 + 0x10);
  if ((uVar6 & 0x3fffffffc) == 0) {
    uVar6 = 1;
  }
  else {
    lVar8 = ((long)(uVar6 * 0x40000000) >> 0x20) << 2;
    uVar6 = 1;
    piVar7 = *(int **)(lVar2 + 0x10);
    do {
      uVar1 = *piVar7 * (int)uVar6;
      uVar6 = (ulong)uVar1;
      lVar8 = lVar8 + -4;
      piVar7 = piVar7 + 1;
    } while (lVar8 != 0);
    if ((int)uVar1 < 1) {
      return;
    }
  }
  do {
    *pfVar5 = -*pfVar4;
    uVar6 = uVar6 - 1;
    pfVar4 = pfVar4 + 1;
    pfVar5 = pfVar5 + 1;
  } while (uVar6 != 0);
  return;
}



/* Entry: 1096871e0; end: 109687247;  */

void FUN_1096871e0(undefined8 param_1,long *param_2)

{
  long lVar1;
  uint uVar2;
  float *pfVar3;
  float *pfVar4;
  ulong uVar5;
  int *piVar6;
  long lVar7;
  
  lVar1 = *param_2;
  pfVar3 = *(float **)(param_2[1] + 8);
  pfVar4 = *(float **)(lVar1 + 8);
  uVar5 = *(long *)(lVar1 + 0x18) - (long)*(int **)(lVar1 + 0x10);
  if ((uVar5 & 0x3fffffffc) == 0) {
    uVar5 = 1;
  }
  else {
    lVar7 = ((long)(uVar5 * 0x40000000) >> 0x20) << 2;
    uVar5 = 1;
    piVar6 = *(int **)(lVar1 + 0x10);
    do {
      uVar2 = *piVar6 * (int)uVar5;
      uVar5 = (ulong)uVar2;
      lVar7 = lVar7 + -4;
      piVar6 = piVar6 + 1;
    } while (lVar7 != 0);
    if ((int)uVar2 < 1) {
      return;
    }
  }
  do {
    *pfVar4 = -*pfVar3;
    uVar5 = uVar5 - 1;
    pfVar3 = pfVar3 + 1;
    pfVar4 = pfVar4 + 1;
  } while (uVar5 != 0);
  return;
}



/* Entry: 109687248; end: 10968730b;  */

void FUN_109687248(undefined8 param_1)

{
  uint uVar1;
  int *piVar2;
  undefined8 *puVar3;
  ulong uVar4;
  int *piVar5;
  undefined8 *puVar6;
  long lVar7;
  int *piStack_48;
  int *piStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_30 = 0x2800000028;
  piStack_40 = (int *)0x0;
  uStack_38 = 0;
  piStack_48 = (int *)0x0;
  FUN_109522b28(&piStack_48,&uStack_30,&lStack_28,2);
  puVar3 = (undefined8 *)0x0;
  FUN_109680a78(param_1,0,&piStack_48,FUN_10968735c);
  piVar2 = piStack_48;
  if (piStack_48 != (int *)0x0) {
    piStack_40 = piStack_48;
    __ZdlPv();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return;
  }
  ___stack_chk_fail();
  if (piStack_48 != (int *)0x0) {
    piStack_40 = piStack_48;
    __ZdlPv();
  }
  __Unwind_Resume();
  if (*piVar2 == 0) {
    uVar4 = 1;
  }
  else {
    lVar7 = (long)*piVar2 << 2;
    uVar4 = 1;
    piVar5 = *(int **)(piVar2 + 2);
    do {
      uVar1 = *piVar5 * (int)uVar4;
      uVar4 = (ulong)uVar1;
      lVar7 = lVar7 + -4;
      piVar5 = piVar5 + 1;
    } while (lVar7 != 0);
    if ((int)uVar1 < 1) {
      return;
    }
  }
  puVar6 = *(undefined8 **)(piVar2 + 4);
  do {
    *puVar6 = CONCAT44(-(float)((ulong)*puVar3 >> 0x20),-(float)*puVar3);
    uVar4 = uVar4 - 1;
    puVar3 = puVar3 + 1;
    puVar6 = puVar6 + 1;
  } while (uVar4 != 0);
  return;
}



/* Entry: 10968730c; end: 10968735b;  */

void FUN_10968730c(int *param_1,undefined8 *param_2)

{
  uint uVar1;
  ulong uVar2;
  int *piVar3;
  undefined8 *puVar4;
  long lVar5;
  
  if (*param_1 == 0) {
    uVar2 = 1;
  }
  else {
    lVar5 = (long)*param_1 << 2;
    uVar2 = 1;
    piVar3 = *(int **)(param_1 + 2);
    do {
      uVar1 = *piVar3 * (int)uVar2;
      uVar2 = (ulong)uVar1;
      lVar5 = lVar5 + -4;
      piVar3 = piVar3 + 1;
    } while (lVar5 != 0);
    if ((int)uVar1 < 1) {
      return;
    }
  }
  puVar4 = *(undefined8 **)(param_1 + 4);
  do {
    *puVar4 = CONCAT44(-(float)((ulong)*param_2 >> 0x20),-(float)*param_2);
    uVar2 = uVar2 - 1;
    param_2 = param_2 + 1;
    puVar4 = puVar4 + 1;
  } while (uVar2 != 0);
  return;
}



/* Entry: 10968735c; end: 10968739b;  */

void FUN_10968735c(undefined8 param_1,long *param_2)

{
  long lVar1;
  undefined4 auStack_28 [2];
  long lStack_20;
  undefined8 uStack_18;
  
  lVar1 = *param_2;
  uStack_18 = *(undefined8 *)(lVar1 + 8);
  lStack_20 = *(long *)(lVar1 + 0x10);
  auStack_28[0] = (undefined4)((ulong)(*(long *)(lVar1 + 0x18) - lStack_20) >> 2);
  FUN_10968730c(auStack_28,*(undefined8 *)(param_2[1] + 8));
  return;
}



/* Entry: 10968739c; end: 1096873e7;  */

void FUN_10968739c(void)

{
  int *piVar1;
  int *piVar2;
  int **ppiVar3;
  code *pcVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  undefined8 uVar8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 *puStack_60;
  code *pcStack_58;
  int *piStack_50;
  int *piStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined4 uStack_30;
  undefined1 auStack_2c [4];
  long lStack_28;
  
  FUN_10968098c(&UNK_10dfdaa9a,FUN_1096873e8);
  FUN_109687458(&UNK_10dfdaa9a,FUN_109687400);
  ppiVar3 = &piStack_50;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_38 = 0x2800000028;
  uStack_30 = 0x28;
  piStack_48 = (int *)0x0;
  uStack_40 = 0;
  piStack_50 = (int *)0x0;
  FUN_109522b28(&piStack_50,&uStack_38,auStack_2c,3);
  piVar2 = (int *)0x0;
  FUN_109680a78(&UNK_10dfdaa9a,0,&piStack_50,FUN_109687a84);
  piVar1 = piStack_50;
  if (piStack_50 != (int *)0x0) {
    piStack_48 = piStack_50;
    __ZdlPv();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return;
  }
  ___stack_chk_fail();
  if (piStack_50 != (int *)0x0) {
    piStack_48 = piStack_50;
    __ZdlPv();
  }
  __Unwind_Resume();
  if (*piVar1 != 0) {
    if ((*piVar2 == 0) || (*(int *)(*(long *)(piVar2 + 2) + (long)*piVar2 * 4 + -4) == 1)) {
      if ((*(int *)ppiVar3 == 0) ||
         (*(int *)(*(long *)((long)ppiVar3 + 8) + (long)*(int *)ppiVar3 * 4 + -4) == 1)) {
        pcVar4 = FUN_109687974;
      }
      else {
        pcVar4 = (code *)0x1096879b0;
      }
    }
    else if ((*(int *)ppiVar3 == 0) ||
            (*(int *)(*(long *)((long)ppiVar3 + 8) + (long)*(int *)ppiVar3 * 4 + -4) == 1)) {
      pcVar4 = (code *)0x1096879f4;
    }
    else {
      pcVar4 = (code *)0x109687a38;
    }
    pcStack_58 = FUN_109687860;
    uStack_70 = *(undefined8 *)(piVar1 + 4);
    uStack_78 = *(undefined8 *)(piVar1 + 2);
    uStack_80 = *(undefined8 *)piVar1;
    uStack_90 = *(undefined8 *)(piVar2 + 4);
    uStack_98 = *(undefined8 *)(piVar2 + 2);
    uStack_a0 = *(undefined8 *)piVar2;
    uStack_b0 = *(undefined8 *)((long)ppiVar3 + 0x10);
    uStack_b8 = *(undefined8 *)((long)ppiVar3 + 8);
    uStack_c0 = *ppiVar3;
    puStack_60 = &stack0xfffffffffffffff0;
    FUN_10968528c(&uStack_80,&uStack_a0,&uStack_c0,pcVar4);
    return;
  }
  fVar5 = **(float **)((long)ppiVar3 + 0x10);
  fVar6 = (*(float **)((long)ppiVar3 + 0x10))[1];
  uVar8 = **(undefined8 **)(piVar2 + 4);
  fVar7 = (float)uVar8;
  **(undefined8 **)(piVar1 + 4) =
       CONCAT44(fVar7 * fVar6 + (float)((ulong)uVar8 >> 0x20) * fVar5,
                -*(float *)((long)*(undefined8 **)(piVar2 + 4) + 4) * fVar6 + fVar7 * fVar5);
  return;
}



/* Entry: 1096873e8; end: 1096873ff;  */

void FUN_1096873e8(long *param_1,uint *param_2)

{
  uint uVar1;
  uint uVar2;
  uint *puVar3;
  uint *puVar4;
  uint *puVar5;
  long lVar6;
  long lVar7;
  uint uVar8;
  uint uVar9;
  
  puVar4 = *(uint **)(param_2 + 2);
  uVar9 = *param_2;
  puVar5 = *(uint **)(param_2 + 6);
  uVar8 = param_2[4];
  puVar3 = puVar4;
  uVar1 = uVar8;
  if ((int)uVar9 < (int)uVar8) {
    do {
      uVar8 = uVar9;
      uVar9 = uVar1;
      puVar4 = puVar5;
      puVar5 = puVar3;
      puVar3 = puVar4;
      uVar1 = uVar8;
    } while ((int)uVar9 < (int)uVar8);
  }
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  FUN_1092d1c20(param_1,puVar4,(long)puVar4 + ((long)((ulong)uVar9 << 0x20) >> 0x1e),
                (long)(int)uVar9);
  if (0 < (int)uVar8) {
    lVar6 = *param_1;
    lVar7 = (long)(int)(uVar9 - uVar8);
    do {
      uVar2 = *(uint *)(lVar6 + lVar7 * 4);
      uVar1 = *puVar5;
      uVar8 = uVar2 ^ uVar1 ^ 1;
      if (uVar1 != 1 && uVar2 != 1) {
        uVar8 = uVar1 & uVar2;
      }
      *(uint *)(lVar6 + lVar7 * 4) = uVar8;
      lVar7 = lVar7 + 1;
      puVar5 = puVar5 + 1;
    } while (lVar7 < (int)uVar9);
  }
  return;
}



/* Entry: 109687400; end: 109687457;  */

void FUN_109687400(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  
  uStack_20 = param_1[2];
  uStack_28 = param_1[1];
  uStack_30 = *param_1;
  uStack_40 = param_2[2];
  uStack_48 = param_2[1];
  uStack_50 = *param_2;
  uStack_60 = param_3[2];
  uStack_68 = param_3[1];
  uStack_70 = *param_3;
  FUN_109687524(&uStack_30,&uStack_50,&uStack_70);
  return;
}



/* Entry: 109687458; end: 109687523;  */

void FUN_109687458(undefined8 param_1)

{
  int *piVar1;
  int *piVar2;
  int **ppiVar3;
  code *pcVar4;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 *puStack_60;
  code *pcStack_58;
  int *piStack_50;
  int *piStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined4 uStack_30;
  undefined1 auStack_2c [4];
  long lStack_28;
  
  ppiVar3 = &piStack_50;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_38 = 0x1800000018;
  uStack_30 = 0x18;
  piStack_48 = (int *)0x0;
  uStack_40 = 0;
  piStack_50 = (int *)0x0;
  FUN_109522b28(&piStack_50,&uStack_38,auStack_2c,3);
  piVar2 = (int *)0x0;
  FUN_109680a78(param_1,0,&piStack_50,FUN_1096876c4);
  piVar1 = piStack_50;
  if (piStack_50 != (int *)0x0) {
    piStack_48 = piStack_50;
    __ZdlPv();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return;
  }
  ___stack_chk_fail();
  if (piStack_50 != (int *)0x0) {
    piStack_48 = piStack_50;
    __ZdlPv();
  }
  __Unwind_Resume();
  if (*piVar1 != 0) {
    if ((*piVar2 == 0) || (*(int *)(*(long *)(piVar2 + 2) + (long)*piVar2 * 4 + -4) == 1)) {
      if ((*(int *)ppiVar3 == 0) ||
         (*(int *)(*(long *)((long)ppiVar3 + 8) + (long)*(int *)ppiVar3 * 4 + -4) == 1)) {
        pcVar4 = FUN_109687624;
      }
      else {
        pcVar4 = (code *)0x10968764c;
      }
    }
    else if ((*(int *)ppiVar3 == 0) ||
            (*(int *)(*(long *)((long)ppiVar3 + 8) + (long)*(int *)ppiVar3 * 4 + -4) == 1)) {
      pcVar4 = (code *)0x109687674;
    }
    else {
      pcVar4 = (code *)0x10968769c;
    }
    pcStack_58 = FUN_109687524;
    uStack_70 = *(undefined8 *)(piVar1 + 4);
    uStack_78 = *(undefined8 *)(piVar1 + 2);
    uStack_80 = *(undefined8 *)piVar1;
    uStack_90 = *(undefined8 *)(piVar2 + 4);
    uStack_98 = *(undefined8 *)(piVar2 + 2);
    uStack_a0 = *(undefined8 *)piVar2;
    uStack_b0 = *(undefined8 *)((long)ppiVar3 + 0x10);
    uStack_b8 = *(undefined8 *)((long)ppiVar3 + 8);
    uStack_c0 = *ppiVar3;
    puStack_60 = &stack0xfffffffffffffff0;
    FUN_109684bac(&uStack_80,&uStack_a0,&uStack_c0,pcVar4);
    return;
  }
  **(float **)(piVar1 + 4) = **(float **)(piVar2 + 4) * **(float **)((long)ppiVar3 + 0x10);
  return;
}



/* Entry: 109687524; end: 109687623;  */

void FUN_109687524(int *param_1,int *param_2,int *param_3)

{
  code *pcVar1;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  
  if (*param_1 != 0) {
    if ((*param_2 == 0) || (*(int *)(*(long *)(param_2 + 2) + (long)*param_2 * 4 + -4) == 1)) {
      if ((*param_3 == 0) || (*(int *)(*(long *)(param_3 + 2) + (long)*param_3 * 4 + -4) == 1)) {
        pcVar1 = FUN_109687624;
      }
      else {
        pcVar1 = (code *)0x10968764c;
      }
    }
    else if ((*param_3 == 0) || (*(int *)(*(long *)(param_3 + 2) + (long)*param_3 * 4 + -4) == 1)) {
      pcVar1 = (code *)0x109687674;
    }
    else {
      pcVar1 = (code *)0x10968769c;
    }
    uStack_20 = *(undefined8 *)(param_1 + 4);
    uStack_28 = *(undefined8 *)(param_1 + 2);
    uStack_30 = *(undefined8 *)param_1;
    uStack_40 = *(undefined8 *)(param_2 + 4);
    uStack_48 = *(undefined8 *)(param_2 + 2);
    uStack_50 = *(undefined8 *)param_2;
    uStack_60 = *(undefined8 *)(param_3 + 4);
    uStack_68 = *(undefined8 *)(param_3 + 2);
    uStack_70 = *(undefined8 *)param_3;
    FUN_109684bac(&uStack_30,&uStack_50,&uStack_70,pcVar1);
    return;
  }
  **(float **)(param_1 + 4) = **(float **)(param_2 + 4) * **(float **)(param_3 + 4);
  return;
}



/* Entry: 109687624; end: 1096876c3;  */

void FUN_109687624(float *param_1,float *param_2,float *param_3,int param_4)

{
  long lVar1;
  float fVar2;
  float fVar3;
  
  if (0 < param_4) {
    fVar2 = *param_2;
    fVar3 = *param_3;
    lVar1 = (long)param_4;
    do {
      *param_1 = fVar2 * fVar3;
      lVar1 = lVar1 + -1;
      param_1 = param_1 + 1;
    } while (lVar1 != 0);
  }
  return;
}



/* Entry: 1096876c4; end: 109687793;  */

void FUN_1096876c4(undefined8 param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined4 auStack_58 [2];
  long lStack_50;
  undefined8 uStack_48;
  undefined4 auStack_40 [2];
  long lStack_38;
  undefined8 uStack_30;
  undefined4 auStack_28 [2];
  long lStack_20;
  undefined8 uStack_18;
  
  lVar1 = *param_2;
  lVar2 = param_2[1];
  lVar3 = param_2[2];
  uStack_18 = *(undefined8 *)(lVar1 + 8);
  lStack_20 = *(long *)(lVar1 + 0x10);
  uStack_30 = *(undefined8 *)(lVar2 + 8);
  lStack_38 = *(long *)(lVar2 + 0x10);
  uStack_48 = *(undefined8 *)(lVar3 + 8);
  lStack_50 = *(long *)(lVar3 + 0x10);
  auStack_28[0] = (undefined4)((ulong)(*(long *)(lVar1 + 0x18) - lStack_20) >> 2);
  auStack_40[0] = (undefined4)((ulong)(*(long *)(lVar2 + 0x18) - lStack_38) >> 2);
  auStack_58[0] = (undefined4)((ulong)(*(long *)(lVar3 + 0x18) - lStack_50) >> 2);
  FUN_109687524(auStack_28,auStack_40,auStack_58);
  return;
}



/* Entry: 109687794; end: 10968785f;  */

void FUN_109687794(undefined8 param_1)

{
  int *piVar1;
  int *piVar2;
  int **ppiVar3;
  code *pcVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  undefined8 uVar8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 *puStack_60;
  code *pcStack_58;
  int *piStack_50;
  int *piStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined4 uStack_30;
  undefined1 auStack_2c [4];
  long lStack_28;
  
  ppiVar3 = &piStack_50;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_38 = 0x2800000028;
  uStack_30 = 0x28;
  piStack_48 = (int *)0x0;
  uStack_40 = 0;
  piStack_50 = (int *)0x0;
  FUN_109522b28(&piStack_50,&uStack_38,auStack_2c,3);
  piVar2 = (int *)0x0;
  FUN_109680a78(param_1,0,&piStack_50,FUN_109687a84);
  piVar1 = piStack_50;
  if (piStack_50 != (int *)0x0) {
    piStack_48 = piStack_50;
    __ZdlPv();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return;
  }
  ___stack_chk_fail();
  if (piStack_50 != (int *)0x0) {
    piStack_48 = piStack_50;
    __ZdlPv();
  }
  __Unwind_Resume();
  if (*piVar1 != 0) {
    if ((*piVar2 == 0) || (*(int *)(*(long *)(piVar2 + 2) + (long)*piVar2 * 4 + -4) == 1)) {
      if ((*(int *)ppiVar3 == 0) ||
         (*(int *)(*(long *)((long)ppiVar3 + 8) + (long)*(int *)ppiVar3 * 4 + -4) == 1)) {
        pcVar4 = FUN_109687974;
      }
      else {
        pcVar4 = (code *)0x1096879b0;
      }
    }
    else if ((*(int *)ppiVar3 == 0) ||
            (*(int *)(*(long *)((long)ppiVar3 + 8) + (long)*(int *)ppiVar3 * 4 + -4) == 1)) {
      pcVar4 = (code *)0x1096879f4;
    }
    else {
      pcVar4 = (code *)0x109687a38;
    }
    pcStack_58 = FUN_109687860;
    uStack_70 = *(undefined8 *)(piVar1 + 4);
    uStack_78 = *(undefined8 *)(piVar1 + 2);
    uStack_80 = *(undefined8 *)piVar1;
    uStack_90 = *(undefined8 *)(piVar2 + 4);
    uStack_98 = *(undefined8 *)(piVar2 + 2);
    uStack_a0 = *(undefined8 *)piVar2;
    uStack_b0 = *(undefined8 *)((long)ppiVar3 + 0x10);
    uStack_b8 = *(undefined8 *)((long)ppiVar3 + 8);
    uStack_c0 = *ppiVar3;
    puStack_60 = &stack0xfffffffffffffff0;
    FUN_10968528c(&uStack_80,&uStack_a0,&uStack_c0,pcVar4);
    return;
  }
  fVar5 = **(float **)((long)ppiVar3 + 0x10);
  fVar6 = (*(float **)((long)ppiVar3 + 0x10))[1];
  uVar8 = **(undefined8 **)(piVar2 + 4);
  fVar7 = (float)uVar8;
  **(undefined8 **)(piVar1 + 4) =
       CONCAT44(fVar7 * fVar6 + (float)((ulong)uVar8 >> 0x20) * fVar5,
                -*(float *)((long)*(undefined8 **)(piVar2 + 4) + 4) * fVar6 + fVar7 * fVar5);
  return;
}



/* Entry: 109687860; end: 109687973;  */

void FUN_109687860(int *param_1,int *param_2,int *param_3)

{
  code *pcVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  undefined8 uVar5;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  
  if (*param_1 != 0) {
    if ((*param_2 == 0) || (*(int *)(*(long *)(param_2 + 2) + (long)*param_2 * 4 + -4) == 1)) {
      if ((*param_3 == 0) || (*(int *)(*(long *)(param_3 + 2) + (long)*param_3 * 4 + -4) == 1)) {
        pcVar1 = FUN_109687974;
      }
      else {
        pcVar1 = (code *)0x1096879b0;
      }
    }
    else if ((*param_3 == 0) || (*(int *)(*(long *)(param_3 + 2) + (long)*param_3 * 4 + -4) == 1)) {
      pcVar1 = (code *)0x1096879f4;
    }
    else {
      pcVar1 = (code *)0x109687a38;
    }
    uStack_20 = *(undefined8 *)(param_1 + 4);
    uStack_28 = *(undefined8 *)(param_1 + 2);
    uStack_30 = *(undefined8 *)param_1;
    uStack_40 = *(undefined8 *)(param_2 + 4);
    uStack_48 = *(undefined8 *)(param_2 + 2);
    uStack_50 = *(undefined8 *)param_2;
    uStack_60 = *(undefined8 *)(param_3 + 4);
    uStack_68 = *(undefined8 *)(param_3 + 2);
    uStack_70 = *(undefined8 *)param_3;
    FUN_10968528c(&uStack_30,&uStack_50,&uStack_70,pcVar1);
    return;
  }
  fVar2 = **(float **)(param_3 + 4);
  fVar3 = (*(float **)(param_3 + 4))[1];
  uVar5 = **(undefined8 **)(param_2 + 4);
  fVar4 = (float)uVar5;
  **(undefined8 **)(param_1 + 4) =
       CONCAT44(fVar4 * fVar3 + (float)((ulong)uVar5 >> 0x20) * fVar2,
                -*(float *)((long)*(undefined8 **)(param_2 + 4) + 4) * fVar3 + fVar4 * fVar2);
  return;
}



/* Entry: 109687974; end: 109687a83;  */

void FUN_109687974(undefined8 *param_1,undefined8 *param_2,float *param_3,int param_4)

{
  long lVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  undefined8 uVar6;
  
  if (0 < param_4) {
    fVar3 = *param_3;
    fVar2 = param_3[1];
    fVar4 = *(float *)((long)param_2 + 4);
    uVar6 = *param_2;
    fVar5 = (float)uVar6;
    lVar1 = (long)param_4;
    do {
      *param_1 = CONCAT44(fVar5 * fVar2 + (float)((ulong)uVar6 >> 0x20) * fVar3,
                          -fVar4 * fVar2 + fVar5 * fVar3);
      lVar1 = lVar1 + -1;
      param_1 = param_1 + 1;
    } while (lVar1 != 0);
  }
  return;
}



/* Entry: 109687a84; end: 109687afb;  */

void FUN_109687a84(undefined8 param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined4 auStack_58 [2];
  long lStack_50;
  undefined8 uStack_48;
  undefined4 auStack_40 [2];
  long lStack_38;
  undefined8 uStack_30;
  undefined4 auStack_28 [2];
  long lStack_20;
  undefined8 uStack_18;
  
  lVar1 = *param_2;
  lVar2 = param_2[1];
  lVar3 = param_2[2];
  uStack_18 = *(undefined8 *)(lVar1 + 8);
  lStack_20 = *(long *)(lVar1 + 0x10);
  uStack_30 = *(undefined8 *)(lVar2 + 8);
  lStack_38 = *(long *)(lVar2 + 0x10);
  uStack_48 = *(undefined8 *)(lVar3 + 8);
  lStack_50 = *(long *)(lVar3 + 0x10);
  auStack_28[0] = (undefined4)((ulong)(*(long *)(lVar1 + 0x18) - lStack_20) >> 2);
  auStack_40[0] = (undefined4)((ulong)(*(long *)(lVar2 + 0x18) - lStack_38) >> 2);
  auStack_58[0] = (undefined4)((ulong)(*(long *)(lVar3 + 0x18) - lStack_50) >> 2);
  FUN_109687860(auStack_28,auStack_40,auStack_58);
  return;
}



/* Entry: 109687afc; end: 109687b47;  */

void FUN_109687afc(void)

{
  int *piVar1;
  int *piVar2;
  int **ppiVar3;
  code *pcVar4;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 *puStack_60;
  code *pcStack_58;
  int *piStack_50;
  int *piStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined4 uStack_30;
  undefined1 auStack_2c [4];
  long lStack_28;
  
  FUN_10968098c(&UNK_10dfdaa91,FUN_109687b48);
  FUN_109687bb8(&UNK_10dfdaa91,FUN_109687b60);
  ppiVar3 = &piStack_50;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_38 = 0x2800000028;
  uStack_30 = 0x28;
  piStack_48 = (int *)0x0;
  uStack_40 = 0;
  piStack_50 = (int *)0x0;
  FUN_109522b28(&piStack_50,&uStack_38,auStack_2c,3);
  piVar2 = (int *)0x0;
  FUN_109680a78(&UNK_10dfdaa91,0,&piStack_50,FUN_109688160);
  piVar1 = piStack_50;
  if (piStack_50 != (int *)0x0) {
    piStack_48 = piStack_50;
    __ZdlPv();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return;
  }
  ___stack_chk_fail();
  if (piStack_50 != (int *)0x0) {
    piStack_48 = piStack_50;
    __ZdlPv();
  }
  __Unwind_Resume();
  if (*piVar1 != 0) {
    if ((*piVar2 == 0) || (*(int *)(*(long *)(piVar2 + 2) + (long)*piVar2 * 4 + -4) == 1)) {
      if ((*(int *)ppiVar3 == 0) ||
         (*(int *)(*(long *)((long)ppiVar3 + 8) + (long)*(int *)ppiVar3 * 4 + -4) == 1)) {
        pcVar4 = FUN_1096880c0;
      }
      else {
        pcVar4 = (code *)0x1096880e8;
      }
    }
    else if ((*(int *)ppiVar3 == 0) ||
            (*(int *)(*(long *)((long)ppiVar3 + 8) + (long)*(int *)ppiVar3 * 4 + -4) == 1)) {
      pcVar4 = (code *)0x109688110;
    }
    else {
      pcVar4 = (code *)0x109688138;
    }
    pcStack_58 = FUN_109687fc0;
    uStack_70 = *(undefined8 *)(piVar1 + 4);
    uStack_78 = *(undefined8 *)(piVar1 + 2);
    uStack_80 = *(undefined8 *)piVar1;
    uStack_90 = *(undefined8 *)(piVar2 + 4);
    uStack_98 = *(undefined8 *)(piVar2 + 2);
    uStack_a0 = *(undefined8 *)piVar2;
    uStack_b0 = *(undefined8 *)((long)ppiVar3 + 0x10);
    uStack_b8 = *(undefined8 *)((long)ppiVar3 + 8);
    uStack_c0 = *ppiVar3;
    puStack_60 = &stack0xfffffffffffffff0;
    FUN_10968528c(&uStack_80,&uStack_a0,&uStack_c0,pcVar4);
    return;
  }
  **(undefined8 **)(piVar1 + 4) =
       CONCAT44((float)((ulong)**(undefined8 **)(piVar2 + 4) >> 0x20) -
                (float)((ulong)**(undefined8 **)((long)ppiVar3 + 0x10) >> 0x20),
                (float)**(undefined8 **)(piVar2 + 4) -
                (float)**(undefined8 **)((long)ppiVar3 + 0x10));
  return;
}



/* Entry: 109687b48; end: 109687b5f;  */

void FUN_109687b48(long *param_1,uint *param_2)

{
  uint uVar1;
  uint uVar2;
  uint *puVar3;
  uint *puVar4;
  uint *puVar5;
  long lVar6;
  long lVar7;
  uint uVar8;
  uint uVar9;
  
  puVar4 = *(uint **)(param_2 + 2);
  uVar9 = *param_2;
  puVar5 = *(uint **)(param_2 + 6);
  uVar8 = param_2[4];
  puVar3 = puVar4;
  uVar1 = uVar8;
  if ((int)uVar9 < (int)uVar8) {
    do {
      uVar8 = uVar9;
      uVar9 = uVar1;
      puVar4 = puVar5;
      puVar5 = puVar3;
      puVar3 = puVar4;
      uVar1 = uVar8;
    } while ((int)uVar9 < (int)uVar8);
  }
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  FUN_1092d1c20(param_1,puVar4,(long)puVar4 + ((long)((ulong)uVar9 << 0x20) >> 0x1e),
                (long)(int)uVar9);
  if (0 < (int)uVar8) {
    lVar6 = *param_1;
    lVar7 = (long)(int)(uVar9 - uVar8);
    do {
      uVar2 = *(uint *)(lVar6 + lVar7 * 4);
      uVar1 = *puVar5;
      uVar8 = uVar2 ^ uVar1 ^ 1;
      if (uVar1 != 1 && uVar2 != 1) {
        uVar8 = uVar1 & uVar2;
      }
      *(uint *)(lVar6 + lVar7 * 4) = uVar8;
      lVar7 = lVar7 + 1;
      puVar5 = puVar5 + 1;
    } while (lVar7 < (int)uVar9);
  }
  return;
}



/* Entry: 109687b60; end: 109687bb7;  */

void FUN_109687b60(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  
  uStack_20 = param_1[2];
  uStack_28 = param_1[1];
  uStack_30 = *param_1;
  uStack_40 = param_2[2];
  uStack_48 = param_2[1];
  uStack_50 = *param_2;
  uStack_60 = param_3[2];
  uStack_68 = param_3[1];
  uStack_70 = *param_3;
  FUN_109687c84(&uStack_30,&uStack_50,&uStack_70);
  return;
}



/* Entry: 109687bb8; end: 109687c83;  */

void FUN_109687bb8(undefined8 param_1)

{
  int *piVar1;
  int *piVar2;
  int **ppiVar3;
  code *pcVar4;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 *puStack_60;
  code *pcStack_58;
  int *piStack_50;
  int *piStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined4 uStack_30;
  undefined1 auStack_2c [4];
  long lStack_28;
  
  ppiVar3 = &piStack_50;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_38 = 0x1800000018;
  uStack_30 = 0x18;
  piStack_48 = (int *)0x0;
  uStack_40 = 0;
  piStack_50 = (int *)0x0;
  FUN_109522b28(&piStack_50,&uStack_38,auStack_2c,3);
  piVar2 = (int *)0x0;
  FUN_109680a78(param_1,0,&piStack_50,FUN_109687e24);
  piVar1 = piStack_50;
  if (piStack_50 != (int *)0x0) {
    piStack_48 = piStack_50;
    __ZdlPv();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return;
  }
  ___stack_chk_fail();
  if (piStack_50 != (int *)0x0) {
    piStack_48 = piStack_50;
    __ZdlPv();
  }
  __Unwind_Resume();
  if (*piVar1 != 0) {
    if ((*piVar2 == 0) || (*(int *)(*(long *)(piVar2 + 2) + (long)*piVar2 * 4 + -4) == 1)) {
      if ((*(int *)ppiVar3 == 0) ||
         (*(int *)(*(long *)((long)ppiVar3 + 8) + (long)*(int *)ppiVar3 * 4 + -4) == 1)) {
        pcVar4 = FUN_109687d84;
      }
      else {
        pcVar4 = (code *)0x109687dac;
      }
    }
    else if ((*(int *)ppiVar3 == 0) ||
            (*(int *)(*(long *)((long)ppiVar3 + 8) + (long)*(int *)ppiVar3 * 4 + -4) == 1)) {
      pcVar4 = (code *)0x109687dd4;
    }
    else {
      pcVar4 = (code *)0x109687dfc;
    }
    pcStack_58 = FUN_109687c84;
    uStack_70 = *(undefined8 *)(piVar1 + 4);
    uStack_78 = *(undefined8 *)(piVar1 + 2);
    uStack_80 = *(undefined8 *)piVar1;
    uStack_90 = *(undefined8 *)(piVar2 + 4);
    uStack_98 = *(undefined8 *)(piVar2 + 2);
    uStack_a0 = *(undefined8 *)piVar2;
    uStack_b0 = *(undefined8 *)((long)ppiVar3 + 0x10);
    uStack_b8 = *(undefined8 *)((long)ppiVar3 + 8);
    uStack_c0 = *ppiVar3;
    puStack_60 = &stack0xfffffffffffffff0;
    FUN_109684bac(&uStack_80,&uStack_a0,&uStack_c0,pcVar4);
    return;
  }
  **(float **)(piVar1 + 4) = **(float **)(piVar2 + 4) - **(float **)((long)ppiVar3 + 0x10);
  return;
}



/* Entry: 109687c84; end: 109687d83;  */

void FUN_109687c84(int *param_1,int *param_2,int *param_3)

{
  code *pcVar1;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  
  if (*param_1 != 0) {
    if ((*param_2 == 0) || (*(int *)(*(long *)(param_2 + 2) + (long)*param_2 * 4 + -4) == 1)) {
      if ((*param_3 == 0) || (*(int *)(*(long *)(param_3 + 2) + (long)*param_3 * 4 + -4) == 1)) {
        pcVar1 = FUN_109687d84;
      }
      else {
        pcVar1 = (code *)0x109687dac;
      }
    }
    else if ((*param_3 == 0) || (*(int *)(*(long *)(param_3 + 2) + (long)*param_3 * 4 + -4) == 1)) {
      pcVar1 = (code *)0x109687dd4;
    }
    else {
      pcVar1 = (code *)0x109687dfc;
    }
    uStack_20 = *(undefined8 *)(param_1 + 4);
    uStack_28 = *(undefined8 *)(param_1 + 2);
    uStack_30 = *(undefined8 *)param_1;
    uStack_40 = *(undefined8 *)(param_2 + 4);
    uStack_48 = *(undefined8 *)(param_2 + 2);
    uStack_50 = *(undefined8 *)param_2;
    uStack_60 = *(undefined8 *)(param_3 + 4);
    uStack_68 = *(undefined8 *)(param_3 + 2);
    uStack_70 = *(undefined8 *)param_3;
    FUN_109684bac(&uStack_30,&uStack_50,&uStack_70,pcVar1);
    return;
  }
  **(float **)(param_1 + 4) = **(float **)(param_2 + 4) - **(float **)(param_3 + 4);
  return;
}



/* Entry: 109687d84; end: 109687e23;  */

void FUN_109687d84(float *param_1,float *param_2,float *param_3,int param_4)

{
  long lVar1;
  float fVar2;
  float fVar3;
  
  if (0 < param_4) {
    fVar2 = *param_2;
    fVar3 = *param_3;
    lVar1 = (long)param_4;
    do {
      *param_1 = fVar2 - fVar3;
      lVar1 = lVar1 + -1;
      param_1 = param_1 + 1;
    } while (lVar1 != 0);
  }
  return;
}



/* Entry: 109687e24; end: 109687ef3;  */

void FUN_109687e24(undefined8 param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined4 auStack_58 [2];
  long lStack_50;
  undefined8 uStack_48;
  undefined4 auStack_40 [2];
  long lStack_38;
  undefined8 uStack_30;
  undefined4 auStack_28 [2];
  long lStack_20;
  undefined8 uStack_18;
  
  lVar1 = *param_2;
  lVar2 = param_2[1];
  lVar3 = param_2[2];
  uStack_18 = *(undefined8 *)(lVar1 + 8);
  lStack_20 = *(long *)(lVar1 + 0x10);
  uStack_30 = *(undefined8 *)(lVar2 + 8);
  lStack_38 = *(long *)(lVar2 + 0x10);
  uStack_48 = *(undefined8 *)(lVar3 + 8);
  lStack_50 = *(long *)(lVar3 + 0x10);
  auStack_28[0] = (undefined4)((ulong)(*(long *)(lVar1 + 0x18) - lStack_20) >> 2);
  auStack_40[0] = (undefined4)((ulong)(*(long *)(lVar2 + 0x18) - lStack_38) >> 2);
  auStack_58[0] = (undefined4)((ulong)(*(long *)(lVar3 + 0x18) - lStack_50) >> 2);
  FUN_109687c84(auStack_28,auStack_40,auStack_58);
  return;
}



/* Entry: 109687ef4; end: 109687fbf;  */

void FUN_109687ef4(undefined8 param_1)

{
  int *piVar1;
  int *piVar2;
  int **ppiVar3;
  code *pcVar4;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 *puStack_60;
  code *pcStack_58;
  int *piStack_50;
  int *piStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined4 uStack_30;
  undefined1 auStack_2c [4];
  long lStack_28;
  
  ppiVar3 = &piStack_50;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_38 = 0x2800000028;
  uStack_30 = 0x28;
  piStack_48 = (int *)0x0;
  uStack_40 = 0;
  piStack_50 = (int *)0x0;
  FUN_109522b28(&piStack_50,&uStack_38,auStack_2c,3);
  piVar2 = (int *)0x0;
  FUN_109680a78(param_1,0,&piStack_50,FUN_109688160);
  piVar1 = piStack_50;
  if (piStack_50 != (int *)0x0) {
    piStack_48 = piStack_50;
    __ZdlPv();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return;
  }
  ___stack_chk_fail();
  if (piStack_50 != (int *)0x0) {
    piStack_48 = piStack_50;
    __ZdlPv();
  }
  __Unwind_Resume();
  if (*piVar1 != 0) {
    if ((*piVar2 == 0) || (*(int *)(*(long *)(piVar2 + 2) + (long)*piVar2 * 4 + -4) == 1)) {
      if ((*(int *)ppiVar3 == 0) ||
         (*(int *)(*(long *)((long)ppiVar3 + 8) + (long)*(int *)ppiVar3 * 4 + -4) == 1)) {
        pcVar4 = FUN_1096880c0;
      }
      else {
        pcVar4 = (code *)0x1096880e8;
      }
    }
    else if ((*(int *)ppiVar3 == 0) ||
            (*(int *)(*(long *)((long)ppiVar3 + 8) + (long)*(int *)ppiVar3 * 4 + -4) == 1)) {
      pcVar4 = (code *)0x109688110;
    }
    else {
      pcVar4 = (code *)0x109688138;
    }
    pcStack_58 = FUN_109687fc0;
    uStack_70 = *(undefined8 *)(piVar1 + 4);
    uStack_78 = *(undefined8 *)(piVar1 + 2);
    uStack_80 = *(undefined8 *)piVar1;
    uStack_90 = *(undefined8 *)(piVar2 + 4);
    uStack_98 = *(undefined8 *)(piVar2 + 2);
    uStack_a0 = *(undefined8 *)piVar2;
    uStack_b0 = *(undefined8 *)((long)ppiVar3 + 0x10);
    uStack_b8 = *(undefined8 *)((long)ppiVar3 + 8);
    uStack_c0 = *ppiVar3;
    puStack_60 = &stack0xfffffffffffffff0;
    FUN_10968528c(&uStack_80,&uStack_a0,&uStack_c0,pcVar4);
    return;
  }
  **(undefined8 **)(piVar1 + 4) =
       CONCAT44((float)((ulong)**(undefined8 **)(piVar2 + 4) >> 0x20) -
                (float)((ulong)**(undefined8 **)((long)ppiVar3 + 0x10) >> 0x20),
                (float)**(undefined8 **)(piVar2 + 4) -
                (float)**(undefined8 **)((long)ppiVar3 + 0x10));
  return;
}



/* Entry: 109687fc0; end: 1096880bf;  */

void FUN_109687fc0(int *param_1,int *param_2,int *param_3)

{
  code *pcVar1;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  
  if (*param_1 != 0) {
    if ((*param_2 == 0) || (*(int *)(*(long *)(param_2 + 2) + (long)*param_2 * 4 + -4) == 1)) {
      if ((*param_3 == 0) || (*(int *)(*(long *)(param_3 + 2) + (long)*param_3 * 4 + -4) == 1)) {
        pcVar1 = FUN_1096880c0;
      }
      else {
        pcVar1 = (code *)0x1096880e8;
      }
    }
    else if ((*param_3 == 0) || (*(int *)(*(long *)(param_3 + 2) + (long)*param_3 * 4 + -4) == 1)) {
      pcVar1 = (code *)0x109688110;
    }
    else {
      pcVar1 = (code *)0x109688138;
    }
    uStack_20 = *(undefined8 *)(param_1 + 4);
    uStack_28 = *(undefined8 *)(param_1 + 2);
    uStack_30 = *(undefined8 *)param_1;
    uStack_40 = *(undefined8 *)(param_2 + 4);
    uStack_48 = *(undefined8 *)(param_2 + 2);
    uStack_50 = *(undefined8 *)param_2;
    uStack_60 = *(undefined8 *)(param_3 + 4);
    uStack_68 = *(undefined8 *)(param_3 + 2);
    uStack_70 = *(undefined8 *)param_3;
    FUN_10968528c(&uStack_30,&uStack_50,&uStack_70,pcVar1);
    return;
  }
  **(undefined8 **)(param_1 + 4) =
       CONCAT44((float)((ulong)**(undefined8 **)(param_2 + 4) >> 0x20) -
                (float)((ulong)**(undefined8 **)(param_3 + 4) >> 0x20),
                (float)**(undefined8 **)(param_2 + 4) - (float)**(undefined8 **)(param_3 + 4));
  return;
}



/* Entry: 1096880c0; end: 10968815f;  */

void FUN_1096880c0(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,int param_4)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  if (0 < param_4) {
    uVar2 = *param_2;
    uVar3 = *param_3;
    lVar1 = (long)param_4;
    do {
      *param_1 = CONCAT44((float)((ulong)uVar2 >> 0x20) - (float)((ulong)uVar3 >> 0x20),
                          (float)uVar2 - (float)uVar3);
      lVar1 = lVar1 + -1;
      param_1 = param_1 + 1;
    } while (lVar1 != 0);
  }
  return;
}



/* Entry: 109688160; end: 1096881d7;  */

void FUN_109688160(undefined8 param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined4 auStack_58 [2];
  long lStack_50;
  undefined8 uStack_48;
  undefined4 auStack_40 [2];
  long lStack_38;
  undefined8 uStack_30;
  undefined4 auStack_28 [2];
  long lStack_20;
  undefined8 uStack_18;
  
  lVar1 = *param_2;
  lVar2 = param_2[1];
  lVar3 = param_2[2];
  uStack_18 = *(undefined8 *)(lVar1 + 8);
  lStack_20 = *(long *)(lVar1 + 0x10);
  uStack_30 = *(undefined8 *)(lVar2 + 8);
  lStack_38 = *(long *)(lVar2 + 0x10);
  uStack_48 = *(undefined8 *)(lVar3 + 8);
  lStack_50 = *(long *)(lVar3 + 0x10);
  auStack_28[0] = (undefined4)((ulong)(*(long *)(lVar1 + 0x18) - lStack_20) >> 2);
  auStack_40[0] = (undefined4)((ulong)(*(long *)(lVar2 + 0x18) - lStack_38) >> 2);
  auStack_58[0] = (undefined4)((ulong)(*(long *)(lVar3 + 0x18) - lStack_50) >> 2);
  FUN_109687fc0(auStack_28,auStack_40,auStack_58);
  return;
}



/* Entry: 1096881d8; end: 1096883cf;  */

void FUN_1096881d8(void)

{
  uint uVar1;
  long lVar2;
  long *plVar3;
  float *pfVar4;
  float *pfVar5;
  ulong uVar6;
  int *piVar7;
  long lVar8;
  long lStack_48;
  long lStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  FUN_10968098c(&UNK_10dfdaad2,FUN_1096883d0);
  FUN_109688444(&UNK_10dfdaad2,0x1096883f0);
  FUN_10968098c(&UNK_10dfdaad6,0x109688568);
  FUN_1096885f8(&UNK_10dfdaad6,FUN_109688588);
  FUN_10968098c(&UNK_10dfdaadb,FUN_109688738);
  FUN_1096887d0(&UNK_10dfdaadb,FUN_109688758);
  FUN_10968098c(&UNK_10dfdaae1,FUN_109688924);
  FUN_1096889b4(&UNK_10dfdaae1,FUN_109688944);
  FUN_10968098c(&UNK_10dfdaae5,FUN_109688af4);
  FUN_109688b84(&UNK_10dfdaae5,FUN_109688b14);
  FUN_10968098c(&UNK_10dfdaae9,FUN_109688cc4);
  FUN_109688d54(&UNK_10dfdaae9,FUN_109688ce4);
  FUN_10968098c(&UNK_10dfdaaed,FUN_109688e94);
  FUN_109688f04(&UNK_10dfdaaed,FUN_109688eac);
  FUN_10968098c(&UNK_10dfdaaf1,FUN_1096891fc);
  FUN_10968926c(&UNK_10dfdaaf1,FUN_109689214);
  FUN_10968098c(&UNK_10dfdaaf5,FUN_109689564);
  FUN_1096895fc(&UNK_10dfdaaf5,FUN_109689584);
  FUN_10968098c(&UNK_10dfdaaf9,FUN_109689750);
  FUN_109689778(&UNK_10dfdaaf9,0x109689770);
  FUN_10968098c(&UNK_10dfdaafe,FUN_1096898e0);
  FUN_109689970(&UNK_10dfdaafe,FUN_109689900);
  FUN_109689ab0();
  FUN_10968098c(&UNK_10dfdab06,FUN_109689e10);
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_30 = 0x1800000018;
  lStack_40 = 0;
  uStack_38 = 0;
  lStack_48 = 0;
  FUN_109522b28(&lStack_48,&uStack_30,&lStack_28,2);
  plVar3 = (long *)0x0;
  FUN_109680a78(&UNK_10dfdab06,0,&lStack_48,FUN_109689f48);
  lVar2 = lStack_48;
  if (lStack_48 != 0) {
    lStack_40 = lStack_48;
    __ZdlPv();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return;
  }
  ___stack_chk_fail();
  if (lStack_48 != 0) {
    lStack_40 = lStack_48;
    __ZdlPv();
  }
  __Unwind_Resume(lVar2);
  lVar2 = *plVar3;
  pfVar4 = *(float **)(plVar3[1] + 8);
  pfVar5 = *(float **)(lVar2 + 8);
  uVar6 = *(long *)(lVar2 + 0x18) - (long)*(int **)(lVar2 + 0x10);
  if ((uVar6 & 0x3fffffffc) == 0) {
    uVar6 = 1;
  }
  else {
    lVar8 = ((long)(uVar6 * 0x40000000) >> 0x20) << 2;
    uVar6 = 1;
    piVar7 = *(int **)(lVar2 + 0x10);
    do {
      uVar1 = *piVar7 * (int)uVar6;
      uVar6 = (ulong)uVar1;
      lVar8 = lVar8 + -4;
      piVar7 = piVar7 + 1;
    } while (lVar8 != 0);
    if ((int)uVar1 < 1) {
      return;
    }
  }
  do {
    *pfVar5 = SQRT(*pfVar4);
    uVar6 = uVar6 - 1;
    pfVar4 = pfVar4 + 1;
    pfVar5 = pfVar5 + 1;
  } while (uVar6 != 0);
  return;
}



/* Entry: 1096883d0; end: 109688443;  */

void FUN_1096883d0(undefined8 *param_1,int *param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  long lVar3;
  undefined4 *puVar4;
  
  puVar2 = *(undefined4 **)(param_2 + 2);
  lVar3 = (long)*param_2;
  puVar1 = (undefined4 *)((long)puVar2 + ((lVar3 << 0x20) >> 0x1e));
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = 0;
  if (lVar3 != 0) {
    FUN_10925b938(param_1,lVar3);
    puVar4 = (undefined4 *)param_1[1];
    for (; puVar2 != puVar1; puVar2 = puVar2 + 1) {
      *puVar4 = *puVar2;
      puVar4 = puVar4 + 1;
    }
    param_1[1] = puVar4;
  }
  return;
}



/* Entry: 109688444; end: 109688507;  */

void FUN_109688444(undefined8 param_1)

{
  uint uVar1;
  long lVar2;
  long *plVar3;
  float *pfVar4;
  float *pfVar5;
  ulong uVar6;
  int *piVar7;
  long lVar8;
  long lStack_48;
  long lStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_30 = 0x1800000018;
  lStack_40 = 0;
  uStack_38 = 0;
  lStack_48 = 0;
  FUN_109522b28(&lStack_48,&uStack_30,&lStack_28,2);
  plVar3 = (long *)0x0;
  FUN_109680a78(param_1,0,&lStack_48,FUN_109688508);
  lVar2 = lStack_48;
  if (lStack_48 != 0) {
    lStack_40 = lStack_48;
    __ZdlPv();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return;
  }
  ___stack_chk_fail();
  if (lStack_48 != 0) {
    lStack_40 = lStack_48;
    __ZdlPv();
  }
  __Unwind_Resume(lVar2);
  lVar2 = *plVar3;
  pfVar4 = *(float **)(plVar3[1] + 8);
  pfVar5 = *(float **)(lVar2 + 8);
  uVar6 = *(long *)(lVar2 + 0x18) - (long)*(int **)(lVar2 + 0x10);
  if ((uVar6 & 0x3fffffffc) == 0) {
    uVar6 = 1;
  }
  else {
    lVar8 = ((long)(uVar6 * 0x40000000) >> 0x20) << 2;
    uVar6 = 1;
    piVar7 = *(int **)(lVar2 + 0x10);
    do {
      uVar1 = *piVar7 * (int)uVar6;
      uVar6 = (ulong)uVar1;
      lVar8 = lVar8 + -4;
      piVar7 = piVar7 + 1;
    } while (lVar8 != 0);
    if ((int)uVar1 < 1) {
      return;
    }
  }
  do {
    *pfVar5 = ABS(*pfVar4);
    uVar6 = uVar6 - 1;
    pfVar4 = pfVar4 + 1;
    pfVar5 = pfVar5 + 1;
  } while (uVar6 != 0);
  return;
}



/* Entry: 109688508; end: 109688587;  */

void FUN_109688508(undefined8 param_1,long *param_2)

{
  long lVar1;
  uint uVar2;
  float *pfVar3;
  float *pfVar4;
  ulong uVar5;
  int *piVar6;
  long lVar7;
  
  lVar1 = *param_2;
  pfVar3 = *(float **)(param_2[1] + 8);
  pfVar4 = *(float **)(lVar1 + 8);
  uVar5 = *(long *)(lVar1 + 0x18) - (long)*(int **)(lVar1 + 0x10);
  if ((uVar5 & 0x3fffffffc) == 0) {
    uVar5 = 1;
  }
  else {
    lVar7 = ((long)(uVar5 * 0x40000000) >> 0x20) << 2;
    uVar5 = 1;
    piVar6 = *(int **)(lVar1 + 0x10);
    do {
      uVar2 = *piVar6 * (int)uVar5;
      uVar5 = (ulong)uVar2;
      lVar7 = lVar7 + -4;
      piVar6 = piVar6 + 1;
    } while (lVar7 != 0);
    if ((int)uVar2 < 1) {
      return;
    }
  }
  do {
    *pfVar4 = ABS(*pfVar3);
    uVar5 = uVar5 - 1;
    pfVar3 = pfVar3 + 1;
    pfVar4 = pfVar4 + 1;
  } while (uVar5 != 0);
  return;
}



/* Entry: 109688588; end: 1096885f7;  */

void FUN_109688588(int *param_1,long param_2)

{
  uint uVar1;
  int *piVar2;
  long lVar3;
  undefined4 *puVar4;
  ulong uVar5;
  undefined4 *puVar6;
  undefined4 uVar7;
  
  if (*param_1 == 0) {
    uVar5 = 1;
  }
  else {
    lVar3 = (long)*param_1 << 2;
    uVar5 = 1;
    piVar2 = *(int **)(param_1 + 2);
    do {
      uVar1 = *piVar2 * (int)uVar5;
      uVar5 = (ulong)uVar1;
      lVar3 = lVar3 + -4;
      piVar2 = piVar2 + 1;
    } while (lVar3 != 0);
    if ((int)uVar1 < 1) {
      return;
    }
  }
  puVar4 = *(undefined4 **)(param_2 + 0x10);
  puVar6 = *(undefined4 **)(param_1 + 4);
  do {
    uVar7 = *puVar4;
    _atanf();
    *puVar6 = uVar7;
    uVar5 = uVar5 - 1;
    puVar4 = puVar4 + 1;
    puVar6 = puVar6 + 1;
  } while (uVar5 != 0);
  return;
}



/* Entry: 1096885f8; end: 1096886bb;  */

void FUN_1096885f8(undefined8 param_1)

{
  uint uVar1;
  long lVar2;
  long *plVar3;
  int *piVar4;
  ulong uVar5;
  long lVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  undefined4 uVar9;
  long lStack_48;
  long lStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_30 = 0x1800000018;
  lStack_40 = 0;
  uStack_38 = 0;
  lStack_48 = 0;
  FUN_109522b28(&lStack_48,&uStack_30,&lStack_28,2);
  plVar3 = (long *)0x0;
  FUN_109680a78(param_1,0,&lStack_48,FUN_1096886bc);
  lVar2 = lStack_48;
  if (lStack_48 != 0) {
    lStack_40 = lStack_48;
    __ZdlPv();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return;
  }
  ___stack_chk_fail();
  if (lStack_48 != 0) {
    lStack_40 = lStack_48;
    __ZdlPv();
  }
  __Unwind_Resume(lVar2);
  lVar2 = *plVar3;
  puVar7 = *(undefined4 **)(plVar3[1] + 8);
  puVar8 = *(undefined4 **)(lVar2 + 8);
  uVar5 = *(long *)(lVar2 + 0x18) - (long)*(int **)(lVar2 + 0x10);
  if ((uVar5 & 0x3fffffffc) == 0) {
    uVar5 = 1;
  }
  else {
    lVar6 = ((long)(uVar5 * 0x40000000) >> 0x20) << 2;
    uVar5 = 1;
    piVar4 = *(int **)(lVar2 + 0x10);
    do {
      uVar1 = *piVar4 * (int)uVar5;
      uVar5 = (ulong)uVar1;
      lVar6 = lVar6 + -4;
      piVar4 = piVar4 + 1;
    } while (lVar6 != 0);
    if ((int)uVar1 < 1) {
      return;
    }
  }
  do {
    uVar9 = *puVar7;
    _atanf();
    *puVar8 = uVar9;
    uVar5 = uVar5 - 1;
    puVar7 = puVar7 + 1;
    puVar8 = puVar8 + 1;
  } while (uVar5 != 0);
  return;
}



/* Entry: 1096886bc; end: 109688737;  */

void FUN_1096886bc(undefined8 param_1,long *param_2)

{
  long lVar1;
  uint uVar2;
  int *piVar3;
  ulong uVar4;
  long lVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined4 uVar8;
  
  lVar1 = *param_2;
  puVar6 = *(undefined4 **)(param_2[1] + 8);
  puVar7 = *(undefined4 **)(lVar1 + 8);
  uVar4 = *(long *)(lVar1 + 0x18) - (long)*(int **)(lVar1 + 0x10);
  if ((uVar4 & 0x3fffffffc) == 0) {
    uVar4 = 1;
  }
  else {
    lVar5 = ((long)(uVar4 * 0x40000000) >> 0x20) << 2;
    uVar4 = 1;
    piVar3 = *(int **)(lVar1 + 0x10);
    do {
      uVar2 = *piVar3 * (int)uVar4;
      uVar4 = (ulong)uVar2;
      lVar5 = lVar5 + -4;
      piVar3 = piVar3 + 1;
    } while (lVar5 != 0);
    if ((int)uVar2 < 1) {
      return;
    }
  }
  do {
    uVar8 = *puVar6;
    _atanf();
    *puVar7 = uVar8;
    uVar4 = uVar4 - 1;
    puVar6 = puVar6 + 1;
    puVar7 = puVar7 + 1;
  } while (uVar4 != 0);
  return;
}



/* Entry: 109688738; end: 109688757;  */

void FUN_109688738(undefined8 *param_1,int *param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  long lVar3;
  undefined4 *puVar4;
  
  puVar2 = *(undefined4 **)(param_2 + 2);
  lVar3 = (long)*param_2;
  puVar1 = (undefined4 *)((long)puVar2 + ((lVar3 << 0x20) >> 0x1e));
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = 0;
  if (lVar3 != 0) {
    FUN_10925b938(param_1,lVar3);
    puVar4 = (undefined4 *)param_1[1];
    for (; puVar2 != puVar1; puVar2 = puVar2 + 1) {
      *puVar4 = *puVar2;
      puVar4 = puVar4 + 1;
    }
    param_1[1] = puVar4;
  }
  return;
}



/* Entry: 109688758; end: 1096887cf;  */

void FUN_109688758(int *param_1,long param_2,long param_3)

{
  uint uVar1;
  int *piVar2;
  long lVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  ulong uVar6;
  undefined4 *puVar7;
  undefined4 uVar8;
  
  if (*param_1 == 0) {
    uVar6 = 1;
  }
  else {
    lVar3 = (long)*param_1 << 2;
    uVar6 = 1;
    piVar2 = *(int **)(param_1 + 2);
    do {
      uVar1 = *piVar2 * (int)uVar6;
      uVar6 = (ulong)uVar1;
      lVar3 = lVar3 + -4;
      piVar2 = piVar2 + 1;
    } while (lVar3 != 0);
    if ((int)uVar1 < 1) {
      return;
    }
  }
  puVar4 = *(undefined4 **)(param_2 + 0x10);
  puVar5 = *(undefined4 **)(param_3 + 0x10);
  puVar7 = *(undefined4 **)(param_1 + 4);
  do {
    uVar8 = *puVar4;
    _atan2f(uVar8,*puVar5);
    *puVar7 = uVar8;
    uVar6 = uVar6 - 1;
    puVar4 = puVar4 + 1;
    puVar5 = puVar5 + 1;
    puVar7 = puVar7 + 1;
  } while (uVar6 != 0);
  return;
}



/* Entry: 1096887d0; end: 10968889b;  */

void FUN_1096887d0(undefined8 param_1)

{
  uint uVar1;
  long lVar2;
  long *plVar3;
  int *piVar4;
  ulong uVar5;
  long lVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  undefined4 uVar10;
  long lStack_50;
  long lStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined4 uStack_30;
  undefined1 auStack_2c [4];
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_38 = 0x1800000018;
  uStack_30 = 0x18;
  lStack_48 = 0;
  uStack_40 = 0;
  lStack_50 = 0;
  FUN_109522b28(&lStack_50,&uStack_38,auStack_2c,3);
  plVar3 = (long *)0x0;
  FUN_109680a78(param_1,0,&lStack_50,FUN_10968889c);
  lVar2 = lStack_50;
  if (lStack_50 != 0) {
    lStack_48 = lStack_50;
    __ZdlPv();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return;
  }
  ___stack_chk_fail();
  if (lStack_50 != 0) {
    lStack_48 = lStack_50;
    __ZdlPv();
  }
  __Unwind_Resume(lVar2);
  lVar2 = *plVar3;
  puVar7 = *(undefined4 **)(lVar2 + 8);
  uVar5 = *(long *)(lVar2 + 0x18) - (long)*(int **)(lVar2 + 0x10);
  puVar8 = *(undefined4 **)(plVar3[1] + 8);
  puVar9 = *(undefined4 **)(plVar3[2] + 8);
  if ((uVar5 & 0x3fffffffc) == 0) {
    uVar5 = 1;
  }
  else {
    lVar6 = ((long)(uVar5 * 0x40000000) >> 0x20) << 2;
    uVar5 = 1;
    piVar4 = *(int **)(lVar2 + 0x10);
    do {
      uVar1 = *piVar4 * (int)uVar5;
      uVar5 = (ulong)uVar1;
      lVar6 = lVar6 + -4;
      piVar4 = piVar4 + 1;
    } while (lVar6 != 0);
    if ((int)uVar1 < 1) {
      return;
    }
  }
  do {
    uVar10 = *puVar8;
    _atan2f(uVar10,*puVar9);
    *puVar7 = uVar10;
    uVar5 = uVar5 - 1;
    puVar7 = puVar7 + 1;
    puVar8 = puVar8 + 1;
    puVar9 = puVar9 + 1;
  } while (uVar5 != 0);
  return;
}



/* Entry: 10968889c; end: 109688923;  */

void FUN_10968889c(undefined8 param_1,long *param_2)

{
  long lVar1;
  uint uVar2;
  int *piVar3;
  ulong uVar4;
  long lVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  undefined4 uVar9;
  
  lVar1 = *param_2;
  puVar6 = *(undefined4 **)(lVar1 + 8);
  uVar4 = *(long *)(lVar1 + 0x18) - (long)*(int **)(lVar1 + 0x10);
  puVar7 = *(undefined4 **)(param_2[1] + 8);
  puVar8 = *(undefined4 **)(param_2[2] + 8);
  if ((uVar4 & 0x3fffffffc) == 0) {
    uVar4 = 1;
  }
  else {
    lVar5 = ((long)(uVar4 * 0x40000000) >> 0x20) << 2;
    uVar4 = 1;
    piVar3 = *(int **)(lVar1 + 0x10);
    do {
      uVar2 = *piVar3 * (int)uVar4;
      uVar4 = (ulong)uVar2;
      lVar5 = lVar5 + -4;
      piVar3 = piVar3 + 1;
    } while (lVar5 != 0);
    if ((int)uVar2 < 1) {
      return;
    }
  }
  do {
    uVar9 = *puVar7;
    _atan2f(uVar9,*puVar8);
    *puVar6 = uVar9;
    uVar4 = uVar4 - 1;
    puVar6 = puVar6 + 1;
    puVar7 = puVar7 + 1;
    puVar8 = puVar8 + 1;
  } while (uVar4 != 0);
  return;
}



/* Entry: 109688924; end: 109688943;  */

void FUN_109688924(undefined8 *param_1,int *param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  long lVar3;
  undefined4 *puVar4;
  
  puVar2 = *(undefined4 **)(param_2 + 2);
  lVar3 = (long)*param_2;
  puVar1 = (undefined4 *)((long)puVar2 + ((lVar3 << 0x20) >> 0x1e));
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = 0;
  if (lVar3 != 0) {
    FUN_10925b938(param_1,lVar3);
    puVar4 = (undefined4 *)param_1[1];
    for (; puVar2 != puVar1; puVar2 = puVar2 + 1) {
      *puVar4 = *puVar2;
      puVar4 = puVar4 + 1;
    }
    param_1[1] = puVar4;
  }
  return;
}



/* Entry: 109688944; end: 1096889b3;  */

void FUN_109688944(int *param_1,long param_2)

{
  uint uVar1;
  int *piVar2;
  long lVar3;
  undefined4 *puVar4;
  ulong uVar5;
  undefined4 *puVar6;
  undefined4 uVar7;
  
  if (*param_1 == 0) {
    uVar5 = 1;
  }
  else {
    lVar3 = (long)*param_1 << 2;
    uVar5 = 1;
    piVar2 = *(int **)(param_1 + 2);
    do {
      uVar1 = *piVar2 * (int)uVar5;
      uVar5 = (ulong)uVar1;
      lVar3 = lVar3 + -4;
      piVar2 = piVar2 + 1;
    } while (lVar3 != 0);
    if ((int)uVar1 < 1) {
      return;
    }
  }
  puVar4 = *(undefined4 **)(param_2 + 0x10);
  puVar6 = *(undefined4 **)(param_1 + 4);
  do {
    uVar7 = *puVar4;
    _cosf();
    *puVar6 = uVar7;
    uVar5 = uVar5 - 1;
    puVar4 = puVar4 + 1;
    puVar6 = puVar6 + 1;
  } while (uVar5 != 0);
  return;
}



/* Entry: 1096889b4; end: 109688a77;  */

void FUN_1096889b4(undefined8 param_1)

{
  uint uVar1;
  long lVar2;
  long *plVar3;
  int *piVar4;
  ulong uVar5;
  long lVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  undefined4 uVar9;
  long lStack_48;
  long lStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_30 = 0x1800000018;
  lStack_40 = 0;
  uStack_38 = 0;
  lStack_48 = 0;
  FUN_109522b28(&lStack_48,&uStack_30,&lStack_28,2);
  plVar3 = (long *)0x0;
  FUN_109680a78(param_1,0,&lStack_48,FUN_109688a78);
  lVar2 = lStack_48;
  if (lStack_48 != 0) {
    lStack_40 = lStack_48;
    __ZdlPv();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return;
  }
  ___stack_chk_fail();
  if (lStack_48 != 0) {
    lStack_40 = lStack_48;
    __ZdlPv();
  }
  __Unwind_Resume(lVar2);
  lVar2 = *plVar3;
  puVar7 = *(undefined4 **)(plVar3[1] + 8);
  puVar8 = *(undefined4 **)(lVar2 + 8);
  uVar5 = *(long *)(lVar2 + 0x18) - (long)*(int **)(lVar2 + 0x10);
  if ((uVar5 & 0x3fffffffc) == 0) {
    uVar5 = 1;
  }
  else {
    lVar6 = ((long)(uVar5 * 0x40000000) >> 0x20) << 2;
    uVar5 = 1;
    piVar4 = *(int **)(lVar2 + 0x10);
    do {
      uVar1 = *piVar4 * (int)uVar5;
      uVar5 = (ulong)uVar1;
      lVar6 = lVar6 + -4;
      piVar4 = piVar4 + 1;
    } while (lVar6 != 0);
    if ((int)uVar1 < 1) {
      return;
    }
  }
  do {
    uVar9 = *puVar7;
    _cosf();
    *puVar8 = uVar9;
    uVar5 = uVar5 - 1;
    puVar7 = puVar7 + 1;
    puVar8 = puVar8 + 1;
  } while (uVar5 != 0);
  return;
}



/* Entry: 109688a78; end: 109688af3;  */

void FUN_109688a78(undefined8 param_1,long *param_2)

{
  long lVar1;
  uint uVar2;
  int *piVar3;
  ulong uVar4;
  long lVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined4 uVar8;
  
  lVar1 = *param_2;
  puVar6 = *(undefined4 **)(param_2[1] + 8);
  puVar7 = *(undefined4 **)(lVar1 + 8);
  uVar4 = *(long *)(lVar1 + 0x18) - (long)*(int **)(lVar1 + 0x10);
  if ((uVar4 & 0x3fffffffc) == 0) {
    uVar4 = 1;
  }
  else {
    lVar5 = ((long)(uVar4 * 0x40000000) >> 0x20) << 2;
    uVar4 = 1;
    piVar3 = *(int **)(lVar1 + 0x10);
    do {
      uVar2 = *piVar3 * (int)uVar4;
      uVar4 = (ulong)uVar2;
      lVar5 = lVar5 + -4;
      piVar3 = piVar3 + 1;
    } while (lVar5 != 0);
    if ((int)uVar2 < 1) {
      return;
    }
  }
  do {
    uVar8 = *puVar6;
    _cosf();
    *puVar7 = uVar8;
    uVar4 = uVar4 - 1;
    puVar6 = puVar6 + 1;
    puVar7 = puVar7 + 1;
  } while (uVar4 != 0);
  return;
}



/* Entry: 109688af4; end: 109688b13;  */

void FUN_109688af4(undefined8 *param_1,int *param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  long lVar3;
  undefined4 *puVar4;
  
  puVar2 = *(undefined4 **)(param_2 + 2);
  lVar3 = (long)*param_2;
  puVar1 = (undefined4 *)((long)puVar2 + ((lVar3 << 0x20) >> 0x1e));
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = 0;
  if (lVar3 != 0) {
    FUN_10925b938(param_1,lVar3);
    puVar4 = (undefined4 *)param_1[1];
    for (; puVar2 != puVar1; puVar2 = puVar2 + 1) {
      *puVar4 = *puVar2;
      puVar4 = puVar4 + 1;
    }
    param_1[1] = puVar4;
  }
  return;
}



/* Entry: 109688b14; end: 109688b83;  */

void FUN_109688b14(int *param_1,long param_2)

{
  uint uVar1;
  int *piVar2;
  long lVar3;
  undefined4 *puVar4;
  ulong uVar5;
  undefined4 *puVar6;
  undefined4 uVar7;
  
  if (*param_1 == 0) {
    uVar5 = 1;
  }
  else {
    lVar3 = (long)*param_1 << 2;
    uVar5 = 1;
    piVar2 = *(int **)(param_1 + 2);
    do {
      uVar1 = *piVar2 * (int)uVar5;
      uVar5 = (ulong)uVar1;
      lVar3 = lVar3 + -4;
      piVar2 = piVar2 + 1;
    } while (lVar3 != 0);
    if ((int)uVar1 < 1) {
      return;
    }
  }
  puVar4 = *(undefined4 **)(param_2 + 0x10);
  puVar6 = *(undefined4 **)(param_1 + 4);
  do {
    uVar7 = *puVar4;
    _expf();
    *puVar6 = uVar7;
    uVar5 = uVar5 - 1;
    puVar4 = puVar4 + 1;
    puVar6 = puVar6 + 1;
  } while (uVar5 != 0);
  return;
}



/* Entry: 109688b84; end: 109688c47;  */

void FUN_109688b84(undefined8 param_1)

{
  uint uVar1;
  long lVar2;
  long *plVar3;
  int *piVar4;
  ulong uVar5;
  long lVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  undefined4 uVar9;
  long lStack_48;
  long lStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_30 = 0x1800000018;
  lStack_40 = 0;
  uStack_38 = 0;
  lStack_48 = 0;
  FUN_109522b28(&lStack_48,&uStack_30,&lStack_28,2);
  plVar3 = (long *)0x0;
  FUN_109680a78(param_1,0,&lStack_48,FUN_109688c48);
  lVar2 = lStack_48;
  if (lStack_48 != 0) {
    lStack_40 = lStack_48;
    __ZdlPv();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return;
  }
  ___stack_chk_fail();
  if (lStack_48 != 0) {
    lStack_40 = lStack_48;
    __ZdlPv();
  }
  __Unwind_Resume(lVar2);
  lVar2 = *plVar3;
  puVar7 = *(undefined4 **)(plVar3[1] + 8);
  puVar8 = *(undefined4 **)(lVar2 + 8);
  uVar5 = *(long *)(lVar2 + 0x18) - (long)*(int **)(lVar2 + 0x10);
  if ((uVar5 & 0x3fffffffc) == 0) {
    uVar5 = 1;
  }
  else {
    lVar6 = ((long)(uVar5 * 0x40000000) >> 0x20) << 2;
    uVar5 = 1;
    piVar4 = *(int **)(lVar2 + 0x10);
    do {
      uVar1 = *piVar4 * (int)uVar5;
      uVar5 = (ulong)uVar1;
      lVar6 = lVar6 + -4;
      piVar4 = piVar4 + 1;
    } while (lVar6 != 0);
    if ((int)uVar1 < 1) {
      return;
    }
  }
  do {
    uVar9 = *puVar7;
    _expf();
    *puVar8 = uVar9;
    uVar5 = uVar5 - 1;
    puVar7 = puVar7 + 1;
    puVar8 = puVar8 + 1;
  } while (uVar5 != 0);
  return;
}



/* Entry: 109688c48; end: 109688cc3;  */

void FUN_109688c48(undefined8 param_1,long *param_2)

{
  long lVar1;
  uint uVar2;
  int *piVar3;
  ulong uVar4;
  long lVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined4 uVar8;
  
  lVar1 = *param_2;
  puVar6 = *(undefined4 **)(param_2[1] + 8);
  puVar7 = *(undefined4 **)(lVar1 + 8);
  uVar4 = *(long *)(lVar1 + 0x18) - (long)*(int **)(lVar1 + 0x10);
  if ((uVar4 & 0x3fffffffc) == 0) {
    uVar4 = 1;
  }
  else {
    lVar5 = ((long)(uVar4 * 0x40000000) >> 0x20) << 2;
    uVar4 = 1;
    piVar3 = *(int **)(lVar1 + 0x10);
    do {
      uVar2 = *piVar3 * (int)uVar4;
      uVar4 = (ulong)uVar2;
      lVar5 = lVar5 + -4;
      piVar3 = piVar3 + 1;
    } while (lVar5 != 0);
    if ((int)uVar2 < 1) {
      return;
    }
  }
  do {
    uVar8 = *puVar6;
    _expf();
    *puVar7 = uVar8;
    uVar4 = uVar4 - 1;
    puVar6 = puVar6 + 1;
    puVar7 = puVar7 + 1;
  } while (uVar4 != 0);
  return;
}



/* Entry: 109688cc4; end: 109688ce3;  */

void FUN_109688cc4(undefined8 *param_1,int *param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  long lVar3;
  undefined4 *puVar4;
  
  puVar2 = *(undefined4 **)(param_2 + 2);
  lVar3 = (long)*param_2;
  puVar1 = (undefined4 *)((long)puVar2 + ((lVar3 << 0x20) >> 0x1e));
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = 0;
  if (lVar3 != 0) {
    FUN_10925b938(param_1,lVar3);
    puVar4 = (undefined4 *)param_1[1];
    for (; puVar2 != puVar1; puVar2 = puVar2 + 1) {
      *puVar4 = *puVar2;
      puVar4 = puVar4 + 1;
    }
    param_1[1] = puVar4;
  }
  return;
}



/* Entry: 109688ce4; end: 109688d53;  */

void FUN_109688ce4(int *param_1,long param_2)

{
  uint uVar1;
  int *piVar2;
  long lVar3;
  undefined4 *puVar4;
  ulong uVar5;
  undefined4 *puVar6;
  undefined4 uVar7;
  
  if (*param_1 == 0) {
    uVar5 = 1;
  }
  else {
    lVar3 = (long)*param_1 << 2;
    uVar5 = 1;
    piVar2 = *(int **)(param_1 + 2);
    do {
      uVar1 = *piVar2 * (int)uVar5;
      uVar5 = (ulong)uVar1;
      lVar3 = lVar3 + -4;
      piVar2 = piVar2 + 1;
    } while (lVar3 != 0);
    if ((int)uVar1 < 1) {
      return;
    }
  }
  puVar4 = *(undefined4 **)(param_2 + 0x10);
  puVar6 = *(undefined4 **)(param_1 + 4);
  do {
    uVar7 = *puVar4;
    _logf();
    *puVar6 = uVar7;
    uVar5 = uVar5 - 1;
    puVar4 = puVar4 + 1;
    puVar6 = puVar6 + 1;
  } while (uVar5 != 0);
  return;
}



/* Entry: 109688d54; end: 109688e17;  */

void FUN_109688d54(undefined8 param_1)

{
  uint uVar1;
  long lVar2;
  long *plVar3;
  int *piVar4;
  ulong uVar5;
  long lVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  undefined4 uVar9;
  long lStack_48;
  long lStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_30 = 0x1800000018;
  lStack_40 = 0;
  uStack_38 = 0;
  lStack_48 = 0;
  FUN_109522b28(&lStack_48,&uStack_30,&lStack_28,2);
  plVar3 = (long *)0x0;
  FUN_109680a78(param_1,0,&lStack_48,FUN_109688e18);
  lVar2 = lStack_48;
  if (lStack_48 != 0) {
    lStack_40 = lStack_48;
    __ZdlPv();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return;
  }
  ___stack_chk_fail();
  if (lStack_48 != 0) {
    lStack_40 = lStack_48;
    __ZdlPv();
  }
  __Unwind_Resume(lVar2);
  lVar2 = *plVar3;
  puVar7 = *(undefined4 **)(plVar3[1] + 8);
  puVar8 = *(undefined4 **)(lVar2 + 8);
  uVar5 = *(long *)(lVar2 + 0x18) - (long)*(int **)(lVar2 + 0x10);
  if ((uVar5 & 0x3fffffffc) == 0) {
    uVar5 = 1;
  }
  else {
    lVar6 = ((long)(uVar5 * 0x40000000) >> 0x20) << 2;
    uVar5 = 1;
    piVar4 = *(int **)(lVar2 + 0x10);
    do {
      uVar1 = *piVar4 * (int)uVar5;
      uVar5 = (ulong)uVar1;
      lVar6 = lVar6 + -4;
      piVar4 = piVar4 + 1;
    } while (lVar6 != 0);
    if ((int)uVar1 < 1) {
      return;
    }
  }
  do {
    uVar9 = *puVar7;
    _logf();
    *puVar8 = uVar9;
    uVar5 = uVar5 - 1;
    puVar7 = puVar7 + 1;
    puVar8 = puVar8 + 1;
  } while (uVar5 != 0);
  return;
}



/* Entry: 109688e18; end: 109688e93;  */

void FUN_109688e18(undefined8 param_1,long *param_2)

{
  long lVar1;
  uint uVar2;
  int *piVar3;
  ulong uVar4;
  long lVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined4 uVar8;
  
  lVar1 = *param_2;
  puVar6 = *(undefined4 **)(param_2[1] + 8);
  puVar7 = *(undefined4 **)(lVar1 + 8);
  uVar4 = *(long *)(lVar1 + 0x18) - (long)*(int **)(lVar1 + 0x10);
  if ((uVar4 & 0x3fffffffc) == 0) {
    uVar4 = 1;
  }
  else {
    lVar5 = ((long)(uVar4 * 0x40000000) >> 0x20) << 2;
    uVar4 = 1;
    piVar3 = *(int **)(lVar1 + 0x10);
    do {
      uVar2 = *piVar3 * (int)uVar4;
      uVar4 = (ulong)uVar2;
      lVar5 = lVar5 + -4;
      piVar3 = piVar3 + 1;
    } while (lVar5 != 0);
    if ((int)uVar2 < 1) {
      return;
    }
  }
  do {
    uVar8 = *puVar6;
    _logf();
    *puVar7 = uVar8;
    uVar4 = uVar4 - 1;
    puVar6 = puVar6 + 1;
    puVar7 = puVar7 + 1;
  } while (uVar4 != 0);
  return;
}



/* Entry: 109688e94; end: 109688eab;  */

void FUN_109688e94(long *param_1,uint *param_2)

{
  uint uVar1;
  uint uVar2;
  uint *puVar3;
  uint *puVar4;
  uint *puVar5;
  long lVar6;
  long lVar7;
  uint uVar8;
  uint uVar9;
  
  puVar4 = *(uint **)(param_2 + 2);
  uVar9 = *param_2;
  puVar5 = *(uint **)(param_2 + 6);
  uVar8 = param_2[4];
  puVar3 = puVar4;
  uVar1 = uVar8;
  if ((int)uVar9 < (int)uVar8) {
    do {
      uVar8 = uVar9;
      uVar9 = uVar1;
      puVar4 = puVar5;
      puVar5 = puVar3;
      puVar3 = puVar4;
      uVar1 = uVar8;
    } while ((int)uVar9 < (int)uVar8);
  }
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  FUN_1092d1c20(param_1,puVar4,(long)puVar4 + ((long)((ulong)uVar9 << 0x20) >> 0x1e),
                (long)(int)uVar9);
  if (0 < (int)uVar8) {
    lVar6 = *param_1;
    lVar7 = (long)(int)(uVar9 - uVar8);
    do {
      uVar2 = *(uint *)(lVar6 + lVar7 * 4);
      uVar1 = *puVar5;
      uVar8 = uVar2 ^ uVar1 ^ 1;
      if (uVar1 != 1 && uVar2 != 1) {
        uVar8 = uVar1 & uVar2;
      }
      *(uint *)(lVar6 + lVar7 * 4) = uVar8;
      lVar7 = lVar7 + 1;
      puVar5 = puVar5 + 1;
    } while (lVar7 < (int)uVar9);
  }
  return;
}



/* Entry: 109688eac; end: 109688f03;  */

void FUN_109688eac(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  
  uStack_20 = param_1[2];
  uStack_28 = param_1[1];
  uStack_30 = *param_1;
  uStack_40 = param_2[2];
  uStack_48 = param_2[1];
  uStack_50 = *param_2;
  uStack_60 = param_3[2];
  uStack_68 = param_3[1];
  uStack_70 = *param_3;
  FUN_109688fd0(&uStack_30,&uStack_50,&uStack_70);
  return;
}



/* Entry: 109688f04; end: 109688fcf;  */

void FUN_109688f04(undefined8 param_1)

{
  int *piVar1;
  int *piVar2;
  int **ppiVar3;
  code *pcVar4;
  float fVar5;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 *puStack_60;
  code *pcStack_58;
  int *piStack_50;
  int *piStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined4 uStack_30;
  undefined1 auStack_2c [4];
  long lStack_28;
  
  ppiVar3 = &piStack_50;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_38 = 0x1800000018;
  uStack_30 = 0x18;
  piStack_48 = (int *)0x0;
  uStack_40 = 0;
  piStack_50 = (int *)0x0;
  FUN_109522b28(&piStack_50,&uStack_38,auStack_2c,3);
  piVar2 = (int *)0x0;
  FUN_109680a78(param_1,0,&piStack_50,FUN_109689184);
  piVar1 = piStack_50;
  if (piStack_50 != (int *)0x0) {
    piStack_48 = piStack_50;
    __ZdlPv();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return;
  }
  ___stack_chk_fail();
  if (piStack_50 != (int *)0x0) {
    piStack_48 = piStack_50;
    __ZdlPv();
  }
  __Unwind_Resume();
  if (*piVar1 != 0) {
    if ((*piVar2 == 0) || (*(int *)(*(long *)(piVar2 + 2) + (long)*piVar2 * 4 + -4) == 1)) {
      if ((*(int *)ppiVar3 == 0) ||
         (*(int *)(*(long *)((long)ppiVar3 + 8) + (long)*(int *)ppiVar3 * 4 + -4) == 1)) {
        pcVar4 = FUN_1096890d4;
      }
      else {
        pcVar4 = (code *)0x109689100;
      }
    }
    else if ((*(int *)ppiVar3 == 0) ||
            (*(int *)(*(long *)((long)ppiVar3 + 8) + (long)*(int *)ppiVar3 * 4 + -4) == 1)) {
      pcVar4 = (code *)0x10968912c;
    }
    else {
      pcVar4 = (code *)0x109689158;
    }
    pcStack_58 = FUN_109688fd0;
    uStack_70 = *(undefined8 *)(piVar1 + 4);
    uStack_78 = *(undefined8 *)(piVar1 + 2);
    uStack_80 = *(undefined8 *)piVar1;
    uStack_90 = *(undefined8 *)(piVar2 + 4);
    uStack_98 = *(undefined8 *)(piVar2 + 2);
    uStack_a0 = *(undefined8 *)piVar2;
    uStack_b0 = *(undefined8 *)((long)ppiVar3 + 0x10);
    uStack_b8 = *(undefined8 *)((long)ppiVar3 + 8);
    uStack_c0 = *ppiVar3;
    puStack_60 = &stack0xfffffffffffffff0;
    FUN_109684bac(&uStack_80,&uStack_a0,&uStack_c0,pcVar4);
    return;
  }
  fVar5 = **(float **)((long)ppiVar3 + 0x10);
  if (**(float **)((long)ppiVar3 + 0x10) <= **(float **)(piVar2 + 4)) {
    fVar5 = **(float **)(piVar2 + 4);
  }
  **(float **)(piVar1 + 4) = fVar5;
  return;
}



/* Entry: 109688fd0; end: 1096890d3;  */

void FUN_109688fd0(int *param_1,int *param_2,int *param_3)

{
  code *pcVar1;
  float fVar2;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  
  if (*param_1 != 0) {
    if ((*param_2 == 0) || (*(int *)(*(long *)(param_2 + 2) + (long)*param_2 * 4 + -4) == 1)) {
      if ((*param_3 == 0) || (*(int *)(*(long *)(param_3 + 2) + (long)*param_3 * 4 + -4) == 1)) {
        pcVar1 = FUN_1096890d4;
      }
      else {
        pcVar1 = (code *)0x109689100;
      }
    }
    else if ((*param_3 == 0) || (*(int *)(*(long *)(param_3 + 2) + (long)*param_3 * 4 + -4) == 1)) {
      pcVar1 = (code *)0x10968912c;
    }
    else {
      pcVar1 = (code *)0x109689158;
    }
    uStack_20 = *(undefined8 *)(param_1 + 4);
    uStack_28 = *(undefined8 *)(param_1 + 2);
    uStack_30 = *(undefined8 *)param_1;
    uStack_40 = *(undefined8 *)(param_2 + 4);
    uStack_48 = *(undefined8 *)(param_2 + 2);
    uStack_50 = *(undefined8 *)param_2;
    uStack_60 = *(undefined8 *)(param_3 + 4);
    uStack_68 = *(undefined8 *)(param_3 + 2);
    uStack_70 = *(undefined8 *)param_3;
    FUN_109684bac(&uStack_30,&uStack_50,&uStack_70,pcVar1);
    return;
  }
  fVar2 = **(float **)(param_3 + 4);
  if (**(float **)(param_3 + 4) <= **(float **)(param_2 + 4)) {
    fVar2 = **(float **)(param_2 + 4);
  }
  **(float **)(param_1 + 4) = fVar2;
  return;
}



/* Entry: 1096890d4; end: 109689183;  */

void FUN_1096890d4(float *param_1,float *param_2,float *param_3,int param_4)

{
  long lVar1;
  float fVar2;
  
  fVar2 = *param_3;
  if (*param_3 <= *param_2) {
    fVar2 = *param_2;
  }
  if (0 < param_4) {
    lVar1 = (long)param_4;
    do {
      *param_1 = fVar2;
      lVar1 = lVar1 + -1;
      param_1 = param_1 + 1;
    } while (lVar1 != 0);
  }
  return;
}



/* Entry: 109689184; end: 1096891fb;  */

void FUN_109689184(undefined8 param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined4 auStack_58 [2];
  long lStack_50;
  undefined8 uStack_48;
  undefined4 auStack_40 [2];
  long lStack_38;
  undefined8 uStack_30;
  undefined4 auStack_28 [2];
  long lStack_20;
  undefined8 uStack_18;
  
  lVar1 = *param_2;
  lVar2 = param_2[1];
  lVar3 = param_2[2];
  uStack_18 = *(undefined8 *)(lVar1 + 8);
  lStack_20 = *(long *)(lVar1 + 0x10);
  uStack_30 = *(undefined8 *)(lVar2 + 8);
  lStack_38 = *(long *)(lVar2 + 0x10);
  uStack_48 = *(undefined8 *)(lVar3 + 8);
  lStack_50 = *(long *)(lVar3 + 0x10);
  auStack_28[0] = (undefined4)((ulong)(*(long *)(lVar1 + 0x18) - lStack_20) >> 2);
  auStack_40[0] = (undefined4)((ulong)(*(long *)(lVar2 + 0x18) - lStack_38) >> 2);
  auStack_58[0] = (undefined4)((ulong)(*(long *)(lVar3 + 0x18) - lStack_50) >> 2);
  FUN_109688fd0(auStack_28,auStack_40,auStack_58);
  return;
}



/* Entry: 1096891fc; end: 109689213;  */

void FUN_1096891fc(long *param_1,uint *param_2)

{
  uint uVar1;
  uint uVar2;
  uint *puVar3;
  uint *puVar4;
  uint *puVar5;
  long lVar6;
  long lVar7;
  uint uVar8;
  uint uVar9;
  
  puVar4 = *(uint **)(param_2 + 2);
  uVar9 = *param_2;
  puVar5 = *(uint **)(param_2 + 6);
  uVar8 = param_2[4];
  puVar3 = puVar4;
  uVar1 = uVar8;
  if ((int)uVar9 < (int)uVar8) {
    do {
      uVar8 = uVar9;
      uVar9 = uVar1;
      puVar4 = puVar5;
      puVar5 = puVar3;
      puVar3 = puVar4;
      uVar1 = uVar8;
    } while ((int)uVar9 < (int)uVar8);
  }
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  FUN_1092d1c20(param_1,puVar4,(long)puVar4 + ((long)((ulong)uVar9 << 0x20) >> 0x1e),
                (long)(int)uVar9);
  if (0 < (int)uVar8) {
    lVar6 = *param_1;
    lVar7 = (long)(int)(uVar9 - uVar8);
    do {
      uVar2 = *(uint *)(lVar6 + lVar7 * 4);
      uVar1 = *puVar5;
      uVar8 = uVar2 ^ uVar1 ^ 1;
      if (uVar1 != 1 && uVar2 != 1) {
        uVar8 = uVar1 & uVar2;
      }
      *(uint *)(lVar6 + lVar7 * 4) = uVar8;
      lVar7 = lVar7 + 1;
      puVar5 = puVar5 + 1;
    } while (lVar7 < (int)uVar9);
  }
  return;
}



/* Entry: 109689214; end: 10968926b;  */

void FUN_109689214(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  
  uStack_20 = param_1[2];
  uStack_28 = param_1[1];
  uStack_30 = *param_1;
  uStack_40 = param_2[2];
  uStack_48 = param_2[1];
  uStack_50 = *param_2;
  uStack_60 = param_3[2];
  uStack_68 = param_3[1];
  uStack_70 = *param_3;
  FUN_109689338(&uStack_30,&uStack_50,&uStack_70);
  return;
}



/* Entry: 10968926c; end: 109689337;  */

void FUN_10968926c(undefined8 param_1)

{
  int *piVar1;
  int *piVar2;
  int **ppiVar3;
  code *pcVar4;
  float fVar5;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 *puStack_60;
  code *pcStack_58;
  int *piStack_50;
  int *piStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined4 uStack_30;
  undefined1 auStack_2c [4];
  long lStack_28;
  
  ppiVar3 = &piStack_50;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_38 = 0x1800000018;
  uStack_30 = 0x18;
  piStack_48 = (int *)0x0;
  uStack_40 = 0;
  piStack_50 = (int *)0x0;
  FUN_109522b28(&piStack_50,&uStack_38,auStack_2c,3);
  piVar2 = (int *)0x0;
  FUN_109680a78(param_1,0,&piStack_50,FUN_1096894ec);
  piVar1 = piStack_50;
  if (piStack_50 != (int *)0x0) {
    piStack_48 = piStack_50;
    __ZdlPv();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return;
  }
  ___stack_chk_fail();
  if (piStack_50 != (int *)0x0) {
    piStack_48 = piStack_50;
    __ZdlPv();
  }
  __Unwind_Resume();
  if (*piVar1 != 0) {
    if ((*piVar2 == 0) || (*(int *)(*(long *)(piVar2 + 2) + (long)*piVar2 * 4 + -4) == 1)) {
      if ((*(int *)ppiVar3 == 0) ||
         (*(int *)(*(long *)((long)ppiVar3 + 8) + (long)*(int *)ppiVar3 * 4 + -4) == 1)) {
        pcVar4 = FUN_10968943c;
      }
      else {
        pcVar4 = (code *)0x109689468;
      }
    }
    else if ((*(int *)ppiVar3 == 0) ||
            (*(int *)(*(long *)((long)ppiVar3 + 8) + (long)*(int *)ppiVar3 * 4 + -4) == 1)) {
      pcVar4 = (code *)0x109689494;
    }
    else {
      pcVar4 = (code *)0x1096894c0;
    }
    pcStack_58 = FUN_109689338;
    uStack_70 = *(undefined8 *)(piVar1 + 4);
    uStack_78 = *(undefined8 *)(piVar1 + 2);
    uStack_80 = *(undefined8 *)piVar1;
    uStack_90 = *(undefined8 *)(piVar2 + 4);
    uStack_98 = *(undefined8 *)(piVar2 + 2);
    uStack_a0 = *(undefined8 *)piVar2;
    uStack_b0 = *(undefined8 *)((long)ppiVar3 + 0x10);
    uStack_b8 = *(undefined8 *)((long)ppiVar3 + 8);
    uStack_c0 = *ppiVar3;
    puStack_60 = &stack0xfffffffffffffff0;
    FUN_109684bac(&uStack_80,&uStack_a0,&uStack_c0,pcVar4);
    return;
  }
  fVar5 = **(float **)((long)ppiVar3 + 0x10);
  if (**(float **)(piVar2 + 4) <= **(float **)((long)ppiVar3 + 0x10)) {
    fVar5 = **(float **)(piVar2 + 4);
  }
  **(float **)(piVar1 + 4) = fVar5;
  return;
}



/* Entry: 109689338; end: 10968943b;  */

void FUN_109689338(int *param_1,int *param_2,int *param_3)

{
  code *pcVar1;
  float fVar2;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  
  if (*param_1 != 0) {
    if ((*param_2 == 0) || (*(int *)(*(long *)(param_2 + 2) + (long)*param_2 * 4 + -4) == 1)) {
      if ((*param_3 == 0) || (*(int *)(*(long *)(param_3 + 2) + (long)*param_3 * 4 + -4) == 1)) {
        pcVar1 = FUN_10968943c;
      }
      else {
        pcVar1 = (code *)0x109689468;
      }
    }
    else if ((*param_3 == 0) || (*(int *)(*(long *)(param_3 + 2) + (long)*param_3 * 4 + -4) == 1)) {
      pcVar1 = (code *)0x109689494;
    }
    else {
      pcVar1 = (code *)0x1096894c0;
    }
    uStack_20 = *(undefined8 *)(param_1 + 4);
    uStack_28 = *(undefined8 *)(param_1 + 2);
    uStack_30 = *(undefined8 *)param_1;
    uStack_40 = *(undefined8 *)(param_2 + 4);
    uStack_48 = *(undefined8 *)(param_2 + 2);
    uStack_50 = *(undefined8 *)param_2;
    uStack_60 = *(undefined8 *)(param_3 + 4);
    uStack_68 = *(undefined8 *)(param_3 + 2);
    uStack_70 = *(undefined8 *)param_3;
    FUN_109684bac(&uStack_30,&uStack_50,&uStack_70,pcVar1);
    return;
  }
  fVar2 = **(float **)(param_3 + 4);
  if (**(float **)(param_2 + 4) <= **(float **)(param_3 + 4)) {
    fVar2 = **(float **)(param_2 + 4);
  }
  **(float **)(param_1 + 4) = fVar2;
  return;
}



/* Entry: 10968943c; end: 1096894eb;  */

void FUN_10968943c(float *param_1,float *param_2,float *param_3,int param_4)

{
  long lVar1;
  float fVar2;
  
  fVar2 = *param_3;
  if (*param_2 <= *param_3) {
    fVar2 = *param_2;
  }
  if (0 < param_4) {
    lVar1 = (long)param_4;
    do {
      *param_1 = fVar2;
      lVar1 = lVar1 + -1;
      param_1 = param_1 + 1;
    } while (lVar1 != 0);
  }
  return;
}



/* Entry: 1096894ec; end: 109689563;  */

void FUN_1096894ec(undefined8 param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined4 auStack_58 [2];
  long lStack_50;
  undefined8 uStack_48;
  undefined4 auStack_40 [2];
  long lStack_38;
  undefined8 uStack_30;
  undefined4 auStack_28 [2];
  long lStack_20;
  undefined8 uStack_18;
  
  lVar1 = *param_2;
  lVar2 = param_2[1];
  lVar3 = param_2[2];
  uStack_18 = *(undefined8 *)(lVar1 + 8);
  lStack_20 = *(long *)(lVar1 + 0x10);
  uStack_30 = *(undefined8 *)(lVar2 + 8);
  lStack_38 = *(long *)(lVar2 + 0x10);
  uStack_48 = *(undefined8 *)(lVar3 + 8);
  lStack_50 = *(long *)(lVar3 + 0x10);
  auStack_28[0] = (undefined4)((ulong)(*(long *)(lVar1 + 0x18) - lStack_20) >> 2);
  auStack_40[0] = (undefined4)((ulong)(*(long *)(lVar2 + 0x18) - lStack_38) >> 2);
  auStack_58[0] = (undefined4)((ulong)(*(long *)(lVar3 + 0x18) - lStack_50) >> 2);
  FUN_109689338(auStack_28,auStack_40,auStack_58);
  return;
}



/* Entry: 109689564; end: 109689583;  */

void FUN_109689564(undefined8 *param_1,int *param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  long lVar3;
  undefined4 *puVar4;
  
  puVar2 = *(undefined4 **)(param_2 + 2);
  lVar3 = (long)*param_2;
  puVar1 = (undefined4 *)((long)puVar2 + ((lVar3 << 0x20) >> 0x1e));
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = 0;
  if (lVar3 != 0) {
    FUN_10925b938(param_1,lVar3);
    puVar4 = (undefined4 *)param_1[1];
    for (; puVar2 != puVar1; puVar2 = puVar2 + 1) {
      *puVar4 = *puVar2;
      puVar4 = puVar4 + 1;
    }
    param_1[1] = puVar4;
  }
  return;
}



/* Entry: 109689584; end: 1096895fb;  */

void FUN_109689584(int *param_1,long param_2,long param_3)

{
  uint uVar1;
  int *piVar2;
  long lVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  ulong uVar6;
  undefined4 *puVar7;
  undefined4 uVar8;
  
  if (*param_1 == 0) {
    uVar6 = 1;
  }
  else {
    lVar3 = (long)*param_1 << 2;
    uVar6 = 1;
    piVar2 = *(int **)(param_1 + 2);
    do {
      uVar1 = *piVar2 * (int)uVar6;
      uVar6 = (ulong)uVar1;
      lVar3 = lVar3 + -4;
      piVar2 = piVar2 + 1;
    } while (lVar3 != 0);
    if ((int)uVar1 < 1) {
      return;
    }
  }
  puVar4 = *(undefined4 **)(param_2 + 0x10);
  puVar5 = *(undefined4 **)(param_3 + 0x10);
  puVar7 = *(undefined4 **)(param_1 + 4);
  do {
    uVar8 = *puVar4;
    _powf(uVar8,*puVar5);
    *puVar7 = uVar8;
    uVar6 = uVar6 - 1;
    puVar4 = puVar4 + 1;
    puVar5 = puVar5 + 1;
    puVar7 = puVar7 + 1;
  } while (uVar6 != 0);
  return;
}



/* Entry: 1096895fc; end: 1096896c7;  */

void FUN_1096895fc(undefined8 param_1)

{
  uint uVar1;
  long lVar2;
  long *plVar3;
  int *piVar4;
  ulong uVar5;
  long lVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  undefined4 uVar10;
  long lStack_50;
  long lStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined4 uStack_30;
  undefined1 auStack_2c [4];
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_38 = 0x1800000018;
  uStack_30 = 0x18;
  lStack_48 = 0;
  uStack_40 = 0;
  lStack_50 = 0;
  FUN_109522b28(&lStack_50,&uStack_38,auStack_2c,3);
  plVar3 = (long *)0x0;
  FUN_109680a78(param_1,0,&lStack_50,FUN_1096896c8);
  lVar2 = lStack_50;
  if (lStack_50 != 0) {
    lStack_48 = lStack_50;
    __ZdlPv();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return;
  }
  ___stack_chk_fail();
  if (lStack_50 != 0) {
    lStack_48 = lStack_50;
    __ZdlPv();
  }
  __Unwind_Resume(lVar2);
  lVar2 = *plVar3;
  puVar7 = *(undefined4 **)(plVar3[1] + 8);
  puVar8 = *(undefined4 **)(plVar3[2] + 8);
  puVar9 = *(undefined4 **)(lVar2 + 8);
  uVar5 = *(long *)(lVar2 + 0x18) - (long)*(int **)(lVar2 + 0x10);
  if ((uVar5 & 0x3fffffffc) == 0) {
    uVar5 = 1;
  }
  else {
    lVar6 = ((long)(uVar5 * 0x40000000) >> 0x20) << 2;
    uVar5 = 1;
    piVar4 = *(int **)(lVar2 + 0x10);
    do {
      uVar1 = *piVar4 * (int)uVar5;
      uVar5 = (ulong)uVar1;
      lVar6 = lVar6 + -4;
      piVar4 = piVar4 + 1;
    } while (lVar6 != 0);
    if ((int)uVar1 < 1) {
      return;
    }
  }
  do {
    uVar10 = *puVar7;
    _powf(uVar10,*puVar8);
    *puVar9 = uVar10;
    uVar5 = uVar5 - 1;
    puVar7 = puVar7 + 1;
    puVar8 = puVar8 + 1;
    puVar9 = puVar9 + 1;
  } while (uVar5 != 0);
  return;
}



/* Entry: 1096896c8; end: 10968974f;  */

void FUN_1096896c8(undefined8 param_1,long *param_2)

{
  long lVar1;
  uint uVar2;
  int *piVar3;
  ulong uVar4;
  long lVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  undefined4 uVar9;
  
  lVar1 = *param_2;
  puVar6 = *(undefined4 **)(param_2[1] + 8);
  puVar7 = *(undefined4 **)(param_2[2] + 8);
  puVar8 = *(undefined4 **)(lVar1 + 8);
  uVar4 = *(long *)(lVar1 + 0x18) - (long)*(int **)(lVar1 + 0x10);
  if ((uVar4 & 0x3fffffffc) == 0) {
    uVar4 = 1;
  }
  else {
    lVar5 = ((long)(uVar4 * 0x40000000) >> 0x20) << 2;
    uVar4 = 1;
    piVar3 = *(int **)(lVar1 + 0x10);
    do {
      uVar2 = *piVar3 * (int)uVar4;
      uVar4 = (ulong)uVar2;
      lVar5 = lVar5 + -4;
      piVar3 = piVar3 + 1;
    } while (lVar5 != 0);
    if ((int)uVar2 < 1) {
      return;
    }
  }
  do {
    uVar9 = *puVar6;
    _powf(uVar9,*puVar7);
    *puVar8 = uVar9;
    uVar4 = uVar4 - 1;
    puVar6 = puVar6 + 1;
    puVar7 = puVar7 + 1;
    puVar8 = puVar8 + 1;
  } while (uVar4 != 0);
  return;
}



/* Entry: 109689750; end: 109689777;  */

void FUN_109689750(undefined8 *param_1,int *param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  long lVar3;
  undefined4 *puVar4;
  
  puVar2 = *(undefined4 **)(param_2 + 2);
  lVar3 = (long)*param_2;
  puVar1 = (undefined4 *)((long)puVar2 + ((lVar3 << 0x20) >> 0x1e));
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = 0;
  if (lVar3 != 0) {
    FUN_10925b938(param_1,lVar3);
    puVar4 = (undefined4 *)param_1[1];
    for (; puVar2 != puVar1; puVar2 = puVar2 + 1) {
      *puVar4 = *puVar2;
      puVar4 = puVar4 + 1;
    }
    param_1[1] = puVar4;
  }
  return;
}



/* Entry: 109689778; end: 10968983b;  */

void FUN_109689778(undefined8 param_1)

{
  uint uVar1;
  int *piVar2;
  float *pfVar3;
  ulong uVar4;
  int *piVar5;
  undefined4 *puVar6;
  long lVar7;
  float fVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  int *piStack_48;
  int *piStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_30 = 0x1800000018;
  piStack_40 = (int *)0x0;
  uStack_38 = 0;
  piStack_48 = (int *)0x0;
  FUN_109522b28(&piStack_48,&uStack_30,&lStack_28,2);
  pfVar3 = (float *)0x0;
  FUN_109680a78(param_1,0,&piStack_48,FUN_1096898a0);
  piVar2 = piStack_48;
  if (piStack_48 != (int *)0x0) {
    piStack_40 = piStack_48;
    __ZdlPv();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return;
  }
  ___stack_chk_fail();
  if (piStack_48 != (int *)0x0) {
    piStack_40 = piStack_48;
    __ZdlPv();
  }
  __Unwind_Resume();
  if (*piVar2 == 0) {
    uVar4 = 1;
  }
  else {
    lVar7 = (long)*piVar2 << 2;
    uVar4 = 1;
    piVar5 = *(int **)(piVar2 + 2);
    do {
      uVar1 = *piVar5 * (int)uVar4;
      uVar4 = (ulong)uVar1;
      lVar7 = lVar7 + -4;
      piVar5 = piVar5 + 1;
    } while (lVar7 != 0);
    if ((int)uVar1 < 1) {
      return;
    }
  }
  puVar6 = *(undefined4 **)(piVar2 + 4);
  do {
    fVar8 = *pfVar3;
    uVar9 = 0x3f800000;
    if (fVar8 == 0.0 || 0.0 > fVar8) {
      uVar9 = 0;
    }
    uVar10 = 0xbf800000;
    if (0.0 <= fVar8) {
      uVar10 = uVar9;
    }
    *puVar6 = uVar10;
    uVar4 = uVar4 - 1;
    pfVar3 = pfVar3 + 1;
    puVar6 = puVar6 + 1;
  } while (uVar4 != 0);
  return;
}



/* Entry: 10968983c; end: 10968989f;  */

void FUN_10968983c(int *param_1,float *param_2)

{
  uint uVar1;
  ulong uVar2;
  int *piVar3;
  undefined4 *puVar4;
  long lVar5;
  float fVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  
  if (*param_1 == 0) {
    uVar2 = 1;
  }
  else {
    lVar5 = (long)*param_1 << 2;
    uVar2 = 1;
    piVar3 = *(int **)(param_1 + 2);
    do {
      uVar1 = *piVar3 * (int)uVar2;
      uVar2 = (ulong)uVar1;
      lVar5 = lVar5 + -4;
      piVar3 = piVar3 + 1;
    } while (lVar5 != 0);
    if ((int)uVar1 < 1) {
      return;
    }
  }
  puVar4 = *(undefined4 **)(param_1 + 4);
  do {
    fVar6 = *param_2;
    uVar7 = 0x3f800000;
    if (fVar6 == 0.0 || 0.0 > fVar6) {
      uVar7 = 0;
    }
    uVar8 = 0xbf800000;
    if (0.0 <= fVar6) {
      uVar8 = uVar7;
    }
    *puVar4 = uVar8;
    uVar2 = uVar2 - 1;
    param_2 = param_2 + 1;
    puVar4 = puVar4 + 1;
  } while (uVar2 != 0);
  return;
}



/* Entry: 1096898a0; end: 1096898df;  */

void FUN_1096898a0(undefined8 param_1,long *param_2)

{
  long lVar1;
  undefined4 auStack_28 [2];
  long lStack_20;
  undefined8 uStack_18;
  
  lVar1 = *param_2;
  uStack_18 = *(undefined8 *)(lVar1 + 8);
  lStack_20 = *(long *)(lVar1 + 0x10);
  auStack_28[0] = (undefined4)((ulong)(*(long *)(lVar1 + 0x18) - lStack_20) >> 2);
  FUN_10968983c(auStack_28,*(undefined8 *)(param_2[1] + 8));
  return;
}



/* Entry: 1096898e0; end: 1096898ff;  */

void FUN_1096898e0(undefined8 *param_1,int *param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  long lVar3;
  undefined4 *puVar4;
  
  puVar2 = *(undefined4 **)(param_2 + 2);
  lVar3 = (long)*param_2;
  puVar1 = (undefined4 *)((long)puVar2 + ((lVar3 << 0x20) >> 0x1e));
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = 0;
  if (lVar3 != 0) {
    FUN_10925b938(param_1,lVar3);
    puVar4 = (undefined4 *)param_1[1];
    for (; puVar2 != puVar1; puVar2 = puVar2 + 1) {
      *puVar4 = *puVar2;
      puVar4 = puVar4 + 1;
    }
    param_1[1] = puVar4;
  }
  return;
}



/* Entry: 109689900; end: 10968996f;  */

void FUN_109689900(int *param_1,long param_2)

{
  uint uVar1;
  int *piVar2;
  long lVar3;
  undefined4 *puVar4;
  ulong uVar5;
  undefined4 *puVar6;
  undefined4 uVar7;
  
  if (*param_1 == 0) {
    uVar5 = 1;
  }
  else {
    lVar3 = (long)*param_1 << 2;
    uVar5 = 1;
    piVar2 = *(int **)(param_1 + 2);
    do {
      uVar1 = *piVar2 * (int)uVar5;
      uVar5 = (ulong)uVar1;
      lVar3 = lVar3 + -4;
      piVar2 = piVar2 + 1;
    } while (lVar3 != 0);
    if ((int)uVar1 < 1) {
      return;
    }
  }
  puVar4 = *(undefined4 **)(param_2 + 0x10);
  puVar6 = *(undefined4 **)(param_1 + 4);
  do {
    uVar7 = *puVar4;
    _sinf();
    *puVar6 = uVar7;
    uVar5 = uVar5 - 1;
    puVar4 = puVar4 + 1;
    puVar6 = puVar6 + 1;
  } while (uVar5 != 0);
  return;
}



/* Entry: 109689970; end: 109689a33;  */

void FUN_109689970(undefined8 param_1)

{
  uint uVar1;
  long lVar2;
  long *plVar3;
  int *piVar4;
  ulong uVar5;
  long lVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  undefined4 uVar9;
  long lStack_48;
  long lStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_30 = 0x1800000018;
  lStack_40 = 0;
  uStack_38 = 0;
  lStack_48 = 0;
  FUN_109522b28(&lStack_48,&uStack_30,&lStack_28,2);
  plVar3 = (long *)0x0;
  FUN_109680a78(param_1,0,&lStack_48,FUN_109689a34);
  lVar2 = lStack_48;
  if (lStack_48 != 0) {
    lStack_40 = lStack_48;
    __ZdlPv();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return;
  }
  ___stack_chk_fail();
  if (lStack_48 != 0) {
    lStack_40 = lStack_48;
    __ZdlPv();
  }
  __Unwind_Resume(lVar2);
  lVar2 = *plVar3;
  puVar7 = *(undefined4 **)(plVar3[1] + 8);
  puVar8 = *(undefined4 **)(lVar2 + 8);
  uVar5 = *(long *)(lVar2 + 0x18) - (long)*(int **)(lVar2 + 0x10);
  if ((uVar5 & 0x3fffffffc) == 0) {
    uVar5 = 1;
  }
  else {
    lVar6 = ((long)(uVar5 * 0x40000000) >> 0x20) << 2;
    uVar5 = 1;
    piVar4 = *(int **)(lVar2 + 0x10);
    do {
      uVar1 = *piVar4 * (int)uVar5;
      uVar5 = (ulong)uVar1;
      lVar6 = lVar6 + -4;
      piVar4 = piVar4 + 1;
    } while (lVar6 != 0);
    if ((int)uVar1 < 1) {
      return;
    }
  }
  do {
    uVar9 = *puVar7;
    _sinf();
    *puVar8 = uVar9;
    uVar5 = uVar5 - 1;
    puVar7 = puVar7 + 1;
    puVar8 = puVar8 + 1;
  } while (uVar5 != 0);
  return;
}


