/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1081edd74; end: 1081edf17;  */

double FUN_1081edd74(double param_1,double param_2,double param_3,undefined8 param_4,ulong param_5)

{
  bool bVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dStack_d0;
  double adStack_c0 [4];
  double dStack_a0;
  double dStack_98;
  
  dVar4 = param_1 + param_2;
  dVar8 = dVar4 * 0.5;
  dVar9 = dVar8 - param_1;
  dVar2 = dVar8;
  FUN_1081edf18();
  dStack_a0 = dVar2;
  dStack_98 = dVar4;
  dStack_d0 = adStack_c0[(param_5 & 0xffffffff) + 4];
  dVar7 = dStack_d0 - param_3;
  do {
    dVar9 = dVar9 * 0.5;
    dVar3 = dVar8 - dVar9;
    dVar6 = dVar3;
    if (dVar3 <= param_1) {
      dVar6 = param_1;
    }
    dVar5 = param_1;
    func_0x0001081ef680();
    adStack_c0[2] = dVar3;
    adStack_c0[3] = dVar5;
    bVar1 = false;
    if ((ABS(dVar3 - dVar2) < 5.9604644775390625e-08) && (bVar1 = false, !NAN(ABS(dVar5 - dVar4))))
    {
      bVar1 = ABS(dVar5 - dVar4) < 5.9604644775390625e-08;
    }
    if (bVar1) {
      return -1.0;
    }
    if (dVar7 <= 0.0) {
      if (adStack_c0[(param_5 & 0xffffffff) + 2] - param_3 <= dVar7) goto LAB_1081ede54;
LAB_1081ede9c:
      dVar8 = dVar6;
      dStack_a0 = dVar3;
      dStack_98 = dVar5;
      dStack_d0 = adStack_c0[(param_5 & 0xffffffff) + 4];
      dVar6 = dStack_d0 - param_3;
      dVar7 = dVar6;
      dVar2 = dVar3;
      dVar4 = dVar5;
    }
    else {
      if (adStack_c0[(param_5 & 0xffffffff) + 2] - param_3 < dVar7) goto LAB_1081ede9c;
LAB_1081ede54:
      dVar6 = dVar8 + dVar9;
      if (param_2 < dVar6) {
        return -1.0;
      }
      dVar3 = param_2;
      func_0x0001081ef680();
      adStack_c0[0] = dVar3;
      adStack_c0[1] = dVar5;
      bVar1 = false;
      if ((ABS(dVar3 - dVar2) < 5.9604644775390625e-08) && (bVar1 = false, !NAN(ABS(dVar5 - dVar4)))
         ) {
        bVar1 = ABS(dVar5 - dVar4) < 5.9604644775390625e-08;
      }
      if (bVar1) {
        return -1.0;
      }
      if (dVar7 <= 0.0) {
        if (dVar7 < adStack_c0[param_5 & 0xffffffff] - param_3) goto LAB_1081ede9c;
      }
      else if (adStack_c0[param_5 & 0xffffffff] - param_3 < dVar7) goto LAB_1081ede9c;
      dVar6 = dStack_d0 - param_3;
    }
    if (ABS(dVar6) < 1.1920928955078125e-07) {
      return dVar8;
    }
  } while( true );
}



/* Entry: 1081edf18; end: 1081edf83;  */

undefined1  [16] FUN_1081edf18(double param_1,double *param_2)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  undefined1 auVar5 [16];
  
  if (param_1 == 0.0) {
    dVar2 = param_2[1];
    dVar1 = *param_2;
  }
  else if (param_1 == 1.0) {
    dVar2 = param_2[7];
    dVar1 = param_2[6];
  }
  else {
    dVar1 = 1.0 - param_1;
    dVar4 = dVar1 * dVar1 * dVar1;
    dVar3 = param_1 * dVar1 * dVar1 * 3.0;
    dVar2 = param_1 * param_1 * dVar1 * 3.0;
    param_1 = param_1 * param_1 * param_1;
    dVar1 = param_2[2] * dVar3 + *param_2 * dVar4 + param_2[4] * dVar2 + param_2[6] * param_1;
    dVar2 = param_2[3] * dVar3 + param_2[1] * dVar4 + param_2[5] * dVar2 + param_2[7] * param_1;
  }
  auVar5._8_8_ = dVar2;
  auVar5._0_8_ = dVar1;
  return auVar5;
}



/* Entry: 1081edf84; end: 1081ee057;  */

void FUN_1081edf84(double *param_1,double param_2,double *param_3)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  undefined1 auVar6 [16];
  double dVar7;
  double dVar8;
  double dVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  
  if (param_2 == 0.5) {
    dVar1 = *param_3;
    dVar8 = param_3[3];
    dVar5 = param_3[2];
    dVar3 = param_3[1];
    dVar2 = *param_3;
    auVar6 = NEON_fmov(0x3fe0000000000000,8);
    param_1[1] = param_3[1];
    *param_1 = dVar1;
    param_1[3] = (dVar3 + dVar8) * auVar6._8_8_;
    param_1[2] = (dVar2 + dVar5) * auVar6._0_8_;
    dVar4 = param_3[5];
    dVar1 = param_3[4];
    dVar9 = param_3[7];
    dVar7 = param_3[6];
    auVar11 = NEON_fmov(0x4008000000000000,8);
    auVar10 = NEON_fmov(0x4000000000000000,8);
    auVar12 = NEON_fmov(0x3fc0000000000000,8);
    auVar13 = NEON_fmov(0x3fd0000000000000,8);
    param_1[5] = (dVar3 + auVar10._8_8_ * dVar8 + dVar4) * auVar13._8_8_;
    param_1[4] = (dVar2 + auVar10._0_8_ * dVar5 + dVar1) * auVar13._0_8_;
    param_1[7] = (dVar3 + auVar11._8_8_ * (dVar8 + dVar4) + dVar9) * auVar12._8_8_;
    param_1[6] = (dVar2 + auVar11._0_8_ * (dVar5 + dVar1) + dVar7) * auVar12._0_8_;
    param_1[9] = (dVar8 + auVar10._8_8_ * dVar4 + dVar9) * auVar13._8_8_;
    param_1[8] = (dVar5 + auVar10._0_8_ * dVar1 + dVar7) * auVar13._0_8_;
    param_1[0xb] = (dVar4 + dVar9) * auVar6._8_8_;
    param_1[10] = (dVar1 + dVar7) * auVar6._0_8_;
    dVar1 = param_3[6];
    param_1[0xd] = param_3[7];
    param_1[0xc] = dVar1;
    return;
  }
  FUN_1081ee058(param_2,param_3,param_1);
  dVar1 = param_3[1];
  dVar2 = param_3[3];
  dVar3 = dVar1 + param_2 * (dVar2 - dVar1);
  dVar5 = param_3[5];
  dVar2 = dVar2 + param_2 * (dVar5 - dVar2);
  dVar5 = dVar5 + param_2 * (param_3[7] - dVar5);
  dVar8 = dVar3 + param_2 * (dVar2 - dVar3);
  dVar2 = dVar2 + param_2 * (dVar5 - dVar2);
  param_1[1] = dVar1;
  param_1[3] = dVar3;
  param_1[5] = dVar8;
  param_1[7] = dVar8 + param_2 * (dVar2 - dVar8);
  param_1[9] = dVar2;
  param_1[0xb] = dVar5;
  param_1[0xd] = param_3[7];
  return;
}



/* Entry: 1081ee058; end: 1081ee13b;  */

void FUN_1081ee058(double param_1,double *param_2,double *param_3)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  
  dVar1 = *param_2;
  dVar2 = param_2[2];
  dVar3 = dVar1 + param_1 * (dVar2 - dVar1);
  dVar4 = param_2[4];
  dVar2 = dVar2 + param_1 * (dVar4 - dVar2);
  dVar4 = dVar4 + param_1 * (param_2[6] - dVar4);
  dVar5 = dVar3 + param_1 * (dVar2 - dVar3);
  dVar2 = dVar2 + param_1 * (dVar4 - dVar2);
  *param_3 = dVar1;
  param_3[2] = dVar3;
  param_3[4] = dVar5;
  param_3[6] = dVar5 + param_1 * (dVar2 - dVar5);
  param_3[8] = dVar2;
  param_3[10] = dVar4;
  param_3[0xc] = param_2[6];
  return;
}



/* Entry: 1081ee13c; end: 1081ee2b7;  */

undefined8 FUN_1081ee13c(long param_1,long param_2,uint param_3,undefined1 *param_4)

{
  double *pdVar1;
  double *pdVar2;
  uint uVar3;
  char cVar4;
  int iVar5;
  bool bVar6;
  int iVar7;
  long lVar8;
  undefined1 uVar9;
  int iVar10;
  long lVar11;
  double *pdVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  char acStack_44 [4];
  
  lVar8 = param_1;
  FUN_1081e7e78(param_1,acStack_44);
  iVar10 = 0;
  lVar11 = (long)acStack_44[0];
  pdVar12 = (double *)(param_1 + lVar11 * 0x10);
  uVar9 = 1;
  do {
    iVar5 = 0;
    iVar7 = (int)lVar8;
    if (iVar7 != 0) {
      iVar5 = (iVar10 + 1) / iVar7;
    }
    iVar10 = (iVar10 + 1) - iVar5 * iVar7;
    cVar4 = acStack_44[iVar10];
    pdVar2 = (double *)(param_1 + (long)cVar4 * 0x10);
    dVar13 = *pdVar12;
    dVar14 = pdVar12[1];
    dVar15 = *pdVar2 - dVar13;
    dVar17 = pdVar2[1] - dVar14;
    uVar3 = 1U >> (ulong)(3 - ((uint)lVar11 ^ (int)cVar4) & 0x1f) ^ 3;
    pdVar1 = (double *)(param_1 + (long)(int)(uVar3 ^ (uint)lVar11) * 0x10);
    dVar16 = -(dVar17 * (*pdVar1 - dVar13)) + dVar15 * (pdVar1[1] - dVar14);
    pdVar1 = (double *)(param_1 + (long)(int)(uVar3 ^ (int)cVar4) * 0x10);
    dVar18 = -(dVar17 * (*pdVar1 - dVar13)) + dVar15 * (pdVar1[1] - dVar14);
    if ((0.0 <= dVar16 * dVar18) &&
       ((1.1920928955078125e-07 <= ABS(dVar16) ||
        (dVar16 = dVar18, 1.1920928955078125e-07 <= ABS(dVar18))))) {
      lVar11 = (ulong)(param_3 & ((int)param_3 >> 0x1f ^ 0xffffffffU)) + 1;
      pdVar12 = (double *)(param_2 + 8);
      do {
        lVar11 = lVar11 + -1;
        if (lVar11 == 0) {
          return 0;
        }
        pdVar1 = pdVar12 + -1;
        dVar18 = *pdVar12;
        pdVar12 = pdVar12 + 2;
        dVar18 = (*pdVar1 - dVar13) * -dVar17 + dVar15 * (dVar18 - dVar14);
        dVar19 = ABS(dVar18);
        bVar6 = true;
        if ((0.0 < dVar16 * dVar18) && (bVar6 = false, !NAN(dVar19))) {
          bVar6 = dVar19 < 8.881784197001252e-16;
        }
      } while (bVar6);
      uVar9 = 0;
      lVar11 = (long)cVar4;
      pdVar12 = pdVar2;
    }
  } while (iVar10 != 0);
  *param_4 = uVar9;
  return 1;
}



/* Entry: 1081ee2b8; end: 1081ee2c3;  */

undefined8 FUN_1081ee2b8(long param_1,long param_2,undefined1 *param_3)

{
  double *pdVar1;
  double *pdVar2;
  uint uVar3;
  char cVar4;
  int iVar5;
  bool bVar6;
  int iVar7;
  long lVar8;
  undefined1 uVar9;
  int iVar10;
  long lVar11;
  double *pdVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  char acStack_44 [4];
  
  lVar8 = param_1;
  FUN_1081e7e78(param_1,acStack_44);
  iVar10 = 0;
  lVar11 = (long)acStack_44[0];
  pdVar12 = (double *)(param_1 + lVar11 * 0x10);
  uVar9 = 1;
  do {
    iVar5 = 0;
    iVar7 = (int)lVar8;
    if (iVar7 != 0) {
      iVar5 = (iVar10 + 1) / iVar7;
    }
    iVar10 = (iVar10 + 1) - iVar5 * iVar7;
    cVar4 = acStack_44[iVar10];
    pdVar2 = (double *)(param_1 + (long)cVar4 * 0x10);
    dVar13 = *pdVar12;
    dVar14 = pdVar12[1];
    dVar15 = *pdVar2 - dVar13;
    dVar17 = pdVar2[1] - dVar14;
    uVar3 = 1U >> (ulong)(3 - ((uint)lVar11 ^ (int)cVar4) & 0x1f) ^ 3;
    pdVar1 = (double *)(param_1 + (long)(int)(uVar3 ^ (uint)lVar11) * 0x10);
    dVar16 = -(dVar17 * (*pdVar1 - dVar13)) + dVar15 * (pdVar1[1] - dVar14);
    pdVar1 = (double *)(param_1 + (long)(int)(uVar3 ^ (int)cVar4) * 0x10);
    dVar18 = -(dVar17 * (*pdVar1 - dVar13)) + dVar15 * (pdVar1[1] - dVar14);
    if ((0.0 <= dVar16 * dVar18) &&
       ((1.1920928955078125e-07 <= ABS(dVar16) ||
        (dVar16 = dVar18, 1.1920928955078125e-07 <= ABS(dVar18))))) {
      lVar11 = 4;
      pdVar12 = (double *)(param_2 + 8);
      do {
        lVar11 = lVar11 + -1;
        if (lVar11 == 0) {
          return 0;
        }
        pdVar1 = pdVar12 + -1;
        dVar18 = *pdVar12;
        pdVar12 = pdVar12 + 2;
        dVar18 = (*pdVar1 - dVar13) * -dVar17 + dVar15 * (dVar18 - dVar14);
        dVar19 = ABS(dVar18);
        bVar6 = true;
        if ((0.0 < dVar16 * dVar18) && (bVar6 = false, !NAN(dVar19))) {
          bVar6 = dVar19 < 8.881784197001252e-16;
        }
      } while (bVar6);
      uVar9 = 0;
      lVar11 = (long)cVar4;
      pdVar12 = pdVar2;
    }
  } while (iVar10 != 0);
  *param_3 = uVar9;
  return 1;
}



/* Entry: 1081ee2c4; end: 1081ee43f;  */

bool FUN_1081ee2c4(undefined1 (*param_1) [16],int param_2,int param_3)

{
  undefined1 (*pauVar1) [16];
  bool bVar2;
  undefined1 (*pauVar3) [16];
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  undefined1 auVar10 [16];
  double dVar11;
  undefined1 auVar12 [16];
  double dVar13;
  double dVar14;
  double dVar15;
  double dStack_50;
  double dStack_48;
  double dStack_40;
  double dStack_38;
  
  pauVar3 = param_1;
  FUN_1081ec0c8(param_1,param_1 + 3);
  if ((int)pauVar3 != 0) {
    pauVar3 = param_1 + 2;
    dVar11 = *(double *)*pauVar3;
    dVar6 = *(double *)(param_1[2] + 8);
    dVar5 = *(double *)*param_1;
    dVar8 = *(double *)(*param_1 + 8);
    auVar10 = NEON_ext(*param_1,*pauVar3,8,1);
    auVar12 = NEON_ext(*pauVar3,*param_1,8,1);
    dStack_40 = auVar10._0_8_ - auVar12._0_8_;
    dStack_38 = auVar10._8_8_ - auVar12._8_8_;
    FUN_1081ee440(&dStack_40);
    dVar7 = *(double *)param_1[1];
    dVar9 = *(double *)(param_1[1] + 8);
    dVar5 = -dVar8 * dVar11 + dVar6 * dVar5 + dStack_38 * dVar9 + dVar7 * dStack_40;
    dVar8 = *(double *)*param_1;
    dVar6 = *(double *)(*param_1 + 8);
    dVar11 = dVar6;
    if (dVar8 <= dVar6) {
      dVar11 = dVar8;
    }
    dVar4 = dVar7;
    if (dVar11 <= dVar7) {
      dVar4 = dVar11;
    }
    dVar11 = dVar9;
    if (dVar4 <= dVar9) {
      dVar11 = dVar4;
    }
    dVar14 = *(double *)param_1[2];
    dVar15 = *(double *)(param_1[2] + 8);
    dVar4 = dVar14;
    if (dVar11 <= dVar14) {
      dVar4 = dVar11;
    }
    dVar11 = dVar15;
    if (dVar4 <= dVar15) {
      dVar11 = dVar4;
    }
    if (dVar6 <= dVar8) {
      dVar6 = dVar8;
    }
    if (dVar7 <= dVar6) {
      dVar7 = dVar6;
    }
    if (dVar9 <= dVar7) {
      dVar9 = dVar7;
    }
    if (dVar14 <= dVar9) {
      dVar14 = dVar9;
    }
    if (dVar15 <= dVar14) {
      dVar15 = dVar14;
    }
    dVar9 = -dVar11;
    if (-dVar11 <= dVar15) {
      dVar9 = dVar15;
    }
    return ABS(dVar5) < ABS(dVar9 * 1.1920928955078125e-07) || dVar5 == 0.0;
  }
  pauVar3 = param_1 + param_2;
  pauVar1 = param_1 + param_3;
  auVar10 = NEON_ext(*pauVar3,*pauVar1,8,1);
  auVar12 = NEON_ext(*pauVar1,*pauVar3,8,1);
  dStack_50 = auVar10._0_8_ - auVar12._0_8_;
  dStack_48 = auVar10._8_8_ - auVar12._8_8_;
  dStack_40 = -*(double *)(*pauVar3 + 8) * *(double *)*pauVar1 +
              *(double *)(*pauVar1 + 8) * *(double *)*pauVar3;
  FUN_1081ee440(&dStack_50);
  dVar7 = *(double *)*param_1;
  dVar9 = *(double *)(*param_1 + 8);
  dVar11 = dVar9;
  if (dVar7 <= dVar9) {
    dVar11 = dVar7;
  }
  dVar5 = *(double *)param_1[1];
  dVar8 = *(double *)(param_1[1] + 8);
  dVar6 = dVar5;
  if (dVar11 <= dVar5) {
    dVar6 = dVar11;
  }
  dVar11 = dVar8;
  if (dVar6 <= dVar8) {
    dVar11 = dVar6;
  }
  dVar4 = *(double *)param_1[2];
  dVar15 = *(double *)(param_1[2] + 8);
  dVar6 = dVar4;
  if (dVar11 <= dVar4) {
    dVar6 = dVar11;
  }
  dVar11 = dVar15;
  if (dVar6 <= dVar15) {
    dVar11 = dVar6;
  }
  dVar14 = *(double *)param_1[3];
  dVar6 = *(double *)(param_1[3] + 8);
  dVar13 = dVar14;
  if (dVar11 <= dVar14) {
    dVar13 = dVar11;
  }
  dVar11 = dVar6;
  if (dVar13 <= dVar6) {
    dVar11 = dVar13;
  }
  if (dVar9 <= dVar7) {
    dVar9 = dVar7;
  }
  dVar7 = dVar5;
  if (dVar5 <= dVar9) {
    dVar7 = dVar9;
  }
  dVar9 = dVar8;
  if (dVar8 <= dVar7) {
    dVar9 = dVar7;
  }
  dVar7 = dVar4;
  if (dVar4 <= dVar9) {
    dVar7 = dVar9;
  }
  dVar9 = dVar15;
  if (dVar15 <= dVar7) {
    dVar9 = dVar7;
  }
  if (dVar14 <= dVar9) {
    dVar14 = dVar9;
  }
  if (dVar6 <= dVar14) {
    dVar6 = dVar14;
  }
  dVar9 = -dVar11;
  if (-dVar11 <= dVar6) {
    dVar9 = dVar6;
  }
  dVar7 = dStack_40 + dVar8 * dStack_48 + dVar5 * dStack_50;
  dVar6 = ABS(dVar7);
  dVar11 = ABS(dVar9 * 1.1920928955078125e-07);
  bVar2 = true;
  if ((dVar7 != 0.0) && (bVar2 = false, !NAN(dVar6) && !NAN(dVar11))) {
    bVar2 = dVar6 < dVar11;
  }
  if (bVar2) {
    dStack_40 = dStack_40 + dVar15 * dStack_48 + dVar4 * dStack_50;
    bVar2 = dStack_40 == 0.0;
    if (ABS(dStack_40) < dVar11) {
      bVar2 = true;
    }
  }
  else {
    bVar2 = false;
  }
  return bVar2;
}



/* Entry: 1081ee440; end: 1081ee49f;  */

bool FUN_1081ee440(double *param_1)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  
  dVar3 = param_1[1];
  dVar2 = *param_1;
  dVar4 = SQRT(dVar3 * dVar3 + dVar2 * dVar2);
  dVar1 = ABS(dVar4);
  if (dVar1 < 1.1920928955078125e-07) {
    *param_1 = 0.0;
    param_1[1] = 0.0;
    param_1[2] = 0.0;
  }
  else {
    dVar4 = 1.0 / dVar4;
    param_1[1] = dVar3 * dVar4;
    *param_1 = dVar2 * dVar4;
    param_1[2] = dVar4 * param_1[2];
  }
  return 1.1920928955078125e-07 <= dVar1;
}



/* Entry: 1081ee4a0; end: 1081ee75b;  */

double * FUN_1081ee4a0(double *param_1,float *param_2)

{
  int iVar1;
  bool bVar2;
  undefined1 in_ZR;
  bool bVar3;
  int iVar4;
  double *pdVar5;
  long lVar6;
  double *pdVar7;
  ulong uVar8;
  float fVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dStack_140;
  double dStack_138;
  double dStack_130;
  double dStack_128;
  double dStack_120;
  double dStack_118;
  double dStack_110;
  double dStack_108;
  double adStack_100 [4];
  double dStack_e0;
  double dStack_d8;
  double dStack_d0;
  double dStack_c8;
  double dStack_c0;
  double adStack_b8 [4];
  double adStack_98 [4];
  undefined8 uStack_78;
  
  iVar4 = (int)&dStack_140;
  pdVar5 = &dStack_140;
  iVar1 = (int)&dStack_140;
  uStack_78 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  func_0x0001081ddb44(&dStack_140,param_1);
  FUN_1081ee75c();
  if ((iVar4 == 0) || (func_0x0001081ee7a0(), ((ulong)pdVar5 & 1) == 0)) {
    FUN_10835203c(param_1,&dStack_c8,&dStack_d8,0);
    iVar4 = (int)param_1;
    if ((iVar4 - 2U < 2) || (iVar4 == 0)) {
LAB_1081ee580:
      func_0x0001081ee834(&dStack_140,adStack_100 + 3);
      func_0x0001081eef74(&dStack_140,adStack_98);
      func_0x0001081eef74(&dStack_138,adStack_b8);
      for (lVar6 = 0; lVar6 != 0x20; lVar6 = lVar6 + 8) {
        *(double *)((long)adStack_98 + lVar6) =
             *(double *)((long)adStack_98 + lVar6) + *(double *)((long)adStack_b8 + lVar6);
      }
      param_1 = adStack_100;
      FUN_1081ee9c8(adStack_98[0],adStack_98[1],adStack_98[2],adStack_98[3]);
      uVar8 = (ulong)((uint)param_1 & ((int)(uint)param_1 >> 0x1f ^ 0xffffffffU));
      in_ZR = iVar1 == 2;
      if ((bool)in_ZR) {
        lVar6 = 0;
        do {
          in_ZR = 1;
          pdVar5 = param_1;
          if (uVar8 * 8 - lVar6 == 0) goto LAB_1081ee62c;
          dVar10 = *(double *)((long)adStack_100 + lVar6);
          lVar6 = lVar6 + 8;
        } while (0.0 < (adStack_100[3] - dVar10) * (dStack_e0 - dVar10));
      }
      else {
        pdVar7 = (double *)0x0;
        dVar11 = (SQRT((dStack_128 - dStack_138) * (dStack_128 - dStack_138) +
                       (dStack_130 - dStack_140) * (dStack_130 - dStack_140)) +
                  SQRT((dStack_118 - dStack_128) * (dStack_118 - dStack_128) +
                       (dStack_120 - dStack_130) * (dStack_120 - dStack_130)) +
                 SQRT((dStack_108 - dStack_118) * (dStack_108 - dStack_118) +
                      (dStack_110 - dStack_120) * (dStack_110 - dStack_120))) * 0.00390625;
        dVar12 = dVar11 + dVar11;
        pdVar5 = adStack_100;
        dVar10 = adStack_100[3];
        for (; iVar4 = (int)pdVar7, uVar8 != 0; uVar8 = uVar8 - 1) {
          dVar13 = *pdVar5;
          bVar2 = false;
          in_ZR = false;
          bVar3 = false;
          if (0.0 < dVar13) {
            bVar2 = false;
            in_ZR = false;
            bVar3 = true;
            if (!NAN(dVar13)) {
              bVar2 = dVar13 < 1.0;
              in_ZR = dVar13 == 1.0;
              bVar3 = false;
            }
          }
          adStack_100[3] = dVar10;
          if (bVar2 != bVar3) {
            func_0x0001081ef664(&dStack_140);
            param_1 = &dStack_138;
            dVar10 = dVar11;
            func_0x0001081ef664();
            dVar11 = SQRT(dVar10 * dVar10 + dVar11 * dVar11);
            in_ZR = dVar11 == dVar12;
            if (dVar11 < dVar12) {
              dVar11 = (double)(ulong)(uint)(float)dVar13;
              param_2[iVar4] = (float)dVar13;
              pdVar7 = (double *)(ulong)(iVar4 + 1);
            }
          }
          pdVar5 = pdVar5 + 1;
          dVar10 = adStack_100[3];
        }
        if ((iVar4 != 0) || (in_ZR = 0, iVar1 != 1)) goto LAB_1081ee724;
      }
    }
    else {
      in_ZR = 0;
      pdVar5 = param_1;
      if (iVar4 != 1) goto LAB_1081ee62c;
      FUN_1081ee7e4(0,dStack_c8,dStack_d8);
      if (((int)param_1 == 0) || (FUN_1081ee7e4(0,dStack_c0,dStack_d0), (int)param_1 == 0))
      goto LAB_1081ee580;
      dVar10 = (dStack_d8 * dStack_c0 + dStack_d0 * dStack_c8) /
               ((dStack_d8 + dStack_d8) * dStack_d0);
    }
    fVar9 = (float)dVar10;
    *param_2 = fVar9;
    bVar2 = false;
    in_ZR = true;
    bVar3 = false;
    if (fVar9 < 1.0) {
      bVar2 = false;
      in_ZR = false;
      bVar3 = true;
      if (!NAN(fVar9)) {
        bVar2 = fVar9 < 0.0;
        in_ZR = fVar9 == 0.0;
        bVar3 = false;
      }
    }
    pdVar7 = (double *)(ulong)(!(bool)in_ZR && bVar2 == bVar3);
  }
  else {
LAB_1081ee62c:
    param_1 = pdVar5;
    pdVar7 = (double *)0x0;
  }
LAB_1081ee724:
  func_0x0001081ef694(uStack_78);
  if ((bool)in_ZR) {
    return pdVar7;
  }
  ___stack_chk_fail();
  pdVar5 = param_1;
  FUN_1081e07e8(*param_1,param_1[2],param_1[6]);
  if ((int)pdVar5 != 0) {
    dVar11 = *param_1;
    dVar12 = param_1[4];
    dVar10 = param_1[6];
    if (dVar11 <= dVar10) {
      if (8.881784197001252e-16 <= dVar11 - dVar12) {
        return (double *)0x0;
      }
      dVar10 = dVar12 - dVar10;
    }
    else {
      if (8.881784197001252e-16 <= dVar12 - dVar11) {
        return (double *)0x0;
      }
      dVar10 = dVar10 - dVar12;
    }
    return (double *)(ulong)(dVar10 < 8.881784197001252e-16);
  }
  return pdVar5;
}



/* Entry: 1081ee75c; end: 1081ee7e3;  */

double * FUN_1081ee75c(double *param_1)

{
  double *pdVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  
  pdVar1 = param_1;
  FUN_1081e07e8(*param_1,param_1[2],param_1[6]);
  if ((int)pdVar1 == 0) {
    return pdVar1;
  }
  dVar2 = *param_1;
  dVar3 = param_1[4];
  dVar4 = param_1[6];
  if (dVar2 <= dVar4) {
    if (8.881784197001252e-16 <= dVar2 - dVar3) {
      return (double *)0x0;
    }
    dVar4 = dVar3 - dVar4;
  }
  else {
    if (8.881784197001252e-16 <= dVar3 - dVar2) {
      return (double *)0x0;
    }
    dVar4 = dVar4 - dVar3;
  }
  return (double *)(ulong)(dVar4 < 8.881784197001252e-16);
}



/* Entry: 1081ee7e4; end: 1081ee8e7;  */

bool FUN_1081ee7e4(double param_1,double param_2,double param_3)

{
  if (param_1 <= param_3) {
    if (7.62939453125e-06 <= param_1 - param_2) {
      return false;
    }
    param_3 = param_2 - param_3;
  }
  else {
    if (7.62939453125e-06 <= param_2 - param_1) {
      return false;
    }
    param_3 = param_3 - param_2;
  }
  return param_3 < 7.62939453125e-06;
}



/* Entry: 1081ee8e8; end: 1081ee9c7;  */

ulong FUN_1081ee8e8(undefined8 param_1,undefined8 param_2,long param_3,int param_4,
                   undefined8 param_5,long param_6)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  ulong uVar4;
  long lVar5;
  double *pdVar6;
  double dVar7;
  
  uVar3 = param_2;
  func_0x0001081ee834(param_2,param_3 + (long)param_4 * 8);
  lVar1 = (long)(int)uVar3 + (long)param_4;
  puVar2 = (undefined8 *)(param_3 + lVar1 * 8);
  *puVar2 = 0;
  puVar2[1] = 0x3ff0000000000000;
  FUN_1081e3c14(param_3,puVar2 + 2);
  lVar5 = 0;
  uVar4 = 0;
  while( true ) {
    pdVar6 = (double *)(param_3 + 8 + lVar5 * 8);
    while( true ) {
      if (lVar1 < lVar5) {
        return uVar4;
      }
      dVar7 = pdVar6[-1];
      if ((dVar7 != *pdVar6) && (FUN_1081edd74(dVar7,*pdVar6,param_1,param_2,param_5), 0.0 <= dVar7)
         ) break;
      pdVar6 = pdVar6 + 1;
      lVar5 = lVar5 + 1;
    }
    if (2 < uVar4) break;
    lVar5 = lVar5 + 1;
    *(double *)(param_6 + uVar4 * 8) = dVar7;
    uVar4 = uVar4 + 1;
  }
  return 0;
}



/* Entry: 1081ee9c8; end: 1081eeaf7;  */

double * FUN_1081ee9c8(long param_1)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  int iVar4;
  double *pdVar5;
  double *pdVar6;
  double *pdVar7;
  double *pdVar8;
  uint uVar9;
  ulong uVar10;
  ulong extraout_x8;
  ulong extraout_x8_00;
  double dVar11;
  double extraout_x9;
  double extraout_x9_00;
  ulong uVar12;
  ulong extraout_x11;
  ulong extraout_x11_00;
  ulong uVar13;
  ulong extraout_x12;
  ulong extraout_x12_00;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  undefined8 uVar20;
  double dVar21;
  double adStack_50 [4];
  
  pdVar8 = adStack_50;
  pdVar5 = adStack_50;
  adStack_50[3] = *(double *)PTR____stack_chk_guard_11034bdc0;
  FUN_1081eeaf8();
  func_0x0001081f0ca0(adStack_50,pdVar8,param_1);
  dVar14 = 1.0000001192092896;
  dVar11 = -1.1920928955078125e-07;
  dVar15 = -5e-05;
  dVar16 = 0.0;
  dVar17 = 1.0;
  dVar18 = 1.00005;
  uVar12 = (ulong)((uint)pdVar8 & ((int)(uint)pdVar8 >> 0x1f ^ 0xffffffffU));
  for (uVar10 = 0; bVar3 = uVar10 == uVar12, !bVar3; uVar10 = uVar10 + 1) {
    dVar19 = adStack_50[uVar10];
    uVar13 = (ulong)((uint)pdVar5 & ((int)(uint)pdVar5 >> 0x1f ^ 0xffffffffU));
    if ((dVar14 <= dVar19) &&
       (dVar21 = (dVar17 - dVar19) * (dVar18 - dVar19), bVar3 = dVar21 < 0.0, dVar21 <= 0.0)) {
LAB_1081eeaac:
      bVar1 = bVar3;
      if (uVar13 != 0) goto code_r0x0001081eeab0;
      uVar20 = 0x3ff0000000000000;
LAB_1081eead0:
      *(undefined8 *)(param_1 + (long)(int)pdVar5 * 8) = uVar20;
      pdVar5 = (double *)(ulong)((int)pdVar5 + 1);
      goto LAB_1081eead8;
    }
    if ((dVar19 <= dVar11) &&
       (dVar19 = (dVar15 - dVar19) * (dVar16 - dVar19), bVar3 = dVar19 < 0.0, dVar19 <= 0.0)) {
      do {
        if (uVar13 == 0) {
          uVar20 = 0;
          goto LAB_1081eead0;
        }
        func_0x0001081ef6a8();
        bVar1 = !bVar3;
        bVar3 = false;
        uVar10 = extraout_x8;
        dVar11 = extraout_x9;
        uVar12 = extraout_x11;
        uVar13 = extraout_x12;
      } while (bVar1);
    }
LAB_1081eead8:
  }
  func_0x0001081ef694(adStack_50[3]);
  if (bVar3) {
    return pdVar5;
  }
  ___stack_chk_fail();
  dVar11 = ABS(dVar14);
  if (1.1920928955078125e-07 <= dVar11) {
LAB_1081eeba8:
    dVar11 = ABS(dVar17);
    bVar3 = true;
    if ((dVar17 != 0.0) &&
       (bVar3 = false, !NAN(dVar11) && !NAN(ABS(dVar14 * 1.1920928955078125e-07)))) {
      bVar3 = dVar11 < ABS(dVar14 * 1.1920928955078125e-07);
    }
    if (bVar3) {
      bVar3 = true;
      if ((dVar17 != 0.0) &&
         (bVar3 = false, !NAN(dVar11) && !NAN(ABS(dVar15 * 1.1920928955078125e-07)))) {
        bVar3 = dVar11 < ABS(dVar15 * 1.1920928955078125e-07);
      }
      if (bVar3) {
        bVar3 = true;
        if ((dVar17 != 0.0) &&
           (bVar3 = false, !NAN(dVar11) && !NAN(ABS(dVar16 * 1.1920928955078125e-07)))) {
          bVar3 = dVar11 < ABS(dVar16 * 1.1920928955078125e-07);
        }
        if (bVar3) {
          pdVar8 = pdVar5;
          FUN_1081f0d84();
          uVar10 = (ulong)pdVar8 & 0xffffffff;
          pdVar6 = pdVar5;
          do {
            if (uVar10 == 0) {
              pdVar5[(ulong)pdVar8 & 0xffffffff] = 0.0;
              return (double *)(ulong)((int)pdVar8 + 1);
            }
            dVar11 = *pdVar6;
            uVar10 = uVar10 - 1;
            pdVar6 = pdVar6 + 1;
          } while (1.1920928955078125e-07 <= ABS(dVar11));
          return pdVar8;
        }
      }
    }
    if (1.1920928955078125e-07 <= ABS(dVar14 + dVar15 + dVar16 + dVar17)) {
      dVar14 = 1.0 / dVar14;
      dVar15 = dVar15 * dVar14;
      dVar11 = dVar15 * dVar15;
      dVar18 = (dVar11 + -(dVar14 * dVar16) * 3.0) / 9.0;
      dVar14 = (dVar15 * 9.0 * -(dVar14 * dVar16) + dVar15 * (dVar11 + dVar11) +
               dVar14 * dVar17 * 27.0) / 54.0;
      dVar16 = dVar18 * dVar18 * dVar18;
      dVar11 = dVar14 * dVar14 - dVar16;
      dVar15 = dVar15 / 3.0;
      if (0.0 <= dVar11) {
        dVar16 = ABS(dVar14) + SQRT(dVar11);
        pdVar8 = pdVar5;
        _cbrt();
        dVar11 = -dVar16;
        if (dVar14 <= 0.0) {
          dVar11 = dVar16;
        }
        if (dVar16 != 0.0) {
          dVar11 = dVar11 + dVar18 / dVar11;
        }
        pdVar6 = pdVar5 + 1;
        *pdVar5 = dVar11 - dVar15;
        func_0x0001081ef644(dVar14 * dVar14);
        if ((int)pdVar8 != 0) {
          func_0x0001081ef644(dVar11 - dVar15);
          if (((ulong)pdVar8 & 1) == 0) {
            pdVar6 = pdVar5 + 2;
            pdVar5[1] = dVar11 * -0.5 - dVar15;
          }
        }
      }
      else {
        dVar14 = dVar14 / SQRT(dVar16);
        dVar11 = 1.0;
        if (dVar14 <= 1.0) {
          dVar11 = dVar14;
        }
        if (dVar11 <= -1.0) {
          dVar11 = -1.0;
        }
        pdVar7 = pdVar5;
        _acos();
        dVar17 = SQRT(dVar18) * -2.0;
        dVar14 = dVar11 / 3.0;
        _cos();
        dVar16 = dVar17 * dVar14 - dVar15;
        *pdVar5 = dVar16;
        dVar14 = (dVar11 + 6.283185307179586) / 3.0;
        _cos();
        dVar14 = dVar17 * dVar14 - dVar15;
        func_0x0001081f6280(dVar16,dVar14);
        pdVar8 = pdVar5 + 1;
        if (((ulong)pdVar7 & 1) == 0) {
          pdVar8 = pdVar5 + 2;
          pdVar5[1] = dVar14;
        }
        dVar11 = (dVar11 + -6.283185307179586) / 3.0;
        _cos();
        func_0x0001081ef644(dVar16);
        pdVar6 = pdVar8;
        if ((((ulong)pdVar7 & 1) == 0) &&
           (((long)pdVar8 - (long)pdVar5 == 8 ||
            (func_0x0001081ef644(pdVar5[1]), ((ulong)pdVar7 & 1) == 0)))) {
          pdVar6 = pdVar8 + 1;
          *pdVar8 = -dVar15 + dVar11 * dVar17;
        }
      }
      pdVar8 = (double *)((ulong)((long)pdVar6 - (long)pdVar5) >> 3);
    }
    else {
      pdVar8 = pdVar5;
      FUN_1081f0d84();
      pdVar6 = pdVar8;
      uVar10 = (ulong)pdVar8 & 0xffffffff;
      pdVar7 = pdVar5;
      do {
        if (uVar10 == 0) {
          pdVar5[(ulong)pdVar8 & 0xffffffff] = 1.0;
          return (double *)(ulong)((int)pdVar8 + 1);
        }
        func_0x0001081f6280(*pdVar7,0x3ff0000000000000);
        uVar10 = uVar10 - 1;
        pdVar7 = pdVar7 + 1;
      } while (((ulong)pdVar6 & 1) == 0);
    }
    return pdVar8;
  }
  bVar3 = true;
  if ((dVar14 != 0.0) && (bVar3 = false, !NAN(dVar11) && !NAN(ABS(dVar15 * 1.1920928955078125e-07)))
     ) {
    bVar3 = dVar11 < ABS(dVar15 * 1.1920928955078125e-07);
  }
  if (!bVar3) goto LAB_1081eeba8;
  bVar3 = true;
  if ((dVar14 != 0.0) && (bVar3 = false, !NAN(dVar11) && !NAN(ABS(dVar16 * 1.1920928955078125e-07)))
     ) {
    bVar3 = dVar11 < ABS(dVar16 * 1.1920928955078125e-07);
  }
  if (!bVar3) goto LAB_1081eeba8;
  bVar3 = true;
  if ((dVar14 != 0.0) && (bVar3 = false, !NAN(dVar11) && !NAN(ABS(dVar17 * 1.1920928955078125e-07)))
     ) {
    bVar3 = dVar11 < ABS(dVar17 * 1.1920928955078125e-07);
  }
  if (!bVar3) goto LAB_1081eeba8;
  if (dVar15 == 0.0) {
    dVar11 = -dVar17 / dVar16;
    if (ABS(dVar16) < 1.1920928955078125e-07) {
      dVar11 = 0.0;
    }
    uVar9 = 1;
    if (ABS(dVar16) < 1.1920928955078125e-07) {
      uVar9 = (uint)(dVar17 == 0.0);
    }
    pdVar8 = (double *)(ulong)uVar9;
LAB_1081f0e8c:
    *pdVar5 = dVar11;
  }
  else {
    dVar14 = dVar16 / (dVar15 + dVar15);
    dVar11 = dVar17 / dVar15;
    if (ABS(dVar15) < 1.1920928955078125e-07) {
      dVar15 = ABS(dVar11);
      bVar3 = false;
      bVar1 = false;
      bVar2 = false;
      if (ABS(dVar14) <= 8388608.0) {
        bVar3 = false;
        bVar1 = false;
        bVar2 = true;
        if (!NAN(dVar15)) {
          bVar3 = dVar15 < 8388608.0;
          bVar1 = dVar15 == 8388608.0;
          bVar2 = false;
        }
      }
      if (!bVar1 && bVar3 == bVar2) {
        if (1.1920928955078125e-07 <= ABS(dVar16)) {
          pdVar8 = (double *)0x1;
          dVar11 = -dVar17 / dVar16;
        }
        else {
          pdVar8 = (double *)(ulong)(dVar17 == 0.0);
          dVar11 = 0.0;
        }
        goto LAB_1081f0e8c;
      }
    }
    dVar15 = dVar14 * dVar14;
    pdVar8 = pdVar5;
    func_0x0001081f6280(dVar15,dVar11);
    iVar4 = (int)pdVar8;
    if (dVar15 < dVar11 && iVar4 == 0) {
      pdVar8 = (double *)0x0;
    }
    else {
      dVar16 = SQRT(dVar15 - dVar11);
      if (dVar15 <= dVar11) {
        dVar16 = 0.0;
      }
      *pdVar5 = dVar16 - dVar14;
      pdVar5[1] = -dVar16 - dVar14;
      func_0x0001081f6280();
      uVar9 = 1;
      if (iVar4 == 0) {
        uVar9 = 2;
      }
      pdVar8 = (double *)(ulong)uVar9;
    }
  }
  return pdVar8;
