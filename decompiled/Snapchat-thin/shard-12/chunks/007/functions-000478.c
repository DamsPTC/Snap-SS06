/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 109689a34; end: 109689aaf;  */

void FUN_109689a34(undefined8 param_1,long *param_2)

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
    _sinf();
    *puVar7 = uVar8;
    uVar4 = uVar4 - 1;
    puVar6 = puVar6 + 1;
    puVar7 = puVar7 + 1;
  } while (uVar4 != 0);
  return;
}



/* Entry: 109689ab0; end: 109689afb;  */

void FUN_109689ab0(void)

{
  uint uVar1;
  int *piVar2;
  long lVar3;
  ulong uVar4;
  int *piVar5;
  undefined8 *puVar6;
  long lVar7;
  float *pfVar8;
  undefined8 uVar9;
  float fVar10;
  float fVar11;
  int *piStack_48;
  int *piStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  FUN_10968098c(&UNK_10dfdab02,FUN_109689afc);
  FUN_109689b70(&UNK_10dfdab02,0x109689b1c);
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_30 = 0x2800000028;
  piStack_40 = (int *)0x0;
  uStack_38 = 0;
  piStack_48 = (int *)0x0;
  FUN_109522b28(&piStack_48,&uStack_30,&lStack_28,2);
  lVar3 = 0;
  FUN_109680a78(&UNK_10dfdab02,0,&piStack_48,FUN_109689dd0);
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
  pfVar8 = (float *)(lVar3 + 4);
  puVar6 = *(undefined8 **)(piVar2 + 4);
  do {
    fVar11 = (float)((ulong)*(undefined8 *)(pfVar8 + -1) >> 0x20);
    fVar10 = (float)*(undefined8 *)(pfVar8 + -1);
    uVar9 = NEON_rev64(CONCAT44(fVar11 * -*pfVar8,fVar10 * fVar11),4);
    *puVar6 = CONCAT44((float)((ulong)uVar9 >> 0x20) + fVar11 * fVar10,
                       (float)uVar9 + fVar10 * fVar10);
    pfVar8 = pfVar8 + 2;
    uVar4 = uVar4 - 1;
    puVar6 = puVar6 + 1;
  } while (uVar4 != 0);
  return;
}



/* Entry: 109689afc; end: 109689b6f;  */

void FUN_109689afc(undefined8 *param_1,int *param_2)

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



/* Entry: 109689b70; end: 109689c33;  */

void FUN_109689b70(undefined8 param_1)

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
  FUN_109680a78(param_1,0,&lStack_48,FUN_109689c34);
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
    *pfVar5 = *pfVar4 * *pfVar4;
    uVar6 = uVar6 - 1;
    pfVar4 = pfVar4 + 1;
    pfVar5 = pfVar5 + 1;
  } while (uVar6 != 0);
  return;
}



/* Entry: 109689c34; end: 109689c9b;  */

void FUN_109689c34(undefined8 param_1,long *param_2)

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
    *pfVar4 = *pfVar3 * *pfVar3;
    uVar5 = uVar5 - 1;
    pfVar3 = pfVar3 + 1;
    pfVar4 = pfVar4 + 1;
  } while (uVar5 != 0);
  return;
}



/* Entry: 109689c9c; end: 109689d5f;  */

void FUN_109689c9c(undefined8 param_1)

{
  uint uVar1;
  int *piVar2;
  long lVar3;
  ulong uVar4;
  int *piVar5;
  undefined8 *puVar6;
  long lVar7;
  float *pfVar8;
  undefined8 uVar9;
  float fVar10;
  float fVar11;
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
  lVar3 = 0;
  FUN_109680a78(param_1,0,&piStack_48,FUN_109689dd0);
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
  pfVar8 = (float *)(lVar3 + 4);
  puVar6 = *(undefined8 **)(piVar2 + 4);
  do {
    fVar11 = (float)((ulong)*(undefined8 *)(pfVar8 + -1) >> 0x20);
    fVar10 = (float)*(undefined8 *)(pfVar8 + -1);
    uVar9 = NEON_rev64(CONCAT44(fVar11 * -*pfVar8,fVar10 * fVar11),4);
    *puVar6 = CONCAT44((float)((ulong)uVar9 >> 0x20) + fVar11 * fVar10,
                       (float)uVar9 + fVar10 * fVar10);
    pfVar8 = pfVar8 + 2;
    uVar4 = uVar4 - 1;
    puVar6 = puVar6 + 1;
  } while (uVar4 != 0);
  return;
}



/* Entry: 109689d60; end: 109689dcf;  */

void FUN_109689d60(int *param_1,long param_2)

{
  uint uVar1;
  ulong uVar2;
  int *piVar3;
  undefined8 *puVar4;
  long lVar5;
  float *pfVar6;
  undefined8 uVar7;
  float fVar8;
  float fVar9;
  
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
  pfVar6 = (float *)(param_2 + 4);
  puVar4 = *(undefined8 **)(param_1 + 4);
  do {
    fVar9 = (float)((ulong)*(undefined8 *)(pfVar6 + -1) >> 0x20);
    fVar8 = (float)*(undefined8 *)(pfVar6 + -1);
    uVar7 = NEON_rev64(CONCAT44(fVar9 * -*pfVar6,fVar8 * fVar9),4);
    *puVar4 = CONCAT44((float)((ulong)uVar7 >> 0x20) + fVar9 * fVar8,(float)uVar7 + fVar8 * fVar8);
    pfVar6 = pfVar6 + 2;
    uVar2 = uVar2 - 1;
    puVar4 = puVar4 + 1;
  } while (uVar2 != 0);
  return;
}



/* Entry: 109689dd0; end: 109689e0f;  */

void FUN_109689dd0(undefined8 param_1,long *param_2)

{
  long lVar1;
  undefined4 auStack_28 [2];
  long lStack_20;
  undefined8 uStack_18;
  
  lVar1 = *param_2;
  uStack_18 = *(undefined8 *)(lVar1 + 8);
  lStack_20 = *(long *)(lVar1 + 0x10);
  auStack_28[0] = (undefined4)((ulong)(*(long *)(lVar1 + 0x18) - lStack_20) >> 2);
  FUN_109689d60(auStack_28,*(undefined8 *)(param_2[1] + 8));
  return;
}



/* Entry: 109689e10; end: 109689e83;  */

void FUN_109689e10(undefined8 *param_1,int *param_2)

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



/* Entry: 109689e84; end: 109689f47;  */

void FUN_109689e84(undefined8 param_1)

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
  FUN_109680a78(param_1,0,&lStack_48,FUN_109689f48);
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



/* Entry: 109689f48; end: 109689fa7;  */

void FUN_109689f48(undefined8 param_1,long *param_2)

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
    *pfVar4 = SQRT(*pfVar3);
    uVar5 = uVar5 - 1;
    pfVar3 = pfVar3 + 1;
    pfVar4 = pfVar4 + 1;
  } while (uVar5 != 0);
  return;
}



/* Entry: 109689fa8; end: 109689ff3;  */

void FUN_109689fa8(void)

{
  long lVar1;
  long *plVar2;
  ulong *puVar3;
  uint *puVar4;
  int *piVar5;
  uint *puVar6;
  int iVar7;
  ulong uVar8;
  long lVar9;
  uint uVar10;
  long lStack_50;
  long lStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined4 uStack_30;
  undefined1 auStack_2c [4];
  long lStack_28;
  
  FUN_10968098c(&UNK_10dfdab20,FUN_109689ff4);
  FUN_10968a064(&UNK_10dfdab20,0x10968a014);
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_38 = 0x1800000028;
  uStack_30 = 0x28;
  lStack_48 = 0;
  uStack_40 = 0;
  lStack_50 = 0;
  FUN_109522b28(&lStack_50,&uStack_38,auStack_2c,3);
  plVar2 = (long *)0x0;
  FUN_109680a78(&UNK_10dfdab20,0,&lStack_50,FUN_10968a2b4);
  lVar1 = lStack_50;
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
  __Unwind_Resume(lVar1);
  lVar1 = plVar2[1];
  puVar3 = *(ulong **)(*plVar2 + 8);
  puVar4 = *(uint **)(lVar1 + 8);
  uVar8 = *(long *)(lVar1 + 0x18) - (long)*(int **)(lVar1 + 0x10);
  if ((uVar8 & 0x3fffffffc) == 0) {
    puVar6 = puVar4 + 1;
  }
  else {
    lVar9 = ((long)(uVar8 * 0x40000000) >> 0x20) << 2;
    iVar7 = 1;
    piVar5 = *(int **)(lVar1 + 0x10);
    do {
      iVar7 = *piVar5 * iVar7;
      lVar9 = lVar9 + -4;
      piVar5 = piVar5 + 1;
    } while (lVar9 != 0);
    if (iVar7 == 0) {
      return;
    }
    puVar6 = puVar4 + iVar7;
  }
  do {
    uVar10 = *puVar4;
    puVar4 = puVar4 + 1;
    *puVar3 = (ulong)uVar10;
    puVar3 = puVar3 + 1;
  } while (puVar4 != puVar6);
  return;
}



/* Entry: 109689ff4; end: 10968a063;  */

void FUN_109689ff4(undefined8 *param_1,int *param_2)

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



/* Entry: 10968a064; end: 10968a133;  */

void FUN_10968a064(undefined8 param_1)

{
  long lVar1;
  long *plVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  int *piVar6;
  undefined4 *puVar7;
  int iVar8;
  ulong uVar9;
  long lVar10;
  long lStack_50;
  long lStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined4 uStack_30;
  undefined1 auStack_2c [4];
  long lStack_28;
  undefined4 *puVar5;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_38 = 0x2800000018;
  uStack_30 = 0x18;
  lStack_48 = 0;
  uStack_40 = 0;
  lStack_50 = 0;
  FUN_109522b28(&lStack_50,&uStack_38,auStack_2c,3);
  plVar2 = (long *)0x0;
  FUN_109680a78(param_1,0,&lStack_50,FUN_10968a134);
  lVar1 = lStack_50;
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
  __Unwind_Resume(lVar1);
  lVar1 = plVar2[1];
  puVar3 = *(undefined4 **)(*plVar2 + 8);
  puVar4 = *(undefined4 **)(lVar1 + 8);
  uVar9 = *(long *)(lVar1 + 0x18) - (long)*(int **)(lVar1 + 0x10);
  if ((uVar9 & 0x3fffffffc) == 0) {
    puVar7 = puVar4 + 2;
  }
  else {
    lVar10 = ((long)(uVar9 * 0x40000000) >> 0x20) << 2;
    iVar8 = 1;
    piVar6 = *(int **)(lVar1 + 0x10);
    do {
      iVar8 = *piVar6 * iVar8;
      lVar10 = lVar10 + -4;
      piVar6 = piVar6 + 1;
    } while (lVar10 != 0);
    if (iVar8 == 0) {
      return;
    }
    puVar7 = puVar4 + (long)iVar8 * 2;
  }
  do {
    puVar5 = puVar4 + 2;
    *puVar3 = *puVar4;
    puVar3 = puVar3 + 1;
    puVar4 = puVar5;
  } while (puVar5 != puVar7);
  return;
}



/* Entry: 10968a134; end: 10968a1e3;  */

void FUN_10968a134(undefined8 param_1,long *param_2)

{
  long lVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int *piVar5;
  undefined4 *puVar6;
  int iVar7;
  ulong uVar8;
  long lVar9;
  undefined4 *puVar4;
  
  lVar1 = param_2[1];
  puVar2 = *(undefined4 **)(*param_2 + 8);
  puVar3 = *(undefined4 **)(lVar1 + 8);
  uVar8 = *(long *)(lVar1 + 0x18) - (long)*(int **)(lVar1 + 0x10);
  if ((uVar8 & 0x3fffffffc) == 0) {
    puVar6 = puVar3 + 2;
  }
  else {
    lVar9 = ((long)(uVar8 * 0x40000000) >> 0x20) << 2;
    iVar7 = 1;
    piVar5 = *(int **)(lVar1 + 0x10);
    do {
      iVar7 = *piVar5 * iVar7;
      lVar9 = lVar9 + -4;
      piVar5 = piVar5 + 1;
    } while (lVar9 != 0);
    if (iVar7 == 0) {
      return;
    }
    puVar6 = puVar3 + (long)iVar7 * 2;
  }
  do {
    puVar4 = puVar3 + 2;
    *puVar2 = *puVar3;
    puVar2 = puVar2 + 1;
    puVar3 = puVar4;
  } while (puVar4 != puVar6);
  return;
}



/* Entry: 10968a1e4; end: 10968a2b3;  */

void FUN_10968a1e4(undefined8 param_1)

{
  long lVar1;
  long *plVar2;
  ulong *puVar3;
  uint *puVar4;
  int *piVar5;
  uint *puVar6;
  int iVar7;
  ulong uVar8;
  long lVar9;
  uint uVar10;
  long lStack_50;
  long lStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined4 uStack_30;
  undefined1 auStack_2c [4];
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_38 = 0x1800000028;
  uStack_30 = 0x28;
  lStack_48 = 0;
  uStack_40 = 0;
  lStack_50 = 0;
  FUN_109522b28(&lStack_50,&uStack_38,auStack_2c,3);
  plVar2 = (long *)0x0;
  FUN_109680a78(param_1,0,&lStack_50,FUN_10968a2b4);
  lVar1 = lStack_50;
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
  __Unwind_Resume(lVar1);
  lVar1 = plVar2[1];
  puVar3 = *(ulong **)(*plVar2 + 8);
  puVar4 = *(uint **)(lVar1 + 8);
  uVar8 = *(long *)(lVar1 + 0x18) - (long)*(int **)(lVar1 + 0x10);
  if ((uVar8 & 0x3fffffffc) == 0) {
    puVar6 = puVar4 + 1;
  }
  else {
    lVar9 = ((long)(uVar8 * 0x40000000) >> 0x20) << 2;
    iVar7 = 1;
    piVar5 = *(int **)(lVar1 + 0x10);
    do {
      iVar7 = *piVar5 * iVar7;
      lVar9 = lVar9 + -4;
      piVar5 = piVar5 + 1;
    } while (lVar9 != 0);
    if (iVar7 == 0) {
      return;
    }
    puVar6 = puVar4 + iVar7;
  }
  do {
    uVar10 = *puVar4;
    puVar4 = puVar4 + 1;
    *puVar3 = (ulong)uVar10;
    puVar3 = puVar3 + 1;
  } while (puVar4 != puVar6);
  return;
}



/* Entry: 10968a2b4; end: 10968a313;  */

void FUN_10968a2b4(undefined8 param_1,long *param_2)

{
  long lVar1;
  ulong *puVar2;
  uint *puVar3;
  int *piVar4;
  uint *puVar5;
  int iVar6;
  ulong uVar7;
  long lVar8;
  uint uVar9;
  
  lVar1 = param_2[1];
  puVar2 = *(ulong **)(*param_2 + 8);
  puVar3 = *(uint **)(lVar1 + 8);
  uVar7 = *(long *)(lVar1 + 0x18) - (long)*(int **)(lVar1 + 0x10);
  if ((uVar7 & 0x3fffffffc) == 0) {
    puVar5 = puVar3 + 1;
  }
  else {
    lVar8 = ((long)(uVar7 * 0x40000000) >> 0x20) << 2;
    iVar6 = 1;
    piVar4 = *(int **)(lVar1 + 0x10);
    do {
      iVar6 = *piVar4 * iVar6;
      lVar8 = lVar8 + -4;
      piVar4 = piVar4 + 1;
    } while (lVar8 != 0);
    if (iVar6 == 0) {
      return;
    }
    puVar5 = puVar3 + iVar6;
  }
  do {
    uVar9 = *puVar3;
    puVar3 = puVar3 + 1;
    *puVar2 = (ulong)uVar9;
    puVar2 = puVar2 + 1;
  } while (puVar3 != puVar5);
  return;
}



/* Entry: 10968a314; end: 10968a35f;  */

void FUN_10968a314(void)

{
  uint uVar1;
  long lVar2;
  long *plVar3;
  int *piVar4;
  ulong uVar5;
  long lVar6;
  long lStack_50;
  long lStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined4 uStack_30;
  undefined1 auStack_2c [4];
  long lStack_28;
  
  FUN_10968098c(&UNK_10dfdab25,FUN_10968a360);
  FUN_10968a450(&UNK_10dfdab25,FUN_10968a410);
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_38 = 0x1800000028;
  uStack_30 = 0x28;
  lStack_48 = 0;
  uStack_40 = 0;
  lStack_50 = 0;
  FUN_109522b28(&lStack_50,&uStack_38,auStack_2c,3);
  plVar3 = (long *)0x0;
  FUN_109680a78(&UNK_10dfdab25,0,&lStack_50,FUN_10968a678);
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
  lVar2 = plVar3[1];
  uVar5 = *(long *)(lVar2 + 0x18) - (long)*(int **)(lVar2 + 0x10);
  if ((uVar5 & 0x3fffffffc) == 0) {
    uVar5 = 4;
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
    uVar5 = -(ulong)(uVar1 >> 0x1f) & 0xfffffffc00000000 | uVar5 << 2;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf0a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__memcpy_11034c658)(*(undefined8 *)(*plVar3 + 8),*(undefined8 *)(lVar2 + 8),uVar5);
  return;
}



/* Entry: 10968a360; end: 10968a40f;  */

void FUN_10968a360(undefined8 *param_1,uint *param_2)

