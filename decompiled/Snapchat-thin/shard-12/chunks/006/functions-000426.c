/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1093f64c4; end: 1093f655f;  */

undefined8 * FUN_1093f64c4(undefined8 param_1,long *param_2,long *param_3)

{
  undefined8 *puVar1;
  undefined8 auStack_48 [2];
  undefined8 auStack_38 [2];
  undefined8 uStack_28;
  
  uStack_28 = param_1;
  (**(code **)(*param_3 + 0x18))(auStack_38,param_3);
  (**(code **)(*param_2 + 0x18))(auStack_48,param_2);
  puVar1 = auStack_38;
  FUN_1093f6610(puVar1,auStack_48,&uStack_28);
  _free(auStack_48[0]);
  _free(auStack_38[0]);
  return puVar1;
}



/* Entry: 1093f6560; end: 1093f6567;  */

undefined8 FUN_1093f6560(void)

{
  return 0;
}



/* Entry: 1093f6568; end: 1093f660f;  */

void FUN_1093f6568(undefined8 param_1,long *param_2)

{
  undefined8 *puVar1;
  long *plVar2;
  
  puVar1 = (undefined8 *)0x10;
  __Znwm();
  *puVar1 = &PTR_DAT_110af58d8;
  puVar1[1] = 0;
  plVar2 = (long *)*param_2;
  *param_2 = (long)puVar1;
  if (plVar2 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001093f65ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar2 + 8))();
    return;
  }
  return;
}



/* Entry: 1093f6610; end: 1093f6727;  */

double FUN_1093f6610(double param_1,undefined8 *param_2,undefined8 *param_3,undefined8 **param_4)

{
  ulong uVar1;
  undefined8 **ppuVar2;
  double *pdVar3;
  ulong uVar4;
  double *pdVar5;
  ulong uVar6;
  ulong uVar7;
  double *pdVar8;
  double *pdVar9;
  long lVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  undefined8 *puVar15;
  undefined1 uStack_c1;
  undefined8 *apuStack_c0 [2];
  undefined8 *apuStack_b0 [2];
  undefined8 *puStack_a0;
  undefined8 *puStack_98;
  undefined8 *puStack_90;
  undefined1 auStack_78 [8];
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar2 = param_4;
  dVar11 = 0.0;
  puStack_98 = param_2;
  puStack_90 = param_3;
  if (param_3[1] != 0) {
    uStack_68 = *param_2;
    uStack_60 = *param_3;
    ppuVar2 = &puStack_a0;
    FUN_1093f6728(auStack_78,apuStack_b0);
    dVar11 = param_1;
  }
  puVar15 = *param_4;
  dVar12 = 0.0;
  apuStack_b0[0] = param_2;
  if (param_2[1] != 0) {
    uStack_70 = *param_2;
    ppuVar2 = apuStack_b0;
    func_0x0001093f6840(auStack_78,apuStack_c0);
    dVar12 = param_1;
  }
  apuStack_c0[0] = param_3;
  if (param_3[1] == 0) {
    param_1 = 0.0;
  }
  else {
    uStack_70 = *param_3;
    ppuVar2 = apuStack_c0;
    func_0x0001093f6840(auStack_78,&uStack_c1);
  }
  if (dVar12 <= param_1) {
    param_1 = dVar12;
  }
  param_1 = (double)puVar15 * (double)puVar15 * param_1;
  uVar1 = (ulong)(dVar11 <= param_1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return param_1;
  }
  ___stack_chk_fail();
  __Unwind_Resume();
  uVar4 = ppuVar2[2][1];
  uVar7 = uVar4 + 3;
  if (-1 < (long)uVar4) {
    uVar7 = uVar4;
  }
  pdVar3 = *(double **)(uVar1 + 0x10);
  if (uVar4 + 1 < 3) {
    dVar11 = *pdVar3 - **(double **)(uVar1 + 0x18);
    return dVar11 * dVar11;
  }
  uVar6 = uVar4 - ((long)uVar4 >> 0x3f) & 0xfffffffffffffffe;
  pdVar5 = *(double **)(uVar1 + 0x18);
  dVar11 = (*pdVar3 - *pdVar5) * (*pdVar3 - *pdVar5);
  dVar12 = (pdVar3[1] - pdVar5[1]) * (pdVar3[1] - pdVar5[1]);
  if (3 < (long)uVar4) {
    uVar7 = uVar7 & 0xfffffffffffffffc;
    dVar13 = (pdVar3[2] - pdVar5[2]) * (pdVar3[2] - pdVar5[2]);
    dVar14 = (pdVar3[3] - pdVar5[3]) * (pdVar3[3] - pdVar5[3]);
    if (7 < uVar4) {
      pdVar8 = pdVar5 + 6;
      pdVar9 = pdVar3 + 6;
      lVar10 = 4;
      do {
        dVar11 = dVar11 + (pdVar9[-2] - pdVar8[-2]) * (pdVar9[-2] - pdVar8[-2]);
        dVar12 = dVar12 + (pdVar9[-1] - pdVar8[-1]) * (pdVar9[-1] - pdVar8[-1]);
        dVar13 = dVar13 + (*pdVar9 - *pdVar8) * (*pdVar9 - *pdVar8);
        dVar14 = dVar14 + (pdVar9[1] - pdVar8[1]) * (pdVar9[1] - pdVar8[1]);
        lVar10 = lVar10 + 4;
        pdVar8 = pdVar8 + 4;
        pdVar9 = pdVar9 + 4;
      } while (lVar10 < (long)uVar7);
    }
    dVar11 = dVar13 + dVar11;
    dVar12 = dVar14 + dVar12;
    if ((long)uVar7 < (long)uVar6) {
      dVar13 = pdVar3[uVar7] - pdVar5[uVar7];
      dVar14 = (pdVar3 + uVar7)[1] - (pdVar5 + uVar7)[1];
      dVar11 = dVar11 + dVar13 * dVar13;
      dVar12 = dVar12 + dVar14 * dVar14;
    }
  }
  dVar11 = dVar11 + dVar12;
  lVar10 = (long)uVar4 % 2;
  if (lVar10 != 0 && lVar10 < 0 == SBORROW8(uVar4,uVar6)) {
    pdVar3 = pdVar3 + ((long)uVar4 / 2) * 2;
    pdVar5 = pdVar5 + ((long)uVar4 / 2) * 2;
    do {
      dVar11 = dVar11 + (*pdVar3 - *pdVar5) * (*pdVar3 - *pdVar5);
      lVar10 = lVar10 + -1;
      pdVar3 = pdVar3 + 1;
      pdVar5 = pdVar5 + 1;
    } while (lVar10 != 0);
  }
  return dVar11;
}



/* Entry: 1093f6728; end: 1093f696f;  */

double FUN_1093f6728(long param_1,undefined8 param_2,long param_3)

{
  double *pdVar1;
  ulong uVar2;
  double *pdVar3;
  ulong uVar4;
  ulong uVar5;
  double *pdVar6;
  double *pdVar7;
  long lVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  
  uVar2 = *(ulong *)(*(long *)(param_3 + 0x10) + 8);
  uVar5 = uVar2 + 3;
  if (-1 < (long)uVar2) {
    uVar5 = uVar2;
  }
  pdVar1 = *(double **)(param_1 + 0x10);
  if (uVar2 + 1 < 3) {
    dVar9 = *pdVar1 - **(double **)(param_1 + 0x18);
    return dVar9 * dVar9;
  }
  uVar4 = uVar2 - ((long)uVar2 >> 0x3f) & 0xfffffffffffffffe;
  pdVar3 = *(double **)(param_1 + 0x18);
  dVar9 = (*pdVar1 - *pdVar3) * (*pdVar1 - *pdVar3);
  dVar10 = (pdVar1[1] - pdVar3[1]) * (pdVar1[1] - pdVar3[1]);
  if (3 < (long)uVar2) {
    uVar5 = uVar5 & 0xfffffffffffffffc;
    dVar11 = (pdVar1[2] - pdVar3[2]) * (pdVar1[2] - pdVar3[2]);
    dVar12 = (pdVar1[3] - pdVar3[3]) * (pdVar1[3] - pdVar3[3]);
    if (7 < uVar2) {
      pdVar6 = pdVar3 + 6;
      pdVar7 = pdVar1 + 6;
      lVar8 = 4;
      do {
        dVar9 = dVar9 + (pdVar7[-2] - pdVar6[-2]) * (pdVar7[-2] - pdVar6[-2]);
        dVar10 = dVar10 + (pdVar7[-1] - pdVar6[-1]) * (pdVar7[-1] - pdVar6[-1]);
        dVar11 = dVar11 + (*pdVar7 - *pdVar6) * (*pdVar7 - *pdVar6);
        dVar12 = dVar12 + (pdVar7[1] - pdVar6[1]) * (pdVar7[1] - pdVar6[1]);
        lVar8 = lVar8 + 4;
        pdVar6 = pdVar6 + 4;
        pdVar7 = pdVar7 + 4;
      } while (lVar8 < (long)uVar5);
    }
    dVar9 = dVar11 + dVar9;
    dVar10 = dVar12 + dVar10;
    if ((long)uVar5 < (long)uVar4) {
      dVar11 = pdVar1[uVar5] - pdVar3[uVar5];
      dVar12 = (pdVar1 + uVar5)[1] - (pdVar3 + uVar5)[1];
      dVar9 = dVar9 + dVar11 * dVar11;
      dVar10 = dVar10 + dVar12 * dVar12;
    }
  }
  dVar9 = dVar9 + dVar10;
  lVar8 = (long)uVar2 % 2;
  if (lVar8 != 0 && lVar8 < 0 == SBORROW8(uVar2,uVar4)) {
    pdVar1 = pdVar1 + ((long)uVar2 / 2) * 2;
    pdVar3 = pdVar3 + ((long)uVar2 / 2) * 2;
    do {
      dVar9 = dVar9 + (*pdVar1 - *pdVar3) * (*pdVar1 - *pdVar3);
      lVar8 = lVar8 + -1;
      pdVar1 = pdVar1 + 1;
      pdVar3 = pdVar3 + 1;
    } while (lVar8 != 0);
  }
  return dVar9;
}



/* Entry: 1093f6970; end: 1093f6a0b;  */

undefined8 * FUN_1093f6970(undefined4 param_1,long *param_2,long *param_3)

{
  undefined8 *puVar1;
  undefined8 auStack_48 [2];
  undefined8 auStack_38 [2];
  undefined4 uStack_24;
  
  uStack_24 = param_1;
  (**(code **)(*param_3 + 0x18))(auStack_38,param_3);
  (**(code **)(*param_2 + 0x18))(auStack_48,param_2);
  puVar1 = auStack_38;
  FUN_1093f6abc(puVar1,auStack_48,&uStack_24);
  _free(auStack_48[0]);
  _free(auStack_38[0]);
  return puVar1;
}



/* Entry: 1093f6a0c; end: 1093f6a13;  */

undefined8 FUN_1093f6a0c(void)

{
  return 0;
}



/* Entry: 1093f6a14; end: 1093f6abb;  */

void FUN_1093f6a14(undefined8 param_1,long *param_2)

{
  undefined8 *puVar1;
  long *plVar2;
  
  puVar1 = (undefined8 *)0x10;
  __Znwm();
  *puVar1 = &PTR_DAT_110af58d8;
  puVar1[1] = 0;
  plVar2 = (long *)*param_2;
  *param_2 = (long)puVar1;
  if (plVar2 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001093f6a58. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar2 + 8))();
    return;
  }
  return;
}



/* Entry: 1093f6abc; end: 1093f6bd3;  */

ulong FUN_1093f6abc(float param_1,undefined8 *param_2,undefined8 *param_3,undefined8 **param_4)

{
  ulong uVar1;
  undefined1 auVar2 [16];
  ulong uVar3;
  undefined8 **ppuVar4;
  float *pfVar5;
  ulong uVar6;
  long lVar7;
  float *pfVar8;
  ulong uVar9;
  float *pfVar10;
  float *pfVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar17;
  float fVar18;
  float fVar19;
  undefined1 auVar16 [16];
  float fVar20;
  float fVar22;
  undefined8 uVar21;
  float fVar23;
  float fVar25;
  undefined8 uVar24;
  float fVar26;
  undefined1 uStack_c1;
  undefined8 *apuStack_c0 [2];
  undefined8 *apuStack_b0 [2];
  undefined8 *puStack_a0;
  undefined8 *puStack_98;
  undefined8 *puStack_90;
  undefined1 auStack_78 [8];
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar4 = param_4;
  fVar12 = 0.0;
  puStack_98 = param_2;
  puStack_90 = param_3;
  if (param_3[1] != 0) {
    uStack_68 = *param_2;
    uStack_60 = *param_3;
    ppuVar4 = &puStack_a0;
    FUN_1093f6bd4(auStack_78,apuStack_b0);
    fVar12 = param_1;
  }
  fVar26 = *(float *)param_4;
  fVar13 = 0.0;
  apuStack_b0[0] = param_2;
  if (param_2[1] != 0) {
    uStack_70 = *param_2;
    ppuVar4 = apuStack_b0;
    func_0x0001093f6d1c(auStack_78,apuStack_c0);
    fVar13 = param_1;
  }
  apuStack_c0[0] = param_3;
  if (param_3[1] == 0) {
    param_1 = 0.0;
  }
  else {
    uStack_70 = *param_3;
    ppuVar4 = apuStack_c0;
    func_0x0001093f6d1c(auStack_78,&uStack_c1);
  }
  if (fVar13 <= param_1) {
    param_1 = fVar13;
  }
  param_1 = fVar26 * fVar26 * param_1;
  uVar3 = (ulong)(fVar12 <= param_1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_58) {
    ___stack_chk_fail();
    __Unwind_Resume();
    uVar6 = ppuVar4[2][1];
    uVar1 = uVar6 + 3;
    uVar9 = uVar6 + 7;
    if (-1 < (long)uVar6) {
      uVar1 = uVar6;
      uVar9 = uVar6;
    }
    pfVar5 = *(float **)(uVar3 + 0x10);
    if (uVar6 + 3 < 7) {
      pfVar8 = *(float **)(uVar3 + 0x18);
      fVar26 = (*pfVar5 - *pfVar8) * (*pfVar5 - *pfVar8);
      fVar12 = 0.0;
      if (1 < (long)uVar6) {
        lVar7 = uVar6 - 1;
        do {
          pfVar8 = pfVar8 + 1;
          pfVar5 = pfVar5 + 1;
          fVar26 = fVar26 + (*pfVar5 - *pfVar8) * (*pfVar5 - *pfVar8);
          fVar12 = 0.0;
          lVar7 = lVar7 + -1;
        } while (lVar7 != 0);
      }
    }
    else {
      pfVar8 = *(float **)(uVar3 + 0x18);
      fVar12 = (float)*(undefined8 *)pfVar5 - *pfVar8;
      fVar13 = (float)((ulong)*(undefined8 *)pfVar5 >> 0x20) - pfVar8[1];
      fVar26 = (float)*(undefined8 *)(pfVar5 + 2) - pfVar8[2];
      fVar14 = (float)((ulong)*(undefined8 *)(pfVar5 + 2) >> 0x20) - pfVar8[3];
      fVar12 = fVar12 * fVar12;
      fVar13 = fVar13 * fVar13;
      fVar26 = fVar26 * fVar26;
      fVar14 = fVar14 * fVar14;
      if (7 < (long)uVar6) {
        uVar9 = uVar9 & 0xfffffffffffffff8;
        fVar15 = pfVar5[4] - (float)*(undefined8 *)(pfVar8 + 4);
        fVar17 = pfVar5[5] - (float)((ulong)*(undefined8 *)(pfVar8 + 4) >> 0x20);
        fVar18 = pfVar5[6] - (float)*(undefined8 *)(pfVar8 + 6);
        fVar19 = pfVar5[7] - (float)((ulong)*(undefined8 *)(pfVar8 + 6) >> 0x20);
        fVar15 = fVar15 * fVar15;
        fVar17 = fVar17 * fVar17;
        fVar18 = fVar18 * fVar18;
        fVar19 = fVar19 * fVar19;
        if (0xf < uVar6) {
          pfVar10 = pfVar8 + 0xc;
          pfVar11 = pfVar5 + 0xc;
          lVar7 = 8;
          do {
            fVar20 = (float)*(undefined8 *)(pfVar11 + -4) - (float)*(undefined8 *)(pfVar10 + -4);
            fVar22 = (float)((ulong)*(undefined8 *)(pfVar11 + -4) >> 0x20) -
                     (float)((ulong)*(undefined8 *)(pfVar10 + -4) >> 0x20);
            fVar23 = (float)*(undefined8 *)(pfVar11 + -2) - (float)*(undefined8 *)(pfVar10 + -2);
            fVar25 = (float)((ulong)*(undefined8 *)(pfVar11 + -2) >> 0x20) -
                     (float)((ulong)*(undefined8 *)(pfVar10 + -2) >> 0x20);
            fVar12 = fVar12 + fVar20 * fVar20;
            fVar13 = fVar13 + fVar22 * fVar22;
            fVar26 = fVar26 + fVar23 * fVar23;
            fVar14 = fVar14 + fVar25 * fVar25;
            fVar20 = (float)*(undefined8 *)pfVar11 - (float)*(undefined8 *)pfVar10;
            fVar22 = (float)((ulong)*(undefined8 *)pfVar11 >> 0x20) -
                     (float)((ulong)*(undefined8 *)pfVar10 >> 0x20);
            fVar23 = (float)*(undefined8 *)(pfVar11 + 2) - (float)*(undefined8 *)(pfVar10 + 2);
            fVar25 = (float)((ulong)*(undefined8 *)(pfVar11 + 2) >> 0x20) -
                     (float)((ulong)*(undefined8 *)(pfVar10 + 2) >> 0x20);
            fVar15 = fVar15 + fVar20 * fVar20;
            fVar17 = fVar17 + fVar22 * fVar22;
            fVar18 = fVar18 + fVar23 * fVar23;
            fVar19 = fVar19 + fVar25 * fVar25;
            lVar7 = lVar7 + 8;
            pfVar10 = pfVar10 + 8;
            pfVar11 = pfVar11 + 8;
          } while (lVar7 < (long)uVar9);
        }
        fVar12 = fVar15 + fVar12;
        fVar13 = fVar17 + fVar13;
        fVar26 = fVar18 + fVar26;
        fVar14 = fVar19 + fVar14;
        if ((long)uVar9 < (long)(uVar1 & 0xfffffffffffffffc)) {
          pfVar10 = pfVar5 + uVar9;
          uVar24 = *(undefined8 *)(pfVar8 + uVar9 + 2);
          uVar21 = *(undefined8 *)(pfVar8 + uVar9);
          fVar15 = *pfVar10 - (float)uVar21;
          fVar17 = pfVar10[1] - (float)((ulong)uVar21 >> 0x20);
          fVar18 = pfVar10[2] - (float)uVar24;
          fVar19 = pfVar10[3] - (float)((ulong)uVar24 >> 0x20);
          fVar12 = fVar12 + fVar15 * fVar15;
          fVar13 = fVar13 + fVar17 * fVar17;
          fVar26 = fVar26 + fVar18 * fVar18;
          fVar14 = fVar14 + fVar19 * fVar19;
        }
      }
      auVar16._4_4_ = fVar13;
      auVar16._0_4_ = fVar12;
      auVar16._8_4_ = fVar26;
      auVar16._12_4_ = fVar14;
      auVar2._4_4_ = fVar13;
      auVar2._0_4_ = fVar12;
      auVar2._8_4_ = fVar26;
      auVar2._12_4_ = fVar14;
      auVar16 = NEON_ext(auVar16,auVar2,8,1);
      fVar12 = fVar12 + auVar16._0_4_;
      fVar13 = fVar13 + auVar16._4_4_;
      fVar26 = fVar12 + fVar13;
      fVar12 = fVar12 + fVar13;
      lVar7 = (long)uVar6 % 4;
      if (lVar7 != 0 && lVar7 < 0 == SBORROW8(uVar6,uVar1 & 0xfffffffffffffffc)) {
        pfVar5 = pfVar5 + ((long)uVar1 >> 2) * 4;
        pfVar8 = pfVar8 + ((long)uVar1 >> 2) * 4;
        do {
          fVar26 = fVar26 + (*pfVar5 - *pfVar8) * (*pfVar5 - *pfVar8);
          fVar12 = 0.0;
          lVar7 = lVar7 + -1;
          pfVar5 = pfVar5 + 1;
          pfVar8 = pfVar8 + 1;
        } while (lVar7 != 0);
      }
    }
    return CONCAT44(fVar12,fVar26);
  }
  return (ulong)(uint)param_1;
}



/* Entry: 1093f6bd4; end: 1093f6e23;  */

undefined8 FUN_1093f6bd4(long param_1,undefined8 param_2,long param_3)

{
  ulong uVar1;
  undefined1 auVar2 [16];
  float *pfVar3;
  ulong uVar4;
  long lVar5;
  float *pfVar6;
  ulong uVar7;
  float *pfVar8;
  float *pfVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar16;
  float fVar17;
  float fVar18;
  undefined1 auVar15 [16];
  float fVar19;
  float fVar21;
  undefined8 uVar20;
  float fVar22;
  float fVar24;
  undefined8 uVar23;
  
  uVar4 = *(ulong *)(*(long *)(param_3 + 0x10) + 8);
  uVar1 = uVar4 + 3;
  uVar7 = uVar4 + 7;
  if (-1 < (long)uVar4) {
    uVar1 = uVar4;
    uVar7 = uVar4;
  }
  pfVar3 = *(float **)(param_1 + 0x10);
  if (uVar4 + 3 < 7) {
    pfVar6 = *(float **)(param_1 + 0x18);
    fVar10 = (*pfVar3 - *pfVar6) * (*pfVar3 - *pfVar6);
    fVar11 = 0.0;
    if (1 < (long)uVar4) {
      lVar5 = uVar4 - 1;
      do {
        pfVar6 = pfVar6 + 1;
        pfVar3 = pfVar3 + 1;
        fVar10 = fVar10 + (*pfVar3 - *pfVar6) * (*pfVar3 - *pfVar6);
        fVar11 = 0.0;
        lVar5 = lVar5 + -1;
      } while (lVar5 != 0);
    }
  }
  else {
    pfVar6 = *(float **)(param_1 + 0x18);
    fVar11 = (float)*(undefined8 *)pfVar3 - *pfVar6;
    fVar12 = (float)((ulong)*(undefined8 *)pfVar3 >> 0x20) - pfVar6[1];
    fVar10 = (float)*(undefined8 *)(pfVar3 + 2) - pfVar6[2];
    fVar13 = (float)((ulong)*(undefined8 *)(pfVar3 + 2) >> 0x20) - pfVar6[3];
    fVar11 = fVar11 * fVar11;
    fVar12 = fVar12 * fVar12;
    fVar10 = fVar10 * fVar10;
    fVar13 = fVar13 * fVar13;
    if (7 < (long)uVar4) {
      uVar7 = uVar7 & 0xfffffffffffffff8;
      fVar14 = pfVar3[4] - (float)*(undefined8 *)(pfVar6 + 4);
      fVar16 = pfVar3[5] - (float)((ulong)*(undefined8 *)(pfVar6 + 4) >> 0x20);
      fVar17 = pfVar3[6] - (float)*(undefined8 *)(pfVar6 + 6);
      fVar18 = pfVar3[7] - (float)((ulong)*(undefined8 *)(pfVar6 + 6) >> 0x20);
      fVar14 = fVar14 * fVar14;
      fVar16 = fVar16 * fVar16;
      fVar17 = fVar17 * fVar17;
      fVar18 = fVar18 * fVar18;
      if (0xf < uVar4) {
        pfVar8 = pfVar6 + 0xc;
        pfVar9 = pfVar3 + 0xc;
        lVar5 = 8;
        do {
          fVar19 = (float)*(undefined8 *)(pfVar9 + -4) - (float)*(undefined8 *)(pfVar8 + -4);
          fVar21 = (float)((ulong)*(undefined8 *)(pfVar9 + -4) >> 0x20) -
                   (float)((ulong)*(undefined8 *)(pfVar8 + -4) >> 0x20);
          fVar22 = (float)*(undefined8 *)(pfVar9 + -2) - (float)*(undefined8 *)(pfVar8 + -2);
          fVar24 = (float)((ulong)*(undefined8 *)(pfVar9 + -2) >> 0x20) -
                   (float)((ulong)*(undefined8 *)(pfVar8 + -2) >> 0x20);
          fVar11 = fVar11 + fVar19 * fVar19;
          fVar12 = fVar12 + fVar21 * fVar21;
          fVar10 = fVar10 + fVar22 * fVar22;
          fVar13 = fVar13 + fVar24 * fVar24;
          fVar19 = (float)*(undefined8 *)pfVar9 - (float)*(undefined8 *)pfVar8;
          fVar21 = (float)((ulong)*(undefined8 *)pfVar9 >> 0x20) -
                   (float)((ulong)*(undefined8 *)pfVar8 >> 0x20);
          fVar22 = (float)*(undefined8 *)(pfVar9 + 2) - (float)*(undefined8 *)(pfVar8 + 2);
          fVar24 = (float)((ulong)*(undefined8 *)(pfVar9 + 2) >> 0x20) -
                   (float)((ulong)*(undefined8 *)(pfVar8 + 2) >> 0x20);
          fVar14 = fVar14 + fVar19 * fVar19;
          fVar16 = fVar16 + fVar21 * fVar21;
          fVar17 = fVar17 + fVar22 * fVar22;
          fVar18 = fVar18 + fVar24 * fVar24;
          lVar5 = lVar5 + 8;
          pfVar8 = pfVar8 + 8;
          pfVar9 = pfVar9 + 8;
        } while (lVar5 < (long)uVar7);
      }
      fVar11 = fVar14 + fVar11;
      fVar12 = fVar16 + fVar12;
      fVar10 = fVar17 + fVar10;
      fVar13 = fVar18 + fVar13;
      if ((long)uVar7 < (long)(uVar1 & 0xfffffffffffffffc)) {
        pfVar8 = pfVar3 + uVar7;
        uVar23 = *(undefined8 *)(pfVar6 + uVar7 + 2);
        uVar20 = *(undefined8 *)(pfVar6 + uVar7);
        fVar14 = *pfVar8 - (float)uVar20;
        fVar16 = pfVar8[1] - (float)((ulong)uVar20 >> 0x20);
        fVar17 = pfVar8[2] - (float)uVar23;
        fVar18 = pfVar8[3] - (float)((ulong)uVar23 >> 0x20);
        fVar11 = fVar11 + fVar14 * fVar14;
        fVar12 = fVar12 + fVar16 * fVar16;
        fVar10 = fVar10 + fVar17 * fVar17;
        fVar13 = fVar13 + fVar18 * fVar18;
      }
    }
    auVar15._4_4_ = fVar12;
    auVar15._0_4_ = fVar11;
    auVar15._8_4_ = fVar10;
    auVar15._12_4_ = fVar13;
    auVar2._4_4_ = fVar12;
    auVar2._0_4_ = fVar11;
    auVar2._8_4_ = fVar10;
    auVar2._12_4_ = fVar13;
    auVar15 = NEON_ext(auVar15,auVar2,8,1);
    fVar11 = fVar11 + auVar15._0_4_;
    fVar12 = fVar12 + auVar15._4_4_;
    fVar10 = fVar11 + fVar12;
    fVar11 = fVar11 + fVar12;
    lVar5 = (long)uVar4 % 4;
    if (lVar5 != 0 && lVar5 < 0 == SBORROW8(uVar4,uVar1 & 0xfffffffffffffffc)) {
      pfVar3 = pfVar3 + ((long)uVar1 >> 2) * 4;
      pfVar6 = pfVar6 + ((long)uVar1 >> 2) * 4;
      do {
        fVar10 = fVar10 + (*pfVar3 - *pfVar6) * (*pfVar3 - *pfVar6);
        fVar11 = 0.0;
        lVar5 = lVar5 + -1;
        pfVar3 = pfVar3 + 1;
        pfVar6 = pfVar6 + 1;
      } while (lVar5 != 0);
    }
  }
  return CONCAT44(fVar11,fVar10);
}