code_r0x0001081eeab0:
  func_0x0001081ef6a8();
  bVar3 = false;
  uVar10 = extraout_x8_00;
  dVar11 = extraout_x9_00;
  uVar12 = extraout_x11_00;
  uVar13 = extraout_x12_00;
  if (bVar1) goto LAB_1081eead8;
  goto LAB_1081eeaac;
}



/* Entry: 1081eeaf8; end: 1081eee5b;  */

double * FUN_1081eeaf8(double param_1,double param_2,double param_3,double param_4,double *param_5)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  int iVar4;
  double *pdVar5;
  double *pdVar6;
  double *pdVar7;
  uint uVar8;
  ulong uVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  
  dVar12 = ABS(param_1);
  if (1.1920928955078125e-07 <= dVar12) {
LAB_1081eeba8:
    dVar12 = ABS(param_4);
    bVar1 = true;
    if ((param_4 != 0.0) &&
       (bVar1 = false, !NAN(dVar12) && !NAN(ABS(param_1 * 1.1920928955078125e-07)))) {
      bVar1 = dVar12 < ABS(param_1 * 1.1920928955078125e-07);
    }
    if (bVar1) {
      bVar1 = true;
      if ((param_4 != 0.0) &&
         (bVar1 = false, !NAN(dVar12) && !NAN(ABS(param_2 * 1.1920928955078125e-07)))) {
        bVar1 = dVar12 < ABS(param_2 * 1.1920928955078125e-07);
      }
      if (bVar1) {
        bVar1 = true;
        if ((param_4 != 0.0) &&
           (bVar1 = false, !NAN(dVar12) && !NAN(ABS(param_3 * 1.1920928955078125e-07)))) {
          bVar1 = dVar12 < ABS(param_3 * 1.1920928955078125e-07);
        }
        if (bVar1) {
          pdVar7 = param_5;
          FUN_1081f0d84();
          uVar9 = (ulong)pdVar7 & 0xffffffff;
          pdVar5 = param_5;
          do {
            if (uVar9 == 0) {
              param_5[(ulong)pdVar7 & 0xffffffff] = 0.0;
              return (double *)(ulong)((int)pdVar7 + 1);
            }
            dVar12 = *pdVar5;
            uVar9 = uVar9 - 1;
            pdVar5 = pdVar5 + 1;
          } while (1.1920928955078125e-07 <= ABS(dVar12));
          return pdVar7;
        }
      }
    }
    if (1.1920928955078125e-07 <= ABS(param_1 + param_2 + param_3 + param_4)) {
      param_1 = 1.0 / param_1;
      param_2 = param_2 * param_1;
      dVar12 = param_2 * param_2;
      dVar10 = (dVar12 + -(param_1 * param_3) * 3.0) / 9.0;
      dVar13 = (param_2 * 9.0 * -(param_1 * param_3) + param_2 * (dVar12 + dVar12) +
               param_1 * param_4 * 27.0) / 54.0;
      dVar11 = dVar10 * dVar10 * dVar10;
      dVar12 = dVar13 * dVar13 - dVar11;
      param_2 = param_2 / 3.0;
      if (0.0 <= dVar12) {
        dVar11 = ABS(dVar13) + SQRT(dVar12);
        pdVar7 = param_5;
        _cbrt();
        dVar12 = -dVar11;
        if (dVar13 <= 0.0) {
          dVar12 = dVar11;
        }
        if (dVar11 != 0.0) {
          dVar12 = dVar12 + dVar10 / dVar12;
        }
        pdVar5 = param_5 + 1;
        *param_5 = dVar12 - param_2;
        FUN_1081ef644(dVar13 * dVar13);
        if ((int)pdVar7 != 0) {
          FUN_1081ef644(dVar12 - param_2);
          if (((ulong)pdVar7 & 1) == 0) {
            pdVar5 = param_5 + 2;
            param_5[1] = dVar12 * -0.5 - param_2;
          }
        }
      }
      else {
        dVar13 = dVar13 / SQRT(dVar11);
        dVar12 = 1.0;
        if (dVar13 <= 1.0) {
          dVar12 = dVar13;
        }
        if (dVar12 <= -1.0) {
          dVar12 = -1.0;
        }
        pdVar6 = param_5;
        _acos();
        dVar10 = SQRT(dVar10) * -2.0;
        dVar13 = dVar12 / 3.0;
        _cos();
        dVar11 = dVar10 * dVar13 - param_2;
        *param_5 = dVar11;
        dVar13 = (dVar12 + 6.283185307179586) / 3.0;
        _cos();
        dVar13 = dVar10 * dVar13 - param_2;
        func_0x0001081f6280(dVar11,dVar13);
        pdVar7 = param_5 + 1;
        if (((ulong)pdVar6 & 1) == 0) {
          pdVar7 = param_5 + 2;
          param_5[1] = dVar13;
        }
        dVar12 = (dVar12 + -6.283185307179586) / 3.0;
        _cos();
        FUN_1081ef644(dVar11);
        pdVar5 = pdVar7;
        if ((((ulong)pdVar6 & 1) == 0) &&
           (((long)pdVar7 - (long)param_5 == 8 ||
            (FUN_1081ef644(param_5[1]), ((ulong)pdVar6 & 1) == 0)))) {
          pdVar5 = pdVar7 + 1;
          *pdVar7 = -param_2 + dVar12 * dVar10;
        }
      }
      pdVar7 = (double *)((ulong)((long)pdVar5 - (long)param_5) >> 3);
    }
    else {
      pdVar7 = param_5;
      FUN_1081f0d84(param_1,param_1 + param_2,-param_4);
      pdVar5 = pdVar7;
      uVar9 = (ulong)pdVar7 & 0xffffffff;
      pdVar6 = param_5;
      do {
        if (uVar9 == 0) {
          param_5[(ulong)pdVar7 & 0xffffffff] = 1.0;
          return (double *)(ulong)((int)pdVar7 + 1);
        }
        func_0x0001081f6280(*pdVar6,0x3ff0000000000000);
        uVar9 = uVar9 - 1;
        pdVar6 = pdVar6 + 1;
      } while (((ulong)pdVar5 & 1) == 0);
    }
    return pdVar7;
  }
  bVar1 = true;
  if ((param_1 != 0.0) &&
     (bVar1 = false, !NAN(dVar12) && !NAN(ABS(param_2 * 1.1920928955078125e-07)))) {
    bVar1 = dVar12 < ABS(param_2 * 1.1920928955078125e-07);
  }
  if (!bVar1) goto LAB_1081eeba8;
  bVar1 = true;
  if ((param_1 != 0.0) &&
     (bVar1 = false, !NAN(dVar12) && !NAN(ABS(param_3 * 1.1920928955078125e-07)))) {
    bVar1 = dVar12 < ABS(param_3 * 1.1920928955078125e-07);
  }
  if (!bVar1) goto LAB_1081eeba8;
  bVar1 = true;
  if ((param_1 != 0.0) &&
     (bVar1 = false, !NAN(dVar12) && !NAN(ABS(param_4 * 1.1920928955078125e-07)))) {
    bVar1 = dVar12 < ABS(param_4 * 1.1920928955078125e-07);
  }
  if (!bVar1) goto LAB_1081eeba8;
  if (param_2 == 0.0) {
    dVar12 = -param_4 / param_3;
    if (ABS(param_3) < 1.1920928955078125e-07) {
      dVar12 = 0.0;
    }
    uVar8 = 1;
    if (ABS(param_3) < 1.1920928955078125e-07) {
      uVar8 = (uint)(param_4 == 0.0);
    }
    pdVar7 = (double *)(ulong)uVar8;
LAB_1081f0e8c:
    *param_5 = dVar12;
  }
  else {
    dVar13 = param_3 / (param_2 + param_2);
    dVar12 = param_4 / param_2;
    if (ABS(param_2) < 1.1920928955078125e-07) {
      dVar11 = ABS(dVar12);
      bVar1 = false;
      bVar2 = false;
      bVar3 = false;
      if (ABS(dVar13) <= 8388608.0) {
        bVar1 = false;
        bVar2 = false;
        bVar3 = true;
        if (!NAN(dVar11)) {
          bVar1 = dVar11 < 8388608.0;
          bVar2 = dVar11 == 8388608.0;
          bVar3 = false;
        }
      }
      if (!bVar2 && bVar1 == bVar3) {
        if (1.1920928955078125e-07 <= ABS(param_3)) {
          pdVar7 = (double *)0x1;
          dVar12 = -param_4 / param_3;
        }
        else {
          pdVar7 = (double *)(ulong)(param_4 == 0.0);
          dVar12 = 0.0;
        }
        goto LAB_1081f0e8c;
      }
    }
    dVar11 = dVar13 * dVar13;
    pdVar7 = param_5;
    func_0x0001081f6280(dVar11,dVar12);
    iVar4 = (int)pdVar7;
    if (dVar11 < dVar12 && iVar4 == 0) {
      pdVar7 = (double *)0x0;
    }
    else {
      dVar10 = SQRT(dVar11 - dVar12);
      if (dVar11 <= dVar12) {
        dVar10 = 0.0;
      }
      *param_5 = dVar10 - dVar13;
      param_5[1] = -dVar10 - dVar13;
      func_0x0001081f6280();
      uVar8 = 1;
      if (iVar4 == 0) {
        uVar8 = 2;
      }
      pdVar7 = (double *)(ulong)uVar8;
    }
  }
  return pdVar7;
}



/* Entry: 1081eee5c; end: 1081eef37;  */

undefined1  [16] FUN_1081eee5c(double param_1,double *param_2)

{
  bool bVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  undefined1 auVar6 [16];
  
  dVar4 = param_1;
  func_0x0001081ee89c();
  dVar5 = dVar4;
  func_0x0001081ef664(param_2 + 1);
  if ((dVar4 != 0.0) || (dVar5 != 0.0)) goto LAB_1081eef04;
  if (param_1 == 0.0) {
    dVar5 = param_2[5];
    dVar4 = param_2[4];
    dVar3 = param_2[1];
    dVar2 = *param_2;
LAB_1081eeecc:
    dVar4 = dVar4 - dVar2;
    dVar5 = dVar5 - dVar3;
  }
  else {
    if (param_1 == 1.0) {
      dVar5 = param_2[7];
      dVar4 = param_2[6];
      dVar3 = param_2[3];
      dVar2 = param_2[2];
      goto LAB_1081eeecc;
    }
    FUN_10841076c(&UNK_10f47f445);
  }
  bVar1 = true;
  if ((param_1 != 1.0) && (bVar1 = false, !NAN(param_1))) {
    bVar1 = param_1 == 0.0;
  }
  if (((bVar1) && (dVar4 == 0.0)) && (dVar5 == 0.0)) {
    dVar4 = param_2[6] - *param_2;
    dVar5 = param_2[7] - param_2[1];
  }
LAB_1081eef04:
  auVar6._8_8_ = dVar5;
  auVar6._0_8_ = dVar4;
  return auVar6;
}



/* Entry: 1081eef38; end: 1081eefcb;  */

double * FUN_1081eef38(double *param_1,undefined8 param_2)

{
  bool bVar1;
  undefined1 in_ZR;
  bool bVar2;
  bool bVar3;
  int iVar4;
  double *pdVar5;
  double *pdVar6;
  uint uVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double adStack_38 [3];
  
  dVar10 = *param_1;
  dVar11 = param_1[2];
  dVar8 = (param_1[6] - dVar10) + (dVar11 - param_1[4]) * 3.0;
  dVar9 = param_1[4] + ((dVar10 - dVar11) - dVar11);
  dVar9 = dVar9 + dVar9;
  dVar11 = dVar11 - dVar10;
  func_0x0001081f1600();
  pdVar6 = adStack_38;
  FUN_1081f0d84(pdVar6);
  pdVar5 = adStack_38;
  func_0x0001081f0ca0(pdVar5,pdVar6,param_2);
  func_0x0001081f15d0();
  if ((bool)in_ZR) {
    return pdVar5;
  }
  ___stack_chk_fail();
  if (dVar8 == 0.0) {
    dVar8 = -dVar11 / dVar9;
    if (ABS(dVar9) < 1.1920928955078125e-07) {
      dVar8 = 0.0;
    }
    uVar7 = 1;
    if (ABS(dVar9) < 1.1920928955078125e-07) {
      uVar7 = (uint)(dVar11 == 0.0);
    }
    pdVar6 = (double *)(ulong)uVar7;
LAB_1081f0e8c:
    *pdVar5 = dVar8;
  }
  else {
    dVar12 = dVar9 / (dVar8 + dVar8);
    dVar10 = dVar11 / dVar8;
    if (ABS(dVar8) < 1.1920928955078125e-07) {
      dVar8 = ABS(dVar10);
      bVar1 = false;
      bVar2 = false;
      bVar3 = false;
      if (ABS(dVar12) <= 8388608.0) {
        bVar1 = false;
        bVar2 = false;
        bVar3 = true;
        if (!NAN(dVar8)) {
          bVar1 = dVar8 < 8388608.0;
          bVar2 = dVar8 == 8388608.0;
          bVar3 = false;
        }
      }
      if (!bVar2 && bVar1 == bVar3) {
        if (1.1920928955078125e-07 <= ABS(dVar9)) {
          pdVar6 = (double *)0x1;
          dVar8 = -dVar11 / dVar9;
        }
        else {
          pdVar6 = (double *)(ulong)(dVar11 == 0.0);
          dVar8 = 0.0;
        }
        goto LAB_1081f0e8c;
      }
    }
    dVar8 = dVar12 * dVar12;
    pdVar6 = pdVar5;
    func_0x0001081f6280(dVar8,dVar10);
    iVar4 = (int)pdVar6;
    if (dVar8 < dVar10 && iVar4 == 0) {
      pdVar6 = (double *)0x0;
    }
    else {
      dVar9 = SQRT(dVar8 - dVar10);
      if (dVar8 <= dVar10) {
        dVar9 = 0.0;
      }
      *pdVar5 = dVar9 - dVar12;
      pdVar5[1] = -dVar9 - dVar12;
      func_0x0001081f6280();
      uVar7 = 1;
      if (iVar4 == 0) {
        uVar7 = 2;
      }
      pdVar6 = (double *)(ulong)uVar7;
    }
  }
  return pdVar6;
}



/* Entry: 1081eefcc; end: 1081ef18f;  */

void FUN_1081eefcc(double *param_1,double param_2,double param_3,double *param_4)

{
  long lVar1;
  bool bVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  undefined1 auVar7 [16];
  double dVar8;
  undefined1 auVar9 [16];
  double dVar10;
  double adStack_e0 [14];
  
  dVar3 = 1.0;
  bVar2 = true;
  if ((param_2 != 0.0) && (bVar2 = false, !NAN(param_3))) {
    bVar2 = param_3 == 1.0;
  }
  if (bVar2) {
    bVar2 = false;
    if ((param_2 == 0.0) && (bVar2 = false, !NAN(param_3))) {
      bVar2 = param_3 == 1.0;
    }
    if (bVar2) {
      dVar5 = *param_4;
      dVar3 = param_4[2];
      dVar8 = param_4[3];
      param_1[1] = param_4[1];
      *param_1 = dVar5;
      param_1[3] = dVar8;
      param_1[2] = dVar3;
      dVar6 = param_4[5];
      dVar5 = param_4[4];
      dVar3 = param_4[6];
      dVar8 = param_4[7];
    }
    else {
      lVar1 = 0;
      if (param_2 != 0.0) {
        lVar1 = 0x30;
      }
      FUN_1081edf84(adStack_e0,param_4);
      dVar5 = *(double *)((long)adStack_e0 + lVar1);
      dVar3 = *(double *)((long)adStack_e0 + lVar1 + 0x10);
      dVar8 = *(double *)((long)adStack_e0 + lVar1 + 0x18);
      param_1[1] = *(double *)((long)adStack_e0 + lVar1 + 8);
      *param_1 = dVar5;
      param_1[3] = dVar8;
      param_1[2] = dVar3;
      dVar6 = *(double *)((long)adStack_e0 + lVar1 + 0x28);
      dVar5 = *(double *)((long)adStack_e0 + lVar1 + 0x20);
      dVar3 = *(double *)((long)adStack_e0 + lVar1 + 0x30);
      dVar8 = *(double *)((long)adStack_e0 + lVar1 + 0x38);
    }
    param_1[5] = dVar6;
    param_1[4] = dVar5;
    param_1[7] = dVar8;
    param_1[6] = dVar3;
  }
  else {
    func_0x0001081ef64c(param_4);
    *param_1 = dVar3;
    dVar8 = dVar3;
    func_0x0001081ef64c(param_4 + 1);
    param_1[1] = dVar8;
    dVar10 = (param_3 + param_2 * 2.0) / 3.0;
    dVar5 = dVar10;
    FUN_1081ef190(param_4);
    FUN_1081ef190(param_4 + 1);
    param_2 = param_2 + param_3 * 2.0;
    func_0x0001081ef64c(param_4);
    dVar6 = param_2;
    func_0x0001081ef64c(param_4 + 1);
    dVar4 = param_3;
    FUN_1081ef190(param_4);
    param_1[6] = dVar4;
    FUN_1081ef190(param_4 + 1);
    param_1[7] = param_3;
    auVar7 = NEON_fmov(0xc020000000000000,8);
    auVar9 = NEON_fmov(0x403b000000000000,8);
    dVar5 = (dVar3 * auVar7._0_8_ + auVar9._0_8_ * dVar5) - dVar4;
    dVar10 = (dVar8 * auVar7._8_8_ + auVar9._8_8_ * dVar10) - param_3;
    dVar3 = -dVar3 + auVar9._0_8_ * param_2 + auVar7._0_8_ * dVar4;
    dVar8 = -dVar8 + auVar9._8_8_ * dVar6 + auVar7._8_8_ * param_3;
    auVar7 = NEON_fmov(0x4000000000000000,8);
    auVar9 = NEON_fmov(0x4032000000000000,8);
    param_1[3] = (-dVar8 + auVar7._8_8_ * dVar10) / auVar9._8_8_;
    param_1[2] = (-dVar3 + auVar7._0_8_ * dVar5) / auVar9._0_8_;
    param_1[5] = (-dVar10 + auVar7._8_8_ * dVar8) / auVar9._8_8_;
    param_1[4] = (-dVar5 + auVar7._0_8_ * dVar3) / auVar9._0_8_;
  }
  return;
}



/* Entry: 1081ef190; end: 1081ef1d3;  */

double FUN_1081ef190(double param_1,double *param_2)

{
  double dVar1;
  double dVar2;
  double dVar3;
  
  dVar2 = param_2[2];
  dVar1 = *param_2 + param_1 * (dVar2 - *param_2);
  dVar3 = param_2[4];
  dVar2 = dVar2 + param_1 * (dVar3 - dVar2);
  dVar1 = dVar1 + param_1 * (dVar2 - dVar1);
  return dVar1 + param_1 * ((dVar2 + param_1 * ((dVar3 + param_1 * (param_2[6] - dVar3)) - dVar2)) -
                           dVar1);
}



/* Entry: 1081ef1d4; end: 1081ef337;  */

void FUN_1081ef1d4(double param_1,double param_2,double *param_3,double *param_4,double *param_5,
                  double *param_6)

{
  double *pdVar1;
  bool bVar2;
  int iVar3;
  double *pdVar4;
  double dVar5;
  double dStack_90;
  double dStack_88;
  double dStack_80;
  double dStack_78;
  double dStack_70;
  double dStack_68;
  double dStack_60;
  double dStack_58;
  
  iVar3 = (int)param_3;
  FUN_1081eefcc(&dStack_90);
  dVar5 = *param_4;
  param_6[1] = (param_4[1] - dStack_88) + dStack_78;
  *param_6 = (dVar5 - dStack_90) + dStack_80;
  dVar5 = *param_5;
  pdVar4 = param_6 + 2;
  param_6[3] = (param_5[1] - dStack_58) + dStack_68;
  *pdVar4 = (dVar5 - dStack_60) + dStack_70;
  if ((param_1 == 0.0) || (param_2 == 0.0)) {
    pdVar1 = param_6;
    if (param_1 != 0.0) {
      pdVar1 = pdVar4;
    }
    if (*param_3 == param_3[2]) {
      *pdVar1 = *param_3;
    }
    if (param_3[1] == param_3[3]) {
      pdVar1[1] = param_3[1];
    }
  }
  bVar2 = true;
  if ((param_1 != 1.0) && (bVar2 = false, !NAN(param_2))) {
    bVar2 = param_2 == 1.0;
  }
  if (bVar2) {
    pdVar1 = param_6;
    if (param_1 != 1.0) {
      pdVar1 = pdVar4;
    }
    if (param_3[6] == param_3[4]) {
      *pdVar1 = param_3[6];
    }
    if (param_3[7] == param_3[5]) {
      pdVar1[1] = param_3[7];
    }
  }
  FUN_1081e2d94(*param_6,*param_4);
  if (iVar3 != 0) {
    *param_6 = *param_4;
  }
  FUN_1081e2d94(param_6[1],param_4[1]);
  if (iVar3 != 0) {
    param_6[1] = param_4[1];
  }
  FUN_1081e2d94(*pdVar4,*param_5);
  if (iVar3 != 0) {
    *pdVar4 = *param_5;
  }
  FUN_1081e2d94(param_6[3],param_5[1]);
  if (iVar3 != 0) {
    param_6[3] = param_5[1];
  }
  return;
}



/* Entry: 1081ef338; end: 1081ef3e7;  */

bool FUN_1081ef338(long param_1,float *param_2)

{
  long lVar1;
  float fVar2;
  float fVar3;
  
  for (lVar1 = 0; lVar1 != 8; lVar1 = lVar1 + 1) {
    fVar3 = (float)*(double *)(param_1 + lVar1 * 8);
    fVar2 = 0.0;
    if (1.9073486e-06 <= ABS(fVar3)) {
      fVar2 = fVar3;
    }
    param_2[lVar1] = fVar2;
  }
  fVar2 = *param_2 - *param_2;
  for (lVar1 = 4; lVar1 != 0x20; lVar1 = lVar1 + 4) {
    fVar2 = fVar2 * *(float *)((long)param_2 + lVar1);
  }
  return !NAN(fVar2);
}



/* Entry: 1081ef3e8; end: 1081ef437;  */

double * FUN_1081ef3e8(long param_1)

{
  double *pdVar1;
  double *pdVar2;
  bool bVar3;
  bool bVar4;
  int iVar5;
  double *pdVar6;
  long lVar7;
  int extraout_w8;
  int extraout_w9;
  undefined8 unaff_x30;
  double dVar8;
  double dVar9;
  float fVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  
  lVar7 = param_1 + 8;
  FUN_1081de864(lVar7,param_1 + 0x18);
  if ((int)lVar7 != 0) {
    lVar7 = param_1 + 8;
    FUN_1081de864(lVar7,param_1 + 0x28);
    if ((int)lVar7 != 0) {
      pdVar1 = (double *)(param_1 + 8);
      pdVar2 = (double *)(param_1 + 0x38);
      if ((1.1920928955078125e-07 <= ABS(*pdVar1 - *pdVar2)) ||
         (1.1920928955078125e-07 <= ABS(*(double *)(param_1 + 0x10) - *(double *)(param_1 + 0x40))))
      {
        pdVar6 = pdVar1;
        FUN_1081de93c();
        if ((int)pdVar6 != 0) {
          dVar8 = *(double *)(param_1 + 0x10);
          FUN_1081de93c(dVar8,*(undefined8 *)(param_1 + 0x40));
          if ((int)pdVar6 != 0) {
            FUN_1081de844(pdVar1,pdVar2);
            dVar9 = *pdVar1;
            dVar11 = *(double *)(param_1 + 0x10);
            dVar12 = *pdVar2;
            dVar13 = *(double *)(param_1 + 0x40);
            dVar15 = dVar12;
            if (dVar9 <= dVar12) {
              dVar15 = dVar9;
            }
            dVar14 = dVar11;
            if (dVar15 <= dVar11) {
              dVar14 = dVar15;
            }
            dVar15 = dVar13;
            if (dVar14 <= dVar13) {
              dVar15 = dVar14;
            }
            if (dVar12 <= dVar9) {
              dVar12 = dVar9;
            }
            if (dVar11 <= dVar12) {
              dVar11 = dVar12;
            }
            if (dVar13 <= dVar11) {
              dVar13 = dVar11;
            }
            dVar11 = -dVar15;
            if (-dVar15 <= dVar13) {
              dVar11 = dVar13;
            }
            iVar5 = 8;
            fVar10 = ABS((float)(dVar8 + dVar11));
            bVar3 = false;
            bVar4 = true;
            if (ABS((float)dVar11) <= 4.7683716e-07) {
              bVar3 = false;
              bVar4 = true;
              if (!NAN(fVar10)) {
                bVar3 = fVar10 == 4.7683716e-07;
                bVar4 = 4.7683716e-07 <= fVar10;
              }
            }
            if (bVar4 && !bVar3) {
              func_0x0001081f6588(8,unaff_x30);
              return (double *)
                     (ulong)(extraout_w8 < extraout_w9 + iVar5 && extraout_w9 < extraout_w8 + iVar5)
              ;
            }
            return (double *)0x1;
          }
        }
      }
      else {
        pdVar6 = (double *)0x1;
      }
      return pdVar6;
    }
  }
  return (double *)0x0;
}



/* Entry: 1081ef438; end: 1081ef50b;  */

bool FUN_1081ef438(long param_1)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  
  dVar5 = *(double *)(param_1 + 8);
  dVar6 = *(double *)(param_1 + 0x10);
  dVar2 = *(double *)(param_1 + 0x38);
  dVar3 = *(double *)(param_1 + 0x40);
  dVar1 = dVar5 - dVar2;
  dVar4 = dVar6 - dVar3;
  if (0.0 < (dVar6 - *(double *)(param_1 + 0x20)) * dVar4 +
            (dVar5 - *(double *)(param_1 + 0x18)) * dVar1) {
    if ((0.0 < (dVar6 - *(double *)(param_1 + 0x30)) * dVar4 +
               (dVar5 - *(double *)(param_1 + 0x28)) * dVar1) &&
       (0.0 < dVar4 * (*(double *)(param_1 + 0x20) - dVar3) +
              (*(double *)(param_1 + 0x18) - dVar2) * dVar1)) {
      return 0.0 < dVar4 * (*(double *)(param_1 + 0x30) - dVar3) +
                   (*(double *)(param_1 + 0x28) - dVar2) * dVar1;
    }
  }
  return false;
}



/* Entry: 1081ef50c; end: 1081ef57b;  */

void FUN_1081ef50c(undefined8 param_1,long *param_2)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  
  plVar2 = param_2;
  FUN_10840f8d0(param_2,0x51,8);
  lVar1 = param_2[1];
  param_2[1] = (long)(plVar2 + 9);
  plVar2[9] = 0x1081ef614;
  lVar3 = param_2[1];
  param_2[1] = lVar3 + 8;
  *(char *)(lVar3 + 8) = (char)plVar2 - (char)(int)lVar1;
  *param_2 = param_2[1] + 1;
  param_2[1] = param_2[1] + 1;
  *plVar2 = (long)&PTR_DAT_110a2f740;
  return;
}



/* Entry: 1081ef57c; end: 1081ef5cb;  */

undefined8 FUN_1081ef57c(void)

{
  return 9;
}



/* Entry: 1081ef5cc; end: 1081ef643;  */

void FUN_1081ef5cc(long param_1,long param_2)

{
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  FUN_1081eefcc(&uStack_60,param_1 + 8);
  *(undefined8 *)(param_2 + 0x10) = uStack_58;
  *(undefined8 *)(param_2 + 8) = uStack_60;
  *(undefined8 *)(param_2 + 0x20) = uStack_48;
  *(undefined8 *)(param_2 + 0x18) = uStack_50;
  *(undefined8 *)(param_2 + 0x30) = uStack_38;
  *(undefined8 *)(param_2 + 0x28) = uStack_40;
  *(undefined8 *)(param_2 + 0x40) = uStack_28;
  *(undefined8 *)(param_2 + 0x38) = uStack_30;
  return;
}



/* Entry: 1081ef644; end: 1081ef6bb;  */

bool FUN_1081ef644(double param_1)

{
  float fVar1;
  int iVar2;
  ulong uVar3;
  int iVar4;
  float fVar5;
  undefined8 uVar6;
  double dVar7;
  double dVar8;
  double unaff_d8;
  
  dVar7 = ABS(param_1);
  dVar8 = ABS(unaff_d8);
  if ((dVar7 < 3.4028234663852886e+38) && (dVar8 < 3.4028234663852886e+38)) {
    fVar1 = (float)param_1;
    fVar5 = (float)unaff_d8;
    uVar3 = CONCAT44(fVar5,fVar1) ^
            (CONCAT44(fVar5,fVar1) ^ CONCAT44(-(int)ABS(fVar5),-(int)ABS(fVar1))) &
            CONCAT44(-(uint)((int)fVar5 < 0),-(uint)((int)fVar1 < 0));
    iVar2 = (int)uVar3;
    iVar4 = (int)(uVar3 >> 0x20);
    uVar6 = NEON_rev64(CONCAT44(iVar4 + 0x10,iVar2 + 0x10),4);
    return (bool)(-(iVar2 < (int)uVar6 && iVar4 < (int)((ulong)uVar6 >> 0x20)) & 1);
  }
  if (dVar8 <= dVar7) {
    dVar8 = dVar7;
  }
  return ABS(param_1 - unaff_d8) / dVar8 < 1.9073486328125e-06;
}



/* Entry: 1081ef6bc; end: 1081ef8bb;  */

double FUN_1081ef6bc(double *param_1,uint param_2,double *param_3,double *param_4)

{
  uint uVar1;
  int iVar2;
  double *pdVar3;
  long lVar4;
  ulong uVar5;
  uint uVar6;
  ulong uVar7;
  undefined1 *puVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dStack_260;
  double dStack_258;
  double dStack_250;
  double dStack_248;
  undefined1 auStack_240 [240];
  double adStack_150 [26];
  undefined4 uStack_80;
  undefined2 uStack_7c;
  undefined4 uStack_7a;
  
  uVar6 = param_2 - ((int)(param_2 + 1) >> 2);
  lVar4 = 0x10;
  uVar7 = (ulong)(uVar6 & ((int)uVar6 >> 0x1f ^ 0xffffffffU));
  dVar12 = *param_1;
  dVar13 = *param_1;
  for (uVar5 = uVar7; uVar5 != 0; uVar5 = uVar5 - 1) {
    dVar9 = *(double *)((long)param_1 + lVar4);
    dVar11 = dVar9;
    if (dVar13 <= dVar9) {
      dVar11 = dVar13;
    }
    if (dVar9 <= dVar12) {
      dVar9 = dVar12;
    }
    lVar4 = lVar4 + 0x10;
    dVar12 = dVar9;
    dVar13 = dVar11;
  }
  pdVar3 = param_1;
  FUN_1081ef8bc(dVar13,*param_3,dVar12);
  dVar9 = -1.0;
  if (((ulong)pdVar3 & 1) != 0) {
    lVar4 = 0x18;
    dVar11 = param_1[1];
    dVar14 = param_1[1];
    for (; uVar7 != 0; uVar7 = uVar7 - 1) {
      dVar10 = *(double *)((long)param_1 + lVar4);
      dVar15 = dVar10;
      if (dVar11 <= dVar10) {
        dVar15 = dVar11;
      }
      if (dVar10 <= dVar14) {
        dVar10 = dVar14;
      }
      lVar4 = lVar4 + 0x10;
      dVar11 = dVar15;
      dVar14 = dVar10;
    }
    FUN_1081ef8bc(dVar11,param_3[1],dVar14);
    if (((ulong)pdVar3 & 1) != 0) {
      uStack_7c = 0;
      puVar8 = auStack_240;
      _bzero(auStack_240,0x1c0);
      uStack_7a = 0x10000;
      dStack_258 = param_3[1];
      dStack_260 = *param_3;
      dStack_250 = (*param_3 + param_4[1]) - param_3[1];
      uStack_80 = 0;
      dVar9 = (*param_3 + param_3[1]) - *param_4;
      dStack_248 = dVar9;
      (**(code **)(&UNK_110a2f808 + (ulong)param_2 * 8))(param_1,&dStack_260,auStack_240);
      uVar5 = 0;
      uVar6 = 0xffffffff;
      dVar15 = 3.4028234663852886e+38;
      while( true ) {
        iVar2 = (int)param_1;
        if ((byte)uStack_7a <= uVar5) break;
        param_1 = param_3;
        FUN_1081de844(param_3,puVar8);
        dVar10 = dVar9;
        uVar1 = (uint)uVar5;
        if (dVar15 <= dVar9) {
          dVar10 = dVar15;
          uVar1 = uVar6;
        }
        uVar6 = uVar1;
        uVar5 = uVar5 + 1;
        puVar8 = puVar8 + 0x10;
        dVar15 = dVar10;
      }
      dVar9 = -1.0;
      if (-1 < (int)uVar6) {
        if (dVar13 <= dVar11) {
          dVar11 = dVar13;
        }
        if (dVar14 <= dVar12) {
          dVar14 = dVar12;
        }
        dVar12 = -dVar11;
        if (-dVar11 <= dVar14) {
          dVar12 = dVar14;
        }
        func_0x0001081ef8cc(dVar12,dVar12 + dVar15);
        if (iVar2 != 0) {
          dVar13 = adStack_150[uVar6];
          dVar12 = 1.0;
          if (dVar13 <= 0.9999999999999991) {
            dVar12 = dVar13;
          }
          dVar9 = 0.0;
          if (8.881784197001252e-16 <= dVar13) {
            dVar9 = dVar12;
          }
        }
      }
    }
  }
  return dVar9;
}



/* Entry: 1081ef8bc; end: 1081ef8d7;  */

bool FUN_1081ef8bc(double param_1,double param_2,double param_3)

{
  float fVar1;
  bool bVar2;
  bool bVar3;
  int iVar4;
  int extraout_w8;
  int extraout_w9;
  undefined8 unaff_x30;
  float fVar5;
  float fVar6;
  
  fVar5 = (float)param_2;
  fVar6 = (float)param_3;
  if ((float)param_1 <= fVar6) {
    iVar4 = 2;
    FUN_1081f6490((float)param_1,fVar5);
    fVar1 = fVar5;
    fVar5 = fVar6;
  }
  else {
    iVar4 = 2;
    FUN_1081f6490(fVar5);
    fVar1 = fVar6;
  }
  if (iVar4 == 0) {
    return false;
  }
  iVar4 = 2;
  fVar6 = ABS(fVar5);
  bVar2 = false;
  bVar3 = true;
  if (ABS(fVar1) <= 1.1920929e-07) {
    bVar2 = false;
    bVar3 = true;
    if (!NAN(fVar6)) {
      bVar2 = fVar6 == 1.1920929e-07;
      bVar3 = 1.1920929e-07 <= fVar6;
    }
  }
  if (bVar3 && !bVar2) {
    func_0x0001081f6588(2,unaff_x30);
    return extraout_w8 < extraout_w9 + iVar4;
  }
  return fVar1 < fVar5 + 2.3841858e-07;
}



/* Entry: 1081ef8d8; end: 1081ef93b;  */

void FUN_1081ef8d8(undefined4 param_1)

{
  undefined8 auStack_98 [2];
  undefined8 uStack_88;
  undefined1 auStack_78 [48];
  undefined4 uStack_48;
  
  func_0x0001081efc38();
  FUN_1081ddb24(auStack_78);
  uStack_48 = param_1;
  func_0x0001081efc28(auStack_98,auStack_78);
  FUN_1081f172c();
  func_0x0001081efc48(uStack_88,auStack_98[0]);
  return;
}



/* Entry: 1081ef93c; end: 1081ef9db;  */

void FUN_1081ef93c(void)

{
  undefined8 auStack_90 [2];
  undefined8 uStack_80;
  undefined1 auStack_70 [64];
  
  func_0x0001081efc38();
  func_0x0001081ddb44(auStack_70);
  func_0x0001081efc28(auStack_90,auStack_70);
  func_0x0001081f1800();
  func_0x0001081efc48(uStack_80,auStack_90[0]);
  return;
}