{
  uint uVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  long lVar4;
  undefined4 *puVar5;
  int *piVar6;
  
  puVar2 = *(undefined4 **)(param_2 + 2);
  uVar1 = *param_2;
  if (param_2[4] == 0) {
    puVar3 = (undefined4 *)((long)puVar2 + ((long)((ulong)uVar1 << 0x20) >> 0x1e));
  }
  else {
    piVar6 = *(int **)(param_2 + 6);
    lVar4 = (long)puVar2 + ((long)((ulong)uVar1 << 0x20) >> 0x1e);
    if (0 < *piVar6) {
      *param_1 = 0;
      param_1[1] = 0;
      param_1[2] = 0;
      FUN_1092d1c20(param_1,puVar2,lVar4,(long)(int)uVar1);
      FUN_10923b3a0(param_1,piVar6);
      return;
    }
    puVar3 = (undefined4 *)(lVar4 + -4);
  }
  lVar4 = (long)puVar3 - (long)puVar2 >> 2;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  if (lVar4 != 0) {
    FUN_10925b938(param_1,lVar4);
    puVar5 = (undefined4 *)param_1[1];
    for (; puVar2 != puVar3; puVar2 = puVar2 + 1) {
      *puVar5 = *puVar2;
      puVar5 = puVar5 + 1;
    }
    param_1[1] = puVar5;
  }
  return;
}



/* Entry: 10968a410; end: 10968a44f;  */

void FUN_10968a410(long param_1,int *param_2)

{
  uint uVar1;
  int *piVar2;
  ulong uVar3;
  long lVar4;
  
  if (*param_2 == 0) {
    uVar3 = 8;
  }
  else {
    lVar4 = (long)*param_2 << 2;
    uVar3 = 1;
    piVar2 = *(int **)(param_2 + 2);
    do {
      uVar1 = *piVar2 * (int)uVar3;
      uVar3 = (ulong)uVar1;
      lVar4 = lVar4 + -4;
      piVar2 = piVar2 + 1;
    } while (lVar4 != 0);
    uVar3 = -(ulong)(uVar1 >> 0x1f) & 0xfffffff800000000 | uVar3 << 3;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf0a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__memcpy_11034c658)
            (*(undefined8 *)(param_1 + 0x10),*(undefined8 *)(param_2 + 4),uVar3);
  return;
}



/* Entry: 10968a450; end: 10968a51f;  */

void FUN_10968a450(undefined8 param_1)

{
  uint uVar1;
  long lVar2;
  long *plVar3;
  int *piVar4;
  ulong uVar5;
  long lVar6;
  long lStack_50;
  long lStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined4 uStack_30;
  undefined1 auStack_2c [4];
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_38 = 0x2800000018;
  uStack_30 = 0x18;
  lStack_48 = 0;
  uStack_40 = 0;
  lStack_50 = 0;
  FUN_109522b28(&lStack_50,&uStack_38,auStack_2c,3);
  plVar3 = (long *)0x0;
  FUN_109680a78(param_1,0,&lStack_50,FUN_10968a520);
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
  lVar2 = plVar3[1];
  uVar5 = *(long *)(lVar2 + 0x18) - (long)*(int **)(lVar2 + 0x10);
  if ((uVar5 & 0x3fffffffc) == 0) {
    uVar5 = 8;
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
    uVar5 = -(ulong)(uVar1 >> 0x1f) & 0xfffffff800000000 | uVar5 << 3;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf0a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__memcpy_11034c658)(*(undefined8 *)(*plVar3 + 8),*(undefined8 *)(lVar2 + 8),uVar5);
  return;
}



/* Entry: 10968a520; end: 10968a5a7;  */

void FUN_10968a520(undefined8 param_1,long *param_2)

{
  long lVar1;
  uint uVar2;
  int *piVar3;
  ulong uVar4;
  long lVar5;
  
  lVar1 = param_2[1];
  uVar4 = *(long *)(lVar1 + 0x18) - (long)*(int **)(lVar1 + 0x10);
  if ((uVar4 & 0x3fffffffc) == 0) {
    uVar4 = 8;
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
    uVar4 = -(ulong)(uVar2 >> 0x1f) & 0xfffffff800000000 | uVar4 << 3;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf0a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__memcpy_11034c658)(*(undefined8 *)(*param_2 + 8),*(undefined8 *)(lVar1 + 8),uVar4);
  return;
}



/* Entry: 10968a5a8; end: 10968a677;  */

void FUN_10968a5a8(undefined8 param_1)

{
  uint uVar1;
  long lVar2;
  long *plVar3;
  int *piVar4;
  ulong uVar5;
  long lVar6;
  long lStack_50;
  long lStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined4 uStack_30;
  undefined1 auStack_2c [4];
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_38 = 0x1800000028;
  uStack_30 = 0x28;
  lStack_48 = 0;
  uStack_40 = 0;
  lStack_50 = 0;
  FUN_109522b28(&lStack_50,&uStack_38,auStack_2c,3);
  plVar3 = (long *)0x0;
  FUN_109680a78(param_1,0,&lStack_50,FUN_10968a678);
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
  lVar2 = plVar3[1];
  uVar5 = *(long *)(lVar2 + 0x18) - (long)*(int **)(lVar2 + 0x10);
  if ((uVar5 & 0x3fffffffc) == 0) {
    uVar5 = 4;
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
    uVar5 = -(ulong)(uVar1 >> 0x1f) & 0xfffffffc00000000 | uVar5 << 2;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf0a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__memcpy_11034c658)(*(undefined8 *)(*plVar3 + 8),*(undefined8 *)(lVar2 + 8),uVar5);
  return;
}



/* Entry: 10968a678; end: 10968a6bf;  */

void FUN_10968a678(undefined8 param_1,long *param_2)

{
  long lVar1;
  uint uVar2;
  int *piVar3;
  ulong uVar4;
  long lVar5;
  
  lVar1 = param_2[1];
  uVar4 = *(long *)(lVar1 + 0x18) - (long)*(int **)(lVar1 + 0x10);
  if ((uVar4 & 0x3fffffffc) == 0) {
    uVar4 = 4;
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
    uVar4 = -(ulong)(uVar2 >> 0x1f) & 0xfffffffc00000000 | uVar4 << 2;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf0a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__memcpy_11034c658)(*(undefined8 *)(*param_2 + 8),*(undefined8 *)(lVar1 + 8),uVar4);
  return;
}



/* Entry: 10968a6c0; end: 10968a773;  */

void FUN_10968a6c0(void)

{
  long lVar1;
  long *plVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  int *piVar6;
  undefined4 *puVar7;
  int iVar8;
  ulong uVar9;
  long lVar10;
  long lStack_48;
  long lStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  undefined4 *puVar5;
  
  FUN_10968098c(&UNK_10dfdab34,FUN_10968a774);
  FUN_10968a7ec(&UNK_10dfdab34,0x10968a794);
  FUN_10968098c(&UNK_10dfdab3c,0x10968a924);
  FUN_10968a998(&UNK_10dfdab3c,0x10968a944);
  FUN_10968098c(&UNK_10dfdab41,0x10968aabc);
  FUN_10968ab30(&UNK_10dfdab41,0x10968aadc);
  FUN_10968098c(&UNK_10dfdab46,0x10968ac58);
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_30 = 0x2800000018;
  lStack_40 = 0;
  uStack_38 = 0;
  lStack_48 = 0;
  FUN_109522b28(&lStack_48,&uStack_30,&lStack_28,2);
  plVar2 = (long *)0x0;
  FUN_109680a78(&UNK_10dfdab46,0,&lStack_48,FUN_10968ad90);
  lVar1 = lStack_48;
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
  __Unwind_Resume(lVar1);
  lVar1 = plVar2[1];
  puVar3 = *(undefined4 **)(*plVar2 + 8);
  puVar4 = *(undefined4 **)(lVar1 + 8);
  uVar9 = *(long *)(lVar1 + 0x18) - (long)*(int **)(lVar1 + 0x10);
  if ((uVar9 & 0x3fffffffc) == 0) {
    puVar7 = puVar4 + 2;
  }
  else {
    lVar10 = ((long)(uVar9 * 0x40000000) >> 0x20) << 2;
    iVar8 = 1;
    piVar6 = *(int **)(lVar1 + 0x10);
    do {
      iVar8 = *piVar6 * iVar8;
      lVar10 = lVar10 + -4;
      piVar6 = piVar6 + 1;
    } while (lVar10 != 0);
    if (iVar8 == 0) {
      return;
    }
    puVar7 = puVar4 + (long)iVar8 * 2;
  }
  do {
    puVar5 = puVar4 + 2;
    *puVar3 = *puVar4;
    puVar3 = puVar3 + 1;
    puVar4 = puVar5;
  } while (puVar5 != puVar7);
  return;
}



/* Entry: 10968a774; end: 10968a7eb;  */

void FUN_10968a774(undefined8 *param_1,int *param_2)

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



/* Entry: 10968a7ec; end: 10968a8bb;  */

void FUN_10968a7ec(undefined8 param_1)

{
  long lVar1;
  long *plVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  int *piVar7;
  undefined4 *puVar8;
  int iVar9;
  ulong uVar10;
  long lVar11;
  undefined4 uVar12;
  long lStack_50;
  long lStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined4 uStack_30;
  undefined1 auStack_2c [4];
  long lStack_28;
  undefined4 *puVar6;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_38 = 0x1800000028;
  uStack_30 = 0x18;
  lStack_48 = 0;
  uStack_40 = 0;
  lStack_50 = 0;
  FUN_109522b28(&lStack_50,&uStack_38,auStack_2c,3);
  plVar2 = (long *)0x0;
  FUN_109680a78(param_1,0,&lStack_50,FUN_10968a8bc);
  lVar1 = lStack_50;
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
  __Unwind_Resume(lVar1);
  lVar1 = plVar2[1];
  puVar3 = *(undefined4 **)(*plVar2 + 8);
  puVar4 = *(undefined4 **)(plVar2[2] + 8);
  puVar5 = *(undefined4 **)(lVar1 + 8);
  uVar10 = *(long *)(lVar1 + 0x18) - (long)*(int **)(lVar1 + 0x10);
  if ((uVar10 & 0x3fffffffc) == 0) {
    puVar8 = puVar5 + 1;
  }
  else {
    lVar11 = ((long)(uVar10 * 0x40000000) >> 0x20) << 2;
    iVar9 = 1;
    piVar7 = *(int **)(lVar1 + 0x10);
    do {
      iVar9 = *piVar7 * iVar9;
      lVar11 = lVar11 + -4;
      piVar7 = piVar7 + 1;
    } while (lVar11 != 0);
    if (iVar9 == 0) {
      return;
    }
    puVar8 = puVar5 + iVar9;
  }
  do {
    puVar6 = puVar5 + 1;
    uVar12 = *puVar4;
    *puVar3 = *puVar5;
    puVar3[1] = uVar12;
    puVar3 = puVar3 + 2;
    puVar4 = puVar4 + 1;
    puVar5 = puVar6;
  } while (puVar6 != puVar8);
  return;
}



/* Entry: 10968a8bc; end: 10968a997;  */

void FUN_10968a8bc(undefined8 param_1,long *param_2)

{
  long lVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  int *piVar6;
  undefined4 *puVar7;
  int iVar8;
  ulong uVar9;
  long lVar10;
  undefined4 uVar11;
  undefined4 *puVar5;
  
  lVar1 = param_2[1];
  puVar2 = *(undefined4 **)(*param_2 + 8);
  puVar3 = *(undefined4 **)(param_2[2] + 8);
  puVar4 = *(undefined4 **)(lVar1 + 8);
  uVar9 = *(long *)(lVar1 + 0x18) - (long)*(int **)(lVar1 + 0x10);
  if ((uVar9 & 0x3fffffffc) == 0) {
    puVar7 = puVar4 + 1;
  }
  else {
    lVar10 = ((long)(uVar9 * 0x40000000) >> 0x20) << 2;
    iVar8 = 1;
    piVar6 = *(int **)(lVar1 + 0x10);
    do {
      iVar8 = *piVar6 * iVar8;
      lVar10 = lVar10 + -4;
      piVar6 = piVar6 + 1;
    } while (lVar10 != 0);
    if (iVar8 == 0) {
      return;
    }
    puVar7 = puVar4 + iVar8;
  }
  do {
    puVar5 = puVar4 + 1;
    uVar11 = *puVar3;
    *puVar2 = *puVar4;
    puVar2[1] = uVar11;
    puVar2 = puVar2 + 2;
    puVar3 = puVar3 + 1;
    puVar4 = puVar5;
  } while (puVar5 != puVar7);
  return;
}



/* Entry: 10968a998; end: 10968aa5b;  */

void FUN_10968a998(undefined8 param_1)

{
  long lVar1;
  long *plVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  int *piVar6;
  undefined4 *puVar7;
  int iVar8;
  ulong uVar9;
  long lVar10;
  float fVar11;
  long lStack_48;
  long lStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  undefined4 *puVar5;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_30 = 0x2800000028;
  lStack_40 = 0;
  uStack_38 = 0;
  lStack_48 = 0;
  FUN_109522b28(&lStack_48,&uStack_30,&lStack_28,2);
  plVar2 = (long *)0x0;
  FUN_109680a78(param_1,0,&lStack_48,FUN_10968aa5c);
  lVar1 = lStack_48;
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
  __Unwind_Resume(lVar1);
  lVar1 = plVar2[1];
  puVar3 = *(undefined4 **)(*plVar2 + 8);
  puVar4 = *(undefined4 **)(lVar1 + 8);
  uVar9 = *(long *)(lVar1 + 0x18) - (long)*(int **)(lVar1 + 0x10);
  if ((uVar9 & 0x3fffffffc) == 0) {
    puVar7 = puVar4 + 2;
  }
  else {
    lVar10 = ((long)(uVar9 * 0x40000000) >> 0x20) << 2;
    iVar8 = 1;
    piVar6 = *(int **)(lVar1 + 0x10);
    do {
      iVar8 = *piVar6 * iVar8;
      lVar10 = lVar10 + -4;
      piVar6 = piVar6 + 1;
    } while (lVar10 != 0);
    if (iVar8 == 0) {
      return;
    }
    puVar7 = puVar4 + (long)iVar8 * 2;
  }
  do {
    puVar5 = puVar4 + 2;
    fVar11 = (float)puVar4[1];
    *puVar3 = *puVar4;
    puVar3[1] = -fVar11;
    puVar3 = puVar3 + 2;
    puVar4 = puVar5;
  } while (puVar5 != puVar7);
  return;
}



/* Entry: 10968aa5c; end: 10968ab2f;  */

void FUN_10968aa5c(undefined8 param_1,long *param_2)

{
  long lVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int *piVar5;
  undefined4 *puVar6;
  int iVar7;
  ulong uVar8;
  long lVar9;
  float fVar10;
  undefined4 *puVar4;
  
  lVar1 = param_2[1];
  puVar2 = *(undefined4 **)(*param_2 + 8);
  puVar3 = *(undefined4 **)(lVar1 + 8);
  uVar8 = *(long *)(lVar1 + 0x18) - (long)*(int **)(lVar1 + 0x10);
  if ((uVar8 & 0x3fffffffc) == 0) {
    puVar6 = puVar3 + 2;
  }
  else {
    lVar9 = ((long)(uVar8 * 0x40000000) >> 0x20) << 2;
    iVar7 = 1;
    piVar5 = *(int **)(lVar1 + 0x10);
    do {
      iVar7 = *piVar5 * iVar7;
      lVar9 = lVar9 + -4;
      piVar5 = piVar5 + 1;
    } while (lVar9 != 0);
    if (iVar7 == 0) {
      return;
    }
    puVar6 = puVar3 + (long)iVar7 * 2;
  }
  do {
    puVar4 = puVar3 + 2;
    fVar10 = (float)puVar3[1];
    *puVar2 = *puVar3;
    puVar2[1] = -fVar10;
    puVar2 = puVar2 + 2;
    puVar3 = puVar4;
  } while (puVar4 != puVar6);
  return;
}



/* Entry: 10968ab30; end: 10968abf7;  */

void FUN_10968ab30(undefined8 param_1)

{
  long lVar1;
  long *plVar2;
  undefined4 *puVar3;
  int *piVar4;
  long lVar5;
  int iVar6;
  ulong uVar7;
  long lVar8;
  long lStack_48;
  long lStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_30 = 0x2800000018;
  lStack_40 = 0;
  uStack_38 = 0;
  lStack_48 = 0;
  FUN_109522b28(&lStack_48,&uStack_30,&lStack_28,2);
  plVar2 = (long *)0x0;
  FUN_109680a78(param_1,0,&lStack_48,FUN_10968abf8);
  lVar1 = lStack_48;
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
  __Unwind_Resume(lVar1);
  lVar5 = plVar2[1];
  puVar3 = *(undefined4 **)(*plVar2 + 8);
  lVar1 = *(long *)(lVar5 + 8);
  uVar7 = *(long *)(lVar5 + 0x18) - (long)*(int **)(lVar5 + 0x10);
  if ((uVar7 & 0x3fffffffc) == 0) {
    lVar5 = lVar1 + 8;
  }
  else {
    lVar8 = ((long)(uVar7 * 0x40000000) >> 0x20) << 2;
    iVar6 = 1;
    piVar4 = *(int **)(lVar5 + 0x10);
    do {
      iVar6 = *piVar4 * iVar6;
      lVar8 = lVar8 + -4;
      piVar4 = piVar4 + 1;
    } while (lVar8 != 0);
    if (iVar6 == 0) {
      return;
    }
    lVar5 = lVar1 + (long)iVar6 * 8;
  }
  do {
    *puVar3 = *(undefined4 *)(lVar1 + 4);
    lVar1 = lVar1 + 8;
    puVar3 = puVar3 + 1;
  } while (lVar1 != lVar5);
  return;
}



