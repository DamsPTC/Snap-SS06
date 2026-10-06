/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 108b4e410; end: 108b4e48f;  */

void FUN_108b4e410(float param_1,float param_2,float *param_3,int param_4,int param_5)

{
  uint uVar1;
  float *pfVar2;
  float fVar3;
  float fVar4;
  
  pfVar2 = param_3;
  for (uVar1 = param_4 - param_5 & (param_4 - param_5 >> 0x1f ^ 0xffffffffU); uVar1 != 0;
      uVar1 = uVar1 - 1) {
    fVar3 = *pfVar2;
    fVar4 = pfVar2[param_5];
    pfVar2[param_5] = param_2 * fVar3 + fVar4 * param_1;
    *pfVar2 = fVar4 * -param_2 + fVar3 * param_1;
    pfVar2 = pfVar2 + 1;
  }
  param_4 = param_4 + (param_5 << 1 ^ 0xffffffffU);
  pfVar2 = param_3 + param_4;
  for (; -1 < param_4; param_4 = param_4 + -1) {
    fVar3 = *pfVar2;
    fVar4 = pfVar2[param_5];
    pfVar2[param_5] = param_2 * fVar3 + fVar4 * param_1;
    *pfVar2 = fVar4 * -param_2 + fVar3 * param_1;
    pfVar2 = pfVar2 + -1;
  }
  return;
}



/* Entry: 108b4e490; end: 108b4e733;  */

float * FUN_108b4e490(float *param_1,int *param_2,ulong param_3,ulong param_4,undefined8 param_5,
                     undefined8 param_6,undefined8 param_7)

{
  uint uVar1;
  char cVar2;
  char cVar3;
  undefined1 uVar4;
  float *pfVar5;
  float *pfVar6;
  float *pfVar7;
  int iVar8;
  long lVar9;
  uint uVar10;
  uint uVar11;
  undefined8 extraout_x8;
  long extraout_x8_00;
  long lVar12;
  long extraout_x8_01;
  long extraout_x8_02;
  long extraout_x8_03;
  long extraout_x8_04;
  undefined8 extraout_x8_05;
  long extraout_x8_06;
  int iVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  long extraout_x12;
  int iVar17;
  long lVar18;
  long lVar19;
  undefined8 unaff_x26;
  float *pfVar20;
  undefined8 unaff_x27;
  undefined8 unaff_x28;
  float fVar21;
  ulong uVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  undefined8 unaff_d8;
  undefined8 unaff_d9;
  float afStack_e0 [2];
  long alStack_d8 [15];
  float afStack_60 [2];
  undefined8 uStack_58;
  
  uVar14 = param_3;
  uVar16 = param_4;
  func_0x000108b4ebc0();
  uVar11 = (uint)uVar16;
  lVar18 = (long)(int)uVar11;
  uStack_58 = extraout_x8;
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (-(uVar16 >> 0x1f & 1) & 0xfffffffc00000000 | (uVar16 & 0xffffffff) << 2);
  pfVar7 = (float *)((long)afStack_60 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0));
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar19 = (long)pfVar7 - extraout_x12;
  if ((int)uVar11 < 2) {
    uVar11 = 1;
  }
  lVar9 = (ulong)uVar11 << 2;
  pfVar5 = pfVar7;
  _bzero();
  lVar12 = 0;
  do {
    fVar21 = param_1[lVar12];
    cVar3 = NAN(fVar21);
    cVar2 = fVar21 < 0.0;
    *(uint *)(lVar19 + lVar12 * 4) = (uint)(byte)cVar2;
    param_1[lVar12] = ABS(fVar21);
    param_2[lVar12] = 0;
    func_0x000108b4ebf4();
    lVar12 = extraout_x8_01;
  } while (cVar2 != cVar3);
  uVar16 = 0;
  iVar17 = (int)param_4;
  iVar13 = iVar17 >> 1;
  iVar8 = (int)param_3;
  cVar2 = SBORROW4(iVar8,iVar13);
  cVar3 = iVar8 - iVar13 < 0;
  if (iVar13 < iVar8) {
    lVar12 = 0;
    uVar16 = 0;
    do {
      uVar16 = (ulong)(uint)((float)uVar16 + param_1[lVar12]);
      func_0x000108b4ebf4();
      fVar21 = (float)uVar16;
      lVar12 = extraout_x8_02;
    } while (cVar3 != cVar2);
    cVar3 = false;
    cVar2 = '\0';
    if (1e-15 < fVar21) {
      cVar3 = false;
      cVar2 = '\x01';
      if (!NAN(fVar21)) {
        cVar3 = fVar21 < 64.0;
        cVar2 = '\0';
      }
    }
    if (!(bool)cVar3) {
      pfVar5 = param_1 + 1;
      *param_1 = 1.0;
      cVar2 = SBORROW4(iVar17,2);
      cVar3 = iVar17 + -2 < 0;
      iVar13 = iVar17;
      if (iVar17 < 3) {
        iVar13 = 2;
      }
      lVar9 = (ulong)(iVar13 - 1) << 2;
      _bzero();
      fVar21 = 1.0;
    }
    lVar12 = 0;
    fVar21 = ((float)iVar8 + 0.8) * (1.0 / fVar21);
    uVar16 = 0;
    uVar22 = 0;
    do {
      fVar24 = param_1[lVar12];
      fVar25 = fVar21 * fVar24;
      iVar13 = (int)fVar25;
      param_2[lVar12] = iVar13;
      fVar25 = (float)(int)(float)(int)fVar25;
      uVar22 = (ulong)(uint)((float)uVar22 + fVar25 * fVar25);
      uVar16 = (ulong)(uint)((float)uVar16 + fVar25 * fVar24);
      pfVar7[lVar12] = fVar25 + fVar25;
      param_3 = (ulong)(uint)((int)param_3 - iVar13);
      func_0x000108b4ebf4();
      lVar12 = extraout_x8_03;
    } while (cVar3 != cVar2);
  }
  else {
    uVar22 = 0;
  }
  iVar13 = (int)param_3;
  if (iVar17 + 3 < iVar13) {
    fVar21 = (float)iVar13;
    uVar22 = (ulong)(uint)((float)uVar22 + fVar21 * fVar21 + *pfVar7 * fVar21);
    *param_2 = *param_2 + iVar13;
    param_3 = 0;
  }
  uVar11 = 0;
  uVar10 = (uint)param_3 & ((int)(uint)param_3 >> 0x1f ^ 0xffffffffU);
  while( true ) {
    cVar2 = SBORROW4(uVar11,uVar10);
    cVar3 = (int)(uVar11 - uVar10) < 0;
    if (uVar11 == uVar10) break;
    uVar15 = 0;
    fVar25 = (float)uVar22 + 1.0;
    fVar23 = (float)uVar16;
    fVar21 = fVar25 + *pfVar7;
    fVar24 = (fVar23 + *param_1) * (fVar23 + *param_1);
    uVar16 = 1;
    do {
      fVar26 = (fVar23 + param_1[uVar16]) * (fVar23 + param_1[uVar16]);
      if (fVar24 * (fVar25 + pfVar7[uVar16]) < fVar21 * fVar26) {
        uVar15 = uVar16 & 0xffffffff;
        fVar21 = fVar25 + pfVar7[uVar16];
        fVar24 = fVar26;
      }
      uVar16 = uVar16 + 1;
    } while ((long)uVar16 < lVar18);
    uVar16 = (ulong)(uint)(fVar23 + param_1[uVar15]);
    uVar22 = (ulong)(uint)(fVar25 + pfVar7[uVar15]);
    pfVar7[uVar15] = pfVar7[uVar15] + 2.0;
    param_2[uVar15] = param_2[uVar15] + 1;
    uVar11 = uVar11 + 1;
  }
  lVar12 = 0;
  uVar4 = 1;
  do {
    iVar13 = *(int *)(lVar19 + lVar12 * 4);
    param_2[lVar12] = (param_2[lVar12] ^ -iVar13) + iVar13;
    func_0x000108b4ebf4();
    iVar13 = (int)param_7;
    lVar12 = extraout_x8_04;
  } while (cVar3 != cVar2);
  func_0x000108b4ebac(uStack_58);
  if ((bool)uVar4) {
    return pfVar5;
  }
  ___stack_chk_fail();
  *(undefined8 *)(lVar19 + -0x70) = unaff_d9;
  *(undefined8 *)(lVar19 + -0x68) = unaff_d8;
  *(undefined8 *)(lVar19 + -0x60) = unaff_x28;
  *(undefined8 *)(lVar19 + -0x58) = unaff_x27;
  *(undefined8 *)(lVar19 + -0x50) = unaff_x26;
  *(long *)(lVar19 + -0x48) = lVar19;
  *(long *)(lVar19 + -0x40) = lVar18;
  *(ulong *)(lVar19 + -0x38) = param_4;
  *(ulong *)(lVar19 + -0x30) = param_3;
  *(float **)(lVar19 + -0x28) = pfVar7;
  *(float **)(lVar19 + -0x20) = param_1;
  *(int **)(lVar19 + -0x18) = param_2;
  *(undefined1 **)(lVar19 + -0x10) = &stack0xfffffffffffffff0;
  *(code **)(lVar19 + -8) = FUN_108b4e734;
  func_0x000108b4ebc0();
  *(undefined8 *)(lVar19 + -0x78) = extraout_x8_05;
  if (0 < (int)uVar14) {
    iVar8 = (int)lVar9;
    uVar4 = iVar8 == 1;
    if (1 < iVar8) {
      uVar16 = uVar22;
      (*(code *)PTR____chkstk_darwin_11034bd40)((ulong)(iVar8 + 3) * 4 + 0xf & 0x7fffffff0);
      pfVar20 = (float *)((lVar19 + -0x80) - extraout_x8_06);
      func_0x000108b4ebdc();
      FUN_108b4e490(pfVar5,pfVar20,uVar14,lVar9);
      pfVar7 = pfVar20;
      FUN_108b4e874(pfVar20,lVar9,param_5);
      pfVar6 = pfVar20;
      lVar18 = lVar9;
      FUN_108b49998();
      uVar11 = (uint)lVar18;
      uVar10 = (uint)uVar14;
      if (iVar13 != 0) {
        func_0x000108b4e8dc(uVar16,uVar22,pfVar20,pfVar5,lVar9);
        uVar10 = 0xffffffff;
        func_0x000108b4ebdc();
        uVar11 = (uint)lVar9;
        pfVar6 = pfVar5;
      }
      pfVar5 = pfVar6;
      func_0x000108b4ebac(*(undefined8 *)(lVar19 + -0x78));
      if ((bool)uVar4) {
        return pfVar7;
      }
      goto LAB_108b4e870;
    }
  }
  _abort();
  uVar11 = (uint)lVar9;
  uVar10 = (uint)uVar14;
LAB_108b4e870:
  ___stack_chk_fail();
  if ((int)uVar10 < 2) {
    return (float *)0x1;
  }
  uVar14 = 0;
  pfVar7 = (float *)0x0;
  uVar1 = 0;
  if (uVar10 != 0) {
    uVar1 = uVar11 / uVar10;
  }
  do {
    uVar16 = 0;
    uVar11 = 0;
    do {
      uVar11 = (uint)pfVar5[uVar14 * uVar1 + uVar16] | uVar11;
      uVar16 = uVar16 + 1;
    } while (uVar16 < uVar1);
    pfVar7 = (float *)(ulong)((uint)(uVar11 != 0) << (ulong)((uint)uVar14 & 0x1f) | (uint)pfVar7);
    uVar14 = uVar14 + 1;
  } while (uVar14 != uVar10);
  return pfVar7;
}



/* Entry: 108b4e734; end: 108b4e873;  */

undefined1 *
FUN_108b4e734(undefined8 param_1,undefined1 *param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,int param_8)

{
  uint uVar1;
  undefined1 uVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  int iVar5;
  uint uVar6;
  undefined8 uVar7;
  uint uVar8;
  undefined8 extraout_x8;
  long extraout_x8_00;
  ulong uVar9;
  ulong uVar10;
  undefined1 *puVar11;
  undefined8 uVar12;
  undefined1 auStack_80 [8];
  undefined8 uStack_78;
  
  func_0x000108b4ebc0();
  if (0 < (int)param_4) {
    iVar5 = (int)param_3;
    uVar2 = iVar5 == 1;
    if (1 < iVar5) {
      uVar12 = param_1;
      uStack_78 = extraout_x8;
      (*(code *)PTR____chkstk_darwin_11034bd40)((ulong)(iVar5 + 3) * 4 + 0xf & 0x7fffffff0);
      puVar11 = auStack_80 + -extraout_x8_00;
      func_0x000108b4ebdc();
      FUN_108b4e490(param_2,puVar11,param_4,param_3);
      puVar4 = puVar11;
      FUN_108b4e874(puVar11,param_3,param_6);
      puVar3 = puVar11;
      uVar7 = param_3;
      FUN_108b49998();
      uVar6 = (uint)uVar7;
      uVar8 = (uint)param_4;
      if (param_8 != 0) {
        func_0x000108b4e8dc(uVar12,param_1,puVar11,param_2,param_3);
        uVar8 = 0xffffffff;
        func_0x000108b4ebdc();
        uVar6 = (uint)param_3;
        puVar3 = param_2;
      }
      param_2 = puVar3;
      func_0x000108b4ebac(uStack_78);
      if ((bool)uVar2) {
        return puVar4;
      }
      goto LAB_108b4e870;
    }
  }
  _abort();
  uVar6 = (uint)param_3;
  uVar8 = (uint)param_4;
LAB_108b4e870:
  ___stack_chk_fail();
  if ((int)uVar8 < 2) {
    return (undefined1 *)0x1;
  }
  uVar9 = 0;
  puVar4 = (undefined1 *)0x0;
  uVar1 = 0;
  if (uVar8 != 0) {
    uVar1 = uVar6 / uVar8;
  }
  do {
    uVar10 = 0;
    uVar6 = 0;
    do {
      uVar6 = *(uint *)(param_2 + uVar10 * 4 + uVar9 * uVar1 * 4) | uVar6;
      uVar10 = uVar10 + 1;
    } while (uVar10 < uVar1);
    puVar4 = (undefined1 *)(ulong)((uint)(uVar6 != 0) << (ulong)((uint)uVar9 & 0x1f) | (uint)puVar4)
    ;
    uVar9 = uVar9 + 1;
  } while (uVar9 != uVar8);
  return puVar4;
}



/* Entry: 108b4e874; end: 108b4e90b;  */

uint FUN_108b4e874(long param_1,uint param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  ulong uVar3;
  uint uVar4;
  ulong uVar5;
  
  if ((int)param_3 < 2) {
    return 1;
  }
  uVar3 = 0;
  uVar2 = 0;
  uVar1 = 0;
  if (param_3 != 0) {
    uVar1 = param_2 / param_3;
  }
  do {
    uVar5 = 0;
    uVar4 = 0;
    do {
      uVar4 = *(uint *)(param_1 + uVar3 * uVar1 * 4 + uVar5 * 4) | uVar4;
      uVar5 = uVar5 + 1;
    } while (uVar5 < uVar1);
    uVar2 = (uint)(uVar4 != 0) << (ulong)((uint)uVar3 & 0x1f) | uVar2;
    uVar3 = uVar3 + 1;
  } while (uVar3 != param_3);
  return uVar2;
}



/* Entry: 108b4e90c; end: 108b4e9fb;  */

void FUN_108b4e90c(undefined8 param_1,float *param_2,ulong param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  float *pfVar1;
  undefined1 uVar2;
  uint uVar3;
  undefined8 extraout_x8;
  long extraout_x8_00;
  undefined8 unaff_x19;
  ulong unaff_x20;
  float fVar4;
  float fVar5;
  undefined4 uVar6;
  undefined8 unaff_d8;
  undefined8 unaff_d9;
  float afStack_60 [2];
  undefined8 uStack_58;
  
  uVar6 = (undefined4)((ulong)param_1 >> 0x20);
  fVar4 = (float)param_1;
  pfVar1 = afStack_60;
  func_0x000108b4ebc0();
  if (((int)param_4 < 1) || (uVar2 = (int)param_3 == 1, unaff_x20 = param_3, (int)param_3 < 2)) {
    _abort();
    uVar3 = (uint)param_3;
  }
  else {
    unaff_d8 = CONCAT44(uVar6,fVar4);
    uStack_58 = extraout_x8;
    (*(code *)PTR____chkstk_darwin_11034bd40)((param_3 & 0xffffffff) * 4 + 0xf & 0x7fffffff0);
    pfVar1 = (float *)((long)afStack_60 - extraout_x8_00);
    FUN_108b49a7c(pfVar1,param_3);
    func_0x000108b4e8dc(pfVar1,param_2,param_3);
    FUN_108b4e298(param_2,param_3,0xffffffff,param_6,param_4,param_5);
    param_2 = pfVar1;
    func_0x000108b4e874(pfVar1,param_3,param_6);
    uVar3 = (uint)param_3;
    func_0x000108b4ebac(uStack_58);
    unaff_x19 = param_6;
    if ((bool)uVar2) {
      return;
    }
  }
  ___stack_chk_fail();
  *(undefined8 *)(pfVar1 + -0xc) = unaff_d9;
  *(undefined8 *)(pfVar1 + -10) = unaff_d8;
  *(ulong *)(pfVar1 + -8) = unaff_x20;
  *(undefined8 *)(pfVar1 + -6) = unaff_x19;
  *(undefined1 **)(pfVar1 + -4) = &stack0xfffffffffffffff0;
  *(code **)(pfVar1 + -2) = FUN_108b4e9fc;
  fVar5 = fVar4;
  func_0x000108b4ebd0();
  for (uVar3 = uVar3 & ((int)uVar3 >> 0x1f ^ 0xffffffffU); uVar3 != 0; uVar3 = uVar3 - 1) {
    *param_2 = fVar4 * (1.0 / SQRT(fVar5 + 1e-15)) * *param_2;
    param_2 = param_2 + 1;
  }
  return;
}



/* Entry: 108b4e9fc; end: 108b4eb3f;  */

void FUN_108b4e9fc(float param_1,float *param_2,uint param_3)

{
  float fVar1;
  
  fVar1 = param_1;
  func_0x000108b4ebd0();
  for (param_3 = param_3 & ((int)param_3 >> 0x1f ^ 0xffffffffU); param_3 != 0; param_3 = param_3 - 1
      ) {
    *param_2 = param_1 * (1.0 / SQRT(fVar1 + 1e-15)) * *param_2;
    param_2 = param_2 + 1;
  }
  return;
}



/* Entry: 108b4eb40; end: 108b4ec47;  */

float FUN_108b4eb40(float param_1)

{
  float fVar1;
  
  fVar1 = param_1 * param_1;
  return (param_1 +
         ((((((fVar1 * -0.004355406 + 0.023040136) * fVar1 + -0.05777359) * fVar1 + 0.097942345) *
            fVar1 + -0.13976583) * fVar1 + 0.19962704) * fVar1 + -0.3333166) * param_1 * fVar1) *
         0.63661975;
}



/* Entry: 108b4ec48; end: 108b4f1c7;  */

void FUN_108b4ec48(long param_1,int *param_2,short *param_3,ulong param_4)

{
  int *piVar1;
  short *psVar2;
  undefined8 *puVar3;
  long lVar4;
  ulong *puVar5;
  short sVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  long lVar11;
  long extraout_x12;
  ulong uVar12;
  uint uVar13;
  int *piVar14;
  int *unaff_x24;
  ulong unaff_x25;
  long unaff_x26;
  int iVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  ulong uStack_a0;
  undefined8 *puStack_98;
  long lStack_90;
  undefined4 uStack_88;
  short sStack_84;
  short sStack_82;
  short sStack_80;
  short sStack_7e;
  short sStack_7c;
  short sStack_7a;
  short sStack_78;
  short sStack_76;
  short sStack_74;
  short sStack_72;
  short sStack_70;
  short sStack_6e;
  short sStack_6c;
  short sStack_6a;
  long lStack_68;
  
  puVar5 = &uStack_a0;
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  piVar14 = (int *)(param_1 + 0xb4c);
  if (*(int *)(param_1 + 0x90c) != *(int *)(param_1 + 0x10b4)) {
    func_0x000108b4ec00(param_1);
    *(undefined4 *)(param_1 + 0x10b4) = *(undefined4 *)(param_1 + 0x90c);
  }
  if (*(int *)(param_1 + 0x10b8) == 0) {
    if (*(int *)(param_1 + 0x10bc) == 0) {
      psVar2 = (short *)(param_1 + 0x928);
      for (uVar12 = (ulong)(*(uint *)(param_1 + 0x924) &
                           ((int)*(uint *)(param_1 + 0x924) >> 0x1f ^ 0xffffffffU)); uVar12 != 0;
          uVar12 = uVar12 - 1) {
        psVar2[0x392] =
             psVar2[0x392] + (short)((uint)(((int)*psVar2 - (int)psVar2[0x392]) * 0x3fdc) >> 0x10);
        psVar2 = psVar2 + 1;
      }
      iVar10 = 0;
      unaff_x24 = (int *)0x0;
      uVar7 = *(uint *)(param_1 + 0x914);
      for (uVar12 = 0; (uVar7 & ((int)uVar7 >> 0x1f ^ 0xffffffffU)) != uVar12; uVar12 = uVar12 + 1)
      {
        iVar15 = (param_2 + 4)[uVar12];
        uVar13 = (uint)uVar12;
        if (iVar15 <= iVar10) {
          uVar13 = (uint)unaff_x24;
          iVar15 = iVar10;
        }
        iVar10 = iVar15;
        unaff_x24 = (int *)(ulong)uVar13;
      }
      uVar7 = *(int *)(param_1 + 0x91c) * (uVar7 - 1);
      _memmove(piVar14 + *(int *)(param_1 + 0x91c),piVar14,
               -(ulong)(uVar7 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar7 << 2);
      _memcpy(piVar14,param_1 + (long)(int)(*(int *)(param_1 + 0x91c) * (uint)unaff_x24) * 4 + 4,
              (long)*(int *)(param_1 + 0x91c) << 2);
      param_2 = param_2 + 4;
      for (uVar12 = (ulong)(*(uint *)(param_1 + 0x914) &
                           ((int)*(uint *)(param_1 + 0x914) >> 0x1f ^ 0xffffffffU)); uVar12 != 0;
          uVar12 = uVar12 - 1) {
        lVar4 = (long)*(int *)(param_1 + 0x10ac) +
                (((long)*param_2 - (long)*(int *)(param_1 + 0x10ac)) * 0x121a >> 0x10);
        iVar15 = (int)lVar4;
        *(int *)(param_1 + 0x10ac) = iVar15;
        iVar10 = *param_2;
        if ((int)((ulong)(lVar4 * 0xb53c) >> 0x10) <= *param_2) {
          iVar10 = iVar15;
        }
        *(int *)(param_1 + 0x10ac) = iVar10;
        param_2 = param_2 + 1;
      }
      if (*(int *)(param_1 + 0x10b8) != 0) goto LAB_108b4ecb4;
    }
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbdc4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__bzero_11034bf90)(param_1 + 0x106c,(long)*(int *)(param_1 + 0x924) << 2);
      return;
    }
  }
  else {
LAB_108b4ecb4:
    (*(code *)PTR____chkstk_darwin_11034bd40)
              (-(param_4 >> 0x1f & 1) & 0xfffffffc00000000 | (param_4 & 0xffffffff) << 2);
    lVar4 = -extraout_x12;
    puVar5 = (ulong *)((long)&uStack_a0 + lVar4);
    iVar10 = *(int *)(param_1 + 0x10ac);
    iVar15 = (int)((ulong)((long)*(int *)(param_1 + 0x1110) *
                          (long)(int)*(short *)(param_1 + 0x10fc)) >> 0x10);
    if ((iVar15 < 0x200000) && (iVar10 < 0x800001)) {
      uVar7 = (int)((ulong)((long)iVar10 * (long)iVar10) >> 0x10) -
              ((uint)((ulong)((long)iVar15 * (long)iVar15) >> 0xb) & 0xffffffe0);
      unaff_x24 = (int *)0x8;
    }
    else {
      uVar7 = (iVar10 >> 0x10) * (iVar10 >> 0x10) + (iVar15 >> 0x10) * (iVar15 >> 0x10) * -0x20;
      unaff_x24 = (int *)0x10;
    }
    if ((int)uVar7 < 1) {
      unaff_x25 = 0;
    }
    else {
      uVar8 = (uint)LZCOUNT(uVar7);
      uVar13 = uVar7;
      if (uVar8 - 0x18 != 0) {
        uVar13 = (uVar7 << (ulong)(uVar8 + 8 & 0x1f)) + (uVar7 >> (ulong)(0x18 - uVar8 & 0x1f));
        if (uVar7 < 0x80) {
          uVar13 = uVar7 << (ulong)(uVar8 - 0x18 & 0x1f);
        }
      }
      uVar9 = 0xb486;
      if ((LZCOUNT(uVar7) & 1U) != 0) {
        uVar9 = 0x8000;
      }
      uVar9 = uVar9 >> (ulong)(uVar8 >> 1);
      unaff_x25 = (ulong)(uVar9 + (uVar9 * (uVar13 & 0x7f) * 0xd5 >> 0x10));
    }
    uVar12 = 0xff;
    do {
      uVar7 = (uint)uVar12;
      uVar13 = (uint)param_4;
      uVar12 = uVar12 >> 1;
    } while ((int)uVar13 < (int)uVar7);
    uVar8 = *(uint *)(param_1 + 0x10b0);
    lVar11 = 0x40;
    for (uVar12 = param_4 & 0xffffffff; uVar12 != 0; uVar12 = uVar12 - 1) {
      uVar8 = uVar8 * 0xbb38435 + 0x3619636b;
      *(int *)((long)puVar5 + lVar11) = piVar14[uVar7 & uVar8 >> 0x18];
      lVar11 = lVar11 + 4;
    }
    *(uint *)(param_1 + 0x10b0) = uVar8;
    func_0x000108b59db8(&uStack_88,param_1 + 0x104c,*(undefined4 *)(param_1 + 0x924),
                        *(undefined4 *)(param_1 + 0x10c0));
    puVar3 = (undefined8 *)(param_1 + 0x106c);
    uVar16 = *puVar3;
    uVar18 = *(undefined8 *)(param_1 + 0x1084);
    uVar17 = *(undefined8 *)(param_1 + 0x107c);
    *(undefined8 *)((long)&puStack_98 + lVar4) = *(undefined8 *)(param_1 + 0x1074);
    *puVar5 = uVar16;
    *(undefined8 *)((long)&uStack_88 + lVar4) = uVar18;
    *(undefined8 *)((long)&lStack_90 + lVar4) = uVar17;
    uVar16 = *(undefined8 *)(param_1 + 0x108c);
    uVar18 = *(undefined8 *)(param_1 + 0x10a4);
    uVar17 = *(undefined8 *)(param_1 + 0x109c);
    puStack_98 = puVar3;
    *(undefined8 *)((long)&sStack_78 + lVar4) = *(undefined8 *)(param_1 + 0x1094);
    *(undefined8 *)((long)&sStack_80 + lVar4) = uVar16;
    *(undefined8 *)((long)&lStack_68 + lVar4) = uVar18;
    *(undefined8 *)((long)&sStack_70 + lVar4) = uVar17;
    uVar7 = *(uint *)(param_1 + 0x924);
    param_2 = (int *)puVar5;
    if (uVar7 != 10 && uVar7 != 0x10) goto LAB_108b4f1c4;
    iVar10 = (int)unaff_x25 << (long)unaff_x24;
    lStack_90 = (long)sStack_74;
    uStack_a0 = param_4;
    piVar14 = (int *)((long)&sStack_80 + lVar4);
    unaff_x24 = (int *)(long)sStack_6c;
    unaff_x25 = 0xf8000000;
    unaff_x26 = 0x7ffffff;
    for (uVar12 = (ulong)(uVar13 & ((int)uVar13 >> 0x1f ^ 0xffffffffU)); uVar12 != 0;
        uVar12 = uVar12 - 1) {
      iVar15 = (uVar7 >> 1) + (int)((ulong)((long)piVar14[7] * (long)(int)(short)uStack_88) >> 0x10)
               + (int)((ulong)((long)piVar14[6] * (long)(int)uStack_88._2_2_) >> 0x10) +
                 (int)((ulong)((long)piVar14[5] * (long)(int)sStack_84) >> 0x10) +
               (int)((ulong)((long)piVar14[4] * (long)(int)sStack_82) >> 0x10) +
               (int)((ulong)((long)piVar14[3] * (long)(int)sStack_80) >> 0x10) +
               (int)((ulong)((long)piVar14[2] * (long)(int)sStack_7e) >> 0x10) +
               (int)((ulong)((long)piVar14[1] * (long)(int)sStack_7c) >> 0x10) +
               (int)((ulong)((long)*piVar14 * (long)(int)sStack_7a) >> 0x10) +
               (int)((ulong)((long)piVar14[-1] * (long)(int)sStack_78) >> 0x10) +
               (int)((ulong)((long)piVar14[-2] * (long)(int)sStack_76) >> 0x10);
      if (uVar7 == 0x10) {
        iVar15 = iVar15 + (int)((ulong)((long)piVar14[-3] * (long)(int)sStack_74) >> 0x10) +
                          (int)((ulong)((long)piVar14[-4] * (long)(int)sStack_72) >> 0x10) +
                          (int)((ulong)((long)piVar14[-5] * (long)(int)sStack_70) >> 0x10) +
                          (int)((ulong)((long)piVar14[-6] * (long)(int)sStack_6e) >> 0x10) +
                          (int)((ulong)((long)piVar14[-7] * (long)(int)sStack_6c) >> 0x10) +
                 (int)((ulong)((long)piVar14[-8] * (long)(int)sStack_6a) >> 0x10);
      }
      if (iVar15 < -0x7ffffff) {
        iVar15 = -0x8000000;
      }
      if (0x7fffffe < iVar15) {
        iVar15 = 0x7ffffff;
      }
      iVar15 = NEON_sqadd(piVar14[8],iVar15 << 4);
      piVar14[8] = iVar15;
      uVar8 = ((int)((ulong)((long)(iVar10 >> 6) * (long)iVar15) >> 0x10) >> 7) + 1 >> 1;
      if ((int)uVar8 < -0x7fff) {
        uVar8 = 0xffff8000;
      }
      sVar6 = 0x7fff;
      if (0x7ffe < (int)uVar8) {
        uVar8 = 0x7fff;
      }
      param_4 = (ulong)uVar8;
      iVar15 = uVar8 + (int)*param_3;
      if (iVar15 < 0x8000) {
        if (iVar15 < -0x8000) {
          sVar6 = -0x8000;
        }
        else {
          sVar6 = *param_3 + (short)uVar8;
        }
      }
      *param_3 = sVar6;
      piVar14 = piVar14 + 1;
      param_3 = param_3 + 1;
    }
    piVar1 = (int *)((long)puVar5 + (long)(int)uVar13 * 4);
    uVar16 = *(undefined8 *)piVar1;
    uVar18 = *(undefined8 *)(piVar1 + 6);
    uVar17 = *(undefined8 *)(piVar1 + 4);
    *(undefined8 *)(param_1 + 0x1074) = *(undefined8 *)(piVar1 + 2);
    *puVar3 = uVar16;
    *(undefined8 *)(param_1 + 0x1084) = uVar18;
    *(undefined8 *)(param_1 + 0x107c) = uVar17;
    uVar16 = *(undefined8 *)(piVar1 + 8);
    uVar18 = *(undefined8 *)(piVar1 + 0xe);
    uVar17 = *(undefined8 *)(piVar1 + 0xc);
    *(undefined8 *)(param_1 + 0x1094) = *(undefined8 *)(piVar1 + 10);
    *(undefined8 *)(param_1 + 0x108c) = uVar16;
    *(undefined8 *)(param_1 + 0x10a4) = uVar18;
    *(undefined8 *)(param_1 + 0x109c) = uVar17;
    param_1 = 0;
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
      return;
    }
  }
  ___stack_chk_fail();
LAB_108b4f1c4:
  _abort();
  *(long *)((long)puVar5 + -0x50) = unaff_x26;
  *(ulong *)((long)puVar5 + -0x48) = unaff_x25;
  *(int **)((long)puVar5 + -0x40) = unaff_x24;
  *(int **)((long)puVar5 + -0x38) = param_2;
  *(int **)((long)puVar5 + -0x30) = piVar14;
  *(long *)((long)puVar5 + -0x28) = param_1;
  *(short **)((long)puVar5 + -0x20) = param_3;
  *(ulong *)((long)puVar5 + -0x18) = param_4;
  *(undefined1 **)((long)puVar5 + -0x10) = &stack0xfffffffffffffff0;
  *(code **)((long)puVar5 + -8) = FUN_108b4f1c8;
  FUN_108b4f2d0();
  for (; piVar14 != unaff_x24; piVar14 = (int *)((long)piVar14 + 1)) {
    if (0 < *(int *)(param_4 + (long)piVar14 * 4)) {
      func_0x000108b4f32c();
      for (; unaff_x26 != 0x10; unaff_x26 = unaff_x26 + 1) {
        if ((int)*(char *)((long)param_3 + unaff_x26) != 0) {
          func_0x000108b4a0c4(param_1,(uint)(int)*(char *)((long)param_3 + unaff_x26) >> 7 & 1 ^ 1,
                              (undefined1 *)((long)puVar5 + -0x52),8);
        }
      }
    }
    param_3 = param_3 + 8;
  }
  return;
}



/* Entry: 108b4f1c8; end: 108b4f2cf;  */

void FUN_108b4f1c8(void)

{
  long unaff_x19;
  long unaff_x20;
  long unaff_x22;
  long unaff_x24;
  long unaff_x26;
  
  FUN_108b4f2d0();
  for (; unaff_x22 != unaff_x24; unaff_x22 = unaff_x22 + 1) {
    if (0 < *(int *)(unaff_x19 + unaff_x22 * 4)) {
      func_0x000108b4f32c();
      for (; unaff_x26 != 0x10; unaff_x26 = unaff_x26 + 1) {
        if (*(char *)(unaff_x20 + unaff_x26) != '\0') {
          func_0x000108b4a0c4();
        }
      }
    }
    unaff_x20 = unaff_x20 + 0x10;
  }
  return;
}



/* Entry: 108b4f2d0; end: 108b4f347;  */

void FUN_108b4f2d0(void)

{
  return;
}



/* Entry: 108b4f348; end: 108b4f3cf;  */

undefined8 FUN_108b4f348(void)

{
  undefined4 *unaff_x19;
  
  FUN_108b4f3d0();
  unaff_x19[0x252] = 1;
  *unaff_x19 = 0x10000;
  unaff_x19[0x430] = 0;
  func_0x000108b4ec00();
  unaff_x19[0x431] = unaff_x19[0x246] << 7;
  *(undefined8 *)(unaff_x19 + 0x443) = 0x1000000010000;
  *(undefined8 *)(unaff_x19 + 0x446) = 0x1400000002;
  return 0;
}



/* Entry: 108b4f3d0; end: 108b4f3db;  */

void FUN_108b4f3d0(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbdc4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__bzero_11034bf90)(param_1,0x1128);
  return;
}



/* Entry: 108b4f3dc; end: 108b4fc23;  */

uint * FUN_108b4f3dc(uint *param_1,uint *param_2,undefined2 *param_3,uint *param_4,long param_5,
                    long param_6)

{
  undefined8 *puVar1;
  int *piVar2;
  short sVar3;
  short sVar4;
  int iVar5;
  uint uVar6;
  ulong uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  ulong uVar11;
  undefined2 *puVar12;
  uint *puVar13;
  uint *puVar14;
  uint uVar15;
  uint uVar16;
  long extraout_x8;
  long extraout_x8_00;
  long lVar17;
  long extraout_x8_01;
  long extraout_x8_02;
  long lVar18;
  long extraout_x8_03;
  uint uVar19;
  uint *puVar20;
  long lVar21;
  int iVar22;
  ulong extraout_x12;
  ulong uVar23;
  int extraout_w13;
  int iVar24;
  int iVar25;
  uint *puVar26;
  ulong uVar27;
  undefined8 uVar28;
  uint uVar29;
  ulong unaff_x24;
  uint *unaff_x25;
  ulong unaff_x26;
  undefined8 *puVar30;
  short *psVar31;
  undefined8 uVar32;
  undefined8 uVar33;
  undefined8 uVar34;
  undefined8 uVar35;
  undefined8 uVar36;
  undefined8 uVar37;
  undefined1 auStack_210 [4];
  uint uStack_20c;
  undefined8 auStack_208 [17];
  long alStack_180 [12];
  uint *apuStack_120 [2];
  undefined4 uStack_10c;
  uint *puStack_108;
  int aiStack_100 [2];
  uint *apuStack_f8 [6];
  long lStack_c8;
  long lStack_c0;
  ulong uStack_b8;
  uint uStack_ac;
  uint *puStack_a8;
  undefined2 *puStack_a0;
  ulong uStack_98;
  short sStack_90;
  short sStack_8e;
  short sStack_8c;
  short sStack_8a;
  short sStack_88;
  short sStack_86;
  short sStack_84;
  short sStack_82;
  short sStack_80;
  short sStack_7e;
  short sStack_7c;
  short sStack_7a;
  short sStack_78;
  short sStack_76;
  short sStack_74;
  short sStack_72;
  long lStack_70;
  
  uStack_10c = (undefined4)param_5;
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar14 = param_1;
  apuStack_120[1] = (uint *)param_3;
  apuStack_f8[0] = param_2;
  (*(code *)PTR____chkstk_darwin_11034bd40)((long)(int)param_1[0x248] << 1);
  lVar17 = (long)apuStack_120 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lStack_c0 = lVar17;
  (*(code *)PTR____chkstk_darwin_11034bd40)
            ((-(ulong)(puVar14[0x246] + extraout_w13 >> 0x1f) & 0xfffffffc00000000 |
             (ulong)(puVar14[0x246] + extraout_w13) << 2) + 0xf & 0xfffffffffffffff0);
  lVar17 = lVar17 - extraout_x8_00;
  lStack_c8 = lVar17;
  (*(code *)PTR____chkstk_darwin_11034bd40)((long)(int)puVar14[0x247] << 2);
  puVar20 = (uint *)(lVar17 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0));
  apuStack_f8[5] = puVar20;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  puVar30 = (undefined8 *)((long)puVar20 - (extraout_x8_02 + 0x4fU & 0xfffffffffffffff0));
  sVar3 = *(short *)(&UNK_10df91dbe +
                    (long)*(char *)((long)puVar14 + 0xb46) * 2 +
                    (long)((int)*(char *)((long)puVar14 + 0xb45) >> 1) * 4);
  aiStack_100[1] = (int)*(char *)((long)puVar14 + 0xb47);
  iVar24 = (int)*(char *)((long)puVar14 + 0xb4a);
  puVar14 = puVar14 + 1;
  uVar23 = extraout_x12;
  for (lVar17 = 0; lVar17 < (int)uVar23; lVar17 = lVar17 + 1) {
    iVar24 = iVar24 * 0xbb38435 + 0x3619636b;
    sVar4 = *(short *)((long)param_4 + lVar17 * 2);
    uVar6 = sVar4 * 0x4000;
    iVar22 = (int)sVar4;
    uVar15 = (int)sVar4 << 0xe | 0x500;
    if (-1 < iVar22) {
      uVar15 = uVar6;
    }
    uVar6 = uVar6 - 0x500;
    if (iVar22 < 1) {
      uVar6 = uVar15;
    }
    uVar6 = uVar6 + sVar3 * 0x10;
    uVar15 = -uVar6;
    if (-1 < iVar24) {
      uVar15 = uVar6;
    }
    param_1[lVar17 + 1] = uVar15;
    iVar24 = iVar24 + iVar22;
    uVar23 = (ulong)param_1[0x246];
  }
  uVar23 = 0;
  uVar28 = *(undefined8 *)(param_1 + 0x141);
  uVar33 = *(undefined8 *)(param_1 + 0x147);
  uVar32 = *(undefined8 *)(param_1 + 0x145);
  puVar30[1] = *(undefined8 *)(param_1 + 0x143);
  *puVar30 = uVar28;
  puVar30[3] = uVar33;
  puVar30[2] = uVar32;
  puVar20 = apuStack_f8[0];
  apuStack_f8[1] = (uint *)(puVar30 + 4);
  apuStack_f8[4] = apuStack_f8[0] + 8;
  apuStack_f8[3] = apuStack_f8[0] + 0x18;
  uVar28 = *(undefined8 *)(param_1 + 0x149);
  uVar33 = *(undefined8 *)(param_1 + 0x14f);
  uVar32 = *(undefined8 *)(param_1 + 0x14d);
  apuStack_120[0] = param_1 + 0x141;
  puVar30[5] = *(undefined8 *)(param_1 + 0x14b);
  puVar30[4] = uVar28;
  puVar30[7] = uVar33;
  puVar30[6] = uVar32;
  apuStack_f8[2] = puVar20 + 4;
  puStack_108 = param_1 + 0x151;
  uStack_b8 = (ulong)param_1[0x248];
  puStack_a0 = (undefined2 *)apuStack_120[1];
  while( true ) {
    uVar15 = (uint)param_5;
    uVar28 = 0x200000000;
    uVar27 = 0x7fffffff;
    puVar20 = (uint *)0x80000000;
    if ((long)(int)param_1[0x245] <= (long)uVar23) break;
    puVar26 = apuStack_f8[4] + (uVar23 >> 1 & 0x7fffffff) * 8;
    param_3 = (undefined2 *)((long)(int)param_1[0x249] << 1);
    param_4 = (uint *)0x20;
    param_2 = puVar26;
    puStack_a8 = puVar14;
    uStack_98 = uVar23;
    ___memcpy_chk(&sStack_90,puVar26,param_3);
    uVar23 = uStack_98;
    lVar18 = lStack_c0;
    lVar17 = lStack_c8;
    puVar14 = apuStack_f8[5];
    uVar6 = apuStack_f8[2][uStack_98];
    unaff_x26 = (ulong)uVar6;
    uVar15 = -uVar6;
    if (-1 < (int)uVar6) {
      uVar15 = uVar6;
    }
    iVar22 = (int)LZCOUNT(uVar15);
    iVar24 = uVar6 << (ulong)(iVar22 - 1U & 0x1f);
    uVar8 = 0;
    if (iVar24 >> 0x10 != 0) {
      uVar8 = 0x1fffffff / (iVar24 >> 0x10);
    }
    uVar29 = (int)((ulong)((long)(int)(-((-((ulong)(uVar8 >> 0xf) & 1) & 0xfffffff800000000 |
                                         ((ulong)uVar8 & 0xffff) << 0x13) * (long)iVar24 &
                                        0xfffffff800000000) >> 0x20) * (long)(int)uVar8) >> 0x10) +
             uVar8 * 0x10000;
    uVar9 = iVar22 - 0xf;
    uVar16 = -0x80000000 >> (uVar9 & 0x1f);
    uVar19 = 0x7fffffff >> (ulong)(uVar9 & 0x1f);
    uVar10 = uVar29;
    if ((int)uVar29 <= (int)uVar16) {
      uVar10 = uVar16;
    }
    if ((int)uVar29 <= (int)uVar19) {
      uVar19 = uVar10;
    }
    uVar29 = (int)uVar29 >> (0xfU - iVar22 & 0x1f);
    if (uVar15 >> 0x11 == 0) {
      uVar29 = uVar19 << (ulong)(uVar9 & 0x1f);
    }
    unaff_x24 = (ulong)uVar29;
    uVar15 = *param_1;
    if (uVar6 == uVar15) {
      iVar24 = 0x10000;
    }
    else {
      lVar21 = 0;
      uVar16 = -uVar15;
      if (-1 < (int)uVar15) {
        uVar16 = uVar15;
      }
      iVar5 = uVar15 << (ulong)((int)LZCOUNT(uVar16) - 1U & 0x1f);
      iVar25 = (int)((ulong)((long)(int)(short)uVar8 * (long)iVar5) >> 0x10);
      uVar15 = (int)((ulong)((long)(int)(short)uVar8 *
                            (long)(int)(iVar5 - ((uint)((ulong)((long)iVar25 * (long)iVar24) >> 0x1d
                                                       ) & 0xfffffff8))) >> 0x10) + iVar25;
      iVar22 = (int)LZCOUNT(uVar16) - iVar22;
      iVar24 = (int)uVar15 >> (iVar22 + 0xdU & 0x1f);
      if (0x2f < iVar22 + 0x1dU) {
        iVar24 = 0;
      }
      uVar10 = -iVar22 - 0xd;
      uVar8 = -0x80000000 >> (uVar10 & 0x1f);
      uVar16 = 0x7fffffff >> (ulong)(uVar10 & 0x1f);
      if ((int)uVar8 <= (int)uVar15) {
        uVar8 = uVar15;
      }
      if ((int)uVar15 <= (int)uVar16) {
        uVar16 = uVar8;
      }
      if (iVar22 < -0xd) {
        iVar24 = uVar16 << (ulong)(uVar10 & 0x1f);
      }
      for (; lVar21 != 0x40; lVar21 = lVar21 + 4) {
        *(int *)((long)puVar30 + lVar21) =
             (int)((ulong)((long)*(int *)((long)puVar30 + lVar21) * (long)iVar24) >> 0x10);
      }
    }
    psVar31 = (short *)((long)apuStack_f8[3] + uVar23 * 10);
    *param_1 = uVar6;
    unaff_x25 = puVar26;
    if ((param_1[0x42e] == 0) ||
       ((param_1[0x42f] != 2 || *(char *)((long)param_1 + 0xb45) == '\x02') || 1 < uVar23)) {
      if (*(char *)((long)param_1 + 0xb45) == '\x02') {
        uVar8 = apuStack_f8[0][uVar23];
        goto LAB_108b4f7d0;
      }
      uStack_ac = param_1[0x247];
      uVar23 = (ulong)(uStack_ac & ((int)uStack_ac >> 0x1f ^ 0xffffffffU));
      puVar13 = puStack_a8;
    }
    else {
      psVar31[0] = 0;
      psVar31[1] = 0;
      psVar31[2] = 0;
      psVar31[3] = 0;
      psVar31[4] = 0;
      psVar31[2] = 0x1000;
      uVar8 = param_1[0x241];
      apuStack_f8[0][uVar23] = uVar8;
LAB_108b4f7d0:
      uVar27 = (ulong)uVar8;
      if ((uVar23 == 0) || (aiStack_100[1] < 4 && uVar23 == 2)) {
        uVar16 = param_1[0x248];
        uVar15 = param_1[0x249];
        iVar24 = (uVar16 - uVar15) - uVar8;
        uVar10 = iVar24 - 2;
        unaff_x25 = (uint *)(ulong)uVar10;
        if (uVar10 == 0 || iVar24 < 2) {
LAB_108b4fc1c:
          _abort();
          puVar20 = puVar26;
          goto LAB_108b4fc20;
        }
        uVar19 = param_1[0x247];
        if (uVar23 == 2) {
          _memcpy((long)puStack_108 + (long)(int)uVar16 * 2,apuStack_120[1],(long)(int)uVar19 << 2);
          uVar19 = param_1[0x247];
          uVar16 = param_1[0x248];
          uVar15 = param_1[0x249];
          lVar18 = lStack_c0;
          uVar23 = uStack_98;
        }
        FUN_108b599cc(lVar18 + (long)unaff_x25 * 2,
                      (long)puStack_108 + (long)(int)(uVar10 + uVar19 * (int)uVar23) * 2,puVar26,
                      uVar16 - uVar10,uVar15,uStack_10c);
        if (uStack_98 == 0) {
          uVar29 = (uint)((ulong)((long)(int)(short)apuStack_f8[0][0x22] * (long)(int)uVar29) >> 0xe
                         ) & 0xfffffffc;
        }
        uVar15 = uVar8;
        if ((int)uVar8 < -1) {
          uVar15 = 0xfffffffe;
        }
        iVar22 = (int)uStack_b8;
        iVar24 = -1;
        for (uVar23 = (ulong)(uVar15 + 2); puVar13 = apuStack_f8[5], lVar17 = lStack_c8,
            puVar20 = puVar26, uVar23 != 0; uVar23 = uVar23 - 1) {
          iVar22 = iVar22 + -1;
          *(int *)(lStack_c8 + (long)iVar22 * 4) =
               (int)((ulong)((long)(int)*(short *)(lStack_c0 +
                                                  (long)(int)(iVar24 + param_1[0x248]) * 2) *
                            (long)(int)uVar29) >> 0x10);
          iVar24 = iVar24 + -1;
        }
      }
      else {
        puVar13 = puVar14;
        if (iVar24 != 0x10000) {
          uVar15 = uVar8;
          if ((int)uVar8 < -1) {
            uVar15 = 0xfffffffe;
          }
          iVar22 = (int)uStack_b8;
          for (uVar23 = (ulong)(uVar15 + 2); uVar23 != 0; uVar23 = uVar23 - 1) {
            iVar22 = iVar22 + -1;
            *(int *)(lVar17 + (long)iVar22 * 4) =
                 (int)((ulong)((long)*(int *)(lVar17 + (long)iVar22 * 4) * (long)iVar24) >> 0x10);
          }
        }
      }
      uStack_ac = param_1[0x247];
      uVar15 = uStack_ac & ((int)uStack_ac >> 0x1f ^ 0xffffffffU);
      uVar23 = (ulong)uVar15;
      uVar11 = uStack_b8 & 0xffffffff;
      uVar7 = uStack_b8 >> 0x1f;
      iVar24 = (int)uStack_b8;
      uStack_b8 = (ulong)(iVar24 + uVar15);
      for (lVar18 = 0; uVar23 << 2 != lVar18; lVar18 = lVar18 + 4) {
        piVar2 = (int *)(lVar17 + (-(uVar7 & 1) & 0xfffffffc00000000 | uVar11 << 2) +
                                  (long)(int)uVar8 * -4 + lVar18);
        iVar22 = *(int *)((long)puStack_a8 + lVar18) +
                 ((int)((long)piVar2[2] * (long)(int)*psVar31 * 0x10000 +
                        (((ulong)((long)piVar2[1] * (long)(int)psVar31[1]) >> 0x10) << 0x20) +
                        (((ulong)((long)*piVar2 * (long)(int)psVar31[2]) >> 0x10) << 0x20) +
                        ((long)piVar2[-1] * (long)(int)psVar31[3] * 0x10000 & 0x7fffffff00000000U) +
                        0x200000000 >> 0x20) +
                 (int)((ulong)((long)(int)psVar31[4] * (long)piVar2[-2]) >> 0x10)) * 2;
        *(int *)((long)puVar13 + lVar18) = iVar22;
        *(int *)(lVar17 + (long)iVar24 * 4 + lVar18) = iVar22 * 2;
      }
    }
    uVar8 = uStack_ac;
    puVar14 = (uint *)(long)sStack_84;
    param_2 = (uint *)(long)sStack_82;
    param_3 = (undefined2 *)(long)sStack_80;
    param_4 = (uint *)(long)sStack_7e;
    param_5 = (long)sStack_7c;
    uVar15 = (uint)sStack_7c;
    param_6 = (long)sStack_7a;
    unaff_x24 = (ulong)sStack_74;
    puVar26 = puVar20;
    puVar20 = apuStack_f8[1];
    puVar12 = puStack_a0;
    for (; uVar23 != 0; uVar23 = uVar23 - 1) {
      uVar29 = param_1[0x249];
      unaff_x26 = (ulong)uVar29;
      if (uVar29 != 10 && uVar29 != 0x10) goto LAB_108b4fc1c;
      uVar16 = (int)((ulong)((long)(int)puVar20[7] * (long)(int)sStack_90) >> 0x10) + (uVar29 >> 1)
               + (int)((ulong)((long)(int)puVar20[6] * (long)(int)sStack_8e) >> 0x10) +
                 (int)((ulong)((long)(int)puVar20[5] * (long)(int)sStack_8c) >> 0x10) +
                 (int)((ulong)((long)(int)puVar20[4] * (long)(int)sStack_8a) >> 0x10) +
               (int)((ulong)((long)(int)puVar20[3] * (long)(int)sStack_88) >> 0x10) +
               (int)((ulong)((long)(int)puVar20[2] * (long)(int)sStack_86) >> 0x10) +
               (int)((ulong)((long)(int)puVar20[1] * (long)(int)sStack_84) >> 0x10) +
               (int)((ulong)((long)(int)*puVar20 * (long)(int)sStack_82) >> 0x10) +
               (int)((ulong)((long)(int)puVar20[-1] * (long)(int)sStack_80) >> 0x10) +
               (int)((ulong)((long)(int)puVar20[-2] * (long)(int)sStack_7e) >> 0x10);
      if (uVar29 == 0x10) {
        uVar16 = uVar16 + (int)((ulong)((long)(int)puVar20[-3] * (long)(int)sStack_7c) >> 0x10) +
                          (int)((ulong)((long)(int)puVar20[-4] * (long)(int)sStack_7a) >> 0x10) +
                          (int)((ulong)((long)(int)puVar20[-5] * (long)(int)sStack_78) >> 0x10) +
                          (int)((ulong)((long)(int)puVar20[-6] * (long)(int)sStack_76) >> 0x10) +
                          (int)((ulong)((long)(int)puVar20[-7] * (long)(int)sStack_74) >> 0x10) +
                          (int)((ulong)((long)(int)puVar20[-8] * (long)(int)sStack_72) >> 0x10);
      }
      unaff_x25 = (uint *)(ulong)uVar16;
      if ((int)uVar16 < -0x7ffffff) {
        uVar16 = 0xf8000000;
      }
      uVar28 = 0x7ffffff;
      if (0x7fffffe < (int)uVar16) {
        uVar16 = 0x7ffffff;
      }
      iVar24 = NEON_sqadd(*puVar13,uVar16 << 4);
      puVar20[8] = iVar24;
      uVar29 = ((int)((ulong)((long)((int)uVar6 >> 6) * (long)iVar24) >> 0x10) >> 7) + 1 >> 1;
      uVar27 = 0xffff8000;
      if ((int)uVar29 < -0x7fff) {
        uVar29 = 0xffff8000;
      }
      if (0x7ffe < (int)uVar29) {
        uVar29 = 0x7fff;
      }
      puVar26 = (uint *)(ulong)uVar29;
      *puVar12 = (short)uVar29;
      puVar20 = puVar20 + 1;
      puVar13 = puVar13 + 1;
      puVar12 = puVar12 + 1;
    }
    puVar1 = (undefined8 *)((long)puVar30 + (long)(int)uStack_ac * 4);
    uVar32 = puVar1[1];
    uVar28 = *puVar1;
    uVar34 = puVar1[3];
    uVar33 = puVar1[2];
    uVar35 = puVar1[4];
    uVar37 = puVar1[7];
    uVar36 = puVar1[6];
    puVar30[5] = puVar1[5];
    puVar30[4] = uVar35;
    puVar30[7] = uVar37;
    puVar30[6] = uVar36;
    puVar30[1] = uVar32;
    *puVar30 = uVar28;
    puVar30[3] = uVar34;
    puVar30[2] = uVar33;
    puVar14 = puStack_a8 + (int)uVar8;
    puStack_a0 = puStack_a0 + (int)uVar8;
    uVar23 = uStack_98 + 1;
  }
  uVar32 = *puVar30;
  uVar34 = puVar30[3];
  uVar33 = puVar30[2];
  *(undefined8 *)(apuStack_120[0] + 2) = puVar30[1];
  *(undefined8 *)apuStack_120[0] = uVar32;
  *(undefined8 *)(apuStack_120[0] + 6) = uVar34;
  *(undefined8 *)(apuStack_120[0] + 4) = uVar33;
  uVar32 = puVar30[4];
  uVar34 = puVar30[7];
  uVar33 = puVar30[6];
  *(undefined8 *)(apuStack_120[0] + 10) = puVar30[5];
  *(undefined8 *)(apuStack_120[0] + 8) = uVar32;
  *(undefined8 *)(apuStack_120[0] + 0xe) = uVar34;
  *(undefined8 *)(apuStack_120[0] + 0xc) = uVar33;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return puVar14;
  }
LAB_108b4fc20:
  ___stack_chk_fail();
  puVar30[-10] = unaff_x26;
  puVar30[-9] = unaff_x25;
  puVar30[-8] = unaff_x24;
  puVar30[-7] = uVar28;
  puVar30[-6] = param_1;
  puVar30[-5] = uVar27;
  puVar30[-4] = puVar20;
  puVar30[-3] = 0x7fff;
  puVar30[-2] = &stack0xfffffffffffffff0;
  puVar30[-1] = FUN_108b4fc24;
  puVar30[-0xb] = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  uVar6 = puVar14[0x246];
  *(undefined4 *)(puVar30 + -0xc) = 0;
  if (uVar6 - 1 < 0x140) {
    puVar20 = puVar14;
    if (uVar15 != 2) {
      if (uVar15 == 0) goto LAB_108b4fca4;
LAB_108b4fd74:
      FUN_108b4fe28();
      FUN_108b5545c();
      uVar15 = puVar14[0x246];
      if ((int)puVar14[0x248] < (int)uVar15) goto LAB_108b4fe20;
      uVar23 = (ulong)(puVar14[0x248] - uVar15);
      puVar26 = puVar14 + 0x151;
      _memmove(puVar26,(long)puVar26 + (long)(int)uVar15 * 2,uVar23 << 1);
      func_0x000108b4fe38((long)puVar26 + uVar23 * 2);
LAB_108b4fdb4:
      FUN_108b4fe28();
      FUN_108b4ec48();
      FUN_108b55d68(puVar14,param_3,uVar6);
      puVar14[0x241] = *(uint *)((long)puVar30 + (long)(int)puVar14[0x245] * 4 + -0xec);
      *param_4 = uVar6;
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == puVar30[-0xb]) {
        return (uint *)0x0;
      }
      goto LAB_108b4fe24;
    }
    if (puVar14[(long)(int)puVar14[600] + 0x260] != 1) goto LAB_108b4fd74;
LAB_108b4fca4:
    (*(code *)PTR____chkstk_darwin_11034bd40)(uVar6 * 2 + 0x1e & 0x7e0);
    FUN_108b5007c(puVar14,param_2);
    FUN_108b503a8(param_2,(long)puVar30 + (-0xf0 - extraout_x8_03),
                  (long)*(char *)((long)puVar14 + 0xb45),(long)*(char *)((long)puVar14 + 0xb46),
                  puVar14[0x246]);
    FUN_108b4fe48(puVar14,puVar30 + -0x1d,param_6);
    FUN_108b4fe28();
    FUN_108b4f3dc();
    uVar15 = puVar14[0x246];
    if ((int)uVar15 <= (int)puVar14[0x248]) {
      uVar23 = (ulong)(puVar14[0x248] - uVar15);
      puVar26 = puVar14 + 0x151;
      _memmove(puVar26,(long)puVar26 + (long)(int)uVar15 * 2,uVar23 << 1);
      func_0x000108b4fe38((long)puVar26 + uVar23 * 2);
      FUN_108b4fe28();
      FUN_108b5545c();
      puVar14[0x42e] = 0;
      puVar14[0x42f] = (int)*(char *)((long)puVar14 + 0xb45);
      if ((uint)(int)*(char *)((long)puVar14 + 0xb45) < 3) {
        puVar14[0x252] = 0;
        goto LAB_108b4fdb4;
      }
    }
  }
LAB_108b4fe20:
  _abort();
LAB_108b4fe24:
  ___stack_chk_fail();
  return puVar20;
}



/* Entry: 108b4fc24; end: 108b4fe27;  */

long FUN_108b4fc24(long param_1,undefined8 param_2,undefined8 param_3,int *param_4,int param_5,
                  undefined8 param_6)

{
  long lVar1;
  int iVar2;
  int iVar3;
  ulong uVar4;
  long extraout_x8;
  long unaff_x20;
  undefined1 auStack_f0 [4];
  undefined4 uStack_ec;
  undefined1 auStack_e8 [136];
  undefined4 uStack_60;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  iVar2 = *(int *)(param_1 + 0x918);
  uStack_60 = 0;
  if (iVar2 - 1U < 0x140) {
    unaff_x20 = param_1;
    if (param_5 != 2) {
      if (param_5 == 0) {
        uVar4 = (ulong)*(uint *)(param_1 + 0x960);
        goto LAB_108b4fca4;
      }
LAB_108b4fd74:
      FUN_108b4fe28();
      FUN_108b5545c();
      iVar3 = *(int *)(param_1 + 0x918);
      if (*(int *)(param_1 + 0x920) < iVar3) goto LAB_108b4fe20;
      uVar4 = (ulong)(uint)(*(int *)(param_1 + 0x920) - iVar3);
      lVar1 = param_1 + 0x544;
      _memmove(lVar1,lVar1 + (long)iVar3 * 2,uVar4 << 1);
      func_0x000108b4fe38(lVar1 + uVar4 * 2);
LAB_108b4fdb4:
      FUN_108b4fe28();
      FUN_108b4ec48();
      FUN_108b55d68(param_1,param_3,iVar2);
      *(undefined4 *)(param_1 + 0x904) = (&uStack_ec)[*(int *)(param_1 + 0x914)];
      *param_4 = iVar2;
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
        return 0;
      }
      goto LAB_108b4fe24;
    }
    uVar4 = (ulong)*(int *)(param_1 + 0x960);
    if (*(int *)(param_1 + uVar4 * 4 + 0x980) != 1) goto LAB_108b4fd74;
LAB_108b4fca4:
    (*(code *)PTR____chkstk_darwin_11034bd40)(iVar2 * 2 + 0x1eU & 0x7e0,param_1,param_2,uVar4);
    FUN_108b5007c(param_1,param_2);
    FUN_108b503a8(param_2,auStack_f0 + -extraout_x8,(long)*(char *)(param_1 + 0xb45),
                  (long)*(char *)(param_1 + 0xb46),*(undefined4 *)(param_1 + 0x918));
    FUN_108b4fe48(param_1,auStack_e8,param_6);
    FUN_108b4fe28();
    FUN_108b4f3dc();
    iVar3 = *(int *)(param_1 + 0x918);
    if (iVar3 <= *(int *)(param_1 + 0x920)) {
      uVar4 = (ulong)(uint)(*(int *)(param_1 + 0x920) - iVar3);
      lVar1 = param_1 + 0x544;
      _memmove(lVar1,lVar1 + (long)iVar3 * 2,uVar4 << 1);
      func_0x000108b4fe38(lVar1 + uVar4 * 2);
      FUN_108b4fe28();
      FUN_108b5545c();
      *(undefined4 *)(param_1 + 0x10b8) = 0;
      *(int *)(param_1 + 0x10bc) = (int)*(char *)(param_1 + 0xb45);
      if ((uint)(int)*(char *)(param_1 + 0xb45) < 3) {
        *(undefined4 *)(param_1 + 0x948) = 0;
        goto LAB_108b4fdb4;
      }
    }
  }
LAB_108b4fe20:
  _abort();
LAB_108b4fe24:
  ___stack_chk_fail();
  return unaff_x20;
}



/* Entry: 108b4fe28; end: 108b4fe47;  */

void FUN_108b4fe28(void)

{
  return;
}



/* Entry: 108b4fe48; end: 108b5007b;  */

undefined1 * FUN_108b4fe48(long param_1,long param_2,int param_3)

{
  uint uVar1;
  byte bVar2;
  int iVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  byte *pbVar7;
  int iVar8;
  int iVar9;
  char cVar10;
  short sVar11;
  int iVar12;
  ulong uVar13;
  undefined *puVar14;
  long lVar15;
  undefined1 *puVar16;
  long lVar17;
  byte abStack_108 [16];
  undefined1 auStack_f8 [32];
  long lStack_d8;
  short asStack_78 [16];
  short asStack_58 [16];
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  iVar9 = *(int *)(param_1 + 0x914);
  FUN_108b52bb4(param_2 + 0x10,param_1 + 0xb28,param_1 + 0x908,param_3 == 2);
  FUN_108b52f14(asStack_58,param_1 + 0xb30,*(undefined8 *)(param_1 + 0xb20));
  iVar3 = *(int *)(param_1 + 0x10c0);
  func_0x000108b59db8(param_2 + 0x40,asStack_58,*(undefined4 *)(param_1 + 0x924));
  if (*(int *)(param_1 + 0x948) == 1) {
    *(undefined1 *)(param_1 + 0xb47) = 4;
LAB_108b4ff1c:
    _memcpy(param_2 + 0x20,param_2 + 0x40,(long)*(int *)(param_1 + 0x924) << 1);
  }
  else {
    cVar10 = *(char *)(param_1 + 0xb47);
    if ('\x03' < cVar10) goto LAB_108b4ff1c;
    uVar1 = *(uint *)(param_1 + 0x924);
    for (lVar17 = 0; (ulong)(uVar1 & ((int)uVar1 >> 0x1f ^ 0xffffffffU)) << 1 != lVar17;
        lVar17 = lVar17 + 2) {
      sVar11 = *(short *)(param_1 + 0x928 + lVar17);
      *(short *)((long)asStack_78 + lVar17) =
           sVar11 + (short)((uint)(((int)*(short *)((long)asStack_58 + lVar17) - (int)sVar11) *
                                  (int)cVar10) >> 2);
    }
    iVar3 = *(int *)(param_1 + 0x10c0);
    func_0x000108b59db8(param_2 + 0x20,asStack_78);
  }
  iVar12 = *(int *)(param_1 + 0x924);
  iVar8 = (int)((long)iVar12 << 1);
  _memcpy(param_1 + 0x928,asStack_58);
  if (*(int *)(param_1 + 0x10b8) != 0) {
    func_0x000108b597b0(param_2 + 0x20,(long)iVar12,0xf852);
    iVar8 = 0xf852;
    func_0x000108b597b0(param_2 + 0x40,*(undefined4 *)(param_1 + 0x924));
  }
  if (*(char *)(param_1 + 0xb45) == '\x02') {
    puVar4 = (undefined1 *)(long)*(short *)(param_1 + 0xb42);
    puVar6 = (undefined1 *)(long)*(char *)(param_1 + 0xb44);
    iVar3 = *(int *)(param_1 + 0x90c);
    iVar9 = *(int *)(param_1 + 0x914);
    lVar17 = param_2;
    FUN_108b59810();
    iVar8 = (int)lVar17;
    puVar14 = (&PTR_DAT_110ab34c8)[*(char *)(param_1 + 0xb48)];
    uVar1 = *(uint *)(param_1 + 0x914);
    lVar17 = param_2 + 0x60;
    for (uVar13 = 0; uVar13 != (uVar1 & ((int)uVar1 >> 0x1f ^ 0xffffffffU)); uVar13 = uVar13 + 1) {
      cVar10 = *(char *)(param_1 + 0xb2c + uVar13);
      for (lVar15 = 0; lVar15 != 5; lVar15 = lVar15 + 1) {
        *(short *)(lVar17 + lVar15 * 2) = (short)(char)puVar14[lVar15 + (long)cVar10 * 5] << 7;
      }
      lVar17 = lVar17 + 10;
    }
    iVar12 = (int)*(short *)(&UNK_10df91dc6 + (long)*(char *)(param_1 + 0xb49) * 2);
  }
  else {
    _bzero(param_2,(long)*(int *)(param_1 + 0x914) << 2);
    puVar6 = (undefined1 *)((long)*(int *)(param_1 + 0x914) * 10);
    puVar4 = (undefined1 *)(param_2 + 0x60);
    _bzero();
    iVar12 = 0;
    *(undefined1 *)(param_1 + 0xb48) = 0;
  }
  *(int *)(param_2 + 0x88) = iVar12;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return puVar4;
  }
  ___stack_chk_fail();
  lStack_d8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if ((iVar3 == 0) && (*(int *)(puVar4 + (long)iVar8 * 4 + 0x970) == 0)) {
    puVar5 = puVar4;
    FUN_108b50394();
  }
  else {
    puVar5 = puVar4;
    FUN_108b50394();
    puVar5 = (undefined1 *)(ulong)((int)puVar5 + 2);
  }
  puVar4[0xb45] = (char)((ulong)puVar5 >> 1);
  iVar3 = (int)puVar5;
  puVar4[0xb46] = (byte)puVar5 & 1;
  if (iVar9 == 2) {
    FUN_108b50394();
  }
  else {
    FUN_108b50394();
    puVar4[0xb28] = (char)(iVar3 << 3);
    FUN_108b50394();
    puVar5 = (undefined1 *)(ulong)((uint)(byte)puVar4[0xb28] + iVar3);
  }
  puVar4[0xb28] = (char)puVar5;
  lVar17 = 1;
  puVar16 = puVar4 + 0xb29;
  while( true ) {
    cVar10 = (char)puVar5;
    if (*(int *)(puVar4 + 0x914) <= lVar17) break;
    puVar5 = puVar6;
    func_0x000108b503a0(puVar6,&UNK_10df90e10);
    *puVar16 = (char)puVar5;
    lVar17 = lVar17 + 1;
    puVar16 = puVar16 + 1;
  }
  FUN_108b50394();
  puVar4[0xb30] = cVar10;
  lVar17 = *(long *)(puVar4 + 0xb20);
  puVar5 = auStack_f8;
  pbVar7 = abStack_108;
  FUN_108b5759c(puVar5,pbVar7,lVar17,(int)cVar10);
  sVar11 = *(short *)(lVar17 + 2);
  if (*(int *)(puVar4 + 0x924) != (int)sVar11) {
    _abort();
    goto SUB_108b49e28;
  }
  for (lVar17 = 0; lVar17 < sVar11; lVar17 = lVar17 + 1) {
    FUN_108b50394();
    if ((int)puVar5 == 8) {
      puVar5 = puVar6;
      func_0x000108b503a0(puVar6,&UNK_10df91de6);
      puVar5 = (undefined1 *)(ulong)((int)puVar5 + 8);
    }
    else if ((int)puVar5 == 0) {
      puVar5 = puVar6;
      func_0x000108b503a0(puVar6,&UNK_10df91de6);
      puVar5 = (undefined1 *)(ulong)(uint)-(int)puVar5;
    }
    puVar4[lVar17 + 0xb31] = (char)puVar5 + -4;
    sVar11 = *(short *)(*(long *)(puVar4 + 0xb20) + 2);
  }
  if (*(int *)(puVar4 + 0x914) == 4) {
    FUN_108b50394();
  }
  else {
    puVar5 = (undefined1 *)0x4;
  }
  puVar4[0xb47] = (char)puVar5;
  cVar10 = puVar4[0xb45];
  if (cVar10 == '\x02') {
    if ((iVar9 == 2) && (*(int *)(puVar4 + 0x968) == 2)) {
      FUN_108b50394();
      if ((short)puVar5 < 1) goto LAB_108b5028c;
      sVar11 = (short)puVar5 + *(short *)(puVar4 + 0x96c) + -9;
    }
    else {
LAB_108b5028c:
      FUN_108b50394();
      *(short *)(puVar4 + 0xb42) = (short)(*(uint *)(puVar4 + 0x90c) >> 1) * (short)puVar5;
      FUN_108b50394();
      sVar11 = *(short *)(puVar4 + 0xb42) + (short)puVar5;
    }
    *(short *)(puVar4 + 0xb42) = sVar11;
    *(short *)(puVar4 + 0x96c) = sVar11;
    FUN_108b50394();
    puVar4[0xb44] = (char)puVar5;
    FUN_108b50394();
    puVar4[0xb48] = (char)puVar5;
    for (lVar17 = 0; lVar17 < *(int *)(puVar4 + 0x914); lVar17 = lVar17 + 1) {
      FUN_108b50394();
      puVar4[lVar17 + 0xb2c] = (char)puVar5;
    }
    if (iVar9 == 0) {
      FUN_108b50394();
    }
    else {
      puVar5 = (undefined1 *)0x0;
    }
    puVar4[0xb49] = (char)puVar5;
    cVar10 = puVar4[0xb45];
  }
  *(int *)(puVar4 + 0x968) = (int)cVar10;
  pbVar7 = &UNK_10df91dcf;
  FUN_108b50394();
  puVar4[0xb4a] = (char)puVar5;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_d8) {
    return puVar5;
  }
SUB_108b49e28:
  ___stack_chk_fail();
  puVar4 = (undefined1 *)0xffffffff;
  do {
    bVar2 = *pbVar7;
    puVar4 = (undefined1 *)(ulong)((int)puVar4 + 1);
    pbVar7 = pbVar7 + 1;
  } while (*(uint *)(puVar6 + 0x24) < (*(uint *)(puVar6 + 0x20) >> 8) * (uint)bVar2);
  func_0x000108b49fbc();
  return puVar4;
}



/* Entry: 108b5007c; end: 108b50393;  */

undefined1 * FUN_108b5007c(ulong param_1,ulong param_2,int param_3,int param_4,int param_5)

{
  byte bVar1;
  int iVar2;
  ulong uVar3;
  undefined1 *puVar4;
  byte *pbVar5;
  char cVar6;
  short sVar7;
  long lVar8;
  byte abStack_88 [16];
  undefined1 auStack_78 [32];
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if ((param_4 == 0) && (*(int *)(param_1 + (long)param_3 * 4 + 0x970) == 0)) {
    uVar3 = param_1;
    FUN_108b50394(param_1,&UNK_10df91db6);
  }
  else {
    uVar3 = param_1;
    FUN_108b50394(param_1,&UNK_10df91db2);
    uVar3 = (ulong)((int)uVar3 + 2);
  }
  *(char *)(param_1 + 0xb45) = (char)(uVar3 >> 1);
  iVar2 = (int)uVar3;
  *(byte *)(param_1 + 0xb46) = (byte)uVar3 & 1;
  if (param_5 == 2) {
    FUN_108b50394();
  }
  else {
    FUN_108b50394();
    *(char *)(param_1 + 0xb28) = (char)(iVar2 << 3);
    FUN_108b50394();
    uVar3 = (ulong)((uint)*(byte *)(param_1 + 0xb28) + iVar2);
  }
  *(char *)(param_1 + 0xb28) = (char)uVar3;
  lVar8 = 1;
  puVar4 = (undefined1 *)(param_1 + 0xb29);
  while( true ) {
    cVar6 = (char)uVar3;
    if (*(int *)(param_1 + 0x914) <= lVar8) break;
    uVar3 = param_2;
    func_0x000108b503a0(param_2,&UNK_10df90e10);
    *puVar4 = (char)uVar3;
    lVar8 = lVar8 + 1;
    puVar4 = puVar4 + 1;
  }
  FUN_108b50394();
  *(char *)(param_1 + 0xb30) = cVar6;
  lVar8 = *(long *)(param_1 + 0xb20);
  puVar4 = auStack_78;
  pbVar5 = abStack_88;
  FUN_108b5759c(puVar4,pbVar5,lVar8,(int)cVar6);
  sVar7 = *(short *)(lVar8 + 2);
  if (*(int *)(param_1 + 0x924) != (int)sVar7) {
    _abort();
    goto SUB_108b49e28;
  }
  for (lVar8 = 0; lVar8 < sVar7; lVar8 = lVar8 + 1) {
    FUN_108b50394();
    if ((int)puVar4 == 8) {
      uVar3 = param_2;
      func_0x000108b503a0(param_2,&UNK_10df91de6);
      puVar4 = (undefined1 *)(ulong)((int)uVar3 + 8);
    }
    else if ((int)puVar4 == 0) {
      uVar3 = param_2;
      func_0x000108b503a0(param_2,&UNK_10df91de6);
      puVar4 = (undefined1 *)(ulong)(uint)-(int)uVar3;
    }
    *(char *)(param_1 + 0xb31 + lVar8) = (char)puVar4 + -4;
    sVar7 = *(short *)(*(long *)(param_1 + 0xb20) + 2);
  }
  if (*(int *)(param_1 + 0x914) == 4) {
    FUN_108b50394();
  }
  else {
    puVar4 = (undefined1 *)0x4;
  }
  *(char *)(param_1 + 0xb47) = (char)puVar4;
  cVar6 = *(char *)(param_1 + 0xb45);
  if (cVar6 == '\x02') {
    if ((param_5 == 2) && (*(int *)(param_1 + 0x968) == 2)) {
      FUN_108b50394();
      if ((short)puVar4 < 1) goto LAB_108b5028c;
      sVar7 = (short)puVar4 + *(short *)(param_1 + 0x96c) + -9;
    }
    else {
LAB_108b5028c:
      FUN_108b50394();
      *(short *)(param_1 + 0xb42) = (short)(*(uint *)(param_1 + 0x90c) >> 1) * (short)puVar4;
      FUN_108b50394();
      sVar7 = *(short *)(param_1 + 0xb42) + (short)puVar4;
    }
    *(short *)(param_1 + 0xb42) = sVar7;
    *(short *)(param_1 + 0x96c) = sVar7;
    FUN_108b50394();
    *(char *)(param_1 + 0xb44) = (char)puVar4;
    FUN_108b50394();
    *(char *)(param_1 + 0xb48) = (char)puVar4;
    for (lVar8 = 0; lVar8 < *(int *)(param_1 + 0x914); lVar8 = lVar8 + 1) {
      FUN_108b50394();
      *(char *)(param_1 + 0xb2c + lVar8) = (char)puVar4;
    }
    if (param_5 == 0) {
      FUN_108b50394();
    }
    else {
      puVar4 = (undefined1 *)0x0;
    }
    *(char *)(param_1 + 0xb49) = (char)puVar4;
    cVar6 = *(char *)(param_1 + 0xb45);
  }
  *(int *)(param_1 + 0x968) = (int)cVar6;
  pbVar5 = &UNK_10df91dcf;
  FUN_108b50394();
  *(char *)(param_1 + 0xb4a) = (char)puVar4;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return puVar4;
  }
SUB_108b49e28:
  ___stack_chk_fail();
  puVar4 = (undefined1 *)0xffffffff;
  do {
    bVar1 = *pbVar5;
    puVar4 = (undefined1 *)(ulong)((int)puVar4 + 1);
    pbVar5 = pbVar5 + 1;
  } while (*(uint *)(param_2 + 0x24) < (*(uint *)(param_2 + 0x20) >> 8) * (uint)bVar1);
  func_0x000108b49fbc();
  return puVar4;
}



/* Entry: 108b50394; end: 108b503a7;  */

int FUN_108b50394(undefined8 param_1,byte *param_2)

{
  byte bVar1;
  int iVar2;
  long unaff_x20;
  
  iVar2 = -1;
  do {
    bVar1 = *param_2;
    iVar2 = iVar2 + 1;
    param_2 = param_2 + 1;
  } while (*(uint *)(unaff_x20 + 0x24) < (*(uint *)(unaff_x20 + 0x20) >> 8) * (uint)bVar1);
  func_0x000108b49fbc();
  return iVar2;
}



/* Entry: 108b503a8; end: 108b505b3;  */

ulong FUN_108b503a8(ulong param_1,byte *param_2,int param_3,undefined4 param_4,uint param_5)

{
  byte bVar1;
  ushort uVar2;
  int iVar3;
  ulong uVar4;
  byte *pbVar5;
  undefined *puVar6;
  uint uVar7;
  long lVar8;
  int iVar9;
  ulong uVar10;
  uint *puVar11;
  ulong uVar12;
  ulong uVar13;
  uint uVar14;
  int aiStack_110 [20];
  uint auStack_c0 [20];
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar7 = param_3 >> 1;
  pbVar5 = &UNK_10df9201b +
           (-(ulong)(uVar7 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar7 << 3) + (long)(int)uVar7;
  uVar13 = param_1;
  FUN_108b505b4();
  if ((param_5 & 0xf) == 0) {
    uVar7 = (int)param_5 >> 4;
  }
  else {
    if (param_5 != 0x78) goto SUB_108b49e28;
    uVar7 = 8;
  }
  uVar12 = (ulong)(uVar7 & ((int)uVar7 >> 0x1f ^ 0xffffffffU));
  for (uVar10 = 0; uVar10 != uVar12; uVar10 = uVar10 + 1) {
    aiStack_110[uVar10] = 0;
    iVar9 = 1;
    puVar6 = &UNK_10df91ec5 + (long)(int)uVar13 * 0x12;
    while( true ) {
      uVar4 = param_1;
      FUN_108b505b4(param_1,puVar6);
      if ((uint)uVar4 != 0x11) break;
      aiStack_110[uVar10] = iVar9;
      puVar6 = &UNK_10df91ec5;
      if (iVar9 == 10) {
        puVar6 = &UNK_10df91ec6;
      }
      puVar6 = puVar6 + 0xa2;
      iVar9 = iVar9 + 1;
    }
    auStack_c0[uVar10] = (uint)uVar4;
  }
  puVar11 = auStack_c0;
  for (lVar8 = 0; uVar12 * 0x10000 - lVar8 != 0; lVar8 = lVar8 + 0x10000) {
    pbVar5 = param_2 + (long)((int)lVar8 >> 0xc) * 2;
    if ((int)*puVar11 < 1) {
      pbVar5[8] = 0;
      pbVar5[9] = 0;
      pbVar5[10] = 0;
      pbVar5[0xb] = 0;
      pbVar5[0xc] = 0;
      pbVar5[0xd] = 0;
      pbVar5[0xe] = 0;
      pbVar5[0xf] = 0;
      pbVar5[0] = 0;
      pbVar5[1] = 0;
      pbVar5[2] = 0;
      pbVar5[3] = 0;
      pbVar5[4] = 0;
      pbVar5[5] = 0;
      pbVar5[6] = 0;
      pbVar5[7] = 0;
      pbVar5[0x18] = 0;
      pbVar5[0x19] = 0;
      pbVar5[0x1a] = 0;
      pbVar5[0x1b] = 0;
      pbVar5[0x1c] = 0;
      pbVar5[0x1d] = 0;
      pbVar5[0x1e] = 0;
      pbVar5[0x1f] = 0;
      pbVar5[0x10] = 0;
      pbVar5[0x11] = 0;
      pbVar5[0x12] = 0;
      pbVar5[0x13] = 0;
      pbVar5[0x14] = 0;
      pbVar5[0x15] = 0;
      pbVar5[0x16] = 0;
      pbVar5[0x17] = 0;
    }
    else {
      FUN_108b5624c(pbVar5,param_1);
    }
    puVar11 = puVar11 + 1;
  }
  for (uVar13 = 0; uVar13 != uVar12; uVar13 = uVar13 + 1) {
    iVar9 = aiStack_110[uVar13];
    if (0 < iVar9) {
      uVar7 = -((uint)uVar13 >> 0xf & 1) & 0xfff00000 | ((uint)uVar13 & 0xffff) << 4;
      for (lVar8 = 0; lVar8 != 0x10; lVar8 = lVar8 + 1) {
        uVar2 = *(ushort *)(param_2 + lVar8 * 2 + (long)(int)uVar7 * 2);
        uVar14 = (uint)uVar2;
        for (iVar3 = iVar9; iVar3 != 0; iVar3 = iVar3 + -1) {
          uVar10 = param_1;
          FUN_108b505b4(param_1,&UNK_10df91dad);
          uVar14 = (int)uVar10 + uVar14 * 2;
          uVar2 = (ushort)uVar14;
        }
        *(ushort *)(param_2 + lVar8 * 2 + (long)(int)uVar7 * 2) = uVar2;
      }
      auStack_c0[uVar13] = auStack_c0[uVar13] | iVar9 << 5;
    }
  }
  func_0x000108b4f244(param_1,param_2,param_5,param_3,param_4,auStack_c0);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return param_1;
  }
  ___stack_chk_fail();
  uVar13 = param_1;
  pbVar5 = param_2;
SUB_108b49e28:
  _abort();
  uVar10 = 0xffffffff;
  do {
    bVar1 = *pbVar5;
    uVar10 = (ulong)((int)uVar10 + 1);
    pbVar5 = pbVar5 + 1;
  } while (*(uint *)(uVar13 + 0x24) < (*(uint *)(uVar13 + 0x20) >> 8) * (uint)bVar1);
  func_0x000108b49fbc();
  return uVar10;
}



/* Entry: 108b505b4; end: 108b505bb;  */

int FUN_108b505b4(long param_1,byte *param_2)

{
  byte bVar1;
  int iVar2;
  
  iVar2 = -1;
  do {
    bVar1 = *param_2;
    iVar2 = iVar2 + 1;
    param_2 = param_2 + 1;
  } while (*(uint *)(param_1 + 0x24) < (*(uint *)(param_1 + 0x20) >> 8) * (uint)bVar1);
  func_0x000108b49fbc();
  return iVar2;
}



/* Entry: 108b505bc; end: 108b50787;  */

long FUN_108b505bc(long param_1,long param_2,long param_3)

{
  undefined *puVar1;
  int iVar2;
  bool bVar3;
  long lVar4;
  uint uVar5;
  bool bVar6;
  undefined *puVar7;
  undefined4 uVar8;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  long unaff_x22;
  
  uVar5 = (uint)param_2;
  lVar4 = param_1;
  if (((0x10 < uVar5) || (unaff_x20 = param_2, (1 << (ulong)(uVar5 & 0x1f) & 0x11100U) == 0)) ||
     (iVar2 = *(int *)(param_1 + 0x914), unaff_x19 = param_1, iVar2 != 2 && iVar2 != 4))
  goto LAB_108b50784;
  *(uint *)(param_1 + 0x91c) = uVar5 * 5;
  iVar2 = iVar2 * uVar5 * 5;
  if ((*(uint *)(param_1 + 0x90c) == uVar5) && (*(int *)(param_1 + 0x910) == (int)param_3)) {
    unaff_x21 = 0;
LAB_108b50668:
    if (iVar2 == *(int *)(param_1 + 0x918)) {
      return unaff_x21;
    }
    bVar6 = true;
  }
  else {
    lVar4 = param_1 + 0x990;
    FUN_108b5a3a8(lVar4,uVar5 * 1000,param_3,0);
    bVar6 = false;
    *(int *)(param_1 + 0x910) = (int)param_3;
    unaff_x21 = lVar4;
    if (*(uint *)(param_1 + 0x90c) == uVar5) goto LAB_108b50668;
  }
  bVar3 = *(int *)(param_1 + 0x914) != 4;
  puVar7 = &UNK_10df91eab;
  if (bVar3) {
    puVar7 = &UNK_10df91ec2;
  }
  puVar1 = &UNK_10df91e89;
  if (bVar3) {
    puVar1 = &UNK_10df91eb6;
  }
  if (uVar5 != 8) {
    puVar7 = puVar1;
  }
  *(undefined **)(param_1 + 0x958) = puVar7;
  if (!bVar6) {
    *(uint *)(param_1 + 0x920) = uVar5 * 0x14;
    if ((uVar5 | 4) == 0xc) {
      puVar7 = &UNK_110ab34f8;
      uVar8 = 10;
    }
    else {
      puVar7 = &UNK_110ab3540;
      uVar8 = 0x10;
    }
    *(undefined4 *)(param_1 + 0x924) = uVar8;
    *(undefined **)(param_1 + 0xb20) = puVar7;
    if (uVar5 == 0x10) {
      puVar7 = &UNK_10df91dde;
    }
    else if (uVar5 == 0xc) {
      puVar7 = &UNK_10df91dd8;
    }
    else {
      unaff_x22 = param_3;
      if (uVar5 != 8) {
LAB_108b50784:
        _abort();
        func_0x000108b510f0();
        for (; unaff_x21 != 0; unaff_x21 = unaff_x21 + -1) {
          lVar4 = unaff_x20;
          FUN_108b4f348(unaff_x20);
          unaff_x20 = unaff_x20 + unaff_x22;
        }
        *(undefined4 *)(unaff_x19 + 0x2258) = 0;
        *(undefined8 *)(unaff_x19 + 0x2250) = 0;
        *(undefined4 *)(unaff_x19 + 0x2264) = 0;
        return lVar4;
      }
      puVar7 = &UNK_10df91dcf;
    }
    *(undefined **)(param_1 + 0x950) = puVar7;
    *(undefined4 *)(param_1 + 0x948) = 1;
    *(undefined4 *)(param_1 + 0x904) = 100;
    *(undefined1 *)(param_1 + 0x908) = 10;
    *(undefined4 *)(param_1 + 0x10bc) = 0;
    _bzero(param_1 + 0x544,0x3c0);
    *(undefined8 *)(param_1 + 0x52c) = 0;
    *(undefined8 *)(param_1 + 0x524) = 0;
    *(undefined8 *)(param_1 + 0x53c) = 0;
    *(undefined8 *)(param_1 + 0x534) = 0;
    *(undefined8 *)(param_1 + 0x50c) = 0;
    *(undefined8 *)(param_1 + 0x504) = 0;
    *(undefined8 *)(param_1 + 0x51c) = 0;
    *(undefined8 *)(param_1 + 0x514) = 0;
  }
  *(uint *)(param_1 + 0x90c) = uVar5;
  *(int *)(param_1 + 0x918) = iVar2;
  return unaff_x21;
}



/* Entry: 108b50788; end: 108b50807;  */

void FUN_108b50788(void)

{
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  long unaff_x22;
  
  func_0x000108b510f0();
  for (; unaff_x21 != 0; unaff_x21 = unaff_x21 + -1) {
    FUN_108b4f348(unaff_x20);
    unaff_x20 = unaff_x20 + unaff_x22;
  }
  *(undefined4 *)(unaff_x19 + 0x2258) = 0;
  *(undefined8 *)(unaff_x19 + 0x2250) = 0;
  *(undefined4 *)(unaff_x19 + 0x2264) = 0;
  return;
}



/* Entry: 108b50808; end: 108b510e3;  */

/* WARNING: Possible PIC construction at 0x000108b50b80: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000108b50c2c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000108b50c58: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000108b50c30) */
/* WARNING: Removing unreachable block (ram,0x000108b50b84) */
/* WARNING: Removing unreachable block (ram,0x000108b50ba4) */
/* WARNING: Removing unreachable block (ram,0x000108b50c5c) */
/* WARNING: Removing unreachable block (ram,0x000108b50c40) */
/* WARNING: Removing unreachable block (ram,0x000108b50c6c) */

ulong FUN_108b50808(ulong param_1,int *param_2,int param_3,int param_4,ulong param_5,float *param_6,
                   uint *param_7,undefined4 param_8)

{
  undefined1 *puVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  short *psVar5;
  float *pfVar6;
  float *pfVar7;
  float *pfVar8;
  undefined8 *puVar9;
  int *piVar10;
  bool bVar11;
  long lVar12;
  undefined4 *puVar13;
  int iVar14;
  undefined4 uVar15;
  ulong uVar16;
  ulong extraout_x8;
  ulong extraout_x8_00;
  ulong extraout_x8_01;
  ulong extraout_x8_02;
  undefined4 uVar17;
  ulong uVar18;
  long extraout_x12;
  long extraout_x12_00;
  long extraout_x13;
  ulong unaff_x20;
  undefined4 *unaff_x21;
  int *unaff_x22;
  ulong unaff_x23;
  undefined4 *puVar19;
  undefined1 **unaff_x24;
  long lVar20;
  float *pfVar21;
  long lVar22;
  short *psVar23;
  ulong unaff_x27;
  ulong uVar24;
  undefined8 uVar25;
  undefined8 uStack_340;
  int iStack_334;
  undefined4 *puStack_330;
  uint uStack_324;
  float *pfStack_320;
  undefined4 uStack_318;
  int iStack_314;
  uint *puStack_310;
  ulong uStack_308;
  int iStack_300;
  int iStack_2fc;
  undefined1 *apuStack_2f8 [80];
  int aiStack_78 [2];
  long lStack_70;
  
  puVar9 = &uStack_340;
  psVar23 = (short *)&uStack_340;
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  iStack_2fc = 0;
  aiStack_78[0] = 0;
  aiStack_78[1] = 0;
  uVar3 = param_2[1];
  uVar16 = (ulong)uVar3;
  pfStack_320 = param_6;
  uStack_318 = param_8;
  puStack_310 = param_7;
  if (uVar3 - 1 < 2) {
    if (param_4 != 0) {
      puVar19 = (undefined4 *)(param_1 + 0x960);
      for (uVar18 = uVar16; uVar18 != 0; uVar18 = uVar18 - 1) {
        *puVar19 = 0;
        puVar19 = puVar19 + 0x44a;
      }
    }
    if (*(int *)(param_1 + 0x2260) < (int)uVar3) {
      unaff_x23 = param_1 + 0x1128;
      func_0x000108b4f3a8();
      uVar16 = (ulong)(uint)param_2[1];
    }
    else {
      unaff_x23 = 0;
    }
    if (((int)uVar16 == 1) && (*(int *)(param_1 + 0x2260) == 2)) {
      uStack_324 = (uint)(param_2[3] == *(int *)(param_1 + 0x90c) * 1000);
    }
    else {
      uStack_324 = 0;
    }
    uStack_308 = param_1;
    unaff_x27 = param_5;
    if (*(int *)(param_1 + 0x960) == 0) {
      unaff_x21 = (undefined4 *)0x1;
      unaff_x24 = (undefined1 **)0x8880;
      for (unaff_x20 = 0; (long)unaff_x20 < (long)(int)uVar16; unaff_x20 = unaff_x20 + 1) {
        iVar14 = param_2[4];
        unaff_x22 = param_2;
        if (iVar14 == 0 || iVar14 == 10) {
          uVar15 = 2;
LAB_108b5094c:
          uVar17 = 1;
        }
        else if (iVar14 == 0x3c) {
          uVar15 = 4;
          uVar17 = 3;
        }
        else {
          if (iVar14 != 0x28) {
            if (iVar14 == 0x14) {
              uVar15 = 4;
              goto LAB_108b5094c;
            }
            goto LAB_108b510dc;
          }
          uVar15 = 4;
          uVar17 = 2;
        }
        *(undefined4 *)(param_1 + 0x964) = uVar17;
        *(undefined4 *)(param_1 + 0x914) = uVar15;
        uVar3 = param_2[3] >> 10;
        if (0xf < uVar3 || (1 << (ulong)(uVar3 & 0x1f) & 0x8880U) == 0) goto LAB_108b510dc;
        uVar16 = param_1;
        FUN_108b505bc(param_1,uVar3 + 1,param_2[2]);
        unaff_x23 = (ulong)(uint)((int)uVar16 + (int)unaff_x23);
        uVar16 = (ulong)(uint)param_2[1];
        param_1 = param_1 + 0x1128;
      }
    }
    uVar18 = uStack_308;
    iVar14 = *param_2;
    if (iVar14 == 2) {
      if ((int)uVar16 == 2) {
        if ((*(int *)(uStack_308 + 0x225c) == 1) || (*(int *)(uStack_308 + 0x2260) == 1)) {
          *(undefined4 *)(uStack_308 + 0x2250) = 0;
          *(undefined4 *)(uStack_308 + 0x2258) = 0;
          _memcpy(uStack_308 + 0x1ab8,uStack_308 + 0x990,400);
          iVar14 = *param_2;
          uVar16 = (ulong)(uint)param_2[1];
          goto LAB_108b50a0c;
        }
        uVar16 = 2;
      }
      iVar14 = 2;
    }
LAB_108b50a0c:
    *(int *)(uVar18 + 0x225c) = iVar14;
    iVar14 = (int)uVar16;
    *(int *)(uVar18 + 0x2260) = iVar14;
    if (param_2[2] - 0xbb81U < 0xffff63bf) {
      unaff_x23 = 0xffffff38;
    }
    else {
      puVar19 = (undefined4 *)(uVar18 + 0x1a30);
      iStack_314 = param_3;
      if ((param_3 != 1) && (*(int *)(uVar18 + 0x960) == 0)) {
        uVar24 = uVar18;
        puStack_330 = puVar19;
        while (0 < (int)uVar16) {
          lVar20 = 0;
          while( true ) {
            iVar14 = *(int *)(uVar24 + 0x964);
            uVar16 = param_5;
            FUN_108b49de4(param_5,1);
            if (iVar14 <= lVar20) break;
            *(int *)(uVar18 + 0x970 + lVar20 * 4) = (int)uVar16;
            lVar20 = lVar20 + 1;
          }
          *(int *)(uVar24 + 0x97c) = (int)uVar16;
          func_0x000108b51120();
          uVar16 = extraout_x8;
          uVar24 = (long)iVar14;
        }
        unaff_x24 = (undefined1 **)0x1128;
        while (iVar14 = (int)uVar16, 0 < iVar14) {
          *(undefined4 *)(uVar24 + 0x988) = 0;
          *(undefined8 *)(uVar24 + 0x980) = 0;
          if (*(int *)(uVar24 + 0x97c) != 0) {
            if (*(int *)(uVar24 + 0x964) == 1) {
              *(undefined4 *)(uVar24 + 0x980) = 1;
            }
            else {
              uVar18 = param_5;
              func_0x000108b49e28(param_5,(&PTR_DAT_110ab3578)[*(int *)(uVar24 + 0x964)],8);
              uVar3 = *(uint *)(uVar24 + 0x964);
              for (uVar16 = 0; (uVar3 & ((int)uVar3 >> 0x1f ^ 0xffffffffU)) != uVar16;
                  uVar16 = uVar16 + 1) {
                *(uint *)(uVar24 + 0x980 + uVar16 * 4) =
                     (int)uVar18 + 1U >> (ulong)((uint)uVar16 & 0x1f) & 1;
              }
            }
          }
          func_0x000108b51120();
          uVar16 = extraout_x8_00;
        }
        unaff_x20 = 0;
        puVar19 = puStack_330;
        uVar18 = uVar24;
        if (iStack_314 == 0) {
          unaff_x21 = (undefined4 *)0x980;
          for (lVar20 = 0; iVar14 = (int)uVar16, unaff_x20 = uStack_308, puVar19 = puStack_330,
              uVar18 = uStack_308, lVar20 < *(int *)(uStack_308 + 0x964); lVar20 = lVar20 + 1) {
            for (unaff_x24 = (undefined1 **)0x0; (long)unaff_x24 < (long)(int)uVar16;
                unaff_x24 = (undefined1 **)((long)unaff_x24 + 1)) {
              if (*(int *)(unaff_x20 + (long)unaff_x21) != 0) {
                if (((int)uVar16 == 2) && (unaff_x24 == (undefined1 **)0x0)) {
                  uVar25 = 0x108b50b84;
                  puVar9 = &uStack_340;
                  goto FUN_108b510e4;
                }
                if ((lVar20 == 0) || (*(int *)((long)unaff_x21 + (unaff_x20 - 4)) == 0)) {
                  uVar25 = 0;
                }
                else {
                  uVar25 = 2;
                }
                FUN_108b5007c(unaff_x20,param_5,lVar20,1,uVar25);
                FUN_108b503a8(param_5,apuStack_2f8,(long)*(char *)(unaff_x20 + 0xb45),
                              (long)*(char *)(unaff_x20 + 0xb46),*(undefined4 *)(unaff_x20 + 0x918))
                ;
                uVar16 = (ulong)(uint)param_2[1];
              }
              unaff_x20 = unaff_x20 + 0x1128;
            }
            unaff_x21 = unaff_x21 + 1;
          }
        }
      }
      unaff_x21 = puVar19;
      iVar2 = iStack_314;
      if (iVar14 == 2) {
        if (iStack_314 == 0) {
          uVar25 = 0x108b50c5c;
          goto FUN_108b510e4;
        }
        if ((iStack_314 == 2) &&
           (*(int *)(uVar18 + (long)*(int *)(uVar18 + 0x960) * 4 + 0x980) == 1)) {
          uVar25 = 0x108b50c30;
          puVar9 = &uStack_340;
          goto FUN_108b510e4;
        }
        aiStack_78[1] = (int)*(short *)((long)unaff_x21 + 0x822);
        aiStack_78[0] = (int)*(short *)(unaff_x21 + 0x208);
      }
      iVar14 = param_2[1];
      bVar11 = iStack_2fc == 0;
      iStack_334 = iStack_2fc;
      if (iVar14 == 2 && iStack_2fc == 0) {
        if (*(int *)(uVar18 + 0x2264) == 1) {
          _bzero(uVar18 + 0x166c,0x3c0);
          *(undefined8 *)(uVar18 + 0x1654) = 0;
          *(undefined8 *)(uVar18 + 0x164c) = 0;
          *(undefined8 *)(uVar18 + 0x1664) = 0;
          *(undefined8 *)(uVar18 + 0x165c) = 0;
          *(undefined8 *)(uVar18 + 0x1634) = 0;
          *(undefined8 *)(uVar18 + 0x162c) = 0;
          *(undefined8 *)(uVar18 + 0x1644) = 0;
          *(undefined8 *)(uVar18 + 0x163c) = 0;
          *(undefined4 *)(uVar18 + 0x1a2c) = 100;
          *(undefined1 *)unaff_x21 = 10;
          *(undefined4 *)(uVar18 + 0x21e4) = 0;
          *(undefined4 *)(uVar18 + 0x1a70) = 1;
          iVar14 = param_2[1];
        }
        else {
          iVar14 = 2;
        }
      }
      (*(code *)PTR____chkstk_darwin_11034bd40)(iVar14);
      puVar19 = (undefined4 *)((long)&uStack_340 - extraout_x13);
      apuStack_2f8[1] = (undefined1 *)((long)puVar19 + extraout_x12 * 2 + 4);
      puStack_330 = puVar19;
      apuStack_2f8[0] = (undefined1 *)puVar19;
      uStack_340 = apuStack_2f8[1];
      if (iVar2 != 0) {
        if (*(int *)(uVar18 + 0x2264) == 0) {
          bVar11 = true;
        }
        else if (iVar2 == 2 && (int)extraout_x8_01 == 2) {
          bVar11 = *(int *)(uVar18 + (long)*(int *)(uVar18 + 0x1a88) * 4 + 0x1aa8) == 1;
        }
        else {
          bVar11 = false;
        }
      }
      lVar20 = uVar18 + 0x980;
      *(int *)(uVar18 + 0x1120) = param_2[6];
      iVar14 = -1;
      uVar16 = extraout_x8_01;
      for (lVar22 = 0; unaff_x27 = uStack_308, puVar13 = puStack_330, lVar22 < (int)uVar16;
          lVar22 = lVar22 + 1) {
        if ((bool)(lVar22 == 0 | bVar11)) {
          if (iVar14 + *(int *)(uStack_308 + 0x960) + 1 < 1) {
            uVar15 = 0;
          }
          else if (iStack_314 == 2) {
            uVar15 = 0;
            if (*(int *)(lVar20 + (ulong)(uint)(*(int *)(uStack_308 + 0x960) + iVar14) * 4) != 0) {
              uVar15 = 2;
            }
          }
          else if ((lVar22 == 0) || (*(int *)(uStack_308 + 0x2264) == 0)) {
            uVar15 = 2;
          }
          else {
            uVar15 = 1;
          }
          lVar12 = lVar20 + -0x980;
          FUN_108b4fc24(lVar12,param_5,apuStack_2f8[lVar22] + 4,&iStack_300,iStack_314,uVar15,
                        uStack_318);
          unaff_x23 = (ulong)(uint)((int)lVar12 + (int)unaff_x23);
        }
        else {
          _bzero(apuStack_2f8[lVar22] + 4,(long)iStack_300 << 1);
        }
        *(int *)(lVar20 + -0x20) = *(int *)(lVar20 + -0x20) + 1;
        uVar16 = (ulong)(uint)param_2[1];
        iVar14 = iVar14 + -1;
        lVar20 = lVar20 + 0x1128;
      }
      if ((int)uVar16 == 2 && *param_2 == 2) {
        FUN_108b5848c(uStack_308 + 0x2250,puStack_330,uStack_340,aiStack_78,
                      *(undefined4 *)(uStack_308 + 0x90c),iStack_300);
      }
      else {
        *puStack_330 = *(undefined4 *)(uStack_308 + 0x2254);
        *(undefined4 *)(unaff_x27 + 0x2254) = *(undefined4 *)((long)puVar13 + (long)iStack_300 * 2);
      }
      pfVar6 = pfStack_320;
      iVar14 = *(short *)(unaff_x27 + 0x90c) * 1000;
      uVar3 = 0;
      if (iVar14 != 0) {
        uVar3 = (param_2[2] * iStack_300) / iVar14;
      }
      *puStack_310 = uVar3;
      (*(code *)PTR____chkstk_darwin_11034bd40)();
      psVar23 = (short *)((long)puVar19 - extraout_x12_00);
      unaff_x20 = 0;
      iVar14 = *param_2;
      unaff_x21 = (undefined4 *)0x1128;
      unaff_x24 = apuStack_2f8;
      uVar16 = extraout_x8_02;
      pfVar21 = pfVar6;
      while( true ) {
        iVar4 = param_2[1];
        iVar2 = iVar14;
        if (iVar4 <= iVar14) {
          iVar2 = iVar4;
        }
        if ((long)iVar2 <= (long)unaff_x20) break;
        lVar20 = unaff_x27 + unaff_x20 * 0x1128 + 0x990;
        FUN_108b5a6b0(lVar20,psVar23,unaff_x24[unaff_x20] + 2,iStack_300);
        iVar14 = *param_2;
        uVar3 = *puStack_310;
        uVar16 = (ulong)uVar3;
        uVar18 = (ulong)(uVar3 & ((int)uVar3 >> 0x1f ^ 0xffffffffU));
        psVar5 = psVar23;
        pfVar7 = pfVar6;
        pfVar8 = pfVar21;
        if (iVar14 == 2) {
          for (; uVar18 != 0; uVar18 = uVar18 - 1) {
            *pfVar8 = (float)(int)*psVar5 / 32768.0;
            psVar5 = psVar5 + 1;
            pfVar8 = pfVar8 + 2;
          }
        }
        else {
          for (; uVar18 != 0; uVar18 = uVar18 - 1) {
            *pfVar7 = (float)(int)*psVar5 / 32768.0;
            psVar5 = psVar5 + 1;
            pfVar7 = pfVar7 + 1;
          }
        }
        unaff_x23 = (ulong)(uint)((int)lVar20 + (int)unaff_x23);
        unaff_x20 = unaff_x20 + 1;
        pfVar21 = pfVar21 + 1;
      }
      if (iVar14 == 2 && iVar4 == 1) {
        if ((uStack_324 & 1) == 0) {
          pfVar6 = pfVar6 + 1;
          for (uVar16 = (ulong)((uint)uVar16 & ((int)(uint)uVar16 >> 0x1f ^ 0xffffffffU));
              uVar16 != 0; uVar16 = uVar16 - 1) {
            *pfVar6 = pfVar6[-1];
            pfVar6 = pfVar6 + 2;
          }
        }
        else {
          lVar20 = unaff_x27 + 0x1ab8;
          FUN_108b5a6b0(lVar20,psVar23,(undefined1 *)((long)puStack_330 + 2),iStack_300);
          psVar5 = psVar23;
          pfVar6 = pfVar6 + 1;
          for (uVar16 = (ulong)(*puStack_310 & ((int)*puStack_310 >> 0x1f ^ 0xffffffffU));
              uVar16 != 0; uVar16 = uVar16 - 1) {
            *pfVar6 = (float)(int)*psVar5 / 32768.0;
            psVar5 = psVar5 + 1;
            pfVar6 = pfVar6 + 2;
          }
          unaff_x23 = (ulong)(uint)((int)lVar20 + (int)unaff_x23);
        }
      }
      if (*(int *)(unaff_x27 + 0x10bc) == 2) {
        iVar14 = *(int *)(&UNK_10df90de0 + (long)(*(int *)(unaff_x27 + 0x90c) + -8 >> 2) * 4) *
                 *(int *)(unaff_x27 + 0x904);
      }
      else {
        iVar14 = 0;
      }
      param_2[5] = iVar14;
      if (iStack_314 == 1) {
        puVar1 = (undefined1 *)(unaff_x27 + 0x908);
        for (uVar16 = (ulong)(*(uint *)(unaff_x27 + 0x2260) &
                             ((int)*(uint *)(unaff_x27 + 0x2260) >> 0x1f ^ 0xffffffffU));
            uVar16 != 0; uVar16 = uVar16 - 1) {
          *puVar1 = 10;
          puVar1 = puVar1 + 0x1128;
        }
      }
      else {
        *(int *)(unaff_x27 + 0x2264) = iStack_334;
      }
    }
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
      return unaff_x23;
    }
  }
  else {
LAB_108b510dc:
    _abort();
    psVar23 = (short *)&uStack_340;
    param_2 = unaff_x22;
  }
  uVar25 = 0x108b510e4;
  ___stack_chk_fail();
  puVar9 = (undefined8 *)psVar23;
  param_5 = unaff_x27;
FUN_108b510e4:
  piVar10 = (int *)((long)puVar9 + -0x60);
  *(undefined1 ***)((long)puVar9 + -0x40) = unaff_x24;
  *(ulong *)((long)puVar9 + -0x38) = unaff_x23;
  *(int **)((long)puVar9 + -0x30) = param_2;
  *(undefined4 **)((long)puVar9 + -0x28) = unaff_x21;
  *(ulong *)((long)puVar9 + -0x20) = unaff_x20;
  *(undefined8 **)((long)puVar9 + -0x18) = &uStack_340;
  *(undefined1 **)((long)puVar9 + -0x10) = &stack0xfffffffffffffff0;
  *(undefined8 *)((long)puVar9 + -8) = uVar25;
  *(undefined8 *)((long)puVar9 + -0x48) = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  uVar16 = param_5;
  FUN_108b5b7d0();
  *(int *)((long)puVar9 + -0x58) = (int)uVar16 / 5;
  *(int *)((long)puVar9 + -0x4c) = (int)uVar16 % 5;
  lVar20 = 2;
  puVar19 = (undefined4 *)((long)puVar9 + -0x5c);
  do {
    uVar16 = param_5;
    FUN_108b5b7d0(param_5,&UNK_10df91dcc);
    puVar19[-1] = (int)uVar16;
    uVar16 = param_5;
    puVar13 = (undefined4 *)&UNK_10df91dd3;
    FUN_108b5b7d0();
    *puVar19 = (int)uVar16;
    lVar20 = lVar20 + -1;
    puVar19 = puVar19 + 3;
  } while (lVar20 != 0);
  for (lVar20 = 0; lVar20 != 8; lVar20 = lVar20 + 4) {
    lVar22 = (long)*piVar10 + (long)piVar10[2] * 3;
    *piVar10 = (int)lVar22;
    lVar22 = lVar22 * 2;
    *(int *)((long)aiStack_78 + lVar20) =
         (int)*(short *)(&UNK_10df91d68 + lVar22) +
         (((int)*(short *)(&UNK_10df91d6a + lVar22) - (int)*(short *)(&UNK_10df91d68 + lVar22)) *
          0x199a >> 0x10) * (int)(short)((short)piVar10[1] << 1 | 1);
    piVar10 = piVar10 + 3;
  }
  aiStack_78[0] = aiStack_78[0] - aiStack_78[1];
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != *(long *)((long)puVar9 + -0x48)) {
    ___stack_chk_fail();
    *(ulong *)((long)puVar9 + -0x80) = param_5;
    *(int **)((long)puVar9 + -0x78) = aiStack_78;
    *(undefined1 **)((long)puVar9 + -0x70) = (undefined1 *)((long)puVar9 + -0x10);
    *(code **)((long)puVar9 + -0x68) = FUN_108b5b7a4;
    FUN_108b5b7d0();
    *puVar13 = (int)uVar16;
    return uVar16;
  }
  return uVar16;
}



/* Entry: 108b510e4; end: 108b51133;  */

void FUN_108b510e4(void)

{
  long lVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  int *piVar5;
  int *piVar6;
  long lVar7;
  int unaff_w27;
  long unaff_x29;
  int iStack_60;
  int iStack_5c;
  int iStack_58;
  int iStack_4c;
  long lStack_48;
  
  piVar3 = (int *)(unaff_x29 + -0x68);
  piVar5 = &iStack_60;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  iVar2 = unaff_w27;
  FUN_108b5b7d0();
  iStack_58 = iVar2 / 5;
  iStack_4c = iVar2 % 5;
  lVar7 = 2;
  piVar6 = &iStack_5c;
  do {
    iVar2 = unaff_w27;
    FUN_108b5b7d0();
    piVar6[-1] = iVar2;
    piVar4 = (int *)&UNK_10df91dd3;
    iVar2 = unaff_w27;
    FUN_108b5b7d0();
    *piVar6 = iVar2;
    lVar7 = lVar7 + -1;
    piVar6 = piVar6 + 3;
  } while (lVar7 != 0);
  for (lVar7 = 0; lVar7 != 8; lVar7 = lVar7 + 4) {
    lVar1 = (long)*piVar5 + (long)piVar5[2] * 3;
    *piVar5 = (int)lVar1;
    lVar1 = lVar1 * 2;
    *(int *)((long)piVar3 + lVar7) =
         (int)*(short *)(&UNK_10df91d68 + lVar1) +
         (((int)*(short *)(&UNK_10df91d6a + lVar1) - (int)*(short *)(&UNK_10df91d68 + lVar1)) *
          0x199a >> 0x10) * (int)(short)((short)piVar5[1] << 1 | 1);
    piVar5 = piVar5 + 3;
  }
  *piVar3 = *piVar3 - *(int *)(unaff_x29 + -100);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_48) {
    ___stack_chk_fail();
    FUN_108b5b7d0();
    *piVar4 = iVar2;
    return;
  }
  return;
}



/* Entry: 108b51134; end: 108b5123b;  */

undefined8 FUN_108b51134(long param_1,uint param_2,undefined8 param_3,undefined8 *param_4)

{
  long lVar1;
  undefined4 uVar2;
  long lVar3;
  int iVar4;
  uint uVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  uVar7 = 0x2820;
  if (param_2 != 1) {
    uVar7 = 0x4fe8;
  }
  _bzero(param_1,uVar7);
  lVar6 = (ulong)(param_2 & ((int)param_2 >> 0x1f ^ 0xffffffffU)) + 1;
  lVar3 = param_1 + 0x58;
  do {
    lVar6 = lVar6 + -1;
    if (lVar6 == 0) goto LAB_108b511a0;
    lVar1 = lVar3 + 0x27c8;
    FUN_108b5886c(lVar3,param_3);
    iVar4 = (int)lVar3;
    lVar3 = lVar1;
  } while (iVar4 == 0);
  _abort();
LAB_108b511a0:
  *(undefined8 *)(param_1 + 0x40) = 0x100000001;
  *param_4 = 0x100000001;
  uVar2 = *(undefined4 *)(param_1 + 0x122c);
  *(undefined4 *)(param_4 + 1) = *(undefined4 *)(param_1 + 0x1224);
  *(undefined4 *)((long)param_4 + 0xc) = uVar2;
  uVar7 = *(undefined8 *)(param_1 + 0x1230);
  uVar8 = NEON_rev64(*(undefined8 *)(param_1 + 0x1258),4);
  param_4[3] = uVar8;
  param_4[2] = uVar7;
  uVar2 = *(undefined4 *)(param_1 + 0x1268);
  *(undefined4 *)(param_4 + 4) = *(undefined4 *)(param_1 + 0x1260);
  *(undefined4 *)((long)param_4 + 0x24) = uVar2;
  *(undefined4 *)(param_4 + 5) = *(undefined4 *)(param_1 + 0x1894);
  uVar2 = *(undefined4 *)(param_1 + 0x129c);
  *(undefined4 *)((long)param_4 + 0x34) = *(undefined4 *)(param_1 + 0x1888);
  *(undefined4 *)(param_4 + 7) = uVar2;
  iVar4 = *(int *)(param_1 + 0x1238);
  uVar2 = *(undefined4 *)(param_1 + 0x1210);
  *(int *)((long)param_4 + 0x4c) = (short)iVar4 * 1000;
  *(undefined4 *)(param_4 + 10) = uVar2;
  if (iVar4 == 0x10) {
    uVar5 = (uint)(*(int *)(param_1 + 0x74) == 0);
  }
  else {
    uVar5 = 0;
  }
  *(uint *)((long)param_4 + 0x54) = uVar5;
  return 0;
}



/* Entry: 108b5123c; end: 108b52237;  */

/* WARNING: Possible PIC construction at 0x000108b51768: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000108b51928: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000108b517ec: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000108b51798: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000108b517f0) */
/* WARNING: Removing unreachable block (ram,0x000108b5192c) */
/* WARNING: Removing unreachable block (ram,0x000108b5176c) */
/* WARNING: Removing unreachable block (ram,0x000108b5179c) */
/* WARNING: Removing unreachable block (ram,0x000108b51924) */

float * FUN_108b5123c(undefined8 param_1,undefined4 *param_2,uint *param_3,float *param_4,
                     uint param_5,long param_6,int *param_7,int param_8,undefined4 param_9)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  char cVar5;
  uint uVar6;
  undefined8 **ppuVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  undefined1 uVar11;
  uint *puVar12;
  undefined4 *puVar13;
  float *pfVar14;
  uint uVar15;
  float *pfVar16;
  undefined8 uVar17;
  int extraout_w8;
  int extraout_w8_00;
  ulong uVar18;
  ulong extraout_x8;
  long lVar19;
  long extraout_x8_00;
  undefined8 **ppuVar20;
  int iVar21;
  int iVar22;
  long lVar23;
  undefined8 *puVar24;
  int iVar25;
  char *pcVar26;
  ulong uVar27;
  char *pcVar28;
  uint *unaff_x19;
  uint uVar29;
  long lVar30;
  undefined4 *puVar31;
  uint uVar32;
  long lVar33;
  uint uVar34;
  ulong unaff_x23;
  long lVar35;
  long unaff_x24;
  undefined4 *unaff_x25;
  uint unaff_w26;
  long lVar36;
  float *pfVar37;
  undefined4 *unaff_x28;
  float fVar38;
  float fVar39;
  float unaff_s8;
  float unaff_s9;
  float fVar40;
  undefined4 unaff_s10;
  undefined4 uVar41;
  undefined8 *puStack_180;
  undefined8 *puStack_178;
  int *piStack_170;
  uint uStack_168;
  uint uStack_164;
  undefined1 *puStack_160;
  int iStack_154;
  char *pcStack_150;
  undefined4 *puStack_148;
  undefined4 uStack_140;
  int iStack_13c;
  undefined8 *puStack_138;
  undefined4 *puStack_130;
  int iStack_128;
  undefined4 uStack_124;
  undefined4 *puStack_120;
  uint uStack_114;
  uint uStack_110;
  uint uStack_10c;
  float *pfStack_108;
  undefined4 *puStack_100;
  undefined4 *puStack_f8;
  int iStack_f0;
  uint uStack_ec;
  undefined4 *puStack_e8;
  long lStack_e0;
  uint uStack_d8;
  uint uStack_d4;
  int *piStack_d0;
  int iStack_c8;
  int iStack_c4;
  undefined1 *puStack_c0;
  undefined4 *puStack_b8;
  undefined4 *puStack_b0;
  ushort uStack_a2;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  long lStack_90;
  
  ppuVar7 = &puStack_180;
  lStack_90 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar29 = *param_3;
  ppuVar20 = &puStack_180;
  pfVar16 = param_4;
  uStack_124 = param_9;
  piStack_d0 = param_7;
  fVar39 = unaff_s8;
  fVar40 = unaff_s9;
  uVar41 = unaff_s10;
  if (((int)param_3[1] <= (int)uVar29) &&
     (ppuVar20 = &puStack_180, unaff_x28 = param_2, (int)param_2[0x11] <= (int)uVar29)) {
    puStack_160 = (undefined1 *)((long)param_2 + 0x39dd);
    pcStack_150 = (char *)(param_2 + 0x4b6);
    uVar18 = (ulong)(uVar29 & ((int)uVar29 >> 0x1f ^ 0xffffffffU));
    if (param_3[0x12] != 0) {
      puVar13 = param_2 + 0x4a4;
      for (uVar27 = uVar18; uVar27 != 0; uVar27 = uVar27 - 1) {
        *puVar13 = 1;
        puVar13 = puVar13 + 0x9f2;
      }
    }
    lVar23 = 0x16dc;
    for (; uVar18 != 0; uVar18 = uVar18 - 1) {
      *(undefined4 *)((long)param_2 + lVar23) = 0;
      lVar23 = lVar23 + 0x27c8;
    }
    puVar12 = param_3;
    FUN_108b58690();
    ppuVar20 = &puStack_180;
    unaff_x19 = param_3;
    unaff_x24 = param_6;
    if ((int)puVar12 == 0) {
      pfVar16 = (float *)0x0;
      param_3[0x17] = 0;
      if ((int)param_2[0x11] < (int)param_3[1]) {
        pfVar16 = (float *)(param_2 + 0xa08);
        FUN_108b5886c(pfVar16,param_2[0x513]);
        *param_2 = 0;
        param_1 = 0;
        *(undefined8 *)(param_2 + 4) = 1;
        *(undefined8 *)(param_2 + 2) = 0;
        *(undefined8 *)(param_2 + 6) = 0x400000000001;
        if (param_2[0x10] == 2) {
          _memcpy(param_2 + 0xfb0,param_2 + 0x5be,400);
          *(undefined8 *)(param_2 + 0xa08) = *(undefined8 *)(param_2 + 0x16);
        }
      }
      uVar29 = param_3[6];
      uVar34 = param_3[1];
      uVar18 = (ulong)uVar34;
      if (uVar29 == param_2[0x497]) {
        unaff_x25 = (undefined4 *)(ulong)(param_2[0x11] != uVar34);
      }
      else {
        unaff_x25 = (undefined4 *)0x1;
      }
      param_2[0x10] = *param_3;
      param_2[0x11] = uVar34;
      uVar34 = param_3[2];
      unaff_w26 = 0;
      if (uVar34 != 0) {
        unaff_w26 = (int)(param_5 * 100) / (int)uVar34;
      }
      uVar32 = unaff_w26;
      if ((int)unaff_w26 < 3) {
        uVar32 = 2;
      }
      unaff_x23 = (ulong)uVar32;
      uStack_10c = param_5;
      pfStack_108 = param_4;
      iStack_f0 = param_8;
      if (param_8 == 0) {
        ppuVar20 = &puStack_180;
        if (((-1 < (int)param_5) && (ppuVar20 = &puStack_180, unaff_w26 * uVar34 == param_5 * 100))
           && (ppuVar20 = &puStack_180, (int)(param_5 * 1000) <= (int)(uVar34 * uVar29))) {
          uStack_168 = 0;
          uStack_164 = 0;
          goto LAB_108b514f8;
        }
      }
      else {
        ppuVar20 = &puStack_180;
        if (unaff_w26 == 1) {
          if (param_8 == 2) {
            uStack_98 = *(undefined8 *)(param_2 + 0x1c);
            param_1 = *(undefined8 *)(param_2 + 0x1a);
            param_5 = param_2[0x48e];
            uStack_a0 = param_1;
          }
          lVar23 = -1;
          do {
            uVar18 = (ulong)(int)param_3[1];
            lVar23 = lVar23 + 1;
            ppuVar20 = &puStack_180;
            if ((long)uVar18 <= lVar23) goto LAB_108b51470;
            puVar13 = param_2 + 0x16;
            FUN_108b5886c(puVar13,param_2[0x513]);
            if (iStack_f0 == 2) {
              *(undefined8 *)(param_2 + 0x1c) = uStack_98;
              *(undefined8 *)(param_2 + 0x1a) = uStack_a0;
              param_2[0x1e] = param_5;
              param_1 = uStack_a0;
            }
            pfVar16 = (float *)0x0;
            param_2 = param_2 + 0x9f2;
            ppuVar20 = &puStack_180;
          } while ((int)puVar13 == 0);
        }
      }
    }
  }
LAB_108b5146c:
  do {
    _abort();
    uVar18 = extraout_x8;
    unaff_s8 = fVar39;
    unaff_s9 = fVar40;
    unaff_s10 = uVar41;
LAB_108b51470:
    uStack_164 = unaff_x19[6];
    unaff_x19[6] = 10;
    uStack_168 = unaff_x19[9];
    unaff_x19[9] = 0;
    puVar13 = unaff_x28 + 0x4a8;
    for (uVar27 = (ulong)((uint)uVar18 & ((int)(uint)uVar18 >> 0x1f ^ 0xffffffffU));
        ppuVar7 = ppuVar20, param_3 = unaff_x19, param_6 = unaff_x24, param_2 = unaff_x28,
        uVar27 != 0; uVar27 = uVar27 - 1) {
      puVar13[-3] = 0;
      *puVar13 = 1;
      puVar13 = puVar13 + 0x9f2;
    }
LAB_108b514f8:
    puStack_f8 = param_2 + 0x16;
    uStack_d4 = (uint)(unaff_x23 >> 1) & 0x7fffffff;
    puVar13 = param_2 + 0x4b7;
    for (lVar23 = 0; lVar23 < (int)uVar18; lVar23 = lVar23 + 1) {
      if (lVar23 == 1) {
        uVar41 = param_2[0x48e];
      }
      else {
        uVar41 = 0;
      }
      pfVar37 = (float *)(puStack_f8 + lVar23 * 0x9f2);
      pfVar14 = pfVar37;
      FUN_108b588b4(pfVar37,param_3,param_2[0x14],lVar23,uVar41);
      fVar38 = (float)param_1;
      pfVar16 = pfVar14;
      if ((int)pfVar14 != 0) goto LAB_108b521f0;
      if (pfVar37[0x48e] != 0.0 || ((ulong)unaff_x25 & 1) != 0) {
        for (lVar19 = 0; lVar19 < (int)param_2[0x5b6]; lVar19 = lVar19 + 1) {
          puVar13[lVar19] = 0;
        }
      }
      pfVar16 = (float *)0x0;
      pfVar37[0x60d] = pfVar37[0x60c];
      uVar18 = (ulong)param_3[1];
      puVar13 = puVar13 + 0x9f2;
    }
    iVar22 = param_2[0x48e];
    unaff_x19 = param_3;
    unaff_x24 = param_6;
  } while (((int)uVar18 != 1) &&
          (ppuVar20 = ppuVar7, unaff_x28 = param_2, fVar39 = unaff_s8, fVar40 = unaff_s9,
          uVar41 = unaff_s10, iVar22 != param_2[0xe80]));
  iStack_154 = unaff_w26 * 10;
  iStack_128 = iVar22 * iStack_154;
  uVar29 = 0;
  if (iVar22 * 1000 != 0) {
    uVar29 = (param_2[0x489] * iStack_128) / (iVar22 * 1000);
  }
  (*(code *)PTR____chkstk_darwin_11034bd40)
            ((-(ulong)(uVar29 >> 0x1f) & 0xfffffffe00000000 | (ulong)uVar29 << 1) + 0xf &
             0xfffffffffffffff0);
  ppuVar20 = (undefined8 **)((long)ppuVar7 + -extraout_x8_00);
  pfVar14 = (float *)0x0;
  puStack_100 = param_2 + 0x514;
  puStack_120 = param_2 + 0xf06;
  lStack_e0 = (long)param_2 + 0x22;
  puStack_b0 = param_2 + 0xea9;
  puStack_b8 = param_2 + 0xd;
  puStack_148 = param_2 + 0xea8;
  puStack_178 = (undefined8 *)(puStack_160 + 0xabb);
  puStack_180 = (undefined8 *)(param_2 + 0xe6d);
  iStack_c4 = uStack_d4 - 1;
  uStack_ec = (uint)unaff_x23 & 0x7ffffffe;
  piStack_170 = (int *)(puStack_160 + 0x677);
  puStack_138 = (undefined8 *)(param_2 + 0x4b7);
  puStack_130 = param_2 + 0x238d;
  fVar39 = 32768.0;
  unaff_s8 = 32768.0;
  fVar40 = -32768.0;
  unaff_s9 = -32768.0;
  unaff_s10 = 0x46fffe00;
  uVar41 = 0x46fffe00;
  unaff_x25 = puStack_f8;
  pfVar37 = pfStack_108;
  unaff_w26 = uStack_10c;
  puStack_e8 = param_2;
  puStack_c0 = (undefined1 *)ppuVar20;
LAB_108b516e4:
  iStack_c8 = (int)pfVar14;
  iVar22 = param_2[0x490] - param_2[0x5b5];
  if (iStack_128 <= (int)(param_2[0x490] - param_2[0x5b5])) {
    iVar22 = iStack_128;
  }
  uStack_d8 = 0;
  if (param_2[0x48e] * 1000 != 0) {
    uStack_d8 = (iVar22 * param_2[0x489]) / (param_2[0x48e] * 1000);
  }
  uVar29 = uStack_d8 & ((int)uStack_d8 >> 0x1f ^ 0xffffffffU);
  unaff_x23 = (ulong)uVar29;
  bVar9 = *param_3 == 1;
  unaff_x28 = param_2;
  if (bVar9) {
    func_0x000108b5226c();
    iVar21 = (int)pfVar16;
    if (!bVar9) goto LAB_108b5146c;
    if (unaff_x23 != 0) {
      fVar38 = *pfVar37;
      goto FUN_108b52238;
    }
    func_0x000108b52250();
    unaff_x23 = (ulong)uStack_d8;
    func_0x000108b52248();
    pfVar16 = (float *)(ulong)(uint)((int)pfVar14 + iVar21);
LAB_108b519a0:
    iVar22 = param_2[0x5b5] + iVar22;
    param_2[0x5b5] = iVar22;
  }
  else {
    bVar9 = *param_3 == 2;
    if (!bVar9) goto LAB_108b5146c;
    func_0x000108b5226c();
    iVar21 = (int)pfVar16;
    if (bVar9) {
      unaff_x23 = (ulong)uStack_d8;
      if (uVar29 == 0) {
        func_0x000108b52250();
        func_0x000108b52248();
        uVar29 = (int)pfVar14 + iVar21;
        pfVar16 = (float *)(ulong)uVar29;
        if ((param_2[0x12] == 2) && (param_2[0x5b7] == 0)) {
          pfVar14 = (float *)(param_2 + 0xfb0);
          func_0x000108b52248(pfVar14,(long)puStack_120 + (long)(int)param_2[0xfa7] * 2 + 4,
                              puStack_c0);
          uVar34 = param_2[0x490];
          for (iVar21 = 2; iVar21 - (uVar34 & ((int)uVar34 >> 0x1f ^ 0xffffffffU)) != 2;
              iVar21 = iVar21 + 1) {
            *(short *)((long)puStack_100 + (long)(iVar21 + param_2[0x5b5]) * 2) =
                 (short)((uint)((int)*(short *)((long)puStack_120 +
                                               (long)(iVar21 + param_2[0xfa7]) * 2) +
                               (int)*(short *)((long)puStack_100 +
                                              (long)(iVar21 + param_2[0x5b5]) * 2)) >> 1);
          }
          pfVar16 = (float *)(ulong)((int)pfVar14 + uVar29);
        }
        goto LAB_108b519a0;
      }
      fVar38 = *pfVar37 + pfVar37[1];
      goto FUN_108b52238;
    }
    if (extraout_w8 != 2) goto LAB_108b5146c;
    if (uVar29 != 0) {
      fVar38 = *pfVar37;
      goto FUN_108b52238;
    }
    if (param_2[0x12] == 1 && param_2[0x5b7] == 0) {
      pfVar14 = (float *)(param_2 + 0xfb0);
      _memcpy(pfVar14,param_2 + 0x5be,400);
    }
    iVar25 = (int)pfVar14;
    func_0x000108b52250();
    FUN_108b5a6b0();
    param_2[0x5b5] = param_2[0x5b5] + iVar22;
    iVar22 = param_2[0xe82] - param_2[0xfa7];
    if (param_2[0xe80] * iStack_154 <= iVar22) {
      iVar22 = param_2[0xe80] * iStack_154;
    }
    pfVar14 = (float *)(param_2 + 0xfb0);
    unaff_x23 = (ulong)uStack_d8;
    func_0x000108b52248(pfVar14,(long)puStack_120 + (long)(int)param_2[0xfa7] * 2 + 4,puStack_c0);
    pfVar16 = (float *)(ulong)(uint)(iVar25 + iVar21 + (int)pfVar14);
    param_2[0xfa7] = param_2[0xfa7] + iVar22;
    iVar22 = param_2[0x5b5];
    unaff_x25 = puStack_f8;
  }
  iVar21 = iStack_f0;
  fVar38 = (float)param_1;
  uStack_110 = *param_3;
  unaff_w26 = unaff_w26 - (uint)unaff_x23;
  param_2[0x14] = 0;
  bVar9 = iVar22 == param_2[0x490];
  if (iVar22 < (int)param_2[0x490]) {
    uVar29 = 0;
    iVar22 = iStack_f0;
    goto LAB_108b52128;
  }
  if ((bVar9) && ((func_0x000108b5226c(), bVar9 || (param_2[0xfa7] == param_2[0xe82]))))
  goto LAB_108b519e8;
  goto LAB_108b5146c;
LAB_108b519e8:
  uStack_114 = (uint)pfVar16;
  uStack_10c = unaff_w26;
  if (param_2[0x5b7] == 0 && iVar21 == 0) {
    uStack_a2 = (ushort)(byte)-(char)(0x100 >> (ulong)(extraout_w8_00 +
                                                       extraout_w8_00 * param_2[0x5b6] & 0x1f));
    func_0x000108b4a0c4(param_6,0,&uStack_a2,8);
    iStack_13c = *(int *)(param_6 + 0x18);
    uStack_140 = *(undefined4 *)(param_6 + 0x20);
    puVar24 = puStack_138;
    for (lVar23 = 0; uVar18 = (ulong)(int)param_3[1], lVar23 < (long)uVar18; lVar23 = lVar23 + 1) {
      uVar34 = 0;
      uVar29 = unaff_x25[lVar23 * 0x9f2 + 0x5a0];
      for (uVar18 = 0; (uVar29 & ((int)uVar29 >> 0x1f ^ 0xffffffffU)) != uVar18; uVar18 = uVar18 + 1
          ) {
        uVar34 = *(int *)((long)puVar24 + uVar18 * 4) << (ulong)((uint)uVar18 & 0x1f) | uVar34;
      }
      *(bool *)((long)unaff_x25 + lVar23 * 0x27c8 + 0x1283) = 0 < (int)uVar34;
      if ((1 < (int)uVar29) && (uVar34 != 0)) {
        func_0x000108b4a0c4(param_6,uVar34 - 1,(&PTR_DAT_110ab3588)[uVar29 - 2],8);
      }
      puVar24 = puVar24 + 0x4f9;
    }
    lVar30 = 0x12dc;
    lVar36 = 0x18bd;
    lVar19 = 0x190c;
    pfStack_108 = pfVar37;
    for (lVar23 = 0; lVar23 < (int)param_2[0x5b6]; lVar23 = lVar23 + 1) {
      lVar33 = lStack_e0 + lVar23 * 6;
      for (lVar35 = 0; lVar35 < (int)uVar18; lVar35 = lVar35 + 1) {
        if (*(int *)((long)param_2 + lVar30) != 0) {
          if ((((int)uVar18 == 2) && (lVar35 == 0)) &&
             (FUN_108b5b7d8(param_6,lVar33), puStack_b0[lVar23] == 0)) {
            FUN_108b5b888(param_6,(long)*(char *)((long)puStack_b8 + lVar23));
            if (lVar23 == 0) goto LAB_108b51b70;
LAB_108b51b48:
            if (*(int *)((long)param_2 + lVar30 + -4) == 0) goto LAB_108b51b70;
            uVar17 = 2;
          }
          else {
            if (lVar23 != 0) goto LAB_108b51b48;
LAB_108b51b70:
            uVar17 = 0;
          }
          FUN_108b52278(param_2 + 0x16,param_6,lVar23,1,uVar17);
          FUN_108b52604(param_6,(long)*(char *)((long)param_2 + lVar36),
                        (long)((char *)((long)param_2 + lVar36))[1],(long)param_2 + lVar19,
                        param_2[0x490]);
          uVar18 = (ulong)param_3[1];
        }
        param_2 = param_2 + 0x9f2;
      }
      lVar19 = lVar19 + 0x140;
      lVar36 = lVar36 + 0x24;
      lVar30 = lVar30 + 4;
      param_2 = puStack_e8;
    }
    puVar24 = puStack_138;
    for (lVar23 = 0; lVar23 < (int)uVar18; lVar23 = lVar23 + 1) {
      *(undefined4 *)(puVar24 + 1) = 0;
      *puVar24 = 0;
      uVar18 = (ulong)param_3[1];
      puVar24 = puVar24 + 0x4f9;
    }
    uVar29 = (*(int *)(param_6 + 0x18) - ((int)LZCOUNT(uStack_140) + iStack_13c)) +
             (int)LZCOUNT(*(undefined4 *)(param_6 + 0x20));
    unaff_x25 = puStack_f8;
    pfVar37 = pfStack_108;
    iVar21 = iStack_f0;
    uVar34 = uStack_d8;
  }
  else {
    uVar29 = 0;
    uVar34 = (uint)unaff_x23;
  }
  uVar6 = uStack_110;
  FUN_108b57014(unaff_x25);
  uVar15 = param_3[6];
  uVar32 = param_3[7];
  iVar22 = (int)(uVar15 * uVar32) / 1000;
  if (iVar21 == 0) {
    if ((int)uVar29 < 10) {
      uVar29 = 0;
    }
    else if (9 < (int)param_2[0xe]) {
      uVar29 = param_2[0xe] + uVar29 >> 1;
    }
    param_2[0xe] = uVar29;
    iVar22 = iVar22 - uVar29;
  }
  iVar25 = 0;
  if (param_2[0x5b6] != 0) {
    iVar25 = iVar22 / (int)param_2[0x5b6];
  }
  iVar22 = 100;
  if (uVar15 != 10) {
    iVar22 = 0x32;
  }
  uVar29 = (short)iVar25 * iVar22 + param_2[0xf] * -2;
  if ((iVar21 == 0) && (0 < (int)param_2[0x5b7])) {
    uVar29 = uVar29 + ((param_2[0xe] + param_2[0x5b7] * iVar25) -
                      (*(int *)(param_6 + 0x18) + (int)LZCOUNT(*(undefined4 *)(param_6 + 0x20)))) *
                      2 + 0x40;
  }
  uVar15 = uVar32;
  if ((int)uVar32 < 0x1389) {
    uVar15 = 5000;
  }
  if (4999 < (int)uVar32) {
    uVar32 = 5000;
  }
  uVar1 = uVar29;
  if ((int)uVar29 <= (int)uVar32) {
    uVar1 = uVar32;
  }
  if ((int)uVar29 <= (int)uVar15) {
    uVar15 = uVar1;
  }
  uStack_d8 = uVar15;
  if (param_3[1] == 2) {
    iVar22 = param_2[0x5b7];
    lVar19 = lStack_e0 + (long)iVar22 * 6;
    uVar3 = param_2[0x483];
    uVar29 = param_3[0x10];
    uVar4 = param_2[0x48e];
    *(undefined4 *)((long)ppuVar20 + -8) = param_2[0x490];
    puVar13 = puStack_b8;
    lVar23 = (long)puStack_b8 + (long)iVar22;
    *(uint *)((long)ppuVar20 + -0x10) = uVar29;
    *(undefined4 *)((long)ppuVar20 + -0xc) = uVar4;
    FUN_108b57d00(param_2,param_2 + 0x515,param_2 + 0xf07,lVar19,lVar23,&uStack_a0,uVar15,uVar3);
    if (*(char *)((long)puVar13 + (long)(int)param_2[0x5b7]) == '\0') {
      if (param_2[0x15] == 1) {
        *(undefined4 *)(puStack_178 + 1) = 0;
        *puStack_178 = 0;
        _bzero(param_2 + 0xa2d,0x1100);
        param_1 = 0;
        puStack_180[1] = 0;
        *puStack_180 = 0;
        puStack_180[3] = 0;
        puStack_180[2] = 0;
        *(undefined8 *)(param_2 + 0xa0c) = 0;
        param_2[0xe78] = 100;
        param_2[0xe67] = 100;
        puStack_160[0xabb] = 10;
        *puStack_160 = 0;
        param_2[0xe6b] = 0x10000;
        param_2[0xe96] = 1;
      }
      func_0x000108b52260(param_2 + 0xa08);
    }
    else {
      *(undefined1 *)((long)puStack_148 + (long)(int)param_2[0x5b7]) = 0;
    }
    if (iVar21 == 0) {
      FUN_108b5b7d8(param_6,lStack_e0 + (long)(int)param_2[0x5b7] * 6);
      if (*(char *)((long)puStack_148 + (long)(int)param_2[0x5b7]) == '\0') {
        FUN_108b5b888(param_6,(long)*(char *)((long)puStack_b8 + (long)(int)param_2[0x5b7]));
      }
    }
  }
  else {
    param_2[0x514] = param_2[1];
    param_2[1] = *(undefined4 *)((long)puStack_100 + (long)(int)param_2[0x490] * 2);
  }
  pfStack_108 = pfVar37 + (int)(uVar6 * uVar34);
  func_0x000108b52260(unaff_x25);
  bVar9 = uStack_d4 == 2;
  bVar10 = iStack_c8 == 0;
  pfVar16 = (float *)(ulong)uStack_114;
  puVar31 = param_2;
  puVar13 = puStack_130;
  iVar21 = iStack_c8;
  for (lVar23 = 0; iVar22 = iStack_f0, unaff_x25 = puStack_f8, pfVar37 = pfStack_108,
      unaff_w26 = uStack_10c, uVar29 = param_3[1], lVar23 < (int)uVar29; lVar23 = lVar23 + 1) {
    uVar34 = param_3[0xf];
    iVar22 = uVar34 * 3;
    if (bVar9 && bVar10) {
LAB_108b51df4:
      iVar25 = 5;
LAB_108b51df8:
      uVar32 = 0;
      if (iVar25 != 0) {
        uVar32 = iVar22 / iVar25;
      }
    }
    else {
      uVar32 = uVar34;
      if (uStack_d4 == 3) {
        if (iVar21 == 0) {
          iVar22 = uVar34 << 1;
          goto LAB_108b51df4;
        }
        if (iVar21 != 1) goto LAB_108b51e28;
        iVar25 = 4;
        goto LAB_108b51df8;
      }
    }
LAB_108b51e28:
    bVar8 = param_3[0xe] != 0 && iVar21 == iStack_c4;
    uVar15 = uStack_d8;
    if (((uVar29 != 1) && (uVar15 = *(uint *)((long)&uStack_a0 + lVar23 * 4), lVar23 == 0)) &&
       (0 < uStack_a0._4_4_)) {
      bVar8 = false;
      iVar22 = 0;
      if (uStack_ec != 0) {
        iVar22 = (int)uVar34 / (int)uStack_ec;
      }
      uVar32 = uVar32 - iVar22;
    }
    if (0 < (int)uVar15) {
      FUN_108b587c8(puVar31 + 0x16);
      if (lVar23 < (int)param_2[0x5b7]) {
        if ((lVar23 == 0) || (param_2[0x15] == 0)) {
          uVar17 = 2;
        }
        else {
          uVar17 = 1;
        }
      }
      else {
        uVar17 = 0;
      }
      pfVar16 = (float *)(puVar31 + 0x16);
      FUN_108b5c1d0(pfVar16,piStack_d0,param_6,uVar17,uVar32,bVar8);
      iVar21 = iStack_c8;
    }
    puVar31[0x4a5] = 0;
    puVar31[0x5b5] = 0;
    Hint_Prefetch(puVar13,0,0,0);
    puVar31[0x5b7] = puVar31[0x5b7] + 1;
    puVar13 = puVar13 + 0x9f2;
    puVar31 = puVar31 + 0x9f2;
  }
  iVar25 = param_2[0x5b7];
  param_2[0x15] = (uint)*(byte *)((long)puStack_b8 + (long)iVar25 + -1);
  if ((0 < *piStack_d0) && (iVar25 == param_2[0x5b6])) {
    uVar34 = 0;
    pcVar26 = pcStack_150;
    for (uVar18 = 0; uVar11 = uVar18 == (uVar29 & ((int)uVar29 >> 0x1f ^ 0xffffffffU)),
        !(bool)uVar11; uVar18 = uVar18 + 1) {
      pcVar28 = pcVar26;
      for (uVar27 = (ulong)(puStack_f8[uVar18 * 0x9f2 + 0x5a0] &
                           ((int)puStack_f8[uVar18 * 0x9f2 + 0x5a0] >> 0x1f ^ 0xffffffffU));
          uVar27 != 0; uVar27 = uVar27 - 1) {
        uVar34 = uVar34 << 1 | (int)*pcVar28;
        pcVar28 = pcVar28 + 1;
      }
      uVar34 = uVar34 << 1 | (int)*(char *)((long)puStack_f8 + uVar18 * 0x27c8 + 0x1283);
      pcVar26 = pcVar26 + 0x27c8;
    }
    if (iStack_f0 == 0) {
      FUN_108b4a264(param_6,uVar34,uVar29 + uVar29 * iVar25);
      iVar21 = iStack_c8;
    }
    if ((param_2[0x623] != 0) && ((func_0x000108b5226c(), (bool)uVar11 || (*piStack_170 != 0)))) {
      *piStack_d0 = 0;
    }
    uVar34 = param_3[6];
    uVar29 = param_2[0xf] + *piStack_d0 * 8 + (int)(uVar34 * param_3[7]) / -1000;
    uVar29 = uVar29 & ((int)uVar29 >> 0x1f ^ 0xffffffffU);
    if (9999 < (int)uVar29) {
      uVar29 = 10000;
    }
    param_2[0xf] = uVar29;
    iVar25 = (int)((ulong)((long)(int)(short)param_2[0x13] * 0xc74) >> 0x10) + 0xd;
    iVar2 = 0;
    if (iVar25 <= (int)param_2[0x483]) {
      iVar2 = param_2[0x13] + uVar34;
    }
    param_2[0x13] = iVar2;
    param_2[0x14] = (uint)((int)param_2[0x483] < iVar25);
  }
  fVar38 = (float)param_1;
  pfVar14 = (float *)(ulong)(iVar21 + 1);
  if (unaff_w26 == 0) {
    uVar29 = param_2[0x14];
LAB_108b52128:
    uVar34 = param_3[1];
    param_2[0x12] = uVar34;
    param_3[0x14] = uVar29;
    iVar21 = param_2[0x48e];
    if (iVar21 == 0x10) {
      uVar29 = (uint)(param_2[0x1d] == 0);
    }
    else {
      uVar29 = 0;
    }
    param_3[0x15] = uVar29;
    param_3[0x13] = (short)iVar21 * 1000;
    if (param_3[0x10] == 0) {
      uVar29 = (uint)*(short *)(param_2 + 7);
    }
    else {
      uVar29 = 0;
    }
    param_3[0x16] = uVar29;
    if (iVar22 != 0) {
      param_3[6] = uStack_164;
      param_3[9] = uStack_168;
      param_2 = param_2 + 0x4a8;
      for (uVar18 = (ulong)(uVar34 & ((int)uVar34 >> 0x1f ^ 0xffffffffU)); uVar18 != 0;
          uVar18 = uVar18 - 1) {
        param_2[-3] = 0;
        *param_2 = 0;
        param_2 = param_2 + 0x9f2;
      }
    }
    cVar5 = pcStack_150[0x2d];
    param_3[0x18] = (int)cVar5;
    param_3[0x19] =
         (int)*(short *)(&UNK_10df91dbe + (long)pcStack_150[0x2e] * 2 + (long)((int)cVar5 >> 1) * 4)
    ;
    unaff_s8 = 32768.0;
    unaff_s9 = -32768.0;
LAB_108b521f0:
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_90) {
      return pfVar16;
    }
    ___stack_chk_fail();
FUN_108b52238:
    fVar39 = fVar38 * unaff_s8;
    if (fVar38 * unaff_s8 <= unaff_s9) {
      fVar39 = unaff_s9;
    }
    NEON_fminnm(fVar39,unaff_s10);
    return pfVar14;
  }
  goto LAB_108b516e4;
}



/* Entry: 108b52238; end: 108b52277;  */

undefined4 FUN_108b52238(float param_1)

{
  undefined4 uVar1;
  float unaff_s8;
  float unaff_s9;
  undefined4 unaff_s10;
  float fVar2;
  
  fVar2 = param_1 * unaff_s8;
  if (param_1 * unaff_s8 <= unaff_s9) {
    fVar2 = unaff_s9;
  }
  uVar1 = NEON_fminnm(fVar2,unaff_s10);
  return uVar1;
}



/* Entry: 108b52278; end: 108b525db;  */

void FUN_108b52278(long param_1,long param_2,undefined *param_3,int param_4,int param_5)

{
  byte *pbVar1;
  long lVar2;
  int iVar3;
  char cVar4;
  short sVar5;
  uint uVar6;
  undefined1 *puVar7;
  uint uVar8;
  undefined1 *puVar9;
  short sVar10;
  uint uVar11;
  int iVar12;
  long unaff_x19;
  long unaff_x20;
  long lVar13;
  long lVar14;
  undefined *puVar15;
  long lVar16;
  undefined1 *puVar17;
  undefined1 *unaff_x29;
  code *unaff_x30;
  undefined1 auStack_a0 [8];
  undefined1 auStack_98 [16];
  short asStack_88 [16];
  long lStack_68;
  
  puVar7 = auStack_a0;
  puVar17 = &stack0xfffffffffffffff0;
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar2 = param_1 + (long)(int)param_3 * 0x24 + 0x1848;
  if (param_4 == 0) {
    lVar2 = param_1 + 0x1290;
  }
  uVar11 = (int)*(char *)(lVar2 + 0x1e) + *(char *)(lVar2 + 0x1d) * 2;
  lVar13 = unaff_x20;
  if ((uVar11 < 6) && ((lVar13 = param_1, param_4 == 0 || (1 < uVar11)))) {
    if ((param_4 == 0) && (uVar11 < 2)) {
      puVar15 = &UNK_10df91db6;
    }
    else {
      uVar11 = uVar11 - 2;
      puVar15 = &UNK_10df91db2;
    }
    FUN_108b525dc(param_1,uVar11,puVar15);
    if (param_5 != 2) {
      FUN_108b525dc();
    }
    FUN_108b525dc();
    for (lVar14 = 1; lVar14 < *(int *)(param_1 + 0x11e4); lVar14 = lVar14 + 1) {
      func_0x000108b525e8(param_2,(long)*(char *)(lVar2 + lVar14),&UNK_10df90e10);
    }
    FUN_108b525dc();
    puVar15 = *(undefined **)(param_1 + 0x1260);
    puVar9 = auStack_98;
    param_3 = puVar15;
    FUN_108b5759c(asStack_88,puVar9,puVar15,(long)*(char *)(lVar2 + 8));
    uVar11 = (uint)puVar9;
    sVar10 = *(short *)(puVar15 + 2);
    if (*(int *)(param_1 + 0x1220) != (int)sVar10) goto LAB_108b525d4;
    lVar14 = lVar2 + 9;
    for (lVar16 = 0; lVar16 < sVar10; lVar16 = lVar16 + 1) {
      cVar4 = *(char *)(lVar14 + lVar16);
      if (cVar4 < '\x04') {
        if (cVar4 < -3) {
          func_0x000108b525f0();
          func_0x000108b525e8();
          iVar12 = -(int)*(char *)(lVar14 + lVar16);
          goto LAB_108b5243c;
        }
        iVar12 = cVar4 + 4;
        param_3 = (undefined *)(*(long *)(puVar15 + 0x30) + (long)asStack_88[lVar16]);
      }
      else {
        func_0x000108b525f0();
        func_0x000108b525e8();
        iVar12 = (int)*(char *)(lVar14 + lVar16);
LAB_108b5243c:
        iVar12 = iVar12 + -4;
        param_3 = &UNK_10df91de6;
      }
      func_0x000108b525e8(param_2,iVar12);
      puVar15 = *(undefined **)(param_1 + 0x1260);
      sVar10 = *(short *)(puVar15 + 2);
    }
    if (*(int *)(param_1 + 0x11e4) == 4) {
      param_3 = &UNK_10df91db8;
      FUN_108b525dc();
    }
    if (*(char *)(lVar2 + 0x1d) == '\x02') {
      if (((param_5 != 2) || (*(int *)(param_1 + 0x1698) != 2)) ||
         (sVar10 = *(short *)(lVar2 + 0x1a), sVar5 = *(short *)(param_1 + 0x169c), FUN_108b525dc(),
         0x13 < ((int)sVar10 - (int)sVar5) + 8U)) {
        sVar10 = *(short *)(lVar2 + 0x1a);
        iVar3 = *(int *)(param_1 + 0x11e0);
        iVar12 = iVar3 >> 1;
        sVar5 = 0;
        if (iVar12 != 0) {
          sVar5 = (short)((int)sVar10 / iVar12);
        }
        FUN_108b525dc();
        func_0x000108b525e8(param_2,(int)sVar10 - (int)sVar5 * ((iVar3 << 0xf) >> 0x10),
                            *(undefined8 *)(param_1 + 0x1250));
      }
      *(undefined2 *)(param_1 + 0x169c) = *(undefined2 *)(lVar2 + 0x1a);
      FUN_108b525dc();
      param_3 = &UNK_10df90e39;
      FUN_108b525dc();
      for (lVar14 = 0; lVar14 < *(int *)(param_1 + 0x11e4); lVar14 = lVar14 + 1) {
        param_3 = (&PTR_DAT_110ab3498)[*(char *)(lVar2 + 0x20)];
        FUN_108b525dc();
      }
      if (param_5 == 0) {
        param_3 = &UNK_10df91daf;
        FUN_108b525dc();
      }
    }
    *(int *)(param_1 + 0x1698) = (int)*(char *)(lVar2 + 0x1d);
    uVar8 = (uint)*(char *)(lVar2 + 0x22);
    uVar11 = (int)*(char *)(lVar2 + 0x22);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
      param_3 = &UNK_10df91dcf;
      puVar7 = (undefined1 *)register0x00000008;
      puVar17 = unaff_x29;
      goto SUB_108b4a0c4;
    }
  }
  else {
LAB_108b525d4:
    _abort();
  }
  uVar8 = uVar11;
  unaff_x20 = lVar13;
  unaff_x30 = FUN_108b525dc;
  ___stack_chk_fail();
  unaff_x19 = param_2;
SUB_108b4a0c4:
  uVar11 = *(uint *)(param_2 + 0x20);
  uVar6 = uVar11 >> 8;
  if ((int)uVar8 < 1) {
    iVar12 = uVar11 - uVar6 * (byte)param_3[(int)uVar8];
  }
  else {
    pbVar1 = param_3 + uVar8;
    *(uint *)(param_2 + 0x24) = (*(int *)(param_2 + 0x24) + uVar11) - uVar6 * pbVar1[-1];
    iVar12 = ((uint)pbVar1[-1] - (uint)*pbVar1) * uVar6;
  }
  *(int *)(param_2 + 0x20) = iVar12;
  *(long *)(puVar7 + -0x20) = unaff_x20;
  *(long *)(puVar7 + -0x18) = unaff_x19;
  *(undefined1 **)(puVar7 + -0x10) = puVar17;
  *(code **)(puVar7 + -8) = unaff_x30;
  uVar11 = *(uint *)(param_2 + 0x20);
  while (uVar11 < 0x800001) {
    FUN_108b4a4c0(param_2,*(uint *)(param_2 + 0x24) >> 0x17);
    uVar11 = *(int *)(param_2 + 0x20) << 8;
    *(uint *)(param_2 + 0x20) = uVar11;
    *(uint *)(param_2 + 0x24) = (*(uint *)(param_2 + 0x24) & 0x7fffff) << 8;
    *(int *)(param_2 + 0x18) = *(int *)(param_2 + 0x18) + 8;
  }
  return;
}



/* Entry: 108b525dc; end: 108b52603;  */

void FUN_108b525dc(undefined8 param_1,uint param_2,long param_3)

{
  byte *pbVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  long unaff_x19;
  
  uVar3 = *(uint *)(unaff_x19 + 0x20);
  uVar2 = uVar3 >> 8;
  if ((int)param_2 < 1) {
    iVar4 = uVar3 - uVar2 * *(byte *)(param_3 + (int)param_2);
  }
  else {
    pbVar1 = (byte *)(param_3 + (ulong)param_2);
    *(uint *)(unaff_x19 + 0x24) = (*(int *)(unaff_x19 + 0x24) + uVar3) - uVar2 * pbVar1[-1];
    iVar4 = ((uint)pbVar1[-1] - (uint)*pbVar1) * uVar2;
  }
  *(int *)(unaff_x19 + 0x20) = iVar4;
  uVar3 = *(uint *)(unaff_x19 + 0x20);
  while (uVar3 < 0x800001) {
    FUN_108b4a4c0();
    uVar3 = *(int *)(unaff_x19 + 0x20) << 8;
    *(uint *)(unaff_x19 + 0x20) = uVar3;
    *(uint *)(unaff_x19 + 0x24) = (*(uint *)(unaff_x19 + 0x24) & 0x7fffff) << 8;
    *(int *)(unaff_x19 + 0x18) = *(int *)(unaff_x19 + 0x18) + 8;
  }
  return;
}



/* Entry: 108b52604; end: 108b529f7;  */

int * FUN_108b52604(int *param_1,ulong param_2,uint param_3,ulong param_4,uint param_5)

{
  long lVar1;
  char cVar2;
  uint uVar3;
  char cVar4;
  undefined2 uVar5;
  undefined4 uVar6;
  undefined2 uVar7;
  ushort uVar8;
  undefined2 uVar9;
  int *piVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  int *piVar14;
  byte *pbVar15;
  undefined *puVar16;
  long extraout_x8;
  long extraout_x8_00;
  uint uVar17;
  long lVar18;
  ulong *puVar19;
  uint extraout_w12;
  ulong extraout_x12;
  long extraout_x13;
  uint uVar20;
  ulong uVar21;
  int *piVar22;
  ulong uVar23;
  ulong uVar24;
  int iVar25;
  ulong *puVar26;
  int *piVar27;
  undefined8 uStack_b0;
  ulong uStack_a8;
  ulong uStack_a0;
  int *piStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_88 = 0;
  uStack_90 = 0;
  uStack_78 = 0;
  uStack_80 = 0;
  uStack_a8 = param_2;
  if ((param_5 & 0xf) == 0) {
    iVar25 = (int)param_5 >> 4;
  }
  else {
    if (param_5 != 0x78) goto LAB_108b529f4;
    *(undefined8 *)(param_4 + 0x78) = 0;
    *(undefined8 *)(param_4 + 0x80) = 0;
    iVar25 = 8;
  }
  uStack_b0._4_4_ = param_3;
  uStack_b0._0_4_ = param_5;
  (*(code *)PTR____chkstk_darwin_11034bd40)((long)(iVar25 << 4));
  puVar26 = (ulong *)((long)&uStack_b0 + extraout_x8 * -4);
  puVar19 = puVar26;
  for (lVar18 = 0; lVar18 < extraout_x8; lVar18 = lVar18 + 4) {
    uVar6 = *(undefined4 *)(param_4 + lVar18);
    uVar5 = MP_INT_ABS((short)(char)uVar6);
    uVar7 = MP_INT_ABS((short)(char)((uint)uVar6 >> 8));
    uVar8 = MP_INT_ABS((short)(char)((uint)uVar6 >> 0x10));
    uVar9 = MP_INT_ABS((short)(char)((uint)uVar6 >> 0x18));
    puVar19[1] = (ulong)CONCAT24((short)(CONCAT13((char)((ushort)uVar9 >> 8),
                                                  CONCAT12((char)uVar9,uVar8)) >> 0x10),(uint)uVar8)
    ;
    *puVar19 = (ulong)(CONCAT15((char)((ushort)uVar7 >> 8),
                                CONCAT14((char)uVar7,(uint)CONCAT12((char)uVar7,uVar5))) &
                      0xffff0000ffff);
    puVar19 = puVar19 + 2;
  }
  uStack_a0 = param_4;
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (-(extraout_x12 >> 0x1f & 1) & 0xfffffffc00000000 | (extraout_x12 & 0xffffffff) << 2);
  piVar27 = (int *)((long)puVar26 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0));
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  piVar22 = (int *)((long)piVar27 - extraout_x13);
  uVar24 = (ulong)(extraout_w12 & ((int)extraout_w12 >> 0x1f ^ 0xffffffffU));
  piStack_98 = piVar27;
  puVar19 = puVar26;
  for (uVar23 = 0; piVar27 = piStack_98, uVar23 != uVar24; uVar23 = uVar23 + 1) {
    iVar25 = 0;
    piVar22[uVar23] = 0;
    while( true ) {
      puVar11 = &uStack_90;
      FUN_108b529f8(puVar11,puVar19,8,8);
      puVar12 = &uStack_90;
      FUN_108b529f8(puVar12,&uStack_90,10,4);
      puVar13 = &uStack_90;
      FUN_108b529f8(puVar13,&uStack_90,0xc,2);
      piVar14 = piVar27 + uVar23;
      FUN_108b529f8(piVar27 + uVar23,&uStack_90,0x10,1);
      if ((int)piVar14 == 0 && (int)puVar12 + (int)puVar11 + (int)puVar13 == 0) break;
      iVar25 = iVar25 + 1;
      piVar22[uVar23] = iVar25;
      for (lVar18 = 0; lVar18 != 0x40; lVar18 = lVar18 + 4) {
        *(int *)((long)puVar19 + lVar18) = *(int *)((long)puVar19 + lVar18) >> 1;
      }
    }
    puVar19 = puVar19 + 8;
  }
  uVar23 = 0;
  uVar17 = 0x7fffffff;
  lVar1 = ((long)(uStack_a8 << 0x20) >> 0x21) * 9;
  for (lVar18 = 0; lVar18 != 9; lVar18 = lVar18 + 1) {
    uVar20 = (uint)(byte)(&UNK_10df9202d)[lVar18 + lVar1];
    piVar14 = piVar22;
    piVar10 = piStack_98;
    for (uVar21 = uVar24; uVar21 != 0; uVar21 = uVar21 - 1) {
      pbVar15 = &UNK_10df91f8a + lVar18 * 0x12;
      if (*piVar14 < 1) {
        pbVar15 = &UNK_10df91f79 + (long)*piVar10 + lVar18 * 0x12;
      }
      uVar20 = uVar20 + *pbVar15;
      piVar14 = piVar14 + 1;
      piVar10 = piVar10 + 1;
    }
    uVar3 = (uint)lVar18;
    if ((int)uVar17 <= (int)uVar20) {
      uVar3 = (uint)uVar23;
      uVar20 = uVar17;
    }
    uVar17 = uVar20;
    uVar23 = (ulong)uVar3;
  }
  func_0x000108b52a34(param_1,uVar23,&UNK_10df9201b + lVar1);
  for (uVar21 = 0; uVar21 != uVar24; uVar21 = uVar21 + 1) {
    iVar25 = piVar22[uVar21];
    puVar16 = &UNK_10df91ec5 + uVar23 * 0x12;
    if (iVar25 != 0) {
      func_0x000108b52a34(param_1,0x11,&UNK_10df91ec5 + uVar23 * 0x12);
      if (iVar25 < 2) {
        iVar25 = 1;
      }
      while( true ) {
        iVar25 = iVar25 + -1;
        puVar16 = &UNK_10df91f67;
        if (iVar25 == 0) break;
        func_0x000108b52a34(param_1,0x11,&UNK_10df91f67);
      }
    }
    func_0x000108b52a34(param_1,piVar27[uVar21],puVar16);
  }
  for (lVar18 = 0; uVar24 * 4 - lVar18 != 0; lVar18 = lVar18 + 4) {
    if (0 < *(int *)((long)piVar27 + lVar18)) {
      FUN_108b56034(param_1,puVar26);
    }
    puVar26 = puVar26 + 8;
  }
  for (uVar23 = 0; uVar23 != uVar24; uVar23 = uVar23 + 1) {
    uVar17 = piVar22[uVar23];
    if (0 < (int)uVar17) {
      lVar1 = uStack_a0 + uVar23 * 0x10;
      for (lVar18 = 0; lVar18 != 0x10; lVar18 = lVar18 + 1) {
        cVar4 = *(char *)(lVar1 + lVar18);
        cVar2 = -cVar4;
        if (-1 < cVar4) {
          cVar2 = cVar4;
        }
        uVar20 = uVar17;
        while (1 < (int)uVar20) {
          uVar20 = uVar20 - 1;
          func_0x000108b52a34(param_1,(uint)(int)cVar2 >> (ulong)(uVar20 & 0x1f) & 1,&UNK_10df91dad)
          ;
        }
        func_0x000108b52a34(param_1,(int)cVar2 & 1,&UNK_10df91dad);
      }
    }
  }
  param_2 = uStack_a0;
  param_4 = uStack_a8;
  param_3 = (uint)uStack_b0;
  FUN_108b4f1c8();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return param_1;
  }
  ___stack_chk_fail();
LAB_108b529f4:
  _abort();
  param_4 = param_4 & 0xffffffff;
  piVar22 = (int *)(param_2 + 4);
  while( true ) {
    if (param_4 == 0) {
      return (int *)0x0;
    }
    if ((int)param_3 < *piVar22 + piVar22[-1]) break;
    *param_1 = *piVar22 + piVar22[-1];
    piVar22 = piVar22 + 2;
    param_4 = param_4 - 1;
    param_1 = param_1 + 1;
  }
  return (int *)0x1;
}



/* Entry: 108b529f8; end: 108b52a3b;  */

undefined8 FUN_108b529f8(int *param_1,long param_2,int param_3,uint param_4)

{
  int *piVar1;
  ulong uVar2;
  
  uVar2 = (ulong)param_4;
  piVar1 = (int *)(param_2 + 4);
  while( true ) {
    if (uVar2 == 0) {
      return 0;
    }
    if (param_3 < *piVar1 + piVar1[-1]) break;
    *param_1 = *piVar1 + piVar1[-1];
    piVar1 = piVar1 + 2;
    uVar2 = uVar2 - 1;
    param_1 = param_1 + 1;
  }
  return 1;
}



/* Entry: 108b52a3c; end: 108b52bb3;  */

void FUN_108b52a3c(void)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  short sVar4;
  int iVar5;
  uint in_w4;
  char cVar6;
  char cVar7;
  int unaff_w19;
  char *unaff_x20;
  long unaff_x21;
  long unaff_x22;
  ulong unaff_x23;
  
  func_0x000108b52c9c();
  for (; (in_w4 & ((int)in_w4 >> 0x1f ^ 0xffffffffU)) != unaff_x23; unaff_x23 = unaff_x23 + 1) {
    sVar4 = (short)*(undefined4 *)(unaff_x21 + unaff_x23 * 4);
    func_0x000108b59910();
    cVar6 = (char)((uint)((short)(sVar4 + -0x82a) * 0x8cb) >> 0x10);
    *(char *)(unaff_x22 + unaff_x23) = cVar6;
    if (cVar6 < *unaff_x20) {
      cVar6 = cVar6 + '\x01';
    }
    uVar1 = (int)cVar6 & ((int)cVar6 >> 0x1f ^ 0xffffffffU);
    if (0x3e < (int)uVar1) {
      uVar1 = 0x3f;
    }
    *(char *)(unaff_x22 + unaff_x23) = (char)uVar1;
    cVar6 = *unaff_x20;
    if (unaff_w19 == 0 && (int)unaff_x23 == 0) {
      uVar2 = (int)cVar6 - 4;
      if ((int)uVar2 <= (int)(uVar1 & 0xff)) {
        uVar2 = uVar1 & 0xff;
      }
      cVar7 = '?';
      if (cVar6 < 0x44) {
        cVar7 = (char)uVar2;
      }
      *(char *)(unaff_x22 + unaff_x23) = cVar7;
      *unaff_x20 = cVar7;
    }
    else {
      cVar6 = (char)uVar1 - cVar6;
      *(char *)(unaff_x22 + unaff_x23) = cVar6;
      iVar5 = *unaff_x20 + 8;
      cVar7 = (char)iVar5 + (char)(((int)cVar6 - (int)*unaff_x20) + 0x1f9U >> 1);
      if (cVar6 <= iVar5) {
        cVar7 = cVar6;
      }
      iVar3 = (int)cVar7;
      if (iVar3 < -3) {
        iVar3 = -4;
      }
      if (0x23 < iVar3) {
        iVar3 = 0x24;
      }
      *(char *)(unaff_x22 + unaff_x23) = (char)iVar3;
      if (iVar5 < iVar3) {
        cVar6 = (*unaff_x20 - (char)iVar5) + (char)(iVar3 << 1);
        if ('>' < cVar6) {
          cVar6 = '?';
        }
      }
      else {
        cVar6 = *unaff_x20 + (char)iVar3;
      }
      *unaff_x20 = cVar6;
      *(char *)(unaff_x22 + unaff_x23) = *(char *)(unaff_x22 + unaff_x23) + '\x04';
      cVar7 = *unaff_x20;
    }
    iVar5 = cVar7 * 0x1d1c71 >> 0x10;
    if (0x754 < iVar5) {
      iVar5 = 0x755;
    }
    iVar5 = iVar5 + 0x82a;
    func_0x000108b59968();
    *(int *)(unaff_x21 + unaff_x23 * 4) = iVar5;
  }
  return;
}



/* Entry: 108b52bb4; end: 108b52c77;  */

void FUN_108b52bb4(void)

{
  uint uVar1;
  char cVar2;
  char cVar3;
  int iVar4;
  uint in_w4;
  char cVar5;
  int unaff_w19;
  char *unaff_x20;
  char *unaff_x21;
  long unaff_x22;
  ulong unaff_x23;
  
  func_0x000108b52c9c();
  for (; (in_w4 & ((int)in_w4 >> 0x1f ^ 0xffffffffU)) != unaff_x23; unaff_x23 = unaff_x23 + 1) {
    if (unaff_w19 == 0 && (int)unaff_x23 == 0) {
      iVar4 = (int)*unaff_x21;
      if ((int)*unaff_x21 <= *unaff_x20 + -0x10) {
        iVar4 = *unaff_x20 + -0x10;
      }
      cVar5 = (char)iVar4;
    }
    else {
      cVar2 = *unaff_x20;
      cVar3 = (char)(unaff_x21[unaff_x23] + -4);
      cVar5 = cVar2 + cVar3;
      if (cVar2 + 8 < unaff_x21[unaff_x23] + -4) {
        cVar5 = (cVar2 - (char)(cVar2 + 8)) + cVar3 * '\x02';
      }
    }
    uVar1 = (int)cVar5 & ((int)cVar5 >> 0x1f ^ 0xffffffffU);
    if (0x3e < (int)uVar1) {
      uVar1 = 0x3f;
    }
    *unaff_x20 = (char)uVar1;
    iVar4 = (uVar1 * 0x1d1c71 >> 0x10) + 0x82a;
    func_0x000108b59968();
    *(int *)(unaff_x22 + unaff_x23 * 4) = iVar4;
  }
  return;
}



/* Entry: 108b52c78; end: 108b52cb3;  */

int FUN_108b52c78(char *param_1,uint param_2)

{
  int iVar1;
  ulong uVar2;
  
  iVar1 = 0;
  for (uVar2 = (ulong)(param_2 & ((int)param_2 >> 0x1f ^ 0xffffffffU)); uVar2 != 0;
      uVar2 = uVar2 - 1) {
    iVar1 = (int)*param_1 + iVar1 * 0x100;
    param_1 = param_1 + 1;
  }
  return iVar1;
}



/* Entry: 108b52cb4; end: 108b52ec7;  */

/* WARNING: Possible PIC construction at 0x000108b52e7c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000108b52ea0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000108b52e80) */
/* WARNING: Removing unreachable block (ram,0x000108b52e88) */
/* WARNING: Removing unreachable block (ram,0x000108b52ea4) */
/* WARNING: Removing unreachable block (ram,0x000108b52eac) */

void FUN_108b52cb4(short *param_1,short *param_2,short *param_3,uint param_4,uint param_5)

{
  int iVar1;
  uint uVar2;
  ulong uVar3;
  long extraout_x10;
  undefined8 *puVar4;
  long extraout_x10_00;
  long extraout_x12;
  long extraout_x12_00;
  long lVar5;
  int *extraout_x13;
  int *extraout_x13_00;
  int *piVar6;
  long extraout_x14;
  long extraout_x14_00;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined4 uStack_30;
  long lStack_28;
  undefined1 *puStack_20;
  undefined8 uStack_18;
  
  if ((-1 < (int)param_4) && (param_4 < 5)) {
    for (uVar3 = (ulong)(param_5 & ((int)param_5 >> 0x1f ^ 0xffffffffU)); uVar3 != 0;
        uVar3 = uVar3 - 1) {
      *param_1 = *param_2 + (short)(param_4 * (int)(short)(*param_3 - *param_2) >> 2);
      param_3 = param_3 + 1;
      param_2 = param_2 + 1;
      param_1 = param_1 + 1;
    }
    return;
  }
  _abort();
  uStack_18 = 0x108b52d00;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_20 = &stack0xfffffffffffffff0;
  if (*(int *)(param_1 + 6) != 0) {
    uVar2 = *(int *)(param_1 + 4) * -0x400 + 0x40000;
    iVar1 = (int)uVar2 >> 0x10;
    if (iVar1 < 4) {
      uVar2 = uVar2 & 0xfc00;
      if (uVar2 != 0) {
        if (uVar2 < 0x8000) {
          puStack_20 = &stack0xfffffffffffffff0;
          func_0x000108b52efc();
          piVar6 = extraout_x13;
          for (lVar5 = extraout_x12; lVar5 != 0xc; lVar5 = lVar5 + 4) {
            *(int *)(extraout_x14 + lVar5) =
                 *piVar6 + (int)((ulong)(((long)piVar6[3] - (long)*piVar6) * extraout_x10) >> 0x10);
            piVar6 = piVar6 + 1;
          }
          return;
        }
        puStack_20 = &stack0xfffffffffffffff0;
        func_0x000108b52efc();
        piVar6 = extraout_x13_00;
        for (lVar5 = extraout_x12_00; lVar5 != 0xc; lVar5 = lVar5 + 4) {
          *(int *)(extraout_x14_00 + lVar5) =
               piVar6[3] +
               (int)((ulong)(extraout_x10_00 * ((long)piVar6[3] - (long)*piVar6)) >> 0x10);
          piVar6 = piVar6 + 1;
        }
        return;
      }
      uStack_38 = *(undefined8 *)(&UNK_10df91df0 + (long)iVar1 * 0xc);
      uStack_30 = *(undefined4 *)(&UNK_10df91df8 + (long)iVar1 * 0xc);
      puVar4 = (undefined8 *)(&UNK_10df91e2c + (long)iVar1 * 8);
    }
    else {
      uStack_38 = 0xaa4fada0552b622;
      uStack_30 = 0x552b622;
      puVar4 = (undefined8 *)&UNK_10df91e4c;
    }
    uStack_40 = *puVar4;
    uVar2 = *(int *)(param_1 + 6) + *(int *)(param_1 + 4);
    uVar2 = uVar2 & ((int)uVar2 >> 0x1f ^ 0xffffffffU);
    if (0xff < (int)uVar2) {
      uVar2 = 0x100;
    }
    *(uint *)(param_1 + 4) = uVar2;
    puStack_20 = &stack0xfffffffffffffff0;
    func_0x000108b59678(param_2,&uStack_38,&uStack_40);
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_28) {
    ___stack_chk_fail();
    return;
  }
  return;
}



/* Entry: 108b52ec8; end: 108b52f13;  */

void FUN_108b52ec8(void)

{
  return;
}



/* Entry: 108b52f14; end: 108b53063;  */

/* WARNING: Possible PIC construction at 0x000108b535d8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000108b535f8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000108b535dc) */
/* WARNING: Removing unreachable block (ram,0x000108b535fc) */
/* WARNING: Removing unreachable block (ram,0x000108b535ec) */
/* WARNING: Removing unreachable block (ram,0x000108b53608) */
/* WARNING: Removing unreachable block (ram,0x000108b5360c) */
/* WARNING: Removing unreachable block (ram,0x000108b5362c) */
/* WARNING: Removing unreachable block (ram,0x000108b53614) */
/* WARNING: Removing unreachable block (ram,0x000108b535f4) */

void FUN_108b52f14(short *param_1,char *param_2,long param_3,undefined8 param_4,char *param_5,
                  long param_6,long param_7,long param_8)

{
  int iVar1;
  short *psVar2;
  int *piVar3;
  int *piVar4;
  char cVar5;
  char cVar6;
  short sVar7;
  short sVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  undefined8 uVar13;
  short *psVar14;
  undefined1 *puVar15;
  int *piVar16;
  short *psVar17;
  short *psVar18;
  int iVar19;
  int extraout_w8;
  ulong extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  int iVar20;
  int extraout_w10;
  int iVar21;
  int extraout_w10_00;
  long lVar22;
  uint uVar23;
  long extraout_x12;
  int extraout_w13;
  int iVar24;
  uint uVar25;
  long extraout_x13;
  ulong uVar26;
  ulong extraout_x13_00;
  int extraout_w14;
  long lVar27;
  ulong uVar28;
  long lVar29;
  int iVar30;
  int iVar31;
  ulong extraout_x15;
  ulong uVar32;
  short *psVar33;
  long lVar34;
  int *piVar35;
  uint uVar36;
  int *piVar37;
  int iVar38;
  undefined8 uVar39;
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined8 uVar43;
  undefined8 uVar44;
  undefined8 uVar45;
  undefined8 uVar46;
  undefined8 uVar47;
  long lStack_2d0;
  uint uStack_2c4;
  int *piStack_2c0;
  long lStack_2b8;
  undefined1 *puStack_2b0;
  int *piStack_2a8;
  long lStack_2a0;
  long lStack_298;
  long lStack_290;
  long lStack_288;
  long lStack_280;
  ulong uStack_278;
  long lStack_270;
  long lStack_268;
  long lStack_260;
  short *psStack_258;
  long lStack_250;
  long lStack_248;
  uint uStack_23c;
  long lStack_238;
  short *psStack_230;
  char *pcStack_228;
  short *psStack_220;
  int iStack_218;
  int iStack_214;
  int iStack_210;
  uint uStack_20c;
  int iStack_208;
  uint uStack_204;
  short *psStack_200;
  int iStack_1f8;
  int iStack_1f4;
  long lStack_1f0;
  long lStack_1e8;
  int iStack_1dc;
  int iStack_1d8;
  uint uStack_1d4;
  int *piStack_1d0;
  short *psStack_1c8;
  long lStack_1c0;
  long lStack_1b8;
  long lStack_1b0;
  ulong uStack_1a8;
  uint uStack_19c;
  long lStack_198;
  int iStack_18c;
  uint uStack_188;
  int iStack_184;
  short *psStack_180;
  short *psStack_178;
  long lStack_170;
  uint uStack_164;
  undefined8 uStack_160;
  undefined8 uStack_158;
  int iStack_150;
  int iStack_14c;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  int iStack_128;
  int iStack_124;
  long lStack_120;
  undefined8 uStack_a0;
  long lStack_98;
  long lStack_90;
  long lStack_88;
  long lStack_80;
  undefined1 auStack_78 [4];
  short sStack_74;
  byte abStack_59 [17];
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  cVar5 = *param_2;
  psVar33 = (short *)(long)cVar5;
  puVar15 = auStack_78;
  lVar34 = param_3;
  FUN_108b5759c(puVar15,abStack_59 + 1);
  iVar20 = 0;
  sVar7 = *(short *)(param_3 + 4);
  sVar8 = *(short *)(param_3 + 2);
  uVar28 = (ulong)(uint)(int)sVar8;
  while (0 < (int)uVar28) {
    cVar6 = param_2[uVar28];
    uVar36 = cVar6 * 0x400 - 0x66;
    if (cVar6 < 1) {
      uVar36 = ((int)cVar6 << 10 | 0x66U) & (int)cVar6 >> 0x1f;
    }
    iVar20 = (int)((ulong)uVar36 * (long)sVar7 >> 0x10) +
             ((int)((int)(short)iVar20 * (uint)abStack_59[uVar28]) >> 8);
    *(short *)((long)&uStack_a0 + uVar28 * 2 + 6) = (short)iVar20;
    uVar28 = uVar28 - 1;
  }
  iVar20 = (int)sVar8;
  lVar29 = *(long *)(param_3 + 8);
  lVar27 = *(long *)(param_3 + 0x10);
  for (lVar22 = 0; lVar22 < sVar8; lVar22 = lVar22 + 1) {
    iVar24 = 0;
    iVar19 = (int)*(short *)(lVar27 + (long)iVar20 * (long)(int)cVar5 * 2 + lVar22 * 2);
    if (iVar19 != 0) {
      iVar24 = ((int)*(short *)((long)&lStack_98 + lVar22 * 2) << 0xe) / iVar19;
    }
    uVar36 = iVar24 + (uint)*(byte *)(lVar29 + (long)iVar20 * (long)(int)cVar5 + lVar22) * 0x80;
    uVar36 = uVar36 & ((int)uVar36 >> 0x1f ^ 0xffffffffU);
    if (0x7ffe < (int)uVar36) {
      uVar36 = 0x7fff;
    }
    param_1[lVar22] = (short)uVar36;
    sVar8 = *(short *)(param_3 + 2);
  }
  psVar18 = *(short **)(param_3 + 0x40);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    uVar36 = (uint)sVar8;
    iVar20 = 0;
    lVar34 = (long)(int)uVar36;
    while( true ) {
      if (iVar20 == 0x14) {
        func_0x000108b5b510(param_1,uVar36);
        sVar8 = *param_1;
        if (*param_1 <= *psVar18) {
          sVar8 = *psVar18;
        }
        *param_1 = sVar8;
        psVar33 = param_1;
        for (lVar22 = 1; psVar17 = psVar33 + 1, lVar22 < lVar34; lVar22 = lVar22 + 1) {
          iVar20 = (int)psVar18[lVar22] + (int)*psVar33;
          if (0x7ffe < iVar20) {
            iVar20 = 0x7fff;
          }
          if (iVar20 <= *psVar17) {
            iVar20 = (int)*psVar17;
          }
          if (iVar20 < -0x7fff) {
            iVar20 = -0x8000;
          }
          *psVar17 = (short)iVar20;
          psVar33 = psVar17;
        }
        iVar20 = (int)param_1[(long)(int)uVar36 + -1];
        if (0x8000 - psVar18[lVar34] <= (int)param_1[(long)(int)uVar36 + -1]) {
          iVar20 = 0x8000 - psVar18[lVar34];
        }
        param_1[(long)(int)uVar36 + -1] = (short)iVar20;
        psVar33 = psVar18 + (uVar36 - 1);
        psVar18 = param_1 + (uVar36 - 1);
        for (uVar25 = uVar36 - 2; -1 < (int)uVar25; uVar25 = uVar25 - 1) {
          iVar20 = (int)param_1[uVar25];
          if ((int)*psVar18 - (int)*psVar33 <= (int)param_1[uVar25]) {
            iVar20 = (int)*psVar18 - (int)*psVar33;
          }
          param_1[uVar25] = (short)iVar20;
          psVar33 = psVar33 + -1;
          psVar18 = psVar18 + -1;
        }
        return;
      }
      lVar22 = 0;
      iVar24 = (int)*param_1 - (int)*psVar18;
      uVar25 = 0;
      while (uVar23 = uVar25, iVar19 = iVar24, lVar29 = lVar22 + 1, lVar29 < lVar34) {
        iVar24 = (int)(param_1 + lVar22)[1] - ((int)param_1[lVar22] + (int)psVar18[lVar22 + 1]);
        lVar22 = lVar29;
        uVar25 = (uint)lVar29;
        if (iVar19 <= iVar24) {
          iVar24 = iVar19;
          uVar25 = uVar23;
        }
      }
      iVar24 = (0x8000 - param_1[(long)(int)uVar36 + -1]) - (int)psVar18[lVar34];
      uVar25 = uVar36;
      if (iVar19 <= iVar24) {
        iVar24 = iVar19;
        uVar25 = uVar23;
      }
      if (-1 < iVar24) break;
      if (uVar25 == 0) {
        *param_1 = *psVar18;
      }
      else if (uVar25 == uVar36) {
        param_1[(long)(int)uVar36 + -1] = -0x8000 - psVar18[lVar34];
      }
      else {
        iVar24 = 0;
        psVar33 = psVar18;
        for (uVar28 = (ulong)(uVar25 & ((int)uVar25 >> 0x1f ^ 0xffffffffU)); uVar28 != 0;
            uVar28 = uVar28 - 1) {
          iVar24 = iVar24 + *psVar33;
          psVar33 = psVar33 + 1;
        }
        lVar29 = (long)(int)uVar25;
        iVar19 = 0x8000;
        for (lVar22 = lVar34; lVar29 < lVar22; lVar22 = lVar22 + -1) {
          iVar19 = iVar19 - psVar18[lVar22];
        }
        iVar1 = (int)psVar18[(int)uVar25] >> 1;
        iVar24 = iVar24 + iVar1;
        iVar19 = iVar19 - iVar1;
        psVar33 = param_1 + lVar29;
        iVar21 = ((int)*psVar33 + (int)psVar33[-1] & 1U) + ((int)*psVar33 + (int)psVar33[-1] >> 1);
        iVar38 = iVar24;
        if (iVar24 <= iVar19) {
          iVar38 = iVar19;
        }
        if (iVar19 <= iVar24) {
          iVar24 = iVar19;
        }
        iVar19 = iVar21;
        if (iVar21 <= iVar24) {
          iVar19 = iVar24;
        }
        if (iVar21 <= iVar38) {
          iVar38 = iVar19;
        }
        sVar8 = (short)iVar38 - (short)iVar1;
        psVar33[-1] = sVar8;
        *psVar33 = sVar8 + psVar18[lVar29];
      }
      iVar20 = iVar20 + 1;
    }
    return;
  }
  ___stack_chk_fail();
  lStack_248 = lStack_80;
  lStack_250 = lStack_88;
  lStack_290 = lStack_90;
  lStack_298 = lStack_98;
  lStack_270 = uStack_a0;
  lStack_120 = *(long *)PTR____stack_chk_guard_11034bdc0;
  *(int *)(psVar18 + 0x87a) = (int)*(char *)(lVar34 + 0x22);
  uVar28 = (ulong)*(uint *)(psVar18 + 0x874);
  uVar36 = (uint)*(short *)(&UNK_10df91dbe +
                           (long)*(char *)(lVar34 + 0x1e) * 2 +
                           (long)((int)*(char *)(lVar34 + 0x1d) >> 1) * 4);
  lStack_288 = param_7;
  lStack_280 = param_8;
  lStack_268 = param_6;
  lStack_260 = lVar34;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(int *)(puVar15 + 0x11e8) + *(int *)(puVar15 + 0x11f0))
  ;
  lVar22 = (long)&lStack_2d0 - extraout_x13;
  (*(code *)PTR____chkstk_darwin_11034bd40)
            ((-(extraout_x8 >> 0x1f & 1) & 0xfffffffe00000000 | (extraout_x8 & 0xffffffff) << 1) +
             0xf & 0xfffffffffffffff0);
  lVar29 = ((long)&lStack_2d0 - extraout_x13) - extraout_x8_00;
  (*(code *)PTR____chkstk_darwin_11034bd40)((long)*(int *)(puVar15 + 0x11ec) << 2);
  uStack_278 = (ulong)(extraout_w14 == 4);
  lVar34 = 0;
  *(int *)(psVar18 + 0x878) = (int)extraout_x12;
  piStack_1d0 = (int *)(psVar18 + 0x876);
  *(int *)(psVar18 + 0x876) = (int)extraout_x12;
  psStack_220 = psVar18 + extraout_x12;
  lStack_170 = lVar22;
  lStack_2a0 = lVar22 + 8;
  uStack_2c4 = 3;
  if (extraout_w14 != 4) {
    uStack_2c4 = 1;
  }
  lStack_2d0 = (long)sStack_74;
  psVar17 = psVar18 + 0x280;
  psStack_258 = psVar18 + 0x780;
  psStack_178 = psVar18 + 0x840;
  piStack_2a8 = (int *)(psVar18 + 0x79e);
  iStack_1f4 = ((uint)(extraout_x15 >> 1) & 0x7fffffff) - 0x200;
  iStack_214 = 0x200 - ((uint)extraout_x15 >> 1);
  uStack_20c = uVar36 - 0x3b0;
  uStack_1d4 = (uint)extraout_x15;
  iStack_1dc = (int)(short)extraout_x15;
  iStack_210 = (short)(0x3b0 - (short)uVar36) * iStack_1dc;
  iStack_1d8 = iStack_1dc * uVar36;
  uStack_204 = uVar36 + 0x3b0;
  iStack_208 = (short)(uVar36 + 0x3b0) * iStack_1dc;
  iStack_218 = uVar36 + 0x50;
  uStack_164 = uVar36;
  iStack_1f8 = uVar36 - 0x50;
  puStack_2b0 = puVar15;
  lStack_2b8 = lVar29;
  psStack_1c8 = psVar17;
  piStack_2c0 = (int *)(lVar29 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0));
  do {
    puVar15 = puStack_2b0;
    lVar22 = lStack_2b8;
    piVar3 = piStack_2c0;
    if (*(int *)(puStack_2b0 + 0x11e4) <= lVar34) {
      *(undefined4 *)(psVar18 + 0x874) =
           *(undefined4 *)(lStack_248 + (long)*(int *)(puStack_2b0 + 0x11e4) * 4 + -4);
      _memmove(psVar18,psVar18 + *(int *)(puStack_2b0 + 0x11e8),
               (long)*(int *)(puStack_2b0 + 0x11f0) << 1);
      _memmove(psVar17,psVar17 + (long)*(int *)(puVar15 + 0x11e8) * 2,
               (long)*(int *)(puVar15 + 0x11f0) << 2);
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_120) {
        return;
      }
LAB_108b53d30:
      ___stack_chk_fail();
      return;
    }
    uVar36 = (uint)lVar34;
    psVar2 = (short *)(lStack_268 + (ulong)(((uint)uStack_278 | uVar36 >> 1) << 4) * 2);
    iVar20 = *(int *)(lStack_270 + lVar34 * 4);
    psVar18[0x87e] = 0;
    psVar18[0x87f] = 0;
    func_0x000108b53d40();
    if (extraout_w8 == 2) {
      uVar25 = *(uint *)(lStack_248 + lVar34 * 4);
      uVar28 = (ulong)uVar25;
      if ((uStack_2c4 & uVar36) != 0) {
        iStack_184 = 2;
        goto LAB_108b5336c;
      }
      iVar24 = (*(int *)(puVar15 + 0x11f0) - *(int *)(puVar15 + 0x1220)) - uVar25;
      uVar25 = iVar24 - 2;
      if (uVar25 == 0 || iVar24 < 2) {
LAB_108b53d2c:
        _abort();
        goto LAB_108b53d30;
      }
      FUN_108b599cc(lVar22 + (ulong)uVar25 * 2,psVar18 + (int)(uVar25 + extraout_w13 * uVar36),
                    psVar2,*(int *)(puVar15 + 0x11f0) - uVar25,*(int *)(puVar15 + 0x1220),
                    *(undefined4 *)(puVar15 + 0x13f4));
      psVar18[0x87e] = 1;
      psVar18[0x87f] = 0;
      *(undefined4 *)(psVar18 + 0x876) = *(undefined4 *)(puVar15 + 0x11f0);
      func_0x000108b53d40();
      psVar17 = psStack_1c8;
      uVar26 = extraout_x13_00;
      iVar24 = extraout_w10_00;
    }
    else {
LAB_108b5336c:
      uVar26 = 1;
      iVar24 = extraout_w10;
    }
    psStack_200 = (short *)(lStack_288 + lVar34 * 10);
    lStack_198 = lStack_280 + lVar34 * 0x30;
    uVar36 = iVar20 >> 2;
    iVar1 = *(int *)(lStack_248 + lVar34 * 4);
    iVar21 = *(int *)(lStack_250 + lVar34 * 4);
    iVar19 = iVar21;
    if (iVar21 < 2) {
      iVar19 = 1;
    }
    iVar30 = (int)LZCOUNT(iVar19);
    iVar19 = iVar19 << (ulong)(iVar30 - 1U & 0x1f);
    iVar38 = iVar19 >> 0x10;
    uVar25 = 0;
    if (iVar38 != 0) {
      uVar25 = 0x1fffffff / iVar38;
    }
    uVar25 = (int)((ulong)((long)(int)(-((-((ulong)(uVar25 >> 0xf) & 1) & 0xfffffff800000000 |
                                         ((ulong)uVar25 & 0xffff) << 0x13) * (long)iVar19 &
                                        0xfffffff800000000) >> 0x20) * (long)(int)uVar25) >> 0x10) +
             uVar25 * 0x10000;
    uVar10 = iVar30 - 0xf;
    uVar23 = -0x80000000 >> (uVar10 & 0x1f);
    uVar9 = 0x7fffffff >> (ulong)(uVar10 & 0x1f);
    uVar11 = uVar25;
    if ((int)uVar25 <= (int)uVar23) {
      uVar11 = uVar23;
    }
    if ((int)uVar25 <= (int)uVar9) {
      uVar9 = uVar11;
    }
    uVar25 = (int)uVar25 >> (0xfU - iVar30 & 0x1f);
    if (iVar21 < 0x20000) {
      uVar25 = uVar9 << (ulong)(uVar10 & 0x1f);
    }
    uVar23 = *(uint *)(puVar15 + 0x11ec);
    psVar14 = psVar33;
    piVar37 = piVar3;
    lVar29 = lStack_170;
    for (uVar32 = (ulong)(uVar23 & ((int)uVar23 >> 0x1f ^ 0xffffffffU)); lStack_170 = lVar29,
        uVar32 != 0; uVar32 = uVar32 - 1) {
      *piVar37 = (int)((ulong)((long)(int)*psVar14 * (long)(((int)uVar25 >> 4) + 1 >> 1)) >> 0x10);
      psVar14 = psVar14 + 1;
      piVar37 = piVar37 + 1;
      lVar29 = lStack_170;
    }
    if ((uVar26 & 1) == 0) {
      uVar11 = (uint)((ulong)((long)(int)lStack_2d0 * (long)(int)uVar25) >> 0xe) & 0xfffffffc;
      if (lVar34 != 0) {
        uVar11 = uVar25;
      }
      for (lVar27 = (long)((iVar24 - iVar1) + -2); lVar27 < iVar24; lVar27 = lVar27 + 1) {
        *(int *)(lVar29 + lVar27 * 4) =
             (int)((ulong)((long)(int)*(short *)(lVar22 + lVar27 * 2) * (long)(int)uVar11) >> 0x10);
      }
    }
    iVar19 = *(int *)(psVar18 + 0x87c);
    if (iVar21 != iVar19) {
      iVar20 = -iVar19;
      if (-1 < iVar19) {
        iVar20 = iVar19;
      }
      iVar19 = iVar19 << (ulong)((int)LZCOUNT(iVar20) - 1U & 0x1f);
      iVar24 = -iVar21;
      if (-1 < iVar21) {
        iVar24 = iVar21;
      }
      iVar21 = iVar21 << (ulong)((int)LZCOUNT(iVar24) - 1U & 0x1f);
      iVar38 = iVar21 >> 0x10;
      sVar8 = 0;
      if (iVar38 != 0) {
        sVar8 = (short)(0x1fffffff / iVar38);
      }
      iVar38 = (int)((ulong)((long)(int)sVar8 * (long)iVar19) >> 0x10);
      uVar36 = (int)((ulong)((long)(int)sVar8 *
                            (long)(int)(iVar19 - ((uint)((ulong)((long)iVar38 * (long)iVar21) >>
                                                        0x1d) & 0xfffffff8))) >> 0x10) + iVar38;
      iVar24 = (int)LZCOUNT(iVar20) - (int)LZCOUNT(iVar24);
      iVar20 = (int)uVar36 >> (iVar24 + 0xdU & 0x1f);
      if (0x2f < iVar24 + 0x1dU) {
        iVar20 = 0;
      }
      uVar11 = -iVar24 - 0xd;
      uVar25 = -0x80000000 >> (uVar11 & 0x1f);
      uVar23 = 0x7fffffff >> (ulong)(uVar11 & 0x1f);
      if ((int)uVar25 <= (int)uVar36) {
        uVar25 = uVar36;
      }
      if ((int)uVar36 <= (int)uVar23) {
        uVar23 = uVar25;
      }
      if (iVar24 < -0xd) {
        iVar20 = uVar23 << (ulong)(uVar11 & 0x1f);
      }
      iVar24 = *(int *)(psVar18 + 0x878);
      for (lVar34 = (long)(iVar24 - *(int *)(puVar15 + 0x11f0)); lVar34 < iVar24;
          lVar34 = lVar34 + 1) {
        *(int *)(psVar17 + lVar34 * 2) =
             (int)((ulong)((long)*(int *)(psVar17 + lVar34 * 2) * (long)iVar20) >> 0x10);
        iVar24 = *(int *)(psVar18 + 0x878);
      }
      if (iStack_184 != 2) {
        return;
      }
      if (*(int *)(psVar18 + 0x87e) != 0) {
        return;
      }
      iVar24 = *piStack_1d0;
      for (lVar34 = (long)((iVar24 - iVar1) + -2); lVar34 < iVar24; lVar34 = lVar34 + 1) {
        *(int *)(lVar29 + lVar34 * 4) =
             (int)((ulong)((long)*(int *)(lVar29 + lVar34 * 4) * (long)iVar20) >> 0x10);
      }
      return;
    }
    uVar25 = *(uint *)(lStack_290 + lVar34 * 4);
    uStack_188 = *(uint *)(puVar15 + 0x121c);
    iStack_128 = (int)psVar2[1] << 0xf;
    iStack_124 = (int)*psVar2 << 0xf;
    uVar39 = *(undefined8 *)(psVar2 + 2);
    auVar40._0_4_ = (int)(short)uVar39 << 0xf;
    auVar40._4_4_ = (int)(short)((ulong)uVar39 >> 0x10) << 0xf;
    auVar40._8_4_ = (int)(short)((ulong)uVar39 >> 0x20) << 0xf;
    auVar40._12_4_ = (int)(short)((ulong)uVar39 >> 0x30) << 0xf;
    auVar40 = NEON_rev64(auVar40,4);
    auVar40 = NEON_ext(auVar40,auVar40,8,1);
    uStack_130 = auVar40._8_8_;
    uStack_138 = auVar40._0_8_;
    uVar39 = *(undefined8 *)(psVar2 + 6);
    auVar41._0_4_ = (int)(short)uVar39 << 0xf;
    auVar41._4_4_ = (int)(short)((ulong)uVar39 >> 0x10) << 0xf;
    auVar41._8_4_ = (int)(short)((ulong)uVar39 >> 0x20) << 0xf;
    auVar41._12_4_ = (int)(short)((ulong)uVar39 >> 0x30) << 0xf;
    auVar40 = NEON_rev64(auVar41,4);
    auVar40 = NEON_ext(auVar40,auVar40,8,1);
    uStack_140 = auVar40._8_8_;
    uStack_148 = auVar40._0_8_;
    iStack_18c = *(int *)(puVar15 + 0x1220);
    psStack_230 = psVar33;
    lStack_238 = lVar34;
    if (*(int *)(puVar15 + 0x1220) == 0x10) {
      iStack_14c = (int)psVar2[10] << 0xf;
      iStack_150 = (int)psVar2[0xb] << 0xf;
      uVar39 = *(undefined8 *)(psVar2 + 0xc);
      auVar42._0_4_ = (int)(short)uVar39 << 0xf;
      auVar42._4_4_ = (int)(short)((ulong)uVar39 >> 0x10) << 0xf;
      auVar42._8_4_ = (int)(short)((ulong)uVar39 >> 0x20) << 0xf;
      auVar42._12_4_ = (int)(short)((ulong)uVar39 >> 0x30) << 0xf;
      auVar40 = NEON_rev64(auVar42,4);
      auVar40 = NEON_ext(auVar40,auVar40,8,1);
    }
    else {
      iStack_14c = 0;
      iStack_150 = 0;
      auVar40 = ZEXT216(0);
    }
    iVar19 = (int)uVar28;
    psStack_180 = psVar17 + (long)((*(int *)(psVar18 + 0x878) - iVar19) + 1) * 2;
    uStack_1a8 = (ulong)(uint)(iVar21 >> 6);
    lStack_1b0 = (long)(short)*(undefined4 *)(lStack_298 + lVar34 * 4);
    lStack_1b8 = (long)(short)uVar25;
    lStack_1c0 = (long)((ulong)uVar25 << 0x20) >> 0x30;
    uStack_158 = auVar40._8_8_;
    uStack_160 = auVar40._0_8_;
    lStack_1e8 = (long)(short)uVar36;
    uStack_19c = (uint)(iStack_184 != 2 || 0 < iVar19);
    lStack_1f0 = (long)((ulong)(uVar36 | iVar20 << 0xf) << 0x20) >> 0x30;
    pcStack_228 = param_5;
    piVar37 = (int *)(lStack_2a0 + (long)(iVar24 - iVar19) * 4);
    uStack_23c = uVar23;
    piVar35 = piStack_2a8;
    psVar33 = psStack_220;
    for (uVar26 = (ulong)(uVar23 & ((int)uVar23 >> 0x1f ^ 0xffffffffU)); uVar26 != 0;
        uVar26 = uVar26 - 1) {
      *(int *)(psVar18 + 0x87a) = *(int *)(psVar18 + 0x87a) * 0xbb38435 + 0x3619636b;
      piVar16 = piVar35;
      func_0x000108b62ba0(piVar35,&uStack_160,iStack_18c);
      if (iStack_184 == 2) {
        iVar20 = (int)((long)*piVar37 * (long)(int)*psStack_200 * 0x10000 +
                       (((ulong)((long)piVar37[-1] * (long)(int)psStack_200[1]) >> 0x10) << 0x20) +
                       (((ulong)((long)piVar37[-2] * (long)(int)psStack_200[2]) >> 0x10) << 0x20) +
                       (((ulong)((long)piVar37[-3] * (long)(int)psStack_200[3]) >> 0x10) << 0x20) +
                       0x200000000 >> 0x20) +
                 (int)((ulong)((long)(int)psStack_200[4] * (long)piVar37[-4]) >> 0x10);
        piVar37 = piVar37 + 1;
      }
      else {
        iVar20 = 0;
      }
      if ((uStack_188 & 1) != 0) goto LAB_108b53d2c;
      psVar17 = psVar18 + 0x872;
      func_0x000108b62bec(psVar17,psStack_178,lStack_198);
      if ((uStack_19c & 1) == 0) goto LAB_108b53d2c;
      iVar24 = (int)psVar17 +
               (int)((ulong)((long)(int)lStack_1b0 * (long)*(int *)(psVar18 + 0x870)) >> 0x10);
      iVar1 = (int)((ulong)((long)(int)lStack_1b8 *
                           (long)*(int *)(psStack_1c8 + (long)*(int *)(psVar18 + 0x878) * 2 + -2))
                   >> 0x10) +
              (int)((ulong)((long)*(int *)(psVar18 + 0x870) * (long)(int)lStack_1c0) >> 0x10);
      iVar21 = ((int)piVar16 * 4 - iVar24) - iVar1;
      if (iVar19 < 1) {
        iVar21 = iVar21 >> 1;
      }
      else {
        piVar4 = (int *)(psStack_180 + -2);
        iVar38 = NEON_sqadd(*(undefined4 *)psStack_180,*(undefined4 *)(psStack_180 + -4));
        psStack_180 = psStack_180 + 2;
        iVar21 = iVar20 + iVar21 * 2 +
                 ((int)((ulong)((long)*piVar4 * (long)(int)lStack_1f0) >> 0x10) +
                 (int)((ulong)((long)(int)lStack_1e8 * (long)iVar38) >> 0x10)) * -2 >> 2;
      }
      iVar38 = *piVar3;
      iVar30 = iVar38 - (iVar21 + 1 >> 1);
      iVar21 = -iVar30;
      if (-1 < *(int *)(psVar18 + 0x87a)) {
        iVar21 = iVar30;
      }
      if (iVar21 < -0x7bff) {
        iVar21 = -0x7c00;
      }
      if (0x77ff < iVar21) {
        iVar21 = 0x7800;
      }
      uVar36 = iVar21 - uStack_164;
      if ((int)uStack_1d4 < 0x801) {
LAB_108b539bc:
        uVar36 = (int)uVar36 >> 10;
LAB_108b539c0:
        if ((int)uVar36 < 1) {
          uVar23 = uStack_164;
          uVar25 = uStack_204;
          iVar30 = iStack_1d8;
          iVar31 = iStack_208;
          if ((uVar36 == 0) ||
             (uVar23 = uStack_20c, uVar25 = uStack_164, iVar30 = iStack_210, iVar31 = iStack_1d8,
             uVar36 == 0xffffffff)) goto LAB_108b539f0;
          uVar23 = iStack_218 + uVar36 * 0x400;
          uVar25 = uVar23 + 0x400;
          sVar8 = -(short)uVar23;
          sVar7 = -0x400 - (short)uVar23;
        }
        else {
          uVar23 = iStack_1f8 + uVar36 * 0x400;
          uVar25 = uVar23 + 0x400;
          sVar8 = (short)uVar23;
          sVar7 = (short)uVar25;
        }
        iVar30 = sVar8 * iStack_1dc;
        iVar31 = sVar7 * iStack_1dc;
      }
      else {
        if (uVar36 - iStack_1f4 != 0 && iStack_1f4 <= (int)uVar36) {
          uVar36 = uVar36 - iStack_1f4 >> 10;
          goto LAB_108b539c0;
        }
        if ((int)uVar36 < iStack_214) {
          uVar36 = uVar36 + iStack_1f4;
          goto LAB_108b539bc;
        }
        uVar23 = uStack_20c;
        uVar25 = uStack_164;
        iVar30 = iStack_210;
        iVar31 = iStack_1d8;
        if ((uVar36 & 0x80000000) == 0) {
          uVar23 = uStack_164;
          uVar25 = uStack_204;
          iVar30 = iStack_1d8;
          iVar31 = iStack_208;
        }
      }
LAB_108b539f0:
      iVar12 = (int)(short)((short)iVar21 - (short)uVar23);
      iVar21 = (int)(short)((short)iVar21 - (short)uVar25);
      if (iVar30 + iVar12 * iVar12 <= iVar31 + iVar21 * iVar21) {
        uVar25 = uVar23;
      }
      *param_5 = (char)((uVar25 >> 9) + 1 >> 1);
      iVar21 = uVar25 * -0x10;
      if (-1 < *(int *)(psVar18 + 0x87a)) {
        iVar21 = uVar25 * 0x10;
      }
      iVar21 = iVar21 + iVar20 * 2;
      iVar20 = iVar21 + (int)piVar16 * 0x10;
      iVar30 = ((int)((ulong)((long)(int)uStack_1a8 * (long)iVar20) >> 0x10) >> 7) + 1 >> 1;
      if (iVar30 < -0x7fff) {
        iVar30 = -0x8000;
      }
      if (0x7ffe < iVar30) {
        iVar30 = 0x7fff;
      }
      *psVar33 = (short)iVar30;
      piVar35 = piVar35 + 1;
      *piVar35 = iVar20;
      iVar20 = iVar20 + iVar38 * -0x10;
      *(int *)(psVar18 + 0x872) = iVar20;
      iVar20 = iVar20 + iVar24 * -4;
      *(int *)(psVar18 + 0x870) = iVar20;
      *(int *)(psStack_1c8 + (long)*(int *)(psVar18 + 0x878) * 2) = iVar20 + iVar1 * -4;
      uVar39 = *(undefined8 *)piStack_1d0;
      *(int *)(lStack_170 + (long)*(int *)(psVar18 + 0x876) * 4) = iVar21 * 2;
      *(ulong *)piStack_1d0 = CONCAT44((int)((ulong)uVar39 >> 0x20) + 1,(int)uVar39 + 1);
      *(int *)(psVar18 + 0x87a) = *(int *)(psVar18 + 0x87a) + (int)*param_5;
      piVar3 = piVar3 + 1;
      psVar17 = psStack_1c8;
      param_5 = param_5 + 1;
      psVar33 = psVar33 + 1;
    }
    psVar33 = psStack_258 + (long)(int)uStack_23c * 2;
    uVar39 = *(undefined8 *)psVar33;
    uVar13 = *(undefined8 *)(psVar33 + 4);
    uVar44 = *(undefined8 *)(psVar33 + 0xc);
    uVar43 = *(undefined8 *)(psVar33 + 8);
    uVar45 = *(undefined8 *)(psVar33 + 0x10);
    uVar47 = *(undefined8 *)(psVar33 + 0x1c);
    uVar46 = *(undefined8 *)(psVar33 + 0x18);
    *(undefined8 *)(psStack_258 + 0x14) = *(undefined8 *)(psVar33 + 0x14);
    *(undefined8 *)(psStack_258 + 0x10) = uVar45;
    *(undefined8 *)(psStack_258 + 0x1c) = uVar47;
    *(undefined8 *)(psStack_258 + 0x18) = uVar46;
    *(undefined8 *)(psStack_258 + 4) = uVar13;
    *(undefined8 *)psStack_258 = uVar39;
    *(undefined8 *)(psStack_258 + 0xc) = uVar44;
    *(undefined8 *)(psStack_258 + 8) = uVar43;
    iVar20 = *(int *)(puStack_2b0 + 0x11ec);
    psVar33 = psStack_230 + iVar20;
    param_5 = pcStack_228 + iVar20;
    psStack_220 = psStack_220 + iVar20;
    lVar34 = lStack_238 + 1;
  } while( true );
}



/* Entry: 108b53064; end: 108b53d33;  */

/* WARNING: Possible PIC construction at 0x000108b535d8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000108b535f8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000108b535dc) */
/* WARNING: Removing unreachable block (ram,0x000108b535fc) */
/* WARNING: Removing unreachable block (ram,0x000108b535ec) */
/* WARNING: Removing unreachable block (ram,0x000108b53608) */
/* WARNING: Removing unreachable block (ram,0x000108b5360c) */
/* WARNING: Removing unreachable block (ram,0x000108b5362c) */
/* WARNING: Removing unreachable block (ram,0x000108b53614) */
/* WARNING: Removing unreachable block (ram,0x000108b535f4) */

void FUN_108b53064(long param_1,long param_2,long param_3,short *param_4,char *param_5,long param_6,
                  long param_7,long param_8,long param_9,long param_10,long param_11,long param_12,
                  long param_13,undefined4 param_14,short param_15)

{
  short *psVar1;
  undefined8 *puVar2;
  int *piVar3;
  int *piVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  short sVar9;
  short sVar10;
  int iVar11;
  undefined8 uVar12;
  short *psVar13;
  long lVar14;
  undefined2 *puVar15;
  int *piVar16;
  long lVar17;
  long lVar18;
  int iVar19;
  ulong uVar20;
  int extraout_w8;
  ulong extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  int extraout_w10;
  int iVar21;
  int extraout_w10_00;
  uint uVar22;
  long extraout_x12;
  int extraout_w13;
  int iVar23;
  uint uVar24;
  long extraout_x13;
  ulong uVar25;
  ulong extraout_x13_00;
  int extraout_w14;
  long lVar26;
  int iVar27;
  int iVar28;
  ulong extraout_x15;
  ulong uVar29;
  int iVar30;
  long lVar31;
  int *piVar32;
  uint uVar33;
  long lVar34;
  int *piVar35;
  int iVar36;
  undefined8 uVar37;
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined8 uVar41;
  undefined8 uVar42;
  undefined8 uVar43;
  undefined8 uVar44;
  undefined8 uVar45;
  long lStack_230;
  uint uStack_224;
  int *piStack_220;
  long lStack_218;
  long lStack_210;
  int *piStack_208;
  long lStack_200;
  long lStack_1f8;
  long lStack_1f0;
  long lStack_1e8;
  long lStack_1e0;
  ulong uStack_1d8;
  long lStack_1d0;
  long lStack_1c8;
  long lStack_1c0;
  undefined8 *puStack_1b8;
  long lStack_1b0;
  long lStack_1a8;
  uint uStack_19c;
  long lStack_198;
  short *psStack_190;
  char *pcStack_188;
  undefined2 *puStack_180;
  int iStack_178;
  int iStack_174;
  int iStack_170;
  uint uStack_16c;
  int iStack_168;
  uint uStack_164;
  short *psStack_160;
  int iStack_158;
  int iStack_154;
  long lStack_150;
  long lStack_148;
  int iStack_13c;
  int iStack_138;
  uint uStack_134;
  int *piStack_130;
  long lStack_128;
  long lStack_120;
  long lStack_118;
  long lStack_110;
  ulong uStack_108;
  uint uStack_fc;
  long lStack_f8;
  int iStack_ec;
  uint uStack_e8;
  int iStack_e4;
  undefined4 *puStack_e0;
  long lStack_d8;
  long lStack_d0;
  uint uStack_c4;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  int iStack_b0;
  int iStack_ac;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  int iStack_88;
  int iStack_84;
  long lStack_80;
  
  lStack_1a8 = param_13;
  lStack_1b0 = param_12;
  lStack_1f0 = param_11;
  lStack_1f8 = param_10;
  lStack_1d0 = param_9;
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  *(int *)(param_2 + 0x10f4) = (int)*(char *)(param_3 + 0x22);
  uVar20 = (ulong)*(uint *)(param_2 + 0x10e8);
  uVar33 = (uint)*(short *)(&UNK_10df91dbe +
                           (long)*(char *)(param_3 + 0x1e) * 2 +
                           (long)((int)*(char *)(param_3 + 0x1d) >> 1) * 4);
  lStack_1e8 = param_7;
  lStack_1e0 = param_8;
  lStack_1c8 = param_6;
  lStack_1c0 = param_3;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(int *)(param_1 + 0x11e8) + *(int *)(param_1 + 0x11f0))
  ;
  lVar17 = (long)&lStack_230 - extraout_x13;
  (*(code *)PTR____chkstk_darwin_11034bd40)
            ((-(extraout_x8 >> 0x1f & 1) & 0xfffffffe00000000 | (extraout_x8 & 0xffffffff) << 1) +
             0xf & 0xfffffffffffffff0);
  lVar31 = ((long)&lStack_230 - extraout_x13) - extraout_x8_00;
  (*(code *)PTR____chkstk_darwin_11034bd40)((long)*(int *)(param_1 + 0x11ec) << 2);
  piStack_220 = (int *)(lVar31 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0));
  uStack_1d8 = (ulong)(extraout_w14 == 4);
  lVar34 = 0;
  *(int *)(param_2 + 0x10f0) = (int)extraout_x12;
  piStack_130 = (int *)(param_2 + 0x10ec);
  *(int *)(param_2 + 0x10ec) = (int)extraout_x12;
  puStack_180 = (undefined2 *)(param_2 + extraout_x12 * 2);
  lStack_200 = lVar17 + 8;
  uStack_224 = 3;
  if (extraout_w14 != 4) {
    uStack_224 = 1;
  }
  lStack_230 = (long)param_15;
  lVar18 = param_2 + 0x500;
  puStack_1b8 = (undefined8 *)(param_2 + 0xf00);
  lStack_d8 = param_2 + 0x1080;
  piStack_208 = (int *)(param_2 + 0xf3c);
  iStack_154 = ((uint)(extraout_x15 >> 1) & 0x7fffffff) - 0x200;
  uStack_134 = (uint)extraout_x15;
  iStack_174 = 0x200 - (uStack_134 >> 1);
  uStack_16c = uVar33 - 0x3b0;
  iStack_13c = (int)(short)extraout_x15;
  iStack_170 = (short)(0x3b0 - (short)uVar33) * iStack_13c;
  iStack_138 = iStack_13c * uVar33;
  uStack_164 = uVar33 + 0x3b0;
  iStack_168 = (short)uStack_164 * iStack_13c;
  iStack_178 = uVar33 + 0x50;
  iStack_158 = uVar33 - 0x50;
  lStack_218 = lVar31;
  lStack_210 = param_1;
  lStack_128 = lVar18;
  lStack_d0 = lVar17;
  uStack_c4 = uVar33;
  do {
    lVar31 = lStack_210;
    lVar17 = lStack_218;
    piVar3 = piStack_220;
    if (*(int *)(lStack_210 + 0x11e4) <= lVar34) {
      *(undefined4 *)(param_2 + 0x10e8) =
           *(undefined4 *)(lStack_1a8 + (long)*(int *)(lStack_210 + 0x11e4) * 4 + -4);
      _memmove(param_2,param_2 + (long)*(int *)(lStack_210 + 0x11e8) * 2,
               (long)*(int *)(lStack_210 + 0x11f0) << 1);
      _memmove(lVar18,lVar18 + (long)*(int *)(lVar31 + 0x11e8) * 4,
               (long)*(int *)(lVar31 + 0x11f0) << 2);
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
        return;
      }
LAB_108b53d30:
      ___stack_chk_fail();
      return;
    }
    uVar33 = (uint)lVar34;
    psVar1 = (short *)(lStack_1c8 + (ulong)(((uint)uStack_1d8 | uVar33 >> 1) << 4) * 2);
    iVar30 = *(int *)(lStack_1d0 + lVar34 * 4);
    *(undefined4 *)(param_2 + 0x10fc) = 0;
    func_0x000108b53d40();
    if (extraout_w8 == 2) {
      uVar24 = *(uint *)(lStack_1a8 + lVar34 * 4);
      uVar20 = (ulong)uVar24;
      if ((uStack_224 & uVar33) != 0) {
        iStack_e4 = 2;
        goto LAB_108b5336c;
      }
      iVar23 = (*(int *)(lVar31 + 0x11f0) - *(int *)(lVar31 + 0x1220)) - uVar24;
      uVar24 = iVar23 - 2;
      if (uVar24 == 0 || iVar23 < 2) {
LAB_108b53d2c:
        _abort();
        goto LAB_108b53d30;
      }
      FUN_108b599cc(lVar17 + (ulong)uVar24 * 2,
                    param_2 + (long)(int)(uVar24 + extraout_w13 * uVar33) * 2,psVar1,
                    *(int *)(lVar31 + 0x11f0) - uVar24,*(int *)(lVar31 + 0x1220),
                    *(undefined4 *)(lVar31 + 0x13f4));
      *(undefined4 *)(param_2 + 0x10fc) = 1;
      *(undefined4 *)(param_2 + 0x10ec) = *(undefined4 *)(lVar31 + 0x11f0);
      func_0x000108b53d40();
      lVar18 = lStack_128;
      uVar25 = extraout_x13_00;
      iVar23 = extraout_w10_00;
    }
    else {
LAB_108b5336c:
      uVar25 = 1;
      iVar23 = extraout_w10;
    }
    psStack_160 = (short *)(lStack_1e8 + lVar34 * 10);
    lStack_f8 = lStack_1e0 + lVar34 * 0x30;
    uVar33 = iVar30 >> 2;
    iVar5 = *(int *)(lStack_1a8 + lVar34 * 4);
    iVar21 = *(int *)(lStack_1b0 + lVar34 * 4);
    iVar19 = iVar21;
    if (iVar21 < 2) {
      iVar19 = 1;
    }
    iVar27 = (int)LZCOUNT(iVar19);
    iVar19 = iVar19 << (ulong)(iVar27 - 1U & 0x1f);
    iVar36 = iVar19 >> 0x10;
    uVar24 = 0;
    if (iVar36 != 0) {
      uVar24 = 0x1fffffff / iVar36;
    }
    uVar24 = (int)((ulong)((long)(int)(-((-((ulong)(uVar24 >> 0xf) & 1) & 0xfffffff800000000 |
                                         ((ulong)uVar24 & 0xffff) << 0x13) * (long)iVar19 &
                                        0xfffffff800000000) >> 0x20) * (long)(int)uVar24) >> 0x10) +
             uVar24 * 0x10000;
    uVar7 = iVar27 - 0xf;
    uVar22 = -0x80000000 >> (uVar7 & 0x1f);
    uVar6 = 0x7fffffff >> (ulong)(uVar7 & 0x1f);
    uVar8 = uVar24;
    if ((int)uVar24 <= (int)uVar22) {
      uVar8 = uVar22;
    }
    if ((int)uVar24 <= (int)uVar6) {
      uVar6 = uVar8;
    }
    uVar24 = (int)uVar24 >> (0xfU - iVar27 & 0x1f);
    if (iVar21 < 0x20000) {
      uVar24 = uVar6 << (ulong)(uVar7 & 0x1f);
    }
    uVar22 = *(uint *)(lVar31 + 0x11ec);
    psVar13 = param_4;
    piVar35 = piVar3;
    lVar14 = lStack_d0;
    for (uVar29 = (ulong)(uVar22 & ((int)uVar22 >> 0x1f ^ 0xffffffffU)); lStack_d0 = lVar14,
        uVar29 != 0; uVar29 = uVar29 - 1) {
      *piVar35 = (int)((ulong)((long)(int)*psVar13 * (long)(((int)uVar24 >> 4) + 1 >> 1)) >> 0x10);
      psVar13 = psVar13 + 1;
      piVar35 = piVar35 + 1;
      lVar14 = lStack_d0;
    }
    if ((uVar25 & 1) == 0) {
      uVar8 = (uint)((ulong)((long)(int)lStack_230 * (long)(int)uVar24) >> 0xe) & 0xfffffffc;
      if (lVar34 != 0) {
        uVar8 = uVar24;
      }
      for (lVar26 = (long)((iVar23 - iVar5) + -2); lVar26 < iVar23; lVar26 = lVar26 + 1) {
        *(int *)(lVar14 + lVar26 * 4) =
             (int)((ulong)((long)(int)*(short *)(lVar17 + lVar26 * 2) * (long)(int)uVar8) >> 0x10);
      }
    }
    iVar19 = *(int *)(param_2 + 0x10f8);
    if (iVar21 != iVar19) {
      iVar30 = -iVar19;
      if (-1 < iVar19) {
        iVar30 = iVar19;
      }
      iVar19 = iVar19 << (ulong)((int)LZCOUNT(iVar30) - 1U & 0x1f);
      iVar23 = -iVar21;
      if (-1 < iVar21) {
        iVar23 = iVar21;
      }
      iVar21 = iVar21 << (ulong)((int)LZCOUNT(iVar23) - 1U & 0x1f);
      iVar36 = iVar21 >> 0x10;
      sVar9 = 0;
      if (iVar36 != 0) {
        sVar9 = (short)(0x1fffffff / iVar36);
      }
      iVar36 = (int)((ulong)((long)(int)sVar9 * (long)iVar19) >> 0x10);
      uVar33 = (int)((ulong)((long)(int)sVar9 *
                            (long)(int)(iVar19 - ((uint)((ulong)((long)iVar36 * (long)iVar21) >>
                                                        0x1d) & 0xfffffff8))) >> 0x10) + iVar36;
      iVar23 = (int)LZCOUNT(iVar30) - (int)LZCOUNT(iVar23);
      iVar30 = (int)uVar33 >> (iVar23 + 0xdU & 0x1f);
      if (0x2f < iVar23 + 0x1dU) {
        iVar30 = 0;
      }
      uVar8 = -iVar23 - 0xd;
      uVar24 = -0x80000000 >> (uVar8 & 0x1f);
      uVar22 = 0x7fffffff >> (ulong)(uVar8 & 0x1f);
      if ((int)uVar24 <= (int)uVar33) {
        uVar24 = uVar33;
      }
      if ((int)uVar33 <= (int)uVar22) {
        uVar22 = uVar24;
      }
      if (iVar23 < -0xd) {
        iVar30 = uVar22 << (ulong)(uVar8 & 0x1f);
      }
      iVar23 = *(int *)(param_2 + 0x10f0);
      for (lVar34 = (long)(iVar23 - *(int *)(lVar31 + 0x11f0)); lVar34 < iVar23; lVar34 = lVar34 + 1
          ) {
        *(int *)(lVar18 + lVar34 * 4) =
             (int)((ulong)((long)*(int *)(lVar18 + lVar34 * 4) * (long)iVar30) >> 0x10);
        iVar23 = *(int *)(param_2 + 0x10f0);
      }
      if (iStack_e4 != 2) {
        return;
      }
      if (*(int *)(param_2 + 0x10fc) != 0) {
        return;
      }
      iVar23 = *piStack_130;
      for (lVar34 = (long)((iVar23 - iVar5) + -2); lVar34 < iVar23; lVar34 = lVar34 + 1) {
        *(int *)(lVar14 + lVar34 * 4) =
             (int)((ulong)((long)*(int *)(lVar14 + lVar34 * 4) * (long)iVar30) >> 0x10);
      }
      return;
    }
    uVar24 = *(uint *)(lStack_1f0 + lVar34 * 4);
    uStack_e8 = *(uint *)(lVar31 + 0x121c);
    iStack_ec = *(int *)(lVar31 + 0x1220);
    iStack_84 = (int)*psVar1 << 0xf;
    iStack_88 = (int)psVar1[1] << 0xf;
    uVar37 = *(undefined8 *)(psVar1 + 2);
    auVar38._0_4_ = (int)(short)uVar37 << 0xf;
    auVar38._4_4_ = (int)(short)((ulong)uVar37 >> 0x10) << 0xf;
    auVar38._8_4_ = (int)(short)((ulong)uVar37 >> 0x20) << 0xf;
    auVar38._12_4_ = (int)(short)((ulong)uVar37 >> 0x30) << 0xf;
    auVar38 = NEON_rev64(auVar38,4);
    auVar38 = NEON_ext(auVar38,auVar38,8,1);
    uStack_90 = auVar38._8_8_;
    uStack_98 = auVar38._0_8_;
    uVar37 = *(undefined8 *)(psVar1 + 6);
    auVar39._0_4_ = (int)(short)uVar37 << 0xf;
    auVar39._4_4_ = (int)(short)((ulong)uVar37 >> 0x10) << 0xf;
    auVar39._8_4_ = (int)(short)((ulong)uVar37 >> 0x20) << 0xf;
    auVar39._12_4_ = (int)(short)((ulong)uVar37 >> 0x30) << 0xf;
    auVar38 = NEON_rev64(auVar39,4);
    auVar38 = NEON_ext(auVar38,auVar38,8,1);
    uStack_a0 = auVar38._8_8_;
    uStack_a8 = auVar38._0_8_;
    if (iStack_ec == 0x10) {
      iStack_ac = (int)psVar1[10] << 0xf;
      iStack_b0 = (int)psVar1[0xb] << 0xf;
      uVar37 = *(undefined8 *)(psVar1 + 0xc);
      auVar40._0_4_ = (int)(short)uVar37 << 0xf;
      auVar40._4_4_ = (int)(short)((ulong)uVar37 >> 0x10) << 0xf;
      auVar40._8_4_ = (int)(short)((ulong)uVar37 >> 0x20) << 0xf;
      auVar40._12_4_ = (int)(short)((ulong)uVar37 >> 0x30) << 0xf;
      auVar38 = NEON_rev64(auVar40,4);
      auVar38 = NEON_ext(auVar38,auVar38,8,1);
    }
    else {
      iStack_ac = 0;
      iStack_b0 = 0;
      auVar38 = ZEXT216(0);
    }
    iVar19 = (int)uVar20;
    puStack_e0 = (undefined4 *)(lVar18 + (long)((*(int *)(param_2 + 0x10f0) - iVar19) + 1) * 4);
    uStack_108 = (ulong)(uint)(iVar21 >> 6);
    lStack_110 = (long)(short)*(undefined4 *)(lStack_1f8 + lVar34 * 4);
    lStack_118 = (long)(short)uVar24;
    lStack_120 = (long)((ulong)uVar24 << 0x20) >> 0x30;
    uStack_b8 = auVar38._8_8_;
    uStack_c0 = auVar38._0_8_;
    lStack_148 = (long)(short)uVar33;
    uStack_fc = (uint)(iStack_e4 != 2 || 0 < iVar19);
    lStack_150 = (long)((ulong)(uVar33 | iVar30 << 0xf) << 0x20) >> 0x30;
    piVar35 = (int *)(lStack_200 + (long)(iVar23 - iVar19) * 4);
    uStack_19c = uVar22;
    pcStack_188 = param_5;
    psStack_190 = param_4;
    lStack_198 = lVar34;
    piVar32 = piStack_208;
    puVar15 = puStack_180;
    for (uVar25 = (ulong)(uVar22 & ((int)uVar22 >> 0x1f ^ 0xffffffffU)); uVar25 != 0;
        uVar25 = uVar25 - 1) {
      *(int *)(param_2 + 0x10f4) = *(int *)(param_2 + 0x10f4) * 0xbb38435 + 0x3619636b;
      piVar16 = piVar32;
      func_0x000108b62ba0(piVar32,&uStack_c0,iStack_ec);
      if (iStack_e4 == 2) {
        iVar30 = (int)((long)*piVar35 * (long)(int)*psStack_160 * 0x10000 +
                       (((ulong)((long)piVar35[-1] * (long)(int)psStack_160[1]) >> 0x10) << 0x20) +
                       (((ulong)((long)piVar35[-2] * (long)(int)psStack_160[2]) >> 0x10) << 0x20) +
                       (((ulong)((long)piVar35[-3] * (long)(int)psStack_160[3]) >> 0x10) << 0x20) +
                       0x200000000 >> 0x20) +
                 (int)((ulong)((long)(int)psStack_160[4] * (long)piVar35[-4]) >> 0x10);
        piVar35 = piVar35 + 1;
      }
      else {
        iVar30 = 0;
      }
      if ((uStack_e8 & 1) != 0) goto LAB_108b53d2c;
      lVar34 = param_2 + 0x10e4;
      func_0x000108b62bec(lVar34,lStack_d8,lStack_f8);
      if ((uStack_fc & 1) == 0) goto LAB_108b53d2c;
      iVar23 = (int)lVar34 +
               (int)((ulong)((long)(int)lStack_110 * (long)*(int *)(param_2 + 0x10e0)) >> 0x10);
      iVar5 = (int)((ulong)((long)(int)lStack_118 *
                           (long)*(int *)(lStack_128 + (long)*(int *)(param_2 + 0x10f0) * 4 + -4))
                   >> 0x10) +
              (int)((ulong)((long)*(int *)(param_2 + 0x10e0) * (long)(int)lStack_120) >> 0x10);
      iVar21 = ((int)piVar16 * 4 - iVar23) - iVar5;
      if (iVar19 < 1) {
        iVar21 = iVar21 >> 1;
      }
      else {
        piVar4 = puStack_e0 + -1;
        iVar36 = NEON_sqadd(*puStack_e0,puStack_e0[-2]);
        puStack_e0 = puStack_e0 + 1;
        iVar21 = iVar30 + iVar21 * 2 +
                 ((int)((ulong)((long)*piVar4 * (long)(int)lStack_150) >> 0x10) +
                 (int)((ulong)((long)(int)lStack_148 * (long)iVar36) >> 0x10)) * -2 >> 2;
      }
      iVar36 = *piVar3;
      iVar27 = iVar36 - (iVar21 + 1 >> 1);
      iVar21 = -iVar27;
      if (-1 < *(int *)(param_2 + 0x10f4)) {
        iVar21 = iVar27;
      }
      if (iVar21 < -0x7bff) {
        iVar21 = -0x7c00;
      }
      if (0x77ff < iVar21) {
        iVar21 = 0x7800;
      }
      uVar33 = iVar21 - uStack_c4;
      if ((int)uStack_134 < 0x801) {
LAB_108b539bc:
        uVar33 = (int)uVar33 >> 10;
LAB_108b539c0:
        if ((int)uVar33 < 1) {
          uVar22 = uStack_c4;
          uVar24 = uStack_164;
          iVar27 = iStack_138;
          iVar28 = iStack_168;
          if ((uVar33 == 0) ||
             (uVar22 = uStack_16c, uVar24 = uStack_c4, iVar27 = iStack_170, iVar28 = iStack_138,
             uVar33 == 0xffffffff)) goto LAB_108b539f0;
          uVar22 = iStack_178 + uVar33 * 0x400;
          uVar24 = uVar22 + 0x400;
          sVar9 = -(short)uVar22;
          sVar10 = -0x400 - (short)uVar22;
        }
        else {
          uVar22 = iStack_158 + uVar33 * 0x400;
          uVar24 = uVar22 + 0x400;
          sVar9 = (short)uVar22;
          sVar10 = (short)uVar24;
        }
        iVar27 = sVar9 * iStack_13c;
        iVar28 = sVar10 * iStack_13c;
      }
      else {
        if (uVar33 - iStack_154 != 0 && iStack_154 <= (int)uVar33) {
          uVar33 = uVar33 - iStack_154 >> 10;
          goto LAB_108b539c0;
        }
        if ((int)uVar33 < iStack_174) {
          uVar33 = uVar33 + iStack_154;
          goto LAB_108b539bc;
        }
        uVar22 = uStack_16c;
        uVar24 = uStack_c4;
        iVar27 = iStack_170;
        iVar28 = iStack_138;
        if ((uVar33 & 0x80000000) == 0) {
          uVar22 = uStack_c4;
          uVar24 = uStack_164;
          iVar27 = iStack_138;
          iVar28 = iStack_168;
        }
      }
LAB_108b539f0:
      iVar11 = (int)(short)((short)iVar21 - (short)uVar22);
      iVar21 = (int)(short)((short)iVar21 - (short)uVar24);
      if (iVar27 + iVar11 * iVar11 <= iVar28 + iVar21 * iVar21) {
        uVar24 = uVar22;
      }
      *param_5 = (char)((uVar24 >> 9) + 1 >> 1);
      iVar21 = uVar24 * -0x10;
      if (-1 < *(int *)(param_2 + 0x10f4)) {
        iVar21 = uVar24 * 0x10;
      }
      iVar21 = iVar21 + iVar30 * 2;
      iVar30 = iVar21 + (int)piVar16 * 0x10;
      iVar27 = ((int)((ulong)((long)(int)uStack_108 * (long)iVar30) >> 0x10) >> 7) + 1 >> 1;
      if (iVar27 < -0x7fff) {
        iVar27 = -0x8000;
      }
      if (0x7ffe < iVar27) {
        iVar27 = 0x7fff;
      }
      *puVar15 = (short)iVar27;
      piVar32 = piVar32 + 1;
      *piVar32 = iVar30;
      iVar30 = iVar30 + iVar36 * -0x10;
      *(int *)(param_2 + 0x10e4) = iVar30;
      iVar30 = iVar30 + iVar23 * -4;
      *(int *)(param_2 + 0x10e0) = iVar30;
      *(int *)(lStack_128 + (long)*(int *)(param_2 + 0x10f0) * 4) = iVar30 + iVar5 * -4;
      uVar37 = *(undefined8 *)piStack_130;
      *(int *)(lStack_d0 + (long)*(int *)(param_2 + 0x10ec) * 4) = iVar21 * 2;
      *(ulong *)piStack_130 = CONCAT44((int)((ulong)uVar37 >> 0x20) + 1,(int)uVar37 + 1);
      *(int *)(param_2 + 0x10f4) = *(int *)(param_2 + 0x10f4) + (int)*param_5;
      piVar3 = piVar3 + 1;
      lVar18 = lStack_128;
      param_5 = param_5 + 1;
      puVar15 = puVar15 + 1;
    }
    puVar2 = (undefined8 *)((long)puStack_1b8 + (long)(int)uStack_19c * 4);
    uVar37 = *puVar2;
    uVar12 = puVar2[1];
    uVar42 = puVar2[3];
    uVar41 = puVar2[2];
    uVar43 = puVar2[4];
    uVar45 = puVar2[7];
    uVar44 = puVar2[6];
    puStack_1b8[5] = puVar2[5];
    puStack_1b8[4] = uVar43;
    puStack_1b8[7] = uVar45;
    puStack_1b8[6] = uVar44;
    puStack_1b8[1] = uVar12;
    *puStack_1b8 = uVar37;
    puStack_1b8[3] = uVar42;
    puStack_1b8[2] = uVar41;
    iVar30 = *(int *)(lStack_210 + 0x11ec);
    param_4 = psStack_190 + iVar30;
    param_5 = pcStack_188 + iVar30;
    puStack_180 = puStack_180 + iVar30;
    lVar34 = lStack_198 + 1;
  } while( true );
}



/* Entry: 108b53d34; end: 108b53d53;  */

void FUN_108b53d34(void)

{
  return;
}



/* Entry: 108b53d54; end: 108b54857;  */

void FUN_108b53d54(long param_1,ulong param_2,ulong param_3,long param_4,long param_5,long param_6,
                  long param_7,long param_8,long param_9,long param_10,long param_11,long param_12,
                  int *param_13,undefined4 param_14,short param_15)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  short sVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  undefined2 *puVar14;
  undefined1 *puVar15;
  ulong uVar16;
  undefined1 uVar17;
  bool bVar18;
  int iVar19;
  undefined8 *puVar20;
  short *psVar21;
  long lVar22;
  uint uVar23;
  undefined8 *puVar24;
  uint uVar25;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long lVar26;
  long lVar27;
  long extraout_x8_02;
  int *piVar28;
  undefined8 *puVar29;
  long lVar30;
  ulong uVar31;
  undefined4 *puVar32;
  int iVar33;
  int *piVar34;
  short extraout_w12;
  uint extraout_w12_00;
  char cVar35;
  short extraout_w13;
  long extraout_x13;
  int *piVar36;
  int extraout_w14;
  long lVar37;
  undefined8 *puVar38;
  long extraout_x14;
  uint uVar39;
  int extraout_w15;
  int iVar40;
  int iVar41;
  long extraout_x15;
  int iVar42;
  undefined8 uVar43;
  int iVar44;
  ulong uVar45;
  long lVar46;
  ulong uVar47;
  int *piVar48;
  ulong uVar49;
  long lVar50;
  long lVar51;
  ulong uVar52;
  int iVar53;
  undefined4 uVar54;
  int iVar55;
  int iVar56;
  int iVar57;
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  undefined8 uVar61;
  undefined8 uVar62;
  undefined8 uVar63;
  undefined8 uVar64;
  undefined8 uVar65;
  undefined8 uVar66;
  undefined8 unaff_d8;
  undefined8 unaff_d9;
  ulong auStack_420 [14];
  int aiStack_3b0 [2];
  ulong auStack_3a8 [3];
  int aiStack_390 [2];
  ulong auStack_388 [6];
  int aiStack_358 [10];
  long alStack_330 [4];
  int iStack_30c;
  long alStack_308 [2];
  int aiStack_2f8 [2];
  ulong auStack_2f0 [4];
  int iStack_2cc;
  long lStack_2c8;
  undefined8 auStack_2c0 [2];
  int aiStack_2b0 [2];
  undefined8 auStack_2a8 [4];
  int aiStack_288 [2];
  long alStack_280 [7];
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined1 auStack_228 [8];
  undefined8 uStack_220;
  uint auStack_218 [2];
  long lStack_210;
  undefined8 auStack_208 [4];
  int aiStack_1e8 [14];
  undefined8 uStack_1b0;
  uint auStack_1a8 [18];
  undefined8 *puStack_160;
  long lStack_158;
  long lStack_150;
  int iStack_144;
  int *piStack_140;
  int *piStack_138;
  undefined8 *puStack_130;
  uint uStack_124;
  long lStack_120;
  uint uStack_114;
  undefined8 *puStack_110;
  int iStack_104;
  long lStack_100;
  long lStack_f8;
  undefined4 uStack_ec;
  long lStack_e8;
  long lStack_e0;
  ulong uStack_d8;
  long lStack_d0;
  long lStack_c8;
  long lStack_c0;
  undefined8 *puStack_b8;
  long lStack_b0;
  int *piStack_a8;
  int iStack_9c;
  ulong uStack_98;
  long lStack_90;
  ulong uStack_88;
  long lStack_80;
  int iStack_74;
  undefined8 uStack_70;
  
  uStack_ec = param_14;
  piStack_a8 = param_13;
  lStack_c0 = param_12;
  lStack_100 = param_10;
  lStack_f8 = param_11;
  lStack_d0 = param_9;
  uStack_70 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  iStack_9c = *(int *)(param_2 + 0x10e8);
  uVar25 = *(uint *)(param_1 + 0x1214);
  lVar26 = param_4;
  lStack_e8 = param_7;
  lStack_e0 = param_8;
  lStack_c8 = param_6;
  lStack_90 = param_5;
  uStack_88 = param_3;
  lStack_80 = param_1;
  (*(code *)PTR____chkstk_darwin_11034bd40)((long)(int)uVar25 * 0x514 + 0xfU & 0xfffffffffffffff0);
  lVar22 = -extraout_x8;
  puVar29 = (undefined8 *)((long)&puStack_160 + lVar22);
  _bzero(puVar29);
  uVar52 = param_2 + 0x500;
  puStack_160 = (undefined8 *)(param_2 + 0xf00);
  uVar49 = (ulong)(uVar25 & ((int)uVar25 >> 0x1f ^ 0xffffffffU));
  puVar20 = puVar29;
  for (uVar45 = 0; uVar49 != uVar45; uVar45 = uVar45 + 1) {
    uVar25 = (int)uVar45 + (uint)*(byte *)(uStack_88 + 0x22) & 3;
    *(uint *)(puVar20 + 0xa1) = uVar25;
    *(uint *)((long)puVar20 + 0x50c) = uVar25;
    *(undefined4 *)(puVar20 + 0xa2) = 0;
    puVar20[0xa0] = *(undefined8 *)(param_2 + 0x10e0);
    *(undefined4 *)(puVar20 + 0x80) =
         *(undefined4 *)(uVar52 + (long)*(int *)(lStack_80 + 0x11f0) * 4 + -4);
    uVar43 = *puStack_160;
    uVar62 = *(undefined8 *)(param_2 + 0xf18);
    uVar61 = *(undefined8 *)(param_2 + 0xf10);
    puVar20[1] = *(undefined8 *)(param_2 + 0xf08);
    *puVar20 = uVar43;
    puVar20[3] = uVar62;
    puVar20[2] = uVar61;
    uVar43 = *(undefined8 *)(param_2 + 0xf20);
    uVar62 = *(undefined8 *)(param_2 + 0xf38);
    uVar61 = *(undefined8 *)(param_2 + 0xf30);
    puVar20[5] = *(undefined8 *)(param_2 + 0xf28);
    puVar20[4] = uVar43;
    puVar20[7] = uVar62;
    puVar20[6] = uVar61;
    param_3 = 0x60;
    _memcpy(puVar20 + 0x94,param_2 + 0x1080);
    puVar20 = (undefined8 *)((long)puVar20 + 0x514);
  }
  iStack_104 = (int)*(short *)(&UNK_10df91dbe +
                              (long)*(char *)(uStack_88 + 0x1e) * 2 +
                              (long)((int)((uint)*(byte *)(uStack_88 + 0x1d) << 0x18) >> 0x19) * 4);
  iStack_74 = 0;
  iVar33 = *(int *)(lStack_80 + 0x11ec);
  if (0x27 < iVar33) {
    iVar33 = 0x28;
  }
  if (*(byte *)(uStack_88 + 0x1d) == 2) {
    piVar48 = piStack_a8;
    for (uVar45 = (ulong)(*(uint *)(lStack_80 + 0x11e4) &
                         ((int)*(uint *)(lStack_80 + 0x11e4) >> 0x1f ^ 0xffffffffU)); uVar45 != 0;
        uVar45 = uVar45 - 1) {
      if (*piVar48 + -3 <= iVar33) {
        iVar33 = *piVar48 + -3;
      }
      piVar48 = piVar48 + 1;
    }
  }
  uVar25 = *(int *)(lStack_80 + 0x11e8) + *(int *)(lStack_80 + 0x11f0);
  uVar45 = (-(ulong)(uVar25 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar25 << 2) + 0xf &
           0xfffffffffffffff0;
  lVar27 = lStack_80;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar50 = (long)puVar29 - uVar45;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar46 = lVar50 - extraout_x15;
  (*(code *)PTR____chkstk_darwin_11034bd40)(extraout_x8_00 << 2);
  lVar51 = lVar46 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  uStack_d8 = (ulong)(extraout_w14 == 4);
  puStack_110 = (undefined8 *)(lVar51 + -0xa0);
  uVar47 = 0;
  uStack_98 = param_2 + extraout_x13 * 2;
  uStack_114 = 3;
  if (extraout_w14 != 4) {
    uStack_114 = 1;
  }
  puStack_130 = (undefined8 *)
                (ulong)(extraout_w12_00 & ((int)extraout_w12_00 >> 0x1f ^ 0xffffffffU));
  lStack_120 = (long)param_15;
  piStack_138 = (int *)(&stack0x000008c4 + lVar22);
  puStack_b8 = puVar29;
  lStack_b0 = (long)(int)extraout_w12_00;
  *(int *)(param_2 + 0x10f0) = (int)extraout_x13;
  *(int *)(param_2 + 0x10ec) = (int)extraout_x13;
  piStack_140 = (int *)(&stack0x000003b0 + lVar22);
  iStack_144 = -extraout_w12_00;
  lStack_150 = (long)(int)extraout_w12_00 * -2;
  lStack_158 = -(long)(int)extraout_w12_00;
  puVar20 = (undefined8 *)0x0;
  do {
    puVar24 = puVar20;
    lVar22 = lStack_c0;
    iVar57 = (int)param_3;
    uVar43 = 0x514;
    iVar53 = *(int *)(lVar27 + 0x11e4);
    iVar33 = (int)lStack_b0;
    if ((long)iVar53 <= (long)puVar24) {
      uVar25 = 0;
      piVar48 = (int *)((long)puStack_b8 + 0xa24);
      lVar26 = 0x1080;
      iVar57 = *(int *)(puStack_b8 + 0xa2);
      for (lVar22 = 1; uVar17 = lVar22 == *(int *)(lVar27 + 0x1214),
          lVar22 < *(int *)(lVar27 + 0x1214); lVar22 = lVar22 + 1) {
        iVar55 = *piVar48;
        uVar23 = (uint)lVar22;
        if (iVar57 <= *piVar48) {
          iVar55 = iVar57;
          uVar23 = uVar25;
        }
        uVar25 = uVar23;
        piVar48 = piVar48 + 0x145;
        iVar57 = iVar55;
      }
      lVar22 = (long)puStack_b8 + (ulong)uVar25 * 0x514;
      *(char *)(uStack_88 + 0x22) = (char)*(undefined4 *)(lVar22 + 0x50c);
      uVar25 = iStack_74 + iVar33;
      iVar53 = *(int *)(lStack_c0 + (long)iVar53 * 4 + -4);
      iVar33 = -iVar33;
      puVar14 = (undefined2 *)(uStack_98 + lStack_b0 * -2);
      puVar15 = (undefined1 *)(lStack_90 - lStack_b0);
      for (puVar24 = puStack_130; puVar24 != (undefined8 *)0x0;
          puVar24 = (undefined8 *)((long)puVar24 + -1)) {
        uVar23 = (int)(uVar25 - 1) % 0x28;
        uVar25 = uVar23 + 0x28;
        if (-1 < (int)uVar23) {
          uVar25 = uVar23;
        }
        *puVar15 = (char)((*(uint *)(lVar22 + 0x220 + (ulong)uVar25 * 4) >> 9) + 1 >> 1);
        iVar57 = ((int)((ulong)((long)*(int *)(lVar22 + 0x2c0 + (ulong)uVar25 * 4) *
                               (long)(iVar53 >> 6)) >> 0x10) >> 7) + 1 >> 1;
        if (iVar57 < -0x7fff) {
          iVar57 = -0x8000;
        }
        uVar17 = iVar57 == 0x7fff;
        if (0x7ffe < iVar57) {
          iVar57 = 0x7fff;
        }
        *puVar14 = (short)iVar57;
        *(undefined4 *)(uVar52 + (long)(iVar33 + *(int *)(param_2 + 0x10f0)) * 4) =
             *(undefined4 *)(lVar22 + 0x400 + (ulong)uVar25 * 4);
        iVar33 = iVar33 + 1;
        puVar14 = puVar14 + 1;
        puVar15 = puVar15 + 1;
      }
      puVar20 = (undefined8 *)(lVar22 + (long)*(int *)(lVar27 + 0x11ec) * 4);
      uVar61 = *puVar20;
      uVar63 = puVar20[3];
      uVar62 = puVar20[2];
      puStack_160[1] = puVar20[1];
      *puStack_160 = uVar61;
      puStack_160[3] = uVar63;
      puStack_160[2] = uVar62;
      uVar61 = puVar20[4];
      uVar63 = puVar20[7];
      uVar62 = puVar20[6];
      puStack_160[5] = puVar20[5];
      puStack_160[4] = uVar61;
      puStack_160[7] = uVar63;
      puStack_160[6] = uVar62;
      puVar38 = puStack_160;
      lVar30 = lVar27;
      _memcpy(param_2 + 0x1080,lVar22 + 0x4a0,0x60);
      *(undefined8 *)(param_2 + 0x10e0) = *(undefined8 *)(lVar22 + 0x500);
      *(int *)(param_2 + 0x10e8) = piStack_a8[(long)*(int *)(lVar27 + 0x11e4) + -1];
      _memmove(param_2,param_2 + (long)*(int *)(lVar27 + 0x11e8) * 2,
               (long)*(int *)(lVar27 + 0x11f0) << 1);
      puVar20 = (undefined8 *)(uVar52 + (long)*(int *)(lVar27 + 0x11e8) * 4);
      iVar57 = *(int *)(lVar27 + 0x11f0) << 2;
      uVar45 = uVar52;
      _memmove();
      FUN_108b55448(uStack_70);
      if ((bool)uVar17) {
        return;
      }
LAB_108b54854:
      ___stack_chk_fail();
      *(undefined8 *)(lVar51 + -0x110) = unaff_d9;
      *(undefined8 *)(lVar51 + -0x108) = unaff_d8;
      *(long *)(lVar51 + -0x100) = param_4;
      *(long *)(lVar51 + -0xf8) = lVar51;
      *(long *)(lVar51 + -0xf0) = lVar50;
      *(ulong *)(lVar51 + -0xe8) = uVar49;
      *(undefined8 **)(lVar51 + -0xe0) = puVar29;
      *(ulong *)(lVar51 + -0xd8) = uVar47;
      *(long *)(lVar51 + -0xd0) = lVar27;
      *(ulong *)(lVar51 + -200) = uVar52;
      *(ulong *)(lVar51 + -0xc0) = param_2;
      *(long *)(lVar51 + -0xb8) = lVar22;
      *(undefined1 **)(lVar51 + -0xb0) = &stack0xfffffffffffffff0;
      *(code **)(lVar51 + -0xa8) = FUN_108b54858;
      *(undefined8 *)(lVar51 + -0x210) = uVar43;
      *(long *)(lVar51 + -0x2a0) = lVar30;
      *(undefined8 **)(lVar51 + -0x2a8) = puVar38;
      *(long *)(lVar51 + -0x1a0) = lVar26;
      *(int *)(lVar51 + -0x22c) = iVar57;
      uVar25 = *(uint *)(lVar51 + -0x58);
      uVar52 = (ulong)uVar25;
      *(undefined8 *)(lVar51 + -0x120) = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
      if ((int)uVar25 < 1) {
LAB_108b55440:
        _abort();
      }
      else {
        *(ulong *)(lVar51 + -0x208) = (ulong)*(uint *)(lVar51 + -0x48);
        piVar48 = *(int **)(lVar51 + -0x50);
        iVar33 = *(int *)(lVar51 + -0x60);
        *(ulong *)(lVar51 + -400) = (ulong)*(uint *)(lVar51 + -100);
        *(ulong *)(lVar51 + -0x2c0) = (ulong)*(uint *)(lVar51 + -0x6c);
        *(undefined4 *)(lVar51 + -0x16c) = *(undefined4 *)(lVar51 + -0x70);
        *(undefined4 *)(lVar51 + -0x194) = *(undefined4 *)(lVar51 + -0x74);
        iVar53 = *(int *)(lVar51 + -0x88);
        *(undefined8 *)(lVar51 + -0x168) = *(undefined8 *)(lVar51 + -0x90);
        uVar49 = uVar52 * 0x40 + (ulong)uVar25 * -8 + 0xf & 0xfffffffffffffff0;
        *(undefined8 *)(lVar51 + -0x298) = *(undefined8 *)(lVar51 + -0x98);
        psVar21 = *(short **)(lVar51 + -0xa0);
        (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined4 *)(lVar51 + -0x7c));
        *(ulong *)(lVar51 + -0x178) = (lVar51 + -0x2c0) - uVar49;
        iVar57 = *(int *)(uVar45 + 0x10f0);
        *(ulong *)(lVar51 + -0x2b8) = uVar45 + 0x500;
        iVar55 = *(int *)(uVar45 + 0x10ec);
        *(int *)(lVar51 + -0x230) = iVar53;
        sVar7 = *psVar21;
        *(int *)(lVar51 + -0x128) = (int)psVar21[1] << 0xf;
        *(int *)(lVar51 + -0x124) = (int)sVar7 << 0xf;
        uVar43 = *(undefined8 *)(psVar21 + 2);
        auVar58._0_4_ = (int)(short)uVar43 << 0xf;
        auVar58._4_4_ = (int)(short)((ulong)uVar43 >> 0x10) << 0xf;
        auVar58._8_4_ = (int)(short)((ulong)uVar43 >> 0x20) << 0xf;
        auVar58._12_4_ = (int)(short)((ulong)uVar43 >> 0x30) << 0xf;
        auVar58 = NEON_rev64(auVar58,4);
        auVar58 = NEON_ext(auVar58,auVar58,8,1);
        *(long *)(lVar51 + -0x130) = auVar58._8_8_;
        *(long *)(lVar51 + -0x138) = auVar58._0_8_;
        uVar43 = *(undefined8 *)(psVar21 + 6);
        auVar59._0_4_ = (int)(short)uVar43 << 0xf;
        auVar59._4_4_ = (int)(short)((ulong)uVar43 >> 0x10) << 0xf;
        auVar59._8_4_ = (int)(short)((ulong)uVar43 >> 0x20) << 0xf;
        auVar59._12_4_ = (int)(short)((ulong)uVar43 >> 0x30) << 0xf;
        auVar58 = NEON_rev64(auVar59,4);
        auVar58 = NEON_ext(auVar58,auVar58,8,1);
        *(long *)(lVar51 + -0x140) = auVar58._8_8_;
        *(long *)(lVar51 + -0x148) = auVar58._0_8_;
        *(int *)(lVar51 + -0x198) = iVar33;
        *(undefined8 **)(lVar51 + -0x2b0) = puVar24;
        *(ulong *)(lVar51 + -0x220) = uVar45 + 0x500 + (long)((iVar57 - iVar53) + 1) * 4;
        *(long *)(lVar51 + -0x238) = (long)puVar24 + (long)(iVar55 - iVar53) * 4 + 8;
        if (iVar33 == 0x10) {
          iVar33 = (int)psVar21[10] << 0xf;
          iVar53 = (int)psVar21[0xb] << 0xf;
          uVar43 = *(undefined8 *)(psVar21 + 0xc);
          auVar60._0_4_ = (int)(short)uVar43 << 0xf;
          auVar60._4_4_ = (int)(short)((ulong)uVar43 >> 0x10) << 0xf;
          auVar60._8_4_ = (int)(short)((ulong)uVar43 >> 0x20) << 0xf;
          auVar60._12_4_ = (int)(short)((ulong)uVar43 >> 0x30) << 0xf;
          auVar58 = NEON_rev64(auVar60,4);
          auVar58 = NEON_ext(auVar58,auVar58,8,1);
        }
        else {
          iVar33 = 0;
          iVar53 = 0;
          auVar58 = ZEXT216(0);
        }
        uVar25 = *(uint *)(lVar51 + -0x194);
        *(uint *)(lVar51 + -500) = 0x200 - (uVar25 >> 1);
        *(int *)(lVar51 + -0x24c) = extraout_w15 >> 6;
        iVar40 = (int)*(undefined8 *)(lVar51 + -400);
        *(long *)(lVar51 + -0x1a8) = (long)iVar40 + -1;
        *(long *)(lVar51 + -0x288) = (long)(short)extraout_x14;
        *(uint *)(lVar51 + -0x1dc) = (uVar25 >> 1) - 0x200;
        iVar57 = *(int *)(lVar51 + -0x16c);
        *(int *)(lVar51 + -0x1ec) = iVar57 + -0x3b0;
        iVar55 = (int)(short)uVar25;
        *(int *)(lVar51 + -0x1f0) = (short)(0x3b0 - (short)iVar57) * iVar55;
        *(long *)(lVar51 + -0x290) = (extraout_x14 << 0x20) >> 0x30;
        *(int *)(lVar51 + -0x1d4) = iVar55 * iVar57;
        *(int *)(lVar51 + -0x1e4) = iVar57 + 0x3b0;
        *(int *)(lVar51 + -0x1d8) = iVar55;
        *(int *)(lVar51 + -0x1e8) = (short)(iVar57 + 0x3b0) * iVar55;
        *(int *)(lVar51 + -0x1ac) = iVar40 >> 1;
        *(int *)(lVar51 + -0x1f8) = iVar57 + 0x50;
        *(long *)(lVar51 + -0x1b8) = (long)extraout_w12;
        *(int *)(lVar51 + -0x1e0) = iVar57 + -0x50;
        *(long *)(lVar51 + -0x1c0) = (long)(short)extraout_x8_02;
        *(long *)(lVar51 + -0x1c8) = *(long *)(lVar51 + -0x168) + 4;
        *(long *)(lVar51 + -0x1d0) = (extraout_x8_02 << 0x20) >> 0x30;
        *(long *)(lVar51 + -0x240) = (long)puVar20 + 0x4a4;
        *(long *)(lVar51 + -0x218) = (long)(int)*(undefined8 *)(lVar51 + -0x208);
        *(undefined4 *)(lVar51 + -0x250) = *(undefined4 *)(lVar51 + -0x68);
        *(int *)(lVar51 + -0x150) = iVar53;
        *(int *)(lVar51 + -0x14c) = iVar33;
        *(long *)(lVar51 + -0x158) = auVar58._8_8_;
        *(long *)(lVar51 + -0x160) = auVar58._0_8_;
        lVar22 = *(long *)(lVar51 + -0x178);
        *(long *)(lVar51 + -600) = lVar22 + 0x3c;
        *(undefined8 **)(lVar51 + -0x260) = puVar20 + 0x30;
        *(long *)(lVar51 + -0x268) = lVar22 + 0x20;
        *(long *)(lVar51 + -0x270) = lVar22 + 0x58;
        *(ulong *)(lVar51 + -0x278) = uVar52 * 0x514;
        puVar29 = puVar20 + 8;
        *(long *)(lVar51 + -0x280) = lVar22 + 0xc;
        uVar25 = (uint)*(undefined8 *)(lVar51 + -0x2c0);
        *(ulong *)(lVar51 + -0x228) = (ulong)(uVar25 & ((int)uVar25 >> 0x1f ^ 0xffffffffU));
        *(undefined8 **)(lVar51 + -0x188) = puVar20;
        *(ulong *)(lVar51 + -0x248) = uVar45;
        for (lVar22 = 0; bVar18 = lVar22 == *(long *)(lVar51 + -0x228), !bVar18; lVar22 = lVar22 + 1
            ) {
          if (*(int *)(lVar51 + -0x22c) == 2) {
            piVar36 = *(int **)(lVar51 + -0x238);
            psVar21 = *(short **)(lVar51 + -0x298);
            iVar33 = ((int)((long)*piVar36 * (long)(int)*psVar21 * 0x10000 +
                            (((ulong)((long)piVar36[-1] * (long)(int)psVar21[1]) >> 0x10) << 0x20) +
                            (((ulong)((long)piVar36[-2] * (long)(int)psVar21[2]) >> 0x10) << 0x20) +
                            ((long)piVar36[-3] * (long)(int)psVar21[3] * 0x10000 &
                            0x7fffffff00000000U) + 0x200000000 >> 0x20) +
                     (int)((ulong)((long)(int)psVar21[4] * (long)piVar36[-4]) >> 0x10)) * 2;
            *(int **)(lVar51 + -0x238) = piVar36 + 1;
          }
          else {
            iVar33 = 0;
          }
          *(undefined8 **)(lVar51 + -0x200) = puVar29;
          if (*(int *)(lVar51 + -0x230) < 1) {
            iVar53 = 0;
          }
          else {
            puVar32 = *(undefined4 **)(lVar51 + -0x220);
            iVar53 = NEON_sqadd(*puVar32,puVar32[-2]);
            iVar53 = iVar33 + ((int)((ulong)((long)(int)puVar32[-1] *
                                            (long)(int)*(undefined8 *)(lVar51 + -0x290)) >> 0x10) +
                              (int)((ulong)((long)(int)*(undefined8 *)(lVar51 + -0x288) *
                                           (long)iVar53) >> 0x10)) * -4;
            *(undefined4 **)(lVar51 + -0x220) = puVar32 + 1;
          }
          lVar26 = lVar22 + 0xf;
          piVar36 = *(int **)(lVar51 + -0x240);
          *(long *)(lVar51 + -0x180) = lVar22;
          for (uVar45 = 0; uVar45 != uVar52; uVar45 = uVar45 + 1) {
            *(int *)((long)puVar20 + uVar45 * 0x514 + 0x508) =
                 *(int *)((long)puVar20 + uVar45 * 0x514 + 0x508) * 0xbb38435 + 0x3619636b;
            lVar22 = (long)puVar20 + lVar26 * 4 + uVar45 * 0x514;
            func_0x000108b62ba0(lVar22,lVar51 + -0x160,*(undefined4 *)(lVar51 + -0x198));
            if ((*(ulong *)(lVar51 + -400) & 1) != 0) goto LAB_108b55440;
            piVar28 = (int *)(*(long *)(lVar51 + -0x178) + uVar45 * 0x38);
            iVar19 = (int)lVar22 * 0x10;
            iVar55 = *(int *)((long)puVar20 + uVar45 * 0x514 + 0x4a0);
            iVar57 = *(int *)((long)puVar20 + uVar45 * 0x514 + 0x504) +
                     (int)((ulong)((long)(int)extraout_w13 * (long)iVar55) >> 0x10);
            iVar55 = iVar55 + (int)((ulong)((long)(int)extraout_w13 *
                                           (long)(*(int *)((long)puVar20 + uVar45 * 0x514 + 0x4a4) -
                                                 iVar57)) >> 0x10);
            sVar7 = **(short **)(lVar51 + -0x168);
            *(int *)((long)puVar20 + uVar45 * 0x514 + 0x4a0) = iVar57;
            iVar57 = *(int *)(lVar51 + -0x1ac) +
                     (int)((ulong)((long)(int)sVar7 * (long)iVar57) >> 0x10);
            psVar21 = *(short **)(lVar51 + -0x1c8);
            lVar22 = *(long *)(lVar51 + -0x180);
            piVar34 = piVar36;
            for (lVar27 = 2; lVar27 < iVar40; lVar27 = lVar27 + 2) {
              iVar4 = piVar34[1];
              iVar1 = *piVar34 +
                      (int)((ulong)((long)(int)extraout_w13 * (long)(iVar4 - iVar55)) >> 0x10);
              sVar7 = psVar21[-1];
              lVar46 = (long)iVar55;
              *piVar34 = iVar55;
              piVar34[1] = iVar1;
              piVar34 = piVar34 + 2;
              iVar55 = iVar4 + (int)((ulong)((long)(int)extraout_w13 * (long)(*piVar34 - iVar1)) >>
                                    0x10);
              iVar57 = iVar57 + (int)((ulong)((int)sVar7 * lVar46) >> 0x10) +
                       (int)((ulong)((long)(int)*psVar21 * (long)iVar1) >> 0x10);
              psVar21 = psVar21 + 2;
            }
            lVar27 = *(long *)(lVar51 + -0x1a8);
            *(int *)((long)puVar20 + lVar27 * 4 + uVar45 * 0x514 + 0x4a0) = iVar55;
            iVar1 = *(int *)((long)puVar20 + uVar45 * 0x514 + 0x500);
            iVar57 = ((uint)((ulong)((long)(int)*(undefined8 *)(lVar51 + -0x1b8) * (long)iVar1) >>
                            0xe) & 0xfffffffc) +
                     (iVar57 + (int)((ulong)((long)(int)*(short *)(*(long *)(lVar51 + -0x168) +
                                                                  lVar27 * 2) * (long)iVar55) >>
                                    0x10)) * 8;
            iVar8 = ((int)((ulong)((long)(int)*(undefined8 *)(lVar51 + -0x1c0) *
                                  (long)*(int *)((long)puVar20 +
                                                (long)*piVar48 * 4 + uVar45 * 0x514 + 0x400)) >>
                          0x10) +
                    (int)((ulong)((long)iVar1 * (long)(int)*(undefined8 *)(lVar51 + -0x1d0)) >> 0x10
                         )) * 4;
            uVar54 = NEON_sqadd(iVar57,iVar8);
            iVar55 = NEON_sqsub(iVar19 + iVar53,uVar54);
            iVar4 = *(int *)(*(long *)(lVar51 + -0x1a0) + lVar22 * 4);
            iVar42 = iVar4 - ((iVar55 >> 3) + 1 >> 1);
            iVar1 = *(int *)((long)puVar20 + uVar45 * 0x514 + 0x508);
            iVar55 = -iVar42;
            if (-1 < iVar1) {
              iVar55 = iVar42;
            }
            if (iVar55 < -0x7bff) {
              iVar55 = -0x7c00;
            }
            if (0x77ff < iVar55) {
              iVar55 = 0x7800;
            }
            uVar25 = iVar55 - *(int *)(lVar51 + -0x16c);
            if (*(int *)(lVar51 + -0x194) < 0x801) {
LAB_108b54f14:
              uVar23 = (int)uVar25 >> 10;
LAB_108b54f18:
              if ((int)uVar23 < 1) {
                iVar44 = *(int *)(lVar51 + -0x1d4);
                iVar56 = *(int *)(lVar51 + -0x1e8);
                iVar41 = *(int *)(lVar51 + -0x16c);
                iVar42 = *(int *)(lVar51 + -0x1e4);
                if (uVar23 != 0) {
                  iVar44 = *(int *)(lVar51 + -0x1f0);
                  iVar56 = *(int *)(lVar51 + -0x1d4);
                  iVar41 = *(int *)(lVar51 + -0x1ec);
                  iVar42 = *(int *)(lVar51 + -0x16c);
                  if (uVar23 != 0xffffffff) {
                    iVar41 = *(int *)(lVar51 + -0x1f8) + uVar23 * 0x400;
                    iVar42 = iVar41 + 0x400;
                    iVar56 = *(int *)(lVar51 + -0x1d8);
                    iVar44 = (short)-(short)iVar41 * iVar56;
                    sVar7 = -0x400 - (short)iVar41;
                    goto LAB_108b54f44;
                  }
                }
              }
              else {
                iVar41 = *(int *)(lVar51 + -0x1e0) + uVar23 * 0x400;
                iVar42 = iVar41 + 0x400;
                iVar56 = *(int *)(lVar51 + -0x1d8);
                iVar44 = (short)iVar41 * iVar56;
                sVar7 = (short)iVar42;
LAB_108b54f44:
                iVar56 = sVar7 * iVar56;
              }
            }
            else {
              uVar23 = uVar25 - *(int *)(lVar51 + -0x1dc);
              if (uVar23 != 0 && *(int *)(lVar51 + -0x1dc) <= (int)uVar25) {
                uVar23 = uVar23 >> 10;
                goto LAB_108b54f18;
              }
              if ((int)uVar25 < *(int *)(lVar51 + -500)) {
                uVar25 = uVar25 + *(int *)(lVar51 + -0x1dc);
                goto LAB_108b54f14;
              }
              bVar18 = (uVar25 & 0x80000000) == 0;
              iVar44 = *(int *)(lVar51 + -0x1f0);
              if (bVar18) {
                iVar44 = *(int *)(lVar51 + -0x1d4);
              }
              iVar56 = *(int *)(lVar51 + -0x1d4);
              if (bVar18) {
                iVar56 = *(int *)(lVar51 + -0x1e8);
              }
              iVar41 = *(int *)(lVar51 + -0x1ec);
              if (bVar18) {
                iVar41 = *(int *)(lVar51 + -0x16c);
              }
              iVar42 = *(int *)(lVar51 + -0x16c);
              if (bVar18) {
                iVar42 = *(int *)(lVar51 + -0x1e4);
              }
            }
            iVar13 = (int)(short)((short)iVar55 - (short)iVar41);
            iVar44 = iVar44 + iVar13 * iVar13 >> 10;
            iVar55 = (int)(short)((short)iVar55 - (short)iVar42);
            iVar55 = iVar56 + iVar55 * iVar55 >> 10;
            iVar13 = *(int *)((long)puVar20 + uVar45 * 0x514 + 0x510);
            iVar56 = iVar44;
            if (iVar55 <= iVar44) {
              iVar56 = iVar55;
            }
            iVar2 = iVar44;
            if (iVar44 <= iVar55) {
              iVar2 = iVar55;
            }
            iVar3 = iVar42;
            if (iVar55 <= iVar44) {
              iVar3 = iVar41;
              iVar41 = iVar42;
            }
            *piVar28 = iVar41;
            piVar28[1] = iVar56 + iVar13;
            iVar55 = iVar41 * -0x10;
            if (-1 < iVar1) {
              iVar55 = iVar41 * 0x10;
            }
            iVar42 = iVar55 + iVar33 + iVar19;
            iVar41 = iVar3 * -0x10;
            if (-1 < iVar1) {
              iVar41 = iVar3 * 0x10;
            }
            iVar1 = iVar42 + iVar4 * -0x10;
            iVar44 = iVar1 - iVar57;
            iVar56 = NEON_sqsub(iVar44,iVar8);
            piVar28[4] = iVar1;
            piVar28[5] = iVar56;
            piVar28[6] = iVar55 + iVar33;
            piVar28[7] = iVar3;
            piVar28[2] = iVar42;
            piVar28[3] = iVar44;
            iVar19 = iVar41 + iVar33 + iVar19;
            iVar55 = iVar19 + iVar4 * -0x10;
            iVar57 = iVar55 - iVar57;
            piVar28[10] = iVar57;
            piVar28[0xb] = iVar55;
            iVar57 = NEON_sqsub(iVar57,iVar8);
            piVar28[0xc] = iVar57;
            piVar28[0xd] = iVar41 + iVar33;
            piVar28[8] = iVar2 + iVar13;
            piVar28[9] = iVar19;
            piVar36 = piVar36 + 0x145;
            puVar20 = *(undefined8 **)(lVar51 + -0x188);
          }
          iVar53 = (*piVar48 + -1) % 0x28;
          iVar33 = iVar53 + 0x28;
          if (-1 < iVar53) {
            iVar33 = iVar53;
          }
          *piVar48 = iVar33;
          uVar49 = 0;
          piVar36 = *(int **)(lVar51 + -600);
          iVar53 = *(int *)(*(long *)(lVar51 + -0x178) + 4);
          for (uVar45 = 1; uVar45 < uVar52; uVar45 = uVar45 + 1) {
            iVar55 = *piVar36;
            iVar57 = iVar55;
            if (iVar53 <= iVar55) {
              iVar57 = iVar53;
            }
            uVar47 = uVar45 & 0xffffffff;
            if (iVar53 <= iVar55) {
              uVar47 = uVar49;
            }
            uVar49 = uVar47;
            piVar36 = piVar36 + 0xe;
            iVar53 = iVar57;
          }
          iVar53 = (iVar33 + (int)*(undefined8 *)(lVar51 + -0x208)) % 0x28;
          iVar33 = *(int *)((long)puVar20 + (long)iVar53 * 4 + uVar49 * 0x514 + 0x180);
          piVar36 = (int *)(*(long *)(lVar51 + -0x260) + (long)iVar53 * 4);
          piVar34 = *(int **)(lVar51 + -0x268);
          for (uVar45 = uVar52; uVar45 != 0; uVar45 = uVar45 - 1) {
            if (*piVar36 != iVar33) {
              piVar34[-7] = piVar34[-7] + 0x7ffffff;
              *piVar34 = *piVar34 + 0x7ffffff;
            }
            piVar36 = piVar36 + 0x145;
            piVar34 = piVar34 + 0xe;
          }
          uVar47 = 0;
          uVar31 = 0;
          piVar36 = *(int **)(lVar51 + -0x270);
          iVar33 = *(int *)(*(long *)(lVar51 + -0x178) + 4);
          iVar57 = *(int *)(*(long *)(lVar51 + -0x178) + 0x20);
          for (uVar45 = 1; uVar45 < uVar52; uVar45 = uVar45 + 1) {
            iVar55 = piVar36[-7];
            uVar16 = uVar45 & 0xffffffff;
            if (piVar36[-7] <= iVar33) {
              iVar55 = iVar33;
              uVar16 = uVar47;
            }
            uVar47 = uVar16;
            iVar19 = *piVar36;
            uVar16 = uVar45 & 0xffffffff;
            if (iVar57 <= *piVar36) {
              iVar19 = iVar57;
              uVar16 = uVar31;
            }
            uVar31 = uVar16;
            piVar36 = piVar36 + 0xe;
            iVar33 = iVar55;
            iVar57 = iVar19;
          }
          puVar24 = puVar20;
          if (iVar57 < iVar33) {
            _memcpy((long)puVar20 + lVar22 * 4 + uVar47 * 0x514,
                    (long)puVar20 + lVar22 * 4 + uVar31 * 0x514,lVar22 * -4 + 0x514);
            puVar24 = *(undefined8 **)(lVar51 + -0x188);
            lVar22 = *(long *)(lVar51 + -0x180);
            puVar29 = (undefined8 *)(*(long *)(lVar51 + -0x178) + uVar47 * 0x38);
            lVar26 = *(long *)(lVar51 + -0x178) + uVar31 * 0x38;
            uVar43 = *(undefined8 *)(lVar26 + 0x1c);
            puVar29[1] = *(undefined8 *)(lVar26 + 0x24);
            *puVar29 = uVar43;
            uVar43 = *(undefined8 *)(lVar26 + 0x28);
            *(undefined8 *)((long)puVar29 + 0x14) = *(undefined8 *)(lVar26 + 0x30);
            *(undefined8 *)((long)puVar29 + 0xc) = uVar43;
          }
          lVar26 = *(long *)(lVar51 + -0x248);
          if (0 < *(int *)(lVar51 + -0x250) || *(long *)(lVar51 + -0x218) <= lVar22) {
            lVar27 = (long)iVar53 * 4 + uVar49 * 0x514;
            lVar46 = lVar22 - *(long *)(lVar51 + -0x218);
            *(char *)(*(long *)(lVar51 + -0x2a8) + lVar46) =
                 (char)((*(uint *)((long)puVar20 + lVar27 + 0x220) >> 9) + 1 >> 1);
            iVar33 = ((int)((ulong)((long)*(int *)(*(long *)(lVar51 + -0x210) + (long)iVar53 * 4) *
                                   (long)*(int *)((long)puVar20 + lVar27 + 0x2c0)) >> 0x10) >> 7) +
                     1 >> 1;
            if (iVar33 < -0x7fff) {
              iVar33 = -0x8000;
            }
            if (0x7ffe < iVar33) {
              iVar33 = 0x7fff;
            }
            *(short *)(*(long *)(lVar51 + -0x2a0) + lVar46 * 2) = (short)iVar33;
            iVar33 = (int)*(undefined8 *)(lVar51 + -0x208);
            *(undefined4 *)
             (*(long *)(lVar51 + -0x2b8) + (long)(*(int *)(lVar26 + 0x10f0) - iVar33) * 4) =
                 *(undefined4 *)((long)puVar20 + lVar27 + 0x400);
            *(undefined4 *)
             (*(long *)(lVar51 + -0x2b0) + (long)(*(int *)(lVar26 + 0x10ec) - iVar33) * 4) =
                 *(undefined4 *)((long)puVar20 + lVar27 + 0x360);
          }
          *(ulong *)(lVar26 + 0x10ec) =
               CONCAT44((int)((ulong)*(undefined8 *)(lVar26 + 0x10ec) >> 0x20) + 1,
                        (int)*(undefined8 *)(lVar26 + 0x10ec) + 1);
          puVar29 = *(undefined8 **)(lVar51 + -0x280);
          lVar27 = *(long *)(lVar51 + -0x278);
          lVar46 = *(long *)(lVar51 + -0x200);
          for (lVar26 = 0; lVar27 != lVar26; lVar26 = lVar26 + 0x514) {
            *(undefined8 *)((long)puVar24 + lVar26 + 0x500) = *puVar29;
            uVar54 = *(undefined4 *)(puVar29 + -1);
            uVar5 = *(undefined4 *)((long)puVar29 + -4);
            *(undefined4 *)(lVar46 + lVar26) = uVar5;
            *(undefined4 *)((long)puVar24 + (long)*piVar48 * 4 + lVar26 + 0x2c0) = uVar5;
            iVar33 = *(int *)((long)puVar29 + -0xc);
            *(int *)((long)puVar24 + (long)*piVar48 * 4 + lVar26 + 0x220) = iVar33;
            uVar5 = *(undefined4 *)(puVar29 + 1);
            *(int *)((long)puVar24 + (long)*piVar48 * 4 + lVar26 + 0x360) =
                 *(int *)((long)puVar29 + 0xc) << 1;
            *(undefined4 *)((long)puVar24 + (long)*piVar48 * 4 + lVar26 + 0x400) = uVar5;
            iVar33 = *(int *)((long)puVar24 + lVar26 + 0x508) + ((iVar33 >> 9) + 1 >> 1);
            *(int *)((long)puVar24 + lVar26 + 0x508) = iVar33;
            *(int *)((long)puVar24 + (long)*piVar48 * 4 + lVar26 + 0x180) = iVar33;
            *(undefined4 *)((long)puVar24 + lVar26 + 0x510) = uVar54;
            puVar29 = puVar29 + 7;
          }
          *(undefined4 *)(*(long *)(lVar51 + -0x210) + (long)*piVar48 * 4) =
               *(undefined4 *)(lVar51 + -0x24c);
          puVar29 = (undefined8 *)(lVar46 + 4);
          puVar20 = puVar24;
        }
        uVar45 = *(ulong *)(lVar51 + -0x2c0);
        for (; uVar52 != 0; uVar52 = uVar52 - 1) {
          puVar29 = (undefined8 *)
                    ((long)puVar20 +
                    (-(uVar45 >> 0x1f & 1) & 0xfffffffc00000000 | (uVar45 & 0xffffffff) << 2));
          uVar43 = *puVar29;
          uVar61 = puVar29[1];
          uVar63 = puVar29[3];
          uVar62 = puVar29[2];
          uVar64 = puVar29[4];
          uVar66 = puVar29[7];
          uVar65 = puVar29[6];
          puVar20[5] = puVar29[5];
          puVar20[4] = uVar64;
          puVar20[7] = uVar66;
          puVar20[6] = uVar65;
          puVar20[1] = uVar61;
          *puVar20 = uVar43;
          puVar20[3] = uVar63;
          puVar20[2] = uVar62;
          puVar20 = (undefined8 *)((long)puVar20 + 0x514);
        }
        FUN_108b55448(*(undefined8 *)(lVar51 + -0x120));
        if (bVar18) {
          return;
        }
      }
      ___stack_chk_fail();
      return;
    }
    uVar23 = (uint)puVar24;
    puVar29 = (undefined8 *)(lStack_c8 + (ulong)(((uint)uStack_d8 | uVar23 >> 1) << 4) * 2);
    uVar25 = *(uint *)(lStack_d0 + (long)puVar24 * 4);
    *(undefined4 *)(param_2 + 0x10fc) = 0;
    cVar35 = *(char *)(uStack_88 + 0x1d);
    if (cVar35 == '\x02') {
      iStack_9c = piStack_a8[(long)puVar24];
      if ((uStack_114 & uVar23) != 0) {
        cVar35 = '\x02';
        goto LAB_108b540a4;
      }
      puVar20 = puStack_b8;
      if (puVar24 == (undefined8 *)0x2) {
        uVar47 = 0;
        uVar11 = *(uint *)(lVar27 + 0x1214);
        piVar48 = piStack_138;
        iVar53 = *(int *)(puStack_b8 + 0xa2);
        for (uVar45 = 1; (long)uVar45 < (long)(int)uVar11; uVar45 = uVar45 + 1) {
          iVar57 = *piVar48;
          uVar31 = uVar45 & 0xffffffff;
          if (iVar53 <= *piVar48) {
            iVar57 = iVar53;
            uVar31 = uVar47;
          }
          uVar47 = uVar31;
          piVar48 = piVar48 + 0x145;
          iVar53 = iVar57;
        }
        uVar31 = uVar47;
        piVar48 = piStack_140;
        for (uVar45 = (ulong)(uVar11 & ((int)uVar11 >> 0x1f ^ 0xffffffffU)); uVar45 != 0;
            uVar45 = uVar45 - 1) {
          if (uVar31 != 0) {
            *piVar48 = *piVar48 + 0x7ffffff;
          }
          piVar48 = piVar48 + 0x145;
          uVar31 = uVar31 - 1;
        }
        uVar11 = iStack_74 + iVar33;
        uVar45 = 0x28;
        puVar20 = (undefined8 *)0xffff8000;
        iVar57 = 0x7fff;
        puVar14 = (undefined2 *)(uStack_98 + lStack_150);
        puVar15 = (undefined1 *)(lStack_90 + lStack_158);
        iVar33 = iStack_144;
        for (puVar38 = puStack_130; puVar38 != (undefined8 *)0x0;
            puVar38 = (undefined8 *)((long)puVar38 + -1)) {
          uVar39 = (int)(uVar11 - 1) % 0x28;
          uVar11 = uVar39 + 0x28;
          if (-1 < (int)uVar39) {
            uVar11 = uVar39;
          }
          *puVar15 = (char)((*(uint *)((long)puStack_b8 + (ulong)uVar11 * 4 + uVar47 * 0x514 + 0x220
                                      ) >> 9) + 1 >> 1);
          iVar53 = ((int)((ulong)((long)*(int *)(lStack_c0 + 4) *
                                 (long)*(int *)((long)puStack_b8 +
                                               (ulong)uVar11 * 4 + uVar47 * 0x514 + 0x2c0)) >> 0x10)
                   >> 0xd) + 1 >> 1;
          if (iVar53 < -0x7fff) {
            iVar53 = -0x8000;
          }
          if (0x7ffe < iVar53) {
            iVar53 = 0x7fff;
          }
          *puVar14 = (short)iVar53;
          *(undefined4 *)(uVar52 + (long)(iVar33 + *(int *)(param_2 + 0x10f0)) * 4) =
               *(undefined4 *)((long)puStack_b8 + (ulong)uVar11 * 4 + uVar47 * 0x514 + 0x400);
          iVar33 = iVar33 + 1;
          puVar14 = puVar14 + 1;
          puVar15 = puVar15 + 1;
        }
        uVar47 = 0;
      }
      puVar38 = (undefined8 *)(ulong)*(uint *)(lVar27 + 0x1220);
      iVar33 = *(int *)(lVar27 + 0x11f0) - (iStack_9c + *(uint *)(lVar27 + 0x1220));
      uVar11 = iVar33 - 2;
      uStack_124 = uVar25;
      if (uVar11 == 0 || iVar33 < 2) {
        _abort();
        lVar30 = lVar27;
        lVar27 = lVar46;
        goto LAB_108b54854;
      }
      FUN_108b599cc(lVar46 + (ulong)uVar11 * 2,
                    param_2 + (long)(int)(uVar11 + *(int *)(lVar27 + 0x11ec) * uVar23) * 2,puVar29,
                    *(int *)(lVar27 + 0x11f0) - uVar11,puVar38,*(undefined4 *)(lStack_80 + 0x13f4));
      bVar18 = false;
      *(undefined4 *)(param_2 + 0x10ec) = *(undefined4 *)(lStack_80 + 0x11f0);
      *(undefined4 *)(param_2 + 0x10fc) = 1;
      cVar35 = *(char *)(uStack_88 + 0x1d);
      lVar27 = lStack_80;
      uVar25 = uStack_124;
    }
    else {
LAB_108b540a4:
      bVar18 = true;
    }
    puVar20 = puStack_b8;
    uVar45 = 0;
    lVar26 = lStack_e8 + (long)puVar24 * 10;
    lVar30 = lStack_e0 + (long)puVar24 * 0x30;
    uVar23 = *(uint *)(lVar27 + 0x1214);
    iVar53 = *(int *)(lVar22 + (long)puVar24 * 4);
    param_3 = (ulong)(uint)(int)cVar35;
    iVar33 = iVar53;
    if (iVar53 < 2) {
      iVar33 = 1;
    }
    iVar55 = (int)LZCOUNT(iVar33);
    iVar33 = iVar33 << (ulong)(iVar55 - 1U & 0x1f);
    iVar57 = iVar33 >> 0x10;
    uVar11 = 0;
    if (iVar57 != 0) {
      uVar11 = 0x1fffffff / iVar57;
    }
    uVar11 = (int)((ulong)((long)(int)(-((-((ulong)(uVar11 >> 0xf) & 1) & 0xfffffff800000000 |
                                         ((ulong)uVar11 & 0xffff) << 0x13) * (long)iVar33 &
                                        0xfffffff800000000) >> 0x20) * (long)(int)uVar11) >> 0x10) +
             uVar11 * 0x10000;
    uVar12 = iVar55 - 0xf;
    uVar39 = -0x80000000 >> (uVar12 & 0x1f);
    uVar9 = 0x7fffffff >> (ulong)(uVar12 & 0x1f);
    uVar10 = uVar11;
    if ((int)uVar11 <= (int)uVar39) {
      uVar10 = uVar39;
    }
    iVar33 = piStack_a8[(long)puVar24];
    if ((int)uVar11 <= (int)uVar9) {
      uVar9 = uVar10;
    }
    uVar11 = (int)uVar11 >> (0xfU - iVar55 & 0x1f);
    if (iVar53 < 0x20000) {
      uVar11 = uVar9 << (ulong)(uVar12 & 0x1f);
    }
    uVar39 = *(uint *)(lVar27 + 0x11ec);
    for (; (uVar39 & ((int)uVar39 >> 0x1f ^ 0xffffffffU)) != uVar45; uVar45 = uVar45 + 1) {
      *(int *)(lVar51 + uVar45 * 4) =
           (int)((ulong)((long)(int)*(short *)(param_4 + uVar45 * 2) *
                        (long)(((int)uVar11 >> 4) + 1 >> 1)) >> 0x10);
    }
    if (!bVar18) {
      uVar10 = (uint)((ulong)((long)(int)lStack_120 * (long)(int)uVar11) >> 0xe) & 0xfffffffc;
      if (puVar24 != (undefined8 *)0x0) {
        uVar10 = uVar11;
      }
      iVar57 = *(int *)(param_2 + 0x10ec);
      for (lVar37 = (long)((iVar57 - iVar33) + -2); lVar37 < iVar57; lVar37 = lVar37 + 1) {
        *(int *)(lVar50 + lVar37 * 4) =
             (int)((ulong)((long)(int)*(short *)(lVar46 + lVar37 * 2) * (long)(int)uVar10) >> 0x10);
      }
    }
    iVar57 = *(int *)(param_2 + 0x10f8);
    if (iVar53 != iVar57) {
      iVar55 = -iVar57;
      if (-1 < iVar57) {
        iVar55 = iVar57;
      }
      iVar57 = iVar57 << (ulong)((int)LZCOUNT(iVar55) - 1U & 0x1f);
      iVar40 = -iVar53;
      if (-1 < iVar53) {
        iVar40 = iVar53;
      }
      iVar53 = iVar53 << (ulong)((int)LZCOUNT(iVar40) - 1U & 0x1f);
      iVar19 = iVar53 >> 0x10;
      sVar7 = 0;
      if (iVar19 != 0) {
        sVar7 = (short)(0x1fffffff / iVar19);
      }
      iVar19 = (int)((ulong)((long)(int)sVar7 * (long)iVar57) >> 0x10);
      uVar11 = (int)((ulong)((long)(int)sVar7 *
                            (long)(int)(iVar57 - ((uint)((ulong)((long)iVar19 * (long)iVar53) >>
                                                        0x1d) & 0xfffffff8))) >> 0x10) + iVar19;
      iVar57 = (int)LZCOUNT(iVar55) - (int)LZCOUNT(iVar40);
      iVar53 = (int)uVar11 >> (iVar57 + 0xdU & 0x1f);
      if (0x2f < iVar57 + 0x1dU) {
        iVar53 = 0;
      }
      uVar9 = -iVar57 - 0xd;
      uVar39 = -0x80000000 >> (uVar9 & 0x1f);
      uVar10 = 0x7fffffff >> (ulong)(uVar9 & 0x1f);
      if ((int)uVar39 <= (int)uVar11) {
        uVar39 = uVar11;
      }
      if ((int)uVar11 <= (int)uVar10) {
        uVar10 = uVar39;
      }
      if (iVar57 < -0xd) {
        iVar53 = uVar10 << (ulong)(uVar9 & 0x1f);
      }
      iVar57 = *(int *)(param_2 + 0x10f0);
      for (lVar37 = (long)(iVar57 - *(int *)(lVar27 + 0x11f0)); lVar37 < iVar57; lVar37 = lVar37 + 1
          ) {
        *(int *)(uVar52 + lVar37 * 4) =
             (int)((ulong)((long)*(int *)(uVar52 + lVar37 * 4) * (long)iVar53) >> 0x10);
        iVar57 = *(int *)(param_2 + 0x10f0);
      }
      if (((int)cVar35 == 2) && (*(int *)(param_2 + 0x10fc) == 0)) {
        iVar57 = *(int *)(param_2 + 0x10ec);
        iVar55 = (int)lStack_b0;
        for (lVar37 = (long)((iVar57 - iVar33) + -2); lVar37 < iVar57 - iVar55; lVar37 = lVar37 + 1)
        {
          *(int *)(lVar50 + lVar37 * 4) =
               (int)((ulong)((long)*(int *)(lVar50 + lVar37 * 4) * (long)iVar53) >> 0x10);
        }
      }
      puVar38 = puVar20;
      for (uVar45 = 0; uVar45 != (uVar23 & ((int)uVar23 >> 0x1f ^ 0xffffffffU)); uVar45 = uVar45 + 1
          ) {
        *(int *)((long)puVar20 + uVar45 * 0x514 + 0x500) =
             (int)((ulong)((long)*(int *)((long)puVar20 + uVar45 * 0x514 + 0x500) * (long)iVar53) >>
                  0x10);
        *(int *)((long)puVar20 + uVar45 * 0x514 + 0x504) =
             (int)((ulong)((long)*(int *)((long)puVar20 + uVar45 * 0x514 + 0x504) * (long)iVar53) >>
                  0x10);
        for (lVar37 = 0; lVar37 != 0x40; lVar37 = lVar37 + 4) {
          *(int *)((long)puVar38 + lVar37) =
               (int)((ulong)((long)*(int *)((long)puVar38 + lVar37) * (long)iVar53) >> 0x10);
        }
        for (lVar37 = 0x4a0; lVar37 != 0x500; lVar37 = lVar37 + 4) {
          *(int *)((long)puVar38 + lVar37) =
               (int)((ulong)((long)*(int *)((long)puVar38 + lVar37) * (long)iVar53) >> 0x10);
        }
        for (lVar37 = 0; lVar37 != 0xa0; lVar37 = lVar37 + 4) {
          *(int *)((long)puVar38 + lVar37 + 0x360) =
               (int)((ulong)((long)*(int *)((long)puVar38 + lVar37 + 0x360) * (long)iVar53) >> 0x10)
          ;
          *(int *)((long)puVar38 + lVar37 + 0x400) =
               (int)((ulong)((long)*(int *)((long)puVar38 + lVar37 + 0x400) * (long)iVar53) >> 0x10)
          ;
        }
        puVar38 = (undefined8 *)((long)puVar38 + 0x514);
      }
      iVar53 = *(int *)(lVar22 + (long)puVar24 * 4);
      *(int *)(param_2 + 0x10f8) = iVar53;
      uVar39 = *(uint *)(lVar27 + 0x11ec);
      uVar23 = *(uint *)(lVar27 + 0x1214);
    }
    uVar5 = *(undefined4 *)(lStack_100 + (long)puVar24 * 4);
    uVar6 = *(undefined4 *)(lStack_f8 + (long)puVar24 * 4);
    iVar33 = (int)uVar47;
    uVar47 = (ulong)(iVar33 + 1);
    uVar43 = *(undefined8 *)(lVar27 + 0x121c);
    uVar54 = *(undefined4 *)(lVar27 + 0x1240);
    *(int *)(lVar51 + -0xa8) = (int)lStack_b0;
    *(int **)(lVar51 + -0xb0) = &iStack_74;
    *(undefined4 *)(lVar51 + -0xbc) = uVar54;
    *(uint *)(lVar51 + -0xb8) = uVar23;
    *(undefined8 *)(lVar51 + -0xc4) = uVar43;
    *(uint *)(lVar51 + -0xcc) = uVar39;
    *(int *)(lVar51 + -200) = iVar33;
    *(int *)(lVar51 + -0xd0) = iStack_104;
    uVar54 = uStack_ec;
    *(int *)(lVar51 + -0xd8) = iVar53;
    *(undefined4 *)(lVar51 + -0xd4) = uVar54;
    *(undefined4 *)(lVar51 + -0xe0) = uVar5;
    *(undefined4 *)(lVar51 + -0xdc) = uVar6;
    *(uint *)(lVar51 + -0xe4) = (uVar25 & 0x1fffe) << 0xf | (int)uVar25 >> 2;
    *(int *)(lVar51 + -0xe8) = iStack_9c;
    *(long *)(lVar51 + -0xf8) = lVar26;
    *(long *)(lVar51 + -0xf0) = lVar30;
    *(undefined8 **)(lVar51 + -0x100) = puVar29;
    lVar22 = lStack_90;
    uVar49 = uStack_98;
    uVar45 = param_2;
    lVar26 = lVar51;
    FUN_108b54858();
    lVar27 = (long)*(int *)(lStack_80 + 0x11ec);
    param_4 = param_4 + lVar27 * 2;
    uVar49 = uVar49 + lVar27 * 2;
    uStack_98 = uVar49;
    lStack_90 = lVar22 + lVar27;
    lVar27 = lStack_80;
    puVar20 = (undefined8 *)((long)puVar24 + 1);
    puVar29 = puVar24;
  } while( true );
}



/* Entry: 108b54858; end: 108b55447;  */

void FUN_108b54858(long param_1,undefined8 *param_2,int param_3,long param_4,long param_5,
                  long param_6,long param_7,long param_8,short *param_9,short *param_10,
                  short *param_11,int param_12,undefined4 param_13,undefined4 param_14,
                  undefined4 param_15,undefined4 param_16,uint param_17,int param_18,uint param_19,
                  int param_20,uint param_21,int param_22,undefined4 param_23,uint param_24,
                  undefined4 param_25,int *param_26,uint param_27)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  short sVar6;
  int iVar7;
  int iVar8;
  long lVar9;
  short sVar10;
  int iVar11;
  undefined8 uVar12;
  ulong uVar13;
  bool bVar14;
  undefined8 *puVar15;
  ulong uVar16;
  long extraout_x8;
  int *piVar17;
  undefined8 *puVar18;
  int *piVar19;
  short extraout_w12;
  short *psVar20;
  short extraout_w13;
  long extraout_x14;
  long lVar21;
  int extraout_w15;
  int iVar22;
  uint uVar23;
  int iVar24;
  int *piVar25;
  int iVar26;
  int iVar27;
  ulong uVar28;
  int iVar29;
  ulong uVar30;
  ulong uVar31;
  ulong uVar32;
  int iVar33;
  undefined4 uVar34;
  int iVar35;
  int iVar36;
  int iVar37;
  undefined8 uVar38;
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined8 uVar42;
  undefined8 uVar43;
  undefined8 uVar44;
  undefined8 uVar45;
  undefined8 uVar46;
  ulong uStack_220;
  undefined1 auStack_218 [8];
  long lStack_210;
  long lStack_208;
  long lStack_200;
  short *psStack_1f8;
  long lStack_1f0;
  undefined8 uStack_1e8;
  undefined8 *puStack_1e0;
  long lStack_1d8;
  int *piStack_1d0;
  int *piStack_1c8;
  undefined8 *puStack_1c0;
  int *piStack_1b8;
  int iStack_1b0;
  int iStack_1ac;
  long lStack_1a8;
  int *piStack_1a0;
  int *piStack_198;
  int iStack_190;
  int iStack_18c;
  ulong uStack_188;
  undefined4 *puStack_180;
  long lStack_178;
  long lStack_170;
  ulong uStack_168;
  undefined8 *puStack_160;
  int iStack_158;
  int iStack_154;
  int iStack_150;
  int iStack_14c;
  int iStack_148;
  int iStack_144;
  int iStack_140;
  int iStack_13c;
  int iStack_138;
  int iStack_134;
  long lStack_130;
  short *psStack_128;
  long lStack_120;
  long lStack_118;
  int iStack_10c;
  long lStack_108;
  long lStack_100;
  int iStack_f8;
  uint uStack_f4;
  ulong uStack_f0;
  undefined8 *puStack_e8;
  ulong uStack_e0;
  long lStack_d8;
  int iStack_cc;
  short *psStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  int iStack_b0;
  int iStack_ac;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  int iStack_88;
  int iStack_84;
  undefined8 uStack_80;
  
  uVar32 = (ulong)param_24;
  uStack_80 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  lStack_208 = param_5;
  lStack_200 = param_6;
  iStack_18c = param_3;
  lStack_170 = param_8;
  lStack_100 = param_4;
  if ((int)param_24 < 1) {
LAB_108b55440:
    _abort();
  }
  else {
    uStack_168 = (ulong)param_27;
    uStack_f0 = (ulong)param_21;
    uStack_220 = (ulong)param_19;
    iStack_cc = param_18;
    uStack_f4 = param_17;
    psStack_c8 = param_11;
    uVar16 = uVar32 * 0x40 + (ulong)param_24 * -8 + 0xf & 0xfffffffffffffff0;
    psStack_1f8 = param_10;
    iStack_190 = param_12;
    iStack_f8 = param_22;
    (*(code *)PTR____chkstk_darwin_11034bd40)(param_15);
    lVar21 = -uVar16;
    lStack_d8 = (long)&uStack_220 + lVar21;
    auStack_218 = (undefined1  [8])(param_1 + 0x500);
    puStack_180 = (undefined4 *)
                  ((long)auStack_218 + (long)((*(int *)(param_1 + 0x10f0) - iStack_190) + 1) * 4);
    piStack_198 = (int *)(param_7 + (long)(*(int *)(param_1 + 0x10ec) - iStack_190) * 4 + 8);
    iStack_84 = (int)*param_9 << 0xf;
    iStack_88 = (int)param_9[1] << 0xf;
    uVar38 = *(undefined8 *)(param_9 + 2);
    auVar39._0_4_ = (int)(short)uVar38 << 0xf;
    auVar39._4_4_ = (int)(short)((ulong)uVar38 >> 0x10) << 0xf;
    auVar39._8_4_ = (int)(short)((ulong)uVar38 >> 0x20) << 0xf;
    auVar39._12_4_ = (int)(short)((ulong)uVar38 >> 0x30) << 0xf;
    auVar39 = NEON_rev64(auVar39,4);
    auVar39 = NEON_ext(auVar39,auVar39,8,1);
    uStack_90 = auVar39._8_8_;
    uStack_98 = auVar39._0_8_;
    uVar38 = *(undefined8 *)(param_9 + 6);
    auVar40._0_4_ = (int)(short)uVar38 << 0xf;
    auVar40._4_4_ = (int)(short)((ulong)uVar38 >> 0x10) << 0xf;
    auVar40._8_4_ = (int)(short)((ulong)uVar38 >> 0x20) << 0xf;
    auVar40._12_4_ = (int)(short)((ulong)uVar38 >> 0x30) << 0xf;
    auVar39 = NEON_rev64(auVar40,4);
    auVar39 = NEON_ext(auVar39,auVar39,8,1);
    uStack_a0 = auVar39._8_8_;
    uStack_a8 = auVar39._0_8_;
    if (iStack_f8 == 0x10) {
      iStack_ac = (int)param_9[10] << 0xf;
      iStack_b0 = (int)param_9[0xb] << 0xf;
      uVar38 = *(undefined8 *)(param_9 + 0xc);
      auVar41._0_4_ = (int)(short)uVar38 << 0xf;
      auVar41._4_4_ = (int)(short)((ulong)uVar38 >> 0x10) << 0xf;
      auVar41._8_4_ = (int)(short)((ulong)uVar38 >> 0x20) << 0xf;
      auVar41._12_4_ = (int)(short)((ulong)uVar38 >> 0x30) << 0xf;
      auVar39 = NEON_rev64(auVar41,4);
      auVar39 = NEON_ext(auVar39,auVar39,8,1);
    }
    else {
      iStack_ac = 0;
      iStack_b0 = 0;
      auVar39 = ZEXT216(0);
    }
    iStack_154 = 0x200 - (uStack_f4 >> 1);
    iStack_1ac = extraout_w15 >> 6;
    iVar22 = (int)uStack_f0;
    lStack_108 = (long)iVar22 + -1;
    uStack_1e8 = (long)(short)extraout_x14;
    iStack_13c = (uStack_f4 >> 1) - 0x200;
    iStack_14c = iStack_cc + -0x3b0;
    iStack_138 = (int)(short)uStack_f4;
    iStack_150 = (short)(0x3b0 - (short)iStack_cc) * iStack_138;
    lStack_1f0 = (extraout_x14 << 0x20) >> 0x30;
    iStack_134 = iStack_138 * iStack_cc;
    iStack_144 = iStack_cc + 0x3b0;
    iStack_148 = (short)iStack_144 * iStack_138;
    iStack_10c = iVar22 >> 1;
    iStack_158 = iStack_cc + 0x50;
    lStack_118 = (long)extraout_w12;
    iStack_140 = iStack_cc + -0x50;
    lStack_120 = (long)(short)extraout_x8;
    psStack_128 = psStack_c8 + 2;
    lStack_130 = (extraout_x8 << 0x20) >> 0x30;
    piStack_1a0 = (int *)((long)param_2 + 0x4a4);
    lStack_178 = (long)(int)uStack_168;
    iStack_1b0 = param_20;
    uStack_b8 = auVar39._8_8_;
    uStack_c0 = auVar39._0_8_;
    piStack_1b8 = (int *)((long)&uStack_1e8 + lVar21 + 4);
    puStack_1c0 = param_2 + 0x30;
    piStack_1c8 = (int *)((long)&lStack_200 + lVar21);
    piStack_1d0 = (int *)((long)&piStack_1c8 + lVar21);
    lStack_1d8 = uVar32 * 0x514;
    puVar18 = param_2 + 8;
    puStack_1e0 = (undefined8 *)(auStack_218 + lVar21 + 4);
    uStack_188 = (ulong)((uint)uStack_220 & ((int)(uint)uStack_220 >> 0x1f ^ 0xffffffffU));
    uVar16 = 0;
    lStack_210 = param_7;
    lStack_1a8 = param_1;
    puStack_e8 = param_2;
    while (bVar14 = uVar16 == uStack_188, !bVar14) {
      if (iStack_18c == 2) {
        iVar29 = ((int)((long)*piStack_198 * (long)(int)*psStack_1f8 * 0x10000 +
                        (((ulong)((long)piStack_198[-1] * (long)(int)psStack_1f8[1]) >> 0x10) <<
                        0x20) + (((ulong)((long)piStack_198[-2] * (long)(int)psStack_1f8[2]) >> 0x10
                                 ) << 0x20) +
                        ((long)piStack_198[-3] * (long)(int)psStack_1f8[3] * 0x10000 &
                        0x7fffffff00000000U) + 0x200000000 >> 0x20) +
                 (int)((ulong)((long)(int)psStack_1f8[4] * (long)piStack_198[-4]) >> 0x10)) * 2;
        piStack_198 = piStack_198 + 1;
      }
      else {
        iVar29 = 0;
      }
      if (iStack_190 < 1) {
        iVar33 = 0;
      }
      else {
        iVar33 = NEON_sqadd(*puStack_180,puStack_180[-2]);
        iVar33 = iVar29 + ((int)((ulong)((long)(int)puStack_180[-1] * (long)(int)lStack_1f0) >> 0x10
                                ) + (int)((ulong)((long)(int)uStack_1e8 * (long)iVar33) >> 0x10)) *
                          -4;
        puStack_180 = puStack_180 + 1;
      }
      puVar15 = param_2;
      piVar19 = piStack_1a0;
      puStack_160 = puVar18;
      uStack_e0 = uVar16;
      for (uVar31 = 0; uVar31 != uVar32; uVar31 = uVar31 + 1) {
        *(int *)((long)puVar15 + uVar31 * 0x514 + 0x508) =
             *(int *)((long)puVar15 + uVar31 * 0x514 + 0x508) * 0xbb38435 + 0x3619636b;
        lVar21 = (long)puVar15 + (uVar16 + 0xf) * 4 + uVar31 * 0x514;
        func_0x000108b62ba0(lVar21,&uStack_c0,iStack_f8);
        if ((uStack_f0 & 1) != 0) goto LAB_108b55440;
        piVar17 = (int *)(lStack_d8 + uVar31 * 0x38);
        iVar7 = (int)lVar21 * 0x10;
        iVar35 = *(int *)((long)puVar15 + uVar31 * 0x514 + 0x4a0);
        iVar37 = *(int *)((long)puVar15 + uVar31 * 0x514 + 0x504) +
                 (int)((ulong)((long)(int)extraout_w13 * (long)iVar35) >> 0x10);
        iVar35 = iVar35 + (int)((ulong)((long)(int)extraout_w13 *
                                       (long)(*(int *)((long)puVar15 + uVar31 * 0x514 + 0x4a4) -
                                             iVar37)) >> 0x10);
        sVar6 = *psStack_c8;
        *(int *)((long)puVar15 + uVar31 * 0x514 + 0x4a0) = iVar37;
        iVar37 = iStack_10c + (int)((ulong)((long)(int)sVar6 * (long)iVar37) >> 0x10);
        psVar20 = psStack_128;
        piVar25 = piVar19;
        for (lVar21 = 2; lVar21 < iVar22; lVar21 = lVar21 + 2) {
          iVar4 = piVar25[1];
          iVar1 = *piVar25 +
                  (int)((ulong)((long)(int)extraout_w13 * (long)(iVar4 - iVar35)) >> 0x10);
          sVar6 = psVar20[-1];
          lVar9 = (long)iVar35;
          *piVar25 = iVar35;
          piVar25[1] = iVar1;
          piVar25 = piVar25 + 2;
          iVar35 = iVar4 + (int)((ulong)((long)(int)extraout_w13 * (long)(*piVar25 - iVar1)) >> 0x10
                                );
          iVar37 = iVar37 + (int)((ulong)((int)sVar6 * lVar9) >> 0x10) +
                   (int)((ulong)((long)(int)*psVar20 * (long)iVar1) >> 0x10);
          psVar20 = psVar20 + 2;
        }
        *(int *)((long)puVar15 + lStack_108 * 4 + uVar31 * 0x514 + 0x4a0) = iVar35;
        iVar1 = *(int *)((long)puVar15 + uVar31 * 0x514 + 0x500);
        iVar37 = ((uint)((ulong)((long)(int)lStack_118 * (long)iVar1) >> 0xe) & 0xfffffffc) +
                 (iVar37 + (int)((ulong)((long)(int)psStack_c8[lStack_108] * (long)iVar35) >> 0x10))
                 * 8;
        iVar8 = ((int)((ulong)((long)(int)lStack_120 *
                              (long)*(int *)((long)puVar15 +
                                            (long)*param_26 * 4 + uVar31 * 0x514 + 0x400)) >> 0x10)
                + (int)((ulong)((long)iVar1 * (long)(int)lStack_130) >> 0x10)) * 4;
        uVar34 = NEON_sqadd(iVar37,iVar8);
        iVar35 = NEON_sqsub(iVar7 + iVar33,uVar34);
        iVar4 = *(int *)(lStack_100 + uStack_e0 * 4);
        iVar26 = iVar4 - ((iVar35 >> 3) + 1 >> 1);
        iVar1 = *(int *)((long)puVar15 + uVar31 * 0x514 + 0x508);
        iVar35 = -iVar26;
        if (-1 < iVar1) {
          iVar35 = iVar26;
        }
        if (iVar35 < -0x7bff) {
          iVar35 = -0x7c00;
        }
        if (0x77ff < iVar35) {
          iVar35 = 0x7800;
        }
        uVar23 = iVar35 - iStack_cc;
        if ((int)uStack_f4 < 0x801) {
LAB_108b54f14:
          uVar23 = (int)uVar23 >> 10;
LAB_108b54f18:
          if ((int)uVar23 < 1) {
            iVar24 = iStack_cc;
            iVar26 = iStack_144;
            iVar27 = iStack_134;
            iVar36 = iStack_148;
            if ((uVar23 == 0) ||
               (iVar24 = iStack_14c, iVar26 = iStack_cc, iVar27 = iStack_150, iVar36 = iStack_134,
               uVar23 == 0xffffffff)) goto LAB_108b54f48;
            iVar24 = iStack_158 + uVar23 * 0x400;
            iVar26 = iVar24 + 0x400;
            sVar6 = -(short)iVar24;
            sVar10 = -0x400 - (short)iVar24;
          }
          else {
            iVar24 = iStack_140 + uVar23 * 0x400;
            iVar26 = iVar24 + 0x400;
            sVar6 = (short)iVar24;
            sVar10 = (short)iVar26;
          }
          iVar27 = sVar6 * iStack_138;
          iVar36 = sVar10 * iStack_138;
        }
        else {
          if (uVar23 - iStack_13c != 0 && iStack_13c <= (int)uVar23) {
            uVar23 = uVar23 - iStack_13c >> 10;
            goto LAB_108b54f18;
          }
          if ((int)uVar23 < iStack_154) {
            uVar23 = uVar23 + iStack_13c;
            goto LAB_108b54f14;
          }
          iVar24 = iStack_14c;
          iVar26 = iStack_cc;
          iVar27 = iStack_150;
          iVar36 = iStack_134;
          if ((uVar23 & 0x80000000) == 0) {
            iVar24 = iStack_cc;
            iVar26 = iStack_144;
            iVar27 = iStack_134;
            iVar36 = iStack_148;
          }
        }
LAB_108b54f48:
        iVar11 = (int)(short)((short)iVar35 - (short)iVar24);
        iVar27 = iVar27 + iVar11 * iVar11 >> 10;
        iVar35 = (int)(short)((short)iVar35 - (short)iVar26);
        iVar35 = iVar36 + iVar35 * iVar35 >> 10;
        iVar11 = *(int *)((long)puVar15 + uVar31 * 0x514 + 0x510);
        iVar36 = iVar27;
        if (iVar35 <= iVar27) {
          iVar36 = iVar35;
        }
        iVar2 = iVar27;
        if (iVar27 <= iVar35) {
          iVar2 = iVar35;
        }
        iVar3 = iVar26;
        if (iVar35 <= iVar27) {
          iVar3 = iVar24;
          iVar24 = iVar26;
        }
        *piVar17 = iVar24;
        piVar17[1] = iVar36 + iVar11;
        iVar35 = iVar24 * -0x10;
        if (-1 < iVar1) {
          iVar35 = iVar24 * 0x10;
        }
        iVar26 = iVar35 + iVar29 + iVar7;
        iVar24 = iVar3 * -0x10;
        if (-1 < iVar1) {
          iVar24 = iVar3 * 0x10;
        }
        iVar1 = iVar26 + iVar4 * -0x10;
        iVar27 = iVar1 - iVar37;
        iVar36 = NEON_sqsub(iVar27,iVar8);
        piVar17[4] = iVar1;
        piVar17[5] = iVar36;
        piVar17[6] = iVar35 + iVar29;
        piVar17[7] = iVar3;
        piVar17[2] = iVar26;
        piVar17[3] = iVar27;
        iVar7 = iVar24 + iVar29 + iVar7;
        iVar35 = iVar7 + iVar4 * -0x10;
        iVar37 = iVar35 - iVar37;
        piVar17[10] = iVar37;
        piVar17[0xb] = iVar35;
        iVar37 = NEON_sqsub(iVar37,iVar8);
        piVar17[0xc] = iVar37;
        piVar17[0xd] = iVar24 + iVar29;
        piVar17[8] = iVar2 + iVar11;
        piVar17[9] = iVar7;
        piVar19 = piVar19 + 0x145;
        puVar15 = puStack_e8;
      }
      iVar33 = (*param_26 + -1) % 0x28;
      iVar29 = iVar33 + 0x28;
      if (-1 < iVar33) {
        iVar29 = iVar33;
      }
      *param_26 = iVar29;
      uVar31 = 0;
      piVar19 = piStack_1b8;
      iVar33 = *(int *)(lStack_d8 + 4);
      for (uVar16 = 1; uVar16 < uVar32; uVar16 = uVar16 + 1) {
        iVar35 = *piVar19;
        iVar37 = iVar35;
        if (iVar33 <= iVar35) {
          iVar37 = iVar33;
        }
        uVar28 = uVar16 & 0xffffffff;
        if (iVar33 <= iVar35) {
          uVar28 = uVar31;
        }
        uVar31 = uVar28;
        piVar19 = piVar19 + 0xe;
        iVar33 = iVar37;
      }
      iVar33 = (iVar29 + (int)uStack_168) % 0x28;
      iVar29 = *(int *)((long)puVar15 + (long)iVar33 * 4 + uVar31 * 0x514 + 0x180);
      piVar19 = (int *)((long)puStack_1c0 + (long)iVar33 * 4);
      piVar25 = piStack_1c8;
      for (uVar16 = uVar32; uVar16 != 0; uVar16 = uVar16 - 1) {
        if (*piVar19 != iVar29) {
          piVar25[-7] = piVar25[-7] + 0x7ffffff;
          *piVar25 = *piVar25 + 0x7ffffff;
        }
        piVar19 = piVar19 + 0x145;
        piVar25 = piVar25 + 0xe;
      }
      uVar28 = 0;
      uVar30 = 0;
      piVar19 = piStack_1d0;
      iVar29 = *(int *)(lStack_d8 + 4);
      iVar37 = *(int *)(lStack_d8 + 0x20);
      for (uVar16 = 1; uVar16 < uVar32; uVar16 = uVar16 + 1) {
        iVar35 = piVar19[-7];
        uVar13 = uVar16 & 0xffffffff;
        if (piVar19[-7] <= iVar29) {
          iVar35 = iVar29;
          uVar13 = uVar28;
        }
        uVar28 = uVar13;
        iVar7 = *piVar19;
        uVar13 = uVar16 & 0xffffffff;
        if (iVar37 <= *piVar19) {
          iVar7 = iVar37;
          uVar13 = uVar30;
        }
        uVar30 = uVar13;
        piVar19 = piVar19 + 0xe;
        iVar29 = iVar35;
        iVar37 = iVar7;
      }
      param_2 = puVar15;
      if (iVar37 < iVar29) {
        _memcpy((long)puVar15 + uStack_e0 * 4 + uVar28 * 0x514,
                (long)puVar15 + uStack_e0 * 4 + uVar30 * 0x514,uStack_e0 * -4 + 0x514);
        puVar18 = (undefined8 *)(lStack_d8 + uVar28 * 0x38);
        lVar21 = lStack_d8 + uVar30 * 0x38;
        uVar38 = *(undefined8 *)(lVar21 + 0x1c);
        puVar18[1] = *(undefined8 *)(lVar21 + 0x24);
        *puVar18 = uVar38;
        uVar38 = *(undefined8 *)(lVar21 + 0x28);
        *(undefined8 *)((long)puVar18 + 0x14) = *(undefined8 *)(lVar21 + 0x30);
        *(undefined8 *)((long)puVar18 + 0xc) = uVar38;
        param_2 = puStack_e8;
      }
      if (0 < iStack_1b0 || lStack_178 <= (long)uStack_e0) {
        lVar21 = (long)iVar33 * 4 + uVar31 * 0x514;
        *(char *)(lStack_208 + (uStack_e0 - lStack_178)) =
             (char)((*(uint *)((long)puVar15 + lVar21 + 0x220) >> 9) + 1 >> 1);
        iVar29 = ((int)((ulong)((long)*(int *)(lStack_170 + (long)iVar33 * 4) *
                               (long)*(int *)((long)puVar15 + lVar21 + 0x2c0)) >> 0x10) >> 7) + 1 >>
                 1;
        if (iVar29 < -0x7fff) {
          iVar29 = -0x8000;
        }
        if (0x7ffe < iVar29) {
          iVar29 = 0x7fff;
        }
        *(short *)(lStack_200 + (uStack_e0 - lStack_178) * 2) = (short)iVar29;
        *(undefined4 *)
         ((long)auStack_218 + (long)(*(int *)(lStack_1a8 + 0x10f0) - (int)uStack_168) * 4) =
             *(undefined4 *)((long)puVar15 + lVar21 + 0x400);
        *(undefined4 *)(lStack_210 + (long)(*(int *)(lStack_1a8 + 0x10ec) - (int)uStack_168) * 4) =
             *(undefined4 *)((long)puVar15 + lVar21 + 0x360);
      }
      *(ulong *)(lStack_1a8 + 0x10ec) =
           CONCAT44((int)((ulong)*(undefined8 *)(lStack_1a8 + 0x10ec) >> 0x20) + 1,
                    (int)*(undefined8 *)(lStack_1a8 + 0x10ec) + 1);
      puVar18 = puStack_1e0;
      for (lVar21 = 0; lStack_1d8 != lVar21; lVar21 = lVar21 + 0x514) {
        *(undefined8 *)((long)param_2 + lVar21 + 0x500) = *puVar18;
        uVar34 = *(undefined4 *)(puVar18 + -1);
        uVar5 = *(undefined4 *)((long)puVar18 + -4);
        *(undefined4 *)((long)puStack_160 + lVar21) = uVar5;
        *(undefined4 *)((long)param_2 + (long)*param_26 * 4 + lVar21 + 0x2c0) = uVar5;
        iVar29 = *(int *)((long)puVar18 + -0xc);
        *(int *)((long)param_2 + (long)*param_26 * 4 + lVar21 + 0x220) = iVar29;
        uVar5 = *(undefined4 *)(puVar18 + 1);
        *(int *)((long)param_2 + (long)*param_26 * 4 + lVar21 + 0x360) =
             *(int *)((long)puVar18 + 0xc) << 1;
        *(undefined4 *)((long)param_2 + (long)*param_26 * 4 + lVar21 + 0x400) = uVar5;
        iVar29 = *(int *)((long)param_2 + lVar21 + 0x508) + ((iVar29 >> 9) + 1 >> 1);
        *(int *)((long)param_2 + lVar21 + 0x508) = iVar29;
        *(int *)((long)param_2 + (long)*param_26 * 4 + lVar21 + 0x180) = iVar29;
        *(undefined4 *)((long)param_2 + lVar21 + 0x510) = uVar34;
        puVar18 = puVar18 + 7;
      }
      *(int *)(lStack_170 + (long)*param_26 * 4) = iStack_1ac;
      puVar18 = (undefined8 *)((long)puStack_160 + 4);
      uVar16 = uStack_e0 + 1;
    }
    for (; uVar32 != 0; uVar32 = uVar32 - 1) {
      puVar18 = (undefined8 *)
                ((long)param_2 +
                (-(uStack_220 >> 0x1f & 1) & 0xfffffffc00000000 | (uStack_220 & 0xffffffff) << 2));
      uVar38 = *puVar18;
      uVar12 = puVar18[1];
      uVar43 = puVar18[3];
      uVar42 = puVar18[2];
      uVar44 = puVar18[4];
      uVar46 = puVar18[7];
      uVar45 = puVar18[6];
      param_2[5] = puVar18[5];
      param_2[4] = uVar44;
      param_2[7] = uVar46;
      param_2[6] = uVar45;
      param_2[1] = uVar12;
      *param_2 = uVar38;
      param_2[3] = uVar43;
      param_2[2] = uVar42;
      param_2 = (undefined8 *)((long)param_2 + 0x514);
    }
    FUN_108b55448(uStack_80);
    if (bVar14) {
      return;
    }
  }
  ___stack_chk_fail();
  return;
}



/* Entry: 108b55448; end: 108b5545b;  */

void FUN_108b55448(void)

{
  return;
}



/* Entry: 108b5545c; end: 108b5567b;  */

void FUN_108b5545c(long param_1,long param_2,undefined8 param_3,int param_4,undefined8 param_5)

{
  int iVar1;
  undefined8 *puVar2;
  uint uVar3;
  short sVar4;
  long lVar5;
  undefined8 uVar6;
  uint uVar7;
  undefined8 *puVar8;
  ulong uVar9;
  int iVar10;
  uint uVar11;
  
  uVar7 = *(uint *)(param_1 + 0x90c);
  if (uVar7 != *(uint *)(param_1 + 0x1114)) {
    *(int *)(param_1 + 0x10c4) = *(int *)(param_1 + 0x918) << 7;
    *(undefined8 *)(param_1 + 0x110c) = 0x1000000010000;
    *(undefined8 *)(param_1 + 0x1118) = 0x1400000002;
    *(uint *)(param_1 + 0x1114) = uVar7;
  }
  if (param_4 == 0) {
    *(int *)(param_1 + 0x10bc) = (int)*(char *)(param_1 + 0xb45);
    if (*(char *)(param_1 + 0xb45) == 2) {
      uVar7 = 0;
      uVar3 = *(uint *)(param_1 + 0x914);
      puVar2 = (undefined8 *)(param_1 + 0x10c8);
      iVar10 = uVar3 * 5;
      for (uVar9 = 0; iVar10 = iVar10 + -5,
          uVar9 != uVar3 &&
          (long)(uVar9 * (long)*(int *)(param_1 + 0x91c)) <
          (long)*(int *)(param_2 + ((long)(int)uVar3 + -1) * 4); uVar9 = uVar9 + 1) {
        uVar11 = 0;
        iVar1 = uVar3 + ~(uint)uVar9;
        for (lVar5 = 0; lVar5 != 10; lVar5 = lVar5 + 2) {
          uVar11 = uVar11 + (int)*(short *)(param_2 + 0x60 + (long)iVar10 * 2 + lVar5);
        }
        if ((int)uVar7 < (int)uVar11) {
          puVar8 = (undefined8 *)(param_2 + 0x60 + (long)(int)(short)iVar1 * 10);
          uVar6 = *puVar8;
          *(undefined2 *)(param_1 + 0x10d0) = *(undefined2 *)(puVar8 + 1);
          *puVar2 = uVar6;
          *(int *)(param_1 + 0x10c4) = *(int *)(param_2 + (long)iVar1 * 4) << 8;
          uVar7 = uVar11;
        }
      }
      *(undefined2 *)(param_1 + 0x10d0) = 0;
      *puVar2 = 0;
      *(short *)(param_1 + 0x10cc) = (short)uVar7;
      if ((int)uVar7 < 0x2ccd) {
        lVar5 = 0;
        if ((int)uVar7 < 2) {
          uVar7 = 1;
        }
        sVar4 = 0;
        if (uVar7 != 0) {
          sVar4 = (short)(0xb33400 / uVar7);
        }
        for (; lVar5 != 10; lVar5 = lVar5 + 2) {
          *(short *)((long)puVar2 + lVar5) =
               (short)((uint)((int)sVar4 * (int)*(short *)((long)puVar2 + lVar5)) >> 10);
        }
      }
      else if (0x3ccd < uVar7) {
        lVar5 = 0;
        uVar3 = 0;
        if (uVar7 != 0) {
          uVar3 = 0xf334000 / uVar7;
        }
        for (; lVar5 != 10; lVar5 = lVar5 + 2) {
          *(short *)((long)puVar2 + lVar5) =
               (short)(uVar3 * (int)*(short *)((long)puVar2 + lVar5) >> 0xe);
        }
      }
    }
    else {
      *(uint *)(param_1 + 0x10c4) =
           ((-(uVar7 >> 0xf & 1) & 0xfff80000 | (uVar7 & 0xffff) << 3) + (int)(short)uVar7) * 0x200;
      *(undefined8 *)(param_1 + 0x10c8) = 0;
      *(undefined2 *)(param_1 + 0x10d0) = 0;
    }
    _memcpy(param_1 + 0x10d2,param_2 + 0x40,(long)*(int *)(param_1 + 0x924) << 1);
    *(short *)(param_1 + 0x1108) = (short)*(undefined4 *)(param_2 + 0x88);
    *(undefined8 *)(param_1 + 0x110c) =
         *(undefined8 *)(param_2 + (long)*(int *)(param_1 + 0x914) * 4 + 8);
    *(undefined4 *)(param_1 + 0x111c) = *(undefined4 *)(param_1 + 0x91c);
    *(int *)(param_1 + 0x1118) = *(int *)(param_1 + 0x914);
  }
  else {
    FUN_108b5567c(param_1,param_2,param_3,param_5);
    *(int *)(param_1 + 0x10b8) = *(int *)(param_1 + 0x10b8) + 1;
  }
  return;
}



/* Entry: 108b5567c; end: 108b55d67;  */

void FUN_108b5567c(long param_1,long param_2,long param_3,undefined4 param_4)

{
  undefined8 *puVar1;
  undefined *puVar2;
  uint uVar3;
  short sVar4;
  ushort uVar5;
  uint uVar6;
  uint uVar7;
  short sVar8;
  int *piVar9;
  long lVar10;
  ulong uVar11;
  bool bVar12;
  short *psVar13;
  short *psVar14;
  uint uVar15;
  short *psVar16;
  short sVar17;
  int iVar18;
  uint uVar19;
  long extraout_x8;
  long extraout_x8_00;
  short *psVar20;
  long lVar21;
  long lVar22;
  uint uVar23;
  int iVar24;
  uint uVar25;
  long lVar26;
  ulong uVar27;
  long extraout_x12;
  int *piVar28;
  short *psVar29;
  long lVar30;
  uint uVar31;
  int iVar32;
  int iVar33;
  undefined8 uVar34;
  undefined8 uVar35;
  undefined8 uVar36;
  undefined8 uStack_130;
  int iStack_128;
  int iStack_124;
  undefined8 uStack_120;
  long alStack_118 [5];
  long lStack_f0;
  undefined8 *puStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  long lStack_c8;
  long lStack_c0;
  ulong uStack_b8;
  long lStack_b0;
  ulong uStack_a8;
  int iStack_a0;
  int iStack_9c;
  uint uStack_98;
  uint uStack_94;
  undefined8 uStack_90;
  short sStack_88;
  short sStack_86;
  short sStack_84;
  short sStack_82;
  short sStack_80;
  short sStack_7e;
  short sStack_7c;
  short sStack_7a;
  short sStack_78;
  short sStack_76;
  short asStack_74 [6];
  undefined8 uStack_68;
  
  uStack_b8 = CONCAT44(uStack_b8._4_4_,param_4);
  uStack_68 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  lVar21 = param_1;
  lStack_c8 = param_2;
  lStack_b0 = param_3;
  (*(code *)PTR____chkstk_darwin_11034bd40)((long)*(int *)(param_1 + 0x920));
  lVar22 = -0xf0 - extraout_x12;
  (*(code *)PTR____chkstk_darwin_11034bd40)(extraout_x8 << 1);
  lVar10 = lVar22 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  uStack_e0 = CONCAT44((int)((long)*(undefined8 *)(lVar21 + 0x110c) >> 0x26),
                       (int)*(undefined8 *)(lVar21 + 0x110c) >> 6);
  uStack_d8 = 0;
  if (*(int *)(lVar21 + 0x948) != 0) {
    *(undefined8 *)(param_1 + 0x10da) = 0;
    *(undefined8 *)(param_1 + 0x10d2) = 0;
    *(undefined8 *)(param_1 + 0x10ea) = 0;
    *(undefined8 *)(param_1 + 0x10e2) = 0;
  }
  uStack_90 = uStack_e0;
  FUN_108b55ef4(&iStack_9c,&uStack_94,&iStack_a0,&uStack_98,param_1 + 4,&uStack_90,
                *(undefined4 *)(param_1 + 0x91c),*(undefined4 *)(param_1 + 0x914));
  iVar33 = *(int *)(param_1 + 0x111c) *
           (*(int *)(param_1 + 0x1118) -
           (uint)(iStack_9c >> (uStack_98 & 0x1f) < iStack_a0 >> (uStack_94 & 0x1f)));
  if (iVar33 < 0x81) {
    iVar33 = 0x80;
  }
  lStack_c0 = CONCAT44(lStack_c0._4_4_,iVar33);
  lVar21 = param_1 + 0x10c8;
  uVar31 = (uint)*(ushort *)(param_1 + 0x10fc);
  iVar33 = *(int *)(param_1 + 0x10b8);
  if (0 < iVar33) {
    iVar33 = 1;
  }
  sVar4 = *(short *)(&UNK_10df90dec + (long)iVar33 * 2);
  lVar30 = (long)sVar4;
  puVar2 = &UNK_10df90df0;
  if (*(int *)(param_1 + 0x10bc) != 2) {
    puVar2 = &UNK_10df90df4;
  }
  uVar5 = *(ushort *)(puVar2 + (long)iVar33 * 2);
  uStack_a8 = (ulong)uVar5;
  func_0x000108b597b0(param_1 + 0x10d2,*(undefined4 *)(param_1 + 0x924),0xfd71);
  iVar33 = *(int *)(param_1 + 0x924);
  psVar20 = (short *)(long)iVar33;
  uVar15 = (uint)((long)psVar20 << 1);
  psVar13 = &sStack_88;
  psVar14 = (short *)(param_1 + 0x10d2);
  ___memcpy_chk();
  if (*(int *)(param_1 + 0x10b8) == 0) {
    if (*(int *)(param_1 + 0x10bc) == 2) {
      sVar17 = 0x4000;
      for (lVar26 = 0; lVar26 != 10; lVar26 = lVar26 + 2) {
        sVar17 = sVar17 - *(short *)(lVar21 + lVar26);
      }
      iVar32 = (int)sVar17;
      if (iVar32 < 0xcce) {
        iVar32 = 0xccd;
      }
      uVar31 = (uint)(*(short *)(param_1 + 0x1108) * iVar32) >> 0xe;
    }
    else {
      psVar13 = (short *)(param_1 + 0x10d2);
      psVar14 = psVar20;
      FUN_108b60a68();
      iVar33 = (int)psVar13;
      if (iVar33 < 0x400001) {
        iVar33 = 0x400000;
      }
      if (0x7ffffff < iVar33) {
        iVar33 = 0x8000000;
      }
      uStack_a8 = (ulong)((long)(iVar33 << 3) * (long)(int)(short)uVar5) >> 0x1e;
      iVar33 = *(int *)(param_1 + 0x924);
      uVar31 = 0x4000;
    }
  }
  psVar29 = (short *)(ulong)*(uint *)(param_1 + 0x920);
  iVar32 = (*(int *)(param_1 + 0x10c4) >> 7) + 1 >> 1;
  iVar33 = *(uint *)(param_1 + 0x920) - (iVar33 + iVar32);
  uVar23 = iVar33 - 2;
  if (uVar23 != 0 && 1 < iVar33) {
    psVar20 = (short *)(param_1 + 4 + (ulong)((int)lStack_c0 - 0x80) * 4);
    uVar19 = *(uint *)(param_1 + 0x10f8);
    psVar13 = (short *)((long)&lStack_f0 + (ulong)uVar23 * 2 + lVar10 + 0xf0);
    psVar14 = (short *)(param_1 + (ulong)uVar23 * 2 + 0x544);
    psVar16 = &sStack_88;
    uStack_b8 = CONCAT44(uStack_b8._4_4_,uVar23);
    FUN_108b599cc();
    uVar23 = *(uint *)(param_1 + 0x1110);
    uVar15 = -uVar23;
    if (-1 < (int)uVar23) {
      uVar15 = uVar23;
    }
    iVar24 = (int)LZCOUNT(uVar15);
    iVar18 = uVar23 << (ulong)(iVar24 - 1U & 0x1f);
    iVar33 = iVar18 >> 0x10;
    uVar23 = 0;
    if (iVar33 != 0) {
      uVar23 = 0x1fffffff / iVar33;
    }
    uVar23 = (int)((ulong)((long)(int)(-((-((ulong)(uVar23 >> 0xf) & 1) & 0xfffffff800000000 |
                                         ((ulong)uVar23 & 0xffff) << 0x13) * (long)iVar18 &
                                        0xfffffff800000000) >> 0x20) * (long)(int)uVar23) >> 0x10) +
             uVar23 * 0x10000;
    uVar7 = iVar24 - 0x10;
    uVar25 = -0x80000000 >> (uVar7 & 0x1f);
    uVar6 = 0x7fffffff >> (ulong)(uVar7 & 0x1f);
    uVar3 = uVar23;
    if ((int)uVar23 <= (int)uVar25) {
      uVar3 = uVar25;
    }
    if ((int)uVar23 <= (int)uVar6) {
      uVar6 = uVar3;
    }
    iVar33 = (int)uVar23 >> (0x10U - iVar24 & 0x1f);
    if (uVar15 >> 0x10 == 0) {
      iVar33 = uVar6 << (ulong)(uVar7 & 0x1f);
    }
    if (0x3ffffffe < iVar33) {
      iVar33 = 0x3fffffff;
    }
    uVar23 = *(uint *)(param_1 + 0x924);
    iVar18 = *(int *)(param_1 + 0x920);
    for (lVar26 = (long)(int)(uVar23 + (int)uStack_b8); lVar26 < iVar18; lVar26 = lVar26 + 1) {
      *(int *)((long)&lStack_f0 + lVar26 * 4 + lVar22 + 0xf0) =
           (int)((ulong)((long)(int)*(short *)((long)&lStack_f0 + lVar26 * 2 + lVar10 + 0xf0) *
                        (long)iVar33) >> 0x10);
    }
    uVar25 = 0;
    uVar3 = *(uint *)(param_1 + 0x914);
    sVar17 = (short)uStack_a8;
    while( true ) {
      uVar15 = (uint)psVar16;
      sVar8 = (short)uVar31;
      if (uVar25 == (uVar3 & ((int)uVar3 >> 0x1f ^ 0xffffffffU))) break;
      psVar16 = (short *)((long)iVar32 * -4);
      piVar28 = (int *)((long)&lStack_f0 + (long)(int)psVar29 * 4 + lVar22 + 0xf0);
      for (uVar31 = *(uint *)(param_1 + 0x91c) &
                    ((int)*(uint *)(param_1 + 0x91c) >> 0x1f ^ 0xffffffffU); uVar31 != 0;
          uVar31 = uVar31 - 1) {
        piVar9 = piVar28 + -(long)iVar32;
        uVar19 = uVar19 * 0xbb38435 + 0x3619636b;
        *piVar28 = ((int)((long)piVar9[2] * (long)(int)*(short *)(param_1 + 0x10c8) * 0x10000 +
                          (((ulong)((long)piVar9[1] * (long)(int)*(short *)(param_1 + 0x10ca)) >>
                           0x10) << 0x20) +
                          (((ulong)((long)*piVar9 * (long)(int)*(short *)(param_1 + 0x10cc)) >> 0x10
                           ) << 0x20) +
                          (((ulong)((long)piVar9[-1] * (long)(int)*(short *)(param_1 + 0x10ce)) >>
                           0x10) << 0x20) +
                          ((long)piVar9[-2] * (long)(int)*(short *)(param_1 + 0x10d0) * 0x10000 &
                          0x3fffffff00000000U) + 0x200000000 >> 0x20) +
                   (int)((ulong)((long)*(int *)(psVar20 + (ulong)(uVar19 >> 0x19) * 2) *
                                (long)(int)sVar8) >> 0x10)) * 4;
        psVar29 = (short *)(ulong)((int)psVar29 + 1);
        piVar28 = piVar28 + 1;
      }
      for (lVar26 = 0; lVar26 != 10; lVar26 = lVar26 + 2) {
        *(short *)(lVar21 + lVar26) =
             (short)((uint)((int)*(short *)(lVar21 + lVar26) * (int)sVar4) >> 0xf);
      }
      uVar31 = (uint)((int)sVar8 * (int)sVar17) >> 0xf;
      uVar15 = *(int *)(param_1 + 0x10c4) +
               (int)((ulong)((long)*(int *)(param_1 + 0x10c4) * 0x28f) >> 0x10);
      iVar33 = (int)*(short *)(param_1 + 0x90c);
      psVar13 = (short *)(ulong)(uint)(iVar33 * 9);
      psVar14 = (short *)(ulong)(uint)(iVar33 * 0x1200);
      if (iVar33 * 0x1200 <= (int)uVar15) {
        uVar15 = iVar33 * 0x1200;
      }
      *(uint *)(param_1 + 0x10c4) = uVar15;
      iVar32 = ((int)uVar15 >> 7) + 1 >> 1;
      uVar25 = uVar25 + 1;
    }
    lVar22 = (long)iVar18 * 4 + lVar22;
    uVar34 = *(undefined8 *)(param_1 + 0x504);
    uVar36 = *(undefined8 *)(param_1 + 0x51c);
    uVar35 = *(undefined8 *)(param_1 + 0x514);
    *(undefined8 *)((long)&iStack_128 + lVar22 + 0xf0) = *(undefined8 *)(param_1 + 0x50c);
    *(undefined8 *)((long)&uStack_130 + lVar22 + 0xf0) = uVar34;
    *(undefined8 *)((long)alStack_118 + lVar22 + 0xf0) = uVar36;
    *(undefined8 *)((long)&uStack_120 + lVar22 + 0xf0) = uVar35;
    uVar34 = *(undefined8 *)(param_1 + 0x524);
    uVar36 = *(undefined8 *)(param_1 + 0x53c);
    uVar35 = *(undefined8 *)(param_1 + 0x534);
    puStack_e8 = (undefined8 *)(param_1 + 0x504);
    *(undefined8 *)((long)alStack_118 + lVar22 + 0x100) = *(undefined8 *)(param_1 + 0x52c);
    *(undefined8 *)((long)alStack_118 + lVar22 + 0xf8) = uVar34;
    *(undefined8 *)((long)alStack_118 + lVar22 + 0x110) = uVar36;
    *(undefined8 *)((long)alStack_118 + lVar22 + 0x108) = uVar35;
    if (9 < (int)uVar23) {
      uVar31 = *(uint *)(param_1 + 0x918);
      uStack_a8 = (long)&uStack_130 + lVar22 + 0xf0;
      uStack_b8 = (ulong)(uVar23 >> 1);
      lStack_c0 = (long)sStack_88;
      psVar13 = (short *)(long)sStack_82;
      psVar14 = (short *)(long)sStack_80;
      uVar15 = (uint)sStack_7e;
      lStack_f0 = (long)(int)uVar31;
      piVar28 = (int *)((long)alStack_118 + lVar22 + 0xec);
      psVar20 = (short *)0xf8000000;
      lVar30 = 0x7ffffff;
      uVar11 = (ulong)uStack_e0 >> 0x20;
      for (uVar27 = 0; uVar27 != (uVar31 & ((int)uVar31 >> 0x1f ^ 0xffffffffU)); uVar27 = uVar27 + 1
          ) {
        lVar21 = uStack_a8 + uVar27 * 4;
        iVar33 = (int)uStack_b8 +
                 (int)((ulong)((long)*(int *)(lVar21 + 0x3c) * (long)(int)lStack_c0) >> 0x10) +
                 (int)((ulong)((long)*(int *)(lVar21 + 0x38) * (long)(int)sStack_86) >> 0x10) +
                 (int)((ulong)((long)*(int *)(lVar21 + 0x34) * (long)(int)sStack_84) >> 0x10) +
                 (int)((ulong)((long)*(int *)(lVar21 + 0x30) * (long)(int)sStack_82) >> 0x10) +
                 (int)((ulong)((long)*(int *)(lVar21 + 0x2c) * (long)(int)sStack_80) >> 0x10) +
                 (int)((ulong)((long)*(int *)(lVar21 + 0x28) * (long)(int)sStack_7e) >> 0x10) +
                 (int)((ulong)((long)*(int *)(lVar21 + 0x24) * (long)(int)sStack_7c) >> 0x10) +
                 (int)((ulong)((long)*(int *)(lVar21 + 0x20) * (long)(int)sStack_7a) >> 0x10) +
                 (int)((ulong)((long)*(int *)(lVar21 + 0x1c) * (long)(int)sStack_78) >> 0x10) +
                 (int)((ulong)((long)*(int *)(lVar21 + 0x18) * (long)(int)sStack_76) >> 0x10);
        psVar29 = asStack_74;
        piVar9 = piVar28;
        for (lVar21 = (ulong)uVar23 - 10; lVar21 != 0; lVar21 = lVar21 + -1) {
          iVar33 = iVar33 + (int)((ulong)((long)(int)*psVar29 * (long)*piVar9) >> 0x10);
          psVar29 = psVar29 + 1;
          piVar9 = piVar9 + -1;
        }
        if (iVar33 < -0x7ffffff) {
          iVar33 = -0x8000000;
        }
        if (0x7fffffe < iVar33) {
          iVar33 = 0x7ffffff;
        }
        iVar33 = NEON_sqadd(*(undefined4 *)((long)&lStack_f0 + uVar27 * 4 + lVar22 + 0xf0),
                            iVar33 << 4);
        *(int *)((long)&lStack_f0 + uVar27 * 4 + lVar22 + 0xf0) = iVar33;
        iVar33 = ((int)((ulong)((long)(int)uVar11 * (long)iVar33) >> 0x10) >> 7) + 1 >> 1;
        if (iVar33 < -0x7fff) {
          iVar33 = -0x8000;
        }
        if (0x7ffe < iVar33) {
          iVar33 = 0x7fff;
        }
        *(short *)(lStack_b0 + uVar27 * 2) = (short)iVar33;
        piVar28 = piVar28 + 1;
      }
      puVar1 = (undefined8 *)(uStack_a8 + lStack_f0 * 4);
      uVar34 = *puVar1;
      uVar36 = puVar1[3];
      uVar35 = puVar1[2];
      puStack_e8[1] = puVar1[1];
      *puStack_e8 = uVar34;
      puStack_e8[3] = uVar36;
      puStack_e8[2] = uVar35;
      uVar34 = puVar1[4];
      uVar36 = puVar1[7];
      uVar35 = puVar1[6];
      puStack_e8[5] = puVar1[5];
      puStack_e8[4] = uVar34;
      puStack_e8[7] = uVar36;
      puStack_e8[6] = uVar35;
      *(uint *)(param_1 + 0x10f8) = uVar19;
      *(short *)(param_1 + 0x10fc) = sVar8;
      for (lVar22 = 0; bVar12 = lVar22 == 0x10, !bVar12; lVar22 = lVar22 + 4) {
        *(int *)(lStack_c8 + lVar22) = iVar32;
      }
      func_0x000108b56020(uStack_68);
      if (bVar12) {
        return;
      }
      goto LAB_108b55d64;
    }
  }
  _abort();
LAB_108b55d64:
  ___stack_chk_fail();
  *(long *)((long)&uStack_120 + lVar10 + 0xf0) = lVar30;
  *(short **)((long)alStack_118 + lVar10 + 0xf0) = psVar20;
  *(long *)((long)alStack_118 + lVar10 + 0xf8) = param_1;
  *(short **)((long)alStack_118 + lVar10 + 0x100) = psVar29;
  *(undefined1 **)((long)alStack_118 + lVar10 + 0x108) = &stack0xfffffffffffffff0;
  *(code **)((long)alStack_118 + lVar10 + 0x110) = FUN_108b55d68;
  if (*(int *)(psVar13 + 0x85c) == 0) {
    if (*(int *)(psVar13 + 0x87a) != 0) {
      func_0x000108b56014((long)&iStack_128 + lVar10 + 0xf0,(long)&iStack_124 + lVar10 + 0xf0);
      iVar33 = *(int *)((long)&iStack_124 + lVar10 + 0xf0);
      iVar32 = *(int *)(psVar13 + 0x882);
      if (iVar33 - iVar32 == 0 || iVar33 < iVar32) {
        iVar18 = *(int *)((long)&iStack_128 + lVar10 + 0xf0);
        if (iVar33 < iVar32) {
          iVar18 = iVar18 >> (iVar32 - iVar33 & 0x1fU);
        }
      }
      else {
        *(int *)(psVar13 + 0x880) = *(int *)(psVar13 + 0x880) >> (iVar33 - iVar32 & 0x1fU);
        iVar18 = *(int *)((long)&iStack_128 + lVar10 + 0xf0);
      }
      iVar33 = *(int *)(psVar13 + 0x880);
      if (iVar33 < iVar18) {
        iVar32 = iVar33 << (ulong)((int)LZCOUNT(iVar33) - 1U & 0x1f);
        *(int *)(psVar13 + 0x880) = iVar32;
        uVar31 = 0x19 - (int)LZCOUNT(iVar33);
        iVar18 = iVar18 >> (uVar31 & ((int)uVar31 >> 0x1f ^ 0xffffffffU) & 0x1f);
        if (iVar18 < 2) {
          iVar18 = 1;
        }
        uVar31 = 0;
        if (iVar18 != 0) {
          uVar31 = iVar32 / iVar18;
        }
        if ((int)uVar31 < 1) {
          iVar33 = 0;
        }
        else {
          uVar19 = (uint)LZCOUNT(uVar31);
          uVar23 = uVar31;
          if (uVar19 - 0x18 != 0) {
            uVar23 = (uVar31 << (ulong)(uVar19 + 8 & 0x1f)) +
                     (uVar31 >> (ulong)(0x18 - uVar19 & 0x1f));
            if (uVar31 < 0x80) {
              uVar23 = uVar31 << (ulong)(uVar19 - 0x18 & 0x1f);
            }
          }
          uVar25 = 0xb486;
          if ((LZCOUNT(uVar31) & 1U) != 0) {
            uVar25 = 0x8000;
          }
          uVar25 = uVar25 >> (ulong)(uVar19 >> 1);
          iVar33 = (uVar25 + (uVar25 * (uVar23 & 0x7f) * 0xd5 >> 0x10)) * 0x10;
        }
        iVar32 = 0;
        if (uVar15 != 0) {
          iVar32 = (0x10000 - iVar33) / (int)uVar15;
        }
        uVar27 = (ulong)(uVar15 & ((int)uVar15 >> 0x1f ^ 0xffffffffU));
        do {
          if (uVar27 == 0) break;
          *psVar14 = (short)((uint)(iVar33 * *psVar14) >> 0x10);
          iVar33 = iVar33 + iVar32 * 4;
          uVar27 = uVar27 - 1;
          psVar14 = psVar14 + 1;
        } while (iVar33 < 0x10001);
      }
    }
    psVar13[0x87a] = 0;
    psVar13[0x87b] = 0;
  }
  else {
    func_0x000108b56014(psVar13 + 0x880,psVar13 + 0x882);
    psVar13[0x87a] = 1;
    psVar13[0x87b] = 0;
  }
  return;
}



/* Entry: 108b55d68; end: 108b55ef3;  */

void FUN_108b55d68(long param_1,short *param_2,uint param_3)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  ulong uVar7;
  int iStack_38;
  int iStack_34;
  
  if (*(int *)(param_1 + 0x10b8) == 0) {
    if (*(int *)(param_1 + 0x10f4) != 0) {
      FUN_108b56014(&iStack_38,&iStack_34);
      iVar4 = *(int *)(param_1 + 0x1104);
      if (iStack_34 - iVar4 == 0 || iStack_34 < iVar4) {
        if (iStack_34 < iVar4) {
          iStack_38 = iStack_38 >> (iVar4 - iStack_34 & 0x1fU);
        }
      }
      else {
        *(int *)(param_1 + 0x1100) = *(int *)(param_1 + 0x1100) >> (iStack_34 - iVar4 & 0x1fU);
      }
      iVar4 = *(int *)(param_1 + 0x1100);
      if (iVar4 < iStack_38) {
        iVar1 = iVar4 << (ulong)((int)LZCOUNT(iVar4) - 1U & 0x1f);
        *(int *)(param_1 + 0x1100) = iVar1;
        uVar2 = 0x19 - (int)LZCOUNT(iVar4);
        iStack_38 = iStack_38 >> (uVar2 & ((int)uVar2 >> 0x1f ^ 0xffffffffU) & 0x1f);
        if (iStack_38 < 2) {
          iStack_38 = 1;
        }
        uVar2 = 0;
        if (iStack_38 != 0) {
          uVar2 = iVar1 / iStack_38;
        }
        if ((int)uVar2 < 1) {
          iVar4 = 0;
        }
        else {
          uVar3 = (uint)LZCOUNT(uVar2);
          uVar5 = uVar2;
          if (uVar3 - 0x18 != 0) {
            uVar5 = (uVar2 << (ulong)(uVar3 + 8 & 0x1f)) + (uVar2 >> (ulong)(0x18 - uVar3 & 0x1f));
            if (uVar2 < 0x80) {
              uVar5 = uVar2 << (ulong)(uVar3 - 0x18 & 0x1f);
            }
          }
          uVar6 = 0xb486;
          if ((LZCOUNT(uVar2) & 1U) != 0) {
            uVar6 = 0x8000;
          }
          uVar6 = uVar6 >> (ulong)(uVar3 >> 1);
          iVar4 = (uVar6 + (uVar6 * (uVar5 & 0x7f) * 0xd5 >> 0x10)) * 0x10;
        }
        iVar1 = 0;
        if (param_3 != 0) {
          iVar1 = (0x10000 - iVar4) / (int)param_3;
        }
        uVar7 = (ulong)(param_3 & ((int)param_3 >> 0x1f ^ 0xffffffffU));
        do {
          if (uVar7 == 0) break;
          *param_2 = (short)((uint)(iVar4 * *param_2) >> 0x10);
          iVar4 = iVar4 + iVar1 * 4;
          uVar7 = uVar7 - 1;
          param_2 = param_2 + 1;
        } while (iVar4 < 0x10001);
      }
    }
    *(undefined4 *)(param_1 + 0x10f4) = 0;
  }
  else {
    FUN_108b56014(param_1 + 0x1100,param_1 + 0x1104);
    *(undefined4 *)(param_1 + 0x10f4) = 1;
  }
  return;
}



/* Entry: 108b55ef4; end: 108b56013;  */

void FUN_108b55ef4(undefined8 param_1,undefined8 param_2,int *param_3,uint *param_4,long param_5,
                  long param_6,undefined8 param_7,int param_8)

{
  short *psVar1;
  undefined1 uVar2;
  int *piVar3;
  uint *puVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  long extraout_x8;
  long lVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  undefined1 *puVar12;
  ulong uVar13;
  undefined1 auStack_50 [8];
  undefined8 uStack_48;
  
  uVar6 = (uint)param_7;
  uStack_48 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  uVar7 = uVar6;
  (*(code *)PTR____chkstk_darwin_11034bd40)
            ((-(ulong)((uVar6 & 0x7fffffff) >> 0x1e) & 0xfffffffe00000000 | (ulong)(uVar6 << 1) << 1
             ) + 0xf & 0xfffffffffffffff0);
  iVar5 = uVar7 * (param_8 + -2);
  puVar12 = auStack_50 + -extraout_x8;
  for (lVar8 = 0; uVar2 = lVar8 == 2, !(bool)uVar2; lVar8 = lVar8 + 1) {
    for (uVar13 = 0; (uVar7 & ((int)uVar7 >> 0x1f ^ 0xffffffffU)) != uVar13; uVar13 = uVar13 + 1) {
      iVar10 = (int)((ulong)((long)*(int *)(param_6 + lVar8 * 4) *
                            (long)*(int *)(param_5 + (long)iVar5 * 4 + uVar13 * 4)) >> 0x10) >> 8;
      if (iVar10 < -0x7fff) {
        iVar10 = -0x8000;
      }
      if (0x7ffe < iVar10) {
        iVar10 = 0x7fff;
      }
      *(short *)(puVar12 + uVar13 * 2) = (short)iVar10;
    }
    iVar5 = iVar5 + uVar6;
    puVar12 = puVar12 + (-(ulong)(uVar7 >> 0x1f) & 0xfffffffe00000000 | (ulong)uVar7 << 1);
  }
  FUN_108b5b590();
  piVar3 = param_3;
  puVar4 = param_4;
  FUN_108b5b590(param_3,param_4,auStack_50 + -extraout_x8 + (long)(int)uVar7 * 2,param_7);
  func_0x000108b56020(uStack_48);
  if ((bool)uVar2) {
    return;
  }
  ___stack_chk_fail();
  iVar5 = (int)param_3;
  uVar7 = 0x1f - (int)LZCOUNT(iVar5);
  for (lVar8 = 0; iVar10 = (int)param_3, lVar8 < iVar5 + -1; lVar8 = lVar8 + 2) {
    psVar1 = (short *)((long)param_4 + lVar8 * 2);
    iVar11 = (int)*psVar1;
    iVar9 = (int)psVar1[1];
    param_3 = (int *)(ulong)(((uint)(iVar11 * iVar11 + iVar9 * iVar9) >> (ulong)(uVar7 & 0x1f)) +
                            iVar10);
  }
  if ((int)lVar8 < iVar5) {
    iVar9 = (int)*(short *)((long)param_4 + lVar8 * 2);
    iVar10 = ((uint)(iVar9 * iVar9) >> (ulong)(uVar7 & 0x1f)) + iVar10;
  }
  iVar9 = 0;
  uVar7 = 0x22 - ((int)LZCOUNT(iVar5) + (int)LZCOUNT(iVar10));
  uVar7 = uVar7 & ((int)uVar7 >> 0x1f ^ 0xffffffffU);
  for (lVar8 = 0; lVar8 < iVar5 + -1; lVar8 = lVar8 + 2) {
    psVar1 = (short *)((long)param_4 + lVar8 * 2);
    iVar11 = (int)*psVar1;
    iVar10 = (int)psVar1[1];
    iVar9 = ((uint)(iVar11 * iVar11 + iVar10 * iVar10) >> (ulong)(uVar7 & 0x1f)) + iVar9;
  }
  if ((int)lVar8 < iVar5) {
    iVar5 = (int)*(short *)((long)param_4 + lVar8 * 2);
    iVar9 = ((uint)(iVar5 * iVar5) >> (ulong)(uVar7 & 0x1f)) + iVar9;
  }
  *puVar4 = uVar7;
  *piVar3 = iVar9;
  return;
}



/* Entry: 108b56014; end: 108b56033;  */

void FUN_108b56014(int *param_1,uint *param_2)

{
  short *psVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  int iVar6;
  long unaff_x20;
  int unaff_w21;
  
  uVar2 = 0x1f - (int)LZCOUNT(unaff_w21);
  iVar3 = unaff_w21;
  for (lVar5 = 0; lVar5 < unaff_w21 + -1; lVar5 = lVar5 + 2) {
    psVar1 = (short *)(unaff_x20 + lVar5 * 2);
    iVar6 = (int)*psVar1;
    iVar4 = (int)psVar1[1];
    iVar3 = ((uint)(iVar6 * iVar6 + iVar4 * iVar4) >> (ulong)(uVar2 & 0x1f)) + iVar3;
  }
  if ((int)lVar5 < unaff_w21) {
    iVar4 = (int)*(short *)(unaff_x20 + lVar5 * 2);
    iVar3 = ((uint)(iVar4 * iVar4) >> (ulong)(uVar2 & 0x1f)) + iVar3;
  }
  iVar4 = 0;
  uVar2 = 0x22 - ((int)LZCOUNT(unaff_w21) + (int)LZCOUNT(iVar3));
  uVar2 = uVar2 & ((int)uVar2 >> 0x1f ^ 0xffffffffU);
  for (lVar5 = 0; lVar5 < unaff_w21 + -1; lVar5 = lVar5 + 2) {
    psVar1 = (short *)(unaff_x20 + lVar5 * 2);
    iVar6 = (int)*psVar1;
    iVar3 = (int)psVar1[1];
    iVar4 = ((uint)(iVar6 * iVar6 + iVar3 * iVar3) >> (ulong)(uVar2 & 0x1f)) + iVar4;
  }
  if ((int)lVar5 < unaff_w21) {
    iVar3 = (int)*(short *)(unaff_x20 + lVar5 * 2);
    iVar4 = ((uint)(iVar3 * iVar3) >> (ulong)(uVar2 & 0x1f)) + iVar4;
  }
  *param_2 = uVar2;
  *param_1 = iVar4;
  return;
}



/* Entry: 108b56034; end: 108b561ff;  */

/* WARNING: Possible PIC construction at 0x000108b560b8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000108b56168: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000108b560bc) */
/* WARNING: Removing unreachable block (ram,0x000108b5616c) */
/* WARNING: Removing unreachable block (ram,0x000108b561fc) */
/* WARNING: Removing unreachable block (ram,0x000108b5620c) */
/* WARNING: Removing unreachable block (ram,0x000108b56224) */
/* WARNING: Removing unreachable block (ram,0x000108b561d8) */

void FUN_108b56034(long param_1,undefined8 param_2)

{
  byte *pbVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint uStack_94;
  uint auStack_90 [2];
  undefined1 auStack_88 [16];
  undefined1 auStack_78 [32];
  undefined8 uStack_58;
  
  uStack_58 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  FUN_108b56200(auStack_78,param_2,8);
  FUN_108b56200(auStack_88,auStack_78,4);
  FUN_108b56200(auStack_90,auStack_88,2);
  FUN_108b56200(&uStack_94,auStack_90,1);
  if (0 < (int)uStack_94) {
    uVar3 = *(uint *)(param_1 + 0x20);
    uVar2 = uVar3 >> 8;
    if ((int)auStack_90[0] < 1) {
      iVar4 = uVar3 - uVar2 * (byte)(&UNK_10df92207)
                                    [(long)(int)auStack_90[0] +
                                     (ulong)(byte)(&UNK_10df9229f)[uStack_94]];
    }
    else {
      pbVar1 = &UNK_10df92207 + (ulong)auStack_90[0] + (ulong)(byte)(&UNK_10df9229f)[uStack_94];
      *(uint *)(param_1 + 0x24) = (*(int *)(param_1 + 0x24) + uVar3) - uVar2 * pbVar1[-1];
      iVar4 = ((uint)pbVar1[-1] - (uint)*pbVar1) * uVar2;
    }
    *(int *)(param_1 + 0x20) = iVar4;
    uVar3 = *(uint *)(param_1 + 0x20);
    while (uVar3 < 0x800001) {
      FUN_108b4a4c0(param_1,*(uint *)(param_1 + 0x24) >> 0x17);
      uVar3 = *(int *)(param_1 + 0x20) << 8;
      *(uint *)(param_1 + 0x20) = uVar3;
      *(uint *)(param_1 + 0x24) = (*(uint *)(param_1 + 0x24) & 0x7fffff) << 8;
      *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + 8;
    }
    return;
  }
  return;
}



/* Entry: 108b56200; end: 108b5624b;  */

void FUN_108b56200(int *param_1,long param_2,uint param_3)

{
  int *piVar1;
  ulong uVar2;
  
  piVar1 = (int *)(param_2 + 4);
  for (uVar2 = (ulong)param_3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *param_1 = *piVar1 + piVar1[-1];
    piVar1 = piVar1 + 2;
    param_1 = param_1 + 1;
  }
  return;
}



/* Entry: 108b5624c; end: 108b563cf;  */

void FUN_108b5624c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 *puVar1;
  undefined1 in_ZR;
  short sVar2;
  short *psVar3;
  undefined8 uVar4;
  short *psVar5;
  ulong uVar6;
  undefined *puVar7;
  short sVar8;
  undefined8 unaff_x19;
  long unaff_x20;
  undefined *unaff_x21;
  undefined *puVar9;
  undefined *unaff_x22;
  undefined *puVar10;
  undefined1 *unaff_x29;
  undefined1 *puVar11;
  code *unaff_x30;
  undefined1 auStack_80 [12];
  undefined1 auStack_74 [2];
  undefined1 auStack_72 [2];
  undefined1 auStack_70 [2];
  undefined1 auStack_6e [2];
  undefined1 auStack_6c [2];
  undefined1 auStack_6a [2];
  undefined1 auStack_68 [2];
  undefined1 auStack_66 [2];
  undefined1 auStack_64 [2];
  short sStack_62;
  undefined1 auStack_60 [2];
  undefined1 auStack_5e [2];
  undefined1 auStack_5c [2];
  undefined1 auStack_5a [2];
  undefined8 uStack_58;
  
  puVar1 = auStack_80;
  puVar11 = &stack0xfffffffffffffff0;
  uStack_58 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  puVar7 = &UNK_10df92207;
  uVar4 = param_2;
  FUN_108b563d0(auStack_74,auStack_72,param_2,param_3,&UNK_10df92207);
  func_0x000108b56460(auStack_60,auStack_5e);
  puVar10 = &UNK_10df920d7;
  func_0x000108b56444(auStack_70,auStack_6e);
  puVar9 = &UNK_10df9203f;
  func_0x000108b56438(param_1,param_1 + 2);
  func_0x000108b56438(param_1 + 4,param_1 + 6);
  func_0x000108b56444(auStack_6c,auStack_6a);
  func_0x000108b56438(param_1 + 8,param_1 + 10);
  func_0x000108b56438(param_1 + 0xc,param_1 + 0xe);
  func_0x000108b56460(auStack_5c,auStack_5a);
  func_0x000108b56444(auStack_68,auStack_66);
  func_0x000108b56438(param_1 + 0x10,param_1 + 0x12);
  func_0x000108b56438(param_1 + 0x14,param_1 + 0x16);
  func_0x000108b56444(auStack_64,&sStack_62);
  psVar3 = (short *)(param_1 + 0x18);
  psVar5 = (short *)(param_1 + 0x1a);
  func_0x000108b56438();
  uVar6 = (ulong)sStack_62;
  func_0x000108b5646c(uStack_58);
  if ((bool)in_ZR) {
    psVar3 = (short *)(param_1 + 0x1c);
    psVar5 = (short *)(param_1 + 0x1e);
    puVar1 = (undefined1 *)register0x00000008;
    uVar4 = param_2;
    puVar7 = puVar9;
    param_2 = unaff_x19;
    param_1 = unaff_x20;
    puVar9 = unaff_x21;
    puVar10 = unaff_x22;
    puVar11 = unaff_x29;
  }
  else {
    unaff_x30 = FUN_108b563d0;
    ___stack_chk_fail();
  }
  *(undefined **)(puVar1 + -0x30) = puVar10;
  *(undefined **)(puVar1 + -0x28) = puVar9;
  *(long *)(puVar1 + -0x20) = param_1;
  *(undefined8 *)(puVar1 + -0x18) = param_2;
  *(undefined1 **)(puVar1 + -0x10) = puVar11;
  *(code **)(puVar1 + -8) = unaff_x30;
  if ((int)uVar6 < 1) {
    sVar2 = 0;
    sVar8 = 0;
  }
  else {
    func_0x000108b49e28(uVar4,puVar7 + (byte)(&UNK_10df9229f)[uVar6 & 0xffffffff],8);
    sVar2 = (short)uVar4;
    sVar8 = (short)uVar6 - sVar2;
  }
  *psVar3 = sVar2;
  *psVar5 = sVar8;
  return;
}



/* Entry: 108b563d0; end: 108b56437;  */

void FUN_108b563d0(short *param_1,short *param_2,undefined8 param_3,uint param_4,long param_5)

{
  short sVar1;
  short sVar2;
  
  if ((int)param_4 < 1) {
    sVar1 = 0;
    sVar2 = 0;
  }
  else {
    func_0x000108b49e28(param_3,param_5 + (ulong)(byte)(&UNK_10df9229f)[param_4],8);
    sVar1 = (short)param_3;
    sVar2 = (short)param_4 - sVar1;
  }
  *param_1 = sVar1;
  *param_2 = sVar2;
  return;
}



/* Entry: 108b56438; end: 108b56503;  */

void FUN_108b56438(short *param_1,short *param_2,undefined8 param_3,int param_4)

{
  short sVar1;
  short unaff_w19;
  
  if (param_4 < 1) {
    unaff_w19 = 0;
    sVar1 = 0;
  }
  else {
    func_0x000108b49e28();
    sVar1 = (short)param_4 - unaff_w19;
  }
  *param_1 = unaff_w19;
  *param_2 = sVar1;
  return;
}



/* Entry: 108b56504; end: 108b569df;  */

int FUN_108b56504(long param_1,undefined8 param_2)

{
  uint *puVar1;
  int *piVar2;
  short *psVar3;
  short sVar4;
  short sVar5;
  int iVar6;
  uint uVar7;
  ulong uVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  undefined8 extraout_x8;
  ulong uVar12;
  long lVar13;
  uint uVar14;
  int extraout_w12;
  long extraout_x13;
  int *piVar15;
  ulong extraout_x15;
  int iVar16;
  int iVar17;
  short *psVar18;
  short asStack_a2 [5];
  int aiStack_98 [4];
  int aiStack_88 [4];
  uint auStack_78 [4];
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar9 = *(uint *)(param_1 + 0x11e8);
  if (((int)uVar9 < 0x141) && ((uVar9 & 7) == 0)) {
    iVar10 = (int)uVar9 >> 3;
    iVar6 = (int)uVar9 >> 2;
    iVar16 = iVar10 + iVar6;
    aiStack_98[0] = 0;
    iVar17 = iVar16 + iVar10;
    aiStack_98[3] = iVar17 + iVar6;
    lVar13 = param_1;
    aiStack_98[1] = iVar16;
    aiStack_98[2] = iVar17;
    (*(code *)PTR____chkstk_darwin_11034bd40)(param_2);
    psVar18 = (short *)((long)asStack_a2 + (2 - extraout_x13));
    func_0x000108b595bc(extraout_x8,lVar13 + 0x24,psVar18,psVar18 + extraout_w12);
    func_0x000108b595bc(psVar18,param_1 + 0x2c,psVar18,psVar18 + iVar17,(int)uVar9 >> 1);
    func_0x000108b595bc(psVar18,param_1 + 0x34,psVar18,psVar18 + iVar16,iVar6);
    uVar9 = iVar10 - 1;
    sVar5 = psVar18[(int)uVar9];
    psVar18[(int)uVar9] = sVar5 >> 1;
    for (uVar12 = (ulong)uVar9; 0 < (int)uVar12; uVar12 = uVar12 - 1) {
      psVar3 = psVar18 + uVar12;
      sVar4 = psVar3[-1];
      psVar3[-1] = sVar4 >> 1;
      *psVar3 = *psVar3 - (sVar4 >> 1);
    }
    *psVar18 = *psVar18 - *(short *)(param_1 + 0x5c);
    *(short *)(param_1 + 0x5c) = sVar5 >> 1;
    uVar12 = extraout_x15;
    for (lVar13 = 0; lVar13 != 4; lVar13 = lVar13 + 1) {
      iVar16 = 0;
      iVar17 = 0;
      uVar9 = 4 - (int)lVar13;
      if (2 < uVar9) {
        uVar9 = 3;
      }
      iVar10 = *(int *)(param_1 + 0x11e8) >> (uVar9 & 0x1f);
      uVar7 = iVar10 >> 2;
      uVar9 = *(uint *)(param_1 + 0x3c + lVar13 * 4);
      for (; iVar16 != 4; iVar16 = iVar16 + 1) {
        uVar12 = 0;
        iVar6 = iVar17;
        for (uVar11 = uVar7 & (iVar10 >> 0x1f ^ 0xffffffffU); uVar11 != 0; uVar11 = uVar11 - 1) {
          uVar12 = (ulong)((uint)uVar12 +
                          ((int)psVar18[iVar6 + aiStack_98[lVar13]] >> 3) *
                          ((int)psVar18[iVar6 + aiStack_98[lVar13]] >> 3));
          iVar6 = iVar6 + 1;
        }
        uVar9 = ((uint)uVar12 >> (iVar16 == 3)) + uVar9;
        if (0x7fffffff < uVar9) {
          uVar9 = 0x7fffffff;
        }
        iVar17 = iVar17 + uVar7;
      }
      auStack_78[lVar13] = uVar9;
      *(int *)(param_1 + 0x3c + lVar13 * 4) = (int)uVar12;
    }
    iVar16 = *(int *)(param_1 + 0x90);
    if (iVar16 < 1000) {
      iVar17 = (iVar16 >> 4) + 1;
      *(int *)(param_1 + 0x90) = iVar16 + 1;
      iVar16 = 0;
      if (iVar17 != 0) {
        iVar16 = 0x7fff / iVar17;
      }
    }
    else {
      iVar16 = 0;
    }
    piVar2 = (int *)(param_1 + 0x60);
    piVar15 = piVar2;
    for (lVar13 = 0; lVar13 != 0x10; lVar13 = lVar13 + 4) {
      iVar17 = *piVar15;
      uVar9 = piVar15[8] + *(int *)((long)auStack_78 + lVar13);
      if (0x7fffffff < uVar9) {
        uVar9 = 0x7fffffff;
      }
      uVar7 = 0;
      if (uVar9 != 0) {
        uVar7 = 0x7fffffff / uVar9;
      }
      if (iVar17 * 8 < (int)uVar9) {
        iVar17 = 0x80;
      }
      else if ((int)uVar9 < iVar17) {
        iVar17 = 0x400;
      }
      else {
        iVar17 = (int)((ulong)((long)iVar17 * (long)(int)uVar7) >> 0x10) >> 5;
      }
      if (iVar17 <= iVar16) {
        iVar17 = iVar16;
      }
      iVar17 = piVar15[4] +
               (int)((ulong)((long)(int)(short)iVar17 * (long)(int)(uVar7 - piVar15[4])) >> 0x10);
      piVar15[4] = iVar17;
      iVar10 = 0;
      if (iVar17 != 0) {
        iVar10 = 0x7fffffff / iVar17;
      }
      if (0xfffffe < iVar10) {
        iVar10 = 0xffffff;
      }
      *piVar15 = iVar10;
      piVar15 = piVar15 + 1;
    }
    iVar17 = 0;
    iVar16 = 0;
    for (lVar13 = 0; lVar13 != 0x10; lVar13 = lVar13 + 4) {
      uVar9 = *(uint *)((long)auStack_78 + lVar13);
      iVar10 = *(int *)((long)piVar2 + lVar13);
      uVar7 = uVar9 - iVar10;
      if ((int)uVar7 < 1) {
        *(undefined4 *)((long)aiStack_88 + lVar13) = 0x100;
      }
      else {
        uVar11 = uVar9 << 8;
        if (0x7fffff < uVar9) {
          uVar11 = uVar9;
          iVar10 = iVar10 >> 8;
        }
        iVar6 = 0;
        if (iVar10 + 1 != 0) {
          iVar6 = (int)uVar11 / (iVar10 + 1);
        }
        *(int *)((long)aiStack_88 + lVar13) = iVar6;
        func_0x000108b59910();
        iVar6 = iVar6 + -0x400;
        iVar10 = iVar6;
        if (uVar7 >> 0x14 == 0) {
          FUN_108b569e0();
          iVar10 = (int)((ulong)((long)(int)(short)iVar6 * (long)(int)(uVar7 << 6)) >> 0x10);
        }
        iVar17 = iVar17 + iVar6 * iVar6;
        iVar16 = iVar16 + (int)((ulong)((long)(int)(short)iVar10 *
                                       (long)*(int *)(&UNK_10df922f0 + lVar13)) >> 0x10);
      }
    }
    func_0x000108b5b360();
    lVar13 = 0;
    iVar10 = 0;
    *(int *)(param_1 + 0x1278) = iVar16 * 2 + -0x8000;
    while (lVar13 != 4) {
      puVar1 = auStack_78 + lVar13;
      piVar15 = piVar2 + lVar13;
      lVar13 = lVar13 + 1;
      iVar10 = iVar10 + ((int)(*puVar1 - *piVar15) >> 4) * (int)lVar13;
    }
    uVar12 = (ulong)(uint)(iVar17 / 4);
    FUN_108b569e0();
    uVar12 = (ulong)((int)((ulong)((long)(int)(short)(uVar12 * 0x3000000000000 >> 0x30) * 45000) >>
                          0x10) - 0x80);
    func_0x000108b5b360();
    iVar16 = (int)uVar12;
    iVar17 = *(int *)(param_1 + 0x11e8);
    iVar6 = *(int *)(param_1 + 0x11e0);
    uVar9 = iVar10 >> (iVar17 == iVar6 * 0x14);
    if ((int)uVar9 < 1) {
      iVar16 = iVar16 >> 1;
    }
    else if (uVar9 >> 0xe == 0) {
      uVar8 = (ulong)(uVar9 << 0x10);
      FUN_108b569e0();
      iVar16 = (int)((ulong)((long)(int)(short)uVar12 * (long)(int)((uint)uVar8 | 0x8000)) >> 0x10);
      uVar12 = uVar8;
    }
    lVar13 = 0;
    iVar10 = iVar16 >> 7;
    if (0xfe < iVar10) {
      iVar10 = 0xff;
    }
    *(int *)(param_1 + 0x11b4) = iVar10;
    for (; uVar9 = (uint)uVar12, lVar13 != 0x10; lVar13 = lVar13 + 4) {
      iVar10 = *(int *)(param_1 + 0x4c) +
               (int)((ulong)((long)((iVar16 * (short)iVar16 >> 0x14) >> (iVar17 == iVar6 * 10)) *
                            ((long)*(int *)((long)aiStack_88 + lVar13) -
                            (long)*(int *)(param_1 + 0x4c))) >> 0x10);
      *(int *)(param_1 + 0x4c) = iVar10;
      func_0x000108b59910();
      uVar12 = (ulong)(uint)(iVar10 * 3 + -0x1400 >> 4);
      func_0x000108b5b360();
      *(int *)(param_1 + 0x1268) = (int)uVar12;
      param_1 = param_1 + 4;
    }
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
      return 0;
    }
  }
  else {
    _abort();
    uVar9 = (uint)param_1;
  }
  ___stack_chk_fail();
  if ((int)uVar9 < 1) {
    return 0;
  }
  uVar11 = (uint)LZCOUNT(uVar9);
  uVar7 = uVar9;
  if (uVar11 - 0x18 != 0) {
    uVar7 = (uVar9 << (ulong)(uVar11 + 8 & 0x1f)) + (uVar9 >> (ulong)(0x18 - uVar11 & 0x1f));
    if (uVar9 < 0x80) {
      uVar7 = uVar9 << (ulong)(uVar11 - 0x18 & 0x1f);
    }
  }
  uVar14 = 0xb486;
  if ((LZCOUNT(uVar9) & 1U) != 0) {
    uVar14 = 0x8000;
  }
  uVar14 = uVar14 >> (ulong)(uVar11 >> 1);
  return uVar14 + (uVar14 * (uVar7 & 0x7f) * 0xd5 >> 0x10);
}



/* Entry: 108b569e0; end: 108b56bb3;  */

int FUN_108b569e0(uint param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  if ((int)param_1 < 1) {
    return 0;
  }
  uVar2 = (uint)LZCOUNT(param_1);
  uVar1 = param_1;
  if (uVar2 - 0x18 != 0) {
    uVar1 = (param_1 << (ulong)(uVar2 + 8 & 0x1f)) + (param_1 >> (ulong)(0x18 - uVar2 & 0x1f));
    if (param_1 < 0x80) {
      uVar1 = param_1 << (ulong)(uVar2 - 0x18 & 0x1f);
    }
  }
  uVar3 = 0xb486;
  if ((LZCOUNT(param_1) & 1U) != 0) {
    uVar3 = 0x8000;
  }
  uVar3 = uVar3 >> (ulong)(uVar2 >> 1);
  return uVar3 + (uVar3 * (uVar1 & 0x7f) * 0xd5 >> 0x10);
}



/* Entry: 108b56bb4; end: 108b57013;  */

void FUN_108b56bb4(long param_1,long param_2,char *param_3,int *param_4,int *param_5,long param_6,
                  long param_7,undefined4 param_8,uint param_9)

{
  long lVar1;
  char cVar2;
  short sVar3;
  int iVar4;
  int iVar5;
  undefined *puVar6;
  long lVar7;
  undefined *puVar8;
  long lVar9;
  uint uVar10;
  ulong uVar11;
  ulong uVar12;
  uint unaff_w26;
  undefined1 *puVar13;
  undefined *puVar14;
  int iStack_cc;
  uint uStack_94;
  int iStack_78;
  int iStack_74;
  int iStack_70;
  undefined1 auStack_6c [12];
  
  iStack_cc = 0;
  uVar11 = (ulong)(param_9 & ((int)param_9 >> 0x1f ^ 0xffffffffU));
  uStack_94 = 0x7fffffff;
  for (lVar9 = 0; lVar9 != 3; lVar9 = lVar9 + 1) {
    unaff_w26 = 0;
    uVar10 = 0;
    puVar6 = (&PTR_DAT_110ab34b0)[lVar9];
    puVar14 = (&PTR_DAT_110ab34c8)[lVar9];
    puVar8 = (&PTR_DAT_110ab34e0)[lVar9];
    puVar13 = auStack_6c;
    cVar2 = (&UNK_10df90ffc)[lVar9];
    iVar5 = *param_4;
    lVar7 = param_6;
    lVar1 = param_7;
    for (uVar12 = uVar11; uVar12 != 0; uVar12 = uVar12 - 1) {
      iVar4 = 0x1855 - iVar5;
      func_0x000108b59968();
      func_0x000108b56e04(puVar13,&iStack_70,&iStack_74,&iStack_78,lVar7,lVar1,puVar14,puVar8,puVar6
                          ,param_8,iVar4 + -0x33,(int)cVar2);
      unaff_w26 = iStack_70 + unaff_w26;
      if (0x7fffffff < unaff_w26) {
        unaff_w26 = 0x7fffffff;
      }
      uVar10 = iStack_74 + uVar10;
      if (0x7fffffff < uVar10) {
        uVar10 = 0x7fffffff;
      }
      iVar4 = iStack_78 + 0x33;
      func_0x000108b59910();
      iVar4 = iVar4 + iVar5;
      iVar5 = 0;
      if (0x37f < iVar4) {
        iVar5 = iVar4 + -0x380;
      }
      lVar7 = lVar7 + 100;
      lVar1 = lVar1 + 0x14;
      puVar13 = puVar13 + 1;
    }
    if ((int)uVar10 <= (int)uStack_94) {
      *param_3 = (char)lVar9;
      _memcpy(param_2,auStack_6c,(long)(int)param_9);
      iStack_cc = iVar5;
      uStack_94 = uVar10;
    }
  }
  puVar6 = (&PTR_DAT_110ab34c8)[*param_3];
  for (uVar12 = 0; uVar12 != uVar11; uVar12 = uVar12 + 1) {
    lVar7 = 0;
    for (lVar9 = 0; lVar9 != 10; lVar9 = lVar9 + 2) {
      *(short *)(param_1 + lVar9) =
           (short)(char)puVar6[lVar7 + (long)*(char *)(param_2 + uVar12) * 0x500000000 >> 0x20] << 7
      ;
      lVar7 = lVar7 + 0x100000000;
    }
    param_1 = param_1 + 10;
  }
  iVar5 = 1;
  if (param_9 != 2) {
    iVar5 = 2;
  }
  sVar3 = (short)((int)unaff_w26 >> iVar5);
  *param_4 = iStack_cc;
  func_0x000108b59910();
  *param_5 = (int)(short)(sVar3 + -0x780) + (short)(sVar3 + -0x780) * -4;
  return;
}



/* Entry: 108b57014; end: 108b570ef;  */

void FUN_108b57014(long param_1)

{
  int iVar1;
  int iVar2;
  
  if (*(char *)(param_1 + 0x11bd) == '\x02') {
    iVar2 = 0;
    if (*(int *)(param_1 + 0x11c0) != 0) {
      iVar2 = (*(int *)(param_1 + 0x11e0) * 0x3e80000) / *(int *)(param_1 + 0x11c0);
    }
    func_0x000108b59910();
    iVar1 = (iVar2 - (*(int *)(param_1 + 8) >> 8)) +
            (int)(((ulong)((long)(int)(short)*(int *)(param_1 + 0x1268) *
                          (long)(*(int *)(param_1 + 0x1268) * -4)) >> 0x10) *
                  (long)(short)((short)iVar2 + -0xaf4) >> 0x10) + -0x800;
    iVar2 = iVar1 * 3;
    if (-1 < iVar1) {
      iVar2 = iVar1;
    }
    if (iVar2 < -0x32) {
      iVar2 = -0x33;
    }
    if (0x32 < iVar2) {
      iVar2 = 0x33;
    }
    iVar2 = *(int *)(param_1 + 8) +
            (int)((ulong)((long)(iVar2 * *(short *)(param_1 + 0x11b4)) * 0x199a) >> 0x10);
    if (iVar2 < 0x2f401) {
      iVar2 = 0x2f400;
    }
    if (0x352ff < iVar2) {
      iVar2 = 0x35300;
    }
    *(int *)(param_1 + 8) = iVar2;
  }
  return;
}



/* Entry: 108b570f0; end: 108b574e3;  */

void FUN_108b570f0(undefined1 *param_1,undefined1 *param_2,short *param_3,long param_4,uint param_5,
                  ulong param_6,ulong param_7)

{
  uint uVar1;
  undefined2 uVar2;
  byte bVar3;
  short sVar4;
  short sVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  uint *puVar10;
  short *psVar11;
  short sVar12;
  undefined1 *puVar13;
  long lVar14;
  undefined1 *puVar15;
  ulong uVar16;
  int extraout_w8;
  long extraout_x8;
  uint *puVar17;
  byte *pbVar18;
  ushort uVar19;
  ushort *puVar20;
  int iVar21;
  int iVar22;
  int iVar23;
  ulong uVar24;
  ulong uVar25;
  int iVar26;
  ulong uVar27;
  long lVar28;
  uint uVar29;
  uint uStack_160;
  undefined2 auStack_15c [6];
  uint auStack_150 [2];
  ulong uStack_148;
  undefined1 *puStack_140;
  int iStack_134;
  ulong uStack_130;
  uint uStack_124;
  ulong uStack_120;
  undefined1 *puStack_118;
  long lStack_110;
  uint *puStack_108;
  int iStack_fc;
  short *psStack_f8;
  ulong uStack_f0;
  int iStack_e4;
  undefined1 auStack_e0 [32];
  undefined1 auStack_c0 [16];
  undefined2 auStack_b0 [16];
  undefined2 auStack_90 [16];
  long lStack_70;
  
  puVar17 = auStack_150;
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_140 = param_1;
  if ((uint)param_7 < 3) {
    FUN_108b5a064(param_2,*(undefined8 *)(param_3 + 0x20),(long)param_3[1]);
    puVar15 = (undefined1 *)(long)*param_3;
    (*(code *)PTR____chkstk_darwin_11034bd40)
              ((-((ulong)puVar15 >> 0x1f & 1) & 0xfffffffc00000000 |
               ((ulong)puVar15 & 0xffffffff) << 2) + 0xf & 0xfffffffffffffff0);
    lVar28 = (long)auStack_150 - extraout_x8;
    uVar16 = (ulong)param_3[1];
    FUN_108b574e4(lVar28,param_2,*(undefined8 *)(param_3 + 4),*(undefined8 *)(param_3 + 8));
    (*(code *)PTR____chkstk_darwin_11034bd40)();
    uVar27 = (-(param_6 >> 0x1f & 1) & 0xfffffffc00000000 | (param_6 & 0xffffffff) << 2) + 0xf &
             0xfffffffffffffff0;
    lVar14 = lVar28 - uVar27;
    lStack_110 = lVar14;
    psStack_f8 = param_3;
    FUN_108b5b3e0(lVar28,lVar14,(long)*param_3,param_6);
    (*(code *)PTR____chkstk_darwin_11034bd40)();
    puVar17 = (uint *)(lVar14 - uVar27);
    uVar29 = (uint)param_6;
    puStack_108 = puVar17;
    (*(code *)PTR____chkstk_darwin_11034bd40)(uVar29 << 4);
    psVar11 = psStack_f8;
    puVar17 = (uint *)((long)puVar17 - (long)extraout_w8);
    uStack_130 = param_7 >> 1 & 0x7fffffff;
    iStack_134 = (int)(param_5 << 0xe) >> 0x10;
    uStack_120 = (ulong)(uVar29 & ((int)uVar29 >> 0x1f ^ 0xffffffffU));
    uVar27 = 0;
    uStack_148 = param_6;
    uStack_124 = param_5;
    puStack_118 = (undefined1 *)puVar17;
    while (puVar10 = puStack_108, param_5 = (uint)puVar15, uVar27 != uStack_120) {
      iVar21 = *(int *)(lStack_110 + uVar27 * 4);
      sVar12 = psStack_f8[1];
      iStack_fc = (int)sVar12;
      lVar14 = *(long *)(psStack_f8 + 4);
      lVar28 = *(long *)(psStack_f8 + 8);
      for (uVar16 = 0; ((int)sVar12 & ((int)sVar12 >> 0x1f ^ 0xffffffffU)) != uVar16;
          uVar16 = uVar16 + 1) {
        sVar4 = *(short *)(lVar28 + (long)(iVar21 * iStack_fc) * 2 + uVar16 * 2);
        auStack_90[uVar16] =
             (short)((uint)((int)(short)(*(short *)(param_2 + uVar16 * 2) +
                                        (ushort)*(byte *)(lVar14 + iVar21 * iStack_fc + uVar16) *
                                        -0x80) * (int)sVar4) >> 0xe);
        sVar5 = *(short *)(param_4 + uVar16 * 2);
        iVar8 = (int)sVar4 * (int)sVar4;
        iVar22 = -(int)sVar5;
        if (-1 < sVar5) {
          iVar22 = (int)sVar5;
        }
        iVar6 = (int)sVar5 << (ulong)((int)LZCOUNT(iVar22) - 1U & 0x1f);
        iVar23 = (int)LZCOUNT(iVar8);
        iVar8 = iVar8 << (ulong)(iVar23 - 1U & 0x1f);
        iVar26 = iVar8 >> 0x10;
        sVar4 = 0;
        if (iVar26 != 0) {
          sVar4 = (short)(0x1fffffff / iVar26);
        }
        iVar26 = (int)((ulong)((long)(int)sVar4 * (long)iVar6) >> 0x10);
        uVar29 = (int)((ulong)((long)(int)sVar4 *
                              (long)(int)(iVar6 - ((uint)((ulong)((long)iVar26 * (long)iVar8) >>
                                                         0x1d) & 0xfffffff8))) >> 0x10) + iVar26;
        iVar23 = (int)LZCOUNT(iVar22) - iVar23;
        uVar2 = (undefined2)((int)uVar29 >> (iVar23 + 8U & 0x1f));
        if (0x34 < iVar23 + 0x1dU) {
          uVar2 = 0;
        }
        uVar9 = -iVar23 - 8;
        uVar1 = -0x80000000 >> (uVar9 & 0x1f);
        uVar7 = 0x7fffffff >> (ulong)(uVar9 & 0x1f);
        if ((int)uVar1 <= (int)uVar29) {
          uVar1 = uVar29;
        }
        if ((int)uVar29 <= (int)uVar7) {
          uVar7 = uVar1;
        }
        if (iVar23 + 0x1dU < 0x15) {
          uVar2 = (short)(uVar7 << (ulong)(uVar9 & 0x1f));
        }
        auStack_b0[uVar16] = uVar2;
      }
      uStack_f0 = uVar27;
      FUN_108b5759c(auStack_e0,auStack_c0,psVar11,(long)iVar21);
      puVar13 = puStack_118 + uStack_f0 * 0x10;
      uVar16 = *(ulong *)(psVar11 + 0x1c);
      sVar12 = psVar11[2];
      sVar4 = psVar11[3];
      *(short *)((long)puVar17 + -0xc) = (short)iStack_fc;
      *(uint *)((long)puVar17 + -0x10) = uStack_124;
      puVar15 = auStack_e0;
      FUN_108b5763c(puVar13,auStack_90,auStack_b0,auStack_c0,puVar15,uVar16,(long)sVar12,(long)sVar4
                   );
      pbVar18 = (byte *)(*(long *)(psVar11 + 0xc) + (long)(int)uStack_130 * (long)(int)*psVar11);
      if (iVar21 == 0) {
        uVar19 = 0x100;
      }
      else {
        pbVar18 = pbVar18 + iVar21;
        uVar19 = (ushort)pbVar18[-1];
      }
      sVar12 = uVar19 - *pbVar18;
      func_0x000108b59910();
      puStack_108[uStack_f0] = (int)puVar13 + (short)(0x400 - sVar12) * iStack_134;
      uVar27 = uStack_f0 + 1;
    }
    param_4 = 1;
    FUN_108b5b3e0(puStack_108,&iStack_e4,uStack_148);
    param_3 = psStack_f8;
    puVar15 = puStack_140;
    *puStack_140 = (char)*(undefined4 *)(lStack_110 + (long)iStack_e4 * 4);
    _memcpy(puStack_140 + 1,puStack_118 + (long)iStack_e4 * 0x10,(long)psStack_f8[1]);
    FUN_108b52f14(param_2);
    param_1 = (undefined1 *)(ulong)*puVar10;
    param_2 = puVar15;
    param_6 = uVar16;
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
      return;
    }
  }
  else {
    _abort();
  }
  ___stack_chk_fail();
  *(undefined1 **)((long)puVar17 + -0x10) = &stack0xfffffffffffffff0;
  *(code **)((long)puVar17 + -8) = FUN_108b574e4;
  if ((param_6 & 1) != 0) {
    _abort();
    sVar12 = param_3[1];
    pbVar18 = (byte *)(*(long *)(param_3 + 0x14) + (long)(((int)param_4 * (int)sVar12) / 2));
    puVar20 = (ushort *)(param_1 + 2);
    for (lVar14 = 0; lVar14 < sVar12; lVar14 = lVar14 + 2) {
      bVar3 = *pbVar18;
      uVar19 = bVar3 >> 1 & 7;
      puVar20[-1] = uVar19 | uVar19 << 3;
      iVar21 = param_3[1] + -1;
      if ((bVar3 & 1) == 0) {
        iVar21 = 0;
      }
      param_2[lVar14] = *(undefined1 *)(*(long *)(param_3 + 0x10) + (long)(iVar21 + (int)lVar14));
      *puVar20 = (ushort)(bVar3 >> 5) | (ushort)(bVar3 >> 5) << 3;
      (param_2 + lVar14)[1] =
           *(undefined1 *)
            (*(long *)(param_3 + 0x10) +
             (long)(int)(((int)param_3[1] - 1U & (int)((uint)bVar3 << 0x1b) >> 0x1f) + (int)lVar14)
            + 1);
      sVar12 = param_3[1];
      pbVar18 = pbVar18 + 1;
      puVar20 = puVar20 + 2;
    }
    return;
  }
  for (uVar27 = 0; uVar27 != (param_5 & ((int)param_5 >> 0x1f ^ 0xffffffffU)); uVar27 = uVar27 + 1)
  {
    iVar21 = 0;
    iVar22 = 0;
    uVar16 = param_6 & 0xffffffff;
    while (1 < (int)uVar16) {
      uVar16 = uVar16 - 2;
      uVar24 = uVar16 & 0xfffffffe;
      uVar25 = uVar24 | 1;
      iVar26 = (int)(short)(*(short *)(param_2 + uVar25 * 2) +
                           (ushort)*(byte *)((long)param_3 + uVar25) * -0x80) *
               (int)*(short *)(param_4 + uVar25 * 2);
      iVar22 = iVar26 - (iVar22 >> 1);
      iVar8 = -iVar22;
      if (-1 < iVar22) {
        iVar8 = iVar22;
      }
      iVar22 = (int)(short)(*(short *)(param_2 + uVar24 * 2) +
                           (ushort)*(byte *)((long)param_3 + uVar24) * -0x80) *
               (int)*(short *)(param_4 + uVar24 * 2);
      iVar6 = iVar22 - (iVar26 >> 1);
      iVar26 = -iVar6;
      if (-1 < iVar6) {
        iVar26 = iVar6;
      }
      iVar21 = iVar8 + iVar21 + iVar26;
    }
    *(int *)(param_1 + uVar27 * 4) = iVar21;
    param_3 = (short *)((long)param_3 + (long)(int)param_6);
    param_4 = param_4 + (long)(int)param_6 * 2;
  }
  return;
}



/* Entry: 108b574e4; end: 108b5759b;  */

void FUN_108b574e4(long param_1,long param_2,long param_3,long param_4,uint param_5,uint param_6)

{
  int iVar1;
  byte bVar2;
  short sVar3;
  int iVar4;
  int iVar5;
  ushort uVar6;
  ulong uVar7;
  long lVar8;
  byte *pbVar9;
  ushort *puVar10;
  ulong uVar11;
  int iVar12;
  int iVar13;
  ulong uVar14;
  ulong uVar15;
  
  if ((param_6 & 1) != 0) {
    _abort();
    sVar3 = *(short *)(param_3 + 2);
    pbVar9 = (byte *)(*(long *)(param_3 + 0x28) + (long)(((int)param_4 * (int)sVar3) / 2));
    puVar10 = (ushort *)(param_1 + 2);
    for (lVar8 = 0; lVar8 < sVar3; lVar8 = lVar8 + 2) {
      bVar2 = *pbVar9;
      uVar6 = bVar2 >> 1 & 7;
      puVar10[-1] = uVar6 | uVar6 << 3;
      iVar12 = *(short *)(param_3 + 2) + -1;
      if ((bVar2 & 1) == 0) {
        iVar12 = 0;
      }
      *(undefined1 *)(param_2 + lVar8) =
           *(undefined1 *)(*(long *)(param_3 + 0x20) + (long)(iVar12 + (int)lVar8));
      *puVar10 = (ushort)(bVar2 >> 5) | (ushort)(bVar2 >> 5) << 3;
      ((undefined1 *)(param_2 + lVar8))[1] =
           *(undefined1 *)
            (*(long *)(param_3 + 0x20) +
             (long)(int)(((int)*(short *)(param_3 + 2) - 1U & (int)((uint)bVar2 << 0x1b) >> 0x1f) +
                        (int)lVar8) + 1);
      sVar3 = *(short *)(param_3 + 2);
      pbVar9 = pbVar9 + 1;
      puVar10 = puVar10 + 2;
    }
    return;
  }
  for (uVar7 = 0; uVar7 != (param_5 & ((int)param_5 >> 0x1f ^ 0xffffffffU)); uVar7 = uVar7 + 1) {
    iVar12 = 0;
    iVar13 = 0;
    uVar11 = (ulong)param_6;
    while (1 < (int)uVar11) {
      uVar11 = uVar11 - 2;
      uVar14 = uVar11 & 0xfffffffe;
      uVar15 = uVar14 | 1;
      iVar4 = (int)(short)(*(short *)(param_2 + uVar15 * 2) +
                          (ushort)*(byte *)(param_3 + uVar15) * -0x80) *
              (int)*(short *)(param_4 + uVar15 * 2);
      iVar13 = iVar4 - (iVar13 >> 1);
      iVar1 = -iVar13;
      if (-1 < iVar13) {
        iVar1 = iVar13;
      }
      iVar13 = (int)(short)(*(short *)(param_2 + uVar14 * 2) +
                           (ushort)*(byte *)(param_3 + uVar14) * -0x80) *
               (int)*(short *)(param_4 + uVar14 * 2);
      iVar5 = iVar13 - (iVar4 >> 1);
      iVar4 = -iVar5;
      if (-1 < iVar5) {
        iVar4 = iVar5;
      }
      iVar12 = iVar1 + iVar12 + iVar4;
    }
    *(int *)(param_1 + uVar7 * 4) = iVar12;
    param_3 = param_3 + (int)param_6;
    param_4 = param_4 + (long)(int)param_6 * 2;
  }
  return;
}



/* Entry: 108b5759c; end: 108b5763b;  */

void FUN_108b5759c(long param_1,long param_2,long param_3,int param_4)

{
  byte bVar1;
  short sVar2;
  int iVar3;
  ushort uVar4;
  long lVar5;
  byte *pbVar6;
  ushort *puVar7;
  
  sVar2 = *(short *)(param_3 + 2);
  pbVar6 = (byte *)(*(long *)(param_3 + 0x28) + (long)((param_4 * sVar2) / 2));
  puVar7 = (ushort *)(param_1 + 2);
  for (lVar5 = 0; lVar5 < sVar2; lVar5 = lVar5 + 2) {
    bVar1 = *pbVar6;
    uVar4 = bVar1 >> 1 & 7;
    puVar7[-1] = uVar4 | uVar4 << 3;
    iVar3 = *(short *)(param_3 + 2) + -1;
    if ((bVar1 & 1) == 0) {
      iVar3 = 0;
    }
    *(undefined1 *)(param_2 + lVar5) =
         *(undefined1 *)(*(long *)(param_3 + 0x20) + (long)(iVar3 + (int)lVar5));
    *puVar7 = (ushort)(bVar1 >> 5) | (ushort)(bVar1 >> 5) << 3;
    ((undefined1 *)(param_2 + lVar5))[1] =
         *(undefined1 *)
          (*(long *)(param_3 + 0x20) +
           (long)(int)(((int)*(short *)(param_3 + 2) - 1U & (int)((uint)bVar1 << 0x1b) >> 0x1f) +
                      (int)lVar5) + 1);
    sVar2 = *(short *)(param_3 + 2);
    pbVar6 = pbVar6 + 1;
    puVar7 = puVar7 + 2;
  }
  return;
}



/* Entry: 108b5763c; end: 108b57b1b;  */

/* WARNING: Possible PIC construction at 0x000108b52e7c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000108b52ea0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000108b52e80) */
/* WARNING: Removing unreachable block (ram,0x000108b52e88) */
/* WARNING: Removing unreachable block (ram,0x000108b52ea4) */
/* WARNING: Removing unreachable block (ram,0x000108b52eac) */

short * FUN_108b5763c(short *param_1,short *param_2,short *param_3,short *param_4,long param_5,
                     long param_6,short param_7,int param_8,short param_9,short param_10)

{
  int iVar1;
  byte bVar2;
  short sVar3;
  short sVar4;
  undefined2 uVar5;
  int iVar6;
  short sVar7;
  short sVar8;
  bool bVar9;
  short *psVar10;
  uint *puVar11;
  short *psVar12;
  short *psVar13;
  short *psVar14;
  uint uVar15;
  int iVar16;
  long lVar17;
  long extraout_x10;
  undefined8 *puVar18;
  long extraout_x10_00;
  ulong uVar19;
  long lVar20;
  short *psVar21;
  undefined1 *puVar22;
  ulong uVar23;
  long extraout_x12;
  long extraout_x12_00;
  uint uVar24;
  uint uVar25;
  int *extraout_x13;
  int *extraout_x13_00;
  int *piVar26;
  long lVar27;
  long extraout_x14;
  long extraout_x14_00;
  undefined2 *puVar28;
  ushort uVar29;
  short *psVar30;
  ulong unaff_x24;
  ulong unaff_x25;
  uint uVar31;
  undefined8 uVar32;
  undefined8 uStack_320;
  undefined8 uStack_318;
  undefined4 uStack_310;
  long lStack_308;
  undefined1 *puStack_300;
  undefined8 uStack_2f8;
  undefined1 **ppuStack_2f0;
  code *pcStack_2e8;
  short asStack_2d8 [16];
  short asStack_2b8 [16];
  short asStack_298 [16];
  long lStack_278;
  long lStack_270;
  ulong uStack_268;
  ulong uStack_260;
  int *piStack_258;
  int *piStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  uint *puStack_238;
  undefined1 *puStack_230;
  code *pcStack_228;
  long lStack_220;
  short *psStack_218;
  undefined2 *puStack_210;
  uint *puStack_208;
  short *psStack_200;
  short *psStack_1f8;
  short *psStack_1f0;
  short *psStack_1e8;
  long lStack_1e0;
  long lStack_1d8;
  long lStack_1d0;
  undefined1 *puStack_1c8;
  long lStack_1c0;
  long lStack_1b8;
  int aiStack_1b0 [20];
  int aiStack_160 [20];
  uint auStack_110 [4];
  uint auStack_100 [4];
  uint auStack_f0 [8];
  short asStack_d0 [4];
  undefined2 auStack_c8 [3];
  undefined1 auStack_c1 [9];
  undefined8 auStack_b8 [7];
  uint auStack_80 [4];
  long lStack_70;
  
  puStack_230 = &stack0xfffffffffffffff0;
  lStack_1e0 = param_5;
  lStack_1d8 = param_6;
  psStack_1f0 = param_3;
  psStack_1e8 = param_4;
  psStack_1f8 = param_2;
  psStack_218 = param_1;
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  psVar30 = param_1;
  psVar12 = param_2;
  for (lVar17 = 0; lVar17 != 0x14; lVar17 = lVar17 + 1) {
    uVar31 = (int)(lVar17 + -10) * 0x400;
    psVar30 = (short *)(ulong)uVar31;
    if (lVar17 + -10 < 1) {
      iVar16 = (int)lVar17;
      if (iVar16 == 10) {
        uVar29 = 0x39a;
      }
      else {
        uVar24 = uVar31 + 0x400;
        psVar12 = (short *)(ulong)uVar24;
        uVar31 = uVar31 | 0x66;
        if (iVar16 == 9) {
          uVar31 = 0xfc66;
        }
        psVar30 = (short *)(ulong)uVar31;
        uVar31 = uVar24 | 0x66;
        if (iVar16 == 9) {
          uVar31 = uVar24;
        }
        uVar29 = (ushort)uVar31;
      }
    }
    else {
      psVar30 = (short *)(ulong)(uVar31 - 0x66);
      uVar29 = (ushort)uVar31 | 0x39a;
    }
    aiStack_160[lVar17] = (int)param_7 * (int)(short)psVar30 >> 0x10;
    aiStack_1b0[lVar17] = (int)param_7 * (int)(short)uVar29 >> 0x10;
  }
  auStack_f0[0] = 0;
  asStack_d0[0] = 0;
  puStack_210 = auStack_c8;
  puStack_208 = auStack_f0 + 4;
  lStack_220 = (long)param_10;
  psStack_200 = (short *)auStack_c1;
  psVar13 = param_3;
  psVar14 = param_4;
  psVar21 = (short *)auStack_c1;
  uVar19 = 1;
  lVar17 = (long)param_10;
LAB_108b57768:
  lVar27 = (long)auStack_b8 + lVar17 + -8;
  puVar22 = (undefined1 *)((long)psVar21 + lVar17);
  psVar10 = psVar14;
  psVar14 = psVar21;
  do {
    if ((int)lVar17 < 1) {
      psVar14 = (short *)0x7fffffff;
      uVar31 = 0;
      for (lVar27 = 0; lVar27 != 8; lVar27 = lVar27 + 1) {
        uVar25 = auStack_f0[lVar27];
        uVar15 = (uint)psVar14;
        uVar24 = (uint)lVar27;
        if ((int)uVar15 <= (int)uVar25) {
          uVar24 = uVar31;
        }
        if ((int)uVar25 <= (int)uVar15) {
          uVar15 = uVar25;
        }
        psVar14 = (short *)(ulong)uVar15;
        uVar31 = uVar24;
      }
      for (uVar19 = 0; ((int)param_10 & ((int)param_10 >> 0x1f ^ 0xffffffffU)) != uVar19;
          uVar19 = uVar19 + 1) {
        *(char *)((long)param_1 + uVar19) =
             *(char *)((long)auStack_b8 + uVar19 + (ulong)(uVar31 & 3) * 0x10 + -8);
      }
      *(char *)param_1 = (char)*param_1 + (char)(uVar31 >> 2);
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
        return psVar14;
      }
      ___stack_chk_fail();
      uStack_248 = 9;
      uStack_240 = 0xfffffff6;
      pcStack_228 = FUN_108b57b1c;
      lStack_278 = *(long *)PTR____stack_chk_guard_11034bdc0;
      psVar14 = psVar10;
      lStack_270 = lVar17;
      uStack_268 = unaff_x25;
      uStack_260 = unaff_x24;
      piStack_258 = aiStack_1b0;
      piStack_250 = aiStack_160;
      puStack_238 = auStack_110;
      if ((*(int *)(psVar30 + 0x90c) == 1) || (*(char *)((long)psVar30 + 0x12af) == '\x04')) {
        iVar16 = (int)((ulong)((long)psVar30[0x8da] * 0xfffffffbe76e) >> 0x10) + 0xc4a;
        iVar1 = iVar16 >> 1;
        if (*(int *)(psVar30 + 0x8f2) != 2) {
          iVar1 = 0;
        }
        iVar1 = iVar1 + iVar16;
        if (0 < iVar1) {
          FUN_108b5a2b0(asStack_2b8,psVar13,*(undefined4 *)(psVar30 + 0x910));
          if ((*(int *)(psVar30 + 0x90c) == 1) && (*(char *)((long)psVar30 + 0x12af) < '\x04')) {
            FUN_108b57cec();
            FUN_108b5a2b0(asStack_2d8,asStack_298,*(undefined4 *)(psVar30 + 0x910));
            bVar2 = *(byte *)((long)psVar30 + 0x12af);
            psVar14 = asStack_2d8;
            psVar21 = asStack_2b8;
            for (uVar19 = (ulong)(*(uint *)(psVar30 + 0x910) &
                                 ((int)*(uint *)(psVar30 + 0x910) >> 0x1f ^ 0xffffffffU));
                uVar19 != 0; uVar19 = uVar19 - 1) {
              *psVar21 = (short)((ulong)(long)*psVar21 >> 1) +
                         (short)((uint)((int)*psVar14 *
                                       (int)(short)((ushort)bVar2 * (ushort)bVar2 * 0x800)) >> 0x10)
              ;
              psVar14 = psVar14 + 1;
              psVar21 = psVar21 + 1;
            }
            bVar9 = true;
          }
          else {
            bVar9 = false;
          }
          FUN_108b570f0(psVar30 + 0x94c,psVar13,*(undefined8 *)(psVar30 + 0x930),asStack_2b8,iVar1,
                        *(undefined4 *)(psVar30 + 0x91a),(long)*(char *)((long)psVar30 + 0x12ad));
          psVar14 = (short *)(ulong)*(uint *)(psVar30 + 0x9fa);
          func_0x000108b59db8(psVar12 + 0x10,psVar13,*(undefined4 *)(psVar30 + 0x910));
          uVar31 = (uint)psVar14;
          if (bVar9) {
            FUN_108b57cec();
            uVar31 = *(uint *)(psVar30 + 0x9fa);
            func_0x000108b59db8(psVar12,asStack_298,*(undefined4 *)(psVar30 + 0x910));
          }
          else {
            if (0x10 < *(int *)(psVar30 + 0x910)) goto LAB_108b57ce4;
            _memcpy(psVar12,psVar12 + 0x10,(long)*(int *)(psVar30 + 0x910) << 1);
          }
          if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_278) {
            return psVar12;
          }
          goto FUN_108b52cb4;
        }
      }
LAB_108b57ce4:
      uVar31 = (uint)psVar14;
      _abort();
FUN_108b52cb4:
      ___stack_chk_fail();
      psVar12 = asStack_298;
      pcStack_2e8 = FUN_108b57cec;
      if ((-1 < (int)uVar31) && (uVar31 < 5)) {
        for (uVar19 = (ulong)(*(uint *)(psVar30 + 0x910) &
                             ((int)*(uint *)(psVar30 + 0x910) >> 0x1f ^ 0xffffffffU)); uVar19 != 0;
            uVar19 = uVar19 - 1) {
          *psVar12 = *psVar10 + (short)(uVar31 * (int)(short)(*psVar13 - *psVar10) >> 2);
          psVar12 = psVar12 + 1;
          psVar13 = psVar13 + 1;
          psVar10 = psVar10 + 1;
        }
        return psVar12;
      }
      ppuStack_2f0 = &puStack_230;
      _abort();
      uStack_2f8 = 0x108b52d00;
      lStack_308 = *(long *)PTR____stack_chk_guard_11034bdc0;
      puStack_300 = (undefined1 *)&ppuStack_2f0;
      if (*(int *)(psVar12 + 6) != 0) {
        uVar31 = *(int *)(psVar12 + 4) * -0x400 + 0x40000;
        iVar16 = (int)uVar31 >> 0x10;
        if (iVar16 < 4) {
          uVar31 = uVar31 & 0xfc00;
          if (uVar31 != 0) {
            if (uVar31 < 0x8000) {
              puStack_300 = (undefined1 *)&ppuStack_2f0;
              func_0x000108b52efc();
              piVar26 = extraout_x13;
              for (lVar17 = extraout_x12; lVar17 != 0xc; lVar17 = lVar17 + 4) {
                *(int *)(extraout_x14 + lVar17) =
                     *piVar26 +
                     (int)((ulong)(((long)piVar26[3] - (long)*piVar26) * extraout_x10) >> 0x10);
                piVar26 = piVar26 + 1;
              }
              return psVar12;
            }
            puStack_300 = (undefined1 *)&ppuStack_2f0;
            func_0x000108b52efc();
            piVar26 = extraout_x13_00;
            for (lVar17 = extraout_x12_00; lVar17 != 0xc; lVar17 = lVar17 + 4) {
              *(int *)(extraout_x14_00 + lVar17) =
                   piVar26[3] +
                   (int)((ulong)(extraout_x10_00 * ((long)piVar26[3] - (long)*piVar26)) >> 0x10);
              piVar26 = piVar26 + 1;
            }
            return psVar12;
          }
          uStack_318 = *(undefined8 *)(&UNK_10df91df0 + (long)iVar16 * 0xc);
          uStack_310 = *(undefined4 *)(&UNK_10df91df8 + (long)iVar16 * 0xc);
          puVar18 = (undefined8 *)(&UNK_10df91e2c + (long)iVar16 * 8);
        }
        else {
          uStack_318 = 0xaa4fada0552b622;
          uStack_310 = 0x552b622;
          puVar18 = (undefined8 *)&UNK_10df91e4c;
        }
        uStack_320 = *puVar18;
        uVar31 = *(int *)(psVar12 + 6) + *(int *)(psVar12 + 4);
        uVar31 = uVar31 & ((int)uVar31 >> 0x1f ^ 0xffffffffU);
        if (0xff < (int)uVar31) {
          uVar31 = 0x100;
        }
        puStack_300 = (undefined1 *)&ppuStack_2f0;
        *(uint *)(psVar12 + 4) = uVar31;
        func_0x000108b59678(psVar10,&uStack_318,&uStack_320);
        psVar12 = psVar10;
      }
      if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_308) {
        ___stack_chk_fail();
        return psVar12;
      }
      return psVar12;
    }
    lStack_1d0 = lVar27;
    puStack_1c8 = puVar22;
    lStack_1c0 = lVar17 + -1;
    lVar20 = param_6 + *(short *)(param_5 + lStack_1c0 * 2);
    sVar3 = param_2[lStack_1c0];
    lStack_1b8 = lVar20 + 5;
    bVar2 = *(byte *)((long)param_4 + lStack_1c0);
    psVar13 = (short *)(ulong)bVar2;
    sVar4 = param_3[lStack_1c0];
    psVar12 = (short *)(long)sVar4;
    psVar21 = asStack_d0;
    psVar10 = psVar14;
    for (psVar30 = (short *)0x0; (short *)(uVar19 << 2) != psVar30; psVar30 = psVar30 + 2) {
      iVar6 = (int)*psVar21 * (uint)bVar2;
      sVar7 = (short)((uint)iVar6 >> 8);
      iVar16 = (short)(sVar3 - sVar7) * param_8 >> 0x10;
      iVar1 = iVar16;
      if (iVar16 < -9) {
        iVar1 = -10;
      }
      if (8 < iVar1) {
        iVar1 = 9;
      }
      *(char *)((long)psVar10 + lVar17) = (char)iVar1;
      sVar7 = (short)aiStack_160[iVar1 + 10U] + sVar7;
      uVar31 = aiStack_1b0[iVar1 + 10U] + (iVar6 >> 8);
      unaff_x25 = (ulong)uVar31;
      *psVar21 = sVar7;
      sVar8 = (short)uVar31;
      psVar21[uVar19] = sVar8;
      if (iVar16 < 3) {
        if (iVar16 < -3) {
          if (iVar16 == -4) {
            uVar24 = (uint)*(byte *)(lVar20 + 5 + (long)iVar1);
            uVar31 = 0x118;
          }
          else {
            uVar31 = iVar1 * -0x2b + 0x6c;
            uVar24 = iVar1 * -0x2b + 0x41;
          }
        }
        else {
          uVar31 = (uint)*(byte *)(lVar20 + iVar1 + 4);
          uVar24 = (uint)*(byte *)(lVar20 + iVar1 + 5);
        }
      }
      else if (iVar16 == 3) {
        uVar31 = (uint)*(byte *)(lVar20 + 7);
        uVar24 = 0x118;
      }
      else {
        uVar31 = iVar1 * 0x2b + 0x6c;
        uVar24 = iVar1 * 0x2b + 0x97;
      }
      uVar15 = *(uint *)((long)auStack_f0 + (long)psVar30);
      psVar14 = (short *)(ulong)uVar15;
      iVar16 = (int)(short)(sVar3 - sVar7);
      *(uint *)((long)auStack_f0 + (long)psVar30) =
           uVar15 + uVar31 * (int)param_9 + iVar16 * iVar16 * (int)sVar4;
      iVar16 = (int)(short)(sVar3 - sVar8);
      uVar31 = iVar16 * iVar16;
      unaff_x24 = (ulong)uVar31;
      *(uint *)((long)(auStack_f0 + uVar19) + (long)psVar30) =
           uVar15 + uVar24 * (int)param_9 + uVar31 * (int)sVar4;
      psVar21 = psVar21 + 1;
      psVar10 = psVar10 + 8;
    }
    if ((uint)uVar19 < 3) break;
    puVar11 = puStack_208;
    puVar28 = puStack_210;
    for (lVar20 = 0; lVar20 != 4; lVar20 = lVar20 + 1) {
      uVar15 = puVar11[-4];
      uVar24 = *puVar11;
      uVar31 = (uint)lVar20;
      uVar25 = uVar15;
      if ((int)uVar24 < (int)uVar15) {
        uVar31 = uVar31 + 4;
        puVar11[-4] = uVar24;
        *puVar11 = uVar15;
        uVar5 = puVar28[-4];
        puVar28[-4] = *puVar28;
        *puVar28 = uVar5;
        uVar25 = uVar24;
        uVar24 = uVar15;
      }
      psVar14 = (short *)(ulong)uVar24;
      auStack_110[lVar20] = uVar24;
      auStack_100[lVar20] = uVar25;
      auStack_80[lVar20] = uVar31;
      puVar11 = puVar11 + 1;
      puVar28 = puVar28 + 1;
    }
    psVar21 = (short *)0x0;
    uVar31 = 0;
    psVar13 = (short *)0x7fffffff;
    psVar30 = (short *)0x0;
    psVar12 = (short *)0x0;
    while( true ) {
      for (; uVar24 = (uint)psVar13, psVar21 != (short *)0x4; psVar21 = (short *)((long)psVar21 + 1)
          ) {
        uVar15 = auStack_110[(long)psVar21];
        psVar10 = psVar21;
        if ((int)uVar24 <= (int)uVar15) {
          psVar10 = psVar12;
        }
        if ((int)uVar15 <= (int)uVar24) {
          uVar24 = uVar15;
        }
        psVar13 = (short *)(ulong)uVar24;
        uVar24 = auStack_100[(long)psVar21];
        psVar12 = psVar21;
        if ((int)uVar24 <= (int)uVar31) {
          psVar12 = psVar30;
        }
        if ((int)uVar31 <= (int)uVar24) {
          uVar31 = uVar24;
        }
        psVar30 = psVar12;
        psVar12 = psVar10;
      }
      if ((int)uVar31 <= (int)uVar24) break;
      psVar21 = (short *)0x0;
      uVar31 = 0;
      auStack_80[(long)psVar30] = auStack_80[(long)psVar12] ^ 4;
      auStack_f0[(long)psVar30] = auStack_f0[(ulong)psVar12 | 4];
      asStack_d0[(long)psVar30] = asStack_d0[(ulong)psVar12 | 4];
      auStack_100[(long)psVar30] = 0;
      psVar13 = (short *)0x7fffffff;
      auStack_110[(long)psVar12] = 0x7fffffff;
      uVar32 = auStack_b8[(long)psVar12 * 2 + -1];
      auStack_b8[(long)psVar30 * 2] = auStack_b8[(long)psVar12 * 2];
      auStack_b8[(long)psVar30 * 2 + -1] = uVar32;
      psVar30 = (short *)0x0;
      psVar12 = (short *)0x0;
    }
    psVar21 = psStack_200;
    for (lVar20 = 0; lVar20 != 0x10; lVar20 = lVar20 + 4) {
      psVar30 = (short *)(ulong)*(byte *)((long)psVar21 + lVar17);
      *(byte *)((long)psVar21 + lVar17) =
           *(byte *)((long)psVar21 + lVar17) + (char)(*(uint *)((long)auStack_80 + lVar20) >> 2);
      psVar21 = psVar21 + 8;
    }
    lVar27 = lVar27 + -1;
    puVar22 = puVar22 + -1;
    psVar10 = psVar14;
    psVar14 = psStack_200;
    lVar17 = lStack_1c0;
  } while( true );
  lVar17 = lStack_1d0;
  for (uVar23 = uVar19; uVar23 != 0; uVar23 = uVar23 - 1) {
    *(char *)(lVar17 + uVar19 * 0x10 + -1) = *(char *)(lVar17 + -1) + '\x01';
    lVar17 = lVar17 + 0x10;
  }
  uVar23 = (ulong)((uint)uVar19 << 1);
  lVar20 = uVar19 * 0x20;
  puVar22 = puStack_1c8;
  for (lVar27 = 4 - uVar23; psVar21 = psStack_200, uVar19 = uVar23, lVar17 = lStack_1c0, lVar27 != 0
      ; lVar27 = lVar27 + -1) {
    puVar22[lVar20] = *puVar22;
    puVar22 = puVar22 + 0x10;
  }
  goto LAB_108b57768;
}



/* Entry: 108b57b1c; end: 108b57ceb;  */

/* WARNING: Possible PIC construction at 0x000108b52e7c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000108b52ea0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000108b52e80) */
/* WARNING: Removing unreachable block (ram,0x000108b52e88) */
/* WARNING: Removing unreachable block (ram,0x000108b52ea4) */
/* WARNING: Removing unreachable block (ram,0x000108b52eac) */

void FUN_108b57b1c(long param_1,long param_2,short *param_3,short *param_4)

{
  int iVar1;
  int iVar2;
  byte bVar3;
  bool bVar4;
  short *psVar5;
  uint uVar6;
  short *psVar7;
  ulong uVar8;
  long extraout_x10;
  undefined8 *puVar9;
  long extraout_x10_00;
  long extraout_x12;
  long extraout_x12_00;
  long lVar10;
  int *extraout_x13;
  int *extraout_x13_00;
  int *piVar11;
  long extraout_x14;
  long extraout_x14_00;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined4 uStack_f0;
  long lStack_e8;
  undefined1 *puStack_e0;
  undefined8 uStack_d8;
  undefined1 *puStack_d0;
  code *pcStack_c8;
  short asStack_b8 [16];
  short asStack_98 [16];
  short asStack_78 [16];
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  psVar7 = param_4;
  if ((*(int *)(param_1 + 0x1218) == 1) || (*(char *)(param_1 + 0x12af) == '\x04')) {
    iVar1 = (int)((ulong)((long)*(short *)(param_1 + 0x11b4) * 0xfffffffbe76e) >> 0x10) + 0xc4a;
    iVar2 = iVar1 >> 1;
    if (*(int *)(param_1 + 0x11e4) != 2) {
      iVar2 = 0;
    }
    iVar2 = iVar2 + iVar1;
    if (0 < iVar2) {
      FUN_108b5a2b0(asStack_98,param_3,*(undefined4 *)(param_1 + 0x1220));
      if ((*(int *)(param_1 + 0x1218) == 1) && (*(char *)(param_1 + 0x12af) < '\x04')) {
        FUN_108b57cec();
        FUN_108b5a2b0(asStack_b8,asStack_78,*(undefined4 *)(param_1 + 0x1220));
        bVar3 = *(byte *)(param_1 + 0x12af);
        psVar7 = asStack_b8;
        psVar5 = asStack_98;
        for (uVar8 = (ulong)(*(uint *)(param_1 + 0x1220) &
                            ((int)*(uint *)(param_1 + 0x1220) >> 0x1f ^ 0xffffffffU)); uVar8 != 0;
            uVar8 = uVar8 - 1) {
          *psVar5 = (short)((ulong)(long)*psVar5 >> 1) +
                    (short)((uint)((int)*psVar7 *
                                  (int)(short)((ushort)bVar3 * (ushort)bVar3 * 0x800)) >> 0x10);
          psVar7 = psVar7 + 1;
          psVar5 = psVar5 + 1;
        }
        bVar4 = true;
      }
      else {
        bVar4 = false;
      }
      FUN_108b570f0(param_1 + 0x1298,param_3,*(undefined8 *)(param_1 + 0x1260),asStack_98,iVar2,
                    *(undefined4 *)(param_1 + 0x1234),(long)*(char *)(param_1 + 0x12ad));
      psVar7 = (short *)(ulong)*(uint *)(param_1 + 0x13f4);
      func_0x000108b59db8(param_2 + 0x20,param_3,*(undefined4 *)(param_1 + 0x1220));
      uVar6 = (uint)psVar7;
      if (bVar4) {
        FUN_108b57cec();
        uVar6 = *(uint *)(param_1 + 0x13f4);
        func_0x000108b59db8(param_2,asStack_78,*(undefined4 *)(param_1 + 0x1220));
      }
      else {
        if (0x10 < *(int *)(param_1 + 0x1220)) goto LAB_108b57ce4;
        _memcpy(param_2,param_2 + 0x20,(long)*(int *)(param_1 + 0x1220) << 1);
      }
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
        return;
      }
      goto FUN_108b52cb4;
    }
  }
LAB_108b57ce4:
  uVar6 = (uint)psVar7;
  _abort();
FUN_108b52cb4:
  ___stack_chk_fail();
  psVar7 = asStack_78;
  pcStack_c8 = FUN_108b57cec;
  if ((-1 < (int)uVar6) && (uVar6 < 5)) {
    for (uVar8 = (ulong)(*(uint *)(param_1 + 0x1220) &
                        ((int)*(uint *)(param_1 + 0x1220) >> 0x1f ^ 0xffffffffU)); uVar8 != 0;
        uVar8 = uVar8 - 1) {
      *psVar7 = *param_4 + (short)(uVar6 * (int)(short)(*param_3 - *param_4) >> 2);
      psVar7 = psVar7 + 1;
      param_4 = param_4 + 1;
      param_3 = param_3 + 1;
    }
    return;
  }
  puStack_d0 = &stack0xfffffffffffffff0;
  _abort();
  uStack_d8 = 0x108b52d00;
  lStack_e8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_e0 = (undefined1 *)&puStack_d0;
  if (*(int *)(psVar7 + 6) != 0) {
    uVar6 = *(int *)(psVar7 + 4) * -0x400 + 0x40000;
    iVar1 = (int)uVar6 >> 0x10;
    if (iVar1 < 4) {
      uVar6 = uVar6 & 0xfc00;
      if (uVar6 != 0) {
        if (uVar6 < 0x8000) {
          puStack_e0 = (undefined1 *)&puStack_d0;
          func_0x000108b52efc();
          piVar11 = extraout_x13;
          for (lVar10 = extraout_x12; lVar10 != 0xc; lVar10 = lVar10 + 4) {
            *(int *)(extraout_x14 + lVar10) =
                 *piVar11 +
                 (int)((ulong)(((long)piVar11[3] - (long)*piVar11) * extraout_x10) >> 0x10);
            piVar11 = piVar11 + 1;
          }
          return;
        }
        puStack_e0 = (undefined1 *)&puStack_d0;
        func_0x000108b52efc();
        piVar11 = extraout_x13_00;
        for (lVar10 = extraout_x12_00; lVar10 != 0xc; lVar10 = lVar10 + 4) {
          *(int *)(extraout_x14_00 + lVar10) =
               piVar11[3] +
               (int)((ulong)(extraout_x10_00 * ((long)piVar11[3] - (long)*piVar11)) >> 0x10);
          piVar11 = piVar11 + 1;
        }
        return;
      }
      uStack_f8 = *(undefined8 *)(&UNK_10df91df0 + (long)iVar1 * 0xc);
      uStack_f0 = *(undefined4 *)(&UNK_10df91df8 + (long)iVar1 * 0xc);
      puVar9 = (undefined8 *)(&UNK_10df91e2c + (long)iVar1 * 8);
    }
    else {
      uStack_f8 = 0xaa4fada0552b622;
      uStack_f0 = 0x552b622;
      puVar9 = (undefined8 *)&UNK_10df91e4c;
    }
    uStack_100 = *puVar9;
    uVar6 = *(int *)(psVar7 + 6) + *(int *)(psVar7 + 4);
    uVar6 = uVar6 & ((int)uVar6 >> 0x1f ^ 0xffffffffU);
    if (0xff < (int)uVar6) {
      uVar6 = 0x100;
    }
    puStack_e0 = (undefined1 *)&puStack_d0;
    *(uint *)(psVar7 + 4) = uVar6;
    func_0x000108b59678(param_4,&uStack_f8,&uStack_100);
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_e8) {
    ___stack_chk_fail();
    return;
  }
  return;
}



/* Entry: 108b57cec; end: 108b57cff;  */

/* WARNING: Possible PIC construction at 0x000108b52e7c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000108b52ea0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000108b52e80) */
/* WARNING: Removing unreachable block (ram,0x000108b52e88) */
/* WARNING: Removing unreachable block (ram,0x000108b52ea4) */
/* WARNING: Removing unreachable block (ram,0x000108b52eac) */

void FUN_108b57cec(void)

{
  int iVar1;
  uint uVar2;
  short *psVar3;
  uint in_w3;
  ulong uVar4;
  long extraout_x10;
  undefined8 *puVar5;
  long extraout_x10_00;
  long extraout_x12;
  long extraout_x12_00;
  long lVar6;
  int *extraout_x13;
  int *extraout_x13_00;
  int *piVar7;
  long extraout_x14;
  long extraout_x14_00;
  long unaff_x20;
  short *unaff_x21;
  short *unaff_x22;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined4 uStack_30;
  long lStack_28;
  undefined1 *puStack_20;
  undefined8 uStack_18;
  
  psVar3 = (short *)&stack0x00000048;
  if ((-1 < (int)in_w3) && (in_w3 < 5)) {
    for (uVar4 = (ulong)(*(uint *)(unaff_x20 + 0x1220) &
                        ((int)*(uint *)(unaff_x20 + 0x1220) >> 0x1f ^ 0xffffffffU)); uVar4 != 0;
        uVar4 = uVar4 - 1) {
      *psVar3 = *unaff_x22 + (short)(in_w3 * (int)(short)(*unaff_x21 - *unaff_x22) >> 2);
      psVar3 = psVar3 + 1;
      unaff_x22 = unaff_x22 + 1;
      unaff_x21 = unaff_x21 + 1;
    }
    return;
  }
  _abort();
  uStack_18 = 0x108b52d00;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_20 = &stack0xfffffffffffffff0;
  if (*(int *)(psVar3 + 6) != 0) {
    uVar2 = *(int *)(psVar3 + 4) * -0x400 + 0x40000;
    iVar1 = (int)uVar2 >> 0x10;
    if (iVar1 < 4) {
      uVar2 = uVar2 & 0xfc00;
      if (uVar2 != 0) {
        if (uVar2 < 0x8000) {
          puStack_20 = &stack0xfffffffffffffff0;
          func_0x000108b52efc();
          piVar7 = extraout_x13;
          for (lVar6 = extraout_x12; lVar6 != 0xc; lVar6 = lVar6 + 4) {
            *(int *)(extraout_x14 + lVar6) =
                 *piVar7 + (int)((ulong)(((long)piVar7[3] - (long)*piVar7) * extraout_x10) >> 0x10);
            piVar7 = piVar7 + 1;
          }
          return;
        }
        puStack_20 = &stack0xfffffffffffffff0;
        func_0x000108b52efc();
        piVar7 = extraout_x13_00;
        for (lVar6 = extraout_x12_00; lVar6 != 0xc; lVar6 = lVar6 + 4) {
          *(int *)(extraout_x14_00 + lVar6) =
               piVar7[3] +
               (int)((ulong)(extraout_x10_00 * ((long)piVar7[3] - (long)*piVar7)) >> 0x10);
          piVar7 = piVar7 + 1;
        }
        return;
      }
      uStack_38 = *(undefined8 *)(&UNK_10df91df0 + (long)iVar1 * 0xc);
      uStack_30 = *(undefined4 *)(&UNK_10df91df8 + (long)iVar1 * 0xc);
      puVar5 = (undefined8 *)(&UNK_10df91e2c + (long)iVar1 * 8);
    }
    else {
      uStack_38 = 0xaa4fada0552b622;
      uStack_30 = 0x552b622;
      puVar5 = (undefined8 *)&UNK_10df91e4c;
    }
    uStack_40 = *puVar5;
    uVar2 = *(int *)(psVar3 + 6) + *(int *)(psVar3 + 4);
    uVar2 = uVar2 & ((int)uVar2 >> 0x1f ^ 0xffffffffU);
    if (0xff < (int)uVar2) {
      uVar2 = 0x100;
    }
    puStack_20 = &stack0xfffffffffffffff0;
    *(uint *)(psVar3 + 4) = uVar2;
    func_0x000108b59678(unaff_x22,&uStack_38,&uStack_40);
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_28) {
    ___stack_chk_fail();
    return;
  }
  return;
}



/* Entry: 108b57d00; end: 108b583c7;  */

/* WARNING: Possible PIC construction at 0x000108b57fbc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000108b57fc0) */
/* WARNING: Removing unreachable block (ram,0x000108b58014) */
/* WARNING: Removing unreachable block (ram,0x000108b57fd4) */
/* WARNING: Removing unreachable block (ram,0x000108b5800c) */
/* WARNING: Removing unreachable block (ram,0x000108b5801c) */
/* WARNING: Removing unreachable block (ram,0x000108b5805c) */
/* WARNING: Removing unreachable block (ram,0x000108b580c0) */
/* WARNING: Removing unreachable block (ram,0x000108b580d0) */
/* WARNING: Removing unreachable block (ram,0x000108b580e0) */
/* WARNING: Removing unreachable block (ram,0x000108b58078) */
/* WARNING: Removing unreachable block (ram,0x000108b58088) */
/* WARNING: Removing unreachable block (ram,0x000108b5811c) */
/* WARNING: Removing unreachable block (ram,0x000108b58134) */
/* WARNING: Removing unreachable block (ram,0x000108b58128) */
/* WARNING: Removing unreachable block (ram,0x000108b58098) */
/* WARNING: Removing unreachable block (ram,0x000108b58048) */
/* WARNING: Removing unreachable block (ram,0x000108b58154) */
/* WARNING: Removing unreachable block (ram,0x000108b58188) */
/* WARNING: Removing unreachable block (ram,0x000108b58164) */
/* WARNING: Removing unreachable block (ram,0x000108b58190) */
/* WARNING: Removing unreachable block (ram,0x000108b58198) */
/* WARNING: Removing unreachable block (ram,0x000108b58180) */
/* WARNING: Removing unreachable block (ram,0x000108b581a0) */
/* WARNING: Removing unreachable block (ram,0x000108b581ac) */
/* WARNING: Removing unreachable block (ram,0x000108b581bc) */
/* WARNING: Removing unreachable block (ram,0x000108b581c4) */
/* WARNING: Removing unreachable block (ram,0x000108b581dc) */
/* WARNING: Removing unreachable block (ram,0x000108b58264) */
/* WARNING: Removing unreachable block (ram,0x000108b582bc) */
/* WARNING: Removing unreachable block (ram,0x000108b582c4) */
/* WARNING: Removing unreachable block (ram,0x000108b582e4) */
/* WARNING: Removing unreachable block (ram,0x000108b5830c) */
/* WARNING: Removing unreachable block (ram,0x000108b58380) */
/* WARNING: Removing unreachable block (ram,0x000108b583c4) */
/* WARNING: Removing unreachable block (ram,0x000108b583a4) */
/* WARNING: Removing unreachable block (ram,0x000108b58314) */
/* WARNING: Removing unreachable block (ram,0x000108b58364) */
/* WARNING: Removing unreachable block (ram,0x000108b5836c) */

int FUN_108b57d00(long param_1,short *param_2,long param_3,undefined8 param_4,undefined8 param_5,
                 undefined8 param_6,int param_7,undefined8 param_8,undefined4 param_9,int param_10,
                 uint param_11)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  short sVar7;
  uint uVar8;
  uint uVar9;
  short sVar10;
  uint uVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  int iVar15;
  long extraout_x8;
  long lVar16;
  ulong uVar17;
  long extraout_x8_00;
  long extraout_x8_01;
  short *psVar18;
  undefined4 *extraout_x12;
  long extraout_x12_00;
  long extraout_x12_01;
  uint extraout_w13;
  int iVar19;
  long extraout_x13;
  undefined4 *puVar20;
  short asStack_c0 [8];
  undefined4 uStack_b0;
  int iStack_ac;
  undefined4 uStack_a4;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  long lStack_90;
  short *psStack_88;
  undefined8 uStack_80;
  int iStack_78;
  short asStack_74 [2];
  undefined4 uStack_70;
  undefined8 uStack_68;
  
  uStack_a4 = param_9;
  uStack_68 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  uStack_a0 = param_4;
  uStack_98 = param_5;
  (*(code *)PTR____chkstk_darwin_11034bd40)
            ((-(ulong)(param_11 + 2 >> 0x1f) & 0xfffffffe00000000 | (ulong)(param_11 + 2) << 1) +
             0xf & 0xfffffffffffffff0);
  puVar20 = (undefined4 *)((long)asStack_c0 + -extraout_x8);
  lStack_90 = param_3;
  for (lVar16 = 0; (ulong)(extraout_w13 & ((int)extraout_w13 >> 0x1f ^ 0xffffffffU)) << 1 != lVar16;
      lVar16 = lVar16 + 2) {
    iVar15 = (int)*(short *)(param_3 + -4 + lVar16);
    uVar2 = iVar15 + *(short *)((long)extraout_x12 + lVar16);
    uVar11 = *(short *)((long)extraout_x12 + lVar16) - iVar15;
    *(ushort *)((long)extraout_x12 + lVar16) = ((ushort)uVar2 & 1) + (short)(uVar2 >> 1);
    iVar15 = (uVar11 & 1) + ((int)uVar11 >> 1);
    if (0x7ffe < iVar15) {
      iVar15 = 0x7fff;
    }
    *(short *)((long)puVar20 + lVar16) = (short)iVar15;
  }
  *extraout_x12 = *(undefined4 *)(param_1 + 4);
  *puVar20 = *(undefined4 *)(param_1 + 8);
  uVar17 = -(ulong)(param_11 >> 0x1f) & 0xfffffffe00000000 | (ulong)param_11 << 1;
  uVar6 = *(undefined4 *)((long)puVar20 + uVar17);
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)((long)extraout_x12 + uVar17);
  *(undefined4 *)(param_1 + 8) = uVar6;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar12 = (long)puVar20 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  lVar13 = lVar12;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar12 = lVar12 - extraout_x12_00;
  psVar18 = param_2;
  for (lVar16 = 0; (ulong)(param_11 & ((int)param_11 >> 0x1f ^ 0xffffffffU)) << 1 != lVar16;
      lVar16 = lVar16 + 2) {
    sVar7 = psVar18[-1];
    sVar10 = (short)((int)sVar7 + ((int)*psVar18 + (int)psVar18[-2] >> 1) + 1 >> 1);
    *(short *)(lVar13 + lVar16) = sVar10;
    *(short *)(lVar12 + lVar16) = sVar7 - sVar10;
    psVar18 = psVar18 + 1;
  }
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar14 = lVar12 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  lVar13 = lVar14;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar14 = lVar14 - extraout_x13;
  psVar18 = (short *)((long)asStack_c0 + -extraout_x8 + 4);
  for (lVar16 = 0; extraout_x12_01 * 2 - lVar16 != 0; lVar16 = lVar16 + 2) {
    sVar7 = psVar18[-1];
    sVar10 = (short)((int)sVar7 + ((int)*psVar18 + (int)psVar18[-2] >> 1) + 1 >> 1);
    *(short *)(lVar13 + lVar16) = sVar10;
    *(short *)(lVar14 + lVar16) = sVar7 - sVar10;
    psVar18 = psVar18 + 1;
  }
  iStack_ac = param_10 * 5;
  iVar15 = -0x4b0;
  if (param_11 != param_10 * 10) {
    iVar15 = -600;
  }
  uStack_b0 = SUB84(asStack_74,0);
  psStack_88 = param_2;
  uStack_80 = param_6;
  func_0x000108b58480();
  uStack_70 = uStack_b0;
  func_0x000108b58480(&iStack_78,lVar12,lVar14,param_1 + 0x14);
  iStack_78 = asStack_74[0] * 3 + iStack_78;
  if (0xffff < iStack_78) {
    iStack_78 = 0x10000;
  }
  iVar15 = iVar15 + param_7;
  if (iVar15 < 2) {
    iVar15 = 1;
  }
  iVar1 = iStack_78 * 3 + 0xd0000;
  iVar4 = -iVar15;
  if (-1 < iVar15) {
    iVar4 = iVar15;
  }
  iVar15 = iVar15 << (ulong)((int)LZCOUNT(iVar4) - 1U & 0x1f);
  iVar5 = -iVar1;
  if (-1 < iVar1) {
    iVar5 = iVar1;
  }
  iVar1 = iVar1 << (ulong)((int)LZCOUNT(iVar5) - 1U & 0x1f);
  iVar19 = iVar1 >> 0x10;
  sVar7 = 0;
  if (iVar19 != 0) {
    sVar7 = (short)(0x1fffffff / iVar19);
  }
  iVar19 = (int)((ulong)((long)(int)sVar7 * (long)iVar15) >> 0x10);
  uVar3 = (int)((ulong)((long)(int)sVar7 *
                       (long)(int)(iVar15 - ((uint)((ulong)((long)iVar19 * (long)iVar1) >> 0x1d) &
                                            0xfffffff8))) >> 0x10) + iVar19;
  iVar15 = (int)LZCOUNT(iVar4) - ((int)LZCOUNT(iVar5) + 0x13);
  uVar2 = iVar15 + 0x1c;
  uVar11 = iVar15 + 0x1d;
  iVar15 = (int)uVar3 >> (uVar11 & 0x1f);
  if (0x1f < uVar11) {
    iVar15 = 0;
  }
  uVar9 = ~uVar2;
  uVar11 = -0x80000000 >> (uVar9 & 0x1f);
  uVar8 = 0x7fffffff >> (ulong)(uVar9 & 0x1f);
  if ((int)uVar11 <= (int)uVar3) {
    uVar11 = uVar3;
  }
  if ((int)uVar3 <= (int)uVar8) {
    uVar8 = uVar11;
  }
  if ((int)uVar2 < -1) {
    iVar15 = uVar8 << (ulong)(uVar9 & 0x1f);
  }
  return iVar15;
}



/* Entry: 108b583c8; end: 108b5848b;  */

int FUN_108b583c8(int param_1,int param_2,int param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  short sVar7;
  int iVar8;
  int iVar9;
  
  iVar8 = -param_1;
  if (-1 < param_1) {
    iVar8 = param_1;
  }
  param_1 = param_1 << (ulong)((int)LZCOUNT(iVar8) - 1U & 0x1f);
  iVar4 = -param_2;
  if (-1 < param_2) {
    iVar4 = param_2;
  }
  param_2 = param_2 << (ulong)((int)LZCOUNT(iVar4) - 1U & 0x1f);
  iVar9 = param_2 >> 0x10;
  sVar7 = 0;
  if (iVar9 != 0) {
    sVar7 = (short)(0x1fffffff / iVar9);
  }
  iVar9 = (int)((ulong)((long)(int)sVar7 * (long)param_1) >> 0x10);
  uVar3 = (int)((ulong)((long)(int)sVar7 *
                       (long)(int)(param_1 -
                                  ((uint)((ulong)((long)iVar9 * (long)param_2) >> 0x1d) & 0xfffffff8
                                  ))) >> 0x10) + iVar9;
  iVar8 = (int)LZCOUNT(iVar8) - (param_3 + (int)LZCOUNT(iVar4));
  uVar1 = iVar8 + 0x1c;
  uVar2 = iVar8 + 0x1d;
  iVar8 = (int)uVar3 >> (uVar2 & 0x1f);
  if (0x1f < uVar2) {
    iVar8 = 0;
  }
  uVar6 = ~uVar1;
  uVar2 = -0x80000000 >> (uVar6 & 0x1f);
  uVar5 = 0x7fffffff >> (ulong)(uVar6 & 0x1f);
  if ((int)uVar2 <= (int)uVar3) {
    uVar2 = uVar3;
  }
  if ((int)uVar3 <= (int)uVar5) {
    uVar5 = uVar2;
  }
  if ((int)uVar1 < -1) {
    iVar8 = uVar5 << (ulong)(uVar6 & 0x1f);
  }
  return iVar8;
}



/* Entry: 108b5848c; end: 108b5868f;  */

void FUN_108b5848c(ushort *param_1,short *param_2,short *param_3,int *param_4,int param_5,
                  uint param_6)

{
  int iVar1;
  int iVar2;
  ushort uVar3;
  ushort uVar4;
  short sVar5;
  short sVar6;
  uint uVar7;
  ushort uVar8;
  ushort uVar9;
  uint uVar10;
  ulong uVar11;
  long lVar12;
  short *psVar13;
  uint uVar14;
  short *psVar15;
  
  *(undefined4 *)param_2 = *(undefined4 *)(param_1 + 2);
  *(undefined4 *)param_3 = *(undefined4 *)(param_1 + 4);
  uVar11 = -(ulong)(param_6 >> 0x1f) & 0xfffffffe00000000 | (ulong)param_6 << 1;
  *(undefined4 *)(param_1 + 2) = *(undefined4 *)((long)param_2 + uVar11);
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)((long)param_3 + uVar11);
  uVar3 = *param_1;
  uVar4 = param_1[1];
  uVar7 = param_5 << 3;
  sVar6 = 0;
  if (uVar7 != 0) {
    sVar6 = (short)(0x10000 / (int)uVar7);
  }
  iVar2 = *param_4;
  uVar14 = (uint)uVar3;
  uVar8 = (ushort)iVar2;
  uVar10 = (uint)uVar4;
  uVar9 = (ushort)param_4[1];
  psVar15 = param_2 + 2;
  psVar13 = param_3;
  for (uVar11 = (ulong)(uVar7 & ((int)uVar7 >> 0x1f ^ 0xffffffffU)); uVar11 != 0;
      uVar11 = uVar11 - 1) {
    uVar14 = uVar14 + (((int)sVar6 * (int)(short)(uVar8 - uVar3) >> 0xf) + 1 >> 1);
    uVar10 = uVar10 + (((int)sVar6 * (int)(short)(uVar9 - uVar4) >> 0xf) + 1 >> 1);
    psVar13 = psVar13 + 1;
    iVar1 = ((int)((ulong)((long)(int)(uVar14 * 0x10000) *
                           (long)(psVar15[-1] * 0x400 + ((int)*psVar15 + (int)psVar15[-2]) * 0x200)
                          + ((long)*psVar13 << 0x28)) >> 0x20) +
             (int)((ulong)((long)(int)psVar15[-1] * (long)(int)(short)uVar10) >> 5) >> 7) + 1 >> 1;
    if (iVar1 < -0x7fff) {
      iVar1 = -0x8000;
    }
    if (0x7ffe < iVar1) {
      iVar1 = 0x7fff;
    }
    *psVar13 = (short)iVar1;
    psVar15 = psVar15 + 1;
  }
  psVar15 = param_2 + (long)(int)uVar7 + 1;
  for (lVar12 = (long)(int)uVar7; lVar12 < (int)param_6; lVar12 = lVar12 + 1) {
    psVar13 = psVar15 + -1;
    sVar6 = *psVar15;
    psVar15 = psVar15 + 1;
    iVar1 = ((int)((ulong)((long)(iVar2 << 0x10) *
                           (long)(sVar6 * 0x400 + ((int)*psVar15 + (int)*psVar13) * 0x200) +
                          ((long)param_3[lVar12 + 1] << 0x28)) >> 0x20) +
             (int)((ulong)((long)(int)sVar6 * (long)(int)(short)uVar9) >> 5) >> 7) + 1 >> 1;
    if (iVar1 < -0x7fff) {
      iVar1 = -0x8000;
    }
    if (0x7ffe < iVar1) {
      iVar1 = 0x7fff;
    }
    param_3[lVar12 + 1] = (short)iVar1;
  }
  *param_1 = uVar8;
  param_1[1] = uVar9;
  for (uVar11 = (ulong)(param_6 & ((int)param_6 >> 0x1f ^ 0xffffffffU)); uVar11 != 0;
      uVar11 = uVar11 - 1) {
    param_2 = param_2 + 1;
    param_3 = param_3 + 1;
    sVar6 = *param_2;
    sVar5 = *param_3;
    iVar2 = (int)sVar6 + (int)sVar5;
    if (0x7ffe < iVar2) {
      iVar2 = 0x7fff;
    }
    if (iVar2 < -0x7fff) {
      iVar2 = -0x8000;
    }
    *param_2 = (short)iVar2;
    iVar2 = (int)sVar6 - (int)sVar5;
    if (0x7ffe < iVar2) {
      iVar2 = 0x7fff;
    }
    if (iVar2 < -0x7fff) {
      iVar2 = -0x8000;
    }
    *param_3 = (short)iVar2;
  }
  return;
}



/* Entry: 108b58690; end: 108b587c7;  */

undefined8 FUN_108b58690(uint *param_1,uint param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  
  if (((((param_1 != (uint *)0x0) &&
        (uVar4 = param_1[2],
        (((((uVar4 == 8000 || uVar4 == 12000) || uVar4 == 16000) || uVar4 == 24000) ||
         uVar4 == 32000) || uVar4 == 48000) || uVar4 == 0xac44)) &&
       (uVar4 = param_1[5], (uVar4 == 8000 || uVar4 == 16000) || uVar4 == 12000)) &&
      (((uVar5 = param_1[3], (uVar5 == 8000 || uVar5 == 16000) || uVar5 == 12000 &&
        (uVar3 = param_1[4],
        (((uVar3 == 8000 || uVar3 == 16000) || uVar3 == 12000) && uVar3 <= uVar4) && uVar4 <= uVar5)
        ) && ((param_1[6] < 0x3d &&
              (((1L << ((ulong)param_1[6] & 0x3f) & 0x1000010000100400U) != 0 && (param_1[8] < 0x65)
               ))))))) &&
     ((param_1[0xd] < 2 &&
      (((((param_1[0xe] < 2 && (param_1[10] < 2)) && (0xfffffffd < *param_1 - 3)) &&
        ((0xfffffffd < param_1[1] - 3 && (param_1[1] <= *param_1)))) && (param_1[9] < 0xb)))))) {
    return 0;
  }
  _abort();
  param_1[0x480] = param_2;
  uVar4 = param_1[0x478];
  if (param_1[0x479] == 2) {
    param_2 = (param_2 + (int)uVar4 / -0x10) - 2000;
  }
  uVar5 = 0xbe;
  puVar1 = &UNK_10df92406;
  if (uVar4 == 0xc) {
    uVar5 = 0x9a;
    puVar1 = &UNK_10df9236b;
  }
  puVar2 = &UNK_10df92300;
  uVar3 = 0x6a;
  if (uVar4 != 8) {
    puVar2 = puVar1;
    uVar3 = uVar5;
  }
  if ((int)param_2 < 0x1068) {
    uVar4 = 0;
  }
  else {
    uVar4 = (param_2 + 200) / 400 - 10;
    if (uVar3 <= uVar4) {
      uVar4 = uVar3;
    }
    uVar4 = (uint)(byte)puVar2[uVar4] * 0x15;
  }
  param_1[0x49f] = uVar4;
  return 0;
}



/* Entry: 108b587c8; end: 108b5886b;  */

undefined8 FUN_108b587c8(long param_1,int param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  
  *(int *)(param_1 + 0x1200) = param_2;
  iVar4 = *(int *)(param_1 + 0x11e0);
  if (*(int *)(param_1 + 0x11e4) == 2) {
    param_2 = param_2 + iVar4 / -0x10 + -2000;
  }
  uVar5 = 0xbe;
  puVar1 = &UNK_10df92406;
  if (iVar4 == 0xc) {
    uVar5 = 0x9a;
    puVar1 = &UNK_10df9236b;
  }
  puVar2 = &UNK_10df92300;
  uVar3 = 0x6a;
  if (iVar4 != 8) {
    puVar2 = puVar1;
    uVar3 = uVar5;
  }
  if (param_2 < 0x1068) {
    iVar4 = 0;
  }
  else {
    uVar5 = (param_2 + 200U) / 400 - 10;
    if (uVar3 <= uVar5) {
      uVar5 = uVar3;
    }
    iVar4 = (uint)(byte)puVar2[uVar5] * 0x15;
  }
  *(int *)(param_1 + 0x127c) = iVar4;
  return 0;
}



/* Entry: 108b5886c; end: 108b588b3;  */

undefined8 FUN_108b5886c(long param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  long lVar4;
  
  _bzero(param_1,0x27c8);
  *(undefined4 *)(param_1 + 0x13f4) = param_2;
  *(undefined8 *)(param_1 + 8) = 0x2f4000002f400;
  *(undefined4 *)(param_1 + 0x1238) = 1;
  *(undefined8 *)(param_1 + 0x7c) = 0;
  *(undefined8 *)(param_1 + 0x74) = 0;
  *(undefined8 *)(param_1 + 0x8c) = 0;
  *(undefined8 *)(param_1 + 0x84) = 0;
  *(undefined8 *)(param_1 + 0x5c) = 0;
  *(undefined8 *)(param_1 + 0x54) = 0;
  *(undefined8 *)(param_1 + 0x6c) = 0;
  *(undefined8 *)(param_1 + 100) = 0;
  *(undefined8 *)(param_1 + 0x3c) = 0;
  *(undefined8 *)(param_1 + 0x34) = 0;
  *(undefined8 *)(param_1 + 0x4c) = 0;
  *(undefined8 *)(param_1 + 0x44) = 0;
  *(undefined8 *)(param_1 + 0x2c) = 0;
  *(undefined8 *)(param_1 + 0x24) = 0;
  piVar3 = (int *)(param_1 + 0x80);
  *(undefined8 *)(param_1 + 0x88) = 0xc00000010;
  piVar3[0] = 0x32;
  piVar3[1] = 0x19;
  lVar4 = 4;
  do {
    iVar1 = *piVar3 * 100;
    piVar3[-8] = iVar1;
    iVar2 = 0;
    if (iVar1 != 0) {
      iVar2 = 0x7fffffff / iVar1;
    }
    piVar3[-4] = iVar2;
    piVar3 = piVar3 + 1;
    lVar4 = lVar4 + -1;
  } while (lVar4 != 0);
  *(undefined4 *)(param_1 + 0x90) = 0xf;
  for (lVar4 = 0; lVar4 != 0x10; lVar4 = lVar4 + 4) {
    *(undefined4 *)(param_1 + 0x4c + lVar4) = 0x6400;
  }
  return 0;
}



/* Entry: 108b588b4; end: 108b5908f;  */

/* WARNING: Possible PIC construction at 0x000108b58948: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000108b5894c) */
/* WARNING: Removing unreachable block (ram,0x000108b58984) */
/* WARNING: Removing unreachable block (ram,0x000108b5898c) */
/* WARNING: Removing unreachable block (ram,0x000108b58dd0) */
/* WARNING: Removing unreachable block (ram,0x000108b589ac) */
/* WARNING: Removing unreachable block (ram,0x000108b589b0) */
/* WARNING: Removing unreachable block (ram,0x000108b58a30) */
/* WARNING: Removing unreachable block (ram,0x000108b58a34) */
/* WARNING: Removing unreachable block (ram,0x000108b58a88) */
/* WARNING: Removing unreachable block (ram,0x000108b58a70) */
/* WARNING: Removing unreachable block (ram,0x000108b589b8) */
/* WARNING: Removing unreachable block (ram,0x000108b589c0) */
/* WARNING: Removing unreachable block (ram,0x000108b58a80) */
/* WARNING: Removing unreachable block (ram,0x000108b589f0) */
/* WARNING: Removing unreachable block (ram,0x000108b58a8c) */
/* WARNING: Removing unreachable block (ram,0x000108b5897c) */
/* WARNING: Removing unreachable block (ram,0x000108b58a94) */
/* WARNING: Removing unreachable block (ram,0x000108b58a9c) */
/* WARNING: Removing unreachable block (ram,0x000108b58ab4) */
/* WARNING: Removing unreachable block (ram,0x000108b58abc) */
/* WARNING: Removing unreachable block (ram,0x000108b58ac0) */
/* WARNING: Removing unreachable block (ram,0x000108b58ac4) */
/* WARNING: Removing unreachable block (ram,0x000108b58af0) */
/* WARNING: Removing unreachable block (ram,0x000108b58b78) */
/* WARNING: Removing unreachable block (ram,0x000108b58b84) */
/* WARNING: Removing unreachable block (ram,0x000108b58b90) */
/* WARNING: Removing unreachable block (ram,0x000108b58ba4) */
/* WARNING: Removing unreachable block (ram,0x000108b58b5c) */
/* WARNING: Removing unreachable block (ram,0x000108b58b68) */
/* WARNING: Removing unreachable block (ram,0x000108b58ba8) */
/* WARNING: Removing unreachable block (ram,0x000108b58bf0) */
/* WARNING: Removing unreachable block (ram,0x000108b58c10) */
/* WARNING: Removing unreachable block (ram,0x000108b58c20) */
/* WARNING: Removing unreachable block (ram,0x000108b58ad8) */
/* WARNING: Removing unreachable block (ram,0x000108b58c28) */
/* WARNING: Removing unreachable block (ram,0x000108b58c34) */
/* WARNING: Removing unreachable block (ram,0x000108b58cac) */
/* WARNING: Removing unreachable block (ram,0x000108b58c3c) */
/* WARNING: Removing unreachable block (ram,0x000108b58c7c) */
/* WARNING: Removing unreachable block (ram,0x000108b58c44) */
/* WARNING: Removing unreachable block (ram,0x000108b58ce8) */
/* WARNING: Removing unreachable block (ram,0x000108b58d90) */
/* WARNING: Removing unreachable block (ram,0x000108b58dd8) */
/* WARNING: Removing unreachable block (ram,0x000108b58e30) */
/* WARNING: Removing unreachable block (ram,0x000108b58de8) */
/* WARNING: Removing unreachable block (ram,0x000108b58d98) */
/* WARNING: Removing unreachable block (ram,0x000108b58cf0) */
/* WARNING: Removing unreachable block (ram,0x000108b58d10) */
/* WARNING: Removing unreachable block (ram,0x000108b58d1c) */
/* WARNING: Removing unreachable block (ram,0x000108b58c48) */
/* WARNING: Removing unreachable block (ram,0x000108b58cd8) */
/* WARNING: Removing unreachable block (ram,0x000108b58d20) */
/* WARNING: Removing unreachable block (ram,0x000108b58d2c) */
/* WARNING: Removing unreachable block (ram,0x000108b58d58) */
/* WARNING: Removing unreachable block (ram,0x000108b58d60) */
/* WARNING: Removing unreachable block (ram,0x000108b58d78) */
/* WARNING: Removing unreachable block (ram,0x000108b58d7c) */
/* WARNING: Removing unreachable block (ram,0x000108b58d80) */
/* WARNING: Removing unreachable block (ram,0x000108b58aec) */
/* WARNING: Removing unreachable block (ram,0x000108b58e6c) */

void FUN_108b588b4(long param_1,undefined8 *param_2,undefined4 param_3,undefined4 param_4,
                  undefined8 param_5)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  long lVar5;
  long lVar6;
  uint uVar7;
  short extraout_w8;
  long extraout_x8;
  long extraout_x12;
  ulong uVar8;
  int iVar9;
  long unaff_x19;
  undefined8 *unaff_x20;
  undefined8 unaff_x21;
  undefined1 *puVar10;
  ulong unaff_x22;
  undefined8 unaff_x23;
  undefined8 unaff_x24;
  undefined1 *puVar11;
  undefined8 unaff_x25;
  undefined8 unaff_x26;
  undefined8 unaff_x27;
  ulong uVar12;
  undefined8 unaff_x28;
  undefined1 *unaff_x29;
  undefined8 unaff_x30;
  
  puVar10 = &stack0xfffffffffffffff0;
  uVar1 = *(undefined4 *)(param_2 + 7);
  *(undefined4 *)(param_1 + 0x1830) = *(undefined4 *)((long)param_2 + 0x34);
  *(undefined4 *)(param_1 + 0x1244) = uVar1;
  iVar2 = *(int *)(param_2 + 1);
  *(int *)(param_1 + 0x11cc) = iVar2;
  *(undefined8 *)(param_1 + 0x11d4) = *(undefined8 *)((long)param_2 + 0xc);
  *(undefined4 *)(param_1 + 0x11dc) = *(undefined4 *)((long)param_2 + 0x14);
  *(undefined4 *)(param_1 + 0x183c) = *(undefined4 *)(param_2 + 5);
  *(undefined8 *)(param_1 + 0x1688) = *param_2;
  *(undefined4 *)(param_1 + 0x11b8) = param_3;
  *(undefined4 *)(param_1 + 0x1690) = param_4;
  if ((*(int *)(param_1 + 0x123c) == 0) || (*(int *)(param_1 + 0x1248) != 0)) {
    lVar6 = param_1;
    func_0x000108b56a50(param_1,param_2);
    uVar7 = (uint)lVar6;
    if ((uint)param_5 != 0) {
      uVar7 = (uint)param_5;
    }
    unaff_x22 = (ulong)uVar7;
    unaff_x30 = 0x108b5894c;
    register0x00000008 = (BADSPACEBASE *)&stack0xffffffffffffffa0;
    unaff_x19 = param_1;
    unaff_x20 = param_2;
    unaff_x21 = param_5;
    unaff_x29 = puVar10;
  }
  else {
    if (iVar2 == *(int *)(param_1 + 0x11d0)) {
      return;
    }
    uVar7 = *(uint *)(param_1 + 0x11e0);
    if ((int)uVar7 < 1) {
      return;
    }
  }
  *(undefined8 *)((long)register0x00000008 + -0x60) = unaff_x28;
  *(undefined8 *)((long)register0x00000008 + -0x58) = unaff_x27;
  *(undefined8 *)((long)register0x00000008 + -0x50) = unaff_x26;
  *(undefined8 *)((long)register0x00000008 + -0x48) = unaff_x25;
  *(undefined8 *)((long)register0x00000008 + -0x40) = unaff_x24;
  *(undefined8 *)((long)register0x00000008 + -0x38) = unaff_x23;
  *(ulong *)((long)register0x00000008 + -0x30) = unaff_x22;
  *(undefined8 *)((long)register0x00000008 + -0x28) = unaff_x21;
  *(undefined8 **)((long)register0x00000008 + -0x20) = unaff_x20;
  *(long *)((long)register0x00000008 + -0x18) = unaff_x19;
  *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
  *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
  *(undefined8 *)((long)register0x00000008 + -0x68) =
       *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  uVar3 = *(uint *)(param_1 + 0x11e0);
  if ((uVar3 != uVar7) || (*(int *)(param_1 + 0x11d0) != *(int *)(param_1 + 0x11cc))) {
    if (uVar3 == 0) {
      FUN_108b5a3a8(param_1 + 0x16a0,*(undefined4 *)(param_1 + 0x11cc),uVar7 * 1000,1);
    }
    else {
      iVar2 = *(int *)(param_1 + 0x11e4) * 10 + 5;
      uVar12 = (ulong)(iVar2 * uVar7);
      (*(code *)PTR____chkstk_darwin_11034bd40)();
      puVar10 = (undefined1 *)((long)register0x00000008 + (-0x70 - extraout_x12));
      uVar8 = (ulong)(iVar2 * uVar3);
      while (0 < (int)uVar8) {
        lVar5 = uVar8 * 4;
        lVar6 = uVar8 * 2;
        uVar8 = uVar8 - 1;
        iVar9 = (int)*(float *)(param_1 + 0x1c80 + lVar5);
        if (iVar9 < -0x7fff) {
          iVar9 = -0x8000;
        }
        if (0x7ffe < iVar9) {
          iVar9 = 0x7fff;
        }
        *(short *)(puVar10 + lVar6 + -2) = (short)iVar9;
      }
      (*(code *)PTR____chkstk_darwin_11034bd40)();
      puVar11 = puVar10 + -400;
      FUN_108b5a3a8(puVar11,extraout_w8 * 1000,*(undefined4 *)(param_1 + 0x11cc),0);
      uVar4 = (*(int *)(param_1 + 0x11cc) / 1000) * iVar2;
      (*(code *)PTR____chkstk_darwin_11034bd40)
                ((-(ulong)(uVar4 >> 0x1f) & 0xfffffffe00000000 | (ulong)uVar4 << 1) + 0xf &
                 0xfffffffffffffff0);
      FUN_108b5a6b0(puVar11,(long)puVar11 - extraout_x8,puVar10,(ulong)(iVar2 * uVar3));
      FUN_108b5a3a8(param_1 + 0x16a0,*(undefined4 *)(param_1 + 0x11cc),(short)uVar7 * 1000,1);
      FUN_108b5a6b0(param_1 + 0x16a0,puVar10,(long)puVar11 - extraout_x8,(ulong)uVar4);
      for (; 0 < (int)uVar12; uVar12 = uVar12 - 1) {
        *(float *)(param_1 + 0x1c80 + uVar12 * 4) =
             (float)(int)*(short *)(puVar10 + uVar12 * 2 + -2);
      }
    }
  }
  *(undefined4 *)(param_1 + 0x11d0) = *(undefined4 *)(param_1 + 0x11cc);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != *(long *)((long)register0x00000008 + -0x68)) {
    ___stack_chk_fail();
  }
  return;
}



/* Entry: 108b59090; end: 108b590bb;  */

void FUN_108b59090(void)

{
  return;
}



/* Entry: 108b590bc; end: 108b593eb;  */

/* WARNING: Possible PIC construction at 0x000108b59494: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000108b59498) */

void FUN_108b590bc(short *param_1,undefined8 param_2,undefined8 param_3)

{
  bool bVar1;
  uint uVar2;
  short sVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined1 *puVar7;
  ulong uVar8;
  int iVar9;
  ulong uVar10;
  long lVar11;
  int *piVar12;
  int *piVar13;
  long lVar14;
  int iVar15;
  ulong uVar16;
  uint uVar17;
  short *psVar18;
  undefined1 *puVar19;
  undefined1 *puVar20;
  int iVar21;
  undefined1 *puVar22;
  uint uVar23;
  undefined1 *puVar24;
  ulong uVar25;
  ulong uVar26;
  uint uVar27;
  ulong uVar28;
  ulong uVar29;
  uint uStack_f4;
  int iStack_f0;
  undefined1 *apuStack_e8 [2];
  undefined1 auStack_d8 [52];
  undefined1 auStack_a4 [52];
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar22 = auStack_a4;
  apuStack_e8[1] = auStack_d8;
  iVar9 = (int)param_3;
  uVar16 = (ulong)(uint)(iVar9 >> 1);
  uVar10 = uVar16;
  apuStack_e8[0] = puVar22;
  FUN_108b593ec(param_2,auStack_a4,auStack_d8);
  puVar24 = auStack_a4;
  FUN_108b594ac(puVar24,0x2000);
  uStack_f4 = 0;
  uVar27 = uStack_f4;
  if ((int)puVar24 < 0) goto LAB_108b59348;
  uVar17 = 0;
LAB_108b5914c:
  uVar27 = 0;
  iVar15 = 1;
  uVar29 = 0x2000;
  do {
    iVar21 = iVar15 << 8;
    psVar18 = (short *)(&UNK_10df924f0 + (long)iVar15 * 2);
    while( true ) {
      uVar25 = (ulong)*psVar18;
      puVar7 = puVar22;
      uVar8 = uVar25;
      func_0x000108b59598();
      iVar6 = (int)puVar7;
      if (((int)puVar24 < 1 && (int)uVar27 <= iVar6) ||
         ((-1 < (int)puVar24 && (iVar6 <= (int)-uVar27)))) break;
      uVar27 = 0;
      iVar21 = iVar21 + 0x100;
      bVar1 = 0x7f < iVar15;
      psVar18 = psVar18 + 1;
      puVar24 = puVar7;
      uVar29 = uVar25;
      iVar15 = iVar15 + 1;
      if (bVar1) {
        if (0xf < uVar17) {
          sVar3 = 0;
          if (iVar9 + 1 != 0) {
            sVar3 = (short)(0x8000 / (iVar9 + 1));
          }
          *param_1 = sVar3;
          for (lVar11 = 1; lVar11 < iVar9; lVar11 = lVar11 + 1) {
            param_1[1] = *param_1 + sVar3;
            param_1 = param_1 + 1;
          }
          goto LAB_108b593b0;
        }
        uVar27 = uVar17 + 1;
        func_0x000108b5975c(param_2,param_3,(-2 << (ulong)(uVar17 & 0x1f)) + 0x10000);
        puVar22 = auStack_a4;
        uVar16 = (ulong)(uint)(iVar9 >> 1);
        uVar10 = uVar16;
        FUN_108b593ec(param_2,auStack_a4,auStack_d8);
        puVar24 = auStack_a4;
        FUN_108b594ac(puVar24,0x2000);
        uStack_f4 = 0;
        uVar17 = uVar27;
        if ((int)puVar24 < 0) {
LAB_108b59348:
          *param_1 = 0;
          puVar22 = auStack_d8;
          puVar24 = auStack_d8;
          func_0x000108b59598(puVar24,0x2000);
          uStack_f4 = 1;
          uVar17 = uVar27;
        }
        goto LAB_108b5914c;
      }
    }
    iStack_f0 = -0x100;
    puVar19 = puVar7;
    for (uVar27 = 0; uVar23 = (uint)puVar24, uVar27 != 3; uVar27 = uVar27 + 1) {
      uVar2 = (int)uVar25 + (int)uVar29;
      uVar28 = (ulong)((uVar2 & 1) + ((int)uVar2 >> 1));
      puVar7 = puVar22;
      uVar8 = uVar28;
      func_0x000108b59598();
      puVar20 = puVar7;
      uVar26 = uVar28;
      if (((0 < (int)uVar23) || ((int)puVar7 < 0)) && (((int)uVar23 < 0 || (0 < (int)puVar7)))) {
        iStack_f0 = (0x80U >> (ulong)(uVar27 & 0x1f)) + iStack_f0;
        puVar20 = puVar19;
        puVar24 = puVar7;
        uVar26 = uVar25;
        uVar29 = uVar28;
      }
      puVar19 = puVar20;
      uVar25 = uVar26;
    }
    uVar27 = (uint)(iVar6 == 0);
    uVar2 = -uVar23;
    if (-1 < (int)uVar23) {
      uVar2 = uVar23;
    }
    iVar5 = uVar23 - (uint)puVar19;
    iVar6 = 0;
    if (iVar5 >> 5 != 0) {
      iVar6 = (int)uVar23 / (iVar5 >> 5);
    }
    iVar4 = 0;
    if (iVar5 != 0) {
      iVar4 = (int)((iVar5 >> 1) + uVar23 * 0x20) / iVar5;
    }
    iVar5 = iStack_f0;
    if (uVar23 != (uint)puVar19) {
      iVar5 = iVar4 + iStack_f0;
    }
    iVar6 = iVar6 + iStack_f0;
    if (uVar2 >> 0x10 == 0) {
      iVar6 = iVar5;
    }
    iVar6 = iVar6 + iVar21;
    if (0x7ffe < iVar6) {
      iVar6 = 0x7fff;
    }
    param_1[(int)uStack_f4] = (short)iVar6;
    uStack_f4 = uStack_f4 + 1;
    if (iVar9 <= (int)uStack_f4) {
LAB_108b593b0:
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
        return;
      }
      ___stack_chk_fail();
      uVar27 = (uint)uVar10;
      *(undefined4 *)(uVar8 + (long)(int)uVar27 * 4) = 0x10000;
      *(undefined4 *)(uVar16 + (long)(int)uVar27 * 4) = 0x10000;
      piVar13 = (int *)(puVar7 + (long)(int)uVar27 * 4);
      piVar12 = piVar13;
      for (lVar11 = 0; piVar12 = piVar12 + -1,
          (ulong)(uVar27 & ((int)uVar27 >> 0x1f ^ 0xffffffffU)) << 2 != lVar11; lVar11 = lVar11 + 4)
      {
        *(int *)(uVar8 + lVar11) = -*(int *)((long)piVar13 + lVar11) - *piVar12;
        *(int *)(uVar16 + lVar11) = *(int *)((long)piVar13 + lVar11) - *piVar12;
      }
      lVar11 = (uVar10 & 0xffffffff) << 2;
      while (iVar9 = (int)uVar10, uVar10 = (ulong)(iVar9 - 1), 0 < iVar9) {
        piVar13 = (int *)(uVar8 + lVar11);
        piVar13[-1] = piVar13[-1] - *piVar13;
        piVar13 = (int *)(uVar16 + lVar11);
        piVar13[-1] = piVar13[-1] + *piVar13;
        lVar11 = lVar11 + -4;
      }
      for (lVar11 = 2; piVar13 = (int *)(uVar8 + (long)(int)uVar27 * 4 + -8),
          lVar14 = (long)(int)uVar27, lVar11 <= (int)uVar27; lVar11 = lVar11 + 1) {
        for (; lVar11 < lVar14; lVar14 = lVar14 + -1) {
          *piVar13 = *piVar13 - piVar13[2];
          piVar13 = piVar13 + -1;
        }
        piVar13 = (int *)(uVar8 + lVar11 * 4);
        piVar13[-2] = piVar13[-2] + *piVar13 * -2;
      }
      return;
    }
    puVar22 = apuStack_e8[uStack_f4 & 1];
    uVar29 = (ulong)*(short *)(&UNK_10df924f0 + (long)(iVar15 + -1) * 2);
    puVar24 = (undefined1 *)(ulong)(0x1000 - (uStack_f4 * 0x1000 & 0x2000));
  } while( true );
}



/* Entry: 108b593ec; end: 108b594ab;  */

/* WARNING: Possible PIC construction at 0x000108b59494: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000108b59498) */

void FUN_108b593ec(long param_1,long param_2,long param_3,uint param_4)

{
  long lVar1;
  uint uVar2;
  int *piVar3;
  int *piVar4;
  long lVar5;
  
  *(undefined4 *)(param_2 + (long)(int)param_4 * 4) = 0x10000;
  *(undefined4 *)(param_3 + (long)(int)param_4 * 4) = 0x10000;
  piVar4 = (int *)(param_1 + (long)(int)param_4 * 4);
  piVar3 = piVar4;
  for (lVar1 = 0; piVar3 = piVar3 + -1,
      (ulong)(param_4 & ((int)param_4 >> 0x1f ^ 0xffffffffU)) << 2 != lVar1; lVar1 = lVar1 + 4) {
    *(int *)(param_2 + lVar1) = -*(int *)((long)piVar4 + lVar1) - *piVar3;
    *(int *)(param_3 + lVar1) = *(int *)((long)piVar4 + lVar1) - *piVar3;
  }
  lVar1 = (ulong)param_4 << 2;
  uVar2 = param_4;
  while (0 < (int)uVar2) {
    piVar4 = (int *)(param_2 + lVar1);
    piVar4[-1] = piVar4[-1] - *piVar4;
    piVar4 = (int *)(param_3 + lVar1);
    piVar4[-1] = piVar4[-1] + *piVar4;
    lVar1 = lVar1 + -4;
    uVar2 = uVar2 - 1;
  }
  for (lVar1 = 2; piVar4 = (int *)(param_2 + (long)(int)param_4 * 4 + -8),
      lVar5 = (long)(int)param_4, lVar1 <= (int)param_4; lVar1 = lVar1 + 1) {
    for (; lVar1 < lVar5; lVar5 = lVar5 + -1) {
      *piVar4 = *piVar4 - piVar4[2];
      piVar4 = piVar4 + -1;
    }
    piVar4 = (int *)(param_2 + lVar1 * 4);
    piVar4[-2] = piVar4[-2] + *piVar4 * -2;
  }
  return;
}



/* Entry: 108b594ac; end: 108b5980f;  */

int FUN_108b594ac(int *param_1,int param_2,uint param_3)

{
  int iVar1;
  int extraout_w8;
  int extraout_w9;
  ulong uVar2;
  
  iVar1 = param_1[(int)param_3];
  if (param_3 == 8) {
    func_0x000108b595a0((ulong)((long)iVar1 * (long)(param_2 << 4)) >> 0x10);
    func_0x000108b595a0();
    func_0x000108b595a0();
    iVar1 = *param_1 + (int)((ulong)((long)(param_1[1] + extraout_w8) * (long)extraout_w9) >> 0x10);
  }
  else {
    for (uVar2 = (ulong)param_3; 0 < (int)uVar2; uVar2 = uVar2 - 1) {
      iVar1 = param_1[uVar2 - 1] + (int)((ulong)((long)(param_2 << 4) * (long)iVar1) >> 0x10);
    }
  }
  return iVar1;
}



/* Entry: 108b59810; end: 108b598df;  */

short * FUN_108b59810(short *param_1,short *param_2,uint *param_3,uint param_4,uint param_5)

{
  int iVar1;
  char *pcVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  short *psVar8;
  long lVar9;
  undefined *puVar10;
  ulong uVar11;
  
  if (param_4 == 8) {
    if (param_5 == 2) {
      puVar10 = &UNK_10df9260c;
      lVar9 = 3;
    }
    else {
      if (param_5 != 4) {
LAB_108b598dc:
        _abort();
        psVar8 = (short *)0x0;
        for (uVar11 = (ulong)(param_4 & ((int)param_4 >> 0x1f ^ 0xffffffffU)); uVar11 != 0;
            uVar11 = uVar11 - 1) {
          psVar8 = (short *)(ulong)(uint)(((int)*param_2 * (int)*param_1 >> ((uint)param_3 & 0x1f))
                                         + (int)psVar8);
          param_1 = param_1 + 1;
          param_2 = param_2 + 1;
        }
        return psVar8;
      }
      puVar10 = &UNK_10df9262e;
      lVar9 = 0xb;
    }
  }
  else if (param_5 == 2) {
    puVar10 = &UNK_10df92612;
    lVar9 = 0xc;
  }
  else {
    if (param_5 != 4) goto LAB_108b598dc;
    puVar10 = &UNK_10df9265a;
    lVar9 = 0x22;
  }
  uVar7 = -(param_4 >> 0xf & 1) & 0xfffe0000 | (param_4 & 0xffff) << 1;
  iVar1 = (-(param_4 >> 0xf & 1) & 0xfff80000 | (param_4 & 0xffff) << 3) + (int)(short)param_4;
  uVar6 = iVar1 * 2;
  uVar11 = (ulong)param_5;
  iVar1 = iVar1 * 2;
  uVar3 = uVar7;
  if ((int)uVar7 <= iVar1) {
    uVar3 = uVar6;
  }
  if (iVar1 <= (int)uVar7) {
    uVar7 = uVar6;
  }
  pcVar2 = puVar10 + (int)param_2;
  for (; uVar11 != 0; uVar11 = uVar11 - 1) {
    uVar6 = (int)param_1 + ((int)(param_4 << 0x10) >> 0xf) + (int)*pcVar2;
    uVar4 = uVar6;
    if ((int)uVar6 <= (int)uVar7) {
      uVar4 = uVar7;
    }
    uVar5 = uVar3;
    if ((int)uVar6 <= (int)uVar3) {
      uVar5 = uVar4;
    }
    *param_3 = uVar5;
    pcVar2 = pcVar2 + lVar9;
    param_3 = param_3 + 1;
  }
  return param_1;
}



/* Entry: 108b598e0; end: 108b599cb;  */

int FUN_108b598e0(short *param_1,short *param_2,uint param_3,uint param_4)

{
  int iVar1;
  ulong uVar2;
  
  iVar1 = 0;
  for (uVar2 = (ulong)(param_4 & ((int)param_4 >> 0x1f ^ 0xffffffffU)); uVar2 != 0;
      uVar2 = uVar2 - 1) {
    iVar1 = ((int)*param_2 * (int)*param_1 >> (param_3 & 0x1f)) + iVar1;
    param_1 = param_1 + 1;
    param_2 = param_2 + 1;
  }
  return iVar1;
}



/* Entry: 108b599cc; end: 108b59ac3;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_108b599cc(long param_1,int *param_2,int *param_3,int param_4,uint param_5)

{
  ulong uVar1;
  uint uVar2;
  short *psVar3;
  uint uVar4;
  byte *pbVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  uint *puVar9;
  undefined4 *puVar10;
  undefined4 *puVar11;
  int iVar12;
  int *piVar13;
  ulong uVar14;
  long lVar15;
  int *piVar16;
  short *psVar17;
  ulong uVar18;
  int *piVar19;
  int iVar20;
  int *piVar21;
  short *psVar22;
  short *psVar23;
  uint uVar24;
  long lVar25;
  int iVar26;
  int iVar27;
  undefined8 uVar28;
  undefined8 uVar29;
  int aiStack_254 [25];
  int aiStack_1f0 [13];
  int aiStack_1bc [13];
  int iStack_188;
  undefined1 auStack_184 [92];
  long lStack_128;
  int aiStack_c8 [24];
  long lStack_68;
  
  if (((5 < (int)param_5) && ((param_5 & 1) == 0)) && ((int)param_5 <= param_4)) {
    psVar17 = (short *)((long)param_2 + (ulong)param_5 * 2 + -0x10);
    for (uVar18 = (ulong)param_5; (int)uVar18 < param_4; uVar18 = uVar18 + 1) {
      psVar3 = (short *)((long)param_2 + uVar18 * 2);
      uVar28 = NEON_rev64(*(undefined8 *)(psVar3 + -4),2);
      uVar29 = *(undefined8 *)param_3;
      iVar12 = (int)(short)uVar28 * (int)(short)uVar29 +
               (int)(short)((ulong)uVar28 >> 0x10) * (int)(short)((ulong)uVar29 >> 0x10) +
               (int)(short)((ulong)uVar28 >> 0x20) * (int)(short)((ulong)uVar29 >> 0x20) +
               (int)(short)((ulong)uVar28 >> 0x30) * (int)(short)((ulong)uVar29 >> 0x30) +
               (int)(short)param_3[2] * (int)psVar3[-5] +
               (int)*(short *)((long)param_3 + 10) * (int)psVar3[-6];
      psVar22 = (short *)((long)param_3 + 0xe);
      psVar23 = psVar17;
      for (uVar14 = 6; uVar14 < param_5; uVar14 = uVar14 + 2) {
        iVar12 = iVar12 + (int)psVar22[-1] * (int)psVar23[1] + (int)*psVar22 * (int)*psVar23;
        psVar23 = psVar23 + -2;
        psVar22 = psVar22 + 2;
      }
      iVar12 = (*psVar3 * 0x1000 - iVar12 >> 0xb) + 1 >> 1;
      if (iVar12 < -0x7fff) {
        iVar12 = -0x8000;
      }
      if (0x7ffe < iVar12) {
        iVar12 = 0x7fff;
      }
      *(short *)(param_1 + uVar18 * 2) = (short)iVar12;
      psVar17 = psVar17 + 1;
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbdc4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__bzero_11034bf90)(param_1,param_5 << 1);
    return;
  }
  _abort();
  iVar12 = 0;
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  for (uVar18 = 0; ((uint)param_2 & ((int)(uint)param_2 >> 0x1f ^ 0xffffffffU)) != uVar18;
      uVar18 = uVar18 + 1) {
    iVar20 = (int)*(short *)(param_1 + uVar18 * 2);
    iVar12 = iVar12 + iVar20;
    aiStack_c8[uVar18] = iVar20 << 0xc;
  }
  if (iVar12 < 0x1000) {
    uVar18 = 0x40000000;
    piVar13 = (int *)((ulong)param_2 & 0xffffffff);
    param_2 = (int *)(((long)param_2 << 0x20) + -0x200000000);
    while (param_3 = (int *)((long)piVar13 + -1), 1 < (int)piVar13) {
      iVar12 = aiStack_c8[(ulong)param_3 & 0xffffffff];
      if (iVar12 - 0xffef9fU < 0xfe0020c3) goto LAB_108b59b28;
      lVar15 = (long)iVar12 * -0x80;
      uVar24 = 0x40000000 - (int)((ulong)-((long)iVar12 * 0x80 * lVar15) >> 0x20);
      uVar18 = uVar24 * uVar18 >> 0x1e & 0xfffffffc;
      if ((int)uVar18 < 0x1a36e) goto LAB_108b59b28;
      uVar14 = (ulong)piVar13 >> 1;
      uVar4 = -uVar24;
      if (-1 < (int)uVar24) {
        uVar4 = uVar24;
      }
      iVar20 = uVar24 << (ulong)((int)LZCOUNT(uVar24) - 1U & 0x1f);
      iVar12 = iVar20 >> 0x10;
      iVar27 = 0;
      if (iVar12 != 0) {
        iVar27 = 0x1fffffff / iVar12;
      }
      uVar2 = (int)((ulong)((long)(int)(-(((ulong)((long)(int)(short)iVar27 * (long)iVar20) >> 0x10)
                                         << 0x23) >> 0x20) * (long)iVar27) >> 0x10) +
              iVar27 * 0x10000;
      iVar12 = (int)LZCOUNT(uVar4);
      uVar8 = (int)LZCOUNT(uVar24) - iVar12;
      uVar24 = -0x80000000 >> (uVar8 & 0x1f);
      uVar7 = 0x7fffffff >> (ulong)(uVar8 & 0x1f);
      uVar4 = uVar2;
      if ((int)uVar2 <= (int)uVar24) {
        uVar4 = uVar24;
      }
      if ((int)uVar2 <= (int)uVar7) {
        uVar7 = uVar4;
      }
      iVar20 = (int)uVar2 >> (-uVar8 & 0x1f);
      if (uVar8 < 0xffffffc2) {
        iVar20 = uVar7 << (ulong)(uVar8 & 0x1f);
      }
      piVar13 = aiStack_c8;
      piVar19 = param_2;
      for (; uVar14 != 0; uVar14 = uVar14 - 1) {
        iVar27 = *piVar13;
        iVar6 = *(int *)((long)aiStack_c8 + ((long)piVar19 >> 0x1e));
        iVar26 = NEON_sqsub(iVar27,(int)(((ulong)(iVar6 * lVar15) >> 0x1e) + 1 >> 1));
        if (iVar12 == 0x1f) {
          lVar25 = ((ulong)(uint)(iVar26 * iVar20) & 1) + ((long)iVar20 * (long)iVar26 >> 1);
          iVar26 = (int)lVar25;
          if (lVar25 != iVar26) goto LAB_108b59b28;
          *piVar13 = iVar26;
          iVar27 = NEON_sqsub(iVar6,(int)(((ulong)(iVar27 * lVar15) >> 0x1e) + 1 >> 1));
          lVar25 = ((ulong)(uint)(iVar27 * iVar20) & 1) + ((long)iVar20 * (long)iVar27 >> 1);
        }
        else {
          uVar1 = ((long)iVar20 * (long)iVar26 >> ((ulong)(0x1f - iVar12) & 0x3f)) + 1;
          lVar25 = (long)uVar1 >> 1;
          if (lVar25 != (int)lVar25) goto LAB_108b59b28;
          *piVar13 = (int)(uVar1 >> 1);
          iVar27 = NEON_sqsub(iVar6,(int)(((ulong)(iVar27 * lVar15) >> 0x1e) + 1 >> 1));
          lVar25 = ((long)iVar20 * (long)iVar27 >> ((ulong)(0x1f - iVar12) & 0x3f)) + 1 >> 1;
        }
        if (lVar25 != (int)lVar25) goto LAB_108b59b28;
        *(int *)((long)aiStack_c8 + ((long)piVar19 >> 0x1e)) = (int)lVar25;
        piVar13 = piVar13 + 1;
        piVar19 = piVar19 + -0x40000000;
      }
      param_2 = param_2 + -0x40000000;
      piVar13 = param_3;
    }
    if (0xfe0020c2 <
        *(int *)((long)aiStack_c8 +
                (-((ulong)param_3 >> 0x1f & 1) & 0xfffffffc00000000 |
                ((ulong)param_3 & 0xffffffff) << 2)) - 0xffef9fU) {
      uVar24 = (uint)((0x40000000 -
                      (int)((ulong)((long)(aiStack_c8[0] * -0x80) * (long)(aiStack_c8[0] * -0x80))
                           >> 0x20)) * uVar18 >> 0x1e) & 0xfffffffc;
      uVar4 = 0;
      if (0x1a36d < (int)uVar24) {
        uVar4 = uVar24;
      }
      puVar10 = (undefined4 *)(ulong)uVar4;
      goto LAB_108b59b2c;
    }
  }
LAB_108b59b28:
  puVar10 = (undefined4 *)0x0;
LAB_108b59b2c:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  lStack_128 = *(long *)PTR____stack_chk_guard_11034bdc0;
  iVar12 = (int)param_3;
  puVar11 = puVar10;
  piVar13 = param_3;
  if (iVar12 == 10 || iVar12 == 0x10) {
    pbVar5 = &UNK_10df925f2;
    if (iVar12 != 0x10) {
      pbVar5 = &UNK_10df92602;
    }
    for (uVar18 = (ulong)param_3 & 0xffffffff; uVar18 != 0; uVar18 = uVar18 - 1) {
      lVar15 = (long)((int)(short)*param_2 >> 8) * 2;
      (&iStack_188)[*pbVar5] =
           ((int)(((int)*(short *)(&UNK_10df924f2 + lVar15) -
                  (int)*(short *)(&UNK_10df924f0 + lVar15)) * ((int)(short)*param_2 & 0xffU) +
                 *(short *)(&UNK_10df924f0 + lVar15) * 0x100) >> 3) + 1 >> 1;
      pbVar5 = pbVar5 + 1;
      param_2 = (int *)((long)param_2 + 2);
    }
    uVar14 = (ulong)param_3 >> 1 & 0x7fffffff;
    FUN_108b59fa8(aiStack_1bc,&iStack_188,uVar14);
    FUN_108b59fa8(aiStack_1f0,auStack_184,uVar14);
    uVar18 = -((ulong)param_3 >> 0x1f & 1) & 0xfffffffc00000000 | ((ulong)param_3 & 0xffffffff) << 2
    ;
    for (lVar15 = 0; uVar14 << 2 != lVar15; lVar15 = lVar15 + 4) {
      iVar12 = *(int *)((long)aiStack_1bc + lVar15) + *(int *)((long)aiStack_1bc + lVar15 + 4);
      iVar20 = *(int *)((long)aiStack_1f0 + lVar15 + 4) - *(int *)((long)aiStack_1f0 + lVar15);
      *(int *)((long)aiStack_254 + lVar15 + 4U) = -(iVar12 + iVar20);
      *(int *)((long)aiStack_254 + uVar18) = iVar20 - iVar12;
      uVar18 = uVar18 - 4;
    }
    piVar13 = (int *)0xc;
    FUN_108b5bca8(puVar10,aiStack_254 + 1,0xc,0x11,param_3);
    for (uVar24 = 0;
        (puVar11 = puVar10, param_2 = param_3, FUN_108b60a68(), (int)puVar11 == 0 && (uVar24 < 0x10)
        ); uVar24 = uVar24 + 1) {
      piVar13 = (int *)(ulong)((-2 << (ulong)(uVar24 & 0x1f)) + 0x10000);
      func_0x000108b5975c(aiStack_254 + 1,param_3);
      puVar11 = puVar10;
      puVar9 = (uint *)aiStack_254;
      for (uVar18 = (ulong)param_3 & 0xffffffff; puVar9 = (uint *)((long)puVar9 + 4), uVar18 != 0;
          uVar18 = uVar18 - 1) {
        *(short *)puVar11 = (short)((*puVar9 >> 4) + 1 >> 1);
        puVar11 = (undefined4 *)((long)puVar11 + 2);
      }
    }
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_128) {
      return;
    }
    ___stack_chk_fail();
  }
  _abort();
  piVar16 = puVar11 + 1;
  *puVar11 = 0x10000;
  iVar12 = -*param_2;
  piVar19 = piVar16;
  uVar18 = 1;
  while (*piVar16 = iVar12, uVar18 < ((ulong)piVar13 & 0xffffffff)) {
    iVar12 = param_2[uVar18 * 2];
    uVar14 = uVar18 + 1;
    puVar11[uVar14] =
         (puVar11 + uVar18)[-1] * 2 -
         (int)(((ulong)((long)(int)puVar11[uVar18] * (long)iVar12) >> 0xf) + 1 >> 1);
    piVar21 = piVar19;
    for (; 1 < (long)uVar18; uVar18 = uVar18 - 1) {
      *piVar21 = (*piVar21 + piVar21[-2]) -
                 (int)(((ulong)((long)piVar21[-1] * (long)iVar12) >> 0xf) + 1 >> 1);
      piVar21 = piVar21 + -1;
    }
    iVar12 = *piVar16 - iVar12;
    piVar19 = piVar19 + 1;
    uVar18 = uVar14;
  }
  return;
}



/* Entry: 108b59ac4; end: 108b59fa7;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_108b59ac4(long param_1,int *param_2,int *param_3)

{
  ulong uVar1;
  uint uVar2;
  uint uVar3;
  byte *pbVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint *puVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  int iVar11;
  int *piVar12;
  long lVar13;
  int *piVar14;
  ulong uVar15;
  int *piVar16;
  int iVar17;
  int *piVar18;
  uint uVar19;
  ulong uVar20;
  long lVar21;
  int iVar22;
  int iVar23;
  int aiStack_244 [25];
  int aiStack_1e0 [13];
  int aiStack_1ac [13];
  int iStack_178;
  undefined1 auStack_174 [92];
  long lStack_118;
  int aiStack_b8 [24];
  long lStack_58;
  
  iVar11 = 0;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  for (uVar15 = 0; ((uint)param_2 & ((int)(uint)param_2 >> 0x1f ^ 0xffffffffU)) != uVar15;
      uVar15 = uVar15 + 1) {
    iVar17 = (int)*(short *)(param_1 + uVar15 * 2);
    iVar11 = iVar11 + iVar17;
    aiStack_b8[uVar15] = iVar17 << 0xc;
  }
  if (iVar11 < 0x1000) {
    uVar15 = 0x40000000;
    piVar12 = (int *)((ulong)param_2 & 0xffffffff);
    param_2 = (int *)(((long)param_2 << 0x20) + -0x200000000);
    while (param_3 = (int *)((long)piVar12 + -1), 1 < (int)piVar12) {
      iVar11 = aiStack_b8[(ulong)param_3 & 0xffffffff];
      if (iVar11 - 0xffef9fU < 0xfe0020c3) goto LAB_108b59b28;
      lVar13 = (long)iVar11 * -0x80;
      uVar19 = 0x40000000 - (int)((ulong)-((long)iVar11 * 0x80 * lVar13) >> 0x20);
      uVar15 = uVar19 * uVar15 >> 0x1e & 0xfffffffc;
      if ((int)uVar15 < 0x1a36e) goto LAB_108b59b28;
      uVar20 = (ulong)piVar12 >> 1;
      uVar3 = -uVar19;
      if (-1 < (int)uVar19) {
        uVar3 = uVar19;
      }
      iVar17 = uVar19 << (ulong)((int)LZCOUNT(uVar19) - 1U & 0x1f);
      iVar11 = iVar17 >> 0x10;
      iVar23 = 0;
      if (iVar11 != 0) {
        iVar23 = 0x1fffffff / iVar11;
      }
      uVar2 = (int)((ulong)((long)(int)(-(((ulong)((long)(int)(short)iVar23 * (long)iVar17) >> 0x10)
                                         << 0x23) >> 0x20) * (long)iVar23) >> 0x10) +
              iVar23 * 0x10000;
      iVar11 = (int)LZCOUNT(uVar3);
      uVar7 = (int)LZCOUNT(uVar19) - iVar11;
      uVar19 = -0x80000000 >> (uVar7 & 0x1f);
      uVar6 = 0x7fffffff >> (ulong)(uVar7 & 0x1f);
      uVar3 = uVar2;
      if ((int)uVar2 <= (int)uVar19) {
        uVar3 = uVar19;
      }
      if ((int)uVar2 <= (int)uVar6) {
        uVar6 = uVar3;
      }
      iVar17 = (int)uVar2 >> (-uVar7 & 0x1f);
      if (uVar7 < 0xffffffc2) {
        iVar17 = uVar6 << (ulong)(uVar7 & 0x1f);
      }
      piVar12 = aiStack_b8;
      piVar16 = param_2;
      for (; uVar20 != 0; uVar20 = uVar20 - 1) {
        iVar23 = *piVar12;
        iVar5 = *(int *)((long)aiStack_b8 + ((long)piVar16 >> 0x1e));
        iVar22 = NEON_sqsub(iVar23,(int)(((ulong)(iVar5 * lVar13) >> 0x1e) + 1 >> 1));
        if (iVar11 == 0x1f) {
          lVar21 = ((ulong)(uint)(iVar22 * iVar17) & 1) + ((long)iVar17 * (long)iVar22 >> 1);
          iVar22 = (int)lVar21;
          if (lVar21 != iVar22) goto LAB_108b59b28;
          *piVar12 = iVar22;
          iVar23 = NEON_sqsub(iVar5,(int)(((ulong)(iVar23 * lVar13) >> 0x1e) + 1 >> 1));
          lVar21 = ((ulong)(uint)(iVar23 * iVar17) & 1) + ((long)iVar17 * (long)iVar23 >> 1);
        }
        else {
          uVar1 = ((long)iVar17 * (long)iVar22 >> ((ulong)(0x1f - iVar11) & 0x3f)) + 1;
          lVar21 = (long)uVar1 >> 1;
          if (lVar21 != (int)lVar21) goto LAB_108b59b28;
          *piVar12 = (int)(uVar1 >> 1);
          iVar23 = NEON_sqsub(iVar5,(int)(((ulong)(iVar23 * lVar13) >> 0x1e) + 1 >> 1));
          lVar21 = ((long)iVar17 * (long)iVar23 >> ((ulong)(0x1f - iVar11) & 0x3f)) + 1 >> 1;
        }
        if (lVar21 != (int)lVar21) goto LAB_108b59b28;
        *(int *)((long)aiStack_b8 + ((long)piVar16 >> 0x1e)) = (int)lVar21;
        piVar12 = piVar12 + 1;
        piVar16 = piVar16 + -0x40000000;
      }
      param_2 = param_2 + -0x40000000;
      piVar12 = param_3;
    }
    if (0xfe0020c2 <
        *(int *)((long)aiStack_b8 +
                (-((ulong)param_3 >> 0x1f & 1) & 0xfffffffc00000000 |
                ((ulong)param_3 & 0xffffffff) << 2)) - 0xffef9fU) {
      uVar19 = (uint)((0x40000000 -
                      (int)((ulong)((long)(aiStack_b8[0] * -0x80) * (long)(aiStack_b8[0] * -0x80))
                           >> 0x20)) * uVar15 >> 0x1e) & 0xfffffffc;
      uVar3 = 0;
      if (0x1a36d < (int)uVar19) {
        uVar3 = uVar19;
      }
      puVar9 = (undefined4 *)(ulong)uVar3;
      goto LAB_108b59b2c;
    }
  }
LAB_108b59b28:
  puVar9 = (undefined4 *)0x0;
LAB_108b59b2c:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  lStack_118 = *(long *)PTR____stack_chk_guard_11034bdc0;
  iVar11 = (int)param_3;
  puVar10 = puVar9;
  piVar12 = param_3;
  if (iVar11 == 10 || iVar11 == 0x10) {
    pbVar4 = &UNK_10df925f2;
    if (iVar11 != 0x10) {
      pbVar4 = &UNK_10df92602;
    }
    for (uVar15 = (ulong)param_3 & 0xffffffff; uVar15 != 0; uVar15 = uVar15 - 1) {
      lVar13 = (long)((int)(short)*param_2 >> 8) * 2;
      (&iStack_178)[*pbVar4] =
           ((int)(((int)*(short *)(&UNK_10df924f2 + lVar13) -
                  (int)*(short *)(&UNK_10df924f0 + lVar13)) * ((int)(short)*param_2 & 0xffU) +
                 *(short *)(&UNK_10df924f0 + lVar13) * 0x100) >> 3) + 1 >> 1;
      pbVar4 = pbVar4 + 1;
      param_2 = (int *)((long)param_2 + 2);
    }
    uVar20 = (ulong)param_3 >> 1 & 0x7fffffff;
    FUN_108b59fa8(aiStack_1ac,&iStack_178,uVar20);
    FUN_108b59fa8(aiStack_1e0,auStack_174,uVar20);
    uVar15 = -((ulong)param_3 >> 0x1f & 1) & 0xfffffffc00000000 | ((ulong)param_3 & 0xffffffff) << 2
    ;
    for (lVar13 = 0; uVar20 << 2 != lVar13; lVar13 = lVar13 + 4) {
      iVar11 = *(int *)((long)aiStack_1ac + lVar13) + *(int *)((long)aiStack_1ac + lVar13 + 4);
      iVar17 = *(int *)((long)aiStack_1e0 + lVar13 + 4) - *(int *)((long)aiStack_1e0 + lVar13);
      *(int *)((long)aiStack_244 + lVar13 + 4U) = -(iVar11 + iVar17);
      *(int *)((long)aiStack_244 + uVar15) = iVar17 - iVar11;
      uVar15 = uVar15 - 4;
    }
    piVar12 = (int *)0xc;
    FUN_108b5bca8(puVar9,aiStack_244 + 1,0xc,0x11,param_3);
    for (uVar19 = 0;
        (puVar10 = puVar9, param_2 = param_3, FUN_108b60a68(), (int)puVar10 == 0 && (uVar19 < 0x10))
        ; uVar19 = uVar19 + 1) {
      piVar12 = (int *)(ulong)((-2 << (ulong)(uVar19 & 0x1f)) + 0x10000);
      func_0x000108b5975c(aiStack_244 + 1,param_3);
      puVar10 = puVar9;
      puVar8 = (uint *)aiStack_244;
      for (uVar15 = (ulong)param_3 & 0xffffffff; puVar8 = (uint *)((long)puVar8 + 4), uVar15 != 0;
          uVar15 = uVar15 - 1) {
        *(short *)puVar10 = (short)((*puVar8 >> 4) + 1 >> 1);
        puVar10 = (undefined4 *)((long)puVar10 + 2);
      }
    }
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_118) {
      return;
    }
    ___stack_chk_fail();
  }
  _abort();
  piVar14 = puVar10 + 1;
  *puVar10 = 0x10000;
  iVar11 = -*param_2;
  piVar16 = piVar14;
  uVar15 = 1;
  while (*piVar14 = iVar11, uVar15 < ((ulong)piVar12 & 0xffffffff)) {
    iVar11 = param_2[uVar15 * 2];
    uVar20 = uVar15 + 1;
    puVar10[uVar20] =
         (puVar10 + uVar15)[-1] * 2 -
         (int)(((ulong)((long)(int)puVar10[uVar15] * (long)iVar11) >> 0xf) + 1 >> 1);
    piVar18 = piVar16;
    for (; 1 < (long)uVar15; uVar15 = uVar15 - 1) {
      *piVar18 = (*piVar18 + piVar18[-2]) -
                 (int)(((ulong)((long)piVar18[-1] * (long)iVar11) >> 0xf) + 1 >> 1);
      piVar18 = piVar18 + -1;
    }
    iVar11 = *piVar14 - iVar11;
    piVar16 = piVar16 + 1;
    uVar15 = uVar20;
  }
  return;
}



/* Entry: 108b59fa8; end: 108b5a063;  */

void FUN_108b59fa8(undefined4 *param_1,int *param_2,ulong param_3)

{
  ulong uVar1;
  int *piVar2;
  int *piVar3;
  ulong uVar4;
  int iVar5;
  int *piVar6;
  
  piVar2 = param_1 + 1;
  *param_1 = 0x10000;
  iVar5 = -*param_2;
  piVar3 = piVar2;
  uVar4 = 1;
  while (*piVar2 = iVar5, uVar4 < (param_3 & 0xffffffff)) {
    iVar5 = param_2[uVar4 * 2];
    uVar1 = uVar4 + 1;
    param_1[uVar1] =
         (param_1 + uVar4)[-1] * 2 -
         (int)(((ulong)((long)(int)param_1[uVar4] * (long)iVar5) >> 0xf) + 1 >> 1);
    piVar6 = piVar3;
    for (; 1 < (long)uVar4; uVar4 = uVar4 - 1) {
      *piVar6 = (*piVar6 + piVar6[-2]) -
                (int)(((ulong)((long)piVar6[-1] * (long)iVar5) >> 0xf) + 1 >> 1);
      piVar6 = piVar6 + -1;
    }
    iVar5 = *piVar2 - iVar5;
    piVar3 = piVar3 + 1;
    uVar4 = uVar1;
  }
  return;
}



/* Entry: 108b5a064; end: 108b5a2af;  */

void FUN_108b5a064(short *param_1,short *param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  short sVar4;
  uint uVar5;
  short *psVar6;
  uint uVar7;
  short *psVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  ulong uVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  
  uVar7 = (uint)param_3;
  iVar10 = 0;
  lVar16 = (long)(int)uVar7;
  while( true ) {
    if (iVar10 == 0x14) {
      func_0x000108b5b510(param_1,param_3);
      sVar4 = *param_1;
      if (*param_1 <= *param_2) {
        sVar4 = *param_2;
      }
      *param_1 = sVar4;
      psVar6 = param_1;
      for (lVar15 = 1; psVar8 = psVar6 + 1, lVar15 < lVar16; lVar15 = lVar15 + 1) {
        iVar10 = (int)param_2[lVar15] + (int)*psVar6;
        if (0x7ffe < iVar10) {
          iVar10 = 0x7fff;
        }
        if (iVar10 <= *psVar8) {
          iVar10 = (int)*psVar8;
        }
        if (iVar10 < -0x7fff) {
          iVar10 = -0x8000;
        }
        *psVar8 = (short)iVar10;
        psVar6 = psVar8;
      }
      iVar10 = (int)param_1[(long)(int)uVar7 + -1];
      if (0x8000 - param_2[lVar16] <= (int)param_1[(long)(int)uVar7 + -1]) {
        iVar10 = 0x8000 - param_2[lVar16];
      }
      param_1[(long)(int)uVar7 + -1] = (short)iVar10;
      psVar6 = param_2 + (uVar7 - 1);
      psVar8 = param_1 + (uVar7 - 1);
      for (uVar5 = uVar7 - 2; -1 < (int)uVar5; uVar5 = uVar5 - 1) {
        iVar10 = (int)param_1[uVar5];
        if ((int)*psVar8 - (int)*psVar6 <= (int)param_1[uVar5]) {
          iVar10 = (int)*psVar8 - (int)*psVar6;
        }
        param_1[uVar5] = (short)iVar10;
        psVar6 = psVar6 + -1;
        psVar8 = psVar8 + -1;
      }
      return;
    }
    lVar15 = 0;
    iVar9 = (int)*param_1 - (int)*param_2;
    uVar5 = 0;
    while (uVar11 = uVar5, iVar12 = iVar9, lVar14 = lVar15 + 1, lVar14 < lVar16) {
      iVar9 = (int)(param_1 + lVar15)[1] - ((int)param_1[lVar15] + (int)param_2[lVar15 + 1]);
      lVar15 = lVar14;
      uVar5 = (uint)lVar14;
      if (iVar12 <= iVar9) {
        iVar9 = iVar12;
        uVar5 = uVar11;
      }
    }
    iVar9 = (0x8000 - param_1[(long)(int)uVar7 + -1]) - (int)param_2[lVar16];
    uVar5 = uVar7;
    if (iVar12 <= iVar9) {
      iVar9 = iVar12;
      uVar5 = uVar11;
    }
    if (-1 < iVar9) break;
    if (uVar5 == 0) {
      *param_1 = *param_2;
    }
    else if (uVar5 == uVar7) {
      param_1[(long)(int)uVar7 + -1] = -0x8000 - param_2[lVar16];
    }
    else {
      iVar9 = 0;
      psVar6 = param_2;
      for (uVar13 = (ulong)(uVar5 & ((int)uVar5 >> 0x1f ^ 0xffffffffU)); uVar13 != 0;
          uVar13 = uVar13 - 1) {
        iVar9 = iVar9 + *psVar6;
        psVar6 = psVar6 + 1;
      }
      lVar14 = (long)(int)uVar5;
      iVar12 = 0x8000;
      for (lVar15 = lVar16; lVar14 < lVar15; lVar15 = lVar15 + -1) {
        iVar12 = iVar12 - param_2[lVar15];
      }
      iVar1 = (int)param_2[(int)uVar5] >> 1;
      iVar9 = iVar9 + iVar1;
      iVar12 = iVar12 - iVar1;
      psVar6 = param_1 + lVar14;
      iVar2 = ((int)*psVar6 + (int)psVar6[-1] & 1U) + ((int)*psVar6 + (int)psVar6[-1] >> 1);
      iVar3 = iVar9;
      if (iVar9 <= iVar12) {
        iVar3 = iVar12;
      }
      if (iVar12 <= iVar9) {
        iVar9 = iVar12;
      }
      iVar12 = iVar2;
      if (iVar2 <= iVar9) {
        iVar12 = iVar9;
      }
      if (iVar2 <= iVar3) {
        iVar3 = iVar12;
      }
      sVar4 = (short)iVar3 - (short)iVar1;
      psVar6[-1] = sVar4;
      *psVar6 = sVar4 + param_2[lVar14];
    }
    iVar10 = iVar10 + 1;
  }
  return;
}



/* Entry: 108b5a2b0; end: 108b5a3a7;  */

/* WARNING: Possible PIC construction at 0x000108b5a72c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000108b5a740: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000108b5a754: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000108b5a744) */
/* WARNING: Removing unreachable block (ram,0x000108b5a730) */
/* WARNING: Removing unreachable block (ram,0x000108b5a758) */

undefined2 * FUN_108b5a2b0(undefined2 *param_1,short *param_2,undefined2 *param_3,int param_4)

{
  undefined2 *puVar1;
  int iVar2;
  int iVar3;
  short sVar4;
  int iVar5;
  uint uVar6;
  short *psVar7;
  undefined2 *puVar8;
  long lVar9;
  undefined2 *puVar10;
  int iVar11;
  uint extraout_w8;
  uint extraout_w8_00;
  uint extraout_w8_01;
  char *pcVar12;
  ulong uVar13;
  undefined *puVar14;
  uint uVar15;
  short *psVar16;
  ulong uVar17;
  uint uVar18;
  uint uVar19;
  
  if ((0 < (int)param_3) && (((ulong)param_3 & 1) == 0)) {
    sVar4 = *param_2;
    uVar18 = (int)sVar4;
    if (sVar4 < 2) {
      uVar18 = 1;
    }
    uVar19 = 0;
    if (uVar18 != 0) {
      uVar19 = 0x20000 / uVar18;
    }
    uVar18 = (int)param_2[1] - (int)sVar4;
    if ((int)uVar18 < 2) {
      uVar18 = 1;
    }
    uVar15 = 0;
    if (uVar18 != 0) {
      uVar15 = 0x20000 / uVar18;
    }
    uVar19 = uVar15 + uVar19;
    if (0x7ffe < uVar19) {
      uVar19 = 0x7fff;
    }
    *param_1 = (short)uVar19;
    uVar13 = (ulong)((int)param_3 - 1);
    uVar17 = 1;
    puVar8 = param_1;
    psVar7 = param_2;
    while( true ) {
      psVar16 = psVar7 + 2;
      if (uVar13 <= uVar17) break;
      uVar18 = (int)*psVar16 - (int)psVar7[1];
      if ((int)uVar18 < 2) {
        uVar18 = 1;
      }
      uVar19 = 0;
      if (uVar18 != 0) {
        uVar19 = 0x20000 / uVar18;
      }
      uVar15 = uVar19 + uVar15;
      if (0x7ffe < uVar15) {
        uVar15 = 0x7fff;
      }
      puVar8[1] = (short)uVar15;
      uVar17 = uVar17 + 2;
      uVar18 = (int)psVar7[3] - (int)*psVar16;
      if ((int)uVar18 < 2) {
        uVar18 = 1;
      }
      uVar15 = 0;
      if (uVar18 != 0) {
        uVar15 = 0x20000 / uVar18;
      }
      uVar19 = uVar15 + uVar19;
      if (0x7ffe < uVar19) {
        uVar19 = 0x7fff;
      }
      puVar8[2] = (short)uVar19;
      puVar8 = puVar8 + 2;
      psVar7 = psVar16;
    }
    uVar18 = 0;
    if (0x8000U - (int)param_2[uVar13] != 0) {
      uVar18 = 0x20000 / (0x8000U - (int)param_2[uVar13]);
    }
    uVar18 = uVar18 + uVar15;
    if (0x7ffe < uVar18) {
      uVar18 = 0x7fff;
    }
    param_1[uVar13] = (short)uVar18;
    return param_1;
  }
  _abort();
  lVar9 = 400;
  puVar8 = param_1;
  puVar10 = param_3;
  iVar11 = param_4;
  _bzero();
  uVar18 = (uint)param_2;
  uVar19 = (uint)param_3;
  if (param_4 == 0) {
    if (((uVar18 != 8000 && uVar18 != 16000) && uVar18 != 12000) ||
       ((((uVar19 != 8000 && uVar19 != 12000) && uVar19 != 16000) && uVar19 != 24000) &&
        uVar19 != 48000)) goto LAB_108b5a6ac;
    uVar15 = (uVar19 >> 0xc) - (uint)(16000 < uVar19) >> (24000 < uVar19);
    if (5 < uVar15) {
      uVar15 = 6;
    }
    pcVar12 = &UNK_10df9270e + (ulong)uVar15 + (ulong)((uVar18 >> 0xc) - 1) * 6;
  }
  else {
    if (((((uVar18 != 8000 && uVar18 != 12000) && uVar18 != 16000) && uVar18 != 48000) &&
         uVar18 != 24000) || ((uVar19 != 8000 && uVar19 != 12000) && uVar19 != 16000))
    goto LAB_108b5a6ac;
    uVar15 = (uVar18 >> 0xc) - (uint)(16000 < uVar18) >> (24000 < uVar18);
    if (5 < uVar15) {
      uVar15 = 6;
    }
    pcVar12 = &UNK_10df926fa + (ulong)uVar15 * 3 + (ulong)((uVar19 >> 0xc) - 1);
  }
  *(int *)(param_1 + 0xc2) = (int)*pcVar12;
  uVar15 = (uVar18 & 0xffff) / 1000;
  *(ulong *)(param_1 + 0xbe) = CONCAT44((uVar19 & 0xffff) / 1000,uVar15);
  *(uint *)(param_1 + 0xb6) = uVar15 * 10;
  if (uVar18 < uVar19) {
    if (uVar19 == uVar18 * 2) {
      uVar15 = 0;
      *(undefined4 *)(param_1 + 0xb4) = 1;
    }
    else {
      *(undefined4 *)(param_1 + 0xb4) = 2;
      uVar15 = 1;
    }
  }
  else if (uVar19 < uVar18) {
    *(undefined4 *)(param_1 + 0xb4) = 3;
    if (uVar19 * 4 == uVar18 * 3) {
      uVar15 = 0;
      *(undefined8 *)(param_1 + 0xba) = 0x300000012;
      puVar14 = &UNK_10df92722;
    }
    else if (uVar19 * 3 == uVar18 * 2) {
      uVar15 = 0;
      *(undefined8 *)(param_1 + 0xba) = 0x200000012;
      puVar14 = &UNK_10df9275c;
    }
    else if (uVar18 == uVar19 * 2) {
      uVar15 = 0;
      *(undefined8 *)(param_1 + 0xba) = 0x100000018;
      puVar14 = &UNK_10df92784;
    }
    else if (uVar19 * 3 == uVar18) {
      func_0x000108b5a7dc();
      puVar14 = &UNK_10df927a0;
      uVar15 = extraout_w8;
    }
    else if (uVar19 * 4 == uVar18) {
      func_0x000108b5a7dc();
      puVar14 = &UNK_10df927c8;
      uVar15 = extraout_w8_00;
    }
    else {
      if (uVar19 * 6 != uVar18) {
LAB_108b5a6ac:
        _abort();
        iVar2 = *(int *)(puVar8 + 0xbe);
        if (iVar2 <= iVar11) {
          iVar5 = *(int *)(puVar8 + 0xc2);
          param_3 = puVar8;
          if (iVar5 <= iVar2) {
            puVar1 = puVar8 + 0x54;
            _memcpy(puVar1 + iVar5,puVar10,(ulong)(uint)(iVar2 - iVar5) << 1);
            iVar3 = *(int *)(puVar8 + 0xb4);
            if (iVar3 == 3) {
              func_0x000108b5a7f4();
              FUN_108b5aa9c();
              return puVar8;
            }
            if (iVar3 != 2) {
              if (iVar3 == 1) {
                func_0x000108b5a7f4();
                FUN_108b5b234();
                return puVar8;
              }
              _memcpy(lVar9,puVar1,(long)*(int *)(puVar8 + 0xbe) << 1);
              _memcpy(lVar9 + (long)*(int *)(puVar8 + 0xc0) * 2,puVar10 + (uint)(iVar2 - iVar5),
                      -(ulong)((uint)(iVar11 - *(int *)(puVar8 + 0xbe)) >> 0x1f) &
                      0xfffffffe00000000 | (ulong)(uint)(iVar11 - *(int *)(puVar8 + 0xbe)) << 1);
              _memcpy(puVar1,puVar10 + (iVar11 - *(int *)(puVar8 + 0xc2)),
                      (long)*(int *)(puVar8 + 0xc2) << 1);
              return (undefined2 *)0x0;
            }
            func_0x000108b5a7f4();
            FUN_108b5b098();
            return puVar8;
          }
        }
        _abort();
        return param_3;
      }
      func_0x000108b5a7dc();
      puVar14 = &UNK_10df927f0;
      uVar15 = extraout_w8_01;
    }
    *(undefined **)(param_1 + 0xc4) = puVar14;
  }
  else {
    uVar15 = 0;
    *(undefined4 *)(param_1 + 0xb4) = 0;
  }
  uVar6 = 0;
  if (uVar19 != 0) {
    uVar6 = (uVar18 << (ulong)(uVar15 & 0x1f | 0xe)) / uVar19;
  }
  uVar17 = (ulong)(uVar6 << 2);
  do {
    uVar13 = uVar17;
    uVar17 = uVar13 + 1;
  } while ((int)(uVar13 * ((ulong)param_3 & 0xffffffff) >> 0x10) <
           (int)(uVar18 << (ulong)(uVar15 & 0x1f)));
  *(int *)(param_1 + 0xb8) = (int)uVar13;
  return (undefined2 *)0x0;
}



/* Entry: 108b5a3a8; end: 108b5a6af;  */

/* WARNING: Possible PIC construction at 0x000108b5a72c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000108b5a740: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000108b5a754: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000108b5a744) */
/* WARNING: Removing unreachable block (ram,0x000108b5a730) */
/* WARNING: Removing unreachable block (ram,0x000108b5a758) */

ulong FUN_108b5a3a8(ulong param_1,uint param_2,ulong param_3,int param_4)

{
  long lVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  int iVar9;
  uint uVar10;
  uint extraout_w8;
  uint extraout_w8_00;
  uint extraout_w8_01;
  char *pcVar11;
  undefined *puVar12;
  uint uVar13;
  
  lVar7 = 400;
  uVar6 = param_1;
  uVar8 = param_3;
  iVar9 = param_4;
  _bzero(param_1,400);
  uVar13 = (uint)param_3;
  if (param_4 == 0) {
    if (((param_2 != 8000 && param_2 != 16000) && param_2 != 12000) ||
       ((((uVar13 != 8000 && uVar13 != 12000) && uVar13 != 16000) && uVar13 != 24000) &&
        uVar13 != 48000)) goto LAB_108b5a6ac;
    uVar10 = (uVar13 >> 0xc) - (uint)(16000 < uVar13) >> (24000 < uVar13);
    if (5 < uVar10) {
      uVar10 = 6;
    }
    pcVar11 = &UNK_10df9270e + (ulong)uVar10 + (ulong)((param_2 >> 0xc) - 1) * 6;
  }
  else {
    if (((((param_2 != 8000 && param_2 != 12000) && param_2 != 16000) && param_2 != 48000) &&
         param_2 != 24000) || ((uVar13 != 8000 && uVar13 != 12000) && uVar13 != 16000))
    goto LAB_108b5a6ac;
    uVar10 = (param_2 >> 0xc) - (uint)(16000 < param_2) >> (24000 < param_2);
    if (5 < uVar10) {
      uVar10 = 6;
    }
    pcVar11 = &UNK_10df926fa + (ulong)uVar10 * 3 + (ulong)((uVar13 >> 0xc) - 1);
  }
  *(int *)(param_1 + 0x184) = (int)*pcVar11;
  uVar10 = (param_2 & 0xffff) / 1000;
  *(ulong *)(param_1 + 0x17c) = CONCAT44((uVar13 & 0xffff) / 1000,uVar10);
  *(uint *)(param_1 + 0x16c) = uVar10 * 10;
  if (param_2 < uVar13) {
    if (uVar13 == param_2 * 2) {
      uVar10 = 0;
      *(undefined4 *)(param_1 + 0x168) = 1;
    }
    else {
      *(undefined4 *)(param_1 + 0x168) = 2;
      uVar10 = 1;
    }
  }
  else if (uVar13 < param_2) {
    *(undefined4 *)(param_1 + 0x168) = 3;
    if (uVar13 * 4 == param_2 * 3) {
      uVar10 = 0;
      *(undefined8 *)(param_1 + 0x174) = 0x300000012;
      puVar12 = &UNK_10df92722;
    }
    else if (uVar13 * 3 == param_2 * 2) {
      uVar10 = 0;
      *(undefined8 *)(param_1 + 0x174) = 0x200000012;
      puVar12 = &UNK_10df9275c;
    }
    else if (param_2 == uVar13 * 2) {
      uVar10 = 0;
      *(undefined8 *)(param_1 + 0x174) = 0x100000018;
      puVar12 = &UNK_10df92784;
    }
    else if (uVar13 * 3 == param_2) {
      func_0x000108b5a7dc();
      puVar12 = &UNK_10df927a0;
      uVar10 = extraout_w8;
    }
    else if (uVar13 * 4 == param_2) {
      func_0x000108b5a7dc();
      puVar12 = &UNK_10df927c8;
      uVar10 = extraout_w8_00;
    }
    else {
      if (uVar13 * 6 != param_2) {
LAB_108b5a6ac:
        _abort();
        iVar2 = *(int *)(uVar6 + 0x17c);
        if (iVar2 <= iVar9) {
          iVar4 = *(int *)(uVar6 + 0x184);
          param_3 = uVar6;
          if (iVar4 <= iVar2) {
            lVar1 = uVar6 + 0xa8;
            _memcpy(lVar1 + (long)iVar4 * 2,uVar8,(ulong)(uint)(iVar2 - iVar4) << 1);
            iVar3 = *(int *)(uVar6 + 0x168);
            if (iVar3 == 3) {
              func_0x000108b5a7f4();
              FUN_108b5aa9c();
              return uVar6;
            }
            if (iVar3 != 2) {
              if (iVar3 == 1) {
                func_0x000108b5a7f4();
                FUN_108b5b234();
                return uVar6;
              }
              _memcpy(lVar7,lVar1,(long)*(int *)(uVar6 + 0x17c) << 1);
              uVar13 = iVar9 - *(int *)(uVar6 + 0x17c);
              _memcpy(lVar7 + (long)*(int *)(uVar6 + 0x180) * 2,
                      uVar8 + (ulong)(uint)(iVar2 - iVar4) * 2,
                      -(ulong)(uVar13 >> 0x1f) & 0xfffffffe00000000 | (ulong)uVar13 << 1);
              _memcpy(lVar1,uVar8 + (long)(iVar9 - *(int *)(uVar6 + 0x184)) * 2,
                      (long)*(int *)(uVar6 + 0x184) << 1);
              return 0;
            }
            func_0x000108b5a7f4();
            FUN_108b5b098();
            return uVar6;
          }
        }
        _abort();
        return param_3;
      }
      func_0x000108b5a7dc();
      puVar12 = &UNK_10df927f0;
      uVar10 = extraout_w8_01;
    }
    *(undefined **)(param_1 + 0x188) = puVar12;
  }
  else {
    uVar10 = 0;
    *(undefined4 *)(param_1 + 0x168) = 0;
  }
  uVar5 = 0;
  if (uVar13 != 0) {
    uVar5 = (param_2 << (ulong)(uVar10 & 0x1f | 0xe)) / uVar13;
  }
  uVar6 = (ulong)(uVar5 << 2);
  do {
    uVar8 = uVar6;
    uVar6 = uVar8 + 1;
  } while ((int)(uVar8 * (param_3 & 0xffffffff) >> 0x10) < (int)(param_2 << (ulong)(uVar10 & 0x1f)))
  ;
  *(int *)(param_1 + 0x170) = (int)uVar8;
  return 0;
}



/* Entry: 108b5a6b0; end: 108b5a7bf;  */

/* WARNING: Possible PIC construction at 0x000108b5a72c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000108b5a740: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000108b5a754: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000108b5a744) */
/* WARNING: Removing unreachable block (ram,0x000108b5a730) */
/* WARNING: Removing unreachable block (ram,0x000108b5a758) */

long FUN_108b5a6b0(long param_1,long param_2,long param_3,int param_4)

{
  long lVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  long unaff_x21;
  
  iVar2 = *(int *)(param_1 + 0x17c);
  if (iVar2 <= param_4) {
    iVar4 = *(int *)(param_1 + 0x184);
    unaff_x21 = param_1;
    if (iVar4 <= iVar2) {
      lVar1 = param_1 + 0xa8;
      _memcpy(lVar1 + (long)iVar4 * 2,param_3,(ulong)(uint)(iVar2 - iVar4) << 1);
      iVar3 = *(int *)(param_1 + 0x168);
      if (iVar3 == 3) {
        func_0x000108b5a7f4();
        FUN_108b5aa9c();
        return param_1;
      }
      if (iVar3 != 2) {
        if (iVar3 == 1) {
          func_0x000108b5a7f4();
          FUN_108b5b234();
          return param_1;
        }
        _memcpy(param_2,lVar1,(long)*(int *)(param_1 + 0x17c) << 1);
        uVar5 = param_4 - *(int *)(param_1 + 0x17c);
        _memcpy(param_2 + (long)*(int *)(param_1 + 0x180) * 2,
                param_3 + (ulong)(uint)(iVar2 - iVar4) * 2,
                -(ulong)(uVar5 >> 0x1f) & 0xfffffffe00000000 | (ulong)uVar5 << 1);
        _memcpy(lVar1,param_3 + (long)(param_4 - *(int *)(param_1 + 0x184)) * 2,
                (long)*(int *)(param_1 + 0x184) << 1);
        return 0;
      }
      func_0x000108b5a7f4();
      FUN_108b5b098();
      return param_1;
    }
  }
  _abort();
  return unaff_x21;
}



/* Entry: 108b5a7c0; end: 108b5a803;  */

void FUN_108b5a7c0(void)

{
  return;
}



/* Entry: 108b5a804; end: 108b5a99f;  */

/* WARNING: Possible PIC construction at 0x000108b5a8e0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000108b5a8e4) */
/* WARNING: Removing unreachable block (ram,0x000108b5a8e8) */
/* WARNING: Removing unreachable block (ram,0x000108b5a91c) */

void FUN_108b5a804(undefined8 *param_1,undefined8 param_2,long param_3,int param_4)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 auStack_800 [2];
  undefined1 auStack_7f0 [1920];
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  auStack_800[1] = param_1[1];
  auStack_800[0] = *param_1;
  while( true ) {
    iVar1 = param_4;
    if (0x1df < param_4) {
      iVar1 = 0x1e0;
    }
    func_0x000108b5aa50(param_1 + 2,auStack_7f0,param_3,&UNK_10df92818,iVar1);
    if (2 < iVar1) break;
    param_4 = param_4 - iVar1;
    lVar2 = (long)iVar1 * 4;
    if (param_4 < 1) {
      uVar3 = *(undefined8 *)((long)auStack_800 + lVar2);
      param_1[1] = *(undefined8 *)(auStack_7f0 + lVar2 + -8);
      *param_1 = uVar3;
      if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_70) {
        ___stack_chk_fail();
        return;
      }
      return;
    }
    param_3 = param_3 + (long)iVar1 * 2;
    auStack_800[1] = *(undefined8 *)(auStack_7f0 + lVar2 + -8);
    auStack_800[0] = *(undefined8 *)((long)auStack_800 + lVar2);
  }
  return;
}



/* Entry: 108b5a9a0; end: 108b5aa9b;  */

void FUN_108b5a9a0(void)

{
  return;
}



/* Entry: 108b5aa9c; end: 108b5afe7;  */

/* WARNING: Possible PIC construction at 0x000108b5aba8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000108b5acfc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000108b5abac) */
/* WARNING: Removing unreachable block (ram,0x000108b5acc4) */
/* WARNING: Removing unreachable block (ram,0x000108b5ad00) */
/* WARNING: Removing unreachable block (ram,0x000108b5ad98) */

void FUN_108b5aa9c(long param_1,undefined2 *param_2,long param_3,int param_4)

{
  int *piVar1;
  short *psVar2;
  uint uVar3;
  short *psVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  long lVar9;
  long lVar10;
  long extraout_x8;
  uint uVar11;
  uint uVar12;
  ulong uVar13;
  long lVar14;
  int iVar15;
  long lVar16;
  undefined8 uStack_80;
  undefined8 uStack_78;
  int aiStack_70 [2];
  undefined8 uStack_68;
  
  uStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  iVar15 = *(int *)(param_1 + 0x16c);
  uVar13 = (ulong)*(int *)(param_1 + 0x174);
  uVar3 = *(int *)(param_1 + 0x174) + iVar15;
  lVar10 = param_1;
  aiStack_70[1] = param_4;
  (*(code *)PTR____chkstk_darwin_11034bd40)
            ((-(ulong)(uVar3 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar3 << 2) + 0xf &
             0xfffffffffffffff0);
  lVar14 = (long)&uStack_80 - extraout_x8;
  _memcpy(lVar14,lVar10 + 0x18,uVar13 << 2);
  lVar16 = *(long *)(param_1 + 0x188);
  lVar10 = lVar16 + 4;
  iVar7 = *(int *)(param_1 + 0x170);
  uStack_80 = param_1;
  while( true ) {
    lVar9 = uStack_80;
    iVar6 = aiStack_70[1];
    if (iVar15 <= aiStack_70[1]) {
      iVar6 = iVar15;
    }
    uStack_78 = param_3;
    func_0x000108b5aa50(uStack_80,lVar14 + (long)(int)uVar13 * 4,param_3,lVar16,iVar6);
    iVar15 = iVar6 * 0x10000;
    uVar3 = *(uint *)(lVar9 + 0x174);
    uVar13 = (ulong)uVar3;
    if (uVar3 == 0x12) {
      iVar8 = *(int *)(uStack_80 + 0x178);
      for (uVar11 = 0; (int)uVar11 < iVar15; uVar11 = uVar11 + iVar7) {
        piVar1 = (int *)(lVar14 + (long)((int)uVar11 >> 0x10) * 4);
        uVar12 = (uint)((ulong)((long)(int)(short)iVar8 * (long)(int)(uVar11 & 0xffff)) >> 0x10);
        psVar4 = (short *)(lVar10 + ((long)((ulong)(uVar12 * 9) << 0x20) >> 0x1f));
        psVar2 = (short *)(lVar10 + (long)(int)((iVar8 + ~uVar12) * 9) * 2);
        iVar5 = ((int)((ulong)((long)(int)psVar4[1] * (long)piVar1[1]) >> 0x10) +
                 (int)((ulong)((long)(int)*psVar4 * (long)*piVar1) >> 0x10) +
                 (int)((ulong)((long)(int)psVar4[2] * (long)piVar1[2]) >> 0x10) +
                 (int)((ulong)((long)(int)psVar4[3] * (long)piVar1[3]) >> 0x10) +
                 (int)((ulong)((long)(int)psVar4[4] * (long)piVar1[4]) >> 0x10) +
                 (int)((ulong)((long)(int)psVar4[5] * (long)piVar1[5]) >> 0x10) +
                 (int)((ulong)((long)(int)psVar4[6] * (long)piVar1[6]) >> 0x10) +
                 (int)((ulong)((long)(int)psVar4[7] * (long)piVar1[7]) >> 0x10) +
                 (int)((ulong)((long)(int)psVar4[8] * (long)piVar1[8]) >> 0x10) +
                 (int)((ulong)((long)(int)*psVar2 * (long)piVar1[0x11]) >> 0x10) +
                 (int)((ulong)((long)(int)psVar2[1] * (long)piVar1[0x10]) >> 0x10) +
                 (int)((ulong)((long)(int)psVar2[2] * (long)piVar1[0xf]) >> 0x10) +
                 (int)((ulong)((long)(int)psVar2[3] * (long)piVar1[0xe]) >> 0x10) +
                 (int)((ulong)((long)(int)psVar2[4] * (long)piVar1[0xd]) >> 0x10) +
                 (int)((ulong)((long)(int)psVar2[5] * (long)piVar1[0xc]) >> 0x10) +
                 (int)((ulong)((long)(int)psVar2[6] * (long)piVar1[0xb]) >> 0x10) +
                 (int)((ulong)((long)(int)psVar2[7] * (long)piVar1[10]) >> 0x10) +
                 (int)((ulong)((long)(int)psVar2[8] * (long)piVar1[9]) >> 0x10) >> 5) + 1 >> 1;
        if (iVar5 < -0x7fff) {
          iVar5 = -0x8000;
        }
        if (0x7ffe < iVar5) {
          iVar5 = 0x7fff;
        }
        *param_2 = (short)iVar5;
        param_2 = param_2 + 1;
      }
    }
    else if (uVar3 == 0x18) {
      if (0 < iVar15) {
        func_0x000108b5b018();
        return;
      }
    }
    else {
      if (uVar3 != 0x24) {
        _abort();
        goto LAB_108b5afe4;
      }
      if (0 < iVar15) {
        func_0x000108b5b018();
        return;
      }
    }
    aiStack_70[1] = aiStack_70[1] - iVar6;
    lVar16 = lVar14 + (long)iVar6 * 4;
    if (aiStack_70[1] < 2) break;
    param_3 = uStack_78 + (long)iVar6 * 2;
    _memcpy(lVar14,lVar16,(long)(int)uVar3 << 2);
    iVar15 = *(int *)(uStack_80 + 0x16c);
    lVar16 = *(long *)(uStack_80 + 0x188);
  }
  _memcpy(uStack_80 + 0x18,lVar16,(long)(int)uVar3 << 2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == uStack_68) {
    return;
  }
LAB_108b5afe4:
  ___stack_chk_fail();
  return;
}



/* Entry: 108b5afe8; end: 108b5b097;  */

void FUN_108b5afe8(void)

{
  return;
}



/* Entry: 108b5b098; end: 108b5b233;  */

void FUN_108b5b098(int *param_1,undefined2 *param_2,short *param_3,uint param_4)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  undefined1 (*pauVar5) [16];
  undefined8 *puVar6;
  undefined2 *puVar7;
  int *piVar8;
  int iVar9;
  undefined1 *puVar10;
  short *psVar11;
  uint uVar12;
  long lVar13;
  int iVar14;
  int iVar15;
  uint uVar16;
  ulong extraout_x8;
  ulong uVar17;
  long extraout_x12;
  undefined8 *puVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined1 auVar22 [16];
  undefined8 uVar23;
  int *piStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  (*(code *)PTR____chkstk_darwin_11034bd40)(param_1[0x5b]);
  lVar13 = -extraout_x12;
  puVar18 = (undefined8 *)((long)&piStack_70 + lVar13);
  uVar19 = *(undefined8 *)(param_1 + 6);
  *(undefined8 *)((long)&lStack_68 + lVar13) = *(undefined8 *)(param_1 + 8);
  *puVar18 = uVar19;
  iVar4 = param_1[0x5c];
  uVar17 = extraout_x8;
  piStack_70 = param_1;
  while( true ) {
    uVar3 = param_4;
    if ((int)(uint)uVar17 <= (int)param_4) {
      uVar3 = (uint)uVar17;
    }
    puVar10 = &stack0xffffffffffffffa0 + lVar13;
    piVar8 = piStack_70;
    psVar11 = param_3;
    uVar12 = uVar3;
    FUN_108b5b234();
    for (uVar16 = 0; (int)uVar16 < (int)(uVar3 * 0x20000); uVar16 = uVar16 + iVar4) {
      uVar1 = (uVar16 & 0xffff) * 2 + (uVar16 & 0xffff);
      uVar20 = *(undefined8 *)(&UNK_10df92824 + (ulong)(uVar1 >> 0xe) * 8);
      pauVar5 = (undefined1 (*) [16])
                ((long)puVar18 +
                (-(ulong)((uint)((int)uVar16 >> 0x10) >> 0x1f) & 0xfffffffe00000000 |
                (ulong)(uint)((int)uVar16 >> 0x10) << 1));
      uVar19 = *(undefined8 *)*pauVar5;
      auVar22 = NEON_ext(*pauVar5,*pauVar5,8,1);
      uVar21 = NEON_rev64(auVar22._0_8_,2);
      uVar23 = *(undefined8 *)(&UNK_10df92824 + (ulong)(0xb - (uVar1 >> 0xe)) * 8);
      iVar2 = ((int)(short)uVar19 * (int)(short)uVar20 + (int)(short)uVar21 * (int)(short)uVar23 +
               (int)(short)((ulong)uVar19 >> 0x10) * (int)(short)((ulong)uVar20 >> 0x10) +
               (int)(short)((ulong)uVar21 >> 0x10) * (int)(short)((ulong)uVar23 >> 0x10) +
               (int)(short)((ulong)uVar19 >> 0x20) * (int)(short)((ulong)uVar20 >> 0x20) +
               (int)(short)((ulong)uVar21 >> 0x20) * (int)(short)((ulong)uVar23 >> 0x20) +
               (int)(short)((ulong)uVar19 >> 0x30) * (int)(short)((ulong)uVar20 >> 0x30) +
               (int)(short)((ulong)uVar21 >> 0x30) * (int)(short)((ulong)uVar23 >> 0x30) >> 0xe) + 1
              >> 1;
      if (iVar2 < -0x7fff) {
        iVar2 = -0x8000;
      }
      if (0x7ffe < iVar2) {
        iVar2 = 0x7fff;
      }
      *param_2 = (short)iVar2;
      param_2 = param_2 + 1;
    }
    param_4 = param_4 - uVar3;
    if ((int)param_4 < 1) break;
    param_3 = param_3 + (int)uVar3;
    puVar6 = (undefined8 *)
             ((long)puVar18 +
             (-(ulong)((uVar3 & 0x7fffffff) >> 0x1e) & 0xfffffffe00000000 | (ulong)(uVar3 << 1) << 1
             ));
    uVar19 = *puVar6;
    *(undefined8 *)((long)&lStack_68 + lVar13) = puVar6[1];
    *puVar18 = uVar19;
    uVar17 = (ulong)(uint)piStack_70[0x5b];
  }
  puVar18 = (undefined8 *)
            ((long)puVar18 +
            (-(ulong)((uVar3 & 0x7fffffff) >> 0x1e) & 0xfffffffe00000000 | (ulong)(uVar3 << 1) << 1)
            );
  uVar19 = *puVar18;
  *(undefined8 *)(piStack_70 + 8) = puVar18[1];
  *(undefined8 *)(piStack_70 + 6) = uVar19;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_68) {
    ___stack_chk_fail();
    puVar7 = (undefined2 *)(puVar10 + 2);
    for (uVar17 = (ulong)(uVar12 & ((int)uVar12 >> 0x1f ^ 0xffffffffU)); uVar17 != 0;
        uVar17 = uVar17 - 1) {
      iVar14 = (int)((ulong)(((long)*psVar11 * 0x400 - (long)*piVar8) * 0x6d2) >> 0x10);
      iVar4 = *piVar8 + iVar14;
      iVar9 = (int)((long)*psVar11 * 0x400);
      iVar15 = (int)((ulong)((long)(iVar4 - piVar8[1]) * 0x3a8a) >> 0x10);
      iVar2 = piVar8[1] + iVar15;
      *piVar8 = iVar9 + iVar14;
      piVar8[1] = iVar4 + iVar15;
      iVar4 = piVar8[3];
      lVar13 = (long)iVar2 - (long)piVar8[2];
      iVar2 = iVar2 + (int)((ulong)(lVar13 * 0xffffffff98ab) >> 0x10);
      iVar14 = (iVar2 >> 9) + 1 >> 1;
      if (iVar14 < -0x7fff) {
        iVar14 = -0x8000;
      }
      if (0x7ffe < iVar14) {
        iVar14 = 0x7fff;
      }
      puVar7[-1] = (short)iVar14;
      iVar14 = (int)((ulong)((long)(iVar9 - iVar4) * 0x1ac6) >> 0x10);
      iVar4 = iVar4 + iVar14;
      piVar8[2] = iVar2 + (int)lVar13;
      piVar8[3] = iVar9 + iVar14;
      iVar14 = (int)((ulong)((long)(iVar4 - piVar8[4]) * 0x64a9) >> 0x10);
      iVar2 = piVar8[4] + iVar14;
      lVar13 = (long)iVar2 - (long)piVar8[5];
      iVar2 = iVar2 + (int)((ulong)(lVar13 * 0xffffffffd8f6) >> 0x10);
      piVar8[4] = iVar4 + iVar14;
      piVar8[5] = iVar2 + (int)lVar13;
      iVar4 = (iVar2 >> 9) + 1 >> 1;
      if (iVar4 < -0x7fff) {
        iVar4 = -0x8000;
      }
      if (0x7ffe < iVar4) {
        iVar4 = 0x7fff;
      }
      *puVar7 = (short)iVar4;
      puVar7 = puVar7 + 2;
      psVar11 = psVar11 + 1;
    }
    return;
  }
  return;
}



/* Entry: 108b5b234; end: 108b5b3df;  */

void FUN_108b5b234(int *param_1,long param_2,short *param_3,uint param_4)

{
  int iVar1;
  int iVar2;
  undefined2 *puVar3;
  int iVar4;
  long lVar5;
  int iVar6;
  int iVar7;
  ulong uVar8;
  
  puVar3 = (undefined2 *)(param_2 + 2);
  for (uVar8 = (ulong)(param_4 & ((int)param_4 >> 0x1f ^ 0xffffffffU)); uVar8 != 0;
      uVar8 = uVar8 - 1) {
    iVar6 = (int)((ulong)(((long)*param_3 * 0x400 - (long)*param_1) * 0x6d2) >> 0x10);
    iVar1 = *param_1 + iVar6;
    iVar4 = (int)((long)*param_3 * 0x400);
    iVar7 = (int)((ulong)((long)(iVar1 - param_1[1]) * 0x3a8a) >> 0x10);
    iVar2 = param_1[1] + iVar7;
    *param_1 = iVar4 + iVar6;
    param_1[1] = iVar1 + iVar7;
    iVar1 = param_1[3];
    lVar5 = (long)iVar2 - (long)param_1[2];
    iVar2 = iVar2 + (int)((ulong)(lVar5 * 0xffffffff98ab) >> 0x10);
    iVar6 = (iVar2 >> 9) + 1 >> 1;
    if (iVar6 < -0x7fff) {
      iVar6 = -0x8000;
    }
    if (0x7ffe < iVar6) {
      iVar6 = 0x7fff;
    }
    puVar3[-1] = (short)iVar6;
    iVar6 = (int)((ulong)((long)(iVar4 - iVar1) * 0x1ac6) >> 0x10);
    iVar1 = iVar1 + iVar6;
    param_1[2] = iVar2 + (int)lVar5;
    param_1[3] = iVar4 + iVar6;
    iVar6 = (int)((ulong)((long)(iVar1 - param_1[4]) * 0x64a9) >> 0x10);
    iVar2 = param_1[4] + iVar6;
    lVar5 = (long)iVar2 - (long)param_1[5];
    iVar2 = iVar2 + (int)((ulong)(lVar5 * 0xffffffffd8f6) >> 0x10);
    param_1[4] = iVar1 + iVar6;
    param_1[5] = iVar2 + (int)lVar5;
    iVar1 = (iVar2 >> 9) + 1 >> 1;
    if (iVar1 < -0x7fff) {
      iVar1 = -0x8000;
    }
    if (0x7ffe < iVar1) {
      iVar1 = 0x7fff;
    }
    *puVar3 = (short)iVar1;
    puVar3 = puVar3 + 2;
    param_3 = param_3 + 1;
  }
  return;
}



/* Entry: 108b5b3e0; end: 108b5b58f;  */

void FUN_108b5b3e0(int *param_1,undefined4 *param_2,undefined8 param_3,ulong param_4)

{
  short *psVar1;
  short sVar2;
  short sVar3;
  uint uVar4;
  undefined4 uVar5;
  uint uVar6;
  undefined4 uVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  ulong uVar11;
  undefined4 *puVar12;
  int *piVar13;
  int iVar14;
  long lVar15;
  int iVar16;
  int *piVar17;
  undefined4 *puVar18;
  ulong uVar19;
  
  uVar7 = (undefined4)((ulong)param_3 >> 0x20);
  uVar6 = (uint)param_3;
  uVar5 = (undefined4)((ulong)param_2 >> 0x20);
  uVar4 = (uint)param_2;
  uVar8 = (uint)param_4;
  if ((((int)uVar8 < 1) || ((int)uVar6 < 1)) || (uVar6 < uVar8)) {
    _abort();
    if ((int)uVar4 < 1) {
      _abort();
      iVar9 = (int)param_4;
      uVar8 = 0x1f - (int)LZCOUNT(iVar9);
      for (lVar15 = 0; iVar14 = (int)param_4, lVar15 < iVar9 + -1; lVar15 = lVar15 + 2) {
        psVar1 = (short *)(CONCAT44(uVar7,uVar6) + lVar15 * 2);
        iVar16 = (int)*psVar1;
        iVar10 = (int)psVar1[1];
        param_4 = (ulong)(((uint)(iVar16 * iVar16 + iVar10 * iVar10) >> (ulong)(uVar8 & 0x1f)) +
                         iVar14);
      }
      if ((int)lVar15 < iVar9) {
        iVar10 = (int)*(short *)(CONCAT44(uVar7,uVar6) + lVar15 * 2);
        iVar14 = ((uint)(iVar10 * iVar10) >> (ulong)(uVar8 & 0x1f)) + iVar14;
      }
      iVar10 = 0;
      uVar8 = 0x22 - ((int)LZCOUNT(iVar9) + (int)LZCOUNT(iVar14));
      uVar8 = uVar8 & ((int)uVar8 >> 0x1f ^ 0xffffffffU);
      for (lVar15 = 0; lVar15 < iVar9 + -1; lVar15 = lVar15 + 2) {
        psVar1 = (short *)(CONCAT44(uVar7,uVar6) + lVar15 * 2);
        iVar16 = (int)*psVar1;
        iVar14 = (int)psVar1[1];
        iVar10 = ((uint)(iVar16 * iVar16 + iVar14 * iVar14) >> (ulong)(uVar8 & 0x1f)) + iVar10;
      }
      if ((int)lVar15 < iVar9) {
        iVar9 = (int)*(short *)(CONCAT44(uVar7,uVar6) + lVar15 * 2);
        iVar10 = ((uint)(iVar9 * iVar9) >> (ulong)(uVar8 & 0x1f)) + iVar10;
      }
      *(uint *)CONCAT44(uVar5,uVar4) = uVar8;
      *param_1 = iVar10;
      return;
    }
    uVar11 = 1;
    piVar13 = param_1;
    do {
      if (uVar11 == uVar4) {
        return;
      }
      sVar2 = *(short *)((long)param_1 + uVar11 * 2);
      for (lVar15 = 0; 0 < (long)(uVar11 + lVar15); lVar15 = lVar15 + -1) {
        sVar3 = *(short *)((long)piVar13 + lVar15 * 2);
        if (sVar3 <= sVar2) {
          uVar19 = uVar11 + lVar15;
          goto LAB_108b5b570;
        }
        *(short *)((long)piVar13 + lVar15 * 2 + 2) = sVar3;
      }
      uVar19 = 0;
LAB_108b5b570:
      *(short *)((long)param_1 +
                (-(uVar19 >> 0x1f & 1) & 0xfffffffe00000000 | (uVar19 & 0xffffffff) << 1)) = sVar2;
      uVar11 = uVar11 + 1;
      piVar13 = (int *)((long)piVar13 + 2);
    } while( true );
  }
  param_4 = param_4 & 0xffffffff;
  for (uVar11 = 0; param_4 != uVar11; uVar11 = uVar11 + 1) {
    param_2[uVar11] = (int)uVar11;
  }
  uVar11 = 1;
  piVar13 = param_1;
  puVar12 = param_2;
  do {
    puVar12 = puVar12 + 1;
    piVar13 = piVar13 + 1;
    if (uVar11 == param_4) {
      uVar11 = param_4;
      do {
        if ((int)uVar6 <= (int)uVar11) {
          return;
        }
        iVar9 = param_1[uVar11];
        uVar4 = uVar8 - 2;
        puVar12 = param_2 + (uVar8 - 1);
        piVar13 = param_1 + (uVar8 - 1);
        if (iVar9 < param_1[param_4 - 1]) {
          for (; -1 < (int)uVar4; uVar4 = uVar4 - 1) {
            if (param_1[uVar4] <= iVar9) goto LAB_108b5b4f0;
            *piVar13 = param_1[uVar4];
            *puVar12 = param_2[uVar4];
            puVar12 = puVar12 + -1;
            piVar13 = piVar13 + -1;
          }
          uVar4 = 0xffffffff;
LAB_108b5b4f0:
          param_1[uVar4 + 1] = iVar9;
          param_2[uVar4 + 1] = (int)uVar11;
        }
        uVar11 = uVar11 + 1;
      } while( true );
    }
    iVar9 = param_1[uVar11];
    piVar17 = piVar13;
    puVar18 = puVar12;
    uVar19 = uVar11;
    while (0 < (long)uVar19) {
      if (piVar17[-1] <= iVar9) goto LAB_108b5b474;
      *piVar17 = piVar17[-1];
      *puVar18 = puVar18[-1];
      piVar17 = piVar17 + -1;
      puVar18 = puVar18 + -1;
      uVar19 = uVar19 - 1;
    }
    uVar19 = 0;
LAB_108b5b474:
    param_1[(int)uVar19] = iVar9;
    param_2[(int)uVar19] = (int)uVar11;
    uVar11 = uVar11 + 1;
  } while( true );
}



/* Entry: 108b5b590; end: 108b5b65b;  */

void FUN_108b5b590(int *param_1,uint *param_2,long param_3,int param_4)

{
  short *psVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  int iVar6;
  
  uVar2 = 0x1f - (int)LZCOUNT(param_4);
  iVar3 = param_4;
  for (lVar5 = 0; lVar5 < param_4 + -1; lVar5 = lVar5 + 2) {
    psVar1 = (short *)(param_3 + lVar5 * 2);
    iVar6 = (int)*psVar1;
    iVar4 = (int)psVar1[1];
    iVar3 = ((uint)(iVar6 * iVar6 + iVar4 * iVar4) >> (ulong)(uVar2 & 0x1f)) + iVar3;
  }
  if ((int)lVar5 < param_4) {
    iVar4 = (int)*(short *)(param_3 + lVar5 * 2);
    iVar3 = ((uint)(iVar4 * iVar4) >> (ulong)(uVar2 & 0x1f)) + iVar3;
  }
  iVar4 = 0;
  uVar2 = 0x22 - ((int)LZCOUNT(param_4) + (int)LZCOUNT(iVar3));
  uVar2 = uVar2 & ((int)uVar2 >> 0x1f ^ 0xffffffffU);
  for (lVar5 = 0; lVar5 < param_4 + -1; lVar5 = lVar5 + 2) {
    psVar1 = (short *)(param_3 + lVar5 * 2);
    iVar6 = (int)*psVar1;
    iVar3 = (int)psVar1[1];
    iVar4 = ((uint)(iVar6 * iVar6 + iVar3 * iVar3) >> (ulong)(uVar2 & 0x1f)) + iVar4;
  }
  if ((int)lVar5 < param_4) {
    iVar3 = (int)*(short *)(param_3 + lVar5 * 2);
    iVar4 = ((uint)(iVar3 * iVar3) >> (ulong)(uVar2 & 0x1f)) + iVar4;
  }
  *param_2 = uVar2;
  *param_1 = iVar4;
  return;
}



/* Entry: 108b5b65c; end: 108b5b7a3;  */

void FUN_108b5b65c(undefined8 param_1,int *param_2)

{
  long lVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined4 *puVar4;
  int *piVar5;
  undefined4 *puVar6;
  long lVar7;
  int iStack_60;
  undefined4 uStack_5c;
  int iStack_58;
  int iStack_4c;
  long lStack_48;
  
  piVar5 = &iStack_60;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar3 = param_1;
  FUN_108b5b7d0();
  iStack_58 = (int)uVar3 / 5;
  iStack_4c = (int)uVar3 % 5;
  lVar7 = 2;
  puVar6 = &uStack_5c;
  do {
    uVar3 = param_1;
    FUN_108b5b7d0(param_1,&UNK_10df91dcc);
    puVar6[-1] = (int)uVar3;
    uVar3 = param_1;
    puVar4 = (undefined4 *)&UNK_10df91dd3;
    FUN_108b5b7d0();
    uVar2 = (undefined4)uVar3;
    *puVar6 = uVar2;
    lVar7 = lVar7 + -1;
    puVar6 = puVar6 + 3;
  } while (lVar7 != 0);
  for (lVar7 = 0; lVar7 != 8; lVar7 = lVar7 + 4) {
    lVar1 = (long)*piVar5 + (long)piVar5[2] * 3;
    *piVar5 = (int)lVar1;
    lVar1 = lVar1 * 2;
    *(int *)((long)param_2 + lVar7) =
         (int)*(short *)(&UNK_10df91d68 + lVar1) +
         (((int)*(short *)(&UNK_10df91d6a + lVar1) - (int)*(short *)(&UNK_10df91d68 + lVar1)) *
          0x199a >> 0x10) * (int)(short)((short)piVar5[1] << 1 | 1);
    piVar5 = piVar5 + 3;
  }
  *param_2 = *param_2 - param_2[1];
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_48) {
    ___stack_chk_fail();
    FUN_108b5b7d0();
    *puVar4 = uVar2;
    return;
  }
  return;
}



/* Entry: 108b5b7a4; end: 108b5b7cf;  */

void FUN_108b5b7a4(undefined4 param_1,undefined4 *param_2)

{
  FUN_108b5b7d0(param_1,&UNK_10df91da1);
  *param_2 = param_1;
  return;
}



/* Entry: 108b5b7d0; end: 108b5b7d7;  */

int FUN_108b5b7d0(long param_1,byte *param_2)

{
  byte bVar1;
  int iVar2;
  
  iVar2 = -1;
  do {
    bVar1 = *param_2;
    iVar2 = iVar2 + 1;
    param_2 = param_2 + 1;
  } while (*(uint *)(param_1 + 0x24) < (*(uint *)(param_1 + 0x20) >> 8) * (uint)bVar1);
  func_0x000108b49fbc();
  return iVar2;
}



/* Entry: 108b5b7d8; end: 108b5b887;  */

void FUN_108b5b7d8(long param_1,long param_2)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  uint uVar4;
  int iVar5;
  char *pcVar6;
  long lVar7;
  
  uVar4 = *(char *)(param_2 + 2) * 5 + (int)*(char *)(param_2 + 5);
  uVar3 = (ulong)uVar4;
  lVar2 = param_1;
  if ((int)uVar4 < 0x19) {
    func_0x000108b5b898(param_1,uVar3,&UNK_10df91d88);
    lVar7 = 2;
    pcVar6 = (char *)(param_2 + 1);
    while ((uVar3 = (ulong)(byte)pcVar6[-1], (byte)pcVar6[-1] < 3 && (*pcVar6 < '\x05'))) {
      func_0x000108b5b898(param_1,uVar3,&UNK_10df91dcc);
      lVar2 = param_1;
      func_0x000108b5b898(param_1,(long)*pcVar6,&UNK_10df91dd3);
      lVar7 = lVar7 + -1;
      pcVar6 = pcVar6 + 3;
      if (lVar7 == 0) {
        return;
      }
    }
  }
  _abort();
  uVar4 = *(uint *)(lVar2 + 0x20);
  uVar1 = uVar4 >> 8;
  if ((int)uVar3 < 1) {
    iVar5 = uVar4 - uVar1 * (byte)(&UNK_10df91da1)[(int)uVar3];
  }
  else {
    uVar3 = uVar3 & 0xffffffff;
    *(uint *)(lVar2 + 0x24) =
         (*(int *)(lVar2 + 0x24) + uVar4) - uVar1 * (byte)(&UNK_10df91da0)[uVar3];
    iVar5 = ((uint)(byte)(&UNK_10df91da0)[uVar3] - (uint)(byte)(&UNK_10df91da1)[uVar3]) * uVar1;
  }
  *(int *)(lVar2 + 0x20) = iVar5;
  uVar4 = *(uint *)(lVar2 + 0x20);
  while (uVar4 < 0x800001) {
    FUN_108b4a4c0(lVar2,*(uint *)(lVar2 + 0x24) >> 0x17);
    uVar4 = *(int *)(lVar2 + 0x20) << 8;
    *(uint *)(lVar2 + 0x20) = uVar4;
    *(uint *)(lVar2 + 0x24) = (*(uint *)(lVar2 + 0x24) & 0x7fffff) << 8;
    *(int *)(lVar2 + 0x18) = *(int *)(lVar2 + 0x18) + 8;
  }
  return;
}



/* Entry: 108b5b888; end: 108b5b89f;  */

void FUN_108b5b888(long param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  
  uVar2 = *(uint *)(param_1 + 0x20);
  uVar1 = uVar2 >> 8;
  if ((int)param_2 < 1) {
    iVar3 = uVar2 - uVar1 * (byte)(&UNK_10df91da1)[(int)param_2];
  }
  else {
    *(uint *)(param_1 + 0x24) =
         (*(int *)(param_1 + 0x24) + uVar2) - uVar1 * (byte)(&UNK_10df91da0)[param_2];
    iVar3 = ((uint)(byte)(&UNK_10df91da0)[param_2] - (uint)(byte)(&UNK_10df91da1)[param_2]) * uVar1;
  }
  *(int *)(param_1 + 0x20) = iVar3;
  uVar2 = *(uint *)(param_1 + 0x20);
  while (uVar2 < 0x800001) {
    FUN_108b4a4c0(param_1,*(uint *)(param_1 + 0x24) >> 0x17);
    uVar2 = *(int *)(param_1 + 0x20) << 8;
    *(uint *)(param_1 + 0x20) = uVar2;
    *(uint *)(param_1 + 0x24) = (*(uint *)(param_1 + 0x24) & 0x7fffff) << 8;
    *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + 8;
  }
  return;
}



/* Entry: 108b5b8a0; end: 108b5ba3b;  */

int FUN_108b5b8a0(uint *param_1,undefined8 param_2,undefined8 param_3,int *param_4,
                 undefined8 param_5,int param_6)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  ulong uVar5;
  int iVar6;
  int iVar7;
  int iStack_70;
  int iStack_6c;
  uint uStack_68;
  uint uStack_64;
  
  FUN_108b5b590(&iStack_6c,&uStack_64,param_2,param_5);
  FUN_108b5b590(&iStack_70,&uStack_68,param_3,param_5);
  uVar4 = uStack_64;
  if ((int)uStack_64 <= (int)uStack_68) {
    uVar4 = uStack_68;
  }
  iVar1 = (uVar4 & 1) + uVar4;
  uVar4 = iStack_6c >> (iVar1 - uStack_64 & 0x1f);
  if ((int)uVar4 < 2) {
    uVar4 = 1;
  }
  FUN_108b598e0(param_2,param_3,iVar1,param_5);
  iVar6 = (int)param_2;
  FUN_108b5ba3c();
  if (iVar6 < -0x3fff) {
    iVar6 = -0x4000;
  }
  if (0x3fff < iVar6) {
    iVar6 = 0x4000;
  }
  iVar7 = (int)((ulong)((long)iVar6 * (long)iVar6) >> 0x10);
  iVar2 = -iVar7;
  if (-1 < iVar7) {
    iVar2 = iVar7;
  }
  if (param_6 <= iVar2) {
    param_6 = iVar2;
  }
  iVar2 = *param_4;
  uVar5 = (ulong)uVar4;
  func_0x000108b5bae8();
  iVar2 = iVar2 + (int)((ulong)((long)(int)(short)param_6 *
                               (long)(((int)uVar5 << (ulong)(iVar1 >> 1 & 0x1f)) - iVar2)) >> 0x10);
  *param_4 = iVar2;
  iVar3 = param_4[1];
  iVar7 = ((iStack_70 >> (iVar1 - uStack_68 & 0x1f)) -
          ((uint)((ulong)((long)iVar6 * (long)(int)param_2) >> 0xc) & 0xfffffff0)) +
          ((uint)(((ulong)((long)iVar6 * (long)iVar6) >> 0x10) * (ulong)uVar4 >> 10) & 0xffffffc0);
  func_0x000108b5bae8();
  uVar4 = iVar3 + (int)((ulong)((long)(int)(short)param_6 *
                               (long)((iVar7 << (ulong)(iVar1 >> 1 & 0x1f)) - iVar3)) >> 0x10);
  param_4[1] = uVar4;
  if (iVar2 < 2) {
    iVar2 = 1;
  }
  FUN_108b5ba3c(uVar4,iVar2,0xe);
  uVar4 = uVar4 & ((int)uVar4 >> 0x1f ^ 0xffffffffU);
  if (0x7ffe < (int)uVar4) {
    uVar4 = 0x7fff;
  }
  *param_1 = uVar4;
  return iVar6;
}



/* Entry: 108b5ba3c; end: 108b5bb57;  */

int FUN_108b5ba3c(int param_1,int param_2,int param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  short sVar7;
  int iVar8;
  int iVar9;
  
  iVar8 = -param_1;
  if (-1 < param_1) {
    iVar8 = param_1;
  }
  param_1 = param_1 << (ulong)((int)LZCOUNT(iVar8) - 1U & 0x1f);
  iVar4 = -param_2;
  if (-1 < param_2) {
    iVar4 = param_2;
  }
  param_2 = param_2 << (ulong)((int)LZCOUNT(iVar4) - 1U & 0x1f);
  iVar9 = param_2 >> 0x10;
  sVar7 = 0;
  if (iVar9 != 0) {
    sVar7 = (short)(0x1fffffff / iVar9);
  }
  iVar9 = (int)((ulong)((long)(int)sVar7 * (long)param_1) >> 0x10);
  uVar3 = (int)((ulong)((long)(int)sVar7 *
                       (long)(int)(param_1 -
                                  ((uint)((ulong)((long)iVar9 * (long)param_2) >> 0x1d) & 0xfffffff8
                                  ))) >> 0x10) + iVar9;
  iVar8 = (int)LZCOUNT(iVar8) - (param_3 + (int)LZCOUNT(iVar4));
  uVar1 = iVar8 + 0x1c;
  uVar2 = iVar8 + 0x1d;
  iVar8 = (int)uVar3 >> (uVar2 & 0x1f);
  if (0x1f < uVar2) {
    iVar8 = 0;
  }
  uVar6 = ~uVar1;
  uVar2 = -0x80000000 >> (uVar6 & 0x1f);
  uVar5 = 0x7fffffff >> (ulong)(uVar6 & 0x1f);
  if ((int)uVar2 <= (int)uVar3) {
    uVar2 = uVar3;
  }
  if ((int)uVar3 <= (int)uVar5) {
    uVar5 = uVar2;
  }
  if ((int)uVar1 < -1) {
    iVar8 = uVar5 << (ulong)(uVar6 & 0x1f);
  }
  return iVar8;
}



/* Entry: 108b5bb58; end: 108b5bca7;  */

void FUN_108b5bb58(int *param_1,long param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  char *pcVar4;
  short sVar5;
  uint uVar6;
  uint uVar7;
  short *psVar8;
  int iVar9;
  uint uVar10;
  long lVar11;
  int iVar12;
  long lVar13;
  
  lVar11 = 0;
  iVar12 = 0;
  do {
    if (lVar11 == 2) {
      *param_1 = *param_1 - param_1[1];
      return;
    }
    pcVar4 = (char *)(param_2 + lVar11 * 3);
    psVar8 = (short *)&UNK_10df91d6a;
    uVar10 = 0x7fffffff;
    iVar9 = iVar12;
    for (lVar13 = 0; iVar12 = iVar9, lVar13 != 0xf; lVar13 = lVar13 + 1) {
      sVar5 = psVar8[-1];
      iVar1 = ((int)*psVar8 - (int)sVar5) * 0x199a >> 0x10;
      iVar2 = sVar5 + iVar1;
      uVar6 = param_1[lVar11] - iVar2;
      uVar7 = -uVar6;
      if (-1 < (int)uVar6) {
        uVar7 = uVar6;
      }
      if (uVar10 <= uVar7) break;
      *pcVar4 = (char)lVar13;
      pcVar4[1] = '\0';
      iVar9 = (int)sVar5;
      iVar3 = iVar1 * 3 + iVar9;
      uVar6 = param_1[lVar11] - iVar3;
      uVar10 = -uVar6;
      if (-1 < (int)uVar6) {
        uVar10 = uVar6;
      }
      iVar12 = iVar2;
      if (uVar7 <= uVar10) break;
      pcVar4[1] = '\x01';
      iVar2 = iVar1 * 5 + iVar9;
      uVar6 = param_1[lVar11] - iVar2;
      uVar7 = -uVar6;
      if (-1 < (int)uVar6) {
        uVar7 = uVar6;
      }
      iVar12 = iVar3;
      if (uVar10 <= uVar7) break;
      pcVar4[1] = '\x02';
      iVar3 = iVar9 + iVar1 * 7;
      uVar10 = param_1[lVar11] - iVar3;
      uVar6 = -uVar10;
      if (-1 < (int)uVar10) {
        uVar6 = uVar10;
      }
      iVar12 = iVar2;
      if (uVar7 <= uVar6) break;
      pcVar4[1] = '\x03';
      iVar9 = iVar1 * 9 + iVar9;
      uVar7 = param_1[lVar11] - iVar9;
      uVar10 = -uVar7;
      if (-1 < (int)uVar7) {
        uVar10 = uVar7;
      }
      iVar12 = iVar3;
      if (uVar6 <= uVar10) break;
      pcVar4[1] = '\x04';
      psVar8 = psVar8 + 1;
    }
    pcVar4[2] = *pcVar4 / '\x03';
    *pcVar4 = *pcVar4 % '\x03';
    param_1[lVar11] = iVar12;
    lVar11 = lVar11 + 1;
  } while( true );
}



/* Entry: 108b5bca8; end: 108b5be37;  */

void FUN_108b5bca8(short *param_1,uint *param_2,int param_3,int param_4,undefined8 param_5)

{
  uint uVar1;
  short sVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  ulong uVar8;
  ulong uVar9;
  int iVar10;
  int iVar11;
  
  iVar10 = 0;
  iVar11 = 0;
  uVar6 = param_4 - param_3;
  uVar5 = uVar6 - 1;
  uVar9 = (ulong)((uint)param_5 & ((int)(uint)param_5 >> 0x1f ^ 0xffffffffU));
  while( true ) {
    if (iVar11 == 10) {
      for (; uVar9 != 0; uVar9 = uVar9 - 1) {
        uVar7 = *param_2;
        iVar11 = (int)uVar7 >> (uVar5 & 0x1f);
        iVar10 = -0x8000;
        if (-0x10002 < iVar11) {
          iVar10 = iVar11 + 1 >> 1;
        }
        iVar3 = 0x7fff;
        if (iVar11 < 0xffff) {
          iVar3 = iVar10;
        }
        iVar11 = (uVar7 & 1) + ((int)uVar7 >> 1);
        if (iVar11 < -0x7fff) {
          iVar11 = -0x8000;
        }
        if (0x7ffe < iVar11) {
          iVar11 = 0x7fff;
        }
        if (uVar6 == 1) {
          iVar3 = iVar11;
        }
        *param_1 = (short)iVar3;
        *param_2 = iVar3 << (ulong)(uVar6 & 0x1f);
        param_2 = param_2 + 1;
        param_1 = param_1 + 1;
      }
      return;
    }
    uVar7 = 0;
    for (uVar8 = 0; uVar9 != uVar8; uVar8 = uVar8 + 1) {
      uVar4 = param_2[uVar8];
      uVar1 = -uVar4;
      if (-1 < (int)uVar4) {
        uVar1 = uVar4;
      }
      iVar3 = (int)uVar8;
      if (uVar1 <= uVar7) {
        uVar1 = uVar7;
        iVar3 = iVar10;
      }
      iVar10 = iVar3;
      uVar7 = uVar1;
    }
    uVar1 = (uVar7 >> (ulong)(uVar5 & 0x1f)) + 1 >> 1;
    if (uVar6 == 1) {
      uVar1 = (uVar7 & 1) + (uVar7 >> 1);
    }
    if (uVar1 >> 0xf == 0) break;
    if (0x27ffd < uVar1) {
      uVar1 = 0x27ffe;
    }
    uVar7 = uVar1 + uVar1 * iVar10 >> 2;
    uVar4 = 0;
    if (uVar7 != 0) {
      uVar4 = (uVar1 * 0x4000 + 0xe0004000) / uVar7;
    }
    func_0x000108b5975c(param_2,param_5,0xffbe - uVar4);
    iVar11 = iVar11 + 1;
  }
  for (; uVar9 != 0; uVar9 = uVar9 - 1) {
    uVar7 = *param_2;
    sVar2 = (short)(((int)uVar7 >> (uVar5 & 0x1f)) + 1 >> 1);
    if (uVar6 == 1) {
      sVar2 = ((ushort)uVar7 & 1) + (short)((int)uVar7 >> 1);
    }
    *param_1 = sVar2;
    param_2 = param_2 + 1;
    param_1 = param_1 + 1;
  }
  return;
}