/* Entry: 1093f6e24; end: 1093f6e6f;  */

void FUN_1093f6e24(undefined8 *param_1,long param_2)

{
  undefined1 uStack_21;
  
  *param_1 = 0;
  param_1[1] = 0;
  FUN_1093f71ac(param_1,param_2 + 8,&uStack_21);
  return;
}



/* Entry: 1093f6e70; end: 1093f6f2f;  */

void FUN_1093f6e70(double *param_1,long param_2,double *param_3)

{
  double dVar1;
  double dVar2;
  undefined8 uStack_28;
  
  if (*(char *)(param_2 + 0x34) == '\x01') {
    dVar1 = param_3[1];
    dVar2 = *param_3;
  }
  else {
    dVar1 = SQRT(*param_3 * *param_3 + param_3[1] * param_3[1]);
    uStack_28 = 0;
    FUN_1093f7280(param_2 + 8,&uStack_28);
    dVar2 = *param_3 * dVar1;
    dVar1 = param_3[1] * dVar1;
  }
  param_1[1] = dVar1;
  *param_1 = dVar2;
  return;
}



/* Entry: 1093f6f30; end: 1093f6f57;  */

void FUN_1093f6f30(double *param_1,long param_2,double *param_3)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  
  if ((*(byte *)(param_2 + 0x34) & 1) == 0) {
    dVar6 = param_3[1];
    dVar3 = *param_3;
    dVar9 = SQRT(dVar3 * dVar3 + dVar6 * dVar6);
    if (2.220446049250313e-16 < ABS(dVar9)) {
      dVar1 = dVar9;
      _atan();
      dVar2 = dVar1 * dVar1;
      dVar4 = dVar1 * dVar2;
      dVar7 = dVar2 * dVar4;
      dVar8 = dVar2 * dVar7;
      dVar5 = dVar9 * dVar9;
      dVar9 = (dVar4 * *(double *)(param_2 + 0x10) + dVar1 * *(double *)(param_2 + 8) +
               dVar7 * *(double *)(param_2 + 0x18) + dVar8 * *(double *)(param_2 + 0x20) +
              dVar2 * dVar8 * *(double *)(param_2 + 0x28)) / dVar9;
      dVar1 = (*(double *)(param_2 + 8) +
              (dVar4 * *(double *)(param_2 + 0x18) * 5.0 + dVar1 * *(double *)(param_2 + 0x10) * 3.0
               + dVar7 * *(double *)(param_2 + 0x20) * 7.0 +
              dVar8 * *(double *)(param_2 + 0x28) * 9.0) * dVar1) / (dVar5 + dVar5 * dVar5) -
              dVar9 / dVar5;
      *param_1 = dVar9;
      param_1[1] = dVar9 * 0.0;
      param_1[2] = dVar9 * 0.0;
      param_1[3] = dVar9;
      dVar9 = dVar1 * dVar3;
      dVar1 = dVar1 * dVar6;
      param_1[1] = param_1[1] + dVar6 * dVar9;
      *param_1 = *param_1 + dVar3 * dVar9;
      param_1[3] = param_1[3] + dVar6 * dVar1;
      param_1[2] = param_1[2] + dVar3 * dVar1;
      return;
    }
  }
  *param_1 = 1.0;
  param_1[1] = 0.0;
  param_1[2] = 0.0;
  param_1[3] = 1.0;
  return;
}



/* Entry: 1093f6f58; end: 1093f6f8f;  */

void FUN_1093f6f58(long param_1,double *param_2)

{
  undefined8 uStack_18;
  
  uStack_18 = 0;
  FUN_1093f7280(SQRT(*param_2 * *param_2 + param_2[1] * param_2[1]),param_1 + 8,&uStack_18);
  return;
}



/* Entry: 1093f6f90; end: 1093f702b;  */

undefined8 * FUN_1093f6f90(undefined8 param_1,long *param_2,long *param_3)

{
  undefined8 *puVar1;
  undefined8 auStack_48 [2];
  undefined8 auStack_38 [2];
  undefined8 uStack_28;
  
  uStack_28 = param_1;
  (**(code **)(*param_3 + 0x18))(auStack_38,param_3);
  (**(code **)(*param_2 + 0x18))(auStack_48,param_2);
  puVar1 = auStack_38;
  FUN_1093f6610(puVar1,auStack_48,&uStack_28);
  _free(auStack_48[0]);
  _free(auStack_38[0]);
  return puVar1;
}



/* Entry: 1093f702c; end: 1093f7033;  */

undefined8 FUN_1093f702c(void)

{
  return 1;
}



/* Entry: 1093f7034; end: 1093f70ef;  */

void FUN_1093f7034(long param_1,long *param_2)

{
  undefined8 *puVar1;
  long *plVar2;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined1 uStack_38;
  
  puVar1 = (undefined8 *)0x28;
  __Znwm();
  puVar1[1] = 0;
  *puVar1 = 0;
  puVar1[3] = 0;
  puVar1[2] = 0;
  puVar1[4] = 0;
  *puVar1 = &PTR_FUN_110af5a18;
  uStack_50 = 0;
  uStack_48 = 0;
  uStack_40 = 0;
  FUN_1093f7b90(puVar1 + 1,&uStack_50);
  FUN_1093f77d0(&uStack_50,param_1 + 8);
  puVar1[1] = uStack_50;
  puVar1[2] = uStack_48;
  *(undefined4 *)(puVar1 + 3) = uStack_40;
  *(undefined4 *)((long)puVar1 + 0x1c) = uStack_3c;
  *(undefined1 *)(puVar1 + 4) = uStack_38;
  plVar2 = (long *)*param_2;
  *param_2 = (long)puVar1;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 8))();
  }
  return;
}



/* Entry: 1093f70f0; end: 1093f71ab;  */

void FUN_1093f70f0(long param_1,long *param_2)

{
  undefined8 *puVar1;
  long *plVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  puVar1 = (undefined8 *)0x38;
  __Znwm();
  puVar1[1] = 0;
  *puVar1 = 0;
  puVar1[3] = 0;
  puVar1[2] = 0;
  puVar1[5] = 0;
  puVar1[4] = 0;
  puVar1[6] = 0;
  *puVar1 = &PTR_DAT_110af5980;
  uStack_40 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_48 = 0;
  uStack_50 = 0;
  FUN_1093f61e0(puVar1 + 1,&uStack_60);
  uVar4 = *(undefined8 *)(param_1 + 0x10);
  uVar3 = *(undefined8 *)(param_1 + 8);
  uVar6 = *(undefined8 *)(param_1 + 0x20);
  uVar5 = *(undefined8 *)(param_1 + 0x18);
  uVar7 = *(undefined8 *)(param_1 + 0x28);
  *(undefined4 *)(puVar1 + 6) = *(undefined4 *)(param_1 + 0x30);
  *(undefined1 *)((long)puVar1 + 0x34) = *(undefined1 *)(param_1 + 0x34);
  puVar1[2] = uVar4;
  puVar1[1] = uVar3;
  puVar1[4] = uVar6;
  puVar1[3] = uVar5;
  puVar1[5] = uVar7;
  plVar2 = (long *)*param_2;
  *param_2 = (long)puVar1;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 8))();
  }
  return;
}



/* Entry: 1093f71ac; end: 1093f727f;  */

double FUN_1093f71ac(double param_1,ulong *param_2,double *param_3)

{
  ulong uVar1;
  double *pdVar2;
  double *pdVar3;
  double **ppdVar4;
  int iVar5;
  ulong uVar6;
  ulong uVar7;
  double *pdVar8;
  long lVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  undefined1 uStack_b1;
  double *pdStack_b0;
  undefined8 uStack_a8;
  double *pdStack_98;
  undefined8 uStack_90;
  undefined8 uStack_80;
  double dStack_70;
  double *pdStack_68;
  long lStack_58;
  
  pdVar2 = (double *)*param_2;
  if (param_2[1] != 5) {
    _free();
    pdVar2 = (double *)0x28;
    _malloc();
    if (pdVar2 == (double *)0x0) {
      pdVar3 = (double *)0x8;
      ___cxa_allocate_exception();
      __ZNSt9bad_allocC1Ev();
      pdVar2 = (double *)PTR___ZTISt9bad_alloc_110346a68;
      ppdVar4 = (double **)PTR___ZNSt9bad_allocD1Ev_110346998;
      ___cxa_throw();
      lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
      dVar10 = 1.0;
      if (1e-05 < param_1) {
        pdStack_b0 = pdVar3 + 1;
        uStack_a8 = 4;
        uStack_90 = 1;
        uStack_80 = 5;
        pdVar8 = &dStack_70;
        ppdVar4 = &pdStack_b0;
        pdStack_98 = pdVar3;
        pdStack_68 = pdStack_b0;
        FUN_1093f7404(pdVar8,&uStack_b1);
        if (dVar10 <= 2.220446049250313e-16) {
          dVar10 = param_1 / *pdVar3;
          *pdVar2 = dVar10;
        }
        else {
          dVar10 = param_1;
          _atan();
          dVar10 = dVar10 / *pdVar3;
          *pdVar2 = dVar10;
          iVar5 = *(int *)(pdVar3 + 5);
          if (iVar5 != 0) {
            do {
              iVar5 = iVar5 + -1;
              dVar11 = dVar10 * dVar10;
              dVar12 = dVar10 * dVar11;
              dVar13 = dVar11 * dVar12;
              dVar14 = dVar11 * dVar13;
              dVar11 = ((dVar12 * pdVar3[1] + dVar10 * *pdVar3 + dVar13 * pdVar3[2] +
                         dVar14 * pdVar3[3] + dVar11 * dVar14 * pdVar3[4]) - param_1) /
                       (*pdVar3 +
                       (dVar12 * pdVar3[2] * 5.0 + dVar10 * pdVar3[1] * 3.0 +
                        dVar13 * pdVar3[3] * 7.0 + dVar14 * pdVar3[4] * 9.0) * dVar10);
              dVar10 = dVar10 - dVar11;
              *pdVar2 = dVar10;
            } while (1e-10 <= ABS(dVar11) && iVar5 != 0);
          }
        }
        pdVar3 = pdVar8;
        _tan();
        dVar10 = dVar10 / param_1;
      }
      if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_58) {
        ___stack_chk_fail(dVar10);
        __Unwind_Resume();
        pdVar8 = ppdVar4[1];
        pdVar2 = (double *)((long)pdVar8 + 3);
        if (-1 < (long)pdVar8) {
          pdVar2 = pdVar8;
        }
        pdVar3 = (double *)pdVar3[1];
        if (2 < (long)pdVar8 + 1U) {
          uVar6 = (long)pdVar8 - ((long)pdVar8 >> 0x3f) & 0xfffffffffffffffe;
          dVar10 = *pdVar3 * *pdVar3;
          dVar11 = pdVar3[1] * pdVar3[1];
          if (3 < (long)pdVar8) {
            uVar7 = (ulong)pdVar2 & 0xfffffffffffffffc;
            dVar12 = pdVar3[2] * pdVar3[2];
            dVar13 = pdVar3[3] * pdVar3[3];
            if ((double *)0x7 < pdVar8) {
              pdVar2 = pdVar3 + 6;
              lVar9 = 4;
              do {
                dVar10 = dVar10 + pdVar2[-2] * pdVar2[-2];
                dVar11 = dVar11 + pdVar2[-1] * pdVar2[-1];
                dVar12 = dVar12 + *pdVar2 * *pdVar2;
                dVar13 = dVar13 + pdVar2[1] * pdVar2[1];
                lVar9 = lVar9 + 4;
                pdVar2 = pdVar2 + 4;
              } while (lVar9 < (long)uVar7);
            }
            dVar10 = dVar12 + dVar10;
            dVar11 = dVar13 + dVar11;
            if ((long)uVar7 < (long)uVar6) {
              dVar13 = (pdVar3 + uVar7)[1];
              dVar12 = pdVar3[uVar7];
              dVar10 = dVar10 + dVar12 * dVar12;
              dVar11 = dVar11 + dVar13 * dVar13;
            }
          }
          dVar10 = dVar10 + dVar11;
          lVar9 = (long)pdVar8 % 2;
          if (lVar9 != 0 && lVar9 < 0 == SBORROW8((long)pdVar8,uVar6)) {
            pdVar2 = pdVar3 + ((long)pdVar8 / 2) * 2;
            do {
              dVar10 = dVar10 + *pdVar2 * *pdVar2;
              lVar9 = lVar9 + -1;
              pdVar2 = pdVar2 + 1;
            } while (lVar9 != 0);
          }
          return dVar10;
        }
        return *pdVar3 * *pdVar3;
      }
      return dVar10;
    }
    *param_2 = (ulong)pdVar2;
    param_2[1] = 5;
  }
  uVar6 = (ulong)pdVar2 >> 3 & 1;
  uVar1 = uVar6;
  pdVar3 = pdVar2;
  pdVar8 = param_3;
  uVar7 = uVar6;
  if (((ulong)pdVar2 & 7) != 0) {
    uVar1 = 5;
    uVar7 = uVar1;
  }
  for (; uVar1 != 0; uVar1 = uVar1 - 1) {
    param_1 = *pdVar8;
    *pdVar3 = param_1;
    pdVar3 = pdVar3 + 1;
    pdVar8 = pdVar8 + 1;
  }
  uVar7 = uVar7 | 4;
  if (((ulong)pdVar2 & 7) == 0) {
    pdVar3 = param_3 + uVar6;
    pdVar8 = pdVar2 + uVar6;
    do {
      param_1 = *pdVar3;
      pdVar8[1] = pdVar3[1];
      *pdVar8 = param_1;
      uVar6 = uVar6 + 2;
      pdVar3 = pdVar3 + 2;
      pdVar8 = pdVar8 + 2;
    } while (uVar6 < uVar7);
  }
  if (uVar7 < 5) {
    do {
      param_1 = param_3[uVar7];
      pdVar2[uVar7] = param_1;
      uVar7 = uVar7 + 1;
    } while (uVar7 != 5);
  }
  return param_1;
}



/* Entry: 1093f7280; end: 1093f7403;  */

double FUN_1093f7280(double param_1,double *param_2,double *param_3,double **param_4)

{
  double *pdVar1;
  int iVar2;
  double *pdVar3;
  double *pdVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  undefined1 uStack_91;
  double *pdStack_90;
  undefined8 uStack_88;
  double *pdStack_78;
  undefined8 uStack_70;
  undefined8 uStack_60;
  double dStack_50;
  double *pdStack_48;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  dVar8 = 1.0;
  if (1e-05 < param_1) {
    pdStack_90 = param_2 + 1;
    uStack_88 = 4;
    uStack_70 = 1;
    uStack_60 = 5;
    pdVar1 = &dStack_50;
    param_4 = &pdStack_90;
    pdStack_78 = param_2;
    pdStack_48 = pdStack_90;
    FUN_1093f7404(pdVar1,&uStack_91);
    if (dVar8 <= 2.220446049250313e-16) {
      dVar8 = param_1 / *param_2;
      *param_3 = dVar8;
    }
    else {
      dVar8 = param_1;
      _atan();
      dVar8 = dVar8 / *param_2;
      *param_3 = dVar8;
      iVar2 = *(int *)(param_2 + 5);
      if (iVar2 != 0) {
        do {
          iVar2 = iVar2 + -1;
          dVar9 = dVar8 * dVar8;
          dVar10 = dVar8 * dVar9;
          dVar11 = dVar9 * dVar10;
          dVar12 = dVar9 * dVar11;
          dVar9 = ((dVar10 * param_2[1] + dVar8 * *param_2 + dVar11 * param_2[2] +
                    dVar12 * param_2[3] + dVar9 * dVar12 * param_2[4]) - param_1) /
                  (*param_2 +
                  (dVar10 * param_2[2] * 5.0 + dVar8 * param_2[1] * 3.0 + dVar11 * param_2[3] * 7.0
                  + dVar12 * param_2[4] * 9.0) * dVar8);
          dVar8 = dVar8 - dVar9;
          *param_3 = dVar8;
        } while (1e-10 <= ABS(dVar9) && iVar2 != 0);
      }
    }
    param_2 = pdVar1;
    _tan();
    dVar8 = dVar8 / param_1;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return dVar8;
  }
  ___stack_chk_fail(dVar8);
  __Unwind_Resume();
  pdVar4 = param_4[1];
  pdVar1 = (double *)((long)pdVar4 + 3);
  if (-1 < (long)pdVar4) {
    pdVar1 = pdVar4;
  }
  pdVar3 = (double *)param_2[1];
  if ((long)pdVar4 + 1U < 3) {
    return *pdVar3 * *pdVar3;
  }
  uVar5 = (long)pdVar4 - ((long)pdVar4 >> 0x3f) & 0xfffffffffffffffe;
  dVar8 = *pdVar3 * *pdVar3;
  dVar9 = pdVar3[1] * pdVar3[1];
  if (3 < (long)pdVar4) {
    uVar6 = (ulong)pdVar1 & 0xfffffffffffffffc;
    dVar10 = pdVar3[2] * pdVar3[2];
    dVar11 = pdVar3[3] * pdVar3[3];
    if ((double *)0x7 < pdVar4) {
      pdVar1 = pdVar3 + 6;
      lVar7 = 4;
      do {
        dVar8 = dVar8 + pdVar1[-2] * pdVar1[-2];
        dVar9 = dVar9 + pdVar1[-1] * pdVar1[-1];
        dVar10 = dVar10 + *pdVar1 * *pdVar1;
        dVar11 = dVar11 + pdVar1[1] * pdVar1[1];
        lVar7 = lVar7 + 4;
        pdVar1 = pdVar1 + 4;
      } while (lVar7 < (long)uVar6);
    }
    dVar8 = dVar10 + dVar8;
    dVar9 = dVar11 + dVar9;
    if ((long)uVar6 < (long)uVar5) {
      dVar11 = (pdVar3 + uVar6)[1];
      dVar10 = pdVar3[uVar6];
      dVar8 = dVar8 + dVar10 * dVar10;
      dVar9 = dVar9 + dVar11 * dVar11;
    }
  }
  dVar8 = dVar8 + dVar9;
  lVar7 = (long)pdVar4 % 2;
  if (lVar7 != 0 && lVar7 < 0 == SBORROW8((long)pdVar4,uVar5)) {
    pdVar1 = pdVar3 + ((long)pdVar4 / 2) * 2;
    do {
      dVar8 = dVar8 + *pdVar1 * *pdVar1;
      lVar7 = lVar7 + -1;
      pdVar1 = pdVar1 + 1;
    } while (lVar7 != 0);
  }
  return dVar8;
}



/* Entry: 1093f7404; end: 1093f74cf;  */

double FUN_1093f7404(long param_1,undefined8 param_2,long param_3)

{
  double *pdVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  double *pdVar5;
  long lVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  
  uVar2 = *(ulong *)(param_3 + 8);
  uVar4 = uVar2 + 3;
  if (-1 < (long)uVar2) {
    uVar4 = uVar2;
  }
  pdVar1 = *(double **)(param_1 + 8);
  if (uVar2 + 1 < 3) {
    return *pdVar1 * *pdVar1;
  }
  uVar3 = uVar2 - ((long)uVar2 >> 0x3f) & 0xfffffffffffffffe;
  dVar7 = *pdVar1 * *pdVar1;
  dVar8 = pdVar1[1] * pdVar1[1];
  if (3 < (long)uVar2) {
    uVar4 = uVar4 & 0xfffffffffffffffc;
    dVar9 = pdVar1[2] * pdVar1[2];
    dVar10 = pdVar1[3] * pdVar1[3];
    if (7 < uVar2) {
      pdVar5 = pdVar1 + 6;
      lVar6 = 4;
      do {
        dVar7 = dVar7 + pdVar5[-2] * pdVar5[-2];
        dVar8 = dVar8 + pdVar5[-1] * pdVar5[-1];
        dVar9 = dVar9 + *pdVar5 * *pdVar5;
        dVar10 = dVar10 + pdVar5[1] * pdVar5[1];
        lVar6 = lVar6 + 4;
        pdVar5 = pdVar5 + 4;
      } while (lVar6 < (long)uVar4);
    }
    dVar7 = dVar9 + dVar7;
    dVar8 = dVar10 + dVar8;
    if ((long)uVar4 < (long)uVar3) {
      dVar10 = (pdVar1 + uVar4)[1];
      dVar9 = pdVar1[uVar4];
      dVar7 = dVar7 + dVar9 * dVar9;
      dVar8 = dVar8 + dVar10 * dVar10;
    }
  }
  dVar7 = dVar7 + dVar8;
  lVar6 = (long)uVar2 % 2;
  if (lVar6 != 0 && lVar6 < 0 == SBORROW8(uVar2,uVar3)) {
    pdVar1 = pdVar1 + ((long)uVar2 / 2) * 2;
    do {
      dVar7 = dVar7 + *pdVar1 * *pdVar1;
      lVar6 = lVar6 + -1;
      pdVar1 = pdVar1 + 1;
    } while (lVar6 != 0);
  }
  return dVar7;
}



/* Entry: 1093f74d0; end: 1093f767b;  */

double FUN_1093f74d0(double param_1,double *param_2)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  
  dVar1 = 1.0;
  if (1e-05 < param_1) {
    dVar1 = param_1;
    _atan(param_1);
    dVar2 = dVar1 * dVar1;
    dVar3 = dVar2 * dVar1 * dVar2;
    dVar4 = dVar2 * dVar3;
    dVar1 = (dVar1 * dVar2 * param_2[1] + dVar1 * *param_2 + dVar3 * param_2[2] + dVar4 * param_2[3]
            + dVar2 * dVar4 * param_2[4]) / param_1;
  }
  return dVar1;
}



/* Entry: 1093f767c; end: 1093f77cf;  */

void FUN_1093f767c(double *param_1,double *param_2,double *param_3)

{
  double dVar1;
  double dVar2;
  double extraout_d1;
  undefined1 auVar3 [16];
  double dVar4;
  double dVar5;
  double dStack_58;
  
  if (((*(byte *)((long)param_2 + 0x2c) & 1) != 0) ||
     (dVar5 = SQRT(*param_3 * *param_3 + param_3[1] * param_3[1]),
     ABS(dVar5) <= 2.220446049250313e-16)) {
    *param_1 = 1.0;
    param_1[1] = 0.0;
    param_1[2] = 0.0;
    param_1[3] = 1.0;
  }
  else {
    dStack_58 = 0.0;
    dVar1 = dVar5;
    FUN_1093f7280(param_2,&dStack_58);
    dVar2 = dStack_58 * dStack_58;
    dVar4 = dVar2 * dVar2 * dVar2;
    auVar3 = NEON_fmov(0x3ff0000000000000,8);
    ___sincos_stret();
    dVar2 = (1.0 / (dVar5 * extraout_d1 * dVar5 * extraout_d1)) *
            (1.0 / (param_2[4] * dVar2 * dVar4 * 9.0 +
                   *param_2 * auVar3._0_8_ + param_2[2] * dVar2 * dVar2 * 5.0 +
                   param_2[1] * dVar2 * 3.0 + param_2[3] * dVar4 * 7.0) -
            (dStack_58 * extraout_d1) / dVar5);
    *param_1 = dVar1;
    param_1[1] = dVar1 * 0.0;
    param_1[2] = dVar1 * 0.0;
    param_1[3] = dVar1;
    dVar5 = *param_3;
    dVar1 = param_3[1];
    dVar4 = dVar2 * dVar5;
    dVar2 = dVar2 * dVar1;
    param_1[1] = param_1[1] + dVar1 * dVar4;
    *param_1 = *param_1 + dVar5 * dVar4;
    param_1[3] = param_1[3] + dVar1 * dVar2;
    param_1[2] = param_1[2] + dVar5 * dVar2;
  }
  return;
}