/* Entry: 1081ef9dc; end: 1081efbd7;  */

void FUN_1081ef9dc(double *param_1,int param_2)

{
  bool bVar1;
  long lVar2;
  double *pdVar3;
  double *pdVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dStack_50;
  double dStack_48;
  
  dVar10 = param_1[1];
  dVar9 = *param_1;
  dVar5 = param_1[2] - dVar9;
  dVar6 = param_1[3] - dVar10;
  pdVar3 = param_1 + 8;
  param_1[9] = dVar6;
  *pdVar3 = dVar5;
  *(undefined1 *)((long)param_1 + 0x61) = 1;
  if (param_2 == 1) {
    param_1[0xb] = param_1[9];
    param_1[10] = *pdVar3;
    *(undefined1 *)(param_1 + 0xc) = 0;
  }
  else {
    pdVar4 = param_1 + 10;
    param_1[0xb] = param_1[5] - dVar10;
    *pdVar4 = param_1[4] - dVar9;
    dVar7 = 0.0;
    for (lVar2 = 0; lVar2 <= param_2 - (param_2 + 1 >> 2); lVar2 = lVar2 + 1) {
      dVar11 = param_1[lVar2 * 2];
      dVar8 = (param_1 + lVar2 * 2)[1];
      dVar11 = (double)((ulong)dVar11 ^ ((ulong)dVar11 ^ (ulong)-dVar11) & -(ulong)(dVar11 < 0.0));
      dVar8 = (double)((ulong)dVar8 ^ ((ulong)dVar8 ^ (ulong)-dVar8) & -(ulong)(dVar8 < 0.0));
      if (dVar8 <= dVar11) {
        dVar8 = dVar11;
      }
      if (dVar8 <= dVar7) {
        dVar8 = dVar7;
      }
      dVar7 = dVar8;
    }
    if (param_2 == 4) {
      dStack_50 = param_1[6] - dVar9;
      dStack_48 = param_1[7] - dVar10;
      if ((dVar5 == 0.0) && (dVar5 = dVar6, dVar6 == 0.0)) {
        param_1[9] = param_1[0xb];
        *pdVar3 = *pdVar4;
        param_1[0xb] = dStack_48;
        *pdVar4 = dStack_50;
        dVar6 = ABS(*pdVar3);
        dVar5 = ABS(dVar7 * 7.62939453125e-06);
        bVar1 = true;
        if ((*pdVar3 != 0.0) && (bVar1 = false, !NAN(dVar6) && !NAN(dVar5))) {
          bVar1 = dVar6 < dVar5;
        }
        if (bVar1) {
          dVar6 = ABS(param_1[9]);
          bVar1 = true;
          if ((param_1[9] != 0.0) && (bVar1 = false, !NAN(dVar6) && !NAN(dVar5))) {
            bVar1 = dVar6 < dVar5;
          }
          if (bVar1) {
            param_1[9] = dStack_48;
            *pdVar3 = dStack_50;
            dVar5 = param_1[6];
            param_1[3] = param_1[7];
            param_1[2] = dVar5;
          }
        }
      }
      else {
        FUN_1081e1bf4(pdVar3,&dStack_50);
        dVar6 = dVar5;
        FUN_1081e1bf4(&dStack_50,pdVar4);
        dVar5 = dVar5 * dVar6;
        if (dVar5 < 0.0) {
          FUN_1081e1bf4(pdVar4,pdVar3);
          if (dVar6 * dVar5 < 0.0) {
            param_1[9] = param_1[0xb];
            *pdVar3 = *pdVar4;
            *(undefined1 *)((long)param_1 + 0x61) = 0;
          }
          param_1[0xb] = dStack_48;
          *pdVar4 = dStack_50;
          dVar5 = dStack_50;
        }
      }
    }
    else {
      dVar9 = ABS(dVar7 * 7.62939453125e-06);
      bVar1 = true;
      if ((dVar5 != 0.0) && (bVar1 = false, !NAN(ABS(dVar5)) && !NAN(dVar9))) {
        bVar1 = ABS(dVar5) < dVar9;
      }
      if (bVar1) {
        bVar1 = true;
        if ((dVar6 != 0.0) && (bVar1 = false, !NAN(ABS(dVar6)) && !NAN(dVar9))) {
          bVar1 = ABS(dVar6) < dVar9;
        }
        dVar5 = dVar6;
        if (bVar1) {
          dVar5 = *pdVar4;
          param_1[9] = param_1[0xb];
          *pdVar3 = dVar5;
        }
      }
    }
    FUN_1081e1bf4(pdVar3,pdVar4);
    *(bool *)(param_1 + 0xc) = dVar5 != 0.0;
  }
  return;
}



/* Entry: 1081efbd8; end: 1081efc77;  */

undefined1 FUN_1081efbd8(double *param_1,double *param_2,ulong param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  
  *(undefined1 *)(param_3 + 0x1c7) = 2;
  dVar6 = *param_1;
  dVar3 = param_1[1];
  dVar4 = param_1[2] - dVar6;
  dVar5 = param_1[3] - dVar3;
  dVar8 = *param_2;
  dVar7 = param_2[1];
  dVar9 = -((param_2[2] - dVar8) * dVar5) + dVar4 * (param_2[3] - dVar7);
  if (1.1920928955078125e-07 <= ABS(dVar9)) {
    *(double *)(param_3 + 0xf0) =
         (-((dVar6 - dVar8) * (param_2[3] - dVar7)) + (param_2[2] - dVar8) * (dVar3 - dVar7)) /
         dVar9;
    *(double *)(param_3 + 0x158) = (-((dVar6 - dVar8) * dVar5) + dVar4 * (dVar3 - dVar7)) / dVar9;
    uVar2 = 1;
  }
  else {
    uVar1 = param_3;
    FUN_1081e006c(-(dVar6 * dVar5) + dVar3 * dVar4,-(dVar8 * dVar5) + dVar7 * dVar4);
    if ((uVar1 & 1) == 0) {
      *(undefined1 *)(param_3 + 0x1c6) = 0;
      return 0;
    }
    *(undefined8 *)(param_3 + 0xf0) = 0;
    *(undefined8 *)(param_3 + 0x158) = 0x3ff0000000000000;
    *(undefined8 *)(param_3 + 0x160) = 0x3ff0000000000000;
    uVar2 = 2;
  }
  FUN_1081dff38(param_3,param_1,uVar2);
  return *(undefined1 *)(param_3 + 0x1c6);
}



/* Entry: 1081efc78; end: 1081efca3;  */

undefined8 * FUN_1081efc78(undefined8 *param_1)

{
  FUN_1081efca4(*param_1);
  return param_1;
}



/* Entry: 1081efca4; end: 1081efd43;  */

void FUN_1081efca4(int *param_1)

{
  int *piVar1;
  int iVar2;
  bool bVar3;
  int *piVar4;
  undefined8 uVar5;
  int iVar6;
  char cVar7;
  char cStack_31;
  
  do {
    iVar2 = *param_1;
    cVar7 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(param_1,0x10);
    if (bVar3) {
      *param_1 = iVar2 + 1;
      cVar7 = ExclusiveMonitorsStatus();
    }
  } while (cVar7 != '\0');
  iVar6 = 1;
  if (-2 < iVar2) {
    iVar6 = -iVar2;
  }
  if (0 < iVar6) {
    piVar1 = param_1 + 1;
    cStack_31 = (char)*piVar1;
    cVar7 = cStack_31;
    if (cStack_31 != '\0') goto LAB_108410100;
    piVar4 = piVar1;
    func_0x00010841038c(piVar1,&cStack_31);
    if ((int)piVar4 == 0) {
      do {
        cVar7 = (char)*piVar1;
LAB_108410100:
      } while (cVar7 != '\x02');
    }
    else {
      uVar5 = 8;
      __Znwm();
      func_0x000108410248();
      *(undefined8 *)(param_1 + 2) = uVar5;
      *(undefined1 *)(param_1 + 1) = 2;
    }
    FUN_108410128(*(undefined8 *)(param_1 + 2),iVar6);
    return;
  }
  return;
}



/* Entry: 1081efd44; end: 1081efedb;  */

double FUN_1081efd44(double *param_1,double *param_2,long param_3)

{
  long lVar1;
  long lVar2;
  int iVar3;
  double *pdVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  
  pdVar4 = param_1;
  FUN_1081ef8bc(*param_1,*param_2,param_1[2]);
  iVar3 = (int)pdVar4;
  if ((iVar3 != 0) && (FUN_1081ef8bc(param_1[1],param_2[1],param_1[3]), iVar3 != 0)) {
    dVar9 = param_1[2];
    dVar8 = param_1[3];
    dVar10 = *param_1;
    dVar11 = param_1[1];
    dVar5 = dVar9 - dVar10;
    dVar7 = dVar8 - dVar11;
    dVar6 = dVar7 * dVar7 + dVar5 * dVar5;
    dVar12 = *param_2;
    dVar13 = param_2[1];
    dVar5 = dVar7 * (dVar13 - dVar11) + (dVar12 - dVar10) * dVar5;
    if ((0.0 - dVar5) * (dVar6 - dVar5) <= 0.0) {
      if (dVar6 == 0.0) {
        return 0.0;
      }
      dVar5 = dVar5 / dVar6;
      pdVar4 = param_1;
      dVar7 = dVar5;
      func_0x0001081efcd4();
      iVar3 = (int)pdVar4;
      dVar7 = dVar7 - dVar12;
      dVar6 = dVar6 - dVar13;
      dVar12 = dVar11;
      if (dVar10 <= dVar11) {
        dVar12 = dVar10;
      }
      lVar1 = 8;
      if (dVar10 <= dVar11) {
        lVar1 = 0;
      }
      lVar2 = 0x10;
      if (dVar12 <= dVar9) {
        lVar2 = lVar1;
      }
      dVar12 = dVar8;
      if (*(double *)((long)param_1 + lVar2) <= dVar8) {
        dVar12 = *(double *)((long)param_1 + lVar2);
      }
      dVar13 = dVar11;
      if (dVar11 <= dVar10) {
        dVar13 = dVar10;
      }
      lVar1 = 8;
      if (dVar11 <= dVar10) {
        lVar1 = 0;
      }
      lVar2 = 0x10;
      if (dVar9 <= dVar13) {
        lVar2 = lVar1;
      }
      if (dVar8 <= *(double *)((long)param_1 + lVar2)) {
        dVar8 = *(double *)((long)param_1 + lVar2);
      }
      dVar9 = -dVar12;
      if (-dVar12 <= dVar8) {
        dVar9 = dVar8;
      }
      dVar8 = SQRT(dVar6 * dVar6 + dVar7 * dVar7) + dVar9;
      func_0x0001081ef8cc(dVar9,dVar8);
      if (iVar3 == 0) {
        return -1.0;
      }
      if (param_3 != 0) {
        *(bool *)param_3 = (float)dVar9 != (float)dVar8;
      }
      dVar8 = 1.0;
      if (dVar5 <= 0.9999999999999991) {
        dVar8 = dVar5;
      }
      if (dVar5 < 8.881784197001252e-16) {
        return 0.0;
      }
      return dVar8;
    }
  }
  return -1.0;
}



/* Entry: 1081efedc; end: 1081eff8b;  */

bool FUN_1081efedc(double *param_1,double *param_2)

{
  bool bVar1;
  bool bVar2;
  int iVar3;
  int extraout_w8;
  int extraout_w9;
  undefined8 unaff_x30;
  double dVar4;
  double dVar5;
  double dVar6;
  float fVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  
  dVar8 = param_1[2];
  dVar9 = param_1[3];
  dVar10 = *param_1;
  dVar11 = param_1[1];
  dVar4 = dVar8 - dVar10;
  dVar5 = dVar9 - dVar11;
  dVar12 = *param_2;
  dVar13 = param_2[1];
  dVar6 = dVar5 * (dVar13 - dVar11);
  dVar5 = (dVar6 + (dVar12 - dVar10) * dVar4) / (dVar5 * dVar5 + dVar4 * dVar4);
  func_0x0001081efcd4();
  dVar5 = dVar5 - dVar12;
  dVar6 = dVar6 - dVar13;
  dVar4 = dVar11;
  if (dVar10 <= dVar11) {
    dVar4 = dVar10;
  }
  dVar12 = dVar8;
  if (dVar4 <= dVar8) {
    dVar12 = dVar4;
  }
  dVar4 = dVar9;
  if (dVar12 <= dVar9) {
    dVar4 = dVar12;
  }
  if (dVar11 <= dVar10) {
    dVar11 = dVar10;
  }
  if (dVar8 <= dVar11) {
    dVar8 = dVar11;
  }
  if (dVar9 <= dVar8) {
    dVar9 = dVar8;
  }
  dVar8 = -dVar4;
  if (-dVar4 <= dVar9) {
    dVar8 = dVar9;
  }
  iVar3 = 0x100;
  fVar7 = ABS((float)(SQRT(dVar6 * dVar6 + dVar5 * dVar5) + dVar8));
  bVar1 = false;
  bVar2 = true;
  if (ABS((float)dVar8) <= 6.1035156e-05) {
    bVar1 = false;
    bVar2 = true;
    if (!NAN(fVar7)) {
      bVar1 = fVar7 == 6.1035156e-05;
      bVar2 = 6.1035156e-05 <= fVar7;
    }
  }
  if (bVar2 && !bVar1) {
    func_0x0001081f6588(0x100,unaff_x30);
    return extraout_w8 < extraout_w9 + iVar3 && extraout_w9 < extraout_w8 + iVar3;
  }
  return true;
}



/* Entry: 1081eff8c; end: 1081f00c3;  */

double FUN_1081eff8c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  bool bVar1;
  int iVar2;
  undefined4 uVar3;
  double *unaff_x19;
  double dVar4;
  double unaff_d8;
  double unaff_d10;
  double dVar5;
  
  uVar3 = (undefined4)((ulong)param_4 >> 0x20);
  iVar2 = (int)param_4;
  func_0x0001081f0120();
  FUN_1081e2d94(*(undefined8 *)(CONCAT44(uVar3,iVar2) + 8),param_3);
  dVar5 = -1.0;
  if ((iVar2 != 0) && (func_0x0001081f0114(), iVar2 != 0)) {
    dVar5 = (*unaff_x19 - unaff_d10) / (unaff_d8 - unaff_d10);
    bVar1 = dVar5 < 0.9999999999999991;
    dVar4 = 1.0;
    if (dVar5 <= 0.9999999999999991) {
      dVar4 = dVar5;
    }
    func_0x0001081f0134(*unaff_x19,unaff_x19[1],dVar5,0x3ff0000000000000,dVar4);
    if (!bVar1) {
      dVar5 = dVar4;
    }
    func_0x0001081f00c4();
    func_0x0001081f00f0();
    if (iVar2 == 0) {
      dVar5 = -1.0;
    }
  }
  return dVar5;
}



/* Entry: 1081f00c4; end: 1081f0147;  */

void FUN_1081f00c4(void)

{
  return;
}



/* Entry: 1081f0148; end: 1081f09c7;  */

/* WARNING: Possible PIC construction at 0x0001081f0468: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001081f0524: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001081f0534: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001081f0528) */
/* WARNING: Removing unreachable block (ram,0x0001081f052c) */
/* WARNING: Removing unreachable block (ram,0x0001081f046c) */
/* WARNING: Removing unreachable block (ram,0x0001081f0470) */
/* WARNING: Removing unreachable block (ram,0x0001081f0488) */
/* WARNING: Removing unreachable block (ram,0x0001081f0498) */
/* WARNING: Removing unreachable block (ram,0x0001081f04a0) */
/* WARNING: Removing unreachable block (ram,0x0001081f04a4) */
/* WARNING: Removing unreachable block (ram,0x0001081f04b8) */
/* WARNING: Removing unreachable block (ram,0x0001081f0538) */
/* WARNING: Removing unreachable block (ram,0x0001081f053c) */

double *******
FUN_1081f0148(double *******param_1,double *******param_2,double *******param_3,
             double *******param_4)

{
  uint uVar1;
  double *******pppppppdVar2;
  double *******pppppppdVar3;
  undefined4 uVar4;
  uint uVar5;
  byte bVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  float fVar10;
  int iVar11;
  undefined1 *puVar12;
  double *******pppppppdVar13;
  double ******ppppppdVar14;
  double ******ppppppdVar15;
  double *******pppppppdVar16;
  ulong uVar17;
  double *******pppppppdVar18;
  ulong uVar19;
  double *******pppppppdVar20;
  double *******pppppppdVar21;
  double *******pppppppdVar22;
  double ******ppppppdVar23;
  double *******pppppppdVar24;
  double *******pppppppdVar25;
  undefined8 uVar26;
  undefined1 uVar27;
  undefined1 uVar28;
  undefined1 uVar29;
  undefined1 uVar30;
  undefined1 uVar31;
  undefined1 uVar32;
  undefined1 uVar33;
  undefined8 uStack_1488;
  undefined8 uStack_1480;
  undefined1 auStack_1478 [16];
  double dStack_1468;
  undefined1 uStack_1460;
  undefined7 uStack_145f;
  double dStack_1458;
  double dStack_1450;
  byte bStack_1418;
  double ******ppppppdStack_1410;
  double ******ppppppdStack_1408;
  double ******ppppppdStack_1400;
  double ******ppppppdStack_13f8;
  undefined1 *puStack_13f0;
  undefined8 uStack_13e8;
  undefined8 *puStack_13e0;
  uint uStack_13d4;
  double ******ppppppdStack_13d0;
  int iStack_13c4;
  uint uStack_13c0;
  int iStack_13bc;
  double ******ppppppdStack_13b8;
  double ******ppppppdStack_13b0;
  double ******ppppppdStack_13a8;
  undefined1 auStack_13a0 [80];
  long lStack_1350;
  double *****apppppdStack_1348 [2];
  undefined1 auStack_1338 [128];
  int aiStack_12b8 [3];
  byte bStack_12ac;
  byte bStack_12aa;
  double *****pppppdStack_12a8;
  undefined8 uStack_12a0;
  double ******ppppppdStack_1298;
  undefined4 uStack_1290;
  undefined1 uStack_128c;
  double ******ppppppdStack_1288;
  double *****pppppdStack_1280;
  double ******ppppppdStack_1278;
  undefined4 uStack_1270;
  undefined2 uStack_126b;
  double ******ppppppdStack_1268;
  double *****apppppdStack_1260 [31];
  undefined8 uStack_1168;
  undefined8 uStack_1160;
  undefined8 uStack_1140;
  undefined8 uStack_1138;
  undefined8 uStack_1130;
  undefined8 uStack_1128;
  undefined4 uStack_111c;
  undefined1 uStack_1114;
  double *****pppppdStack_1108;
  undefined8 uStack_1100;
  double *****pppppdStack_10f8;
  undefined8 uStack_10f0;
  double ******ppppppdStack_10e8;
  double ******ppppppdStack_10e0;
  undefined4 auStack_10d8 [2];
  long lStack_10d0;
  undefined8 uStack_10c8;
  double ******ppppppdStack_10c0;
  double ******ppppppdStack_10b8;
  ushort uStack_10aa;
  undefined8 uStack_10a8;
  ulong uStack_10a0;
  int iStack_1098;
  byte bStack_1092;
  byte bStack_1091;
  double ******ppppppdStack_1090;
  byte bStack_1082;
  double *****apppppdStack_90 [4];
  long lStack_70;
  
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar17 = (ulong)(*(byte *)((long)param_1 + 0xe) >> 1) & 1;
  uVar19 = (ulong)(*(byte *)((long)param_2 + 0xe) >> 1) & 1;
  uVar5 = *(uint *)(&UNK_10df097b4 + uVar19 * 4 + uVar17 * 8 + ((ulong)param_3 & 0xffffffff) * 0x10)
  ;
  bVar6 = (&UNK_10df09804)[uVar19 + uVar17 * 2 + (ulong)uVar5 * 4];
  uStack_10f0 = 0;
  pppppdStack_10f8 = (double *****)0x0;
  uStack_1100 = 0;
  pppppdStack_1108 = (double *****)0x0;
  if (((uVar5 == 1) &&
      (pppppppdVar21 = param_1, func_0x0001081f0a04(3,param_1,&pppppdStack_10f8),
      (int)pppppppdVar21 != 0)) &&
     (pppppppdVar21 = param_2, func_0x0001081f0a04(param_2,&pppppdStack_1108),
     (int)pppppppdVar21 != 0)) {
    func_0x0001081f09fc();
    func_0x0001081f09d4();
    pppppppdVar20 = (double *******)&pppppdStack_10f8;
    pppppppdVar16 = (double *******)&pppppdStack_1108;
    FUN_10838ed10();
    if ((int)pppppppdVar20 != 0) {
      pppppppdVar16 = (double *******)&pppppdStack_10f8;
      param_3 = (double *******)0x0;
      func_0x000108142248();
      pppppppdVar20 = param_4;
    }
    pppppppdVar21 = (double *******)0x1;
  }
  else if ((*(int *)(*param_1 + 9) == 0) || (*(int *)(*param_2 + 9) == 0)) {
    func_0x000108376ad8(&ppppppdStack_1090);
    if (uVar5 - 2 < 2) {
      pppppppdVar21 = param_2;
      if (*(int *)(*param_1 + 9) != 0) {
        pppppppdVar21 = param_1;
      }
LAB_1081f0864:
      FUN_108376b90(&ppppppdStack_1090,pppppppdVar21);
      param_1 = pppppppdVar21;
    }
    else if (uVar5 == 0) {
      iVar11 = *(int *)(*param_1 + 9);
joined_r0x0001081f0860:
      pppppppdVar21 = param_1;
      if (iVar11 != 0) goto LAB_1081f0864;
    }
    else if (uVar5 == 4) {
      iVar11 = *(int *)(*param_2 + 9);
      param_1 = param_2;
      goto joined_r0x0001081f0860;
    }
    if (bVar6 != (bStack_1082 >> 1 & 1)) {
      bStack_1082 = bStack_1082 ^ 2;
    }
    pppppppdVar21 = &ppppppdStack_1090;
    FUN_1081f1968();
    FUN_10837ca5c();
    pppppppdVar20 = (double *******)ppppppdStack_1090;
    pppppppdVar16 = param_4;
  }
  else {
    func_0x0001081e4cd0(&ppppppdStack_1090,0x1000);
    uStack_1160 = 0;
    uStack_1168 = 0;
    uStack_111c = 0;
    uStack_1114 = 0;
    uStack_1138 = 0;
    uStack_1140 = 0;
    uStack_1128 = 0;
    uStack_1130 = 0;
    ppppppdStack_1278 = apppppdStack_1260;
    ppppppdStack_13a8 = apppppdStack_90;
    uStack_1270 = 0;
    uStack_126b = 0x100;
    pppppdStack_12a8 = (double *****)0x0;
    uStack_12a0 = 0;
    ppppppdStack_1298 = (double ******)&ppppppdStack_1288;
    uStack_1290 = 0;
    uStack_128c = 0;
    pppppppdVar21 = param_1;
    pppppppdVar16 = param_2;
    if (uVar5 != 4) {
      pppppppdVar21 = param_2;
      pppppppdVar16 = param_1;
    }
    pppppdStack_1280 = (double *****)&pppppdStack_12a8;
    uVar1 = 0;
    if (uVar5 != 4) {
      uVar1 = uVar5;
    }
    param_3 = (double *******)apppppdStack_1260;
    ppppppdStack_1288 = ppppppdStack_13a8;
    ppppppdStack_1268 = ppppppdStack_1278;
    FUN_1081e4bd8(auStack_1338,pppppppdVar16,param_3,&ppppppdStack_1288);
    if ((bStack_12aa & 1) == 0) {
      iVar11 = *(int *)((ulong)aiStack_12b8 | (ulong)bStack_12ac << 2);
      FUN_1081e8578(auStack_1338);
      uVar17 = 0;
      FUN_1081e85a0();
      pppppppdVar16 = pppppppdVar21;
      if ((uVar17 & 1) == 0) goto LAB_1081f0828;
      iStack_13bc = aiStack_12b8[bStack_12ac];
      pppppppdVar16 = (double *******)(ulong)(iVar11 == 1);
      param_3 = (double *******)(ulong)(iStack_13bc == 1);
      uVar17 = 0;
      FUN_1081ecf18();
      pppppppdVar20 = (double *******)ppppppdStack_1268;
      pppppppdVar13 = (double *******)ppppppdStack_1268;
      if ((uVar17 & 1) == 0) {
        func_0x0001081f09fc();
        func_0x0001081f09d4();
        pppppppdVar21 = (double *******)0x1;
      }
      else {
LAB_1081f0348:
        do {
          param_3 = (double *******)&pppppdStack_12a8;
          pppppppdVar16 = pppppppdVar13;
          FUN_1081dcf94(pppppppdVar13,pppppppdVar20);
          pppppppdVar21 = pppppppdVar20;
          if ((int)pppppppdVar16 != 0) {
            pppppppdVar21 = (double *******)pppppppdVar20[0x25];
            pppppppdVar20 = pppppppdVar21;
            if (pppppppdVar21 != (double *******)0x0) goto LAB_1081f0348;
          }
          pppppppdVar20 = (double *******)pppppppdVar13[0x25];
          pppppppdVar13 = pppppppdVar20;
        } while (pppppppdVar20 != (double *******)0x0);
        pppppppdVar16 = (double *******)&pppppdStack_12a8;
        ppppppdStack_13d0 = ppppppdStack_1268;
        pppppppdVar20 = (double *******)ppppppdStack_1268;
        FUN_1081ed080();
        if (((ulong)pppppppdVar20 & 1) == 0) goto LAB_1081f0828;
        func_0x000108376b14(apppppdStack_1348,param_4);
        func_0x0001081f09fc();
        func_0x0001081f09d4();
        pppppppdVar16 = param_4;
        FUN_1081f7554(auStack_13a0);
        uStack_10aa = 0;
        iStack_13c4 = iVar11;
        uStack_13c0 = uVar1;
        while( true ) {
          pppppppdVar20 = (double *******)ppppppdStack_13d0;
          func_0x0001081f7010();
          uStack_13d4 = (uint)(pppppppdVar20 == (double *******)0x0);
          if (pppppppdVar20 == (double *******)0x0) break;
          param_1 = (double *******)pppppppdVar20[5];
          param_2 = (double *******)pppppppdVar20[0xc];
          auStack_10d8[0] = 8;
          lStack_10d0 = 0;
          uStack_10c8 = 0;
          ppppppdStack_10c0 = (double ******)pppppppdVar20;
          ppppppdStack_10b8 = (double ******)param_2;
          do {
            param_3 = pppppppdVar20;
            pppppppdVar20 = param_1;
            pppppppdVar16 = param_2;
            pppppppdVar13 = param_3;
            FUN_1081e9400();
            if ((int)pppppppdVar20 == 0) {
              pppppppdVar20 = param_1;
              pppppppdVar16 = param_2;
              FUN_1081ea79c();
              ppppppdVar14 = ppppppdStack_10e0;
              if (((ulong)pppppppdVar20 & 1) == 0) {
LAB_1081f08f4:
                func_0x0001081f0a10();
                pppppppdVar16 = (double *******)apppppdStack_1348;
                FUN_108376b90(param_4);
                goto LAB_1081f0904;
              }
              if (((double *******)ppppppdStack_10e0 != (double *******)0x0) &&
                 ((*(byte *)((long)ppppppdStack_10e0 + 0x4d) & 1) == 0)) {
                *(undefined1 *)((long)ppppppdStack_10e0 + 0x4d) = 1;
                func_0x0001081f0a18();
                *pppppppdVar20 = ppppppdVar14;
              }
            }
            else {
              if (((uStack_10aa & 0x100) != 0) ||
                 (param_3 = pppppppdVar13,
                 *(int *)(param_1 + 0x21) != *(int *)((long)param_1 + 0x104))) {
                ppppppdStack_10e0 = ppppppdStack_10b8;
                ppppppdStack_10e8 = ppppppdStack_10c0;
                bVar6 = (byte)uStack_10aa;
                pppppppdVar20 = (double *******)(ulong)(byte)uStack_10aa;
                puStack_13e0 = (undefined8 *)CONCAT44(puStack_13e0._4_4_,iStack_13bc);
                pppppppdVar16 = (double *******)auStack_10d8;
                param_3 = &ppppppdStack_10e0;
                param_2 = param_1;
                func_0x0001081ea4e0();
                if (param_2 != (double *******)0x0) {
                  func_0x0001081f09f0();
                  uVar26 = 0x1081f046c;
                  goto code_r0x0001081e97e0;
                }
                if (((((uStack_10aa & 0x100) == 0) && (lStack_1350 == 0)) &&
                    (*(int *)((long)param_1 + 0x10c) != 1)) &&
                   (pppppppdVar13 = param_2, func_0x0001081f09e8(), ((ulong)pppppppdVar13 & 1) == 0)
                   ) {
                  func_0x0001081f09f0();
                  uVar26 = 0x1081f0538;
                  goto code_r0x0001081e97e0;
                }
                if (bVar6 != 0) {
                  func_0x0001081f09f0();
                  uVar26 = 0x1081f0528;
                  goto code_r0x0001081e97e0;
                }
              }
              func_0x0001081f09f0();
              pppppppdVar20 = param_1;
              FUN_1081e96f8();
              if (((int)pppppppdVar20 != 0) &&
                 (func_0x0001081f09e8(), ((ulong)pppppppdVar20 & 1) == 0)) {
                func_0x0001081f09f0();
                pppppppdVar20 = pppppppdVar16;
                if ((double)*param_3 <= (double)*pppppppdVar16) {
                  pppppppdVar20 = param_3;
                }
                if ((*(byte *)((long)pppppppdVar20 + 0x7c) & 1) == 0) {
                  pppppppdVar13 = param_1;
                  FUN_1081e97e0();
                  param_2 = param_1;
                  if (((ulong)pppppppdVar13 & 1) == 0) goto LAB_1081f08f4;
                  if ((*(byte *)((long)pppppppdVar20 + 0x7c) & 1) == 0) {
                    *(undefined1 *)((long)pppppppdVar20 + 0x7c) = 1;
                    *(int *)(param_1 + 0x21) = *(int *)(param_1 + 0x21) + 1;
                  }
                }
              }
              func_0x0001081f7904(auStack_13a0);
              param_2 = param_1;
            }
LAB_1081f05ac:
            do {
              if (uStack_10c8._4_4_ == 0) goto LAB_1081f07ec;
              ppppppdVar23 = *(double *******)(lStack_10d0 + (long)uStack_10c8._4_4_ * 8 + -8);
              uStack_10c8 = CONCAT44(uStack_10c8._4_4_ + -1,(undefined4)uStack_10c8);
              ppppppdVar14 = ppppppdVar23;
              func_0x0001081ec548();
              pppppppdVar16 = (double *******)ppppppdVar14[2];
              ppppppdVar14 = pppppppdVar16[5];
              bStack_1091 = 1;
              ppppppdStack_10c0 = (double ******)0x0;
              param_3 = &ppppppdStack_10b8;
              ppppppdStack_10b8 = (double ******)pppppppdVar16;
              FUN_1081e92dc();
              pppppppdVar21 = param_4;
              if (ppppppdVar14 != (double ******)0x0) {
                param_2 = (double *******)ppppppdVar14[0x1b];
                pppppppdVar20 = (double *******)ppppppdVar14[0x1c];
                ppppppdVar15 = ppppppdVar14;
                ppppppdStack_10c0 = (double ******)pppppppdVar20;
                ppppppdStack_10b8 = (double ******)param_2;
                func_0x0001081f0a18();
                *ppppppdVar15 = (double *****)ppppppdVar23;
                param_1 = (double *******)ppppppdVar14[0x1b][5];
                goto LAB_1081f07e8;
              }
              param_1 = (double *******)0x0;
            } while ((bStack_1091 & 1) != 0);
            param_3 = &ppppppdStack_10e0;
            ppppppdStack_13b8 = ppppppdStack_10b8;
            ppppppdStack_13b0 = ppppppdStack_10c0;
            param_2 = (double *******)ppppppdStack_10b8;
            pppppppdVar16 = (double *******)ppppppdStack_10c0;
            FUN_1081ecbd0();
            bVar6 = bStack_1092;
            if (param_2 != (double *******)0x0) {
              if ((int)ppppppdStack_10e0 == -0x7fffffff) goto LAB_1081f05ac;
              pppppppdVar13 = param_2;
              pppppppdVar22 = param_2;
              if (bStack_1092 != 1) {
LAB_1081f06ac:
                do {
                  param_1 = (double *******)0x0;
                  pppppppdVar20 = (double *******)ppppppdStack_13b8;
                  pppppppdVar24 = (double *******)ppppppdStack_13b0;
                  do {
                    while( true ) {
                      do {
                        ppppppdStack_13b0 = (double ******)pppppppdVar24;
                        ppppppdStack_13b8 = (double ******)pppppppdVar20;
                        pppppppdVar20 = (double *******)ppppppdStack_13b0;
                        ppppppdVar14 = ppppppdStack_13b8;
                        pppppppdVar22 = (double *******)pppppppdVar22[0x19];
                        if (pppppppdVar22 == param_2) {
                          ppppppdStack_10b8 = ppppppdStack_13b8;
                          ppppppdStack_10c0 = ppppppdStack_13b0;
                          param_2 = (double *******)ppppppdStack_13b8;
                          if (param_1 == (double *******)0x0) goto LAB_1081f05ac;
                          func_0x0001081f0a18();
                          *pppppppdVar13 = ppppppdVar23;
                          param_2 = (double *******)ppppppdVar14;
                          goto LAB_1081f07e8;
                        }
                        pppppppdVar2 = (double *******)pppppppdVar22[0x1b];
                        pppppppdVar3 = (double *******)pppppppdVar22[0x1c];
                        pppppppdVar25 = (double *******)pppppppdVar2[5];
                        uStack_10a0 = 0;
                        uStack_10a8 = 0;
                        pppppppdVar18 = pppppppdVar2;
                        pppppppdVar20 = pppppppdVar3;
                        if (bVar6 != 0) {
                          puStack_13e0 = &uStack_10a8;
                          pppppppdVar13 = pppppppdVar25;
                          pppppppdVar16 = pppppppdVar2;
                          param_3 = pppppppdVar3;
                          FUN_1081e9690();
                          pppppppdVar18 = (double *******)pppppppdVar22[0x1b];
                          pppppppdVar20 = (double *******)pppppppdVar22[0x1c];
                        }
                        if ((double)*pppppppdVar20 <= (double)*pppppppdVar18) {
                          pppppppdVar18 = pppppppdVar20;
                        }
                        pppppppdVar20 = (double *******)ppppppdStack_13b8;
                        pppppppdVar24 = (double *******)ppppppdStack_13b0;
                      } while ((*(byte *)((long)pppppppdVar18 + 0x7c) & 1) != 0);
                      if (param_1 == (double *******)0x0) break;
                      pppppppdVar2 = (double *******)ppppppdStack_13b8;
                      pppppppdVar3 = (double *******)ppppppdStack_13b0;
                      if ((bVar6 & 1) != 0) {
LAB_1081f0738:
                        ppppppdStack_13b0 = (double ******)pppppppdVar3;
                        ppppppdStack_13b8 = (double ******)pppppppdVar2;
                        pppppppdVar16 = (double *******)(uStack_10a0 >> 0x20);
                        param_3 = (double *******)(uStack_10a0 & 0xffffffff);
                        func_0x0001081ea11c();
                        pppppppdVar13 = pppppppdVar25;
                        pppppppdVar20 = (double *******)ppppppdStack_13b8;
                        pppppppdVar24 = (double *******)ppppppdStack_13b0;
                        if (((ulong)pppppppdVar25 & 1) == 0) goto LAB_1081f08f4;
                      }
                    }
                    param_1 = pppppppdVar25;
                    if ((bVar6 & 1) != 0) goto LAB_1081f0738;
                    pppppppdVar18 = pppppppdVar2;
                    if ((double)*pppppppdVar3 <= (double)*pppppppdVar2) {
                      pppppppdVar18 = pppppppdVar3;
                    }
                    pppppppdVar20 = pppppppdVar2;
                    pppppppdVar24 = pppppppdVar3;
                  } while (*(int *)(pppppppdVar18 + 0xd) != -0x7fffffff);
                } while( true );
              }
              pppppppdVar24 = (double *******)param_2[0x1b][5];
              pppppppdVar20 = pppppppdVar24;
              pppppppdVar16 = param_2;
              FUN_1081ea104();
              iVar11 = (int)pppppppdVar20;
              ppppppdStack_10e8 = (double ******)CONCAT44(ppppppdStack_10e8._4_4_,iVar11);
              if (iVar11 != -0x7fffffff) {
                pppppppdVar13 = pppppppdVar24;
                pppppppdVar16 = param_2;
                func_0x0001081ea110();
                iStack_1098 = (int)pppppppdVar13;
                if (iStack_1098 != -0x7fffffff) {
                  if (*(char *)((long)pppppppdVar24[0x1a] + 0x14d) == '\x01') {
                    ppppppdStack_10e8 = (double ******)CONCAT44(ppppppdStack_10e8._4_4_,iStack_1098)
                    ;
                    iStack_1098 = iVar11;
                  }
                  goto LAB_1081f06ac;
                }
              }
            }
            param_1 = (double *******)0x0;
            pppppppdVar20 = (double *******)ppppppdStack_13b0;
            param_2 = (double *******)ppppppdStack_13b8;
LAB_1081f07e8:
          } while (param_1 != (double *******)0x0);
LAB_1081f07ec:
          func_0x0001081f0a10();
        }
        FUN_1081f7aac(auStack_13a0);
LAB_1081f0904:
        FUN_1081e4c6c(auStack_13a0);
        FUN_10837ca5c(apppppdStack_1348[0]);
        pppppppdVar21 = (double *******)(ulong)uStack_13d4;
      }
    }
    else {
LAB_1081f0828:
      pppppppdVar21 = (double *******)0x0;
    }
    pppppppdVar20 = (double *******)ppppppdStack_13a8;
    func_0x0001081e4c9c(auStack_1338);
    FUN_10840f740();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return pppppppdVar21;
  }
  ___stack_chk_fail();
  func_0x0001081f0a10();
  FUN_1081e4c6c(auStack_13a0);
  FUN_10837ca5c(apppppdStack_1348[0]);
  func_0x0001081e4c9c(auStack_1338);
  FUN_10840f740(ppppppdStack_13a8);
  uVar26 = 0x1081f09c8;
  __Unwind_Resume(pppppppdVar20);
code_r0x0001081e97e0:
  puVar12 = auStack_13a0;
  pppppppdVar13 = pppppppdVar16;
  if ((double)*param_3 <= (double)*pppppppdVar16) {
    pppppppdVar13 = param_3;
  }
  if ((*(byte *)((long)pppppppdVar13 + 0x7d) & 1) != 0) {
    return (double *******)0x0;
  }
  *(undefined1 *)((long)pppppppdVar13 + 0x7d) = 1;
  ppppppdStack_1410 = (double ******)param_2;
  ppppppdStack_1408 = (double ******)param_1;
  ppppppdStack_1400 = (double ******)pppppppdVar21;
  ppppppdStack_13f8 = (double ******)pppppppdVar20;
  puStack_13f0 = &stack0xfffffffffffffff0;
  uStack_13e8 = uVar26;
  FUN_1081e9914(pppppppdVar16[5]);
  FUN_1081ef9dc(auStack_1478,*(undefined4 *)((long)param_1 + 0x10c));
  if ((bStack_1418 & 1) == 0) {
    func_0x0001081ec334();
code_r0x0001081e9898:
    FUN_1081f7770(puVar12,param_3);
    if (((ulong)puVar12 & 1) == 0) {
      return (double *******)0x0;
    }
  }
  else {
    uVar4 = *(undefined4 *)((long)param_1 + 0x10c);
    func_0x0001081ec334();
    uVar27 = (undefined1)uStack_145f;
    uVar28 = (undefined1)((uint7)uStack_145f >> 8);
    uVar29 = (undefined1)((uint7)uStack_145f >> 0x10);
    uVar30 = (undefined1)((uint7)uStack_145f >> 0x18);
    uVar31 = (undefined1)((uint7)uStack_145f >> 0x20);
    uVar32 = (undefined1)((uint7)uStack_145f >> 0x28);
    uVar33 = (undefined1)((uint7)uStack_145f >> 0x30);
    switch(uVar4) {
    case 1:
      goto code_r0x0001081e9898;
    case 2:
      auVar9[8] = uStack_1460;
      auVar9._0_8_ = dStack_1468;
      auVar9[9] = uVar27;
      auVar9[10] = uVar28;
      auVar9[0xb] = uVar29;
      auVar9[0xc] = uVar30;
      auVar9[0xd] = uVar31;
      auVar9[0xe] = uVar32;
      auVar9[0xf] = uVar33;
      fVar10 = (float)auVar9._8_8_;
      uStack_1480 = CONCAT17((char)((uint)fVar10 >> 0x18),
                             CONCAT16((char)((uint)fVar10 >> 0x10),
                                      CONCAT15((char)((uint)fVar10 >> 8),
                                               CONCAT14(SUB41(fVar10,0),(float)dStack_1468))));
      FUN_1081f7a6c(puVar12,&uStack_1480,param_3);
      break;
    case 3:
      auVar8[8] = uStack_1460;
      auVar8._0_8_ = dStack_1468;
      auVar8[9] = uVar27;
      auVar8[10] = uVar28;
      auVar8[0xb] = uVar29;
      auVar8[0xc] = uVar30;
      auVar8[0xd] = uVar31;
      auVar8[0xe] = uVar32;
      auVar8[0xf] = uVar33;
      fVar10 = (float)auVar8._8_8_;
      uStack_1480 = CONCAT17((char)((uint)fVar10 >> 0x18),
                             CONCAT16((char)((uint)fVar10 >> 0x10),
                                      CONCAT15((char)((uint)fVar10 >> 8),
                                               CONCAT14(SUB41(fVar10,0),(float)dStack_1468))));
      FUN_1081f7630(puVar12,&uStack_1480,param_3);
      break;
    case 4:
      auVar7[8] = uStack_1460;
      auVar7._0_8_ = dStack_1468;
      auVar7[9] = uVar27;
      auVar7[10] = uVar28;
      auVar7[0xb] = uVar29;
      auVar7[0xc] = uVar30;
      auVar7[0xd] = uVar31;
      auVar7[0xe] = uVar32;
      auVar7[0xf] = uVar33;
      fVar10 = (float)dStack_1450;
      uStack_1488 = CONCAT17((char)((uint)fVar10 >> 0x18),
                             CONCAT16((char)((uint)fVar10 >> 0x10),
                                      CONCAT15((char)((uint)fVar10 >> 8),
                                               CONCAT14(SUB41(fVar10,0),(float)dStack_1458))));
      uStack_1480 = CONCAT44((float)auVar7._8_8_,(float)dStack_1468);
      FUN_1081f771c(puVar12,&uStack_1480,&uStack_1488,param_3);
    }
  }
  return (double *******)0x1;
}