/* Entry: 10968abf8; end: 10968acc7;  */

void FUN_10968abf8(undefined8 param_1,long *param_2)

{
  undefined4 *puVar1;
  long lVar2;
  int *piVar3;
  long lVar4;
  int iVar5;
  ulong uVar6;
  long lVar7;
  
  lVar4 = param_2[1];
  puVar1 = *(undefined4 **)(*param_2 + 8);
  lVar2 = *(long *)(lVar4 + 8);
  uVar6 = *(long *)(lVar4 + 0x18) - (long)*(int **)(lVar4 + 0x10);
  if ((uVar6 & 0x3fffffffc) == 0) {
    lVar4 = lVar2 + 8;
  }
  else {
    lVar7 = ((long)(uVar6 * 0x40000000) >> 0x20) << 2;
    iVar5 = 1;
    piVar3 = *(int **)(lVar4 + 0x10);
    do {
      iVar5 = *piVar3 * iVar5;
      lVar7 = lVar7 + -4;
      piVar3 = piVar3 + 1;
    } while (lVar7 != 0);
    if (iVar5 == 0) {
      return;
    }
    lVar4 = lVar2 + (long)iVar5 * 8;
  }
  do {
    *puVar1 = *(undefined4 *)(lVar2 + 4);
    lVar2 = lVar2 + 8;
    puVar1 = puVar1 + 1;
  } while (lVar2 != lVar4);
  return;
}



/* Entry: 10968acc8; end: 10968ad8f;  */

void FUN_10968acc8(undefined8 param_1)

{
  long lVar1;
  long *plVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  int *piVar6;
  undefined4 *puVar7;
  int iVar8;
  ulong uVar9;
  long lVar10;
  long lStack_48;
  long lStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  undefined4 *puVar5;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_30 = 0x2800000018;
  lStack_40 = 0;
  uStack_38 = 0;
  lStack_48 = 0;
  FUN_109522b28(&lStack_48,&uStack_30,&lStack_28,2);
  plVar2 = (long *)0x0;
  FUN_109680a78(param_1,0,&lStack_48,FUN_10968ad90);
  lVar1 = lStack_48;
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
  __Unwind_Resume(lVar1);
  lVar1 = plVar2[1];
  puVar3 = *(undefined4 **)(*plVar2 + 8);
  puVar4 = *(undefined4 **)(lVar1 + 8);
  uVar9 = *(long *)(lVar1 + 0x18) - (long)*(int **)(lVar1 + 0x10);
  if ((uVar9 & 0x3fffffffc) == 0) {
    puVar7 = puVar4 + 2;
  }
  else {
    lVar10 = ((long)(uVar9 * 0x40000000) >> 0x20) << 2;
    iVar8 = 1;
    piVar6 = *(int **)(lVar1 + 0x10);
    do {
      iVar8 = *piVar6 * iVar8;
      lVar10 = lVar10 + -4;
      piVar6 = piVar6 + 1;
    } while (lVar10 != 0);
    if (iVar8 == 0) {
      return;
    }
    puVar7 = puVar4 + (long)iVar8 * 2;
  }
  do {
    puVar5 = puVar4 + 2;
    *puVar3 = *puVar4;
    puVar3 = puVar3 + 1;
    puVar4 = puVar5;
  } while (puVar5 != puVar7);
  return;
}



/* Entry: 10968ad90; end: 10968adeb;  */

void FUN_10968ad90(undefined8 param_1,long *param_2)

{
  long lVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int *piVar5;
  undefined4 *puVar6;
  int iVar7;
  ulong uVar8;
  long lVar9;
  undefined4 *puVar4;
  
  lVar1 = param_2[1];
  puVar2 = *(undefined4 **)(*param_2 + 8);
  puVar3 = *(undefined4 **)(lVar1 + 8);
  uVar8 = *(long *)(lVar1 + 0x18) - (long)*(int **)(lVar1 + 0x10);
  if ((uVar8 & 0x3fffffffc) == 0) {
    puVar6 = puVar3 + 2;
  }
  else {
    lVar9 = ((long)(uVar8 * 0x40000000) >> 0x20) << 2;
    iVar7 = 1;
    piVar5 = *(int **)(lVar1 + 0x10);
    do {
      iVar7 = *piVar5 * iVar7;
      lVar9 = lVar9 + -4;
      piVar5 = piVar5 + 1;
    } while (lVar9 != 0);
    if (iVar7 == 0) {
      return;
    }
    puVar6 = puVar3 + (long)iVar7 * 2;
  }
  do {
    puVar4 = puVar3 + 2;
    *puVar2 = *puVar3;
    puVar2 = puVar2 + 1;
    puVar3 = puVar4;
  } while (puVar4 != puVar6);
  return;
}



/* Entry: 10968adec; end: 10968ae6f;  */

void FUN_10968adec(void)

{
  ulong uVar1;
  long *plVar2;
  int *piVar3;
  long lVar4;
  int iVar5;
  float fVar6;
  long lStack_50;
  long lStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined4 uStack_30;
  undefined1 auStack_2c [4];
  long lStack_28;
  
  FUN_10968098c(&UNK_10dfdab4b,FUN_10968ae70);
  FUN_10968afb0(&UNK_10dfdab4b,FUN_10968af68);
  FUN_10968098c(&UNK_10dfdab4b,FUN_10968ae70);
  FUN_10968b4c8(&UNK_10dfdab4b,0x10968b480);
  FUN_10968098c(&UNK_10dfdab56,FUN_10968b998);
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_38 = 0x1800000018;
  uStack_30 = 0;
  lStack_48 = 0;
  uStack_40 = 0;
  lStack_50 = 0;
  FUN_109522b28(&lStack_50,&uStack_38,auStack_2c,3);
  plVar2 = (long *)0x0;
  FUN_109680a78(&UNK_10dfdab56,0,&lStack_50,FUN_10968baac);
  lVar4 = lStack_50;
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
  __Unwind_Resume(lVar4);
  piVar3 = *(int **)(plVar2[2] + 0x10);
  uVar1 = (*(long *)(plVar2[2] + 0x18) - (long)piVar3) * 0x40000000 & 0xffffffff00000000;
  if (uVar1 == 0) {
    fVar6 = 1.0;
  }
  else {
    lVar4 = (long)uVar1 >> 0x1e;
    iVar5 = 1;
    do {
      iVar5 = *(int *)(*(long *)(plVar2[1] + 0x10) + (long)*piVar3 * 4) * iVar5;
      lVar4 = lVar4 + -4;
      piVar3 = piVar3 + 1;
    } while (lVar4 != 0);
    fVar6 = (float)iVar5;
  }
  **(float **)(*plVar2 + 8) = fVar6;
  return;
}



/* Entry: 10968ae70; end: 10968af67;  */

void FUN_10968ae70(long *param_1,uint *param_2)

