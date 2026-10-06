/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 107466b54; end: 107466b7f;  */

long * FUN_107466b54(long *param_1)

{
  FUN_107466b80();
  if (*param_1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 107466b80; end: 107466ba3;  */

void FUN_107466b80(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x10);
  while (lVar1 != *(long *)(param_1 + 8)) {
    lVar1 = lVar1 + -8;
    *(long *)(param_1 + 0x10) = lVar1;
  }
  return;
}



/* Entry: 107466ba4; end: 107466dab;  */

undefined8 *
FUN_107466ba4(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 *param_6)

{
  ulong uVar1;
  uint *puVar2;
  uint uVar3;
  uint uVar4;
  uint *puVar5;
  code *pcVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  uint *puVar10;
  long lVar11;
  long lVar12;
  uint *puVar13;
  undefined8 uVar14;
  long lStack_68;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  uVar14 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar14;
  param_1[2] = param_2[2];
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  param_1[4] = 0;
  param_1[3] = 0;
  param_1[10] = 0;
  param_1[9] = 0;
  param_1[0xb] = 0;
  param_1[8] = 0;
  param_1[7] = 0;
  param_1[6] = 0;
  param_1[5] = 0;
  uVar14 = *param_6;
  param_1[10] = param_6[1];
  param_1[9] = uVar14;
  param_1[0xb] = param_6[2];
  *param_6 = 0;
  param_6[1] = 0;
  param_6[2] = 0;
  func_0x0001072638b4(param_1 + 0xc,param_5);
  FUN_107466dac(param_1 + 0x11,param_3);
  FUN_107466dac(param_1 + 0x14,param_4);
  *(undefined1 *)(param_1 + 0x17) = 0;
  *(undefined1 *)(param_1 + 0x18) = 0;
  puVar5 = (uint *)param_1[1];
  puVar13 = (uint *)*param_1;
  do {
    if (puVar13 == puVar5) {
      return param_1;
    }
    uVar3 = *puVar13;
    uVar4 = puVar13[1];
    puVar10 = (uint *)param_1[4];
    if (puVar10 < (uint *)param_1[5]) {
      *puVar10 = uVar3;
      puVar10[1] = uVar4;
      puVar10 = puVar10 + 2;
    }
    else {
      lVar11 = param_1[3];
      lVar12 = (long)puVar10 - lVar11;
      uVar1 = (lVar12 >> 3) + 1;
      if (uVar1 >> 0x3d != 0) {
        FUN_107466de8();
LAB_107466d60:
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x107466d64);
        (*pcVar6)();
      }
      uVar8 = (long)param_1[5] - lVar11;
      uVar9 = (long)uVar8 >> 2;
      if (uVar9 <= uVar1) {
        uVar9 = uVar1;
      }
      if (0x7ffffffffffffff7 < uVar8) {
        uVar9 = 0x1fffffffffffffff;
      }
      if (uVar9 == 0) {
        lVar7 = 0;
      }
      else {
        if (uVar9 >> 0x3d != 0) {
          func_0x000104bd35f4();
          goto LAB_107466d60;
        }
        lVar7 = uVar9 << 3;
        __Znwm();
      }
      puVar2 = (uint *)(lVar7 + lVar12);
      *puVar2 = uVar3;
      puVar2[1] = uVar4;
      puVar10 = puVar2 + 2;
      _memcpy(puVar2 + (lVar12 >> 3) * -2,lVar11,lVar12);
      param_1[3] = puVar2 + (lVar12 >> 3) * -2;
      param_1[4] = puVar10;
      param_1[5] = lVar7 + uVar9 * 8;
      if (lVar11 != 0) {
        __ZdlPv(lVar11);
      }
    }
    param_1[4] = puVar10;
    lStack_68 = (ulong)*puVar13 * (ulong)puVar13[1] * 4;
    func_0x0001057f9264(param_1 + 6,&lStack_68);
    puVar13 = puVar13 + 6;
  } while( true );
}



/* Entry: 107466dac; end: 107466de7;  */

void FUN_107466dac(undefined8 *param_1,undefined8 *param_2)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  
  plVar1 = param_2 + 1;
  lVar2 = *plVar1;
  *param_1 = *param_2;
  plVar3 = param_1 + 1;
  *plVar3 = lVar2;
  lVar4 = param_2[2];
  param_1[2] = lVar4;
  if (lVar4 != 0) {
    *(long **)(lVar2 + 0x10) = plVar3;
    *param_2 = plVar1;
    *plVar1 = 0;
    param_2[2] = 0;
    return;
  }
  *param_1 = plVar3;
  return;
}



/* Entry: 107466de8; end: 107466df3;  */

void FUN_107466de8(void)

{
  func_0x000107468d68();
  func_0x000107468ef8();
  FUN_107466e18();
  return;
}



/* Entry: 107466df4; end: 107466e17;  */

void FUN_107466df4(void)

{
  func_0x000107468ef8();
  FUN_107466e18();
  return;
}



/* Entry: 107466e18; end: 107466e2b;  */

void FUN_107466e18(undefined8 *param_1)