/* Entry: 1081f09c8; end: 1081f0a1f;  */

undefined8 FUN_1081f09c8(undefined8 param_1,double *param_2,double *param_3)

{
  double *pdVar1;
  undefined4 uVar2;
  undefined1 *puVar3;
  long unaff_x21;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined1 auStack_98 [16];
  double dStack_88;
  double dStack_80;
  double dStack_78;
  double dStack_70;
  undefined4 uStack_68;
  byte bStack_38;
  
  puVar3 = &stack0x00000040;
  pdVar1 = param_2;
  if (*param_3 <= *param_2) {
    pdVar1 = param_3;
  }
  if ((*(byte *)((long)pdVar1 + 0x7d) & 1) != 0) {
    return 0;
  }
  *(undefined1 *)((long)pdVar1 + 0x7d) = 1;
  FUN_1081e9914(param_2[5],param_2,param_3,auStack_98);
  FUN_1081ef9dc(auStack_98,*(undefined4 *)(unaff_x21 + 0x10c));
  if ((bStack_38 & 1) == 0) {
    func_0x0001081ec334();
code_r0x0001081e9898:
    FUN_1081f7770(puVar3,param_3);
    if (((ulong)puVar3 & 1) == 0) {
      return 0;
    }
  }
  else {
    uVar2 = *(undefined4 *)(unaff_x21 + 0x10c);
    func_0x0001081ec334();
    switch(uVar2) {
    case 1:
      goto code_r0x0001081e9898;
    case 2:
      uStack_a0 = CONCAT44((float)dStack_80,(float)dStack_88);
      FUN_1081f7a6c(puVar3,&uStack_a0,param_3);
      break;
    case 3:
      uStack_a0 = CONCAT44((float)dStack_80,(float)dStack_88);
      FUN_1081f7630(uStack_68,puVar3,&uStack_a0,param_3);
      break;
    case 4:
      uStack_a8 = CONCAT44((float)dStack_70,(float)dStack_78);
      uStack_a0 = CONCAT44((float)dStack_80,(float)dStack_88);
      FUN_1081f771c(puVar3,&uStack_a0,&uStack_a8,param_3);
    }
  }
  return 1;
}



/* Entry: 1081f0a20; end: 1081f0b87;  */

void FUN_1081f0a20(ulong param_1,long param_2,double **param_3)

{
  double *pdVar1;
  double *pdVar2;
  uint uVar3;
  int iVar4;
  bool bVar5;
  ulong uVar6;
  uint uVar7;
  long lVar8;
  double **ppdVar9;
  undefined1 uVar10;
  long lVar11;
  double *pdVar12;
  long lVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double *pdStack_68;
  double *pdStack_60;
  
  lVar8 = param_2;
  ppdVar9 = param_3;
  func_0x0001081f1600();
  pdVar2 = (double *)(lVar8 + 8);
  bVar5 = true;
  for (lVar13 = 0; uVar7 = (uint)lVar8, lVar13 != 3; lVar13 = lVar13 + 1) {
    ppdVar9 = &pdStack_68;
    lVar8 = lVar13;
    FUN_1081f0b88(param_1);
    uVar7 = (uint)lVar8;
    dVar14 = *pdStack_68;
    dVar15 = pdStack_68[1];
    pdVar12 = (double *)(param_1 + lVar13 * 0x10);
    dVar16 = -((pdStack_60[1] - dVar15) * (*pdVar12 - dVar14)) +
             (*pdStack_60 - dVar14) * (pdVar12[1] - dVar15);
    if (1.1920928955078125e-07 <= ABS(dVar16)) {
      lVar11 = 4;
      pdVar12 = pdVar2;
      do {
        lVar11 = lVar11 + -1;
        if (lVar11 == 0) goto LAB_1081f0b58;
        pdVar1 = pdVar12 + -1;
        dVar17 = *pdVar12;
        pdVar12 = pdVar12 + 2;
        dVar17 = (*pdVar1 - dVar14) * -(pdStack_60[1] - dVar15) +
                 (*pdStack_60 - dVar14) * (dVar17 - dVar15);
        dVar18 = ABS(dVar17);
        bVar5 = true;
        if ((0.0 < dVar16 * dVar17) && (bVar5 = false, !NAN(dVar18))) {
          bVar5 = dVar18 < 8.881784197001252e-16;
        }
      } while (bVar5);
      bVar5 = false;
    }
  }
  if (!bVar5) goto LAB_1081f0b50;
  uVar6 = param_1;
  lVar8 = param_2;
  func_0x0001081f0bb8();
  uVar7 = (uint)lVar8;
  if ((uVar6 & 1) == 0) {
    iVar4 = (int)param_2;
    uVar7 = iVar4 + 0x20;
    uVar6 = param_1;
    func_0x0001081f0bb8();
    if ((uVar6 & 1) == 0) {
      uVar6 = param_1;
      func_0x0001081f0bec();
      uVar7 = (uint)param_2;
      if ((uVar6 & 1) == 0) {
        uVar7 = iVar4 + 0x20;
        func_0x0001081f0bec();
        if ((int)param_1 == 0) goto LAB_1081f0b28;
      }
LAB_1081f0b50:
      uVar10 = 0;
      goto LAB_1081f0b54;
    }
  }
LAB_1081f0b28:
  uVar10 = 1;
LAB_1081f0b54:
  *(undefined1 *)param_3 = uVar10;
LAB_1081f0b58:
  bVar5 = lVar13 == 3;
  uVar6 = (ulong)bVar5;
  func_0x0001081f15d0();
  if (bVar5) {
    return;
  }
  ___stack_chk_fail();
  lVar13 = 0;
  while (lVar13 != 2) {
    uVar3 = (uVar7 ^ (uint)(lVar13 + 1)) - uVar7;
    ppdVar9[lVar13] =
         (double *)(uVar6 + (long)(int)(uVar3 & ((int)uVar3 >> 2 ^ 0xffffffffU)) * 0x10);
    lVar13 = lVar13 + 1;
  }
  return;
}



/* Entry: 1081f0b88; end: 1081f0d3f;  */

void FUN_1081f0b88(long param_1,uint param_2,long param_3)

{
  uint uVar1;
  long lVar2;
  
  lVar2 = 0;
  while (lVar2 != 2) {
    uVar1 = (param_2 ^ (uint)(lVar2 + 1)) - param_2;
    *(long *)(param_3 + lVar2 * 8) =
         param_1 + (long)(int)(uVar1 & ((int)uVar1 >> 2 ^ 0xffffffffU)) * 0x10;
    lVar2 = lVar2 + 1;
  }
  return;
}



/* Entry: 1081f0d40; end: 1081f0d83;  */

double * FUN_1081f0d40(double param_1,double param_2,double param_3,undefined8 param_4)

{
  bool bVar1;
  undefined1 in_ZR;
  bool bVar2;
  bool bVar3;
  int iVar4;
  double *pdVar5;
  double *pdVar6;
  uint uVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double adStack_38 [3];
  
  func_0x0001081f1600();
  pdVar6 = adStack_38;
  FUN_1081f0d84(pdVar6);
  pdVar5 = adStack_38;
  func_0x0001081f0ca0(pdVar5,pdVar6,param_4);
  func_0x0001081f15d0();
  if ((bool)in_ZR) {
    return pdVar5;
  }
  ___stack_chk_fail();
  if (param_1 == 0.0) {
    dVar10 = -param_3 / param_2;
    if (ABS(param_2) < 1.1920928955078125e-07) {
      dVar10 = 0.0;
    }
    uVar7 = 1;
    if (ABS(param_2) < 1.1920928955078125e-07) {
      uVar7 = (uint)(param_3 == 0.0);
    }
    pdVar6 = (double *)(ulong)uVar7;
LAB_1081f0e8c:
    *pdVar5 = dVar10;
  }
  else {
    dVar11 = param_2 / (param_1 + param_1);
    dVar10 = param_3 / param_1;
    if (ABS(param_1) < 1.1920928955078125e-07) {
      dVar9 = ABS(dVar10);
      bVar1 = false;
      bVar2 = false;
      bVar3 = false;
      if (ABS(dVar11) <= 8388608.0) {
        bVar1 = false;
        bVar2 = false;
        bVar3 = true;
        if (!NAN(dVar9)) {
          bVar1 = dVar9 < 8388608.0;
          bVar2 = dVar9 == 8388608.0;
          bVar3 = false;
        }
      }
      if (!bVar2 && bVar1 == bVar3) {
        if (1.1920928955078125e-07 <= ABS(param_2)) {
          pdVar6 = (double *)0x1;
          dVar10 = -param_3 / param_2;
        }
        else {
          pdVar6 = (double *)(ulong)(param_3 == 0.0);
          dVar10 = 0.0;
        }
        goto LAB_1081f0e8c;
      }
    }
    dVar9 = dVar11 * dVar11;
    pdVar6 = pdVar5;
    func_0x0001081f6280(dVar9,dVar10);
    iVar4 = (int)pdVar6;
    if (dVar9 < dVar10 && iVar4 == 0) {
      pdVar6 = (double *)0x0;
    }
    else {
      dVar8 = SQRT(dVar9 - dVar10);
      if (dVar9 <= dVar10) {
        dVar8 = 0.0;
      }
      *pdVar5 = dVar8 - dVar11;
      pdVar5[1] = -dVar8 - dVar11;
      func_0x0001081f6280();
      uVar7 = 1;
      if (iVar4 == 0) {
        uVar7 = 2;
      }
      pdVar6 = (double *)(ulong)uVar7;
    }
  }
  return pdVar6;
}



/* Entry: 1081f0d84; end: 1081f0ebb;  */

undefined1 FUN_1081f0d84(double param_1,double param_2,double param_3,double *param_4)

{
  bool bVar1;
  bool bVar2;
  undefined1 uVar3;
  bool bVar4;
  int iVar5;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double *pdVar6;
  
  if (param_1 == 0.0) {
    dVar9 = -param_3 / param_2;
    if (ABS(param_2) < 1.1920928955078125e-07) {
      dVar9 = 0.0;
    }
    uVar3 = ABS(param_2) >= 1.1920928955078125e-07 || param_3 == 0.0;
LAB_1081f0e8c:
    *param_4 = dVar9;
  }
  else {
    dVar10 = param_2 / (param_1 + param_1);
    dVar9 = param_3 / param_1;
    if (ABS(param_1) < 1.1920928955078125e-07) {
      dVar8 = ABS(dVar9);
      bVar1 = false;
      bVar2 = false;
      bVar4 = false;
      if (ABS(dVar10) <= 8388608.0) {
        bVar1 = false;
        bVar2 = false;
        bVar4 = true;
        if (!NAN(dVar8)) {
          bVar1 = dVar8 < 8388608.0;
          bVar2 = dVar8 == 8388608.0;
          bVar4 = false;
        }
      }
      if (!bVar2 && bVar1 == bVar4) {
        if (1.1920928955078125e-07 <= ABS(param_2)) {
          uVar3 = true;
          dVar9 = -param_3 / param_2;
        }
        else {
          uVar3 = param_3 == 0.0;
          dVar9 = 0.0;
        }
        goto LAB_1081f0e8c;
      }
    }
    dVar8 = dVar10 * dVar10;
    pdVar6 = param_4;
    func_0x0001081f6280(dVar8,dVar9);
    iVar5 = (int)pdVar6;
    if (dVar8 < dVar9 && iVar5 == 0) {
      uVar3 = 0;
    }
    else {
      dVar7 = SQRT(dVar8 - dVar9);
      if (dVar8 <= dVar9) {
        dVar7 = 0.0;
      }
      *param_4 = dVar7 - dVar10;
      param_4[1] = -dVar7 - dVar10;
      func_0x0001081f6280();
      uVar3 = 1;
      if (iVar5 == 0) {
        uVar3 = 2;
      }
    }
  }
  return uVar3;
}



/* Entry: 1081f0ebc; end: 1081f0fb7;  */

bool FUN_1081f0ebc(double *param_1,int param_2,int param_3)

{
  undefined1 (*pauVar1) [16];
  undefined1 (*pauVar2) [16];
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  double dVar11;
  double dVar12;
  double dStack_40;
  double dStack_38;
  double dStack_30;
  
  pauVar1 = (undefined1 (*) [16])(param_1 + (long)param_2 * 2);
  pauVar2 = (undefined1 (*) [16])(param_1 + (long)param_3 * 2);
  auVar9 = NEON_ext(*pauVar1,*pauVar2,8,1);
  auVar10 = NEON_ext(*pauVar2,*pauVar1,8,1);
  dStack_40 = auVar9._0_8_ - auVar10._0_8_;
  dStack_38 = auVar9._8_8_ - auVar10._8_8_;
  dStack_30 = -*(double *)(*pauVar1 + 8) * *(double *)*pauVar2 +
              *(double *)(*pauVar2 + 8) * *(double *)*pauVar1;
  FUN_1081ee440(&dStack_40);
  dVar6 = param_1[2];
  dVar7 = param_1[3];
  dStack_30 = dStack_30 + dStack_38 * dVar7 + dVar6 * dStack_40;
  dVar8 = *param_1;
  dVar5 = param_1[1];
  dVar3 = dVar5;
  if (dVar8 <= dVar5) {
    dVar3 = dVar8;
  }
  dVar4 = dVar6;
  if (dVar3 <= dVar6) {
    dVar4 = dVar3;
  }
  dVar3 = dVar7;
  if (dVar4 <= dVar7) {
    dVar3 = dVar4;
  }
  dVar11 = param_1[4];
  dVar12 = param_1[5];
  dVar4 = dVar11;
  if (dVar3 <= dVar11) {
    dVar4 = dVar3;
  }
  dVar3 = dVar12;
  if (dVar4 <= dVar12) {
    dVar3 = dVar4;
  }
  if (dVar5 <= dVar8) {
    dVar5 = dVar8;
  }
  if (dVar6 <= dVar5) {
    dVar6 = dVar5;
  }
  if (dVar7 <= dVar6) {
    dVar7 = dVar6;
  }
  if (dVar11 <= dVar7) {
    dVar11 = dVar7;
  }
  if (dVar12 <= dVar11) {
    dVar12 = dVar11;
  }
  dVar7 = -dVar3;
  if (-dVar3 <= dVar12) {
    dVar7 = dVar12;
  }
  return ABS(dStack_30) < ABS(dVar7 * 1.1920928955078125e-07) || dStack_30 == 0.0;
}



/* Entry: 1081f0fb8; end: 1081f1047;  */

undefined1  [16] FUN_1081f0fb8(double param_1,double *param_2)

{
  bool bVar1;
  double dVar2;
  double dVar3;
  undefined1 auVar4 [16];
  
  dVar2 = param_1 * -2.0 + 1.0;
  dVar3 = dVar2 * param_2[2] + *param_2 * (param_1 + -1.0) + param_2[4] * param_1;
  dVar2 = dVar2 * param_2[3] + param_2[1] * (param_1 + -1.0) + param_2[5] * param_1;
  if ((dVar3 == 0.0) && (dVar2 == 0.0)) {
    bVar1 = true;
    if ((param_1 != 0.0) && (bVar1 = false, !NAN(param_1))) {
      bVar1 = param_1 == 1.0;
    }
    if (bVar1) {
      dVar3 = param_2[4] - *param_2;
      dVar2 = param_2[5] - param_2[1];
    }
    else {
      FUN_10841076c(&UNK_10f47f448);
    }
  }
  auVar4._8_8_ = dVar2;
  auVar4._0_8_ = dVar3;
  return auVar4;
}



/* Entry: 1081f1048; end: 1081f109b;  */

undefined1  [16] FUN_1081f1048(double param_1,double *param_2)

{
  double dVar1;
  double dVar2;
  double dVar3;
  undefined1 auVar4 [16];
  
  if (param_1 == 0.0) {
    dVar2 = param_2[1];
    dVar1 = *param_2;
  }
  else if (param_1 == 1.0) {
    dVar2 = param_2[5];
    dVar1 = param_2[4];
  }
  else {
    dVar2 = 1.0 - param_1;
    dVar3 = param_1 * (dVar2 + dVar2);
    dVar1 = param_2[2] * dVar3 + *param_2 * dVar2 * dVar2 + param_2[4] * param_1 * param_1;
    dVar2 = param_2[3] * dVar3 + param_2[1] * dVar2 * dVar2 + param_2[5] * param_1 * param_1;
  }
  auVar4._8_8_ = dVar2;
  auVar4._0_8_ = dVar1;
  return auVar4;
}



/* Entry: 1081f109c; end: 1081f118b;  */

void FUN_1081f109c(double param_1,double param_2,double *param_3,double *param_4)

{
  bool bVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  
  dVar2 = 1.0;
  bVar1 = false;
  if ((param_1 == 0.0) && (bVar1 = false, !NAN(param_2))) {
    bVar1 = param_2 == 1.0;
  }
  if (bVar1) {
    dVar2 = *param_4;
    dVar5 = param_4[3];
    dVar4 = param_4[2];
    param_3[1] = param_4[1];
    *param_3 = dVar2;
    param_3[3] = dVar5;
    param_3[2] = dVar4;
    dVar2 = param_4[4];
    param_3[5] = param_4[5];
    param_3[4] = dVar2;
  }
  else {
    FUN_1081f15b8(param_4);
    *param_3 = dVar2;
    dVar4 = dVar2;
    FUN_1081f15b8(param_4 + 1);
    param_3[1] = dVar4;
    param_1 = param_1 + param_2;
    FUN_1081f15b8(param_1,0x3fe0000000000000,param_4);
    dVar5 = param_1;
    FUN_1081f15b8(param_4 + 1);
    dVar3 = param_2;
    FUN_1081f118c(param_4);
    param_3[4] = dVar3;
    FUN_1081f118c(param_4 + 1);
    param_3[5] = param_2;
    param_3[2] = (dVar2 + dVar3) * -0.5 + param_1 * 2.0;
    param_3[3] = (dVar4 + param_2) * -0.5 + dVar5 * 2.0;
  }
  return;
}



/* Entry: 1081f118c; end: 1081f11d7;  */

double FUN_1081f118c(double param_1,double *param_2)

{
  double dVar1;
  double dVar2;
  
  if (param_1 == 0.0) {
    return *param_2;
  }
  if (param_1 == 1.0) {
    return param_2[4];
  }
  dVar2 = param_2[2];
  dVar1 = *param_2 + param_1 * (dVar2 - *param_2);
  return dVar1 + param_1 * ((dVar2 + param_1 * (param_2[4] - dVar2)) - dVar1);
}



/* Entry: 1081f11d8; end: 1081f13a3;  */

undefined1  [16]
FUN_1081f11d8(double param_1,double param_2,double *param_3,double *param_4,double *param_5)

{
  bool bVar1;
  int iVar2;
  double *pdVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  undefined1 auVar7 [16];
  double dStack_2a0;
  double dStack_298;
  double dStack_1b0;
  double dStack_148;
  undefined4 uStack_e0;
  undefined2 uStack_dc;
  undefined4 uStack_da;
  double dStack_d0;
  double dStack_c8;
  double dStack_c0;
  double dStack_b8;
  double dStack_b0;
  double dStack_a8;
  double dStack_a0;
  double dStack_98;
  double dStack_90;
  double dStack_88;
  double dStack_80;
  double dStack_78;
  double dStack_70;
  double dStack_68;
  
  FUN_1081f109c(&dStack_90,param_3);
  dStack_a8 = param_4[1];
  dStack_b0 = *param_4;
  dStack_a0 = (*param_4 - dStack_90) + dStack_80;
  dStack_98 = (param_4[1] - dStack_88) + dStack_78;
  dStack_c8 = param_5[1];
  dStack_d0 = *param_5;
  dVar4 = dStack_80 + (*param_5 - dStack_70);
  dVar5 = dStack_78 + (param_5[1] - dStack_68);
  uStack_dc = 0;
  dStack_c0 = dVar4;
  dStack_b8 = dVar5;
  _bzero(&dStack_2a0,0x1c0);
  uStack_e0 = 0;
  uStack_da = 0x10000;
  pdVar3 = &dStack_2a0;
  FUN_1081dff94(pdVar3,&dStack_b0,&dStack_d0);
  iVar2 = (int)pdVar3;
  if ((((char)uStack_da != '\x01') || (dStack_1b0 < 0.0)) || (dStack_148 < 0.0)) {
    dVar6 = (dVar4 + dStack_a0) * 0.5;
    dVar5 = (dVar5 + dStack_98) * 0.5;
    goto LAB_1081f1334;
  }
  if ((param_1 == 0.0) || (dVar4 = dStack_2a0, param_2 == 0.0)) {
    dVar4 = *param_3;
    if (*param_3 != param_3[2]) {
      dVar4 = dStack_2a0;
    }
    if (param_3[1] == param_3[3]) {
      dStack_298 = param_3[1];
    }
  }
  bVar1 = true;
  if ((param_1 != 1.0) && (bVar1 = false, !NAN(param_2))) {
    bVar1 = param_2 == 1.0;
  }
  dVar5 = dVar4;
  if (bVar1) {
    dVar5 = param_3[4];
    if (param_3[4] != param_3[2]) {
      dVar5 = dVar4;
    }
    dVar4 = param_3[5];
    if (param_3[5] != param_3[3]) goto LAB_1081f12f8;
  }
  else {
LAB_1081f12f8:
    dVar4 = dStack_298;
  }
  FUN_1081e2d94(dVar5,*param_4);
  if (iVar2 == 0) {
    FUN_1081e2d94(dVar5,*param_5);
    dVar6 = *param_5;
    if (iVar2 == 0) {
      dVar6 = dVar5;
    }
  }
  else {
    dVar6 = *param_4;
  }
  FUN_1081e2d94(dVar4,param_4[1]);
  if (iVar2 == 0) {
    FUN_1081e2d94(dVar4,param_5[1]);
    dVar5 = param_5[1];
    if (iVar2 == 0) {
      dVar5 = dVar4;
    }
  }
  else {
    dVar5 = param_4[1];
  }
LAB_1081f1334:
  auVar7._8_8_ = dVar5;
  auVar7._0_8_ = dVar6;
  return auVar7;
}



/* Entry: 1081f13a4; end: 1081f14a7;  */

undefined8 FUN_1081f13a4(double *param_1,double *param_2)

{
  double dVar1;
  bool bVar2;
  bool bVar3;
  undefined8 uVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  
  uVar4 = 0;
  dVar7 = *param_1 - param_1[2];
  dVar6 = param_1[4] + (dVar7 - param_1[2]);
  dVar5 = -dVar7;
  dVar1 = -dVar6;
  if (0.0 <= dVar7) {
    dVar5 = dVar7;
    dVar1 = dVar6;
  }
  if (dVar7 != 0.0) {
    bVar2 = false;
    bVar3 = false;
    if (dVar6 != 0.0) {
      bVar2 = false;
      bVar3 = true;
      if (!NAN(dVar5) && !NAN(dVar1)) {
        bVar2 = dVar5 < dVar1;
        bVar3 = false;
      }
    }
    if (bVar2 != bVar3) {
      if (dVar5 / dVar1 == 0.0) {
        return 0;
      }
      *param_2 = dVar5 / dVar1;
      uVar4 = 1;
    }
  }
  return uVar4;
}



/* Entry: 1081f14a8; end: 1081f1517;  */

void FUN_1081f14a8(undefined8 param_1,long *param_2)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  
  plVar2 = param_2;
  FUN_10840f8d0(param_2,0x41,8);
  lVar1 = param_2[1];
  param_2[1] = (long)(plVar2 + 7);
  plVar2[7] = 0x1081f1588;
  lVar3 = param_2[1];
  param_2[1] = lVar3 + 8;
  *(char *)(lVar3 + 8) = (char)plVar2 - (char)(int)lVar1;
  *param_2 = param_2[1] + 1;
  param_2[1] = param_2[1] + 1;
  *plVar2 = (long)&PTR_DAT_110a2f840;
  return;
}



/* Entry: 1081f1518; end: 1081f153f;  */

undefined8 FUN_1081f1518(void)

{
  return 4;
}



/* Entry: 1081f1540; end: 1081f15b7;  */

void FUN_1081f1540(long param_1,long param_2)

{
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  FUN_1081f109c(&uStack_50,param_1 + 8);
  *(undefined8 *)(param_2 + 0x10) = uStack_48;
  *(undefined8 *)(param_2 + 8) = uStack_50;
  *(undefined8 *)(param_2 + 0x20) = uStack_38;
  *(undefined8 *)(param_2 + 0x18) = uStack_40;
  *(undefined8 *)(param_2 + 0x30) = uStack_28;
  *(undefined8 *)(param_2 + 0x28) = uStack_30;
  return;
}



/* Entry: 1081f15b8; end: 1081f1613;  */

double FUN_1081f15b8(double *param_1)

{
  double dVar1;
  double dVar2;
  double unaff_d9;
  
  if (unaff_d9 == 0.0) {
    return *param_1;
  }
  if (unaff_d9 == 1.0) {
    return param_1[4];
  }
  dVar2 = param_1[2];
  dVar1 = *param_1 + unaff_d9 * (dVar2 - *param_1);
  return dVar1 + unaff_d9 * ((dVar2 + unaff_d9 * (param_1[4] - dVar2)) - dVar1);
}



/* Entry: 1081f1614; end: 1081f16df;  */

void FUN_1081f1614(double *param_1,undefined8 param_2,double *param_3)

{
  undefined1 in_ZR;
  undefined1 in_CY;
  bool bVar1;
  undefined8 extraout_x8;
  double *unaff_x20;
  double *unaff_x21;
  double *pdVar2;
  double dVar3;
  double dVar4;
  double dStack_78;
  double dStack_70;
  double adStack_68 [3];
  
  FUN_1081f18e0();
  dVar4 = param_3[1];
  dVar3 = *param_3;
  param_1[1] = dVar4;
  *param_1 = dVar3;
  param_1[3] = dVar4;
  param_1[2] = dVar3;
  param_3 = param_3 + 4;
  adStack_68[2] = (double)extraout_x8;
  FUN_1081f16e0();
  func_0x0001081f1904(*unaff_x21,unaff_x21[2],unaff_x21[4]);
  if (!(bool)in_CY || (bool)in_ZR) {
    pdVar2 = (double *)0x0;
  }
  else {
    param_3 = adStack_68;
    param_1 = unaff_x21;
    FUN_1081f13a4();
    pdVar2 = param_1;
  }
  dVar3 = unaff_x21[1];
  dVar4 = unaff_x21[3];
  func_0x0001081f1904(dVar3,dVar4,unaff_x21[5]);
  if ((bool)in_CY && !(bool)in_ZR) {
    param_3 = adStack_68 + ((ulong)pdVar2 & 0xffffffff);
    param_1 = unaff_x21 + 1;
    FUN_1081f13a4();
    pdVar2 = (double *)(ulong)(uint)((int)param_1 + (int)pdVar2);
  }
  func_0x0001081f1954();
  for (; bVar1 = pdVar2 == unaff_x21, !bVar1; unaff_x21 = unaff_x21 + 1) {
    func_0x0001081f1944();
    FUN_1081f1048();
    param_3 = &dStack_78;
    param_1 = unaff_x20;
    dStack_78 = dVar3;
    dStack_70 = dVar4;
    FUN_1081f16e0();
  }
  func_0x0001081f1930(adStack_68[2]);
  if (bVar1) {
    return;
  }
  ___stack_chk_fail();
  dVar3 = *param_3;
  if (*param_1 <= *param_3) {
    dVar3 = *param_1;
  }
  *param_1 = dVar3;
  dVar3 = param_3[1];
  if (param_1[1] <= param_3[1]) {
    dVar3 = param_1[1];
  }
  param_1[1] = dVar3;
  dVar3 = *param_3;
  if (*param_3 <= param_1[2]) {
    dVar3 = param_1[2];
  }
  param_1[2] = dVar3;
  dVar3 = param_3[1];
  if (param_3[1] <= param_1[3]) {
    dVar3 = param_1[3];
  }
  param_1[3] = dVar3;
  return;
}



/* Entry: 1081f16e0; end: 1081f172b;  */

void FUN_1081f16e0(double *param_1,double *param_2)

{
  double dVar1;
  
  dVar1 = *param_2;
  if (*param_1 <= *param_2) {
    dVar1 = *param_1;
  }
  *param_1 = dVar1;
  dVar1 = param_2[1];
  if (param_1[1] <= param_2[1]) {
    dVar1 = param_1[1];
  }
  param_1[1] = dVar1;
  dVar1 = *param_2;
  if (*param_2 <= param_1[2]) {
    dVar1 = param_1[2];
  }
  param_1[2] = dVar1;
  dVar1 = param_2[1];
  if (param_2[1] <= param_1[3]) {
    dVar1 = param_1[3];
  }
  param_1[3] = dVar1;
  return;
}



/* Entry: 1081f172c; end: 1081f18df;  */

void FUN_1081f172c(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined1 in_ZR;
  undefined1 in_CY;
  bool bVar1;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  undefined8 *unaff_x20;
  undefined8 *unaff_x21;
  long lVar2;
  uint uVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 auStack_f8 [32];
  undefined8 uStack_d8;
  undefined1 auStack_68 [16];
  undefined8 uStack_58;
  
  FUN_1081f18e0();
  uVar6 = param_3[1];
  uVar5 = *param_3;
  param_1[1] = uVar6;
  *param_1 = uVar5;
  param_1[3] = uVar6;
  param_1[2] = uVar5;
  uStack_58 = extraout_x8;
  FUN_1081f16e0();
  func_0x0001081f1904(*unaff_x21,unaff_x21[2],unaff_x21[4]);
  if (!(bool)in_CY || (bool)in_ZR) {
    puVar4 = (undefined8 *)0x0;
  }
  else {
    param_1 = unaff_x21;
    FUN_1081ed68c(*(undefined4 *)(unaff_x21 + 6));
    puVar4 = param_1;
  }
  func_0x0001081f1904(unaff_x21[1],unaff_x21[3],unaff_x21[5]);
  if ((bool)in_CY && !(bool)in_ZR) {
    param_1 = unaff_x21 + 1;
    FUN_1081ed68c(param_1,auStack_68 + ((ulong)puVar4 & 0xffffffff) * 8);
    puVar4 = (undefined8 *)(ulong)(uint)((int)param_1 + (int)puVar4);
  }
  func_0x0001081f1954();
  for (; bVar1 = puVar4 == unaff_x21, !bVar1; unaff_x21 = unaff_x21 + 1) {
    func_0x0001081f1944();
    FUN_1081ed814();
    param_1 = unaff_x20;
    FUN_1081f16e0();
  }
  func_0x0001081f1930(uStack_58);
  if (bVar1) {
    return;
  }
  ___stack_chk_fail();
  FUN_1081f18e0();
  uVar6 = param_3[1];
  uVar5 = *param_3;
  param_1[1] = uVar6;
  *param_1 = uVar5;
  param_1[3] = uVar6;
  param_1[2] = uVar5;
  uStack_d8 = extraout_x8_00;
  FUN_1081f16e0();
  puVar4 = unaff_x21;
  FUN_1081ee75c();
  if (((ulong)puVar4 & 1) == 0) {
    puVar4 = unaff_x21;
    FUN_1081eef38(unaff_x21,auStack_f8);
    uVar3 = (uint)puVar4;
  }
  else {
    uVar3 = 0;
  }
  puVar4 = unaff_x21;
  func_0x0001081ee7a0();
  if (((ulong)puVar4 & 1) == 0) {
    puVar4 = unaff_x21 + 1;
    FUN_1081eef38(puVar4,auStack_f8 + (long)(int)uVar3 * 8);
    uVar3 = (int)puVar4 + uVar3;
  }
  for (lVar2 = 0; bVar1 = (ulong)(uVar3 & ((int)uVar3 >> 0x1f ^ 0xffffffffU)) << 3 == lVar2, !bVar1;
      lVar2 = lVar2 + 8) {
    func_0x0001081f1944();
    FUN_1081edf18();
    FUN_1081f16e0();
  }
  func_0x0001081f1930(uStack_d8);
  if (bVar1) {
    return;
  }
  ___stack_chk_fail();
  return;
}



/* Entry: 1081f18e0; end: 1081f1967;  */

void FUN_1081f18e0(void)

{
  return;
}



/* Entry: 1081f1968; end: 1081f1f2b;  */

/* WARNING: Possible PIC construction at 0x0001081f1a58: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001081f1a78: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001081f1a5c) */
/* WARNING: Removing unreachable block (ram,0x0001081f1a7c) */
/* WARNING: Removing unreachable block (ram,0x0001081f1a80) */

undefined8 FUN_1081f1968(double ****param_1,double ****param_2)