{
  uint uVar1;
  uint uVar2;
  ulong uVar3;
  int iVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  int *piVar8;
  long alStack_58 [3];
  
  lVar7 = *(long *)(param_2 + 2);
  uVar2 = *param_2;
  piVar8 = *(int **)(param_2 + 6);
  uVar1 = param_2[4];
  func_0x00010737fadc(alStack_58);
  if (uVar1 != 0) {
    uVar3 = -(ulong)(uVar1 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar1 << 2;
    do {
      uVar6 = (ulong)(long)*piVar8 >> 3 & 0x1ffffffffffffff8;
      *(ulong *)(alStack_58[0] + uVar6) =
           1L << ((long)*piVar8 & 0x3fU) | *(ulong *)(alStack_58[0] + uVar6);
      uVar3 = uVar3 - 4;
      piVar8 = piVar8 + 1;
    } while (uVar3 != 0);
  }
  FUN_10925b8c4(param_1,(long)(int)(uVar2 - uVar1));
  if ((int)uVar2 < 1) {
    if (alStack_58[0] == 0) {
      return;
    }
  }
  else {
    uVar3 = 0;
    iVar4 = 0;
    lVar5 = *param_1;
    do {
      if ((*(ulong *)(alStack_58[0] + (uVar3 >> 6) * 8) >> (uVar3 & 0x3f) & 1) == 0) {
        *(undefined4 *)(lVar5 + (long)iVar4 * 4) = *(undefined4 *)(lVar7 + uVar3 * 4);
        iVar4 = iVar4 + 1;
      }
      uVar3 = uVar3 + 1;
    } while (uVar2 != uVar3);
  }
  __ZdlPv();
  return;
}



/* Entry: 10968af68; end: 10968afaf;  */

void FUN_10968af68(undefined8 *param_1,undefined8 *param_2,undefined4 param_3)

{
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
  FUN_10968b078(&uStack_30,&uStack_50,param_3);
  return;
}



/* Entry: 10968afb0; end: 10968b077;  */

void FUN_10968afb0(undefined8 param_1)

{
  bool bVar1;
  int iVar2;
  int *piVar3;
  ulong *puVar4;
  int **ppiVar5;
  ulong uVar6;
  code *pcVar7;
  float *pfVar8;
  int *piVar9;
  ulong uVar10;
  ulong uVar11;
  float *pfVar12;
  long lVar13;
  long lVar14;
  float *pfVar15;
  uint uVar16;
  int iVar17;
  int iVar18;
  float fVar19;
  long lStack_d8;
  long lStack_d0;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
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
  
  ppiVar5 = &piStack_50;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_38 = 0x1800000018;
  uStack_30 = 0;
  piStack_48 = (int *)0x0;
  uStack_40 = 0;
  piStack_50 = (int *)0x0;
  FUN_109522b28(&piStack_50,&uStack_38,auStack_2c,3);
  pcVar7 = FUN_10968b418;
  puVar4 = (ulong *)0x0;
  FUN_109680a78(param_1);
  piVar3 = piStack_50;
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
  if (*piVar3 != 0) {
    lVar14 = (long)*piVar3 << 2;
    iVar17 = 1;
    piVar9 = *(int **)(piVar3 + 2);
    do {
      iVar17 = *piVar9 * iVar17;
      lVar14 = lVar14 + -4;
      piVar9 = piVar9 + 1;
    } while (lVar14 != 0);
    if (iVar17 != 1) {
      uVar10 = *puVar4;
      uVar6 = puVar4[1];
      iVar17 = (int)uVar10;
      uStack_c0 = 0xffffffff;
      FUN_1092cd11c(&lStack_a8,(long)iVar17,&uStack_c0);
      lVar14 = lStack_a8;
      if (((ulong)ppiVar5 & 0xffffffff) != 0) {
        uVar11 = -((ulong)ppiVar5 >> 0x1f & 1) & 0xfffffffc00000000 |
                 ((ulong)ppiVar5 & 0xffffffff) << 2;
        do {
          *(undefined4 *)(lStack_a8 + (long)*(int *)pcVar7 * 4) = 0;
          uVar11 = uVar11 - 4;
          pcVar7 = pcVar7 + 4;
        } while (uVar11 != 0);
      }
      if (0 < iVar17) {
        iVar17 = 1;
        uVar10 = uVar10 & 0x7fffffff;
        do {
          uVar11 = uVar10 - 1;
          if (*(int *)(lStack_a8 + uVar11 * 4) != 0) {
            *(int *)(lStack_a8 + uVar11 * 4) = iVar17;
            iVar17 = *(int *)(uVar6 + uVar11 * 4) * iVar17;
          }
          bVar1 = 1 < uVar10;
          uVar10 = uVar11;
        } while (bVar1);
      }
      iVar17 = *(int *)(lStack_a0 + -4);
      uVar10 = puVar4[1];
      iVar18 = (int)*puVar4;
      FUN_10925b8c4(&uStack_c0,(long)iVar18);
      if (1 < iVar18) {
        lVar13 = (ulong)(iVar18 - 2) << 2;
        iVar18 = *(int *)(CONCAT44(uStack_bc,uStack_c0) + (ulong)(iVar18 - 2) * 4 + 4);
        do {
          iVar18 = iVar18 + (*(int *)(uVar10 + lVar13) + -1) * *(int *)(lVar14 + lVar13);
          *(int *)(CONCAT44(uStack_bc,uStack_c0) + lVar13) = iVar18;
          lVar13 = lVar13 + -4;
        } while (lVar13 != -4);
      }
      FUN_10925b8c4(&lStack_d8,(long)(int)*puVar4 + -1);
      pfVar12 = *(float **)(piVar3 + 4);
      if ((int)*puVar4 == 0) {
        uVar10 = 1;
      }
      else {
        uVar10 = (ulong)*(uint *)(puVar4[1] + (long)(int)*puVar4 * 4 + -4);
      }
      iVar18 = 0;
      pfVar15 = (float *)puVar4[2];
      uVar16 = (uint)uVar10;
      lVar14 = lStack_d8 + -4;
      if (iVar17 == 0) goto LAB_10968b290;
LAB_10968b25c:
      if (iVar18 == 0) {
        if (0 < (int)uVar16) {
          lVar13 = 0;
          pfVar8 = pfVar12;
          do {
            *pfVar8 = pfVar15[lVar13];
            lVar13 = lVar13 + 1;
            pfVar8 = pfVar8 + 1;
          } while ((int)uVar16 != lVar13);
        }
      }
      else if (0 < (int)uVar16) {
        lVar13 = 0;
        pfVar8 = pfVar12;
        do {
          *pfVar8 = pfVar12[lVar13] + pfVar15[lVar13];
          lVar13 = lVar13 + 1;
          pfVar8 = pfVar8 + 1;
        } while ((int)uVar16 != lVar13);
      }
      do {
        if ((int)((ulong)(lStack_d0 - lStack_d8) >> 2) < 1) {
          if (lStack_d8 == 0) goto LAB_10968b3ac;
LAB_10968b3a4:
          lStack_d0 = lStack_d8;
          __ZdlPv();
LAB_10968b3ac:
          if (CONCAT44(uStack_bc,uStack_c0) != 0) {
            lStack_b8 = CONCAT44(uStack_bc,uStack_c0);
            __ZdlPv();
          }
          if (lStack_a8 == 0) {
            return;
          }
          lStack_a0 = lStack_a8;
          __ZdlPv();
          return;
        }
        uVar11 = puVar4[1];
        uVar6 = (ulong)(lStack_d0 - lStack_d8) >> 2 & 0x7fffffff;
        while (iVar2 = *(int *)(lVar14 + uVar6 * 4) + 1, *(int *)((uVar11 - 4) + uVar6 * 4) <= iVar2
              ) {
          *(undefined4 *)(lVar14 + uVar6 * 4) = 0;
          bVar1 = uVar6 < 2;
          uVar6 = uVar6 - 1;
          if (bVar1) goto LAB_10968b3a4;
        }
        *(int *)(lVar14 + uVar6 * 4) = iVar2;
        if ((long)uVar6 < 1) goto LAB_10968b3a4;
        iVar2 = *(int *)(lStack_a8 + (uVar6 - 1 & 0xffffffff) * 4);
        if ((iVar2 == 0) && (*(int *)(lStack_d8 + (uVar6 - 1 & 0xffffffff) * 4) == 1)) {
          iVar18 = iVar18 + 1;
        }
        lVar13 = (long)(int)*puVar4 + -1;
        uVar11 = uVar6;
        if ((int)uVar6 < (int)lVar13) {
          do {
            if (*(int *)(lStack_a8 + uVar11 * 4) == 0) {
              iVar18 = iVar18 - (uint)(*(int *)(puVar4[1] + uVar11 * 4) != 1);
            }
            uVar11 = uVar11 + 1;
          } while ((long)uVar11 < lVar13);
        }
        pfVar12 = pfVar12 + (iVar2 - *(int *)(CONCAT44(uStack_bc,uStack_c0) +
                                             (uVar6 & 0xffffffff) * 4));
        pfVar15 = (float *)((long)pfVar15 + (-(uVar10 >> 0x1f) & 0xfffffffc00000000 | uVar10 << 2));
        if (iVar17 != 0) goto LAB_10968b25c;
LAB_10968b290:
        fVar19 = *pfVar15;
        if (1 < uVar16) {
          uVar6 = 1;
          do {
            fVar19 = fVar19 + pfVar15[uVar6];
            uVar6 = uVar6 + 1;
          } while (uVar10 != uVar6);
        }
        if (iVar18 != 0) {
          fVar19 = fVar19 + *pfVar12;
        }
        *pfVar12 = fVar19;
      } while( true );
    }
  }
  if ((int)*puVar4 == 0) {
    fVar19 = *(float *)puVar4[2];
  }
  else {
    lVar14 = (long)(int)*puVar4 << 2;
    uVar10 = 1;
    piVar9 = (int *)puVar4[1];
    do {
      uVar16 = *piVar9 * (int)uVar10;
      uVar10 = (ulong)uVar16;
      lVar14 = lVar14 + -4;
      piVar9 = piVar9 + 1;
    } while (lVar14 != 0);
    pfVar12 = (float *)puVar4[2];
    fVar19 = *pfVar12;
    if (1 < uVar16) {
      lVar14 = uVar10 - 1;
      do {
        pfVar12 = pfVar12 + 1;
        fVar19 = fVar19 + *pfVar12;
        lVar14 = lVar14 + -1;
      } while (lVar14 != 0);
    }
  }
  **(float **)(piVar3 + 4) = fVar19;
  return;
}



/* Entry: 10968b078; end: 10968b417;  */

void FUN_10968b078(int *param_1,ulong *param_2,ulong param_3,int *param_4)

{
  bool bVar1;
  int iVar2;
  ulong uVar3;
  float *pfVar4;
  int *piVar5;
  ulong uVar6;
  ulong uVar7;
  float *pfVar8;
  long lVar9;
  long lVar10;
  float *pfVar11;
  uint uVar12;
  int iVar13;
  int iVar14;
  float fVar15;
  long lStack_88;
  long lStack_80;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  long lStack_68;
  long lStack_58;
  long lStack_50;
  
  if (*param_1 != 0) {
    lVar10 = (long)*param_1 << 2;
    iVar13 = 1;
    piVar5 = *(int **)(param_1 + 2);
    do {
      iVar13 = *piVar5 * iVar13;
      lVar10 = lVar10 + -4;
      piVar5 = piVar5 + 1;
    } while (lVar10 != 0);
    if (iVar13 != 1) {
      uVar6 = *param_2;
      uVar3 = param_2[1];
      iVar13 = (int)uVar6;
      uStack_70 = 0xffffffff;
      FUN_1092cd11c(&lStack_58,(long)iVar13,&uStack_70);
      lVar10 = lStack_58;
      if ((param_3 & 0xffffffff) != 0) {
        uVar7 = -(param_3 >> 0x1f & 1) & 0xfffffffc00000000 | (param_3 & 0xffffffff) << 2;
        do {
          *(undefined4 *)(lStack_58 + (long)*param_4 * 4) = 0;
          uVar7 = uVar7 - 4;
          param_4 = param_4 + 1;
        } while (uVar7 != 0);
      }
      if (0 < iVar13) {
        iVar13 = 1;
        uVar6 = uVar6 & 0x7fffffff;
        do {
          uVar7 = uVar6 - 1;
          if (*(int *)(lStack_58 + uVar7 * 4) != 0) {
            *(int *)(lStack_58 + uVar7 * 4) = iVar13;
            iVar13 = *(int *)(uVar3 + uVar7 * 4) * iVar13;
          }
          bVar1 = 1 < uVar6;
          uVar6 = uVar7;
        } while (bVar1);
      }
      iVar13 = *(int *)(lStack_50 + -4);
      uVar6 = param_2[1];
      iVar14 = (int)*param_2;
      FUN_10925b8c4(&uStack_70,(long)iVar14);
      if (1 < iVar14) {
        lVar9 = (ulong)(iVar14 - 2) << 2;
        iVar14 = *(int *)(CONCAT44(uStack_6c,uStack_70) + (ulong)(iVar14 - 2) * 4 + 4);
        do {
          iVar14 = iVar14 + (*(int *)(uVar6 + lVar9) + -1) * *(int *)(lVar10 + lVar9);
          *(int *)(CONCAT44(uStack_6c,uStack_70) + lVar9) = iVar14;
          lVar9 = lVar9 + -4;
        } while (lVar9 != -4);
      }
      FUN_10925b8c4(&lStack_88,(long)(int)*param_2 + -1);
      pfVar8 = *(float **)(param_1 + 4);
      if ((int)*param_2 == 0) {
        uVar6 = 1;
      }
      else {
        uVar6 = (ulong)*(uint *)(param_2[1] + (long)(int)*param_2 * 4 + -4);
      }
      iVar14 = 0;
      pfVar11 = (float *)param_2[2];
      uVar12 = (uint)uVar6;
      lVar10 = lStack_88 + -4;
      if (iVar13 == 0) goto LAB_10968b290;
LAB_10968b25c:
      if (iVar14 == 0) {
        if (0 < (int)uVar12) {
          lVar9 = 0;
          pfVar4 = pfVar8;
          do {
            *pfVar4 = pfVar11[lVar9];
            lVar9 = lVar9 + 1;
            pfVar4 = pfVar4 + 1;
          } while ((int)uVar12 != lVar9);
        }
      }
      else if (0 < (int)uVar12) {
        lVar9 = 0;
        pfVar4 = pfVar8;
        do {
          *pfVar4 = pfVar8[lVar9] + pfVar11[lVar9];
          lVar9 = lVar9 + 1;
          pfVar4 = pfVar4 + 1;
        } while ((int)uVar12 != lVar9);
      }
      do {
        if ((int)((ulong)(lStack_80 - lStack_88) >> 2) < 1) {
          if (lStack_88 == 0) goto LAB_10968b3ac;
LAB_10968b3a4:
          lStack_80 = lStack_88;
          __ZdlPv();
LAB_10968b3ac:
          if (CONCAT44(uStack_6c,uStack_70) != 0) {
            lStack_68 = CONCAT44(uStack_6c,uStack_70);
            __ZdlPv();
          }
          if (lStack_58 == 0) {
            return;
          }
          lStack_50 = lStack_58;
          __ZdlPv();
          return;
        }
        uVar7 = param_2[1];
        uVar3 = (ulong)(lStack_80 - lStack_88) >> 2 & 0x7fffffff;
        while (iVar2 = *(int *)(lVar10 + uVar3 * 4) + 1, *(int *)((uVar7 - 4) + uVar3 * 4) <= iVar2)
        {
          *(undefined4 *)(lVar10 + uVar3 * 4) = 0;
          bVar1 = uVar3 < 2;
          uVar3 = uVar3 - 1;
          if (bVar1) goto LAB_10968b3a4;
        }
        *(int *)(lVar10 + uVar3 * 4) = iVar2;
        if ((long)uVar3 < 1) goto LAB_10968b3a4;
        iVar2 = *(int *)(lStack_58 + (uVar3 - 1 & 0xffffffff) * 4);
        if ((iVar2 == 0) && (*(int *)(lStack_88 + (uVar3 - 1 & 0xffffffff) * 4) == 1)) {
          iVar14 = iVar14 + 1;
        }
        lVar9 = (long)(int)*param_2 + -1;
        uVar7 = uVar3;
        if ((int)uVar3 < (int)lVar9) {
          do {
            if (*(int *)(lStack_58 + uVar7 * 4) == 0) {
              iVar14 = iVar14 - (uint)(*(int *)(param_2[1] + uVar7 * 4) != 1);
            }
            uVar7 = uVar7 + 1;
          } while ((long)uVar7 < lVar9);
        }
        pfVar8 = pfVar8 + (iVar2 - *(int *)(CONCAT44(uStack_6c,uStack_70) + (uVar3 & 0xffffffff) * 4
                                           ));
        pfVar11 = (float *)((long)pfVar11 + (-(uVar6 >> 0x1f) & 0xfffffffc00000000 | uVar6 << 2));
        if (iVar13 != 0) goto LAB_10968b25c;
LAB_10968b290:
        fVar15 = *pfVar11;
        if (1 < uVar12) {
          uVar3 = 1;
          do {
            fVar15 = fVar15 + pfVar11[uVar3];
            uVar3 = uVar3 + 1;
          } while (uVar6 != uVar3);
        }
        if (iVar14 != 0) {
          fVar15 = fVar15 + *pfVar8;
        }
        *pfVar8 = fVar15;
      } while( true );
    }
  }
  if ((int)*param_2 == 0) {
    fVar15 = *(float *)param_2[2];
  }
  else {
    lVar10 = (long)(int)*param_2 << 2;
    uVar6 = 1;
    piVar5 = (int *)param_2[1];
    do {
      uVar12 = *piVar5 * (int)uVar6;
      uVar6 = (ulong)uVar12;
      lVar10 = lVar10 + -4;
      piVar5 = piVar5 + 1;
    } while (lVar10 != 0);
    pfVar8 = (float *)param_2[2];
    fVar15 = *pfVar8;
    if (1 < uVar12) {
      lVar10 = uVar6 - 1;
      do {
        pfVar8 = pfVar8 + 1;
        fVar15 = fVar15 + *pfVar8;
        lVar10 = lVar10 + -1;
      } while (lVar10 != 0);
    }
  }
  **(float **)(param_1 + 4) = fVar15;
  return;
}



/* Entry: 10968b418; end: 10968b4c7;  */

void FUN_10968b418(undefined8 param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  undefined4 auStack_40 [2];
  long lStack_38;
  undefined8 uStack_30;
  undefined4 auStack_28 [2];
  long lStack_20;
  undefined8 uStack_18;
  
  lVar1 = *param_2;
  lVar2 = param_2[1];
  uStack_18 = *(undefined8 *)(lVar1 + 8);
  lStack_20 = *(long *)(lVar1 + 0x10);
  uStack_30 = *(undefined8 *)(lVar2 + 8);
  lStack_38 = *(long *)(lVar2 + 0x10);
  auStack_28[0] = (undefined4)((ulong)(*(long *)(lVar1 + 0x18) - lStack_20) >> 2);
  auStack_40[0] = (undefined4)((ulong)(*(long *)(lVar2 + 0x18) - lStack_38) >> 2);
  FUN_10968b078(auStack_28,auStack_40,
                (ulong)(*(long *)(param_2[2] + 0x18) - *(long *)(param_2[2] + 0x10)) >> 2 &
                0xffffffff);
  return;
}



/* Entry: 10968b4c8; end: 10968b58f;  */

void FUN_10968b4c8(undefined8 param_1)

{
  bool bVar1;
  int iVar2;
  int *piVar3;
  ulong *puVar4;
  int **ppiVar5;
  code *pcVar6;
  int *piVar7;
  ulong uVar8;
  ulong uVar9;
  undefined8 *puVar10;
  long lVar11;
  long lVar12;
  undefined8 *puVar13;
  uint uVar14;
  ulong uVar15;
  undefined8 *puVar16;
  int iVar17;
  int iVar18;
  undefined8 uVar19;
  long lStack_d8;
  long lStack_d0;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
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
  
  ppiVar5 = &piStack_50;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_38 = 0x2800000028;
  uStack_30 = 0;
  piStack_48 = (int *)0x0;
  uStack_40 = 0;
  piStack_50 = (int *)0x0;
  FUN_109522b28(&piStack_50,&uStack_38,auStack_2c,3);
  pcVar6 = FUN_10968b930;
  puVar4 = (ulong *)0x0;
  FUN_109680a78(param_1);
  piVar3 = piStack_50;
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
  if (*piVar3 != 0) {
    lVar12 = (long)*piVar3 << 2;
    iVar17 = 1;
    piVar7 = *(int **)(piVar3 + 2);
    do {
      iVar17 = *piVar7 * iVar17;
      lVar12 = lVar12 + -4;
      piVar7 = piVar7 + 1;
    } while (lVar12 != 0);
    if (iVar17 != 1) {
      uVar8 = *puVar4;
      uVar15 = puVar4[1];
      iVar17 = (int)uVar8;
      uStack_c0 = 0xffffffff;
      FUN_1092cd11c(&lStack_a8,(long)iVar17,&uStack_c0);
      lVar12 = lStack_a8;
      if (((ulong)ppiVar5 & 0xffffffff) != 0) {
        uVar9 = -((ulong)ppiVar5 >> 0x1f & 1) & 0xfffffffc00000000 |
                ((ulong)ppiVar5 & 0xffffffff) << 2;
        do {
          *(undefined4 *)(lStack_a8 + (long)*(int *)pcVar6 * 4) = 0;
          uVar9 = uVar9 - 4;
          pcVar6 = pcVar6 + 4;
        } while (uVar9 != 0);
      }
      if (0 < iVar17) {
        iVar17 = 1;
        uVar8 = uVar8 & 0x7fffffff;
        do {
          uVar9 = uVar8 - 1;
          if (*(int *)(lStack_a8 + uVar9 * 4) != 0) {
            *(int *)(lStack_a8 + uVar9 * 4) = iVar17;
            iVar17 = *(int *)(uVar15 + uVar9 * 4) * iVar17;
          }
          bVar1 = 1 < uVar8;
          uVar8 = uVar9;
        } while (bVar1);
      }
      iVar17 = *(int *)(lStack_a0 + -4);
      uVar8 = puVar4[1];
      iVar18 = (int)*puVar4;
      FUN_10925b8c4(&uStack_c0,(long)iVar18);
      if (1 < iVar18) {
        lVar11 = (ulong)(iVar18 - 2) << 2;
        iVar18 = *(int *)(CONCAT44(uStack_bc,uStack_c0) + (ulong)(iVar18 - 2) * 4 + 4);
        do {
          iVar18 = iVar18 + (*(int *)(uVar8 + lVar11) + -1) * *(int *)(lVar12 + lVar11);
          *(int *)(CONCAT44(uStack_bc,uStack_c0) + lVar11) = iVar18;
          lVar11 = lVar11 + -4;
        } while (lVar11 != -4);
      }
      FUN_10925b8c4(&lStack_d8,(long)(int)*puVar4 + -1);
      puVar10 = *(undefined8 **)(piVar3 + 4);
      if ((int)*puVar4 == 0) {
        uVar8 = 1;
      }
      else {
        uVar8 = (ulong)*(uint *)(puVar4[1] + (long)(int)*puVar4 * 4 + -4);
      }
      iVar18 = 0;
      puVar13 = (undefined8 *)puVar4[2];
      uVar14 = (uint)uVar8;
      if (iVar17 == 0) goto LAB_10968b78c;
LAB_10968b758:
      if (iVar18 == 0) {
        if (0 < (int)uVar14) {
          lVar12 = 0;
          puVar16 = puVar10;
          do {
            *puVar16 = puVar13[lVar12];
            lVar12 = lVar12 + 1;
            puVar16 = puVar16 + 1;
          } while ((int)uVar14 != lVar12);
        }
      }
      else if (0 < (int)uVar14) {
        lVar12 = 0;
        puVar16 = puVar10;
        do {
          *puVar16 = CONCAT44((float)((ulong)puVar10[lVar12] >> 0x20) +
                              (float)((ulong)puVar13[lVar12] >> 0x20),
                              (float)puVar10[lVar12] + (float)puVar13[lVar12]);
          lVar12 = lVar12 + 1;
          puVar16 = puVar16 + 1;
        } while ((int)uVar14 != lVar12);
      }
      do {
        if ((int)((ulong)(lStack_d0 - lStack_d8) >> 2) < 1) {
          if (lStack_d8 == 0) goto LAB_10968b8c4;
LAB_10968b8bc:
          lStack_d0 = lStack_d8;
          __ZdlPv();
LAB_10968b8c4:
          if (CONCAT44(uStack_bc,uStack_c0) != 0) {
            lStack_b8 = CONCAT44(uStack_bc,uStack_c0);
            __ZdlPv();
          }
          if (lStack_a8 == 0) {
            return;
          }
          lStack_a0 = lStack_a8;
          __ZdlPv();
          return;
        }
        uVar9 = puVar4[1];
        uVar15 = (ulong)(lStack_d0 - lStack_d8) >> 2 & 0x7fffffff;
        while (iVar2 = *(int *)(lStack_d8 + -4 + uVar15 * 4) + 1,
              *(int *)((uVar9 - 4) + uVar15 * 4) <= iVar2) {
          *(undefined4 *)(lStack_d8 + -4 + uVar15 * 4) = 0;
          bVar1 = uVar15 < 2;
          uVar15 = uVar15 - 1;
          if (bVar1) goto LAB_10968b8bc;
        }
        *(int *)(lStack_d8 + uVar15 * 4 + -4) = iVar2;
        if ((long)uVar15 < 1) goto LAB_10968b8bc;
        iVar2 = *(int *)(lStack_a8 + (uVar15 - 1 & 0xffffffff) * 4);
        if ((iVar2 == 0) && (*(int *)(lStack_d8 + (uVar15 - 1 & 0xffffffff) * 4) == 1)) {
          iVar18 = iVar18 + 1;
        }
        lVar12 = (long)(int)*puVar4 + -1;
        uVar9 = uVar15;
        if ((int)uVar15 < (int)lVar12) {
          do {
            if (*(int *)(lStack_a8 + uVar9 * 4) == 0) {
              iVar18 = iVar18 - (uint)(*(int *)(puVar4[1] + uVar9 * 4) != 1);
            }
            uVar9 = uVar9 + 1;
          } while ((long)uVar9 < lVar12);
        }
        puVar10 = puVar10 + (iVar2 - *(int *)(CONCAT44(uStack_bc,uStack_c0) +
                                             (uVar15 & 0xffffffff) * 4));
        puVar13 = (undefined8 *)
                  ((long)puVar13 + (-(uVar8 >> 0x1f) & 0xfffffff800000000 | uVar8 << 3));
        if (iVar17 != 0) goto LAB_10968b758;
LAB_10968b78c:
        uVar19 = *puVar13;
        if (1 < uVar14) {
          uVar15 = 1;
          do {
            uVar19 = CONCAT44((float)((ulong)uVar19 >> 0x20) +
                              (float)((ulong)puVar13[uVar15] >> 0x20),
                              (float)uVar19 + (float)puVar13[uVar15]);
            uVar15 = uVar15 + 1;
          } while (uVar8 != uVar15);
        }
        if (iVar18 != 0) {
          uVar19 = CONCAT44((float)((ulong)uVar19 >> 0x20) + (float)((ulong)*puVar10 >> 0x20),
                            (float)uVar19 + (float)*puVar10);
        }
        *puVar10 = uVar19;
      } while( true );
    }
  }
  if ((int)*puVar4 == 0) {
    uVar19 = *(undefined8 *)puVar4[2];
  }
  else {
    lVar12 = (long)(int)*puVar4 << 2;
    uVar8 = 1;
    piVar7 = (int *)puVar4[1];
    do {
      uVar14 = *piVar7 * (int)uVar8;
      uVar8 = (ulong)uVar14;
      lVar12 = lVar12 + -4;
      piVar7 = piVar7 + 1;
    } while (lVar12 != 0);
    puVar10 = (undefined8 *)puVar4[2];
    uVar19 = *puVar10;
    if (1 < uVar14) {
      lVar12 = uVar8 - 1;
      do {
        puVar10 = puVar10 + 1;
        uVar19 = CONCAT44((float)((ulong)uVar19 >> 0x20) + (float)((ulong)*puVar10 >> 0x20),
                          (float)uVar19 + (float)*puVar10);
        lVar12 = lVar12 + -1;
      } while (lVar12 != 0);
    }
  }
  **(undefined8 **)(piVar3 + 4) = uVar19;
  return;
}



/* Entry: 10968b590; end: 10968b92f;  */

void FUN_10968b590(int *param_1,ulong *param_2,ulong param_3,int *param_4)

{
  bool bVar1;
  int iVar2;
  int *piVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 *puVar6;
  long lVar7;
  long lVar8;
  undefined8 *puVar9;
  uint uVar10;
  ulong uVar11;
  undefined8 *puVar12;
  int iVar13;
  int iVar14;
  undefined8 uVar15;
  long lStack_88;
  long lStack_80;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  long lStack_68;
  long lStack_58;
  long lStack_50;
  
  if (*param_1 != 0) {
    lVar8 = (long)*param_1 << 2;
    iVar13 = 1;
    piVar3 = *(int **)(param_1 + 2);
    do {
      iVar13 = *piVar3 * iVar13;
      lVar8 = lVar8 + -4;
      piVar3 = piVar3 + 1;
    } while (lVar8 != 0);
    if (iVar13 != 1) {
      uVar4 = *param_2;
      uVar11 = param_2[1];
      iVar13 = (int)uVar4;
      uStack_70 = 0xffffffff;
      FUN_1092cd11c(&lStack_58,(long)iVar13,&uStack_70);
      lVar8 = lStack_58;
      if ((param_3 & 0xffffffff) != 0) {
        uVar5 = -(param_3 >> 0x1f & 1) & 0xfffffffc00000000 | (param_3 & 0xffffffff) << 2;
        do {
          *(undefined4 *)(lStack_58 + (long)*param_4 * 4) = 0;
          uVar5 = uVar5 - 4;
          param_4 = param_4 + 1;
        } while (uVar5 != 0);
      }
      if (0 < iVar13) {
        iVar13 = 1;
        uVar4 = uVar4 & 0x7fffffff;
        do {
          uVar5 = uVar4 - 1;
          if (*(int *)(lStack_58 + uVar5 * 4) != 0) {
            *(int *)(lStack_58 + uVar5 * 4) = iVar13;
            iVar13 = *(int *)(uVar11 + uVar5 * 4) * iVar13;
          }
          bVar1 = 1 < uVar4;
          uVar4 = uVar5;
        } while (bVar1);
      }
      iVar13 = *(int *)(lStack_50 + -4);
      uVar4 = param_2[1];
      iVar14 = (int)*param_2;
      FUN_10925b8c4(&uStack_70,(long)iVar14);
      if (1 < iVar14) {
        lVar7 = (ulong)(iVar14 - 2) << 2;
        iVar14 = *(int *)(CONCAT44(uStack_6c,uStack_70) + (ulong)(iVar14 - 2) * 4 + 4);
        do {
          iVar14 = iVar14 + (*(int *)(uVar4 + lVar7) + -1) * *(int *)(lVar8 + lVar7);
          *(int *)(CONCAT44(uStack_6c,uStack_70) + lVar7) = iVar14;
          lVar7 = lVar7 + -4;
        } while (lVar7 != -4);
      }
      FUN_10925b8c4(&lStack_88,(long)(int)*param_2 + -1);
      puVar6 = *(undefined8 **)(param_1 + 4);
      if ((int)*param_2 == 0) {
        uVar4 = 1;
      }
      else {
        uVar4 = (ulong)*(uint *)(param_2[1] + (long)(int)*param_2 * 4 + -4);
      }
      iVar14 = 0;
      puVar9 = (undefined8 *)param_2[2];
      uVar10 = (uint)uVar4;
      if (iVar13 == 0) goto LAB_10968b78c;
LAB_10968b758:
      if (iVar14 == 0) {
        if (0 < (int)uVar10) {
          lVar8 = 0;
          puVar12 = puVar6;
          do {
            *puVar12 = puVar9[lVar8];
            lVar8 = lVar8 + 1;
            puVar12 = puVar12 + 1;
          } while ((int)uVar10 != lVar8);
        }
      }
      else if (0 < (int)uVar10) {
        lVar8 = 0;
        puVar12 = puVar6;
        do {
          *puVar12 = CONCAT44((float)((ulong)puVar6[lVar8] >> 0x20) +
                              (float)((ulong)puVar9[lVar8] >> 0x20),
                              (float)puVar6[lVar8] + (float)puVar9[lVar8]);
          lVar8 = lVar8 + 1;
          puVar12 = puVar12 + 1;
        } while ((int)uVar10 != lVar8);
      }
      do {
        if ((int)((ulong)(lStack_80 - lStack_88) >> 2) < 1) {
          if (lStack_88 == 0) goto LAB_10968b8c4;
LAB_10968b8bc:
          lStack_80 = lStack_88;
          __ZdlPv();
LAB_10968b8c4:
          if (CONCAT44(uStack_6c,uStack_70) != 0) {
            lStack_68 = CONCAT44(uStack_6c,uStack_70);
            __ZdlPv();
          }
          if (lStack_58 == 0) {
            return;
          }
          lStack_50 = lStack_58;
          __ZdlPv();
          return;
        }
        uVar5 = param_2[1];
        uVar11 = (ulong)(lStack_80 - lStack_88) >> 2 & 0x7fffffff;
        while (iVar2 = *(int *)(lStack_88 + -4 + uVar11 * 4) + 1,
              *(int *)((uVar5 - 4) + uVar11 * 4) <= iVar2) {
          *(undefined4 *)(lStack_88 + -4 + uVar11 * 4) = 0;
          bVar1 = uVar11 < 2;
          uVar11 = uVar11 - 1;
          if (bVar1) goto LAB_10968b8bc;
        }
        *(int *)(lStack_88 + uVar11 * 4 + -4) = iVar2;
        if ((long)uVar11 < 1) goto LAB_10968b8bc;
        iVar2 = *(int *)(lStack_58 + (uVar11 - 1 & 0xffffffff) * 4);
        if ((iVar2 == 0) && (*(int *)(lStack_88 + (uVar11 - 1 & 0xffffffff) * 4) == 1)) {
          iVar14 = iVar14 + 1;
        }
        lVar8 = (long)(int)*param_2 + -1;
        uVar5 = uVar11;
        if ((int)uVar11 < (int)lVar8) {
          do {
            if (*(int *)(lStack_58 + uVar5 * 4) == 0) {
              iVar14 = iVar14 - (uint)(*(int *)(param_2[1] + uVar5 * 4) != 1);
            }
            uVar5 = uVar5 + 1;
          } while ((long)uVar5 < lVar8);
        }
        puVar6 = puVar6 + (iVar2 - *(int *)(CONCAT44(uStack_6c,uStack_70) +
                                           (uVar11 & 0xffffffff) * 4));
        puVar9 = (undefined8 *)((long)puVar9 + (-(uVar4 >> 0x1f) & 0xfffffff800000000 | uVar4 << 3))
        ;
        if (iVar13 != 0) goto LAB_10968b758;
LAB_10968b78c:
        uVar15 = *puVar9;
        if (1 < uVar10) {
          uVar11 = 1;
          do {
            uVar15 = CONCAT44((float)((ulong)uVar15 >> 0x20) +
                              (float)((ulong)puVar9[uVar11] >> 0x20),
                              (float)uVar15 + (float)puVar9[uVar11]);
            uVar11 = uVar11 + 1;
          } while (uVar4 != uVar11);
        }
        if (iVar14 != 0) {
          uVar15 = CONCAT44((float)((ulong)uVar15 >> 0x20) + (float)((ulong)*puVar6 >> 0x20),
                            (float)uVar15 + (float)*puVar6);
        }
        *puVar6 = uVar15;
      } while( true );
    }
  }
  if ((int)*param_2 == 0) {
    uVar15 = *(undefined8 *)param_2[2];
  }
  else {
    lVar8 = (long)(int)*param_2 << 2;
    uVar4 = 1;
    piVar3 = (int *)param_2[1];
    do {
      uVar10 = *piVar3 * (int)uVar4;
      uVar4 = (ulong)uVar10;
      lVar8 = lVar8 + -4;
      piVar3 = piVar3 + 1;
    } while (lVar8 != 0);
    puVar6 = (undefined8 *)param_2[2];
    uVar15 = *puVar6;
    if (1 < uVar10) {
      lVar8 = uVar4 - 1;
      do {
        puVar6 = puVar6 + 1;
        uVar15 = CONCAT44((float)((ulong)uVar15 >> 0x20) + (float)((ulong)*puVar6 >> 0x20),
                          (float)uVar15 + (float)*puVar6);
        lVar8 = lVar8 + -1;
      } while (lVar8 != 0);
    }
  }
  **(undefined8 **)(param_1 + 4) = uVar15;
  return;
}



/* Entry: 10968b930; end: 10968b997;  */

void FUN_10968b930(undefined8 param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  undefined4 auStack_40 [2];
  long lStack_38;
  undefined8 uStack_30;
  undefined4 auStack_28 [2];
  long lStack_20;
  undefined8 uStack_18;
  
  lVar1 = *param_2;
  lVar2 = param_2[1];
  uStack_18 = *(undefined8 *)(lVar1 + 8);
  lStack_20 = *(long *)(lVar1 + 0x10);
  uStack_30 = *(undefined8 *)(lVar2 + 8);
  lStack_38 = *(long *)(lVar2 + 0x10);
  auStack_28[0] = (undefined4)((ulong)(*(long *)(lVar1 + 0x18) - lStack_20) >> 2);
  auStack_40[0] = (undefined4)((ulong)(*(long *)(lVar2 + 0x18) - lStack_38) >> 2);
  FUN_10968b590(auStack_28,auStack_40,
                (ulong)(*(long *)(param_2[2] + 0x18) - *(long *)(param_2[2] + 0x10)) >> 2 &
                0xffffffff);
  return;
}



/* Entry: 10968b998; end: 10968b9e3;  */

void FUN_10968b998(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  return;
}



/* Entry: 10968b9e4; end: 10968baab;  */

void FUN_10968b9e4(undefined8 param_1)

{
  ulong uVar1;
  long *plVar2;
  int *piVar3;
  long lVar4;
  int iVar5;
  float fVar6;
  long lStack_50;
  long lStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined4 uStack_30;
  undefined1 auStack_2c [4];
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_38 = 0x1800000018;
  uStack_30 = 0;
  lStack_48 = 0;
  uStack_40 = 0;
  lStack_50 = 0;
  FUN_109522b28(&lStack_50,&uStack_38,auStack_2c,3);
  plVar2 = (long *)0x0;
  FUN_109680a78(param_1,0,&lStack_50,FUN_10968baac);
  lVar4 = lStack_50;
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
  __Unwind_Resume(lVar4);
  piVar3 = *(int **)(plVar2[2] + 0x10);
  uVar1 = (*(long *)(plVar2[2] + 0x18) - (long)piVar3) * 0x40000000 & 0xffffffff00000000;
  if (uVar1 == 0) {
    fVar6 = 1.0;
  }
  else {
    lVar4 = (long)uVar1 >> 0x1e;
    iVar5 = 1;
    do {
      iVar5 = *(int *)(*(long *)(plVar2[1] + 0x10) + (long)*piVar3 * 4) * iVar5;
      lVar4 = lVar4 + -4;
      piVar3 = piVar3 + 1;
    } while (lVar4 != 0);
    fVar6 = (float)iVar5;
  }
  **(float **)(*plVar2 + 8) = fVar6;
  return;
}



/* Entry: 10968baac; end: 10968bb03;  */

void FUN_10968baac(undefined8 param_1,long *param_2)

{
  ulong uVar1;
  int *piVar2;
  long lVar3;
  int iVar4;
  float fVar5;
  
  piVar2 = *(int **)(param_2[2] + 0x10);
  uVar1 = (*(long *)(param_2[2] + 0x18) - (long)piVar2) * 0x40000000 & 0xffffffff00000000;
  if (uVar1 == 0) {
    fVar5 = 1.0;
  }
  else {
    lVar3 = (long)uVar1 >> 0x1e;
    iVar4 = 1;
    do {
      iVar4 = *(int *)(*(long *)(param_2[1] + 0x10) + (long)*piVar2 * 4) * iVar4;
      lVar3 = lVar3 + -4;
      piVar2 = piVar2 + 1;
    } while (lVar3 != 0);
    fVar5 = (float)iVar4;
  }
  **(float **)(*param_2 + 8) = fVar5;
  return;
}



/* Entry: 10968bb04; end: 10968bccb;  */

void FUN_10968bb04(void)

{
  long lVar1;
  long lVar2;
  long lStack_50;
  long lStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  FUN_10968098c(&UNK_10dfdab80,FUN_10968bccc);
  FUN_10968bd58(&UNK_10dfdab80,FUN_10968bd54);
  FUN_10968098c(&UNK_10dfdab8b,FUN_10968be1c);
  FUN_10968bd58(&UNK_10dfdab8b,FUN_10968bd54);
  FUN_10968098c(&UNK_10dfdab9a,FUN_10968bf10);
  FUN_10968bd58(&UNK_10dfdab9a,FUN_10968bd54);
  FUN_10968098c(&UNK_10dfdabf5,FUN_10968bf70);
  FUN_10968bff4(&UNK_10dfdabf5,FUN_10968bff0);
  FUN_10968098c(&UNK_10dfdaba8,FUN_10968c0b8);
  FUN_10968bd58(&UNK_10dfdaba8,FUN_10968bd54);
  FUN_10968098c(&UNK_10dfdabba,FUN_10968c11c);
  FUN_10968c160(&UNK_10dfdabba,FUN_10968c15c);
  FUN_10968098c(&UNK_10dfdabbf,FUN_10968c220);
  FUN_10968bff4(&UNK_10dfdabbf,FUN_10968bff0);
  FUN_10968c290();
  FUN_10968c954();
  FUN_10968098c(&UNK_10dfdabe0,FUN_10968cd20);
  FUN_10968c160(&UNK_10dfdabe0,FUN_10968c15c);
  FUN_10968098c(&UNK_10dfdabe5,FUN_10968cd98);
  FUN_10968bd58(&UNK_10dfdabe5,FUN_10968bd54);
  FUN_10968098c(&UNK_10dfdac06,0x10968cdf8);
  FUN_10968bd58(&UNK_10dfdac06,FUN_10968bd54);
  FUN_10968098c(&UNK_10dfdac10,0x10968ce78);
  lVar2 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_40 = 0;
  uStack_38 = 0;
  lStack_50 = 0;
  lStack_48 = 0;
  FUN_109522b28(&lStack_50,&uStack_38,&stack0xffffffffffffffd4,3);
  FUN_109680a78(&UNK_10dfdac10,0,&lStack_50,FUN_10968be18);
  lVar1 = lStack_50;
  if (lStack_50 != 0) {
    lStack_48 = lStack_50;
    __ZdlPv();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar2) {
    return;
  }
  ___stack_chk_fail();
  if (lStack_50 != 0) {
    lStack_48 = lStack_50;
    __ZdlPv();
  }
  __Unwind_Resume(lVar1);
  return;
}



/* Entry: 10968bccc; end: 10968bd53;  */

void FUN_10968bccc(undefined8 *param_1,int *param_2)

{
  int iVar1;
  int *piVar2;
  int iStack_34;
  
  iVar1 = *param_2;
  piVar2 = *(int **)(param_2 + 6);
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = 0;
  iStack_34 = 0;
  if (0 < iVar1) {
    do {
      FUN_10923b3a0(param_1,&iStack_34);
      iStack_34 = iStack_34 + *piVar2;
    } while (iStack_34 < iVar1);
  }
  return;
}



/* Entry: 10968bd54; end: 10968bd57;  */

void FUN_10968bd54(void)

{
  return;
}



/* Entry: 10968bd58; end: 10968be17;  */

void FUN_10968bd58(undefined8 param_1)

{
  long lVar1;
  long lStack_50;
  long lStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined4 uStack_30;
  undefined1 auStack_2c [4];
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_40 = 0;
  uStack_38 = 0;
  uStack_30 = 0;
  lStack_50 = 0;
  lStack_48 = 0;
  FUN_109522b28(&lStack_50,&uStack_38,auStack_2c,3);
  FUN_109680a78(param_1,0,&lStack_50,FUN_10968be18);
  lVar1 = lStack_50;
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
  __Unwind_Resume(lVar1);
  return;
}



/* Entry: 10968be18; end: 10968be1b;  */

void FUN_10968be18(void)

{
  return;
}



/* Entry: 10968be1c; end: 10968bf0f;  */

void FUN_10968be1c(undefined8 *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  int iStack_48;
  int iStack_44;
  
  lVar5 = *(long *)(param_2 + 2);
  iVar1 = *param_2;
  lVar6 = *(long *)(param_2 + 6);
  iVar2 = param_2[4];
  iVar4 = iVar1 - iVar2;
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = 0;
  iStack_44 = 0;
  if (0 < iVar4) {
    do {
      iVar3 = *(int *)(lVar5 + (long)iStack_44 * 4);
      if (1 < iVar3 || iVar3 == -1) {
        FUN_10923b3a0(param_1,&iStack_44);
      }
      iStack_44 = iStack_44 + 1;
    } while (iStack_44 < iVar4);
  }
  iStack_48 = iVar4;
  if (0 < iVar2) {
    do {
      if (*(int *)(lVar5 + (long)iStack_48 * 4) != *(int *)(lVar6 + (long)(iStack_48 - iVar4) * 4))
      {
        FUN_10923b3a0(param_1,&iStack_48);
      }
      iStack_48 = iStack_48 + 1;
    } while (iStack_48 < iVar1);
  }
  return;
}



/* Entry: 10968bf10; end: 10968bf6f;  */

void FUN_10968bf10(undefined8 *param_1,int *param_2)

{
  int iVar1;
  int *piVar2;
  long lVar3;
  int *piVar4;
  int *piVar5;
  
  piVar4 = *(int **)(param_2 + 2);
  iVar1 = *param_2;
  lVar3 = (long)iVar1;
  piVar5 = *(int **)(param_2 + 6);
  FUN_10925b8c4(param_1,lVar3);
  if (0 < iVar1) {
    piVar2 = (int *)*param_1;
    do {
      iVar1 = 0;
      if (*piVar5 != 0) {
        iVar1 = *piVar4 / *piVar5;
      }
      *piVar2 = iVar1;
      lVar3 = lVar3 + -1;
      piVar2 = piVar2 + 1;
      piVar4 = piVar4 + 1;
      piVar5 = piVar5 + 1;
    } while (lVar3 != 0);
  }
  return;
}



/* Entry: 10968bf70; end: 10968bfef;  */

void FUN_10968bf70(long *param_1,int *param_2)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  int *piVar4;
  
  lVar2 = *(long *)(param_2 + 2);
  iVar1 = *param_2;
  piVar4 = *(int **)(param_2 + 6);
  uVar3 = *(undefined8 *)(param_2 + 10);
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = 0;
  FUN_1092d1c20(param_1,lVar2,lVar2 + (((long)iVar1 << 0x20) >> 0x1e));
  func_0x0001078386d8(param_1,*param_1 + (long)*piVar4 * 4,uVar3);
  return;
}



