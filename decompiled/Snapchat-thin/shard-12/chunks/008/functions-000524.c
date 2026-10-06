/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10981a400; end: 10981a403;  */

void FUN_10981a400(void)

{
  return;
}



/* Entry: 10981a404; end: 10981a41f;  */

void FUN_10981a404(long param_1)

{
  if (param_1 != 0) {
    FUN_109825740();
  }
  return;
}



/* Entry: 10981a420; end: 10981a42b;  */

undefined * FUN_10981a420(void)

{
  return &UNK_10f580b7b;
}



/* Entry: 10981a42c; end: 10981a487;  */

float FUN_10981a42c(float param_1,long *param_2)

{
  float fVar1;
  
  fVar1 = *(float *)(param_2 + 6);
  (**(code **)(*param_2 + 0x60))();
  (**(code **)(*param_2 + 0x60))(param_2);
  (**(code **)(*param_2 + 0x60))(param_2);
  return fVar1 + param_1;
}



/* Entry: 10981a488; end: 10981a48b;  */

void FUN_10981a488(void)

{
  return;
}



/* Entry: 10981a48c; end: 10981a4a7;  */

void FUN_10981a48c(long param_1)

{
  if (param_1 != 0) {
    FUN_109825740();
  }
  return;
}



/* Entry: 10981a4a8; end: 10981a543;  */

void FUN_10981a4a8(float param_1,long *param_2,long param_3,undefined8 *param_4,undefined8 *param_5)

{
  float fVar1;
  float fVar2;
  undefined8 uVar3;
  
  (**(code **)(*param_2 + 0x60))();
  fVar1 = param_1;
  (**(code **)(*param_2 + 0x60))(param_2);
  fVar2 = fVar1;
  (**(code **)(*param_2 + 0x60))(param_2);
  uVar3 = *(undefined8 *)(param_3 + 0x30);
  param_4[1] = (ulong)(uint)((float)*(undefined8 *)(param_3 + 0x38) - fVar2);
  *param_4 = CONCAT44((float)((ulong)uVar3 >> 0x20) - fVar1,(float)uVar3 - param_1);
  uVar3 = *(undefined8 *)(param_3 + 0x30);
  param_5[1] = CONCAT44((float)((ulong)*(undefined8 *)(param_3 + 0x38) >> 0x20) + 0.0,
                        fVar2 + (float)*(undefined8 *)(param_3 + 0x38));
  *param_5 = CONCAT44(fVar1 + (float)((ulong)uVar3 >> 0x20),param_1 + (float)uVar3);
  return;
}



/* Entry: 10981a544; end: 10981a56b;  */

void FUN_10981a544(void)

{
  return;
}



/* Entry: 10981a56c; end: 10981abbb;  */

void FUN_10981a56c(double *param_1,float *param_2,float *param_3)

{
  float *pfVar1;
  float *pfVar2;
  long lVar3;
  float fVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  float fVar7;
  float fVar9;
  undefined1 auVar8 [16];
  float fVar10;
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
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  double dVar46;
  double dVar47;
  
  fVar23 = *param_2;
  fVar17 = param_2[1];
  fVar11 = param_2[2];
  fVar19 = fVar23 * fVar23;
  fVar20 = fVar17 * fVar17;
  fVar21 = fVar11 * fVar11;
  fVar12 = 1.0 - fVar23;
  fVar10 = 1.0 - fVar17;
  fVar25 = 1.0 - fVar11;
  fVar4 = fVar23 + 1.0;
  fVar7 = fVar17 + 1.0;
  fVar24 = fVar11 + 1.0;
  fVar18 = fVar12 * fVar10;
  fVar33 = fVar12 * fVar7;
  fVar30 = fVar4 * fVar10;
  fVar29 = fVar4 * fVar7;
  fVar22 = fVar12 * fVar25;
  fVar31 = fVar10 * fVar25;
  fVar13 = fVar10 * fVar24;
  fVar37 = ((fVar19 + fVar20 + fVar21) * 9.0 + -19.0) * 0.015625;
  *param_1 = (double)(fVar25 * fVar18 * fVar37);
  param_1[1] = (double)(fVar25 * fVar30 * fVar37);
  param_1[2] = (double)(fVar25 * fVar33 * fVar37);
  param_1[3] = (double)(fVar25 * fVar29 * fVar37);
  fVar34 = fVar7 * fVar25;
  fVar42 = 1.0 - fVar19;
  param_1[4] = (double)(fVar24 * fVar18 * fVar37);
  param_1[5] = (double)(fVar24 * fVar30 * fVar37);
  param_1[6] = (double)(fVar24 * fVar33 * fVar37);
  param_1[7] = (double)(fVar24 * fVar29 * fVar37);
  auVar8 = NEON_fmov(0x3ff0000000000000,8);
  dVar46 = auVar8._0_8_;
  dVar47 = auVar8._8_8_;
  fVar26 = (float)(dVar46 + (double)fVar23 * -3.0);
  fVar28 = (float)(dVar47 + (double)fVar23 * 3.0);
  fVar37 = fVar26 * fVar42 * 0.140625;
  fVar39 = fVar28 * fVar42 * 0.140625;
  param_1[9] = (double)(fVar39 * fVar31);
  param_1[8] = (double)(fVar37 * fVar31);
  param_1[0xb] = (double)(fVar39 * fVar13);
  param_1[10] = (double)(fVar37 * fVar13);
  fVar32 = fVar7 * fVar24;
  param_1[0xd] = (double)(fVar39 * fVar34);
  param_1[0xc] = (double)(fVar37 * fVar34);
  param_1[0xf] = (double)(fVar39 * fVar32);
  param_1[0xe] = (double)(fVar37 * fVar32);
  fVar44 = 1.0 - fVar20;
  fVar14 = (float)(dVar46 + (double)fVar17 * -3.0);
  fVar16 = (float)(dVar47 + (double)fVar17 * 3.0);
  fVar37 = fVar14 * fVar44 * 0.140625;
  fVar39 = fVar16 * fVar44 * 0.140625;
  fVar41 = fVar4 * fVar25;
  param_1[0x11] = (double)(fVar39 * fVar22);
  param_1[0x10] = (double)(fVar37 * fVar22);
  param_1[0x13] = (double)(fVar39 * fVar41);
  param_1[0x12] = (double)(fVar37 * fVar41);
  fVar40 = fVar12 * fVar24;
  fVar38 = fVar4 * fVar24;
  param_1[0x15] = (double)(fVar39 * fVar40);
  param_1[0x14] = (double)(fVar37 * fVar40);
  param_1[0x17] = (double)(fVar39 * fVar38);
  param_1[0x16] = (double)(fVar37 * fVar38);
  fVar35 = 1.0 - fVar21;
  fVar39 = (float)(dVar46 + (double)fVar11 * -3.0);
  fVar36 = (float)(dVar47 + (double)fVar11 * 3.0);
  fVar37 = fVar39 * fVar35 * 0.140625;
  fVar9 = fVar36 * fVar35 * 0.140625;
  param_1[0x19] = (double)(fVar9 * fVar18);
  param_1[0x18] = (double)(fVar37 * fVar18);
  param_1[0x1b] = (double)(fVar9 * fVar33);
  param_1[0x1a] = (double)(fVar37 * fVar33);
  param_1[0x1d] = (double)(fVar9 * fVar30);
  param_1[0x1c] = (double)(fVar37 * fVar30);
  param_1[0x1f] = (double)(fVar9 * fVar29);
  param_1[0x1e] = (double)(fVar37 * fVar29);
  if (param_3 != (float *)0x0) {
    lVar3 = 0;
    fVar27 = (fVar20 + fVar19 * 3.0 + fVar21) * 9.0 + -19.0;
    fVar37 = (fVar19 + fVar20 * 3.0 + fVar21) * 9.0 + -19.0;
    fVar9 = (fVar19 + fVar20 + fVar21 * 3.0) * 9.0 + -19.0;
    fVar45 = fVar23 * 18.0 - fVar27;
    fVar15 = fVar17 * 18.0 - fVar37;
    *param_3 = fVar31 * fVar45;
    param_3[1] = fVar22 * fVar15;
    fVar43 = fVar11 * 18.0 - fVar9;
    param_3[2] = fVar18 * fVar43;
    fVar27 = fVar23 * 18.0 + fVar27;
    param_3[4] = fVar31 * fVar27;
    param_3[5] = fVar41 * fVar15;
    param_3[6] = fVar30 * fVar43;
    fVar37 = fVar17 * 18.0 + fVar37;
    param_3[8] = fVar34 * fVar45;
    param_3[9] = fVar22 * fVar37;
    param_3[10] = fVar33 * fVar43;
    param_3[0xc] = fVar34 * fVar27;
    param_3[0xd] = fVar41 * fVar37;
    param_3[0xe] = fVar29 * fVar43;
    param_3[0x10] = fVar13 * fVar45;
    param_3[0x11] = fVar40 * fVar15;
    fVar9 = fVar11 * 18.0 + fVar9;
    param_3[0x12] = fVar18 * fVar9;
    param_3[0x14] = fVar13 * fVar27;
    param_3[0x15] = fVar38 * fVar15;
    param_3[0x16] = fVar30 * fVar9;
    param_3[0x18] = fVar32 * fVar45;
    param_3[0x19] = fVar40 * fVar37;
    param_3[0x1a] = fVar33 * fVar9;
    param_3[0x1c] = fVar32 * fVar27;
    param_3[0x1d] = fVar38 * fVar37;
    param_3[0x1e] = fVar29 * fVar9;
    do {
      pfVar1 = (float *)((long)param_3 + lVar3);
      fVar37 = *pfVar1;
      fVar9 = pfVar1[1];
      pfVar2 = (float *)((long)param_3 + lVar3);
      pfVar2[2] = pfVar1[2] * 0.015625;
      pfVar2[3] = pfVar1[3] * 0.015625;
      *pfVar2 = fVar37 * 0.015625;
      pfVar2[1] = fVar9 * 0.015625;
      lVar3 = lVar3 + 0x10;
    } while (lVar3 != 0x80);
    fVar37 = fVar19 * -9.0 + 3.0;
    fVar19 = fVar20 * -9.0 + 3.0;
    fVar9 = fVar21 * -9.0 + 3.0;
    fVar26 = fVar42 * fVar26;
    fVar20 = -fVar37 - (fVar23 + fVar23);
    fVar37 = fVar37 - (fVar23 + fVar23);
    fVar42 = fVar42 * fVar28;
    param_3[0x20] = fVar31 * fVar20;
    param_3[0x21] = -(fVar26 * fVar25);
    param_3[0x22] = -(fVar26 * fVar10);
    param_3[0x24] = fVar31 * fVar37;
    param_3[0x25] = -(fVar42 * fVar25);
    param_3[0x26] = -(fVar42 * fVar10);
    param_3[0x28] = fVar13 * fVar20;
    param_3[0x29] = -(fVar26 * fVar24);
    param_3[0x2a] = fVar10 * fVar26;
    param_3[0x2c] = fVar13 * fVar37;
    param_3[0x2d] = -(fVar42 * fVar24);
    param_3[0x2e] = fVar10 * fVar42;
    param_3[0x30] = fVar34 * fVar20;
    param_3[0x31] = fVar25 * fVar26;
    param_3[0x32] = -(fVar26 * fVar7);
    param_3[0x34] = fVar34 * fVar37;
    param_3[0x35] = fVar25 * fVar42;
    param_3[0x36] = -(fVar42 * fVar7);
    param_3[0x38] = fVar32 * fVar20;
    param_3[0x39] = fVar24 * fVar26;
    param_3[0x3a] = fVar7 * fVar26;
    param_3[0x3c] = fVar32 * fVar37;
    param_3[0x3d] = fVar24 * fVar42;
    param_3[0x3e] = fVar7 * fVar42;
    fVar37 = -fVar19 - (fVar17 + fVar17);
    fVar19 = fVar19 - (fVar17 + fVar17);
    fVar14 = fVar44 * fVar14;
    fVar44 = fVar44 * fVar16;
    param_3[0x40] = -(fVar14 * fVar25);
    param_3[0x41] = fVar22 * fVar37;
    param_3[0x42] = -(fVar14 * fVar12);
    param_3[0x44] = -(fVar44 * fVar25);
    param_3[0x45] = fVar22 * fVar19;
    param_3[0x46] = -(fVar44 * fVar12);
    param_3[0x48] = fVar25 * fVar14;
    param_3[0x49] = fVar41 * fVar37;
    param_3[0x4a] = -(fVar14 * fVar4);
    param_3[0x4c] = fVar25 * fVar44;
    param_3[0x4d] = fVar41 * fVar19;
    param_3[0x4e] = -(fVar44 * fVar4);
    param_3[0x50] = -(fVar14 * fVar24);
    param_3[0x51] = fVar40 * fVar37;
    param_3[0x52] = fVar12 * fVar14;
    param_3[0x54] = -(fVar44 * fVar24);
    param_3[0x55] = fVar40 * fVar19;
    param_3[0x56] = fVar12 * fVar44;
    param_3[0x58] = fVar24 * fVar14;
    param_3[0x59] = fVar38 * fVar37;
    param_3[0x5a] = fVar4 * fVar14;
    param_3[0x5c] = fVar24 * fVar44;
    param_3[0x5d] = fVar38 * fVar19;
    param_3[0x5e] = fVar4 * fVar44;
    fVar39 = fVar35 * fVar39;
    param_3[0x60] = -(fVar39 * fVar10);
    param_3[0x61] = -(fVar39 * fVar12);
    fVar37 = -fVar9 - (fVar11 + fVar11);
    param_3[0x62] = fVar18 * fVar37;
    fVar35 = fVar35 * fVar36;
    param_3[100] = -(fVar35 * fVar10);
    param_3[0x65] = -(fVar35 * fVar12);
    fVar9 = fVar9 - (fVar11 + fVar11);
    param_3[0x66] = fVar18 * fVar9;
    param_3[0x68] = -(fVar39 * fVar7);
    param_3[0x69] = fVar12 * fVar39;
    param_3[0x6a] = fVar33 * fVar37;
    param_3[0x6c] = -(fVar35 * fVar7);
    param_3[0x6d] = fVar12 * fVar35;
    param_3[0x6e] = fVar33 * fVar9;
    param_3[0x70] = fVar10 * fVar39;
    param_3[0x71] = -(fVar39 * fVar4);
    param_3[0x72] = fVar30 * fVar37;
    param_3[0x74] = fVar10 * fVar35;
    param_3[0x75] = -(fVar35 * fVar4);
    param_3[0x76] = fVar30 * fVar9;
    param_3[0x78] = fVar7 * fVar39;
    param_3[0x79] = fVar4 * fVar39;
    param_3[0x7a] = fVar29 * fVar37;
    param_3[0x7c] = fVar7 * fVar35;
    param_3[0x7d] = fVar4 * fVar35;
    param_3[0x7e] = fVar29 * fVar9;
    auVar8 = NEON_fmov(0x3e100000,4);
    lVar3 = 0x80;
    do {
      uVar6 = ((undefined8 *)((long)param_3 + lVar3))[1];
      uVar5 = *(undefined8 *)((long)param_3 + lVar3);
      ((undefined8 *)((long)param_3 + lVar3))[1] =
           CONCAT44((float)((ulong)uVar6 >> 0x20) * auVar8._12_4_,(float)uVar6 * auVar8._8_4_);
      *(undefined8 *)((long)param_3 + lVar3) =
           CONCAT44((float)((ulong)uVar5 >> 0x20) * auVar8._4_4_,(float)uVar5 * auVar8._0_4_);
      lVar3 = lVar3 + 0x10;
    } while (lVar3 != 0x200);
  }
  return;
}



/* Entry: 10981abbc; end: 10981af27;  */

bool FUN_10981abbc(float *param_1,int param_2,double *param_3,float *param_4,undefined8 *param_5)

{
  int *piVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  ulong uVar7;
  bool bVar8;
  float fVar9;
  ulong uVar10;
  float *pfVar11;
  float fVar12;
  float fVar13;
  long lVar14;
  float fVar15;
  float fVar17;
  double dVar16;
  float fVar18;
  float fVar20;
  double dVar19;
  float fVar21;
  undefined8 uVar22;
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  float fVar26;
  float fVar28;
  float fVar29;
  undefined1 auVar27 [16];
  double adStack_360 [32];
  double adStack_260 [64];
  undefined8 uStack_60;
  ulong uStack_58;
  
  if (*(char *)(param_1 + 0x18) != '\x01') {
    return false;
  }
  if (*param_1 <= *param_4) {
    bVar8 = param_1[4] < *param_4;
  }
  else {
    bVar8 = true;
  }
  if (param_1[2] <= param_4[2]) {
    bVar2 = true;
    if (param_4[2] <= param_1[6]) {
      bVar2 = bVar8;
    }
  }
  else {
    bVar2 = true;
  }
  if (param_1[1] <= param_4[1]) {
    if (param_1[5] < param_4[1]) {
      bVar2 = true;
    }
    if (!bVar2) {
      fVar15 = (float)*(undefined8 *)param_4;
      fVar18 = (float)*(undefined8 *)param_1;
      fVar17 = (float)((ulong)*(undefined8 *)param_4 >> 0x20);
      fVar20 = (float)((ulong)*(undefined8 *)param_1 >> 0x20);
      fVar9 = (float)(int)(param_1[0x10] * (fVar15 - fVar18));
      fVar12 = (float)(int)(param_1[0x11] * (fVar17 - fVar20));
      fVar13 = (float)(int)(param_1[0x12] *
                           ((float)*(undefined8 *)(param_4 + 2) -
                           (float)*(undefined8 *)(param_1 + 2)));
      fVar21 = param_1[8];
      fVar26 = param_1[9];
      if ((uint)fVar21 <= (uint)fVar9) {
        fVar9 = (float)((int)fVar21 - 1);
      }
      if ((uint)fVar26 <= (uint)fVar12) {
        fVar12 = (float)((int)fVar26 - 1);
      }
      if ((uint)param_1[10] <= (uint)fVar13) {
        fVar13 = (float)((int)param_1[10] - 1);
      }
      uVar4 = (int)fVar9 + ((int)fVar12 + (int)fVar13 * (int)fVar26) * (int)fVar21;
      lVar14 = (long)param_2;
      iVar3 = *(int *)(*(long *)(*(long *)(param_1 + 0x2e) + lVar14 * 0x20 + 0x10) +
                      (long)(int)uVar4 * 4);
      if (iVar3 != -1) {
        uVar5 = (int)fVar26 * (int)fVar21;
        uVar6 = 0;
        if (uVar5 != 0) {
          uVar6 = uVar4 / uVar5;
        }
        uVar4 = uVar4 - uVar6 * uVar5;
        uVar5 = 0;
        if (fVar21 != 0.0) {
          uVar5 = uVar4 / (uint)fVar21;
        }
        auVar27._4_4_ = 0;
        auVar27._0_4_ = uVar4 - uVar5 * (int)fVar21;
        auVar27._8_4_ = uVar5;
        auVar27._12_4_ = 0;
        auVar23 = NEON_ucvtf(auVar27,8);
        dVar19 = auVar23._0_8_ * (double)(float)*(undefined8 *)(param_1 + 0xc);
        dVar16 = auVar23._8_8_ * (double)(float)((ulong)*(undefined8 *)(param_1 + 0xc) >> 0x20);
        auVar23._8_4_ = SUB84(dVar16,0);
        auVar23._0_8_ = dVar19;
        auVar23._12_4_ = (int)((ulong)dVar16 >> 0x20);
        fVar18 = fVar18 + (float)dVar19;
        fVar20 = fVar20 + (float)auVar23._8_8_;
        fVar9 = (float)*(undefined8 *)(param_1 + 2) + (float)uVar6 * param_1[0xe];
        fVar12 = (float)*(undefined8 *)(param_1 + 0xc) + fVar18;
        fVar13 = (float)((ulong)*(undefined8 *)(param_1 + 0xc) >> 0x20) + fVar20;
        fVar21 = (float)*(undefined8 *)(param_1 + 0xe) + fVar9;
        auVar24._0_4_ = fVar12 - fVar18;
        auVar24._4_4_ = fVar13 - fVar20;
        auVar24._8_4_ = fVar21 - fVar9;
        auVar24._12_4_ = 0;
        auVar23 = NEON_frecpe(auVar24,4);
        auVar27 = NEON_frecps(auVar24,auVar23,4);
        auVar25._0_4_ = auVar23._0_4_ * auVar27._0_4_;
        auVar25._4_4_ = auVar23._4_4_ * auVar27._4_4_;
        auVar25._8_4_ = auVar23._8_4_ * auVar27._8_4_;
        auVar25._12_4_ = auVar23._12_4_ * auVar27._12_4_;
        auVar23 = NEON_frecps(auVar24,auVar25,4);
        fVar26 = auVar23._0_4_ * auVar25._0_4_ * 2.0;
        fVar28 = auVar23._4_4_ * auVar25._4_4_ * 2.0;
        fVar29 = auVar23._8_4_ * auVar25._8_4_ * 2.0;
        uStack_60 = CONCAT44(fVar17 * fVar28 - auVar23._4_4_ * auVar25._4_4_ * (fVar20 + fVar13),
                             fVar15 * fVar26 - auVar23._0_4_ * auVar25._0_4_ * (fVar18 + fVar12));
        uStack_58 = (ulong)(uint)((float)*(undefined8 *)(param_4 + 2) * fVar29 -
                                 auVar23._8_4_ * auVar25._8_4_ * (fVar9 + fVar21));
        piVar1 = (int *)(*(long *)(*(long *)(param_1 + 0x26) + lVar14 * 0x20 + 0x10) +
                        (long)iVar3 * 0x80);
        if (param_5 != (undefined8 *)0x0) {
          FUN_10981a56c(adStack_360,&uStack_60,adStack_260);
          *param_5 = 0;
          param_5[1] = 0;
          lVar14 = *(long *)(*(long *)(param_1 + 0x1e) + lVar14 * 0x20 + 0x10);
          dVar19 = *(double *)(lVar14 + (long)*piVar1 * 8);
          if (dVar19 == 1.79769313486232e+308) {
            bVar8 = false;
          }
          else {
            uVar22 = 0;
            fVar9 = 0.0;
            dVar16 = 0.0;
            uVar7 = 0;
            pfVar11 = (float *)((ulong)adStack_260 | 8);
            do {
              uVar10 = uVar7;
              dVar16 = dVar16 + adStack_360[uVar10] * dVar19;
              uVar22 = CONCAT44((float)((double)(float)((ulong)uVar22 >> 0x20) +
                                       (double)(float)((ulong)*(undefined8 *)(pfVar11 + -2) >> 0x20)
                                       * dVar19),
                                (float)((double)(float)uVar22 +
                                       (double)(float)*(undefined8 *)(pfVar11 + -2) * dVar19));
              fVar9 = (float)((double)fVar9 + (double)*pfVar11 * dVar19);
              if (uVar10 == 0x1f) {
                *param_5 = uVar22;
                *(float *)(param_5 + 1) = fVar9;
                param_5[1] = CONCAT44(auVar23._12_4_ * auVar25._12_4_ * 0.0 *
                                      (float)((ulong)param_5[1] >> 0x20),fVar29 * (float)param_5[1])
                ;
                *param_5 = CONCAT44(fVar28 * (float)((ulong)*param_5 >> 0x20),
                                    fVar26 * (float)*param_5);
                *param_3 = dVar16;
                return true;
              }
              dVar19 = *(double *)(lVar14 + (long)piVar1[uVar10 + 1] * 8);
              uVar7 = uVar10 + 1;
              pfVar11 = pfVar11 + 4;
            } while (dVar19 != 1.79769313486232e+308);
            bVar8 = 0x1e < uVar10;
          }
          *param_5 = 0;
          param_5[1] = 0;
          return bVar8;
        }
        FUN_10981a56c(adStack_260,&uStack_60,0);
        lVar14 = *(long *)(*(long *)(param_1 + 0x1e) + lVar14 * 0x20 + 0x10);
        dVar19 = *(double *)(lVar14 + (long)*piVar1 * 8);
        if (dVar19 != 1.79769313486232e+308) {
          dVar16 = 0.0;
          uVar7 = 0;
          do {
            uVar10 = uVar7;
            dVar16 = dVar16 + adStack_260[uVar10] * dVar19;
            if (uVar10 == 0x1f) {
              *param_3 = dVar16;
              return true;
            }
            dVar19 = *(double *)(lVar14 + (long)piVar1[uVar10 + 1] * 8);
            uVar7 = uVar10 + 1;
          } while (dVar19 != 1.79769313486232e+308);
          return 0x1e < uVar10;
        }
      }
    }
  }
  return false;
}



/* Entry: 10981af28; end: 10981b14f;  */

undefined8 * FUN_10981af28(undefined8 *param_1,long param_2,long param_3,uint param_4)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  long lVar6;
  ulong uVar7;
  undefined4 *puVar8;
  uint uVar9;
  undefined8 uVar10;
  
  param_1[2] = 0;
  param_1[3] = 0xffffffffffffffff;
  param_1[5] = 0x3f800000;
  param_1[4] = 0x3f8000003f800000;
  *(undefined4 *)(param_1 + 8) = 0x3d23d70a;
  param_1[0xb] = 0x3f800000;
  param_1[10] = 0x3f8000003f800000;
  param_1[0xd] = 0xbf800000;
  param_1[0xc] = 0xbf800000bf800000;
  *(undefined1 *)(param_1 + 0xe) = 0;
  *param_1 = &PTR_FUN_110b13d48;
  *(undefined1 *)(param_1 + 0x12) = 1;
  param_1[0x11] = 0;
  *(undefined8 *)((long)param_1 + 0x7c) = 0;
  *(undefined1 *)(param_1 + 0x16) = 1;
  param_1[0x15] = 0;
  *(undefined8 *)((long)param_1 + 0x9c) = 0;
  *(undefined4 *)(param_1 + 1) = 9;
  if ((int)param_4 < 0) {
    uVar9 = 0;
  }
  else {
    if (param_4 == 0) {
      *(undefined4 *)((long)param_1 + 0x7c) = 0;
      *(undefined4 *)((long)param_1 + 0x9c) = 0;
      goto LAB_10981b10c;
    }
    lVar3 = (ulong)param_4 << 4;
    FUN_1098256f4(lVar3,0x10);
    uVar9 = *(uint *)((long)param_1 + 0x7c);
    if (0 < (int)uVar9) {
      lVar6 = 0;
      do {
        uVar10 = *(undefined8 *)(param_1[0x11] + lVar6);
        ((undefined8 *)(lVar3 + lVar6))[1] = ((undefined8 *)(param_1[0x11] + lVar6))[1];
        *(undefined8 *)(lVar3 + lVar6) = uVar10;
        lVar6 = lVar6 + 0x10;
      } while ((ulong)uVar9 * 0x10 - lVar6 != 0);
    }
    if (param_1[0x11] != 0) {
      if (*(char *)(param_1 + 0x12) == '\x01') {
        FUN_109825740();
      }
      param_1[0x11] = 0;
    }
    *(undefined1 *)(param_1 + 0x12) = 1;
    param_1[0x11] = lVar3;
    *(uint *)(param_1 + 0x10) = param_4;
    uVar9 = *(uint *)((long)param_1 + 0x9c);
  }
  *(uint *)((long)param_1 + 0x7c) = param_4;
  if ((int)uVar9 < (int)param_4) {
    if (*(int *)(param_1 + 0x14) < (int)param_4) {
      puVar4 = (undefined4 *)(-(ulong)(param_4 >> 0x1f) & 0xfffffffc00000000 | (ulong)param_4 << 2);
      FUN_1098256f4(puVar4,0x10);
      uVar7 = (ulong)*(uint *)((long)param_1 + 0x9c);
      puVar5 = (undefined4 *)param_1[0x15];
      puVar8 = puVar4;
      if ((int)*(uint *)((long)param_1 + 0x9c) < 1) {
        if (puVar5 != (undefined4 *)0x0) goto LAB_10981b09c;
      }
      else {
        do {
          *puVar8 = *puVar5;
          uVar7 = uVar7 - 1;
          puVar8 = puVar8 + 1;
          puVar5 = puVar5 + 1;
        } while (uVar7 != 0);
LAB_10981b09c:
        if (*(char *)(param_1 + 0x16) == '\x01') {
          FUN_109825740();
        }
      }
      *(undefined1 *)(param_1 + 0x16) = 1;
      param_1[0x15] = puVar4;
      *(uint *)(param_1 + 0x14) = param_4;
    }
    else {
      puVar4 = (undefined4 *)param_1[0x15];
    }
    _bzero(puVar4 + (int)uVar9,(ulong)(param_4 + ~uVar9) * 4 + 4);
  }
  *(uint *)((long)param_1 + 0x9c) = param_4;
  if (0 < (int)param_4) {
    uVar7 = 0;
    do {
      puVar1 = (undefined8 *)(param_2 + uVar7 * 0x10);
      uVar10 = *puVar1;
      puVar2 = (undefined8 *)(param_1[0x11] + uVar7 * 0x10);
      puVar2[1] = puVar1[1];
      *puVar2 = uVar10;
      *(undefined4 *)(param_1[0x15] + uVar7 * 4) = *(undefined4 *)(param_3 + uVar7 * 4);
      uVar7 = uVar7 + 1;
    } while (param_4 != uVar7);
  }
LAB_10981b10c:
  FUN_1098184d8(param_1);
  return param_1;
}



/* Entry: 10981b150; end: 10981b5d3;  */

void FUN_10981b150(undefined8 *param_1,float *param_2,undefined1 (*param_3) [16],long param_4,
                  uint *param_5)

{
  undefined1 (*pauVar1) [16];
  int iVar2;
  ulong uVar3;
  uint uVar4;
  ulong uVar5;
  float *pfVar6;
  undefined1 (*pauVar7) [16];
  long lVar8;
  int iVar9;
  ulong uVar10;
  ulong uVar11;
  int iVar12;
  undefined8 *puVar13;
  uint uVar14;
  ulong uVar15;
  uint uVar16;
  float *pfVar17;
  undefined8 *puVar18;
  float *pfVar19;
  float fVar20;
  undefined8 uVar21;
  float fVar22;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  undefined1 auVar23 [16];
  float fVar28;
  float fVar29;
  float fVar30;
  undefined8 uVar31;
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  ulong uVar35;
  ulong uStack_1190;
  uint uStack_1154;
  float afStack_1150 [2];
  undefined8 uStack_1148;
  long lStack_950;
  uint uStack_894;
  ulong auStack_890 [2];
  float afStack_880 [2];
  undefined8 uStack_878;
  long lStack_80;
  
  uVar16 = (uint)param_5;
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  *param_1 = 0;
  param_1[1] = 0;
  fVar20 = (float)*(undefined8 *)*param_3;
  auVar33._0_4_ = fVar20 * fVar20;
  fVar29 = (float)((ulong)*(undefined8 *)*param_3 >> 0x20);
  auVar33._4_4_ = fVar29 * fVar29;
  fVar26 = (float)*(undefined8 *)(*param_3 + 8);
  auVar33._8_4_ = fVar26 * fVar26;
  fVar27 = (float)((ulong)*(undefined8 *)(*param_3 + 8) >> 0x20);
  auVar33._12_4_ = fVar27 * fVar27;
  auVar23 = NEON_ext(auVar33,auVar33,8,1);
  fVar22 = auVar33._0_4_ + auVar33._4_4_ + auVar23._0_4_;
  if (1.4210855e-14 <= fVar22) {
    fVar22 = 1.0 / SQRT(fVar22);
    uVar10 = CONCAT44(fVar29 * fVar22,fVar20 * fVar22);
    auStack_890[1]._0_4_ = fVar26 * fVar22;
    auStack_890[1]._4_4_ = fVar27 * fVar22;
  }
  else {
    auStack_890[1] = 0;
    uVar10 = 0x3f800000;
  }
  auStack_890[0] = uVar10;
  fVar20 = param_2[0x1f];
  uVar11 = (ulong)(uint)fVar20;
  pfVar6 = param_2;
  if (0 < (int)fVar20) {
    iVar12 = 0;
    pfVar17 = *(float **)(param_2 + 0x2a);
    puVar18 = *(undefined8 **)(param_2 + 0x22);
    uVar35 = 0xdd5e0b6b;
    lVar8 = param_4;
    do {
      uVar3 = uVar11;
      if ((long)uVar11 < 2) {
        uVar3 = 1;
      }
      if (0x7f < (long)uVar3) {
        uVar3 = 0x80;
      }
      uVar16 = (uint)uVar11;
      if ((int)uVar16 < 2) {
        uVar16 = 1;
      }
      uVar10 = (ulong)uVar16;
      if (0x7f < uVar10) {
        uVar10 = 0x80;
      }
      uVar14 = (int)fVar20 - iVar12;
      uVar16 = uVar14;
      if (0x7f < (int)uVar14) {
        uVar16 = 0x80;
      }
      if ((int)uVar14 < 1) {
        pfVar6 = (float *)0xffffffffffffffff;
        uVar10 = 0xff7fffff;
        param_4 = lVar8;
LAB_10981b2fc:
        uStack_894 = (uint)uVar10;
      }
      else {
        uVar15 = 0;
        param_4 = (long)(int)uVar16;
        auVar23._8_8_ = auStack_890[1];
        auVar23._0_8_ = auStack_890[0];
        pfVar6 = pfVar17;
        puVar13 = puVar18;
        do {
          puVar18 = puVar13 + 2;
          uVar21 = puVar13[1];
          uVar31 = *puVar13;
          fVar29 = param_2[9];
          fVar26 = param_2[10];
          fVar24 = auVar23._4_4_;
          fVar30 = auVar23._8_4_;
          pfVar17 = pfVar6 + 1;
          fVar28 = *pfVar6;
          fVar22 = (float)uVar31 * param_2[8] + auVar23._0_4_ * param_2[8] * fVar28;
          fVar27 = fVar22;
          (**(code **)(*(long *)param_2 + 0x60))(param_2);
          auVar23._8_8_ = auStack_890[1];
          auVar23._0_8_ = auStack_890[0];
          fVar25 = (float)(auStack_890[0] >> 0x20);
          (&uStack_878)[uVar15 * 2] =
               (ulong)(uint)(((float)uVar21 * fVar26 + fVar30 * fVar26 * fVar28) -
                            (float)auStack_890[1] * fVar27);
          *(ulong *)(afStack_880 + uVar15 * 4) =
               CONCAT44(((float)((ulong)uVar31 >> 0x20) * fVar29 + fVar24 * fVar29 * fVar28) -
                        fVar25 * fVar27,fVar22 - (float)auStack_890[0] * fVar27);
          uVar15 = uVar15 + 1;
          pfVar6 = pfVar17;
          puVar13 = puVar18;
        } while (uVar10 != uVar15);
        if (uVar14 < 4) {
          uVar15 = 0;
          uVar10 = 0xff7fffff;
          iVar9 = -1;
          do {
            auVar32._0_4_ = (float)auStack_890[0] * afStack_880[uVar15 * 4];
            auVar32._4_4_ = fVar25 * afStack_880[uVar15 * 4 + 1];
            auVar32._8_4_ = (float)auStack_890[1] * *(float *)(&uStack_878 + uVar15 * 2);
            auVar32._12_4_ =
                 (float)(auStack_890[1] >> 0x20) * *(float *)((long)&uStack_878 + uVar15 * 0x10 + 4)
            ;
            auVar33 = NEON_ext(auVar32,auVar32,8,1);
            fVar29 = auVar32._0_4_ + auVar32._4_4_ + auVar33._0_4_;
            iVar2 = (int)uVar15;
            uVar5 = (ulong)(uint)fVar29;
            if (fVar29 <= (float)uVar10) {
              iVar2 = iVar9;
              uVar5 = uVar10;
            }
            uVar10 = uVar5;
            uVar15 = uVar15 + 1;
            iVar9 = iVar2;
          } while (uVar3 != uVar15);
          pfVar6 = (float *)(long)iVar2;
          param_4 = lVar8;
          goto LAB_10981b2fc;
        }
        pfVar6 = afStack_880;
        param_3 = (undefined1 (*) [16])auStack_890;
        param_5 = &uStack_894;
        (*(code *)PTR_FUN_1132e04a0)();
        uVar10 = (ulong)uStack_894;
      }
      uVar16 = (uint)param_5;
      if ((float)uVar35 < (float)uVar10) {
        auVar33 = *(undefined1 (*) [16])(afStack_880 + (long)pfVar6 * 4);
        param_1[1] = auVar33._8_8_;
        *param_1 = auVar33._0_8_;
        uVar35 = uVar10;
      }
      iVar12 = iVar12 + 0x80;
      uVar11 = uVar11 - 0x80;
      lVar8 = param_4;
    } while (iVar12 < (int)fVar20);
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
    return;
  }
  ___stack_chk_fail();
  fVar20 = (float)uVar10;
  lStack_950 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pfVar17 = pfVar6;
  pauVar7 = param_3;
  if (0 < (int)uVar16) {
    uStack_1190 = 0;
    do {
      fVar20 = pfVar6[0x1f];
      uVar11 = (ulong)(uint)fVar20;
      if (0 < (int)fVar20) {
        iVar12 = 0;
        pfVar19 = *(float **)(pfVar6 + 0x2a);
        puVar18 = *(undefined8 **)(pfVar6 + 0x22);
        pauVar1 = param_3 + uStack_1190;
        uVar35 = 0xdd5e0b6b;
        do {
          uVar3 = uVar11;
          if ((long)uVar11 < 2) {
            uVar3 = 1;
          }
          if (0x7f < (long)uVar3) {
            uVar3 = 0x80;
          }
          uVar14 = (uint)uVar11;
          if ((int)uVar14 < 2) {
            uVar14 = 1;
          }
          uVar10 = (ulong)uVar14;
          if (0x7f < uVar10) {
            uVar10 = 0x80;
          }
          uVar4 = (int)fVar20 - iVar12;
          uVar14 = uVar4;
          if (0x7f < (int)uVar4) {
            uVar14 = 0x80;
          }
          if ((int)uVar4 < 1) {
            pfVar17 = (float *)0xffffffffffffffff;
            uVar10 = 0xff7fffff;
LAB_10981b524:
            uStack_1154 = (uint)uVar10;
          }
          else {
            uVar15 = 0;
            auVar33 = *pauVar1;
            puVar13 = puVar18;
            pfVar17 = pfVar19;
            do {
              puVar18 = puVar13 + 2;
              uVar21 = puVar13[1];
              uVar31 = *puVar13;
              fVar29 = pfVar6[9];
              fVar26 = pfVar6[10];
              fVar24 = auVar33._4_4_;
              fVar25 = auVar33._8_4_;
              pfVar19 = pfVar17 + 1;
              fVar30 = *pfVar17;
              fVar22 = (float)uVar31 * pfVar6[8] + auVar33._0_4_ * pfVar6[8] * fVar30;
              fVar27 = fVar22;
              (**(code **)(*(long *)pfVar6 + 0x60))(pfVar6);
              auVar33 = *pauVar1;
              (&uStack_1148)[uVar15 * 2] =
                   (ulong)(uint)(((float)uVar21 * fVar26 + fVar25 * fVar26 * fVar30) -
                                auVar33._8_4_ * fVar27);
              *(ulong *)(afStack_1150 + uVar15 * 4) =
                   CONCAT44(((float)((ulong)uVar31 >> 0x20) * fVar29 + fVar24 * fVar29 * fVar30) -
                            auVar33._4_4_ * fVar27,fVar22 - auVar33._0_4_ * fVar27);
              uVar15 = uVar15 + 1;
              puVar13 = puVar18;
              pfVar17 = pfVar19;
            } while (uVar10 != uVar15);
            if (uVar4 < 4) {
              uVar15 = 0;
              uVar10 = 0xff7fffff;
              iVar9 = -1;
              do {
                auVar34._0_4_ = auVar33._0_4_ * afStack_1150[uVar15 * 4];
                auVar34._4_4_ = auVar33._4_4_ * afStack_1150[uVar15 * 4 + 1];
                auVar34._8_4_ = auVar33._8_4_ * *(float *)(&uStack_1148 + uVar15 * 2);
                auVar34._12_4_ = auVar33._12_4_ * *(float *)((long)&uStack_1148 + uVar15 * 0x10 + 4)
                ;
                auVar23 = NEON_ext(auVar34,auVar34,8,1);
                fVar29 = auVar34._0_4_ + auVar34._4_4_ + auVar23._0_4_;
                iVar2 = (int)uVar15;
                uVar5 = (ulong)(uint)fVar29;
                if (fVar29 <= (float)uVar10) {
                  iVar2 = iVar9;
                  uVar5 = uVar10;
                }
                uVar10 = uVar5;
                uVar15 = uVar15 + 1;
                iVar9 = iVar2;
              } while (uVar3 != uVar15);
              pfVar17 = (float *)(long)iVar2;
              goto LAB_10981b524;
            }
            pfVar17 = afStack_1150;
            pauVar7 = pauVar1;
            (*(code *)PTR_FUN_1132e04a0)(pfVar17,pauVar1,(long)(int)uVar14,&uStack_1154);
            uVar10 = (ulong)uStack_1154;
          }
          if ((float)uVar35 < (float)uVar10) {
            auVar33 = *(undefined1 (*) [16])(afStack_1150 + (long)pfVar17 * 4);
            puVar13 = (undefined8 *)(param_4 + uStack_1190 * 0x10);
            puVar13[1] = auVar33._8_8_;
            *puVar13 = auVar33._0_8_;
            uVar35 = uVar10;
          }
          iVar12 = iVar12 + 0x80;
          uVar11 = uVar11 - 0x80;
        } while (iVar12 < (int)fVar20);
      }
      fVar20 = (float)uVar10;
      uStack_1190 = uStack_1190 + 1;
    } while (uStack_1190 != uVar16);
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_950) {
    ___stack_chk_fail();
    fVar29 = (pfVar17[0x18] - pfVar17[0x14]) * 0.5;
    fVar26 = (pfVar17[0x19] - pfVar17[0x15]) * 0.5;
    fVar27 = (pfVar17[0x1a] - pfVar17[0x16]) * 0.5;
    fVar27 = fVar27 + fVar27;
    fVar20 = fVar20 / 12.0;
    fVar27 = fVar27 * fVar27;
    fVar29 = fVar29 + fVar29;
    fVar26 = fVar26 + fVar26;
    uVar31 = NEON_rev64(CONCAT44(fVar27 + fVar26 * fVar26,fVar27 + fVar29 * fVar29),4);
    *(ulong *)*pauVar7 = CONCAT44((float)((ulong)uVar31 >> 0x20) * fVar20,(float)uVar31 * fVar20);
    *(float *)(*pauVar7 + 8) = fVar20 * (fVar26 * fVar26 + fVar29 * fVar29);
    *(undefined4 *)(*pauVar7 + 0xc) = 0;
    return;
  }
  return;
}



/* Entry: 10981b5d4; end: 10981b62b;  */

void FUN_10981b5d4(float param_1,long param_2,undefined8 *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  undefined8 uVar4;
  
  fVar1 = ((float)*(undefined8 *)(param_2 + 0x60) - (float)*(undefined8 *)(param_2 + 0x50)) * 0.5;
  fVar2 = ((float)((ulong)*(undefined8 *)(param_2 + 0x60) >> 0x20) -
          (float)((ulong)*(undefined8 *)(param_2 + 0x50) >> 0x20)) * 0.5;
  fVar3 = ((float)*(undefined8 *)(param_2 + 0x68) - (float)*(undefined8 *)(param_2 + 0x58)) * 0.5;
  fVar3 = fVar3 + fVar3;
  param_1 = param_1 / 12.0;
  fVar3 = fVar3 * fVar3;
  fVar1 = fVar1 + fVar1;
  fVar2 = fVar2 + fVar2;
  uVar4 = NEON_rev64(CONCAT44(fVar3 + fVar2 * fVar2,fVar3 + fVar1 * fVar1),4);
  *param_3 = CONCAT44((float)((ulong)uVar4 >> 0x20) * param_1,(float)uVar4 * param_1);
  *(float *)(param_3 + 1) = param_1 * (fVar2 * fVar2 + fVar1 * fVar1);
  *(undefined4 *)((long)param_3 + 0xc) = 0;
  return;
}



/* Entry: 10981b62c; end: 10981b76f;  */

undefined * FUN_10981b62c(long param_1,long param_2,long *param_3)

{
  uint uVar1;
  long *plVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  
  FUN_109816008();
  lVar3 = 0;
  do {
    *(undefined4 *)(param_2 + 0x20 + lVar3) = *(undefined4 *)(param_1 + 0x30 + lVar3);
    lVar3 = lVar3 + 4;
  } while (lVar3 != 0x10);
  lVar3 = 0;
  do {
    *(undefined4 *)(param_2 + 0x10 + lVar3) = *(undefined4 *)(param_1 + 0x20 + lVar3);
    lVar3 = lVar3 + 4;
  } while (lVar3 != 0x10);
  *(undefined4 *)(param_2 + 0x30) = *(undefined4 *)(param_1 + 0x40);
  *(undefined4 *)(param_2 + 0x34) = 0;
  uVar1 = *(uint *)(param_1 + 0x7c);
  if (uVar1 == 0) {
    *(undefined8 *)(param_2 + 0x38) = 0;
    *(undefined4 *)(param_2 + 0x40) = 0;
  }
  else {
    plVar2 = param_3;
    (**(code **)(*param_3 + 0x38))(param_3,*(undefined8 *)(param_1 + 0x88));
    *(long **)(param_2 + 0x38) = plVar2;
    *(uint *)(param_2 + 0x40) = uVar1;
    plVar2 = param_3;
    (**(code **)(*param_3 + 0x20))(param_3,0x14,(ulong)uVar1);
    lVar3 = *(long *)(param_1 + 0x88);
    if (0 < (int)uVar1) {
      uVar4 = 0;
      lVar5 = plVar2[1];
      lVar6 = *(long *)(param_1 + 0xa8);
      do {
        lVar7 = 0;
        do {
          *(undefined4 *)(lVar5 + lVar7) = *(undefined4 *)(lVar3 + lVar7);
          lVar7 = lVar7 + 4;
        } while (lVar7 != 0x10);
        *(undefined4 *)(lVar5 + 0x10) = *(undefined4 *)(lVar6 + uVar4 * 4);
        uVar4 = uVar4 + 1;
        lVar5 = lVar5 + 0x14;
        lVar3 = lVar3 + 0x10;
      } while (uVar4 != uVar1);
    }
    (**(code **)(*param_3 + 0x28))(param_3,plVar2,&UNK_10f580b85,0x59415241);
  }
  *(undefined4 *)(param_2 + 0x44) = 0;
  return &UNK_10f580b99;
}



/* Entry: 10981b770; end: 10981b7af;  */

undefined8 * FUN_10981b770(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110b13d48;
  FUN_10981b80c(param_1 + 0x13);
  FUN_10980eb0c(param_1 + 0xf);
  return param_1;
}



/* Entry: 10981b7b0; end: 10981b7f7;  */

void FUN_10981b7b0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110b13d48;
  FUN_10981b80c(param_1 + 0x13);
  FUN_10980eb0c(param_1 + 0xf);
  FUN_109825740(param_1);
  return;
}



/* Entry: 10981b7f8; end: 10981b80b;  */

undefined * FUN_10981b7f8(void)

{
  return &UNK_10f580bb0;
}



/* Entry: 10981b80c; end: 10981b857;  */

long FUN_10981b80c(long param_1)

{
  if ((*(long *)(param_1 + 0x10) != 0) && (*(char *)(param_1 + 0x18) == '\x01')) {
    FUN_109825740();
  }
  *(undefined1 *)(param_1 + 0x18) = 1;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  return param_1;
}



/* Entry: 10981b858; end: 10981b8a7;  */

undefined8 * FUN_10981b858(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110b13e28;
  if ((undefined8 *)param_1[9] != (undefined8 *)0x0) {
    (*(code *)**(undefined8 **)param_1[9])();
    if (param_1[9] != 0) {
      FUN_109825740();
    }
  }
  return param_1;
}



/* Entry: 10981b8a8; end: 10981bd0b;  */

void FUN_10981b8a8(long param_1,long param_2)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  undefined8 *puVar4;
  long lVar5;
  uint uVar6;
  int iVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  long lVar11;
  ulong uVar12;
  undefined8 uVar13;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  lVar9 = *(long *)(param_1 + 0x48);
  if (lVar9 == 0) {
    puVar4 = (undefined8 *)0xc0;
    FUN_1098256f4(0xc0,0x10);
    *puVar4 = &PTR_FUN_110b13988;
    func_0x00010981cdd4(puVar4 + 1,param_2 + 8);
    *(undefined1 *)(puVar4 + 8) = 1;
    puVar4[7] = 0;
    *(undefined4 *)((long)puVar4 + 0x2c) = 0;
    *(undefined4 *)(puVar4 + 6) = 0;
    uVar2 = *(uint *)(param_2 + 0x2c);
    uVar10 = (ulong)uVar2;
    uStack_70 = 0;
    uStack_58 = 0;
    uStack_60 = 0;
    uStack_78 = 0;
    uStack_80 = 0;
    uStack_68 = 1;
    if ((int)uVar2 < 0) {
      lVar8 = (long)(int)uVar2;
      lVar9 = lVar8 * 0x30;
      do {
        lVar8 = lVar8 + 1;
        FUN_10980501c(puVar4[7] + lVar9);
        lVar9 = lVar9 + 0x30;
      } while ((int)lVar8 != 0);
    }
    else if (uVar2 != 0) {
      lVar9 = uVar10 * 0x30;
      FUN_1098256f4(lVar9,0x10);
      uVar3 = *(uint *)((long)puVar4 + 0x2c);
      if (0 < (int)uVar3) {
        lVar8 = 0;
        do {
          lVar11 = lVar9 + lVar8;
          lVar5 = puVar4[7] + lVar8;
          FUN_10981163c(lVar11,lVar5);
          uVar13 = *(undefined8 *)(lVar5 + 0x20);
          *(undefined8 *)(lVar11 + 0x28) = *(undefined8 *)(lVar5 + 0x28);
          *(undefined8 *)(lVar11 + 0x20) = uVar13;
          lVar8 = lVar8 + 0x30;
        } while ((ulong)uVar3 * 0x30 - lVar8 != 0);
        uVar3 = *(uint *)((long)puVar4 + 0x2c);
        if (0 < (int)uVar3) {
          lVar8 = 0;
          do {
            FUN_10980501c(puVar4[7] + lVar8);
            lVar8 = lVar8 + 0x30;
          } while ((ulong)uVar3 * 0x30 - lVar8 != 0);
        }
      }
      if (puVar4[7] != 0) {
        if (*(char *)(puVar4 + 8) == '\x01') {
          FUN_109825740();
        }
        puVar4[7] = 0;
      }
      lVar8 = 0;
      *(undefined1 *)(puVar4 + 8) = 1;
      puVar4[7] = lVar9;
      *(uint *)(puVar4 + 6) = uVar2;
      uVar12 = uVar10;
      do {
        lVar9 = puVar4[7] + lVar8;
        FUN_10981163c(lVar9,&uStack_80);
        *(undefined8 *)(lVar9 + 0x28) = uStack_58;
        *(undefined8 *)(lVar9 + 0x20) = uStack_60;
        lVar8 = lVar8 + 0x30;
        uVar12 = uVar12 - 1;
      } while (uVar12 != 0);
    }
    *(uint *)((long)puVar4 + 0x2c) = uVar2;
    FUN_10980501c(&uStack_80);
    if (0 < (int)uVar2) {
      lVar9 = 0;
      lVar8 = puVar4[7];
      do {
        lVar11 = lVar8 + lVar9;
        lVar5 = *(long *)(param_2 + 0x38) + lVar9;
        FUN_10981163c(lVar11,lVar5);
        uVar13 = *(undefined8 *)(lVar5 + 0x20);
        *(undefined8 *)(lVar11 + 0x28) = *(undefined8 *)(lVar5 + 0x28);
        *(undefined8 *)(lVar11 + 0x20) = uVar13;
        lVar9 = lVar9 + 0x30;
      } while (uVar10 * 0x30 - lVar9 != 0);
    }
    func_0x00010981cdd4(puVar4 + 9,param_2 + 0x48);
    uVar13 = *(undefined8 *)(param_2 + 0x70);
    puVar4[0xf] = *(undefined8 *)(param_2 + 0x78);
    puVar4[0xe] = uVar13;
    uVar13 = *(undefined8 *)(param_2 + 0x80);
    puVar4[0x11] = *(undefined8 *)(param_2 + 0x88);
    puVar4[0x10] = uVar13;
    *(undefined4 *)(puVar4 + 0x12) = *(undefined4 *)(param_2 + 0x90);
    uVar13 = *(undefined8 *)(param_2 + 0xa0);
    puVar4[0x15] = *(undefined8 *)(param_2 + 0xa8);
    puVar4[0x14] = uVar13;
    uVar13 = *(undefined8 *)(param_2 + 0xb0);
    puVar4[0x17] = *(undefined8 *)(param_2 + 0xb8);
    puVar4[0x16] = uVar13;
    *(undefined8 **)(param_1 + 0x48) = puVar4;
  }
  else {
    FUN_10981ccec(lVar9 + 8,param_2 + 8);
    uVar2 = *(uint *)(param_2 + 0x2c);
    uStack_70 = 0;
    uStack_58 = 0;
    uStack_60 = 0;
    uStack_78 = 0;
    uStack_80 = 0;
    uStack_68 = 1;
    uVar3 = *(uint *)(lVar9 + 0x2c);
    iVar7 = uVar3 - uVar2;
    if (iVar7 == 0 || (int)uVar3 < (int)uVar2) {
      if ((int)uVar3 < (int)uVar2) {
        if (*(int *)(lVar9 + 0x30) < (int)uVar2) {
          if (uVar2 == 0) {
            lVar8 = 0;
            uVar6 = uVar3;
          }
          else {
            lVar8 = (long)(int)uVar2 * 0x30;
            FUN_1098256f4(lVar8,0x10);
            uVar6 = *(uint *)(lVar9 + 0x2c);
          }
          if (0 < (int)uVar6) {
            lVar11 = 0;
            do {
              lVar5 = lVar8 + lVar11;
              lVar1 = *(long *)(lVar9 + 0x38) + lVar11;
              FUN_10981163c(lVar5,lVar1);
              uVar13 = *(undefined8 *)(lVar1 + 0x20);
              *(undefined8 *)(lVar5 + 0x28) = *(undefined8 *)(lVar1 + 0x28);
              *(undefined8 *)(lVar5 + 0x20) = uVar13;
              lVar11 = lVar11 + 0x30;
            } while ((ulong)uVar6 * 0x30 - lVar11 != 0);
            uVar6 = *(uint *)(lVar9 + 0x2c);
            if (0 < (int)uVar6) {
              lVar11 = 0;
              do {
                FUN_10980501c(*(long *)(lVar9 + 0x38) + lVar11);
                lVar11 = lVar11 + 0x30;
              } while ((ulong)uVar6 * 0x30 - lVar11 != 0);
            }
          }
          if (*(long *)(lVar9 + 0x38) != 0) {
            if (*(char *)(lVar9 + 0x40) == '\x01') {
              FUN_109825740();
            }
            *(undefined8 *)(lVar9 + 0x38) = 0;
          }
          *(undefined1 *)(lVar9 + 0x40) = 1;
          *(long *)(lVar9 + 0x38) = lVar8;
          *(uint *)(lVar9 + 0x30) = uVar2;
        }
        iVar7 = uVar2 - uVar3;
        lVar8 = (long)(int)uVar3 * 0x30;
        do {
          lVar11 = *(long *)(lVar9 + 0x38) + lVar8;
          FUN_10981163c(lVar11,&uStack_80);
          *(undefined8 *)(lVar11 + 0x28) = uStack_58;
          *(undefined8 *)(lVar11 + 0x20) = uStack_60;
          lVar8 = lVar8 + 0x30;
          iVar7 = iVar7 + -1;
        } while (iVar7 != 0);
      }
    }
    else {
      lVar8 = (long)(int)uVar2 * 0x30;
      do {
        FUN_10980501c(*(long *)(lVar9 + 0x38) + lVar8);
        lVar8 = lVar8 + 0x30;
        iVar7 = iVar7 + -1;
      } while (iVar7 != 0);
    }
    *(uint *)(lVar9 + 0x2c) = uVar2;
    FUN_10980501c(&uStack_80);
    if (0 < (int)uVar2) {
      lVar8 = 0;
      lVar11 = *(long *)(lVar9 + 0x38);
      do {
        lVar5 = lVar11 + lVar8;
        lVar1 = *(long *)(param_2 + 0x38) + lVar8;
        FUN_10981163c(lVar5,lVar1);
        uVar13 = *(undefined8 *)(lVar1 + 0x20);
        *(undefined8 *)(lVar5 + 0x28) = *(undefined8 *)(lVar1 + 0x28);
        *(undefined8 *)(lVar5 + 0x20) = uVar13;
        lVar8 = lVar8 + 0x30;
      } while ((ulong)uVar2 * 0x30 - lVar8 != 0);
    }
    FUN_10981ccec(lVar9 + 0x48,param_2 + 0x48);
    uVar13 = *(undefined8 *)(param_2 + 0x70);
    *(undefined8 *)(lVar9 + 0x78) = *(undefined8 *)(param_2 + 0x78);
    *(undefined8 *)(lVar9 + 0x70) = uVar13;
    uVar13 = *(undefined8 *)(param_2 + 0x80);
    *(undefined8 *)(lVar9 + 0x88) = *(undefined8 *)(param_2 + 0x88);
    *(undefined8 *)(lVar9 + 0x80) = uVar13;
    *(undefined4 *)(lVar9 + 0x90) = *(undefined4 *)(param_2 + 0x90);
    uVar13 = *(undefined8 *)(param_2 + 0xa0);
    *(undefined8 *)(lVar9 + 0xa8) = *(undefined8 *)(param_2 + 0xa8);
    *(undefined8 *)(lVar9 + 0xa0) = uVar13;
    uVar13 = *(undefined8 *)(param_2 + 0xb0);
    *(undefined8 *)(lVar9 + 0xb8) = *(undefined8 *)(param_2 + 0xb8);
    *(undefined8 *)(lVar9 + 0xb0) = uVar13;
  }
  return;
}



/* Entry: 10981bd0c; end: 10981c5fb;  */

long * FUN_10981bd0c(long *param_1,int *param_2)

{
  float *pfVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined1 auVar4 [16];
  int iVar5;
  undefined8 *puVar6;
  long *plVar7;
  undefined **ppuVar8;
  int *piVar9;
  long *plVar10;
  undefined **ppuVar11;
  float *pfVar12;
  int iVar13;
  uint uVar14;
  uint uVar15;
  long lVar16;
  ulong uVar17;
  undefined8 *extraout_x8;
  long lVar18;
  undefined **ppuVar19;
  int *piVar20;
  float *pfVar21;
  undefined **ppuVar22;
  undefined **ppuVar23;
  undefined **ppuVar24;
  undefined **ppuVar25;
  int iVar26;
  ulong uVar27;
  undefined8 *unaff_x25;
  undefined **unaff_x26;
  undefined8 unaff_x27;
  long unaff_x28;
  float fVar30;
  float fVar31;
  undefined8 extraout_var;
  undefined8 extraout_var_00;
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  float fVar32;
  float fVar33;
  float fVar34;
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  float fVar38;
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined8 unaff_d8;
  undefined8 unaff_d9;
  float fStack_1390;
  float fStack_138c;
  float fStack_1388;
  float fStack_1380;
  float fStack_137c;
  float fStack_1378;
  float fStack_12e4;
  float afStack_12e0 [2];
  undefined8 uStack_12d8;
  long lStack_ae0;
  long lStack_ad0;
  undefined8 uStack_ac8;
  undefined **ppuStack_ac0;
  undefined8 *puStack_ab8;
  ulong uStack_ab0;
  undefined **ppuStack_aa8;
  undefined **ppuStack_aa0;
  undefined **ppuStack_a98;
  long *plStack_a90;
  undefined8 *puStack_a88;
  undefined1 **ppuStack_a80;
  code *pcStack_a78;
  undefined8 uStack_a70;
  undefined8 uStack_a68;
  float fStack_a54;
  float fStack_a50;
  float fStack_a4c;
  float fStack_a48;
  float fStack_a44;
  undefined8 uStack_a40;
  float afStack_a38 [512];
  long lStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  long lStack_220;
  undefined8 uStack_218;
  undefined **ppuStack_210;
  undefined8 *puStack_208;
  ulong uStack_200;
  undefined **ppuStack_1f8;
  undefined **ppuStack_1f0;
  undefined **ppuStack_1e8;
  int *piStack_1e0;
  long *plStack_1d8;
  undefined1 *puStack_1d0;
  code *pcStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  uint uStack_1a8;
  int *piStack_1a0;
  byte bStack_198;
  undefined8 uStack_190;
  float fStack_188;
  float fStack_184;
  undefined1 auStack_180 [4];
  undefined4 uStack_17c;
  undefined4 uStack_178;
  undefined **ppuStack_170;
  undefined1 uStack_168;
  undefined1 auStack_160 [4];
  ulong uStack_15c;
  long lStack_150;
  undefined1 uStack_148;
  undefined1 auStack_140 [4];
  undefined8 uStack_13c;
  undefined8 uStack_130;
  undefined1 uStack_128;
  undefined1 auStack_120 [4];
  undefined8 uStack_11c;
  long lStack_110;
  undefined1 uStack_108;
  undefined1 auStack_100 [4];
  undefined8 uStack_fc;
  long lStack_f0;
  undefined1 uStack_e8;
  undefined1 auStack_e0 [4];
  undefined8 uStack_dc;
  undefined **ppuStack_d0;
  byte bStack_c8;
  undefined8 uStack_c0;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  long lStack_b0;
  undefined1 uStack_a8;
  undefined7 uStack_a7;
  long lStack_88;
  
  ppuVar24 = (undefined **)auStack_160;
  lStack_88 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if (((undefined8 *)param_1[9] != (undefined8 *)0x0) &&
     ((*(code *)**(undefined8 **)param_1[9])(), param_1[9] != 0)) {
    FUN_109825740();
  }
  puVar6 = (undefined8 *)0xc0;
  FUN_1098256f4(0xc0,0x10);
  *puVar6 = &PTR_FUN_110b13988;
  uVar27 = 1;
  *(undefined1 *)(puVar6 + 4) = 1;
  puVar6[3] = 0;
  *(undefined8 *)((long)puVar6 + 0xc) = 0;
  *(undefined1 *)(puVar6 + 8) = 1;
  puVar6[7] = 0;
  *(undefined8 *)((long)puVar6 + 0x2c) = 0;
  *(undefined1 *)(puVar6 + 0xc) = 1;
  puVar6[0xb] = 0;
  *(undefined8 *)((long)puVar6 + 0x4c) = 0;
  param_1[9] = (long)puVar6;
  bStack_c8 = 1;
  ppuStack_d0 = (undefined **)0x0;
  uStack_dc = 0;
  for (iVar26 = 0; plVar7 = param_1, (**(code **)(*param_1 + 200))(), iVar26 < (int)plVar7;
      iVar26 = iVar26 + 1) {
    iVar5 = (int)uStack_dc;
    unaff_x25 = (undefined8 *)(uStack_dc & 0xffffffff);
    iVar13 = (int)uStack_dc;
    if ((int)uStack_dc == uStack_dc._4_4_) {
      uVar14 = (int)uStack_dc << 1;
      if ((int)uStack_dc == 0) {
        uVar14 = 1;
      }
      unaff_x26 = (undefined **)(ulong)uVar14;
      if ((int)uStack_dc < (int)uVar14) {
        if (uVar14 == 0) {
          ppuVar8 = (undefined **)0x0;
          puVar6 = unaff_x25;
        }
        else {
          ppuVar8 = (undefined **)
                    (-(ulong)(uVar14 >> 0x1f) & 0xfffffff000000000 | (long)unaff_x26 << 4);
          FUN_1098256f4(ppuVar8,0x10);
          puVar6 = (undefined8 *)(uStack_dc & 0xffffffff);
        }
        if (0 < (int)puVar6) {
          lVar16 = 0;
          do {
            uVar2 = *(undefined8 *)((long)ppuStack_d0 + lVar16);
            ((undefined8 *)((long)ppuVar8 + lVar16))[1] =
                 ((undefined8 *)((long)ppuStack_d0 + lVar16))[1];
            *(undefined8 *)((long)ppuVar8 + lVar16) = uVar2;
            lVar16 = lVar16 + 0x10;
          } while ((long)puVar6 << 4 != lVar16);
        }
        if ((ppuStack_d0 != (undefined **)0x0) && ((bStack_c8 & 1) != 0)) {
          FUN_109825740();
        }
        bStack_c8 = 1;
        uStack_dc = CONCAT44(uVar14,(int)uStack_dc);
        iVar13 = (int)uStack_dc;
        ppuStack_d0 = ppuVar8;
      }
    }
    uStack_dc = CONCAT44(uStack_dc._4_4_,iVar13 + 1);
    (**(code **)(*param_1 + 0xe0))(param_1,iVar26,ppuStack_d0 + (long)iVar5 * 2);
  }
  uStack_148 = 1;
  lStack_150 = 0;
  uStack_15c = 0;
  uStack_128 = 1;
  uStack_130 = 0;
  uStack_13c = 0;
  uStack_108 = 1;
  lStack_110 = 0;
  uStack_11c = 0;
  uStack_e8 = 1;
  lStack_f0 = 0;
  uStack_fc = 0;
  if ((int)param_2 == 0) {
    ppuVar11 = (undefined **)0x0;
    pfVar12 = (float *)0x10;
    ppuVar8 = ppuStack_d0;
    FUN_109827904(auStack_160);
  }
  else {
    uStack_a8 = 1;
    lStack_b0 = 0;
    uStack_c0._4_4_ = 0;
    uStack_b8 = 0;
    FUN_10982a800(auStack_e0,&uStack_c0);
    bStack_198 = 1;
    piStack_1a0 = (int *)0x0;
    uStack_1b0._4_4_ = 0;
    uStack_1a8 = 0;
    if (0 < uStack_c0._4_4_) {
      lVar16 = 0;
      do {
        puVar6 = (undefined8 *)(lStack_b0 + lVar16 * 0x10);
        uStack_1c0 = *puVar6;
        uStack_1b8 = puVar6[1];
        unaff_d8 = (**(code **)(*param_1 + 0x60))(param_1);
        if (uStack_1b0._4_4_ == uStack_1a8) {
          uVar14 = uStack_1b0._4_4_ << 1;
          if (uStack_1b0._4_4_ == 0) {
            uVar14 = 1;
          }
          ppuVar24 = (undefined **)(ulong)uVar14;
          if ((int)uStack_1b0._4_4_ < (int)uVar14) {
            if (uVar14 == 0) {
              param_2 = (int *)0x0;
            }
            else {
              param_2 = (int *)(-(ulong)(uVar14 >> 0x1f) & 0xfffffff000000000 | (long)ppuVar24 << 4)
              ;
              FUN_1098256f4(param_2,0x10);
            }
            if (0 < (int)uStack_1b0._4_4_) {
              lVar18 = 0;
              do {
                uVar2 = *(undefined8 *)((long)piStack_1a0 + lVar18);
                ((undefined8 *)((long)param_2 + lVar18))[1] =
                     ((undefined8 *)((long)piStack_1a0 + lVar18))[1];
                *(undefined8 *)((long)param_2 + lVar18) = uVar2;
                lVar18 = lVar18 + 0x10;
              } while ((ulong)uStack_1b0._4_4_ << 4 != lVar18);
            }
            if ((piStack_1a0 != (int *)0x0) && ((bStack_198 & 1) != 0)) {
              FUN_109825740();
            }
            bStack_198 = 1;
            uStack_1a8 = uVar14;
            piStack_1a0 = param_2;
          }
        }
        piVar9 = piStack_1a0 + (long)(int)uStack_1b0._4_4_ * 4;
        piVar9[2] = (int)uStack_1b8;
        piVar9[3] = (int)(uStack_1b8._4_4_ - (float)unaff_d8);
        *piVar9 = (int)uStack_1c0;
        piVar9[1] = uStack_1c0._4_4_;
        uStack_1b0._4_4_ = uStack_1b0._4_4_ + 1;
        lVar16 = lVar16 + 1;
      } while (lVar16 < uStack_c0._4_4_);
    }
    uStack_168 = 1;
    ppuStack_170 = (undefined **)0x0;
    uStack_17c = 0;
    uStack_178 = 0;
    func_0x00010982ab44(&uStack_1b0,auStack_180);
    ppuVar11 = (undefined **)0x0;
    pfVar12 = (float *)0x10;
    ppuVar8 = ppuStack_170;
    FUN_109827904(auStack_160);
    FUN_10980eb0c(auStack_180);
    FUN_10980eb0c(&uStack_1b0);
    FUN_10980eb0c(&uStack_c0);
  }
  fVar38 = (float)uStack_15c;
  ppuVar22 = (undefined **)(uStack_15c & 0xffffffff);
  ppuVar23 = (undefined **)param_1[9];
  fVar34 = *(float *)((long)ppuVar23 + 0xc);
  if (((int)fVar34 < (int)(float)uStack_15c) &&
     ((int)*(float *)(ppuVar23 + 2) < (int)(float)uStack_15c)) {
    if ((float)uStack_15c == 0.0) {
      param_2 = (int *)0x0;
    }
    else {
      param_2 = (int *)((long)(int)(float)uStack_15c << 4);
      ppuVar8 = (undefined **)0x10;
      FUN_1098256f4();
      fVar34 = *(float *)((long)ppuVar23 + 0xc);
    }
    if (0 < (int)fVar34) {
      lVar16 = 0;
      do {
        uVar2 = *(undefined8 *)(ppuVar23[3] + lVar16);
        ((undefined8 *)((long)param_2 + lVar16))[1] =
             *(undefined8 *)((long)(ppuVar23[3] + lVar16) + 8);
        *(undefined8 *)((long)param_2 + lVar16) = uVar2;
        lVar16 = lVar16 + 0x10;
      } while ((ulong)(uint)fVar34 << 4 != lVar16);
    }
    if (ppuVar23[3] != (undefined *)0x0) {
      if (*(char *)(ppuVar23 + 4) == '\x01') {
        FUN_109825740();
      }
      ppuVar23[3] = (undefined *)0x0;
    }
    *(undefined1 *)(ppuVar23 + 4) = 1;
    ppuVar23[3] = (undefined *)param_2;
    *(float *)(ppuVar23 + 2) = fVar38;
  }
  *(float *)((long)ppuVar23 + 0xc) = fVar38;
  if (0 < (int)fVar38) {
    lVar16 = 0;
    do {
      uVar2 = *(undefined8 *)(lStack_150 + lVar16);
      puVar6 = (undefined8 *)(*(long *)(param_1[9] + 0x18) + lVar16);
      puVar6[1] = ((undefined8 *)(lStack_150 + lVar16))[1];
      *puVar6 = uVar2;
      lVar16 = lVar16 + 0x10;
    } while ((long)ppuVar22 * 0x10 - lVar16 != 0);
  }
  if (0 < (int)uStack_fc) {
    ppuVar23 = (undefined **)0x0;
    unaff_x25 = (undefined8 *)0xc;
    unaff_d8 = 0x3f800000;
    unaff_d9 = 0x7149f2ca;
    do {
      bStack_198 = 1;
      piStack_1a0 = (int *)0x0;
      uStack_1b0._4_4_ = 0;
      uStack_1a8 = 0;
      ppuVar22 = (undefined **)(lStack_110 + (long)*(int *)(lStack_f0 + (long)ppuVar23 * 4) * 0xc);
      fVar34 = *(float *)((long)ppuVar22 + ((long)(int)*(float *)((long)ppuVar22 + 4) * 3 + 2) * 4);
      ppuVar24 = (undefined **)(ulong)(uint)fVar34;
      param_2 = (int *)0x4;
      auVar35._0_8_ = FUN_1098256f4(4,0x10);
      auVar35._8_8_ = extraout_var;
      uVar17 = (ulong)uStack_1b0._4_4_;
      piVar9 = param_2;
      piVar20 = piStack_1a0;
      if ((int)uStack_1b0._4_4_ < 1) {
        if ((piStack_1a0 != (int *)0x0) && ((bStack_198 & 1) != 0)) goto LAB_10981c1dc;
      }
      else {
        do {
          *piVar9 = *piVar20;
          uVar17 = uVar17 - 1;
          piVar9 = piVar9 + 1;
          piVar20 = piVar20 + 1;
        } while (uVar17 != 0);
        if (bStack_198 == 1) {
LAB_10981c1dc:
          auVar35._0_8_ = FUN_109825740();
          auVar35._8_8_ = extraout_var_00;
        }
      }
      unaff_x27 = 1;
      uStack_1a8 = 1;
      param_2[(int)uStack_1b0._4_4_] = (int)fVar34;
      uStack_1b0._4_4_ = uStack_1b0._4_4_ + 1;
      fVar38 = *(float *)(ppuVar22 + 1);
      piStack_1a0 = param_2;
      if (fVar38 != fVar34) {
        lVar16 = 0;
        piVar9 = param_2;
        ppuVar8 = ppuVar24;
        do {
          bStack_198 = 1;
          ppuVar19 = (undefined **)(ulong)(uint)fVar38;
          if ((int)lVar16 < 2) {
            pfVar21 = (float *)(lStack_150 + (long)(int)fVar38 * 0x10);
            pfVar1 = (float *)(lStack_150 + (long)(int)ppuVar8 * 0x10);
            fVar33 = *pfVar21 - *pfVar1;
            fVar30 = pfVar21[1] - pfVar1[1];
            fVar31 = pfVar21[2] - pfVar1[2];
            auVar43._0_4_ = fVar33 * fVar33;
            auVar43._4_4_ = fVar30 * fVar30;
            auVar43._8_4_ = fVar31 * fVar31;
            auVar43._12_4_ = 0;
            auVar35 = NEON_ext(auVar43,auVar43,8,1);
            fVar32 = 1.0 / SQRT(auVar43._0_4_ + auVar43._4_4_ + auVar35._0_4_);
            auVar39._0_8_ = CONCAT44(fVar30 * fVar32,fVar33 * fVar32);
            auVar39._8_4_ = fVar31 * fVar32;
            auVar39._12_4_ = fVar32 * 0.0;
            *(long *)(&uStack_b8 + lVar16 * 4) = auVar39._8_8_;
            (&uStack_c0)[lVar16 * 2] = auVar39._0_8_;
            lVar16 = lVar16 + 1;
          }
          else {
            lVar16 = 2;
          }
          param_2 = piVar9;
          uVar14 = uStack_1a8;
          piVar20 = piStack_1a0;
          if (uStack_1b0._4_4_ == uStack_1a8) {
            uVar15 = uStack_1b0._4_4_ << 1;
            if (uStack_1b0._4_4_ == 0) {
              uVar15 = 1;
            }
            uVar27 = (ulong)uVar15;
            if ((int)uStack_1b0._4_4_ < (int)uVar15) {
              if (uVar15 == 0) {
                param_2 = (int *)0x0;
              }
              else {
                param_2 = (int *)(-(ulong)(uVar15 >> 0x1f) & 0xfffffffc00000000 | uVar27 << 2);
                FUN_1098256f4(param_2,0x10);
                piVar9 = piStack_1a0;
              }
              uVar17 = (ulong)uStack_1b0._4_4_;
              piVar20 = param_2;
              uVar14 = uVar15;
              if ((int)uStack_1b0._4_4_ < 1) {
                piVar20 = param_2;
                if ((piVar9 != (int *)0x0) && (piVar20 = param_2, (bStack_198 & 1) != 0))
                goto LAB_10981c2fc;
              }
              else {
                do {
                  *piVar20 = *piVar9;
                  uVar17 = uVar17 - 1;
                  piVar20 = piVar20 + 1;
                  piVar9 = piVar9 + 1;
                } while (uVar17 != 0);
                piVar20 = param_2;
                if (bStack_198 == 1) {
LAB_10981c2fc:
                  FUN_109825740();
                  piVar20 = param_2;
                }
              }
            }
          }
          piStack_1a0 = piVar20;
          uStack_1a8 = uVar14;
          param_2[(int)uStack_1b0._4_4_] = (int)fVar38;
          uStack_1b0._4_4_ = uStack_1b0._4_4_ + 1;
          pfVar21 = (float *)((long)ppuVar22 + (long)(int)*(float *)((long)ppuVar22 + 4) * 0xc);
          ppuVar22 = (undefined **)(pfVar21 + (long)(int)*pfVar21 * 3);
          fVar38 = *(float *)(ppuVar22 + 1);
          piVar9 = param_2;
          ppuVar8 = ppuVar19;
        } while (fVar38 != fVar34);
        auVar35._4_4_ = uStack_c0._4_4_;
        auVar35._0_4_ = (undefined4)uStack_c0;
        auVar35._8_4_ = uStack_b8;
        auVar35._12_4_ = uStack_b4;
      }
      bStack_198 = 1;
      auVar4[8] = uStack_a8;
      auVar4._0_8_ = lStack_b0;
      auVar4._9_7_ = uStack_a7;
      auVar39 = NEON_ext(auVar35,auVar35,0xc,1);
      auVar39 = NEON_ext(auVar39,auVar35,8,1);
      auVar43 = NEON_ext(auVar4,auVar4,0xc,1);
      auVar43 = NEON_ext(auVar43,auVar4,8,1);
      auVar28._0_4_ = auVar35._0_4_ * auVar43._0_4_ - (float)lStack_b0 * auVar39._0_4_;
      auVar28._4_4_ =
           auVar35._4_4_ * auVar43._4_4_ - (float)((ulong)lStack_b0 >> 0x20) * auVar39._4_4_;
      auVar28._8_4_ = auVar35._8_4_ * auVar43._8_4_ - auVar4._8_4_ * auVar39._8_4_;
      auVar28._12_4_ =
           auVar35._12_4_ * auVar43._12_4_ - (float)((uint7)uStack_a7 >> 0x18) * auVar39._12_4_;
      auVar35 = NEON_ext(auVar28,auVar28,0xc,1);
      auVar35 = NEON_ext(auVar35,auVar28,8,1);
      fVar34 = auVar35._0_4_;
      auVar36._0_4_ = fVar34 * fVar34;
      fVar38 = auVar35._4_4_;
      auVar36._4_4_ = fVar38 * fVar38;
      fStack_188 = auVar35._8_4_;
      auVar36._8_4_ = fStack_188 * fStack_188;
      auVar36._12_4_ = 0;
      auVar35 = NEON_ext(auVar36,auVar36,8,1);
      fVar33 = 1.0 / SQRT(auVar36._0_4_ + auVar36._4_4_ + auVar35._0_4_);
      uStack_190 = CONCAT44(fVar38 * fVar33,fVar34 * fVar33);
      fStack_188 = fStack_188 * fVar33;
      unaff_x28 = param_1[9];
      fStack_184 = 1e+30;
      if (0 < (int)uStack_1b0._4_4_) {
        uVar17 = (ulong)uStack_1b0._4_4_;
        piVar9 = param_2;
        fVar30 = 1e+30;
        do {
          param_2 = piVar9 + 1;
          pfVar21 = (float *)(*(long *)(unaff_x28 + 0x18) + (long)*piVar9 * 0x10);
          auVar40._0_4_ = fVar34 * fVar33 * *pfVar21;
          auVar40._4_4_ = fVar38 * fVar33 * pfVar21[1];
          auVar40._8_4_ = fStack_188 * pfVar21[2];
          auVar40._12_4_ = fVar33 * 0.0 * pfVar21[3];
          auVar35 = NEON_ext(auVar40,auVar40,8,1);
          fStack_184 = auVar40._0_4_ + auVar40._4_4_ + auVar35._0_4_;
          if (fVar30 <= fStack_184) {
            fStack_184 = fVar30;
          }
          uVar17 = uVar17 - 1;
          piVar9 = param_2;
          fVar30 = fStack_184;
        } while (uVar17 != 0);
      }
      fStack_184 = -fStack_184;
      uVar14 = *(uint *)(unaff_x28 + 0x2c);
      if (uVar14 == *(uint *)(unaff_x28 + 0x30)) {
        uVar15 = uVar14 << 1;
        if (uVar14 == 0) {
          uVar15 = 1;
        }
        ppuVar24 = (undefined **)(ulong)uVar15;
        if ((int)uVar14 < (int)uVar15) {
          if (uVar15 == 0) {
            param_2 = (int *)0x0;
          }
          else {
            param_2 = (int *)((long)(int)uVar15 * 0x30);
            FUN_1098256f4(param_2,0x10);
            uVar14 = *(uint *)(unaff_x28 + 0x2c);
          }
          if (0 < (int)uVar14) {
            uVar27 = 0;
            do {
              lVar16 = (long)param_2 + uVar27;
              ppuVar22 = (undefined **)(*(long *)(unaff_x28 + 0x38) + uVar27);
              FUN_10981163c(lVar16,ppuVar22);
              puVar3 = ppuVar22[4];
              *(undefined **)(lVar16 + 0x28) = ppuVar22[5];
              *(undefined **)(lVar16 + 0x20) = puVar3;
              uVar27 = uVar27 + 0x30;
            } while ((ulong)uVar14 * 0x30 - uVar27 != 0);
            if (0 < (int)*(uint *)(unaff_x28 + 0x2c)) {
              ppuVar22 = (undefined **)0x0;
              uVar27 = (ulong)*(uint *)(unaff_x28 + 0x2c) * 0x30;
              do {
                FUN_10980501c(*(long *)(unaff_x28 + 0x38) + (long)ppuVar22);
                ppuVar22 = ppuVar22 + 6;
              } while (uVar27 - (long)ppuVar22 != 0);
            }
          }
          if (*(long *)(unaff_x28 + 0x38) != 0) {
            if (*(char *)(unaff_x28 + 0x40) == '\x01') {
              FUN_109825740();
            }
            *(undefined8 *)(unaff_x28 + 0x38) = 0;
          }
          *(undefined1 *)(unaff_x28 + 0x40) = 1;
          *(int **)(unaff_x28 + 0x38) = param_2;
          *(uint *)(unaff_x28 + 0x30) = uVar15;
          uVar14 = *(uint *)(unaff_x28 + 0x2c);
        }
      }
      lVar16 = *(long *)(unaff_x28 + 0x38) + (long)(int)uVar14 * 0x30;
      unaff_x26 = (undefined **)&uStack_1b0;
      ppuVar8 = unaff_x26;
      FUN_10981163c();
      *(ulong *)(lVar16 + 0x28) = CONCAT44(fStack_184,fStack_188);
      *(undefined8 *)(lVar16 + 0x20) = uStack_190;
      *(int *)(unaff_x28 + 0x2c) = *(int *)(unaff_x28 + 0x2c) + 1;
      FUN_10980501c(&uStack_1b0);
      ppuVar23 = (undefined **)((long)ppuVar23 + 1);
    } while ((long)ppuVar23 < (long)(int)uStack_fc);
  }
  FUN_1098187c0(param_1[9]);
  FUN_10980501c(auStack_100);
  FUN_1098180f8(auStack_120);
  FUN_10980501c(auStack_140);
  FUN_10980eb0c(auStack_160);
  plVar7 = (long *)auStack_e0;
  FUN_10980eb0c();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_88) {
    return (long *)0x1;
  }
  ___stack_chk_fail();
  FUN_109817d98(auStack_160);
  FUN_10980eb0c(auStack_e0);
  plVar10 = plVar7;
  __Unwind_Resume();
  uStack_230 = unaff_d9;
  uStack_228 = unaff_d8;
  lStack_220 = unaff_x28;
  uStack_218 = unaff_x27;
  ppuStack_210 = unaff_x26;
  puStack_208 = unaff_x25;
  uStack_200 = uVar27;
  ppuStack_1f8 = ppuVar24;
  ppuStack_1f0 = ppuVar23;
  ppuStack_1e8 = ppuVar22;
  piStack_1e0 = param_2;
  plStack_1d8 = plVar7;
  puStack_1d0 = &stack0xfffffffffffffff0;
  pcStack_1c8 = FUN_10981c5fc;
  lStack_238 = *(long *)PTR____stack_chk_guard_11034bdc0;
  fStack_a50 = *(float *)ppuVar8;
  fStack_a4c = *(float *)((long)ppuVar8 + 4);
  fStack_a48 = *(float *)(ppuVar8 + 1);
  fStack_a44 = *(float *)((long)ppuVar8 + 0xc);
  auVar37._0_4_ = fStack_a50 * fStack_a50;
  auVar37._4_4_ = fStack_a4c * fStack_a4c;
  auVar37._8_4_ = fStack_a48 * fStack_a48;
  auVar37._12_4_ = fStack_a44 * fStack_a44;
  auVar35 = NEON_ext(auVar37,auVar37,8,1);
  fVar34 = auVar37._0_4_ + auVar37._4_4_ + auVar35._0_4_;
  if (0.0001 <= fVar34) {
    fVar34 = 1.0 / SQRT(fVar34);
    fStack_a50 = fStack_a50 * fVar34;
    fStack_a4c = fStack_a4c * fVar34;
    fStack_a48 = fStack_a48 * fVar34;
    fStack_a44 = fStack_a44 * fVar34;
  }
  else {
    fStack_a50 = 1.0;
    fStack_a4c = 0.0;
    fStack_a48 = 0.0;
    fStack_a44 = 0.0;
  }
  plVar7 = plVar10;
  (**(code **)(*plVar10 + 200))();
  uVar14 = (uint)pfVar12;
  if ((int)plVar7 < 1) {
    uStack_a68 = 0;
    uStack_a70 = 0;
  }
  else {
    uVar27 = 0;
    uStack_a68 = 0;
    uStack_a70 = 0;
    fVar34 = -1e+18;
    unaff_x25 = &uStack_a40;
    unaff_x26 = &PTR_FUN_1132e0000;
    do {
      plVar7 = plVar10;
      (**(code **)(*plVar10 + 200))();
      iVar26 = (int)uVar27;
      if ((int)plVar7 - iVar26 < 0x80) {
        plVar7 = plVar10;
        (**(code **)(*plVar10 + 200))();
        uVar14 = (int)plVar7 - iVar26;
        if (0 < (int)uVar14) goto LAB_10981c6fc;
        fStack_a54 = -3.4028235e+38;
        iVar13 = -1;
LAB_10981c778:
      }
      else {
        uVar14 = 0x80;
LAB_10981c6fc:
        ppuVar23 = (undefined **)0x0;
        ppuVar22 = (undefined **)(ulong)uVar14;
        ppuVar24 = (undefined **)&uStack_a40;
        do {
          ppuVar8 = ppuVar23;
          ppuVar11 = ppuVar24;
          (**(code **)(*plVar10 + 0xe0))(plVar10);
          ppuVar23 = (undefined **)((long)ppuVar23 + 1);
          ppuVar24 = ppuVar24 + 2;
        } while (ppuVar22 != ppuVar23);
        if (uVar14 < 4) {
          ppuVar19 = (undefined **)0x0;
          fStack_a54 = -3.4028235e+38;
          iVar5 = -1;
          do {
            auVar41._0_4_ = fStack_a50 * *(float *)(unaff_x25 + (long)ppuVar19 * 2);
            auVar41._4_4_ = fStack_a4c * *(float *)((long)&uStack_a40 + (long)ppuVar19 * 0x10 + 4);
            auVar41._8_4_ = fStack_a48 * afStack_a38[(long)ppuVar19 * 4];
            auVar41._12_4_ = fStack_a44 * afStack_a38[(long)ppuVar19 * 4 + 1];
            auVar35 = NEON_ext(auVar41,auVar41,8,1);
            fVar38 = auVar41._0_4_ + auVar41._4_4_ + auVar35._0_4_;
            iVar13 = (int)ppuVar19;
            if (fVar38 <= fStack_a54) {
              iVar13 = iVar5;
              fVar38 = fStack_a54;
            }
            fStack_a54 = fVar38;
            ppuVar19 = (undefined **)((long)ppuVar19 + 1);
            iVar5 = iVar13;
          } while (ppuVar22 != ppuVar19);
          goto LAB_10981c778;
        }
        iVar13 = (int)&uStack_a40;
        ppuVar8 = (undefined **)&fStack_a50;
        pfVar12 = &fStack_a54;
        ppuVar11 = ppuVar22;
        (*(code *)PTR_FUN_1132e04a0)();
      }
      if (fVar34 < fStack_a54) {
        uStack_a70 = unaff_x25[(long)iVar13 * 2];
        uStack_a68 = *(undefined8 *)(afStack_a38 + (long)iVar13 * 4);
        fVar34 = fStack_a54;
      }
      uVar27 = (ulong)(iVar26 + 0x80U);
      plVar7 = plVar10;
      (**(code **)(*plVar10 + 200))();
      uVar14 = (uint)pfVar12;
    } while ((int)(iVar26 + 0x80U) < (int)plVar7);
  }
  extraout_x8[1] = uStack_a68;
  *extraout_x8 = uStack_a70;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_238) {
    return plVar7;
  }
  ___stack_chk_fail();
  lStack_ad0 = unaff_x28;
  uStack_ac8 = unaff_x27;
  ppuStack_ac0 = unaff_x26;
  puStack_ab8 = unaff_x25;
  uStack_ab0 = uVar27;
  ppuStack_aa8 = ppuVar24;
  ppuStack_aa0 = ppuVar23;
  ppuStack_a98 = ppuVar22;
  plStack_a90 = plVar10;
  puStack_a88 = extraout_x8;
  ppuStack_a80 = &puStack_1d0;
  pcStack_a78 = FUN_10981c820;
  lStack_ae0 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar10 = plVar7;
  ppuVar24 = ppuVar8;
  if (0 < (int)uVar14) {
    pfVar12 = (float *)((long)ppuVar11 + 0xc);
    uVar27 = (ulong)uVar14;
    do {
      *pfVar12 = -1e+18;
      uVar27 = uVar27 - 1;
      pfVar12 = pfVar12 + 4;
    } while (uVar27 != 0);
    uVar27 = 0;
    do {
      plVar10 = plVar7;
      (**(code **)(*plVar7 + 200))();
      if (0 < (int)plVar10) {
        iVar26 = 0;
        ppuVar22 = ppuVar8 + uVar27 * 2;
        ppuVar23 = ppuVar11 + uVar27 * 2;
        do {
          plVar10 = plVar7;
          (**(code **)(*plVar7 + 200))();
          if ((int)plVar10 - iVar26 < 0x80) {
            plVar10 = plVar7;
            (**(code **)(*plVar7 + 200))();
            uVar15 = (int)plVar10 - iVar26;
            if (0 < (int)uVar15) goto LAB_10981c904;
            fStack_12e4 = -3.4028235e+38;
            iVar13 = -1;
          }
          else {
            uVar15 = 0x80;
LAB_10981c904:
            ppuVar19 = (undefined **)0x0;
            ppuVar25 = (undefined **)(ulong)uVar15;
            pfVar12 = afStack_12e0;
            do {
              ppuVar24 = ppuVar19;
              (**(code **)(*plVar7 + 0xe0))(plVar7,ppuVar19,pfVar12);
              ppuVar19 = (undefined **)((long)ppuVar19 + 1);
              pfVar12 = pfVar12 + 4;
            } while (ppuVar25 != ppuVar19);
            if (uVar15 < 4) {
              ppuVar19 = (undefined **)0x0;
              fStack_12e4 = -3.4028235e+38;
              iVar5 = -1;
              do {
                auVar42._0_4_ = *(float *)ppuVar22 * afStack_12e0[(long)ppuVar19 * 4];
                auVar42._4_4_ =
                     *(float *)((long)ppuVar22 + 4) * afStack_12e0[(long)ppuVar19 * 4 + 1];
                auVar42._8_4_ =
                     *(float *)(ppuVar22 + 1) * *(float *)(&uStack_12d8 + (long)ppuVar19 * 2);
                auVar42._12_4_ =
                     *(float *)((long)ppuVar22 + 0xc) *
                     *(float *)((long)&uStack_12d8 + (long)ppuVar19 * 0x10 + 4);
                auVar35 = NEON_ext(auVar42,auVar42,8,1);
                fVar34 = auVar42._0_4_ + auVar42._4_4_ + auVar35._0_4_;
                iVar13 = (int)ppuVar19;
                if (fVar34 <= fStack_12e4) {
                  iVar13 = iVar5;
                  fVar34 = fStack_12e4;
                }
                fStack_12e4 = fVar34;
                ppuVar19 = (undefined **)((long)ppuVar19 + 1);
                iVar5 = iVar13;
              } while (ppuVar25 != ppuVar19);
            }
            else {
              pfVar12 = afStack_12e0;
              ppuVar24 = ppuVar22;
              (*(code *)PTR_FUN_1132e04a0)(pfVar12,ppuVar22,ppuVar25,&fStack_12e4);
              iVar13 = (int)pfVar12;
            }
          }
          if (*(float *)((long)ppuVar23 + 0xc) < fStack_12e4) {
            puVar3 = *(undefined **)(afStack_12e0 + (long)iVar13 * 4);
            ppuVar23[1] = (undefined *)(&uStack_12d8)[(long)iVar13 * 2];
            *ppuVar23 = puVar3;
            *(float *)((long)ppuVar23 + 0xc) = fStack_12e4;
          }
          iVar26 = iVar26 + 0x80;
          plVar10 = plVar7;
          (**(code **)(*plVar7 + 200))();
        } while (iVar26 < (int)plVar10);
      }
      uVar27 = uVar27 + 1;
    } while (uVar27 != uVar14);
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_ae0) {
    return plVar10;
  }
  fVar34 = (float)___stack_chk_fail();
  (**(code **)(*plVar10 + 0x10))();
  auVar29._0_4_ = (fStack_1390 - fStack_1380) * (fStack_1390 - fStack_1380);
  auVar29._4_4_ = (fStack_138c - fStack_137c) * (fStack_138c - fStack_137c);
  auVar29._8_4_ = (fStack_1388 - fStack_1378) * (fStack_1388 - fStack_1378);
  auVar29._12_4_ = 0;
  fVar34 = fVar34 * 0.083333336;
  auVar35 = NEON_rev64(auVar29,4);
  ppuVar24[1] = (undefined *)(ulong)(uint)((auVar29._0_4_ + auVar29._4_4_) * fVar34);
  *ppuVar24 = (undefined *)
              CONCAT44((auVar35._4_4_ + auVar29._8_4_) * fVar34,
                       (auVar35._0_4_ + auVar29._8_4_) * fVar34);
  return plVar10;
}



/* Entry: 10981c5fc; end: 10981c81f;  */

void FUN_10981c5fc(undefined8 *param_1,long *param_2,float *param_3,float *param_4,
                  undefined4 *param_5)

{
  undefined1 auVar1 [16];
  float fVar2;
  float fVar3;
  undefined8 uVar4;
  int iVar5;
  int iVar6;
  long *plVar7;
  long *plVar8;
  float *pfVar9;
  uint uVar10;
  uint uVar11;
  float *pfVar12;
  float *pfVar13;
  float *pfVar14;
  float *pfVar15;
  int iVar16;
  float *pfVar17;
  ulong uVar18;
  undefined1 uVar19;
  undefined1 uVar20;
  undefined1 uVar21;
  undefined1 uVar22;
  undefined1 uVar23;
  undefined1 uVar24;
  undefined1 uVar25;
  undefined1 uVar26;
  undefined1 uVar27;
  undefined1 uVar28;
  undefined1 uVar29;
  undefined1 uVar30;
  undefined1 uVar31;
  undefined1 uVar32;
  undefined1 uVar33;
  undefined1 uVar34;
  float fVar35;
  undefined1 auVar36 [16];
  float fVar37;
  float fVar38;
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined8 uStack_11d0;
  float fStack_11c8;
  float fStack_11c0;
  float fStack_11bc;
  float fStack_11b8;
  undefined4 uStack_1124;
  float afStack_1120 [2];
  undefined8 uStack_1118;
  long lStack_920;
  undefined8 uStack_8b0;
  undefined8 uStack_8a8;
  undefined4 uStack_894;
  undefined8 uStack_890;
  undefined8 uStack_888;
  float afStack_880 [2];
  undefined8 uStack_878;
  long lStack_78;
  
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  fVar38 = (float)*(undefined8 *)param_3;
  auVar40._0_4_ = fVar38 * fVar38;
  fVar37 = (float)((ulong)*(undefined8 *)param_3 >> 0x20);
  auVar40._4_4_ = fVar37 * fVar37;
  fVar2 = (float)*(undefined8 *)(param_3 + 2);
  auVar40._8_4_ = fVar2 * fVar2;
  fVar3 = (float)((ulong)*(undefined8 *)(param_3 + 2) >> 0x20);
  auVar40._12_4_ = fVar3 * fVar3;
  auVar36 = NEON_ext(auVar40,auVar40,8,1);
  fVar35 = auVar40._0_4_ + auVar40._4_4_ + auVar36._0_4_;
  if (0.0001 <= fVar35) {
    fVar35 = 1.0 / SQRT(fVar35);
    fVar38 = fVar38 * fVar35;
    uVar19 = SUB41(fVar38,0);
    uVar20 = (undefined1)((uint)fVar38 >> 8);
    uVar21 = (undefined1)((uint)fVar38 >> 0x10);
    uVar22 = (undefined1)((uint)fVar38 >> 0x18);
    fVar37 = fVar37 * fVar35;
    uVar23 = SUB41(fVar37,0);
    uVar24 = (undefined1)((uint)fVar37 >> 8);
    uVar25 = (undefined1)((uint)fVar37 >> 0x10);
    uVar26 = (undefined1)((uint)fVar37 >> 0x18);
    fVar2 = fVar2 * fVar35;
    uVar27 = SUB41(fVar2,0);
    uVar28 = (undefined1)((uint)fVar2 >> 8);
    uVar29 = (undefined1)((uint)fVar2 >> 0x10);
    uVar30 = (undefined1)((uint)fVar2 >> 0x18);
    fVar3 = fVar3 * fVar35;
    uVar31 = SUB41(fVar3,0);
    uVar32 = (undefined1)((uint)fVar3 >> 8);
    uVar33 = (undefined1)((uint)fVar3 >> 0x10);
    uVar34 = (undefined1)((uint)fVar3 >> 0x18);
  }
  else {
    uVar27 = 0;
    uVar28 = 0;
    uVar29 = 0;
    uVar30 = 0;
    uVar31 = 0;
    uVar32 = 0;
    uVar33 = 0;
    uVar34 = 0;
    uVar19 = 0;
    uVar20 = 0;
    uVar21 = 0x80;
    uVar22 = 0x3f;
    uVar23 = 0;
    uVar24 = 0;
    uVar25 = 0;
    uVar26 = 0;
  }
  uStack_888 = CONCAT17(uVar34,CONCAT16(uVar33,CONCAT15(uVar32,CONCAT14(uVar31,CONCAT13(uVar30,
                                                  CONCAT12(uVar29,CONCAT11(uVar28,uVar27)))))));
  uStack_890 = CONCAT17(uVar26,CONCAT16(uVar25,CONCAT15(uVar24,CONCAT14(uVar23,CONCAT13(uVar22,
                                                  CONCAT12(uVar21,CONCAT11(uVar20,uVar19)))))));
  plVar7 = param_2;
  (**(code **)(*param_2 + 200))();
  uVar10 = (uint)param_5;
  if ((int)plVar7 < 1) {
    uStack_8a8 = 0;
    uStack_8b0 = 0;
  }
  else {
    iVar16 = 0;
    uStack_8a8 = 0;
    uStack_8b0 = 0;
    fVar38 = -1e+18;
    do {
      plVar7 = param_2;
      (**(code **)(*param_2 + 200))();
      if ((int)plVar7 - iVar16 < 0x80) {
        plVar7 = param_2;
        (**(code **)(*param_2 + 200))();
        uVar10 = (int)plVar7 - iVar16;
        if (0 < (int)uVar10) goto LAB_10981c6fc;
        uVar19 = 0xff;
        uVar20 = 0xff;
        uVar21 = 0x7f;
        uVar22 = 0xff;
        iVar6 = -1;
        pfVar9 = param_4;
LAB_10981c778:
        param_4 = pfVar9;
        uStack_894 = CONCAT13(uVar22,CONCAT12(uVar21,CONCAT11(uVar20,uVar19)));
      }
      else {
        uVar10 = 0x80;
LAB_10981c6fc:
        pfVar14 = (float *)0x0;
        param_4 = (float *)(ulong)uVar10;
        pfVar12 = afStack_880;
        do {
          param_3 = pfVar14;
          pfVar9 = pfVar12;
          (**(code **)(*param_2 + 0xe0))(param_2);
          pfVar14 = (float *)((long)pfVar14 + 1);
          pfVar12 = pfVar12 + 4;
        } while (param_4 != pfVar14);
        if (uVar10 < 4) {
          pfVar12 = (float *)0x0;
          uVar19 = 0xff;
          uVar20 = 0xff;
          uVar21 = 0x7f;
          uVar22 = 0xff;
          iVar5 = -1;
          do {
            auVar36._0_4_ = (float)uStack_890 * afStack_880[(long)pfVar12 * 4];
            auVar36._4_4_ = (float)((ulong)uStack_890 >> 0x20) * afStack_880[(long)pfVar12 * 4 + 1];
            auVar36._8_4_ = (float)uStack_888 * *(float *)(&uStack_878 + (long)pfVar12 * 2);
            auVar36._12_4_ =
                 (float)((ulong)uStack_888 >> 0x20) *
                 *(float *)((long)&uStack_878 + (long)pfVar12 * 0x10 + 4);
            auVar40 = NEON_ext(auVar36,auVar36,8,1);
            fVar37 = auVar36._0_4_ + auVar36._4_4_ + auVar40._0_4_;
            iVar6 = (int)pfVar12;
            uVar23 = SUB41(fVar37,0);
            uVar24 = (char)((uint)fVar37 >> 8);
            uVar25 = (char)((uint)fVar37 >> 0x10);
            uVar26 = (char)((uint)fVar37 >> 0x18);
            if (fVar37 == (float)CONCAT13(uVar22,CONCAT12(uVar21,CONCAT11(uVar20,uVar19))) ||
                fVar37 < (float)CONCAT13(uVar22,CONCAT12(uVar21,CONCAT11(uVar20,uVar19)))) {
              iVar6 = iVar5;
              uVar23 = uVar19;
              uVar24 = uVar20;
              uVar25 = uVar21;
              uVar26 = uVar22;
            }
            uVar22 = uVar26;
            uVar21 = uVar25;
            uVar20 = uVar24;
            uVar19 = uVar23;
            pfVar12 = (float *)((long)pfVar12 + 1);
            iVar5 = iVar6;
          } while (param_4 != pfVar12);
          goto LAB_10981c778;
        }
        iVar6 = (int)afStack_880;
        param_3 = (float *)&uStack_890;
        param_5 = &uStack_894;
        (*(code *)PTR_FUN_1132e04a0)();
        uVar19 = (undefined1)uStack_894;
        uVar20 = (undefined1)((uint)uStack_894 >> 8);
        uVar21 = (undefined1)((uint)uStack_894 >> 0x10);
        uVar22 = (undefined1)((uint)uStack_894 >> 0x18);
      }
      if ((float)CONCAT13(uVar22,CONCAT12(uVar21,CONCAT11(uVar20,uVar19))) != fVar38 &&
          fVar38 <= (float)CONCAT13(uVar22,CONCAT12(uVar21,CONCAT11(uVar20,uVar19)))) {
        uStack_8b0 = *(undefined8 *)(afStack_880 + (long)iVar6 * 4);
        uStack_8a8 = (&uStack_878)[(long)iVar6 * 2];
        fVar38 = (float)CONCAT13(uVar22,CONCAT12(uVar21,CONCAT11(uVar20,uVar19)));
      }
      iVar16 = iVar16 + 0x80;
      plVar7 = param_2;
      (**(code **)(*param_2 + 200))();
      uVar10 = (uint)param_5;
    } while (iVar16 < (int)plVar7);
  }
  uVar19 = (undefined1)uStack_8b0;
  uVar20 = (undefined1)((ulong)uStack_8b0 >> 8);
  uVar21 = (undefined1)((ulong)uStack_8b0 >> 0x10);
  uVar22 = (undefined1)((ulong)uStack_8b0 >> 0x18);
  param_1[1] = uStack_8a8;
  *param_1 = uStack_8b0;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_78) {
    return;
  }
  ___stack_chk_fail();
  lStack_920 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar8 = plVar7;
  pfVar12 = param_3;
  if (0 < (int)uVar10) {
    pfVar14 = param_4 + 3;
    uVar18 = (ulong)uVar10;
    do {
      *pfVar14 = -1e+18;
      uVar18 = uVar18 - 1;
      pfVar14 = pfVar14 + 4;
    } while (uVar18 != 0);
    uVar18 = 0;
    do {
      plVar8 = plVar7;
      (**(code **)(*plVar7 + 200))();
      if (0 < (int)plVar8) {
        iVar16 = 0;
        pfVar14 = param_3 + uVar18 * 4;
        pfVar9 = param_4 + uVar18 * 4;
        do {
          plVar8 = plVar7;
          (**(code **)(*plVar7 + 200))();
          if ((int)plVar8 - iVar16 < 0x80) {
            plVar8 = plVar7;
            (**(code **)(*plVar7 + 200))();
            uVar11 = (int)plVar8 - iVar16;
            if (0 < (int)uVar11) goto LAB_10981c904;
            uVar19 = 0xff;
            uVar20 = 0xff;
            uVar21 = 0x7f;
            uVar22 = 0xff;
            iVar6 = -1;
LAB_10981c980:
            uStack_1124 = CONCAT13(uVar22,CONCAT12(uVar21,CONCAT11(uVar20,uVar19)));
          }
          else {
            uVar11 = 0x80;
LAB_10981c904:
            pfVar17 = (float *)0x0;
            pfVar15 = (float *)(ulong)uVar11;
            pfVar13 = afStack_1120;
            do {
              pfVar12 = pfVar17;
              (**(code **)(*plVar7 + 0xe0))(plVar7,pfVar17,pfVar13);
              pfVar17 = (float *)((long)pfVar17 + 1);
              pfVar13 = pfVar13 + 4;
            } while (pfVar15 != pfVar17);
            if (uVar11 < 4) {
              pfVar13 = (float *)0x0;
              uVar19 = 0xff;
              uVar20 = 0xff;
              uVar21 = 0x7f;
              uVar22 = 0xff;
              iVar5 = -1;
              do {
                auVar39._0_4_ = *pfVar14 * afStack_1120[(long)pfVar13 * 4];
                auVar39._4_4_ = pfVar14[1] * afStack_1120[(long)pfVar13 * 4 + 1];
                auVar39._8_4_ = pfVar14[2] * *(float *)(&uStack_1118 + (long)pfVar13 * 2);
                auVar39._12_4_ =
                     pfVar14[3] * *(float *)((long)&uStack_1118 + (long)pfVar13 * 0x10 + 4);
                auVar40 = NEON_ext(auVar39,auVar39,8,1);
                fVar38 = auVar39._0_4_ + auVar39._4_4_ + auVar40._0_4_;
                iVar6 = (int)pfVar13;
                uVar23 = SUB41(fVar38,0);
                uVar24 = (char)((uint)fVar38 >> 8);
                uVar25 = (char)((uint)fVar38 >> 0x10);
                uVar26 = (char)((uint)fVar38 >> 0x18);
                if (fVar38 == (float)CONCAT13(uVar22,CONCAT12(uVar21,CONCAT11(uVar20,uVar19))) ||
                    fVar38 < (float)CONCAT13(uVar22,CONCAT12(uVar21,CONCAT11(uVar20,uVar19)))) {
                  iVar6 = iVar5;
                  uVar23 = uVar19;
                  uVar24 = uVar20;
                  uVar25 = uVar21;
                  uVar26 = uVar22;
                }
                uVar22 = uVar26;
                uVar21 = uVar25;
                uVar20 = uVar24;
                uVar19 = uVar23;
                pfVar13 = (float *)((long)pfVar13 + 1);
                iVar5 = iVar6;
              } while (pfVar15 != pfVar13);
              goto LAB_10981c980;
            }
            pfVar13 = afStack_1120;
            pfVar12 = pfVar14;
            (*(code *)PTR_FUN_1132e04a0)(pfVar13,pfVar14,pfVar15,&uStack_1124);
            iVar6 = (int)pfVar13;
            uVar19 = (undefined1)uStack_1124;
            uVar20 = (undefined1)((uint)uStack_1124 >> 8);
            uVar21 = (undefined1)((uint)uStack_1124 >> 0x10);
            uVar22 = (undefined1)((uint)uStack_1124 >> 0x18);
          }
          if ((float)CONCAT13(uVar22,CONCAT12(uVar21,CONCAT11(uVar20,uVar19))) != pfVar9[3] &&
              pfVar9[3] <= (float)CONCAT13(uVar22,CONCAT12(uVar21,CONCAT11(uVar20,uVar19)))) {
            uVar4 = *(undefined8 *)(afStack_1120 + (long)iVar6 * 4);
            *(undefined8 *)(pfVar9 + 2) = (&uStack_1118)[(long)iVar6 * 2];
            *(undefined8 *)pfVar9 = uVar4;
            pfVar9[3] = (float)CONCAT13(uVar22,CONCAT12(uVar21,CONCAT11(uVar20,uVar19)));
          }
          iVar16 = iVar16 + 0x80;
          plVar8 = plVar7;
          (**(code **)(*plVar7 + 200))();
        } while (iVar16 < (int)plVar8);
      }
      uVar18 = uVar18 + 1;
    } while (uVar18 != uVar10);
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_920) {
    ___stack_chk_fail();
    (**(code **)(*plVar8 + 0x10))();
    fVar38 = (float)uStack_11d0 - fStack_11c0;
    fVar37 = (float)((ulong)uStack_11d0 >> 0x20) - fStack_11bc;
    fVar38 = fVar38 * fVar38;
    fVar37 = fVar37 * fVar37;
    fVar3 = (fStack_11c8 - fStack_11b8) * (fStack_11c8 - fStack_11b8);
    fVar35 = (float)CONCAT13(uVar22,CONCAT12(uVar21,CONCAT11(uVar20,uVar19))) * 0.083333336;
    auVar1[4] = SUB41(fVar37,0);
    auVar1._0_4_ = fVar38;
    auVar1[5] = (char)((uint)fVar37 >> 8);
    auVar1[6] = (char)((uint)fVar37 >> 0x10);
    auVar1[7] = (char)((uint)fVar37 >> 0x18);
    auVar1[8] = SUB41(fVar3,0);
    auVar1[9] = (char)((uint)fVar3 >> 8);
    auVar1[10] = (char)((uint)fVar3 >> 0x10);
    auVar1[0xb] = (char)((uint)fVar3 >> 0x18);
    auVar1._12_4_ = 0;
    auVar40 = NEON_rev64(auVar1,4);
    fVar2 = (auVar40._4_4_ + fVar3) * fVar35;
    *(ulong *)(pfVar12 + 2) = (ulong)(uint)((fVar38 + fVar37) * fVar35);
    *(ulong *)pfVar12 =
         CONCAT17((char)((uint)fVar2 >> 0x18),
                  CONCAT16((char)((uint)fVar2 >> 0x10),
                           CONCAT15((char)((uint)fVar2 >> 8),
                                    CONCAT14(SUB41(fVar2,0),(auVar40._0_4_ + fVar3) * fVar35))));
    return;
  }
  return;
}



/* Entry: 10981c820; end: 10981ca23;  */

void FUN_10981c820(float param_1,long *param_2,undefined8 *param_3,long param_4,uint param_5)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  int iVar3;
  int iVar4;
  long *plVar5;
  undefined8 *puVar7;
  uint uVar8;
  undefined4 *puVar9;
  int iVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  ulong uVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  undefined8 uVar17;
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined8 uStack_920;
  float fStack_918;
  undefined8 uStack_910;
  float fStack_908;
  float fStack_874;
  float afStack_870 [2];
  undefined8 uStack_868;
  long lStack_70;
  float *pfVar6;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar5 = param_2;
  puVar7 = param_3;
  if (0 < (int)param_5) {
    puVar9 = (undefined4 *)(param_4 + 0xc);
    uVar13 = (ulong)param_5;
    do {
      *puVar9 = 0xdd5e0b6b;
      uVar13 = uVar13 - 1;
      puVar9 = puVar9 + 4;
    } while (uVar13 != 0);
    uVar13 = 0;
    do {
      plVar5 = param_2;
      (**(code **)(*param_2 + 200))();
      if (0 < (int)plVar5) {
        iVar10 = 0;
        puVar1 = param_3 + uVar13 * 2;
        puVar2 = (undefined8 *)(param_4 + uVar13 * 0x10);
        do {
          plVar5 = param_2;
          (**(code **)(*param_2 + 200))();
          if ((int)plVar5 - iVar10 < 0x80) {
            plVar5 = param_2;
            (**(code **)(*param_2 + 200))();
            uVar8 = (int)plVar5 - iVar10;
            if (0 < (int)uVar8) goto LAB_10981c904;
            fStack_874 = -3.4028235e+38;
            iVar4 = -1;
          }
          else {
            uVar8 = 0x80;
LAB_10981c904:
            puVar12 = (undefined8 *)0x0;
            puVar11 = (undefined8 *)(ulong)uVar8;
            pfVar6 = afStack_870;
            do {
              puVar7 = puVar12;
              (**(code **)(*param_2 + 0xe0))(param_2,puVar12,pfVar6);
              puVar12 = (undefined8 *)((long)puVar12 + 1);
              pfVar6 = pfVar6 + 4;
            } while (puVar11 != puVar12);
            if (uVar8 < 4) {
              puVar12 = (undefined8 *)0x0;
              fStack_874 = -3.4028235e+38;
              iVar3 = -1;
              do {
                auVar19._0_4_ = (float)*puVar1 * afStack_870[(long)puVar12 * 4];
                auVar19._4_4_ = (float)((ulong)*puVar1 >> 0x20) * afStack_870[(long)puVar12 * 4 + 1]
                ;
                auVar19._8_4_ = (float)puVar1[1] * *(float *)(&uStack_868 + (long)puVar12 * 2);
                auVar19._12_4_ =
                     (float)((ulong)puVar1[1] >> 0x20) *
                     *(float *)((long)&uStack_868 + (long)puVar12 * 0x10 + 4);
                auVar18 = NEON_ext(auVar19,auVar19,8,1);
                fVar14 = auVar19._0_4_ + auVar19._4_4_ + auVar18._0_4_;
                iVar4 = (int)puVar12;
                if (fVar14 <= fStack_874) {
                  iVar4 = iVar3;
                  fVar14 = fStack_874;
                }
                fStack_874 = fVar14;
                puVar12 = (undefined8 *)((long)puVar12 + 1);
                iVar3 = iVar4;
              } while (puVar11 != puVar12);
            }
            else {
              pfVar6 = afStack_870;
              puVar7 = puVar1;
              (*(code *)PTR_FUN_1132e04a0)(pfVar6,puVar1,puVar11,&fStack_874);
              iVar4 = (int)pfVar6;
            }
          }
          if (*(float *)((long)puVar2 + 0xc) < fStack_874) {
            uVar17 = *(undefined8 *)(afStack_870 + (long)iVar4 * 4);
            puVar2[1] = (&uStack_868)[(long)iVar4 * 2];
            *puVar2 = uVar17;
            *(float *)((long)puVar2 + 0xc) = fStack_874;
          }
          iVar10 = iVar10 + 0x80;
          plVar5 = param_2;
          param_1 = fStack_874;
          (**(code **)(*param_2 + 200))();
        } while (iVar10 < (int)plVar5);
      }
      uVar13 = uVar13 + 1;
    } while (uVar13 != param_5);
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_70) {
    ___stack_chk_fail();
    (**(code **)(*plVar5 + 0x10))();
    fVar14 = (float)uStack_920 - (float)uStack_910;
    fVar15 = (float)((ulong)uStack_920 >> 0x20) - (float)((ulong)uStack_910 >> 0x20);
    fVar14 = fVar14 * fVar14;
    fVar15 = fVar15 * fVar15;
    fVar16 = (fStack_918 - fStack_908) * (fStack_918 - fStack_908);
    param_1 = param_1 * 0.083333336;
    auVar18._4_4_ = fVar15;
    auVar18._0_4_ = fVar14;
    auVar18._8_4_ = fVar16;
    auVar18._12_4_ = 0;
    auVar19 = NEON_rev64(auVar18,4);
    puVar7[1] = (ulong)(uint)((fVar14 + fVar15) * param_1);
    *puVar7 = CONCAT44((auVar19._4_4_ + fVar16) * param_1,(auVar19._0_4_ + fVar16) * param_1);
    return;
  }
  return;
}



/* Entry: 10981ca24; end: 10981cacf;  */

void FUN_10981ca24(float param_1,long *param_2,undefined8 *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  undefined1 auVar4 [16];
  undefined1 auStack_90 [8];
  float fStack_88;
  undefined1 auStack_80 [8];
  float fStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uStack_68 = 0;
  uStack_70 = 0x3f800000;
  uStack_58 = 0;
  uStack_60 = 0x3f80000000000000;
  uStack_48 = 0x3f800000;
  uStack_50 = 0;
  uStack_40 = 0;
  uStack_38 = 0;
  (**(code **)(*param_2 + 0x10))(param_2,&uStack_70,auStack_80,auStack_90);
  fVar1 = auStack_90._0_4_ - auStack_80._0_4_;
  fVar2 = auStack_90._4_4_ - auStack_80._4_4_;
  fVar1 = fVar1 * fVar1;
  fVar2 = fVar2 * fVar2;
  fVar3 = (fStack_88 - fStack_78) * (fStack_88 - fStack_78);
  param_1 = param_1 * 0.083333336;
  auVar4._4_4_ = fVar2;
  auVar4._0_4_ = fVar1;
  auVar4._8_4_ = fVar3;
  auVar4._12_4_ = 0;
  auVar4 = NEON_rev64(auVar4,4);
  param_3[1] = (ulong)(uint)((fVar1 + fVar2) * param_1);
  *param_3 = CONCAT44((auVar4._4_4_ + fVar3) * param_1,(auVar4._0_4_ + fVar3) * param_1);
  return;
}



/* Entry: 10981cad0; end: 10981cc1f;  */

void FUN_10981cad0(long *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  undefined1 auVar6 [16];
  float fVar7;
  int iVar8;
  long *plVar9;
  undefined1 (*pauVar10) [16];
  float *pfVar11;
  undefined8 *puVar12;
  long lVar13;
  long lVar14;
  float *pfVar15;
  float fVar16;
  undefined1 uVar17;
  undefined1 uVar18;
  undefined1 uVar19;
  undefined1 uVar20;
  undefined1 uVar21;
  undefined1 uVar22;
  undefined1 uVar23;
  undefined1 uVar24;
  undefined1 uVar25;
  float fVar26;
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [12];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  float fVar35;
  float fVar37;
  float fVar38;
  undefined1 auVar36 [16];
  float afStack_90 [26];
  long lStack_28;
  
  pfVar11 = afStack_90;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  *(undefined1 *)(param_1 + 0xe) = 1;
  if ((bRam000000011382b1d0 & 1) == 0) {
    iVar8 = 0x1382b1d0;
    ___cxa_guard_acquire();
    if (iVar8 != 0) {
      uRam000000011382b170 = 0x3f800000;
      uRam000000011382b17c = 0;
      uRam000000011382b174 = 0;
      uRam000000011382b184 = 0x3f800000;
      uRam000000011382b188 = 0;
      uRam000000011382b190 = 0;
      uRam000000011382b198 = 0x3f800000;
      uRam000000011382b1a0 = 0xbf800000;
      uRam000000011382b1ac = 0;
      uRam000000011382b1a4 = 0;
      uRam000000011382b1b4 = 0xbf800000;
      uRam000000011382b1b8 = 0;
      uRam000000011382b1c0 = 0;
      uRam000000011382b1c8 = 0xbf800000;
      ___cxa_guard_release(0x11382b1d0);
    }
  }
  afStack_90[0x12] = 0.0;
  afStack_90[0x13] = 0.0;
  afStack_90[0x10] = 0.0;
  afStack_90[0x11] = 0.0;
  afStack_90[0x16] = 0.0;
  afStack_90[0x17] = 0.0;
  afStack_90[0x14] = 0.0;
  afStack_90[0x15] = 0.0;
  afStack_90[10] = 0.0;
  afStack_90[0xb] = 0.0;
  afStack_90[8] = 0.0;
  afStack_90[9] = 0.0;
  afStack_90[0xe] = 0.0;
  afStack_90[0xf] = 0.0;
  afStack_90[0xc] = 0.0;
  afStack_90[0xd] = 0.0;
  afStack_90[2] = 0.0;
  afStack_90[3] = 0.0;
  afStack_90[0] = 0.0;
  afStack_90[1] = 0.0;
  afStack_90[6] = 0.0;
  afStack_90[7] = 0.0;
  afStack_90[4] = 0.0;
  afStack_90[5] = 0.0;
  pauVar10 = (undefined1 (*) [16])0x11382b170;
  puVar12 = (undefined8 *)0x6;
  plVar9 = param_1;
  (**(code **)(*param_1 + 0x98))();
  lVar13 = 0;
  lVar14 = 0;
  fVar1 = *(float *)(param_1 + 8);
  pfVar15 = (float *)(param_1 + 0xc);
  do {
    *pfVar15 = fVar1 + *(float *)((long)afStack_90 + lVar13);
    pfVar15[-4] = *(float *)((long)afStack_90 + lVar13 + 0x30) - fVar1;
    lVar14 = lVar14 + 0x10;
    pfVar15 = pfVar15 + 1;
    lVar13 = lVar13 + 0x14;
  } while (lVar14 != 0x30);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return;
  }
  ___stack_chk_fail();
  __Unwind_Resume();
  auVar33 = *pauVar10;
  auVar34 = pauVar10[1];
  auVar6 = pauVar10[2];
  fVar7 = *(float *)(pauVar10[3] + 0xc);
  auVar30._0_8_ = auVar33._0_8_ & 0x7fffffff7fffffff;
  auVar30[8] = auVar33[8];
  auVar30[9] = auVar33[9];
  auVar30[10] = auVar33[10];
  auVar30[0xb] = auVar33[0xb] & 0x7f;
  fVar1 = (float)plVar9[0xc];
  fVar3 = (float)plVar9[10];
  fVar16 = (float)((ulong)plVar9[0xc] >> 0x20);
  fVar2 = (float)((ulong)plVar9[10] >> 0x20);
  fVar35 = (fVar1 + fVar3) * 0.5;
  fVar37 = (fVar16 + fVar2) * 0.5;
  fVar38 = ((float)plVar9[0xd] + (float)plVar9[0xb]) * 0.5;
  auVar32._0_4_ = auVar6._0_4_ * fVar35;
  auVar32._4_4_ = auVar6._4_4_ * fVar37;
  auVar32._8_4_ = auVar6._8_4_ * fVar38;
  fVar1 = (fVar1 - fVar3) * 0.5 + 0.0;
  fVar16 = (fVar16 - fVar2) * 0.5 + 0.0;
  fVar2 = ((float)plVar9[0xd] - (float)plVar9[0xb]) * 0.5 + 0.0;
  fVar3 = auVar33._0_4_ * fVar35;
  fVar4 = auVar33._4_4_ * fVar37;
  uVar17 = (undefined1)((uint)fVar4 >> 8);
  uVar18 = (undefined1)((uint)fVar4 >> 0x10);
  uVar19 = (undefined1)((uint)fVar4 >> 0x18);
  fVar5 = auVar33._8_4_ * fVar38;
  uVar20 = (undefined1)((uint)fVar5 >> 8);
  uVar21 = (undefined1)((uint)fVar5 >> 0x10);
  uVar22 = (undefined1)((uint)fVar5 >> 0x18);
  fVar26 = auVar33._12_4_ * 0.0;
  uVar23 = (undefined1)((uint)fVar26 >> 8);
  uVar24 = (undefined1)((uint)fVar26 >> 0x10);
  uVar25 = (undefined1)((uint)fVar26 >> 0x18);
  auVar27._0_4_ = auVar34._0_4_ * fVar35;
  auVar27._4_4_ = auVar34._4_4_ * fVar37;
  auVar27._8_4_ = auVar34._8_4_ * fVar38;
  auVar27._12_4_ = auVar34._12_4_ * 0.0;
  auVar28[4] = SUB41(fVar4,0);
  auVar28._0_4_ = fVar3;
  auVar28[5] = uVar17;
  auVar28[6] = uVar18;
  auVar28[7] = uVar19;
  auVar28[8] = SUB41(fVar5,0);
  auVar28[9] = uVar20;
  auVar28[10] = uVar21;
  auVar28[0xb] = uVar22;
  auVar28[0xc] = SUB41(fVar26,0);
  auVar28[0xd] = uVar23;
  auVar28[0xe] = uVar24;
  auVar28[0xf] = uVar25;
  auVar29[4] = SUB41(fVar4,0);
  auVar29._0_4_ = fVar3;
  auVar29[5] = uVar17;
  auVar29[6] = uVar18;
  auVar29[7] = uVar19;
  auVar29[8] = SUB41(fVar5,0);
  auVar29[9] = uVar20;
  auVar29[10] = uVar21;
  auVar29[0xb] = uVar22;
  auVar29[0xc] = SUB41(fVar26,0);
  auVar29[0xd] = uVar23;
  auVar29[0xe] = uVar24;
  auVar29[0xf] = uVar25;
  auVar29 = NEON_ext(auVar28,auVar29,8,1);
  auVar36 = NEON_ext(auVar27,auVar27,8,1);
  auVar32._12_4_ = 0;
  auVar28 = NEON_ext(auVar32,auVar32,8,1);
  fVar4 = *(float *)pauVar10[3] + fVar3 + fVar4 + auVar29._0_4_;
  fVar3 = *(float *)(pauVar10[3] + 4) + auVar27._0_4_ + auVar27._4_4_ + auVar36._0_4_;
  fVar5 = *(float *)(pauVar10[3] + 8) +
          auVar32._0_4_ + auVar32._4_4_ + auVar28._0_4_ + auVar28._4_4_;
  auVar36._0_4_ = fVar1 * ABS(auVar33._0_4_);
  auVar36._4_4_ = fVar16 * (float)(auVar30._0_8_ >> 0x20);
  auVar36._8_4_ = fVar2 * auVar30._8_4_;
  auVar36._12_4_ = 0;
  auVar31._0_4_ = fVar1 * ABS(auVar34._0_4_);
  auVar31._4_4_ = fVar16 * ABS(auVar34._4_4_);
  auVar31._8_4_ = fVar2 * ABS(auVar34._8_4_);
  auVar31._12_4_ = 0;
  fVar1 = fVar1 * ABS(auVar6._0_4_);
  fVar16 = fVar16 * ABS(auVar6._4_4_);
  uVar17 = (undefined1)((uint)fVar16 >> 8);
  uVar18 = (undefined1)((uint)fVar16 >> 0x10);
  uVar19 = (undefined1)((uint)fVar16 >> 0x18);
  fVar2 = fVar2 * ABS(auVar6._8_4_);
  uVar20 = (undefined1)((uint)fVar2 >> 8);
  uVar21 = (undefined1)((uint)fVar2 >> 0x10);
  uVar22 = (undefined1)((uint)fVar2 >> 0x18);
  auVar33 = NEON_ext(auVar36,auVar36,8,1);
  auVar34 = NEON_ext(auVar31,auVar31,8,1);
  fVar26 = auVar36._0_4_ + auVar36._4_4_ + auVar33._0_4_;
  fVar35 = auVar31._0_4_ + auVar31._4_4_ + auVar34._0_4_;
  auVar33[4] = SUB41(fVar16,0);
  auVar33._0_4_ = fVar1;
  auVar33[5] = uVar17;
  auVar33[6] = uVar18;
  auVar33[7] = uVar19;
  auVar33[8] = SUB41(fVar2,0);
  auVar33[9] = uVar20;
  auVar33[10] = uVar21;
  auVar33[0xb] = uVar22;
  auVar33._12_4_ = 0;
  auVar34[4] = SUB41(fVar16,0);
  auVar34._0_4_ = fVar1;
  auVar34[5] = uVar17;
  auVar34[6] = uVar18;
  auVar34[7] = uVar19;
  auVar34[8] = SUB41(fVar2,0);
  auVar34[9] = uVar20;
  auVar34[10] = uVar21;
  auVar34[0xb] = uVar22;
  auVar34._12_4_ = 0;
  auVar33 = NEON_ext(auVar33,auVar34,8,1);
  fVar16 = fVar1 + fVar16 + auVar33._0_4_ + auVar33._4_4_;
  fVar1 = fVar3 - fVar35;
  *(ulong *)((long)pfVar11 + 8) = (ulong)(uint)(fVar5 - fVar16);
  *(ulong *)pfVar11 =
       CONCAT17((char)((uint)fVar1 >> 0x18),
                CONCAT16((char)((uint)fVar1 >> 0x10),
                         CONCAT15((char)((uint)fVar1 >> 8),CONCAT14(SUB41(fVar1,0),fVar4 - fVar26)))
               );
  fVar3 = fVar3 + fVar35;
  fVar1 = fVar7 + 0.0 + 0.0;
  puVar12[1] = CONCAT17((char)((uint)fVar1 >> 0x18),
                        CONCAT16((char)((uint)fVar1 >> 0x10),
                                 CONCAT15((char)((uint)fVar1 >> 8),
                                          CONCAT14(SUB41(fVar1,0),fVar5 + fVar16))));
  *puVar12 = CONCAT17((char)((uint)fVar3 >> 0x18),
                      CONCAT16((char)((uint)fVar3 >> 0x10),
                               CONCAT15((char)((uint)fVar3 >> 8),
                                        CONCAT14(SUB41(fVar3,0),fVar4 + fVar26))));
  return;
}



/* Entry: 10981cc20; end: 10981cceb;  */

void FUN_10981cc20(long param_1,undefined1 (*param_2) [16],undefined8 *param_3,undefined8 *param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  undefined1 auVar4 [16];
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  undefined1 uVar10;
  undefined1 uVar11;
  undefined1 uVar12;
  undefined1 uVar13;
  undefined1 uVar14;
  undefined1 uVar15;
  undefined1 uVar16;
  undefined1 uVar17;
  undefined1 uVar18;
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [12];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  float fVar27;
  float fVar29;
  float fVar30;
  undefined1 auVar28 [16];
  
  fVar9 = (float)*(undefined8 *)(param_1 + 0x68);
  fVar6 = (float)*(undefined8 *)(param_1 + 0x60);
  fVar8 = (float)((ulong)*(undefined8 *)(param_1 + 0x60) >> 0x20);
  auVar25 = *param_2;
  auVar26 = param_2[1];
  auVar4 = param_2[2];
  fVar5 = *(float *)(param_2[3] + 0xc);
  auVar22._0_8_ = auVar25._0_8_ & 0x7fffffff7fffffff;
  auVar22[8] = auVar25[8];
  auVar22[9] = auVar25[9];
  auVar22[10] = auVar25[10];
  auVar22[0xb] = auVar25[0xb] & 0x7f;
  fVar1 = (float)*(undefined8 *)(param_1 + 0x50);
  fVar2 = (float)((ulong)*(undefined8 *)(param_1 + 0x50) >> 0x20);
  fVar3 = (float)*(undefined8 *)(param_1 + 0x58);
  fVar27 = (fVar6 + fVar1) * 0.5;
  fVar29 = (fVar8 + fVar2) * 0.5;
  fVar30 = (fVar9 + fVar3) * 0.5;
  auVar24._0_4_ = auVar4._0_4_ * fVar27;
  auVar24._4_4_ = auVar4._4_4_ * fVar29;
  auVar24._8_4_ = auVar4._8_4_ * fVar30;
  fVar7 = (fVar6 - fVar1) * 0.5 + 0.0;
  fVar8 = (fVar8 - fVar2) * 0.5 + 0.0;
  fVar9 = (fVar9 - fVar3) * 0.5 + 0.0;
  fVar1 = auVar25._0_4_ * fVar27;
  fVar2 = auVar25._4_4_ * fVar29;
  uVar10 = (undefined1)((uint)fVar2 >> 8);
  uVar11 = (undefined1)((uint)fVar2 >> 0x10);
  uVar12 = (undefined1)((uint)fVar2 >> 0x18);
  fVar3 = auVar25._8_4_ * fVar30;
  uVar13 = (undefined1)((uint)fVar3 >> 8);
  uVar14 = (undefined1)((uint)fVar3 >> 0x10);
  uVar15 = (undefined1)((uint)fVar3 >> 0x18);
  fVar6 = auVar25._12_4_ * 0.0;
  uVar16 = (undefined1)((uint)fVar6 >> 8);
  uVar17 = (undefined1)((uint)fVar6 >> 0x10);
  uVar18 = (undefined1)((uint)fVar6 >> 0x18);
  auVar19._0_4_ = auVar26._0_4_ * fVar27;
  auVar19._4_4_ = auVar26._4_4_ * fVar29;
  auVar19._8_4_ = auVar26._8_4_ * fVar30;
  auVar19._12_4_ = auVar26._12_4_ * 0.0;
  auVar20[4] = SUB41(fVar2,0);
  auVar20._0_4_ = fVar1;
  auVar20[5] = uVar10;
  auVar20[6] = uVar11;
  auVar20[7] = uVar12;
  auVar20[8] = SUB41(fVar3,0);
  auVar20[9] = uVar13;
  auVar20[10] = uVar14;
  auVar20[0xb] = uVar15;
  auVar20[0xc] = SUB41(fVar6,0);
  auVar20[0xd] = uVar16;
  auVar20[0xe] = uVar17;
  auVar20[0xf] = uVar18;
  auVar21[4] = SUB41(fVar2,0);
  auVar21._0_4_ = fVar1;
  auVar21[5] = uVar10;
  auVar21[6] = uVar11;
  auVar21[7] = uVar12;
  auVar21[8] = SUB41(fVar3,0);
  auVar21[9] = uVar13;
  auVar21[10] = uVar14;
  auVar21[0xb] = uVar15;
  auVar21[0xc] = SUB41(fVar6,0);
  auVar21[0xd] = uVar16;
  auVar21[0xe] = uVar17;
  auVar21[0xf] = uVar18;
  auVar21 = NEON_ext(auVar20,auVar21,8,1);
  auVar28 = NEON_ext(auVar19,auVar19,8,1);
  auVar24._12_4_ = 0;
  auVar20 = NEON_ext(auVar24,auVar24,8,1);
  fVar1 = *(float *)param_2[3] + fVar1 + fVar2 + auVar21._0_4_;
  fVar2 = *(float *)(param_2[3] + 4) + auVar19._0_4_ + auVar19._4_4_ + auVar28._0_4_;
  fVar3 = *(float *)(param_2[3] + 8) + auVar24._0_4_ + auVar24._4_4_ + auVar20._0_4_ + auVar20._4_4_
  ;
  auVar28._0_4_ = fVar7 * ABS(auVar25._0_4_);
  auVar28._4_4_ = fVar8 * (float)(auVar22._0_8_ >> 0x20);
  auVar28._8_4_ = fVar9 * auVar22._8_4_;
  auVar28._12_4_ = 0;
  auVar23._0_4_ = fVar7 * ABS(auVar26._0_4_);
  auVar23._4_4_ = fVar8 * ABS(auVar26._4_4_);
  auVar23._8_4_ = fVar9 * ABS(auVar26._8_4_);
  auVar23._12_4_ = 0;
  fVar7 = fVar7 * ABS(auVar4._0_4_);
  fVar8 = fVar8 * ABS(auVar4._4_4_);
  fVar9 = fVar9 * ABS(auVar4._8_4_);
  auVar25 = NEON_ext(auVar28,auVar28,8,1);
  auVar26 = NEON_ext(auVar23,auVar23,8,1);
  fVar27 = auVar28._0_4_ + auVar28._4_4_ + auVar25._0_4_;
  fVar29 = auVar23._0_4_ + auVar23._4_4_ + auVar26._0_4_;
  auVar25._4_4_ = fVar8;
  auVar25._0_4_ = fVar7;
  auVar25._8_4_ = fVar9;
  auVar25._12_4_ = 0;
  auVar26._4_4_ = fVar8;
  auVar26._0_4_ = fVar7;
  auVar26._8_4_ = fVar9;
  auVar26._12_4_ = 0;
  auVar25 = NEON_ext(auVar25,auVar26,8,1);
  fVar6 = fVar7 + fVar8 + auVar25._0_4_ + auVar25._4_4_;
  param_3[1] = (ulong)(uint)(fVar3 - fVar6);
  *param_3 = CONCAT44(fVar2 - fVar29,fVar1 - fVar27);
  param_4[1] = CONCAT44(fVar5 + 0.0 + 0.0,fVar3 + fVar6);
  *param_4 = CONCAT44(fVar2 + fVar29,fVar1 + fVar27);
  return;
}



/* Entry: 10981ccec; end: 10981cea3;  */

void FUN_10981ccec(long param_1,long param_2)

{
  uint uVar1;
  uint uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  
  uVar1 = *(uint *)(param_2 + 4);
  uVar2 = *(uint *)(param_1 + 4);
  if (((int)uVar2 < (int)uVar1) && (*(int *)(param_1 + 8) < (int)uVar1)) {
    if (uVar1 == 0) {
      lVar5 = 0;
    }
    else {
      lVar5 = (long)(int)uVar1 << 4;
      FUN_1098256f4(lVar5,0x10);
      uVar2 = *(uint *)(param_1 + 4);
    }
    if (0 < (int)uVar2) {
      lVar6 = 0;
      do {
        puVar3 = (undefined8 *)(*(long *)(param_1 + 0x10) + lVar6);
        uVar7 = *puVar3;
        ((undefined8 *)(lVar5 + lVar6))[1] = puVar3[1];
        *(undefined8 *)(lVar5 + lVar6) = uVar7;
        lVar6 = lVar6 + 0x10;
      } while ((ulong)uVar2 << 4 != lVar6);
    }
    if ((*(long *)(param_1 + 0x10) != 0) && (*(char *)(param_1 + 0x18) == '\x01')) {
      FUN_109825740();
    }
    *(undefined1 *)(param_1 + 0x18) = 1;
    *(long *)(param_1 + 0x10) = lVar5;
    *(uint *)(param_1 + 8) = uVar1;
  }
  *(uint *)(param_1 + 4) = uVar1;
  if (0 < (int)uVar1) {
    lVar5 = 0;
    lVar6 = *(long *)(param_1 + 0x10);
    do {
      puVar3 = (undefined8 *)(*(long *)(param_2 + 0x10) + lVar5);
      uVar7 = *puVar3;
      puVar4 = (undefined8 *)(lVar6 + lVar5);
      puVar4[1] = puVar3[1];
      *puVar4 = uVar7;
      lVar5 = lVar5 + 0x10;
    } while ((ulong)uVar1 * 0x10 - lVar5 != 0);
  }
  return;
}



/* Entry: 10981cea4; end: 10981cf0b;  */

void FUN_10981cea4(long param_1,undefined8 param_2,float *param_3,undefined8 *param_4)

{
  long lVar1;
  double dStack_38;
  undefined8 uStack_30;
  undefined4 uStack_28;
  
  lVar1 = *(long *)(param_1 + 0x28) + 0x20;
  FUN_10981abbc(lVar1,0,&dStack_38,param_2,&uStack_30);
  if ((int)lVar1 != 0) {
    *param_4 = uStack_30;
    *(undefined4 *)(param_4 + 1) = uStack_28;
    *(undefined4 *)((long)param_4 + 0xc) = 0;
    *param_3 = (float)dStack_38;
  }
  return;
}



/* Entry: 10981cf0c; end: 10981cf2b;  */

void FUN_10981cf0c(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  return;
}



/* Entry: 10981cf2c; end: 10981d08b;  */

void FUN_10981cf2c(float *param_1,long *param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  uint uVar5;
  float fVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  float fStack_50;
  float fStack_4c;
  float fStack_48;
  float fStack_44;
  undefined1 auStack_40 [16];
  
  (**(code **)(*param_2 + 0x88))(auStack_40);
  fVar1 = *param_3;
  fVar3 = param_3[1];
  fVar4 = param_3[2];
  fVar2 = param_3[3];
  auVar8._0_4_ = fVar1 * fVar1;
  auVar8._4_4_ = fVar3 * fVar3;
  auVar8._8_4_ = fVar4 * fVar4;
  auVar8._12_4_ = fVar2 * fVar2;
  auVar7 = NEON_ext(auVar8,auVar8,8,1);
  uVar5 = -(uint)(auVar8._0_4_ + auVar8._4_4_ + auVar7._0_4_ < 1.4210855e-14);
  fVar1 = (float)((uint)fVar1 ^ ((uint)fVar1 ^ 0xbf800000) & uVar5);
  fVar3 = (float)((uint)fVar3 ^ ((uint)fVar3 ^ 0xbf800000) & uVar5);
  fVar4 = (float)((uint)fVar4 ^ ((uint)fVar4 ^ 0xbf800000) & uVar5);
  fVar2 = (float)((uint)fVar2 ^ (uint)fVar2 & uVar5);
  auVar7._0_4_ = fVar1 * fVar1;
  auVar7._4_4_ = fVar3 * fVar3;
  auVar7._8_4_ = fVar4 * fVar4;
  auVar7._12_4_ = fVar2 * fVar2;
  auVar8 = NEON_ext(auVar7,auVar7,8,1);
  fVar6 = 1.0 / SQRT(auVar7._0_4_ + auVar7._4_4_ + auVar8._0_4_);
  fVar2 = (float)(**(code **)(*param_2 + 0x60))(param_2);
  fStack_50 = (float)auStack_40._0_8_;
  fStack_4c = SUB84(auStack_40._0_8_,4);
  fStack_48 = (float)auStack_40._8_8_;
  fStack_44 = SUB84(auStack_40._8_8_,4);
  param_1[2] = fStack_48 + fVar4 * fVar6 * fVar2;
  param_1[3] = fStack_44 + 0.0;
  *param_1 = fStack_50 + fVar1 * fVar6 * fVar2;
  param_1[1] = fStack_4c + fVar3 * fVar6 * fVar2;
  return;
}



/* Entry: 10981d08c; end: 10981d0f7;  */

void FUN_10981d08c(float param_1,long *param_2,undefined8 *param_3)

{
  float fVar1;
  
  fVar1 = param_1 * 0.4;
  (**(code **)(*param_2 + 0x60))();
  fVar1 = fVar1 * param_1;
  (**(code **)(*param_2 + 0x60))(param_2);
  fVar1 = fVar1 * param_1;
  param_3[1] = (ulong)(uint)fVar1;
  *param_3 = CONCAT17((char)((uint)fVar1 >> 0x18),
                      CONCAT16((char)((uint)fVar1 >> 0x10),
                               CONCAT15((char)((uint)fVar1 >> 8),CONCAT14(SUB41(fVar1,0),fVar1))));
  return;
}



/* Entry: 10981d0f8; end: 10981d0fb;  */

void FUN_10981d0f8(void)

{
  return;
}



/* Entry: 10981d0fc; end: 10981d117;  */

void FUN_10981d0fc(long param_1)

{
  if (param_1 != 0) {
    FUN_109825740();
  }
  return;
}



/* Entry: 10981d118; end: 10981d13b;  */

undefined * FUN_10981d118(void)

{
  return &UNK_10f580bbc;
}



/* Entry: 10981d13c; end: 10981d577;  */

void FUN_10981d13c(long param_1,float *param_2,float *param_3,undefined1 (*param_4) [16],
                  undefined ***param_5,long *param_6)

{
  undefined4 uVar1;
  undefined **ppuVar2;
  undefined1 auVar3 [16];
  long lVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  undefined8 *puVar8;
  long *plVar9;
  undefined ***pppuVar10;
  undefined1 (*pauVar11) [16];
  undefined1 (*pauVar12) [16];
  undefined ***pppuVar13;
  undefined4 *puVar14;
  undefined1 (*pauVar15) [16];
  long lVar16;
  undefined4 uVar17;
  float fVar18;
  float fVar19;
  undefined8 uVar20;
  undefined1 auVar21 [12];
  undefined1 auVar22 [12];
  float fVar33;
  undefined1 auVar23 [12];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined8 extraout_d1;
  float fVar43;
  undefined8 extraout_var;
  undefined1 auVar34 [16];
  undefined1 auVar37 [16];
  float fVar42;
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  float fVar50;
  float fVar51;
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  undefined8 uVar59;
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  undefined8 uVar62;
  undefined1 auVar63 [16];
  undefined1 auVar64 [16];
  float fVar68;
  undefined1 auVar65 [16];
  undefined1 auVar66 [16];
  undefined1 auVar67 [16];
  ulong unaff_d9;
  float fVar69;
  undefined1 auVar70 [16];
  undefined1 auVar71 [16];
  float fStack_4a0;
  float fStack_49c;
  float fStack_498;
  float fStack_494;
  undefined1 auStack_490 [16];
  ulong uStack_480;
  undefined8 uStack_478;
  undefined1 (*pauStack_470) [16];
  long *plStack_468;
  undefined1 **ppuStack_460;
  code *pcStack_458;
  undefined8 uStack_450;
  undefined8 uStack_448;
  undefined8 uStack_440;
  undefined8 uStack_438;
  float fStack_430;
  float fStack_42c;
  float fStack_428;
  undefined4 uStack_424;
  float fStack_420;
  float fStack_41c;
  float fStack_418;
  float fStack_414;
  undefined1 auStack_410 [64];
  undefined **ppuStack_3d0;
  ulong uStack_3c8;
  undefined1 auStack_3a0 [16];
  undefined **ppuStack_390;
  long lStack_388;
  undefined **ppuStack_380;
  ulong uStack_378;
  undefined8 uStack_370;
  ulong uStack_368;
  undefined **ppuStack_360;
  ulong uStack_358;
  undefined8 uStack_350;
  ulong uStack_348;
  undefined **ppuStack_340;
  ulong uStack_338;
  undefined1 auStack_330 [16];
  undefined **ppuStack_320;
  long lStack_318;
  float fStack_310;
  char cStack_30c;
  undefined8 uStack_300;
  float fStack_2f8;
  undefined1 auStack_2f0 [16];
  undefined **ppuStack_2e0;
  long lStack_2d8;
  float fStack_2d0;
  char cStack_2cc;
  long lStack_2b8;
  undefined1 *puStack_220;
  code *pcStack_218;
  ulong uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  float fStack_1f0;
  float fStack_1ec;
  float fStack_1e8;
  float fStack_1e4;
  float fStack_1e0;
  float fStack_1dc;
  float fStack_1d8;
  float fStack_1d4;
  float fStack_1d0;
  float fStack_1cc;
  float fStack_1c8;
  float fStack_1c4;
  float fStack_1c0;
  float fStack_1bc;
  float fStack_1b8;
  float fStack_1b4;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined **ppuStack_190;
  ulong uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined4 uStack_100;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  long *plStack_c0;
  long lStack_b8;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined1 uStack_a0;
  undefined4 uStack_98;
  undefined8 uStack_8c;
  long lStack_78;
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if (*(long *)(param_1 + 0x20) == 0) {
    lVar16 = *(long *)(param_1 + 0x28);
    fStack_1c0 = *param_2;
    fStack_1bc = param_2[1];
    fStack_1b8 = param_2[2];
    fStack_1b4 = param_2[3];
    auVar44 = *(undefined1 (*) [16])(param_2 + 4);
    auVar49 = *(undefined1 (*) [16])(param_2 + 8);
    uStack_200 = *(undefined8 *)(param_2 + 0xc);
    uStack_1f8 = *(undefined8 *)(param_2 + 0xe);
    fStack_1e0 = *(float *)*(undefined1 (*) [16])(param_3 + 4);
    fStack_1dc = param_3[5];
    fStack_1d8 = param_3[6];
    fStack_1d4 = param_3[7];
    fStack_1d0 = param_3[8];
    fStack_1cc = param_3[9];
    fStack_1c8 = param_3[10];
    fStack_1c4 = param_3[0xb];
    uStack_210 = *(ulong *)(param_3 + 0xc);
    uStack_208 = *(undefined8 *)(param_3 + 0xe);
    fStack_1f0 = *param_3;
    fStack_1ec = param_3[1];
    fStack_1e8 = param_3[2];
    fStack_1e4 = param_3[3];
    auVar54 = *(undefined1 (*) [16])(lVar16 + 0x50);
    fVar43 = auVar44._4_4_;
    fVar68 = auVar44._8_4_;
    fVar33 = auVar49._4_4_;
    uStack_1a8 = auVar44._8_8_;
    uStack_1b0 = auVar44._0_8_;
    uStack_198 = auVar49._8_8_;
    uStack_1a0 = auVar49._0_8_;
    fVar42 = auVar44._0_4_;
    fVar69 = auVar49._0_4_;
    fVar19 = auVar49._8_4_;
    auVar21._0_8_ = auVar54._0_8_ ^ 0x8000000080000000;
    auVar21[8] = auVar54[8];
    auVar21[9] = auVar54[9];
    auVar21[10] = auVar54[10];
    auVar21[0xb] = auVar54[0xb] ^ 0x80;
    auVar63[0xc] = auVar54[0xc];
    auVar63._0_12_ = auVar21;
    auVar63[0xd] = auVar54[0xd];
    auVar63[0xe] = auVar54[0xe];
    auVar63[0xf] = auVar54[0xf] ^ 0x80;
    fVar18 = (float)auVar21._0_8_;
    auVar67._0_4_ = (fStack_1f0 * fStack_1c0 + fStack_1e0 * fVar42 + fStack_1d0 * fVar69) * fVar18;
    fVar50 = (float)(auVar21._0_8_ >> 0x20);
    auVar67._4_4_ = (fStack_1ec * fStack_1c0 + fStack_1dc * fVar42 + fStack_1cc * fVar69) * fVar50;
    fVar51 = auVar21._8_4_;
    auVar67._8_4_ = (fStack_1e8 * fStack_1c0 + fStack_1d8 * fVar42 + fStack_1c8 * fVar69) * fVar51;
    auVar67._12_4_ = (fStack_1c0 * 0.0 + fVar42 * 0.0 + fVar69 * 0.0) * auVar63._12_4_;
    auVar45._0_4_ = (fStack_1f0 * fStack_1bc + fStack_1e0 * fVar43 + fStack_1d0 * fVar33) * fVar18;
    auVar45._4_4_ = (fStack_1ec * fStack_1bc + fStack_1dc * fVar43 + fStack_1cc * fVar33) * fVar50;
    auVar45._8_4_ = (fStack_1e8 * fStack_1bc + fStack_1d8 * fVar43 + fStack_1c8 * fVar33) * fVar51;
    auVar45._12_4_ = (fStack_1bc * 0.0 + fVar43 * 0.0 + fVar33 * 0.0) * auVar63._12_4_;
    auVar54._0_4_ = (fStack_1f0 * fStack_1b8 + fStack_1e0 * fVar68 + fStack_1d0 * fVar19) * fVar18;
    auVar54._4_4_ = (fStack_1ec * fStack_1b8 + fStack_1dc * fVar68 + fStack_1cc * fVar19) * fVar50;
    auVar54._8_4_ = (fStack_1e8 * fStack_1b8 + fStack_1d8 * fVar68 + fStack_1c8 * fVar19) * fVar51;
    auVar44 = NEON_ext(auVar67,auVar67,8,1);
    auVar49 = NEON_ext(auVar45,auVar45,8,1);
    auVar54._12_4_ = 0;
    uStack_f0._0_4_ = auVar67._0_4_ + auVar67._4_4_ + auVar44._0_4_;
    uStack_f0._4_4_ = auVar45._0_4_ + auVar45._4_4_ + auVar49._0_4_;
    auVar44 = NEON_ext(auVar54,auVar54,8,1);
    uStack_e8 = (ulong)(uint)(auVar54._0_4_ + auVar54._4_4_ + auVar44._0_4_ + auVar44._4_4_);
    pauVar12 = param_4;
    (**(code **)(**(long **)(param_1 + 0x18) + 0x80))
              (&uStack_180,*(long **)(param_1 + 0x18),&uStack_f0);
    auVar70._8_8_ = extraout_var;
    auVar70._0_8_ = extraout_d1;
    auVar49._4_4_ = fStack_1cc;
    auVar49._0_4_ = fStack_1d0;
    auVar49._8_4_ = fStack_1c8;
    auVar44._4_4_ = fStack_1cc;
    auVar44._0_4_ = fStack_1d0;
    auVar44._8_4_ = fStack_1c8;
    auVar71._4_12_ = auVar70._4_12_;
    auVar71._0_4_ = fStack_1f0;
    auVar35._12_4_ = (undefined4)((ulong)extraout_var >> 0x20);
    auVar35._0_8_ = auVar71._0_8_;
    auVar35._8_4_ = fStack_1e8;
    auVar34._8_8_ = auVar35._8_8_;
    auVar34._4_4_ = fStack_1e0;
    auVar34._0_4_ = fStack_1f0;
    auVar36._0_12_ = auVar34._0_12_;
    auVar36._12_4_ = fStack_1d8;
    auVar54 = NEON_ext(auVar36,auVar36,8,1);
    auVar22._0_8_ = uStack_210 ^ 0x8000000080000000;
    auVar22[8] = (undefined1)uStack_208;
    auVar22[9] = (undefined1)((ulong)uStack_208 >> 8);
    auVar22[10] = (undefined1)((ulong)uStack_208 >> 0x10);
    auVar22[0xb] = (byte)((ulong)uStack_208 >> 0x18) ^ 0x80;
    auVar65[0xc] = (undefined1)((ulong)uStack_208 >> 0x20);
    auVar65._0_12_ = auVar22;
    auVar65[0xd] = (undefined1)((ulong)uStack_208 >> 0x28);
    auVar65[0xe] = (undefined1)((ulong)uStack_208 >> 0x30);
    auVar65[0xf] = (byte)((ulong)uStack_208 >> 0x38) ^ 0x80;
    fVar18 = (float)auVar22._0_8_;
    auVar52._0_4_ = fStack_1f0 * fVar18;
    fVar50 = (float)(auVar22._0_8_ >> 0x20);
    auVar52._4_4_ = fStack_1e0 * fVar50;
    fVar51 = auVar22._8_4_;
    auVar52._8_4_ = fStack_1d0 * fVar51;
    auVar52._12_4_ = auVar65._12_4_ * 0.0;
    auVar60._0_4_ = fStack_1ec * fVar18;
    auVar60._4_4_ = fStack_1dc * fVar50;
    auVar60._8_4_ = fStack_1cc * fVar51;
    auVar60._12_4_ = auVar65._12_4_ * 0.0;
    auVar63 = NEON_ext(auVar52,auVar52,8,1);
    auVar65 = NEON_ext(auVar60,auVar60,8,1);
    auVar44._12_4_ = fStack_1c4;
    auVar49._12_4_ = fStack_1c4;
    auVar44 = NEON_ext(auVar44,auVar49,8,1);
    auVar24._0_4_ = auVar54._0_4_ * fVar18;
    auVar24._4_4_ = auVar54._4_4_ * fVar50;
    auVar24._8_4_ = auVar44._0_4_ * fVar51;
    auVar24._12_4_ = 0;
    auVar66 = NEON_ext(auVar24,auVar24,8,1);
    fVar51 = (float)uStack_1a8;
    fVar18 = (float)uStack_1b0;
    fVar50 = (float)((ulong)uStack_1b0 >> 0x20);
    auVar37._0_4_ = (float)uStack_200 * fStack_1f0;
    auVar37._4_4_ = uStack_200._4_4_ * fStack_1e0;
    auVar37._8_4_ = (float)uStack_1f8 * fStack_1d0;
    auVar37._12_4_ = uStack_1f8._4_4_ * 0.0;
    auVar55._0_4_ = (float)uStack_200 * fStack_1ec;
    auVar55._4_4_ = uStack_200._4_4_ * fStack_1dc;
    auVar55._8_4_ = (float)uStack_1f8 * fStack_1cc;
    auVar55._12_4_ = uStack_1f8._4_4_ * 0.0;
    auVar46._0_4_ = (float)uStack_200 * auVar54._0_4_;
    auVar46._4_4_ = uStack_200._4_4_ * auVar54._4_4_;
    auVar46._8_4_ = (float)uStack_1f8 * auVar44._0_4_;
    auVar54 = NEON_ext(auVar37,auVar37,8,1);
    auVar70 = NEON_ext(auVar55,auVar55,8,1);
    auVar46._12_4_ = 0;
    auVar44 = NEON_ext(auVar46,auVar46,8,1);
    auVar56._0_4_ =
         (fStack_1c0 * fStack_1f0 + fVar18 * fStack_1e0 + (float)uStack_1a0 * fStack_1d0) *
         (float)uStack_180;
    auVar56._4_4_ =
         (fStack_1bc * fStack_1f0 + fVar50 * fStack_1e0 + uStack_1a0._4_4_ * fStack_1d0) *
         uStack_180._4_4_;
    auVar56._8_4_ =
         (fStack_1b8 * fStack_1f0 + fVar51 * fStack_1e0 + (float)uStack_198 * fStack_1d0) *
         (float)uStack_178;
    auVar56._12_4_ = (fStack_1f0 * 0.0 + fStack_1e0 * 0.0 + fStack_1d0 * 0.0) * uStack_178._4_4_;
    auVar53._0_4_ =
         (fStack_1c0 * fStack_1ec + fVar18 * fStack_1dc + (float)uStack_1a0 * fStack_1cc) *
         (float)uStack_180;
    auVar53._4_4_ =
         (fStack_1bc * fStack_1ec + fVar50 * fStack_1dc + uStack_1a0._4_4_ * fStack_1cc) *
         uStack_180._4_4_;
    auVar53._8_4_ =
         (fStack_1b8 * fStack_1ec + fVar51 * fStack_1dc + (float)uStack_198 * fStack_1cc) *
         (float)uStack_178;
    auVar53._12_4_ = (fStack_1ec * 0.0 + fStack_1dc * 0.0 + fStack_1cc * 0.0) * uStack_178._4_4_;
    auVar61._0_4_ =
         (fStack_1c0 * fStack_1e8 + fVar18 * fStack_1d8 + (float)uStack_1a0 * fStack_1c8) *
         (float)uStack_180;
    auVar61._4_4_ =
         (fStack_1bc * fStack_1e8 + fVar50 * fStack_1d8 + uStack_1a0._4_4_ * fStack_1c8) *
         uStack_180._4_4_;
    auVar61._8_4_ =
         (fStack_1b8 * fStack_1e8 + fVar51 * fStack_1d8 + (float)uStack_198 * fStack_1c8) *
         (float)uStack_178;
    auVar67 = NEON_ext(auVar56,auVar56,8,1);
    auVar71 = NEON_ext(auVar53,auVar53,8,1);
    auVar61._12_4_ = 0;
    auVar49 = NEON_ext(auVar61,auVar61,8,1);
    fVar19 = auVar52._0_4_ + auVar52._4_4_ + auVar63._0_4_ +
             auVar37._0_4_ + auVar37._4_4_ + auVar54._0_4_ +
             auVar56._0_4_ + auVar56._4_4_ + auVar67._0_4_;
    fVar42 = auVar60._0_4_ + auVar60._4_4_ + auVar65._0_4_ +
             auVar55._0_4_ + auVar55._4_4_ + auVar70._0_4_ +
             auVar53._0_4_ + auVar53._4_4_ + auVar71._0_4_;
    fVar43 = auVar46._0_4_ + auVar46._4_4_ + auVar44._0_4_ + auVar44._4_4_ +
             auVar24._0_4_ + auVar24._4_4_ + auVar66._0_4_ + auVar66._4_4_ +
             auVar61._0_4_ + auVar61._4_4_ + auVar49._0_4_ + auVar49._4_4_;
    fVar18 = *(float *)*(undefined1 (*) [16])(lVar16 + 0x50);
    fVar50 = *(float *)(lVar16 + 0x54);
    fVar51 = *(float *)(lVar16 + 0x58);
    fVar69 = *(float *)(lVar16 + 0x5c);
    auVar66._0_4_ = fVar18 * fVar19;
    auVar66._4_4_ = fVar50 * fVar42;
    auVar66._8_4_ = fVar51 * fVar43;
    auVar66._12_4_ = fVar69 * 0.0;
    auVar44 = NEON_ext(auVar66,auVar66,8,1);
    fVar33 = (auVar66._0_4_ + auVar66._4_4_ + auVar44._0_4_) - *(float *)(lVar16 + 0x60);
    fVar19 = fVar19 - fVar18 * fVar33;
    fVar42 = fVar42 - fVar50 * fVar33;
    fVar43 = fVar43 - fVar51 * fVar33;
    fVar33 = param_3[8];
    auVar57._0_4_ = fVar33 * fVar19;
    auVar57._4_4_ = param_3[9] * fVar42;
    auVar57._8_4_ = param_3[10] * fVar43;
    auVar64._0_4_ = *param_3 * fVar19;
    auVar64._4_4_ = param_3[1] * fVar42;
    auVar64._8_4_ = param_3[2] * fVar43;
    auVar64._12_4_ = param_3[3] * 0.0;
    auVar44 = *(undefined1 (*) [16])(param_3 + 4);
    auVar38._0_4_ = auVar44._0_4_ * fVar19;
    auVar38._4_4_ = auVar44._4_4_ * fVar42;
    auVar38._8_4_ = auVar44._8_4_ * fVar43;
    auVar38._12_4_ = auVar44._12_4_ * 0.0;
    auVar54 = NEON_ext(auVar64,auVar64,8,1);
    auVar63 = NEON_ext(auVar38,auVar38,8,1);
    auVar57._12_4_ = 0;
    auVar49 = NEON_ext(auVar57,auVar57,8,1);
    uStack_e8._4_4_ = param_3[0xf] + 0.0;
    uStack_e8._0_4_ = param_3[0xe] + auVar57._0_4_ + auVar57._4_4_ + auVar49._0_4_ + auVar49._4_4_;
    uStack_f0 = (undefined **)
                CONCAT44(param_3[0xd] + auVar38._0_4_ + auVar38._4_4_ + auVar63._0_4_,
                         param_3[0xc] + auVar64._0_4_ + auVar64._4_4_ + auVar54._0_4_);
    auVar39._0_4_ = fVar18 * *param_3;
    auVar39._4_4_ = fVar50 * param_3[1];
    auVar39._8_4_ = fVar51 * param_3[2];
    auVar39._12_4_ = fVar69 * param_3[3];
    auVar58._0_4_ = fVar18 * auVar44._0_4_;
    auVar58._4_4_ = fVar50 * auVar44._4_4_;
    auVar58._8_4_ = fVar51 * auVar44._8_4_;
    auVar58._12_4_ = fVar69 * auVar44._12_4_;
    auVar47._0_4_ = fVar18 * fVar33;
    auVar47._4_4_ = fVar50 * param_3[9];
    auVar47._8_4_ = fVar51 * param_3[10];
    auVar44 = NEON_ext(auVar39,auVar39,8,1);
    auVar49 = NEON_ext(auVar58,auVar58,8,1);
    auVar47._12_4_ = 0;
    ppuStack_190 = (undefined **)
                   CONCAT44(auVar49._0_4_ + auVar58._0_4_ + auVar58._4_4_,
                            auVar44._0_4_ + auVar39._0_4_ + auVar39._4_4_);
    auVar44 = NEON_ext(auVar47,auVar47,8,1);
    uStack_188 = (ulong)(uint)(auVar47._0_4_ + auVar47._4_4_ + auVar44._0_4_ + auVar44._4_4_);
    pppuVar10 = &ppuStack_190;
    pauVar11 = (undefined1 (*) [16])&uStack_f0;
    (**(code **)(*(long *)*param_4 + 0x20))();
  }
  else {
    puVar14 = *(undefined4 **)(param_1 + 8);
    *(undefined1 *)(puVar14 + 0x51) = 0;
    *puVar14 = 0;
    *(undefined1 *)(puVar14 + 0x60) = 1;
    *(undefined8 *)(puVar14 + 0x4e) = 0x5d5e0b6b;
    *(undefined8 *)(puVar14 + 0x4c) = 0x5d5e0b6b5d5e0b6b;
    *(undefined1 *)(puVar14 + 0x5d) = 0;
    *(undefined8 *)(puVar14 + 0x5b) = 0;
    *(undefined8 *)(puVar14 + 0x59) = 0;
    *(byte *)(puVar14 + 0x58) = *(byte *)(puVar14 + 0x58) & 0xf0;
    plVar9 = *(long **)(param_1 + 0x18);
    lVar16 = *(long *)(param_1 + 0x20);
    lVar4 = plVar9[1];
    uVar1 = *(undefined4 *)(lVar16 + 8);
    uVar17 = (**(code **)(*plVar9 + 0x60))(plVar9);
    uStack_a4 = (**(code **)(**(long **)(param_1 + 0x20) + 0x60))();
    uStack_f0 = &PTR_FUN_110b14198;
    auVar44 = NEON_ext(*(undefined1 (*) [16])(param_1 + 8),*(undefined1 (*) [16])(param_1 + 8),8,1);
    uStack_d8 = 0;
    uStack_e0 = 0x3f80000000000000;
    uStack_c8 = auVar44._8_8_;
    uStack_d0 = auVar44._0_8_;
    uStack_a0 = 0;
    uStack_98 = 0xffffffff;
    uStack_8c = 0x100000001;
    uStack_100 = 0x5d5e0b6b;
    uStack_180 = *(undefined ***)param_2;
    uStack_178 = *(undefined8 *)(param_2 + 2);
    uStack_170 = *(undefined8 *)(param_2 + 4);
    uStack_168 = *(undefined8 *)(param_2 + 6);
    uStack_160 = *(undefined8 *)(param_2 + 8);
    uStack_158 = *(undefined8 *)(param_2 + 10);
    uStack_150 = *(undefined8 *)(param_2 + 0xc);
    uStack_148 = *(undefined8 *)(param_2 + 0xe);
    uStack_140 = *(undefined8 *)param_3;
    uStack_138 = *(undefined8 *)(param_3 + 2);
    uStack_130 = *(undefined8 *)(param_3 + 4);
    uStack_128 = *(undefined8 *)(param_3 + 6);
    uStack_120 = *(undefined8 *)(param_3 + 8);
    uStack_118 = *(undefined8 *)(param_3 + 10);
    uStack_110 = *(undefined8 *)(param_3 + 0xc);
    uStack_108 = *(undefined8 *)(param_3 + 0xe);
    pauVar15 = (undefined1 (*) [16])&uStack_f0;
    pppuVar10 = (undefined ***)&uStack_180;
    pauVar12 = (undefined1 (*) [16])0x0;
    pauVar11 = param_4;
    plStack_c0 = plVar9;
    lStack_b8 = lVar16;
    uStack_b0 = (int)lVar4;
    uStack_ac = uVar1;
    uStack_a8 = uVar17;
    FUN_109820310();
    param_4 = pauVar15;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_78) {
    return;
  }
  ___stack_chk_fail();
  __Unwind_Resume();
  puStack_220 = &stack0xfffffffffffffff0;
  pcStack_218 = FUN_10981d578;
  lStack_2b8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  auVar44 = *(undefined1 (*) [16])(pppuVar10 + 6);
  fStack_420 = *(float *)pauVar11[3] - auVar44._0_4_;
  fStack_41c = *(float *)(pauVar11[3] + 4) - auVar44._4_4_;
  uStack_350 = CONCAT44(fStack_41c,fStack_420);
  fStack_418 = *(float *)(pauVar11[3] + 8) - auVar44._8_4_;
  uStack_348 = (ulong)(uint)fStack_418;
  fStack_414 = 0.0;
  func_0x00010980abd0(pppuVar10,pauVar11,&uStack_300,&ppuStack_3d0);
  uStack_440 = (undefined **)
               CONCAT44(uStack_300._4_4_ * ppuStack_3d0._0_4_,(float)uStack_300 * ppuStack_3d0._0_4_
                       );
  uStack_438 = (ulong)(uint)(fStack_2f8 * ppuStack_3d0._0_4_);
  auVar44 = pauVar12[3];
  fStack_430 = *(float *)(param_5 + 6) - auVar44._0_4_;
  fStack_42c = *(float *)((long)param_5 + 0x34) - auVar44._4_4_;
  uStack_370 = CONCAT44(fStack_42c,fStack_430);
  fStack_428 = *(float *)(param_5 + 7) - auVar44._8_4_;
  uStack_368 = (ulong)(uint)fStack_428;
  uStack_424 = 0;
  pauVar11 = (undefined1 (*) [16])&uStack_300;
  pppuVar13 = &ppuStack_3d0;
  ppuStack_360 = uStack_440;
  uStack_358 = uStack_438;
  func_0x00010980abd0(pauVar12);
  uStack_450 = (undefined **)
               CONCAT44(uStack_300._4_4_ * ppuStack_3d0._0_4_,(float)uStack_300 * ppuStack_3d0._0_4_
                       );
  uStack_448 = (ulong)(uint)(fStack_2f8 * ppuStack_3d0._0_4_);
  ppuStack_380 = uStack_450;
  uStack_378 = uStack_448;
  uVar20 = (**(code **)(**(long **)(param_4[1] + 8) + 0x20))();
  if (*(long **)param_4[2] == (long *)0x0) {
    fVar18 = 0.0;
  }
  else {
    fVar18 = (float)(**(code **)(**(long **)param_4[2] + 0x20))();
  }
  auVar40._0_4_ = (float)uStack_440 * (float)uStack_440;
  auVar40._4_4_ = uStack_440._4_4_ * uStack_440._4_4_;
  auVar40._8_4_ = (float)uStack_438 * (float)uStack_438;
  auVar40._12_4_ = uStack_438._4_4_ * uStack_438._4_4_;
  auVar44 = NEON_ext(auVar40,auVar40,8,1);
  auVar48._0_4_ = (float)uStack_450 * (float)uStack_450;
  auVar48._4_4_ = uStack_450._4_4_ * uStack_450._4_4_;
  auVar48._8_4_ = (float)uStack_448 * (float)uStack_448;
  auVar48._12_4_ = uStack_448._4_4_ * uStack_448._4_4_;
  auVar49 = NEON_ext(auVar48,auVar48,8,1);
  fVar69 = fVar18 * SQRT(auVar49._0_4_ + auVar48._0_4_ + auVar48._4_4_) +
           (float)uVar20 * SQRT(auVar44._0_4_ + auVar40._0_4_ + auVar40._4_4_);
  fVar18 = fStack_430 - fStack_420;
  fVar50 = fStack_42c - fStack_41c;
  fVar51 = fStack_428 - fStack_418;
  auVar25._0_4_ = fVar18 * fVar18;
  auVar25._4_4_ = fVar50 * fVar50;
  auVar25._8_4_ = fVar51 * fVar51;
  auVar25._12_4_ = 0;
  auVar44 = NEON_ext(auVar25,auVar25,8,1);
  if (SQRT(auVar44._0_4_ + auVar25._0_4_ + auVar25._4_4_) + fVar69 != 0.0) {
    fStack_414 = 0.0;
    uStack_300 = &PTR_FUN_110b140a8;
    fStack_2d0 = 1e+18;
    cStack_2cc = '\0';
    pppuVar13 = (undefined ***)&uStack_300;
    param_5 = pppuVar10;
    pauVar11 = pauVar12;
    fStack_420 = fVar18;
    fStack_41c = fVar50;
    fStack_418 = fVar51;
    FUN_10981d13c(param_4);
    lStack_388 = lStack_2d8;
    ppuStack_390 = ppuStack_2e0;
    if ((cStack_2cc == '\x01') &&
       (auVar41._0_4_ = auStack_2f0._0_4_ * fStack_420,
       auVar41._4_4_ = auStack_2f0._4_4_ * fStack_41c,
       auVar41._8_4_ = auStack_2f0._8_4_ * fStack_418,
       auVar41._12_4_ = auStack_2f0._12_4_ * fStack_414, auVar44 = NEON_ext(auVar41,auVar41,8,1),
       1.1920929e-07 < fVar69 + auVar41._0_4_ + auVar41._4_4_ + auVar44._0_4_)) {
      fVar18 = fStack_2d0 + *(float *)(param_6 + 0x18);
      unaff_d9 = 0;
      if (0.001 < fVar18) {
        pauVar15 = (undefined1 (*) [16])0x0;
        unaff_d9 = 0;
        uStack_448 = 0;
        uStack_450 = (undefined **)0x3f800000;
        uVar20 = 0x3e4ccccd;
        uStack_438 = 0x3f800000;
        uStack_440 = (undefined **)0x3f8000003f800000;
        do {
          if ((long *)param_6[0x17] != (long *)0x0) {
            fStack_428 = auStack_2f0._8_4_;
            uStack_424 = auStack_2f0._12_4_;
            fStack_430 = auStack_2f0._0_4_;
            fStack_42c = auStack_2f0._4_4_;
            uStack_3c8 = uStack_438;
            ppuStack_3d0 = uStack_440;
            param_5 = &ppuStack_390;
            pauVar11 = (undefined1 (*) [16])&ppuStack_3d0;
            (**(code **)(*(long *)param_6[0x17] + 0x38))(0x3e4ccccd);
            auStack_2f0._4_4_ = fStack_42c;
            auStack_2f0._0_4_ = fStack_430;
            auStack_2f0._8_4_ = fStack_428;
            auStack_2f0._12_4_ = uStack_424;
          }
          auVar26._0_4_ = auStack_2f0._0_4_ * fStack_420;
          auVar26._4_4_ = auStack_2f0._4_4_ * fStack_41c;
          auVar26._8_4_ = auStack_2f0._8_4_ * fStack_418;
          auVar26._12_4_ = auStack_2f0._12_4_ * fStack_414;
          auVar44 = NEON_ext(auVar26,auVar26,8,1);
          fVar50 = fVar69 + auVar44._0_4_ + auVar26._0_4_ + auVar26._4_4_;
          if (fVar50 <= 1.1920929e-07) goto LAB_10981d93c;
          puVar8 = (undefined8 *)0x0;
          fVar51 = (float)unaff_d9;
          fVar18 = fVar51 + fVar18 / fVar50;
          unaff_d9 = (ulong)(uint)fVar18;
          bVar5 = false;
          bVar6 = false;
          bVar7 = false;
          if (fVar51 < fVar18) {
            bVar5 = false;
            bVar6 = false;
            bVar7 = true;
            if (!NAN(fVar18)) {
              bVar5 = fVar18 < 1.0;
              bVar6 = fVar18 == 1.0;
              bVar7 = false;
            }
          }
          if ((!bVar6 && bVar5 == bVar7) || (fVar18 < 0.0)) goto LAB_10981d940;
          FUN_10981d990(unaff_d9,pppuVar10,&uStack_350,&ppuStack_360,&ppuStack_3d0);
          FUN_10981d990(unaff_d9,pauVar12,&uStack_370,&ppuStack_380,auStack_410);
          plVar9 = (long *)param_6[0x17];
          if (plVar9 != (long *)0x0) {
            uStack_338 = uStack_448;
            ppuStack_340 = uStack_450;
            (**(code **)(*plVar9 + 0x38))(0x3e4ccccd,plVar9,auStack_3a0,&ppuStack_340);
          }
          (**(code **)*param_6)(unaff_d9,param_6);
          ppuStack_340 = &PTR_FUN_110b140a8;
          fStack_310 = 1e+18;
          cStack_30c = '\0';
          param_5 = &ppuStack_3d0;
          pauVar11 = (undefined1 (*) [16])auStack_410;
          pppuVar13 = &ppuStack_340;
          FUN_10981d13c(param_4);
          if (cStack_30c != '\x01') {
            param_5 = (undefined ***)0xffffffff;
            (**(code **)(*param_6 + 0x10))(param_6);
            pauVar11 = pauVar15;
            goto LAB_10981d93c;
          }
          ppuStack_390 = ppuStack_320;
          lStack_388 = lStack_318;
          if ((int)pauVar15 == 0x40) {
            param_5 = (undefined ***)0xfffffffe;
            pauVar11 = (undefined1 (*) [16])0x41;
            (**(code **)(*param_6 + 0x10))(param_6);
            goto LAB_10981d93c;
          }
          pauVar15 = (undefined1 (*) [16])(ulong)((int)pauVar15 + 1);
          fVar18 = fStack_310 + *(float *)(param_6 + 0x18);
          auStack_2f0 = auStack_330;
          ppuStack_2e0 = ppuStack_320;
          lStack_2d8 = lStack_318;
        } while (0.001 < fVar18);
      }
      *(int *)(param_6 + 0x16) = (int)unaff_d9;
      puVar8 = (undefined8 *)0x1;
      param_6[0x13] = auStack_2f0._8_8_;
      param_6[0x12] = auStack_2f0._0_8_;
      param_6[0x15] = lStack_2d8;
      param_6[0x14] = (long)ppuStack_2e0;
      ppuStack_390 = ppuStack_2e0;
      lStack_388 = lStack_2d8;
      goto LAB_10981d940;
    }
  }
LAB_10981d93c:
  puVar8 = (undefined8 *)0x0;
LAB_10981d940:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_2b8) {
    return;
  }
  ___stack_chk_fail();
  fVar19 = (float)__Unwind_Resume();
  pcStack_458 = FUN_10981d990;
  fVar18 = *(float *)param_5;
  fVar50 = *(float *)((long)param_5 + 4);
  fVar51 = *(float *)(puVar8 + 6);
  fVar69 = *(float *)((long)puVar8 + 0x34);
  fVar33 = *(float *)((long)puVar8 + 0x3c);
  *(float *)(pppuVar13 + 7) = *(float *)(puVar8 + 7) + *(float *)(param_5 + 1) * fVar19;
  *(float *)((long)pppuVar13 + 0x3c) = fVar33 + 0.0;
  *(float *)(pppuVar13 + 6) = fVar51 + fVar18 * fVar19;
  *(float *)((long)pppuVar13 + 0x34) = fVar69 + fVar50 * fVar19;
  auVar44 = *pauVar11;
  fVar51 = auVar44._0_4_;
  auVar27._0_4_ = fVar51 * fVar51;
  fVar69 = auVar44._4_4_;
  auVar27._4_4_ = fVar69 * fVar69;
  fVar33 = auVar44._8_4_;
  auVar27._8_4_ = fVar33 * fVar33;
  auVar27._12_4_ = auVar44._12_4_ * auVar44._12_4_;
  auVar44 = NEON_ext(auVar27,auVar27,8,1);
  fVar18 = auVar27._0_4_ + auVar27._4_4_ + auVar44._0_4_;
  fVar50 = SQRT(fVar18);
  if (fVar18 <= 1.1920929e-07) {
    fVar50 = 0.0;
  }
  fVar18 = 0.7853982 / fVar19;
  if (fVar19 * fVar50 <= 0.7853982) {
    fVar18 = fVar50;
  }
  uStack_480 = unaff_d9;
  uStack_478 = uVar20;
  pauStack_470 = pauVar12;
  plStack_468 = param_6;
  ppuStack_460 = &puStack_220;
  if (0.001 <= fVar18) {
    fVar50 = (float)_sinf();
    fVar50 = fVar50 / fVar18;
  }
  else {
    fVar50 = fVar18 * fVar19 * fVar19 * fVar19 * -0.020833334 * fVar18 + fVar19 * 0.5;
  }
  fVar51 = fVar51 * fVar50;
  fVar69 = fVar69 * fVar50;
  fVar19 = (float)_cosf();
  FUN_10980adc4(puVar8,auStack_490);
  auVar3._4_4_ = fVar69;
  auVar3._0_4_ = fVar51;
  auVar3._8_4_ = fVar33 * fVar50;
  auVar3._12_4_ = fVar19;
  auVar49 = NEON_ext(auVar3,auVar3,8,1);
  auVar54 = NEON_ext(auStack_490,auStack_490,8,1);
  fVar18 = auStack_490._0_4_;
  uVar59 = NEON_ext(auVar54._0_8_,auStack_490._0_8_,4,1);
  uVar20 = NEON_ext(CONCAT44(fVar69,fVar51),auVar49._0_8_,4,1);
  uVar62 = NEON_ext(auStack_490._0_8_,auVar54._0_8_,4,1);
  fVar42 = (float)((ulong)uVar20 >> 0x20);
  auVar29._4_4_ = auStack_490._4_4_;
  auVar30._12_4_ = auStack_490._12_4_;
  auVar28._4_12_ = auStack_490._4_12_;
  auVar28._0_4_ = auVar29._4_4_;
  auVar30._0_8_ = auVar28._0_8_;
  auVar30._8_4_ = auVar30._12_4_;
  auVar29._8_8_ = auVar30._8_8_;
  auVar29._0_4_ = auVar29._4_4_;
  auVar31._0_12_ = auVar29._0_12_;
  auVar31._12_4_ = auVar30._12_4_;
  auVar44 = NEON_ext(auVar31,auVar31,8,1);
  fStack_4a0 = fVar51 * auVar44._0_4_ + (float)uVar20 * auVar54._0_4_;
  fVar50 = fVar69 * auVar44._4_4_ + fVar42 * fVar18;
  fVar33 = fVar51 * auVar44._8_4_ + auVar49._0_4_ * (float)uVar59;
  fVar69 = fVar69 * auVar44._12_4_ + fVar51 * (float)((ulong)uVar59 >> 0x20);
  auVar23._0_8_ =
       CONCAT17((char)((uint)fVar50 >> 0x18),
                CONCAT16((char)((uint)fVar50 >> 0x10),
                         CONCAT15((char)((uint)fVar50 >> 8),CONCAT14(SUB41(fVar50,0),fStack_4a0))));
  auVar23[8] = SUB41(fVar33,0);
  auVar23[9] = (undefined1)((uint)fVar33 >> 8);
  auVar23[10] = (undefined1)((uint)fVar33 >> 0x10);
  auVar23[0xb] = (undefined1)((uint)fVar33 >> 0x18);
  auVar32[0xc] = SUB41(fVar69,0);
  auVar32._0_12_ = auVar23;
  auVar32[0xd] = (undefined1)((uint)fVar69 >> 8);
  auVar32[0xe] = (undefined1)((uint)fVar69 >> 0x10);
  auVar32[0xf] = (byte)((uint)fVar69 >> 0x18) ^ 0x80;
  fStack_4a0 = (fVar18 * fVar19 - (float)uVar62 * auVar49._0_4_) + fStack_4a0;
  fStack_49c = (auVar29._4_4_ * fVar19 - (float)((ulong)uVar62 >> 0x20) * fVar51) +
               (float)((ulong)auVar23._0_8_ >> 0x20);
  fStack_498 = (auStack_490._8_4_ * fVar19 - (float)uVar20 * fVar18) + auVar23._8_4_;
  fStack_494 = (auVar30._12_4_ * fVar19 - fVar42 * auVar54._0_4_) + auVar32._12_4_;
  fVar18 = fStack_4a0 * fStack_4a0 + fStack_49c * fStack_49c +
           fStack_498 * fStack_498 + fStack_494 * fStack_494;
  if (1.1920929e-07 < fVar18) {
    fVar18 = 1.0 / SQRT(fVar18);
    fStack_4a0 = fStack_4a0 * fVar18;
    fStack_49c = fStack_49c * fVar18;
    fStack_498 = fStack_498 * fVar18;
    fStack_494 = fStack_494 * fVar18;
    fVar18 = fStack_4a0 * fStack_4a0 + fStack_49c * fStack_49c +
             fStack_498 * fStack_498 + fStack_494 * fStack_494;
  }
  if (fVar18 <= 1.1920929e-07) {
    ppuVar2 = (undefined **)*puVar8;
    pppuVar13[1] = (undefined **)puVar8[1];
    *pppuVar13 = ppuVar2;
    ppuVar2 = (undefined **)puVar8[2];
    pppuVar13[3] = (undefined **)puVar8[3];
    pppuVar13[2] = ppuVar2;
    ppuVar2 = (undefined **)puVar8[4];
    pppuVar13[5] = (undefined **)puVar8[5];
    pppuVar13[4] = ppuVar2;
  }
  else {
    FUN_10980aed8(pppuVar13,&fStack_4a0);
  }
  return;
}



/* Entry: 10981d578; end: 10981d98f;  */

void FUN_10981d578(long param_1,undefined ***param_2,long param_3,undefined ***param_4,
                  undefined ***param_5,long *param_6)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined **ppuVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  undefined8 *puVar7;
  long *plVar8;
  undefined ***pppuVar9;
  undefined ***pppuVar10;
  undefined ***pppuVar11;
  float fVar12;
  float fVar13;
  undefined8 uVar14;
  float fVar24;
  undefined1 auVar15 [12];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar25 [16];
  float fVar27;
  float fVar28;
  undefined1 auVar26 [16];
  undefined1 auVar29 [16];
  undefined8 uVar30;
  undefined8 uVar31;
  float fVar32;
  ulong unaff_d9;
  float fVar33;
  undefined8 uStack_2a0;
  float fStack_290;
  float fStack_28c;
  float fStack_288;
  float fStack_284;
  undefined1 auStack_280 [16];
  ulong uStack_270;
  undefined8 uStack_268;
  undefined ***pppuStack_260;
  long *plStack_258;
  undefined1 *puStack_250;
  code *pcStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  float fStack_220;
  float fStack_21c;
  float fStack_218;
  undefined4 uStack_214;
  float fStack_210;
  float fStack_20c;
  float fStack_208;
  float fStack_204;
  undefined **appuStack_200 [8];
  undefined **ppuStack_1c0;
  ulong uStack_1b8;
  undefined1 auStack_190 [16];
  undefined **ppuStack_180;
  long lStack_178;
  undefined **ppuStack_170;
  ulong uStack_168;
  undefined8 uStack_160;
  ulong uStack_158;
  undefined **ppuStack_150;
  ulong uStack_148;
  undefined8 uStack_140;
  ulong uStack_138;
  undefined **ppuStack_130;
  ulong uStack_128;
  undefined1 auStack_120 [16];
  undefined **ppuStack_110;
  long lStack_108;
  float fStack_100;
  char cStack_fc;
  undefined8 uStack_f0;
  float fStack_e8;
  undefined1 auStack_e0 [16];
  undefined **ppuStack_d0;
  long lStack_c8;
  float fStack_c0;
  char cStack_bc;
  long lStack_a8;
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  
  lStack_a8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  auVar25 = *(undefined1 (*) [16])(param_2 + 6);
  fStack_210 = *(float *)(param_3 + 0x30) - auVar25._0_4_;
  fStack_20c = *(float *)(param_3 + 0x34) - auVar25._4_4_;
  uStack_140 = CONCAT44(fStack_20c,fStack_210);
  fStack_208 = *(float *)(param_3 + 0x38) - auVar25._8_4_;
  uStack_138 = (ulong)(uint)fStack_208;
  fStack_204 = 0.0;
  func_0x00010980abd0(param_2,param_3,&uStack_f0,&ppuStack_1c0);
  uStack_230 = (undefined **)
               CONCAT44(uStack_f0._4_4_ * ppuStack_1c0._0_4_,(float)uStack_f0 * ppuStack_1c0._0_4_);
  uStack_228 = (ulong)(uint)(fStack_e8 * ppuStack_1c0._0_4_);
  auVar25 = *(undefined1 (*) [16])(param_4 + 6);
  fStack_220 = *(float *)(param_5 + 6) - auVar25._0_4_;
  fStack_21c = *(float *)((long)param_5 + 0x34) - auVar25._4_4_;
  uStack_160 = CONCAT44(fStack_21c,fStack_220);
  fStack_218 = *(float *)(param_5 + 7) - auVar25._8_4_;
  uStack_158 = (ulong)(uint)fStack_218;
  uStack_214 = 0;
  pppuVar9 = (undefined ***)&uStack_f0;
  pppuVar10 = &ppuStack_1c0;
  ppuStack_150 = uStack_230;
  uStack_148 = uStack_228;
  func_0x00010980abd0(param_4);
  uStack_240 = (undefined **)
               CONCAT44(uStack_f0._4_4_ * ppuStack_1c0._0_4_,(float)uStack_f0 * ppuStack_1c0._0_4_);
  uStack_238 = (ulong)(uint)(fStack_e8 * ppuStack_1c0._0_4_);
  ppuStack_170 = uStack_240;
  uStack_168 = uStack_238;
  uVar14 = (**(code **)(**(long **)(param_1 + 0x18) + 0x20))();
  if (*(long **)(param_1 + 0x20) == (long *)0x0) {
    fVar12 = 0.0;
  }
  else {
    fVar12 = (float)(**(code **)(**(long **)(param_1 + 0x20) + 0x20))();
  }
  auVar16._0_4_ = (float)uStack_230 * (float)uStack_230;
  auVar16._4_4_ = uStack_230._4_4_ * uStack_230._4_4_;
  auVar16._8_4_ = (float)uStack_228 * (float)uStack_228;
  auVar16._12_4_ = uStack_228._4_4_ * uStack_228._4_4_;
  auVar25 = NEON_ext(auVar16,auVar16,8,1);
  auVar29._0_4_ = (float)uStack_240 * (float)uStack_240;
  auVar29._4_4_ = uStack_240._4_4_ * uStack_240._4_4_;
  auVar29._8_4_ = (float)uStack_238 * (float)uStack_238;
  auVar29._12_4_ = uStack_238._4_4_ * uStack_238._4_4_;
  auVar26 = NEON_ext(auVar29,auVar29,8,1);
  fVar33 = fVar12 * SQRT(auVar26._0_4_ + auVar29._0_4_ + auVar29._4_4_) +
           (float)uVar14 * SQRT(auVar25._0_4_ + auVar16._0_4_ + auVar16._4_4_);
  fVar12 = fStack_220 - fStack_210;
  fVar27 = fStack_21c - fStack_20c;
  fVar28 = fStack_218 - fStack_208;
  auVar25._0_4_ = fVar12 * fVar12;
  auVar25._4_4_ = fVar27 * fVar27;
  auVar25._8_4_ = fVar28 * fVar28;
  auVar25._12_4_ = 0;
  auVar16 = NEON_ext(auVar25,auVar25,8,1);
  if (SQRT(auVar16._0_4_ + auVar25._0_4_ + auVar25._4_4_) + fVar33 != 0.0) {
    fStack_204 = 0.0;
    uStack_f0 = &PTR_FUN_110b140a8;
    fStack_c0 = 1e+18;
    cStack_bc = '\0';
    pppuVar10 = (undefined ***)&uStack_f0;
    param_5 = param_2;
    pppuVar9 = param_4;
    fStack_210 = fVar12;
    fStack_20c = fVar27;
    fStack_208 = fVar28;
    FUN_10981d13c(param_1);
    lStack_178 = lStack_c8;
    ppuStack_180 = ppuStack_d0;
    if ((cStack_bc == '\x01') &&
       (auVar26._0_4_ = auStack_e0._0_4_ * fStack_210, auVar26._4_4_ = auStack_e0._4_4_ * fStack_20c
       , auVar26._8_4_ = auStack_e0._8_4_ * fStack_208,
       auVar26._12_4_ = auStack_e0._12_4_ * fStack_204, auVar25 = NEON_ext(auVar26,auVar26,8,1),
       1.1920929e-07 < fVar33 + auVar26._0_4_ + auVar26._4_4_ + auVar25._0_4_)) {
      fVar12 = fStack_c0 + *(float *)(param_6 + 0x18);
      unaff_d9 = 0;
      if (0.001 < fVar12) {
        pppuVar11 = (undefined ***)0x0;
        unaff_d9 = 0;
        uStack_238 = 0;
        uStack_240 = (undefined **)0x3f800000;
        uVar14 = 0x3e4ccccd;
        uStack_228 = 0x3f800000;
        uStack_230 = (undefined **)0x3f8000003f800000;
        do {
          if ((long *)param_6[0x17] != (long *)0x0) {
            fStack_218 = auStack_e0._8_4_;
            uStack_214 = auStack_e0._12_4_;
            fStack_220 = auStack_e0._0_4_;
            fStack_21c = auStack_e0._4_4_;
            uStack_1b8 = uStack_228;
            ppuStack_1c0 = uStack_230;
            param_5 = &ppuStack_180;
            pppuVar9 = &ppuStack_1c0;
            (**(code **)(*(long *)param_6[0x17] + 0x38))(0x3e4ccccd);
            auStack_e0._4_4_ = fStack_21c;
            auStack_e0._0_4_ = fStack_220;
            auStack_e0._8_4_ = fStack_218;
            auStack_e0._12_4_ = uStack_214;
          }
          auVar17._0_4_ = auStack_e0._0_4_ * fStack_210;
          auVar17._4_4_ = auStack_e0._4_4_ * fStack_20c;
          auVar17._8_4_ = auStack_e0._8_4_ * fStack_208;
          auVar17._12_4_ = auStack_e0._12_4_ * fStack_204;
          auVar25 = NEON_ext(auVar17,auVar17,8,1);
          fVar27 = fVar33 + auVar25._0_4_ + auVar17._0_4_ + auVar17._4_4_;
          if (fVar27 <= 1.1920929e-07) goto LAB_10981d93c;
          puVar7 = (undefined8 *)0x0;
          fVar28 = (float)unaff_d9;
          fVar12 = fVar28 + fVar12 / fVar27;
          unaff_d9 = (ulong)(uint)fVar12;
          bVar4 = false;
          bVar5 = false;
          bVar6 = false;
          if (fVar28 < fVar12) {
            bVar4 = false;
            bVar5 = false;
            bVar6 = true;
            if (!NAN(fVar12)) {
              bVar4 = fVar12 < 1.0;
              bVar5 = fVar12 == 1.0;
              bVar6 = false;
            }
          }
          if ((!bVar5 && bVar4 == bVar6) || (fVar12 < 0.0)) goto LAB_10981d940;
          FUN_10981d990(unaff_d9,param_2,&uStack_140,&ppuStack_150,&ppuStack_1c0);
          FUN_10981d990(unaff_d9,param_4,&uStack_160,&ppuStack_170,appuStack_200);
          plVar8 = (long *)param_6[0x17];
          if (plVar8 != (long *)0x0) {
            uStack_128 = uStack_238;
            ppuStack_130 = uStack_240;
            (**(code **)(*plVar8 + 0x38))(0x3e4ccccd,plVar8,auStack_190,&ppuStack_130);
          }
          (**(code **)*param_6)(unaff_d9,param_6);
          ppuStack_130 = &PTR_FUN_110b140a8;
          fStack_100 = 1e+18;
          cStack_fc = '\0';
          param_5 = &ppuStack_1c0;
          pppuVar9 = appuStack_200;
          pppuVar10 = &ppuStack_130;
          FUN_10981d13c(param_1);
          if (cStack_fc != '\x01') {
            param_5 = (undefined ***)0xffffffff;
            (**(code **)(*param_6 + 0x10))(param_6);
            pppuVar9 = pppuVar11;
            goto LAB_10981d93c;
          }
          ppuStack_180 = ppuStack_110;
          lStack_178 = lStack_108;
          if ((int)pppuVar11 == 0x40) {
            param_5 = (undefined ***)0xfffffffe;
            pppuVar9 = (undefined ***)0x41;
            (**(code **)(*param_6 + 0x10))(param_6);
            goto LAB_10981d93c;
          }
          pppuVar11 = (undefined ***)(ulong)((int)pppuVar11 + 1);
          fVar12 = fStack_100 + *(float *)(param_6 + 0x18);
          auStack_e0 = auStack_120;
          ppuStack_d0 = ppuStack_110;
          lStack_c8 = lStack_108;
        } while (0.001 < fVar12);
      }
      *(int *)(param_6 + 0x16) = (int)unaff_d9;
      puVar7 = (undefined8 *)0x1;
      param_6[0x13] = auStack_e0._8_8_;
      param_6[0x12] = auStack_e0._0_8_;
      param_6[0x15] = lStack_c8;
      param_6[0x14] = (long)ppuStack_d0;
      ppuStack_180 = ppuStack_d0;
      lStack_178 = lStack_c8;
      goto LAB_10981d940;
    }
  }
LAB_10981d93c:
  puVar7 = (undefined8 *)0x0;
LAB_10981d940:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_a8) {
    return;
  }
  ___stack_chk_fail();
  fVar13 = (float)__Unwind_Resume();
  pcStack_248 = FUN_10981d990;
  fVar12 = *(float *)param_5;
  fVar27 = *(float *)((long)param_5 + 4);
  fVar28 = *(float *)(puVar7 + 6);
  fVar33 = *(float *)((long)puVar7 + 0x34);
  fVar24 = *(float *)((long)puVar7 + 0x3c);
  *(float *)(pppuVar10 + 7) = *(float *)(puVar7 + 7) + *(float *)(param_5 + 1) * fVar13;
  *(float *)((long)pppuVar10 + 0x3c) = fVar24 + 0.0;
  *(float *)(pppuVar10 + 6) = fVar28 + fVar12 * fVar13;
  *(float *)((long)pppuVar10 + 0x34) = fVar33 + fVar27 * fVar13;
  fVar28 = SUB84(*pppuVar9,0);
  auVar18._0_4_ = fVar28 * fVar28;
  fVar33 = (float)((ulong)*pppuVar9 >> 0x20);
  auVar18._4_4_ = fVar33 * fVar33;
  fVar24 = SUB84(pppuVar9[1],0);
  auVar18._8_4_ = fVar24 * fVar24;
  fVar12 = (float)((ulong)pppuVar9[1] >> 0x20);
  auVar18._12_4_ = fVar12 * fVar12;
  auVar25 = NEON_ext(auVar18,auVar18,8,1);
  fVar12 = auVar18._0_4_ + auVar18._4_4_ + auVar25._0_4_;
  fVar27 = SQRT(fVar12);
  if (fVar12 <= 1.1920929e-07) {
    fVar27 = 0.0;
  }
  fVar12 = 0.7853982 / fVar13;
  if (fVar13 * fVar27 <= 0.7853982) {
    fVar12 = fVar27;
  }
  uStack_270 = unaff_d9;
  uStack_268 = uVar14;
  pppuStack_260 = param_4;
  plStack_258 = param_6;
  puStack_250 = &stack0xfffffffffffffff0;
  if (0.001 <= fVar12) {
    fVar27 = (float)_sinf();
    fVar27 = fVar27 / fVar12;
  }
  else {
    fVar27 = fVar12 * fVar13 * fVar13 * fVar13 * -0.020833334 * fVar12 + fVar13 * 0.5;
  }
  fVar28 = fVar28 * fVar27;
  fVar33 = fVar33 * fVar27;
  uStack_2a0 = CONCAT44(fVar33,fVar28);
  fVar13 = (float)_cosf();
  FUN_10980adc4(puVar7,auStack_280);
  auVar2._4_4_ = fVar33;
  auVar2._0_4_ = fVar28;
  auVar2._8_4_ = fVar24 * fVar27;
  auVar1._4_4_ = fVar33;
  auVar1._0_4_ = fVar28;
  auVar1._8_4_ = fVar24 * fVar27;
  auVar1._12_4_ = fVar13;
  auVar2._12_4_ = fVar13;
  auVar16 = NEON_ext(auVar1,auVar2,8,1);
  auVar29 = NEON_ext(auStack_280,auStack_280,8,1);
  fVar12 = auStack_280._0_4_;
  uVar30 = NEON_ext(auVar29._0_8_,auStack_280._0_8_,4,1);
  uVar14 = NEON_ext(uStack_2a0,auVar16._0_8_,4,1);
  uVar31 = NEON_ext(auStack_280._0_8_,auVar29._0_8_,4,1);
  fVar32 = (float)((ulong)uVar14 >> 0x20);
  auVar20._4_4_ = auStack_280._4_4_;
  auVar21._12_4_ = auStack_280._12_4_;
  auVar19._4_12_ = auStack_280._4_12_;
  auVar19._0_4_ = auVar20._4_4_;
  auVar21._0_8_ = auVar19._0_8_;
  auVar21._8_4_ = auVar21._12_4_;
  auVar20._8_8_ = auVar21._8_8_;
  auVar20._0_4_ = auVar20._4_4_;
  auVar22._0_12_ = auVar20._0_12_;
  auVar22._12_4_ = auVar21._12_4_;
  auVar25 = NEON_ext(auVar22,auVar22,8,1);
  fStack_290 = fVar28 * auVar25._0_4_ + (float)uVar14 * auVar29._0_4_;
  fVar27 = fVar33 * auVar25._4_4_ + fVar32 * fVar12;
  fVar24 = fVar28 * auVar25._8_4_ + auVar16._0_4_ * (float)uVar30;
  fVar33 = fVar33 * auVar25._12_4_ + fVar28 * (float)((ulong)uVar30 >> 0x20);
  auVar15._0_8_ =
       CONCAT17((char)((uint)fVar27 >> 0x18),
                CONCAT16((char)((uint)fVar27 >> 0x10),
                         CONCAT15((char)((uint)fVar27 >> 8),CONCAT14(SUB41(fVar27,0),fStack_290))));
  auVar15[8] = SUB41(fVar24,0);
  auVar15[9] = (undefined1)((uint)fVar24 >> 8);
  auVar15[10] = (undefined1)((uint)fVar24 >> 0x10);
  auVar15[0xb] = (undefined1)((uint)fVar24 >> 0x18);
  auVar23[0xc] = SUB41(fVar33,0);
  auVar23._0_12_ = auVar15;
  auVar23[0xd] = (undefined1)((uint)fVar33 >> 8);
  auVar23[0xe] = (undefined1)((uint)fVar33 >> 0x10);
  auVar23[0xf] = (byte)((uint)fVar33 >> 0x18) ^ 0x80;
  fStack_290 = (fVar12 * fVar13 - (float)uVar31 * auVar16._0_4_) + fStack_290;
  fStack_28c = (auVar20._4_4_ * fVar13 - (float)((ulong)uVar31 >> 0x20) * fVar28) +
               (float)((ulong)auVar15._0_8_ >> 0x20);
  fStack_288 = (auStack_280._8_4_ * fVar13 - (float)uVar14 * fVar12) + auVar15._8_4_;
  fStack_284 = (auVar21._12_4_ * fVar13 - fVar32 * auVar29._0_4_) + auVar23._12_4_;
  fVar12 = fStack_290 * fStack_290 + fStack_28c * fStack_28c +
           fStack_288 * fStack_288 + fStack_284 * fStack_284;
  if (1.1920929e-07 < fVar12) {
    fVar12 = 1.0 / SQRT(fVar12);
    fStack_290 = fStack_290 * fVar12;
    fStack_28c = fStack_28c * fVar12;
    fStack_288 = fStack_288 * fVar12;
    fStack_284 = fStack_284 * fVar12;
    fVar12 = fStack_290 * fStack_290 + fStack_28c * fStack_28c +
             fStack_288 * fStack_288 + fStack_284 * fStack_284;
  }
  if (fVar12 <= 1.1920929e-07) {
    ppuVar3 = (undefined **)*puVar7;
    pppuVar10[1] = (undefined **)puVar7[1];
    *pppuVar10 = ppuVar3;
    ppuVar3 = (undefined **)puVar7[2];
    pppuVar10[3] = (undefined **)puVar7[3];
    pppuVar10[2] = ppuVar3;
    ppuVar3 = (undefined **)puVar7[4];
    pppuVar10[5] = (undefined **)puVar7[5];
    pppuVar10[4] = ppuVar3;
  }
  else {
    FUN_10980aed8(pppuVar10,&fStack_290);
  }
  return;
}



/* Entry: 10981d990; end: 10981db7b;  */

void FUN_10981d990(float param_1,undefined8 *param_2,float *param_3,undefined8 *param_4,
                  undefined8 *param_5)

{
  float fVar13;
  undefined1 auVar4 [12];
  float fVar12;
  undefined1 auVar5 [16];
  float fVar1;
  float fVar2;
  float fVar3;
  undefined1 auVar6 [16];
  undefined1 auVar10 [16];
  float fVar14;
  undefined8 uVar15;
  undefined1 auVar16 [16];
  undefined8 uVar17;
  undefined8 uVar18;
  float fVar19;
  float fStack_50;
  float fStack_4c;
  float fStack_48;
  float fStack_44;
  undefined1 auStack_40 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar11 [16];
  
  fVar1 = *param_3;
  fVar14 = param_3[1];
  fVar2 = *(float *)(param_2 + 6);
  fVar12 = *(float *)((long)param_2 + 0x34);
  fVar13 = *(float *)((long)param_2 + 0x3c);
  *(float *)(param_5 + 7) = *(float *)(param_2 + 7) + param_3[2] * param_1;
  *(float *)((long)param_5 + 0x3c) = fVar13 + 0.0;
  *(float *)(param_5 + 6) = fVar2 + fVar1 * param_1;
  *(float *)((long)param_5 + 0x34) = fVar12 + fVar14 * param_1;
  fVar2 = (float)*param_4;
  auVar10._0_4_ = fVar2 * fVar2;
  fVar12 = (float)((ulong)*param_4 >> 0x20);
  auVar10._4_4_ = fVar12 * fVar12;
  fVar13 = (float)param_4[1];
  auVar10._8_4_ = fVar13 * fVar13;
  fVar1 = (float)((ulong)param_4[1] >> 0x20);
  auVar10._12_4_ = fVar1 * fVar1;
  auVar5 = NEON_ext(auVar10,auVar10,8,1);
  fVar1 = auVar10._0_4_ + auVar10._4_4_ + auVar5._0_4_;
  fVar14 = SQRT(fVar1);
  if (fVar1 <= 1.1920929e-07) {
    fVar14 = 0.0;
  }
  fVar1 = 0.7853982 / param_1;
  if (param_1 * fVar14 <= 0.7853982) {
    fVar1 = fVar14;
  }
  if (0.001 <= fVar1) {
    fVar14 = (float)_sinf();
    fVar14 = fVar14 / fVar1;
  }
  else {
    fVar14 = fVar1 * param_1 * param_1 * param_1 * -0.020833334 * fVar1 + param_1 * 0.5;
  }
  fVar2 = fVar2 * fVar14;
  fVar12 = fVar12 * fVar14;
  fVar3 = (float)_cosf();
  FUN_10980adc4(param_2,auStack_40);
  auVar16._4_4_ = fVar12;
  auVar16._0_4_ = fVar2;
  auVar16._8_4_ = fVar13 * fVar14;
  auVar5._4_4_ = fVar12;
  auVar5._0_4_ = fVar2;
  auVar5._8_4_ = fVar13 * fVar14;
  auVar5._12_4_ = fVar3;
  auVar16._12_4_ = fVar3;
  auVar5 = NEON_ext(auVar5,auVar16,8,1);
  auVar16 = NEON_ext(auStack_40,auStack_40,8,1);
  fVar1 = auStack_40._0_4_;
  uVar17 = NEON_ext(auVar16._0_8_,auStack_40._0_8_,4,1);
  uVar15 = NEON_ext(CONCAT44(fVar12,fVar2),auVar5._0_8_,4,1);
  uVar18 = NEON_ext(auStack_40._0_8_,auVar16._0_8_,4,1);
  fVar19 = (float)((ulong)uVar15 >> 0x20);
  auVar7._4_4_ = auStack_40._4_4_;
  auVar8._12_4_ = auStack_40._12_4_;
  auVar6._4_12_ = auStack_40._4_12_;
  auVar6._0_4_ = auVar7._4_4_;
  auVar8._0_8_ = auVar6._0_8_;
  auVar8._8_4_ = auVar8._12_4_;
  auVar7._8_8_ = auVar8._8_8_;
  auVar7._0_4_ = auVar7._4_4_;
  auVar9._0_12_ = auVar7._0_12_;
  auVar9._12_4_ = auVar8._12_4_;
  auVar10 = NEON_ext(auVar9,auVar9,8,1);
  fStack_50 = fVar2 * auVar10._0_4_ + (float)uVar15 * auVar16._0_4_;
  fVar14 = fVar12 * auVar10._4_4_ + fVar19 * fVar1;
  fVar13 = fVar2 * auVar10._8_4_ + auVar5._0_4_ * (float)uVar17;
  fVar12 = fVar12 * auVar10._12_4_ + fVar2 * (float)((ulong)uVar17 >> 0x20);
  auVar4._0_8_ = CONCAT17((char)((uint)fVar14 >> 0x18),
                          CONCAT16((char)((uint)fVar14 >> 0x10),
                                   CONCAT15((char)((uint)fVar14 >> 8),
                                            CONCAT14(SUB41(fVar14,0),fStack_50))));
  auVar4[8] = SUB41(fVar13,0);
  auVar4[9] = (undefined1)((uint)fVar13 >> 8);
  auVar4[10] = (undefined1)((uint)fVar13 >> 0x10);
  auVar4[0xb] = (undefined1)((uint)fVar13 >> 0x18);
  auVar11[0xc] = SUB41(fVar12,0);
  auVar11._0_12_ = auVar4;
  auVar11[0xd] = (undefined1)((uint)fVar12 >> 8);
  auVar11[0xe] = (undefined1)((uint)fVar12 >> 0x10);
  auVar11[0xf] = (byte)((uint)fVar12 >> 0x18) ^ 0x80;
  fStack_50 = (fVar1 * fVar3 - (float)uVar18 * auVar5._0_4_) + fStack_50;
  fStack_4c = (auVar7._4_4_ * fVar3 - (float)((ulong)uVar18 >> 0x20) * fVar2) +
              (float)((ulong)auVar4._0_8_ >> 0x20);
  fStack_48 = (auStack_40._8_4_ * fVar3 - (float)uVar15 * fVar1) + auVar4._8_4_;
  fStack_44 = (auVar8._12_4_ * fVar3 - fVar19 * auVar16._0_4_) + auVar11._12_4_;
  fVar1 = fStack_50 * fStack_50 + fStack_4c * fStack_4c +
          fStack_48 * fStack_48 + fStack_44 * fStack_44;
  if (1.1920929e-07 < fVar1) {
    fVar1 = 1.0 / SQRT(fVar1);
    fStack_50 = fStack_50 * fVar1;
    fStack_4c = fStack_4c * fVar1;
    fStack_48 = fStack_48 * fVar1;
    fStack_44 = fStack_44 * fVar1;
    fVar1 = fStack_50 * fStack_50 + fStack_4c * fStack_4c +
            fStack_48 * fStack_48 + fStack_44 * fStack_44;
  }
  if (fVar1 <= 1.1920929e-07) {
    uVar15 = *param_2;
    param_5[1] = param_2[1];
    *param_5 = uVar15;
    uVar15 = param_2[2];
    param_5[3] = param_2[3];
    param_5[2] = uVar15;
    uVar15 = param_2[4];
    param_5[5] = param_2[5];
    param_5[4] = uVar15;
  }
  else {
    FUN_10980aed8(param_5,&fStack_50);
  }
  return;
}



/* Entry: 10981db7c; end: 10981dbbf;  */

void FUN_10981db7c(void)

{
  return;
}



/* Entry: 10981dbc0; end: 10981dee3;  */

void FUN_10981dbc0(long param_1,undefined8 *param_2,long param_3,undefined8 *param_4,long param_5,
                  undefined8 *param_6)

{
  long *plVar1;
  long *plVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  undefined8 uVar9;
  undefined4 *puVar10;
  int iVar11;
  float fVar12;
  float fVar13;
  float fVar15;
  float fVar16;
  undefined1 auVar14 [16];
  float fVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  float fVar20;
  float fVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  float fVar24;
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  float fStack_200;
  float fStack_1fc;
  float fStack_1f8;
  float fStack_1d0;
  float fStack_1cc;
  float fStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined4 uStack_140;
  undefined **appuStack_130 [2];
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  long *plStack_f8;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  undefined1 uStack_e0;
  undefined4 uStack_d8;
  undefined8 uStack_cc;
  undefined **appuStack_c0 [2];
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  float fStack_90;
  char cStack_8c;
  long lStack_78;
  
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar10 = *(undefined4 **)(param_1 + 8);
  *(undefined1 *)(puVar10 + 0x51) = 0;
  *puVar10 = 0;
  *(undefined1 *)(puVar10 + 0x60) = 1;
  *(undefined8 *)(puVar10 + 0x4e) = 0x5d5e0b6b;
  *(undefined8 *)(puVar10 + 0x4c) = 0x5d5e0b6b5d5e0b6b;
  *(undefined1 *)(puVar10 + 0x5d) = 0;
  *(undefined8 *)(puVar10 + 0x5b) = 0;
  *(undefined8 *)(puVar10 + 0x59) = 0;
  *(byte *)(puVar10 + 0x58) = *(byte *)(puVar10 + 0x58) & 0xf0;
  uVar22 = *(undefined8 *)(param_3 + 0x38);
  uVar18 = *(undefined8 *)(param_3 + 0x30);
  uVar9 = param_2[6];
  uVar3 = param_2[7];
  uVar23 = *(undefined8 *)(param_5 + 0x38);
  uVar19 = *(undefined8 *)(param_5 + 0x30);
  uVar4 = param_4[6];
  uVar5 = param_4[7];
  appuStack_c0[0] = &PTR_FUN_110b140a8;
  fStack_90 = 1e+18;
  cStack_8c = '\0';
  appuStack_130[0] = &PTR_FUN_110b14198;
  uStack_120 = 0x3f80000000000000;
  uStack_118 = 0;
  uStack_110 = 0;
  plVar1 = *(long **)(param_1 + 0x10);
  plVar2 = *(long **)(param_1 + 0x18);
  uStack_108 = *(undefined8 *)(param_1 + 8);
  uStack_100 = *(undefined8 *)(param_1 + 0x10);
  uStack_f0 = (undefined4)plVar1[1];
  uStack_ec = (undefined4)plVar2[1];
  plStack_f8 = plVar2;
  uStack_e8 = (**(code **)(*plVar1 + 0x60))(plVar1);
  uStack_e4 = (**(code **)(*plVar2 + 0x60))(plVar2);
  uStack_e0 = 0;
  uStack_d8 = 0xffffffff;
  uStack_cc = 0x100000001;
  uStack_140 = 0x5d5e0b6b;
  uStack_1c0 = *param_2;
  uStack_1b8 = param_2[1];
  uStack_1a8 = param_2[3];
  uStack_1b0 = param_2[2];
  uStack_1a0 = param_2[4];
  uStack_198 = param_2[5];
  uStack_188 = param_2[7];
  uStack_190 = param_2[6];
  uStack_180 = *param_4;
  uStack_178 = param_4[1];
  uStack_168 = param_4[3];
  uStack_170 = param_4[2];
  uStack_160 = param_4[4];
  uStack_158 = param_4[5];
  uStack_148 = param_4[7];
  uStack_150 = param_4[6];
  FUN_109820310(appuStack_130,&uStack_1c0,appuStack_c0,0);
  if (cStack_8c == '\x01') {
    fStack_1d0 = (float)uVar18;
    fStack_1cc = (float)((ulong)uVar18 >> 0x20);
    fStack_1c8 = (float)uVar22;
    fStack_200 = (float)uVar4;
    fStack_1fc = (float)((ulong)uVar4 >> 0x20);
    fStack_1f8 = (float)uVar5;
    fVar12 = (fStack_1d0 - (float)uVar9) - ((float)uVar19 - fStack_200);
    fVar15 = (fStack_1cc - (float)((ulong)uVar9 >> 0x20)) -
             ((float)((ulong)uVar19 >> 0x20) - fStack_1fc);
    fVar16 = (fStack_1c8 - (float)uVar3) - ((float)uVar23 - fStack_1f8);
    auVar14._8_8_ = uStack_a8;
    auVar14._0_8_ = uStack_b0;
    if (fStack_90 <= 0.001) {
      fVar13 = 0.0;
    }
    else {
      iVar11 = 0x21;
      fVar17 = 0.0;
      do {
        iVar11 = iVar11 + -1;
        if (iVar11 == 0) goto LAB_10981de88;
        uVar9 = 0;
        auVar26._0_4_ = auVar14._0_4_ * fVar12;
        auVar26._4_4_ = auVar14._4_4_ * fVar15;
        auVar26._8_4_ = auVar14._8_4_ * fVar16;
        auVar26._12_4_ = auVar14._12_4_ * 0.0;
        auVar14 = NEON_ext(auVar26,auVar26,8,1);
        fVar13 = fVar17 - fStack_90 / (auVar14._0_4_ + auVar26._0_4_ + auVar26._4_4_);
        bVar6 = false;
        bVar7 = false;
        bVar8 = false;
        if (fVar17 < fVar13) {
          bVar6 = false;
          bVar7 = false;
          bVar8 = true;
          if (!NAN(fVar13)) {
            bVar6 = fVar13 < 1.0;
            bVar7 = fVar13 == 1.0;
            bVar8 = false;
          }
        }
        if ((!bVar7 && bVar6 == bVar8) || (fVar13 < 0.0)) goto LAB_10981de8c;
        (**(code **)*param_6)(param_6);
        fVar17 = (float)param_2[6];
        fVar20 = (float)((ulong)param_2[6] >> 0x20);
        fVar21 = (float)param_2[7];
        fVar24 = (float)((ulong)param_2[7] >> 0x20);
        auVar14 = *(undefined1 (*) [16])(param_4 + 6);
        uStack_150 = CONCAT44(auVar14._4_4_ +
                              ((float)((ulong)*(undefined8 *)(param_5 + 0x30) >> 0x20) -
                              auVar14._4_4_) * fVar13,
                              auVar14._0_4_ +
                              ((float)*(undefined8 *)(param_5 + 0x30) - auVar14._0_4_) * fVar13);
        uStack_148 = CONCAT44(auVar14._12_4_ +
                              ((float)((ulong)*(undefined8 *)(param_5 + 0x38) >> 0x20) -
                              auVar14._12_4_) * fVar13,
                              auVar14._8_4_ +
                              ((float)*(undefined8 *)(param_5 + 0x38) - auVar14._8_4_) * fVar13);
        uStack_188 = CONCAT44(fVar24 + (*(float *)(param_3 + 0x3c) - fVar24) * fVar13,
                              fVar21 + (*(float *)(param_3 + 0x38) - fVar21) * fVar13);
        uStack_190 = CONCAT44(fVar20 + (*(float *)(param_3 + 0x34) - fVar20) * fVar13,
                              fVar17 + (*(float *)(param_3 + 0x30) - fVar17) * fVar13);
        FUN_109820310(appuStack_130,&uStack_1c0,appuStack_c0,0);
        if (cStack_8c != '\x01') goto LAB_10981de88;
        if (fStack_90 < 0.0) {
          *(float *)(param_6 + 0x16) = fVar13;
          param_6[0x13] = uStack_a8;
          param_6[0x12] = uStack_b0;
          param_6[0x15] = uStack_98;
          param_6[0x14] = uStack_a0;
          uVar9 = 1;
          goto LAB_10981de8c;
        }
        auVar14._8_8_ = uStack_a8;
        auVar14._0_8_ = uStack_b0;
        fVar17 = fVar13;
      } while (0.001 < fStack_90);
    }
    auVar25._0_4_ = auVar14._0_4_ * fVar12;
    auVar25._4_4_ = auVar14._4_4_ * fVar15;
    auVar25._8_4_ = auVar14._8_4_ * fVar16;
    auVar25._12_4_ = auVar14._12_4_ * 0.0;
    auVar26 = NEON_ext(auVar25,auVar25,8,1);
    if (auVar26._0_4_ + auVar25._0_4_ + auVar25._4_4_ < -*(float *)(param_6 + 0x18)) {
      *(float *)(param_6 + 0x16) = fVar13;
      uVar9 = 1;
      param_6[0x13] = auVar14._8_8_;
      param_6[0x12] = auVar14._0_8_;
      param_6[0x15] = uStack_98;
      param_6[0x14] = uStack_a0;
      goto LAB_10981de8c;
    }
  }
LAB_10981de88:
  uVar9 = 0;
LAB_10981de8c:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_78) {
    return;
  }
  ___stack_chk_fail(uVar9);
  __Unwind_Resume();
  return;
}



/* Entry: 10981dee4; end: 10981deeb;  */

void FUN_10981dee4(void)

{
  return;
}



/* Entry: 10981deec; end: 10981e21f;  */

void FUN_10981deec(undefined8 param_1,undefined8 *param_2,undefined8 param_3,float *param_4,
                  ulong param_5,undefined4 *param_6)

{
  long *plVar1;
  long *plVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined8 uVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  undefined8 uVar12;
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
  int iVar23;
  ulong uVar24;
  float *pfVar25;
  undefined4 *puVar26;
  ulong *puVar27;
  int iVar28;
  undefined8 uVar29;
  undefined4 uVar30;
  undefined8 *puVar31;
  code *pcVar32;
  undefined1 uVar33;
  undefined1 uVar34;
  undefined1 uVar35;
  undefined1 uVar36;
  undefined1 uVar37;
  undefined1 uVar38;
  undefined1 uVar39;
  undefined1 uVar40;
  undefined1 uVar41;
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  float fVar45;
  float fVar50;
  float fVar51;
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  float fVar57;
  float fVar58;
  float fVar59;
  float fVar60;
  float fVar61;
  float fVar62;
  float fVar63;
  float fStack_3a0;
  float fStack_39c;
  float fStack_390;
  float fStack_38c;
  float fStack_388;
  float fStack_384;
  float fStack_380;
  float fStack_37c;
  float fStack_378;
  float fStack_374;
  float fStack_370;
  float fStack_36c;
  float fStack_360;
  float fStack_35c;
  float fStack_358;
  float fStack_354;
  float fStack_350;
  float fStack_34c;
  float fStack_348;
  float fStack_344;
  float fStack_330;
  float fStack_32c;
  float fStack_328;
  float fStack_324;
  ulong uStack_310;
  long lStack_308;
  undefined8 uStack_300;
  undefined8 uStack_2f8;
  undefined8 uStack_2f0;
  undefined8 uStack_2e8;
  undefined8 uStack_2e0;
  float fStack_2d8;
  undefined8 uStack_2d0;
  undefined8 uStack_2c8;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  float fStack_2a8;
  undefined8 uStack_2a0;
  float fStack_298;
  code *pcStack_290;
  ulong uStack_288;
  undefined8 uStack_280;
  ulong uStack_278;
  undefined1 auStack_270 [16];
  undefined1 auStack_260 [144];
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined4 uStack_1c0;
  undefined8 uStack_a0;
  long lStack_98;
  undefined4 uStack_90;
  long lStack_78;
  
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar27 = &uStack_310;
  uVar29 = 0;
  puVar26 = param_6;
  FUN_10981e220();
  uStack_1d0 = 0;
  uStack_1c8 = 0;
  uStack_90 = 2;
  uStack_a0 = 0;
  uStack_1c0 = 0;
  iVar23 = (int)auStack_260;
  pfVar25 = (float *)&uStack_310;
  FUN_10981e308();
  iVar28 = (int)uVar29;
  if (iVar23 == 0) {
    if (*(int *)(lStack_98 + 0x30) == 0) {
      fVar60 = 0.0;
      fVar61 = 0.0;
      fVar62 = 0.0;
      fVar63 = 0.0;
      fStack_328 = 0.0;
      fStack_324 = 0.0;
      fStack_330 = 0.0;
      fStack_32c = 0.0;
    }
    else {
      uVar24 = 0;
      plVar1 = (long *)(uStack_310 + ((long)uStack_288 >> 1));
      plVar2 = (long *)(lStack_308 + ((long)uStack_288 >> 1));
      fStack_328 = 0.0;
      fStack_324 = 0.0;
      fStack_330 = 0.0;
      fStack_32c = 0.0;
      fVar60 = 0.0;
      fVar61 = 0.0;
      fVar62 = 0.0;
      fVar63 = 0.0;
      do {
        pcVar32 = pcStack_290;
        if ((uStack_288 & 1) != 0) {
          pcVar32 = *(code **)(*plVar1 + ((ulong)pcStack_290 & 0xffffffff));
        }
        fVar13 = *(float *)(lStack_98 + uVar24 * 4 + 0x20);
        (*pcVar32)(auStack_270,plVar1,*(undefined8 *)(lStack_98 + uVar24 * 8));
        pcVar32 = pcStack_290;
        if ((uStack_288 & 1) != 0) {
          pcVar32 = *(code **)(*plVar2 + ((ulong)pcStack_290 & 0xffffffff));
        }
        fStack_330 = fStack_330 + (float)auStack_270._0_8_ * fVar13;
        fStack_32c = fStack_32c + SUB84(auStack_270._0_8_,4) * fVar13;
        fStack_328 = fStack_328 + (float)auStack_270._8_8_ * fVar13;
        fStack_324 = fStack_324 + 0.0;
        puVar31 = *(undefined8 **)(lStack_98 + uVar24 * 8);
        uVar12 = puVar31[1];
        uVar8 = *puVar31;
        fStack_360 = (float)uStack_2f0;
        fStack_35c = (float)((ulong)uStack_2f0 >> 0x20);
        fStack_358 = (float)uStack_2e8;
        fStack_354 = (float)((ulong)uStack_2e8 >> 0x20);
        fStack_350 = (float)uStack_300;
        fStack_34c = (float)((ulong)uStack_300 >> 0x20);
        fStack_348 = (float)uStack_2f8;
        fStack_344 = (float)((ulong)uStack_2f8 >> 0x20);
        fVar11 = (float)uVar8;
        auVar54._0_4_ = fStack_350 * -fVar11;
        fVar14 = (float)((ulong)uVar8 >> 0x20);
        auVar54._4_4_ = fStack_34c * -fVar14;
        fVar9 = (float)uVar12;
        auVar54._8_4_ = fStack_348 * -fVar9;
        fVar10 = (float)((ulong)uVar12 >> 0x20);
        auVar54._12_4_ = fStack_344 * -fVar10;
        auVar46._0_4_ = fStack_360 * -fVar11;
        auVar46._4_4_ = fStack_35c * -fVar14;
        auVar46._8_4_ = fStack_358 * -fVar9;
        auVar46._12_4_ = fStack_354 * -fVar10;
        fStack_370 = (float)uStack_2e0;
        fStack_36c = (float)((ulong)uStack_2e0 >> 0x20);
        fStack_370 = fStack_370 * -fVar11;
        fStack_36c = fStack_36c * -fVar14;
        uVar33 = (undefined1)((uint)fStack_36c >> 8);
        uVar34 = (undefined1)((uint)fStack_36c >> 0x10);
        uVar35 = (undefined1)((uint)fStack_36c >> 0x18);
        fVar10 = fStack_2d8 * -fVar9;
        uVar36 = (undefined1)((uint)fVar10 >> 8);
        uVar37 = (undefined1)((uint)fVar10 >> 0x10);
        uVar38 = (undefined1)((uint)fVar10 >> 0x18);
        auVar52 = NEON_ext(auVar54,auVar54,8,1);
        auVar53 = NEON_ext(auVar46,auVar46,8,1);
        uStack_280 = CONCAT44(auVar46._0_4_ + auVar46._4_4_ + auVar53._0_4_,
                              auVar54._0_4_ + auVar54._4_4_ + auVar52._0_4_);
        auVar52[4] = SUB41(fStack_36c,0);
        auVar52._0_4_ = fStack_370;
        auVar52[5] = uVar33;
        auVar52[6] = uVar34;
        auVar52[7] = uVar35;
        auVar52[8] = SUB41(fVar10,0);
        auVar52[9] = uVar36;
        auVar52[10] = uVar37;
        auVar52[0xb] = uVar38;
        auVar52._12_4_ = 0;
        auVar53[4] = SUB41(fStack_36c,0);
        auVar53._0_4_ = fStack_370;
        auVar53[5] = uVar33;
        auVar53[6] = uVar34;
        auVar53[7] = uVar35;
        auVar53[8] = SUB41(fVar10,0);
        auVar53[9] = uVar36;
        auVar53[10] = uVar37;
        auVar53[0xb] = uVar38;
        auVar53._12_4_ = 0;
        auVar52 = NEON_ext(auVar52,auVar53,8,1);
        uStack_278 = (ulong)(uint)(fStack_370 + fStack_36c + auVar52._0_4_ + auVar52._4_4_);
        pfVar25 = (float *)&uStack_280;
        (*pcVar32)(auStack_270,plVar2);
        iVar28 = (int)uVar29;
        fStack_390 = (float)uStack_2c0;
        fStack_38c = (float)((ulong)uStack_2c0 >> 0x20);
        fStack_388 = (float)uStack_2b8;
        fStack_384 = (float)((ulong)uStack_2b8 >> 0x20);
        fStack_380 = (float)uStack_2d0;
        fStack_37c = (float)((ulong)uStack_2d0 >> 0x20);
        fStack_378 = (float)uStack_2c8;
        fStack_374 = (float)((ulong)uStack_2c8 >> 0x20);
        fVar10 = (float)auStack_270._0_8_;
        auVar42._0_4_ = fStack_380 * fVar10;
        fVar9 = SUB84(auStack_270._0_8_,4);
        auVar42._4_4_ = fStack_37c * fVar9;
        fVar11 = (float)auStack_270._8_8_;
        auVar42._8_4_ = fStack_378 * fVar11;
        auVar42._12_4_ = fStack_374 * SUB84(auStack_270._8_8_,4);
        auVar47._0_4_ = fVar10 * fStack_390;
        auVar47._4_4_ = fVar9 * fStack_38c;
        auVar47._8_4_ = fVar11 * fStack_388;
        auVar47._12_4_ = SUB84(auStack_270._8_8_,4) * fStack_384;
        fStack_3a0 = (float)uStack_2b0;
        fStack_39c = (float)((ulong)uStack_2b0 >> 0x20);
        fVar10 = fVar10 * fStack_3a0;
        fVar9 = fVar9 * fStack_39c;
        uVar33 = (undefined1)((uint)fVar9 >> 8);
        uVar34 = (undefined1)((uint)fVar9 >> 0x10);
        uVar35 = (undefined1)((uint)fVar9 >> 0x18);
        fVar11 = fVar11 * fStack_2a8;
        uVar36 = (undefined1)((uint)fVar11 >> 8);
        uVar37 = (undefined1)((uint)fVar11 >> 0x10);
        uVar38 = (undefined1)((uint)fVar11 >> 0x18);
        auVar53 = NEON_ext(auVar42,auVar42,8,1);
        auVar54 = NEON_ext(auVar47,auVar47,8,1);
        auVar56[4] = SUB41(fVar9,0);
        auVar56._0_4_ = fVar10;
        auVar56[5] = uVar33;
        auVar56[6] = uVar34;
        auVar56[7] = uVar35;
        auVar56[8] = SUB41(fVar11,0);
        auVar56[9] = uVar36;
        auVar56[10] = uVar37;
        auVar56[0xb] = uVar38;
        auVar56._12_4_ = 0;
        auVar3[4] = SUB41(fVar9,0);
        auVar3._0_4_ = fVar10;
        auVar3[5] = uVar33;
        auVar3[6] = uVar34;
        auVar3[7] = uVar35;
        auVar3[8] = SUB41(fVar11,0);
        auVar3[9] = uVar36;
        auVar3[10] = uVar37;
        auVar3[0xb] = uVar38;
        auVar3._12_4_ = 0;
        auVar52 = NEON_ext(auVar56,auVar3,8,1);
        fVar60 = fVar60 + (auVar42._0_4_ + auVar42._4_4_ + auVar53._0_4_ + (float)uStack_2a0) *
                          fVar13;
        fVar61 = fVar61 + (auVar47._0_4_ + auVar47._4_4_ + auVar54._0_4_ +
                          (float)((ulong)uStack_2a0 >> 0x20)) * fVar13;
        fVar62 = fVar62 + (fVar10 + fVar9 + auVar52._0_4_ + auVar52._4_4_ + fStack_298) * fVar13;
        fVar63 = fVar63 + 0.0;
        uVar24 = uVar24 + 1;
      } while (uVar24 < *(uint *)(lStack_98 + 0x30));
    }
    fVar13 = fStack_330 * (float)*param_2;
    fVar10 = fStack_32c * (float)((ulong)*param_2 >> 0x20);
    uVar33 = (undefined1)((uint)fVar10 >> 8);
    uVar34 = (undefined1)((uint)fVar10 >> 0x10);
    uVar35 = (undefined1)((uint)fVar10 >> 0x18);
    fVar9 = fStack_328 * (float)param_2[1];
    uVar36 = (undefined1)((uint)fVar9 >> 8);
    uVar37 = (undefined1)((uint)fVar9 >> 0x10);
    uVar38 = (undefined1)((uint)fVar9 >> 0x18);
    fVar11 = fStack_324 * (float)((ulong)param_2[1] >> 0x20);
    uVar39 = (undefined1)((uint)fVar11 >> 8);
    uVar40 = (undefined1)((uint)fVar11 >> 0x10);
    uVar41 = (undefined1)((uint)fVar11 >> 0x18);
    auVar43._0_4_ = fStack_330 * *(float *)(param_2 + 2);
    auVar43._4_4_ = fStack_32c * *(float *)((long)param_2 + 0x14);
    auVar43._8_4_ = fStack_328 * *(float *)(param_2 + 3);
    auVar43._12_4_ = fStack_324 * *(float *)((long)param_2 + 0x1c);
    fVar14 = *(float *)(param_2 + 6);
    auVar48._0_4_ = fStack_330 * *(float *)(param_2 + 4);
    auVar48._4_4_ = fStack_32c * *(float *)((long)param_2 + 0x24);
    auVar48._8_4_ = fStack_328 * *(float *)(param_2 + 5);
    auVar4[4] = SUB41(fVar10,0);
    auVar4._0_4_ = fVar13;
    auVar4[5] = uVar33;
    auVar4[6] = uVar34;
    auVar4[7] = uVar35;
    auVar4[8] = SUB41(fVar9,0);
    auVar4[9] = uVar36;
    auVar4[10] = uVar37;
    auVar4[0xb] = uVar38;
    auVar4[0xc] = SUB41(fVar11,0);
    auVar4[0xd] = uVar39;
    auVar4[0xe] = uVar40;
    auVar4[0xf] = uVar41;
    auVar5[4] = SUB41(fVar10,0);
    auVar5._0_4_ = fVar13;
    auVar5[5] = uVar33;
    auVar5[6] = uVar34;
    auVar5[7] = uVar35;
    auVar5[8] = SUB41(fVar9,0);
    auVar5[9] = uVar36;
    auVar5[10] = uVar37;
    auVar5[0xb] = uVar38;
    auVar5[0xc] = SUB41(fVar11,0);
    auVar5[0xd] = uVar39;
    auVar5[0xe] = uVar40;
    auVar5[0xf] = uVar41;
    auVar53 = NEON_ext(auVar4,auVar5,8,1);
    auVar56 = NEON_ext(auVar43,auVar43,8,1);
    auVar48._12_4_ = 0;
    auVar52 = NEON_ext(auVar48,auVar48,8,1);
    fVar9 = auVar43._0_4_ + auVar43._4_4_ + auVar56._0_4_ + *(float *)((long)param_2 + 0x34);
    fVar11 = *(float *)((long)param_2 + 0x3c) + 0.0;
    *(ulong *)(param_6 + 6) =
         CONCAT17((char)((uint)fVar11 >> 0x18),
                  CONCAT16((char)((uint)fVar11 >> 0x10),
                           CONCAT15((char)((uint)fVar11 >> 8),
                                    CONCAT14(SUB41(fVar11,0),
                                             auVar48._0_4_ + auVar48._4_4_ +
                                             auVar52._0_4_ + auVar52._4_4_ + *(float *)(param_2 + 7)
                                            ))));
    *(ulong *)(param_6 + 4) =
         CONCAT17((char)((uint)fVar9 >> 0x18),
                  CONCAT16((char)((uint)fVar9 >> 0x10),
                           CONCAT15((char)((uint)fVar9 >> 8),
                                    CONCAT14(SUB41(fVar9,0),fVar13 + fVar10 + auVar53._0_4_ + fVar14
                                            ))));
    fVar13 = fVar60 * (float)*param_2;
    fVar10 = fVar61 * (float)((ulong)*param_2 >> 0x20);
    uVar33 = (undefined1)((uint)fVar10 >> 8);
    uVar34 = (undefined1)((uint)fVar10 >> 0x10);
    uVar35 = (undefined1)((uint)fVar10 >> 0x18);
    fVar9 = fVar62 * (float)param_2[1];
    uVar36 = (undefined1)((uint)fVar9 >> 8);
    uVar37 = (undefined1)((uint)fVar9 >> 0x10);
    uVar38 = (undefined1)((uint)fVar9 >> 0x18);
    fVar11 = fVar63 * (float)((ulong)param_2[1] >> 0x20);
    uVar39 = (undefined1)((uint)fVar11 >> 8);
    uVar40 = (undefined1)((uint)fVar11 >> 0x10);
    uVar41 = (undefined1)((uint)fVar11 >> 0x18);
    auVar44._0_4_ = fVar60 * *(float *)(param_2 + 2);
    auVar44._4_4_ = fVar61 * *(float *)((long)param_2 + 0x14);
    auVar44._8_4_ = fVar62 * *(float *)(param_2 + 3);
    auVar44._12_4_ = fVar63 * *(float *)((long)param_2 + 0x1c);
    auVar6[4] = SUB41(fVar10,0);
    auVar6._0_4_ = fVar13;
    auVar6[5] = uVar33;
    auVar6[6] = uVar34;
    auVar6[7] = uVar35;
    auVar6[8] = SUB41(fVar9,0);
    auVar6[9] = uVar36;
    auVar6[10] = uVar37;
    auVar6[0xb] = uVar38;
    auVar6[0xc] = SUB41(fVar11,0);
    auVar6[0xd] = uVar39;
    auVar6[0xe] = uVar40;
    auVar6[0xf] = uVar41;
    auVar7[4] = SUB41(fVar10,0);
    auVar7._0_4_ = fVar13;
    auVar7[5] = uVar33;
    auVar7[6] = uVar34;
    auVar7[7] = uVar35;
    auVar7[8] = SUB41(fVar9,0);
    auVar7[9] = uVar36;
    auVar7[10] = uVar37;
    auVar7[0xb] = uVar38;
    auVar7[0xc] = SUB41(fVar11,0);
    auVar7[0xd] = uVar39;
    auVar7[0xe] = uVar40;
    auVar7[0xf] = uVar41;
    auVar56 = NEON_ext(auVar6,auVar7,8,1);
    auVar53 = NEON_ext(auVar44,auVar44,8,1);
    fVar11 = *(float *)(param_2 + 6);
    fVar14 = *(float *)(param_2 + 7);
    auVar55._0_4_ = fVar60 * *(float *)(param_2 + 4);
    auVar55._4_4_ = fVar61 * *(float *)((long)param_2 + 0x24);
    auVar55._8_4_ = fVar62 * *(float *)(param_2 + 5);
    auVar55._12_4_ = 0;
    auVar52 = NEON_ext(auVar55,auVar55,8,1);
    fVar63 = auVar44._0_4_ + auVar44._4_4_ + auVar53._0_4_ + *(float *)((long)param_2 + 0x34);
    fVar9 = *(float *)((long)param_2 + 0x3c) + 0.0;
    fStack_330 = fStack_330 - fVar60;
    fStack_32c = fStack_32c - fVar61;
    fStack_328 = fStack_328 - fVar62;
    auVar49._0_4_ = fStack_330 * fStack_330;
    auVar49._4_4_ = fStack_32c * fStack_32c;
    auVar49._8_4_ = fStack_328 * fStack_328;
    auVar49._12_4_ = 0;
    auVar53 = NEON_ext(auVar49,auVar49,8,1);
    fVar60 = SQRT(auVar53._0_4_ + auVar49._0_4_ + auVar49._4_4_);
    param_6[0x10] = fVar60;
    fVar61 = 1.0 / fVar60;
    if (fVar60 <= 0.0001) {
      fVar61 = 1.0;
    }
    *(ulong *)(param_6 + 10) =
         CONCAT17((char)((uint)fVar9 >> 0x18),
                  CONCAT16((char)((uint)fVar9 >> 0x10),
                           CONCAT15((char)((uint)fVar9 >> 8),
                                    CONCAT14(SUB41(fVar9,0),
                                             auVar55._0_4_ + auVar55._4_4_ +
                                             auVar52._0_4_ + auVar52._4_4_ + fVar14))));
    *(ulong *)(param_6 + 8) =
         CONCAT17((char)((uint)fVar63 >> 0x18),
                  CONCAT16((char)((uint)fVar63 >> 0x10),
                           CONCAT15((char)((uint)fVar63 >> 8),
                                    CONCAT14(SUB41(fVar63,0),
                                             fVar13 + fVar10 + auVar56._0_4_ + fVar11))));
    param_6[0xe] = fStack_328 * fVar61;
    param_6[0xf] = fVar61 * 0.0;
    param_6[0xc] = fStack_330 * fVar61;
    param_6[0xd] = fStack_32c * fVar61;
  }
  else {
    uVar30 = 1;
    if (iVar23 != 1) {
      uVar30 = 2;
    }
    *param_6 = uVar30;
  }
  uVar24 = (ulong)(iVar23 == 0);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_78) {
    return;
  }
  ___stack_chk_fail();
  *puVar26 = 0;
  *(undefined8 *)(puVar26 + 6) = 0;
  *(undefined8 *)(puVar26 + 4) = 0;
  *(undefined8 *)(puVar26 + 10) = 0;
  *(undefined8 *)(puVar26 + 8) = 0;
  *puVar27 = uVar24;
  puVar27[1] = param_5;
  fVar10 = pfVar25[4];
  fVar9 = pfVar25[5];
  fVar11 = pfVar25[6];
  fVar14 = pfVar25[8];
  fVar15 = pfVar25[9];
  fVar16 = pfVar25[10];
  fVar17 = *param_4;
  fVar18 = param_4[1];
  fVar19 = param_4[2];
  fVar20 = param_4[4];
  fVar21 = param_4[5];
  fVar22 = param_4[6];
  fVar45 = param_4[8];
  fVar50 = param_4[9];
  fVar51 = param_4[10];
  fVar60 = (float)*(undefined8 *)pfVar25;
  fVar61 = (float)((ulong)*(undefined8 *)pfVar25 >> 0x20);
  fVar62 = (float)*(undefined8 *)(pfVar25 + 2);
  fVar63 = fVar61 * fVar19 + fVar9 * fVar22 + fVar15 * fVar51;
  fVar13 = fVar19 * 0.0 + fVar22 * 0.0 + fVar51 * 0.0;
  puVar27[3] = CONCAT44(fVar17 * 0.0 + fVar20 * 0.0 + fVar45 * 0.0,
                        fVar62 * fVar17 + fVar11 * fVar20 + fVar16 * fVar45);
  puVar27[2] = CONCAT44(fVar61 * fVar17 + fVar9 * fVar20 + fVar15 * fVar45,
                        fVar60 * fVar17 + fVar10 * fVar20 + fVar14 * fVar45);
  puVar27[5] = CONCAT44(fVar18 * 0.0 + fVar21 * 0.0 + fVar50 * 0.0,
                        fVar62 * fVar18 + fVar11 * fVar21 + fVar16 * fVar50);
  puVar27[4] = CONCAT44(fVar61 * fVar18 + fVar9 * fVar21 + fVar15 * fVar50,
                        fVar60 * fVar18 + fVar10 * fVar21 + fVar14 * fVar50);
  puVar27[7] = CONCAT17((char)((uint)fVar13 >> 0x18),
                        CONCAT16((char)((uint)fVar13 >> 0x10),
                                 CONCAT15((char)((uint)fVar13 >> 8),
                                          CONCAT14(SUB41(fVar13,0),
                                                   fVar62 * fVar19 + fVar11 * fVar22 +
                                                   fVar16 * fVar51))));
  puVar27[6] = CONCAT17((char)((uint)fVar63 >> 0x18),
                        CONCAT16((char)((uint)fVar63 >> 0x10),
                                 CONCAT15((char)((uint)fVar63 >> 8),
                                          CONCAT14(SUB41(fVar63,0),
                                                   fVar60 * fVar19 + fVar10 * fVar22 +
                                                   fVar14 * fVar51))));
  fVar10 = param_4[4];
  fVar9 = param_4[5];
  fVar11 = param_4[6];
  fVar14 = param_4[8];
  fVar15 = param_4[9];
  fVar16 = param_4[10];
  fVar17 = pfVar25[8];
  fVar18 = pfVar25[9];
  fVar19 = pfVar25[10];
  fVar45 = param_4[0xc] - pfVar25[0xc];
  fVar50 = param_4[0xd] - pfVar25[0xd];
  fVar51 = param_4[0xe] - pfVar25[0xe];
  fVar20 = *pfVar25;
  fVar21 = pfVar25[1];
  fVar22 = pfVar25[2];
  fVar60 = (float)*(undefined8 *)param_4;
  fVar61 = (float)((ulong)*(undefined8 *)param_4 >> 0x20);
  fVar62 = (float)*(undefined8 *)(param_4 + 2);
  fVar59 = (float)*(undefined8 *)(pfVar25 + 6);
  fVar58 = (float)((ulong)*(undefined8 *)(pfVar25 + 4) >> 0x20);
  fVar57 = (float)*(undefined8 *)(pfVar25 + 4);
  fVar63 = fVar61 * fVar20 + fVar9 * fVar57 + fVar15 * fVar17;
  fVar13 = fVar20 * 0.0 + fVar57 * 0.0 + fVar17 * 0.0;
  puVar27[9] = CONCAT17((char)((uint)fVar13 >> 0x18),
                        CONCAT16((char)((uint)fVar13 >> 0x10),
                                 CONCAT15((char)((uint)fVar13 >> 8),
                                          CONCAT14(SUB41(fVar13,0),
                                                   fVar62 * fVar20 + fVar11 * fVar57 +
                                                   fVar16 * fVar17))));
  puVar27[8] = CONCAT17((char)((uint)fVar63 >> 0x18),
                        CONCAT16((char)((uint)fVar63 >> 0x10),
                                 CONCAT15((char)((uint)fVar63 >> 8),
                                          CONCAT14(SUB41(fVar63,0),
                                                   fVar60 * fVar20 + fVar10 * fVar57 +
                                                   fVar14 * fVar17))));
  puVar27[0xb] = CONCAT44(fVar21 * 0.0 + fVar58 * 0.0 + fVar18 * 0.0,
                          fVar62 * fVar21 + fVar11 * fVar58 + fVar16 * fVar18);
  puVar27[10] = CONCAT44(fVar61 * fVar21 + fVar9 * fVar58 + fVar15 * fVar18,
                         fVar60 * fVar21 + fVar10 * fVar58 + fVar14 * fVar18);
  puVar27[0xd] = CONCAT44(fVar22 * 0.0 + fVar59 * 0.0 + fVar19 * 0.0,
                          fVar62 * fVar22 + fVar11 * fVar59 + fVar16 * fVar19);
  puVar27[0xc] = CONCAT44(fVar61 * fVar22 + fVar9 * fVar59 + fVar15 * fVar19,
                          fVar60 * fVar22 + fVar10 * fVar59 + fVar14 * fVar19);
  *(float *)(puVar27 + 0xf) = fVar22 * fVar45 + fVar59 * fVar50 + fVar19 * fVar51;
  *(float *)((long)puVar27 + 0x7c) = fVar45 * 0.0 + fVar50 * 0.0 + fVar51 * 0.0;
  *(float *)(puVar27 + 0xe) = fVar20 * fVar45 + fVar57 * fVar50 + fVar17 * fVar51;
  *(float *)((long)puVar27 + 0x74) = fVar21 * fVar45 + fVar58 * fVar50 + fVar18 * fVar51;
  pcVar32 = FUN_109819a50;
  if (iVar28 == 0) {
    pcVar32 = FUN_109819648;
  }
  puVar27[0x10] = (ulong)pcVar32;
  puVar27[0x11] = 0;
  return;
}



/* Entry: 10981e220; end: 10981e307;  */

void FUN_10981e220(undefined8 param_1,undefined8 *param_2,undefined8 param_3,undefined8 *param_4,
                  undefined4 *param_5,undefined8 *param_6,int param_7)

{
  code *pcVar1;
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
  
  *param_5 = 0;
  *(undefined8 *)(param_5 + 6) = 0;
  *(undefined8 *)(param_5 + 4) = 0;
  *(undefined8 *)(param_5 + 10) = 0;
  *(undefined8 *)(param_5 + 8) = 0;
  *param_6 = param_1;
  param_6[1] = param_3;
  fVar4 = (float)param_2[1];
  fVar7 = (float)param_2[3];
  fVar10 = (float)param_2[5];
  fVar11 = (float)*param_4;
  fVar2 = (float)*param_2;
  fVar3 = (float)((ulong)*param_2 >> 0x20);
  fVar12 = (float)((ulong)*param_4 >> 0x20);
  fVar13 = (float)param_4[1];
  fVar14 = (float)param_4[2];
  fVar5 = (float)param_2[2];
  fVar6 = (float)((ulong)param_2[2] >> 0x20);
  fVar15 = (float)((ulong)param_4[2] >> 0x20);
  fVar16 = (float)param_4[3];
  fVar17 = (float)param_4[4];
  fVar8 = (float)param_2[4];
  fVar9 = (float)((ulong)param_2[4] >> 0x20);
  fVar18 = (float)((ulong)param_4[4] >> 0x20);
  fVar19 = (float)param_4[5];
  param_6[3] = CONCAT44(fVar11 * 0.0 + fVar14 * 0.0 + fVar17 * 0.0,
                        fVar4 * fVar11 + fVar7 * fVar14 + fVar10 * fVar17);
  param_6[2] = CONCAT44(fVar3 * fVar11 + fVar6 * fVar14 + fVar9 * fVar17,
                        fVar2 * fVar11 + fVar5 * fVar14 + fVar8 * fVar17);
  param_6[5] = CONCAT44(fVar12 * 0.0 + fVar15 * 0.0 + fVar18 * 0.0,
                        fVar4 * fVar12 + fVar7 * fVar15 + fVar10 * fVar18);
  param_6[4] = CONCAT44(fVar3 * fVar12 + fVar6 * fVar15 + fVar9 * fVar18,
                        fVar2 * fVar12 + fVar5 * fVar15 + fVar8 * fVar18);
  param_6[7] = CONCAT44(fVar13 * 0.0 + fVar16 * 0.0 + fVar19 * 0.0,
                        fVar4 * fVar13 + fVar7 * fVar16 + fVar10 * fVar19);
  param_6[6] = CONCAT44(fVar3 * fVar13 + fVar6 * fVar16 + fVar9 * fVar19,
                        fVar2 * fVar13 + fVar5 * fVar16 + fVar8 * fVar19);
  fVar8 = (float)param_4[6] - (float)param_2[6];
  fVar9 = (float)((ulong)param_4[6] >> 0x20) - (float)((ulong)param_2[6] >> 0x20);
  fVar10 = (float)param_4[7] - (float)param_2[7];
  fVar4 = (float)param_4[1];
  fVar16 = (float)param_2[1];
  fVar2 = (float)*param_4;
  fVar3 = (float)((ulong)*param_4 >> 0x20);
  fVar15 = (float)((ulong)*param_2 >> 0x20);
  fVar14 = (float)*param_2;
  fVar7 = (float)param_4[3];
  fVar22 = (float)param_2[3];
  fVar5 = (float)param_4[2];
  fVar6 = (float)((ulong)param_4[2] >> 0x20);
  fVar21 = (float)((ulong)param_2[2] >> 0x20);
  fVar20 = (float)param_2[2];
  fVar13 = (float)param_4[5];
  fVar19 = (float)param_2[5];
  fVar11 = (float)param_4[4];
  fVar12 = (float)((ulong)param_4[4] >> 0x20);
  fVar18 = (float)((ulong)param_2[4] >> 0x20);
  fVar17 = (float)param_2[4];
  param_6[9] = CONCAT44(fVar14 * 0.0 + fVar20 * 0.0 + fVar17 * 0.0,
                        fVar4 * fVar14 + fVar7 * fVar20 + fVar13 * fVar17);
  param_6[8] = CONCAT44(fVar3 * fVar14 + fVar6 * fVar20 + fVar12 * fVar17,
                        fVar2 * fVar14 + fVar5 * fVar20 + fVar11 * fVar17);
  param_6[0xb] = CONCAT44(fVar15 * 0.0 + fVar21 * 0.0 + fVar18 * 0.0,
                          fVar4 * fVar15 + fVar7 * fVar21 + fVar13 * fVar18);
  param_6[10] = CONCAT44(fVar3 * fVar15 + fVar6 * fVar21 + fVar12 * fVar18,
                         fVar2 * fVar15 + fVar5 * fVar21 + fVar11 * fVar18);
  param_6[0xd] = CONCAT44(fVar16 * 0.0 + fVar22 * 0.0 + fVar19 * 0.0,
                          fVar4 * fVar16 + fVar7 * fVar22 + fVar13 * fVar19);
  param_6[0xc] = CONCAT44(fVar3 * fVar16 + fVar6 * fVar22 + fVar12 * fVar19,
                          fVar2 * fVar16 + fVar5 * fVar22 + fVar11 * fVar19);
  param_6[0xf] = CONCAT44(fVar8 * 0.0 + fVar9 * 0.0 + fVar10 * 0.0,
                          fVar16 * fVar8 + fVar22 * fVar9 + fVar19 * fVar10);
  param_6[0xe] = CONCAT44(fVar15 * fVar8 + fVar21 * fVar9 + fVar18 * fVar10,
                          fVar14 * fVar8 + fVar20 * fVar9 + fVar17 * fVar10);
  pcVar1 = FUN_109819a50;
  if (param_7 == 0) {
    pcVar1 = FUN_109819648;
  }
  param_6[0x10] = pcVar1;
  param_6[0x11] = 0;
  return;
}



/* Entry: 10981e308; end: 10981eaa7;  */

/* WARNING: Removing unreachable block (ram,0x00010981f300) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10981e308(undefined8 *param_1,undefined8 *param_2,float *param_3,float *param_4,
                  undefined1 (*param_5) [16],int *param_6)

{
  undefined8 *puVar1;
  long lVar2;
  int iVar3;
  uint uVar4;
  bool bVar5;
  float *pfVar6;
  uint *puVar7;
  uint *puVar8;
  uint *puVar9;
  uint *puVar10;
  float *pfVar11;
  undefined1 (*pauVar12) [16];
  int *piVar13;
  undefined1 (*pauVar14) [16];
  undefined1 (*pauVar15) [16];
  long lVar16;
  undefined1 *puVar17;
  code *pcVar18;
  long lVar19;
  ulong uVar20;
  undefined1 (*pauVar21) [16];
  ulong uVar22;
  uint uVar23;
  float *pfVar24;
  long *unaff_x21;
  ulong uVar25;
  long *plVar26;
  ulong uVar27;
  undefined1 (*pauVar28) [16];
  undefined1 (*pauVar29) [16];
  undefined1 (*pauVar30) [16];
  long *unaff_x27;
  float fVar31;
  undefined8 uVar32;
  undefined1 auVar33 [12];
  undefined1 auVar34 [16];
  float fVar56;
  undefined8 extraout_var;
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined8 extraout_var_00;
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined8 extraout_var_01;
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  int iVar57;
  float fVar58;
  float fVar59;
  float fVar74;
  float fVar75;
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  undefined1 auVar64 [16];
  undefined1 auVar65 [16];
  undefined1 auVar66 [16];
  undefined1 auVar67 [16];
  undefined1 auVar68 [16];
  undefined1 auVar69 [16];
  undefined1 auVar70 [16];
  undefined1 auVar71 [16];
  undefined1 auVar72 [16];
  undefined1 auVar73 [16];
  float fVar88;
  undefined1 auVar76 [16];
  undefined1 auVar77 [16];
  undefined1 auVar78 [16];
  undefined1 auVar79 [16];
  undefined1 auVar80 [16];
  undefined1 auVar81 [16];
  undefined1 auVar82 [16];
  undefined1 auVar83 [16];
  undefined1 auVar84 [16];
  undefined1 auVar85 [16];
  undefined1 auVar86 [16];
  undefined1 auVar87 [16];
  float fVar89;
  float fVar90;
  undefined1 auVar91 [16];
  undefined1 auVar92 [16];
  undefined1 auVar93 [16];
  undefined1 auVar94 [16];
  undefined1 auVar95 [16];
  undefined1 auVar96 [16];
  undefined1 auVar97 [16];
  undefined1 auVar98 [16];
  undefined1 auVar99 [16];
  undefined1 auVar100 [16];
  float fVar101;
  undefined1 auVar102 [16];
  undefined1 auVar103 [16];
  float fVar104;
  float fVar105;
  undefined1 auVar106 [16];
  float fVar107;
  float fVar110;
  float fVar111;
  undefined1 auVar108 [16];
  undefined1 auVar109 [16];
  float fVar112;
  undefined1 auVar113 [16];
  undefined1 auVar114 [16];
  undefined1 auVar115 [16];
  undefined1 auVar116 [16];
  float fVar117;
  float fVar118;
  float fVar119;
  float fVar120;
  float fVar121;
  float fVar122;
  undefined8 uVar123;
  float fVar124;
  float fStack_7650;
  float fStack_764c;
  float fStack_7648;
  undefined8 uStack_7640;
  ulong uStack_7638;
  float fStack_7630;
  float fStack_762c;
  float fStack_7628;
  float fStack_7624;
  undefined8 uStack_7620;
  undefined8 uStack_7618;
  float *pfStack_7610;
  int *piStack_7608;
  undefined1 ***pppuStack_7600;
  code *pcStack_75f8;
  undefined8 uStack_75f0;
  ulong uStack_75e8;
  undefined8 uStack_75e0;
  ulong uStack_75d8;
  undefined8 uStack_75d0;
  ulong uStack_75c8;
  float *pfStack_75c0;
  undefined1 (*pauStack_75b8) [16];
  undefined1 (*pauStack_75b0) [16];
  long lStack_75a8;
  undefined1 **ppuStack_75a0;
  code *pcStack_7598;
  ulong uStack_7590;
  undefined8 uStack_7588;
  undefined8 uStack_7580;
  undefined8 uStack_7578;
  float fStack_7570;
  float fStack_756c;
  float fStack_7568;
  float fStack_7564;
  long alStack_7560 [16];
  code *pcStack_74e0;
  ulong uStack_74d8;
  undefined8 uStack_74d0;
  long lStack_74c8;
  uint uStack_74c0;
  uint uStack_74b0;
  undefined1 uStack_74ac;
  undefined1 uStack_74ab;
  undefined1 uStack_74aa;
  byte bStack_74a9;
  ulong auStack_74a8 [4];
  float afStack_7488 [4];
  uint uStack_7478;
  undefined8 uStack_7470;
  undefined8 uStack_7468;
  float fStack_7460;
  undefined1 auStack_7450 [16];
  float afStack_7440 [996];
  undefined1 auStack_64b0 [72];
  undefined8 auStack_6468 [3];
  undefined1 auStack_6450 [24576];
  uint uStack_450;
  undefined1 (*pauStack_448) [16];
  int iStack_440;
  undefined1 (*pauStack_438) [16];
  int iStack_430;
  undefined1 auStack_420 [144];
  undefined8 uStack_390;
  undefined8 uStack_388;
  undefined4 uStack_380;
  undefined8 uStack_260;
  ulong *puStack_258;
  undefined4 uStack_250;
  long lStack_238;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  long *plStack_208;
  ulong uStack_200;
  long *plStack_1f8;
  undefined8 *puStack_1f0;
  undefined8 *puStack_1e8;
  ulong uStack_1e0;
  long *plStack_1d8;
  undefined8 uStack_1d0;
  undefined8 *puStack_1c8;
  undefined1 *puStack_1c0;
  code *pcStack_1b8;
  long lStack_1a8;
  float *pfStack_1a0;
  long lStack_198;
  uint uStack_18c;
  uint uStack_188;
  int iStack_184;
  ulong uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  uint uStack_158;
  uint uStack_154;
  float afStack_150 [4];
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  float afStack_100 [4];
  undefined8 uStack_f0;
  ulong uStack_e8;
  undefined8 uStack_e0;
  ulong uStack_d8;
  undefined8 uStack_d0;
  ulong uStack_c8;
  float *pfStack_c0;
  long lStack_b8;
  long lStack_b0;
  float *pfStack_a8;
  long lStack_a0;
  undefined1 auVar53 [16];
  
  lStack_a0 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = param_1 + 0x34;
  param_1[0x34] = param_1 + 0x24;
  param_1[0x35] = param_1 + 0x28;
  pfVar11 = (float *)(param_1 + 0x30);
  param_1[0x36] = param_1 + 0x2c;
  param_1[0x37] = pfVar11;
  param_1[0x38] = 4;
  *(undefined4 *)(param_1 + 0x3a) = 0;
  uVar32 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar32;
  uVar32 = param_2[2];
  param_1[3] = param_2[3];
  param_1[2] = uVar32;
  uVar32 = param_2[4];
  param_1[5] = param_2[5];
  param_1[4] = uVar32;
  uVar32 = param_2[6];
  param_1[7] = param_2[7];
  param_1[6] = uVar32;
  uVar32 = param_2[8];
  param_1[9] = param_2[9];
  param_1[8] = uVar32;
  uVar32 = param_2[10];
  param_1[0xb] = param_2[0xb];
  param_1[10] = uVar32;
  uVar32 = param_2[0xc];
  param_1[0xd] = param_2[0xd];
  param_1[0xc] = uVar32;
  uVar32 = param_2[0xe];
  param_1[0xf] = param_2[0xf];
  param_1[0xe] = uVar32;
  uVar32 = param_2[0x10];
  param_1[0x11] = param_2[0x11];
  param_1[0x10] = uVar32;
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 0x1b) = 0;
  fVar104 = *param_3;
  fVar31 = param_3[1];
  fVar89 = param_3[2];
  fVar56 = param_3[3];
  plVar26 = param_1 + 0x15;
  *plVar26 = (long)pfVar11;
  *(float *)(param_1 + 0x13) = fVar89;
  *(float *)((long)param_1 + 0x9c) = fVar56;
  *(float *)(param_1 + 0x12) = fVar104;
  *(float *)((long)param_1 + 0x94) = fVar31;
  auVar92._0_4_ = fVar104 * fVar104;
  auVar92._4_4_ = fVar31 * fVar31;
  auVar92._8_4_ = fVar89 * fVar89;
  auVar92._12_4_ = fVar56 * fVar56;
  auVar60 = NEON_ext(auVar92,auVar92,8,1);
  fVar89 = auVar92._0_4_ + auVar92._4_4_ + auVar60._0_4_;
  uStack_170 = CONCAT44(auVar92._0_4_ + auVar92._4_4_ + auVar60._4_4_,fVar89);
  uStack_178 = 0;
  uStack_180 = 0;
  uStack_168 = 0;
  iVar57 = -(uint)(0.0 < fVar89);
  *(undefined4 *)(param_1 + 0x19) = 0;
  *(undefined4 *)(param_1 + 0x38) = 3;
  *(undefined4 *)(param_1 + 0x1b) = 1;
  FUN_10981f61c(CONCAT44(-fVar31,-fVar104) ^
                (CONCAT44(-fVar31,-fVar104) ^ 0x3f800000) & ~CONCAT44(iVar57,iVar57));
  uVar25 = 0;
  iVar57 = 0;
  *(undefined4 *)(param_1 + 0x19) = 0x3f800000;
  auVar60 = *(undefined1 (*) [16])(*plVar26 + 0x10);
  uStack_138 = auVar60._8_8_;
  param_1[0x13] = uStack_138;
  uStack_140 = auVar60._0_8_;
  param_1[0x12] = uStack_140;
  uVar20 = (ulong)*(uint *)((long)param_1 + 0x1c4);
  uStack_130 = uStack_140;
  uStack_128 = uStack_138;
  uStack_120 = uStack_140;
  uStack_118 = uStack_138;
  uStack_110 = uStack_140;
  uStack_108 = uStack_138;
  do {
    auVar114._0_4_ = auVar60._0_4_ * auVar60._0_4_;
    auVar114._4_4_ = auVar60._4_4_ * auVar60._4_4_;
    auVar114._8_4_ = auVar60._8_4_ * auVar60._8_4_;
    auVar114._12_4_ = auVar60._12_4_ * auVar60._12_4_;
    auVar60 = NEON_ext(auVar114,auVar114,8,1);
    fVar104 = SQRT(auVar60._0_4_ + auVar114._0_4_ + auVar114._4_4_);
    if (fVar104 < 0.0001) {
      *(undefined4 *)(param_1 + 0x3a) = 1;
LAB_10981ea00:
      iVar3 = *(int *)(param_1 + 0x3a);
      uVar27 = uVar20;
      break;
    }
    uVar4 = 1 - (int)uVar20;
    uVar27 = (ulong)uVar4;
    unaff_x27 = plVar26 + uVar20 * 7;
    unaff_x21 = plVar26 + uVar27 * 7;
    uVar23 = *(uint *)(unaff_x27 + 6);
    *(undefined4 *)((long)unaff_x27 + (ulong)uVar23 * 4 + 0x20) = 0;
    iVar3 = *(int *)(param_1 + 0x38);
    *(uint *)(param_1 + 0x38) = iVar3 - 1U;
    pfVar11 = (float *)puVar1[iVar3 - 1U];
    unaff_x27[uVar23] = (long)pfVar11;
    *(uint *)(unaff_x27 + 6) = uVar23 + 1;
    iStack_184 = iVar57;
    FUN_10981f61c(param_1);
    lVar16 = 0;
    iVar57 = (int)unaff_x27[6];
    lVar19 = unaff_x27[iVar57 - 1];
    fVar31 = *(float *)(lVar19 + 0x10);
    fVar89 = *(float *)(lVar19 + 0x14);
    fVar56 = *(float *)(lVar19 + 0x18);
    fVar59 = *(float *)(lVar19 + 0x1c);
    do {
      fVar58 = fVar31 - *(float *)((long)&uStack_140 + lVar16);
      fVar74 = fVar89 - *(float *)((long)&uStack_140 + lVar16 + 4);
      fVar75 = fVar56 - *(float *)((long)&uStack_138 + lVar16);
      auVar113._0_4_ = fVar58 * fVar58;
      auVar113._4_4_ = fVar74 * fVar74;
      auVar113._8_4_ = fVar75 * fVar75;
      auVar113._12_4_ = 0;
      auVar60 = NEON_ext(auVar113,auVar113,8,1);
      if (auVar113._0_4_ + auVar113._4_4_ + auVar60._0_4_ < 0.0001) goto LAB_10981e9d4;
      lVar16 = lVar16 + 0x10;
    } while (lVar16 != 0x40);
    uVar23 = (int)uVar25 + 1U & 3;
    uVar25 = (ulong)uVar23;
    *(float *)(&uStack_138 + uVar25 * 2) = fVar56;
    *(float *)((long)&uStack_138 + uVar25 * 0x10 + 4) = fVar59;
    *(float *)(&uStack_140 + uVar25 * 2) = fVar31;
    *(float *)((long)&uStack_140 + uVar25 * 0x10 + 4) = fVar89;
    auVar34._0_4_ = fVar31 * *(float *)(param_1 + 0x12);
    auVar34._4_4_ = fVar89 * *(float *)((long)param_1 + 0x94);
    auVar34._8_4_ = fVar56 * *(float *)(param_1 + 0x13);
    auVar34._12_4_ = fVar59 * *(float *)((long)param_1 + 0x9c);
    auVar60 = NEON_ext(auVar34,auVar34,8,1);
    fVar31 = (auVar34._0_4_ + auVar34._4_4_ + auVar60._0_4_) / fVar104;
    if (fVar31 <= (float)uStack_180) {
      fVar31 = (float)uStack_180;
    }
    if ((fVar104 - fVar31) + fVar104 * -0.0001 <= 0.0) {
LAB_10981e9d4:
      uVar20 = (ulong)*(uint *)((long)param_1 + 0x1c4);
      uVar23 = (int)plVar26[uVar20 * 7 + 6] - 1;
      lVar16 = plVar26[uVar20 * 7 + (ulong)uVar23];
      *(uint *)(plVar26 + uVar20 * 7 + 6) = uVar23;
      uVar23 = *(uint *)(param_1 + 0x38);
      *(uint *)(param_1 + 0x38) = uVar23 + 1;
      puVar1[uVar23] = lVar16;
      goto LAB_10981ea00;
    }
    uStack_158 = 0;
    uStack_178 = 0;
    uStack_180 = (ulong)(uint)fVar31;
    if (iVar57 == 4) {
      lVar16 = *unaff_x27;
      lVar19 = unaff_x27[1];
      pfStack_1a0 = (float *)(lVar16 + 0x10);
      lStack_198 = lVar19 + 0x10;
      lVar2 = unaff_x27[3];
      lStack_1a8 = unaff_x27[2] + 0x10;
      pfVar6 = (float *)(lVar2 + 0x10);
      pfStack_c0 = pfStack_1a0;
      lStack_b8 = lStack_198;
      lStack_b0 = lStack_1a8;
      pfStack_a8 = pfVar6;
      fVar104 = *(float *)(lVar16 + 0x10);
      fVar31 = *(float *)(lVar16 + 0x14);
      fVar89 = *(float *)(lVar16 + 0x18);
      fVar56 = *(float *)(lVar2 + 0x10);
      fVar59 = *(float *)(lVar2 + 0x14);
      fVar58 = *(float *)(lVar2 + 0x18);
      fVar74 = *(float *)(lVar19 + 0x10);
      fVar75 = *(float *)(lVar19 + 0x14);
      fVar88 = *(float *)(lVar19 + 0x18);
      fVar105 = fVar74 - fVar56;
      fVar90 = fVar75 - fVar59;
      fVar107 = fVar88 - fVar58;
      fVar110 = fVar104 - fVar56;
      fVar111 = fVar31 - fVar59;
      fVar101 = fVar89 - fVar58;
      auVar60 = *(undefined1 (*) [16])(unaff_x27[2] + 0x10);
      fVar56 = auVar60._0_4_ - fVar56;
      fVar59 = auVar60._4_4_ - fVar59;
      fVar58 = auVar60._8_4_ - fVar58;
      uStack_e8 = (ulong)(uint)fVar101;
      uStack_f0 = CONCAT44(fVar111,fVar110);
      uStack_d8 = (ulong)(uint)fVar107;
      uStack_e0 = CONCAT44(fVar90,fVar105);
      uStack_c8 = (ulong)(uint)fVar58;
      uStack_d0 = CONCAT44(fVar59,fVar56);
      fVar56 = fVar105 * fVar101 * fVar59 + fVar56 * fVar111 * fVar107 + -fVar110 * fVar107 * fVar59
               + -fVar111 * fVar105 * fVar58 + fVar110 * fVar90 * fVar58 +
               fVar56 * -fVar101 * fVar90;
      uStack_168 = 0;
      uStack_170 = 0xbf800000;
      uStack_18c = uVar23;
      if ((fVar56 != 0.0) && (!NAN(fVar56))) {
        auVar76._0_4_ = fVar74 - auVar60._0_4_;
        auVar76._4_4_ = fVar75 - auVar60._4_4_;
        auVar76._8_4_ = fVar88 - auVar60._8_4_;
        auVar76._12_4_ = 0;
        auVar61._0_4_ = fVar104 - fVar74;
        auVar61._4_4_ = fVar31 - fVar75;
        auVar61._8_4_ = fVar89 - fVar88;
        auVar61._12_4_ = 0;
        auVar60 = NEON_ext(auVar76,auVar76,0xc,1);
        auVar60 = NEON_ext(auVar60,auVar76,8,1);
        auVar92 = NEON_ext(auVar61,auVar61,0xc,1);
        auVar92 = NEON_ext(auVar92,auVar61,8,1);
        auVar62._0_4_ = auVar92._0_4_ * auVar76._0_4_ - auVar60._0_4_ * auVar61._0_4_;
        auVar62._4_4_ = auVar92._4_4_ * auVar76._4_4_ - auVar60._4_4_ * auVar61._4_4_;
        auVar62._8_4_ = auVar92._8_4_ * auVar76._8_4_ - auVar60._8_4_ * auVar61._8_4_;
        auVar62._12_4_ = auVar92._12_4_ * 0.0 - auVar60._12_4_ * 0.0;
        auVar60 = NEON_ext(auVar62,auVar62,0xc,1);
        auVar60 = NEON_ext(auVar60,auVar62,8,1);
        auVar35._0_4_ = fVar104 * auVar60._0_4_;
        auVar35._4_4_ = fVar31 * auVar60._4_4_;
        auVar35._8_4_ = fVar89 * auVar60._8_4_;
        auVar35._12_4_ = *(float *)(lVar16 + 0x1c) * 0.0;
        auVar60 = NEON_ext(auVar35,auVar35,8,1);
        if (fVar56 * (auVar35._0_4_ + auVar35._4_4_ + auVar60._0_4_) <= 0.0) {
          uStack_188 = 0;
          lVar16 = 0;
          afStack_100[2] = 0.0;
          afStack_100[0] = 0.0;
          afStack_100[1] = 0.0;
          uStack_168 = 0;
          uStack_170 = 0xbf800000;
          uStack_154 = 0;
          do {
            uVar23 = *(uint *)(&UNK_10e001e58 + lVar16 * 4);
            uVar20 = (ulong)uVar23;
            auVar60 = *(undefined1 (*) [16])(&uStack_f0 + lVar16 * 2);
            auVar92 = *(undefined1 (*) [16])(&uStack_f0 + uVar20 * 2);
            auVar114 = NEON_ext(auVar60,auVar60,0xc,1);
            auVar114 = NEON_ext(auVar114,auVar60,8,1);
            auVar113 = NEON_ext(auVar92,auVar92,0xc,1);
            auVar113 = NEON_ext(auVar113,auVar92,8,1);
            auVar36._0_4_ = auVar60._0_4_ * auVar113._0_4_ - auVar92._0_4_ * auVar114._0_4_;
            auVar36._4_4_ = auVar60._4_4_ * auVar113._4_4_ - auVar92._4_4_ * auVar114._4_4_;
            auVar36._8_4_ = auVar60._8_4_ * auVar113._8_4_ - auVar92._8_4_ * auVar114._8_4_;
            auVar36._12_4_ = auVar60._12_4_ * auVar113._12_4_ - auVar92._12_4_ * auVar114._12_4_;
            auVar60 = NEON_ext(auVar36,auVar36,0xc,1);
            auVar60 = NEON_ext(auVar60,auVar36,8,1);
            auVar37._0_4_ = *pfVar6 * auVar60._0_4_;
            auVar37._4_4_ = *(float *)(lVar2 + 0x14) * auVar60._4_4_;
            auVar37._8_4_ = *(float *)(lVar2 + 0x18) * auVar60._8_4_;
            auVar37._12_4_ = *(float *)(lVar2 + 0x1c) * 0.0;
            auVar60 = NEON_ext(auVar37,auVar37,8,1);
            if (0.0 < fVar56 * (auVar37._0_4_ + auVar37._4_4_ + auVar60._0_4_)) {
              pfVar11 = (&pfStack_c0)[uVar20];
              param_4 = afStack_100;
              param_5 = (undefined1 (*) [16])&uStack_154;
              uVar32 = FUN_10981f30c((&pfStack_c0)[lVar16],pfVar11,pfVar6);
              if (((float)uStack_170 < 0.0) || (bVar5 = (float)uVar32 < (float)uStack_170, bVar5)) {
                afStack_150[lVar16] = afStack_100[0];
                afStack_150[uVar20] = afStack_100[1];
                uStack_188 = (1 << (ulong)(uVar23 & 0x1f) & (int)(uStack_154 << 0x1e) >> 0x1f) +
                             (uStack_154 & 4) * 2 +
                             (-(uStack_154 & 1) & 1 << (ulong)((uint)lVar16 & 0x1f));
                afStack_150[*(uint *)(&UNK_10e001e58 + uVar20 * 4)] = 0.0;
                afStack_150[3] = afStack_100[2];
                uStack_170 = uVar32;
                uStack_168 = extraout_var_00;
              }
            }
            lVar19 = lStack_1a8;
            lVar16 = lVar16 + 1;
          } while (lVar16 != 3);
          uStack_158 = uStack_188;
          if ((float)uStack_170 < 0.0) {
            uStack_158 = 0xf;
            fVar104 = (float)FUN_10981f760(lStack_1a8,lStack_198,pfVar6);
            pfVar11 = pfStack_1a0;
            afStack_150[0] = fVar104 / fVar56;
            fVar31 = (float)FUN_10981f760(pfStack_1a0,lVar19,pfVar6);
            afStack_150[1] = fVar31 / fVar56;
            fVar89 = (float)FUN_10981f760(lStack_198,pfVar11,pfVar6);
            afStack_150[2] = fVar89 / fVar56;
            afStack_150[3] = 1.0 - (fVar104 / fVar56 + fVar31 / fVar56 + fVar89 / fVar56);
            uStack_168 = 0;
            uStack_170 = 0;
          }
        }
      }
      uVar25 = (ulong)uStack_18c;
    }
    else if (iVar57 == 3) {
      pfVar11 = (float *)(unaff_x27[1] + 0x10);
      param_4 = afStack_150;
      param_5 = (undefined1 (*) [16])&uStack_158;
      uStack_170 = FUN_10981f30c(*unaff_x27 + 0x10,pfVar11,unaff_x27[2] + 0x10);
      uStack_168 = extraout_var;
    }
    else if (iVar57 == 2) {
      lVar16 = *unaff_x27;
      auVar60 = *(undefined1 (*) [16])(unaff_x27[1] + 0x10);
      fVar104 = *(float *)(lVar16 + 0x10);
      fVar31 = *(float *)(lVar16 + 0x14);
      fVar89 = *(float *)(lVar16 + 0x18);
      fVar56 = *(float *)(lVar16 + 0x1c);
      fVar75 = auVar60._0_4_;
      fVar59 = fVar75 - fVar104;
      fVar88 = auVar60._4_4_;
      fVar58 = fVar88 - fVar31;
      fVar105 = auVar60._8_4_;
      fVar74 = fVar105 - fVar89;
      auVar91._0_4_ = fVar59 * fVar59;
      auVar91._4_4_ = fVar58 * fVar58;
      auVar91._8_4_ = fVar74 * fVar74;
      auVar91._12_4_ = 0;
      auVar92 = NEON_ext(auVar91,auVar91,8,1);
      fVar90 = auVar91._0_4_ + auVar91._4_4_ + auVar92._0_4_;
      if (fVar90 <= 0.0) goto LAB_10981e9d4;
      auVar96._0_4_ = fVar104 * fVar59;
      auVar96._4_4_ = fVar31 * fVar58;
      auVar96._8_4_ = fVar89 * fVar74;
      auVar96._12_4_ = fVar56 * 0.0;
      auVar92 = NEON_ext(auVar96,auVar96,8,1);
      afStack_150[1] = -(auVar92._0_4_ + auVar96._0_4_ + auVar96._4_4_) / fVar90;
      if (1.0 <= afStack_150[1]) {
        afStack_150[0] = 0.0;
        afStack_150[1] = 1.0;
        uStack_158 = 2;
        auVar38._0_4_ = fVar75 * fVar75;
        auVar38._4_4_ = fVar88 * fVar88;
        auVar38._8_4_ = fVar105 * fVar105;
        auVar38._12_4_ = auVar60._12_4_ * auVar60._12_4_;
      }
      else {
        if (afStack_150[1] <= 0.0) {
          afStack_150[0] = 1.0;
          afStack_150[1] = 0.0;
          uStack_158 = 1;
        }
        else {
          afStack_150[0] = 1.0 - afStack_150[1];
          uStack_158 = 3;
          fVar104 = fVar104 + fVar59 * afStack_150[1];
          fVar31 = fVar31 + fVar58 * afStack_150[1];
          fVar89 = fVar89 + fVar74 * afStack_150[1];
          fVar56 = fVar56 + 0.0;
        }
        auVar38._0_4_ = fVar104 * fVar104;
        auVar38._4_4_ = fVar31 * fVar31;
        auVar38._8_4_ = fVar89 * fVar89;
        auVar38._12_4_ = fVar56 * fVar56;
      }
      auVar60 = NEON_ext(auVar38,auVar38,8,1);
      uStack_170 = CONCAT44(auVar38._0_4_ + auVar38._4_4_ + auVar60._4_4_,
                            auVar38._0_4_ + auVar38._4_4_ + auVar60._0_4_);
      uStack_168 = 0;
    }
    if ((float)uStack_170 < 0.0) goto LAB_10981e9d4;
    *(undefined4 *)(unaff_x21 + 6) = 0;
    param_1[0x13] = 0;
    param_1[0x12] = 0;
    *(uint *)((long)param_1 + 0x1c4) = uVar4;
    uVar23 = *(uint *)(unaff_x27 + 6);
    auVar60 = ZEXT216(0);
    if (uVar23 != 0) {
      uVar22 = 0;
      uVar20 = 0;
      do {
        lVar16 = unaff_x27[uVar20];
        if ((uStack_158 >> (ulong)((uint)uVar20 & 0x1f) & 1) == 0) {
          uVar4 = *(uint *)(param_1 + 0x38);
          *(uint *)(param_1 + 0x38) = uVar4 + 1;
          puVar1[uVar4] = lVar16;
        }
        else {
          unaff_x21[uVar22] = lVar16;
          fVar104 = afStack_150[uVar20];
          *(float *)((long)unaff_x21 + uVar22 * 4 + 0x20) = fVar104;
          uVar4 = (int)uVar22 + 1;
          uVar22 = (ulong)uVar4;
          *(uint *)(unaff_x21 + 6) = uVar4;
          auVar92 = *(undefined1 (*) [16])(lVar16 + 0x10);
          auVar39._0_8_ =
               CONCAT44(auVar60._4_4_ + auVar92._4_4_ * fVar104,
                        auVar60._0_4_ + auVar92._0_4_ * fVar104);
          auVar39._8_4_ = auVar60._8_4_ + auVar92._8_4_ * fVar104;
          auVar39._12_4_ = auVar60._12_4_ + 0.0;
          param_1[0x13] = auVar39._8_8_;
          param_1[0x12] = auVar39._0_8_;
          auVar60._8_8_ = auVar39._8_8_;
          auVar60._0_8_ = auVar39._0_8_;
        }
        uVar20 = uVar20 + 1;
      } while (uVar23 != uVar20);
    }
    if (uStack_158 == 0xf) {
      *(undefined4 *)(param_1 + 0x3a) = 1;
    }
    if (iStack_184 == 0x7f) {
      *(undefined4 *)(param_1 + 0x3a) = 2;
      param_1[0x39] = unaff_x21;
      goto LAB_10981ea40;
    }
    iVar57 = iStack_184 + 1;
    iVar3 = *(int *)(param_1 + 0x3a);
    uVar20 = uVar27;
  } while (iVar3 == 0);
  param_1[0x39] = plVar26 + uVar27 * 7;
  if (iVar3 == 1) {
    *(undefined4 *)(param_1 + 0x14) = 0;
  }
  else if (iVar3 == 0) {
    auVar40._0_4_ = *(float *)(param_1 + 0x12) * *(float *)(param_1 + 0x12);
    auVar40._4_4_ = *(float *)((long)param_1 + 0x94) * *(float *)((long)param_1 + 0x94);
    auVar40._8_4_ = *(float *)(param_1 + 0x13) * *(float *)(param_1 + 0x13);
    auVar40._12_4_ = *(float *)((long)param_1 + 0x9c) * *(float *)((long)param_1 + 0x9c);
    auVar60 = NEON_ext(auVar40,auVar40,8,1);
    *(float *)(param_1 + 0x14) = SQRT(auVar40._0_4_ + auVar40._4_4_ + auVar60._0_4_);
  }
LAB_10981ea40:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_a0) {
    return;
  }
  ___stack_chk_fail();
  uStack_210 = 1;
  uStack_1d0 = 3;
  pcStack_1b8 = FUN_10981eaa8;
  uStack_220 = 0xb8d1b717;
  uStack_218 = 0x38d1b717;
  plStack_208 = unaff_x27;
  uStack_200 = uVar27;
  plStack_1f8 = plVar26;
  puStack_1f0 = puVar1;
  puStack_1e8 = &uStack_140;
  uStack_1e0 = uVar25;
  plStack_1d8 = unaff_x21;
  puStack_1c8 = param_1;
  puStack_1c0 = &stack0xfffffffffffffff0;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lStack_238 = *(long *)PTR____stack_chk_guard_11034bdc0;
  piVar13 = param_6;
  FUN_10981e220();
  uStack_390 = 0;
  uStack_388 = 0;
  uStack_250 = 2;
  uStack_260 = 0;
  uStack_380 = 0;
  uStack_74ac = (*param_5)[4];
  uStack_74ab = (*param_5)[5];
  uStack_74aa = (*param_5)[6];
  bStack_74a9 = (*param_5)[7] ^ 0x80;
  auStack_74a8[0] = *(ulong *)(*param_5 + 8) ^ 0x8000000080000000;
  uStack_74b0 = *(uint *)*param_5 ^ 0x80000000;
  iVar57 = (int)auStack_420;
  pauVar21 = (undefined1 (*) [16])alStack_7560;
  pauVar12 = (undefined1 (*) [16])&uStack_74b0;
  FUN_10981e308();
  if (iVar57 == 2) {
    pfVar6 = (float *)0x0;
    *param_6 = 2;
    goto LAB_10981f134;
  }
  pfVar6 = (float *)0x0;
  if (iVar57 != 1) goto LAB_10981f134;
  puVar17 = (undefined1 *)0x0;
  lVar16 = 0;
  pauStack_448 = (undefined1 (*) [16])0x0;
  iStack_440 = 0;
  uStack_74b0 = 9;
  uStack_450 = 0;
  uStack_7470 = 0;
  uStack_7468 = 0;
  lVar19 = 0x6000;
  fStack_7460 = 0.0;
  do {
    pauStack_438 = (undefined1 (*) [16])(auStack_64b0 + lVar19);
    *(undefined8 *)((long)auStack_6468 + lVar19) = 0;
    *(undefined1 **)((long)auStack_6468 + lVar19 + 8) = puVar17;
    if (puVar17 != (undefined1 *)0x0) {
      *(undefined1 (**) [16])(puVar17 + 0x48) = pauStack_438;
    }
    puVar17 = auStack_6450 + (0xffU - lVar16 & 0xffffffff) * 0x60;
    lVar16 = lVar16 + 1;
    lVar19 = lVar19 + -0x60;
  } while (lVar19 != 0);
  iStack_430 = 0x100;
  auVar77 = *param_5;
  if ((uint)puStack_258[6] < 2) {
LAB_10981efac:
    uStack_74b0 = 8;
    fVar31 = auVar77._0_4_;
    auVar42._0_4_ = fVar31 * fVar31;
    fVar89 = auVar77._4_4_;
    auVar42._4_4_ = fVar89 * fVar89;
    fVar56 = auVar77._8_4_;
    auVar42._8_4_ = fVar56 * fVar56;
    auVar42._12_4_ = auVar77._12_4_ * auVar77._12_4_;
    auVar60 = NEON_ext(auVar42,auVar42,8,1);
    fVar104 = auVar60._0_4_ + auVar42._0_4_ + auVar42._4_4_;
    auVar43 = _UNK_10ded9720;
    if (0.0 < fVar104) {
      fVar104 = 1.0 / SQRT(fVar104);
      auVar43._0_4_ = fVar31 * fVar104;
      auVar43._4_4_ = fVar89 * fVar104;
      auVar43._8_4_ = fVar56 * fVar104;
      auVar43._12_4_ = 0;
    }
    uStack_7468 = auVar43._8_8_;
    uStack_7470 = auVar43._0_8_;
    fStack_7460 = 0.0;
    uStack_7478 = 1;
    auStack_74a8[0] = *puStack_258;
    afStack_7488[0] = 1.0;
  }
  else {
    iVar57 = (int)auStack_420;
    fStack_7568 = auVar77._8_4_;
    fStack_7564 = auVar77._12_4_;
    fStack_7570 = auVar77._0_4_;
    fStack_756c = auVar77._4_4_;
    FUN_10981f7ac();
    auVar77._4_4_ = fStack_756c;
    auVar77._0_4_ = fStack_7570;
    auVar77._8_4_ = fStack_7568;
    auVar77._12_4_ = fStack_7564;
    pauVar21 = pauStack_448;
    if (iVar57 == 0) goto LAB_10981efac;
    while (pauStack_448 = pauVar21, pauStack_448 != (undefined1 (*) [16])0x0) {
      lVar16 = *(long *)(pauStack_448[4] + 8);
      if (*(long *)pauStack_448[5] != 0) {
        *(long *)(*(long *)pauStack_448[5] + 0x48) = lVar16;
      }
      if (lVar16 != 0) {
        *(undefined8 *)(lVar16 + 0x50) = *(undefined8 *)pauStack_448[5];
      }
      pauVar21 = *(undefined1 (**) [16])pauStack_448[5];
      *(undefined8 *)(pauStack_448[4] + 8) = 0;
      *(undefined1 (**) [16])pauStack_448[5] = pauStack_438;
      if (pauStack_438 != (undefined1 (*) [16])0x0) {
        *(undefined1 (**) [16])(pauStack_438[4] + 8) = pauStack_448;
      }
      iStack_430 = iStack_430 + 1;
      iStack_440 = iStack_440 + -1;
      pauStack_438 = pauStack_448;
    }
    uStack_74b0 = 0;
    uStack_450 = 0;
    uVar20 = puStack_258[2];
    uVar25 = puStack_258[3];
    fVar104 = *(float *)(uVar25 + 0x10);
    fVar31 = *(float *)(uVar25 + 0x14);
    fVar89 = *(float *)(uVar25 + 0x18);
    uVar25 = *puStack_258;
    uVar27 = puStack_258[1];
    fVar56 = *(float *)(uVar25 + 0x10) - fVar104;
    fVar59 = *(float *)(uVar25 + 0x14) - fVar31;
    fVar58 = *(float *)(uVar25 + 0x18) - fVar89;
    fVar74 = *(float *)(uVar27 + 0x10) - fVar104;
    fVar75 = *(float *)(uVar27 + 0x14) - fVar31;
    fVar88 = *(float *)(uVar27 + 0x18) - fVar89;
    fVar104 = *(float *)(uVar20 + 0x10) - fVar104;
    fVar31 = *(float *)(uVar20 + 0x14) - fVar31;
    fVar89 = *(float *)(uVar20 + 0x18) - fVar89;
    uVar22 = uVar25;
    if (fVar74 * fVar58 * fVar31 + fVar104 * fVar59 * fVar88 + -fVar56 * fVar88 * fVar31 +
        -fVar59 * fVar74 * fVar89 + fVar56 * fVar75 * fVar89 + fVar104 * -fVar58 * fVar75 < 0.0) {
      *puStack_258 = uVar27;
      puStack_258[1] = uVar25;
      uVar22 = NEON_rev64(puStack_258[4],4);
      puStack_258[4] = uVar22;
      uVar22 = uVar27;
      uVar27 = uVar25;
    }
    puVar7 = &uStack_74b0;
    FUN_10981fbe0(puVar7,uVar22,uVar27,uVar20,1);
    puVar8 = &uStack_74b0;
    FUN_10981fbe0(puVar8,puStack_258[1],*puStack_258,puStack_258[3],1);
    puVar9 = &uStack_74b0;
    FUN_10981fbe0(puVar9,puStack_258[2],puStack_258[1],puStack_258[3],1);
    pauVar21 = (undefined1 (*) [16])*puStack_258;
    pauVar12 = (undefined1 (*) [16])puStack_258[2];
    param_4 = (float *)puStack_258[3];
    puVar10 = &uStack_74b0;
    piVar13 = (int *)0x1;
    FUN_10981fbe0();
    auVar77._4_4_ = fStack_756c;
    auVar77._0_4_ = fStack_7570;
    auVar77._8_4_ = fStack_7568;
    auVar77._12_4_ = fStack_7564;
    if (iStack_440 != 4) goto LAB_10981efac;
    pauVar14 = *(undefined1 (**) [16])pauStack_448[5];
    pauVar30 = pauStack_448;
    if (pauVar14 != (undefined1 (*) [16])0x0) {
      fVar104 = *(float *)pauStack_448[1] * *(float *)pauStack_448[1];
      pauVar28 = pauStack_448;
      do {
        fVar31 = *(float *)pauVar14[1] * *(float *)pauVar14[1];
        pauVar30 = pauVar14;
        if (fVar104 <= fVar31) {
          pauVar30 = pauVar28;
          fVar31 = fVar104;
        }
        fVar104 = fVar31;
        pauVar14 = *(undefined1 (**) [16])pauVar14[5];
        pauVar28 = pauVar30;
      } while (pauVar14 != (undefined1 (*) [16])0x0);
    }
    pauVar14 = (undefined1 (*) [16])0x0;
    auVar63 = *pauVar30;
    fVar104 = *(float *)pauVar30[1];
    uVar20 = *(ulong *)(pauVar30[1] + 8);
    auStack_74a8[1] = *(ulong *)pauVar30[2];
    lVar16 = *(long *)(pauVar30[2] + 8);
    *(undefined1 *)(puVar7 + 0x16) = 0;
    *(uint **)(puVar7 + 0xc) = puVar8;
    *(undefined1 *)(puVar8 + 0x16) = 0;
    *(uint **)(puVar8 + 0xc) = puVar7;
    *(undefined1 *)((long)puVar7 + 0x59) = 0;
    *(uint **)(puVar7 + 0xe) = puVar9;
    *(undefined1 *)(puVar9 + 0x16) = 1;
    *(uint **)(puVar9 + 0xc) = puVar7;
    *(undefined1 *)((long)puVar7 + 0x5a) = 0;
    *(uint **)(puVar7 + 0x10) = puVar10;
    *(undefined1 *)(puVar10 + 0x16) = 2;
    *(uint **)(puVar10 + 0xc) = puVar7;
    *(undefined1 *)((long)puVar8 + 0x59) = 2;
    *(uint **)(puVar8 + 0xe) = puVar10;
    *(undefined1 *)((long)puVar10 + 0x5a) = 1;
    *(uint **)(puVar10 + 0x10) = puVar8;
    *(undefined1 *)((long)puVar8 + 0x5a) = 1;
    *(uint **)(puVar8 + 0x10) = puVar9;
    *(undefined2 *)((long)puVar9 + 0x59) = 0x102;
    *(uint **)(puVar9 + 0xe) = puVar8;
    *(uint **)(puVar9 + 0x10) = puVar10;
    *(undefined1 *)((long)puVar10 + 0x59) = 2;
    *(uint **)(puVar10 + 0xe) = puVar9;
    uStack_74b0 = 0;
    do {
      pauVar28 = pauVar30;
      uVar25 = (ulong)uStack_450;
      if (0x7f < uStack_450) {
        uStack_74b0 = 6;
        break;
      }
      uStack_7588 = 0;
      uStack_7578 = auVar63._8_8_;
      uStack_7580 = auVar63._0_8_;
      fStack_7568 = (float)auStack_74a8[1];
      fStack_7564 = (float)(auStack_74a8[1] >> 0x20);
      fStack_7570 = (float)uVar20;
      fStack_756c = (float)(uVar20 >> 0x20);
      uStack_74d0 = 0;
      lStack_74c8 = 0;
      uStack_74c0 = 0;
      uStack_450 = uStack_450 + 1;
      uVar23 = (int)pauVar14 + 1;
      pauVar14 = (undefined1 (*) [16])(ulong)uVar23;
      pauVar28[5][0xb] = (char)uVar23;
      pauVar21 = (undefined1 (*) [16])(auStack_7450 + uVar25 * 0x20);
      uStack_7590 = (ulong)(uint)fVar104;
      FUN_10981f61c(*(undefined8 *)*pauVar28,auStack_420);
      auVar41._0_4_ = *(float *)*pauVar28 * afStack_7440[uVar25 * 8];
      auVar41._4_4_ = *(float *)(*pauVar28 + 4) * afStack_7440[uVar25 * 8 + 1];
      auVar41._8_4_ = *(float *)(*pauVar28 + 8) * afStack_7440[uVar25 * 8 + 2];
      auVar41._12_4_ = *(float *)(*pauVar28 + 0xc) * afStack_7440[uVar25 * 8 + 3];
      auVar60 = NEON_ext(auVar41,auVar41,8,1);
      if ((auVar41._0_4_ + auVar41._4_4_ + auVar60._0_4_) - *(float *)pauVar28[1] <= 0.0001) {
        uStack_74b0 = 7;
LAB_10981f18c:
        auVar63._8_8_ = uStack_7578;
        auVar63._0_8_ = uStack_7580;
        uVar20 = CONCAT44(fStack_756c,fStack_7570);
        auStack_74a8[1] = CONCAT44(fStack_7564,fStack_7568);
        fVar104 = (float)uStack_7590;
        break;
      }
      uVar20 = 0;
      do {
        param_4 = *(float **)(pauVar28[3] + uVar20 * 8);
        piVar13 = (int *)(ulong)(byte)pauVar28[5][uVar20 + 8];
        uVar27 = 0;
        pauVar21 = pauVar14;
        pauVar12 = (undefined1 (*) [16])(auStack_7450 + uVar25 * 0x20);
        FUN_10981fe14();
        if (1 < uVar20) break;
        uVar20 = uVar20 + 1;
      } while ((uVar27 & 1) != 0);
      uVar4 = 0;
      if (2 < uStack_74c0) {
        uVar4 = (uint)uVar27;
      }
      if ((uVar4 & 1) == 0) {
        uStack_74b0 = 4;
        goto LAB_10981f18c;
      }
      *(undefined1 *)(uStack_74d0 + 0x59) = 2;
      *(long *)(uStack_74d0 + 0x38) = lStack_74c8;
      *(undefined1 *)(lStack_74c8 + 0x5a) = 1;
      *(long *)(lStack_74c8 + 0x40) = uStack_74d0;
      lVar16 = *(long *)(pauVar28[4] + 8);
      if (*(long *)pauVar28[5] != 0) {
        *(long *)(*(long *)pauVar28[5] + 0x48) = lVar16;
      }
      if (lVar16 != 0) {
        *(undefined8 *)(lVar16 + 0x50) = *(undefined8 *)pauVar28[5];
      }
      if (pauStack_448 == pauVar28) {
        pauStack_448 = *(undefined1 (**) [16])pauVar28[5];
      }
      iStack_440 = iStack_440 + -1;
      *(undefined8 *)(pauVar28[4] + 8) = 0;
      *(undefined1 (**) [16])pauVar28[5] = pauStack_438;
      if (pauStack_438 != (undefined1 (*) [16])0x0) {
        *(undefined1 (**) [16])(pauStack_438[4] + 8) = pauVar28;
      }
      iStack_430 = iStack_430 + 1;
      pauVar15 = *(undefined1 (**) [16])pauStack_448[5];
      pauVar30 = pauStack_448;
      if (pauVar15 != (undefined1 (*) [16])0x0) {
        fVar104 = *(float *)pauStack_448[1] * *(float *)pauStack_448[1];
        pauVar29 = pauStack_448;
        do {
          fVar31 = *(float *)pauVar15[1] * *(float *)pauVar15[1];
          pauVar30 = pauVar15;
          if (fVar104 <= fVar31) {
            pauVar30 = pauVar29;
            fVar31 = fVar104;
          }
          fVar104 = fVar31;
          pauVar15 = *(undefined1 (**) [16])pauVar15[5];
          pauVar29 = pauVar30;
        } while (pauVar15 != (undefined1 (*) [16])0x0);
      }
      auVar63 = *pauVar30;
      fVar104 = *(float *)pauVar30[1];
      uVar20 = *(ulong *)(pauVar30[1] + 8);
      auStack_74a8[1] = *(ulong *)pauVar30[2];
      lVar16 = *(long *)(pauVar30[2] + 8);
      pauStack_438 = pauVar28;
    } while (uVar23 != 0xff);
    fVar31 = auVar63._0_4_ * fVar104;
    fVar89 = auVar63._4_4_ * fVar104;
    fVar56 = auVar63._8_4_ * fVar104;
    uStack_7468 = auVar63._8_8_;
    uStack_7470 = auVar63._0_8_;
    fStack_7460 = fVar104;
    uStack_7478 = 3;
    auStack_74a8[0] = uVar20;
    auStack_74a8[2] = lVar16;
    auVar65._0_4_ = *(float *)(auStack_74a8[1] + 0x10) - fVar31;
    auVar65._4_4_ = *(float *)(auStack_74a8[1] + 0x14) - fVar89;
    auVar65._8_4_ = *(float *)(auStack_74a8[1] + 0x18) - fVar56;
    auVar65._12_4_ = 0;
    auVar79._0_4_ = *(float *)(lVar16 + 0x10) - fVar31;
    auVar79._4_4_ = *(float *)(lVar16 + 0x14) - fVar89;
    auVar79._8_4_ = *(float *)(lVar16 + 0x18) - fVar56;
    auVar79._12_4_ = 0;
    auVar60 = NEON_ext(auVar65,auVar65,0xc,1);
    auVar60 = NEON_ext(auVar60,auVar65,8,1);
    auVar92 = NEON_ext(auVar79,auVar79,0xc,1);
    auVar92 = NEON_ext(auVar92,auVar79,8,1);
    auVar66._0_4_ = auVar92._0_4_ * auVar65._0_4_ - auVar60._0_4_ * auVar79._0_4_;
    auVar66._4_4_ = auVar92._4_4_ * auVar65._4_4_ - auVar60._4_4_ * auVar79._4_4_;
    auVar66._8_4_ = auVar92._8_4_ * auVar65._8_4_ - auVar60._8_4_ * auVar79._8_4_;
    auVar66._12_4_ = auVar92._12_4_ * 0.0 - auVar60._12_4_ * 0.0;
    auVar60 = NEON_ext(auVar66,auVar66,0xc,1);
    auVar60 = NEON_ext(auVar60,auVar66,8,1);
    auVar67._0_4_ = auVar60._0_4_ * auVar60._0_4_;
    auVar67._4_4_ = auVar60._4_4_ * auVar60._4_4_;
    auVar67._8_4_ = auVar60._8_4_ * auVar60._8_4_;
    auVar67._12_4_ = 0;
    auVar60 = NEON_ext(auVar67,auVar67,8,1);
    fVar59 = SQRT(auVar67._0_4_ + auVar67._4_4_ + auVar60._0_4_);
    auVar80._0_4_ = *(float *)(lVar16 + 0x10) - fVar31;
    auVar80._4_4_ = *(float *)(lVar16 + 0x14) - fVar89;
    auVar80._8_4_ = *(float *)(lVar16 + 0x18) - fVar56;
    auVar80._12_4_ = 0;
    auVar93._0_4_ = *(float *)(uVar20 + 0x10) - fVar31;
    auVar93._4_4_ = *(float *)(uVar20 + 0x14) - fVar89;
    auVar93._8_4_ = *(float *)(uVar20 + 0x18) - fVar56;
    auVar93._12_4_ = 0;
    auVar60 = NEON_ext(auVar80,auVar80,0xc,1);
    auVar60 = NEON_ext(auVar60,auVar80,8,1);
    auVar92 = NEON_ext(auVar93,auVar93,0xc,1);
    auVar92 = NEON_ext(auVar92,auVar93,8,1);
    auVar81._0_4_ = auVar92._0_4_ * auVar80._0_4_ - auVar60._0_4_ * auVar93._0_4_;
    auVar81._4_4_ = auVar92._4_4_ * auVar80._4_4_ - auVar60._4_4_ * auVar93._4_4_;
    auVar81._8_4_ = auVar92._8_4_ * auVar80._8_4_ - auVar60._8_4_ * auVar93._8_4_;
    auVar81._12_4_ = auVar92._12_4_ * 0.0 - auVar60._12_4_ * 0.0;
    auVar60 = NEON_ext(auVar81,auVar81,0xc,1);
    auVar60 = NEON_ext(auVar60,auVar81,8,1);
    auVar82._0_4_ = auVar60._0_4_ * auVar60._0_4_;
    auVar82._4_4_ = auVar60._4_4_ * auVar60._4_4_;
    auVar82._8_4_ = auVar60._8_4_ * auVar60._8_4_;
    auVar82._12_4_ = 0;
    auVar60 = NEON_ext(auVar82,auVar82,8,1);
    fVar58 = SQRT(auVar82._0_4_ + auVar82._4_4_ + auVar60._0_4_);
    auVar94._0_4_ = *(float *)(uVar20 + 0x10) - fVar31;
    auVar94._4_4_ = *(float *)(uVar20 + 0x14) - fVar89;
    auVar94._8_4_ = *(float *)(uVar20 + 0x18) - fVar56;
    auVar94._12_4_ = 0;
    auVar46._0_4_ = *(float *)(auStack_74a8[1] + 0x10) - fVar31;
    auVar46._4_4_ = *(float *)(auStack_74a8[1] + 0x14) - fVar89;
    auVar46._8_4_ = *(float *)(auStack_74a8[1] + 0x18) - fVar56;
    auVar46._12_4_ = 0;
    auVar60 = NEON_ext(auVar94,auVar94,0xc,1);
    auVar60 = NEON_ext(auVar60,auVar94,8,1);
    auVar92 = NEON_ext(auVar46,auVar46,0xc,1);
    auVar92 = NEON_ext(auVar92,auVar46,8,1);
    auVar47._0_4_ = auVar92._0_4_ * auVar94._0_4_ - auVar60._0_4_ * auVar46._0_4_;
    auVar47._4_4_ = auVar92._4_4_ * auVar94._4_4_ - auVar60._4_4_ * auVar46._4_4_;
    auVar47._8_4_ = auVar92._8_4_ * auVar94._8_4_ - auVar60._8_4_ * auVar46._8_4_;
    auVar47._12_4_ = auVar92._12_4_ * 0.0 - auVar60._12_4_ * 0.0;
    auVar60 = NEON_ext(auVar47,auVar47,0xc,1);
    auVar60 = NEON_ext(auVar60,auVar47,8,1);
    auVar48._0_4_ = auVar60._0_4_ * auVar60._0_4_;
    auVar48._4_4_ = auVar60._4_4_ * auVar60._4_4_;
    auVar48._8_4_ = auVar60._8_4_ * auVar60._8_4_;
    auVar48._12_4_ = 0;
    auVar60 = NEON_ext(auVar48,auVar48,8,1);
    fVar104 = SQRT(auVar48._0_4_ + auVar48._4_4_ + auVar60._0_4_);
    fVar31 = fVar59 + fVar58 + fVar104;
    afStack_7488[0] = fVar59 / fVar31;
    afStack_7488[1] = fVar58 / fVar31;
    afStack_7488[2] = fVar104 / fVar31;
    if (uStack_74b0 == 9) {
      pfVar6 = (float *)0x0;
      *param_6 = 3;
      goto LAB_10981f134;
    }
  }
  uVar20 = 0;
  plVar26 = (long *)(alStack_7560[0] + ((long)uStack_74d8 >> 1));
  auVar102 = ZEXT316(0);
  do {
    fStack_7568 = auVar102._8_4_;
    fStack_7564 = auVar102._12_4_;
    fStack_7570 = auVar102._0_4_;
    fStack_756c = auVar102._4_4_;
    pcVar18 = pcStack_74e0;
    if ((uStack_74d8 & 1) != 0) {
      pcVar18 = *(code **)(*plVar26 + ((ulong)pcStack_74e0 & 0xffffffff));
    }
    pauVar21 = (undefined1 (*) [16])auStack_74a8[uVar20];
    (*pcVar18)(&uStack_74d0,plVar26);
    fVar104 = afStack_7488[uVar20];
    auVar102._0_4_ = fStack_7570 + (float)uStack_74d0 * fVar104;
    auVar102._4_4_ = fStack_756c + uStack_74d0._4_4_ * fVar104;
    auVar102._8_4_ = fStack_7568 + (float)lStack_74c8 * fVar104;
    auVar102._12_4_ = fStack_7564 + 0.0;
    uVar20 = uVar20 + 1;
  } while (uVar20 < uStack_7478);
                    /* WARNING: Read-only address (ram,0x00010ded9720) is written */
  pfVar6 = (float *)0x1;
  *param_6 = 1;
  auVar44._0_4_ = auVar102._0_4_ * *pfVar11;
  auVar44._4_4_ = auVar102._4_4_ * pfVar11[1];
  auVar44._8_4_ = auVar102._8_4_ * pfVar11[2];
  auVar44._12_4_ = auVar102._12_4_ * pfVar11[3];
  auVar64._0_4_ = auVar102._0_4_ * pfVar11[4];
  auVar64._4_4_ = auVar102._4_4_ * pfVar11[5];
  auVar64._8_4_ = auVar102._8_4_ * pfVar11[6];
  auVar64._12_4_ = auVar102._12_4_ * pfVar11[7];
  fVar104 = pfVar11[0xc];
  fVar31 = pfVar11[0xd];
  fVar89 = pfVar11[0xf];
  auVar78._0_4_ = auVar102._0_4_ * pfVar11[8];
  auVar78._4_4_ = auVar102._4_4_ * pfVar11[9];
  auVar78._8_4_ = auVar102._8_4_ * pfVar11[10];
  auVar92 = NEON_ext(auVar44,auVar44,8,1);
  auVar114 = NEON_ext(auVar64,auVar64,8,1);
  auVar78._12_4_ = 0;
  auVar60 = NEON_ext(auVar78,auVar78,8,1);
  param_6[6] = (int)(auVar78._0_4_ + auVar78._4_4_ + auVar60._0_4_ + auVar60._4_4_ + pfVar11[0xe]);
  param_6[7] = (int)(fVar89 + 0.0);
  param_6[4] = (int)(auVar44._0_4_ + auVar44._4_4_ + auVar92._0_4_ + fVar104);
  param_6[5] = (int)(auVar64._0_4_ + auVar64._4_4_ + auVar114._0_4_ + fVar31);
  fVar56 = auVar102._0_4_ - (float)uStack_7470 * fStack_7460;
  fVar59 = auVar102._4_4_ - uStack_7470._4_4_ * fStack_7460;
  fVar58 = auVar102._8_4_ - (float)uStack_7468 * fStack_7460;
  fVar104 = pfVar11[0xc];
  fVar31 = pfVar11[0xd];
  fVar89 = pfVar11[0xf];
  auVar97._0_4_ = pfVar11[8] * fVar56;
  auVar97._4_4_ = pfVar11[9] * fVar59;
  auVar97._8_4_ = pfVar11[10] * fVar58;
  auVar103._0_4_ = *pfVar11 * fVar56;
  auVar103._4_4_ = pfVar11[1] * fVar59;
  auVar103._8_4_ = pfVar11[2] * fVar58;
  auVar103._12_4_ = pfVar11[3] * 0.0;
  auVar45._0_4_ = pfVar11[4] * fVar56;
  auVar45._4_4_ = pfVar11[5] * fVar59;
  auVar45._8_4_ = pfVar11[6] * fVar58;
  auVar45._12_4_ = pfVar11[7] * 0.0;
  auVar92 = NEON_ext(auVar103,auVar103,8,1);
  auVar114 = NEON_ext(auVar45,auVar45,8,1);
  auVar97._12_4_ = 0;
  auVar60 = NEON_ext(auVar97,auVar97,8,1);
  param_6[10] = (int)(pfVar11[0xe] + auVar97._0_4_ + auVar97._4_4_ + auVar60._0_4_ + auVar60._4_4_);
  param_6[0xb] = (int)(fVar89 + 0.0);
  param_6[8] = (int)(fVar104 + auVar103._0_4_ + auVar103._4_4_ + auVar92._0_4_);
  param_6[9] = (int)(fVar31 + auVar45._0_4_ + auVar45._4_4_ + auVar114._0_4_);
  param_6[0xe] = (int)-(float)uStack_7468;
  param_6[0xf] = (int)-uStack_7468._4_4_;
  param_6[0xc] = (int)-(float)uStack_7470;
  param_6[0xd] = (int)-uStack_7470._4_4_;
  param_6[0x10] = (int)-fStack_7460;
LAB_10981f134:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_238) {
    return;
  }
  ___stack_chk_fail();
  ppuStack_75a0 = &puStack_1c0;
  pcStack_7598 = FUN_10981f30c;
  pppuStack_7600 = &ppuStack_75a0;
  lStack_75a8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pfStack_75c0 = pfVar6;
  pauStack_75b8 = pauVar21;
  fVar104 = *pfVar6 - *(float *)*pauVar21;
  fVar31 = pfVar6[1] - *(float *)(*pauVar21 + 4);
  auVar98._0_8_ = CONCAT44(fVar31,fVar104);
  auVar98._8_4_ = pfVar6[2] - *(float *)(*pauVar21 + 8);
  auVar98._12_4_ = 0;
  fVar58 = *(float *)*pauVar21 - *(float *)*pauVar12;
  fVar74 = *(float *)(*pauVar21 + 4) - *(float *)(*pauVar12 + 4);
  auVar83._0_8_ = CONCAT44(fVar74,fVar58);
  auVar83._8_4_ = *(float *)(*pauVar21 + 8) - *(float *)(*pauVar12 + 8);
  auVar83._12_4_ = 0;
  pauStack_75b0 = pauVar12;
  uStack_75e8 = (ulong)(uint)auVar98._8_4_;
  uStack_75f0 = auVar98._0_8_;
  uStack_75d8 = (ulong)(uint)auVar83._8_4_;
  uStack_75e0 = auVar83._0_8_;
  fVar56 = *(float *)*pauVar12 - *pfVar6;
  fVar59 = *(float *)(*pauVar12 + 4) - pfVar6[1];
  auVar68._0_8_ = CONCAT44(fVar59,fVar56);
  auVar68._8_4_ = *(float *)(*pauVar12 + 8) - pfVar6[2];
  auVar68._12_4_ = 0;
  uStack_75c8 = (ulong)(uint)auVar68._8_4_;
  uStack_75d0 = auVar68._0_8_;
  auVar60 = NEON_ext(auVar98,auVar98,0xc,1);
  auVar60 = NEON_ext(auVar60,auVar98,8,1);
  auVar92 = NEON_ext(auVar83,auVar83,0xc,1);
  auVar92 = NEON_ext(auVar92,auVar83,8,1);
  auVar49._0_4_ = auVar92._0_4_ * fVar104 - auVar60._0_4_ * fVar58;
  auVar49._4_4_ = auVar92._4_4_ * fVar31 - auVar60._4_4_ * fVar74;
  auVar49._8_4_ = auVar92._8_4_ * auVar98._8_4_ - auVar60._8_4_ * auVar83._8_4_;
  auVar49._12_4_ = auVar92._12_4_ * 0.0 - auVar60._12_4_ * 0.0;
  auVar60 = NEON_ext(auVar49,auVar49,0xc,1);
  auVar60 = NEON_ext(auVar60,auVar49,8,1);
  auVar99._0_12_ = auVar60._0_12_;
  auVar99._12_4_ = 0;
  fVar104 = auVar60._0_4_;
  auVar50._0_4_ = fVar104 * fVar104;
  fVar31 = auVar60._4_4_;
  auVar50._4_4_ = fVar31 * fVar31;
  fVar89 = auVar60._8_4_;
  auVar50._8_4_ = fVar89 * fVar89;
  auVar50._12_4_ = 0;
  auVar60 = NEON_ext(auVar50,auVar50,8,1);
  fVar75 = auVar50._0_4_ + auVar50._4_4_ + auVar60._0_4_;
  if (0.0 < fVar75) {
    lVar16 = 0;
    uVar23 = 0;
    auVar60 = NEON_ext(auVar99,auVar99,0xc,1);
    auVar60 = NEON_ext(auVar60,auVar99,8,1);
    fVar105 = 0.0;
    fVar88 = -1.0;
    fVar90 = 0.0;
    do {
      pfVar24 = (&pfStack_75c0)[lVar16];
      auVar114 = *(undefined1 (*) [16])(&uStack_75f0 + lVar16 * 2);
      auVar113 = NEON_ext(auVar114,auVar114,0xc,1);
      auVar113 = NEON_ext(auVar113,auVar114,8,1);
      auVar108._0_4_ = auVar60._0_4_ * auVar114._0_4_ - auVar113._0_4_ * fVar104;
      auVar108._4_4_ = auVar60._4_4_ * auVar114._4_4_ - auVar113._4_4_ * fVar31;
      auVar108._8_4_ = auVar60._8_4_ * auVar114._8_4_ - auVar113._8_4_ * fVar89;
      auVar108._12_4_ = auVar60._12_4_ * auVar114._12_4_ - auVar113._12_4_ * 0.0;
      auVar114 = NEON_ext(auVar108,auVar108,0xc,1);
      auVar114 = NEON_ext(auVar114,auVar108,8,1);
      fVar107 = *pfVar24;
      fVar110 = pfVar24[1];
      fVar111 = pfVar24[2];
      fVar101 = pfVar24[3];
      auVar115._0_4_ = fVar107 * auVar114._0_4_;
      auVar115._4_4_ = fVar110 * auVar114._4_4_;
      auVar115._8_4_ = fVar111 * auVar114._8_4_;
      auVar115._12_4_ = fVar101 * 0.0;
      auVar114 = NEON_ext(auVar115,auVar115,8,1);
      if (0.0 < auVar115._0_4_ + auVar115._4_4_ + auVar114._0_4_) {
        uVar4 = *(uint *)(&UNK_10e001e58 + lVar16 * 4);
        uVar20 = (ulong)uVar4;
        uVar123 = *(undefined8 *)((&pfStack_75c0)[uVar20] + 2);
        uVar32 = *(undefined8 *)(&pfStack_75c0)[uVar20];
        fVar120 = (float)uVar32;
        fVar117 = fVar120 - fVar107;
        fVar121 = (float)((ulong)uVar32 >> 0x20);
        fVar118 = fVar121 - fVar110;
        fVar122 = (float)uVar123;
        fVar119 = fVar122 - fVar111;
        auVar116._0_4_ = fVar117 * fVar117;
        auVar116._4_4_ = fVar118 * fVar118;
        auVar116._8_4_ = fVar119 * fVar119;
        auVar116._12_4_ = 0;
        auVar114 = NEON_ext(auVar116,auVar116,8,1);
        fVar124 = auVar116._0_4_ + auVar116._4_4_ + auVar114._0_4_;
        fVar112 = -1.0;
        if (0.0 < fVar124) {
          auVar106._0_4_ = fVar107 * fVar117;
          auVar106._4_4_ = fVar110 * fVar118;
          auVar106._8_4_ = fVar111 * fVar119;
          auVar106._12_4_ = fVar101 * 0.0;
          auVar114 = NEON_ext(auVar106,auVar106,8,1);
          fVar105 = -(auVar114._0_4_ + auVar106._0_4_ + auVar106._4_4_) / fVar124;
          if (1.0 <= fVar105) {
            auVar109._0_4_ = fVar120 * fVar120;
            auVar109._4_4_ = fVar121 * fVar121;
            auVar109._8_4_ = fVar122 * fVar122;
            fVar105 = (float)((ulong)uVar123 >> 0x20);
            auVar109._12_4_ = fVar105 * fVar105;
            fVar105 = 1.0;
            fVar90 = 0.0;
            uVar23 = 2;
          }
          else if (fVar105 <= 0.0) {
            auVar109._0_4_ = fVar107 * fVar107;
            auVar109._4_4_ = fVar110 * fVar110;
            auVar109._8_4_ = fVar111 * fVar111;
            auVar109._12_4_ = fVar101 * fVar101;
            fVar105 = 0.0;
            fVar90 = 1.0;
            uVar23 = 1;
          }
          else {
            fVar90 = 1.0 - fVar105;
            fVar107 = fVar107 + fVar117 * fVar105;
            fVar110 = fVar110 + fVar118 * fVar105;
            fVar111 = fVar111 + fVar119 * fVar105;
            auVar109._0_4_ = fVar107 * fVar107;
            auVar109._4_4_ = fVar110 * fVar110;
            auVar109._8_4_ = fVar111 * fVar111;
            auVar109._12_4_ = (fVar101 + 0.0) * (fVar101 + 0.0);
            uVar23 = 3;
          }
          auVar114 = NEON_ext(auVar109,auVar109,8,1);
          fVar112 = auVar109._0_4_ + auVar109._4_4_ + auVar114._0_4_;
        }
        if ((fVar88 < 0.0) || (fVar112 < fVar88)) {
          param_4[lVar16] = fVar90;
          param_4[uVar20] = fVar105;
          *piVar13 = (-(uVar23 & 1) & 1 << (ulong)((uint)lVar16 & 0x1f)) +
                     (1 << (ulong)(uVar4 & 0x1f) & (int)(uVar23 << 0x1e) >> 0x1f);
          param_4[*(uint *)(&UNK_10e001e58 + uVar20 * 4)] = 0.0;
          fVar88 = fVar112;
        }
      }
      lVar16 = lVar16 + 1;
    } while (lVar16 != 3);
    if (fVar88 < 0.0) {
      auVar51._0_4_ = *pfVar6 * fVar104;
      auVar51._4_4_ = pfVar6[1] * fVar31;
      auVar51._8_4_ = pfVar6[2] * fVar89;
      auVar51._12_4_ = pfVar6[3] * 0.0;
      auVar60 = NEON_ext(auVar51,auVar51,8,1);
      fVar88 = (auVar51._0_4_ + auVar51._4_4_ + auVar60._0_4_) / fVar75;
      fVar104 = fVar104 * fVar88;
      fVar31 = fVar31 * fVar88;
      fVar89 = fVar89 * fVar88;
      *piVar13 = 7;
      auVar100._0_4_ = *(float *)*pauVar21 - fVar104;
      auVar100._4_4_ = *(float *)(*pauVar21 + 4) - fVar31;
      auVar100._8_4_ = *(float *)(*pauVar21 + 8) - fVar89;
      auVar100._12_4_ = 0;
      auVar60 = NEON_ext(auVar100,auVar100,0xc,1);
      auVar60 = NEON_ext(auVar60,auVar100,8,1);
      auVar84._0_4_ = auVar60._0_4_ * fVar58 - auVar92._0_4_ * auVar100._0_4_;
      auVar84._4_4_ = auVar60._4_4_ * fVar74 - auVar92._4_4_ * auVar100._4_4_;
      auVar84._8_4_ = auVar60._8_4_ * auVar83._8_4_ - auVar92._8_4_ * auVar100._8_4_;
      auVar84._12_4_ = auVar60._12_4_ * 0.0 - auVar92._12_4_ * 0.0;
      auVar60 = NEON_ext(auVar84,auVar84,0xc,1);
      auVar60 = NEON_ext(auVar60,auVar84,8,1);
      auVar85._0_4_ = auVar60._0_4_ * auVar60._0_4_;
      auVar85._4_4_ = auVar60._4_4_ * auVar60._4_4_;
      auVar85._8_4_ = auVar60._8_4_ * auVar60._8_4_;
      auVar85._12_4_ = 0;
      auVar60 = NEON_ext(auVar85,auVar85,8,1);
      fVar58 = SQRT(auVar85._0_4_ + auVar85._4_4_ + auVar60._0_4_) / SQRT(fVar75);
      *param_4 = fVar58;
      auVar95._0_4_ = *(float *)*pauVar12 - fVar104;
      auVar95._4_4_ = *(float *)(*pauVar12 + 4) - fVar31;
      auVar95._8_4_ = *(float *)(*pauVar12 + 8) - fVar89;
      auVar52._0_4_ = fVar104 * fVar104;
      auVar52._4_4_ = fVar31 * fVar31;
      auVar52._8_4_ = fVar89 * fVar89;
      auVar52._12_4_ = 0;
      auVar95._12_4_ = 0;
      NEON_ext(auVar52,auVar52,8,1);
      auVar60 = NEON_ext(auVar68,auVar68,0xc,1);
      auVar60 = NEON_ext(auVar60,auVar68,8,1);
      auVar92 = NEON_ext(auVar95,auVar95,0xc,1);
      auVar92 = NEON_ext(auVar92,auVar95,8,1);
      auVar69._0_4_ = auVar92._0_4_ * fVar56 - auVar60._0_4_ * auVar95._0_4_;
      auVar69._4_4_ = auVar92._4_4_ * fVar59 - auVar60._4_4_ * auVar95._4_4_;
      auVar69._8_4_ = auVar92._8_4_ * auVar68._8_4_ - auVar60._8_4_ * auVar95._8_4_;
      auVar69._12_4_ = auVar92._12_4_ * 0.0 - auVar60._12_4_ * 0.0;
      auVar60 = NEON_ext(auVar69,auVar69,0xc,1);
      auVar60 = NEON_ext(auVar60,auVar69,8,1);
      auVar70._0_4_ = auVar60._0_4_ * auVar60._0_4_;
      auVar70._4_4_ = auVar60._4_4_ * auVar60._4_4_;
      auVar70._8_4_ = auVar60._8_4_ * auVar60._8_4_;
      auVar70._12_4_ = 0;
      auVar60 = NEON_ext(auVar70,auVar70,8,1);
      fVar104 = SQRT(auVar70._0_4_ + auVar70._4_4_ + auVar60._0_4_) / SQRT(fVar75);
      param_4[1] = fVar104;
      param_4[2] = 1.0 - (fVar58 + fVar104);
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_75a8) {
    uVar32 = ___stack_chk_fail();
    pcStack_75f8 = FUN_10981f61c;
    fVar104 = (float)uVar32;
    auVar71._0_4_ = fVar104 * fVar104;
    fVar31 = (float)((ulong)uVar32 >> 0x20);
    auVar71._4_4_ = fVar31 * fVar31;
    fVar89 = (float)extraout_var_01;
    auVar71._8_4_ = fVar89 * fVar89;
    fVar56 = (float)((ulong)extraout_var_01 >> 0x20);
    auVar71._12_4_ = fVar56 * fVar56;
    auVar60 = NEON_ext(auVar71,auVar71,8,1);
    fVar56 = 1.0 / SQRT(auVar60._0_4_ + auVar71._0_4_ + auVar71._4_4_);
    *(ulong *)(*pauVar21 + 8) = (ulong)(uint)(fVar89 * fVar56);
    *(ulong *)*pauVar21 = CONCAT44(fVar31 * fVar56,fVar104 * fVar56);
    pcVar18 = *(code **)(pfVar6 + 0x20);
    plVar26 = (long *)(*(long *)pfVar6 + ((long)*(ulong *)(pfVar6 + 0x22) >> 1));
    if ((*(ulong *)(pfVar6 + 0x22) & 1) != 0) {
      pcVar18 = *(code **)(*plVar26 + ((ulong)pcVar18 & 0xffffffff));
    }
    uStack_7620 = 0xb8d1b717;
    uStack_7618 = 0x38d1b717;
    pfStack_7610 = pfVar11;
    piStack_7608 = param_6;
    (*pcVar18)(&fStack_7650,plVar26,pauVar21);
    auVar60 = *pauVar21;
    pcVar18 = *(code **)(pfVar6 + 0x20);
    plVar26 = (long *)(*(long *)(pfVar6 + 2) + ((long)*(ulong *)(pfVar6 + 0x22) >> 1));
    if ((*(ulong *)(pfVar6 + 0x22) & 1) != 0) {
      pcVar18 = *(code **)(*plVar26 + ((ulong)pcVar18 & 0xffffffff));
    }
    auVar33._0_8_ = auVar60._0_8_ ^ 0x8000000080000000;
    auVar33[8] = auVar60[8];
    auVar33[9] = auVar60[9];
    auVar33[10] = auVar60[10];
    auVar33[0xb] = auVar60[0xb] ^ 0x80;
    auVar53[0xc] = auVar60[0xc];
    auVar53._0_12_ = auVar33;
    auVar53[0xd] = auVar60[0xd];
    auVar53[0xe] = auVar60[0xe];
    auVar53[0xf] = auVar60[0xf] ^ 0x80;
    fVar104 = (float)auVar33._0_8_;
    auVar72._0_4_ = pfVar6[4] * fVar104;
    fVar31 = (float)(auVar33._0_8_ >> 0x20);
    auVar72._4_4_ = pfVar6[5] * fVar31;
    fVar89 = auVar33._8_4_;
    auVar72._8_4_ = pfVar6[6] * fVar89;
    auVar72._12_4_ = pfVar6[7] * auVar53._12_4_;
    auVar86._0_4_ = pfVar6[8] * fVar104;
    auVar86._4_4_ = pfVar6[9] * fVar31;
    auVar86._8_4_ = pfVar6[10] * fVar89;
    auVar86._12_4_ = pfVar6[0xb] * auVar53._12_4_;
    auVar54._0_4_ = pfVar6[0xc] * fVar104;
    auVar54._4_4_ = pfVar6[0xd] * fVar31;
    auVar54._8_4_ = pfVar6[0xe] * fVar89;
    auVar60 = NEON_ext(auVar72,auVar72,8,1);
    auVar92 = NEON_ext(auVar86,auVar86,8,1);
    auVar54._12_4_ = 0;
    uStack_7640 = CONCAT44(auVar86._0_4_ + auVar86._4_4_ + auVar92._0_4_,
                           auVar72._0_4_ + auVar72._4_4_ + auVar60._0_4_);
    auVar60 = NEON_ext(auVar54,auVar54,8,1);
    uStack_7638 = (ulong)(uint)(auVar54._0_4_ + auVar54._4_4_ + auVar60._0_4_ + auVar60._4_4_);
    (*pcVar18)(&fStack_7630,plVar26,&uStack_7640);
    auVar73._0_4_ = pfVar6[0x10] * fStack_7630;
    auVar73._4_4_ = pfVar6[0x11] * fStack_762c;
    auVar73._8_4_ = pfVar6[0x12] * fStack_7628;
    auVar73._12_4_ = pfVar6[0x13] * fStack_7624;
    auVar87._0_4_ = fStack_7630 * pfVar6[0x14];
    auVar87._4_4_ = fStack_762c * pfVar6[0x15];
    auVar87._8_4_ = fStack_7628 * pfVar6[0x16];
    auVar87._12_4_ = fStack_7624 * pfVar6[0x17];
    fVar104 = pfVar6[0x1c];
    fVar31 = pfVar6[0x1d];
    auVar55._0_4_ = fStack_7630 * pfVar6[0x18];
    auVar55._4_4_ = fStack_762c * pfVar6[0x19];
    auVar55._8_4_ = fStack_7628 * pfVar6[0x1a];
    auVar92 = NEON_ext(auVar73,auVar73,8,1);
    auVar114 = NEON_ext(auVar87,auVar87,8,1);
    auVar55._12_4_ = 0;
    auVar60 = NEON_ext(auVar55,auVar55,8,1);
    *(ulong *)(pauVar21[1] + 8) =
         (ulong)(uint)(fStack_7648 -
                      (auVar55._0_4_ + auVar55._4_4_ + auVar60._0_4_ + auVar60._4_4_ + pfVar6[0x1e])
                      );
    *(ulong *)pauVar21[1] =
         CONCAT44(fStack_764c - (auVar87._0_4_ + auVar87._4_4_ + auVar114._0_4_ + fVar31),
                  fStack_7650 - (auVar73._0_4_ + auVar73._4_4_ + auVar92._0_4_ + fVar104));
    return;
  }
  return;
}



/* Entry: 10981eaa8; end: 10981f30b;  */

/* WARNING: Removing unreachable block (ram,0x00010981f300) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10981eaa8(undefined8 param_1,float *param_2,undefined8 param_3,float *param_4,
                  undefined1 (*param_5) [16],int *param_6)

{
  long *plVar1;
  uint uVar2;
  float fVar3;
  int iVar4;
  float *pfVar5;
  uint *puVar6;
  uint *puVar7;
  uint *puVar8;
  uint *puVar9;
  ulong uVar10;
  undefined1 (*pauVar11) [16];
  int *piVar12;
  long lVar13;
  undefined1 (*pauVar14) [16];
  ulong uVar15;
  undefined1 (*pauVar16) [16];
  undefined1 *puVar17;
  code *pcVar18;
  undefined1 (*pauVar19) [16];
  long lVar20;
  uint uVar21;
  float *pfVar22;
  ulong uVar23;
  undefined1 (*pauVar24) [16];
  undefined1 (*pauVar25) [16];
  undefined1 (*pauVar26) [16];
  float fVar27;
  float fVar45;
  ulong uVar28;
  undefined1 auVar30 [12];
  float fVar46;
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined8 uVar29;
  undefined8 extraout_var;
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  float fVar47;
  float fVar58;
  float fVar59;
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  float fVar60;
  float fVar71;
  float fVar72;
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  undefined1 auVar64 [16];
  undefined1 auVar65 [16];
  undefined1 auVar66 [16];
  undefined1 auVar67 [16];
  undefined1 auVar68 [16];
  undefined1 auVar69 [16];
  undefined1 auVar70 [16];
  undefined1 auVar73 [16];
  undefined1 auVar74 [16];
  undefined1 auVar75 [16];
  undefined1 auVar76 [16];
  undefined1 auVar77 [16];
  undefined1 auVar78 [16];
  undefined1 auVar79 [16];
  undefined1 auVar80 [16];
  undefined1 auVar81 [16];
  undefined1 auVar82 [16];
  float fVar83;
  undefined1 auVar84 [16];
  float fVar85;
  float fVar86;
  float fVar89;
  float fVar90;
  undefined1 auVar87 [16];
  undefined1 auVar88 [16];
  float fVar91;
  undefined1 auVar92 [16];
  undefined1 auVar93 [16];
  undefined1 auVar94 [16];
  undefined1 auVar95 [16];
  float fVar96;
  float fVar97;
  float fVar98;
  float fVar99;
  float fVar100;
  float fVar101;
  undefined8 uVar102;
  float fVar103;
  float fStack_74a0;
  float fStack_749c;
  float fStack_7498;
  undefined8 uStack_7490;
  ulong uStack_7488;
  float fStack_7480;
  float fStack_747c;
  float fStack_7478;
  float fStack_7474;
  undefined8 uStack_7440;
  ulong uStack_7438;
  undefined8 uStack_7430;
  ulong uStack_7428;
  undefined8 uStack_7420;
  ulong uStack_7418;
  float *pfStack_7410;
  undefined1 (*pauStack_7408) [16];
  undefined1 (*pauStack_7400) [16];
  long lStack_73f8;
  undefined1 *puStack_73f0;
  code *pcStack_73e8;
  ulong uStack_73e0;
  undefined8 uStack_73d8;
  undefined8 uStack_73d0;
  undefined8 uStack_73c8;
  float fStack_73c0;
  float fStack_73bc;
  float fStack_73b8;
  float fStack_73b4;
  long alStack_73b0 [16];
  code *pcStack_7330;
  ulong uStack_7328;
  undefined8 uStack_7320;
  long lStack_7318;
  uint uStack_7310;
  uint uStack_7300;
  undefined1 uStack_72fc;
  undefined1 uStack_72fb;
  undefined1 uStack_72fa;
  byte bStack_72f9;
  ulong auStack_72f8 [4];
  float afStack_72d8 [4];
  uint uStack_72c8;
  undefined8 uStack_72c0;
  undefined8 uStack_72b8;
  float fStack_72b0;
  undefined1 auStack_72a0 [16];
  float afStack_7290 [996];
  undefined1 auStack_6300 [72];
  undefined8 auStack_62b8 [3];
  undefined1 auStack_62a0 [24576];
  uint uStack_2a0;
  undefined1 (*pauStack_298) [16];
  int iStack_290;
  undefined1 (*pauStack_288) [16];
  int iStack_280;
  undefined1 auStack_270 [144];
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined4 uStack_1d0;
  undefined8 uStack_b0;
  ulong *puStack_a8;
  undefined4 uStack_a0;
  long lStack_88;
  undefined1 auVar42 [16];
  
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lStack_88 = *(long *)PTR____stack_chk_guard_11034bdc0;
  piVar12 = param_6;
  FUN_10981e220();
  uStack_1e0 = 0;
  uStack_1d8 = 0;
  uStack_a0 = 2;
  uStack_b0 = 0;
  uStack_1d0 = 0;
  uStack_72fc = (*param_5)[4];
  uStack_72fb = (*param_5)[5];
  uStack_72fa = (*param_5)[6];
  bStack_72f9 = (*param_5)[7] ^ 0x80;
  auStack_72f8[0] = *(ulong *)(*param_5 + 8) ^ 0x8000000080000000;
  uStack_7300 = *(uint *)*param_5 ^ 0x80000000;
  iVar4 = (int)auStack_270;
  pauVar19 = (undefined1 (*) [16])alStack_73b0;
  pauVar11 = (undefined1 (*) [16])&uStack_7300;
  FUN_10981e308();
  if (iVar4 == 2) {
    pfVar5 = (float *)0x0;
    *param_6 = 2;
    goto LAB_10981f134;
  }
  pfVar5 = (float *)0x0;
  if (iVar4 != 1) goto LAB_10981f134;
  puVar17 = (undefined1 *)0x0;
  lVar13 = 0;
  pauStack_298 = (undefined1 (*) [16])0x0;
  iStack_290 = 0;
  uStack_7300 = 9;
  uStack_2a0 = 0;
  uStack_72c0 = 0;
  uStack_72b8 = 0;
  lVar20 = 0x6000;
  fStack_72b0 = 0.0;
  do {
    pauStack_288 = (undefined1 (*) [16])(auStack_6300 + lVar20);
    *(undefined8 *)((long)auStack_62b8 + lVar20) = 0;
    *(undefined1 **)((long)auStack_62b8 + lVar20 + 8) = puVar17;
    if (puVar17 != (undefined1 *)0x0) {
      *(undefined1 (**) [16])(puVar17 + 0x48) = pauStack_288;
    }
    puVar17 = auStack_62a0 + (0xffU - lVar13 & 0xffffffff) * 0x60;
    lVar13 = lVar13 + 1;
    lVar20 = lVar20 + -0x60;
  } while (lVar20 != 0);
  iStack_280 = 0x100;
  auVar32 = *param_5;
  if ((uint)puStack_a8[6] < 2) {
LAB_10981efac:
    uStack_7300 = 8;
    fVar45 = auVar32._0_4_;
    auVar93._0_4_ = fVar45 * fVar45;
    fVar46 = auVar32._4_4_;
    auVar93._4_4_ = fVar46 * fVar46;
    fVar47 = auVar32._8_4_;
    auVar93._8_4_ = fVar47 * fVar47;
    auVar93._12_4_ = auVar32._12_4_ * auVar32._12_4_;
    auVar32 = NEON_ext(auVar93,auVar93,8,1);
    fVar27 = auVar32._0_4_ + auVar93._0_4_ + auVar93._4_4_;
    auVar77 = _UNK_10ded9720;
    if (0.0 < fVar27) {
      fVar27 = 1.0 / SQRT(fVar27);
      auVar77._0_4_ = fVar45 * fVar27;
      auVar77._4_4_ = fVar46 * fVar27;
      auVar77._8_4_ = fVar47 * fVar27;
      auVar77._12_4_ = 0;
    }
    uStack_72b8 = auVar77._8_8_;
    uStack_72c0 = auVar77._0_8_;
    fStack_72b0 = 0.0;
    uStack_72c8 = 1;
    auStack_72f8[0] = *puStack_a8;
    afStack_72d8[0] = 1.0;
  }
  else {
    iVar4 = (int)auStack_270;
    fStack_73b8 = auVar32._8_4_;
    fStack_73b4 = auVar32._12_4_;
    fStack_73c0 = auVar32._0_4_;
    fStack_73bc = auVar32._4_4_;
    FUN_10981f7ac();
    auVar32._4_4_ = fStack_73bc;
    auVar32._0_4_ = fStack_73c0;
    auVar32._8_4_ = fStack_73b8;
    auVar32._12_4_ = fStack_73b4;
    pauVar19 = pauStack_298;
    if (iVar4 == 0) goto LAB_10981efac;
    while (pauStack_298 = pauVar19, pauStack_298 != (undefined1 (*) [16])0x0) {
      lVar13 = *(long *)(pauStack_298[4] + 8);
      if (*(long *)pauStack_298[5] != 0) {
        *(long *)(*(long *)pauStack_298[5] + 0x48) = lVar13;
      }
      if (lVar13 != 0) {
        *(undefined8 *)(lVar13 + 0x50) = *(undefined8 *)pauStack_298[5];
      }
      pauVar19 = *(undefined1 (**) [16])pauStack_298[5];
      *(undefined8 *)(pauStack_298[4] + 8) = 0;
      *(undefined1 (**) [16])pauStack_298[5] = pauStack_288;
      if (pauStack_288 != (undefined1 (*) [16])0x0) {
        *(undefined1 (**) [16])(pauStack_288[4] + 8) = pauStack_298;
      }
      iStack_280 = iStack_280 + 1;
      iStack_290 = iStack_290 + -1;
      pauStack_288 = pauStack_298;
    }
    uStack_7300 = 0;
    uStack_2a0 = 0;
    uVar23 = puStack_a8[2];
    uVar15 = puStack_a8[3];
    fVar27 = *(float *)(uVar15 + 0x10);
    fVar45 = *(float *)(uVar15 + 0x14);
    fVar46 = *(float *)(uVar15 + 0x18);
    uVar15 = *puStack_a8;
    uVar10 = puStack_a8[1];
    fVar47 = *(float *)(uVar15 + 0x10) - fVar27;
    fVar58 = *(float *)(uVar15 + 0x14) - fVar45;
    fVar59 = *(float *)(uVar15 + 0x18) - fVar46;
    fVar60 = *(float *)(uVar10 + 0x10) - fVar27;
    fVar71 = *(float *)(uVar10 + 0x14) - fVar45;
    fVar72 = *(float *)(uVar10 + 0x18) - fVar46;
    fVar27 = *(float *)(uVar23 + 0x10) - fVar27;
    fVar45 = *(float *)(uVar23 + 0x14) - fVar45;
    fVar46 = *(float *)(uVar23 + 0x18) - fVar46;
    uVar28 = uVar15;
    if (fVar60 * fVar59 * fVar45 + fVar27 * fVar58 * fVar72 + -fVar47 * fVar72 * fVar45 +
        -fVar58 * fVar60 * fVar46 + fVar47 * fVar71 * fVar46 + fVar27 * -fVar59 * fVar71 < 0.0) {
      *puStack_a8 = uVar10;
      puStack_a8[1] = uVar15;
      uVar28 = NEON_rev64(puStack_a8[4],4);
      puStack_a8[4] = uVar28;
      uVar28 = uVar10;
      uVar10 = uVar15;
    }
    puVar6 = &uStack_7300;
    FUN_10981fbe0(puVar6,uVar28,uVar10,uVar23,1);
    puVar7 = &uStack_7300;
    FUN_10981fbe0(puVar7,puStack_a8[1],*puStack_a8,puStack_a8[3],1);
    puVar8 = &uStack_7300;
    FUN_10981fbe0(puVar8,puStack_a8[2],puStack_a8[1],puStack_a8[3],1);
    pauVar19 = (undefined1 (*) [16])*puStack_a8;
    pauVar11 = (undefined1 (*) [16])puStack_a8[2];
    param_4 = (float *)puStack_a8[3];
    puVar9 = &uStack_7300;
    piVar12 = (int *)0x1;
    FUN_10981fbe0();
    auVar32._4_4_ = fStack_73bc;
    auVar32._0_4_ = fStack_73c0;
    auVar32._8_4_ = fStack_73b8;
    auVar32._12_4_ = fStack_73b4;
    if (iStack_290 != 4) goto LAB_10981efac;
    pauVar14 = *(undefined1 (**) [16])pauStack_298[5];
    pauVar26 = pauStack_298;
    if (pauVar14 != (undefined1 (*) [16])0x0) {
      fVar27 = *(float *)pauStack_298[1] * *(float *)pauStack_298[1];
      pauVar24 = pauStack_298;
      do {
        fVar45 = *(float *)pauVar14[1] * *(float *)pauVar14[1];
        pauVar26 = pauVar14;
        if (fVar27 <= fVar45) {
          pauVar26 = pauVar24;
          fVar45 = fVar27;
        }
        fVar27 = fVar45;
        pauVar14 = *(undefined1 (**) [16])pauVar14[5];
        pauVar24 = pauVar26;
      } while (pauVar14 != (undefined1 (*) [16])0x0);
    }
    pauVar14 = (undefined1 (*) [16])0x0;
    auVar92 = *pauVar26;
    fVar27 = *(float *)pauVar26[1];
    uVar23 = *(ulong *)(pauVar26[1] + 8);
    auStack_72f8[1] = *(ulong *)pauVar26[2];
    lVar13 = *(long *)(pauVar26[2] + 8);
    *(undefined1 *)(puVar6 + 0x16) = 0;
    *(uint **)(puVar6 + 0xc) = puVar7;
    *(undefined1 *)(puVar7 + 0x16) = 0;
    *(uint **)(puVar7 + 0xc) = puVar6;
    *(undefined1 *)((long)puVar6 + 0x59) = 0;
    *(uint **)(puVar6 + 0xe) = puVar8;
    *(undefined1 *)(puVar8 + 0x16) = 1;
    *(uint **)(puVar8 + 0xc) = puVar6;
    *(undefined1 *)((long)puVar6 + 0x5a) = 0;
    *(uint **)(puVar6 + 0x10) = puVar9;
    *(undefined1 *)(puVar9 + 0x16) = 2;
    *(uint **)(puVar9 + 0xc) = puVar6;
    *(undefined1 *)((long)puVar7 + 0x59) = 2;
    *(uint **)(puVar7 + 0xe) = puVar9;
    *(undefined1 *)((long)puVar9 + 0x5a) = 1;
    *(uint **)(puVar9 + 0x10) = puVar7;
    *(undefined1 *)((long)puVar7 + 0x5a) = 1;
    *(uint **)(puVar7 + 0x10) = puVar8;
    *(undefined2 *)((long)puVar8 + 0x59) = 0x102;
    *(uint **)(puVar8 + 0xe) = puVar7;
    *(uint **)(puVar8 + 0x10) = puVar9;
    *(undefined1 *)((long)puVar9 + 0x59) = 2;
    *(uint **)(puVar9 + 0xe) = puVar8;
    uStack_7300 = 0;
    do {
      pauVar24 = pauVar26;
      uVar15 = (ulong)uStack_2a0;
      if (0x7f < uStack_2a0) {
        uStack_7300 = 6;
        break;
      }
      uStack_73d8 = 0;
      uStack_73c8 = auVar92._8_8_;
      uStack_73d0 = auVar92._0_8_;
      fStack_73b8 = (float)auStack_72f8[1];
      fStack_73b4 = (float)(auStack_72f8[1] >> 0x20);
      fStack_73c0 = (float)uVar23;
      fStack_73bc = (float)(uVar23 >> 0x20);
      uStack_7320 = 0;
      lStack_7318 = 0;
      uStack_7310 = 0;
      uStack_2a0 = uStack_2a0 + 1;
      uVar21 = (int)pauVar14 + 1;
      pauVar14 = (undefined1 (*) [16])(ulong)uVar21;
      pauVar24[5][0xb] = (char)uVar21;
      pauVar19 = (undefined1 (*) [16])(auStack_72a0 + uVar15 * 0x20);
      uStack_73e0 = (ulong)(uint)fVar27;
      FUN_10981f61c(*(undefined8 *)*pauVar24,auStack_270);
      auVar31._0_4_ = *(float *)*pauVar24 * afStack_7290[uVar15 * 8];
      auVar31._4_4_ = *(float *)(*pauVar24 + 4) * afStack_7290[uVar15 * 8 + 1];
      auVar31._8_4_ = *(float *)(*pauVar24 + 8) * afStack_7290[uVar15 * 8 + 2];
      auVar31._12_4_ = *(float *)(*pauVar24 + 0xc) * afStack_7290[uVar15 * 8 + 3];
      auVar32 = NEON_ext(auVar31,auVar31,8,1);
      if ((auVar31._0_4_ + auVar31._4_4_ + auVar32._0_4_) - *(float *)pauVar24[1] <= 0.0001) {
        uStack_7300 = 7;
LAB_10981f18c:
        auVar92._8_8_ = uStack_73c8;
        auVar92._0_8_ = uStack_73d0;
        uVar23 = CONCAT44(fStack_73bc,fStack_73c0);
        auStack_72f8[1] = CONCAT44(fStack_73b4,fStack_73b8);
        fVar27 = (float)uStack_73e0;
        break;
      }
      uVar23 = 0;
      do {
        param_4 = *(float **)(pauVar24[3] + uVar23 * 8);
        piVar12 = (int *)(ulong)(byte)pauVar24[5][uVar23 + 8];
        uVar10 = 0;
        pauVar19 = pauVar14;
        pauVar11 = (undefined1 (*) [16])(auStack_72a0 + uVar15 * 0x20);
        FUN_10981fe14();
        if (1 < uVar23) break;
        uVar23 = uVar23 + 1;
      } while ((uVar10 & 1) != 0);
      uVar2 = 0;
      if (2 < uStack_7310) {
        uVar2 = (uint)uVar10;
      }
      if ((uVar2 & 1) == 0) {
        uStack_7300 = 4;
        goto LAB_10981f18c;
      }
      *(undefined1 *)(uStack_7320 + 0x59) = 2;
      *(long *)(uStack_7320 + 0x38) = lStack_7318;
      *(undefined1 *)(lStack_7318 + 0x5a) = 1;
      *(long *)(lStack_7318 + 0x40) = uStack_7320;
      lVar13 = *(long *)(pauVar24[4] + 8);
      if (*(long *)pauVar24[5] != 0) {
        *(long *)(*(long *)pauVar24[5] + 0x48) = lVar13;
      }
      if (lVar13 != 0) {
        *(undefined8 *)(lVar13 + 0x50) = *(undefined8 *)pauVar24[5];
      }
      if (pauStack_298 == pauVar24) {
        pauStack_298 = *(undefined1 (**) [16])pauVar24[5];
      }
      iStack_290 = iStack_290 + -1;
      *(undefined8 *)(pauVar24[4] + 8) = 0;
      *(undefined1 (**) [16])pauVar24[5] = pauStack_288;
      if (pauStack_288 != (undefined1 (*) [16])0x0) {
        *(undefined1 (**) [16])(pauStack_288[4] + 8) = pauVar24;
      }
      iStack_280 = iStack_280 + 1;
      pauVar16 = *(undefined1 (**) [16])pauStack_298[5];
      pauVar26 = pauStack_298;
      if (pauVar16 != (undefined1 (*) [16])0x0) {
        fVar27 = *(float *)pauStack_298[1] * *(float *)pauStack_298[1];
        pauVar25 = pauStack_298;
        do {
          fVar45 = *(float *)pauVar16[1] * *(float *)pauVar16[1];
          pauVar26 = pauVar16;
          if (fVar27 <= fVar45) {
            pauVar26 = pauVar25;
            fVar45 = fVar27;
          }
          fVar27 = fVar45;
          pauVar16 = *(undefined1 (**) [16])pauVar16[5];
          pauVar25 = pauVar26;
        } while (pauVar16 != (undefined1 (*) [16])0x0);
      }
      auVar92 = *pauVar26;
      fVar27 = *(float *)pauVar26[1];
      uVar23 = *(ulong *)(pauVar26[1] + 8);
      auStack_72f8[1] = *(ulong *)pauVar26[2];
      lVar13 = *(long *)(pauVar26[2] + 8);
      pauStack_288 = pauVar24;
    } while (uVar21 != 0xff);
    fVar45 = auVar92._0_4_ * fVar27;
    fVar46 = auVar92._4_4_ * fVar27;
    fVar47 = auVar92._8_4_ * fVar27;
    uStack_72b8 = auVar92._8_8_;
    uStack_72c0 = auVar92._0_8_;
    fStack_72b0 = fVar27;
    uStack_72c8 = 3;
    auStack_72f8[0] = uVar23;
    auStack_72f8[2] = lVar13;
    auVar49._0_4_ = *(float *)(auStack_72f8[1] + 0x10) - fVar45;
    auVar49._4_4_ = *(float *)(auStack_72f8[1] + 0x14) - fVar46;
    auVar49._8_4_ = *(float *)(auStack_72f8[1] + 0x18) - fVar47;
    auVar49._12_4_ = 0;
    auVar62._0_4_ = *(float *)(lVar13 + 0x10) - fVar45;
    auVar62._4_4_ = *(float *)(lVar13 + 0x14) - fVar46;
    auVar62._8_4_ = *(float *)(lVar13 + 0x18) - fVar47;
    auVar62._12_4_ = 0;
    auVar32 = NEON_ext(auVar49,auVar49,0xc,1);
    auVar32 = NEON_ext(auVar32,auVar49,8,1);
    auVar77 = NEON_ext(auVar62,auVar62,0xc,1);
    auVar77 = NEON_ext(auVar77,auVar62,8,1);
    auVar50._0_4_ = auVar77._0_4_ * auVar49._0_4_ - auVar32._0_4_ * auVar62._0_4_;
    auVar50._4_4_ = auVar77._4_4_ * auVar49._4_4_ - auVar32._4_4_ * auVar62._4_4_;
    auVar50._8_4_ = auVar77._8_4_ * auVar49._8_4_ - auVar32._8_4_ * auVar62._8_4_;
    auVar50._12_4_ = auVar77._12_4_ * 0.0 - auVar32._12_4_ * 0.0;
    auVar32 = NEON_ext(auVar50,auVar50,0xc,1);
    auVar32 = NEON_ext(auVar32,auVar50,8,1);
    auVar51._0_4_ = auVar32._0_4_ * auVar32._0_4_;
    auVar51._4_4_ = auVar32._4_4_ * auVar32._4_4_;
    auVar51._8_4_ = auVar32._8_4_ * auVar32._8_4_;
    auVar51._12_4_ = 0;
    auVar32 = NEON_ext(auVar51,auVar51,8,1);
    fVar58 = SQRT(auVar51._0_4_ + auVar51._4_4_ + auVar32._0_4_);
    auVar63._0_4_ = *(float *)(lVar13 + 0x10) - fVar45;
    auVar63._4_4_ = *(float *)(lVar13 + 0x14) - fVar46;
    auVar63._8_4_ = *(float *)(lVar13 + 0x18) - fVar47;
    auVar63._12_4_ = 0;
    auVar73._0_4_ = *(float *)(uVar23 + 0x10) - fVar45;
    auVar73._4_4_ = *(float *)(uVar23 + 0x14) - fVar46;
    auVar73._8_4_ = *(float *)(uVar23 + 0x18) - fVar47;
    auVar73._12_4_ = 0;
    auVar32 = NEON_ext(auVar63,auVar63,0xc,1);
    auVar32 = NEON_ext(auVar32,auVar63,8,1);
    auVar77 = NEON_ext(auVar73,auVar73,0xc,1);
    auVar77 = NEON_ext(auVar77,auVar73,8,1);
    auVar64._0_4_ = auVar77._0_4_ * auVar63._0_4_ - auVar32._0_4_ * auVar73._0_4_;
    auVar64._4_4_ = auVar77._4_4_ * auVar63._4_4_ - auVar32._4_4_ * auVar73._4_4_;
    auVar64._8_4_ = auVar77._8_4_ * auVar63._8_4_ - auVar32._8_4_ * auVar73._8_4_;
    auVar64._12_4_ = auVar77._12_4_ * 0.0 - auVar32._12_4_ * 0.0;
    auVar32 = NEON_ext(auVar64,auVar64,0xc,1);
    auVar32 = NEON_ext(auVar32,auVar64,8,1);
    auVar65._0_4_ = auVar32._0_4_ * auVar32._0_4_;
    auVar65._4_4_ = auVar32._4_4_ * auVar32._4_4_;
    auVar65._8_4_ = auVar32._8_4_ * auVar32._8_4_;
    auVar65._12_4_ = 0;
    auVar32 = NEON_ext(auVar65,auVar65,8,1);
    fVar59 = SQRT(auVar65._0_4_ + auVar65._4_4_ + auVar32._0_4_);
    auVar74._0_4_ = *(float *)(uVar23 + 0x10) - fVar45;
    auVar74._4_4_ = *(float *)(uVar23 + 0x14) - fVar46;
    auVar74._8_4_ = *(float *)(uVar23 + 0x18) - fVar47;
    auVar74._12_4_ = 0;
    auVar35._0_4_ = *(float *)(auStack_72f8[1] + 0x10) - fVar45;
    auVar35._4_4_ = *(float *)(auStack_72f8[1] + 0x14) - fVar46;
    auVar35._8_4_ = *(float *)(auStack_72f8[1] + 0x18) - fVar47;
    auVar35._12_4_ = 0;
    auVar32 = NEON_ext(auVar74,auVar74,0xc,1);
    auVar32 = NEON_ext(auVar32,auVar74,8,1);
    auVar77 = NEON_ext(auVar35,auVar35,0xc,1);
    auVar77 = NEON_ext(auVar77,auVar35,8,1);
    auVar36._0_4_ = auVar77._0_4_ * auVar74._0_4_ - auVar32._0_4_ * auVar35._0_4_;
    auVar36._4_4_ = auVar77._4_4_ * auVar74._4_4_ - auVar32._4_4_ * auVar35._4_4_;
    auVar36._8_4_ = auVar77._8_4_ * auVar74._8_4_ - auVar32._8_4_ * auVar35._8_4_;
    auVar36._12_4_ = auVar77._12_4_ * 0.0 - auVar32._12_4_ * 0.0;
    auVar32 = NEON_ext(auVar36,auVar36,0xc,1);
    auVar32 = NEON_ext(auVar32,auVar36,8,1);
    auVar37._0_4_ = auVar32._0_4_ * auVar32._0_4_;
    auVar37._4_4_ = auVar32._4_4_ * auVar32._4_4_;
    auVar37._8_4_ = auVar32._8_4_ * auVar32._8_4_;
    auVar37._12_4_ = 0;
    auVar32 = NEON_ext(auVar37,auVar37,8,1);
    fVar27 = SQRT(auVar37._0_4_ + auVar37._4_4_ + auVar32._0_4_);
    fVar45 = fVar58 + fVar59 + fVar27;
    afStack_72d8[0] = fVar58 / fVar45;
    afStack_72d8[1] = fVar59 / fVar45;
    afStack_72d8[2] = fVar27 / fVar45;
    if (uStack_7300 == 9) {
      pfVar5 = (float *)0x0;
      *param_6 = 3;
      goto LAB_10981f134;
    }
  }
  uVar23 = 0;
  plVar1 = (long *)(alStack_73b0[0] + ((long)uStack_7328 >> 1));
  auVar81 = ZEXT316(0);
  do {
    fStack_73b8 = auVar81._8_4_;
    fStack_73b4 = auVar81._12_4_;
    fStack_73c0 = auVar81._0_4_;
    fStack_73bc = auVar81._4_4_;
    pcVar18 = pcStack_7330;
    if ((uStack_7328 & 1) != 0) {
      pcVar18 = *(code **)(*plVar1 + ((ulong)pcStack_7330 & 0xffffffff));
    }
    pauVar19 = (undefined1 (*) [16])auStack_72f8[uVar23];
    (*pcVar18)(&uStack_7320,plVar1);
    fVar27 = afStack_72d8[uVar23];
    auVar81._0_4_ = fStack_73c0 + (float)uStack_7320 * fVar27;
    auVar81._4_4_ = fStack_73bc + uStack_7320._4_4_ * fVar27;
    auVar81._8_4_ = fStack_73b8 + (float)lStack_7318 * fVar27;
    auVar81._12_4_ = fStack_73b4 + 0.0;
    uVar23 = uVar23 + 1;
  } while (uVar23 < uStack_72c8);
                    /* WARNING: Read-only address (ram,0x00010ded9720) is written */
  pfVar5 = (float *)0x1;
  *param_6 = 1;
  auVar33._0_4_ = auVar81._0_4_ * *param_2;
  auVar33._4_4_ = auVar81._4_4_ * param_2[1];
  auVar33._8_4_ = auVar81._8_4_ * param_2[2];
  auVar33._12_4_ = auVar81._12_4_ * param_2[3];
  auVar48._0_4_ = auVar81._0_4_ * param_2[4];
  auVar48._4_4_ = auVar81._4_4_ * param_2[5];
  auVar48._8_4_ = auVar81._8_4_ * param_2[6];
  auVar48._12_4_ = auVar81._12_4_ * param_2[7];
  fVar27 = param_2[0xc];
  fVar45 = param_2[0xd];
  fVar46 = param_2[0xf];
  auVar61._0_4_ = auVar81._0_4_ * param_2[8];
  auVar61._4_4_ = auVar81._4_4_ * param_2[9];
  auVar61._8_4_ = auVar81._8_4_ * param_2[10];
  auVar77 = NEON_ext(auVar33,auVar33,8,1);
  auVar93 = NEON_ext(auVar48,auVar48,8,1);
  auVar61._12_4_ = 0;
  auVar32 = NEON_ext(auVar61,auVar61,8,1);
  param_6[6] = (int)(auVar61._0_4_ + auVar61._4_4_ + auVar32._0_4_ + auVar32._4_4_ + param_2[0xe]);
  param_6[7] = (int)(fVar46 + 0.0);
  param_6[4] = (int)(auVar33._0_4_ + auVar33._4_4_ + auVar77._0_4_ + fVar27);
  param_6[5] = (int)(auVar48._0_4_ + auVar48._4_4_ + auVar93._0_4_ + fVar45);
  fVar47 = auVar81._0_4_ - (float)uStack_72c0 * fStack_72b0;
  fVar58 = auVar81._4_4_ - uStack_72c0._4_4_ * fStack_72b0;
  fVar59 = auVar81._8_4_ - (float)uStack_72b8 * fStack_72b0;
  fVar27 = param_2[0xc];
  fVar45 = param_2[0xd];
  fVar46 = param_2[0xf];
  auVar76._0_4_ = param_2[8] * fVar47;
  auVar76._4_4_ = param_2[9] * fVar58;
  auVar76._8_4_ = param_2[10] * fVar59;
  auVar82._0_4_ = *param_2 * fVar47;
  auVar82._4_4_ = param_2[1] * fVar58;
  auVar82._8_4_ = param_2[2] * fVar59;
  auVar82._12_4_ = param_2[3] * 0.0;
  auVar34._0_4_ = param_2[4] * fVar47;
  auVar34._4_4_ = param_2[5] * fVar58;
  auVar34._8_4_ = param_2[6] * fVar59;
  auVar34._12_4_ = param_2[7] * 0.0;
  auVar77 = NEON_ext(auVar82,auVar82,8,1);
  auVar93 = NEON_ext(auVar34,auVar34,8,1);
  auVar76._12_4_ = 0;
  auVar32 = NEON_ext(auVar76,auVar76,8,1);
  param_6[10] = (int)(param_2[0xe] + auVar76._0_4_ + auVar76._4_4_ + auVar32._0_4_ + auVar32._4_4_);
  param_6[0xb] = (int)(fVar46 + 0.0);
  param_6[8] = (int)(fVar27 + auVar82._0_4_ + auVar82._4_4_ + auVar77._0_4_);
  param_6[9] = (int)(fVar45 + auVar34._0_4_ + auVar34._4_4_ + auVar93._0_4_);
  param_6[0xe] = (int)-(float)uStack_72b8;
  param_6[0xf] = (int)-uStack_72b8._4_4_;
  param_6[0xc] = (int)-(float)uStack_72c0;
  param_6[0xd] = (int)-uStack_72c0._4_4_;
  param_6[0x10] = (int)-fStack_72b0;
LAB_10981f134:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_88) {
    return;
  }
  ___stack_chk_fail();
  puStack_73f0 = &stack0xfffffffffffffff0;
  pcStack_73e8 = FUN_10981f30c;
  lStack_73f8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pfStack_7410 = pfVar5;
  pauStack_7408 = pauVar19;
  fVar27 = *pfVar5 - *(float *)*pauVar19;
  fVar45 = pfVar5[1] - *(float *)(*pauVar19 + 4);
  auVar78._0_8_ = CONCAT44(fVar45,fVar27);
  auVar78._8_4_ = pfVar5[2] - *(float *)(*pauVar19 + 8);
  auVar78._12_4_ = 0;
  fVar59 = *(float *)*pauVar19 - *(float *)*pauVar11;
  fVar60 = *(float *)(*pauVar19 + 4) - *(float *)(*pauVar11 + 4);
  auVar66._0_8_ = CONCAT44(fVar60,fVar59);
  auVar66._8_4_ = *(float *)(*pauVar19 + 8) - *(float *)(*pauVar11 + 8);
  auVar66._12_4_ = 0;
  pauStack_7400 = pauVar11;
  uStack_7438 = (ulong)(uint)auVar78._8_4_;
  uStack_7440 = auVar78._0_8_;
  uStack_7428 = (ulong)(uint)auVar66._8_4_;
  uStack_7430 = auVar66._0_8_;
  fVar47 = *(float *)*pauVar11 - *pfVar5;
  fVar58 = *(float *)(*pauVar11 + 4) - pfVar5[1];
  auVar52._0_8_ = CONCAT44(fVar58,fVar47);
  auVar52._8_4_ = *(float *)(*pauVar11 + 8) - pfVar5[2];
  auVar52._12_4_ = 0;
  uStack_7418 = (ulong)(uint)auVar52._8_4_;
  uStack_7420 = auVar52._0_8_;
  auVar32 = NEON_ext(auVar78,auVar78,0xc,1);
  auVar32 = NEON_ext(auVar32,auVar78,8,1);
  auVar77 = NEON_ext(auVar66,auVar66,0xc,1);
  auVar77 = NEON_ext(auVar77,auVar66,8,1);
  auVar38._0_4_ = auVar77._0_4_ * fVar27 - auVar32._0_4_ * fVar59;
  auVar38._4_4_ = auVar77._4_4_ * fVar45 - auVar32._4_4_ * fVar60;
  auVar38._8_4_ = auVar77._8_4_ * auVar78._8_4_ - auVar32._8_4_ * auVar66._8_4_;
  auVar38._12_4_ = auVar77._12_4_ * 0.0 - auVar32._12_4_ * 0.0;
  auVar32 = NEON_ext(auVar38,auVar38,0xc,1);
  auVar32 = NEON_ext(auVar32,auVar38,8,1);
  auVar79._0_12_ = auVar32._0_12_;
  auVar79._12_4_ = 0;
  fVar27 = auVar32._0_4_;
  auVar39._0_4_ = fVar27 * fVar27;
  fVar45 = auVar32._4_4_;
  auVar39._4_4_ = fVar45 * fVar45;
  fVar46 = auVar32._8_4_;
  auVar39._8_4_ = fVar46 * fVar46;
  auVar39._12_4_ = 0;
  auVar32 = NEON_ext(auVar39,auVar39,8,1);
  fVar71 = auVar39._0_4_ + auVar39._4_4_ + auVar32._0_4_;
  if (0.0 < fVar71) {
    lVar13 = 0;
    uVar21 = 0;
    auVar32 = NEON_ext(auVar79,auVar79,0xc,1);
    auVar32 = NEON_ext(auVar32,auVar79,8,1);
    fVar83 = 0.0;
    fVar72 = -1.0;
    fVar85 = 0.0;
    do {
      pfVar22 = (&pfStack_7410)[lVar13];
      auVar93 = *(undefined1 (*) [16])(&uStack_7440 + lVar13 * 2);
      auVar92 = NEON_ext(auVar93,auVar93,0xc,1);
      auVar92 = NEON_ext(auVar92,auVar93,8,1);
      auVar87._0_4_ = auVar32._0_4_ * auVar93._0_4_ - auVar92._0_4_ * fVar27;
      auVar87._4_4_ = auVar32._4_4_ * auVar93._4_4_ - auVar92._4_4_ * fVar45;
      auVar87._8_4_ = auVar32._8_4_ * auVar93._8_4_ - auVar92._8_4_ * fVar46;
      auVar87._12_4_ = auVar32._12_4_ * auVar93._12_4_ - auVar92._12_4_ * 0.0;
      auVar93 = NEON_ext(auVar87,auVar87,0xc,1);
      auVar93 = NEON_ext(auVar93,auVar87,8,1);
      fVar86 = *pfVar22;
      fVar89 = pfVar22[1];
      fVar90 = pfVar22[2];
      fVar3 = pfVar22[3];
      auVar94._0_4_ = fVar86 * auVar93._0_4_;
      auVar94._4_4_ = fVar89 * auVar93._4_4_;
      auVar94._8_4_ = fVar90 * auVar93._8_4_;
      auVar94._12_4_ = fVar3 * 0.0;
      auVar93 = NEON_ext(auVar94,auVar94,8,1);
      if (0.0 < auVar94._0_4_ + auVar94._4_4_ + auVar93._0_4_) {
        uVar2 = *(uint *)(&UNK_10e001e58 + lVar13 * 4);
        uVar23 = (ulong)uVar2;
        uVar102 = *(undefined8 *)((&pfStack_7410)[uVar23] + 2);
        uVar29 = *(undefined8 *)(&pfStack_7410)[uVar23];
        fVar99 = (float)uVar29;
        fVar96 = fVar99 - fVar86;
        fVar100 = (float)((ulong)uVar29 >> 0x20);
        fVar97 = fVar100 - fVar89;
        fVar101 = (float)uVar102;
        fVar98 = fVar101 - fVar90;
        auVar95._0_4_ = fVar96 * fVar96;
        auVar95._4_4_ = fVar97 * fVar97;
        auVar95._8_4_ = fVar98 * fVar98;
        auVar95._12_4_ = 0;
        auVar93 = NEON_ext(auVar95,auVar95,8,1);
        fVar103 = auVar95._0_4_ + auVar95._4_4_ + auVar93._0_4_;
        fVar91 = -1.0;
        if (0.0 < fVar103) {
          auVar84._0_4_ = fVar86 * fVar96;
          auVar84._4_4_ = fVar89 * fVar97;
          auVar84._8_4_ = fVar90 * fVar98;
          auVar84._12_4_ = fVar3 * 0.0;
          auVar93 = NEON_ext(auVar84,auVar84,8,1);
          fVar83 = -(auVar93._0_4_ + auVar84._0_4_ + auVar84._4_4_) / fVar103;
          if (1.0 <= fVar83) {
            auVar88._0_4_ = fVar99 * fVar99;
            auVar88._4_4_ = fVar100 * fVar100;
            auVar88._8_4_ = fVar101 * fVar101;
            fVar83 = (float)((ulong)uVar102 >> 0x20);
            auVar88._12_4_ = fVar83 * fVar83;
            fVar83 = 1.0;
            fVar85 = 0.0;
            uVar21 = 2;
          }
          else if (fVar83 <= 0.0) {
            auVar88._0_4_ = fVar86 * fVar86;
            auVar88._4_4_ = fVar89 * fVar89;
            auVar88._8_4_ = fVar90 * fVar90;
            auVar88._12_4_ = fVar3 * fVar3;
            fVar83 = 0.0;
            fVar85 = 1.0;
            uVar21 = 1;
          }
          else {
            fVar85 = 1.0 - fVar83;
            fVar86 = fVar86 + fVar96 * fVar83;
            fVar89 = fVar89 + fVar97 * fVar83;
            fVar90 = fVar90 + fVar98 * fVar83;
            auVar88._0_4_ = fVar86 * fVar86;
            auVar88._4_4_ = fVar89 * fVar89;
            auVar88._8_4_ = fVar90 * fVar90;
            auVar88._12_4_ = (fVar3 + 0.0) * (fVar3 + 0.0);
            uVar21 = 3;
          }
          auVar93 = NEON_ext(auVar88,auVar88,8,1);
          fVar91 = auVar88._0_4_ + auVar88._4_4_ + auVar93._0_4_;
        }
        if ((fVar72 < 0.0) || (fVar91 < fVar72)) {
          param_4[lVar13] = fVar85;
          param_4[uVar23] = fVar83;
          *piVar12 = (-(uVar21 & 1) & 1 << (ulong)((uint)lVar13 & 0x1f)) +
                     (1 << (ulong)(uVar2 & 0x1f) & (int)(uVar21 << 0x1e) >> 0x1f);
          param_4[*(uint *)(&UNK_10e001e58 + uVar23 * 4)] = 0.0;
          fVar72 = fVar91;
        }
      }
      lVar13 = lVar13 + 1;
    } while (lVar13 != 3);
    if (fVar72 < 0.0) {
      auVar40._0_4_ = *pfVar5 * fVar27;
      auVar40._4_4_ = pfVar5[1] * fVar45;
      auVar40._8_4_ = pfVar5[2] * fVar46;
      auVar40._12_4_ = pfVar5[3] * 0.0;
      auVar32 = NEON_ext(auVar40,auVar40,8,1);
      fVar72 = (auVar40._0_4_ + auVar40._4_4_ + auVar32._0_4_) / fVar71;
      fVar27 = fVar27 * fVar72;
      fVar45 = fVar45 * fVar72;
      fVar46 = fVar46 * fVar72;
      *piVar12 = 7;
      auVar80._0_4_ = *(float *)*pauVar19 - fVar27;
      auVar80._4_4_ = *(float *)(*pauVar19 + 4) - fVar45;
      auVar80._8_4_ = *(float *)(*pauVar19 + 8) - fVar46;
      auVar80._12_4_ = 0;
      auVar32 = NEON_ext(auVar80,auVar80,0xc,1);
      auVar32 = NEON_ext(auVar32,auVar80,8,1);
      auVar67._0_4_ = auVar32._0_4_ * fVar59 - auVar77._0_4_ * auVar80._0_4_;
      auVar67._4_4_ = auVar32._4_4_ * fVar60 - auVar77._4_4_ * auVar80._4_4_;
      auVar67._8_4_ = auVar32._8_4_ * auVar66._8_4_ - auVar77._8_4_ * auVar80._8_4_;
      auVar67._12_4_ = auVar32._12_4_ * 0.0 - auVar77._12_4_ * 0.0;
      auVar32 = NEON_ext(auVar67,auVar67,0xc,1);
      auVar32 = NEON_ext(auVar32,auVar67,8,1);
      auVar68._0_4_ = auVar32._0_4_ * auVar32._0_4_;
      auVar68._4_4_ = auVar32._4_4_ * auVar32._4_4_;
      auVar68._8_4_ = auVar32._8_4_ * auVar32._8_4_;
      auVar68._12_4_ = 0;
      auVar32 = NEON_ext(auVar68,auVar68,8,1);
      fVar59 = SQRT(auVar68._0_4_ + auVar68._4_4_ + auVar32._0_4_) / SQRT(fVar71);
      *param_4 = fVar59;
      auVar75._0_4_ = *(float *)*pauVar11 - fVar27;
      auVar75._4_4_ = *(float *)(*pauVar11 + 4) - fVar45;
      auVar75._8_4_ = *(float *)(*pauVar11 + 8) - fVar46;
      auVar41._0_4_ = fVar27 * fVar27;
      auVar41._4_4_ = fVar45 * fVar45;
      auVar41._8_4_ = fVar46 * fVar46;
      auVar41._12_4_ = 0;
      auVar75._12_4_ = 0;
      NEON_ext(auVar41,auVar41,8,1);
      auVar32 = NEON_ext(auVar52,auVar52,0xc,1);
      auVar32 = NEON_ext(auVar32,auVar52,8,1);
      auVar77 = NEON_ext(auVar75,auVar75,0xc,1);
      auVar77 = NEON_ext(auVar77,auVar75,8,1);
      auVar53._0_4_ = auVar77._0_4_ * fVar47 - auVar32._0_4_ * auVar75._0_4_;
      auVar53._4_4_ = auVar77._4_4_ * fVar58 - auVar32._4_4_ * auVar75._4_4_;
      auVar53._8_4_ = auVar77._8_4_ * auVar52._8_4_ - auVar32._8_4_ * auVar75._8_4_;
      auVar53._12_4_ = auVar77._12_4_ * 0.0 - auVar32._12_4_ * 0.0;
      auVar32 = NEON_ext(auVar53,auVar53,0xc,1);
      auVar32 = NEON_ext(auVar32,auVar53,8,1);
      auVar54._0_4_ = auVar32._0_4_ * auVar32._0_4_;
      auVar54._4_4_ = auVar32._4_4_ * auVar32._4_4_;
      auVar54._8_4_ = auVar32._8_4_ * auVar32._8_4_;
      auVar54._12_4_ = 0;
      auVar32 = NEON_ext(auVar54,auVar54,8,1);
      fVar27 = SQRT(auVar54._0_4_ + auVar54._4_4_ + auVar32._0_4_) / SQRT(fVar71);
      param_4[1] = fVar27;
      param_4[2] = 1.0 - (fVar59 + fVar27);
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_73f8) {
    uVar29 = ___stack_chk_fail();
    fVar27 = (float)uVar29;
    auVar55._0_4_ = fVar27 * fVar27;
    fVar45 = (float)((ulong)uVar29 >> 0x20);
    auVar55._4_4_ = fVar45 * fVar45;
    fVar46 = (float)extraout_var;
    auVar55._8_4_ = fVar46 * fVar46;
    fVar47 = (float)((ulong)extraout_var >> 0x20);
    auVar55._12_4_ = fVar47 * fVar47;
    auVar32 = NEON_ext(auVar55,auVar55,8,1);
    fVar47 = 1.0 / SQRT(auVar32._0_4_ + auVar55._0_4_ + auVar55._4_4_);
    *(ulong *)(*pauVar19 + 8) = (ulong)(uint)(fVar46 * fVar47);
    *(ulong *)*pauVar19 = CONCAT44(fVar45 * fVar47,fVar27 * fVar47);
    pcVar18 = *(code **)(pfVar5 + 0x20);
    plVar1 = (long *)(*(long *)pfVar5 + ((long)*(ulong *)(pfVar5 + 0x22) >> 1));
    if ((*(ulong *)(pfVar5 + 0x22) & 1) != 0) {
      pcVar18 = *(code **)(*plVar1 + ((ulong)pcVar18 & 0xffffffff));
    }
    (*pcVar18)(&fStack_74a0,plVar1,pauVar19);
    auVar32 = *pauVar19;
    pcVar18 = *(code **)(pfVar5 + 0x20);
    plVar1 = (long *)(*(long *)(pfVar5 + 2) + ((long)*(ulong *)(pfVar5 + 0x22) >> 1));
    if ((*(ulong *)(pfVar5 + 0x22) & 1) != 0) {
      pcVar18 = *(code **)(*plVar1 + ((ulong)pcVar18 & 0xffffffff));
    }
    auVar30._0_8_ = auVar32._0_8_ ^ 0x8000000080000000;
    auVar30[8] = auVar32[8];
    auVar30[9] = auVar32[9];
    auVar30[10] = auVar32[10];
    auVar30[0xb] = auVar32[0xb] ^ 0x80;
    auVar42[0xc] = auVar32[0xc];
    auVar42._0_12_ = auVar30;
    auVar42[0xd] = auVar32[0xd];
    auVar42[0xe] = auVar32[0xe];
    auVar42[0xf] = auVar32[0xf] ^ 0x80;
    fVar27 = (float)auVar30._0_8_;
    auVar56._0_4_ = pfVar5[4] * fVar27;
    fVar45 = (float)(auVar30._0_8_ >> 0x20);
    auVar56._4_4_ = pfVar5[5] * fVar45;
    fVar46 = auVar30._8_4_;
    auVar56._8_4_ = pfVar5[6] * fVar46;
    auVar56._12_4_ = pfVar5[7] * auVar42._12_4_;
    auVar69._0_4_ = pfVar5[8] * fVar27;
    auVar69._4_4_ = pfVar5[9] * fVar45;
    auVar69._8_4_ = pfVar5[10] * fVar46;
    auVar69._12_4_ = pfVar5[0xb] * auVar42._12_4_;
    auVar43._0_4_ = pfVar5[0xc] * fVar27;
    auVar43._4_4_ = pfVar5[0xd] * fVar45;
    auVar43._8_4_ = pfVar5[0xe] * fVar46;
    auVar32 = NEON_ext(auVar56,auVar56,8,1);
    auVar77 = NEON_ext(auVar69,auVar69,8,1);
    auVar43._12_4_ = 0;
    uStack_7490 = CONCAT44(auVar69._0_4_ + auVar69._4_4_ + auVar77._0_4_,
                           auVar56._0_4_ + auVar56._4_4_ + auVar32._0_4_);
    auVar32 = NEON_ext(auVar43,auVar43,8,1);
    uStack_7488 = (ulong)(uint)(auVar43._0_4_ + auVar43._4_4_ + auVar32._0_4_ + auVar32._4_4_);
    (*pcVar18)(&fStack_7480,plVar1,&uStack_7490);
    auVar57._0_4_ = pfVar5[0x10] * fStack_7480;
    auVar57._4_4_ = pfVar5[0x11] * fStack_747c;
    auVar57._8_4_ = pfVar5[0x12] * fStack_7478;
    auVar57._12_4_ = pfVar5[0x13] * fStack_7474;
    auVar70._0_4_ = fStack_7480 * pfVar5[0x14];
    auVar70._4_4_ = fStack_747c * pfVar5[0x15];
    auVar70._8_4_ = fStack_7478 * pfVar5[0x16];
    auVar70._12_4_ = fStack_7474 * pfVar5[0x17];
    fVar27 = pfVar5[0x1c];
    fVar45 = pfVar5[0x1d];
    auVar44._0_4_ = fStack_7480 * pfVar5[0x18];
    auVar44._4_4_ = fStack_747c * pfVar5[0x19];
    auVar44._8_4_ = fStack_7478 * pfVar5[0x1a];
    auVar77 = NEON_ext(auVar57,auVar57,8,1);
    auVar93 = NEON_ext(auVar70,auVar70,8,1);
    auVar44._12_4_ = 0;
    auVar32 = NEON_ext(auVar44,auVar44,8,1);
    *(ulong *)(pauVar19[1] + 8) =
         (ulong)(uint)(fStack_7498 -
                      (auVar44._0_4_ + auVar44._4_4_ + auVar32._0_4_ + auVar32._4_4_ + pfVar5[0x1e])
                      );
    *(ulong *)pauVar19[1] =
         CONCAT44(fStack_749c - (auVar70._0_4_ + auVar70._4_4_ + auVar93._0_4_ + fVar45),
                  fStack_74a0 - (auVar57._0_4_ + auVar57._4_4_ + auVar77._0_4_ + fVar27));
    return;
  }
  return;
}



/* Entry: 10981f30c; end: 10981f61b;  */

void FUN_10981f30c(float *param_1,undefined1 (*param_2) [16],float *param_3,float *param_4,
                  int *param_5)

{
  long *plVar1;
  uint uVar2;
  float fVar3;
  long lVar4;
  code *pcVar5;
  uint uVar6;
  float *pfVar7;
  ulong uVar8;
  float fVar9;
  undefined8 uVar10;
  float fVar17;
  undefined1 auVar11 [12];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined8 extraout_var;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  float fVar18;
  float fVar24;
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  float fVar25;
  float fVar31;
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  float fVar35;
  float fVar38;
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  float fVar39;
  undefined1 auVar40 [16];
  float fVar41;
  undefined1 auVar42 [16];
  float fVar43;
  float fVar44;
  float fVar47;
  float fVar48;
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  float fVar49;
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  float fVar53;
  float fVar54;
  float fVar55;
  float fVar56;
  float fVar57;
  float fVar58;
  undefined8 uVar59;
  float fVar60;
  float fStack_c0;
  float fStack_bc;
  float fStack_b8;
  undefined8 uStack_b0;
  ulong uStack_a8;
  float fStack_a0;
  float fStack_9c;
  float fStack_98;
  float fStack_94;
  undefined8 uStack_60;
  ulong uStack_58;
  undefined8 uStack_50;
  ulong uStack_48;
  undefined8 uStack_40;
  ulong uStack_38;
  float *pfStack_30;
  undefined1 (*pauStack_28) [16];
  float *pfStack_20;
  long lStack_18;
  undefined1 auVar14 [16];
  
  lStack_18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pfStack_30 = param_1;
  pauStack_28 = param_2;
  fVar35 = *param_1 - *(float *)*param_2;
  fVar38 = param_1[1] - *(float *)(*param_2 + 4);
  auVar50._0_8_ = CONCAT44(fVar38,fVar35);
  auVar50._8_4_ = param_1[2] - *(float *)(*param_2 + 8);
  auVar50._12_4_ = 0;
  fVar25 = *(float *)*param_2 - *param_3;
  fVar31 = *(float *)(*param_2 + 4) - param_3[1];
  auVar26._0_8_ = CONCAT44(fVar31,fVar25);
  auVar26._8_4_ = *(float *)(*param_2 + 8) - param_3[2];
  auVar26._12_4_ = 0;
  pfStack_20 = param_3;
  uStack_58 = (ulong)(uint)auVar50._8_4_;
  uStack_60 = auVar50._0_8_;
  uStack_48 = (ulong)(uint)auVar26._8_4_;
  uStack_50 = auVar26._0_8_;
  fVar18 = *param_3 - *param_1;
  fVar24 = param_3[1] - param_1[1];
  auVar40._0_8_ = CONCAT44(fVar24,fVar18);
  auVar40._8_4_ = param_3[2] - param_1[2];
  auVar40._12_4_ = 0;
  uStack_38 = (ulong)(uint)auVar40._8_4_;
  uStack_40 = auVar40._0_8_;
  auVar12 = NEON_ext(auVar50,auVar50,0xc,1);
  auVar12 = NEON_ext(auVar12,auVar50,8,1);
  auVar32 = NEON_ext(auVar26,auVar26,0xc,1);
  auVar33 = NEON_ext(auVar32,auVar26,8,1);
  auVar32._0_4_ = auVar33._0_4_ * fVar35 - auVar12._0_4_ * fVar25;
  auVar32._4_4_ = auVar33._4_4_ * fVar38 - auVar12._4_4_ * fVar31;
  auVar32._8_4_ = auVar33._8_4_ * auVar50._8_4_ - auVar12._8_4_ * auVar26._8_4_;
  auVar32._12_4_ = auVar33._12_4_ * 0.0 - auVar12._12_4_ * 0.0;
  auVar12 = NEON_ext(auVar32,auVar32,0xc,1);
  auVar32 = NEON_ext(auVar12,auVar32,8,1);
  auVar36._0_12_ = auVar32._0_12_;
  auVar36._12_4_ = 0;
  fVar35 = auVar32._0_4_;
  auVar12._0_4_ = fVar35 * fVar35;
  fVar38 = auVar32._4_4_;
  auVar12._4_4_ = fVar38 * fVar38;
  fVar17 = auVar32._8_4_;
  auVar12._8_4_ = fVar17 * fVar17;
  auVar12._12_4_ = 0;
  auVar32 = NEON_ext(auVar12,auVar12,8,1);
  fVar39 = auVar12._0_4_ + auVar12._4_4_ + auVar32._0_4_;
  if (0.0 < fVar39) {
    lVar4 = 0;
    uVar6 = 0;
    auVar12 = NEON_ext(auVar36,auVar36,0xc,1);
    auVar12 = NEON_ext(auVar12,auVar36,8,1);
    fVar41 = 0.0;
    fVar9 = -1.0;
    fVar43 = 0.0;
    do {
      pfVar7 = (&pfStack_30)[lVar4];
      auVar32 = *(undefined1 (*) [16])(&uStack_60 + lVar4 * 2);
      auVar50 = NEON_ext(auVar32,auVar32,0xc,1);
      auVar50 = NEON_ext(auVar50,auVar32,8,1);
      auVar45._0_4_ = auVar12._0_4_ * auVar32._0_4_ - auVar50._0_4_ * fVar35;
      auVar45._4_4_ = auVar12._4_4_ * auVar32._4_4_ - auVar50._4_4_ * fVar38;
      auVar45._8_4_ = auVar12._8_4_ * auVar32._8_4_ - auVar50._8_4_ * fVar17;
      auVar45._12_4_ = auVar12._12_4_ * auVar32._12_4_ - auVar50._12_4_ * 0.0;
      auVar32 = NEON_ext(auVar45,auVar45,0xc,1);
      auVar32 = NEON_ext(auVar32,auVar45,8,1);
      fVar44 = *pfVar7;
      fVar47 = pfVar7[1];
      fVar48 = pfVar7[2];
      fVar3 = pfVar7[3];
      auVar51._0_4_ = fVar44 * auVar32._0_4_;
      auVar51._4_4_ = fVar47 * auVar32._4_4_;
      auVar51._8_4_ = fVar48 * auVar32._8_4_;
      auVar51._12_4_ = fVar3 * 0.0;
      auVar32 = NEON_ext(auVar51,auVar51,8,1);
      if (0.0 < auVar51._0_4_ + auVar51._4_4_ + auVar32._0_4_) {
        uVar2 = *(uint *)(&UNK_10e001e58 + lVar4 * 4);
        uVar8 = (ulong)uVar2;
        uVar59 = *(undefined8 *)((&pfStack_30)[uVar8] + 2);
        uVar10 = *(undefined8 *)(&pfStack_30)[uVar8];
        fVar56 = (float)uVar10;
        fVar53 = fVar56 - fVar44;
        fVar57 = (float)((ulong)uVar10 >> 0x20);
        fVar54 = fVar57 - fVar47;
        fVar58 = (float)uVar59;
        fVar55 = fVar58 - fVar48;
        auVar52._0_4_ = fVar53 * fVar53;
        auVar52._4_4_ = fVar54 * fVar54;
        auVar52._8_4_ = fVar55 * fVar55;
        auVar52._12_4_ = 0;
        auVar32 = NEON_ext(auVar52,auVar52,8,1);
        fVar60 = auVar52._0_4_ + auVar52._4_4_ + auVar32._0_4_;
        fVar49 = -1.0;
        if (0.0 < fVar60) {
          auVar42._0_4_ = fVar44 * fVar53;
          auVar42._4_4_ = fVar47 * fVar54;
          auVar42._8_4_ = fVar48 * fVar55;
          auVar42._12_4_ = fVar3 * 0.0;
          auVar32 = NEON_ext(auVar42,auVar42,8,1);
          fVar41 = -(auVar32._0_4_ + auVar42._0_4_ + auVar42._4_4_) / fVar60;
          if (1.0 <= fVar41) {
            auVar46._0_4_ = fVar56 * fVar56;
            auVar46._4_4_ = fVar57 * fVar57;
            auVar46._8_4_ = fVar58 * fVar58;
            fVar41 = (float)((ulong)uVar59 >> 0x20);
            auVar46._12_4_ = fVar41 * fVar41;
            fVar41 = 1.0;
            fVar43 = 0.0;
            uVar6 = 2;
          }
          else if (fVar41 <= 0.0) {
            auVar46._0_4_ = fVar44 * fVar44;
            auVar46._4_4_ = fVar47 * fVar47;
            auVar46._8_4_ = fVar48 * fVar48;
            auVar46._12_4_ = fVar3 * fVar3;
            fVar41 = 0.0;
            fVar43 = 1.0;
            uVar6 = 1;
          }
          else {
            fVar43 = 1.0 - fVar41;
            fVar44 = fVar44 + fVar53 * fVar41;
            fVar47 = fVar47 + fVar54 * fVar41;
            fVar48 = fVar48 + fVar55 * fVar41;
            auVar46._0_4_ = fVar44 * fVar44;
            auVar46._4_4_ = fVar47 * fVar47;
            auVar46._8_4_ = fVar48 * fVar48;
            auVar46._12_4_ = (fVar3 + 0.0) * (fVar3 + 0.0);
            uVar6 = 3;
          }
          auVar32 = NEON_ext(auVar46,auVar46,8,1);
          fVar49 = auVar46._0_4_ + auVar46._4_4_ + auVar32._0_4_;
        }
        if ((fVar9 < 0.0) || (fVar49 < fVar9)) {
          param_4[lVar4] = fVar43;
          param_4[uVar8] = fVar41;
          *param_5 = (-(uVar6 & 1) & 1 << (ulong)((uint)lVar4 & 0x1f)) +
                     (1 << (ulong)(uVar2 & 0x1f) & (int)(uVar6 << 0x1e) >> 0x1f);
          param_4[*(uint *)(&UNK_10e001e58 + uVar8 * 4)] = 0.0;
          fVar9 = fVar49;
        }
      }
      lVar4 = lVar4 + 1;
    } while (lVar4 != 3);
    if (fVar9 < 0.0) {
      auVar13._0_4_ = *param_1 * fVar35;
      auVar13._4_4_ = param_1[1] * fVar38;
      auVar13._8_4_ = param_1[2] * fVar17;
      auVar13._12_4_ = param_1[3] * 0.0;
      auVar12 = NEON_ext(auVar13,auVar13,8,1);
      fVar9 = (auVar13._0_4_ + auVar13._4_4_ + auVar12._0_4_) / fVar39;
      fVar35 = fVar35 * fVar9;
      fVar38 = fVar38 * fVar9;
      fVar17 = fVar17 * fVar9;
      *param_5 = 7;
      auVar37._0_4_ = *(float *)*param_2 - fVar35;
      auVar37._4_4_ = *(float *)(*param_2 + 4) - fVar38;
      auVar37._8_4_ = *(float *)(*param_2 + 8) - fVar17;
      auVar37._12_4_ = 0;
      auVar12 = NEON_ext(auVar37,auVar37,0xc,1);
      auVar12 = NEON_ext(auVar12,auVar37,8,1);
      auVar27._0_4_ = auVar12._0_4_ * fVar25 - auVar33._0_4_ * auVar37._0_4_;
      auVar27._4_4_ = auVar12._4_4_ * fVar31 - auVar33._4_4_ * auVar37._4_4_;
      auVar27._8_4_ = auVar12._8_4_ * auVar26._8_4_ - auVar33._8_4_ * auVar37._8_4_;
      auVar27._12_4_ = auVar12._12_4_ * 0.0 - auVar33._12_4_ * 0.0;
      auVar12 = NEON_ext(auVar27,auVar27,0xc,1);
      auVar12 = NEON_ext(auVar12,auVar27,8,1);
      auVar28._0_4_ = auVar12._0_4_ * auVar12._0_4_;
      auVar28._4_4_ = auVar12._4_4_ * auVar12._4_4_;
      auVar28._8_4_ = auVar12._8_4_ * auVar12._8_4_;
      auVar28._12_4_ = 0;
      auVar12 = NEON_ext(auVar28,auVar28,8,1);
      fVar25 = SQRT(auVar28._0_4_ + auVar28._4_4_ + auVar12._0_4_) / SQRT(fVar39);
      *param_4 = fVar25;
      auVar34._0_4_ = *param_3 - fVar35;
      auVar34._4_4_ = param_3[1] - fVar38;
      auVar34._8_4_ = param_3[2] - fVar17;
      auVar33._0_4_ = fVar35 * fVar35;
      auVar33._4_4_ = fVar38 * fVar38;
      auVar33._8_4_ = fVar17 * fVar17;
      auVar33._12_4_ = 0;
      auVar34._12_4_ = 0;
      NEON_ext(auVar33,auVar33,8,1);
      auVar12 = NEON_ext(auVar40,auVar40,0xc,1);
      auVar12 = NEON_ext(auVar12,auVar40,8,1);
      auVar32 = NEON_ext(auVar34,auVar34,0xc,1);
      auVar32 = NEON_ext(auVar32,auVar34,8,1);
      auVar19._0_4_ = auVar32._0_4_ * fVar18 - auVar12._0_4_ * auVar34._0_4_;
      auVar19._4_4_ = auVar32._4_4_ * fVar24 - auVar12._4_4_ * auVar34._4_4_;
      auVar19._8_4_ = auVar32._8_4_ * auVar40._8_4_ - auVar12._8_4_ * auVar34._8_4_;
      auVar19._12_4_ = auVar32._12_4_ * 0.0 - auVar12._12_4_ * 0.0;
      auVar12 = NEON_ext(auVar19,auVar19,0xc,1);
      auVar12 = NEON_ext(auVar12,auVar19,8,1);
      auVar20._0_4_ = auVar12._0_4_ * auVar12._0_4_;
      auVar20._4_4_ = auVar12._4_4_ * auVar12._4_4_;
      auVar20._8_4_ = auVar12._8_4_ * auVar12._8_4_;
      auVar20._12_4_ = 0;
      auVar12 = NEON_ext(auVar20,auVar20,8,1);
      fVar35 = SQRT(auVar20._0_4_ + auVar20._4_4_ + auVar12._0_4_) / SQRT(fVar39);
      param_4[1] = fVar35;
      param_4[2] = 1.0 - (fVar25 + fVar35);
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_18) {
    return;
  }
  uVar10 = ___stack_chk_fail();
  fVar35 = (float)uVar10;
  auVar21._0_4_ = fVar35 * fVar35;
  fVar38 = (float)((ulong)uVar10 >> 0x20);
  auVar21._4_4_ = fVar38 * fVar38;
  fVar17 = (float)extraout_var;
  auVar21._8_4_ = fVar17 * fVar17;
  fVar18 = (float)((ulong)extraout_var >> 0x20);
  auVar21._12_4_ = fVar18 * fVar18;
  auVar12 = NEON_ext(auVar21,auVar21,8,1);
  fVar18 = 1.0 / SQRT(auVar12._0_4_ + auVar21._0_4_ + auVar21._4_4_);
  *(ulong *)(*param_2 + 8) = (ulong)(uint)(fVar17 * fVar18);
  *(ulong *)*param_2 = CONCAT44(fVar38 * fVar18,fVar35 * fVar18);
  pcVar5 = *(code **)(param_1 + 0x20);
  plVar1 = (long *)(*(long *)param_1 + ((long)*(ulong *)(param_1 + 0x22) >> 1));
  if ((*(ulong *)(param_1 + 0x22) & 1) != 0) {
    pcVar5 = *(code **)(*plVar1 + ((ulong)pcVar5 & 0xffffffff));
  }
  (*pcVar5)(&fStack_c0,plVar1,param_2);
  auVar12 = *param_2;
  pcVar5 = *(code **)(param_1 + 0x20);
  plVar1 = (long *)(*(long *)(param_1 + 2) + ((long)*(ulong *)(param_1 + 0x22) >> 1));
  if ((*(ulong *)(param_1 + 0x22) & 1) != 0) {
    pcVar5 = *(code **)(*plVar1 + ((ulong)pcVar5 & 0xffffffff));
  }
  auVar11._0_8_ = auVar12._0_8_ ^ 0x8000000080000000;
  auVar11[8] = auVar12[8];
  auVar11[9] = auVar12[9];
  auVar11[10] = auVar12[10];
  auVar11[0xb] = auVar12[0xb] ^ 0x80;
  auVar14[0xc] = auVar12[0xc];
  auVar14._0_12_ = auVar11;
  auVar14[0xd] = auVar12[0xd];
  auVar14[0xe] = auVar12[0xe];
  auVar14[0xf] = auVar12[0xf] ^ 0x80;
  fVar35 = (float)auVar11._0_8_;
  auVar22._0_4_ = param_1[4] * fVar35;
  fVar38 = (float)(auVar11._0_8_ >> 0x20);
  auVar22._4_4_ = param_1[5] * fVar38;
  fVar17 = auVar11._8_4_;
  auVar22._8_4_ = param_1[6] * fVar17;
  auVar22._12_4_ = param_1[7] * auVar14._12_4_;
  auVar29._0_4_ = param_1[8] * fVar35;
  auVar29._4_4_ = param_1[9] * fVar38;
  auVar29._8_4_ = param_1[10] * fVar17;
  auVar29._12_4_ = param_1[0xb] * auVar14._12_4_;
  auVar15._0_4_ = param_1[0xc] * fVar35;
  auVar15._4_4_ = param_1[0xd] * fVar38;
  auVar15._8_4_ = param_1[0xe] * fVar17;
  auVar12 = NEON_ext(auVar22,auVar22,8,1);
  auVar32 = NEON_ext(auVar29,auVar29,8,1);
  auVar15._12_4_ = 0;
  uStack_b0 = CONCAT44(auVar29._0_4_ + auVar29._4_4_ + auVar32._0_4_,
                       auVar22._0_4_ + auVar22._4_4_ + auVar12._0_4_);
  auVar12 = NEON_ext(auVar15,auVar15,8,1);
  uStack_a8 = (ulong)(uint)(auVar15._0_4_ + auVar15._4_4_ + auVar12._0_4_ + auVar12._4_4_);
  (*pcVar5)(&fStack_a0,plVar1,&uStack_b0);
  auVar23._0_4_ = param_1[0x10] * fStack_a0;
  auVar23._4_4_ = param_1[0x11] * fStack_9c;
  auVar23._8_4_ = param_1[0x12] * fStack_98;
  auVar23._12_4_ = param_1[0x13] * fStack_94;
  auVar30._0_4_ = fStack_a0 * param_1[0x14];
  auVar30._4_4_ = fStack_9c * param_1[0x15];
  auVar30._8_4_ = fStack_98 * param_1[0x16];
  auVar30._12_4_ = fStack_94 * param_1[0x17];
  fVar35 = param_1[0x1c];
  fVar38 = param_1[0x1d];
  auVar16._0_4_ = fStack_a0 * param_1[0x18];
  auVar16._4_4_ = fStack_9c * param_1[0x19];
  auVar16._8_4_ = fStack_98 * param_1[0x1a];
  auVar32 = NEON_ext(auVar23,auVar23,8,1);
  auVar40 = NEON_ext(auVar30,auVar30,8,1);
  auVar16._12_4_ = 0;
  auVar12 = NEON_ext(auVar16,auVar16,8,1);
  *(ulong *)(param_2[1] + 8) =
       (ulong)(uint)(fStack_b8 -
                    (auVar16._0_4_ + auVar16._4_4_ + auVar12._0_4_ + auVar12._4_4_ + param_1[0x1e]))
  ;
  *(ulong *)param_2[1] =
       CONCAT44(fStack_bc - (auVar30._0_4_ + auVar30._4_4_ + auVar40._0_4_ + fVar38),
                fStack_c0 - (auVar23._0_4_ + auVar23._4_4_ + auVar32._0_4_ + fVar35));
  return;
}



/* Entry: 10981f61c; end: 10981f75f;  */

void FUN_10981f61c(long *param_1,undefined8 *param_2)

{
  long *plVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  float fVar4;
  float fVar5;
  float fVar6;
  code *pcVar7;
  undefined1 in_b0;
  undefined1 in_register_00005001;
  undefined1 in_register_00005002;
  undefined1 in_register_00005003;
  undefined1 in_register_00005004;
  undefined1 in_register_00005005;
  undefined1 uVar8;
  undefined1 in_register_00005006;
  undefined1 uVar9;
  undefined1 in_register_00005007;
  undefined1 uVar10;
  undefined1 in_register_00005008;
  undefined1 in_register_00005009;
  undefined1 uVar11;
  undefined1 in_register_0000500a;
  undefined1 uVar12;
  undefined1 in_register_0000500b;
  undefined1 uVar13;
  undefined1 in_register_0000500c;
  undefined1 in_register_0000500d;
  undefined1 in_register_0000500e;
  undefined1 in_register_0000500f;
  float fVar14;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  float fStack_60;
  float fStack_5c;
  float fStack_58;
  undefined8 uStack_50;
  ulong uStack_48;
  undefined1 auStack_40 [16];
  
  auVar20._0_4_ =
       (float)CONCAT13(in_register_00005003,
                       CONCAT12(in_register_00005002,CONCAT11(in_register_00005001,in_b0))) *
       (float)CONCAT13(in_register_00005003,
                       CONCAT12(in_register_00005002,CONCAT11(in_register_00005001,in_b0)));
  auVar20._4_4_ =
       (float)CONCAT13(in_register_00005007,
                       CONCAT12(in_register_00005006,
                                CONCAT11(in_register_00005005,in_register_00005004))) *
       (float)CONCAT13(in_register_00005007,
                       CONCAT12(in_register_00005006,
                                CONCAT11(in_register_00005005,in_register_00005004)));
  auVar20._8_4_ =
       (float)CONCAT13(in_register_0000500b,
                       CONCAT12(in_register_0000500a,
                                CONCAT11(in_register_00005009,in_register_00005008))) *
       (float)CONCAT13(in_register_0000500b,
                       CONCAT12(in_register_0000500a,
                                CONCAT11(in_register_00005009,in_register_00005008)));
  auVar20._12_4_ =
       (float)CONCAT13(in_register_0000500f,
                       CONCAT12(in_register_0000500e,
                                CONCAT11(in_register_0000500d,in_register_0000500c))) *
       (float)CONCAT13(in_register_0000500f,
                       CONCAT12(in_register_0000500e,
                                CONCAT11(in_register_0000500d,in_register_0000500c)));
  auVar15 = NEON_ext(auVar20,auVar20,8,1);
  fVar14 = 1.0 / SQRT(auVar15._0_4_ + auVar20._0_4_ + auVar20._4_4_);
  fVar4 = (float)CONCAT13(in_register_00005007,
                          CONCAT12(in_register_00005006,
                                   CONCAT11(in_register_00005005,in_register_00005004))) * fVar14;
  param_2[1] = (ulong)(uint)((float)CONCAT13(in_register_0000500b,
                                             CONCAT12(in_register_0000500a,
                                                      CONCAT11(in_register_00005009,
                                                               in_register_00005008))) * fVar14);
  *param_2 = CONCAT17((char)((uint)fVar4 >> 0x18),
                      CONCAT16((char)((uint)fVar4 >> 0x10),
                               CONCAT15((char)((uint)fVar4 >> 8),
                                        CONCAT14(SUB41(fVar4,0),
                                                 (float)CONCAT13(in_register_00005003,
                                                                 CONCAT12(in_register_00005002,
                                                                          CONCAT11(
                                                  in_register_00005001,in_b0))) * fVar14))));
  pcVar7 = (code *)param_1[0x10];
  plVar1 = (long *)(*param_1 + (param_1[0x11] >> 1));
  if ((param_1[0x11] & 1U) != 0) {
    pcVar7 = *(code **)(*plVar1 + ((ulong)pcVar7 & 0xffffffff));
  }
  (*pcVar7)(&fStack_60,plVar1,param_2);
  pcVar7 = (code *)param_1[0x10];
  plVar1 = (long *)(param_1[1] + (param_1[0x11] >> 1));
  if ((param_1[0x11] & 1U) != 0) {
    pcVar7 = *(code **)(*plVar1 + ((ulong)pcVar7 & 0xffffffff));
  }
  fVar14 = (float)*param_2;
  auVar16._0_4_ = *(float *)(param_1 + 2) * -fVar14;
  fVar6 = (float)((ulong)*param_2 >> 0x20);
  auVar16._4_4_ = *(float *)((long)param_1 + 0x14) * -fVar6;
  fVar5 = (float)param_2[1];
  auVar16._8_4_ = *(float *)(param_1 + 3) * -fVar5;
  fVar4 = (float)((ulong)param_2[1] >> 0x20);
  auVar16._12_4_ = *(float *)((long)param_1 + 0x1c) * -fVar4;
  auVar18._0_4_ = *(float *)(param_1 + 4) * -fVar14;
  auVar18._4_4_ = *(float *)((long)param_1 + 0x24) * -fVar6;
  auVar18._8_4_ = *(float *)(param_1 + 5) * -fVar5;
  auVar18._12_4_ = *(float *)((long)param_1 + 0x2c) * -fVar4;
  fVar4 = *(float *)(param_1 + 6) * -fVar14;
  fVar14 = *(float *)((long)param_1 + 0x34) * -fVar6;
  uVar8 = (undefined1)((uint)fVar14 >> 8);
  uVar9 = (undefined1)((uint)fVar14 >> 0x10);
  uVar10 = (undefined1)((uint)fVar14 >> 0x18);
  fVar5 = *(float *)(param_1 + 7) * -fVar5;
  uVar11 = (undefined1)((uint)fVar5 >> 8);
  uVar12 = (undefined1)((uint)fVar5 >> 0x10);
  uVar13 = (undefined1)((uint)fVar5 >> 0x18);
  auVar20 = NEON_ext(auVar16,auVar16,8,1);
  auVar15 = NEON_ext(auVar18,auVar18,8,1);
  uStack_50 = CONCAT44(auVar18._0_4_ + auVar18._4_4_ + auVar15._0_4_,
                       auVar16._0_4_ + auVar16._4_4_ + auVar20._0_4_);
  auVar15[4] = SUB41(fVar14,0);
  auVar15._0_4_ = fVar4;
  auVar15[5] = uVar8;
  auVar15[6] = uVar9;
  auVar15[7] = uVar10;
  auVar15[8] = SUB41(fVar5,0);
  auVar15[9] = uVar11;
  auVar15[10] = uVar12;
  auVar15[0xb] = uVar13;
  auVar15._12_4_ = 0;
  auVar21[4] = SUB41(fVar14,0);
  auVar21._0_4_ = fVar4;
  auVar21[5] = uVar8;
  auVar21[6] = uVar9;
  auVar21[7] = uVar10;
  auVar21[8] = SUB41(fVar5,0);
  auVar21[9] = uVar11;
  auVar21[10] = uVar12;
  auVar21[0xb] = uVar13;
  auVar21._12_4_ = 0;
  auVar20 = NEON_ext(auVar15,auVar21,8,1);
  uStack_48 = (ulong)(uint)(fVar4 + fVar14 + auVar20._0_4_ + auVar20._4_4_);
  (*pcVar7)(auStack_40,plVar1,&uStack_50);
  fVar4 = (float)auStack_40._0_8_;
  auVar17._0_4_ = *(float *)(param_1 + 8) * fVar4;
  fVar14 = SUB84(auStack_40._0_8_,4);
  auVar17._4_4_ = *(float *)((long)param_1 + 0x44) * fVar14;
  fVar5 = (float)auStack_40._8_8_;
  auVar17._8_4_ = *(float *)(param_1 + 9) * fVar5;
  auVar17._12_4_ = *(float *)((long)param_1 + 0x4c) * SUB84(auStack_40._8_8_,4);
  auVar19._0_4_ = fVar4 * *(float *)(param_1 + 10);
  auVar19._4_4_ = fVar14 * *(float *)((long)param_1 + 0x54);
  auVar19._8_4_ = fVar5 * *(float *)(param_1 + 0xb);
  auVar19._12_4_ = SUB84(auStack_40._8_8_,4) * *(float *)((long)param_1 + 0x5c);
  fVar6 = *(float *)(param_1 + 0xe);
  fVar4 = fVar4 * *(float *)(param_1 + 0xc);
  fVar14 = fVar14 * *(float *)((long)param_1 + 100);
  uVar8 = (undefined1)((uint)fVar14 >> 8);
  uVar9 = (undefined1)((uint)fVar14 >> 0x10);
  uVar10 = (undefined1)((uint)fVar14 >> 0x18);
  fVar5 = fVar5 * *(float *)(param_1 + 0xd);
  uVar11 = (undefined1)((uint)fVar5 >> 8);
  uVar12 = (undefined1)((uint)fVar5 >> 0x10);
  uVar13 = (undefined1)((uint)fVar5 >> 0x18);
  auVar15 = NEON_ext(auVar17,auVar17,8,1);
  auVar21 = NEON_ext(auVar19,auVar19,8,1);
  auVar2[4] = SUB41(fVar14,0);
  auVar2._0_4_ = fVar4;
  auVar2[5] = uVar8;
  auVar2[6] = uVar9;
  auVar2[7] = uVar10;
  auVar2[8] = SUB41(fVar5,0);
  auVar2[9] = uVar11;
  auVar2[10] = uVar12;
  auVar2[0xb] = uVar13;
  auVar2._12_4_ = 0;
  auVar3[4] = SUB41(fVar14,0);
  auVar3._0_4_ = fVar4;
  auVar3[5] = uVar8;
  auVar3[6] = uVar9;
  auVar3[7] = uVar10;
  auVar3[8] = SUB41(fVar5,0);
  auVar3[9] = uVar11;
  auVar3[10] = uVar12;
  auVar3[0xb] = uVar13;
  auVar3._12_4_ = 0;
  auVar20 = NEON_ext(auVar2,auVar3,8,1);
  fStack_5c = fStack_5c -
              (auVar19._0_4_ + auVar19._4_4_ + auVar21._0_4_ + *(float *)((long)param_1 + 0x74));
  param_2[3] = (ulong)(uint)(fStack_58 -
                            (fVar4 + fVar14 + auVar20._0_4_ + auVar20._4_4_ +
                            *(float *)(param_1 + 0xf)));
  param_2[2] = CONCAT17((char)((uint)fStack_5c >> 0x18),
                        CONCAT16((char)((uint)fStack_5c >> 0x10),
                                 CONCAT15((char)((uint)fStack_5c >> 8),
                                          CONCAT14(SUB41(fStack_5c,0),
                                                   fStack_60 -
                                                   (auVar17._0_4_ + auVar17._4_4_ + auVar15._0_4_ +
                                                   fVar6)))));
  return;
}



/* Entry: 10981f760; end: 10981f7ab;  */

float FUN_10981f760(float *param_1,float *param_2,float *param_3)

{
  return param_1[2] * *param_2 * param_3[1] + *param_3 * param_1[1] * param_2[2] +
         param_3[1] * -(*param_1 * param_2[2]) + param_3[2] * -(param_1[1] * *param_2) +
         param_3[2] * *param_1 * param_2[1] + *param_3 * -(param_1[2] * param_2[1]);
}



/* Entry: 10981f7ac; end: 10981fbdf;  */

undefined8 FUN_10981f7ac(ulong param_1)

{
  long lVar1;
  long lVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  undefined1 auVar6 [16];
  undefined8 uVar7;
  long *plVar8;
  long lVar9;
  ulong uVar10;
  long lVar11;
  float fVar12;
  float fVar15;
  float fVar16;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  float fVar17;
  float fVar20;
  float fVar21;
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  float fVar22;
  float fVar25;
  float fVar26;
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  plVar8 = *(long **)(param_1 + 0x1c8);
  iVar3 = (int)plVar8[6];
  if (iVar3 < 3) {
    if (iVar3 == 1) {
      lVar11 = 0;
      lVar1 = param_1 + 0x1a0;
      uVar10 = (ulong)(*(int *)(param_1 + 0x1c0) - 1);
      uVar7 = *(undefined8 *)(lVar1 + uVar10 * 8);
      do {
        uStack_50 = 0;
        uStack_48 = 0;
        *(undefined4 *)((long)&uStack_50 + lVar11) = 0x3f800000;
        lVar9 = *(long *)(param_1 + 0x1c8);
        uVar4 = *(uint *)(lVar9 + 0x30);
        *(undefined4 *)(lVar9 + (ulong)uVar4 * 4 + 0x20) = 0;
        *(int *)(param_1 + 0x1c0) = (int)uVar10;
        *(undefined8 *)(lVar9 + (ulong)uVar4 * 8) = uVar7;
        *(uint *)(lVar9 + 0x30) = uVar4 + 1;
        FUN_10981f61c(param_1);
        uVar10 = param_1;
        FUN_10981f7ac();
        if ((uVar10 & 1) != 0) {
          return 1;
        }
        lVar9 = *(long *)(param_1 + 0x1c8);
        uVar4 = *(int *)(lVar9 + 0x30) - 1;
        *(uint *)(lVar9 + 0x30) = uVar4;
        uVar7 = *(undefined8 *)(lVar9 + (ulong)uVar4 * 8);
        *(undefined8 *)(lVar1 + (ulong)*(uint *)(param_1 + 0x1c0) * 8) = uVar7;
        lVar9 = *(long *)(param_1 + 0x1c8);
        uVar4 = *(uint *)(lVar9 + 0x30);
        *(undefined4 *)(lVar9 + (ulong)uVar4 * 4 + 0x20) = 0;
        *(undefined8 *)(lVar9 + (ulong)uVar4 * 8) = uVar7;
        *(uint *)(lVar9 + 0x30) = uVar4 + 1;
        FUN_10981f61c(param_1);
        uVar10 = param_1;
        FUN_10981f7ac();
        if ((uVar10 & 1) != 0) {
          return 1;
        }
        lVar9 = *(long *)(param_1 + 0x1c8);
        uVar4 = *(int *)(lVar9 + 0x30) - 1;
        *(uint *)(lVar9 + 0x30) = uVar4;
        uVar7 = *(undefined8 *)(lVar9 + (ulong)uVar4 * 8);
        uVar10 = (ulong)*(uint *)(param_1 + 0x1c0);
        *(uint *)(param_1 + 0x1c0) = *(uint *)(param_1 + 0x1c0) + 1;
        *(undefined8 *)(lVar1 + uVar10 * 8) = uVar7;
        lVar11 = lVar11 + 4;
      } while (lVar11 != 0xc);
    }
    else if (iVar3 == 2) {
      lVar11 = 0;
      lVar1 = *plVar8;
      lVar9 = plVar8[1];
      auVar23._0_8_ =
           CONCAT44(*(float *)(lVar9 + 0x14) - *(float *)(lVar1 + 0x14),
                    *(float *)(lVar9 + 0x10) - *(float *)(lVar1 + 0x10));
      auVar23._8_4_ = *(float *)(lVar9 + 0x18) - *(float *)(lVar1 + 0x18);
      auVar23._12_4_ = 0;
      auVar13 = NEON_ext(auVar23,auVar23,0xc,1);
      auVar13 = NEON_ext(auVar13,auVar23,8,1);
      lVar1 = param_1 + 0x1a0;
      auVar27 = auVar23;
      do {
        uStack_50 = 0;
        uStack_48 = 0;
        *(undefined4 *)((long)&uStack_50 + lVar11) = 0x3f800000;
        auVar6._8_8_ = uStack_48;
        auVar6._0_8_ = uStack_50;
        auVar18 = NEON_ext(auVar6,auVar6,0xc,1);
        auVar18 = NEON_ext(auVar18,auVar6,8,1);
        auVar14._0_4_ = auVar18._0_4_ * auVar27._0_4_ - auVar13._0_4_ * (float)uStack_50;
        auVar14._4_4_ =
             auVar18._4_4_ * auVar27._4_4_ - auVar13._4_4_ * (float)((ulong)uStack_50 >> 0x20);
        auVar14._8_4_ = auVar18._8_4_ * auVar27._8_4_ - auVar13._8_4_ * (float)uStack_48;
        auVar14._12_4_ =
             auVar18._12_4_ * auVar27._12_4_ - auVar13._12_4_ * (float)((ulong)uStack_48 >> 0x20);
        auVar18 = NEON_ext(auVar14,auVar14,0xc,1);
        auVar18 = NEON_ext(auVar18,auVar14,8,1);
        auVar28._0_4_ = auVar18._0_4_ * auVar18._0_4_;
        auVar28._4_4_ = auVar18._4_4_ * auVar18._4_4_;
        auVar28._8_4_ = auVar18._8_4_ * auVar18._8_4_;
        auVar28._12_4_ = 0;
        auVar18 = NEON_ext(auVar28,auVar28,8,1);
        if (0.0 < auVar28._0_4_ + auVar28._4_4_ + auVar18._0_4_) {
          lVar9 = *(long *)(param_1 + 0x1c8);
          uVar4 = *(uint *)(lVar9 + 0x30);
          *(undefined4 *)(lVar9 + (ulong)uVar4 * 4 + 0x20) = 0;
          uVar5 = *(int *)(param_1 + 0x1c0) - 1;
          *(uint *)(param_1 + 0x1c0) = uVar5;
          *(undefined8 *)(lVar9 + (ulong)uVar4 * 8) = *(undefined8 *)(lVar1 + (ulong)uVar5 * 8);
          *(uint *)(lVar9 + 0x30) = uVar4 + 1;
          FUN_10981f61c(param_1);
          uVar10 = param_1;
          FUN_10981f7ac();
          if ((uVar10 & 1) != 0) {
            return 1;
          }
          lVar9 = *(long *)(param_1 + 0x1c8);
          uVar4 = *(int *)(lVar9 + 0x30) - 1;
          *(uint *)(lVar9 + 0x30) = uVar4;
          uVar7 = *(undefined8 *)(lVar9 + (ulong)uVar4 * 8);
          *(undefined8 *)(lVar1 + (ulong)*(uint *)(param_1 + 0x1c0) * 8) = uVar7;
          lVar9 = *(long *)(param_1 + 0x1c8);
          uVar4 = *(uint *)(lVar9 + 0x30);
          *(undefined4 *)(lVar9 + (ulong)uVar4 * 4 + 0x20) = 0;
          *(undefined8 *)(lVar9 + (ulong)uVar4 * 8) = uVar7;
          *(uint *)(lVar9 + 0x30) = uVar4 + 1;
          FUN_10981f61c(param_1);
          uVar10 = param_1;
          FUN_10981f7ac();
          if ((uVar10 & 1) != 0) {
            return 1;
          }
          lVar9 = *(long *)(param_1 + 0x1c8);
          uVar4 = *(int *)(lVar9 + 0x30) - 1;
          *(uint *)(lVar9 + 0x30) = uVar4;
          uVar7 = *(undefined8 *)(lVar9 + (ulong)uVar4 * 8);
          uVar4 = *(uint *)(param_1 + 0x1c0);
          *(uint *)(param_1 + 0x1c0) = uVar4 + 1;
          *(undefined8 *)(lVar1 + (ulong)uVar4 * 8) = uVar7;
          auVar27._8_4_ = auVar23._8_4_;
          auVar27._0_8_ = auVar23._0_8_;
          auVar27._12_4_ = 0;
        }
        lVar11 = lVar11 + 4;
      } while (lVar11 != 0xc);
    }
  }
  else if (iVar3 == 3) {
    lVar1 = *plVar8;
    lVar11 = plVar8[1];
    auVar13._0_4_ = *(float *)(lVar11 + 0x10) - *(float *)(lVar1 + 0x10);
    auVar13._4_4_ = *(float *)(lVar11 + 0x14) - *(float *)(lVar1 + 0x14);
    auVar13._8_4_ = *(float *)(lVar11 + 0x18) - *(float *)(lVar1 + 0x18);
    auVar13._12_4_ = 0;
    lVar11 = plVar8[2];
    auVar19._0_4_ = *(float *)(lVar11 + 0x10) - *(float *)(lVar1 + 0x10);
    auVar19._4_4_ = *(float *)(lVar11 + 0x14) - *(float *)(lVar1 + 0x14);
    auVar19._8_4_ = *(float *)(lVar11 + 0x18) - *(float *)(lVar1 + 0x18);
    auVar19._12_4_ = 0;
    auVar18 = NEON_ext(auVar13,auVar13,0xc,1);
    auVar24 = NEON_ext(auVar18,auVar13,8,1);
    auVar18 = NEON_ext(auVar19,auVar19,0xc,1);
    auVar27 = NEON_ext(auVar18,auVar19,8,1);
    auVar18._0_4_ = auVar27._0_4_ * auVar13._0_4_ - auVar24._0_4_ * auVar19._0_4_;
    auVar18._4_4_ = auVar27._4_4_ * auVar13._4_4_ - auVar24._4_4_ * auVar19._4_4_;
    auVar18._8_4_ = auVar27._8_4_ * auVar13._8_4_ - auVar24._8_4_ * auVar19._8_4_;
    auVar18._12_4_ = auVar27._12_4_ * 0.0 - auVar24._12_4_ * 0.0;
    auVar13 = NEON_ext(auVar18,auVar18,0xc,1);
    auVar13 = NEON_ext(auVar13,auVar18,8,1);
    auVar24._0_4_ = auVar13._0_4_ * auVar13._0_4_;
    auVar24._4_4_ = auVar13._4_4_ * auVar13._4_4_;
    auVar24._8_4_ = auVar13._8_4_ * auVar13._8_4_;
    auVar24._12_4_ = 0;
    auVar13 = NEON_ext(auVar24,auVar24,8,1);
    if (0.0 < auVar24._0_4_ + auVar24._4_4_ + auVar13._0_4_) {
      *(undefined8 *)((long)plVar8 + 0x2c) = 0x400000000;
      lVar1 = param_1 + 0x1a0;
      uVar4 = *(int *)(param_1 + 0x1c0) - 1;
      *(uint *)(param_1 + 0x1c0) = uVar4;
      plVar8[3] = *(long *)(lVar1 + (ulong)uVar4 * 8);
      FUN_10981f61c(param_1);
      uVar10 = param_1;
      FUN_10981f7ac();
      if ((uVar10 & 1) == 0) {
        lVar11 = *(long *)(param_1 + 0x1c8);
        uVar4 = *(int *)(lVar11 + 0x30) - 1;
        *(uint *)(lVar11 + 0x30) = uVar4;
        uVar7 = *(undefined8 *)(lVar11 + (ulong)uVar4 * 8);
        *(undefined8 *)(lVar1 + (ulong)*(uint *)(param_1 + 0x1c0) * 8) = uVar7;
        lVar11 = *(long *)(param_1 + 0x1c8);
        uVar4 = *(uint *)(lVar11 + 0x30);
        *(undefined4 *)(lVar11 + (ulong)uVar4 * 4 + 0x20) = 0;
        *(undefined8 *)(lVar11 + (ulong)uVar4 * 8) = uVar7;
        *(uint *)(lVar11 + 0x30) = uVar4 + 1;
        FUN_10981f61c(param_1);
        uVar10 = param_1;
        FUN_10981f7ac();
        if ((uVar10 & 1) == 0) {
          lVar11 = *(long *)(param_1 + 0x1c8);
          uVar4 = *(int *)(lVar11 + 0x30) - 1;
          *(uint *)(lVar11 + 0x30) = uVar4;
          uVar7 = *(undefined8 *)(lVar11 + (ulong)uVar4 * 8);
          uVar4 = *(uint *)(param_1 + 0x1c0);
          *(uint *)(param_1 + 0x1c0) = uVar4 + 1;
          *(undefined8 *)(lVar1 + (ulong)uVar4 * 8) = uVar7;
          return 0;
        }
      }
      return 1;
    }
  }
  else if (iVar3 == 4) {
    lVar1 = *plVar8;
    lVar9 = plVar8[1];
    lVar11 = plVar8[2];
    lVar2 = plVar8[3];
    fVar17 = *(float *)(lVar2 + 0x10);
    fVar20 = *(float *)(lVar2 + 0x14);
    fVar21 = *(float *)(lVar2 + 0x18);
    fVar12 = *(float *)(lVar1 + 0x10) - fVar17;
    fVar15 = *(float *)(lVar1 + 0x14) - fVar20;
    fVar16 = *(float *)(lVar1 + 0x18) - fVar21;
    fVar22 = *(float *)(lVar9 + 0x10) - fVar17;
    fVar25 = *(float *)(lVar9 + 0x14) - fVar20;
    fVar26 = *(float *)(lVar9 + 0x18) - fVar21;
    fVar17 = *(float *)(lVar11 + 0x10) - fVar17;
    fVar20 = *(float *)(lVar11 + 0x14) - fVar20;
    fVar21 = *(float *)(lVar11 + 0x18) - fVar21;
    fVar17 = fVar22 * fVar16 * fVar20 + fVar17 * fVar15 * fVar26 + -fVar12 * fVar26 * fVar20 +
             -fVar15 * fVar22 * fVar21 + fVar12 * fVar25 * fVar21 + fVar17 * -fVar16 * fVar25;
    if (fVar17 < 0.0) {
      return 1;
    }
    if (fVar17 != 0.0) {
      return 1;
    }
  }
  return 0;
}



/* Entry: 10981fbe0; end: 10981fe13;  */

undefined1 (*) [16]
FUN_10981fbe0(undefined4 *param_1,long param_2,long param_3,long param_4,ulong param_5)

{
  undefined1 (*pauVar1) [16];
  undefined1 (*pauVar2) [16];
  undefined4 uVar3;
  long lVar4;
  undefined1 (*pauVar5) [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  float fVar11;
  
  pauVar5 = *(undefined1 (**) [16])(param_1 + 0x1c1e);
  if (pauVar5 == (undefined1 (*) [16])0x0) {
    *param_1 = 5;
  }
  else {
    lVar4 = *(long *)(pauVar5[4] + 8);
    if (*(long *)pauVar5[5] != 0) {
      *(long *)(*(long *)pauVar5[5] + 0x48) = lVar4;
    }
    if (lVar4 != 0) {
      *(undefined8 *)(lVar4 + 0x50) = *(undefined8 *)pauVar5[5];
    }
    if (*(undefined1 (**) [16])(param_1 + 0x1c1e) == pauVar5) {
      *(undefined8 *)(param_1 + 0x1c1e) = *(undefined8 *)pauVar5[5];
    }
    param_1[0x1c20] = param_1[0x1c20] + -1;
    *(undefined8 *)(pauVar5[4] + 8) = 0;
    lVar4 = *(long *)(param_1 + 0x1c1a);
    *(long *)pauVar5[5] = lVar4;
    if (lVar4 != 0) {
      *(undefined1 (**) [16])(lVar4 + 0x48) = pauVar5;
    }
    *(undefined1 (**) [16])(param_1 + 0x1c1a) = pauVar5;
    param_1[0x1c1c] = param_1[0x1c1c] + 1;
    pauVar5[5][0xb] = 0;
    *(long *)(pauVar5[1] + 8) = param_2;
    *(long *)pauVar5[2] = param_3;
    *(long *)(pauVar5[2] + 8) = param_4;
    auVar7._0_4_ = *(float *)(param_3 + 0x10) - *(float *)(param_2 + 0x10);
    auVar7._4_4_ = *(float *)(param_3 + 0x14) - *(float *)(param_2 + 0x14);
    auVar7._8_4_ = *(float *)(param_3 + 0x18) - *(float *)(param_2 + 0x18);
    auVar7._12_4_ = *(float *)(param_3 + 0x1c) - *(float *)(param_2 + 0x1c);
    auVar6._0_4_ = *(float *)(param_4 + 0x10) - *(float *)(param_2 + 0x10);
    auVar6._4_4_ = *(float *)(param_4 + 0x14) - *(float *)(param_2 + 0x14);
    auVar6._8_4_ = *(float *)(param_4 + 0x18) - *(float *)(param_2 + 0x18);
    auVar6._12_4_ = *(float *)(param_4 + 0x1c) - *(float *)(param_2 + 0x1c);
    auVar8 = NEON_ext(auVar7,auVar7,0xc,1);
    auVar9 = NEON_ext(auVar8,auVar7,8,1);
    auVar8 = NEON_ext(auVar6,auVar6,0xc,1);
    auVar10 = NEON_ext(auVar8,auVar6,8,1);
    auVar8._0_4_ = auVar10._0_4_ * auVar7._0_4_ - auVar9._0_4_ * auVar6._0_4_;
    auVar8._4_4_ = auVar10._4_4_ * auVar7._4_4_ - auVar9._4_4_ * auVar6._4_4_;
    auVar8._8_4_ = auVar10._8_4_ * auVar7._8_4_ - auVar9._8_4_ * auVar6._8_4_;
    auVar8._12_4_ = auVar10._12_4_ * auVar7._12_4_ - auVar9._12_4_ * auVar6._12_4_;
    auVar7 = NEON_ext(auVar8,auVar8,0xc,1);
    auVar7 = NEON_ext(auVar7,auVar8,8,1);
    fVar11 = auVar7._8_4_;
    *(ulong *)(*pauVar5 + 8) = (ulong)(uint)fVar11;
    *(long *)*pauVar5 = auVar7._0_8_;
    auVar9._0_4_ = auVar7._0_4_ * auVar7._0_4_;
    auVar9._4_4_ = auVar7._4_4_ * auVar7._4_4_;
    auVar9._8_4_ = fVar11 * fVar11;
    auVar9._12_4_ = 0;
    auVar7 = NEON_ext(auVar9,auVar9,8,1);
    fVar11 = SQRT(auVar9._0_4_ + auVar9._4_4_ + auVar7._0_4_);
    if (fVar11 <= 0.0001) {
      uVar3 = 2;
    }
    else {
      pauVar1 = pauVar5 + 1;
      pauVar2 = pauVar1;
      FUN_10981ffd4();
      auVar7 = *pauVar5;
      if (((ulong)pauVar2 & 1) == 0) {
        pauVar2 = pauVar1;
        FUN_10981ffd4(auVar7._0_8_,*(undefined8 *)(param_3 + 0x10),*(undefined8 *)(param_4 + 0x10));
        auVar7 = *pauVar5;
        if (((ulong)pauVar2 & 1) == 0) {
          pauVar2 = pauVar1;
          FUN_10981ffd4(auVar7._0_8_,*(undefined8 *)(param_4 + 0x10),*(undefined8 *)(param_2 + 0x10)
                       );
          auVar7 = *pauVar5;
          if (((ulong)pauVar2 & 1) == 0) {
            auVar10._0_4_ = *(float *)(param_2 + 0x10) * auVar7._0_4_;
            auVar10._4_4_ = *(float *)(param_2 + 0x14) * auVar7._4_4_;
            auVar10._8_4_ = *(float *)(param_2 + 0x18) * auVar7._8_4_;
            auVar10._12_4_ = *(float *)(param_2 + 0x1c) * auVar7._12_4_;
            auVar8 = NEON_ext(auVar10,auVar10,8,1);
            *(float *)*pauVar1 = (auVar10._0_4_ + auVar10._4_4_ + auVar8._0_4_) / fVar11;
          }
        }
      }
      fVar11 = 1.0 / fVar11;
      *(float *)(*pauVar5 + 8) = auVar7._8_4_ * fVar11;
      *(float *)(*pauVar5 + 0xc) = auVar7._12_4_ * fVar11;
      *(float *)*pauVar5 = auVar7._0_4_ * fVar11;
      *(float *)(*pauVar5 + 4) = auVar7._4_4_ * fVar11;
      if ((param_5 & 1) != 0) {
        return pauVar5;
      }
      if (-1e-05 <= *(float *)*pauVar1) {
        return pauVar5;
      }
      uVar3 = 3;
    }
    *param_1 = uVar3;
    lVar4 = *(long *)(pauVar5[4] + 8);
    if (*(long *)pauVar5[5] != 0) {
      *(long *)(*(long *)pauVar5[5] + 0x48) = lVar4;
    }
    if (lVar4 != 0) {
      *(undefined8 *)(lVar4 + 0x50) = *(undefined8 *)pauVar5[5];
    }
    if (*(undefined1 (**) [16])(param_1 + 0x1c1a) == pauVar5) {
      *(undefined8 *)(param_1 + 0x1c1a) = *(undefined8 *)pauVar5[5];
    }
    param_1[0x1c1c] = param_1[0x1c1c] + -1;
    *(undefined8 *)(pauVar5[4] + 8) = 0;
    lVar4 = *(long *)(param_1 + 0x1c1e);
    *(long *)pauVar5[5] = lVar4;
    if (lVar4 != 0) {
      *(undefined1 (**) [16])(lVar4 + 0x48) = pauVar5;
    }
    *(undefined1 (**) [16])(param_1 + 0x1c1e) = pauVar5;
    param_1[0x1c20] = param_1[0x1c20] + 1;
  }
  return (undefined1 (*) [16])0x0;
}



/* Entry: 10981fe14; end: 10981ffd3;  */

long FUN_10981fe14(long param_1,undefined8 param_2,long param_3,float *param_4,uint param_5,
                  long *param_6)

{
  uint uVar1;
  ulong uVar2;
  long lVar3;
  long *plVar4;
  ulong uVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  
  if ((uint)param_2 == (uint)*(byte *)((long)param_4 + 0x5b)) {
    return 0;
  }
  uVar2 = (ulong)*(uint *)(&UNK_10e001e58 + (ulong)param_5 * 4);
  uVar5 = (ulong)param_5;
  auVar6._0_4_ = *param_4 * (float)*(undefined8 *)(param_3 + 0x10);
  auVar6._4_4_ = param_4[1] * (float)((ulong)*(undefined8 *)(param_3 + 0x10) >> 0x20);
  auVar6._8_4_ = param_4[2] * (float)*(undefined8 *)(param_3 + 0x18);
  auVar6._12_4_ = param_4[3] * (float)((ulong)*(undefined8 *)(param_3 + 0x18) >> 0x20);
  auVar7 = NEON_ext(auVar6,auVar6,8,1);
  if (-1e-05 <= (auVar6._0_4_ + auVar6._4_4_ + auVar7._0_4_) - param_4[4]) {
    uVar1 = *(uint *)(&UNK_10e001e64 + uVar5 * 4);
    *(char *)((long)param_4 + 0x5b) = (char)param_2;
    lVar3 = param_1;
    FUN_10981fe14(param_1,param_2,param_3,*(undefined8 *)(param_4 + uVar2 * 2 + 0xc),
                  *(undefined1 *)((long)param_4 + uVar2 + 0x58),param_6);
    if ((int)lVar3 == 0) {
      return lVar3;
    }
    lVar3 = param_1;
    FUN_10981fe14(param_1,param_2,param_3,*(undefined8 *)(param_4 + (ulong)uVar1 * 2 + 0xc),
                  *(undefined1 *)((long)param_4 + (ulong)uVar1 + 0x58),param_6);
    if ((int)lVar3 == 0) {
      return lVar3;
    }
    lVar3 = *(long *)(param_4 + 0x12);
    if (*(long *)(param_4 + 0x14) != 0) {
      *(long *)(*(long *)(param_4 + 0x14) + 0x48) = lVar3;
    }
    if (lVar3 != 0) {
      *(undefined8 *)(lVar3 + 0x50) = *(undefined8 *)(param_4 + 0x14);
    }
    if (*(float **)(param_1 + 0x7068) == param_4) {
      *(undefined8 *)(param_1 + 0x7068) = *(undefined8 *)(param_4 + 0x14);
    }
    *(int *)(param_1 + 0x7070) = *(int *)(param_1 + 0x7070) + -1;
    param_4[0x12] = 0.0;
    param_4[0x13] = 0.0;
    lVar3 = *(long *)(param_1 + 0x7078);
    *(long *)(param_4 + 0x14) = lVar3;
    if (lVar3 != 0) {
      *(float **)(lVar3 + 0x48) = param_4;
    }
    *(float **)(param_1 + 0x7078) = param_4;
    plVar4 = (long *)(param_1 + 0x7080);
  }
  else {
    FUN_10981fbe0(param_1,*(undefined8 *)(param_4 + uVar2 * 2 + 6),
                  *(undefined8 *)(param_4 + uVar5 * 2 + 6),param_3,0);
    if (param_1 == 0) {
      return 0;
    }
    *(char *)(param_1 + 0x58) = (char)param_5;
    *(float **)(param_1 + 0x30) = param_4;
    *(undefined1 *)((long)param_4 + uVar5 + 0x58) = 0;
    *(long *)(param_4 + uVar5 * 2 + 0xc) = param_1;
    lVar3 = *param_6;
    if (lVar3 == 0) {
      param_6[1] = param_1;
    }
    else {
      *(undefined1 *)(lVar3 + 0x59) = 2;
      *(long *)(lVar3 + 0x38) = param_1;
      *(undefined1 *)(param_1 + 0x5a) = 1;
      *(long *)(param_1 + 0x40) = lVar3;
    }
    plVar4 = param_6 + 2;
    *param_6 = param_1;
  }
  *(int *)plVar4 = (int)*plVar4 + 1;
  return 1;
}



/* Entry: 10981ffd4; end: 1098200d3;  */

bool FUN_10981ffd4(undefined8 param_1,undefined8 param_2,float *param_3)

{
  float fVar1;
  undefined1 in_q0 [16];
  float fVar2;
  float fVar5;
  float in_register_00005028;
  float in_register_0000502c;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  float fVar6;
  float fVar8;
  float in_register_00005048;
  float in_register_0000504c;
  undefined1 auVar7 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  float fVar11;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  
  fVar8 = (float)((ulong)param_2 >> 0x20);
  fVar6 = (float)param_2;
  fVar5 = (float)((ulong)param_1 >> 0x20);
  fVar2 = (float)param_1;
  auVar10._0_4_ = fVar6 - fVar2;
  auVar10._4_4_ = fVar8 - fVar5;
  auVar10._8_4_ = in_register_00005048 - in_register_00005028;
  auVar10._12_4_ = 0;
  auVar12 = NEON_ext(auVar10,auVar10,0xc,1);
  auVar13 = NEON_ext(auVar12,auVar10,8,1);
  auVar12 = NEON_ext(in_q0,in_q0,0xc,1);
  auVar16 = NEON_ext(auVar12,in_q0,8,1);
  auVar12._0_4_ = auVar16._0_4_ * auVar10._0_4_ - in_q0._0_4_ * auVar13._0_4_;
  auVar12._4_4_ = auVar16._4_4_ * auVar10._4_4_ - in_q0._4_4_ * auVar13._4_4_;
  auVar12._8_4_ = auVar16._8_4_ * auVar10._8_4_ - in_q0._8_4_ * auVar13._8_4_;
  auVar12._12_4_ = auVar16._12_4_ * 0.0 - in_q0._12_4_ * auVar13._12_4_;
  auVar13 = NEON_ext(auVar12,auVar12,0xc,1);
  auVar12 = NEON_ext(auVar13,auVar12,8,1);
  auVar13._0_4_ = fVar2 * auVar12._0_4_;
  auVar13._4_4_ = fVar5 * auVar12._4_4_;
  auVar13._8_4_ = in_register_00005028 * auVar12._8_4_;
  auVar13._12_4_ = in_register_0000502c * 0.0;
  auVar12 = NEON_ext(auVar13,auVar13,8,1);
  fVar1 = auVar12._0_4_ + auVar13._0_4_ + auVar13._4_4_;
  if (0.0 <= fVar1) goto LAB_1098200c8;
  auVar16._0_4_ = fVar2 * auVar10._0_4_;
  auVar16._4_4_ = fVar5 * auVar10._4_4_;
  auVar16._8_4_ = in_register_00005028 * auVar10._8_4_;
  auVar16._12_4_ = in_register_0000502c * 0.0;
  auVar12 = NEON_ext(auVar16,auVar16,8,1);
  if (auVar12._0_4_ + auVar16._0_4_ + auVar16._4_4_ <= 0.0) {
    auVar14._0_4_ = fVar6 * auVar10._0_4_;
    auVar14._4_4_ = fVar8 * auVar10._4_4_;
    auVar14._8_4_ = in_register_00005048 * auVar10._8_4_;
    auVar14._12_4_ = in_register_0000504c * 0.0;
    auVar12 = NEON_ext(auVar14,auVar14,8,1);
    if (auVar12._0_4_ + auVar14._0_4_ + auVar14._4_4_ < 0.0) {
      auVar3._0_4_ = fVar6 * fVar6;
      auVar3._4_4_ = fVar8 * fVar8;
      auVar3._8_4_ = in_register_00005048 * in_register_00005048;
      auVar3._12_4_ = in_register_0000504c * in_register_0000504c;
      goto LAB_109820058;
    }
    auVar9._0_4_ = auVar10._0_4_ * auVar10._0_4_;
    auVar9._4_4_ = auVar10._4_4_ * auVar10._4_4_;
    auVar9._8_4_ = auVar10._8_4_ * auVar10._8_4_;
    auVar9._12_4_ = 0;
    auVar10 = NEON_ext(auVar9,auVar9,8,1);
    auVar15._0_4_ = fVar2 * fVar6;
    auVar15._4_4_ = fVar5 * fVar8;
    auVar15._8_4_ = in_register_00005028 * in_register_00005048;
    auVar15._12_4_ = in_register_0000502c * in_register_0000504c;
    auVar12 = NEON_ext(auVar15,auVar15,8,1);
    fVar11 = auVar12._0_4_ + auVar15._0_4_ + auVar15._4_4_;
    auVar4._0_4_ = fVar2 * fVar2;
    auVar4._4_4_ = fVar5 * fVar5;
    auVar4._8_4_ = in_register_00005028 * in_register_00005028;
    auVar4._12_4_ = in_register_0000502c * in_register_0000502c;
    auVar12 = NEON_ext(auVar4,auVar4,8,1);
    auVar7._0_4_ = fVar6 * fVar6;
    auVar7._4_4_ = fVar8 * fVar8;
    auVar7._8_4_ = in_register_00005048 * in_register_00005048;
    auVar7._12_4_ = in_register_0000504c * in_register_0000504c;
    auVar13 = NEON_ext(auVar7,auVar7,8,1);
    fVar2 = (-fVar11 * fVar11 +
            (auVar13._0_4_ + auVar7._0_4_ + auVar7._4_4_) *
            (auVar12._0_4_ + auVar4._0_4_ + auVar4._4_4_)) /
            (auVar10._0_4_ + auVar9._0_4_ + auVar9._4_4_);
    if (fVar2 <= 0.0) {
      fVar2 = 0.0;
    }
  }
  else {
    auVar3._0_4_ = fVar2 * fVar2;
    auVar3._4_4_ = fVar5 * fVar5;
    auVar3._8_4_ = in_register_00005028 * in_register_00005028;
    auVar3._12_4_ = in_register_0000502c * in_register_0000502c;
LAB_109820058:
    auVar12 = NEON_ext(auVar3,auVar3,8,1);
    fVar2 = auVar12._0_4_ + auVar3._0_4_ + auVar3._4_4_;
  }
  *param_3 = SQRT(fVar2);
LAB_1098200c8:
  return fVar1 < 0.0;
}



/* Entry: 1098200d4; end: 109820303;  */

ulong FUN_1098200d4(undefined8 param_1,undefined4 *param_2,ulong param_3,undefined8 param_4,
                   long param_5,long param_6,undefined8 *param_7,undefined8 *param_8,
                   undefined8 *param_9)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  undefined1 auVar4 [16];
  float fVar5;
  float fVar6;
  float fVar7;
  undefined1 auVar8 [16];
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined1 auStack_150 [16];
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined1 auStack_120 [16];
  float fStack_100;
  float fStack_fc;
  float fStack_f8;
  float fStack_f4;
  float fStack_f0;
  float fStack_ec;
  float fStack_e8;
  float fStack_e4;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  fVar5 = (float)*(undefined8 *)(param_6 + 0x30);
  fVar9 = fVar5 - *(float *)(param_5 + 0x30);
  fVar6 = (float)((ulong)*(undefined8 *)(param_6 + 0x30) >> 0x20);
  fVar10 = fVar6 - *(float *)(param_5 + 0x34);
  fVar7 = (float)*(undefined8 *)(param_6 + 0x38);
  fVar11 = fVar7 - *(float *)(param_5 + 0x38);
  auVar8._0_4_ = fVar9 * fVar9;
  auVar8._4_4_ = fVar10 * fVar10;
  auVar8._8_4_ = fVar11 * fVar11;
  auVar8._12_4_ = 0;
  auVar4 = NEON_ext(auVar8,auVar8,8,1);
  fVar12 = auVar8._0_4_ + auVar8._4_4_ + auVar4._0_4_;
  fStack_f0 = 1.0;
  fStack_ec = 0.0;
  fStack_e8 = 0.0;
  fStack_e4 = 0.0;
  fStack_f8 = fStack_e8;
  fStack_f4 = fStack_e4;
  fStack_100 = fStack_f0;
  fStack_fc = fStack_ec;
  if (1.4210855e-14 <= fVar12) {
    fStack_f4 = 1.0 / SQRT(fVar12);
    fStack_100 = fVar9 * fStack_f4;
    fStack_fc = fVar10 * fStack_f4;
    fStack_f8 = fVar11 * fStack_f4;
    fStack_f4 = fStack_f4 * 0.0;
  }
  fVar5 = *(float *)(param_5 + 0x30) - fVar5;
  fVar6 = *(float *)(param_5 + 0x34) - fVar6;
  fVar7 = *(float *)(param_5 + 0x38) - fVar7;
  auVar4._0_4_ = fVar5 * fVar5;
  auVar4._4_4_ = fVar6 * fVar6;
  auVar4._8_4_ = fVar7 * fVar7;
  auVar4._12_4_ = 0;
  auVar8 = NEON_ext(auVar4,auVar4,8,1);
  fVar9 = auVar8._0_4_ + auVar4._0_4_ + auVar4._4_4_;
  if (1.4210855e-14 <= fVar9) {
    fStack_e4 = 1.0 / SQRT(fVar9);
    fStack_f0 = fVar5 * fStack_e4;
    fStack_ec = fVar6 * fStack_e4;
    fStack_e8 = fVar7 * fStack_e4;
    fStack_e4 = fStack_e4 * 0.0;
  }
  lVar3 = 0;
  uStack_d8 = 0x3f800000;
  uStack_e0 = 0;
  uStack_c8 = 0;
  uStack_d0 = 0x3f80000000000000;
  uStack_b8 = 0;
  uStack_b4 = 0;
  uStack_c0 = 0x3f800000;
  uStack_bc = 0;
  uStack_a8 = 0;
  uStack_b0 = 0x3f8000003f800000;
  uStack_98 = 0x3f800000;
  uStack_a0 = 0x3f8000003f800000;
  uStack_88 = 0x3f800000;
  uStack_90 = 0x3f80000000000000;
  uStack_78 = 0x3f800000;
  uStack_80 = 0x3f800000;
  while( true ) {
    *(undefined1 *)(param_2 + 0x51) = 0;
    *param_2 = 0;
    *(undefined1 *)(param_2 + 0x60) = 1;
    *(undefined8 *)(param_2 + 0x4e) = 0x5d5e0b6b;
    *(undefined8 *)(param_2 + 0x4c) = 0x5d5e0b6b5d5e0b6b;
    *(undefined8 *)(param_2 + 0x59) = 0;
    *(undefined8 *)(param_2 + 0x5b) = 0;
    *(undefined1 *)(param_2 + 0x5d) = 0;
    *(byte *)(param_2 + 0x58) = *(byte *)(param_2 + 0x58) & 0xf0;
    uStack_160 = *(undefined8 *)((long)&fStack_100 + lVar3);
    uStack_158 = *(undefined8 *)((long)&fStack_f8 + lVar3);
    uVar2 = param_3;
    FUN_10981eaa8(param_3,param_5,param_4,param_6,&uStack_160,auStack_150,1);
    uVar1 = uVar2;
    if (((uVar2 & 1) != 0) ||
       (uVar1 = param_3, FUN_10981deec(param_3,param_5,param_4,param_6,&uStack_160,auStack_150),
       (uVar1 & 1) != 0)) break;
    lVar3 = lVar3 + 0x10;
    if (lVar3 == 0x90) {
      uVar2 = 0;
      auStack_120._0_14_ = ZEXT214(0);
      auStack_120._14_2_ = 0;
      param_8[1] = 0;
      *param_8 = 0;
      param_9[1] = 0;
      *param_9 = 0;
LAB_1098202bc:
      param_7[1] = auStack_120._8_8_;
      *param_7 = auStack_120._0_8_;
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
        return uVar2;
      }
      ___stack_chk_fail();
      return uVar1;
    }
  }
  param_8[1] = uStack_138;
  *param_8 = uStack_140;
  param_9[1] = uStack_128;
  *param_9 = uStack_130;
  goto LAB_1098202bc;
}



/* Entry: 109820304; end: 10982030f;  */

void FUN_109820304(void)

{
  return;
}



/* Entry: 109820310; end: 109821763;  */

ulong FUN_109820310(long param_1,float *param_2,long *param_3,undefined8 param_4)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 auVar7 [16];
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  bool bVar20;
  bool bVar21;
  bool bVar22;
  bool bVar23;
  int *piVar24;
  long *plVar25;
  undefined4 uVar26;
  undefined8 *puVar27;
  undefined4 *puVar28;
  undefined8 *puVar29;
  ulong *puVar30;
  long lVar31;
  int *piVar32;
  long lVar33;
  float fVar34;
  float fVar35;
  undefined8 extraout_d0;
  float extraout_var;
  undefined1 auVar38 [12];
  undefined1 auVar39 [12];
  ulong uVar36;
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar37 [12];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  float fVar53;
  undefined8 uVar54;
  undefined1 auVar55 [12];
  undefined1 auVar56 [16];
  float fVar70;
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  undefined1 auVar64 [16];
  undefined1 auVar65 [16];
  undefined1 auVar66 [16];
  undefined1 auVar67 [16];
  undefined1 auVar68 [16];
  undefined8 extraout_d1;
  float extraout_var_00;
  undefined1 auVar69 [16];
  float fVar71;
  double dVar72;
  undefined8 extraout_d2;
  float extraout_var_01;
  undefined1 auVar73 [16];
  undefined1 auVar74 [16];
  undefined1 auVar75 [16];
  undefined1 auVar76 [16];
  undefined1 auVar77 [16];
  undefined1 auVar78 [16];
  undefined1 auVar79 [16];
  undefined1 auVar80 [16];
  undefined1 auVar81 [16];
  undefined1 auVar82 [16];
  undefined1 auVar83 [16];
  undefined1 auVar84 [16];
  undefined1 auVar85 [16];
  undefined1 auVar86 [16];
  undefined1 auVar87 [16];
  undefined1 auVar88 [16];
  float fVar89;
  float fVar90;
  float fVar91;
  float fVar92;
  undefined8 extraout_d3;
  float fVar103;
  undefined1 auVar93 [16];
  undefined1 auVar94 [16];
  undefined1 auVar95 [16];
  undefined1 auVar96 [16];
  float fVar102;
  undefined1 auVar97 [16];
  undefined1 auVar98 [16];
  undefined1 auVar99 [16];
  undefined1 auVar100 [16];
  undefined1 auVar101 [16];
  undefined8 extraout_var_02;
  float fVar104;
  float fVar105;
  float fVar112;
  float fVar113;
  undefined1 auVar106 [16];
  undefined1 auVar107 [16];
  undefined1 auVar108 [16];
  undefined1 auVar109 [16];
  undefined1 auVar110 [16];
  undefined1 auVar111 [16];
  float fVar114;
  int iVar115;
  undefined1 auVar116 [12];
  float fVar128;
  undefined1 auVar117 [16];
  undefined1 auVar118 [16];
  undefined1 auVar119 [16];
  undefined1 auVar120 [16];
  undefined1 auVar121 [16];
  float fVar129;
  float fVar130;
  undefined1 auVar122 [16];
  undefined1 auVar123 [16];
  undefined1 auVar124 [16];
  undefined1 auVar125 [16];
  undefined1 auVar126 [16];
  undefined1 auVar127 [16];
  undefined1 auVar131 [12];
  undefined1 auVar132 [16];
  undefined1 auVar133 [16];
  undefined1 auVar134 [16];
  undefined1 auVar135 [16];
  float fVar136;
  undefined1 auVar137 [16];
  undefined1 auVar138 [16];
  undefined1 auVar139 [16];
  undefined1 auVar140 [16];
  undefined1 auVar141 [16];
  undefined1 auVar142 [16];
  float fVar143;
  float fVar144;
  float fVar145;
  undefined1 auVar146 [16];
  undefined1 auVar147 [16];
  undefined1 auVar148 [16];
  undefined1 auVar149 [16];
  undefined1 auVar150 [16];
  undefined8 uVar151;
  undefined1 auVar152 [16];
  undefined1 auVar153 [16];
  undefined1 auVar154 [16];
  float fVar155;
  undefined1 auVar156 [16];
  float fVar158;
  undefined1 auVar157 [16];
  float fVar159;
  float fVar160;
  float fVar162;
  undefined1 auVar161 [16];
  float fVar163;
  float fVar164;
  float fVar166;
  undefined1 auVar165 [16];
  float fVar167;
  float fVar168;
  float fVar169;
  float fVar170;
  undefined1 auVar171 [16];
  float fVar172;
  float fVar173;
  float fVar174;
  float fStack_290;
  float fStack_28c;
  float fStack_288;
  float fStack_284;
  float fStack_280;
  float fStack_27c;
  float fStack_278;
  float fStack_274;
  float fStack_270;
  float fStack_26c;
  float fStack_268;
  float fStack_264;
  float fStack_260;
  float fStack_25c;
  float fStack_258;
  float fStack_254;
  undefined8 uStack_250;
  ulong uStack_248;
  float fStack_240;
  float fStack_23c;
  float fStack_238;
  float fStack_234;
  float fStack_230;
  float fStack_22c;
  float fStack_228;
  float fStack_224;
  float fStack_220;
  float fStack_21c;
  float fStack_218;
  float fStack_214;
  float fStack_210;
  float fStack_20c;
  float fStack_208;
  float fStack_204;
  float fStack_200;
  float fStack_1fc;
  float fStack_1f8;
  float fStack_1f4;
  float fStack_1f0;
  float fStack_1ec;
  float fStack_1e8;
  float fStack_1e4;
  float fStack_1e0;
  float fStack_1dc;
  float fStack_1d8;
  undefined4 uStack_1d4;
  float fStack_1d0;
  float fStack_1cc;
  float fStack_1c8;
  float fStack_1c4;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  float fStack_190;
  float fStack_18c;
  float fStack_188;
  float fStack_184;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 auStack_160 [4];
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  int iStack_b0;
  long lStack_a0;
  undefined1 auVar52 [16];
  
  bVar22 = false;
  lStack_a0 = *(long *)PTR____stack_chk_guard_11034bdc0;
  *(undefined4 *)(param_1 + 0x54) = 0;
  uStack_1c0 = *(undefined8 *)param_2;
  uStack_1b8 = *(undefined8 *)(param_2 + 2);
  uStack_1b0 = *(undefined8 *)(param_2 + 4);
  uStack_1a8 = *(undefined8 *)(param_2 + 6);
  uStack_1a0 = *(undefined8 *)(param_2 + 8);
  uStack_198 = *(undefined8 *)(param_2 + 10);
  fStack_1f8 = (float)*(undefined8 *)(param_2 + 0x12);
  fStack_1f4 = (float)((ulong)*(undefined8 *)(param_2 + 0x12) >> 0x20);
  fStack_200 = (float)*(undefined8 *)(param_2 + 0x10);
  fStack_1fc = (float)((ulong)*(undefined8 *)(param_2 + 0x10) >> 0x20);
  fStack_1e8 = (float)*(undefined8 *)(param_2 + 0x16);
  fStack_1e4 = (float)((ulong)*(undefined8 *)(param_2 + 0x16) >> 0x20);
  fStack_1f0 = (float)*(undefined8 *)(param_2 + 0x14);
  fStack_1ec = (float)((ulong)*(undefined8 *)(param_2 + 0x14) >> 0x20);
  fVar104 = (param_2[0xc] + param_2[0x1c]) * 0.5;
  fVar112 = (param_2[0xd] + param_2[0x1d]) * 0.5;
  fVar113 = (param_2[0xe] + param_2[0x1e]) * 0.5;
  uStack_178 = 0;
  uStack_180 = 0;
  fStack_190 = param_2[0xc] - fVar104;
  fStack_18c = param_2[0xd] - fVar112;
  fStack_188 = param_2[0xe] - fVar113;
  fStack_184 = param_2[0xf] - 0.0;
  fStack_1d0 = param_2[0x1c] - fVar104;
  fStack_1cc = param_2[0x1d] - fVar112;
  fStack_1c8 = param_2[0x1e] - fVar113;
  fStack_1c4 = param_2[0x1f] - 0.0;
  fStack_1d8 = (float)*(undefined8 *)(param_2 + 0x1a);
  uStack_1d4 = (undefined4)((ulong)*(undefined8 *)(param_2 + 0x1a) >> 0x20);
  fStack_1e0 = (float)*(undefined8 *)(param_2 + 0x18);
  fStack_1dc = (float)((ulong)*(undefined8 *)(param_2 + 0x18) >> 0x20);
  if (*(int *)(*(long *)(param_1 + 0x30) + 8) - 0x11U < 2) {
    bVar22 = *(int *)(*(long *)(param_1 + 0x38) + 8) - 0x11U < 2;
  }
  puVar30 = (ulong *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x18) = 0;
  *puVar30 = 0x3f80000000000000;
  bVar23 = *(char *)(param_1 + 0x50) == '\0';
  fVar71 = 0.0;
  if (bVar23) {
    fVar71 = *(float *)(param_1 + 0x4c);
  }
  fVar144 = 0.0;
  if (bVar23) {
    fVar144 = *(float *)(param_1 + 0x48);
  }
  *(undefined4 *)(param_1 + 0x60) = 0;
  *(undefined8 *)(param_1 + 0x58) = 0xffffffff;
  fVar144 = fVar144 + fVar71;
  iStack_b0 = -1;
  FUN_109821b28(0x3f800000,*(long *)(param_1 + 0x30),&uStack_1c0,*(long *)(param_1 + 0x38),
                &fStack_200,bVar22,&fStack_220,&fStack_230,&fStack_210);
  auVar56._8_4_ = fStack_228;
  auVar56._0_8_ = CONCAT44(fStack_22c,fStack_230);
  auVar56._12_4_ = fStack_224;
  lVar31 = (long)iStack_b0 + 1;
  iStack_b0 = (int)lVar31;
  *(float *)(&uStack_168 + lVar31 * 6) = fStack_208;
  *(float *)((long)&uStack_168 + lVar31 * 0x30 + 4) = fStack_204;
  *(float *)(&uStack_170 + lVar31 * 6) = fStack_210;
  *(float *)((long)&uStack_170 + lVar31 * 0x30 + 4) = fStack_20c;
  auStack_160[lVar31 * 6 + 1] = CONCAT44(fStack_214,fStack_218);
  auStack_160[lVar31 * 6] = CONCAT44(fStack_21c,fStack_220);
  auStack_160[lVar31 * 6 + 3] = auVar56._8_8_;
  auStack_160[lVar31 * 6 + 2] = CONCAT44(fStack_22c,fStack_230);
  auVar94._0_4_ = -fStack_210;
  auVar94._4_4_ = -fStack_20c;
  auVar94._8_4_ = -fStack_208;
  auVar94._12_4_ = -fStack_204;
  iVar115 = 999;
  do {
    fStack_268 = auVar94._8_4_;
    fStack_264 = auVar94._12_4_;
    fStack_270 = auVar94._0_4_;
    fStack_26c = auVar94._4_4_;
    FUN_109821b28(*(undefined8 *)(param_1 + 0x30),&uStack_1c0,*(undefined8 *)(param_1 + 0x38),
                  &fStack_200,bVar22,&fStack_220,&fStack_230,&fStack_210);
    auVar117._0_4_ = fStack_270 * fStack_210;
    auVar117._4_4_ = fStack_26c * fStack_20c;
    auVar117._8_4_ = fStack_268 * fStack_208;
    auVar117._12_4_ = fStack_264 * fStack_204;
    auVar56 = NEON_ext(auVar117,auVar117,8,1);
    if (auVar117._0_4_ + auVar117._4_4_ + auVar56._0_4_ < 0.0) break;
    lVar31 = (long)iStack_b0 + 1;
    iStack_b0 = (int)lVar31;
    *(float *)(&uStack_168 + lVar31 * 6) = fStack_208;
    *(float *)((long)&uStack_168 + lVar31 * 0x30 + 4) = fStack_204;
    *(float *)(&uStack_170 + lVar31 * 6) = fStack_210;
    uVar151 = uStack_170;
    *(float *)((long)&uStack_170 + lVar31 * 0x30 + 4) = fStack_20c;
    auStack_160[lVar31 * 6 + 1] = CONCAT44(fStack_214,fStack_218);
    auStack_160[lVar31 * 6] = CONCAT44(fStack_21c,fStack_220);
    auStack_160[lVar31 * 6 + 3] = CONCAT44(fStack_224,fStack_228);
    auStack_160[lVar31 * 6 + 2] = CONCAT44(fStack_22c,fStack_230);
    uVar19 = uStack_110;
    uVar18 = uStack_140;
    fVar34 = (float)uStack_170;
    fVar70 = uStack_170._4_4_;
    fVar89 = (float)uStack_168;
    fVar91 = uStack_168._4_4_;
    fVar53 = (float)uStack_140;
    fVar158 = (float)((ulong)uStack_140 >> 0x20);
    fVar92 = (float)uStack_138;
    fVar159 = (float)((ulong)uStack_138 >> 0x20);
    if (iStack_b0 != 1) {
      if (iStack_b0 == 2) {
        auVar108._8_8_ = uStack_108;
        auVar108._0_8_ = uStack_110;
LAB_1098208c4:
        uVar3 = uStack_138;
        uVar19 = uStack_140;
        uVar18 = uStack_168;
        uVar151 = uStack_170;
        fStack_258 = auVar108._8_4_;
        fStack_254 = auVar108._12_4_;
        fStack_260 = auVar108._0_4_;
        fStack_25c = auVar108._4_4_;
        fStack_288 = (float)uStack_138;
        fStack_284 = (float)((ulong)uStack_138 >> 0x20);
        fStack_290 = (float)uStack_140;
        fStack_28c = (float)((ulong)uStack_140 >> 0x20);
        fStack_278 = (float)uStack_168;
        fStack_274 = (float)((ulong)uStack_168 >> 0x20);
        fStack_280 = (float)uStack_170;
        fStack_27c = (float)((ulong)uStack_170 >> 0x20);
        fVar34 = (float)FUN_109821764();
        if (1.1920929e-07 <= ABS(fVar34)) {
          fVar34 = ABS(fStack_258);
          if (ABS(fStack_260 - fStack_290) < 1.1920929e-07) {
LAB_109820938:
            if (1.1920929e-07 <= ABS(fStack_25c - fStack_28c)) {
              fVar70 = ABS(fStack_28c);
              if (ABS(fStack_28c) <= ABS(fStack_25c)) {
                fVar70 = ABS(fStack_25c);
              }
              if (fVar70 * 1.1920929e-07 <= ABS(fStack_25c - fStack_28c)) goto LAB_1098209b0;
            }
            if (ABS(fStack_258 - fStack_288) < 1.1920929e-07) break;
            fVar70 = ABS(fStack_288);
            if (ABS(fStack_288) <= fVar34) {
              fVar70 = fVar34;
            }
            if (ABS(fStack_258 - fStack_288) < fVar70 * 1.1920929e-07) break;
          }
          else {
            fVar70 = ABS(fStack_290);
            if (ABS(fStack_290) <= ABS(fStack_260)) {
              fVar70 = ABS(fStack_260);
            }
            if (ABS(fStack_260 - fStack_290) < fVar70 * 1.1920929e-07) goto LAB_109820938;
          }
LAB_1098209b0:
          if (ABS(fStack_260 - fStack_280) < 1.1920929e-07) {
LAB_1098209ec:
            if (1.1920929e-07 <= ABS(fStack_25c - fStack_27c)) {
              fVar70 = ABS(fStack_27c);
              if (ABS(fStack_27c) <= ABS(fStack_25c)) {
                fVar70 = ABS(fStack_25c);
              }
              if (fVar70 * 1.1920929e-07 <= ABS(fStack_25c - fStack_27c)) goto LAB_109820a64;
            }
            if (ABS(fStack_258 - fStack_278) < 1.1920929e-07) break;
            fVar70 = ABS(fStack_278);
            if (ABS(fStack_278) <= fVar34) {
              fVar70 = fVar34;
            }
            if (ABS(fStack_258 - fStack_278) < fVar70 * 1.1920929e-07) break;
          }
          else {
            fVar70 = ABS(fStack_280);
            if (ABS(fStack_280) <= ABS(fStack_260)) {
              fVar70 = ABS(fStack_260);
            }
            if (ABS(fStack_260 - fStack_280) < fVar70 * 1.1920929e-07) goto LAB_1098209ec;
          }
LAB_109820a64:
          fVar34 = -fStack_260;
          fVar70 = -fStack_25c;
          auVar43._4_4_ = fVar70;
          auVar43._0_4_ = fVar34;
          auVar77._0_4_ = -fStack_260;
          auVar77._4_4_ = -fStack_25c;
          auVar77._8_4_ = -fStack_258;
          auVar77._12_4_ = -fStack_254;
          auVar117 = NEON_ext(auVar108,auVar108,8,1);
          auVar43._12_4_ = auVar117._4_4_;
          auVar43._8_4_ = auVar77._8_4_;
          auVar56 = NEON_ext(auVar77,auVar77,4,1);
          auVar78._0_4_ = fStack_290 - fStack_260;
          auVar78._4_4_ = fStack_28c - fStack_25c;
          auVar78._8_4_ = fStack_288 - fStack_258;
          auVar78._12_4_ = fStack_284 - fStack_254;
          auVar156._0_4_ = fStack_280 - fStack_260;
          auVar156._4_4_ = fStack_27c - fStack_25c;
          auVar156._8_4_ = fStack_278 - fStack_258;
          auVar156._12_4_ = fStack_274 - fStack_254;
          auVar133 = NEON_ext(auVar78,auVar78,8,1);
          fVar89 = auVar133._0_4_;
          auVar133 = NEON_ext(auVar78,auVar78,4,1);
          fVar91 = auVar133._0_4_;
          fVar53 = auVar133._4_4_;
          auVar133 = NEON_ext(auVar156,auVar156,8,1);
          fVar92 = auVar133._0_4_;
          auVar133 = NEON_ext(auVar156,auVar156,4,1);
          fVar136 = auVar133._0_4_;
          fVar145 = auVar133._4_4_;
          fVar159 = auVar156._0_4_ * -fVar91 + fVar136 * auVar78._0_4_;
          fVar162 = auVar156._4_4_ * -fVar53 + fVar145 * auVar78._4_4_;
          fVar163 = fVar92 * -auVar78._0_4_ + auVar156._0_4_ * fVar89;
          fVar166 = auVar156._0_4_ * -auVar78._4_4_ + auVar156._4_4_ * auVar78._0_4_;
          fVar158 = -fVar162;
          fVar167 = fVar136 * -fVar159 + fVar92 * fVar163;
          fVar169 = fVar145 * fVar158 + auVar156._0_4_ * fVar159;
          auVar171._0_4_ = fVar34 * fVar167;
          auVar171._4_4_ = fVar70 * fVar169;
          auVar171._8_4_ = auVar77._8_4_ * (-fVar163 * auVar156._0_4_ + auVar156._4_4_ * fVar162);
          auVar171._12_4_ = auVar43._12_4_ * 0.0;
          auVar133 = NEON_ext(auVar171,auVar171,8,1);
          fVar170 = auVar133._0_4_ + auVar171._0_4_ + auVar171._4_4_;
          fVar172 = ABS(fVar170);
          bVar23 = true;
          if ((fVar170 <= 0.0) && (bVar23 = false, !NAN(fVar172))) {
            bVar23 = fVar172 < 1.1920929e-07;
          }
          if (bVar23) {
            auVar157._0_4_ = fVar34 * auVar156._0_4_;
            auVar157._4_4_ = fVar70 * auVar156._4_4_;
            auVar157._8_4_ = auVar77._8_4_ * auVar156._8_4_;
            auVar157._12_4_ = auVar43._12_4_ * 0.0;
            auVar133 = NEON_ext(auVar157,auVar157,8,1);
            fVar158 = auVar133._0_4_ + auVar157._0_4_ + auVar157._4_4_;
            fVar159 = ABS(fVar158);
            bVar23 = true;
            if ((fVar158 <= 0.0) && (bVar23 = false, !NAN(fVar159))) {
              bVar23 = fVar159 < 1.1920929e-07;
            }
            if (!bVar23) {
              auVar147._0_4_ = fVar34 * auVar78._0_4_;
              auVar147._4_4_ = fVar70 * auVar78._4_4_;
              auVar147._8_4_ = auVar77._8_4_ * auVar78._8_4_;
              auVar147._12_4_ = auVar43._12_4_ * 0.0;
              auVar133 = NEON_ext(auVar147,auVar147,8,1);
              fVar158 = auVar133._0_4_ + auVar147._0_4_ + auVar147._4_4_;
              fVar92 = ABS(fVar158);
              bVar23 = true;
              if ((fVar158 <= 0.0) && (bVar23 = false, !NAN(fVar92))) {
                bVar23 = fVar92 < 1.1920929e-07;
              }
              if (!bVar23) {
LAB_109820bec:
                auStack_160[1] = uStack_f8;
                auStack_160[0] = uStack_100;
                auStack_160[3] = uStack_e8;
                auStack_160[2] = uStack_f0;
                uStack_170 = auVar108._0_8_;
                uStack_168 = auVar108._8_8_;
                goto LAB_109820bf8;
              }
              goto LAB_109820c20;
            }
            fVar89 = auVar117._0_4_ * auVar156._0_4_ + fVar34 * fVar92;
            fVar34 = fStack_25c * fVar145 + auVar56._4_4_ * auVar156._4_4_;
            auVar41._0_4_ =
                 fVar136 * -(fStack_260 * fVar136 + auVar56._0_4_ * auVar156._0_4_) +
                 fVar92 * fVar89;
            auVar41._4_4_ =
                 fVar145 * -fVar34 +
                 auVar156._0_4_ * (fStack_260 * auVar156._4_4_ + fVar70 * auVar156._0_4_);
            auVar56 = NEON_ext(auVar94,auVar94,8,1);
            auVar41._8_8_ = auVar56._0_8_;
            fVar34 = -(fVar89 * auVar156._0_4_) + auVar156._4_4_ * fVar34;
            uStack_140 = auVar108._0_8_;
            uStack_138 = auVar108._8_8_;
          }
          else {
            auVar1._4_4_ = fVar169;
            auVar1._0_4_ = fVar167;
            auVar1._8_8_ = 0;
            auVar2._4_4_ = fVar169;
            auVar2._0_4_ = fVar167;
            auVar2._8_8_ = 0;
            auVar133 = NEON_ext(auVar1,auVar2,8,1);
            auVar152._0_4_ = fVar34 * (fVar163 * -fVar89 + fVar159 * fVar91);
            auVar152._4_4_ = fVar70 * (fVar166 * -auVar78._0_4_ + fVar162 * fVar53);
            auVar152._8_4_ = auVar77._8_4_ * (fVar162 * -fVar91 + fVar163 * auVar78._0_4_);
            auVar152._12_4_ = auVar43._12_4_ * auVar133._4_4_;
            auVar133 = NEON_ext(auVar152,auVar152,8,1);
            fVar92 = auVar133._0_4_ + auVar152._0_4_ + auVar152._4_4_;
            fVar136 = ABS(fVar92);
            bVar23 = true;
            if ((fVar92 <= 0.0) && (bVar23 = false, !NAN(fVar136))) {
              bVar23 = fVar136 < 1.1920929e-07;
            }
            if (!bVar23) {
              uVar54 = NEON_ext(CONCAT44(fVar162,fVar159),CONCAT44(fVar166,fVar163),4,1);
              auVar42._0_4_ = fVar34 * (float)uVar54;
              auVar42._4_4_ = fVar70 * (float)((ulong)uVar54 >> 0x20);
              auVar42._8_4_ = auVar77._8_4_ * fVar159;
              auVar42._12_4_ = auVar43._12_4_ * fVar162;
              auVar56 = NEON_ext(auVar42,auVar42,8,1);
              fVar34 = auVar56._0_4_ + auVar42._0_4_ + auVar42._4_4_;
              fVar70 = ABS(fVar34);
              bVar23 = true;
              if ((fVar34 <= 0.0) && (bVar23 = false, !NAN(fVar70))) {
                bVar23 = fVar70 < 1.1920929e-07;
              }
              auVar43._8_8_ = CONCAT44(fVar162,fVar159);
              auVar43._0_8_ = uVar54;
              if (!bVar23) {
                uVar54 = auStack_160[2];
                uVar4 = auStack_160[3];
                uVar5 = uStack_130;
                uVar6 = uStack_128;
                uStack_170 = uVar19;
                uStack_168 = uVar3;
                auStack_160[3] = uStack_118;
                auStack_160[2] = uStack_120;
                uStack_128 = auStack_160[1];
                uStack_130 = auStack_160[0];
                auVar43._12_4_ = fVar158;
                auVar43._8_4_ = -fVar159;
                auVar43._4_4_ = -fVar163;
                auVar43._0_4_ = fVar158;
                auStack_160[0] = uVar5;
                auStack_160[1] = uVar6;
                uStack_140 = uVar151;
                uStack_138 = uVar18;
                uStack_120 = uVar54;
                uStack_118 = uVar4;
              }
              goto LAB_109820c7c;
            }
            auVar146._0_4_ = fVar34 * auVar78._0_4_;
            auVar146._4_4_ = fVar70 * auVar78._4_4_;
            auVar146._8_4_ = auVar77._8_4_ * auVar78._8_4_;
            auVar146._12_4_ = auVar43._12_4_ * 0.0;
            auVar133 = NEON_ext(auVar146,auVar146,8,1);
            fVar158 = auVar133._0_4_ + auVar146._0_4_ + auVar146._4_4_;
            if ((fVar158 <= 0.0) && (1.1920929e-07 <= ABS(fVar158))) goto LAB_109820bec;
LAB_109820c20:
            uStack_170 = uVar19;
            uStack_168 = uVar3;
            auStack_160[1] = uStack_128;
            auStack_160[0] = uStack_130;
            auStack_160[3] = uStack_118;
            auStack_160[2] = uStack_120;
            uStack_138 = uStack_108;
            uStack_140 = uStack_110;
            fVar34 = auVar117._0_4_ * auVar78._0_4_ + fVar34 * fVar89;
            fVar158 = fStack_25c * fVar53 + auVar56._4_4_ * auVar78._4_4_;
            auVar41._0_4_ =
                 fVar91 * -(fStack_260 * fVar91 + fVar70 * auVar78._0_4_) + fVar89 * fVar34;
            auVar41._4_4_ =
                 fVar53 * -fVar158 +
                 auVar78._0_4_ * (fStack_260 * auVar78._4_4_ + fVar70 * auVar78._0_4_);
            auVar56 = NEON_ext(auVar94,auVar94,8,1);
            auVar41._8_8_ = auVar56._0_8_;
            fVar34 = -(fVar34 * auVar78._0_4_) + auVar78._4_4_ * fVar158;
          }
          uStack_128 = uStack_f8;
          uStack_130 = uStack_100;
          iStack_b0 = 1;
          uStack_118 = uStack_e8;
          uStack_120 = uStack_f0;
          auVar43._12_4_ = auVar41._12_4_;
          auVar43._0_8_ = auVar41._0_8_;
          auVar43._8_4_ = fVar34;
          goto LAB_109820c7c;
        }
      }
      else {
        lVar31 = (long)iStack_b0;
        uVar3 = *(undefined8 *)*(undefined1 (*) [16])(&uStack_170 + lVar31 * 6);
        fStack_258 = (float)(&uStack_168)[lVar31 * 6];
        fStack_254 = (float)((ulong)(&uStack_168)[lVar31 * 6] >> 0x20);
        fStack_260 = (float)uVar3;
        fStack_25c = (float)((ulong)uVar3 >> 0x20);
        fStack_288 = (float)uStack_108;
        fStack_284 = (float)((ulong)uStack_108 >> 0x20);
        fStack_290 = (float)uStack_110;
        fStack_28c = (float)((ulong)uStack_110 >> 0x20);
        fVar162 = (float)FUN_109821764();
        if (ABS(fVar162) < 1.1920929e-07) break;
        fVar162 = (float)FUN_109821764();
        if ((((1.1920929e-07 <= ABS(fVar162)) &&
             (fVar162 = (float)FUN_109821764(), 1.1920929e-07 <= ABS(fVar162))) &&
            (fVar162 = (float)FUN_109821764(), 1.1920929e-07 <= ABS(fVar162))) &&
           (fVar162 = (float)FUN_109821764(), 1.1920929e-07 <= ABS(fVar162))) {
          auVar108._8_4_ = fStack_258;
          auVar108._0_8_ = uVar3;
          auVar108._12_4_ = fStack_254;
          fVar162 = -fStack_260;
          fVar136 = -fStack_25c;
          fVar145 = -fStack_258;
          auVar118._8_4_ = fStack_288;
          auVar118._0_8_ = uVar19;
          auVar118._12_4_ = fStack_284;
          auVar76._8_4_ = fVar92;
          auVar76._0_8_ = uVar18;
          auVar76._12_4_ = fVar159;
          auVar107._0_4_ = fStack_290 - fStack_260;
          auVar107._4_4_ = fStack_28c - fStack_25c;
          auVar107._8_4_ = fStack_288 - fStack_258;
          auVar107._12_4_ = fStack_284 - fStack_254;
          auVar139._0_4_ = fVar53 - fStack_260;
          auVar139._4_4_ = fVar158 - fStack_25c;
          auVar139._8_4_ = fVar92 - fStack_258;
          auVar139._12_4_ = fVar159 - fStack_254;
          auVar133._8_4_ = fVar89;
          auVar133._0_8_ = uVar151;
          auVar133._12_4_ = fVar91;
          auVar132._0_4_ = fVar34 - fStack_260;
          auVar132._4_4_ = fVar70 - fStack_25c;
          auVar132._8_4_ = fVar89 - fStack_258;
          auVar132._12_4_ = fVar91 - fStack_254;
          auVar56 = NEON_ext(auVar107,auVar107,8,1);
          auVar117 = NEON_ext(auVar139,auVar139,8,1);
          fVar167 = auVar139._4_4_ * -auVar56._0_4_ + auVar117._0_4_ * auVar107._4_4_;
          fVar169 = auVar139._8_4_ * -auVar107._0_4_ + auVar139._0_4_ * auVar107._8_4_;
          fVar53 = -auVar107._4_4_ * auVar139._0_4_ + auVar107._0_4_ * auVar139._4_4_;
          auVar161 = NEON_ext(auVar132,auVar132,8,1);
          fVar89 = auVar132._4_4_ * -auVar117._0_4_ + auVar161._0_4_ * auVar139._4_4_;
          fVar158 = auVar132._8_4_ * -auVar139._0_4_ + auVar132._0_4_ * auVar139._8_4_;
          fVar163 = -auVar139._4_4_ * auVar132._0_4_ + auVar139._0_4_ * auVar132._4_4_;
          fVar92 = auVar107._4_4_ * -auVar161._0_4_ + auVar56._0_4_ * auVar132._4_4_;
          fVar159 = auVar107._8_4_ * -auVar132._0_4_ + auVar107._0_4_ * auVar132._8_4_;
          fVar166 = -auVar132._4_4_ * auVar107._0_4_ + auVar132._0_4_ * auVar107._4_4_;
          auVar93._0_4_ = fVar89 * auVar107._0_4_;
          auVar93._4_4_ = fVar158 * auVar107._4_4_;
          auVar93._8_4_ = fVar163 * auVar107._8_4_;
          auVar93._12_4_ = 0;
          auVar56 = NEON_ext(auVar93,auVar93,8,1);
          fVar91 = auVar56._0_4_ + auVar93._0_4_ + auVar93._4_4_;
          bVar23 = ABS(fVar91) < 1.1920929e-07;
          auVar161._0_4_ = fVar92 * auVar139._0_4_;
          auVar161._4_4_ = fVar159 * auVar139._4_4_;
          auVar161._8_4_ = fVar166 * auVar139._8_4_;
          auVar161._12_4_ = 0;
          auVar56 = NEON_ext(auVar161,auVar161,8,1);
          fVar34 = auVar56._0_4_ + auVar161._0_4_ + auVar161._4_4_;
          bVar20 = ABS(fVar34) < 1.1920929e-07;
          auVar73._0_4_ = fVar167 * auVar132._0_4_;
          auVar73._4_4_ = fVar169 * auVar132._4_4_;
          auVar73._8_4_ = fVar53 * auVar132._8_4_;
          auVar73._12_4_ = 0;
          auVar56 = NEON_ext(auVar73,auVar73,8,1);
          fVar70 = auVar56._0_4_ + auVar73._0_4_ + auVar73._4_4_;
          bVar21 = ABS(fVar70) < 1.1920929e-07;
          auVar74._0_4_ = fVar162 * fVar89;
          auVar74._4_4_ = fVar136 * fVar158;
          auVar74._8_4_ = fVar145 * fVar163;
          auVar74._12_4_ = fStack_254 * 0.0;
          auVar56 = NEON_ext(auVar74,auVar74,8,1);
          fVar89 = auVar56._0_4_ + auVar74._0_4_ + auVar74._4_4_;
          if (1.1920929e-07 <= ABS(fVar89)) {
            bVar23 = !bVar23 && 0.0 <= fVar91 != fVar89 < 0.0;
          }
          auVar75._0_4_ = fVar162 * fVar92;
          auVar75._4_4_ = fVar136 * fVar159;
          auVar75._8_4_ = fVar145 * fVar166;
          auVar75._12_4_ = fStack_254 * 0.0;
          auVar56 = NEON_ext(auVar75,auVar75,8,1);
          fVar89 = auVar56._0_4_ + auVar75._0_4_ + auVar75._4_4_;
          if (1.1920929e-07 <= ABS(fVar89)) {
            bVar20 = !bVar20 && 0.0 <= fVar34 != fVar89 < 0.0;
          }
          auVar40._0_4_ = fVar162 * fVar167;
          auVar40._4_4_ = fVar136 * fVar169;
          auVar40._8_4_ = fVar145 * fVar53;
          auVar40._12_4_ = fStack_254 * 0.0;
          auVar56 = NEON_ext(auVar40,auVar40,8,1);
          fVar34 = auVar56._0_4_ + auVar40._0_4_ + auVar40._4_4_;
          if (1.1920929e-07 <= ABS(fVar34)) {
            bVar21 = !bVar21 && 0.0 <= fVar70 != fVar34 < 0.0;
          }
          if ((!bVar23 || !bVar20) || (!bVar21)) {
            if (bVar23) {
              if (bVar20) {
                auStack_160[1] = uStack_128;
                auStack_160[0] = uStack_130;
                auStack_160[3] = uStack_118;
                auStack_160[2] = uStack_120;
                puVar27 = auStack_160 + 6;
                puVar29 = &uStack_120;
                auVar133 = auVar118;
              }
              else {
                uStack_128 = auStack_160[1];
                uStack_130 = auStack_160[0];
                uStack_118 = auStack_160[3];
                uStack_120 = auStack_160[2];
                puVar27 = auStack_160;
                puVar29 = auStack_160 + 2;
                auVar76 = auVar118;
              }
              auStack_160[3] = uStack_118;
              auStack_160[2] = uStack_120;
              uStack_168 = auVar76._8_8_;
              uStack_170 = auVar76._0_8_;
              uStack_138 = auVar133._8_8_;
              uStack_140 = auVar133._0_8_;
              puVar27[1] = uStack_f8;
              *puVar27 = uStack_100;
              puVar29[1] = uStack_e8;
              *puVar29 = uStack_f0;
              auVar108 = *(undefined1 (*) [16])(&uStack_170 + lVar31 * 6);
              auStack_160[0] = uStack_130;
              auStack_160[1] = uStack_128;
            }
            uStack_100 = auStack_160[lVar31 * 6];
            uStack_f8 = auStack_160[lVar31 * 6 + 1];
            uStack_f0 = auStack_160[lVar31 * 6 + 2];
            uStack_e8 = auStack_160[lVar31 * 6 + 3];
            uStack_108 = auVar108._8_8_;
            uStack_110 = auVar108._0_8_;
            iStack_b0 = 2;
            goto LAB_1098208c4;
          }
        }
      }
LAB_109820d00:
      bVar23 = true;
      goto LAB_109820d04;
    }
    auVar7._8_8_ = uStack_138;
    auVar7._0_8_ = uStack_140;
    auVar106._0_4_ = (float)uStack_170 - fVar53;
    auVar106._4_4_ = uStack_170._4_4_ - fVar158;
    auVar106._8_4_ = (float)uStack_168 - fVar92;
    auVar106._12_4_ = uStack_168._4_4_ - fVar159;
    auVar43._0_4_ = -fVar53;
    auVar43._4_4_ = -fVar158;
    auVar137._0_4_ = -fVar53;
    auVar137._4_4_ = -fVar158;
    auVar137._8_4_ = -fVar92;
    auVar137._12_4_ = -fVar159;
    auVar108 = NEON_ext(auVar137,auVar137,4,1);
    auVar56 = NEON_ext(auVar7,auVar7,8,1);
    auVar117 = NEON_ext(auVar106,auVar106,4,1);
    fVar70 = fVar53 * auVar117._0_4_ + auVar108._0_4_ * auVar106._0_4_;
    fVar89 = fVar158 * auVar117._4_4_ + auVar108._4_4_ * auVar106._4_4_;
    auVar108 = NEON_ext(auVar106,auVar106,8,1);
    auVar43._12_4_ = auVar56._4_4_;
    auVar43._8_4_ = auVar137._8_4_;
    auVar138._0_4_ = auVar43._0_4_ * auVar106._0_4_;
    auVar138._4_4_ = auVar43._4_4_ * auVar106._4_4_;
    auVar138._8_4_ = auVar137._8_4_ * auVar106._8_4_;
    auVar138._12_4_ = auVar43._12_4_ * 0.0;
    auVar133 = NEON_ext(auVar138,auVar138,8,1);
    fVar91 = auVar138._0_4_ + auVar138._4_4_ + auVar133._0_4_;
    dVar72 = (double)CONCAT44(fVar53 * auVar106._4_4_,auVar56._0_4_ * auVar106._0_4_) -
             (double)CONCAT44(auVar106._0_4_ * fVar158,auVar108._0_4_ * fVar53);
    fVar34 = (float)((ulong)dVar72 >> 0x20);
    uVar151 = NEON_ext(CONCAT44(fVar89,fVar70),dVar72,4,1);
    fVar53 = (float)((ulong)uVar151 >> 0x20);
    if ((ABS((float)uVar151 * (float)uVar151 + fVar53 * fVar53 + fVar34 * fVar34) < 1.1920929e-07)
       && (0.0 < fVar91)) goto LAB_109820d00;
    if ((ABS(fVar91) < 1.1920929e-07) || (fVar91 < 0.0)) {
      uStack_168 = uStack_138;
      uStack_170 = uStack_140;
      auStack_160[1] = uStack_128;
      auStack_160[0] = uStack_130;
      auStack_160[3] = uStack_118;
      auStack_160[2] = uStack_120;
LAB_109820bf8:
      iStack_b0 = 0;
    }
    else {
      auVar43._0_4_ = auVar117._0_4_ * -fVar70 + auVar108._0_4_ * SUB84(dVar72,0);
      auVar43._4_4_ = auVar117._4_4_ * -fVar89 + auVar106._0_4_ * fVar34;
      auVar56 = NEON_ext(auVar94,auVar94,8,1);
      auVar43._12_4_ = auVar56._4_4_;
      auVar43._8_4_ = -(SUB84(dVar72,0) * auVar106._0_4_) + auVar106._4_4_ * fVar89;
    }
LAB_109820c7c:
    auVar57._0_4_ = auVar43._0_4_ * auVar43._0_4_;
    auVar57._4_4_ = auVar43._4_4_ * auVar43._4_4_;
    auVar57._8_4_ = auVar43._8_4_ * auVar43._8_4_;
    auVar57._12_4_ = auVar43._12_4_ * auVar43._12_4_;
    auVar56 = NEON_ext(auVar57,auVar57,8,1);
    fVar34 = auVar57._0_4_ + auVar57._4_4_ + auVar56._0_4_;
    bVar23 = true;
    if ((1.1920929e-07 <= fVar34) && (bVar23 = false, !NAN(fVar34))) {
      bVar23 = fVar34 < 1.4210855e-14;
    }
    bVar21 = iVar115 != 0;
    iVar115 = iVar115 + -1;
    auVar94 = auVar43;
  } while (!bVar23 && bVar21);
  bVar23 = false;
LAB_109820d04:
  fVar14 = fStack_184;
  fVar13 = fStack_188;
  fVar12 = fStack_18c;
  fVar11 = fStack_190;
  fVar172 = fStack_1c4;
  fVar170 = fStack_1c8;
  fVar169 = fStack_1cc;
  fVar167 = fStack_1d0;
  fVar166 = fStack_1d8;
  fVar163 = fStack_1dc;
  fVar145 = fStack_1e0;
  fVar136 = fStack_1e4;
  fVar162 = fStack_1e8;
  fVar159 = fStack_1ec;
  fVar92 = fStack_1f0;
  fVar158 = fStack_1f4;
  fVar53 = fStack_1f8;
  fVar91 = fStack_1fc;
  fVar89 = fStack_200;
  puVar28 = *(undefined4 **)(param_1 + 0x28);
  *(undefined1 *)(puVar28 + 0x51) = 0;
  *puVar28 = 0;
  *(undefined1 *)(puVar28 + 0x60) = 1;
  *(undefined8 *)(puVar28 + 0x4e) = 0x5d5e0b6b;
  *(undefined8 *)(puVar28 + 0x4c) = 0x5d5e0b6b5d5e0b6b;
  *(undefined1 *)(puVar28 + 0x5d) = 0;
  *(undefined8 *)(puVar28 + 0x5b) = 0;
  *(undefined8 *)(puVar28 + 0x59) = 0;
  *(byte *)(puVar28 + 0x58) = *(byte *)(puVar28 + 0x58) & 0xf0;
  auVar56 = *(undefined1 (*) [16])(param_1 + 0x10);
  fVar155 = (float)uStack_1c0;
  fVar160 = uStack_1c0._4_4_;
  fVar164 = (float)uStack_1b8;
  fVar168 = uStack_1b8._4_4_;
  fVar173 = uStack_1b0._4_4_;
  fVar174 = uStack_1a8._4_4_;
  fVar8 = (float)uStack_1a0;
  fVar9 = uStack_1a0._4_4_;
  fVar10 = (float)uStack_198;
  auVar140._4_4_ = fStack_1cc;
  auVar140._0_4_ = fStack_1d0;
  auVar140._8_4_ = fStack_1c8;
  auVar140._12_4_ = fStack_1c4;
  fVar70 = (float)uStack_1a8;
  fVar34 = (float)uStack_1b0;
  fVar143 = 1e+18;
  do {
    auVar55._0_8_ = auVar56._0_8_ ^ 0x8000000080000000;
    auVar55[8] = auVar56[8];
    auVar55[9] = auVar56[9];
    auVar55[10] = auVar56[10];
    auVar55[0xb] = auVar56[0xb] ^ 0x80;
    fVar90 = (float)auVar55._0_8_;
    fVar102 = (float)(auVar55._0_8_ >> 0x20);
    fVar103 = auVar55._8_4_;
    fStack_210 = fVar8 * fVar103 + fVar155 * fVar90 + fVar34 * fVar102;
    fStack_20c = fVar9 * fVar103 + fVar160 * fVar90 + fVar173 * fVar102;
    fStack_208 = fVar10 * fVar103 + fVar164 * fVar90 + fVar70 * fVar102;
    fStack_204 = fVar103 * 0.0 + fVar90 * 0.0 + fVar102 * 0.0;
    fVar90 = auVar56._0_4_;
    fVar102 = auVar56._4_4_;
    fVar103 = auVar56._8_4_;
    fStack_220 = fVar145 * fVar103 + fVar89 * fVar90 + fVar92 * fVar102;
    fStack_21c = fVar163 * fVar103 + fVar91 * fVar90 + fVar159 * fVar102;
    fStack_218 = fVar166 * fVar103 + fVar53 * fVar90 + fVar162 * fVar102;
    fStack_214 = fVar103 * 0.0 + fVar90 * 0.0 + fVar102 * 0.0;
    FUN_109819648(&fStack_230,*(undefined8 *)(param_1 + 0x30),&fStack_210);
    FUN_109819648(&fStack_240,*(undefined8 *)(param_1 + 0x38),&fStack_220);
    auVar58._0_4_ = fStack_230 * fVar155;
    auVar58._4_4_ = fStack_22c * fVar160;
    auVar58._8_4_ = fStack_228 * fVar164;
    auVar58._12_4_ = fStack_224 * fVar168;
    auVar79._0_4_ = fStack_230 * fVar34;
    auVar79._4_4_ = fStack_22c * fVar173;
    auVar79._8_4_ = fStack_228 * fVar70;
    auVar79._12_4_ = fStack_224 * fVar174;
    auVar44._0_4_ = fStack_230 * fVar8;
    auVar44._4_4_ = fStack_22c * fVar9;
    auVar44._8_4_ = fStack_228 * fVar10;
    auVar94 = NEON_ext(auVar58,auVar58,8,1);
    auVar108 = NEON_ext(auVar79,auVar79,8,1);
    auVar44._12_4_ = 0;
    auVar56 = NEON_ext(auVar44,auVar44,8,1);
    auVar80._0_4_ = fStack_240 * fVar89;
    auVar80._4_4_ = fStack_23c * fVar91;
    auVar80._8_4_ = fStack_238 * fVar53;
    auVar80._12_4_ = fStack_234 * fVar158;
    auVar95._0_4_ = fStack_240 * fVar92;
    auVar95._4_4_ = fStack_23c * fVar159;
    auVar95._8_4_ = fStack_238 * fVar162;
    auVar95._12_4_ = fStack_234 * fVar136;
    auVar45._0_4_ = fStack_240 * fVar145;
    auVar45._4_4_ = fStack_23c * fVar163;
    auVar45._8_4_ = fStack_238 * fVar166;
    auVar133 = NEON_ext(auVar80,auVar80,8,1);
    auVar118 = NEON_ext(auVar95,auVar95,8,1);
    auVar45._12_4_ = 0;
    auVar117 = NEON_ext(auVar45,auVar45,8,1);
    auVar120._0_8_ =
         CONCAT44(fVar12 + auVar79._0_4_ + auVar79._4_4_ + auVar108._0_4_,
                  fVar11 + auVar58._0_4_ + auVar58._4_4_ + auVar94._0_4_);
    auVar120._8_4_ = fVar13 + auVar44._0_4_ + auVar44._4_4_ + auVar56._0_4_ + auVar56._4_4_;
    auVar120._12_4_ = fVar14 + 0.0;
    auVar83._0_8_ =
         CONCAT44(fVar169 + auVar95._0_4_ + auVar95._4_4_ + auVar118._0_4_,
                  fVar167 + auVar80._0_4_ + auVar80._4_4_ + auVar133._0_4_);
    auVar83._8_4_ = fVar170 + auVar45._0_4_ + auVar45._4_4_ + auVar117._0_4_ + auVar117._4_4_;
    auVar83._12_4_ = fVar172 + 0.0;
    auVar81._8_4_ = 0;
    auVar81._0_8_ = auVar120._0_8_;
    auVar81._12_4_ = auVar120._12_4_;
    auVar96._8_4_ = 0;
    auVar96._0_8_ = auVar83._0_8_;
    auVar96._12_4_ = auVar83._12_4_;
    iVar115 = -(uint)(bVar22 != false);
    auVar109._0_8_ = CONCAT44(iVar115,iVar115);
    auVar109._8_4_ = iVar115;
    auVar109._12_4_ = iVar115;
    auVar119._8_8_ = auVar109._8_8_;
    auVar119._0_8_ = auVar109._0_8_;
    auVar120 = auVar120 ^ (auVar120 ^ auVar81) & auVar119;
    auVar82._8_8_ = auVar109._8_8_;
    auVar82._0_8_ = auVar109._0_8_;
    auVar83 = auVar83 ^ (auVar83 ^ auVar96) & auVar82;
    fVar90 = auVar120._0_4_ - auVar83._0_4_;
    fVar102 = auVar120._4_4_ - auVar83._4_4_;
    uStack_250 = CONCAT44(fVar102,fVar90);
    fVar103 = auVar120._8_4_ - auVar83._8_4_;
    uStack_248 = (ulong)(uint)fVar103;
    auVar46._0_4_ = *(float *)(param_1 + 0x10) * fVar90;
    auVar46._4_4_ = *(float *)(param_1 + 0x14) * fVar102;
    auVar46._8_4_ = *(float *)(param_1 + 0x18) * fVar103;
    auVar46._12_4_ = *(float *)(param_1 + 0x1c) * 0.0;
    auVar56 = NEON_ext(auVar46,auVar46,8,1);
    fVar105 = auVar46._0_4_ + auVar46._4_4_ + auVar56._0_4_;
    if ((0.0 < fVar105) && (fVar143 * param_2[0x20] < fVar105 * fVar105)) {
      uVar26 = 10;
LAB_109821040:
      *(undefined4 *)(param_1 + 0x60) = uVar26;
      lVar31 = *(long *)(param_1 + 0x28);
      FUN_109824c30(lVar31);
      auVar140 = *(undefined1 (*) [16])(lVar31 + 0x110);
      auVar56 = *(undefined1 (*) [16])(param_1 + 0x10);
      uStack_178 = auVar56._8_8_;
      uVar36 = auVar56._0_8_;
      fVar34 = auVar56._0_4_;
      auVar60._0_4_ = fVar34 * fVar34;
      fVar70 = auVar56._4_4_;
      auVar60._4_4_ = fVar70 * fVar70;
      fVar89 = auVar56._8_4_;
      auVar60._8_4_ = fVar89 * fVar89;
      fVar91 = auVar56._12_4_;
      auVar60._12_4_ = fVar91 * fVar91;
      auVar56 = NEON_ext(auVar60,auVar60,8,1);
      fVar53 = auVar60._0_4_ + auVar60._4_4_ + auVar56._0_4_;
      if (fVar53 < 1e-06) {
        *(undefined4 *)(param_1 + 0x60) = 5;
      }
      if (fVar53 <= 1.4210855e-14) {
        bVar22 = false;
        *(undefined4 *)(param_1 + 0x58) = 2;
        fVar34 = 0.0;
        auVar148 = ZEXT216(0);
        uStack_180 = uVar36;
      }
      else {
        fVar53 = 1.0 / SQRT(fVar53);
        auVar148._0_8_ = CONCAT44(fVar70 * fVar53,fVar34 * fVar53);
        auVar148._8_4_ = fVar89 * fVar53;
        auVar148._12_4_ = fVar91 * fVar53;
        fVar91 = fVar71 / SQRT(fVar143);
        uStack_178 = auVar148._8_8_;
        auVar141._0_4_ = auVar140._0_4_ + fVar34 * fVar91;
        auVar141._4_4_ = auVar140._4_4_ + fVar70 * fVar91;
        auVar141._8_4_ = auVar140._8_4_ + fVar89 * fVar91;
        auVar141._12_4_ = auVar140._12_4_ + 0.0;
        uVar36 = (ulong)(uint)(1.0 / fVar53);
        fVar34 = 1.0 / fVar53 - fVar144;
        bVar22 = true;
        *(undefined4 *)(param_1 + 0x58) = 1;
        auVar140 = auVar141;
        uStack_180 = auVar148._0_8_;
      }
      goto LAB_1098210e4;
    }
    piVar32 = *(int **)(param_1 + 0x28);
    piVar24 = piVar32;
    func_0x00010982560c(piVar32,&uStack_250);
    if (((ulong)piVar24 & 1) != 0) {
      uVar26 = 1;
      goto LAB_109821040;
    }
    if (fVar143 - fVar105 <= fVar143 * 1e-06) {
      uVar26 = 0xb;
      if (fVar143 - fVar105 <= 0.0) {
        uVar26 = 2;
      }
      goto LAB_109821040;
    }
    *(ulong *)(piVar32 + 0x4e) = (ulong)(uint)fVar103;
    *(ulong *)(piVar32 + 0x4c) = CONCAT44(fVar102,fVar90);
    *(undefined1 *)(piVar32 + 0x60) = 1;
    iVar115 = *piVar32;
    *(ulong *)(piVar32 + (long)iVar115 * 4 + 6) = (ulong)(uint)fVar103;
    *(ulong *)(piVar32 + (long)iVar115 * 4 + 4) = CONCAT44(fVar102,fVar90);
    iVar115 = *piVar32;
    *(long *)(piVar32 + (long)iVar115 * 4 + 0x1a) = auVar120._8_8_;
    *(long *)(piVar32 + (long)iVar115 * 4 + 0x18) = auVar120._0_8_;
    iVar115 = *piVar32;
    *(long *)(piVar32 + (long)iVar115 * 4 + 0x2e) = auVar83._8_8_;
    *(long *)(piVar32 + (long)iVar115 * 4 + 0x2c) = auVar83._0_8_;
    *piVar32 = *piVar32 + 1;
    lVar33 = *(long *)(param_1 + 0x28);
    lVar31 = lVar33;
    FUN_109824c30();
    if ((int)lVar31 == 0) {
      uVar26 = 3;
      goto LAB_109821040;
    }
    auVar56 = *(undefined1 (*) [16])(lVar33 + 0x120);
    uVar36 = auVar56._0_8_;
    auVar59._0_4_ = auVar56._0_4_ * auVar56._0_4_;
    auVar59._4_4_ = auVar56._4_4_ * auVar56._4_4_;
    auVar59._8_4_ = auVar56._8_4_ * auVar56._8_4_;
    auVar59._12_4_ = auVar56._12_4_ * auVar56._12_4_;
    auVar94 = NEON_ext(auVar59,auVar59,8,1);
    fVar90 = auVar94._0_4_ + auVar59._0_4_ + auVar59._4_4_;
    if (fVar90 < 1e-06) {
      *(long *)(param_1 + 0x18) = auVar56._8_8_;
      *puVar30 = uVar36;
      uVar26 = 6;
      goto LAB_109821040;
    }
    if (fVar143 - fVar90 <= fVar143 * 1.1920929e-07) {
      uVar26 = 0xc;
      fVar143 = fVar90;
      goto LAB_109821040;
    }
    *(long *)(param_1 + 0x18) = auVar56._8_8_;
    *(ulong *)(param_1 + 0x10) = uVar36;
    iVar115 = *(int *)(param_1 + 0x5c);
    *(int *)(param_1 + 0x5c) = iVar115 + 1;
    if (1000 < iVar115) goto LAB_109821030;
    fVar143 = fVar90;
  } while (**(int **)(param_1 + 0x28) != 4);
  *(undefined4 *)(param_1 + 0x60) = 0xd;
LAB_109821030:
  bVar22 = false;
  fVar34 = 0.0;
  auVar148 = ZEXT216(0);
LAB_1098210e4:
  bVar21 = false;
  if (((*(int *)(param_1 + 100) != 0) && (bVar21 = false, *(long *)(param_1 + 0x20) != 0)) &&
     (bVar21 = false, *(int *)(param_1 + 0x60) != 0)) {
    uVar36 = (ulong)(uint)(fVar144 + fVar34);
    bVar21 = fVar144 + fVar34 < 0.001;
  }
  fStack_270 = auVar148._0_4_;
  fStack_26c = auVar148._4_4_;
  fStack_268 = auVar148._8_4_;
  fStack_264 = auVar148._12_4_;
  if ((bVar23 || (bool)(bVar21 | bVar22 ^ 1U)) &&
     (plVar25 = *(long **)(param_1 + 0x20), plVar25 != (long *)0x0)) {
    *(undefined8 *)(param_1 + 0x10) = 0;
    *(undefined8 *)(param_1 + 0x18) = 0;
    (**(code **)(*plVar25 + 0x10))
              (plVar25,*(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x30),
               *(undefined8 *)(param_1 + 0x38),&uStack_1c0,&fStack_200,puVar30,&fStack_210,
               &fStack_220,param_4);
    auVar56 = *(undefined1 (*) [16])(param_1 + 0x10);
    uVar36 = auVar56._0_8_;
    fVar70 = auVar56._0_4_;
    auVar61._0_4_ = fVar70 * fVar70;
    fVar89 = auVar56._4_4_;
    auVar61._4_4_ = fVar89 * fVar89;
    fVar91 = auVar56._8_4_;
    auVar61._8_4_ = fVar91 * fVar91;
    fVar53 = auVar56._12_4_;
    auVar61._12_4_ = fVar53 * fVar53;
    auVar94 = NEON_ext(auVar61,auVar61,8,1);
    fVar158 = auVar61._0_4_ + auVar61._4_4_ + auVar94._0_4_;
    if (fVar158 == 0.0) goto LAB_109821244;
    if ((int)plVar25 == 0) {
      if (fVar158 <= 0.0) goto LAB_109821244;
      auVar98._0_4_ = (fStack_210 - fStack_220) * (fStack_210 - fStack_220);
      auVar98._4_4_ = (fStack_20c - fStack_21c) * (fStack_20c - fStack_21c);
      auVar98._8_4_ = (fStack_208 - fStack_218) * (fStack_208 - fStack_218);
      auVar98._12_4_ = 0;
      auVar56 = NEON_ext(auVar98,auVar98,8,1);
      fVar92 = SQRT(auVar98._0_4_ + auVar98._4_4_ + auVar56._0_4_) - fVar144;
      bVar23 = false;
      if (fVar34 <= fVar92) {
        bVar23 = bVar22;
      }
      if (bVar23) {
        uVar26 = 5;
        goto LAB_10982122c;
      }
      auVar68._0_4_ = fStack_220 + fVar70 * fVar71;
      auVar68._4_4_ = fStack_21c + fVar89 * fVar71;
      auVar68._8_4_ = fStack_218 + fVar91 * fVar71;
      auVar68._12_4_ = fStack_214 + 0.0;
      fVar71 = 1.0 / SQRT(fVar158);
      uStack_178 = CONCAT44(fVar53 * fVar71,fVar91 * fVar71);
      uStack_180 = CONCAT44(fVar89 * fVar71,fVar70 * fVar71);
      *(undefined4 *)(param_1 + 0x58) = 6;
    }
    else {
      auVar68._4_4_ = fStack_21c;
      auVar68._0_4_ = fStack_220;
      auVar68._8_4_ = fStack_218;
      auVar68._12_4_ = fStack_214;
      auVar110._0_4_ = fStack_220 - fStack_210;
      auVar110._4_4_ = fStack_21c - fStack_20c;
      auVar110._8_4_ = fStack_218 - fStack_208;
      auVar110._12_4_ = 0;
      auVar121._0_4_ = auVar110._0_4_ * auVar110._0_4_;
      auVar121._4_4_ = auVar110._4_4_ * auVar110._4_4_;
      auVar121._8_4_ = auVar110._8_4_ * auVar110._8_4_;
      auVar121._12_4_ = 0;
      auVar94 = NEON_ext(auVar121,auVar121,8,1);
      fVar70 = auVar121._0_4_ + auVar121._4_4_ + auVar94._0_4_;
      fVar71 = fVar70;
      if (fVar70 <= 1.4210855e-14) {
        fVar71 = fVar158;
      }
      if (fVar71 <= 1.4210855e-14) {
        *(undefined4 *)(param_1 + 0x58) = 9;
        goto LAB_109821244;
      }
      auVar97._0_4_ = (fStack_210 - fStack_220) * (fStack_210 - fStack_220);
      auVar97._4_4_ = (fStack_20c - fStack_21c) * (fStack_20c - fStack_21c);
      auVar97._8_4_ = (fStack_208 - fStack_218) * (fStack_208 - fStack_218);
      auVar97._12_4_ = 0;
      auVar94 = NEON_ext(auVar97,auVar97,8,1);
      fVar92 = -SQRT(auVar94._0_4_ + auVar97._0_4_ + auVar97._4_4_);
      *(undefined4 *)(param_1 + 0x58) = 3;
      bVar23 = false;
      if (fVar34 <= fVar92) {
        bVar23 = bVar22;
      }
      if (bVar23) {
        uVar26 = 8;
LAB_10982122c:
        *(undefined4 *)(param_1 + 0x58) = uVar26;
        auVar68 = auVar140;
        fVar92 = fVar34;
      }
      else {
        iVar115 = -(uint)(fVar70 <= 1.4210855e-14);
        auVar123._0_4_ =
             CONCAT13(~(byte)((uint)iVar115 >> 0x18),
                      CONCAT12(~(byte)((uint)iVar115 >> 0x10),
                               CONCAT11(~(byte)((uint)iVar115 >> 8),~(byte)iVar115)));
        auVar123._4_4_ = auVar123._0_4_;
        auVar123._8_4_ = auVar123._0_4_;
        auVar123._12_4_ = auVar123._0_4_;
        auVar56 = auVar56 ^ (auVar56 ^ auVar110) & auVar123;
        fVar71 = 1.0 / SQRT(fVar71);
        uStack_178 = CONCAT44(auVar56._12_4_ * fVar71,auVar56._8_4_ * fVar71);
        uStack_180 = CONCAT44(auVar56._4_4_ * fVar71,auVar56._0_4_ * fVar71);
      }
    }
LAB_109821248:
    if ((fVar92 < 0.0) || (uVar36 = (ulong)(uint)(fVar92 * fVar92), fVar92 * fVar92 < param_2[0x20])
       ) {
      *(undefined8 *)(param_1 + 0x18) = uStack_178;
      *(ulong *)(param_1 + 0x10) = uStack_180;
      *(float *)(param_1 + 0x54) = fVar92;
      auVar37._0_8_ = auVar148._0_8_ ^ 0x8000000080000000;
      auVar37[8] = auVar148[8];
      auVar37[9] = auVar148[9];
      auVar37[10] = auVar148[10];
      auVar37[0xb] = auVar148[0xb] ^ 0x80;
      fVar71 = (float)auVar37._0_8_;
      fVar34 = (float)(auVar37._0_8_ >> 0x20);
      fVar70 = auVar37._8_4_;
      uStack_168 = CONCAT44(fVar71 * 0.0 + fVar34 * 0.0 + fVar70 * 0.0,
                            (float)uStack_1b8 * fVar71 + (float)uStack_1a8 * fVar34 +
                            (float)uStack_198 * fVar70);
      uStack_170 = CONCAT44(uStack_1c0._4_4_ * fVar71 + uStack_1b0._4_4_ * fVar34 +
                            uStack_1a0._4_4_ * fVar70,
                            (float)uStack_1c0 * fVar71 + (float)uStack_1b0 * fVar34 +
                            (float)uStack_1a0 * fVar70);
      fStack_210 = fStack_200 * fStack_270 + fStack_1f0 * fStack_26c + fStack_1e0 * fStack_268;
      fStack_20c = fStack_1fc * fStack_270 + fStack_1ec * fStack_26c + fStack_1dc * fStack_268;
      fStack_208 = fStack_1f8 * fStack_270 + fStack_1e8 * fStack_26c + fStack_1d8 * fStack_268;
      fStack_204 = fStack_270 * 0.0 + fStack_26c * 0.0 + fStack_268 * 0.0;
      FUN_109819648(&fStack_220,*(undefined8 *)(param_1 + 0x30),&uStack_170);
      FUN_109819648(&fStack_230,*(undefined8 *)(param_1 + 0x38),&fStack_210);
      fVar15 = fStack_188;
      fVar105 = fStack_18c;
      fVar103 = fStack_190;
      fVar173 = fStack_1c8;
      fVar168 = fStack_1cc;
      fVar164 = fStack_1d0;
      fVar160 = fStack_1d8;
      fVar155 = fStack_1dc;
      fVar172 = fStack_1e0;
      fVar170 = fStack_1e4;
      fVar169 = fStack_1e8;
      fVar167 = fStack_1ec;
      fVar166 = fStack_1f0;
      fVar163 = fStack_1f4;
      fVar145 = fStack_1f8;
      fVar136 = fStack_1fc;
      fVar162 = fStack_200;
      fVar159 = fStack_214;
      fVar158 = fStack_218;
      fVar53 = fStack_21c;
      fVar91 = fStack_220;
      fVar89 = fStack_224;
      fVar70 = fStack_228;
      fVar34 = fStack_22c;
      fVar71 = fStack_230;
      fVar174 = (float)uStack_1c0;
      fVar8 = uStack_1c0._4_4_;
      fVar9 = (float)uStack_1b8;
      fVar10 = uStack_1b8._4_4_;
      fVar11 = (float)uStack_1b0;
      fVar12 = uStack_1b0._4_4_;
      fVar13 = (float)uStack_1a8;
      fVar14 = uStack_1a8._4_4_;
      fVar143 = (float)uStack_1a0;
      fVar90 = uStack_1a0._4_4_;
      fVar102 = (float)uStack_198;
      fVar35 = (float)uStack_180;
      fVar16 = uStack_180._4_4_;
      fVar17 = (float)uStack_178;
      uStack_168 = CONCAT44((float)uStack_178 * 0.0 +
                            (float)uStack_180 * 0.0 + uStack_180._4_4_ * 0.0,
                            (float)uStack_198 * (float)uStack_178 +
                            (float)uStack_1b8 * (float)uStack_180 +
                            (float)uStack_1a8 * uStack_180._4_4_);
      uStack_170 = CONCAT44(uStack_1a0._4_4_ * (float)uStack_178 +
                            uStack_1c0._4_4_ * (float)uStack_180 +
                            uStack_1b0._4_4_ * uStack_180._4_4_,
                            (float)uStack_1a0 * (float)uStack_178 +
                            (float)uStack_1c0 * (float)uStack_180 +
                            (float)uStack_1b0 * uStack_180._4_4_);
      fVar114 = -(float)uStack_180;
      fVar128 = -uStack_180._4_4_;
      fVar129 = -(float)uStack_178;
      fVar130 = -uStack_178._4_4_;
      fStack_210 = fStack_1e0 * fVar129 + fStack_200 * fVar114 + fStack_1f0 * fVar128;
      fStack_20c = fStack_1dc * fVar129 + fStack_1fc * fVar114 + fStack_1ec * fVar128;
      fStack_208 = fStack_1d8 * fVar129 + fStack_1f8 * fVar114 + fStack_1e8 * fVar128;
      fStack_204 = fVar129 * 0.0 + fVar114 * 0.0 + fVar128 * 0.0;
      FUN_109819648(&fStack_220,*(undefined8 *)(param_1 + 0x30),&uStack_170);
      FUN_109819648(&fStack_230,*(undefined8 *)(param_1 + 0x38),&fStack_210);
      auVar62._0_4_ = (float)uStack_1c0 * fStack_220;
      auVar62._4_4_ = uStack_1c0._4_4_ * fStack_21c;
      auVar62._8_4_ = (float)uStack_1b8 * fStack_218;
      auVar62._12_4_ = uStack_1b8._4_4_ * fStack_214;
      auVar84._0_4_ = fStack_220 * (float)uStack_1b0;
      auVar84._4_4_ = fStack_21c * uStack_1b0._4_4_;
      auVar84._8_4_ = fStack_218 * (float)uStack_1a8;
      auVar84._12_4_ = fStack_214 * uStack_1a8._4_4_;
      auVar47._0_4_ = fStack_220 * (float)uStack_1a0;
      auVar47._4_4_ = fStack_21c * uStack_1a0._4_4_;
      auVar47._8_4_ = fStack_218 * (float)uStack_198;
      auVar94 = NEON_ext(auVar62,auVar62,8,1);
      auVar133 = NEON_ext(auVar84,auVar84,8,1);
      auVar47._12_4_ = 0;
      auVar56 = NEON_ext(auVar47,auVar47,8,1);
      auVar85._0_4_ = fStack_200 * fStack_230;
      auVar85._4_4_ = fStack_1fc * fStack_22c;
      auVar85._8_4_ = fStack_1f8 * fStack_228;
      auVar85._12_4_ = fStack_1f4 * fStack_224;
      auVar99._0_4_ = fStack_230 * fStack_1f0;
      auVar99._4_4_ = fStack_22c * fStack_1ec;
      auVar99._8_4_ = fStack_228 * fStack_1e8;
      auVar99._12_4_ = fStack_224 * fStack_1e4;
      auVar63._0_4_ = fStack_230 * fStack_1e0;
      auVar63._4_4_ = fStack_22c * fStack_1dc;
      auVar63._8_4_ = fStack_228 * fStack_1d8;
      auVar108 = NEON_ext(auVar85,auVar85,8,1);
      auVar118 = NEON_ext(auVar99,auVar99,8,1);
      auVar63._12_4_ = 0;
      auVar117 = NEON_ext(auVar63,auVar63,8,1);
      auVar48._0_4_ =
           fVar114 * ((auVar62._0_4_ + auVar62._4_4_ + auVar94._0_4_ + fStack_190) -
                     (auVar85._0_4_ + auVar85._4_4_ + auVar108._0_4_ + fStack_1d0));
      auVar48._4_4_ =
           fVar128 * ((auVar84._0_4_ + auVar84._4_4_ + auVar133._0_4_ + fStack_18c) -
                     (auVar99._0_4_ + auVar99._4_4_ + auVar118._0_4_ + fStack_1cc));
      auVar48._8_4_ =
           fVar129 * ((auVar47._0_4_ + auVar47._4_4_ + auVar56._0_4_ + auVar56._4_4_ + fStack_188) -
                     (auVar63._0_4_ + auVar63._4_4_ + auVar117._0_4_ + auVar117._4_4_ + fStack_1c8))
      ;
      auVar48._12_4_ = fVar130 * 0.0;
      auVar56 = NEON_ext(auVar48,auVar48,8,1);
      fVar130 = (auVar48._0_4_ + auVar48._4_4_ + auVar56._0_4_) - fVar144;
      uStack_168 = CONCAT44(fVar114 * 0.0 + fVar128 * 0.0 + fVar129 * 0.0,
                            param_2[2] * fVar114 + param_2[6] * fVar128 + param_2[10] * fVar129);
      uStack_170 = CONCAT44(param_2[1] * fVar114 + param_2[5] * fVar128 + param_2[9] * fVar129,
                            *param_2 * fVar114 + param_2[4] * fVar128 + param_2[8] * fVar129);
      fStack_210 = param_2[0x10] * fVar35 + param_2[0x14] * fVar16 + param_2[0x18] * fVar17;
      fStack_20c = param_2[0x11] * fVar35 + param_2[0x15] * fVar16 + param_2[0x19] * fVar17;
      fStack_208 = param_2[0x12] * fVar35 + param_2[0x16] * fVar16 + param_2[0x1a] * fVar17;
      fStack_204 = fVar35 * 0.0 + fVar16 * 0.0 + fVar17 * 0.0;
      FUN_109819648(&fStack_220,*(undefined8 *)(param_1 + 0x30),&uStack_170);
      FUN_109819648(&fStack_230,*(undefined8 *)(param_1 + 0x38),&fStack_210);
      auVar64._0_4_ = (float)uStack_1c0 * fStack_220;
      auVar64._4_4_ = uStack_1c0._4_4_ * fStack_21c;
      auVar64._8_4_ = (float)uStack_1b8 * fStack_218;
      auVar64._12_4_ = uStack_1b8._4_4_ * fStack_214;
      auVar86._0_4_ = fStack_220 * (float)uStack_1b0;
      auVar86._4_4_ = fStack_21c * uStack_1b0._4_4_;
      auVar86._8_4_ = fStack_218 * (float)uStack_1a8;
      auVar86._12_4_ = fStack_214 * uStack_1a8._4_4_;
      auVar49._0_4_ = fStack_220 * (float)uStack_1a0;
      auVar49._4_4_ = fStack_21c * uStack_1a0._4_4_;
      auVar49._8_4_ = fStack_218 * (float)uStack_198;
      auVar94 = NEON_ext(auVar64,auVar64,8,1);
      auVar108 = NEON_ext(auVar86,auVar86,8,1);
      auVar49._12_4_ = 0;
      auVar56 = NEON_ext(auVar49,auVar49,8,1);
      auVar87._0_4_ = fStack_200 * fStack_230;
      auVar87._4_4_ = fStack_1fc * fStack_22c;
      auVar87._8_4_ = fStack_1f8 * fStack_228;
      auVar87._12_4_ = fStack_1f4 * fStack_224;
      auVar100._0_4_ = fStack_230 * fStack_1f0;
      auVar100._4_4_ = fStack_22c * fStack_1ec;
      auVar100._8_4_ = fStack_228 * fStack_1e8;
      auVar100._12_4_ = fStack_224 * fStack_1e4;
      auVar50._0_4_ = fStack_230 * fStack_1e0;
      auVar50._4_4_ = fStack_22c * fStack_1dc;
      auVar50._8_4_ = fStack_228 * fStack_1d8;
      auVar133 = NEON_ext(auVar87,auVar87,8,1);
      auVar118 = NEON_ext(auVar100,auVar100,8,1);
      auVar50._12_4_ = 0;
      auVar117 = NEON_ext(auVar50,auVar50,8,1);
      auVar51._0_4_ =
           (float)uStack_180 *
           ((auVar64._0_4_ + auVar64._4_4_ + auVar94._0_4_ + fStack_190) -
           (auVar87._0_4_ + auVar87._4_4_ + auVar133._0_4_ + fStack_1d0));
      auVar51._4_4_ =
           uStack_180._4_4_ *
           ((auVar86._0_4_ + auVar86._4_4_ + auVar108._0_4_ + fStack_18c) -
           (auVar100._0_4_ + auVar100._4_4_ + auVar118._0_4_ + fStack_1cc));
      auVar51._8_4_ =
           (float)uStack_178 *
           ((auVar49._0_4_ + auVar49._4_4_ + auVar56._0_4_ + auVar56._4_4_ + fStack_188) -
           (auVar50._0_4_ + auVar50._4_4_ + auVar117._0_4_ + auVar117._4_4_ + fStack_1c8));
      auVar51._12_4_ = uStack_178._4_4_ * 0.0;
      auVar56 = NEON_ext(auVar51,auVar51,8,1);
      fVar35 = (auVar51._0_4_ + auVar51._4_4_ + auVar56._0_4_) - fVar144;
      if (fVar35 < fVar130) {
        *(undefined4 *)(param_1 + 0x58) = 10;
        uStack_178 = CONCAT44(-uStack_178._4_4_,-(float)uStack_178);
        uStack_180 = CONCAT44(-uStack_180._4_4_,-(float)uStack_180);
      }
      auVar65._0_4_ = fStack_270 * fStack_270;
      auVar65._4_4_ = fStack_26c * fStack_26c;
      auVar65._8_4_ = fStack_268 * fStack_268;
      auVar65._12_4_ = fStack_264 * fStack_264;
      auVar56 = NEON_ext(auVar65,auVar65,8,1);
      if (auVar56._0_4_ + auVar65._0_4_ + auVar65._4_4_ != 0.0) {
        auVar66._0_4_ = fVar91 * fVar143;
        auVar66._4_4_ = fVar53 * fVar90;
        auVar66._8_4_ = fVar158 * fVar102;
        auVar88._0_4_ = fVar71 * fVar172;
        auVar88._4_4_ = fVar34 * fVar155;
        auVar88._8_4_ = fVar70 * fVar160;
        auVar101._0_4_ = fVar174 * fVar91;
        auVar101._4_4_ = fVar8 * fVar53;
        auVar101._8_4_ = fVar9 * fVar158;
        auVar101._12_4_ = fVar10 * fVar159;
        auVar111._0_4_ = fVar91 * fVar11;
        auVar111._4_4_ = fVar53 * fVar12;
        auVar111._8_4_ = fVar158 * fVar13;
        auVar111._12_4_ = fVar159 * fVar14;
        auVar66._12_4_ = 0;
        auVar122._0_4_ = fVar162 * fVar71;
        auVar122._4_4_ = fVar136 * fVar34;
        auVar122._8_4_ = fVar145 * fVar70;
        auVar122._12_4_ = fVar163 * fVar89;
        auVar134._0_4_ = fVar71 * fVar166;
        auVar134._4_4_ = fVar34 * fVar167;
        auVar134._8_4_ = fVar70 * fVar169;
        auVar134._12_4_ = fVar89 * fVar170;
        auVar88._12_4_ = 0;
        auVar56 = NEON_ext(auVar101,auVar101,8,1);
        auVar94 = NEON_ext(auVar111,auVar111,8,1);
        auVar117 = NEON_ext(auVar66,auVar66,8,1);
        auVar108 = NEON_ext(auVar122,auVar122,8,1);
        auVar133 = NEON_ext(auVar134,auVar134,8,1);
        auVar118 = NEON_ext(auVar88,auVar88,8,1);
        auVar67._0_4_ =
             fStack_270 *
             ((auVar101._0_4_ + auVar101._4_4_ + auVar56._0_4_ + fVar103) -
             (auVar122._0_4_ + auVar122._4_4_ + auVar108._0_4_ + fVar164));
        auVar67._4_4_ =
             fStack_26c *
             ((auVar111._0_4_ + auVar111._4_4_ + auVar94._0_4_ + fVar105) -
             (auVar134._0_4_ + auVar134._4_4_ + auVar133._0_4_ + fVar168));
        auVar67._8_4_ =
             fStack_268 *
             ((auVar66._0_4_ + auVar66._4_4_ + auVar117._0_4_ + auVar117._4_4_ + fVar15) -
             (auVar88._0_4_ + auVar88._4_4_ + auVar118._0_4_ + auVar118._4_4_ + fVar173));
        auVar67._12_4_ = fStack_264 * 0.0;
        auVar56 = NEON_ext(auVar67,auVar67,8,1);
        fVar144 = (auVar67._0_4_ + auVar67._4_4_ + auVar56._0_4_) - fVar144;
        if (((fVar35 < fVar144) && (fVar92 < fVar144)) && (fVar130 < fVar144)) {
          uStack_178 = auVar148._8_8_;
          uStack_180 = auVar148._0_8_;
          fVar92 = fVar144;
        }
      }
      uStack_168 = CONCAT44(auVar68._12_4_ + 0.0,auVar68._8_4_ + fVar113);
      uStack_170 = CONCAT44(auVar68._4_4_ + fVar112,auVar68._0_4_ + fVar104);
      uVar36 = (**(code **)(*param_3 + 0x20))(fVar92,param_3,&uStack_180,&uStack_170);
    }
  }
  else {
LAB_109821244:
    auVar68 = auVar140;
    fVar92 = fVar34;
    if (bVar22) goto LAB_109821248;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_a0) {
    return uVar36;
  }
  ___stack_chk_fail();
  fVar144 = (float)extraout_d1;
  fVar70 = (float)extraout_d2;
  fVar136 = fVar70 - fVar144;
  fVar34 = (float)((ulong)extraout_d1 >> 0x20);
  fVar89 = (float)((ulong)extraout_d2 >> 0x20);
  fVar163 = fVar89 - fVar34;
  fVar166 = extraout_var_01 - extraout_var_00;
  fVar91 = (float)extraout_d3;
  fVar92 = fVar91 - fVar144;
  fVar53 = (float)((ulong)extraout_d3 >> 0x20);
  fVar159 = fVar53 - fVar34;
  fVar158 = (float)extraout_var_02;
  fVar162 = fVar158 - extraout_var_00;
  fVar113 = (float)extraout_d0;
  fVar167 = fVar144 - fVar113;
  fVar71 = (float)((ulong)extraout_d0 >> 0x20);
  fVar169 = fVar34 - fVar71;
  fVar170 = extraout_var_00 - extraout_var;
  auVar124._0_4_ = fVar167 * fVar167;
  auVar124._4_4_ = fVar169 * fVar169;
  auVar124._8_4_ = fVar170 * fVar170;
  auVar124._12_4_ = 0;
  auVar56 = NEON_ext(auVar124,auVar124,8,1);
  fVar104 = auVar56._0_4_ + auVar124._0_4_ + auVar124._4_4_;
  auVar149._0_4_ = fVar136 * fVar136;
  auVar149._4_4_ = fVar163 * fVar163;
  auVar149._8_4_ = fVar166 * fVar166;
  auVar149._12_4_ = 0;
  auVar56 = NEON_ext(auVar149,auVar149,8,1);
  fVar155 = auVar56._0_4_ + auVar149._0_4_ + auVar149._4_4_;
  auVar150._0_4_ = fVar92 * fVar92;
  auVar150._4_4_ = fVar159 * fVar159;
  auVar150._8_4_ = fVar162 * fVar162;
  auVar150._12_4_ = 0;
  auVar56 = NEON_ext(auVar150,auVar150,8,1);
  fVar145 = auVar56._0_4_ + auVar150._0_4_ + auVar150._4_4_;
  auVar153._0_4_ = fVar167 * fVar136;
  auVar153._4_4_ = fVar169 * fVar163;
  auVar153._8_4_ = fVar170 * fVar166;
  auVar153._12_4_ = 0;
  auVar56 = NEON_ext(auVar153,auVar153,8,1);
  fVar160 = auVar56._0_4_ + auVar153._0_4_ + auVar153._4_4_;
  auVar154._0_4_ = fVar167 * fVar92;
  auVar154._4_4_ = fVar169 * fVar159;
  auVar154._8_4_ = fVar170 * fVar162;
  auVar154._12_4_ = 0;
  auVar56 = NEON_ext(auVar154,auVar154,8,1);
  fVar172 = auVar56._0_4_ + auVar154._0_4_ + auVar154._4_4_;
  auVar165._0_4_ = fVar136 * fVar92;
  auVar165._4_4_ = fVar163 * fVar159;
  auVar165._8_4_ = fVar166 * fVar162;
  auVar165._12_4_ = 0;
  auVar56 = NEON_ext(auVar165,auVar165,8,1);
  fVar164 = auVar56._0_4_ + auVar165._0_4_ + auVar165._4_4_;
  fVar112 = (-(fVar145 * fVar160) + fVar164 * fVar172) / (-(fVar164 * fVar164) + fVar155 * fVar145);
  fVar168 = ABS(fVar112);
  bVar22 = true;
  if ((fVar112 <= 0.0) && (bVar22 = false, !NAN(fVar168))) {
    bVar22 = fVar168 < 1.1920929e-07;
  }
  if (bVar22) {
    if (1.1920929e-07 <= ABS(fVar112 + -1.0)) {
      bVar22 = true;
      if ((ABS(fVar112 + -1.0) < fVar168 * 1.1920929e-07) && (bVar22 = false, !NAN(fVar168))) {
        bVar22 = fVar168 < 1.0;
      }
      if ((1.0 <= fVar112) && (bVar22)) goto LAB_109821940;
    }
    fVar168 = (-(fVar112 * fVar164) - fVar172) / fVar145;
    fVar173 = ABS(fVar168);
    if ((fVar173 < 1.1920929e-07) || (0.0 < fVar168)) {
      if (1.1920929e-07 <= ABS(fVar168 + -1.0)) {
        bVar22 = true;
        if ((ABS(fVar168 + -1.0) < fVar173 * 1.1920929e-07) && (bVar22 = false, !NAN(fVar173))) {
          bVar22 = fVar173 < 1.0;
        }
        if ((bVar22) && (1.0 <= fVar168)) goto LAB_109821940;
      }
      fVar173 = fVar112 + fVar168;
      if (ABS(fVar173 + -1.0) < 1.1920929e-07) {
LAB_109821890:
        return (ulong)(uint)(fVar112 * fVar112 * fVar155 + fVar145 * fVar168 * fVar168 +
                             fVar164 * (fVar112 + fVar112) * fVar168 + fVar160 * (fVar112 + fVar112)
                             + fVar172 * (fVar168 + fVar168) + fVar104);
      }
      fVar174 = ABS(fVar173);
      bVar22 = true;
      if ((ABS(fVar173 + -1.0) < fVar174 * 1.1920929e-07) && (bVar22 = false, !NAN(fVar174))) {
        bVar22 = fVar174 < 1.0;
      }
      if ((fVar173 < 1.0) || (!bVar22)) goto LAB_109821890;
    }
  }
LAB_109821940:
  fVar155 = -fVar160 / fVar155;
  fVar112 = ABS(fVar155);
  bVar22 = true;
  if ((0.0 <= fVar155) && (bVar22 = false, !NAN(fVar112))) {
    bVar22 = fVar112 < 1.1920929e-07;
  }
  fVar160 = fVar104;
  if (!bVar22) {
    fVar160 = ABS(fVar155 + -1.0);
    bVar22 = true;
    if ((fVar155 <= 1.0) && (bVar22 = false, !NAN(fVar160))) {
      bVar22 = fVar160 < 1.1920929e-07;
    }
    if (bVar22) {
LAB_10982197c:
      auVar131._0_4_ = fVar70 - fVar113;
      auVar131._4_4_ = fVar89 - fVar71;
      auVar131._8_4_ = extraout_var_01 - extraout_var;
    }
    else {
      bVar22 = false;
      if ((1.0 <= fVar112) && (bVar22 = false, !NAN(fVar160) && !NAN(fVar112 * 1.1920929e-07))) {
        bVar22 = fVar160 < fVar112 * 1.1920929e-07;
      }
      if (bVar22) goto LAB_10982197c;
      auVar131._0_4_ = fVar136 * fVar155 + fVar167;
      auVar131._4_4_ = fVar163 * fVar155 + fVar169;
      auVar131._8_4_ = fVar170 + fVar155 * fVar166;
    }
    auVar135._0_4_ = auVar131._0_4_ * auVar131._0_4_;
    auVar135._4_4_ = auVar131._4_4_ * auVar131._4_4_;
    auVar135._8_4_ = auVar131._8_4_ * auVar131._8_4_;
    auVar135._12_4_ = 0;
    auVar56 = NEON_ext(auVar135,auVar135,8,1);
    fVar160 = auVar56._0_4_ + auVar135._0_4_ + auVar135._4_4_;
  }
  fVar145 = -fVar172 / fVar145;
  fVar112 = ABS(fVar145);
  bVar22 = true;
  if ((0.0 <= fVar145) && (bVar22 = false, !NAN(fVar112))) {
    bVar22 = fVar112 < 1.1920929e-07;
  }
  if (!bVar22) {
    fVar104 = ABS(fVar145 + -1.0);
    bVar22 = true;
    if ((fVar145 <= 1.0) && (bVar22 = false, !NAN(fVar104))) {
      bVar22 = fVar104 < 1.1920929e-07;
    }
    if (bVar22) {
      auVar125._8_8_ = extraout_var_02;
      auVar125._0_8_ = extraout_d3;
      auVar116 = auVar125._0_12_;
    }
    else {
      bVar22 = false;
      if ((1.0 <= fVar112) && (bVar22 = false, !NAN(fVar104) && !NAN(fVar112 * 1.1920929e-07))) {
        bVar22 = fVar104 < fVar112 * 1.1920929e-07;
      }
      auVar127._8_8_ = extraout_var_02;
      auVar127._0_8_ = extraout_d3;
      auVar116 = auVar127._0_12_;
      if (!bVar22) {
        auVar116._0_4_ = fVar144 + fVar92 * fVar145;
        auVar116._4_4_ = fVar34 + fVar159 * fVar145;
        auVar116._8_4_ = extraout_var_00 + fVar145 * fVar162;
      }
    }
    fVar104 = auVar116._0_4_ - fVar113;
    fVar112 = auVar116._4_4_ - fVar71;
    fVar144 = auVar116._8_4_ - extraout_var;
    auVar69._0_4_ = fVar104 * fVar104;
    auVar69._4_4_ = fVar112 * fVar112;
    auVar69._8_4_ = fVar144 * fVar144;
    auVar69._12_4_ = 0;
    auVar56 = NEON_ext(auVar69,auVar69,8,1);
    fVar104 = auVar56._0_4_ + auVar69._0_4_ + auVar69._4_4_;
  }
  fVar112 = fVar91 - fVar70;
  fVar144 = fVar53 - fVar89;
  fVar34 = fVar158 - extraout_var_01;
  if (fVar160 <= fVar104) {
    fVar104 = fVar160;
  }
  fVar159 = fVar70 - fVar113;
  fVar162 = fVar89 - fVar71;
  fVar136 = extraout_var_01 - extraout_var;
  auVar126._0_4_ = fVar159 * fVar112;
  auVar126._4_4_ = fVar162 * fVar144;
  auVar126._8_4_ = fVar136 * fVar34;
  auVar126._12_4_ = 0;
  auVar56 = NEON_ext(auVar126,auVar126,8,1);
  auVar142._0_4_ = fVar112 * fVar112;
  auVar142._4_4_ = fVar144 * fVar144;
  auVar142._8_4_ = fVar34 * fVar34;
  auVar142._12_4_ = 0;
  auVar94 = NEON_ext(auVar142,auVar142,8,1);
  fVar92 = -(auVar56._0_4_ + auVar126._0_4_ + auVar126._4_4_) /
           (auVar94._0_4_ + auVar142._0_4_ + auVar142._4_4_);
  fVar145 = ABS(fVar92);
  bVar22 = true;
  if ((0.0 <= fVar92) && (bVar22 = false, !NAN(fVar145))) {
    bVar22 = fVar145 < 1.1920929e-07;
  }
  if (bVar22) {
    auVar38._0_4_ = fVar159 * fVar159;
    auVar38._4_4_ = fVar162 * fVar162;
    auVar38._8_4_ = fVar136 * fVar136;
    goto LAB_109821a74;
  }
  fVar159 = ABS(fVar92 + -1.0);
  bVar22 = true;
  if ((fVar92 <= 1.0) && (bVar22 = false, !NAN(fVar159))) {
    bVar22 = fVar159 < 1.1920929e-07;
  }
  if (bVar22) {
LAB_109821a68:
    auVar39._0_4_ = fVar91 - fVar113;
    auVar39._4_4_ = fVar53 - fVar71;
    auVar39._8_4_ = fVar158 - extraout_var;
  }
  else {
    bVar22 = false;
    if ((1.0 <= fVar145) && (bVar22 = false, !NAN(fVar159) && !NAN(fVar145 * 1.1920929e-07))) {
      bVar22 = fVar159 < fVar145 * 1.1920929e-07;
    }
    if (bVar22) goto LAB_109821a68;
    auVar39._0_4_ = (fVar70 + fVar112 * fVar92) - fVar113;
    auVar39._4_4_ = (fVar89 + fVar144 * fVar92) - fVar71;
    auVar39._8_4_ = (extraout_var_01 + fVar92 * fVar34) - extraout_var;
  }
  auVar38._0_4_ = auVar39._0_4_ * auVar39._0_4_;
  auVar38._4_4_ = auVar39._4_4_ * auVar39._4_4_;
  auVar38._8_4_ = auVar39._8_4_ * auVar39._8_4_;
LAB_109821a74:
  auVar52._12_4_ = 0;
  auVar52._0_12_ = auVar38;
  auVar56 = NEON_ext(auVar52,auVar52,8,1);
  fVar112 = auVar56._0_4_ + auVar38._0_4_ + auVar38._4_4_;
  uVar36 = (ulong)(uint)fVar104;
  if (fVar112 < fVar104) {
    uVar36 = CONCAT44(auVar56._4_4_ + auVar38._0_4_ + auVar38._4_4_,fVar112);
  }
  return uVar36;
}



/* Entry: 109821764; end: 109821b27;  */

ulong FUN_109821764(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  bool bVar1;
  float fVar2;
  float fVar6;
  float in_register_00005008;
  undefined1 auVar3 [12];
  undefined1 auVar4 [12];
  ulong uVar7;
  float in_register_00005028;
  float fVar9;
  undefined1 auVar8 [16];
  float fVar10;
  float fVar11;
  float in_register_00005048;
  float fVar12;
  float fVar13;
  float fVar14;
  undefined8 in_register_00005068;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  undefined1 auVar20 [12];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [12];
  undefined1 auVar26 [16];
  float fVar27;
  float fVar29;
  float fVar30;
  undefined1 auVar28 [16];
  float fVar31;
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  float fVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  undefined1 auVar44 [16];
  float fVar45;
  float fVar46;
  float fVar47;
  undefined1 auVar5 [16];
  
  fVar18 = (float)((ulong)param_2 >> 0x20);
  fVar9 = (float)param_2;
  fVar6 = (float)((ulong)param_1 >> 0x20);
  fVar2 = (float)param_1;
  fVar10 = (float)param_3;
  fVar27 = fVar10 - fVar9;
  fVar11 = (float)((ulong)param_3 >> 0x20);
  fVar29 = fVar11 - fVar18;
  fVar30 = in_register_00005048 - in_register_00005028;
  fVar12 = (float)param_4;
  fVar15 = fVar12 - fVar9;
  fVar13 = (float)((ulong)param_4 >> 0x20);
  fVar16 = fVar13 - fVar18;
  fVar14 = (float)in_register_00005068;
  fVar17 = fVar14 - in_register_00005028;
  fVar34 = fVar9 - fVar2;
  fVar35 = fVar18 - fVar6;
  fVar36 = in_register_00005028 - in_register_00005008;
  auVar32._0_4_ = fVar34 * fVar34;
  auVar32._4_4_ = fVar35 * fVar35;
  auVar32._8_4_ = fVar36 * fVar36;
  auVar32._12_4_ = 0;
  auVar21 = NEON_ext(auVar32,auVar32,8,1);
  fVar19 = auVar21._0_4_ + auVar32._0_4_ + auVar32._4_4_;
  auVar21._0_4_ = fVar27 * fVar27;
  auVar21._4_4_ = fVar29 * fVar29;
  auVar21._8_4_ = fVar30 * fVar30;
  auVar21._12_4_ = 0;
  auVar32 = NEON_ext(auVar21,auVar21,8,1);
  fVar40 = auVar32._0_4_ + auVar21._0_4_ + auVar21._4_4_;
  auVar33._0_4_ = fVar15 * fVar15;
  auVar33._4_4_ = fVar16 * fVar16;
  auVar33._8_4_ = fVar17 * fVar17;
  auVar33._12_4_ = 0;
  auVar32 = NEON_ext(auVar33,auVar33,8,1);
  fVar31 = auVar32._0_4_ + auVar33._0_4_ + auVar33._4_4_;
  auVar38._0_4_ = fVar34 * fVar27;
  auVar38._4_4_ = fVar35 * fVar29;
  auVar38._8_4_ = fVar36 * fVar30;
  auVar38._12_4_ = 0;
  auVar32 = NEON_ext(auVar38,auVar38,8,1);
  fVar42 = auVar32._0_4_ + auVar38._0_4_ + auVar38._4_4_;
  auVar39._0_4_ = fVar34 * fVar15;
  auVar39._4_4_ = fVar35 * fVar16;
  auVar39._8_4_ = fVar36 * fVar17;
  auVar39._12_4_ = 0;
  auVar32 = NEON_ext(auVar39,auVar39,8,1);
  fVar37 = auVar32._0_4_ + auVar39._0_4_ + auVar39._4_4_;
  auVar44._0_4_ = fVar27 * fVar15;
  auVar44._4_4_ = fVar29 * fVar16;
  auVar44._8_4_ = fVar30 * fVar17;
  auVar44._12_4_ = 0;
  auVar32 = NEON_ext(auVar44,auVar44,8,1);
  fVar43 = auVar32._0_4_ + auVar44._0_4_ + auVar44._4_4_;
  fVar41 = (-(fVar31 * fVar42) + fVar43 * fVar37) / (-(fVar43 * fVar43) + fVar40 * fVar31);
  fVar45 = ABS(fVar41);
  bVar1 = true;
  if ((fVar41 <= 0.0) && (bVar1 = false, !NAN(fVar45))) {
    bVar1 = fVar45 < 1.1920929e-07;
  }
  if (bVar1) {
    if (1.1920929e-07 <= ABS(fVar41 + -1.0)) {
      bVar1 = true;
      if ((ABS(fVar41 + -1.0) < fVar45 * 1.1920929e-07) && (bVar1 = false, !NAN(fVar45))) {
        bVar1 = fVar45 < 1.0;
      }
      if ((1.0 <= fVar41) && (bVar1)) goto LAB_109821940;
    }
    fVar45 = (-(fVar41 * fVar43) - fVar37) / fVar31;
    fVar46 = ABS(fVar45);
    if ((fVar46 < 1.1920929e-07) || (0.0 < fVar45)) {
      if (1.1920929e-07 <= ABS(fVar45 + -1.0)) {
        bVar1 = true;
        if ((ABS(fVar45 + -1.0) < fVar46 * 1.1920929e-07) && (bVar1 = false, !NAN(fVar46))) {
          bVar1 = fVar46 < 1.0;
        }
        if ((bVar1) && (1.0 <= fVar45)) goto LAB_109821940;
      }
      fVar46 = fVar41 + fVar45;
      if (ABS(fVar46 + -1.0) < 1.1920929e-07) {
LAB_109821890:
        return (ulong)(uint)(fVar41 * fVar41 * fVar40 + fVar31 * fVar45 * fVar45 +
                             fVar43 * (fVar41 + fVar41) * fVar45 + fVar42 * (fVar41 + fVar41) +
                             fVar37 * (fVar45 + fVar45) + fVar19);
      }
      fVar47 = ABS(fVar46);
      bVar1 = true;
      if ((ABS(fVar46 + -1.0) < fVar47 * 1.1920929e-07) && (bVar1 = false, !NAN(fVar47))) {
        bVar1 = fVar47 < 1.0;
      }
      if ((fVar46 < 1.0) || (!bVar1)) goto LAB_109821890;
    }
  }
LAB_109821940:
  fVar40 = -fVar42 / fVar40;
  fVar41 = ABS(fVar40);
  bVar1 = true;
  if ((0.0 <= fVar40) && (bVar1 = false, !NAN(fVar41))) {
    bVar1 = fVar41 < 1.1920929e-07;
  }
  fVar42 = fVar19;
  if (!bVar1) {
    fVar42 = ABS(fVar40 + -1.0);
    bVar1 = true;
    if ((fVar40 <= 1.0) && (bVar1 = false, !NAN(fVar42))) {
      bVar1 = fVar42 < 1.1920929e-07;
    }
    if (bVar1) {
LAB_10982197c:
      auVar25._0_4_ = fVar10 - fVar2;
      auVar25._4_4_ = fVar11 - fVar6;
      auVar25._8_4_ = in_register_00005048 - in_register_00005008;
    }
    else {
      bVar1 = false;
      if ((1.0 <= fVar41) && (bVar1 = false, !NAN(fVar42) && !NAN(fVar41 * 1.1920929e-07))) {
        bVar1 = fVar42 < fVar41 * 1.1920929e-07;
      }
      if (bVar1) goto LAB_10982197c;
      auVar25._0_4_ = fVar27 * fVar40 + fVar34;
      auVar25._4_4_ = fVar29 * fVar40 + fVar35;
      auVar25._8_4_ = fVar36 + fVar40 * fVar30;
    }
    auVar26._0_4_ = auVar25._0_4_ * auVar25._0_4_;
    auVar26._4_4_ = auVar25._4_4_ * auVar25._4_4_;
    auVar26._8_4_ = auVar25._8_4_ * auVar25._8_4_;
    auVar26._12_4_ = 0;
    auVar32 = NEON_ext(auVar26,auVar26,8,1);
    fVar42 = auVar32._0_4_ + auVar26._0_4_ + auVar26._4_4_;
  }
  fVar31 = -fVar37 / fVar31;
  fVar41 = ABS(fVar31);
  bVar1 = true;
  if ((0.0 <= fVar31) && (bVar1 = false, !NAN(fVar41))) {
    bVar1 = fVar41 < 1.1920929e-07;
  }
  if (!bVar1) {
    fVar19 = ABS(fVar31 + -1.0);
    bVar1 = true;
    if ((fVar31 <= 1.0) && (bVar1 = false, !NAN(fVar19))) {
      bVar1 = fVar19 < 1.1920929e-07;
    }
    if (bVar1) {
      auVar22._8_8_ = in_register_00005068;
      auVar22._0_8_ = param_4;
      auVar20 = auVar22._0_12_;
    }
    else {
      bVar1 = false;
      if ((1.0 <= fVar41) && (bVar1 = false, !NAN(fVar19) && !NAN(fVar41 * 1.1920929e-07))) {
        bVar1 = fVar19 < fVar41 * 1.1920929e-07;
      }
      auVar24._8_8_ = in_register_00005068;
      auVar24._0_8_ = param_4;
      auVar20 = auVar24._0_12_;
      if (!bVar1) {
        auVar20._0_4_ = fVar9 + fVar15 * fVar31;
        auVar20._4_4_ = fVar18 + fVar16 * fVar31;
        auVar20._8_4_ = in_register_00005028 + fVar31 * fVar17;
      }
    }
    fVar19 = auVar20._0_4_ - fVar2;
    fVar41 = auVar20._4_4_ - fVar6;
    fVar9 = auVar20._8_4_ - in_register_00005008;
    auVar8._0_4_ = fVar19 * fVar19;
    auVar8._4_4_ = fVar41 * fVar41;
    auVar8._8_4_ = fVar9 * fVar9;
    auVar8._12_4_ = 0;
    auVar32 = NEON_ext(auVar8,auVar8,8,1);
    fVar19 = auVar32._0_4_ + auVar8._0_4_ + auVar8._4_4_;
  }
  fVar41 = fVar12 - fVar10;
  fVar9 = fVar13 - fVar11;
  fVar18 = fVar14 - in_register_00005048;
  if (fVar42 <= fVar19) {
    fVar19 = fVar42;
  }
  fVar16 = fVar10 - fVar2;
  fVar17 = fVar11 - fVar6;
  fVar27 = in_register_00005048 - in_register_00005008;
  auVar23._0_4_ = fVar16 * fVar41;
  auVar23._4_4_ = fVar17 * fVar9;
  auVar23._8_4_ = fVar27 * fVar18;
  auVar23._12_4_ = 0;
  auVar32 = NEON_ext(auVar23,auVar23,8,1);
  auVar28._0_4_ = fVar41 * fVar41;
  auVar28._4_4_ = fVar9 * fVar9;
  auVar28._8_4_ = fVar18 * fVar18;
  auVar28._12_4_ = 0;
  auVar21 = NEON_ext(auVar28,auVar28,8,1);
  fVar15 = -(auVar32._0_4_ + auVar23._0_4_ + auVar23._4_4_) /
           (auVar21._0_4_ + auVar28._0_4_ + auVar28._4_4_);
  fVar31 = ABS(fVar15);
  bVar1 = true;
  if ((0.0 <= fVar15) && (bVar1 = false, !NAN(fVar31))) {
    bVar1 = fVar31 < 1.1920929e-07;
  }
  if (bVar1) {
    auVar3._0_4_ = fVar16 * fVar16;
    auVar3._4_4_ = fVar17 * fVar17;
    auVar3._8_4_ = fVar27 * fVar27;
    goto LAB_109821a74;
  }
  fVar16 = ABS(fVar15 + -1.0);
  bVar1 = true;
  if ((fVar15 <= 1.0) && (bVar1 = false, !NAN(fVar16))) {
    bVar1 = fVar16 < 1.1920929e-07;
  }
  if (bVar1) {
LAB_109821a68:
    auVar4._0_4_ = fVar12 - fVar2;
    auVar4._4_4_ = fVar13 - fVar6;
    auVar4._8_4_ = fVar14 - in_register_00005008;
  }
  else {
    bVar1 = false;
    if ((1.0 <= fVar31) && (bVar1 = false, !NAN(fVar16) && !NAN(fVar31 * 1.1920929e-07))) {
      bVar1 = fVar16 < fVar31 * 1.1920929e-07;
    }
    if (bVar1) goto LAB_109821a68;
    auVar4._0_4_ = (fVar10 + fVar41 * fVar15) - fVar2;
    auVar4._4_4_ = (fVar11 + fVar9 * fVar15) - fVar6;
    auVar4._8_4_ = (in_register_00005048 + fVar15 * fVar18) - in_register_00005008;
  }
  auVar3._0_4_ = auVar4._0_4_ * auVar4._0_4_;
  auVar3._4_4_ = auVar4._4_4_ * auVar4._4_4_;
  auVar3._8_4_ = auVar4._8_4_ * auVar4._8_4_;
LAB_109821a74:
  auVar5._12_4_ = 0;
  auVar5._0_12_ = auVar3;
  auVar32 = NEON_ext(auVar5,auVar5,8,1);
  fVar41 = auVar32._0_4_ + auVar3._0_4_ + auVar3._4_4_;
  uVar7 = (ulong)(uint)fVar19;
  if (fVar41 < fVar19) {
    uVar7 = CONCAT44(auVar32._4_4_ + auVar3._0_4_ + auVar3._4_4_,fVar41);
  }
  return uVar7;
}



/* Entry: 109821b28; end: 109821ca3;  */

void FUN_109821b28(undefined8 param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4,
                  undefined8 *param_5,int param_6,undefined8 *param_7,undefined8 *param_8,
                  undefined8 *param_9)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined8 uVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float in_register_00005008;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auStack_90 [16];
  undefined1 auStack_80 [16];
  undefined8 uStack_70;
  undefined8 uStack_68;
  float fStack_60;
  float fStack_5c;
  float fStack_58;
  float fStack_54;
  
  fVar7 = (float)((ulong)param_1 >> 0x20);
  fVar5 = (float)param_1;
  fStack_60 = (float)*param_3 * fVar5 + *(float *)(param_3 + 2) * fVar7 +
              *(float *)(param_3 + 4) * in_register_00005008;
  fStack_5c = (float)((ulong)*param_3 >> 0x20) * fVar5 + *(float *)((long)param_3 + 0x14) * fVar7 +
              *(float *)((long)param_3 + 0x24) * in_register_00005008;
  fStack_58 = (float)param_3[1] * fVar5 + *(float *)(param_3 + 3) * fVar7 +
              *(float *)(param_3 + 5) * in_register_00005008;
  fStack_54 = fVar5 * 0.0 + fVar7 * 0.0 + in_register_00005008 * 0.0;
  fVar5 = -fVar5;
  fVar7 = -fVar7;
  fVar9 = -in_register_00005008;
  uStack_68 = CONCAT44(fVar5 * 0.0 + fVar7 * 0.0 + fVar9 * 0.0,
                       (float)param_5[1] * fVar5 + *(float *)(param_5 + 3) * fVar7 +
                       *(float *)(param_5 + 5) * fVar9);
  uStack_70 = CONCAT44((float)((ulong)*param_5 >> 0x20) * fVar5 +
                       *(float *)((long)param_5 + 0x14) * fVar7 +
                       *(float *)((long)param_5 + 0x24) * fVar9,
                       (float)*param_5 * fVar5 + *(float *)(param_5 + 2) * fVar7 +
                       *(float *)(param_5 + 4) * fVar9);
  FUN_109819648(auStack_80,param_2,&fStack_60);
  FUN_109819648(auStack_90,param_4,&uStack_70);
  fVar6 = (float)auStack_80._8_8_;
  fVar9 = (float)auStack_80._0_8_;
  fVar8 = SUB84(auStack_80._0_8_,4);
  fVar10 = fVar9 * (float)*param_3;
  fVar11 = fVar8 * (float)((ulong)*param_3 >> 0x20);
  fVar12 = fVar6 * (float)param_3[1];
  fVar13 = SUB84(auStack_80._8_8_,4) * (float)((ulong)param_3[1] >> 0x20);
  auVar14._0_4_ = fVar9 * *(float *)(param_3 + 2);
  auVar14._4_4_ = fVar8 * *(float *)((long)param_3 + 0x14);
  auVar14._8_4_ = fVar6 * *(float *)(param_3 + 3);
  auVar14._12_4_ = SUB84(auStack_80._8_8_,4) * *(float *)((long)param_3 + 0x1c);
  fVar5 = *(float *)(param_3 + 6);
  fVar7 = *(float *)((long)param_3 + 0x34);
  fVar9 = fVar9 * *(float *)(param_3 + 4);
  fVar8 = fVar8 * *(float *)((long)param_3 + 0x24);
  auVar20._4_4_ = fVar11;
  auVar20._0_4_ = fVar10;
  auVar20._8_4_ = fVar12;
  auVar20._12_4_ = fVar13;
  auVar1._4_4_ = fVar11;
  auVar1._0_4_ = fVar10;
  auVar1._8_4_ = fVar12;
  auVar1._12_4_ = fVar13;
  auVar16 = NEON_ext(auVar20,auVar1,8,1);
  auVar19 = NEON_ext(auVar14,auVar14,8,1);
  auVar15._4_4_ = fVar8;
  auVar15._0_4_ = fVar9;
  auVar15._8_4_ = fVar6 * *(float *)(param_3 + 5);
  auVar15._12_4_ = 0;
  auVar18._4_4_ = fVar8;
  auVar18._0_4_ = fVar9;
  auVar18._8_4_ = fVar6 * *(float *)(param_3 + 5);
  auVar18._12_4_ = 0;
  auVar15 = NEON_ext(auVar15,auVar18,8,1);
  fVar13 = (float)auStack_90._8_8_;
  fVar6 = (float)auStack_90._0_8_;
  fVar12 = SUB84(auStack_90._0_8_,4);
  param_7[1] = CONCAT44(*(float *)((long)param_3 + 0x3c) + 0.0,
                        fVar9 + fVar8 + auVar15._0_4_ + auVar15._4_4_ + *(float *)(param_3 + 7));
  *param_7 = CONCAT44(auVar14._0_4_ + auVar14._4_4_ + auVar19._0_4_ + fVar7,
                      fVar10 + fVar11 + auVar16._0_4_ + fVar5);
  fVar5 = fVar6 * (float)*param_5;
  fVar7 = fVar12 * (float)((ulong)*param_5 >> 0x20);
  fVar9 = fVar13 * (float)param_5[1];
  fVar8 = SUB84(auStack_90._8_8_,4) * (float)((ulong)param_5[1] >> 0x20);
  auVar17._0_4_ = fVar6 * *(float *)(param_5 + 2);
  auVar17._4_4_ = fVar12 * *(float *)((long)param_5 + 0x14);
  auVar17._8_4_ = fVar13 * *(float *)(param_5 + 3);
  auVar17._12_4_ = SUB84(auStack_90._8_8_,4) * *(float *)((long)param_5 + 0x1c);
  fVar6 = fVar6 * *(float *)(param_5 + 4);
  fVar12 = fVar12 * *(float *)((long)param_5 + 0x24);
  auVar2._4_4_ = fVar7;
  auVar2._0_4_ = fVar5;
  auVar2._8_4_ = fVar9;
  auVar2._12_4_ = fVar8;
  auVar3._4_4_ = fVar7;
  auVar3._0_4_ = fVar5;
  auVar3._8_4_ = fVar9;
  auVar3._12_4_ = fVar8;
  auVar18 = NEON_ext(auVar2,auVar3,8,1);
  auVar20 = NEON_ext(auVar17,auVar17,8,1);
  auVar16._4_4_ = fVar12;
  auVar16._0_4_ = fVar6;
  auVar16._8_4_ = fVar13 * *(float *)(param_5 + 5);
  auVar16._12_4_ = 0;
  auVar19._4_4_ = fVar12;
  auVar19._0_4_ = fVar6;
  auVar19._8_4_ = fVar13 * *(float *)(param_5 + 5);
  auVar19._12_4_ = 0;
  auVar15 = NEON_ext(auVar16,auVar19,8,1);
  fVar5 = fVar5 + fVar7 + auVar18._0_4_ + *(float *)(param_5 + 6);
  fVar7 = auVar17._0_4_ + auVar17._4_4_ + auVar20._0_4_ + *(float *)((long)param_5 + 0x34);
  fVar9 = fVar6 + fVar12 + auVar15._0_4_ + auVar15._4_4_ + *(float *)(param_5 + 7);
  param_8[1] = CONCAT44(*(float *)((long)param_5 + 0x3c) + 0.0,fVar9);
  *param_8 = CONCAT44(fVar7,fVar5);
  if (param_6 != 0) {
    *(undefined4 *)(param_7 + 1) = 0;
    *(undefined4 *)(param_8 + 1) = 0;
    fVar9 = (float)param_8[1];
    fVar5 = (float)*param_8;
    fVar7 = (float)((ulong)*param_8 >> 0x20);
  }
  uVar4 = *param_7;
  param_9[1] = (ulong)(uint)((float)param_7[1] - fVar9);
  *param_9 = CONCAT44((float)((ulong)uVar4 >> 0x20) - fVar7,(float)uVar4 - fVar5);
  return;
}



/* Entry: 109821ca4; end: 109821cab;  */

void FUN_109821ca4(void)

{
  return;
}



/* Entry: 109821cac; end: 109822343;  */

void FUN_109821cac(undefined8 param_1,undefined8 param_2,long *param_3,long *param_4,float *param_5,
                  float *param_6,undefined8 *param_7,undefined8 *param_8,undefined8 *param_9,
                  undefined8 param_10)

{
  long lVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  undefined1 auVar5 [16];
  bool bVar6;
  char cVar7;
  int iVar8;
  long *plVar9;
  long lVar10;
  float *pfVar11;
  ulong uVar12;
  float *pfVar13;
  float *pfVar14;
  float fVar15;
  float fVar16;
  undefined1 auVar17 [16];
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar25;
  float fVar26;
  float fVar27;
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  float fStack_1160;
  float fStack_115c;
  float fStack_1158;
  float fStack_1154;
  undefined **appuStack_1150 [6];
  float fStack_1120;
  char cStack_111c;
  undefined8 uStack_1110;
  undefined8 uStack_1108;
  undefined8 uStack_1100;
  undefined8 uStack_10f8;
  undefined8 uStack_10f0;
  undefined8 uStack_10e8;
  float fStack_10e0;
  float fStack_10dc;
  float fStack_10d8;
  float fStack_10d4;
  undefined8 uStack_10d0;
  undefined8 uStack_10c8;
  undefined8 uStack_10c0;
  undefined8 uStack_10b8;
  undefined8 uStack_10b0;
  undefined8 uStack_10a8;
  undefined8 uStack_10a0;
  undefined8 uStack_1098;
  undefined4 uStack_1090;
  undefined **appuStack_1080 [2];
  ulong uStack_1070;
  undefined8 uStack_1068;
  undefined8 uStack_1060;
  undefined8 uStack_1058;
  long *plStack_1050;
  long *plStack_1048;
  undefined4 uStack_1040;
  undefined4 uStack_103c;
  undefined4 uStack_1038;
  undefined4 uStack_1034;
  undefined1 uStack_1030;
  undefined4 uStack_1028;
  undefined8 uStack_101c;
  float afStack_1010 [248];
  float afStack_c30 [248];
  float afStack_850 [248];
  undefined8 uStack_470;
  undefined8 uStack_468;
  long lStack_90;
  
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lStack_90 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if ((int)param_3[1] - 0x11U < 2) {
    bVar6 = (int)param_4[1] - 0x11U < 2;
  }
  else {
    bVar6 = false;
  }
  lVar10 = 0;
  do {
    FUN_109822344();
    fVar20 = *(float *)(lVar10 + 0x1137361b0);
    fVar15 = *(float *)(lVar10 + 0x1137361b4);
    fVar16 = *(float *)(lVar10 + 0x1137361b8);
    fVar18 = -fVar20;
    fVar25 = -fVar15;
    fVar27 = -fVar16;
    fVar2 = *param_5;
    fVar19 = param_5[1];
    fVar26 = param_5[4];
    fVar3 = param_5[5];
    auVar33 = *(undefined1 (*) [16])(param_5 + 8);
    *(float *)((long)afStack_c30 + lVar10 + 8) =
         param_5[2] * fVar18 + param_5[6] * fVar25 + auVar33._8_4_ * fVar27;
    *(float *)((long)afStack_c30 + lVar10 + 0xc) = fVar18 * 0.0 + fVar25 * 0.0 + fVar27 * 0.0;
    *(float *)((long)afStack_c30 + lVar10) =
         fVar2 * fVar18 + fVar26 * fVar25 + auVar33._0_4_ * fVar27;
    *(float *)((long)afStack_c30 + lVar10 + 4) =
         fVar19 * fVar18 + fVar3 * fVar25 + auVar33._4_4_ * fVar27;
    fVar2 = *param_6;
    fVar19 = param_6[1];
    fVar26 = param_6[4];
    fVar3 = param_6[5];
    fVar18 = param_6[8];
    fVar25 = param_6[9];
    *(float *)((long)afStack_1010 + lVar10 + 8) =
         param_6[2] * fVar20 + param_6[6] * fVar15 + param_6[10] * fVar16;
    *(float *)((long)afStack_1010 + lVar10 + 0xc) = fVar20 * 0.0 + fVar15 * 0.0 + fVar16 * 0.0;
    *(float *)((long)afStack_1010 + lVar10) = fVar2 * fVar20 + fVar26 * fVar15 + fVar18 * fVar16;
    *(float *)((long)afStack_1010 + lVar10 + 4) = fVar19 * fVar20 + fVar3 * fVar15 + fVar25 * fVar16
    ;
    lVar10 = lVar10 + 0x10;
  } while (lVar10 != 0x2a0);
  plVar9 = param_3;
  (**(code **)(*param_3 + 0xa8))();
  if ((int)plVar9 < 1) {
    uVar12 = 0x2a;
  }
  else {
    lVar10 = 0;
    do {
      (**(code **)(*param_3 + 0xb0))(param_3,lVar10,&uStack_470);
      auVar28._0_4_ = *param_5 * (float)uStack_470;
      auVar28._4_4_ = param_5[1] * uStack_470._4_4_;
      auVar28._8_4_ = param_5[2] * (float)uStack_468;
      auVar28._12_4_ = param_5[3] * uStack_468._4_4_;
      auVar40._0_4_ = (float)uStack_470 * param_5[4];
      auVar40._4_4_ = uStack_470._4_4_ * param_5[5];
      auVar40._8_4_ = (float)uStack_468 * param_5[6];
      auVar40._12_4_ = uStack_468._4_4_ * param_5[7];
      auVar33._0_4_ = (float)uStack_470 * param_5[8];
      auVar33._4_4_ = uStack_470._4_4_ * param_5[9];
      auVar33._8_4_ = (float)uStack_468 * param_5[10];
      auVar32 = NEON_ext(auVar28,auVar28,8,1);
      auVar36 = NEON_ext(auVar40,auVar40,8,1);
      auVar33._12_4_ = 0;
      uStack_470 = CONCAT44(auVar40._0_4_ + auVar40._4_4_ + auVar36._0_4_,
                            auVar28._0_4_ + auVar28._4_4_ + auVar32._0_4_);
      auVar28 = NEON_ext(auVar33,auVar33,8,1);
      uStack_468 = (ulong)(uint)(auVar33._0_4_ + auVar33._4_4_ + auVar28._0_4_ + auVar28._4_4_);
      FUN_109822344();
      lVar1 = lVar10 * 0x10;
      fVar3 = (float)uStack_470;
      fVar18 = uStack_470._4_4_;
      fVar25 = (float)uStack_468;
      *(float *)(lVar1 + 0x113736458) = (float)uStack_468;
      *(float *)(lVar1 + 0x11373645c) = uStack_468._4_4_;
      *(float *)(lVar1 + 0x113736450) = (float)uStack_470;
      *(float *)(lVar1 + 0x113736454) = uStack_470._4_4_;
      fVar19 = -(float)uStack_470;
      fVar26 = -uStack_470._4_4_;
      fVar27 = -(float)uStack_468;
      fVar20 = *param_5;
      fVar15 = param_5[1];
      fVar16 = param_5[4];
      fVar2 = param_5[5];
      auVar33 = *(undefined1 (*) [16])(param_5 + 8);
      afStack_c30[lVar10 * 4 + 0xaa] =
           param_5[2] * fVar19 + param_5[6] * fVar26 + auVar33._8_4_ * fVar27;
      afStack_c30[lVar10 * 4 + 0xab] = fVar19 * 0.0 + fVar26 * 0.0 + fVar27 * 0.0;
      afStack_c30[lVar10 * 4 + 0xa8] = fVar20 * fVar19 + fVar16 * fVar26 + auVar33._0_4_ * fVar27;
      afStack_c30[lVar10 * 4 + 0xa9] = fVar15 * fVar19 + fVar2 * fVar26 + auVar33._4_4_ * fVar27;
      fVar20 = *param_6;
      fVar15 = param_6[1];
      fVar16 = param_6[4];
      fVar2 = param_6[5];
      fVar19 = param_6[8];
      fVar26 = param_6[9];
      afStack_1010[lVar10 * 4 + 0xaa] =
           param_6[2] * fVar3 + param_6[6] * fVar18 + param_6[10] * fVar25;
      afStack_1010[lVar10 * 4 + 0xab] = fVar3 * 0.0 + fVar18 * 0.0 + fVar25 * 0.0;
      afStack_1010[lVar10 * 4 + 0xa8] = fVar20 * fVar3 + fVar16 * fVar18 + fVar19 * fVar25;
      afStack_1010[lVar10 * 4 + 0xa9] = fVar15 * fVar3 + fVar2 * fVar18 + fVar26 * fVar25;
      lVar10 = lVar10 + 1;
    } while ((int)plVar9 != (int)lVar10);
    uVar12 = (ulong)((int)lVar10 + 0x2a);
  }
  plVar9 = param_4;
  (**(code **)(*param_4 + 0xa8))();
  if (0 < (int)plVar9) {
    iVar8 = 0;
    do {
      (**(code **)(*param_4 + 0xb0))(param_4,iVar8,&uStack_470);
      auVar36._0_4_ = *param_6 * (float)uStack_470;
      auVar36._4_4_ = param_6[1] * uStack_470._4_4_;
      auVar36._8_4_ = param_6[2] * (float)uStack_468;
      auVar36._12_4_ = param_6[3] * uStack_468._4_4_;
      auVar42._0_4_ = (float)uStack_470 * param_6[4];
      auVar42._4_4_ = uStack_470._4_4_ * param_6[5];
      auVar42._8_4_ = (float)uStack_468 * param_6[6];
      auVar42._12_4_ = uStack_468._4_4_ * param_6[7];
      auVar32._0_4_ = (float)uStack_470 * param_6[8];
      auVar32._4_4_ = uStack_470._4_4_ * param_6[9];
      auVar32._8_4_ = (float)uStack_468 * param_6[10];
      auVar33 = NEON_ext(auVar36,auVar36,8,1);
      auVar28 = NEON_ext(auVar42,auVar42,8,1);
      auVar32._12_4_ = 0;
      uStack_470 = CONCAT44(auVar42._0_4_ + auVar42._4_4_ + auVar28._0_4_,
                            auVar36._0_4_ + auVar36._4_4_ + auVar33._0_4_);
      auVar33 = NEON_ext(auVar32,auVar32,8,1);
      uStack_468 = (ulong)(uint)(auVar32._0_4_ + auVar32._4_4_ + auVar33._0_4_ + auVar33._4_4_);
      FUN_109822344();
      lVar10 = uVar12 * 0x10;
      fVar3 = (float)uStack_470;
      fVar18 = uStack_470._4_4_;
      fVar25 = (float)uStack_468;
      *(float *)(lVar10 + 0x1137361b8) = (float)uStack_468;
      *(float *)(lVar10 + 0x1137361bc) = uStack_468._4_4_;
      *(float *)(lVar10 + 0x1137361b0) = (float)uStack_470;
      *(float *)(lVar10 + 0x1137361b4) = uStack_470._4_4_;
      fVar20 = *param_5;
      fVar15 = param_5[1];
      fVar16 = param_5[4];
      fVar2 = param_5[5];
      fVar19 = -(float)uStack_470;
      fVar26 = -uStack_470._4_4_;
      fVar27 = -(float)uStack_468;
      auVar33 = *(undefined1 (*) [16])(param_5 + 8);
      afStack_c30[uVar12 * 4 + 2] =
           param_5[2] * fVar19 + param_5[6] * fVar26 + auVar33._8_4_ * fVar27;
      afStack_c30[uVar12 * 4 + 3] = fVar19 * 0.0 + fVar26 * 0.0 + fVar27 * 0.0;
      afStack_c30[uVar12 * 4] = fVar20 * fVar19 + fVar16 * fVar26 + auVar33._0_4_ * fVar27;
      afStack_c30[uVar12 * 4 + 1] = fVar15 * fVar19 + fVar2 * fVar26 + auVar33._4_4_ * fVar27;
      fVar20 = *param_6;
      fVar15 = param_6[1];
      fVar16 = param_6[4];
      fVar2 = param_6[5];
      fVar19 = param_6[8];
      fVar26 = param_6[9];
      afStack_1010[uVar12 * 4 + 2] = param_6[2] * fVar3 + param_6[6] * fVar18 + param_6[10] * fVar25
      ;
      afStack_1010[uVar12 * 4 + 3] = fVar3 * 0.0 + fVar18 * 0.0 + fVar25 * 0.0;
      afStack_1010[uVar12 * 4] = fVar20 * fVar3 + fVar16 * fVar18 + fVar19 * fVar25;
      afStack_1010[uVar12 * 4 + 1] = fVar15 * fVar3 + fVar2 * fVar18 + fVar26 * fVar25;
      uVar12 = uVar12 + 1;
      iVar8 = iVar8 + 1;
    } while ((int)plVar9 != iVar8);
  }
  (**(code **)(*param_3 + 0x98))(param_3,afStack_c30,&uStack_470,uVar12);
  (**(code **)(*param_4 + 0x98))(param_4,afStack_1010,afStack_850,uVar12);
  if ((int)uVar12 < 1) {
    fStack_1158 = 0.0;
    fStack_1154 = 0.0;
    fStack_1160 = 0.0;
    fStack_115c = 0.0;
    fVar20 = 1e+18;
  }
  else {
    uVar12 = uVar12 & 0xffffffff;
    fStack_1158 = 0.0;
    fStack_1154 = 0.0;
    fStack_1160 = 0.0;
    fStack_115c = 0.0;
    pfVar11 = afStack_850;
    pfVar13 = (float *)&uStack_470;
    fVar20 = 1e+18;
    pfVar14 = (float *)0x1137361b0;
    do {
      FUN_109822344();
      fVar15 = *pfVar14;
      fVar16 = pfVar14[1];
      fVar2 = pfVar14[3];
      fVar19 = (float)((uint)pfVar14[2] ^ (uint)pfVar14[2] & -(uint)bVar6);
      auVar21._0_4_ = fVar15 * fVar15;
      auVar21._4_4_ = fVar16 * fVar16;
      auVar21._8_4_ = fVar19 * fVar19;
      auVar21._12_4_ = fVar2 * fVar2;
      auVar33 = NEON_ext(auVar21,auVar21,8,1);
      if (0.01 < auVar21._0_4_ + auVar21._4_4_ + auVar33._0_4_) {
        fVar26 = *pfVar13;
        fVar3 = pfVar13[1];
        fVar18 = pfVar13[2];
        fVar25 = *pfVar11;
        fVar27 = pfVar11[1];
        fVar4 = pfVar11[2];
        auVar34._0_4_ = fVar26 * *param_5;
        auVar34._4_4_ = fVar3 * param_5[1];
        auVar34._8_4_ = fVar18 * param_5[2];
        auVar34._12_4_ = pfVar13[3] * param_5[3];
        auVar37._0_4_ = fVar26 * param_5[4];
        auVar37._4_4_ = fVar3 * param_5[5];
        auVar37._8_4_ = fVar18 * param_5[6];
        auVar37._12_4_ = pfVar13[3] * param_5[7];
        auVar29._0_4_ = fVar26 * param_5[8];
        auVar29._4_4_ = fVar3 * param_5[9];
        auVar29._8_4_ = fVar18 * param_5[10];
        auVar40 = NEON_ext(auVar34,auVar34,8,1);
        auVar36 = NEON_ext(auVar37,auVar37,8,1);
        auVar29._12_4_ = 0;
        auVar33 = NEON_ext(auVar29,auVar29,8,1);
        auVar30._0_4_ = fVar25 * *param_6;
        auVar30._4_4_ = fVar27 * param_6[1];
        auVar30._8_4_ = fVar4 * param_6[2];
        auVar30._12_4_ = pfVar11[3] * param_6[3];
        auVar38._0_4_ = fVar25 * param_6[4];
        auVar38._4_4_ = fVar27 * param_6[5];
        auVar38._8_4_ = fVar4 * param_6[6];
        auVar38._12_4_ = pfVar11[3] * param_6[7];
        auVar22._0_4_ = fVar25 * param_6[8];
        auVar22._4_4_ = fVar27 * param_6[9];
        auVar22._8_4_ = fVar4 * param_6[10];
        auVar32 = NEON_ext(auVar30,auVar30,8,1);
        auVar42 = NEON_ext(auVar38,auVar38,8,1);
        auVar22._12_4_ = 0;
        auVar28 = NEON_ext(auVar22,auVar22,8,1);
        auVar23._0_8_ =
             CONCAT44(auVar37._0_4_ + auVar37._4_4_ + auVar36._0_4_ +
                      (float)((ulong)*(undefined8 *)(param_5 + 0xc) >> 0x20),
                      auVar34._0_4_ + auVar34._4_4_ + auVar40._0_4_ +
                      (float)*(undefined8 *)(param_5 + 0xc));
        auVar23._8_4_ =
             auVar29._0_4_ + auVar29._4_4_ + auVar33._0_4_ + auVar33._4_4_ +
             (float)*(undefined8 *)(param_5 + 0xe);
        auVar23._12_4_ = (float)((ulong)*(undefined8 *)(param_5 + 0xe) >> 0x20) + 0.0;
        auVar31._0_8_ =
             CONCAT44(auVar38._0_4_ + auVar38._4_4_ + auVar42._0_4_ + param_6[0xd],
                      auVar30._0_4_ + auVar30._4_4_ + auVar32._0_4_ + param_6[0xc]);
        auVar31._8_4_ = auVar22._0_4_ + auVar22._4_4_ + auVar28._0_4_ + auVar28._4_4_ + param_6[0xe]
        ;
        auVar31._12_4_ = param_6[0xf] + 0.0;
        auVar35._8_4_ = 0;
        auVar35._0_8_ = auVar23._0_8_;
        auVar35._12_4_ = auVar23._12_4_;
        auVar39._8_4_ = 0;
        auVar39._0_8_ = auVar31._0_8_;
        auVar39._12_4_ = auVar31._12_4_;
        iVar8 = -(uint)bVar6;
        auVar41._4_4_ = iVar8;
        auVar41._0_4_ = iVar8;
        auVar41._8_4_ = iVar8;
        auVar41._12_4_ = iVar8;
        auVar31 = auVar31 ^ (auVar31 ^ auVar39) & auVar41;
        auVar23 = auVar23 ^ (auVar23 ^ auVar35) & auVar41;
        auVar24._0_4_ = fVar15 * (auVar31._0_4_ - auVar23._0_4_);
        auVar24._4_4_ = fVar16 * (auVar31._4_4_ - auVar23._4_4_);
        auVar24._8_4_ = fVar19 * (auVar31._8_4_ - auVar23._8_4_);
        auVar24._12_4_ = fVar2 * 0.0;
        auVar33 = NEON_ext(auVar24,auVar24,8,1);
        fVar26 = auVar24._0_4_ + auVar24._4_4_ + auVar33._0_4_;
        if (fVar26 < fVar20) {
          fStack_1160 = fVar15;
          fStack_115c = fVar16;
          fStack_1158 = fVar19;
          fStack_1154 = fVar2;
          fVar20 = fVar26;
        }
      }
      pfVar11 = pfVar11 + 4;
      pfVar13 = pfVar13 + 4;
      uVar12 = uVar12 - 1;
      pfVar14 = pfVar14 + 4;
    } while (uVar12 != 0);
  }
  FUN_109819af8(param_3);
  FUN_109819af8(param_4);
  if (0.0 <= fVar20) {
    fVar15 = (float)FUN_109819af8(param_3);
    fVar16 = (float)FUN_109819af8(param_4);
    appuStack_1080[0] = &PTR_FUN_110b14198;
    uStack_1060 = 0;
    uStack_1040 = (undefined4)param_3[1];
    uStack_103c = (undefined4)param_4[1];
    uStack_1058 = param_2;
    plStack_1050 = param_3;
    plStack_1048 = param_4;
    uStack_1038 = (**(code **)(*param_3 + 0x60))(param_3);
    uStack_1034 = (**(code **)(*param_4 + 0x60))(param_4);
    fVar20 = fVar20 + fVar15 + fVar16 + 0.5;
    uStack_1030 = 0;
    uStack_1028 = 0xffffffff;
    uStack_101c = 0x100000001;
    uStack_10f0 = *(undefined8 *)(param_5 + 8);
    uStack_10e8 = *(undefined8 *)(param_5 + 10);
    fStack_10e0 = param_5[0xc] + fStack_1160 * fVar20;
    fStack_10dc = param_5[0xd] + fStack_115c * fVar20;
    fStack_10d8 = param_5[0xe] + fStack_1158 * fVar20;
    fStack_10d4 = param_5[0xf] + 0.0;
    uStack_1110 = *(undefined8 *)param_5;
    uStack_1108 = *(undefined8 *)(param_5 + 2);
    uStack_1100 = *(undefined8 *)(param_5 + 4);
    uStack_10f8 = *(undefined8 *)(param_5 + 6);
    uStack_10d0 = *(undefined8 *)param_6;
    uStack_10c8 = *(undefined8 *)(param_6 + 2);
    uStack_10c0 = *(undefined8 *)(param_6 + 4);
    uStack_10b8 = *(undefined8 *)(param_6 + 6);
    uStack_10b0 = *(undefined8 *)(param_6 + 8);
    uStack_10a8 = *(undefined8 *)(param_6 + 10);
    uStack_10a0 = *(undefined8 *)(param_6 + 0xc);
    uStack_1098 = *(undefined8 *)(param_6 + 0xe);
    uStack_1090 = 0x5d5e0b6b;
    appuStack_1150[0] = &PTR_FUN_110b14218;
    cStack_111c = '\0';
    auVar17._0_8_ = CONCAT44(fStack_115c,fStack_1160) ^ 0x8000000080000000;
    auVar17[8] = SUB41(fStack_1158,0);
    auVar17[9] = (char)((uint)fStack_1158 >> 8);
    auVar17[10] = (char)((uint)fStack_1158 >> 0x10);
    auVar17[0xb] = (byte)((uint)fStack_1158 >> 0x18) ^ 0x80;
    auVar17[0xc] = SUB41(fStack_1154,0);
    auVar17[0xd] = (char)((uint)fStack_1154 >> 8);
    auVar17[0xe] = (char)((uint)fStack_1154 >> 0x10);
    auVar17[0xf] = (byte)((uint)fStack_1154 >> 0x18) ^ 0x80;
    uStack_1068 = auVar17._8_8_;
    uStack_1070 = auVar17._0_8_;
    FUN_109820310(appuStack_1080,&uStack_1110,appuStack_1150,param_10);
    cVar7 = cStack_111c;
    if (cStack_111c == '\x01') {
      auVar5._8_4_ = fStack_1158;
      auVar5._0_8_ = CONCAT44(fStack_115c,fStack_1160);
      auVar5._12_4_ = fStack_1154;
      fVar20 = fVar20 - fStack_1120;
      param_8[1] = (ulong)(uint)(appuStack_1150[5]._0_4_ - fStack_1158 * fVar20);
      *param_8 = CONCAT44(appuStack_1150[4]._4_4_ - fStack_115c * fVar20,
                          appuStack_1150[4]._0_4_ - fStack_1160 * fVar20);
      param_9[1] = appuStack_1150[5];
      *param_9 = appuStack_1150[4];
      param_7[1] = auVar5._8_8_;
      *param_7 = CONCAT44(fStack_115c,fStack_1160);
    }
  }
  else {
    cVar7 = '\0';
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_90) {
    return;
  }
  ___stack_chk_fail(cVar7);
  __Unwind_Resume();
  if ((bRam00000001137361a0 & 1) == 0) {
    iVar8 = 0x137361a0;
    ___cxa_guard_acquire();
    if (iVar8 != 0) {
      uRam00000001137361b8 = 0xbf800000;
      uRam00000001137361b0 = 0x8000000000000000;
      uRam00000001137361c8 = 0xbee4f9e4;
      uRam00000001137361c0 = 0xbf0695ea3f393e60;
      uRam00000001137361d8 = 0xbee4f9e4;
      uRam00000001137361d0 = 0xbf59c422be8d82ba;
      uRam00000001137361e8 = 0xbee4f97f;
      uRam00000001137361e0 = 0x80000000bf64f91a;
      uRam00000001137361f8 = 0xbee4fa05;
      uRam00000001137361f0 = 0x3f59c422be8d82ba;
      uRam0000000113736208 = 0xbee4f9e4;
      uRam0000000113736200 = 0x3f0695ea3f393e60;
      uRam0000000113736218 = 0x3ee4fa05;
      uRam0000000113736210 = 0xbf59c4223e8d82ba;
      uRam0000000113736228 = 0x3ee4f9e4;
      uRam0000000113736220 = 0xbf0695eabf393e60;
      uRam0000000113736238 = 0x3ee4f9e4;
      uRam0000000113736230 = 0x3f0695eabf393e60;
      uRam0000000113736248 = 0x3ee4f9e4;
      uRam0000000113736240 = 0x3f59c4223e8d82ba;
      uRam0000000113736258 = 0x3ee4f97f;
      uRam0000000113736250 = 0x3f64f91a;
      uRam0000000113736268 = 0x3f800000;
      uRam0000000113736260 = 0x80000000;
      uRam0000000113736278 = 0xbf59c476;
      uRam0000000113736270 = 0xbe9e36b13ed9c3f0;
      uRam0000000113736288 = 0xbf59c476;
      uRam0000000113736280 = 0xbeffff58be265ade;
      uRam0000000113736298 = 0xbf0696c4;
      uRam0000000113736290 = 0xbf4f1b693e8696c4;
      uRam00000001137362a8 = 0xbf59c476;
      uRam00000001137362a0 = 0x3e9e36b13ed9c3f0;
      uRam00000001137362b8 = 0xbf0696a2;
      uRam00000001137362b0 = 0x800000003f59c411;
      uRam00000001137362c8 = 0xbf59c454;
      uRam00000001137362c0 = 0x80000000bf06963e;
      uRam00000001137362d8 = 0xbf0696a2;
      uRam00000001137362d0 = 0xbeffff9bbf302d38;
      uRam00000001137362e8 = 0xbf59c476;
      uRam00000001137362e0 = 0x3effff58be265ade;
      uRam00000001137362f8 = 0xbf0696a2;
      uRam00000001137362f0 = 0x3effff9bbf302d38;
      uRam0000000113736308 = 0xbf0696c4;
      uRam0000000113736300 = 0x3f4f1b693e8696c4;
      uRam0000000113736318 = 0;
      uRam0000000113736310 = 0x3e9e36f43f737889;
      uRam0000000113736328 = 0;
      uRam0000000113736320 = 0xbe9e36f43f737889;
      uRam0000000113736338 = 0;
      uRam0000000113736330 = 0xbf4f1bbd3f167925;
      uRam0000000113736348 = 0;
      uRam0000000113736340 = 0xbf80000000000000;
      uRam0000000113736358 = 0;
      uRam0000000113736350 = 0xbf4f1bbdbf167925;
      uRam0000000113736368 = 0x80000000;
      uRam0000000113736360 = 0xbe9e36f4bf737889;
      uRam0000000113736378 = 0x80000000;
      uRam0000000113736370 = 0x3e9e36f4bf737889;
      uRam0000000113736388 = 0x80000000;
      uRam0000000113736380 = 0x3f4f1bbdbf167925;
      uRam0000000113736398 = 0x80000000;
      uRam0000000113736390 = 0x3f80000080000000;
      uRam00000001137363a8 = 0x80000000;
      uRam00000001137363a0 = 0x3f4f1bbd3f167925;
      uRam00000001137363b8 = 0x3f0696a2;
      uRam00000001137363b0 = 0xbeffff9b3f302d38;
      uRam00000001137363c8 = 0x3f0696c4;
      uRam00000001137363c0 = 0xbf4f1b69be8696c4;
      uRam00000001137363d8 = 0x3f0696a2;
      uRam00000001137363d0 = 0xbf59c411;
      uRam00000001137363e8 = 0x3f0696c4;
      uRam00000001137363e0 = 0x3f4f1b69be8696c4;
      uRam00000001137363f8 = 0x3f0696a2;
      uRam00000001137363f0 = 0x3effff9b3f302d38;
      uRam0000000113736408 = 0x3f59c454;
      uRam0000000113736400 = 0x3f06963e;
      uRam0000000113736418 = 0x3f59c476;
      uRam0000000113736410 = 0xbeffff583e265ade;
      uRam0000000113736428 = 0x3f59c476;
      uRam0000000113736420 = 0xbe9e36b1bed9c3f0;
      uRam0000000113736438 = 0x3f59c476;
      uRam0000000113736430 = 0x3e9e36b1bed9c3f0;
      uRam0000000113736448 = 0x3f59c476;
      uRam0000000113736440 = 0x3effff583e265ade;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd8c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR____cxa_guard_release_110346be8)(0x1137361a0);
      return;
    }
  }
  return;
}



/* Entry: 109822344; end: 109822533;  */

void FUN_109822344(void)

{
  int iVar1;
  
  if ((bRam00000001137361a0 & 1) == 0) {
    iVar1 = 0x137361a0;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      uRam00000001137361b8 = 0xbf800000;
      uRam00000001137361b0 = 0x8000000000000000;
      uRam00000001137361c8 = 0xbee4f9e4;
      uRam00000001137361c0 = 0xbf0695ea3f393e60;
      uRam00000001137361d8 = 0xbee4f9e4;
      uRam00000001137361d0 = 0xbf59c422be8d82ba;
      uRam00000001137361e8 = 0xbee4f97f;
      uRam00000001137361e0 = 0x80000000bf64f91a;
      uRam00000001137361f8 = 0xbee4fa05;
      uRam00000001137361f0 = 0x3f59c422be8d82ba;
      uRam0000000113736208 = 0xbee4f9e4;
      uRam0000000113736200 = 0x3f0695ea3f393e60;
      uRam0000000113736218 = 0x3ee4fa05;
      uRam0000000113736210 = 0xbf59c4223e8d82ba;
      uRam0000000113736228 = 0x3ee4f9e4;
      uRam0000000113736220 = 0xbf0695eabf393e60;
      uRam0000000113736238 = 0x3ee4f9e4;
      uRam0000000113736230 = 0x3f0695eabf393e60;
      uRam0000000113736248 = 0x3ee4f9e4;
      uRam0000000113736240 = 0x3f59c4223e8d82ba;
      uRam0000000113736258 = 0x3ee4f97f;
      uRam0000000113736250 = 0x3f64f91a;
      uRam0000000113736268 = 0x3f800000;
      uRam0000000113736260 = 0x80000000;
      uRam0000000113736278 = 0xbf59c476;
      uRam0000000113736270 = 0xbe9e36b13ed9c3f0;
      uRam0000000113736288 = 0xbf59c476;
      uRam0000000113736280 = 0xbeffff58be265ade;
      uRam0000000113736298 = 0xbf0696c4;
      uRam0000000113736290 = 0xbf4f1b693e8696c4;
      uRam00000001137362a8 = 0xbf59c476;
      uRam00000001137362a0 = 0x3e9e36b13ed9c3f0;
      uRam00000001137362b8 = 0xbf0696a2;
      uRam00000001137362b0 = 0x800000003f59c411;
      uRam00000001137362c8 = 0xbf59c454;
      uRam00000001137362c0 = 0x80000000bf06963e;
      uRam00000001137362d8 = 0xbf0696a2;
      uRam00000001137362d0 = 0xbeffff9bbf302d38;
      uRam00000001137362e8 = 0xbf59c476;
      uRam00000001137362e0 = 0x3effff58be265ade;
      uRam00000001137362f8 = 0xbf0696a2;
      uRam00000001137362f0 = 0x3effff9bbf302d38;
      uRam0000000113736308 = 0xbf0696c4;
      uRam0000000113736300 = 0x3f4f1b693e8696c4;
      uRam0000000113736318 = 0;
      uRam0000000113736310 = 0x3e9e36f43f737889;
      uRam0000000113736328 = 0;
      uRam0000000113736320 = 0xbe9e36f43f737889;
      uRam0000000113736338 = 0;
      uRam0000000113736330 = 0xbf4f1bbd3f167925;
      uRam0000000113736348 = 0;
      uRam0000000113736340 = 0xbf80000000000000;
      uRam0000000113736358 = 0;
      uRam0000000113736350 = 0xbf4f1bbdbf167925;
      uRam0000000113736368 = 0x80000000;
      uRam0000000113736360 = 0xbe9e36f4bf737889;
      uRam0000000113736378 = 0x80000000;
      uRam0000000113736370 = 0x3e9e36f4bf737889;
      uRam0000000113736388 = 0x80000000;
      uRam0000000113736380 = 0x3f4f1bbdbf167925;
      uRam0000000113736398 = 0x80000000;
      uRam0000000113736390 = 0x3f80000080000000;
      uRam00000001137363a8 = 0x80000000;
      uRam00000001137363a0 = 0x3f4f1bbd3f167925;
      uRam00000001137363b8 = 0x3f0696a2;
      uRam00000001137363b0 = 0xbeffff9b3f302d38;
      uRam00000001137363c8 = 0x3f0696c4;
      uRam00000001137363c0 = 0xbf4f1b69be8696c4;
      uRam00000001137363d8 = 0x3f0696a2;
      uRam00000001137363d0 = 0xbf59c411;
      uRam00000001137363e8 = 0x3f0696c4;
      uRam00000001137363e0 = 0x3f4f1b69be8696c4;
      uRam00000001137363f8 = 0x3f0696a2;
      uRam00000001137363f0 = 0x3effff9b3f302d38;
      uRam0000000113736408 = 0x3f59c454;
      uRam0000000113736400 = 0x3f06963e;
      uRam0000000113736418 = 0x3f59c476;
      uRam0000000113736410 = 0xbeffff583e265ade;
      uRam0000000113736428 = 0x3f59c476;
      uRam0000000113736420 = 0xbe9e36b1bed9c3f0;
      uRam0000000113736438 = 0x3f59c476;
      uRam0000000113736430 = 0x3e9e36b1bed9c3f0;
      uRam0000000113736448 = 0x3f59c476;
      uRam0000000113736440 = 0x3effff583e265ade;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd8c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR____cxa_guard_release_110346be8)(0x1137361a0);
      return;
    }
  }
  return;
}



/* Entry: 109822534; end: 109822763;  */

void FUN_109822534(void)

{
  return;
}



/* Entry: 109822764; end: 10982280b;  */

void FUN_109822764(long param_1,undefined8 *param_2)

{
  uint uVar1;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long lVar2;
  
  uVar1 = *(uint *)(param_1 + 0x360);
  if (uVar1 == 4) {
    lVar2 = param_1;
    func_0x00010982256c(param_1,param_2);
    uVar1 = (uint)lVar2;
  }
  else {
    *(uint *)(param_1 + 0x360) = uVar1 + 1;
  }
  param_1 = param_1 + (ulong)(uVar1 & ((int)uVar1 >> 0x1f ^ 0xffffffffU)) * 0xd0;
  uVar3 = *param_2;
  *(undefined8 *)(param_1 + 0x18) = param_2[1];
  *(undefined8 *)(param_1 + 0x10) = uVar3;
  uVar3 = param_2[2];
  *(undefined8 *)(param_1 + 0x28) = param_2[3];
  *(undefined8 *)(param_1 + 0x20) = uVar3;
  uVar3 = param_2[4];
  *(undefined8 *)(param_1 + 0x38) = param_2[5];
  *(undefined8 *)(param_1 + 0x30) = uVar3;
  uVar3 = param_2[6];
  *(undefined8 *)(param_1 + 0x48) = param_2[7];
  *(undefined8 *)(param_1 + 0x40) = uVar3;
  uVar3 = param_2[8];
  *(undefined8 *)(param_1 + 0x58) = param_2[9];
  *(undefined8 *)(param_1 + 0x50) = uVar3;
  uVar3 = param_2[10];
  uVar5 = param_2[0xd];
  uVar4 = param_2[0xc];
  *(undefined8 *)(param_1 + 0x68) = param_2[0xb];
  *(undefined8 *)(param_1 + 0x60) = uVar3;
  *(undefined8 *)(param_1 + 0x78) = uVar5;
  *(undefined8 *)(param_1 + 0x70) = uVar4;
  uVar4 = param_2[0xf];
  uVar3 = param_2[0xe];
  uVar6 = param_2[0x11];
  uVar5 = param_2[0x10];
  uVar8 = param_2[0x13];
  uVar7 = param_2[0x12];
  uVar9 = *(undefined8 *)((long)param_2 + 0x9c);
  *(undefined8 *)(param_1 + 0xb4) = *(undefined8 *)((long)param_2 + 0xa4);
  *(undefined8 *)(param_1 + 0xac) = uVar9;
  *(undefined8 *)(param_1 + 0x98) = uVar6;
  *(undefined8 *)(param_1 + 0x90) = uVar5;
  *(undefined8 *)(param_1 + 0xa8) = uVar8;
  *(undefined8 *)(param_1 + 0xa0) = uVar7;
  *(undefined8 *)(param_1 + 0x88) = uVar4;
  *(undefined8 *)(param_1 + 0x80) = uVar3;
  uVar3 = param_2[0x16];
  *(undefined8 *)(param_1 + 200) = param_2[0x17];
  *(undefined8 *)(param_1 + 0xc0) = uVar3;
  uVar3 = param_2[0x18];
  *(undefined8 *)(param_1 + 0xd8) = param_2[0x19];
  *(undefined8 *)(param_1 + 0xd0) = uVar3;
  return;
}



/* Entry: 10982280c; end: 109822987;  */

void FUN_10982280c(long param_1,undefined8 *param_2,float *param_3)

{
  bool bVar1;
  uint uVar2;
  undefined1 auVar3 [16];
  ulong uVar4;
  int *piVar5;
  ulong uVar6;
  undefined1 (*pauVar7) [16];
  float fVar8;
  float fVar11;
  float fVar12;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  
  uVar2 = *(uint *)(param_1 + 0x360);
  uVar6 = (ulong)uVar2;
  if (0 < (int)uVar2) {
    uVar4 = uVar6 + 1;
    piVar5 = (int *)(param_1 + uVar6 * 0xd0 + -0x18);
    do {
      fVar8 = (float)piVar5[-0x2a];
      fVar11 = (float)piVar5[-0x29];
      fVar12 = (float)piVar5[-0x28];
      fVar13 = (float)*param_2 * fVar8;
      fVar15 = (float)((ulong)*param_2 >> 0x20) * fVar11;
      fVar16 = (float)param_2[1] * fVar12;
      fVar17 = (float)((ulong)param_2[1] >> 0x20) * (float)piVar5[-0x27];
      auVar18._0_4_ = fVar8 * *(float *)(param_2 + 2);
      auVar18._4_4_ = fVar11 * *(float *)((long)param_2 + 0x14);
      auVar18._8_4_ = fVar12 * *(float *)(param_2 + 3);
      auVar18._12_4_ = (float)piVar5[-0x27] * *(float *)((long)param_2 + 0x1c);
      fVar14 = *(float *)((long)param_2 + 0x3c);
      auVar24._0_4_ = fVar8 * *(float *)(param_2 + 4);
      auVar24._4_4_ = fVar11 * *(float *)((long)param_2 + 0x24);
      auVar24._8_4_ = fVar12 * *(float *)(param_2 + 5);
      auVar19._4_4_ = fVar15;
      auVar19._0_4_ = fVar13;
      auVar19._8_4_ = fVar16;
      auVar19._12_4_ = fVar17;
      auVar21._4_4_ = fVar15;
      auVar21._0_4_ = fVar13;
      auVar21._8_4_ = fVar16;
      auVar21._12_4_ = fVar17;
      auVar21 = NEON_ext(auVar19,auVar21,8,1);
      auVar23 = NEON_ext(auVar18,auVar18,8,1);
      auVar24._12_4_ = 0;
      auVar19 = NEON_ext(auVar24,auVar24,8,1);
      fVar8 = fVar13 + fVar15 + auVar21._0_4_ + *(float *)(param_2 + 6);
      fVar11 = auVar18._0_4_ + auVar18._4_4_ + auVar23._0_4_ + *(float *)((long)param_2 + 0x34);
      fVar12 = auVar24._0_4_ + auVar24._4_4_ + auVar19._0_4_ + auVar19._4_4_ +
               *(float *)(param_2 + 7);
      piVar5[-0x1c] = (int)fVar12;
      piVar5[-0x1b] = (int)(fVar14 + 0.0);
      piVar5[-0x1e] = (int)fVar8;
      piVar5[-0x1d] = (int)fVar11;
      fVar13 = (float)*(undefined8 *)(piVar5 + -0x24);
      fVar16 = (float)((ulong)*(undefined8 *)(piVar5 + -0x24) >> 0x20);
      fVar14 = (float)*(undefined8 *)(piVar5 + -0x26);
      fVar15 = (float)((ulong)*(undefined8 *)(piVar5 + -0x26) >> 0x20);
      auVar20._0_4_ = *param_3 * fVar14;
      auVar20._4_4_ = param_3[1] * fVar15;
      auVar20._8_4_ = param_3[2] * fVar13;
      auVar20._12_4_ = param_3[3] * fVar16;
      auVar22._0_4_ = fVar14 * param_3[4];
      auVar22._4_4_ = fVar15 * param_3[5];
      auVar22._8_4_ = fVar13 * param_3[6];
      auVar22._12_4_ = fVar16 * param_3[7];
      fVar14 = fVar14 * param_3[8];
      fVar15 = fVar15 * param_3[9];
      auVar21 = NEON_ext(auVar20,auVar20,8,1);
      auVar24 = NEON_ext(auVar22,auVar22,8,1);
      auVar23._4_4_ = fVar15;
      auVar23._0_4_ = fVar14;
      auVar23._8_4_ = fVar13 * param_3[10];
      auVar23._12_4_ = 0;
      auVar3._4_4_ = fVar15;
      auVar3._0_4_ = fVar14;
      auVar3._8_4_ = fVar13 * param_3[10];
      auVar3._12_4_ = 0;
      auVar19 = NEON_ext(auVar23,auVar3,8,1);
      fVar13 = auVar20._0_4_ + auVar20._4_4_ + auVar21._0_4_ + param_3[0xc];
      fVar16 = auVar22._0_4_ + auVar22._4_4_ + auVar24._0_4_ + param_3[0xd];
      fVar14 = fVar14 + fVar15 + auVar19._0_4_ + auVar19._4_4_ + param_3[0xe];
      *(ulong *)(piVar5 + -0x20) = CONCAT44(param_3[0xf] + 0.0,fVar14);
      *(ulong *)(piVar5 + -0x22) = CONCAT44(fVar16,fVar13);
      auVar9._0_4_ = (float)*(undefined8 *)(piVar5 + -0x1a) * (fVar8 - fVar13);
      auVar9._4_4_ = (float)((ulong)*(undefined8 *)(piVar5 + -0x1a) >> 0x20) * (fVar11 - fVar16);
      auVar9._8_4_ = (float)*(undefined8 *)(piVar5 + -0x18) * (fVar12 - fVar14);
      auVar9._12_4_ = (float)((ulong)*(undefined8 *)(piVar5 + -0x18) >> 0x20) * 0.0;
      auVar19 = NEON_ext(auVar9,auVar9,8,1);
      piVar5[-0x16] = (int)(auVar9._0_4_ + auVar9._4_4_ + auVar19._0_4_);
      *piVar5 = *piVar5 + 1;
      uVar4 = uVar4 - 1;
      piVar5 = piVar5 + -0x34;
    } while (1 < uVar4);
    pauVar7 = (undefined1 (*) [16])(param_1 + (ulong)uVar2 * 0xd0 + -0xa0);
    do {
      fVar11 = *(float *)pauVar7[3];
      fVar8 = *(float *)(param_1 + 0x364);
      if (fVar8 < fVar11) {
LAB_109822958:
        FUN_109822988(param_1,(int)uVar6 + -1);
      }
      else {
        auVar19 = *pauVar7;
        fVar12 = auVar19._0_4_ - ((float)*(undefined8 *)pauVar7[1] - *(float *)pauVar7[2] * fVar11);
        fVar14 = auVar19._4_4_ -
                 ((float)((ulong)*(undefined8 *)pauVar7[1] >> 0x20) -
                 *(float *)(pauVar7[2] + 4) * fVar11);
        fVar11 = auVar19._8_4_ -
                 ((float)*(undefined8 *)(pauVar7[1] + 8) - *(float *)(pauVar7[2] + 8) * fVar11);
        auVar10._0_4_ = fVar12 * fVar12;
        auVar10._4_4_ = fVar14 * fVar14;
        auVar10._8_4_ = fVar11 * fVar11;
        auVar10._12_4_ = 0;
        auVar19 = NEON_ext(auVar10,auVar10,8,1);
        if (fVar8 * fVar8 < auVar10._0_4_ + auVar10._4_4_ + auVar19._0_4_) goto LAB_109822958;
      }
      pauVar7 = pauVar7 + -0xd;
      bVar1 = 1 < uVar6;
      uVar6 = uVar6 - 1;
    } while (bVar1);
  }
  return;
}



/* Entry: 109822988; end: 109822a53;  */

void FUN_109822988(long param_1,int param_2)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long lStack_18;
  
  iVar1 = *(int *)(param_1 + 0x360);
  if (iVar1 + -1 != param_2) {
    puVar3 = (undefined8 *)(param_1 + 0x10 + (long)param_2 * 0xd0);
    puVar2 = (undefined8 *)(param_1 + 0x10 + (long)(iVar1 + -1) * 0xd0);
    uVar4 = *puVar2;
    puVar3[1] = puVar2[1];
    *puVar3 = uVar4;
    uVar4 = puVar2[2];
    puVar3[3] = puVar2[3];
    puVar3[2] = uVar4;
    uVar4 = puVar2[4];
    puVar3[5] = puVar2[5];
    puVar3[4] = uVar4;
    uVar4 = puVar2[6];
    puVar3[7] = puVar2[7];
    puVar3[6] = uVar4;
    uVar4 = puVar2[8];
    puVar3[9] = puVar2[9];
    puVar3[8] = uVar4;
    uVar4 = puVar2[10];
    uVar6 = puVar2[0xd];
    uVar5 = puVar2[0xc];
    puVar3[0xb] = puVar2[0xb];
    puVar3[10] = uVar4;
    puVar3[0xd] = uVar6;
    puVar3[0xc] = uVar5;
    uVar5 = puVar2[0xf];
    uVar4 = puVar2[0xe];
    uVar7 = puVar2[0x11];
    uVar6 = puVar2[0x10];
    uVar9 = puVar2[0x13];
    uVar8 = puVar2[0x12];
    uVar10 = *(undefined8 *)((long)puVar2 + 0x9c);
    *(undefined8 *)((long)puVar3 + 0xa4) = *(undefined8 *)((long)puVar2 + 0xa4);
    *(undefined8 *)((long)puVar3 + 0x9c) = uVar10;
    puVar3[0x11] = uVar7;
    puVar3[0x10] = uVar6;
    puVar3[0x13] = uVar9;
    puVar3[0x12] = uVar8;
    puVar3[0xf] = uVar5;
    puVar3[0xe] = uVar4;
    uVar4 = puVar2[0x16];
    puVar3[0x17] = puVar2[0x17];
    puVar3[0x16] = uVar4;
    uVar4 = puVar2[0x18];
    puVar3[0x19] = puVar2[0x19];
    puVar3[0x18] = uVar4;
    *(undefined4 *)(puVar2 + 0x15) = 0;
    puVar2[0x10] = 0;
    puVar2[0x11] = 0;
    puVar2[0xf] = 0;
    *(undefined4 *)(puVar2 + 0x12) = 0;
    iVar1 = *(int *)(param_1 + 0x360);
  }
  *(int *)(param_1 + 0x360) = iVar1 + -1;
  if (pcRam000000011382b1e0 != (code *)0x0 && iVar1 + -1 == 0) {
    lStack_18 = param_1;
    (*pcRam000000011382b1e0)(&lStack_18);
  }
  return;
}



/* Entry: 109822a54; end: 109822d6f;  */

undefined * FUN_109822a54(long param_1,undefined4 *param_2,long param_3,long *param_4)

{
  undefined4 *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  long lVar21;
  long lVar22;
  long lVar23;
  long *plVar24;
  long lVar25;
  undefined4 *puVar26;
  undefined4 *puVar27;
  undefined4 *puVar28;
  long lVar29;
  undefined4 *puVar30;
  undefined4 *puVar31;
  undefined4 *puVar32;
  undefined4 *puVar33;
  
  _bzero(param_3,0x350);
  plVar24 = param_4;
  (**(code **)(*param_4 + 0x38))(param_4,*(undefined8 *)(param_2 + 0xd4));
  *(long **)(param_3 + 0x340) = plVar24;
  (**(code **)(*param_4 + 0x38))(param_4,*(undefined8 *)(param_2 + 0xd6));
  *(long **)(param_3 + 0x348) = param_4;
  *(undefined4 *)(param_3 + 0x334) = param_2[0xd9];
  *(undefined4 *)(param_3 + 0x338) = param_2[0xda];
  *(undefined4 *)(param_3 + 800) = param_2[0xd8];
  *(undefined4 *)(param_3 + 0x324) = param_2[0xdb];
  *(undefined8 *)(param_3 + 0x328) = *(undefined8 *)(param_2 + 0xdc);
  *(undefined4 *)(param_3 + 0x330) = *param_2;
  if (0 < *(int *)(param_1 + 0x360)) {
    lVar25 = 0;
    puVar1 = param_2 + 4;
    lVar2 = param_3 + 0x1d0;
    lVar3 = param_3 + 0x1e0;
    lVar4 = param_3 + 0x280;
    lVar5 = param_3 + 0x290;
    lVar6 = param_3 + 0x1c0;
    lVar7 = param_3 + 0x2f0;
    lVar8 = param_3 + 0x2d0;
    lVar9 = param_3 + 0x310;
    lVar10 = param_3 + 0x300;
    lVar11 = param_3 + 0x2e0;
    lVar12 = param_3 + 0x2c0;
    lVar13 = param_3 + 0x270;
    lVar14 = param_3 + 0x250;
    lVar15 = param_3 + 0x260;
    lVar16 = param_3 + 0x230;
    lVar17 = param_3 + 0x240;
    lVar18 = param_3 + 0x1f0;
    lVar19 = param_3 + 0x200;
    lVar20 = param_3 + 0x210;
    lVar21 = param_3 + 0x220;
    lVar22 = param_3 + 0x2a0;
    lVar23 = param_3 + 0x2b0;
    puVar32 = param_2 + 8;
    puVar33 = param_2 + 0x14;
    puVar31 = param_2 + 0x10;
    puVar27 = param_2 + 0xc;
    puVar28 = param_2 + 0x30;
    puVar26 = puVar1;
    do {
      param_2 = param_2 + 0x34;
      lVar29 = 0;
      *(undefined4 *)(lVar2 + lVar25 * 4) = puVar1[lVar25 * 0x34 + 0x21];
      *(undefined4 *)(lVar3 + lVar25 * 4) = puVar1[lVar25 * 0x34 + 0x22];
      *(undefined4 *)(lVar4 + lVar25 * 4) = puVar1[lVar25 * 0x34 + 0x23];
      *(undefined4 *)(lVar5 + lVar25 * 4) = puVar1[lVar25 * 0x34 + 0x24];
      do {
        *(undefined4 *)(param_3 + lVar29) = *(undefined4 *)((long)puVar26 + lVar29);
        lVar29 = lVar29 + 4;
      } while (lVar29 != 0x10);
      lVar29 = 0x10;
      puVar30 = puVar32;
      do {
        *(undefined4 *)(param_3 + lVar29 * 4) = *puVar30;
        lVar29 = lVar29 + 1;
        puVar30 = puVar30 + 1;
      } while (lVar29 != 0x14);
      lVar29 = 0x40;
      puVar30 = puVar33;
      do {
        *(undefined4 *)(param_3 + lVar29 * 4) = *puVar30;
        lVar29 = lVar29 + 1;
        puVar30 = puVar30 + 1;
      } while (lVar29 != 0x44);
      *(undefined4 *)(lVar6 + lVar25 * 4) = puVar1[lVar25 * 0x34 + 0x14];
      *(undefined4 *)(lVar7 + lVar25 * 4) = puVar1[lVar25 * 0x34 + 0x28];
      *(undefined4 *)(lVar8 + lVar25 * 4) = puVar1[lVar25 * 0x34 + 0x27];
      *(undefined4 *)(lVar9 + lVar25 * 4) = puVar1[lVar25 * 0x34 + 0x2a];
      *(undefined4 *)(lVar10 + lVar25 * 4) = puVar1[lVar25 * 0x34 + 0x29];
      *(undefined4 *)(lVar11 + lVar25 * 4) = puVar1[lVar25 * 0x34 + 0x28];
      *(undefined4 *)(lVar12 + lVar25 * 4) = puVar1[lVar25 * 0x34 + 0x27];
      *(undefined4 *)(lVar13 + lVar25 * 4) = puVar1[lVar25 * 0x34 + 0x20];
      *(undefined4 *)(lVar14 + lVar25 * 4) = puVar1[lVar25 * 0x34 + 0x1b];
      *(undefined4 *)(lVar15 + lVar25 * 4) = puVar1[lVar25 * 0x34 + 0x1c];
      *(undefined4 *)(lVar16 + lVar25 * 4) = puVar1[lVar25 * 0x34 + 0x19];
      *(undefined4 *)(lVar17 + lVar25 * 4) = puVar1[lVar25 * 0x34 + 0x1a];
      lVar29 = 0x20;
      puVar30 = puVar31;
      do {
        *(undefined4 *)(param_3 + lVar29 * 4) = *puVar30;
        lVar29 = lVar29 + 1;
        puVar30 = puVar30 + 1;
      } while (lVar29 != 0x24);
      lVar29 = 0x30;
      puVar30 = puVar27;
      do {
        *(undefined4 *)(param_3 + lVar29 * 4) = *puVar30;
        lVar29 = lVar29 + 1;
        puVar30 = puVar30 + 1;
      } while (lVar29 != 0x34);
      *(undefined4 *)(lVar18 + lVar25 * 4) = puVar1[lVar25 * 0x34 + 0x15];
      lVar29 = 0x50;
      puVar30 = puVar28;
      do {
        *(undefined4 *)(param_3 + lVar29 * 4) = *puVar30;
        lVar29 = lVar29 + 1;
        puVar30 = puVar30 + 1;
      } while (lVar29 != 0x54);
      lVar29 = 0x60;
      puVar30 = param_2;
      do {
        *(undefined4 *)(param_3 + lVar29 * 4) = *puVar30;
        lVar29 = lVar29 + 1;
        puVar30 = puVar30 + 1;
      } while (lVar29 != 100);
      *(undefined4 *)(lVar19 + lVar25 * 4) = puVar1[lVar25 * 0x34 + 0x16];
      *(undefined4 *)(lVar20 + lVar25 * 4) = puVar1[lVar25 * 0x34 + 0x17];
      *(undefined4 *)(lVar21 + lVar25 * 4) = puVar1[lVar25 * 0x34 + 0x18];
      *(undefined4 *)(lVar22 + lVar25 * 4) = puVar1[lVar25 * 0x34 + 0x25];
      *(undefined4 *)(lVar23 + lVar25 * 4) = puVar1[lVar25 * 0x34 + 0x26];
      lVar25 = lVar25 + 1;
      param_3 = param_3 + 0x10;
      puVar26 = puVar26 + 0x34;
      puVar32 = puVar32 + 0x34;
      puVar33 = puVar33 + 0x34;
      puVar31 = puVar31 + 0x34;
      puVar27 = puVar27 + 0x34;
      puVar28 = puVar28 + 0x34;
    } while (lVar25 < *(int *)(param_1 + 0x360));
  }
  return &UNK_10f580bc3;
}



/* Entry: 109822d70; end: 109822e73;  */

bool FUN_109822d70(undefined8 param_1,undefined8 param_2,float param_3,undefined8 *param_4,
                  undefined8 *param_5,long param_6,long param_7)

{
  float fVar1;
  float in_register_00005008;
  float in_register_0000500c;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  ulong uVar4;
  undefined8 in_register_00005028;
  float fVar5;
  float fVar6;
  ulong uVar7;
  float fVar8;
  float fVar9;
  ulong uVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  
  fVar5 = (float)param_2;
  auVar2._0_4_ = (float)param_1 * fVar5;
  fVar6 = (float)((ulong)param_2 >> 0x20);
  auVar2._4_4_ = (float)((ulong)param_1 >> 0x20) * fVar6;
  fVar9 = (float)in_register_00005028;
  auVar2._8_4_ = in_register_00005008 * fVar9;
  auVar2._12_4_ = in_register_0000500c * (float)((ulong)in_register_00005028 >> 0x20);
  auVar3 = NEON_ext(auVar2,auVar2,8,1);
  fVar1 = auVar3._0_4_ + auVar2._0_4_ + auVar2._4_4_;
  fVar13 = (float)param_4[2] * fVar6 + (float)*param_4 * fVar5 + (float)param_4[4] * fVar9;
  fVar14 = (float)param_5[2] * fVar6 + (float)*param_5 * fVar5 + (float)param_5[4] * fVar9;
  fVar11 = (float)((ulong)param_4[2] >> 0x20) * fVar6 + (float)((ulong)*param_4 >> 0x20) * fVar5 +
           (float)((ulong)param_4[4] >> 0x20) * fVar9;
  fVar12 = (float)((ulong)param_5[2] >> 0x20) * fVar6 + (float)((ulong)*param_5 >> 0x20) * fVar5 +
           (float)((ulong)param_5[4] >> 0x20) * fVar9;
  fVar8 = (float)param_4[3] * fVar6 + (float)param_4[1] * fVar5 + (float)param_4[5] * fVar9;
  fVar9 = *(float *)(param_5 + 3) * fVar6 + *(float *)(param_5 + 1) * fVar5 +
          *(float *)(param_5 + 5) * fVar9;
  fVar5 = (float)*(undefined8 *)(param_6 + 0x80);
  fVar6 = (float)*(undefined8 *)(param_7 + 0x80);
  uVar10 = CONCAT44(fVar6,fVar5);
  uVar10 = uVar10 ^ (uVar10 ^ CONCAT44(-fVar6,-fVar5)) &
                    CONCAT44(-(uint)(fVar14 < 0.0),-(uint)(fVar13 < 0.0));
  fVar5 = (float)((ulong)*(undefined8 *)(param_6 + 0x80) >> 0x20);
  fVar6 = (float)((ulong)*(undefined8 *)(param_7 + 0x80) >> 0x20);
  uVar7 = CONCAT44(fVar6,fVar5);
  uVar7 = uVar7 ^ (uVar7 ^ CONCAT44(-fVar6,-fVar5)) &
                  CONCAT44(-(uint)(fVar12 < 0.0),-(uint)(fVar11 < 0.0));
  fVar5 = (float)*(undefined8 *)(param_6 + 0x88);
  uVar4 = CONCAT44(*(float *)(param_7 + 0x88),fVar5);
  uVar4 = uVar4 ^ (uVar4 ^ CONCAT44(-*(float *)(param_7 + 0x88),-fVar5)) &
                  CONCAT44(-(uint)(fVar9 < 0.0),-(uint)(fVar8 < 0.0));
  fVar6 = fVar11 * (float)uVar7 + fVar13 * (float)uVar10 + fVar8 * (float)uVar4;
  fVar9 = fVar12 * (float)(uVar7 >> 0x20) + fVar14 * (float)(uVar10 >> 0x20) +
          fVar9 * (float)(uVar4 >> 0x20);
  fVar5 = (float)*(undefined8 *)(param_6 + 0x90);
  uVar10 = CONCAT44(*(float *)(param_7 + 0x90),fVar5);
  uVar10 = uVar10 ^ (uVar10 ^ CONCAT44(fVar9,fVar6)) &
                    CONCAT44(-(uint)(*(float *)(param_7 + 0x90) < fVar9),-(uint)(fVar5 < fVar6));
  fVar6 = (float)uVar10 + (float)(uVar10 >> 0x20);
  fVar5 = fVar1 + fVar6;
  fVar6 = fVar6 - fVar1;
  if (fVar6 <= fVar5) {
    fVar5 = fVar6;
  }
  return fVar5 <= param_3;
}



/* Entry: 109822e74; end: 10982360f;  */

void FUN_109822e74(long param_1,long param_2,float *param_3,float *param_4,float *param_5,
                  long *param_6)

{
  undefined1 (*pauVar1) [12];
  undefined1 auVar2 [12];
  float *pfVar3;
  long lVar4;
  int iVar5;
  long lVar6;
  int iVar7;
  long lVar8;
  int iVar9;
  int iVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar21;
  undefined8 uVar16;
  float fVar22;
  float fVar23;
  float fVar24;
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  float fVar25;
  undefined8 uVar26;
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  float fVar40;
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined8 uVar41;
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  float fVar42;
  float fVar54;
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  uint uVar55;
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  undefined1 auVar64 [16];
  undefined1 auVar65 [16];
  float fVar66;
  float fVar67;
  undefined8 uStack_170;
  ulong uStack_168;
  undefined8 uStack_160;
  ulong uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_140;
  undefined8 uStack_138;
  int iStack_130;
  int iStack_12c;
  float fStack_120;
  float fStack_11c;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  float fStack_c0;
  float fStack_bc;
  float fStack_b8;
  float fStack_b4;
  float fStack_a4;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  
  fVar14 = *(float *)(param_1 + 0x70);
  fVar21 = *(float *)(param_1 + 0x74);
  fVar22 = *(float *)(param_1 + 0x78);
  auVar63._0_4_ = *param_3 * fVar14;
  auVar63._4_4_ = param_3[1] * fVar21;
  auVar63._8_4_ = param_3[2] * fVar22;
  auVar63._12_4_ = param_3[3] * *(float *)(param_1 + 0x7c);
  auVar43._0_4_ = fVar14 * param_3[4];
  auVar43._4_4_ = fVar21 * param_3[5];
  auVar43._8_4_ = fVar22 * param_3[6];
  auVar43._12_4_ = *(float *)(param_1 + 0x7c) * param_3[7];
  auVar59._0_4_ = fVar14 * param_3[8];
  auVar59._4_4_ = fVar21 * param_3[9];
  auVar59._8_4_ = fVar22 * param_3[10];
  auVar56 = NEON_ext(auVar63,auVar63,8,1);
  auVar64 = NEON_ext(auVar43,auVar43,8,1);
  auVar59._12_4_ = 0;
  auVar44 = NEON_ext(auVar59,auVar59,8,1);
  fVar14 = *(float *)(param_2 + 0x70);
  fVar21 = *(float *)(param_2 + 0x74);
  fVar22 = *(float *)(param_2 + 0x78);
  auVar45._0_4_ = *param_4 * fVar14;
  auVar45._4_4_ = param_4[1] * fVar21;
  auVar45._8_4_ = param_4[2] * fVar22;
  auVar45._12_4_ = param_4[3] * *(float *)(param_2 + 0x7c);
  auVar57._0_4_ = fVar14 * param_4[4];
  auVar57._4_4_ = fVar21 * param_4[5];
  auVar57._8_4_ = fVar22 * param_4[6];
  auVar57._12_4_ = *(float *)(param_2 + 0x7c) * param_4[7];
  auVar27._0_4_ = fVar14 * param_4[8];
  auVar27._4_4_ = fVar21 * param_4[9];
  auVar27._8_4_ = fVar22 * param_4[10];
  auVar62 = NEON_ext(auVar45,auVar45,8,1);
  auVar65 = NEON_ext(auVar57,auVar57,8,1);
  iRam0000000113736598 = iRam0000000113736598 + 1;
  auVar27._12_4_ = 0;
  auVar58 = NEON_ext(auVar27,auVar27,8,1);
  fVar14 = (auVar63._0_4_ + auVar63._4_4_ + auVar56._0_4_ + param_3[0xc]) -
           (auVar45._0_4_ + auVar45._4_4_ + auVar62._0_4_ + param_4[0xc]);
  fVar21 = (auVar43._0_4_ + auVar43._4_4_ + auVar64._0_4_ + param_3[0xd]) -
           (auVar57._0_4_ + auVar57._4_4_ + auVar65._0_4_ + param_4[0xd]);
  fVar22 = (auVar59._0_4_ + auVar59._4_4_ + auVar44._0_4_ + auVar44._4_4_ + param_3[0xe]) -
           (auVar27._0_4_ + auVar27._4_4_ + auVar58._0_4_ + auVar58._4_4_ + param_4[0xe]);
  uVar55 = *(uint *)(param_1 + 0x2c);
  if ((int)uVar55 < 1) {
    fVar24 = 3.4028235e+38;
  }
  else {
    lVar6 = 0;
    fVar24 = 3.4028235e+38;
    iVar7 = iRam0000000113736594;
    iVar9 = iRam0000000113736590;
    do {
      iVar9 = iVar9 + 1;
      lVar8 = *(long *)(param_1 + 0x38) + lVar6;
      pauVar1 = (undefined1 (*) [12])(lVar8 + 0x20);
      uVar16 = *(undefined8 *)*pauVar1;
      fVar23 = *(float *)(lVar8 + 0x28);
      auVar2 = *pauVar1;
      fVar11 = (float)uVar16;
      auVar56._0_4_ = fVar11 * param_3[8];
      fVar12 = (float)((ulong)uVar16 >> 0x20);
      auVar56._4_4_ = fVar12 * param_3[9];
      auVar56._8_4_ = fVar23 * param_3[10];
      auVar65._0_4_ = fVar11 * *param_3;
      auVar65._4_4_ = fVar12 * param_3[1];
      auVar65._8_4_ = fVar23 * param_3[2];
      auVar65._12_4_ = param_3[3] * 0.0;
      auVar44._0_4_ = fVar11 * param_3[4];
      auVar44._4_4_ = auVar2._4_4_ * param_3[5];
      auVar44._8_4_ = auVar2._8_4_ * param_3[6];
      auVar44._12_4_ = param_3[7] * 0.0;
      auVar59 = NEON_ext(auVar65,auVar65,8,1);
      auVar63 = NEON_ext(auVar44,auVar44,8,1);
      auVar56._12_4_ = 0;
      auVar64._0_4_ = auVar65._0_4_ + auVar65._4_4_ + auVar59._0_4_;
      auVar64._4_4_ = auVar44._0_4_ + auVar44._4_4_ + auVar63._0_4_;
      auVar59 = NEON_ext(auVar56,auVar56,8,1);
      fVar11 = auVar56._0_4_ + auVar56._4_4_ + auVar59._0_4_ + auVar59._4_4_;
      auVar64._8_4_ = fVar11;
      auVar64._12_4_ = 0;
      auVar58._0_4_ = auVar64._0_4_ * fVar14;
      auVar58._4_4_ = auVar64._4_4_ * fVar21;
      auVar58._8_4_ = fVar11 * fVar22;
      auVar58._12_4_ = 0;
      auVar59 = NEON_ext(auVar58,auVar58,8,1);
      auVar62._0_4_ = -(uint)(auVar58._0_4_ + auVar58._4_4_ + auVar59._0_4_ < 0.0);
      auVar62._4_4_ = auVar62._0_4_;
      auVar62._8_4_ = auVar62._0_4_;
      auVar62._12_4_ = auVar62._0_4_;
      auVar46._0_4_ = -auVar64._0_4_;
      auVar46._4_4_ = -auVar64._4_4_;
      auVar46._8_4_ = -fVar11;
      auVar46._12_4_ = 0x80000000;
      auVar64 = auVar64 ^ (auVar64 ^ auVar46) & auVar62;
      uVar26 = auVar64._8_8_;
      uVar16 = auVar64._0_8_;
      pfVar3 = param_3;
      iRam0000000113736590 = iVar9;
      uStack_a0 = uVar16;
      uStack_98 = uVar26;
      FUN_109822d70(CONCAT44(fVar21,fVar14),uVar16,fVar24,param_3,param_4,param_1,param_2);
      if ((int)pfVar3 != 0) {
        iVar7 = iVar7 + 1;
        lVar8 = param_1;
        iRam0000000113736594 = iVar7;
        FUN_109823610(param_1,param_2,param_3,param_4,&uStack_a0,&fStack_a4,&fStack_c0,&uStack_d0);
        if ((int)lVar8 == 0) {
          return;
        }
        if (fStack_a4 < fVar24) {
          *(undefined8 *)(param_5 + 2) = uVar26;
          *(undefined8 *)param_5 = uVar16;
          fVar24 = fStack_a4;
        }
      }
      lVar6 = lVar6 + 0x30;
    } while ((ulong)uVar55 * 0x30 - lVar6 != 0);
  }
  uVar55 = *(uint *)(param_2 + 0x2c);
  if (0 < (int)uVar55) {
    lVar6 = 0;
    iVar7 = iRam0000000113736594;
    iVar9 = iRam0000000113736590;
    do {
      iVar9 = iVar9 + 1;
      lVar8 = *(long *)(param_2 + 0x38) + lVar6;
      pauVar1 = (undefined1 (*) [12])(lVar8 + 0x20);
      uVar16 = *(undefined8 *)*pauVar1;
      fVar23 = *(float *)(lVar8 + 0x28);
      auVar2 = *pauVar1;
      fVar11 = (float)uVar16;
      auVar28._0_4_ = fVar11 * param_4[8];
      fVar12 = (float)((ulong)uVar16 >> 0x20);
      auVar28._4_4_ = fVar12 * param_4[9];
      auVar28._8_4_ = fVar23 * param_4[10];
      auVar47._0_4_ = fVar11 * *param_4;
      auVar47._4_4_ = fVar12 * param_4[1];
      auVar47._8_4_ = fVar23 * param_4[2];
      auVar47._12_4_ = param_4[3] * 0.0;
      auVar17._0_4_ = fVar11 * param_4[4];
      auVar17._4_4_ = auVar2._4_4_ * param_4[5];
      auVar17._8_4_ = auVar2._8_4_ * param_4[6];
      auVar17._12_4_ = param_4[7] * 0.0;
      auVar59 = NEON_ext(auVar47,auVar47,8,1);
      auVar63 = NEON_ext(auVar17,auVar17,8,1);
      auVar28._12_4_ = 0;
      auVar31._0_4_ = auVar47._0_4_ + auVar47._4_4_ + auVar59._0_4_;
      auVar31._4_4_ = auVar17._0_4_ + auVar17._4_4_ + auVar63._0_4_;
      auVar59 = NEON_ext(auVar28,auVar28,8,1);
      fVar11 = auVar28._0_4_ + auVar28._4_4_ + auVar59._0_4_ + auVar59._4_4_;
      auVar31._8_4_ = fVar11;
      auVar31._12_4_ = 0;
      auVar29._0_4_ = auVar31._0_4_ * fVar14;
      auVar29._4_4_ = auVar31._4_4_ * fVar21;
      auVar29._8_4_ = fVar11 * fVar22;
      auVar29._12_4_ = 0;
      auVar59 = NEON_ext(auVar29,auVar29,8,1);
      auVar30._0_4_ = -(uint)(auVar29._0_4_ + auVar29._4_4_ + auVar59._0_4_ < 0.0);
      auVar30._4_4_ = auVar30._0_4_;
      auVar30._8_4_ = auVar30._0_4_;
      auVar30._12_4_ = auVar30._0_4_;
      auVar48._0_4_ = -auVar31._0_4_;
      auVar48._4_4_ = -auVar31._4_4_;
      auVar48._8_4_ = -fVar11;
      auVar48._12_4_ = 0x80000000;
      auVar31 = auVar31 ^ (auVar31 ^ auVar48) & auVar30;
      uVar26 = auVar31._8_8_;
      uVar16 = auVar31._0_8_;
      pfVar3 = param_3;
      iRam0000000113736590 = iVar9;
      uStack_a0 = uVar16;
      uStack_98 = uVar26;
      FUN_109822d70(CONCAT44(fVar21,fVar14),uVar16,fVar24,param_3,param_4,param_1,param_2);
      if ((int)pfVar3 != 0) {
        iVar7 = iVar7 + 1;
        lVar8 = param_1;
        iRam0000000113736594 = iVar7;
        FUN_109823610(param_1,param_2,param_3,param_4,&uStack_a0,&fStack_a4,&fStack_c0,&uStack_d0);
        if ((int)lVar8 == 0) {
          return;
        }
        if (fStack_a4 < fVar24) {
          *(undefined8 *)(param_5 + 2) = uVar26;
          *(undefined8 *)param_5 = uVar16;
          fVar24 = fStack_a4;
        }
      }
      lVar6 = lVar6 + 0x30;
    } while ((ulong)uVar55 * 0x30 - lVar6 != 0);
  }
  iVar7 = *(int *)(param_1 + 0x4c);
  if (0 < iVar7) {
    lVar6 = 0;
    iVar10 = *(int *)(param_2 + 0x4c);
    fVar11 = 0.0;
    uStack_150 = 0;
    iStack_130 = -1;
    iStack_12c = -1;
    uStack_138 = 0;
    uStack_140 = 0;
    iVar9 = iRam0000000113736590;
    iVar5 = iRam0000000113736594;
    do {
      if (0 < iVar10) {
        lVar8 = 0;
        pfVar3 = (float *)(*(long *)(param_1 + 0x58) + lVar6 * 0x10);
        fVar12 = *pfVar3;
        fVar23 = pfVar3[1];
        fVar40 = pfVar3[2];
        auVar32._0_4_ = fVar12 * *param_3;
        auVar32._4_4_ = fVar23 * param_3[1];
        auVar32._8_4_ = fVar40 * param_3[2];
        auVar32._12_4_ = pfVar3[3] * param_3[3];
        auVar49._0_4_ = fVar12 * param_3[4];
        auVar49._4_4_ = fVar23 * param_3[5];
        auVar49._8_4_ = fVar40 * param_3[6];
        auVar49._12_4_ = pfVar3[3] * param_3[7];
        auVar18._0_4_ = fVar12 * param_3[8];
        auVar18._4_4_ = fVar23 * param_3[9];
        auVar18._8_4_ = fVar40 * param_3[10];
        auVar59 = NEON_ext(auVar32,auVar32,8,1);
        auVar63 = NEON_ext(auVar49,auVar49,8,1);
        auVar18._12_4_ = 0;
        fVar23 = auVar32._0_4_ + auVar32._4_4_ + auVar59._0_4_;
        fVar40 = auVar49._0_4_ + auVar49._4_4_ + auVar63._0_4_;
        auVar59 = NEON_ext(auVar18,auVar18,8,1);
        fVar12 = auVar18._0_4_ + auVar18._4_4_ + auVar59._0_4_ + auVar59._4_4_;
        uVar16 = NEON_ext(CONCAT44(fVar40,fVar23),(ulong)(uint)fVar12,4,1);
        do {
          pfVar3 = (float *)(*(long *)(param_2 + 0x58) + lVar8 * 0x10);
          fVar13 = *pfVar3;
          fVar15 = pfVar3[1];
          fVar66 = pfVar3[2];
          auVar33._0_4_ = fVar13 * *param_4;
          auVar33._4_4_ = fVar15 * param_4[1];
          auVar33._8_4_ = fVar66 * param_4[2];
          auVar33._12_4_ = pfVar3[3] * param_4[3];
          auVar50._0_4_ = fVar13 * param_4[4];
          auVar50._4_4_ = fVar15 * param_4[5];
          auVar50._8_4_ = fVar66 * param_4[6];
          auVar50._12_4_ = pfVar3[3] * param_4[7];
          auVar19._0_4_ = fVar13 * param_4[8];
          auVar19._4_4_ = fVar15 * param_4[9];
          auVar19._8_4_ = fVar66 * param_4[10];
          auVar59 = NEON_ext(auVar33,auVar33,8,1);
          auVar63 = NEON_ext(auVar50,auVar50,8,1);
          auVar19._12_4_ = 0;
          fVar42 = auVar33._0_4_ + auVar33._4_4_ + auVar59._0_4_;
          fVar54 = auVar50._0_4_ + auVar50._4_4_ + auVar63._0_4_;
          auVar59 = NEON_ext(auVar19,auVar19,8,1);
          fVar13 = auVar19._0_4_ + auVar19._4_4_ + auVar59._0_4_ + auVar59._4_4_;
          uVar26 = NEON_ext(CONCAT44(fVar54,fVar42),(ulong)(uint)fVar13,4,1);
          fStack_120 = (float)uVar16;
          fStack_11c = (float)((ulong)uVar16 >> 0x20);
          auVar20._0_4_ = fVar23 * (float)uVar26 - fStack_120 * fVar42;
          auVar20._4_4_ = fVar40 * (float)((ulong)uVar26 >> 0x20) - fStack_11c * fVar54;
          auVar20._8_4_ = fVar12 * fVar42 - fVar23 * fVar13;
          auVar20._12_4_ = fVar54 * 0.0 - fVar40 * 0.0;
          auVar59 = NEON_ext(auVar20,auVar20,0xc,1);
          auVar59 = NEON_ext(auVar59,auVar20,8,1);
          fVar15 = auVar59._0_4_;
          fVar66 = auVar59._4_4_;
          fVar67 = auVar59._8_4_;
          if (((1e-06 < ABS(fVar15)) || (1e-06 < ABS(fVar66))) || (1e-06 < ABS(fVar67))) {
            auVar34._0_4_ = fVar15 * fVar15;
            auVar34._4_4_ = fVar66 * fVar66;
            auVar34._8_4_ = fVar67 * fVar67;
            auVar34._12_4_ = 0;
            auVar59 = NEON_ext(auVar34,auVar34,8,1);
            fVar25 = 1.0 / SQRT(auVar59._0_4_ + auVar34._0_4_ + auVar34._4_4_);
            auVar37._0_4_ = fVar15 * fVar25;
            auVar37._4_4_ = fVar66 * fVar25;
            auVar37._8_4_ = fVar67 * fVar25;
            auVar37._12_4_ = fVar25 * 0.0;
            auVar35._0_4_ = auVar37._0_4_ * fVar14;
            auVar35._4_4_ = auVar37._4_4_ * fVar21;
            auVar35._8_4_ = auVar37._8_4_ * fVar22;
            auVar35._12_4_ = auVar37._12_4_ * 0.0;
            auVar59 = NEON_ext(auVar35,auVar35,8,1);
            auVar36._0_4_ = -(uint)(auVar35._0_4_ + auVar35._4_4_ + auVar59._0_4_ < 0.0);
            auVar36._4_4_ = auVar36._0_4_;
            auVar36._8_4_ = auVar36._0_4_;
            auVar36._12_4_ = auVar36._0_4_;
            auVar51._0_4_ = -auVar37._0_4_;
            auVar51._4_4_ = -auVar37._4_4_;
            auVar51._8_4_ = -auVar37._8_4_;
            auVar51._12_4_ = -auVar37._12_4_;
            auVar37 = auVar37 ^ (auVar37 ^ auVar51) & auVar36;
            uVar41 = auVar37._8_8_;
            uVar26 = auVar37._0_8_;
            iVar9 = iVar9 + 1;
            pfVar3 = param_3;
            iRam0000000113736590 = iVar9;
            uStack_a0 = uVar26;
            uStack_98 = uVar41;
            FUN_109822d70(CONCAT44(fVar21,fVar14),uVar26,fVar24,param_3,param_4,param_1,param_2);
            if ((int)pfVar3 != 0) {
              iVar5 = iVar5 + 1;
              lVar4 = param_1;
              iRam0000000113736594 = iVar5;
              FUN_109823610(param_1,param_2,param_3,param_4,&uStack_a0,&fStack_a4,&fStack_c0,
                            &uStack_d0);
              if ((int)lVar4 == 0) {
                return;
              }
              if (fStack_a4 < fVar24) {
                *(undefined8 *)(param_5 + 2) = uVar41;
                *(undefined8 *)param_5 = uVar26;
                uStack_150 = CONCAT44(fStack_bc,fStack_c0);
                uStack_138 = uStack_c8;
                uStack_140 = uStack_d0;
                uStack_170 = CONCAT44(fVar40,fVar23);
                uStack_168 = (ulong)(uint)fVar12;
                uStack_158 = (ulong)(uint)fVar13;
                iVar10 = *(int *)(param_2 + 0x4c);
                iStack_130 = (int)lVar8;
                iStack_12c = (int)lVar6;
                uStack_160 = CONCAT44(fVar54,fVar42);
                fVar24 = fStack_a4;
                fVar11 = fStack_b8;
              }
            }
          }
          lVar8 = lVar8 + 1;
        } while (lVar8 < iVar10);
        iVar7 = *(int *)(param_1 + 0x4c);
      }
      lVar6 = lVar6 + 1;
    } while (lVar6 < iVar7);
    if ((-1 < iStack_12c) && (-1 < iStack_130)) {
      uStack_150._0_4_ = (float)uStack_140 - (float)uStack_150;
      fStack_bc = (float)((ulong)uStack_140 >> 0x20);
      uStack_150._4_4_ = fStack_bc - uStack_150._4_4_;
      fVar11 = (float)uStack_138 - fVar11;
      fVar15 = (float)uStack_160;
      fVar42 = (float)uStack_170;
      auVar38._0_4_ = fVar15 * fVar42;
      fVar66 = (float)((ulong)uStack_160 >> 0x20);
      fVar54 = (float)((ulong)uStack_170 >> 0x20);
      auVar38._4_4_ = fVar66 * fVar54;
      fVar67 = (float)uStack_158;
      fVar25 = (float)uStack_168;
      auVar38._8_4_ = fVar67 * fVar25;
      fVar24 = (float)(uStack_158 >> 0x20);
      fVar23 = (float)(uStack_168 >> 0x20);
      auVar38._12_4_ = fVar24 * fVar23;
      auVar59 = NEON_ext(auVar38,auVar38,8,1);
      fVar12 = auVar59._0_4_ + auVar38._0_4_ + auVar38._4_4_;
      auVar52._0_4_ = fVar42 * (float)uStack_150;
      auVar52._4_4_ = fVar54 * uStack_150._4_4_;
      auVar52._8_4_ = fVar25 * fVar11;
      auVar52._12_4_ = fVar23 * 0.0;
      auVar59 = NEON_ext(auVar52,auVar52,8,1);
      fVar23 = auVar59._0_4_ + auVar52._0_4_ + auVar52._4_4_;
      auVar60._0_4_ = fVar15 * (float)uStack_150;
      auVar60._4_4_ = fVar66 * uStack_150._4_4_;
      auVar60._8_4_ = fVar67 * fVar11;
      auVar60._12_4_ = fVar24 * 0.0;
      auVar59 = NEON_ext(auVar60,auVar60,8,1);
      fVar13 = 1.0 - fVar12 * fVar12;
      fVar40 = -(auVar59._0_4_ + auVar60._0_4_ + auVar60._4_4_);
      fVar24 = 0.0;
      if (fVar13 != 0.0) {
        fVar13 = (fVar23 + fVar12 * fVar40) / fVar13;
        fVar24 = -1e+30;
        if ((-1e+30 <= fVar13) && (fVar24 = fVar13, 1e+30 < fVar13)) {
          fVar24 = 1e+30;
        }
      }
      fVar40 = fVar40 + fVar12 * fVar24;
      if (-1e+30 <= fVar40) {
        if (1e+30 < fVar40) {
          fVar23 = fVar23 + fVar12 * 1e+30;
          fVar40 = 1e+30;
          fVar24 = -1e+30;
          if ((-1e+30 <= fVar23) && (fVar40 = 1e+30, fVar24 = fVar23, 1e+30 < fVar23)) {
            fVar24 = 1e+30;
            fVar40 = 1e+30;
          }
        }
      }
      else {
        fVar40 = -1e+30;
        fVar23 = fVar23 + fVar12 * -1e+30;
        if (-1e+30 <= fVar23) {
          fVar24 = 1e+30;
          if (fVar23 <= 1e+30) {
            fVar24 = fVar23;
          }
        }
        else {
          fVar24 = -1e+30;
        }
      }
      fVar12 = fVar15 * fVar40 + ((float)uStack_150 - fVar42 * fVar24);
      fVar23 = fVar66 * fVar40 + (uStack_150._4_4_ - fVar54 * fVar24);
      fVar24 = fVar67 * fVar40 + (fVar11 - fVar25 * fVar24);
      auVar53._0_4_ = fVar12 * fVar12;
      auVar53._4_4_ = fVar23 * fVar23;
      auVar53._8_4_ = fVar24 * fVar24;
      auVar53._12_4_ = 0;
      auVar59 = NEON_ext(auVar53,auVar53,8,1);
      fVar11 = auVar53._0_4_ + auVar53._4_4_ + auVar59._0_4_;
      if (1.1920929e-07 < fVar11) {
        fVar11 = 1.0 / SQRT(fVar11);
        fVar12 = fVar12 * fVar11;
        fVar23 = fVar23 * fVar11;
        fVar24 = fVar24 * fVar11;
        fVar11 = fVar11 * 0.0;
        auVar61._0_4_ = fVar12 * fVar14;
        auVar61._4_4_ = fVar23 * fVar21;
        auVar61._8_4_ = fVar24 * fVar22;
        auVar61._12_4_ = fVar11 * 0.0;
        auVar59 = NEON_ext(auVar61,auVar61,8,1);
        uVar55 = -(uint)(auVar59._0_4_ + auVar61._0_4_ + auVar61._4_4_ < 0.0);
        uStack_98 = CONCAT44((uint)fVar11 ^ ((uint)fVar11 ^ (uint)-fVar11) & uVar55,
                             (uint)fVar24 ^ ((uint)fVar24 ^ (uint)-fVar24) & uVar55);
        uStack_a0 = CONCAT44((uint)fVar23 ^ ((uint)fVar23 ^ (uint)-fVar23) & uVar55,
                             (uint)fVar12 ^ ((uint)fVar12 ^ (uint)-fVar12) & uVar55);
        fStack_c0 = (float)uStack_140 + fVar15 * fVar40;
        fStack_bc = fStack_bc + fVar66 * fVar40;
        fStack_b8 = (float)uStack_138 + fVar67 * fVar40;
        fStack_b4 = (float)((ulong)uStack_138 >> 0x20) + 0.0;
        (**(code **)(*param_6 + 0x20))(param_6,&uStack_a0,&fStack_c0);
      }
    }
  }
  auVar39._0_4_ = *param_5 * fVar14;
  auVar39._4_4_ = param_5[1] * fVar21;
  auVar39._8_4_ = param_5[2] * fVar22;
  auVar39._12_4_ = param_5[3] * 0.0;
  auVar59 = NEON_ext(auVar39,auVar39,8,1);
  if (auVar39._0_4_ + auVar39._4_4_ + auVar59._0_4_ < 0.0) {
    param_5[2] = -param_5[2];
    param_5[3] = -param_5[3];
    *param_5 = -*param_5;
    param_5[1] = -param_5[1];
  }
  return;
}



/* Entry: 109823610; end: 1098236f7;  */

undefined8
FUN_109823610(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,float *param_6,undefined8 *param_7,undefined8 *param_8)

{
  undefined8 *puVar1;
  bool bVar2;
  undefined8 uVar3;
  float fVar4;
  undefined8 auStack_90 [2];
  undefined8 auStack_80 [2];
  undefined8 auStack_70 [2];
  undefined8 auStack_60 [2];
  float fStack_50;
  float fStack_4c;
  float fStack_48;
  float fStack_44;
  
  FUN_109819220(param_1,param_3,param_5,&fStack_44,&fStack_48,auStack_60,auStack_70);
  FUN_109819220(param_2,param_4,param_5,&fStack_4c,&fStack_50,auStack_80,auStack_90);
  if ((fStack_48 < fStack_4c) || (fStack_50 < fStack_44)) {
    uVar3 = 0;
  }
  else {
    bVar2 = fStack_50 - fStack_44 <= fStack_48 - fStack_4c;
    fVar4 = fStack_48 - fStack_4c;
    if (bVar2) {
      fVar4 = fStack_50 - fStack_44;
    }
    *param_6 = fVar4;
    puVar1 = auStack_70;
    if (bVar2) {
      puVar1 = auStack_60;
    }
    uVar3 = *puVar1;
    param_7[1] = puVar1[1];
    *param_7 = uVar3;
    puVar1 = auStack_80;
    if (bVar2) {
      puVar1 = auStack_90;
    }
    uVar3 = *puVar1;
    param_8[1] = puVar1[1];
    *param_8 = uVar3;
    uVar3 = 1;
  }
  return uVar3;
}



/* Entry: 1098236f8; end: 10982416b;  */

void FUN_1098236f8(float param_1,float param_2,undefined1 (*param_3) [16],long param_4,
                  undefined1 (*param_5) [16],long param_6,long param_7,long *param_8)

{
  ulong uVar1;
  int iVar2;
  byte bVar3;
  undefined8 *puVar4;
  float *pfVar5;
  undefined1 auVar6 [12];
  float fVar7;
  float fVar8;
  float fVar9;
  long lVar10;
  int iVar11;
  uint uVar12;
  long lVar13;
  long lVar14;
  ulong uVar15;
  uint uVar16;
  float *pfVar17;
  ulong uVar18;
  uint uVar19;
  uint uVar20;
  float fVar21;
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined8 uVar29;
  float fVar32;
  float fVar33;
  undefined1 auVar30 [16];
  float fVar35;
  undefined8 uVar34;
  undefined1 auVar31 [16];
  float fVar36;
  float fVar42;
  float fVar44;
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  float fVar37;
  float fVar43;
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  float fVar45;
  float fVar46;
  float fVar47;
  float fVar48;
  float fVar49;
  float fVar51;
  undefined1 auVar50 [16];
  float fVar52;
  float fVar53;
  undefined1 auVar54 [12];
  float fVar59;
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  undefined8 uVar64;
  undefined1 auVar65 [16];
  undefined1 auVar66 [16];
  undefined1 auVar67 [16];
  undefined8 uVar68;
  undefined1 auVar69 [16];
  undefined1 auVar70 [16];
  undefined8 uStack_a0;
  undefined8 uStack_98;
  
  iVar11 = *(int *)(param_7 + 8);
  if ((*(int *)(param_7 + 4) < 0) && (iVar11 < 0)) {
    if ((*(long *)(param_7 + 0x10) != 0) && ((*(byte *)(param_7 + 0x18) & 1) != 0)) {
      FUN_109825740();
    }
    iVar11 = 0;
    *(undefined1 *)(param_7 + 0x18) = 1;
    *(undefined8 *)(param_7 + 0x10) = 0;
    *(undefined4 *)(param_7 + 8) = 0;
  }
  *(undefined4 *)(param_7 + 4) = 0;
  iVar2 = *(int *)(param_6 + 4);
  if (iVar11 < iVar2) {
    if (iVar2 == 0) {
      lVar10 = 0;
    }
    else {
      lVar10 = (long)iVar2 << 4;
      FUN_1098256f4(lVar10,0x10);
      uVar16 = *(uint *)(param_7 + 4);
      if (0 < (int)uVar16) {
        lVar13 = 0;
        do {
          puVar4 = (undefined8 *)(*(long *)(param_7 + 0x10) + lVar13);
          uVar64 = *puVar4;
          ((undefined8 *)(lVar10 + lVar13))[1] = puVar4[1];
          *(undefined8 *)(lVar10 + lVar13) = uVar64;
          lVar13 = lVar13 + 0x10;
        } while ((ulong)uVar16 * 0x10 - lVar13 != 0);
      }
    }
    if ((*(long *)(param_7 + 0x10) != 0) && ((*(byte *)(param_7 + 0x18) & 1) != 0)) {
      FUN_109825740();
    }
    *(undefined1 *)(param_7 + 0x18) = 1;
    *(long *)(param_7 + 0x10) = lVar10;
    *(int *)(param_7 + 8) = iVar2;
  }
  if (0 < (int)*(uint *)(param_4 + 0x2c)) {
    uVar15 = 0;
    auVar62 = *param_5;
    auVar66 = param_5[1];
    auVar70 = param_5[2];
    auVar54 = auVar70._0_12_;
    auVar30 = *param_3;
    pfVar17 = (float *)(*(long *)(param_4 + 0x38) + 0x28);
    fVar21 = 3.4028235e+38;
    uVar16 = 0xffffffff;
    do {
      fVar51 = *pfVar17;
      fVar49 = (float)*(undefined8 *)(pfVar17 + -2);
      auVar55._0_4_ = auVar70._0_4_ * fVar49;
      fVar43 = (float)((ulong)*(undefined8 *)(pfVar17 + -2) >> 0x20);
      auVar55._4_4_ = auVar70._4_4_ * fVar43;
      auVar55._8_4_ = auVar70._8_4_ * fVar51;
      auVar60._0_4_ = auVar62._0_4_ * fVar49;
      auVar60._4_4_ = auVar62._4_4_ * fVar43;
      auVar60._8_4_ = auVar62._8_4_ * fVar51;
      auVar60._12_4_ = auVar62._12_4_ * 0.0;
      auVar50._0_4_ = auVar66._0_4_ * fVar49;
      auVar50._4_4_ = auVar66._4_4_ * fVar43;
      auVar50._8_4_ = auVar66._8_4_ * fVar51;
      auVar50._12_4_ = auVar66._12_4_ * 0.0;
      auVar65 = NEON_ext(auVar60,auVar60,8,1);
      auVar55._12_4_ = 0;
      auVar69 = NEON_ext(auVar50,auVar50,8,1);
      auVar61 = NEON_ext(auVar55,auVar55,8,1);
      auVar65._0_4_ = auVar30._0_4_ * (auVar60._0_4_ + auVar60._4_4_ + auVar65._0_4_);
      auVar65._4_4_ = auVar30._4_4_ * (auVar50._0_4_ + auVar50._4_4_ + auVar69._0_4_);
      auVar65._8_4_ =
           auVar30._8_4_ * (auVar55._0_4_ + auVar55._4_4_ + auVar61._0_4_ + auVar61._4_4_);
      auVar65._12_4_ = auVar30._12_4_ * 0.0;
      auVar50 = NEON_ext(auVar65,auVar65,8,1);
      fVar49 = auVar65._0_4_ + auVar65._4_4_ + auVar50._0_4_;
      uVar19 = (uint)uVar15;
      if (fVar21 <= fVar49) {
        uVar19 = uVar16;
        fVar49 = fVar21;
      }
      fVar21 = fVar49;
      uVar15 = uVar15 + 1;
      pfVar17 = pfVar17 + 0xc;
      uVar16 = uVar19;
    } while (*(uint *)(param_4 + 0x2c) != uVar15);
    if (-1 < (int)uVar19) {
      lVar10 = *(long *)(param_4 + 0x38) + (ulong)uVar19 * 0x30;
      uVar16 = *(uint *)(lVar10 + 4);
      if (0 < (int)uVar16) {
        uVar15 = 0;
        lVar13 = param_6;
        do {
          param_6 = param_7;
          uVar1 = uVar15 + 1;
          lVar14 = 0;
          if (uVar1 != uVar16) {
            lVar14 = uVar15 + 1;
          }
          uVar19 = *(uint *)(lVar13 + 4);
          if (1 < (int)uVar19) {
            uVar18 = 0;
            pfVar17 = (float *)(*(long *)(param_4 + 0x18) +
                               (long)*(int *)(*(long *)(lVar10 + 0x10) + uVar15 * 4) * 0x10);
            fVar21 = *pfVar17;
            fVar49 = pfVar17[1];
            fVar43 = pfVar17[2];
            pfVar5 = (float *)(*(long *)(param_4 + 0x18) +
                              (long)*(int *)(*(long *)(lVar10 + 0x10) + lVar14 * 4) * 0x10);
            fVar36 = fVar21 - *pfVar5;
            fVar42 = fVar49 - pfVar5[1];
            fVar44 = fVar43 - pfVar5[2];
            fVar51 = *(float *)param_5[2];
            fVar33 = *(float *)(param_5[2] + 4);
            fVar35 = *(float *)(param_5[2] + 8);
            auVar38._0_4_ = fVar51 * fVar36;
            auVar38._4_4_ = fVar33 * fVar42;
            auVar38._8_4_ = fVar35 * fVar44;
            fVar37 = *(float *)*param_5;
            fVar45 = *(float *)(*param_5 + 4);
            fVar46 = *(float *)(*param_5 + 8);
            fVar47 = *(float *)(*param_5 + 0xc);
            fVar48 = *(float *)param_5[1];
            fVar7 = *(float *)(param_5[1] + 4);
            fVar8 = *(float *)(param_5[1] + 8);
            fVar9 = *(float *)(param_5[1] + 0xc);
            auVar56._0_4_ = fVar37 * fVar36;
            auVar56._4_4_ = fVar45 * fVar42;
            auVar56._8_4_ = fVar46 * fVar44;
            auVar56._12_4_ = fVar47 * 0.0;
            auVar61._0_4_ = fVar48 * fVar36;
            auVar61._4_4_ = fVar7 * fVar42;
            auVar61._8_4_ = fVar8 * fVar44;
            auVar61._12_4_ = fVar9 * 0.0;
            auVar62 = NEON_ext(auVar56,auVar56,8,1);
            auVar66 = NEON_ext(auVar61,auVar61,8,1);
            auVar38._12_4_ = 0;
            fVar44 = auVar56._0_4_ + auVar56._4_4_ + auVar62._0_4_;
            fVar32 = auVar61._0_4_ + auVar61._4_4_ + auVar66._0_4_;
            auVar62 = NEON_ext(auVar38,auVar38,8,1);
            auVar54 = *(undefined1 (*) [12])(lVar10 + 0x20);
            fVar36 = auVar54._0_4_;
            auVar63._0_4_ = fVar51 * fVar36;
            fVar42 = auVar54._4_4_;
            auVar63._4_4_ = fVar33 * fVar42;
            fVar52 = auVar54._8_4_;
            auVar63._8_4_ = fVar35 * fVar52;
            auVar67._0_4_ = fVar37 * fVar36;
            auVar67._4_4_ = fVar45 * fVar42;
            auVar67._8_4_ = fVar46 * fVar52;
            auVar67._12_4_ = fVar47 * 0.0;
            auVar57._0_4_ = fVar48 * fVar36;
            auVar57._4_4_ = fVar7 * fVar42;
            auVar57._8_4_ = fVar8 * fVar52;
            auVar57._12_4_ = fVar9 * 0.0;
            auVar66 = NEON_ext(auVar67,auVar67,8,1);
            auVar70 = NEON_ext(auVar57,auVar57,8,1);
            fVar36 = auVar38._0_4_ + auVar38._4_4_ + auVar62._0_4_ + auVar62._4_4_;
            auVar63._12_4_ = 0;
            fVar52 = auVar67._0_4_ + auVar67._4_4_ + auVar66._0_4_;
            fVar59 = auVar57._0_4_ + auVar57._4_4_ + auVar70._0_4_;
            auVar62 = NEON_ext(auVar63,auVar63,8,1);
            fVar42 = auVar63._0_4_ + auVar63._4_4_ + auVar62._0_4_ + auVar62._4_4_;
            uVar64 = NEON_ext(CONCAT44(fVar32,fVar44),(ulong)(uint)fVar36,4,1);
            uVar68 = NEON_ext(CONCAT44(fVar59,fVar52),(ulong)(uint)fVar42,4,1);
            fVar53 = fVar44 * (float)uVar68 - (float)uVar64 * fVar52;
            uVar15 = NEON_ext(CONCAT44(fVar32 * (float)((ulong)uVar68 >> 0x20) -
                                       (float)((ulong)uVar64 >> 0x20) * fVar59,fVar53),
                              CONCAT44(fVar59 * 0.0 - fVar32 * 0.0,fVar36 * fVar52 - fVar44 * fVar42
                                      ),4,1);
            auVar54._0_8_ = uVar15 ^ 0x8000000080000000;
            auVar54[8] = SUB41(fVar53,0);
            auVar54[9] = (char)((uint)fVar53 >> 8);
            auVar54[10] = (char)((uint)fVar53 >> 0x10);
            auVar54[0xb] = (byte)((uint)fVar53 >> 0x18) ^ 0x80;
            auVar62._12_3_ = 0;
            auVar62._0_12_ = auVar54;
            auVar62[0xf] = 0x80;
            auVar69._0_4_ = fVar21 * fVar37;
            auVar69._4_4_ = fVar49 * fVar45;
            auVar69._8_4_ = fVar43 * fVar46;
            auVar69._12_4_ = pfVar17[3] * fVar47;
            auVar39._0_4_ = fVar21 * fVar48;
            auVar39._4_4_ = fVar49 * fVar7;
            auVar39._8_4_ = fVar43 * fVar8;
            auVar39._12_4_ = pfVar17[3] * fVar9;
            auVar66._0_4_ = fVar21 * fVar51;
            auVar66._4_4_ = fVar49 * fVar33;
            auVar66._8_4_ = fVar43 * fVar35;
            auVar70 = NEON_ext(auVar69,auVar69,8,1);
            auVar50 = NEON_ext(auVar39,auVar39,8,1);
            auVar66._12_4_ = 0;
            auVar30 = NEON_ext(auVar66,auVar66,8,1);
            auVar70._0_4_ =
                 (auVar70._0_4_ + auVar69._0_4_ + auVar69._4_4_ + (float)*(undefined8 *)param_5[3])
                 * (float)auVar54._0_8_;
            fVar21 = (float)(auVar54._0_8_ >> 0x20);
            auVar70._4_4_ =
                 (auVar50._0_4_ + auVar39._0_4_ + auVar39._4_4_ +
                 (float)((ulong)*(undefined8 *)param_5[3] >> 0x20)) * fVar21;
            auVar70._8_4_ =
                 (auVar66._0_4_ + auVar66._4_4_ + auVar30._0_4_ + auVar30._4_4_ +
                 (float)*(undefined8 *)(param_5[3] + 8)) * auVar54._8_4_;
            auVar70._12_4_ =
                 ((float)((ulong)*(undefined8 *)(param_5[3] + 8) >> 0x20) + 0.0) * auVar62._12_4_;
            auVar66 = NEON_ext(auVar70,auVar70,8,1);
            fVar49 = auVar70._0_4_ + auVar70._4_4_ + auVar66._0_4_;
            lVar14 = *(long *)(lVar13 + 0x10) + (ulong)uVar19 * 0x10;
            uVar68 = *(undefined8 *)(lVar14 + -8);
            uVar64 = *(undefined8 *)(lVar14 + -0x10);
            auVar30._0_4_ = (float)uVar64 * (float)auVar54._0_8_;
            auVar30._4_4_ = (float)((ulong)uVar64 >> 0x20) * fVar21;
            auVar30._8_4_ = (float)uVar68 * auVar54._8_4_;
            auVar30._12_4_ = (float)((ulong)uVar68 >> 0x20) * auVar62._12_4_;
            auVar66 = NEON_ext(auVar30,auVar30,8,1);
            auVar58._8_8_ = auVar62._8_8_;
            fVar21 = (auVar30._0_4_ + auVar30._4_4_ + auVar66._0_4_) - fVar49;
            do {
              auVar27 = *(undefined1 (*) [16])(*(long *)(lVar13 + 0x10) + uVar18 * 0x10);
              fVar43 = auVar27._0_4_;
              auVar22._0_4_ = fVar43 * auVar62._0_4_;
              fVar51 = auVar27._4_4_;
              auVar22._4_4_ = fVar51 * auVar62._4_4_;
              fVar33 = auVar27._8_4_;
              auVar22._8_4_ = fVar33 * auVar62._8_4_;
              fVar35 = auVar27._12_4_;
              auVar22._12_4_ = fVar35 * auVar62._12_4_;
              auVar66 = NEON_ext(auVar22,auVar22,8,1);
              fVar37 = (auVar22._0_4_ + auVar22._4_4_ + auVar66._0_4_) - fVar49;
              uVar34 = auVar27._8_8_;
              uVar29 = auVar27._0_8_;
              fVar45 = (float)uVar64;
              fVar46 = (float)((ulong)uVar64 >> 0x20);
              fVar47 = (float)uVar68;
              fVar48 = (float)((ulong)uVar68 >> 0x20);
              if (0.0 <= fVar21) {
                if (fVar37 < 0.0) {
                  uVar12 = *(uint *)(param_6 + 4);
                  if (uVar12 == *(uint *)(param_6 + 8)) {
                    uVar20 = uVar12 << 1;
                    if (uVar12 == 0) {
                      uVar20 = 1;
                    }
                    if ((int)uVar12 < (int)uVar20) {
                      if (uVar20 == 0) {
                        uVar15 = 0;
                      }
                      else {
                        uVar15 = -(ulong)(uVar20 >> 0x1f) & 0xfffffff000000000 | (ulong)uVar20 << 4;
                        FUN_1098256f4(uVar15,0x10);
                        uVar12 = *(uint *)(param_6 + 4);
                      }
                      if (0 < (int)uVar12) {
                        lVar14 = 0;
                        do {
                          puVar4 = (undefined8 *)(*(long *)(param_6 + 0x10) + lVar14);
                          uVar64 = *puVar4;
                          ((undefined8 *)(uVar15 + lVar14))[1] = puVar4[1];
                          *(undefined8 *)(uVar15 + lVar14) = uVar64;
                          lVar14 = lVar14 + 0x10;
                        } while ((ulong)uVar12 << 4 != lVar14);
                      }
                      if ((*(long *)(param_6 + 0x10) != 0) && ((*(byte *)(param_6 + 0x18) & 1) != 0)
                         ) {
                        FUN_109825740();
                      }
                      *(undefined1 *)(param_6 + 0x18) = 1;
                      *(ulong *)(param_6 + 0x10) = uVar15;
                      *(uint *)(param_6 + 8) = uVar20;
                      uVar12 = *(uint *)(param_6 + 4);
                      auVar62._8_8_ = auVar58._8_8_;
                      auVar62._0_8_ = auVar54._0_8_;
                    }
                  }
                  fVar21 = fVar21 / (fVar21 - fVar37);
                  auVar23._0_8_ =
                       CONCAT44(fVar46 + (fVar51 - fVar46) * fVar21,
                                fVar45 + (fVar43 - fVar45) * fVar21);
                  auVar23._8_4_ = fVar47 + (fVar33 - fVar47) * fVar21;
                  auVar23._12_4_ = fVar48 + (fVar35 - fVar48) * fVar21;
                  puVar4 = (undefined8 *)(*(long *)(param_6 + 0x10) + (long)(int)uVar12 * 0x10);
                  puVar4[1] = auVar23._8_8_;
                  *puVar4 = auVar23._0_8_;
                  uVar12 = *(int *)(param_6 + 4) + 1;
                  *(uint *)(param_6 + 4) = uVar12;
                  if (uVar12 == *(uint *)(param_6 + 8)) {
                    uVar20 = uVar12 * 2;
                    if (uVar12 == 0) {
                      uVar20 = 1;
                    }
                    if ((int)uVar12 < (int)uVar20) {
                      if (uVar20 == 0) {
                        uVar15 = 0;
                      }
                      else {
                        uVar15 = -(ulong)(uVar20 >> 0x1f) & 0xfffffff000000000 | (ulong)uVar20 << 4;
                        FUN_1098256f4(uVar15,0x10);
                        uVar12 = *(uint *)(param_6 + 4);
                      }
                      if (0 < (int)uVar12) {
                        lVar14 = 0;
                        do {
                          auVar62 = *(undefined1 (*) [16])(*(long *)(param_6 + 0x10) + lVar14);
                          ((undefined8 *)(uVar15 + lVar14))[1] = auVar62._8_8_;
                          *(undefined8 *)(uVar15 + lVar14) = auVar62._0_8_;
                          lVar14 = lVar14 + 0x10;
                        } while ((ulong)uVar12 << 4 != lVar14);
                      }
                      goto LAB_109823ccc;
                    }
                  }
                  goto LAB_109823d14;
                }
              }
              else {
                if (0.0 <= fVar37) {
                  fVar21 = fVar21 / (fVar21 - fVar37);
                  auVar27._0_8_ =
                       CONCAT44(fVar46 + (fVar51 - fVar46) * fVar21,
                                fVar45 + (fVar43 - fVar45) * fVar21);
                  auVar27._8_4_ = fVar47 + (fVar33 - fVar47) * fVar21;
                  auVar27._12_4_ = fVar48 + (fVar35 - fVar48) * fVar21;
                  uVar12 = *(uint *)(param_6 + 4);
                  if (uVar12 == *(uint *)(param_6 + 8)) {
                    uVar20 = uVar12 << 1;
                    if (uVar12 == 0) {
                      uVar20 = 1;
                    }
                    if ((int)uVar12 < (int)uVar20) {
                      if (uVar20 == 0) {
                        uVar15 = 0;
                      }
                      else {
                        uVar15 = -(ulong)(uVar20 >> 0x1f) & 0xfffffff000000000 | (ulong)uVar20 << 4;
                        FUN_1098256f4(uVar15,0x10);
                        auVar27._8_8_ = auVar27._8_8_;
                        uVar12 = *(uint *)(param_6 + 4);
                      }
                      if (0 < (int)uVar12) {
                        lVar14 = 0;
                        do {
                          auVar62 = *(undefined1 (*) [16])(*(long *)(param_6 + 0x10) + lVar14);
                          ((undefined8 *)(uVar15 + lVar14))[1] = auVar62._8_8_;
                          *(undefined8 *)(uVar15 + lVar14) = auVar62._0_8_;
                          lVar14 = lVar14 + 0x10;
                        } while ((ulong)uVar12 << 4 != lVar14);
                      }
                      if (*(long *)(param_6 + 0x10) != 0) {
                        bVar3 = *(byte *)(param_6 + 0x18);
                        goto joined_r0x000109823c98;
                      }
                      goto LAB_109823d04;
                    }
                  }
                }
                else {
                  uVar12 = *(uint *)(param_6 + 4);
                  if (uVar12 == *(uint *)(param_6 + 8)) {
                    uVar20 = uVar12 << 1;
                    if (uVar12 == 0) {
                      uVar20 = 1;
                    }
                    if ((int)uVar12 < (int)uVar20) {
                      if (uVar20 == 0) {
                        uVar15 = 0;
                      }
                      else {
                        uVar15 = -(ulong)(uVar20 >> 0x1f) & 0xfffffff000000000 | (ulong)uVar20 << 4;
                        FUN_1098256f4(uVar15,0x10);
                        uVar12 = *(uint *)(param_6 + 4);
                      }
                      if (0 < (int)uVar12) {
                        lVar14 = 0;
                        do {
                          auVar62 = *(undefined1 (*) [16])(*(long *)(param_6 + 0x10) + lVar14);
                          ((undefined8 *)(uVar15 + lVar14))[1] = auVar62._8_8_;
                          *(undefined8 *)(uVar15 + lVar14) = auVar62._0_8_;
                          lVar14 = lVar14 + 0x10;
                        } while ((ulong)uVar12 << 4 != lVar14);
                      }
LAB_109823ccc:
                      if (*(long *)(param_6 + 0x10) != 0) {
                        bVar3 = *(byte *)(param_6 + 0x18);
joined_r0x000109823c98:
                        if ((bVar3 & 1) != 0) {
                          FUN_109825740();
                        }
                      }
LAB_109823d04:
                      auVar58._0_8_ = auVar54._0_8_;
                      *(undefined1 *)(param_6 + 0x18) = 1;
                      *(ulong *)(param_6 + 0x10) = uVar15;
                      *(uint *)(param_6 + 8) = uVar20;
                      uVar12 = *(uint *)(param_6 + 4);
                      auVar62 = auVar58;
                    }
                  }
                }
LAB_109823d14:
                puVar4 = (undefined8 *)(*(long *)(param_6 + 0x10) + (long)(int)uVar12 * 0x10);
                puVar4[1] = auVar27._8_8_;
                *puVar4 = auVar27._0_8_;
                *(int *)(param_6 + 4) = *(int *)(param_6 + 4) + 1;
              }
              uVar18 = uVar18 + 1;
              uVar64 = uVar29;
              uVar68 = uVar34;
              fVar21 = fVar37;
            } while (uVar18 != uVar19);
            uVar19 = *(uint *)(lVar13 + 4);
          }
          if (((int)uVar19 < 0) && (*(int *)(lVar13 + 8) < 0)) {
            if ((*(long *)(lVar13 + 0x10) != 0) && (*(char *)(lVar13 + 0x18) == '\x01')) {
              FUN_109825740();
            }
            *(undefined1 *)(lVar13 + 0x18) = 1;
            *(undefined8 *)(lVar13 + 0x10) = 0;
            *(undefined4 *)(lVar13 + 8) = 0;
          }
          *(undefined4 *)(lVar13 + 4) = 0;
          uVar15 = uVar1;
          param_7 = lVar13;
          lVar13 = param_6;
        } while (uVar1 != uVar16);
        auVar62 = *param_5;
        auVar66 = param_5[1];
        auVar54 = SUB1612(param_5[2],0);
      }
      iVar11 = *(int *)(param_6 + 4);
      if (0 < iVar11) {
        lVar13 = 0;
        auVar6 = *(undefined1 (*) [12])(lVar10 + 0x20);
        fVar21 = auVar6._0_4_;
        auVar31._0_4_ = fVar21 * auVar54._0_4_;
        fVar49 = auVar6._4_4_;
        auVar31._4_4_ = fVar49 * auVar54._4_4_;
        fVar43 = auVar6._8_4_;
        auVar31._8_4_ = fVar43 * auVar54._8_4_;
        fVar51 = *(float *)(lVar10 + 0x2c);
        auVar24._0_4_ = fVar21 * auVar62._0_4_;
        auVar24._4_4_ = fVar49 * auVar62._4_4_;
        auVar24._8_4_ = fVar43 * auVar62._8_4_;
        auVar24._12_4_ = auVar62._12_4_ * 0.0;
        auVar28._0_4_ = fVar21 * auVar66._0_4_;
        auVar28._4_4_ = fVar49 * auVar66._4_4_;
        auVar28._8_4_ = fVar43 * auVar66._8_4_;
        auVar28._12_4_ = auVar66._12_4_ * 0.0;
        auVar62 = NEON_ext(auVar24,auVar24,8,1);
        auVar66 = NEON_ext(auVar28,auVar28,8,1);
        auVar31._12_4_ = 0;
        fVar49 = auVar24._0_4_ + auVar24._4_4_ + auVar62._0_4_;
        fVar43 = auVar28._0_4_ + auVar28._4_4_ + auVar66._0_4_;
        auVar40._0_8_ = CONCAT44(fVar43,fVar49);
        auVar62 = NEON_ext(auVar31,auVar31,8,1);
        fVar21 = auVar31._0_4_ + auVar31._4_4_ + auVar62._0_4_ + auVar62._4_4_;
        auVar40._8_4_ = fVar21;
        auVar40._12_4_ = 0;
        auVar25._0_4_ = fVar49 * *(float *)param_5[3];
        auVar25._4_4_ = fVar43 * *(float *)(param_5[3] + 4);
        auVar25._8_4_ = fVar21 * *(float *)(param_5[3] + 8);
        auVar25._12_4_ = *(float *)(param_5[3] + 0xc) * 0.0;
        auVar62 = NEON_ext(auVar25,auVar25,8,1);
        auVar41 = auVar40;
        do {
          auVar66 = *(undefined1 (*) [16])(*(long *)(param_6 + 0x10) + lVar13 * 0x10);
          auVar26._0_4_ = auVar41._0_4_ * auVar66._0_4_;
          auVar26._4_4_ = auVar41._4_4_ * auVar66._4_4_;
          auVar26._8_4_ = auVar41._8_4_ * auVar66._8_4_;
          auVar26._12_4_ = auVar41._12_4_ * auVar66._12_4_;
          auVar70 = NEON_ext(auVar26,auVar26,8,1);
          fVar43 = (fVar51 - (auVar25._0_4_ + auVar25._4_4_ + auVar62._0_4_)) +
                   auVar26._0_4_ + auVar26._4_4_ + auVar70._0_4_;
          fVar49 = param_1;
          if (param_1 < fVar43) {
            fVar49 = fVar43;
          }
          if (fVar49 <= param_2) {
            uStack_98 = auVar66._8_8_;
            uStack_a0 = auVar66._0_8_;
            (**(code **)(*param_8 + 0x20))(param_8,param_3,&uStack_a0);
            auVar41._8_4_ = fVar21;
            auVar41._0_8_ = auVar40._0_8_;
            auVar41._12_4_ = 0;
            iVar11 = *(int *)(param_6 + 4);
          }
          lVar13 = lVar13 + 1;
        } while (lVar13 < iVar11);
      }
    }
  }
  return;
}



/* Entry: 10982416c; end: 109824347;  */

undefined8 FUN_10982416c(long param_1,float *param_2,uint *param_3,float *param_4)

{
  uint uVar1;
  float fVar2;
  float fVar3;
  bool bVar4;
  bool bVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  float fVar14;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  float fVar28;
  float fVar29;
  float fVar30;
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  
  fVar18 = *param_4;
  fVar2 = param_4[1];
  fVar3 = param_4[2];
  fVar17 = (float)*(undefined8 *)(param_4 + 4);
  auVar10._0_4_ = fVar17 - fVar18;
  fVar19 = (float)((ulong)*(undefined8 *)(param_4 + 4) >> 0x20);
  auVar10._4_4_ = fVar19 - fVar2;
  auVar10._8_4_ = (float)*(undefined8 *)(param_4 + 6) - fVar3;
  auVar10._12_4_ = 0;
  auVar33._0_4_ = param_4[8] - fVar18;
  auVar33._4_4_ = param_4[9] - fVar2;
  auVar33._8_4_ = param_4[10] - fVar3;
  auVar33._12_4_ = 0;
  auVar15 = NEON_ext(auVar10,auVar10,0xc,1);
  auVar16 = NEON_ext(auVar15,auVar10,8,1);
  auVar15 = NEON_ext(auVar33,auVar33,0xc,1);
  auVar21 = NEON_ext(auVar15,auVar33,8,1);
  auVar15._0_4_ = auVar21._0_4_ * auVar10._0_4_ - auVar16._0_4_ * auVar33._0_4_;
  auVar15._4_4_ = auVar21._4_4_ * auVar10._4_4_ - auVar16._4_4_ * auVar33._4_4_;
  auVar15._8_4_ = auVar21._8_4_ * auVar10._8_4_ - auVar16._8_4_ * auVar33._8_4_;
  auVar15._12_4_ = auVar21._12_4_ * 0.0 - auVar16._12_4_ * 0.0;
  auVar10 = NEON_ext(auVar15,auVar15,0xc,1);
  auVar10 = NEON_ext(auVar10,auVar15,8,1);
  fVar6 = auVar10._0_4_;
  auVar16._0_4_ = fVar18 * fVar6;
  fVar7 = auVar10._4_4_;
  auVar16._4_4_ = fVar2 * fVar7;
  fVar8 = auVar10._8_4_;
  auVar16._8_4_ = fVar3 * fVar8;
  auVar16._12_4_ = param_4[3] * 0.0;
  auVar10 = NEON_ext(auVar16,auVar16,8,1);
  fVar14 = auVar16._0_4_ + auVar16._4_4_ + auVar10._0_4_;
  fVar28 = *(float *)(param_1 + 0x10);
  fVar29 = *(float *)(param_1 + 0x14);
  fVar30 = *(float *)(param_1 + 0x18);
  auVar21._0_4_ = fVar28 * fVar6;
  auVar21._4_4_ = fVar29 * fVar7;
  auVar21._8_4_ = fVar30 * fVar8;
  auVar21._12_4_ = *(float *)(param_1 + 0x1c) * 0.0;
  auVar10 = NEON_ext(auVar21,auVar21,8,1);
  fVar9 = (auVar21._0_4_ + auVar21._4_4_ + auVar10._0_4_) - fVar14;
  auVar22._0_4_ = *(float *)(param_1 + 0x20) * fVar6;
  auVar22._4_4_ = *(float *)(param_1 + 0x24) * fVar7;
  auVar22._8_4_ = *(float *)(param_1 + 0x28) * fVar8;
  auVar22._12_4_ = *(float *)(param_1 + 0x2c) * 0.0;
  auVar10 = NEON_ext(auVar22,auVar22,8,1);
  fVar14 = (auVar22._0_4_ + auVar22._4_4_ + auVar10._0_4_) - fVar14;
  if (((fVar9 * fVar14 < 0.0) && (0.0 < fVar9 || (*(uint *)(param_1 + 0x30) & 1) == 0)) &&
     (fVar14 = fVar9 / (fVar9 - fVar14), fVar14 < *(float *)(param_1 + 0x34))) {
    auVar23._0_4_ = fVar6 * fVar6;
    auVar23._4_4_ = fVar7 * fVar7;
    auVar23._8_4_ = fVar8 * fVar8;
    auVar23._12_4_ = 0;
    auVar10 = NEON_ext(auVar23,auVar23,8,1);
    fVar20 = auVar10._0_4_ + auVar23._0_4_ + auVar23._4_4_;
    fVar28 = fVar28 + (*(float *)(param_1 + 0x20) - fVar28) * fVar14;
    fVar29 = fVar29 + (*(float *)(param_1 + 0x24) - fVar29) * fVar14;
    fVar30 = fVar30 + (*(float *)(param_1 + 0x28) - fVar30) * fVar14;
    auVar24._0_4_ = fVar18 - fVar28;
    auVar24._4_4_ = fVar2 - fVar29;
    auVar24._8_4_ = fVar3 - fVar30;
    auVar24._12_4_ = 0;
    auVar25._0_4_ = fVar17 - fVar28;
    auVar25._4_4_ = fVar19 - fVar29;
    auVar25._8_4_ = (float)*(undefined8 *)(param_4 + 6) - fVar30;
    auVar25._12_4_ = 0;
    auVar10 = NEON_ext(auVar24,auVar24,0xc,1);
    auVar10 = NEON_ext(auVar10,auVar24,8,1);
    auVar15 = NEON_ext(auVar25,auVar25,0xc,1);
    auVar15 = NEON_ext(auVar15,auVar25,8,1);
    auVar31._0_4_ = auVar15._0_4_ * auVar24._0_4_ - auVar10._0_4_ * auVar25._0_4_;
    auVar31._4_4_ = auVar15._4_4_ * auVar24._4_4_ - auVar10._4_4_ * auVar25._4_4_;
    auVar31._8_4_ = auVar15._8_4_ * auVar24._8_4_ - auVar10._8_4_ * auVar25._8_4_;
    auVar31._12_4_ = auVar15._12_4_ * 0.0 - auVar10._12_4_ * 0.0;
    auVar33 = NEON_ext(auVar31,auVar31,0xc,1);
    auVar33 = NEON_ext(auVar33,auVar31,8,1);
    fVar18 = fVar20 * -0.0001;
    auVar32._0_4_ = fVar6 * auVar33._0_4_;
    auVar32._4_4_ = fVar7 * auVar33._4_4_;
    auVar32._8_4_ = fVar8 * auVar33._8_4_;
    auVar32._12_4_ = 0;
    auVar33 = NEON_ext(auVar32,auVar32,8,1);
    if (fVar18 <= auVar33._0_4_ + auVar32._0_4_ + auVar32._4_4_) {
      auVar11._0_4_ = param_4[8] - fVar28;
      auVar11._4_4_ = param_4[9] - fVar29;
      auVar11._8_4_ = param_4[10] - fVar30;
      auVar11._12_4_ = 0;
      auVar33 = NEON_ext(auVar11,auVar11,0xc,1);
      auVar33 = NEON_ext(auVar33,auVar11,8,1);
      auVar26._0_4_ = auVar33._0_4_ * auVar25._0_4_ - auVar15._0_4_ * auVar11._0_4_;
      auVar26._4_4_ = auVar33._4_4_ * auVar25._4_4_ - auVar15._4_4_ * auVar11._4_4_;
      auVar26._8_4_ = auVar33._8_4_ * auVar25._8_4_ - auVar15._8_4_ * auVar11._8_4_;
      auVar26._12_4_ = auVar33._12_4_ * 0.0 - auVar15._12_4_ * 0.0;
      auVar15 = NEON_ext(auVar26,auVar26,0xc,1);
      auVar15 = NEON_ext(auVar15,auVar26,8,1);
      auVar27._0_4_ = fVar6 * auVar15._0_4_;
      auVar27._4_4_ = fVar7 * auVar15._4_4_;
      auVar27._8_4_ = fVar8 * auVar15._8_4_;
      auVar27._12_4_ = 0;
      auVar15 = NEON_ext(auVar27,auVar27,8,1);
      if (fVar18 <= auVar15._0_4_ + auVar27._0_4_ + auVar27._4_4_) {
        auVar12._0_4_ = auVar10._0_4_ * auVar11._0_4_ - auVar33._0_4_ * auVar24._0_4_;
        auVar12._4_4_ = auVar10._4_4_ * auVar11._4_4_ - auVar33._4_4_ * auVar24._4_4_;
        auVar12._8_4_ = auVar10._8_4_ * auVar11._8_4_ - auVar33._8_4_ * auVar24._8_4_;
        auVar12._12_4_ = auVar10._12_4_ * 0.0 - auVar33._12_4_ * 0.0;
        auVar10 = NEON_ext(auVar12,auVar12,0xc,1);
        auVar10 = NEON_ext(auVar10,auVar12,8,1);
        auVar13._0_4_ = fVar6 * auVar10._0_4_;
        auVar13._4_4_ = fVar7 * auVar10._4_4_;
        auVar13._8_4_ = fVar8 * auVar10._8_4_;
        auVar13._12_4_ = 0;
        auVar10 = NEON_ext(auVar13,auVar13,8,1);
        if (fVar18 <= auVar10._0_4_ + auVar13._0_4_ + auVar13._4_4_) {
          bVar4 = false;
          bVar5 = true;
          if ((*(uint *)(param_1 + 0x30) & 2) == 0) {
            bVar4 = false;
            bVar5 = true;
            if (!NAN(fVar9)) {
              bVar4 = fVar9 == 0.0;
              bVar5 = 0.0 <= fVar9;
            }
          }
          fVar18 = 1.0 / SQRT(fVar20);
          fVar6 = fVar6 * fVar18;
          fVar7 = fVar7 * fVar18;
          fVar8 = fVar8 * fVar18;
          fVar18 = fVar18 * 0.0;
          uVar1 = -(uint)(!bVar5 || bVar4);
          *param_2 = fVar14;
          param_3[2] = (uint)fVar8 ^ ((uint)fVar8 ^ (uint)-fVar8) & uVar1;
          param_3[3] = (uint)fVar18 ^ ((uint)fVar18 ^ (uint)-fVar18) & uVar1;
          *param_3 = (uint)fVar6 ^ ((uint)fVar6 ^ (uint)-fVar6) & uVar1;
          param_3[1] = (uint)fVar7 ^ ((uint)fVar7 ^ (uint)-fVar7) & uVar1;
          return 1;
        }
      }
    }
  }
  return 0;
}



/* Entry: 109824348; end: 1098243b3;  */

void FUN_109824348(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long *plVar1;
  undefined1 auStack_50 [28];
  undefined4 uStack_34;
  
  plVar1 = param_1;
  FUN_10982416c(param_1,&uStack_34,auStack_50,param_2);
  if ((int)plVar1 != 0) {
    (**(code **)(*param_1 + 0x18))(param_1,auStack_50,param_3,param_4);
    *(undefined4 *)((long)param_1 + 0x34) = uStack_34;
  }
  return;
}



/* Entry: 1098243b4; end: 109824577;  */

undefined ***
FUN_1098243b4(long param_1,float *param_2,undefined8 *param_3,undefined8 *param_4,
             undefined8 *param_5)

{
  undefined ***pppuVar1;
  undefined ***pppuVar2;
  long lVar3;
  long lVar4;
  undefined ***pppuVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auStack_3d0 [16];
  undefined1 auStack_3c0 [28];
  undefined4 uStack_3a4;
  long lStack_3a0;
  float *pfStack_398;
  undefined8 *puStack_390;
  undefined ***pppuStack_388;
  undefined1 *puStack_380;
  code *pcStack_378;
  undefined **ppuStack_368;
  undefined1 *puStack_360;
  undefined ***pppuStack_358;
  undefined8 uStack_350;
  undefined ***pppuStack_348;
  undefined8 uStack_340;
  undefined **ppuStack_338;
  undefined **ppuStack_330;
  undefined4 uStack_328;
  undefined8 uStack_320;
  undefined8 uStack_318;
  undefined8 uStack_310;
  undefined8 uStack_308;
  undefined4 uStack_2f0;
  undefined8 uStack_2e8;
  undefined8 uStack_2e0;
  undefined8 uStack_2d8;
  undefined8 uStack_2d0;
  undefined8 uStack_2c8;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  undefined **appuStack_2b0 [18];
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  float fStack_200;
  undefined8 uStack_1f8;
  undefined4 uStack_1f0;
  undefined8 uStack_1ec;
  undefined1 auStack_1e0 [320];
  undefined4 uStack_a0;
  undefined1 uStack_80;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_318 = 0xffffffffffffffff;
  uStack_308 = 0x3f800000;
  uStack_310 = 0x3f8000003f800000;
  pppuStack_348 = &ppuStack_330;
  uStack_2d8 = param_5[1];
  uStack_2e0 = *param_5;
  uStack_2d0 = param_5[2];
  uStack_2c8 = param_5[3];
  uStack_2b8 = param_5[5];
  uStack_2c0 = param_5[4];
  uStack_2f0 = *(undefined4 *)(param_1 + 0xd4);
  uStack_1f0 = *(undefined4 *)(param_1 + 0xd8);
  uStack_320 = 0;
  uStack_2e8 = 0;
  uStack_328 = 1;
  uStack_a0 = 0x38d1b717;
  uStack_80 = 0;
  ppuStack_338 = &PTR_FUN_110b14148;
  ppuStack_330 = &PTR_DAT_110b12890;
  uStack_350 = *(undefined8 *)(param_1 + 8);
  puStack_360 = auStack_1e0;
  ppuStack_368 = &PTR_DAT_110b14068;
  pppuStack_358 = &ppuStack_338;
  uStack_340 = 0;
  appuStack_2b0[0] = &PTR_DAT_110b12390;
  uStack_1f8 = 0;
  uStack_1ec = 0x38d1b71700000020;
  fStack_200 = 1.0;
  pppuVar5 = &ppuStack_368;
  lVar3 = param_1 + 0x50;
  lVar4 = param_1 + 0x90;
  FUN_10981d578(pppuVar5,param_1 + 0x10,lVar3,lVar4,param_1 + 0x90,appuStack_2b0);
  if ((int)pppuVar5 != 0) {
    fVar6 = (float)uStack_220;
    auVar11._0_4_ = fVar6 * fVar6;
    fVar7 = (float)((ulong)uStack_220 >> 0x20);
    auVar11._4_4_ = fVar7 * fVar7;
    fVar8 = (float)uStack_218;
    auVar11._8_4_ = fVar8 * fVar8;
    fVar9 = (float)((ulong)uStack_218 >> 0x20);
    auVar11._12_4_ = fVar9 * fVar9;
    auVar12 = NEON_ext(auVar11,auVar11,8,1);
    fVar10 = auVar11._0_4_ + auVar11._4_4_ + auVar12._0_4_;
    if ((0.0001 < fVar10) && (fStack_200 < *(float *)(param_1 + 0xd0))) {
      fVar10 = 1.0 / SQRT(fVar10);
      uStack_220 = CONCAT44(fVar7 * fVar10,fVar6 * fVar10);
      uStack_218 = CONCAT44(fVar9 * fVar10,fVar8 * fVar10);
      *param_2 = fStack_200;
      param_3[1] = uStack_218;
      *param_3 = uStack_220;
      param_4[1] = uStack_208;
      *param_4 = uStack_210;
      pppuVar5 = (undefined ***)0x1;
      goto LAB_109824524;
    }
  }
  pppuVar5 = (undefined ***)0x0;
LAB_109824524:
  pppuVar1 = &ppuStack_330;
  FUN_10981b858();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return pppuVar5;
  }
  ___stack_chk_fail();
  FUN_10981b858(&ppuStack_330);
  pppuVar5 = pppuVar1;
  __Unwind_Resume();
  pcStack_378 = FUN_109824578;
  pppuVar2 = pppuVar5;
  lStack_3a0 = param_1;
  pfStack_398 = param_2;
  puStack_390 = param_3;
  pppuStack_388 = pppuVar1;
  puStack_380 = &stack0xfffffffffffffff0;
  FUN_1098243b4();
  if ((int)pppuVar2 != 0) {
    (*(code *)(*pppuVar5)[3])(uStack_3a4,pppuVar5,auStack_3c0,auStack_3d0,lVar3,lVar4);
    pppuVar2 = pppuVar5;
  }
  return pppuVar2;
}



/* Entry: 109824578; end: 1098245e7;  */

void FUN_109824578(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long *plVar1;
  undefined1 auStack_60 [16];
  undefined1 auStack_50 [28];
  undefined4 uStack_34;
  
  plVar1 = param_1;
  FUN_1098243b4(param_1,&uStack_34,auStack_50,auStack_60,param_2);
  if ((int)plVar1 != 0) {
    (**(code **)(*param_1 + 0x18))(uStack_34,param_1,auStack_50,auStack_60,param_3,param_4);
  }
  return;
}



/* Entry: 1098245e8; end: 109824b37;  */

undefined8
FUN_1098245e8(long param_1,float *param_2,long param_3,float *param_4,long param_5,long param_6)

{
  int iVar1;
  undefined8 uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined1 auVar11 [12];
  int *piVar12;
  undefined8 uVar13;
  undefined4 *puVar14;
  long lVar15;
  int *piVar16;
  int iVar17;
  float fVar18;
  float fVar19;
  float fVar27;
  undefined1 auVar20 [12];
  undefined1 auVar22 [16];
  undefined1 auVar21 [12];
  float fVar28;
  float fVar29;
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  float fVar30;
  float fVar35;
  float fVar36;
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  float fVar37;
  float fVar38;
  float fVar45;
  float fVar46;
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  float fVar47;
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  float fVar50;
  float fVar52;
  float fVar53;
  undefined1 auVar51 [16];
  float fVar54;
  float fVar55;
  float fVar58;
  float fVar59;
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  ulong uVar60;
  undefined8 uVar61;
  undefined8 uVar62;
  ulong uStack_200;
  undefined8 uStack_1f8;
  float fStack_1d8;
  float fStack_1c8;
  float fStack_1b8;
  float fStack_150;
  float fStack_14c;
  float fStack_144;
  float fStack_140;
  float fStack_13c;
  float fStack_134;
  float fStack_130;
  float fStack_12c;
  float fStack_100;
  float fStack_fc;
  float fStack_f8;
  float fStack_f4;
  float fStack_f0;
  float fStack_ec;
  float fStack_e8;
  float fStack_e4;
  float fStack_c0;
  float fStack_bc;
  float fStack_b8;
  float fStack_b4;
  float fStack_b0;
  float fStack_ac;
  float fStack_a8;
  float fStack_a4;
  float fStack_a0;
  float fStack_9c;
  float fStack_98;
  float fStack_94;
  undefined8 uStack_90;
  undefined8 uStack_88;
  
  puVar14 = *(undefined4 **)(param_1 + 8);
  *(undefined1 *)(puVar14 + 0x51) = 0;
  *puVar14 = 0;
  *(undefined1 *)(puVar14 + 0x60) = 1;
  *(undefined8 *)(puVar14 + 0x4e) = 0x5d5e0b6b;
  *(undefined8 *)(puVar14 + 0x4c) = 0x5d5e0b6b5d5e0b6b;
  *(undefined1 *)(puVar14 + 0x5d) = 0;
  *(undefined8 *)(puVar14 + 0x5b) = 0;
  *(undefined8 *)(puVar14 + 0x59) = 0;
  *(byte *)(puVar14 + 0x58) = *(byte *)(puVar14 + 0x58) & 0xf0;
  fVar19 = *(float *)*(undefined1 (*) [12])(param_2 + 8);
  fVar38 = param_2[9];
  fVar45 = param_2[10];
  auVar11 = *(undefined1 (*) [12])(param_2 + 8);
  fStack_f0 = param_2[0xc];
  fStack_ec = param_2[0xd];
  fStack_e8 = param_2[0xe];
  fStack_e4 = param_2[0xf];
  uVar13 = *(undefined8 *)(param_4 + 8);
  uVar2 = *(undefined8 *)(param_4 + 10);
  fStack_100 = param_4[0xc];
  fStack_fc = param_4[0xd];
  fStack_f8 = param_4[0xe];
  fStack_f4 = param_4[0xf];
  fVar46 = *param_2;
  fVar47 = param_2[1];
  fVar3 = param_2[2];
  fVar4 = param_2[3];
  fVar5 = param_2[4];
  fVar6 = param_2[5];
  fVar7 = param_2[6];
  fVar8 = param_2[7];
  uVar62 = *(undefined8 *)(param_4 + 2);
  uVar61 = *(undefined8 *)param_4;
  uVar9 = *(undefined8 *)(param_4 + 4);
  uVar10 = *(undefined8 *)(param_4 + 6);
  fVar30 = (*(float *)(param_3 + 0x30) - fStack_f0) - (*(float *)(param_5 + 0x30) - fStack_100);
  fVar35 = (*(float *)(param_3 + 0x34) - fStack_ec) - (*(float *)(param_5 + 0x34) - fStack_fc);
  fVar36 = (*(float *)(param_3 + 0x38) - fStack_e8) - (*(float *)(param_5 + 0x38) - fStack_f8);
  auVar20._0_8_ =
       CONCAT17((char)((uint)fVar35 >> 0x18),
                CONCAT16((char)((uint)fVar35 >> 0x10),
                         CONCAT15((char)((uint)fVar35 >> 8),CONCAT14(SUB41(fVar35,0),fVar30)))) ^
       0x8000000080000000;
  auVar20[8] = SUB41(fVar36,0);
  auVar20[9] = (char)((uint)fVar36 >> 8);
  auVar20[10] = (char)((uint)fVar36 >> 0x10);
  auVar20[0xb] = (byte)((uint)fVar36 >> 0x18) ^ 0x80;
  fVar37 = (float)auVar20._0_8_;
  fVar18 = (float)(auVar20._0_8_ >> 0x20);
  fVar27 = auVar20._8_4_;
  fStack_a0 = fVar19 * fVar27 + fVar46 * fVar37 + fVar5 * fVar18;
  fStack_9c = fVar38 * fVar27 + fVar47 * fVar37 + fVar6 * fVar18;
  fStack_98 = fVar45 * fVar27 + fVar3 * fVar37 + fVar7 * fVar18;
  fStack_94 = fVar27 * 0.0 + fVar37 * 0.0 + fVar18 * 0.0;
  (**(code **)(**(long **)(param_1 + 0x10) + 0x80))
            (&uStack_90,*(long **)(param_1 + 0x10),&fStack_a0);
  auVar31._0_4_ = *param_2 * (float)uStack_90;
  auVar31._4_4_ = param_2[1] * uStack_90._4_4_;
  auVar31._8_4_ = param_2[2] * (float)uStack_88;
  auVar31._12_4_ = param_2[3] * uStack_88._4_4_;
  auVar39._0_4_ = (float)uStack_90 * param_2[4];
  auVar39._4_4_ = uStack_90._4_4_ * param_2[5];
  auVar39._8_4_ = (float)uStack_88 * param_2[6];
  auVar39._12_4_ = uStack_88._4_4_ * param_2[7];
  auVar43 = *(undefined1 (*) [16])(param_2 + 0xc);
  auVar22._0_4_ = (float)uStack_90 * param_2[8];
  auVar22._4_4_ = uStack_90._4_4_ * param_2[9];
  auVar22._8_4_ = (float)uStack_88 * param_2[10];
  auVar48 = NEON_ext(auVar31,auVar31,8,1);
  auVar56 = NEON_ext(auVar39,auVar39,8,1);
  auVar22._12_4_ = 0;
  auVar40 = NEON_ext(auVar22,auVar22,8,1);
  fStack_a0 = *param_4 * fVar30 + param_4[4] * fVar35 + param_4[8] * fVar36;
  fStack_9c = param_4[1] * fVar30 + param_4[5] * fVar35 + param_4[9] * fVar36;
  fStack_98 = param_4[2] * fVar30 + param_4[6] * fVar35 + param_4[10] * fVar36;
  fStack_94 = fVar30 * 0.0 + fVar35 * 0.0 + fVar36 * 0.0;
  (**(code **)(**(long **)(param_1 + 0x18) + 0x80))
            (&uStack_90,*(long **)(param_1 + 0x18),&fStack_a0);
  auVar32._0_4_ = *param_4 * (float)uStack_90;
  auVar32._4_4_ = param_4[1] * uStack_90._4_4_;
  auVar32._8_4_ = param_4[2] * (float)uStack_88;
  auVar32._12_4_ = param_4[3] * uStack_88._4_4_;
  auVar41._0_4_ = (float)uStack_90 * param_4[4];
  auVar41._4_4_ = uStack_90._4_4_ * param_4[5];
  auVar41._8_4_ = (float)uStack_88 * param_4[6];
  auVar41._12_4_ = uStack_88._4_4_ * param_4[7];
  auVar51._0_4_ = (float)uStack_90 * param_4[8];
  auVar51._4_4_ = uStack_90._4_4_ * param_4[9];
  auVar51._8_4_ = (float)uStack_88 * param_4[10];
  auVar49 = NEON_ext(auVar32,auVar32,8,1);
  auVar57 = NEON_ext(auVar41,auVar41,8,1);
  auVar51._12_4_ = 0;
  auVar42 = NEON_ext(auVar51,auVar51,8,1);
  auVar48._0_4_ =
       (auVar31._0_4_ + auVar31._4_4_ + auVar48._0_4_ + auVar43._0_4_) -
       (auVar32._0_4_ + auVar32._4_4_ + auVar49._0_4_ + param_4[0xc]);
  auVar48._4_4_ =
       (auVar39._0_4_ + auVar39._4_4_ + auVar56._0_4_ + auVar43._4_4_) -
       (auVar41._0_4_ + auVar41._4_4_ + auVar57._0_4_ + param_4[0xd]);
  auVar48._8_4_ =
       (auVar22._0_4_ + auVar22._4_4_ + auVar40._0_4_ + auVar40._4_4_ + auVar43._8_4_) -
       (auVar51._0_4_ + auVar51._4_4_ + auVar42._0_4_ + auVar42._4_4_ + param_4[0xe]);
  auVar48._12_4_ = 0;
  auVar43._0_4_ = auVar48._0_4_ * auVar48._0_4_;
  auVar43._4_4_ = auVar48._4_4_ * auVar48._4_4_;
  auVar43._8_4_ = auVar48._8_4_ * auVar48._8_4_;
  auVar43._12_4_ = 0;
  auVar22 = NEON_ext(auVar43,auVar43,8,1);
  fVar37 = 0.0;
  uStack_1f8 = 0;
  uStack_200 = 0;
  if (*(float *)(param_6 + 200) < auVar43._0_4_ + auVar43._4_4_ + auVar22._0_4_) {
    fStack_140 = (float)uVar61;
    fStack_13c = (float)((ulong)uVar61 >> 0x20);
    fStack_150 = (float)uVar9;
    fStack_14c = (float)((ulong)uVar9 >> 0x20);
    fStack_130 = (float)uVar13;
    fStack_12c = (float)((ulong)uVar13 >> 0x20);
    iVar17 = *(int *)(param_6 + 0xc4) + 1;
    uStack_1f8 = 0;
    uStack_200 = 0;
    fVar37 = 0.0;
    do {
      iVar17 = iVar17 + -1;
      if (iVar17 == 0) break;
      auVar21._0_8_ = auVar48._0_8_ ^ 0x8000000080000000;
      auVar21[8] = auVar48[8];
      auVar21[9] = auVar48[9];
      auVar21[10] = auVar48[10];
      auVar21[0xb] = auVar48[0xb] ^ 0x80;
      fVar18 = (float)auVar21._0_8_;
      fVar27 = (float)(auVar21._0_8_ >> 0x20);
      fStack_b8 = auVar48._8_4_;
      fStack_b4 = auVar48._12_4_;
      fStack_c0 = auVar48._0_4_;
      fStack_bc = auVar48._4_4_;
      fVar28 = auVar21._8_4_;
      fStack_b0 = auVar11._0_4_ * fVar28 + fVar46 * fVar18 + fVar5 * fVar27;
      fStack_ac = auVar11._4_4_ * fVar28 + fVar47 * fVar18 + fVar6 * fVar27;
      fStack_a8 = auVar11._8_4_ * fVar28 + fVar3 * fVar18 + fVar7 * fVar27;
      fStack_a4 = fVar28 * 0.0 + fVar18 * 0.0 + fVar27 * 0.0;
      (**(code **)(**(long **)(param_1 + 0x10) + 0x80))
                (&fStack_a0,*(long **)(param_1 + 0x10),&fStack_b0);
      auVar49._0_4_ = fVar46 * fStack_a0;
      auVar49._4_4_ = fVar47 * fStack_9c;
      auVar49._8_4_ = fVar3 * fStack_98;
      auVar49._12_4_ = fVar4 * fStack_94;
      auVar57._0_4_ = fVar5 * fStack_a0;
      auVar57._4_4_ = fVar6 * fStack_9c;
      auVar57._8_4_ = fVar7 * fStack_98;
      auVar57._12_4_ = fVar8 * fStack_94;
      auVar40._0_4_ = fVar19 * fStack_a0;
      auVar40._4_4_ = fVar38 * fStack_9c;
      auVar40._8_4_ = fVar45 * fStack_98;
      auVar22 = NEON_ext(auVar49,auVar49,8,1);
      auVar51 = NEON_ext(auVar57,auVar57,8,1);
      auVar40._12_4_ = 0;
      auVar43 = NEON_ext(auVar40,auVar40,8,1);
      fVar18 = fStack_f0 + auVar49._0_4_ + auVar49._4_4_ + auVar22._0_4_;
      fVar27 = fStack_ec + auVar57._0_4_ + auVar57._4_4_ + auVar51._0_4_;
      fVar28 = fStack_e8 + auVar40._0_4_ + auVar40._4_4_ + auVar43._0_4_ + auVar43._4_4_;
      fVar29 = fStack_e4 + 0.0;
      fStack_1c8 = (float)uVar10;
      fStack_1b8 = (float)uVar62;
      fStack_1d8 = (float)uVar2;
      fStack_b0 = fStack_130 * fStack_b8 + fStack_140 * fStack_c0 + fStack_150 * fStack_bc;
      fStack_ac = fStack_12c * fStack_b8 + fStack_13c * fStack_c0 + fStack_14c * fStack_bc;
      fStack_a8 = fStack_1d8 * fStack_b8 + fStack_1b8 * fStack_c0 + fStack_1c8 * fStack_bc;
      fStack_a4 = fStack_b8 * 0.0 + fStack_c0 * 0.0 + fStack_bc * 0.0;
      (**(code **)(**(long **)(param_1 + 0x18) + 0x80))
                (&fStack_a0,*(long **)(param_1 + 0x18),&fStack_b0);
      fStack_144 = (float)((ulong)uVar10 >> 0x20);
      fStack_134 = (float)((ulong)uVar62 >> 0x20);
      auVar56._0_4_ = fStack_140 * fStack_a0;
      auVar56._4_4_ = fStack_13c * fStack_9c;
      auVar56._8_4_ = fStack_1b8 * fStack_98;
      auVar56._12_4_ = fStack_134 * fStack_94;
      auVar44._0_4_ = fStack_150 * fStack_a0;
      auVar44._4_4_ = fStack_14c * fStack_9c;
      auVar44._8_4_ = fStack_1c8 * fStack_98;
      auVar44._12_4_ = fStack_144 * fStack_94;
      auVar42._0_4_ = fStack_130 * fStack_a0;
      auVar42._4_4_ = fStack_12c * fStack_9c;
      auVar42._8_4_ = fStack_1d8 * fStack_98;
      auVar22 = NEON_ext(auVar56,auVar56,8,1);
      auVar51 = NEON_ext(auVar44,auVar44,8,1);
      auVar42._12_4_ = 0;
      auVar43 = NEON_ext(auVar42,auVar42,8,1);
      fVar50 = fStack_100 + auVar56._0_4_ + auVar56._4_4_ + auVar22._0_4_;
      fVar52 = fStack_fc + auVar44._0_4_ + auVar44._4_4_ + auVar51._0_4_;
      fVar53 = fStack_f8 + auVar42._0_4_ + auVar42._4_4_ + auVar43._0_4_ + auVar43._4_4_;
      fVar54 = fStack_f4 + 0.0;
      fVar55 = fVar18 - fVar50;
      fVar58 = fVar27 - fVar52;
      uVar13 = CONCAT44(fVar58,fVar55);
      fVar59 = fVar28 - fVar53;
      uVar60 = (ulong)(uint)fVar59;
      if (1.0 < fVar37) goto LAB_109824b10;
      auVar23._0_4_ = fStack_c0 * fVar55;
      auVar23._4_4_ = fStack_bc * fVar58;
      auVar23._8_4_ = fStack_b8 * fVar59;
      auVar23._12_4_ = fStack_b4 * 0.0;
      auVar43 = NEON_ext(auVar23,auVar23,8,1);
      fVar55 = auVar23._0_4_ + auVar23._4_4_ + auVar43._0_4_;
      if (0.0 < fVar55) {
        auVar33._0_4_ = fVar30 * fStack_c0;
        auVar33._4_4_ = fVar35 * fStack_bc;
        auVar33._8_4_ = fVar36 * fStack_b8;
        auVar33._12_4_ = fStack_b4 * 0.0;
        auVar43 = NEON_ext(auVar33,auVar33,8,1);
        fVar58 = auVar43._0_4_ + auVar33._0_4_ + auVar33._4_4_;
        if (-1.4210855e-14 <= fVar58) goto LAB_109824b10;
        fVar37 = fVar37 - fVar55 / fVar58;
        fStack_f0 = param_2[0xc] + (*(float *)(param_3 + 0x30) - param_2[0xc]) * fVar37;
        fStack_ec = param_2[0xd] + (*(float *)(param_3 + 0x34) - param_2[0xd]) * fVar37;
        fStack_e8 = param_2[0xe] + (*(float *)(param_3 + 0x38) - param_2[0xe]) * fVar37;
        fStack_e4 = param_2[0xf] + (*(float *)(param_3 + 0x3c) - param_2[0xf]) * fVar37;
        auVar43 = *(undefined1 (*) [16])(param_4 + 0xc);
        fStack_100 = auVar43._0_4_ + (*(float *)(param_5 + 0x30) - auVar43._0_4_) * fVar37;
        fStack_fc = auVar43._4_4_ + (*(float *)(param_5 + 0x34) - auVar43._4_4_) * fVar37;
        fStack_f8 = auVar43._8_4_ + (*(float *)(param_5 + 0x38) - auVar43._8_4_) * fVar37;
        fStack_f4 = auVar43._12_4_ + (*(float *)(param_5 + 0x3c) - auVar43._12_4_) * fVar37;
        uStack_200 = auVar48._0_8_;
        uStack_1f8 = auVar48._8_8_;
      }
      piVar16 = *(int **)(param_1 + 8);
      piVar12 = piVar16;
      uStack_90 = uVar13;
      uStack_88 = uVar60;
      func_0x00010982560c(piVar16,&uStack_90);
      if (((ulong)piVar12 & 1) == 0) {
        *(ulong *)(piVar16 + 0x4e) = uVar60;
        *(undefined8 *)(piVar16 + 0x4c) = uVar13;
        *(undefined1 *)(piVar16 + 0x60) = 1;
        iVar1 = *piVar16;
        *(ulong *)(piVar16 + (long)iVar1 * 4 + 6) = uVar60;
        *(undefined8 *)(piVar16 + (long)iVar1 * 4 + 4) = uVar13;
        iVar1 = *piVar16;
        *(ulong *)(piVar16 + (long)iVar1 * 4 + 0x1a) = CONCAT44(fVar29,fVar28);
        *(ulong *)(piVar16 + (long)iVar1 * 4 + 0x18) = CONCAT44(fVar27,fVar18);
        iVar1 = *piVar16;
        *(ulong *)(piVar16 + (long)iVar1 * 4 + 0x2e) = CONCAT44(fVar54,fVar53);
        *(ulong *)(piVar16 + (long)iVar1 * 4 + 0x2c) = CONCAT44(fVar52,fVar50);
        *piVar16 = *piVar16 + 1;
        piVar16 = *(int **)(param_1 + 8);
      }
      piVar12 = piVar16;
      FUN_109824c30();
      auVar48 = *(undefined1 (*) [16])(piVar16 + 0x48);
      fVar18 = 0.0;
      if ((int)piVar12 != 0) {
        auVar24._0_4_ = auVar48._0_4_ * auVar48._0_4_;
        auVar24._4_4_ = auVar48._4_4_ * auVar48._4_4_;
        auVar24._8_4_ = auVar48._8_4_ * auVar48._8_4_;
        auVar24._12_4_ = auVar48._12_4_ * auVar48._12_4_;
        auVar43 = NEON_ext(auVar24,auVar24,8,1);
        fVar18 = auVar43._0_4_ + auVar24._0_4_ + auVar24._4_4_;
      }
    } while (*(float *)(param_6 + 200) < fVar18);
  }
  *(float *)(param_6 + 0xb0) = fVar37;
  fVar38 = (float)uStack_200;
  auVar25._0_4_ = fVar38 * fVar38;
  fVar45 = (float)(uStack_200 >> 0x20);
  auVar25._4_4_ = fVar45 * fVar45;
  fVar46 = (float)uStack_1f8;
  auVar25._8_4_ = fVar46 * fVar46;
  fVar47 = (float)((ulong)uStack_1f8 >> 0x20);
  auVar25._12_4_ = fVar47 * fVar47;
  auVar43 = NEON_ext(auVar25,auVar25,8,1);
  fVar19 = auVar43._0_4_ + auVar25._0_4_ + auVar25._4_4_;
  auVar34 = ZEXT216(0);
  if (1.4210855e-14 <= fVar19) {
    fVar19 = 1.0 / SQRT(fVar19);
    auVar34._0_4_ = fVar38 * fVar19;
    auVar34._4_4_ = fVar45 * fVar19;
    auVar34._8_4_ = fVar46 * fVar19;
    auVar34._12_4_ = fVar47 * fVar19;
  }
  *(long *)(param_6 + 0x98) = auVar34._8_8_;
  *(long *)(param_6 + 0x90) = auVar34._0_8_;
  auVar26._0_4_ = auVar34._0_4_ * fVar30;
  auVar26._4_4_ = auVar34._4_4_ * fVar35;
  auVar26._8_4_ = auVar34._8_4_ * fVar36;
  auVar26._12_4_ = auVar34._12_4_ * 0.0;
  auVar43 = NEON_ext(auVar26,auVar26,8,1);
  if (-*(float *)(param_6 + 0xc0) <= auVar26._0_4_ + auVar26._4_4_ + auVar43._0_4_) {
LAB_109824b10:
    uVar13 = 0;
  }
  else {
    lVar15 = *(long *)(param_1 + 8);
    FUN_109824c30(lVar15);
    uVar13 = *(undefined8 *)(lVar15 + 0x110);
    *(undefined8 *)(param_6 + 0xa8) = *(undefined8 *)(lVar15 + 0x118);
    *(undefined8 *)(param_6 + 0xa0) = uVar13;
    uVar13 = 1;
  }
  return uVar13;
}



/* Entry: 109824b38; end: 109824c2f;  */

void FUN_109824b38(void)

{
  return;
}



/* Entry: 109824c30; end: 10982538f;  */

float * FUN_109824c30(float *param_1,float *param_2,float *param_3,float *param_4)

{
  float *pfVar1;
  byte bVar2;
  float fVar3;
  float fVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  float *pfVar8;
  float *pfVar9;
  byte bVar10;
  float *pfVar11;
  float *pfVar12;
  float *pfVar13;
  float fVar14;
  undefined8 uVar15;
  undefined1 auVar16 [12];
  float fVar22;
  float fVar23;
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  float extraout_var;
  undefined1 auVar21 [16];
  float fVar24;
  float fVar29;
  undefined1 auVar25 [12];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  float fVar30;
  undefined1 auVar28 [16];
  undefined1 auVar31 [12];
  float fVar33;
  undefined1 auVar32 [16];
  float fVar34;
  float fVar35;
  float fVar38;
  float fVar39;
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  float fVar42;
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  float fVar46;
  float fVar47;
  float fVar48;
  float fVar53;
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  float fVar54;
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  float fVar58;
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  float fVar63;
  float fVar64;
  float fVar68;
  undefined1 auVar66 [16];
  undefined1 auVar67 [16];
  uint uVar69;
  undefined1 auVar70 [16];
  undefined1 auVar71 [16];
  undefined1 auVar72 [16];
  undefined1 auVar73 [16];
  undefined1 auVar74 [16];
  float fVar75;
  float fVar76;
  float fVar77;
  undefined1 auVar78 [16];
  float fStack_a0;
  float fStack_9c;
  float fStack_98;
  float fStack_94;
  byte bStack_90;
  float fStack_8c;
  float fStack_88;
  float fStack_84;
  long lStack_68;
  undefined1 auVar49 [16];
  undefined1 auVar65 [16];
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if (((uint)param_1[0x60] & 1) == 0) {
    uVar69 = (uint)*(byte *)(param_1 + 0x51);
  }
  else {
    pfVar1 = param_1 + 0x59;
    pfVar1[0] = 0.0;
    pfVar1[1] = 0.0;
    param_1[0x5b] = 0.0;
    param_1[0x5c] = 0.0;
    *(undefined1 *)(param_1 + 0x5d) = 0;
    bVar10 = *(byte *)(param_1 + 0x58);
    bVar2 = bVar10 & 0xf0;
    *(byte *)(param_1 + 0x58) = bVar2;
    *(undefined1 *)(param_1 + 0x60) = 0;
    fVar24 = *param_1;
    pfVar8 = param_1;
    if ((int)fVar24 < 2) {
      if ((fVar24 == 0.0) || (fVar24 != 1.4013e-45)) goto LAB_109824ff4;
      param_1[0x42] = param_1[0x1a];
      param_1[0x43] = param_1[0x1b];
      param_1[0x40] = param_1[0x18];
      param_1[0x41] = param_1[0x19];
      param_1[0x46] = param_1[0x2e];
      param_1[0x47] = param_1[0x2f];
      param_1[0x44] = param_1[0x2c];
      param_1[0x45] = param_1[0x2d];
      *(ulong *)(param_1 + 0x4a) = (ulong)(uint)(param_1[0x1a] - param_1[0x2e]);
      *(ulong *)(param_1 + 0x48) =
           CONCAT44(param_1[0x19] - param_1[0x2d],param_1[0x18] - param_1[0x2c]);
      *(undefined1 *)(param_1 + 0x5d) = 0;
      param_1[0x5b] = 0.0;
      param_1[0x5c] = 0.0;
      pfVar1[0] = 1.0;
      pfVar1[1] = 0.0;
      uVar69 = 1;
    }
    else {
      if (fVar24 == 2.8026e-45) {
        fVar22 = param_1[8] - param_1[4];
        fVar23 = param_1[9] - param_1[5];
        fVar42 = param_1[10] - param_1[6];
        auVar40._0_4_ = (0.0 - param_1[4]) * fVar22;
        auVar40._4_4_ = (0.0 - param_1[5]) * fVar23;
        auVar40._8_4_ = (0.0 - param_1[6]) * fVar42;
        auVar40._12_4_ = 0;
        auVar41 = NEON_ext(auVar40,auVar40,8,1);
        fVar24 = auVar40._0_4_ + auVar40._4_4_ + auVar41._0_4_;
        if (fVar24 <= 0.0) {
          fVar24 = 0.0;
          bVar10 = 1;
        }
        else {
          auVar41._0_4_ = fVar22 * fVar22;
          auVar41._4_4_ = fVar23 * fVar23;
          auVar41._8_4_ = fVar42 * fVar42;
          auVar41._12_4_ = 0;
          auVar40 = NEON_ext(auVar41,auVar41,8,1);
          fVar22 = auVar40._0_4_ + auVar41._0_4_ + auVar41._4_4_;
          if (fVar22 <= fVar24) {
            fVar24 = 1.0;
            bVar10 = 2;
          }
          else {
            fVar24 = fVar24 / fVar22;
            bVar10 = 3;
          }
        }
        *(byte *)(param_1 + 0x58) = bVar10 | bVar2;
        param_1[0x59] = 1.0 - fVar24;
        param_1[0x5a] = fVar24;
        param_1[0x5b] = 0.0;
        param_1[0x5c] = 0.0;
        fVar42 = param_1[0x18] + (param_1[0x1c] - param_1[0x18]) * fVar24;
        fVar29 = param_1[0x19] + (param_1[0x1d] - param_1[0x19]) * fVar24;
        fVar30 = param_1[0x1a] + (param_1[0x1e] - param_1[0x1a]) * fVar24;
        auVar40 = *(undefined1 (*) [16])(param_1 + 0x2c);
        fVar22 = auVar40._0_4_ + (param_1[0x30] - auVar40._0_4_) * fVar24;
        fVar23 = auVar40._4_4_ + (param_1[0x31] - auVar40._4_4_) * fVar24;
        fVar24 = auVar40._8_4_ + (param_1[0x32] - auVar40._8_4_) * fVar24;
        param_1[0x42] = fVar30;
        param_1[0x43] = param_1[0x1b] + 0.0;
        param_1[0x40] = fVar42;
        param_1[0x41] = fVar29;
        param_1[0x46] = fVar24;
        param_1[0x47] = auVar40._12_4_ + 0.0;
        param_1[0x44] = fVar22;
        param_1[0x45] = fVar23;
        *(ulong *)(param_1 + 0x4a) = (ulong)(uint)(fVar30 - fVar24);
        *(ulong *)(param_1 + 0x48) = CONCAT44(fVar29 - fVar23,fVar42 - fVar22);
        param_2 = param_1 + 0x58;
        func_0x000109824b40();
        if ((0.0 <= param_1[0x59]) && (0.0 <= param_1[0x5a])) {
          fVar24 = param_1[0x5b];
LAB_109825084:
          if (0.0 <= fVar24) {
            uVar69 = (uint)(0.0 <= param_1[0x5c]);
            goto LAB_109825090;
          }
        }
      }
      else {
        if (fVar24 != 4.2039e-45) {
          if (fVar24 == 5.60519e-45) {
            pfVar11 = param_1 + 0x10;
            pfVar13 = param_1 + 4;
            fVar24 = *pfVar13;
            fVar22 = param_1[5];
            fVar23 = param_1[6];
            fVar42 = param_1[7];
            pfVar12 = param_1 + 8;
            fVar29 = *pfVar12;
            fVar30 = param_1[9];
            fVar3 = param_1[10];
            fVar4 = param_1[0xb];
            pfVar9 = param_1 + 0xc;
            bStack_90 = 0;
            param_1[0x56] = 0.0;
            param_1[0x57] = 0.0;
            param_1[0x54] = 0.0;
            param_1[0x55] = 0.0;
            fVar75 = fVar29 - fVar24;
            fVar76 = fVar30 - fVar22;
            fVar77 = fVar3 - fVar23;
            fVar46 = *pfVar9 - fVar24;
            fVar53 = param_1[0xd] - fVar22;
            auVar49._0_8_ = CONCAT44(fVar53,fVar46);
            auVar49._8_4_ = param_1[0xe] - fVar23;
            auVar49._12_4_ = param_1[0xf] - fVar42;
            auVar59._8_8_ = auVar49._8_8_;
            auVar59._0_8_ = auVar49._0_8_;
            auVar60._0_12_ = auVar59._0_12_;
            auVar60._12_4_ = 0;
            auVar40 = NEON_ext(auVar60,auVar60,0xc,1);
            auVar55 = NEON_ext(auVar40,auVar60,8,1);
            fVar63 = *pfVar11 - fVar24;
            fVar68 = param_1[0x11] - fVar22;
            auVar65._0_8_ = CONCAT44(fVar68,fVar63);
            auVar65._8_4_ = param_1[0x12] - fVar23;
            auVar65._12_4_ = param_1[0x13] - fVar42;
            auVar70._8_8_ = auVar65._8_8_;
            auVar70._0_8_ = auVar65._0_8_;
            auVar71._0_12_ = auVar70._0_12_;
            auVar71._12_4_ = 0;
            auVar40 = NEON_ext(auVar71,auVar71,0xc,1);
            auVar74 = NEON_ext(auVar40,auVar71,8,1);
            *(byte *)(param_1 + 0x58) = bVar10 | 0xf;
            auVar78._4_4_ = fVar76;
            auVar78._0_4_ = fVar75;
            auVar78._8_4_ = fVar77;
            auVar78._12_4_ = 0;
            auVar56._4_4_ = fVar76;
            auVar56._0_4_ = fVar75;
            auVar56._8_4_ = fVar77;
            auVar56._12_4_ = 0;
            auVar40 = NEON_ext(auVar78,auVar56,0xc,1);
            auVar67._4_4_ = fVar76;
            auVar67._0_4_ = fVar75;
            auVar67._8_4_ = fVar77;
            auVar67._12_4_ = 0;
            auVar78 = NEON_ext(auVar40,auVar67,8,1);
            auVar36._0_4_ = auVar55._0_4_ * fVar75 - auVar78._0_4_ * fVar46;
            auVar36._4_4_ = auVar55._4_4_ * fVar76 - auVar78._4_4_ * fVar53;
            auVar36._8_4_ = auVar55._8_4_ * fVar77 - auVar78._8_4_ * auVar49._8_4_;
            auVar36._12_4_ = auVar55._12_4_ * (fVar4 - fVar42) - auVar78._12_4_ * auVar49._12_4_;
            auVar40 = NEON_ext(auVar36,auVar36,0xc,1);
            auVar41 = NEON_ext(auVar40,auVar36,8,1);
            auVar37._0_4_ = fVar63 * auVar41._0_4_;
            auVar37._4_4_ = fVar68 * auVar41._4_4_;
            auVar37._8_4_ = auVar65._8_4_ * auVar41._8_4_;
            auVar37._12_4_ = 0;
            auVar40 = NEON_ext(auVar37,auVar37,8,1);
            fVar34 = auVar37._0_4_ + auVar37._4_4_ + auVar40._0_4_;
            auVar50._0_4_ = auVar74._0_4_ * fVar46 - auVar55._0_4_ * fVar63;
            auVar50._4_4_ = auVar74._4_4_ * fVar53 - auVar55._4_4_ * fVar68;
            auVar50._8_4_ = auVar74._8_4_ * auVar49._8_4_ - auVar55._8_4_ * auVar65._8_4_;
            auVar50._12_4_ = auVar74._12_4_ * auVar49._12_4_ - auVar55._12_4_ * auVar65._12_4_;
            auVar40 = NEON_ext(auVar50,auVar50,0xc,1);
            auVar56 = NEON_ext(auVar40,auVar50,8,1);
            auVar51._0_4_ = fVar75 * auVar56._0_4_;
            auVar51._4_4_ = fVar76 * auVar56._4_4_;
            auVar51._8_4_ = fVar77 * auVar56._8_4_;
            auVar51._12_4_ = 0;
            auVar40 = NEON_ext(auVar51,auVar51,8,1);
            fVar47 = auVar51._0_4_ + auVar51._4_4_ + auVar40._0_4_;
            auVar66._0_4_ = auVar78._0_4_ * fVar63 - auVar74._0_4_ * fVar75;
            auVar66._4_4_ = auVar78._4_4_ * fVar68 - auVar74._4_4_ * fVar76;
            auVar66._8_4_ = auVar78._8_4_ * auVar65._8_4_ - auVar74._8_4_ * fVar77;
            auVar66._12_4_ = auVar78._12_4_ * auVar65._12_4_ - auVar74._12_4_ * (fVar4 - fVar42);
            auVar40 = NEON_ext(auVar66,auVar66,0xc,1);
            auVar67 = NEON_ext(auVar40,auVar66,8,1);
            auVar61._0_4_ = fVar46 * auVar67._0_4_;
            auVar61._4_4_ = fVar53 * auVar67._4_4_;
            auVar61._8_4_ = auVar49._8_4_ * auVar67._8_4_;
            auVar61._12_4_ = 0;
            auVar40 = NEON_ext(auVar61,auVar61,8,1);
            fVar46 = auVar61._0_4_ + auVar61._4_4_ + auVar40._0_4_;
            auVar55._0_4_ = *pfVar11 - fVar29;
            auVar55._4_4_ = param_1[0x11] - fVar30;
            auVar55._8_4_ = param_1[0x12] - fVar3;
            auVar55._12_4_ = param_1[0x13] - fVar4;
            auVar43._0_4_ = *pfVar9 - fVar29;
            auVar43._4_4_ = param_1[0xd] - fVar30;
            auVar43._8_4_ = param_1[0xe] - fVar3;
            auVar43._12_4_ = param_1[0xf] - fVar4;
            auVar40 = NEON_ext(auVar55,auVar55,0xc,1);
            auVar40 = NEON_ext(auVar40,auVar55,8,1);
            auVar78 = NEON_ext(auVar43,auVar43,0xc,1);
            auVar78 = NEON_ext(auVar78,auVar43,8,1);
            auVar74._0_4_ = auVar78._0_4_ * auVar55._0_4_ - auVar40._0_4_ * auVar43._0_4_;
            auVar74._4_4_ = auVar78._4_4_ * auVar55._4_4_ - auVar40._4_4_ * auVar43._4_4_;
            auVar74._8_4_ = auVar78._8_4_ * auVar55._8_4_ - auVar40._8_4_ * auVar43._8_4_;
            auVar74._12_4_ = auVar78._12_4_ * auVar55._12_4_ - auVar40._12_4_ * auVar43._12_4_;
            auVar40 = NEON_ext(auVar74,auVar74,0xc,1);
            auVar40 = NEON_ext(auVar40,auVar74,8,1);
            auVar44._0_4_ = (fVar24 - fVar29) * auVar40._0_4_;
            auVar44._4_4_ = (fVar22 - fVar30) * auVar40._4_4_;
            auVar44._8_4_ = (fVar23 - fVar3) * auVar40._8_4_;
            auVar44._12_4_ = 0;
            auVar78 = NEON_ext(auVar44,auVar44,8,1);
            fVar42 = auVar44._0_4_ + auVar44._4_4_ + auVar78._0_4_;
            auVar72._0_4_ = -(uint)(fVar34 * fVar34 < 9.999999e-09);
            auVar72._4_4_ = -(uint)(fVar47 * fVar47 < 9.999999e-09);
            auVar72._8_4_ = -(uint)(fVar46 * fVar46 < 9.999999e-09);
            auVar72._12_4_ = -(uint)(fVar42 * fVar42 < 9.999999e-09);
            uVar69 = NEON_umaxv(auVar72,4);
            if ((uVar69 & 1) == 0) {
              auVar32._0_4_ = (0.0 - fVar29) * auVar40._0_4_;
              auVar32._4_4_ = (0.0 - fVar30) * auVar40._4_4_;
              auVar32._8_4_ = (0.0 - fVar3) * auVar40._8_4_;
              auVar32._12_4_ = 0;
              auVar40 = NEON_ext(auVar32,auVar32,8,1);
              fVar42 = fVar42 * (auVar40._0_4_ + auVar32._0_4_ + auVar32._4_4_);
              fVar24 = 0.0 - fVar24;
              fVar22 = 0.0 - fVar22;
              fVar23 = 0.0 - fVar23;
              auVar26._0_4_ = fVar24 * auVar67._0_4_;
              auVar26._4_4_ = fVar22 * auVar67._4_4_;
              auVar26._8_4_ = fVar23 * auVar67._8_4_;
              auVar26._12_4_ = 0;
              auVar40 = NEON_ext(auVar26,auVar26,8,1);
              fVar46 = fVar46 * (auVar40._0_4_ + auVar26._0_4_ + auVar26._4_4_);
              auVar27._0_4_ = fVar24 * auVar56._0_4_;
              auVar27._4_4_ = fVar22 * auVar56._4_4_;
              auVar27._8_4_ = fVar23 * auVar56._8_4_;
              auVar27._12_4_ = 0;
              auVar40 = NEON_ext(auVar27,auVar27,8,1);
              fVar47 = fVar47 * (auVar40._0_4_ + auVar27._0_4_ + auVar27._4_4_);
              auVar17._0_4_ = fVar24 * auVar41._0_4_;
              auVar17._4_4_ = fVar22 * auVar41._4_4_;
              auVar17._8_4_ = fVar23 * auVar41._8_4_;
              auVar17._12_4_ = 0;
              auVar40 = NEON_ext(auVar17,auVar17,8,1);
              fVar34 = fVar34 * (auVar40._0_4_ + auVar17._0_4_ + auVar17._4_4_);
              if ((((fVar34 < 0.0) || (fVar47 < 0.0)) || (fVar46 < 0.0)) || (fVar42 < 0.0)) {
                if (0.0 <= fVar34) {
                  fVar24 = 3.4028235e+38;
                }
                else {
                  param_4 = &fStack_a0;
                  param_3 = pfVar9;
                  FUN_109825390(pfVar13,pfVar12);
                  auVar5._8_4_ = fStack_98;
                  auVar5._0_8_ = CONCAT44(fStack_9c,fStack_a0);
                  auVar5._12_4_ = fStack_94;
                  auVar18._0_4_ = fStack_a0 * fStack_a0;
                  auVar18._4_4_ = fStack_9c * fStack_9c;
                  auVar18._8_4_ = fStack_98 * fStack_98;
                  auVar18._12_4_ = 0;
                  auVar40 = NEON_ext(auVar18,auVar18,8,1);
                  fVar22 = auVar18._0_4_ + auVar18._4_4_ + auVar40._0_4_;
                  fVar24 = 3.4028235e+38;
                  if (fVar22 < 3.4028235e+38) {
                    *(long *)(param_1 + 0x56) = auVar5._8_8_;
                    *(ulong *)(param_1 + 0x54) = CONCAT44(fStack_9c,fStack_a0);
                    *(byte *)(param_1 + 0x58) = bStack_90 & 7 | bVar2;
                    *(ulong *)pfVar1 = CONCAT44(fStack_88,fStack_8c);
                    param_1[0x5b] = fStack_84;
                    param_1[0x5c] = 0.0;
                    fVar24 = fVar22;
                  }
                }
                if (fVar47 < 0.0) {
                  param_4 = &fStack_a0;
                  param_3 = pfVar11;
                  FUN_109825390(pfVar13,pfVar9);
                  auVar6._8_4_ = fStack_98;
                  auVar6._0_8_ = CONCAT44(fStack_9c,fStack_a0);
                  auVar6._12_4_ = fStack_94;
                  auVar19._0_4_ = fStack_a0 * fStack_a0;
                  auVar19._4_4_ = fStack_9c * fStack_9c;
                  auVar19._8_4_ = fStack_98 * fStack_98;
                  auVar19._12_4_ = 0;
                  auVar40 = NEON_ext(auVar19,auVar19,8,1);
                  fVar22 = auVar19._0_4_ + auVar19._4_4_ + auVar40._0_4_;
                  if (fVar22 < fVar24) {
                    *(long *)(param_1 + 0x56) = auVar6._8_8_;
                    *(ulong *)(param_1 + 0x54) = CONCAT44(fStack_9c,fStack_a0);
                    *(byte *)(param_1 + 0x58) =
                         *(byte *)(param_1 + 0x58) & 0xf0 |
                         bStack_90 & 1 | (bStack_90 >> 1 & 3) << 2;
                    param_1[0x59] = fStack_8c;
                    param_1[0x5a] = 0.0;
                    *(ulong *)(param_1 + 0x5b) = CONCAT44(fStack_84,fStack_88);
                    fVar24 = fVar22;
                  }
                }
                if (fVar46 < 0.0) {
                  param_4 = &fStack_a0;
                  param_3 = pfVar12;
                  FUN_109825390(pfVar13,pfVar11);
                  auVar7._8_4_ = fStack_98;
                  auVar7._0_8_ = CONCAT44(fStack_9c,fStack_a0);
                  auVar7._12_4_ = fStack_94;
                  auVar20._0_4_ = fStack_a0 * fStack_a0;
                  auVar20._4_4_ = fStack_9c * fStack_9c;
                  auVar20._8_4_ = fStack_98 * fStack_98;
                  auVar20._12_4_ = 0;
                  auVar40 = NEON_ext(auVar20,auVar20,8,1);
                  fVar22 = auVar20._0_4_ + auVar20._4_4_ + auVar40._0_4_;
                  if (fVar22 < fVar24) {
                    *(long *)(param_1 + 0x56) = auVar7._8_8_;
                    *(ulong *)(param_1 + 0x54) = CONCAT44(fStack_9c,fStack_a0);
                    *(byte *)(param_1 + 0x58) =
                         *(byte *)(param_1 + 0x58) & 0xf0 |
                         bStack_90 & 1 | bStack_90 >> 1 & 2 | (bStack_90 >> 1 & 1) << 3;
                    param_1[0x59] = fStack_8c;
                    *(ulong *)(param_1 + 0x5a) = (ulong)(uint)fStack_84;
                    param_1[0x5c] = fStack_88;
                    fVar24 = fVar22;
                  }
                }
                if (fVar42 < 0.0) {
                  param_4 = &fStack_a0;
                  FUN_109825390(pfVar12,pfVar11);
                  auVar28._0_4_ = fStack_a0 * fStack_a0;
                  auVar28._4_4_ = fStack_9c * fStack_9c;
                  auVar28._8_4_ = fStack_98 * fStack_98;
                  auVar28._12_4_ = 0;
                  auVar40 = NEON_ext(auVar28,auVar28,8,1);
                  param_3 = pfVar9;
                  if (auVar28._0_4_ + auVar28._4_4_ + auVar40._0_4_ < fVar24) {
                    param_1[0x56] = fStack_98;
                    param_1[0x57] = fStack_94;
                    param_1[0x54] = fStack_a0;
                    param_1[0x55] = fStack_9c;
                    *(byte *)(param_1 + 0x58) =
                         *(byte *)(param_1 + 0x58) & 0xf0 |
                         bStack_90 & 4 | (bStack_90 & 1) << 1 | (bStack_90 >> 1 & 1) << 3;
                    param_1[0x59] = 0.0;
                    param_1[0x5a] = fStack_8c;
                    uVar15 = NEON_rev64(CONCAT44(fStack_84,fStack_88),4);
                    *(undefined8 *)(param_1 + 0x5b) = uVar15;
                  }
                }
                fVar24 = param_1[0x59];
                fVar23 = param_1[0x5a];
                fVar22 = param_1[0x5b];
                fVar42 = param_1[0x5c];
                auVar25._0_4_ =
                     param_1[0x18] * fVar24 + param_1[0x1c] * fVar23 + param_1[0x20] * fVar22 +
                     param_1[0x24] * fVar42;
                auVar25._4_4_ =
                     param_1[0x19] * fVar24 + param_1[0x1d] * fVar23 + param_1[0x21] * fVar22 +
                     param_1[0x25] * fVar42;
                auVar25._8_4_ =
                     param_1[0x1a] * fVar24 + param_1[0x1e] * fVar23 + param_1[0x22] * fVar22 +
                     param_1[0x26] * fVar42;
                auVar40 = *(undefined1 (*) [16])(param_1 + 0x34);
                auVar16._0_4_ =
                     param_1[0x2c] * fVar24 + param_1[0x30] * fVar23 + auVar40._0_4_ * fVar22;
                auVar16._4_4_ =
                     param_1[0x2d] * fVar24 + param_1[0x31] * fVar23 + auVar40._4_4_ * fVar22;
                auVar16._8_4_ =
                     param_1[0x2e] * fVar24 + param_1[0x32] * fVar23 + auVar40._8_4_ * fVar22;
                auVar31._0_4_ = param_1[0x38] * fVar42;
                auVar31._4_4_ = param_1[0x39] * fVar42;
                auVar31._8_4_ = param_1[0x3a] * fVar42;
                goto LAB_109824f18;
              }
              if (*(char *)(param_1 + 0x5d) != '\x01') {
                uVar69 = 1;
                *(undefined1 *)(param_1 + 0x51) = 1;
                param_1[0x48] = 0.0;
                param_1[0x49] = 0.0;
                param_1[0x4a] = 0.0;
                param_1[0x4b] = 0.0;
                goto LAB_109825094;
              }
            }
            else {
              *(undefined1 *)(param_1 + 0x5d) = 1;
            }
          }
LAB_109824ff4:
          uVar69 = 0;
          *(undefined1 *)(param_1 + 0x51) = 0;
          goto LAB_109825094;
        }
        param_3 = param_1 + 0xc;
        param_4 = param_1 + 0x54;
        FUN_109825390(param_1 + 4,param_1 + 8);
        fVar24 = param_1[0x59];
        fVar22 = param_1[0x5a];
        fVar23 = param_1[0x5b];
        auVar25._0_4_ = param_1[0x18] * fVar24 + param_1[0x1c] * fVar22 + param_1[0x20] * fVar23;
        auVar25._4_4_ = param_1[0x19] * fVar24 + param_1[0x1d] * fVar22 + param_1[0x21] * fVar23;
        auVar25._8_4_ = param_1[0x1a] * fVar24 + param_1[0x1e] * fVar22 + param_1[0x22] * fVar23;
        auVar40 = *(undefined1 (*) [16])(param_1 + 0x30);
        auVar16._0_4_ = param_1[0x2c] * fVar24 + auVar40._0_4_ * fVar22;
        auVar16._4_4_ = param_1[0x2d] * fVar24 + auVar40._4_4_ * fVar22;
        auVar16._8_4_ = param_1[0x2e] * fVar24 + auVar40._8_4_ * fVar22;
        auVar31._0_4_ = param_1[0x34] * fVar23;
        auVar31._4_4_ = param_1[0x35] * fVar23;
        auVar31._8_4_ = param_1[0x36] * fVar23;
LAB_109824f18:
        fVar24 = auVar16._0_4_ + auVar31._0_4_;
        fVar22 = auVar16._4_4_ + auVar31._4_4_;
        fVar23 = auVar16._8_4_ + auVar31._8_4_;
        *(ulong *)(param_1 + 0x42) = (ulong)(uint)auVar25._8_4_;
        *(long *)(param_1 + 0x40) = auVar25._0_8_;
        *(ulong *)(param_1 + 0x46) = (ulong)(uint)fVar23;
        *(ulong *)(param_1 + 0x44) = CONCAT44(fVar22,fVar24);
        *(ulong *)(param_1 + 0x4a) = (ulong)(uint)(auVar25._8_4_ - fVar23);
        *(ulong *)(param_1 + 0x48) = CONCAT44(auVar25._4_4_ - fVar22,auVar25._0_4_ - fVar24);
        param_2 = param_1 + 0x58;
        func_0x000109824b40();
        if ((0.0 <= param_1[0x59]) && (0.0 <= param_1[0x5a])) {
          fVar24 = param_1[0x5b];
          goto LAB_109825084;
        }
      }
      uVar69 = 0;
    }
LAB_109825090:
    *(char *)(param_1 + 0x51) = (char)uVar69;
    param_1 = pfVar8;
  }
LAB_109825094:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return (float *)(ulong)(uVar69 & 1);
  }
  uVar15 = ___stack_chk_fail();
  bVar2 = *(byte *)(param_4 + 4) & 0xf0;
  *(byte *)(param_4 + 4) = bVar2;
  fVar24 = *param_2;
  fVar22 = param_2[1];
  fVar23 = param_2[2];
  fVar42 = param_2[3];
  fVar29 = *param_1;
  fVar30 = param_1[1];
  fVar3 = param_1[2];
  fVar4 = param_1[3];
  fVar35 = fVar24 - fVar29;
  fVar38 = fVar22 - fVar30;
  fVar39 = fVar23 - fVar3;
  fVar34 = *param_3;
  fVar46 = param_3[1];
  fVar47 = param_3[2];
  fVar53 = param_3[3];
  fVar76 = fVar34 - fVar29;
  fVar77 = fVar46 - fVar30;
  fVar33 = fVar47 - fVar3;
  fVar63 = (float)uVar15;
  fVar75 = (float)((ulong)uVar15 >> 0x20);
  auVar52._0_4_ = fVar35 * (fVar63 - fVar29);
  auVar52._4_4_ = fVar38 * (fVar75 - fVar30);
  auVar52._8_4_ = fVar39 * (extraout_var - fVar3);
  auVar52._12_4_ = 0;
  auVar40 = NEON_ext(auVar52,auVar52,8,1);
  fVar48 = auVar52._0_4_ + auVar52._4_4_ + auVar40._0_4_;
  auVar45._0_4_ = (fVar63 - fVar29) * fVar76;
  auVar45._4_4_ = (fVar75 - fVar30) * fVar77;
  auVar45._8_4_ = (extraout_var - fVar3) * fVar33;
  auVar45._12_4_ = 0;
  auVar40 = NEON_ext(auVar45,auVar45,8,1);
  fVar68 = auVar45._0_4_ + auVar45._4_4_ + auVar40._0_4_;
  if ((0.0 < fVar48) || (0.0 < fVar68)) {
    auVar57._0_4_ = (fVar63 - fVar24) * fVar35;
    auVar57._4_4_ = (fVar75 - fVar22) * fVar38;
    auVar57._8_4_ = (extraout_var - fVar23) * fVar39;
    auVar57._12_4_ = 0;
    auVar40 = NEON_ext(auVar57,auVar57,8,1);
    fVar54 = auVar40._0_4_ + auVar57._0_4_ + auVar57._4_4_;
    auVar62._0_4_ = (fVar63 - fVar24) * fVar76;
    auVar62._4_4_ = (fVar75 - fVar22) * fVar77;
    auVar62._8_4_ = (extraout_var - fVar23) * fVar33;
    auVar62._12_4_ = 0;
    auVar40 = NEON_ext(auVar62,auVar62,8,1);
    fVar64 = auVar40._0_4_ + auVar62._0_4_ + auVar62._4_4_;
    if ((fVar54 < 0.0) || ((bool)(~(fVar64 <= fVar54) & 1))) {
      fVar58 = -(fVar54 * fVar68) + fVar64 * fVar48;
      if (((0.0 < fVar54) || (fVar48 < 0.0)) || (0.0 < fVar58)) {
        auVar21._0_4_ = fVar35 * (fVar63 - fVar34);
        auVar21._4_4_ = fVar38 * (fVar75 - fVar46);
        auVar21._8_4_ = fVar39 * (extraout_var - fVar47);
        auVar21._12_4_ = 0;
        auVar40 = NEON_ext(auVar21,auVar21,8,1);
        fVar14 = auVar40._0_4_ + auVar21._0_4_ + auVar21._4_4_;
        auVar73._0_4_ = fVar76 * (fVar63 - fVar34);
        auVar73._4_4_ = fVar77 * (fVar75 - fVar46);
        auVar73._8_4_ = fVar33 * (extraout_var - fVar47);
        auVar73._12_4_ = 0;
        auVar40 = NEON_ext(auVar73,auVar73,8,1);
        fVar63 = auVar40._0_4_ + auVar73._0_4_ + auVar73._4_4_;
        if ((fVar63 < 0.0) || ((bool)(~(fVar14 <= fVar63) & 1))) {
          fVar48 = -(fVar48 * fVar63) + fVar68 * fVar14;
          if ((0.0 < fVar63) || ((0.0 < fVar48 || (fVar68 < 0.0)))) {
            fVar53 = -(fVar14 * fVar64) + fVar63 * fVar54;
            if (((0.0 < fVar53) || (fVar64 = fVar64 - fVar54, fVar64 < 0.0)) ||
               (fVar14 - fVar63 < 0.0)) {
              fVar68 = 1.0 / (fVar58 + fVar53 + fVar48);
              fVar48 = fVar48 * fVar68;
              fVar68 = fVar58 * fVar68;
              param_4[2] = fVar3 + fVar39 * fVar48 + fVar33 * fVar68;
              param_4[3] = fVar4 + 0.0 + 0.0;
              *param_4 = fVar29 + fVar35 * fVar48 + fVar76 * fVar68;
              param_4[1] = fVar30 + fVar38 * fVar48 + fVar77 * fVar68;
              *(byte *)(param_4 + 4) = bVar2 | 7;
              fVar24 = (1.0 - fVar48) - fVar68;
            }
            else {
              fVar68 = fVar64 / (fVar64 + (fVar14 - fVar63));
              param_4[2] = fVar23 + (fVar47 - fVar23) * fVar68;
              param_4[3] = fVar42 + 0.0;
              *param_4 = fVar24 + (fVar34 - fVar24) * fVar68;
              param_4[1] = fVar22 + (fVar46 - fVar22) * fVar68;
              *(byte *)(param_4 + 4) = bVar2 | 6;
              fVar48 = 1.0 - fVar68;
              fVar24 = 0.0;
            }
            goto LAB_1098254ac;
          }
          fVar68 = fVar68 / (fVar68 - fVar63);
          param_4[2] = fVar3 + fVar33 * fVar68;
          param_4[3] = fVar4 + 0.0;
          *param_4 = fVar29 + fVar76 * fVar68;
          param_4[1] = fVar30 + fVar77 * fVar68;
          *(byte *)(param_4 + 4) = bVar2 | 5;
          fVar24 = 1.0 - fVar68;
        }
        else {
          param_4[2] = fVar47;
          param_4[3] = fVar53;
          *param_4 = fVar34;
          param_4[1] = fVar46;
          *(byte *)(param_4 + 4) = bVar2 | 4;
          fVar68 = 1.0;
          fVar24 = 0.0;
        }
        fVar48 = 0.0;
        goto LAB_1098254ac;
      }
      fVar48 = fVar48 / (fVar48 - fVar54);
      param_4[2] = fVar3 + fVar39 * fVar48;
      param_4[3] = fVar4 + 0.0;
      *param_4 = fVar29 + fVar35 * fVar48;
      param_4[1] = fVar30 + fVar38 * fVar48;
      *(byte *)(param_4 + 4) = bVar2 | 3;
      fVar24 = 1.0 - fVar48;
    }
    else {
      param_4[2] = fVar23;
      param_4[3] = fVar42;
      *param_4 = fVar24;
      param_4[1] = fVar22;
      *(byte *)(param_4 + 4) = bVar2 | 2;
      fVar48 = 1.0;
      fVar24 = 0.0;
    }
  }
  else {
    param_4[2] = fVar3;
    param_4[3] = fVar4;
    *param_4 = fVar29;
    param_4[1] = fVar30;
    *(byte *)(param_4 + 4) = bVar2 | 1;
    fVar48 = 0.0;
    fVar24 = 1.0;
  }
  fVar68 = 0.0;
LAB_1098254ac:
  param_4[5] = fVar24;
  param_4[6] = fVar48;
  param_4[7] = fVar68;
  param_4[8] = 0.0;
  return param_1;
}



/* Entry: 109825390; end: 1098256f3;  */

void FUN_109825390(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4,
                  float *param_5)

{
  byte bVar1;
  float fVar2;
  float fVar4;
  float in_register_00005008;
  undefined1 auVar3 [16];
  float fVar5;
  float fVar6;
  undefined8 uVar7;
  float fVar8;
  float fVar9;
  undefined8 uVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  undefined8 uVar19;
  float fVar20;
  float fVar21;
  undefined8 uVar22;
  float fVar23;
  undefined8 uVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  undefined1 auVar28 [16];
  float fVar29;
  undefined1 auVar30 [16];
  float fVar31;
  undefined1 auVar32 [16];
  float fVar33;
  undefined1 auVar34 [16];
  float fVar35;
  undefined1 auVar36 [16];
  
  fVar4 = (float)((ulong)param_1 >> 0x20);
  fVar6 = (float)param_1;
  bVar1 = *(byte *)(param_5 + 4) & 0xf0;
  *(byte *)(param_5 + 4) = bVar1;
  uVar22 = param_3[1];
  uVar19 = *param_3;
  uVar10 = param_2[1];
  uVar7 = *param_2;
  fVar5 = (float)uVar7;
  fVar18 = (float)uVar19;
  fVar15 = fVar18 - fVar5;
  fVar8 = (float)((ulong)uVar7 >> 0x20);
  fVar20 = (float)((ulong)uVar19 >> 0x20);
  fVar16 = fVar20 - fVar8;
  fVar9 = (float)uVar10;
  fVar21 = (float)uVar22;
  fVar17 = fVar21 - fVar9;
  uVar24 = *param_4;
  fVar23 = (float)uVar24;
  fVar12 = fVar23 - fVar5;
  fVar25 = (float)((ulong)uVar24 >> 0x20);
  fVar13 = fVar25 - fVar8;
  fVar26 = (float)param_4[1];
  fVar14 = fVar26 - fVar9;
  fVar11 = (float)((ulong)uVar10 >> 0x20);
  auVar28._0_4_ = fVar15 * (fVar6 - fVar5);
  auVar28._4_4_ = fVar16 * (fVar4 - fVar8);
  auVar28._8_4_ = fVar17 * (in_register_00005008 - fVar9);
  auVar28._12_4_ = 0;
  auVar30 = NEON_ext(auVar28,auVar28,8,1);
  fVar29 = auVar28._0_4_ + auVar28._4_4_ + auVar30._0_4_;
  auVar30._0_4_ = (fVar6 - fVar5) * fVar12;
  auVar30._4_4_ = (fVar4 - fVar8) * fVar13;
  auVar30._8_4_ = (in_register_00005008 - fVar9) * fVar14;
  auVar30._12_4_ = 0;
  auVar28 = NEON_ext(auVar30,auVar30,8,1);
  fVar27 = auVar30._0_4_ + auVar30._4_4_ + auVar28._0_4_;
  if ((0.0 < fVar29) || (0.0 < fVar27)) {
    auVar32._0_4_ = (fVar6 - fVar18) * fVar15;
    auVar32._4_4_ = (fVar4 - fVar20) * fVar16;
    auVar32._8_4_ = (in_register_00005008 - fVar21) * fVar17;
    auVar32._12_4_ = 0;
    auVar30 = NEON_ext(auVar32,auVar32,8,1);
    fVar31 = auVar30._0_4_ + auVar32._0_4_ + auVar32._4_4_;
    auVar34._0_4_ = (fVar6 - fVar18) * fVar12;
    auVar34._4_4_ = (fVar4 - fVar20) * fVar13;
    auVar34._8_4_ = (in_register_00005008 - fVar21) * fVar14;
    auVar34._12_4_ = 0;
    auVar30 = NEON_ext(auVar34,auVar34,8,1);
    fVar35 = auVar30._0_4_ + auVar34._0_4_ + auVar34._4_4_;
    if ((fVar31 < 0.0) || ((bool)(~(fVar35 <= fVar31) & 1))) {
      fVar33 = -(fVar31 * fVar27) + fVar35 * fVar29;
      if (((0.0 < fVar31) || (fVar29 < 0.0)) || (0.0 < fVar33)) {
        auVar3._0_4_ = fVar15 * (fVar6 - fVar23);
        auVar3._4_4_ = fVar16 * (fVar4 - fVar25);
        auVar3._8_4_ = fVar17 * (in_register_00005008 - fVar26);
        auVar3._12_4_ = 0;
        auVar30 = NEON_ext(auVar3,auVar3,8,1);
        fVar2 = auVar30._0_4_ + auVar3._0_4_ + auVar3._4_4_;
        auVar36._0_4_ = fVar12 * (fVar6 - fVar23);
        auVar36._4_4_ = fVar13 * (fVar4 - fVar25);
        auVar36._8_4_ = fVar14 * (in_register_00005008 - fVar26);
        auVar36._12_4_ = 0;
        auVar30 = NEON_ext(auVar36,auVar36,8,1);
        fVar6 = auVar30._0_4_ + auVar36._0_4_ + auVar36._4_4_;
        if ((fVar6 < 0.0) || ((bool)(~(fVar2 <= fVar6) & 1))) {
          fVar29 = -(fVar29 * fVar6) + fVar27 * fVar2;
          if ((0.0 < fVar6) || ((0.0 < fVar29 || (fVar27 < 0.0)))) {
            fVar27 = -(fVar2 * fVar35) + fVar6 * fVar31;
            if (((0.0 < fVar27) || (fVar35 = fVar35 - fVar31, fVar35 < 0.0)) ||
               (fVar2 - fVar6 < 0.0)) {
              fVar27 = 1.0 / (fVar33 + fVar27 + fVar29);
              fVar29 = fVar29 * fVar27;
              fVar27 = fVar33 * fVar27;
              *(ulong *)(param_5 + 2) =
                   CONCAT44(fVar11 + 0.0 + 0.0,fVar9 + fVar17 * fVar29 + fVar14 * fVar27);
              *(ulong *)param_5 =
                   CONCAT44(fVar8 + fVar16 * fVar29 + fVar13 * fVar27,
                            fVar5 + fVar15 * fVar29 + fVar12 * fVar27);
              *(byte *)(param_5 + 4) = bVar1 | 7;
              fVar6 = (1.0 - fVar29) - fVar27;
            }
            else {
              fVar27 = fVar35 / (fVar35 + (fVar2 - fVar6));
              *(ulong *)(param_5 + 2) =
                   CONCAT44((float)((ulong)uVar22 >> 0x20) + 0.0,fVar21 + (fVar26 - fVar21) * fVar27
                           );
              *(ulong *)param_5 =
                   CONCAT44(fVar20 + (fVar25 - fVar20) * fVar27,fVar18 + (fVar23 - fVar18) * fVar27)
              ;
              *(byte *)(param_5 + 4) = bVar1 | 6;
              fVar29 = 1.0 - fVar27;
              fVar6 = 0.0;
            }
            goto LAB_1098254ac;
          }
          fVar27 = fVar27 / (fVar27 - fVar6);
          *(ulong *)(param_5 + 2) = CONCAT44(fVar11 + 0.0,fVar9 + fVar14 * fVar27);
          *(ulong *)param_5 = CONCAT44(fVar8 + fVar13 * fVar27,fVar5 + fVar12 * fVar27);
          *(byte *)(param_5 + 4) = bVar1 | 5;
          fVar6 = 1.0 - fVar27;
        }
        else {
          *(undefined8 *)(param_5 + 2) = param_4[1];
          *(undefined8 *)param_5 = uVar24;
          *(byte *)(param_5 + 4) = bVar1 | 4;
          fVar27 = 1.0;
          fVar6 = 0.0;
        }
        fVar29 = 0.0;
        goto LAB_1098254ac;
      }
      fVar29 = fVar29 / (fVar29 - fVar31);
      param_5[2] = fVar9 + fVar17 * fVar29;
      param_5[3] = fVar11 + 0.0;
      *param_5 = fVar5 + fVar15 * fVar29;
      param_5[1] = fVar8 + fVar16 * fVar29;
      *(byte *)(param_5 + 4) = bVar1 | 3;
      fVar6 = 1.0 - fVar29;
    }
    else {
      *(undefined8 *)(param_5 + 2) = uVar22;
      *(undefined8 *)param_5 = uVar19;
      *(byte *)(param_5 + 4) = bVar1 | 2;
      fVar29 = 1.0;
      fVar6 = 0.0;
    }
  }
  else {
    *(undefined8 *)(param_5 + 2) = uVar10;
    *(undefined8 *)param_5 = uVar7;
    *(byte *)(param_5 + 4) = bVar1 | 1;
    fVar29 = 0.0;
    fVar6 = 1.0;
  }
  fVar27 = 0.0;
LAB_1098254ac:
  param_5[5] = fVar6;
  param_5[6] = fVar29;
  param_5[7] = fVar27;
  param_5[8] = 0.0;
  return;
}



/* Entry: 1098256f4; end: 10982573f;  */

ulong FUN_1098256f4(long param_1,int param_2)

{
  long lVar1;
  ulong uVar2;
  
  lVar1 = param_1 + (param_2 + -1) + 8;
  _malloc();
  uVar2 = 0;
  if (lVar1 != 0) {
    uVar2 = lVar1 + param_2 + 7U & -(long)param_2;
    *(long *)(uVar2 - 8) = lVar1;
  }
  return uVar2;
}



/* Entry: 109825740; end: 10982574f;  */

void FUN_109825740(long param_1)

{
  if (param_1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbe294. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__free_11034c310)(*(undefined8 *)(param_1 + -8));
    return;
  }
  return;
}



/* Entry: 109825750; end: 1098257b7;  */

undefined1  [16] FUN_109825750(long param_1,ulong param_2,ulong param_3)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  undefined1 auVar6 [16];
  
  uVar4 = -param_2;
  if (param_1 != 0) {
    uVar4 = ~param_2;
  }
  uVar1 = param_2;
  if (0x7fffffffffffffff < param_2) {
    uVar1 = uVar4;
  }
  lVar3 = -param_1;
  if (-1 < (long)param_2) {
    lVar3 = param_1;
  }
  uVar4 = -param_3;
  if (-1 < (long)param_3) {
    uVar4 = param_3;
  }
  uVar5 = uVar4;
  FUN_1098257b8(lVar3,uVar4);
  uVar5 = uVar5 + uVar1 * uVar4;
  uVar4 = -uVar5;
  if (lVar3 != 0) {
    uVar4 = ~uVar5;
  }
  lVar2 = -lVar3;
  if (-1 < (long)(param_3 ^ param_2)) {
    uVar4 = uVar5;
    lVar2 = lVar3;
  }
  auVar6._8_8_ = uVar4;
  auVar6._0_8_ = lVar2;
  return auVar6;
}



/* Entry: 1098257b8; end: 109825863;  */

undefined1  [16] FUN_1098257b8(ulong param_1,ulong param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  undefined1 auVar6 [16];
  
  uVar5 = (param_2 & 0xffffffff) * (param_1 & 0xffffffff);
  uVar3 = (param_2 >> 0x20) * (param_1 & 0xffffffff);
  uVar4 = (param_2 & 0xffffffff) * (param_1 >> 0x20);
  uVar2 = (uVar3 & 0xffffffff) + (uVar4 & 0xffffffff);
  uVar1 = uVar2 << 0x20;
  auVar6._8_8_ = (uVar3 >> 0x20) + (param_2 >> 0x20) * (param_1 >> 0x20) + (uVar4 >> 0x20) +
                 (uVar2 >> 0x20) + (ulong)CARRY8(uVar5,uVar1);
  auVar6._0_8_ = uVar5 + uVar1;
  return auVar6;
}



/* Entry: 109825864; end: 1098258f7;  */

int FUN_109825864(ulong *param_1,ulong *param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  uint uVar8;
  
  iVar2 = (int)param_1[2];
  iVar3 = iVar2 - (int)param_2[2];
  if (iVar3 == 0) {
    if (iVar2 == 0) {
      iVar3 = 0;
    }
    else {
      uVar4 = *param_1;
      uVar6 = param_2[1];
      FUN_1098257b8();
      uVar5 = param_1[1];
      uVar7 = *param_2;
      FUN_1098257b8();
      uVar8 = 0xffffffff;
      if (uVar5 <= uVar4) {
        uVar8 = (uint)(uVar5 < uVar4);
      }
      uVar1 = 1;
      if (uVar6 <= uVar7) {
        uVar1 = uVar8;
      }
      uVar8 = 0xffffffff;
      if (uVar7 <= uVar6) {
        uVar8 = uVar1;
      }
      iVar3 = uVar8 * iVar2;
    }
  }
  return iVar3;
}



/* Entry: 1098258f8; end: 1098259ff;  */

int FUN_1098258f8(long *param_1,undefined8 *param_2)

{
  int iVar1;
  uint uVar2;
  ulong uStack_70;
  ulong uStack_68;
  ulong uStack_60;
  ulong uStack_58;
  ulong uStack_50;
  ulong uStack_48;
  ulong uStack_40;
  ulong uStack_38;
  
  iVar1 = (int)param_1[4];
  if (iVar1 != *(int *)(param_2 + 4)) {
    return iVar1 - *(int *)(param_2 + 4);
  }
  if (iVar1 == 0) {
    return 0;
  }
  if (*(char *)((long)param_1 + 0x24) == '\x01') {
    FUN_109825a00(param_2,*param_1 * (long)iVar1);
    return -(int)param_2;
  }
  FUN_109825ac4(*param_1,param_1[1],param_2[2],param_2[3],&uStack_40,&uStack_50);
  FUN_109825ac4(param_1[2],param_1[3],*param_2,param_2[1],&uStack_60,&uStack_70);
  if (uStack_48 < uStack_68) {
LAB_109825994:
    uVar2 = 0xffffffff;
  }
  else {
    if (uStack_48 == uStack_68) {
      if (uStack_50 < uStack_70) goto LAB_109825994;
      if (uStack_50 <= uStack_70) {
        if (uStack_38 < uStack_58) goto LAB_109825994;
        if (uStack_38 <= uStack_58) {
          uVar2 = 0xffffffff;
          if (uStack_60 <= uStack_40) {
            uVar2 = (uint)(uStack_60 < uStack_40);
          }
          goto LAB_1098259a4;
        }
      }
    }
    uVar2 = 1;
  }
LAB_1098259a4:
  return uVar2 * iVar1;
}



/* Entry: 109825a00; end: 109825ac3;  */

uint FUN_109825a00(ulong *param_1,long param_2)

{
  ulong uVar1;
  ulong uVar2;
  uint uVar3;
  long lVar4;
  uint uVar5;
  
  if (*(char *)((long)param_1 + 0x24) == '\x01') {
    lVar4 = *param_1 * (long)(int)param_1[4];
    if (param_2 <= lVar4) {
      return (uint)(lVar4 - param_2 != 0 && param_2 <= lVar4);
    }
    return 0xffffffff;
  }
  if (param_2 < 1) {
    uVar5 = (uint)param_1[4];
    if (-1 < param_2) {
      return uVar5;
    }
    if (-1 < (int)uVar5) {
      return 1;
    }
    param_2 = -param_2;
  }
  else {
    uVar5 = (uint)param_1[4];
    if ((int)uVar5 < 1) {
      return 0xffffffff;
    }
  }
  uVar1 = param_1[2];
  uVar2 = param_1[3];
  FUN_109825750(uVar1,uVar2,param_2);
  if (param_1[1] < uVar2) {
    uVar3 = 0xffffffff;
  }
  else if (param_1[1] == uVar2) {
    uVar3 = 0xffffffff;
    if (uVar1 <= *param_1) {
      uVar3 = (uint)(uVar1 < *param_1);
    }
  }
  else {
    uVar3 = 1;
  }
  return uVar3 * uVar5;
}



/* Entry: 109825ac4; end: 109825b8f;  */

void FUN_109825ac4(ulong param_1,ulong param_2,ulong param_3,ulong param_4,ulong *param_5,
                  long *param_6)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  uint uVar9;
  
  uVar4 = param_1;
  uVar6 = param_3;
  FUN_1098257b8();
  uVar7 = param_4;
  FUN_1098257b8();
  uVar5 = param_2;
  FUN_1098257b8();
  FUN_1098257b8();
  uVar1 = param_2 + uVar7;
  uVar2 = uVar5 + param_1;
  lVar8 = uVar1 + param_3 + (ulong)CARRY8(uVar5,param_1);
  lVar3 = lVar8 + 1;
  if (!CARRY8(uVar2,uVar6)) {
    lVar3 = lVar8;
  }
  uVar9 = 0;
  if (lVar8 == -1) {
    uVar9 = (uint)CARRY8(uVar2,uVar6);
  }
  *param_5 = uVar4;
  param_5[1] = uVar2 + uVar6;
  *param_6 = lVar3;
  param_6[1] = param_4 + CARRY8(param_2,uVar7) +
               (ulong)(CARRY8(uVar1,param_3) || CARRY8(uVar1 + param_3,(ulong)CARRY8(uVar5,param_1))
                      ) + (ulong)uVar9;
  return;
}



/* Entry: 109825b90; end: 109825c07;  */

long FUN_109825b90(long param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  long lVar4;
  long lVar5;
  
  lVar4 = param_1 + 0x40;
  FUN_109825c08();
  lVar5 = param_1 + 0x40;
  FUN_109825c08();
  uVar3 = *(undefined4 *)(param_1 + 0xa0);
  *(undefined4 *)(lVar4 + 0x28) = uVar3;
  *(undefined4 *)(lVar5 + 0x28) = uVar3;
  *(long *)(lVar4 + 0x10) = lVar5;
  *(undefined8 *)(lVar4 + 0x18) = param_3;
  *(long *)(lVar5 + 0x10) = lVar4;
  *(undefined8 *)(lVar5 + 0x18) = param_2;
  *(undefined8 *)(lVar4 + 0x20) = 0;
  *(undefined8 *)(lVar5 + 0x20) = 0;
  iVar2 = *(int *)(param_1 + 0xb0);
  iVar1 = iVar2 + 1;
  *(int *)(param_1 + 0xb0) = iVar1;
  if (*(int *)(param_1 + 0xb4) <= iVar2) {
    *(int *)(param_1 + 0xb4) = iVar1;
  }
  return lVar4;
}



/* Entry: 109825c08; end: 109825cc7;  */

void FUN_109825c08(undefined8 *param_1)

{
  undefined8 *puVar1;
  int iVar2;
  undefined8 *puVar3;
  int iVar4;
  int iVar5;
  undefined8 *puVar6;
  
  puVar3 = (undefined8 *)param_1[2];
  if (puVar3 == (undefined8 *)0x0) {
    puVar6 = (undefined8 *)param_1[1];
    if (puVar6 == (undefined8 *)0x0) {
      puVar6 = (undefined8 *)0x18;
      FUN_1098256f4(0x18,0x10);
      iVar2 = *(int *)(param_1 + 3);
      *(int *)(puVar6 + 1) = iVar2;
      puVar6[2] = 0;
      puVar3 = (undefined8 *)((long)iVar2 * 0x30);
      FUN_1098256f4(puVar3,0x10);
      *puVar6 = puVar3;
      puVar6[2] = *param_1;
      *param_1 = puVar6;
    }
    else {
      param_1[1] = puVar6[2];
      puVar3 = (undefined8 *)*puVar6;
    }
    iVar2 = *(int *)(puVar6 + 1);
    if (0 < iVar2) {
      iVar4 = 1;
      iVar5 = iVar2;
      puVar6 = puVar3;
      do {
        puVar1 = puVar6 + 6;
        if (iVar2 <= iVar4) {
          puVar1 = (undefined8 *)0x0;
        }
        *puVar6 = puVar1;
        iVar4 = iVar4 + 1;
        iVar5 = iVar5 + -1;
        puVar6 = puVar6 + 6;
      } while (iVar5 != 0);
    }
  }
  param_1[2] = *puVar3;
  puVar3[3] = 0;
  puVar3[2] = 0;
  puVar3[5] = 0;
  puVar3[4] = 0;
  puVar3[1] = 0;
  *puVar3 = 0;
  return;
}



/* Entry: 109825cc8; end: 10982692b;  */

void FUN_109825cc8(long *param_1,undefined8 param_2,long param_3,long *param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  bool bVar4;
  bool bVar5;
  int iVar6;
  long *plVar8;
  int iVar9;
  undefined8 *puVar10;
  long *plVar11;
  int iVar12;
  undefined8 *puVar13;
  ulong uVar14;
  long lVar15;
  ulong uVar16;
  long *plVar17;
  undefined8 *puVar18;
  int iVar19;
  long lVar20;
  long *plVar21;
  long lVar22;
  undefined8 *puVar23;
  undefined8 *puVar24;
  long *plVar25;
  long *plVar26;
  undefined8 *puVar27;
  long *plVar28;
  long lVar29;
  long lVar30;
  long *plVar31;
  long *plStack_180;
  long *plStack_178;
  long *plStack_160;
  long *plStack_150;
  long *plStack_148;
  long *plStack_128;
  long *plStack_120;
  long lStack_118;
  long *plStack_110;
  long *plStack_108;
  long *plStack_100;
  long lStack_f8;
  long *plStack_f0;
  long *plStack_e8;
  long *plStack_e0;
  long lStack_d8;
  int iStack_d0;
  long *plStack_c8;
  long lStack_c0;
  int iStack_b8;
  long lStack_b0;
  long lStack_a8;
  long lStack_a0;
  ulong uStack_90;
  ulong uStack_88;
  long lStack_80;
  ulong uStack_78;
  ulong uStack_70;
  long **pplVar7;
  
  iVar9 = (int)param_2;
  iVar12 = (int)param_3;
  iVar19 = iVar12 - iVar9;
  if (iVar19 == 2) {
    plVar21 = *(long **)(param_1[0x12] + (long)iVar9 * 8);
    plVar17 = plVar21 + 0x10;
    iVar19 = (int)plVar21[0xd];
    iVar12 = *(int *)((long)plVar21 + 0x6c);
    iVar9 = (int)plVar21[0x1d];
    iVar6 = *(int *)((long)plVar21 + 0xec);
    if (iVar19 == iVar9 && iVar12 == iVar6) {
      iVar19 = (int)plVar21[0xe];
      iVar9 = (int)plVar21[0x1e];
      if (iVar19 == iVar9) {
        plVar21[1] = (long)plVar21;
        plVar21[2] = 0;
        *plVar21 = (long)plVar21;
        *param_4 = (long)plVar21;
        param_4[1] = (long)plVar21;
        param_4[2] = (long)plVar21;
        param_4[3] = (long)plVar21;
        return;
      }
      lVar29 = 0x80;
      plVar25 = plVar17;
      if (iVar19 <= iVar9) {
        lVar29 = 0;
        plVar25 = plVar21;
      }
      *(long *)((long)plVar21 + lVar29) = (long)plVar21 + lVar29;
      plVar25[1] = (long)plVar25;
      plVar28 = plVar21;
      if (iVar19 <= iVar9) {
        plVar28 = plVar17;
      }
      *param_4 = (long)plVar25;
      param_4[1] = (long)plVar25;
      plVar26 = plVar25;
      plVar21 = plVar25;
      plVar17 = plVar28;
    }
    else {
      *plVar21 = (long)plVar17;
      plVar21[1] = (long)plVar17;
      plVar21[0x10] = (long)plVar21;
      plVar21[0x11] = (long)plVar21;
      plVar25 = plVar17;
      plVar28 = plVar21;
      if (iVar9 <= iVar19 && (iVar6 <= iVar12 || iVar19 != iVar9)) {
        plVar25 = plVar21;
        plVar28 = plVar17;
      }
      *param_4 = (long)plVar28;
      param_4[1] = (long)plVar25;
      plVar25 = plVar21;
      plVar26 = plVar17;
      if (iVar6 <= iVar12 && (iVar12 != iVar6 || iVar9 <= iVar19)) {
        plVar25 = plVar17;
        plVar26 = plVar21;
      }
    }
    param_4[2] = (long)plVar25;
    param_4[3] = (long)plVar26;
    FUN_109825b90(param_1,plVar21,plVar17);
    *param_1 = (long)param_1;
    param_1[1] = (long)param_1;
    plVar21[2] = (long)param_1;
    lVar29 = param_1[2];
    *(long *)lVar29 = lVar29;
    *(long *)(lVar29 + 8) = lVar29;
    plVar17[2] = lVar29;
    return;
  }
  if (iVar19 == 1) {
    lVar29 = *(long *)(param_1[0x12] + (long)iVar9 * 8);
    *(long *)(lVar29 + 8) = lVar29;
    *(undefined8 *)(lVar29 + 0x10) = 0;
    *(long *)lVar29 = lVar29;
    *param_4 = lVar29;
    param_4[1] = lVar29;
    param_4[2] = lVar29;
    param_4[3] = lVar29;
    return;
  }
  if (iVar19 == 0) {
    param_4[1] = 0;
    *param_4 = 0;
    param_4[3] = 0;
    param_4[2] = 0;
    return;
  }
  lVar29 = ((long)((ulong)(uint)(iVar19 - (iVar19 >> 0x1f)) << 0x20) >> 0x21) + (long)iVar9;
  lVar30 = lVar29;
  if ((int)lVar29 < iVar12) {
    lVar20 = *(long *)(param_1[0x12] + lVar29 * 8 + -8);
    lVar15 = lVar29;
    do {
      lVar22 = *(long *)(param_1[0x12] + lVar15 * 8);
      lVar30 = lVar15;
      if (((*(int *)(lVar22 + 0x68) != *(int *)(lVar20 + 0x68)) ||
          (*(int *)(lVar22 + 0x6c) != *(int *)(lVar20 + 0x6c))) ||
         (*(int *)(lVar22 + 0x70) != *(int *)(lVar20 + 0x70))) break;
      lVar15 = lVar15 + 1;
      lVar30 = param_3;
    } while (lVar15 < iVar12);
  }
  FUN_109825cc8(param_1,param_2,lVar29,param_4);
  plStack_108 = (long *)0x0;
  plStack_110 = (long *)0x0;
  lStack_f8 = 0;
  plStack_100 = (long *)0x0;
  FUN_109825cc8(param_1,lVar30,param_3,&plStack_110);
  if (plStack_108 == (long *)0x0) {
    return;
  }
  puVar13 = (undefined8 *)param_4[1];
  if (puVar13 == (undefined8 *)0x0) {
    param_4[1] = (long)plStack_108;
    *param_4 = (long)plStack_110;
    param_4[3] = lStack_f8;
    param_4[2] = (long)plStack_100;
    return;
  }
  *(int *)(param_1 + 0x14) = (int)param_1[0x14] + -1;
  puVar27 = (undefined8 *)param_4[3];
  iVar19 = *(int *)(puVar27 + 0xd);
  if ((iVar19 == (int)plStack_100[0xd]) &&
     (iVar9 = *(int *)((long)puVar27 + 0x6c), iVar9 == *(int *)((long)plStack_100 + 0x6c))) {
    plVar17 = (long *)plStack_100[1];
    if (plVar17 == plStack_100) {
      plVar25 = plStack_100;
      if (plStack_100[2] != 0) {
        plVar25 = *(long **)(plStack_100[2] + 0x18);
        iVar19 = (int)plVar25[0xd];
        iVar9 = *(int *)((long)plVar25 + 0x6c);
      }
      iVar12 = (int)plVar25[0xe];
      iVar19 = iVar19 + 1;
      goto LAB_109826480;
    }
    plVar21 = (long *)*plStack_100;
    *plVar17 = (long)plVar21;
    plVar21[1] = (long)plVar17;
    if (((plStack_100 == plStack_110) &&
        (plStack_110 = plVar21, (int)plVar17[0xd] <= (int)plVar21[0xd])) &&
       (((int)plVar21[0xd] != (int)plVar17[0xd] ||
        (*(int *)((long)plVar17 + 0x6c) <= *(int *)((long)plVar21 + 0x6c))))) {
      plStack_110 = plVar17;
    }
    if (((plStack_100 == plStack_108) &&
        (plStack_108 = plVar21, (int)plVar21[0xd] <= (int)plVar17[0xd])) &&
       (((int)plVar21[0xd] != (int)plVar17[0xd] ||
        (*(int *)((long)plVar21 + 0x6c) <= *(int *)((long)plVar17 + 0x6c))))) {
      plStack_108 = plVar17;
    }
  }
  puVar18 = (undefined8 *)*param_4;
  iVar19 = 1;
  puVar23 = puVar13;
  plVar17 = plStack_108;
  puVar24 = (undefined8 *)0x0;
  plVar21 = (long *)0x0;
  bVar4 = true;
  do {
    bVar5 = bVar4;
    plVar25 = plVar21;
    puVar27 = puVar24;
    iVar9 = *(int *)(puVar23 + 0xd);
    iVar12 = ((int)plVar17[0xd] - iVar9) * iVar19;
    if (0 < iVar12) {
      lVar29 = 8;
      if (!bVar5) {
        lVar29 = 0;
      }
      do {
        plVar21 = plVar17;
        puVar24 = puVar23;
        iVar9 = iVar12;
        while( true ) {
          iVar12 = *(int *)((long)puVar24 + 0x6c);
          iVar6 = *(int *)((long)plVar21 + 0x6c) - iVar12;
          puVar23 = *(undefined8 **)((long)puVar24 + lVar29);
          if ((puVar23 == puVar24) ||
             (iVar3 = *(int *)((long)puVar23 + 0x6c) - iVar12,
             iVar3 != 0 && iVar12 <= *(int *)((long)puVar23 + 0x6c))) break;
          iVar12 = *(int *)(puVar23 + 0xd);
          if ((iVar12 != *(int *)(puVar24 + 0xd)) &&
             ((iVar1 = (iVar12 - *(int *)(puVar24 + 0xd)) * iVar19, -1 < iVar1 ||
              (iVar1 * iVar6 < iVar3 * iVar9)))) break;
          iVar9 = ((int)plVar21[0xd] - iVar12) * iVar19;
          puVar24 = puVar23;
        }
        plVar17 = *(long **)((long)plVar21 + lVar29);
        if (plVar17 == plVar21) goto LAB_109826188;
        iVar3 = (int)plVar17[0xd];
        iVar12 = (iVar3 - *(int *)(puVar24 + 0xd)) * iVar19;
        if (((iVar12 < 1) ||
            (iVar1 = *(int *)((long)plVar17 + 0x6c) - *(int *)((long)plVar21 + 0x6c), -1 < iVar1))
           || ((iVar2 = (iVar3 - (int)plVar21[0xd]) * iVar19, puVar23 = puVar24,
               iVar3 != (int)plVar21[0xd] && ((-1 < iVar2 || (iVar2 * iVar6 <= iVar1 * iVar9))))))
        goto LAB_109826188;
      } while( true );
    }
    if (iVar12 < 0) {
      lVar29 = 0;
      if (!bVar5) {
        lVar29 = 8;
      }
LAB_1098260b4:
      plVar28 = *(long **)((long)plVar17 + lVar29);
      puVar10 = puVar23;
      do {
        iVar6 = iVar12;
        puVar23 = puVar10;
        iVar9 = *(int *)((long)plVar17 + 0x6c) - *(int *)((long)puVar23 + 0x6c);
        if ((plVar28 != plVar17) &&
           (iVar12 = *(int *)((long)plVar28 + 0x6c) - *(int *)((long)plVar17 + 0x6c), -1 < iVar12))
        {
          iVar3 = (int)plVar28[0xd];
          if ((iVar3 == (int)plVar17[0xd]) ||
             ((iVar1 = (iVar3 - (int)plVar17[0xd]) * iVar19, iVar1 < 0 &&
              (iVar12 * iVar6 <= iVar1 * iVar9)))) goto LAB_10982616c;
        }
        puVar10 = *(undefined8 **)((long)puVar23 + lVar29);
        puVar24 = puVar23;
        plVar21 = plVar17;
        if (puVar10 == puVar23) goto LAB_109826188;
        iVar3 = *(int *)(puVar10 + 0xd);
        iVar12 = ((int)plVar17[0xd] - iVar3) * iVar19;
        if (((-1 < iVar12) ||
            (iVar1 = *(int *)((long)puVar10 + 0x6c) - *(int *)((long)puVar23 + 0x6c), iVar1 < 1)) ||
           ((iVar2 = (iVar3 - *(int *)(puVar23 + 0xd)) * iVar19, iVar3 != *(int *)(puVar23 + 0xd) &&
            ((-1 < iVar2 || (iVar2 * iVar9 <= iVar1 * iVar6)))))) goto LAB_109826188;
      } while( true );
    }
    iVar19 = *(int *)((long)puVar23 + 0x6c);
    lVar29 = 8;
    puVar10 = puVar23;
    if (!bVar5) {
      lVar29 = 0;
    }
    do {
      puVar24 = puVar10;
      puVar10 = *(undefined8 **)((long)puVar24 + lVar29);
      if ((puVar10 == puVar23) || (*(int *)(puVar10 + 0xd) != iVar9)) break;
      bVar4 = *(int *)((long)puVar10 + 0x6c) <= iVar19;
      iVar19 = *(int *)((long)puVar10 + 0x6c);
    } while (bVar4);
    iVar19 = *(int *)((long)plVar17 + 0x6c);
    lVar29 = 0;
    plVar28 = plVar17;
    if (!bVar5) {
      lVar29 = 8;
    }
    do {
      plVar21 = plVar28;
      plVar28 = *(long **)((long)plVar21 + lVar29);
      if ((plVar28 == plVar17) || ((int)plVar28[0xd] != iVar9)) break;
      bVar4 = iVar19 <= *(int *)((long)plVar28 + 0x6c);
      iVar19 = *(int *)((long)plVar28 + 0x6c);
    } while (bVar4);
LAB_109826188:
    iVar19 = -1;
    puVar23 = puVar18;
    plVar17 = plStack_110;
    bVar4 = false;
  } while (bVar5);
  puVar24[1] = plVar21;
  *plVar21 = (long)puVar24;
  *puVar27 = plVar25;
  plVar25[1] = (long)puVar27;
  if ((int)plStack_110[0xd] < *(int *)(puVar18 + 0xd)) {
    *param_4 = (long)plStack_110;
  }
  if (*(int *)(puVar13 + 0xd) <= (int)plStack_108[0xd]) {
    param_4[1] = (long)plStack_108;
  }
  param_4[3] = lStack_f8;
  iVar19 = (int)plVar25[0xd];
  iVar9 = *(int *)((long)plVar25 + 0x6c);
  iVar6 = *(int *)(puVar27 + 0xd);
  iVar3 = *(int *)((long)puVar27 + 0x6c);
  uVar14 = (long)iVar19 - (long)iVar6;
  lVar29 = (long)iVar9 - (long)iVar3;
  iVar12 = (int)plVar25[0xe];
  iVar1 = *(int *)(puVar27 + 0xe);
  uVar16 = (long)iVar12 - (long)iVar1;
  uStack_90 = uVar14 & 0xffffffff | lVar29 << 0x20;
  uStack_88 = uVar16 | 0xffffffff00000000;
  lVar30 = -(lVar29 * lVar29) - uVar14 * uVar14;
  plVar17 = (long *)puVar27[2];
  plStack_c8 = (long *)0x0;
  if (plVar17 == (long *)0x0) {
    bVar4 = false;
  }
  else {
    plVar21 = (long *)0x0;
    plVar28 = plVar17;
    do {
      lVar15 = plVar28[3];
      lVar20 = (long)*(int *)(lVar15 + 0x68) - (long)iVar6;
      lVar22 = (long)*(int *)(lVar15 + 0x6c) - (long)iVar3;
      if ((lVar22 * -uVar14 + lVar29 * lVar20 == 0) &&
         (0 < (long)(uVar16 * uVar14 * lVar20 + uVar16 * lVar29 * lVar22 +
                    lVar30 * ((long)*(int *)(lVar15 + 0x70) - (long)iVar1)))) {
        if (plVar21 != (long *)0x0) {
          lStack_a8 = 0xffffffffffffffff;
          lStack_b0 = 0;
          plVar26 = plVar21;
          FUN_10982692c(plVar21,plVar28,&uStack_90,&lStack_b0);
          if ((int)plVar26 != 1) goto LAB_1098262c4;
        }
        plVar21 = plVar28;
      }
LAB_1098262c4:
      plVar28 = (long *)*plVar28;
    } while (plVar28 != plVar17);
    bVar4 = plVar21 != (long *)0x0;
    plStack_c8 = plVar21;
  }
  plVar17 = (long *)plVar25[2];
  plStack_e0 = (long *)0x0;
  if (plVar17 == (long *)0x0) {
    bVar5 = false;
  }
  else {
    plVar21 = (long *)0x0;
    plVar28 = plVar17;
    do {
      lVar15 = plVar28[3];
      lVar20 = (long)*(int *)(lVar15 + 0x68) - (long)iVar19;
      lVar22 = (long)*(int *)(lVar15 + 0x6c) - (long)iVar9;
      if ((lVar22 * -uVar14 + lVar29 * lVar20 == 0) &&
         (0 < (long)(uVar16 * uVar14 * lVar20 + uVar16 * lVar29 * lVar22 +
                    lVar30 * ((long)*(int *)(lVar15 + 0x70) - (long)iVar12)))) {
        if (plVar21 != (long *)0x0) {
          lStack_a8 = 0xffffffffffffffff;
          lStack_b0 = 0;
          plVar26 = plVar21;
          FUN_10982692c(plVar21,plVar28,&uStack_90,&lStack_b0);
          if ((int)plVar26 != 2) goto LAB_109826400;
        }
        plVar21 = plVar28;
      }
LAB_109826400:
      plVar28 = (long *)*plVar28;
    } while (plVar28 != plVar17);
    bVar5 = plVar21 != (long *)0x0;
    plStack_e0 = plVar21;
  }
  if (bVar4 || bVar5) {
    func_0x000109826ba8(param_1,puVar27,plVar25,&plStack_c8,&plStack_e0);
    if (plStack_c8 != (long *)0x0) {
      puVar27 = (undefined8 *)plStack_c8[3];
    }
    if (plStack_e0 != (long *)0x0) {
      plVar25 = (long *)plStack_e0[3];
      iVar19 = (int)plVar25[0xd];
      iVar9 = *(int *)((long)plVar25 + 0x6c);
      iVar12 = (int)plVar25[0xe];
    }
  }
  iVar12 = iVar12 + 1;
LAB_109826480:
  plStack_178 = (long *)0x0;
  plStack_150 = (long *)0x0;
  plStack_148 = (long *)0x0;
  plStack_128 = (long *)0x0;
  plStack_120 = (long *)0x0;
  plStack_180 = (long *)0x0;
  plStack_160 = (long *)0x0;
  lStack_118 = 0;
  bVar4 = true;
  plVar17 = plVar25;
  puVar13 = puVar27;
  do {
    uVar14 = (long)(int)plVar17[0xd] - (long)*(int *)(puVar13 + 0xd);
    lVar29 = (long)*(int *)((long)plVar17 + 0x6c) - (long)*(int *)((long)puVar13 + 0x6c);
    uVar16 = (long)(int)plVar17[0xe] - (long)*(int *)(puVar13 + 0xe);
    lVar30 = (long)iVar19 - (long)*(int *)(puVar13 + 0xd);
    lVar15 = (long)iVar9 - (long)*(int *)((long)puVar13 + 0x6c);
    lVar20 = (long)iVar12 - (long)*(int *)(puVar13 + 0xe);
    uStack_90 = uVar16 * lVar15 - lVar20 * lVar29;
    uStack_88 = lVar20 * uVar14 - uVar16 * lVar30;
    lStack_80 = lVar29 * lVar30 - lVar15 * uVar14;
    lStack_a8 = uStack_90 * uVar16 - lStack_80 * uVar14;
    uStack_78 = uVar14 & 0xffffffff | lVar29 << 0x20;
    uStack_70 = uVar16 | 0xffffffff00000000;
    lStack_b0 = lStack_80 * lVar29 - uStack_88 * uVar16;
    lStack_a0 = uStack_88 * uVar14 - uStack_90 * lVar29;
    plStack_c8 = (long *)0x0;
    lStack_c0 = 0;
    iStack_b8 = 0;
    plVar21 = param_1;
    func_0x0001098269ec(param_1,0,puVar13,&uStack_78,&uStack_90,&lStack_b0,&plStack_c8);
    plStack_e0 = (long *)0x0;
    lStack_d8 = 0;
    iStack_d0 = 0;
    plVar28 = param_1;
    func_0x0001098269ec(param_1,1,plVar17,&uStack_78,&uStack_90,&lStack_b0,&plStack_e0);
    if (plVar21 == (long *)0x0 && plVar28 == (long *)0x0) {
      FUN_109825b90(param_1,puVar13,plVar17);
      *param_1 = (long)param_1;
      param_1[1] = (long)param_1;
      puVar13[2] = param_1;
      lVar29 = param_1[2];
      *(long *)lVar29 = lVar29;
      *(long *)(lVar29 + 8) = lVar29;
      plVar17[2] = lVar29;
      return;
    }
    iVar6 = 1;
    if ((plVar21 != (long *)0x0) && (iVar6 = -1, plVar28 != (long *)0x0)) {
      pplVar7 = &plStack_c8;
      FUN_109825864(pplVar7,&plStack_e0);
      iVar6 = (int)pplVar7;
    }
    plVar26 = plVar21;
    if (bVar4) {
LAB_1098265b4:
      plVar11 = param_1;
      FUN_109825b90(param_1,puVar13,plVar17);
      plVar8 = plVar11;
      if (plStack_120 != (long *)0x0) {
        plStack_120[1] = (long)plVar11;
        plVar8 = plStack_150;
      }
      plStack_150 = plVar8;
      *plVar11 = (long)plStack_120;
      plVar31 = (long *)plVar11[2];
      plVar8 = plVar31;
      if (plStack_148 != (long *)0x0) {
        *plStack_148 = (long)plVar31;
        plVar8 = plStack_128;
      }
      plVar31[1] = (long)plStack_148;
      plStack_120 = plVar11;
      plStack_148 = plVar31;
      plStack_128 = plVar8;
LAB_109826600:
      plStack_f0 = plVar28;
      plStack_e8 = plVar21;
      if (iVar6 == 0) {
        func_0x000109826ba8(param_1,puVar13,plVar17,&plStack_e8,&plStack_f0);
      }
      else if (iVar6 < 0) goto LAB_109826720;
      plVar11 = plStack_f0;
      plVar26 = plStack_e8;
      if (plStack_f0 != (long *)0x0) {
        if (plStack_160 == (long *)0x0) {
          plStack_180 = plVar28;
          if (plStack_148 != (long *)0x0) {
            plStack_160 = (long *)plVar28[1];
            plStack_180 = plStack_128;
            goto LAB_1098266e4;
          }
        }
        else {
          plVar26 = (long *)*plStack_160;
          while (plVar26 != plVar28) {
            plVar26 = (long *)*plVar26;
            FUN_109827534(param_1);
          }
          if (plStack_148 != (long *)0x0) {
LAB_1098266e4:
            *plStack_160 = (long)plStack_128;
            plStack_128[1] = (long)plStack_160;
            plStack_128 = (long *)0x0;
            *plStack_148 = (long)plVar28;
            plVar28[1] = (long)plStack_148;
            plVar11 = plStack_f0;
          }
        }
        iVar19 = (int)plVar17[0xd];
        iVar9 = *(int *)((long)plVar17 + 0x6c);
        iVar12 = (int)plVar17[0xe];
        plStack_148 = (long *)0x0;
        plStack_160 = (long *)plVar11[2];
        plVar17 = (long *)plVar11[3];
        plVar26 = plStack_e8;
      }
    }
    else {
      if (-1 < iVar6) {
        if ((-1 < iStack_d0) || (lStack_d8 != 0)) goto LAB_1098265b4;
        goto LAB_109826600;
      }
      if ((-1 < iStack_b8) || (lStack_c0 != 0)) goto LAB_1098265b4;
    }
LAB_109826720:
    plStack_e8 = plVar26;
    plVar28 = plStack_e8;
    if ((iVar6 < 1) && (plStack_e8 != (long *)0x0)) {
      if (lStack_118 == 0) {
        plStack_178 = plVar21;
        if (plStack_120 != (long *)0x0) {
          lVar29 = *plVar21;
          *plStack_150 = lVar29;
          plVar26 = (long *)(lVar29 + 8);
          plStack_178 = plStack_150;
          goto LAB_1098267a0;
        }
      }
      else {
        plVar26 = (long *)(lStack_118 + 8);
        plVar11 = (long *)*plVar26;
        while (plVar11 != plVar21) {
          plVar11 = (long *)plVar11[1];
          FUN_109827534(param_1);
        }
        if (plStack_120 != (long *)0x0) {
          *plStack_150 = lStack_118;
LAB_1098267a0:
          *plVar26 = (long)plStack_150;
          *plVar21 = (long)plStack_120;
          plStack_120[1] = (long)plVar21;
          plStack_150 = (long *)0x0;
          plVar28 = plStack_e8;
        }
      }
      plStack_120 = (long *)0x0;
      iVar19 = *(int *)(puVar13 + 0xd);
      iVar9 = *(int *)((long)puVar13 + 0x6c);
      iVar12 = *(int *)(puVar13 + 0xe);
      lStack_118 = plVar28[2];
      puVar13 = (undefined8 *)plVar28[3];
    }
    if (puVar13 == puVar27 && plVar17 == plVar25) {
      if (lStack_118 == 0) {
        *plStack_150 = (long)plStack_120;
        plStack_120[1] = (long)plStack_150;
        puVar13[2] = plStack_120;
      }
      else {
        plVar21 = *(long **)(lStack_118 + 8);
        while (plVar21 != plStack_178) {
          plVar21 = (long *)plVar21[1];
          FUN_109827534(param_1);
        }
        if (plStack_120 != (long *)0x0) {
          *plStack_150 = lStack_118;
          *(long **)(lStack_118 + 8) = plStack_150;
          *plStack_178 = (long)plStack_120;
          plStack_120[1] = (long)plStack_178;
        }
      }
      if (plStack_160 != (long *)0x0) {
        plVar17 = (long *)*plStack_160;
        while (plVar17 != plStack_180) {
          plVar17 = (long *)*plVar17;
          FUN_109827534(param_1);
        }
        if (plStack_148 == (long *)0x0) {
          return;
        }
        *plStack_160 = (long)plStack_128;
        plStack_128[1] = (long)plStack_160;
        *plStack_148 = (long)plStack_180;
        plStack_180[1] = (long)plStack_148;
        return;
      }
      *plStack_148 = (long)plStack_128;
      plStack_128[1] = (long)plStack_148;
      plVar17[2] = (long)plStack_148;
      return;
    }
    bVar4 = false;
  } while( true );
LAB_10982616c:
  iVar12 = (iVar3 - *(int *)(puVar23 + 0xd)) * iVar19;
  plVar17 = plVar28;
  goto LAB_1098260b4;
}



/* Entry: 10982692c; end: 1098269eb;  */

bool FUN_10982692c(long *param_1,long param_2,int *param_3,int *param_4)

{
  undefined1 uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  
  if (*param_1 != param_2) {
    return param_1[1] == param_2;
  }
  if (param_1[1] != param_2) {
    return (bool)2;
  }
  lVar2 = param_1[3];
  lVar4 = *(long *)(param_2 + 0x18);
  lVar3 = *(long *)(*(long *)(param_2 + 0x10) + 0x18);
  lVar5 = (long)*(int *)(lVar2 + 0x68) - (long)*(int *)(lVar3 + 0x68);
  lVar7 = (long)*(int *)(lVar4 + 0x68) - (long)*(int *)(lVar3 + 0x68);
  lVar6 = (long)*(int *)(lVar2 + 0x6c) - (long)*(int *)(lVar3 + 0x6c);
  lVar2 = (long)*(int *)(lVar2 + 0x70) - (long)*(int *)(lVar3 + 0x70);
  lVar8 = (long)*(int *)(lVar4 + 0x6c) - (long)*(int *)(lVar3 + 0x6c);
  lVar4 = (long)*(int *)(lVar4 + 0x70) - (long)*(int *)(lVar3 + 0x70);
  uVar1 = 1;
  if (0 < (lVar8 * lVar5 - lVar7 * lVar6) *
          ((long)*param_4 * (long)param_3[1] - (long)*param_3 * (long)param_4[1]) +
          (lVar4 * lVar6 - lVar8 * lVar2) *
          ((long)param_3[2] * (long)param_4[1] - (long)param_3[1] * (long)param_4[2]) +
          (lVar7 * lVar2 - lVar4 * lVar5) *
          ((long)*param_3 * (long)param_4[2] - (long)*param_4 * (long)param_3[2])) {
    uVar1 = 2;
  }
  return (bool)uVar1;
}



/* Entry: 1098269ec; end: 109827533;  */

long * FUN_1098269ec(long param_1,uint param_2,long param_3,undefined8 param_4,long *param_5,
                    long *param_6,long *param_7)

{
  long *plVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  bool bVar6;
  undefined4 uVar7;
  long *plVar8;
  long *plVar9;
  long *plVar10;
  long lStack_88;
  long lStack_80;
  undefined4 uStack_78;
  ulong uStack_70;
  ulong uStack_68;
  
  plVar1 = *(long **)(param_3 + 0x10);
  if (plVar1 == (long *)0x0) {
    plVar9 = (long *)0x0;
  }
  else {
    plVar8 = (long *)0x0;
    plVar10 = plVar1;
    do {
      plVar9 = plVar8;
      if (*(int *)(param_1 + 0xa0) < (int)plVar10[5]) {
        lVar4 = plVar10[3];
        uVar2 = (long)*(int *)(lVar4 + 0x68) - (long)*(int *)(param_3 + 0x68);
        lVar3 = (long)*(int *)(lVar4 + 0x6c) - (long)*(int *)(param_3 + 0x6c);
        uVar5 = (long)*(int *)(lVar4 + 0x70) - (long)*(int *)(param_3 + 0x70);
        uStack_70 = uVar2 & 0xffffffff | lVar3 << 0x20;
        uStack_68 = uVar5 | 0xffffffff00000000;
        lStack_88 = *param_6 * uVar2 + param_6[1] * lVar3 + param_6[2] * uVar5;
        if (lStack_88 < 1) {
          if (lStack_88 < 0) {
            bVar6 = false;
            uStack_78 = 0xffffffff;
            lStack_88 = -lStack_88;
            uVar7 = 1;
          }
          else {
            lStack_88 = 0;
            uVar7 = 0;
            uStack_78 = 0;
            bVar6 = true;
          }
        }
        else {
          bVar6 = false;
          uStack_78 = 1;
          uVar7 = 0xffffffff;
        }
        lStack_80 = *param_5 * uVar2 + param_5[1] * lVar3 + param_5[2] * uVar5;
        if (lStack_80 < 1) {
          if (lStack_80 < 0) {
            lStack_80 = -lStack_80;
            uStack_78 = uVar7;
            goto LAB_109826af8;
          }
          lStack_80 = 0;
          if (!bVar6) goto LAB_109826af8;
        }
        else {
LAB_109826af8:
          if (plVar8 != (long *)0x0) {
            plVar1 = &lStack_88;
            FUN_109825864(plVar1,param_7);
            if (-1 < (int)plVar1) {
              if (((int)plVar1 == 0) &&
                 (plVar1 = plVar8, FUN_10982692c(plVar8,plVar10,param_4,&uStack_70),
                 plVar9 = plVar10, param_2 == ((int)plVar1 != 2))) {
                plVar9 = plVar8;
              }
              goto LAB_109826b50;
            }
          }
          param_7[1] = lStack_80;
          *param_7 = lStack_88;
          *(undefined4 *)(param_7 + 2) = uStack_78;
          plVar9 = plVar10;
        }
LAB_109826b50:
        plVar1 = *(long **)(param_3 + 0x10);
      }
      plVar10 = (long *)*plVar10;
      plVar8 = plVar9;
    } while (plVar10 != plVar1);
  }
  return plVar9;
}



/* Entry: 109827534; end: 1098275c3;  */

void FUN_109827534(long param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  puVar2 = (undefined8 *)*param_2;
  puVar1 = (undefined8 *)param_2[2];
  if (puVar2 == param_2) {
    puVar2 = (undefined8 *)0x0;
  }
  else {
    puVar3 = (undefined8 *)param_2[1];
    puVar2[1] = puVar3;
    *puVar3 = puVar2;
  }
  *(undefined8 **)(puVar1[3] + 0x10) = puVar2;
  puVar2 = (undefined8 *)*puVar1;
  if (puVar2 == puVar1) {
    puVar2 = (undefined8 *)0x0;
  }
  else {
    puVar3 = (undefined8 *)puVar1[1];
    puVar2[1] = puVar3;
    *puVar3 = puVar2;
  }
  *(undefined8 **)(param_2[3] + 0x10) = puVar2;
  param_2[4] = 0;
  param_2[1] = 0;
  *param_2 = 0;
  param_2[3] = 0;
  param_2[2] = 0;
  *param_2 = *(undefined8 *)(param_1 + 0x50);
  *(undefined8 **)(param_1 + 0x50) = param_2;
  puVar1[4] = 0;
  puVar1[1] = 0;
  *puVar1 = 0;
  puVar1[3] = 0;
  puVar1[2] = 0;
  *puVar1 = *(undefined8 *)(param_1 + 0x50);
  *(undefined8 **)(param_1 + 0x50) = puVar1;
  *(int *)(param_1 + 0xb0) = *(int *)(param_1 + 0xb0) + -1;
  return;
}



/* Entry: 1098275c4; end: 109827687;  */

void FUN_1098275c4(undefined8 *param_1)

{
  undefined8 *puVar1;
  int iVar2;
  undefined8 *puVar3;
  int iVar4;
  int iVar5;
  undefined8 *puVar6;
  
  puVar3 = (undefined8 *)param_1[2];
  if (puVar3 == (undefined8 *)0x0) {
    puVar6 = (undefined8 *)param_1[1];
    if (puVar6 == (undefined8 *)0x0) {
      puVar6 = (undefined8 *)0x18;
      FUN_1098256f4(0x18,0x10);
      iVar2 = *(int *)(param_1 + 3);
      *(int *)(puVar6 + 1) = iVar2;
      puVar6[2] = 0;
      puVar3 = (undefined8 *)((long)iVar2 << 7);
      FUN_1098256f4(puVar3,0x10);
      *puVar6 = puVar3;
      puVar6[2] = *param_1;
      *param_1 = puVar6;
    }
    else {
      param_1[1] = puVar6[2];
      puVar3 = (undefined8 *)*puVar6;
    }
    iVar2 = *(int *)(puVar6 + 1);
    if (0 < iVar2) {
      iVar4 = 1;
      iVar5 = iVar2;
      puVar6 = puVar3;
      do {
        puVar1 = puVar6 + 0x10;
        if (iVar2 <= iVar4) {
          puVar1 = (undefined8 *)0x0;
        }
        *puVar6 = puVar1;
        iVar4 = iVar4 + 1;
        iVar5 = iVar5 + -1;
        puVar6 = puVar6 + 0x10;
      } while (iVar5 != 0);
    }
  }
  param_1[2] = *puVar3;
  puVar3[4] = 0;
  puVar3[1] = 0;
  *puVar3 = 0;
  puVar3[3] = 0;
  puVar3[2] = 0;
  *(undefined4 *)(puVar3 + 0xf) = 0xffffffff;
  return;
}



/* Entry: 109827688; end: 10982773f;  */

void FUN_109827688(float *param_1,float *param_2,long param_3)

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
  int iVar11;
  float fVar12;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  float afStack_10 [4];
  
  iVar11 = *(int *)(param_3 + 0x2c);
  fVar8 = param_2[0x29];
  fVar9 = param_2[0x2a];
  afStack_10[(int)fVar9] = (float)*(int *)(param_3 + 0x28);
  fVar10 = param_2[0x2b];
  afStack_10[(int)fVar10] = (float)iVar11;
  afStack_10[(int)fVar8] = (float)*(int *)(param_3 + 0x30);
  fVar7 = afStack_10[3];
  fVar6 = afStack_10[2];
  fVar5 = afStack_10[1];
  fVar4 = afStack_10[0];
  fVar12 = *param_2;
  fVar1 = param_2[1];
  fVar2 = param_2[2];
  fVar3 = param_2[3];
  iVar11 = *(int *)(param_3 + 0x3c);
  afStack_10[(int)fVar9] = (float)*(int *)(param_3 + 0x38);
  auVar14._0_4_ = fVar4 * fVar12;
  auVar14._4_4_ = fVar5 * fVar1;
  auVar14._8_4_ = fVar6 * fVar2;
  auVar14._12_4_ = fVar7 * fVar3;
  afStack_10[(int)fVar10] = (float)iVar11;
  afStack_10[(int)fVar8] = (float)*(int *)(param_3 + 0x40);
  auVar13._0_4_ = fVar12 * afStack_10[0];
  auVar13._4_4_ = fVar1 * afStack_10[1];
  auVar13._8_4_ = fVar2 * afStack_10[2];
  auVar13._12_4_ = fVar3 * afStack_10[3];
  auVar15 = NEON_ext(auVar14,auVar14,0xc,1);
  auVar16 = NEON_ext(auVar15,auVar14,8,1);
  auVar15 = NEON_ext(auVar13,auVar13,0xc,1);
  auVar17 = NEON_ext(auVar15,auVar13,8,1);
  auVar15._0_4_ = auVar14._0_4_ * auVar17._0_4_ - auVar16._0_4_ * auVar13._0_4_;
  auVar15._4_4_ = auVar14._4_4_ * auVar17._4_4_ - auVar16._4_4_ * auVar13._4_4_;
  auVar15._8_4_ = auVar14._8_4_ * auVar17._8_4_ - auVar16._8_4_ * auVar13._8_4_;
  auVar15._12_4_ = auVar14._12_4_ * auVar17._12_4_ - auVar16._12_4_ * auVar13._12_4_;
  auVar14 = NEON_ext(auVar15,auVar15,0xc,1);
  auVar14 = NEON_ext(auVar14,auVar15,8,1);
  fVar8 = auVar14._0_4_;
  auVar16._0_4_ = fVar8 * fVar8;
  fVar9 = auVar14._4_4_;
  auVar16._4_4_ = fVar9 * fVar9;
  fVar10 = auVar14._8_4_;
  auVar16._8_4_ = fVar10 * fVar10;
  auVar16._12_4_ = 0;
  auVar14 = NEON_ext(auVar16,auVar16,8,1);
  fVar12 = 1.0 / SQRT(auVar16._0_4_ + auVar16._4_4_ + auVar14._0_4_);
  param_1[2] = fVar10 * fVar12;
  param_1[3] = fVar12 * 0.0;
  *param_1 = fVar8 * fVar12;
  param_1[1] = fVar9 * fVar12;
  return;
}



/* Entry: 109827740; end: 10982779f;  */

float FUN_109827740(float param_1,ulong *param_2)

{
  ulong uVar1;
  long lStack_20;
  ulong uStack_18;
  
  uVar1 = param_2[1];
  if (-1 < (long)uVar1) {
    return (float)*param_2 + (float)uVar1 * 1.8446744e+19;
  }
  lStack_20 = -*param_2;
  uStack_18 = -uVar1;
  if (*param_2 != 0) {
    uStack_18 = ~uVar1;
  }
  FUN_109827740(&lStack_20);
  return -param_1;
}



/* Entry: 1098277a0; end: 109827903;  */

void FUN_1098277a0(long *param_1,long param_2,long *param_3)

{
  bool bVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined1 uVar6;
  long lVar7;
  ulong uVar8;
  int iVar9;
  ulong uVar10;
  
  if (*(int *)(param_2 + 0x74) < 0) {
    uVar8 = *(ulong *)(param_2 + 0x28);
    lVar3 = *(long *)(param_2 + 0x30);
    FUN_109825750(uVar8,lVar3,*param_3);
    uVar10 = *(ulong *)(param_2 + 0x38);
    lVar4 = *(long *)(param_2 + 0x40);
    FUN_109825750(uVar10,lVar4,param_3[1]);
    uVar2 = *(ulong *)(param_2 + 0x48);
    lVar5 = *(long *)(param_2 + 0x50);
    FUN_109825750(uVar2,lVar5,param_3[2]);
    lVar7 = uVar2 + uVar10 + uVar8;
    uVar8 = lVar4 + lVar3 + (ulong)CARRY8(uVar10,uVar8) + lVar5 +
            (ulong)CARRY8(uVar2,uVar10 + uVar8);
    if ((long)uVar8 < 0) {
      *(undefined4 *)(param_1 + 4) = 0xffffffff;
      bVar1 = lVar7 != 0;
      lVar7 = -lVar7;
      uVar10 = -uVar8;
      if (bVar1) {
        uVar10 = ~uVar8;
      }
      iVar9 = 1;
    }
    else {
      bVar1 = uVar8 != 0 || lVar7 != 0;
      iVar9 = -(uint)bVar1;
      *(uint *)(param_1 + 4) = (uint)bVar1;
      uVar10 = uVar8;
    }
    *param_1 = lVar7;
    param_1[1] = uVar10;
    uVar8 = *(ulong *)(param_2 + 0x60);
    if ((long)uVar8 < 0) {
      uVar6 = 0;
      *(int *)(param_1 + 4) = iVar9;
      uVar10 = -uVar8;
      if (*(long *)(param_2 + 0x58) != 0) {
        uVar10 = ~uVar8;
      }
      param_1[2] = -*(long *)(param_2 + 0x58);
      param_1[3] = uVar10;
    }
    else {
      uVar6 = 0;
      lVar7 = *(long *)(param_2 + 0x58);
      param_1[3] = *(long *)(param_2 + 0x60);
      param_1[2] = lVar7;
    }
    goto LAB_1098278d8;
  }
  lVar7 = *param_3 * (long)*(int *)(param_2 + 0x68) + param_3[1] * (long)*(int *)(param_2 + 0x6c) +
          param_3[2] * (long)*(int *)(param_2 + 0x70);
  if (lVar7 < 1) {
    if (lVar7 < 0) {
      *(undefined4 *)(param_1 + 4) = 0xffffffff;
      lVar7 = -lVar7;
      goto LAB_1098277f8;
    }
    *(undefined4 *)(param_1 + 4) = 0;
    *param_1 = 0;
    param_1[1] = 0;
  }
  else {
    *(undefined4 *)(param_1 + 4) = 1;
LAB_1098277f8:
    *param_1 = lVar7;
    param_1[1] = 0;
  }
  param_1[3] = 0;
  param_1[2] = 1;
  uVar6 = 1;
LAB_1098278d8:
  *(undefined1 *)((long)param_1 + 0x24) = uVar6;
  return;
}



/* Entry: 109827904; end: 10982a3d7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong FUN_109827904(ulong param_1,float param_2,long param_3,long param_4,ulong param_5,int param_6,
                   ulong param_7)

{
  undefined8 *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  uint uVar19;
  int iVar20;
  int iVar21;
  int iVar22;
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined4 uVar28;
  double dVar29;
  undefined8 uVar30;
  bool bVar31;
  undefined1 (*pauVar32) [16];
  long *plVar33;
  undefined8 *puVar34;
  float *pfVar35;
  ulong uVar36;
  long lVar37;
  ulong uVar38;
  ulong uVar39;
  ulong uVar40;
  long lVar41;
  ulong uVar42;
  long lVar43;
  ulong uVar44;
  ulong uVar45;
  undefined4 *puVar46;
  undefined4 *puVar47;
  ulong uVar48;
  long lVar49;
  uint uVar50;
  double *pdVar51;
  long lVar52;
  ulong uVar53;
  long lVar54;
  ulong uVar55;
  long lVar56;
  float *pfVar57;
  long *plVar58;
  int iVar59;
  int iVar60;
  ulong uVar61;
  long lVar62;
  long lVar63;
  long lVar64;
  long lVar65;
  long lVar66;
  undefined4 *puVar67;
  uint uVar68;
  int iVar69;
  int iVar70;
  ulong uVar71;
  long *plVar72;
  ulong uVar73;
  ulong uVar74;
  int iVar75;
  undefined8 uVar76;
  int *piVar77;
  ulong uVar78;
  long lVar79;
  long lVar80;
  ulong uVar81;
  ulong uVar82;
  uint uVar83;
  long lVar84;
  undefined8 *puVar85;
  long lVar86;
  ulong *puVar87;
  undefined1 (*pauVar88) [16];
  ulong uVar89;
  long lVar90;
  long *plVar91;
  long lVar92;
  float *pfVar93;
  long lVar94;
  float *pfVar95;
  float fVar96;
  float fVar97;
  float fVar98;
  float fVar99;
  float fVar100;
  float fVar105;
  undefined1 auVar102 [16];
  float fVar104;
  undefined1 auVar103 [16];
  int iVar106;
  undefined1 auVar108 [16];
  undefined1 uVar109;
  undefined1 uVar110;
  undefined1 uVar111;
  undefined1 uVar112;
  undefined1 uVar113;
  undefined1 uVar114;
  undefined1 uVar115;
  float fVar116;
  undefined1 auVar117 [16];
  undefined1 auVar118 [16];
  undefined1 auVar119 [16];
  undefined1 auVar120 [16];
  float fVar121;
  ulong uStack_328;
  long lStack_320;
  ulong uStack_318;
  long *plStack_310;
  float *pfStack_308;
  long *plStack_300;
  long *plStack_2f8;
  ulong uStack_2c8;
  ulong uStack_2c0;
  ulong uStack_2b0;
  long lStack_2a0;
  undefined8 uStack_290;
  float fStack_288;
  float fStack_284;
  float fStack_280;
  float fStack_27c;
  float fStack_278;
  float fStack_274;
  float fStack_270;
  float fStack_26c;
  ulong uStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  int iStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  int iStack_228;
  undefined8 *puStack_220;
  undefined8 *puStack_218;
  undefined8 *puStack_210;
  int iStack_208;
  undefined1 auStack_200 [4];
  uint uStack_1fc;
  int iStack_1f8;
  long lStack_1f0;
  byte bStack_1e8;
  int iStack_1e0;
  uint uStack_1dc;
  int iStack_1d8;
  uint uStack_1d4;
  undefined8 uStack_1d0;
  long lStack_1c8;
  undefined1 auStack_1c0 [4];
  uint uStack_1bc;
  uint uStack_1b8;
  long *plStack_1b0;
  byte bStack_1a8;
  float afStack_1a0 [4];
  ulong uStack_190;
  long lStack_188;
  ulong uStack_180;
  long lStack_178;
  ulong uStack_170;
  long lStack_168;
  ulong uStack_160;
  long lStack_158;
  undefined1 auStack_150 [4];
  uint uStack_14c;
  uint uStack_148;
  long *plStack_140;
  byte bStack_138;
  undefined1 auStack_130 [4];
  uint uStack_12c;
  undefined4 uStack_128;
  long *plStack_120;
  byte bStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  long lStack_100;
  undefined5 uStack_f8;
  undefined3 uStack_f3;
  float afStack_e0 [4];
  undefined1 (*pauStack_d0) [16];
  undefined1 uStack_c8;
  undefined4 uStack_c7;
  undefined3 uStack_c3;
  long lStack_b8;
  long lStack_b0;
  long lStack_a8;
  undefined8 uStack_a0;
  ulong uStack_98;
  undefined1 auVar101 [12];
  undefined1 auVar107 [12];
  
  iVar106 = (int)param_7;
  if (iVar106 < 1) {
    if (*(long *)(param_3 + 0x10) != 0) {
      if (*(char *)(param_3 + 0x18) == '\x01') {
        FUN_109825740();
      }
      *(undefined8 *)(param_3 + 0x10) = 0;
    }
    *(undefined1 *)(param_3 + 0x18) = 1;
    *(undefined8 *)(param_3 + 0x10) = 0;
    *(undefined4 *)(param_3 + 4) = 0;
    *(undefined4 *)(param_3 + 8) = 0;
    if (*(long *)(param_3 + 0x50) != 0) {
      if (*(char *)(param_3 + 0x58) == '\x01') {
        FUN_109825740();
      }
      *(undefined8 *)(param_3 + 0x50) = 0;
    }
    *(undefined1 *)(param_3 + 0x58) = 1;
    *(undefined8 *)(param_3 + 0x50) = 0;
    *(undefined4 *)(param_3 + 0x44) = 0;
    *(undefined4 *)(param_3 + 0x48) = 0;
    if (*(long *)(param_3 + 0x70) != 0) {
      if (*(char *)(param_3 + 0x78) == '\x01') {
        FUN_109825740();
      }
      *(undefined8 *)(param_3 + 0x70) = 0;
    }
    *(undefined1 *)(param_3 + 0x78) = 1;
    *(undefined8 *)(param_3 + 0x70) = 0;
    *(undefined4 *)(param_3 + 100) = 0;
    *(undefined4 *)(param_3 + 0x68) = 0;
    return 0;
  }
  uStack_250 = 0;
  uStack_258 = 0;
  uStack_260 = 0;
  iStack_248 = 0x100;
  uStack_238 = 0;
  uStack_230 = 0;
  uStack_240 = 0;
  iStack_228 = 0x100;
  puStack_218 = (undefined8 *)0x0;
  puStack_210 = (undefined8 *)0x0;
  puStack_220 = (undefined8 *)0x0;
  bStack_1e8 = 1;
  lStack_1f0 = 0;
  iStack_1f8 = 0;
  iStack_208 = 0x100;
  uStack_1fc = 0;
  lVar80 = (long)param_6;
  if ((param_5 & 1) == 0) {
    puVar46 = (undefined4 *)(param_4 + 8);
    uVar61 = param_7;
    auVar102 = _UNK_10e0022a0;
    auVar108 = _UNK_10e0022b0;
    do {
      puVar85 = (undefined8 *)(puVar46 + -2);
      uVar28 = *puVar46;
      uVar110 = (undefined1)((uint)uVar28 >> 8);
      uVar111 = (undefined1)((uint)uVar28 >> 0x10);
      uVar112 = (undefined1)((uint)uVar28 >> 0x18);
      puVar46 = (undefined4 *)((long)puVar46 + lVar80);
      auVar26[8] = (char)uVar28;
      auVar26._0_8_ = *puVar85;
      auVar26[9] = uVar110;
      auVar26[10] = uVar111;
      auVar26[0xb] = uVar112;
      auVar26._12_4_ = 0;
      auVar108 = NEON_fmin(auVar108,auVar26,4);
      auVar107 = auVar108._0_12_;
      auVar27[8] = (char)uVar28;
      auVar27._0_8_ = *puVar85;
      auVar27[9] = uVar110;
      auVar27[10] = uVar111;
      auVar27[0xb] = uVar112;
      auVar27._12_4_ = 0;
      auVar102 = NEON_fmax(auVar102,auVar27,4);
      auVar101 = auVar102._0_12_;
      uVar50 = (int)uVar61 - 1;
      uVar61 = (ulong)uVar50;
    } while (uVar50 != 0);
  }
  else {
    pdVar51 = (double *)(param_4 + 0x10);
    uVar61 = param_7;
    auVar102 = _UNK_10e0022a0;
    auVar108 = _UNK_10e0022b0;
    do {
      dVar29 = pdVar51[-1];
      auVar23[9] = (char)((ulong)dVar29 >> 8);
      auVar23._0_9_ = *(unkbyte9 *)(pdVar51 + -2);
      auVar23[10] = (char)((ulong)dVar29 >> 0x10);
      auVar23[0xb] = (char)((ulong)dVar29 >> 0x18);
      auVar23[0xc] = (char)((ulong)dVar29 >> 0x20);
      auVar23[0xd] = (char)((ulong)dVar29 >> 0x28);
      auVar23[0xe] = (char)((ulong)dVar29 >> 0x30);
      auVar23[0xf] = (char)((ulong)dVar29 >> 0x38);
      fVar96 = (float)(double)*(unkbyte9 *)(pdVar51 + -2);
      fVar97 = (float)auVar23._8_8_;
      uVar110 = (undefined1)((uint)fVar97 >> 8);
      uVar111 = (undefined1)((uint)fVar97 >> 0x10);
      uVar112 = (undefined1)((uint)fVar97 >> 0x18);
      fVar116 = (float)*pdVar51;
      uVar113 = (undefined1)((uint)fVar116 >> 8);
      uVar114 = (undefined1)((uint)fVar116 >> 0x10);
      uVar115 = (undefined1)((uint)fVar116 >> 0x18);
      auVar24[4] = SUB41(fVar97,0);
      auVar24._0_4_ = fVar96;
      auVar24[5] = uVar110;
      auVar24[6] = uVar111;
      auVar24[7] = uVar112;
      auVar24[8] = SUB41(fVar116,0);
      auVar24[9] = uVar113;
      auVar24[10] = uVar114;
      auVar24[0xb] = uVar115;
      auVar24._12_4_ = 0;
      auVar108 = NEON_fmin(auVar108,auVar24,4);
      auVar107 = auVar108._0_12_;
      auVar25[4] = SUB41(fVar97,0);
      auVar25._0_4_ = fVar96;
      auVar25[5] = uVar110;
      auVar25[6] = uVar111;
      auVar25[7] = uVar112;
      auVar25[8] = SUB41(fVar116,0);
      auVar25[9] = uVar113;
      auVar25[10] = uVar114;
      auVar25[0xb] = uVar115;
      auVar25._12_4_ = 0;
      auVar102 = NEON_fmax(auVar102,auVar25,4);
      auVar101 = auVar102._0_12_;
      pdVar51 = (double *)((long)pdVar51 + lVar80);
      uVar50 = (int)uVar61 - 1;
      uVar61 = (ulong)uVar50;
    } while (uVar50 != 0);
  }
  fVar96 = auVar101._0_4_ - auVar107._0_4_;
  fVar97 = auVar101._4_4_ - auVar107._4_4_;
  uVar110 = (undefined1)((uint)fVar97 >> 8);
  uVar111 = (undefined1)((uint)fVar97 >> 0x10);
  uVar112 = (undefined1)((uint)fVar97 >> 0x18);
  fVar116 = auVar101._8_4_ - auVar107._8_4_;
  bVar31 = fVar96 < fVar97;
  fVar121 = fVar97;
  if (!bVar31) {
    fVar121 = fVar96;
  }
  uVar113 = SUB41(fVar96,0);
  uVar114 = (char)((uint)fVar96 >> 8);
  uVar115 = (char)((uint)fVar96 >> 0x10);
  uVar109 = (char)((uint)fVar96 >> 0x18);
  if (!bVar31) {
    uVar113 = SUB41(fVar97,0);
    uVar114 = uVar110;
    uVar115 = uVar111;
    uVar109 = uVar112;
  }
  uStack_1d4 = 2;
  if (fVar116 <= fVar121) {
    uStack_1d4 = (uint)bVar31;
  }
  uVar50 = (uint)!bVar31;
  if (fVar116 <= (float)CONCAT13(uVar109,CONCAT12(uVar115,CONCAT11(uVar114,uVar113)))) {
    uVar50 = 2;
  }
  uStack_1dc = uStack_1d4 - 2;
  if (uStack_1d4 + 1 < 3) {
    uStack_1dc = uStack_1d4 + 1;
  }
  if (uVar50 != uStack_1d4) {
    uStack_1dc = uVar50;
  }
  iStack_1d8 = 3 - (uStack_1dc + uStack_1d4);
  fVar97 = (float)(CONCAT17(uVar112,CONCAT16(uVar111,CONCAT15(uVar110,CONCAT14(SUB41(fVar97,0),
                                                                               fVar96)))) >> 0x20) *
           9.788567e-05;
  fVar116 = fVar116 * 9.788567e-05;
  auVar117._0_4_ = -(uint)((int)(4 - (uStack_1dc + uStack_1d4)) % 3 == uStack_1d4);
  auVar117._4_4_ = auVar117._0_4_;
  auVar117._8_4_ = auVar117._0_4_;
  auVar117._12_4_ = auVar117._0_4_;
  auVar118._0_4_ = -(fVar96 * 9.788567e-05);
  auVar118._4_4_ = -fVar97;
  auVar118._8_4_ = -fVar116;
  auVar118._12_4_ = 0x80000000;
  auVar102[4] = SUB41(fVar97,0);
  auVar102._0_4_ = fVar96 * 9.788567e-05;
  auVar102[5] = (char)((uint)fVar97 >> 8);
  auVar102[6] = (char)((uint)fVar97 >> 0x10);
  auVar102[7] = (char)((uint)fVar97 >> 0x18);
  auVar102[8] = SUB41(fVar116,0);
  auVar102[9] = (char)((uint)fVar116 >> 8);
  auVar102[10] = (char)((uint)fVar116 >> 0x10);
  auVar102[0xb] = (char)((uint)fVar116 >> 0x18);
  auVar102._12_4_ = 0;
  auVar118 = auVar118 ^ (auVar118 ^ auVar102) & auVar117;
  fStack_278 = auVar118._8_4_;
  fStack_274 = auVar118._12_4_;
  fStack_280 = auVar118._0_4_;
  fStack_27c = auVar118._4_4_;
  iVar59 = -(uint)(fStack_280 == 0.0);
  uVar28 = CONCAT13(~(byte)((uint)iVar59 >> 0x18),
                    CONCAT12(~(byte)((uint)iVar59 >> 0x10),
                             CONCAT11(~(byte)((uint)iVar59 >> 8),~(byte)iVar59)));
  auVar119._4_4_ = uVar28;
  auVar119._0_4_ = uVar28;
  auVar119._8_4_ = uVar28;
  auVar119._12_4_ = uVar28;
  auVar108._4_4_ = fStack_27c;
  auVar108._0_4_ = 1.0 / fStack_280;
  auVar108._8_4_ = fStack_278;
  auVar108._12_4_ = fStack_274;
  auVar120 = auVar118 ^ (auVar118 ^ auVar108) & auVar119;
  if (auVar120._4_4_ != 0.0) {
    auVar120._4_4_ = 1.0 / auVar120._4_4_;
  }
  if (auVar120._8_4_ != 0.0) {
    auVar120._8_4_ = 1.0 / auVar120._8_4_;
  }
  fStack_270 = (auVar101._0_4_ + auVar107._0_4_) * 0.5;
  fStack_26c = (auVar101._4_4_ + auVar107._4_4_) * 0.5;
  uStack_268 = (ulong)(uint)((auVar101._8_4_ + auVar107._8_4_) * 0.5);
  uStack_c8 = 1;
  pauStack_d0 = (undefined1 (*) [16])0x0;
  afStack_e0[1] = 0.0;
  afStack_e0[2] = 0.0;
  pauVar32 = (undefined1 (*) [16])((param_7 & 0xffffffff) << 4);
  FUN_1098256f4(pauVar32,0x10);
  uVar89 = param_7 & 0xffffffff;
  uStack_c8 = 1;
  pauStack_d0 = pauVar32;
  afStack_e0[1] = (float)iVar106;
  afStack_e0[2] = (float)iVar106;
  uVar61 = 0;
  if ((param_5 & 1) == 0) {
    pfVar35 = (float *)(param_4 + 8);
    piVar77 = (int *)(*pauVar32 + 8);
    do {
      uStack_110._0_4_ = (float)*(undefined8 *)(pfVar35 + -2);
      uStack_110._4_4_ = (float)((ulong)*(undefined8 *)(pfVar35 + -2) >> 0x20);
      uStack_108 = CONCAT44(auVar120._12_4_ * 0.0,auVar120._8_4_ * (*pfVar35 - (float)uStack_268));
      uStack_110 = CONCAT44(auVar120._4_4_ * (uStack_110._4_4_ - fStack_26c),
                            auVar120._0_4_ * ((float)uStack_110 - fStack_270));
      fVar96 = *(float *)((long)&uStack_110 + (long)(int)uStack_1d4 * 4);
      fVar97 = *(float *)((long)&uStack_110 + (long)(int)uStack_1dc * 4);
      *(int *)*(undefined1 (*) [16])(piVar77 + -2) =
           (int)*(float *)((long)&uStack_110 + (long)iStack_1d8 * 4);
      piVar77[-1] = (int)fVar96;
      *piVar77 = (int)fVar97;
      piVar77[1] = (int)uVar61;
      uVar61 = uVar61 + 1;
      pfVar35 = (float *)((long)pfVar35 + lVar80);
      piVar77 = piVar77 + 4;
    } while (uVar89 != uVar61);
  }
  else {
    pdVar51 = (double *)(param_4 + 0x10);
    piVar77 = (int *)(*pauVar32 + 8);
    do {
      uStack_108 = CONCAT44(auVar120._12_4_ * 0.0,
                            auVar120._8_4_ * ((float)*pdVar51 - (float)uStack_268));
      uStack_110 = CONCAT44(auVar120._4_4_ *
                            ((float)SUB168(*(undefined1 (*) [16])(pdVar51 + -2),8) - fStack_26c),
                            auVar120._0_4_ *
                            ((float)SUB168(*(undefined1 (*) [16])(pdVar51 + -2),0) - fStack_270));
      fVar96 = *(float *)((long)&uStack_110 + (long)(int)uStack_1d4 * 4);
      fVar97 = *(float *)((long)&uStack_110 + (long)(int)uStack_1dc * 4);
      *(int *)*(undefined1 (*) [16])(piVar77 + -2) =
           (int)*(float *)((long)&uStack_110 + (long)iStack_1d8 * 4);
      piVar77[-1] = (int)fVar96;
      *piVar77 = (int)fVar97;
      piVar77[1] = (int)uVar61;
      uVar61 = uVar61 + 1;
      pdVar51 = (double *)((long)pdVar51 + lVar80);
      piVar77 = piVar77 + 4;
    } while (uVar89 != uVar61);
  }
  if (iVar106 + -1 != 0) {
    FUN_10982a640(afStack_e0,0,iVar106 + -1);
  }
  uStack_258 = uStack_260;
  uStack_250 = 0;
  uVar61 = (ulong)(int)uStack_1fc;
  iStack_248 = iVar106;
  if ((int)uStack_1fc < iVar106) {
    if (iStack_1f8 < iVar106) {
      lVar80 = uVar89 << 3;
      FUN_1098256f4(lVar80,0x10);
      if (0 < (int)uStack_1fc) {
        lVar52 = 0;
        do {
          *(undefined8 *)(lVar80 + lVar52) = *(undefined8 *)(lStack_1f0 + lVar52);
          lVar52 = lVar52 + 8;
        } while ((ulong)uStack_1fc * 8 - lVar52 != 0);
      }
      if ((lStack_1f0 != 0) && ((bStack_1e8 & 1) != 0)) {
        FUN_109825740();
      }
      bStack_1e8 = 1;
      iStack_1f8 = iVar106;
      lStack_1f0 = lVar80;
    }
    do {
      *(undefined8 *)(lStack_1f0 + uVar61 * 8) = 0;
      uVar61 = uVar61 + 1;
    } while (uVar89 != uVar61);
  }
  uVar61 = 0;
  pauVar88 = pauVar32;
  uStack_1fc = iVar106;
  do {
    puVar85 = &uStack_260;
    FUN_1098275c4();
    puVar85[2] = 0;
    auVar102 = *pauVar88;
    puVar85[0xe] = auVar102._8_8_;
    puVar85[0xd] = auVar102._0_8_;
    *(undefined4 *)(puVar85 + 0xf) = 0xffffffff;
    *(undefined8 **)(lStack_1f0 + uVar61 * 8) = puVar85;
    uVar61 = uVar61 + 1;
    pauVar88 = pauVar88 + 1;
  } while (uVar89 != uVar61);
  FUN_109825740(pauVar32);
  uStack_c8 = 1;
  pauStack_d0 = (undefined1 (*) [16])0x0;
  afStack_e0[1] = 0.0;
  afStack_e0[2] = 0.0;
  uStack_238 = uStack_240;
  uStack_230 = 0;
  iStack_228 = iVar106 * 6;
  uStack_1d0 = 0;
  iStack_1e0 = -3;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_f3 = 0;
  lStack_100 = 0;
  FUN_109825cc8(&fStack_280,0,param_7,&uStack_110);
  lStack_1c8 = uStack_110;
  FUN_10982a5f4(afStack_e0);
  uStack_2c0 = 0;
  fVar96 = (float)param_1;
  if ((0.0 < fVar96) && (lStack_1c8 != 0)) {
    iVar60 = iStack_1e0 + -1;
    bStack_118 = 1;
    plStack_120 = (long *)0x0;
    uStack_128 = 0;
    uStack_12c = 0;
    *(int *)(lStack_1c8 + 0x78) = iVar60;
    plStack_2f8 = (long *)0x8;
    iStack_1e0 = iVar60;
    FUN_1098256f4(8,0x10);
    uStack_318 = 0;
    plStack_310 = (long *)0x0;
    uStack_328 = 0;
    lStack_320 = 0;
    lStack_2a0 = 0;
    uStack_2b0 = 0;
    uStack_2c8 = 0;
    uStack_2c0 = 0;
    plStack_300 = (long *)0x0;
    pfStack_308._0_4_ = 0;
    uVar50 = 0;
    uStack_290 = 0;
    uVar89 = 0;
    lVar80 = 0;
    uVar61 = 0;
    bStack_118 = 1;
    uStack_128 = 1;
    *plStack_2f8 = lStack_1c8;
    bStack_138 = 1;
    plStack_140 = (long *)0x0;
    uStack_148 = 0;
    uStack_14c = 0;
    iVar106 = *(int *)(lStack_1c8 + 0x68);
    iVar59 = *(int *)(lStack_1c8 + 0x6c);
    iVar70 = *(int *)(lStack_1c8 + 0x70);
    lStack_158 = 0;
    uStack_160 = 0;
    lStack_168 = 0;
    uStack_170 = 0;
    lStack_178 = 0;
    uStack_180 = 0;
    uVar71 = 1;
    uStack_12c = 1;
    lStack_188 = 0;
    uStack_190 = 0;
    plStack_120 = plStack_2f8;
    do {
      uStack_12c = uStack_12c - 1;
      lVar52 = plStack_2f8[uStack_12c];
      plVar91 = *(long **)(lVar52 + 0x10);
      uVar83 = uStack_12c;
      if (plVar91 != (long *)0x0) {
        do {
          if (*(int *)(plVar91[3] + 0x78) != iVar60) {
            *(int *)(plVar91[3] + 0x78) = iVar60;
            uVar68 = (uint)uVar71;
            if (uVar83 == uVar68) {
              uVar19 = uVar68 << 1;
              if (uVar68 == 0) {
                uVar19 = 1;
              }
              if ((int)uVar68 < (int)uVar19) {
                if (uVar19 == 0) {
                  plVar33 = (long *)0x0;
                }
                else {
                  plVar33 = (long *)(-(ulong)(uVar19 >> 0x1f) & 0xfffffff800000000 |
                                    (ulong)uVar19 << 3);
                  FUN_1098256f4(plVar33,0x10);
                }
                plVar58 = plVar33;
                plVar72 = plStack_2f8;
                if (0 < (int)uVar68) {
                  do {
                    *plVar58 = *plVar72;
                    uVar71 = uVar71 - 1;
                    plVar58 = plVar58 + 1;
                    plVar72 = plVar72 + 1;
                  } while (uVar71 != 0);
                }
                if ((plStack_2f8 != (long *)0x0) && ((bStack_118 & 1) != 0)) {
                  FUN_109825740(plStack_2f8);
                }
                bStack_118 = 1;
                uVar71 = (ulong)uVar19;
                plStack_2f8 = plVar33;
              }
            }
            plStack_2f8[(int)uVar83] = plVar91[3];
            uVar83 = uVar83 + 1;
          }
          if ((int)plVar91[5] != iVar60) {
            puVar85 = puStack_210;
            if (puStack_210 == (undefined8 *)0x0) {
              if (puStack_218 == (undefined8 *)0x0) {
                puVar34 = (undefined8 *)0x18;
                FUN_1098256f4(0x18,0x10);
                *(int *)(puVar34 + 1) = iStack_208;
                puVar34[2] = 0;
                puVar85 = (undefined8 *)((long)iStack_208 * 0x48);
                FUN_1098256f4(puVar85,0x10);
                *puVar34 = puVar85;
                puVar34[2] = puStack_220;
                puStack_220 = puVar34;
              }
              else {
                puVar85 = (undefined8 *)*puStack_218;
                puVar34 = puStack_218;
                puStack_218 = (undefined8 *)puStack_218[2];
              }
              iVar6 = *(int *)(puVar34 + 1);
              if (0 < iVar6) {
                iVar69 = 1;
                iVar75 = iVar6;
                puVar34 = puVar85;
                do {
                  puVar1 = puVar34 + 9;
                  if (iVar6 <= iVar69) {
                    puVar1 = (undefined8 *)0x0;
                  }
                  *puVar34 = puVar1;
                  iVar69 = iVar69 + 1;
                  iVar75 = iVar75 + -1;
                  puVar34 = puVar34 + 9;
                } while (iVar75 != 0);
              }
            }
            puStack_210 = (undefined8 *)*puVar85;
            puVar85[1] = 0;
            puVar85[2] = 0;
            *puVar85 = 0;
            lVar86 = plVar91[3];
            lVar62 = *(long *)(*(long *)(plVar91[2] + 8) + 0x18);
            puVar85[1] = lVar86;
            uVar76 = *(undefined8 *)(lVar86 + 0x68);
            puVar85[4] = *(undefined8 *)(lVar86 + 0x70);
            puVar85[3] = uVar76;
            iVar6 = *(int *)(lVar62 + 0x70);
            iVar69 = *(int *)(lVar86 + 0x70);
            puVar85[5] = CONCAT44(*(int *)(lVar62 + 0x6c) - *(int *)(lVar86 + 0x6c),
                                  *(int *)(lVar62 + 0x68) - *(int *)(lVar86 + 0x68));
            puVar85[6] = (ulong)(uint)(iVar6 - iVar69) | 0xffffffff00000000;
            iVar6 = *(int *)(lVar52 + 0x70);
            iVar69 = *(int *)(lVar86 + 0x70);
            puVar85[7] = CONCAT44(*(int *)(lVar52 + 0x6c) - *(int *)(lVar86 + 0x6c),
                                  *(int *)(lVar52 + 0x68) - *(int *)(lVar86 + 0x68));
            puVar85[8] = (ulong)(uint)(iVar6 - iVar69) | 0xffffffff00000000;
            puVar34 = (undefined8 *)(lVar86 + 0x18);
            if (*(long *)(lVar86 + 0x20) != 0) {
              puVar34 = (undefined8 *)(*(long *)(lVar86 + 0x20) + 0x10);
            }
            *puVar34 = puVar85;
            *(undefined8 **)(lVar86 + 0x20) = puVar85;
            if (uVar50 == (uint)pfStack_308) {
              uVar68 = (uint)pfStack_308 << 1;
              if ((uint)pfStack_308 == 0) {
                uVar68 = 1;
              }
              if ((int)(uint)pfStack_308 < (int)uVar68) {
                if (uVar68 == 0) {
                  plStack_310 = (long *)0x0;
                }
                else {
                  plStack_310 = (long *)(-(ulong)(uVar68 >> 0x1f) & 0xfffffff800000000 |
                                        (ulong)uVar68 << 3);
                  FUN_1098256f4(plStack_310,0x10);
                }
                if (0 < (int)(uint)pfStack_308) {
                  uVar53 = (ulong)(uint)pfStack_308;
                  plVar33 = plStack_310;
                  plVar58 = plStack_300;
                  do {
                    *plVar33 = *plVar58;
                    uVar53 = uVar53 - 1;
                    plVar33 = plVar33 + 1;
                    plVar58 = plVar58 + 1;
                  } while (uVar53 != 0);
                }
                if ((plStack_300 != (long *)0x0) && ((bStack_138 & 1) != 0)) {
                  FUN_109825740(plStack_300);
                }
                bStack_138 = 1;
                plStack_300 = plStack_310;
                pfStack_308._0_4_ = uVar68;
              }
            }
            plStack_300[(int)uVar50] = (long)puVar85;
            lVar86 = 0;
            plVar33 = plVar91;
            lVar62 = 0;
            do {
              lVar90 = lVar86;
              if ((lVar62 != 0) && (lVar90 != 0)) {
                iVar6 = *(int *)(lVar62 + 0x68) - iVar106;
                iVar69 = *(int *)(lVar62 + 0x6c) - iVar59;
                iVar75 = *(int *)(lVar62 + 0x70) - iVar70;
                iVar20 = *(int *)(lVar90 + 0x68) - iVar106;
                iVar21 = *(int *)(lVar90 + 0x6c) - iVar59;
                iVar22 = *(int *)(lVar90 + 0x70) - iVar70;
                uVar78 = ((long)iVar21 * (long)iVar6 - (long)iVar20 * (long)iVar69) *
                         (long)(*(int *)(lVar52 + 0x70) - iVar70) +
                         ((long)iVar22 * (long)iVar69 - (long)iVar21 * (long)iVar75) *
                         (long)(*(int *)(lVar52 + 0x68) - iVar106) +
                         ((long)iVar20 * (long)iVar75 - (long)iVar22 * (long)iVar6) *
                         (long)(*(int *)(lVar52 + 0x6c) - iVar59);
                uVar53 = uVar78 * (long)(*(int *)(lVar52 + 0x68) + iVar106 +
                                        *(int *)(lVar62 + 0x68) + *(int *)(lVar90 + 0x68));
                bVar31 = CARRY8(uVar53,uStack_2c8);
                uStack_2c8 = uVar53 + uStack_2c8;
                uStack_2c0 = ((long)uVar53 >> 0x3f) + uStack_2c0 + (ulong)bVar31;
                uVar53 = uVar78 * (long)(*(int *)(lVar52 + 0x6c) + iVar59 +
                                        *(int *)(lVar62 + 0x6c) + *(int *)(lVar90 + 0x6c));
                bVar31 = CARRY8(uVar53,uStack_2b0);
                uStack_2b0 = uVar53 + uStack_2b0;
                lStack_2a0 = ((long)uVar53 >> 0x3f) + lStack_2a0 + (ulong)bVar31;
                uVar53 = uVar78 * (long)(*(int *)(lVar52 + 0x70) + iVar70 +
                                        *(int *)(lVar62 + 0x70) + *(int *)(lVar90 + 0x70));
                bVar31 = CARRY8(uVar53,uVar61);
                uVar61 = uVar53 + uVar61;
                lVar80 = ((long)uVar53 >> 0x3f) + lVar80 + (ulong)bVar31;
                bVar31 = CARRY8(uVar78,uVar89);
                uVar89 = uVar78 + uVar89;
                uStack_290 = ((long)uVar78 >> 0x3f) + uStack_290 + (ulong)bVar31;
              }
              *(int *)(plVar33 + 5) = iVar60;
              plVar33[4] = (long)puVar85;
              plVar58 = plVar33 + 3;
              plVar33 = *(long **)(plVar33[2] + 8);
              lVar86 = *plVar58;
              lVar62 = lVar90;
            } while (plVar33 != plVar91);
            uVar50 = uVar50 + 1;
            plStack_310 = (long *)uStack_290;
            uStack_328 = uVar61;
            lStack_320 = lVar80;
            uStack_318 = uVar89;
          }
          plVar91 = (long *)*plVar91;
        } while (plVar91 != (long *)*(long *)(lVar52 + 0x10));
        uStack_128 = (undefined4)uVar71;
        plStack_120 = plStack_2f8;
        plStack_140 = plStack_300;
        uStack_160 = uStack_2c8;
        lStack_158 = uStack_2c0;
        uStack_170 = uStack_2b0;
        lStack_168 = lStack_2a0;
        uStack_180 = uStack_328;
        lStack_178 = lStack_320;
        uStack_190 = uStack_318;
        lStack_188 = (long)plStack_310;
        uStack_14c = uVar50;
        uStack_148 = (uint)pfStack_308;
        uStack_12c = uVar83;
      }
    } while (0 < (int)uStack_12c);
    uStack_2c0 = 0;
    if ((-1 < uStack_290) && (uStack_290 != 0 || uVar89 != 0)) {
      fVar97 = (float)FUN_109827740(&uStack_160);
      lVar80 = (long)iStack_1d8;
      afStack_1a0[lVar80] = fVar97;
      fVar97 = (float)FUN_109827740(&uStack_170);
      lVar52 = (long)(int)uStack_1d4;
      afStack_1a0[lVar52] = fVar97;
      fVar97 = (float)FUN_109827740(&uStack_180);
      lVar86 = (long)(int)uStack_1dc;
      afStack_1a0[lVar86] = fVar97;
      fVar98 = (float)FUN_109827740(&uStack_190);
      fVar121 = fStack_278;
      fVar116 = fStack_27c;
      fVar97 = fStack_280;
      if (0.0 < param_2) {
        if ((int)uVar50 < 1) {
          fVar98 = 3.4028235e+38;
        }
        else {
          fVar98 = 1.0 / (fVar98 * 4.0);
          fVar99 = fStack_280 * afStack_1a0[0] * fVar98;
          fVar104 = fStack_27c * afStack_1a0[1] * fVar98;
          fVar105 = fStack_278 * afStack_1a0[2] * fVar98;
          uVar61 = (ulong)uVar50;
          fVar98 = 3.4028235e+38;
          plVar91 = plStack_300;
          do {
            lVar62 = *plVar91;
            FUN_109827688(&uStack_110,&fStack_280,lVar62);
            iVar106 = *(int *)(lVar62 + 0x1c);
            afStack_e0[lVar80] = (float)*(int *)(lVar62 + 0x18);
            afStack_e0[lVar52] = (float)iVar106;
            afStack_e0[lVar86] = (float)*(int *)(lVar62 + 0x20);
            auVar103._0_4_ = (float)uStack_110 * (fVar97 * afStack_e0[0] - fVar99);
            auVar103._4_4_ = uStack_110._4_4_ * (fVar116 * afStack_e0[1] - fVar104);
            auVar103._8_4_ = (float)uStack_108 * (fVar121 * afStack_e0[2] - fVar105);
            auVar103._12_4_ = uStack_108._4_4_ * 0.0;
            auVar102 = NEON_ext(auVar103,auVar103,8,1);
            fVar100 = auVar103._0_4_ + auVar103._4_4_ + auVar102._0_4_;
            if (fVar98 <= fVar100) {
              fVar100 = fVar98;
            }
            fVar98 = fVar100;
            uVar61 = uVar61 - 1;
            plVar91 = plVar91 + 1;
          } while (uVar61 != 0);
          uStack_2c0 = 0;
          if (fVar98 <= 0.0) goto LAB_109829a7c;
        }
        param_1 = param_1 & 0xffffffff;
        if (param_2 * fVar98 <= fVar96) {
          param_1 = (ulong)(uint)(param_2 * fVar98);
        }
      }
      uStack_2c0 = param_1;
      if (0 < (int)uVar50) {
        uVar83 = 0x3b7f7;
        plVar91 = plStack_300;
        uVar61 = (ulong)uVar50;
        do {
          uVar68 = 0;
          if (uVar50 != 0) {
            uVar68 = uVar83 / uVar50;
          }
          uVar68 = uVar83 - uVar68 * uVar50;
          lVar80 = *plVar91;
          *plVar91 = plStack_300[uVar68];
          plStack_300[uVar68] = lVar80;
          uVar83 = uVar83 * 0x19660d + 0x3c6ef35f;
          uVar61 = uVar61 - 1;
          plVar91 = plVar91 + 1;
        } while (uVar61 != 0);
        uVar61 = 0;
        fVar96 = -(float)param_1;
LAB_109828590:
        uVar83 = uStack_12c;
        lVar80 = plStack_140[uVar61];
        bStack_1a8 = 1;
        plStack_1b0 = (long *)0x0;
        uStack_1b8 = 0;
        uStack_1bc = 0;
        uVar89 = (ulong)uStack_12c;
        if (0 < (int)uStack_12c) {
          plVar91 = (long *)(uVar89 << 3);
          FUN_1098256f4(plVar91,0x10);
          if (0 < (int)uStack_1bc) {
            lVar52 = 0;
            do {
              *(undefined8 *)((long)plVar91 + lVar52) = *(undefined8 *)((long)plStack_1b0 + lVar52);
              lVar52 = lVar52 + 8;
            } while ((ulong)uStack_1bc * 8 - lVar52 != 0);
          }
          if ((plStack_1b0 != (long *)0x0) && ((bStack_1a8 & 1) != 0)) {
            FUN_109825740();
          }
          uVar71 = 0;
          uStack_1b8 = uVar83;
          do {
            plVar91[uVar71] = 0;
            uVar71 = uVar71 + 1;
            plVar33 = plVar91;
            plVar58 = plStack_120;
          } while (uVar89 != uVar71);
          do {
            *plVar33 = *plVar58;
            uVar89 = uVar89 - 1;
            plVar33 = plVar33 + 1;
            plVar58 = plVar58 + 1;
            plStack_1b0 = plVar91;
          } while (uVar89 != 0);
        }
        bStack_1a8 = 1;
        uStack_1bc = uVar83;
        FUN_109827688(afStack_e0,&fStack_280,lVar80);
        fVar97 = afStack_e0[1] * fVar96;
        uStack_98 = (ulong)(uint)(afStack_e0[2] * fVar96);
        uStack_a0 = CONCAT44(fVar97,afStack_e0[0] * fVar96);
        if (fStack_280 != 0.0) {
          uStack_a0 = CONCAT44(fVar97,(afStack_e0[0] * fVar96) / fStack_280);
        }
        if (fStack_27c != 0.0) {
          uStack_a0 = CONCAT44(fVar97 / fStack_27c,(undefined4)uStack_a0);
        }
        if (fStack_278 != 0.0) {
          uStack_98 = (ulong)(uint)((afStack_e0[2] * fVar96) / fStack_278);
        }
        iVar106 = (int)*(float *)((long)&uStack_a0 + (long)iStack_1d8 * 4);
        iVar59 = (int)*(float *)((long)&uStack_a0 + (long)(int)uStack_1d4 * 4);
        iVar70 = (int)*(float *)((long)&uStack_a0 + (long)(int)uStack_1dc * 4);
        if ((iVar106 == 0 && iVar59 == 0) && iVar70 == 0) goto LAB_109829a50;
        lStack_b8 = (long)*(int *)(lVar80 + 0x40) * (long)*(int *)(lVar80 + 0x2c) -
                    (long)*(int *)(lVar80 + 0x3c) * (long)*(int *)(lVar80 + 0x30);
        lStack_b0 = (long)*(int *)(lVar80 + 0x38) * (long)*(int *)(lVar80 + 0x30) -
                    (long)*(int *)(lVar80 + 0x28) * (long)*(int *)(lVar80 + 0x40);
        lStack_a8 = (long)*(int *)(lVar80 + 0x28) * (long)*(int *)(lVar80 + 0x3c) -
                    (long)*(int *)(lVar80 + 0x38) * (long)*(int *)(lVar80 + 0x2c);
        uVar89 = (long)*(int *)(lVar80 + 0x18) + (long)iVar106;
        lVar52 = (long)*(int *)(lVar80 + 0x1c) + (long)iVar59;
        uVar71 = (long)*(int *)(lVar80 + 0x20) + (long)iVar70;
        lVar86 = lStack_b8 * uVar89 + lStack_b0 * lVar52 + lStack_a8 * uVar71;
        if (lVar86 < lStack_b8 * *(int *)(lVar80 + 0x18) + lStack_b0 * *(int *)(lVar80 + 0x1c) +
                     lStack_a8 * *(int *)(lVar80 + 0x20)) {
          lVar90 = *(long *)(*(long *)(lVar80 + 8) + 0x10);
          FUN_1098277a0(afStack_e0,*(long *)(lVar80 + 8),&lStack_b8);
          pfVar35 = afStack_e0;
          FUN_109825a00(pfVar35,lVar86);
          lVar62 = lVar90;
          if (-1 < (int)pfVar35) {
            do {
              FUN_1098277a0(&uStack_110,*(undefined8 *)(lVar62 + 0x18),&lStack_b8);
              puVar85 = &uStack_110;
              FUN_1098258f8(puVar85,afStack_e0);
              pfVar95 = pfVar35;
              if ((int)puVar85 < 0) {
                pfVar95 = (float *)&uStack_110;
                FUN_109825a00(pfVar95,lVar86);
                afStack_e0[2] = (float)uStack_108;
                afStack_e0[3] = (float)((ulong)uStack_108 >> 0x20);
                afStack_e0[0] = (float)uStack_110;
                afStack_e0[1] = (float)((ulong)uStack_110 >> 0x20);
                uStack_c8 = (undefined1)uStack_f8;
                uStack_c7 = (undefined4)((uint5)uStack_f8 >> 8);
                pauStack_d0 = (undefined1 (*) [16])lStack_100;
                uStack_c3 = uStack_f3;
                lVar90 = *(long *)(lVar62 + 0x10);
                lVar62 = lVar90;
                if ((int)pfVar95 < 0) goto LAB_109828854;
              }
              lVar62 = *(long *)(lVar62 + 8);
              pfVar35 = pfVar95;
              if (lVar62 == lVar90) goto LAB_109829a74;
            } while( true );
          }
          do {
            FUN_1098277a0(&uStack_110,*(undefined8 *)(lVar62 + 0x18),&lStack_b8);
            puVar85 = &uStack_110;
            FUN_1098258f8(puVar85,afStack_e0);
            if (0 < (int)puVar85) {
              pfVar35 = (float *)&uStack_110;
              FUN_109825a00(pfVar35,lVar86);
              if (-1 < (int)pfVar35) goto LAB_109828860;
              afStack_e0[2] = (float)uStack_108;
              afStack_e0[3] = (float)((ulong)uStack_108 >> 0x20);
              afStack_e0[0] = (float)uStack_110;
              afStack_e0[1] = (float)((ulong)uStack_110 >> 0x20);
              uStack_c8 = (undefined1)uStack_f8;
              uStack_c7 = (undefined4)((uint5)uStack_f8 >> 8);
              pauStack_d0 = (undefined1 (*) [16])lStack_100;
              uStack_c3 = uStack_f3;
              lVar90 = *(long *)(lVar62 + 0x10);
              lVar62 = lVar90;
            }
            lVar62 = *(long *)(lVar62 + 8);
          } while (lVar62 != lVar90);
          goto LAB_109829a50;
        }
        goto LAB_109829a74;
      }
    }
LAB_109829a7c:
    FUN_10982a7b4(auStack_150);
    FUN_10982a768(auStack_130);
    if ((float)uStack_2c0 < 0.0) {
      if (*(long *)(param_3 + 0x10) != 0) {
        if (*(char *)(param_3 + 0x18) == '\x01') {
          FUN_109825740();
        }
        *(undefined8 *)(param_3 + 0x10) = 0;
      }
      *(undefined1 *)(param_3 + 0x18) = 1;
      *(undefined8 *)(param_3 + 0x10) = 0;
      *(undefined4 *)(param_3 + 4) = 0;
      *(undefined4 *)(param_3 + 8) = 0;
      if (*(long *)(param_3 + 0x50) != 0) {
        if (*(char *)(param_3 + 0x58) == '\x01') {
          FUN_109825740();
        }
        *(undefined8 *)(param_3 + 0x50) = 0;
      }
      *(undefined1 *)(param_3 + 0x58) = 1;
      *(undefined8 *)(param_3 + 0x50) = 0;
      *(undefined4 *)(param_3 + 0x44) = 0;
      *(undefined4 *)(param_3 + 0x48) = 0;
      if (*(long *)(param_3 + 0x70) != 0) {
        if (*(char *)(param_3 + 0x78) == '\x01') {
          FUN_109825740();
        }
        *(undefined8 *)(param_3 + 0x70) = 0;
      }
      *(undefined1 *)(param_3 + 0x78) = 1;
      *(undefined8 *)(param_3 + 0x70) = 0;
      *(undefined4 *)(param_3 + 100) = 0;
      *(undefined4 *)(param_3 + 0x68) = 0;
      goto LAB_10982a280;
    }
  }
  if ((*(int *)(param_3 + 4) < 0) && (*(int *)(param_3 + 8) < 0)) {
    if (*(long *)(param_3 + 0x10) != 0) {
      if (*(char *)(param_3 + 0x18) == '\x01') {
        FUN_109825740();
      }
      *(undefined8 *)(param_3 + 0x10) = 0;
    }
    *(undefined1 *)(param_3 + 0x18) = 1;
    *(undefined8 *)(param_3 + 0x10) = 0;
    *(undefined4 *)(param_3 + 8) = 0;
  }
  *(undefined4 *)(param_3 + 4) = 0;
  uVar50 = *(uint *)(param_3 + 0x24);
  if ((int)uVar50 < 0) {
    lVar80 = *(long *)(param_3 + 0x30);
    if (*(int *)(param_3 + 0x28) < 0) {
      if (lVar80 != 0) {
        if (*(char *)(param_3 + 0x38) == '\x01') {
          FUN_109825740();
        }
        *(undefined8 *)(param_3 + 0x30) = 0;
      }
      lVar80 = 0;
      *(undefined1 *)(param_3 + 0x38) = 1;
      *(undefined8 *)(param_3 + 0x30) = 0;
      *(undefined4 *)(param_3 + 0x28) = 0;
    }
    _bzero(lVar80 + (long)(int)uVar50 * 4,(ulong)~uVar50 * 4 + 4);
  }
  *(undefined4 *)(param_3 + 0x24) = 0;
  lVar80 = (long)*(int *)(param_3 + 0x44);
  if (*(int *)(param_3 + 0x44) < 0) {
    if (*(int *)(param_3 + 0x48) < 0) {
      if (*(long *)(param_3 + 0x50) != 0) {
        if (*(char *)(param_3 + 0x58) == '\x01') {
          FUN_109825740();
        }
        *(undefined8 *)(param_3 + 0x50) = 0;
      }
      *(undefined1 *)(param_3 + 0x58) = 1;
      *(undefined8 *)(param_3 + 0x50) = 0;
      *(undefined4 *)(param_3 + 0x48) = 0;
    }
    lVar52 = lVar80 * 0xc;
    do {
      lVar80 = lVar80 + 1;
      puVar85 = (undefined8 *)(*(long *)(param_3 + 0x50) + lVar52);
      *(undefined4 *)(puVar85 + 1) = 0;
      *puVar85 = 0;
      lVar52 = lVar52 + 0xc;
    } while ((int)lVar80 != 0);
  }
  *(undefined4 *)(param_3 + 0x44) = 0;
  uVar50 = *(uint *)(param_3 + 100);
  if ((int)uVar50 < 0) {
    lVar80 = *(long *)(param_3 + 0x70);
    if (*(int *)(param_3 + 0x68) < 0) {
      if (lVar80 != 0) {
        if (*(char *)(param_3 + 0x78) == '\x01') {
          FUN_109825740();
        }
        *(undefined8 *)(param_3 + 0x70) = 0;
      }
      lVar80 = 0;
      *(undefined1 *)(param_3 + 0x78) = 1;
      *(undefined8 *)(param_3 + 0x70) = 0;
      *(undefined4 *)(param_3 + 0x68) = 0;
    }
    _bzero(lVar80 + (long)(int)uVar50 * 4,(ulong)~uVar50 * 4 + 4);
  }
  *(undefined4 *)(param_3 + 100) = 0;
  uStack_c8 = 1;
  pauStack_d0 = (undefined1 (*) [16])0x0;
  afStack_e0[1] = 0.0;
  afStack_e0[2] = 0.0;
  FUN_10982a3d8(lStack_1c8,afStack_e0);
  if (0 < (int)afStack_e0[1]) {
    uVar61 = 0;
    fVar96 = afStack_e0[1];
    do {
      lVar80 = *(long *)((long)pauStack_d0 + uVar61 * 8);
      if (*(int *)(lVar80 + 0x74) < 0) {
        fVar97 = (float)FUN_109827740(lVar80 + 0x28);
        fVar116 = (float)FUN_109827740(lVar80 + 0x58);
        *(float *)((long)&uStack_110 + (long)iStack_1d8 * 4) = fVar97 / fVar116;
        fVar97 = (float)FUN_109827740(lVar80 + 0x38);
        fVar116 = (float)FUN_109827740(lVar80 + 0x58);
        *(float *)((long)&uStack_110 + (long)(int)uStack_1d4 * 4) = fVar97 / fVar116;
        fVar116 = (float)FUN_109827740(lVar80 + 0x48);
        fVar97 = (float)FUN_109827740(lVar80 + 0x58);
        fVar116 = fVar116 / fVar97;
      }
      else {
        iVar106 = *(int *)(lVar80 + 0x6c);
        *(float *)((long)&uStack_110 + (long)iStack_1d8 * 4) = (float)*(int *)(lVar80 + 0x68);
        *(float *)((long)&uStack_110 + (long)(int)uStack_1d4 * 4) = (float)iVar106;
        fVar116 = (float)*(int *)(lVar80 + 0x70);
      }
      uVar89 = uStack_268;
      fVar105 = fStack_26c;
      fVar104 = fStack_270;
      fVar99 = fStack_274;
      fVar98 = fStack_278;
      fVar121 = fStack_27c;
      fVar97 = fStack_280;
      *(float *)((long)&uStack_110 + (long)(int)uStack_1dc * 4) = fVar116;
      uVar76 = uStack_108;
      lVar52 = uStack_110;
      uVar50 = *(uint *)(param_3 + 4);
      if (uVar50 == *(uint *)(param_3 + 8)) {
        uVar83 = uVar50 << 1;
        if (uVar50 == 0) {
          uVar83 = 1;
        }
        if ((int)uVar50 < (int)uVar83) {
          if (uVar83 == 0) {
            uVar71 = 0;
          }
          else {
            uVar71 = -(ulong)(uVar83 >> 0x1f) & 0xfffffff000000000 | (ulong)uVar83 << 4;
            FUN_1098256f4(uVar71,0x10);
            uVar50 = *(uint *)(param_3 + 4);
          }
          if (0 < (int)uVar50) {
            lVar86 = 0;
            do {
              puVar85 = (undefined8 *)(*(long *)(param_3 + 0x10) + lVar86);
              uVar30 = *puVar85;
              ((undefined8 *)(uVar71 + lVar86))[1] = puVar85[1];
              *(undefined8 *)(uVar71 + lVar86) = uVar30;
              lVar86 = lVar86 + 0x10;
            } while ((ulong)uVar50 << 4 != lVar86);
          }
          if (*(long *)(param_3 + 0x10) != 0) {
            if (*(char *)(param_3 + 0x18) == '\x01') {
              FUN_109825740();
            }
            *(undefined8 *)(param_3 + 0x10) = 0;
          }
          *(undefined1 *)(param_3 + 0x18) = 1;
          *(ulong *)(param_3 + 0x10) = uVar71;
          *(uint *)(param_3 + 8) = uVar83;
          uVar50 = *(uint *)(param_3 + 4);
        }
      }
      uStack_290._0_4_ = (float)lVar52;
      uStack_290._4_4_ = (float)((ulong)lVar52 >> 0x20);
      fStack_288 = (float)uVar76;
      fStack_284 = (float)((ulong)uVar76 >> 0x20);
      pfVar35 = (float *)(*(long *)(param_3 + 0x10) + (long)(int)uVar50 * 0x10);
      pfVar35[2] = fStack_288 * fVar98 + (float)uVar89;
      pfVar35[3] = fStack_284 * fVar99 + (float)(uVar89 >> 0x20);
      *pfVar35 = (float)uStack_290 * fVar97 + fVar104;
      pfVar35[1] = uStack_290._4_4_ * fVar121 + fVar105;
      *(int *)(param_3 + 4) = *(int *)(param_3 + 4) + 1;
      uVar50 = *(uint *)(param_3 + 0x24);
      if (uVar50 == *(uint *)(param_3 + 0x28)) {
        uVar83 = uVar50 << 1;
        if (uVar50 == 0) {
          uVar83 = 1;
        }
        if ((int)uVar50 < (int)uVar83) {
          if (uVar83 == 0) {
            puVar46 = (undefined4 *)0x0;
          }
          else {
            puVar46 = (undefined4 *)
                      (-(ulong)(uVar83 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar83 << 2);
            FUN_1098256f4(puVar46,0x10);
            uVar50 = *(uint *)(param_3 + 0x24);
          }
          uVar89 = (ulong)uVar50;
          puVar47 = *(undefined4 **)(param_3 + 0x30);
          puVar67 = puVar46;
          if ((int)uVar50 < 1) {
            if (puVar47 != (undefined4 *)0x0) goto LAB_109829ec8;
          }
          else {
            do {
              *puVar67 = *puVar47;
              uVar89 = uVar89 - 1;
              puVar67 = puVar67 + 1;
              puVar47 = puVar47 + 1;
            } while (uVar89 != 0);
LAB_109829ec8:
            if (*(char *)(param_3 + 0x38) == '\x01') {
              FUN_109825740();
            }
            *(undefined8 *)(param_3 + 0x30) = 0;
            uVar50 = *(uint *)(param_3 + 0x24);
          }
          *(undefined1 *)(param_3 + 0x38) = 1;
          *(undefined4 **)(param_3 + 0x30) = puVar46;
          *(uint *)(param_3 + 0x28) = uVar83;
        }
      }
      *(undefined4 *)(*(long *)(param_3 + 0x30) + (long)(int)uVar50 * 4) =
           *(undefined4 *)(lVar80 + 0x74);
      *(int *)(param_3 + 0x24) = *(int *)(param_3 + 0x24) + 1;
      plVar91 = *(long **)(lVar80 + 0x10);
      if (plVar91 != (long *)0x0) {
        plVar33 = plVar91;
        iVar106 = -1;
        iVar59 = -1;
        do {
          iVar70 = (int)plVar33[5];
          if (iVar70 < 0) {
            uVar50 = *(uint *)(param_3 + 0x44);
            uVar83 = uVar50;
            if (uVar50 == *(uint *)(param_3 + 0x48)) {
              iVar70 = uVar50 << 1;
              if (uVar50 == 0) {
                iVar70 = 1;
              }
              if ((int)uVar50 < iVar70) {
                if (iVar70 == 0) {
                  lVar80 = 0;
                }
                else {
                  lVar80 = (long)iVar70 * 0xc;
                  FUN_1098256f4(lVar80,0x10);
                  uVar83 = *(uint *)(param_3 + 0x44);
                }
                if (0 < (int)uVar83) {
                  lVar52 = 0;
                  do {
                    puVar85 = (undefined8 *)(*(long *)(param_3 + 0x50) + lVar52);
                    uVar76 = *puVar85;
                    *(undefined4 *)((undefined8 *)(lVar80 + lVar52) + 1) =
                         *(undefined4 *)(puVar85 + 1);
                    *(undefined8 *)(lVar80 + lVar52) = uVar76;
                    lVar52 = lVar52 + 0xc;
                  } while ((ulong)uVar83 * 0xc - lVar52 != 0);
                }
                if (*(long *)(param_3 + 0x50) != 0) {
                  if (*(char *)(param_3 + 0x58) == '\x01') {
                    FUN_109825740();
                  }
                  *(undefined8 *)(param_3 + 0x50) = 0;
                }
                *(undefined1 *)(param_3 + 0x58) = 1;
                *(long *)(param_3 + 0x50) = lVar80;
                *(int *)(param_3 + 0x48) = iVar70;
                uVar83 = *(uint *)(param_3 + 0x44);
              }
            }
            puVar85 = (undefined8 *)(*(long *)(param_3 + 0x50) + (long)(int)uVar83 * 0xc);
            *(undefined4 *)(puVar85 + 1) = 0;
            *puVar85 = 0;
            uVar83 = *(int *)(param_3 + 0x44) + 1;
            *(uint *)(param_3 + 0x44) = uVar83;
            if (uVar83 == *(uint *)(param_3 + 0x48)) {
              iVar70 = uVar83 * 2;
              if (uVar83 == 0) {
                iVar70 = 1;
              }
              if ((int)uVar83 < iVar70) {
                if (iVar70 == 0) {
                  lVar80 = 0;
                }
                else {
                  lVar80 = (long)iVar70 * 0xc;
                  FUN_1098256f4(lVar80,0x10);
                  uVar83 = *(uint *)(param_3 + 0x44);
                }
                if (0 < (int)uVar83) {
                  lVar52 = 0;
                  do {
                    puVar85 = (undefined8 *)(*(long *)(param_3 + 0x50) + lVar52);
                    uVar76 = *puVar85;
                    *(undefined4 *)((undefined8 *)(lVar80 + lVar52) + 1) =
                         *(undefined4 *)(puVar85 + 1);
                    *(undefined8 *)(lVar80 + lVar52) = uVar76;
                    lVar52 = lVar52 + 0xc;
                  } while ((ulong)uVar83 * 0xc - lVar52 != 0);
                }
                if (*(long *)(param_3 + 0x50) != 0) {
                  if (*(char *)(param_3 + 0x58) == '\x01') {
                    FUN_109825740();
                  }
                  *(undefined8 *)(param_3 + 0x50) = 0;
                }
                *(undefined1 *)(param_3 + 0x58) = 1;
                *(long *)(param_3 + 0x50) = lVar80;
                *(int *)(param_3 + 0x48) = iVar70;
                uVar83 = *(uint *)(param_3 + 0x44);
              }
            }
            puVar85 = (undefined8 *)(*(long *)(param_3 + 0x50) + (long)(int)uVar83 * 0xc);
            *(undefined4 *)(puVar85 + 1) = 0;
            *puVar85 = 0;
            *(int *)(param_3 + 0x44) = *(int *)(param_3 + 0x44) + 1;
            lVar52 = *(long *)(param_3 + 0x50) + (long)(int)uVar50 * 0xc;
            lVar86 = *(long *)(param_3 + 0x50) + (long)(int)(uVar50 + 1) * 0xc;
            *(uint *)(plVar33 + 5) = uVar50;
            *(uint *)(plVar33[2] + 0x28) = uVar50 + 1;
            *(undefined4 *)(lVar52 + 4) = 1;
            *(undefined4 *)(lVar86 + 4) = 0xffffffff;
            lVar80 = plVar33[3];
            FUN_10982a3d8(lVar80,afStack_e0);
            *(int *)(lVar52 + 8) = (int)lVar80;
            *(int *)(lVar86 + 8) = (int)uVar61;
            iVar70 = (int)plVar33[5];
          }
          iVar60 = iVar70;
          if (-1 < iVar106) {
            *(int *)(*(long *)(param_3 + 0x50) + (long)iVar70 * 0xc) = iVar106 - iVar70;
            iVar60 = iVar59;
          }
          plVar33 = (long *)*plVar33;
          iVar106 = iVar70;
          iVar59 = iVar60;
        } while (plVar33 != plVar91);
        *(int *)(*(long *)(param_3 + 0x50) + (long)iVar60 * 0xc) = iVar70 - iVar60;
        fVar96 = afStack_e0[1];
      }
      pauVar32 = pauStack_d0;
      uVar61 = uVar61 + 1;
    } while ((long)uVar61 < (long)(int)fVar96);
    uVar89 = 0;
    do {
      plVar33 = *(long **)(*(long *)((long)pauVar32 + uVar89 * 8) + 0x10);
      plVar91 = plVar33;
      if (plVar33 != (long *)0x0) {
        do {
          iVar106 = (int)plVar91[5];
          if (-1 < iVar106) {
            uVar50 = *(uint *)(param_3 + 100);
            if (uVar50 == *(uint *)(param_3 + 0x68)) {
              uVar83 = uVar50 << 1;
              if (uVar50 == 0) {
                uVar83 = 1;
              }
              if ((int)uVar50 < (int)uVar83) {
                if (uVar83 == 0) {
                  puVar46 = (undefined4 *)0x0;
                }
                else {
                  puVar46 = (undefined4 *)
                            (-(ulong)(uVar83 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar83 << 2);
                  FUN_1098256f4(puVar46,0x10);
                  uVar50 = *(uint *)(param_3 + 100);
                }
                uVar71 = (ulong)uVar50;
                puVar47 = *(undefined4 **)(param_3 + 0x70);
                puVar67 = puVar46;
                if ((int)uVar50 < 1) {
                  if (puVar47 != (undefined4 *)0x0) goto LAB_10982a1fc;
                }
                else {
                  do {
                    *puVar67 = *puVar47;
                    uVar71 = uVar71 - 1;
                    puVar67 = puVar67 + 1;
                    puVar47 = puVar47 + 1;
                  } while (uVar71 != 0);
LAB_10982a1fc:
                  if (*(char *)(param_3 + 0x78) == '\x01') {
                    FUN_109825740();
                  }
                  *(undefined8 *)(param_3 + 0x70) = 0;
                  uVar50 = *(uint *)(param_3 + 100);
                }
                *(undefined1 *)(param_3 + 0x78) = 1;
                *(undefined4 **)(param_3 + 0x70) = puVar46;
                *(uint *)(param_3 + 0x68) = uVar83;
                iVar106 = (int)plVar91[5];
              }
            }
            *(int *)(*(long *)(param_3 + 0x70) + (long)(int)uVar50 * 4) = iVar106;
            *(int *)(param_3 + 100) = *(int *)(param_3 + 100) + 1;
            plVar58 = plVar91;
            do {
              *(undefined4 *)(plVar58 + 5) = 0xffffffff;
              plVar58 = *(long **)(plVar58[2] + 8);
            } while (plVar58 != plVar91);
          }
          plVar91 = (long *)*plVar91;
        } while (plVar91 != plVar33);
      }
      uVar89 = uVar89 + 1;
    } while (uVar89 != (uVar61 & 0xffffffff));
  }
  FUN_10982a768(afStack_e0);
LAB_10982a280:
  FUN_10982a768(auStack_200);
  FUN_10982a504(&puStack_220);
  FUN_10982a554(&uStack_240);
  FUN_10982a5a4(&uStack_260);
                    /* WARNING: Read-only address (ram,0x00010e0022a0) is written */
                    /* WARNING: Read-only address (ram,0x00010e0022b0) is written */
  return uStack_2c0;
LAB_109828854:
  if (lVar90 == 0) {
LAB_109829a74:
    FUN_10982a768(auStack_1c0);
    uStack_2c0 = (ulong)(uint)fVar96;
    goto LAB_109829a7c;
  }
LAB_109828860:
  if ((int)pfVar35 == 0) {
    plVar91 = (long *)**(long **)(lVar62 + 0x10);
    do {
      FUN_1098277a0(&uStack_110,plVar91[3],&lStack_b8);
      puVar85 = &uStack_110;
      FUN_109825a00(puVar85,lVar86);
      if (0 < (int)puVar85) goto LAB_109828864;
      plVar91 = (long *)*plVar91;
    } while (plVar91 != (long *)*(long *)(lVar62 + 0x10));
    goto LAB_109829a50;
  }
LAB_109828864:
  plStack_310 = (long *)0x0;
  pfStack_308 = (float *)0x0;
  pfVar93 = (float *)0x0;
  pfVar95 = pfStack_308;
  while( true ) {
    pfStack_308 = pfVar95;
    iVar106 = (int)pfVar35;
    if (iVar106 == 0) {
      plVar33 = (long *)**(long **)(lVar62 + 0x10);
      FUN_1098277a0(&uStack_110,plVar33[3],&lStack_b8);
      puVar85 = &uStack_110;
      FUN_109825a00(puVar85,lVar86);
      iVar59 = (int)puVar85;
      plVar91 = plVar33;
      while (iVar59 < 0) {
        plVar58 = (long *)*plVar91;
        if (plVar58 == plVar33) goto LAB_109829a50;
        lVar62 = plVar91[2];
        FUN_1098277a0(&uStack_110,plVar58[3],&lStack_b8);
        puVar85 = &uStack_110;
        FUN_109825a00(puVar85,lVar86);
        plVar91 = plVar58;
        iVar59 = (int)puVar85;
      }
    }
    plVar91 = (long *)lVar62;
    if ((plStack_310 != (long *)0x0) && (plVar91 = plStack_310, (long *)lVar62 == plStack_310))
    break;
    lVar90 = *(long *)(lVar62 + 0x10);
    do {
      lVar90 = *(long *)(*(long *)(lVar90 + 0x10) + 8);
      lVar92 = *(long *)(lVar90 + 0x18);
      FUN_1098277a0(&uStack_110,lVar92,&lStack_b8);
      pfVar35 = (float *)&uStack_110;
      FUN_109825a00(pfVar35,lVar86);
      iVar59 = (int)pfVar35;
    } while (iVar59 < 0);
    if (iVar59 != 0) {
      plVar58 = *(long **)(lVar90 + 0x10);
      plVar33 = (long *)plVar58[1];
      if (plVar33 == plVar58) {
        plVar33 = (long *)0x0;
      }
      else {
        lVar63 = *plVar58;
        *plVar33 = lVar63;
        *(long **)(lVar63 + 8) = plVar33;
        *plVar58 = (long)plVar58;
        plVar58[1] = (long)plVar58;
      }
      *(long **)(lVar92 + 0x10) = plVar33;
      lVar63 = *(long *)(lVar90 + 0x20);
      iVar70 = *(int *)(lVar63 + 0x3c);
      iVar21 = *(int *)(lVar63 + 0x40);
      iVar60 = *(int *)(lVar63 + 0x2c);
      iVar22 = *(int *)(lVar63 + 0x30);
      iVar7 = *(int *)(lVar63 + 0x38);
      iVar8 = *(int *)(lVar63 + 0x28);
      lVar64 = plVar58[4];
      iVar9 = *(int *)(lVar64 + 0x40);
      iVar10 = *(int *)(lVar64 + 0x30);
      iVar11 = *(int *)(lVar64 + 0x3c);
      iVar12 = *(int *)(lVar64 + 0x38);
      iVar13 = *(int *)(lVar64 + 0x2c);
      iVar14 = *(int *)(lVar64 + 0x28);
      iVar6 = *(int *)(lVar80 + 0x28);
      iVar2 = *(int *)(lVar80 + 0x2c);
      iVar15 = *(int *)(lVar80 + 0x30);
      iVar16 = *(int *)(lVar80 + 0x38);
      iVar69 = *(int *)(lVar80 + 0x3c);
      iVar3 = *(int *)(lVar80 + 0x40);
      iVar75 = *(int *)(lVar63 + 0x18);
      iVar4 = *(int *)(lVar63 + 0x1c);
      iVar17 = *(int *)(lVar63 + 0x20);
      iVar20 = *(int *)(lVar64 + 0x18);
      iVar5 = *(int *)(lVar64 + 0x1c);
      iVar18 = *(int *)(lVar64 + 0x20);
      puVar85 = &uStack_260;
      FUN_1098275c4();
      lVar65 = (long)iVar7 * (long)iVar22 - (long)iVar8 * (long)iVar21;
      lVar54 = (long)iVar21 * (long)iVar60 - (long)iVar70 * (long)iVar22;
      lVar66 = (long)iVar8 * (long)iVar70 - (long)iVar7 * (long)iVar60;
      uVar36 = lVar54 * iVar6 + lVar65 * iVar2 + lVar66 * iVar15;
      lVar79 = (long)iVar12 * (long)iVar10 - (long)iVar14 * (long)iVar9;
      lVar94 = (long)iVar9 * (long)iVar13 - (long)iVar11 * (long)iVar10;
      lVar84 = (long)iVar14 * (long)iVar11 - (long)iVar12 * (long)iVar13;
      lVar64 = lVar94 * iVar16 + lVar79 * iVar69 + lVar84 * iVar3;
      uVar78 = uVar36;
      lVar63 = lVar64;
      func_0x0001098257f8();
      lVar37 = lVar54 * iVar16 + lVar65 * iVar69 + lVar66 * iVar3;
      uVar48 = lVar94 * iVar6 + lVar79 * iVar2 + lVar84 * iVar15;
      lVar56 = lVar37;
      uVar44 = uVar48;
      func_0x0001098257f8();
      uVar53 = ~uVar44;
      if (lVar56 == 0) {
        uVar53 = -uVar44;
      }
      lVar63 = lVar63 + uVar53;
      uVar53 = uVar78 - lVar56;
      if (uVar53 < uVar78) {
        lVar63 = lVar63 + 1;
      }
      lVar94 = lVar94 * ((long)iVar20 - (long)(int)uVar89) +
               lVar79 * ((long)iVar5 - (long)(int)lVar52) +
               lVar84 * ((long)iVar18 - (long)(int)uVar71);
      lVar84 = lVar54 * ((long)iVar75 - (long)(int)uVar89) +
               lVar65 * ((long)iVar4 - (long)(int)lVar52) +
               lVar66 * ((long)iVar17 - (long)(int)uVar71);
      *(undefined8 *)((long)puVar85 + 0x74) = 0xffffffffffffffff;
      iVar70 = *(int *)(lVar80 + 0x28);
      uVar38 = lVar84 * iVar70;
      lVar56 = lVar64;
      func_0x0001098257f8();
      lVar66 = lVar94 * iVar70;
      lVar54 = lVar37;
      func_0x0001098257f8();
      uVar55 = uVar38 - lVar66;
      iVar70 = *(int *)(lVar80 + 0x38);
      uVar39 = lVar94 * iVar70;
      uVar44 = uVar36;
      func_0x0001098257f8();
      lVar79 = lVar84 * iVar70;
      uVar45 = uVar48;
      func_0x0001098257f8();
      uVar78 = uVar53;
      lVar65 = lVar63;
      FUN_109825750(uVar53,lVar63,uVar89);
      lVar56 = lVar56 - lVar54;
      if (lVar66 == 0) {
        lVar56 = lVar56 + 1;
      }
      lVar56 = (lVar56 + uVar44) - uVar45;
      if (uVar55 < uVar38) {
        lVar56 = lVar56 + 1;
      }
      uVar73 = (uVar39 + uVar55) - lVar79;
      iVar70 = *(int *)(lVar80 + 0x2c);
      uVar40 = lVar84 * iVar70;
      lVar54 = lVar64;
      func_0x0001098257f8();
      lVar41 = lVar94 * iVar70;
      lVar66 = lVar37;
      func_0x0001098257f8();
      uVar81 = uVar40 - lVar41;
      iVar70 = *(int *)(lVar80 + 0x3c);
      uVar42 = lVar94 * iVar70;
      uVar45 = uVar36;
      func_0x0001098257f8();
      lVar43 = lVar84 * iVar70;
      uVar38 = uVar48;
      func_0x0001098257f8();
      uVar44 = uVar53;
      lVar49 = lVar63;
      FUN_109825750(uVar53,lVar63,lVar52);
      lVar54 = lVar54 - lVar66;
      if (lVar41 == 0) {
        lVar54 = lVar54 + 1;
      }
      lVar54 = (lVar54 + uVar45) - uVar38;
      if (uVar81 < uVar40) {
        lVar54 = lVar54 + 1;
      }
      uVar74 = (uVar42 + uVar81) - lVar43;
      iVar70 = *(int *)(lVar80 + 0x30);
      uVar38 = lVar84 * iVar70;
      func_0x0001098257f8();
      lVar41 = lVar94 * iVar70;
      func_0x0001098257f8();
      uVar82 = uVar38 - lVar41;
      iVar70 = *(int *)(lVar80 + 0x40);
      uVar40 = lVar94 * iVar70;
      func_0x0001098257f8();
      lVar84 = lVar84 * iVar70;
      func_0x0001098257f8();
      uVar45 = uVar53;
      lVar66 = lVar63;
      FUN_109825750(uVar53,lVar63,uVar71);
      lVar64 = lVar64 - lVar37;
      if (lVar41 == 0) {
        lVar64 = lVar64 + 1;
      }
      lVar64 = (lVar64 + uVar36) - uVar48;
      if (uVar82 < uVar38) {
        lVar64 = lVar64 + 1;
      }
      uVar36 = (uVar40 + uVar82) - lVar84;
      puVar85[5] = uVar78 + uVar73;
      puVar85[6] = lVar56 + lVar65 + -2 + (ulong)(lVar79 == 0) + (ulong)CARRY8(uVar39,uVar55) +
                   (ulong)(uVar73 < uVar39 + uVar55) + (ulong)CARRY8(uVar78,uVar73);
      puVar85[7] = uVar44 + uVar74;
      puVar85[9] = uVar45 + uVar36;
      puVar85[8] = lVar54 + lVar49 + -2 + (ulong)(lVar43 == 0) + (ulong)CARRY8(uVar42,uVar81) +
                   (ulong)(uVar74 < uVar42 + uVar81) + (ulong)CARRY8(uVar44,uVar74);
      puVar85[10] = lVar64 + lVar66 + -2 + (ulong)(lVar84 == 0) + (ulong)CARRY8(uVar40,uVar82) +
                    (ulong)(uVar36 < uVar40 + uVar82) + (ulong)CARRY8(uVar45,uVar36);
      puVar87 = puVar85 + 0xb;
      *puVar87 = uVar53;
      puVar85[0xc] = lVar63;
      fVar97 = (float)FUN_109827740();
      fVar116 = (float)FUN_109827740(puVar87);
      *(int *)(puVar85 + 0xd) = (int)(fVar97 / fVar116);
      fVar97 = (float)FUN_109827740(puVar85 + 7);
      fVar116 = (float)FUN_109827740(puVar87);
      *(int *)((long)puVar85 + 0x6c) = (int)(fVar97 / fVar116);
      fVar97 = (float)FUN_109827740(puVar85 + 9);
      fVar116 = (float)FUN_109827740(puVar87);
      *(int *)(puVar85 + 0xe) = (int)(fVar97 / fVar116);
      *(undefined8 **)(lVar90 + 0x18) = puVar85;
      puVar85[2] = plVar58;
      uVar78 = (ulong)uStack_1bc;
      uVar53 = (ulong)uStack_1b8;
      if (uStack_1bc == uStack_1b8) {
        uVar83 = uStack_1bc << 1;
        if (uStack_1bc == 0) {
          uVar83 = 1;
        }
        uVar53 = uVar78;
        if ((int)uStack_1bc < (int)uVar83) {
          if (uVar83 == 0) {
            plVar33 = (long *)0x0;
          }
          else {
            plVar33 = (long *)(-(ulong)(uVar83 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar83 << 3);
            FUN_1098256f4(plVar33,0x10);
            uVar78 = (ulong)uStack_1bc;
          }
          if (0 < (int)uVar78) {
            lVar63 = 0;
            do {
              *(undefined8 *)((long)plVar33 + lVar63) = *(undefined8 *)((long)plStack_1b0 + lVar63);
              lVar63 = lVar63 + 8;
            } while (uVar78 << 3 != lVar63);
          }
          if ((plStack_1b0 != (long *)0x0) && ((bStack_1a8 & 1) != 0)) {
            FUN_109825740();
            uVar78 = (ulong)uStack_1bc;
          }
          uStack_1bc = (uint)uVar78;
          bStack_1a8 = 1;
          plStack_1b0 = plVar33;
          uStack_1b8 = uVar83;
          uVar53 = (ulong)uVar83;
        }
      }
      plStack_1b0[(int)uStack_1bc] = (long)puVar85;
      uStack_1bc = uStack_1bc + 1;
      uVar83 = (uint)uVar53;
      uVar78 = (ulong)uStack_1bc;
      if (uStack_1bc == uVar83) {
        uVar68 = uVar83 << 1;
        if (uVar83 == 0) {
          uVar68 = 1;
        }
        uVar78 = uVar53;
        if ((int)uVar83 < (int)uVar68) {
          if (uVar68 == 0) {
            plVar33 = (long *)0x0;
          }
          else {
            plVar33 = (long *)(-(ulong)(uVar68 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar68 << 3);
            FUN_1098256f4(plVar33,0x10);
            uVar53 = (ulong)uStack_1bc;
          }
          if (0 < (int)uVar53) {
            lVar63 = 0;
            do {
              *(undefined8 *)((long)plVar33 + lVar63) = *(undefined8 *)((long)plStack_1b0 + lVar63);
              lVar63 = lVar63 + 8;
            } while (uVar53 << 3 != lVar63);
          }
          if ((plStack_1b0 != (long *)0x0) && ((bStack_1a8 & 1) != 0)) {
            FUN_109825740();
            uVar53 = (ulong)uStack_1bc;
          }
          bStack_1a8 = 1;
          plStack_1b0 = plVar33;
          uStack_1b8 = uVar68;
          uVar78 = uVar53;
          uVar53 = (ulong)uVar68;
        }
      }
      plStack_1b0[(int)uVar78] = lVar92;
      uStack_1bc = (int)uVar78 + 1;
      uVar68 = (uint)uVar53;
      uVar83 = uStack_1bc;
      if (uStack_1bc == uVar68) {
        uVar19 = uVar68 << 1;
        if (uVar68 == 0) {
          uVar19 = 1;
        }
        uVar83 = uVar68;
        if ((int)uVar68 < (int)uVar19) {
          if (uVar19 == 0) {
            plVar33 = (long *)0x0;
          }
          else {
            plVar33 = (long *)(-(ulong)(uVar19 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar19 << 3);
            FUN_1098256f4(plVar33,0x10);
            uVar53 = (ulong)uStack_1bc;
          }
          if (0 < (int)uVar53) {
            lVar92 = 0;
            do {
              *(undefined8 *)((long)plVar33 + lVar92) = *(undefined8 *)((long)plStack_1b0 + lVar92);
              lVar92 = lVar92 + 8;
            } while (uVar53 << 3 != lVar92);
          }
          if ((plStack_1b0 != (long *)0x0) && ((bStack_1a8 & 1) != 0)) {
            FUN_109825740();
            uVar53 = (ulong)uStack_1bc;
          }
          bStack_1a8 = 1;
          plStack_1b0 = plVar33;
          uStack_1b8 = uVar19;
          uVar83 = (uint)uVar53;
        }
      }
      plStack_1b0[(int)uVar83] = 0;
      uStack_1bc = uVar83 + 1;
      lVar92 = *(long *)(lVar90 + 0x18);
    }
    if ((iVar59 != 0 || iVar106 != 0) ||
       (pfVar95 = (float *)**(undefined8 **)(lVar62 + 0x10), *(long *)(pfVar95 + 6) != lVar92)) {
      pfVar95 = &fStack_280;
      FUN_109825b90(pfVar95,*(undefined8 *)(lVar62 + 0x18),lVar92);
      if (iVar106 == 0) {
        plVar33 = *(long **)(lVar62 + 0x10);
        lVar62 = *plVar33;
        *(long *)pfVar95 = lVar62;
        *(float **)(lVar62 + 8) = pfVar95;
LAB_109829150:
        *plVar33 = (long)pfVar95;
        *(long **)(pfVar95 + 2) = plVar33;
      }
      else if (pfVar93 != (float *)0x0) {
        plVar33 = *(long **)(lVar62 + 0x10);
        goto LAB_109829150;
      }
      if (iVar59 == 0) {
        lVar62 = *(long *)(lVar90 + 0x10);
        puVar85 = *(undefined8 **)(lVar62 + 8);
        plVar33 = *(long **)(pfVar95 + 4);
        *puVar85 = plVar33;
        plVar33[1] = (long)puVar85;
      }
      else {
        plVar33 = *(long **)(pfVar95 + 4);
        lVar62 = *(long *)(lVar90 + 0x10);
      }
      *plVar33 = lVar62;
      *(long **)(lVar62 + 8) = plVar33;
    }
    if (pfVar93 != (float *)0x0) {
      pfVar57 = *(float **)(pfVar93 + 4);
      if (iVar106 < 1) {
        if (pfVar95 != pfVar57) {
          uVar78 = (ulong)uStack_1bc;
          uVar53 = (ulong)uStack_1b8;
          if (uStack_1bc == uStack_1b8) {
            uVar83 = uStack_1bc << 1;
            if (uStack_1bc == 0) {
              uVar83 = 1;
            }
            uVar53 = uVar78;
            if ((int)uStack_1bc < (int)uVar83) {
              if (uVar83 == 0) {
                plVar33 = (long *)0x0;
              }
              else {
                plVar33 = (long *)(-(ulong)(uVar83 >> 0x1f) & 0xfffffff800000000 |
                                  (ulong)uVar83 << 3);
                FUN_1098256f4(plVar33,0x10);
                uVar78 = (ulong)uStack_1bc;
              }
              if (0 < (int)uVar78) {
                lVar62 = 0;
                do {
                  *(undefined8 *)((long)plVar33 + lVar62) =
                       *(undefined8 *)((long)plStack_1b0 + lVar62);
                  lVar62 = lVar62 + 8;
                } while (uVar78 << 3 != lVar62);
              }
              if ((plStack_1b0 != (long *)0x0) && ((bStack_1a8 & 1) != 0)) {
                FUN_109825740();
                uVar78 = (ulong)uStack_1bc;
              }
              uStack_1bc = (uint)uVar78;
              bStack_1a8 = 1;
              plStack_1b0 = plVar33;
              uStack_1b8 = uVar83;
              uVar53 = (ulong)uVar83;
            }
          }
          plStack_1b0[(int)uStack_1bc] = *(long *)(pfVar93 + 6);
          uStack_1bc = uStack_1bc + 1;
          lVar62 = *(long *)pfVar95;
          if (lVar62 != *(long *)(pfVar93 + 4)) {
            do {
              lVar62 = *(long *)(lVar62 + 0x18);
              FUN_109827534(&fStack_280);
              uVar78 = (ulong)uStack_1bc;
              uVar53 = (ulong)uStack_1b8;
              if (uStack_1bc == uStack_1b8) {
                uVar83 = uStack_1bc << 1;
                if (uStack_1bc == 0) {
                  uVar83 = 1;
                }
                uVar53 = uVar78;
                if ((int)uStack_1bc < (int)uVar83) {
                  if (uVar83 == 0) {
                    plVar33 = (long *)0x0;
                  }
                  else {
                    plVar33 = (long *)(-(ulong)(uVar83 >> 0x1f) & 0xfffffff800000000 |
                                      (ulong)uVar83 << 3);
                    FUN_1098256f4(plVar33,0x10);
                    uVar78 = (ulong)uStack_1bc;
                  }
                  if (0 < (int)uVar78) {
                    lVar92 = 0;
                    do {
                      *(undefined8 *)((long)plVar33 + lVar92) =
                           *(undefined8 *)((long)plStack_1b0 + lVar92);
                      lVar92 = lVar92 + 8;
                    } while (uVar78 << 3 != lVar92);
                  }
                  if ((plStack_1b0 != (long *)0x0) && ((bStack_1a8 & 1) != 0)) {
                    FUN_109825740();
                    uVar78 = (ulong)uStack_1bc;
                  }
                  uStack_1bc = (uint)uVar78;
                  bStack_1a8 = 1;
                  plStack_1b0 = plVar33;
                  uStack_1b8 = uVar83;
                  uVar53 = (ulong)uVar83;
                }
              }
              plStack_1b0[(int)uStack_1bc] = lVar62;
              uStack_1bc = uStack_1bc + 1;
              lVar62 = *(long *)pfVar95;
            } while (lVar62 != *(long *)(pfVar93 + 4));
          }
          uVar68 = (uint)uVar53;
          uVar83 = uStack_1bc;
          if (uStack_1bc == uVar68) {
            uVar19 = uVar68 << 1;
            if (uVar68 == 0) {
              uVar19 = 1;
            }
            uVar83 = uVar68;
            if ((int)uVar68 < (int)uVar19) {
              if (uVar19 == 0) {
                plVar33 = (long *)0x0;
              }
              else {
                plVar33 = (long *)(-(ulong)(uVar19 >> 0x1f) & 0xfffffff800000000 |
                                  (ulong)uVar19 << 3);
                FUN_1098256f4(plVar33,0x10);
                uVar53 = (ulong)uStack_1bc;
              }
              if (0 < (int)uVar53) {
                lVar62 = 0;
                do {
                  *(undefined8 *)((long)plVar33 + lVar62) =
                       *(undefined8 *)((long)plStack_1b0 + lVar62);
                  lVar62 = lVar62 + 8;
                } while (uVar53 << 3 != lVar62);
              }
              if ((plStack_1b0 != (long *)0x0) && ((bStack_1a8 & 1) != 0)) {
                FUN_109825740();
                uVar53 = (ulong)uStack_1bc;
              }
              bStack_1a8 = 1;
              plStack_1b0 = plVar33;
              uStack_1b8 = uVar19;
              uVar83 = (uint)uVar53;
            }
          }
          plStack_1b0[(int)uVar83] = 0;
          uStack_1bc = uVar83 + 1;
        }
      }
      else {
        *(float **)pfVar95 = pfVar57;
        *(float **)(pfVar57 + 2) = pfVar95;
      }
    }
    *(long *)(pfVar95 + 8) = lVar80;
    *(undefined8 *)(*(long *)(pfVar95 + 4) + 0x20) = *(undefined8 *)(lVar90 + 0x20);
    lVar62 = lVar90;
    pfVar93 = pfVar95;
    plStack_310 = plVar91;
    if (pfStack_308 != (float *)0x0) {
      pfVar95 = pfStack_308;
    }
  }
  if (iVar106 < 1) {
    uVar53 = (ulong)uStack_1bc;
    if (pfStack_308 != *(float **)(pfVar93 + 4)) {
      uVar78 = (ulong)uStack_1b8;
      if (uStack_1bc == uStack_1b8) {
        uVar83 = uStack_1bc << 1;
        if (uStack_1bc == 0) {
          uVar83 = 1;
        }
        uVar78 = uVar53;
        if ((int)uStack_1bc < (int)uVar83) {
          if (uVar83 == 0) {
            plVar91 = (long *)0x0;
          }
          else {
            plVar91 = (long *)(-(ulong)(uVar83 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar83 << 3);
            FUN_1098256f4(plVar91,0x10);
            uVar53 = (ulong)uStack_1bc;
          }
          if (0 < (int)uVar53) {
            lVar86 = 0;
            do {
              *(undefined8 *)((long)plVar91 + lVar86) = *(undefined8 *)((long)plStack_1b0 + lVar86);
              lVar86 = lVar86 + 8;
            } while (uVar53 << 3 != lVar86);
          }
          if ((plStack_1b0 != (long *)0x0) && ((bStack_1a8 & 1) != 0)) {
            FUN_109825740();
            uVar53 = (ulong)uStack_1bc;
          }
          uStack_1bc = (uint)uVar53;
          bStack_1a8 = 1;
          plStack_1b0 = plVar91;
          uStack_1b8 = uVar83;
          uVar78 = (ulong)uVar83;
        }
      }
      plStack_1b0[(int)uStack_1bc] = *(long *)(pfVar93 + 6);
      uStack_1bc = uStack_1bc + 1;
      lVar86 = *(long *)pfStack_308;
      if (lVar86 != *(long *)(pfVar93 + 4)) {
        do {
          lVar86 = *(long *)(lVar86 + 0x18);
          FUN_109827534(&fStack_280);
          uVar53 = (ulong)uStack_1bc;
          uVar78 = (ulong)uStack_1b8;
          if (uStack_1bc == uStack_1b8) {
            uVar83 = uStack_1bc << 1;
            if (uStack_1bc == 0) {
              uVar83 = 1;
            }
            uVar78 = uVar53;
            if ((int)uStack_1bc < (int)uVar83) {
              if (uVar83 == 0) {
                plVar91 = (long *)0x0;
              }
              else {
                plVar91 = (long *)(-(ulong)(uVar83 >> 0x1f) & 0xfffffff800000000 |
                                  (ulong)uVar83 << 3);
                FUN_1098256f4(plVar91,0x10);
                uVar53 = (ulong)uStack_1bc;
              }
              if (0 < (int)uVar53) {
                lVar62 = 0;
                do {
                  *(undefined8 *)((long)plVar91 + lVar62) =
                       *(undefined8 *)((long)plStack_1b0 + lVar62);
                  lVar62 = lVar62 + 8;
                } while (uVar53 << 3 != lVar62);
              }
              if ((plStack_1b0 != (long *)0x0) && ((bStack_1a8 & 1) != 0)) {
                FUN_109825740();
                uVar53 = (ulong)uStack_1bc;
              }
              uStack_1bc = (uint)uVar53;
              bStack_1a8 = 1;
              plStack_1b0 = plVar91;
              uStack_1b8 = uVar83;
              uVar78 = (ulong)uVar83;
            }
          }
          plStack_1b0[(int)uStack_1bc] = lVar86;
          uStack_1bc = uStack_1bc + 1;
          lVar86 = *(long *)pfStack_308;
        } while (lVar86 != *(long *)(pfVar93 + 4));
      }
      uVar68 = (uint)uVar78;
      uVar83 = uStack_1bc;
      if (uStack_1bc == uVar68) {
        uVar19 = uVar68 << 1;
        if (uVar68 == 0) {
          uVar19 = 1;
        }
        uVar83 = uVar68;
        if ((int)uVar68 < (int)uVar19) {
          if (uVar19 == 0) {
            plVar91 = (long *)0x0;
          }
          else {
            plVar91 = (long *)(-(ulong)(uVar19 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar19 << 3);
            FUN_1098256f4(plVar91,0x10);
            uVar78 = (ulong)uStack_1bc;
          }
          if (0 < (int)uVar78) {
            lVar86 = 0;
            do {
              *(undefined8 *)((long)plVar91 + lVar86) = *(undefined8 *)((long)plStack_1b0 + lVar86);
              lVar86 = lVar86 + 8;
            } while (uVar78 << 3 != lVar86);
          }
          if ((plStack_1b0 != (long *)0x0) && ((bStack_1a8 & 1) != 0)) {
            FUN_109825740();
            uVar78 = (ulong)uStack_1bc;
          }
          bStack_1a8 = 1;
          uVar83 = (uint)uVar78;
          uStack_1b8 = uVar19;
          plStack_1b0 = plVar91;
        }
      }
      plStack_1b0[(int)uVar83] = 0;
      uStack_1bc = uVar83 + 1;
      uVar53 = (ulong)uStack_1bc;
    }
  }
  else {
    *(undefined8 *)(*(long *)(pfStack_308 + 4) + 0x18) = *(undefined8 *)(pfVar93 + 6);
    puVar85 = *(undefined8 **)((long)plStack_310 + 0x10);
    *puVar85 = pfStack_308;
    *(undefined8 **)(pfStack_308 + 2) = puVar85;
    lVar86 = *(long *)(pfVar93 + 4);
    *(long *)pfStack_308 = lVar86;
    *(float **)(lVar86 + 8) = pfStack_308;
    uVar53 = (ulong)uStack_1bc;
  }
  lStack_1c8 = *plStack_1b0;
  uVar83 = (uint)uVar53;
  if ((int)(uint)uVar53 < 1) {
LAB_1098299dc:
    if ((int)uVar83 < 0) {
      if ((int)uStack_1b8 < 0) {
        if ((plStack_1b0 != (long *)0x0) && ((bStack_1a8 & 1) != 0)) {
          FUN_109825740();
        }
        bStack_1a8 = 1;
        plStack_1b0 = (long *)0x0;
        uStack_1b8 = 0;
      }
      lVar86 = (long)(int)uVar83;
      do {
        plStack_1b0[lVar86] = 0;
        lVar86 = lVar86 + 1;
      } while ((int)lVar86 != 0);
    }
  }
  else {
    uVar78 = 0;
    do {
      iVar106 = (int)uVar78;
      uVar83 = iVar106 + 2;
      uVar78 = (ulong)uVar83;
      lVar86 = (plStack_1b0 + iVar106)[1];
      if (lVar86 != 0) {
        bVar31 = false;
        lVar62 = plStack_1b0[iVar106];
        uVar78 = (long)(int)uVar83;
        do {
          while( true ) {
            uVar44 = uVar78;
            plVar33 = (long *)(lVar86 + 0x18);
            lVar90 = *plVar33;
            plVar91 = (long *)(lVar62 + 0x18);
            if (*(long *)(lVar62 + 0x20) != 0) {
              plVar91 = (long *)(*(long *)(lVar62 + 0x20) + 0x10);
            }
            *plVar91 = lVar90;
            if (*(long *)(lVar86 + 0x20) != 0) {
              *(long *)(lVar62 + 0x20) = *(long *)(lVar86 + 0x20);
              lVar90 = *plVar33;
            }
            for (; lVar90 != 0; lVar90 = *(long *)(lVar90 + 0x10)) {
                    /* WARNING: Read-only address (ram,0x00010e0022a0) is written */
                    /* WARNING: Read-only address (ram,0x00010e0022b0) is written */
              *(long *)(lVar90 + 8) = lVar62;
            }
                    /* WARNING: Read-only address (ram,0x00010e0022a0) is written */
                    /* WARNING: Read-only address (ram,0x00010e0022b0) is written */
            *plVar33 = 0;
            *(undefined8 *)(lVar86 + 0x20) = 0;
            lVar90 = *(long *)(lVar86 + 0x10);
            if (lVar90 != 0) break;
            uVar78 = uVar44 + 1;
            lVar86 = plStack_1b0[uVar44];
            if (lVar86 == 0) {
              if (!bVar31) goto LAB_1098299c0;
              goto LAB_10982991c;
            }
          }
          if (!bVar31) {
            if (uStack_1bc == uStack_1b8) {
              uVar83 = uStack_1bc << 1;
              if (uStack_1bc == 0) {
                uVar83 = 1;
              }
              if ((int)uStack_1bc < (int)uVar83) {
                if (uVar83 == 0) {
                  plVar91 = (long *)0x0;
                }
                else {
                  plVar91 = (long *)(-(ulong)(uVar83 >> 0x1f) & 0xfffffff800000000 |
                                    (ulong)uVar83 << 3);
                  FUN_1098256f4(plVar91,0x10);
                }
                if (0 < (int)uStack_1bc) {
                  lVar90 = 0;
                  do {
                    *(undefined8 *)((long)plVar91 + lVar90) =
                         *(undefined8 *)((long)plStack_1b0 + lVar90);
                    lVar90 = lVar90 + 8;
                  } while ((ulong)uStack_1bc << 3 != lVar90);
                }
                if ((plStack_1b0 != (long *)0x0) && ((bStack_1a8 & 1) != 0)) {
                  FUN_109825740();
                }
                bStack_1a8 = 1;
                uStack_1b8 = uVar83;
                plStack_1b0 = plVar91;
              }
            }
            plStack_1b0[(int)uStack_1bc] = lVar62;
            uStack_1bc = uStack_1bc + 1;
            lVar90 = *(long *)(lVar86 + 0x10);
          }
          do {
            if (uStack_1bc == uStack_1b8) {
              uVar83 = uStack_1bc << 1;
              if (uStack_1bc == 0) {
                uVar83 = 1;
              }
              if ((int)uStack_1bc < (int)uVar83) {
                if (uVar83 == 0) {
                  plVar91 = (long *)0x0;
                }
                else {
                  plVar91 = (long *)(-(ulong)(uVar83 >> 0x1f) & 0xfffffff800000000 |
                                    (ulong)uVar83 << 3);
                  FUN_1098256f4(plVar91,0x10);
                }
                if (0 < (int)uStack_1bc) {
                  lVar92 = 0;
                  do {
                    *(undefined8 *)((long)plVar91 + lVar92) =
                         *(undefined8 *)((long)plStack_1b0 + lVar92);
                    lVar92 = lVar92 + 8;
                  } while ((ulong)uStack_1bc << 3 != lVar92);
                }
                if ((plStack_1b0 != (long *)0x0) && ((bStack_1a8 & 1) != 0)) {
                  FUN_109825740();
                }
                bStack_1a8 = 1;
                uStack_1b8 = uVar83;
                plStack_1b0 = plVar91;
              }
            }
            plStack_1b0[(int)uStack_1bc] = *(long *)(lVar90 + 0x18);
            uStack_1bc = uStack_1bc + 1;
            FUN_109827534(&fStack_280,*(undefined8 *)(lVar86 + 0x10));
            lVar90 = *(long *)(lVar86 + 0x10);
          } while (lVar90 != 0);
          lVar86 = plStack_1b0[uVar44];
          bVar31 = true;
          uVar78 = uVar44 + 1;
        } while (lVar86 != 0);
LAB_10982991c:
        uVar78 = uVar44 + 1;
        if (uStack_1bc == uStack_1b8) {
          uVar83 = uStack_1bc << 1;
          if (uStack_1bc == 0) {
            uVar83 = 1;
          }
          if ((int)uStack_1bc < (int)uVar83) {
            if (uVar83 == 0) {
              plVar91 = (long *)0x0;
            }
            else {
              plVar91 = (long *)(-(ulong)(uVar83 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar83 << 3)
              ;
              FUN_1098256f4(plVar91,0x10);
            }
            if (0 < (int)uStack_1bc) {
              lVar86 = 0;
              do {
                *(undefined8 *)((long)plVar91 + lVar86) =
                     *(undefined8 *)((long)plStack_1b0 + lVar86);
                lVar86 = lVar86 + 8;
              } while ((ulong)uStack_1bc << 3 != lVar86);
            }
            if ((plStack_1b0 != (long *)0x0) && ((bStack_1a8 & 1) != 0)) {
              FUN_109825740();
            }
            bStack_1a8 = 1;
            uStack_1b8 = uVar83;
            plStack_1b0 = plVar91;
          }
        }
        plStack_1b0[(int)uStack_1bc] = 0;
        uStack_1bc = uStack_1bc + 1;
      }
LAB_1098299c0:
    } while (((int)uVar78 < (int)uVar53) ||
            (uVar53 = (ulong)uStack_1bc, (int)uVar78 < (int)uStack_1bc));
    uVar83 = uStack_1bc;
    if ((int)uStack_1bc < 1) goto LAB_1098299dc;
  }
  uStack_1bc = 0;
  *(ulong *)(lVar80 + 0x18) = lVar52 << 0x20 | uVar89 & 0xffffffff;
  *(ulong *)(lVar80 + 0x20) = uVar71 | 0xffffffff00000000;
LAB_109829a50:
  FUN_10982a768(auStack_1c0);
  uVar61 = uVar61 + 1;
  if (uVar61 == uVar50) goto LAB_109829a7c;
  goto LAB_109828590;
}



/* Entry: 10982a3d8; end: 10982a4c3;  */

ulong FUN_10982a3d8(long param_1,long param_2)

{
  uint uVar1;
  ulong uVar2;
  uint uVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  
  uVar6 = (ulong)*(uint *)(param_1 + 0x78);
  if ((int)*(uint *)(param_1 + 0x78) < 0) {
    uVar3 = *(uint *)(param_2 + 4);
    uVar6 = (ulong)uVar3;
    uVar1 = *(uint *)(param_2 + 8);
    *(uint *)(param_1 + 0x78) = uVar3;
    if (uVar3 == uVar1) {
      uVar1 = uVar3 << 1;
      if (uVar3 == 0) {
        uVar1 = 1;
      }
      if ((int)uVar3 < (int)uVar1) {
        if (uVar1 == 0) {
          uVar2 = 0;
          uVar4 = uVar6;
        }
        else {
          uVar2 = -(ulong)(uVar1 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar1 << 3;
          FUN_1098256f4(uVar2,0x10);
          uVar4 = (ulong)*(uint *)(param_2 + 4);
        }
        if (0 < (int)uVar4) {
          lVar5 = 0;
          do {
            *(undefined8 *)(uVar2 + lVar5) = *(undefined8 *)(*(long *)(param_2 + 0x10) + lVar5);
            lVar5 = lVar5 + 8;
          } while (uVar4 << 3 != lVar5);
        }
        if ((*(long *)(param_2 + 0x10) != 0) && ((*(byte *)(param_2 + 0x18) & 1) != 0)) {
          FUN_109825740();
          uVar4 = (ulong)*(uint *)(param_2 + 4);
        }
        uVar3 = (uint)uVar4;
        *(undefined1 *)(param_2 + 0x18) = 1;
        *(ulong *)(param_2 + 0x10) = uVar2;
        *(uint *)(param_2 + 8) = uVar1;
      }
    }
    *(long *)(*(long *)(param_2 + 0x10) + (long)(int)uVar3 * 8) = param_1;
    *(uint *)(param_2 + 4) = uVar3 + 1;
  }
  return uVar6;
}



/* Entry: 10982a4c4; end: 10982a503;  */

long FUN_10982a4c4(long param_1)

{
  FUN_10982a768(param_1 + 0x80);
  FUN_10982a504(param_1 + 0x60);
  FUN_10982a554(param_1 + 0x40);
  FUN_10982a5a4(param_1 + 0x20);
  return param_1;
}



/* Entry: 10982a504; end: 10982a553;  */

long * FUN_10982a504(long *param_1)

{
  long *plVar1;
  
  while (plVar1 = (long *)*param_1, plVar1 != (long *)0x0) {
    *param_1 = plVar1[2];
    if (*plVar1 != 0) {
      FUN_109825740();
    }
    FUN_109825740(plVar1);
  }
  return param_1;
}



/* Entry: 10982a554; end: 10982a5a3;  */

long * FUN_10982a554(long *param_1)

{
  long *plVar1;
  
  while (plVar1 = (long *)*param_1, plVar1 != (long *)0x0) {
    *param_1 = plVar1[2];
    if (*plVar1 != 0) {
      FUN_109825740();
    }
    FUN_109825740(plVar1);
  }
  return param_1;
}



/* Entry: 10982a5a4; end: 10982a5f3;  */

long * FUN_10982a5a4(long *param_1)

{
  long *plVar1;
  
  while (plVar1 = (long *)*param_1, plVar1 != (long *)0x0) {
    *param_1 = plVar1[2];
    if (*plVar1 != 0) {
      FUN_109825740();
    }
    FUN_109825740(plVar1);
  }
  return param_1;
}