{
  double **ppdVar1;
  double **ppdVar2;
  bool bVar3;
  double ****ppppdVar4;
  ulong uVar5;
  double ***pppdVar6;
  double ***pppdVar7;
  double ****ppppdVar8;
  double ****ppppdVar9;
  double ****ppppdVar10;
  int extraout_w8;
  double ***pppdVar11;
  ulong extraout_x8;
  double ***pppdVar12;
  undefined8 uVar13;
  double ****ppppdVar14;
  int iVar15;
  int iVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  undefined1 auStack_1340 [88];
  double **ppdStack_12e8;
  undefined8 uStack_12e0;
  byte bStack_125c;
  double **ppdStack_1258;
  undefined8 uStack_1250;
  double ***pppdStack_1248;
  undefined4 uStack_1240;
  undefined1 uStack_123c;
  double ***pppdStack_1238;
  double **ppdStack_1230;
  double **ppdStack_1228;
  undefined4 uStack_1220;
  undefined2 uStack_121b;
  double **ppdStack_1218;
  double **ppdStack_1210;
  double **ppdStack_1208;
  double ***pppdStack_1200;
  undefined8 uStack_11f8;
  undefined8 uStack_11f0;
  double **ppdStack_11e8;
  byte bStack_11d9;
  double **ppdStack_11d8;
  double **ppdStack_11d0;
  double **ppdStack_11c8;
  double **ppdStack_11c0;
  double **appdStack_11b8 [28];
  undefined8 uStack_10d8;
  undefined8 uStack_10d0;
  undefined8 uStack_10b0;
  undefined8 uStack_10a8;
  undefined8 uStack_10a0;
  undefined8 uStack_1098;
  undefined4 uStack_108c;
  undefined1 uStack_1084;
  double **ppdStack_1078;
  double *pdStack_1070;
  long lStack_1068;
  long lStack_1060;
  undefined8 uStack_1058;
  undefined8 uStack_1050;
  undefined2 uStack_1048;
  double **appdStack_78 [4];
  long lStack_58;
  
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppppdVar4 = param_1;
  FUN_108376fcc(3);
  if ((int)ppppdVar4 != 0) {
    pppdVar11 = *param_1;
    ppdStack_1078 = pppdVar11[5];
    pdStack_1070 = (double *)pppdVar11[8];
    lStack_1068 = (long)pdStack_1070 + (long)*(int *)(pppdVar11 + 9);
    lStack_1060 = 0;
    if (pppdVar11[0xb] != (double **)0x0) {
      lStack_1060 = (long)pppdVar11[0xb] + -4;
    }
    uStack_1058 = 0;
    uStack_1050 = 0;
    uStack_1048 = 1;
    ppdStack_12e8 = (double **)0x0;
    uStack_12e0 = 0;
    ppppdVar4 = (double ****)&ppdStack_11d0;
LAB_1081f1a1c:
    ppppdVar10 = (double ****)&ppdStack_1078;
    ppppdVar14 = (double ****)&ppdStack_11d0;
    FUN_108379cc8();
    switch((ulong)ppppdVar10 & 0xffffffff) {
    case 0:
      goto code_r0x0001081f1a44;
    case 1:
      goto code_r0x0001081f1a70;
    case 2:
    case 3:
      ppppdVar10 = (double ****)&ppdStack_12e8;
      ppppdVar14 = (double ****)&ppdStack_11c0;
      func_0x0001081f1f2c();
      if ((int)ppppdVar10 != 0) goto code_r0x0001081f1a70;
      if (param_2 != param_1) {
        FUN_108376b90();
        ppppdVar10 = param_2;
        ppppdVar14 = param_1;
      }
      break;
    case 4:
      ppppdVar10 = (double ****)&ppdStack_12e8;
      ppppdVar14 = (double ****)appdStack_11b8;
      goto FUN_1081f1f2c;
    default:
      goto LAB_1081f1a1c;
    case 6:
      func_0x0001081f1fb8();
    }
    func_0x0001081f1f78();
    uVar13 = 1;
    goto code_r0x0001081f1e6c;
  }
  func_0x0001081e4cd0(&ppdStack_1078,0x1000);
  uStack_10d0 = 0;
  uStack_10d8 = 0;
  uStack_108c = 0;
  uStack_1084 = 0;
  uStack_10a8 = 0;
  uStack_10b0 = 0;
  uStack_1098 = 0;
  uStack_10a0 = 0;
  ppdStack_1228 = (double **)&ppdStack_11d0;
  ppppdVar4 = (double ****)appdStack_78;
  uStack_1220 = 0;
  uStack_121b = 0x100;
  ppdStack_1258 = (double **)0x0;
  uStack_1250 = 0;
  pppdStack_1248 = (double ***)&pppdStack_1238;
  uStack_1240 = 0;
  uStack_123c = 0;
  ppdStack_1230 = (double **)&ppdStack_1258;
  pppdStack_1238 = (double ***)ppppdVar4;
  ppdStack_1218 = ppdStack_1228;
  FUN_1081e4bd8(&ppdStack_12e8,param_1,&ppdStack_11d0,&pppdStack_1238);
  uVar5 = 0;
  FUN_1081e85a0();
  if ((uVar5 & 1) != 0) {
    pppdVar11 = &ppdStack_1218;
    param_1 = (double ****)0x0;
    FUN_1081ecf18(pppdVar11,0,0);
    pppdVar12 = (double ***)ppdStack_1218;
    pppdVar7 = (double ***)ppdStack_1218;
    if (((ulong)pppdVar11 & 1) == 0) {
      func_0x0001081f1fb8();
      func_0x0001081f1f78();
      uVar13 = 1;
      goto LAB_1081f1e5c;
    }
LAB_1081f1b50:
    do {
      ppppdVar10 = (double ****)&ppdStack_1258;
      pppdVar11 = pppdVar7;
      FUN_1081dcf94(pppdVar7,pppdVar12);
      ppdVar1 = ppdStack_1218;
      if ((int)pppdVar11 != 0) {
        pppdVar11 = pppdVar12 + 0x25;
        pppdVar12 = (double ***)*pppdVar11;
        if ((double ***)*pppdVar11 != (double ***)0x0) goto LAB_1081f1b50;
      }
      pppdVar12 = (double ***)pppdVar7[0x25];
      pppdVar7 = pppdVar12;
    } while (pppdVar12 != (double ***)0x0);
    param_1 = (double ****)&ppdStack_1258;
    pppdVar11 = (double ***)ppdStack_1218;
    FUN_1081ed080();
    if (((ulong)pppdVar11 & 1) != 0) {
      func_0x0001081f1fb8();
      func_0x0001081f1f78();
      FUN_1081f7554(auStack_1340);
      if (*(int *)(((ulong)&ppdStack_12e8 | (ulong)bStack_125c << 2) + 0x80) == -1) {
        bStack_11d9 = 0;
        while (pppdVar11 = (double ***)ppdVar1, func_0x0001081f7010(), pppdVar11 != (double ***)0x0)
        {
          ppppdVar14 = (double ****)pppdVar11[5];
          ppdStack_11d8 = pppdVar11[0xc];
          pppdStack_1200 = (double ***)CONCAT44(pppdStack_1200._4_4_,8);
          uStack_11f8 = 0;
          uStack_11f0 = 0;
          ppdStack_11e8 = (double **)pppdVar11;
          do {
            func_0x0001081f1fac();
            ppppdVar8 = ppppdVar14;
            FUN_1081e96f8();
            if ((int)ppppdVar8 == 0) {
              func_0x0001081f1fac();
              FUN_1081ea79c();
              ppdVar2 = ppdStack_1208;
              if (((ulong)ppppdVar14 & 1) == 0) {
LAB_1081f1e4c:
                func_0x0001081f1fc0();
                goto LAB_1081f1e50;
              }
              if (((double ***)ppdStack_1208 != (double ***)0x0) &&
                 ((*(byte *)((long)ppdStack_1208 + 0x4d) & 1) == 0)) {
                *(undefined1 *)((long)ppdStack_1208 + 0x4d) = 1;
                ppppdVar10 = &pppdStack_1200;
                FUN_1081ea88c();
                *ppppdVar10 = (double ***)ppdVar2;
              }
            }
            else {
              do {
                do {
                  ppppdVar8 = ppppdVar14;
                  if (((bStack_11d9 & 1) == 0) &&
                     (*(int *)(ppppdVar14 + 0x21) == *(int *)((long)ppppdVar14 + 0x104)))
                  goto LAB_1081f1dc8;
                  ppdStack_1210 = ppdStack_11e8;
                  ppdStack_1208 = ppdStack_11d8;
                  param_2 = &pppdStack_1200;
                  ppppdVar10 = (double ****)&ppdStack_1208;
                  ppppdVar9 = ppppdVar14;
                  FUN_1081ea8b8();
                  if (ppppdVar9 == (double ****)0x0) goto LAB_1081f1dc8;
                  func_0x0001081f1fac();
                  FUN_1081e97e0();
                  if (((ulong)ppppdVar14 & 1) == 0) goto LAB_1081f1e4c;
                  ppdStack_11d8 = ppdStack_1208;
                  ppdStack_11e8 = ppdStack_1210;
                  func_0x0001081f1f8c();
                  ppppdVar8 = ppppdVar9;
                  if (((ulong)ppppdVar14 & 1) != 0) goto LAB_1081f1dc8;
                  ppppdVar14 = ppppdVar9;
                } while (bStack_11d9 != 1);
                pppdVar11 = (double ***)ppdStack_11d8;
                if ((double)*ppdStack_11e8 <= (double)*ppdStack_11d8) {
                  pppdVar11 = (double ***)ppdStack_11e8;
                }
              } while (*(char *)((long)pppdVar11 + 0x7c) != '\x01');
LAB_1081f1dc8:
              func_0x0001081f1fac();
              ppppdVar14 = ppppdVar8;
              FUN_1081e96f8();
              if (((int)ppppdVar14 != 0) && (func_0x0001081f1f8c(), ((ulong)ppppdVar14 & 1) == 0)) {
                func_0x0001081f1fac();
                ppppdVar14 = param_2;
                if ((double)*ppppdVar10 <= (double)*param_2) {
                  ppppdVar14 = ppppdVar10;
                }
                if ((*(byte *)((long)ppppdVar14 + 0x7c) & 1) == 0) {
                  ppppdVar10 = ppppdVar8;
                  FUN_1081e97e0();
                  if (((ulong)ppppdVar10 & 1) == 0) goto LAB_1081f1e4c;
                  if ((*(byte *)((long)ppppdVar14 + 0x7c) & 1) == 0) {
                    *(undefined1 *)((long)ppppdVar14 + 0x7c) = 1;
                    *(int *)(ppppdVar8 + 0x21) = *(int *)(ppppdVar8 + 0x21) + 1;
                  }
                }
              }
              func_0x0001081f7904(auStack_1340);
            }
            ppppdVar14 = &pppdStack_1200;
            param_2 = (double ****)&ppdStack_11d8;
            ppppdVar10 = (double ****)&ppdStack_11e8;
            FUN_1081ecd28();
          } while (ppppdVar14 != (double ****)0x0);
          func_0x0001081f1fc0();
        }
      }
      else {
        ppdStack_11e8 = (double **)((ulong)ppdStack_11e8 & 0xffffffffffffff00);
        iVar15 = 1000000;
        while (pppdVar11 = (double ***)ppdVar1, FUN_1081eccec(), pppdVar11 != (double ***)0x0) {
          pppdVar7 = pppdVar11;
          ppppdVar10 = (double ****)pppdVar11[0xc];
          pppdVar12 = (double ***)pppdVar11[5];
          iVar16 = iVar15;
          while( true ) {
            pppdVar6 = pppdVar12;
            ppppdVar14 = ppppdVar10;
            iVar15 = iVar16 + -1;
            if (iVar16 < 1) goto LAB_1081f1e50;
            if ((((ulong)ppdStack_11e8 & 1) == 0) &&
               (*(int *)(pppdVar6 + 0x21) == *(int *)((long)pppdVar6 + 0x104))) break;
            param_2 = &pppdStack_1200;
            pppdVar12 = pppdVar6;
            pppdStack_1200 = (double ***)ppppdVar14;
            ppdStack_11d8 = (double **)pppdVar11;
            FUN_1081eaaec(pppdVar6,param_2,&ppdStack_11d8,&ppdStack_11e8);
            pppdVar7 = pppdVar12;
            if (pppdVar12 == (double ***)0x0) break;
            FUN_1081e97e0(pppdVar6,ppppdVar14,pppdVar11,auStack_1340);
            pppdVar11 = (double ***)ppdStack_11d8;
            ppppdVar10 = (double ****)pppdStack_1200;
            param_2 = ppppdVar14;
            if (((ulong)pppdVar6 & 1) == 0) goto LAB_1081f1e50;
            func_0x0001081f1f8c();
            pppdVar7 = pppdVar6;
            param_2 = ppppdVar14;
            if ((((ulong)pppdVar6 & 1) != 0) ||
               ((iVar16 = iVar15, (char)ppdStack_11e8 == '\x01' &&
                (func_0x0001081f1f94(), pppdVar7 = pppdVar6, param_2 = ppppdVar14,
                (extraout_x8 & 1) != 0)))) break;
          }
          func_0x0001081f1f8c();
          if ((((ulong)pppdVar7 & 1) == 0) && (func_0x0001081f1f94(), extraout_w8 != 1))
          goto LAB_1081f1e50;
          func_0x0001081f7904(auStack_1340);
        }
      }
      FUN_1081f7aac(auStack_1340);
      uVar13 = 1;
      goto LAB_1081f1e54;
    }
  }
  uVar13 = 0;
LAB_1081f1e5c:
  func_0x0001081e4c9c(&ppdStack_12e8);
  ppppdVar10 = ppppdVar4;
  FUN_10840f740();
  ppppdVar14 = param_1;
code_r0x0001081f1e6c:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return uVar13;
  }
  ___stack_chk_fail();
  func_0x0001081e4c6c(auStack_1340);
  func_0x0001081e4c9c(&ppdStack_12e8);
  FUN_10840f740(ppppdVar4);
  __Unwind_Resume();
FUN_1081f1f2c:
  fVar18 = *(float *)((long)ppppdVar14 + 4);
  fVar19 = *(float *)((long)ppppdVar10 + 4);
  bVar3 = false;
  if ((*(float *)ppppdVar14 == *(float *)ppppdVar10) &&
     (bVar3 = false, !NAN(fVar18) && !NAN(fVar19))) {
    bVar3 = fVar18 == fVar19;
  }
  if (!bVar3) {
    fVar17 = *(float *)ppppdVar14 - *(float *)ppppdVar10;
    if (-(fVar17 * *(float *)((long)ppppdVar10 + 0xc)) +
        (fVar18 - fVar19) * *(float *)(ppppdVar10 + 1) != 0.0) {
      return 0;
    }
    *(float *)(ppppdVar10 + 1) = fVar17;
    *(float *)((long)ppppdVar10 + 0xc) = fVar18 - fVar19;
    *ppppdVar10 = *ppppdVar14;
  }
  return 1;
code_r0x0001081f1a70:
  ppppdVar10 = (double ****)&ppdStack_12e8;
  ppppdVar14 = (double ****)&ppdStack_11c8;
  goto FUN_1081f1f2c;
code_r0x0001081f1a44:
  ppdStack_12e8 = ppdStack_11d0;
  uStack_12e0 = 0;
  goto LAB_1081f1a1c;
LAB_1081f1e50:
  uVar13 = 0;
LAB_1081f1e54:
  func_0x0001081e4c6c(auStack_1340);
  param_1 = param_2;
  goto LAB_1081f1e5c;
}



/* Entry: 1081f1f2c; end: 1081f1fc7;  */

undefined8 FUN_1081f1f2c(float *param_1,float *param_2)

{
  bool bVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  fVar3 = param_2[1];
  fVar4 = param_1[1];
  bVar1 = false;
  if ((*param_2 == *param_1) && (bVar1 = false, !NAN(fVar3) && !NAN(fVar4))) {
    bVar1 = fVar3 == fVar4;
  }
  if (!bVar1) {
    fVar2 = *param_2 - *param_1;
    if (-(fVar2 * param_1[3]) + (fVar3 - fVar4) * param_1[2] != 0.0) {
      return 0;
    }
    param_1[2] = fVar2;
    param_1[3] = fVar3 - fVar4;
    *(undefined8 *)param_1 = *(undefined8 *)param_2;
  }
  return 1;
}



/* Entry: 1081f1fc8; end: 1081f20fb;  */

void FUN_1081f1fc8(double param_1,double param_2,double *param_3,long *param_4,double *param_5,
                  long *param_6)

{
  undefined1 uVar1;
  int iVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dStack_230;
  double dStack_228;
  double dStack_220;
  double dStack_218;
  double dStack_140;
  double dStack_138;
  undefined4 uStack_70;
  undefined2 uStack_6c;
  undefined1 auStack_6a [10];
  double dStack_60;
  double dStack_58;
  double dStack_50;
  double dStack_48;
  
  (**(code **)(*param_4 + 0x38))(param_4);
  dStack_58 = param_5[1];
  dStack_60 = *param_5;
  dStack_50 = param_2 + *param_5;
  param_1 = param_5[1] - param_1;
  dVar3 = 0.0;
  uStack_6c = 0;
  dStack_48 = param_1;
  func_0x0001081f5fc0(&dStack_230);
  uStack_70 = 0;
  func_0x0001081f6114(auStack_6a);
  (**(code **)(*param_6 + 0x60))(param_6,&dStack_230,&dStack_60);
  iVar2 = (int)param_6;
  if (iVar2 == 3 || iVar2 == 0) {
    param_3[2] = -1.0;
    *(undefined1 *)(param_3 + 3) = 0;
    func_0x0001081f5ee4();
    param_3[1] = dVar3;
    *param_3 = param_1;
  }
  else {
    param_3[2] = dStack_140;
    param_3[1] = dStack_228;
    *param_3 = dStack_230;
    if ((iVar2 == 2) &&
       (dVar3 = dStack_220 - *param_5, dVar4 = *param_3 - *param_5, dVar5 = dStack_218 - param_5[1],
       dVar6 = param_3[1] - param_5[1],
       dVar5 * dVar5 + dVar3 * dVar3 < dVar6 * dVar6 + dVar4 * dVar4)) {
      param_3[2] = dStack_138;
      param_3[1] = dStack_218;
      *param_3 = dStack_220;
    }
    func_0x0001081f61b0();
    uVar1 = (undefined1)iVar2;
    FUN_1081de864();
    *(undefined1 *)(param_3 + 3) = uVar1;
  }
  return;
}



/* Entry: 1081f20fc; end: 1081f2187;  */

void FUN_1081f20fc(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 unaff_x19;
  long unaff_x20;
  
  func_0x0001081f5f1c();
  func_0x0001081865ac(param_3,0x10,8);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x48);
  *param_3 = unaff_x19;
  param_3[1] = uVar1;
  *(undefined8 **)(unaff_x20 + 0x48) = param_3;
  return;
}



/* Entry: 1081f2188; end: 1081f218f;  */

bool FUN_1081f2188(undefined8 *param_1,long *param_2)

{
  undefined1 uVar1;
  long extraout_x8;
  long extraout_x8_00;
  double dVar2;
  
  *(undefined2 *)((long)param_1 + 0x9a) = 0;
  if (NAN((double)param_1[0x10])) {
    return false;
  }
  if (!NAN((double)param_1[0x11])) {
    (**(code **)(*param_2 + 0xa8))(param_2,*param_1);
    uVar1 = SUB81(param_2,0);
    func_0x0001081f5ed8();
    (**(code **)(extraout_x8 + 0xa0))();
    param_1[3] = 0xbff0000000000000;
    *(undefined1 *)(param_1 + 4) = 0;
    param_1[2] = 0x7ff8000000000000;
    param_1[1] = 0x7ff8000000000000;
    param_1[7] = 0xbff0000000000000;
    *(undefined1 *)(param_1 + 8) = 0;
    param_1[6] = 0x7ff8000000000000;
    param_1[5] = 0x7ff8000000000000;
    dVar2 = (double)param_1[0xf] - (double)param_1[0xd];
    if ((double)param_1[0xf] - (double)param_1[0xd] <= (double)param_1[0xe] - (double)param_1[0xc])
    {
      dVar2 = (double)param_1[0xe] - (double)param_1[0xc];
    }
    param_1[0x12] = dVar2;
    func_0x0001081f5ed8();
    (**(code **)(extraout_x8_00 + 0x20))();
    *(undefined1 *)(param_1 + 0x13) = uVar1;
    *(undefined1 *)((long)param_1 + 0x99) = 0;
    *(undefined1 *)((long)param_1 + 0x9c) = 0;
    if ((double)param_1[0xc] <= (double)param_1[0xe]) {
      return (double)param_1[0xd] <= (double)param_1[0xf];
    }
  }
  return false;
}



/* Entry: 1081f2190; end: 1081f22ab;  */

/* WARNING: Possible PIC construction at 0x0001081f2278: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001081f227c) */

void FUN_1081f2190(double param_1,undefined8 param_2,long param_3)

{
  long *plVar1;
  undefined8 *puVar2;
  long *plVar3;
  long lVar4;
  undefined8 unaff_x19;
  undefined8 *unaff_x20;
  undefined8 *puVar5;
  undefined8 uVar6;
  
  func_0x0001081f5f1c();
  FUN_1081f2934();
  if (param_3 != 0) {
    return;
  }
  plVar1 = unaff_x20 + 0x85;
  plVar3 = plVar1;
  puVar2 = (undefined8 *)0x0;
  do {
    puVar5 = (undefined8 *)*plVar3;
    if (puVar5 == (undefined8 *)0x0) {
LAB_1081f220c:
      puVar5 = unaff_x20;
      func_0x0001081f2134();
      if (puVar2 == (undefined8 *)0x0) {
        uVar6 = 0;
        plVar3 = plVar1;
      }
      else {
        uVar6 = puVar2[0x11];
        plVar3 = puVar2 + 0xb;
      }
      puVar5[0x10] = uVar6;
      lVar4 = *plVar3;
      if (lVar4 == 0) {
        uVar6 = 0x3ff0000000000000;
      }
      else {
        uVar6 = *(undefined8 *)(lVar4 + 0x80);
      }
      puVar5[0x11] = uVar6;
      puVar5[10] = puVar2;
      puVar5[0xb] = lVar4;
      if (puVar2 == (undefined8 *)0x0) {
        *plVar1 = (long)puVar5;
      }
      else {
        puVar2[0xb] = puVar5;
      }
      if (lVar4 != 0) {
        *(undefined8 **)(lVar4 + 0x50) = puVar5;
      }
      FUN_1081f2188(puVar5,*unaff_x20);
LAB_1081f226c:
      puVar2 = unaff_x20 + 0x81;
      func_0x0001081f5f1c(puVar5);
      func_0x0001081865ac(puVar2,0x10,8);
      uVar6 = unaff_x20[9];
      *puVar2 = unaff_x19;
      puVar2[1] = uVar6;
      unaff_x20[9] = puVar2;
      return;
    }
    if (param_1 <= (double)puVar5[0x11]) {
      if ((double)puVar5[0x10] <= param_1) goto LAB_1081f226c;
      goto LAB_1081f220c;
    }
    plVar3 = puVar5 + 0xb;
    puVar2 = puVar5;
  } while( true );
}



/* Entry: 1081f22ac; end: 1081f2343;  */

long FUN_1081f22ac(long param_1,undefined8 *param_2)

{
  double *pdVar1;
  undefined8 *puVar2;
  long *plVar3;
  double dVar4;
  long lVar5;
  double dVar6;
  
  lVar5 = -0x4010000000000000;
  dVar6 = 1.79769313486232e+308;
  for (puVar2 = (undefined8 *)(param_1 + 0x48); puVar2 = (undefined8 *)*puVar2,
      puVar2 != (undefined8 *)0x0; puVar2 = puVar2 + 1) {
    plVar3 = (long *)*puVar2;
    pdVar1 = (double *)*plVar3;
    func_0x0001081f5d4c();
    dVar4 = *pdVar1;
    func_0x0001081f5de4(dVar4,pdVar1[1],*param_2,param_2[1]);
    if (dVar4 < dVar6) {
      lVar5 = plVar3[0x10];
      dVar6 = dVar4;
    }
    func_0x0001081f5fb8();
    dVar4 = *pdVar1;
    func_0x0001081f5de4(dVar4,pdVar1[1],*param_2,param_2[1]);
    if (dVar4 < dVar6) {
      lVar5 = plVar3[0x11];
      dVar6 = dVar4;
    }
  }
  return lVar5;
}



/* Entry: 1081f2344; end: 1081f2373;  */

void FUN_1081f2344(long *param_1)

{
  long *plVar1;
  
  plVar1 = param_1;
  func_0x0001081f5e8c();
                    /* WARNING: Could not recover jumptable at 0x0001081f2370. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,plVar1);
  return;
}



/* Entry: 1081f2374; end: 1081f239f;  */

bool FUN_1081f2374(double param_1,long param_2)

{
  double dVar1;
  
  do {
    dVar1 = (*(double *)(param_2 + 0x80) - param_1) * (*(double *)(param_2 + 0x88) - param_1);
    if (dVar1 <= 0.0) break;
    param_2 = *(long *)(param_2 + 0x58);
  } while (param_2 != 0);
  return dVar1 <= 0.0;
}



/* Entry: 1081f23a0; end: 1081f261f;  */

uint FUN_1081f23a0(undefined8 param_1,double param_2,undefined8 param_3,double param_4,
                  double *param_5,long *param_6,byte *param_7,byte *param_8)

{
  undefined1 in_ZR;
  undefined1 uVar1;
  undefined1 uVar2;
  double *pdVar3;
  double *pdVar4;
  long *plVar5;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  uint uVar6;
  int iVar7;
  long lVar8;
  long *plVar9;
  long lVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  long alStack_a8 [4];
  long alStack_88 [4];
  undefined8 uStack_68;
  
  uStack_68 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  if ((*(byte *)((long)param_5 + 0x9a) & 1) == 0) {
    func_0x0001081f5d4c(*param_6);
    func_0x0001081f5d4c(*param_5);
    func_0x0001081f5dc8();
    uVar1 = false;
    if (((bool)in_ZR) && (uVar1 = false, !NAN(param_2) && !NAN(param_4))) {
      uVar1 = param_2 == param_4;
    }
    if ((bool)uVar1) {
      *param_8 = 1;
      *param_7 = 1;
    }
    else {
      func_0x0001081f5d4c(*param_6);
      func_0x0001081f6134();
      func_0x0001081f5dc8();
      uVar2 = false;
      if (((bool)uVar1) && (uVar2 = false, !NAN(param_2) && !NAN(param_4))) {
        uVar2 = param_2 == param_4;
      }
      if ((bool)uVar2) {
        *param_7 = 0;
        *param_8 = 1;
      }
      else {
        func_0x0001081f5ef0();
        func_0x0001081f5d4c(*param_5);
        func_0x0001081f5dc8();
        uVar1 = false;
        if (((bool)uVar2) && (uVar1 = false, !NAN(param_2) && !NAN(param_4))) {
          uVar1 = param_2 == param_4;
        }
        if ((bool)uVar1) {
          *param_7 = 1;
          *param_8 = 0;
        }
        else {
          func_0x0001081f5ef0();
          func_0x0001081f6134();
          func_0x0001081f5dc8();
          in_ZR = false;
          if (((bool)uVar1) && (in_ZR = false, !NAN(param_2) && !NAN(param_4))) {
            in_ZR = param_2 == param_4;
          }
          if (!(bool)in_ZR) {
            iVar7 = 0;
LAB_1081f2594:
            pdVar4 = (double *)*param_5;
            plVar5 = (long *)*param_6;
            (**(code **)((long)*pdVar4 + 0x58))(pdVar4,plVar5,alStack_88);
            if ((int)pdVar4 == 0) {
              uVar6 = iVar7 << 1;
            }
            else {
              uVar6 = 1;
              in_ZR = 0;
              if ((char)alStack_88[0] == '\x01') {
                *(undefined1 *)((long)param_5 + 0x9a) = 1;
                func_0x0001081f5ed8();
                (**(code **)(extraout_x8_00 + 0x28))();
                *(char *)((long)param_5 + 0x9b) = (char)pdVar4;
                in_ZR = iVar7 == 0;
                uVar6 = 0xffffffff;
                if (!(bool)in_ZR) {
                  uVar6 = 1;
                }
              }
            }
            goto LAB_1081f25e4;
          }
          *param_8 = 0;
          *param_7 = 0;
        }
      }
    }
    if ((*param_7 & 1) == 0) {
      func_0x0001081f5e8c(*param_5);
    }
    func_0x0001081f5ed8();
    (**(code **)(extraout_x8 + 0x80))();
    plVar9 = (long *)*param_6;
    if ((*param_8 & 1) == 0) {
      plVar5 = plVar9;
      (**(code **)(*plVar9 + 0x90))();
    }
    else {
      plVar5 = (long *)0x0;
    }
    (**(code **)(*plVar9 + 0x80))(plVar9,plVar5,alStack_a8);
    pdVar3 = (double *)*param_5;
    func_0x0001081f5e5c();
    func_0x0001081f6194();
    lVar8 = 0;
    pdVar4 = pdVar3;
    while( true ) {
      func_0x0001081f5ed8();
      func_0x0001081f609c();
      lVar10 = (long)((int)pdVar4 + -1);
      in_ZR = lVar8 == lVar10;
      if (lVar10 <= lVar8) break;
      lVar10 = 0;
      dVar11 = *(double *)alStack_88[lVar8];
      dVar13 = ((double *)alStack_88[lVar8])[1];
      dVar15 = *pdVar3;
      dVar16 = pdVar3[1];
      while( true ) {
        func_0x0001081f5e68();
        func_0x0001081f609c();
        if ((int)pdVar4 + -1 <= lVar10) break;
        dVar12 = *(double *)alStack_a8[lVar10];
        dVar14 = ((double *)alStack_a8[lVar10])[1];
        func_0x0001081f5f54(dVar12,dVar14,*pdVar3,pdVar3[1]);
        dVar12 = (dVar13 - dVar16) * dVar14 + (dVar11 - dVar15) * dVar12;
        lVar10 = lVar10 + 1;
        in_ZR = dVar12 == 0.0;
        if (0.0 <= dVar12) {
          iVar7 = 1;
          goto LAB_1081f2594;
        }
      }
      lVar8 = lVar8 + 1;
    }
    uVar6 = 2;
  }
  else {
    uVar6 = 0xffffffff;
    pdVar4 = param_5;
    plVar5 = param_6;
  }
LAB_1081f25e4:
  func_0x0001081f5d6c(uStack_68);
  if ((bool)in_ZR) {
    return uVar6;
  }
  ___stack_chk_fail();
  pdVar4[10] = 0.0;
  pdVar4[0xb] = 0.0;
  pdVar4[0x11] = 1.0;
  pdVar4[0x10] = 0.0;
  pdVar4[9] = 0.0;
  *(undefined2 *)((long)pdVar4 + 0x9a) = 0;
  if (!NAN(pdVar4[0x10])) {
    if (!NAN(pdVar4[0x11])) {
      (**(code **)(*plVar5 + 0xa8))(plVar5,*pdVar4);
      uVar1 = SUB81(plVar5,0);
      func_0x0001081f5ed8();
      (**(code **)(extraout_x8_01 + 0xa0))();
      pdVar4[3] = -1.0;
      *(undefined1 *)(pdVar4 + 4) = 0;
      pdVar4[2] = NAN;
      pdVar4[1] = NAN;
      pdVar4[7] = -1.0;
      *(undefined1 *)(pdVar4 + 8) = 0;
      pdVar4[6] = NAN;
      pdVar4[5] = NAN;
      dVar11 = pdVar4[0xf] - pdVar4[0xd];
      if (pdVar4[0xf] - pdVar4[0xd] <= pdVar4[0xe] - pdVar4[0xc]) {
        dVar11 = pdVar4[0xe] - pdVar4[0xc];
      }
      pdVar4[0x12] = dVar11;
      func_0x0001081f5ed8();
      (**(code **)(extraout_x8_02 + 0x20))();
      *(undefined1 *)(pdVar4 + 0x13) = uVar1;
      *(undefined1 *)((long)pdVar4 + 0x99) = 0;
      *(undefined1 *)((long)pdVar4 + 0x9c) = 0;
      if (pdVar4[0xc] <= pdVar4[0xe]) {
        return (uint)(pdVar4[0xd] <= pdVar4[0xf]);
      }
    }
    return 0;
  }
  return 0;
}



/* Entry: 1081f2620; end: 1081f2637;  */

bool FUN_1081f2620(undefined8 *param_1,long *param_2)

{
  undefined1 uVar1;
  long extraout_x8;
  long extraout_x8_00;
  double dVar2;
  
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0x11] = 0x3ff0000000000000;
  param_1[0x10] = 0;
  param_1[9] = 0;
  *(undefined2 *)((long)param_1 + 0x9a) = 0;
  if (NAN((double)param_1[0x10])) {
    return false;
  }
  if (!NAN((double)param_1[0x11])) {
    (**(code **)(*param_2 + 0xa8))(param_2,*param_1);
    uVar1 = SUB81(param_2,0);
    func_0x0001081f5ed8();
    (**(code **)(extraout_x8 + 0xa0))();
    param_1[3] = 0xbff0000000000000;
    *(undefined1 *)(param_1 + 4) = 0;
    param_1[2] = 0x7ff8000000000000;
    param_1[1] = 0x7ff8000000000000;
    param_1[7] = 0xbff0000000000000;
    *(undefined1 *)(param_1 + 8) = 0;
    param_1[6] = 0x7ff8000000000000;
    param_1[5] = 0x7ff8000000000000;
    dVar2 = (double)param_1[0xf] - (double)param_1[0xd];
    if ((double)param_1[0xf] - (double)param_1[0xd] <= (double)param_1[0xe] - (double)param_1[0xc])
    {
      dVar2 = (double)param_1[0xe] - (double)param_1[0xc];
    }
    param_1[0x12] = dVar2;
    func_0x0001081f5ed8();
    (**(code **)(extraout_x8_00 + 0x20))();
    *(undefined1 *)(param_1 + 0x13) = uVar1;
    *(undefined1 *)((long)param_1 + 0x99) = 0;
    *(undefined1 *)((long)param_1 + 0x9c) = 0;
    if ((double)param_1[0xc] <= (double)param_1[0xe]) {
      return (double)param_1[0xd] <= (double)param_1[0xf];
    }
  }
  return false;
}



/* Entry: 1081f2638; end: 1081f2717;  */

bool FUN_1081f2638(undefined8 *param_1,long *param_2)

{
  undefined1 uVar1;
  long extraout_x8;
  long extraout_x8_00;
  double dVar2;
  
  if (NAN((double)param_1[0x10])) {
    return false;
  }
  if (!NAN((double)param_1[0x11])) {
    (**(code **)(*param_2 + 0xa8))(param_2,*param_1);
    uVar1 = SUB81(param_2,0);
    func_0x0001081f5ed8();
    (**(code **)(extraout_x8 + 0xa0))();
    param_1[3] = 0xbff0000000000000;
    *(undefined1 *)(param_1 + 4) = 0;
    param_1[2] = 0x7ff8000000000000;
    param_1[1] = 0x7ff8000000000000;
    param_1[7] = 0xbff0000000000000;
    *(undefined1 *)(param_1 + 8) = 0;
    param_1[6] = 0x7ff8000000000000;
    param_1[5] = 0x7ff8000000000000;
    dVar2 = (double)param_1[0xf] - (double)param_1[0xd];
    if ((double)param_1[0xf] - (double)param_1[0xd] <= (double)param_1[0xe] - (double)param_1[0xc])
    {
      dVar2 = (double)param_1[0xe] - (double)param_1[0xc];
    }
    param_1[0x12] = dVar2;
    func_0x0001081f5ed8();
    (**(code **)(extraout_x8_00 + 0x20))();
    *(undefined1 *)(param_1 + 0x13) = uVar1;
    *(undefined1 *)((long)param_1 + 0x99) = 0;
    *(undefined1 *)((long)param_1 + 0x9c) = 0;
    if ((double)param_1[0xc] <= (double)param_1[0xe]) {
      return (double)param_1[0xd] <= (double)param_1[0xf];
    }
  }
  return false;
}



/* Entry: 1081f2718; end: 1081f2933;  */

undefined8 FUN_1081f2718(ulong *param_1)

{
  bool bVar1;
  double *pdVar2;
  double *pdVar3;
  long extraout_x8;
  code *extraout_x8_00;
  code *extraout_x8_01;
  code *extraout_x8_02;
  code *extraout_x8_03;
  double *unaff_x19;
  int iVar4;
  int iVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  
  func_0x0001081f5f1c();
  pdVar2 = (double *)*param_1;
  func_0x0001081f5e8c();
  func_0x0001081f5e68();
  (**(code **)(extraout_x8 + 0x28))();
  if (((ulong)pdVar2 & 1) == 0) {
    iVar4 = 0;
    dVar7 = 0.0;
    while( true ) {
      func_0x0001081f5e68();
      func_0x0001081f609c();
      if ((int)pdVar2 + -1 <= iVar4) break;
      iVar4 = iVar4 + 1;
      iVar5 = iVar4;
      while( true ) {
        func_0x0001081f5e68();
        func_0x0001081f609c();
        if ((int)pdVar2 <= iVar5) break;
        func_0x0001081f5db8();
        (*extraout_x8_02)();
        pdVar3 = pdVar2;
        func_0x0001081f5db8();
        (*extraout_x8_03)();
        dVar6 = *pdVar2;
        func_0x0001081f5de4(dVar6,pdVar2[1],*pdVar3,pdVar3[1]);
        if (dVar7 <= dVar6) {
          dVar7 = dVar6;
        }
        iVar5 = iVar5 + 1;
        pdVar2 = pdVar3;
      }
    }
  }
  func_0x0001081f5db8();
  func_0x0001081f6194();
  dVar11 = *pdVar2;
  func_0x0001081f5db8();
  func_0x0001081f6194();
  dVar12 = pdVar2[1];
  func_0x0001081f5db8();
  (*extraout_x8_00)();
  dVar13 = *pdVar2;
  func_0x0001081f5db8();
  (*extraout_x8_01)();
  iVar4 = 0;
  dVar6 = pdVar2[1];
  dVar10 = ABS(dVar13 - dVar11);
  dVar7 = ABS(dVar6 - dVar12);
  if (dVar7 <= dVar10) {
    dVar7 = dVar10;
  }
  dVar10 = 0.0;
  while( true ) {
    pdVar2 = unaff_x19;
    (**(code **)((long)*unaff_x19 + 0x88))();
    if ((int)pdVar2 <= iVar4) {
      return 0;
    }
    func_0x0001081f5da4();
    dVar14 = pdVar2[1];
    func_0x0001081f5da4();
    dVar8 = ABS(*pdVar2 - dVar11);
    if (ABS(*pdVar2 - dVar11) <= ABS(dVar14 - dVar12)) {
      dVar8 = ABS(dVar14 - dVar12);
    }
    if (dVar8 <= dVar7) {
      dVar8 = dVar7;
    }
    func_0x0001081f5da4();
    dVar14 = pdVar2[1];
    func_0x0001081f5da4();
    dVar14 = (*pdVar2 - dVar11) * -(dVar6 - dVar12) + (dVar13 - dVar11) * (dVar14 - dVar12);
    dVar9 = ABS(dVar14);
    bVar1 = true;
    if ((dVar14 != 0.0) && (bVar1 = false, !NAN(dVar9) && !NAN(ABS(dVar8 * 2.220446049250313e-16))))
    {
      bVar1 = dVar9 < ABS(dVar8 * 2.220446049250313e-16);
    }
    if (bVar1) {
      return 1;
    }
    if (dVar9 < ABS(dVar8 * 1.1920928955078125e-07)) {
      return 3;
    }
    dVar8 = dVar14;
    if ((iVar4 != 0) && (dVar8 = dVar10, dVar10 * dVar14 < 0.0)) break;
    iVar4 = iVar4 + 1;
    dVar10 = dVar8;
  }
  return 1;
}



/* Entry: 1081f2934; end: 1081f2a37;  */

long FUN_1081f2934(double param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  long *plVar3;
  
  plVar3 = (long *)(param_2 + 0x48);
  do {
    plVar2 = (long *)*plVar3;
    if (plVar2 == (long *)0x0) {
      return 0;
    }
    plVar3 = plVar2 + 1;
    lVar1 = *plVar2;
  } while (0.0 < (*(double *)(lVar1 + 0x80) - param_1) * (*(double *)(lVar1 + 0x88) - param_1));
  return lVar1;
}



/* Entry: 1081f2a38; end: 1081f2af3;  */

undefined8 FUN_1081f2a38(double param_1,long param_2,long param_3,undefined8 param_4)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  double dVar5;
  
  dVar5 = *(double *)(param_3 + 0x88);
  *(double *)(param_2 + 0x80) = param_1;
  *(double *)(param_2 + 0x88) = dVar5;
  lVar2 = param_2;
  if ((param_1 == dVar5) ||
     (*(double *)(param_3 + 0x88) = param_1, lVar2 = param_3, *(double *)(param_3 + 0x80) == param_1
     )) {
    uVar1 = 0;
    *(undefined1 *)(lVar2 + 0x98) = 1;
  }
  else {
    uVar1 = *(undefined8 *)(param_3 + 0x58);
    *(long *)(param_2 + 0x50) = param_3;
    *(undefined8 *)(param_2 + 0x58) = uVar1;
    *(undefined2 *)(param_2 + 0x9a) = *(undefined2 *)(param_3 + 0x9a);
    *(long *)(param_3 + 0x58) = param_2;
    if (*(long *)(param_2 + 0x58) != 0) {
      *(long *)(*(long *)(param_2 + 0x58) + 0x50) = param_2;
    }
    puVar4 = *(undefined8 **)(param_3 + 0x48);
    puVar3 = (undefined8 *)(param_2 + 0x48);
    *puVar3 = 0;
    for (; puVar4 != (undefined8 *)0x0; puVar4 = (undefined8 *)puVar4[1]) {
      FUN_1081f20fc(param_2,*puVar4,param_4);
    }
    for (; puVar3 = (undefined8 *)*puVar3, puVar3 != (undefined8 *)0x0; puVar3 = puVar3 + 1) {
      FUN_1081f20fc(*puVar3,param_2,param_4);
    }
    uVar1 = 1;
  }
  return uVar1;
}