/* Entry: 10968bff0; end: 10968bff3;  */

void FUN_10968bff0(void)

{
  return;
}



/* Entry: 10968bff4; end: 10968c0b3;  */

void FUN_10968bff4(undefined8 param_1)

{
  long lVar1;
  long lStack_50;
  long lStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_38 = 0;
  uStack_30 = 0;
  lStack_48 = 0;
  uStack_40 = 0;
  lStack_50 = 0;
  FUN_109522b28(&lStack_50,&uStack_38,&lStack_28,4);
  FUN_109680a78(param_1,0,&lStack_50,FUN_10968c0b4);
  lVar1 = lStack_50;
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
  __Unwind_Resume(lVar1);
  return;
}



/* Entry: 10968c0b4; end: 10968c0b7;  */

void FUN_10968c0b4(void)

{
  return;
}



/* Entry: 10968c0b8; end: 10968c11b;  */

void FUN_10968c0b8(long *param_1,int *param_2)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  long lVar4;
  undefined4 *puVar5;
  
  puVar3 = *(undefined4 **)(param_2 + 2);
  iVar1 = *param_2;
  lVar4 = (long)iVar1;
  puVar5 = *(undefined4 **)(param_2 + 6);
  FUN_10925b8c4(param_1,lVar4 << 1);
  if (0 < iVar1) {
    puVar2 = (undefined4 *)(*param_1 + 4);
    do {
      puVar2[-1] = *puVar3;
      *puVar2 = *puVar5;
      lVar4 = lVar4 + -1;
      puVar2 = puVar2 + 2;
      puVar3 = puVar3 + 1;
      puVar5 = puVar5 + 1;
    } while (lVar4 != 0);
  }
  return;
}