/* Entry: 1093f77d0; end: 1093f7813;  */

void FUN_1093f77d0(undefined8 param_1,double *param_2)

{
  undefined8 uStack_30;
  undefined8 uStack_28;
  float fStack_20;
  
  uStack_28 = CONCAT44((float)param_2[3],(float)param_2[2]);
  uStack_30 = CONCAT44((float)param_2[1],(float)*param_2);
  fStack_20 = (float)param_2[4];
  func_0x0001093f8318(param_1,&uStack_30,*(undefined4 *)(param_2 + 5));
  return;
}



/* Entry: 1093f7814; end: 1093f7823;  */

void FUN_1093f7814(void)

{
  return;
}



/* Entry: 1093f7824; end: 1093f786f;  */

void FUN_1093f7824(undefined8 *param_1,long param_2)

{
  undefined1 uStack_21;
  
  *param_1 = 0;
  param_1[1] = 0;
  FUN_1093f7bec(param_1,param_2 + 8,&uStack_21);
  return;
}



/* Entry: 1093f7870; end: 1093f7917;  */

void FUN_1093f7870(undefined8 *param_1,long param_2,undefined8 *param_3)

{
  float fVar1;
  undefined8 uVar2;
  undefined4 uStack_24;
  
  uVar2 = *param_3;
  if ((*(byte *)(param_2 + 0x20) & 1) == 0) {
    fVar1 = (float)((ulong)uVar2 >> 0x20);
    uStack_24 = 0;
    fVar1 = SQRT((float)uVar2 * (float)uVar2 + fVar1 * fVar1);
    FUN_1093f7cdc(param_2 + 8,&uStack_24);
    uVar2 = CONCAT44((float)((ulong)*param_3 >> 0x20) * fVar1,(float)*param_3 * fVar1);
  }
  *param_1 = uVar2;
  return;
}



/* Entry: 1093f7918; end: 1093f793f;  */

void FUN_1093f7918(float *param_1,long param_2,undefined8 *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  
  if ((*(byte *)(param_2 + 0x20) & 1) == 0) {
    fVar3 = (float)*param_3;
    fVar6 = (float)((ulong)*param_3 >> 0x20);
    fVar9 = SQRT(fVar3 * fVar3 + fVar6 * fVar6);
    if (1.1920929e-07 < ABS(fVar9)) {
      fVar1 = fVar9;
      _atanf();
      fVar2 = fVar1 * fVar1;
      fVar4 = fVar1 * fVar2;
      fVar7 = fVar2 * fVar4;
      fVar8 = fVar2 * fVar7;
      fVar5 = fVar9 * fVar9;
      fVar9 = (fVar4 * *(float *)(param_2 + 0xc) + fVar1 * *(float *)(param_2 + 8) +
               fVar7 * *(float *)(param_2 + 0x10) + fVar8 * *(float *)(param_2 + 0x14) +
              fVar2 * fVar8 * *(float *)(param_2 + 0x18)) / fVar9;
      fVar1 = (*(float *)(param_2 + 8) +
              (fVar4 * *(float *)(param_2 + 0x10) * 5.0 + fVar1 * *(float *)(param_2 + 0xc) * 3.0 +
               fVar7 * *(float *)(param_2 + 0x14) * 7.0 + fVar8 * *(float *)(param_2 + 0x18) * 9.0)
              * fVar1) / (fVar5 + fVar5 * fVar5) - fVar9 / fVar5;
      *param_1 = fVar9;
      param_1[1] = fVar9 * 0.0;
      param_1[2] = fVar9 * 0.0;
      param_1[3] = fVar9;
      fVar9 = fVar1 * fVar3;
      fVar1 = fVar1 * fVar6;
      *(ulong *)param_1 =
           CONCAT44((float)((ulong)*(undefined8 *)param_1 >> 0x20) + fVar6 * fVar9,
                    (float)*(undefined8 *)param_1 + fVar3 * fVar9);
      *(ulong *)(param_1 + 2) =
           CONCAT44((float)((ulong)*(undefined8 *)(param_1 + 2) >> 0x20) + fVar6 * fVar1,
                    (float)*(undefined8 *)(param_1 + 2) + fVar3 * fVar1);
      return;
    }
  }
  param_1[2] = 0.0;
  param_1[3] = 1.0;
  param_1[0] = 1.0;
  param_1[1] = 0.0;
  return;
}



/* Entry: 1093f7940; end: 1093f7977;  */

void FUN_1093f7940(long param_1,undefined8 *param_2)

{
  float fVar1;
  float fVar2;
  undefined4 uStack_14;
  
  uStack_14 = 0;
  fVar1 = (float)*param_2;
  fVar2 = (float)((ulong)*param_2 >> 0x20);
  FUN_1093f7cdc(SQRT(fVar1 * fVar1 + fVar2 * fVar2),param_1 + 8,&uStack_14);
  return;
}



/* Entry: 1093f7978; end: 1093f7a13;  */

undefined8 * FUN_1093f7978(undefined4 param_1,long *param_2,long *param_3)

{
  undefined8 *puVar1;
  undefined8 auStack_48 [2];
  undefined8 auStack_38 [2];
  undefined4 uStack_24;
  
  uStack_24 = param_1;
  (**(code **)(*param_3 + 0x18))(auStack_38,param_3);
  (**(code **)(*param_2 + 0x18))(auStack_48,param_2);
  puVar1 = auStack_38;
  FUN_1093f6abc(puVar1,auStack_48,&uStack_24);
  _free(auStack_48[0]);
  _free(auStack_38[0]);
  return puVar1;
}



/* Entry: 1093f7a14; end: 1093f7a1b;  */

undefined8 FUN_1093f7a14(void)

{
  return 1;
}



/* Entry: 1093f7a1c; end: 1093f7acb;  */

void FUN_1093f7a1c(long param_1,long *param_2)

{
  undefined8 *puVar1;
  long *plVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined4 uStack_38;
  
  puVar1 = (undefined8 *)0x28;
  __Znwm();
  puVar1[1] = 0;
  *puVar1 = 0;
  puVar1[3] = 0;
  puVar1[2] = 0;
  puVar1[4] = 0;
  *puVar1 = &PTR_FUN_110af5a18;
  uStack_48 = 0;
  uStack_40 = 0;
  uStack_38 = 0;
  FUN_1093f7b90(puVar1 + 1,&uStack_48);
  uVar3 = *(undefined8 *)(param_1 + 8);
  uVar4 = *(undefined8 *)(param_1 + 0x10);
  uVar5 = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((long)puVar1 + 0x1c) = *(undefined4 *)(param_1 + 0x1c);
  *(undefined1 *)(puVar1 + 4) = *(undefined1 *)(param_1 + 0x20);
  puVar1[1] = uVar3;
  puVar1[2] = uVar4;
  *(undefined4 *)(puVar1 + 3) = uVar5;
  plVar2 = (long *)*param_2;
  *param_2 = (long)puVar1;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 8))();
  }
  return;
}



/* Entry: 1093f7acc; end: 1093f7b8f;  */

void FUN_1093f7acc(long param_1,long *param_2)

{
  undefined8 *puVar1;
  long *plVar2;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined4 uStack_38;
  undefined1 uStack_34;
  
  puVar1 = (undefined8 *)0x38;
  __Znwm();
  puVar1[1] = 0;
  *puVar1 = 0;
  puVar1[3] = 0;
  puVar1[2] = 0;
  puVar1[5] = 0;
  puVar1[4] = 0;
  puVar1[6] = 0;
  *puVar1 = &PTR_DAT_110af5980;
  uStack_40 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_48 = 0;
  uStack_50 = 0;
  FUN_1093f61e0(puVar1 + 1,&uStack_60);
  FUN_1093f8260(&uStack_60,param_1 + 8);
  puVar1[2] = uStack_58;
  puVar1[1] = uStack_60;
  puVar1[4] = uStack_48;
  puVar1[3] = uStack_50;
  puVar1[5] = uStack_40;
  *(undefined4 *)(puVar1 + 6) = uStack_38;
  *(undefined1 *)((long)puVar1 + 0x34) = uStack_34;
  plVar2 = (long *)*param_2;
  *param_2 = (long)puVar1;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 8))();
  }
  return;
}



/* Entry: 1093f7b90; end: 1093f7beb;  */

void FUN_1093f7b90(undefined8 *param_1,undefined8 *param_2)

{
  float *pfVar1;
  bool bVar2;
  long lVar3;
  
  lVar3 = 0;
  param_1[1] = 0;
  param_1[2] = 0xa00000000;
  *param_1 = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  *(undefined4 *)(param_1 + 2) = *(undefined4 *)(param_2 + 2);
  do {
    pfVar1 = (float *)((long)param_2 + lVar3);
    bVar2 = lVar3 != 0x10;
    lVar3 = lVar3 + 4;
  } while (ABS(*pfVar1) <= 1.1920929e-07 && bVar2);
  *(bool *)(param_1 + 3) = ABS(*pfVar1) <= 1.1920929e-07;
  return;
}



/* Entry: 1093f7bec; end: 1093f7cdb;  */

ulong FUN_1093f7bec(float param_1,ulong *param_2,long param_3)

{
  uint uVar1;
  undefined1 auVar2 [16];
  undefined8 uVar3;
  ulong uVar4;
  float *pfVar5;
  float *pfVar6;
  float *pfVar7;
  float **ppfVar8;
  float fVar9;
  ulong uVar10;
  long lVar11;
  ulong uVar12;
  float *pfVar13;
  ulong uVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  undefined4 uVar17;
  float fVar18;
  undefined4 uVar19;
  float fVar21;
  float fVar22;
  undefined1 auVar20 [16];
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  undefined1 uStack_b1;
  float *pfStack_b0;
  undefined8 uStack_a8;
  float *pfStack_98;
  undefined8 uStack_90;
  undefined8 uStack_80;
  float afStack_70 [2];
  float *pfStack_68;
  long lStack_58;
  
  uVar4 = *param_2;
  if (param_2[1] != 5) {
    _free();
    uVar4 = 0x14;
    _malloc();
    if (uVar4 == 0) {
      pfVar5 = (float *)0x8;
      ___cxa_allocate_exception();
      __ZNSt9bad_allocC1Ev();
      pfVar7 = (float *)PTR___ZTISt9bad_alloc_110346a68;
      ppfVar8 = (float **)PTR___ZNSt9bad_allocD1Ev_110346998;
      ___cxa_throw();
      lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
      fVar18 = 1.0;
      if (1e-05 < param_1) {
        pfStack_b0 = pfVar5 + 1;
        uStack_a8 = 4;
        uStack_90 = 1;
        uStack_80 = 5;
        pfVar6 = afStack_70;
        ppfVar8 = &pfStack_b0;
        pfStack_98 = pfVar5;
        pfStack_68 = pfStack_b0;
        FUN_1093f7e60(pfVar6,&uStack_b1);
        if (fVar18 <= 1.1920929e-07) {
          fVar18 = param_1 / *pfVar5;
          *pfVar7 = fVar18;
        }
        else {
          fVar18 = param_1;
          _atanf();
          fVar18 = fVar18 / *pfVar5;
          *pfVar7 = fVar18;
          fVar9 = pfVar5[5];
          if (fVar9 != 0.0) {
            do {
              fVar9 = (float)((int)fVar9 + -1);
              fVar27 = fVar18 * fVar18;
              fVar28 = fVar18 * fVar27;
              fVar29 = fVar27 * fVar28;
              fVar30 = fVar27 * fVar29;
              fVar27 = ((fVar28 * pfVar5[1] + fVar18 * *pfVar5 + fVar29 * pfVar5[2] +
                         fVar30 * pfVar5[3] + fVar27 * fVar30 * pfVar5[4]) - param_1) /
                       (*pfVar5 +
                       (fVar28 * pfVar5[2] * 5.0 + fVar18 * pfVar5[1] * 3.0 +
                        fVar29 * pfVar5[3] * 7.0 + fVar30 * pfVar5[4] * 9.0) * fVar18);
              fVar18 = fVar18 - fVar27;
              *pfVar7 = fVar18;
            } while (1e-10 <= ABS(fVar27) && fVar9 != 0.0);
          }
        }
        pfVar5 = pfVar6;
        _tanf();
        fVar18 = fVar18 / param_1;
      }
      if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_58) {
        ___stack_chk_fail(fVar18);
        __Unwind_Resume();
        pfVar13 = ppfVar8[1];
        pfVar7 = (float *)((long)pfVar13 + 3);
        pfVar6 = (float *)((long)pfVar13 + 7);
        if (-1 < (long)pfVar13) {
          pfVar7 = pfVar13;
          pfVar6 = pfVar13;
        }
        pfVar5 = *(float **)(pfVar5 + 2);
        if ((long)pfVar13 + 3U < 7) {
          fVar27 = *pfVar5 * *pfVar5;
          fVar18 = 0.0;
          if (1 < (long)pfVar13) {
            lVar11 = (long)pfVar13 + -1;
            do {
              pfVar5 = pfVar5 + 1;
              fVar27 = fVar27 + *pfVar5 * *pfVar5;
              fVar18 = 0.0;
              lVar11 = lVar11 + -1;
            } while (lVar11 != 0);
          }
        }
        else {
          fVar27 = (float)*(undefined8 *)(pfVar5 + 2);
          fVar28 = (float)((ulong)*(undefined8 *)(pfVar5 + 2) >> 0x20);
          fVar18 = (float)*(undefined8 *)pfVar5;
          fVar9 = (float)((ulong)*(undefined8 *)pfVar5 >> 0x20);
          fVar18 = fVar18 * fVar18;
          fVar9 = fVar9 * fVar9;
          fVar27 = fVar27 * fVar27;
          fVar28 = fVar28 * fVar28;
          if (7 < (long)pfVar13) {
            uVar4 = (ulong)pfVar6 & 0xfffffffffffffff8;
            fVar29 = pfVar5[4] * pfVar5[4];
            fVar30 = pfVar5[5] * pfVar5[5];
            fVar21 = pfVar5[6] * pfVar5[6];
            fVar22 = pfVar5[7] * pfVar5[7];
            if ((float *)0xf < pfVar13) {
              pfVar6 = pfVar5 + 0xc;
              lVar11 = 8;
              do {
                fVar23 = (float)*(undefined8 *)(pfVar6 + -4);
                fVar24 = (float)((ulong)*(undefined8 *)(pfVar6 + -4) >> 0x20);
                fVar25 = (float)*(undefined8 *)(pfVar6 + -2);
                fVar26 = (float)((ulong)*(undefined8 *)(pfVar6 + -2) >> 0x20);
                fVar18 = fVar18 + fVar23 * fVar23;
                fVar9 = fVar9 + fVar24 * fVar24;
                fVar27 = fVar27 + fVar25 * fVar25;
                fVar28 = fVar28 + fVar26 * fVar26;
                fVar23 = (float)*(undefined8 *)pfVar6;
                fVar24 = (float)((ulong)*(undefined8 *)pfVar6 >> 0x20);
                fVar25 = (float)*(undefined8 *)(pfVar6 + 2);
                fVar26 = (float)((ulong)*(undefined8 *)(pfVar6 + 2) >> 0x20);
                fVar29 = fVar29 + fVar23 * fVar23;
                fVar30 = fVar30 + fVar24 * fVar24;
                fVar21 = fVar21 + fVar25 * fVar25;
                fVar22 = fVar22 + fVar26 * fVar26;
                lVar11 = lVar11 + 8;
                pfVar6 = pfVar6 + 8;
              } while (lVar11 < (long)uVar4);
            }
            fVar18 = fVar29 + fVar18;
            fVar9 = fVar30 + fVar9;
            fVar27 = fVar21 + fVar27;
            fVar28 = fVar22 + fVar28;
            if ((long)uVar4 < (long)((ulong)pfVar7 & 0xfffffffffffffffc)) {
              pfVar6 = pfVar5 + uVar4;
              fVar18 = fVar18 + *pfVar6 * *pfVar6;
              fVar9 = fVar9 + pfVar6[1] * pfVar6[1];
              fVar27 = fVar27 + pfVar6[2] * pfVar6[2];
              fVar28 = fVar28 + pfVar6[3] * pfVar6[3];
            }
          }
          auVar20._4_4_ = fVar9;
          auVar20._0_4_ = fVar18;
          auVar20._8_4_ = fVar27;
          auVar20._12_4_ = fVar28;
          auVar2._4_4_ = fVar9;
          auVar2._0_4_ = fVar18;
          auVar2._8_4_ = fVar27;
          auVar2._12_4_ = fVar28;
          auVar20 = NEON_ext(auVar20,auVar2,8,1);
          fVar18 = fVar18 + auVar20._0_4_;
          fVar9 = fVar9 + auVar20._4_4_;
          fVar27 = fVar18 + fVar9;
          fVar18 = fVar18 + fVar9;
          lVar11 = (long)pfVar13 % 4;
          if (lVar11 != 0 &&
              lVar11 < 0 == SBORROW8((long)pfVar13,(ulong)pfVar7 & 0xfffffffffffffffc)) {
            pfVar7 = pfVar5 + ((long)pfVar7 >> 2) * 4;
            do {
              fVar27 = fVar27 + *pfVar7 * *pfVar7;
              fVar18 = 0.0;
              lVar11 = lVar11 + -1;
              pfVar7 = pfVar7 + 1;
            } while (lVar11 != 0);
          }
        }
        return CONCAT44(fVar18,fVar27);
      }
      return (ulong)(uint)fVar18;
    }
    *param_2 = uVar4;
    param_2[1] = 5;
  }
  uVar10 = 5;
  if ((uVar4 & 3) == 0) {
    uVar1 = -((uint)uVar4 >> 2);
    uVar12 = (ulong)uVar1 & 3;
    uVar10 = (ulong)(5 - (int)uVar12) & 4 | (ulong)uVar1 & 3;
    if ((uVar1 & 3) != 0) goto LAB_1093f7c50;
  }
  else {
    uVar12 = 5;
LAB_1093f7c50:
    uVar14 = 0;
    do {
      uVar17 = *(undefined4 *)(param_3 + uVar14 * 4);
      uVar19 = 0;
      *(undefined4 *)(uVar4 + uVar14 * 4) = uVar17;
      uVar14 = uVar14 + 1;
    } while (uVar12 != uVar14);
    if (1 < uVar12) goto LAB_1093f7c90;
    uVar12 = 1;
  }
  puVar15 = (undefined8 *)(param_3 + uVar12 * 4);
  puVar16 = (undefined8 *)(uVar4 + uVar12 * 4);
  do {
    uVar3 = *puVar15;
    uVar17 = (undefined4)uVar3;
    uVar19 = (undefined4)((ulong)uVar3 >> 0x20);
    puVar16[1] = puVar15[1];
    *puVar16 = uVar3;
    uVar12 = uVar12 + 4;
    puVar15 = puVar15 + 2;
    puVar16 = puVar16 + 2;
  } while (uVar12 < uVar10);
LAB_1093f7c90:
  if (uVar10 < 5) {
    lVar11 = uVar10 << 2;
    do {
      uVar17 = *(undefined4 *)(param_3 + lVar11);
      uVar19 = 0;
      *(undefined4 *)(uVar4 + lVar11) = uVar17;
      lVar11 = lVar11 + 4;
    } while (lVar11 != 0x14);
  }
  return CONCAT44(uVar19,uVar17);
}



/* Entry: 1093f7cdc; end: 1093f7e5f;  */

ulong FUN_1093f7cdc(float param_1,float *param_2,float *param_3,float **param_4)

{
  undefined1 auVar1 [16];
  float *pfVar2;
  float fVar3;
  float *pfVar4;
  float *pfVar5;
  long lVar6;
  ulong uVar7;
  float *pfVar8;
  float fVar9;
  float fVar11;
  float fVar12;
  undefined1 auVar10 [16];
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  undefined1 uStack_91;
  float *pfStack_90;
  undefined8 uStack_88;
  float *pfStack_78;
  undefined8 uStack_70;
  undefined8 uStack_60;
  float afStack_50 [2];
  float *pfStack_48;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  fVar9 = 1.0;
  if (1e-05 < param_1) {
    pfStack_90 = param_2 + 1;
    uStack_88 = 4;
    uStack_70 = 1;
    uStack_60 = 5;
    pfVar2 = afStack_50;
    param_4 = &pfStack_90;
    pfStack_78 = param_2;
    pfStack_48 = pfStack_90;
    FUN_1093f7e60(pfVar2,&uStack_91);
    if (fVar9 <= 1.1920929e-07) {
      fVar9 = param_1 / *param_2;
      *param_3 = fVar9;
    }
    else {
      fVar9 = param_1;
      _atanf();
      fVar9 = fVar9 / *param_2;
      *param_3 = fVar9;
      fVar3 = param_2[5];
      if (fVar3 != 0.0) {
        do {
          fVar3 = (float)((int)fVar3 + -1);
          fVar17 = fVar9 * fVar9;
          fVar18 = fVar9 * fVar17;
          fVar19 = fVar17 * fVar18;
          fVar20 = fVar17 * fVar19;
          fVar17 = ((fVar18 * param_2[1] + fVar9 * *param_2 + fVar19 * param_2[2] +
                     fVar20 * param_2[3] + fVar17 * fVar20 * param_2[4]) - param_1) /
                   (*param_2 +
                   (fVar18 * param_2[2] * 5.0 + fVar9 * param_2[1] * 3.0 + fVar19 * param_2[3] * 7.0
                   + fVar20 * param_2[4] * 9.0) * fVar9);
          fVar9 = fVar9 - fVar17;
          *param_3 = fVar9;
        } while (1e-10 <= ABS(fVar17) && fVar3 != 0.0);
      }
    }
    param_2 = pfVar2;
    _tanf();
    fVar9 = fVar9 / param_1;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_38) {
    ___stack_chk_fail(fVar9);
    __Unwind_Resume();
    pfVar5 = param_4[1];
    pfVar2 = (float *)((long)pfVar5 + 3);
    pfVar8 = (float *)((long)pfVar5 + 7);
    if (-1 < (long)pfVar5) {
      pfVar2 = pfVar5;
      pfVar8 = pfVar5;
    }
    pfVar4 = *(float **)(param_2 + 2);
    if ((long)pfVar5 + 3U < 7) {
      fVar17 = *pfVar4 * *pfVar4;
      fVar9 = 0.0;
      if (1 < (long)pfVar5) {
        lVar6 = (long)pfVar5 + -1;
        do {
          pfVar4 = pfVar4 + 1;
          fVar17 = fVar17 + *pfVar4 * *pfVar4;
          fVar9 = 0.0;
          lVar6 = lVar6 + -1;
        } while (lVar6 != 0);
      }
    }
    else {
      fVar17 = (float)*(undefined8 *)(pfVar4 + 2);
      fVar18 = (float)((ulong)*(undefined8 *)(pfVar4 + 2) >> 0x20);
      fVar9 = (float)*(undefined8 *)pfVar4;
      fVar3 = (float)((ulong)*(undefined8 *)pfVar4 >> 0x20);
      fVar9 = fVar9 * fVar9;
      fVar3 = fVar3 * fVar3;
      fVar17 = fVar17 * fVar17;
      fVar18 = fVar18 * fVar18;
      if (7 < (long)pfVar5) {
        uVar7 = (ulong)pfVar8 & 0xfffffffffffffff8;
        fVar19 = pfVar4[4] * pfVar4[4];
        fVar20 = pfVar4[5] * pfVar4[5];
        fVar11 = pfVar4[6] * pfVar4[6];
        fVar12 = pfVar4[7] * pfVar4[7];
        if ((float *)0xf < pfVar5) {
          pfVar8 = pfVar4 + 0xc;
          lVar6 = 8;
          do {
            fVar13 = (float)*(undefined8 *)(pfVar8 + -4);
            fVar14 = (float)((ulong)*(undefined8 *)(pfVar8 + -4) >> 0x20);
            fVar15 = (float)*(undefined8 *)(pfVar8 + -2);
            fVar16 = (float)((ulong)*(undefined8 *)(pfVar8 + -2) >> 0x20);
            fVar9 = fVar9 + fVar13 * fVar13;
            fVar3 = fVar3 + fVar14 * fVar14;
            fVar17 = fVar17 + fVar15 * fVar15;
            fVar18 = fVar18 + fVar16 * fVar16;
            fVar13 = (float)*(undefined8 *)pfVar8;
            fVar14 = (float)((ulong)*(undefined8 *)pfVar8 >> 0x20);
            fVar15 = (float)*(undefined8 *)(pfVar8 + 2);
            fVar16 = (float)((ulong)*(undefined8 *)(pfVar8 + 2) >> 0x20);
            fVar19 = fVar19 + fVar13 * fVar13;
            fVar20 = fVar20 + fVar14 * fVar14;
            fVar11 = fVar11 + fVar15 * fVar15;
            fVar12 = fVar12 + fVar16 * fVar16;
            lVar6 = lVar6 + 8;
            pfVar8 = pfVar8 + 8;
          } while (lVar6 < (long)uVar7);
        }
        fVar9 = fVar19 + fVar9;
        fVar3 = fVar20 + fVar3;
        fVar17 = fVar11 + fVar17;
        fVar18 = fVar12 + fVar18;
        if ((long)uVar7 < (long)((ulong)pfVar2 & 0xfffffffffffffffc)) {
          pfVar8 = pfVar4 + uVar7;
          fVar9 = fVar9 + *pfVar8 * *pfVar8;
          fVar3 = fVar3 + pfVar8[1] * pfVar8[1];
          fVar17 = fVar17 + pfVar8[2] * pfVar8[2];
          fVar18 = fVar18 + pfVar8[3] * pfVar8[3];
        }
      }
      auVar10._4_4_ = fVar3;
      auVar10._0_4_ = fVar9;
      auVar10._8_4_ = fVar17;
      auVar10._12_4_ = fVar18;
      auVar1._4_4_ = fVar3;
      auVar1._0_4_ = fVar9;
      auVar1._8_4_ = fVar17;
      auVar1._12_4_ = fVar18;
      auVar10 = NEON_ext(auVar10,auVar1,8,1);
      fVar9 = fVar9 + auVar10._0_4_;
      fVar3 = fVar3 + auVar10._4_4_;
      fVar17 = fVar9 + fVar3;
      fVar9 = fVar9 + fVar3;
      lVar6 = (long)pfVar5 % 4;
      if (lVar6 != 0 && lVar6 < 0 == SBORROW8((long)pfVar5,(ulong)pfVar2 & 0xfffffffffffffffc)) {
        pfVar2 = pfVar4 + ((long)pfVar2 >> 2) * 4;
        do {
          fVar17 = fVar17 + *pfVar2 * *pfVar2;
          fVar9 = 0.0;
          lVar6 = lVar6 + -1;
          pfVar2 = pfVar2 + 1;
        } while (lVar6 != 0);
      }
    }
    return CONCAT44(fVar9,fVar17);
  }
  return (ulong)(uint)fVar9;
}