/* Entry: 1081f2af4; end: 1081f2b53;  */

undefined8 * FUN_1081f2af4(undefined8 *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  
  puVar1 = param_1 + 1;
  *param_1 = param_2;
  func_0x0001081f5cd0(puVar1,0x280);
  *(undefined8 *)((long)param_1 + 0x43f) = 0;
  param_1[0x87] = 0;
  param_1[0x86] = 0;
  func_0x0001081f6178();
  param_1[0x85] = puVar1;
  FUN_1081f2620();
  return param_1;
}



/* Entry: 1081f2b54; end: 1081f2b77;  */

void FUN_1081f2b54(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uStack_20 = param_2;
  uStack_18 = param_3;
  func_0x0001081f5d00(param_1,&uStack_20);
  return;
}



/* Entry: 1081f2b78; end: 1081f2ba7;  */

void FUN_1081f2b78(long *param_1)

{
  long *plVar1;
  
  plVar1 = param_1;
  func_0x0001081f5e8c();
                    /* WARNING: Could not recover jumptable at 0x0001081f2ba4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x10))(param_1,plVar1);
  return;
}



/* Entry: 1081f2ba8; end: 1081f2c1b;  */

long FUN_1081f2ba8(long param_1)

{
  byte bVar1;
  byte bVar2;
  long lVar3;
  int iVar4;
  byte bVar5;
  long lVar6;
  
  bVar5 = *(byte *)(*(long *)(param_1 + 0x428) + 0x98);
  iVar4 = 10000;
  lVar6 = *(long *)(param_1 + 0x428);
  do {
    lVar3 = lVar6;
    bVar2 = bVar5 ^ 1;
    bVar1 = bVar5 & 1;
    lVar6 = lVar3;
    do {
      iVar4 = iVar4 + -1;
      lVar6 = *(long *)(lVar6 + 0x58);
      if (lVar6 == 0) {
        return lVar3;
      }
      if (iVar4 == 0) {
        *(undefined1 *)(param_1 + 0x446) = 1;
        return 0;
      }
      bVar5 = *(byte *)(lVar6 + 0x98);
    } while ((((bVar2 | bVar5) & 1) != 0) &&
            ((bVar5 != bVar1 || (*(double *)(lVar6 + 0x90) <= *(double *)(lVar3 + 0x90)))));
  } while( true );
}



/* Entry: 1081f2c1c; end: 1081f2d5f;  */

void FUN_1081f2c1c(undefined8 *param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (param_4 != (undefined8 *)0x0) {
    puVar2 = (undefined8 *)0x0;
    while( true ) {
      iVar1 = (int)param_1;
      if (((*(byte *)((long)param_3 + 0x99) & 1) == 0) && ((*(byte *)(param_3 + 0x13) & 1) == 0)) {
        if (puVar2 == (undefined8 *)0x0) {
          func_0x0001081f5d4c(*param_3);
          iVar1 = (int)param_3 + 8;
          func_0x0001081f6054();
        }
        else {
          uVar4 = puVar2[6];
          uVar3 = puVar2[5];
          uVar5 = *(undefined8 *)((long)puVar2 + 0x31);
          *(undefined8 *)((long)param_3 + 0x19) = *(undefined8 *)((long)puVar2 + 0x39);
          *(undefined8 *)((long)param_3 + 0x11) = uVar5;
          param_3[2] = uVar4;
          param_3[1] = uVar3;
        }
        if (*(char *)(param_3 + 4) == '\x01') {
          func_0x0001081f6154();
          if (iVar1 == 0) {
            func_0x0001081f6044();
          }
          else {
            param_3[3] = 0xbff0000000000000;
            *(undefined1 *)(param_3 + 4) = 0;
            param_3[2] = 0x7ff8000000000000;
            param_3[1] = 0x7ff8000000000000;
          }
        }
        func_0x0001081f5fb8();
        param_1 = param_3 + 5;
        func_0x0001081f6054();
        if (*(char *)(param_3 + 8) == '\x01') {
          func_0x0001081f6154();
          if ((int)param_1 == 0) {
            func_0x0001081f6044();
          }
          else {
            param_3[7] = 0xbff0000000000000;
            *(undefined1 *)(param_3 + 8) = 0;
            param_3[6] = 0x7ff8000000000000;
            param_3[5] = 0x7ff8000000000000;
          }
        }
        *(undefined1 *)((long)param_3 + 0x99) = 1;
      }
      if (param_3 == param_4) break;
      puVar2 = param_3;
      param_3 = (undefined8 *)param_3[0xb];
    }
  }
  return;
}



/* Entry: 1081f2d60; end: 1081f2d97;  */

long FUN_1081f2d60(long param_1)

{
  long lVar1;
  long lVar2;
  int iVar3;
  
  iVar3 = -99999;
  lVar2 = param_1;
  while( true ) {
    param_1 = *(long *)(param_1 + 0x58);
    if (param_1 == 0) {
      return lVar2;
    }
    if (iVar3 == 0) break;
    lVar1 = param_1;
    if (*(double *)(param_1 + 0x88) <= *(double *)(lVar2 + 0x88)) {
      lVar1 = lVar2;
    }
    iVar3 = iVar3 + 1;
    lVar2 = lVar1;
  }
  return 0;
}



/* Entry: 1081f2d98; end: 1081f2e2b;  */

uint FUN_1081f2d98(undefined8 param_1,long param_2,long param_3)

{
  undefined8 uVar1;
  long lVar2;
  uint uVar3;
  uint uVar4;
  undefined8 *puVar5;
  
  uVar3 = 0;
  lVar2 = param_2;
  do {
    uVar4 = 0;
    for (puVar5 = (undefined8 *)(lVar2 + 0x48); puVar5 = (undefined8 *)*puVar5,
        puVar5 != (undefined8 *)0x0; puVar5 = puVar5 + 1) {
      uVar1 = *puVar5;
      func_0x0001081f2968(uVar1,lVar2);
      uVar4 = uVar4 | (uint)uVar1;
    }
    uVar3 = uVar3 | uVar4;
    lVar2 = *(long *)(lVar2 + 0x58);
  } while (lVar2 != param_3 && lVar2 != 0);
  *(undefined8 *)(param_2 + 0x48) = 0;
  func_0x0001081f61b0();
  FUN_1081f20fc();
  return uVar3 & 1;
}



/* Entry: 1081f2e2c; end: 1081f2f6b;  */

void FUN_1081f2e2c(undefined8 param_1,long param_2,long param_3)

{
  long lVar1;
  long unaff_x19;
  long lVar2;
  
  if (param_2 != param_3) {
    func_0x0001081f5f1c();
    lVar2 = *(long *)(param_3 + 0x58);
    lVar1 = *(long *)(param_2 + 0x58);
    while ((lVar1 != 0 && (lVar1 != lVar2))) {
      lVar1 = *(long *)(lVar1 + 0x58);
      FUN_1081f3a60();
    }
    if (lVar2 != 0) {
      *(long *)(lVar2 + 0x50) = unaff_x19;
    }
    *(long *)(unaff_x19 + 0x58) = lVar2;
  }
  return;
}



/* Entry: 1081f2f6c; end: 1081f2f9f;  */

bool FUN_1081f2f6c(double param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = (long *)(param_2 + 0x430);
  do {
    lVar1 = *plVar2;
    if (lVar1 == 0) break;
    plVar2 = (long *)(lVar1 + 0x58);
  } while (0.0 < (*(double *)(lVar1 + 0x80) - param_1) * (*(double *)(lVar1 + 0x88) - param_1));
  return lVar1 != 0;
}



/* Entry: 1081f2fa0; end: 1081f3007;  */

ulong FUN_1081f2fa0(undefined8 param_1,long param_2)

{
  int iVar1;
  long lVar2;
  long unaff_x19;
  ulong unaff_x20;
  
  func_0x0001081f5f1c();
  if (*(double *)(param_2 + 0x80) == 0.0) {
    *(undefined1 *)(unaff_x20 + 0x444) = 1;
  }
  if (*(double *)(unaff_x19 + 0x88) == 1.0) {
    *(undefined1 *)(unaff_x20 + 0x445) = 1;
  }
  lVar2 = *(long *)(unaff_x19 + 0x50);
  FUN_1081f3b54();
  if ((int)unaff_x20 != 0) {
    func_0x0001081f61b0();
    iVar1 = *(int *)(unaff_x20 + 0x440);
    *(int *)(unaff_x20 + 0x440) = iVar1 + -1;
    if (0 < iVar1) {
      *(undefined8 *)(lVar2 + 0x58) = *(undefined8 *)(unaff_x20 + 0x438);
      *(long *)(unaff_x20 + 0x438) = lVar2;
      *(undefined1 *)(lVar2 + 0x9c) = 1;
    }
    return (ulong)(0 < iVar1);
  }
  return unaff_x20;
}



/* Entry: 1081f3008; end: 1081f306b;  */

undefined8 FUN_1081f3008(undefined8 param_1,undefined8 param_2)

{
  undefined8 *unaff_x20;
  
  func_0x0001081f5f1c();
  func_0x0001081f2134();
  FUN_1081f2a38(param_1);
  FUN_1081f2638(param_2,*unaff_x20);
  FUN_1081f2638();
  return param_2;
}



/* Entry: 1081f306c; end: 1081f309b;  */

void FUN_1081f306c(long param_1)

{
  if ((*(byte *)(param_1 + 0x20) & 1) == 0) {
    *(undefined8 *)(param_1 + 0x18) = 0xbff0000000000000;
  }
  *(undefined1 *)(param_1 + 0x20) = 1;
  if ((*(byte *)(param_1 + 0x40) & 1) == 0) {
    *(undefined8 *)(param_1 + 0x38) = 0xbff0000000000000;
  }
  *(undefined1 *)(param_1 + 0x40) = 1;
  return;
}



/* Entry: 1081f309c; end: 1081f3927;  */

void FUN_1081f309c(undefined8 *param_1,long *param_2,undefined8 *param_3,long *param_4,uint *param_5
                  )

{
  long lVar1;
  undefined1 uVar2;
  bool bVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  double *pdVar7;
  double *pdVar8;
  long *plVar9;
  undefined8 *puVar10;
  ulong uVar11;
  int iVar12;
  int iVar13;
  undefined8 uVar14;
  int iVar15;
  long lVar16;
  ulong uVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  int iStack_6fc;
  double dStack_6d8;
  undefined1 auStack_6c8 [240];
  long lStack_5d8;
  long lStack_570;
  undefined4 uStack_508;
  undefined2 uStack_504;
  undefined1 uStack_502;
  undefined1 uStack_501;
  char cStack_4f2;
  char cStack_4f1;
  double dStack_4f0;
  double dStack_4e8;
  double dStack_4e0;
  double dStack_4d8;
  double dStack_4d0;
  char cStack_4c8;
  double dStack_4c0;
  double dStack_4b8;
  double dStack_4b0;
  undefined1 uStack_4a8;
  double dStack_4a0;
  double dStack_498;
  double dStack_490;
  undefined1 uStack_488;
  double dStack_480;
  double dStack_478;
  double dStack_470;
  double dStack_468;
  double dStack_460;
  double dStack_458;
  double dStack_450;
  double dStack_448;
  undefined8 auStack_440 [30];
  long alStack_350 [26];
  undefined4 uStack_280;
  undefined2 uStack_27c;
  byte abStack_27a [10];
  double adStack_270 [30];
  long alStack_180 [26];
  undefined4 uStack_b0;
  undefined2 uStack_ac;
  byte abStack_aa [26];
  
  if (((((double)param_4[0xc] <= (double)param_2[0xe]) &&
       ((double)param_2[0xc] <= (double)param_4[0xe])) &&
      ((double)param_4[0xd] <= (double)param_2[0xf])) &&
     ((double)param_2[0xd] <= (double)param_4[0xf])) {
    plVar9 = param_2;
    FUN_1081f23a0(param_2,param_4,&cStack_4f1,&cStack_4f2);
    iVar5 = (int)plVar9;
    if (iVar5 < 0) {
      plVar9 = param_4;
      FUN_1081f23a0(param_4,param_2,&cStack_4f2,&cStack_4f1);
      iVar5 = (int)plVar9;
      if (iVar5 < 0) {
        if ((*(char *)((long)param_2 + 0x9b) == '\x01') &&
           (*(char *)((long)param_4 + 0x9b) == '\x01')) {
          uStack_504 = 0;
          func_0x0001081f5fc0(auStack_6c8);
          uStack_508 = 0;
          func_0x0001081f6114(&uStack_502);
          uStack_ac = 0;
          func_0x0001081f5fc0(adStack_270);
          uStack_b0 = 0;
          func_0x0001081f6114(abStack_aa);
          uStack_27c = 0;
          func_0x0001081f5fc0(auStack_440);
          uStack_280 = 0;
          func_0x0001081f6114(abStack_27a);
          pdVar7 = (double *)*param_2;
          func_0x0001081f5d4c();
          dStack_458 = pdVar7[1];
          dStack_460 = *pdVar7;
          func_0x0001081f5fb8();
          dStack_448 = pdVar7[1];
          dStack_450 = *pdVar7;
          pdVar7 = (double *)*param_4;
          func_0x0001081f5d4c();
          dStack_478 = pdVar7[1];
          dStack_480 = *pdVar7;
          func_0x0001081f5ef0();
          dStack_468 = pdVar7[1];
          dStack_470 = *pdVar7;
          pdVar7 = (double *)*param_3;
          func_0x0001081f6084(*pdVar7);
          if ((int)pdVar7 == 0) {
            return;
          }
          func_0x0001081f5eb0(param_1);
          func_0x0001081f6074();
          if ((int)pdVar7 == 0) {
            return;
          }
          if (abStack_aa[0] < 2) {
LAB_1081f3390:
            if (abStack_27a[0] < 2) {
LAB_1081f3408:
              iStack_6fc = 0;
              dVar19 = 1.79769313486232e+308;
              do {
                iVar5 = 0;
                iVar12 = 0;
                dVar23 = 1.79769313486232e+308;
                for (uVar11 = 0; uVar11 < abStack_27a[0]; uVar11 = uVar11 + 1) {
                  FUN_1081ee7e4(param_2[0x10],alStack_350[uVar11],param_2[0x11]);
                  if ((int)pdVar7 != 0) {
                    puVar10 = auStack_440 + 1;
                    for (uVar17 = 0; uVar17 < abStack_aa[0]; uVar17 = uVar17 + 1) {
                      FUN_1081ee7e4(param_4[0x10],alStack_180[uVar17],param_4[0x11]);
                      dVar18 = dVar23;
                      iVar15 = iVar5;
                      iVar13 = iVar12;
                      if ((int)pdVar7 != 0) {
                        dVar18 = adStack_270[uVar11 * 2];
                        func_0x0001081f5de4(dVar18,adStack_270[uVar11 * 2 + 1],puVar10[-1],*puVar10)
                        ;
                        iVar15 = (int)uVar17;
                        iVar13 = (int)uVar11;
                        if (dVar23 <= dVar18) {
                          dVar18 = dVar23;
                          iVar15 = iVar5;
                          iVar13 = iVar12;
                        }
                      }
                      puVar10 = puVar10 + 2;
                      dVar23 = dVar18;
                      iVar5 = iVar15;
                      iVar12 = iVar13;
                    }
                  }
                }
                bVar3 = 1.79769313486232e+308 <= dVar23;
                bVar4 = dVar23 == 1.79769313486232e+308;
                if (bVar4) break;
                pdVar7 = adStack_270 + (long)iVar5 * 2;
                func_0x0001081f5f7c(alStack_350[iVar12],param_2[0x10],param_2[0x11]);
                if (((!bVar3 || bVar4) &&
                    (func_0x0001081f5f7c(alStack_180[iVar5],param_4[0x10],param_4[0x11]),
                    !bVar3 || bVar4)) &&
                   (pdVar8 = pdVar7, FUN_1081de864(pdVar7,auStack_440 + (long)iVar12 * 2),
                   (int)pdVar8 != 0)) {
                  lStack_5d8 = alStack_350[iVar12];
                  lStack_570 = alStack_180[iVar5];
                  goto LAB_1081f38ac;
                }
                dVar23 = *pdVar7;
                dVar18 = adStack_270[(long)iVar5 * 2 + 1];
                func_0x0001081f5f54(dVar23,dVar18,auStack_440[(long)iVar12 * 2],
                                    auStack_440[(long)iVar12 * 2 + 1]);
                dVar18 = dVar18 * dVar18;
                dVar24 = dVar18 + dVar23 * dVar23;
                if (dVar19 < dVar24 || iStack_6fc == 5) {
                  return;
                }
                func_0x0001081f5e98(*param_1);
                plVar9 = (long *)*param_1;
                dStack_460 = dVar23;
                dStack_458 = dVar18;
                func_0x0001081f5ec8(*(undefined8 *)(*plVar9 + 0x38));
                iVar5 = (int)plVar9;
                dVar23 = dStack_460 + dVar23;
                dStack_448 = dStack_458 + dVar18;
                dVar19 = dStack_460;
                dStack_450 = dVar23;
                func_0x0001081f5eb0(param_3);
                func_0x0001081f6084();
                if (iVar5 == 0) break;
                iStack_6fc = iStack_6fc + 1;
                func_0x0001081f5e98(*param_3);
                pdVar7 = (double *)*param_3;
                dStack_480 = dVar23;
                dStack_478 = dVar19;
                func_0x0001081f5ec8(*(undefined8 *)((long)*pdVar7 + 0x38));
                dStack_470 = dStack_480 + dVar23;
                dStack_468 = dStack_478 + dVar19;
                func_0x0001081f5eb0(param_1);
                func_0x0001081f6074();
                dVar19 = dVar24;
              } while ((int)pdVar7 != 0);
              dStack_490 = -1.0;
              uStack_488 = 0;
              dStack_498 = NAN;
              dStack_4a0 = NAN;
              dStack_4b0 = -1.0;
              uStack_4a8 = 0;
              dStack_4b8 = NAN;
              dStack_4c0 = NAN;
              uVar14 = *param_3;
              lVar16 = *param_4;
              func_0x0001081f5d4c(lVar16);
              pdVar7 = &dStack_4a0;
              func_0x0001081f5f9c(pdVar7,uVar14,lVar16,*param_1);
              uVar14 = *param_3;
              func_0x0001081f5ef0();
              func_0x0001081f5f9c(&dStack_4c0,uVar14,pdVar7,*param_1);
              dVar23 = dStack_490;
              dVar19 = dStack_4b0;
              dVar18 = dStack_490;
              if (dStack_490 <= dStack_4b0) {
                dVar18 = dStack_4b0;
              }
              dVar20 = 0.0;
              dVar24 = dStack_4b0;
              if (dStack_490 <= dStack_4b0) {
                dVar24 = dStack_490;
              }
              dVar22 = (double)param_2[0x10];
              dVar21 = dVar22;
              if (dVar22 <= dVar24) {
                dVar21 = dVar24;
              }
              dVar24 = (double)param_2[0x11];
              if (dVar18 <= (double)param_2[0x11]) {
                dVar24 = dVar18;
              }
              if (dVar24 < dVar21) {
                return;
              }
              uVar2 = dVar21 == dVar22;
              if ((bool)uVar2) {
                dStack_4d0 = -1.0;
                func_0x0001081f5ee4();
                cStack_4c8 = 0;
                dStack_4e0 = dVar18;
                dStack_4d8 = dVar20;
                func_0x0001081f5d4c(*param_2);
                func_0x0001081f5fc8();
                pdVar7 = (double *)*param_2;
                func_0x0001081f5d4c();
                dVar20 = pdVar7[1];
                dVar18 = *pdVar7;
                func_0x0001081f5f30(dVar18,dStack_4e0);
                if ((bool)uVar2) goto LAB_1081f371c;
                if (dVar19 < dVar23) {
LAB_1081f36f8:
                  pdVar7 = (double *)*param_4;
                  func_0x0001081f5d4c();
                  dVar19 = dStack_4a0;
                  dVar23 = dStack_498;
                }
                else {
LAB_1081f3764:
                  func_0x0001081f5ef0();
                  dVar19 = dStack_4c0;
                  dVar23 = dStack_4b8;
                }
                dVar19 = dVar19 - *pdVar7;
                dVar23 = dVar23 - pdVar7[1];
              }
              else {
                pdVar7 = (double *)*param_4;
                uVar2 = dStack_490 == dStack_4b0;
                if (dStack_490 <= dStack_4b0) {
                  func_0x0001081f5d4c();
                  dVar18 = dStack_4a0;
                  dVar20 = dStack_498;
                  func_0x0001081f5f30(dStack_4a0,*pdVar7);
                  if (!(bool)uVar2) goto LAB_1081f3764;
                }
                else {
                  FUN_1081f2344();
                  dVar18 = dStack_4c0;
                  dVar20 = dStack_4b8;
                  func_0x0001081f5f30(dStack_4c0,*pdVar7);
                  if (!(bool)uVar2) goto LAB_1081f36f8;
                }
LAB_1081f371c:
                dStack_4d0 = -1.0;
                cStack_4c8 = 0;
                func_0x0001081f5ee4();
                dStack_4e0 = dVar18;
                dStack_4d8 = dVar20;
                func_0x0001081f5fb8();
                func_0x0001081f5fc8();
                func_0x0001081f5fb8();
                dVar19 = *pdVar7 - dStack_4e0;
                dVar23 = pdVar7[1] - dStack_4d8;
              }
              dVar23 = dStack_6d8 * dVar23;
              dVar19 = dVar23 + dVar19 * (double)alStack_350;
              uVar14 = 0;
              if (0.0 <= dVar19) {
                return;
              }
              dStack_4d0 = -1.0;
              func_0x0001081f5ee4();
              cStack_4c8 = '\0';
              dVar18 = dVar24 - dVar21;
              dStack_4e0 = dVar19;
              dStack_4d8 = (double)uVar14;
LAB_1081f37b8:
              do {
                dVar18 = dVar18 * 0.5;
                dVar19 = ABS(dVar18);
                if (dVar19 < 8.881784197001252e-16) {
                  return;
                }
                func_0x0001081f5e98(*param_1);
                dStack_4f0 = dVar19;
                dStack_4e8 = dVar23;
                func_0x0001081f5f9c(&dStack_4e0,*param_1,&dStack_4f0,*param_3);
                bVar3 = cStack_4c8 != '\0';
                bVar4 = cStack_4c8 == '\x01';
                if (bVar4) {
                  dVar23 = (double)param_4[0x10];
                  func_0x0001081f5f7c(dStack_4d0,dVar23,param_4[0x11]);
                  if (bVar3 && !bVar4) goto LAB_1081f37b8;
                }
                else if (dStack_4d0 < 0.0) goto LAB_1081f37b8;
                dVar19 = dStack_4f0;
                dVar23 = dStack_4e8;
                func_0x0001081f5f54(dStack_4f0,dStack_4e8,dStack_4e0,dStack_4d8);
                dVar23 = dStack_6d8 * dVar23;
                dVar24 = -dVar18;
                if (0.0 <= dVar18 == 0.0 <= dVar23 + dVar19 * (double)alStack_350) {
                  dVar24 = dVar18;
                }
                pdVar7 = &dStack_4f0;
                FUN_1081de864(pdVar7,&dStack_4e0);
                dVar18 = dVar24;
              } while ((int)pdVar7 == 0);
              uVar11 = param_3[0x85];
              FUN_1081f2374(dStack_4d0);
              if ((uVar11 & 1) == 0) {
                return;
              }
              uStack_501 = 1;
              func_0x0001081f6160(auStack_6c8,&dStack_4f0);
LAB_1081f38ac:
              if ((double)param_2[0x10] == 0.0) {
                *(undefined1 *)((long)param_1 + 0x444) = 1;
              }
              if ((double)param_2[0x11] == 1.0) {
                *(undefined1 *)((long)param_1 + 0x445) = 1;
              }
              param_2[0x10] = lStack_5d8;
              param_2[0x11] = lStack_5d8;
              if ((double)param_4[0x10] == 0.0) {
                *(undefined1 *)((long)param_3 + 0x444) = 1;
              }
              if ((double)param_4[0x11] == 1.0) {
                *(undefined1 *)((long)param_3 + 0x445) = 1;
              }
              param_4[0x10] = lStack_570;
              param_4[0x11] = lStack_570;
              uVar6 = 2;
              goto LAB_1081f3400;
            }
            iVar5 = 0;
            for (uVar11 = 0; uVar11 < abStack_27a[0]; uVar11 = uVar11 + 1) {
              lVar16 = 2;
              do {
                func_0x0001081f6188();
                iVar5 = iVar5 + (int)pdVar7;
                lVar16 = lVar16 + -1;
              } while (lVar16 != 0);
            }
            if (iVar5 != 2) {
              pdVar7 = &dStack_480;
              FUN_1081f3928(pdVar7,*param_1);
              if (((ulong)pdVar7 & 1) == 0) goto LAB_1081f3408;
            }
          }
          else {
            iVar5 = 0;
            for (uVar11 = 0; uVar11 < abStack_aa[0]; uVar11 = uVar11 + 1) {
              lVar16 = 2;
              do {
                func_0x0001081f6188();
                iVar5 = iVar5 + (int)pdVar7;
                lVar16 = lVar16 + -1;
              } while (lVar16 != 0);
            }
            if (iVar5 != 2) {
              pdVar7 = &dStack_460;
              FUN_1081f3928(pdVar7,*param_3);
              if (((ulong)pdVar7 & 1) == 0) goto LAB_1081f3390;
            }
          }
        }
        else if (((*(byte *)((long)param_2 + 0x9a) & 1) != 0) ||
                (*(char *)((long)param_4 + 0x9a) == '\x01')) {
          plVar9 = param_2;
          FUN_1081f2718(param_2,*param_4);
          uVar6 = (uint)plVar9;
          if (1 < uVar6) {
            FUN_1081f2718(param_4,*param_2);
            uVar6 = (uint)param_4;
          }
          uVar6 = (uint)(uVar6 != 0);
          goto LAB_1081f3400;
        }
        uVar6 = 1;
LAB_1081f3400:
        *param_5 = uVar6;
        return;
      }
    }
    if (iVar5 == 2) {
      if ((param_2[9] == 0) || (*(long *)(param_2[9] + 8) == 0)) {
        lVar16 = 0x80;
        if (cStack_4f1 == '\0') {
          lVar16 = 0x88;
        }
        lVar1 = 0x88;
        if (cStack_4f1 == '\0') {
          lVar1 = 0x80;
        }
        *(undefined8 *)((long)param_2 + lVar1) = *(undefined8 *)((long)param_2 + lVar16);
      }
      puVar10 = (undefined8 *)param_4[9];
      if (puVar10 != (undefined8 *)0x0) {
        if (puVar10[1] != 0) goto LAB_1081f3118;
        if ((long *)*puVar10 != param_2) {
          return;
        }
      }
      lVar16 = 0x80;
      if (cStack_4f2 == '\0') {
        lVar16 = 0x88;
      }
      lVar1 = 0x88;
      if (cStack_4f2 == '\0') {
        lVar1 = 0x80;
      }
      *(undefined8 *)((long)param_4 + lVar1) = *(undefined8 *)((long)param_4 + lVar16);
      uVar6 = 2;
      goto LAB_1081f311c;
    }
  }
LAB_1081f3118:
  uVar6 = 1;
LAB_1081f311c:
  *param_5 = uVar6;
  return;
}



/* Entry: 1081f3928; end: 1081f3a5f;  */

void FUN_1081f3928(undefined8 param_1,long *param_2)

{
  long *unaff_x19;
  double *unaff_x20;
  undefined1 *puVar1;
  undefined1 *puVar2;
  ulong uVar3;
  undefined1 auStack_240 [448];
  undefined4 uStack_80;
  undefined2 uStack_7c;
  byte abStack_7a [10];
  double dStack_70;
  double dStack_68;
  double dStack_60;
  double dStack_58;
  
  puVar2 = auStack_240;
  puVar1 = auStack_240;
  func_0x0001081f5f1c();
  (**(code **)(*param_2 + 0x68))();
  if ((int)param_2 != 0) {
    dStack_70 = unaff_x20[2] + (unaff_x20[3] - unaff_x20[1]);
    dStack_68 = unaff_x20[3] + (*unaff_x20 - unaff_x20[2]);
    dStack_58 = unaff_x20[3];
    dStack_60 = unaff_x20[2];
    uStack_7c = 0;
    func_0x0001081f5fc0(auStack_240);
    uStack_80 = 0;
    func_0x0001081f6114(abStack_7a);
    func_0x0001081f6064(*(undefined8 *)(*unaff_x19 + 0x60));
    for (uVar3 = 0; uVar3 < abStack_7a[0]; uVar3 = uVar3 + 1) {
      FUN_1081de864(puVar2,&dStack_60);
      puVar2 = puVar2 + 0x10;
    }
    dStack_60 = *unaff_x20 + (unaff_x20[3] - unaff_x20[1]);
    dStack_58 = unaff_x20[1] + (*unaff_x20 - unaff_x20[2]);
    dStack_68 = unaff_x20[1];
    dStack_70 = *unaff_x20;
    func_0x0001081f6064(*(undefined8 *)(*unaff_x19 + 0x60));
    for (uVar3 = 0; uVar3 < abStack_7a[0]; uVar3 = uVar3 + 1) {
      FUN_1081de864(puVar1,&dStack_70);
      puVar1 = puVar1 + 0x10;
    }
  }
  return;
}



/* Entry: 1081f3a60; end: 1081f3ae3;  */

bool FUN_1081f3a60(long param_1,long param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x440);
  *(int *)(param_1 + 0x440) = iVar1 + -1;
  if (0 < iVar1) {
    *(undefined8 *)(param_2 + 0x58) = *(undefined8 *)(param_1 + 0x438);
    *(long *)(param_1 + 0x438) = param_2;
    *(undefined1 *)(param_2 + 0x9c) = 1;
  }
  return 0 < iVar1;
}



/* Entry: 1081f3ae4; end: 1081f3b53;  */

void FUN_1081f3ae4(undefined8 param_1,long param_2)

{
  long lVar1;
  long unaff_x21;
  long *plVar2;
  
  func_0x0001081f60ec();
  plVar2 = *(long **)(param_2 + 0x48);
  while (plVar2 != (long *)0x0) {
    lVar1 = *plVar2;
    plVar2 = (long *)plVar2[1];
    if ((lVar1 != unaff_x21) && ((*(byte *)(lVar1 + 0x9c) & 1) == 0)) {
      func_0x0001081f2968();
      func_0x0001081f2968();
      if ((int)lVar1 != 0) {
        func_0x0001081f61d0();
        FUN_1081f2fa0();
      }
    }
  }
  return;
}



/* Entry: 1081f3b54; end: 1081f3b8b;  */

bool FUN_1081f3b54(long param_1,long param_2,long param_3)

{
  if (param_2 == 0) {
    *(long *)(param_1 + 0x428) = param_3;
    if (param_3 != 0) {
      *(undefined8 *)(param_3 + 0x50) = 0;
    }
  }
  else {
    *(long *)(param_2 + 0x58) = param_3;
    if (param_3 != 0) {
      *(long *)(param_3 + 0x50) = param_2;
      return *(double *)(param_3 + 0x80) <= *(double *)(param_3 + 0x88);
    }
  }
  return true;
}



/* Entry: 1081f3b8c; end: 1081f3c9b;  */

long FUN_1081f3b8c(undefined8 *param_1,long param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  int iVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  int iStack_54;
  
  lVar3 = param_2;
  FUN_1081f2638(param_2,*param_1);
  if ((int)lVar3 != 0) {
    puVar6 = *(undefined8 **)(param_2 + 0x48);
    do {
      while( true ) {
        if (puVar6 == (undefined8 *)0x0) {
          return lVar3;
        }
        uVar1 = *puVar6;
        puVar6 = (undefined8 *)puVar6[1];
        puVar4 = param_1;
        FUN_1081f309c(param_1,param_2,param_3,uVar1,&iStack_54);
        iVar2 = (int)puVar4;
        if (0 < iVar2) break;
        func_0x0001081f6108();
        func_0x0001081f2968();
        if (iVar2 != 0) {
          FUN_1081f2fa0(param_1,param_2);
        }
        uVar5 = uVar1;
        func_0x0001081f2968(uVar1,param_2);
        if ((int)uVar5 != 0) {
          FUN_1081f2fa0(param_3,uVar1);
        }
      }
      if (iStack_54 == 2) {
        FUN_1081f2638(uVar1,*param_3);
        func_0x0001081f6108();
        FUN_1081f3ae4();
      }
    } while (iVar2 != 2);
    FUN_1081f2638(param_2,*param_1);
    FUN_1081f3ae4(uVar1,param_2,param_3);
  }
  return lVar3;
}



/* Entry: 1081f3c9c; end: 1081f3eab;  */

uint FUN_1081f3c9c(undefined8 param_1,double param_2,undefined8 param_3,double param_4,
                  undefined8 *param_5)

{
  undefined1 in_ZR;
  undefined1 uVar1;
  undefined1 uVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  undefined8 *unaff_x20;
  undefined8 *unaff_x21;
  uint uVar6;
  
  func_0x0001081f60ec();
  func_0x0001081f5d5c(*param_5);
  func_0x0001081f5ebc();
  func_0x0001081f5d5c();
  uVar6 = 0;
  func_0x0001081f5dc8();
  uVar1 = false;
  if (((bool)in_ZR) && (uVar1 = false, !NAN(param_2) && !NAN(param_4))) {
    uVar1 = param_2 == param_4;
  }
  if ((bool)uVar1) {
    func_0x0001081f5d5c(*unaff_x21);
    param_2 = 0.0;
    func_0x0001081f6094(0);
    uVar6 = 5;
  }
  iVar5 = (int)*unaff_x21;
  func_0x0001081f5d5c();
  func_0x0001081f5e24();
  func_0x0001081f5dc8();
  uVar2 = false;
  if (((bool)uVar1) && (uVar2 = false, !NAN(param_2) && !NAN(param_4))) {
    uVar2 = param_2 == param_4;
  }
  if ((bool)uVar2) {
    uVar6 = uVar6 | 9;
    iVar5 = (int)*unaff_x21;
    func_0x0001081f5d5c();
    param_2 = 1.0;
    func_0x0001081f6094(0);
  }
  func_0x0001081f5ea8();
  func_0x0001081f5ebc();
  func_0x0001081f5d5c();
  func_0x0001081f5dc8();
  uVar1 = false;
  if (((bool)uVar2) && (uVar1 = false, !NAN(param_2) && !NAN(param_4))) {
    uVar1 = param_2 == param_4;
  }
  if ((bool)uVar1) {
    uVar6 = uVar6 | 6;
    func_0x0001081f5ea8();
    param_2 = 0.0;
    func_0x0001081f6094(0x3ff0000000000000);
  }
  func_0x0001081f5ea8();
  func_0x0001081f5e24();
  func_0x0001081f5dc8();
  bVar3 = false;
  if (((bool)uVar1) && (bVar3 = false, !NAN(param_2) && !NAN(param_4))) {
    bVar3 = param_2 == param_4;
  }
  if (bVar3) {
    uVar6 = uVar6 | 10;
    func_0x0001081f5ea8();
    func_0x0001081f6094(0x3ff0000000000000,0x3ff0000000000000);
  }
  if ((uVar6 & 0x55555555) == 0) {
    iVar4 = (int)*unaff_x21;
    func_0x0001081f5d5c();
    func_0x0001081f5ebc();
    func_0x0001081f5d5c();
    func_0x0001081f5e80();
    iVar5 = 0;
    if (iVar4 != 0) {
      uVar6 = uVar6 | 5;
      iVar5 = (int)*unaff_x21;
      func_0x0001081f5d5c();
      func_0x0001081f5ebc();
      func_0x0001081f5d5c();
      func_0x0001081f5f60(0,0);
    }
  }
  if ((uVar6 & 0xfffffff9) == 0) {
    iVar4 = (int)*unaff_x21;
    func_0x0001081f5d5c();
    func_0x0001081f5e24();
    func_0x0001081f5e80();
    iVar5 = 0;
    if (iVar4 != 0) {
      uVar6 = uVar6 | 9;
      iVar5 = (int)*unaff_x21;
      func_0x0001081f5d5c();
      func_0x0001081f5e24();
      func_0x0001081f5f60(0,0x3ff0000000000000);
    }
  }
  if ((uVar6 & 6) == 0) {
    func_0x0001081f5ea8();
    func_0x0001081f5ebc();
    func_0x0001081f5d5c();
    func_0x0001081f5e80();
    if (iVar5 != 0) {
      uVar6 = uVar6 | 6;
      func_0x0001081f5ea8();
      func_0x0001081f5ebc();
      func_0x0001081f5d5c();
      func_0x0001081f5f60(0x3ff0000000000000,0);
    }
  }
  if ((uVar6 & 0xaaaaaaaa) == 0) {
    func_0x0001081f5ea8();
    func_0x0001081f5e24();
    func_0x0001081f5e80();
    if (iVar5 != 0) {
      uVar6 = uVar6 | 10;
      func_0x0001081f5ea8();
      FUN_1081f2b78(*unaff_x20);
      FUN_1081e1a94(0x3ff0000000000000,0x3ff0000000000000);
    }
  }
  return uVar6;
}



/* Entry: 1081f3eac; end: 1081f5447;  */

ulong FUN_1081f3eac(double param_1,double *param_2,double *param_3,double param_4,
                   undefined8 *param_5,undefined8 param_6,long param_7)