{
  long lVar1;
  
  lVar1 = *(long *)*param_1;
  if (lVar1 != 0) {
    ((long *)*param_1)[1] = lVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 107466e2c; end: 107466e4f;  */

void FUN_107466e2c(void)

{
  func_0x000107468ef8();
  FUN_107466e50();
  return;
}



/* Entry: 107466e50; end: 107466e63;  */

void FUN_107466e50(undefined8 *param_1)

{
  long lVar1;
  
  lVar1 = *(long *)*param_1;
  if (lVar1 != 0) {
    ((long *)*param_1)[1] = lVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 107466e64; end: 107466ebb;  */

void FUN_107466e64(void)

{
  func_0x000107468ef8();
  func_0x000107466e88();
  return;
}



/* Entry: 107466ebc; end: 107466ec3;  */

void FUN_107466ebc(undefined8 *param_1)

{
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x000107468f7c(param_1,*param_1);
  lVar1 = param_1[1];
  while (lVar1 != unaff_x19) {
    lVar1 = lVar1 + -0x18;
    func_0x00010724e5f4();
  }
  *(long *)(unaff_x20 + 8) = unaff_x19;
  return;
}



/* Entry: 107466ec4; end: 107466ef7;  */

void FUN_107466ec4(long param_1)

{
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x000107468f7c();
  lVar1 = *(long *)(param_1 + 8);
  while (lVar1 != unaff_x19) {
    lVar1 = lVar1 + -0x18;
    func_0x00010724e5f4();
  }
  *(long *)(unaff_x20 + 8) = unaff_x19;
  return;
}



/* Entry: 107466ef8; end: 107466fa3;  */

void FUN_107466ef8(undefined8 param_1,undefined8 param_2,int *param_3,undefined8 param_4)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int *unaff_x19;
  int *unaff_x21;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined2 uStack_38;
  
  func_0x000107469330();
  uStack_48 = 0;
  uStack_40 = 0;
  uStack_38 = 1;
  FUN_1074627c8(param_4,&uStack_48);
  func_0x0001074692f4();
  iVar1 = *unaff_x21;
  iVar2 = *param_3;
  unaff_x19[6] = 0;
  unaff_x19[7] = 0;
  unaff_x19[4] = 0;
  unaff_x19[5] = 0;
  unaff_x19[10] = 0;
  unaff_x19[0xb] = 0;
  unaff_x19[8] = 0;
  unaff_x19[9] = 0;
  unaff_x19[0xe] = 0;
  unaff_x19[0xf] = 0;
  unaff_x19[0xc] = 0;
  unaff_x19[0xd] = 0;
  unaff_x19[0x14] = 0;
  unaff_x19[0x15] = 0;
  unaff_x19[0x16] = 0;
  unaff_x19[0x17] = 0;
  piVar3 = unaff_x19 + 0x12;
  piVar3[0] = 0;
  piVar3[1] = 0;
  *(int **)(unaff_x19 + 0x10) = piVar3;
  unaff_x19[0x18] = 0;
  unaff_x19[0x19] = 0;
  unaff_x19[0x1a] = 0;
  unaff_x19[0x1b] = 0;
  unaff_x19[0x20] = 0;
  unaff_x19[0x21] = 0;
  piVar3 = unaff_x19 + 0x1e;
  piVar3[0] = 0;
  piVar3[1] = 0;
  *(int **)(unaff_x19 + 0x1c) = piVar3;
  if (iVar2 < 1) {
    iVar2 = 0x40;
  }
  *unaff_x19 = iVar2;
  unaff_x19[1] = iVar2;
  *(bool *)(unaff_x19 + 3) = iVar1 == 0;
  unaff_x19[2] = 0;
  return;
}



/* Entry: 107466fa4; end: 10746714b;  */

void FUN_107466fa4(long *param_1,uint *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  long *plVar4;
  int *piVar5;
  int iVar6;
  long lVar7;
  int *piVar8;
  long lVar9;
  long lVar10;
  uint uVar11;
  uint uVar12;
  ulong uVar13;
  long *plVar14;
  double dVar15;
  double adStack_78 [3];
  
  func_0x0001074689d8(param_2);
  puVar1 = (undefined8 *)*param_1;
  puVar2 = (undefined8 *)param_1[1];
  lVar3 = param_1[3];
  lVar10 = *(long *)(param_1[2] + 8) + -0x18;
  adStack_78[0] = (double)((ulong)adStack_78[0] & 0xffffffffffffff00);
  lVar7 = param_1[4] + 0x3f0;
  func_0x00010724e2c8(lVar7,adStack_78);
  uVar12 = 8;
  if (*(long *)(param_2 + 0xe) == 0) {
    uVar11 = 8;
  }
  else {
    uVar12 = *param_2;
    uVar11 = param_2[1];
    if (uVar12 < 9) {
      uVar12 = 8;
    }
    if (uVar11 < 9) {
      uVar11 = 8;
    }
  }
  func_0x00010724e0f8(adStack_78,CONCAT44(uVar11,uVar12));
  FUN_10742a894(lVar10,adStack_78);
  func_0x0001074692f4();
  uVar13 = 0;
  plVar4 = (long *)puVar1[1];
  for (plVar14 = (long *)*puVar1; plVar14 != plVar4; plVar14 = plVar14 + 3) {
    func_0x00010778196c(*plVar14);
    FUN_107466640();
    piVar8 = (int *)*plVar14;
    func_0x00010778196c();
    iVar6 = *piVar8;
    lVar9 = *plVar14;
    func_0x00010778196c();
    uVar13 = uVar13 + (uint)(*(int *)(lVar9 + 4) * iVar6);
  }
  piVar5 = (int *)puVar2[1];
  for (piVar8 = (int *)*puVar2; piVar8 != piVar5; piVar8 = piVar8 + 5) {
    if ((int)lVar7 == 0) {
      FUN_1074668c8(piVar8[2],piVar8[3],*piVar8,piVar8[1],lVar10);
    }
    else {
      func_0x0001074696d8(adStack_78,*(undefined8 *)piVar8);
      FUN_107466640(adStack_78,piVar8 + 2,(char)piVar8[4],lVar10);
      func_0x0001074692f4();
    }
    uVar13 = uVar13 + (uint)(piVar8[1] * *piVar8);
  }
  dVar15 = (double)uVar13;
  func_0x0001074695ac(uVar11 * uVar12);
  adStack_78[0] = dVar15;
  FUN_1074669f0(lVar3,adStack_78);
  ((undefined8 *)*param_1)[1] = *(undefined8 *)*param_1;
  ((undefined8 *)param_1[1])[1] = *(undefined8 *)param_1[1];
  return;
}



/* Entry: 10746714c; end: 1074672d3;  */

void FUN_10746714c(undefined8 *param_1,undefined8 *param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  long unaff_x19;
  long unaff_x20;
  undefined8 *puVar6;
  
  func_0x000107468f88();
  uVar2 = *param_2;
  *(undefined8 *)((long)param_1 + 5) = *(undefined8 *)((long)param_2 + 5);
  *param_1 = uVar2;
  FUN_107468670(param_1 + 2);
  if (*(long *)(unaff_x19 + 0x38) == 0) {
    while (*(long *)(unaff_x19 + 0x20) != *(long *)(unaff_x19 + 0x18)) {
      __ZdlPv(*(undefined8 *)(*(long *)(unaff_x19 + 0x20) + -8));
      func_0x00010746881c(unaff_x19 + 0x10);
    }
    *(undefined8 *)(unaff_x19 + 0x30) = 0;
  }
  else {
    if (0x37 < *(ulong *)(unaff_x19 + 0x30)) {
      func_0x000107469394(*(undefined8 *)(unaff_x19 + 0x18));
      *(long *)(unaff_x19 + 0x18) = *(long *)(unaff_x19 + 0x18) + 8;
      *(long *)(unaff_x19 + 0x30) = *(long *)(unaff_x19 + 0x30) + -0x38;
    }
    uVar1 = unaff_x19 + 0x10;
    FUN_107468920();
    if (uVar1 < 2) {
      lVar4 = unaff_x19 + 0x10;
      FUN_107468920();
      if (lVar4 == 0) goto LAB_1074671fc;
    }
    __ZdlPv(*(undefined8 *)(*(long *)(unaff_x19 + 0x20) + -8));
    func_0x00010746881c(unaff_x19 + 0x10);
  }
LAB_1074671fc:
  FUN_107468828(unaff_x19 + 0x10);
  FUN_10746893c(unaff_x19 + 0x10);
  FUN_107468828(unaff_x19 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x10);
  *(undefined8 *)(unaff_x19 + 0x18) = *(undefined8 *)(unaff_x20 + 0x18);
  *(undefined8 *)(unaff_x19 + 0x10) = uVar2;
  uVar2 = *(undefined8 *)(unaff_x20 + 0x20);
  *(undefined8 *)(unaff_x19 + 0x28) = *(undefined8 *)(unaff_x20 + 0x28);
  *(undefined8 *)(unaff_x19 + 0x20) = uVar2;
  *(undefined8 *)(unaff_x20 + 0x18) = 0;
  *(undefined8 *)(unaff_x20 + 0x10) = 0;
  *(undefined8 *)(unaff_x20 + 0x28) = 0;
  *(undefined8 *)(unaff_x20 + 0x20) = 0;
  *(undefined8 *)(unaff_x19 + 0x30) = *(undefined8 *)(unaff_x20 + 0x30);
  *(undefined8 *)(unaff_x19 + 0x38) = *(undefined8 *)(unaff_x20 + 0x38);
  *(undefined8 *)(unaff_x20 + 0x30) = 0;
  *(undefined8 *)(unaff_x20 + 0x38) = 0;
  puVar6 = (undefined8 *)(unaff_x19 + 0x48);
  FUN_107468944((undefined8 *)(unaff_x19 + 0x40),*puVar6);
  plVar3 = (long *)(unaff_x20 + 0x48);
  lVar4 = *plVar3;
  *(undefined8 *)(unaff_x19 + 0x40) = *(undefined8 *)(unaff_x20 + 0x40);
  *(long *)(unaff_x19 + 0x48) = lVar4;
  lVar5 = *(long *)(unaff_x20 + 0x50);
  *(long *)(unaff_x19 + 0x50) = lVar5;
  if (lVar5 == 0) {
    *(undefined8 *)(unaff_x19 + 0x40) = puVar6;
  }
  else {
    *(undefined8 **)(lVar4 + 0x10) = puVar6;
    *(long **)(unaff_x20 + 0x40) = plVar3;
    *plVar3 = 0;
    *(undefined8 *)(unaff_x20 + 0x50) = 0;
  }
  lVar4 = *(long *)(unaff_x19 + 0x58);
  if (lVar4 != 0) {
    *(long *)(unaff_x19 + 0x60) = lVar4;
    __ZdlPv();
    *(long *)(unaff_x19 + 0x58) = 0;
    *(undefined8 *)(unaff_x19 + 0x60) = 0;
    *(undefined8 *)(unaff_x19 + 0x68) = 0;
  }
  uVar2 = *(undefined8 *)(unaff_x20 + 0x58);
  *(undefined8 *)(unaff_x19 + 0x60) = *(undefined8 *)(unaff_x20 + 0x60);
  *(undefined8 *)(unaff_x19 + 0x58) = uVar2;
  *(undefined8 *)(unaff_x19 + 0x68) = *(undefined8 *)(unaff_x20 + 0x68);
  *(undefined8 *)(unaff_x20 + 0x58) = 0;
  *(undefined8 *)(unaff_x20 + 0x60) = 0;
  *(undefined8 *)(unaff_x20 + 0x68) = 0;
  FUN_10746897c(unaff_x19 + 0x70,unaff_x20 + 0x70);
  return;
}



/* Entry: 1074672d4; end: 1074672e7;  */

int * FUN_1074672d4(int *param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  undefined1 *puVar4;
  int *piVar5;
  undefined8 uVar6;
  int *piVar7;
  ulong *puVar8;
  int iVar9;
  int *piVar10;
  int *piVar11;
  ulong uVar12;
  int *piVar13;
  ulong uVar14;
  int iVar15;
  ulong uVar16;
  ulong uVar17;
  undefined8 uVar18;
  int iVar19;
  ulong unaff_x19;
  int *unaff_x20;
  ulong unaff_x21;
  int *unaff_x22;
  undefined8 unaff_x23;
  int *piVar20;
  undefined4 *puVar21;
  ulong *unaff_x24;
  int *unaff_x25;
  uint uVar22;
  ulong unaff_x26;
  undefined8 unaff_x29;
  undefined8 unaff_x30;
  
  piVar10 = (int *)0xffffffff;
  puVar4 = (undefined1 *)register0x00000008;
  uVar14 = (ulong)(param_2 + 2);
  uVar16 = (ulong)(param_3 + 2);
FUN_1074672e8:
  uVar17 = uVar16;
  uVar12 = uVar14;
  piVar20 = param_1;
  *(ulong *)(puVar4 + -0x50) = unaff_x26;
  *(int **)(puVar4 + -0x48) = unaff_x25;
  *(ulong **)(puVar4 + -0x40) = unaff_x24;
  *(undefined8 *)(puVar4 + -0x38) = unaff_x23;
  *(int **)(puVar4 + -0x30) = unaff_x22;
  *(ulong *)(puVar4 + -0x28) = unaff_x21;
  *(int **)(puVar4 + -0x20) = unaff_x20;
  *(ulong *)(puVar4 + -0x18) = unaff_x19;
  *(undefined8 *)(puVar4 + -0x10) = unaff_x29;
  *(undefined8 *)(puVar4 + -8) = unaff_x30;
  iVar15 = (int)uVar17;
  *(int *)(puVar4 + -0x54) = iVar15;
  iVar9 = (int)piVar10;
  unaff_x25 = piVar10;
  if (iVar9 == -1) {
    unaff_x20 = (int *)(ulong)(piVar20[2] + 1U);
    piVar20[2] = piVar20[2] + 1U;
  }
  else {
    piVar5 = piVar20;
    FUN_10746758c();
    if (piVar5 != (int *)0x0) {
      FUN_1074675d0(piVar20,piVar5);
      piVar20 = piVar5;
LAB_10746733c:
      func_0x000107469874(piVar20,*(undefined8 *)(puVar4 + -8));
      return piVar20;
    }
    if (iVar9 <= piVar20[2]) {
      iVar9 = piVar20[2];
    }
    piVar20[2] = iVar9;
    unaff_x20 = piVar10;
  }
  piVar10 = (int *)0x0;
  iVar9 = (int)uVar12;
  unaff_x26 = 0x7fffffff;
  for (puVar8 = *(ulong **)(piVar20 + 0x16); puVar8 != *(ulong **)(piVar20 + 0x18);
      puVar8 = puVar8 + 1) {
    unaff_x25 = (int *)*puVar8;
    iVar19 = unaff_x25[4];
    if ((iVar15 == iVar19) && (piVar5 = unaff_x25, iVar9 == unaff_x25[3])) {
LAB_107467470:
      uVar6 = *(undefined8 *)(puVar4 + -0x10);
      uVar18 = *(undefined8 *)(puVar4 + -8);
      piVar11 = piVar20;
      piVar13 = unaff_x20;
      uVar14 = uVar12;
      uVar16 = uVar17;
      func_0x000107469874();
      *(ulong **)(puVar4 + -0xa0) = unaff_x24;
      *(int **)(puVar4 + -0x98) = piVar10;
      *(int **)(puVar4 + -0x90) = piVar20;
      *(ulong *)(puVar4 + -0x88) = uVar17;
      *(int **)(puVar4 + -0x80) = unaff_x20;
      *(ulong *)(puVar4 + -0x78) = uVar12;
      *(undefined8 *)(puVar4 + -0x70) = uVar6;
      *(undefined8 *)(puVar4 + -0x68) = uVar18;
      *(int **)(puVar4 + -0xa8) = piVar5;
      *(int *)(puVar4 + -0xac) = (int)piVar13;
      uVar6 = *(undefined8 *)(piVar11 + 0x16);
      FUN_107467944(uVar6,*(undefined8 *)(piVar11 + 0x18),puVar4 + -0xa8);
      FUN_1074678f0(piVar11 + 0x16,uVar6,*(undefined8 *)(piVar11 + 0x18));
      puVar21 = *(undefined4 **)(puVar4 + -0xa8);
      *puVar21 = (int)piVar13;
      puVar21[1] = (int)uVar14;
      puVar21[2] = (int)uVar16;
      puVar21[7] = 0;
      piVar10 = piVar11 + 0x10;
      FUN_1074679a0(piVar10,puVar4 + -0xac);
      *(undefined4 **)piVar10 = puVar21;
      FUN_1074675d0(piVar11,*(undefined8 *)(puVar4 + -0xa8));
      return *(int **)(puVar4 + -0xa8);
    }
    if ((iVar15 <= iVar19) && (iVar9 <= unaff_x25[3])) {
      uVar22 = unaff_x25[3] * iVar19 - iVar15 * iVar9;
      piVar5 = unaff_x25;
      if ((int)(uint)unaff_x26 <= (int)uVar22) {
        uVar22 = (uint)unaff_x26;
        piVar5 = piVar10;
      }
      piVar10 = piVar5;
      unaff_x26 = (ulong)uVar22;
    }
  }
  unaff_x24 = (ulong *)(piVar20 + 4);
  FUN_1074676bc();
  piVar5 = unaff_x25;
  func_0x0001074676e0(piVar20 + 4);
  iVar19 = 0;
  piVar11 = (int *)0x0;
  do {
    piVar13 = unaff_x25 + -0x3f0;
    do {
      if (unaff_x25 == piVar5) {
        *(int *)(puVar4 + -0x58) = iVar19;
        piVar5 = piVar10;
        if (piVar10 != (int *)0x0) goto LAB_107467470;
        piVar7 = piVar11;
        if (piVar11 != (int *)0x0) {
LAB_1074674a4:
          uVar6 = *(undefined8 *)(puVar4 + -0x10);
          uVar18 = *(undefined8 *)(puVar4 + -8);
          piVar10 = unaff_x20;
          uVar14 = uVar12;
          func_0x000107469874();
          *(int **)(puVar4 + -0x80) = unaff_x20;
          *(ulong *)(puVar4 + -0x78) = uVar12;
          *(undefined8 *)(puVar4 + -0x70) = uVar6;
          *(undefined8 *)(puVar4 + -0x68) = uVar18;
          *(int *)(puVar4 + -0x84) = (int)piVar10;
          FUN_107467b70(piVar7,piVar10,uVar14,uVar17);
          if (piVar7 != (int *)0x0) {
            puVar8 = (ulong *)(piVar20 + 0x10);
            FUN_1074679a0(puVar8,puVar4 + -0x84);
            *puVar8 = (ulong)piVar7;
            FUN_1074675d0(piVar20,piVar7);
          }
          return piVar7;
        }
        iVar1 = piVar20[1];
        if ((iVar15 <= iVar1 - iVar19) && (iVar9 <= *piVar20)) {
          FUN_107467764(piVar20 + 4,puVar4 + -0x58,piVar20,puVar4 + -0x54);
          piVar10 = piVar20 + 4;
          FUN_1074677e8(piVar10);
          FUN_107467708(piVar20,piVar10,unaff_x20,uVar12,*(undefined4 *)(puVar4 + -0x54));
          goto LAB_10746733c;
        }
        if ((char)piVar20[3] != '\x01') {
          piVar20 = (int *)0x0;
          goto LAB_10746733c;
        }
        iVar2 = *piVar20;
        iVar19 = iVar9;
        if (iVar9 <= iVar2) {
          iVar19 = iVar2;
        }
        iVar19 = iVar19 << 1;
        if (iVar9 <= iVar2 && iVar1 < iVar2) {
          iVar19 = iVar2;
        }
        iVar9 = iVar15;
        if (iVar15 <= iVar1) {
          iVar9 = iVar1;
        }
        iVar9 = iVar9 << 1;
        if (iVar2 <= iVar1 && iVar15 <= iVar1) {
          iVar9 = iVar1;
        }
        FUN_107467814(piVar20,iVar19,iVar9);
        unaff_x29 = *(undefined8 *)(puVar4 + -0x10);
        unaff_x30 = *(undefined8 *)(puVar4 + -8);
        param_1 = piVar20;
        piVar10 = unaff_x20;
        uVar14 = uVar12;
        uVar16 = uVar17;
        func_0x000107469874();
        unaff_x23 = 0;
        puVar4 = puVar4 + -0x60;
        unaff_x19 = uVar12;
        unaff_x21 = uVar17;
        unaff_x22 = piVar20;
        goto FUN_1074672e8;
      }
      iVar1 = unaff_x25[3];
      if (iVar9 <= unaff_x25[4]) {
        piVar7 = unaff_x25;
        if (iVar1 - iVar15 == 0) goto LAB_1074674a4;
        uVar3 = (iVar1 - iVar15) * iVar9;
        uVar22 = (uint)unaff_x26;
        if ((int)uVar22 <= (int)uVar3) {
          piVar7 = piVar11;
          uVar3 = uVar22;
        }
        if (iVar15 < iVar1) {
          uVar22 = uVar3;
        }
        unaff_x26 = (ulong)uVar22;
        if (iVar15 < iVar1) {
          piVar11 = piVar7;
        }
      }
      iVar19 = iVar1 + iVar19;
      unaff_x25 = unaff_x25 + 0x12;
      piVar13 = piVar13 + 0x12;
    } while ((int *)*unaff_x24 != piVar13);
    unaff_x24 = unaff_x24 + 1;
    unaff_x25 = (int *)*unaff_x24;
  } while( true );
}



/* Entry: 1074672e8; end: 10746758b;  */

int * FUN_1074672e8(int *param_1,int *param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  undefined8 uVar2;
  int iVar3;
  uint uVar4;
  undefined8 uVar5;
  int *piVar6;
  ulong *puVar7;
  int iVar8;
  int *piVar9;
  int *piVar10;
  int *piVar11;
  int iVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  int iVar17;
  undefined8 unaff_x19;
  int *unaff_x20;
  undefined8 unaff_x21;
  int *unaff_x22;
  undefined8 unaff_x23;
  int *piVar18;
  int *piVar19;
  undefined4 *puVar20;
  ulong *unaff_x24;
  int *unaff_x25;
  uint uVar21;
  ulong unaff_x26;
  undefined8 unaff_x29;
  undefined8 unaff_x30;
  
code_r0x0001074672e8:
  uVar15 = param_4;
  uVar5 = param_3;
  piVar19 = param_1;
  *(ulong *)((long)register0x00000008 + -0x50) = unaff_x26;
  *(int **)((long)register0x00000008 + -0x48) = unaff_x25;
  *(ulong **)((long)register0x00000008 + -0x40) = unaff_x24;
  *(undefined8 *)((long)register0x00000008 + -0x38) = unaff_x23;
  *(int **)((long)register0x00000008 + -0x30) = unaff_x22;
  *(undefined8 *)((long)register0x00000008 + -0x28) = unaff_x21;
  *(int **)((long)register0x00000008 + -0x20) = unaff_x20;
  *(undefined8 *)((long)register0x00000008 + -0x18) = unaff_x19;
  *(undefined8 *)((long)register0x00000008 + -0x10) = unaff_x29;
  *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
  iVar12 = (int)uVar15;
  *(int *)((long)register0x00000008 + -0x54) = iVar12;
  iVar8 = (int)param_2;
  unaff_x25 = param_2;
  if (iVar8 == -1) {
    unaff_x20 = (int *)(ulong)(piVar19[2] + 1U);
    piVar19[2] = piVar19[2] + 1U;
  }
  else {
    piVar18 = piVar19;
    FUN_10746758c();
    if (piVar18 != (int *)0x0) {
      FUN_1074675d0(piVar19,piVar18);
      piVar19 = piVar18;
LAB_10746733c:
      func_0x000107469874(piVar19,*(undefined8 *)((long)register0x00000008 + -8));
      return piVar19;
    }
    if (iVar8 <= piVar19[2]) {
      iVar8 = piVar19[2];
    }
    piVar19[2] = iVar8;
    unaff_x20 = param_2;
  }
  piVar18 = (int *)0x0;
  iVar8 = (int)uVar5;
  unaff_x26 = 0x7fffffff;
  for (puVar7 = *(ulong **)(piVar19 + 0x16); puVar7 != *(ulong **)(piVar19 + 0x18);
      puVar7 = puVar7 + 1) {
    unaff_x25 = (int *)*puVar7;
    iVar17 = unaff_x25[4];
    if ((iVar12 == iVar17) && (piVar9 = unaff_x25, iVar8 == unaff_x25[3])) {
LAB_107467470:
      uVar2 = *(undefined8 *)((long)register0x00000008 + -0x10);
      uVar16 = *(undefined8 *)((long)register0x00000008 + -8);
      piVar10 = piVar19;
      piVar11 = unaff_x20;
      uVar13 = uVar5;
      uVar14 = uVar15;
      func_0x000107469874();
      *(ulong **)((long)register0x00000008 + -0xa0) = unaff_x24;
      *(int **)((long)register0x00000008 + -0x98) = piVar18;
      *(int **)((long)register0x00000008 + -0x90) = piVar19;
      *(undefined8 *)((long)register0x00000008 + -0x88) = uVar15;
      *(int **)((long)register0x00000008 + -0x80) = unaff_x20;
      *(undefined8 *)((long)register0x00000008 + -0x78) = uVar5;
      *(undefined8 *)((long)register0x00000008 + -0x70) = uVar2;
      *(undefined8 *)((long)register0x00000008 + -0x68) = uVar16;
      *(int **)((long)register0x00000008 + -0xa8) = piVar9;
      *(int *)((long)register0x00000008 + -0xac) = (int)piVar11;
      uVar5 = *(undefined8 *)(piVar10 + 0x16);
      FUN_107467944(uVar5,*(undefined8 *)(piVar10 + 0x18),
                    (undefined1 *)((long)register0x00000008 + -0xa8));
      FUN_1074678f0(piVar10 + 0x16,uVar5,*(undefined8 *)(piVar10 + 0x18));
      puVar20 = *(undefined4 **)((long)register0x00000008 + -0xa8);
      *puVar20 = (int)piVar11;
      puVar20[1] = (int)uVar13;
      puVar20[2] = (int)uVar14;
      puVar20[7] = 0;
      piVar19 = piVar10 + 0x10;
      FUN_1074679a0(piVar19,(undefined1 *)((long)register0x00000008 + -0xac));
      *(undefined4 **)piVar19 = puVar20;
      FUN_1074675d0(piVar10,*(undefined8 *)((long)register0x00000008 + -0xa8));
      return *(int **)((long)register0x00000008 + -0xa8);
    }
    if ((iVar12 <= iVar17) && (iVar8 <= unaff_x25[3])) {
      uVar21 = unaff_x25[3] * iVar17 - iVar12 * iVar8;
      piVar9 = unaff_x25;
      if ((int)(uint)unaff_x26 <= (int)uVar21) {
        uVar21 = (uint)unaff_x26;
        piVar9 = piVar18;
      }
      piVar18 = piVar9;
      unaff_x26 = (ulong)uVar21;
    }
  }
  unaff_x24 = (ulong *)(piVar19 + 4);
  FUN_1074676bc();
  piVar9 = unaff_x25;
  func_0x0001074676e0(piVar19 + 4);
  iVar17 = 0;
  piVar10 = (int *)0x0;
  do {
    piVar11 = unaff_x25 + -0x3f0;
    do {
      if (unaff_x25 == piVar9) {
        *(int *)((long)register0x00000008 + -0x58) = iVar17;
        piVar9 = piVar18;
        if (piVar18 != (int *)0x0) goto LAB_107467470;
        piVar6 = piVar10;
        if (piVar10 != (int *)0x0) {
LAB_1074674a4:
          uVar2 = *(undefined8 *)((long)register0x00000008 + -0x10);
          uVar16 = *(undefined8 *)((long)register0x00000008 + -8);
          piVar18 = unaff_x20;
          uVar13 = uVar5;
          func_0x000107469874();
          *(int **)((long)register0x00000008 + -0x80) = unaff_x20;
          *(undefined8 *)((long)register0x00000008 + -0x78) = uVar5;
          *(undefined8 *)((long)register0x00000008 + -0x70) = uVar2;
          *(undefined8 *)((long)register0x00000008 + -0x68) = uVar16;
          *(int *)((long)register0x00000008 + -0x84) = (int)piVar18;
          FUN_107467b70(piVar6,piVar18,uVar13,uVar15);
          if (piVar6 != (int *)0x0) {
            puVar7 = (ulong *)(piVar19 + 0x10);
            FUN_1074679a0(puVar7,(undefined1 *)((long)register0x00000008 + -0x84));
            *puVar7 = (ulong)piVar6;
            FUN_1074675d0(piVar19,piVar6);
          }
          return piVar6;
        }
        iVar1 = piVar19[1];
        if ((iVar12 <= iVar1 - iVar17) && (iVar8 <= *piVar19)) {
          FUN_107467764(piVar19 + 4,(undefined1 *)((long)register0x00000008 + -0x58),piVar19,
                        (undefined1 *)((long)register0x00000008 + -0x54));
          piVar18 = piVar19 + 4;
          FUN_1074677e8(piVar18);
          FUN_107467708(piVar19,piVar18,unaff_x20,uVar5,
                        *(undefined4 *)((long)register0x00000008 + -0x54));
          goto LAB_10746733c;
        }
        if ((char)piVar19[3] != '\x01') {
          piVar19 = (int *)0x0;
          goto LAB_10746733c;
        }
        iVar3 = *piVar19;
        iVar17 = iVar8;
        if (iVar8 <= iVar3) {
          iVar17 = iVar3;
        }
        iVar17 = iVar17 << 1;
        if (iVar8 <= iVar3 && iVar1 < iVar3) {
          iVar17 = iVar3;
        }
        iVar8 = iVar12;
        if (iVar12 <= iVar1) {
          iVar8 = iVar1;
        }
        iVar8 = iVar8 << 1;
        if (iVar3 <= iVar1 && iVar12 <= iVar1) {
          iVar8 = iVar1;
        }
        FUN_107467814(piVar19,iVar17,iVar8);
        unaff_x29 = *(undefined8 *)((long)register0x00000008 + -0x10);
        unaff_x30 = *(undefined8 *)((long)register0x00000008 + -8);
        param_1 = piVar19;
        param_2 = unaff_x20;
        param_3 = uVar5;
        param_4 = uVar15;
        func_0x000107469874();
        unaff_x23 = 0;
        register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x60);
        unaff_x19 = uVar5;
        unaff_x21 = uVar15;
        unaff_x22 = piVar19;
        goto code_r0x0001074672e8;
      }
      iVar1 = unaff_x25[3];
      if (iVar8 <= unaff_x25[4]) {
        piVar6 = unaff_x25;
        if (iVar1 - iVar12 == 0) goto LAB_1074674a4;
        uVar4 = (iVar1 - iVar12) * iVar8;
        uVar21 = (uint)unaff_x26;
        if ((int)uVar21 <= (int)uVar4) {
          piVar6 = piVar10;
          uVar4 = uVar21;
        }
        if (iVar12 < iVar1) {
          uVar21 = uVar4;
        }
        unaff_x26 = (ulong)uVar21;
        if (iVar12 < iVar1) {
          piVar10 = piVar6;
        }
      }
      iVar17 = iVar1 + iVar17;
      unaff_x25 = unaff_x25 + 0x12;
      piVar11 = piVar11 + 0x12;
    } while ((int *)*unaff_x24 != piVar11);
    unaff_x24 = unaff_x24 + 1;
    unaff_x25 = (int *)*unaff_x24;
  } while( true );
}



/* Entry: 10746758c; end: 1074675cf;  */

undefined8 FUN_10746758c(long param_1,undefined4 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined4 uStack_24;
  
  lVar1 = param_1 + 0x40;
  uStack_24 = param_2;
  FUN_107467884(lVar1,&uStack_24);
  if (param_1 + 0x48 == lVar1) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(lVar1 + 0x28);
  }
  return uVar2;
}



/* Entry: 1074675d0; end: 10746762f;  */

int * FUN_1074675d0(undefined8 param_1,long param_2)

{
  uint uVar1;
  int iVar2;
  int *piVar3;
  
  iVar2 = *(int *)(param_2 + 0x1c);
  uVar1 = iVar2 + 1;
  piVar3 = (int *)(ulong)uVar1;
  *(uint *)(param_2 + 0x1c) = uVar1;
  if (iVar2 == 0) {
    func_0x0001074696f8();
    iVar2 = *piVar3;
    func_0x0001074696f8();
    *piVar3 = iVar2 + 1;
    piVar3 = (int *)(ulong)*(uint *)(param_2 + 0x1c);
  }
  return piVar3;
}



/* Entry: 107467630; end: 1074676bb;  */

undefined4 *
FUN_107467630(long param_1,undefined4 *param_2,undefined4 param_3,undefined4 param_4,
             undefined4 param_5)

{
  undefined4 *puVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined4 uStack_4c;
  undefined4 *puStack_48;
  
  uVar2 = *(undefined8 *)(param_1 + 0x58);
  uStack_4c = param_3;
  puStack_48 = param_2;
  FUN_107467944(uVar2,*(undefined8 *)(param_1 + 0x60),&puStack_48);
  FUN_1074678f0((undefined8 *)(param_1 + 0x58),uVar2,*(undefined8 *)(param_1 + 0x60));
  puVar1 = puStack_48;
  *puStack_48 = param_3;
  puStack_48[1] = param_4;
  puStack_48[2] = param_5;
  puStack_48[7] = 0;
  puVar3 = (undefined8 *)(param_1 + 0x40);
  FUN_1074679a0(puVar3,&uStack_4c);
  *puVar3 = puVar1;
  FUN_1074675d0(param_1,puStack_48);
  return puStack_48;
}



/* Entry: 1074676bc; end: 107467707;  */

void FUN_1074676bc(long param_1)

{
  if (*(long *)(param_1 + 0x10) == *(long *)(param_1 + 8)) {
    return;
  }
  return;
}



/* Entry: 107467708; end: 107467763;  */

long FUN_107467708(long param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long *plVar1;
  undefined4 uStack_24;
  
  uStack_24 = (undefined4)param_3;
  FUN_107467b70(param_2,param_3,param_4,param_5);
  if (param_2 != 0) {
    plVar1 = (long *)(param_1 + 0x40);
    FUN_1074679a0(plVar1,&uStack_24);
    *plVar1 = param_2;
    FUN_1074675d0(param_1,param_2);
  }
  return param_2;
}



/* Entry: 107467764; end: 1074677e7;  */

undefined4 *
FUN_107467764(undefined8 *param_1,undefined4 *param_2,undefined4 *param_3,undefined4 *param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 *puVar4;
  undefined4 *puVar5;
  
  puVar4 = param_1;
  puVar5 = param_2;
  FUN_1074681b4();
  if (puVar4 == (undefined8 *)0x0) {
    FUN_1074681dc();
    puVar4 = param_1;
  }
  func_0x000107469704();
  uVar1 = *param_2;
  uVar2 = *param_3;
  uVar3 = *param_4;
  *puVar5 = 0;
  puVar5[1] = uVar1;
  puVar5[2] = uVar2;
  puVar5[3] = uVar3;
  puVar5[4] = uVar2;
  *(undefined8 *)(puVar5 + 0x10) = 0;
  *(undefined8 *)(puVar5 + 0xe) = 0;
  *(undefined8 *)(puVar5 + 0xc) = 0;
  *(undefined8 *)(puVar5 + 10) = 0;
  *(undefined8 *)(puVar5 + 8) = 0;
  *(undefined8 *)(puVar5 + 6) = 0;
  func_0x00010746947c();
  func_0x000107469704();
  if ((undefined4 *)*puVar4 == puVar5) {
    puVar5 = (undefined4 *)(puVar4[-1] + 0xfc0);
  }
  return puVar5 + -0x12;
}



/* Entry: 1074677e8; end: 107467813;  */

long FUN_1074677e8(long param_1)

{
  ulong uVar1;
  
  uVar1 = (*(long *)(param_1 + 0x28) + *(long *)(param_1 + 0x20)) - 1;
  return *(long *)(*(long *)(param_1 + 8) + (uVar1 / 0x38) * 8) + (uVar1 % 0x38) * 0x48;
}



/* Entry: 107467814; end: 107467883;  */

undefined8 FUN_107467814(int *param_1,undefined8 param_2,int param_3)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  long lVar4;
  long *unaff_x20;
  long unaff_x21;
  
  uVar3 = (undefined4)((ulong)param_2 >> 0x20);
  iVar2 = (int)param_2;
  *param_1 = iVar2;
  param_1[1] = param_3;
  FUN_1074676bc(param_1 + 4);
  func_0x000107469400();
  do {
    lVar4 = unaff_x21 + -0xfc0;
    do {
      if (unaff_x21 == CONCAT44(uVar3,iVar2)) {
        return 1;
      }
      iVar1 = *param_1;
      *(int *)(unaff_x21 + 0x10) = (iVar1 - *(int *)(unaff_x21 + 8)) + *(int *)(unaff_x21 + 0x10);
      *(int *)(unaff_x21 + 8) = iVar1;
      lVar4 = lVar4 + 0x48;
      unaff_x21 = unaff_x21 + 0x48;
    } while (*unaff_x20 != lVar4);
    unaff_x20 = unaff_x20 + 1;
    unaff_x21 = *unaff_x20;
  } while( true );
}