/* Entry: 1093f7e60; end: 1093f7f53;  */

undefined8 FUN_1093f7e60(long param_1,undefined8 param_2,long param_3)

{
  ulong uVar1;
  undefined1 auVar2 [16];
  float *pfVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  float *pfVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar14;
  float fVar15;
  float fVar16;
  undefined1 auVar13 [16];
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  
  uVar4 = *(ulong *)(param_3 + 8);
  uVar1 = uVar4 + 3;
  uVar6 = uVar4 + 7;
  if (-1 < (long)uVar4) {
    uVar1 = uVar4;
    uVar6 = uVar4;
  }
  pfVar3 = *(float **)(param_1 + 8);
  if (uVar4 + 3 < 7) {
    fVar8 = *pfVar3 * *pfVar3;
    fVar9 = 0.0;
    if (1 < (long)uVar4) {
      lVar5 = uVar4 - 1;
      do {
        pfVar3 = pfVar3 + 1;
        fVar8 = fVar8 + *pfVar3 * *pfVar3;
        fVar9 = 0.0;
        lVar5 = lVar5 + -1;
      } while (lVar5 != 0);
    }
  }
  else {
    fVar8 = (float)*(undefined8 *)(pfVar3 + 2);
    fVar11 = (float)((ulong)*(undefined8 *)(pfVar3 + 2) >> 0x20);
    fVar9 = (float)*(undefined8 *)pfVar3;
    fVar10 = (float)((ulong)*(undefined8 *)pfVar3 >> 0x20);
    fVar9 = fVar9 * fVar9;
    fVar10 = fVar10 * fVar10;
    fVar8 = fVar8 * fVar8;
    fVar11 = fVar11 * fVar11;
    if (7 < (long)uVar4) {
      uVar6 = uVar6 & 0xfffffffffffffff8;
      fVar12 = pfVar3[4] * pfVar3[4];
      fVar14 = pfVar3[5] * pfVar3[5];
      fVar15 = pfVar3[6] * pfVar3[6];
      fVar16 = pfVar3[7] * pfVar3[7];
      if (0xf < uVar4) {
        pfVar7 = pfVar3 + 0xc;
        lVar5 = 8;
        do {
          fVar17 = (float)*(undefined8 *)(pfVar7 + -4);
          fVar18 = (float)((ulong)*(undefined8 *)(pfVar7 + -4) >> 0x20);
          fVar19 = (float)*(undefined8 *)(pfVar7 + -2);
          fVar20 = (float)((ulong)*(undefined8 *)(pfVar7 + -2) >> 0x20);
          fVar9 = fVar9 + fVar17 * fVar17;
          fVar10 = fVar10 + fVar18 * fVar18;
          fVar8 = fVar8 + fVar19 * fVar19;
          fVar11 = fVar11 + fVar20 * fVar20;
          fVar17 = (float)*(undefined8 *)pfVar7;
          fVar18 = (float)((ulong)*(undefined8 *)pfVar7 >> 0x20);
          fVar19 = (float)*(undefined8 *)(pfVar7 + 2);
          fVar20 = (float)((ulong)*(undefined8 *)(pfVar7 + 2) >> 0x20);
          fVar12 = fVar12 + fVar17 * fVar17;
          fVar14 = fVar14 + fVar18 * fVar18;
          fVar15 = fVar15 + fVar19 * fVar19;
          fVar16 = fVar16 + fVar20 * fVar20;
          lVar5 = lVar5 + 8;
          pfVar7 = pfVar7 + 8;
        } while (lVar5 < (long)uVar6);
      }
      fVar9 = fVar12 + fVar9;
      fVar10 = fVar14 + fVar10;
      fVar8 = fVar15 + fVar8;
      fVar11 = fVar16 + fVar11;
      if ((long)uVar6 < (long)(uVar1 & 0xfffffffffffffffc)) {
        pfVar7 = pfVar3 + uVar6;
        fVar9 = fVar9 + *pfVar7 * *pfVar7;
        fVar10 = fVar10 + pfVar7[1] * pfVar7[1];
        fVar8 = fVar8 + pfVar7[2] * pfVar7[2];
        fVar11 = fVar11 + pfVar7[3] * pfVar7[3];
      }
    }
    auVar13._4_4_ = fVar10;
    auVar13._0_4_ = fVar9;
    auVar13._8_4_ = fVar8;
    auVar13._12_4_ = fVar11;
    auVar2._4_4_ = fVar10;
    auVar2._0_4_ = fVar9;
    auVar2._8_4_ = fVar8;
    auVar2._12_4_ = fVar11;
    auVar13 = NEON_ext(auVar13,auVar2,8,1);
    fVar9 = fVar9 + auVar13._0_4_;
    fVar10 = fVar10 + auVar13._4_4_;
    fVar8 = fVar9 + fVar10;
    fVar9 = fVar9 + fVar10;
    lVar5 = (long)uVar4 % 4;
    if (lVar5 != 0 && lVar5 < 0 == SBORROW8(uVar4,uVar1 & 0xfffffffffffffffc)) {
      pfVar3 = pfVar3 + ((long)uVar1 >> 2) * 4;
      do {
        fVar8 = fVar8 + *pfVar3 * *pfVar3;
        fVar9 = 0.0;
        lVar5 = lVar5 + -1;
        pfVar3 = pfVar3 + 1;
      } while (lVar5 != 0);
    }
  }
  return CONCAT44(fVar9,fVar8);
}



/* Entry: 1093f7f54; end: 1093f80fb;  */

float FUN_1093f7f54(undefined8 param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  fVar1 = 1.0;
  fVar5 = (float)param_1;
  if (1e-05 < fVar5) {
    _atanf(param_1);
    fVar1 = (float)param_1;
    fVar2 = fVar1 * fVar1;
    fVar3 = fVar2 * fVar1 * fVar2;
    fVar4 = fVar2 * fVar3;
    fVar1 = (fVar1 * fVar2 * param_2[1] + fVar1 * *param_2 + fVar3 * param_2[2] + fVar4 * param_2[3]
            + fVar2 * fVar4 * param_2[4]) / fVar5;
  }
  return fVar1;
}



/* Entry: 1093f80fc; end: 1093f825f;  */

void FUN_1093f80fc(float *param_1,undefined8 *param_2,undefined8 *param_3)

{
  float fVar1;
  float fVar2;
  undefined8 uVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fStack_54;
  
  if (((*(byte *)(param_2 + 3) & 1) != 0) ||
     (fVar6 = (float)*param_3, fVar1 = (float)((ulong)*param_3 >> 0x20),
     fVar6 = SQRT(fVar6 * fVar6 + fVar1 * fVar1), ABS(fVar6) <= 1.1920929e-07)) {
    param_1[2] = 0.0;
    param_1[3] = 1.0;
    param_1[0] = 1.0;
    param_1[1] = 0.0;
  }
  else {
    fStack_54 = 0.0;
    fVar1 = fVar6;
    FUN_1093f7cdc(param_2,&fStack_54);
    fVar2 = fStack_54 * fStack_54;
    fVar5 = fVar2 * fVar2 * fVar2;
    uVar3 = NEON_fmov(0x3f800000,4);
    fVar4 = (float)uVar3;
    ___sincosf_stret();
    fVar6 = (1.0 / (fVar6 * fVar4 * fVar6 * fVar4)) *
            (1.0 / ((float)*param_2 * (float)uVar3 + (float)param_2[1] * fVar2 * fVar2 * 5.0 +
                    (float)((ulong)*param_2 >> 0x20) * fVar2 * 3.0 +
                    (float)((ulong)param_2[1] >> 0x20) * fVar5 * 7.0 +
                   *(float *)(param_2 + 2) * fVar2 * fVar5 * 9.0) - (fStack_54 * fVar4) / fVar6);
    *param_1 = fVar1;
    param_1[1] = fVar1 * 0.0;
    param_1[2] = fVar1 * 0.0;
    param_1[3] = fVar1;
    fVar1 = (float)*param_3;
    fVar2 = fVar6 * fVar1;
    fVar4 = (float)((ulong)*param_3 >> 0x20);
    fVar6 = fVar6 * fVar4;
    *(ulong *)param_1 =
         CONCAT44((float)((ulong)*(undefined8 *)param_1 >> 0x20) + fVar4 * fVar2,
                  (float)*(undefined8 *)param_1 + fVar1 * fVar2);
    *(ulong *)(param_1 + 2) =
         CONCAT44((float)((ulong)*(undefined8 *)(param_1 + 2) >> 0x20) + fVar4 * fVar6,
                  (float)*(undefined8 *)(param_1 + 2) + fVar1 * fVar6);
  }
  return;
}



/* Entry: 1093f8260; end: 1093f82a3;  */

void FUN_1093f8260(undefined8 param_1,undefined8 *param_2)

{
  double dStack_40;
  double dStack_38;
  double dStack_30;
  double dStack_28;
  double dStack_20;
  
  dStack_40 = (double)(float)*param_2;
  dStack_38 = (double)(float)((ulong)*param_2 >> 0x20);
  dStack_30 = (double)(float)param_2[1];
  dStack_28 = (double)(float)((ulong)param_2[1] >> 0x20);
  dStack_20 = (double)*(float *)(param_2 + 2);
  FUN_1093f82a4(param_1,&dStack_40,*(undefined4 *)((long)param_2 + 0x14));
  return;
}



/* Entry: 1093f82a4; end: 1093f8387;  */

void FUN_1093f82a4(undefined8 *param_1,undefined8 *param_2,undefined4 param_3)

{
  double *pdVar1;
  bool bVar2;
  long lVar3;
  undefined8 uVar4;
  
  lVar3 = 0;
  param_1[4] = 0;
  param_1[1] = 0;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 5) = 10;
  *(undefined1 *)((long)param_1 + 0x2c) = 0;
  uVar4 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar4;
  uVar4 = param_2[2];
  param_1[3] = param_2[3];
  param_1[2] = uVar4;
  param_1[4] = param_2[4];
  do {
    pdVar1 = (double *)((long)param_2 + lVar3);
    if (2.220446049250313e-16 < ABS(*pdVar1)) break;
    bVar2 = lVar3 != 0x20;
    lVar3 = lVar3 + 8;
  } while (bVar2);
  *(bool *)((long)param_1 + 0x2c) = ABS(*pdVar1) <= 2.220446049250313e-16;
  *(undefined4 *)(param_1 + 5) = param_3;
  return;
}



/* Entry: 1093f8388; end: 1093f83d3;  */

void FUN_1093f8388(undefined8 *param_1,long param_2)

{
  undefined1 uStack_21;
  
  *param_1 = 0;
  param_1[1] = 0;
  func_0x0001093f8704(param_1,param_2 + 8,&uStack_21);
  return;
}



/* Entry: 1093f83d4; end: 1093f8493;  */

void FUN_1093f83d4(double *param_1,long param_2,double *param_3)

{
  double dVar1;
  double dVar2;
  undefined8 uStack_28;
  
  if (*(char *)(param_2 + 0x4c) == '\x01') {
    dVar1 = param_3[1];
    dVar2 = *param_3;
  }
  else {
    dVar1 = SQRT(*param_3 * *param_3 + param_3[1] * param_3[1]);
    uStack_28 = 0;
    FUN_1093f87e0(param_2 + 8,&uStack_28);
    dVar2 = *param_3 * dVar1;
    dVar1 = param_3[1] * dVar1;
  }
  param_1[1] = dVar1;
  *param_1 = dVar2;
  return;
}



/* Entry: 1093f8494; end: 1093f84bb;  */

void FUN_1093f8494(double *param_1,long param_2,double *param_3)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  
  if ((*(byte *)(param_2 + 0x4c) & 1) == 0) {
    dVar6 = param_3[1];
    dVar3 = *param_3;
    dVar12 = SQRT(dVar3 * dVar3 + dVar6 * dVar6);
    if (2.220446049250313e-16 < ABS(dVar12)) {
      dVar1 = dVar12;
      _atan();
      dVar2 = dVar1 * dVar1;
      dVar4 = dVar1 * dVar2;
      dVar7 = dVar2 * dVar4;
      dVar8 = dVar2 * dVar7;
      dVar9 = dVar2 * dVar8;
      dVar10 = dVar2 * dVar9;
      dVar11 = dVar2 * dVar10;
      dVar5 = dVar12 * dVar12;
      dVar12 = (dVar4 * *(double *)(param_2 + 0x10) + dVar1 * *(double *)(param_2 + 8) +
                dVar7 * *(double *)(param_2 + 0x18) + dVar8 * *(double *)(param_2 + 0x20) +
                dVar9 * *(double *)(param_2 + 0x28) + dVar10 * *(double *)(param_2 + 0x30) +
                dVar11 * *(double *)(param_2 + 0x38) + dVar2 * dVar11 * *(double *)(param_2 + 0x40))
               / dVar12;
      dVar1 = (*(double *)(param_2 + 8) +
              (dVar4 * *(double *)(param_2 + 0x18) * 5.0 + dVar1 * *(double *)(param_2 + 0x10) * 3.0
               + dVar7 * *(double *)(param_2 + 0x20) * 7.0 +
               dVar8 * *(double *)(param_2 + 0x28) * 9.0 +
               dVar9 * *(double *)(param_2 + 0x30) * 11.0 +
               dVar10 * *(double *)(param_2 + 0x38) * 13.0 +
              dVar11 * *(double *)(param_2 + 0x40) * 15.0) * dVar1) / (dVar5 + dVar5 * dVar5) -
              dVar12 / dVar5;
      *param_1 = dVar12;
      param_1[1] = dVar12 * 0.0;
      param_1[2] = dVar12 * 0.0;
      param_1[3] = dVar12;
      dVar12 = dVar1 * dVar3;
      dVar1 = dVar1 * dVar6;
      param_1[1] = param_1[1] + dVar6 * dVar12;
      *param_1 = *param_1 + dVar3 * dVar12;
      param_1[3] = param_1[3] + dVar6 * dVar1;
      param_1[2] = param_1[2] + dVar3 * dVar1;
      return;
    }
  }
  *param_1 = 1.0;
  param_1[1] = 0.0;
  param_1[2] = 0.0;
  param_1[3] = 1.0;
  return;
}



/* Entry: 1093f84bc; end: 1093f84f3;  */

void FUN_1093f84bc(long param_1,double *param_2)

{
  undefined8 uStack_18;
  
  uStack_18 = 0;
  FUN_1093f87e0(SQRT(*param_2 * *param_2 + param_2[1] * param_2[1]),param_1 + 8,&uStack_18);
  return;
}



/* Entry: 1093f84f4; end: 1093f858f;  */

undefined8 * FUN_1093f84f4(undefined8 param_1,long *param_2,long *param_3)

{
  undefined8 *puVar1;
  undefined8 auStack_48 [2];
  undefined8 auStack_38 [2];
  undefined8 uStack_28;
  
  uStack_28 = param_1;
  (**(code **)(*param_3 + 0x18))(auStack_38,param_3);
  (**(code **)(*param_2 + 0x18))(auStack_48,param_2);
  puVar1 = auStack_38;
  FUN_1093f6610(puVar1,auStack_48,&uStack_28);
  _free(auStack_48[0]);
  _free(auStack_38[0]);
  return puVar1;
}



/* Entry: 1093f8590; end: 1093f8597;  */

undefined8 FUN_1093f8590(void)

{
  return 1;
}



/* Entry: 1093f8598; end: 1093f8677;  */

void FUN_1093f8598(long param_1,long *param_2)

{
  float *pfVar1;
  bool bVar2;
  undefined8 *puVar3;
  long *plVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined4 uStack_40;
  undefined1 uStack_3c;
  
  puVar3 = (undefined8 *)0x30;
  __Znwm();
  lVar5 = 0;
  puVar3[4] = 0;
  puVar6 = puVar3 + 5;
  *puVar6 = 0;
  *puVar3 = &PTR_FUN_110af5b48;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_48 = 0;
  uStack_50 = 0;
  *(undefined4 *)puVar6 = 10;
  puVar3[2] = 0;
  puVar3[1] = 0;
  puVar3[4] = 0;
  puVar3[3] = 0;
  do {
    pfVar1 = (float *)((long)&uStack_60 + lVar5);
    bVar2 = lVar5 != 0x1c;
    lVar5 = lVar5 + 4;
  } while (ABS(*pfVar1) <= 1.1920929e-07 && bVar2);
  *(bool *)((long)puVar3 + 0x2c) = ABS(*pfVar1) <= 1.1920929e-07;
  FUN_1093f8e00(&uStack_60,param_1 + 8);
  puVar3[2] = uStack_58;
  puVar3[1] = uStack_60;
  puVar3[4] = uStack_48;
  puVar3[3] = uStack_50;
  *(undefined4 *)puVar6 = uStack_40;
  *(undefined1 *)((long)puVar3 + 0x2c) = uStack_3c;
  plVar4 = (long *)*param_2;
  *param_2 = (long)puVar3;
  if (plVar4 != (long *)0x0) {
    (**(code **)(*plVar4 + 8))();
  }
  return;
}



/* Entry: 1093f8678; end: 1093f87df;  */

void FUN_1093f8678(long param_1,long *param_2)

{
  undefined8 *puVar1;
  long *plVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  
  puVar1 = (undefined8 *)0x50;
  __Znwm();
  puVar1[9] = 0;
  *puVar1 = &PTR_DAT_110af5ab0;
  uVar4 = *(undefined8 *)(param_1 + 0x10);
  uVar3 = *(undefined8 *)(param_1 + 8);
  uVar6 = *(undefined8 *)(param_1 + 0x20);
  uVar5 = *(undefined8 *)(param_1 + 0x18);
  uVar8 = *(undefined8 *)(param_1 + 0x30);
  uVar7 = *(undefined8 *)(param_1 + 0x28);
  uVar10 = *(undefined8 *)(param_1 + 0x40);
  uVar9 = *(undefined8 *)(param_1 + 0x38);
  *(undefined1 *)((long)puVar1 + 0x4c) = *(undefined1 *)(param_1 + 0x4c);
  *(undefined4 *)(puVar1 + 9) = *(undefined4 *)(param_1 + 0x48);
  puVar1[2] = uVar4;
  puVar1[1] = uVar3;
  puVar1[4] = uVar6;
  puVar1[3] = uVar5;
  puVar1[6] = uVar8;
  puVar1[5] = uVar7;
  puVar1[8] = uVar10;
  puVar1[7] = uVar9;
  plVar2 = (long *)*param_2;
  *param_2 = (long)puVar1;
  if (plVar2 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001093f86f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar2 + 8))();
    return;
  }
  return;
}



/* Entry: 1093f87e0; end: 1093f89a3;  */

double FUN_1093f87e0(double param_1,double *param_2,double *param_3,double **param_4)

{
  double *pdVar1;
  int iVar2;
  double *pdVar3;
  double *pdVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  undefined1 uStack_91;
  double *pdStack_90;
  undefined8 uStack_88;
  double *pdStack_78;
  undefined8 uStack_70;
  undefined8 uStack_60;
  double dStack_50;
  double *pdStack_48;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  dVar8 = 1.0;
  if (1e-05 < param_1) {
    pdStack_90 = param_2 + 1;
    uStack_88 = 7;
    uStack_70 = 1;
    uStack_60 = 8;
    pdVar1 = &dStack_50;
    param_4 = &pdStack_90;
    pdStack_78 = param_2;
    pdStack_48 = pdStack_90;
    FUN_1093f89a4(pdVar1,&uStack_91);
    if (dVar8 <= 2.220446049250313e-16) {
      dVar8 = param_1 / *param_2;
      *param_3 = dVar8;
    }
    else {
      dVar8 = param_1;
      _atan();
      dVar8 = dVar8 / *param_2;
      *param_3 = dVar8;
      iVar2 = *(int *)(param_2 + 8);
      if (iVar2 != 0) {
        do {
          iVar2 = iVar2 + -1;
          dVar9 = dVar8 * dVar8;
          dVar10 = dVar8 * dVar9;
          dVar11 = dVar9 * dVar10;
          dVar12 = dVar9 * dVar11;
          dVar13 = dVar9 * dVar12;
          dVar14 = dVar9 * dVar13;
          dVar15 = dVar9 * dVar14;
          dVar9 = ((dVar10 * param_2[1] + dVar8 * *param_2 + dVar11 * param_2[2] +
                    dVar12 * param_2[3] + dVar13 * param_2[4] + dVar14 * param_2[5] +
                    dVar15 * param_2[6] + dVar9 * dVar15 * param_2[7]) - param_1) /
                  (*param_2 +
                  (dVar10 * param_2[2] * 5.0 + dVar8 * param_2[1] * 3.0 + dVar11 * param_2[3] * 7.0
                   + dVar12 * param_2[4] * 9.0 + dVar13 * param_2[5] * 11.0 +
                   dVar14 * param_2[6] * 13.0 + dVar15 * param_2[7] * 15.0) * dVar8);
          dVar8 = dVar8 - dVar9;
          *param_3 = dVar8;
        } while (1e-10 <= ABS(dVar9) && iVar2 != 0);
      }
    }
    param_2 = pdVar1;
    _tan();
    dVar8 = dVar8 / param_1;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return dVar8;
  }
  ___stack_chk_fail(dVar8);
  __Unwind_Resume();
  pdVar4 = param_4[1];
  pdVar1 = (double *)((long)pdVar4 + 3);
  if (-1 < (long)pdVar4) {
    pdVar1 = pdVar4;
  }
  pdVar3 = (double *)param_2[1];
  if ((long)pdVar4 + 1U < 3) {
    return *pdVar3 * *pdVar3;
  }
  uVar5 = (long)pdVar4 - ((long)pdVar4 >> 0x3f) & 0xfffffffffffffffe;
  dVar8 = *pdVar3 * *pdVar3;
  dVar9 = pdVar3[1] * pdVar3[1];
  if (3 < (long)pdVar4) {
    uVar6 = (ulong)pdVar1 & 0xfffffffffffffffc;
    dVar10 = pdVar3[2] * pdVar3[2];
    dVar11 = pdVar3[3] * pdVar3[3];
    if ((double *)0x7 < pdVar4) {
      pdVar1 = pdVar3 + 6;
      lVar7 = 4;
      do {
        dVar8 = dVar8 + pdVar1[-2] * pdVar1[-2];
        dVar9 = dVar9 + pdVar1[-1] * pdVar1[-1];
        dVar10 = dVar10 + *pdVar1 * *pdVar1;
        dVar11 = dVar11 + pdVar1[1] * pdVar1[1];
        lVar7 = lVar7 + 4;
        pdVar1 = pdVar1 + 4;
      } while (lVar7 < (long)uVar6);
    }
    dVar8 = dVar10 + dVar8;
    dVar9 = dVar11 + dVar9;
    if ((long)uVar6 < (long)uVar5) {
      dVar11 = (pdVar3 + uVar6)[1];
      dVar10 = pdVar3[uVar6];
      dVar8 = dVar8 + dVar10 * dVar10;
      dVar9 = dVar9 + dVar11 * dVar11;
    }
  }
  dVar8 = dVar8 + dVar9;
  lVar7 = (long)pdVar4 % 2;
  if (lVar7 != 0 && lVar7 < 0 == SBORROW8((long)pdVar4,uVar5)) {
    pdVar1 = pdVar3 + ((long)pdVar4 / 2) * 2;
    do {
      dVar8 = dVar8 + *pdVar1 * *pdVar1;
      lVar7 = lVar7 + -1;
      pdVar1 = pdVar1 + 1;
    } while (lVar7 != 0);
  }
  return dVar8;
}



/* Entry: 1093f89a4; end: 1093f8a6f;  */

double FUN_1093f89a4(long param_1,undefined8 param_2,long param_3)