{
  ulong *puVar1;
  ushort uVar2;
  double **ppdVar3;
  code *pcVar4;
  undefined1 uVar5;
  undefined1 in_ZR;
  undefined1 uVar6;
  bool bVar7;
  char cVar8;
  int iVar9;
  int iVar10;
  ulong *puVar11;
  ulong *puVar12;
  ulong *puVar13;
  ulong *puVar14;
  ulong *puVar15;
  long *plVar16;
  long lVar17;
  double **ppdVar18;
  double ***pppdVar19;
  long *plVar20;
  bool bVar21;
  undefined8 uVar22;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  long extraout_x8_03;
  long lVar23;
  long extraout_x8_04;
  long extraout_x8_05;
  long extraout_x8_06;
  long extraout_x8_07;
  long extraout_x8_08;
  long extraout_x8_09;
  long extraout_x8_10;
  long extraout_x8_11;
  long extraout_x8_12;
  code *extraout_x8_13;
  code *extraout_x8_14;
  code *extraout_x8_15;
  code *extraout_x8_16;
  uint extraout_w9;
  undefined8 *puVar24;
  double **ppdVar25;
  double *pdVar26;
  long unaff_x19;
  ulong *unaff_x20;
  long *plVar27;
  ulong *unaff_x21;
  uint uVar28;
  ulong uVar29;
  ulong *puVar30;
  uint uVar31;
  uint uVar32;
  ulong uVar33;
  ulong *puVar34;
  ulong *puVar35;
  undefined8 *puVar36;
  ulong *unaff_x24;
  ulong *puVar37;
  long lVar38;
  ulong uVar39;
  ulong unaff_x30;
  double *pdVar40;
  double dVar41;
  double in_register_00005008;
  double dVar42;
  double *pdVar43;
  double dVar44;
  double dVar45;
  double dVar46;
  double dVar47;
  double *pdVar48;
  double *pdStack_6c0;
  ulong uStack_6b8;
  int iStack_6a4;
  int iStack_654;
  double dStack_650;
  double dStack_648;
  double *pdStack_640;
  double dStack_638;
  double dStack_630;
  double *pdStack_628;
  char cStack_620;
  double dStack_618;
  undefined8 uStack_608;
  undefined1 uStack_600;
  double dStack_5c0;
  double dStack_5b8;
  byte bStack_5a8;
  double **ppdStack_1c0;
  undefined8 uStack_1b8;
  uint uStack_1b0;
  double dStack_1a0;
  double *pdStack_198;
  undefined8 uStack_190;
  byte bStack_188;
  
  func_0x0001081f60ec();
  uVar22 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  *(undefined1 *)(param_7 + 0x1c8) = 1;
  *(undefined1 *)(param_7 + 0x1c6) = 0;
  *(undefined4 *)(param_7 + 0x1c0) = 0;
  cVar8 = (char)*param_5;
  func_0x0001081f616c();
  *(char *)(unaff_x19 + 0x1c7) = cVar8 + '\x04';
  uVar29 = unaff_x21[0x85];
  uVar33 = unaff_x20[0x85];
  puVar11 = unaff_x21;
  FUN_1081f309c();
  iVar9 = (int)puVar11;
  if (iVar9 == 0) {
LAB_1081f53dc:
    func_0x0001081f5d6c(uVar22);
    if ((bool)in_ZR) {
      func_0x0001081f61f0(unaff_x30);
      return unaff_x30;
    }
  }
  else {
    in_ZR = iVar9 == 2 && iStack_654 == 2;
    if (iVar9 != 2 || iStack_654 != 2) {
      puVar11 = unaff_x21 + 0x85;
      puVar1 = unaff_x20 + 0x85;
      FUN_1081f20fc(uVar29,uVar33,unaff_x21 + 0x81);
      FUN_1081f20fc(uVar33,uVar29,unaff_x20 + 0x81);
      iStack_6a4 = 8;
      func_0x0001081f5ee4();
      pdVar40 = (double *)0x0;
      dVar42 = 0.0;
      pdStack_6c0 = (double *)0x0;
      uStack_6b8 = 0;
LAB_1081f3fa0:
      puVar30 = unaff_x21;
      FUN_1081f2ba8();
      if (puVar30 != (ulong *)0x0) {
        puVar34 = unaff_x20;
        FUN_1081f2ba8();
        if (puVar34 == (ulong *)0x0) {
LAB_1081f3fd4:
          if ((*(byte *)((long)unaff_x20 + 0x446) & 1) != 0) goto LAB_1081f53dc;
          if ((puVar30[0x13] & 1) != 0) goto LAB_1081f49d0;
          *(undefined2 *)((long)unaff_x21 + 0x444) = 0;
          *(undefined2 *)((long)unaff_x20 + 0x444) = 0;
          func_0x0001081f6178();
          puVar12 = puVar34;
          FUN_1081f5448();
          if ((int)puVar12 == 0) goto LAB_1081f49d0;
          puVar12 = unaff_x21;
          FUN_1081f3b8c(unaff_x21,puVar30,unaff_x20);
          if (((int)puVar12 == 0) ||
             (puVar30 = unaff_x21, FUN_1081f3b8c(unaff_x21,puVar34,unaff_x20),
             ((ulong)puVar30 & 1) == 0)) goto LAB_1081f53dc;
        }
        else {
          pdVar40 = (double *)puVar30[0x12];
          dVar42 = 0.0;
          param_2 = (double *)puVar34[0x12];
          in_ZR = (double)pdVar40 == (double)param_2;
          if ((double)param_2 < (double)pdVar40) goto LAB_1081f3fd4;
          if ((puVar30[0x13] & 1) == 0) {
            if ((byte)puVar34[0x13] != 0) goto LAB_1081f3fd4;
          }
          else if (((byte)puVar34[0x13] & 1) != 0) goto LAB_1081f49d0;
          *(undefined2 *)((long)unaff_x21 + 0x444) = 0;
          *(undefined2 *)((long)unaff_x20 + 0x444) = 0;
          puVar30 = puVar34;
          func_0x0001081f6178();
          puVar12 = puVar30;
          FUN_1081f5448();
          if ((int)puVar12 == 0) goto LAB_1081f49d0;
          puVar12 = unaff_x20;
          FUN_1081f3b8c(unaff_x20,puVar34,unaff_x21);
          if (((int)puVar12 == 0) ||
             (puVar34 = unaff_x20, FUN_1081f3b8c(unaff_x20,puVar30,unaff_x21), (int)puVar34 == 0))
          goto LAB_1081f53dc;
        }
        in_ZR = (int)unaff_x21[0x88] == 9;
        if (((int)unaff_x21[0x88] < 9) ||
           (in_ZR = (int)unaff_x20[0x88] == 9, (int)unaff_x20[0x88] < 9)) goto LAB_1081f4980;
        puVar34 = (ulong *)*puVar11;
        in_ZR = iStack_6a4 == 8;
        puVar30 = puVar34;
        if ((bool)in_ZR) {
          uStack_6b8 = puVar34[0x10];
          puVar12 = puVar34;
          FUN_1081f2d60();
          pdVar40 = (double *)puVar12[0x11];
          dVar42 = 0.0;
          pdStack_6c0 = pdVar40;
        }
        else if (puVar34 == (ulong *)0x0) goto LAB_1081f53dc;
LAB_1081f40e4:
        do {
          puVar37 = puVar30;
          uVar31 = 1;
          puVar12 = puVar37;
          while (puVar30 = (ulong *)puVar12[0xb], puVar30 != (ulong *)0x0) {
            pdVar40 = (double *)puVar30[0x10];
            dVar42 = 0.0;
            param_2 = (double *)puVar12[0x11];
            if ((double)param_2 < (double)pdVar40) {
              if (uVar31 < 9) goto LAB_1081f40e4;
              goto LAB_1081f4118;
            }
            uVar31 = uVar31 + 1;
            puVar12 = puVar30;
          }
          if (uVar31 < 9) goto LAB_1081f46a0;
LAB_1081f4118:
          FUN_1081f2c1c(unaff_x21,unaff_x20,puVar37,puVar12);
          puVar34 = (ulong *)0x0;
          puVar35 = (ulong *)0x0;
LAB_1081f4130:
          do {
            in_ZR = (char)puVar37[4] == '\x01';
            if (!(bool)in_ZR) {
              if ((puVar34 == (ulong *)0x0) || (puVar15 = puVar35, (puVar37[0x13] & 1) == 0)) {
                puVar15 = puVar34;
                puVar35 = (ulong *)0x0;
                goto LAB_1081f4168;
              }
joined_r0x0001081f4184:
              if ((puVar15 != (ulong *)0x0) && (puVar34 != (ulong *)0x0)) {
                dVar42 = (double)puVar34[0x10];
                puVar35 = (ulong *)puVar34[10];
                dVar44 = (double)puVar34[3];
                puVar37 = puVar34;
                func_0x0001081f2934(dVar44);
                dVar41 = (double)puVar34[7];
                if ((puVar35 != (ulong *)0x0) && (in_ZR = 0, (double)puVar35[0x11] == dVar42)) {
                  dVar46 = (double)puVar35[0x10];
                  pdVar40 = (double *)*unaff_x21;
                  pdStack_628 = (double *)0xbff0000000000000;
                  cStack_620 = '\0';
                  unaff_x24 = (ulong *)0xbff0000000000000;
                  uStack_608 = 0xbff0000000000000;
                  uStack_600 = 0;
                  dStack_638 = param_1;
                  dStack_630 = in_register_00005008;
                  dStack_618 = param_1;
                  (**(code **)((long)*pdVar40 + 0x70))(pdVar40,unaff_x21 + 0x81);
                  pdStack_640 = pdVar40;
                  dStack_5b8 = dVar42;
                  func_0x0001081f5e4c();
                  dVar45 = dVar42;
                  (**(code **)(extraout_x8 + 0x98))();
                  bVar7 = false;
                  plVar20 = (long *)*unaff_x20;
                  pdVar40 = (double *)0x0;
                  dStack_5c0 = dVar42;
                  pdVar48 = (double *)(dVar46 - dVar42);
                  dStack_1a0 = dVar45;
                  pdStack_198 = param_2;
LAB_1081f4248:
                  dVar45 = dStack_5c0;
                  bVar21 = false;
                  dStack_5c0 = dVar45;
                  do {
                    param_2 = (double *)((double)pdVar48 * 0.5);
                    dStack_5c0 = dStack_5c0 + (double)param_2;
                    in_ZR = !bVar21;
                    pdVar48 = (double *)-((double)pdVar48 * 0.5);
                    if ((bool)in_ZR) {
                      pdVar48 = param_2;
                    }
                    FUN_1081f2638(&pdStack_640,*unaff_x21);
                    if ((bStack_5a8 & 1) != 0) break;
                    pdVar43 = pdStack_640;
                    func_0x0001081f5e5c();
                    func_0x0001081f5e1c();
                    func_0x0001081f6140();
                    if (((ulong)pdVar43 & 1) != 0) {
                      if (!bVar7) break;
                      func_0x0001081f5e4c();
                      func_0x0001081f5e1c(*(undefined8 *)(extraout_x8_00 + 0x10));
                      func_0x0001081f6140();
                      dVar46 = 0.0;
                      if (((ulong)pdVar43 & 1) == 0) {
                        iVar9 = (int)*unaff_x21;
                        FUN_1081f2b78();
                        func_0x0001081f6140();
                        dVar46 = 1.0;
                        if (iVar9 == 0) {
                          dVar46 = dVar45;
                        }
                      }
                      func_0x0001081f5e1c(*(undefined8 *)(*plVar20 + 0x10),plVar20);
                      pdVar48 = &dStack_650;
                      FUN_1081de864(pdVar48,plVar20);
                      pdVar43 = (double *)0x0;
                      if (((ulong)pdVar48 & 1) == 0) {
                        uVar29 = *unaff_x20;
                        FUN_1081f2b78(uVar29);
                        pdVar48 = &dStack_650;
                        FUN_1081de864(pdVar48,uVar29);
                        param_2 = pdVar40;
                        pdVar43 = (double *)0x3ff0000000000000;
                        if ((int)pdVar48 == 0) {
                          pdVar43 = pdVar40;
                        }
                      }
                      bVar7 = false;
                      in_ZR = false;
                      if ((double)puVar35[0x10] < dVar46) {
                        bVar7 = false;
                        in_ZR = false;
                        if (!NAN(dVar46) && !NAN(dVar42)) {
                          bVar7 = dVar46 < dVar42;
                          in_ZR = dVar46 == dVar42;
                        }
                      }
                      if ((!bVar7) ||
                         (puVar13 = puVar35, func_0x0001081f2934(pdVar43), puVar13 == (ulong *)0x0))
                      break;
                      puVar34 = unaff_x21;
                      FUN_1081f3008(dVar46,unaff_x21,puVar35);
                      FUN_1081f306c();
                      if ((puVar35[8] & 1) == 0) {
                        puVar35[7] = 0xbff0000000000000;
                      }
                      *(undefined1 *)(puVar35 + 8) = 1;
                      if (((double)puVar13[0x10] < (double)pdVar43) &&
                         ((double)pdVar43 < (double)puVar13[0x11])) {
                        puVar37 = unaff_x20;
                        FUN_1081f3008(pdVar43,unaff_x20,puVar13);
                        if (dVar44 < dVar41) {
                          if ((puVar13[8] & 1) == 0) {
                            puVar13[7] = 0xbff0000000000000;
                          }
                          *(undefined1 *)(puVar13 + 8) = 1;
                          FUN_1081f306c(puVar37);
                          puVar13 = puVar37;
                        }
                        else {
                          FUN_1081f306c(puVar13);
                          if ((puVar37[4] & 1) == 0) {
                            puVar37[3] = 0xbff0000000000000;
                          }
                          *(undefined1 *)(puVar37 + 4) = 1;
                        }
                      }
                      goto LAB_1081f4490;
                    }
                    pdVar43 = pdStack_640;
                    func_0x0001081f5e5c();
                    func_0x0001081f5e1c();
                    pdStack_198 = (double *)pdVar43[1];
                    dStack_1a0 = *pdVar43;
                    FUN_1081f1fc8(dStack_5c0,&dStack_638,*unaff_x21,&dStack_1a0,plVar20);
                    pdVar43 = pdStack_628;
                    if (cStack_620 == '\x01') {
                      iVar9 = (int)*puVar1;
                      FUN_1081f2374(pdStack_628);
                      if (iVar9 != 0) goto LAB_1081f4318;
                    }
                    pdVar48 = (double *)-(double)pdVar48;
                    bVar21 = true;
                  } while( true );
                }
                goto LAB_1081f448c;
              }
              break;
            }
            if ((char)puVar37[8] != '\x01') {
              in_ZR = puVar35 == (ulong *)0x0;
              puVar15 = puVar12;
              if (!(bool)in_ZR) {
                puVar15 = puVar35;
              }
              goto joined_r0x0001081f4184;
            }
            puVar15 = puVar37;
            puVar35 = puVar37;
            if (puVar34 != (ulong *)0x0) {
              puVar15 = puVar34;
            }
LAB_1081f4168:
            puVar34 = puVar15;
            if (puVar37 == puVar12) {
              in_ZR = true;
              puVar15 = puVar12;
              goto joined_r0x0001081f4184;
            }
            puVar37 = (ulong *)puVar37[0xb];
          } while (puVar37 != (ulong *)0x0);
LAB_1081f467c:
          puVar34 = (ulong *)*puVar11;
          if (puVar34 == (ulong *)0x0) goto LAB_1081f46b0;
          if (((puVar30 == (ulong *)0x0) || (func_0x0001081f60fc(), extraout_x8_02 == 0)) ||
             (*(char *)((long)puVar30 + 0x9c) == '\x01')) goto LAB_1081f46a0;
        } while( true );
      }
      if ((*(byte *)((long)unaff_x21 + 0x446) & 1) != 0) goto LAB_1081f53dc;
LAB_1081f49d0:
      puVar30 = (ulong *)unaff_x21[0x86];
      if (puVar30 != (ulong *)0x0) {
        if (puVar30[0xb] != 0) {
          dVar41 = 0.0;
          do {
            unaff_x24 = (ulong *)0x0;
            puVar34 = puVar30;
            do {
              if (puVar34 == (ulong *)0x0) goto LAB_1081f4b1c;
              pdVar40 = (double *)puVar34[0x10];
              dVar42 = 0.0;
              in_ZR = (double)pdVar40 == dVar41;
              if (dVar41 <= (double)pdVar40) {
                if (unaff_x24 != (ulong *)0x0) {
                  param_2 = (double *)unaff_x24[0x11];
                  in_ZR = (double)param_2 == (double)pdVar40;
                  if ((double)param_2 < (double)pdVar40) goto LAB_1081f4a28;
                }
                unaff_x24 = puVar34;
              }
LAB_1081f4a28:
              puVar34 = (ulong *)puVar34[0xb];
            } while (puVar34 != (ulong *)0x0);
            if (unaff_x24 == (ulong *)0x0) break;
            puVar35 = (ulong *)0x0;
            puVar37 = (ulong *)0x0;
            dVar41 = (double)unaff_x24[0x11];
            puVar34 = (ulong *)0x0;
            puVar12 = puVar30;
            do {
              pdVar40 = (double *)puVar12[0x10];
              dVar42 = 0.0;
              in_ZR = (double)pdVar40 == dVar41;
              if (dVar41 <= (double)pdVar40) {
                if (puVar35 != (ulong *)0x0) {
                  param_2 = (double *)puVar35[0x10];
                  in_ZR = (double)param_2 == (double)pdVar40;
                  if ((double)param_2 < (double)pdVar40) goto LAB_1081f4a74;
                }
                puVar37 = puVar34;
                puVar35 = puVar12;
              }
LAB_1081f4a74:
              puVar15 = puVar12 + 0xb;
              puVar34 = puVar12;
              puVar12 = (ulong *)*puVar15;
            } while ((ulong *)*puVar15 != (ulong *)0x0);
            if (puVar35 != (ulong *)0x0) {
              dVar44 = dVar41 + (double)puVar35[0x10];
              func_0x0001081f5e4c();
              func_0x0001081f5ec8(*(undefined8 *)(extraout_x8_05 + 0x98));
              dStack_630 = -1.0;
              pdStack_628 = (double *)((ulong)pdStack_628 & 0xffffffffffffff00);
              pdVar40 = (double *)0x7ff8000000000000;
              dVar42 = NAN;
              pdStack_640 = (double *)0x7ff8000000000000;
              dStack_638 = NAN;
              dStack_1a0 = dVar44;
              pdStack_198 = param_2;
              func_0x0001081f5f9c(&pdStack_640,*unaff_x21,&dStack_1a0,*unaff_x20);
              in_ZR = (char)pdStack_628 == '\x01';
              if ((bool)in_ZR) {
                unaff_x24[0x11] = puVar35[0x11];
                dVar42 = (double)puVar35[6];
                pdVar40 = (double *)puVar35[5];
                param_2 = *(double **)((long)puVar35 + 0x31);
                *(undefined8 *)((long)unaff_x24 + 0x39) = *(undefined8 *)((long)puVar35 + 0x39);
                *(double **)((long)unaff_x24 + 0x31) = param_2;
                unaff_x24[6] = (ulong)dVar42;
                unaff_x24[5] = (ulong)pdVar40;
                if (puVar37 == (ulong *)0x0) {
                  unaff_x21[0x86] = puVar35[0xb];
                }
                else {
                  puVar37[0xb] = puVar35[0xb];
                }
              }
              puVar30 = (ulong *)unaff_x21[0x86];
            }
          } while( true );
        }
LAB_1081f4b1c:
        do {
          if (puVar30 == (ulong *)0x0) goto LAB_1081f53dc;
          in_ZR = 0;
          if (((char)puVar30[4] == '\x01') && (in_ZR = 0, (char)puVar30[8] == '\x01')) {
            dVar42 = (double)puVar30[3];
            in_ZR = dVar42 == 0.0;
            if (dVar42 < 0.0) goto LAB_1081f53dc;
            uVar33 = puVar30[0x10];
            uVar29 = *puVar30;
            func_0x0001081f5d4c(uVar29);
            lVar23 = unaff_x19;
            FUN_1081e1ad8(uVar33,dVar42,unaff_x19,uVar29);
            pdVar40 = (double *)puVar30[0x11];
            dVar42 = 0.0;
            uVar29 = puVar30[7];
            lVar38 = lVar23;
            func_0x0001081f5ef0();
            lVar17 = unaff_x19;
            FUN_1081e1ad8(pdVar40,uVar29,unaff_x19,lVar38);
            if (((int)lVar17 < 0) && (-1 < (int)(uint)lVar23)) {
              uVar2 = (ushort)(1 << (ulong)((uint)lVar23 & 0x1f));
              *(ushort *)(unaff_x19 + 0x1c0) = *(ushort *)(unaff_x19 + 0x1c0) & (uVar2 ^ 0xffff);
              *(ushort *)(unaff_x19 + 0x1c2) = *(ushort *)(unaff_x19 + 0x1c2) & (uVar2 ^ 0xffff);
            }
          }
          puVar30 = (ulong *)puVar30[0xb];
        } while (puVar30 != (ulong *)0x0);
      }
      puVar30 = unaff_x21;
      FUN_1081f3c9c(unaff_x21,unaff_x20,unaff_x19);
      uVar31 = (uint)puVar30;
      if ((*(char *)((long)unaff_x21 + 0x444) == '\x01') && (((ulong)puVar30 & 1) == 0)) {
        dStack_630 = -1.0;
        pdStack_628 = (double *)((ulong)pdStack_628 & 0xffffffffffffff00);
        func_0x0001081f5ee4();
        pdStack_640 = pdVar40;
        dStack_638 = dVar42;
        func_0x0001081f5e1c(*(undefined8 *)(*(long *)*unaff_x21 + 0x10),(long *)*unaff_x21);
        func_0x0001081f5f44();
        func_0x0001081f601c();
        if ((char)pdStack_628 == '\x01') {
          func_0x0001081f5e74(0,dStack_630);
        }
      }
      uVar6 = *(char *)((long)unaff_x21 + 0x445) == '\x01';
      if (((bool)uVar6) && ((uVar31 >> 1 & 1) == 0)) {
        func_0x0001081f5e30();
        FUN_1081f2b78(*unaff_x21);
        func_0x0001081f5f44();
        func_0x0001081f600c();
        func_0x0001081f60a4();
        if ((bool)uVar6) {
          func_0x0001081f5e74(0x3ff0000000000000,dStack_630);
        }
      }
      uVar6 = *(char *)((long)unaff_x20 + 0x444) == '\x01';
      if (((bool)uVar6) && ((uVar31 >> 2 & 1) == 0)) {
        func_0x0001081f5e30();
        func_0x0001081f5e1c(*(undefined8 *)(*(long *)*unaff_x20 + 0x10),(long *)*unaff_x20);
        func_0x0001081f601c();
        func_0x0001081f60a4();
        if ((bool)uVar6) {
          func_0x0001081f5e74(dStack_630,0);
        }
      }
      bVar7 = *(char *)((long)unaff_x20 + 0x445) == '\x01';
      in_ZR = bVar7 && uVar31 == 7;
      if (bVar7 && uVar31 < 8) {
        func_0x0001081f5e30();
        FUN_1081f2b78(*unaff_x20);
        func_0x0001081f600c();
        func_0x0001081f60a4();
        if ((bool)in_ZR) {
          func_0x0001081f5e74(dStack_630,0x3ff0000000000000);
        }
      }
      if ((*puVar11 != 0) && (func_0x0001081f60fc(), extraout_x8_06 != 0)) {
        func_0x0001081f3a90(unaff_x21);
        puVar34 = unaff_x20;
        func_0x0001081f3a90();
        puVar37 = (ulong *)unaff_x21[0x85];
        puVar12 = puVar34;
        if (((ulong)puVar30 & 1) == 0) {
          pdVar40 = (double *)puVar37[0x10];
          dVar42 = 1.1920928955078125e-07;
          in_ZR = (double)pdVar40 == 1.1920928955078125e-07;
          if ((double)pdVar40 < 1.1920928955078125e-07) {
            func_0x0001081f5e4c();
            func_0x0001081f5e1c(*(undefined8 *)(extraout_x8_07 + 0x10));
            puVar12 = puVar34;
            if (puVar37[9] != 0) {
              puVar12 = puVar37;
              FUN_1081f22ac(puVar37,puVar34);
              func_0x0001081f5eb0(unaff_x20);
              (**(code **)(extraout_x8_08 + 0x98))();
              pdStack_640 = pdVar40;
              dStack_638 = dVar42;
              func_0x0001081f5f00();
              unaff_x24 = puVar34;
              if ((int)puVar12 != 0) {
                func_0x0001081f602c(0);
              }
            }
          }
        }
        iVar9 = (int)puVar12;
        if ((uVar31 >> 2 & 1) == 0) {
          uVar29 = *puVar1;
          pdVar40 = *(double **)(uVar29 + 0x80);
          dVar42 = 1.1920928955078125e-07;
          in_ZR = (double)pdVar40 == 1.1920928955078125e-07;
          if ((double)pdVar40 < 1.1920928955078125e-07) {
            func_0x0001081f5eb0(unaff_x20);
            func_0x0001081f5e1c(*(undefined8 *)(extraout_x8_09 + 0x10));
            if (*(long *)(uVar29 + 0x48) != 0) {
              func_0x0001081f5ffc();
              pdVar48 = pdVar40;
              func_0x0001081f5e4c();
              (**(code **)(extraout_x8_10 + 0x98))();
              pdStack_640 = pdVar48;
              dStack_638 = dVar42;
              func_0x0001081f5f00();
              if (iVar9 != 0) {
                FUN_1081e17c0(pdVar40,0,unaff_x19,unaff_x24);
              }
            }
          }
        }
        if ((uVar31 >> 1 & 1) == 0) {
          uVar29 = *puVar11;
          FUN_1081f2d60();
          if (uVar29 == 0) goto LAB_1081f53dc;
          pdVar40 = *(double **)(uVar29 + 0x88);
          dVar42 = 0.9999998807907104;
          if (0.9999998807907104 < (double)pdVar40) {
            iVar9 = (int)*unaff_x21;
            FUN_1081f2b78();
            if (*(long *)(uVar29 + 0x48) != 0) {
              func_0x0001081f5ffc();
              func_0x0001081f5eb0(unaff_x20);
              (**(code **)(extraout_x8_11 + 0x98))();
              pdStack_640 = pdVar40;
              dStack_638 = dVar42;
              func_0x0001081f5f00();
              if (iVar9 != 0) {
                func_0x0001081f602c(0x3ff0000000000000);
              }
            }
          }
        }
        in_ZR = uVar31 == 7;
        if (uVar31 < 8) {
          uVar29 = *puVar1;
          FUN_1081f2d60();
          if (uVar29 == 0) goto LAB_1081f53dc;
          pdVar40 = *(double **)(uVar29 + 0x88);
          dVar42 = 0.9999998807907104;
          if (0.9999998807907104 < (double)pdVar40) {
            uVar33 = *unaff_x20;
            FUN_1081f2b78(uVar33);
            if (*(long *)(uVar29 + 0x48) != 0) {
              FUN_1081f22ac(uVar29,uVar33);
              pdVar48 = pdVar40;
              func_0x0001081f5e4c();
              (**(code **)(extraout_x8_12 + 0x98))();
              ppdVar18 = &pdStack_640;
              pdStack_640 = pdVar48;
              dStack_638 = dVar42;
              FUN_1081de864(ppdVar18,uVar33);
              if ((int)ppdVar18 != 0) {
                FUN_1081e17c0(pdVar40,0x3ff0000000000000,unaff_x19,uVar33);
              }
            }
          }
        }
        ppdStack_1c0 = &pdStack_640;
        uStack_1b8 = 0x2400000000;
        uStack_1b0 = 0;
        pppdVar19 = &ppdStack_1c0;
        FUN_1081f58d0();
        pppdVar19[6] = (double **)0x47efffffe0000000;
        do {
          while( true ) {
            if (puVar37 == (ulong *)0x0) goto LAB_1081f5120;
            puVar11 = puVar1;
            if (((puVar37[4] & 1) == 0) || ((char)puVar37[8] != '\x01')) break;
            puVar37 = (ulong *)puVar37[0xb];
          }
          while (puVar36 = (undefined8 *)*puVar11, puVar36 != (undefined8 *)0x0) {
            if (((int)uStack_1b0 < 0) || ((int)(uint)uStack_1b8 <= (int)uStack_1b0))
            goto LAB_1081f5408;
            ppdVar18 = ppdStack_1c0 + (ulong)uStack_1b0 * 8;
            func_0x0001081f5f6c();
            FUN_1081f59c4();
            func_0x0001081f5f90(*puVar36);
            (*extraout_x8_13)();
            func_0x0001081f5f6c();
            FUN_1081f59c4();
            func_0x0001081f5f90(*puVar37);
            (*extraout_x8_14)();
            func_0x0001081f5f6c();
            FUN_1081f59c4();
            func_0x0001081f5f90(*puVar37);
            (*extraout_x8_15)();
            func_0x0001081f5f90(*puVar36);
            (*extraout_x8_16)();
            func_0x0001081f5f6c();
            FUN_1081f59c4();
            pdVar40 = ppdVar18[6];
            if ((double)pdVar40 != 3.4028234663852886e+38) {
              uVar29 = (ulong)(uStack_1b0 & ((int)uStack_1b0 >> 0x1f ^ 0xffffffffU));
              lVar23 = (ulong)((uint)uStack_1b8 & ((int)(uint)uStack_1b8 >> 0x1f ^ 0xffffffffU)) + 1
              ;
              ppdVar3 = ppdStack_1c0 + 4;
              do {
                ppdVar25 = ppdVar3;
                if (uVar29 == 0) {
                  uStack_1b0 = uStack_1b0 + 1;
                  pppdVar19 = &ppdStack_1c0;
                  FUN_1081f58d0();
                  pppdVar19[6] = (double **)0x47efffffe0000000;
                  goto LAB_1081f50f8;
                }
                lVar23 = lVar23 + -1;
                if (lVar23 == 0) goto LAB_1081f5408;
                pdVar48 = *ppdVar18;
                pdVar43 = ppdVar18[1];
                pdVar26 = ppdVar25[-4];
                if ((((pdVar26 == pdVar48) || (pdVar26[0x11] == pdVar48[0x10])) ||
                    (pdVar26[0x10] == pdVar48[0x11])) ||
                   ((pdVar26 = ppdVar25[-3], pdVar26 == pdVar43 || (pdVar26[0x11] == pdVar43[0x10]))
                   )) break;
                uVar29 = uVar29 - 1;
                ppdVar3 = ppdVar25 + 8;
              } while (pdVar26[0x10] != pdVar43[0x11]);
              if ((double)pdVar40 < (double)ppdVar25[2]) {
                ppdVar25[-4] = pdVar48;
                ppdVar25[-3] = pdVar43;
                ppdVar25[2] = pdVar40;
                ppdVar25[3] = ppdVar18[7];
              }
              pdVar40 = ppdVar18[2];
              if ((double)ppdVar25[-2] <= (double)ppdVar18[2]) {
                pdVar40 = ppdVar25[-2];
              }
              ppdVar25[-2] = pdVar40;
              pdVar40 = ppdVar18[3];
              if ((double)ppdVar18[3] <= (double)ppdVar25[-1]) {
                pdVar40 = ppdVar25[-1];
              }
              ppdVar25[-1] = pdVar40;
              pdVar40 = ppdVar18[4];
              if ((double)*ppdVar25 <= (double)ppdVar18[4]) {
                pdVar40 = *ppdVar25;
              }
              *ppdVar25 = pdVar40;
              pdVar40 = ppdVar18[5];
              if ((double)ppdVar18[5] <= (double)ppdVar25[1]) {
                pdVar40 = ppdVar25[1];
              }
              ppdVar25[1] = pdVar40;
              ppdVar18[6] = (double *)0x47efffffe0000000;
            }
LAB_1081f50f8:
            puVar11 = puVar36 + 0xb;
          }
          puVar37 = (ulong *)puVar37[0xb];
        } while (puVar37 != (ulong *)0x0);
LAB_1081f5120:
        lVar38 = 0;
        iVar9 = 0;
        pdVar40 = &dStack_1a0;
        uVar29 = 0x3600000000;
        pdVar43 = (double *)0x7fffffff;
        dVar42 = 3.95252516672997e-323;
        pdVar48 = &dStack_1a0;
        for (lVar23 = 0; iVar10 = (int)uVar29, lVar23 < (int)uStack_1b0; lVar23 = lVar23 + 1) {
          if ((int)(uint)uStack_1b8 <= lVar23) goto LAB_1081f5408;
          dVar41 = (double)((long)ppdStack_1c0 + lVar38);
          if (iVar9 < (int)(uint)(uVar29 >> 0x21)) {
            pdVar48[iVar9] = dVar41;
            iVar10 = iVar9;
          }
          else {
            if (iVar9 == 0x7fffffff) goto LAB_1081f5404;
            dStack_648 = 1.06099789498857e-314;
            dStack_650 = 3.95252516672997e-323;
            pdVar48 = &dStack_650;
            uVar33 = (ulong)(iVar9 + 1);
            dVar42 = 1.5;
            pdVar43 = (double *)0x0;
            FUN_10840fe24();
            pdVar48[iVar10] = dVar41;
            if (iVar10 != 0) {
              _memcpy(pdVar48,pdVar40,(long)iVar10 << 3);
            }
            if ((uVar29 & 0x100000000) != 0) {
              _free(pdVar40);
            }
            uVar33 = uVar33 >> 3;
            if (0x7ffffffe < uVar33) {
              uVar33 = 0x7fffffff;
            }
            uVar29 = CONCAT44((int)uVar33 << 1,iVar10) | 0x100000000;
            pdVar40 = pdVar48;
          }
          iVar9 = iVar10 + 1;
          uVar29 = CONCAT44((int)(uVar29 >> 0x20),iVar9);
          lVar38 = lVar38 + 0x40;
        }
        if (1 < iVar9) {
          FUN_1081f5a8c((int)LZCOUNT(iVar9 + -2) * -2 + 0x40,pdVar48);
        }
        lVar23 = 0;
        while( true ) {
          if ((int)uStack_1b0 <= lVar23) {
            FUN_1081f5ca8(&stack0xffffffffffffff38);
            lVar23 = 0;
            uVar31 = *(byte *)(unaff_x19 + 0x1c6) - 1;
            func_0x0001081f5ee4();
            do {
              lVar23 = (long)(int)lVar23;
              do {
                lVar38 = lVar23;
                uVar28 = (uint)lVar38;
                in_ZR = uVar28 == uVar31;
                if ((int)uVar31 <= (int)uVar28) {
                  FUN_1081f599c(&ppdStack_1c0);
                  goto LAB_1081f53dc;
                }
                uVar28 = 1 << (ulong)(uVar28 & 0x1f);
                lVar23 = lVar38 + 1;
                uVar32 = (uint)lVar23;
              } while (((uVar28 & *(ushort *)(unaff_x19 + 0x1c0)) != 0) &&
                      ((*(ushort *)(unaff_x19 + 0x1c0) >> (ulong)(uVar32 & 0x1f) & 1) != 0));
              dVar44 = *(double *)(unaff_x19 + lVar38 * 8 + 0xf0);
              dVar41 = dVar44 + *(double *)(unaff_x19 + 0xf0 + (long)(int)uVar32 * 8);
              func_0x0001081f5ec8(*(undefined8 *)(*(long *)*unaff_x21 + 0x98));
              uStack_190 = 0xbff0000000000000;
              bStack_188 = 0;
              dStack_650 = dVar41;
              dStack_648 = dVar44;
              dStack_1a0 = dVar42;
              pdStack_198 = pdVar43;
              func_0x0001081f5f9c(&dStack_1a0,*unaff_x21,&dStack_650,*unaff_x20);
              if ((bStack_188 & 1) != 0) {
                uVar2 = *(ushort *)(unaff_x19 + 0x1c0);
                lVar17 = lVar38;
                if (((uVar28 & uVar2) == 0) &&
                   (lVar17 = lVar23, (1 << (ulong)(uVar32 & 0x1f) & (uint)uVar2) == 0)) {
                  func_0x0001081f61bc(uVar2 | uVar28);
                  uVar28 = extraout_w9;
                }
                else {
                  FUN_1081e1c48(unaff_x19,lVar17);
                  uVar31 = uVar31 - 1;
                  lVar23 = lVar38;
                }
                func_0x0001081f61bc(*(ushort *)(unaff_x19 + 0x1c0) | uVar28);
              }
            } while( true );
          }
          if (iVar10 <= lVar23) break;
          plVar20 = (long *)**(undefined8 **)pdVar40[lVar23];
          (**(code **)(*plVar20 + 0x10))();
          func_0x0001081f6160(unaff_x19,plVar20);
          lVar23 = lVar23 + 1;
        }
        goto LAB_1081f5408;
      }
      goto LAB_1081f53dc;
    }
    func_0x0001081f5d6c(uVar22);
    if ((bool)in_ZR) {
      puVar11 = unaff_x21;
      func_0x0001081f61f0(unaff_x21,unaff_x20,unaff_x19);
      func_0x0001081f60ec();
      func_0x0001081f5d5c(*puVar11);
      func_0x0001081f5ebc();
      func_0x0001081f5d5c();
      uVar29 = 0;
      func_0x0001081f5dc8();
      uVar6 = false;
      if (((bool)in_ZR) && (uVar6 = false, !NAN((double)param_2) && !NAN(param_4))) {
        uVar6 = (double)param_2 == param_4;
      }
      if ((bool)uVar6) {
        func_0x0001081f5d5c(*unaff_x21);
        param_2 = (double *)0x0;
        func_0x0001081f6094(0);
        uVar29 = 5;
      }
      iVar9 = (int)*unaff_x21;
      func_0x0001081f5d5c();
      func_0x0001081f5e24();
      func_0x0001081f5dc8();
      uVar5 = false;
      if (((bool)uVar6) && (uVar5 = false, !NAN((double)param_2) && !NAN(param_4))) {
        uVar5 = (double)param_2 == param_4;
      }
      if ((bool)uVar5) {
        uVar29 = (ulong)((uint)uVar29 | 9);
        iVar9 = (int)*unaff_x21;
        func_0x0001081f5d5c();
        param_2 = (double *)0x3ff0000000000000;
        func_0x0001081f6094(0);
      }
      func_0x0001081f5ea8();
      func_0x0001081f5ebc();
      func_0x0001081f5d5c();
      func_0x0001081f5dc8();
      uVar6 = false;
      if (((bool)uVar5) && (uVar6 = false, !NAN((double)param_2) && !NAN(param_4))) {
        uVar6 = (double)param_2 == param_4;
      }
      if ((bool)uVar6) {
        uVar29 = (ulong)((uint)uVar29 | 6);
        func_0x0001081f5ea8();
        param_2 = (double *)0x0;
        func_0x0001081f6094(0x3ff0000000000000);
      }
      func_0x0001081f5ea8();
      func_0x0001081f5e24();
      func_0x0001081f5dc8();
      bVar7 = false;
      if (((bool)uVar6) && (bVar7 = false, !NAN((double)param_2) && !NAN(param_4))) {
        bVar7 = (double)param_2 == param_4;
      }
      if (bVar7) {
        uVar29 = (ulong)((uint)uVar29 | 10);
        func_0x0001081f5ea8();
        func_0x0001081f6094(0x3ff0000000000000,0x3ff0000000000000);
      }
      if ((uVar29 & 0x55555555) == 0) {
        iVar10 = (int)*unaff_x21;
        func_0x0001081f5d5c();
        func_0x0001081f5ebc();
        func_0x0001081f5d5c();
        func_0x0001081f5e80();
        iVar9 = 0;
        if (iVar10 != 0) {
          uVar29 = (ulong)((uint)uVar29 | 5);
          iVar9 = (int)*unaff_x21;
          func_0x0001081f5d5c();
          func_0x0001081f5ebc();
          func_0x0001081f5d5c();
          func_0x0001081f5f60(0,0);
        }
      }
      if ((uVar29 & 0xfffffff9) == 0) {
        iVar10 = (int)*unaff_x21;
        func_0x0001081f5d5c();
        func_0x0001081f5e24();
        func_0x0001081f5e80();
        iVar9 = 0;
        if (iVar10 != 0) {
          uVar29 = (ulong)((uint)uVar29 | 9);
          iVar9 = (int)*unaff_x21;
          func_0x0001081f5d5c();
          func_0x0001081f5e24();
          func_0x0001081f5f60(0,0x3ff0000000000000);
        }
      }
      if ((uVar29 & 6) == 0) {
        func_0x0001081f5ea8();
        func_0x0001081f5ebc();
        func_0x0001081f5d5c();
        func_0x0001081f5e80();
        if (iVar9 != 0) {
          uVar29 = (ulong)((uint)uVar29 | 6);
          func_0x0001081f5ea8();
          func_0x0001081f5ebc();
          func_0x0001081f5d5c();
          func_0x0001081f5f60(0x3ff0000000000000,0);
        }
      }
      if ((uVar29 & 0xaaaaaaaa) == 0) {
        func_0x0001081f5ea8();
        func_0x0001081f5e24();
        func_0x0001081f5e80();
        if (iVar9 != 0) {
          uVar29 = (ulong)((uint)uVar29 | 10);
          func_0x0001081f5ea8();
          FUN_1081f2b78(*unaff_x20);
          FUN_1081e1a94(0x3ff0000000000000,0x3ff0000000000000);
        }
      }
      return uVar29;
    }
  }
  ___stack_chk_fail();
LAB_1081f5404:
  func_0x00010bdb1a68();
LAB_1081f5408:
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x1081f540c);
  (*pcVar4)();
