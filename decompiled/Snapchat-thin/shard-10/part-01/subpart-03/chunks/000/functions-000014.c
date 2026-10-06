/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1078d6dc0; end: 1078d6de7;  */

long FUN_1078d6dc0(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    func_0x0001000df548();
  }
  return param_1;
}



/* Entry: 1078d7428; end: 1078d7433;  */

void FUN_1078d7428(long param_1)

{
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  if (param_1 != 0) {
    uStack_18 = *(undefined8 *)(param_1 + 0x10);
    uStack_20 = *(undefined8 *)(param_1 + 8);
    func_0x0001003a90c4(&uStack_20);
    return;
  }
  return;
}



/* Entry: 1078d7664; end: 1078d768b;  */

long FUN_1078d7664(long param_1)

{
  if (*(long *)(param_1 + 0x10) != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 1078d78a4; end: 1078d7967;  */

/* WARNING: Possible PIC construction at 0x0001078d7928: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001078d792c) */
/* WARNING: Removing unreachable block (ram,0x0001078d794c) */
/* WARNING: Removing unreachable block (ram,0x0001078d7938) */
/* WARNING: Removing unreachable block (ram,0x0001078d7980) */

undefined1 * FUN_1078d78a4(long *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined1 auStack_50 [8];
  undefined8 uStack_48;
  undefined8 *puStack_40;
  
  func_0x0001078d8450();
  uStack_48 = 1;
  puVar1 = (undefined8 *)0x350;
  __Znwm();
  puVar1[1] = 0;
  puVar1[2] = 0;
  *puVar1 = &PTR_DAT_1109e9200;
  puStack_40 = puVar1;
  func_0x0001074698a0(puVar1 + 3,param_3);
  puVar1[3] = &PTR_DAT_1109e9250;
  puVar1[0x69] = 0;
  puStack_40 = (undefined8 *)0x0;
  func_0x0001078d7d4c(auStack_50);
  *param_1 = (long)(puVar1 + 3);
  param_1[1] = (long)puVar1;
  return auStack_50;
}



/* Entry: 1078d7cd4; end: 1078d7d4b;  */

undefined1  [12] FUN_1078d7cd4(long param_1)

{
  double dVar1;
  float fVar2;
  float fVar3;
  undefined8 uVar4;
  undefined1 auVar5 [12];
  
  fVar3 = *(float *)(param_1 + 0x1b0);
  fVar2 = *(float *)(*(long *)(param_1 + 0x1a8) + 0x74) * fVar3;
  dVar1 = *(double *)(param_1 + 0x1b8) + (double)(fVar2 + fVar2);
  uVar4 = *(undefined8 *)(*(long *)(param_1 + 0x1a8) + 0x6c);
  fVar2 = ABS((float)uVar4) * fVar3;
  fVar3 = ABS((float)((ulong)uVar4 >> 0x20)) * fVar3;
  auVar5._0_4_ = (float)(dVar1 + (double)(fVar2 + fVar2));
  auVar5._4_4_ = (float)(dVar1 + (double)(fVar3 + fVar3));
  auVar5._8_4_ = 0;
  return auVar5;
}



/* Entry: 1078d7f80; end: 1078d7fa7;  */

long FUN_1078d7f80(long param_1)

{
  if (*(long *)(param_1 + 0x10) != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 1078d834c; end: 1078d838f;  */

/* WARNING: Possible PIC construction at 0x0001078d836c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001078d8370) */
/* WARNING: Removing unreachable block (ram,0x0001078d838c) */
/* WARNING: Removing unreachable block (ram,0x0001078d8384) */
/* WARNING: Removing unreachable block (ram,0x0001078d8494) */

void FUN_1078d834c(undefined8 param_1)

{
  undefined1 uStack_51;
  undefined1 *puStack_50;
  undefined8 uStack_48;
  undefined1 auStack_38 [24];
  
  func_0x0001078d8450();
  uStack_48 = 0x1078d8370;
  puStack_50 = &stack0xfffffffffffffff0;
  func_0x0001078d83b4(auStack_38,&uStack_51,param_1);
  return;
}



/* Entry: 1078d8678; end: 1078d8737;  */

undefined8 * FUN_1078d8678(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  param_1[0x10] = &PTR_DAT_1108a5a88;
  param_1[0x16] = 0;
  *param_1 = &PTR_DAT_1108a5a38;
  param_1[2] = &PTR_DAT_1108a5a60;
  func_0x0001004567f8(param_1,&PTR_PTR_1108a5aa0,param_1 + 3);
  *param_1 = &PTR_DAT_1108a5a38;
  param_1[0x10] = &PTR_DAT_1108a5a88;
  param_1[2] = &PTR_DAT_1108a5a60;
  func_0x000100552d4c(param_1 + 3,param_2,param_3);
  return param_1;
}



/* Entry: 1078d9400; end: 1078d9773;  */

void FUN_1078d9400(undefined8 *param_1,char *param_2)

{
  char *pcVar1;
  bool bVar2;
  undefined1 *puVar3;
  code *pcVar4;
  undefined *puVar5;
  int iVar6;
  int iVar7;
  char *pcVar8;
  char cVar9;
  long lVar10;
  undefined1 *puVar11;
  char cVar12;
  undefined1 *puStack_a8;
  undefined1 *puStack_a0;
  undefined8 uStack_98;
  char acStack_90 [40];
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  cVar12 = *param_2;
  pcVar8 = param_2;
  cVar9 = cVar12;
  if (cVar12 == '\0') {
    return;
  }
  while (pcVar8 = pcVar8 + 1, (byte)(cVar9 - 0x30U) < 10) {
    cVar9 = *pcVar8;
  }
  if (cVar9 != '\0') {
    pcVar8 = param_2;
    do {
      if (*pcVar8 == '\0') {
        lVar10 = 0;
        pcVar8 = (char *)0x0;
        bVar2 = false;
        uStack_68 = 0;
        uStack_60 = 0;
        uStack_58 = 0;
        goto LAB_1078d9570;
      }
      puVar5 = &UNK_10f4344ad;
      _memchr(&UNK_10f4344ad,(long)*pcVar8,0x2e);
      pcVar8 = pcVar8 + 1;
    } while (puVar5 != (undefined *)0x0);
    puStack_a8 = (undefined1 *)0x0;
    puStack_a0 = (undefined1 *)0x0;
    uStack_98 = 0;
    while (puVar3 = puStack_a0, param_2 = param_2 + 1, cVar12 != '\0') {
      acStack_90[0] = cVar12;
      func_0x0001001e79f8(&puStack_a8,acStack_90);
      cVar12 = *param_2;
    }
    if ((ulong)((long)puStack_a0 - (long)puStack_a8) >> 0x1f == 0) {
      uStack_68 = 0;
      uStack_60 = 0;
      uStack_58 = 0;
      for (puVar11 = puStack_a8; puVar11 != puVar3; puVar11 = puVar11 + 1) {
        func_0x0001078d937c(&uStack_68,*puVar11,8);
      }
      func_0x0001078d9774(acStack_90,&UNK_10deda78c,(int)puStack_a0 - (int)puStack_a8,&uStack_68);
      func_0x0001078dbebc();
      func_0x0001078dbd20();
      func_0x000104be7d74(puVar11 + 0x10);
      func_0x000100100fec(&puStack_a8);
      return;
    }
    func_0x0001078dbd18();
    func_0x000104bd4838();
    func_0x0001078dbf40();
LAB_1078d96ec:
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x1078d96f0);
    (*pcVar4)();
  }
  lVar10 = 0;
  iVar6 = 0;
  iVar7 = 0;
  uStack_68 = 0;
  uStack_60 = 0;
  pcVar8 = param_2 + 1;
  uStack_58 = 0;
  while (cVar12 != '\0') {
    if ((byte)(cVar12 - 0x3aU) < 0xf6) {
      func_0x0001078dbd18();
      func_0x00010724664c();
      func_0x0001078dbcf8();
      func_0x0001078dbf40();
      goto LAB_1078d96ec;
    }
    iVar6 = iVar6 * 10 + (uint)(byte)(cVar12 - 0x30);
    iVar7 = iVar7 + 1;
    if (iVar7 == 3) {
      func_0x0001078d937c(&uStack_68,iVar6,10);
      iVar6 = 0;
      iVar7 = 0;
    }
    pcVar1 = pcVar8 + lVar10;
    lVar10 = lVar10 + 1;
    cVar12 = *pcVar1;
  }
  if (0 < iVar7) {
    func_0x0001078d937c(&uStack_68,iVar6,iVar7 * 3 + 1);
  }
  func_0x0001078dbe08();
  func_0x0001078dbebc();
  func_0x0001078dbd20();
LAB_1078d95f0:
  func_0x000104be7d74(pcVar8 + 0x10);
  return;
LAB_1078d9570:
  if (cVar12 == '\0') goto LAB_1078d95c8;
  puVar5 = &UNK_10f4344ad;
  _memchr(&UNK_10f4344ad,(int)cVar12,0x2e);
  if (puVar5 == (undefined *)0x0) {
    func_0x0001078dbd18();
    func_0x00010724664c();
    func_0x0001078dbcf8();
    func_0x0001078dbf40();
    goto LAB_1078d96ec;
  }
  pcVar8 = (char *)(ulong)(uint)((int)puVar5 + -0xf4344ad + (int)pcVar8 * 0x2d);
  if (bVar2) {
    func_0x0001078d937c(&uStack_68,pcVar8,0xb);
    pcVar8 = (char *)0x0;
  }
  bVar2 = !bVar2;
  cVar12 = param_2[lVar10 + 1];
  lVar10 = lVar10 + 1;
  goto LAB_1078d9570;
LAB_1078d95c8:
  if (bVar2) {
    func_0x0001078d937c(&uStack_68,pcVar8,6);
  }
  func_0x0001078dbe08();
  func_0x0001078dbebc();
  func_0x0001078dbd20();
  goto LAB_1078d95f0;
}



/* Entry: 1078dabbc; end: 1078dada7;  */

/* WARNING: Possible PIC construction at 0x0001078dae28: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001078dae40: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001078daee4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001078dae44) */
/* WARNING: Removing unreachable block (ram,0x0001078dae68) */
/* WARNING: Removing unreachable block (ram,0x0001078dae90) */
/* WARNING: Removing unreachable block (ram,0x0001078dae98) */
/* WARNING: Removing unreachable block (ram,0x0001078daec4) */
/* WARNING: Removing unreachable block (ram,0x0001078daea0) */
/* WARNING: Removing unreachable block (ram,0x0001078dae70) */
/* WARNING: Removing unreachable block (ram,0x0001078dae2c) */
/* WARNING: Removing unreachable block (ram,0x0001078daee8) */
/* WARNING: Removing unreachable block (ram,0x0001078daec8) */
/* WARNING: Removing unreachable block (ram,0x0001078daef0) */
/* WARNING: Removing unreachable block (ram,0x0001078daed0) */
/* WARNING: Removing unreachable block (ram,0x0001078dae34) */

undefined8 * FUN_1078dabbc(undefined8 *param_1,uint param_2)

{
  ulong *puVar1;
  undefined8 *puVar2;
  uint uVar3;
  undefined *puVar4;
  int iVar5;
  undefined *puVar6;
  uint uVar7;
  ulong extraout_x8;
  undefined8 extraout_x8_00;
  int iVar8;
  ulong uVar9;
  long lVar10;
  
  if (param_2 < 8) {
    lVar10 = 0;
    while( true ) {
      if (lVar10 == *(int *)((long)param_1 + 4)) {
        return param_1;
      }
      if ((long)*(int *)((long)param_1 + 4) != 0) break;
      lVar10 = lVar10 + 1;
    }
                    /* WARNING: Could not recover jumptable at 0x0001078dac84. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)((ulong)(byte)(&UNK_10deda764)[param_2] * 4 + 0x1078dac88))(0);
    return param_1;
  }
  func_0x0001078dbd18();
  uVar3 = 0xf434534;
  func_0x000107246610();
  func_0x0001078dbcf8();
  func_0x0001078dbd44();
  func_0x0001078dbd0c();
  func_0x0001078dbd3c();
  if (*(uint *)(param_1 + 1) < 4) {
    uVar7 = *(uint *)(&UNK_10deda900 + (ulong)*(uint *)(param_1 + 1) * 4) | uVar3;
    iVar8 = 10;
    do {
      uVar7 = ((int)uVar7 >> 9) * 0x537 ^ uVar7 << 1;
      iVar8 = iVar8 + -1;
    } while (iVar8 != 0);
    uVar7 = uVar7 & 1;
    func_0x0001078dbe84();
    uVar9 = (ulong)(int)uVar3;
    puVar1 = (ulong *)param_1[2];
    func_0x0001078db0d4(puVar1,param_1[3],0);
    func_0x0001078daba0();
    if (uVar7 == 0) {
      uVar9 = *puVar1 & (uVar9 ^ 0xffffffffffffffff);
    }
    else {
      func_0x0001078dbf48();
      uVar9 = extraout_x8;
    }
    *puVar1 = uVar9;
    puVar2 = (undefined8 *)param_1[5];
    func_0x0001078db0d4(puVar2,param_1[6],0);
    func_0x0001078daba0();
    func_0x0001078dbf48();
    *puVar2 = extraout_x8_00;
    return puVar2;
  }
  func_0x0001078dbd18();
  __ZNSt11logic_errorC1EPKc();
  puVar4 = PTR___ZTISt11logic_error_110346a38;
  puVar6 = PTR___ZNSt11logic_errorD1Ev_110346148;
  func_0x0001078dbd44();
  iVar8 = (int)puVar4;
  iVar5 = (int)puVar6;
  func_0x0001078dbd0c();
  func_0x0001078dbd3c();
  if ((((-1 < iVar8) && (iVar5 < *(int *)((long)param_1 + 4))) && (-1 < iVar5)) &&
     (iVar8 < *(int *)((long)param_1 + 4))) {
    puVar1 = param_1 + 2;
    func_0x0001078db0f8(puVar1,(long)iVar5);
    uVar9 = (ulong)iVar8;
    func_0x0001078db128();
    return (undefined8 *)(ulong)((uVar9 & *puVar1) != 0);
  }
  return (undefined8 *)0x0;
}



/* Entry: 1078db1d4; end: 1078db1f7;  */

int * FUN_1078db1d4(int *param_1,long param_2,ulong param_3)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  if ((ulong)((param_2 - (long)param_1) / 0x18) <= param_3) {
    func_0x0001078dbc00();
    iVar1 = param_1[1];
    if ((iVar1 < 1 || param_1[2] != iVar1) ||
       ((param_1[3] != iVar1 * 3 || param_1[4] != iVar1) || param_1[5] != iVar1)) {
      uVar2 = 0;
      uVar3 = 0;
    }
    else {
      uVar2 = (uint)(iVar1 * 4 <= *param_1 && iVar1 <= param_1[6]);
      uVar3 = 0;
      if (iVar1 * 4 <= param_1[6]) {
        uVar3 = (uint)(iVar1 <= *param_1);
      }
    }
    return (int *)(ulong)(uVar3 + uVar2);
  }
  return param_1 + param_3 * 6;
}



/* Entry: 1078db60c; end: 1078db673;  */

undefined8 FUN_1078db60c(undefined8 param_1)

{
  undefined8 uStack_28;
  
  uStack_28 = param_1;
  func_0x0001078db638(&uStack_28);
  return param_1;
}



/* Entry: 1078dbb6c; end: 1078dbb97;  */

undefined8 * FUN_1078dbb6c(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  func_0x0001078dbb98();
  return param_1;
}



/* Entry: 1078dce8c; end: 1078dd38f;  */

long FUN_1078dce8c(undefined8 *param_1,ulong param_2,uint param_3,long param_4)

{
  long *plVar1;
  uint *puVar2;
  long lVar3;
  uint uVar4;
  uint *puVar5;
  long lVar6;
  uint *puVar7;
  undefined8 *puVar8;
  uint uVar9;
  uint uVar10;
  long lVar11;
  uint uVar12;
  int iVar13;
  uint uVar14;
  ulong uVar15;
  long lVar16;
  long lVar17;
  long *plVar18;
  long lVar19;
  uint *puVar20;
  uint uVar21;
  ulong uVar22;
  
  if (param_1 == (undefined8 *)0x0) {
    return 0xb;
  }
  if (param_2 == 0) {
    return 0xb;
  }
  if ((param_3 != 0) && (param_4 == 0)) {
    return 0xb;
  }
  uVar15 = param_2;
  _strlen();
  uVar21 = (uint)uVar15;
  if (uVar21 == 0) {
    return 0xb;
  }
  uVar22 = (ulong)(uVar21 + 1);
  puVar5 = (uint *)(param_3 + uVar22 + 0x58);
  _malloc();
  puVar20 = puVar5 + 0x16;
  *(uint **)(puVar5 + 2) = puVar20;
  *puVar5 = uVar21 + 1;
  _memcpy(puVar20,param_2,uVar22);
  puVar5[4] = param_3;
  if (param_3 == 0) {
    lVar11 = 0;
  }
  else {
    lVar11 = (long)puVar20 + uVar22;
    _memcpy(lVar11,param_4,(ulong)param_3);
  }
  *(long *)(puVar5 + 6) = lVar11;
  puVar2 = puVar5 + 8;
  puVar5[0xc] = 0;
  puVar5[0xd] = 0;
  *(uint **)(puVar5 + 0x12) = puVar20;
  puVar5[0x14] = uVar21;
  puVar7 = (uint *)*param_1;
  if (puVar7 == (uint *)0x0) {
    *param_1 = puVar5;
    puVar5[10] = 0;
    puVar5[0xb] = 0;
    plVar18 = (long *)0x1;
    _calloc(1,0x40);
    *(long **)(puVar5 + 8) = plVar18;
    if (plVar18 == (long *)0x0) goto LAB_1078dd388;
    plVar18[1] = 0x500000020;
    plVar18[3] = (long)puVar2;
    plVar18[4] = 0x20;
    lVar11 = 1;
    _calloc(1,0x200);
    *plVar18 = lVar11;
    if (lVar11 == 0) goto LAB_1078dd388;
    *(undefined4 *)(plVar18 + 7) = 0xa0111fe1;
    puVar7 = puVar5;
  }
  else {
    plVar18 = *(long **)(puVar7 + 8);
    lVar11 = plVar18[3];
    lVar6 = plVar18[4];
    *(uint **)(lVar11 + 0x10) = puVar5;
    *(long *)(puVar5 + 10) = lVar11 - lVar6;
    plVar18[3] = (long)puVar2;
  }
  uVar12 = 0xfeedbeef;
  uVar9 = 0x9e3779b9;
  *(int *)(plVar18 + 2) = (int)plVar18[2] + 1;
  *(long **)(puVar5 + 8) = plVar18;
  puVar5[0x15] = 0xfeedbeef;
  if (uVar21 < 0xc) {
    uVar10 = 0x9e3779b9;
    uVar14 = uVar21;
  }
  else {
    uVar10 = 0x9e3779b9;
    do {
      iVar13 = uVar10 + (int)(char)puVar20[1] + *(char *)((long)puVar20 + 5) * 0x100 +
               *(char *)((long)puVar20 + 6) * 0x10000 +
               (uint)*(byte *)((long)puVar20 + 7) * 0x1000000;
      uVar12 = uVar12 + (int)(char)puVar20[2] + *(char *)((long)puVar20 + 9) * 0x100 +
               *(char *)((long)puVar20 + 10) * 0x10000 +
               (uint)*(byte *)((long)puVar20 + 0xb) * 0x1000000;
      uVar9 = (uVar9 + (int)(char)*puVar20 + *(char *)((long)puVar20 + 1) * 0x100 +
               *(char *)((long)puVar20 + 2) * 0x10000 +
              (uint)*(byte *)((long)puVar20 + 3) * 0x1000000) - (iVar13 + uVar12) ^ uVar12 >> 0xd;
      uVar10 = (iVar13 - uVar12) - uVar9 ^ uVar9 << 8;
      uVar12 = (uVar12 - uVar9) - uVar10 ^ uVar10 >> 0xd;
      uVar9 = (uVar9 - uVar10) - uVar12 ^ uVar12 >> 0xc;
      uVar10 = (uVar10 - uVar12) - uVar9 ^ uVar9 << 0x10;
      uVar12 = (uVar12 - uVar9) - uVar10 ^ uVar10 >> 5;
      uVar9 = (uVar9 - uVar10) - uVar12 ^ uVar12 >> 3;
      uVar10 = (uVar10 - uVar12) - uVar9 ^ uVar9 << 10;
      uVar12 = (uVar12 - uVar9) - uVar10 ^ uVar10 >> 0xf;
      puVar5[0x15] = uVar12;
      puVar20 = puVar20 + 3;
      uVar14 = (int)uVar15 - 0xc;
      uVar15 = (ulong)uVar14;
    } while (0xb < uVar14);
  }
  uVar12 = uVar12 + uVar21;
  puVar5[0x15] = uVar12;
  switch(uVar14) {
  case 0xb:
    uVar12 = uVar12 + (uint)*(byte *)((long)puVar20 + 10) * 0x1000000;
    puVar5[0x15] = uVar12;
  case 10:
    uVar12 = uVar12 + *(char *)((long)puVar20 + 9) * 0x10000;
    puVar5[0x15] = uVar12;
  case 9:
    uVar12 = uVar12 + (char)puVar20[2] * 0x100;
    puVar5[0x15] = uVar12;
  case 8:
    uVar10 = uVar10 + (uint)*(byte *)((long)puVar20 + 7) * 0x1000000;
  case 7:
    uVar10 = uVar10 + *(char *)((long)puVar20 + 6) * 0x10000;
  case 6:
    uVar10 = uVar10 + *(char *)((long)puVar20 + 5) * 0x100;
  case 5:
    uVar10 = uVar10 + (int)(char)puVar20[1];
  case 4:
    uVar9 = uVar9 + (uint)*(byte *)((long)puVar20 + 3) * 0x1000000;
  case 3:
    uVar9 = uVar9 + *(char *)((long)puVar20 + 2) * 0x10000;
  case 2:
    uVar9 = uVar9 + *(char *)((long)puVar20 + 1) * 0x100;
  case 1:
    uVar9 = uVar9 + (int)(char)*puVar20;
  }
  uVar21 = (uVar9 - uVar10) - uVar12 ^ uVar12 >> 0xd;
  uVar9 = (uVar10 - uVar12) - uVar21 ^ uVar21 << 8;
  uVar12 = (uVar12 - uVar21) - uVar9 ^ uVar9 >> 0xd;
  uVar21 = (uVar21 - uVar9) - uVar12 ^ uVar12 >> 0xc;
  uVar9 = (uVar9 - uVar12) - uVar21 ^ uVar21 << 0x10;
  uVar12 = (uVar12 - uVar21) - uVar9 ^ uVar9 >> 5;
  uVar21 = (uVar21 - uVar9) - uVar12 ^ uVar12 >> 3;
  uVar9 = (uVar9 - uVar12) - uVar21 ^ uVar21 << 10;
  uVar21 = (uVar12 - uVar21) - uVar9 ^ uVar9 >> 0xf;
  puVar5[0x15] = uVar21;
  plVar1 = (long *)(**(long **)(puVar7 + 8) +
                   (ulong)(uVar21 & (int)(*(long **)(puVar7 + 8))[1] - 1U) * 0x10);
  uVar21 = (int)plVar1[1] + 1;
  *(uint *)(plVar1 + 1) = uVar21;
  lVar11 = *plVar1;
  puVar5[0xe] = 0;
  puVar5[0xf] = 0;
  *(long *)(puVar5 + 0x10) = lVar11;
  if (lVar11 != 0) {
    *(uint **)(lVar11 + 0x18) = puVar2;
  }
  *plVar1 = (long)puVar2;
  if ((*(int *)((long)plVar1 + 0xc) * 10 + 10U <= uVar21) && (*(int *)((long)plVar18 + 0x34) != 1))
  {
    uVar21 = *(uint *)(plVar18 + 1);
    uVar12 = uVar21 * 2;
    lVar11 = (ulong)uVar12 << 4;
    _malloc();
    if (lVar11 == 0) {
LAB_1078dd388:
      plVar18 = (long *)0xffffffff;
      _exit();
      lVar11 = *plVar18;
      lVar6 = *plVar18;
      while( true ) {
        if (lVar11 == 0) {
          return 0;
        }
        lVar3 = *(long *)(lVar11 + 0x28);
        lVar16 = *(long *)(lVar11 + 0x30);
        puVar8 = *(undefined8 **)(lVar6 + 0x20);
        if (lVar3 == 0 && lVar16 == 0) break;
        lVar17 = puVar8[4];
        if (lVar11 == puVar8[3] - lVar17) {
          puVar8[3] = lVar3 + lVar17;
        }
        lVar19 = lVar16;
        if (lVar3 != 0) {
          *(long *)(lVar3 + lVar17 + 0x10) = lVar16;
          lVar19 = lVar6;
        }
        plVar18 = *(long **)(lVar19 + 0x20);
        if (*(long *)(lVar11 + 0x30) != 0) {
          *(long *)(*(long *)(lVar11 + 0x30) + plVar18[4] + 8) = lVar3;
        }
        plVar1 = (long *)(*plVar18 + (ulong)((int)plVar18[1] - 1U & *(uint *)(lVar11 + 0x54)) * 0x10
                         );
        *(int *)(plVar1 + 1) = (int)plVar1[1] + -1;
        lVar6 = *(long *)(lVar11 + 0x40);
        if (*plVar1 == lVar11 + 0x20) {
          *plVar1 = lVar6;
          lVar11 = *(long *)(lVar11 + 0x38);
        }
        else {
          lVar11 = *(long *)(lVar11 + 0x38);
        }
        if (lVar11 != 0) {
          *(long *)(lVar11 + 0x20) = lVar6;
        }
        if (lVar6 != 0) {
          *(long *)(lVar6 + 0x18) = lVar11;
        }
        *(int *)(plVar18 + 2) = (int)plVar18[2] + -1;
        _free();
        lVar11 = lVar16;
        lVar6 = lVar19;
      }
      _free(*puVar8);
      _free(*(undefined8 *)(lVar6 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdbe294. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__free_11034c310)(lVar11);
      return lVar11;
    }
    _bzero();
    uVar9 = *(int *)((long)plVar18 + 0xc) + 1;
    uVar10 = *(uint *)(plVar18 + 2) >> (ulong)(uVar9 & 0x1f);
    if ((*(uint *)(plVar18 + 2) & uVar12 - 1) != 0) {
      uVar10 = uVar10 + 1;
    }
    *(uint *)(plVar18 + 5) = uVar10;
    *(undefined4 *)((long)plVar18 + 0x2c) = 0;
    lVar6 = *plVar18;
    if (uVar21 != 0) {
      iVar13 = 0;
      uVar15 = 0;
      do {
        lVar3 = *(long *)(lVar6 + uVar15 * 0x10);
        while (lVar3 != 0) {
          lVar16 = *(long *)(lVar3 + 0x20);
          plVar1 = (long *)(lVar11 + (ulong)(*(uint *)(lVar3 + 0x34) & uVar12 - 1) * 0x10);
          uVar14 = (int)plVar1[1] + 1;
          *(uint *)(plVar1 + 1) = uVar14;
          if (uVar10 < uVar14) {
            iVar13 = iVar13 + 1;
            *(int *)((long)plVar18 + 0x2c) = iVar13;
            uVar4 = 0;
            if (uVar10 != 0) {
              uVar4 = uVar14 / uVar10;
            }
            *(uint *)((long)plVar1 + 0xc) = uVar4;
          }
          lVar17 = *plVar1;
          *(undefined8 *)(lVar3 + 0x18) = 0;
          *(long *)(lVar3 + 0x20) = lVar17;
          if (lVar17 != 0) {
            *(long *)(lVar17 + 0x18) = lVar3;
          }
          *plVar1 = lVar3;
          lVar3 = lVar16;
        }
        uVar15 = uVar15 + 1;
      } while (uVar15 != uVar21);
    }
    *(uint *)(plVar18 + 1) = uVar12;
    *(uint *)((long)plVar18 + 0xc) = uVar9;
    _free();
    plVar18 = *(long **)puVar2;
    *plVar18 = lVar11;
    if (*(uint *)((long)plVar18 + 0x2c) <= *(uint *)(plVar18 + 2) >> 1) {
      *(undefined4 *)(plVar18 + 6) = 0;
      return 0;
    }
    uVar21 = (int)plVar18[6] + 1;
    *(uint *)(plVar18 + 6) = uVar21;
    if (1 < uVar21) {
      *(undefined4 *)((long)plVar18 + 0x34) = 1;
      return 0;
    }
  }
  return 0;
}



/* Entry: 1078ddb8c; end: 1078ddbcb;  */

void FUN_1078ddb8c(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x40);
  if (*(char *)(param_1 + 0x60) == '\x01') {
    _free(*(undefined8 *)(lVar1 + 8));
  }
  _free(lVar1);
  *(undefined8 *)(param_1 + 0x40) = 0;
  return;
}



/* Entry: 1078e0a70; end: 1078e0c2b;  */

undefined8 FUN_1078e0a70(long param_1,undefined8 param_2,uint param_3,uint param_4,long *param_5)

{
  uint uVar1;
  long lVar2;
  uint uVar3;
  long lVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  float fVar8;
  
  if (param_1 == 0) {
    return 0xb;
  }
  uVar3 = (uint)param_2;
  if ((uVar3 < *(uint *)(param_1 + 0x34)) && (param_3 < *(uint *)(param_1 + 0x38))) {
    if (*(char *)(param_1 + 0x21) == '\x01') {
      uVar7 = *(uint *)(param_1 + 0x3c);
    }
    else {
      uVar7 = *(uint *)(param_1 + 0x2c) >> (ulong)(uVar3 & 0x1f);
      if (uVar7 < 2) {
        uVar7 = 1;
      }
    }
    if (param_4 < uVar7) {
      lVar2 = param_1;
      (*(code *)**(undefined8 **)(param_1 + 0x18))();
      *param_5 = lVar2;
      if (param_3 != 0) {
        lVar4 = *(long *)(param_1 + 0x18);
        fVar8 = (float)NEON_ucvtf(*(undefined4 *)(lVar4 + 0x24));
        uVar6 = (uint)((float)(*(uint *)(param_1 + 0x24) >> (ulong)(uVar3 & 0x1f)) / fVar8);
        uVar5 = *(uint *)(lVar4 + 0x2c);
        uVar7 = *(uint *)(lVar4 + 0x30);
        if (*(uint *)(lVar4 + 0x30) <= uVar6) {
          uVar7 = uVar6;
        }
        uVar7 = uVar7 * (*(uint *)(lVar4 + 0x20) >> 3);
        if ((*(byte *)(lVar4 + 0x18) >> 1 & 1) == 0) {
          uVar7 = uVar7 + (int)((float)(int)((float)uVar7 / 4.0) * 4.0 - (float)uVar7);
        }
        uVar1 = (uVar5 + (*(uint *)(param_1 + 0x2c) >> (ulong)(uVar3 & 0x1f))) - 1;
        uVar6 = 0;
        if (uVar5 != 0) {
          uVar6 = uVar1 / uVar5;
        }
        if (uVar1 < uVar5) {
          uVar6 = 1;
        }
        uVar5 = (uint)((float)(*(uint *)(param_1 + 0x28) >> (ulong)(uVar3 & 0x1f)) /
                      (float)*(uint *)(lVar4 + 0x28));
        uVar3 = *(uint *)(lVar4 + 0x34);
        if (*(uint *)(lVar4 + 0x34) <= uVar5) {
          uVar3 = uVar5;
        }
        *param_5 = lVar2 + (ulong)(uVar7 * uVar3) * (ulong)param_3 * (ulong)uVar6 *
                           (ulong)*(uint *)(param_1 + 0x3c);
      }
      if (param_4 != 0) {
        (**(code **)(*(long *)(param_1 + 8) + 0x18))(param_1,param_2);
        *param_5 = *param_5 + param_1 * (ulong)param_4;
        return 0;
      }
      return 0;
    }
  }
  return 10;
}



/* Entry: 1078e1dc4; end: 1078e1e7f;  */

void FUN_1078e1dc4(long param_1)

{
  long *plVar1;
  long lVar2;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined8 uStack_58;
  long lStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  
  if (*(long *)(param_1 + 0x80) != 0) {
    _free();
  }
  plVar1 = *(long **)(param_1 + 0xa0);
  if (plVar1 != (long *)0x0) {
    if (*plVar1 != 0) {
      _free(*plVar1);
      plVar1 = *(long **)(param_1 + 0xa0);
    }
    _free(plVar1);
  }
  lVar2 = *(long *)(param_1 + 0x18);
  uStack_48 = *(undefined8 *)(lVar2 + 0x88);
  lStack_50 = *(long *)(lVar2 + 0x80);
  uStack_38 = *(undefined8 *)(lVar2 + 0x98);
  uStack_40 = *(undefined8 *)(lVar2 + 0x90);
  uStack_30 = *(undefined8 *)(lVar2 + 0xa0);
  uStack_88 = *(undefined8 *)(lVar2 + 0x48);
  uStack_90 = *(undefined8 *)(lVar2 + 0x40);
  uStack_78 = *(undefined8 *)(lVar2 + 0x58);
  uStack_80 = *(undefined8 *)(lVar2 + 0x50);
  uStack_68 = *(undefined8 *)(lVar2 + 0x68);
  uStack_70 = *(undefined8 *)(lVar2 + 0x60);
  uStack_58 = *(undefined8 *)(lVar2 + 0x78);
  pcStack_60 = *(code **)(lVar2 + 0x70);
  if (lStack_50 != 0) {
    (*pcStack_60)(&uStack_90);
  }
  if (*(long *)(param_1 + 0x50) != 0) {
    func_0x0001078dd390();
  }
  if (*(long *)(param_1 + 0x60) != 0) {
    _free();
  }
  if (*(long *)(param_1 + 0x70) != 0) {
    _free();
  }
  _free(*(undefined8 *)(param_1 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdbe294. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__free_11034c310)(param_1);
  return;
}



/* Entry: 1078e3604; end: 1078e364b;  */

long FUN_1078e3604(void)

{
  undefined8 *puVar1;
  long unaff_x19;
  undefined8 unaff_x20;
  undefined8 unaff_x21;
  
  func_0x000107914d70();
  puVar1 = (undefined8 *)0x60;
  __Znwm();
  func_0x0001078e5270();
  func_0x000107914d7c();
  func_0x000107914d64();
  *puVar1 = unaff_x21;
  puVar1 = (undefined8 *)0x20;
  __Znwm();
  *puVar1 = &PTR_DAT_1109ea180;
  puVar1[1] = 0;
  puVar1[2] = 0;
  puVar1[3] = unaff_x20;
  *(undefined8 **)(unaff_x19 + 8) = puVar1;
  func_0x00010791329c(&stack0xffffffffffffffd8);
  return unaff_x19;
}



/* Entry: 1078e575c; end: 1078e5e33;  */

/* WARNING: Possible PIC construction at 0x0001078e57d0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001078e57f4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001078e5828: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001078e5fd0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001078e5f54: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001078e5fd4) */
/* WARNING: Removing unreachable block (ram,0x0001078e5fe8) */
/* WARNING: Removing unreachable block (ram,0x0001078e5ff4) */
/* WARNING: Removing unreachable block (ram,0x0001078e6020) */
/* WARNING: Removing unreachable block (ram,0x0001078e602c) */
/* WARNING: Removing unreachable block (ram,0x0001078e6038) */
/* WARNING: Removing unreachable block (ram,0x0001078e6044) */
/* WARNING: Removing unreachable block (ram,0x0001078e6050) */
/* WARNING: Removing unreachable block (ram,0x0001078e605c) */
/* WARNING: Removing unreachable block (ram,0x0001078e6060) */
/* WARNING: Removing unreachable block (ram,0x000107913578) */
/* WARNING: Removing unreachable block (ram,0x0001078e57f8) */
/* WARNING: Removing unreachable block (ram,0x0001078e582c) */
/* WARNING: Removing unreachable block (ram,0x0001078e5834) */
/* WARNING: Removing unreachable block (ram,0x0001078e584c) */
/* WARNING: Removing unreachable block (ram,0x0001078e59b0) */
/* WARNING: Removing unreachable block (ram,0x0001078e59c8) */
/* WARNING: Removing unreachable block (ram,0x0001078e59f4) */
/* WARNING: Removing unreachable block (ram,0x0001078e59f8) */
/* WARNING: Removing unreachable block (ram,0x0001078e5a04) */
/* WARNING: Removing unreachable block (ram,0x0001078e5a18) */
/* WARNING: Removing unreachable block (ram,0x0001078e59d0) */
/* WARNING: Removing unreachable block (ram,0x0001078e59d4) */
/* WARNING: Removing unreachable block (ram,0x0001078e59e8) */
/* WARNING: Removing unreachable block (ram,0x0001078e59f0) */
/* WARNING: Removing unreachable block (ram,0x0001078e5a28) */
/* WARNING: Removing unreachable block (ram,0x0001078e5a34) */
/* WARNING: Removing unreachable block (ram,0x0001078e5a38) */
/* WARNING: Removing unreachable block (ram,0x0001078e5a4c) */
/* WARNING: Removing unreachable block (ram,0x0001078e5a54) */
/* WARNING: Removing unreachable block (ram,0x0001078e5ab4) */
/* WARNING: Removing unreachable block (ram,0x0001078e5a58) */
/* WARNING: Removing unreachable block (ram,0x0001078e5a78) */
/* WARNING: Removing unreachable block (ram,0x0001078e5a8c) */
/* WARNING: Removing unreachable block (ram,0x0001078e5a98) */
/* WARNING: Removing unreachable block (ram,0x0001078e5aac) */
/* WARNING: Removing unreachable block (ram,0x0001078e5abc) */
/* WARNING: Removing unreachable block (ram,0x0001078e5ac8) */
/* WARNING: Removing unreachable block (ram,0x0001078e5ad8) */
/* WARNING: Removing unreachable block (ram,0x0001078e5854) */
/* WARNING: Removing unreachable block (ram,0x0001078e585c) */
/* WARNING: Removing unreachable block (ram,0x0001078e5874) */
/* WARNING: Removing unreachable block (ram,0x0001078e5880) */
/* WARNING: Removing unreachable block (ram,0x0001078e58b4) */
/* WARNING: Removing unreachable block (ram,0x0001078e58b8) */
/* WARNING: Removing unreachable block (ram,0x0001078e58c0) */
/* WARNING: Removing unreachable block (ram,0x0001078e58d4) */
/* WARNING: Removing unreachable block (ram,0x0001078e5890) */
/* WARNING: Removing unreachable block (ram,0x0001078e58a4) */
/* WARNING: Removing unreachable block (ram,0x0001078e58b0) */
/* WARNING: Removing unreachable block (ram,0x0001078e58dc) */
/* WARNING: Removing unreachable block (ram,0x0001078e58e4) */
/* WARNING: Removing unreachable block (ram,0x0001078e5944) */
/* WARNING: Removing unreachable block (ram,0x0001078e5950) */
/* WARNING: Removing unreachable block (ram,0x0001078e5960) */
/* WARNING: Removing unreachable block (ram,0x0001078e596c) */
/* WARNING: Removing unreachable block (ram,0x0001078e5ae4) */
/* WARNING: Removing unreachable block (ram,0x0001078e5aec) */
/* WARNING: Removing unreachable block (ram,0x0001078e598c) */
/* WARNING: Removing unreachable block (ram,0x0001078e5990) */
/* WARNING: Removing unreachable block (ram,0x0001078e58ec) */
/* WARNING: Removing unreachable block (ram,0x0001078e5908) */
/* WARNING: Removing unreachable block (ram,0x0001078e591c) */
/* WARNING: Removing unreachable block (ram,0x0001078e5924) */
/* WARNING: Removing unreachable block (ram,0x0001078e5938) */
/* WARNING: Removing unreachable block (ram,0x0001078e5940) */
/* WARNING: Removing unreachable block (ram,0x0001078e57d4) */
/* WARNING: Removing unreachable block (ram,0x0001078e5f58) */
/* WARNING: Removing unreachable block (ram,0x0001078e5f6c) */
/* WARNING: Removing unreachable block (ram,0x0001078e5f78) */
/* WARNING: Removing unreachable block (ram,0x0001078e5f84) */
/* WARNING: Removing unreachable block (ram,0x0001078e5f90) */
/* WARNING: Removing unreachable block (ram,0x0001078e5f9c) */
/* WARNING: Removing unreachable block (ram,0x0001078e5fa8) */
/* WARNING: Removing unreachable block (ram,0x0001078e5fac) */
/* WARNING: Removing unreachable block (ram,0x000107913ac4) */

void FUN_1078e575c(uint *param_1,uint *param_2,uint *param_3,long param_4,ulong param_5)

{
  uint uVar1;
  uint uVar2;
  uint *puVar3;
  long lVar4;
  uint **ppuVar5;
  bool bVar6;
  bool bVar7;
  uint extraout_w8;
  uint extraout_w8_00;
  uint *extraout_x8;
  uint extraout_w9;
  uint extraout_w9_00;
  long extraout_x9;
  uint extraout_w10;
  uint extraout_w10_00;
  undefined8 extraout_x10;
  ulong uVar8;
  uint uVar9;
  uint *extraout_x11;
  uint *puVar10;
  long extraout_x12;
  long lVar11;
  long extraout_x13;
  uint *puVar12;
  long extraout_x14;
  uint *puVar13;
  uint *unaff_x19;
  uint *unaff_x20;
  long lVar14;
  ulong uVar15;
  undefined1 *unaff_x29;
  undefined *unaff_x30;
  uint *puStack_b0;
  undefined1 auStack_80 [16];
  undefined1 auStack_70 [8];
  uint *puStack_68;
  
  ppuVar5 = (uint **)auStack_70;
  func_0x000107917384();
  puStack_68 = param_3;
  func_0x000107914d64();
  puVar13 = unaff_x20 + -2;
  uVar15 = (long)unaff_x20 - (long)unaff_x19 >> 3;
  switch(uVar15) {
  case 0:
  case 1:
    return;
  case 2:
    func_0x000107917174(unaff_x20[-2]);
    uVar9 = extraout_w10;
    if (extraout_w8 != extraout_w9) {
      uVar9 = (uint)(extraout_w8 < extraout_w9);
    }
    if (uVar9 != 1) {
      return;
    }
    func_0x00010791704c();
    return;
  case 3:
    unaff_x19 = unaff_x19 + 2;
    func_0x000107915b84();
    func_0x000107916224();
    puVar13 = param_3;
    goto code_r0x0001078e5e34;
  case 4:
    func_0x0001079183dc();
    param_1 = unaff_x19;
    func_0x000107916224();
    break;
  case 5:
    func_0x0001079183dc();
    param_1 = unaff_x19;
    func_0x000107916224();
    ppuVar5 = &puStack_b0;
    unaff_x29 = auStack_80;
    puStack_b0 = unaff_x20 + -4;
    func_0x000107913c7c();
    unaff_x30 = &UNK_1078e5fd4;
    break;
  default:
    if ((long)uVar15 < 0x18) {
      if ((param_5 & 1) == 0) {
        if (unaff_x19 == unaff_x20) {
          return;
        }
        puVar13 = unaff_x19 + 3;
        while (puVar3 = unaff_x19 + 2, puVar3 != unaff_x20) {
          uVar9 = *unaff_x19;
          bVar6 = unaff_x19[3] < unaff_x19[1];
          if (unaff_x19[2] != uVar9) {
            bVar6 = unaff_x19[2] < uVar9;
          }
          if (bVar6) {
            uVar1 = *puVar3;
            uVar2 = unaff_x19[3];
            puVar10 = puVar13;
            do {
              puVar12 = puVar10;
              puVar12[-1] = uVar9;
              *puVar12 = puVar12[-2];
              uVar9 = puVar12[-5];
              bVar6 = uVar2 < puVar12[-4];
              if (uVar9 != uVar1) {
                bVar6 = uVar1 < uVar9;
              }
              puVar10 = puVar12 + -2;
            } while (bVar6);
            puVar12[-3] = uVar1;
            puVar12[-2] = uVar2;
          }
          puVar13 = puVar13 + 2;
          unaff_x19 = puVar3;
        }
        return;
      }
      if (unaff_x19 == unaff_x20) {
        return;
      }
      lVar14 = 0;
      puVar13 = unaff_x19;
      do {
        puVar3 = puVar13 + 2;
        if (puVar3 == unaff_x20) {
          return;
        }
        uVar9 = *puVar13;
        bVar6 = puVar13[3] < puVar13[1];
        if (puVar13[2] != uVar9) {
          bVar6 = puVar13[2] < uVar9;
        }
        if (bVar6) {
          uVar1 = *puVar3;
          uVar2 = puVar13[3];
          lVar4 = lVar14;
          do {
            lVar11 = lVar4;
            *(uint *)((long)unaff_x19 + lVar11 + 8) = uVar9;
            *(undefined4 *)((long)unaff_x19 + lVar11 + 0xc) =
                 *(undefined4 *)((long)unaff_x19 + lVar11 + 4);
            puVar13 = unaff_x19;
            if (lVar11 == 0) goto LAB_1078e5c1c;
            uVar9 = *(uint *)((long)unaff_x19 + lVar11 + -8);
            bVar6 = uVar2 < *(uint *)((long)unaff_x19 + lVar11 + -4);
            if (uVar9 != uVar1) {
              bVar6 = uVar1 < uVar9;
            }
            lVar4 = lVar11 + -8;
          } while (bVar6);
          puVar13 = (uint *)((long)unaff_x19 + lVar11);
LAB_1078e5c1c:
          *puVar13 = uVar1;
          puVar13[1] = uVar2;
        }
        lVar14 = lVar14 + 8;
        puVar13 = puVar3;
      } while( true );
    }
    if (param_4 == 0) {
      if (unaff_x19 == unaff_x20) {
        return;
      }
      func_0x0001079169f0();
      lVar14 = 0;
      do {
        func_0x0001078e61dc();
        lVar14 = lVar14 + -1;
      } while (-1 < lVar14);
      do {
        if ((long)uVar15 < 2) {
          return;
        }
        lVar14 = 0;
        puVar13 = unaff_x19;
        do {
          func_0x0001079161b0(puVar13 + lVar14 * 2 + 2);
          if (extraout_x12 < (long)uVar15) {
            puVar13 = (uint *)(extraout_x14 + 0x10);
            uVar9 = *puVar13;
            uVar1 = *(uint *)(extraout_x14 + 8);
            bVar6 = *(uint *)(extraout_x14 + 0xc) < *(uint *)(extraout_x14 + 0x14);
            if (uVar1 != uVar9) {
              bVar6 = uVar1 < uVar9;
            }
            lVar14 = extraout_x12;
            if (!bVar6) {
              puVar13 = extraout_x8;
              lVar14 = extraout_x13;
              uVar9 = uVar1;
            }
          }
          else {
            puVar13 = extraout_x8;
            lVar14 = extraout_x13;
            uVar9 = *extraout_x8;
          }
          *extraout_x11 = uVar9;
          extraout_x11[1] = puVar13[1];
        } while (lVar14 <= extraout_x9);
        uVar9 = (uint)((ulong)extraout_x10 >> 0x20);
        if (puVar13 == unaff_x20 + -2) {
          *puVar13 = (uint)extraout_x10;
          puVar13[1] = uVar9;
        }
        else {
          *puVar13 = unaff_x20[-2];
          puVar13[1] = unaff_x20[-1];
          unaff_x20[-2] = (uint)extraout_x10;
          unaff_x20[-1] = uVar9;
          lVar14 = (long)puVar13 + (8 - (long)unaff_x19) >> 3;
          if (1 < lVar14) {
            uVar8 = lVar14 - 2U >> 1;
            puVar3 = unaff_x19 + uVar8 * 2;
            uVar9 = *puVar3;
            bVar6 = puVar3[1] < puVar13[1];
            if (uVar9 != *puVar13) {
              bVar6 = uVar9 < *puVar13;
            }
            if (bVar6) {
              uVar1 = *puVar13;
              uVar2 = puVar13[1];
              do {
                puVar10 = puVar3;
                *puVar13 = uVar9;
                puVar13[1] = puVar10[1];
                if (uVar8 == 0) break;
                uVar8 = uVar8 - 1 >> 1;
                puVar3 = unaff_x19 + uVar8 * 2;
                uVar9 = *puVar3;
                bVar6 = puVar3[1] < uVar2;
                if (uVar9 != uVar1) {
                  bVar6 = uVar9 < uVar1;
                }
                puVar13 = puVar10;
              } while (bVar6);
              *puVar10 = uVar1;
              puVar10[1] = uVar2;
            }
          }
        }
        uVar15 = uVar15 - 1;
        unaff_x20 = unaff_x20 + -2;
      } while( true );
    }
    param_1 = unaff_x19 + (uVar15 & 0xfffffffffffffffe);
    if (0x80 < uVar15) {
      param_1 = unaff_x19;
      unaff_x19 = unaff_x19 + (uVar15 & 0xfffffffffffffffe);
    }
    goto code_r0x0001078e5e34;
  }
  *(long *)((long)ppuVar5 + -0x30) = param_4;
  *(uint **)((long)ppuVar5 + -0x28) = puVar13;
  *(uint **)((long)ppuVar5 + -0x20) = unaff_x20;
  *(uint **)((long)ppuVar5 + -0x18) = unaff_x19;
  *(undefined1 **)((long)ppuVar5 + -0x10) = unaff_x29;
  *(undefined **)((long)ppuVar5 + -8) = unaff_x30;
  func_0x000107913c7c();
  unaff_x19 = param_2;
  puVar13 = param_3;
code_r0x0001078e5e34:
  uVar9 = *unaff_x19;
  uVar1 = *param_1;
  bVar6 = unaff_x19[1] < param_1[1];
  if (uVar9 != uVar1) {
    bVar6 = uVar9 < uVar1;
  }
  uVar2 = *puVar13;
  bVar7 = puVar13[1] < unaff_x19[1];
  if (uVar2 != uVar9) {
    bVar7 = uVar2 < uVar9;
  }
  if (bVar6) {
    if (bVar7) {
      *param_1 = uVar2;
      *puVar13 = uVar1;
      uVar9 = param_1[1];
      param_1[1] = puVar13[1];
    }
    else {
      *param_1 = uVar9;
      *unaff_x19 = uVar1;
      uVar1 = param_1[1];
      param_1[1] = unaff_x19[1];
      unaff_x19[1] = uVar1;
      uVar2 = *unaff_x19;
      uVar9 = *puVar13;
      bVar6 = puVar13[1] < uVar1;
      if (uVar9 != uVar2) {
        bVar6 = uVar9 < uVar2;
      }
      if (!bVar6) {
        return;
      }
      *unaff_x19 = uVar9;
      *puVar13 = uVar2;
      uVar9 = unaff_x19[1];
      unaff_x19[1] = puVar13[1];
    }
    puVar13[1] = uVar9;
  }
  else if (bVar7) {
    *unaff_x19 = uVar2;
    *puVar13 = uVar9;
    uVar9 = unaff_x19[1];
    unaff_x19[1] = puVar13[1];
    puVar13[1] = uVar9;
    func_0x000107917174(*unaff_x19);
    uVar9 = extraout_w10_00;
    if (extraout_w8_00 != extraout_w9_00) {
      uVar9 = (uint)(extraout_w8_00 < extraout_w9_00);
    }
    if (uVar9 == 1) {
      *param_1 = extraout_w8_00;
      *unaff_x19 = extraout_w9_00;
      uVar9 = param_1[1];
      param_1[1] = unaff_x19[1];
      unaff_x19[1] = uVar9;
      return;
    }
  }
  return;
}



/* Entry: 1078e63d0; end: 1078e648b;  */

void FUN_1078e63d0(long param_1)

{
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x000107914c78();
  lVar1 = *(long *)(param_1 + 8);
  while (lVar1 != unaff_x19) {
    lVar1 = lVar1 + -0x30;
    func_0x0001078e6404();
  }
  *(long *)(unaff_x20 + 8) = unaff_x19;
  return;
}



/* Entry: 1078e66a0; end: 1078e6727;  */

/* WARNING: Possible PIC construction at 0x0001078e66f0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001078e66f4) */

void FUN_1078e66a0(int param_1)

{
  undefined8 *puVar1;
  
  if (param_1 == 2) {
    puVar1 = (undefined8 *)0x8;
    ___cxa_allocate_exception();
    *puVar1 = 0;
    func_0x0001078e672c();
    ___cxa_throw();
  }
  else if (param_1 != 1) {
    return;
  }
  puVar1 = (undefined8 *)0x8;
  ___cxa_allocate_exception();
  *puVar1 = 0;
  func_0x0001078e6750();
  *puVar1 = &PTR_DAT_1109e9e80;
  return;
}



/* Entry: 1078e67b4; end: 1078e67c7;  */

void FUN_1078e67b4(void)

{
  __ZNSt8bad_castD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1078e8ce8; end: 1078e8d97;  */

void FUN_1078e8ce8(long param_1)

{
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x000107914c78();
  lVar1 = *(long *)(param_1 + 8);
  while (lVar1 != unaff_x19) {
    lVar1 = lVar1 + -0x58;
    func_0x0001078e8d1c();
  }
  *(long *)(unaff_x20 + 8) = unaff_x19;
  return;
}



/* Entry: 1078e97f0; end: 1078e97fb;  */

void FUN_1078e97f0(ulong param_1)

{
  long extraout_x8;
  long extraout_x9;
  long lVar1;
  long *unaff_x19;
  
  func_0x000107913ad0();
  if (param_1 >> 0x3c == 0) {
    __Znwm(param_1 << 4);
    return;
  }
  func_0x000104bd35f4();
  func_0x000107915b9c();
  lVar1 = extraout_x9;
  while (lVar1 != extraout_x8) {
    lVar1 = lVar1 + -0x10;
    unaff_x19[2] = lVar1;
  }
  if (*unaff_x19 != 0) {
    __ZdlPv();
  }
  return;
}



/* Entry: 1078e9b34; end: 1078e9be3;  */

/* WARNING: Possible PIC construction at 0x0001078e9bdc: Changing call to branch */

ulong FUN_1078e9b34(ulong param_1)

{
  undefined1 in_ZR;
  undefined1 in_CY;
  ulong extraout_x8;
  long unaff_x19;
  long unaff_x20;
  long unaff_x22;
  ulong unaff_x24;
  long lVar1;
  
  func_0x000107917a38();
  func_0x0001079145b8();
  if ((bool)in_CY) {
    func_0x0001079171d4(0x222222222222222);
    func_0x0001079146e8();
    if ((bool)in_CY && !(bool)in_ZR) {
code_r0x0001078e9be4:
      func_0x000107913ad0();
      if ((*(long *)(param_1 + 8) != 0) && (*(ulong *)(param_1 + 0x10) < *(ulong *)(param_1 + 0x18))
         ) {
        return (ulong)(*(long *)(param_1 + 0x40) == 0);
      }
      return 1;
    }
    func_0x000107913dbc();
    func_0x000107916a48();
    if (unaff_x24 == 0) {
      param_1 = 0;
    }
    else {
      if (extraout_x8 < unaff_x24) {
        func_0x000104bd35f4();
        goto code_r0x0001078e9be4;
      }
      func_0x000107917be8();
    }
    lVar1 = param_1 + unaff_x22;
    func_0x000107914eac();
    func_0x000107916ebc();
    lVar1 = lVar1 + 0x78;
    func_0x0001079138bc(0xffffffffffffff88);
    func_0x000107916e4c();
    if (unaff_x20 != 0) {
      func_0x000107914d94();
    }
  }
  else {
    func_0x000107915248();
    func_0x000107916ebc();
    lVar1 = unaff_x22 + 0x78;
  }
  *(long *)(unaff_x19 + 8) = lVar1;
  return param_1;
}



/* Entry: 1078ea444; end: 1078ea4e7;  */

void FUN_1078ea444(undefined8 param_1,undefined8 param_2)

{
  undefined1 in_ZR;
  undefined8 auStack_e0 [2];
  undefined8 uStack_d0;
  
  func_0x0001079142d0();
  func_0x000107916450();
  func_0x000107913364();
  func_0x000107913b24();
  func_0x0001078eb44c();
  func_0x000107915ec8();
  if (!(bool)in_ZR) {
    func_0x000107915854();
    auStack_e0[0] = param_1;
    uStack_d0 = param_2;
    func_0x000107915350();
    func_0x0001078eb610();
    func_0x000107915350();
    func_0x000107914d88();
    func_0x0001078eb4a4();
    func_0x0001079149c4(auStack_e0);
    FUN_1078eb56c();
    func_0x000107915350();
    func_0x000107913cc4();
    FUN_1078eb56c();
  }
  func_0x000107915ed4();
  func_0x000107914d88();
  func_0x0001078eb4a4();
  func_0x0001079172ac();
  func_0x000107914d88();
  func_0x0001078eb4a4();
  func_0x0001079154b4();
  func_0x000107915384();
  func_0x0001079154e4();
  return;
}



/* Entry: 1078eb56c; end: 1078eb60f;  */

/* WARNING: Possible PIC construction at 0x0001078eb9bc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001078ebad8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001078ebac8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001078eba8c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001078eba94: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001078eba34: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001078eba3c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001078eba98) */
/* WARNING: Removing unreachable block (ram,0x0001078eba90) */
/* WARNING: Removing unreachable block (ram,0x0001078ebadc) */
/* WARNING: Removing unreachable block (ram,0x0001078eb9c0) */
/* WARNING: Removing unreachable block (ram,0x0001078eba38) */

void FUN_1078eb56c(undefined8 param_1,long *param_2,long *param_3,ulong param_4)

{
  undefined1 uVar1;
  bool bVar2;
  undefined1 uVar3;
  long extraout_x8;
  long lVar4;
  long extraout_x8_00;
  long extraout_x9;
  long extraout_x9_00;
  long *unaff_x20;
  ulong unaff_x21;
  long unaff_x22;
  long lVar5;
  
  uVar3 = param_2[1] - *param_2 == 0x80;
  if (((ulong)(param_2[1] - *param_2) < 0x80) || (uVar3 = param_4 == 99, 99 < param_4))
  goto code_r0x0001078eb8f8;
  uVar1 = 0x78 < (ulong)(param_3[1] - *param_3);
  uVar3 = param_3[1] - *param_3 == 0x79;
  if (!(bool)uVar1) goto code_r0x0001078eb8f8;
  func_0x0001079188cc();
  func_0x0001079136f4();
  func_0x0001079153e4();
  func_0x0001079132d8();
  func_0x000107913724();
  func_0x0001078eb44c();
  func_0x000107913740();
  func_0x0001078eb44c();
  func_0x0001079155d4();
  if (!(bool)uVar3) {
    func_0x0001079158b4();
    if ((bool)uVar1) {
      uVar1 = (long *)0x62 < unaff_x20;
      uVar3 = unaff_x20 == (long *)0x63;
      if ((unaff_x20 < (long *)0x64) && (func_0x000107913f00(), (bool)uVar1)) {
        func_0x000107914c84();
        func_0x0001078ebb4c();
        func_0x000107915ee0();
        func_0x0001078eb610();
        func_0x00010791354c();
        func_0x0001078ebb44();
        func_0x000107913ef0();
        if (((bool)uVar1) &&
           ((func_0x000107913ee0(), (bool)uVar1 &&
            (uVar3 = unaff_x20 == (long *)0x63, unaff_x20 < (long *)0x64)))) {
          uVar1 = 0x78 < unaff_x21;
          uVar3 = unaff_x21 == 0x79;
          if ((bool)uVar1) {
            func_0x000107914c84();
            func_0x0001078ebb4c();
            func_0x000107913880();
            func_0x0001078ebb44();
            func_0x000107913894();
            func_0x0001078ebb44();
            goto LAB_1078eba40;
          }
        }
        func_0x000107913f20();
        goto code_r0x0001078eb8f8;
      }
    }
    func_0x000107913f30();
    goto code_r0x0001078eb8f8;
  }
LAB_1078eba40:
  func_0x0001079155c8();
  if ((bool)uVar3) {
    func_0x0001079181f0();
    uVar3 = unaff_x21 == 0x80;
    if (0x7f < unaff_x21) {
LAB_1078ebaa8:
      uVar1 = (long *)0x62 < unaff_x20;
      uVar3 = unaff_x20 == (long *)0x63;
      if ((unaff_x20 < (long *)0x64) && (func_0x000107913ea0(), (bool)uVar1)) {
        func_0x0001079139c4();
        func_0x0001078ebb44();
        func_0x000107913e90();
        if ((bool)uVar1) {
          bVar2 = (long *)0x62 < unaff_x20;
          uVar3 = unaff_x20 == (long *)0x63;
          if ((unaff_x20 < (long *)0x64) && (func_0x000107913e80(), bVar2)) {
            func_0x00010791386c(&stack0x000000b0);
            func_0x0001078ebb44();
            func_0x00010791502c();
            func_0x000107915070();
            func_0x000107915008();
            func_0x0001079150b0();
            func_0x00010791508c();
            func_0x000107915094();
            return;
          }
        }
        func_0x000107913eb0();
        goto code_r0x0001078eb8f8;
      }
    }
    func_0x0001079146f8();
  }
  else {
    func_0x0001079158a8();
    if (((bool)uVar1) && (func_0x000107913ed0(), (bool)uVar1)) {
      bVar2 = (long *)0x62 < unaff_x20;
      uVar3 = unaff_x20 == (long *)0x63;
      if ((unaff_x20 < (long *)0x64) && (func_0x000107914e34(), bVar2)) {
        func_0x000107915ee0();
        func_0x0001078ebb4c();
        func_0x000107913a34();
        func_0x0001078ebb44();
        func_0x000107913650();
        func_0x0001078ebb44();
        goto LAB_1078ebaa8;
      }
    }
    func_0x000107914708();
  }
code_r0x0001078eb8f8:
  func_0x000107915c10();
  if ((!(bool)uVar3) && (func_0x0001079143ac(), !(bool)uVar3)) {
    func_0x00010791589c();
    lVar4 = extraout_x8;
    lVar5 = extraout_x9;
    while (unaff_x22 != lVar5) {
      lVar5 = *unaff_x20;
      while (lVar5 != lVar4) {
        func_0x00010791415c();
        func_0x0001078ea4e8();
        lVar4 = unaff_x20[1];
      }
      func_0x000107915c04();
      lVar4 = extraout_x8_00;
      lVar5 = extraout_x9_00;
    }
  }
  return;
}



/* Entry: 1078eb970; end: 1078ebb43;  */

void FUN_1078eb970(void)

{
  undefined1 in_ZR;
  undefined1 in_CY;
  bool bVar1;
  undefined1 uVar2;
  ulong unaff_x20;
  ulong unaff_x21;
  
  func_0x0001079188cc();
  func_0x0001079136f4();
  func_0x0001079153e4();
  func_0x0001079132d8();
  func_0x000107913724();
  func_0x0001078eb44c();
  func_0x000107913740();
  func_0x0001078eb44c();
  func_0x0001079155d4();
  if (!(bool)in_ZR) {
    func_0x0001079158b4();
    uVar2 = 0;
    if ((bool)in_CY) {
      uVar2 = 0x62 < unaff_x20;
      in_ZR = unaff_x20 == 99;
      if ((99 < unaff_x20) || (func_0x000107913f00(), !(bool)uVar2)) goto LAB_1078eb9b8;
      func_0x000107914c84();
      func_0x0001078ebb4c();
      func_0x000107915ee0();
      func_0x0001078eb610();
      func_0x00010791354c();
      func_0x0001078ebb44();
    }
    else {
LAB_1078eb9b8:
      func_0x000107913f30();
      func_0x0001078eb8f8();
    }
    func_0x000107913ef0();
    in_CY = false;
    if (((bool)uVar2) && (func_0x000107913ee0(), in_CY = false, (bool)uVar2)) {
      in_CY = 0x62 < unaff_x20;
      in_ZR = unaff_x20 == 99;
      if (unaff_x20 < 100) {
        in_CY = 0x78 < unaff_x21;
        in_ZR = unaff_x21 == 0x79;
        if ((bool)in_CY) {
          func_0x000107914c84();
          func_0x0001078ebb4c();
          func_0x000107913880();
          func_0x0001078ebb44();
          func_0x000107913894();
          func_0x0001078ebb44();
          goto LAB_1078eba40;
        }
      }
    }
    func_0x000107913f20();
    func_0x0001078eb8f8();
    func_0x000107913f10();
    func_0x0001078eb8f8();
  }
LAB_1078eba40:
  func_0x0001079155c8();
  if ((bool)in_ZR) {
    func_0x0001079181f0();
LAB_1078ebaa0:
    uVar2 = 0;
    if (0x7f < unaff_x21) goto LAB_1078ebaa8;
  }
  else {
    func_0x0001079158a8();
    if ((((!(bool)in_CY) || (func_0x000107913ed0(), !(bool)in_CY)) ||
        (bVar1 = 0x62 < unaff_x20, 99 < unaff_x20)) || (func_0x000107914e34(), !bVar1)) {
      func_0x000107914708();
      func_0x0001078eb8f8();
      func_0x000107913ec0();
      func_0x0001078eb8f8();
      goto LAB_1078ebaa0;
    }
    func_0x000107915ee0();
    func_0x0001078ebb4c();
    func_0x000107913a34();
    func_0x0001078ebb44();
    func_0x000107913650();
    func_0x0001078ebb44();
LAB_1078ebaa8:
    uVar2 = 0x62 < unaff_x20;
    if ((unaff_x20 < 100) && (func_0x000107913ea0(), (bool)uVar2)) {
      func_0x0001079139c4();
      func_0x0001078ebb44();
      goto LAB_1078ebacc;
    }
  }
  func_0x0001079146f8();
  func_0x0001078eb8f8();
LAB_1078ebacc:
  func_0x000107913e90();
  if ((((bool)uVar2) && (bVar1 = 0x62 < unaff_x20, unaff_x20 < 100)) &&
     (func_0x000107913e80(), bVar1)) {
    func_0x00010791386c(&stack0x000000b0);
    func_0x0001078ebb44();
  }
  else {
    func_0x000107913eb0();
    func_0x0001078eb8f8();
  }
  func_0x00010791502c();
  func_0x000107915070();
  func_0x000107915008();
  func_0x0001079150b0();
  func_0x00010791508c();
  func_0x000107915094();
  return;
}



/* Entry: 1078ebe3c; end: 1078ebe8f;  */

void FUN_1078ebe3c(undefined4 *param_1)

{
  *param_1 = 0;
  *(undefined8 *)(param_1 + 4) = 0xffffffffffffffff;
  *(undefined8 *)(param_1 + 2) = 0xffffffffffffffff;
  *(undefined8 *)(param_1 + 8) = 0xffffffffffffffff;
  *(undefined8 *)(param_1 + 6) = 0xffffffffffffffff;
  *(undefined8 *)(param_1 + 10) = 0xffffffffffffffff;
  *(undefined8 *)(param_1 + 0xe) = 1;
  *(undefined8 *)(param_1 + 0xc) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x12) = 0;
  *(undefined8 *)(param_1 + 0x14) = 0xffffffffffffffff;
  *(undefined8 *)(param_1 + 0x16) = 0xffffffffffffffff;
  *(undefined8 *)(param_1 + 0x18) = 0xffffffffffffffff;
  *(undefined2 *)(param_1 + 0x1a) = 0x101;
  *(undefined8 *)(param_1 + 0x1c) = 0;
  *(undefined8 *)(param_1 + 0x1e) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0xffffffffffffffff;
  *(undefined8 *)(param_1 + 0x22) = 0xffffffffffffffff;
  *(undefined8 *)(param_1 + 0x24) = 0xffffffffffffffff;
  *(undefined1 *)(param_1 + 0x26) = 0;
  param_1[0x28] = 0;
  *(undefined2 *)(param_1 + 0x29) = 0;
  return;
}



/* Entry: 1078ec348; end: 1078ec477;  */

/* WARNING: Possible PIC construction at 0x0001078ec3b4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001078ec60c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001078ec654: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001078ec3fc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001078ec658) */
/* WARNING: Removing unreachable block (ram,0x0001078ec610) */
/* WARNING: Removing unreachable block (ram,0x0001078ec3b8) */
/* WARNING: Removing unreachable block (ram,0x0001078ec400) */
/* WARNING: Removing unreachable block (ram,0x0001078ec41c) */
/* WARNING: Removing unreachable block (ram,0x0001078ec464) */
/* WARNING: Removing unreachable block (ram,0x00010791595c) */

ulong * FUN_1078ec348(ulong param_1,undefined8 param_2,ulong *param_3,long param_4,long param_5,
                     long param_6,long param_7,ulong *param_8)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  ulong *puVar14;
  char cVar15;
  undefined1 in_ZR;
  bool bVar16;
  char cVar17;
  bool bVar18;
  bool bVar19;
  bool bVar20;
  bool bVar21;
  undefined1 uVar22;
  long lVar23;
  long lVar24;
  undefined8 *puVar25;
  ulong *puVar26;
  ulong *puVar27;
  long lVar28;
  long lVar29;
  undefined1 uVar30;
  uint uVar31;
  uint extraout_w8;
  uint uVar32;
  uint uVar33;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  undefined8 extraout_x8_01;
  ulong *unaff_x19;
  uint uVar34;
  uint uVar35;
  ulong uVar36;
  undefined1 *unaff_x29;
  undefined1 *puVar37;
  undefined *unaff_x30;
  undefined *puVar38;
  double dVar39;
  undefined8 in_register_00005008;
  double dVar40;
  double dVar41;
  ulong uStack_270;
  undefined8 uStack_268;
  ulong *puStack_258;
  long lStack_250;
  uint uStack_248;
  uint uStack_244;
  long lStack_240;
  long lStack_238;
  undefined8 uStack_230;
  long lStack_220;
  long lStack_218;
  long lStack_200;
  long lStack_1f8;
  undefined8 uStack_1f0;
  ulong uStack_1e0;
  long lStack_1d8;
  ulong uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  ulong uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined1 uStack_170;
  ulong uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined1 uStack_138;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_98;
  long lStack_80;
  long lStack_78;
  ulong auStack_68 [6];
  undefined8 uStack_38;
  
  puVar14 = (ulong *)&lStack_80;
  puVar37 = &stack0xfffffffffffffff0;
  puVar27 = param_3;
  lVar28 = param_7;
  func_0x000107913c90();
  lStack_80 = param_4 - param_5;
  lStack_78 = param_6 - param_5;
  uStack_38 = extraout_x8_00;
  func_0x0001078ec2fc(&lStack_80);
  if ((-1 < lStack_80) && (in_ZR = lStack_80 == lStack_78, lStack_80 <= lStack_78)) {
    func_0x0001078ec2c4();
    *unaff_x19 = 1;
    uVar36 = *param_3;
    unaff_x19[2] = param_3[1];
    unaff_x19[1] = uVar36;
    puVar26 = auStack_68;
    if ((int)param_7 == 0) {
      puVar38 = (undefined *)0x1078ec400;
    }
    else {
      puVar38 = (undefined *)0x1078ec3b8;
      puVar14 = (ulong *)&lStack_80;
    }
    goto code_r0x0001078ec930;
  }
  func_0x000107913564(uStack_38);
  if ((bool)in_ZR) goto LAB_1078ebf8c;
  ___stack_chk_fail();
  unaff_x30 = &UNK_1078ec478;
  func_0x000107915f10();
  puVar14 = &uStack_270;
  lVar23 = param_5;
  lVar24 = param_6;
  lVar29 = lVar28;
  puVar26 = param_8;
  puStack_258 = puVar27;
  lStack_250 = param_4;
  func_0x000107913c90();
  uStack_1e0 = lVar23 - lVar29;
  lStack_1d8 = (long)puVar26 - lVar29;
  uStack_98 = extraout_x8_01;
  func_0x0001078ec2fc(&uStack_1e0);
  lStack_200 = param_6 - lVar28;
  lStack_1f8 = (long)puVar26 - lVar29;
  func_0x0001078ec2fc(&lStack_200);
  lStack_220 = lVar28 - param_5;
  lStack_218 = lVar24 - lVar23;
  func_0x0001078ec2fc(&lStack_220);
  lStack_240 = (long)param_8 - param_5;
  lStack_238 = lVar24 - lVar23;
  func_0x0001078ec2fc(&lStack_240);
  lVar23 = param_5;
  func_0x000107917c4c();
  param_7 = param_6;
  func_0x000107917c4c();
  lVar24 = lVar28;
  func_0x000107917c98();
  uStack_244 = (uint)lVar24;
  puVar26 = param_8;
  func_0x000107917c98();
  uStack_248 = (uint)puVar26;
  in_register_00005008 = 1;
  param_1 = 0;
  uVar35 = (uint)lVar23;
  uVar31 = uVar35 - 1;
  uVar36 = (ulong)uVar31;
  if (uVar31 == 0) {
code_r0x0001078ec558:
    uStack_268 = 1;
    uStack_270 = 0;
    lStack_1d8 = 1;
    puVar26 = &uStack_1e0;
    uStack_1e0 = param_1;
    func_0x0001078ec2fc();
    param_1 = uStack_270;
    in_register_00005008 = uStack_268;
    func_0x000107917f0c();
  }
  else if (uVar35 == 3) {
    param_1 = 1;
    goto code_r0x0001078ec558;
  }
  uVar34 = (uint)param_7;
  uVar5 = uVar34 - 1;
  if (uVar34 == 1) {
    lStack_200 = 0;
code_r0x0001078ec598:
    lStack_1f8 = 1;
    func_0x0001078ec2fc(&lStack_200);
    func_0x000107917f0c(1);
code_r0x0001078ec5b0:
    uVar32 = (uint)(param_5 < param_6);
    if (param_6 < param_5) {
      uVar32 = 0xffffffff;
    }
    uVar33 = (uint)(lVar28 < (long)param_8);
    if ((long)param_8 < lVar28) {
      uVar33 = 0xffffffff;
    }
    puVar26 = &uStack_1c8;
    func_0x0001078ec2c4();
    uVar6 = uStack_248;
    uStack_c8 = 1;
    uStack_d0 = 0;
    uStack_c0 = 0;
    uStack_b8 = 0;
    uStack_b0 = 1;
    uStack_a8 = 0;
    if (uVar31 < 3) {
      uStack_1b8 = ((undefined8 *)*puStack_258)[1];
      uStack_1c0 = *(undefined8 *)*puStack_258;
      puVar26 = &uStack_1a0;
      puVar38 = &UNK_1078ec610;
      puVar14 = &uStack_270;
      puVar37 = &stack0xffffffffffffffd0;
      goto code_r0x0001078ec930;
    }
    if (uStack_244 == 2) {
      func_0x000107915830(&uStack_1c8);
      puVar38 = &UNK_1078ec658;
      puVar14 = &uStack_270;
      puVar37 = &stack0xffffffffffffffd0;
      goto code_r0x0001078ec930;
    }
    if (uVar5 < 3) {
      func_0x000107915830(&uStack_1c8);
      func_0x0001078ec9e8();
      *(undefined1 *)(uVar36 + 0x58) = 1;
      *(undefined8 *)(uVar36 + 0x30) = uStack_e8;
      *(undefined8 *)(uVar36 + 0x28) = uStack_f0;
      *(undefined8 *)(uVar36 + 0x38) = uStack_e0;
      *(long *)(uVar36 + 0x48) = lStack_1f8;
      *(long *)(uVar36 + 0x40) = lStack_200;
      *(undefined8 *)(uVar36 + 0x50) = uStack_1f0;
      func_0x0001078ec9e8(&uStack_f0);
      uStack_c8 = uStack_e8;
      uStack_d0 = uStack_f0;
      uStack_c0 = uStack_e0;
    }
    uVar31 = (uint)(uVar5 < 3);
    if (uVar6 == 2 && uVar31 < 2) {
      func_0x000107915830(&uStack_1c8);
      func_0x0001078ec9e8();
      *(undefined1 *)(uVar36 + 0x58) = 1;
      *(long *)(uVar36 + 0x30) = lStack_238;
      *(long *)(uVar36 + 0x28) = lStack_240;
      func_0x000107915c64(uStack_230);
    }
    if (uVar31 == 2) {
      puVar25 = &uStack_b8;
      func_0x0001078eca54(puVar25,&uStack_d0);
      uVar13 = uStack_178;
      uVar12 = uStack_180;
      uVar11 = uStack_188;
      uVar10 = uStack_190;
      uVar9 = uStack_198;
      uVar36 = uStack_1a0;
      uVar8 = uStack_1b8;
      uVar7 = uStack_1c0;
      if ((int)puVar25 != 0) {
        uStack_198 = uStack_160;
        uStack_1a0 = uStack_168;
        uStack_188 = uStack_150;
        uStack_190 = uStack_158;
        uStack_178 = uStack_140;
        uStack_180 = uStack_148;
        uStack_170 = uStack_138;
        uStack_150 = uVar11;
        uStack_158 = uVar10;
        uStack_140 = uVar13;
        uStack_148 = uVar12;
        uStack_160 = uVar9;
        uStack_168 = uVar36;
        uStack_e8 = uStack_1b8;
        uStack_f0 = uStack_1c0;
        uStack_1b8 = uStack_1a8;
        uStack_1c0 = uStack_1b0;
        uStack_1a8 = uVar8;
        uStack_1b0 = uVar7;
      }
    }
    uVar1 = uVar6 & 0xfffffffd;
    iVar3 = -(uint)(uVar1 != 1);
    bVar18 = uStack_244 - 4 < 0xfffffffd;
    bVar20 = (uStack_244 & 0xfffffffd) != 1;
    bVar16 = bVar18;
    if (uVar6 == 2) {
      iVar3 = 1;
      bVar16 = 0xfffffffc < uStack_244 - 4 && bVar20;
    }
    uVar2 = uVar34 & 0xfffffffd;
    cVar17 = !bVar20 && !bVar18;
    if (uVar1 == 1) {
      bVar16 = (bool)cVar17;
    }
    if (uVar1 == 1 && uVar6 - 1 < 3) {
      cVar17 = bVar16 + '\x01';
    }
    iVar4 = -(uint)(uVar2 != 1);
    bVar19 = uVar35 - 4 < 0xfffffffd;
    bVar21 = (uVar35 & 0xfffffffd) != 1;
    bVar20 = bVar19;
    if (uVar34 == 2) {
      iVar4 = 1;
      bVar20 = 0xfffffffc < uVar35 - 4 && bVar21;
    }
    cVar15 = !bVar21 && !bVar19;
    if (uVar2 == 1) {
      bVar20 = (bool)cVar15;
    }
    if (uVar2 == 1 && uVar5 < 3) {
      cVar15 = bVar20 + '\x01';
    }
    uStack_1c8 = (ulong)uVar31;
    puVar26 = (ulong *)0x63;
    *(undefined1 *)(unaff_x19 + 0x13) = 99;
    *(bool *)((long)unaff_x19 + 0x99) = uVar32 != uVar33;
    *(undefined8 *)((long)unaff_x19 + 0xb4) = 0;
    *(undefined8 *)((long)unaff_x19 + 0xac) = 0;
    *(undefined8 *)((long)unaff_x19 + 0xa4) = 0;
    *(undefined8 *)((long)unaff_x19 + 0x9c) = 0;
    *(int *)((long)unaff_x19 + 0xbc) = iVar4;
    *(int *)(unaff_x19 + 0x18) = iVar3;
    if (2 < uVar5) {
      bVar19 = bVar20 == false;
    }
    if (2 < uVar6 - 1) {
      bVar18 = bVar16 == false;
    }
    if (((cVar15 == '\x01' && cVar17 == '\x01') && (bVar19)) && (bVar18)) {
      if (uVar32 == uVar33) {
        uVar30 = 0x61;
        uVar22 = true;
      }
      else {
        uVar22 = iVar4 == 0;
        uVar30 = 0x74;
        if (!(bool)uVar22) {
          uVar30 = 0x66;
        }
      }
code_r0x0001078ec908:
      *(undefined1 *)(unaff_x19 + 0x13) = uVar30;
    }
    else {
      uVar22 = cVar15 == '\x02' && cVar17 == '\x02';
      if (cVar15 == '\x02' && cVar17 == '\x02') {
        uVar30 = 0x65;
        goto code_r0x0001078ec908;
      }
    }
    func_0x000107917f58(99,&uStack_1c8);
    func_0x000107913564(uStack_98);
    if ((bool)uVar22) {
      return puVar26;
    }
  }
  else {
    if (uVar34 == 3) {
      lStack_200 = 1;
      goto code_r0x0001078ec598;
    }
    bVar16 = false;
    if ((uVar35 != 0 || uVar34 != 0) &&
       (bVar16 = 3 < uVar35 && uVar34 == 4, 3 >= uVar35 || uVar34 < 4)) goto code_r0x0001078ec5b0;
    func_0x000107913564(uStack_98);
    if (bVar16) {
      register0x00000008 = (BADSPACEBASE *)&stack0xffffffffffffffe0;
      unaff_x29 = puVar37;
LAB_1078ebf8c:
      uVar22 = 1;
      *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
      *(undefined **)((long)register0x00000008 + -8) = unaff_x30;
      func_0x000107913ca4();
      *(undefined8 *)((long)register0x00000008 + -0x18) = extraout_x8;
      func_0x0001078ec2c4();
      func_0x000107916388();
      *(undefined8 *)((long)unaff_x19 + 0xa2) = in_register_00005008;
      *(ulong *)((long)unaff_x19 + 0x9a) = param_1;
      *(undefined8 *)((long)register0x00000008 + -0x20) = 0;
      func_0x000107918104(100);
      func_0x000107913564(*(undefined8 *)((long)register0x00000008 + -0x18));
      if ((bool)uVar22) {
        return unaff_x19;
      }
      ___stack_chk_fail();
      *(undefined1 **)((long)register0x00000008 + -0x60) =
           (undefined1 *)((long)register0x00000008 + -0x10);
      *(undefined **)((long)register0x00000008 + -0x58) = &UNK_1078ebfd0;
      dVar39 = (double)(long)unaff_x19;
      dVar40 = (double)(long)puVar27;
      dVar41 = (double)param_4;
      func_0x000107917da8();
      cVar17 = NAN(dVar39);
      uVar22 = dVar39 == 0.0;
      cVar15 = dVar39 < 0.0;
      if (!(bool)uVar22) {
        func_0x000107915fcc();
        if (cVar15 == cVar17) {
          uVar31 = 0xffffffff;
          if (0.0 < dVar39) {
            uVar31 = 1;
          }
          return (ulong *)(ulong)uVar31;
        }
        func_0x000107914b3c();
        uVar31 = extraout_w8;
        if (!(bool)uVar22 && cVar15 == cVar17) {
          uVar31 = 1;
        }
        if (dVar40 < dVar41) {
          return (ulong *)(ulong)uVar31;
        }
      }
      return (ulong *)0x0;
    }
  }
  puVar38 = &SUB_1078ec930;
  ___stack_chk_fail();
  puVar37 = &stack0xffffffffffffffd0;
code_r0x0001078ec930:
  *(long *)((long)puVar14 + -0x20) = param_7;
  *(ulong **)((long)puVar14 + -0x18) = unaff_x19;
  *(undefined1 **)((long)puVar14 + -0x10) = puVar37;
  *(undefined **)((long)puVar14 + -8) = puVar38;
  puVar14 = puVar26;
  if (((bRam0000000113726a70 & 1) == 0) &&
     (func_0x000107917fa8(), puVar14 = unaff_x19, (int)puVar26 != 0)) {
    uRam0000000113726b38 = 1;
    uRam0000000113726b30 = 0;
    func_0x0001078ec2fc();
    ___cxa_guard_release(0x113726a70);
  }
  func_0x0001079184cc(0x113726b30);
  return puVar14;
}



/* Entry: 1078ecd44; end: 1078ecd47;  */

long FUN_1078ecd44(long param_1)

{
  func_0x0001053010fc(param_1 + 0x18);
  __ZNSt12domain_errorD2Ev(param_1 + 8);
  return param_1;
}



/* Entry: 1078ece3c; end: 1078ecea7;  */

void FUN_1078ece3c(undefined8 *param_1,long param_2)

{
  undefined8 extraout_x8;
  undefined8 *unaff_x19;
  long unaff_x20;
  
  func_0x000107914d64();
  func_0x00010791751c();
  *param_1 = extraout_x8;
  func_0x0001078ecd48(param_1 + 1,param_2 + 8);
  func_0x000105301370(param_1 + 3,unaff_x20 + 0x18);
  *unaff_x19 = &PTR_DAT_1109e9f58;
  unaff_x19[1] = &PTR_DAT_1109e9f88;
  unaff_x19[3] = &PTR_DAT_1109e9fb0;
  return;
}



/* Entry: 1078ed2f0; end: 1078ed2fb;  */

void FUN_1078ed2f0(void)

{
  bool bVar1;
  undefined *puVar2;
  int extraout_w8;
  long unaff_x20;
  undefined8 unaff_x23;
  undefined8 unaff_x24;
  undefined8 unaff_x29;
  undefined8 unaff_x30;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 in_stack_00000000;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined1 *in_stack_00000060;
  undefined *in_stack_00000068;
  
  func_0x000107913ad0();
  puVar2 = &UNK_1078ed2fc;
  func_0x0001079189a8();
  in_stack_00000060 = &stack0xfffffffffffffff0;
  in_stack_00000068 = puVar2;
  func_0x000107914b5c();
  func_0x000107915818();
  for (; bVar1 = unaff_x20 == 8, !bVar1; unaff_x20 = unaff_x20 + 4) {
    func_0x00010791784c();
    uVar3 = in_stack_00000000;
    uVar4 = in_stack_00000008;
    if ((bVar1) || (uVar3 = unaff_x29, uVar4 = unaff_x30, extraout_w8 == 1)) {
      in_stack_00000010 = uVar3;
      in_stack_00000018 = uVar4;
      func_0x0001078ec2fc(&stack0x00000010);
      func_0x000107916268();
    }
    else {
      uVar3 = unaff_x24;
      if (unaff_x20 != 0) {
        uVar3 = unaff_x23;
      }
      func_0x000107915768(uVar3);
    }
  }
  return;
}



/* Entry: 1078eda1c; end: 1078eda8b;  */

/* WARNING: Possible PIC construction at 0x0001078eda84: Changing call to branch */

void FUN_1078eda1c(double *param_1,long param_2)

{
  ulong uVar1;
  undefined1 in_CY;
  ulong extraout_x8;
  ulong extraout_x9;
  long extraout_x10;
  long unaff_x19;
  long unaff_x20;
  undefined8 unaff_x21;
  undefined8 *unaff_x24;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  
  func_0x000107917a38();
  func_0x000107914124();
  if ((bool)in_CY) {
    func_0x000107913c08();
    if (extraout_x10 != 0) {
code_r0x0001078eda8c:
      func_0x000107913ad0();
      if (*(char *)(param_2 + 200) == '\x01') {
        dVar4 = *(double *)(param_2 + 0xa8);
        dVar2 = *param_1;
        if (dVar4 < *param_1) {
          *param_1 = dVar4;
          dVar2 = dVar4;
        }
        dVar3 = param_1[2];
        if (param_1[2] < dVar4) {
          param_1[2] = dVar4;
          dVar3 = dVar4;
        }
        dVar6 = *(double *)(param_2 + 0xb0);
        dVar4 = param_1[1];
        if (dVar6 < param_1[1]) {
          param_1[1] = dVar6;
          dVar4 = dVar6;
        }
        dVar5 = param_1[3];
        if (param_1[3] < dVar6) {
          param_1[3] = dVar6;
          dVar5 = dVar6;
        }
        dVar6 = *(double *)(param_2 + 0xb8);
        if (dVar6 < dVar2) {
          *param_1 = dVar6;
        }
        if (dVar3 < dVar6) {
          param_1[2] = dVar6;
        }
        dVar2 = *(double *)(param_2 + 0xc0);
        if (dVar2 < dVar4) {
          param_1[1] = dVar2;
        }
        if (dVar5 < dVar2) {
          param_1[3] = dVar2;
        }
        return;
      }
      return;
    }
    func_0x000107913680();
    uVar1 = extraout_x9;
    if ((bool)in_CY) {
      uVar1 = extraout_x8;
    }
    if (uVar1 != 0) {
      if (uVar1 >> 0x3d != 0) {
        func_0x000104bd35f4();
        goto code_r0x0001078eda8c;
      }
      func_0x000107915ccc();
    }
    func_0x000107913480();
    func_0x00010791692c();
    if (unaff_x20 != 0) {
      func_0x000107914d94();
    }
  }
  else {
    *unaff_x24 = unaff_x21;
    unaff_x24 = unaff_x24 + 1;
  }
  *(undefined8 **)(unaff_x19 + 8) = unaff_x24;
  return;
}



/* Entry: 1078edeb4; end: 1078edf0f;  */

void FUN_1078edeb4(void)

{
  undefined1 in_ZR;
  long extraout_x8;
  long lVar1;
  long extraout_x8_00;
  long extraout_x9;
  long extraout_x9_00;
  long *unaff_x20;
  long unaff_x22;
  long lVar2;
  
  func_0x000107915c10();
  if ((!(bool)in_ZR) && (func_0x0001079143ac(), !(bool)in_ZR)) {
    func_0x00010791589c();
    lVar1 = extraout_x8;
    lVar2 = extraout_x9;
    while (unaff_x22 != lVar2) {
      lVar2 = *unaff_x20;
      while (lVar2 != lVar1) {
        func_0x00010791415c();
        func_0x0001078ed69c();
        lVar1 = unaff_x20[1];
      }
      func_0x000107915c04();
      lVar1 = extraout_x8_00;
      lVar2 = extraout_x9_00;
    }
  }
  return;
}



/* Entry: 1078ee048; end: 1078ee07b;  */

void FUN_1078ee048(void)

{
  undefined1 in_ZR;
  
  func_0x00010791462c();
  while (func_0x000107915a18(), !(bool)in_ZR) {
    func_0x0001078e9c18();
  }
  return;
}



/* Entry: 1078ee488; end: 1078eea1b;  */

void FUN_1078ee488(undefined8 param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4,
                  undefined8 param_5,ulong param_6)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined1 in_ZR;
  undefined1 in_CY;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined1 *puVar6;
  ulong extraout_x8;
  undefined8 extraout_x8_00;
  undefined8 extraout_x8_01;
  undefined8 extraout_x8_02;
  undefined8 extraout_x8_03;
  undefined8 extraout_x8_04;
  ulong uVar7;
  undefined8 extraout_x8_05;
  undefined8 extraout_x8_06;
  undefined8 extraout_x8_07;
  undefined8 extraout_x8_08;
  undefined8 *unaff_x19;
  undefined8 *unaff_x20;
  undefined8 *puVar8;
  long unaff_x22;
  long lVar9;
  long lVar10;
  undefined8 *puVar11;
  undefined8 uVar12;
  undefined8 in_register_00005008;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 in_register_00005028;
  undefined8 uVar15;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  
  func_0x000107916658();
  func_0x000107913e28();
LAB_1078ee4a8:
  puVar11 = unaff_x20;
LAB_1078ee4bc:
  func_0x000107916210();
  if (!(bool)in_CY || (bool)in_ZR) {
                    /* WARNING: Could not recover jumptable at 0x0001078ee75c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)((ulong)*(byte *)((long)puVar11 + 0x10dedb8bc) * 4 + 0x1078ee760))();
    return;
  }
  if ((long)extraout_x8 < 0x3c0) {
    if ((param_6 & 1) == 0) {
      if (unaff_x20 == unaff_x19) {
        return;
      }
      puVar11 = unaff_x20 + -5;
      while (unaff_x20 = unaff_x20 + 5, unaff_x20 != unaff_x19) {
        func_0x000107914e28();
        func_0x0001078eea1c();
        if ((int)param_3 != 0) {
          func_0x0001079182e4();
          puVar5 = puVar11;
          do {
            puVar8 = puVar5;
            uVar13 = puVar8[6];
            uVar12 = puVar8[5];
            uVar15 = puVar8[8];
            uVar14 = puVar8[7];
            puVar8[0xb] = uVar13;
            puVar8[10] = uVar12;
            puVar8[0xd] = uVar15;
            puVar8[0xc] = uVar14;
            puVar8[0xe] = puVar8[9];
            func_0x00010791760c();
            func_0x0001078eea1c();
            puVar5 = puVar8 + -5;
          } while (((ulong)param_3 & 1) != 0);
          func_0x000107915108();
          puVar8[9] = extraout_x8_08;
          puVar8[6] = uVar13;
          puVar8[5] = uVar12;
          puVar8[8] = uVar15;
          puVar8[7] = uVar14;
        }
        puVar11 = puVar11 + 5;
      }
      return;
    }
    if (unaff_x20 == unaff_x19) {
      return;
    }
    lVar10 = 0;
    puVar11 = unaff_x20;
    goto LAB_1078ee80c;
  }
  if (unaff_x22 != 0) {
    puVar11 = unaff_x20 + ((ulong)puVar11 >> 1) * 5;
    if (extraout_x8 < 0x1401) {
      func_0x000107915378(puVar11);
      func_0x0001078eea90();
    }
    else {
      func_0x000107914c3c();
      func_0x0001078eea90();
      func_0x0001078eea90(unaff_x20 + 5,puVar11 + -5,unaff_x19 + -10);
      func_0x0001078eea90(unaff_x20 + 10,puVar11 + 5,unaff_x19 + -0xf);
      func_0x0001079171fc();
      func_0x0001078eea90();
      func_0x00010791561c();
      func_0x000107915344();
      in_register_00005008 = puVar11[1];
      param_1 = *puVar11;
      in_register_00005028 = puVar11[3];
      param_2 = puVar11[2];
      func_0x0001079158c0(puVar11[4]);
      func_0x000107914058();
    }
    unaff_x22 = unaff_x22 + -1;
    if ((param_6 & 1) != 0) {
LAB_1078ee55c:
      lVar10 = 0;
      func_0x00010791561c();
      in_stack_00000010 = param_1;
      in_stack_00000018 = in_register_00005008;
      in_stack_00000020 = param_2;
      in_stack_00000028 = in_register_00005028;
      in_stack_00000030 = extraout_x8_00;
      do {
        lVar10 = lVar10 + 0x28;
        uVar7 = lVar10 + (long)unaff_x20;
        func_0x0001078eea1c(uVar7,&stack0x00000010);
      } while ((uVar7 & 1) != 0);
      puVar5 = (undefined8 *)((long)unaff_x20 + lVar10);
      puVar11 = puVar5;
      puVar8 = unaff_x19;
      if (lVar10 == 0x28) {
        do {
          if (unaff_x19 <= puVar5) break;
          func_0x000107916f24();
        } while ((uVar7 & 1) == 0);
      }
      else {
        do {
          func_0x000107916f24();
        } while ((int)uVar7 == 0);
      }
      while (puVar11 < puVar8) {
        func_0x000107917744();
        func_0x000107915344();
        func_0x000107916544();
        puVar11[4] = extraout_x8_01;
        puVar11[1] = in_register_00005008;
        *puVar11 = param_1;
        puVar11[3] = in_register_00005028;
        puVar11[2] = param_2;
        func_0x000107915108();
        puVar8[4] = extraout_x8_02;
        puVar8[1] = in_register_00005008;
        *puVar8 = param_1;
        puVar8[3] = in_register_00005028;
        puVar8[2] = param_2;
        do {
          puVar11 = puVar11 + 5;
          puVar4 = puVar11;
          func_0x0001078eea1c(puVar11,&stack0x00000010);
        } while (((ulong)puVar4 & 1) != 0);
        do {
          puVar8 = puVar8 + -5;
          puVar4 = puVar8;
          func_0x0001078eea1c(puVar8,&stack0x00000010);
        } while (((ulong)puVar4 & 1) == 0);
      }
      if (unaff_x20 != puVar11 + -5) {
        func_0x000107916544();
        func_0x0001079158c0();
      }
      func_0x0001079150cc();
      in_CY = unaff_x19 <= puVar5;
      in_ZR = puVar5 == unaff_x19;
      if ((bool)in_CY) {
        puVar5 = unaff_x20;
        func_0x0001078eec20();
        param_3 = puVar11;
        func_0x0001078eec20(puVar11,unaff_x19);
        if ((int)param_3 != 0) goto LAB_1078ee73c;
        if (((ulong)puVar5 & 1) != 0) goto LAB_1078ee4bc;
      }
      param_3 = unaff_x20;
      FUN_1078ee488();
      param_6 = 0;
      goto LAB_1078ee4bc;
    }
    puVar11 = unaff_x20 + -5;
    func_0x0001078eea1c();
    if (((ulong)puVar11 & 1) != 0) goto LAB_1078ee55c;
    func_0x00010791561c();
    param_3 = &stack0x00000010;
    in_stack_00000010 = param_1;
    in_stack_00000018 = in_register_00005008;
    in_stack_00000020 = param_2;
    in_stack_00000028 = in_register_00005028;
    in_stack_00000030 = extraout_x8_03;
    func_0x0001078eea1c(param_3,unaff_x19 + -5);
    puVar11 = unaff_x20;
    if (((ulong)param_3 & 1) == 0) {
      do {
        puVar11 = puVar11 + 5;
        if (unaff_x19 <= puVar11) break;
        func_0x000107916400();
      } while ((int)param_3 == 0);
    }
    else {
      do {
        puVar11 = puVar11 + 5;
        func_0x000107916400();
      } while (((ulong)param_3 & 1) == 0);
    }
    if (puVar11 < unaff_x19) {
      do {
        func_0x000107916f08();
      } while (((ulong)param_3 & 1) != 0);
    }
    while (puVar11 < unaff_x19) {
      func_0x000107917744();
      func_0x000107915344();
      in_register_00005008 = unaff_x19[1];
      param_1 = *unaff_x19;
      in_register_00005028 = unaff_x19[3];
      param_2 = unaff_x19[2];
      puVar11[4] = unaff_x19[4];
      puVar11[1] = in_register_00005008;
      *puVar11 = param_1;
      puVar11[3] = in_register_00005028;
      puVar11[2] = param_2;
      func_0x000107915108();
      unaff_x19[4] = extraout_x8_04;
      unaff_x19[1] = in_register_00005008;
      *unaff_x19 = param_1;
      unaff_x19[3] = in_register_00005028;
      unaff_x19[2] = param_2;
      do {
        puVar11 = puVar11 + 5;
        func_0x000107916400();
      } while ((int)param_3 == 0);
      do {
        func_0x000107916f08();
      } while (((ulong)param_3 & 1) != 0);
    }
    puVar5 = puVar11 + -5;
    in_CY = puVar5 <= unaff_x20;
    in_ZR = unaff_x20 == puVar5;
    if (!(bool)in_ZR) {
      in_register_00005008 = puVar11[-4];
      param_1 = *puVar5;
      in_register_00005028 = puVar11[-2];
      param_2 = puVar11[-3];
      unaff_x20[4] = puVar11[-1];
      unaff_x20[1] = in_register_00005008;
      *unaff_x20 = param_1;
      unaff_x20[3] = in_register_00005028;
      unaff_x20[2] = param_2;
    }
    param_6 = 0;
    func_0x0001079150e0();
    goto LAB_1078ee4bc;
  }
  if (unaff_x20 == unaff_x19) {
    return;
  }
  func_0x0001079181fc();
  lVar10 = 0;
  do {
    func_0x000107914c3c();
    func_0x0001078eeea0();
    lVar10 = lVar10 + -1;
  } while (-1 < lVar10);
  do {
    if ((long)puVar11 < 2) {
      return;
    }
    uVar7 = 0;
    uVar13 = unaff_x20[1];
    uVar12 = *unaff_x20;
    uVar15 = unaff_x20[3];
    uVar14 = unaff_x20[2];
    in_stack_00000030 = unaff_x20[4];
    puVar5 = unaff_x20;
    in_stack_00000010 = uVar12;
    in_stack_00000018 = uVar13;
    in_stack_00000020 = uVar14;
    in_stack_00000028 = uVar15;
    do {
      uVar2 = uVar7 << 1 | 1;
      uVar1 = uVar7 * 2 + 2;
      puVar8 = puVar5 + uVar7 * 5 + 5;
      uVar3 = uVar2;
      if ((long)uVar1 < (long)puVar11) {
        func_0x000107915260();
        func_0x0001078eea1c();
        puVar8 = puVar5 + uVar7 * 5 + 10;
        uVar3 = uVar1;
        if ((int)param_3 == 0) {
          puVar8 = puVar5 + uVar7 * 5 + 5;
          uVar3 = uVar2;
        }
      }
      uVar7 = uVar3;
      func_0x000107914db0();
      puVar5[4] = extraout_x8_05;
      puVar5[1] = uVar13;
      *puVar5 = uVar12;
      puVar5[3] = uVar15;
      puVar5[2] = uVar14;
      puVar5 = puVar8;
    } while ((long)uVar7 <= (long)((long)puVar11 - 2U >> 1));
    puVar5 = unaff_x19 + -5;
    if (puVar8 == puVar5) {
      func_0x000107915b08();
      func_0x0001079156d8();
    }
    else {
      uVar13 = unaff_x19[-4];
      uVar12 = *puVar5;
      uVar15 = unaff_x19[-2];
      uVar14 = unaff_x19[-3];
      func_0x0001079156d8(unaff_x19[-1]);
      func_0x000107915b08();
      unaff_x19[-1] = extraout_x8_06;
      unaff_x19[-4] = uVar13;
      *puVar5 = uVar12;
      unaff_x19[-2] = uVar15;
      unaff_x19[-3] = uVar14;
      uVar7 = (long)puVar8 + (0x28 - (long)unaff_x20);
      if (0x28 < (long)uVar7) {
        uVar7 = uVar7 / 0x28 - 2 >> 1;
        func_0x000107915248();
        func_0x0001078eea1c();
        if ((int)param_3 != 0) {
          func_0x00010791407c();
          puVar8 = unaff_x20 + uVar7 * 5;
          do {
            puVar4 = puVar8;
            func_0x000107915308();
            func_0x0001079156d8();
            if (uVar7 == 0) break;
            uVar7 = uVar7 - 1 >> 1;
            puVar8 = unaff_x20 + uVar7 * 5;
            param_3 = puVar8;
            func_0x0001078eea1c(puVar8,&stack0x00000040);
          } while (((ulong)param_3 & 1) != 0);
          func_0x000107915108();
          puVar4[4] = extraout_x8_07;
          puVar4[1] = uVar13;
          *puVar4 = uVar12;
          puVar4[3] = uVar15;
          puVar4[2] = uVar14;
        }
      }
    }
    puVar11 = (undefined8 *)((long)puVar11 + -1);
    unaff_x19 = puVar5;
  } while( true );
LAB_1078ee80c:
  puVar11 = puVar11 + 5;
  if (puVar11 == unaff_x19) {
    return;
  }
  puVar5 = puVar11;
  func_0x0001078eea1c();
  if ((int)puVar5 != 0) {
    func_0x0001079182e4();
    lVar9 = lVar10;
    do {
      func_0x000107914728((long)unaff_x20 + lVar9);
      if (lVar9 == 0) break;
      lVar9 = lVar9 + -0x28;
      puVar6 = &stack0x00000040;
      func_0x0001078eea1c(puVar6,lVar9 + (long)unaff_x20);
    } while (((ulong)puVar6 & 1) != 0);
    func_0x0001079150f4();
  }
  lVar10 = lVar10 + 0x28;
  goto LAB_1078ee80c;
LAB_1078ee73c:
  unaff_x19 = puVar11 + -5;
  if (((ulong)puVar5 & 1) != 0) {
    return;
  }
  goto LAB_1078ee4a8;
}



/* Entry: 1078eefac; end: 1078eefe7;  */

void FUN_1078eefac(long param_1)

{
  long unaff_x19;
  
  if (param_1 != 0) {
    func_0x000107914c90();
    FUN_1078eefac();
    FUN_1078eefac(*(undefined8 *)(unaff_x19 + 8));
    if (*(long *)(unaff_x19 + 0x38) != 0) {
      func_0x000107917b0c();
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 1078ef4d0; end: 1078ef4db;  */

/* WARNING: Possible PIC construction at 0x0001078ef534: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001078ef53c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001078ef558: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001078ef648: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001078ef570: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001078ef55c) */
/* WARNING: Removing unreachable block (ram,0x0001078ef574) */
/* WARNING: Removing unreachable block (ram,0x0001078ef584) */
/* WARNING: Removing unreachable block (ram,0x0001078ef654) */
/* WARNING: Removing unreachable block (ram,0x0001078ef674) */
/* WARNING: Removing unreachable block (ram,0x0001078ef678) */
/* WARNING: Removing unreachable block (ram,0x0001078ef684) */
/* WARNING: Removing unreachable block (ram,0x0001078ef664) */
/* WARNING: Removing unreachable block (ram,0x0001078ef668) */
/* WARNING: Removing unreachable block (ram,0x0001078ef670) */
/* WARNING: Removing unreachable block (ram,0x0001078ef694) */
/* WARNING: Removing unreachable block (ram,0x0001078ef6a0) */
/* WARNING: Removing unreachable block (ram,0x0001078ef6a4) */
/* WARNING: Removing unreachable block (ram,0x0001078ef6ac) */
/* WARNING: Removing unreachable block (ram,0x0001078ef6f0) */
/* WARNING: Removing unreachable block (ram,0x0001078ef6b0) */
/* WARNING: Removing unreachable block (ram,0x0001078ef6d0) */
/* WARNING: Removing unreachable block (ram,0x0001078ef6e0) */
/* WARNING: Removing unreachable block (ram,0x0001078ef6f8) */
/* WARNING: Removing unreachable block (ram,0x0001078ef704) */
/* WARNING: Removing unreachable block (ram,0x0001078ef710) */
/* WARNING: Removing unreachable block (ram,0x0001078ef57c) */
/* WARNING: Removing unreachable block (ram,0x0001078ef594) */
/* WARNING: Removing unreachable block (ram,0x0001078ef59c) */
/* WARNING: Removing unreachable block (ram,0x0001078ef5a4) */
/* WARNING: Removing unreachable block (ram,0x0001078ef5c0) */
/* WARNING: Removing unreachable block (ram,0x0001078ef5c4) */
/* WARNING: Removing unreachable block (ram,0x0001078ef5d8) */
/* WARNING: Removing unreachable block (ram,0x0001078ef5cc) */
/* WARNING: Removing unreachable block (ram,0x0001078ef5d4) */
/* WARNING: Removing unreachable block (ram,0x0001078ef5b4) */
/* WARNING: Removing unreachable block (ram,0x0001078ef5bc) */
/* WARNING: Removing unreachable block (ram,0x0001078ef5dc) */
/* WARNING: Removing unreachable block (ram,0x0001078ef5e4) */
/* WARNING: Removing unreachable block (ram,0x0001078ef614) */
/* WARNING: Removing unreachable block (ram,0x0001078ef620) */
/* WARNING: Removing unreachable block (ram,0x0001078ef624) */
/* WARNING: Removing unreachable block (ram,0x0001078ef62c) */
/* WARNING: Removing unreachable block (ram,0x0001078ef720) */
/* WARNING: Removing unreachable block (ram,0x0001078ef728) */
/* WARNING: Removing unreachable block (ram,0x0001078ef640) */
/* WARNING: Removing unreachable block (ram,0x0001078ef644) */
/* WARNING: Removing unreachable block (ram,0x0001078ef5ec) */
/* WARNING: Removing unreachable block (ram,0x0001078ef5f0) */
/* WARNING: Removing unreachable block (ram,0x0001078ef600) */
/* WARNING: Removing unreachable block (ram,0x0001078ef610) */
/* WARNING: Removing unreachable block (ram,0x0001078ef540) */
/* WARNING: Removing unreachable block (ram,0x0001078ef538) */
/* WARNING: Removing unreachable block (ram,0x0001078ef64c) */

void FUN_1078ef4d0(undefined8 param_1,undefined8 *param_2,long param_3,undefined8 *param_4,
                  ulong param_5)

{
  char cVar1;
  undefined1 in_ZR;
  undefined1 in_CY;
  char cVar2;
  bool bVar3;
  undefined1 uVar4;
  undefined *puVar5;
  undefined8 extraout_x8;
  ulong extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  long lVar6;
  undefined8 uVar7;
  undefined8 extraout_x8_03;
  undefined8 extraout_x8_04;
  long extraout_x9;
  long extraout_x9_00;
  undefined8 *extraout_x9_01;
  long extraout_x9_02;
  long extraout_x9_03;
  undefined8 uVar8;
  long extraout_x10;
  undefined8 extraout_x10_00;
  long extraout_x11;
  long extraout_x11_00;
  long extraout_x12;
  ulong extraout_x12_00;
  long extraout_x14;
  long lVar9;
  long lVar10;
  long unaff_x19;
  long unaff_x20;
  long unaff_x22;
  ulong unaff_x26;
  undefined8 *puVar11;
  undefined8 in_register_00005008;
  undefined8 uVar12;
  
  func_0x000107913ad0();
  puVar5 = &UNK_1078ef4dc;
  func_0x0001079171b0();
  func_0x000107913e28();
  func_0x000107913ca4();
  func_0x000107917624();
  func_0x000107916210();
  if (!(bool)in_CY || (bool)in_ZR) {
                    /* WARNING: Could not recover jumptable at 0x0001078ef740. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(&UNK_1078ef744 + (ulong)(byte)(&UNK_10dedb8c8)[unaff_x26] * 4))();
    return;
  }
  if ((long)extraout_x8_00 < 0x240) {
    bVar3 = unaff_x20 == unaff_x19;
    if ((param_5 & 1) == 0) {
      lVar6 = unaff_x20;
      if (!bVar3) {
        while( true ) {
          unaff_x20 = unaff_x20 + 0x18;
          bVar3 = true;
          if (lVar6 + 0x18 == unaff_x19) break;
          lVar9 = *(long *)(lVar6 + 0x28);
          lVar10 = *(long *)(lVar6 + 0x10);
          cVar1 = SBORROW8(lVar9,lVar10);
          cVar2 = lVar9 - lVar10 < 0;
          uVar4 = lVar9 == lVar10;
          lVar6 = lVar6 + 0x18;
          if (lVar10 < lVar9) {
            func_0x0001079160f4(unaff_x20);
            do {
              func_0x000107916b2c();
            } while (!(bool)uVar4 && cVar2 == cVar1);
            func_0x00010791627c();
            lVar6 = extraout_x9_03;
            unaff_x20 = extraout_x8_02;
          }
        }
      }
    }
    else if (!bVar3) {
      lVar6 = 0;
      while( true ) {
        lVar9 = unaff_x20 + 0x18;
        bVar3 = true;
        if (lVar9 == unaff_x19) break;
        if (*(long *)(unaff_x20 + 0x10) < *(long *)(unaff_x20 + 0x28)) {
          func_0x0001079160f4(lVar6);
          do {
            func_0x000107917a20();
            if (extraout_x11 == 0) break;
          } while (*(long *)(extraout_x12 + -8) < extraout_x10);
          func_0x00010791627c();
          lVar6 = extraout_x8_01;
          lVar9 = extraout_x9;
        }
        lVar6 = lVar6 + 0x18;
        unaff_x20 = lVar9;
      }
    }
  }
  else {
    if (unaff_x22 != 0) {
      puVar11 = (undefined8 *)(unaff_x20 + (unaff_x26 >> 1) * 0x18);
      if (extraout_x8_00 < 0xc01) {
        func_0x000107915378();
        puVar5 = &UNK_1078ef574;
      }
      else {
        func_0x000107914c3c();
        puVar5 = &UNK_1078ef538;
        puVar11 = param_2;
      }
      goto code_r0x0001078ef964;
    }
    bVar3 = unaff_x20 == unaff_x19;
    if (!bVar3) {
      func_0x0001079181fc();
      lVar6 = 0;
      do {
        func_0x000107914c3c();
        func_0x0001078efbe0();
        lVar6 = lVar6 + -1;
      } while (-1 < lVar6);
      for (; bVar3 = unaff_x26 == 2, 1 < (long)unaff_x26; unaff_x26 = unaff_x26 - 1) {
        func_0x0001079169b0();
        do {
          func_0x0001079161b0();
          cVar2 = SBORROW8(extraout_x12_00,unaff_x26);
          lVar6 = extraout_x12_00 - unaff_x26;
          bVar3 = extraout_x12_00 == unaff_x26;
          if ((long)extraout_x12_00 < (long)unaff_x26) {
            lVar9 = *(long *)(extraout_x14 + 0x28);
            lVar10 = *(long *)(extraout_x14 + 0x40);
            cVar2 = SBORROW8(lVar9,lVar10);
            lVar6 = lVar9 - lVar10;
            bVar3 = lVar9 == lVar10;
          }
          cVar1 = lVar6 < 0;
          func_0x000107916f70();
        } while (bVar3 || cVar1 != cVar2);
        unaff_x19 = unaff_x19 + -0x18;
        cVar1 = SBORROW8(extraout_x9_00,unaff_x19);
        cVar2 = extraout_x9_00 - unaff_x19 < 0;
        uVar4 = extraout_x9_00 == unaff_x19;
        if ((bool)uVar4) {
          func_0x00010791511c();
        }
        else {
          func_0x000107915bd4();
          if ((cVar2 == cVar1) && (func_0x000107916b4c(), !(bool)uVar4 && cVar2 == cVar1)) {
            in_register_00005008 = extraout_x9_01[1];
            param_1 = *extraout_x9_01;
            do {
              func_0x0001079172c0();
              if (extraout_x11_00 == 0) break;
              func_0x0001079179d8();
            } while (!(bool)uVar4 && cVar2 == cVar1);
            func_0x0001079176b4();
            *(undefined8 *)(extraout_x9_02 + 0x10) = extraout_x10_00;
          }
        }
      }
    }
  }
  func_0x000107913564(extraout_x8);
  if (bVar3) {
    func_0x000107915868(puVar5);
    return;
  }
  puVar5 = &UNK_1078ef964;
  ___stack_chk_fail();
  puVar11 = param_2;
code_r0x0001078ef964:
  lVar6 = *(long *)(param_3 + 0x10);
  if ((long)puVar11[2] < lVar6) {
    if (lVar6 < (long)param_4[2]) {
      uVar7 = puVar11[2];
      in_register_00005008 = puVar11[1];
      param_1 = *puVar11;
      uVar8 = param_4[2];
      uVar12 = *param_4;
      puVar11[1] = param_4[1];
      *puVar11 = uVar12;
      puVar11[2] = uVar8;
    }
    else {
      func_0x000107915eec();
      if ((long)param_4[2] <= *(long *)(param_3 + 0x10)) {
        return;
      }
      func_0x0001079175d4(puVar5);
      uVar7 = extraout_x8_04;
    }
    param_4[1] = in_register_00005008;
    *param_4 = param_1;
    param_4[2] = uVar7;
  }
  else if (lVar6 < (long)param_4[2]) {
    func_0x0001079175d4();
    param_4[1] = in_register_00005008;
    *param_4 = param_1;
    param_4[2] = extraout_x8_03;
    if ((long)puVar11[2] < *(long *)(param_3 + 0x10)) {
      func_0x000107915eec();
    }
  }
  return;
}



/* Entry: 1078efdc0; end: 1078efde3;  */

void FUN_1078efdc0(long param_1,long param_2)

{
  undefined8 uVar1;
  
  func_0x0001078efde4();
  uVar1 = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_1 + 0x20) = uVar1;
  return;
}



/* Entry: 1078f00b8; end: 1078f011b;  */

void FUN_1078f00b8(long *param_1)

{
  long *unaff_x22;
  
  func_0x0001004d761c();
  func_0x0001004d7694();
  func_0x0001004d76a0();
  if (*param_1 == 0) {
    func_0x0001004d76ec();
    param_1[4] = *unaff_x22;
    func_0x0001004d76fc();
    func_0x0001004d7768();
  }
  func_0x0001004d77a8();
  return;
}



/* Entry: 1078f096c; end: 1078f0a7f;  */

void FUN_1078f096c(ulong param_1)

{
  undefined1 in_ZR;
  undefined1 in_CY;
  undefined1 uVar1;
  long extraout_x8;
  long extraout_x8_00;
  long unaff_x19;
  long unaff_x21;
  long unaff_x22;
  long lVar2;
  long unaff_x24;
  
  func_0x000107914410();
  func_0x0001079160d0();
  if (!(bool)in_CY || (bool)in_ZR) {
                    /* WARNING: Could not recover jumptable at 0x0001078f09ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)((ulong)(byte)(&UNK_10dedb8da)[extraout_x8] * 4 + 0x1078f09b0))(1);
    return;
  }
  func_0x000107914f98();
  func_0x0001078f0840();
  func_0x000107917118();
  lVar2 = unaff_x19 + 0x78;
  do {
    if (lVar2 == unaff_x21) {
      return;
    }
    func_0x000107915f3c();
    func_0x0001078f0668();
    if ((int)param_1 != 0) {
      func_0x00010791505c();
      lVar2 = unaff_x24;
      do {
        func_0x0001079146d0(unaff_x19 + lVar2);
        uVar1 = lVar2 == -0x50;
        if ((bool)uVar1) break;
        func_0x0001079173cc();
        func_0x0001078f0668();
        lVar2 = lVar2 + -0x28;
      } while ((param_1 & 1) != 0);
      func_0x000107914e50();
      if ((bool)uVar1) {
        func_0x0001079171c8(unaff_x22 + 0x28);
        return;
      }
    }
    func_0x00010791748c();
    lVar2 = extraout_x8_00;
  } while( true );
}



/* Entry: 1078f0d90; end: 1078f0d9b;  */

void FUN_1078f0d90(int param_1)

{
  int iVar1;
  int iVar2;
  
  func_0x000107913ad0();
  func_0x000107915938();
  iVar1 = param_1;
  func_0x000107913aec();
  func_0x0001078e9d94();
  if (param_1 == 0 && iVar1 == 0) {
    func_0x000107913c44();
    func_0x000107915480();
    func_0x000107913aec();
    func_0x0001078f1930();
  }
  else {
    iVar2 = iVar1;
    if (param_1 == 0) {
      func_0x000107913c44();
      func_0x000107915480();
      if (iVar2 == -1) {
        return;
      }
    }
    if (iVar1 == 0) {
      func_0x000107913aec();
      func_0x0001078f1930();
      if (iVar2 == -1) {
        return;
      }
    }
    if ((param_1 == iVar1) && (func_0x000107914cd0(), iVar2 != 0)) {
      func_0x000107915b40();
    }
  }
  return;
}



/* Entry: 1078f18fc; end: 1078f192f;  */

bool FUN_1078f18fc(long param_1,long param_2)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  bool bVar4;
  long lVar5;
  long lVar6;
  
  iVar1 = *(int *)(param_1 + 0x2c);
  iVar2 = *(int *)(param_2 + 0x2c);
  bVar3 = SBORROW4(iVar1,iVar2);
  bVar4 = iVar1 - iVar2 < 0;
  if (iVar1 == iVar2) {
    lVar5 = *(long *)(param_1 + 0x20);
    lVar6 = *(long *)(param_2 + 0x20);
    bVar3 = SBORROW8(lVar5,lVar6);
    bVar4 = lVar5 - lVar6 < 0;
    if (lVar5 == lVar6) {
      lVar5 = *(long *)(param_1 + 0x48);
      lVar6 = *(long *)(param_2 + 0x48);
      bVar3 = SBORROW8(lVar5,lVar6);
      bVar4 = lVar5 - lVar6 < 0;
      if (lVar5 == lVar6) {
        lVar5 = *(long *)(param_1 + 0x50);
        lVar6 = *(long *)(param_2 + 0x50);
        bVar3 = SBORROW8(lVar5,lVar6);
        bVar4 = lVar5 - lVar6 < 0;
        if (lVar5 == lVar6) {
          lVar5 = *(long *)(param_1 + 0x58);
          lVar6 = *(long *)(param_2 + 0x58);
          bVar3 = SBORROW8(lVar5,lVar6);
          bVar4 = lVar5 - lVar6 < 0;
          if (lVar5 == lVar6) {
            lVar5 = *(long *)(param_1 + 0x68);
            lVar6 = *(long *)(param_2 + 0x68);
            bVar3 = SBORROW8(lVar5,lVar6);
            bVar4 = lVar5 - lVar6 < 0;
            if (lVar5 == lVar6) {
              bVar3 = SBORROW8(*(long *)(param_1 + 0x60),*(long *)(param_2 + 0x60));
              bVar4 = *(long *)(param_1 + 0x60) - *(long *)(param_2 + 0x60) < 0;
            }
          }
        }
      }
      return bVar4 != bVar3;
    }
  }
  return bVar4 != bVar3;
}



/* Entry: 1078f1cac; end: 1078f1dcb;  */

void FUN_1078f1cac(ulong param_1)

{
  long lVar1;
  int iVar2;
  int iVar3;
  char in_NG;
  undefined1 in_ZR;
  undefined1 uVar4;
  char in_OV;
  bool bVar5;
  long extraout_x8;
  long *plVar6;
  long extraout_x10;
  long extraout_x11;
  long extraout_x13;
  long *plVar7;
  long *unaff_x21;
  long unaff_x22;
  ulong unaff_x23;
  ulong unaff_x24;
  long *plVar8;
  long lVar9;
  long unaff_x27;
  long lVar10;
  
  func_0x000107915994();
  func_0x0001079173fc();
  if ((bool)in_ZR || in_NG != in_OV) {
    func_0x0001079173ec();
    if ((bool)in_ZR) {
      func_0x00010791640c();
    }
    func_0x000107916ecc();
    while (unaff_x23 != unaff_x24) {
      lVar10 = **(long **)(unaff_x22 + 0x10) + *(long *)(unaff_x23 + 0x20) * 0x1b0;
      if ((*(byte *)(lVar10 + 0x20) & 1) == 0) {
        iVar2 = *(int *)(lVar10 + 0x28);
        iVar3 = *(int *)(lVar10 + 0xe0);
        if (iVar2 != 3 || iVar3 != 3) {
          if (*(long *)(lVar10 + 0x18) < 1) {
            if (iVar2 == 1) {
              if (iVar3 != 1) goto LAB_1078f1d60;
            }
            else if (iVar2 != 2 || iVar3 != 2) {
LAB_1078f1d60:
              for (lVar9 = 0x28; bVar5 = lVar9 == 0x198, !bVar5; lVar9 = lVar9 + 0xb8) {
                func_0x000107914bdc(lVar10 + lVar9);
                uVar4 = (bVar5 && extraout_x8 == extraout_x11) && extraout_x10 == extraout_x13;
                plVar6 = unaff_x21;
                plVar8 = unaff_x21;
                if ((!bVar5 || extraout_x8 != extraout_x11) || extraout_x10 != extraout_x13) {
                  while (plVar7 = (long *)*plVar6, plVar7 != (long *)0x0) {
                    param_1 = (ulong)(plVar7 + 4);
                    func_0x000107918928(param_1,&stack0x00000018);
                    lVar1 = unaff_x27;
                    if ((bool)uVar4) {
                      lVar1 = 0;
                    }
                    plVar6 = (long *)((long)plVar7 + lVar1);
                    if ((bool)uVar4) {
                      plVar8 = plVar7;
                    }
                  }
                  if ((unaff_x21 != plVar8) && (func_0x000107917edc(), (param_1 & 1) == 0)) {
                    func_0x0001079181dc();
                    FUN_1078f1cac();
                  }
                }
              }
            }
          }
          else if (*(long *)(lVar10 + 0xb0) == *(long *)(lVar10 + 0x168)) goto LAB_1078f1d60;
        }
      }
      func_0x00010791598c();
      unaff_x23 = param_1;
    }
  }
  return;
}



/* Entry: 1078f2518; end: 1078f31e3;  */

/* WARNING: Possible PIC construction at 0x0001078f2620: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001078f2624) */

ulong FUN_1078f2518(ulong ******param_1,ulong *****param_2,uint param_3,long *param_4,uint *param_5,
                   ulong *param_6,int param_7)

{
  long *plVar1;
  ulong uVar2;
  undefined1 *puVar3;
  long lVar4;
  uint uVar5;
  undefined1 in_ZR;
  undefined1 uVar6;
  bool bVar7;
  bool bVar8;
  int iVar9;
  ulong ******ppppppuVar10;
  ulong *puVar11;
  ulong ******ppppppuVar12;
  ulong *****pppppuVar13;
  ulong uVar14;
  ulong uVar15;
  ulong ***pppuVar16;
  undefined1 uVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  undefined8 extraout_x8;
  ulong ****extraout_x8_00;
  long extraout_x8_01;
  ulong ****ppppuVar21;
  long extraout_x8_02;
  undefined1 *extraout_x8_03;
  long lVar22;
  long extraout_x8_04;
  ulong *****pppppuVar23;
  long extraout_x8_05;
  long extraout_x9;
  long lVar24;
  ulong ******ppppppuVar25;
  long extraout_x9_00;
  long extraout_x9_01;
  ulong ****ppppuVar26;
  long extraout_x9_02;
  long extraout_x9_03;
  long extraout_x9_04;
  long extraout_x10;
  long extraout_x10_00;
  ulong extraout_x10_01;
  ulong extraout_x10_02;
  ulong ******extraout_x11;
  long extraout_x11_00;
  uint extraout_w12;
  long extraout_x14;
  ulong ***extraout_x15;
  long lVar27;
  ulong *****pppppuVar28;
  ulong *****pppppuVar29;
  ulong uVar30;
  long lVar31;
  undefined4 *puVar32;
  ulong ******ppppppuVar33;
  int *piVar34;
  ulong *****pppppuVar35;
  ulong *****pppppuVar36;
  ulong *****pppppuVar37;
  ulong *****pppppuVar38;
  ulong *****pppppuVar39;
  ulong *****pppppuVar40;
  ulong ******unaff_d12;
  ulong ******unaff_d15;
  undefined1 auStack_110 [16];
  byte abStack_100 [16];
  undefined8 uStack_f0;
  ulong ****ppppuStack_e8;
  ulong ****ppppuStack_e0;
  undefined8 uStack_d8;
  ulong *****pppppuStack_d0;
  long lStack_c8;
  undefined8 uStack_c0;
  ulong ***apppuStack_b8 [2];
  long lStack_a8;
  long lStack_a0;
  undefined1 auStack_98 [8];
  ulong *****pppppuStack_90;
  ulong ****ppppuStack_88;
  ulong ****ppppuStack_80;
  ulong uStack_78;
  ulong ****ppppuStack_70;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined8 uStack_18;
  
  func_0x000107915964();
  ppppppuVar10 = param_1;
  func_0x000107913ca4();
  uStack_18 = extraout_x8;
  func_0x000107917990(ppppppuVar10[9]);
  lVar31 = extraout_x10 * extraout_x9;
  lVar27 = (long)(int)extraout_w12 * 0xb8 + lVar31 + 0x28;
  pppppuVar29 = *(ulong ******)((long)extraout_x8_00 + lVar27 + 0x60);
  if ((long)pppppuVar29 < 0) {
    lVar24 = *(long *)((long)extraout_x8_00 + lVar27 + 0x50);
    if ((-1 < lVar24) &&
       (pppppuVar29 = *(ulong ******)((long)extraout_x8_00 + lVar27 + 0x58), -1 < (long)pppppuVar29)
       ) {
      if ((param_7 != 0) &&
         ((in_ZR = 0, pppppuVar29 == param_2 &&
          (bVar7 = *(int *)((long)extraout_x8_00 + lVar31 + 0x28) == 1,
          bVar8 = *(int *)((long)extraout_x8_00 + lVar31 + 0xe0) == 1, in_ZR = bVar7 && bVar8,
          pppppuVar29 = param_2, !bVar7 || !bVar8)))) {
        lVar31 = (ulong)(param_3 ^ 1) * 0xb8 + lVar31 + 0x28;
        in_ZR = 0;
        if ((*(long *)((long)extraout_x8_00 + lVar27 + 8) ==
             *(long *)((long)extraout_x8_00 + lVar31 + 8)) &&
           ((in_ZR = 0,
            *(long *)((long)extraout_x8_00 + lVar27 + 0x10) ==
            *(long *)((long)extraout_x8_00 + lVar31 + 0x10) &&
            (bVar7 = *(long *)((long)extraout_x8_00 + lVar27 + 0x18) ==
                     *(long *)((long)extraout_x8_00 + lVar31 + 0x18),
            bVar8 = *(long *)((long)extraout_x8_00 + lVar27 + 0x20) == lVar24,
            in_ZR = bVar7 && bVar8, bVar7 && bVar8)))) {
          lVar24 = *(long *)((long)extraout_x8_00 + lVar31 + 0x50);
        }
      }
      goto LAB_1078f2580;
    }
    goto LAB_1078f2de8;
  }
  lVar24 = -1;
LAB_1078f2580:
  *param_4 = (long)pppppuVar29;
  lVar31 = *(long *)((long)extraout_x8_00 + lVar27 + 0x18);
  uVar15 = *(ulong *)((long)extraout_x8_00 + lVar27 + 0x20);
  ppppuVar21 = extraout_x8_00;
  if (-1 < lVar24) {
    uVar30 = 0;
    lVar22 = 0x38;
    if (*(long *)((long)extraout_x8_00 + lVar27 + 8) != 0) {
      lVar22 = 0x40;
    }
    plVar1 = (long *)(**(long **)((long)param_1 + lVar22) +
                     *(long *)((long)extraout_x8_00 + lVar27 + 0x10) * 0x20);
    ppppuStack_88 = (ulong ****)*plVar1;
    ppppuStack_80 = (ulong ****)plVar1[1];
    pppppuStack_90 = (ulong *****)(ppppuStack_88 + (uVar15 + 1) * 2);
    uStack_78 = uStack_78 & 0xffffffffffffff00;
    uVar2 = lVar24 + ~uVar15 + ((long)ppppuStack_80 - (long)ppppuStack_88 >> 4);
    if ((long)uVar15 < lVar24) {
      uVar2 = lVar24 - (uVar15 + 1);
    }
    while( true ) {
      pppppuVar29 = pppppuStack_90;
      uVar6 = uVar2 <= uVar30;
      in_ZR = uVar30 == uVar2;
      if (!(bool)in_ZR && (long)uVar2 <= (long)uVar30) break;
      uVar14 = *param_6;
      func_0x0001079180ec(param_6[1]);
      if ((bool)in_ZR) {
        uVar6 = 1;
        goto code_r0x0001078f31e4;
      }
      while( true ) {
        puVar11 = param_6;
        func_0x0001078e96d4(param_6,pppppuVar29);
        iVar9 = (int)puVar11;
        func_0x0001079180e0(param_6[1]);
        if ((!(bool)uVar6) || (func_0x0001079166b4(), iVar9 == 0)) break;
        func_0x000107916a3c(*param_6);
        func_0x0001078f3294(param_6,extraout_x8_01 + -2);
      }
      uVar30 = uVar30 + 1;
      ppppppuVar10 = &pppppuStack_90;
      func_0x0001078f3478();
    }
    pppppuVar29 = (ulong *****)*param_4;
    ppppuVar21 = *param_1[9];
  }
  func_0x000107918248(ppppuVar21 + (long)pppppuVar29 * 0x36);
  if ((bool)in_ZR) {
    uVar18 = 3;
LAB_1078f2dec:
    uVar6 = param_7 == 0;
    if ((bool)uVar6) {
      uVar18 = uVar18 + 1;
    }
    uVar14 = (ulong)uVar18;
    goto LAB_1078f2df0;
  }
  if (param_7 != 0) {
    *(undefined4 *)((long)extraout_x8_00 + lVar27 + 0xa0) = 1;
  }
  ppppuVar21 = *param_1[2];
  if (0 < (long)ppppuVar21[(long)pppppuVar29 * 0x36 + 3]) {
    func_0x000107916c80();
    lStack_a8 = 0;
    lStack_a0 = 0;
    ppppppuVar12 = ppppppuVar10 + 5;
    ppppppuVar25 = (ulong ******)*ppppppuVar12;
    pppppuStack_d0 = (ulong *****)0x0;
    lStack_c8 = 0;
    uStack_c0 = 0;
    while (ppppppuVar25 != ppppppuVar10 + 6) {
      pppppuVar28 = ppppppuVar25[4];
      func_0x000107917990(param_1[2]);
      lVar27 = extraout_x8_02 + (long)pppppuVar28 * extraout_x9_00;
      if ((*(byte *)(lVar27 + 0x20) & 1) == 0) {
        for (lVar24 = 0; uVar6 = lVar24 == 2, !(bool)uVar6; lVar24 = lVar24 + 1) {
          puVar32 = (undefined4 *)(lVar27 + 0x28 + lVar24 * 0xb8);
          pppppuVar35 = *param_1;
          pppppuVar23 = param_1[1];
          pppppuVar13 = pppppuVar35;
          func_0x0001078f0bd8(pppppuVar35,pppppuVar23,puVar32 + 2,&uStack_f0,abStack_100,auStack_110
                             );
          lVar22 = *(long *)(puVar32 + 0xc);
          lVar4 = *(long *)(puVar32 + 0xe);
          func_0x000107918030();
          puVar3 = auStack_110;
          if (!(bool)uVar6) {
            puVar3 = extraout_x8_03;
          }
          pppppuVar40 = *(ulong ******)(puVar3 + 8);
          iVar9 = -1;
          pppppuVar38 = uStack_f0;
          pppppuVar39 = (ulong *****)ppppuStack_e8;
          while ((pppppuVar36 = pppppuVar38, pppppuVar37 = pppppuVar39, func_0x0001079147e8(),
                 -10 < iVar9 + 1 && (((ulong)pppppuVar13 & 1) != 0))) {
            func_0x0001079167bc();
            iVar9 = iVar9 + -1;
            pppppuVar38 = pppppuVar36;
            pppppuVar39 = pppppuVar37;
          }
          uStack_f0 = pppppuVar38;
          ppppuStack_e8 = (ulong ****)pppppuVar39;
          if (lVar22 != lVar4) {
            unaff_d12 = unaff_d15;
          }
          while( true ) {
            func_0x0001079185dc();
            func_0x0001079147e8();
            if ((int)pppppuVar13 == 0) break;
            func_0x0001079167bc();
            func_0x0001079183f4();
          }
          ppppuStack_88 = ppppuStack_e8;
          pppppuStack_90 = uStack_f0;
          uStack_78 = 0xffffffffffffffff;
          ppppuStack_80 = (ulong ****)0x0;
          uStack_5c = 0;
          uStack_58 = 0;
          uStack_64 = 0;
          uStack_60 = 0;
          uStack_54 = 0;
          ppppuStack_70 = (ulong ****)pppppuVar28;
          uStack_68 = (int)lVar24;
          func_0x000107916bb8(*puVar32);
          func_0x000107917e2c();
          uStack_78 = 0xffffffffffffffff;
          ppppuStack_80 = (ulong ****)0x0;
          uStack_64 = 1;
          uStack_60 = 0;
          uStack_5c = 0;
          uStack_58 = 0;
          uStack_54 = 0;
          pppppuStack_90 = (ulong *****)unaff_d12;
          ppppuStack_88 = (ulong ****)pppppuVar40;
          ppppuStack_70 = (ulong ****)pppppuVar28;
          uStack_68 = (int)lVar24;
          func_0x000107916bb8(*puVar32);
          func_0x000107917e2c();
          if ((((pppppuVar28 == pppppuVar29) && (*(long *)(puVar32 + 2) == extraout_x10_00)) &&
              (bVar7 = *(long *)(puVar32 + 6) == lVar31, bVar7)) &&
             (func_0x00010791835c(*(undefined8 *)(puVar32 + 4)), bVar7)) {
            lVar22 = *(long *)(puVar32 + 8) - uVar15;
            if (*(long *)(puVar32 + 8) < (long)uVar15) {
              if (extraout_x10_00 != 0) {
                pppppuVar35 = pppppuVar23;
              }
              lVar22 = lVar22 + ((long)(*pppppuVar35 + (long)extraout_x15 * 4)[1] -
                                 (long)(*pppppuVar35)[(long)extraout_x15 * 4] >> 4) + -1;
            }
            if ((lStack_a8 == 0) || (lVar22 < lStack_a0)) {
              lStack_a0 = lVar22;
            }
            lStack_a8 = lStack_a8 + 1;
          }
        }
      }
      func_0x00010002c7d4();
    }
    if (lStack_a8 != 0) {
      func_0x000107917990(param_1[2]);
      ppppuStack_88 = (ulong ****)(extraout_x8_04 + (long)pppppuVar29 * extraout_x9_01);
      ppppuStack_80 = (ulong ****)auStack_98;
      ppppppuVar10 = (ulong ******)pppppuStack_d0;
      pppppuStack_90 = (ulong *****)apppuStack_b8;
      FUN_1078f3638(pppppuStack_d0,lStack_c8,&pppppuStack_90);
      pppppuVar29 = (ulong *****)0x0;
      lVar27 = lStack_c8 - (long)pppppuStack_d0;
      ppppppuVar25 = (ulong ******)(pppppuStack_d0 + 2);
      for (lVar31 = 0; lVar27 / 0x70 != lVar31; lVar31 = lVar31 + 1) {
        if (lVar31 != 0) {
          func_0x000107915d14();
          pppppuVar29 = (ulong *****)((long)pppppuVar29 + ((ulong)ppppppuVar10 & 0xffffffff));
        }
        *ppppppuVar25 = pppppuVar29;
        ppppppuVar25 = ppppppuVar25 + 0xe;
      }
      pppppuVar29 = param_1[2];
      pppppuStack_90 = (ulong *****)ppppppuVar12;
      ppppuStack_80 = (ulong ****)0x0;
      ppppuStack_88 = (ulong ****)0x0;
      ppppuStack_70 = (ulong ****)0x0;
      uStack_78 = 0;
      uStack_60 = 0;
      uStack_5c = 0;
      uStack_68 = 0;
      uStack_64 = 0;
      ppppppuVar25 = ppppppuVar12;
      ppppppuVar33 = (ulong ******)*ppppppuVar12;
      while (ppppuVar26 = ppppuStack_70, ppppuVar21 = ppppuStack_80,
            pppppuVar28 = (ulong *****)ppppuStack_88, ppppppuVar33 != ppppppuVar25 + 1) {
        pppppuVar28 = ppppppuVar33[4];
        ppppuVar21 = *pppppuVar29;
        if (((ulong)ppppuVar21[(long)pppppuVar28 * 0x36 + 4] & 1) == 0) {
          if ((*(int *)(ppppuVar21 + (long)pppppuVar28 * 0x36 + 5) == 1) &&
             (*(int *)(ppppuVar21 + (long)pppppuVar28 * 0x36 + 0x1c) == 1)) goto LAB_1078f301c;
          ppppuVar26 = ppppuVar21 + (long)pppppuVar28 * 0x36 + 0x28;
          ppppuVar21 = ppppuVar21 + (long)pppppuVar28 * 0x36 + 0x11;
          for (lVar31 = 0; ppppppuVar25 = (ulong ******)pppppuStack_90, lVar31 != 2;
              lVar31 = lVar31 + 1) {
            pppppuVar35 = (ulong *****)*ppppuVar21;
            if (pppppuVar35 == (ulong *****)0xffffffffffffffff) {
              pppppuVar35 = (ulong *****)ppppuVar21[-1];
            }
            iVar9 = *(int *)(ppppuVar21 + -0xc);
            if (iVar9 == 4) {
LAB_1078f2adc:
              if (pppppuVar35 == pppppuVar28) {
                uVar17 = 0;
                uVar6 = true;
                goto LAB_1078f2c54;
              }
              ppppuStack_e8 = (ulong ****)CONCAT44(ppppuStack_e8._4_4_,(int)lVar31);
              uStack_d8 = 0xffffffffffffffff;
              ppppppuVar10 = (ulong ******)&ppppuStack_88;
              uStack_f0 = pppppuVar28;
              ppppuStack_e0 = (ulong ****)pppppuVar35;
              func_0x0001078f41e0(ppppppuVar10,&uStack_f0);
            }
            else if (iVar9 == 3) {
              pppppuVar23 = (ulong *****)*ppppuVar26;
              if (pppppuVar23 == (ulong *****)0xffffffffffffffff) {
                pppppuVar23 = (ulong *****)ppppuVar26[-1];
              }
              if ((pppppuVar35 != pppppuVar23) &&
                 (ppppppuVar10 = (ulong ******)pppppuStack_90, func_0x000107916764(),
                 ppppppuVar10 == (ulong ******)0x0)) {
                ppppuStack_e8 = (ulong ****)CONCAT44(ppppuStack_e8._4_4_,(int)lVar31);
                uStack_d8 = 0xffffffffffffffff;
                ppppppuVar10 = (ulong ******)&ppppuStack_70;
                uStack_f0 = pppppuVar28;
                ppppuStack_e0 = (ulong ****)pppppuVar35;
                func_0x0001078f41e0(ppppppuVar10,&uStack_f0);
              }
            }
            else if (iVar9 == 1) goto LAB_1078f2adc;
            ppppuVar26 = ppppuVar26 + -0x17;
            ppppuVar21 = ppppuVar21 + 0x17;
          }
        }
        func_0x000107917cec();
        ppppppuVar33 = ppppppuVar10;
      }
      pppppuVar29 = (ulong *****)CONCAT44(uStack_64,uStack_68);
      uVar6 = (ulong *****)ppppuStack_70 == pppppuVar29;
      if (!(bool)uVar6) {
        while (pppppuVar28 != (ulong *****)ppppuVar21) {
          func_0x0001079151b8();
          func_0x0001078f4268();
          func_0x00010791823c();
        }
        while ((ulong *****)ppppuVar26 != pppppuVar29) {
          func_0x0001079151b8();
          func_0x0001078f4268();
          func_0x00010791823c();
        }
        for (; uVar6 = pppppuVar28 == (ulong *****)ppppuVar21, pppppuVar35 = (ulong *****)ppppuVar26
            , !(bool)uVar6; pppppuVar28 = pppppuVar28 + 4) {
          for (; pppppuVar35 != pppppuVar29; pppppuVar35 = pppppuVar35 + 4) {
            if ((pppppuVar35[2] == pppppuVar28[2]) && (pppppuVar35[3] == pppppuVar28[3]))
            goto LAB_1078f301c;
          }
        }
      }
      uVar17 = 1;
      goto LAB_1078f2c54;
    }
    func_0x000107917198();
    goto LAB_1078f2de8;
  }
  uVar5 = 1;
  if (*(int *)(ppppuVar21 + (long)pppppuVar29 * 0x36 + 0x30) != 1) {
    uVar5 = 0xffffffff;
  }
  uVar18 = 0;
  if (*(int *)(ppppuVar21 + (long)pppppuVar29 * 0x36 + 0x19) != 1) {
    uVar18 = uVar5;
  }
  *param_5 = uVar18;
  uVar6 = 0;
  if (uVar18 == 0xffffffff) {
    if (*(int *)(ppppuVar21 + (long)pppppuVar29 * 0x36 + 0x19) == 3 &&
        *(int *)(ppppuVar21 + (long)pppppuVar29 * 0x36 + 0x30) == 3) {
LAB_1078f2de8:
      uVar18 = 1;
      goto LAB_1078f2dec;
    }
    *param_5 = 0xffffffff;
    lVar31 = 0;
    if (*(int *)(ppppuVar21 + (long)pppppuVar29 * 0x36 + 5) != 4 ||
        *(int *)(ppppuVar21 + (long)pppppuVar29 * 0x36 + 0x1c) != 4) {
      bVar7 = false;
      pppuVar16 = ppppuVar21[(long)pppppuVar29 * 0x36 + 0x17];
      ppppuVar26 = ppppuVar21 + (long)pppppuVar29 * 0x36 + 0x19;
      lVar27 = 0xffffffff;
      for (; uVar18 = (uint)lVar27, lVar31 != 2; lVar31 = lVar31 + 1) {
        if ((*(uint *)(ppppuVar26 + -0x14) == 1) && (((ulong)*ppppuVar26 & 0xfffffffe) != 2)) {
          if (bVar7) {
            if (pppuVar16 == (ulong ***)0xffffffffffffffff ||
                pppuVar16 != ppppuVar21[(long)pppppuVar29 * 0x36 + 0x2e]) {
              if (ppppuVar26[-0x12] != extraout_x15) {
LAB_1078f2c3c:
                bVar7 = true;
                goto LAB_1078f2c40;
              }
            }
            else if (ppppuVar26[-0x12] == extraout_x15) goto LAB_1078f2c3c;
          }
          *param_5 = (uint)lVar31;
          bVar7 = true;
          lVar27 = lVar31;
        }
LAB_1078f2c40:
        ppppuVar26 = ppppuVar26 + 0x17;
      }
      if (bVar7) {
        uVar6 = 1;
        goto LAB_1078f2e54;
      }
      goto LAB_1078f2de8;
    }
    pppppuStack_90 = (ulong *****)0x0;
    ppppuStack_88 = (ulong ****)0x0;
    pppppuStack_d0 = (ulong *****)((ulong)pppppuStack_d0 & 0xffffffffffff0000);
    uStack_f0 = (ulong *****)((ulong)uStack_f0 & 0xffffffffffff0000);
    ppppuVar26 = ppppuVar21 + (long)pppppuVar29 * 0x36 + 0x11;
    for (; lVar31 != 2; lVar31 = lVar31 + 1) {
      pppppuVar29 = (ulong *****)*ppppuVar26;
      if (pppppuVar29 == (ulong *****)0xffffffffffffffff) {
        pppppuVar29 = (ulong *****)ppppuVar26[-1];
        (&pppppuStack_90)[lVar31] = pppppuVar29;
        if (pppppuVar29 != (ulong *****)0xffffffffffffffff) goto LAB_1078f3078;
        bVar7 = false;
      }
      else {
        (&pppppuStack_90)[lVar31] = pppppuVar29;
LAB_1078f3078:
        if (((long)ppppuVar21[(long)pppppuVar29 * 0x36 + 3] < 1) &&
           (*(int *)(ppppuVar21 + (long)pppppuVar29 * 0x36 + 5) != 1)) {
          bVar7 = (*(int *)(ppppuVar21 + (long)pppppuVar29 * 0x36 + 5) == 4 ||
                  *(int *)(ppppuVar21 + (long)pppppuVar29 * 0x36 + 0x1c) == 1) ||
                  *(int *)(ppppuVar21 + (long)pppppuVar29 * 0x36 + 0x1c) == 4;
        }
        else {
          bVar7 = true;
        }
      }
      *(bool *)((long)&pppppuStack_d0 + lVar31) = bVar7;
      bVar8 = false;
      if (pppppuVar29 == param_2) {
        bVar8 = bVar7;
      }
      *(bool *)((long)&uStack_f0 + lVar31) = bVar8;
      ppppuVar26 = ppppuVar26 + 0x17;
    }
    if ((uint)(byte)uStack_f0 == (uint)uStack_f0._1_1_) {
      if (((char)pppppuStack_d0 == '\x01') && (((ulong)pppppuStack_d0 & 0x100) != 0)) {
        abStack_100[0] = 0;
        abStack_100[1] = 0;
        ppppuVar21 = ppppuVar21 + 5;
        for (lVar31 = 0; lVar31 != 2; lVar31 = lVar31 + 1) {
          abStack_100[lVar31] = *(int *)(ppppuVar21 + (long)(&pppppuStack_90)[lVar31] * 0x36) == 1;
          ppppuVar21 = ppppuVar21 + 0x17;
        }
        uVar6 = (uint)abStack_100[0] == (uint)abStack_100[1];
        if (!(bool)uVar6) {
          uVar18 = abStack_100[0] ^ 1;
          goto LAB_1078f2e40;
        }
      }
      func_0x0001079180cc();
      lVar27 = 0xffffffff;
      ppppppuVar10 = &pppppuStack_d0;
      uVar15 = extraout_x10_01;
      for (lVar31 = extraout_x9_02; uVar18 = (uint)lVar27, lVar31 != 2; lVar31 = lVar31 + 1) {
        if (*(char *)((long)ppppppuVar10 + lVar31) == '\x01') {
          func_0x000107918650();
          lVar31 = extraout_x9_03;
          ppppppuVar10 = extraout_x11;
          if ((extraout_x10_02 & 1) == 0) {
            *param_5 = (uint)extraout_x9_03;
            uVar15 = 1;
            lVar27 = extraout_x9_03;
          }
          else {
            uVar15 = 1;
            lVar27 = extraout_x14;
          }
        }
      }
      if ((uVar15 & 1) != 0) {
        uVar6 = 1;
        goto LAB_1078f2e54;
      }
      goto LAB_1078f2de8;
    }
    uVar18 = (byte)uStack_f0 ^ 1;
    uVar6 = false;
    goto LAB_1078f2e40;
  }
  goto LAB_1078f2e54;
LAB_1078f301c:
  uVar6 = true;
  uVar17 = 0;
LAB_1078f2c54:
  uStack_58 = CONCAT31(uStack_58._1_3_,uVar17);
  ppppppuVar10 = &pppppuStack_90;
  func_0x0001078f34b0(ppppppuVar10,param_4,param_5,1);
  if (((ulong)ppppppuVar10 & 1) == 0) {
    ppppuVar21 = *param_1[2];
    piVar34 = (int *)((long)pppppuStack_d0 + 0x2c);
    uVar15 = (lStack_c8 - (long)pppppuStack_d0) / 0x70;
    for (uVar30 = uVar15; uVar30 != 0; uVar30 = uVar30 - 1) {
      lVar31 = *(long *)(piVar34 + -7);
      if ((((lVar31 != 0) && (*piVar34 != 0)) &&
          (*(int *)(ppppuVar21 + *(long *)(piVar34 + -3) * 0x36 + (long)piVar34[-1] * 0x17 + 5) == 4
           || *(int *)(ppppuVar21 + *(long *)(piVar34 + -3) * 0x36 + (long)piVar34[-1] * 0x17 + 5)
              == 1)) &&
         (ppppuVar21
          [(long)pppppuStack_d0[4] * 0x36 + (long)*(int *)(pppppuStack_d0 + 5) * 0x17 + 0x17] ==
          ppppuVar21[*(long *)(piVar34 + -3) * 0x36 + (long)piVar34[-1] * 0x17 + 0x17]))
      goto LAB_1078f2d00;
      piVar34 = piVar34 + 0x1c;
    }
    lVar31 = -1;
LAB_1078f2d00:
    uVar18 = 0;
    uVar30 = 1;
    for (piVar34 = (int *)((long)pppppuStack_d0 + 0x9c);
        (uVar6 = uVar30 == uVar15, uVar30 < uVar15 &&
        (uVar6 = *(long *)(piVar34 + -7) == lVar31, *(long *)(piVar34 + -7) <= lVar31));
        piVar34 = piVar34 + 0x1c) {
      if ((bool)uVar6 && *piVar34 == 1) {
        pppppuVar29 = *(ulong ******)(piVar34 + -3);
        uVar5 = piVar34[-1];
        lVar27 = (long)(int)uVar5;
        if ((((*(byte *)((long)ppppuVar21 + lVar27 * 0xb8 + (long)pppppuVar29 * 0x1b0 + 0xcd) & 1)
              == 0) &&
            (ppppuVar21[(long)pppppuVar29 * 0x36 + lVar27 * 0x17 + 0x13] == (ulong ***)0x0)) &&
           (ppppuVar21[(long)pppppuVar29 * 0x36 + lVar27 * 0x17 + 0x14] != (ulong ***)0x0)) {
          pppuVar16 = ppppuVar21[(long)pppppuVar29 * 0x36 + lVar27 * 0x17 + 0x11];
          if (pppuVar16 == (ulong ***)0xffffffffffffffff) {
            pppuVar16 = ppppuVar21[(long)pppppuVar29 * 0x36 + lVar27 * 0x17 + 0x10];
          }
          if (pppppuVar29 == param_2 && uVar5 == param_3) {
            uVar20 = 4;
          }
          else {
            ppppppuVar10 = ppppppuVar12;
            func_0x0001078f1ad8(ppppppuVar12,pppuVar16);
            uVar19 = 1;
            if (ppppppuVar10 == (ulong ******)0x0) {
              uVar19 = 2;
            }
            uVar20 = 3;
            if (pppppuVar29 != param_2) {
              uVar20 = uVar19;
            }
          }
          if (uVar18 < uVar20) {
            *param_4 = (long)pppppuVar29;
            *param_5 = uVar5;
            uVar18 = uVar20;
          }
        }
      }
      uVar30 = uVar30 + 1;
    }
    if (uVar18 != 0) goto LAB_1078f2e10;
    ppppppuVar10 = &pppppuStack_90;
    func_0x0001078f34b0(ppppppuVar10,param_4,param_5,0);
    func_0x000107917ea0();
    func_0x000107917d60();
    func_0x000107917198();
    if (((ulong)ppppppuVar10 & 1) == 0) goto LAB_1078f2de8;
  }
  else {
LAB_1078f2e10:
    func_0x000107917ea0();
    func_0x000107917d60();
    func_0x000107917198();
  }
  if ((param_7 == 0) || (uVar6 = *param_4 == extraout_x10, uVar18 = extraout_w12, !(bool)uVar6)) {
    uVar18 = *param_5;
  }
  else {
LAB_1078f2e40:
    *param_5 = uVar18;
  }
LAB_1078f2e54:
  ppppuVar21 = *param_1[9] + *param_4 * 0x36;
  if (((*(byte *)((long)ppppuVar21 + (long)(int)uVar18 * 0xb8 + 0xcd) & 1) == 0) &&
     (uVar6 = 1, *(int *)(ppppuVar21 + (long)(int)uVar18 * 0x17 + 0x19) != 2)) {
    func_0x0001078f24b8(param_6,ppppuVar21,param_1[0xd]);
    if (*(int *)(ppppuVar21 + (long)(int)uVar18 * 0x17 + 5) == 4) {
      for (lVar31 = 0; lVar31 != 0x170; lVar31 = lVar31 + 0xb8) {
        if (*(int *)((long)ppppuVar21 + lVar31 + 200) == 0) {
          *(undefined4 *)((long)ppppuVar21 + lVar31 + 200) = 2;
        }
      }
    }
    else {
      *(undefined4 *)(ppppuVar21 + (long)(int)uVar18 * 0x17 + 0x19) = 2;
    }
    uVar6 = ppppuVar21[3] == (ulong ***)0x1;
    if (0 < (long)ppppuVar21[3]) {
      pppuVar16 = ppppuVar21[(long)(int)uVar18 * 0x17 + 0x15];
      func_0x000107916c80();
      func_0x000107918820();
      while (uVar6 = param_6 == (ulong *)(extraout_x8_05 + 0x30), !(bool)uVar6) {
        ppppuVar21 = *param_1[2] + param_6[4] * 0x36 + 0x19;
        lVar31 = 2;
        do {
          if ((*(int *)ppppuVar21 == 0) && (ppppuVar21[-4] == pppuVar16)) {
            *(int *)ppppuVar21 = 2;
          }
          ppppuVar21 = ppppuVar21 + 0x17;
          lVar31 = lVar31 + -1;
        } while (lVar31 != 0);
        func_0x00010002c7d4();
      }
    }
    uVar14 = 0;
  }
  else {
    uVar14 = 5;
  }
LAB_1078f2df0:
  func_0x000107913564(uStack_18);
  if ((bool)uVar6) {
    return uVar14;
  }
  ___stack_chk_fail();
  func_0x000107914aac();
code_r0x0001078f31e4:
  func_0x000107913cd4();
  func_0x000107917b70();
  if ((uVar14 & 1) == 0) {
    func_0x000107914938();
    func_0x000107914a4c();
    func_0x0001079173dc();
    uVar15 = (ulong)((bool)uVar6 && extraout_x9_04 == extraout_x11_00);
  }
  else {
    uVar15 = 1;
  }
  return uVar15;
}



/* Entry: 1078f3638; end: 1078f3663;  */

/* WARNING: Possible PIC construction at 0x0001078f3850: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001078f3854) */

void FUN_1078f3638(undefined1 *param_1,undefined1 *param_2)

{
  undefined1 *puVar1;
  undefined1 uVar2;
  char cVar3;
  char cVar4;
  undefined1 uVar5;
  int iVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  undefined1 *puVar9;
  ulong extraout_x8;
  undefined1 *puVar10;
  long extraout_x9;
  undefined8 *unaff_x19;
  undefined1 *unaff_x20;
  long lVar11;
  undefined1 *unaff_x21;
  long unaff_x22;
  long unaff_x23;
  long lVar12;
  undefined1 *unaff_x24;
  undefined1 *unaff_x26;
  ulong uVar13;
  undefined1 *unaff_x27;
  undefined1 *unaff_x28;
  undefined1 *unaff_x29;
  undefined *unaff_x30;
  undefined8 unaff_d10;
  undefined8 unaff_d11;
  
  uVar2 = param_2 <= param_1;
  if (param_1 == param_2) {
    return;
  }
  uVar5 = 0;
  puVar1 = (undefined1 *)register0x00000008;
code_r0x0001078f3664:
  *(undefined8 *)(puVar1 + -0x80) = unaff_d11;
  *(undefined8 *)(puVar1 + -0x78) = unaff_d10;
  func_0x0001079175f0();
  *(undefined1 **)(puVar1 + -0x10) = unaff_x29;
  *(undefined **)(puVar1 + -8) = unaff_x30;
  unaff_x29 = puVar1 + -0x10;
  func_0x0001079141cc();
code_r0x0001078f3688:
  func_0x0001079177bc();
code_r0x0001078f368c:
  func_0x0001079148f8();
  if (!(bool)uVar2 || (bool)uVar5) {
                    /* WARNING: Could not recover jumptable at 0x0001078f3964. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(&UNK_1078f3968 + (ulong)(byte)unaff_x27[0x10dedb8ec] * 4))();
    return;
  }
  uVar2 = 0xa7e < extraout_x8;
  if ((long)extraout_x8 < 0xa80) {
    if (((ulong)unaff_x26 & 1) == 0) {
      if (unaff_x21 != unaff_x24) {
        puVar7 = unaff_x21 + -0x70;
        while (unaff_x21 = unaff_x21 + 0x70, unaff_x21 != unaff_x24) {
          func_0x000107913f88();
          func_0x000107915848();
          func_0x0001078f3c30();
          if ((int)param_1 != 0) {
            func_0x000107913d48(puVar1 + -0xf8);
            puVar8 = puVar7;
            do {
              param_1 = puVar8;
              func_0x000107914a98(param_1 + 0xe0,param_1 + 0x70);
              func_0x000107913f88();
              uVar13 = 0;
              func_0x00010791648c();
              puVar8 = param_1 + -0x70;
            } while ((uVar13 & 1) != 0);
            param_1 = param_1 + 0x70;
            func_0x000107914a98(param_1,puVar1 + -0xf8);
          }
          puVar7 = puVar7 + 0x70;
        }
      }
      goto code_r0x0001078f3968;
    }
    if (unaff_x21 == unaff_x24) goto code_r0x0001078f3968;
    lVar11 = 0;
    puVar7 = unaff_x21;
    goto code_r0x0001078f3a14;
  }
  if (unaff_x23 != 0) {
    func_0x0001079185e8();
    if ((bool)uVar2) {
      func_0x000107913e38();
      func_0x000107916844();
      unaff_x27 = unaff_x20 + -0x70;
      func_0x000107916844(unaff_x21 + 0x70,unaff_x27,*(undefined8 *)(puVar1 + -0x170));
      func_0x000107916844(unaff_x21 + 0xe0,unaff_x20 + 0x70,*(undefined8 *)(puVar1 + -0x178));
      func_0x000107915808();
      func_0x0001078f3d34();
      func_0x000107913cf0(puVar1 + -0xf8);
      func_0x000107913d48();
      func_0x000107914a80();
    }
    else {
      func_0x000107914a6c();
      func_0x0001078f3d34();
    }
    unaff_x23 = unaff_x23 + -1;
    if (((ulong)unaff_x26 & 1) == 0) {
      puVar7 = unaff_x21 + -0x70;
      func_0x000107918368(unaff_x19[1]);
      func_0x0001079138a8();
      func_0x00010791648c();
      if (((ulong)puVar7 & 1) == 0) {
        param_1 = puVar1 + -0x168;
        func_0x000107913cf0();
        func_0x0001079138a8();
        func_0x000107915260();
        func_0x0001078f3c30();
        puVar7 = unaff_x21;
        if (((ulong)param_1 & 1) == 0) {
          do {
            func_0x000107917870(puVar7 + 0x70);
            if ((bool)uVar2) break;
            func_0x000107913b40();
            func_0x0001078f3c30();
            puVar7 = unaff_x27;
          } while ((int)param_1 == 0);
        }
        else {
          do {
            unaff_x27 = puVar7 + 0x70;
            func_0x000107913b40();
            func_0x0001078f3c30();
            puVar7 = unaff_x27;
          } while (((ulong)param_1 & 1) == 0);
        }
        func_0x000107917738();
        puVar7 = unaff_x24;
        if (!(bool)uVar2) {
          do {
            unaff_x26 = puVar7 + -0x70;
            param_1 = puVar1 + -0x168;
            func_0x000107913c20();
            func_0x00010791564c();
            puVar7 = unaff_x26;
          } while (((ulong)param_1 & 1) != 0);
        }
        while (unaff_x27 < unaff_x26) {
          func_0x000107914948();
          func_0x0001079171fc();
          func_0x000107914a98();
          puVar7 = unaff_x26;
          func_0x000107914a98(unaff_x26,puVar1 + -0xf8);
          func_0x000107915de8(*unaff_x19);
          do {
            unaff_x27 = unaff_x27 + 0x70;
            func_0x000107913b40();
            func_0x0001078f3c30();
          } while ((int)puVar7 == 0);
          do {
            unaff_x26 = unaff_x26 + -0x70;
            param_1 = puVar1 + -0x168;
            func_0x000107913c20();
            func_0x00010791564c();
          } while (((ulong)param_1 & 1) != 0);
        }
        unaff_x20 = unaff_x27 + -0x70;
        uVar2 = unaff_x20 <= unaff_x21;
        uVar5 = unaff_x21 == unaff_x20;
        if (!(bool)uVar5) {
          param_1 = unaff_x21;
          func_0x000107913d48();
        }
        func_0x000107914a80();
        unaff_x26 = (undefined1 *)0x0;
        goto code_r0x0001078f368c;
      }
    }
    else {
      func_0x000107918368(unaff_x19[1]);
    }
    func_0x000107913cf0(puVar1 + -0x168);
    unaff_x27 = (undefined1 *)0x0;
    do {
      unaff_x27 = unaff_x27 + 0x70;
      puVar7 = unaff_x27 + (long)unaff_x21;
      func_0x0001079138a8(puVar7,puVar1 + -0x168);
      func_0x0001078f3c30();
    } while (((ulong)puVar7 & 1) != 0);
    puVar7 = unaff_x21 + (long)unaff_x27;
    unaff_x20 = unaff_x24;
    if (unaff_x27 == (undefined1 *)0x70) {
      do {
        if (unaff_x20 <= puVar7) break;
        unaff_x20 = unaff_x20 + -0x70;
        func_0x000107913c20();
        puVar8 = unaff_x20;
        func_0x00010791564c();
      } while (((ulong)puVar8 & 1) == 0);
    }
    else {
      do {
        unaff_x20 = unaff_x20 + -0x70;
        func_0x000107913c20();
        puVar8 = unaff_x20;
        func_0x00010791564c();
      } while ((int)puVar8 == 0);
    }
    func_0x0001079178ac();
    while (unaff_x27 < unaff_x28) {
      func_0x000107914948();
      func_0x000107914a98(unaff_x27,unaff_x28);
      func_0x000107914a98(unaff_x28,puVar1 + -0xf8);
      func_0x000107915de8(*unaff_x19);
      do {
        unaff_x27 = unaff_x27 + 0x70;
        func_0x000107913c20();
        puVar8 = unaff_x27;
        func_0x00010791564c();
      } while (((ulong)puVar8 & 1) != 0);
      do {
        unaff_x28 = unaff_x28 + -0x70;
        func_0x000107913c20();
        puVar8 = unaff_x28;
        func_0x00010791564c();
      } while (((ulong)puVar8 & 1) == 0);
    }
    unaff_x28 = unaff_x27 + -0x70;
    if (unaff_x21 != unaff_x28) {
      func_0x000107915884();
      func_0x000107914a98();
    }
    param_1 = unaff_x28;
    func_0x000107914a98(unaff_x28,puVar1 + -0x168);
    uVar2 = unaff_x20 <= puVar7;
    uVar5 = puVar7 == unaff_x20;
    if (!(bool)uVar2) goto code_r0x0001078f384c;
    func_0x0001079145cc();
    func_0x0001078f3f78();
    func_0x00010791487c();
    func_0x0001078f3f78();
    if ((int)param_1 == 0) goto code_r0x0001078f3848;
    unaff_x24 = unaff_x28;
    if (((ulong)unaff_x20 & 1) != 0) goto code_r0x0001078f3968;
    goto code_r0x0001078f3688;
  }
  if (unaff_x21 == unaff_x24) goto code_r0x0001078f3968;
  func_0x0001079169f0();
  for (; -1 < unaff_x22; unaff_x22 = unaff_x22 + -1) {
    func_0x0001079143fc();
    func_0x0001078f40d8();
  }
  do {
    cVar3 = SBORROW8((long)unaff_x27,2);
    cVar4 = (long)(unaff_x27 + -2) < 0;
    if ((long)unaff_x27 < 2) goto code_r0x0001078f3968;
    *(undefined1 **)(puVar1 + -0x170) = unaff_x24;
    puVar7 = puVar1 + -0x168;
    func_0x000107913cf0();
    puVar10 = (undefined1 *)0x0;
    uVar13 = (ulong)(unaff_x27 + -2) >> 1;
    puVar8 = unaff_x21;
    do {
      iVar6 = (int)puVar7;
      lVar11 = (long)puVar10 * 0x70;
      func_0x00010791419c();
      puVar9 = puVar8 + lVar11 + 0x70;
      puVar10 = unaff_x28;
      if (cVar4 != cVar3) {
        func_0x000107913f88();
        func_0x000107915320();
        func_0x0001078f3c30();
        puVar9 = (undefined1 *)(extraout_x9 + 0xe0);
        puVar10 = unaff_x24;
        if (iVar6 == 0) {
          puVar9 = puVar8 + lVar11 + 0x70;
          puVar10 = unaff_x28;
        }
      }
      func_0x000107913ce4();
      iVar6 = (int)puVar8;
      cVar3 = SBORROW8((long)puVar10,uVar13);
      cVar4 = (long)((long)puVar10 - uVar13) < 0;
      puVar7 = puVar8;
      puVar8 = puVar9;
      unaff_x28 = puVar10;
    } while ((long)puVar10 <= (long)uVar13);
    unaff_x24 = (undefined1 *)(*(long *)(puVar1 + -0x170) + -0x70);
    if (puVar9 == unaff_x24) {
      puVar7 = puVar1 + -0x168;
code_r0x0001078f3bbc:
      func_0x000107914a98(puVar9,puVar7);
    }
    else {
      func_0x0001079177b0();
      func_0x000107914a98();
      func_0x000107914808();
      if (0x70 < (long)(puVar9 + (0x70 - (long)unaff_x21))) {
        uVar13 = (ulong)(puVar9 + (0x70 - (long)unaff_x21)) / 0x70 - 2 >> 1;
        func_0x000107913f88();
        func_0x0001079152e8();
        func_0x0001078f3c30();
        if (iVar6 != 0) {
          func_0x000107913ce4(puVar1 + -0xf8);
          puVar7 = unaff_x21 + uVar13 * 0x70;
          do {
            puVar9 = puVar7;
            func_0x000107913d48(puVar8);
            if (uVar13 == 0) break;
            uVar13 = uVar13 - 1 >> 1;
            puVar7 = unaff_x21 + uVar13 * 0x70;
            func_0x000107913f88();
            puVar10 = puVar7;
            func_0x0001078f3c30(puVar7,puVar1 + -0xf8);
            puVar8 = puVar9;
          } while (((ulong)puVar10 & 1) != 0);
          puVar7 = puVar1 + -0xf8;
          goto code_r0x0001078f3bbc;
        }
      }
    }
    unaff_x27 = unaff_x27 + -1;
  } while( true );
code_r0x0001078f3a14:
  puVar7 = puVar7 + 0x70;
  if (puVar7 == unaff_x24) {
code_r0x0001078f3968:
    func_0x000107914abc(*(undefined8 *)(puVar1 + -8));
    return;
  }
  func_0x000107913f88();
  puVar8 = puVar7;
  func_0x0001078f3c30();
  if ((int)puVar8 != 0) {
    func_0x000107913ce4(puVar1 + -0xf8);
    lVar12 = lVar11;
    do {
      func_0x000107914a98(unaff_x21 + lVar12 + 0x70);
      if (lVar12 == 0) break;
      lVar12 = lVar12 + -0x70;
      func_0x000107913f88();
      puVar8 = puVar1 + -0xf8;
      func_0x0001078f3c30(puVar8,unaff_x21 + lVar12);
    } while (((ulong)puVar8 & 1) != 0);
    func_0x000107914a98();
  }
  lVar11 = lVar11 + 0x70;
  goto code_r0x0001078f3a14;
code_r0x0001078f3848:
  if (((ulong)unaff_x20 & 1) == 0) {
code_r0x0001078f384c:
    func_0x0001079141b4();
    unaff_x30 = &UNK_1078f3854;
    puVar1 = puVar1 + -0x180;
    goto code_r0x0001078f3664;
  }
  goto code_r0x0001078f368c;
}



/* Entry: 1078f425c; end: 1078f4267;  */

undefined8 FUN_1078f425c(long param_1,long param_2,long param_3,int param_4)

{
  int *piVar1;
  long lVar2;
  
  func_0x000107913ad0();
  piVar1 = (int *)(param_1 + 0x2c);
  lVar2 = (param_2 - param_1) / 0x70;
  while( true ) {
    if (lVar2 == 0) {
      return 0xffffffffffffffff;
    }
    if (((*(long *)(piVar1 + -3) == param_3) && (piVar1[-1] == param_4)) && (*piVar1 == 1)) break;
    piVar1 = piVar1 + 0x1c;
    lVar2 = lVar2 + -1;
  }
  return *(undefined8 *)(piVar1 + -7);
}



/* Entry: 1078f44c4; end: 1078f453b;  */

long * FUN_1078f44c4(long *param_1,long param_2,long param_3,long param_4)

{
  long lVar1;
  long lVar2;
  
  param_1[3] = 0;
  param_1[4] = param_4;
  if (param_2 == 0) {
    lVar1 = 0;
  }
  else {
    lVar2 = param_2;
    func_0x0001078f4510();
    lVar1 = param_2;
    param_2 = lVar2;
  }
  lVar2 = lVar1 + param_3 * 0x18;
  *param_1 = lVar1;
  param_1[1] = lVar2;
  param_1[2] = lVar2;
  param_1[3] = lVar1 + param_2 * 0x18;
  return param_1;
}



/* Entry: 1078f48b8; end: 1078f49f7;  */

byte FUN_1078f48b8(double *param_1,double *param_2,int *param_3)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  int iVar4;
  double *pdVar5;
  double *pdVar6;
  byte bVar7;
  int iVar8;
  double unaff_d8;
  double unaff_d9;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  
  pdVar5 = param_1;
  pdVar6 = param_2;
  func_0x000107916af4();
  dVar11 = *pdVar5;
  dVar10 = pdVar5[1];
  dVar12 = *pdVar6;
  dVar9 = pdVar6[1];
  func_0x000107916d40(dVar11);
  pdVar6 = pdVar5;
  func_0x000107916d40(dVar12);
  iVar4 = (int)pdVar6;
  if (((int)pdVar5 == 0) || (iVar4 == 0)) {
    if ((int)pdVar5 == 0) {
      if (iVar4 != 0) {
        if (dVar11 <= unaff_d9) {
          iVar8 = 1;
        }
        else {
          iVar8 = -1;
        }
        goto LAB_1078f4984;
      }
      bVar1 = false;
      bVar2 = true;
      bVar3 = false;
      if (dVar11 < unaff_d9) {
        bVar1 = false;
        bVar2 = false;
        bVar3 = true;
        if (!NAN(dVar12) && !NAN(unaff_d9)) {
          bVar1 = dVar12 < unaff_d9;
          bVar2 = dVar12 == unaff_d9;
          bVar3 = false;
        }
      }
      if (bVar2 || bVar1 != bVar3) {
        bVar1 = false;
        bVar2 = true;
        bVar3 = false;
        if (dVar12 < unaff_d9) {
          bVar1 = false;
          bVar2 = false;
          bVar3 = true;
          if (!NAN(dVar11) && !NAN(unaff_d9)) {
            bVar1 = dVar11 < unaff_d9;
            bVar2 = dVar11 == unaff_d9;
            bVar3 = false;
          }
        }
        if (bVar2 || bVar1 != bVar3) goto LAB_1078f49e4;
        iVar8 = -2;
      }
      else {
        iVar8 = 2;
      }
      func_0x0001079185dc();
      func_0x000107914cd0();
      if (iVar4 != 0) goto LAB_1078f49cc;
    }
    else {
      param_2 = param_1;
      if (dVar12 <= unaff_d9) {
        iVar8 = -1;
      }
      else {
        iVar8 = 1;
      }
LAB_1078f4984:
      dVar9 = param_2[1];
      func_0x000107914c6c();
      func_0x0001078e65dc();
      iVar4 = -iVar8;
      if (dVar9 <= unaff_d8) {
        iVar4 = iVar8;
      }
      if (((ulong)pdVar6 & 1) == 0) {
LAB_1078f49cc:
        if (0 < iVar8 * iVar4) {
          *param_3 = *param_3 + iVar8;
        }
        goto LAB_1078f49e4;
      }
    }
    bVar7 = 0;
    *(undefined1 *)(param_3 + 1) = 1;
    *param_3 = 0;
    goto LAB_1078f49ec;
  }
  bVar1 = true;
  bVar2 = false;
  if (dVar10 <= unaff_d8) {
    bVar1 = false;
    bVar2 = true;
    if (!NAN(dVar9) && !NAN(unaff_d8)) {
      bVar1 = dVar9 < unaff_d8;
      bVar2 = false;
    }
  }
  if (bVar1 == bVar2) {
LAB_1078f4920:
    *(undefined1 *)(param_3 + 1) = 1;
  }
  else {
    bVar1 = false;
    bVar2 = true;
    if (unaff_d8 <= dVar10) {
      bVar1 = false;
      bVar2 = true;
      if (!NAN(dVar9) && !NAN(unaff_d8)) {
        bVar1 = dVar9 == unaff_d8;
        bVar2 = unaff_d8 <= dVar9;
      }
    }
    if (!bVar2 || bVar1) goto LAB_1078f4920;
  }
LAB_1078f49e4:
  bVar7 = *(byte *)(param_3 + 1) ^ 1;
LAB_1078f49ec:
  return bVar7 & 1;
}



/* Entry: 1078f4c40; end: 1078f4c9b;  */

double FUN_1078f4c40(double *param_1,double *param_2)

{
  double *pdVar1;
  double dVar2;
  
  dVar2 = 0.0;
  if (0x3f < (ulong)((long)param_2 - (long)param_1)) {
    while (pdVar1 = param_1 + 2, pdVar1 != param_2) {
      dVar2 = dVar2 + (param_1[1] - param_1[3]) * (*param_1 + *pdVar1);
      param_1 = pdVar1;
    }
    dVar2 = dVar2 * 0.5;
  }
  return dVar2;
}



/* Entry: 1078f503c; end: 1078f50ab;  */

/* WARNING: Possible PIC construction at 0x0001078f50a4: Changing call to branch */

void FUN_1078f503c(ulong param_1)

{
  undefined1 in_ZR;
  undefined1 in_CY;
  ulong extraout_x8;
  ulong extraout_x8_00;
  ulong extraout_x9;
  long extraout_x10;
  long unaff_x19;
  ulong unaff_x20;
  undefined8 unaff_x21;
  undefined8 *unaff_x24;
  ulong unaff_x25;
  int unaff_w26;
  undefined *puVar1;
  undefined8 **in_stack_00000040;
  undefined8 *puStack_10;
  undefined *puStack_8;
  
  func_0x000107917a38();
  func_0x000107914124();
  if ((bool)in_CY) {
    func_0x000107913c08();
    if (extraout_x10 != 0) {
      puVar1 = (undefined *)0x1078f50a8;
code_r0x0001078f50ac:
      puStack_10 = &stack0x00000040;
      puStack_8 = puVar1;
      func_0x000107913ad0();
      func_0x000107915f10();
      in_stack_00000040 = &puStack_10;
      func_0x0001079133e4();
      while (func_0x000107915ebc(), !(bool)in_ZR) {
        func_0x00010791744c();
        func_0x0001078edfa0();
        func_0x000107916fc0();
        if ((unaff_w26 == 0) || ((param_1 & 1) == 0)) {
          func_0x00010791742c();
          in_ZR = unaff_w26 == 0;
          param_1 = unaff_x20;
          if ((bool)in_ZR) {
            param_1 = extraout_x8_00;
          }
          FUN_1078f503c(param_1,unaff_x25);
        }
      }
      return;
    }
    func_0x000107913680();
    unaff_x25 = extraout_x9;
    if ((bool)in_CY) {
      unaff_x25 = extraout_x8;
    }
    if (unaff_x25 != 0) {
      if (unaff_x25 >> 0x3d != 0) {
        puVar1 = &SUB_1078f50ac;
        func_0x000104bd35f4();
        goto code_r0x0001078f50ac;
      }
      func_0x000107915ccc();
    }
    func_0x000107913480();
    func_0x00010791692c();
    if (unaff_x20 != 0) {
      func_0x000107914d94();
    }
  }
  else {
    *unaff_x24 = unaff_x21;
    unaff_x24 = unaff_x24 + 1;
  }
  *(undefined8 **)(unaff_x19 + 8) = unaff_x24;
  return;
}



/* Entry: 1078f531c; end: 1078f552b;  */

void FUN_1078f531c(undefined8 *param_1)

{
  undefined1 in_ZR;
  undefined1 in_CY;
  undefined1 uVar1;
  bool bVar2;
  undefined1 uVar3;
  long extraout_x8;
  long extraout_x9;
  ulong unaff_x20;
  undefined8 uVar4;
  undefined1 auStack_120 [72];
  undefined1 auStack_d8 [48];
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
  undefined1 auStack_50 [32];
  
  func_0x000107913cb4();
  uVar4 = *param_1;
  func_0x0001079143ec(uVar4,param_1[2]);
  uStack_88 = param_1[1];
  uStack_70 = *param_1;
  uStack_78 = param_1[3];
  uStack_80 = param_1[2];
  uStack_a8 = 0;
  uStack_a0 = 0;
  uStack_98 = 0;
  uStack_90 = uVar4;
  uStack_68 = uStack_88;
  uStack_60 = uVar4;
  uStack_58 = uStack_78;
  func_0x0001079132d8();
  func_0x0001079139f4();
  func_0x0001078f50b8();
  func_0x000107913794();
  func_0x0001078f50b8();
  func_0x0001079155d4();
  uVar3 = 1;
  if ((bool)in_ZR) goto LAB_1078f5418;
  uVar3 = extraout_x9 - extraout_x8 == 0x80;
  uVar1 = 0;
  if ((ulong)(extraout_x9 - extraout_x8) < 0x80) {
LAB_1078f5388:
    func_0x000107913f30();
    func_0x0001078f552c();
  }
  else {
    uVar1 = 0x62 < unaff_x20;
    uVar3 = unaff_x20 == 99;
    if ((99 < unaff_x20) || (func_0x000107913f00(), !(bool)uVar1)) goto LAB_1078f5388;
    func_0x0001078f5590(auStack_d8);
    func_0x000107913df4();
    func_0x0001078f523c();
    func_0x000107915b2c();
    func_0x00010791354c();
    func_0x0001078f5588();
  }
  func_0x000107913ef0();
  in_CY = 0;
  if (((bool)uVar1) && (func_0x000107913ee0(), in_CY = 0, (bool)uVar1)) {
    in_CY = 0x62 < unaff_x20;
    uVar3 = unaff_x20 == 99;
    if ((unaff_x20 < 100) && (func_0x000107914718(), (bool)in_CY)) {
      func_0x0001078f5590(auStack_d8);
      func_0x000107915338();
      func_0x000107913880(auStack_50);
      func_0x0001078f5588();
      func_0x000107913894(auStack_50);
      func_0x0001078f5588();
      goto LAB_1078f5418;
    }
  }
  func_0x000107913f20();
  func_0x0001078f552c();
  func_0x000107913f10();
  func_0x0001078f552c();
LAB_1078f5418:
  func_0x0001079155c8();
  if (!(bool)uVar3) {
    func_0x000107914d40();
    if (((((bool)in_CY) && (func_0x000107913ed0(), (bool)in_CY)) &&
        (in_CY = 0x62 < unaff_x20, unaff_x20 < 100)) && (func_0x000107914e34(), (bool)in_CY)) {
      func_0x0001078f5590(auStack_120);
      func_0x000107915338();
      func_0x000107913adc(auStack_50,&uStack_a8);
      func_0x0001078f5588();
      func_0x000107913858(auStack_50);
      func_0x0001078f5588();
    }
    else {
      func_0x000107914858();
      func_0x0001078f552c();
      func_0x000107913ec0();
      func_0x0001078f552c();
    }
  }
  func_0x000107914d34(uStack_a0);
  if ((((bool)in_CY) && (in_CY = 0x62 < unaff_x20, unaff_x20 < 100)) &&
     (func_0x000107913ea0(), (bool)in_CY)) {
    func_0x000107913a0c();
    func_0x0001078f5588();
  }
  else {
    func_0x000107914848();
    func_0x0001078f552c();
  }
  func_0x000107913e90();
  if ((((bool)in_CY) && (bVar2 = 0x62 < unaff_x20, unaff_x20 < 100)) &&
     (func_0x000107913e80(), bVar2)) {
    func_0x00010791386c(&uStack_90);
    func_0x0001078f5588();
  }
  else {
    func_0x000107913eb0();
    func_0x0001078f552c();
  }
  func_0x000107915a84();
  func_0x000107915ac4();
  func_0x000107915a70();
  func_0x000107915af4();
  func_0x000107915ae4();
  func_0x000107915b24();
  return;
}



/* Entry: 1078f580c; end: 1078f58f7;  */

uint FUN_1078f580c(long *param_1,long param_2,long param_3,long param_4,long param_5,long param_6)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  uint uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  
  if (param_2 == 2) {
    puVar6 = (undefined8 *)(param_6 + param_3 * 0x18);
    uVar4 = *puVar6;
    func_0x0001078f4838(uVar4,puVar6[1]);
    uVar3 = (uint)uVar4;
    if (uVar3 == 0) {
      puVar1 = (undefined8 *)*param_1;
      puVar2 = (undefined8 *)param_1[1];
      if (puVar1 == puVar2) {
LAB_1078f5894:
        uVar3 = 0;
      }
      else {
        do {
          puVar5 = puVar1 + 2;
          if (puVar5 == puVar2) goto LAB_1078f5894;
          uVar4 = *puVar6;
          func_0x0001078f4838(*puVar5,puVar1[3],uVar4,puVar6[1]);
          uVar3 = (uint)uVar4;
          puVar1 = puVar5;
        } while (uVar3 == 0);
      }
    }
  }
  else {
    if (param_2 == 1) {
      param_4 = param_5 + param_3 * 0x20;
    }
    else {
      if (param_2 != 0) {
        return 0;
      }
      param_4 = param_4 + param_3 * 0x20;
    }
    func_0x0001078f58a8(param_1,param_4);
    uVar3 = (uint)param_1;
  }
  return ~uVar3 >> 0x1f;
}



/* Entry: 1078f5cb8; end: 1078f5cdb;  */

void FUN_1078f5cb8(long param_1)

{
  func_0x000107914c90();
  if (param_1 != 0) {
    func_0x000107914de8();
    func_0x00010791778c();
  }
  return;
}



/* Entry: 1078f5fc8; end: 1078f5fd3;  */

void FUN_1078f5fc8(long param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 in_ZR;
  undefined1 in_CY;
  long extraout_x8;
  long *unaff_x19;
  
  func_0x000107913ad0();
  func_0x000107914d64();
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x20) = param_4;
  if (param_2 != 0) {
    func_0x0001079186b4();
    if ((bool)in_CY) {
      func_0x000104bd35f4();
      func_0x000107918860();
      while (func_0x00010791814c(), !(bool)in_ZR) {
        unaff_x19[2] = extraout_x8 + -0x30;
        func_0x0001078e6404();
      }
      if (*unaff_x19 != 0) {
        __ZdlPv();
      }
      return;
    }
    func_0x000107917c24();
  }
  func_0x00010791570c(0x30);
  return;
}



/* Entry: 1078f6400; end: 1078f6427;  */

void FUN_1078f6400(undefined8 *param_1)

{
  func_0x0001078e648c(param_1 + 3);
  param_1[1] = *param_1;
  return;
}



/* Entry: 1078f871c; end: 1078f874f;  */

bool FUN_1078f871c(long param_1,long param_2)

{
  if (1 < (ulong)((param_2 - param_1) / 0x30)) {
    return true;
  }
  if (param_2 - param_1 != 0x30) {
    return false;
  }
  return *(long *)(param_1 + 0x20) != *(long *)(param_1 + 0x18);
}



/* Entry: 1078f93d0; end: 1078f9427;  */

void FUN_1078f93d0(ulong param_1)

{
  undefined4 *unaff_x21;
  
  func_0x000107913cd4();
  func_0x000107917c40();
  if ((param_1 & 1) == 0) {
    func_0x0001078f9728(*unaff_x21,**(undefined8 **)(unaff_x21 + 2));
  }
  return;
}



/* Entry: 1078f971c; end: 1078f9727;  */

void FUN_1078f971c(void)

{
  undefined1 in_ZR;
  undefined1 in_CY;
  bool bVar1;
  undefined1 uVar2;
  ulong unaff_x20;
  ulong unaff_x21;
  
  func_0x0001079188cc();
  func_0x0001079136f4();
  func_0x0001079153d8();
  func_0x0001079132d8();
  func_0x0001079136bc();
  func_0x0001079136d8();
  func_0x0001079155d4();
  if (!(bool)in_ZR) {
    func_0x0001079158b4();
    uVar2 = 0;
    if ((bool)in_CY) {
      uVar2 = 0x62 < unaff_x20;
      in_ZR = unaff_x20 == 99;
      if ((99 < unaff_x20) || (func_0x000107913f00(), !(bool)uVar2)) goto code_r0x0001078f924c;
      func_0x000107913d24();
      func_0x0001078f9480();
      func_0x00010791354c();
      func_0x0001078f94a4();
    }
    else {
code_r0x0001078f924c:
      func_0x000107913f30();
      func_0x0001078f966c();
    }
    func_0x000107913ef0();
    in_CY = false;
    if (((bool)uVar2) && (func_0x000107913ee0(), in_CY = false, (bool)uVar2)) {
      in_CY = 0x62 < unaff_x20;
      in_ZR = unaff_x20 == 99;
      if (unaff_x20 < 100) {
        in_CY = 0x78 < unaff_x21;
        in_ZR = unaff_x21 == 0x79;
        if ((bool)in_CY) {
          func_0x000107914c84();
          func_0x0001078f96c8();
          func_0x000107913880();
          func_0x0001078f94a4();
          func_0x000107913894();
          func_0x0001078f94a4();
          goto code_r0x0001078f92cc;
        }
      }
    }
    func_0x000107913f20();
    func_0x0001078f966c();
    func_0x000107913f10();
    func_0x0001078f966c();
  }
code_r0x0001078f92cc:
  func_0x0001079155c8();
  if ((bool)in_ZR) {
    func_0x0001079181f0();
code_r0x0001078f932c:
    uVar2 = 0;
    if (0x7f < unaff_x21) goto code_r0x0001078f9334;
  }
  else {
    func_0x0001079158a8();
    if ((((!(bool)in_CY) || (func_0x000107913ed0(), !(bool)in_CY)) ||
        (bVar1 = 0x62 < unaff_x20, 99 < unaff_x20)) || (func_0x000107914e34(), !bVar1)) {
      func_0x000107914708();
      func_0x0001078f966c();
      func_0x000107913ec0();
      func_0x0001078f966c();
      goto code_r0x0001078f932c;
    }
    func_0x000107915ee0();
    func_0x0001078f96c8();
    func_0x000107913a34();
    func_0x0001078f94a4();
    func_0x000107913650();
    func_0x0001078f94a4();
code_r0x0001078f9334:
    uVar2 = 0x62 < unaff_x20;
    if ((unaff_x20 < 100) && (func_0x000107913ea0(), (bool)uVar2)) {
      func_0x0001079139c4();
      func_0x0001078f94a4();
      goto code_r0x0001078f9358;
    }
  }
  func_0x0001079146f8();
  func_0x0001078f966c();
code_r0x0001078f9358:
  func_0x000107913e90();
  if ((((bool)uVar2) && (bVar1 = 0x62 < unaff_x20, unaff_x20 < 100)) &&
     (func_0x000107913e80(), bVar1)) {
    func_0x00010791386c(&stack0x000000b0);
    func_0x0001078f94a4();
  }
  else {
    func_0x000107913eb0();
    func_0x0001078f966c();
  }
  func_0x00010791502c();
  func_0x000107915070();
  func_0x000107915008();
  func_0x0001079150b0();
  func_0x00010791508c();
  func_0x000107915094();
  return;
}



/* Entry: 1078faa2c; end: 1078faa9b;  */

void FUN_1078faa2c(void)

{
  undefined1 in_ZR;
  undefined1 in_CY;
  long extraout_x8;
  long extraout_x10;
  
  func_0x000107917aac();
  func_0x00010791375c();
  if ((bool)in_ZR) {
    func_0x0001079165ec();
    if (!(bool)in_CY || (bool)in_ZR) {
      func_0x0001079165e0(extraout_x8 - extraout_x10 >> 2);
      func_0x0001078faac0();
      func_0x000107913404();
      func_0x0001078faa9c();
      func_0x0001079135c0();
      func_0x0001078fab0c();
    }
    else {
      func_0x000107913778();
      if (!(bool)in_ZR) {
        func_0x000107914138();
      }
      func_0x00010791461c();
    }
  }
  func_0x000107915e84();
  return;
}



/* Entry: 1078faddc; end: 1078fae77;  */

void FUN_1078faddc(void)

{
  undefined1 in_ZR;
  undefined1 auStack_d8 [168];
  
  func_0x0001079142d0();
  func_0x000107916450();
  func_0x000107913364();
  func_0x000107913b24();
  func_0x0001078f9428();
  func_0x000107915ec8();
  if (!(bool)in_ZR) {
    func_0x0001079155e0();
    func_0x0001078faedc();
    func_0x0001079155e0();
    func_0x000107914d88();
    func_0x0001078faee0();
    func_0x0001079149c4(auStack_d8);
    func_0x0001078fafa0();
    func_0x0001079155e0();
    func_0x000107913cc4();
    func_0x0001078fafa0();
  }
  func_0x000107915ed4();
  func_0x000107914d88();
  func_0x0001078faee0();
  func_0x0001079172ac();
  func_0x000107914d88();
  func_0x0001078faee0();
  func_0x0001079154b4();
  func_0x000107915384();
  func_0x0001079154e4();
  return;
}



/* Entry: 1078fb250; end: 1078fb2ab;  */

void FUN_1078fb250(void)

{
  undefined1 in_ZR;
  long extraout_x8;
  long lVar1;
  long extraout_x8_00;
  long extraout_x9;
  long extraout_x9_00;
  long *unaff_x20;
  long unaff_x22;
  long lVar2;
  
  func_0x000107915c10();
  if ((!(bool)in_ZR) && (func_0x0001079143ac(), !(bool)in_ZR)) {
    func_0x00010791589c();
    lVar1 = extraout_x8;
    lVar2 = extraout_x9;
    while (unaff_x22 != lVar2) {
      lVar2 = *unaff_x20;
      while (lVar2 != lVar1) {
        func_0x00010791415c();
        func_0x0001078fae78();
        lVar1 = unaff_x20[1];
      }
      func_0x000107915c04();
      lVar1 = extraout_x8_00;
      lVar2 = extraout_x9_00;
    }
  }
  return;
}



/* Entry: 1078fba74; end: 1078fbabb;  */

void FUN_1078fba74(void)

{
  char cVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long lVar5;
  long unaff_x21;
  long unaff_x22;
  
  func_0x000107913c7c();
  func_0x0001078fb9c8();
  lVar4 = *(long *)(unaff_x22 + 0x10);
  lVar5 = *(long *)(unaff_x21 + 0x10);
  cVar1 = SBORROW8(lVar4,lVar5);
  cVar2 = lVar4 - lVar5 < 0;
  bVar3 = lVar4 == lVar5;
  if (((lVar5 < lVar4) && (func_0x000107913b8c(), !bVar3 && cVar2 == cVar1)) &&
     (func_0x000107913b5c(), !bVar3 && cVar2 == cVar1)) {
    func_0x000107913dd0();
  }
  return;
}



/* Entry: 1078fc210; end: 1078fc3d7;  */

ulong FUN_1078fc210(ulong param_1,long param_2)

{
  ulong uVar1;
  int iVar2;
  uint uVar3;
  ulong uVar4;
  bool bVar5;
  bool bVar6;
  int iVar7;
  long *plVar8;
  ulong uVar9;
  long *plVar10;
  ulong extraout_x8;
  ulong extraout_x9;
  uint uVar11;
  long extraout_x10;
  uint uVar12;
  ulong uVar13;
  long lVar14;
  long extraout_x11;
  ulong uVar15;
  long lVar16;
  ulong uVar17;
  int iVar18;
  long unaff_x22;
  long unaff_x23;
  undefined8 unaff_x30;
  undefined8 in_stack_00000000;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  long lStack_40;
  ulong uStack_38;
  long lStack_30;
  ulong uStack_28;
  
  func_0x000107918984();
  func_0x000107913cd4();
  func_0x000107914ce8();
  if ((param_1 & 1) == 0) {
    plVar8 = (long *)(unaff_x23 + 8);
    plVar10 = (long *)(unaff_x22 + 8);
    func_0x000107915194(plVar8,plVar10,unaff_x30);
    lVar14 = *plVar8;
    lVar16 = *plVar10;
    bVar6 = SBORROW8(lVar14,lVar16);
    bVar5 = lVar14 - lVar16 < 0;
    if (lVar14 == lVar16) {
      lVar14 = plVar8[1];
      lVar16 = plVar10[1];
      bVar6 = SBORROW8(lVar14,lVar16);
      bVar5 = lVar14 - lVar16 < 0;
      if (lVar14 == lVar16) {
        lVar14 = plVar8[2];
        lVar16 = plVar10[2];
        bVar6 = SBORROW8(lVar14,lVar16);
        bVar5 = lVar14 - lVar16 < 0;
        if (lVar14 == lVar16) {
          lVar14 = plVar8[4];
          lVar16 = plVar10[4];
          bVar6 = SBORROW8(lVar14,lVar16);
          bVar5 = lVar14 - lVar16 < 0;
          if (lVar14 == lVar16) {
            bVar6 = SBORROW8(plVar8[3],plVar10[3]);
            bVar5 = plVar8[3] - plVar10[3] < 0;
          }
        }
      }
    }
    return (ulong)(bVar5 != bVar6);
  }
  func_0x000107917d54();
  if ((param_1 & 1) == 0) {
    func_0x000107915fb0();
    func_0x000107915194();
    if (50.0 <= ABS(*(double *)(param_1 + 0x10) - *(double *)(param_2 + 0x10))) {
      return (ulong)(*(double *)(param_1 + 0x10) < *(double *)(param_2 + 0x10));
    }
    func_0x000107916810();
    func_0x00010791723c();
    bVar5 = false;
    lVar14 = 0;
    if (uStack_28 != 0) {
      lVar14 = lStack_30 / (long)uStack_28;
    }
    uVar13 = lStack_30 - lVar14 * uStack_28;
    lVar16 = 0;
    if (uStack_38 != 0) {
      lVar16 = lStack_40 / (long)uStack_38;
    }
    uVar17 = lStack_40 - lVar16 * uStack_38;
    uVar9 = (long)uVar13 >> 0x3f;
    uVar15 = 0;
    if (uStack_28 != 0) {
      uVar15 = (((uVar13 & (uVar9 ^ 0xffffffffffffffff)) - uVar13) + uVar9) / uStack_28;
    }
    lVar14 = lVar14 - (uVar15 - uVar9);
    uVar1 = (long)uVar17 >> 0x3f;
    uVar4 = 0;
    if (uStack_38 != 0) {
      uVar4 = (((uVar17 & (uVar1 ^ 0xffffffffffffffff)) - uVar17) + uVar1) / uStack_38;
    }
    lVar16 = lVar16 - (uVar4 - uVar1);
    uVar13 = uVar13 + (uVar15 - uVar9) * uStack_28;
    uVar9 = uVar17 + (uVar4 - uVar1) * uStack_38;
    while( true ) {
      if (lVar14 != lVar16) {
        bVar6 = lVar14 < lVar16;
        if (bVar5) {
          bVar6 = lVar16 < lVar14;
        }
        return (ulong)bVar6;
      }
      if ((uVar13 == 0) || (uVar9 == 0)) break;
      bVar5 = (bool)(bVar5 ^ 1);
      lVar14 = 0;
      if (uVar13 != 0) {
        lVar14 = (long)uStack_28 / (long)uVar13;
      }
      uVar15 = uStack_28 - lVar14 * uVar13;
      lVar16 = 0;
      if (uVar9 != 0) {
        lVar16 = (long)uStack_38 / (long)uVar9;
      }
      uVar17 = uStack_38 - lVar16 * uVar9;
      uStack_28 = uVar13;
      uStack_38 = uVar9;
      uVar13 = uVar15;
      uVar9 = uVar17;
    }
    uVar12 = 0;
    if (uVar13 != uVar9) {
      uVar12 = (uint)((uVar13 != 0) != !bVar5);
    }
    return (ulong)uVar12;
  }
  func_0x0001079164fc();
  func_0x000107916ad4();
  if ((*(int *)(extraout_x11 + 0x10) == 2) && (*(int *)(extraout_x10 + 0x10) == 2)) {
    func_0x0001079174cc();
    func_0x0001078fc618();
    func_0x0001079184e0();
    func_0x0001078fc618();
    func_0x0001079184f4();
    func_0x0001078fc618();
    func_0x000107915150();
    func_0x000107914cdc();
    uVar13 = param_1;
    func_0x000107915150();
    func_0x000107914ca4();
    iVar7 = (int)uVar13;
    iVar18 = (int)param_1;
    bVar5 = SBORROW4(iVar18,iVar7);
    iVar2 = iVar18 - iVar7;
    if (iVar18 == iVar7) {
      func_0x000107916d34(in_stack_00000030,in_stack_00000038);
      func_0x000107914ca4();
      uVar9 = uVar13;
      func_0x000107914cdc(in_stack_00000010,in_stack_00000018,in_stack_00000000,in_stack_00000008);
      iVar7 = (int)uVar9;
      iVar18 = (int)uVar13;
      bVar5 = SBORROW4(iVar7,iVar18);
      iVar2 = iVar7 - iVar18;
      if (iVar7 == iVar18) {
        func_0x0001079151cc();
        goto LAB_1078fc3c4;
      }
    }
    uVar9 = (ulong)(iVar2 < 0 != bVar5);
    goto LAB_1078fc3c4;
  }
  if (*(int *)(extraout_x11 + 0x28) == 3) {
    bVar5 = *(int *)(extraout_x11 + 0xd0) != 3;
  }
  else {
    bVar5 = true;
  }
  if (*(int *)(extraout_x10 + 0x28) == 3) {
    bVar6 = *(int *)(extraout_x10 + 0xd0) == 3;
  }
  else {
    bVar6 = false;
  }
  if (bVar5 || bVar6) {
    if ((bool)(bVar5 & bVar6)) {
      uVar9 = 0;
      goto LAB_1078fc3c4;
    }
    if (*(int *)(extraout_x11 + 0x28) == 1) {
      uVar12 = (uint)(*(int *)(extraout_x11 + 0xd0) != 1);
    }
    else {
      uVar12 = 1;
    }
    if (*(int *)(extraout_x10 + 0x28) == 1) {
      uVar11 = (uint)(*(int *)(extraout_x10 + 0xd0) == 1);
    }
    else {
      uVar11 = 0;
    }
    if (uVar12 != 0 || uVar11 != 0) {
      uVar3 = 0;
      if (extraout_x8 < extraout_x9) {
        uVar3 = uVar12 & uVar11 ^ 1;
      }
      uVar9 = (ulong)uVar3;
      goto LAB_1078fc3c4;
    }
  }
  uVar9 = 1;
LAB_1078fc3c4:
  func_0x000107915194();
  return uVar9;
}



/* Entry: 1078fc7f0; end: 1078fc80f;  */

undefined1  [16] FUN_1078fc7f0(void)

{
  undefined1 auStack_20 [16];
  
  func_0x000107914090();
  func_0x0001078fc664();
  return auStack_20;
}



/* Entry: 1078fd50c; end: 1078fd56b;  */

void FUN_1078fd50c(ulong *param_1)

{
  undefined1 in_ZR;
  undefined1 in_CY;
  ulong uVar1;
  long unaff_x21;
  
  func_0x000107913cd4();
  uVar1 = *param_1;
  func_0x0001079180ec(*(undefined8 *)(unaff_x21 + 8));
  if ((!(bool)in_ZR) || (func_0x0001078fe1d4(), (uVar1 & 1) == 0)) {
    while( true ) {
      func_0x000107914e28();
      func_0x0001078e96d4();
      func_0x0001079180e0(*(undefined8 *)(unaff_x21 + 8));
      if ((!(bool)in_CY) || (func_0x0001079166a0(), (int)uVar1 == 0)) break;
      func_0x000107916114();
    }
  }
  return;
}



/* Entry: 1078fe3a0; end: 1078fe3c3;  */

void FUN_1078fe3a0(long param_1)

{
  func_0x000107914c90();
  if (param_1 != 0) {
    func_0x000107914de8();
  }
  return;
}



/* Entry: 1078fe71c; end: 1078fe8ff;  */

void FUN_1078fe71c(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  code *pcVar2;
  undefined8 *puVar3;
  ulong uVar4;
  undefined8 *puVar5;
  ulong extraout_x8;
  undefined8 *puVar6;
  undefined8 *unaff_x19;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  long lStack_98;
  long lStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  func_0x000107913cd4();
  uVar9 = 0;
  uVar10 = 0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  uStack_d8 = 0;
  uStack_e0 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  lStack_98 = 0;
  lStack_90 = 0;
  uStack_88 = 0;
  func_0x000107917c04();
  lVar1 = lStack_90;
  lVar7 = lStack_98;
  func_0x0001079162c0(lStack_90 - lStack_98);
  if (extraout_x8 < 0x11) {
    while (lVar7 != lVar1) {
      lVar7 = lVar7 + 0x78;
      lVar8 = lVar7;
      while (lVar8 != lVar1) {
        uVar4 = 0;
        func_0x000107915d60();
        func_0x0001078fe9c0();
        lVar8 = lVar8 + 0x78;
        if ((uVar4 & 1) == 0) goto LAB_1078fe7c8;
      }
    }
  }
  else {
    uStack_58 = 0;
    uStack_50 = 0;
    uStack_48 = 0;
    func_0x000107915854();
    uStack_80 = uVar9;
    uStack_78 = uVar10;
    uStack_70 = param_2;
    func_0x0001078f91b8(&lStack_98,&uStack_80,&uStack_58);
    unaff_x19 = &uStack_58;
    func_0x0001078fe904(&uStack_80,unaff_x19,0,&stack0xffffffffffffff38);
    func_0x0001079171a0();
  }
LAB_1078fe7c8:
  func_0x0001078f6164(&lStack_98);
  puVar3 = &uStack_100;
  func_0x000107900104();
  puVar5 = unaff_x19;
  FUN_1078fffb4(&uStack_100);
  do {
    puVar6 = unaff_x19 + -500;
    do {
      if (unaff_x19 == puVar5) {
        func_0x0001079002e8(&uStack_100);
        return;
      }
      if (*(int *)(unaff_x19 + 5) == 1) {
        if (*(int *)(unaff_x19 + 0xf) != 1) goto LAB_1078fe8a4;
      }
      else if ((*(int *)(unaff_x19 + 5) != 2) || (*(int *)(unaff_x19 + 0xf) != 2))
      goto LAB_1078fe8a4;
      if (1 < *(int *)(unaff_x19 + 2) - 3U) {
LAB_1078fe8a4:
        func_0x000107915ff8();
        func_0x00010bdb1574(&stack0xffffffffffffff38);
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1078fe8d0);
        (*pcVar2)();
      }
      puVar6 = puVar6 + 0x19;
      unaff_x19 = unaff_x19 + 0x19;
    } while ((undefined8 *)*puVar3 != puVar6);
    puVar3 = puVar3 + 1;
    unaff_x19 = (undefined8 *)*puVar3;
  } while( true );
}



/* Entry: 1078ff88c; end: 1078ffa93;  */

undefined8 FUN_1078ff88c(undefined1 *param_1)

{
  undefined1 in_ZR;
  undefined1 in_CY;
  undefined1 uVar1;
  bool bVar2;
  undefined1 uVar3;
  int iVar4;
  ulong uVar5;
  long extraout_x8;
  long extraout_x9;
  undefined8 uVar6;
  ulong unaff_x20;
  undefined8 in_stack_00000098;
  undefined8 in_stack_000000a0;
  undefined8 in_stack_000000a8;
  
  iVar4 = (int)&stack0x00000000;
  func_0x0001079188cc();
  func_0x0001079136f4();
  func_0x0001079153d8();
  in_stack_00000098 = 0;
  in_stack_000000a0 = 0;
  in_stack_000000a8 = 0;
  func_0x0001079132d8();
  func_0x0001079136bc();
  func_0x0001079136d8();
  func_0x0001079155d4();
  uVar3 = 1;
  if ((bool)in_ZR) {
LAB_1078ff968:
    func_0x0001079155c8();
    if ((bool)uVar3) {
LAB_1078ff9d0:
      func_0x000107914d34(in_stack_000000a0);
      iVar4 = (int)param_1;
      if (((bool)in_CY) && (in_CY = 0x62 < unaff_x20, unaff_x20 < 100)) {
        func_0x000107913ea0();
        iVar4 = (int)param_1;
        if (!(bool)in_CY) goto LAB_1078ff9dc;
        func_0x0001079139c4();
        func_0x0001078ffb04();
        iVar4 = (int)param_1;
        if (((ulong)param_1 & 1) == 0) goto LAB_1078ffa44;
      }
      else {
LAB_1078ff9dc:
        func_0x0001079146f8();
        func_0x0001078ffa94();
        if (iVar4 == 0) goto LAB_1078ffa44;
      }
      func_0x000107913e90();
      if ((((bool)in_CY) && (bVar2 = 0x62 < unaff_x20, unaff_x20 < 100)) &&
         (func_0x000107913e80(), bVar2)) {
        uVar5 = 0;
        func_0x00010791386c();
        func_0x0001078ffb04();
        if ((uVar5 & 1) != 0) {
LAB_1078ffa1c:
          uVar6 = 1;
          goto LAB_1078ffa48;
        }
      }
      else {
        func_0x000107913eb0();
        func_0x0001078ffa94();
        if (iVar4 != 0) goto LAB_1078ffa1c;
      }
    }
    else {
      func_0x000107914d40();
      if (((((bool)in_CY) && (func_0x000107913ed0(), (bool)in_CY)) &&
          (in_CY = 0x62 < unaff_x20, unaff_x20 < 100)) && (func_0x000107914e34(), (bool)in_CY)) {
        func_0x000107915ee0();
        func_0x0001078f96c8();
        func_0x000107913a34();
        func_0x0001078ffb04();
        if ((int)param_1 != 0) {
          func_0x000107913650();
          func_0x0001078ffb04();
          if (((ulong)param_1 & 1) != 0) goto LAB_1078ff9d0;
        }
      }
      else {
        func_0x000107914708();
        func_0x0001078ffa94();
        if ((int)param_1 != 0) {
          func_0x000107913ec0();
          func_0x0001078ffa94();
          if ((int)param_1 != 0) goto LAB_1078ff9d0;
        }
      }
    }
  }
  else {
    uVar3 = extraout_x9 - extraout_x8 == 0x80;
    uVar1 = 0;
    if ((ulong)(extraout_x9 - extraout_x8) < 0x80) {
LAB_1078ff8d0:
      func_0x000107913f30();
      func_0x0001078ffa94();
      if ((int)param_1 != 0) {
LAB_1078ff904:
        func_0x000107913ef0();
        in_CY = 0;
        if ((bool)uVar1) {
          func_0x000107913ee0();
          in_CY = 0;
          if ((bool)uVar1) {
            in_CY = 0x62 < unaff_x20;
            uVar3 = unaff_x20 == 99;
            if ((unaff_x20 < 100) && (func_0x000107914718(), (bool)in_CY)) {
              func_0x000107914c84();
              func_0x0001078f96c8();
              func_0x000107913880();
              func_0x0001078ffb04();
              if (iVar4 != 0) {
                func_0x000107913894();
                func_0x0001078ffb04();
                param_1 = (undefined1 *)register0x00000008;
                if (((ulong)register0x00000008 & 1) != 0) goto LAB_1078ff968;
              }
              goto LAB_1078ffa44;
            }
          }
        }
        func_0x000107913f20();
        func_0x0001078ffa94();
        if ((int)param_1 != 0) {
          func_0x000107913f10();
          func_0x0001078ffa94();
          if ((int)param_1 != 0) goto LAB_1078ff968;
        }
      }
    }
    else {
      uVar1 = 0x62 < unaff_x20;
      uVar3 = unaff_x20 == 99;
      if ((99 < unaff_x20) || (func_0x000107913f00(), !(bool)uVar1)) goto LAB_1078ff8d0;
      func_0x000107913d24();
      func_0x0001078f9480();
      func_0x00010791354c();
      func_0x0001078ffb04();
      if (((ulong)param_1 & 1) != 0) goto LAB_1078ff904;
    }
  }
LAB_1078ffa44:
  uVar6 = 0;
LAB_1078ffa48:
  func_0x00010791502c();
  func_0x000107915070();
  func_0x000107915008();
  func_0x0001079150b0();
  func_0x00010791508c();
  func_0x000107915094();
  return uVar6;
}



/* Entry: 1078fffb4; end: 1078fffeb;  */

void FUN_1078fffb4(long param_1)

{
  if (*(long *)(param_1 + 0x10) == *(long *)(param_1 + 8)) {
    return;
  }
  return;
}



/* Entry: 107900214; end: 10790023f;  */

long FUN_107900214(long param_1)

{
  func_0x0001053010fc(param_1 + 8);
  __ZNSt9exceptionD2Ev(param_1);
  return param_1 + -8;
}



/* Entry: 107900424; end: 1079004df;  */

void FUN_107900424(long *param_1,long param_2)

{
  undefined8 *unaff_x20;
  long unaff_x21;
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uStack_70;
  undefined8 uStack_68;
  long lStack_60;
  
  func_0x000107913cd4();
  *(undefined8 *)(param_2 + 8) = 0;
  for (lVar1 = *param_1; lVar1 != *(long *)(unaff_x21 + 8); lVar1 = lVar1 + 0x30) {
    unaff_x20[2] = 0xffffffffffffffff;
    uStack_68 = unaff_x20[1];
    uStack_70 = *unaff_x20;
    lStack_60 = -1;
    func_0x0001079004e0(lVar1,&uStack_70);
    lVar2 = *(long *)(lVar1 + 0x18);
    lVar3 = lStack_60;
    while( true ) {
      lVar3 = lVar3 + 1;
      if (lVar2 == *(long *)(lVar1 + 0x20)) break;
      lStack_60 = lVar3;
      func_0x0001079004e0(lVar2,&uStack_70);
      lVar2 = lVar2 + 0x18;
    }
    unaff_x20[1] = unaff_x20[1] + 1;
  }
  return;
}



/* Entry: 1079007c8; end: 10790081b;  */

void FUN_1079007c8(undefined8 *param_1)

{
  long *plVar1;
  
  plVar1 = (long *)*param_1;
  while( true ) {
    if (plVar1 == (long *)param_1[1]) {
      return;
    }
    if (*plVar1 != plVar1[1]) break;
    *param_1 = plVar1 + 3;
    plVar1 = plVar1 + 3;
  }
  param_1[2] = *plVar1;
  return;
}



/* Entry: 107900aa8; end: 107900b6b;  */

void FUN_107900aa8(double param_1,undefined8 *param_2)

{
  undefined1 in_ZR;
  undefined1 auStack_f0 [112];
  double dStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  double dStack_50;
  undefined8 uStack_48;
  
  func_0x00010791551c();
  func_0x0001079144cc();
  dStack_80 = param_1 * 0.5;
  uStack_78 = param_2[1];
  uStack_60 = *param_2;
  uStack_68 = param_2[3];
  uStack_70 = param_2[2];
  uStack_58 = uStack_78;
  dStack_50 = dStack_80;
  uStack_48 = uStack_68;
  func_0x000107913364();
  func_0x00010791463c(&uStack_60,&dStack_80);
  func_0x000107900cc8();
  func_0x000107915ec8();
  if (!(bool)in_ZR) {
    func_0x000107913d34();
    func_0x000107916258();
    func_0x000107900e4c();
    func_0x0001079183e8();
    func_0x000107915350();
    func_0x000107914d88();
    func_0x000107900d20();
    func_0x0001079149c4(auStack_f0);
    func_0x000107900e18();
    func_0x000107915350();
    func_0x000107913cc4();
    func_0x000107900e18();
  }
  func_0x000107918208();
  func_0x000107914d88();
  func_0x000107900d20();
  func_0x000107918854();
  func_0x000107914d88();
  func_0x000107900d20();
  func_0x000107915b60();
  func_0x0001079159d0();
  func_0x000107915b7c();
  return;
}



/* Entry: 107900f2c; end: 10790113b;  */

void FUN_107900f2c(undefined8 *param_1)

{
  undefined1 in_ZR;
  undefined1 in_CY;
  undefined1 uVar1;
  bool bVar2;
  undefined1 uVar3;
  long extraout_x8;
  long extraout_x9;
  ulong unaff_x20;
  undefined8 uVar4;
  undefined1 auStack_120 [72];
  undefined1 auStack_d8 [48];
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
  undefined1 auStack_50 [32];
  
  func_0x000107913cb4();
  uVar4 = *param_1;
  func_0x0001079143ec(uVar4,param_1[2]);
  uStack_88 = param_1[1];
  uStack_70 = *param_1;
  uStack_78 = param_1[3];
  uStack_80 = param_1[2];
  uStack_a8 = 0;
  uStack_a0 = 0;
  uStack_98 = 0;
  uStack_90 = uVar4;
  uStack_68 = uStack_88;
  uStack_60 = uVar4;
  uStack_58 = uStack_78;
  func_0x0001079132d8();
  func_0x0001079139f4();
  func_0x000107900cc8();
  func_0x000107913794();
  func_0x000107900cc8();
  func_0x0001079155d4();
  uVar3 = 1;
  if ((bool)in_ZR) goto LAB_107901028;
  uVar3 = extraout_x9 - extraout_x8 == 0x80;
  uVar1 = 0;
  if ((ulong)(extraout_x9 - extraout_x8) < 0x80) {
LAB_107900f98:
    func_0x000107913f30();
    func_0x00010790113c();
  }
  else {
    uVar1 = 0x62 < unaff_x20;
    uVar3 = unaff_x20 == 99;
    if ((99 < unaff_x20) || (func_0x000107913f00(), !(bool)uVar1)) goto LAB_107900f98;
    func_0x0001079011a0(auStack_d8);
    func_0x000107913df4();
    func_0x000107900e4c();
    func_0x000107915b2c();
    func_0x00010791354c();
    func_0x000107901198();
  }
  func_0x000107913ef0();
  in_CY = 0;
  if (((bool)uVar1) && (func_0x000107913ee0(), in_CY = 0, (bool)uVar1)) {
    in_CY = 0x62 < unaff_x20;
    uVar3 = unaff_x20 == 99;
    if ((unaff_x20 < 100) && (func_0x000107914718(), (bool)in_CY)) {
      func_0x0001079011a0(auStack_d8);
      func_0x000107915338();
      func_0x000107913880(auStack_50);
      func_0x000107901198();
      func_0x000107913894(auStack_50);
      func_0x000107901198();
      goto LAB_107901028;
    }
  }
  func_0x000107913f20();
  func_0x00010790113c();
  func_0x000107913f10();
  func_0x00010790113c();
LAB_107901028:
  func_0x0001079155c8();
  if (!(bool)uVar3) {
    func_0x000107914d40();
    if (((((bool)in_CY) && (func_0x000107913ed0(), (bool)in_CY)) &&
        (in_CY = 0x62 < unaff_x20, unaff_x20 < 100)) && (func_0x000107914e34(), (bool)in_CY)) {
      func_0x0001079011a0(auStack_120);
      func_0x000107915338();
      func_0x000107913adc(auStack_50,&uStack_a8);
      func_0x000107901198();
      func_0x000107913858(auStack_50);
      func_0x000107901198();
    }
    else {
      func_0x000107914858();
      func_0x00010790113c();
      func_0x000107913ec0();
      func_0x00010790113c();
    }
  }
  func_0x000107914d34(uStack_a0);
  if ((((bool)in_CY) && (in_CY = 0x62 < unaff_x20, unaff_x20 < 100)) &&
     (func_0x000107913ea0(), (bool)in_CY)) {
    func_0x000107913a0c();
    func_0x000107901198();
  }
  else {
    func_0x000107914848();
    func_0x00010790113c();
  }
  func_0x000107913e90();
  if ((((bool)in_CY) && (bVar2 = 0x62 < unaff_x20, unaff_x20 < 100)) &&
     (func_0x000107913e80(), bVar2)) {
    func_0x00010791386c(&uStack_90);
    func_0x000107901198();
  }
  else {
    func_0x000107913eb0();
    func_0x00010790113c();
  }
  func_0x000107915a84();
  func_0x000107915ac4();
  func_0x000107915a70();
  func_0x000107915af4();
  func_0x000107915ae4();
  func_0x000107915b24();
  return;
}



/* Entry: 1079014ec; end: 1079015a7;  */

ulong * FUN_1079014ec(ulong *param_1,ulong param_2)

{
  undefined1 uVar1;
  undefined1 uVar2;
  ulong *puVar3;
  long extraout_x8;
  ulong uVar4;
  ulong uVar5;
  
  puVar3 = param_1;
  func_0x00010790036c();
  uVar5 = param_2;
  func_0x000107917334();
  while( true ) {
    uVar1 = uVar5 <= param_2;
    uVar2 = param_2 == uVar5;
    if ((bool)uVar2) break;
    func_0x00010791667c();
    func_0x000107918254();
    if ((bool)uVar2) {
      puVar3 = puVar3 + 1;
      param_2 = *puVar3;
    }
  }
  param_1[5] = 0;
  uVar5 = param_1[1];
  while (func_0x000107914570(), (bool)uVar1) {
    func_0x000107915cc4();
    func_0x000107914e7c();
  }
  if (extraout_x8 == 1) {
    uVar4 = 0x55;
  }
  else {
    if (extraout_x8 != 2) goto LAB_10790157c;
    uVar4 = 0xaa;
  }
  param_1[4] = uVar4;
LAB_10790157c:
  while (uVar5 != param_2) {
    func_0x0001079163e8();
  }
  func_0x0001079003dc(param_1,param_1[1]);
  if (*param_1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 107901f28; end: 107901f5b;  */

void FUN_107901f28(void)

{
  long unaff_x20;
  long unaff_x21;
  
  func_0x000107913cd4();
  for (; unaff_x21 != unaff_x20; unaff_x21 = unaff_x21 + 0x10) {
    func_0x0001004d77a8();
    func_0x0001078e96d4();
  }
  return;
}



/* Entry: 1079024fc; end: 1079025bb;  */

void FUN_1079024fc(int *param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  long lVar2;
  int *piVar3;
  long lVar4;
  undefined8 *unaff_x20;
  undefined8 uVar5;
  
  func_0x000107915890();
  piVar3 = param_1;
  func_0x0001078e9868();
  func_0x0001078e9a00(param_1,piVar3,param_4,param_5);
  uVar1 = *param_4;
  lVar2 = param_4[1];
  lVar4 = 0;
  if (-1 < *(long *)(piVar3 + 0xe)) {
    lVar4 = *(long *)(piVar3 + 0x12) - *(long *)(piVar3 + 0xe);
  }
  *(long *)(piVar3 + 0x14) = lVar4;
  uVar5 = *(undefined8 *)(lVar2 + -0x10);
  *(undefined8 *)(piVar3 + 0x3a) = *(undefined8 *)(lVar2 + -8);
  *(undefined8 *)(piVar3 + 0x38) = uVar5;
  if (*piVar3 == 5) {
    uVar5 = *unaff_x20;
    *(undefined8 *)(piVar3 + 0x3a) = unaff_x20[1];
    *(undefined8 *)(piVar3 + 0x38) = uVar5;
  }
  else {
    lVar4 = *(long *)(piVar3 + 0x28);
    *(long *)(piVar3 + 0x28) = lVar4 + 1;
    uVar5 = *unaff_x20;
    *(undefined8 *)(piVar3 + lVar4 * 4 + 0x20 + 2) = unaff_x20[1];
    *(undefined8 *)(piVar3 + lVar4 * 4 + 0x20) = uVar5;
    *(long *)(piVar3 + 0x28) = *(long *)(piVar3 + 0x28) + 1;
  }
  func_0x00010791812c(uVar1);
  return;
}



/* Entry: 107902c20; end: 107902c2b;  */

void FUN_107902c20(ulong param_1)

{
  ulong uVar1;
  undefined1 in_ZR;
  ulong uVar2;
  ulong unaff_x19;
  ulong unaff_x20;
  ulong unaff_x21;
  ulong unaff_x23;
  undefined8 uVar3;
  undefined8 *unaff_x27;
  
  func_0x000107913ad0();
  func_0x000107915f10();
  func_0x0001079133e4();
  while (func_0x000107915ebc(), !(bool)in_ZR) {
    uVar3 = *unaff_x27;
    func_0x0001079161e4();
    func_0x000107902f78();
    uVar2 = unaff_x23;
    func_0x000107902f78();
    if (((param_1 & 1) != 0) || ((uint)uVar2 != 0)) {
      uVar1 = unaff_x19;
      if (((uint)param_1 & (uint)uVar2) == 0) {
        uVar1 = unaff_x21;
      }
      in_ZR = (uint)param_1 == 0;
      uVar2 = uVar1;
      if ((bool)in_ZR) {
        uVar2 = unaff_x20;
      }
      FUN_1078eda1c(uVar2,uVar3);
    }
    unaff_x27 = unaff_x27 + 1;
    param_1 = uVar2;
  }
  return;
}



/* Entry: 107902ffc; end: 10790304f;  */

bool FUN_107902ffc(undefined8 param_1,undefined8 *param_2,ulong param_3,ulong param_4)

{
  ulong uVar1;
  ulong uVar2;
  
  do {
    uVar1 = param_3 + 0x10;
    if (uVar1 == param_4) break;
    FUN_1078f48b8(*param_2,param_2[1],param_3,uVar1,param_1);
    uVar2 = param_3 & 1;
    param_3 = uVar1;
  } while (uVar2 != 0);
  return uVar1 == param_4;
}



/* Entry: 1079031f4; end: 10790322f;  */

void FUN_1079031f4(long param_1)

{
  long unaff_x19;
  long unaff_x20;
  long lVar1;
  
  func_0x000107914c78();
  lVar1 = *(long *)(param_1 + 8);
  while (lVar1 != unaff_x19) {
    lVar1 = lVar1 + -0x18;
    func_0x000107903640(lVar1);
  }
  *(long *)(unaff_x20 + 8) = unaff_x19;
  return;
}



/* Entry: 10790356c; end: 107903597;  */

ulong FUN_10790356c(ulong param_1)

{
  ulong extraout_x8;
  long lVar1;
  long lVar2;
  
  func_0x000107914b0c();
  if (param_1 < extraout_x8) {
    func_0x000107915538();
    return param_1;
  }
  func_0x000104bd35f4();
  if ((*(byte *)(param_1 + 0x18) & 1) == 0) {
    lVar2 = **(long **)(param_1 + 8);
    lVar1 = **(long **)(param_1 + 0x10);
    while (lVar1 != lVar2) {
      lVar1 = lVar1 + -0x18;
      func_0x000107903640(lVar1);
    }
  }
  return param_1;
}



/* Entry: 1079064a0; end: 1079064d3;  */

undefined8 * FUN_1079064a0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  uVar2 = param_2[1];
  uVar1 = *param_2;
  uVar4 = param_2[3];
  uVar3 = param_2[2];
  uVar5 = param_2[4];
  uVar7 = param_2[7];
  uVar6 = param_2[6];
  param_1[5] = param_2[5];
  param_1[4] = uVar5;
  param_1[7] = uVar7;
  param_1[6] = uVar6;
  param_1[1] = uVar2;
  *param_1 = uVar1;
  param_1[3] = uVar4;
  param_1[2] = uVar3;
  func_0x0001079009f0(param_1 + 8,param_2 + 8);
  return param_1;
}



/* Entry: 107906a10; end: 107906a5f;  */

void FUN_107906a10(long *param_1)

{
  long unaff_x21;
  long lVar1;
  
  func_0x000107913cd4();
  for (lVar1 = *param_1; lVar1 != *(long *)(unaff_x21 + 8); lVar1 = lVar1 + 0x68) {
    func_0x000107917f18();
    func_0x00010791535c();
    func_0x000107906f60();
  }
  return;
}



/* Entry: 107907074; end: 10790709b;  */

undefined1  [16] FUN_107907074(void)

{
  undefined1 auStack_30 [16];
  
  func_0x0001079072ac();
  func_0x000107916ef8();
  return auStack_30;
}



/* Entry: 1079073dc; end: 107907403;  */

undefined1  [16] FUN_1079073dc(undefined8 param_1)

{
  undefined1 auStack_20 [16];
  
  func_0x00010791540c(0x7fffffff7fffffff,param_1,param_1);
  return auStack_20;
}



/* Entry: 1079082e4; end: 107908367;  */

void FUN_1079082e4(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  
  *param_1 = 0;
  lVar2 = 0;
  do {
    *(undefined8 *)((long)param_1 + lVar2 + 0x18) = 0x100000000;
    *(undefined8 *)((long)param_1 + lVar2 + 0x20) = 0;
    *(undefined8 *)((long)param_1 + lVar2 + 0x28) = 0x100000000;
    *(undefined8 *)((long)param_1 + lVar2 + 0x30) = 0;
    lVar1 = lVar2 + 0x28;
    *(undefined1 *)((long)param_1 + lVar2 + 0x38) = 0;
    lVar2 = lVar1;
  } while (lVar1 != 0x50);
  return;
}



/* Entry: 107908d68; end: 107908dd7;  */

void FUN_107908d68(int *param_1,long *param_2,int param_3,int param_4,int param_5,int param_6)

{
  int iVar1;
  long lVar2;
  long lVar3;
  
  func_0x000107917a38();
  lVar3 = (long)param_6;
  iVar1 = *(int *)*param_2;
  lVar2 = 0;
  if (lVar3 != 0) {
    lVar2 = ((long)param_5 * (long)param_3) / lVar3;
  }
  func_0x000107908dd8(lVar2);
  *param_1 = iVar1 + (int)lVar2;
  iVar1 = *(int *)(*param_2 + 4);
  lVar2 = 0;
  if (lVar3 != 0) {
    lVar2 = ((long)param_5 * (long)param_4) / lVar3;
  }
  func_0x000107908dd8(lVar2);
  param_1[1] = iVar1 + (int)lVar2;
  return;
}



/* Entry: 107909174; end: 10790922b;  */

undefined4 FUN_107909174(undefined8 param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  char cVar2;
  undefined1 uVar3;
  char cVar4;
  int iVar5;
  undefined4 extraout_w8;
  double dVar6;
  double dVar7;
  double dVar8;
  
  func_0x000107914c78();
  iVar5 = param_3;
  func_0x0001079081b4();
  func_0x000107918484();
  dVar6 = (double)iVar5;
  dVar7 = (double)param_2;
  dVar8 = (double)param_3;
  func_0x000107917da8();
  cVar4 = NAN(dVar6);
  uVar3 = dVar6 == 0.0;
  cVar2 = dVar6 < 0.0;
  if (!(bool)uVar3) {
    func_0x000107915fcc();
    if (cVar2 == cVar4) {
      if (dVar6 <= 0.0) {
        return 0xffffffff;
      }
      return 1;
    }
    func_0x000107914b3c();
    uVar1 = extraout_w8;
    if (!(bool)uVar3 && cVar2 == cVar4) {
      uVar1 = 1;
    }
    if (dVar7 < dVar8) {
      return uVar1;
    }
  }
  return 0;
}



/* Entry: 1079095d4; end: 1079095fb;  */

undefined1  [16] FUN_1079095d4(undefined8 param_1)

{
  undefined1 auStack_20 [16];
  
  func_0x00010791540c(0x7fffffff7fffffff,param_1,param_1);
  return auStack_20;
}



/* Entry: 1079099d8; end: 1079099df;  */

void FUN_1079099d8(void)

{
  undefined1 in_ZR;
  undefined1 in_CY;
  bool bVar1;
  undefined1 uVar2;
  ulong unaff_x20;
  ulong unaff_x21;
  
  func_0x000107913588();
  func_0x000107907378();
  func_0x000107913304();
  func_0x0001079133b4();
  func_0x000107913398();
  func_0x000107915afc();
  if (!(bool)in_ZR) {
    func_0x0001079158b4();
    uVar2 = 0;
    if ((bool)in_CY) {
      uVar2 = 0x62 < unaff_x20;
      in_ZR = unaff_x20 == 99;
      if ((99 < unaff_x20) || (func_0x000107914230(), !(bool)uVar2)) goto code_r0x000107909a18;
      func_0x000107914d28();
      func_0x000107913668();
      func_0x000107909b8c();
    }
    else {
code_r0x000107909a18:
      func_0x0001079142a0();
      func_0x00010790997c();
    }
    func_0x000107914220();
    in_CY = false;
    if (((bool)uVar2) && (func_0x0001079142c0(), in_CY = false, (bool)uVar2)) {
      in_CY = 0x62 < unaff_x20;
      in_ZR = unaff_x20 == 99;
      if (unaff_x20 < 100) {
        in_CY = 0x78 < unaff_x21;
        in_ZR = unaff_x21 == 0x79;
        if ((bool)in_CY) {
          func_0x000107916834();
          func_0x000107913810();
          func_0x000107909b8c();
          func_0x0001079137f8();
          func_0x000107909b8c();
          goto code_r0x000107909a90;
        }
      }
    }
    func_0x000107914290();
    func_0x00010790997c();
    func_0x0001079142b0();
    func_0x00010790997c();
  }
code_r0x000107909a90:
  func_0x000107915a78();
  if ((bool)in_ZR) {
    func_0x0001079176fc();
code_r0x000107909aec:
    uVar2 = 0;
    if (0x7f < unaff_x21) goto code_r0x000107909af4;
  }
  else {
    func_0x0001079156e4();
    if ((((!(bool)in_CY) || (func_0x000107914210(), !(bool)in_CY)) ||
        (bVar1 = 0x62 < unaff_x20, 99 < unaff_x20)) || (func_0x000107914e34(), !bVar1)) {
      func_0x0001079145fc();
      func_0x00010790997c();
      func_0x0001079142e0();
      func_0x00010790997c();
      goto code_r0x000107909aec;
    }
    func_0x000107916824();
    func_0x000107913840();
    func_0x000107909b8c();
    func_0x000107913828();
    func_0x000107909b8c();
code_r0x000107909af4:
    uVar2 = 0x62 < unaff_x20;
    if ((unaff_x20 < 100) && (func_0x000107914200(), (bool)uVar2)) {
      func_0x0001079137b0();
      func_0x000107909b8c();
      goto code_r0x000107909b18;
    }
  }
  func_0x0001079145ec();
  func_0x00010790997c();
code_r0x000107909b18:
  func_0x0001079141f0();
  if ((((bool)uVar2) && (bVar1 = 0x62 < unaff_x20, unaff_x20 < 100)) &&
     (func_0x000107914280(), bVar1)) {
    func_0x0001079137c8();
    func_0x000107909b8c();
  }
  else {
    func_0x0001079142f0();
    func_0x00010790997c();
  }
  func_0x000107914e10();
  func_0x000107914df0();
  func_0x000107914dbc();
  func_0x000107914e18();
  func_0x000107914e20();
  func_0x000107914dc4();
  return;
}



/* Entry: 10790a008; end: 10790a067;  */

void FUN_10790a008(undefined8 param_1,long *param_2,ulong param_3,undefined8 param_4)

{
  undefined1 uVar1;
  long extraout_x8;
  long extraout_x8_00;
  long lVar2;
  long unaff_x20;
  long unaff_x21;
  long unaff_x22;
  long unaff_x23;
  
  uVar1 = param_3 == 99;
  if ((param_3 < 100) &&
     (uVar1 = param_2[1] - *param_2 == 0x79, 0x78 < (ulong)(param_2[1] - *param_2))) {
    func_0x000107913fec(param_1,param_2,param_3 + 1);
    func_0x0001079135a4();
    func_0x0001079134a0();
    func_0x000107915c1c();
    if (!(bool)uVar1) {
      func_0x000107917308();
      func_0x000107915144();
      func_0x000107914d88();
      func_0x000107909ec0();
      func_0x0001079148c4();
      func_0x000107914aa0();
      func_0x000107909f80();
      func_0x0001079148b4();
      func_0x000107914aa0();
      func_0x000107909f80();
    }
    func_0x00010791658c();
    func_0x000107914d88();
    func_0x000107909ec0();
    func_0x0001079165f8();
    func_0x000107914d88();
    func_0x000107909ec0();
    func_0x0001079151e0();
    func_0x00010791518c();
    func_0x000107915024();
    return;
  }
  func_0x000107915d78(param_2,param_4);
  if (!(bool)uVar1) {
    func_0x000107914c78();
    lVar2 = extraout_x8;
    while (unaff_x21 != lVar2) {
      func_0x000107915d6c();
      lVar2 = extraout_x8_00;
      while (unaff_x21 = unaff_x22, unaff_x23 != lVar2) {
        func_0x00010791460c();
        func_0x000107909c84();
        lVar2 = *(long *)(unaff_x20 + 8);
      }
    }
  }
  return;
}



/* Entry: 10790a598; end: 10790a5a3;  */

/* WARNING: Possible PIC construction at 0x00010790a610: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010790a634: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010790a640: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010790a780: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010790a664: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010790ac70: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010790ac24: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010790ac74) */
/* WARNING: Removing unreachable block (ram,0x00010790ac84) */
/* WARNING: Removing unreachable block (ram,0x00010790aca4) */
/* WARNING: Removing unreachable block (ram,0x00010790acac) */
/* WARNING: Removing unreachable block (ram,0x00010790acb4) */
/* WARNING: Removing unreachable block (ram,0x00010790acb8) */
/* WARNING: Removing unreachable block (ram,0x000107914328) */
/* WARNING: Removing unreachable block (ram,0x00010790a784) */
/* WARNING: Removing unreachable block (ram,0x00010790a644) */
/* WARNING: Removing unreachable block (ram,0x00010790a668) */
/* WARNING: Removing unreachable block (ram,0x00010790a678) */
/* WARNING: Removing unreachable block (ram,0x00010790a78c) */
/* WARNING: Removing unreachable block (ram,0x00010790a7c4) */
/* WARNING: Removing unreachable block (ram,0x00010790a7c8) */
/* WARNING: Removing unreachable block (ram,0x00010790a7d4) */
/* WARNING: Removing unreachable block (ram,0x00010790a7a8) */
/* WARNING: Removing unreachable block (ram,0x00010790a7ac) */
/* WARNING: Removing unreachable block (ram,0x00010790a7c0) */
/* WARNING: Removing unreachable block (ram,0x00010790a7e4) */
/* WARNING: Removing unreachable block (ram,0x00010790a7f0) */
/* WARNING: Removing unreachable block (ram,0x00010790a7f4) */
/* WARNING: Removing unreachable block (ram,0x00010790a808) */
/* WARNING: Removing unreachable block (ram,0x00010790a840) */
/* WARNING: Removing unreachable block (ram,0x00010790a80c) */
/* WARNING: Removing unreachable block (ram,0x00010790a820) */
/* WARNING: Removing unreachable block (ram,0x00010790a830) */
/* WARNING: Removing unreachable block (ram,0x00010790a848) */
/* WARNING: Removing unreachable block (ram,0x00010790a854) */
/* WARNING: Removing unreachable block (ram,0x00010790a85c) */
/* WARNING: Removing unreachable block (ram,0x00010790a670) */
/* WARNING: Removing unreachable block (ram,0x00010790a688) */
/* WARNING: Removing unreachable block (ram,0x00010790a69c) */
/* WARNING: Removing unreachable block (ram,0x00010790a6b0) */
/* WARNING: Removing unreachable block (ram,0x00010790a6cc) */
/* WARNING: Removing unreachable block (ram,0x00010790a6d0) */
/* WARNING: Removing unreachable block (ram,0x00010790a6e4) */
/* WARNING: Removing unreachable block (ram,0x00010790a6d8) */
/* WARNING: Removing unreachable block (ram,0x00010790a6e0) */
/* WARNING: Removing unreachable block (ram,0x00010790a6c0) */
/* WARNING: Removing unreachable block (ram,0x00010790a6c8) */
/* WARNING: Removing unreachable block (ram,0x00010790a6e8) */
/* WARNING: Removing unreachable block (ram,0x00010790a6f0) */
/* WARNING: Removing unreachable block (ram,0x00010790a734) */
/* WARNING: Removing unreachable block (ram,0x00010790a740) */
/* WARNING: Removing unreachable block (ram,0x00010790a748) */
/* WARNING: Removing unreachable block (ram,0x00010790a764) */
/* WARNING: Removing unreachable block (ram,0x00010790a878) */
/* WARNING: Removing unreachable block (ram,0x00010790a880) */
/* WARNING: Removing unreachable block (ram,0x00010790a778) */
/* WARNING: Removing unreachable block (ram,0x00010790a77c) */
/* WARNING: Removing unreachable block (ram,0x00010790a6f8) */
/* WARNING: Removing unreachable block (ram,0x00010790a710) */
/* WARNING: Removing unreachable block (ram,0x00010790a720) */
/* WARNING: Removing unreachable block (ram,0x00010790a730) */
/* WARNING: Removing unreachable block (ram,0x00010790a638) */
/* WARNING: Removing unreachable block (ram,0x00010790a614) */
/* WARNING: Removing unreachable block (ram,0x00010790ac28) */
/* WARNING: Removing unreachable block (ram,0x00010790ac38) */
/* WARNING: Removing unreachable block (ram,0x00010790ac40) */
/* WARNING: Removing unreachable block (ram,0x00010790ac48) */
/* WARNING: Removing unreachable block (ram,0x00010790ac4c) */
/* WARNING: Removing unreachable block (ram,0x000107913e70) */

void FUN_10790a598(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,ulong param_4)

{
  int *piVar1;
  int *piVar2;
  ulong uVar3;
  ulong uVar4;
  undefined4 uVar5;
  int iVar6;
  undefined8 *puVar7;
  undefined1 uVar8;
  undefined8 *puVar9;
  undefined8 extraout_x8;
  long extraout_x8_00;
  ulong extraout_x8_01;
  undefined8 *puVar10;
  undefined8 *extraout_x8_02;
  undefined8 *extraout_x9;
  undefined8 *extraout_x9_00;
  int extraout_w10;
  int extraout_w10_00;
  ulong uVar11;
  long extraout_x11;
  ulong extraout_x11_00;
  ulong uVar12;
  undefined8 *puVar13;
  undefined8 *extraout_x11_01;
  undefined8 uVar14;
  undefined8 *unaff_x19;
  undefined8 *unaff_x20;
  long unaff_x22;
  long lVar15;
  ulong uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 in_stack_00000000;
  undefined8 in_stack_00000008;
  
  func_0x000107913ad0();
  func_0x000107915994();
  func_0x000107913e28();
  func_0x000107913ca4();
  uVar16 = (long)unaff_x19 - (long)unaff_x20 >> 4;
  uVar8 = uVar16 == 5;
  switch(uVar16) {
  case 0:
  case 1:
    goto code_r0x00010790ab54;
  case 2:
    uVar8 = *(int *)((long)unaff_x19 + -4) == *(int *)((long)unaff_x20 + 0xc);
    if (*(int *)((long)unaff_x20 + 0xc) < *(int *)((long)unaff_x19 + -4)) {
      func_0x000107916b00();
      uVar14 = unaff_x19[-2];
      unaff_x20[1] = unaff_x19[-1];
      *unaff_x20 = uVar14;
      unaff_x19[-1] = in_stack_00000008;
      unaff_x19[-2] = in_stack_00000000;
    }
    goto code_r0x00010790ab54;
  case 3:
    func_0x000107913564(extraout_x8);
    if ((bool)uVar8) {
      param_2 = unaff_x20 + 2;
      func_0x000107918814();
      func_0x0001079154c8();
      goto code_r0x00010790ab6c;
    }
    break;
  case 4:
    func_0x000107913564(extraout_x8);
    if ((bool)uVar8) {
      param_2 = unaff_x20 + 2;
      param_3 = unaff_x20 + 4;
      func_0x0001079154c8();
      param_1 = unaff_x20;
code_r0x00010790ac0c:
      func_0x000107913c7c();
      goto code_r0x00010790ab6c;
    }
    break;
  case 5:
    func_0x000107913564(extraout_x8);
    if ((bool)uVar8) {
      param_2 = unaff_x20 + 2;
      param_3 = unaff_x20 + 4;
      func_0x0001079154c8();
      func_0x0001079189a8();
      func_0x000107913c7c();
      param_1 = unaff_x20;
      goto code_r0x00010790ac0c;
    }
    break;
  default:
    if ((long)uVar16 < 0x18) {
      uVar8 = unaff_x20 == unaff_x19;
      if ((param_4 & 1) == 0) {
        puVar9 = unaff_x20;
        if (!(bool)uVar8) {
          while( true ) {
            unaff_x20 = unaff_x20 + 2;
            uVar8 = 1;
            if (puVar9 + 2 == unaff_x19) break;
            piVar1 = (int *)((long)puVar9 + 0x1c);
            piVar2 = (int *)((long)puVar9 + 0xc);
            puVar9 = puVar9 + 2;
            if (*piVar2 < *piVar1) {
              func_0x000107917918(unaff_x20);
              puVar9 = extraout_x11_01;
              do {
                puVar9[1] = puVar9[-1];
                *puVar9 = puVar9[-2];
                piVar1 = (int *)((long)puVar9 + -0x14);
                puVar9 = puVar9 + -2;
              } while (*piVar1 < extraout_w10_00);
              func_0x000107918268();
              puVar9 = extraout_x9_00;
              unaff_x20 = extraout_x8_02;
            }
          }
        }
      }
      else if (!(bool)uVar8) {
        lVar15 = 0;
        puVar9 = unaff_x20;
        while( true ) {
          puVar10 = puVar9 + 2;
          uVar8 = 1;
          if (puVar10 == unaff_x19) break;
          if (*(int *)((long)puVar9 + 0xc) < *(int *)((long)puVar9 + 0x1c)) {
            func_0x000107917918(lVar15);
            lVar15 = extraout_x11;
            do {
              puVar9 = (undefined8 *)((long)unaff_x20 + lVar15);
              puVar9[3] = puVar9[1];
              puVar9[2] = *puVar9;
              if (lVar15 == 0) break;
              lVar15 = lVar15 + -0x10;
            } while (*(int *)((long)puVar9 + -4) < extraout_w10);
            func_0x000107918268();
            lVar15 = extraout_x8_00;
            puVar10 = extraout_x9;
          }
          lVar15 = lVar15 + 0x10;
          puVar9 = puVar10;
        }
      }
    }
    else {
      if (unaff_x22 != 0) {
        puVar9 = unaff_x20 + (uVar16 & 0xfffffffffffffffe);
        if (uVar16 < 0x81) {
          func_0x000107915378();
          param_1 = puVar9;
        }
        else {
          func_0x000107916bac();
          param_3 = unaff_x19 + -2;
        }
        goto code_r0x00010790ab6c;
      }
      uVar8 = unaff_x20 == unaff_x19;
      if (!(bool)uVar8) {
        func_0x0001079181fc();
        lVar15 = 0;
        do {
          func_0x000107914c3c();
          func_0x00010790ae44();
          lVar15 = lVar15 + -1;
        } while (-1 < lVar15);
        while( true ) {
          uVar8 = uVar16 - 2 == 0;
          if ((long)uVar16 < 2) break;
          func_0x000107916b00(uVar16 - 2);
          puVar9 = unaff_x20;
          uVar11 = extraout_x11_00;
          do {
            uVar4 = uVar11 << 1 | 1;
            uVar3 = uVar11 * 2 + 2;
            puVar10 = puVar9 + uVar11 * 2 + 2;
            uVar12 = uVar4;
            if (((long)uVar3 < (long)uVar16) &&
               (puVar10 = puVar9 + uVar11 * 2 + 4, uVar12 = uVar3,
               *(int *)((long)puVar9 + uVar11 * 0x10 + 0x1c) <=
               *(int *)((long)puVar9 + uVar11 * 0x10 + 0x2c))) {
              puVar10 = puVar9 + uVar11 * 2 + 2;
              uVar12 = uVar4;
            }
            uVar14 = *puVar10;
            puVar9[1] = puVar10[1];
            *puVar9 = uVar14;
            puVar9 = puVar10;
            uVar11 = uVar12;
          } while ((long)uVar12 <= (long)(extraout_x8_01 >> 1));
          puVar9 = unaff_x19 + -2;
          if (puVar10 == puVar9) {
            puVar10[1] = in_stack_00000008;
            *puVar10 = in_stack_00000000;
          }
          else {
            uVar14 = *puVar9;
            puVar10[1] = unaff_x19[-1];
            *puVar10 = uVar14;
            unaff_x19[-1] = in_stack_00000008;
            *puVar9 = in_stack_00000000;
            lVar15 = (long)puVar10 + (0x10 - (long)unaff_x20) >> 4;
            if (1 < lVar15) {
              uVar11 = lVar15 - 2U >> 1;
              iVar6 = *(int *)((long)puVar10 + 0xc);
              if (iVar6 < *(int *)((long)(unaff_x20 + uVar11 * 2) + 0xc)) {
                uVar14 = *puVar10;
                uVar5 = *(undefined4 *)(puVar10 + 1);
                puVar7 = unaff_x20 + uVar11 * 2;
                do {
                  puVar13 = puVar7;
                  uVar17 = *puVar13;
                  puVar10[1] = puVar13[1];
                  *puVar10 = uVar17;
                  if (uVar11 == 0) break;
                  uVar11 = uVar11 - 1 >> 1;
                  puVar10 = puVar13;
                  puVar7 = unaff_x20 + uVar11 * 2;
                } while (iVar6 < *(int *)((long)(unaff_x20 + uVar11 * 2) + 0xc));
                *puVar13 = uVar14;
                *(undefined4 *)(puVar13 + 1) = uVar5;
                *(int *)((long)puVar13 + 0xc) = iVar6;
              }
            }
          }
          uVar16 = uVar16 - 1;
          unaff_x19 = puVar9;
        }
      }
    }
code_r0x00010790ab54:
    func_0x000107913564(extraout_x8);
    if ((bool)uVar8) {
      return;
    }
  }
  ___stack_chk_fail();
code_r0x00010790ab6c:
  iVar6 = *(int *)((long)param_2 + 0xc);
  if (*(int *)((long)param_1 + 0xc) < iVar6) {
    if (iVar6 < *(int *)((long)param_3 + 0xc)) {
      uVar17 = param_1[1];
      uVar14 = *param_1;
      uVar18 = *param_3;
      param_1[1] = param_3[1];
      *param_1 = uVar18;
    }
    else {
      uVar17 = param_1[1];
      uVar14 = *param_1;
      uVar18 = *param_2;
      param_1[1] = param_2[1];
      *param_1 = uVar18;
      param_2[1] = uVar17;
      *param_2 = uVar14;
      if (*(int *)((long)param_3 + 0xc) <= *(int *)((long)param_2 + 0xc)) {
        return;
      }
      uVar17 = param_2[1];
      uVar14 = *param_2;
      uVar18 = *param_3;
      param_2[1] = param_3[1];
      *param_2 = uVar18;
    }
    param_3[1] = uVar17;
    *param_3 = uVar14;
  }
  else if (iVar6 < *(int *)((long)param_3 + 0xc)) {
    uVar17 = param_2[1];
    uVar14 = *param_2;
    uVar18 = *param_3;
    param_2[1] = param_3[1];
    *param_2 = uVar18;
    param_3[1] = uVar17;
    *param_3 = uVar14;
    if (*(int *)((long)param_1 + 0xc) < *(int *)((long)param_2 + 0xc)) {
      uVar17 = param_1[1];
      uVar14 = *param_1;
      uVar18 = *param_2;
      param_1[1] = param_2[1];
      *param_1 = uVar18;
      param_2[1] = uVar17;
      *param_2 = uVar14;
    }
  }
  return;
}



/* Entry: 10790af70; end: 10790af7b;  */

void FUN_10790af70(void)

{
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x000107913ad0();
  func_0x00010791886c();
  if (unaff_x20 != 0) {
    lVar1 = *(long *)(unaff_x19 + 8);
    while (lVar1 != unaff_x20) {
      lVar1 = lVar1 + -0x28;
      func_0x0001078f005c();
    }
    *(long *)(unaff_x19 + 8) = unaff_x20;
    func_0x000107915b14();
  }
  return;
}



/* Entry: 10790b2f0; end: 10790b97b;  */

void FUN_10790b2f0(undefined8 param_1,undefined8 param_2,uint param_3)

{
  undefined1 in_ZR;
  undefined1 in_CY;
  undefined1 uVar1;
  char cVar2;
  char cVar3;
  undefined1 uVar4;
  undefined8 *puVar5;
  ulong extraout_x8;
  undefined8 extraout_x8_00;
  undefined8 extraout_x8_01;
  undefined8 *unaff_x20;
  undefined8 *unaff_x21;
  undefined8 *puVar6;
  long unaff_x22;
  long unaff_x23;
  undefined8 *unaff_x24;
  undefined8 *unaff_x26;
  undefined8 *unaff_x27;
  undefined8 *unaff_x28;
  undefined8 in_register_00005008;
  undefined8 in_register_00005028;
  
  func_0x000107916658();
  func_0x0001079141cc();
LAB_10790b30c:
  func_0x0001079157c0();
LAB_10790b310:
  while( true ) {
    func_0x0001079148f8();
    if (!(bool)in_CY || (bool)in_ZR) {
                    /* WARNING: Could not recover jumptable at 0x00010790b52c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)((ulong)*(byte *)((long)unaff_x27 + 0x10dedb91c) * 4 + 0x10790b530))();
      return;
    }
    uVar1 = 0x3be < extraout_x8;
    uVar4 = extraout_x8 == 0x3bf;
    if ((long)extraout_x8 < 0x3c0) {
      if (((ulong)unaff_x26 & 1) == 0) {
        if (unaff_x21 == unaff_x24) {
          return;
        }
        while (puVar5 = unaff_x21, unaff_x21 = puVar5 + 5, unaff_x21 != unaff_x24) {
          func_0x000107914d7c();
          func_0x0001079162f8();
          if (param_3 != 0) {
            func_0x000107915604();
            do {
              puVar6 = puVar5;
              func_0x000107914890();
              func_0x00010790b734();
              puVar5 = puVar6 + -5;
            } while ((param_3 & 1) != 0);
            func_0x000107915108();
            puVar6[9] = extraout_x8_01;
            puVar6[6] = in_register_00005008;
            puVar6[5] = param_1;
            puVar6[8] = in_register_00005028;
            puVar6[7] = param_2;
          }
        }
        return;
      }
      puVar5 = unaff_x21;
      if (unaff_x21 == unaff_x24) {
        return;
      }
      goto LAB_10790b5c4;
    }
    if (unaff_x23 == 0) {
      if (unaff_x21 == unaff_x24) {
        return;
      }
      func_0x0001079161d0();
      for (; -1 < unaff_x22; unaff_x22 = unaff_x22 + -1) {
        func_0x0001079143fc();
        func_0x00010790bc98();
      }
      while( true ) {
        cVar2 = SBORROW8((long)unaff_x27,2);
        cVar3 = (long)((long)unaff_x27 - 2U) < 0;
        uVar4 = unaff_x27 == (undefined8 *)0x2;
        if ((long)unaff_x27 < 2) break;
        func_0x0001079148d4();
        do {
          func_0x00010791419c();
          if (cVar3 != cVar2) {
            func_0x00010791535c();
            func_0x00010790b734();
            cVar3 = (int)param_3 < 0;
            uVar4 = param_3 == 0;
            cVar2 = '\0';
          }
          func_0x000107914b7c();
        } while ((bool)uVar4 || cVar3 != cVar2);
        func_0x0001079174ec();
        if ((bool)uVar4) {
          func_0x000107915b08();
          func_0x00010791526c();
        }
        else {
          func_0x0001079143bc();
          if (cVar3 == cVar2) {
            func_0x000107914b9c();
            func_0x00010790b734();
            if (param_3 != 0) {
              func_0x000107915308();
              func_0x000107915344();
              do {
                func_0x00010791561c();
                func_0x00010791526c();
                func_0x000107918584();
                func_0x000107914d7c();
                func_0x00010790b734();
              } while ((param_3 & 1) != 0);
              func_0x000107914058();
            }
          }
        }
        unaff_x27 = (undefined8 *)((long)unaff_x27 - 1);
      }
      return;
    }
    func_0x0001079163b0();
    if ((bool)uVar1) {
      func_0x000107913e38();
      func_0x00010790b97c();
      func_0x0001079157a8();
      func_0x00010790b97c();
      func_0x00010791639c();
      func_0x00010790b97c();
      func_0x000107915808();
      func_0x00010790b97c();
      func_0x00010791407c();
      in_register_00005008 = unaff_x20[1];
      param_1 = *unaff_x20;
      in_register_00005028 = unaff_x20[3];
      param_2 = unaff_x20[2];
      func_0x000107914454(unaff_x20[4]);
      func_0x0001079158c0();
    }
    else {
      func_0x000107914a6c();
      func_0x00010790b97c();
    }
    unaff_x23 = unaff_x23 + -1;
    if (((ulong)unaff_x26 & 1) != 0) break;
    func_0x000107915b84();
    func_0x00010790b734();
    if ((param_3 & 1) != 0) break;
    func_0x000107914484();
    func_0x00010791741c();
    func_0x00010790b734();
    puVar5 = unaff_x21;
    if ((param_3 & 1) == 0) {
      do {
        func_0x000107917870(puVar5 + 5);
        if ((bool)uVar1) break;
        func_0x000107914668();
        func_0x00010790b734();
        puVar5 = unaff_x27;
      } while (param_3 == 0);
    }
    else {
      do {
        func_0x000107914508();
        func_0x00010790b734();
        unaff_x27 = unaff_x21;
      } while ((param_3 & 1) == 0);
    }
    func_0x000107917738();
    if (!(bool)uVar1) {
      do {
        func_0x0001079144e0();
        func_0x00010790b734();
        unaff_x26 = unaff_x24;
      } while ((param_3 & 1) != 0);
    }
    while (unaff_x27 < unaff_x26) {
      func_0x0001079144f4();
      func_0x000107917744();
      unaff_x27[4] = extraout_x8_00;
      unaff_x27[1] = in_register_00005008;
      *unaff_x27 = param_1;
      unaff_x27[3] = in_register_00005028;
      unaff_x27[2] = param_2;
      func_0x000107914058();
      do {
        func_0x000107914508();
        func_0x00010790b734();
      } while (param_3 == 0);
      do {
        func_0x0001079144e0();
        func_0x00010790b734();
      } while ((param_3 & 1) != 0);
    }
    in_CY = unaff_x27 + -5 <= unaff_x21;
    in_ZR = unaff_x21 == unaff_x27 + -5;
    if (!(bool)in_ZR) {
      func_0x0001079160a0();
    }
    unaff_x26 = (undefined8 *)0x0;
    func_0x0001079150e0();
  }
  unaff_x27 = (undefined8 *)0x0;
  func_0x000107914484();
  do {
    unaff_x27 = unaff_x27 + 5;
    func_0x000107915664();
    func_0x00010790b734();
  } while ((param_3 & 1) != 0);
  func_0x0001079174fc();
  if ((bool)uVar4) {
    do {
      unaff_x20 = unaff_x24;
      if (unaff_x24 < (undefined8 *)0x29) break;
      func_0x000107914440();
      func_0x00010790b734();
    } while ((param_3 & 1) == 0);
  }
  else {
    do {
      func_0x000107914440();
      func_0x00010790b734();
    } while (param_3 == 0);
  }
  func_0x0001079178ac();
  while (unaff_x27 < unaff_x28) {
    func_0x00010791424c();
    do {
      unaff_x27 = unaff_x27 + 5;
      func_0x000107915664();
      func_0x00010790b734();
    } while ((param_3 & 1) != 0);
    do {
      unaff_x28 = unaff_x28 + -5;
      func_0x000107915664();
      func_0x00010790b734();
    } while ((param_3 & 1) == 0);
  }
  unaff_x28 = unaff_x27 + -5;
  if (unaff_x21 != unaff_x28) {
    func_0x000107916544();
    func_0x0001079156d8();
  }
  func_0x0001079150cc();
  in_CY = unaff_x20 < (undefined8 *)0x29;
  in_ZR = unaff_x20 == (undefined8 *)0x28;
  if ((bool)in_CY) {
    func_0x0001079145cc();
    func_0x00010790baa8();
    func_0x00010791487c();
    func_0x00010790baa8();
    if (param_3 != 0) goto LAB_10790b50c;
    if (((ulong)unaff_x20 & 1) != 0) goto LAB_10790b310;
  }
  func_0x0001079141b4();
  FUN_10790b2f0();
  unaff_x26 = (undefined8 *)0x0;
  goto LAB_10790b310;
LAB_10790b5c4:
  do {
    puVar5 = puVar5 + 5;
    if (puVar5 == unaff_x24) {
      return;
    }
    func_0x00010791535c();
    func_0x00010790b734();
  } while (param_3 == 0);
  func_0x000107915670();
  do {
    func_0x000107914728((long)unaff_x21 + unaff_x23);
    if (unaff_x23 == 0) break;
    func_0x00010791608c();
    func_0x00010790b734();
  } while ((param_3 & 1) != 0);
  func_0x0001079150f4();
  goto LAB_10790b5c4;
LAB_10790b50c:
  unaff_x24 = unaff_x28;
  if (((ulong)unaff_x20 & 1) != 0) {
    return;
  }
  goto LAB_10790b30c;
}



/* Entry: 10790bf3c; end: 10790c13b;  */

undefined4 *
FUN_10790bf3c(long param_1,undefined8 param_2,undefined4 *param_3,undefined8 param_4,
             undefined4 param_5,undefined8 param_6,undefined8 *param_7,int param_8)

{
  int iVar1;
  undefined8 uVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  int iVar5;
  int iVar6;
  undefined4 *puStack_140;
  undefined4 *puStack_f8;
  undefined4 *puStack_f0;
  undefined4 *puStack_e8;
  undefined4 *puStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  
  uVar2 = param_6;
  func_0x00010790bc1c(param_6,*param_7,param_3 + 2,0,&puStack_e8);
  if (((int)uVar2 != 0) &&
     (uVar2 = param_6, func_0x00010790bc1c(param_6,*param_7,param_3 + 2,1,&puStack_f0),
     (int)uVar2 != 0)) {
    func_0x00010790bc1c(param_6,*param_7,param_3 + 2,2,&puStack_f8);
    puStack_140 = puStack_f8;
  }
  iVar5 = param_3[0xc];
  iVar1 = param_3[0xd];
  puVar3 = (undefined4 *)((ulong)puStack_e8 & 0xffffffff);
  iVar6 = -1;
  puVar4 = puStack_e8;
  while ((func_0x000107917180(), -10 < iVar6 + 1 && (((ulong)puVar3 & 1) != 0))) {
    puVar3 = param_3;
    func_0x00010790c1a4(param_3,iVar6,param_6,*param_7);
    iVar6 = iVar6 + -1;
    puVar4 = puVar3;
  }
  if (iVar5 != iVar1) {
    puStack_140 = puStack_f0;
  }
  puStack_e8 = puVar4;
  for (iVar5 = 1; puVar4 = puStack_140, func_0x000107917180(puStack_140,(ulong)puStack_140 >> 0x20),
      puVar3 = puStack_e8, (int)puVar4 != 0 && iVar5 - 1U < 10; iVar5 = iVar5 + 1) {
    puStack_140 = param_3;
    func_0x00010790c1a4(param_3,iVar5,param_6,*param_7);
  }
  uStack_a8 = *param_3;
  puStack_e0 = puStack_e8;
  uStack_d0 = 0xffffffffffffffff;
  uStack_d8 = 0;
  uStack_b4 = 0;
  uStack_b0 = 0;
  uStack_bc = 0;
  uStack_b8 = 0;
  uStack_ac = 0;
  uStack_c8 = param_4;
  uStack_c0 = param_5;
  func_0x000107916c88();
  func_0x00010790c1e0(param_1);
  if (param_8 != 0) {
    *(undefined4 **)(param_1 + 0x18) = puVar3;
    *(long *)(param_1 + 0x20) = *(long *)(param_1 + 0x20) + 1;
  }
  uStack_a8 = *param_3;
  uStack_d0 = 0xffffffffffffffff;
  uStack_d8 = 0;
  uStack_bc = 1;
  uStack_b8 = 0;
  uStack_b4 = 0;
  uStack_b0 = 0;
  uStack_ac = 0;
  puStack_e0 = puStack_140;
  uStack_c8 = param_4;
  uStack_c0 = param_5;
  func_0x000107916c88();
  func_0x00010790c1e0(param_1);
  return puVar3;
}



/* Entry: 10790ce80; end: 10790cef3;  */

bool FUN_10790ce80(long param_1,long param_2)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  bool bVar4;
  long lVar5;
  long lVar6;
  
  iVar1 = *(int *)(param_1 + 0x24);
  iVar2 = *(int *)(param_2 + 0x24);
  bVar3 = SBORROW4(iVar1,iVar2);
  bVar4 = iVar1 - iVar2 < 0;
  if (iVar1 == iVar2) {
    lVar5 = *(long *)(param_1 + 0x18);
    lVar6 = *(long *)(param_2 + 0x18);
    bVar3 = SBORROW8(lVar5,lVar6);
    bVar4 = lVar5 - lVar6 < 0;
    if (lVar5 == lVar6) {
      lVar5 = *(long *)(param_1 + 0x40);
      lVar6 = *(long *)(param_2 + 0x40);
      bVar3 = SBORROW8(lVar5,lVar6);
      bVar4 = lVar5 - lVar6 < 0;
      if (lVar5 == lVar6) {
        lVar5 = *(long *)(param_1 + 0x48);
        lVar6 = *(long *)(param_2 + 0x48);
        bVar3 = SBORROW8(lVar5,lVar6);
        bVar4 = lVar5 - lVar6 < 0;
        if (lVar5 == lVar6) {
          lVar5 = *(long *)(param_1 + 0x50);
          lVar6 = *(long *)(param_2 + 0x50);
          bVar3 = SBORROW8(lVar5,lVar6);
          bVar4 = lVar5 - lVar6 < 0;
          if (lVar5 == lVar6) {
            lVar5 = *(long *)(param_1 + 0x60);
            lVar6 = *(long *)(param_2 + 0x60);
            bVar3 = SBORROW8(lVar5,lVar6);
            bVar4 = lVar5 - lVar6 < 0;
            if (lVar5 == lVar6) {
              bVar3 = SBORROW8(*(long *)(param_1 + 0x58),*(long *)(param_2 + 0x58));
              bVar4 = *(long *)(param_1 + 0x58) - *(long *)(param_2 + 0x58) < 0;
            }
          }
        }
      }
      return bVar4 != bVar3;
    }
  }
  return bVar4 != bVar3;
}



/* Entry: 10790d3b8; end: 10790d4d3;  */

long FUN_10790d3b8(long param_1)

{
  char in_NG;
  char in_OV;
  long extraout_x8;
  long lVar1;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  long extraout_x8_03;
  long *unaff_x19;
  long unaff_x20;
  long unaff_x21;
  long unaff_x22;
  
  func_0x000107914110();
  lVar1 = extraout_x8;
  while (lVar1 != 0) {
    while (func_0x000107914c2c(), unaff_x22 = unaff_x20, in_NG == in_OV) {
      in_OV = SBORROW8(extraout_x8_00,unaff_x21);
      in_NG = extraout_x8_00 - unaff_x21 < 0;
      if (unaff_x21 <= extraout_x8_00) goto LAB_10790d444;
      if (*(long *)(unaff_x20 + 8) == 0) goto LAB_10790d404;
    }
    func_0x000107915c94();
    lVar1 = extraout_x8_01;
  }
LAB_10790d404:
  func_0x00010791612c();
  func_0x00010791733c();
  func_0x000107916e58(0xffffffffffffffff);
  *(undefined8 *)(extraout_x8_02 + 0x40) = 0;
  *(undefined8 **)(param_1 + 0x38) = (undefined8 *)(extraout_x8_02 + 0x40);
  *(undefined8 *)(param_1 + 0x60) = 0;
  *(undefined8 *)(param_1 + 0x58) = 0;
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined8 **)(param_1 + 0x50) = (undefined8 *)(param_1 + 0x58);
  func_0x000107913628();
  if (extraout_x8_03 != 0) {
    *unaff_x19 = extraout_x8_03;
  }
  func_0x000107913f98();
  func_0x0001004d7750();
  unaff_x20 = unaff_x22;
LAB_10790d444:
  return unaff_x20 + 0x28;
}



/* Entry: 10790ed7c; end: 10790eee7;  */

undefined8
FUN_10790ed7c(long param_1,long param_2,undefined8 *param_3,undefined4 *param_4,long param_5,
             long param_6)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  int *piVar5;
  int iVar6;
  long lVar7;
  int iVar8;
  long lVar9;
  long lVar10;
  
  uVar1 = *(long *)(param_5 + 0x18) + param_2;
  lVar2 = (param_6 - param_5) / 0x68;
  piVar5 = (int *)(param_5 + 0x24);
  lVar7 = lVar2;
  while( true ) {
    if (lVar7 == 0) {
      return 0;
    }
    lVar4 = *(long *)(piVar5 + -7);
    if ((((lVar4 != 0) && (*piVar5 != 0)) &&
        (lVar9 = *(long *)(param_1 + ((ulong)(*(long *)(piVar5 + -3) + param_2) >> 4) * 8) +
                 (*(long *)(piVar5 + -3) + param_2 & 0xfU) * 0x160 + (long)piVar5[-1] * 0xa0,
        *(int *)(lVar9 + 0x20) == 4 || *(int *)(lVar9 + 0x20) == 2)) &&
       ((*(long *)(*(long *)(param_1 + (uVar1 >> 4) * 8) + (uVar1 & 0xf) * 0x160 +
                   (long)*(int *)(param_5 + 0x20) * 0xa0 + 0xa8) == *(long *)(lVar9 + 0xa8) ||
        (*(char *)(lVar9 + 0xb0) != '\x01')))) break;
    lVar7 = lVar7 + -1;
    piVar5 = piVar5 + 0x1a;
  }
  if (lVar4 < 1) {
    return 0;
  }
  lVar7 = 0;
  lVar9 = lVar2;
  iVar6 = 0;
  for (piVar5 = (int *)(param_5 + 0x20); (lVar2 != lVar7 && (*(long *)(piVar5 + -6) <= lVar4));
      piVar5 = piVar5 + 0x1a) {
    lVar3 = lVar9;
    iVar8 = iVar6;
    if ((*(long *)(piVar5 + -6) == lVar4) &&
       (((lVar10 = *(long *)(param_1 + ((ulong)(*(long *)(piVar5 + -2) + param_2) >> 4) * 8) +
                   (*(long *)(piVar5 + -2) + param_2 & 0xfU) * 0x160 + (long)*piVar5 * 0xa0,
         (*(byte *)(lVar10 + 0xbd) & 1) == 0 &&
         (iVar8 = *(int *)(lVar10 + 0x60), lVar3 = lVar7, lVar9 != lVar2)) && (iVar6 <= iVar8)))) {
      lVar3 = lVar9;
      iVar8 = iVar6;
    }
    lVar9 = lVar3;
    lVar7 = lVar7 + 1;
    iVar6 = iVar8;
  }
  if (lVar9 == lVar2) {
    return 0;
  }
  param_5 = param_5 + lVar9 * 0x68;
  *param_3 = *(undefined8 *)(param_5 + 0x18);
  *param_4 = *(undefined4 *)(param_5 + 0x20);
  return 1;
}