{
  double *pdVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  double *pdVar5;
  long lVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  
  uVar2 = *(ulong *)(param_3 + 8);
  uVar4 = uVar2 + 3;
  if (-1 < (long)uVar2) {
    uVar4 = uVar2;
  }
  pdVar1 = *(double **)(param_1 + 8);
  if (uVar2 + 1 < 3) {
    return *pdVar1 * *pdVar1;
  }
  uVar3 = uVar2 - ((long)uVar2 >> 0x3f) & 0xfffffffffffffffe;
  dVar7 = *pdVar1 * *pdVar1;
  dVar8 = pdVar1[1] * pdVar1[1];
  if (3 < (long)uVar2) {
    uVar4 = uVar4 & 0xfffffffffffffffc;
    dVar9 = pdVar1[2] * pdVar1[2];
    dVar10 = pdVar1[3] * pdVar1[3];
    if (7 < uVar2) {
      pdVar5 = pdVar1 + 6;
      lVar6 = 4;
      do {
        dVar7 = dVar7 + pdVar5[-2] * pdVar5[-2];
        dVar8 = dVar8 + pdVar5[-1] * pdVar5[-1];
        dVar9 = dVar9 + *pdVar5 * *pdVar5;
        dVar10 = dVar10 + pdVar5[1] * pdVar5[1];
        lVar6 = lVar6 + 4;
        pdVar5 = pdVar5 + 4;
      } while (lVar6 < (long)uVar4);
    }
    dVar7 = dVar9 + dVar7;
    dVar8 = dVar10 + dVar8;
    if ((long)uVar4 < (long)uVar3) {
      dVar10 = (pdVar1 + uVar4)[1];
      dVar9 = pdVar1[uVar4];
      dVar7 = dVar7 + dVar9 * dVar9;
      dVar8 = dVar8 + dVar10 * dVar10;
    }
  }
  dVar7 = dVar7 + dVar8;
  lVar6 = (long)uVar2 % 2;
  if (lVar6 != 0 && lVar6 < 0 == SBORROW8(uVar2,uVar3)) {
    pdVar1 = pdVar1 + ((long)uVar2 / 2) * 2;
    do {
      dVar7 = dVar7 + *pdVar1 * *pdVar1;
      lVar6 = lVar6 + -1;
      pdVar1 = pdVar1 + 1;
    } while (lVar6 != 0);
  }
  return dVar7;
}



/* Entry: 1093f8a70; end: 1093f8c77;  */

double FUN_1093f8a70(double param_1,double *param_2)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  
  dVar1 = 1.0;
  if (1e-05 < param_1) {
    dVar1 = param_1;
    _atan(param_1);
    dVar2 = dVar1 * dVar1;
    dVar3 = dVar2 * dVar1 * dVar2;
    dVar4 = dVar2 * dVar3;
    dVar5 = dVar2 * dVar4;
    dVar6 = dVar2 * dVar5;
    dVar7 = dVar2 * dVar6;
    dVar1 = (dVar1 * dVar2 * param_2[1] + dVar1 * *param_2 + dVar3 * param_2[2] + dVar4 * param_2[3]
             + dVar5 * param_2[4] + dVar6 * param_2[5] + dVar7 * param_2[6] +
            dVar2 * dVar7 * param_2[7]) / param_1;
  }
  return dVar1;
}



/* Entry: 1093f8c78; end: 1093f8dff;  */

void FUN_1093f8c78(double *param_1,double *param_2,double *param_3)

{
  double dVar1;
  double dVar2;
  double extraout_d1;
  undefined1 auVar3 [16];
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dStack_48;
  
  if (((*(byte *)((long)param_2 + 0x44) & 1) != 0) ||
     (dVar8 = SQRT(*param_3 * *param_3 + param_3[1] * param_3[1]),
     ABS(dVar8) <= 2.220446049250313e-16)) {
    *param_1 = 1.0;
    param_1[1] = 0.0;
    param_1[2] = 0.0;
    param_1[3] = 1.0;
  }
  else {
    dStack_48 = 0.0;
    dVar1 = dVar8;
    FUN_1093f87e0(param_2,&dStack_48);
    dVar2 = dStack_48 * dStack_48;
    dVar6 = dVar2 * dVar2 * dVar2;
    dVar4 = dVar2 * dVar6;
    dVar7 = dVar2 * dVar4;
    dVar5 = dVar2 * dVar7;
    auVar3 = NEON_fmov(0x3ff0000000000000,8);
    ___sincos_stret();
    dVar2 = (1.0 / (dVar8 * extraout_d1 * dVar8 * extraout_d1)) *
            (1.0 / (*param_2 * auVar3._0_8_ + param_2[2] * dVar2 * dVar2 * 5.0 +
                    param_2[4] * dVar4 * 9.0 + param_2[6] * dVar5 * 13.0 +
                   param_2[1] * dVar2 * 3.0 + param_2[3] * dVar6 * 7.0 +
                   param_2[5] * dVar7 * 11.0 + param_2[7] * dVar2 * dVar5 * 15.0) -
            (dStack_48 * extraout_d1) / dVar8);
    *param_1 = dVar1;
    param_1[1] = dVar1 * 0.0;
    param_1[2] = dVar1 * 0.0;
    param_1[3] = dVar1;
    dVar8 = *param_3;
    dVar1 = param_3[1];
    dVar4 = dVar2 * dVar8;
    dVar2 = dVar2 * dVar1;
    param_1[1] = param_1[1] + dVar1 * dVar4;
    *param_1 = *param_1 + dVar8 * dVar4;
    param_1[3] = param_1[3] + dVar1 * dVar2;
    param_1[2] = param_1[2] + dVar8 * dVar2;
  }
  return;
}



/* Entry: 1093f8e00; end: 1093f8e63;  */

void FUN_1093f8e00(undefined8 *param_1,double *param_2)

{
  undefined4 uVar1;
  float *pfVar2;
  double dVar3;
  double dVar4;
  bool bVar5;
  long lVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  undefined8 uStack_20;
  undefined8 uStack_18;
  undefined8 uStack_10;
  undefined8 uStack_8;
  
  lVar6 = 0;
  dVar9 = param_2[1];
  dVar3 = *param_2;
  dVar10 = param_2[5];
  dVar4 = param_2[4];
  dVar8 = param_2[7];
  dVar7 = param_2[6];
  uStack_18 = CONCAT44((float)param_2[3],(float)param_2[2]);
  uStack_20 = CONCAT44((float)dVar9,(float)dVar3);
  uStack_8 = CONCAT44((float)dVar8,(float)dVar7);
  uStack_10 = CONCAT44((float)dVar10,(float)dVar4);
  uVar1 = *(undefined4 *)(param_2 + 8);
  param_1[1] = CONCAT44((float)param_2[3],(float)param_2[2]);
  *param_1 = CONCAT44((float)dVar9,(float)dVar3);
  param_1[3] = CONCAT44((float)dVar8,(float)dVar7);
  param_1[2] = CONCAT44((float)dVar10,(float)dVar4);
  do {
    pfVar2 = (float *)((long)&uStack_20 + lVar6);
    bVar5 = lVar6 != 0x1c;
    lVar6 = lVar6 + 4;
  } while (ABS(*pfVar2) <= 1.1920929e-07 && bVar5);
  *(bool *)((long)param_1 + 0x24) = ABS(*pfVar2) <= 1.1920929e-07;
  *(undefined4 *)(param_1 + 4) = uVar1;
  return;
}



/* Entry: 1093f8e64; end: 1093f8e73;  */

void FUN_1093f8e64(void)

{
  return;
}



/* Entry: 1093f8e74; end: 1093f8ebf;  */

void FUN_1093f8e74(undefined8 *param_1,long param_2)

{
  undefined1 uStack_21;
  
  *param_1 = 0;
  param_1[1] = 0;
  FUN_1093f91ec(param_1,param_2 + 8,&uStack_21);
  return;
}



/* Entry: 1093f8ec0; end: 1093f8f67;  */

void FUN_1093f8ec0(undefined8 *param_1,long param_2,undefined8 *param_3)

{
  float fVar1;
  undefined8 uVar2;
  undefined4 uStack_24;
  
  uVar2 = *param_3;
  if ((*(byte *)(param_2 + 0x2c) & 1) == 0) {
    fVar1 = (float)((ulong)uVar2 >> 0x20);
    uStack_24 = 0;
    fVar1 = SQRT((float)uVar2 * (float)uVar2 + fVar1 * fVar1);
    FUN_1093f92d8(param_2 + 8,&uStack_24);
    uVar2 = CONCAT44((float)((ulong)*param_3 >> 0x20) * fVar1,(float)*param_3 * fVar1);
  }
  *param_1 = uVar2;
  return;
}



/* Entry: 1093f8f68; end: 1093f8f8f;  */

void FUN_1093f8f68(float *param_1,long param_2,undefined8 *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  
  if ((*(byte *)(param_2 + 0x2c) & 1) == 0) {
    fVar3 = (float)*param_3;
    fVar6 = (float)((ulong)*param_3 >> 0x20);
    fVar12 = SQRT(fVar3 * fVar3 + fVar6 * fVar6);
    if (1.1920929e-07 < ABS(fVar12)) {
      fVar1 = fVar12;
      _atanf();
      fVar2 = fVar1 * fVar1;
      fVar4 = fVar1 * fVar2;
      fVar7 = fVar2 * fVar4;
      fVar8 = fVar2 * fVar7;
      fVar9 = fVar2 * fVar8;
      fVar10 = fVar2 * fVar9;
      fVar11 = fVar2 * fVar10;
      fVar5 = fVar12 * fVar12;
      fVar12 = (fVar4 * *(float *)(param_2 + 0xc) + fVar1 * *(float *)(param_2 + 8) +
                fVar7 * *(float *)(param_2 + 0x10) + fVar8 * *(float *)(param_2 + 0x14) +
                fVar9 * *(float *)(param_2 + 0x18) + fVar10 * *(float *)(param_2 + 0x1c) +
                fVar11 * *(float *)(param_2 + 0x20) + fVar2 * fVar11 * *(float *)(param_2 + 0x24)) /
               fVar12;
      fVar1 = (*(float *)(param_2 + 8) +
              (fVar4 * *(float *)(param_2 + 0x10) * 5.0 + fVar1 * *(float *)(param_2 + 0xc) * 3.0 +
               fVar7 * *(float *)(param_2 + 0x14) * 7.0 + fVar8 * *(float *)(param_2 + 0x18) * 9.0 +
               fVar9 * *(float *)(param_2 + 0x1c) * 11.0 +
               fVar10 * *(float *)(param_2 + 0x20) * 13.0 +
              fVar11 * *(float *)(param_2 + 0x24) * 15.0) * fVar1) / (fVar5 + fVar5 * fVar5) -
              fVar12 / fVar5;
      *param_1 = fVar12;
      param_1[1] = fVar12 * 0.0;
      param_1[2] = fVar12 * 0.0;
      param_1[3] = fVar12;
      fVar12 = fVar1 * fVar3;
      fVar1 = fVar1 * fVar6;
      *(ulong *)param_1 =
           CONCAT44((float)((ulong)*(undefined8 *)param_1 >> 0x20) + fVar6 * fVar12,
                    (float)*(undefined8 *)param_1 + fVar3 * fVar12);
      *(ulong *)(param_1 + 2) =
           CONCAT44((float)((ulong)*(undefined8 *)(param_1 + 2) >> 0x20) + fVar6 * fVar1,
                    (float)*(undefined8 *)(param_1 + 2) + fVar3 * fVar1);
      return;
    }
  }
  param_1[2] = 0.0;
  param_1[3] = 1.0;
  param_1[0] = 1.0;
  param_1[1] = 0.0;
  return;
}



/* Entry: 1093f8f90; end: 1093f8fc7;  */

void FUN_1093f8f90(long param_1,undefined8 *param_2)

{
  float fVar1;
  float fVar2;
  undefined4 uStack_14;
  
  uStack_14 = 0;
  fVar1 = (float)*param_2;
  fVar2 = (float)((ulong)*param_2 >> 0x20);
  FUN_1093f92d8(SQRT(fVar1 * fVar1 + fVar2 * fVar2),param_1 + 8,&uStack_14);
  return;
}



/* Entry: 1093f8fc8; end: 1093f9063;  */

undefined8 * FUN_1093f8fc8(undefined4 param_1,long *param_2,long *param_3)

{
  undefined8 *puVar1;
  undefined8 auStack_48 [2];
  undefined8 auStack_38 [2];
  undefined4 uStack_24;
  
  uStack_24 = param_1;
  (**(code **)(*param_3 + 0x18))(auStack_38,param_3);
  (**(code **)(*param_2 + 0x18))(auStack_48,param_2);
  puVar1 = auStack_38;
  FUN_1093f6abc(puVar1,auStack_48,&uStack_24);
  _free(auStack_48[0]);
  _free(auStack_38[0]);
  return puVar1;
}



/* Entry: 1093f9064; end: 1093f906b;  */

undefined8 FUN_1093f9064(void)

{
  return 1;
}



/* Entry: 1093f906c; end: 1093f90e7;  */

void FUN_1093f906c(long param_1,long *param_2)

{
  undefined8 *puVar1;
  long *plVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  puVar1 = (undefined8 *)0x30;
  __Znwm();
  puVar1[5] = 0;
  *puVar1 = &PTR_FUN_110af5b48;
  uVar4 = *(undefined8 *)(param_1 + 0x10);
  uVar3 = *(undefined8 *)(param_1 + 8);
  uVar6 = *(undefined8 *)(param_1 + 0x20);
  uVar5 = *(undefined8 *)(param_1 + 0x18);
  *(undefined1 *)((long)puVar1 + 0x2c) = *(undefined1 *)(param_1 + 0x2c);
  *(undefined4 *)(puVar1 + 5) = *(undefined4 *)(param_1 + 0x28);
  puVar1[2] = uVar4;
  puVar1[1] = uVar3;
  puVar1[4] = uVar6;
  puVar1[3] = uVar5;
  plVar2 = (long *)*param_2;
  *param_2 = (long)puVar1;
  if (plVar2 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001093f90d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar2 + 8))();
    return;
  }
  return;
}



/* Entry: 1093f90e8; end: 1093f91eb;  */

void FUN_1093f90e8(long param_1,long *param_2)

{
  double *pdVar1;
  bool bVar2;
  undefined8 *puVar3;
  long *plVar4;
  long lVar5;
  undefined8 *puVar6;
  double adStack_80 [8];
  undefined4 uStack_40;
  undefined1 uStack_3c;
  
  puVar3 = (undefined8 *)0x50;
  __Znwm();
  lVar5 = 0;
  puVar6 = puVar3 + 9;
  *puVar6 = 0;
  puVar3[8] = 0;
  *puVar3 = &PTR_DAT_110af5ab0;
  adStack_80[5] = 0.0;
  adStack_80[4] = 0.0;
  adStack_80[7] = 0.0;
  adStack_80[6] = 0.0;
  adStack_80[1] = 0.0;
  adStack_80[0] = 0.0;
  adStack_80[3] = 0.0;
  adStack_80[2] = 0.0;
  puVar3[2] = 0;
  puVar3[1] = 0;
  puVar3[4] = 0;
  puVar3[3] = 0;
  puVar3[6] = 0;
  puVar3[5] = 0;
  puVar3[8] = 0;
  puVar3[7] = 0;
  *(undefined4 *)puVar6 = 10;
  do {
    pdVar1 = (double *)((long)adStack_80 + lVar5);
    if (2.220446049250313e-16 < ABS(*pdVar1)) break;
    bVar2 = lVar5 != 0x38;
    lVar5 = lVar5 + 8;
  } while (bVar2);
  *(bool *)((long)puVar3 + 0x4c) = ABS(*pdVar1) <= 2.220446049250313e-16;
  FUN_1093f990c(adStack_80,param_1 + 8);
  puVar3[2] = adStack_80[1];
  puVar3[1] = adStack_80[0];
  puVar3[4] = adStack_80[3];
  puVar3[3] = adStack_80[2];
  puVar3[6] = adStack_80[5];
  puVar3[5] = adStack_80[4];
  puVar3[8] = adStack_80[7];
  puVar3[7] = adStack_80[6];
  *(undefined4 *)puVar6 = uStack_40;
  *(undefined1 *)((long)puVar3 + 0x4c) = uStack_3c;
  plVar4 = (long *)*param_2;
  *param_2 = (long)puVar3;
  if (plVar4 != (long *)0x0) {
    (**(code **)(*plVar4 + 8))();
  }
  return;
}



/* Entry: 1093f91ec; end: 1093f92d7;  */

ulong FUN_1093f91ec(float param_1,ulong *param_2,long param_3)

{
  uint uVar1;
  undefined1 auVar2 [16];
  undefined8 uVar3;
  ulong uVar4;
  float *pfVar5;
  float *pfVar6;
  float *pfVar7;
  float **ppfVar8;
  float fVar9;
  ulong uVar10;
  long lVar11;
  ulong uVar12;
  float *pfVar13;
  ulong uVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  undefined4 uVar17;
  float fVar18;
  undefined4 uVar19;
  undefined1 auVar20 [16];
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  undefined1 uStack_b1;
  float *pfStack_b0;
  undefined8 uStack_a8;
  float *pfStack_98;
  undefined8 uStack_90;
  undefined8 uStack_80;
  float afStack_70 [2];
  float *pfStack_68;
  long lStack_58;
  
  uVar4 = *param_2;
  if (param_2[1] != 8) {
    _free();
    uVar4 = 0x20;
    _malloc();
    if (uVar4 == 0) {
      pfVar5 = (float *)0x8;
      ___cxa_allocate_exception();
      __ZNSt9bad_allocC1Ev();
      pfVar7 = (float *)PTR___ZTISt9bad_alloc_110346a68;
      ppfVar8 = (float **)PTR___ZNSt9bad_allocD1Ev_110346998;
      ___cxa_throw();
      lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
      fVar18 = 1.0;
      if (1e-05 < param_1) {
        pfStack_b0 = pfVar5 + 1;
        uStack_a8 = 7;
        uStack_90 = 1;
        uStack_80 = 8;
        pfVar6 = afStack_70;
        ppfVar8 = &pfStack_b0;
        pfStack_98 = pfVar5;
        pfStack_68 = pfStack_b0;
        FUN_1093f949c(pfVar6,&uStack_b1);
        if (fVar18 <= 1.1920929e-07) {
          fVar18 = param_1 / *pfVar5;
          *pfVar7 = fVar18;
        }
        else {
          fVar18 = param_1;
          _atanf();
          fVar18 = fVar18 / *pfVar5;
          *pfVar7 = fVar18;
          fVar9 = pfVar5[8];
          if (fVar9 != 0.0) {
            do {
              fVar9 = (float)((int)fVar9 + -1);
              fVar24 = fVar18 * fVar18;
              fVar25 = fVar18 * fVar24;
              fVar26 = fVar24 * fVar25;
              fVar27 = fVar24 * fVar26;
              fVar28 = fVar24 * fVar27;
              fVar29 = fVar24 * fVar28;
              fVar30 = fVar24 * fVar29;
              fVar24 = ((fVar25 * pfVar5[1] + fVar18 * *pfVar5 + fVar26 * pfVar5[2] +
                         fVar27 * pfVar5[3] + fVar28 * pfVar5[4] + fVar29 * pfVar5[5] +
                         fVar30 * pfVar5[6] + fVar24 * fVar30 * pfVar5[7]) - param_1) /
                       (*pfVar5 +
                       (fVar25 * pfVar5[2] * 5.0 + fVar18 * pfVar5[1] * 3.0 +
                        fVar26 * pfVar5[3] * 7.0 + fVar27 * pfVar5[4] * 9.0 +
                        fVar28 * pfVar5[5] * 11.0 + fVar29 * pfVar5[6] * 13.0 +
                       fVar30 * pfVar5[7] * 15.0) * fVar18);
              fVar18 = fVar18 - fVar24;
              *pfVar7 = fVar18;
            } while (1e-10 <= ABS(fVar24) && fVar9 != 0.0);
          }
        }
        pfVar5 = pfVar6;
        _tanf();
        fVar18 = fVar18 / param_1;
      }
      if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_58) {
        ___stack_chk_fail(fVar18);
        __Unwind_Resume();
        pfVar13 = ppfVar8[1];
        pfVar7 = (float *)((long)pfVar13 + 3);
        pfVar6 = (float *)((long)pfVar13 + 7);
        if (-1 < (long)pfVar13) {
          pfVar7 = pfVar13;
          pfVar6 = pfVar13;
        }
        pfVar5 = *(float **)(pfVar5 + 2);
        if ((long)pfVar13 + 3U < 7) {
          fVar24 = *pfVar5 * *pfVar5;
          fVar18 = 0.0;
          if (1 < (long)pfVar13) {
            lVar11 = (long)pfVar13 + -1;
            do {
              pfVar5 = pfVar5 + 1;
              fVar24 = fVar24 + *pfVar5 * *pfVar5;
              fVar18 = 0.0;
              lVar11 = lVar11 + -1;
            } while (lVar11 != 0);
          }
        }
        else {
          fVar24 = (float)*(undefined8 *)(pfVar5 + 2);
          fVar25 = (float)((ulong)*(undefined8 *)(pfVar5 + 2) >> 0x20);
          fVar18 = (float)*(undefined8 *)pfVar5;
          fVar9 = (float)((ulong)*(undefined8 *)pfVar5 >> 0x20);
          fVar18 = fVar18 * fVar18;
          fVar9 = fVar9 * fVar9;
          fVar24 = fVar24 * fVar24;
          fVar25 = fVar25 * fVar25;
          if (7 < (long)pfVar13) {
            uVar4 = (ulong)pfVar6 & 0xfffffffffffffff8;
            fVar26 = pfVar5[4] * pfVar5[4];
            fVar27 = pfVar5[5] * pfVar5[5];
            fVar28 = pfVar5[6] * pfVar5[6];
            fVar29 = pfVar5[7] * pfVar5[7];
            if ((float *)0xf < pfVar13) {
              pfVar6 = pfVar5 + 0xc;
              lVar11 = 8;
              do {
                fVar30 = (float)*(undefined8 *)(pfVar6 + -4);
                fVar21 = (float)((ulong)*(undefined8 *)(pfVar6 + -4) >> 0x20);
                fVar22 = (float)*(undefined8 *)(pfVar6 + -2);
                fVar23 = (float)((ulong)*(undefined8 *)(pfVar6 + -2) >> 0x20);
                fVar18 = fVar18 + fVar30 * fVar30;
                fVar9 = fVar9 + fVar21 * fVar21;
                fVar24 = fVar24 + fVar22 * fVar22;
                fVar25 = fVar25 + fVar23 * fVar23;
                fVar30 = (float)*(undefined8 *)pfVar6;
                fVar21 = (float)((ulong)*(undefined8 *)pfVar6 >> 0x20);
                fVar22 = (float)*(undefined8 *)(pfVar6 + 2);
                fVar23 = (float)((ulong)*(undefined8 *)(pfVar6 + 2) >> 0x20);
                fVar26 = fVar26 + fVar30 * fVar30;
                fVar27 = fVar27 + fVar21 * fVar21;
                fVar28 = fVar28 + fVar22 * fVar22;
                fVar29 = fVar29 + fVar23 * fVar23;
                lVar11 = lVar11 + 8;
                pfVar6 = pfVar6 + 8;
              } while (lVar11 < (long)uVar4);
            }
            fVar18 = fVar26 + fVar18;
            fVar9 = fVar27 + fVar9;
            fVar24 = fVar28 + fVar24;
            fVar25 = fVar29 + fVar25;
            if ((long)uVar4 < (long)((ulong)pfVar7 & 0xfffffffffffffffc)) {
              pfVar6 = pfVar5 + uVar4;
              fVar18 = fVar18 + *pfVar6 * *pfVar6;
              fVar9 = fVar9 + pfVar6[1] * pfVar6[1];
              fVar24 = fVar24 + pfVar6[2] * pfVar6[2];
              fVar25 = fVar25 + pfVar6[3] * pfVar6[3];
            }
          }
          auVar20._4_4_ = fVar9;
          auVar20._0_4_ = fVar18;
          auVar20._8_4_ = fVar24;
          auVar20._12_4_ = fVar25;
          auVar2._4_4_ = fVar9;
          auVar2._0_4_ = fVar18;
          auVar2._8_4_ = fVar24;
          auVar2._12_4_ = fVar25;
          auVar20 = NEON_ext(auVar20,auVar2,8,1);
          fVar18 = fVar18 + auVar20._0_4_;
          fVar9 = fVar9 + auVar20._4_4_;
          fVar24 = fVar18 + fVar9;
          fVar18 = fVar18 + fVar9;
          lVar11 = (long)pfVar13 % 4;
          if (lVar11 != 0 &&
              lVar11 < 0 == SBORROW8((long)pfVar13,(ulong)pfVar7 & 0xfffffffffffffffc)) {
            pfVar7 = pfVar5 + ((long)pfVar7 >> 2) * 4;
            do {
              fVar24 = fVar24 + *pfVar7 * *pfVar7;
              fVar18 = 0.0;
              lVar11 = lVar11 + -1;
              pfVar7 = pfVar7 + 1;
            } while (lVar11 != 0);
          }
        }
        return CONCAT44(fVar18,fVar24);
      }
      return (ulong)(uint)fVar18;
    }
    *param_2 = uVar4;
    param_2[1] = 8;
  }
  uVar10 = 8;
  if ((uVar4 & 3) == 0) {
    uVar1 = -((uint)uVar4 >> 2);
    uVar12 = (ulong)uVar1 & 3;
    uVar10 = (ulong)(8 - (int)uVar12) & 0xc | (ulong)uVar1 & 3;
    if ((uVar1 & 3) != 0) goto LAB_1093f9250;
  }
  else {
    uVar12 = 8;
LAB_1093f9250:
    uVar14 = 0;
    do {
      uVar17 = *(undefined4 *)(param_3 + uVar14 * 4);
      uVar19 = 0;
      *(undefined4 *)(uVar4 + uVar14 * 4) = uVar17;
      uVar14 = uVar14 + 1;
    } while (uVar12 != uVar14);
    if (4 < uVar12) goto LAB_1093f928c;
  }
  puVar15 = (undefined8 *)(param_3 + uVar12 * 4);
  puVar16 = (undefined8 *)(uVar4 + uVar12 * 4);
  do {
    uVar3 = *puVar15;
    uVar17 = (undefined4)uVar3;
    uVar19 = (undefined4)((ulong)uVar3 >> 0x20);
    puVar16[1] = puVar15[1];
    *puVar16 = uVar3;
    uVar12 = uVar12 + 4;
    puVar15 = puVar15 + 2;
    puVar16 = puVar16 + 2;
  } while (uVar12 < uVar10);