LAB_1081f4318:
  dStack_648 = dStack_630;
  dStack_650 = dStack_638;
  bVar7 = true;
  pdVar40 = pdVar43;
  if (0.0 <= dVar46 - dVar42) {
    if (dStack_5c0 <= dVar45) goto LAB_1081f4350;
    goto LAB_1081f4248;
  }
  if (dVar45 <= dStack_5c0) goto LAB_1081f4350;
  goto LAB_1081f4248;
LAB_1081f4350:
  in_ZR = dVar45 == dStack_5c0;
  puVar37 = (ulong *)0x0;
LAB_1081f448c:
  puVar13 = puVar37;
  if (puVar37 == (ulong *)0x0) goto LAB_1081f53dc;
LAB_1081f4490:
  pdVar40 = (double *)puVar15[7];
  dVar42 = 0.0;
  puVar35 = puVar15;
  func_0x0001081f2934();
  puVar37 = puVar35;
  if (dVar41 <= dVar44) {
    puVar37 = puVar13;
    puVar13 = puVar35;
  }
  if ((puVar13 == (ulong *)0x0) || (puVar37 == (ulong *)0x0)) goto LAB_1081f467c;
  puVar35 = unaff_x21;
  FUN_1081f2d98(unaff_x21,puVar34,puVar15[0xb],puVar13);
  puVar14 = unaff_x20;
  FUN_1081f2d98(unaff_x20,puVar13,puVar37[0xb],puVar34);
  FUN_1081f2e2c(unaff_x21,puVar34,puVar15);
  FUN_1081f2e2c(unaff_x20,puVar13,puVar37);
  puVar34[0x11] = puVar15[0x11];
  FUN_1081f2188(puVar34,*unaff_x21);
  uVar29 = *unaff_x21;
  uVar33 = puVar34[0x10];
  func_0x0001081f5e5c(*puVar34);
  func_0x0001081f5e1c();
  func_0x0001081f5f44();
  FUN_1081f1fc8(uVar33,puVar34 + 1,uVar29);
  unaff_x24 = puVar34 + 5;
  uVar29 = *unaff_x21;
  pdVar40 = (double *)puVar34[0x11];
  dVar42 = 0.0;
  FUN_1081f2344(*puVar34);
  func_0x0001081f5f44();
  FUN_1081f1fc8(unaff_x24,uVar29);
  func_0x0001081f61dc();
  param_3 = (double *)((double)param_3 - (double)pdVar40);
  param_2 = (double *)((double)param_2 * (double)param_3);
  in_ZR = (double)param_2 == 0.0;
  if ((double)param_2 <= 0.0) {
    param_2 = (double *)puVar34[7];
    param_3 = (double *)((0.0 - (double)param_2) * (1.0 - (double)param_2));
    in_ZR = (double)param_3 == 0.0;
    if ((double)param_3 <= 0.0) {
      in_ZR = dVar44 == dVar41;
      pdVar48 = param_2;
      param_3 = pdVar40;
      if (dVar41 <= dVar44) {
        pdVar48 = pdVar40;
        param_3 = param_2;
      }
      pdVar40 = pdVar48;
      dVar42 = 0.0;
      puVar13[0x10] = (ulong)param_3;
      puVar13[0x11] = (ulong)pdVar40;
      FUN_1081f2188(puVar13,*unaff_x20);
    }
  }
  puVar37 = (ulong *)puVar34[0xb];
  puVar15 = unaff_x21;
  func_0x0001081f2e8c(unaff_x21,puVar34,0);
  if ((((int)puVar15 == 0) ||
      (puVar34 = unaff_x20, func_0x0001081f2e8c(unaff_x20,puVar13,1), (int)puVar34 == 0)) ||
     (((int)puVar35 != 0 || (int)puVar14 != 0 &&
      ((puVar34 = unaff_x21, func_0x0001081f2f00(), (int)puVar34 == 0 ||
       (puVar34 = unaff_x20, func_0x0001081f2f00(), (int)puVar34 == 0)))))) goto LAB_1081f53dc;
  if ((puVar37 == (ulong *)0x0) || ((*(byte *)((long)puVar37 + 0x9c) & 1) != 0)) goto LAB_1081f467c;
  puVar34 = (ulong *)*puVar11;
  if ((puVar34 == (ulong *)0x0) || (func_0x0001081f60fc(), extraout_x8_01 == 0)) goto LAB_1081f46a0;
  puVar34 = (ulong *)0x0;
  puVar35 = (ulong *)0x0;
  if (*(char *)((long)puVar12 + 0x9c) == '\x01') goto LAB_1081f467c;
  goto LAB_1081f4130;
LAB_1081f46a0:
  if (iStack_6a4 == 1) {
    puVar30 = unaff_x24;
    if ((puVar34 != (ulong *)0x0) && (uVar29 = *puVar1, uVar29 != 0)) {
      puVar12 = puVar34;
      FUN_1081f2d60();
      puVar30 = puVar12;
      func_0x0001081f6180();
      iStack_6a4 = 0;
      if ((puVar12 == (ulong *)0x0) || (puVar30 == (ulong *)0x0)) goto LAB_1081f4808;
      func_0x0001081f6108();
      FUN_1081f2d98();
      puVar12 = puVar30;
      func_0x0001081f61d0();
      iVar9 = (int)puVar12;
      FUN_1081f2d98();
      func_0x0001081f6108();
      FUN_1081f2e2c();
      func_0x0001081f61d0();
      FUN_1081f2e2c();
      puVar34[0x10] = uStack_6b8;
      puVar34[0x11] = (ulong)pdStack_6c0;
      FUN_1081f2188(puVar34,*unaff_x21);
      plVar27 = (long *)*unaff_x21;
      plVar20 = plVar27;
      func_0x0001081f5e1c(*(undefined8 *)(*plVar27 + 0x10),plVar27);
      FUN_1081f1fc8(uStack_6b8,puVar34 + 1,plVar27,plVar20,*unaff_x20);
      uVar39 = *unaff_x21;
      uVar33 = uVar39;
      FUN_1081f2b78(uVar39);
      FUN_1081f1fc8(pdStack_6c0,puVar34 + 5,uVar39,uVar33,*unaff_x20);
      param_3 = (double *)puVar34[3];
      dVar41 = (double)puVar34[7];
      pdVar40 = (double *)NEON_fminnm(dVar41,0x3ff0000000000000);
      pdVar48 = (double *)0x3ff0000000000000;
      if (dVar41 != -1.0) {
        pdVar48 = pdVar40;
      }
      pdVar40 = pdVar48;
      if (dVar41 <= (double)param_3) {
        pdVar40 = param_3;
      }
      dVar42 = 0.0;
      param_2 = param_3;
      if (dVar41 <= (double)param_3) {
        param_2 = pdVar48;
      }
      *(double **)(uVar29 + 0x80) = param_2;
      *(double **)(uVar29 + 0x88) = pdVar40;
      FUN_1081f2188(uVar29,*unaff_x20);
      func_0x0001081f6108();
      func_0x0001081f2e8c();
      func_0x0001081f61d0();
      func_0x0001081f2e8c();
      if ((((ulong)puVar30 & 1) != 0) || (iVar9 != 0)) {
        func_0x0001081f2f00(unaff_x21);
        func_0x0001081f2f00(unaff_x20);
      }
    }
    iStack_6a4 = 0;
    unaff_x24 = puVar30;
  }
  else {
LAB_1081f46b0:
    iStack_6a4 = iStack_6a4 + -1;
  }
LAB_1081f4808:
  in_ZR = (int)unaff_x21[0x88] == 9;
  if ((8 < (int)unaff_x21[0x88]) && (in_ZR = (int)unaff_x20[0x88] == 9, 8 < (int)unaff_x20[0x88])) {
    if (*puVar11 == 0) goto LAB_1081f53dc;
    func_0x0001081f6180();
    func_0x0001081f6148(unaff_x21);
    if (unaff_x20[0x85] == 0) goto LAB_1081f53dc;
    func_0x0001081f6180();
    func_0x0001081f6148(unaff_x20);
    plVar20 = (long *)unaff_x21[0x85];
    do {
      plVar27 = (long *)plVar20[0xb];
      pdVar40 = (double *)plVar20[3];
      dVar42 = 0.0;
      if (0.0 <= (double)pdVar40) {
        pdVar40 = (double *)plVar20[7];
        dVar42 = 0.0;
        if (0.0 <= (double)pdVar40) {
          pdVar40 = (double *)*plVar20;
          func_0x0001081f5d4c();
          dVar42 = (double)plVar20[1];
          dVar44 = (double)plVar20[2];
          dVar46 = *pdVar40;
          dVar47 = pdVar40[1];
          puVar30 = (ulong *)*plVar20;
          FUN_1081f2344();
          dVar41 = (double)plVar20[5];
          dVar45 = (double)plVar20[6];
          param_3 = (double *)*puVar30;
          func_0x0001081f5f54();
          param_2 = (double *)((dVar44 - dVar47) * dVar45);
          pdVar40 = (double *)((double)param_2 + dVar41 * (dVar42 - dVar46));
          dVar42 = 0.0;
          if (0.0 < (double)pdVar40) {
            unaff_x24 = (ulong *)plVar20[9];
            while (unaff_x24 != (ulong *)0x0) {
              uVar29 = *unaff_x24;
              unaff_x24 = (ulong *)unaff_x24[1];
              plVar16 = plVar20;
              func_0x0001081f2968(plVar20,uVar29);
              if ((int)plVar16 != 0) {
                FUN_1081f2fa0(unaff_x21,plVar20);
              }
              uVar33 = uVar29;
              func_0x0001081f2968(uVar29,plVar20);
              if ((int)uVar33 != 0) {
                FUN_1081f2fa0(unaff_x20,uVar29);
              }
              if (*(char *)((long)plVar20 + 0x9c) == '\x01') {
                func_0x0001081f60fc();
                for (lVar23 = extraout_x8_03; lVar23 != 0; lVar23 = *(long *)(lVar23 + 0x58)) {
                  puVar36 = (undefined8 *)(lVar23 + 0x48);
                  while (puVar24 = (undefined8 *)*puVar36, puVar24 != (undefined8 *)0x0) {
                    puVar36 = puVar24 + 1;
                    in_ZR = 1;
                    if (plVar20 == (long *)*puVar24) goto LAB_1081f53dc;
                  }
                }
              }
            }
          }
        }
      }
      plVar20 = plVar27;
    } while (plVar27 != (long *)0x0);
    iVar9 = 0;
    puVar30 = puVar11;
    while (uVar29 = *puVar30, uVar29 != 0) {
      iVar9 = iVar9 + (uint)*(byte *)(uVar29 + 0x98);
      puVar30 = (ulong *)(uVar29 + 0x58);
    }
    iVar10 = (int)*unaff_x21;
    func_0x0001081f616c();
    in_ZR = iVar9 == iVar10;
    if (!(bool)in_ZR && iVar10 <= iVar9) goto LAB_1081f49d0;
  }
LAB_1081f4980:
  if ((*puVar11 == 0) || (func_0x0001081f60fc(), extraout_x8_04 == 0)) goto LAB_1081f49d0;
  goto LAB_1081f3fa0;
}



/* Entry: 1081f5448; end: 1081f545b;  */

undefined8 FUN_1081f5448(long param_1,long param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  double dVar5;
  double dVar6;
  
  dVar5 = (*(double *)(param_2 + 0x80) + *(double *)(param_2 + 0x88)) * 0.5;
  dVar6 = *(double *)(param_2 + 0x88);
  *(double *)(param_1 + 0x80) = dVar5;
  *(double *)(param_1 + 0x88) = dVar6;
  lVar2 = param_1;
  if ((dVar5 == dVar6) ||
     (*(double *)(param_2 + 0x88) = dVar5, lVar2 = param_2, *(double *)(param_2 + 0x80) == dVar5)) {
    uVar1 = 0;
    *(undefined1 *)(lVar2 + 0x98) = 1;
  }
  else {
    uVar1 = *(undefined8 *)(param_2 + 0x58);
    *(long *)(param_1 + 0x50) = param_2;
    *(undefined8 *)(param_1 + 0x58) = uVar1;
    *(undefined2 *)(param_1 + 0x9a) = *(undefined2 *)(param_2 + 0x9a);
    *(long *)(param_2 + 0x58) = param_1;
    if (*(long *)(param_1 + 0x58) != 0) {
      *(long *)(*(long *)(param_1 + 0x58) + 0x50) = param_1;
    }
    puVar4 = *(undefined8 **)(param_2 + 0x48);
    puVar3 = (undefined8 *)(param_1 + 0x48);
    *puVar3 = 0;
    for (; puVar4 != (undefined8 *)0x0; puVar4 = (undefined8 *)puVar4[1]) {
      FUN_1081f20fc(param_1,*puVar4,param_3);
    }
    for (; puVar3 = (undefined8 *)*puVar3, puVar3 != (undefined8 *)0x0; puVar3 = puVar3 + 1) {
      FUN_1081f20fc(*puVar3,param_1,param_3);
    }
    uVar1 = 1;
  }
  return uVar1;
}



/* Entry: 1081f545c; end: 1081f5513;  */

long * FUN_1081f545c(undefined8 param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined1 in_ZR;
  long *plVar1;
  long *plVar2;
  undefined8 *puVar3;
  long extraout_x8;
  long *unaff_x19;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined **ppuStack_3780;
  undefined8 uStack_3778;
  undefined8 uStack_3770;
  undefined8 uStack_3768;
  undefined8 uStack_3760;
  undefined8 uStack_3758;
  undefined8 uStack_3750;
  undefined8 uStack_3748;
  undefined8 uStack_3740;
  long alStack_3738 [137];
  long alStack_32f0 [137];
  undefined8 uStack_2ea8;
  undefined8 uStack_2e70;
  undefined8 uStack_2e68;
  undefined8 uStack_2e60;
  undefined8 uStack_2e38;
  long lStack_2e30;
  undefined1 auStack_2de8 [1096];
  undefined1 auStack_29a0 [1096];
  undefined8 uStack_2558;
  undefined1 auStack_2498 [1096];
  undefined1 auStack_2050 [1096];
  undefined8 uStack_1c08;
  undefined **ppuStack_1b88;
  undefined8 uStack_1b80;
  undefined8 uStack_1b78;
  undefined8 uStack_1b70;
  undefined8 uStack_1b68;
  undefined8 uStack_1b60;
  undefined8 uStack_1b58;
  undefined8 uStack_1b50;
  undefined1 auStack_1b48 [1096];
  undefined1 auStack_1700 [1096];
  undefined8 uStack_12b8;
  undefined1 auStack_1280 [8];
  undefined8 uStack_1278;
  undefined8 uStack_1270;
  undefined **ppuStack_1248;
  undefined8 uStack_1240;
  undefined8 uStack_1238;
  undefined8 uStack_1230;
  undefined8 uStack_1228;
  undefined8 uStack_1220;
  undefined8 uStack_1218;
  undefined8 uStack_1210;
  undefined8 auStack_1208 [137];
  undefined1 auStack_dc0 [1096];
  undefined8 uStack_978;
  undefined **ppuStack_900;
  undefined8 uStack_8f8;
  undefined8 uStack_8f0;
  undefined8 uStack_8e8;
  undefined8 uStack_8e0;
  undefined8 uStack_8d8;
  undefined8 uStack_8d0;
  undefined8 auStack_8c8 [137];
  undefined1 auStack_480 [1096];
  undefined8 uStack_38;
  
  func_0x0001081f5d80();
  uStack_8f0 = param_2[1];
  uStack_8f8 = *param_2;
  uStack_8e0 = param_2[3];
  uStack_8e8 = param_2[2];
  uStack_8d0 = param_2[5];
  uStack_8d8 = param_2[4];
  ppuStack_900 = &PTR_DAT_110a2f840;
  func_0x0001081f60b4(*param_3,param_3[2]);
  FUN_1081f2af4(auStack_480,&ppuStack_900);
  func_0x0001081f603c(auStack_8c8);
  puVar3 = auStack_8c8;
  func_0x0001081f5ef8(auStack_480);
  func_0x0001081f5dd8();
  func_0x0001081f5f28();
  func_0x0001081f5d6c(uStack_38);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x0001081f5df8();
    func_0x0001081f5f14(auStack_480);
    func_0x0001081f5ed0();
    func_0x0001081f5d80();
    uStack_1238 = puVar3[1];
    uStack_1240 = *puVar3;
    uStack_1228 = puVar3[3];
    uStack_1230 = puVar3[2];
    uStack_1218 = puVar3[5];
    uStack_1220 = puVar3[4];
    uStack_1270 = param_3[1];
    uStack_1278 = *param_3;
    ppuStack_1248 = &PTR_DAT_110a2f658;
    uStack_1210 = puVar3[6];
    func_0x0001081f619c(&PTR_DAT_110a2f840,uStack_1278,param_3[2]);
    FUN_1081f2af4(auStack_dc0,&ppuStack_1248);
    FUN_1081f2af4(auStack_1208,auStack_1280);
    puVar3 = auStack_1208;
    func_0x0001081f5ef8(auStack_dc0);
    func_0x0001081f5dd8();
    func_0x0001081f5f28();
    func_0x0001081f5d6c(uStack_978);
    if (!(bool)in_ZR) {
      ___stack_chk_fail();
      func_0x0001081f5df8();
      func_0x0001081f5f14(auStack_dc0);
      func_0x0001081f5ed0();
      func_0x0001081f5d80();
      uStack_1b78 = puVar3[1];
      uStack_1b80 = *puVar3;
      uStack_1b68 = puVar3[3];
      uStack_1b70 = puVar3[2];
      uStack_1b58 = puVar3[5];
      uStack_1b60 = puVar3[4];
      uVar5 = param_3[1];
      uVar4 = *param_3;
      ppuStack_1b88 = &PTR_DAT_110a2f658;
      uStack_1b50 = puVar3[6];
      func_0x0001081f60b4(uVar4,param_3[2]);
      FUN_1081f2af4(auStack_1700,&ppuStack_1b88);
      func_0x0001081f603c(auStack_1b48);
      func_0x0001081f5e04();
      func_0x0001081f5dd8();
      func_0x0001081f5f28();
      func_0x0001081f5d6c(uStack_12b8);
      if (!(bool)in_ZR) {
        ___stack_chk_fail();
        func_0x0001081f5df8();
        func_0x0001081f5f14(auStack_1700);
        func_0x0001081f5ed0();
        func_0x0001081f5d80();
        func_0x0001081f5fdc();
        func_0x0001081f60b4(&PTR_DAT_110a2f840);
        func_0x0001081f6120();
        func_0x0001081f603c(auStack_2498);
        func_0x0001081f5e04();
        func_0x0001081f5dd8();
        func_0x0001081f5f28();
        func_0x0001081f5d6c(uStack_1c08);
        if (!(bool)in_ZR) {
          ___stack_chk_fail();
          func_0x0001081f5df8();
          func_0x0001081f5f14(auStack_2050);
          func_0x0001081f5ed0();
          puVar3 = &uStack_2e70;
          func_0x0001081f5d80();
          func_0x0001081f5fdc(&UNK_110a2f730);
          lStack_2e30 = extraout_x8 + 0x10;
          uStack_2e68 = uVar4;
          uStack_2e60 = uVar5;
          func_0x0001081f619c(&PTR_DAT_110a2f658);
          uStack_2e38 = param_3[6];
          func_0x0001081f6120();
          FUN_1081f2af4(auStack_2de8);
          func_0x0001081f5e04();
          func_0x0001081f5dd8();
          func_0x0001081f5f28();
          func_0x0001081f5d6c(uStack_2558);
          if (!(bool)in_ZR) {
            ___stack_chk_fail();
            func_0x0001081f5df8();
            func_0x0001081f5f14(auStack_29a0);
            func_0x0001081f5ed0();
            func_0x0001081f5d80();
            uStack_3770 = puVar3[1];
            uStack_3778 = *puVar3;
            uStack_3760 = puVar3[3];
            uStack_3768 = puVar3[2];
            uStack_3750 = puVar3[5];
            uStack_3758 = puVar3[4];
            uStack_3740 = puVar3[7];
            uStack_3748 = puVar3[6];
            ppuStack_3780 = &PTR_DAT_110a2f740;
            FUN_1081f2af4(alStack_32f0,&ppuStack_3780);
            func_0x0001081f603c(alStack_3738);
            plVar1 = alStack_32f0;
            plVar2 = alStack_3738;
            func_0x0001081f5ef8();
            func_0x0001081f5dd8();
            func_0x0001081f5f28();
            func_0x0001081f5d6c(uStack_2ea8);
            if (!(bool)in_ZR) {
              ___stack_chk_fail();
              func_0x0001081f5df8();
              func_0x0001081f5f14(alStack_32f0);
              func_0x0001081f5ed0();
              func_0x0001081f60c4();
              (**(code **)(*plVar2 + 0x70))(plVar2,param_3);
              *plVar1 = (long)plVar2;
              return plVar1;
            }
          }
        }
      }
    }
  }
  return unaff_x19;
}



/* Entry: 1081f5514; end: 1081f55df;  */

long * FUN_1081f5514(undefined8 param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined1 in_ZR;
  long *plVar1;
  long *plVar2;
  undefined8 *puVar3;
  long extraout_x8;
  long *unaff_x19;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined **ppuStack_2e40;
  undefined8 uStack_2e38;
  undefined8 uStack_2e30;
  undefined8 uStack_2e28;
  undefined8 uStack_2e20;
  undefined8 uStack_2e18;
  undefined8 uStack_2e10;
  undefined8 uStack_2e08;
  undefined8 uStack_2e00;
  long alStack_2df8 [137];
  long alStack_29b0 [137];
  undefined8 uStack_2568;
  undefined8 uStack_2530;
  undefined8 uStack_2528;
  undefined8 uStack_2520;
  undefined8 uStack_24f8;
  long lStack_24f0;
  undefined1 auStack_24a8 [1096];
  undefined1 auStack_2060 [1096];
  undefined8 uStack_1c18;
  undefined1 auStack_1b58 [1096];
  undefined1 auStack_1710 [1096];
  undefined8 uStack_12c8;
  undefined **ppuStack_1248;
  undefined8 uStack_1240;
  undefined8 uStack_1238;
  undefined8 uStack_1230;
  undefined8 uStack_1228;
  undefined8 uStack_1220;
  undefined8 uStack_1218;
  undefined8 uStack_1210;
  undefined1 auStack_1208 [1096];
  undefined1 auStack_dc0 [1096];
  undefined8 uStack_978;
  undefined1 auStack_940 [8];
  undefined8 uStack_938;
  undefined8 uStack_930;
  undefined **ppuStack_908;
  undefined8 uStack_900;
  undefined8 uStack_8f8;
  undefined8 uStack_8f0;
  undefined8 uStack_8e8;
  undefined8 uStack_8e0;
  undefined8 uStack_8d8;
  undefined8 uStack_8d0;
  undefined8 auStack_8c8 [137];
  undefined1 auStack_480 [1096];
  undefined8 uStack_38;
  
  func_0x0001081f5d80();
  uStack_8f8 = param_2[1];
  uStack_900 = *param_2;
  uStack_8e8 = param_2[3];
  uStack_8f0 = param_2[2];
  uStack_8d8 = param_2[5];
  uStack_8e0 = param_2[4];
  uStack_930 = param_3[1];
  uStack_938 = *param_3;
  ppuStack_908 = &PTR_DAT_110a2f658;
  uStack_8d0 = param_2[6];
  func_0x0001081f619c(&PTR_DAT_110a2f840,uStack_938,param_3[2]);
  FUN_1081f2af4(auStack_480,&ppuStack_908);
  FUN_1081f2af4(auStack_8c8,auStack_940);
  puVar3 = auStack_8c8;
  func_0x0001081f5ef8(auStack_480);
  func_0x0001081f5dd8();
  func_0x0001081f5f28();
  func_0x0001081f5d6c(uStack_38);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x0001081f5df8();
    func_0x0001081f5f14(auStack_480);
    func_0x0001081f5ed0();
    func_0x0001081f5d80();
    uStack_1238 = puVar3[1];
    uStack_1240 = *puVar3;
    uStack_1228 = puVar3[3];
    uStack_1230 = puVar3[2];
    uStack_1218 = puVar3[5];
    uStack_1220 = puVar3[4];
    uVar5 = param_3[1];
    uVar4 = *param_3;
    ppuStack_1248 = &PTR_DAT_110a2f658;
    uStack_1210 = puVar3[6];
    func_0x0001081f60b4(uVar4,param_3[2]);
    FUN_1081f2af4(auStack_dc0,&ppuStack_1248);
    func_0x0001081f603c(auStack_1208);
    func_0x0001081f5e04();
    func_0x0001081f5dd8();
    func_0x0001081f5f28();
    func_0x0001081f5d6c(uStack_978);
    if (!(bool)in_ZR) {
      ___stack_chk_fail();
      func_0x0001081f5df8();
      func_0x0001081f5f14(auStack_dc0);
      func_0x0001081f5ed0();
      func_0x0001081f5d80();
      func_0x0001081f5fdc();
      func_0x0001081f60b4(&PTR_DAT_110a2f840);
      func_0x0001081f6120();
      func_0x0001081f603c(auStack_1b58);
      func_0x0001081f5e04();
      func_0x0001081f5dd8();
      func_0x0001081f5f28();
      func_0x0001081f5d6c(uStack_12c8);
      if (!(bool)in_ZR) {
        ___stack_chk_fail();
        func_0x0001081f5df8();
        func_0x0001081f5f14(auStack_1710);
        func_0x0001081f5ed0();
        puVar3 = &uStack_2530;
        func_0x0001081f5d80();
        func_0x0001081f5fdc(&UNK_110a2f730);
        lStack_24f0 = extraout_x8 + 0x10;
        uStack_2528 = uVar4;
        uStack_2520 = uVar5;
        func_0x0001081f619c(&PTR_DAT_110a2f658);
        uStack_24f8 = param_3[6];
        func_0x0001081f6120();
        FUN_1081f2af4(auStack_24a8);
        func_0x0001081f5e04();
        func_0x0001081f5dd8();
        func_0x0001081f5f28();
        func_0x0001081f5d6c(uStack_1c18);
        if (!(bool)in_ZR) {
          ___stack_chk_fail();
          func_0x0001081f5df8();
          func_0x0001081f5f14(auStack_2060);
          func_0x0001081f5ed0();
          func_0x0001081f5d80();
          uStack_2e30 = puVar3[1];
          uStack_2e38 = *puVar3;
          uStack_2e20 = puVar3[3];
          uStack_2e28 = puVar3[2];
          uStack_2e10 = puVar3[5];
          uStack_2e18 = puVar3[4];
          uStack_2e00 = puVar3[7];
          uStack_2e08 = puVar3[6];
          ppuStack_2e40 = &PTR_DAT_110a2f740;
          FUN_1081f2af4(alStack_29b0,&ppuStack_2e40);
          func_0x0001081f603c(alStack_2df8);
          plVar1 = alStack_29b0;
          plVar2 = alStack_2df8;
          func_0x0001081f5ef8();
          func_0x0001081f5dd8();
          func_0x0001081f5f28();
          func_0x0001081f5d6c(uStack_2568);
          if (!(bool)in_ZR) {
            ___stack_chk_fail();
            func_0x0001081f5df8();
            func_0x0001081f5f14(alStack_29b0);
            func_0x0001081f5ed0();
            func_0x0001081f60c4();
            (**(code **)(*plVar2 + 0x70))(plVar2,param_3);
            *plVar1 = (long)plVar2;
            return plVar1;
          }
        }
      }
    }
  }
  return unaff_x19;
}



/* Entry: 1081f55e0; end: 1081f5693;  */

long * FUN_1081f55e0(undefined8 param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined1 in_ZR;
  long *plVar1;
  long *plVar2;
  undefined8 *puVar3;
  long extraout_x8;
  long *unaff_x19;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined **ppuStack_2500;
  undefined8 uStack_24f8;
  undefined8 uStack_24f0;
  undefined8 uStack_24e8;
  undefined8 uStack_24e0;
  undefined8 uStack_24d8;
  undefined8 uStack_24d0;
  undefined8 uStack_24c8;
  undefined8 uStack_24c0;
  long alStack_24b8 [137];
  long alStack_2070 [137];
  undefined8 uStack_1c28;
  undefined8 uStack_1bf0;
  undefined8 uStack_1be8;
  undefined8 uStack_1be0;
  undefined8 uStack_1bb8;
  long lStack_1bb0;
  undefined1 auStack_1b68 [1096];
  undefined1 auStack_1720 [1096];
  undefined8 uStack_12d8;
  undefined1 auStack_1218 [1096];
  undefined1 auStack_dd0 [1096];
  undefined8 uStack_988;
  undefined **ppuStack_908;
  undefined8 uStack_900;
  undefined8 uStack_8f8;
  undefined8 uStack_8f0;
  undefined8 uStack_8e8;
  undefined8 uStack_8e0;
  undefined8 uStack_8d8;
  undefined8 uStack_8d0;
  undefined1 auStack_8c8 [1096];
  undefined1 auStack_480 [1096];
  undefined8 uStack_38;
  
  func_0x0001081f5d80();
  uStack_8f8 = param_2[1];
  uStack_900 = *param_2;
  uStack_8e8 = param_2[3];
  uStack_8f0 = param_2[2];
  uStack_8d8 = param_2[5];
  uStack_8e0 = param_2[4];
  uVar5 = param_3[1];
  uVar4 = *param_3;
  ppuStack_908 = &PTR_DAT_110a2f658;
  uStack_8d0 = param_2[6];
  func_0x0001081f60b4(uVar4,param_3[2]);
  FUN_1081f2af4(auStack_480,&ppuStack_908);
  func_0x0001081f603c(auStack_8c8);
  func_0x0001081f5e04();
  func_0x0001081f5dd8();
  func_0x0001081f5f28();
  func_0x0001081f5d6c(uStack_38);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x0001081f5df8();
    func_0x0001081f5f14(auStack_480);
    func_0x0001081f5ed0();
    func_0x0001081f5d80();
    func_0x0001081f5fdc();
    func_0x0001081f60b4(&PTR_DAT_110a2f840);
    func_0x0001081f6120();
    func_0x0001081f603c(auStack_1218);
    func_0x0001081f5e04();
    func_0x0001081f5dd8();
    func_0x0001081f5f28();
    func_0x0001081f5d6c(uStack_988);
    if (!(bool)in_ZR) {
      ___stack_chk_fail();
      func_0x0001081f5df8();
      func_0x0001081f5f14(auStack_dd0);
      func_0x0001081f5ed0();
      puVar3 = &uStack_1bf0;
      func_0x0001081f5d80();
      func_0x0001081f5fdc(&UNK_110a2f730);
      lStack_1bb0 = extraout_x8 + 0x10;
      uStack_1be8 = uVar4;
      uStack_1be0 = uVar5;
      func_0x0001081f619c(&PTR_DAT_110a2f658);
      uStack_1bb8 = param_3[6];
      func_0x0001081f6120();
      FUN_1081f2af4(auStack_1b68);
      func_0x0001081f5e04();
      func_0x0001081f5dd8();
      func_0x0001081f5f28();
      func_0x0001081f5d6c(uStack_12d8);
      if (!(bool)in_ZR) {
        ___stack_chk_fail();
        func_0x0001081f5df8();
        func_0x0001081f5f14(auStack_1720);
        func_0x0001081f5ed0();
        func_0x0001081f5d80();
        uStack_24f0 = puVar3[1];
        uStack_24f8 = *puVar3;
        uStack_24e0 = puVar3[3];
        uStack_24e8 = puVar3[2];
        uStack_24d0 = puVar3[5];
        uStack_24d8 = puVar3[4];
        uStack_24c0 = puVar3[7];
        uStack_24c8 = puVar3[6];
        ppuStack_2500 = &PTR_DAT_110a2f740;
        FUN_1081f2af4(alStack_2070,&ppuStack_2500);
        func_0x0001081f603c(alStack_24b8);
        plVar1 = alStack_2070;
        plVar2 = alStack_24b8;
        func_0x0001081f5ef8();
        func_0x0001081f5dd8();
        func_0x0001081f5f28();
        func_0x0001081f5d6c(uStack_1c28);
        if (!(bool)in_ZR) {
          ___stack_chk_fail();
          func_0x0001081f5df8();
          func_0x0001081f5f14(alStack_2070);
          func_0x0001081f5ed0();
          func_0x0001081f60c4();
          (**(code **)(*plVar2 + 0x70))(plVar2,param_3);
          *plVar1 = (long)plVar2;
          return plVar1;
        }
      }
    }
  }
  return unaff_x19;
}



/* Entry: 1081f5694; end: 1081f572b;  */

long * FUN_1081f5694(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined1 in_ZR;
  long *plVar1;
  long *plVar2;
  undefined8 *puVar3;
  long extraout_x8;
  long *unaff_x19;
  undefined **ppuStack_1bb0;
  undefined8 uStack_1ba8;
  undefined8 uStack_1ba0;
  undefined8 uStack_1b98;
  undefined8 uStack_1b90;
  undefined8 uStack_1b88;
  undefined8 uStack_1b80;
  undefined8 uStack_1b78;
  undefined8 uStack_1b70;
  long alStack_1b68 [137];
  long alStack_1720 [137];
  undefined8 uStack_12d8;
  undefined8 uStack_12a0;
  undefined8 uStack_1298;
  undefined8 uStack_1268;
  long lStack_1260;
  undefined1 auStack_1218 [1096];
  undefined1 auStack_dd0 [1096];
  undefined8 uStack_988;
  undefined1 auStack_8c8 [1096];
  undefined1 auStack_480 [1096];
  undefined8 uStack_38;
  
  func_0x0001081f5d80();
  func_0x0001081f5fdc();
  func_0x0001081f60b4(&PTR_DAT_110a2f840);
  func_0x0001081f6120();
  func_0x0001081f603c(auStack_8c8);
  func_0x0001081f5e04();
  func_0x0001081f5dd8();
  func_0x0001081f5f28();
  func_0x0001081f5d6c(uStack_38);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x0001081f5df8();
    func_0x0001081f5f14(auStack_480);
    func_0x0001081f5ed0();
    puVar3 = &uStack_12a0;
    func_0x0001081f5d80();
    func_0x0001081f5fdc(&UNK_110a2f730);
    lStack_1260 = extraout_x8 + 0x10;
    uStack_1298 = param_1;
    func_0x0001081f619c(&PTR_DAT_110a2f658);
    uStack_1268 = *(undefined8 *)(param_4 + 0x30);
    func_0x0001081f6120();
    FUN_1081f2af4(auStack_1218);
    func_0x0001081f5e04();
    func_0x0001081f5dd8();
    func_0x0001081f5f28();
    func_0x0001081f5d6c(uStack_988);
    if (!(bool)in_ZR) {
      ___stack_chk_fail();
      func_0x0001081f5df8();
      func_0x0001081f5f14(auStack_dd0);
      func_0x0001081f5ed0();
      func_0x0001081f5d80();
      uStack_1ba0 = puVar3[1];
      uStack_1ba8 = *puVar3;
      uStack_1b90 = puVar3[3];
      uStack_1b98 = puVar3[2];
      uStack_1b80 = puVar3[5];
      uStack_1b88 = puVar3[4];
      uStack_1b70 = puVar3[7];
      uStack_1b78 = puVar3[6];
      ppuStack_1bb0 = &PTR_DAT_110a2f740;
      FUN_1081f2af4(alStack_1720,&ppuStack_1bb0);
      func_0x0001081f603c(alStack_1b68);
      plVar1 = alStack_1720;
      plVar2 = alStack_1b68;
      func_0x0001081f5ef8();
      func_0x0001081f5dd8();
      func_0x0001081f5f28();
      func_0x0001081f5d6c(uStack_12d8);
      if (!(bool)in_ZR) {
        ___stack_chk_fail();
        func_0x0001081f5df8();
        func_0x0001081f5f14(alStack_1720);
        func_0x0001081f5ed0();
        func_0x0001081f60c4();
        (**(code **)(*plVar2 + 0x70))(plVar2,param_4);
        *plVar1 = (long)plVar2;
        return plVar1;
      }
    }
  }
  return unaff_x19;
}



/* Entry: 1081f572c; end: 1081f57cf;  */

long * FUN_1081f572c(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined1 in_ZR;
  long *plVar1;
  long *plVar2;
  undefined8 *puVar3;
  long extraout_x8;
  long *unaff_x19;
  undefined **ppuStack_1260;
  undefined8 uStack_1258;
  undefined8 uStack_1250;
  undefined8 uStack_1248;
  undefined8 uStack_1240;
  undefined8 uStack_1238;
  undefined8 uStack_1230;
  undefined8 uStack_1228;
  undefined8 uStack_1220;
  long alStack_1218 [137];
  long alStack_dd0 [137];
  undefined8 uStack_988;
  undefined8 uStack_950;
  undefined8 uStack_948;
  undefined8 uStack_918;
  long lStack_910;
  undefined1 auStack_8c8 [1096];
  undefined1 auStack_480 [1096];
  undefined8 uStack_38;
  
  puVar3 = &uStack_950;
  func_0x0001081f5d80();
  func_0x0001081f5fdc(&UNK_110a2f730);
  lStack_910 = extraout_x8 + 0x10;
  uStack_948 = param_1;
  func_0x0001081f619c(&PTR_DAT_110a2f658);
  uStack_918 = *(undefined8 *)(param_4 + 0x30);
  func_0x0001081f6120();
  FUN_1081f2af4(auStack_8c8);
  func_0x0001081f5e04();
  func_0x0001081f5dd8();
  func_0x0001081f5f28();
  func_0x0001081f5d6c(uStack_38);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x0001081f5df8();
    func_0x0001081f5f14(auStack_480);
    func_0x0001081f5ed0();
    func_0x0001081f5d80();
    uStack_1250 = puVar3[1];
    uStack_1258 = *puVar3;
    uStack_1240 = puVar3[3];
    uStack_1248 = puVar3[2];
    uStack_1230 = puVar3[5];
    uStack_1238 = puVar3[4];
    uStack_1220 = puVar3[7];
    uStack_1228 = puVar3[6];
    ppuStack_1260 = &PTR_DAT_110a2f740;
    FUN_1081f2af4(alStack_dd0,&ppuStack_1260);
    func_0x0001081f603c(alStack_1218);
    plVar1 = alStack_dd0;
    plVar2 = alStack_1218;
    func_0x0001081f5ef8();
    func_0x0001081f5dd8();
    func_0x0001081f5f28();
    func_0x0001081f5d6c(uStack_988);
    if (!(bool)in_ZR) {
      ___stack_chk_fail();
      func_0x0001081f5df8();
      func_0x0001081f5f14(alStack_dd0);
      func_0x0001081f5ed0();
      func_0x0001081f60c4();
      (**(code **)(*plVar2 + 0x70))(plVar2,param_4);
      *plVar1 = (long)plVar2;
      return plVar1;
    }
  }
  return unaff_x19;
}