/* Entry: 10968c11c; end: 10968c15b;  */

void FUN_10968c11c(undefined8 *param_1,undefined4 *param_2)

{
  undefined4 uStack_14;
  
  uStack_14 = *param_2;
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = 0;
  FUN_1092d1c20(param_1,&uStack_14,&stack0xfffffffffffffff0,1);
  return;
}



/* Entry: 10968c15c; end: 10968c15f;  */

void FUN_10968c15c(void)

{
  return;
}



/* Entry: 10968c160; end: 10968c21b;  */

void FUN_10968c160(undefined8 param_1)

{
  long lVar1;
  long lStack_48;
  long lStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_38 = 0;
  uStack_30 = 0;
  lStack_48 = 0;
  lStack_40 = 0;
  FUN_109522b28(&lStack_48,&uStack_30,&lStack_28,2);
  FUN_109680a78(param_1,0,&lStack_48,FUN_10968c21c);
  lVar1 = lStack_48;
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
  __Unwind_Resume(lVar1);
  return;
}



/* Entry: 10968c21c; end: 10968c21f;  */

void FUN_10968c21c(void)

{
  return;
}



/* Entry: 10968c220; end: 10968c28f;  */

void FUN_10968c220(long *param_1,int *param_2)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  long lVar4;
  ulong uVar5;
  int *piVar6;
  undefined4 *puVar7;
  
  lVar4 = *(long *)(param_2 + 2);
  iVar3 = *param_2;
  piVar6 = *(int **)(param_2 + 6);
  uVar1 = param_2[4];
  puVar7 = *(undefined4 **)(param_2 + 10);
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = 0;
  FUN_1092d1c20(param_1,lVar4,lVar4 + (((long)iVar3 << 0x20) >> 0x1e));
  if (uVar1 != 0) {
    uVar5 = -(ulong)(uVar1 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar1 << 2;
    lVar4 = *param_1;
    uVar2 = *puVar7;
    do {
      *(undefined4 *)(lVar4 + (long)*piVar6 * 4) = uVar2;
      uVar5 = uVar5 - 4;
      piVar6 = piVar6 + 1;
    } while (uVar5 != 0);
  }
  return;
}



/* Entry: 10968c290; end: 10968c2fb;  */

void FUN_10968c290(void)

{
  uint uVar1;
  long lVar2;
  long *plVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  ulong uVar6;
  int *piVar7;
  long lVar8;
  long lStack_50;
  long lStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined4 uStack_30;
  undefined1 auStack_2c [4];
  long lStack_28;
  
  FUN_10968098c(&UNK_10dfdabd2,FUN_10968c2fc);
  FUN_10968c424(&UNK_10dfdabd2,FUN_10968c3d4);
  FUN_10968c598(&UNK_10dfdabd2,0x10968c548);
  FUN_10968c6e4(&UNK_10dfdabd2,FUN_10968c6bc);
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_38 = 0x2800000028;
  uStack_30 = 0;
  lStack_48 = 0;
  uStack_40 = 0;
  lStack_50 = 0;
  FUN_109522b28(&lStack_50,&uStack_38,auStack_2c,3);
  plVar3 = (long *)0x0;
  FUN_109680a78(&UNK_10dfdabd2,0,&lStack_50,FUN_10968c8f8);
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
  puVar4 = *(undefined8 **)(plVar3[1] + 8);
  puVar5 = *(undefined8 **)(lVar2 + 8);
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
    *puVar5 = *puVar4;
    uVar6 = uVar6 - 1;
    puVar4 = puVar4 + 1;
    puVar5 = puVar5 + 1;
  } while (uVar6 != 0);
  return;
}



/* Entry: 10968c2fc; end: 10968c3d3;  */

void FUN_10968c2fc(long *param_1,uint *param_2)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  long lVar7;
  int iVar8;
  ulong uVar9;
  long lVar10;
  int *piVar11;
  
  piVar11 = *(int **)(param_2 + 2);
  uVar1 = *param_2;
  lVar10 = *(long *)(param_2 + 6);
  uVar3 = param_2[4];
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = 0;
  FUN_1092d1c20(param_1,lVar10,lVar10 + (((long)(int)uVar3 << 0x20) >> 0x1e));
  if (uVar1 == 0) {
    iVar5 = 1;
  }
  else {
    iVar5 = *piVar11;
    if (uVar1 != 1) {
      lVar7 = (ulong)uVar1 - 1;
      do {
        piVar11 = piVar11 + 1;
        iVar5 = *piVar11 * iVar5;
        lVar7 = lVar7 + -1;
      } while (lVar7 != 0);
    }
  }
  if (0 < (int)uVar3) {
    uVar9 = 0;
    iVar8 = 1;
    iVar6 = -1;
    do {
      iVar2 = *(int *)(lVar10 + uVar9 * 4);
      bVar4 = iVar2 == -1;
      if (bVar4) {
        iVar2 = 1;
      }
      iVar8 = iVar2 * iVar8;
      iVar2 = (int)uVar9;
      if (!bVar4) {
        iVar2 = iVar6;
      }
      uVar9 = uVar9 + 1;
      iVar6 = iVar2;
    } while (uVar3 != uVar9);
    if (iVar2 != -1 && iVar5 != -1) {
      iVar6 = 0;
      if (iVar8 != 0) {
        iVar6 = iVar5 / iVar8;
      }
      *(int *)(*param_1 + (long)iVar2 * 4) = iVar6;
    }
  }
  return;
}



/* Entry: 10968c3d4; end: 10968c423;  */

void FUN_10968c3d4(int *param_1,long param_2)

{
  uint uVar1;
  ulong uVar2;
  int *piVar3;
  undefined1 *puVar4;
  long lVar5;
  undefined1 *puVar6;
  
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
  puVar4 = *(undefined1 **)(param_1 + 4);
  puVar6 = *(undefined1 **)(param_2 + 0x10);
  do {
    *puVar4 = *puVar6;
    uVar2 = uVar2 - 1;
    puVar4 = puVar4 + 1;
    puVar6 = puVar6 + 1;
  } while (uVar2 != 0);
  return;
}



/* Entry: 10968c424; end: 10968c4eb;  */

void FUN_10968c424(undefined8 param_1)

{
  uint uVar1;
  long lVar2;
  long *plVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  ulong uVar6;
  int *piVar7;
  long lVar8;
  long lStack_50;
  long lStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined4 uStack_30;
  undefined1 auStack_2c [4];
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_38 = 0x1400000014;
  uStack_30 = 0;
  lStack_48 = 0;
  uStack_40 = 0;
  lStack_50 = 0;
  FUN_109522b28(&lStack_50,&uStack_38,auStack_2c,3);
  plVar3 = (long *)0x0;
  FUN_109680a78(param_1,0,&lStack_50,FUN_10968c4ec);
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
  puVar4 = *(undefined1 **)(plVar3[1] + 8);
  puVar5 = *(undefined1 **)(lVar2 + 8);
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
    *puVar5 = *puVar4;
    uVar6 = uVar6 - 1;
    puVar4 = puVar4 + 1;
    puVar5 = puVar5 + 1;
  } while (uVar6 != 0);
  return;
}



/* Entry: 10968c4ec; end: 10968c597;  */

void FUN_10968c4ec(undefined8 param_1,long *param_2)

{
  long lVar1;
  uint uVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  ulong uVar5;
  int *piVar6;
  long lVar7;
  
  lVar1 = *param_2;
  puVar3 = *(undefined1 **)(param_2[1] + 8);
  puVar4 = *(undefined1 **)(lVar1 + 8);
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
    *puVar4 = *puVar3;
    uVar5 = uVar5 - 1;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
  } while (uVar5 != 0);
  return;
}



/* Entry: 10968c598; end: 10968c65f;  */

void FUN_10968c598(undefined8 param_1)

{
  uint uVar1;
  long lVar2;
  long *plVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  ulong uVar6;
  int *piVar7;
  long lVar8;
  long lStack_50;
  long lStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined4 uStack_30;
  undefined1 auStack_2c [4];
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_38 = 0x1200000012;
  uStack_30 = 0;
  lStack_48 = 0;
  uStack_40 = 0;
  lStack_50 = 0;
  FUN_109522b28(&lStack_50,&uStack_38,auStack_2c,3);
  plVar3 = (long *)0x0;
  FUN_109680a78(param_1,0,&lStack_50,FUN_10968c660);
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
  puVar4 = *(undefined4 **)(plVar3[1] + 8);
  puVar5 = *(undefined4 **)(lVar2 + 8);
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
    *puVar5 = *puVar4;
    uVar6 = uVar6 - 1;
    puVar4 = puVar4 + 1;
    puVar5 = puVar5 + 1;
  } while (uVar6 != 0);
  return;
}



/* Entry: 10968c660; end: 10968c6bb;  */

void FUN_10968c660(undefined8 param_1,long *param_2)

{
  long lVar1;
  uint uVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  ulong uVar5;
  int *piVar6;
  long lVar7;
  
  lVar1 = *param_2;
  puVar3 = *(undefined4 **)(param_2[1] + 8);
  puVar4 = *(undefined4 **)(lVar1 + 8);
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
    *puVar4 = *puVar3;
    uVar5 = uVar5 - 1;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
  } while (uVar5 != 0);
  return;
}



/* Entry: 10968c6bc; end: 10968c6e3;  */

void FUN_10968c6bc(undefined8 param_1,undefined8 param_2)

{
  undefined1 uStack_11;
  
  FUN_109685800(&uStack_11,param_1,param_2);
  return;
}



/* Entry: 10968c6e4; end: 10968c7ab;  */

void FUN_10968c6e4(undefined8 param_1)

{
  uint uVar1;
  long lVar2;
  long *plVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  ulong uVar6;
  int *piVar7;
  long lVar8;
  long lStack_50;
  long lStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined4 uStack_30;
  undefined1 auStack_2c [4];
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_38 = 0x1800000018;
  uStack_30 = 0;
  lStack_48 = 0;
  uStack_40 = 0;
  lStack_50 = 0;
  FUN_109522b28(&lStack_50,&uStack_38,auStack_2c,3);
  plVar3 = (long *)0x0;
  FUN_109680a78(param_1,0,&lStack_50,FUN_10968c7ac);
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
  puVar4 = *(undefined4 **)(plVar3[1] + 8);
  puVar5 = *(undefined4 **)(lVar2 + 8);
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
    *puVar5 = *puVar4;
    uVar6 = uVar6 - 1;
    puVar4 = puVar4 + 1;
    puVar5 = puVar5 + 1;
  } while (uVar6 != 0);
  return;
}



/* Entry: 10968c7ac; end: 10968c807;  */

void FUN_10968c7ac(undefined8 param_1,long *param_2)

{
  long lVar1;
  uint uVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  ulong uVar5;
  int *piVar6;
  long lVar7;
  
  lVar1 = *param_2;
  puVar3 = *(undefined4 **)(param_2[1] + 8);
  puVar4 = *(undefined4 **)(lVar1 + 8);
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
    *puVar4 = *puVar3;
    uVar5 = uVar5 - 1;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
  } while (uVar5 != 0);
  return;
}



/* Entry: 10968c808; end: 10968c82f;  */

void FUN_10968c808(undefined8 param_1,undefined8 param_2)

{
  undefined1 uStack_11;
  
  FUN_109685998(&uStack_11,param_1,param_2);
  return;
}



/* Entry: 10968c830; end: 10968c8f7;  */

void FUN_10968c830(undefined8 param_1)

{
  uint uVar1;
  long lVar2;
  long *plVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  ulong uVar6;
  int *piVar7;
  long lVar8;
  long lStack_50;
  long lStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined4 uStack_30;
  undefined1 auStack_2c [4];
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_38 = 0x2800000028;
  uStack_30 = 0;
  lStack_48 = 0;
  uStack_40 = 0;
  lStack_50 = 0;
  FUN_109522b28(&lStack_50,&uStack_38,auStack_2c,3);
  plVar3 = (long *)0x0;
  FUN_109680a78(param_1,0,&lStack_50,FUN_10968c8f8);
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
  puVar4 = *(undefined8 **)(plVar3[1] + 8);
  puVar5 = *(undefined8 **)(lVar2 + 8);
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
    *puVar5 = *puVar4;
    uVar6 = uVar6 - 1;
    puVar4 = puVar4 + 1;
    puVar5 = puVar5 + 1;
  } while (uVar6 != 0);
  return;
}



/* Entry: 10968c8f8; end: 10968c953;  */

void FUN_10968c8f8(undefined8 param_1,long *param_2)

{
  long lVar1;
  uint uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  ulong uVar5;
  int *piVar6;
  long lVar7;
  
  lVar1 = *param_2;
  puVar3 = *(undefined8 **)(param_2[1] + 8);
  puVar4 = *(undefined8 **)(lVar1 + 8);
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
    *puVar4 = *puVar3;
    uVar5 = uVar5 - 1;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
  } while (uVar5 != 0);
  return;
}



/* Entry: 10968c954; end: 10968c9bf;  */

void FUN_10968c954(void)

{
  long lVar1;
  long lStack_48;
  long lStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  FUN_10968098c(&UNK_10dfdabda,FUN_10968c9c0);
  FUN_10968c9e4(&UNK_10dfdabda,0x10968c9e0);
  FUN_10968cab4(&UNK_10dfdabda,0x10968cab0);
  FUN_10968cb84(&UNK_10dfdabda,0x10968cb80);
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_30 = 0x2800000000;
  lStack_40 = 0;
  uStack_38 = 0;
  lStack_48 = 0;
  FUN_109522b28(&lStack_48,&uStack_30,&lStack_28,2);
  FUN_109680a78(&UNK_10dfdabda,0,&lStack_48,FUN_10968cd1c);
  lVar1 = lStack_48;
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
  __Unwind_Resume(lVar1);
  return;
}