LAB_1093f928c:
  if (uVar10 < 8) {
    lVar11 = uVar10 << 2;
    do {
      uVar17 = *(undefined4 *)(param_3 + lVar11);
      uVar19 = 0;
      *(undefined4 *)(uVar4 + lVar11) = uVar17;
      lVar11 = lVar11 + 4;
    } while (lVar11 != 0x20);
  }
  return CONCAT44(uVar19,uVar17);
}



/* Entry: 1093f92d8; end: 1093f949b;  */

ulong FUN_1093f92d8(float param_1,float *param_2,float *param_3,float **param_4)

{
  undefined1 auVar1 [16];
  float *pfVar2;
  float fVar3;
  float *pfVar4;
  float *pfVar5;
  long lVar6;
  ulong uVar7;
  float *pfVar8;
  float fVar9;
  undefined1 auVar10 [16];
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  undefined1 uStack_91;
  float *pfStack_90;
  undefined8 uStack_88;
  float *pfStack_78;
  undefined8 uStack_70;
  undefined8 uStack_60;
  float afStack_50 [2];
  float *pfStack_48;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  fVar9 = 1.0;
  if (1e-05 < param_1) {
    pfStack_90 = param_2 + 1;
    uStack_88 = 7;
    uStack_70 = 1;
    uStack_60 = 8;
    pfVar2 = afStack_50;
    param_4 = &pfStack_90;
    pfStack_78 = param_2;
    pfStack_48 = pfStack_90;
    FUN_1093f949c(pfVar2,&uStack_91);
    if (fVar9 <= 1.1920929e-07) {
      fVar9 = param_1 / *param_2;
      *param_3 = fVar9;
    }
    else {
      fVar9 = param_1;
      _atanf();
      fVar9 = fVar9 / *param_2;
      *param_3 = fVar9;
      fVar3 = param_2[8];
      if (fVar3 != 0.0) {
        do {
          fVar3 = (float)((int)fVar3 + -1);
          fVar14 = fVar9 * fVar9;
          fVar15 = fVar9 * fVar14;
          fVar16 = fVar14 * fVar15;
          fVar17 = fVar14 * fVar16;
          fVar18 = fVar14 * fVar17;
          fVar19 = fVar14 * fVar18;
          fVar20 = fVar14 * fVar19;
          fVar14 = ((fVar15 * param_2[1] + fVar9 * *param_2 + fVar16 * param_2[2] +
                     fVar17 * param_2[3] + fVar18 * param_2[4] + fVar19 * param_2[5] +
                     fVar20 * param_2[6] + fVar14 * fVar20 * param_2[7]) - param_1) /
                   (*param_2 +
                   (fVar15 * param_2[2] * 5.0 + fVar9 * param_2[1] * 3.0 + fVar16 * param_2[3] * 7.0
                    + fVar17 * param_2[4] * 9.0 + fVar18 * param_2[5] * 11.0 +
                    fVar19 * param_2[6] * 13.0 + fVar20 * param_2[7] * 15.0) * fVar9);
          fVar9 = fVar9 - fVar14;
          *param_3 = fVar9;
        } while (1e-10 <= ABS(fVar14) && fVar3 != 0.0);
      }
    }
    param_2 = pfVar2;
    _tanf();
    fVar9 = fVar9 / param_1;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_38) {
    ___stack_chk_fail(fVar9);
    __Unwind_Resume();
    pfVar5 = param_4[1];
    pfVar2 = (float *)((long)pfVar5 + 3);
    pfVar8 = (float *)((long)pfVar5 + 7);
    if (-1 < (long)pfVar5) {
      pfVar2 = pfVar5;
      pfVar8 = pfVar5;
    }
    pfVar4 = *(float **)(param_2 + 2);
    if ((long)pfVar5 + 3U < 7) {
      fVar14 = *pfVar4 * *pfVar4;
      fVar9 = 0.0;
      if (1 < (long)pfVar5) {
        lVar6 = (long)pfVar5 + -1;
        do {
          pfVar4 = pfVar4 + 1;
          fVar14 = fVar14 + *pfVar4 * *pfVar4;
          fVar9 = 0.0;
          lVar6 = lVar6 + -1;
        } while (lVar6 != 0);
      }
    }
    else {
      fVar14 = (float)*(undefined8 *)(pfVar4 + 2);
      fVar15 = (float)((ulong)*(undefined8 *)(pfVar4 + 2) >> 0x20);
      fVar9 = (float)*(undefined8 *)pfVar4;
      fVar3 = (float)((ulong)*(undefined8 *)pfVar4 >> 0x20);
      fVar9 = fVar9 * fVar9;
      fVar3 = fVar3 * fVar3;
      fVar14 = fVar14 * fVar14;
      fVar15 = fVar15 * fVar15;
      if (7 < (long)pfVar5) {
        uVar7 = (ulong)pfVar8 & 0xfffffffffffffff8;
        fVar16 = pfVar4[4] * pfVar4[4];
        fVar17 = pfVar4[5] * pfVar4[5];
        fVar18 = pfVar4[6] * pfVar4[6];
        fVar19 = pfVar4[7] * pfVar4[7];
        if ((float *)0xf < pfVar5) {
          pfVar8 = pfVar4 + 0xc;
          lVar6 = 8;
          do {
            fVar20 = (float)*(undefined8 *)(pfVar8 + -4);
            fVar11 = (float)((ulong)*(undefined8 *)(pfVar8 + -4) >> 0x20);
            fVar12 = (float)*(undefined8 *)(pfVar8 + -2);
            fVar13 = (float)((ulong)*(undefined8 *)(pfVar8 + -2) >> 0x20);
            fVar9 = fVar9 + fVar20 * fVar20;
            fVar3 = fVar3 + fVar11 * fVar11;
            fVar14 = fVar14 + fVar12 * fVar12;
            fVar15 = fVar15 + fVar13 * fVar13;
            fVar20 = (float)*(undefined8 *)pfVar8;
            fVar11 = (float)((ulong)*(undefined8 *)pfVar8 >> 0x20);
            fVar12 = (float)*(undefined8 *)(pfVar8 + 2);
            fVar13 = (float)((ulong)*(undefined8 *)(pfVar8 + 2) >> 0x20);
            fVar16 = fVar16 + fVar20 * fVar20;
            fVar17 = fVar17 + fVar11 * fVar11;
            fVar18 = fVar18 + fVar12 * fVar12;
            fVar19 = fVar19 + fVar13 * fVar13;
            lVar6 = lVar6 + 8;
            pfVar8 = pfVar8 + 8;
          } while (lVar6 < (long)uVar7);
        }
        fVar9 = fVar16 + fVar9;
        fVar3 = fVar17 + fVar3;
        fVar14 = fVar18 + fVar14;
        fVar15 = fVar19 + fVar15;
        if ((long)uVar7 < (long)((ulong)pfVar2 & 0xfffffffffffffffc)) {
          pfVar8 = pfVar4 + uVar7;
          fVar9 = fVar9 + *pfVar8 * *pfVar8;
          fVar3 = fVar3 + pfVar8[1] * pfVar8[1];
          fVar14 = fVar14 + pfVar8[2] * pfVar8[2];
          fVar15 = fVar15 + pfVar8[3] * pfVar8[3];
        }
      }
      auVar10._4_4_ = fVar3;
      auVar10._0_4_ = fVar9;
      auVar10._8_4_ = fVar14;
      auVar10._12_4_ = fVar15;
      auVar1._4_4_ = fVar3;
      auVar1._0_4_ = fVar9;
      auVar1._8_4_ = fVar14;
      auVar1._12_4_ = fVar15;
      auVar10 = NEON_ext(auVar10,auVar1,8,1);
      fVar9 = fVar9 + auVar10._0_4_;
      fVar3 = fVar3 + auVar10._4_4_;
      fVar14 = fVar9 + fVar3;
      fVar9 = fVar9 + fVar3;
      lVar6 = (long)pfVar5 % 4;
      if (lVar6 != 0 && lVar6 < 0 == SBORROW8((long)pfVar5,(ulong)pfVar2 & 0xfffffffffffffffc)) {
        pfVar2 = pfVar4 + ((long)pfVar2 >> 2) * 4;
        do {
          fVar14 = fVar14 + *pfVar2 * *pfVar2;
          fVar9 = 0.0;
          lVar6 = lVar6 + -1;
          pfVar2 = pfVar2 + 1;
        } while (lVar6 != 0);
      }
    }
    return CONCAT44(fVar9,fVar14);
  }
  return (ulong)(uint)fVar9;
}



/* Entry: 1093f949c; end: 1093f958f;  */

undefined8 FUN_1093f949c(long param_1,undefined8 param_2,long param_3)

{
  ulong uVar1;
  undefined1 auVar2 [16];
  float *pfVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  float *pfVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar14;
  float fVar15;
  float fVar16;
  undefined1 auVar13 [16];
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  
  uVar4 = *(ulong *)(param_3 + 8);
  uVar1 = uVar4 + 3;
  uVar6 = uVar4 + 7;
  if (-1 < (long)uVar4) {
    uVar1 = uVar4;
    uVar6 = uVar4;
  }
  pfVar3 = *(float **)(param_1 + 8);
  if (uVar4 + 3 < 7) {
    fVar8 = *pfVar3 * *pfVar3;
    fVar9 = 0.0;
    if (1 < (long)uVar4) {
      lVar5 = uVar4 - 1;
      do {
        pfVar3 = pfVar3 + 1;
        fVar8 = fVar8 + *pfVar3 * *pfVar3;
        fVar9 = 0.0;
        lVar5 = lVar5 + -1;
      } while (lVar5 != 0);
    }
  }
  else {
    fVar8 = (float)*(undefined8 *)(pfVar3 + 2);
    fVar11 = (float)((ulong)*(undefined8 *)(pfVar3 + 2) >> 0x20);
    fVar9 = (float)*(undefined8 *)pfVar3;
    fVar10 = (float)((ulong)*(undefined8 *)pfVar3 >> 0x20);
    fVar9 = fVar9 * fVar9;
    fVar10 = fVar10 * fVar10;
    fVar8 = fVar8 * fVar8;
    fVar11 = fVar11 * fVar11;
    if (7 < (long)uVar4) {
      uVar6 = uVar6 & 0xfffffffffffffff8;
      fVar12 = pfVar3[4] * pfVar3[4];
      fVar14 = pfVar3[5] * pfVar3[5];
      fVar15 = pfVar3[6] * pfVar3[6];
      fVar16 = pfVar3[7] * pfVar3[7];
      if (0xf < uVar4) {
        pfVar7 = pfVar3 + 0xc;
        lVar5 = 8;
        do {
          fVar17 = (float)*(undefined8 *)(pfVar7 + -4);
          fVar18 = (float)((ulong)*(undefined8 *)(pfVar7 + -4) >> 0x20);
          fVar19 = (float)*(undefined8 *)(pfVar7 + -2);
          fVar20 = (float)((ulong)*(undefined8 *)(pfVar7 + -2) >> 0x20);
          fVar9 = fVar9 + fVar17 * fVar17;
          fVar10 = fVar10 + fVar18 * fVar18;
          fVar8 = fVar8 + fVar19 * fVar19;
          fVar11 = fVar11 + fVar20 * fVar20;
          fVar17 = (float)*(undefined8 *)pfVar7;
          fVar18 = (float)((ulong)*(undefined8 *)pfVar7 >> 0x20);
          fVar19 = (float)*(undefined8 *)(pfVar7 + 2);
          fVar20 = (float)((ulong)*(undefined8 *)(pfVar7 + 2) >> 0x20);
          fVar12 = fVar12 + fVar17 * fVar17;
          fVar14 = fVar14 + fVar18 * fVar18;
          fVar15 = fVar15 + fVar19 * fVar19;
          fVar16 = fVar16 + fVar20 * fVar20;
          lVar5 = lVar5 + 8;
          pfVar7 = pfVar7 + 8;
        } while (lVar5 < (long)uVar6);
      }
      fVar9 = fVar12 + fVar9;
      fVar10 = fVar14 + fVar10;
      fVar8 = fVar15 + fVar8;
      fVar11 = fVar16 + fVar11;
      if ((long)uVar6 < (long)(uVar1 & 0xfffffffffffffffc)) {
        pfVar7 = pfVar3 + uVar6;
        fVar9 = fVar9 + *pfVar7 * *pfVar7;
        fVar10 = fVar10 + pfVar7[1] * pfVar7[1];
        fVar8 = fVar8 + pfVar7[2] * pfVar7[2];
        fVar11 = fVar11 + pfVar7[3] * pfVar7[3];
      }
    }
    auVar13._4_4_ = fVar10;
    auVar13._0_4_ = fVar9;
    auVar13._8_4_ = fVar8;
    auVar13._12_4_ = fVar11;
    auVar2._4_4_ = fVar10;
    auVar2._0_4_ = fVar9;
    auVar2._8_4_ = fVar8;
    auVar2._12_4_ = fVar11;
    auVar13 = NEON_ext(auVar13,auVar2,8,1);
    fVar9 = fVar9 + auVar13._0_4_;
    fVar10 = fVar10 + auVar13._4_4_;
    fVar8 = fVar9 + fVar10;
    fVar9 = fVar9 + fVar10;
    lVar5 = (long)uVar4 % 4;
    if (lVar5 != 0 && lVar5 < 0 == SBORROW8(uVar4,uVar1 & 0xfffffffffffffffc)) {
      pfVar3 = pfVar3 + ((long)uVar1 >> 2) * 4;
      do {
        fVar8 = fVar8 + *pfVar3 * *pfVar3;
        fVar9 = 0.0;
        lVar5 = lVar5 + -1;
        pfVar3 = pfVar3 + 1;
      } while (lVar5 != 0);
    }
  }
  return CONCAT44(fVar9,fVar8);
}



/* Entry: 1093f9590; end: 1093f9793;  */

float FUN_1093f9590(undefined8 param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  
  fVar1 = 1.0;
  fVar8 = (float)param_1;
  if (1e-05 < fVar8) {
    _atanf(param_1);
    fVar1 = (float)param_1;
    fVar2 = fVar1 * fVar1;
    fVar3 = fVar2 * fVar1 * fVar2;
    fVar4 = fVar2 * fVar3;
    fVar5 = fVar2 * fVar4;
    fVar6 = fVar2 * fVar5;
    fVar7 = fVar2 * fVar6;
    fVar1 = (fVar1 * fVar2 * param_2[1] + fVar1 * *param_2 + fVar3 * param_2[2] + fVar4 * param_2[3]
             + fVar5 * param_2[4] + fVar6 * param_2[5] + fVar7 * param_2[6] +
            fVar2 * fVar7 * param_2[7]) / fVar8;
  }
  return fVar1;
}



/* Entry: 1093f9794; end: 1093f990b;  */

void FUN_1093f9794(float *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined1 auVar1 [16];
  float fVar2;
  float fVar3;
  undefined8 uVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  undefined1 auVar9 [16];
  float fVar10;
  float fVar11;
  float fVar12;
  float fStack_44;
  
  if (((*(byte *)((long)param_2 + 0x24) & 1) != 0) ||
     (fVar12 = (float)*param_3, fVar2 = (float)((ulong)*param_3 >> 0x20),
     fVar12 = SQRT(fVar12 * fVar12 + fVar2 * fVar2), ABS(fVar12) <= 1.1920929e-07)) {
    param_1[2] = 0.0;
    param_1[3] = 1.0;
    param_1[0] = 1.0;
    param_1[1] = 0.0;
  }
  else {
    fStack_44 = 0.0;
    fVar2 = fVar12;
    FUN_1093f92d8(param_2,&fStack_44);
    fVar3 = fStack_44 * fStack_44;
    fVar7 = fVar3 * fVar3 * fVar3;
    fVar8 = fVar3 * fVar7;
    fVar10 = fVar3 * fVar8;
    fVar11 = fVar3 * fVar10;
    uVar4 = NEON_fmov(0x3f800000,4);
    fVar5 = (float)uVar4;
    ___sincosf_stret();
    fVar8 = (float)*param_2 * (float)uVar4 + *(float *)(param_2 + 2) * fVar8 * 9.0;
    fVar10 = (float)((ulong)*param_2 >> 0x20) * fVar3 * 3.0 +
             *(float *)((long)param_2 + 0x14) * fVar10 * 11.0;
    fVar6 = (float)param_2[1] * fVar3 * fVar3 * 5.0 + *(float *)(param_2 + 3) * fVar11 * 13.0;
    fVar3 = (float)((ulong)param_2[1] >> 0x20) * fVar7 * 7.0 +
            *(float *)((long)param_2 + 0x1c) * fVar3 * fVar11 * 15.0;
    auVar9._4_4_ = fVar10;
    auVar9._0_4_ = fVar8;
    auVar9._8_4_ = fVar6;
    auVar9._12_4_ = fVar3;
    auVar1._4_4_ = fVar10;
    auVar1._0_4_ = fVar8;
    auVar1._8_4_ = fVar6;
    auVar1._12_4_ = fVar3;
    auVar9 = NEON_ext(auVar9,auVar1,8,1);
    fVar12 = (1.0 / (fVar12 * fVar5 * fVar12 * fVar5)) *
             (1.0 / (fVar8 + auVar9._0_4_ + fVar10 + auVar9._4_4_) - (fStack_44 * fVar5) / fVar12);
    *param_1 = fVar2;
    param_1[1] = fVar2 * 0.0;
    param_1[2] = fVar2 * 0.0;
    param_1[3] = fVar2;
    fVar2 = (float)*param_3;
    fVar3 = fVar12 * fVar2;
    fVar5 = (float)((ulong)*param_3 >> 0x20);
    fVar12 = fVar12 * fVar5;
    *(ulong *)param_1 =
         CONCAT44((float)((ulong)*(undefined8 *)param_1 >> 0x20) + fVar5 * fVar3,
                  (float)*(undefined8 *)param_1 + fVar2 * fVar3);
    *(ulong *)(param_1 + 2) =
         CONCAT44((float)((ulong)*(undefined8 *)(param_1 + 2) >> 0x20) + fVar5 * fVar12,
                  (float)*(undefined8 *)(param_1 + 2) + fVar2 * fVar12);
  }
  return;
}



/* Entry: 1093f990c; end: 1093f9983;  */

void FUN_1093f990c(double *param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  double *pdVar2;
  bool bVar3;
  long lVar4;
  double adStack_40 [4];
  double dStack_20;
  double dStack_18;
  double dStack_10;
  double dStack_8;
  
  lVar4 = 0;
  adStack_40[0] = (double)(float)*param_2;
  adStack_40[1] = (double)(float)((ulong)*param_2 >> 0x20);
  adStack_40[2] = (double)(float)param_2[1];
  adStack_40[3] = (double)(float)((ulong)param_2[1] >> 0x20);
  dStack_20 = (double)(float)param_2[2];
  dStack_18 = (double)(float)((ulong)param_2[2] >> 0x20);
  dStack_10 = (double)(float)param_2[3];
  dStack_8 = (double)(float)((ulong)param_2[3] >> 0x20);
  uVar1 = *(undefined4 *)(param_2 + 4);
  param_1[1] = adStack_40[1];
  *param_1 = adStack_40[0];
  param_1[3] = adStack_40[3];
  param_1[2] = adStack_40[2];
  param_1[5] = dStack_18;
  param_1[4] = dStack_20;
  param_1[7] = dStack_8;
  param_1[6] = dStack_10;
  do {
    pdVar2 = (double *)((long)adStack_40 + lVar4);
    if (2.220446049250313e-16 < ABS(*pdVar2)) break;
    bVar3 = lVar4 != 0x38;
    lVar4 = lVar4 + 8;
  } while (bVar3);
  *(bool *)((long)param_1 + 0x44) = ABS(*pdVar2) <= 2.220446049250313e-16;
  *(undefined4 *)(param_1 + 8) = uVar1;
  return;
}



/* Entry: 1093f9984; end: 1093f9993;  */

void FUN_1093f9984(void)

{
  return;
}



/* Entry: 1093f9994; end: 1093f99df;  */

void FUN_1093f9994(undefined8 *param_1,long param_2)

{
  undefined1 uStack_21;
  
  *param_1 = 0;
  param_1[1] = 0;
  func_0x0001093f9c18(param_1,param_2 + 0x18,&uStack_21);
  return;
}



/* Entry: 1093f99e0; end: 1093f9a17;  */

void FUN_1093f99e0(double *param_1,long param_2,double *param_3)

{
  uint *puVar1;
  uint uVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  
  puVar1 = (uint *)(param_2 + 8);
  dVar9 = *(double *)(param_2 + 0x60);
  dVar8 = *(double *)(param_2 + 0x58);
  dVar3 = *(double *)(param_2 + 0x60);
  dVar4 = *param_3;
  param_1[1] = param_3[1];
  *param_1 = dVar4;
  if (*puVar1 != 0) {
    uVar2 = 0;
    dVar6 = param_1[1];
    dVar5 = *param_1;
    dVar4 = 0.0;
    do {
      dVar10 = dVar5 * dVar5 + dVar6 * dVar6;
      if (ABS(dVar10 - dVar4) < *(double *)(param_2 + 0x10)) break;
      dVar4 = SQRT(dVar10);
      FUN_1093f9e00(puVar1);
      dVar7 = (dVar3 + dVar3) * dVar5;
      dVar5 = (*param_3 -
              (dVar9 * (dVar10 + dVar5 * (dVar5 + dVar5)) + dVar6 * (dVar8 + dVar8) * dVar5)) /
              dVar4;
      dVar6 = (param_3[1] - (dVar6 * dVar7 + (dVar10 + (dVar6 + dVar6) * dVar6) * dVar8)) / dVar4;
      uVar2 = uVar2 + 1;
      dVar4 = dVar10;
    } while (uVar2 < *puVar1);
    param_1[1] = dVar6;
    *param_1 = dVar5;
  }
  return;
}



/* Entry: 1093f9a18; end: 1093f9a4f;  */

void FUN_1093f9a18(long param_1,double *param_2)

{
  undefined8 uStack_18;
  
  uStack_18 = 0;
  FUN_1093fa1ec(SQRT(*param_2 * *param_2 + param_2[1] * param_2[1]),param_1 + 8,&uStack_18);
  return;
}



/* Entry: 1093f9a50; end: 1093f9aeb;  */

undefined8 * FUN_1093f9a50(undefined8 param_1,long *param_2,long *param_3)

{
  undefined8 *puVar1;
  undefined8 auStack_48 [2];
  undefined8 auStack_38 [2];
  undefined8 uStack_28;
  
  uStack_28 = param_1;
  (**(code **)(*param_3 + 0x18))(auStack_38,param_3);
  (**(code **)(*param_2 + 0x18))(auStack_48,param_2);
  puVar1 = auStack_38;
  FUN_1093f6610(puVar1,auStack_48,&uStack_28);
  _free(auStack_48[0]);
  _free(auStack_38[0]);
  return puVar1;
}



/* Entry: 1093f9aec; end: 1093f9af3;  */

undefined8 FUN_1093f9aec(void)

{
  return 0;
}



/* Entry: 1093f9af4; end: 1093f9cf3;  */

void FUN_1093f9af4(long param_1,long *param_2)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  undefined8 *puVar6;
  long *plVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  
  puVar6 = (undefined8 *)0x38;
  __Znwm();
  *puVar6 = &PTR_DAT_110af5c78;
  dVar8 = *(double *)(param_1 + 0x20);
  dVar1 = *(double *)(param_1 + 0x18);
  dVar9 = *(double *)(param_1 + 0x30);
  dVar2 = *(double *)(param_1 + 0x28);
  dVar10 = *(double *)(param_1 + 0x40);
  dVar3 = *(double *)(param_1 + 0x38);
  dVar11 = *(double *)(param_1 + 0x50);
  dVar4 = *(double *)(param_1 + 0x48);
  dVar12 = *(double *)(param_1 + 0x60);
  dVar5 = *(double *)(param_1 + 0x58);
  *(undefined4 *)(puVar6 + 1) = *(undefined4 *)(param_1 + 8);
  *(undefined4 *)((long)puVar6 + 0xc) = 0x3727c5ac;
  puVar6[2] = CONCAT44((float)dVar8,(float)dVar1);
  puVar6[3] = CONCAT44((float)dVar9,(float)dVar2);
  puVar6[4] = CONCAT44((float)dVar10,(float)dVar3);
  puVar6[5] = CONCAT44((float)dVar11,(float)dVar4);
  puVar6[6] = CONCAT44((float)dVar12,(float)dVar5);
  plVar7 = (long *)*param_2;
  *param_2 = (long)puVar6;
  if (plVar7 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001093f9b80. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar7 + 8))();
    return;
  }
  return;
}



/* Entry: 1093f9cf4; end: 1093f9dff;  */

void FUN_1093f9cf4(double *param_1,uint *param_2,double *param_3)

{
  uint uVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  
  dVar8 = *(double *)(param_2 + 0x16);
  dVar7 = *(double *)(param_2 + 0x14);
  dVar2 = *(double *)(param_2 + 0x16);
  dVar3 = *param_3;
  param_1[1] = param_3[1];
  *param_1 = dVar3;
  if (*param_2 != 0) {
    uVar1 = 0;
    dVar5 = param_1[1];
    dVar4 = *param_1;
    dVar3 = 0.0;
    do {
      dVar9 = dVar4 * dVar4 + dVar5 * dVar5;
      if (ABS(dVar9 - dVar3) < *(double *)(param_2 + 2)) break;
      dVar3 = SQRT(dVar9);
      FUN_1093f9e00(param_2);
      dVar6 = (dVar2 + dVar2) * dVar4;
      dVar4 = (*param_3 -
              (dVar8 * (dVar9 + dVar4 * (dVar4 + dVar4)) + dVar5 * (dVar7 + dVar7) * dVar4)) / dVar3
      ;
      dVar5 = (param_3[1] - (dVar5 * dVar6 + (dVar9 + (dVar5 + dVar5) * dVar5) * dVar7)) / dVar3;
      uVar1 = uVar1 + 1;
      dVar3 = dVar9;
    } while (uVar1 < *param_2);
    param_1[1] = dVar5;
    *param_1 = dVar4;
  }
  return;
}