/* Entry: 107467884; end: 1074678c3;  */

void FUN_107467884(void)

{
  func_0x000107468f88();
  FUN_1074678c4();
  return;
}



/* Entry: 1074678c4; end: 1074678ef;  */

long FUN_1074678c4(undefined8 param_1,int *param_2,long param_3,long param_4)

{
  long lVar1;
  
  for (; param_3 != 0; param_3 = *(long *)(param_3 + lVar1)) {
    lVar1 = 8;
    if (*param_2 <= *(int *)(param_3 + 0x20)) {
      lVar1 = 0;
      param_4 = param_3;
    }
  }
  return param_4;
}



/* Entry: 1074678f0; end: 107467943;  */

long FUN_1074678f0(long param_1,long param_2,long param_3)

{
  long lVar1;
  
  if (param_2 != param_3) {
    lVar1 = *(long *)(param_1 + 8) - param_3;
    if (lVar1 != 0) {
      _memmove(param_2,param_3,lVar1);
    }
    *(long *)(param_1 + 8) = param_2 + lVar1;
  }
  return param_2;
}



/* Entry: 107467944; end: 10746799f;  */

long * FUN_107467944(long *param_1,long *param_2,long *param_3)

{
  long *plVar1;
  
  func_0x0001074679d0();
  plVar1 = param_1;
  if (param_2 == param_1) {
    return param_2;
  }
  do {
    do {
      plVar1 = plVar1 + 1;
      if (plVar1 == param_2) {
        return param_1;
      }
    } while (*plVar1 == *param_3);
    *param_1 = *plVar1;
    param_1 = param_1 + 1;
  } while( true );
}