/* Entry: 10968c9c0; end: 10968c9e3;  */

void FUN_10968c9c0(undefined8 *param_1,int *param_2)

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



/* Entry: 10968c9e4; end: 10968caab;  */

void FUN_10968c9e4(undefined8 param_1)

{
  long lVar1;
  long lStack_48;
  long lStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_30 = 0x1400000000;
  lStack_40 = 0;
  uStack_38 = 0;
  lStack_48 = 0;
  FUN_109522b28(&lStack_48,&uStack_30,&lStack_28,2);
  FUN_109680a78(param_1,0,&lStack_48,FUN_10968caac);
  lVar1 = lStack_48;
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
  __Unwind_Resume(lVar1);
  return;
}



/* Entry: 10968caac; end: 10968cab3;  */

void FUN_10968caac(void)

{
  return;
}



/* Entry: 10968cab4; end: 10968cb7b;  */

void FUN_10968cab4(undefined8 param_1)

{
  long lVar1;
  long lStack_48;
  long lStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_30 = 0x1200000000;
  lStack_40 = 0;
  uStack_38 = 0;
  lStack_48 = 0;
  FUN_109522b28(&lStack_48,&uStack_30,&lStack_28,2);
  FUN_109680a78(param_1,0,&lStack_48,FUN_10968cb7c);
  lVar1 = lStack_48;
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
  __Unwind_Resume(lVar1);
  return;
}



/* Entry: 10968cb7c; end: 10968cb83;  */

void FUN_10968cb7c(void)

{
  return;
}



/* Entry: 10968cb84; end: 10968cc4b;  */

void FUN_10968cb84(undefined8 param_1)

{
  long lVar1;
  long lStack_48;
  long lStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_30 = 0x1800000000;
  lStack_40 = 0;
  uStack_38 = 0;
  lStack_48 = 0;
  FUN_109522b28(&lStack_48,&uStack_30,&lStack_28,2);
  FUN_109680a78(param_1,0,&lStack_48,FUN_10968cc4c);
  lVar1 = lStack_48;
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
  __Unwind_Resume(lVar1);
  return;
}



/* Entry: 10968cc4c; end: 10968cc53;  */

void FUN_10968cc4c(void)

{
  return;
}



/* Entry: 10968cc54; end: 10968cd1b;  */

void FUN_10968cc54(undefined8 param_1)

{
  long lVar1;
  long lStack_48;
  long lStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_30 = 0x2800000000;
  lStack_40 = 0;
  uStack_38 = 0;
  lStack_48 = 0;
  FUN_109522b28(&lStack_48,&uStack_30,&lStack_28,2);
  FUN_109680a78(param_1,0,&lStack_48,FUN_10968cd1c);
  lVar1 = lStack_48;
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
  __Unwind_Resume(lVar1);
  return;
}



/* Entry: 10968cd1c; end: 10968cd1f;  */

void FUN_10968cd1c(void)

{
  return;
}



/* Entry: 10968cd20; end: 10968cd97;  */

void FUN_10968cd20(undefined8 *param_1,uint *param_2)

{
  uint uVar1;
  long lVar2;
  int *piVar3;
  int iStack_14;
  
  uVar1 = *param_2;
  if (uVar1 == 0) {
    iStack_14 = 1;
  }
  else {
    piVar3 = *(int **)(param_2 + 2);
    iStack_14 = *piVar3;
    if (uVar1 != 1) {
      lVar2 = (ulong)uVar1 - 1;
      do {
        piVar3 = piVar3 + 1;
        iStack_14 = *piVar3 * iStack_14;
        lVar2 = lVar2 + -1;
      } while (lVar2 != 0);
    }
  }
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = 0;
  FUN_1092d1c20(param_1,&iStack_14,&stack0xfffffffffffffff0,1);
  return;
}



/* Entry: 10968cd98; end: 10968cef7;  */

void FUN_10968cd98(undefined8 *param_1,int *param_2)

{
  int iVar1;
  int *piVar2;
  long lVar3;
  int *piVar4;
  int *piVar5;
  
  piVar4 = *(int **)(param_2 + 2);
  iVar1 = *param_2;
  lVar3 = (long)iVar1;
  piVar5 = *(int **)(param_2 + 6);
  FUN_10925b8c4(param_1,lVar3);
  if (0 < iVar1) {
    piVar2 = (int *)*param_1;
    do {
      *piVar2 = *piVar4 - *piVar5;
      lVar3 = lVar3 + -1;
      piVar2 = piVar2 + 1;
      piVar4 = piVar4 + 1;
      piVar5 = piVar5 + 1;
    } while (lVar3 != 0);
  }
  return;
}



/* Entry: 10968cef8; end: 10968cfb3;  */

void FUN_10968cef8(void)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  undefined4 auStack_90 [2];
  long lStack_88;
  undefined8 uStack_80;
  undefined4 auStack_78 [2];
  long lStack_70;
  undefined8 uStack_68;
  undefined1 *puStack_60;
  code *pcStack_58;
  long lStack_50;
  long lStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined4 uStack_30;
  undefined1 auStack_2c [4];
  long lStack_28;
  
  FUN_10968098c(&UNK_10dfdac86,FUN_10968cfb4);
  FUN_10968d144(&UNK_10dfdac86,FUN_10968d048);
  FUN_10968098c(&UNK_10dfdac8d,FUN_10968d530);
  FUN_10968bd58(&UNK_10dfdac8d,FUN_10968bd54);
  FUN_10968d578();
  FUN_10968098c(&UNK_10dfdac77,FUN_10968dcc8);
  FUN_10968dd94(&UNK_10dfdac77,FUN_10968dd44);
  FUN_10968e23c();
  FUN_10968098c(&UNK_10dfdac81,FUN_10968eb3c);
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_38 = 0x1800000018;
  uStack_30 = 0;
  lStack_48 = 0;
  uStack_40 = 0;
  lStack_50 = 0;
  FUN_109522b28(&lStack_50,&uStack_38,auStack_2c,3);
  plVar3 = (long *)0x0;
  FUN_109680a78(&UNK_10dfdac81,0,&lStack_50,FUN_10968f054);
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
  pcStack_58 = FUN_10968f054;
  lVar2 = *plVar3;
  lVar1 = plVar3[1];
  uStack_68 = *(undefined8 *)(lVar2 + 8);
  lStack_70 = *(long *)(lVar2 + 0x10);
  auStack_78[0] = (undefined4)((ulong)(*(long *)(lVar2 + 0x18) - lStack_70) >> 2);
  uStack_80 = *(undefined8 *)(lVar1 + 8);
  lStack_88 = *(long *)(lVar1 + 0x10);
  auStack_90[0] = (undefined4)((ulong)(*(long *)(lVar1 + 0x18) - lStack_88) >> 2);
  puStack_60 = &stack0xfffffffffffffff0;
  FUN_10968ebb0(auStack_78,auStack_90,
                (ulong)(*(long *)(plVar3[2] + 0x18) - *(long *)(plVar3[2] + 0x10)) >> 2 & 0xffffffff
               );
  return;
}



/* Entry: 10968cfb4; end: 10968d047;  */

void FUN_10968cfb4(long *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  ulong uVar3;
  long lVar4;
  uint uVar5;
  long lVar6;
  long lVar7;
  uint *puVar8;
  
  lVar6 = *(long *)(param_2 + 2);
  iVar2 = *param_2;
  lVar7 = *(long *)(param_2 + 6);
  puVar8 = *(uint **)(param_2 + 10);
  FUN_10925b8c4(param_1,(long)iVar2);
  if (0 < iVar2) {
    uVar3 = 0;
    lVar4 = *param_1;
    do {
      uVar5 = *(uint *)(lVar6 + uVar3 * 4);
      if (uVar3 == *puVar8) {
        if ((uVar5 != 0xffffffff) &&
           (iVar1 = *(int *)(lVar7 + uVar3 * 4), uVar5 = iVar1 + uVar5, iVar1 == -1)) {
          uVar5 = 0xffffffff;
        }
      }
      else {
        uVar5 = *(uint *)(lVar7 + uVar3 * 4) & uVar5;
      }
      *(uint *)(lVar4 + uVar3 * 4) = uVar5;
      uVar3 = uVar3 + 1;
    } while ((long)iVar2 != uVar3);
  }
  return;
}



/* Entry: 10968d048; end: 10968d143;  */

void FUN_10968d048(undefined8 *param_1,int *param_2,undefined8 *param_3,int *param_4)

{
  long lVar1;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  long lStack_48;
  long lStack_40;
  
  FUN_10925b8c4(&lStack_48,(long)*param_2);
  uStack_50 = *(undefined8 *)(param_2 + 4);
  uStack_58 = *(undefined8 *)(param_2 + 2);
  uStack_60 = *(undefined8 *)param_2;
  uStack_70 = param_1[2];
  uStack_78 = param_1[1];
  uStack_80 = *param_1;
  FUN_10968d20c(&uStack_60,&uStack_80,(ulong)(lStack_40 - lStack_48) >> 2 & 0xffffffff);
  lVar1 = (long)*param_4;
  *(int *)(lStack_48 + lVar1 * 4) =
       *(int *)(lStack_48 + lVar1 * 4) + *(int *)(*(long *)(param_2 + 2) + lVar1 * 4);
  uStack_50 = param_3[2];
  uStack_58 = param_3[1];
  uStack_60 = *param_3;
  uStack_70 = param_1[2];
  uStack_78 = param_1[1];
  uStack_80 = *param_1;
  FUN_10968d20c(&uStack_60,&uStack_80,(ulong)(lStack_40 - lStack_48) >> 2 & 0xffffffff);
  if (lStack_48 != 0) {
    lStack_40 = lStack_48;
    __ZdlPv();
  }
  return;
}



/* Entry: 10968d144; end: 10968d20b;  */

void FUN_10968d144(undefined8 param_1)

{
  bool bVar1;
  uint uVar2;
  ulong uVar3;
  int *piVar4;
  uint *puVar5;
  code *pcVar6;
  long lVar7;
  long lVar8;
  int *piVar9;
  ulong uVar10;
  long lVar11;
  undefined4 *puVar12;
  ulong uVar13;
  undefined4 *puVar14;
  int *piVar15;
  int iVar16;
  long lStack_e8;
  long lStack_e0;
  long lStack_d0;
  long lStack_c8;
  long lStack_b8;
  long lStack_b0;
  int *piStack_58;
  int *piStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined1 auStack_30 [8];
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_38 = 0x18;
  uStack_40 = 0x1800000018;
  piStack_50 = (int *)0x0;
  uStack_48 = 0;
  piStack_58 = (int *)0x0;
  FUN_109522b28(&piStack_58,&uStack_40,auStack_30,4);
  pcVar6 = FUN_10968d4b4;
  puVar5 = (uint *)0x0;
  FUN_109680a78(param_1,0,&piStack_58);
  piVar4 = piStack_58;
  if (piStack_58 != (int *)0x0) {
    piStack_50 = piStack_58;
    __ZdlPv();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return;
  }
  ___stack_chk_fail();
  if (piStack_58 != (int *)0x0) {
    piStack_50 = piStack_58;
    __ZdlPv();
  }
  __Unwind_Resume();
  uVar2 = *puVar5;
  uVar13 = (ulong)(int)uVar2;
  if (uVar2 != 0) {
    piVar15 = *(int **)(puVar5 + 2);
    lVar7 = uVar13 << 2;
    iVar16 = 1;
    piVar9 = piVar15;
    do {
      iVar16 = *piVar9 * iVar16;
      lVar7 = lVar7 + -4;
      piVar9 = piVar9 + 1;
    } while (lVar7 != 0);
    if (iVar16 != 1) {
      FUN_10925b8c4(&lStack_b8,uVar13);
      lVar7 = lStack_b8;
      if ((0 < (int)uVar2) && (*(undefined4 *)(lStack_b8 + uVar13 * 4 + -4) = 1, uVar2 != 1)) {
        iVar16 = *(int *)(lStack_b8 + uVar13 * 4 + -4);
        do {
          iVar16 = piVar15[uVar13 - 1] * iVar16;
          *(int *)(lStack_b8 + -8 + uVar13 * 4) = iVar16;
          bVar1 = 2 < uVar13;
          uVar13 = uVar13 - 1;
        } while (bVar1);
      }
      lVar11 = *(long *)(piVar4 + 2);
      iVar16 = (int)*(undefined8 *)piVar4;
      FUN_10925b8c4(&lStack_d0,(long)iVar16);
      if (1 < iVar16) {
        lVar8 = (ulong)(iVar16 - 2) << 2;
        iVar16 = *(int *)(lStack_d0 + (ulong)(iVar16 - 2) * 4 + 4);
        do {
          iVar16 = iVar16 + (*(int *)(lVar11 + lVar8) + -1) * *(int *)(lVar7 + lVar8);
          *(int *)(lStack_d0 + lVar8) = iVar16;
          lVar8 = lVar8 + -4;
        } while (lVar8 != -4);
      }
      puVar14 = *(undefined4 **)(puVar5 + 4);
      uVar2 = *puVar5;
      if (0 < (int)uVar2) {
        lVar7 = 0;
        do {
          iVar16 = *(int *)(pcVar6 + lVar7);
          if (iVar16 < 0) {
            iVar16 = *(int *)(*(long *)(puVar5 + 2) + lVar7) + iVar16;
          }
          puVar14 = puVar14 + *(int *)(lStack_b8 + lVar7) * iVar16;
          lVar7 = lVar7 + 4;
        } while ((ulong)uVar2 * 4 - lVar7 != 0);
      }
      FUN_10925b8c4(&lStack_e8,(long)(int)(uVar2 - 1));
      if (*piVar4 == 0) {
        uVar13 = 1;
      }
      else {
        uVar13 = (ulong)*(uint *)(*(long *)(piVar4 + 2) + (long)*piVar4 * 4 + -4);
      }
      lVar7 = *(long *)(piVar4 + 4);
      while( true ) {
        if (0 < (int)uVar13) {
          lVar11 = 0;
          puVar12 = puVar14;
          do {
            *puVar12 = *(undefined4 *)(lVar7 + lVar11 * 4);
            lVar11 = lVar11 + 1;
            puVar12 = puVar12 + 1;
          } while ((int)uVar13 != lVar11);
        }
        if ((int)((ulong)(lStack_e0 - lStack_e8) >> 2) < 1) break;
        lVar11 = *(long *)(piVar4 + 2);
        uVar3 = (ulong)(lStack_e0 - lStack_e8) >> 2 & 0x7fffffff;
        while( true ) {
          uVar10 = uVar3 - 1;
          iVar16 = *(int *)(lStack_e8 + uVar10 * 4) + 1;
          if (iVar16 < *(int *)(lVar11 + uVar10 * 4)) break;
          *(undefined4 *)(lStack_e8 + uVar10 * 4) = 0;
          bVar1 = uVar3 < 2;
          uVar3 = uVar10;
          if (bVar1) goto LAB_10968d440;
        }
        *(int *)(lStack_e8 + uVar10 * 4) = iVar16;
        if ((long)uVar3 < 1) goto LAB_10968d440;
        puVar14 = puVar14 + (*(int *)(lStack_b8 + (uVar10 & 0xffffffff) * 4) -
                            *(int *)(lStack_d0 + (uVar3 & 0xffffffff) * 4));
        lVar7 = lVar7 + (-(uVar13 >> 0x1f) & 0xfffffffc00000000 | uVar13 << 2);
      }
      if (lStack_e8 == 0) goto LAB_10968d448;
LAB_10968d440:
      lStack_e0 = lStack_e8;
      __ZdlPv();
LAB_10968d448:
      if (lStack_d0 != 0) {
        lStack_c8 = lStack_d0;
        __ZdlPv();
      }
      if (lStack_b8 == 0) {
        return;
      }
      lStack_b0 = lStack_b8;
      __ZdlPv();
      return;
    }
  }
  **(undefined4 **)(puVar5 + 4) = **(undefined4 **)(piVar4 + 4);
  return;
}



/* Entry: 10968d20c; end: 10968d4b3;  */

void FUN_10968d20c(int *param_1,uint *param_2,undefined8 param_3,long param_4)