/* Entry: 1093f9e00; end: 1093f9e97;  */

double FUN_1093f9e00(double param_1,long param_2)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  
  dVar1 = 1.0;
  if (1e-05 < param_1) {
    dVar1 = param_1;
    _atan(param_1);
    dVar2 = dVar1 * dVar1;
    dVar3 = dVar2 * dVar1 * dVar2;
    dVar4 = dVar2 * dVar3;
    dVar5 = dVar2 * dVar4;
    dVar6 = dVar2 * dVar5;
    dVar7 = dVar2 * dVar6;
    dVar1 = (dVar1 * dVar2 * *(double *)(param_2 + 0x18) + dVar1 * *(double *)(param_2 + 0x10) +
             dVar3 * *(double *)(param_2 + 0x20) + dVar4 * *(double *)(param_2 + 0x28) +
             dVar5 * *(double *)(param_2 + 0x30) + dVar6 * *(double *)(param_2 + 0x38) +
             dVar7 * *(double *)(param_2 + 0x40) + dVar2 * dVar7 * *(double *)(param_2 + 0x48)) /
            param_1;
  }
  return dVar1;
}



/* Entry: 1093f9e98; end: 1093f9f23;  */

void FUN_1093f9e98(double *param_1,long param_2,double *param_3)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  
  dVar2 = *param_3;
  dVar3 = param_3[1];
  dVar4 = *(double *)(param_2 + 0x50);
  dVar5 = *(double *)(param_2 + 0x58);
  dVar6 = *param_3 * *param_3 + param_3[1] * param_3[1];
  dVar1 = SQRT(dVar6);
  FUN_1093f9e00();
  *param_1 = dVar5 * (dVar6 + dVar2 * (dVar2 + dVar2)) + dVar3 * dVar2 * (dVar4 + dVar4) +
             dVar2 * dVar1;
  param_1[1] = dVar3 * dVar2 * (dVar5 + dVar5) + (dVar6 + dVar3 * (dVar3 + dVar3)) * dVar4 +
               dVar3 * dVar1;
  return;
}



/* Entry: 1093f9f24; end: 1093fa0b7;  */

void FUN_1093f9f24(double *param_1,long param_2,double *param_3)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  
  dVar6 = param_3[1];
  dVar5 = *param_3;
  dVar12 = SQRT(dVar5 * dVar5 + dVar6 * dVar6);
  if (ABS(dVar12) <= 2.220446049250313e-16) {
    param_1[1] = 0.0;
    param_1[2] = 0.0;
    dVar1 = 1.0;
    dVar12 = 1.0;
  }
  else {
    dVar13 = *(double *)(param_2 + 0x50);
    dVar14 = *(double *)(param_2 + 0x58);
    dVar1 = dVar12;
    _atan();
    dVar2 = dVar1 * dVar1;
    dVar3 = dVar1 * dVar2;
    dVar7 = dVar2 * dVar3;
    dVar8 = dVar2 * dVar7;
    dVar9 = dVar2 * dVar8;
    dVar10 = dVar2 * dVar9;
    dVar11 = dVar2 * dVar10;
    dVar4 = dVar12 * dVar12;
    dVar12 = (dVar3 * *(double *)(param_2 + 0x18) + dVar1 * *(double *)(param_2 + 0x10) +
              dVar7 * *(double *)(param_2 + 0x20) + dVar8 * *(double *)(param_2 + 0x28) +
              dVar9 * *(double *)(param_2 + 0x30) + dVar10 * *(double *)(param_2 + 0x38) +
              dVar11 * *(double *)(param_2 + 0x40) + dVar2 * dVar11 * *(double *)(param_2 + 0x48)) /
             dVar12;
    dVar2 = (*(double *)(param_2 + 0x10) +
            (dVar3 * *(double *)(param_2 + 0x20) * 5.0 + dVar1 * *(double *)(param_2 + 0x18) * 3.0 +
             dVar7 * *(double *)(param_2 + 0x28) * 7.0 + dVar8 * *(double *)(param_2 + 0x30) * 9.0 +
             dVar9 * *(double *)(param_2 + 0x38) * 11.0 +
             dVar10 * *(double *)(param_2 + 0x40) * 13.0 +
            dVar11 * *(double *)(param_2 + 0x48) * 15.0) * dVar1) / (dVar4 + dVar4 * dVar4) -
            dVar12 / dVar4;
    dVar3 = dVar2 * dVar5;
    dVar1 = dVar12 + (dVar13 + dVar13) * dVar6 + dVar5 * dVar14 * 6.0 + dVar5 * dVar3;
    dVar12 = dVar12 + dVar13 * 6.0 * dVar6 + dVar5 * (dVar14 + dVar14) + dVar2 * dVar6 * dVar6;
    dVar5 = (dVar14 + dVar14) * dVar6 + dVar5 * (dVar13 + dVar13) + dVar3 * dVar6;
    param_1[1] = dVar5;
    param_1[2] = dVar5;
  }
  *param_1 = dVar1;
  param_1[3] = dVar12;
  return;
}



/* Entry: 1093fa0b8; end: 1093fa1eb;  */

void FUN_1093fa0b8(double *param_1,undefined8 param_2,double *param_3)

{
  double dVar1;
  double dStack_b0;
  double dStack_a8;
  double dStack_a0;
  double dStack_98;
  undefined1 auStack_90 [16];
  undefined8 uStack_80;
  long lStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined4 uStack_30;
  undefined8 uStack_28;
  
  if (ABS(SQRT(*param_3 * *param_3 + param_3[1] * param_3[1])) <= 2.220446049250313e-16) {
    dVar1 = 1.0;
  }
  else {
    FUN_1093f9cf4(auStack_90);
    FUN_1093f9f24(&dStack_b0,param_2,auStack_90);
    dVar1 = -(dStack_a8 * dStack_a0) + dStack_98 * dStack_b0;
    if (1.1920928955078125e-07 < ABS(dVar1)) {
      param_1[1] = -dStack_a8 / dVar1;
      *param_1 = dStack_98 / dVar1;
      param_1[3] = dStack_b0 / dVar1;
      param_1[2] = -dStack_a0 / dVar1;
      return;
    }
    uStack_80 = 0;
    uStack_28 = 0;
    uStack_68 = 0;
    uStack_70 = 0;
    uStack_58 = 0;
    uStack_60 = 0;
    uStack_48 = 0;
    uStack_50 = 0;
    uStack_38 = 0;
    uStack_40 = 0;
    uStack_30 = 0;
    FUN_1099a9f0c(&uStack_80,&UNK_10f56c97f,300,1,FUN_1099aa768,0);
    FUN_1092b4db8(lStack_78 + 0x7540,&UNK_10f56ca4e,0x46);
    FUN_1099ab3b0(&uStack_80);
    dVar1 = 1.1920928955078125e-07;
  }
  *param_1 = dVar1;
  param_1[1] = 0.0;
  param_1[2] = 0.0;
  param_1[3] = dVar1;
  return;
}



/* Entry: 1093fa1ec; end: 1093fa3b7;  */

double FUN_1093fa1ec(double param_1,int *param_2,double *param_3,int **param_4)

{
  int *piVar1;
  int iVar2;
  double *pdVar3;
  int *piVar4;
  ulong uVar5;
  ulong uVar6;
  double *pdVar7;
  long lVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  undefined1 uStack_a1;
  int *piStack_a0;
  undefined8 uStack_98;
  double *pdStack_88;
  undefined8 uStack_80;
  undefined8 uStack_70;
  int aiStack_60 [2];
  int *piStack_58;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  dVar9 = 1.0;
  if (1e-05 < param_1) {
    piStack_a0 = param_2 + 6;
    uStack_98 = 7;
    uStack_80 = 1;
    uStack_70 = 10;
    piVar1 = aiStack_60;
    param_4 = &piStack_a0;
    pdStack_88 = (double *)(param_2 + 4);
    piStack_58 = piStack_a0;
    FUN_1093fa3b8(piVar1,&uStack_a1);
    if (dVar9 <= 2.220446049250313e-16) {
      dVar9 = param_1 / *(double *)(param_2 + 4);
      *param_3 = dVar9;
    }
    else {
      dVar9 = param_1;
      _atan();
      dVar9 = dVar9 / *(double *)(param_2 + 4);
      *param_3 = dVar9;
      iVar2 = *param_2;
      if (iVar2 != 0) {
        do {
          iVar2 = iVar2 + -1;
          dVar10 = dVar9 * dVar9;
          dVar11 = dVar9 * dVar10;
          dVar12 = dVar10 * dVar11;
          dVar13 = dVar10 * dVar12;
          dVar14 = dVar10 * dVar13;
          dVar15 = dVar10 * dVar14;
          dVar16 = dVar10 * dVar15;
          dVar10 = ((dVar11 * *(double *)(param_2 + 6) + dVar9 * *(double *)(param_2 + 4) +
                     dVar12 * *(double *)(param_2 + 8) + dVar13 * *(double *)(param_2 + 10) +
                     dVar14 * *(double *)(param_2 + 0xc) + dVar15 * *(double *)(param_2 + 0xe) +
                     dVar16 * *(double *)(param_2 + 0x10) +
                    dVar10 * dVar16 * *(double *)(param_2 + 0x12)) - param_1) /
                   (*(double *)(param_2 + 4) +
                   (dVar11 * *(double *)(param_2 + 8) * 5.0 + dVar9 * *(double *)(param_2 + 6) * 3.0
                    + dVar12 * *(double *)(param_2 + 10) * 7.0 +
                    dVar13 * *(double *)(param_2 + 0xc) * 9.0 +
                    dVar14 * *(double *)(param_2 + 0xe) * 11.0 +
                    dVar15 * *(double *)(param_2 + 0x10) * 13.0 +
                   dVar16 * *(double *)(param_2 + 0x12) * 15.0) * dVar9);
          dVar9 = dVar9 - dVar10;
          *param_3 = dVar9;
        } while (*(double *)(param_2 + 2) <= ABS(dVar10) && iVar2 != 0);
      }
    }
    param_2 = piVar1;
    _tan();
    dVar9 = dVar9 / param_1;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return dVar9;
  }
  ___stack_chk_fail(dVar9);
  __Unwind_Resume();
  piVar4 = param_4[1];
  piVar1 = (int *)((long)piVar4 + 3);
  if (-1 < (long)piVar4) {
    piVar1 = piVar4;
  }
  pdVar3 = *(double **)(param_2 + 2);
  if ((long)piVar4 + 1U < 3) {
    return *pdVar3 * *pdVar3;
  }
  uVar5 = (long)piVar4 - ((long)piVar4 >> 0x3f) & 0xfffffffffffffffe;
  dVar9 = *pdVar3 * *pdVar3;
  dVar10 = pdVar3[1] * pdVar3[1];
  if (3 < (long)piVar4) {
    uVar6 = (ulong)piVar1 & 0xfffffffffffffffc;
    dVar11 = pdVar3[2] * pdVar3[2];
    dVar12 = pdVar3[3] * pdVar3[3];
    if ((int *)0x7 < piVar4) {
      pdVar7 = pdVar3 + 6;
      lVar8 = 4;
      do {
        dVar9 = dVar9 + pdVar7[-2] * pdVar7[-2];
        dVar10 = dVar10 + pdVar7[-1] * pdVar7[-1];
        dVar11 = dVar11 + *pdVar7 * *pdVar7;
        dVar12 = dVar12 + pdVar7[1] * pdVar7[1];
        lVar8 = lVar8 + 4;
        pdVar7 = pdVar7 + 4;
      } while (lVar8 < (long)uVar6);
    }
    dVar9 = dVar11 + dVar9;
    dVar10 = dVar12 + dVar10;
    if ((long)uVar6 < (long)uVar5) {
      dVar12 = (pdVar3 + uVar6)[1];
      dVar11 = pdVar3[uVar6];
      dVar9 = dVar9 + dVar11 * dVar11;
      dVar10 = dVar10 + dVar12 * dVar12;
    }
  }
  dVar9 = dVar9 + dVar10;
  lVar8 = (long)piVar4 % 2;
  if (lVar8 != 0 && lVar8 < 0 == SBORROW8((long)piVar4,uVar5)) {
    pdVar3 = pdVar3 + ((long)piVar4 / 2) * 2;
    do {
      dVar9 = dVar9 + *pdVar3 * *pdVar3;
      lVar8 = lVar8 + -1;
      pdVar3 = pdVar3 + 1;
    } while (lVar8 != 0);
  }
  return dVar9;
}



/* Entry: 1093fa3b8; end: 1093fa493;  */

double FUN_1093fa3b8(long param_1,undefined8 param_2,long param_3)

{
  double *pdVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  double *pdVar5;
  long lVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  
  uVar2 = *(ulong *)(param_3 + 8);
  uVar4 = uVar2 + 3;
  if (-1 < (long)uVar2) {
    uVar4 = uVar2;
  }
  pdVar1 = *(double **)(param_1 + 8);
  if (uVar2 + 1 < 3) {
    return *pdVar1 * *pdVar1;
  }
  uVar3 = uVar2 - ((long)uVar2 >> 0x3f) & 0xfffffffffffffffe;
  dVar7 = *pdVar1 * *pdVar1;
  dVar8 = pdVar1[1] * pdVar1[1];
  if (3 < (long)uVar2) {
    uVar4 = uVar4 & 0xfffffffffffffffc;
    dVar9 = pdVar1[2] * pdVar1[2];
    dVar10 = pdVar1[3] * pdVar1[3];
    if (7 < uVar2) {
      pdVar5 = pdVar1 + 6;
      lVar6 = 4;
      do {
        dVar7 = dVar7 + pdVar5[-2] * pdVar5[-2];
        dVar8 = dVar8 + pdVar5[-1] * pdVar5[-1];
        dVar9 = dVar9 + *pdVar5 * *pdVar5;
        dVar10 = dVar10 + pdVar5[1] * pdVar5[1];
        lVar6 = lVar6 + 4;
        pdVar5 = pdVar5 + 4;
      } while (lVar6 < (long)uVar4);
    }
    dVar7 = dVar9 + dVar7;
    dVar8 = dVar10 + dVar8;
    if ((long)uVar4 < (long)uVar3) {
      dVar10 = (pdVar1 + uVar4)[1];
      dVar9 = pdVar1[uVar4];
      dVar7 = dVar7 + dVar9 * dVar9;
      dVar8 = dVar8 + dVar10 * dVar10;
    }
  }
  dVar7 = dVar7 + dVar8;
  lVar6 = (long)uVar2 % 2;
  if (lVar6 != 0 && lVar6 < 0 == SBORROW8(uVar2,uVar3)) {
    pdVar1 = pdVar1 + ((long)uVar2 / 2) * 2;
    do {
      dVar7 = dVar7 + *pdVar1 * *pdVar1;
      lVar6 = lVar6 + -1;
      pdVar1 = pdVar1 + 1;
    } while (lVar6 != 0);
  }
  return dVar7;
}



/* Entry: 1093fa494; end: 1093fa4df;  */

void FUN_1093fa494(undefined8 *param_1,long param_2)

{
  undefined1 uStack_21;
  
  *param_1 = 0;
  param_1[1] = 0;
  func_0x0001093fa708(param_1,param_2 + 0x10,&uStack_21);
  return;
}



/* Entry: 1093fa4e0; end: 1093fa517;  */

void FUN_1093fa4e0(undefined8 *param_1,long param_2,undefined8 *param_3)

{
  uint *puVar1;
  uint uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  undefined8 uVar7;
  float fVar8;
  float fVar9;
  undefined8 uVar10;
  
  puVar1 = (uint *)(param_2 + 8);
  uVar10 = *(undefined8 *)(param_2 + 0x30);
  fVar4 = *(float *)(param_2 + 0x34);
  *param_1 = *param_3;
  if (*puVar1 != 0) {
    uVar2 = 0;
    fVar9 = (float)uVar10;
    uVar7 = *param_1;
    fVar5 = 0.0;
    do {
      fVar6 = (float)uVar7;
      fVar8 = (float)((ulong)uVar7 >> 0x20);
      fVar3 = fVar6 * fVar6 + fVar8 * fVar8;
      if (ABS(fVar3 - fVar5) < *(float *)(param_2 + 0xc)) break;
      fVar5 = SQRT(fVar3);
      FUN_1093fa904(puVar1);
      uVar7 = CONCAT44(((float)((ulong)*param_3 >> 0x20) -
                       (fVar8 * (fVar4 + fVar4) * fVar6 + (fVar3 + (fVar8 + fVar8) * fVar8) * fVar9)
                       ) / fVar5,
                       ((float)*param_3 -
                       ((float)((ulong)uVar10 >> 0x20) * (fVar3 + fVar6 * (fVar6 + fVar6)) +
                       fVar8 * (fVar9 + fVar9) * fVar6)) / fVar5);
      uVar2 = uVar2 + 1;
      fVar5 = fVar3;
    } while (uVar2 < *puVar1);
    *param_1 = uVar7;
  }
  return;
}



/* Entry: 1093fa518; end: 1093fa54f;  */

void FUN_1093fa518(long param_1,undefined8 *param_2)

{
  float fVar1;
  float fVar2;
  undefined4 uStack_14;
  
  uStack_14 = 0;
  fVar1 = (float)*param_2;
  fVar2 = (float)((ulong)*param_2 >> 0x20);
  FUN_1093face8(SQRT(fVar1 * fVar1 + fVar2 * fVar2),param_1 + 8,&uStack_14);
  return;
}



/* Entry: 1093fa550; end: 1093fa5eb;  */

undefined8 * FUN_1093fa550(undefined4 param_1,long *param_2,long *param_3)

{
  undefined8 *puVar1;
  undefined8 auStack_48 [2];
  undefined8 auStack_38 [2];
  undefined4 uStack_24;
  
  uStack_24 = param_1;
  (**(code **)(*param_3 + 0x18))(auStack_38,param_3);
  (**(code **)(*param_2 + 0x18))(auStack_48,param_2);
  puVar1 = auStack_38;
  FUN_1093f6abc(puVar1,auStack_48,&uStack_24);
  _free(auStack_48[0]);
  _free(auStack_38[0]);
  return puVar1;
}



/* Entry: 1093fa5ec; end: 1093fa5f3;  */

undefined8 FUN_1093fa5ec(void)

{
  return 0;
}



/* Entry: 1093fa5f4; end: 1093fa7f3;  */

void FUN_1093fa5f4(long param_1,long *param_2)

{
  undefined8 *puVar1;
  long *plVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  puVar1 = (undefined8 *)0x38;
  __Znwm();
  uVar3 = *(undefined8 *)(param_1 + 8);
  uVar5 = *(undefined8 *)(param_1 + 0x18);
  uVar4 = *(undefined8 *)(param_1 + 0x10);
  uVar7 = *(undefined8 *)(param_1 + 0x28);
  uVar6 = *(undefined8 *)(param_1 + 0x20);
  uVar8 = *(undefined8 *)(param_1 + 0x30);
  *puVar1 = &PTR_DAT_110af5c78;
  puVar1[1] = uVar3;
  puVar1[3] = uVar5;
  puVar1[2] = uVar4;
  puVar1[5] = uVar7;
  puVar1[4] = uVar6;
  puVar1[6] = uVar8;
  plVar2 = (long *)*param_2;
  *param_2 = (long)puVar1;
  if (plVar2 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001093fa650. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar2 + 8))();
    return;
  }
  return;
}



/* Entry: 1093fa7f4; end: 1093fa903;  */

void FUN_1093fa7f4(undefined8 *param_1,uint *param_2,undefined8 *param_3)

{
  uint uVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  undefined8 uVar6;
  float fVar7;
  float fVar8;
  undefined8 uVar9;
  
  uVar9 = *(undefined8 *)(param_2 + 10);
  fVar3 = (float)param_2[0xb];
  *param_1 = *param_3;
  if (*param_2 != 0) {
    uVar1 = 0;
    fVar8 = (float)uVar9;
    uVar6 = *param_1;
    fVar4 = 0.0;
    do {
      fVar5 = (float)uVar6;
      fVar7 = (float)((ulong)uVar6 >> 0x20);
      fVar2 = fVar5 * fVar5 + fVar7 * fVar7;
      if (ABS(fVar2 - fVar4) < (float)param_2[1]) break;
      fVar4 = SQRT(fVar2);
      FUN_1093fa904(param_2);
      uVar6 = CONCAT44(((float)((ulong)*param_3 >> 0x20) -
                       (fVar7 * (fVar3 + fVar3) * fVar5 + (fVar2 + (fVar7 + fVar7) * fVar7) * fVar8)
                       ) / fVar4,
                       ((float)*param_3 -
                       ((float)((ulong)uVar9 >> 0x20) * (fVar2 + fVar5 * (fVar5 + fVar5)) +
                       fVar7 * (fVar8 + fVar8) * fVar5)) / fVar4);
      uVar1 = uVar1 + 1;
      fVar4 = fVar2;
    } while (uVar1 < *param_2);
    *param_1 = uVar6;
  }
  return;
}



/* Entry: 1093fa904; end: 1093fa99b;  */

float FUN_1093fa904(undefined8 param_1,long param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  
  fVar1 = 1.0;
  fVar8 = (float)param_1;
  if (1e-05 < fVar8) {
    _atanf(param_1);
    fVar1 = (float)param_1;
    fVar2 = fVar1 * fVar1;
    fVar3 = fVar2 * fVar1 * fVar2;
    fVar4 = fVar2 * fVar3;
    fVar5 = fVar2 * fVar4;
    fVar6 = fVar2 * fVar5;
    fVar7 = fVar2 * fVar6;
    fVar1 = (fVar1 * fVar2 * *(float *)(param_2 + 0xc) + fVar1 * *(float *)(param_2 + 8) +
             fVar3 * *(float *)(param_2 + 0x10) + fVar4 * *(float *)(param_2 + 0x14) +
             fVar5 * *(float *)(param_2 + 0x18) + fVar6 * *(float *)(param_2 + 0x1c) +
             fVar7 * *(float *)(param_2 + 0x20) + fVar2 * fVar7 * *(float *)(param_2 + 0x24)) /
            fVar8;
  }
  return fVar1;
}



/* Entry: 1093fa99c; end: 1093faa2f;  */

void FUN_1093fa99c(float *param_1,long param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  fVar3 = *param_3;
  fVar4 = param_3[1];
  fVar5 = *(float *)(param_2 + 0x28);
  fVar6 = *(float *)(param_2 + 0x2c);
  fVar1 = (float)*(undefined8 *)param_3;
  fVar2 = (float)((ulong)*(undefined8 *)param_3 >> 0x20);
  fVar1 = fVar1 * fVar1 + fVar2 * fVar2;
  fVar2 = SQRT(fVar1);
  FUN_1093fa904();
  *param_1 = fVar6 * (fVar1 + fVar3 * (fVar3 + fVar3)) + fVar4 * fVar3 * (fVar5 + fVar5) +
             fVar3 * fVar2;
  param_1[1] = fVar4 * fVar3 * (fVar6 + fVar6) + (fVar1 + fVar4 * (fVar4 + fVar4)) * fVar5 +
               fVar4 * fVar2;
  return;
}



/* Entry: 1093faa30; end: 1093fabbb;  */

void FUN_1093faa30(undefined4 *param_1,long param_2,undefined8 *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  undefined8 uVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  
  fVar6 = (float)*param_3;
  fVar9 = (float)((ulong)*param_3 >> 0x20);
  fVar15 = SQRT(fVar6 * fVar6 + fVar9 * fVar9);
  if (ABS(fVar15) <= 1.1920929e-07) {
    uVar4 = NEON_fmov(0x3f800000,4);
    fVar15 = 0.0;
  }
  else {
    fVar1 = *(float *)(param_2 + 0x28);
    fVar2 = *(float *)(param_2 + 0x2c);
    fVar3 = fVar15;
    _atanf();
    fVar5 = fVar3 * fVar3;
    fVar7 = fVar3 * fVar5;
    fVar10 = fVar5 * fVar7;
    fVar11 = fVar5 * fVar10;
    fVar12 = fVar5 * fVar11;
    fVar13 = fVar5 * fVar12;
    fVar14 = fVar5 * fVar13;
    fVar8 = fVar15 * fVar15;
    fVar15 = (fVar7 * *(float *)(param_2 + 0xc) + fVar3 * *(float *)(param_2 + 8) +
              fVar10 * *(float *)(param_2 + 0x10) + fVar11 * *(float *)(param_2 + 0x14) +
              fVar12 * *(float *)(param_2 + 0x18) + fVar13 * *(float *)(param_2 + 0x1c) +
              fVar14 * *(float *)(param_2 + 0x20) + fVar5 * fVar14 * *(float *)(param_2 + 0x24)) /
             fVar15;
    fVar3 = (*(float *)(param_2 + 8) +
            (fVar7 * *(float *)(param_2 + 0x10) * 5.0 + fVar3 * *(float *)(param_2 + 0xc) * 3.0 +
             fVar10 * *(float *)(param_2 + 0x14) * 7.0 + fVar11 * *(float *)(param_2 + 0x18) * 9.0 +
             fVar12 * *(float *)(param_2 + 0x1c) * 11.0 + fVar13 * *(float *)(param_2 + 0x20) * 13.0
            + fVar14 * *(float *)(param_2 + 0x24) * 15.0) * fVar3) / (fVar8 + fVar8 * fVar8) -
            fVar15 / fVar8;
    fVar7 = fVar1 * 2.0;
    fVar5 = fVar6 * fVar3;
    uVar4 = CONCAT44(fVar15 + fVar1 * 6.0 * fVar9 + fVar2 * 2.0 * fVar6 + fVar9 * fVar9 * fVar3,
                     fVar15 + fVar7 * fVar9 + fVar2 * 6.0 * fVar6 + fVar6 * fVar5);
    fVar15 = (fVar2 + fVar2) * fVar9 + fVar6 * fVar7 + fVar5 * fVar9;
  }
  param_1[3] = (int)((ulong)uVar4 >> 0x20);
  *param_1 = (int)uVar4;
  param_1[1] = fVar15;
  param_1[2] = fVar15;
  return;
}