/* Entry: 1074679a0; end: 1074679eb;  */

long FUN_1074679a0(long param_1,undefined8 param_2)

{
  undefined1 uStack_19;
  undefined8 uStack_18;
  
  uStack_18 = param_2;
  FUN_107467a10(param_1,param_2,&UNK_10dd5b8f9,&uStack_18,&uStack_19);
  return param_1 + 0x28;
}



/* Entry: 1074679ec; end: 107467a0f;  */

void FUN_1074679ec(long *param_1,long *param_2,long *param_3)

{
  for (; (param_1 != param_2 && (*param_1 != *param_3)); param_1 = param_1 + 1) {
  }
  return;
}



/* Entry: 107467a10; end: 107467ab7;  */

undefined1  [16]
FUN_107467a10(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  bool bVar1;
  long *plVar2;
  long lVar3;
  undefined1 auVar4 [16];
  undefined8 uStack_60;
  long *plStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  plVar2 = param_1;
  FUN_107467ab8(param_1,&uStack_48,param_2);
  lVar3 = *plVar2;
  bVar1 = lVar3 == 0;
  if (bVar1) {
    lVar3 = 0x30;
    __Znwm();
    uStack_50 = 1;
    *(undefined4 *)(lVar3 + 0x20) = *(undefined4 *)*param_4;
    *(undefined8 *)(lVar3 + 0x28) = 0;
    plStack_58 = param_1 + 1;
    FUN_107467b08(param_1,uStack_48,plVar2,lVar3);
    uStack_60 = 0;
    func_0x000107467b38(&uStack_60);
  }
  auVar4[8] = bVar1;
  auVar4._0_8_ = lVar3;
  auVar4._9_7_ = 0;
  return auVar4;
}



/* Entry: 107467ab8; end: 107467b07;  */