{
  bool bVar1;
  uint uVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  int *piVar6;
  ulong uVar7;
  long lVar8;
  undefined4 *puVar9;
  ulong uVar10;
  undefined4 *puVar11;
  int *piVar12;
  int iVar13;
  long lStack_88;
  long lStack_80;
  long lStack_70;
  long lStack_68;
  long lStack_58;
  long lStack_50;
  
  uVar2 = *param_2;
  uVar10 = (ulong)(int)uVar2;
  if (uVar2 != 0) {
    piVar12 = *(int **)(param_2 + 2);
    lVar4 = uVar10 << 2;
    iVar13 = 1;
    piVar6 = piVar12;
    do {
      iVar13 = *piVar6 * iVar13;
      lVar4 = lVar4 + -4;
      piVar6 = piVar6 + 1;
    } while (lVar4 != 0);
    if (iVar13 != 1) {
      FUN_10925b8c4(&lStack_58,uVar10);
      lVar4 = lStack_58;
      if ((0 < (int)uVar2) && (*(undefined4 *)(lStack_58 + uVar10 * 4 + -4) = 1, uVar2 != 1)) {
        iVar13 = *(int *)(lStack_58 + uVar10 * 4 + -4);
        do {
          iVar13 = piVar12[uVar10 - 1] * iVar13;
          *(int *)(lStack_58 + -8 + uVar10 * 4) = iVar13;
          bVar1 = 2 < uVar10;
          uVar10 = uVar10 - 1;
        } while (bVar1);
      }
      lVar8 = *(long *)(param_1 + 2);
      iVar13 = (int)*(undefined8 *)param_1;
      FUN_10925b8c4(&lStack_70,(long)iVar13);
      if (1 < iVar13) {
        lVar5 = (ulong)(iVar13 - 2) << 2;
        iVar13 = *(int *)(lStack_70 + (ulong)(iVar13 - 2) * 4 + 4);
        do {
          iVar13 = iVar13 + (*(int *)(lVar8 + lVar5) + -1) * *(int *)(lVar4 + lVar5);
          *(int *)(lStack_70 + lVar5) = iVar13;
          lVar5 = lVar5 + -4;
        } while (lVar5 != -4);
      }
      puVar11 = *(undefined4 **)(param_2 + 4);
      uVar2 = *param_2;
      if (0 < (int)uVar2) {
        lVar4 = 0;
        do {
          iVar13 = *(int *)(param_4 + lVar4);
          if (iVar13 < 0) {
            iVar13 = *(int *)(*(long *)(param_2 + 2) + lVar4) + iVar13;
          }
          puVar11 = puVar11 + *(int *)(lStack_58 + lVar4) * iVar13;
          lVar4 = lVar4 + 4;
        } while ((ulong)uVar2 * 4 - lVar4 != 0);
      }
      FUN_10925b8c4(&lStack_88,(long)(int)(uVar2 - 1));
      if (*param_1 == 0) {
        uVar10 = 1;
      }
      else {
        uVar10 = (ulong)*(uint *)(*(long *)(param_1 + 2) + (long)*param_1 * 4 + -4);
      }
      lVar4 = *(long *)(param_1 + 4);
      while( true ) {
        if (0 < (int)uVar10) {
          lVar8 = 0;
          puVar9 = puVar11;
          do {
            *puVar9 = *(undefined4 *)(lVar4 + lVar8 * 4);
            lVar8 = lVar8 + 1;
            puVar9 = puVar9 + 1;
          } while ((int)uVar10 != lVar8);
        }
        if ((int)((ulong)(lStack_80 - lStack_88) >> 2) < 1) break;
        lVar8 = *(long *)(param_1 + 2);
        uVar3 = (ulong)(lStack_80 - lStack_88) >> 2 & 0x7fffffff;
        while( true ) {
          uVar7 = uVar3 - 1;
          iVar13 = *(int *)(lStack_88 + uVar7 * 4) + 1;
          if (iVar13 < *(int *)(lVar8 + uVar7 * 4)) break;
          *(undefined4 *)(lStack_88 + uVar7 * 4) = 0;
          bVar1 = uVar3 < 2;
          uVar3 = uVar7;
          if (bVar1) goto LAB_10968d440;
        }
        *(int *)(lStack_88 + uVar7 * 4) = iVar13;
        if ((long)uVar3 < 1) goto LAB_10968d440;
        puVar11 = puVar11 + (*(int *)(lStack_58 + (uVar7 & 0xffffffff) * 4) -
                            *(int *)(lStack_70 + (uVar3 & 0xffffffff) * 4));
        lVar4 = lVar4 + (-(uVar10 >> 0x1f) & 0xfffffffc00000000 | uVar10 << 2);
      }
      if (lStack_88 == 0) goto LAB_10968d448;
LAB_10968d440:
      lStack_80 = lStack_88;
      __ZdlPv();
LAB_10968d448:
      if (lStack_70 != 0) {
        lStack_68 = lStack_70;
        __ZdlPv();
      }
      if (lStack_58 == 0) {
        return;
      }
      lStack_50 = lStack_58;
      __ZdlPv();
      return;
    }
  }
  **(undefined4 **)(param_2 + 4) = **(undefined4 **)(param_1 + 4);
  return;
}



/* Entry: 10968d4b4; end: 10968d52f;  */

void FUN_10968d4b4(undefined8 param_1,long *param_2)

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
  lVar3 = param_2[1];
  lVar2 = param_2[2];
  uStack_18 = *(undefined8 *)(lVar1 + 8);
  lStack_20 = *(long *)(lVar1 + 0x10);
  auStack_28[0] = (undefined4)((ulong)(*(long *)(lVar1 + 0x18) - lStack_20) >> 2);
  uStack_30 = *(undefined8 *)(lVar3 + 8);
  lStack_38 = *(long *)(lVar3 + 0x10);
  auStack_40[0] = (undefined4)((ulong)(*(long *)(lVar3 + 0x18) - lStack_38) >> 2);
  uStack_48 = *(undefined8 *)(lVar2 + 8);
  lStack_50 = *(long *)(lVar2 + 0x10);
  auStack_58[0] = (undefined4)((ulong)(*(long *)(lVar2 + 0x18) - lStack_50) >> 2);
  FUN_10968d048(auStack_28,auStack_40,auStack_58,*(undefined8 *)(param_2[3] + 0x10));
  return;
}



/* Entry: 10968d530; end: 10968d577;  */

void FUN_10968d530(long *param_1,int *param_2)

{
  long lVar1;
  int *piVar2;
  
  lVar1 = *(long *)(param_2 + 2);
  piVar2 = *(int **)(param_2 + 6);
  FUN_10925b8c4(param_1,(long)*param_2);
  *(undefined4 *)(*param_1 + (long)*piVar2 * 4) = *(undefined4 *)(lVar1 + (long)*piVar2 * 4);
  return;
}



/* Entry: 10968d578; end: 10968d5c3;  */

void FUN_10968d578(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  undefined4 auStack_b8 [2];
  long lStack_b0;
  undefined8 uStack_a8;
  undefined4 auStack_a0 [2];
  long lStack_98;
  undefined8 uStack_90;
  undefined4 auStack_88 [2];
  long lStack_80;
  undefined8 uStack_78;
  undefined1 *puStack_70;
  code *pcStack_68;
  long lStack_58;
  long lStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined1 auStack_30 [8];
  long lStack_28;
  
  FUN_10968098c(&UNK_10dfdac70,FUN_10968d5c4);
  FUN_10968d84c(&UNK_10dfdac70,FUN_10968d658);
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_38 = 0x12;
  uStack_40 = 0x2800000028;
  lStack_50 = 0;
  uStack_48 = 0;
  lStack_58 = 0;
  FUN_109522b28(&lStack_58,&uStack_40,auStack_30,4);
  plVar4 = (long *)0x0;
  FUN_109680a78(&UNK_10dfdac70,0,&lStack_58,FUN_10968dc4c);
  lVar3 = lStack_58;
  if (lStack_58 != 0) {
    lStack_50 = lStack_58;
    __ZdlPv();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return;
  }
  ___stack_chk_fail();
  if (lStack_58 != 0) {
    lStack_50 = lStack_58;
    __ZdlPv();
  }
  __Unwind_Resume(lVar3);
  pcStack_68 = FUN_10968dc4c;
  lVar3 = *plVar4;
  lVar2 = plVar4[1];
  lVar1 = plVar4[2];
  uStack_78 = *(undefined8 *)(lVar3 + 8);
  lStack_80 = *(long *)(lVar3 + 0x10);
  auStack_88[0] = (undefined4)((ulong)(*(long *)(lVar3 + 0x18) - lStack_80) >> 2);
  uStack_90 = *(undefined8 *)(lVar2 + 8);
  lStack_98 = *(long *)(lVar2 + 0x10);
  auStack_a0[0] = (undefined4)((ulong)(*(long *)(lVar2 + 0x18) - lStack_98) >> 2);
  uStack_a8 = *(undefined8 *)(lVar1 + 8);
  lStack_b0 = *(long *)(lVar1 + 0x10);
  auStack_b8[0] = (undefined4)((ulong)(*(long *)(lVar1 + 0x18) - lStack_b0) >> 2);
  puStack_70 = &stack0xfffffffffffffff0;
  FUN_10968d990(auStack_88,auStack_a0,auStack_b8,*(undefined8 *)(plVar4[3] + 0x10));
  return;
}



/* Entry: 10968d5c4; end: 10968d657;  */

void FUN_10968d5c4(long *param_1,uint *param_2)

{
  undefined4 *puVar1;
  uint uVar2;
  int iVar3;
  long lVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  
  uVar2 = *param_2;
  puVar6 = *(undefined4 **)(param_2 + 6);
  if (param_2[4] == uVar2) {
    puVar1 = (undefined4 *)((long)puVar6 + ((long)((ulong)uVar2 << 0x20) >> 0x1e));
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    if ((long)(int)uVar2 != 0) {
      FUN_10925b938(param_1,(long)(int)uVar2);
      puVar5 = (undefined4 *)param_1[1];
      for (; puVar6 != puVar1; puVar6 = puVar6 + 1) {
        *puVar5 = *puVar6;
        puVar5 = puVar5 + 1;
      }
      param_1[1] = (long)puVar5;
    }
    return;
  }
  lVar4 = *(long *)(param_2 + 2);
  iVar3 = **(int **)(param_2 + 10);
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = 0;
  FUN_1092d1c20(param_1,lVar4,lVar4 + ((long)((ulong)uVar2 << 0x20) >> 0x1e));
  *(undefined4 *)(*param_1 + (long)iVar3 * 4) = *puVar6;
  return;
}



/* Entry: 10968d658; end: 10968d84b;  */

void FUN_10968d658(long param_1,int *param_2,int *param_3,uint *param_4)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  ulong uVar5;
  undefined4 *puVar6;
  ulong uVar7;
  long lVar8;
  undefined4 *puVar9;
  int iVar10;
  int *piVar11;
  undefined4 *puVar12;
  long lVar13;
  int iVar14;
  ulong uVar15;
  long lVar16;
  int iVar17;
  int *piVar18;
  
  uVar1 = *param_4;
  uVar15 = (ulong)uVar1;
  piVar11 = *(int **)(param_2 + 2);
  iVar10 = 1;
  piVar18 = piVar11;
  if (0 < (int)uVar1) {
    do {
      iVar10 = *piVar18 * iVar10;
      uVar15 = uVar15 - 1;
      piVar18 = piVar18 + 1;
    } while (uVar15 != 0);
  }
  if ((int)(uVar1 + 1) < *param_2) {
    iVar14 = ~uVar1 + *param_2;
    uVar15 = 1;
    piVar18 = piVar11 + (int)(uVar1 + 1);
    do {
      uVar15 = (ulong)(uint)(*piVar18 * (int)uVar15);
      iVar14 = iVar14 + -1;
      piVar18 = piVar18 + 1;
    } while (iVar14 != 0);
  }
  else {
    uVar15 = 1;
  }
  iVar14 = piVar11[(int)uVar1];
  puVar6 = *(undefined4 **)(param_1 + 0x10);
  uVar1 = *(uint *)(*(long *)(param_1 + 8) + (long)(int)uVar1 * 4);
  lVar13 = *(long *)(param_2 + 4);
  lVar16 = *(long *)(param_3 + 4);
  iVar17 = (int)uVar15;
  if (iVar17 == 1) {
    if (0 < iVar10) {
      iVar17 = 0;
      uVar2 = 0;
      if (*param_3 != 1) {
        uVar2 = uVar1;
      }
      do {
        if (0 < (int)uVar1) {
          lVar4 = 0;
          do {
            *(undefined4 *)((long)puVar6 + lVar4) =
                 *(undefined4 *)(lVar13 + (long)*(int *)(lVar16 + lVar4) * 4);
            lVar4 = lVar4 + 4;
          } while ((ulong)uVar1 * 4 - lVar4 != 0);
        }
        lVar13 = lVar13 + (long)iVar14 * 4;
        iVar17 = iVar17 + 1;
        puVar6 = puVar6 + (int)uVar1;
        lVar16 = lVar16 + (-(ulong)(uVar2 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar2 << 2);
      } while (iVar17 != iVar10);
    }
  }
  else {
    uVar2 = iVar14 * iVar17;
    if (*param_3 == 1) {
      if (0 < iVar10) {
        iVar14 = 0;
        do {
          puVar12 = puVar6;
          if (0 < (int)uVar1) {
            uVar5 = 0;
            do {
              if (0 < iVar17) {
                lVar4 = (long)(*(int *)(lVar16 + uVar5 * 4) * iVar17) << 2;
                lVar8 = (long)iVar17;
                puVar9 = puVar6;
                do {
                  *puVar9 = *(undefined4 *)(lVar13 + lVar4);
                  lVar4 = lVar4 + 4;
                  lVar8 = lVar8 + -1;
                  puVar9 = puVar9 + 1;
                } while (lVar8 != 0);
              }
              puVar12 = puVar12 + iVar17;
              uVar5 = uVar5 + 1;
              puVar6 = (undefined4 *)
                       ((long)puVar6 + (-(uVar15 >> 0x1f) & 0xfffffffc00000000 | uVar15 << 2));
            } while (uVar5 != uVar1);
          }
          iVar14 = iVar14 + 1;
          lVar13 = lVar13 + (-(ulong)(uVar2 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar2 << 2);
          puVar6 = puVar12;
        } while (iVar14 != iVar10);
      }
    }
    else if (0 < iVar10) {
      iVar14 = 0;
      uVar5 = -(uVar15 >> 0x1f) & 0xfffffffc00000000 | uVar15 << 2;
      do {
        if (0 < (int)uVar1) {
          uVar3 = 0;
          do {
            if (0 < iVar17) {
              uVar7 = 0;
              do {
                puVar6[uVar7] =
                     *(undefined4 *)
                      (lVar13 + (uVar7 + (long)*(int *)(lVar16 + uVar7 * 4) * (long)iVar17) * 4);
                uVar7 = uVar7 + 1;
              } while (uVar15 != uVar7);
            }
            puVar6 = (undefined4 *)((long)puVar6 + uVar5);
            lVar16 = lVar16 + uVar5;
            uVar3 = uVar3 + 1;
          } while (uVar3 != uVar1);
        }
        lVar13 = lVar13 + (long)(int)uVar2 * 4;
        iVar14 = iVar14 + 1;
      } while (iVar14 != iVar10);
    }
  }
  return;
}



/* Entry: 10968d84c; end: 10968d913;  */

void FUN_10968d84c(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  undefined4 auStack_b8 [2];
  long lStack_b0;
  undefined8 uStack_a8;
  undefined4 auStack_a0 [2];
  long lStack_98;
  undefined8 uStack_90;
  undefined4 auStack_88 [2];
  long lStack_80;
  undefined8 uStack_78;
  undefined1 *puStack_70;
  code *pcStack_68;
  long lStack_58;
  long lStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined1 auStack_30 [8];
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_38 = 0x12;
  uStack_40 = 0x1800000018;
  lStack_50 = 0;
  uStack_48 = 0;
  lStack_58 = 0;
  FUN_109522b28(&lStack_58,&uStack_40,auStack_30,4);
  plVar4 = (long *)0x0;
  FUN_109680a78(param_1,0,&lStack_58,FUN_10968d914);
  lVar3 = lStack_58;
  if (lStack_58 != 0) {
    lStack_50 = lStack_58;
    __ZdlPv();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return;
  }
  ___stack_chk_fail();
  if (lStack_58 != 0) {
    lStack_50 = lStack_58;
    __ZdlPv();
  }
  __Unwind_Resume(lVar3);
  pcStack_68 = FUN_10968d914;
  lVar3 = *plVar4;
  lVar2 = plVar4[1];
  lVar1 = plVar4[2];
  uStack_78 = *(undefined8 *)(lVar3 + 8);
  lStack_80 = *(long *)(lVar3 + 0x10);
  auStack_88[0] = (undefined4)((ulong)(*(long *)(lVar3 + 0x18) - lStack_80) >> 2);
  uStack_90 = *(undefined8 *)(lVar2 + 8);
  lStack_98 = *(long *)(lVar2 + 0x10);
  auStack_a0[0] = (undefined4)((ulong)(*(long *)(lVar2 + 0x18) - lStack_98) >> 2);
  uStack_a8 = *(undefined8 *)(lVar1 + 8);
  lStack_b0 = *(long *)(lVar1 + 0x10);
  auStack_b8[0] = (undefined4)((ulong)(*(long *)(lVar1 + 0x18) - lStack_b0) >> 2);
  puStack_70 = &stack0xfffffffffffffff0;
  FUN_10968d658(auStack_88,auStack_a0,auStack_b8,*(undefined8 *)(plVar4[3] + 0x10));
  return;
}



/* Entry: 10968d914; end: 10968d98f;  */

void FUN_10968d914(undefined8 param_1,long *param_2)

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
  lVar3 = param_2[1];
  lVar2 = param_2[2];
  uStack_18 = *(undefined8 *)(lVar1 + 8);
  lStack_20 = *(long *)(lVar1 + 0x10);
  auStack_28[0] = (undefined4)((ulong)(*(long *)(lVar1 + 0x18) - lStack_20) >> 2);
  uStack_30 = *(undefined8 *)(lVar3 + 8);
  lStack_38 = *(long *)(lVar3 + 0x10);
  auStack_40[0] = (undefined4)((ulong)(*(long *)(lVar3 + 0x18) - lStack_38) >> 2);
  uStack_48 = *(undefined8 *)(lVar2 + 8);
  lStack_50 = *(long *)(lVar2 + 0x10);
  auStack_58[0] = (undefined4)((ulong)(*(long *)(lVar2 + 0x18) - lStack_50) >> 2);
  FUN_10968d658(auStack_28,auStack_40,auStack_58,*(undefined8 *)(param_2[3] + 0x10));
  return;
}