/* Entry: 1093fabbc; end: 1093face7;  */

void FUN_1093fabbc(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  float fVar2;
  undefined8 uVar1;
  undefined8 uVar3;
  float fVar4;
  float fStack_98;
  float fStack_94;
  float fStack_90;
  float fStack_8c;
  undefined1 auStack_88 [8];
  undefined8 uStack_80;
  long lStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined4 uStack_30;
  undefined8 uStack_28;
  
  fVar4 = (float)*param_3;
  fVar2 = (float)((ulong)*param_3 >> 0x20);
  if (ABS(SQRT(fVar4 * fVar4 + fVar2 * fVar2)) <= 1.1920929e-07) {
    uVar3 = 0x3f80000000000000;
    uVar1 = 0x3f800000;
  }
  else {
    FUN_1093fa7f4(auStack_88);
    FUN_1093faa30(&fStack_98,param_2,auStack_88);
    fVar4 = -(fStack_94 * fStack_90) + fStack_8c * fStack_98;
    if (ABS(fVar4) <= 1.1920929e-07) {
      uStack_80 = 0;
      uStack_28 = 0;
      uStack_68 = 0;
      uStack_70 = 0;
      uStack_58 = 0;
      uStack_60 = 0;
      uStack_48 = 0;
      uStack_50 = 0;
      uStack_38 = 0;
      uStack_40 = 0;
      uStack_30 = 0;
      FUN_1099a9f0c(&uStack_80,&UNK_10f56c97f,300,1,FUN_1099aa768,0);
      FUN_1092b4db8(lStack_78 + 0x7540,&UNK_10f56ca4e,0x46);
      FUN_1099ab3b0(&uStack_80);
      uVar3 = 0x3400000000000000;
      uVar1 = 0x34000000;
    }
    else {
      uVar1 = CONCAT44(-fStack_94 / fVar4,fStack_8c / fVar4);
      uVar3 = CONCAT44(fStack_98 / fVar4,-fStack_90 / fVar4);
    }
  }
  param_1[1] = uVar3;
  *param_1 = uVar1;
  return;
}



/* Entry: 1093face8; end: 1093faeaf;  */

ulong FUN_1093face8(float param_1,int *param_2,float *param_3,int **param_4)

{
  undefined1 auVar1 [16];
  int *piVar2;
  int *piVar3;
  int iVar4;
  float *pfVar5;
  int *piVar6;
  long lVar7;
  ulong uVar8;
  float *pfVar9;
  float fVar10;
  undefined1 auVar11 [16];
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  undefined1 uStack_a1;
  int *piStack_a0;
  undefined8 uStack_98;
  float *pfStack_88;
  undefined8 uStack_80;
  undefined8 uStack_70;
  int aiStack_60 [2];
  int *piStack_58;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  fVar10 = 1.0;
  if (1e-05 < param_1) {
    piStack_a0 = param_2 + 3;
    uStack_98 = 7;
    uStack_80 = 1;
    uStack_70 = 10;
    piVar3 = aiStack_60;
    param_4 = &piStack_a0;
    pfStack_88 = (float *)(param_2 + 2);
    piStack_58 = piStack_a0;
    FUN_1093faeb0(piVar3,&uStack_a1);
    if (fVar10 <= 1.1920929e-07) {
      fVar10 = param_1 / (float)param_2[2];
      *param_3 = fVar10;
    }
    else {
      fVar10 = param_1;
      _atanf();
      fVar10 = fVar10 / (float)param_2[2];
      *param_3 = fVar10;
      iVar4 = *param_2;
      if (iVar4 != 0) {
        do {
          iVar4 = iVar4 + -1;
          fVar16 = fVar10 * fVar10;
          fVar17 = fVar10 * fVar16;
          fVar18 = fVar16 * fVar17;
          fVar19 = fVar16 * fVar18;
          fVar20 = fVar16 * fVar19;
          fVar21 = fVar16 * fVar20;
          fVar22 = fVar16 * fVar21;
          fVar16 = ((fVar17 * (float)param_2[3] + fVar10 * (float)param_2[2] +
                     fVar18 * (float)param_2[4] + fVar19 * (float)param_2[5] +
                     fVar20 * (float)param_2[6] + fVar21 * (float)param_2[7] +
                     fVar22 * (float)param_2[8] + fVar16 * fVar22 * (float)param_2[9]) - param_1) /
                   ((float)param_2[2] +
                   (fVar17 * (float)param_2[4] * 5.0 + fVar10 * (float)param_2[3] * 3.0 +
                    fVar18 * (float)param_2[5] * 7.0 + fVar19 * (float)param_2[6] * 9.0 +
                    fVar20 * (float)param_2[7] * 11.0 + fVar21 * (float)param_2[8] * 13.0 +
                   fVar22 * (float)param_2[9] * 15.0) * fVar10);
          fVar10 = fVar10 - fVar16;
          *param_3 = fVar10;
        } while ((float)param_2[1] <= ABS(fVar16) && iVar4 != 0);
      }
    }
    param_2 = piVar3;
    _tanf();
    fVar10 = fVar10 / param_1;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_48) {
    ___stack_chk_fail(fVar10);
    __Unwind_Resume();
    piVar6 = param_4[1];
    piVar3 = (int *)((long)piVar6 + 3);
    piVar2 = (int *)((long)piVar6 + 7);
    if (-1 < (long)piVar6) {
      piVar3 = piVar6;
      piVar2 = piVar6;
    }
    pfVar5 = *(float **)(param_2 + 2);
    if ((long)piVar6 + 3U < 7) {
      fVar17 = *pfVar5 * *pfVar5;
      fVar10 = 0.0;
      if (1 < (long)piVar6) {
        lVar7 = (long)piVar6 + -1;
        do {
          pfVar5 = pfVar5 + 1;
          fVar17 = fVar17 + *pfVar5 * *pfVar5;
          fVar10 = 0.0;
          lVar7 = lVar7 + -1;
        } while (lVar7 != 0);
      }
    }
    else {
      fVar17 = (float)*(undefined8 *)(pfVar5 + 2);
      fVar18 = (float)((ulong)*(undefined8 *)(pfVar5 + 2) >> 0x20);
      fVar10 = (float)*(undefined8 *)pfVar5;
      fVar16 = (float)((ulong)*(undefined8 *)pfVar5 >> 0x20);
      fVar10 = fVar10 * fVar10;
      fVar16 = fVar16 * fVar16;
      fVar17 = fVar17 * fVar17;
      fVar18 = fVar18 * fVar18;
      if (7 < (long)piVar6) {
        uVar8 = (ulong)piVar2 & 0xfffffffffffffff8;
        fVar19 = pfVar5[4] * pfVar5[4];
        fVar20 = pfVar5[5] * pfVar5[5];
        fVar21 = pfVar5[6] * pfVar5[6];
        fVar22 = pfVar5[7] * pfVar5[7];
        if ((int *)0xf < piVar6) {
          pfVar9 = pfVar5 + 0xc;
          lVar7 = 8;
          do {
            fVar12 = (float)*(undefined8 *)(pfVar9 + -4);
            fVar13 = (float)((ulong)*(undefined8 *)(pfVar9 + -4) >> 0x20);
            fVar14 = (float)*(undefined8 *)(pfVar9 + -2);
            fVar15 = (float)((ulong)*(undefined8 *)(pfVar9 + -2) >> 0x20);
            fVar10 = fVar10 + fVar12 * fVar12;
            fVar16 = fVar16 + fVar13 * fVar13;
            fVar17 = fVar17 + fVar14 * fVar14;
            fVar18 = fVar18 + fVar15 * fVar15;
            fVar12 = (float)*(undefined8 *)pfVar9;
            fVar13 = (float)((ulong)*(undefined8 *)pfVar9 >> 0x20);
            fVar14 = (float)*(undefined8 *)(pfVar9 + 2);
            fVar15 = (float)((ulong)*(undefined8 *)(pfVar9 + 2) >> 0x20);
            fVar19 = fVar19 + fVar12 * fVar12;
            fVar20 = fVar20 + fVar13 * fVar13;
            fVar21 = fVar21 + fVar14 * fVar14;
            fVar22 = fVar22 + fVar15 * fVar15;
            lVar7 = lVar7 + 8;
            pfVar9 = pfVar9 + 8;
          } while (lVar7 < (long)uVar8);
        }
        fVar10 = fVar19 + fVar10;
        fVar16 = fVar20 + fVar16;
        fVar17 = fVar21 + fVar17;
        fVar18 = fVar22 + fVar18;
        if ((long)uVar8 < (long)((ulong)piVar3 & 0xfffffffffffffffc)) {
          pfVar9 = pfVar5 + uVar8;
          fVar10 = fVar10 + *pfVar9 * *pfVar9;
          fVar16 = fVar16 + pfVar9[1] * pfVar9[1];
          fVar17 = fVar17 + pfVar9[2] * pfVar9[2];
          fVar18 = fVar18 + pfVar9[3] * pfVar9[3];
        }
      }
      auVar11._4_4_ = fVar16;
      auVar11._0_4_ = fVar10;
      auVar11._8_4_ = fVar17;
      auVar11._12_4_ = fVar18;
      auVar1._4_4_ = fVar16;
      auVar1._0_4_ = fVar10;
      auVar1._8_4_ = fVar17;
      auVar1._12_4_ = fVar18;
      auVar11 = NEON_ext(auVar11,auVar1,8,1);
      fVar10 = fVar10 + auVar11._0_4_;
      fVar16 = fVar16 + auVar11._4_4_;
      fVar17 = fVar10 + fVar16;
      fVar10 = fVar10 + fVar16;
      lVar7 = (long)piVar6 % 4;
      if (lVar7 != 0 && lVar7 < 0 == SBORROW8((long)piVar6,(ulong)piVar3 & 0xfffffffffffffffc)) {
        pfVar5 = pfVar5 + ((long)piVar3 >> 2) * 4;
        do {
          fVar17 = fVar17 + *pfVar5 * *pfVar5;
          fVar10 = 0.0;
          lVar7 = lVar7 + -1;
          pfVar5 = pfVar5 + 1;
        } while (lVar7 != 0);
      }
    }
    return CONCAT44(fVar10,fVar17);
  }
  return (ulong)(uint)fVar10;
}



/* Entry: 1093faeb0; end: 1093fafa3;  */

undefined8 FUN_1093faeb0(long param_1,undefined8 param_2,long param_3)

{
  ulong uVar1;
  undefined1 auVar2 [16];
  float *pfVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  float *pfVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar14;
  float fVar15;
  float fVar16;
  undefined1 auVar13 [16];
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  
  uVar4 = *(ulong *)(param_3 + 8);
  uVar1 = uVar4 + 3;
  uVar6 = uVar4 + 7;
  if (-1 < (long)uVar4) {
    uVar1 = uVar4;
    uVar6 = uVar4;
  }
  pfVar3 = *(float **)(param_1 + 8);
  if (uVar4 + 3 < 7) {
    fVar8 = *pfVar3 * *pfVar3;
    fVar9 = 0.0;
    if (1 < (long)uVar4) {
      lVar5 = uVar4 - 1;
      do {
        pfVar3 = pfVar3 + 1;
        fVar8 = fVar8 + *pfVar3 * *pfVar3;
        fVar9 = 0.0;
        lVar5 = lVar5 + -1;
      } while (lVar5 != 0);
    }
  }
  else {
    fVar8 = (float)*(undefined8 *)(pfVar3 + 2);
    fVar11 = (float)((ulong)*(undefined8 *)(pfVar3 + 2) >> 0x20);
    fVar9 = (float)*(undefined8 *)pfVar3;
    fVar10 = (float)((ulong)*(undefined8 *)pfVar3 >> 0x20);
    fVar9 = fVar9 * fVar9;
    fVar10 = fVar10 * fVar10;
    fVar8 = fVar8 * fVar8;
    fVar11 = fVar11 * fVar11;
    if (7 < (long)uVar4) {
      uVar6 = uVar6 & 0xfffffffffffffff8;
      fVar12 = pfVar3[4] * pfVar3[4];
      fVar14 = pfVar3[5] * pfVar3[5];
      fVar15 = pfVar3[6] * pfVar3[6];
      fVar16 = pfVar3[7] * pfVar3[7];
      if (0xf < uVar4) {
        pfVar7 = pfVar3 + 0xc;
        lVar5 = 8;
        do {
          fVar17 = (float)*(undefined8 *)(pfVar7 + -4);
          fVar18 = (float)((ulong)*(undefined8 *)(pfVar7 + -4) >> 0x20);
          fVar19 = (float)*(undefined8 *)(pfVar7 + -2);
          fVar20 = (float)((ulong)*(undefined8 *)(pfVar7 + -2) >> 0x20);
          fVar9 = fVar9 + fVar17 * fVar17;
          fVar10 = fVar10 + fVar18 * fVar18;
          fVar8 = fVar8 + fVar19 * fVar19;
          fVar11 = fVar11 + fVar20 * fVar20;
          fVar17 = (float)*(undefined8 *)pfVar7;
          fVar18 = (float)((ulong)*(undefined8 *)pfVar7 >> 0x20);
          fVar19 = (float)*(undefined8 *)(pfVar7 + 2);
          fVar20 = (float)((ulong)*(undefined8 *)(pfVar7 + 2) >> 0x20);
          fVar12 = fVar12 + fVar17 * fVar17;
          fVar14 = fVar14 + fVar18 * fVar18;
          fVar15 = fVar15 + fVar19 * fVar19;
          fVar16 = fVar16 + fVar20 * fVar20;
          lVar5 = lVar5 + 8;
          pfVar7 = pfVar7 + 8;
        } while (lVar5 < (long)uVar6);
      }
      fVar9 = fVar12 + fVar9;
      fVar10 = fVar14 + fVar10;
      fVar8 = fVar15 + fVar8;
      fVar11 = fVar16 + fVar11;
      if ((long)uVar6 < (long)(uVar1 & 0xfffffffffffffffc)) {
        pfVar7 = pfVar3 + uVar6;
        fVar9 = fVar9 + *pfVar7 * *pfVar7;
        fVar10 = fVar10 + pfVar7[1] * pfVar7[1];
        fVar8 = fVar8 + pfVar7[2] * pfVar7[2];
        fVar11 = fVar11 + pfVar7[3] * pfVar7[3];
      }
    }
    auVar13._4_4_ = fVar10;
    auVar13._0_4_ = fVar9;
    auVar13._8_4_ = fVar8;
    auVar13._12_4_ = fVar11;
    auVar2._4_4_ = fVar10;
    auVar2._0_4_ = fVar9;
    auVar2._8_4_ = fVar8;
    auVar2._12_4_ = fVar11;
    auVar13 = NEON_ext(auVar13,auVar2,8,1);
    fVar9 = fVar9 + auVar13._0_4_;
    fVar10 = fVar10 + auVar13._4_4_;
    fVar8 = fVar9 + fVar10;
    fVar9 = fVar9 + fVar10;
    lVar5 = (long)uVar4 % 4;
    if (lVar5 != 0 && lVar5 < 0 == SBORROW8(uVar4,uVar1 & 0xfffffffffffffffc)) {
      pfVar3 = pfVar3 + ((long)uVar1 >> 2) * 4;
      do {
        fVar8 = fVar8 + *pfVar3 * *pfVar3;
        fVar9 = 0.0;
        lVar5 = lVar5 + -1;
        pfVar3 = pfVar3 + 1;
      } while (lVar5 != 0);
    }
  }
  return CONCAT44(fVar9,fVar8);
}



/* Entry: 1093fafa4; end: 1093fb12f;  */

void FUN_1093fafa4(undefined8 param_1,undefined8 param_2,long param_3,int param_4,
                  undefined4 *param_5)

{
  undefined8 ***pppuVar1;
  undefined8 **ppuStack_168;
  int iStack_160;
  char cStack_151;
  undefined **ppuStack_150;
  undefined **ppuStack_148;
  undefined1 auStack_140 [56];
  undefined8 uStack_108;
  char cStack_f1;
  undefined **appuStack_e0 [19];
  undefined1 uStack_41;
  
  if (*(char *)(param_3 + -1) == 'c') {
    ppuStack_150 = (undefined **)CONCAT71(ppuStack_150._1_7_,(char)*param_5);
    FUN_1092b4db8(param_1,&ppuStack_150,1);
  }
  else {
    if (param_4 < 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd0ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEi_1103464d8)
                (param_1,*param_5);
      return;
    }
    FUN_10926db08(&ppuStack_150);
    __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEi(&ppuStack_150,*param_5);
    FUN_10926dc5c(&ppuStack_168,&ppuStack_148,&uStack_41);
    pppuVar1 = (undefined8 ***)ppuStack_168;
    if (-1 < cStack_151) {
      iStack_160 = (int)cStack_151;
      pppuVar1 = &ppuStack_168;
    }
    if (param_4 <= iStack_160) {
      iStack_160 = param_4;
    }
    __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEE5writeEPKcl(param_1,pppuVar1,(long)iStack_160);
    if (cStack_151 < '\0') {
      __ZdlPv(ppuStack_168);
    }
    appuStack_e0[0] = &PTR_DAT_11088d708;
    ppuStack_150 = &PTR_SUB_11088d6e0;
    ppuStack_148 = &PTR_DAT_11088d7b0;
    if (cStack_f1 < '\0') {
      __ZdlPv(uStack_108);
    }
    ppuStack_148 = (undefined **)
                   (PTR___ZTVNSt3__115basic_streambufIcNS_11char_traitsIcEEEE_110346b20 + 0x10);
    __ZNSt3__16localeD1Ev(auStack_140);
    __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEED2Ev(&ppuStack_150,&PTR_PTR_11088d720);
    __ZNSt3__19basic_iosIcNS_11char_traitsIcEEED2Ev(appuStack_e0);
  }
  return;
}



/* Entry: 1093fb130; end: 1093fb1e7;  */

undefined4 FUN_1093fb130(undefined4 *param_1)

{
  return *param_1;
}



/* Entry: 1093fb1e8; end: 1093fb413;  */

void FUN_1093fb1e8(long param_1,long param_2)

{
  ulong uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  ulong uVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  long lVar13;
  int iVar14;
  ulong uVar15;
  int iVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  ulong uStack_68;
  undefined **ppuStack_60;
  long lStack_58;
  undefined8 uStack_50;
  int iStack_48;
  
  uVar15 = *(ulong *)(param_1 + 0x10);
  lStack_58 = 0;
  uStack_50 = 0;
  iStack_48 = 0;
  ppuStack_60 = &PTR_FUN_110af4c80;
  uStack_68 = uVar15;
  func_0x00010938e870(&ppuStack_60,&uStack_68);
  iVar16 = (int)(uVar15 >> 0x20);
  iVar6 = iVar16 + -1;
  if (0 < iVar16) {
    iVar8 = 0;
    iVar14 = (int)uVar15;
    iVar10 = iVar14 + -1;
    do {
      if (0 < iVar14) {
        uVar7 = 0;
        do {
          lVar13 = *(long *)(param_1 + 8) + (long)*(int *)(param_1 + 0x18) * (long)iVar8;
          uVar11 = (uint)uVar7;
          uVar9 = 0;
          if (1 < uVar11) {
            uVar9 = uVar11 - 2;
          }
          uVar5 = uVar11;
          if ((int)uVar11 < 2) {
            uVar5 = 1;
          }
          fVar17 = (float)NEON_ucvtf((uint)*(byte *)(lVar13 + (ulong)uVar9));
          fVar18 = (float)NEON_ucvtf((uint)*(byte *)(lVar13 + uVar7));
          uVar1 = uVar7 + 1;
          iVar12 = (int)uVar1;
          if (iVar10 <= (int)uVar1) {
            iVar12 = iVar10;
          }
          fVar19 = (float)NEON_ucvtf((uint)*(byte *)(lVar13 + iVar12));
          iVar12 = uVar11 + 2;
          if (iVar10 <= (int)(uVar11 + 2)) {
            iVar12 = iVar10;
          }
          fVar20 = (float)NEON_ucvtf((uint)*(byte *)(lVar13 + iVar12));
          *(char *)(lStack_58 + (long)iStack_48 * (long)iVar8 + uVar7) =
               (char)(int)((float)*(byte *)(lVar13 + (ulong)uVar5 + -1) / 4.0 + fVar17 * 0.0625 +
                           fVar18 * 0.375 + fVar19 * 0.25 + fVar20 * 0.0625);
          uVar7 = uVar1;
        } while ((uVar15 & 0x7fffffff) != uVar1);
      }
      iVar8 = iVar8 + 1;
    } while (iVar8 != iVar16);
    uVar9 = 0;
    iVar8 = 2;
    iVar10 = 1;
    do {
      iVar12 = iVar8;
      if (iVar6 <= iVar8) {
        iVar12 = iVar6;
      }
      iVar2 = iVar10;
      if (iVar6 <= iVar10) {
        iVar2 = iVar6;
      }
      iVar3 = 0;
      if (uVar9 != 0) {
        iVar3 = uVar9 - 1;
      }
      iVar4 = 0;
      if (1 < uVar9) {
        iVar4 = uVar9 - 2;
      }
      if (0 < iVar14) {
        uVar7 = 0;
        do {
          fVar17 = (float)NEON_ucvtf((uint)*(byte *)(lStack_58 + iVar4 * iStack_48 + uVar7));
          fVar18 = (float)NEON_ucvtf((uint)*(byte *)(lStack_58 + (int)(uVar9 * iStack_48) + uVar7));
          fVar19 = (float)NEON_ucvtf((uint)*(byte *)(lStack_58 + iVar2 * iStack_48 + uVar7));
          fVar20 = (float)NEON_ucvtf((uint)*(byte *)(lStack_58 + iVar12 * iStack_48 + uVar7));
          *(char *)(*(long *)(param_2 + 8) + (long)*(int *)(param_2 + 0x18) * (long)(int)uVar9 +
                   uVar7) =
               (char)(int)((float)*(byte *)(lStack_58 + iVar3 * iStack_48 + uVar7) / 4.0 +
                           fVar17 * 0.0625 + fVar18 * 0.375 + fVar19 * 0.25 + fVar20 * 0.0625);
          uVar7 = uVar7 + 1;
        } while ((uVar15 & 0x7fffffff) != uVar7);
      }
      iVar12 = uVar9 + 1;
      uVar9 = uVar9 + 1;
      iVar8 = iVar8 + 1;
      iVar10 = iVar10 + 1;
    } while (iVar12 != iVar16);
  }
  ppuStack_60 = &PTR_FUN_110af4c80;
  if (lStack_58 != 0) {
    __ZdaPv();
  }
  return;
}



/* Entry: 1093fb414; end: 1093fb547;  */

void FUN_1093fb414(long param_1,long param_2)

{
  long lVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined8 uVar7;
  long lVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  
  uVar7 = *(undefined8 *)(param_2 + 0x10);
  iVar4 = (int)((ulong)uVar7 >> 0x20);
  if (0 < iVar4) {
    iVar3 = 0;
    fVar9 = (float)*(int *)(param_1 + 0x10) / (float)(int)uVar7;
    fVar10 = (float)*(int *)(param_1 + 0x14) / (float)iVar4;
    fVar11 = fVar10 * 0.5 + -0.5;
    do {
      iVar5 = (int)fVar11;
      iVar4 = iVar5;
      if (iVar5 + 1 < *(int *)(param_1 + 0x14)) {
        iVar4 = iVar5 + 1;
      }
      if (0 < (int)uVar7) {
        lVar8 = 0;
        fVar12 = fVar11 - (float)(int)fVar11;
        fVar13 = fVar9 * 0.5 + -0.5;
        do {
          iVar6 = (int)fVar13;
          fVar14 = fVar13 - (float)(int)fVar13;
          iVar2 = iVar6;
          if (iVar6 + 1 < *(int *)(param_1 + 0x10)) {
            iVar2 = iVar6 + 1;
          }
          lVar1 = *(long *)(param_1 + 8) + (long)(*(int *)(param_1 + 0x18) * iVar5);
          fVar15 = (float)NEON_ucvtf((uint)*(byte *)(lVar1 + iVar6));
          fVar17 = (float)NEON_ucvtf((uint)*(byte *)(lVar1 + iVar2));
          lVar1 = *(long *)(param_1 + 8) + (long)(*(int *)(param_1 + 0x18) * iVar4);
          fVar18 = (float)NEON_ucvtf((uint)*(byte *)(lVar1 + iVar6));
          fVar16 = (float)NEON_ucvtf((uint)*(byte *)(lVar1 + iVar2));
          *(char *)(*(long *)(param_2 + 8) + (long)*(int *)(param_2 + 0x18) * (long)iVar3 + lVar8) =
               (char)(int)(fVar14 * (1.0 - fVar12) * fVar17 +
                           (1.0 - fVar14) * (1.0 - fVar12) * fVar15 +
                           (1.0 - fVar14) * fVar12 * fVar18 + fVar14 * fVar12 * fVar16);
          fVar13 = fVar9 + fVar13;
          lVar8 = lVar8 + 1;
          uVar7 = *(undefined8 *)(param_2 + 0x10);
        } while (lVar8 < (int)uVar7);
      }
      fVar11 = fVar10 + fVar11;
      iVar3 = iVar3 + 1;
    } while (iVar3 < (int)((ulong)uVar7 >> 0x20));
  }
  return;
}