long * FUN_107467ab8(long param_1,long *param_2,int *param_3)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  
  plVar1 = (long *)(param_1 + 8);
  plVar2 = plVar1;
  if ((long *)*plVar1 != (long *)0x0) {
    plVar3 = (long *)*plVar1;
    do {
      while (plVar2 = plVar3, (int)plVar3[4] <= *param_3) {
        if (*param_3 <= (int)plVar3[4]) goto LAB_107467b00;
        plVar1 = plVar3 + 1;
        plVar3 = (long *)*plVar1;
        if ((long *)*plVar1 == (long *)0x0) goto LAB_107467b00;
      }
      plVar4 = (long *)*plVar3;
      plVar1 = plVar3;
      plVar3 = plVar4;
    } while (plVar4 != (long *)0x0);
  }
LAB_107467b00:
  *param_2 = (long)plVar2;
  return plVar1;
}



/* Entry: 107467b08; end: 107467b57;  */

void FUN_107467b08(void)

{
  long extraout_x8;
  long *unaff_x19;
  
  func_0x000107469434();
  if (extraout_x8 != 0) {
    *unaff_x19 = extraout_x8;
  }
  func_0x0001074696cc();
  unaff_x19[2] = unaff_x19[2] + 1;
  return;
}



/* Entry: 107467b58; end: 107467b6f;  */

void FUN_107467b58(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 107467b70; end: 107467bf3;  */

void FUN_107467b70(int *param_1,undefined4 param_2,int param_3,int param_4)

{
  int iStack_30;
  int iStack_2c;
  int iStack_28;
  undefined4 uStack_24;
  
  if ((param_3 <= param_1[4]) && (param_4 <= param_1[3])) {
    iStack_30 = *param_1;
    *param_1 = iStack_30 + param_3;
    param_1[4] = param_1[4] - param_3;
    iStack_2c = param_4;
    iStack_28 = param_3;
    uStack_24 = param_2;
    FUN_107467bf4(param_1 + 6,&uStack_24,&iStack_28,&iStack_2c,&iStack_28,param_1 + 3,&iStack_30,
                  param_1 + 1);
    FUN_107467c9c(param_1 + 6);
  }
  return;
}



/* Entry: 107467bf4; end: 107467c9b;  */

long * FUN_107467bf4(long param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                    undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long lVar1;
  long *plVar2;
  
  lVar1 = param_1;
  plVar2 = param_2;
  func_0x000107467cc0();
  if (lVar1 == 0) {
    FUN_107467cd4(param_1);
  }
  func_0x00010746970c();
  func_0x000107468168(plVar2,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  func_0x00010746947c();
  func_0x00010746970c();
  if ((long *)*plVar2 == param_2) {
    param_2 = (long *)(plVar2[-1] + 0x1000);
  }
  return param_2 + -4;
}



/* Entry: 107467c9c; end: 107467cd3;  */

long FUN_107467c9c(long param_1)

{
  ulong uVar1;
  
  uVar1 = (*(long *)(param_1 + 0x28) + *(long *)(param_1 + 0x20)) - 1;
  return *(long *)(*(long *)(param_1 + 8) + (uVar1 >> 7) * 8) + (uVar1 & 0x7f) * 0x20;
}



/* Entry: 107467cd4; end: 107467dcb;  */

void FUN_107467cd4(void)

{
  bool bVar1;
  undefined8 uVar2;
  ulong extraout_x8;
  long extraout_x8_00;
  long extraout_x10;
  long unaff_x19;
  long lVar3;
  undefined8 uStack_70;
  undefined8 uStack_68;
  long lStack_60;
  undefined8 uStack_58;
  undefined1 auStack_50 [48];
  
  func_0x00010746985c();
  bVar1 = 0x7f < extraout_x8;
  if (bVar1) {
    *(ulong *)(unaff_x19 + 0x20) = extraout_x8 - 0x80;
  }
  else {
    func_0x000107469310();
    if (bVar1) {
      func_0x000107469760();
      FUN_1074680a8();
      func_0x00010746974c();
      uVar2 = 0x1000;
      __Znwm();
      lStack_60 = unaff_x19 + 0x28;
      uStack_58 = 0x80;
      uStack_70 = uVar2;
      uStack_68 = uVar2;
      FUN_107467f60(auStack_50,&uStack_70);
      uStack_68 = 0;
      lVar3 = *(long *)(unaff_x19 + 0x10);
      while (lVar3 != *(long *)(unaff_x19 + 8)) {
        lVar3 = lVar3 + -8;
        FUN_107467fdc(auStack_50,lVar3);
      }
      func_0x000107469374();
      FUN_1074680e0();
      FUN_107468118(auStack_50);
      return;
    }
    if (extraout_x10 != extraout_x8_00) {
      __Znwm(0x1000);
      func_0x00010746918c();
      FUN_107467e60();
      return;
    }
    __Znwm(0x1000);
    func_0x00010746918c();
    FUN_107467ed0();
  }
  func_0x0001074693c4();
  FUN_107467df0();
  return;
}



/* Entry: 107467dcc; end: 107467def;  */

void FUN_107467dcc(long param_1)

{
  if (*(long *)(param_1 + 0x10) != *(long *)(param_1 + 8)) {
    return;
  }
  return;
}



/* Entry: 107467df0; end: 107467e5f;  */

void FUN_107467df0(void)

{
  undefined1 in_ZR;
  undefined1 in_CY;
  
  func_0x00010746988c();
  func_0x000107468e40();
  if ((bool)in_ZR) {
    func_0x000107469368();
    if (!(bool)in_CY || (bool)in_ZR) {
      func_0x00010746935c();
      func_0x0001074691a8();
      func_0x000107468c00();
      func_0x0001074692bc();
      func_0x000107468b68();
      FUN_107468118();
    }
    else {
      func_0x000107468bb8();
      if (!(bool)in_ZR) {
        func_0x000107468d74();
      }
      func_0x000107468f6c();
    }
  }
  func_0x000107468f5c();
  return;
}



/* Entry: 107467e60; end: 107467ecf;  */

void FUN_107467e60(void)

{
  undefined1 in_ZR;
  undefined1 in_CY;
  
  func_0x00010746988c();
  func_0x000107468e40();
  if ((bool)in_ZR) {
    func_0x000107469368();
    if (!(bool)in_CY || (bool)in_ZR) {
      func_0x00010746935c();
      func_0x0001074691a8();
      func_0x000107468c00();
      func_0x0001074692bc();
      func_0x000107468b68();
      FUN_107468118();
    }
    else {
      func_0x000107468bb8();
      if (!(bool)in_ZR) {
        func_0x000107468d74();
      }
      func_0x000107468f6c();
    }
  }
  func_0x000107468f5c();
  return;
}



/* Entry: 107467ed0; end: 107467f5f;  */

void FUN_107467ed0(long param_1)

{
  long lVar1;
  undefined1 in_ZR;
  undefined1 in_CY;
  long extraout_x8;
  
  func_0x000107468f88();
  func_0x000107469850();
  if ((bool)in_ZR) {
    func_0x0001074697fc();
    if ((bool)in_CY) {
      func_0x000107469838();
      lVar1 = extraout_x8;
      if ((bool)in_ZR) {
        lVar1 = 1;
      }
      FUN_1074680a8();
      func_0x000107468c68(param_1 + (lVar1 * 2 + 6U & 0xfffffffffffffff8));
      func_0x0001074692bc();
      func_0x000107468b68();
      FUN_107468118();
    }
    else {
      func_0x000107468cb4();
      if (!(bool)in_ZR) {
        func_0x0001074693f0();
      }
      func_0x000107469844();
    }
  }
  func_0x00010746917c();
  return;
}



/* Entry: 107467f60; end: 107467fdb;  */

void FUN_107467f60(long param_1)

{
  bool bVar1;
  bool bVar2;
  long unaff_x19;
  
  func_0x00010746988c();
  func_0x000107468f88();
  bVar1 = *(ulong *)(param_1 + 0x18) <= *(ulong *)(param_1 + 0x10);
  bVar2 = *(ulong *)(param_1 + 0x10) == *(ulong *)(param_1 + 0x18);
  if (bVar2) {
    func_0x000107469368();
    if (!bVar1 || bVar2) {
      func_0x00010746935c();
      func_0x0001074691a8(*(undefined8 *)(unaff_x19 + 0x20));
      func_0x000107468c00();
      func_0x0001074692bc();
      func_0x000107468b68();
      FUN_107468118();
    }
    else {
      func_0x000107468bb8();
      if (!bVar2) {
        func_0x000107468d74();
      }
      func_0x000107468f6c();
    }
  }
  func_0x000107468f5c();
  return;
}



/* Entry: 107467fdc; end: 107468073;  */

void FUN_107467fdc(void)

{
  long lVar1;
  undefined1 in_ZR;
  bool bVar2;
  long lVar3;
  long extraout_x8;
  long unaff_x19;
  
  func_0x000107468f88();
  func_0x000107469850();
  if ((bool)in_ZR) {
    bVar2 = *(ulong *)(unaff_x19 + 0x10) == *(ulong *)(unaff_x19 + 0x18);
    if (*(ulong *)(unaff_x19 + 0x10) < *(ulong *)(unaff_x19 + 0x18)) {
      func_0x000107468cb4();
      if (!bVar2) {
        func_0x0001074693f0();
      }
      func_0x000107469844();
    }
    else {
      func_0x000107469838();
      lVar1 = extraout_x8;
      if (bVar2) {
        lVar1 = 1;
      }
      lVar3 = *(long *)(unaff_x19 + 0x20);
      FUN_1074680a8();
      func_0x000107468c68(lVar3 + (lVar1 * 2 + 6U & 0xfffffffffffffff8));
      func_0x0001074692bc();
      func_0x000107468b68();
      FUN_107468118();
    }
  }
  func_0x00010746917c();
  return;
}



/* Entry: 107468074; end: 1074680a7;  */

void FUN_107468074(long param_1,undefined8 *param_2,long param_3)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 *puVar3;
  long lVar4;
  
  lVar2 = param_3 - (long)param_2 >> 3;
  puVar3 = *(undefined8 **)(param_1 + 0x10);
  puVar1 = puVar3;
  for (lVar4 = lVar2 << 3; lVar4 != 0; lVar4 = lVar4 + -8) {
    *puVar1 = *param_2;
    puVar1 = puVar1 + 1;
    param_2 = param_2 + 1;
  }
  *(undefined8 **)(param_1 + 0x10) = puVar3 + lVar2;
  return;
}



/* Entry: 1074680a8; end: 1074680c7;  */

void FUN_1074680a8(void)

{
  FUN_1074680c8();
  return;
}



/* Entry: 1074680c8; end: 1074680df;  */

void FUN_1074680c8(undefined8 param_1,ulong param_2)

{
  if (param_2 >> 0x3d == 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(param_2 << 3);
    return;
  }
  func_0x000104bd35f4();
  func_0x000107469630();
  FUN_107468100();
  return;
}



/* Entry: 1074680e0; end: 1074680ff;  */

void FUN_1074680e0(void)

{
  func_0x000107469630();
  FUN_107468100();
  return;
}



/* Entry: 107468100; end: 107468117;  */

void FUN_107468100(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 107468118; end: 107468143;  */

long * FUN_107468118(long *param_1)

{
  FUN_107468144();
  if (*param_1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 107468144; end: 1074681b3;  */

void FUN_107468144(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x10);
  while (lVar1 != *(long *)(param_1 + 8)) {
    lVar1 = lVar1 + -8;
    *(long *)(param_1 + 0x10) = lVar1;
  }
  return;
}



/* Entry: 1074681b4; end: 1074681db;  */

long FUN_1074681b4(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_1074682d4();
  return lVar1 - (*(long *)(param_1 + 0x20) + *(long *)(param_1 + 0x28));
}



/* Entry: 1074681dc; end: 1074682d3;  */

void FUN_1074681dc(void)

{
  bool bVar1;
  undefined8 uVar2;
  ulong extraout_x8;
  long extraout_x8_00;
  long extraout_x10;
  long unaff_x19;
  long lVar3;
  undefined8 uStack_70;
  undefined8 uStack_68;
  long lStack_60;
  undefined8 uStack_58;
  undefined1 auStack_50 [48];
  
  func_0x00010746985c();
  bVar1 = 0x37 < extraout_x8;
  if (bVar1) {
    *(ulong *)(unaff_x19 + 0x20) = extraout_x8 - 0x38;
  }
  else {
    func_0x000107469310();
    if (bVar1) {
      func_0x000107469760();
      FUN_1074685b0();
      func_0x00010746974c();
      uVar2 = 0xfc0;
      __Znwm();
      lStack_60 = unaff_x19 + 0x28;
      uStack_58 = 0x38;
      uStack_70 = uVar2;
      uStack_68 = uVar2;
      FUN_107468468(auStack_50,&uStack_70);
      uStack_68 = 0;
      lVar3 = *(long *)(unaff_x19 + 0x10);
      while (lVar3 != *(long *)(unaff_x19 + 8)) {
        lVar3 = lVar3 + -8;
        FUN_1074684e4(auStack_50,lVar3);
      }
      func_0x000107469374();
      FUN_1074685e8();
      FUN_107468620(auStack_50);
      return;
    }
    if (extraout_x10 != extraout_x8_00) {
      __Znwm(0xfc0);
      func_0x00010746918c();
      FUN_107468368();
      return;
    }
    __Znwm(0xfc0);
    func_0x00010746918c();
    FUN_1074683d8();
  }
  func_0x0001074693c4();
  FUN_1074682f8();
  return;
}



/* Entry: 1074682d4; end: 1074682f7;  */

long FUN_1074682d4(long param_1)

{
  long lVar1;
  
  lVar1 = 0;
  if (*(long *)(param_1 + 0x10) != *(long *)(param_1 + 8)) {
    lVar1 = ((ulong)(*(long *)(param_1 + 0x10) - *(long *)(param_1 + 8)) >> 3) * 0x38 + -1;
  }
  return lVar1;
}



/* Entry: 1074682f8; end: 107468367;  */

void FUN_1074682f8(void)

{
  undefined1 in_ZR;
  undefined1 in_CY;
  
  func_0x00010746988c();
  func_0x000107468e40();
  if ((bool)in_ZR) {
    func_0x000107469368();
    if (!(bool)in_CY || (bool)in_ZR) {
      func_0x00010746935c();
      func_0x00010746919c();
      func_0x000107468c00();
      func_0x0001074691f4();
      func_0x000107468b68();
      FUN_107468620();
    }
    else {
      func_0x000107468bb8();
      if (!(bool)in_ZR) {
        func_0x000107468d74();
      }
      func_0x000107468f6c();
    }
  }
  func_0x000107468f5c();
  return;
}



/* Entry: 107468368; end: 1074683d7;  */

void FUN_107468368(void)

{
  undefined1 in_ZR;
  undefined1 in_CY;
  
  func_0x00010746988c();
  func_0x000107468e40();
  if ((bool)in_ZR) {
    func_0x000107469368();
    if (!(bool)in_CY || (bool)in_ZR) {
      func_0x00010746935c();
      func_0x00010746919c();
      func_0x000107468c00();
      func_0x0001074691f4();
      func_0x000107468b68();
      FUN_107468620();
    }
    else {
      func_0x000107468bb8();
      if (!(bool)in_ZR) {
        func_0x000107468d74();
      }
      func_0x000107468f6c();
    }
  }
  func_0x000107468f5c();
  return;
}



/* Entry: 1074683d8; end: 107468467;  */

void FUN_1074683d8(long param_1)

{
  long lVar1;
  undefined1 in_ZR;
  undefined1 in_CY;
  long extraout_x8;
  
  func_0x000107468f88();
  func_0x000107469850();
  if ((bool)in_ZR) {
    func_0x0001074697fc();
    if ((bool)in_CY) {
      func_0x000107469838();
      lVar1 = extraout_x8;
      if ((bool)in_ZR) {
        lVar1 = 1;
      }
      FUN_1074685b0();
      func_0x000107468c68(param_1 + (lVar1 * 2 + 6U & 0xfffffffffffffff8));
      func_0x0001074691f4();
      func_0x000107468b68();
      FUN_107468620();
    }
    else {
      func_0x000107468cb4();
      if (!(bool)in_ZR) {
        func_0x0001074693f0();
      }
      func_0x000107469844();
    }
  }
  func_0x00010746917c();
  return;
}



/* Entry: 107468468; end: 1074684e3;  */

void FUN_107468468(long param_1)

{
  bool bVar1;
  bool bVar2;
  long unaff_x19;
  
  func_0x00010746988c();
  func_0x000107468f88();
  bVar1 = *(ulong *)(param_1 + 0x18) <= *(ulong *)(param_1 + 0x10);
  bVar2 = *(ulong *)(param_1 + 0x10) == *(ulong *)(param_1 + 0x18);
  if (bVar2) {
    func_0x000107469368();
    if (!bVar1 || bVar2) {
      func_0x00010746935c();
      func_0x00010746919c(*(undefined8 *)(unaff_x19 + 0x20));
      func_0x000107468c00();
      func_0x0001074691f4();
      func_0x000107468b68();
      FUN_107468620();
    }
    else {
      func_0x000107468bb8();
      if (!bVar2) {
        func_0x000107468d74();
      }
      func_0x000107468f6c();
    }
  }
  func_0x000107468f5c();
  return;
}



/* Entry: 1074684e4; end: 10746857b;  */

void FUN_1074684e4(void)

{
  long lVar1;
  undefined1 in_ZR;
  bool bVar2;
  long lVar3;
  long extraout_x8;
  long unaff_x19;
  
  func_0x000107468f88();
  func_0x000107469850();
  if ((bool)in_ZR) {
    bVar2 = *(ulong *)(unaff_x19 + 0x10) == *(ulong *)(unaff_x19 + 0x18);
    if (*(ulong *)(unaff_x19 + 0x10) < *(ulong *)(unaff_x19 + 0x18)) {
      func_0x000107468cb4();
      if (!bVar2) {
        func_0x0001074693f0();
      }
      func_0x000107469844();
    }
    else {
      func_0x000107469838();
      lVar1 = extraout_x8;
      if (bVar2) {
        lVar1 = 1;
      }
      lVar3 = *(long *)(unaff_x19 + 0x20);
      FUN_1074685b0();
      func_0x000107468c68(lVar3 + (lVar1 * 2 + 6U & 0xfffffffffffffff8));
      func_0x0001074691f4();
      func_0x000107468b68();
      FUN_107468620();
    }
  }
  func_0x00010746917c();
  return;
}



/* Entry: 10746857c; end: 1074685af;  */

void FUN_10746857c(long param_1,undefined8 *param_2,long param_3)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 *puVar3;
  long lVar4;
  
  lVar2 = param_3 - (long)param_2 >> 3;
  puVar3 = *(undefined8 **)(param_1 + 0x10);
  puVar1 = puVar3;
  for (lVar4 = lVar2 << 3; lVar4 != 0; lVar4 = lVar4 + -8) {
    *puVar1 = *param_2;
    puVar1 = puVar1 + 1;
    param_2 = param_2 + 1;
  }
  *(undefined8 **)(param_1 + 0x10) = puVar3 + lVar2;
  return;
}



/* Entry: 1074685b0; end: 1074685cf;  */

void FUN_1074685b0(void)

{
  FUN_1074685d0();
  return;
}



/* Entry: 1074685d0; end: 1074685e7;  */

void FUN_1074685d0(undefined8 param_1,ulong param_2)

{
  if (param_2 >> 0x3d == 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(param_2 << 3);
    return;
  }
  func_0x000104bd35f4();
  func_0x000107469630();
  FUN_107468608();
  return;
}



/* Entry: 1074685e8; end: 107468607;  */

void FUN_1074685e8(void)

{
  func_0x000107469630();
  FUN_107468608();
  return;
}



/* Entry: 107468608; end: 10746861f;  */

void FUN_107468608(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 107468620; end: 10746864b;  */

long * FUN_107468620(long *param_1)

{
  FUN_10746864c();
  if (*param_1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 10746864c; end: 10746866f;  */

void FUN_10746864c(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x10);
  while (lVar1 != *(long *)(param_1 + 8)) {
    lVar1 = lVar1 + -8;
    *(long *)(param_1 + 0x10) = lVar1;
  }
  return;
}



/* Entry: 107468670; end: 10746870f;  */

void FUN_107468670(ulong *param_1,ulong param_2)

{
  undefined1 uVar1;
  ulong *puVar2;
  ulong uVar3;
  long extraout_x9;
  ulong uVar4;
  
  puVar2 = param_1;
  FUN_1074676bc();
  uVar3 = param_2;
  func_0x000107469704();
  do {
    uVar4 = param_2 - 0xfc0;
    do {
      uVar1 = uVar3 <= param_2;
      if (param_2 == uVar3) {
        param_1[5] = 0;
        while (func_0x000107469774(), (bool)uVar1) {
          func_0x000107469394();
          func_0x00010746949c();
        }
        if (extraout_x9 == 1) {
          uVar3 = 0x1c;
        }
        else {
          if (extraout_x9 != 2) {
            return;
          }
          uVar3 = 0x38;
        }
        param_1[4] = uVar3;
        return;
      }
      FUN_107468710(param_2 + 0x18);
      param_2 = param_2 + 0x48;
      uVar4 = uVar4 + 0x48;
    } while (*puVar2 != uVar4);
    puVar2 = puVar2 + 1;
    param_2 = *puVar2;
  } while( true );
}



/* Entry: 107468710; end: 10746874f;  */

long * FUN_107468710(long *param_1)

{
  long lVar1;
  long lVar2;
  
  FUN_107468750();
  lVar1 = param_1[1];
  lVar2 = param_1[2];
  while (lVar1 != lVar2) {
    func_0x000107469694();
  }
  FUN_1074687f8();
  if (*param_1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 107468750; end: 1074687ab;  */

void FUN_107468750(long param_1)

{
  undefined1 in_CY;
  undefined8 uVar1;
  long extraout_x9;
  
  FUN_1074687ac();
  func_0x00010746970c();
  *(undefined8 *)(param_1 + 0x28) = 0;
  while (func_0x000107469774(), (bool)in_CY) {
    func_0x000107469394();
    func_0x00010746949c();
  }
  if (extraout_x9 == 1) {
    uVar1 = 0x40;
  }
  else {
    if (extraout_x9 != 2) {
      return;
    }
    uVar1 = 0x80;
  }
  *(undefined8 *)(param_1 + 0x20) = uVar1;
  return;
}



/* Entry: 1074687ac; end: 1074687cb;  */

void FUN_1074687ac(long param_1)

{
  if (*(long *)(param_1 + 0x10) != *(long *)(param_1 + 8)) {
    return;
  }
  return;
}



/* Entry: 1074687cc; end: 1074687f7;  */

long * FUN_1074687cc(long *param_1)

{
  FUN_1074687f8();
  if (*param_1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 1074687f8; end: 107468827;  */

void FUN_1074687f8(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x10);
  while (lVar1 != *(long *)(param_1 + 8)) {
    lVar1 = lVar1 + -8;
    *(long *)(param_1 + 0x10) = lVar1;
  }
  return;
}



/* Entry: 107468828; end: 107468903;  */

void FUN_107468828(long *param_1)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  long *plStack_50;
  long *plStack_48;
  long *plStack_40;
  long *plStack_38;
  long *plStack_30;
  
  plVar4 = param_1 + 3;
  uVar1 = *plVar4 - *param_1;
  uVar3 = param_1[2] - param_1[1];
  if (uVar3 < uVar1) {
    plStack_30 = plVar4;
    if (param_1[2] == param_1[1]) {
      plStack_50 = (long *)0x0;
      uVar3 = 0;
    }
    else {
      uVar3 = (long)uVar3 >> 3;
      FUN_1074685b0();
      uVar1 = param_1[3] - *param_1;
      plStack_50 = plVar4;
    }
    plStack_38 = plStack_50 + uVar3;
    plStack_48 = plStack_50;
    plStack_40 = plStack_50;
    if (uVar3 < (ulong)((long)uVar1 >> 3)) {
      plStack_48 = plStack_50;
      func_0x0001074691f4();
      lVar2 = param_1[1];
      plVar6 = (long *)param_1[1];
      plVar5 = (long *)*param_1;
      param_1[1] = (long)plStack_48;
      *param_1 = (long)plStack_50;
      plVar4 = (long *)param_1[3];
      plStack_40 = (long *)param_1[2];
      param_1[2] = (long)plStack_48 + ((long)plStack_40 - lVar2);
      param_1[3] = (long)plStack_38;
      plStack_50 = plVar5;
      plStack_48 = plVar6;
      plStack_38 = plVar4;
    }
    FUN_107468620(&plStack_50);
  }
  return;
}



/* Entry: 107468904; end: 10746891f;  */

void FUN_107468904(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x10);
  while (lVar1 != param_2) {
    lVar1 = lVar1 + -8;
    *(long *)(param_1 + 0x10) = lVar1;
  }
  return;
}



/* Entry: 107468920; end: 10746893b;  */

ulong FUN_107468920(ulong param_1)

{
  FUN_1074681b4();
  return param_1 / 0x38;
}



/* Entry: 10746893c; end: 107468943;  */

void FUN_10746893c(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x10);
  while (lVar1 != *(long *)(param_1 + 8)) {
    lVar1 = lVar1 + -8;
    *(long *)(param_1 + 0x10) = lVar1;
  }
  return;
}



/* Entry: 107468944; end: 10746897b;  */

void FUN_107468944(undefined8 param_1,long param_2)

{
  if (param_2 != 0) {
    func_0x000107468f7c();
    FUN_107468944();
    FUN_107468944();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10746897c; end: 107468a63;  */

void FUN_10746897c(long param_1)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  undefined8 *unaff_x19;
  undefined8 *unaff_x20;
  long *plVar4;
  
  func_0x000107468f7c();
  plVar4 = (long *)(param_1 + 8);
  func_0x00010533c16c();
  *unaff_x20 = *unaff_x19;
  plVar1 = unaff_x19 + 1;
  lVar2 = *plVar1;
  *plVar4 = lVar2;
  lVar3 = unaff_x19[2];
  unaff_x20[2] = lVar3;
  if (lVar3 == 0) {
    *unaff_x20 = plVar4;
  }
  else {
    *(long **)(lVar2 + 0x10) = plVar4;
    *unaff_x19 = plVar1;
    *plVar1 = 0;
    unaff_x19[2] = 0;
  }
  return;
}



/* Entry: 107468a64; end: 107468ac3;  */

long FUN_107468a64(long param_1)

{
  func_0x00010533c148(param_1 + 0x70);
  func_0x000107468aa0(param_1 + 0x58);
  FUN_107468ad8(param_1 + 0x40);
  FUN_107468afc(param_1 + 0x10);
  return param_1;
}



/* Entry: 107468ac4; end: 107468ad7;  */

void FUN_107468ac4(undefined8 *param_1)

{
  long lVar1;
  
  lVar1 = *(long *)*param_1;
  if (lVar1 != 0) {
    ((long *)*param_1)[1] = lVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 107468ad8; end: 107468afb;  */

long FUN_107468ad8(long param_1)

{
  FUN_107468944(param_1,*(undefined8 *)(param_1 + 8));
  return param_1;
}



/* Entry: 107468afc; end: 107468b3b;  */

long * FUN_107468afc(long *param_1)

{
  long lVar1;
  long lVar2;
  
  FUN_107468670();
  lVar1 = param_1[1];
  lVar2 = param_1[2];
  while (lVar1 != lVar2) {
    func_0x000107469694();
  }
  FUN_10746893c();
  if (*param_1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 107468b3c; end: 107468b67;  */

long * FUN_107468b3c(long *param_1)

{
  FUN_10746893c();
  if (*param_1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 107468b68; end: 10746989f;  */

void FUN_107468b68(void)

{
  undefined8 *unaff_x19;
  undefined8 in_stack_00000000;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  
  unaff_x19[1] = in_stack_00000008;
  *unaff_x19 = in_stack_00000000;
  unaff_x19[3] = in_stack_00000018;
  unaff_x19[2] = in_stack_00000010;
  return;
}



/* Entry: 1074698a0; end: 107469963;  */

void FUN_1074698a0(undefined8 *param_1,undefined8 *param_2)

{
  long lVar1;
  int extraout_w10;
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar2;
  
  func_0x000107479cac();
  *param_1 = &PTR_FUN_1109b2960;
  uVar2 = *param_2;
  param_1[2] = param_2[1];
  param_1[1] = uVar2;
  lVar1 = param_2[2];
  param_1[3] = lVar1;
  if (lVar1 != 0) {
    do {
      func_0x000107479b20();
    } while (extraout_w10 != 0);
  }
  FUN_10746fbd8(unaff_x19 + 0x20,unaff_x20 + 0x18);
  func_0x000107473900(unaff_x19 + 0x1e8,unaff_x20 + 0x1e0);
  lVar1 = unaff_x19 + 0x208;
  __ZNSt3__119__shared_mutex_baseC1Ev();
  *(undefined8 *)(unaff_x19 + 0x2b8) = 0;
  *(undefined8 *)(unaff_x19 + 0x2b0) = 0;
  *(undefined4 *)(unaff_x19 + 0x2d0) = 1;
  *(undefined4 *)(unaff_x19 + 0x2e8) = 1;
  *(undefined4 *)(unaff_x19 + 0x300) = 1;
  *(undefined4 *)(unaff_x19 + 0x318) = 1;
  *(undefined4 *)(unaff_x19 + 800) = 0;
  __ZNSt3__16chrono12steady_clock3nowEv();
  *(long *)(unaff_x19 + 0x328) = lVar1;
  return;
}



/* Entry: 107469964; end: 107469c37;  */

undefined1 *
FUN_107469964(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long *plVar1;
  code *pcVar2;
  undefined1 in_ZR;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined8 extraout_x8;
  code *extraout_x8_00;
  code *extraout_x8_01;
  code *extraout_x8_02;
  code *extraout_x8_03;
  long extraout_x8_04;
  long extraout_x8_05;
  long extraout_x9;
  long extraout_x9_00;
  int extraout_w10;
  undefined8 *unaff_x19;
  long unaff_x20;
  long lVar5;
  undefined8 uVar6;
  undefined1 auStack_2d8 [24];
  undefined1 auStack_2c0 [224];
  undefined1 *puStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c0;
  undefined1 auStack_1b8 [136];
  undefined1 auStack_130 [56];
  undefined1 auStack_f8 [56];
  long lStack_c0;
  undefined1 uStack_b8;
  undefined8 uStack_48;
  
  func_0x000107479cac();
  func_0x000107479adc();
  uStack_48 = extraout_x8;
  func_0x0001078696e8(auStack_2d8);
  func_0x00010729d1b0(auStack_2c0,unaff_x20 + 0x90);
  if (*(long *)(unaff_x20 + 0x200) == 0) {
    func_0x000104bfeb48();
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x107469bd8);
    (*pcVar2)();
  }
  func_0x00010747a260();
  (*extraout_x8_00)();
  func_0x00010724b3d8(auStack_2c0);
  func_0x000107751284(auStack_2c0);
  puStack_1e0 = auStack_2d8;
  uStack_1c0 = *(undefined8 *)(unaff_x20 + 0x1c0);
  uStack_1d8 = param_3;
  func_0x000107295f10(auStack_1b8,unaff_x20 + 0x1d8);
  uStack_1d0 = param_4;
  if (*(int *)(unaff_x20 + 0x1b8) == 0) {
    func_0x000104c2fe00(auStack_130,unaff_x20 + 0x58);
    func_0x000104c2fe00(auStack_f8,unaff_x20 + 0x90);
    func_0x0001073c4f74(&lStack_c0,auStack_130);
    func_0x000107751444(auStack_2c0,unaff_x20 + 200,&lStack_c0);
    func_0x000107267e8c(&lStack_c0);
    func_0x000107267eac(auStack_130);
  }
  else {
    func_0x0001077514d8(auStack_2c0,unaff_x20 + 200);
  }
  lStack_c0 = unaff_x20 + 0x208;
  uStack_b8 = 1;
  func_0x000107279a5c();
  lVar5 = *(long *)(unaff_x20 + 0x2b0);
  if (lVar5 == 0) {
    puVar3 = (undefined1 *)0x0;
  }
  else {
    puVar3 = *(undefined1 **)(lVar5 + 0x150);
    func_0x000107479e40();
    (*extraout_x8_01)();
  }
  func_0x000107780600(auStack_130,*(undefined8 *)(unaff_x20 + 0x10),auStack_2c0);
  plVar1 = (long *)(unaff_x20 + 0x2b0);
  FUN_107469c38(plVar1,auStack_130);
  puVar4 = auStack_130;
  func_0x0001074734f0();
  if (lVar5 != 0) {
    func_0x000107479cc8(*plVar1);
    (*extraout_x8_02)();
    in_ZR = puVar3 == puVar4;
    if ((bool)in_ZR) goto LAB_107469b84;
  }
  func_0x00010747ab70();
  (*extraout_x8_03)();
  if ((*(byte *)(*plVar1 + 0x58) & 1) == 0) {
    func_0x00010747a168();
    func_0x00010747a9a4();
    func_0x00010747a4ec(unaff_x20 + 0x2f0);
    func_0x00010747a4f4();
    func_0x00010747a168(*(undefined8 *)(unaff_x20 + 0x2b0));
    lVar5 = 0xe8;
    if ((bool)in_ZR) {
      lVar5 = extraout_x9_00;
    }
    func_0x00010747a998(extraout_x8_05 + lVar5);
    func_0x00010747a4ec(unaff_x20 + 0x308);
    func_0x00010747a4f4();
    func_0x00010747a990(unaff_x20 + 0x2c0);
    lVar5 = unaff_x20 + 0x2d8;
  }
  else {
    func_0x00010747a168();
    func_0x00010747a9a4();
    func_0x00010747a4ec(unaff_x20 + 0x2c0);
    func_0x00010747a4f4();
    func_0x00010747a168(*(undefined8 *)(unaff_x20 + 0x2b0));
    lVar5 = 0xe8;
    if ((bool)in_ZR) {
      lVar5 = extraout_x9;
    }
    func_0x00010747a998(extraout_x8_04 + lVar5);
    func_0x00010747a4ec(unaff_x20 + 0x2d8);
    func_0x00010747a4f4();
    func_0x00010747a990(unaff_x20 + 0x2f0);
    lVar5 = unaff_x20 + 0x308;
  }
  func_0x00010747a990(lVar5);
LAB_107469b84:
  lVar5 = *(long *)(unaff_x20 + 0x2b8);
  uVar6 = *(undefined8 *)(unaff_x20 + 0x2b0);
  unaff_x19[1] = *(undefined8 *)(unaff_x20 + 0x2b8);
  *unaff_x19 = uVar6;
  if (lVar5 != 0) {
    do {
      func_0x000107479b20();
    } while (extraout_w10 != 0);
  }
  func_0x000107279ee0(&lStack_c0);
  func_0x000107267da8(auStack_2c0);
  puVar3 = auStack_2d8;
  func_0x00010726b264();
  func_0x000107479a9c(uStack_48);
  if ((bool)in_ZR) {
    return puVar3;
  }
  ___stack_chk_fail();
  func_0x000107279ee0(&lStack_c0);
  func_0x000107267da8(auStack_2c0);
  func_0x00010726b264(auStack_2d8);
  func_0x000107479c68();
  func_0x000107479b6c();
  func_0x0001074734f0();
  return puVar3;
}



/* Entry: 107469c38; end: 107469c5b;  */

void FUN_107469c38(void)

{
  func_0x000107479b6c();
  func_0x0001074734f0();
  return;
}



/* Entry: 107469c5c; end: 107469c73;  */

void FUN_107469c5c(undefined8 param_1,long *param_2)

{
                    /* WARNING: Could not recover jumptable at 0x000107469c70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(*(long *)(*param_2 + 0x2b0) + 0x150) + 0x20))();
  return;
}



/* Entry: 107469c74; end: 107469d17;  */

void FUN_107469c74(undefined8 *param_1,undefined8 param_2)

{
  undefined1 in_ZR;
  long *plVar1;
  long alStack_50 [4];
  long alStack_30 [2];
  
  plVar1 = alStack_50;
  func_0x00010726fc00(alStack_30,param_2);
  if (alStack_30[0] != 0) {
    func_0x00010726fc3c();
    func_0x00010747ab50();
    if (!(bool)in_ZR) {
      func_0x00010747a10c();
      plVar1 = alStack_30;
      goto LAB_107469ccc;
    }
    func_0x00010726fc88();
  }
  func_0x0001072508cc(alStack_30);
  *param_1 = 0;
  param_1[1] = 0;
  alStack_50[0] = 0;
  alStack_50[1] = 0;
LAB_107469ccc:
  func_0x0001072508cc(plVar1);
  return;
}



/* Entry: 107469d18; end: 107469de7;  */

/* WARNING: Removing unreachable block (ram,0x000107469ddc) */

void FUN_107469d18(long param_1,undefined8 param_2)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  func_0x0001072ace38(param_1 + 0x118);
  lVar4 = *(long *)(param_1 + 0x88);
  for (lVar3 = *(long *)(param_1 + 0x80); lVar5 = lVar4, lVar3 != lVar4; lVar3 = lVar3 + 0x1f8) {
    lVar1 = lVar3 + 8;
    func_0x000104c32db4(lVar1,param_2);
    lVar5 = lVar3;
    if ((int)lVar1 != 0) goto LAB_107469d6c;
  }
LAB_107469da4:
  if (lVar5 != *(long *)(param_1 + 0x88)) {
    func_0x000107470440((long *)(param_1 + 0x80),lVar5);
  }
  lVar3 = param_1;
  FUN_107469de8();
  if ((int)lVar3 != 0) {
    lVar4 = *(long *)(param_1 + 0x178);
    for (lVar3 = *(long *)(param_1 + 0x170); lVar3 != lVar4; lVar3 = lVar3 + 0x20) {
      FUN_1074708f8(*(undefined8 *)(lVar3 + 0x18),param_1 + 0x98);
    }
    lVar3 = *(long *)(param_1 + 0x170);
    lVar4 = *(long *)(param_1 + 0x178);
    while (lVar4 != lVar3) {
      lVar4 = lVar4 + -0x20;
      FUN_107473b1c();
    }
    *(long *)(param_1 + 0x178) = lVar3;
    return;
  }
  return;
LAB_107469d6c:
  while (lVar1 = lVar3 + 0x1f8, lVar1 != lVar4) {
    uVar2 = lVar3 + 0x200;
    func_0x000104c32db4(uVar2,param_2);
    lVar3 = lVar1;
    if ((uVar2 & 1) == 0) {
      FUN_107326084(lVar5,lVar1);
      lVar5 = lVar5 + 0x1f8;
    }
  }
  goto LAB_107469da4;
}



/* Entry: 107469de8; end: 107469e13;  */

bool FUN_107469de8(long param_1)

{
  if ((*(long *)(param_1 + 0x80) == *(long *)(param_1 + 0x88)) &&
     ((*(byte *)(param_1 + 0x168) & 1) == 0)) {
    return *(long *)(param_1 + 0x108) == 0;
  }
  return false;
}



/* Entry: 107469e14; end: 107469ed3;  */

undefined8 * FUN_107469e14(undefined8 *param_1,undefined8 *param_2)

{
  long lVar1;
  int extraout_w10;
  int extraout_w10_00;
  undefined8 uVar2;
  
  *param_1 = *param_2;
  FUN_107470474(param_1 + 1,param_2 + 1);
  lVar1 = param_2[10];
  uVar2 = param_2[9];
  param_1[10] = param_2[10];
  param_1[9] = uVar2;
  if (lVar1 != 0) {
    do {
      func_0x000107479b20();
    } while (extraout_w10 != 0);
  }
  func_0x000107283e34(param_1 + 0xb,param_2 + 0xb);
  lVar1 = param_2[0xf];
  uVar2 = param_2[0xe];
  param_1[0xf] = param_2[0xf];
  param_1[0xe] = uVar2;
  if (lVar1 != 0) {
    do {
      func_0x000107479b20();
    } while (extraout_w10_00 != 0);
  }
  func_0x0001072d488c(param_1 + 0x10,param_2 + 0x10);
  return param_1;
}



/* Entry: 107469ed4; end: 107469f77;  */

long FUN_107469ed4(long param_1)

{
  func_0x00010724b374(param_1 + 0x80);
  FUN_1074738dc(param_1 + 0x70);
  func_0x00010725b1d4(param_1 + 0x58);
  func_0x000104c33970(param_1 + 0x48);
  FUN_1074704ac(param_1 + 8);
  return param_1;
}



/* Entry: 107469f78; end: 107469f8f;  */

uint FUN_107469f78(uint param_1)

{
  FUN_107474cc0();
  return param_1 ^ 1;
}



/* Entry: 107469f90; end: 107469fbb;  */

long FUN_107469f90(ulong param_1)

{
  ulong uVar1;
  ulong uVar2;
  int iVar3;
  ulong extraout_x8;
  ulong extraout_x8_00;
  ulong extraout_x8_01;
  long *unaff_x19;
  ulong *unaff_x20;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  undefined1 auStack_90 [112];
  
  func_0x000107479ce4();
  func_0x00010747a530();
  func_0x00010747a738();
  func_0x000107479cac();
  lVar4 = 0;
  uVar1 = unaff_x20[1];
  uVar2 = unaff_x20[2];
  func_0x00010747ab64(*unaff_x20 >> 0xc ^ param_1 >> 7);
  uVar5 = extraout_x8;
  while( true ) {
    uVar5 = uVar5 & uVar2;
    func_0x00010747ab9c();
    for (uVar6 = extraout_x8_00 & 0x8080808080808080; uVar6 != 0; uVar6 = uVar6 - 1 & uVar6) {
      uVar7 = (uVar6 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar6 >> 7 & 0xff00ff00ff00ff) << 8;
      uVar7 = (uVar7 & 0xffff0000ffff0000) >> 0x10 | (uVar7 & 0xffff0000ffff) << 0x10;
      uVar7 = uVar5 + ((ulong)LZCOUNT(uVar7 >> 0x20 | uVar7 << 0x20) >> 3) & uVar2;
      iVar3 = (int)auStack_90;
      FUN_1074738d0(auStack_90,uVar1 + uVar7 * 0x58);
      if (iVar3 != 0) {
        return *unaff_x19 + uVar7;
      }
    }
    func_0x00010747a1bc();
    if ((extraout_x8_01 & 1) != 0) break;
    lVar4 = lVar4 + 8;
    uVar5 = lVar4 + uVar5;
  }
  return 0;
}



/* Entry: 107469fbc; end: 10746a067;  */

void FUN_107469fbc(long param_1,long param_2)

{
  undefined1 uVar1;
  long lVar2;
  long lVar3;
  undefined8 extraout_x8;
  undefined1 auStack_1e8 [56];
  undefined1 auStack_1b0 [352];
  undefined1 auStack_50 [16];
  char cStack_40;
  undefined8 uStack_38;
  
  func_0x000107479adc();
  uStack_38 = extraout_x8;
  func_0x000104c2fe00(auStack_1e8);
  FUN_10746bcac(auStack_1b0,param_2 + 0x178,auStack_1e8);
  func_0x000104c2f714(auStack_1e8);
  uVar1 = cStack_40 == '\x01';
  if ((bool)uVar1) {
    FUN_1073c67e4(param_1,auStack_50);
  }
  else {
    func_0x000107473514();
  }
  func_0x00010747a844();
  func_0x000107479a9c(uStack_38);
  if ((bool)uVar1) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010747a844();
  func_0x000107479c68();
  lVar2 = param_1;
  FUN_107469de8();
  if ((int)lVar2 != 0) {
    lVar3 = *(long *)(param_1 + 0x178);
    for (lVar2 = *(long *)(param_1 + 0x170); lVar2 != lVar3; lVar2 = lVar2 + 0x20) {
      FUN_1074708f8(*(undefined8 *)(lVar2 + 0x18),param_1 + 0x98);
    }
    lVar2 = *(long *)(param_1 + 0x170);
    lVar3 = *(long *)(param_1 + 0x178);
    while (lVar3 != lVar2) {
      lVar3 = lVar3 + -0x20;
      FUN_107473b1c();
    }
    *(long *)(param_1 + 0x178) = lVar2;
    return;
  }
  return;
}



/* Entry: 10746a068; end: 10746a0bf;  */

void FUN_10746a068(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = param_1;
  FUN_107469de8();
  if ((int)lVar1 != 0) {
    lVar2 = *(long *)(param_1 + 0x178);
    for (lVar1 = *(long *)(param_1 + 0x170); lVar1 != lVar2; lVar1 = lVar1 + 0x20) {
      FUN_1074708f8(*(undefined8 *)(lVar1 + 0x18),param_1 + 0x98);
    }
    lVar1 = *(long *)(param_1 + 0x170);
    lVar2 = *(long *)(param_1 + 0x178);
    while (lVar2 != lVar1) {
      lVar2 = lVar2 + -0x20;
      FUN_107473b1c();
    }
    *(long *)(param_1 + 0x178) = lVar1;
    return;
  }
  return;
}



/* Entry: 10746a0c0; end: 10746a137;  */

void FUN_10746a0c0(undefined8 param_1,long param_2,ulong param_3,undefined8 param_4)

{
  long lVar1;
  ulong uVar2;
  long *unaff_x19;
  long *unaff_x21;
  
  uVar2 = param_3;
  func_0x00010747a364();
  FUN_10747380c();
  if ((uVar2 & 1) != 0) {
    lVar1 = unaff_x21[1] + param_2 * 0x58;
    func_0x000104c2fe00(lVar1,param_3);
    FUN_1074704d4(lVar1 + 0x38,param_4);
  }
  lVar1 = unaff_x21[1];
  *unaff_x19 = *unaff_x21 + param_2;
  unaff_x19[1] = lVar1 + param_2 * 0x58;
  *(char *)(unaff_x19 + 2) = (char)uVar2;
  return;
}



/* Entry: 10746a138; end: 10746a16b;  */

void FUN_10746a138(long *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *param_1;
  lVar2 = param_1[1];
  while (lVar2 != lVar1) {
    lVar2 = lVar2 + -0x20;
    FUN_107473b1c();
  }
  param_1[1] = lVar1;
  return;
}


