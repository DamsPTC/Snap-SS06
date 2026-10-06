/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10982a5f4; end: 10982a63f;  */

long FUN_10982a5f4(long param_1)

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



/* Entry: 10982a640; end: 10982a767;  */

void FUN_10982a640(long param_1,ulong param_2,ulong param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined8 *puVar4;
  ulong uVar5;
  long lVar6;
  int *piVar7;
  ulong uVar8;
  int iVar9;
  int iVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  
  do {
    iVar9 = (int)param_2;
    piVar7 = (int *)(*(long *)(param_1 + 0x10) + (long)((iVar9 + (int)param_3) / 2) * 0x10);
    iVar1 = *piVar7;
    iVar2 = piVar7[1];
    iVar3 = piVar7[2];
    uVar5 = param_3;
    do {
      lVar6 = *(long *)(param_1 + 0x10);
      iVar10 = (int)param_2;
      param_2 = (ulong)iVar10;
      for (piVar7 = (int *)(lVar6 + (long)iVar10 * 0x10);
          (piVar7[1] < iVar2 ||
          ((piVar7[1] == iVar2 && ((*piVar7 < iVar1 || ((*piVar7 == iVar1 && (piVar7[2] < iVar3)))))
           ))); piVar7 = piVar7 + 4) {
        param_2 = param_2 + 1;
      }
      uVar8 = -(uVar5 >> 0x1f & 1) & 0xfffffff000000000 | (uVar5 & 0xffffffff) << 4;
      uVar5 = (ulong)(int)uVar5;
      while( true ) {
        iVar10 = ((int *)(lVar6 + uVar8))[1];
        if ((iVar10 <= iVar2) &&
           ((iVar2 != iVar10 ||
            ((iVar10 = *(int *)(lVar6 + uVar8), iVar10 <= iVar1 &&
             ((iVar1 != iVar10 || (*(int *)(lVar6 + uVar8 + 8) <= iVar3)))))))) break;
        uVar5 = uVar5 - 1;
        uVar8 = uVar8 - 0x10;
      }
      if ((long)param_2 <= (long)uVar5) {
        uVar12 = *(undefined8 *)(piVar7 + 2);
        uVar11 = *(undefined8 *)piVar7;
        uVar13 = *(undefined8 *)(lVar6 + uVar8);
        *(undefined8 *)(piVar7 + 2) = ((undefined8 *)(lVar6 + uVar8))[1];
        *(undefined8 *)piVar7 = uVar13;
        puVar4 = (undefined8 *)(*(long *)(param_1 + 0x10) + uVar8);
        puVar4[1] = uVar12;
        *puVar4 = uVar11;
        param_2 = (ulong)((int)param_2 + 1);
        uVar5 = (ulong)((int)uVar5 - 1);
      }
    } while ((int)param_2 <= (int)uVar5);
    if (iVar9 < (int)uVar5) {
      FUN_10982a640(param_1);
    }
  } while ((int)param_2 < (int)param_3);
  return;
}



/* Entry: 10982a768; end: 10982a7b3;  */

long FUN_10982a768(long param_1)

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



/* Entry: 10982a7b4; end: 10982a7ff;  */

long FUN_10982a7b4(long param_1)

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



/* Entry: 10982a800; end: 10982ae57;  */

void FUN_10982a800(long param_1,long param_2)

{
  ulong uVar1;
  ulong uVar2;
  uint uVar3;
  uint uVar4;
  float *pfVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  bool bVar8;
  bool bVar9;
  uint uVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  long lVar14;
  float *pfVar15;
  long lVar16;
  ulong uVar17;
  ulong uVar18;
  ulong uVar19;
  long lVar20;
  float fVar21;
  float fVar24;
  float fVar25;
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  float fVar26;
  float fVar27;
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  ulong uStack_c8;
  long lStack_c0;
  long lStack_b0;
  
  uVar3 = *(uint *)(param_1 + 4);
  uVar19 = (ulong)uVar3;
  if (0 < (int)uVar3) {
    lStack_c0 = 2;
    uStack_c8 = 1;
    uVar17 = 0;
    do {
      uVar1 = uVar17 + 1;
      if (uVar1 < uVar19) {
        lVar20 = *(long *)(param_1 + 0x10);
        lStack_b0 = lStack_c0;
        uVar18 = uStack_c8;
        do {
          uVar2 = uVar18 + 1;
          if ((int)uVar2 < (int)uVar3) {
            lVar11 = *(long *)(param_1 + 0x10);
            lVar16 = lStack_b0;
            do {
              pfVar15 = (float *)(lVar11 + uVar18 * 0x10);
              pfVar5 = (float *)(lVar20 + uVar17 * 0x10);
              auVar29._0_4_ = *pfVar15 - *pfVar5;
              auVar29._4_4_ = pfVar15[1] - pfVar5[1];
              auVar29._8_4_ = pfVar15[2] - pfVar5[2];
              auVar29._12_4_ = 0;
              pfVar15 = (float *)(*(long *)(param_1 + 0x10) + lVar16 * 0x10);
              auVar28._0_4_ = *pfVar15 - *pfVar5;
              auVar28._4_4_ = pfVar15[1] - pfVar5[1];
              auVar28._8_4_ = pfVar15[2] - pfVar5[2];
              auVar28._12_4_ = 0;
              auVar32 = NEON_ext(auVar29,auVar29,0xc,1);
              auVar33 = NEON_ext(auVar32,auVar29,8,1);
              auVar32 = NEON_ext(auVar28,auVar28,0xc,1);
              auVar34 = NEON_ext(auVar32,auVar28,8,1);
              auVar32._0_4_ = auVar34._0_4_ * auVar29._0_4_ - auVar33._0_4_ * auVar28._0_4_;
              auVar32._4_4_ = auVar34._4_4_ * auVar29._4_4_ - auVar33._4_4_ * auVar28._4_4_;
              auVar32._8_4_ = auVar34._8_4_ * auVar29._8_4_ - auVar33._8_4_ * auVar28._8_4_;
              auVar32._12_4_ = auVar34._12_4_ * 0.0 - auVar33._12_4_ * 0.0;
              auVar29 = NEON_ext(auVar32,auVar32,0xc,1);
              auVar29 = NEON_ext(auVar29,auVar32,8,1);
              fVar25 = 1.0;
              bVar8 = true;
              do {
                bVar9 = bVar8;
                fVar21 = auVar29._0_4_ * fVar25;
                fVar24 = auVar29._4_4_ * fVar25;
                fVar25 = auVar29._8_4_ * fVar25;
                auVar33._0_4_ = fVar21 * fVar21;
                auVar33._4_4_ = fVar24 * fVar24;
                auVar33._8_4_ = fVar25 * fVar25;
                auVar33._12_4_ = 0;
                auVar32 = NEON_ext(auVar33,auVar33,8,1);
                fVar26 = auVar33._0_4_ + auVar33._4_4_ + auVar32._0_4_;
                if (0.0001 < fVar26) {
                  fVar26 = 1.0 / SQRT(fVar26);
                  fVar21 = fVar21 * fVar26;
                  fVar24 = fVar24 * fVar26;
                  fVar25 = fVar25 * fVar26;
                  fVar26 = fVar26 * 0.0;
                  uVar10 = *(uint *)(param_2 + 4);
                  uVar12 = (ulong)uVar10;
                  if ((int)uVar10 < 1) {
LAB_10982a990:
                    pfVar15 = (float *)(lVar20 + uVar17 * 0x10);
                    auVar23._0_4_ = fVar21 * *pfVar15;
                    auVar23._4_4_ = fVar24 * pfVar15[1];
                    auVar23._8_4_ = fVar25 * pfVar15[2];
                    auVar23._12_4_ = fVar26 * pfVar15[3];
                    auVar32 = NEON_ext(auVar23,auVar23,8,1);
                    fVar26 = auVar23._0_4_ + auVar23._4_4_ + auVar32._0_4_;
                    fVar27 = -fVar26;
                    uVar4 = *(uint *)(param_1 + 4);
                    if ((int)uVar4 < 1) {
LAB_10982aa18:
                      if (uVar10 == *(uint *)(param_2 + 8)) {
                        uVar4 = uVar10 << 1;
                        if (uVar10 == 0) {
                          uVar4 = 1;
                        }
                        if ((int)uVar10 < (int)uVar4) {
                          if (uVar4 == 0) {
                            uVar13 = 0;
                          }
                          else {
                            uVar13 = -(ulong)(uVar4 >> 0x1f) & 0xfffffff000000000 |
                                     (ulong)uVar4 << 4;
                            FUN_1098256f4(uVar13,0x10);
                            uVar12 = (ulong)*(uint *)(param_2 + 4);
                          }
                          if (0 < (int)uVar12) {
                            lVar14 = 0;
                            do {
                              puVar6 = (undefined8 *)(*(long *)(param_2 + 0x10) + lVar14);
                              uVar7 = *puVar6;
                              ((undefined8 *)(uVar13 + lVar14))[1] = puVar6[1];
                              *(undefined8 *)(uVar13 + lVar14) = uVar7;
                              lVar14 = lVar14 + 0x10;
                            } while (uVar12 << 4 != lVar14);
                          }
                          if ((*(long *)(param_2 + 0x10) != 0) &&
                             ((*(byte *)(param_2 + 0x18) & 1) != 0)) {
                            FUN_109825740();
                          }
                          *(undefined1 *)(param_2 + 0x18) = 1;
                          *(ulong *)(param_2 + 0x10) = uVar13;
                          *(uint *)(param_2 + 8) = uVar4;
                          uVar10 = *(uint *)(param_2 + 4);
                        }
                      }
                      puVar6 = (undefined8 *)(*(long *)(param_2 + 0x10) + (long)(int)uVar10 * 0x10);
                      puVar6[1] = CONCAT44(fVar27,fVar25);
                      *puVar6 = CONCAT44(fVar24,fVar21);
                      *(int *)(param_2 + 4) = *(int *)(param_2 + 4) + 1;
                    }
                    else {
                      pfVar15 = *(float **)(param_1 + 0x10);
                      auVar30._0_4_ = fVar21 * *pfVar15;
                      auVar30._4_4_ = fVar24 * pfVar15[1];
                      auVar30._8_4_ = fVar25 * pfVar15[2];
                      auVar30._12_4_ = fVar27 * pfVar15[3];
                      auVar32 = NEON_ext(auVar30,auVar30,8,1);
                      if ((auVar30._0_4_ + auVar30._4_4_ + auVar32._0_4_) - fVar26 <= 0.01) {
                        uVar13 = 0;
                        do {
                          if ((ulong)uVar4 - 1 == uVar13) goto LAB_10982aa18;
                          pfVar5 = pfVar15 + uVar13 * 4 + 4;
                          auVar31._0_4_ = fVar21 * *pfVar5;
                          auVar31._4_4_ = fVar24 * pfVar5[1];
                          auVar31._8_4_ = fVar25 * pfVar5[2];
                          auVar31._12_4_ = fVar27 * pfVar5[3];
                          auVar32 = NEON_ext(auVar31,auVar31,8,1);
                          uVar13 = uVar13 + 1;
                        } while ((auVar31._0_4_ + auVar31._4_4_ + auVar32._0_4_) - fVar26 <= 0.01);
                        if (uVar4 <= uVar13) goto LAB_10982aa18;
                      }
                    }
                  }
                  else {
                    pfVar15 = *(float **)(param_2 + 0x10);
                    auVar34._0_4_ = fVar21 * *pfVar15;
                    auVar34._4_4_ = fVar24 * pfVar15[1];
                    auVar34._8_4_ = fVar25 * pfVar15[2];
                    auVar34._12_4_ = fVar26 * pfVar15[3];
                    auVar32 = NEON_ext(auVar34,auVar34,8,1);
                    if (auVar34._0_4_ + auVar34._4_4_ + auVar32._0_4_ <= 0.999) {
                      uVar13 = 0;
                      do {
                        if (uVar12 - 1 == uVar13) goto LAB_10982a990;
                        pfVar5 = pfVar15 + uVar13 * 4 + 4;
                        auVar22._0_4_ = fVar21 * *pfVar5;
                        auVar22._4_4_ = fVar24 * pfVar5[1];
                        auVar22._8_4_ = fVar25 * pfVar5[2];
                        auVar22._12_4_ = fVar26 * pfVar5[3];
                        auVar32 = NEON_ext(auVar22,auVar22,8,1);
                        uVar13 = uVar13 + 1;
                      } while (auVar22._0_4_ + auVar22._4_4_ + auVar32._0_4_ <= 0.999);
                      if (uVar12 <= uVar13) goto LAB_10982a990;
                    }
                  }
                }
                fVar25 = -1.0;
                bVar8 = false;
              } while (bVar9);
              lVar16 = lVar16 + 1;
            } while (uVar3 != (uint)lVar16);
          }
          lStack_b0 = lStack_b0 + 1;
          uVar18 = uVar2;
        } while (uVar2 != uVar19);
      }
      lStack_c0 = lStack_c0 + 1;
      uStack_c8 = uStack_c8 + 1;
      uVar17 = uVar1;
    } while (uVar1 != uVar19);
  }
  return;
}



/* Entry: 10982ae58; end: 10982af27;  */

void FUN_10982ae58(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  undefined8 uStack_50;
  int iStack_44;
  
  if ((bRam000000011373659c & 1) == 0) {
    iStack_44 = 0;
    uStack_50 = 4;
    iVar1 = 0xf580be1;
    _sysctlbyname(&UNK_10f580be1,&iStack_44,&uStack_50,0,0);
    if ((iVar1 == 0) && (iStack_44 != 0)) {
      uRam00000001137365a0 = uRam00000001137365a0 | 0x2000;
    }
    bRam000000011373659c = 1;
  }
  PTR_FUN_1132e04a0 = (code *)0x10982b13c;
  if (0x1fff < uRam00000001137365a0) {
    PTR_FUN_1132e04a0 = FUN_10982af28;
  }
  (*(code *)PTR_FUN_1132e04a0)(param_1,param_2,param_3,param_4);
  return;
}



/* Entry: 10982af28; end: 10982b3e3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong FUN_10982af28(undefined1 (*param_1) [12],undefined8 *param_2,ulong param_3,uint *param_4)

{
  undefined1 (*pauVar1) [12];
  undefined1 (*pauVar2) [12];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  float fVar6;
  undefined1 (*pauVar7) [12];
  undefined1 (*pauVar8) [12];
  undefined1 (*pauVar9) [12];
  undefined1 (*pauVar10) [12];
  undefined1 (*pauVar11) [12];
  undefined1 (*pauVar12) [12];
  undefined1 (*pauVar13) [12];
  undefined1 *puVar14;
  undefined1 *puVar15;
  undefined1 *puVar16;
  ulong uVar17;
  float fVar18;
  int iVar21;
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  ulong uVar22;
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  float fVar25;
  float fVar26;
  int iVar27;
  float fVar28;
  float fVar29;
  int iVar30;
  float fVar31;
  float fVar32;
  uint uVar33;
  float fVar35;
  undefined1 auVar34 [16];
  undefined1 auVar36 [16];
  float fVar37;
  float fVar41;
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  int iVar44;
  int iVar45;
  int iVar46;
  int iVar47;
  
  fVar31 = (float)param_2[1];
  fVar25 = (float)*param_2;
  fVar28 = (float)((ulong)*param_2 >> 0x20);
  if (param_3 < 8) {
    auVar23._8_8_ = 0xffffffffffffffff;
    auVar23._0_8_ = 0xffffffffffffffff;
    auVar24._8_4_ = 0xff800000;
    auVar24._0_8_ = 0xff800000ff800000;
    auVar24._12_4_ = 0xff800000;
    uVar17 = 4;
    auVar20 = _UNK_10deda940;
  }
  else {
    auVar24._8_4_ = 0xff800000;
    auVar24._0_8_ = 0xff800000ff800000;
    auVar24._12_4_ = 0xff800000;
    auVar23._8_8_ = 0xffffffffffffffff;
    auVar23._0_8_ = 0xffffffffffffffff;
    uVar17 = 8;
    auVar20 = _UNK_10deda940;
    do {
      auVar38._0_4_ =
           *(float *)(*param_1 + 8) * fVar31 +
           fVar25 * *(float *)*param_1 + fVar28 * *(float *)(*param_1 + 4);
      auVar38._4_4_ =
           *(float *)param_1[2] * fVar31 +
           fVar25 * *(float *)(param_1[1] + 4) + fVar28 * *(float *)(param_1[1] + 8);
      auVar38._8_4_ =
           (float)*(undefined8 *)(param_1[3] + 4) * fVar31 +
           fVar25 * (float)*(undefined8 *)(param_1[2] + 8) +
           fVar28 * (float)((ulong)*(undefined8 *)(param_1[2] + 8) >> 0x20);
      auVar38._12_4_ =
           (float)*(undefined8 *)(param_1[4] + 8) * fVar31 +
           fVar25 * (float)*(undefined8 *)param_1[4] +
           fVar28 * (float)((ulong)*(undefined8 *)param_1[4] >> 0x20);
      auVar42._0_4_ = -(uint)(auVar24._0_4_ < auVar38._0_4_);
      auVar42._4_4_ = -(uint)(auVar24._4_4_ < auVar38._4_4_);
      auVar42._8_4_ = -(uint)(auVar24._8_4_ < auVar38._8_4_);
      auVar42._12_4_ = -(uint)(auVar24._12_4_ < auVar38._12_4_);
      auVar24 = auVar24 ^ (auVar24 ^ auVar38) & auVar42;
      auVar23 = auVar23 ^ (auVar23 ^ auVar20) & auVar42;
      auVar39._0_4_ = auVar20._0_4_ + 4;
      iVar27 = auVar20._4_4_;
      auVar39._4_4_ = iVar27 + 4;
      iVar30 = auVar20._8_4_;
      auVar39._8_4_ = iVar30 + 4;
      iVar21 = auVar20._12_4_;
      auVar39._12_4_ = iVar21 + 4;
      pauVar8 = param_1 + 5;
      pauVar11 = param_1 + 5;
      pauVar7 = param_1 + 6;
      pauVar9 = param_1 + 6;
      pauVar10 = param_1 + 7;
      pauVar1 = param_1 + 8;
      pauVar13 = param_1 + 8;
      pauVar12 = param_1 + 9;
      pauVar2 = param_1 + 10;
      param_1 = (undefined1 (*) [12])(param_1[10] + 8);
      auVar43._0_4_ =
           *(float *)*pauVar7 * fVar31 +
           fVar25 * *(float *)(*pauVar8 + 4) + fVar28 * *(float *)(*pauVar11 + 8);
      auVar43._4_4_ =
           (float)*(undefined8 *)(*pauVar10 + 4) * fVar31 +
           fVar25 * (float)*(undefined8 *)(*pauVar9 + 8) +
           fVar28 * (float)((ulong)*(undefined8 *)(*pauVar9 + 8) >> 0x20);
      auVar43._8_4_ =
           (float)*(undefined8 *)(*pauVar13 + 8) * fVar31 +
           fVar25 * (float)*(undefined8 *)*pauVar1 +
           fVar28 * (float)((ulong)*(undefined8 *)*pauVar1 >> 0x20);
      auVar43._12_4_ =
           (float)*(undefined8 *)*pauVar2 * fVar31 +
           fVar25 * (float)*(undefined8 *)(*pauVar12 + 4) +
           fVar28 * (float)((ulong)*(undefined8 *)(*pauVar12 + 4) >> 0x20);
      iVar44 = -(uint)(auVar24._0_4_ < auVar43._0_4_);
      iVar45 = -(uint)(auVar24._4_4_ < auVar43._4_4_);
      iVar46 = -(uint)(auVar24._8_4_ < auVar43._8_4_);
      iVar47 = -(uint)(auVar24._12_4_ < auVar43._12_4_);
      auVar4._4_4_ = iVar45;
      auVar4._0_4_ = iVar44;
      auVar4._8_4_ = iVar46;
      auVar4._12_4_ = iVar47;
      auVar24 = auVar24 ^ (auVar24 ^ auVar43) & auVar4;
      auVar5._4_4_ = iVar45;
      auVar5._0_4_ = iVar44;
      auVar5._8_4_ = iVar46;
      auVar5._12_4_ = iVar47;
      auVar23 = auVar23 ^ (auVar23 ^ auVar39) & auVar5;
      auVar20._0_4_ = auVar20._0_4_ + 8;
      auVar20._4_4_ = iVar27 + 8;
      auVar20._8_4_ = iVar30 + 8;
      auVar20._12_4_ = iVar21 + 8;
      uVar17 = uVar17 + 8;
    } while (uVar17 <= param_3);
    uVar17 = param_3 & 0xfffffffffffffff8 | 4;
  }
  while( true ) {
    if (param_3 < uVar17) break;
    puVar14 = *param_1;
    puVar15 = *param_1;
    puVar16 = *param_1;
    pauVar8 = param_1 + 1;
    pauVar9 = param_1 + 1;
    pauVar2 = param_1 + 2;
    pauVar10 = param_1 + 2;
    pauVar7 = param_1 + 3;
    pauVar12 = param_1 + 3;
    pauVar1 = param_1 + 4;
    pauVar11 = param_1 + 4;
    param_1 = (undefined1 (*) [12])(param_1[5] + 4);
    auVar36._0_4_ =
         *(float *)(puVar16 + 8) * fVar31 +
         fVar25 * *(float *)puVar14 + fVar28 * *(float *)(puVar15 + 4);
    auVar36._4_4_ =
         *(float *)*pauVar2 * fVar31 +
         fVar25 * *(float *)(*pauVar8 + 4) + fVar28 * *(float *)(*pauVar9 + 8);
    auVar36._8_4_ =
         *(float *)(*pauVar12 + 4) * fVar31 +
         fVar25 * *(float *)(*pauVar10 + 8) + fVar28 * *(float *)*pauVar7;
    auVar36._12_4_ =
         (float)*(undefined8 *)(*pauVar11 + 8) * fVar31 +
         fVar25 * (float)*(undefined8 *)*pauVar1 +
         fVar28 * (float)((ulong)*(undefined8 *)*pauVar1 >> 0x20);
    auVar40._0_4_ = -(uint)(auVar24._0_4_ < auVar36._0_4_);
    auVar40._4_4_ = -(uint)(auVar24._4_4_ < auVar36._4_4_);
    auVar40._8_4_ = -(uint)(auVar24._8_4_ < auVar36._8_4_);
    auVar40._12_4_ = -(uint)(auVar24._12_4_ < auVar36._12_4_);
    auVar24 = auVar24 ^ (auVar24 ^ auVar36) & auVar40;
    auVar23 = auVar23 ^ (auVar23 ^ auVar20) & auVar40;
    auVar19._0_4_ = auVar20._0_4_ + 4;
    auVar19._4_4_ = auVar20._4_4_ + 4;
    auVar19._8_4_ = auVar20._8_4_ + 4;
    auVar19._12_4_ = auVar20._12_4_ + 4;
    uVar17 = uVar17 + 4;
    auVar20 = auVar19;
  }
  param_3 = param_3 & 3;
  if (param_3 < 2) {
    if (param_3 == 0) goto LAB_10982b108;
    fVar25 = fVar25 * *(float *)*param_1;
    fVar28 = fVar28 * *(float *)(*param_1 + 4);
    fVar31 = fVar31 * *(float *)(*param_1 + 8);
    fVar26 = fVar31 + fVar25 + fVar28;
    fVar29 = fVar31 + fVar25 + fVar28;
    fVar32 = fVar31 + fVar25 + fVar28;
    fVar31 = fVar31 + fVar25 + fVar28;
  }
  else {
    if (param_3 == 2) {
      fVar6 = *(float *)param_1[2];
      fVar18 = SUB124(*param_1,8);
      fVar32 = fVar25 * (float)*(undefined8 *)*param_1;
      fVar35 = fVar28 * (float)((ulong)*(undefined8 *)*param_1 >> 0x20);
      fVar25 = fVar25 * *(float *)(param_1[1] + 4);
      fVar28 = fVar28 * *(float *)(param_1[1] + 8);
      fVar26 = fVar32 + fVar35;
      fVar29 = fVar25 + fVar28;
      fVar32 = fVar32 + fVar35;
      fVar25 = fVar25 + fVar28;
      fVar35 = fVar18;
      fVar28 = fVar6;
    }
    else {
      fVar35 = (float)*(undefined8 *)(*param_1 + 8);
      fVar6 = *(float *)param_1[2];
      fVar18 = *(float *)(param_1[3] + 4);
      fVar37 = fVar25 * *(float *)(param_1[2] + 8);
      fVar41 = fVar28 * *(float *)param_1[3];
      fVar26 = fVar25 * (float)*(undefined8 *)*param_1 +
               fVar28 * (float)((ulong)*(undefined8 *)*param_1 >> 0x20);
      fVar29 = fVar25 * *(float *)(param_1[1] + 4) + fVar28 * *(float *)(param_1[1] + 8);
      fVar32 = fVar37 + fVar41;
      fVar25 = fVar37 + fVar41;
      fVar28 = fVar18;
    }
    fVar26 = fVar35 * fVar31 + fVar26;
    fVar29 = fVar6 * fVar31 + fVar29;
    fVar32 = fVar18 * fVar31 + fVar32;
    fVar31 = fVar28 * fVar31 + fVar25;
  }
  auVar34._0_4_ = -(uint)(auVar24._0_4_ < fVar26);
  auVar34._4_4_ = -(uint)(auVar24._4_4_ < fVar29);
  auVar34._8_4_ = -(uint)(auVar24._8_4_ < fVar32);
  auVar34._12_4_ = -(uint)(auVar24._12_4_ < fVar31);
  auVar3._4_4_ = fVar29;
  auVar3._0_4_ = fVar26;
  auVar3._8_4_ = fVar32;
  auVar3._12_4_ = fVar31;
  auVar24 = auVar24 ^ (auVar24 ^ auVar3) & auVar34;
  auVar23 = auVar23 ^ (auVar23 ^ auVar20) & auVar34;
LAB_10982b108:
  auVar20 = NEON_ext(auVar24,auVar24,8,1);
  iVar27 = -(uint)(auVar24._0_4_ < auVar20._0_4_);
  iVar30 = -(uint)(auVar24._4_4_ < auVar20._4_4_);
  uVar17 = auVar20._0_8_ ^ (auVar20._0_8_ ^ auVar24._0_8_) & ~CONCAT44(iVar30,iVar27);
  auVar20 = NEON_ext(auVar23,auVar23,8,1);
  uVar22 = auVar23._0_8_ ^ (auVar23._0_8_ ^ auVar20._0_8_) & CONCAT44(iVar30,iVar27);
  fVar28 = (float)(uVar17 >> 0x20);
  fVar25 = (float)uVar17;
  uVar33 = -(uint)(fVar25 < fVar28);
  *param_4 = (uint)fVar25 ^ ((uint)fVar25 ^ (uint)fVar28) & uVar33;
  return (uVar22 ^ (uVar22 ^ uVar22 >> 0x20) & (ulong)uVar33) & 0xffffffff;
}



/* Entry: 10982b3e4; end: 10982b587;  */

void FUN_10982b3e4(undefined8 *param_1,float param_2,float param_3,long param_4)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  float fVar3;
  float fVar4;
  float extraout_s1;
  float fVar5;
  undefined8 uVar6;
  float fVar17;
  float fVar18;
  undefined1 auVar7 [12];
  undefined1 auVar9 [16];
  float extraout_s1_00;
  undefined1 auVar10 [16];
  float fVar19;
  undefined1 auVar13 [16];
  float fVar20;
  float fVar21;
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined8 uVar25;
  undefined1 auVar14 [16];
  undefined1 auVar8 [12];
  undefined1 auVar15 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar16 [16];
  
  ___sincosf_stret();
  fVar3 = *(float *)(param_4 + 0x200);
  if (1.1920929e-07 < ABS(extraout_s1)) {
    fVar20 = (param_2 * param_2) / (extraout_s1 * extraout_s1);
    fVar3 = SQRT((fVar20 + 1.0) /
                 (fVar20 / (fVar3 * fVar3) +
                 1.0 / (*(float *)(param_4 + 0x204) * *(float *)(param_4 + 0x204))));
  }
  auVar2._4_4_ = -param_2 * -param_2;
  auVar2._0_4_ = extraout_s1 * extraout_s1;
  auVar2._8_8_ = 0;
  auVar9 = NEON_ext(auVar2 << 0x20,auVar2 << 0x20,8,1);
  fVar3 = fVar3 * 0.5;
  ___sincosf_stret();
  fVar3 = fVar3 / SQRT(auVar9._0_4_ + extraout_s1 * extraout_s1 + 0.0);
  fVar21 = -(param_2 * fVar3);
  fVar20 = fVar3 * 0.0;
  fVar4 = extraout_s1 * fVar3;
  auVar22._4_4_ = fVar4;
  auVar22._0_4_ = fVar20;
  auVar22._8_4_ = fVar21;
  auVar22._12_4_ = extraout_s1_00;
  auVar10 = NEON_ext(auVar22,auVar22,8,1);
  auVar9._4_4_ = fVar4;
  auVar9._0_4_ = fVar20;
  auVar9._8_4_ = fVar3 * 0.0;
  auVar9._12_4_ = fVar3 * 0.0;
  auVar9 = NEON_ext(auVar22,auVar9,0xc,1);
  uVar6 = NEON_ext(CONCAT44(fVar4,fVar20),auVar10._0_8_,4,1);
  fVar5 = (float)((ulong)uVar6 >> 0x20);
  fVar3 = param_3 * extraout_s1_00 + (float)uVar6 * 0.0;
  fVar17 = extraout_s1_00 * 0.0 + param_3 * fVar5;
  fVar18 = fVar20 * 0.0 + auVar9._0_4_ * 0.0;
  fVar19 = fVar4 * 0.0 + param_3 * auVar9._4_4_;
  auVar7._0_8_ = CONCAT17((char)((uint)fVar17 >> 0x18),
                          CONCAT16((char)((uint)fVar17 >> 0x10),
                                   CONCAT15((char)((uint)fVar17 >> 8),
                                            CONCAT14(SUB41(fVar17,0),fVar3))));
  auVar7[8] = SUB41(fVar18,0);
  auVar7[9] = (undefined1)((uint)fVar18 >> 8);
  auVar7[10] = (undefined1)((uint)fVar18 >> 0x10);
  auVar7[0xb] = (undefined1)((uint)fVar18 >> 0x18);
  auVar11[0xc] = SUB41(fVar19,0);
  auVar11._0_12_ = auVar7;
  auVar11[0xd] = (undefined1)((uint)fVar19 >> 8);
  auVar11[0xe] = (undefined1)((uint)fVar19 >> 0x10);
  auVar11[0xf] = (byte)((uint)fVar19 >> 0x18) ^ 0x80;
  fVar3 = fVar3 - auVar10._0_4_ * 0.0;
  fVar17 = (float)((ulong)auVar7._0_8_ >> 0x20) - fVar20 * 0.0;
  fVar18 = auVar7._8_4_ - param_3 * (float)uVar6;
  fVar19 = auVar11._12_4_ - fVar5 * 0.0;
  fVar5 = -fVar20;
  auVar8._0_8_ = CONCAT17((char)((uint)fVar4 >> 0x18),
                          CONCAT16((char)((uint)fVar4 >> 0x10),
                                   CONCAT15((char)((uint)fVar4 >> 8),CONCAT14(SUB41(fVar4,0),fVar20)
                                           ))) ^ 0x8000000080000000;
  auVar8[8] = SUB41(fVar21,0);
  auVar8[9] = (char)((uint)fVar21 >> 8);
  auVar8[10] = (char)((uint)fVar21 >> 0x10);
  auVar8[0xb] = (byte)((uint)fVar21 >> 0x18) ^ 0x80;
  auVar12[0xc] = SUB41(extraout_s1_00,0);
  auVar12._0_12_ = auVar8;
  auVar12[0xd] = (char)((uint)extraout_s1_00 >> 8);
  auVar12[0xe] = (char)((uint)extraout_s1_00 >> 0x10);
  auVar12[0xf] = (char)((uint)extraout_s1_00 >> 0x18);
  auVar10._4_4_ = fVar17;
  auVar10._0_4_ = fVar3;
  auVar10._8_4_ = fVar18;
  auVar10._12_4_ = fVar19;
  auVar23._4_4_ = fVar17;
  auVar23._0_4_ = fVar3;
  auVar23._8_4_ = fVar18;
  auVar23._12_4_ = fVar19;
  auVar10 = NEON_ext(auVar10,auVar23,8,1);
  auVar23 = NEON_ext(auVar12,auVar12,8,1);
  uVar6 = NEON_ext(auVar23._0_8_,auVar8._0_8_,4,1);
  auVar24._4_4_ = fVar17;
  auVar24._0_4_ = fVar3;
  auVar24._8_4_ = fVar18;
  auVar24._12_4_ = fVar19;
  auVar1._4_4_ = fVar17;
  auVar1._0_4_ = fVar3;
  auVar1._8_4_ = fVar18;
  auVar1._12_4_ = fVar19;
  auVar24 = NEON_ext(auVar24,auVar1,4,1);
  uVar25 = NEON_ext(auVar8._0_8_,auVar23._0_8_,4,1);
  auVar14._4_4_ = (float)(auVar8._0_8_ >> 0x20);
  auVar15._12_4_ = auVar12._12_4_;
  auVar13._4_12_ = auVar12._4_12_;
  auVar13._0_4_ = auVar14._4_4_;
  auVar15._0_8_ = auVar13._0_8_;
  auVar15._8_4_ = auVar15._12_4_;
  auVar14._8_8_ = auVar15._8_8_;
  auVar14._0_4_ = auVar14._4_4_;
  auVar16._0_12_ = auVar14._0_12_;
  auVar16._12_4_ = auVar15._12_4_;
  auVar9 = NEON_ext(auVar16,auVar16,8,1);
  param_1[1] = (ulong)(uint)((auVar8._8_4_ * fVar19 - fVar5 * auVar24._0_4_) +
                            auVar9._8_4_ * fVar3 + (float)uVar6 * auVar10._0_4_);
  *param_1 = CONCAT44((auVar14._4_4_ * fVar19 - (float)((ulong)uVar25 >> 0x20) * fVar3) +
                      auVar9._4_4_ * fVar17 + fVar5 * auVar24._4_4_,
                      (fVar5 * fVar19 - (float)uVar25 * auVar10._0_4_) +
                      auVar9._0_4_ * fVar3 + auVar23._0_4_ * auVar24._0_4_);
  return;
}



/* Entry: 10982b588; end: 10982b6c3;  */

void FUN_10982b588(void)

{
  return;
}



/* Entry: 10982b6c4; end: 10982b7cf;  */

/* WARNING: Heritage AFTER dead removal. Example location: d0 : 0x00010982b730 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

undefined8 * FUN_10982b6c4(undefined8 param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  float fVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined4 *puVar5;
  undefined1 uVar6;
  undefined1 uVar7;
  undefined1 uVar8;
  undefined1 uVar9;
  undefined1 uVar10;
  undefined1 uVar11;
  undefined1 uVar12;
  undefined1 uVar13;
  undefined1 uVar14;
  undefined1 uVar15;
  undefined1 uVar16;
  undefined1 uVar17;
  undefined4 uVar18;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  uVar18 = (undefined4)((ulong)param_1 >> 0x20);
  puVar3 = param_2;
  FUN_10982bd74();
  lVar4 = 0;
  *puVar3 = &PTR_FUN_110b142d8;
  uStack_60 = 0;
  uStack_58 = 0;
  puVar3 = puVar3 + 0x8a;
  do {
    uVar1 = *(undefined4 *)((long)&uStack_60 + lVar4);
    uVar6 = (char)uVar1;
    uVar9 = (char)((uint)uVar1 >> 8);
    uVar12 = (char)((uint)uVar1 >> 0x10);
    uVar15 = (char)((uint)uVar1 >> 0x18);
    _fmodf(CONCAT44(uVar18,CONCAT13(uVar17,CONCAT12(uVar14,CONCAT11(uVar11,uVar8)))),0x40c90fdb);
    uVar17 = uVar15;
    uVar14 = uVar12;
    uVar11 = uVar9;
    uVar8 = uVar6;
    if (-3.1415927 <= (float)CONCAT13(uVar17,CONCAT12(uVar14,CONCAT11(uVar11,uVar8)))) {
      uVar6 = uVar8;
      uVar9 = uVar11;
      uVar12 = uVar14;
      uVar15 = uVar17;
      if ((float)CONCAT13(uVar17,CONCAT12(uVar14,CONCAT11(uVar11,uVar8))) != 3.1415927 &&
          3.1415927 <= (float)CONCAT13(uVar17,CONCAT12(uVar14,CONCAT11(uVar11,uVar8)))) {
        fVar2 = (float)CONCAT13(uVar17,CONCAT12(uVar14,CONCAT11(uVar11,uVar8))) + -6.2831855;
        uVar6 = SUB41(fVar2,0);
        uVar9 = (undefined1)((uint)fVar2 >> 8);
        uVar12 = (undefined1)((uint)fVar2 >> 0x10);
        uVar15 = (undefined1)((uint)fVar2 >> 0x18);
      }
    }
    else {
      fVar2 = (float)CONCAT13(uVar17,CONCAT12(uVar14,CONCAT11(uVar11,uVar8))) + 6.2831855;
      uVar6 = SUB41(fVar2,0);
      uVar9 = (char)((uint)fVar2 >> 8);
      uVar12 = (char)((uint)fVar2 >> 0x10);
      uVar15 = (char)((uint)fVar2 >> 0x18);
    }
    *(uint *)puVar3 = CONCAT13(uVar15,CONCAT12(uVar12,CONCAT11(uVar9,uVar6)));
    lVar4 = lVar4 + 4;
    puVar3 = puVar3 + 0xb;
  } while (lVar4 != 0xc);
  lVar4 = 0;
  uStack_60 = 0;
  uStack_58 = 0;
  puVar5 = (undefined4 *)((long)param_2 + 0x454);
  do {
    uVar1 = *(undefined4 *)((long)&uStack_60 + lVar4);
    uVar8 = (char)uVar1;
    uVar11 = (char)((uint)uVar1 >> 8);
    uVar14 = (char)((uint)uVar1 >> 0x10);
    uVar17 = (char)((uint)uVar1 >> 0x18);
    _fmodf(CONCAT44(uVar18,CONCAT13(uVar16,CONCAT12(uVar13,CONCAT11(uVar10,uVar7)))),0x40c90fdb);
    uVar16 = uVar17;
    uVar13 = uVar14;
    uVar10 = uVar11;
    uVar7 = uVar8;
    if (-3.1415927 <= (float)CONCAT13(uVar16,CONCAT12(uVar13,CONCAT11(uVar10,uVar7)))) {
      uVar8 = uVar7;
      uVar11 = uVar10;
      uVar14 = uVar13;
      uVar17 = uVar16;
      if ((float)CONCAT13(uVar16,CONCAT12(uVar13,CONCAT11(uVar10,uVar7))) != 3.1415927 &&
          3.1415927 <= (float)CONCAT13(uVar16,CONCAT12(uVar13,CONCAT11(uVar10,uVar7)))) {
        fVar2 = (float)CONCAT13(uVar16,CONCAT12(uVar13,CONCAT11(uVar10,uVar7))) + -6.2831855;
        uVar8 = SUB41(fVar2,0);
        uVar11 = (undefined1)((uint)fVar2 >> 8);
        uVar14 = (undefined1)((uint)fVar2 >> 0x10);
        uVar17 = (undefined1)((uint)fVar2 >> 0x18);
      }
    }
    else {
      fVar2 = (float)CONCAT13(uVar16,CONCAT12(uVar13,CONCAT11(uVar10,uVar7))) + 6.2831855;
      uVar8 = SUB41(fVar2,0);
      uVar11 = (char)((uint)fVar2 >> 8);
      uVar14 = (char)((uint)fVar2 >> 0x10);
      uVar17 = (char)((uint)fVar2 >> 0x18);
    }
    *puVar5 = CONCAT13(uVar17,CONCAT12(uVar14,CONCAT11(uVar11,uVar8)));
    lVar4 = lVar4 + 4;
    puVar5 = puVar5 + 0x16;
  } while (lVar4 != 0xc);
  param_2[99] = 0;
  param_2[0x62] = 0;
  param_2[0x65] = 0;
  param_2[100] = 0;
  return param_2;
}



/* Entry: 10982b7d0; end: 10982b7d3;  */

void FUN_10982b7d0(void)

{
  return;
}



/* Entry: 10982b7d4; end: 10982b7ef;  */

void FUN_10982b7d4(long param_1)

{
  if (param_1 != 0) {
    FUN_109825740();
  }
  return;
}



/* Entry: 10982b7f0; end: 10982b7ff;  */

void FUN_10982b7f0(void)

{
  return;
}



/* Entry: 10982b800; end: 10982bbdf;  */

undefined * FUN_10982b800(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined4 *puVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined4 *puVar6;
  long lVar7;
  long lVar8;
  
  FUN_109833ca0();
  lVar1 = 0;
  lVar2 = param_1 + 0x50;
  lVar7 = param_2 + 0x40;
  do {
    lVar8 = 0;
    do {
      *(undefined4 *)(lVar7 + lVar8) = *(undefined4 *)(lVar2 + lVar8);
      lVar8 = lVar8 + 4;
    } while (lVar8 != 0x10);
    lVar1 = lVar1 + 1;
    lVar7 = lVar7 + 0x10;
    lVar2 = lVar2 + 0x10;
  } while (lVar1 != 3);
  lVar2 = 0;
  do {
    *(undefined4 *)(param_2 + 0x70 + lVar2) = *(undefined4 *)(param_1 + 0x80 + lVar2);
    lVar2 = lVar2 + 4;
  } while (lVar2 != 0x10);
  lVar1 = 0;
  lVar2 = param_1 + 0x90;
  lVar7 = param_2 + 0x80;
  do {
    lVar8 = 0;
    do {
      *(undefined4 *)(lVar7 + lVar8) = *(undefined4 *)(lVar2 + lVar8);
      lVar8 = lVar8 + 4;
    } while (lVar8 != 0x10);
    lVar1 = lVar1 + 1;
    lVar7 = lVar7 + 0x10;
    lVar2 = lVar2 + 0x10;
  } while (lVar1 != 3);
  lVar2 = 0;
  do {
    *(undefined4 *)(param_2 + 0xb0 + lVar2) = *(undefined4 *)(param_1 + 0xc0 + lVar2);
    lVar2 = lVar2 + 4;
  } while (lVar2 != 0x10);
  puVar3 = (undefined4 *)(param_1 + 0x450);
  lVar2 = 3;
  puVar6 = (undefined4 *)(param_2 + 0x268);
  do {
    puVar6[-0x2c] = *puVar3;
    puVar6[-0x30] = puVar3[1];
    puVar6[-0x28] = puVar3[2];
    puVar6[-0x24] = puVar3[3];
    puVar6[-0x20] = puVar3[4];
    puVar6[-0x1c] = puVar3[5];
    puVar6[-0x18] = puVar3[6];
    puVar6[-0x14] = puVar3[8];
    puVar6[-0x10] = puVar3[9];
    puVar6[-0xc] = puVar3[0xb];
    puVar6[-8] = puVar3[0xd];
    puVar6[-4] = puVar3[0xf];
    *puVar6 = puVar3[0x11];
    puVar3 = puVar3 + 0x16;
    lVar2 = lVar2 + -1;
    puVar6 = puVar6 + 1;
  } while (lVar2 != 0);
  *(undefined4 *)(param_2 + 0x1c4) = 0;
  *(undefined4 *)(param_2 + 0x1b4) = 0;
  *(undefined4 *)(param_2 + 0x1d4) = 0;
  *(undefined4 *)(param_2 + 0x1e4) = 0;
  *(undefined4 *)(param_2 + 500) = 0;
  *(undefined4 *)(param_2 + 0x204) = 0;
  *(undefined4 *)(param_2 + 0x214) = 0;
  *(undefined4 *)(param_2 + 0x224) = 0;
  *(undefined4 *)(param_2 + 0x234) = 0;
  *(undefined4 *)(param_2 + 0x244) = 0;
  *(undefined4 *)(param_2 + 0x254) = 0;
  *(undefined4 *)(param_2 + 0x264) = 0;
  lVar2 = 3;
  *(undefined4 *)(param_2 + 0x274) = 0;
  puVar4 = (undefined1 *)(param_2 + 0x288);
  puVar5 = (undefined1 *)(param_1 + 0x490);
  do {
    puVar4[-0x10] = puVar5[-0x24];
    puVar4[-0xc] = puVar5[-0x18];
    puVar4[-8] = puVar5[-0x10];
    puVar4[-4] = puVar5[-8];
    *puVar4 = *puVar5;
    lVar2 = lVar2 + -1;
    puVar4 = puVar4 + 1;
    puVar5 = puVar5 + 0x58;
  } while (lVar2 != 0);
  lVar2 = 0;
  *(undefined1 *)(param_2 + 0x27b) = 0;
  *(undefined1 *)(param_2 + 0x27f) = 0;
  *(undefined1 *)(param_2 + 0x283) = 0;
  *(undefined1 *)(param_2 + 0x287) = 0;
  *(undefined1 *)(param_2 + 0x28b) = 0;
  do {
    *(undefined4 *)(param_2 + 0xd0 + lVar2) = *(undefined4 *)(param_1 + 0x310 + lVar2);
    lVar2 = lVar2 + 4;
  } while (lVar2 != 0x10);
  lVar2 = 0;
  do {
    *(undefined4 *)(param_2 + 0xc0 + lVar2) = *(undefined4 *)(param_1 + 800 + lVar2);
    lVar2 = lVar2 + 4;
  } while (lVar2 != 0x10);
  lVar2 = 0;
  do {
    *(undefined4 *)(param_2 + 0xe0 + lVar2) = *(undefined4 *)(param_1 + 0x330 + lVar2);
    lVar2 = lVar2 + 4;
  } while (lVar2 != 0x10);
  lVar2 = 0;
  do {
    *(undefined4 *)(param_2 + 0xf0 + lVar2) = *(undefined4 *)(param_1 + 0x340 + lVar2);
    lVar2 = lVar2 + 4;
  } while (lVar2 != 0x10);
  lVar2 = 0;
  do {
    *(undefined4 *)(param_2 + 0x100 + lVar2) = *(undefined4 *)(param_1 + 0x350 + lVar2);
    lVar2 = lVar2 + 4;
  } while (lVar2 != 0x10);
  lVar2 = 0;
  do {
    *(undefined4 *)(param_2 + 0x110 + lVar2) = *(undefined4 *)(param_1 + 0x360 + lVar2);
    lVar2 = lVar2 + 4;
  } while (lVar2 != 0x10);
  lVar2 = 0;
  do {
    *(undefined4 *)(param_2 + 0x120 + lVar2) = *(undefined4 *)(param_1 + 0x370 + lVar2);
    lVar2 = lVar2 + 4;
  } while (lVar2 != 0x10);
  lVar2 = 0;
  do {
    *(undefined4 *)(param_2 + 0x130 + lVar2) = *(undefined4 *)(param_1 + 0x3f0 + lVar2);
    lVar2 = lVar2 + 4;
  } while (lVar2 != 0x10);
  lVar2 = 0;
  do {
    *(undefined4 *)(param_2 + 0x140 + lVar2) = *(undefined4 *)(param_1 + 0x400 + lVar2);
    lVar2 = lVar2 + 4;
  } while (lVar2 != 0x10);
  lVar2 = 0;
  do {
    *(undefined4 *)(param_2 + 0x150 + lVar2) = *(undefined4 *)(param_1 + 0x390 + lVar2);
    lVar2 = lVar2 + 4;
  } while (lVar2 != 0x10);
  lVar2 = 0;
  do {
    *(undefined4 *)(param_2 + 0x160 + lVar2) = *(undefined4 *)(param_1 + 0x3a0 + lVar2);
    lVar2 = lVar2 + 4;
  } while (lVar2 != 0x10);
  lVar2 = 0;
  do {
    *(undefined4 *)(param_2 + 0x170 + lVar2) = *(undefined4 *)(param_1 + 0x3c0 + lVar2);
    lVar2 = lVar2 + 4;
  } while (lVar2 != 0x10);
  lVar2 = 0;
  do {
    *(undefined4 *)(param_2 + 0x180 + lVar2) = *(undefined4 *)(param_1 + 0x3e0 + lVar2);
    lVar2 = lVar2 + 4;
  } while (lVar2 != 0x10);
  puVar4 = (undefined1 *)(param_1 + 0x380);
  lVar2 = 3;
  puVar5 = (undefined1 *)(param_2 + 0x1a0);
  do {
    puVar5[-0x10] = *puVar4;
    puVar5[-0xc] = puVar4[3];
    puVar5[-8] = puVar4[6];
    puVar5[-4] = puVar4[0x30];
    *puVar5 = puVar4[0x50];
    puVar4 = puVar4 + 1;
    lVar2 = lVar2 + -1;
    puVar5 = puVar5 + 1;
  } while (lVar2 != 0);
  *(undefined1 *)(param_2 + 0x193) = 0;
  *(undefined1 *)(param_2 + 0x197) = 0;
  *(undefined1 *)(param_2 + 0x19b) = 0;
  *(undefined1 *)(param_2 + 0x19f) = 0;
  *(undefined1 *)(param_2 + 0x1a3) = 0;
  *(undefined4 *)(param_2 + 0x28c) = *(undefined4 *)(param_1 + 0x558);
  *(undefined4 *)(param_2 + 0x1a4) = 0;
  return &UNK_10f580bf7;
}



/* Entry: 10982bbe0; end: 10982bd73;  */

void FUN_10982bbe0(long param_1,float *param_2,undefined1 (*param_3) [16])

{
  float fVar1;
  float fVar2;
  float fVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  
  fVar1 = *(float *)(param_1 + 0x1d0);
  if (fVar1 != 0.0) {
    fVar2 = *param_2;
    fVar3 = param_2[1];
    *(float *)(param_1 + 0x1b8) =
         *(float *)(param_1 + 0x1b8) + param_2[2] * *(float *)(param_1 + 0x1e8) * fVar1;
    *(float *)(param_1 + 0x1bc) = *(float *)(param_1 + 0x1bc) + 0.0;
    *(float *)(param_1 + 0x1b0) =
         *(float *)(param_1 + 0x1b0) + fVar2 * *(float *)(param_1 + 0x1e0) * fVar1;
    *(float *)(param_1 + 0x1b4) =
         *(float *)(param_1 + 0x1b4) + fVar3 * *(float *)(param_1 + 0x1e4) * fVar1;
    auVar7._0_4_ = *(float *)(param_1 + 0x1e0) * *param_2;
    auVar7._4_4_ = *(float *)(param_1 + 0x1e4) * param_2[1];
    auVar7._8_4_ = *(float *)(param_1 + 0x1e8) * param_2[2];
    auVar7._12_4_ = *(float *)(param_1 + 0x1ec) * param_2[3];
    auVar4 = *param_3;
    auVar5 = NEON_ext(auVar4,auVar4,0xc,1);
    auVar6 = NEON_ext(auVar5,auVar4,8,1);
    auVar5 = NEON_ext(auVar7,auVar7,0xc,1);
    auVar8 = NEON_ext(auVar5,auVar7,8,1);
    auVar5._0_4_ = auVar4._0_4_ * auVar8._0_4_ - auVar7._0_4_ * auVar6._0_4_;
    auVar5._4_4_ = auVar4._4_4_ * auVar8._4_4_ - auVar7._4_4_ * auVar6._4_4_;
    auVar5._8_4_ = auVar4._8_4_ * auVar8._8_4_ - auVar7._8_4_ * auVar6._8_4_;
    auVar5._12_4_ = auVar4._12_4_ * auVar8._12_4_ - auVar7._12_4_ * auVar6._12_4_;
    auVar4 = NEON_ext(auVar5,auVar5,0xc,1);
    auVar4 = NEON_ext(auVar4,auVar5,8,1);
    fVar1 = auVar4._0_4_;
    auVar6._0_4_ = *(float *)(param_1 + 0x1a0) * fVar1;
    fVar2 = auVar4._4_4_;
    auVar6._4_4_ = *(float *)(param_1 + 0x1a4) * fVar2;
    fVar3 = auVar4._8_4_;
    auVar6._8_4_ = *(float *)(param_1 + 0x1a8) * fVar3;
    auVar8._0_4_ = *(float *)(param_1 + 0x180) * fVar1;
    auVar8._4_4_ = *(float *)(param_1 + 0x184) * fVar2;
    auVar8._8_4_ = *(float *)(param_1 + 0x188) * fVar3;
    auVar8._12_4_ = *(float *)(param_1 + 0x18c) * 0.0;
    auVar4._0_4_ = *(float *)(param_1 + 400) * fVar1;
    auVar4._4_4_ = *(float *)(param_1 + 0x194) * fVar2;
    auVar4._8_4_ = *(float *)(param_1 + 0x198) * fVar3;
    auVar4._12_4_ = *(float *)(param_1 + 0x19c) * 0.0;
    auVar5 = NEON_ext(auVar8,auVar8,8,1);
    auVar9 = NEON_ext(auVar4,auVar4,8,1);
    auVar6._12_4_ = 0;
    auVar7 = NEON_ext(auVar6,auVar6,8,1);
    *(float *)(param_1 + 0x1c8) =
         *(float *)(param_1 + 0x1c8) +
         *(float *)(param_1 + 0x2b8) * (auVar6._0_4_ + auVar6._4_4_ + auVar7._0_4_ + auVar7._4_4_);
    *(float *)(param_1 + 0x1cc) = *(float *)(param_1 + 0x1cc) + *(float *)(param_1 + 700) * 0.0;
    *(float *)(param_1 + 0x1c0) =
         *(float *)(param_1 + 0x1c0) +
         *(float *)(param_1 + 0x2b0) * (auVar8._0_4_ + auVar8._4_4_ + auVar5._0_4_);
    *(float *)(param_1 + 0x1c4) =
         *(float *)(param_1 + 0x1c4) +
         *(float *)(param_1 + 0x2b4) * (auVar4._0_4_ + auVar4._4_4_ + auVar9._0_4_);
  }
  return;
}



/* Entry: 10982bd74; end: 10982bf43;  */

undefined8 *
FUN_10982bd74(undefined8 *param_1,long param_2,long param_3,undefined8 *param_4,undefined8 *param_5,
             undefined4 param_6)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  
  param_1[2] = 0xffffffffffffffff;
  *(undefined4 *)(param_1 + 3) = 0x7f7fffff;
  *(undefined2 *)((long)param_1 + 0x1c) = 1;
  *(undefined4 *)(param_1 + 4) = 0xffffffff;
  *param_1 = &PTR_DAT_110b14358;
  param_1[1] = 0xffffffff0000000c;
  param_1[5] = param_2;
  param_1[6] = param_3;
  param_1[7] = 0x3d4ccccd00000000;
  param_1[8] = 0;
  uVar3 = *param_4;
  param_1[0xb] = param_4[1];
  param_1[10] = uVar3;
  uVar3 = param_4[2];
  param_1[0xd] = param_4[3];
  param_1[0xc] = uVar3;
  uVar3 = param_4[4];
  param_1[0xf] = param_4[5];
  param_1[0xe] = uVar3;
  uVar3 = param_4[6];
  param_1[0x11] = param_4[7];
  param_1[0x10] = uVar3;
  uVar3 = *param_5;
  param_1[0x13] = param_5[1];
  param_1[0x12] = uVar3;
  uVar3 = param_5[2];
  param_1[0x15] = param_5[3];
  param_1[0x14] = uVar3;
  uVar3 = param_5[4];
  param_1[0x17] = param_5[5];
  param_1[0x16] = uVar3;
  uVar3 = param_5[6];
  param_1[0x19] = param_5[7];
  param_1[0x18] = uVar3;
  param_1[0x65] = 0;
  param_1[100] = 0;
  param_1[0x67] = 0;
  param_1[0x66] = 0;
  param_1[99] = 0;
  param_1[0x62] = 0;
  param_1[0x68] = 0x3e4ccccd3e4ccccd;
  *(undefined4 *)(param_1 + 0x69) = 0x3e4ccccd;
  *(undefined4 *)((long)param_1 + 0x35c) = 0;
  *(undefined8 *)((long)param_1 + 0x354) = 0;
  *(undefined8 *)((long)param_1 + 0x34c) = 0;
  param_1[0x6c] = 0x3f6666663f666666;
  *(undefined4 *)(param_1 + 0x6d) = 0x3f666666;
  *(undefined4 *)(param_1 + 0x73) = 0;
  param_1[0x72] = 0;
  *(undefined4 *)(param_1 + 0x75) = 0;
  param_1[0x74] = 0;
  *(undefined1 *)((long)param_1 + 0x3b2) = 0;
  *(undefined2 *)(param_1 + 0x76) = 0;
  param_1[0x78] = 0;
  *(undefined4 *)(param_1 + 0x79) = 0;
  *(undefined1 *)((long)param_1 + 0x3d2) = 0;
  *(undefined2 *)(param_1 + 0x7a) = 0;
  param_1[0x7c] = 0;
  *(undefined4 *)(param_1 + 0x7d) = 0;
  param_1[0x7e] = 0;
  *(undefined4 *)(param_1 + 0x7f) = 0;
  param_1[0x80] = 0;
  *(undefined4 *)(param_1 + 0x81) = 0;
  *(undefined8 *)((long)param_1 + 0x37c) = 0;
  *(undefined8 *)((long)param_1 + 0x381) = 0;
  *(undefined8 *)((long)param_1 + 0x374) = 0;
  *(undefined8 *)((long)param_1 + 0x36c) = 0;
  param_1[0x83] = 0;
  param_1[0x82] = 0;
  param_1[0x85] = 0;
  param_1[0x84] = 0;
  param_1[0x87] = 0;
  param_1[0x86] = 0;
  *(undefined8 *)((long)param_1 + 0x444) = 0;
  *(undefined8 *)((long)param_1 + 0x43c) = 0;
  lVar2 = 0;
  do {
    *(undefined8 *)((long)param_1 + lVar2 + 0x458) = 0x3e4ccccd00000000;
    *(undefined8 *)((long)param_1 + lVar2 + 0x450) = 0xbf8000003f800000;
    *(undefined8 *)((long)param_1 + lVar2 + 0x460) = 0x3f66666600000000;
    *(undefined4 *)((long)param_1 + lVar2 + 0x468) = 0;
    *(undefined1 *)((long)param_1 + lVar2 + 0x46c) = 0;
    *(undefined8 *)((long)param_1 + lVar2 + 0x470) = 0x40c0000000000000;
    *(undefined1 *)((long)param_1 + lVar2 + 0x478) = 0;
    *(undefined4 *)((long)param_1 + lVar2 + 0x47c) = 0;
    *(undefined1 *)((long)param_1 + lVar2 + 0x480) = 0;
    *(undefined4 *)((long)param_1 + lVar2 + 0x484) = 0;
    *(undefined1 *)((long)param_1 + lVar2 + 0x488) = 0;
    *(undefined4 *)((long)param_1 + lVar2 + 0x48c) = 0;
    *(undefined1 *)((long)param_1 + lVar2 + 0x490) = 0;
    *(undefined4 *)((long)param_1 + lVar2 + 0x4a4) = 0;
    lVar1 = lVar2 + 0x58;
    *(undefined8 *)((long)param_1 + lVar2 + 0x49c) = 0;
    *(undefined8 *)((long)param_1 + lVar2 + 0x494) = 0;
    lVar2 = lVar1;
  } while (lVar1 != 0x108);
  *(undefined4 *)(param_1 + 0xab) = param_6;
  *(undefined4 *)((long)param_1 + 0x63c) = 0;
  FUN_10982bf44(param_1,param_2 + 0x10,param_3 + 0x10);
  return param_1;
}



/* Entry: 10982bf44; end: 10982cbcb;  */

void FUN_10982bf44(long param_1,float *param_2,float *param_3)

{
  undefined1 (*pauVar1) [16];
  int iVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [12];
  float *pfVar6;
  long lVar7;
  long lVar8;
  undefined4 uVar9;
  undefined1 auVar10 [12];
  float fVar27;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  float fVar34;
  float fVar35;
  float fVar41;
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  float fVar42;
  float fVar43;
  float fVar44;
  float fVar51;
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  float fVar52;
  float fVar55;
  float fVar56;
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  float fVar57;
  float fVar58;
  float fVar60;
  undefined1 auVar59 [16];
  undefined1 auVar61 [16];
  float fVar62;
  float fVar63;
  float fVar64;
  float fVar65;
  float fVar66;
  float fVar67;
  float fVar68;
  undefined8 uVar69;
  float fVar70;
  float fVar71;
  float fVar72;
  float fVar73;
  float fVar74;
  float fVar75;
  undefined8 uVar76;
  ulong uVar77;
  undefined1 auVar78 [16];
  undefined1 auVar79 [16];
  undefined8 uVar80;
  undefined1 auVar81 [16];
  float fVar82;
  float fVar83;
  float fVar84;
  undefined8 uVar85;
  float fVar86;
  float fVar87;
  float fStack_50;
  float fStack_4c;
  float fStack_48;
  undefined1 auVar15 [16];
  float fVar26;
  undefined1 auVar36 [16];
  undefined1 auVar46 [16];
  ulong uVar45;
  
  fVar65 = *param_2;
  fVar67 = param_2[1];
  fVar68 = param_2[2];
  fVar43 = param_2[4];
  fVar58 = param_2[5];
  fVar72 = param_2[6];
  fVar52 = *(float *)(param_1 + 0x50);
  fVar55 = *(float *)(param_1 + 0x54);
  fVar56 = *(float *)(param_1 + 0x58);
  fVar27 = *(float *)(param_1 + 0x60);
  fVar75 = *(float *)(param_1 + 100);
  fVar35 = *(float *)(param_1 + 0x68);
  fVar44 = *(float *)(param_1 + 0x70);
  fVar51 = *(float *)(param_1 + 0x74);
  fVar57 = *(float *)(param_1 + 0x78);
  fVar34 = (float)*(undefined8 *)(param_1 + 0x88);
  fVar41 = (float)((ulong)*(undefined8 *)(param_1 + 0x88) >> 0x20);
  fVar62 = (float)*(undefined8 *)(param_1 + 0x80);
  fVar63 = (float)((ulong)*(undefined8 *)(param_1 + 0x80) >> 0x20);
  uVar69 = *(undefined8 *)(param_2 + 0xe);
  fVar60 = (float)*(undefined8 *)(param_2 + 8);
  fVar64 = (float)((ulong)*(undefined8 *)(param_2 + 8) >> 0x20);
  fVar26 = fVar55 * fVar43 + fVar75 * fVar58 + fVar51 * fVar72;
  auVar11._0_8_ = CONCAT44(fVar26,fVar52 * fVar43 + fVar27 * fVar58 + fVar44 * fVar72);
  auVar11._8_4_ = fVar56 * fVar43 + fVar35 * fVar58 + fVar57 * fVar72;
  auVar11._12_4_ = fVar43 * 0.0 + fVar58 * 0.0 + fVar72 * 0.0;
  auVar78._0_4_ = fVar65 * fVar62;
  auVar78._4_4_ = fVar67 * fVar63;
  auVar78._8_4_ = fVar68 * fVar34;
  auVar78._12_4_ = param_2[3] * fVar41;
  auVar28._0_4_ = fVar43 * fVar62;
  auVar28._4_4_ = fVar58 * fVar63;
  auVar28._8_4_ = fVar72 * fVar34;
  auVar28._12_4_ = param_2[7] * fVar41;
  fVar62 = fVar60 * fVar62;
  fVar63 = fVar64 * fVar63;
  fVar43 = (float)*(undefined8 *)(param_2 + 10);
  auVar81 = NEON_ext(auVar28,auVar28,8,1);
  auVar29._4_4_ = fVar63;
  auVar29._0_4_ = fVar62;
  auVar29._8_4_ = fVar43 * fVar34;
  auVar29._12_4_ = 0;
  auVar53._4_4_ = fVar63;
  auVar53._0_4_ = fVar62;
  auVar53._8_4_ = fVar43 * fVar34;
  auVar53._12_4_ = 0;
  auVar29 = NEON_ext(auVar29,auVar53,8,1);
  fVar34 = fVar52 * fVar65 + fVar27 * fVar67 + fVar44 * fVar68;
  fVar41 = fVar55 * fVar65 + fVar75 * fVar67 + fVar51 * fVar68;
  auVar36._0_8_ = CONCAT44(fVar41,fVar34);
  auVar36._8_4_ = fVar56 * fVar65 + fVar35 * fVar67 + fVar57 * fVar68;
  auVar36._12_4_ = fVar65 * 0.0 + fVar67 * 0.0 + fVar68 * 0.0;
  auVar53 = NEON_ext(auVar78,auVar78,8,1);
  fVar42 = fVar52 * fVar60 + fVar27 * fVar64 + fVar44 * fVar43;
  fVar51 = fVar55 * fVar60 + fVar75 * fVar64 + fVar51 * fVar43;
  auVar46._0_8_ = CONCAT44(fVar51,fVar42);
  auVar46._8_4_ = fVar56 * fVar60 + fVar35 * fVar64 + fVar57 * fVar43;
  auVar46._12_4_ = fVar60 * 0.0 + fVar64 * 0.0 + fVar43 * 0.0;
  fVar57 = (float)*(undefined8 *)(param_2 + 0xc) + auVar78._0_4_ + auVar78._4_4_ + auVar53._0_4_;
  fVar60 = (float)((ulong)*(undefined8 *)(param_2 + 0xc) >> 0x20) +
           auVar28._0_4_ + auVar28._4_4_ + auVar81._0_4_;
  fVar62 = (float)uVar69 + fVar62 + fVar63 + auVar29._0_4_ + auVar29._4_4_;
  *(long *)(param_1 + 0x568) = auVar36._8_8_;
  *(undefined8 *)(param_1 + 0x560) = auVar36._0_8_;
  *(long *)(param_1 + 0x578) = auVar11._8_8_;
  *(undefined8 *)(param_1 + 0x570) = auVar11._0_8_;
  *(long *)(param_1 + 0x588) = auVar46._8_8_;
  *(undefined8 *)(param_1 + 0x580) = auVar46._0_8_;
  *(float *)(param_1 + 0x598) = fVar62;
  *(float *)(param_1 + 0x59c) = (float)((ulong)uVar69 >> 0x20) + 0.0;
  *(float *)(param_1 + 0x590) = fVar57;
  *(float *)(param_1 + 0x594) = fVar60;
  fVar43 = *param_3;
  fVar58 = param_3[1];
  fVar72 = param_3[2];
  fVar65 = param_3[4];
  fVar67 = param_3[5];
  fVar68 = param_3[6];
  fVar66 = (float)*(undefined8 *)(param_1 + 0x98);
  fVar63 = (float)*(undefined8 *)(param_1 + 0x90);
  fVar64 = (float)((ulong)*(undefined8 *)(param_1 + 0x90) >> 0x20);
  fVar70 = (float)*(undefined8 *)(param_1 + 0xa8);
  fVar52 = *(float *)(param_1 + 0xc0);
  fVar55 = *(float *)(param_1 + 0xc4);
  fVar56 = *(float *)(param_1 + 200);
  fVar74 = (float)*(undefined8 *)(param_1 + 0xb8);
  fVar27 = param_3[8];
  fVar75 = param_3[9];
  fVar35 = param_3[10];
  fVar44 = param_3[0xf];
  fVar86 = (float)*(undefined8 *)(param_1 + 0xa0);
  fVar87 = (float)((ulong)*(undefined8 *)(param_1 + 0xa0) >> 0x20);
  fVar71 = (float)*(undefined8 *)(param_1 + 0xb0);
  fVar73 = (float)((ulong)*(undefined8 *)(param_1 + 0xb0) >> 0x20);
  fVar82 = fVar43 * fVar52;
  fVar83 = fVar58 * fVar55;
  fVar84 = param_3[3] * *(float *)(param_1 + 0xcc);
  auVar61._0_4_ = fVar65 * fVar52;
  auVar61._4_4_ = fVar67 * fVar55;
  auVar61._8_4_ = fVar68 * fVar56;
  auVar61._12_4_ = param_3[7] * *(float *)(param_1 + 0xcc);
  auVar79._0_4_ = fVar27 * fVar52;
  auVar79._4_4_ = fVar75 * fVar55;
  auVar79._8_4_ = fVar35 * fVar56;
  auVar79._12_4_ = 0;
  auVar53 = NEON_ext(auVar61,auVar61,8,1);
  auVar81 = NEON_ext(auVar79,auVar79,8,1);
  auVar54._4_4_ = fVar83;
  auVar54._0_4_ = fVar82;
  auVar54._8_4_ = fVar72 * fVar56;
  auVar54._12_4_ = fVar84;
  auVar4._4_4_ = fVar83;
  auVar4._0_4_ = fVar82;
  auVar4._8_4_ = fVar72 * fVar56;
  auVar4._12_4_ = fVar84;
  auVar29 = NEON_ext(auVar54,auVar4,8,1);
  fVar52 = param_3[0xc] + fVar82 + fVar83 + auVar29._0_4_;
  fVar55 = param_3[0xd] + auVar61._0_4_ + auVar61._4_4_ + auVar53._0_4_;
  fVar56 = param_3[0xe] + auVar79._0_4_ + auVar79._4_4_ + auVar81._0_4_ + auVar81._4_4_;
  *(ulong *)(param_1 + 0x5a8) =
       CONCAT44(fVar43 * 0.0 + fVar58 * 0.0 + fVar72 * 0.0,
                fVar66 * fVar43 + fVar70 * fVar58 + fVar74 * fVar72);
  *(ulong *)(param_1 + 0x5a0) =
       CONCAT44(fVar64 * fVar43 + fVar87 * fVar58 + fVar73 * fVar72,
                fVar63 * fVar43 + fVar86 * fVar58 + fVar71 * fVar72);
  *(float *)(param_1 + 0x5b8) = fVar66 * fVar65 + fVar70 * fVar67 + fVar74 * fVar68;
  *(float *)(param_1 + 0x5bc) = fVar65 * 0.0 + fVar67 * 0.0 + fVar68 * 0.0;
  *(float *)(param_1 + 0x5b0) = fVar63 * fVar65 + fVar86 * fVar67 + fVar71 * fVar68;
  *(float *)(param_1 + 0x5b4) = fVar64 * fVar65 + fVar87 * fVar67 + fVar73 * fVar68;
  *(ulong *)(param_1 + 0x5c8) =
       CONCAT44(fVar27 * 0.0 + fVar75 * 0.0 + fVar35 * 0.0,
                fVar66 * fVar27 + fVar70 * fVar75 + fVar74 * fVar35);
  *(ulong *)(param_1 + 0x5c0) =
       CONCAT44(fVar64 * fVar27 + fVar87 * fVar75 + fVar73 * fVar35,
                fVar63 * fVar27 + fVar86 * fVar75 + fVar71 * fVar35);
  fVar57 = fVar52 - fVar57;
  fVar60 = fVar55 - fVar60;
  fVar62 = fVar56 - fVar62;
  fVar58 = *(float *)(param_1 + 0x570);
  uVar69 = NEON_ext(auVar11._0_8_,auVar36._0_8_,4,1);
  uVar76 = NEON_rev64(auVar46._0_8_,4);
  fVar72 = fVar42 * -(float)uVar69 + (float)uVar76 * fVar58;
  auVar53 = NEON_ext(auVar36,auVar36,8,1);
  auVar29 = NEON_ext(auVar46,auVar46,8,1);
  fVar27 = auVar29._0_4_;
  auVar29 = NEON_ext(auVar11,auVar11,8,1);
  fVar68 = fVar27 * -fVar58 + fVar42 * auVar29._0_4_;
  auVar81 = NEON_ext(auVar46,auVar46,4,1);
  uVar80 = NEON_ext(auVar11._0_8_,auVar53._0_8_,4,1);
  fVar75 = auVar81._0_4_ * -auVar29._0_4_ + fVar27 * (float)uVar80;
  auVar47._0_4_ = fVar34 * fVar75;
  auVar47._4_4_ = fVar41 * fVar68;
  auVar47._8_4_ = auVar36._8_4_ * fVar72;
  auVar47._12_4_ = auVar36._12_4_ * 0.0;
  auVar29 = NEON_ext(auVar47,auVar47,8,1);
  fVar43 = 1.0 / (auVar47._0_4_ + auVar47._4_4_ + auVar29._0_4_);
  fVar72 = fVar72 * fVar43 * fVar57;
  fVar65 = (fVar51 * -(float)((ulong)uVar69 >> 0x20) + (float)((ulong)uVar76 >> 0x20) * fVar41) *
           fVar43 * fVar60;
  fVar67 = (-(fVar41 * fVar58) + fVar34 * fVar26) * fVar43 * fVar62;
  *(float *)(param_1 + 0x5d8) = fVar56;
  *(float *)(param_1 + 0x5dc) = fVar44 + 0.0;
  *(float *)(param_1 + 0x5d0) = fVar52;
  *(float *)(param_1 + 0x5d4) = fVar55;
  auVar12._0_4_ = fVar75 * fVar43 * fVar57;
  auVar12._4_4_ =
       (auVar81._4_4_ * -fVar41 + fVar51 * (float)((ulong)uVar80 >> 0x20)) * fVar43 * fVar60;
  auVar12._8_4_ = (-auVar36._8_4_ * fVar26 + auVar11._8_4_ * fVar41) * fVar43 * fVar62;
  auVar12._12_4_ = 0;
  auVar37._0_4_ = fVar68 * fVar43 * fVar57;
  auVar37._4_4_ = (fVar42 * -auVar36._8_4_ + fVar27 * fVar34) * fVar43 * fVar60;
  auVar37._8_4_ = (-fVar34 * auVar11._8_4_ + fVar58 * auVar36._8_4_) * fVar43 * fVar62;
  auVar37._12_4_ = 0;
  auVar53 = NEON_ext(auVar12,auVar12,8,1);
  auVar54 = NEON_ext(auVar37,auVar37,8,1);
  auVar81._4_4_ = fVar65;
  auVar81._0_4_ = fVar72;
  auVar81._8_4_ = fVar67;
  auVar81._12_4_ = 0;
  auVar3._4_4_ = fVar65;
  auVar3._0_4_ = fVar72;
  auVar3._8_4_ = fVar67;
  auVar3._12_4_ = 0;
  auVar29 = NEON_ext(auVar81,auVar3,8,1);
  *(ulong *)(param_1 + 0x628) = (ulong)(uint)(fVar72 + fVar65 + auVar29._0_4_ + auVar29._4_4_);
  *(ulong *)(param_1 + 0x620) =
       CONCAT44(auVar37._0_4_ + auVar37._4_4_ + auVar54._0_4_,
                auVar12._0_4_ + auVar12._4_4_ + auVar53._0_4_);
  pfVar6 = (float *)(param_1 + 0x310);
  lVar7 = 3;
  do {
    fVar43 = pfVar6[0xc4];
    pfVar6[0x48] = fVar43;
    fVar72 = *pfVar6;
    fVar58 = pfVar6[4];
    if (fVar72 <= fVar58) {
      pfVar6[0x40] = fVar43 - fVar72;
      if (fVar72 != fVar58) {
        fVar43 = fVar43 - fVar58;
        fVar58 = 5.60519e-45;
        lVar8 = 0x110;
        goto LAB_10982c1f4;
      }
      fVar58 = 4.2039e-45;
    }
    else {
      fVar58 = 0.0;
      fVar43 = 0.0;
      lVar8 = 0x100;
LAB_10982c1f4:
      *(float *)((long)pfVar6 + lVar8) = fVar43;
    }
    pfVar6[0x4c] = fVar58;
    pfVar6 = pfVar6 + 1;
    lVar7 = lVar7 + -1;
  } while (lVar7 != 0);
  fVar86 = *(float *)(param_1 + 0x580);
  fVar87 = *(float *)(param_1 + 0x570);
  uVar85 = *(undefined8 *)(param_1 + 0x584);
  fVar66 = (float)((ulong)*(undefined8 *)(param_1 + 0x574) >> 0x20);
  fVar62 = (float)uVar85;
  fVar63 = (float)((ulong)uVar85 >> 0x20);
  fVar64 = (float)*(undefined8 *)(param_1 + 0x574);
  fVar56 = fVar62 * -fVar66 + fVar63 * fVar64;
  fVar27 = fVar63 * -fVar87 + fVar86 * fVar66;
  fVar75 = -(fVar64 * fVar86) + fVar62 * fVar87;
  fVar60 = (float)*(undefined8 *)(param_1 + 0x568);
  fStack_50 = (float)*(undefined8 *)(param_1 + 0x560);
  fVar42 = (float)((ulong)*(undefined8 *)(param_1 + 0x560) >> 0x20);
  auVar38._0_4_ = fStack_50 * fVar56;
  auVar38._4_4_ = fVar42 * fVar27;
  auVar38._8_4_ = fVar60 * fVar75;
  auVar38._12_4_ = (float)((ulong)*(undefined8 *)(param_1 + 0x568) >> 0x20) * 0.0;
  auVar29 = NEON_ext(auVar38,auVar38,8,1);
  fVar35 = 1.0 / (auVar38._0_4_ + auVar38._4_4_ + auVar29._0_4_);
  fVar56 = fVar35 * fVar56;
  fVar57 = (-fVar42 * fVar63 + fVar62 * fVar60) * fVar35;
  fVar26 = (-fVar60 * fVar64 + fVar66 * fVar42) * fVar35;
  fVar27 = fVar35 * fVar27;
  fVar51 = (-(fVar60 * fVar86) + fStack_50 * fVar63) * fVar35;
  fVar41 = (-fStack_50 * fVar66 + fVar87 * fVar60) * fVar35;
  fVar75 = fVar75 * fVar35;
  fVar34 = (-fStack_50 * fVar62 + fVar86 * fVar42) * fVar35;
  uVar80 = *(undefined8 *)(param_1 + 0x5a0);
  fVar52 = *(float *)(param_1 + 0x5a0);
  fVar55 = *(float *)(param_1 + 0x5a4);
  fVar58 = *(float *)(param_1 + 0x5b0);
  fVar72 = *(float *)(param_1 + 0x5b4);
  fVar65 = *(float *)(param_1 + 0x5b8);
  pauVar1 = (undefined1 (*) [16])(param_1 + 0x5c0);
  fVar67 = *(float *)*pauVar1;
  fVar68 = *(float *)(param_1 + 0x5c4);
  uVar76 = *(undefined8 *)*pauVar1;
  uVar69 = *(undefined8 *)*pauVar1;
  auVar5 = *(undefined1 (*) [12])*pauVar1;
  auVar10 = *(undefined1 (*) [12])*pauVar1;
  auVar53 = *pauVar1;
  auVar29 = *pauVar1;
  fVar35 = (-(fVar42 * fVar87) + fVar64 * fStack_50) * fVar35;
  fVar44 = fVar52 * fVar56 + fVar58 * fVar57 + fVar67 * fVar26;
  fVar43 = fVar55 * fVar56 + fVar72 * fVar57 + fVar68 * fVar26;
  uVar45 = CONCAT44(fVar43,fVar44);
  fVar56 = *(float *)(param_1 + 0x5a8) * fVar56 + fVar65 * fVar57 +
           *(float *)(param_1 + 0x5c8) * fVar26;
  fVar57 = fVar52 * fVar27 + fVar58 * fVar51 + fVar67 * fVar41;
  fVar26 = fVar55 * fVar27 + fVar72 * fVar51 + fVar68 * fVar41;
  fVar27 = *(float *)(param_1 + 0x5a8) * fVar27 + fVar65 * fVar51 +
           *(float *)(param_1 + 0x5c8) * fVar41;
  fVar52 = fVar52 * fVar75 + fVar58 * fVar34 + fVar67 * fVar35;
  fVar55 = fVar55 * fVar75 + fVar72 * fVar34 + fVar68 * fVar35;
  uVar77 = CONCAT44(fVar55,fVar52);
  iVar2 = *(int *)(param_1 + 0x558);
  fStack_4c = (float)((ulong)uVar80 >> 0x20);
  if (iVar2 < 3) {
    fStack_50 = (float)uVar80;
    if (iVar2 == 0) {
      if (1.0 <= fVar52) {
        uVar9 = _atan2f();
        *(undefined4 *)(param_1 + 0x5e0) = uVar9;
        uVar9 = 0x3fc90fdb;
LAB_10982c6e8:
        *(undefined4 *)(param_1 + 0x5e4) = uVar9;
        uVar9 = 0;
      }
      else {
        if (fVar52 <= -1.0) {
          fVar43 = (float)_atan2f();
          *(float *)(param_1 + 0x5e0) = -fVar43;
          uVar9 = 0xbfc90fdb;
          goto LAB_10982c6e8;
        }
        uVar9 = _atan2f();
        *(undefined4 *)(param_1 + 0x5e0) = uVar9;
        uVar9 = _asinf();
        *(undefined4 *)(param_1 + 0x5e4) = uVar9;
        uVar9 = _atan2f(-fVar57,CONCAT44(fVar43,fVar44));
      }
      uVar76 = NEON_ext(CONCAT44(fVar66,fVar60),CONCAT44(fVar63,fVar63),4,1);
      auVar59._0_8_ = NEON_ext(CONCAT44(fVar58,fStack_50),uVar69,4,1);
      auVar59._8_8_ = CONCAT44(fVar58,fStack_50);
      *(undefined4 *)(param_1 + 0x5e8) = uVar9;
      fVar72 = (float)((ulong)uVar76 >> 0x20);
      auVar13._0_4_ = (float)auVar59._0_8_ * fVar60 - fStack_50 * (float)uVar76;
      auVar13._4_4_ = (float)((ulong)auVar59._0_8_ >> 0x20) * fVar66 - fVar58 * fVar72;
      auVar13._8_4_ = fStack_50 * fVar63 - fVar67 * fVar60;
      auVar13._12_4_ = fVar58 * 0.0 - fVar66 * 0.0;
      auVar29 = NEON_ext(auVar13,auVar13,0xc,1);
      auVar53 = NEON_ext(auVar29,auVar13,8,1);
      auVar30._0_12_ = auVar53._0_12_;
      auVar30._12_4_ = 0;
      auVar29 = NEON_ext(auVar30,auVar30,0xc,1);
      auVar81 = NEON_ext(auVar29,auVar30,8,1);
      fVar43 = auVar81._12_4_;
      auVar14._0_4_ = (float)uVar76 * auVar53._0_4_ - fVar60 * auVar81._0_4_;
      auVar14._4_4_ = fVar72 * auVar53._4_4_ - fVar66 * auVar81._4_4_;
      auVar14._8_4_ = fVar60 * auVar53._8_4_ - fVar63 * auVar81._8_4_;
      auVar14._12_4_ = fVar66 * 0.0 - fVar43 * 0.0;
      auVar29 = NEON_ext(auVar14,auVar14,0xc,1);
      auVar29 = NEON_ext(auVar29,auVar14,8,1);
      auVar10 = auVar29._0_12_;
      fStack_50 = fStack_50 * auVar81._0_4_;
      fVar58 = fVar58 * auVar81._4_4_;
      fVar67 = fVar67 * auVar81._8_4_;
      goto LAB_10982c998;
    }
    if (iVar2 == 1) {
      if (1.0 <= fVar57) {
        uVar9 = _atan2f();
        *(undefined4 *)(param_1 + 0x5e0) = uVar9;
        *(undefined4 *)(param_1 + 0x5e4) = 0;
        uVar9 = 0xbfc90fdb;
      }
      else if (fVar57 <= -1.0) {
        fVar43 = (float)_atan2f();
        *(float *)(param_1 + 0x5e0) = -fVar43;
        *(undefined4 *)(param_1 + 0x5e4) = 0;
        uVar9 = 0x3fc90fdb;
      }
      else {
        uVar9 = _atan2f();
        *(undefined4 *)(param_1 + 0x5e0) = uVar9;
        uVar9 = _atan2f(uVar77,CONCAT44(fVar43,fVar44));
        *(undefined4 *)(param_1 + 0x5e4) = uVar9;
        uVar9 = _asinf();
      }
      uVar69 = NEON_ext(CONCAT44(fVar64,fVar42),uVar85,4,1);
      uVar76 = NEON_ext(CONCAT44(fVar58,fStack_50),uVar76,4,1);
      *(undefined4 *)(param_1 + 0x5e8) = uVar9;
      fVar43 = (float)((ulong)uVar69 >> 0x20);
      fVar72 = (float)((ulong)uVar76 >> 0x20);
      auVar21._0_4_ = fStack_50 * (float)uVar69 - fVar42 * (float)uVar76;
      auVar21._4_4_ = fVar58 * fVar43 - fVar64 * fVar72;
      auVar21._8_4_ = fVar67 * fVar42 - fVar62 * fStack_50;
      auVar21._12_4_ = fVar64 * 0.0 - fVar58 * 0.0;
      auVar29 = NEON_ext(auVar21,auVar21,0xc,1);
      auVar53 = NEON_ext(auVar29,auVar21,8,1);
      auVar39._0_12_ = auVar53._0_12_;
      auVar39._12_4_ = 0;
      auVar29 = NEON_ext(auVar39,auVar39,0xc,1);
      auVar81 = NEON_ext(auVar29,auVar39,8,1);
      auVar22._0_4_ = fVar42 * auVar81._0_4_ - (float)uVar69 * auVar53._0_4_;
      auVar22._4_4_ = fVar64 * auVar81._4_4_ - fVar43 * auVar53._4_4_;
      auVar22._8_4_ = fVar62 * auVar81._8_4_ - fVar42 * auVar53._8_4_;
      auVar22._12_4_ = auVar81._12_4_ * 0.0 - fVar64 * 0.0;
      auVar29 = NEON_ext(auVar22,auVar22,0xc,1);
      auVar29 = NEON_ext(auVar29,auVar22,8,1);
      auVar10 = auVar29._0_12_;
      auVar31._0_4_ = (float)uVar76 * auVar53._0_4_ - fStack_50 * auVar81._0_4_;
      auVar31._4_4_ = fVar72 * auVar53._4_4_ - fVar58 * auVar81._4_4_;
      auVar31._8_4_ = fStack_50 * auVar53._8_4_ - fVar67 * auVar81._8_4_;
      auVar31._12_4_ = fVar58 * 0.0 - auVar81._12_4_ * 0.0;
      goto LAB_10982ca4c;
    }
    if (iVar2 != 2) {
LAB_10982c524:
      auVar15 = *(undefined1 (*) [16])(param_1 + 0x5f0);
      auVar30 = *(undefined1 (*) [16])(param_1 + 0x600);
      auVar39 = *(undefined1 (*) [16])(param_1 + 0x610);
      goto LAB_10982cb14;
    }
    if (1.0 <= fVar55) {
      *(undefined4 *)(param_1 + 0x5e0) = 0xbfc90fdb;
      fVar43 = (float)_atan2f(-fVar57,uVar45);
LAB_10982c854:
      *(float *)(param_1 + 0x5e4) = fVar43;
      uVar9 = 0;
    }
    else {
      if (fVar55 <= -1.0) {
        *(undefined4 *)(param_1 + 0x5e0) = 0x3fc90fdb;
        fVar43 = (float)_atan2f(-fVar57,uVar45);
        fVar43 = -fVar43;
        goto LAB_10982c854;
      }
      uVar9 = _asinf();
      *(undefined4 *)(param_1 + 0x5e0) = uVar9;
      uVar9 = _atan2f();
      *(undefined4 *)(param_1 + 0x5e4) = uVar9;
      uVar9 = _atan2f();
    }
    uVar76 = NEON_ext(CONCAT44(fVar72,fStack_4c),CONCAT44(fVar68,fVar68),4,1);
    uVar69 = NEON_ext(CONCAT44(fVar66,fVar60),CONCAT44(fVar63,fVar63),4,1);
    *(undefined4 *)(param_1 + 0x5e8) = uVar9;
    fVar43 = (float)((ulong)uVar69 >> 0x20);
    fVar58 = (float)((ulong)uVar76 >> 0x20);
    auVar18._0_4_ = fStack_4c * (float)uVar69 - (float)uVar76 * fVar60;
    auVar18._4_4_ = fVar72 * fVar43 - fVar58 * fVar66;
    auVar18._8_4_ = fVar68 * fVar60 - fStack_4c * fVar63;
    auVar18._12_4_ = fVar66 * 0.0 - fVar72 * 0.0;
    auVar29 = NEON_ext(auVar18,auVar18,0xc,1);
    auVar29 = NEON_ext(auVar29,auVar18,8,1);
    auVar15._0_12_ = auVar29._0_12_;
    auVar15._12_4_ = 0;
    auVar53 = NEON_ext(auVar15,auVar15,0xc,1);
    auVar81 = NEON_ext(auVar53,auVar15,8,1);
    auVar32._0_4_ = fVar60 * auVar81._0_4_ - (float)uVar69 * auVar29._0_4_;
    auVar32._4_4_ = fVar66 * auVar81._4_4_ - fVar43 * auVar29._4_4_;
    auVar32._8_4_ = fVar63 * auVar81._8_4_ - fVar60 * auVar29._8_4_;
    auVar32._12_4_ = auVar81._12_4_ * 0.0 - fVar66 * 0.0;
    auVar53 = NEON_ext(auVar32,auVar32,0xc,1);
    auVar53 = NEON_ext(auVar53,auVar32,8,1);
    auVar30._0_12_ = auVar53._0_12_;
    auVar30._12_4_ = 0;
    fStack_50 = (float)uVar76 * auVar29._0_4_;
    fVar58 = fVar58 * auVar29._4_4_;
    fVar67 = fStack_4c * auVar29._8_4_;
    fVar43 = fVar72 * 0.0;
    fStack_4c = fStack_4c * auVar81._0_4_;
    fVar72 = fVar72 * auVar81._4_4_;
    fVar68 = fVar68 * auVar81._8_4_;
    fVar65 = auVar81._12_4_ * 0.0;
  }
  else {
    if (iVar2 == 3) {
      if (1.0 <= fVar43) {
        *(undefined4 *)(param_1 + 0x5e0) = 0;
        uVar9 = _atan2f();
        *(undefined4 *)(param_1 + 0x5e4) = uVar9;
        uVar9 = 0x3fc90fdb;
      }
      else if (fVar43 <= -1.0) {
        *(undefined4 *)(param_1 + 0x5e0) = 0;
        fVar43 = (float)_atan2f();
        *(float *)(param_1 + 0x5e4) = -fVar43;
        uVar9 = 0xbfc90fdb;
      }
      else {
        uVar9 = _atan2f();
        *(undefined4 *)(param_1 + 0x5e0) = uVar9;
        uVar9 = _atan2f(-fVar56,CONCAT44(fVar43,fVar44));
        *(undefined4 *)(param_1 + 0x5e4) = uVar9;
        uVar9 = _asinf();
      }
      auVar48._8_4_ = fVar86;
      auVar48._0_8_ = CONCAT44(fVar87,fStack_50);
      auVar48._12_4_ = 0;
      uVar69 = NEON_ext(CONCAT44(fVar72,fStack_4c),CONCAT44(fVar68,fVar68),4,1);
      auVar29 = NEON_ext(auVar48,auVar48,8,1);
      uVar76 = NEON_ext(CONCAT44(fVar87,fStack_50),auVar29._0_8_,4,1);
      *(undefined4 *)(param_1 + 0x5e8) = uVar9;
      fVar43 = (float)((ulong)uVar69 >> 0x20);
      fVar58 = (float)((ulong)uVar76 >> 0x20);
      auVar16._0_4_ = fStack_50 * (float)uVar69 - fStack_4c * (float)uVar76;
      auVar16._4_4_ = fVar87 * fVar43 - fVar72 * fVar58;
      auVar16._8_4_ = fVar86 * fStack_4c - fVar68 * fStack_50;
      auVar16._12_4_ = fVar72 * 0.0 - fVar87 * 0.0;
      auVar29 = NEON_ext(auVar16,auVar16,0xc,1);
      auVar81 = NEON_ext(auVar29,auVar16,8,1);
      auVar39._0_12_ = auVar81._0_12_;
      auVar39._12_4_ = 0;
      auVar29 = NEON_ext(auVar39,auVar39,0xc,1);
      auVar53 = NEON_ext(auVar29,auVar39,8,1);
      auVar17._0_4_ = fStack_4c * auVar53._0_4_ - (float)uVar69 * auVar81._0_4_;
      auVar17._4_4_ = fVar72 * auVar53._4_4_ - fVar43 * auVar81._4_4_;
      auVar17._8_4_ = fVar68 * auVar53._8_4_ - fStack_4c * auVar81._8_4_;
      auVar17._12_4_ = auVar53._12_4_ * 0.0 - fVar72 * 0.0;
      auVar29 = NEON_ext(auVar17,auVar17,0xc,1);
      auVar29 = NEON_ext(auVar29,auVar17,8,1);
      auVar10 = auVar29._0_12_;
      auVar31._0_4_ = (float)uVar76 * auVar81._0_4_ - fStack_50 * auVar53._0_4_;
      auVar31._4_4_ = fVar58 * auVar81._4_4_ - fVar87 * auVar53._4_4_;
      auVar31._8_4_ = fStack_50 * auVar81._8_4_ - fVar86 * auVar53._8_4_;
      auVar31._12_4_ = fVar87 * 0.0 - auVar53._12_4_ * 0.0;
LAB_10982ca4c:
      auVar15._12_4_ = 0;
      auVar15._0_12_ = auVar10;
      auVar29 = NEON_ext(auVar31,auVar31,0xc,1);
      auVar29 = NEON_ext(auVar29,auVar31,8,1);
      auVar30._0_12_ = auVar29._0_12_;
      auVar30._12_4_ = 0;
      goto LAB_10982cb14;
    }
    fStack_48 = (float)*(undefined8 *)(param_1 + 0x5a8);
    if (iVar2 == 4) {
      if (1.0 <= fVar27) {
        *(undefined8 *)(param_1 + 0x5e0) = 0x3fc90fdb;
LAB_10982c6c4:
        fVar43 = (float)_atan2f(uVar77,uVar45);
      }
      else {
        if (-1.0 < fVar27) {
          uVar9 = _asinf();
          *(undefined4 *)(param_1 + 0x5e0) = uVar9;
          uVar9 = _atan2f();
          *(undefined4 *)(param_1 + 0x5e4) = uVar9;
          uVar77 = (ulong)(uint)-fVar57;
          uVar45 = (ulong)(uint)fVar26;
          goto LAB_10982c6c4;
        }
        *(undefined8 *)(param_1 + 0x5e0) = 0xbfc90fdb;
        fVar43 = (float)_atan2f(uVar77,uVar45);
        fVar43 = -fVar43;
      }
      uVar69 = NEON_ext(CONCAT44(fVar64,fVar42),uVar85,4,1);
      auVar29 = NEON_ext(auVar53,auVar53,8,1);
      uVar76 = NEON_ext(CONCAT44(fVar65,fStack_48),auVar29._0_8_,4,1);
      fVar72 = auVar5._8_4_;
      *(float *)(param_1 + 0x5e8) = fVar43;
      fVar43 = (float)((ulong)uVar76 >> 0x20);
      fVar58 = (float)((ulong)uVar69 >> 0x20);
      auVar23._0_4_ = fVar42 * (float)uVar76 - fStack_48 * (float)uVar69;
      auVar23._4_4_ = fVar64 * fVar43 - fVar65 * fVar58;
      auVar23._8_4_ = fVar62 * fStack_48 - fVar72 * fVar42;
      auVar23._12_4_ = fVar65 * 0.0 - fVar64 * 0.0;
      auVar29 = NEON_ext(auVar23,auVar23,0xc,1);
      auVar29 = NEON_ext(auVar29,auVar23,8,1);
      auVar15._0_12_ = auVar29._0_12_;
      auVar15._12_4_ = 0;
      auVar53 = NEON_ext(auVar15,auVar15,0xc,1);
      auVar81 = NEON_ext(auVar53,auVar15,8,1);
      auVar33._0_4_ = fStack_48 * auVar81._0_4_ - (float)uVar76 * auVar29._0_4_;
      auVar33._4_4_ = fVar65 * auVar81._4_4_ - fVar43 * auVar29._4_4_;
      auVar33._8_4_ = fVar72 * auVar81._8_4_ - fStack_48 * auVar29._8_4_;
      auVar33._12_4_ = auVar81._12_4_ * 0.0 - fVar65 * 0.0;
      auVar53 = NEON_ext(auVar33,auVar33,0xc,1);
      auVar53 = NEON_ext(auVar53,auVar33,8,1);
      auVar30._0_12_ = auVar53._0_12_;
      auVar30._12_4_ = 0;
      fStack_50 = (float)uVar69 * auVar29._0_4_;
      fVar58 = fVar58 * auVar29._4_4_;
      fVar67 = fVar42 * auVar29._8_4_;
      fVar43 = fVar64 * 0.0;
      fStack_4c = fVar42 * auVar81._0_4_;
      fVar72 = fVar64 * auVar81._4_4_;
      fVar68 = fVar62 * auVar81._8_4_;
      fVar65 = auVar81._12_4_ * 0.0;
      goto LAB_10982cb04;
    }
    if (iVar2 != 5) goto LAB_10982c524;
    if (1.0 <= fVar56) {
      *(undefined8 *)(param_1 + 0x5e0) = 0xbfc90fdb00000000;
      fVar43 = -fVar57;
      uVar77 = (ulong)(uint)-fVar52;
LAB_10982c684:
      fVar43 = (float)_atan2f(fVar43,uVar77);
    }
    else {
      if (-1.0 < fVar56) {
        uVar9 = _atan2f();
        *(undefined4 *)(param_1 + 0x5e0) = uVar9;
        uVar9 = _asinf();
        *(undefined4 *)(param_1 + 0x5e4) = uVar9;
        uVar77 = CONCAT44(fVar43,fVar44);
        goto LAB_10982c684;
      }
      *(undefined8 *)(param_1 + 0x5e0) = 0x3fc90fdb00000000;
      fVar43 = (float)_atan2f(CONCAT44(fVar26,fVar57),uVar77);
      fVar43 = -fVar43;
    }
    uVar69 = CONCAT44(fVar87,fStack_50);
    auVar49._8_4_ = fVar86;
    auVar49._0_8_ = uVar69;
    auVar49._12_4_ = 0;
    auVar29 = NEON_ext(auVar29,auVar29,8,1);
    uVar76 = NEON_ext(CONCAT44(fVar65,fStack_48),auVar29._0_8_,4,1);
    fVar72 = auVar10._8_4_;
    auVar29 = NEON_ext(auVar49,auVar49,8,1);
    auVar59._0_8_ = NEON_ext(uVar69,auVar29._0_8_,4,1);
    auVar59._8_8_ = uVar69;
    *(float *)(param_1 + 0x5e8) = fVar43;
    fVar58 = (float)((ulong)uVar76 >> 0x20);
    auVar19._0_4_ = fStack_48 * (float)auVar59._0_8_ - fStack_50 * (float)uVar76;
    auVar19._4_4_ = fVar65 * (float)((ulong)auVar59._0_8_ >> 0x20) - fVar87 * fVar58;
    auVar19._8_4_ = fVar72 * fStack_50 - fVar86 * fStack_48;
    auVar19._12_4_ = fVar87 * 0.0 - fVar65 * 0.0;
    auVar29 = NEON_ext(auVar19,auVar19,0xc,1);
    auVar53 = NEON_ext(auVar29,auVar19,8,1);
    auVar30._0_12_ = auVar53._0_12_;
    auVar30._12_4_ = 0;
    auVar29 = NEON_ext(auVar30,auVar30,0xc,1);
    auVar81 = NEON_ext(auVar29,auVar30,8,1);
    fVar43 = auVar81._12_4_;
    auVar20._0_4_ = (float)uVar76 * auVar53._0_4_ - fStack_48 * auVar81._0_4_;
    auVar20._4_4_ = fVar58 * auVar53._4_4_ - fVar65 * auVar81._4_4_;
    auVar20._8_4_ = fStack_48 * auVar53._8_4_ - fVar72 * auVar81._8_4_;
    auVar20._12_4_ = fVar65 * 0.0 - fVar43 * 0.0;
    auVar29 = NEON_ext(auVar20,auVar20,0xc,1);
    auVar29 = NEON_ext(auVar29,auVar20,8,1);
    auVar10 = auVar29._0_12_;
    fStack_50 = fStack_50 * auVar81._0_4_;
    fVar58 = fVar87 * auVar81._4_4_;
    fVar67 = fVar86 * auVar81._8_4_;
LAB_10982c998:
    fVar43 = fVar43 * 0.0;
    auVar15._12_4_ = 0;
    auVar15._0_12_ = auVar10;
    fStack_4c = auVar59._0_4_ * auVar30._0_4_;
    fVar72 = auVar59._4_4_ * auVar30._4_4_;
    fVar68 = auVar59._8_4_ * auVar30._8_4_;
    fVar65 = auVar59._12_4_ * auVar30._12_4_;
  }
LAB_10982cb04:
  auVar40._0_4_ = fStack_50 - fStack_4c;
  auVar40._4_4_ = fVar58 - fVar72;
  auVar40._8_4_ = fVar67 - fVar68;
  auVar40._12_4_ = fVar43 - fVar65;
  auVar29 = NEON_ext(auVar40,auVar40,0xc,1);
  auVar29 = NEON_ext(auVar29,auVar40,8,1);
  auVar39._0_12_ = auVar29._0_12_;
  auVar39._12_4_ = 0;
LAB_10982cb14:
  fVar43 = auVar15._0_4_;
  auVar50._0_4_ = fVar43 * fVar43;
  fVar58 = auVar15._4_4_;
  auVar50._4_4_ = fVar58 * fVar58;
  fVar72 = auVar15._8_4_;
  auVar50._8_4_ = fVar72 * fVar72;
  fVar65 = auVar15._12_4_;
  auVar50._12_4_ = fVar65 * fVar65;
  auVar29 = NEON_ext(auVar50,auVar50,8,1);
  fVar67 = 1.0 / SQRT(auVar50._0_4_ + auVar50._4_4_ + auVar29._0_4_);
  *(float *)(param_1 + 0x5f8) = fVar72 * fVar67;
  *(float *)(param_1 + 0x5fc) = fVar65 * fVar67;
  *(float *)(param_1 + 0x5f0) = fVar43 * fVar67;
  *(float *)(param_1 + 0x5f4) = fVar58 * fVar67;
  fVar58 = auVar30._0_4_;
  auVar24._0_4_ = fVar58 * fVar58;
  fVar72 = auVar30._4_4_;
  auVar24._4_4_ = fVar72 * fVar72;
  fVar65 = auVar30._8_4_;
  auVar24._8_4_ = fVar65 * fVar65;
  fVar67 = auVar30._12_4_;
  auVar24._12_4_ = fVar67 * fVar67;
  auVar29 = NEON_ext(auVar24,auVar24,8,1);
  fVar43 = 1.0 / SQRT(auVar29._0_4_ + auVar24._0_4_ + auVar24._4_4_);
  *(float *)(param_1 + 0x608) = fVar65 * fVar43;
  *(float *)(param_1 + 0x60c) = fVar67 * fVar43;
  *(float *)(param_1 + 0x600) = fVar58 * fVar43;
  *(float *)(param_1 + 0x604) = fVar72 * fVar43;
  fVar58 = auVar39._0_4_;
  auVar25._0_4_ = fVar58 * fVar58;
  fVar72 = auVar39._4_4_;
  auVar25._4_4_ = fVar72 * fVar72;
  fVar65 = auVar39._8_4_;
  auVar25._8_4_ = fVar65 * fVar65;
  fVar67 = auVar39._12_4_;
  auVar25._12_4_ = fVar67 * fVar67;
  auVar29 = NEON_ext(auVar25,auVar25,8,1);
  fVar43 = 1.0 / SQRT(auVar29._0_4_ + auVar25._0_4_ + auVar25._4_4_);
  *(float *)(param_1 + 0x618) = fVar65 * fVar43;
  *(float *)(param_1 + 0x61c) = fVar67 * fVar43;
  *(float *)(param_1 + 0x610) = fVar58 * fVar43;
  *(float *)(param_1 + 0x614) = fVar72 * fVar43;
  fVar43 = *(float *)(*(long *)(param_1 + 0x28) + 0x1d0);
  fVar58 = *(float *)(*(long *)(param_1 + 0x30) + 0x1d0);
  fVar72 = (float)NEON_fminnm(fVar43,fVar58);
  *(bool *)(param_1 + 0x638) = fVar72 < 1.1920929e-07;
  fVar43 = fVar43 + fVar58;
  fVar58 = fVar58 / fVar43;
  if (fVar43 <= 0.0) {
    fVar58 = 0.5;
  }
  *(float *)(param_1 + 0x630) = fVar58;
  *(float *)(param_1 + 0x634) = 1.0 - fVar58;
  return;
}



/* Entry: 10982cbcc; end: 10982ce4f;  */

void FUN_10982cbcc(long param_1,int *param_2)

{
  long lVar1;
  int iVar2;
  long lVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  long lVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  
  FUN_10982bf44(param_1,*(long *)(param_1 + 0x28) + 0x10,*(long *)(param_1 + 0x30) + 0x10);
  iVar6 = 0;
  lVar3 = 0;
  param_2[0] = 0;
  param_2[1] = 0;
  do {
    iVar2 = *(int *)(param_1 + 0x440 + lVar3 * 4);
    if (iVar2 != 0) {
      iVar5 = 2;
      if (iVar2 != 4) {
        iVar5 = 1;
      }
      iVar6 = iVar5 + iVar6;
      *param_2 = iVar6;
    }
    lVar7 = param_1 + 0x440 + lVar3;
    if (*(char *)(lVar7 + -0xc0) == '\x01') {
      iVar6 = iVar6 + 1;
      *param_2 = iVar6;
    }
    if (*(char *)(lVar7 + -0xba) == '\x01') {
      iVar6 = iVar6 + 1;
      *param_2 = iVar6;
    }
    lVar3 = lVar3 + 1;
  } while (lVar3 != 3);
  lVar3 = 0;
  lVar7 = 0x5e0;
  do {
    fVar10 = *(float *)(param_1 + lVar7);
    lVar1 = param_1 + lVar3;
    fVar13 = *(float *)(lVar1 + 0x450);
    fVar12 = *(float *)(lVar1 + 0x454);
    fVar11 = fVar10;
    if (fVar13 < fVar12) {
      if (fVar13 <= fVar10) {
        if (fVar12 < fVar10) {
          fVar8 = fVar10 - fVar12;
          _fmodf(fVar8,0x40c90fdb);
          if (-3.1415927 <= fVar8) {
            if (3.1415927 < fVar8) {
              fVar8 = fVar8 + -6.2831855;
            }
          }
          else {
            fVar8 = fVar8 + 6.2831855;
          }
          fVar9 = fVar10 - fVar13;
          _fmodf(fVar9,0x40c90fdb);
          if (-3.1415927 <= fVar9) {
            if (3.1415927 < fVar9) {
              fVar9 = fVar9 + -6.2831855;
            }
          }
          else {
            fVar9 = fVar9 + 6.2831855;
          }
          fVar11 = fVar10 + -6.2831855;
          if (ABS(fVar8) <= ABS(fVar9)) {
            fVar11 = fVar10;
          }
        }
      }
      else {
        fVar8 = fVar13 - fVar10;
        _fmodf(fVar8,0x40c90fdb);
        if (-3.1415927 <= fVar8) {
          if (3.1415927 < fVar8) {
            fVar8 = fVar8 + -6.2831855;
          }
        }
        else {
          fVar8 = fVar8 + 6.2831855;
        }
        fVar9 = fVar12 - fVar10;
        _fmodf(fVar9,0x40c90fdb);
        if (-3.1415927 <= fVar9) {
          if (3.1415927 < fVar9) {
            fVar9 = fVar9 + -6.2831855;
          }
        }
        else {
          fVar9 = fVar9 + 6.2831855;
        }
        if (ABS(fVar9) <= ABS(fVar8)) {
          fVar11 = fVar10 + 6.2831855;
        }
      }
    }
    *(float *)(lVar1 + 0x4a0) = fVar11;
    if (fVar13 <= fVar12) {
      *(float *)(lVar1 + 0x498) = fVar11 - fVar13;
      if (fVar13 == fVar12) {
        iVar2 = 1;
        uVar4 = 3;
      }
      else {
        *(float *)(param_1 + lVar3 + 0x49c) = fVar11 - fVar12;
        iVar2 = 2;
        uVar4 = 4;
      }
      *(undefined4 *)(param_1 + lVar3 + 0x4a4) = uVar4;
      iVar6 = iVar6 + iVar2;
      *param_2 = iVar6;
    }
    else {
      *(undefined4 *)(param_1 + lVar3 + 0x4a4) = 0;
      *(undefined4 *)(lVar1 + 0x498) = 0;
    }
    if (*(char *)(param_1 + lVar3 + 0x46c) == '\x01') {
      iVar6 = iVar6 + 1;
      *param_2 = iVar6;
    }
    if (*(char *)(param_1 + lVar3 + 0x480) == '\x01') {
      iVar6 = iVar6 + 1;
      *param_2 = iVar6;
    }
    lVar3 = lVar3 + 0x58;
    lVar7 = lVar7 + 4;
  } while (lVar3 != 0x108);
  return;
}



/* Entry: 10982ce50; end: 10982d263;  */

/* WARNING: Type propagation algorithm not settling */

ulong FUN_10982ce50(ulong param_1,float *param_2,long param_3,long param_4,
                   undefined1 (*param_5) [16],undefined1 (*param_6) [16],undefined1 (*param_7) [16],
                   undefined1 (*param_8) [16])

{
  bool bVar1;
  long lVar2;
  float *pfVar3;
  long lVar4;
  long lVar5;
  float *pfVar6;
  undefined1 (*pauVar7) [16];
  char cVar8;
  undefined8 *puVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 (**ppauVar16) [16];
  undefined4 uVar17;
  undefined8 *puVar18;
  ulong uVar19;
  long lVar20;
  long lVar21;
  uint uVar22;
  undefined4 *puVar23;
  long lVar24;
  ulong uVar25;
  int iVar26;
  int iVar27;
  ulong uVar28;
  long lVar29;
  long lVar30;
  ulong uVar31;
  float fVar32;
  float fVar33;
  undefined4 uVar34;
  undefined8 uVar35;
  undefined1 auVar36 [16];
  undefined4 uVar37;
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  float fVar41;
  float fVar42;
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  float fVar47;
  float fVar49;
  float fVar50;
  undefined1 auVar48 [16];
  float fVar51;
  undefined1 auVar52 [16];
  float fVar53;
  float fVar54;
  float fVar55;
  float fVar56;
  float fVar57;
  float fVar58;
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  undefined8 uVar64;
  undefined1 (*pauStack_1a8) [16];
  undefined1 (*pauStack_1a0) [16];
  undefined4 uStack_194;
  float *pfStack_110;
  int iStack_108;
  float *pfStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined4 uStack_e0;
  float fStack_dc;
  undefined4 uStack_d8;
  byte bStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined1 uStack_c8;
  undefined4 uStack_c4;
  char cStack_c0;
  undefined4 uStack_bc;
  undefined1 uStack_b8;
  undefined4 uStack_b4;
  undefined1 uStack_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  int iStack_9c;
  float afStack_90 [2];
  ulong uStack_88;
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar21 = *(long *)(param_1 + 0x28);
  lVar24 = *(long *)(param_1 + 0x30);
  uStack_88 = CONCAT44(uStack_88._4_4_,2);
  afStack_90[0] = 0.0;
  afStack_90[1] = 1.4013e-45;
  uVar19 = (ulong)*(uint *)(param_1 + 0x558);
  if (*(uint *)(param_1 + 0x558) < 6) {
    afStack_90[1] = (float)*(undefined4 *)(&UNK_10e00236c + uVar19 * 4);
    afStack_90[0] = (float)*(undefined4 *)(&UNK_10e002354 + uVar19 * 4);
    uStack_88 = CONCAT44(uStack_88._4_4_,*(undefined4 *)(&UNK_10e002384 + uVar19 * 4));
  }
  lVar29 = 0;
  iVar26 = 0;
  lVar2 = param_1 + 0x450;
  pfVar3 = param_2 + 1;
  uVar19 = param_1;
  do {
    iVar27 = *(int *)((long)afStack_90 + lVar29);
    puVar18 = (undefined8 *)(lVar2 + (long)iVar27 * 0x58);
    if (((*(int *)((long)puVar18 + 0x54) != 0) || ((*(byte *)((long)puVar18 + 0x1c) & 1) != 0)) ||
       (*(char *)(puVar18 + 6) == '\x01')) {
      puVar9 = (undefined8 *)(param_1 + 0x5f0 + (long)iVar27 * 0x10);
      uStack_f0 = *puVar9;
      uStack_e8 = puVar9[1];
      uVar22 = *(int *)(param_1 + 0x63c) >> (iVar27 * 4 + 0xcU & 0x1f);
      if ((uVar22 & 1) == 0) {
        *(undefined4 *)(puVar18 + 2) = **(undefined4 **)(param_2 + 0xe);
      }
      if ((uVar22 >> 1 & 1) == 0) {
        *(float *)((long)puVar18 + 0xc) = *pfVar3;
      }
      if ((uVar22 >> 2 & 1) == 0) {
        *(undefined4 *)(puVar18 + 3) = **(undefined4 **)(param_2 + 0xe);
      }
      if ((uVar22 >> 3 & 1) == 0) {
        *(float *)((long)puVar18 + 0x14) = *pfVar3;
      }
      uStack_f8 = 1;
      pfStack_100 = (float *)&uStack_f0;
      param_3 = lVar21 + 0x10;
      param_4 = lVar24 + 0x10;
      param_5 = (undefined1 (*) [16])(lVar21 + 0x1b0);
      param_6 = (undefined1 (*) [16])(lVar24 + 0x1b0);
      param_7 = (undefined1 (*) [16])(lVar21 + 0x1c0);
      param_8 = (undefined1 (*) [16])(lVar24 + 0x1c0);
      uVar19 = param_1;
      FUN_10982d264();
      pfStack_110 = param_2;
      iStack_108 = iVar26;
      iVar26 = (int)uVar19 + iVar26;
    }
    lVar29 = lVar29 + 4;
  } while (lVar29 != 0xc);
  lVar30 = 0;
  lVar29 = 0;
  uVar31 = 0xffffffff;
  do {
    lVar4 = param_1 + lVar29;
    lVar5 = param_1 + lVar30;
    cVar8 = *(char *)(lVar5 + 0x386);
    if ((*(int *)(lVar4 + 0x440) == 0) && ((*(byte *)(lVar5 + 0x380) & 1) == 0)) {
      if (cVar8 != '\0') {
        cVar8 = '\x01';
        goto LAB_10982d008;
      }
    }
    else {
LAB_10982d008:
      cStack_c0 = cVar8;
      uStack_a0 = *(undefined4 *)(lVar4 + 0x430);
      uStack_a8 = *(undefined4 *)(lVar4 + 0x410);
      uStack_a4 = *(undefined4 *)(lVar4 + 0x420);
      uStack_c8 = *(undefined1 *)(lVar5 + 899);
      uStack_c4 = *(undefined4 *)(lVar4 + 0x390);
      uStack_bc = *(undefined4 *)(lVar4 + 0x3a0);
      uStack_b8 = *(undefined1 *)(lVar5 + 0x3b0);
      uStack_b4 = *(undefined4 *)(lVar4 + 0x3c0);
      uStack_b0 = *(undefined1 *)(lVar5 + 0x3d0);
      uStack_ac = *(undefined4 *)(lVar4 + 0x3e0);
      uStack_f0 = CONCAT44(*(undefined4 *)(lVar4 + 800),*(undefined4 *)(lVar4 + 0x310));
      uStack_cc = *(undefined4 *)(lVar4 + 0x400);
      uStack_d0 = *(undefined4 *)(lVar4 + 0x3f0);
      afStack_90[1] = (float)*(undefined4 *)(lVar4 + 0x570);
      afStack_90[0] = (float)*(undefined4 *)(lVar4 + 0x560);
      uVar22 = *(int *)(param_1 + 0x63c) >> ((uint)lVar29 & 0x1f);
      uStack_88 = (ulong)*(uint *)(lVar4 + 0x580);
      if ((uVar22 & 1) == 0) {
        puVar23 = *(undefined4 **)(param_2 + 0xe);
      }
      else {
        puVar23 = (undefined4 *)(param_1 + lVar29 + 0x350);
      }
      uStack_e0 = *puVar23;
      pfVar6 = pfVar3;
      if ((uVar22 & 2) != 0) {
        pfVar6 = (float *)(param_1 + lVar29 + 0x340);
      }
      uStack_e8 = CONCAT44(*pfVar6,*(undefined4 *)(lVar4 + 0x330));
      if ((uVar22 >> 2 & 1) == 0) {
        puVar23 = *(undefined4 **)(param_2 + 0xe);
      }
      else {
        puVar23 = (undefined4 *)(param_1 + lVar29 + 0x370);
      }
      uStack_d8 = *puVar23;
      pfVar6 = pfVar3;
      if ((uVar22 & 8) != 0) {
        pfVar6 = (float *)(param_1 + lVar29 + 0x360);
      }
      fStack_dc = *pfVar6;
      lVar20 = 0;
      if (lVar29 != 8) {
        lVar20 = lVar30 + 1;
      }
      lVar20 = lVar2 + lVar20 * 0x58;
      iVar27 = *(int *)(lVar20 + 0x54);
      if (iVar27 - 1U < 2) {
LAB_10982d13c:
        bVar1 = true;
      }
      else {
        if (iVar27 == 4) {
          if (*(float *)(lVar20 + 0x48) < -0.001) goto LAB_10982d13c;
          fVar32 = *(float *)(lVar20 + 0x4c);
        }
        else {
          if (iVar27 != 3) {
            bVar1 = false;
            goto LAB_10982d15c;
          }
          fVar32 = ABS(*(float *)(lVar20 + 0x48));
        }
        bVar1 = 0.001 < fVar32;
      }
LAB_10982d15c:
      uVar19 = 2;
      if (lVar29 != 0) {
        uVar19 = uVar31 & 0xffffffff;
      }
      lVar20 = lVar2 + uVar19 * 0x58;
      iVar27 = *(int *)(lVar20 + 0x54);
      if (iVar27 - 1U < 2) {
LAB_10982d1bc:
        uVar22 = 0;
      }
      else {
        if (iVar27 == 4) {
          if (-0.001 <= *(float *)(lVar20 + 0x48)) {
            fVar32 = *(float *)(lVar20 + 0x4c);
            goto LAB_10982d1b0;
          }
          goto LAB_10982d1bc;
        }
        if (iVar27 == 3) {
          fVar32 = ABS(*(float *)(lVar20 + 0x48));
LAB_10982d1b0:
          if (0.001 < fVar32) goto LAB_10982d1bc;
        }
        uVar22 = 1;
      }
      if (!bVar1) {
        uVar22 = 1;
      }
      pfStack_100 = afStack_90;
      puVar18 = &uStack_f0;
      param_3 = lVar21 + 0x10;
      param_4 = lVar24 + 0x10;
      param_5 = (undefined1 (*) [16])(lVar21 + 0x1b0);
      param_6 = (undefined1 (*) [16])(lVar24 + 0x1b0);
      param_7 = (undefined1 (*) [16])(lVar21 + 0x1c0);
      param_8 = (undefined1 (*) [16])(lVar24 + 0x1c0);
      uStack_f8 = (ulong)uVar22 << 0x20;
      uVar19 = param_1;
      bStack_d4 = *(byte *)(lVar5 + 0x380);
      iStack_9c = *(int *)(lVar4 + 0x440);
      FUN_10982d264();
      pfStack_110 = param_2;
      iStack_108 = iVar26;
      iVar26 = (int)uVar19 + iVar26;
    }
    uVar31 = uVar31 + 1;
    lVar29 = lVar29 + 4;
    lVar30 = lVar30 + 1;
  } while (lVar29 != 0xc);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
    return uVar19;
  }
  ___stack_chk_fail();
  pauStack_1a8 = param_5;
  pauStack_1a0 = param_7;
  uStack_194 = uStack_f8._4_4_;
  uVar25 = uStack_f8 & 0xffffffff;
  uVar31 = (long)(int)pfStack_110[10] * (long)iStack_108;
  if (*(int *)((long)puVar18 + 0x54) == 3) {
    FUN_10982dba4(uVar19,param_3,param_4,pfStack_110,uVar31,pfStack_100,uVar25,uStack_f8._4_4_);
    uVar28 = 1;
    iVar26 = -1;
    if ((int)uStack_f8 == 0) {
      iVar26 = 1;
    }
    *(float *)(*(long *)(pfStack_110 + 0xc) + uVar31 * 4) =
         *pfStack_110 * *(float *)((long)puVar18 + 0xc) * *(float *)(puVar18 + 9) * (float)iVar26;
    lVar21 = *(long *)(pfStack_110 + 0x12);
    *(undefined4 *)(*(long *)(pfStack_110 + 0x10) + uVar31 * 4) = 0xff7fffff;
    *(undefined4 *)(lVar21 + uVar31 * 4) = 0x7f7fffff;
LAB_10982d57c:
    *(undefined4 *)(*(long *)(pfStack_110 + 0xe) + uVar31 * 4) = *(undefined4 *)(puVar18 + 2);
    uVar31 = (ulong)(uint)((int)pfStack_110[10] + (int)uVar31);
  }
  else {
    if (*(int *)((long)puVar18 + 0x54) == 4) {
      fVar32 = 1.0;
      ppauVar16 = &pauStack_1a8;
      if ((int)uStack_f8 != 0) {
        fVar32 = -1.0;
        ppauVar16 = &pauStack_1a0;
      }
      pauVar7 = *ppauVar16;
      auVar40._0_4_ = *pfStack_100 * *(float *)*pauVar7;
      auVar40._4_4_ = pfStack_100[1] * *(float *)(*pauVar7 + 4);
      auVar40._8_4_ = pfStack_100[2] * *(float *)(*pauVar7 + 8);
      auVar40._12_4_ = pfStack_100[3] * *(float *)(*pauVar7 + 0xc);
      auVar38 = NEON_ext(auVar40,auVar40,8,1);
      pauVar7 = param_6;
      if ((int)uStack_f8 != 0) {
        pauVar7 = param_8;
      }
      auVar63._0_4_ = *pfStack_100 * *(float *)*pauVar7;
      auVar63._4_4_ = pfStack_100[1] * *(float *)(*pauVar7 + 4);
      auVar63._8_4_ = pfStack_100[2] * *(float *)(*pauVar7 + 8);
      auVar63._12_4_ = pfStack_100[3] * *(float *)(*pauVar7 + 0xc);
      auVar36 = NEON_ext(auVar63,auVar63,8,1);
      uVar35 = CONCAT44((auVar40._0_4_ + auVar40._4_4_ + auVar38._4_4_) -
                        (auVar63._0_4_ + auVar63._4_4_ + auVar36._4_4_),
                        (auVar40._0_4_ + auVar40._4_4_ + auVar38._0_4_) -
                        (auVar63._0_4_ + auVar63._4_4_ + auVar36._0_4_));
      uVar64 = 0;
      FUN_10982dba4(uVar19,param_3,param_4,pfStack_110,uVar31,pfStack_100,uVar25,uStack_f8._4_4_,
                    uVar35,0);
      fVar41 = fVar32 * *pfStack_110 * *(float *)((long)puVar18 + 0xc) * *(float *)(puVar18 + 9);
      lVar24 = *(long *)(pfStack_110 + 0xc);
      iVar26 = (int)uVar31;
      lVar21 = (long)iVar26;
      *(float *)(lVar24 + (long)iVar26 * 4) = fVar41;
      fVar42 = (float)uVar35;
      fVar33 = fVar41 - fVar42 * *(float *)((long)puVar18 + 0xc);
      if ((int)uStack_f8 == 0) {
        if (0.0 <= fVar33) {
          uVar34 = 0;
          uVar37 = 0xff7fffff;
        }
        else {
          fVar33 = -(*(float *)(puVar18 + 1) * fVar42);
          uVar34 = 0;
          uVar37 = 0xff7fffff;
          uVar17 = 0xff7fffff;
          if (fVar33 < fVar41) goto LAB_10982d460;
        }
      }
      else if (fVar33 <= 0.0) {
        uVar37 = 0;
        uVar34 = 0x7f7fffff;
      }
      else {
        fVar33 = -(*(float *)(puVar18 + 1) * fVar42);
        uVar37 = 0;
        uVar34 = 0x7f7fffff;
        uVar17 = 0;
        if (fVar41 < fVar33) {
LAB_10982d460:
          uVar37 = uVar17;
          *(float *)(lVar24 + lVar21 * 4) = fVar33;
        }
      }
      lVar24 = *(long *)(pfStack_110 + 0xe);
      *(undefined4 *)(*(long *)(pfStack_110 + 0x10) + lVar21 * 4) = uVar37;
      *(undefined4 *)(*(long *)(pfStack_110 + 0x12) + lVar21 * 4) = uVar34;
      *(undefined4 *)(lVar24 + lVar21 * 4) = *(undefined4 *)(puVar18 + 2);
      uVar31 = (long)(int)pfStack_110[10] + (long)iVar26;
      FUN_10982dba4(uVar19,param_3,param_4,pfStack_110,uVar31,pfStack_100,uVar25,uStack_194,uVar35,
                    uVar64);
      fVar32 = fVar32 * *pfStack_110 * *(float *)((long)puVar18 + 0xc) *
                        *(float *)((long)puVar18 + 0x4c);
      lVar21 = *(long *)(pfStack_110 + 0xc);
      *(float *)(lVar21 + uVar31 * 4) = fVar32;
      fVar33 = fVar32 + *(float *)((long)puVar18 + 0xc) * -fVar42;
      if ((int)uStack_f8 == 0) {
        if (fVar33 <= 0.0) {
          uVar37 = 0;
          uVar34 = 0x7f7fffff;
        }
        else {
          fVar33 = -(*(float *)(puVar18 + 1) * (float)uVar35);
          uVar37 = 0;
          uVar34 = 0x7f7fffff;
          uVar17 = 0;
          if (fVar32 < fVar33) goto LAB_10982d548;
        }
      }
      else if (0.0 <= fVar33) {
        uVar34 = 0;
        uVar37 = 0xff7fffff;
      }
      else {
        fVar33 = -(*(float *)(puVar18 + 1) * (float)uVar35);
        uVar34 = 0;
        uVar37 = 0xff7fffff;
        uVar17 = 0xff7fffff;
        if (fVar33 < fVar32) {
LAB_10982d548:
          uVar37 = uVar17;
          *(float *)(lVar21 + uVar31 * 4) = fVar33;
        }
      }
      lVar21 = *(long *)(pfStack_110 + 0x12);
      *(undefined4 *)(*(long *)(pfStack_110 + 0x10) + uVar31 * 4) = uVar37;
      *(undefined4 *)(lVar21 + uVar31 * 4) = uVar34;
      uVar28 = 2;
      goto LAB_10982d57c;
    }
    uVar28 = 0;
  }
  if (*(char *)((long)puVar18 + 0x1c) == '\x01') {
    if ((*(byte *)(puVar18 + 5) & 1) == 0) {
      FUN_10982dba4(uVar19,param_3,param_4,pfStack_110,uVar31,pfStack_100,uVar25,uStack_194);
      fVar33 = *(float *)(puVar18 + 4);
      fVar32 = (float)FUN_109833c10(uVar19);
      lVar21 = *(long *)(pfStack_110 + 0xe);
      iVar26 = (int)uVar31;
      *(float *)(*(long *)(pfStack_110 + 0xc) + (long)iVar26 * 4) = fVar33 * fVar32;
      lVar24 = *(long *)(pfStack_110 + 0x12);
      *(float *)(*(long *)(pfStack_110 + 0x10) + (long)iVar26 * 4) =
           -*(float *)((long)puVar18 + 0x24) / *pfStack_110;
      *(float *)(lVar24 + (long)iVar26 * 4) = *(float *)((long)puVar18 + 0x24) / *pfStack_110;
      *(undefined4 *)(lVar21 + (long)iVar26 * 4) = *(undefined4 *)(puVar18 + 3);
      uVar31 = (ulong)(uint)((int)pfStack_110[10] + iVar26);
      uVar28 = (ulong)((int)uVar28 + 1);
      if ((*(char *)((long)puVar18 + 0x1c) != '\x01') || (*(char *)(puVar18 + 5) != '\x01'))
      goto LAB_10982d7b4;
    }
    fVar32 = *(float *)(puVar18 + 10) - *(float *)((long)puVar18 + 0x2c);
    if ((int)uStack_f8 != 0) {
      fVar33 = fVar32 + -6.2831855;
      if (fVar32 <= 3.1415927) {
        fVar33 = fVar32;
      }
      fVar32 = fVar33;
      if (fVar32 < -3.1415927) {
        fVar32 = fVar32 + 6.2831855;
      }
    }
    FUN_10982dba4(uVar19,param_3,param_4,pfStack_110,uVar31,pfStack_100,uVar25,uStack_194);
    fVar33 = -*(float *)(puVar18 + 4);
    if (0.0 <= fVar32) {
      fVar33 = *(float *)(puVar18 + 4);
    }
    if (fVar32 == 0.0) {
      fVar32 = 0.0;
    }
    else {
      fVar32 = (float)FUN_109833c10(uVar19);
    }
    iVar26 = -1;
    if ((int)uStack_f8 == 0) {
      iVar26 = 1;
    }
    lVar21 = *(long *)(pfStack_110 + 0xe);
    iVar27 = (int)uVar31;
    *(float *)(*(long *)(pfStack_110 + 0xc) + (long)iVar27 * 4) = fVar33 * fVar32 * (float)iVar26;
    lVar24 = *(long *)(pfStack_110 + 0x12);
    *(float *)(*(long *)(pfStack_110 + 0x10) + (long)iVar27 * 4) =
         -*(float *)((long)puVar18 + 0x24) / *pfStack_110;
    *(float *)(lVar24 + (long)iVar27 * 4) = *(float *)((long)puVar18 + 0x24) / *pfStack_110;
    *(undefined4 *)(lVar21 + (long)iVar27 * 4) = *(undefined4 *)(puVar18 + 3);
    uVar31 = (ulong)(uint)((int)pfStack_110[10] + iVar27);
    uVar28 = (ulong)((int)uVar28 + 1);
  }
LAB_10982d7b4:
  if (*(char *)(puVar18 + 6) == '\x01') {
    fVar32 = *(float *)(puVar18 + 10);
    fVar33 = *(float *)((long)puVar18 + 0x44);
    FUN_10982dba4(uVar19,param_3,param_4,pfStack_110,uVar31,pfStack_100,uVar25,uStack_194);
    if ((int)uStack_f8 == 0) {
      auVar38._0_4_ = *(float *)(uVar19 + 0x590) - *(float *)(param_3 + 0x30);
      auVar38._4_4_ = *(float *)(uVar19 + 0x594) - *(float *)(param_3 + 0x34);
      auVar38._8_4_ = *(float *)(uVar19 + 0x598) - *(float *)(param_3 + 0x38);
      auVar38._12_4_ = 0;
      auVar40 = *pauStack_1a0;
      auVar63 = NEON_ext(auVar40,auVar40,0xc,1);
      auVar63 = NEON_ext(auVar63,auVar40,8,1);
      auVar36 = NEON_ext(auVar38,auVar38,0xc,1);
      auVar52 = NEON_ext(auVar36,auVar38,8,1);
      auVar36._0_4_ = auVar40._0_4_ * auVar52._0_4_ - auVar63._0_4_ * auVar38._0_4_;
      auVar36._4_4_ = auVar40._4_4_ * auVar52._4_4_ - auVar63._4_4_ * auVar38._4_4_;
      auVar36._8_4_ = auVar40._8_4_ * auVar52._8_4_ - auVar63._8_4_ * auVar38._8_4_;
      auVar36._12_4_ = auVar40._12_4_ * auVar52._12_4_ - auVar63._12_4_ * 0.0;
      auVar40 = NEON_ext(auVar36,auVar36,0xc,1);
      auVar38 = NEON_ext(auVar40,auVar36,8,1);
      auVar44._0_4_ = *(float *)(uVar19 + 0x5d0) - *(float *)(param_4 + 0x30);
      auVar44._4_4_ = *(float *)(uVar19 + 0x5d4) - *(float *)(param_4 + 0x34);
      auVar44._8_4_ = *(float *)(uVar19 + 0x5d8) - *(float *)(param_4 + 0x38);
      auVar44._12_4_ = 0;
      auVar40 = *param_8;
      auVar63 = NEON_ext(auVar40,auVar40,0xc,1);
      auVar63 = NEON_ext(auVar63,auVar40,8,1);
      auVar36 = NEON_ext(auVar44,auVar44,0xc,1);
      auVar36 = NEON_ext(auVar36,auVar44,8,1);
      auVar45._0_4_ = auVar40._0_4_ * auVar36._0_4_ - auVar63._0_4_ * auVar44._0_4_;
      auVar45._4_4_ = auVar40._4_4_ * auVar36._4_4_ - auVar63._4_4_ * auVar44._4_4_;
      auVar45._8_4_ = auVar40._8_4_ * auVar36._8_4_ - auVar63._8_4_ * auVar44._8_4_;
      auVar45._12_4_ = auVar40._12_4_ * auVar36._12_4_ - auVar63._12_4_ * 0.0;
      auVar40 = NEON_ext(auVar45,auVar45,0xc,1);
      auVar63 = NEON_ext(auVar40,auVar45,8,1);
      auVar52._0_4_ = *pfStack_100 * (*(float *)*pauStack_1a8 + auVar38._0_4_);
      auVar52._4_4_ = pfStack_100[1] * (*(float *)(*pauStack_1a8 + 4) + auVar38._4_4_);
      auVar52._8_4_ = pfStack_100[2] * (*(float *)(*pauStack_1a8 + 8) + auVar38._8_4_);
      auVar52._12_4_ = pfStack_100[3] * (*(float *)(*pauStack_1a8 + 0xc) + 0.0);
      auVar40 = NEON_ext(auVar52,auVar52,8,1);
      auVar46._0_4_ = *pfStack_100 * (*(float *)*param_6 + auVar63._0_4_);
      auVar46._4_4_ = pfStack_100[1] * (*(float *)(*param_6 + 4) + auVar63._4_4_);
      auVar46._8_4_ = pfStack_100[2] * (*(float *)(*param_6 + 8) + auVar63._8_4_);
      auVar46._12_4_ = pfStack_100[3] * (*(float *)(*param_6 + 0xc) + 0.0);
      auVar38 = NEON_ext(auVar46,auVar46,8,1);
      fVar41 = (auVar52._0_4_ + auVar52._4_4_ + auVar40._0_4_) -
               (auVar46._0_4_ + auVar46._4_4_ + auVar38._0_4_);
      fVar51 = *(float *)(*(long *)(uVar19 + 0x28) + 0x1d0);
      fVar42 = 1.0 / fVar51;
      fVar53 = *(float *)(*(long *)(uVar19 + 0x30) + 0x1d0);
      fVar47 = 1.0 / fVar53;
    }
    else {
      fVar56 = (float)*(undefined8 *)(pfStack_100 + 2);
      fVar58 = (float)((ulong)*(undefined8 *)(pfStack_100 + 2) >> 0x20);
      fVar54 = (float)*(undefined8 *)pfStack_100;
      fVar55 = (float)((ulong)*(undefined8 *)pfStack_100 >> 0x20);
      auVar39._0_4_ = *(float *)*pauStack_1a0 * fVar54;
      auVar39._4_4_ = *(float *)(*pauStack_1a0 + 4) * fVar55;
      auVar39._8_4_ = *(float *)(*pauStack_1a0 + 8) * fVar56;
      auVar39._12_4_ = *(float *)(*pauStack_1a0 + 0xc) * fVar58;
      auVar40 = NEON_ext(auVar39,auVar39,8,1);
      auVar43._0_4_ = fVar54 * *(float *)*param_8;
      auVar43._4_4_ = fVar55 * *(float *)(*param_8 + 4);
      auVar43._8_4_ = fVar56 * *(float *)(*param_8 + 8);
      auVar43._12_4_ = fVar58 * *(float *)(*param_8 + 0xc);
      auVar38 = NEON_ext(auVar43,auVar43,8,1);
      fVar41 = (auVar39._0_4_ + auVar39._4_4_ + auVar40._0_4_) -
               (auVar43._0_4_ + auVar43._4_4_ + auVar38._0_4_);
      lVar21 = *(long *)(uVar19 + 0x28);
      lVar24 = *(long *)(uVar19 + 0x30);
      fVar51 = *(float *)(lVar21 + 0x1d0);
      fVar42 = 1.0 / fVar51;
      fVar53 = *(float *)(lVar24 + 0x1d0);
      if (fVar51 != 0.0) {
        fVar47 = *(float *)(uVar19 + 0x590) - (float)*(undefined8 *)(param_3 + 0x30);
        fVar49 = *(float *)(uVar19 + 0x594) -
                 (float)((ulong)*(undefined8 *)(param_3 + 0x30) >> 0x20);
        fVar50 = *(float *)(uVar19 + 0x598) - (float)*(undefined8 *)(param_3 + 0x38);
        auVar48._0_4_ = fVar47 * fVar47;
        auVar48._4_4_ = fVar49 * fVar49;
        auVar48._8_4_ = fVar50 * fVar50;
        auVar48._12_4_ = 0;
        auVar40 = NEON_ext(auVar48,auVar48,8,1);
        fVar47 = fVar54 * (float)*(undefined8 *)(lVar21 + 0x180);
        fVar49 = fVar55 * (float)((ulong)*(undefined8 *)(lVar21 + 0x180) >> 0x20);
        fVar50 = fVar56 * (float)*(undefined8 *)(lVar21 + 0x188);
        fVar57 = fVar58 * (float)((ulong)*(undefined8 *)(lVar21 + 0x188) >> 0x20);
        auVar59._0_4_ = fVar54 * *(float *)(lVar21 + 400);
        auVar59._4_4_ = fVar55 * *(float *)(lVar21 + 0x194);
        auVar59._8_4_ = fVar56 * *(float *)(lVar21 + 0x198);
        auVar59._12_4_ = fVar58 * *(float *)(lVar21 + 0x19c);
        auVar61._0_4_ = fVar54 * *(float *)(lVar21 + 0x1a0);
        auVar61._4_4_ = fVar55 * *(float *)(lVar21 + 0x1a4);
        auVar61._8_4_ = fVar56 * *(float *)(lVar21 + 0x1a8);
        auVar12._4_4_ = fVar49;
        auVar12._0_4_ = fVar47;
        auVar12._8_4_ = fVar50;
        auVar12._12_4_ = fVar57;
        auVar13._4_4_ = fVar49;
        auVar13._0_4_ = fVar47;
        auVar13._8_4_ = fVar50;
        auVar13._12_4_ = fVar57;
        auVar38 = NEON_ext(auVar12,auVar13,8,1);
        auVar63 = NEON_ext(auVar59,auVar59,8,1);
        auVar61._12_4_ = 0;
        fVar49 = fVar47 + fVar49 + auVar38._0_4_;
        fVar50 = auVar59._0_4_ + auVar59._4_4_ + auVar63._0_4_;
        auVar38 = NEON_ext(auVar61,auVar61,8,1);
        fVar47 = auVar61._0_4_ + auVar61._4_4_ + auVar38._0_4_ + auVar38._4_4_;
        fVar42 = 1.0 / SQRT(fVar49 * fVar49 + fVar50 * fVar50 + fVar47 * fVar47) +
                 (auVar48._0_4_ + auVar48._4_4_ + auVar40._0_4_) * fVar42;
      }
      fVar47 = 1.0 / fVar53;
      if (fVar53 != 0.0) {
        fVar49 = (float)*(undefined8 *)(uVar19 + 0x5d0) - *(float *)(param_4 + 0x30);
        fVar50 = (float)((ulong)*(undefined8 *)(uVar19 + 0x5d0) >> 0x20) -
                 *(float *)(param_4 + 0x34);
        fVar57 = (float)*(undefined8 *)(uVar19 + 0x5d8) - *(float *)(param_4 + 0x38);
        fVar49 = fVar49 * fVar49;
        fVar50 = fVar50 * fVar50;
        fVar57 = fVar57 * fVar57;
        auVar14._4_4_ = fVar50;
        auVar14._0_4_ = fVar49;
        auVar14._8_4_ = fVar57;
        auVar14._12_4_ = 0;
        auVar15._4_4_ = fVar50;
        auVar15._0_4_ = fVar49;
        auVar15._8_4_ = fVar57;
        auVar15._12_4_ = 0;
        auVar40 = NEON_ext(auVar14,auVar15,8,1);
        auVar60._0_4_ = fVar54 * *(float *)(lVar24 + 0x180);
        auVar60._4_4_ = fVar55 * *(float *)(lVar24 + 0x184);
        auVar60._8_4_ = fVar56 * *(float *)(lVar24 + 0x188);
        auVar60._12_4_ = fVar58 * *(float *)(lVar24 + 0x18c);
        auVar62._0_4_ = fVar54 * *(float *)(lVar24 + 400);
        auVar62._4_4_ = fVar55 * *(float *)(lVar24 + 0x194);
        auVar62._8_4_ = fVar56 * *(float *)(lVar24 + 0x198);
        auVar62._12_4_ = fVar58 * *(float *)(lVar24 + 0x19c);
        fVar54 = fVar54 * *(float *)(lVar24 + 0x1a0);
        fVar55 = fVar55 * *(float *)(lVar24 + 0x1a4);
        fVar56 = fVar56 * *(float *)(lVar24 + 0x1a8);
        auVar38 = NEON_ext(auVar60,auVar60,8,1);
        auVar63 = NEON_ext(auVar62,auVar62,8,1);
        fVar58 = auVar60._0_4_ + auVar60._4_4_ + auVar38._0_4_;
        fVar57 = auVar62._0_4_ + auVar62._4_4_ + auVar63._0_4_;
        auVar10._4_4_ = fVar55;
        auVar10._0_4_ = fVar54;
        auVar10._8_4_ = fVar56;
        auVar10._12_4_ = 0;
        auVar11._4_4_ = fVar55;
        auVar11._0_4_ = fVar54;
        auVar11._8_4_ = fVar56;
        auVar11._12_4_ = 0;
        auVar38 = NEON_ext(auVar10,auVar11,8,1);
        fVar54 = fVar54 + fVar55 + auVar38._0_4_ + auVar38._4_4_;
        fVar47 = 1.0 / SQRT(fVar58 * fVar58 + fVar57 * fVar57 + fVar54 * fVar54) +
                 (fVar49 + fVar50 + auVar40._0_4_) * fVar47;
      }
    }
    fVar54 = fVar47;
    if ((fVar51 != 0.0) && (fVar54 = fVar42, fVar53 != 0.0)) {
      fVar54 = (fVar42 * fVar47) / (fVar42 + fVar47);
    }
    fVar47 = *(float *)((long)puVar18 + 0x34);
    fVar42 = 1.0 / *pfStack_110;
    if ((*(char *)(puVar18 + 7) == '\x01') && (0.25 < fVar42 * SQRT(fVar47 / fVar54))) {
      fVar47 = ((1.0 / fVar42) / fVar42) * 0.0625 * fVar54;
    }
    fVar51 = fVar54 / fVar42;
    if ((*(byte *)(puVar18 + 8) & fVar54 < *(float *)((long)puVar18 + 0x3c) * fVar42) == 0) {
      fVar51 = *(float *)((long)puVar18 + 0x3c);
    }
    iVar26 = -1;
    if ((int)uStack_f8 == 0) {
      iVar26 = 1;
    }
    fVar53 = (float)iVar26;
    fVar51 = fVar42 * -(fVar51 * fVar41) * fVar53;
    fVar32 = fVar42 * (fVar32 - fVar33) * fVar47 + fVar51;
    if ((*(byte *)(uVar19 + 0x63e) & 1) == 0) {
      fVar41 = fVar41 + fVar53 * (fVar32 / fVar54);
    }
    else {
      fVar41 = -3.4028235e+38;
      if (0.0 <= fVar32) {
        fVar41 = 3.4028235e+38;
      }
      fVar41 = fVar41 * fVar53;
    }
    lVar21 = (long)(int)uVar31;
    *(float *)(*(long *)(pfStack_110 + 0xc) + (long)(int)uVar31 * 4) = fVar41;
    fVar33 = fVar51;
    if (fVar51 <= fVar32) {
      fVar33 = fVar32;
      fVar32 = fVar51;
    }
    if ((int)uStack_f8 == 0) {
      fVar41 = 0.0;
      if (fVar32 <= 0.0) {
        fVar41 = fVar32;
      }
      *(float *)(*(long *)(pfStack_110 + 0x10) + lVar21 * 4) = fVar41;
    }
    else {
      fVar41 = 0.0;
      if (-0.0 <= fVar33) {
        fVar41 = -fVar33;
      }
      *(float *)(*(long *)(pfStack_110 + 0x10) + lVar21 * 4) = fVar41;
      fVar33 = -fVar32;
    }
    fVar32 = 0.0;
    if (0.0 <= fVar33) {
      fVar32 = fVar33;
    }
    *(float *)(*(long *)(pfStack_110 + 0x12) + lVar21 * 4) = fVar32;
    *(undefined4 *)(*(long *)(pfStack_110 + 0xe) + lVar21 * 4) = 0;
    uVar28 = (ulong)((int)uVar28 + 1);
  }
  return uVar28;
}



/* Entry: 10982d264; end: 10982dba3;  */

int FUN_10982d264(long param_1,long param_2,long param_3,long param_4,undefined1 (*param_5) [16],
                 undefined1 (*param_6) [16],undefined1 (*param_7) [16],undefined1 (*param_8) [16],
                 float *param_9,int param_10,undefined4 param_11,float *param_12,int param_13,
                 undefined4 param_14)

{
  undefined1 (*pauVar1) [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 (**ppauVar8) [16];
  undefined4 uVar9;
  long lVar10;
  long lVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  ulong uVar15;
  float fVar16;
  undefined4 uVar17;
  undefined8 uVar18;
  undefined1 auVar19 [16];
  undefined4 uVar20;
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  float fVar24;
  float fVar25;
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  float fVar30;
  float fVar31;
  float fVar33;
  float fVar34;
  undefined1 auVar32 [16];
  float fVar35;
  undefined1 auVar36 [16];
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined8 uVar48;
  undefined1 (*pauStack_98) [16];
  undefined1 (*pauStack_90) [16];
  undefined4 uStack_84;
  
  pauStack_98 = param_5;
  pauStack_90 = param_7;
  uStack_84 = param_14;
  uVar15 = (long)(int)param_9[10] * (long)param_10;
  if (*(int *)(param_2 + 0x54) == 3) {
    FUN_10982dba4(param_1,param_3,param_4,param_9,uVar15,param_12,param_13,param_14);
    iVar12 = 1;
    iVar13 = -1;
    if (param_13 == 0) {
      iVar13 = 1;
    }
    *(float *)(*(long *)(param_9 + 0xc) + uVar15 * 4) =
         *param_9 * *(float *)(param_2 + 0xc) * *(float *)(param_2 + 0x48) * (float)iVar13;
    lVar10 = *(long *)(param_9 + 0x12);
    *(undefined4 *)(*(long *)(param_9 + 0x10) + uVar15 * 4) = 0xff7fffff;
    *(undefined4 *)(lVar10 + uVar15 * 4) = 0x7f7fffff;
LAB_10982d57c:
    *(undefined4 *)(*(long *)(param_9 + 0xe) + uVar15 * 4) = *(undefined4 *)(param_2 + 0x10);
    uVar15 = (ulong)(uint)((int)param_9[10] + (int)uVar15);
  }
  else {
    if (*(int *)(param_2 + 0x54) == 4) {
      fVar30 = 1.0;
      ppauVar8 = &pauStack_98;
      if (param_13 != 0) {
        fVar30 = -1.0;
        ppauVar8 = &pauStack_90;
      }
      pauVar1 = *ppauVar8;
      auVar23._0_4_ = *param_12 * *(float *)*pauVar1;
      auVar23._4_4_ = param_12[1] * *(float *)(*pauVar1 + 4);
      auVar23._8_4_ = param_12[2] * *(float *)(*pauVar1 + 8);
      auVar23._12_4_ = param_12[3] * *(float *)(*pauVar1 + 0xc);
      auVar21 = NEON_ext(auVar23,auVar23,8,1);
      pauVar1 = param_6;
      if (param_13 != 0) {
        pauVar1 = param_8;
      }
      auVar47._0_4_ = *param_12 * *(float *)*pauVar1;
      auVar47._4_4_ = param_12[1] * *(float *)(*pauVar1 + 4);
      auVar47._8_4_ = param_12[2] * *(float *)(*pauVar1 + 8);
      auVar47._12_4_ = param_12[3] * *(float *)(*pauVar1 + 0xc);
      auVar19 = NEON_ext(auVar47,auVar47,8,1);
      uVar18 = CONCAT44((auVar23._0_4_ + auVar23._4_4_ + auVar21._4_4_) -
                        (auVar47._0_4_ + auVar47._4_4_ + auVar19._4_4_),
                        (auVar23._0_4_ + auVar23._4_4_ + auVar21._0_4_) -
                        (auVar47._0_4_ + auVar47._4_4_ + auVar19._0_4_));
      uVar48 = 0;
      FUN_10982dba4(param_1,param_3,param_4,param_9,uVar15,param_12,param_13,param_14,uVar18,0);
      fVar24 = fVar30 * *param_9 * *(float *)(param_2 + 0xc) * *(float *)(param_2 + 0x48);
      lVar11 = *(long *)(param_9 + 0xc);
      iVar12 = (int)uVar15;
      lVar10 = (long)iVar12;
      *(float *)(lVar11 + (long)iVar12 * 4) = fVar24;
      fVar25 = (float)uVar18;
      fVar16 = fVar24 - fVar25 * *(float *)(param_2 + 0xc);
      if (param_13 == 0) {
        if (0.0 <= fVar16) {
          uVar17 = 0;
          uVar20 = 0xff7fffff;
        }
        else {
          fVar16 = -(*(float *)(param_2 + 8) * fVar25);
          uVar17 = 0;
          uVar20 = 0xff7fffff;
          uVar9 = 0xff7fffff;
          if (fVar16 < fVar24) goto LAB_10982d460;
        }
      }
      else if (fVar16 <= 0.0) {
        uVar20 = 0;
        uVar17 = 0x7f7fffff;
      }
      else {
        fVar16 = -(*(float *)(param_2 + 8) * fVar25);
        uVar20 = 0;
        uVar17 = 0x7f7fffff;
        uVar9 = 0;
        if (fVar24 < fVar16) {
LAB_10982d460:
          uVar20 = uVar9;
          *(float *)(lVar11 + lVar10 * 4) = fVar16;
        }
      }
      lVar11 = *(long *)(param_9 + 0xe);
      *(undefined4 *)(*(long *)(param_9 + 0x10) + lVar10 * 4) = uVar20;
      *(undefined4 *)(*(long *)(param_9 + 0x12) + lVar10 * 4) = uVar17;
      *(undefined4 *)(lVar11 + lVar10 * 4) = *(undefined4 *)(param_2 + 0x10);
      uVar15 = (long)(int)param_9[10] + (long)iVar12;
      FUN_10982dba4(param_1,param_3,param_4,param_9,uVar15,param_12,param_13,uStack_84,uVar18,uVar48
                   );
      fVar30 = fVar30 * *param_9 * *(float *)(param_2 + 0xc) * *(float *)(param_2 + 0x4c);
      lVar10 = *(long *)(param_9 + 0xc);
      *(float *)(lVar10 + uVar15 * 4) = fVar30;
      fVar16 = fVar30 + *(float *)(param_2 + 0xc) * -fVar25;
      if (param_13 == 0) {
        if (fVar16 <= 0.0) {
          uVar20 = 0;
          uVar17 = 0x7f7fffff;
        }
        else {
          fVar16 = -(*(float *)(param_2 + 8) * (float)uVar18);
          uVar20 = 0;
          uVar17 = 0x7f7fffff;
          if (fVar30 < fVar16) goto LAB_10982d548;
        }
      }
      else if (0.0 <= fVar16) {
        uVar17 = 0;
        uVar20 = 0xff7fffff;
      }
      else {
        fVar16 = -(*(float *)(param_2 + 8) * (float)uVar18);
        uVar17 = 0;
        uVar20 = 0xff7fffff;
        if (fVar16 < fVar30) {
LAB_10982d548:
          *(float *)(lVar10 + uVar15 * 4) = fVar16;
        }
      }
      lVar10 = *(long *)(param_9 + 0x12);
      *(undefined4 *)(*(long *)(param_9 + 0x10) + uVar15 * 4) = uVar20;
      *(undefined4 *)(lVar10 + uVar15 * 4) = uVar17;
      iVar12 = 2;
      goto LAB_10982d57c;
    }
    iVar12 = 0;
  }
  if (*(char *)(param_2 + 0x1c) == '\x01') {
    if ((*(byte *)(param_2 + 0x28) & 1) == 0) {
      FUN_10982dba4(param_1,param_3,param_4,param_9,uVar15,param_12,param_13,uStack_84);
      fVar16 = *(float *)(param_2 + 0x20);
      fVar30 = (float)FUN_109833c10(param_1);
      lVar10 = *(long *)(param_9 + 0xe);
      iVar13 = (int)uVar15;
      *(float *)(*(long *)(param_9 + 0xc) + (long)iVar13 * 4) = fVar16 * fVar30;
      lVar11 = *(long *)(param_9 + 0x12);
      *(float *)(*(long *)(param_9 + 0x10) + (long)iVar13 * 4) =
           -*(float *)(param_2 + 0x24) / *param_9;
      *(float *)(lVar11 + (long)iVar13 * 4) = *(float *)(param_2 + 0x24) / *param_9;
      *(undefined4 *)(lVar10 + (long)iVar13 * 4) = *(undefined4 *)(param_2 + 0x18);
      uVar15 = (ulong)(uint)((int)param_9[10] + iVar13);
      iVar12 = iVar12 + 1;
      if ((*(char *)(param_2 + 0x1c) != '\x01') || (*(char *)(param_2 + 0x28) != '\x01'))
      goto LAB_10982d7b4;
    }
    fVar30 = *(float *)(param_2 + 0x50) - *(float *)(param_2 + 0x2c);
    if (param_13 != 0) {
      fVar16 = fVar30 + -6.2831855;
      if (fVar30 <= 3.1415927) {
        fVar16 = fVar30;
      }
      fVar30 = fVar16;
      if (fVar30 < -3.1415927) {
        fVar30 = fVar30 + 6.2831855;
      }
    }
    FUN_10982dba4(param_1,param_3,param_4,param_9,uVar15,param_12,param_13,uStack_84);
    fVar16 = -*(float *)(param_2 + 0x20);
    if (0.0 <= fVar30) {
      fVar16 = *(float *)(param_2 + 0x20);
    }
    if (fVar30 == 0.0) {
      fVar30 = 0.0;
    }
    else {
      fVar30 = (float)FUN_109833c10(param_1);
    }
    iVar13 = -1;
    if (param_13 == 0) {
      iVar13 = 1;
    }
    lVar10 = *(long *)(param_9 + 0xe);
    iVar14 = (int)uVar15;
    *(float *)(*(long *)(param_9 + 0xc) + (long)iVar14 * 4) = fVar16 * fVar30 * (float)iVar13;
    lVar11 = *(long *)(param_9 + 0x12);
    *(float *)(*(long *)(param_9 + 0x10) + (long)iVar14 * 4) =
         -*(float *)(param_2 + 0x24) / *param_9;
    *(float *)(lVar11 + (long)iVar14 * 4) = *(float *)(param_2 + 0x24) / *param_9;
    *(undefined4 *)(lVar10 + (long)iVar14 * 4) = *(undefined4 *)(param_2 + 0x18);
    uVar15 = (ulong)(uint)((int)param_9[10] + iVar14);
    iVar12 = iVar12 + 1;
  }
LAB_10982d7b4:
  if (*(char *)(param_2 + 0x30) == '\x01') {
    fVar30 = *(float *)(param_2 + 0x50);
    fVar16 = *(float *)(param_2 + 0x44);
    FUN_10982dba4(param_1,param_3,param_4,param_9,uVar15,param_12,param_13,uStack_84);
    if (param_13 == 0) {
      auVar21._0_4_ = *(float *)(param_1 + 0x590) - *(float *)(param_3 + 0x30);
      auVar21._4_4_ = *(float *)(param_1 + 0x594) - *(float *)(param_3 + 0x34);
      auVar21._8_4_ = *(float *)(param_1 + 0x598) - *(float *)(param_3 + 0x38);
      auVar21._12_4_ = 0;
      auVar23 = *pauStack_90;
      auVar47 = NEON_ext(auVar23,auVar23,0xc,1);
      auVar47 = NEON_ext(auVar47,auVar23,8,1);
      auVar19 = NEON_ext(auVar21,auVar21,0xc,1);
      auVar36 = NEON_ext(auVar19,auVar21,8,1);
      auVar19._0_4_ = auVar23._0_4_ * auVar36._0_4_ - auVar47._0_4_ * auVar21._0_4_;
      auVar19._4_4_ = auVar23._4_4_ * auVar36._4_4_ - auVar47._4_4_ * auVar21._4_4_;
      auVar19._8_4_ = auVar23._8_4_ * auVar36._8_4_ - auVar47._8_4_ * auVar21._8_4_;
      auVar19._12_4_ = auVar23._12_4_ * auVar36._12_4_ - auVar47._12_4_ * 0.0;
      auVar23 = NEON_ext(auVar19,auVar19,0xc,1);
      auVar21 = NEON_ext(auVar23,auVar19,8,1);
      auVar27._0_4_ = *(float *)(param_1 + 0x5d0) - *(float *)(param_4 + 0x30);
      auVar27._4_4_ = *(float *)(param_1 + 0x5d4) - *(float *)(param_4 + 0x34);
      auVar27._8_4_ = *(float *)(param_1 + 0x5d8) - *(float *)(param_4 + 0x38);
      auVar27._12_4_ = 0;
      auVar23 = *param_8;
      auVar47 = NEON_ext(auVar23,auVar23,0xc,1);
      auVar47 = NEON_ext(auVar47,auVar23,8,1);
      auVar19 = NEON_ext(auVar27,auVar27,0xc,1);
      auVar19 = NEON_ext(auVar19,auVar27,8,1);
      auVar28._0_4_ = auVar23._0_4_ * auVar19._0_4_ - auVar47._0_4_ * auVar27._0_4_;
      auVar28._4_4_ = auVar23._4_4_ * auVar19._4_4_ - auVar47._4_4_ * auVar27._4_4_;
      auVar28._8_4_ = auVar23._8_4_ * auVar19._8_4_ - auVar47._8_4_ * auVar27._8_4_;
      auVar28._12_4_ = auVar23._12_4_ * auVar19._12_4_ - auVar47._12_4_ * 0.0;
      auVar23 = NEON_ext(auVar28,auVar28,0xc,1);
      auVar47 = NEON_ext(auVar23,auVar28,8,1);
      auVar36._0_4_ = *param_12 * (*(float *)*pauStack_98 + auVar21._0_4_);
      auVar36._4_4_ = param_12[1] * (*(float *)(*pauStack_98 + 4) + auVar21._4_4_);
      auVar36._8_4_ = param_12[2] * (*(float *)(*pauStack_98 + 8) + auVar21._8_4_);
      auVar36._12_4_ = param_12[3] * (*(float *)(*pauStack_98 + 0xc) + 0.0);
      auVar23 = NEON_ext(auVar36,auVar36,8,1);
      auVar29._0_4_ = *param_12 * (*(float *)*param_6 + auVar47._0_4_);
      auVar29._4_4_ = param_12[1] * (*(float *)(*param_6 + 4) + auVar47._4_4_);
      auVar29._8_4_ = param_12[2] * (*(float *)(*param_6 + 8) + auVar47._8_4_);
      auVar29._12_4_ = param_12[3] * (*(float *)(*param_6 + 0xc) + 0.0);
      auVar21 = NEON_ext(auVar29,auVar29,8,1);
      fVar24 = (auVar36._0_4_ + auVar36._4_4_ + auVar23._0_4_) -
               (auVar29._0_4_ + auVar29._4_4_ + auVar21._0_4_);
      fVar35 = *(float *)(*(long *)(param_1 + 0x28) + 0x1d0);
      fVar25 = 1.0 / fVar35;
      fVar37 = *(float *)(*(long *)(param_1 + 0x30) + 0x1d0);
      fVar31 = 1.0 / fVar37;
    }
    else {
      fVar40 = (float)*(undefined8 *)(param_12 + 2);
      fVar42 = (float)((ulong)*(undefined8 *)(param_12 + 2) >> 0x20);
      fVar38 = (float)*(undefined8 *)param_12;
      fVar39 = (float)((ulong)*(undefined8 *)param_12 >> 0x20);
      auVar22._0_4_ = *(float *)*pauStack_90 * fVar38;
      auVar22._4_4_ = *(float *)(*pauStack_90 + 4) * fVar39;
      auVar22._8_4_ = *(float *)(*pauStack_90 + 8) * fVar40;
      auVar22._12_4_ = *(float *)(*pauStack_90 + 0xc) * fVar42;
      auVar23 = NEON_ext(auVar22,auVar22,8,1);
      auVar26._0_4_ = fVar38 * *(float *)*param_8;
      auVar26._4_4_ = fVar39 * *(float *)(*param_8 + 4);
      auVar26._8_4_ = fVar40 * *(float *)(*param_8 + 8);
      auVar26._12_4_ = fVar42 * *(float *)(*param_8 + 0xc);
      auVar21 = NEON_ext(auVar26,auVar26,8,1);
      fVar24 = (auVar22._0_4_ + auVar22._4_4_ + auVar23._0_4_) -
               (auVar26._0_4_ + auVar26._4_4_ + auVar21._0_4_);
      lVar10 = *(long *)(param_1 + 0x28);
      lVar11 = *(long *)(param_1 + 0x30);
      fVar35 = *(float *)(lVar10 + 0x1d0);
      fVar25 = 1.0 / fVar35;
      fVar37 = *(float *)(lVar11 + 0x1d0);
      if (fVar35 != 0.0) {
        fVar31 = *(float *)(param_1 + 0x590) - (float)*(undefined8 *)(param_3 + 0x30);
        fVar33 = *(float *)(param_1 + 0x594) -
                 (float)((ulong)*(undefined8 *)(param_3 + 0x30) >> 0x20);
        fVar34 = *(float *)(param_1 + 0x598) - (float)*(undefined8 *)(param_3 + 0x38);
        auVar32._0_4_ = fVar31 * fVar31;
        auVar32._4_4_ = fVar33 * fVar33;
        auVar32._8_4_ = fVar34 * fVar34;
        auVar32._12_4_ = 0;
        auVar23 = NEON_ext(auVar32,auVar32,8,1);
        fVar31 = fVar38 * (float)*(undefined8 *)(lVar10 + 0x180);
        fVar33 = fVar39 * (float)((ulong)*(undefined8 *)(lVar10 + 0x180) >> 0x20);
        fVar34 = fVar40 * (float)*(undefined8 *)(lVar10 + 0x188);
        fVar41 = fVar42 * (float)((ulong)*(undefined8 *)(lVar10 + 0x188) >> 0x20);
        auVar43._0_4_ = fVar38 * *(float *)(lVar10 + 400);
        auVar43._4_4_ = fVar39 * *(float *)(lVar10 + 0x194);
        auVar43._8_4_ = fVar40 * *(float *)(lVar10 + 0x198);
        auVar43._12_4_ = fVar42 * *(float *)(lVar10 + 0x19c);
        auVar45._0_4_ = fVar38 * *(float *)(lVar10 + 0x1a0);
        auVar45._4_4_ = fVar39 * *(float *)(lVar10 + 0x1a4);
        auVar45._8_4_ = fVar40 * *(float *)(lVar10 + 0x1a8);
        auVar4._4_4_ = fVar33;
        auVar4._0_4_ = fVar31;
        auVar4._8_4_ = fVar34;
        auVar4._12_4_ = fVar41;
        auVar5._4_4_ = fVar33;
        auVar5._0_4_ = fVar31;
        auVar5._8_4_ = fVar34;
        auVar5._12_4_ = fVar41;
        auVar21 = NEON_ext(auVar4,auVar5,8,1);
        auVar47 = NEON_ext(auVar43,auVar43,8,1);
        auVar45._12_4_ = 0;
        fVar33 = fVar31 + fVar33 + auVar21._0_4_;
        fVar34 = auVar43._0_4_ + auVar43._4_4_ + auVar47._0_4_;
        auVar21 = NEON_ext(auVar45,auVar45,8,1);
        fVar31 = auVar45._0_4_ + auVar45._4_4_ + auVar21._0_4_ + auVar21._4_4_;
        fVar25 = 1.0 / SQRT(fVar33 * fVar33 + fVar34 * fVar34 + fVar31 * fVar31) +
                 (auVar32._0_4_ + auVar32._4_4_ + auVar23._0_4_) * fVar25;
      }
      fVar31 = 1.0 / fVar37;
      if (fVar37 != 0.0) {
        fVar33 = (float)*(undefined8 *)(param_1 + 0x5d0) - *(float *)(param_4 + 0x30);
        fVar34 = (float)((ulong)*(undefined8 *)(param_1 + 0x5d0) >> 0x20) -
                 *(float *)(param_4 + 0x34);
        fVar41 = (float)*(undefined8 *)(param_1 + 0x5d8) - *(float *)(param_4 + 0x38);
        fVar33 = fVar33 * fVar33;
        fVar34 = fVar34 * fVar34;
        fVar41 = fVar41 * fVar41;
        auVar6._4_4_ = fVar34;
        auVar6._0_4_ = fVar33;
        auVar6._8_4_ = fVar41;
        auVar6._12_4_ = 0;
        auVar7._4_4_ = fVar34;
        auVar7._0_4_ = fVar33;
        auVar7._8_4_ = fVar41;
        auVar7._12_4_ = 0;
        auVar23 = NEON_ext(auVar6,auVar7,8,1);
        auVar44._0_4_ = fVar38 * *(float *)(lVar11 + 0x180);
        auVar44._4_4_ = fVar39 * *(float *)(lVar11 + 0x184);
        auVar44._8_4_ = fVar40 * *(float *)(lVar11 + 0x188);
        auVar44._12_4_ = fVar42 * *(float *)(lVar11 + 0x18c);
        auVar46._0_4_ = fVar38 * *(float *)(lVar11 + 400);
        auVar46._4_4_ = fVar39 * *(float *)(lVar11 + 0x194);
        auVar46._8_4_ = fVar40 * *(float *)(lVar11 + 0x198);
        auVar46._12_4_ = fVar42 * *(float *)(lVar11 + 0x19c);
        fVar38 = fVar38 * *(float *)(lVar11 + 0x1a0);
        fVar39 = fVar39 * *(float *)(lVar11 + 0x1a4);
        fVar40 = fVar40 * *(float *)(lVar11 + 0x1a8);
        auVar21 = NEON_ext(auVar44,auVar44,8,1);
        auVar47 = NEON_ext(auVar46,auVar46,8,1);
        fVar42 = auVar44._0_4_ + auVar44._4_4_ + auVar21._0_4_;
        fVar41 = auVar46._0_4_ + auVar46._4_4_ + auVar47._0_4_;
        auVar2._4_4_ = fVar39;
        auVar2._0_4_ = fVar38;
        auVar2._8_4_ = fVar40;
        auVar2._12_4_ = 0;
        auVar3._4_4_ = fVar39;
        auVar3._0_4_ = fVar38;
        auVar3._8_4_ = fVar40;
        auVar3._12_4_ = 0;
        auVar21 = NEON_ext(auVar2,auVar3,8,1);
        fVar38 = fVar38 + fVar39 + auVar21._0_4_ + auVar21._4_4_;
        fVar31 = 1.0 / SQRT(fVar42 * fVar42 + fVar41 * fVar41 + fVar38 * fVar38) +
                 (fVar33 + fVar34 + auVar23._0_4_) * fVar31;
      }
    }
    fVar38 = fVar31;
    if ((fVar35 != 0.0) && (fVar38 = fVar25, fVar37 != 0.0)) {
      fVar38 = (fVar25 * fVar31) / (fVar25 + fVar31);
    }
    fVar31 = *(float *)(param_2 + 0x34);
    fVar25 = 1.0 / *param_9;
    if ((*(char *)(param_2 + 0x38) == '\x01') && (0.25 < fVar25 * SQRT(fVar31 / fVar38))) {
      fVar31 = ((1.0 / fVar25) / fVar25) * 0.0625 * fVar38;
    }
    fVar35 = fVar38 / fVar25;
    if ((*(byte *)(param_2 + 0x40) & fVar38 < *(float *)(param_2 + 0x3c) * fVar25) == 0) {
      fVar35 = *(float *)(param_2 + 0x3c);
    }
    iVar13 = -1;
    if (param_13 == 0) {
      iVar13 = 1;
    }
    fVar37 = (float)iVar13;
    fVar35 = fVar25 * -(fVar35 * fVar24) * fVar37;
    fVar30 = fVar25 * (fVar30 - fVar16) * fVar31 + fVar35;
    if ((*(byte *)(param_1 + 0x63e) & 1) == 0) {
      fVar24 = fVar24 + fVar37 * (fVar30 / fVar38);
    }
    else {
      fVar24 = -3.4028235e+38;
      if (0.0 <= fVar30) {
        fVar24 = 3.4028235e+38;
      }
      fVar24 = fVar24 * fVar37;
    }
    lVar10 = (long)(int)uVar15;
    *(float *)(*(long *)(param_9 + 0xc) + (long)(int)uVar15 * 4) = fVar24;
    fVar16 = fVar35;
    if (fVar35 <= fVar30) {
      fVar16 = fVar30;
      fVar30 = fVar35;
    }
    if (param_13 == 0) {
      fVar24 = 0.0;
      if (fVar30 <= 0.0) {
        fVar24 = fVar30;
      }
      *(float *)(*(long *)(param_9 + 0x10) + lVar10 * 4) = fVar24;
    }
    else {
      fVar24 = 0.0;
      if (-0.0 <= fVar16) {
        fVar24 = -fVar16;
      }
      *(float *)(*(long *)(param_9 + 0x10) + lVar10 * 4) = fVar24;
      fVar16 = -fVar30;
    }
    fVar30 = 0.0;
    if (0.0 <= fVar16) {
      fVar30 = fVar16;
    }
    *(float *)(*(long *)(param_9 + 0x12) + lVar10 * 4) = fVar30;
    *(undefined4 *)(*(long *)(param_9 + 0xe) + lVar10 * 4) = 0;
    iVar12 = iVar12 + 1;
  }
  return iVar12;
}



/* Entry: 10982dba4; end: 10982dcef;  */

void FUN_10982dba4(long param_1,long param_2,long param_3,long param_4,uint param_5,
                  undefined1 (*param_6) [16],int param_7,int param_8)

{
  long lVar1;
  undefined8 *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  undefined1 auVar7 [12];
  undefined1 auVar8 [16];
  float fVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined8 uStack_10;
  undefined8 uStack_8;
  
  lVar5 = 8;
  if (param_7 != 0) {
    lVar5 = 0x10;
  }
  lVar3 = *(long *)(param_4 + lVar5);
  lVar5 = 0x18;
  if (param_7 != 0) {
    lVar5 = 0x20;
  }
  lVar4 = *(long *)(param_4 + lVar5);
  uVar6 = -(ulong)(param_5 >> 0x1f) & 0xfffffffc00000000 | (ulong)param_5 << 2;
  *(undefined4 *)(lVar3 + (long)(int)param_5 * 4) = *(undefined4 *)*param_6;
  lVar5 = uVar6 + 4;
  *(undefined4 *)(lVar3 + lVar5) = *(undefined4 *)(*param_6 + 4);
  lVar1 = uVar6 + 8;
  *(undefined4 *)(lVar3 + lVar1) = *(undefined4 *)(*param_6 + 8);
  *(float *)(lVar4 + (long)(int)param_5 * 4) = -*(float *)*param_6;
  *(float *)(lVar4 + lVar5) = -*(float *)(*param_6 + 4);
  *(float *)(lVar4 + lVar1) = -*(float *)(*param_6 + 8);
  if (param_7 != 0) {
    return;
  }
  auVar8._0_4_ = *(float *)(param_1 + 0x5d0) - *(float *)(param_3 + 0x30);
  auVar8._4_4_ = *(float *)(param_1 + 0x5d4) - *(float *)(param_3 + 0x34);
  auVar8._8_4_ = *(float *)(param_1 + 0x5d8) - *(float *)(param_3 + 0x38);
  auVar8._12_4_ = 0;
  auVar13._0_4_ = *(float *)(param_1 + 0x590) - *(float *)(param_2 + 0x30);
  auVar13._4_4_ = *(float *)(param_1 + 0x594) - *(float *)(param_2 + 0x34);
  auVar13._8_4_ = *(float *)(param_1 + 0x598) - *(float *)(param_2 + 0x38);
  auVar13._12_4_ = 0;
  auVar10 = *param_6;
  auVar11 = NEON_ext(auVar13,auVar13,0xc,1);
  auVar12 = NEON_ext(auVar11,auVar13,8,1);
  auVar11 = NEON_ext(auVar10,auVar10,0xc,1);
  auVar14 = NEON_ext(auVar11,auVar10,8,1);
  auVar11._0_4_ = auVar14._0_4_ * auVar13._0_4_ - auVar10._0_4_ * auVar12._0_4_;
  auVar11._4_4_ = auVar14._4_4_ * auVar13._4_4_ - auVar10._4_4_ * auVar12._4_4_;
  auVar11._8_4_ = auVar14._8_4_ * auVar13._8_4_ - auVar10._8_4_ * auVar12._8_4_;
  auVar11._12_4_ = auVar14._12_4_ * 0.0 - auVar10._12_4_ * auVar12._12_4_;
  auVar13 = NEON_ext(auVar11,auVar11,0xc,1);
  auVar13 = NEON_ext(auVar13,auVar11,8,1);
  auVar7 = auVar13._0_12_;
  auVar11 = NEON_ext(auVar8,auVar8,0xc,1);
  auVar11 = NEON_ext(auVar11,auVar8,8,1);
  auVar12._0_4_ = auVar14._0_4_ * auVar8._0_4_ - auVar10._0_4_ * auVar11._0_4_;
  auVar12._4_4_ = auVar14._4_4_ * auVar8._4_4_ - auVar10._4_4_ * auVar11._4_4_;
  auVar12._8_4_ = auVar14._8_4_ * auVar8._8_4_ - auVar10._8_4_ * auVar11._8_4_;
  auVar12._12_4_ = auVar14._12_4_ * 0.0 - auVar10._12_4_ * auVar11._12_4_;
  auVar10 = NEON_ext(auVar12,auVar12,0xc,1);
  auVar10 = NEON_ext(auVar10,auVar12,8,1);
  uStack_8 = (ulong)(uint)auVar10._8_4_;
  uStack_10 = auVar10._0_8_;
  if ((param_8 == 0) && ((*(byte *)(param_1 + 0x638) & 1) != 0)) {
    fVar9 = *(float *)(param_1 + 0x630);
    auVar7._0_4_ = auVar13._0_4_ * fVar9;
    auVar7._4_4_ = auVar13._4_4_ * fVar9;
    auVar7._8_4_ = auVar13._8_4_ * fVar9;
    fVar9 = *(float *)(param_1 + 0x634);
    uStack_8 = CONCAT44(fVar9 * 0.0,auVar10._8_4_ * fVar9);
    uStack_10 = CONCAT44(auVar10._4_4_ * fVar9,auVar10._0_4_ * fVar9);
  }
  lVar5 = 0;
  puVar2 = (undefined8 *)(*(long *)(param_4 + 0x10) + (long)(int)param_5 * 4);
  *puVar2 = auVar7._0_8_;
  *(int *)(puVar2 + 1) = auVar7._8_4_;
  lVar3 = *(long *)(param_4 + 0x20);
  do {
    *(float *)(lVar3 + (long)(int)param_5 * 4 + lVar5) = -*(float *)((long)&uStack_10 + lVar5);
    lVar5 = lVar5 + 4;
  } while (lVar5 != 0xc);
  return;
}



/* Entry: 10982dcf0; end: 10982dee7;  */

void FUN_10982dcf0(undefined4 param_1,long param_2,int param_3,uint param_4)

{
  uint uVar1;
  int iVar2;
  
  if (param_4 < 3) {
    if (2 < param_3) {
      if (param_3 == 3) {
        *(undefined4 *)(param_2 + (ulong)param_4 * 4 + 0x370) = param_1;
LAB_10982dddc:
        iVar2 = 4;
        goto LAB_10982dde0;
      }
      if (param_3 != 4) {
        return;
      }
      *(undefined4 *)(param_2 + (ulong)param_4 * 4 + 0x350) = param_1;
LAB_10982dd94:
      iVar2 = 1;
      goto LAB_10982dde0;
    }
    if (param_3 != 1) {
      if (param_3 != 2) {
        return;
      }
      *(undefined4 *)(param_2 + (ulong)param_4 * 4 + 0x340) = param_1;
LAB_10982dd50:
      iVar2 = 2;
      goto LAB_10982dde0;
    }
    *(undefined4 *)(param_2 + (ulong)param_4 * 4 + 0x360) = param_1;
  }
  else {
    uVar1 = param_4 - 3;
    if (2 < uVar1) {
      return;
    }
    if (2 < param_3) {
      if (param_3 == 3) {
        *(undefined4 *)(param_2 + (ulong)(uVar1 * 0x58) + 0x468) = param_1;
        goto LAB_10982dddc;
      }
      if (param_3 != 4) {
        return;
      }
      *(undefined4 *)(param_2 + (ulong)(uVar1 * 0x58) + 0x460) = param_1;
      goto LAB_10982dd94;
    }
    if (param_3 != 1) {
      if (param_3 != 2) {
        return;
      }
      *(undefined4 *)(param_2 + (ulong)(uVar1 * 0x58) + 0x45c) = param_1;
      goto LAB_10982dd50;
    }
    *(undefined4 *)(param_2 + (ulong)(uVar1 * 0x58) + 0x464) = param_1;
  }
  iVar2 = 8;
LAB_10982dde0:
  *(uint *)(param_2 + 0x63c) = *(uint *)(param_2 + 0x63c) | iVar2 << (ulong)((param_4 & 7) << 2);
  return;
}



/* Entry: 10982dee8; end: 10982df03;  */

void FUN_10982dee8(long param_1)

{
  if (param_1 != 0) {
    FUN_109825740();
  }
  return;
}



/* Entry: 10982df04; end: 10982dfe7;  */

void FUN_10982df04(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4,
                  undefined8 *param_5,int param_6)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  param_1[1] = 0xffffffff00000004;
  param_1[2] = 0xffffffffffffffff;
  *(undefined4 *)(param_1 + 3) = 0x7f7fffff;
  *(undefined2 *)((long)param_1 + 0x1c) = 1;
  *(undefined4 *)(param_1 + 4) = 0xffffffff;
  param_1[5] = param_2;
  param_1[6] = param_3;
  param_1[7] = 0x3d4ccccd00000000;
  param_1[8] = 0;
  *param_1 = &PTR_DAT_110b143d8;
  uVar2 = *param_4;
  param_1[0x53] = param_4[1];
  param_1[0x52] = uVar2;
  uVar2 = param_4[2];
  param_1[0x55] = param_4[3];
  param_1[0x54] = uVar2;
  uVar2 = param_4[4];
  param_1[0x57] = param_4[5];
  param_1[0x56] = uVar2;
  uVar2 = param_4[6];
  param_1[0x59] = param_4[7];
  param_1[0x58] = uVar2;
  uVar2 = *param_5;
  param_1[0x5b] = param_5[1];
  param_1[0x5a] = uVar2;
  uVar2 = param_5[2];
  param_1[0x5d] = param_5[3];
  param_1[0x5c] = uVar2;
  uVar2 = param_5[4];
  param_1[0x5f] = param_5[5];
  param_1[0x5e] = uVar2;
  uVar2 = param_5[6];
  param_1[0x61] = param_5[7];
  param_1[0x60] = uVar2;
  param_1[100] = 0x3e99999a3f666666;
  param_1[99] = 0xbf80000000000000;
  *(undefined4 *)(param_1 + 0x65) = 0x3f800000;
  *(undefined1 *)((long)param_1 + 0x334) = 0;
  *(undefined8 *)((long)param_1 + 0x32c) = 0;
  *(undefined4 *)(param_1 + 0x69) = 0x1000000;
  *(char *)((long)param_1 + 0x34c) = (char)param_6;
  uVar1 = 0xbf800000;
  if (param_6 == 0) {
    uVar1 = 0x3f800000;
  }
  *(undefined4 *)((long)param_1 + 0x364) = 0;
  *(undefined8 *)((long)param_1 + 0x35c) = 0;
  *(undefined8 *)((long)param_1 + 0x354) = 0;
  *(undefined4 *)((long)param_1 + 0x344) = uVar1;
  return;
}



/* Entry: 10982dfe8; end: 10982e6b7;  */

void FUN_10982dfe8(long param_1,int *param_2)

{
  undefined1 (*pauVar1) [12];
  long lVar2;
  long lVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  long lVar10;
  int iVar11;
  long lVar12;
  undefined4 uVar13;
  undefined8 uVar14;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined8 extraout_d2;
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar28 [16];
  undefined8 extraout_var;
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar32 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  float fVar36;
  float fVar37;
  undefined1 auVar39 [12];
  float fVar38;
  float fVar44;
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  float fVar45;
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  float fVar46;
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  float fVar52;
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  undefined1 auVar64 [16];
  float fVar65;
  float fVar66;
  float fVar67;
  undefined1 auVar68 [16];
  undefined1 auVar69 [16];
  float fVar70;
  float fVar71;
  float fVar72;
  float fVar73;
  float fVar74;
  float fVar76;
  float fVar77;
  float fVar79;
  float fVar81;
  float fVar82;
  undefined8 uStack_110;
  ulong uStack_108;
  undefined8 uStack_100;
  ulong uStack_f8;
  undefined8 uStack_f0;
  ulong uStack_e8;
  undefined8 uStack_e0;
  ulong uStack_d8;
  undefined8 uStack_d0;
  ulong uStack_c8;
  undefined8 uStack_c0;
  ulong uStack_b8;
  undefined8 uStack_b0;
  ulong uStack_a8;
  undefined8 uStack_a0;
  ulong uStack_98;
  undefined8 uStack_90;
  ulong uStack_88;
  undefined8 uStack_80;
  ulong uStack_78;
  undefined8 uStack_70;
  ulong uStack_68;
  long lStack_58;
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar31 [16];
  undefined1 auVar33 [16];
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  undefined1 auVar58 [16];
  undefined1 auVar63 [16];
  undefined8 uVar75;
  undefined8 uVar78;
  undefined8 uVar80;
  undefined8 uVar83;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar12 = param_1;
  if (*(char *)(param_1 + 0x34a) == '\x01') {
    *(undefined4 *)(param_1 + 0x38) = 0;
    *(undefined4 *)(param_1 + 0x350) = 0;
    if ((*(byte *)(param_1 + 0x348) & 1) == 0) {
      lVar12 = *(long *)(param_1 + 0x28);
      lVar10 = *(long *)(param_1 + 0x30);
      fVar79 = *(float *)(param_1 + 0x2c0);
      fVar81 = *(float *)(param_1 + 0x2c4);
      fVar82 = *(float *)(param_1 + 0x2c8);
      auVar41._0_4_ = *(float *)(lVar12 + 0x10) * fVar79;
      auVar41._4_4_ = *(float *)(lVar12 + 0x14) * fVar81;
      auVar41._8_4_ = *(float *)(lVar12 + 0x18) * fVar82;
      auVar41._12_4_ = *(float *)(lVar12 + 0x1c) * *(float *)(param_1 + 0x2cc);
      auVar48._0_4_ = fVar79 * *(float *)(lVar12 + 0x20);
      auVar48._4_4_ = fVar81 * *(float *)(lVar12 + 0x24);
      auVar48._8_4_ = fVar82 * *(float *)(lVar12 + 0x28);
      auVar48._12_4_ = *(float *)(param_1 + 0x2cc) * *(float *)(lVar12 + 0x2c);
      auVar64._0_4_ = fVar79 * *(float *)(lVar12 + 0x30);
      auVar64._4_4_ = fVar81 * *(float *)(lVar12 + 0x34);
      auVar64._8_4_ = fVar82 * *(float *)(lVar12 + 0x38);
      auVar47 = NEON_ext(auVar41,auVar41,8,1);
      auVar53 = NEON_ext(auVar48,auVar48,8,1);
      auVar64._12_4_ = 0;
      auVar15 = NEON_ext(auVar64,auVar64,8,1);
      uVar14 = 0;
      fVar74 = auVar41._0_4_ + auVar41._4_4_ + auVar47._0_4_ + *(float *)(lVar12 + 0x40);
      fVar76 = auVar48._0_4_ + auVar48._4_4_ + auVar53._0_4_ + *(float *)(lVar12 + 0x44);
      uVar75 = CONCAT44(fVar76,fVar74);
      fVar77 = auVar64._0_4_ + auVar64._4_4_ + auVar15._0_4_ + auVar15._4_4_ +
               *(float *)(lVar12 + 0x48);
      uVar78 = CONCAT44(*(float *)(lVar12 + 0x4c) + 0.0,fVar77);
      fVar79 = *(float *)(param_1 + 0x300);
      fVar81 = *(float *)(param_1 + 0x304);
      fVar82 = *(float *)(param_1 + 0x308);
      auVar47._0_4_ = *(float *)(lVar10 + 0x10) * fVar79;
      auVar47._4_4_ = *(float *)(lVar10 + 0x14) * fVar81;
      auVar47._8_4_ = *(float *)(lVar10 + 0x18) * fVar82;
      auVar47._12_4_ = *(float *)(lVar10 + 0x1c) * *(float *)(param_1 + 0x30c);
      auVar40._0_4_ = fVar79 * *(float *)(lVar10 + 0x20);
      auVar40._4_4_ = fVar81 * *(float *)(lVar10 + 0x24);
      auVar40._8_4_ = fVar82 * *(float *)(lVar10 + 0x28);
      auVar40._12_4_ = *(float *)(param_1 + 0x30c) * *(float *)(lVar10 + 0x2c);
      auVar15._0_4_ = fVar79 * *(float *)(lVar10 + 0x30);
      auVar15._4_4_ = fVar81 * *(float *)(lVar10 + 0x34);
      auVar15._8_4_ = fVar82 * *(float *)(lVar10 + 0x38);
      auVar48 = NEON_ext(auVar47,auVar47,8,1);
      auVar64 = NEON_ext(auVar40,auVar40,8,1);
      auVar15._12_4_ = 0;
      auVar41 = NEON_ext(auVar15,auVar15,8,1);
      fVar79 = auVar47._0_4_ + auVar47._4_4_ + auVar48._0_4_ + *(float *)(lVar10 + 0x40);
      fVar81 = auVar40._0_4_ + auVar40._4_4_ + auVar64._0_4_ + *(float *)(lVar10 + 0x44);
      uVar80 = CONCAT44(fVar81,fVar79);
      fVar82 = auVar15._0_4_ + auVar15._4_4_ + auVar41._0_4_ + auVar41._4_4_ +
               *(float *)(lVar10 + 0x48);
      uVar83 = CONCAT44(*(float *)(lVar10 + 0x4c) + 0.0,fVar82);
      fVar79 = fVar79 - fVar74;
      fVar81 = fVar81 - fVar76;
      fVar82 = fVar82 - fVar77;
      auVar53._0_4_ = fVar79 * fVar79;
      auVar53._4_4_ = fVar81 * fVar81;
      auVar53._8_4_ = fVar82 * fVar82;
      auVar53._12_4_ = 0;
      auVar41 = NEON_ext(auVar53,auVar53,8,1);
      fVar74 = auVar53._0_4_ + auVar53._4_4_ + auVar41._0_4_;
      if (fVar74 <= 1.1920929e-07) {
        uStack_88 = 0;
        uStack_90 = 0x3f800000;
        auVar19 = ZEXT816(0x3f800000);
      }
      else {
        fVar74 = 1.0 / SQRT(fVar74);
        auVar19._0_8_ = CONCAT44(fVar81 * fVar74,fVar79 * fVar74);
        auVar19._8_4_ = fVar82 * fVar74;
        auVar19._12_4_ = fVar74 * 0.0;
        uStack_88 = auVar19._8_8_;
        auVar41 = NEON_ext(auVar19,auVar19,4,1);
        uVar14 = auVar41._0_8_;
        uStack_90 = auVar19._0_8_;
      }
      lVar12 = 0;
      fVar76 = (float)((ulong)uVar14 >> 0x20);
      fVar36 = ABS(fVar76);
      fVar74 = (float)uVar14;
      fVar77 = auVar19._0_4_;
      fVar37 = fVar74 * fVar74 + fVar77 * fVar77;
      fVar46 = 1.0 / SQRT(fVar37);
      fVar81 = -(fVar74 * fVar46);
      fVar82 = fVar76 * fVar81;
      fVar73 = fVar76 * fVar76 + fVar74 * fVar74;
      fVar52 = 1.0 / SQRT(fVar73);
      fVar79 = fVar77 * fVar46;
      if (0.70710677 < fVar36) {
        fVar81 = 0.0;
        fVar79 = -(fVar76 * fVar52);
      }
      auVar23 = ZEXT416((uint)fVar79);
      fVar38 = -(fVar76 * fVar77 * fVar46);
      fVar44 = 0.0;
      if (0.70710677 < fVar36) {
        fVar82 = -(fVar77 * fVar52 * fVar74);
        fVar38 = fVar73 * fVar52;
        fVar44 = fVar52 * fVar74;
      }
      uStack_80 = CONCAT44(fVar79,fVar81);
      fVar79 = fVar37 * fVar46;
      if (0.70710677 < fVar36) {
        fVar79 = fVar77 * -(fVar76 * fVar52);
      }
      uStack_78 = CONCAT44(uStack_78._4_4_,fVar44);
      uStack_70 = CONCAT44(fVar82,fVar38);
      uStack_68 = CONCAT44(uStack_68._4_4_,fVar79);
      lVar10 = param_1 + 0x50;
      do {
        lVar2 = *(long *)(param_1 + 0x28);
        lVar3 = *(long *)(param_1 + 0x30);
        auVar24._4_12_ = auVar23._4_12_;
        auVar24._0_4_ = *(undefined4 *)(lVar2 + 0x10);
        auVar26._12_4_ = auVar23._12_4_;
        auVar26._0_8_ = auVar24._0_8_;
        auVar26._8_4_ = *(undefined4 *)(lVar2 + 0x18);
        auVar25._8_8_ = auVar26._8_8_;
        auVar25._0_8_ = CONCAT44(*(undefined4 *)(lVar2 + 0x20),*(undefined4 *)(lVar2 + 0x10));
        auVar27._0_12_ = auVar25._0_12_;
        auVar27._12_4_ = *(undefined4 *)(lVar2 + 0x28);
        auVar41 = *(undefined1 (*) [16])(lVar2 + 0x30);
        auVar15 = *(undefined1 (*) [16])(lVar2 + 0x40);
        auVar48 = NEON_ext(auVar41,auVar41,8,1);
        uStack_a8 = (ulong)auVar41._4_4_;
        uStack_b8 = (ulong)auVar41._0_4_;
        uStack_b0 = CONCAT44(*(undefined4 *)(lVar2 + 0x24),*(undefined4 *)(lVar2 + 0x14));
        uStack_98 = (ulong)auVar48._0_4_;
        auVar41 = NEON_ext(auVar27,auVar27,8,1);
        uStack_a0 = auVar41._0_8_;
        auVar28._0_8_ = CONCAT44(*(undefined4 *)(lVar3 + 0x20),*(undefined4 *)(lVar3 + 0x10));
        auVar28._8_4_ = *(undefined4 *)(lVar3 + 0x18);
        auVar28._12_4_ = *(undefined4 *)(lVar3 + 0x28);
        auVar41 = *(undefined1 (*) [16])(lVar3 + 0x30);
        auVar48 = *(undefined1 (*) [16])(lVar3 + 0x40);
        uStack_d8 = (ulong)auVar41._4_4_;
        uStack_e0 = CONCAT44(*(undefined4 *)(lVar3 + 0x24),*(undefined4 *)(lVar3 + 0x14));
        auVar64 = NEON_ext(auVar28,auVar28,8,1);
        uStack_e8 = auVar41._0_8_ & 0xffffffff;
        auVar41 = NEON_ext(auVar41,auVar41,8,1);
        uStack_c8 = (ulong)auVar41._0_4_;
        uStack_d0 = auVar64._0_8_;
        uStack_100 = CONCAT44((float)((ulong)uVar75 >> 0x20) - auVar15._4_4_,
                              (float)uVar75 - auVar15._0_4_);
        uStack_f8 = (ulong)(uint)((float)uVar78 - auVar15._8_4_);
        uStack_110 = CONCAT44((float)((ulong)uVar80 >> 0x20) - auVar48._4_4_,
                              (float)uVar80 - auVar48._0_4_);
        uStack_108 = (ulong)(uint)((float)uVar83 - auVar48._8_4_);
        uStack_f0 = auVar28._0_8_;
        uStack_c0 = auVar25._0_8_;
        FUN_10982b588(lVar10,&uStack_c0,&uStack_f0,&uStack_100,&uStack_110,(long)&uStack_90 + lVar12
                      ,lVar2 + 0x210,lVar3 + 0x210,uVar80,uVar83,uVar75,uVar78);
        auVar23._8_8_ = extraout_var;
        auVar23._0_8_ = extraout_d2;
        lVar12 = lVar12 + 0x10;
        lVar10 = lVar10 + 0x60;
      } while (lVar12 != 0x30);
    }
    fVar81 = *(float *)(param_1 + 0x298);
    fVar82 = *(float *)(param_1 + 0x2a8);
    fVar79 = *(float *)(param_1 + 0x2b8);
    if (ABS(fVar79) <= 0.70710677) {
      fVar74 = fVar82 * fVar82 + fVar81 * fVar81;
      fVar76 = 1.0 / SQRT(fVar74);
      auVar6._4_4_ = -fVar82 * fVar76;
      auVar6._0_4_ = fVar81 * fVar76;
      auVar6._8_8_ = 0;
      auVar41 = NEON_rev64(auVar6,4);
      auVar49._0_8_ = auVar41._0_8_;
      auVar49._8_8_ = 0;
      auVar39._0_4_ = fVar81 * fVar76 * -fVar79;
      auVar39._4_4_ = -fVar82 * fVar76 * fVar79;
      auVar39._8_4_ = fVar74 * fVar76;
    }
    else {
      fVar74 = fVar79 * fVar79 + fVar82 * fVar82;
      fVar76 = 1.0 / SQRT(fVar74);
      auVar9._4_4_ = fVar82 * fVar76;
      auVar9._0_4_ = -(fVar79 * fVar76);
      auVar9._8_8_ = 0;
      auVar49 = auVar9 << 0x20;
      auVar39._0_4_ = fVar74 * fVar76;
      auVar39._4_4_ = -(fVar81 * fVar82 * fVar76);
      auVar39._8_4_ = fVar81 * -(fVar79 * fVar76);
    }
    lVar12 = *(long *)(param_1 + 0x28);
    lVar10 = *(long *)(param_1 + 0x30);
    fVar74 = *(float *)(lVar12 + 0x10);
    fVar76 = *(float *)(lVar12 + 0x14);
    fVar77 = *(float *)(lVar12 + 0x18);
    fVar36 = *(float *)(lVar12 + 0x1c);
    fVar37 = *(float *)(lVar12 + 0x20);
    fVar46 = *(float *)(lVar12 + 0x24);
    fVar52 = *(float *)(lVar12 + 0x28);
    fVar73 = *(float *)(lVar12 + 0x2c);
    fVar38 = auVar49._0_4_;
    fVar65 = fVar38 * fVar74;
    fVar44 = auVar49._4_4_;
    fVar66 = fVar44 * fVar76;
    fVar45 = auVar49._8_4_;
    fVar67 = auVar49._12_4_ * fVar36;
    auVar68._0_4_ = fVar38 * fVar37;
    auVar68._4_4_ = fVar44 * fVar46;
    auVar68._8_4_ = fVar45 * fVar52;
    auVar68._12_4_ = auVar49._12_4_ * fVar73;
    pauVar1 = (undefined1 (*) [12])(lVar12 + 0x30);
    fVar72 = (float)*(undefined8 *)(lVar12 + 0x38);
    uVar13 = (undefined4)((ulong)*(undefined8 *)(lVar12 + 0x38) >> 0x20);
    uStack_88 = *(ulong *)*pauVar1;
    fVar70 = (float)uStack_88;
    fVar71 = (float)(uStack_88 >> 0x20);
    auVar50._0_4_ = fVar38 * fVar70;
    auVar50._4_4_ = fVar44 * fVar71;
    auVar50._8_4_ = fVar45 * fVar72;
    auVar4._4_4_ = fVar66;
    auVar4._0_4_ = fVar65;
    auVar4._8_4_ = fVar45 * fVar77;
    auVar4._12_4_ = fVar67;
    auVar5._4_4_ = fVar66;
    auVar5._0_4_ = fVar65;
    auVar5._8_4_ = fVar45 * fVar77;
    auVar5._12_4_ = fVar67;
    auVar15 = NEON_ext(auVar4,auVar5,8,1);
    auVar48 = NEON_ext(auVar68,auVar68,8,1);
    auVar50._12_4_ = 0;
    auVar41 = NEON_ext(auVar50,auVar50,8,1);
    uStack_e8 = (ulong)(uint)(auVar50._0_4_ + auVar50._4_4_ + auVar41._0_4_ + auVar41._4_4_);
    fVar38 = auVar39._0_4_;
    auVar51._0_4_ = fVar38 * fVar74;
    fVar44 = auVar39._4_4_;
    auVar51._4_4_ = fVar44 * fVar76;
    fVar45 = auVar39._8_4_;
    auVar51._8_4_ = fVar45 * fVar77;
    auVar51._12_4_ = fVar36 * 0.0;
    auVar69._0_4_ = fVar38 * fVar37;
    auVar69._4_4_ = fVar44 * fVar46;
    auVar69._8_4_ = fVar45 * fVar52;
    auVar69._12_4_ = fVar73 * 0.0;
    auVar41 = NEON_ext(auVar51,auVar51,8,1);
    auVar64 = NEON_ext(auVar69,auVar69,8,1);
    auVar42._0_4_ = fVar38 * fVar70;
    auVar42._4_4_ = fVar44 * fVar71;
    auVar42._8_4_ = fVar45 * fVar72;
    auVar42._12_4_ = 0;
    uStack_100 = CONCAT44(auVar64._0_4_ + auVar69._0_4_ + auVar69._4_4_,
                          auVar41._0_4_ + auVar51._0_4_ + auVar51._4_4_);
    auVar41 = NEON_ext(auVar42,auVar42,8,1);
    uStack_f8 = (ulong)(uint)(auVar42._0_4_ + auVar42._4_4_ + auVar41._0_4_ + auVar41._4_4_);
    uStack_f0 = CONCAT44(auVar68._0_4_ + auVar68._4_4_ + auVar48._0_4_,
                         fVar65 + fVar66 + auVar15._0_4_);
    auVar16._0_4_ = fVar81 * fVar74;
    auVar16._4_4_ = fVar82 * fVar76;
    auVar16._8_4_ = fVar79 * fVar77;
    auVar16._12_4_ = fVar36 * 0.0;
    auVar20._0_4_ = fVar81 * fVar37;
    auVar20._4_4_ = fVar82 * fVar46;
    auVar20._8_4_ = fVar79 * fVar52;
    auVar20._12_4_ = fVar73 * 0.0;
    auVar29._0_4_ = fVar81 * fVar70;
    auVar29._4_4_ = fVar82 * fVar71;
    auVar29._8_4_ = fVar79 * fVar72;
    auVar41 = NEON_ext(auVar16,auVar16,8,1);
    auVar15 = NEON_ext(auVar20,auVar20,8,1);
    auVar29._12_4_ = 0;
    uStack_110 = CONCAT44(auVar15._0_4_ + auVar20._0_4_ + auVar20._4_4_,
                          auVar41._0_4_ + auVar16._0_4_ + auVar16._4_4_);
    auVar41 = NEON_ext(auVar29,auVar29,8,1);
    uStack_108 = (ulong)(uint)(auVar29._0_4_ + auVar29._4_4_ + auVar41._0_4_ + auVar41._4_4_);
    auVar21._0_8_ = CONCAT44(fVar37,fVar74);
    auVar21._8_4_ = fVar77;
    auVar21._12_4_ = fVar52;
    auVar7._12_4_ = uVar13;
    auVar7._0_12_ = *pauVar1;
    auVar8._12_4_ = uVar13;
    auVar8._0_12_ = *pauVar1;
    auVar41 = NEON_ext(auVar7,auVar8,8,1);
    uStack_78 = (ulong)(uint)fVar71;
    uStack_80 = CONCAT44(fVar46,fVar76);
    uStack_68 = (ulong)auVar41._0_4_;
    auVar41 = NEON_ext(auVar21,auVar21,8,1);
    uStack_88 = uStack_88 & 0xffffffff;
    uStack_70 = auVar41._0_8_;
    auVar43._0_8_ = CONCAT44(*(undefined4 *)(lVar10 + 0x20),*(undefined4 *)(lVar10 + 0x10));
    auVar43._8_4_ = *(undefined4 *)(lVar10 + 0x18);
    auVar43._12_4_ = *(undefined4 *)(lVar10 + 0x28);
    auVar41 = *(undefined1 (*) [16])(lVar10 + 0x30);
    auVar15 = NEON_ext(auVar41,auVar41,8,1);
    uStack_a8 = (ulong)auVar41._4_4_;
    uStack_b8 = (ulong)auVar41._0_4_;
    auVar54._8_8_ = auVar15._8_8_;
    auVar54._0_8_ = CONCAT44(0,auVar15._0_4_);
    uStack_b0 = CONCAT44(*(undefined4 *)(lVar10 + 0x24),*(undefined4 *)(lVar10 + 0x14));
    auVar41 = NEON_ext(auVar43,auVar43,8,1);
    uStack_a0 = auVar41._0_8_;
    uStack_c0 = auVar43._0_8_;
    uStack_98 = auVar54._0_8_;
    uStack_90 = auVar21._0_8_;
    func_0x00010982bc98(param_1 + 0x170,&uStack_f0,&uStack_90,&uStack_c0,lVar12 + 0x210,
                        lVar10 + 0x210);
    lVar12 = *(long *)(param_1 + 0x28);
    lVar10 = *(long *)(param_1 + 0x30);
    auVar41 = *(undefined1 (*) [16])(lVar12 + 0x30);
    auVar15 = NEON_ext(auVar41,auVar41,8,1);
    uStack_78 = (ulong)auVar41._4_4_;
    uStack_88 = (ulong)auVar41._0_4_;
    auVar55._4_12_ = auVar54._4_12_;
    auVar55._0_4_ = *(undefined4 *)(lVar12 + 0x10);
    auVar57._12_4_ = auVar54._12_4_;
    auVar57._0_8_ = auVar55._0_8_;
    auVar57._8_4_ = *(undefined4 *)(lVar12 + 0x18);
    auVar56._8_8_ = auVar57._8_8_;
    auVar56._0_8_ = CONCAT44(*(undefined4 *)(lVar12 + 0x20),*(undefined4 *)(lVar12 + 0x10));
    auVar58._0_12_ = auVar56._0_12_;
    auVar58._12_4_ = *(undefined4 *)(lVar12 + 0x28);
    uStack_68 = (ulong)auVar15._0_4_;
    auVar15 = NEON_ext(auVar58,auVar58,8,1);
    auVar59._8_4_ = auVar41._0_4_;
    auVar59._0_8_ = auVar56._0_8_;
    auVar59._12_4_ = 0;
    uStack_80 = CONCAT44(*(undefined4 *)(lVar12 + 0x24),*(undefined4 *)(lVar12 + 0x14));
    uStack_70 = auVar15._0_8_;
    auVar30._12_4_ = auVar41._12_4_;
    auVar30._8_4_ = *(undefined4 *)(lVar10 + 0x18);
    auVar30._0_8_ = CONCAT44(*(undefined4 *)(lVar10 + 0x20),*(undefined4 *)(lVar10 + 0x10));
    auVar31._0_12_ = auVar30._0_12_;
    auVar31._12_4_ = *(undefined4 *)(lVar10 + 0x28);
    auVar41 = *(undefined1 (*) [16])(lVar10 + 0x30);
    auVar15 = NEON_ext(auVar41,auVar41,8,1);
    uStack_a8 = (ulong)auVar41._4_4_;
    uStack_b8 = (ulong)auVar41._0_4_;
    uStack_b0 = CONCAT44(*(undefined4 *)(lVar10 + 0x24),*(undefined4 *)(lVar10 + 0x14));
    auVar41 = NEON_ext(auVar31,auVar31,8,1);
    uStack_98 = (ulong)auVar15._0_4_;
    uStack_a0 = auVar41._0_8_;
    uStack_c0 = auVar30._0_8_;
    uStack_90 = auVar56._0_8_;
    func_0x00010982bc98(param_1 + 0x1d0,&uStack_100,&uStack_90,&uStack_c0,lVar12 + 0x210,
                        lVar10 + 0x210);
    lVar12 = *(long *)(param_1 + 0x28);
    lVar10 = *(long *)(param_1 + 0x30);
    auVar41 = *(undefined1 (*) [16])(lVar12 + 0x30);
    auVar15 = NEON_ext(auVar41,auVar41,8,1);
    uStack_78 = (ulong)auVar41._4_4_;
    uStack_88 = (ulong)auVar41._0_4_;
    auVar60._4_12_ = auVar59._4_12_;
    auVar60._0_4_ = *(undefined4 *)(lVar12 + 0x10);
    auVar62._12_4_ = auVar59._12_4_;
    auVar62._0_8_ = auVar60._0_8_;
    auVar62._8_4_ = *(undefined4 *)(lVar12 + 0x18);
    auVar61._8_8_ = auVar62._8_8_;
    auVar61._0_8_ = CONCAT44(*(undefined4 *)(lVar12 + 0x20),*(undefined4 *)(lVar12 + 0x10));
    auVar63._0_12_ = auVar61._0_12_;
    auVar63._12_4_ = *(undefined4 *)(lVar12 + 0x28);
    uStack_68 = (ulong)auVar15._0_4_;
    auVar15 = NEON_ext(auVar63,auVar63,8,1);
    uStack_80 = CONCAT44(*(undefined4 *)(lVar12 + 0x24),*(undefined4 *)(lVar12 + 0x14));
    uStack_70 = auVar15._0_8_;
    auVar32._12_4_ = auVar41._12_4_;
    auVar32._8_4_ = *(undefined4 *)(lVar10 + 0x18);
    auVar32._0_8_ = CONCAT44(*(undefined4 *)(lVar10 + 0x20),*(undefined4 *)(lVar10 + 0x10));
    auVar33._0_12_ = auVar32._0_12_;
    auVar33._12_4_ = *(undefined4 *)(lVar10 + 0x28);
    auVar41 = *(undefined1 (*) [16])(lVar10 + 0x30);
    auVar15 = NEON_ext(auVar41,auVar41,8,1);
    uStack_a8 = (ulong)auVar41._4_4_;
    uStack_b8 = (ulong)auVar41._0_4_;
    uStack_b0 = CONCAT44(*(undefined4 *)(lVar10 + 0x24),*(undefined4 *)(lVar10 + 0x14));
    auVar41 = NEON_ext(auVar33,auVar33,8,1);
    uStack_98 = (ulong)auVar15._0_4_;
    uStack_a0 = auVar41._0_8_;
    uStack_c0 = auVar32._0_8_;
    uStack_90 = auVar61._0_8_;
    func_0x00010982bc98(param_1 + 0x230,&uStack_110,&uStack_90,&uStack_c0,lVar12 + 0x210,
                        lVar10 + 0x210);
    *(undefined4 *)(param_1 + 0x33c) = 0;
    param_2 = (int *)(*(long *)(param_1 + 0x28) + 0x10);
    uVar13 = FUN_10982f5a8(param_1,param_2,*(long *)(param_1 + 0x30) + 0x10);
    *(undefined4 *)(param_1 + 0x340) = uVar13;
    lVar12 = param_1 + 0x318;
    FUN_109833e30();
    fVar79 = *(float *)(param_1 + 0x298);
    fVar81 = *(float *)(param_1 + 0x2a8);
    fVar82 = *(float *)(param_1 + 0x2b8);
    lVar10 = *(long *)(param_1 + 0x28);
    lVar2 = *(long *)(param_1 + 0x30);
    auVar22._0_4_ = *(float *)(lVar10 + 0x10) * fVar79;
    auVar22._4_4_ = *(float *)(lVar10 + 0x14) * fVar81;
    auVar22._8_4_ = *(float *)(lVar10 + 0x18) * fVar82;
    auVar22._12_4_ = *(float *)(lVar10 + 0x1c) * 0.0;
    auVar34._0_4_ = fVar79 * *(float *)(lVar10 + 0x20);
    auVar34._4_4_ = fVar81 * *(float *)(lVar10 + 0x24);
    auVar34._8_4_ = fVar82 * *(float *)(lVar10 + 0x28);
    auVar34._12_4_ = *(float *)(lVar10 + 0x2c) * 0.0;
    auVar17._0_4_ = fVar79 * *(float *)(lVar10 + 0x30);
    auVar17._4_4_ = fVar81 * *(float *)(lVar10 + 0x34);
    auVar17._8_4_ = fVar82 * *(float *)(lVar10 + 0x38);
    auVar41 = NEON_ext(auVar22,auVar22,8,1);
    auVar15 = NEON_ext(auVar34,auVar34,8,1);
    auVar17._12_4_ = 0;
    fVar81 = auVar22._0_4_ + auVar22._4_4_ + auVar41._0_4_;
    fVar82 = auVar34._0_4_ + auVar34._4_4_ + auVar15._0_4_;
    auVar41 = NEON_ext(auVar17,auVar17,8,1);
    fVar79 = auVar17._0_4_ + auVar17._4_4_ + auVar41._0_4_ + auVar41._4_4_;
    auVar35._0_4_ =
         fVar81 * (*(float *)(lVar10 + 0x180) * fVar81 + *(float *)(lVar10 + 400) * fVar82 +
                  *(float *)(lVar10 + 0x1a0) * fVar79);
    auVar35._4_4_ =
         fVar82 * (*(float *)(lVar10 + 0x184) * fVar81 + *(float *)(lVar10 + 0x194) * fVar82 +
                  *(float *)(lVar10 + 0x1a4) * fVar79);
    auVar35._8_4_ =
         fVar79 * (*(float *)(lVar10 + 0x188) * fVar81 + *(float *)(lVar10 + 0x198) * fVar82 +
                  *(float *)(lVar10 + 0x1a8) * fVar79);
    auVar35._12_4_ = (fVar81 * 0.0 + fVar82 * 0.0 + fVar79 * 0.0) * 0.0;
    auVar15 = NEON_ext(auVar35,auVar35,8,1);
    auVar18._0_4_ =
         fVar81 * (*(float *)(lVar2 + 0x180) * fVar81 + *(float *)(lVar2 + 400) * fVar82 +
                  *(float *)(lVar2 + 0x1a0) * fVar79);
    auVar18._4_4_ =
         fVar82 * (*(float *)(lVar2 + 0x184) * fVar81 + *(float *)(lVar2 + 0x194) * fVar82 +
                  *(float *)(lVar2 + 0x1a4) * fVar79);
    auVar18._8_4_ =
         fVar79 * (*(float *)(lVar2 + 0x188) * fVar81 + *(float *)(lVar2 + 0x198) * fVar82 +
                  *(float *)(lVar2 + 0x1a8) * fVar79);
    auVar18._12_4_ = (fVar81 * 0.0 + fVar82 * 0.0 + fVar79 * 0.0) * 0.0;
    auVar41 = NEON_ext(auVar18,auVar18,8,1);
    *(float *)(param_1 + 0x338) =
         1.0 / (auVar35._0_4_ + auVar35._4_4_ + auVar15._0_4_ +
               auVar18._0_4_ + auVar18._4_4_ + auVar41._0_4_);
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_58) {
    ___stack_chk_fail();
    if (*(char *)(lVar12 + 0x34a) == '\x01') {
      iVar11 = 0;
      *param_2 = 0;
    }
    else {
      param_2[0] = 5;
      param_2[1] = 1;
      uVar13 = FUN_10982f5a8();
      *(undefined4 *)(lVar12 + 0x340) = uVar13;
      FUN_109833e30(lVar12 + 0x318);
      if (((*(byte *)(lVar12 + 0x334) & 1) == 0) && (*(char *)(lVar12 + 0x349) != '\x01')) {
        return;
      }
      *param_2 = *param_2 + 1;
      iVar11 = param_2[1] + -1;
    }
    param_2[1] = iVar11;
    return;
  }
  return;
}



/* Entry: 10982e6b8; end: 10982e73f;  */

void FUN_10982e6b8(long param_1,int *param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  if (*(char *)(param_1 + 0x34a) == '\x01') {
    iVar1 = 0;
    *param_2 = 0;
  }
  else {
    uVar2 = 5;
    param_2[0] = 5;
    param_2[1] = 1;
    FUN_10982f5a8(param_1,*(long *)(param_1 + 0x28) + 0x10,*(long *)(param_1 + 0x30) + 0x10);
    *(undefined4 *)(param_1 + 0x340) = uVar2;
    FUN_109833e30(param_1 + 0x318);
    if (((*(byte *)(param_1 + 0x334) & 1) == 0) && (*(char *)(param_1 + 0x349) != '\x01')) {
      return;
    }
    *param_2 = *param_2 + 1;
    iVar1 = param_2[1] + -1;
  }
  param_2[1] = iVar1;
  return;
}



/* Entry: 10982e740; end: 10982f5a7;  */

void FUN_10982e740(long param_1,float *param_2)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  uint uVar4;
  char cVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  bool bVar12;
  bool bVar13;
  bool bVar14;
  long lVar15;
  long lVar16;
  int iVar17;
  undefined8 *puVar18;
  long lVar19;
  undefined4 *puVar20;
  float *pfVar21;
  long lVar22;
  undefined8 *puVar23;
  float *pfVar24;
  long lVar25;
  byte bVar26;
  undefined8 uVar27;
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  ulong uVar28;
  undefined1 auVar33 [16];
  undefined4 uVar34;
  undefined8 uVar35;
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  float fVar39;
  float fVar42;
  float fVar43;
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  float fVar44;
  float fVar45;
  float fVar46;
  float fVar47;
  float fVar48;
  float fVar51;
  float fVar52;
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  float fVar53;
  undefined1 auVar54 [16];
  float fVar58;
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  float fVar59;
  float fVar60;
  undefined4 uVar61;
  undefined1 uVar62;
  undefined1 uVar63;
  undefined1 uVar64;
  undefined1 uVar65;
  undefined1 uVar66;
  undefined1 uVar67;
  undefined1 uVar68;
  undefined1 uVar69;
  undefined1 uVar70;
  float fVar71;
  float fVar72;
  float fVar73;
  float fVar74;
  float fVar75;
  undefined1 auVar76 [16];
  undefined1 auVar77 [16];
  float fVar78;
  float fVar81;
  float fVar82;
  undefined1 auVar79 [16];
  undefined1 auVar80 [16];
  undefined1 auVar83 [16];
  undefined1 auVar84 [16];
  float fVar87;
  undefined1 auVar85 [16];
  undefined1 auVar86 [16];
  float fVar88;
  float fVar93;
  float fVar94;
  undefined1 auVar89 [16];
  undefined1 auVar90 [16];
  undefined1 auVar91 [16];
  undefined1 auVar92 [16];
  float fVar95;
  float fVar96;
  float fVar97;
  undefined1 auVar98 [16];
  undefined1 auVar99 [16];
  float fVar100;
  undefined1 auVar101 [12];
  undefined1 auVar102 [16];
  undefined1 auVar103 [16];
  undefined1 auVar104 [16];
  undefined1 auVar105 [16];
  undefined1 auVar106 [16];
  float fVar107;
  float fVar108;
  undefined1 auVar109 [16];
  float fVar110;
  float fVar111;
  float fVar112;
  float fVar113;
  undefined1 auVar114 [12];
  float fVar115;
  uint uVar116;
  undefined8 uStack_f0;
  ulong uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  
  lVar2 = *(long *)(param_1 + 0x28);
  lVar3 = *(long *)(param_1 + 0x30);
  fVar88 = *(float *)(param_1 + 0x290);
  fVar93 = *(float *)(param_1 + 0x294);
  fVar53 = *(float *)(param_1 + 0x298);
  fVar59 = *(float *)(param_1 + 0x2a0);
  fVar75 = *(float *)(param_1 + 0x2a4);
  fVar46 = *(float *)(param_1 + 0x2a8);
  fVar60 = param_2[10];
  lVar15 = (long)(int)fVar60;
  fVar44 = *(float *)(param_1 + 0x2b0);
  fVar45 = *(float *)(param_1 + 0x2b4);
  fVar47 = *(float *)(param_1 + 0x2b8);
  fVar110 = *(float *)(param_1 + 0x2c0);
  fVar73 = *(float *)(param_1 + 0x2c4);
  fVar94 = *(float *)(param_1 + 0x2c8);
  fVar58 = (float)*(undefined8 *)(lVar2 + 0x20);
  fVar78 = *(float *)(lVar2 + 0x30);
  fVar81 = *(float *)(lVar2 + 0x34);
  fVar82 = *(float *)(lVar2 + 0x38);
  fVar87 = *(float *)(lVar2 + 0x40);
  fVar107 = *(float *)(lVar2 + 0x44);
  fVar108 = *(float *)(lVar2 + 0x48);
  fVar95 = (float)((ulong)*(undefined8 *)(lVar2 + 0x20) >> 0x20);
  fVar96 = (float)*(undefined8 *)(lVar2 + 0x28);
  fVar39 = fVar88 * fVar58 + fVar59 * fVar95 + fVar44 * fVar96;
  fVar42 = fVar93 * fVar58 + fVar75 * fVar95 + fVar45 * fVar96;
  fVar43 = fVar53 * fVar58 + fVar46 * fVar95 + fVar47 * fVar96;
  fVar113 = (float)*(undefined8 *)(lVar2 + 0x10);
  fVar71 = fVar113 * fVar110;
  fVar115 = (float)((ulong)*(undefined8 *)(lVar2 + 0x10) >> 0x20);
  fVar72 = fVar115 * fVar73;
  fVar100 = (float)*(undefined8 *)(lVar2 + 0x18);
  fVar74 = (float)((ulong)*(undefined8 *)(lVar2 + 0x18) >> 0x20) * *(float *)(param_1 + 0x2cc);
  fVar58 = fVar58 * fVar110;
  fVar95 = fVar95 * fVar73;
  uVar62 = (undefined1)((uint)fVar95 >> 8);
  uVar63 = (undefined1)((uint)fVar95 >> 0x10);
  uVar64 = (undefined1)((uint)fVar95 >> 0x18);
  fVar96 = fVar96 * fVar94;
  uVar65 = (undefined1)((uint)fVar96 >> 8);
  uVar66 = (undefined1)((uint)fVar96 >> 0x10);
  uVar67 = (undefined1)((uint)fVar96 >> 0x18);
  fVar97 = (float)((ulong)*(undefined8 *)(lVar2 + 0x28) >> 0x20) * *(float *)(param_1 + 0x2cc);
  uVar68 = (undefined1)((uint)fVar97 >> 8);
  uVar69 = (undefined1)((uint)fVar97 >> 0x10);
  uVar70 = (undefined1)((uint)fVar97 >> 0x18);
  auVar36._0_4_ = fVar78 * fVar110;
  auVar36._4_4_ = fVar81 * fVar73;
  auVar36._8_4_ = fVar82 * fVar94;
  auVar79[4] = SUB41(fVar95,0);
  auVar79._0_4_ = fVar58;
  auVar79[5] = uVar62;
  auVar79[6] = uVar63;
  auVar79[7] = uVar64;
  auVar79[8] = SUB41(fVar96,0);
  auVar79[9] = uVar65;
  auVar79[10] = uVar66;
  auVar79[0xb] = uVar67;
  auVar79[0xc] = SUB41(fVar97,0);
  auVar79[0xd] = uVar68;
  auVar79[0xe] = uVar69;
  auVar79[0xf] = uVar70;
  auVar102[4] = SUB41(fVar95,0);
  auVar102._0_4_ = fVar58;
  auVar102[5] = uVar62;
  auVar102[6] = uVar63;
  auVar102[7] = uVar64;
  auVar102[8] = SUB41(fVar96,0);
  auVar102[9] = uVar65;
  auVar102[10] = uVar66;
  auVar102[0xb] = uVar67;
  auVar102[0xc] = SUB41(fVar97,0);
  auVar102[0xd] = uVar68;
  auVar102[0xe] = uVar69;
  auVar102[0xf] = uVar70;
  auVar76 = NEON_ext(auVar79,auVar102,8,1);
  auVar36._12_4_ = 0;
  auVar79 = NEON_ext(auVar36,auVar36,8,1);
  fVar48 = fVar88 * fVar113 + fVar59 * fVar115 + fVar44 * fVar100;
  fVar51 = fVar93 * fVar113 + fVar75 * fVar115 + fVar45 * fVar100;
  fVar52 = fVar53 * fVar113 + fVar46 * fVar115 + fVar47 * fVar100;
  auVar7._4_4_ = fVar72;
  auVar7._0_4_ = fVar71;
  auVar7._8_4_ = fVar100 * fVar94;
  auVar7._12_4_ = fVar74;
  auVar8._4_4_ = fVar72;
  auVar8._0_4_ = fVar71;
  auVar8._8_4_ = fVar100 * fVar94;
  auVar8._12_4_ = fVar74;
  auVar55 = NEON_ext(auVar7,auVar8,8,1);
  fVar110 = *(float *)(param_1 + 0x2d8);
  fVar73 = *(float *)(param_1 + 0x2e8);
  fVar100 = *(float *)(param_1 + 0x2f8);
  fVar94 = *(float *)(param_1 + 0x300);
  fVar113 = *(float *)(param_1 + 0x304);
  fVar115 = *(float *)(param_1 + 0x308);
  fVar44 = fVar88 * fVar78 + fVar59 * fVar81 + fVar44 * fVar82;
  fVar45 = fVar93 * fVar78 + fVar75 * fVar81 + fVar45 * fVar82;
  fVar46 = fVar53 * fVar78 + fVar46 * fVar81 + fVar47 * fVar82;
  fVar47 = fVar78 * 0.0 + fVar81 * 0.0 + fVar82 * 0.0;
  fVar96 = (float)*(undefined8 *)(lVar3 + 0x20);
  fVar53 = *(float *)(lVar3 + 0x30);
  fVar59 = *(float *)(lVar3 + 0x34);
  fVar75 = *(float *)(lVar3 + 0x38);
  fVar97 = (float)((ulong)*(undefined8 *)(lVar3 + 0x20) >> 0x20);
  fVar88 = (float)*(undefined8 *)(lVar3 + 0x28);
  fVar74 = fVar110 * fVar96 + fVar73 * fVar97 + fVar100 * fVar88;
  fVar78 = (float)*(undefined8 *)(lVar3 + 0x10);
  auVar54._0_4_ = fVar78 * fVar94;
  fVar81 = (float)((ulong)*(undefined8 *)(lVar3 + 0x10) >> 0x20);
  auVar54._4_4_ = fVar81 * fVar113;
  fVar82 = (float)*(undefined8 *)(lVar3 + 0x18);
  auVar54._8_4_ = fVar82 * fVar115;
  auVar54._12_4_ =
       (float)((ulong)*(undefined8 *)(lVar3 + 0x18) >> 0x20) * *(float *)(param_1 + 0x30c);
  fVar96 = fVar96 * fVar94;
  fVar97 = fVar97 * fVar113;
  uVar62 = (undefined1)((uint)fVar97 >> 8);
  uVar63 = (undefined1)((uint)fVar97 >> 0x10);
  uVar64 = (undefined1)((uint)fVar97 >> 0x18);
  fVar88 = fVar88 * fVar115;
  uVar65 = (undefined1)((uint)fVar88 >> 8);
  uVar66 = (undefined1)((uint)fVar88 >> 0x10);
  uVar67 = (undefined1)((uint)fVar88 >> 0x18);
  fVar93 = (float)((ulong)*(undefined8 *)(lVar3 + 0x28) >> 0x20) * *(float *)(param_1 + 0x30c);
  uVar68 = (undefined1)((uint)fVar93 >> 8);
  uVar69 = (undefined1)((uint)fVar93 >> 0x10);
  uVar70 = (undefined1)((uint)fVar93 >> 0x18);
  auVar89._0_4_ = fVar53 * fVar94;
  auVar89._4_4_ = fVar59 * fVar113;
  auVar89._8_4_ = fVar75 * fVar115;
  auVar89._12_4_ = 0;
  auVar102 = NEON_ext(auVar89,auVar89,8,1);
  auVar103[4] = SUB41(fVar97,0);
  auVar103._0_4_ = fVar96;
  auVar103[5] = uVar62;
  auVar103[6] = uVar63;
  auVar103[7] = uVar64;
  auVar103[8] = SUB41(fVar88,0);
  auVar103[9] = uVar65;
  auVar103[10] = uVar66;
  auVar103[0xb] = uVar67;
  auVar103[0xc] = SUB41(fVar93,0);
  auVar103[0xd] = uVar68;
  auVar103[0xe] = uVar69;
  auVar103[0xf] = uVar70;
  auVar6[4] = SUB41(fVar97,0);
  auVar6._0_4_ = fVar96;
  auVar6[5] = uVar62;
  auVar6[6] = uVar63;
  auVar6[7] = uVar64;
  auVar6[8] = SUB41(fVar88,0);
  auVar6[9] = uVar65;
  auVar6[10] = uVar66;
  auVar6[0xb] = uVar67;
  auVar6[0xc] = SUB41(fVar93,0);
  auVar6[0xd] = uVar68;
  auVar6[0xe] = uVar69;
  auVar6[0xf] = uVar70;
  auVar103 = NEON_ext(auVar103,auVar6,8,1);
  fVar88 = fVar87 + fVar71 + fVar72 + auVar55._0_4_;
  fVar93 = fVar107 + fVar58 + fVar95 + auVar76._0_4_;
  fVar94 = fVar108 + auVar36._0_4_ + auVar36._4_4_ + auVar79._0_4_ + auVar79._4_4_;
  fVar58 = fVar110 * fVar78 + fVar73 * fVar81 + fVar100 * fVar82;
  auVar55 = NEON_ext(auVar54,auVar54,8,1);
  auVar80._0_4_ =
       *(float *)(param_1 + 0x2d0) * fVar53 + *(float *)(param_1 + 0x2e0) * fVar59 +
       *(float *)(param_1 + 0x2f0) * fVar75;
  auVar80._4_4_ =
       *(float *)(param_1 + 0x2d4) * fVar53 + *(float *)(param_1 + 0x2e4) * fVar59 +
       *(float *)(param_1 + 0x2f4) * fVar75;
  auVar80._8_4_ = fVar110 * fVar53 + fVar73 * fVar59 + fVar100 * fVar75;
  auVar80._12_4_ = fVar53 * 0.0 + fVar59 * 0.0 + fVar75 * 0.0;
  fVar95 = *(float *)(lVar3 + 0x40) + auVar54._0_4_ + auVar54._4_4_ + auVar55._0_4_;
  fVar96 = *(float *)(lVar3 + 0x44) + fVar96 + fVar97 + auVar103._0_4_;
  fVar97 = *(float *)(lVar3 + 0x48) +
           auVar89._0_4_ + auVar89._4_4_ + auVar102._0_4_ + auVar102._4_4_;
  auVar55._4_4_ = fVar45;
  auVar55._0_4_ = fVar44;
  auVar55._8_4_ = fVar46;
  auVar55._12_4_ = fVar47;
  auVar76._4_4_ = fVar45;
  auVar76._0_4_ = fVar44;
  auVar76._8_4_ = fVar46;
  auVar76._12_4_ = fVar47;
  auVar76 = NEON_ext(auVar55,auVar76,8,1);
  auVar55 = NEON_ext(auVar80,auVar80,8,1);
  if (*(char *)(param_1 + 0x34b) != '\x01') {
    uStack_c8 = CONCAT44(*(float *)(lVar3 + 0x4c) + 0.0,fVar97);
    uStack_d0 = CONCAT44(fVar96,fVar95);
    uStack_b8 = CONCAT44(*(float *)(lVar2 + 0x4c) + 0.0,fVar94);
    uStack_c0 = CONCAT44(fVar93,fVar88);
    if (*(char *)(param_1 + 0x348) != '\x01') {
      puVar20 = *(undefined4 **)(param_2 + 2);
      *puVar20 = 0x3f800000;
      puVar20[lVar15 + 1] = 0x3f800000;
      lVar22 = (-(ulong)((uint)ABS(fVar60) >> 0x1e) & 0xfffffffc00000000 |
               (ulong)(uint)((int)fVar60 << 1) << 2) + 8;
      *(undefined4 *)((long)puVar20 + lVar22) = 0x3f800000;
      puVar20 = *(undefined4 **)(param_2 + 6);
      *puVar20 = 0xbf800000;
      puVar20[lVar15 + 1] = 0xbf800000;
      *(undefined4 *)((long)puVar20 + lVar22) = 0xbf800000;
      fVar87 = *(float *)(lVar2 + 0x40);
      fVar107 = *(float *)(lVar2 + 0x44);
      fVar108 = *(float *)(lVar2 + 0x48);
    }
    puVar20 = *(undefined4 **)(param_2 + 4);
    pfVar21 = (float *)(puVar20 + lVar15);
    pfVar24 = (float *)(puVar20 + ((int)fVar60 << 1));
    *puVar20 = 0;
    puVar20[1] = --(fVar94 - fVar108);
    puVar20[2] = -(fVar93 - fVar107);
    puVar20[3] = 0;
    *pfVar21 = -(fVar94 - fVar108);
    pfVar21[1] = 0.0;
    pfVar21[2] = --(fVar88 - fVar87);
    pfVar21[3] = 0.0;
    *pfVar24 = --(fVar93 - fVar107);
    pfVar24[1] = -(fVar88 - fVar87);
    pfVar24[2] = 0.0;
    pfVar24[3] = 0.0;
    fVar95 = fVar95 - (float)*(undefined8 *)(lVar3 + 0x40);
    fVar96 = fVar96 - (float)((ulong)*(undefined8 *)(lVar3 + 0x40) >> 0x20);
    fVar97 = fVar97 - (float)*(undefined8 *)(lVar3 + 0x48);
    puVar20 = *(undefined4 **)(param_2 + 8);
    pfVar21 = (float *)(puVar20 + lVar15);
    pfVar24 = (float *)(puVar20 + ((int)fVar60 << 1));
    *puVar20 = 0;
    puVar20[1] = -fVar97;
    puVar20[2] = fVar96;
    puVar20[3] = 0;
    *pfVar21 = fVar97;
    pfVar21[1] = 0.0;
    pfVar21[2] = -fVar95;
    pfVar21[3] = 0.0;
    *pfVar24 = -fVar96;
    pfVar24[1] = fVar95;
    pfVar24[2] = 0.0;
    pfVar24[3] = 0.0;
    uVar116 = *(uint *)(param_1 + 0x354);
    pfVar24 = param_2 + 1;
    if ((uVar116 & 8) != 0) {
      pfVar24 = (float *)(param_1 + 0x35c);
    }
    fVar60 = *pfVar24;
    fVar96 = fVar60 * *param_2;
    pfVar24 = *(float **)(param_2 + 0xc);
    if ((*(byte *)(param_1 + 0x348) & 1) == 0) {
      lVar22 = 0;
      pfVar21 = pfVar24;
      do {
        *pfVar21 = fVar96 * (*(float *)((long)&uStack_d0 + lVar22) -
                            *(float *)((long)&uStack_c0 + lVar22));
        lVar22 = lVar22 + 4;
        pfVar21 = pfVar21 + lVar15;
      } while (lVar22 != 0xc);
    }
    uVar27 = NEON_ext(CONCAT44(fVar43,fVar52),auVar76._0_8_,4,1);
    fVar95 = param_2[10];
    lVar19 = (long)(int)fVar95;
    lVar22 = *(long *)(param_2 + 4);
    *(ulong *)(lVar22 + lVar19 * 0xc) = CONCAT44(fVar39,fVar48);
    lVar15 = (long)((int)fVar95 * 3) * 4 + 8;
    *(float *)(lVar22 + lVar15) = fVar44;
    *(float *)(lVar22 + lVar19 * 0x10) = fVar51;
    iVar17 = (int)(lVar19 << 2);
    *(float *)(lVar22 + (long)iVar17 * 4 + 4) = fVar42;
    uVar28 = ((ulong)(long)iVar17 >> 2) << 4 | 8;
    *(float *)(lVar22 + uVar28) = fVar45;
    lVar25 = *(long *)(param_2 + 8);
    *(ulong *)(lVar25 + lVar19 * 0xc) = CONCAT44(-fVar39,-fVar48);
    *(float *)(lVar25 + lVar15) = -fVar44;
    *(ulong *)(lVar25 + lVar19 * 0x10) = CONCAT44(-fVar42,-fVar51);
    *(float *)(lVar25 + uVar28) = -fVar45;
    uVar35 = NEON_ext(CONCAT44(fVar74,fVar58),auVar55._0_8_,4,1);
    auVar29._0_4_ = fVar52 * (float)uVar35 - (float)uVar27 * fVar58;
    auVar29._4_4_ =
         fVar43 * (float)((ulong)uVar35 >> 0x20) - (float)((ulong)uVar27 >> 0x20) * fVar74;
    auVar29._8_4_ = fVar46 * fVar58 - fVar52 * auVar80._8_4_;
    auVar29._12_4_ = fVar74 * 0.0 - fVar43 * 0.0;
    auVar55 = NEON_ext(auVar29,auVar29,0xc,1);
    auVar55 = NEON_ext(auVar55,auVar29,8,1);
    auVar57._0_4_ = fVar48 * auVar55._0_4_;
    auVar57._4_4_ = fVar39 * auVar55._4_4_;
    auVar57._8_4_ = fVar44 * auVar55._8_4_;
    auVar57._12_4_ = 0;
    auVar76 = NEON_ext(auVar57,auVar57,8,1);
    pfVar24[lVar19 * 3] = fVar96 * (auVar76._0_4_ + auVar57._0_4_ + auVar57._4_4_);
    auVar30._0_4_ = fVar51 * auVar55._0_4_;
    auVar30._4_4_ = fVar42 * auVar55._4_4_;
    auVar30._8_4_ = fVar45 * auVar55._8_4_;
    auVar30._12_4_ = 0;
    auVar55 = NEON_ext(auVar30,auVar30,8,1);
    pfVar24[lVar19 * 4] = fVar96 * (auVar55._0_4_ + auVar30._0_4_ + auVar30._4_4_);
    cVar5 = *(char *)(param_1 + 0x334);
    if (cVar5 == '\0') {
      if (*(char *)(param_1 + 0x349) != '\x01') {
        return;
      }
      bVar12 = false;
      fVar58 = 0.0;
      bVar26 = 1;
    }
    else {
      fVar58 = *(float *)(param_1 + 0x32c) * *(float *)(param_1 + 0x344);
      bVar12 = 0.0 < fVar58;
      bVar26 = *(byte *)(param_1 + 0x349);
    }
    *(float *)(lVar22 + lVar19 * 0x14) = fVar52;
    lVar16 = (long)((int)fVar95 * 5) * 4;
    lVar15 = lVar16 + 4;
    *(float *)(lVar22 + lVar15) = fVar43;
    lVar16 = lVar16 + 8;
    *(float *)(lVar22 + lVar16) = fVar46;
    *(float *)(lVar25 + lVar19 * 0x14) = -fVar52;
    *(float *)(lVar25 + lVar15) = -fVar43;
    *(float *)(lVar25 + lVar16) = -fVar46;
    fVar95 = *(float *)(param_1 + 0x318);
    fVar97 = *(float *)(param_1 + 0x31c);
    uVar27 = _fmodf(fVar95 - fVar97,0x40c90fdb);
    fVar96 = (float)uVar27;
    uVar61 = (undefined4)((ulong)uVar27 >> 0x20);
    if (-3.1415927 <= fVar96) {
      if (3.1415927 < fVar96) {
        fVar96 = fVar96 + -6.2831855;
        uVar61 = 0;
      }
    }
    else {
      fVar96 = fVar96 + 6.2831855;
      uVar61 = 0;
    }
    uVar28 = _fmodf(fVar95 + fVar97,0x40c90fdb);
    fVar95 = (float)uVar28;
    if (-3.1415927 <= fVar95) {
      if (3.1415927 < fVar95) {
        uVar28 = (ulong)(uint)(fVar95 + -6.2831855);
      }
    }
    else {
      uVar28 = (ulong)(uint)(fVar95 + 6.2831855);
    }
    fVar95 = (float)uVar28;
    pfVar24[lVar19 * 5] = 0.0;
    if ((uVar116 >> 1 & 1) != 0) {
      fVar60 = *(float *)(param_1 + 0x364);
    }
    if (((fVar96 != fVar95 || cVar5 == '\0') & bVar26) != 0) {
      fVar97 = 0.0;
      if ((uVar116 >> 2 & 1) != 0) {
        *(undefined4 *)(*(long *)(param_2 + 0xe) + lVar19 * 0x14) = *(undefined4 *)(param_1 + 0x358)
        ;
        fVar97 = pfVar24[lVar19 * 5];
      }
      fVar93 = *(float *)(param_1 + 0x310);
      fVar88 = (float)FUN_109833c10(*(undefined4 *)(param_1 + 0x340),CONCAT44(uVar61,fVar96),uVar28,
                                    fVar93,param_1);
      pfVar24[lVar19 * 5] = fVar97 + *(float *)(param_1 + 0x344) * fVar93 * fVar88;
      *(float *)(*(long *)(param_2 + 0x10) + lVar19 * 0x14) = -*(float *)(param_1 + 0x314);
      *(undefined4 *)(*(long *)(param_2 + 0x12) + lVar19 * 0x14) = *(undefined4 *)(param_1 + 0x314);
    }
    if (cVar5 == '\0') {
      return;
    }
    pfVar24[lVar19 * 5] = pfVar24[lVar19 * 5] + fVar58 * fVar60 * *param_2;
    if ((uVar116 & 1) != 0) {
      *(undefined4 *)(*(long *)(param_2 + 0xe) + lVar19 * 0x14) = *(undefined4 *)(param_1 + 0x360);
    }
    uVar61 = 0x7f7fffff;
    if (!bVar12) {
      uVar61 = 0;
    }
    if (fVar96 == fVar95) {
      uVar61 = 0x7f7fffff;
    }
    uVar34 = 0;
    if (!(bool)(fVar96 != fVar95 & bVar12)) {
      uVar34 = 0xff7fffff;
    }
    *(undefined4 *)(*(long *)(param_2 + 0x10) + lVar19 * 0x14) = uVar34;
    *(undefined4 *)(*(long *)(param_2 + 0x12) + lVar19 * 0x14) = uVar61;
    if (*(float *)(param_1 + 0x328) <= 0.0) {
      fVar60 = pfVar24[lVar19 * 5];
    }
    else {
      auVar38._0_4_ = fVar52 * *(float *)(lVar2 + 0x1c0);
      auVar38._4_4_ = fVar43 * *(float *)(lVar2 + 0x1c4);
      auVar38._8_4_ = fVar46 * *(float *)(lVar2 + 0x1c8);
      auVar38._12_4_ = *(float *)(lVar2 + 0x1cc) * 0.0;
      auVar55 = NEON_ext(auVar38,auVar38,8,1);
      auVar40._0_4_ = fVar52 * *(float *)(lVar3 + 0x1c0);
      auVar40._4_4_ = fVar43 * *(float *)(lVar3 + 0x1c4);
      auVar40._8_4_ = fVar46 * *(float *)(lVar3 + 0x1c8);
      auVar40._12_4_ = *(float *)(lVar3 + 0x1cc) * 0.0;
      auVar76 = NEON_ext(auVar40,auVar40,8,1);
      fVar96 = (auVar38._0_4_ + auVar38._4_4_ + auVar55._0_4_) -
               (auVar40._0_4_ + auVar40._4_4_ + auVar76._0_4_);
      fVar60 = pfVar24[lVar19 * 5];
      fVar58 = -(*(float *)(param_1 + 0x328) * fVar96);
      if (bVar12) {
        bVar12 = false;
        bVar13 = true;
        bVar14 = false;
        if (fVar96 < 0.0) {
          bVar12 = false;
          bVar13 = false;
          bVar14 = true;
          if (!NAN(fVar58) && !NAN(fVar60)) {
            bVar12 = fVar58 < fVar60;
            bVar13 = fVar58 == fVar60;
            bVar14 = false;
          }
        }
        if (bVar13 || bVar12 != bVar14) goto LAB_10982f550;
      }
      else {
        bVar12 = false;
        if ((0.0 < fVar96) && (bVar12 = false, !NAN(fVar58) && !NAN(fVar60))) {
          bVar12 = fVar58 < fVar60;
        }
        if (!bVar12) goto LAB_10982f550;
      }
      pfVar24[lVar19 * 5] = fVar58;
      fVar60 = fVar58;
    }
LAB_10982f550:
    pfVar24[lVar19 * 5] = fVar60 * *(float *)(param_1 + 0x324);
    return;
  }
  fVar75 = fVar95 - fVar88;
  fVar44 = fVar96 - fVar93;
  fVar47 = fVar97 - fVar94;
  fVar110 = *(float *)(lVar3 + 0x1d0);
  fVar53 = *(float *)(lVar2 + 0x1d0) + fVar110;
  fVar59 = fVar110 / fVar53;
  if (fVar53 <= 0.0) {
    fVar59 = 0.5;
  }
  fVar113 = 1.0 - fVar59;
  uVar62 = SUB41(fVar74,0);
  uVar63 = (undefined1)((uint)fVar74 >> 8);
  uVar64 = (undefined1)((uint)fVar74 >> 0x10);
  uVar65 = (undefined1)((uint)fVar74 >> 0x18);
  fVar73 = (float)(CONCAT17(uVar65,CONCAT16(uVar64,CONCAT15(uVar63,CONCAT14(uVar62,fVar58)))) >>
                  0x20);
  fVar78 = fVar52 * fVar59 + fVar58 * fVar113;
  fVar81 = fVar43 * fVar59 + fVar73 * fVar113;
  fVar82 = fVar46 * fVar59 + auVar80._8_4_ * fVar113;
  auVar109._0_4_ = fVar78 * fVar78;
  auVar109._4_4_ = fVar81 * fVar81;
  auVar109._8_4_ = fVar82 * fVar82;
  auVar109._12_4_ = 0;
  auVar79 = NEON_ext(auVar109,auVar109,8,1);
  fVar115 = auVar109._0_4_ + auVar109._4_4_ + auVar79._0_4_;
  uVar116 = -(uint)(fVar115 < 1.1920929e-07);
  fVar78 = (float)((uint)fVar78 ^ ((uint)fVar78 ^ (uint)(fVar52 * 0.0 + fVar58)) & uVar116);
  fVar81 = (float)((uint)fVar81 ^ ((uint)fVar81 ^ (uint)(fVar43 * 0.0 + fVar73)) & uVar116);
  fVar82 = (float)((uint)fVar82 ^ ((uint)fVar82 ^ (uint)(fVar46 * 0.0 + auVar80._8_4_)) & uVar116);
  fVar110 = (float)NEON_fminnm(*(float *)(lVar2 + 0x1d0),fVar110);
  fVar53 = 1.0;
  if (1.1920929e-07 <= fVar115) {
    fVar53 = fVar113;
  }
  auVar104._0_4_ = fVar78 * fVar78;
  auVar104._4_4_ = fVar81 * fVar81;
  auVar104._8_4_ = fVar82 * fVar82;
  auVar104._12_4_ = 0;
  auVar79 = NEON_ext(auVar104,auVar104,8,1);
  fVar100 = 1.0 / SQRT(auVar104._0_4_ + auVar104._4_4_ + auVar79._0_4_);
  fVar78 = fVar78 * fVar100;
  fVar81 = fVar81 * fVar100;
  fVar82 = fVar82 * fVar100;
  fVar100 = fVar100 * 0.0;
  uStack_b8 = CONCAT44(fVar100,fVar82);
  uStack_c0 = CONCAT44(fVar81,fVar78);
  fVar113 = 0.0;
  if (1.1920929e-07 <= fVar115) {
    fVar113 = fVar59;
  }
  fVar95 = fVar95 - *(float *)(lVar3 + 0x40);
  fVar96 = fVar96 - *(float *)(lVar3 + 0x44);
  fVar97 = fVar97 - *(float *)(lVar3 + 0x48);
  fVar115 = fVar82 * fVar97;
  fVar59 = fVar78 * fVar95 + fVar81 * fVar96;
  fVar71 = fVar78 * (fVar59 + fVar115);
  fVar72 = fVar81 * (fVar59 + fVar115);
  fVar74 = fVar82 * (fVar59 + fVar115);
  fVar48 = fVar82 * (fVar94 - fVar108);
  fVar59 = fVar78 * (fVar88 - fVar87) + fVar81 * (fVar93 - fVar107);
  fVar95 = fVar95 - fVar71;
  fVar96 = fVar96 - fVar72;
  fVar97 = fVar97 - fVar74;
  fVar115 = fVar78 * (fVar59 + fVar48);
  fVar39 = fVar81 * (fVar59 + fVar48);
  fVar48 = fVar82 * (fVar59 + fVar48);
  fVar88 = (fVar88 - fVar87) - fVar115;
  fVar93 = (fVar93 - fVar107) - fVar39;
  fVar59 = (fVar94 - fVar108) - fVar48;
  fVar115 = fVar115 - fVar71;
  fVar39 = fVar39 - fVar72;
  fVar48 = fVar48 - fVar74;
  auVar98._0_4_ = fVar95 - fVar115 * fVar53;
  auVar98._4_4_ = fVar96 - fVar39 * fVar53;
  auVar98._8_4_ = fVar97 - fVar48 * fVar53;
  auVar98._12_4_ = 0;
  auVar105._0_4_ = fVar88 + fVar115 * fVar113;
  auVar105._4_4_ = fVar93 + fVar39 * fVar113;
  auVar105._8_4_ = fVar59 + fVar48 * fVar113;
  auVar105._12_4_ = 0;
  fVar95 = fVar95 * fVar113 + fVar88 * fVar53;
  fVar96 = fVar96 * fVar113 + fVar93 * fVar53;
  fVar97 = fVar97 * fVar113 + fVar59 * fVar53;
  auVar90._0_4_ = fVar95 * fVar95;
  auVar90._4_4_ = fVar96 * fVar96;
  auVar90._8_4_ = fVar97 * fVar97;
  auVar90._12_4_ = 0;
  auVar79 = NEON_ext(auVar90,auVar90,8,1);
  fVar88 = auVar90._0_4_ + auVar90._4_4_ + auVar79._0_4_;
  if (fVar88 <= 1.1920929e-07) {
    auVar56._4_4_ = fVar42;
    auVar56._0_4_ = fVar51;
    auVar56._8_4_ = fVar45;
    auVar56._12_4_ = 0.0;
  }
  else {
    fVar88 = 1.0 / SQRT(fVar88);
    auVar56._0_4_ = fVar95 * fVar88;
    auVar56._4_4_ = fVar96 * fVar88;
    auVar56._8_4_ = fVar97 * fVar88;
    auVar56._12_4_ = fVar88 * 0.0;
  }
  lVar22 = 0;
  uVar116 = (int)fVar60 << 1;
  auVar9._4_4_ = fVar81;
  auVar9._0_4_ = fVar78;
  auVar9._8_4_ = fVar82;
  auVar9._12_4_ = fVar100;
  auVar10._4_4_ = fVar81;
  auVar10._0_4_ = fVar78;
  auVar10._8_4_ = fVar82;
  auVar10._12_4_ = fVar100;
  auVar79 = NEON_ext(auVar9,auVar10,0xc,1);
  auVar11._4_4_ = fVar81;
  auVar11._0_4_ = fVar78;
  auVar11._8_4_ = fVar82;
  auVar11._12_4_ = fVar100;
  auVar102 = NEON_ext(auVar79,auVar11,8,1);
  auVar79 = NEON_ext(auVar56,auVar56,0xc,1);
  auVar79 = NEON_ext(auVar79,auVar56,8,1);
  fVar59 = auVar79._0_4_;
  fVar45 = auVar79._4_4_;
  fVar94 = auVar79._8_4_;
  fVar87 = auVar79._12_4_;
  fVar95 = auVar56._0_4_;
  fVar107 = auVar102._0_4_;
  fVar97 = auVar56._4_4_;
  fVar108 = auVar102._4_4_;
  fVar88 = auVar56._8_4_;
  fVar115 = auVar102._8_4_;
  fVar93 = auVar56._12_4_;
  fVar39 = auVar102._12_4_;
  auVar49._0_4_ = fVar78 * fVar59 - fVar107 * fVar95;
  auVar49._4_4_ = fVar81 * fVar45 - fVar108 * fVar97;
  auVar49._8_4_ = fVar82 * fVar94 - fVar115 * fVar88;
  auVar49._12_4_ = fVar100 * fVar87 - fVar39 * fVar93;
  auVar79 = NEON_ext(auVar49,auVar49,0xc,1);
  auVar79 = NEON_ext(auVar79,auVar49,8,1);
  auVar50._0_12_ = auVar79._0_12_;
  auVar50._12_4_ = 0;
  fVar96 = auVar79._8_4_;
  uStack_e8 = (ulong)(uint)fVar96;
  uStack_f0 = auVar79._0_8_;
  uStack_d8 = auVar56._8_8_;
  uStack_e0 = auVar56._0_8_;
  auVar102 = NEON_ext(auVar105,auVar105,0xc,1);
  auVar102 = NEON_ext(auVar102,auVar105,8,1);
  fVar72 = auVar102._0_4_;
  fVar74 = auVar102._4_4_;
  fVar111 = auVar102._8_4_;
  fVar112 = auVar102._12_4_;
  auVar91._0_4_ = auVar105._0_4_ * fVar59 - fVar72 * fVar95;
  auVar91._4_4_ = auVar105._4_4_ * fVar45 - fVar74 * fVar97;
  auVar91._8_4_ = auVar105._8_4_ * fVar94 - fVar111 * fVar88;
  auVar91._12_4_ = fVar87 * 0.0 - fVar112 * fVar93;
  auVar102 = NEON_ext(auVar98,auVar98,0xc,1);
  auVar102 = NEON_ext(auVar102,auVar98,8,1);
  fVar42 = auVar102._0_4_;
  fVar48 = auVar102._4_4_;
  fVar51 = auVar102._8_4_;
  fVar71 = auVar102._12_4_;
  auVar85._0_4_ = fVar59 * auVar98._0_4_ - fVar42 * fVar95;
  auVar85._4_4_ = fVar45 * auVar98._4_4_ - fVar48 * fVar97;
  auVar85._8_4_ = fVar94 * auVar98._8_4_ - fVar51 * fVar88;
  auVar85._12_4_ = fVar87 * 0.0 - fVar71 * fVar93;
  auVar102 = NEON_ext(auVar85,auVar85,0xc,1);
  auVar102 = NEON_ext(auVar102,auVar85,8,1);
  uStack_c8 = (ulong)auVar102._8_4_;
  uStack_d0 = auVar102._0_8_;
  puVar18 = *(undefined8 **)(param_2 + 4);
  auVar102 = NEON_ext(auVar91,auVar55,4,1);
  *(float *)(puVar18 + 1) = auVar91._0_4_;
  *puVar18 = auVar102._0_8_;
  lVar19 = *(long *)(param_2 + 8);
  do {
    *(float *)(lVar19 + lVar22) = -*(float *)((long)&uStack_d0 + lVar22);
    lVar22 = lVar22 + 4;
  } while (lVar22 != 0xc);
  auVar102 = NEON_ext(auVar50,auVar50,0xc,1);
  auVar102 = NEON_ext(auVar102,auVar50,8,1);
  fVar59 = auVar79._0_4_;
  fVar45 = auVar79._4_4_;
  auVar92._0_4_ = auVar105._0_4_ * auVar102._0_4_ - fVar72 * fVar59;
  auVar92._4_4_ = auVar105._4_4_ * auVar102._4_4_ - fVar74 * fVar45;
  auVar92._8_4_ = auVar105._8_4_ * auVar102._8_4_ - fVar111 * fVar96;
  auVar92._12_4_ = auVar102._12_4_ * 0.0 - fVar112 * 0.0;
  auVar79 = NEON_ext(auVar92,auVar92,0xc,1);
  auVar103 = NEON_ext(auVar79,auVar92,8,1);
  auVar114 = auVar103._0_12_;
  auVar86._0_4_ = auVar102._0_4_ * auVar98._0_4_ - fVar42 * fVar59;
  auVar86._4_4_ = auVar102._4_4_ * auVar98._4_4_ - fVar48 * fVar45;
  auVar86._8_4_ = auVar102._8_4_ * auVar98._8_4_ - fVar51 * fVar96;
  auVar86._12_4_ = auVar102._12_4_ * 0.0 - fVar71 * 0.0;
  auVar79 = NEON_ext(auVar86,auVar86,0xc,1);
  auVar79 = NEON_ext(auVar79,auVar86,8,1);
  uStack_c8 = (ulong)(uint)auVar79._8_4_;
  uStack_d0 = auVar79._0_8_;
  if ((fVar110 < 1.1920929e-07) && (*(char *)(param_1 + 0x334) != '\0')) {
    uStack_c8 = CONCAT44(fVar53 * 0.0,auVar79._8_4_ * fVar53);
    uStack_d0 = CONCAT44(auVar79._4_4_ * fVar53,auVar79._0_4_ * fVar53);
    auVar114._0_4_ = auVar103._0_4_ * fVar113;
    auVar114._4_4_ = auVar103._4_4_ * fVar113;
    auVar114._8_4_ = auVar103._8_4_ * fVar113;
  }
  lVar22 = 0;
  puVar1 = (undefined8 *)((long)puVar18 + lVar15 * 4);
  *puVar1 = auVar114._0_8_;
  *(int *)(puVar1 + 1) = auVar114._8_4_;
  do {
    *(float *)(lVar19 + lVar15 * 4 + lVar22) = -*(float *)((long)&uStack_d0 + lVar22);
    lVar22 = lVar22 + 4;
  } while (lVar22 != 0xc);
  auVar106._0_4_ = fVar107 * auVar105._0_4_ - fVar78 * fVar72;
  auVar106._4_4_ = fVar108 * auVar105._4_4_ - fVar81 * fVar74;
  auVar106._8_4_ = fVar115 * auVar105._8_4_ - fVar82 * fVar111;
  auVar106._12_4_ = fVar39 * 0.0 - fVar100 * fVar112;
  auVar79 = NEON_ext(auVar106,auVar106,0xc,1);
  auVar102 = NEON_ext(auVar79,auVar106,8,1);
  auVar101 = auVar102._0_12_;
  auVar99._0_4_ = fVar107 * auVar98._0_4_ - fVar78 * fVar42;
  auVar99._4_4_ = fVar108 * auVar98._4_4_ - fVar81 * fVar48;
  auVar99._8_4_ = fVar115 * auVar98._8_4_ - fVar82 * fVar51;
  auVar99._12_4_ = fVar39 * 0.0 - fVar100 * fVar71;
  auVar79 = NEON_ext(auVar99,auVar99,0xc,1);
  auVar79 = NEON_ext(auVar79,auVar99,8,1);
  uStack_c8 = (ulong)(uint)auVar79._8_4_;
  uStack_d0 = auVar79._0_8_;
  if (fVar110 < 1.1920929e-07) {
    uStack_c8 = CONCAT44(fVar53 * 0.0,auVar79._8_4_ * fVar53);
    uStack_d0 = CONCAT44(auVar79._4_4_ * fVar53,auVar79._0_4_ * fVar53);
    auVar101._0_4_ = auVar102._0_4_ * fVar113;
    auVar101._4_4_ = auVar102._4_4_ * fVar113;
    auVar101._8_4_ = auVar102._8_4_ * fVar113;
  }
  lVar22 = 0;
  puVar1 = (undefined8 *)((long)puVar18 + (long)(int)uVar116 * 4);
  *puVar1 = auVar101._0_8_;
  *(int *)(puVar1 + 1) = auVar101._8_4_;
  do {
    *(float *)(lVar19 + (long)(int)uVar116 * 4 + lVar22) = -*(float *)((long)&uStack_d0 + lVar22);
    lVar22 = lVar22 + 4;
  } while (lVar22 != 0xc);
  uVar4 = *(uint *)(param_1 + 0x354);
  fVar53 = *param_2;
  pfVar24 = param_2 + 1;
  if ((uVar4 & 8) != 0) {
    pfVar24 = (float *)(param_1 + 0x35c);
  }
  fVar110 = *pfVar24;
  if (*(char *)(param_1 + 0x348) == '\x01') {
    pfVar24 = *(float **)(param_2 + 0xc);
  }
  else {
    lVar22 = 0;
    puVar23 = *(undefined8 **)(param_2 + 2);
    *puVar23 = auVar56._0_8_;
    *(float *)(puVar23 + 1) = fVar88;
    puVar1 = (undefined8 *)((long)puVar23 + lVar15 * 4);
    *puVar1 = uStack_f0;
    *(float *)(puVar1 + 1) = fVar96;
    fVar53 = fVar110 * fVar53;
    puVar23 = (undefined8 *)
              ((long)puVar23 +
              (-(ulong)((uint)ABS(fVar60) >> 0x1e) & 0xfffffffc00000000 | (ulong)uVar116 << 2));
    *puVar23 = CONCAT44(fVar81,fVar78);
    *(float *)(puVar23 + 1) = fVar82;
    lVar25 = *(long *)(param_2 + 6);
    do {
      *(float *)(lVar25 + lVar22) = -*(float *)((long)&uStack_e0 + lVar22);
      lVar22 = lVar22 + 4;
    } while (lVar22 != 0xc);
    lVar22 = 0;
    do {
      *(float *)(lVar25 + lVar15 * 4 + lVar22) = -*(float *)((long)&uStack_f0 + lVar22);
      lVar22 = lVar22 + 4;
    } while (lVar22 != 0xc);
    lVar22 = 0;
    do {
      *(float *)(lVar25 + (long)(int)uVar116 * 4 + lVar22) = -*(float *)((long)&uStack_c0 + lVar22);
      lVar22 = lVar22 + 4;
    } while (lVar22 != 0xc);
    auVar83._0_4_ = fVar95 * fVar75;
    auVar83._4_4_ = fVar97 * fVar44;
    auVar83._8_4_ = fVar88 * fVar47;
    auVar83._12_4_ = fVar93 * 0.0;
    auVar79 = NEON_ext(auVar83,auVar83,8,1);
    pfVar24 = *(float **)(param_2 + 0xc);
    *pfVar24 = fVar53 * (auVar79._0_4_ + auVar83._0_4_ + auVar83._4_4_);
    auVar84._0_4_ = fVar75 * fVar59;
    auVar84._4_4_ = fVar44 * fVar45;
    auVar84._8_4_ = fVar47 * fVar96;
    auVar84._12_4_ = 0;
    auVar79 = NEON_ext(auVar84,auVar84,8,1);
    pfVar24[lVar15] = fVar53 * (auVar79._0_4_ + auVar84._0_4_ + auVar84._4_4_);
    auVar77._0_4_ = fVar78 * fVar75;
    auVar77._4_4_ = fVar81 * fVar44;
    auVar77._8_4_ = fVar82 * fVar47;
    auVar77._12_4_ = fVar100 * 0.0;
    auVar79 = NEON_ext(auVar77,auVar77,8,1);
    pfVar24[(int)uVar116] = fVar53 * (auVar79._0_4_ + auVar77._0_4_ + auVar77._4_4_);
  }
  iVar17 = (int)fVar60 * 3;
  *(float *)((long)puVar18 + (long)iVar17 * 4) = fVar95;
  lVar22 = lVar15 * 0xc + 4;
  *(float *)((long)puVar18 + lVar22) = fVar97;
  lVar25 = (long)iVar17 * 4 + 8;
  *(float *)((long)puVar18 + lVar25) = fVar88;
  puVar18[lVar15 * 2] = uStack_f0;
  uVar116 = (int)fVar60 << 2 | 2;
  *(float *)((long)puVar18 + (long)(int)uVar116 * 4) = fVar96;
  *(float *)(lVar19 + (long)iVar17 * 4) = -fVar95;
  *(float *)(lVar19 + lVar22) = -fVar97;
  *(float *)(lVar19 + lVar25) = -fVar88;
  *(ulong *)(lVar19 + lVar15 * 0x10) = CONCAT44(-fVar45,-fVar59);
  *(float *)(lVar19 + (long)(int)uVar116 * 4) = -fVar96;
  fVar53 = *param_2;
  uVar35 = NEON_ext(CONCAT44(fVar43,fVar52),auVar76._0_8_,4,1);
  uVar27 = NEON_ext(CONCAT17(uVar65,CONCAT16(uVar64,CONCAT15(uVar63,CONCAT14(uVar62,fVar58)))),
                    auVar55._0_8_,4,1);
  auVar31._0_4_ = fVar52 * (float)uVar27 - (float)uVar35 * fVar58;
  auVar31._4_4_ = fVar43 * (float)((ulong)uVar27 >> 0x20) - (float)((ulong)uVar35 >> 0x20) * fVar73;
  auVar31._8_4_ = fVar46 * fVar58 - fVar52 * auVar80._8_4_;
  auVar31._12_4_ =
       (float)(CONCAT17(uVar65,CONCAT16(uVar64,CONCAT15(uVar63,CONCAT14(uVar62,fVar58)))) >> 0x20) *
       0.0 - fVar43 * 0.0;
  auVar55 = NEON_ext(auVar31,auVar31,0xc,1);
  auVar55 = NEON_ext(auVar55,auVar31,8,1);
  auVar37._0_4_ = fVar95 * auVar55._0_4_;
  auVar37._4_4_ = fVar97 * auVar55._4_4_;
  auVar37._8_4_ = fVar88 * auVar55._8_4_;
  auVar37._12_4_ = fVar93 * 0.0;
  auVar76 = NEON_ext(auVar37,auVar37,8,1);
  pfVar24[iVar17] = fVar110 * fVar53 * (auVar76._0_4_ + auVar37._0_4_ + auVar37._4_4_);
  auVar32._0_4_ = auVar55._0_4_ * fVar59;
  auVar32._4_4_ = auVar55._4_4_ * fVar45;
  auVar32._8_4_ = auVar55._8_4_ * fVar96;
  auVar32._12_4_ = 0;
  auVar55 = NEON_ext(auVar32,auVar32,8,1);
  pfVar24[lVar15 * 4] = fVar110 * fVar53 * (auVar55._0_4_ + auVar32._0_4_ + auVar32._4_4_);
  cVar5 = *(char *)(param_1 + 0x334);
  if (cVar5 == '\0') {
    if (*(char *)(param_1 + 0x349) != '\x01') {
      return;
    }
    bVar12 = false;
    fVar58 = 0.0;
    bVar26 = 1;
  }
  else {
    fVar58 = *(float *)(param_1 + 0x32c) * *(float *)(param_1 + 0x344);
    bVar12 = 0.0 < fVar58;
    bVar26 = *(byte *)(param_1 + 0x349);
  }
  iVar17 = (int)fVar60 * 5;
  lVar25 = (long)iVar17;
  *(float *)((long)puVar18 + (long)iVar17 * 4) = fVar78;
  lVar15 = lVar15 * 0x14 + 4;
  *(float *)((long)puVar18 + lVar15) = fVar81;
  lVar22 = lVar25 * 4 + 8;
  *(float *)((long)puVar18 + lVar22) = fVar82;
  *(float *)(lVar19 + (long)iVar17 * 4) = -fVar78;
  *(float *)(lVar19 + lVar15) = -fVar81;
  *(float *)(lVar19 + lVar22) = -fVar82;
  fVar96 = *(float *)(param_1 + 0x318);
  fVar95 = *(float *)(param_1 + 0x31c);
  uVar27 = _fmodf(fVar96 - fVar95,0x40c90fdb);
  fVar60 = (float)uVar27;
  uVar61 = (undefined4)((ulong)uVar27 >> 0x20);
  if (-3.1415927 <= fVar60) {
    if (3.1415927 < fVar60) {
      fVar60 = fVar60 + -6.2831855;
      uVar61 = 0;
    }
  }
  else {
    fVar60 = fVar60 + 6.2831855;
    uVar61 = 0;
  }
  uVar28 = _fmodf(fVar96 + fVar95,0x40c90fdb);
  fVar96 = (float)uVar28;
  if (-3.1415927 <= fVar96) {
    if (3.1415927 < fVar96) {
      uVar28 = (ulong)(uint)(fVar96 + -6.2831855);
    }
  }
  else {
    uVar28 = (ulong)(uint)(fVar96 + 6.2831855);
  }
  fVar96 = (float)uVar28;
  pfVar24[lVar25] = 0.0;
  if ((uVar4 >> 1 & 1) != 0) {
    fVar110 = *(float *)(param_1 + 0x364);
  }
  if (((fVar60 != fVar96 || cVar5 == '\0') & bVar26) != 0) {
    fVar95 = 0.0;
    if ((uVar4 >> 2 & 1) != 0) {
      *(undefined4 *)(*(long *)(param_2 + 0xe) + lVar25 * 4) = *(undefined4 *)(param_1 + 0x358);
      fVar95 = pfVar24[lVar25];
    }
    fVar88 = *(float *)(param_1 + 0x310);
    fVar97 = (float)FUN_109833c10(*(undefined4 *)(param_1 + 0x340),CONCAT44(uVar61,fVar60),uVar28,
                                  fVar88,param_1);
    pfVar24[lVar25] = fVar95 + *(float *)(param_1 + 0x344) * fVar88 * fVar97;
    *(float *)(*(long *)(param_2 + 0x10) + lVar25 * 4) = -*(float *)(param_1 + 0x314);
    *(undefined4 *)(*(long *)(param_2 + 0x12) + lVar25 * 4) = *(undefined4 *)(param_1 + 0x314);
  }
  if (cVar5 == '\0') {
    return;
  }
  pfVar24[lVar25] = pfVar24[lVar25] + fVar58 * fVar110 * *param_2;
  if ((uVar4 & 1) != 0) {
    *(undefined4 *)(*(long *)(param_2 + 0xe) + lVar25 * 4) = *(undefined4 *)(param_1 + 0x360);
  }
  uVar61 = 0x7f7fffff;
  if (!bVar12) {
    uVar61 = 0;
  }
  if (fVar60 == fVar96) {
    uVar61 = 0x7f7fffff;
  }
  uVar34 = 0;
  if (!(bool)(fVar60 != fVar96 & bVar12)) {
    uVar34 = 0xff7fffff;
  }
  *(undefined4 *)(*(long *)(param_2 + 0x10) + lVar25 * 4) = uVar34;
  *(undefined4 *)(*(long *)(param_2 + 0x12) + lVar25 * 4) = uVar61;
  fVar60 = *(float *)(param_1 + 0x328);
  if (fVar60 <= 0.0) {
    fVar58 = pfVar24[lVar25];
  }
  else {
    auVar33._0_4_ = fVar78 * *(float *)(lVar2 + 0x1c0);
    auVar33._4_4_ = fVar81 * *(float *)(lVar2 + 0x1c4);
    auVar33._8_4_ = fVar82 * *(float *)(lVar2 + 0x1c8);
    auVar33._12_4_ = fVar100 * *(float *)(lVar2 + 0x1cc);
    auVar55 = NEON_ext(auVar33,auVar33,8,1);
    auVar41._0_4_ = fVar78 * *(float *)(lVar3 + 0x1c0);
    auVar41._4_4_ = fVar81 * *(float *)(lVar3 + 0x1c4);
    auVar41._8_4_ = fVar82 * *(float *)(lVar3 + 0x1c8);
    auVar41._12_4_ = fVar100 * *(float *)(lVar3 + 0x1cc);
    auVar76 = NEON_ext(auVar41,auVar41,8,1);
    fVar96 = (auVar33._0_4_ + auVar33._4_4_ + auVar55._0_4_) -
             (auVar41._0_4_ + auVar41._4_4_ + auVar76._0_4_);
    fVar58 = pfVar24[lVar25];
    if (bVar12) {
      if ((0.0 <= fVar96) || (fVar60 = -(fVar60 * fVar96), fVar60 <= fVar58)) goto LAB_10982f530;
    }
    else if ((fVar96 <= 0.0) || (fVar60 = -(fVar60 * fVar96), fVar58 <= fVar60)) goto LAB_10982f530;
    pfVar24[lVar25] = fVar60;
    fVar58 = fVar60;
  }
LAB_10982f530:
  pfVar24[lVar25] = fVar58 * *(float *)(param_1 + 0x324);
  return;
}



/* Entry: 10982f5a8; end: 10982f6cf;  */

void FUN_10982f5a8(long param_1,undefined8 *param_2,float *param_3)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  float fVar3;
  float fVar5;
  float fVar6;
  undefined1 auVar4 [16];
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  float fVar15;
  float fVar16;
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
  undefined1 auVar28 [16];
  
  fVar3 = *(float *)(param_1 + 0x290);
  fVar5 = *(float *)(param_1 + 0x2a0);
  fVar6 = *(float *)(param_1 + 0x2b0);
  fVar9 = (float)param_2[1];
  fVar10 = (float)((ulong)param_2[1] >> 0x20);
  fVar7 = (float)*param_2;
  fVar8 = (float)((ulong)*param_2 >> 0x20);
  auVar13._0_4_ = fVar7 * fVar3;
  auVar13._4_4_ = fVar8 * fVar5;
  auVar13._8_4_ = fVar9 * fVar6;
  auVar13._12_4_ = fVar10 * 0.0;
  fVar15 = fVar3 * *(float *)(param_2 + 2);
  fVar16 = fVar5 * *(float *)((long)param_2 + 0x14);
  fVar17 = fVar6 * *(float *)(param_2 + 3);
  fVar18 = *(float *)((long)param_2 + 0x1c) * 0.0;
  fVar19 = (float)param_2[4];
  fVar20 = (float)((ulong)param_2[4] >> 0x20);
  auVar21._0_4_ = fVar3 * fVar19;
  auVar21._4_4_ = fVar5 * fVar20;
  auVar21._8_4_ = fVar6 * (float)param_2[5];
  auVar4 = NEON_ext(auVar13,auVar13,8,1);
  auVar14._4_4_ = fVar16;
  auVar14._0_4_ = fVar15;
  auVar14._8_4_ = fVar17;
  auVar14._12_4_ = fVar18;
  auVar24._4_4_ = fVar16;
  auVar24._0_4_ = fVar15;
  auVar24._8_4_ = fVar17;
  auVar24._12_4_ = fVar18;
  auVar24 = NEON_ext(auVar14,auVar24,8,1);
  auVar21._12_4_ = 0;
  auVar14 = NEON_ext(auVar21,auVar21,8,1);
  fVar5 = *(float *)(param_1 + 0x294);
  fVar6 = *(float *)(param_1 + 0x2a4);
  fVar3 = *(float *)(param_1 + 0x2b4);
  fVar7 = fVar7 * fVar5;
  fVar8 = fVar8 * fVar6;
  fVar9 = fVar9 * fVar3;
  fVar10 = fVar10 * 0.0;
  auVar11._0_4_ = *(float *)(param_2 + 2) * fVar5;
  auVar11._4_4_ = *(float *)((long)param_2 + 0x14) * fVar6;
  auVar11._8_4_ = *(float *)(param_2 + 3) * fVar3;
  auVar11._12_4_ = *(float *)((long)param_2 + 0x1c) * 0.0;
  fVar19 = fVar19 * fVar5;
  fVar20 = fVar20 * fVar6;
  fVar3 = (float)param_2[5] * fVar3;
  auVar12._4_4_ = fVar8;
  auVar12._0_4_ = fVar7;
  auVar12._8_4_ = fVar9;
  auVar12._12_4_ = fVar10;
  auVar22._4_4_ = fVar8;
  auVar22._0_4_ = fVar7;
  auVar22._8_4_ = fVar9;
  auVar22._12_4_ = fVar10;
  auVar22 = NEON_ext(auVar12,auVar22,8,1);
  auVar25 = NEON_ext(auVar11,auVar11,8,1);
  auVar27._4_4_ = fVar20;
  auVar27._0_4_ = fVar19;
  auVar27._8_4_ = fVar3;
  auVar27._12_4_ = 0;
  auVar28._4_4_ = fVar20;
  auVar28._0_4_ = fVar19;
  auVar28._8_4_ = fVar3;
  auVar28._12_4_ = 0;
  auVar12 = NEON_ext(auVar27,auVar28,8,1);
  fVar3 = *(float *)(param_1 + 0x2d4);
  fVar5 = *(float *)(param_1 + 0x2e4);
  fVar6 = *(float *)(param_1 + 0x2f4);
  auVar23._0_4_ = *param_3 * fVar3;
  auVar23._4_4_ = param_3[1] * fVar5;
  auVar23._8_4_ = param_3[2] * fVar6;
  auVar23._12_4_ = param_3[3] * 0.0;
  auVar26._0_4_ = fVar3 * param_3[4];
  auVar26._4_4_ = fVar5 * param_3[5];
  auVar26._8_4_ = fVar6 * param_3[6];
  auVar26._12_4_ = param_3[7] * 0.0;
  fVar3 = fVar3 * param_3[8];
  fVar5 = fVar5 * param_3[9];
  auVar27 = NEON_ext(auVar23,auVar23,8,1);
  auVar28 = NEON_ext(auVar26,auVar26,8,1);
  fVar9 = auVar23._0_4_ + auVar23._4_4_ + auVar27._0_4_;
  fVar10 = auVar26._0_4_ + auVar26._4_4_ + auVar28._0_4_;
  auVar1._4_4_ = fVar5;
  auVar1._0_4_ = fVar3;
  auVar1._8_4_ = fVar6 * param_3[10];
  auVar1._12_4_ = 0;
  auVar2._4_4_ = fVar5;
  auVar2._0_4_ = fVar3;
  auVar2._8_4_ = fVar6 * param_3[10];
  auVar2._12_4_ = 0;
  auVar27 = NEON_ext(auVar1,auVar2,8,1);
  fVar3 = fVar3 + fVar5 + auVar27._0_4_ + auVar27._4_4_;
  fVar5 = (auVar13._0_4_ + auVar13._4_4_ + auVar4._0_4_) * fVar9;
  fVar6 = (fVar15 + fVar16 + auVar24._0_4_) * fVar10;
  _atan2f(CONCAT44(fVar5 + fVar6 + 0.0,
                   fVar5 + fVar6 +
                   (auVar21._0_4_ + auVar21._4_4_ + auVar14._0_4_ + auVar14._4_4_) * fVar3),
          (fVar7 + fVar8 + auVar22._0_4_) * fVar9 +
          (auVar11._0_4_ + auVar11._4_4_ + auVar25._0_4_) * fVar10 +
          (fVar19 + fVar20 + auVar12._0_4_ + auVar12._4_4_) * fVar3);
  return;
}



/* Entry: 10982f6d0; end: 10982f733;  */

void FUN_10982f6d0(float param_1,float param_2,long param_3)

{
  float fStack_34;
  
  fStack_34 = param_1;
  FUN_109833efc(param_3 + 0x318,&fStack_34);
  FUN_10982f5a8(param_3,*(long *)(param_3 + 0x28) + 0x10,*(long *)(param_3 + 0x30) + 0x10);
  *(float *)(param_3 + 0x310) = (fStack_34 - param_1) / param_2;
  return;
}



/* Entry: 10982f734; end: 10982f807;  */

void FUN_10982f734(undefined4 param_1,long param_2,int param_3,int param_4)

{
  uint uVar1;
  
  if ((param_4 == 5) || (param_4 == -1)) {
    if (param_3 < 3) {
      if (param_3 == 1) {
        *(undefined4 *)(param_2 + 0x35c) = param_1;
        uVar1 = 8;
      }
      else {
        if (param_3 != 2) {
          return;
        }
        *(undefined4 *)(param_2 + 0x364) = param_1;
        uVar1 = 2;
      }
    }
    else if (param_3 == 3) {
      *(undefined4 *)(param_2 + 0x358) = param_1;
      uVar1 = 4;
    }
    else {
      if (param_3 != 4) {
        return;
      }
      *(undefined4 *)(param_2 + 0x360) = param_1;
      uVar1 = 1;
    }
    *(uint *)(param_2 + 0x354) = *(uint *)(param_2 + 0x354) | uVar1;
  }
  return;
}



/* Entry: 10982f808; end: 10982f823;  */

void FUN_10982f808(long param_1)

{
  if (param_1 != 0) {
    FUN_109825740();
  }
  return;
}



/* Entry: 10982f824; end: 10982f82b;  */

undefined8 FUN_10982f824(void)

{
  return 0xe8;
}



/* Entry: 10982f82c; end: 10982f9d7;  */

undefined * FUN_10982f82c(long param_1,long param_2)

{
  byte bVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  
  FUN_109833ca0();
  lVar2 = 0;
  lVar3 = param_1 + 0x290;
  lVar4 = param_2 + 0x40;
  do {
    lVar5 = 0;
    do {
      *(undefined4 *)(lVar4 + lVar5) = *(undefined4 *)(lVar3 + lVar5);
      lVar5 = lVar5 + 4;
    } while (lVar5 != 0x10);
    lVar2 = lVar2 + 1;
    lVar4 = lVar4 + 0x10;
    lVar3 = lVar3 + 0x10;
  } while (lVar2 != 3);
  lVar3 = 0;
  do {
    *(undefined4 *)(param_2 + 0x70 + lVar3) = *(undefined4 *)(param_1 + 0x2c0 + lVar3);
    lVar3 = lVar3 + 4;
  } while (lVar3 != 0x10);
  lVar2 = 0;
  lVar3 = param_1 + 0x2d0;
  lVar4 = param_2 + 0x80;
  do {
    lVar5 = 0;
    do {
      *(undefined4 *)(lVar4 + lVar5) = *(undefined4 *)(lVar3 + lVar5);
      lVar5 = lVar5 + 4;
    } while (lVar5 != 0x10);
    lVar2 = lVar2 + 1;
    lVar4 = lVar4 + 0x10;
    lVar3 = lVar3 + 0x10;
  } while (lVar2 != 3);
  lVar3 = 0;
  do {
    *(undefined4 *)(param_2 + 0xb0 + lVar3) = *(undefined4 *)(param_1 + 0x300 + lVar3);
    lVar3 = lVar3 + 4;
  } while (lVar3 != 0x10);
  bVar1 = *(byte *)(param_1 + 0x348);
  *(uint *)(param_2 + 200) = (uint)*(byte *)(param_1 + 0x349);
  *(undefined8 *)(param_2 + 0xcc) = *(undefined8 *)(param_1 + 0x310);
  *(uint *)(param_2 + 0xc0) = (uint)*(byte *)(param_1 + 0x34c);
  *(uint *)(param_2 + 0xc4) = (uint)bVar1;
  fVar7 = *(float *)(param_1 + 0x318);
  fVar8 = *(float *)(param_1 + 0x31c);
  fVar6 = fVar7 - fVar8;
  _fmodf(fVar6,0x40c90fdb);
  if (-3.1415927 <= fVar6) {
    if (3.1415927 < fVar6) {
      fVar6 = fVar6 + -6.2831855;
    }
  }
  else {
    fVar6 = fVar6 + 6.2831855;
  }
  *(float *)(param_2 + 0xd4) = fVar6;
  fVar7 = fVar7 + fVar8;
  _fmodf(fVar7,0x40c90fdb);
  if (-3.1415927 <= fVar7) {
    if (3.1415927 < fVar7) {
      fVar7 = fVar7 + -6.2831855;
    }
  }
  else {
    fVar7 = fVar7 + 6.2831855;
  }
  *(float *)(param_2 + 0xd8) = fVar7;
  *(undefined8 *)(param_2 + 0xdc) = *(undefined8 *)(param_1 + 800);
  *(undefined4 *)(param_2 + 0xe4) = *(undefined4 *)(param_1 + 0x328);
  return &UNK_10f580c1a;
}



/* Entry: 10982f9d8; end: 10982f9df;  */

undefined4 FUN_10982f9d8(long param_1)

{
  return *(undefined4 *)(param_1 + 0x354);
}



/* Entry: 10982f9e0; end: 10982fb7f;  */

void FUN_10982f9e0(long param_1)

{
  undefined1 (*pauVar1) [12];
  long lVar2;
  long lVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  ulong uVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  long lVar11;
  long lVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  undefined8 extraout_d1;
  undefined1 in_q1 [16];
  undefined1 auVar19 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined8 extraout_var;
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  float fVar31;
  float fVar32;
  float fVar33;
  undefined4 uVar34;
  undefined8 uStack_d0;
  ulong uStack_c8;
  undefined8 uStack_c0;
  ulong uStack_b8;
  undefined8 uStack_b0;
  ulong uStack_a8;
  undefined8 uStack_a0;
  ulong uStack_98;
  undefined8 uStack_90;
  ulong uStack_88;
  undefined8 uStack_80;
  ulong uStack_78;
  undefined8 uStack_70;
  ulong uStack_68;
  undefined8 uStack_60;
  ulong uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  
  lVar12 = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  lVar11 = param_1 + 0x50;
  uStack_50 = 0;
  uStack_48 = 0;
  do {
    *(undefined4 *)((long)&uStack_50 + lVar12) = 0x3f800000;
    lVar2 = *(long *)(param_1 + 0x28);
    lVar3 = *(long *)(param_1 + 0x30);
    auVar19._4_12_ = in_q1._4_12_;
    auVar19._0_4_ = *(undefined4 *)(lVar2 + 0x10);
    auVar21._12_4_ = in_q1._12_4_;
    auVar21._0_8_ = auVar19._0_8_;
    auVar21._8_4_ = *(undefined4 *)(lVar2 + 0x18);
    auVar20._8_8_ = auVar21._8_8_;
    auVar20._0_8_ = CONCAT44(*(undefined4 *)(lVar2 + 0x20),*(undefined4 *)(lVar2 + 0x10));
    auVar22._0_12_ = auVar20._0_12_;
    auVar22._12_4_ = *(undefined4 *)(lVar2 + 0x28);
    auVar26 = *(undefined1 (*) [16])(lVar2 + 0x30);
    fVar16 = (float)*(undefined8 *)(lVar2 + 0x48);
    fVar18 = (float)*(undefined8 *)(lVar2 + 0x40);
    fVar14 = (float)((ulong)*(undefined8 *)(lVar2 + 0x40) >> 0x20);
    auVar28 = NEON_ext(auVar26,auVar26,8,1);
    uStack_68 = (ulong)(uint)auVar26._4_4_;
    uStack_70 = CONCAT44(*(undefined4 *)(lVar2 + 0x24),*(undefined4 *)(lVar2 + 0x14));
    uStack_58 = (ulong)auVar28._0_4_;
    auVar28 = NEON_ext(auVar22,auVar22,8,1);
    uStack_78 = auVar26._0_8_ & 0xffffffff;
    uStack_60 = auVar28._0_8_;
    fVar13 = *(float *)(param_1 + 0x170);
    fVar15 = *(float *)(param_1 + 0x174);
    fVar17 = *(float *)(param_1 + 0x178);
    fVar8 = *(float *)(param_1 + 0x180);
    fVar9 = *(float *)(param_1 + 0x184);
    fVar10 = *(float *)(param_1 + 0x188);
    auVar25._0_4_ = auVar26._0_4_ * fVar13;
    auVar25._4_4_ = auVar26._4_4_ * fVar15;
    auVar25._8_4_ = auVar26._8_4_ * fVar17;
    auVar29._0_8_ = CONCAT44(*(undefined4 *)(lVar3 + 0x20),*(undefined4 *)(lVar3 + 0x10));
    auVar29._8_4_ = *(undefined4 *)(lVar3 + 0x18);
    auVar29._12_4_ = *(undefined4 *)(lVar3 + 0x28);
    pauVar1 = (undefined1 (*) [12])(lVar3 + 0x30);
    uVar34 = (undefined4)((ulong)*(undefined8 *)(lVar3 + 0x38) >> 0x20);
    uVar7 = *(ulong *)*pauVar1;
    fVar32 = (float)(uVar7 >> 0x20);
    auVar30._12_4_ = uVar34;
    auVar30._0_12_ = *pauVar1;
    auVar4._12_4_ = uVar34;
    auVar4._0_12_ = *pauVar1;
    auVar28 = NEON_ext(auVar30,auVar4,8,1);
    uStack_a8 = uVar7 & 0xffffffff;
    uStack_a0 = CONCAT44(*(undefined4 *)(lVar3 + 0x24),*(undefined4 *)(lVar3 + 0x14));
    auVar26 = NEON_ext(auVar29,auVar29,8,1);
    uStack_98 = (ulong)(uint)fVar32;
    uStack_88 = (ulong)auVar28._0_4_;
    uStack_90 = auVar26._0_8_;
    fVar31 = (float)uVar7 * fVar8;
    fVar32 = fVar32 * fVar9;
    fVar33 = (float)*(undefined8 *)(lVar3 + 0x38) * fVar10;
    auVar23._0_4_ = *(float *)(lVar2 + 0x10) * fVar13;
    auVar23._4_4_ = *(float *)(lVar2 + 0x14) * fVar15;
    auVar23._8_4_ = *(float *)(lVar2 + 0x18) * fVar17;
    auVar23._12_4_ = *(float *)(lVar2 + 0x1c) * *(float *)(param_1 + 0x17c);
    auVar27._0_4_ = fVar13 * *(float *)(lVar2 + 0x20);
    auVar27._4_4_ = fVar15 * *(float *)(lVar2 + 0x24);
    auVar27._8_4_ = fVar17 * *(float *)(lVar2 + 0x28);
    auVar27._12_4_ = *(float *)(param_1 + 0x17c) * *(float *)(lVar2 + 0x2c);
    auVar28 = NEON_ext(auVar23,auVar23,8,1);
    auVar30 = NEON_ext(auVar27,auVar27,8,1);
    auVar25._12_4_ = 0;
    auVar26 = NEON_ext(auVar25,auVar25,8,1);
    uStack_b8 = (ulong)(uint)((fVar16 + auVar25._0_4_ + auVar25._4_4_ +
                                        auVar26._0_4_ + auVar26._4_4_) - fVar16);
    uStack_c0 = CONCAT44((fVar14 + auVar27._0_4_ + auVar27._4_4_ + auVar30._0_4_) - fVar14,
                         (fVar18 + auVar23._0_4_ + auVar23._4_4_ + auVar28._0_4_) - fVar18);
    fVar13 = (float)*(undefined8 *)(lVar3 + 0x10) * fVar8;
    fVar15 = (float)((ulong)*(undefined8 *)(lVar3 + 0x10) >> 0x20) * fVar9;
    fVar17 = (float)*(undefined8 *)(lVar3 + 0x18) * fVar10;
    fVar18 = (float)((ulong)*(undefined8 *)(lVar3 + 0x18) >> 0x20) * *(float *)(param_1 + 0x18c);
    auVar24._0_4_ = fVar8 * *(float *)(lVar3 + 0x20);
    auVar24._4_4_ = fVar9 * *(float *)(lVar3 + 0x24);
    auVar24._8_4_ = fVar10 * *(float *)(lVar3 + 0x28);
    auVar24._12_4_ = *(float *)(param_1 + 0x18c) * *(float *)(lVar3 + 0x2c);
    auVar26._4_4_ = fVar15;
    auVar26._0_4_ = fVar13;
    auVar26._8_4_ = fVar17;
    auVar26._12_4_ = fVar18;
    auVar28._4_4_ = fVar15;
    auVar28._0_4_ = fVar13;
    auVar28._8_4_ = fVar17;
    auVar28._12_4_ = fVar18;
    auVar28 = NEON_ext(auVar26,auVar28,8,1);
    auVar30 = NEON_ext(auVar24,auVar24,8,1);
    auVar5._4_4_ = fVar32;
    auVar5._0_4_ = fVar31;
    auVar5._8_4_ = fVar33;
    auVar5._12_4_ = 0;
    auVar6._4_4_ = fVar32;
    auVar6._0_4_ = fVar31;
    auVar6._8_4_ = fVar33;
    auVar6._12_4_ = 0;
    auVar26 = NEON_ext(auVar5,auVar6,8,1);
    uStack_c8 = (ulong)(uint)((*(float *)(lVar3 + 0x48) +
                              fVar31 + fVar32 + auVar26._0_4_ + auVar26._4_4_) -
                             *(float *)(lVar3 + 0x48));
    uStack_d0 = CONCAT44((*(float *)(lVar3 + 0x44) + auVar24._0_4_ + auVar24._4_4_ + auVar30._0_4_)
                         - *(float *)(lVar3 + 0x44),
                         (*(float *)(lVar3 + 0x40) + fVar13 + fVar15 + auVar28._0_4_) -
                         *(float *)(lVar3 + 0x40));
    uStack_b0 = auVar29._0_8_;
    uStack_80 = auVar20._0_8_;
    FUN_10982b588(*(undefined4 *)(lVar2 + 0x1d0),lVar11,&uStack_80,&uStack_b0,&uStack_c0,&uStack_d0,
                  &uStack_50,lVar2 + 0x210,lVar3 + 0x210);
    in_q1._8_8_ = extraout_var;
    in_q1._0_8_ = extraout_d1;
    *(undefined4 *)((long)&uStack_50 + lVar12) = 0;
    lVar12 = lVar12 + 4;
    lVar11 = lVar11 + 0x60;
  } while (lVar12 != 0xc);
  return;
}



/* Entry: 10982fb80; end: 10982fb97;  */

void FUN_10982fb80(long param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  if (*(char *)(param_1 + 0x19c) == '\0') {
    uVar1 = 3;
  }
  *param_2 = uVar1;
  param_2[1] = uVar1;
  return;
}



/* Entry: 10982fb98; end: 10982fdcf;  */

void FUN_10982fb98(long param_1,float *param_2)

{
  float *pfVar1;
  long lVar2;
  undefined4 *puVar3;
  uint uVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  long lVar10;
  undefined4 *puVar11;
  long lVar12;
  long lVar13;
  float *pfVar14;
  undefined4 uVar15;
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
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
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined8 uStack_20;
  ulong uStack_18;
  undefined8 uStack_10;
  ulong uStack_8;
  
  lVar10 = 0;
  lVar12 = *(long *)(param_1 + 0x28);
  lVar2 = *(long *)(param_1 + 0x30);
  puVar11 = *(undefined4 **)(param_2 + 2);
  puVar3 = *(undefined4 **)(param_2 + 4);
  *puVar11 = 0x3f800000;
  lVar13 = (long)(int)param_2[10];
  puVar11[lVar13 + 1] = 0x3f800000;
  puVar11[lVar13 * 2 + 2] = 0x3f800000;
  fVar22 = *(float *)(param_1 + 0x170);
  fVar24 = *(float *)(param_1 + 0x174);
  fVar26 = *(float *)(param_1 + 0x178);
  auVar17._0_4_ = *(float *)(lVar12 + 0x10) * fVar22;
  auVar17._4_4_ = *(float *)(lVar12 + 0x14) * fVar24;
  auVar17._8_4_ = *(float *)(lVar12 + 0x18) * fVar26;
  auVar17._12_4_ = *(float *)(lVar12 + 0x1c) * *(float *)(param_1 + 0x17c);
  fVar18 = fVar22 * (float)*(undefined8 *)(lVar12 + 0x20);
  fVar19 = fVar24 * (float)((ulong)*(undefined8 *)(lVar12 + 0x20) >> 0x20);
  fVar20 = fVar26 * (float)*(undefined8 *)(lVar12 + 0x28);
  fVar21 = *(float *)(param_1 + 0x17c) * (float)((ulong)*(undefined8 *)(lVar12 + 0x28) >> 0x20);
  fVar22 = fVar22 * (float)*(undefined8 *)(lVar12 + 0x30);
  fVar24 = fVar24 * (float)((ulong)*(undefined8 *)(lVar12 + 0x30) >> 0x20);
  fVar26 = fVar26 * (float)*(undefined8 *)(lVar12 + 0x38);
  auVar16 = NEON_ext(auVar17,auVar17,8,1);
  auVar29._4_4_ = fVar19;
  auVar29._0_4_ = fVar18;
  auVar29._8_4_ = fVar20;
  auVar29._12_4_ = fVar21;
  auVar31._4_4_ = fVar19;
  auVar31._0_4_ = fVar18;
  auVar31._8_4_ = fVar20;
  auVar31._12_4_ = fVar21;
  auVar29 = NEON_ext(auVar29,auVar31,8,1);
  fVar20 = auVar17._0_4_ + auVar17._4_4_ + auVar16._0_4_;
  fVar18 = fVar18 + fVar19 + auVar29._0_4_;
  auVar6._4_4_ = fVar24;
  auVar6._0_4_ = fVar22;
  auVar6._8_4_ = fVar26;
  auVar6._12_4_ = 0;
  auVar7._4_4_ = fVar24;
  auVar7._0_4_ = fVar22;
  auVar7._8_4_ = fVar26;
  auVar7._12_4_ = 0;
  auVar29 = NEON_ext(auVar6,auVar7,8,1);
  fVar22 = fVar22 + fVar24 + auVar29._0_4_ + auVar29._4_4_;
  pfVar14 = (float *)(puVar3 + lVar13);
  pfVar1 = (float *)(puVar3 + lVar13 * 2);
  fVar24 = -fVar20;
  fVar26 = -fVar18;
  fVar19 = -fVar22;
  *puVar3 = 0;
  puVar3[1] = -fVar19;
  puVar3[2] = fVar26;
  puVar3[3] = 0;
  *pfVar14 = fVar19;
  pfVar14[1] = 0.0;
  pfVar14[2] = -fVar24;
  pfVar14[3] = 0.0;
  *pfVar1 = -fVar26;
  pfVar1[1] = fVar24;
  pfVar1[2] = 0.0;
  pfVar1[3] = 0.0;
  puVar11 = *(undefined4 **)(param_2 + 6);
  puVar3 = *(undefined4 **)(param_2 + 8);
  *puVar11 = 0xbf800000;
  lVar13 = (long)(int)param_2[10];
  puVar11[lVar13 + 1] = 0xbf800000;
  puVar11[lVar13 * 2 + 2] = 0xbf800000;
  fVar19 = (float)*(undefined8 *)(param_1 + 0x188);
  fVar21 = (float)((ulong)*(undefined8 *)(param_1 + 0x188) >> 0x20);
  fVar24 = (float)*(undefined8 *)(param_1 + 0x180);
  fVar26 = (float)((ulong)*(undefined8 *)(param_1 + 0x180) >> 0x20);
  fVar23 = (float)*(undefined8 *)(lVar2 + 0x10) * fVar24;
  fVar25 = (float)((ulong)*(undefined8 *)(lVar2 + 0x10) >> 0x20) * fVar26;
  fVar27 = (float)*(undefined8 *)(lVar2 + 0x18) * fVar19;
  fVar28 = (float)((ulong)*(undefined8 *)(lVar2 + 0x18) >> 0x20) * fVar21;
  auVar30._0_4_ = fVar24 * *(float *)(lVar2 + 0x20);
  auVar30._4_4_ = fVar26 * *(float *)(lVar2 + 0x24);
  auVar30._8_4_ = fVar19 * *(float *)(lVar2 + 0x28);
  auVar30._12_4_ = fVar21 * *(float *)(lVar2 + 0x2c);
  fVar24 = fVar24 * *(float *)(lVar2 + 0x30);
  fVar26 = fVar26 * *(float *)(lVar2 + 0x34);
  fVar19 = fVar19 * *(float *)(lVar2 + 0x38);
  auVar8._4_4_ = fVar25;
  auVar8._0_4_ = fVar23;
  auVar8._8_4_ = fVar27;
  auVar8._12_4_ = fVar28;
  auVar9._4_4_ = fVar25;
  auVar9._0_4_ = fVar23;
  auVar9._8_4_ = fVar27;
  auVar9._12_4_ = fVar28;
  auVar29 = NEON_ext(auVar8,auVar9,8,1);
  auVar31 = NEON_ext(auVar30,auVar30,8,1);
  fVar21 = fVar23 + fVar25 + auVar29._0_4_;
  fVar23 = auVar30._0_4_ + auVar30._4_4_ + auVar31._0_4_;
  auVar16._4_4_ = fVar26;
  auVar16._0_4_ = fVar24;
  auVar16._8_4_ = fVar19;
  auVar16._12_4_ = 0;
  auVar5._4_4_ = fVar26;
  auVar5._0_4_ = fVar24;
  auVar5._8_4_ = fVar19;
  auVar5._12_4_ = 0;
  auVar29 = NEON_ext(auVar16,auVar5,8,1);
  fVar24 = fVar24 + fVar26 + auVar29._0_4_ + auVar29._4_4_;
  pfVar14 = (float *)(puVar3 + lVar13);
  pfVar1 = (float *)(puVar3 + lVar13 * 2);
  *puVar3 = 0;
  puVar3[1] = -fVar24;
  puVar3[2] = fVar23;
  puVar3[3] = 0;
  *pfVar14 = fVar24;
  pfVar14[1] = 0.0;
  pfVar14[2] = -fVar21;
  pfVar14[3] = 0.0;
  *pfVar1 = -fVar23;
  pfVar1[1] = fVar21;
  uStack_18 = (ulong)(uint)fVar24;
  uStack_20 = CONCAT44(fVar23,fVar21);
  uStack_8 = (ulong)(uint)fVar22;
  uStack_10 = CONCAT44(fVar18,fVar20);
  pfVar1[2] = 0.0;
  pfVar1[3] = 0.0;
  uVar4 = *(uint *)(param_1 + 400);
  pfVar14 = param_2 + 1;
  if ((uVar4 & 1) != 0) {
    pfVar14 = (float *)(param_1 + 0x194);
  }
  fVar22 = *pfVar14;
  fVar24 = *param_2;
  pfVar14 = *(float **)(param_2 + 0xc);
  lVar13 = (long)(int)param_2[10];
  do {
    *pfVar14 = fVar22 * fVar24 *
               (((*(float *)((long)&uStack_20 + lVar10) + *(float *)(lVar2 + 0x40 + lVar10)) -
                *(float *)((long)&uStack_10 + lVar10)) - *(float *)(lVar12 + 0x40 + lVar10));
    lVar10 = lVar10 + 4;
    pfVar14 = pfVar14 + lVar13;
  } while (lVar10 != 0xc);
  if ((uVar4 >> 1 & 1) != 0) {
    puVar11 = *(undefined4 **)(param_2 + 0xe);
    uVar15 = *(undefined4 *)(param_1 + 0x198);
    *puVar11 = uVar15;
    puVar11[lVar13] = uVar15;
    puVar11[lVar13 * 2] = uVar15;
  }
  lVar10 = 0;
  fVar24 = *(float *)(param_1 + 0x1a8);
  lVar12 = 2;
  fVar22 = fVar24;
  while( true ) {
    if (0.0 < fVar22) {
      lVar2 = *(long *)(param_2 + 0x12);
      *(float *)(*(long *)(param_2 + 0x10) + lVar10) = -fVar24;
      *(float *)(lVar2 + lVar10) = fVar24;
    }
    if (lVar12 == 0) break;
    fVar22 = *(float *)(param_1 + 0x1a8);
    lVar10 = lVar10 + lVar13 * 4;
    lVar12 = lVar12 + -1;
  }
  param_2[0x15] = *(float *)(param_1 + 0x1a4);
  return;
}



/* Entry: 10982fdd0; end: 10982fe57;  */

void FUN_10982fdd0(undefined4 param_1,long param_2,int param_3,int param_4)

{
  uint uVar1;
  
  if (param_4 != -1) {
    return;
  }
  if (param_3 - 3U < 2) {
    *(undefined4 *)(param_2 + 0x198) = param_1;
    uVar1 = 2;
  }
  else {
    if (1 < param_3 - 1U) {
      return;
    }
    *(undefined4 *)(param_2 + 0x194) = param_1;
    uVar1 = 1;
  }
  *(uint *)(param_2 + 400) = *(uint *)(param_2 + 400) | uVar1;
  return;
}



/* Entry: 10982fe58; end: 10982fe73;  */

void FUN_10982fe58(long param_1)

{
  if (param_1 != 0) {
    FUN_109825740();
  }
  return;
}



/* Entry: 10982fe74; end: 10982fe7b;  */

undefined8 FUN_10982fe74(void)

{
  return 0x60;
}



/* Entry: 10982fe7c; end: 10982fee7;  */

undefined * FUN_10982fe7c(long param_1,long param_2)

{
  long lVar1;
  
  FUN_109833ca0();
  lVar1 = 0;
  do {
    *(undefined4 *)(param_2 + 0x40 + lVar1) = *(undefined4 *)(param_1 + 0x170 + lVar1);
    lVar1 = lVar1 + 4;
  } while (lVar1 != 0x10);
  lVar1 = 0;
  do {
    *(undefined4 *)(param_2 + 0x50 + lVar1) = *(undefined4 *)(param_1 + 0x180 + lVar1);
    lVar1 = lVar1 + 4;
  } while (lVar1 != 0x10);
  return &UNK_10f580c35;
}



/* Entry: 10982fee8; end: 109830397;  */

undefined4 FUN_10982fee8(long param_1)

{
  return *(undefined4 *)(param_1 + 400);
}



/* Entry: 109830398; end: 109830417;  */

undefined8 * FUN_109830398(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110b144e8;
  FUN_10980501c(param_1 + 0x26);
  FUN_109833ae0(param_1 + 0x21);
  FUN_10980501c(param_1 + 0x1d);
  FUN_10980501c(param_1 + 0x19);
  FUN_10980501c(param_1 + 0x15);
  FUN_109833a94(param_1 + 0x11);
  FUN_109833a94(param_1 + 0xd);
  FUN_109833a94(param_1 + 9);
  FUN_109833a94(param_1 + 5);
  FUN_109833a48(param_1 + 1);
  return param_1;
}



/* Entry: 109830418; end: 10983041b;  */

undefined8 * FUN_109830418(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110b144e8;
  FUN_10980501c(param_1 + 0x26);
  FUN_109833ae0(param_1 + 0x21);
  FUN_10980501c(param_1 + 0x1d);
  FUN_10980501c(param_1 + 0x19);
  FUN_10980501c(param_1 + 0x15);
  FUN_109833a94(param_1 + 0x11);
  FUN_109833a94(param_1 + 0xd);
  FUN_109833a94(param_1 + 9);
  FUN_109833a94(param_1 + 5);
  FUN_109833a48(param_1 + 1);
  return param_1;
}



/* Entry: 10983041c; end: 10983043b;  */

void FUN_10983041c(long param_1)

{
  FUN_109830398();
  if (param_1 != 0) {
    FUN_109825740();
  }
  return;
}



/* Entry: 10983043c; end: 10983052f;  */

int FUN_10983043c(long param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  ulong uVar3;
  
  uVar1 = *(int *)(param_1 + 0x170) * 0x19660d + 0x3c6ef35f;
  uVar3 = (ulong)uVar1;
  *(ulong *)(param_1 + 0x170) = uVar3;
  if (param_2 < 0x10001) {
    uVar1 = uVar1 ^ uVar1 >> 0x10;
    uVar3 = (ulong)uVar1;
    if (param_2 < 0x101) {
      uVar1 = uVar1 ^ uVar1 >> 8;
      uVar3 = (ulong)uVar1;
      if (param_2 < 0x11) {
        uVar1 = uVar1 ^ uVar1 >> 4;
        uVar3 = (ulong)uVar1;
        if (param_2 < 5) {
          uVar1 = uVar1 ^ uVar1 >> 2;
          uVar3 = (ulong)uVar1;
          if (param_2 < 3) {
            uVar3 = (ulong)(uVar1 ^ uVar1 >> 1);
          }
        }
      }
    }
  }
  iVar2 = 0;
  if ((long)(int)param_2 != 0) {
    iVar2 = (int)(uVar3 / (ulong)(long)(int)param_2);
  }
  return (int)uVar3 - iVar2 * param_2;
}



/* Entry: 109830530; end: 1098309bf;  */

void FUN_109830530(undefined8 param_1,float param_2,float param_3,undefined4 param_4,long param_5,
                  undefined1 (*param_6) [16],int param_7,int param_8,undefined4 param_9,
                  long param_10,long param_11)

{
  undefined8 *puVar1;
  uint uVar2;
  int iVar3;
  undefined1 auVar4 [16];
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long lVar11;
  uint uVar12;
  long lVar13;
  undefined8 *puVar14;
  long lVar15;
  long lVar16;
  float in_register_00005008;
  float in_register_0000500c;
  undefined1 in_q1 [16];
  undefined1 auVar17 [16];
  undefined8 uVar18;
  float fVar25;
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  float fVar26;
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [12];
  undefined1 auVar30 [16];
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
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  float fVar47;
  undefined1 auVar48 [16];
  float fVar49;
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  ulong uVar52;
  float fVar53;
  undefined1 auVar31 [16];
  
  fVar26 = (float)((ulong)param_1 >> 0x20);
  uVar2 = *(uint *)(param_5 + 0x6c);
  uVar12 = uVar2;
  if (uVar2 == *(uint *)(param_5 + 0x70)) {
    iVar3 = uVar2 << 1;
    if (uVar2 == 0) {
      iVar3 = 1;
    }
    if ((int)uVar2 < iVar3) {
      if (iVar3 == 0) {
        lVar11 = 0;
      }
      else {
        lVar11 = (long)iVar3 * 0xa0;
        FUN_1098256f4(lVar11,0x10);
        uVar12 = *(uint *)(param_5 + 0x6c);
      }
      if (0 < (int)uVar12) {
        lVar13 = 0;
        do {
          puVar14 = (undefined8 *)(lVar11 + lVar13);
          puVar1 = (undefined8 *)(*(long *)(param_5 + 0x78) + lVar13);
          uVar18 = *puVar1;
          puVar14[1] = puVar1[1];
          *puVar14 = uVar18;
          uVar18 = puVar1[2];
          puVar14[3] = puVar1[3];
          puVar14[2] = uVar18;
          uVar18 = puVar1[4];
          puVar14[5] = puVar1[5];
          puVar14[4] = uVar18;
          uVar18 = puVar1[6];
          puVar14[7] = puVar1[7];
          puVar14[6] = uVar18;
          uVar18 = puVar1[8];
          puVar14[9] = puVar1[9];
          puVar14[8] = uVar18;
          uVar18 = puVar1[10];
          puVar14[0xb] = puVar1[0xb];
          puVar14[10] = uVar18;
          uVar6 = puVar1[0xc];
          uVar7 = puVar1[0xd];
          uVar18 = puVar1[0xe];
          uVar5 = puVar1[0xf];
          uVar8 = puVar1[0x10];
          uVar9 = puVar1[0x12];
          uVar10 = puVar1[0x13];
          puVar14[0x11] = puVar1[0x11];
          puVar14[0x10] = uVar8;
          puVar14[0x13] = uVar10;
          puVar14[0x12] = uVar9;
          puVar14[0xd] = uVar7;
          puVar14[0xc] = uVar6;
          puVar14[0xf] = uVar5;
          puVar14[0xe] = uVar18;
          lVar13 = lVar13 + 0xa0;
        } while ((ulong)uVar12 * 0xa0 - lVar13 != 0);
      }
      if ((*(long *)(param_5 + 0x78) != 0) && (*(char *)(param_5 + 0x80) == '\x01')) {
        FUN_109825740();
      }
      *(undefined1 *)(param_5 + 0x80) = 1;
      *(long *)(param_5 + 0x78) = lVar11;
      *(int *)(param_5 + 0x70) = iVar3;
      uVar12 = *(uint *)(param_5 + 0x6c);
    }
  }
  *(uint *)(param_5 + 0x6c) = uVar12 + 1;
  puVar14 = (undefined8 *)(*(long *)(param_5 + 0x78) + (long)(int)uVar2 * 0xa0);
  lVar11 = *(long *)(param_5 + 0x18) + (long)param_7 * 0x100;
  lVar13 = *(long *)(param_5 + 0x18) + (long)param_8 * 0x100;
  lVar16 = *(long *)(lVar11 + 0xf0);
  lVar15 = *(long *)(lVar13 + 0xf0);
  *(undefined4 *)((long)puVar14 + 0x94) = param_9;
  *(int *)(puVar14 + 0x13) = param_7;
  *(int *)((long)puVar14 + 0x9c) = param_8;
  fVar53 = *(float *)(param_10 + 0x54);
  *(float *)(puVar14 + 0xd) = fVar53;
  puVar14[0x11] = 0;
  puVar14[0xc] = 0;
  auVar34._8_4_ = in_register_00005008;
  auVar34._0_8_ = param_1;
  auVar34._12_4_ = in_register_0000500c;
  auVar24._8_4_ = in_register_00005008;
  auVar24._0_8_ = param_1;
  auVar24._12_4_ = in_register_0000500c;
  auVar34 = NEON_ext(auVar34,auVar24,0xc,1);
  if (lVar16 == 0) {
    uVar18 = 0;
    uVar52 = 0;
    puVar14[1] = 0;
    *puVar14 = 0;
    puVar14[3] = 0;
    puVar14[2] = 0;
    auVar24 = ZEXT216(0);
    auVar19 = ZEXT216(0);
  }
  else {
    auVar24 = *param_6;
    auVar30._8_4_ = in_register_00005008;
    auVar30._0_8_ = param_1;
    auVar30._12_4_ = in_register_0000500c;
    auVar30 = NEON_ext(auVar34,auVar30,8,1);
    auVar19 = NEON_ext(auVar24,auVar24,0xc,1);
    auVar19 = NEON_ext(auVar19,auVar24,8,1);
    auVar43._0_4_ = (float)param_1 * auVar19._0_4_ - auVar30._0_4_ * auVar24._0_4_;
    auVar43._4_4_ = fVar26 * auVar19._4_4_ - auVar30._4_4_ * auVar24._4_4_;
    auVar43._8_4_ = in_register_00005008 * auVar19._8_4_ - auVar30._8_4_ * auVar24._8_4_;
    auVar43._12_4_ = in_register_0000500c * auVar19._12_4_ - auVar30._12_4_ * auVar24._12_4_;
    auVar19 = NEON_ext(auVar43,auVar43,0xc,1);
    auVar19 = NEON_ext(auVar19,auVar43,8,1);
    uVar18 = auVar19._0_8_;
    uVar52 = auVar19._8_8_ & 0xffffffff;
    puVar14[1] = uVar52;
    *puVar14 = uVar18;
    puVar14[3] = auVar24._8_8_;
    puVar14[2] = auVar24._0_8_;
    fVar47 = auVar19._0_4_;
    auVar51._0_4_ = *(float *)(lVar16 + 0x180) * fVar47;
    fVar49 = auVar19._4_4_;
    auVar51._4_4_ = *(float *)(lVar16 + 0x184) * fVar49;
    fVar25 = auVar19._8_4_;
    auVar51._8_4_ = *(float *)(lVar16 + 0x188) * fVar25;
    auVar51._12_4_ = *(float *)(lVar16 + 0x18c) * 0.0;
    auVar40._0_4_ = *(float *)(lVar16 + 400) * fVar47;
    auVar40._4_4_ = *(float *)(lVar16 + 0x194) * fVar49;
    auVar40._8_4_ = *(float *)(lVar16 + 0x198) * fVar25;
    auVar40._12_4_ = *(float *)(lVar16 + 0x19c) * 0.0;
    auVar20._0_4_ = *(float *)(lVar16 + 0x1a0) * fVar47;
    auVar20._4_4_ = *(float *)(lVar16 + 0x1a4) * fVar49;
    auVar20._8_4_ = *(float *)(lVar16 + 0x1a8) * fVar25;
    auVar19 = NEON_ext(auVar51,auVar51,8,1);
    auVar43 = NEON_ext(auVar40,auVar40,8,1);
    auVar20._12_4_ = 0;
    auVar30 = NEON_ext(auVar20,auVar20,8,1);
    auVar19._0_4_ = *(float *)(lVar16 + 0x2b0) * (auVar51._0_4_ + auVar51._4_4_ + auVar19._0_4_);
    auVar19._4_4_ = *(float *)(lVar16 + 0x2b4) * (auVar40._0_4_ + auVar40._4_4_ + auVar43._0_4_);
    auVar19._8_4_ =
         *(float *)(lVar16 + 0x2b8) *
         (auVar20._0_4_ + auVar20._4_4_ + auVar30._0_4_ + auVar30._4_4_);
    auVar19._12_4_ = *(float *)(lVar16 + 700) * 0.0;
  }
  puVar14[9] = auVar19._8_8_;
  puVar14[8] = auVar19._0_8_;
  auVar30 = NEON_ext(in_q1,in_q1,0xc,1);
  if (lVar15 == 0) {
    auVar22._0_14_ = ZEXT214(0);
    auVar22._14_2_ = 0;
    puVar14[5] = 0;
    puVar14[4] = 0;
    puVar14[7] = 0;
    puVar14[6] = 0;
    auVar31 = ZEXT216(0);
    auVar45 = ZEXT216(0);
  }
  else {
    auVar20 = *param_6;
    auVar29._0_8_ = auVar20._0_8_ ^ 0x8000000080000000;
    auVar29[8] = auVar20[8];
    auVar29[9] = auVar20[9];
    auVar29[10] = auVar20[10];
    auVar29[0xb] = auVar20[0xb] ^ 0x80;
    auVar31[0xc] = auVar20[0xc];
    auVar31._0_12_ = auVar29;
    auVar31[0xd] = auVar20[0xd];
    auVar31[0xe] = auVar20[0xe];
    auVar31[0xf] = auVar20[0xf] ^ 0x80;
    auVar20 = NEON_ext(auVar30,in_q1,8,1);
    auVar43 = NEON_ext(auVar31,auVar31,0xc,1);
    auVar43 = NEON_ext(auVar43,auVar31,8,1);
    auVar21._0_4_ = in_q1._0_4_ * auVar43._0_4_ - auVar20._0_4_ * (float)auVar29._0_8_;
    auVar21._4_4_ = in_q1._4_4_ * auVar43._4_4_ - auVar20._4_4_ * (float)(auVar29._0_8_ >> 0x20);
    auVar21._8_4_ = in_q1._8_4_ * auVar43._8_4_ - auVar20._8_4_ * auVar29._8_4_;
    auVar21._12_4_ = in_q1._12_4_ * auVar43._12_4_ - auVar20._12_4_ * auVar31._12_4_;
    auVar20 = NEON_ext(auVar21,auVar21,0xc,1);
    auVar20 = NEON_ext(auVar20,auVar21,8,1);
    auVar22._0_12_ = auVar20._0_12_;
    auVar22._12_4_ = 0;
    puVar14[5] = auVar20._8_8_ & 0xffffffff;
    puVar14[4] = auVar20._0_8_;
    puVar14[7] = auVar31._8_8_;
    puVar14[6] = auVar29._0_8_;
    fVar47 = auVar20._0_4_;
    auVar48._0_4_ = *(float *)(lVar15 + 0x180) * fVar47;
    fVar49 = auVar20._4_4_;
    auVar48._4_4_ = *(float *)(lVar15 + 0x184) * fVar49;
    fVar25 = auVar20._8_4_;
    auVar48._8_4_ = *(float *)(lVar15 + 0x188) * fVar25;
    auVar48._12_4_ = *(float *)(lVar15 + 0x18c) * 0.0;
    auVar50._0_4_ = *(float *)(lVar15 + 400) * fVar47;
    auVar50._4_4_ = *(float *)(lVar15 + 0x194) * fVar49;
    auVar50._8_4_ = *(float *)(lVar15 + 0x198) * fVar25;
    auVar50._12_4_ = *(float *)(lVar15 + 0x19c) * 0.0;
    auVar44._0_4_ = *(float *)(lVar15 + 0x1a0) * fVar47;
    auVar44._4_4_ = *(float *)(lVar15 + 0x1a4) * fVar49;
    auVar44._8_4_ = *(float *)(lVar15 + 0x1a8) * fVar25;
    auVar43 = NEON_ext(auVar48,auVar48,8,1);
    auVar51 = NEON_ext(auVar50,auVar50,8,1);
    auVar44._12_4_ = 0;
    auVar20 = NEON_ext(auVar44,auVar44,8,1);
    auVar45._0_4_ = *(float *)(lVar15 + 0x2b0) * (auVar48._0_4_ + auVar48._4_4_ + auVar43._0_4_);
    auVar45._4_4_ = *(float *)(lVar15 + 0x2b4) * (auVar50._0_4_ + auVar50._4_4_ + auVar51._0_4_);
    auVar45._8_4_ =
         *(float *)(lVar15 + 0x2b8) *
         (auVar44._0_4_ + auVar44._4_4_ + auVar20._0_4_ + auVar20._4_4_);
    auVar45._12_4_ = *(float *)(lVar15 + 700) * 0.0;
  }
  puVar14[0xb] = auVar45._8_8_;
  puVar14[10] = auVar45._0_8_;
  fVar49 = 0.0;
  fVar47 = 0.0;
  if (lVar16 != 0) {
    auVar20 = NEON_ext(auVar19,auVar19,0xc,1);
    auVar20 = NEON_ext(auVar20,auVar19,8,1);
    auVar4._8_4_ = in_register_00005008;
    auVar4._0_8_ = param_1;
    auVar4._12_4_ = in_register_0000500c;
    auVar34 = NEON_ext(auVar34,auVar4,8,1);
    auVar35._0_4_ = auVar34._0_4_ * auVar19._0_4_ - (float)param_1 * auVar20._0_4_;
    auVar35._4_4_ = auVar34._4_4_ * auVar19._4_4_ - fVar26 * auVar20._4_4_;
    auVar35._8_4_ = auVar34._8_4_ * auVar19._8_4_ - in_register_00005008 * auVar20._8_4_;
    auVar35._12_4_ = auVar34._12_4_ * auVar19._12_4_ - in_register_0000500c * auVar20._12_4_;
    auVar34 = NEON_ext(auVar35,auVar35,0xc,1);
    auVar34 = NEON_ext(auVar34,auVar35,8,1);
    auVar36._0_4_ = *(float *)*param_6 * auVar34._0_4_;
    auVar36._4_4_ = *(float *)(*param_6 + 4) * auVar34._4_4_;
    auVar36._8_4_ = *(float *)(*param_6 + 8) * auVar34._8_4_;
    auVar36._12_4_ = *(float *)(*param_6 + 0xc) * 0.0;
    auVar34 = NEON_ext(auVar36,auVar36,8,1);
    fVar47 = *(float *)(lVar16 + 0x1d0) + auVar36._0_4_ + auVar36._4_4_ + auVar34._0_4_;
  }
  if (lVar15 != 0) {
    auVar37._0_4_ = -auVar45._0_4_;
    auVar37._4_4_ = -auVar45._4_4_;
    auVar37._8_4_ = -auVar45._8_4_;
    auVar37._12_4_ = -auVar45._12_4_;
    auVar34 = NEON_ext(auVar37,auVar37,0xc,1);
    auVar19 = NEON_ext(auVar34,auVar37,8,1);
    auVar34 = NEON_ext(auVar30,in_q1,8,1);
    auVar38._0_4_ = auVar34._0_4_ * auVar37._0_4_ - in_q1._0_4_ * auVar19._0_4_;
    auVar38._4_4_ = auVar34._4_4_ * auVar37._4_4_ - in_q1._4_4_ * auVar19._4_4_;
    auVar38._8_4_ = auVar34._8_4_ * auVar37._8_4_ - in_q1._8_4_ * auVar19._8_4_;
    auVar38._12_4_ = auVar34._12_4_ * auVar37._12_4_ - in_q1._12_4_ * auVar19._12_4_;
    auVar34 = NEON_ext(auVar38,auVar38,0xc,1);
    auVar34 = NEON_ext(auVar34,auVar38,8,1);
    auVar39._0_4_ = *(float *)*param_6 * auVar34._0_4_;
    auVar39._4_4_ = *(float *)(*param_6 + 4) * auVar34._4_4_;
    auVar39._8_4_ = *(float *)(*param_6 + 8) * auVar34._8_4_;
    auVar39._12_4_ = *(float *)(*param_6 + 0xc) * 0.0;
    auVar34 = NEON_ext(auVar39,auVar39,8,1);
    fVar49 = *(float *)(lVar15 + 0x1d0) + auVar39._0_4_ + auVar39._4_4_ + auVar34._0_4_;
  }
  param_2 = param_2 / (fVar47 + fVar49);
  *(float *)((long)puVar14 + 0x6c) = param_2;
  if (lVar16 == 0) {
    auVar41._0_14_ = ZEXT214(0);
    auVar41._14_2_ = 0;
    auVar28._0_4_ = auVar24._0_4_ * 0.0;
    auVar28._4_4_ = auVar24._4_4_ * 0.0;
    auVar28._8_4_ = auVar24._8_4_ * 0.0;
    auVar28._12_4_ = auVar24._12_4_ * 0.0;
    auVar34 = NEON_ext(auVar28,auVar28,8,1);
    fVar26 = auVar34._0_4_ + auVar28._0_4_ + auVar28._4_4_;
  }
  else {
    auVar41 = *(undefined1 (*) [16])(lVar11 + 0xc0);
    auVar27._0_4_ = auVar24._0_4_ * (*(float *)(lVar11 + 0xb0) + *(float *)(lVar11 + 0xd0));
    auVar27._4_4_ = auVar24._4_4_ * (*(float *)(lVar11 + 0xb4) + *(float *)(lVar11 + 0xd4));
    auVar27._8_4_ = auVar24._8_4_ * (*(float *)(lVar11 + 0xb8) + *(float *)(lVar11 + 0xd8));
    auVar27._12_4_ = auVar24._12_4_ * (*(float *)(lVar11 + 0xbc) + *(float *)(lVar11 + 0xdc));
    auVar34 = NEON_ext(auVar27,auVar27,8,1);
    fVar26 = auVar27._0_4_ + auVar27._4_4_ + auVar34._0_4_;
  }
  if (lVar15 == 0) {
    auVar42._0_14_ = ZEXT214(0);
    auVar42._14_2_ = 0;
    auVar33._0_4_ = auVar31._0_4_ * 0.0;
    auVar33._4_4_ = auVar31._4_4_ * 0.0;
    auVar33._8_4_ = auVar31._8_4_ * 0.0;
    auVar33._12_4_ = auVar31._12_4_ * 0.0;
    auVar34 = NEON_ext(auVar33,auVar33,8,1);
    fVar47 = auVar34._0_4_ + auVar33._0_4_ + auVar33._4_4_;
  }
  else {
    auVar42 = *(undefined1 (*) [16])(lVar13 + 0xc0);
    auVar32._0_4_ = auVar31._0_4_ * (*(float *)(lVar13 + 0xb0) + *(float *)(lVar13 + 0xd0));
    auVar32._4_4_ = auVar31._4_4_ * (*(float *)(lVar13 + 0xb4) + *(float *)(lVar13 + 0xd4));
    auVar32._8_4_ = auVar31._8_4_ * (*(float *)(lVar13 + 0xb8) + *(float *)(lVar13 + 0xd8));
    auVar32._12_4_ = auVar31._12_4_ * (*(float *)(lVar13 + 0xbc) + *(float *)(lVar13 + 0xdc));
    auVar34 = NEON_ext(auVar32,auVar32,8,1);
    fVar47 = auVar32._0_4_ + auVar32._4_4_ + auVar34._0_4_;
  }
  fVar49 = 0.0;
  if ((*(byte *)(param_10 + 0x80) >> 4 & 1) != 0) {
    auVar46._0_4_ = *(float *)*param_6 * (*(float *)(param_10 + 0x30) - *(float *)(param_10 + 0x20))
    ;
    auVar46._4_4_ =
         *(float *)(*param_6 + 4) * (*(float *)(param_10 + 0x34) - *(float *)(param_10 + 0x24));
    auVar46._8_4_ =
         *(float *)(*param_6 + 8) * (*(float *)(param_10 + 0x38) - *(float *)(param_10 + 0x28));
    auVar46._12_4_ = *(float *)(*param_6 + 0xc) * 0.0;
    auVar34 = NEON_ext(auVar46,auVar46,8,1);
    fVar49 = param_2 * (-((auVar46._0_4_ + auVar46._4_4_ + auVar34._0_4_) *
                         *(float *)(param_11 + 0x38)) / *(float *)(param_11 + 0xc));
  }
  auVar23._0_4_ = auVar22._0_4_ * auVar42._0_4_;
  auVar23._4_4_ = auVar22._4_4_ * auVar42._4_4_;
  auVar23._8_4_ = auVar22._8_4_ * auVar42._8_4_;
  auVar23._12_4_ = auVar22._12_4_ * auVar42._12_4_;
  auVar24 = NEON_ext(auVar23,auVar23,8,1);
  auVar17._0_4_ = (float)uVar18 * auVar41._0_4_;
  auVar17._4_4_ = (float)((ulong)uVar18 >> 0x20) * auVar41._4_4_;
  auVar17._8_4_ = (float)uVar52 * auVar41._8_4_;
  auVar17._12_4_ = auVar41._12_4_ * 0.0;
  auVar34 = NEON_ext(auVar17,auVar17,8,1);
  *(float *)(puVar14 + 0xe) =
       fVar49 + param_2 * (param_3 -
                          (fVar47 + auVar24._0_4_ + auVar23._0_4_ + auVar23._4_4_ +
                          fVar26 + auVar34._0_4_ + auVar17._0_4_ + auVar17._4_4_));
  *(undefined4 *)((long)puVar14 + 0x74) = param_4;
  *(float *)(puVar14 + 0xf) = -fVar53;
  *(float *)((long)puVar14 + 0x7c) = fVar53;
  *(undefined4 *)(puVar14 + 0x10) = 0;
  return;
}



/* Entry: 1098309c0; end: 109830d7f;  */

void FUN_1098309c0(float param_1,long param_2,undefined1 (*param_3) [16],int param_4,int param_5,
                  undefined4 param_6)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  uint uVar3;
  int iVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  long lVar16;
  uint uVar17;
  long lVar18;
  ulong *puVar19;
  long lVar20;
  long lVar21;
  float fVar22;
  float fVar25;
  undefined1 auVar23 [12];
  float fVar26;
  float fVar27;
  undefined1 auVar24 [16];
  undefined1 auVar28 [16];
  float fVar29;
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  float fVar33;
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  float fVar45;
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  
  uVar3 = *(uint *)(param_2 + 0x8c);
  uVar17 = uVar3;
  if (uVar3 == *(uint *)(param_2 + 0x90)) {
    iVar4 = uVar3 << 1;
    if (uVar3 == 0) {
      iVar4 = 1;
    }
    if ((int)uVar3 < iVar4) {
      if (iVar4 == 0) {
        lVar16 = 0;
      }
      else {
        lVar16 = (long)iVar4 * 0xa0;
        FUN_1098256f4(lVar16,0x10);
        uVar17 = *(uint *)(param_2 + 0x8c);
      }
      if (0 < (int)uVar17) {
        lVar18 = 0;
        do {
          puVar1 = (undefined8 *)(lVar16 + lVar18);
          puVar2 = (undefined8 *)(*(long *)(param_2 + 0x98) + lVar18);
          uVar5 = *puVar2;
          puVar1[1] = puVar2[1];
          *puVar1 = uVar5;
          uVar5 = puVar2[2];
          puVar1[3] = puVar2[3];
          puVar1[2] = uVar5;
          uVar5 = puVar2[4];
          puVar1[5] = puVar2[5];
          puVar1[4] = uVar5;
          uVar5 = puVar2[6];
          puVar1[7] = puVar2[7];
          puVar1[6] = uVar5;
          uVar5 = puVar2[8];
          puVar1[9] = puVar2[9];
          puVar1[8] = uVar5;
          uVar5 = puVar2[10];
          puVar1[0xb] = puVar2[0xb];
          puVar1[10] = uVar5;
          uVar5 = puVar2[0xc];
          uVar6 = puVar2[0xd];
          uVar7 = puVar2[0xe];
          uVar8 = puVar2[0xf];
          uVar9 = puVar2[0x10];
          uVar10 = puVar2[0x12];
          uVar11 = puVar2[0x13];
          puVar1[0x11] = puVar2[0x11];
          puVar1[0x10] = uVar9;
          puVar1[0x13] = uVar11;
          puVar1[0x12] = uVar10;
          puVar1[0xd] = uVar6;
          puVar1[0xc] = uVar5;
          puVar1[0xf] = uVar8;
          puVar1[0xe] = uVar7;
          lVar18 = lVar18 + 0xa0;
        } while ((ulong)uVar17 * 0xa0 - lVar18 != 0);
      }
      if ((*(long *)(param_2 + 0x98) != 0) && (*(char *)(param_2 + 0xa0) == '\x01')) {
        FUN_109825740();
      }
      *(undefined1 *)(param_2 + 0xa0) = 1;
      *(long *)(param_2 + 0x98) = lVar16;
      *(int *)(param_2 + 0x90) = iVar4;
      uVar17 = *(uint *)(param_2 + 0x8c);
    }
  }
  *(uint *)(param_2 + 0x8c) = uVar17 + 1;
  puVar19 = (ulong *)(*(long *)(param_2 + 0x98) + (long)(int)uVar3 * 0xa0);
  auVar50._0_14_ = ZEXT314(0);
  auVar50._14_2_ = 0;
  puVar19[3] = 0;
  puVar19[2] = 0;
  *(undefined4 *)(puVar19 + 7) = 0x80000000;
  *(undefined4 *)((long)puVar19 + 0x3c) = 0x80000000;
  puVar19[6] = 0x8000000080000000;
  lVar16 = *(long *)(param_2 + 0x18) + (long)param_4 * 0x100;
  lVar18 = *(long *)(param_2 + 0x18) + (long)param_5 * 0x100;
  lVar21 = *(long *)(lVar16 + 0xf0);
  lVar20 = *(long *)(lVar18 + 0xf0);
  *(undefined4 *)((long)puVar19 + 0x94) = param_6;
  *(int *)(puVar19 + 0x13) = param_4;
  *(int *)((long)puVar19 + 0x9c) = param_5;
  *(float *)(puVar19 + 0xd) = param_1;
  puVar19[0x11] = 0;
  puVar19[0xc] = 0;
  auVar46 = *param_3;
  auVar23._0_8_ = auVar46._0_8_ ^ 0x8000000080000000;
  auVar23[8] = auVar46[8];
  auVar23[9] = auVar46[9];
  auVar23[10] = auVar46[10];
  auVar23[0xb] = auVar46[0xb] ^ 0x80;
  auVar35[0xc] = auVar46[0xc];
  auVar35._0_12_ = auVar23;
  auVar35[0xd] = auVar46[0xd];
  auVar35[0xe] = auVar46[0xe];
  auVar35[0xf] = auVar46[0xf] ^ 0x80;
  puVar19[1] = auVar35._8_8_;
  *puVar19 = auVar23._0_8_;
  auVar46._0_14_ = ZEXT214(0);
  auVar46._14_2_ = 0;
  fVar22 = (float)auVar23._0_8_;
  fVar25 = (float)(auVar23._0_8_ >> 0x20);
  fVar26 = auVar23._8_4_;
  fVar27 = auVar35._12_4_;
  if (lVar21 != 0) {
    auVar52._0_4_ = *(float *)(lVar21 + 0x180) * fVar22;
    auVar52._4_4_ = *(float *)(lVar21 + 0x184) * fVar25;
    auVar52._8_4_ = *(float *)(lVar21 + 0x188) * fVar26;
    auVar52._12_4_ = *(float *)(lVar21 + 0x18c) * fVar27;
    auVar34._0_4_ = *(float *)(lVar21 + 400) * fVar22;
    auVar34._4_4_ = *(float *)(lVar21 + 0x194) * fVar25;
    auVar34._8_4_ = *(float *)(lVar21 + 0x198) * fVar26;
    auVar34._12_4_ = *(float *)(lVar21 + 0x19c) * fVar27;
    auVar41._0_4_ = *(float *)(lVar21 + 0x1a0) * fVar22;
    auVar41._4_4_ = *(float *)(lVar21 + 0x1a4) * fVar25;
    auVar41._8_4_ = *(float *)(lVar21 + 0x1a8) * fVar26;
    auVar46 = NEON_ext(auVar52,auVar52,8,1);
    auVar51 = NEON_ext(auVar34,auVar34,8,1);
    auVar41._12_4_ = 0;
    auVar35 = NEON_ext(auVar41,auVar41,8,1);
    auVar46._0_4_ = (auVar52._0_4_ + auVar52._4_4_ + auVar46._0_4_) * *(float *)(lVar21 + 0x2b0);
    auVar46._4_4_ = (auVar34._0_4_ + auVar34._4_4_ + auVar51._0_4_) * *(float *)(lVar21 + 0x2b4);
    auVar46._8_4_ =
         (auVar41._0_4_ + auVar41._4_4_ + auVar35._0_4_ + auVar35._4_4_) *
         *(float *)(lVar21 + 0x2b8);
    auVar46._12_4_ = *(float *)(lVar21 + 700) * 0.0;
  }
  puVar19[9] = auVar46._8_8_;
  puVar19[8] = auVar46._0_8_;
  fVar12 = *(float *)*param_3;
  fVar13 = *(float *)(*param_3 + 4);
  fVar14 = *(float *)(*param_3 + 8);
  fVar15 = *(float *)(*param_3 + 0xc);
  *(float *)(puVar19 + 5) = fVar14;
  *(float *)((long)puVar19 + 0x2c) = fVar15;
  *(float *)(puVar19 + 4) = fVar12;
  *(float *)((long)puVar19 + 0x24) = fVar13;
  if (lVar20 != 0) {
    auVar51._0_4_ = fVar12 * *(float *)(lVar20 + 0x180);
    auVar51._4_4_ = fVar13 * *(float *)(lVar20 + 0x184);
    auVar51._8_4_ = fVar14 * *(float *)(lVar20 + 0x188);
    auVar51._12_4_ = fVar15 * *(float *)(lVar20 + 0x18c);
    auVar36._0_4_ = fVar12 * *(float *)(lVar20 + 400);
    auVar36._4_4_ = fVar13 * *(float *)(lVar20 + 0x194);
    auVar36._8_4_ = fVar14 * *(float *)(lVar20 + 0x198);
    auVar36._12_4_ = fVar15 * *(float *)(lVar20 + 0x19c);
    auVar42._0_4_ = fVar12 * *(float *)(lVar20 + 0x1a0);
    auVar42._4_4_ = fVar13 * *(float *)(lVar20 + 0x1a4);
    auVar42._8_4_ = fVar14 * *(float *)(lVar20 + 0x1a8);
    auVar35 = NEON_ext(auVar51,auVar51,8,1);
    auVar52 = NEON_ext(auVar36,auVar36,8,1);
    auVar42._12_4_ = 0;
    auVar46 = NEON_ext(auVar42,auVar42,8,1);
    auVar50._0_4_ = (auVar51._0_4_ + auVar51._4_4_ + auVar35._0_4_) * *(float *)(lVar20 + 0x2b0);
    auVar50._4_4_ = (auVar36._0_4_ + auVar36._4_4_ + auVar52._0_4_) * *(float *)(lVar20 + 0x2b4);
    auVar50._8_4_ =
         (auVar42._0_4_ + auVar42._4_4_ + auVar46._0_4_ + auVar46._4_4_) *
         *(float *)(lVar20 + 0x2b8);
    auVar50._12_4_ = *(float *)(lVar20 + 700) * 0.0;
  }
  puVar19[0xb] = auVar50._8_8_;
  puVar19[10] = auVar50._0_8_;
  auVar31._0_14_ = ZEXT214(0);
  auVar31._14_2_ = 0;
  auVar38._0_14_ = ZEXT214(0);
  auVar38._14_2_ = 0;
  if (lVar21 != 0) {
    auVar37._0_4_ = *(float *)(lVar21 + 0x180) * fVar22;
    auVar37._4_4_ = *(float *)(lVar21 + 0x184) * fVar25;
    auVar37._8_4_ = *(float *)(lVar21 + 0x188) * fVar26;
    auVar37._12_4_ = *(float *)(lVar21 + 0x18c) * fVar27;
    auVar43._0_4_ = *(float *)(lVar21 + 400) * fVar22;
    auVar43._4_4_ = *(float *)(lVar21 + 0x194) * fVar25;
    auVar43._8_4_ = *(float *)(lVar21 + 0x198) * fVar26;
    auVar43._12_4_ = *(float *)(lVar21 + 0x19c) * fVar27;
    auVar47._0_4_ = *(float *)(lVar21 + 0x1a0) * fVar22;
    auVar47._4_4_ = *(float *)(lVar21 + 0x1a4) * fVar25;
    auVar47._8_4_ = *(float *)(lVar21 + 0x1a8) * fVar26;
    auVar46 = NEON_ext(auVar37,auVar37,8,1);
    auVar35 = NEON_ext(auVar43,auVar43,8,1);
    auVar47._12_4_ = 0;
    auVar38._0_4_ = auVar37._0_4_ + auVar37._4_4_ + auVar46._0_4_;
    auVar38._4_4_ = auVar43._0_4_ + auVar43._4_4_ + auVar35._0_4_;
    auVar46 = NEON_ext(auVar47,auVar47,8,1);
    auVar38._8_4_ = auVar47._0_4_ + auVar47._4_4_ + auVar46._0_4_ + auVar46._4_4_;
    auVar38._12_4_ = 0;
  }
  if (lVar20 != 0) {
    auVar30._0_4_ = fVar12 * *(float *)(lVar20 + 0x180);
    auVar30._4_4_ = fVar13 * *(float *)(lVar20 + 0x184);
    auVar30._8_4_ = fVar14 * *(float *)(lVar20 + 0x188);
    auVar30._12_4_ = fVar15 * *(float *)(lVar20 + 0x18c);
    auVar44._0_4_ = fVar12 * *(float *)(lVar20 + 400);
    auVar44._4_4_ = fVar13 * *(float *)(lVar20 + 0x194);
    auVar44._8_4_ = fVar14 * *(float *)(lVar20 + 0x198);
    auVar44._12_4_ = fVar15 * *(float *)(lVar20 + 0x19c);
    auVar48._0_4_ = fVar12 * *(float *)(lVar20 + 0x1a0);
    auVar48._4_4_ = fVar13 * *(float *)(lVar20 + 0x1a4);
    auVar48._8_4_ = fVar14 * *(float *)(lVar20 + 0x1a8);
    auVar46 = NEON_ext(auVar30,auVar30,8,1);
    auVar35 = NEON_ext(auVar44,auVar44,8,1);
    auVar48._12_4_ = 0;
    auVar31._0_4_ = auVar30._0_4_ + auVar30._4_4_ + auVar46._0_4_;
    auVar31._4_4_ = auVar44._0_4_ + auVar44._4_4_ + auVar35._0_4_;
    auVar46 = NEON_ext(auVar48,auVar48,8,1);
    auVar31._8_4_ = auVar48._0_4_ + auVar48._4_4_ + auVar46._0_4_ + auVar46._4_4_;
    auVar31._12_4_ = 0;
  }
  auVar39._0_4_ = auVar38._0_4_ * fVar22;
  auVar39._4_4_ = auVar38._4_4_ * fVar25;
  auVar39._8_4_ = auVar38._8_4_ * fVar26;
  auVar39._12_4_ = auVar38._12_4_ * fVar27;
  auVar35 = NEON_ext(auVar39,auVar39,8,1);
  auVar32._0_4_ = fVar12 * auVar31._0_4_;
  auVar32._4_4_ = fVar13 * auVar31._4_4_;
  auVar32._8_4_ = fVar14 * auVar31._8_4_;
  auVar32._12_4_ = fVar15 * auVar31._12_4_;
  auVar46 = NEON_ext(auVar32,auVar32,8,1);
  fVar29 = 1.0 / (auVar35._0_4_ + auVar39._0_4_ + auVar39._4_4_ + 0.0 +
                 auVar32._0_4_ + auVar32._4_4_ + auVar46._0_4_);
  *(float *)((long)puVar19 + 0x6c) = fVar29;
  if (lVar21 == 0) {
    fVar33 = 0.0;
    auVar46 = ZEXT216(0);
  }
  else {
    auVar46 = *(undefined1 (*) [16])(lVar16 + 0xc0);
    auVar40._0_4_ = (*(float *)(lVar16 + 0xb0) + *(float *)(lVar16 + 0xd0)) * 0.0;
    auVar40._4_4_ = (*(float *)(lVar16 + 0xb4) + *(float *)(lVar16 + 0xd4)) * 0.0;
    auVar40._8_4_ = (*(float *)(lVar16 + 0xb8) + *(float *)(lVar16 + 0xd8)) * 0.0;
    auVar40._12_4_ = (*(float *)(lVar16 + 0xbc) + *(float *)(lVar16 + 0xdc)) * 0.0;
    auVar35 = NEON_ext(auVar40,auVar40,8,1);
    fVar33 = auVar40._0_4_ + auVar40._4_4_ + auVar35._0_4_;
  }
  if (lVar20 == 0) {
    fVar45 = -0.0;
    auVar35 = ZEXT216(0);
  }
  else {
    auVar35 = *(undefined1 (*) [16])(lVar18 + 0xc0);
    auVar49._0_4_ = (*(float *)(lVar18 + 0xb0) + *(float *)(lVar18 + 0xd0)) * -0.0;
    auVar49._4_4_ = (*(float *)(lVar18 + 0xb4) + *(float *)(lVar18 + 0xd4)) * -0.0;
    auVar49._8_4_ = (*(float *)(lVar18 + 0xb8) + *(float *)(lVar18 + 0xd8)) * -0.0;
    auVar49._12_4_ = (*(float *)(lVar18 + 0xbc) + *(float *)(lVar18 + 0xdc)) * -0.0;
    auVar50 = NEON_ext(auVar49,auVar49,8,1);
    fVar45 = auVar49._0_4_ + auVar49._4_4_ + auVar50._0_4_;
  }
  auVar24._0_4_ = auVar46._0_4_ * fVar22;
  auVar24._4_4_ = auVar46._4_4_ * fVar25;
  auVar24._8_4_ = auVar46._8_4_ * fVar26;
  auVar24._12_4_ = auVar46._12_4_ * fVar27;
  auVar46 = NEON_ext(auVar24,auVar24,8,1);
  auVar28._0_4_ = fVar12 * auVar35._0_4_;
  auVar28._4_4_ = fVar13 * auVar35._4_4_;
  auVar28._8_4_ = fVar14 * auVar35._8_4_;
  auVar28._12_4_ = fVar15 * auVar35._12_4_;
  auVar35 = NEON_ext(auVar28,auVar28,8,1);
  *(float *)(puVar19 + 0xe) =
       fVar29 * (0.0 - (fVar33 + auVar46._0_4_ + auVar24._0_4_ + auVar24._4_4_ +
                       fVar45 + auVar28._0_4_ + auVar28._4_4_ + auVar35._0_4_));
  *(undefined4 *)((long)puVar19 + 0x74) = 0;
  *(float *)(puVar19 + 0xf) = -param_1;
  *(float *)((long)puVar19 + 0x7c) = param_1;
  return;
}



/* Entry: 109830d80; end: 10983120f;  */

ulong FUN_109830d80(float param_1,long param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  uint uVar3;
  ulong uVar4;
  uint uVar5;
  long lVar6;
  uint uVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  float fVar11;
  undefined8 uVar12;
  float fVar13;
  float fVar14;
  
  uVar9 = (ulong)*(uint *)(param_3 + 0xf0);
  if ((int)*(uint *)(param_3 + 0xf0) < 0) {
    if (((*(byte *)(param_3 + 0x118) >> 1 & 1) == 0) ||
       ((*(float *)(param_3 + 0x1d0) == 0.0 && ((*(byte *)(param_3 + 0xe8) >> 1 & 1) == 0)))) {
      uVar9 = (ulong)*(uint *)(param_2 + 300);
      if ((int)*(uint *)(param_2 + 300) < 0) {
        uVar7 = *(uint *)(param_2 + 0xc);
        lVar10 = (long)(int)uVar7;
        *(uint *)(param_2 + 300) = uVar7;
        if (uVar7 == *(uint *)(param_2 + 0x10)) {
          uVar5 = uVar7 << 1;
          if (uVar7 == 0) {
            uVar5 = 1;
          }
          if ((int)uVar7 < (int)uVar5) {
            if (uVar5 == 0) {
              uVar9 = 0;
            }
            else {
              uVar9 = -(ulong)(uVar5 >> 0x1f) & 0xffffff0000000000 | (ulong)uVar5 << 8;
              FUN_1098256f4(uVar9,0x10);
              uVar7 = *(uint *)(param_2 + 0xc);
            }
            if (0 < (int)uVar7) {
              lVar6 = 0;
              do {
                puVar1 = (undefined8 *)(uVar9 + lVar6);
                puVar2 = (undefined8 *)(*(long *)(param_2 + 0x18) + lVar6);
                uVar12 = *puVar2;
                puVar1[1] = puVar2[1];
                *puVar1 = uVar12;
                uVar12 = puVar2[2];
                puVar1[3] = puVar2[3];
                puVar1[2] = uVar12;
                uVar12 = puVar2[4];
                puVar1[5] = puVar2[5];
                puVar1[4] = uVar12;
                uVar12 = puVar2[6];
                puVar1[7] = puVar2[7];
                puVar1[6] = uVar12;
                uVar12 = puVar2[8];
                puVar1[9] = puVar2[9];
                puVar1[8] = uVar12;
                uVar12 = puVar2[10];
                puVar1[0xb] = puVar2[0xb];
                puVar1[10] = uVar12;
                uVar12 = puVar2[0xc];
                puVar1[0xd] = puVar2[0xd];
                puVar1[0xc] = uVar12;
                uVar12 = puVar2[0xe];
                puVar1[0xf] = puVar2[0xf];
                puVar1[0xe] = uVar12;
                uVar12 = puVar2[0x10];
                puVar1[0x11] = puVar2[0x11];
                puVar1[0x10] = uVar12;
                uVar12 = puVar2[0x12];
                puVar1[0x13] = puVar2[0x13];
                puVar1[0x12] = uVar12;
                uVar12 = puVar2[0x14];
                puVar1[0x15] = puVar2[0x15];
                puVar1[0x14] = uVar12;
                uVar12 = puVar2[0x16];
                puVar1[0x17] = puVar2[0x17];
                puVar1[0x16] = uVar12;
                uVar12 = puVar2[0x18];
                puVar1[0x19] = puVar2[0x19];
                puVar1[0x18] = uVar12;
                uVar12 = puVar2[0x1a];
                puVar1[0x1b] = puVar2[0x1b];
                puVar1[0x1a] = uVar12;
                uVar12 = puVar2[0x1c];
                puVar1[0x1d] = puVar2[0x1d];
                puVar1[0x1c] = uVar12;
                puVar1[0x1e] = puVar2[0x1e];
                lVar6 = lVar6 + 0x100;
              } while ((ulong)uVar7 << 8 != lVar6);
            }
            if ((*(long *)(param_2 + 0x18) != 0) && (*(char *)(param_2 + 0x20) == '\x01')) {
              FUN_109825740();
            }
            *(undefined1 *)(param_2 + 0x20) = 1;
            *(ulong *)(param_2 + 0x18) = uVar9;
            *(uint *)(param_2 + 0x10) = uVar5;
            uVar7 = *(uint *)(param_2 + 0xc);
          }
        }
        *(uint *)(param_2 + 0xc) = uVar7 + 1;
        puVar1 = (undefined8 *)(*(long *)(param_2 + 0x18) + lVar10 * 0x100);
        puVar1[0x1e] = 0;
        puVar1[0x1b] = 0;
        puVar1[0x1a] = 0;
        puVar1[0x1d] = 0;
        puVar1[0x1c] = 0;
        puVar1[0x17] = 0;
        puVar1[0x16] = 0;
        puVar1[0x19] = 0;
        puVar1[0x18] = 0;
        puVar1[0x13] = 0;
        puVar1[0x12] = 0;
        puVar1[0x15] = 0;
        puVar1[0x14] = 0;
        puVar1[0xf] = 0;
        puVar1[0xe] = 0;
        puVar1[0x11] = 0;
        puVar1[0x10] = 0;
        puVar1[0xb] = 0;
        puVar1[10] = 0;
        puVar1[0xd] = 0;
        puVar1[0xc] = 0;
        puVar1[7] = 0;
        puVar1[6] = 0;
        puVar1[9] = 0;
        puVar1[8] = 0;
        puVar1[3] = 0;
        puVar1[2] = 0;
        puVar1[5] = 0;
        puVar1[4] = 0;
        puVar1[1] = 0;
        *puVar1 = 0;
        puVar1 = (undefined8 *)(*(long *)(param_2 + 0x18) + lVar10 * 0x100);
        puVar1[9] = 0;
        puVar1[8] = 0;
        puVar1[0xb] = 0;
        puVar1[10] = 0;
        puVar1[0x13] = 0;
        puVar1[0x12] = 0;
        puVar1[0x15] = 0;
        puVar1[0x14] = 0;
        puVar1[1] = 0;
        *puVar1 = 0x3f800000;
        puVar1[3] = 0;
        puVar1[2] = 0x3f80000000000000;
        puVar1[5] = 0x3f800000;
        puVar1[4] = 0;
        puVar1[6] = 0;
        puVar1[7] = 0;
        puVar1[0x10] = 0;
        puVar1[0x11] = 0;
        puVar1[0x1e] = 0;
        puVar1[0xd] = 0x3f800000;
        puVar1[0xc] = 0x3f8000003f800000;
        puVar1[0xf] = 0x3f800000;
        puVar1[0xe] = 0x3f8000003f800000;
        puVar1[0x17] = 0;
        puVar1[0x16] = 0;
        puVar1[0x19] = 0;
        puVar1[0x18] = 0;
        puVar1[0x1b] = 0;
        puVar1[0x1a] = 0;
        puVar1[0x1d] = 0;
        puVar1[0x1c] = 0;
        uVar9 = (ulong)*(uint *)(param_2 + 300);
      }
    }
    else {
      uVar7 = *(uint *)(param_2 + 0xc);
      uVar9 = (ulong)uVar7;
      uVar5 = uVar7;
      if (uVar7 == *(uint *)(param_2 + 0x10)) {
        uVar3 = uVar7 << 1;
        if (uVar7 == 0) {
          uVar3 = 1;
        }
        if ((int)uVar7 < (int)uVar3) {
          if (uVar3 == 0) {
            uVar4 = 0;
            uVar8 = uVar9;
          }
          else {
            uVar4 = -(ulong)(uVar3 >> 0x1f) & 0xffffff0000000000 | (ulong)uVar3 << 8;
            FUN_1098256f4(uVar4,0x10);
            uVar8 = (ulong)*(uint *)(param_2 + 0xc);
          }
          if (0 < (int)uVar8) {
            lVar10 = 0;
            do {
              puVar1 = (undefined8 *)(uVar4 + lVar10);
              puVar2 = (undefined8 *)(*(long *)(param_2 + 0x18) + lVar10);
              uVar12 = *puVar2;
              puVar1[1] = puVar2[1];
              *puVar1 = uVar12;
              uVar12 = puVar2[2];
              puVar1[3] = puVar2[3];
              puVar1[2] = uVar12;
              uVar12 = puVar2[4];
              puVar1[5] = puVar2[5];
              puVar1[4] = uVar12;
              uVar12 = puVar2[6];
              puVar1[7] = puVar2[7];
              puVar1[6] = uVar12;
              uVar12 = puVar2[8];
              puVar1[9] = puVar2[9];
              puVar1[8] = uVar12;
              uVar12 = puVar2[10];
              puVar1[0xb] = puVar2[0xb];
              puVar1[10] = uVar12;
              uVar12 = puVar2[0xc];
              puVar1[0xd] = puVar2[0xd];
              puVar1[0xc] = uVar12;
              uVar12 = puVar2[0xe];
              puVar1[0xf] = puVar2[0xf];
              puVar1[0xe] = uVar12;
              uVar12 = puVar2[0x10];
              puVar1[0x11] = puVar2[0x11];
              puVar1[0x10] = uVar12;
              uVar12 = puVar2[0x12];
              puVar1[0x13] = puVar2[0x13];
              puVar1[0x12] = uVar12;
              uVar12 = puVar2[0x14];
              puVar1[0x15] = puVar2[0x15];
              puVar1[0x14] = uVar12;
              uVar12 = puVar2[0x16];
              puVar1[0x17] = puVar2[0x17];
              puVar1[0x16] = uVar12;
              uVar12 = puVar2[0x18];
              puVar1[0x19] = puVar2[0x19];
              puVar1[0x18] = uVar12;
              uVar12 = puVar2[0x1a];
              puVar1[0x1b] = puVar2[0x1b];
              puVar1[0x1a] = uVar12;
              uVar12 = puVar2[0x1c];
              puVar1[0x1d] = puVar2[0x1d];
              puVar1[0x1c] = uVar12;
              puVar1[0x1e] = puVar2[0x1e];
              lVar10 = lVar10 + 0x100;
            } while (uVar8 << 8 != lVar10);
          }
          if ((*(long *)(param_2 + 0x18) != 0) && (*(char *)(param_2 + 0x20) == '\x01')) {
            FUN_109825740();
          }
          *(undefined1 *)(param_2 + 0x20) = 1;
          *(ulong *)(param_2 + 0x18) = uVar4;
          *(uint *)(param_2 + 0x10) = uVar3;
          uVar5 = *(uint *)(param_2 + 0xc);
        }
      }
      *(uint *)(param_2 + 0xc) = uVar5 + 1;
      puVar1 = (undefined8 *)(*(long *)(param_2 + 0x18) + (long)(int)uVar7 * 0x100);
      puVar1[0x1e] = 0;
      uVar12 = 0;
      uVar8 = 0;
      puVar1[0x1b] = 0;
      puVar1[0x1a] = 0;
      puVar1[0x1d] = 0;
      puVar1[0x1c] = 0;
      puVar1[0x17] = 0;
      puVar1[0x16] = 0;
      puVar1[0x19] = 0;
      puVar1[0x18] = 0;
      puVar1[0x13] = 0;
      puVar1[0x12] = 0;
      puVar1[0x15] = 0;
      puVar1[0x14] = 0;
      puVar1[0xf] = 0;
      puVar1[0xe] = 0;
      puVar1[0x11] = 0;
      puVar1[0x10] = 0;
      puVar1[0xb] = 0;
      puVar1[10] = 0;
      puVar1[0xd] = 0;
      puVar1[0xc] = 0;
      puVar1[7] = 0;
      puVar1[6] = 0;
      puVar1[9] = 0;
      puVar1[8] = 0;
      puVar1[3] = 0;
      puVar1[2] = 0;
      puVar1[5] = 0;
      puVar1[4] = 0;
      puVar1[1] = 0;
      *puVar1 = 0;
      puVar1 = (undefined8 *)(*(long *)(param_2 + 0x18) + (long)(int)uVar7 * 0x100);
      uVar5 = *(uint *)(param_3 + 0x118);
      puVar1[9] = 0;
      puVar1[8] = 0;
      puVar1[0xb] = 0;
      puVar1[10] = 0;
      puVar1[0x13] = 0;
      puVar1[0x12] = 0;
      puVar1[0x15] = 0;
      puVar1[0x14] = 0;
      if ((uVar5 >> 1 & 1) == 0) {
        puVar1[1] = 0;
        *puVar1 = 0x3f800000;
        puVar1[3] = 0;
        puVar1[2] = 0x3f80000000000000;
        puVar1[5] = 0x3f800000;
        puVar1[4] = 0;
        puVar1[6] = 0;
        puVar1[7] = 0;
        puVar1[0x10] = 0;
        puVar1[0x11] = 0;
        puVar1[0x1e] = 0;
        puVar1[0xd] = 0x3f800000;
        puVar1[0xc] = 0x3f8000003f800000;
        puVar1[0xf] = 0x3f800000;
        puVar1[0xe] = 0x3f8000003f800000;
        puVar1[0x17] = 0;
        puVar1[0x16] = 0;
        puVar1[0x19] = 0;
        puVar1[0x18] = 0;
        puVar1[0x1b] = 0;
        puVar1[0x1a] = 0;
      }
      else {
        uVar12 = *(undefined8 *)(param_3 + 0x10);
        puVar1[1] = *(undefined8 *)(param_3 + 0x18);
        *puVar1 = uVar12;
        uVar12 = *(undefined8 *)(param_3 + 0x20);
        puVar1[3] = *(undefined8 *)(param_3 + 0x28);
        puVar1[2] = uVar12;
        uVar12 = *(undefined8 *)(param_3 + 0x30);
        puVar1[5] = *(undefined8 *)(param_3 + 0x38);
        puVar1[4] = uVar12;
        uVar12 = *(undefined8 *)(param_3 + 0x40);
        puVar1[7] = *(undefined8 *)(param_3 + 0x48);
        puVar1[6] = uVar12;
        fVar11 = *(float *)(param_3 + 0x1d0);
        uVar12 = *(undefined8 *)(param_3 + 0x1e0);
        puVar1[0x11] = CONCAT44((float)((ulong)*(undefined8 *)(param_3 + 0x1e8) >> 0x20) * 0.0,
                                (float)*(undefined8 *)(param_3 + 0x1e8) * fVar11);
        puVar1[0x10] = CONCAT44((float)((ulong)uVar12 >> 0x20) * fVar11,(float)uVar12 * fVar11);
        puVar1[0x1e] = param_3;
        uVar12 = *(undefined8 *)(param_3 + 0x2b0);
        puVar1[0xd] = *(undefined8 *)(param_3 + 0x2b8);
        puVar1[0xc] = uVar12;
        uVar12 = *(undefined8 *)(param_3 + 0x1e0);
        puVar1[0xf] = *(undefined8 *)(param_3 + 0x1e8);
        puVar1[0xe] = uVar12;
        uVar12 = *(undefined8 *)(param_3 + 0x1b0);
        puVar1[0x17] = *(undefined8 *)(param_3 + 0x1b8);
        puVar1[0x16] = uVar12;
        uVar12 = *(undefined8 *)(param_3 + 0x1c0);
        puVar1[0x19] = *(undefined8 *)(param_3 + 0x1c8);
        puVar1[0x18] = uVar12;
        fVar11 = *(float *)(param_3 + 0x1d0);
        uVar12 = *(undefined8 *)(param_3 + 0x220);
        puVar1[0x1b] = (ulong)(uint)((float)*(undefined8 *)(param_3 + 0x228) * fVar11 * param_1);
        puVar1[0x1a] = CONCAT44((float)((ulong)uVar12 >> 0x20) * fVar11 * param_1,
                                (float)uVar12 * fVar11 * param_1);
        fVar11 = (float)*(undefined8 *)(param_3 + 0x230);
        fVar13 = (float)((ulong)*(undefined8 *)(param_3 + 0x230) >> 0x20);
        fVar14 = (float)*(undefined8 *)(param_3 + 0x238);
        uVar12 = CONCAT44(((float)((ulong)*(undefined8 *)(param_3 + 0x180) >> 0x20) * fVar11 +
                           (float)((ulong)*(undefined8 *)(param_3 + 400) >> 0x20) * fVar13 +
                          (float)((ulong)*(undefined8 *)(param_3 + 0x1a0) >> 0x20) * fVar14) *
                          param_1,((float)*(undefined8 *)(param_3 + 0x180) * fVar11 +
                                   (float)*(undefined8 *)(param_3 + 400) * fVar13 +
                                  (float)*(undefined8 *)(param_3 + 0x1a0) * fVar14) * param_1);
        uVar8 = (ulong)(uint)(((float)*(undefined8 *)(param_3 + 0x188) * fVar11 +
                               (float)*(undefined8 *)(param_3 + 0x198) * fVar13 +
                              (float)*(undefined8 *)(param_3 + 0x1a8) * fVar14) * param_1);
      }
      puVar1[0x1d] = uVar8;
      puVar1[0x1c] = uVar12;
      *(uint *)(param_3 + 0xf0) = uVar7;
    }
  }
  return uVar9;
}



/* Entry: 109831210; end: 1098320db;  */

void FUN_109831210(long param_1,long param_2,uint param_3,long param_4)

{
  long lVar1;
  long lVar2;
  undefined8 *puVar3;
  bool bVar4;
  uint uVar5;
  undefined8 uVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  byte bVar17;
  byte bVar18;
  byte bVar19;
  byte bVar20;
  byte bVar21;
  byte bVar22;
  byte bVar23;
  byte bVar24;
  bool bVar25;
  float fVar26;
  long lVar27;
  long lVar28;
  long lVar29;
  long lVar30;
  undefined1 (*pauVar31) [16];
  int iVar32;
  long lVar33;
  uint uVar34;
  ulong uVar35;
  long lVar36;
  long lVar37;
  long lVar38;
  long lVar39;
  float *pfVar40;
  float fVar41;
  long lVar42;
  long lVar43;
  undefined8 *puVar44;
  float *pfVar45;
  float fVar46;
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  float fVar52;
  float fVar60;
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  float fVar61;
  float fVar75;
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
  undefined1 auVar74 [16];
  float fVar84;
  float fVar85;
  undefined1 auVar76 [16];
  undefined1 auVar77 [16];
  float fVar86;
  undefined1 auVar78 [16];
  undefined1 auVar79 [16];
  undefined1 auVar80 [16];
  undefined1 auVar81 [16];
  undefined1 auVar82 [16];
  undefined1 auVar83 [16];
  float fVar87;
  undefined1 auVar88 [16];
  undefined1 auVar89 [16];
  undefined1 auVar90 [16];
  float fVar91;
  float fVar98;
  undefined1 auVar92 [12];
  float fVar97;
  undefined1 auVar93 [16];
  undefined1 auVar94 [16];
  undefined1 auVar95 [16];
  undefined1 auVar96 [16];
  float fVar99;
  undefined1 auVar100 [16];
  float fVar101;
  byte bVar102;
  undefined1 auVar104 [12];
  byte bVar114;
  float fVar119;
  undefined1 auVar105 [12];
  float fVar103;
  undefined1 auVar106 [12];
  byte bVar112;
  byte bVar113;
  byte bVar115;
  byte bVar116;
  byte bVar117;
  byte bVar118;
  undefined1 auVar107 [16];
  undefined1 auVar109 [16];
  undefined1 auVar110 [16];
  undefined1 auVar111 [16];
  float fVar120;
  undefined1 auVar121 [12];
  undefined1 auVar122 [16];
  undefined1 auVar123 [16];
  byte bVar124;
  long lVar125;
  byte bVar128;
  byte bVar129;
  byte bVar130;
  byte bVar131;
  byte bVar132;
  byte bVar133;
  byte bVar134;
  undefined1 auVar126 [16];
  undefined1 auVar127 [16];
  float fVar135;
  undefined1 auVar136 [12];
  undefined1 auVar137 [16];
  undefined1 auVar138 [16];
  undefined1 auVar140 [16];
  float fVar141;
  float fVar142;
  undefined1 auVar143 [12];
  undefined1 auVar144 [16];
  undefined1 auVar145 [16];
  undefined1 auVar146 [12];
  undefined1 auVar148 [16];
  undefined1 uVar149;
  undefined1 uVar150;
  undefined1 uVar151;
  undefined1 uVar152;
  undefined1 uVar153;
  undefined1 uVar154;
  undefined1 uVar155;
  undefined1 uVar156;
  undefined1 uVar157;
  undefined1 uVar158;
  undefined1 uVar159;
  undefined1 uVar160;
  undefined1 uVar161;
  undefined1 uVar162;
  undefined1 uVar163;
  undefined1 uVar164;
  float fVar165;
  undefined8 uVar166;
  undefined8 uVar167;
  float fVar168;
  float fVar169;
  float fVar170;
  float fVar171;
  float fVar172;
  float fVar173;
  float fVar174;
  float fVar175;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  float fStack_c0;
  float fStack_bc;
  undefined8 uStack_b8;
  undefined1 auVar108 [16];
  undefined1 auVar139 [16];
  undefined1 auVar147 [16];
  
  if (0 < (int)param_3) {
    uVar35 = 0;
    do {
      lVar43 = *(long *)(param_2 + uVar35 * 8);
      lVar30 = *(long *)(lVar43 + 0x350);
      lVar38 = *(long *)(lVar43 + 0x358);
      lVar27 = param_1;
      FUN_109830d80();
      lVar28 = param_1;
      FUN_109830d80(param_1,lVar38);
      fVar41 = (float)lVar27;
      lVar1 = *(long *)(param_1 + 0x18) + (long)(int)fVar41 * 0x100;
      fVar26 = (float)lVar28;
      lVar2 = *(long *)(param_1 + 0x18) + (long)(int)fVar26 * 0x100;
      auVar48._0_4_ = *(float *)(lVar1 + 0x80) * *(float *)(lVar1 + 0x80);
      auVar48._4_4_ = *(float *)(lVar1 + 0x84) * *(float *)(lVar1 + 0x84);
      auVar48._8_4_ = *(float *)(lVar1 + 0x88) * *(float *)(lVar1 + 0x88);
      auVar48._12_4_ = *(float *)(lVar1 + 0x8c) * *(float *)(lVar1 + 0x8c);
      auVar47 = NEON_ext(auVar48,auVar48,8,1);
      if (((1.4210855e-14 <= auVar48._0_4_ + auVar48._4_4_ + auVar47._0_4_) ||
          (auVar47._0_4_ = *(float *)(lVar2 + 0x80) * *(float *)(lVar2 + 0x80),
          auVar47._4_4_ = *(float *)(lVar2 + 0x84) * *(float *)(lVar2 + 0x84),
          auVar47._8_4_ = *(float *)(lVar2 + 0x88) * *(float *)(lVar2 + 0x88),
          auVar47._12_4_ = *(float *)(lVar2 + 0x8c) * *(float *)(lVar2 + 0x8c),
          auVar48 = NEON_ext(auVar47,auVar47,8,1),
          1.4210855e-14 <= auVar47._0_4_ + auVar47._4_4_ + auVar48._0_4_)) &&
         (iVar32 = *(int *)(lVar43 + 0x360), 0 < iVar32)) {
        lVar39 = 0;
        do {
          lVar42 = lVar43 + 0x10 + lVar39 * 0xd0;
          if (*(float *)(lVar42 + 0x50) <= *(float *)(lVar43 + 0x368)) {
            uVar5 = *(uint *)(param_1 + 0x2c);
            uVar34 = uVar5;
            if (uVar5 == *(uint *)(param_1 + 0x30)) {
              iVar32 = uVar5 << 1;
              if (uVar5 == 0) {
                iVar32 = 1;
              }
              if ((int)uVar5 < iVar32) {
                if (iVar32 == 0) {
                  lVar29 = 0;
                }
                else {
                  lVar29 = (long)iVar32 * 0xa0;
                  FUN_1098256f4(lVar29,0x10);
                  uVar34 = *(uint *)(param_1 + 0x2c);
                }
                if (0 < (int)uVar34) {
                  lVar33 = 0;
                  do {
                    puVar44 = (undefined8 *)(lVar29 + lVar33);
                    puVar3 = (undefined8 *)(*(long *)(param_1 + 0x38) + lVar33);
                    uVar6 = *puVar3;
                    puVar44[1] = puVar3[1];
                    *puVar44 = uVar6;
                    uVar6 = puVar3[2];
                    puVar44[3] = puVar3[3];
                    puVar44[2] = uVar6;
                    uVar6 = puVar3[4];
                    puVar44[5] = puVar3[5];
                    puVar44[4] = uVar6;
                    uVar6 = puVar3[6];
                    puVar44[7] = puVar3[7];
                    puVar44[6] = uVar6;
                    uVar6 = puVar3[8];
                    puVar44[9] = puVar3[9];
                    puVar44[8] = uVar6;
                    uVar6 = puVar3[10];
                    puVar44[0xb] = puVar3[0xb];
                    puVar44[10] = uVar6;
                    uVar6 = puVar3[0xc];
                    uVar166 = puVar3[0xd];
                    uVar167 = puVar3[0xe];
                    uVar13 = puVar3[0xf];
                    uVar14 = puVar3[0x10];
                    uVar15 = puVar3[0x12];
                    uVar16 = puVar3[0x13];
                    puVar44[0x11] = puVar3[0x11];
                    puVar44[0x10] = uVar14;
                    puVar44[0x13] = uVar16;
                    puVar44[0x12] = uVar15;
                    puVar44[0xd] = uVar166;
                    puVar44[0xc] = uVar6;
                    puVar44[0xf] = uVar13;
                    puVar44[0xe] = uVar167;
                    lVar33 = lVar33 + 0xa0;
                  } while ((ulong)uVar34 * 0xa0 - lVar33 != 0);
                }
                if ((*(long *)(param_1 + 0x38) != 0) && (*(char *)(param_1 + 0x40) == '\x01')) {
                  FUN_109825740();
                }
                *(undefined1 *)(param_1 + 0x40) = 1;
                *(long *)(param_1 + 0x38) = lVar29;
                *(int *)(param_1 + 0x30) = iVar32;
                uVar34 = *(uint *)(param_1 + 0x2c);
              }
            }
            *(uint *)(param_1 + 0x2c) = uVar34 + 1;
            pfVar40 = (float *)(*(long *)(param_1 + 0x38) + (long)(int)uVar5 * 0xa0);
            pfVar40[0x26] = fVar41;
            pfVar40[0x27] = fVar26;
            *(long *)(pfVar40 + 0x22) = lVar42;
            fVar61 = *(float *)(lVar42 + 0x30) - *(float *)(lVar30 + 0x40);
            fVar103 = *(float *)(lVar42 + 0x34) - *(float *)(lVar30 + 0x44);
            uVar149 = SUB41(fVar103,0);
            uVar150 = (undefined1)((uint)fVar103 >> 8);
            uVar151 = (undefined1)((uint)fVar103 >> 0x10);
            uVar152 = (undefined1)((uint)fVar103 >> 0x18);
            fVar91 = *(float *)(lVar42 + 0x38) - *(float *)(lVar30 + 0x48);
            uVar153 = SUB41(fVar91,0);
            uVar154 = (undefined1)((uint)fVar91 >> 8);
            uVar155 = (undefined1)((uint)fVar91 >> 0x10);
            uVar156 = (undefined1)((uint)fVar91 >> 0x18);
            fVar168 = 0.0;
            fVar169 = 0.0;
            fVar170 = 0.0;
            fVar171 = 0.0;
            fVar172 = 0.0;
            fVar173 = 0.0;
            if (*(long *)(lVar1 + 0xf0) != 0) {
              auVar76._0_4_ = *(float *)(lVar1 + 0xc0) + *(float *)(lVar1 + 0xe0);
              auVar76._4_4_ = *(float *)(lVar1 + 0xc4) + *(float *)(lVar1 + 0xe4);
              auVar76._8_4_ = *(float *)(lVar1 + 200) + *(float *)(lVar1 + 0xe8);
              auVar76._12_4_ = *(float *)(lVar1 + 0xcc) + *(float *)(lVar1 + 0xec);
              auVar48 = NEON_ext(auVar76,auVar76,0xc,1);
              auVar48 = NEON_ext(auVar48,auVar76,8,1);
              auVar88[4] = uVar149;
              auVar88._0_4_ = fVar61;
              auVar88[5] = uVar150;
              auVar88[6] = uVar151;
              auVar88[7] = uVar152;
              auVar88[8] = uVar153;
              auVar88[9] = uVar154;
              auVar88[10] = uVar155;
              auVar88[0xb] = uVar156;
              auVar88._12_4_ = 0;
              auVar137[4] = uVar149;
              auVar137._0_4_ = fVar61;
              auVar137[5] = uVar150;
              auVar137[6] = uVar151;
              auVar137[7] = uVar152;
              auVar137[8] = uVar153;
              auVar137[9] = uVar154;
              auVar137[10] = uVar155;
              auVar137[0xb] = uVar156;
              auVar137._12_4_ = 0;
              auVar47 = NEON_ext(auVar88,auVar137,0xc,1);
              auVar144[4] = uVar149;
              auVar144._0_4_ = fVar61;
              auVar144[5] = uVar150;
              auVar144[6] = uVar151;
              auVar144[7] = uVar152;
              auVar144[8] = uVar153;
              auVar144[9] = uVar154;
              auVar144[10] = uVar155;
              auVar144[0xb] = uVar156;
              auVar144._12_4_ = 0;
              auVar47 = NEON_ext(auVar47,auVar144,8,1);
              auVar77._0_4_ = auVar47._0_4_ * auVar76._0_4_ - auVar48._0_4_ * fVar61;
              auVar77._4_4_ = auVar47._4_4_ * auVar76._4_4_ - auVar48._4_4_ * fVar103;
              auVar77._8_4_ = auVar47._8_4_ * auVar76._8_4_ - auVar48._8_4_ * fVar91;
              auVar77._12_4_ = auVar47._12_4_ * auVar76._12_4_ - auVar48._12_4_ * 0.0;
              auVar48 = NEON_ext(auVar77,auVar77,0xc,1);
              auVar48 = NEON_ext(auVar48,auVar77,8,1);
              fVar171 = *(float *)(lVar1 + 0xb0) + *(float *)(lVar1 + 0xd0) + auVar48._0_4_;
              fVar172 = *(float *)(lVar1 + 0xb4) + *(float *)(lVar1 + 0xd4) + auVar48._4_4_;
              fVar173 = *(float *)(lVar1 + 0xb8) + *(float *)(lVar1 + 0xd8) + auVar48._8_4_;
            }
            fVar52 = *(float *)(lVar42 + 0x20) - *(float *)(lVar38 + 0x40);
            fVar60 = *(float *)(lVar42 + 0x24) - *(float *)(lVar38 + 0x44);
            auVar53._0_8_ = CONCAT44(fVar60,fVar52);
            auVar53._8_4_ = *(float *)(lVar42 + 0x28) - *(float *)(lVar38 + 0x48);
            auVar53._12_4_ = 0;
            auVar48 = NEON_ext(auVar53,auVar53,0xc,1);
            if (*(long *)(lVar2 + 0xf0) != 0) {
              auVar93._0_4_ = *(float *)(lVar2 + 0xc0) + *(float *)(lVar2 + 0xe0);
              auVar93._4_4_ = *(float *)(lVar2 + 0xc4) + *(float *)(lVar2 + 0xe4);
              auVar93._8_4_ = *(float *)(lVar2 + 200) + *(float *)(lVar2 + 0xe8);
              auVar93._12_4_ = *(float *)(lVar2 + 0xcc) + *(float *)(lVar2 + 0xec);
              auVar47 = NEON_ext(auVar93,auVar93,0xc,1);
              auVar47 = NEON_ext(auVar47,auVar93,8,1);
              auVar88 = NEON_ext(auVar48,auVar53,8,1);
              auVar89._0_4_ = auVar88._0_4_ * auVar93._0_4_ - auVar47._0_4_ * fVar52;
              auVar89._4_4_ = auVar88._4_4_ * auVar93._4_4_ - auVar47._4_4_ * fVar60;
              auVar89._8_4_ = auVar88._8_4_ * auVar93._8_4_ - auVar47._8_4_ * auVar53._8_4_;
              auVar89._12_4_ = auVar88._12_4_ * auVar93._12_4_ - auVar47._12_4_ * 0.0;
              auVar47 = NEON_ext(auVar89,auVar89,0xc,1);
              auVar47 = NEON_ext(auVar47,auVar89,8,1);
              fVar168 = *(float *)(lVar2 + 0xb0) + *(float *)(lVar2 + 0xd0) + auVar47._0_4_;
              fVar169 = *(float *)(lVar2 + 0xb4) + *(float *)(lVar2 + 0xd4) + auVar47._4_4_;
              fVar170 = *(float *)(lVar2 + 0xb8) + *(float *)(lVar2 + 0xd8) + auVar47._8_4_;
            }
            pauVar31 = (undefined1 (*) [16])(lVar42 + 0x40);
            fVar75 = (float)*(undefined8 *)(lVar42 + 0x48);
            fVar99 = (float)((ulong)*(undefined8 *)(lVar42 + 0x48) >> 0x20);
            fVar174 = (float)*(undefined8 *)*pauVar31;
            fVar175 = (float)((ulong)*(undefined8 *)*pauVar31 >> 0x20);
            lVar29 = *(long *)(param_1 + 0x18) + (long)(int)fVar41 * 0x100;
            lVar33 = *(long *)(param_1 + 0x18) + (long)(int)fVar26 * 0x100;
            lVar37 = *(long *)(lVar29 + 0xf0);
            lVar36 = *(long *)(lVar33 + 0xf0);
            fVar120 = *(float *)(param_4 + 0x1c);
            fVar165 = *(float *)(param_4 + 0xc);
            fVar87 = *(float *)(param_4 + 0x34);
            fVar46 = *(float *)(param_4 + 0x24);
            uVar34 = *(uint *)(lVar42 + 0x80);
            if ((uVar34 & 6) == 0) {
              if ((uVar34 >> 3 & 1) != 0) {
                fVar87 = *(float *)(lVar42 + 0xa0) + *(float *)(lVar42 + 0x9c) * fVar165;
                fVar46 = 1.1920929e-07;
                if (1.1920929e-07 <= fVar87) {
                  fVar46 = fVar87;
                }
                fVar87 = 1.0 / fVar46;
                fVar46 = (fVar165 * *(float *)(lVar42 + 0x9c)) / fVar46;
              }
            }
            else {
              if ((uVar34 & 2) != 0) {
                fVar87 = *(float *)(lVar42 + 0x9c);
              }
              if ((uVar34 >> 2 & 1) != 0) {
                fVar46 = *(float *)(lVar42 + 0xa0);
              }
            }
            auVar7[4] = uVar149;
            auVar7._0_4_ = fVar61;
            auVar7[5] = uVar150;
            auVar7[6] = uVar151;
            auVar7[7] = uVar152;
            auVar7[8] = uVar153;
            auVar7[9] = uVar154;
            auVar7[10] = uVar155;
            auVar7[0xb] = uVar156;
            auVar7._12_4_ = 0;
            auVar8[4] = uVar149;
            auVar8._0_4_ = fVar61;
            auVar8[5] = uVar150;
            auVar8[6] = uVar151;
            auVar8[7] = uVar152;
            auVar8[8] = uVar153;
            auVar8[9] = uVar154;
            auVar8[10] = uVar155;
            auVar8[0xb] = uVar156;
            auVar8._12_4_ = 0;
            auVar47 = NEON_ext(auVar7,auVar8,0xc,1);
            auVar9[4] = uVar149;
            auVar9._0_4_ = fVar61;
            auVar9[5] = uVar150;
            auVar9[6] = uVar151;
            auVar9[7] = uVar152;
            auVar9[8] = uVar153;
            auVar9[9] = uVar154;
            auVar9[10] = uVar155;
            auVar9[0xb] = uVar156;
            auVar9._12_4_ = 0;
            auVar47 = NEON_ext(auVar47,auVar9,8,1);
            auVar10._12_4_ = fVar99;
            auVar10._0_12_ = *(undefined1 (*) [12])*pauVar31;
            auVar11._12_4_ = fVar99;
            auVar11._0_12_ = *(undefined1 (*) [12])*pauVar31;
            auVar88 = NEON_ext(auVar10,auVar11,0xc,1);
            auVar12._12_4_ = fVar99;
            auVar12._0_12_ = *(undefined1 (*) [12])*pauVar31;
            auVar88 = NEON_ext(auVar88,auVar12,8,1);
            fVar142 = auVar47._0_4_;
            fVar84 = auVar47._4_4_;
            fVar85 = auVar47._8_4_;
            fVar86 = auVar47._12_4_;
            auVar94._0_4_ = auVar88._0_4_ * fVar61 - fVar142 * fVar174;
            auVar94._4_4_ = auVar88._4_4_ * fVar103 - fVar84 * fVar175;
            auVar94._8_4_ = auVar88._8_4_ * fVar91 - fVar85 * fVar75;
            auVar94._12_4_ = auVar88._12_4_ * 0.0 - fVar86 * fVar99;
            auVar47 = NEON_ext(auVar94,auVar94,0xc,1);
            auVar47 = NEON_ext(auVar47,auVar94,8,1);
            auVar123._0_14_ = ZEXT314(0);
            auVar123._14_2_ = 0;
            auVar127._0_14_ = ZEXT314(0);
            auVar127._14_2_ = 0;
            if (lVar37 != 0) {
              fVar99 = auVar47._0_4_;
              auVar100._0_4_ = *(float *)(lVar37 + 0x180) * fVar99;
              fVar97 = auVar47._4_4_;
              auVar100._4_4_ = *(float *)(lVar37 + 0x184) * fVar97;
              fVar98 = auVar47._8_4_;
              auVar100._8_4_ = *(float *)(lVar37 + 0x188) * fVar98;
              auVar100._12_4_ = *(float *)(lVar37 + 0x18c) * 0.0;
              auVar107._0_4_ = *(float *)(lVar37 + 400) * fVar99;
              auVar107._4_4_ = *(float *)(lVar37 + 0x194) * fVar97;
              auVar107._8_4_ = *(float *)(lVar37 + 0x198) * fVar98;
              auVar107._12_4_ = *(float *)(lVar37 + 0x19c) * 0.0;
              auVar126._0_4_ = *(float *)(lVar37 + 0x1a0) * fVar99;
              auVar126._4_4_ = *(float *)(lVar37 + 0x1a4) * fVar97;
              auVar126._8_4_ = *(float *)(lVar37 + 0x1a8) * fVar98;
              auVar137 = NEON_ext(auVar100,auVar100,8,1);
              auVar144 = NEON_ext(auVar107,auVar107,8,1);
              auVar126._12_4_ = 0;
              auVar88 = NEON_ext(auVar126,auVar126,8,1);
              auVar127._0_4_ =
                   (auVar100._0_4_ + auVar100._4_4_ + auVar137._0_4_) * *(float *)(lVar37 + 0x2b0);
              auVar127._4_4_ =
                   (auVar107._0_4_ + auVar107._4_4_ + auVar144._0_4_) * *(float *)(lVar37 + 0x2b4);
              auVar127._8_4_ =
                   (auVar126._0_4_ + auVar126._4_4_ + auVar88._0_4_ + auVar88._4_4_) *
                   *(float *)(lVar37 + 0x2b8);
              auVar127._12_4_ = *(float *)(lVar37 + 700) * 0.0;
            }
            *(long *)(pfVar40 + 0x12) = auVar127._8_8_;
            *(long *)(pfVar40 + 0x10) = auVar127._0_8_;
            auVar88 = *pauVar31;
            auVar137 = NEON_ext(auVar48,auVar53,8,1);
            auVar48 = NEON_ext(auVar88,auVar88,0xc,1);
            auVar48 = NEON_ext(auVar48,auVar88,8,1);
            fVar99 = auVar137._0_4_;
            fVar97 = auVar137._4_4_;
            fVar98 = auVar137._8_4_;
            fVar101 = auVar137._12_4_;
            auVar62._0_4_ = auVar48._0_4_ * fVar52 - fVar99 * auVar88._0_4_;
            auVar62._4_4_ = auVar48._4_4_ * fVar60 - fVar97 * auVar88._4_4_;
            auVar62._8_4_ = auVar48._8_4_ * auVar53._8_4_ - fVar98 * auVar88._8_4_;
            auVar62._12_4_ = auVar48._12_4_ * 0.0 - fVar101 * auVar88._12_4_;
            auVar48 = NEON_ext(auVar62,auVar62,0xc,1);
            auVar48 = NEON_ext(auVar48,auVar62,8,1);
            auVar104._0_8_ = auVar48._0_8_ ^ 0x8000000080000000;
            auVar104[8] = auVar48[8];
            auVar104[9] = auVar48[9];
            auVar104[10] = auVar48[10];
            auVar104[0xb] = auVar48[0xb] ^ 0x80;
            auVar108._12_3_ = 0;
            auVar108._0_12_ = auVar104;
            auVar108[0xf] = 0x80;
            if (lVar36 != 0) {
              fVar135 = (float)auVar104._0_8_;
              auVar63._0_4_ = *(float *)(lVar36 + 0x180) * fVar135;
              fVar141 = (float)(auVar104._0_8_ >> 0x20);
              auVar63._4_4_ = *(float *)(lVar36 + 0x184) * fVar141;
              fVar119 = auVar104._8_4_;
              auVar63._8_4_ = *(float *)(lVar36 + 0x188) * fVar119;
              auVar63._12_4_ = *(float *)(lVar36 + 0x18c) * auVar108._12_4_;
              auVar122._0_4_ = *(float *)(lVar36 + 400) * fVar135;
              auVar122._4_4_ = *(float *)(lVar36 + 0x194) * fVar141;
              auVar122._8_4_ = *(float *)(lVar36 + 0x198) * fVar119;
              auVar122._12_4_ = *(float *)(lVar36 + 0x19c) * auVar108._12_4_;
              auVar138._0_4_ = *(float *)(lVar36 + 0x1a0) * fVar135;
              auVar138._4_4_ = *(float *)(lVar36 + 0x1a4) * fVar141;
              auVar138._8_4_ = *(float *)(lVar36 + 0x1a8) * fVar119;
              auVar137 = NEON_ext(auVar63,auVar63,8,1);
              auVar144 = NEON_ext(auVar122,auVar122,8,1);
              auVar138._12_4_ = 0;
              auVar88 = NEON_ext(auVar138,auVar138,8,1);
              auVar123._0_4_ =
                   (auVar63._0_4_ + auVar63._4_4_ + auVar137._0_4_) * *(float *)(lVar36 + 0x2b0);
              auVar123._4_4_ =
                   (auVar122._0_4_ + auVar122._4_4_ + auVar144._0_4_) * *(float *)(lVar36 + 0x2b4);
              auVar123._8_4_ =
                   (auVar138._0_4_ + auVar138._4_4_ + auVar88._0_4_ + auVar88._4_4_) *
                   *(float *)(lVar36 + 0x2b8);
              auVar123._12_4_ = *(float *)(lVar36 + 700) * 0.0;
            }
            *(long *)(pfVar40 + 0x16) = auVar123._8_8_;
            *(long *)(pfVar40 + 0x14) = auVar123._0_8_;
            fVar141 = 0.0;
            fVar135 = 0.0;
            if (lVar37 != 0) {
              auVar88 = NEON_ext(auVar127,auVar127,0xc,1);
              auVar88 = NEON_ext(auVar88,auVar127,8,1);
              auVar64._0_4_ = fVar142 * auVar127._0_4_ - auVar88._0_4_ * fVar61;
              auVar64._4_4_ = fVar84 * auVar127._4_4_ - auVar88._4_4_ * fVar103;
              auVar64._8_4_ = fVar85 * auVar127._8_4_ - auVar88._8_4_ * fVar91;
              auVar64._12_4_ = fVar86 * auVar127._12_4_ - auVar88._12_4_ * 0.0;
              auVar88 = NEON_ext(auVar64,auVar64,0xc,1);
              auVar88 = NEON_ext(auVar88,auVar64,8,1);
              auVar65._0_4_ = *(float *)*pauVar31 * auVar88._0_4_;
              auVar65._4_4_ = *(float *)(lVar42 + 0x44) * auVar88._4_4_;
              auVar65._8_4_ = *(float *)(lVar42 + 0x48) * auVar88._8_4_;
              auVar65._12_4_ = *(float *)(lVar42 + 0x4c) * 0.0;
              auVar88 = NEON_ext(auVar65,auVar65,8,1);
              fVar135 = *(float *)(lVar37 + 0x1d0) + auVar65._0_4_ + auVar65._4_4_ + auVar88._0_4_;
            }
            if (lVar36 != 0) {
              auVar66._0_4_ = -auVar123._0_4_;
              auVar66._4_4_ = -auVar123._4_4_;
              auVar66._8_4_ = -auVar123._8_4_;
              auVar66._12_4_ = -auVar123._12_4_;
              auVar88 = NEON_ext(auVar66,auVar66,0xc,1);
              auVar88 = NEON_ext(auVar88,auVar66,8,1);
              auVar67._0_4_ = fVar99 * auVar66._0_4_ - auVar88._0_4_ * fVar52;
              auVar67._4_4_ = fVar97 * auVar66._4_4_ - auVar88._4_4_ * fVar60;
              auVar67._8_4_ = fVar98 * auVar66._8_4_ - auVar88._8_4_ * auVar53._8_4_;
              auVar67._12_4_ = fVar101 * auVar66._12_4_ - auVar88._12_4_ * 0.0;
              auVar88 = NEON_ext(auVar67,auVar67,0xc,1);
              auVar88 = NEON_ext(auVar88,auVar67,8,1);
              auVar68._0_4_ = *(float *)*pauVar31 * auVar88._0_4_;
              auVar68._4_4_ = *(float *)(lVar42 + 0x44) * auVar88._4_4_;
              auVar68._8_4_ = *(float *)(lVar42 + 0x48) * auVar88._8_4_;
              auVar68._12_4_ = *(float *)(lVar42 + 0x4c) * 0.0;
              auVar88 = NEON_ext(auVar68,auVar68,8,1);
              fVar141 = *(float *)(lVar36 + 0x1d0) + auVar68._0_4_ + auVar68._4_4_ + auVar88._0_4_;
            }
            fVar165 = 1.0 / fVar165;
            lVar125 = -(ulong)(lVar36 == 0);
            bVar124 = (byte)lVar125;
            bVar128 = (byte)((ulong)lVar125 >> 8);
            bVar129 = (byte)((ulong)lVar125 >> 0x10);
            bVar130 = (byte)((ulong)lVar125 >> 0x18);
            bVar131 = (byte)((ulong)lVar125 >> 0x20);
            bVar132 = (byte)((ulong)lVar125 >> 0x28);
            bVar133 = (byte)((ulong)lVar125 >> 0x30);
            bVar134 = (byte)((ulong)lVar125 >> 0x38);
            lVar125 = -(ulong)(lVar37 == 0);
            bVar102 = (byte)lVar125;
            bVar112 = (byte)((ulong)lVar125 >> 8);
            bVar113 = (byte)((ulong)lVar125 >> 0x10);
            bVar114 = (byte)((ulong)lVar125 >> 0x18);
            bVar115 = (byte)((ulong)lVar125 >> 0x20);
            bVar116 = (byte)((ulong)lVar125 >> 0x28);
            bVar117 = (byte)((ulong)lVar125 >> 0x30);
            bVar118 = (byte)((ulong)lVar125 >> 0x38);
            auVar92._0_8_ =
                 CONCAT17(auVar47[7] & ~bVar118,
                          CONCAT16(auVar47[6] & ~bVar117,
                                   CONCAT15(auVar47[5] & ~bVar116,
                                            CONCAT14(auVar47[4] & ~bVar115,
                                                     CONCAT13(auVar47[3] & ~bVar114,
                                                              CONCAT12(auVar47[2] & ~bVar113,
                                                                       CONCAT11(auVar47[1] &
                                                                                ~bVar112,auVar47[0]
                                                                                         & ~bVar102)
                                                                      ))))));
            auVar92[8] = auVar47[8] & ~bVar102;
            auVar92[9] = auVar47[9] & ~bVar112;
            auVar92[10] = auVar47[10] & ~bVar113;
            auVar92[0xb] = auVar47[0xb] & ~bVar114;
            pfVar40[0x1b] = fVar120 / (fVar165 * fVar87 + fVar135 + fVar141);
            fVar119 = (float)CONCAT13(*(byte *)(lVar42 + 0x43) & ~bVar114,
                                      CONCAT12(*(byte *)(lVar42 + 0x42) & ~bVar113,
                                               CONCAT11(*(byte *)(lVar42 + 0x41) & ~bVar112,
                                                        *(byte *)(lVar42 + 0x40) & ~bVar102)));
            auVar136._0_8_ =
                 CONCAT17(*(byte *)(lVar42 + 0x47) & ~bVar118,
                          CONCAT16(*(byte *)(lVar42 + 0x46) & ~bVar117,
                                   CONCAT15(*(byte *)(lVar42 + 0x45) & ~bVar116,
                                            CONCAT14(*(byte *)(lVar42 + 0x44) & ~bVar115,fVar119))))
            ;
            auVar136[8] = *(byte *)(lVar42 + 0x48) & ~bVar102;
            auVar136[9] = *(byte *)(lVar42 + 0x49) & ~bVar112;
            auVar136[10] = *(byte *)(lVar42 + 0x4a) & ~bVar113;
            auVar136[0xb] = *(byte *)(lVar42 + 0x4b) & ~bVar114;
            auVar139[0xc] = *(byte *)(lVar42 + 0x4c) & ~bVar115;
            auVar139._0_12_ = auVar136;
            auVar139[0xd] = *(byte *)(lVar42 + 0x4d) & ~bVar116;
            auVar139[0xe] = *(byte *)(lVar42 + 0x4e) & ~bVar117;
            auVar139[0xf] = *(byte *)(lVar42 + 0x4f) & ~bVar118;
            *(ulong *)(pfVar40 + 2) = (ulong)auVar92._8_4_;
            *(undefined8 *)pfVar40 = auVar92._0_8_;
            *(long *)(pfVar40 + 6) = auVar139._8_8_;
            *(undefined8 *)(pfVar40 + 4) = auVar136._0_8_;
            bVar102 = *(byte *)(lVar42 + 0x40);
            bVar112 = *(byte *)(lVar42 + 0x41);
            bVar113 = *(byte *)(lVar42 + 0x42);
            bVar114 = *(byte *)(lVar42 + 0x43);
            bVar115 = *(byte *)(lVar42 + 0x44);
            bVar116 = *(byte *)(lVar42 + 0x45);
            bVar117 = *(byte *)(lVar42 + 0x46);
            bVar118 = *(byte *)(lVar42 + 0x47);
            bVar17 = *(byte *)(lVar42 + 0x48);
            bVar18 = *(byte *)(lVar42 + 0x49);
            bVar19 = *(byte *)(lVar42 + 0x4a);
            bVar20 = *(byte *)(lVar42 + 0x4b);
            bVar21 = *(byte *)(lVar42 + 0x4c);
            bVar22 = *(byte *)(lVar42 + 0x4d);
            bVar23 = *(byte *)(lVar42 + 0x4e);
            bVar24 = *(byte *)(lVar42 + 0x4f);
            auVar105 = SUB1412(ZEXT214(0),0);
            *(byte *)(pfVar40 + 10) = auVar48[8] & ~bVar124;
            *(byte *)((long)pfVar40 + 0x29) = auVar48[9] & ~bVar128;
            *(byte *)((long)pfVar40 + 0x2a) = auVar48[10] & ~bVar129;
            *(byte *)((long)pfVar40 + 0x2b) = auVar104[0xb] & ~bVar130;
            *(undefined1 *)(pfVar40 + 0xb) = 0;
            *(undefined1 *)((long)pfVar40 + 0x2d) = 0;
            *(undefined1 *)((long)pfVar40 + 0x2e) = 0;
            *(byte *)((long)pfVar40 + 0x2f) = ~bVar134 & 0x80;
            *(byte *)(pfVar40 + 8) = auVar48[0] & ~bVar124;
            *(byte *)((long)pfVar40 + 0x21) = auVar48[1] & ~bVar128;
            *(byte *)((long)pfVar40 + 0x22) = auVar48[2] & ~bVar129;
            *(byte *)((long)pfVar40 + 0x23) = (byte)(auVar104._0_8_ >> 0x18) & ~bVar130;
            *(byte *)(pfVar40 + 9) = auVar48[4] & ~bVar131;
            *(byte *)((long)pfVar40 + 0x25) = auVar48[5] & ~bVar132;
            *(byte *)((long)pfVar40 + 0x26) = auVar48[6] & ~bVar133;
            *(byte *)((long)pfVar40 + 0x27) = (byte)(auVar104._0_8_ >> 0x38) & ~bVar134;
            *(byte *)(pfVar40 + 0xe) = bVar17 & ~bVar124;
            *(byte *)((long)pfVar40 + 0x39) = bVar18 & ~bVar128;
            *(byte *)((long)pfVar40 + 0x3a) = bVar19 & ~bVar129;
            *(byte *)((long)pfVar40 + 0x3b) = (bVar20 ^ 0x80) & ~bVar130;
            *(byte *)(pfVar40 + 0xf) = bVar21 & ~bVar131;
            *(byte *)((long)pfVar40 + 0x3d) = bVar22 & ~bVar132;
            *(byte *)((long)pfVar40 + 0x3e) = bVar23 & ~bVar133;
            *(byte *)((long)pfVar40 + 0x3f) = (bVar24 ^ 0x80) & ~bVar134;
            *(byte *)(pfVar40 + 0xc) = bVar102 & ~bVar124;
            *(byte *)((long)pfVar40 + 0x31) = bVar112 & ~bVar128;
            *(byte *)((long)pfVar40 + 0x32) = bVar113 & ~bVar129;
            *(byte *)((long)pfVar40 + 0x33) = (bVar114 ^ 0x80) & ~bVar130;
            *(byte *)(pfVar40 + 0xd) = bVar115 & ~bVar131;
            *(byte *)((long)pfVar40 + 0x35) = bVar116 & ~bVar132;
            *(byte *)((long)pfVar40 + 0x36) = bVar117 & ~bVar133;
            *(byte *)((long)pfVar40 + 0x37) = (bVar118 ^ 0x80) & ~bVar134;
            fVar135 = *(float *)(lVar42 + 0x50);
            fVar141 = *(float *)(param_4 + 0x4c);
            auVar121 = SUB1412(ZEXT214(0),0);
            if (lVar37 != 0) {
              auVar48 = *(undefined1 (*) [16])(lVar37 + 0x1c0);
              auVar47 = NEON_ext(auVar48,auVar48,0xc,1);
              auVar47 = NEON_ext(auVar47,auVar48,8,1);
              auVar78._0_4_ = fVar142 * auVar48._0_4_ - auVar47._0_4_ * fVar61;
              auVar78._4_4_ = fVar84 * auVar48._4_4_ - auVar47._4_4_ * fVar103;
              auVar78._8_4_ = fVar85 * auVar48._8_4_ - auVar47._8_4_ * fVar91;
              auVar78._12_4_ = fVar86 * auVar48._12_4_ - auVar47._12_4_ * 0.0;
              auVar48 = NEON_ext(auVar78,auVar78,0xc,1);
              auVar48 = NEON_ext(auVar48,auVar78,8,1);
              auVar121._0_4_ = *(float *)(lVar37 + 0x1b0) + auVar48._0_4_;
              auVar121._4_4_ = *(float *)(lVar37 + 0x1b4) + auVar48._4_4_;
              auVar121._8_4_ = *(float *)(lVar37 + 0x1b8) + auVar48._8_4_;
            }
            if (lVar36 != 0) {
              auVar48 = *(undefined1 (*) [16])(lVar36 + 0x1c0);
              auVar47 = NEON_ext(auVar48,auVar48,0xc,1);
              auVar47 = NEON_ext(auVar47,auVar48,8,1);
              auVar79._0_4_ = fVar99 * auVar48._0_4_ - auVar47._0_4_ * fVar52;
              auVar79._4_4_ = fVar97 * auVar48._4_4_ - auVar47._4_4_ * fVar60;
              auVar79._8_4_ = fVar98 * auVar48._8_4_ - auVar47._8_4_ * auVar53._8_4_;
              auVar79._12_4_ = fVar101 * auVar48._12_4_ - auVar47._12_4_ * 0.0;
              auVar48 = NEON_ext(auVar79,auVar79,0xc,1);
              auVar48 = NEON_ext(auVar48,auVar79,8,1);
              auVar105._0_4_ = *(float *)(lVar36 + 0x1b0) + auVar48._0_4_;
              auVar105._4_4_ = *(float *)(lVar36 + 0x1b4) + auVar48._4_4_;
              auVar105._8_4_ = *(float *)(lVar36 + 0x1b8) + auVar48._8_4_;
            }
            uVar6 = CONCAT17(uVar152,CONCAT16(uVar151,CONCAT15(uVar150,CONCAT14(uVar149,fVar61))));
            fVar61 = *(float *)(lVar42 + 0x40);
            fVar103 = *(float *)(lVar42 + 0x44);
            fVar91 = *(float *)(lVar42 + 0x48);
            fVar52 = *(float *)(lVar42 + 0x4c);
            pfVar40[0x1a] = *(float *)(lVar42 + 0x54);
            fVar60 = *(float *)(lVar42 + 0x60);
            fVar99 = *(float *)(param_4 + 0x70);
            if ((*(byte *)(param_4 + 0x58) >> 2 & 1) == 0) {
              pfVar40[0x19] = 0.0;
            }
            else {
              fVar142 = *(float *)(lVar42 + 0x84) * *(float *)(param_4 + 0x50);
              pfVar40[0x19] = fVar142;
              if ((lVar37 != 0) && (*(long *)(lVar29 + 0xf0) != 0)) {
                uVar167 = *(undefined8 *)(lVar29 + 0x58);
                uVar166 = *(undefined8 *)(lVar29 + 0x50);
                *(float *)(lVar29 + 0x48) =
                     *(float *)(lVar29 + 0x48) +
                     *(float *)(lVar29 + 0x78) *
                     auVar136._8_4_ * (float)*(undefined8 *)(lVar29 + 0x88) * fVar142;
                *(float *)(lVar29 + 0x4c) =
                     *(float *)(lVar29 + 0x4c) + *(float *)(lVar29 + 0x7c) * 0.0;
                *(float *)(lVar29 + 0x40) =
                     *(float *)(lVar29 + 0x40) +
                     *(float *)(lVar29 + 0x70) *
                     fVar119 * (float)*(undefined8 *)(lVar29 + 0x80) * fVar142;
                *(float *)(lVar29 + 0x44) =
                     *(float *)(lVar29 + 0x44) +
                     *(float *)(lVar29 + 0x74) *
                     (float)((ulong)auVar136._0_8_ >> 0x20) *
                     (float)((ulong)*(undefined8 *)(lVar29 + 0x80) >> 0x20) * fVar142;
                fVar84 = pfVar40[0x10];
                fVar85 = pfVar40[0x11];
                fVar86 = pfVar40[0x13];
                *(float *)(lVar29 + 0x58) =
                     (float)uVar167 +
                     pfVar40[0x12] * (float)*(undefined8 *)(lVar29 + 0x68) * fVar142;
                *(float *)(lVar29 + 0x5c) = (float)((ulong)uVar167 >> 0x20) + fVar86 * 0.0;
                *(float *)(lVar29 + 0x50) =
                     (float)uVar166 + fVar84 * (float)*(undefined8 *)(lVar29 + 0x60) * fVar142;
                *(float *)(lVar29 + 0x54) =
                     (float)((ulong)uVar166 >> 0x20) +
                     fVar85 * (float)((ulong)*(undefined8 *)(lVar29 + 0x60) >> 0x20) * fVar142;
              }
              if ((lVar36 != 0) && (*(long *)(lVar33 + 0xf0) != 0)) {
                fVar142 = -pfVar40[0x19];
                auVar48 = *(undefined1 (*) [16])(pfVar40 + 0xc);
                auVar143._0_8_ = auVar48._0_8_ ^ 0x8000000080000000;
                auVar143[8] = auVar48[8];
                auVar143[9] = auVar48[9];
                auVar143[10] = auVar48[10];
                auVar143[0xb] = auVar48[0xb] ^ 0x80;
                uVar167 = *(undefined8 *)(lVar33 + 0x58);
                uVar166 = *(undefined8 *)(lVar33 + 0x50);
                auVar48 = *(undefined1 (*) [16])(pfVar40 + 0x14);
                auVar146._0_8_ = auVar48._0_8_ ^ 0x8000000080000000;
                auVar146[8] = auVar48[8];
                auVar146[9] = auVar48[9];
                auVar146[10] = auVar48[10];
                auVar146[0xb] = auVar48[0xb] ^ 0x80;
                auVar147[0xc] = auVar48[0xc];
                auVar147._0_12_ = auVar146;
                auVar147[0xd] = auVar48[0xd];
                auVar147[0xe] = auVar48[0xe];
                auVar147[0xf] = auVar48[0xf] ^ 0x80;
                *(float *)(lVar33 + 0x48) =
                     *(float *)(lVar33 + 0x48) +
                     *(float *)(lVar33 + 0x78) *
                     (float)*(undefined8 *)(lVar33 + 0x88) * auVar143._8_4_ * fVar142;
                *(float *)(lVar33 + 0x4c) =
                     *(float *)(lVar33 + 0x4c) + *(float *)(lVar33 + 0x7c) * 0.0;
                *(float *)(lVar33 + 0x40) =
                     *(float *)(lVar33 + 0x40) +
                     *(float *)(lVar33 + 0x70) *
                     (float)*(undefined8 *)(lVar33 + 0x80) * (float)auVar143._0_8_ * fVar142;
                *(float *)(lVar33 + 0x44) =
                     *(float *)(lVar33 + 0x44) +
                     *(float *)(lVar33 + 0x74) *
                     (float)((ulong)*(undefined8 *)(lVar33 + 0x80) >> 0x20) *
                     (float)(auVar143._0_8_ >> 0x20) * fVar142;
                *(float *)(lVar33 + 0x58) =
                     (float)uVar167 +
                     auVar146._8_4_ * (float)*(undefined8 *)(lVar33 + 0x68) * fVar142;
                *(float *)(lVar33 + 0x5c) = (float)((ulong)uVar167 >> 0x20) + auVar147._12_4_ * 0.0;
                *(float *)(lVar33 + 0x50) =
                     (float)uVar166 +
                     (float)auVar146._0_8_ * (float)*(undefined8 *)(lVar33 + 0x60) * fVar142;
                *(float *)(lVar33 + 0x54) =
                     (float)((ulong)uVar166 >> 0x20) +
                     (float)(auVar146._0_8_ >> 0x20) *
                     (float)((ulong)*(undefined8 *)(lVar33 + 0x60) >> 0x20) * fVar142;
              }
            }
            pfVar40[0x18] = 0.0;
            auVar140._0_14_ = ZEXT214(0);
            auVar140._14_2_ = 0;
            uVar149 = 0;
            uVar150 = 0;
            uVar151 = 0;
            uVar152 = 0;
            uVar153 = 0;
            uVar154 = 0;
            uVar155 = 0;
            uVar156 = 0;
            uVar157 = 0;
            uVar158 = 0;
            uVar159 = 0;
            uVar160 = 0;
            uVar161 = 0;
            uVar162 = 0;
            uVar163 = 0;
            uVar164 = 0;
            auVar148._0_14_ = ZEXT214(0);
            auVar148._14_2_ = 0;
            if (*(long *)(lVar29 + 0xf0) != 0) {
              uVar166 = *(undefined8 *)(lVar29 + 0xd8);
              uVar157 = (undefined1)uVar166;
              uVar158 = (undefined1)((ulong)uVar166 >> 8);
              uVar159 = (undefined1)((ulong)uVar166 >> 0x10);
              uVar160 = (undefined1)((ulong)uVar166 >> 0x18);
              uVar161 = (undefined1)((ulong)uVar166 >> 0x20);
              uVar162 = (undefined1)((ulong)uVar166 >> 0x28);
              uVar163 = (undefined1)((ulong)uVar166 >> 0x30);
              uVar164 = (undefined1)((ulong)uVar166 >> 0x38);
              uVar166 = *(undefined8 *)(lVar29 + 0xd0);
              uVar149 = (undefined1)uVar166;
              uVar150 = (undefined1)((ulong)uVar166 >> 8);
              uVar151 = (undefined1)((ulong)uVar166 >> 0x10);
              uVar152 = (undefined1)((ulong)uVar166 >> 0x18);
              uVar153 = (undefined1)((ulong)uVar166 >> 0x20);
              uVar154 = (undefined1)((ulong)uVar166 >> 0x28);
              uVar155 = (undefined1)((ulong)uVar166 >> 0x30);
              uVar156 = (undefined1)((ulong)uVar166 >> 0x38);
              auVar148 = *(undefined1 (*) [16])(lVar29 + 0xe0);
            }
            auVar145._0_14_ = ZEXT214(0);
            auVar145._14_2_ = 0;
            if (*(long *)(lVar33 + 0xf0) != 0) {
              auVar140 = *(undefined1 (*) [16])(lVar33 + 0xd0);
              auVar145 = *(undefined1 (*) [16])(lVar33 + 0xe0);
            }
            auVar109._0_4_ = fVar61 * (auVar121._0_4_ - auVar105._0_4_);
            auVar109._4_4_ = fVar103 * (auVar121._4_4_ - auVar105._4_4_);
            auVar109._8_4_ = fVar91 * (auVar121._8_4_ - auVar105._8_4_);
            auVar109._12_4_ = fVar52 * 0.0;
            auVar48 = NEON_ext(auVar109,auVar109,8,1);
            fVar103 = auVar48._0_4_ + auVar109._0_4_ + auVar109._4_4_;
            fVar61 = 0.0;
            if (fVar99 <= ABS(fVar103)) {
              fVar61 = -(fVar103 * fVar60);
            }
            fVar103 = 0.0;
            if (0.0 < fVar61) {
              fVar103 = fVar61;
            }
            fVar135 = fVar135 + fVar141;
            auVar90._0_4_ =
                 pfVar40[4] *
                 ((float)CONCAT13(uVar152,CONCAT12(uVar151,CONCAT11(uVar150,uVar149))) +
                 *(float *)(lVar29 + 0xb0));
            auVar90._4_4_ =
                 pfVar40[5] *
                 ((float)CONCAT13(uVar156,CONCAT12(uVar155,CONCAT11(uVar154,uVar153))) +
                 *(float *)(lVar29 + 0xb4));
            auVar90._8_4_ =
                 pfVar40[6] *
                 ((float)CONCAT13(uVar160,CONCAT12(uVar159,CONCAT11(uVar158,uVar157))) +
                 *(float *)(lVar29 + 0xb8));
            auVar90._12_4_ =
                 pfVar40[7] *
                 ((float)CONCAT13(uVar164,CONCAT12(uVar163,CONCAT11(uVar162,uVar161))) +
                 *(float *)(lVar29 + 0xbc));
            auVar48 = NEON_ext(auVar90,auVar90,8,1);
            auVar95._0_4_ = *pfVar40 * (auVar148._0_4_ + *(float *)(lVar29 + 0xc0));
            auVar95._4_4_ = pfVar40[1] * (auVar148._4_4_ + *(float *)(lVar29 + 0xc4));
            auVar95._8_4_ = pfVar40[2] * (auVar148._8_4_ + *(float *)(lVar29 + 200));
            auVar95._12_4_ = pfVar40[3] * (auVar148._12_4_ + *(float *)(lVar29 + 0xcc));
            auVar47 = NEON_ext(auVar95,auVar95,8,1);
            auVar96._0_4_ = pfVar40[0xc] * (auVar140._0_4_ + *(float *)(lVar33 + 0xb0));
            auVar96._4_4_ = pfVar40[0xd] * (auVar140._4_4_ + *(float *)(lVar33 + 0xb4));
            auVar96._8_4_ = pfVar40[0xe] * (auVar140._8_4_ + *(float *)(lVar33 + 0xb8));
            auVar96._12_4_ = pfVar40[0xf] * (auVar140._12_4_ + *(float *)(lVar33 + 0xbc));
            auVar88 = NEON_ext(auVar96,auVar96,8,1);
            auVar110._0_4_ = pfVar40[8] * (auVar145._0_4_ + *(float *)(lVar33 + 0xc0));
            auVar110._4_4_ = pfVar40[9] * (auVar145._4_4_ + *(float *)(lVar33 + 0xc4));
            auVar110._8_4_ = pfVar40[10] * (auVar145._8_4_ + *(float *)(lVar33 + 200));
            auVar110._12_4_ = pfVar40[0xb] * (auVar145._12_4_ + *(float *)(lVar33 + 0xcc));
            auVar137 = NEON_ext(auVar110,auVar110,8,1);
            fVar103 = fVar103 - (auVar90._0_4_ + auVar90._4_4_ + auVar48._0_4_ +
                                 auVar95._0_4_ + auVar95._4_4_ + auVar47._0_4_ +
                                auVar96._0_4_ + auVar96._4_4_ + auVar88._0_4_ +
                                auVar110._0_4_ + auVar110._4_4_ + auVar137._0_4_);
            fVar61 = fVar103 - fVar165 * fVar135;
            fVar91 = 0.0;
            if (fVar135 <= 0.0) {
              fVar61 = fVar103;
              fVar91 = fVar165 * -(fVar135 * fVar46);
            }
            fVar52 = pfVar40[0x1b];
            bVar4 = fVar135 <= *(float *)(param_4 + 0x44);
            bVar25 = *(int *)(param_4 + 0x40) != 0;
            fVar103 = fVar91 * fVar52 + fVar52 * fVar61;
            if (bVar4 && bVar25) {
              fVar103 = fVar52 * fVar61;
            }
            fVar61 = 0.0;
            if (bVar4 && bVar25) {
              fVar61 = fVar91 * fVar52;
            }
            pfVar40[0x20] = fVar61;
            pfVar40[0x1c] = fVar103;
            pfVar40[0x1d] = fVar165 * fVar87 * fVar52;
            pfVar40[0x1e] = 0.0;
            pfVar40[0x1f] = 1e+10;
            pfVar40[0x25] = *(float *)(param_1 + 0x6c);
            if (0.0 < *(float *)(lVar42 + 0x58)) {
              FUN_1098309c0(param_1,pauVar31,lVar27,lVar28,uVar5);
              fVar61 = *(float *)(lVar42 + 0x48);
              if (ABS(fVar61) <= 0.70710677) {
                fStack_bc = *(float *)(lVar42 + 0x40);
                fVar103 = *(float *)(lVar42 + 0x44);
                fVar52 = fVar103 * fVar103 + fStack_bc * fStack_bc;
                fVar60 = 1.0 / SQRT(fVar52);
                fStack_c0 = -(fVar103 * fVar60);
                fStack_bc = fStack_bc * fVar60;
                fVar91 = -(fVar61 * fStack_bc);
                fVar61 = fVar61 * fStack_c0;
                fVar52 = fVar52 * fVar60;
                fVar103 = 0.0;
              }
              else {
                fVar103 = *(float *)(lVar42 + 0x44);
                fVar91 = fVar61 * fVar61 + fVar103 * fVar103;
                fVar52 = 1.0 / SQRT(fVar91);
                fStack_bc = -(fVar61 * fVar52);
                fVar103 = fVar103 * fVar52;
                fVar91 = fVar91 * fVar52;
                fVar61 = -(*(float *)(lVar42 + 0x40) * fVar103);
                fVar52 = *(float *)(lVar42 + 0x40) * fStack_bc;
                fStack_c0 = 0.0;
              }
              auVar54._0_4_ = fStack_c0 * fStack_c0;
              auVar54._4_4_ = fStack_bc * fStack_bc;
              auVar54._8_4_ = fVar103 * fVar103;
              auVar54._12_4_ = uStack_b8._4_4_ * uStack_b8._4_4_;
              auVar48 = NEON_ext(auVar54,auVar54,8,1);
              fVar60 = 1.0 / SQRT(auVar54._0_4_ + auVar54._4_4_ + auVar48._0_4_);
              fStack_c0 = fStack_c0 * fVar60;
              fStack_bc = fStack_bc * fVar60;
              fVar103 = fVar103 * fVar60;
              fVar60 = uStack_b8._4_4_ * fVar60;
              auVar69._0_4_ = fVar91 * fVar91;
              auVar69._4_4_ = fVar61 * fVar61;
              auVar69._8_4_ = fVar52 * fVar52;
              auVar69._12_4_ = uStack_c8._4_4_ * uStack_c8._4_4_;
              auVar48 = NEON_ext(auVar69,auVar69,8,1);
              fVar87 = 1.0 / SQRT(auVar69._0_4_ + auVar69._4_4_ + auVar48._0_4_);
              fVar91 = fVar91 * fVar87;
              fVar61 = fVar61 * fVar87;
              auVar106._0_8_ = CONCAT44(fVar61,fVar91);
              auVar106._8_4_ = fVar52 * fVar87;
              auVar111._12_4_ = uStack_c8._4_4_ * fVar87;
              auVar111._0_12_ = auVar106;
              uStack_c8 = auVar111._8_8_;
              uStack_b8 = CONCAT44(fVar60,fVar103);
              if ((*(uint *)(lVar30 + 0xc0) >> 1 & 1) != 0) {
                auVar48 = *(undefined1 (*) [16])(lVar30 + 0x30);
                fVar52 = *(float *)(lVar30 + 0xb0) *
                         (*(float *)(lVar30 + 0x10) * fStack_c0 +
                          *(float *)(lVar30 + 0x20) * fStack_bc + auVar48._0_4_ * fVar103);
                fVar60 = *(float *)(lVar30 + 0xb4) *
                         (*(float *)(lVar30 + 0x14) * fStack_c0 +
                          *(float *)(lVar30 + 0x24) * fStack_bc + auVar48._4_4_ * fVar103);
                fVar87 = *(float *)(lVar30 + 0xb8) *
                         (*(float *)(lVar30 + 0x18) * fStack_c0 +
                          *(float *)(lVar30 + 0x28) * fStack_bc + auVar48._8_4_ * fVar103);
                fVar103 = *(float *)(lVar30 + 0xbc) *
                          (fStack_c0 * 0.0 + fStack_bc * 0.0 + fVar103 * 0.0);
                auVar55._0_4_ = fVar52 * *(float *)(lVar30 + 0x10);
                auVar55._4_4_ = fVar60 * *(float *)(lVar30 + 0x14);
                auVar55._8_4_ = fVar87 * *(float *)(lVar30 + 0x18);
                auVar55._12_4_ = fVar103 * *(float *)(lVar30 + 0x1c);
                auVar70._0_4_ = fVar52 * *(float *)(lVar30 + 0x20);
                auVar70._4_4_ = fVar60 * *(float *)(lVar30 + 0x24);
                auVar70._8_4_ = fVar87 * *(float *)(lVar30 + 0x28);
                auVar70._12_4_ = fVar103 * *(float *)(lVar30 + 0x2c);
                auVar80._0_4_ = fVar52 * auVar48._0_4_;
                auVar80._4_4_ = fVar60 * auVar48._4_4_;
                auVar80._8_4_ = fVar87 * auVar48._8_4_;
                auVar48 = NEON_ext(auVar55,auVar55,8,1);
                auVar47 = NEON_ext(auVar70,auVar70,8,1);
                auVar80._12_4_ = 0;
                fStack_c0 = auVar55._0_4_ + auVar55._4_4_ + auVar48._0_4_;
                fStack_bc = auVar70._0_4_ + auVar70._4_4_ + auVar47._0_4_;
                auVar48 = NEON_ext(auVar80,auVar80,8,1);
                fVar103 = auVar80._0_4_ + auVar80._4_4_ + auVar48._0_4_ + auVar48._4_4_;
                uStack_b8 = (ulong)(uint)fVar103;
                fVar60 = 0.0;
              }
              if ((*(uint *)(lVar38 + 0xc0) >> 1 & 1) != 0) {
                auVar48 = *(undefined1 (*) [16])(lVar38 + 0x30);
                fVar52 = *(float *)(lVar38 + 0xb0) *
                         (*(float *)(lVar38 + 0x10) * fStack_c0 +
                          *(float *)(lVar38 + 0x20) * fStack_bc + auVar48._0_4_ * fVar103);
                fVar60 = *(float *)(lVar38 + 0xb4) *
                         (*(float *)(lVar38 + 0x14) * fStack_c0 +
                          *(float *)(lVar38 + 0x24) * fStack_bc + auVar48._4_4_ * fVar103);
                fVar87 = *(float *)(lVar38 + 0xb8) *
                         (*(float *)(lVar38 + 0x18) * fStack_c0 +
                          *(float *)(lVar38 + 0x28) * fStack_bc + auVar48._8_4_ * fVar103);
                fVar103 = *(float *)(lVar38 + 0xbc) *
                          (fStack_c0 * 0.0 + fStack_bc * 0.0 + fVar103 * 0.0);
                auVar58._0_4_ = fVar52 * *(float *)(lVar38 + 0x10);
                auVar58._4_4_ = fVar60 * *(float *)(lVar38 + 0x14);
                auVar58._8_4_ = fVar87 * *(float *)(lVar38 + 0x18);
                auVar58._12_4_ = fVar103 * *(float *)(lVar38 + 0x1c);
                auVar73._0_4_ = fVar52 * *(float *)(lVar38 + 0x20);
                auVar73._4_4_ = fVar60 * *(float *)(lVar38 + 0x24);
                auVar73._8_4_ = fVar87 * *(float *)(lVar38 + 0x28);
                auVar73._12_4_ = fVar103 * *(float *)(lVar38 + 0x2c);
                auVar82._0_4_ = fVar52 * auVar48._0_4_;
                auVar82._4_4_ = fVar60 * auVar48._4_4_;
                auVar82._8_4_ = fVar87 * auVar48._8_4_;
                auVar48 = NEON_ext(auVar58,auVar58,8,1);
                auVar47 = NEON_ext(auVar73,auVar73,8,1);
                auVar82._12_4_ = 0;
                fStack_c0 = auVar58._0_4_ + auVar58._4_4_ + auVar48._0_4_;
                fStack_bc = auVar73._0_4_ + auVar73._4_4_ + auVar47._0_4_;
                auVar48 = NEON_ext(auVar82,auVar82,8,1);
                fVar103 = auVar82._0_4_ + auVar82._4_4_ + auVar48._0_4_ + auVar48._4_4_;
                uStack_b8 = (ulong)(uint)fVar103;
                fVar60 = 0.0;
              }
              uStack_d0 = auVar106._0_8_;
              if ((*(uint *)(lVar30 + 0xc0) >> 1 & 1) != 0) {
                fVar52 = *(float *)(lVar30 + 0xb0) *
                         (*(float *)(lVar30 + 0x10) * fVar91 + *(float *)(lVar30 + 0x20) * fVar61 +
                         *(float *)(lVar30 + 0x30) * auVar106._8_4_);
                fVar87 = *(float *)(lVar30 + 0xb4) *
                         (*(float *)(lVar30 + 0x14) * fVar91 + *(float *)(lVar30 + 0x24) * fVar61 +
                         *(float *)(lVar30 + 0x34) * auVar106._8_4_);
                fVar46 = *(float *)(lVar30 + 0xb8) *
                         (*(float *)(lVar30 + 0x18) * fVar91 + *(float *)(lVar30 + 0x28) * fVar61 +
                         *(float *)(lVar30 + 0x38) * auVar106._8_4_);
                fVar61 = *(float *)(lVar30 + 0xbc) *
                         (fVar91 * 0.0 + fVar61 * 0.0 + auVar106._8_4_ * 0.0);
                auVar59._0_4_ = fVar52 * *(float *)(lVar30 + 0x10);
                auVar59._4_4_ = fVar87 * *(float *)(lVar30 + 0x14);
                auVar59._8_4_ = fVar46 * *(float *)(lVar30 + 0x18);
                auVar59._12_4_ = fVar61 * *(float *)(lVar30 + 0x1c);
                auVar74._0_4_ = fVar52 * *(float *)(lVar30 + 0x20);
                auVar74._4_4_ = fVar87 * *(float *)(lVar30 + 0x24);
                auVar74._8_4_ = fVar46 * *(float *)(lVar30 + 0x28);
                auVar74._12_4_ = fVar61 * *(float *)(lVar30 + 0x2c);
                auVar83._0_4_ = fVar52 * *(float *)(lVar30 + 0x30);
                auVar83._4_4_ = fVar87 * *(float *)(lVar30 + 0x34);
                auVar83._8_4_ = fVar46 * *(float *)(lVar30 + 0x38);
                auVar48 = NEON_ext(auVar59,auVar59,8,1);
                auVar47 = NEON_ext(auVar74,auVar74,8,1);
                auVar83._12_4_ = 0;
                uStack_d0 = CONCAT44(auVar74._0_4_ + auVar74._4_4_ + auVar47._0_4_,
                                     auVar59._0_4_ + auVar59._4_4_ + auVar48._0_4_);
                auVar48 = NEON_ext(auVar83,auVar83,8,1);
                fVar61 = auVar83._0_4_ + auVar83._4_4_ + auVar48._0_4_ + auVar48._4_4_;
                uStack_c8 = (ulong)(uint)fVar61;
                auVar106._8_4_ = fVar61;
                auVar106._0_8_ = uStack_d0;
                auVar111._12_4_ = 0.0;
                auVar111._0_12_ = auVar106;
              }
              if ((*(uint *)(lVar38 + 0xc0) >> 1 & 1) != 0) {
                fVar87 = auVar106._0_4_;
                fVar46 = auVar106._4_4_;
                fVar165 = auVar106._8_4_;
                fVar61 = *(float *)(lVar38 + 0xb0) *
                         (*(float *)(lVar38 + 0x10) * fVar87 + *(float *)(lVar38 + 0x20) * fVar46 +
                         *(float *)(lVar38 + 0x30) * fVar165);
                fVar91 = *(float *)(lVar38 + 0xb4) *
                         (*(float *)(lVar38 + 0x14) * fVar87 + *(float *)(lVar38 + 0x24) * fVar46 +
                         *(float *)(lVar38 + 0x34) * fVar165);
                fVar52 = *(float *)(lVar38 + 0xb8) *
                         (*(float *)(lVar38 + 0x18) * fVar87 + *(float *)(lVar38 + 0x28) * fVar46 +
                         *(float *)(lVar38 + 0x38) * fVar165);
                fVar87 = *(float *)(lVar38 + 0xbc) * (fVar87 * 0.0 + fVar46 * 0.0 + fVar165 * 0.0);
                auVar56._0_4_ = fVar61 * *(float *)(lVar38 + 0x10);
                auVar56._4_4_ = fVar91 * *(float *)(lVar38 + 0x14);
                auVar56._8_4_ = fVar52 * *(float *)(lVar38 + 0x18);
                auVar56._12_4_ = fVar87 * *(float *)(lVar38 + 0x1c);
                auVar71._0_4_ = fVar61 * *(float *)(lVar38 + 0x20);
                auVar71._4_4_ = fVar91 * *(float *)(lVar38 + 0x24);
                auVar71._8_4_ = fVar52 * *(float *)(lVar38 + 0x28);
                auVar71._12_4_ = fVar87 * *(float *)(lVar38 + 0x2c);
                auVar81._0_4_ = fVar61 * *(float *)(lVar38 + 0x30);
                auVar81._4_4_ = fVar91 * *(float *)(lVar38 + 0x34);
                auVar81._8_4_ = fVar52 * *(float *)(lVar38 + 0x38);
                auVar48 = NEON_ext(auVar56,auVar56,8,1);
                auVar47 = NEON_ext(auVar71,auVar71,8,1);
                auVar81._12_4_ = 0;
                auVar111._0_8_ =
                     CONCAT44(auVar71._0_4_ + auVar71._4_4_ + auVar47._0_4_,
                              auVar56._0_4_ + auVar56._4_4_ + auVar48._0_4_);
                auVar48 = NEON_ext(auVar81,auVar81,8,1);
                fVar61 = auVar81._0_4_ + auVar81._4_4_ + auVar48._0_4_ + auVar48._4_4_;
                uStack_c8 = (ulong)(uint)fVar61;
                auVar111._8_4_ = fVar61;
                auVar111._12_4_ = 0.0;
                uStack_d0 = auVar111._0_8_;
              }
              auVar49._0_4_ = fStack_c0 * fStack_c0;
              auVar49._4_4_ = fStack_bc * fStack_bc;
              auVar49._8_4_ = fVar103 * fVar103;
              auVar49._12_4_ = fVar60 * fVar60;
              auVar48 = NEON_ext(auVar49,auVar49,8,1);
              if (0.001 < SQRT(auVar48._0_4_ + auVar49._0_4_ + auVar49._4_4_)) {
                FUN_1098309c0(param_1,&fStack_c0,lVar27,lVar28,uVar5);
              }
              auVar50._0_4_ = auVar111._0_4_ * auVar111._0_4_;
              auVar50._4_4_ = auVar111._4_4_ * auVar111._4_4_;
              auVar50._8_4_ = auVar111._8_4_ * auVar111._8_4_;
              auVar50._12_4_ = auVar111._12_4_ * auVar111._12_4_;
              auVar48 = NEON_ext(auVar50,auVar50,8,1);
              if (0.001 < SQRT(auVar48._0_4_ + auVar50._0_4_ + auVar50._4_4_)) {
                FUN_1098309c0(param_1,&uStack_d0,lVar27,lVar28,uVar5);
              }
            }
            if (((*(byte *)(param_4 + 0x58) >> 5 & 1) == 0) || ((*(byte *)(lVar42 + 0x80) & 1) == 0)
               ) {
              fVar75 = fVar75 * (fVar173 - fVar170);
              fVar52 = fVar174 * (fVar171 - fVar168) + fVar175 * (fVar172 - fVar169);
              fVar61 = *(float *)(lVar42 + 0x40);
              fVar103 = *(float *)(lVar42 + 0x44);
              fVar91 = *(float *)(lVar42 + 0x48);
              fVar168 = (fVar171 - fVar168) - (fVar52 + fVar75) * fVar61;
              fVar169 = (fVar172 - fVar169) - (fVar52 + fVar75) * fVar103;
              fVar170 = (fVar173 - fVar170) - (fVar52 + fVar75) * fVar91;
              puVar44 = (undefined8 *)(lVar42 + 0xb0);
              *(ulong *)(lVar42 + 0xb8) = (ulong)(uint)fVar170;
              *puVar44 = CONCAT44(fVar169,fVar168);
              if ((*(byte *)(param_4 + 0x58) >> 6 & 1) == 0) {
                auVar72._0_4_ = fVar168 * fVar168;
                auVar72._4_4_ = fVar169 * fVar169;
                auVar72._8_4_ = fVar170 * fVar170;
                auVar72._12_4_ = 0;
                auVar48 = NEON_ext(auVar72,auVar72,8,1);
                fVar171 = auVar72._0_4_ + auVar72._4_4_ + auVar48._0_4_;
                if (1.1920929e-07 < fVar171) {
                  fVar61 = 1.0 / SQRT(fVar171);
                  *(float *)(lVar42 + 0xb8) = fVar170 * fVar61;
                  *(float *)(lVar42 + 0xbc) = fVar61 * 0.0;
                  *(float *)(lVar42 + 0xb0) = fVar168 * fVar61;
                  *(float *)(lVar42 + 0xb4) = fVar169 * fVar61;
                  func_0x0001098304a4(lVar30,puVar44);
                  func_0x0001098304a4(lVar38,puVar44);
                  FUN_109830530(uVar6,auVar53._0_8_,fVar120,param_1,puVar44,lVar27,lVar28,uVar5,
                                lVar42,param_4);
                  if ((*(byte *)(param_4 + 0x58) >> 4 & 1) != 0) {
                    auVar48 = *(undefined1 (*) [16])(lVar42 + 0xb0);
                    auVar47 = *(undefined1 (*) [16])(lVar42 + 0x40);
                    auVar88 = NEON_ext(auVar48,auVar48,0xc,1);
                    auVar88 = NEON_ext(auVar88,auVar48,8,1);
                    auVar137 = NEON_ext(auVar47,auVar47,0xc,1);
                    auVar137 = NEON_ext(auVar137,auVar47,8,1);
                    auVar51._0_4_ = auVar48._0_4_ * auVar137._0_4_ - auVar47._0_4_ * auVar88._0_4_;
                    auVar51._4_4_ = auVar48._4_4_ * auVar137._4_4_ - auVar47._4_4_ * auVar88._4_4_;
                    auVar51._8_4_ = auVar48._8_4_ * auVar137._8_4_ - auVar47._8_4_ * auVar88._8_4_;
                    auVar51._12_4_ =
                         auVar48._12_4_ * auVar137._12_4_ - auVar47._12_4_ * auVar88._12_4_;
                    auVar48 = NEON_ext(auVar51,auVar51,0xc,1);
                    auVar48 = NEON_ext(auVar48,auVar51,8,1);
                    fVar61 = auVar48._0_4_;
                    auVar57._0_4_ = fVar61 * fVar61;
                    fVar103 = auVar48._4_4_;
                    auVar57._4_4_ = fVar103 * fVar103;
                    fVar91 = auVar48._8_4_;
                    auVar57._8_4_ = fVar91 * fVar91;
                    auVar57._12_4_ = 0;
                    auVar48 = NEON_ext(auVar57,auVar57,8,1);
                    fVar168 = 1.0 / SQRT(auVar57._0_4_ + auVar57._4_4_ + auVar48._0_4_);
                    pfVar45 = (float *)(lVar42 + 0xc0);
                    *(float *)(lVar42 + 200) = fVar91 * fVar168;
                    *(float *)(lVar42 + 0xcc) = fVar168 * 0.0;
                    *pfVar45 = fVar61 * fVar168;
                    *(float *)(lVar42 + 0xc4) = fVar103 * fVar168;
                    func_0x0001098304a4(lVar30,pfVar45);
                    func_0x0001098304a4(lVar38,pfVar45);
                    goto LAB_109832038;
                  }
                  goto LAB_109832058;
                }
              }
              fVar171 = ABS(fVar91);
              fVar172 = fVar103 * fVar103 + fVar61 * fVar61;
              fVar173 = 1.0 / SQRT(fVar172);
              fVar170 = -(fVar103 * fVar173);
              fVar169 = fVar91 * fVar170;
              fVar52 = fVar91 * fVar91 + fVar103 * fVar103;
              fVar60 = 1.0 / SQRT(fVar52);
              fVar168 = fVar61 * fVar173;
              if (0.70710677 < fVar171) {
                fVar170 = 0.0;
                fVar168 = -(fVar91 * fVar60);
              }
              fVar87 = -(fVar91 * fVar61 * fVar173);
              fVar46 = 0.0;
              if (0.70710677 < fVar171) {
                fVar169 = -(fVar61 * fVar103 * fVar60);
                fVar87 = fVar52 * fVar60;
                fVar46 = fVar103 * fVar60;
              }
              *(float *)(lVar42 + 0xb0) = fVar170;
              *(float *)(lVar42 + 0xb4) = fVar168;
              *(float *)(lVar42 + 0xb8) = fVar46;
              fVar103 = fVar172 * fVar173;
              if (0.70710677 < fVar171) {
                fVar103 = fVar61 * -(fVar91 * fVar60);
              }
              *(float *)(lVar42 + 0xc0) = fVar87;
              *(float *)(lVar42 + 0xc4) = fVar169;
              *(float *)(lVar42 + 200) = fVar103;
              func_0x0001098304a4(lVar30,puVar44);
              func_0x0001098304a4(lVar38,puVar44);
              FUN_109830530(uVar6,auVar53._0_8_,fVar120,param_1,puVar44,lVar27,lVar28,uVar5,lVar42,
                            param_4);
              uVar34 = *(uint *)(param_4 + 0x58);
              if ((uVar34 >> 4 & 1) != 0) {
                func_0x0001098304a4(lVar30,lVar42 + 0xc0);
                func_0x0001098304a4(lVar38,lVar42 + 0xc0);
                FUN_109830530(uVar6,auVar53._0_8_,fVar120,param_1,lVar42 + 0xc0,lVar27,lVar28,uVar5,
                              lVar42,param_4);
                uVar34 = *(uint *)(param_4 + 0x58);
              }
              if (((uVar34 ^ 0xffffffff) & 0x50) == 0) {
                *(uint *)(lVar42 + 0x80) = *(uint *)(lVar42 + 0x80) | 1;
              }
            }
            else {
              FUN_109830530(uVar6,param_1,lVar42 + 0xb0,lVar27,lVar28,uVar5,lVar42,param_4);
              if ((*(byte *)(param_4 + 0x58) >> 4 & 1) != 0) {
LAB_109832038:
                FUN_109830530(uVar6,auVar53._0_8_,fVar120,param_1,lVar42 + 0xc0,lVar27,lVar28,uVar5,
                              lVar42,param_4);
              }
            }
LAB_109832058:
            fVar61 = pfVar40[0x25];
            lVar42 = *(long *)(param_1 + 0x78);
            *(undefined4 *)(lVar42 + (long)(int)fVar61 * 0xa0 + 100) = 0;
            if ((*(byte *)(param_4 + 0x58) >> 4 & 1) != 0) {
              *(undefined4 *)(lVar42 + (long)(int)fVar61 * 0xa0 + 0x104) = 0;
            }
            iVar32 = *(int *)(lVar43 + 0x360);
          }
          lVar39 = lVar39 + 1;
        } while (lVar39 < iVar32);
      }
      uVar35 = uVar35 + 1;
    } while (uVar35 != param_3);
  }
  return;
}



/* Entry: 1098320dc; end: 1098327af;  */

void FUN_1098320dc(long param_1,undefined8 *param_2,uint param_3,long param_4)

{
  int *piVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
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
  ulong uVar21;
  long lVar22;
  int iVar23;
  long lVar24;
  long lVar25;
  uint uVar26;
  long lVar27;
  undefined8 *puVar28;
  int *piVar29;
  float *pfVar30;
  long lVar31;
  long lVar32;
  int iVar33;
  long lVar34;
  long *plVar35;
  undefined8 uVar36;
  undefined8 uVar37;
  undefined8 uVar38;
  float fVar39;
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  float fVar45;
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  float fVar52;
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
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
  float fStack_f0;
  undefined4 uStack_ec;
  long lStack_e8;
  long lStack_e0;
  long lStack_d8;
  long lStack_d0;
  undefined4 uStack_c8;
  long lStack_c0;
  undefined4 *puStack_b8;
  long lStack_b0;
  long lStack_a8;
  int iStack_a0;
  float fStack_9c;
  
  puVar28 = param_2;
  uVar21 = (ulong)param_3;
  if (0 < (int)param_3) {
    do {
      plVar35 = (long *)*puVar28;
      (**(code **)(*plVar35 + 0x10))(plVar35);
      *(undefined4 *)(plVar35 + 7) = 0;
      uVar21 = uVar21 - 1;
      puVar28 = puVar28 + 1;
    } while (uVar21 != 0);
  }
  uVar26 = *(uint *)(param_1 + 0x10c);
  if (((int)uVar26 < (int)param_3) && (*(int *)(param_1 + 0x110) < (int)param_3)) {
    if (param_3 == 0) {
      uVar21 = 0;
    }
    else {
      uVar21 = -(ulong)(param_3 >> 0x1f) & 0xfffffff800000000 | (ulong)param_3 << 3;
      FUN_1098256f4(uVar21,0x10);
      uVar26 = *(uint *)(param_1 + 0x10c);
    }
    if (0 < (int)uVar26) {
      lVar27 = 0;
      do {
        *(undefined8 *)(uVar21 + lVar27) = *(undefined8 *)(*(long *)(param_1 + 0x118) + lVar27);
        lVar27 = lVar27 + 8;
      } while ((ulong)uVar26 << 3 != lVar27);
    }
    if ((*(long *)(param_1 + 0x118) != 0) && (*(char *)(param_1 + 0x120) == '\x01')) {
      FUN_109825740();
    }
    *(undefined1 *)(param_1 + 0x120) = 1;
    *(ulong *)(param_1 + 0x118) = uVar21;
    *(uint *)(param_1 + 0x110) = param_3;
  }
  *(uint *)(param_1 + 0x10c) = param_3;
  if ((int)param_3 < 1) {
    iVar33 = 0;
  }
  else {
    lVar27 = 0;
    iVar33 = 0;
    do {
      lVar24 = *(long *)(param_1 + 0x118);
      plVar35 = *(long **)((long)param_2 + lVar27);
      puVar28 = (undefined8 *)plVar35[8];
      if (puVar28 != (undefined8 *)0x0) {
        puVar28[5] = 0;
        puVar28[4] = 0;
        puVar28[7] = 0;
        puVar28[6] = 0;
        puVar28[1] = 0;
        *puVar28 = 0;
        puVar28[3] = 0;
        puVar28[2] = 0;
        plVar35 = *(long **)((long)param_2 + lVar27);
      }
      piVar1 = (int *)(lVar24 + lVar27);
      if (*(char *)((long)plVar35 + 0x1c) == '\x01') {
        (**(code **)(*plVar35 + 0x20))(plVar35,piVar1);
        iVar23 = *piVar1;
      }
      else {
        iVar23 = 0;
        piVar1[0] = 0;
        piVar1[1] = 0;
      }
      iVar33 = iVar23 + iVar33;
      lVar27 = lVar27 + 8;
    } while ((ulong)param_3 << 3 != lVar27);
  }
  uVar26 = *(uint *)(param_1 + 0x4c);
  if (((int)uVar26 < iVar33) && (*(int *)(param_1 + 0x50) < iVar33)) {
    if (iVar33 == 0) {
      lVar27 = 0;
    }
    else {
      lVar27 = (long)iVar33 * 0xa0;
      FUN_1098256f4(lVar27,0x10);
      uVar26 = *(uint *)(param_1 + 0x4c);
    }
    if (0 < (int)uVar26) {
      lVar24 = 0;
      do {
        puVar28 = (undefined8 *)(lVar27 + lVar24);
        puVar2 = (undefined8 *)(*(long *)(param_1 + 0x58) + lVar24);
        uVar36 = *puVar2;
        puVar28[1] = puVar2[1];
        *puVar28 = uVar36;
        uVar36 = puVar2[2];
        puVar28[3] = puVar2[3];
        puVar28[2] = uVar36;
        uVar36 = puVar2[4];
        puVar28[5] = puVar2[5];
        puVar28[4] = uVar36;
        uVar36 = puVar2[6];
        puVar28[7] = puVar2[7];
        puVar28[6] = uVar36;
        uVar36 = puVar2[8];
        puVar28[9] = puVar2[9];
        puVar28[8] = uVar36;
        uVar36 = puVar2[10];
        puVar28[0xb] = puVar2[0xb];
        puVar28[10] = uVar36;
        uVar38 = puVar2[0xd];
        uVar37 = puVar2[0xc];
        uVar36 = puVar2[0xe];
        uVar3 = puVar2[0xf];
        uVar4 = puVar2[0x10];
        uVar5 = puVar2[0x12];
        uVar6 = puVar2[0x13];
        puVar28[0x11] = puVar2[0x11];
        puVar28[0x10] = uVar4;
        puVar28[0x13] = uVar6;
        puVar28[0x12] = uVar5;
        puVar28[0xd] = uVar38;
        puVar28[0xc] = uVar37;
        puVar28[0xf] = uVar3;
        puVar28[0xe] = uVar36;
        lVar24 = lVar24 + 0xa0;
      } while ((ulong)uVar26 * 0xa0 - lVar24 != 0);
    }
    if ((*(long *)(param_1 + 0x58) != 0) && (*(char *)(param_1 + 0x60) == '\x01')) {
      FUN_109825740();
    }
    *(undefined1 *)(param_1 + 0x60) = 1;
    *(long *)(param_1 + 0x58) = lVar27;
    *(int *)(param_1 + 0x50) = iVar33;
  }
  *(int *)(param_1 + 0x4c) = iVar33;
  if (0 < (int)param_3) {
    uVar21 = 0;
    iVar33 = 0;
    do {
      piVar1 = (int *)(*(long *)(param_1 + 0x118) + uVar21 * 8);
      iVar23 = 0;
      if (*piVar1 != 0) {
        lVar32 = *(long *)(param_1 + 0x58);
        plVar35 = (long *)param_2[uVar21];
        lVar27 = plVar35[6];
        lVar22 = param_1;
        FUN_109830d80(*(undefined4 *)(param_4 + 0xc),param_1,plVar35[5]);
        lVar31 = param_1;
        FUN_109830d80(*(undefined4 *)(param_4 + 0xc),param_1,lVar27);
        lVar27 = plVar35[5];
        lVar24 = plVar35[6];
        iStack_a0 = *(int *)(param_4 + 0x14);
        iVar23 = (int)plVar35[4];
        if ((int)plVar35[4] < 1) {
          iVar23 = iStack_a0;
        }
        if (*(int *)(param_1 + 0x128) < iVar23) {
          *(int *)(param_1 + 0x128) = iVar23;
        }
        lVar34 = *(long *)(param_1 + 0x18);
        if (0 < *piVar1) {
          lVar25 = 0;
          piVar29 = (int *)(lVar32 + (long)iVar33 * 0xa0 + 0x9c);
          do {
            piVar29[-9] = 0;
            piVar29[-8] = 0;
            piVar29[-0xb] = 0;
            piVar29[-10] = 0;
            piVar29[-1] = 0;
            piVar29[0] = 0;
            piVar29[-3] = 0;
            piVar29[-2] = 0;
            piVar29[-5] = 0;
            piVar29[-4] = 0;
            piVar29[-7] = 0;
            piVar29[-6] = 0;
            piVar29[-0xd] = 0;
            piVar29[-0xc] = 0;
            piVar29[-0xf] = 0;
            piVar29[-0xe] = 0;
            piVar29[-0x11] = 0;
            piVar29[-0x10] = 0;
            piVar29[-0x13] = 0;
            piVar29[-0x12] = 0;
            piVar29[-0x15] = 0;
            piVar29[-0x14] = 0;
            piVar29[-0x17] = 0;
            piVar29[-0x16] = 0;
            piVar29[-0x19] = 0;
            piVar29[-0x18] = 0;
            piVar29[-0x1b] = 0;
            piVar29[-0x1a] = 0;
            piVar29[-0x1d] = 0;
            piVar29[-0x1c] = 0;
            piVar29[-0x1f] = 0;
            piVar29[-0x1e] = 0;
            piVar29[-0x21] = 0;
            piVar29[-0x20] = 0;
            piVar29[-0x23] = 0;
            piVar29[-0x22] = 0;
            piVar29[-0x25] = 0;
            piVar29[-0x24] = 0;
            piVar29[-0x27] = 0;
            piVar29[-0x26] = 0;
            piVar29[-9] = -0x800001;
            piVar29[-8] = 0x7f7fffff;
            piVar29[-1] = (int)lVar22;
            *piVar29 = (int)lVar31;
            piVar29[-3] = iVar23;
            lVar25 = lVar25 + 1;
            piVar29 = piVar29 + 0x28;
          } while (lVar25 < *piVar1);
          iStack_a0 = *(int *)(param_4 + 0x14);
        }
        lStack_e0 = lVar32 + (long)iVar33 * 0xa0;
        lStack_e8 = lStack_e0 + 0x10;
        lStack_d8 = lStack_e0 + 0x30;
        lStack_d0 = lStack_e0 + 0x20;
        lStack_c0 = lStack_e0 + 0x70;
        lStack_b0 = lStack_e0 + 0x78;
        lStack_a8 = lStack_e0 + 0x7c;
        puStack_b8 = (undefined4 *)(lStack_e0 + 0x74);
        *puStack_b8 = *(undefined4 *)(param_4 + 0x34);
        fStack_f0 = 1.0 / *(float *)(param_4 + 0xc);
        uStack_ec = *(undefined4 *)(param_4 + 0x20);
        uStack_c8 = 0x28;
        fStack_9c = *(float *)(param_4 + 4);
        (**(code **)(*plVar35 + 0x28))(plVar35,&fStack_f0);
        if (0 < *piVar1) {
          lVar25 = 0;
          lVar22 = lVar34 + (long)(int)lVar22 * 0x100;
          lVar34 = lVar34 + (long)(int)lVar31 * 0x100;
          pfVar30 = (float *)(lVar32 + (long)iVar33 * 0xa0 + 0x50);
          do {
            fVar39 = *(float *)(plVar35 + 3);
            if (fVar39 <= pfVar30[0xb]) {
              pfVar30[0xb] = fVar39;
            }
            if (pfVar30[10] <= -fVar39) {
              pfVar30[10] = -fVar39;
            }
            *(long **)(pfVar30 + 0xe) = plVar35;
            lVar31 = plVar35[5];
            fVar39 = pfVar30[-0x14];
            fVar7 = pfVar30[-0x13];
            fVar8 = pfVar30[-0x12];
            fVar9 = pfVar30[-0x11];
            fVar10 = pfVar30[-0x10];
            fVar11 = pfVar30[-0xf];
            fVar12 = pfVar30[-0xe];
            auVar47._0_4_ = *(float *)(lVar31 + 0x180) * fVar39;
            auVar47._4_4_ = *(float *)(lVar31 + 0x184) * fVar7;
            auVar47._8_4_ = *(float *)(lVar31 + 0x188) * fVar8;
            auVar47._12_4_ = *(float *)(lVar31 + 0x18c) * fVar9;
            auVar56._0_4_ = fVar39 * *(float *)(lVar31 + 400);
            auVar56._4_4_ = fVar7 * *(float *)(lVar31 + 0x194);
            auVar56._8_4_ = fVar8 * *(float *)(lVar31 + 0x198);
            auVar56._12_4_ = fVar9 * *(float *)(lVar31 + 0x19c);
            auVar60._0_4_ = fVar39 * *(float *)(lVar31 + 0x1a0);
            auVar60._4_4_ = fVar7 * *(float *)(lVar31 + 0x1a4);
            auVar60._8_4_ = fVar8 * *(float *)(lVar31 + 0x1a8);
            auVar46 = NEON_ext(auVar47,auVar47,8,1);
            auVar53 = NEON_ext(auVar56,auVar56,8,1);
            auVar60._12_4_ = 0;
            auVar44 = NEON_ext(auVar60,auVar60,8,1);
            fVar13 = *(float *)(lVar31 + 0x2b0);
            fVar14 = *(float *)(lVar31 + 0x2b4);
            fVar15 = *(float *)(lVar31 + 700);
            pfVar30[-2] = (auVar60._0_4_ + auVar60._4_4_ + auVar44._0_4_ + auVar44._4_4_) *
                          *(float *)(lVar31 + 0x2b8);
            pfVar30[-1] = fVar15 * 0.0;
            pfVar30[-4] = (auVar47._0_4_ + auVar47._4_4_ + auVar46._0_4_) * fVar13;
            pfVar30[-3] = (auVar56._0_4_ + auVar56._4_4_ + auVar53._0_4_) * fVar14;
            lVar31 = plVar35[6];
            fVar13 = pfVar30[-0xc];
            fVar14 = pfVar30[-0xb];
            fVar15 = pfVar30[-10];
            fVar16 = pfVar30[-9];
            fVar17 = pfVar30[-8];
            fVar18 = pfVar30[-7];
            fVar19 = pfVar30[-6];
            auVar44._0_4_ = *(float *)(lVar31 + 0x180) * fVar13;
            auVar44._4_4_ = *(float *)(lVar31 + 0x184) * fVar14;
            auVar44._8_4_ = *(float *)(lVar31 + 0x188) * fVar15;
            auVar44._12_4_ = *(float *)(lVar31 + 0x18c) * fVar16;
            auVar53._0_4_ = fVar13 * *(float *)(lVar31 + 400);
            auVar53._4_4_ = fVar14 * *(float *)(lVar31 + 0x194);
            auVar53._8_4_ = fVar15 * *(float *)(lVar31 + 0x198);
            auVar53._12_4_ = fVar16 * *(float *)(lVar31 + 0x19c);
            auVar65._0_4_ = fVar13 * *(float *)(lVar31 + 0x1a0);
            auVar65._4_4_ = fVar14 * *(float *)(lVar31 + 0x1a4);
            auVar65._8_4_ = fVar15 * *(float *)(lVar31 + 0x1a8);
            auVar56 = NEON_ext(auVar44,auVar44,8,1);
            auVar60 = NEON_ext(auVar53,auVar53,8,1);
            auVar65._12_4_ = 0;
            auVar47 = NEON_ext(auVar65,auVar65,8,1);
            fVar45 = *(float *)(lVar31 + 0x2b0);
            fVar52 = *(float *)(lVar31 + 0x2b4);
            fVar20 = *(float *)(lVar31 + 700);
            pfVar30[2] = (auVar65._0_4_ + auVar65._4_4_ + auVar47._0_4_ + auVar47._4_4_) *
                         *(float *)(lVar31 + 0x2b8);
            pfVar30[3] = fVar20 * 0.0;
            *pfVar30 = (auVar44._0_4_ + auVar44._4_4_ + auVar56._0_4_) * fVar45;
            pfVar30[1] = (auVar53._0_4_ + auVar53._4_4_ + auVar60._0_4_) * fVar52;
            fVar45 = *(float *)(lVar27 + 0x1d0);
            auVar48._0_4_ = fVar39 * *(float *)(lVar27 + 0x180);
            auVar48._4_4_ = fVar7 * *(float *)(lVar27 + 0x184);
            auVar48._8_4_ = fVar8 * *(float *)(lVar27 + 0x188);
            auVar48._12_4_ = fVar9 * *(float *)(lVar27 + 0x18c);
            auVar54._0_4_ = fVar39 * *(float *)(lVar27 + 400);
            auVar54._4_4_ = fVar7 * *(float *)(lVar27 + 0x194);
            auVar54._8_4_ = fVar8 * *(float *)(lVar27 + 0x198);
            auVar54._12_4_ = fVar9 * *(float *)(lVar27 + 0x19c);
            auVar57._0_4_ = fVar39 * *(float *)(lVar27 + 0x1a0);
            auVar57._4_4_ = fVar7 * *(float *)(lVar27 + 0x1a4);
            auVar57._8_4_ = fVar8 * *(float *)(lVar27 + 0x1a8);
            auVar44 = NEON_ext(auVar48,auVar48,8,1);
            auVar53 = NEON_ext(auVar54,auVar54,8,1);
            auVar57._12_4_ = 0;
            auVar56 = NEON_ext(auVar57,auVar57,8,1);
            fVar52 = *(float *)(lVar24 + 0x1d0);
            auVar58._0_4_ = fVar13 * *(float *)(lVar24 + 0x180);
            auVar58._4_4_ = fVar14 * *(float *)(lVar24 + 0x184);
            auVar58._8_4_ = fVar15 * *(float *)(lVar24 + 0x188);
            auVar58._12_4_ = fVar16 * *(float *)(lVar24 + 0x18c);
            auVar61._0_4_ = fVar13 * *(float *)(lVar24 + 400);
            auVar61._4_4_ = fVar14 * *(float *)(lVar24 + 0x194);
            auVar61._8_4_ = fVar15 * *(float *)(lVar24 + 0x198);
            auVar61._12_4_ = fVar16 * *(float *)(lVar24 + 0x19c);
            auVar63._0_4_ = fVar13 * *(float *)(lVar24 + 0x1a0);
            auVar63._4_4_ = fVar14 * *(float *)(lVar24 + 0x1a4);
            auVar63._8_4_ = fVar15 * *(float *)(lVar24 + 0x1a8);
            auVar64 = NEON_ext(auVar58,auVar58,8,1);
            auVar65 = NEON_ext(auVar61,auVar61,8,1);
            auVar63._12_4_ = 0;
            auVar60 = NEON_ext(auVar63,auVar63,8,1);
            auVar46._0_4_ = fVar10 * fVar10 * fVar45;
            auVar46._4_4_ = fVar11 * fVar11 * fVar45;
            auVar46._8_4_ = fVar12 * fVar12 * fVar45;
            auVar46._12_4_ = pfVar30[-0xd] * 0.0;
            auVar47 = NEON_ext(auVar46,auVar46,8,1);
            auVar49._0_4_ = fVar39 * (auVar48._0_4_ + auVar48._4_4_ + auVar44._0_4_);
            auVar49._4_4_ = fVar7 * (auVar54._0_4_ + auVar54._4_4_ + auVar53._0_4_);
            auVar49._8_4_ = fVar8 * (auVar57._0_4_ + auVar57._4_4_ + auVar56._0_4_ + auVar56._4_4_);
            auVar49._12_4_ = fVar9 * 0.0;
            auVar56 = NEON_ext(auVar49,auVar49,8,1);
            auVar50._0_4_ = fVar17 * fVar17 * fVar52;
            auVar50._4_4_ = fVar18 * fVar18 * fVar52;
            auVar50._8_4_ = fVar19 * fVar19 * fVar52;
            auVar50._12_4_ = pfVar30[-5] * 0.0;
            auVar44 = NEON_ext(auVar50,auVar50,8,1);
            auVar64._0_4_ = fVar13 * (auVar58._0_4_ + auVar58._4_4_ + auVar64._0_4_);
            auVar64._4_4_ = fVar14 * (auVar61._0_4_ + auVar61._4_4_ + auVar65._0_4_);
            auVar64._8_4_ = fVar15 * (auVar63._0_4_ + auVar63._4_4_ + auVar60._0_4_ + auVar60._4_4_)
            ;
            auVar64._12_4_ = fVar16 * 0.0;
            auVar60 = NEON_ext(auVar64,auVar64,8,1);
            fVar45 = auVar47._0_4_ + auVar46._0_4_ + auVar46._4_4_ +
                     auVar56._0_4_ + auVar49._0_4_ + auVar49._4_4_ +
                     auVar44._0_4_ + auVar50._0_4_ + auVar50._4_4_ +
                     auVar60._0_4_ + auVar64._0_4_ + auVar64._4_4_;
            fVar52 = 1.0 / fVar45;
            if (ABS(fVar45) <= 1.1920929e-07) {
              fVar52 = 0.0;
            }
            pfVar30[7] = fVar52;
            auVar51._0_14_ = ZEXT214(0);
            auVar51._14_2_ = 0;
            auVar62._0_14_ = ZEXT214(0);
            auVar62._14_2_ = 0;
            auVar59._0_14_ = ZEXT214(0);
            auVar59._14_2_ = 0;
            if (*(long *)(lVar22 + 0xf0) != 0) {
              auVar62 = *(undefined1 (*) [16])(lVar22 + 0xd0);
              auVar59 = *(undefined1 (*) [16])(lVar22 + 0xe0);
            }
            auVar55._0_14_ = ZEXT214(0);
            auVar55._14_2_ = 0;
            if (*(long *)(lVar34 + 0xf0) != 0) {
              auVar51 = *(undefined1 (*) [16])(lVar34 + 0xd0);
              auVar55 = *(undefined1 (*) [16])(lVar34 + 0xe0);
            }
            auVar42._0_4_ = fVar10 * (auVar62._0_4_ + *(float *)(lVar27 + 0x1b0));
            auVar42._4_4_ = fVar11 * (auVar62._4_4_ + *(float *)(lVar27 + 0x1b4));
            auVar42._8_4_ = fVar12 * (auVar62._8_4_ + *(float *)(lVar27 + 0x1b8));
            auVar42._12_4_ = pfVar30[-0xd] * (auVar62._12_4_ + *(float *)(lVar27 + 0x1bc));
            auVar44 = NEON_ext(auVar42,auVar42,8,1);
            auVar40._0_4_ = fVar39 * (auVar59._0_4_ + *(float *)(lVar27 + 0x1c0));
            auVar40._4_4_ = fVar7 * (auVar59._4_4_ + *(float *)(lVar27 + 0x1c4));
            auVar40._8_4_ = fVar8 * (auVar59._8_4_ + *(float *)(lVar27 + 0x1c8));
            auVar40._12_4_ = fVar9 * (auVar59._12_4_ + *(float *)(lVar27 + 0x1cc));
            auVar47 = NEON_ext(auVar40,auVar40,8,1);
            auVar43._0_4_ = fVar17 * (auVar51._0_4_ + *(float *)(lVar24 + 0x1b0));
            auVar43._4_4_ = fVar18 * (auVar51._4_4_ + *(float *)(lVar24 + 0x1b4));
            auVar43._8_4_ = fVar19 * (auVar51._8_4_ + *(float *)(lVar24 + 0x1b8));
            auVar43._12_4_ = pfVar30[-5] * (auVar51._12_4_ + *(float *)(lVar24 + 0x1bc));
            auVar60 = NEON_ext(auVar43,auVar43,8,1);
            auVar41._0_4_ = fVar13 * (auVar55._0_4_ + *(float *)(lVar24 + 0x1c0));
            auVar41._4_4_ = fVar14 * (auVar55._4_4_ + *(float *)(lVar24 + 0x1c4));
            auVar41._8_4_ = fVar15 * (auVar55._8_4_ + *(float *)(lVar24 + 0x1c8));
            auVar41._12_4_ = fVar16 * (auVar55._12_4_ + *(float *)(lVar24 + 0x1cc));
            auVar56 = NEON_ext(auVar41,auVar41,8,1);
            pfVar30[8] = fVar52 * pfVar30[8] +
                         fVar52 * (0.0 - (auVar42._0_4_ + auVar42._4_4_ + auVar44._0_4_ +
                                          auVar40._0_4_ + auVar40._4_4_ + auVar47._0_4_ +
                                         auVar43._0_4_ + auVar43._4_4_ + auVar60._0_4_ +
                                         auVar41._0_4_ + auVar41._4_4_ + auVar56._0_4_) * fStack_9c)
            ;
            pfVar30[5] = 0.0;
            lVar25 = lVar25 + 1;
            pfVar30 = pfVar30 + 0x28;
          } while (lVar25 < *piVar1);
        }
        iVar23 = *piVar1;
      }
      iVar33 = iVar23 + iVar33;
      uVar21 = uVar21 + 1;
    } while (uVar21 != param_3);
  }
  return;
}



/* Entry: 1098327b0; end: 109832aab;  */

void FUN_1098327b0(long param_1,long *param_2,uint param_3,long param_4)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  uint uVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  ulong uVar8;
  uint uVar9;
  float fVar10;
  undefined8 uVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  uVar8 = (ulong)param_3;
  plVar7 = param_2;
  uVar4 = uVar8;
  if (0 < (int)param_3) {
    do {
      *(undefined4 *)(*plVar7 + 0xf0) = 0xffffffff;
      uVar4 = uVar4 - 1;
      plVar7 = plVar7 + 1;
    } while (uVar4 != 0);
  }
  uVar9 = *(uint *)(param_1 + 0x10);
  if ((int)uVar9 <= (int)param_3) {
    uVar9 = param_3 + 1;
    if (uVar9 == 0) {
      uVar4 = 0;
    }
    else {
      uVar4 = -(ulong)(uVar9 >> 0x1f) & 0xffffff0000000000 | (ulong)uVar9 << 8;
      FUN_1098256f4(uVar4,0x10);
    }
    uVar3 = *(uint *)(param_1 + 0xc);
    if (0 < (int)uVar3) {
      lVar5 = 0;
      do {
        puVar1 = (undefined8 *)(uVar4 + lVar5);
        puVar2 = (undefined8 *)(*(long *)(param_1 + 0x18) + lVar5);
        uVar11 = *puVar2;
        puVar1[1] = puVar2[1];
        *puVar1 = uVar11;
        uVar11 = puVar2[2];
        puVar1[3] = puVar2[3];
        puVar1[2] = uVar11;
        uVar11 = puVar2[4];
        puVar1[5] = puVar2[5];
        puVar1[4] = uVar11;
        uVar11 = puVar2[6];
        puVar1[7] = puVar2[7];
        puVar1[6] = uVar11;
        uVar11 = puVar2[8];
        puVar1[9] = puVar2[9];
        puVar1[8] = uVar11;
        uVar11 = puVar2[10];
        puVar1[0xb] = puVar2[0xb];
        puVar1[10] = uVar11;
        uVar11 = puVar2[0xc];
        puVar1[0xd] = puVar2[0xd];
        puVar1[0xc] = uVar11;
        uVar11 = puVar2[0xe];
        puVar1[0xf] = puVar2[0xf];
        puVar1[0xe] = uVar11;
        uVar11 = puVar2[0x10];
        puVar1[0x11] = puVar2[0x11];
        puVar1[0x10] = uVar11;
        uVar11 = puVar2[0x12];
        puVar1[0x13] = puVar2[0x13];
        puVar1[0x12] = uVar11;
        uVar11 = puVar2[0x14];
        puVar1[0x15] = puVar2[0x15];
        puVar1[0x14] = uVar11;
        uVar11 = puVar2[0x16];
        puVar1[0x17] = puVar2[0x17];
        puVar1[0x16] = uVar11;
        uVar11 = puVar2[0x18];
        puVar1[0x19] = puVar2[0x19];
        puVar1[0x18] = uVar11;
        uVar11 = puVar2[0x1a];
        puVar1[0x1b] = puVar2[0x1b];
        puVar1[0x1a] = uVar11;
        uVar11 = puVar2[0x1c];
        puVar1[0x1d] = puVar2[0x1d];
        puVar1[0x1c] = uVar11;
        puVar1[0x1e] = puVar2[0x1e];
        lVar5 = lVar5 + 0x100;
      } while ((ulong)uVar3 * 0x100 - lVar5 != 0);
    }
    if ((*(long *)(param_1 + 0x18) != 0) && (*(char *)(param_1 + 0x20) == '\x01')) {
      FUN_109825740();
    }
    *(undefined1 *)(param_1 + 0x20) = 1;
    *(ulong *)(param_1 + 0x18) = uVar4;
    *(uint *)(param_1 + 0x10) = uVar9;
  }
  lVar5 = (long)*(int *)(param_1 + 0xc);
  if (*(int *)(param_1 + 0xc) < 0) {
    if ((int)uVar9 < 0) {
      if ((*(long *)(param_1 + 0x18) != 0) && (*(char *)(param_1 + 0x20) == '\x01')) {
        FUN_109825740();
      }
      *(undefined1 *)(param_1 + 0x20) = 1;
      *(undefined8 *)(param_1 + 0x18) = 0;
      *(undefined4 *)(param_1 + 0x10) = 0;
    }
    lVar6 = lVar5 << 8;
    do {
      lVar5 = lVar5 + 1;
      puVar1 = (undefined8 *)(*(long *)(param_1 + 0x18) + lVar6);
      puVar1[0x1e] = 0;
      puVar1[0x1b] = 0;
      puVar1[0x1a] = 0;
      puVar1[0x1d] = 0;
      puVar1[0x1c] = 0;
      puVar1[0x17] = 0;
      puVar1[0x16] = 0;
      puVar1[0x19] = 0;
      puVar1[0x18] = 0;
      puVar1[0x13] = 0;
      puVar1[0x12] = 0;
      puVar1[0x15] = 0;
      puVar1[0x14] = 0;
      puVar1[0xf] = 0;
      puVar1[0xe] = 0;
      puVar1[0x11] = 0;
      puVar1[0x10] = 0;
      puVar1[0xb] = 0;
      puVar1[10] = 0;
      puVar1[0xd] = 0;
      puVar1[0xc] = 0;
      puVar1[7] = 0;
      puVar1[6] = 0;
      puVar1[9] = 0;
      puVar1[8] = 0;
      puVar1[3] = 0;
      puVar1[2] = 0;
      puVar1[5] = 0;
      puVar1[4] = 0;
      puVar1[1] = 0;
      *puVar1 = 0;
      lVar6 = lVar6 + 0x100;
    } while ((int)lVar5 != 0);
  }
  *(undefined4 *)(param_1 + 0xc) = 0;
  if (0 < (int)param_3) {
    do {
      lVar5 = param_1;
      FUN_109830d80(*(undefined4 *)(param_4 + 0xc),param_1,*param_2);
      lVar6 = *param_2;
      if ((lVar6 != 0 && (*(uint *)(lVar6 + 0x118) & 2) != 0) && (*(float *)(lVar6 + 0x1d0) != 0.0))
      {
        lVar5 = *(long *)(param_1 + 0x18) + (long)(int)lVar5 * 0x100;
        uVar9 = *(uint *)(lVar6 + 0x280);
        if ((uVar9 >> 1 & 1) != 0) {
          func_0x0001098382f4(&uStack_60,*(undefined4 *)(param_4 + 100),lVar6);
          uVar11 = *(undefined8 *)(lVar6 + 0x180);
          uVar15 = *(undefined8 *)(lVar6 + 400);
          uVar16 = *(undefined8 *)(lVar6 + 0x1a0);
          fVar10 = (float)uStack_60;
          fVar12 = (float)((ulong)uStack_60 >> 0x20);
          fVar13 = (float)uStack_58;
          fVar14 = (float)*(undefined8 *)(param_4 + 0xc);
          *(ulong *)(lVar5 + 0xe8) =
               CONCAT44((float)((ulong)*(undefined8 *)(lVar5 + 0xe8) >> 0x20) - 0.0,
                        (float)*(undefined8 *)(lVar5 + 0xe8) -
                        ((float)*(undefined8 *)(lVar6 + 0x188) * fVar10 +
                         (float)*(undefined8 *)(lVar6 + 0x198) * fVar12 +
                        (float)*(undefined8 *)(lVar6 + 0x1a8) * fVar13) * fVar14);
          *(ulong *)(lVar5 + 0xe0) =
               CONCAT44((float)((ulong)*(undefined8 *)(lVar5 + 0xe0) >> 0x20) -
                        ((float)((ulong)uVar11 >> 0x20) * fVar10 +
                         (float)((ulong)uVar15 >> 0x20) * fVar12 +
                        (float)((ulong)uVar16 >> 0x20) * fVar13) * fVar14,
                        (float)*(undefined8 *)(lVar5 + 0xe0) -
                        ((float)uVar11 * fVar10 + (float)uVar15 * fVar12 + (float)uVar16 * fVar13) *
                        fVar14);
          uVar9 = *(uint *)(lVar6 + 0x280);
        }
        if ((uVar9 >> 2 & 1) != 0) {
          FUN_1098388d0(&uStack_60,*(undefined4 *)(param_4 + 0xc),lVar6);
          *(ulong *)(lVar5 + 0xe8) =
               CONCAT44((float)((ulong)uStack_58 >> 0x20) +
                        (float)((ulong)*(undefined8 *)(lVar5 + 0xe8) >> 0x20),
                        (float)uStack_58 + (float)*(undefined8 *)(lVar5 + 0xe8));
          *(ulong *)(lVar5 + 0xe0) =
               CONCAT44((float)((ulong)uStack_60 >> 0x20) +
                        (float)((ulong)*(undefined8 *)(lVar5 + 0xe0) >> 0x20),
                        (float)uStack_60 + (float)*(undefined8 *)(lVar5 + 0xe0));
          uVar9 = *(uint *)(lVar6 + 0x280);
        }
        if ((uVar9 >> 3 & 1) != 0) {
          FUN_10983841c(&uStack_60,*(undefined4 *)(param_4 + 0xc),lVar6);
          *(ulong *)(lVar5 + 0xe8) =
               CONCAT44((float)((ulong)uStack_58 >> 0x20) +
                        (float)((ulong)*(undefined8 *)(lVar5 + 0xe8) >> 0x20),
                        (float)uStack_58 + (float)*(undefined8 *)(lVar5 + 0xe8));
          *(ulong *)(lVar5 + 0xe0) =
               CONCAT44((float)((ulong)uStack_60 >> 0x20) +
                        (float)((ulong)*(undefined8 *)(lVar5 + 0xe0) >> 0x20),
                        (float)uStack_60 + (float)*(undefined8 *)(lVar5 + 0xe0));
        }
      }
      uVar8 = uVar8 - 1;
      param_2 = param_2 + 1;
    } while (uVar8 != 0);
  }
  return;
}



/* Entry: 109832aac; end: 109832e33;  */

undefined8
FUN_109832aac(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,long param_8)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  undefined4 *puVar4;
  uint uVar5;
  ulong uVar6;
  long lVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  int iVar10;
  
  *(undefined4 *)((long)param_1 + 300) = 0xffffffff;
  iVar10 = *(int *)(param_8 + 0x58);
  if (iVar10 != (int)param_1[0x2d]) {
    param_1[0x2a] = 0x10982ffcc;
    param_1[0x2b] = 0x10983010c;
    param_1[0x2c] = 0x109830240;
    *(int *)(param_1 + 0x2d) = iVar10;
  }
  *(undefined4 *)(param_1 + 0x25) = 0;
  (**(code **)(*param_1 + 0x48))(param_1,param_2,param_3,param_8);
  (**(code **)(*param_1 + 0x40))(param_1,param_6,param_7,param_8);
  (**(code **)(*param_1 + 0x38))(param_1,param_4,param_5,param_8);
  uVar1 = *(uint *)((long)param_1 + 0x4c);
  uVar2 = *(uint *)((long)param_1 + 0x2c);
  uVar3 = *(uint *)((long)param_1 + 0x6c);
  uVar5 = *(uint *)((long)param_1 + 0xcc);
  if (((int)uVar5 < (int)uVar1) && ((int)param_1[0x1a] < (int)uVar1)) {
    if (uVar1 == 0) {
      puVar4 = (undefined4 *)0x0;
    }
    else {
      puVar4 = (undefined4 *)((long)(int)uVar1 << 2);
      FUN_1098256f4(puVar4,0x10);
      uVar5 = *(uint *)((long)param_1 + 0xcc);
    }
    if ((int)uVar5 < 1) {
      if ((undefined4 *)param_1[0x1b] != (undefined4 *)0x0) goto LAB_109832bdc;
    }
    else {
      uVar6 = (ulong)uVar5;
      puVar8 = puVar4;
      puVar9 = (undefined4 *)param_1[0x1b];
      do {
        *puVar8 = *puVar9;
        uVar6 = uVar6 - 1;
        puVar8 = puVar8 + 1;
        puVar9 = puVar9 + 1;
      } while (uVar6 != 0);
LAB_109832bdc:
      if ((char)param_1[0x1c] == '\x01') {
        FUN_109825740();
      }
    }
    *(undefined1 *)(param_1 + 0x1c) = 1;
    param_1[0x1b] = (long)puVar4;
    *(uint *)(param_1 + 0x1a) = uVar1;
  }
  lVar7 = (long)(int)uVar2;
  *(uint *)((long)param_1 + 0xcc) = uVar1;
  if ((*(byte *)(param_8 + 0x58) >> 4 & 1) == 0) {
    uVar5 = *(uint *)((long)param_1 + 0xac);
    if (((int)uVar5 < (int)uVar2) && ((int)param_1[0x16] < (int)uVar2)) {
      if (uVar2 == 0) {
        puVar4 = (undefined4 *)0x0;
      }
      else {
        puVar4 = (undefined4 *)(lVar7 << 2);
        FUN_1098256f4(puVar4,0x10);
        uVar5 = *(uint *)((long)param_1 + 0xac);
      }
      if ((int)uVar5 < 1) {
        if ((undefined4 *)param_1[0x17] != (undefined4 *)0x0) goto LAB_109832cdc;
      }
      else {
        uVar6 = (ulong)uVar5;
        puVar8 = puVar4;
        puVar9 = (undefined4 *)param_1[0x17];
        do {
          *puVar8 = *puVar9;
          uVar6 = uVar6 - 1;
          puVar8 = puVar8 + 1;
          puVar9 = puVar9 + 1;
        } while (uVar6 != 0);
LAB_109832cdc:
        if ((char)param_1[0x18] == '\x01') {
          FUN_109825740();
        }
      }
      *(undefined1 *)(param_1 + 0x18) = 1;
      param_1[0x17] = (long)puVar4;
      *(uint *)(param_1 + 0x16) = uVar2;
    }
    *(uint *)((long)param_1 + 0xac) = uVar2;
  }
  else {
    uVar5 = *(uint *)((long)param_1 + 0xac);
    iVar10 = (int)(lVar7 << 1);
    if (((int)uVar5 < iVar10) && ((int)param_1[0x16] < iVar10)) {
      if (uVar2 == 0) {
        puVar4 = (undefined4 *)0x0;
      }
      else {
        puVar4 = (undefined4 *)(lVar7 << 3);
        FUN_1098256f4(puVar4,0x10);
        uVar5 = *(uint *)((long)param_1 + 0xac);
      }
      if ((int)uVar5 < 1) {
        if ((undefined4 *)param_1[0x17] != (undefined4 *)0x0) goto LAB_109832d08;
      }
      else {
        uVar6 = (ulong)uVar5;
        puVar8 = puVar4;
        puVar9 = (undefined4 *)param_1[0x17];
        do {
          *puVar8 = *puVar9;
          uVar6 = uVar6 - 1;
          puVar8 = puVar8 + 1;
          puVar9 = puVar9 + 1;
        } while (uVar6 != 0);
LAB_109832d08:
        if ((char)param_1[0x18] == '\x01') {
          FUN_109825740();
        }
      }
      *(undefined1 *)(param_1 + 0x18) = 1;
      param_1[0x17] = (long)puVar4;
      *(int *)(param_1 + 0x16) = iVar10;
    }
    *(int *)((long)param_1 + 0xac) = iVar10;
  }
  uVar5 = *(uint *)((long)param_1 + 0xec);
  if (((int)uVar3 <= (int)uVar5) || ((int)uVar3 <= (int)param_1[0x1e])) goto LAB_109832db8;
  if (uVar3 == 0) {
    puVar4 = (undefined4 *)0x0;
  }
  else {
    puVar4 = (undefined4 *)((long)(int)uVar3 << 2);
    FUN_1098256f4(puVar4,0x10);
    uVar5 = *(uint *)((long)param_1 + 0xec);
  }
  if ((int)uVar5 < 1) {
    if ((undefined4 *)param_1[0x1f] != (undefined4 *)0x0) goto LAB_109832d98;
  }
  else {
    uVar6 = (ulong)uVar5;
    puVar8 = puVar4;
    puVar9 = (undefined4 *)param_1[0x1f];
    do {
      *puVar8 = *puVar9;
      uVar6 = uVar6 - 1;
      puVar8 = puVar8 + 1;
      puVar9 = puVar9 + 1;
    } while (uVar6 != 0);
LAB_109832d98:
    if ((char)param_1[0x20] == '\x01') {
      FUN_109825740();
    }
  }
  *(undefined1 *)(param_1 + 0x20) = 1;
  param_1[0x1f] = (long)puVar4;
  *(uint *)(param_1 + 0x1e) = uVar3;
LAB_109832db8:
  *(uint *)((long)param_1 + 0xec) = uVar3;
  if (0 < (int)uVar1) {
    uVar6 = 0;
    lVar7 = param_1[0x1b];
    do {
      *(int *)(lVar7 + uVar6 * 4) = (int)uVar6;
      uVar6 = uVar6 + 1;
    } while (uVar1 != uVar6);
  }
  if (0 < (int)uVar2) {
    uVar6 = 0;
    lVar7 = param_1[0x17];
    do {
      *(int *)(lVar7 + uVar6 * 4) = (int)uVar6;
      uVar6 = uVar6 + 1;
    } while (uVar2 != uVar6);
  }
  if (0 < (int)uVar3) {
    uVar6 = 0;
    lVar7 = param_1[0x1f];
    do {
      *(int *)(lVar7 + uVar6 * 4) = (int)uVar6;
      uVar6 = uVar6 + 1;
    } while (uVar3 != uVar6);
  }
  return 0;
}



/* Entry: 109832e34; end: 1098332d3;  */

float FUN_109832e34(ulong param_1,long param_2,int param_3)

{
  ulong uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  undefined4 uVar5;
  long lVar6;
  long *in_x6;
  uint in_w7;
  int iVar7;
  long lVar8;
  ulong uVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  long in_stack_00000000;
  
  if ((*(byte *)(in_stack_00000000 + 0x58) & 1) != 0) {
    uVar2 = *(uint *)(param_2 + 0x4c);
    uVar3 = *(uint *)(param_2 + 0x2c);
    uVar4 = *(uint *)(param_2 + 0x6c);
    if (0 < (int)uVar2) {
      lVar8 = *(long *)(param_2 + 0xd8);
      uVar9 = 0;
      do {
        uVar5 = *(undefined4 *)(lVar8 + uVar9 * 4);
        uVar1 = uVar9 + 1;
        lVar6 = param_2;
        FUN_10983043c(param_2,uVar1);
        lVar8 = *(long *)(param_2 + 0xd8);
        *(undefined4 *)(lVar8 + uVar9 * 4) = *(undefined4 *)(lVar8 + (long)(int)lVar6 * 4);
        *(undefined4 *)(lVar8 + (long)(int)lVar6 * 4) = uVar5;
        uVar9 = uVar1;
      } while (uVar2 != uVar1);
    }
    if (param_3 < *(int *)(in_stack_00000000 + 0x14)) {
      if (0 < (int)uVar3) {
        lVar8 = *(long *)(param_2 + 0xb8);
        uVar9 = 0;
        do {
          uVar5 = *(undefined4 *)(lVar8 + uVar9 * 4);
          uVar1 = uVar9 + 1;
          lVar6 = param_2;
          FUN_10983043c(param_2,uVar1);
          lVar8 = *(long *)(param_2 + 0xb8);
          *(undefined4 *)(lVar8 + uVar9 * 4) = *(undefined4 *)(lVar8 + (long)(int)lVar6 * 4);
          *(undefined4 *)(lVar8 + (long)(int)lVar6 * 4) = uVar5;
          uVar9 = uVar1;
        } while (uVar3 != uVar1);
      }
      if (0 < (int)uVar4) {
        lVar8 = *(long *)(param_2 + 0xf8);
        uVar9 = 0;
        do {
          uVar5 = *(undefined4 *)(lVar8 + uVar9 * 4);
          uVar1 = uVar9 + 1;
          lVar6 = param_2;
          FUN_10983043c(param_2,uVar1);
          lVar8 = *(long *)(param_2 + 0xf8);
          *(undefined4 *)(lVar8 + uVar9 * 4) = *(undefined4 *)(lVar8 + (long)(int)lVar6 * 4);
          *(undefined4 *)(lVar8 + (long)(int)lVar6 * 4) = uVar5;
          uVar9 = uVar1;
        } while (uVar4 != uVar1);
      }
    }
  }
  iVar7 = *(int *)(param_2 + 0x4c);
  if (iVar7 < 1) {
    fVar12 = 0.0;
  }
  else {
    lVar8 = 0;
    fVar12 = 0.0;
    do {
      fVar10 = (float)param_1;
      lVar6 = *(long *)(param_2 + 0x58) +
              (long)*(int *)(*(long *)(param_2 + 0xd8) + lVar8 * 4) * 0xa0;
      if (param_3 < *(int *)(lVar6 + 0x90)) {
        (**(code **)(param_2 + 0x150))
                  (*(long *)(param_2 + 0x18) + (long)*(int *)(lVar6 + 0x98) * 0x100,
                   *(long *)(param_2 + 0x18) + (long)*(int *)(lVar6 + 0x9c) * 0x100);
        fVar10 = fVar10 * fVar10;
        param_1 = (ulong)(uint)fVar10;
        if (fVar12 <= fVar10) {
          fVar12 = fVar10;
        }
        iVar7 = *(int *)(param_2 + 0x4c);
      }
      lVar8 = lVar8 + 1;
    } while (lVar8 < iVar7);
  }
  if (param_3 < *(int *)(in_stack_00000000 + 0x14)) {
    if (0 < (int)in_w7) {
      uVar9 = (ulong)in_w7;
      do {
        if (*(char *)(*in_x6 + 0x1c) == '\x01') {
          lVar8 = param_2;
          FUN_109830d80(*(undefined4 *)(in_stack_00000000 + 0xc),param_2,
                        *(undefined8 *)(*in_x6 + 0x28));
          lVar6 = param_2;
          FUN_109830d80(*(undefined4 *)(in_stack_00000000 + 0xc),param_2,
                        *(undefined8 *)(*in_x6 + 0x30));
          param_1 = (ulong)*(uint *)(in_stack_00000000 + 0xc);
          (**(code **)(*(long *)*in_x6 + 0x30))
                    ((long *)*in_x6,*(long *)(param_2 + 0x18) + (long)(int)lVar8 * 0x100,
                     *(long *)(param_2 + 0x18) + (long)(int)lVar6 * 0x100);
        }
        in_x6 = in_x6 + 1;
        uVar9 = uVar9 - 1;
      } while (uVar9 != 0);
    }
    uVar2 = *(uint *)(in_stack_00000000 + 0x58);
    uVar3 = *(uint *)(param_2 + 0x2c);
    if ((uVar2 >> 9 & 1) == 0) {
      if (0 < (int)uVar3) {
        lVar8 = 0;
        do {
          fVar10 = (float)param_1;
          lVar6 = *(long *)(param_2 + 0x38) +
                  (long)*(int *)(*(long *)(param_2 + 0xb8) + lVar8) * 0xa0;
          (**(code **)(param_2 + 0x158))
                    (*(long *)(param_2 + 0x18) + (long)*(int *)(lVar6 + 0x98) * 0x100,
                     *(long *)(param_2 + 0x18) + (long)*(int *)(lVar6 + 0x9c) * 0x100);
          fVar10 = fVar10 * fVar10;
          param_1 = (ulong)(uint)fVar10;
          if (fVar12 <= fVar10) {
            fVar12 = fVar10;
          }
          lVar8 = lVar8 + 4;
        } while ((ulong)uVar3 * 4 - lVar8 != 0);
      }
      uVar2 = *(uint *)(param_2 + 0x6c);
      if (0 < (int)uVar2) {
        lVar8 = 0;
        do {
          lVar6 = *(long *)(param_2 + 0x78) +
                  (long)*(int *)(*(long *)(param_2 + 0xf8) + lVar8) * 0xa0;
          fVar10 = *(float *)(*(long *)(param_2 + 0x38) + (long)*(int *)(lVar6 + 0x94) * 0xa0 + 100)
          ;
          if (0.0 < fVar10) {
            fVar11 = fVar10 * *(float *)(lVar6 + 0x68);
            *(float *)(lVar6 + 0x78) = -(*(float *)(lVar6 + 0x68) * fVar10);
            *(float *)(lVar6 + 0x7c) = fVar11;
            (**(code **)(param_2 + 0x150))
                      (*(long *)(param_2 + 0x18) + (long)*(int *)(lVar6 + 0x98) * 0x100,
                       *(long *)(param_2 + 0x18) + (long)*(int *)(lVar6 + 0x9c) * 0x100);
            if (fVar12 <= fVar11 * fVar11) {
              fVar12 = fVar11 * fVar11;
            }
          }
          lVar8 = lVar8 + 4;
        } while ((ulong)uVar2 * 4 - lVar8 != 0);
      }
    }
    else if (0 < (int)uVar3) {
      uVar9 = 0;
      do {
        fVar10 = (float)param_1;
        lVar8 = *(long *)(param_2 + 0x38) +
                (long)*(int *)(*(long *)(param_2 + 0xb8) + uVar9 * 4) * 0xa0;
        (**(code **)(param_2 + 0x158))
                  (*(long *)(param_2 + 0x18) + (long)*(int *)(lVar8 + 0x98) * 0x100,
                   *(long *)(param_2 + 0x18) + (long)*(int *)(lVar8 + 0x9c) * 0x100,lVar8);
        fVar10 = fVar10 * fVar10;
        param_1 = (ulong)(uint)fVar10;
        if (fVar12 <= fVar10) {
          fVar12 = fVar10;
        }
        fVar10 = *(float *)(lVar8 + 100);
        if (0.0 < fVar10) {
          iVar7 = (int)uVar9 << (ulong)(uVar2 >> 4 & 1);
          lVar8 = *(long *)(param_2 + 0x78) +
                  (long)*(int *)(*(long *)(param_2 + 0xf8) + (long)iVar7 * 4) * 0xa0;
          fVar11 = fVar10 * *(float *)(lVar8 + 0x68);
          *(float *)(lVar8 + 0x78) = -(*(float *)(lVar8 + 0x68) * fVar10);
          *(float *)(lVar8 + 0x7c) = fVar11;
          (**(code **)(param_2 + 0x150))
                    (*(long *)(param_2 + 0x18) + (long)*(int *)(lVar8 + 0x98) * 0x100,
                     *(long *)(param_2 + 0x18) + (long)*(int *)(lVar8 + 0x9c) * 0x100);
          fVar11 = fVar11 * fVar11;
          param_1 = (ulong)(uint)fVar11;
          if (fVar12 <= fVar11) {
            fVar12 = fVar11;
          }
          if ((*(byte *)(in_stack_00000000 + 0x58) >> 4 & 1) != 0) {
            lVar8 = *(long *)(param_2 + 0x78) +
                    (long)*(int *)(*(long *)(param_2 + 0xf8) + (long)iVar7 * 4 + 4) * 0xa0;
            fVar11 = fVar10 * *(float *)(lVar8 + 0x68);
            *(float *)(lVar8 + 0x78) = -(*(float *)(lVar8 + 0x68) * fVar10);
            *(float *)(lVar8 + 0x7c) = fVar11;
            (**(code **)(param_2 + 0x150))
                      (*(long *)(param_2 + 0x18) + (long)*(int *)(lVar8 + 0x98) * 0x100,
                       *(long *)(param_2 + 0x18) + (long)*(int *)(lVar8 + 0x9c) * 0x100);
            fVar11 = fVar11 * fVar11;
            param_1 = (ulong)(uint)fVar11;
            if (fVar12 <= fVar11) {
              fVar12 = fVar11;
            }
          }
        }
        uVar9 = uVar9 + 1;
      } while (uVar3 != uVar9);
    }
    uVar2 = *(uint *)(param_2 + 0x8c);
    if (0 < (int)uVar2) {
      lVar8 = 0;
      do {
        lVar6 = *(long *)(param_2 + 0x98) + lVar8;
        fVar10 = *(float *)(*(long *)(param_2 + 0x38) + (long)*(int *)(lVar6 + 0x94) * 0xa0 + 100);
        if (0.0 < fVar10) {
          fVar11 = *(float *)(lVar6 + 0x68);
          fVar10 = fVar10 * fVar11;
          if (fVar10 <= fVar11) {
            fVar11 = fVar10;
          }
          *(float *)(lVar6 + 0x78) = -fVar11;
          *(float *)(lVar6 + 0x7c) = fVar11;
          (**(code **)(param_2 + 0x150))
                    (*(long *)(param_2 + 0x18) + (long)*(int *)(lVar6 + 0x98) * 0x100,
                     *(long *)(param_2 + 0x18) + (long)*(int *)(lVar6 + 0x9c) * 0x100);
          if (fVar12 <= fVar11 * fVar11) {
            fVar12 = fVar11 * fVar11;
          }
        }
        lVar8 = lVar8 + 0xa0;
      } while ((ulong)uVar2 * 0xa0 - lVar8 != 0);
    }
  }
  return fVar12;
}



/* Entry: 1098332d4; end: 1098333a3;  */

void FUN_1098332d4(float param_1,long param_2)

{
  uint uVar1;
  bool bVar2;
  long lVar3;
  long in_x7;
  int iVar4;
  int iVar5;
  long lVar6;
  float fVar7;
  
  if ((*(int *)(in_x7 + 0x40) != 0) && (iVar4 = *(int *)(in_x7 + 0x14), 0 < iVar4)) {
    iVar5 = 0;
    do {
      uVar1 = *(uint *)(param_2 + 0x2c);
      if ((int)uVar1 < 1) {
        fVar7 = 0.0;
      }
      else {
        lVar6 = 0;
        fVar7 = 0.0;
        do {
          lVar3 = *(long *)(param_2 + 0x38) +
                  (long)*(int *)(*(long *)(param_2 + 0xb8) + lVar6) * 0xa0;
          (**(code **)(param_2 + 0x160))
                    (*(long *)(param_2 + 0x18) + (long)*(int *)(lVar3 + 0x98) * 0x100,
                     *(long *)(param_2 + 0x18) + (long)*(int *)(lVar3 + 0x9c) * 0x100);
          param_1 = param_1 * param_1;
          if (fVar7 <= param_1) {
            fVar7 = param_1;
          }
          lVar6 = lVar6 + 4;
        } while ((ulong)uVar1 * 4 - lVar6 != 0);
        iVar4 = *(int *)(in_x7 + 0x14);
      }
      param_1 = *(float *)(in_x7 + 0x6c);
      bVar2 = iVar5 < iVar4 + -1;
      iVar5 = iVar5 + 1;
    } while (param_1 < fVar7 && bVar2);
  }
  return;
}



/* Entry: 1098333a4; end: 1098334db;  */

undefined8
FUN_1098333a4(undefined8 param_1,long *param_2,long *param_3,int param_4,undefined8 param_5,
             undefined8 param_6,undefined8 param_7,undefined8 param_8,long param_9,
             undefined8 param_10)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  int iVar4;
  float fVar5;
  
  (**(code **)(*param_2 + 0x50))();
  iVar2 = (int)param_2[0x25];
  if ((int)param_2[0x25] <= *(int *)(param_9 + 0x14)) {
    iVar2 = *(int *)(param_9 + 0x14);
  }
  if (0 < iVar2) {
    iVar4 = 0;
    do {
      (**(code **)(*param_2 + 0x60))
                (param_2,iVar4,param_3,param_4,param_5,param_6,param_7,param_8,param_9,param_10);
      fVar5 = (float)param_1;
      *(float *)((long)param_2 + 0x16c) = fVar5;
      iVar1 = iVar4 + 1;
      bVar3 = iVar4 < iVar2 + -1;
      iVar4 = iVar1;
    } while (*(float *)(param_9 + 0x6c) < fVar5 && bVar3);
    *(int *)((long)param_2 + 0x184) = *(int *)((long)param_2 + 0x184) + 1;
    *(int *)(param_2 + 0x31) = iVar1;
    *(undefined4 *)(param_2 + 0x2f) = 0xfffffffe;
    if (0 < param_4) {
      *(undefined4 *)(param_2 + 0x2f) = *(undefined4 *)(*param_3 + 0xf0);
    }
    *(int *)((long)param_2 + 0x17c) = param_4;
    *(int *)(param_2 + 0x30) = (int)param_6;
    param_2[0x32] = (long)(double)fVar5;
  }
  return 0;
}



/* Entry: 1098334dc; end: 10983396b;  */

undefined8 FUN_1098334dc(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 *puVar1;
  uint uVar2;
  int iVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  int *piVar7;
  undefined8 *puVar8;
  long lVar9;
  undefined4 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  float fVar15;
  float fVar16;
  undefined8 uStack_90;
  ulong uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  uVar2 = *(uint *)(param_4 + 0x58);
  if (((uVar2 >> 2 & 1) != 0) &&
     (uVar4 = (ulong)*(uint *)(param_1 + 0x2c), 0 < (int)*(uint *)(param_1 + 0x2c))) {
    lVar6 = *(long *)(param_1 + 0x78);
    piVar7 = (int *)(*(long *)(param_1 + 0x38) + 0x94);
    do {
      lVar9 = *(long *)(piVar7 + -3);
      *(int *)(lVar9 + 0x84) = piVar7[-0xc];
      iVar3 = *piVar7;
      *(undefined4 *)(lVar9 + 0x8c) = *(undefined4 *)(lVar6 + (long)iVar3 * 0xa0 + 100);
      if ((uVar2 >> 4 & 1) != 0) {
        *(undefined4 *)(lVar9 + 0x90) = *(undefined4 *)(lVar6 + 0x104 + (long)iVar3 * 0xa0);
      }
      piVar7 = piVar7 + 0x28;
      uVar4 = uVar4 - 1;
    } while (uVar4 != 0);
  }
  uVar2 = *(uint *)(param_1 + 0x4c);
  if (0 < (int)uVar2) {
    lVar6 = 0;
    do {
      puVar1 = (undefined8 *)(*(long *)(param_1 + 0x58) + lVar6);
      lVar9 = puVar1[0x11];
      puVar8 = *(undefined8 **)(lVar9 + 0x40);
      if (puVar8 != (undefined8 *)0x0) {
        uVar11 = puVar1[2];
        fVar15 = *(float *)((long)puVar1 + 100);
        uVar12 = *(undefined8 *)(*(long *)(lVar9 + 0x28) + 0x1e0);
        fVar16 = 1.0 / *(float *)(param_4 + 0xc);
        puVar8[1] = CONCAT44((float)((ulong)puVar8[1] >> 0x20) + 0.0,
                             (float)puVar8[1] +
                             (float)*(undefined8 *)(*(long *)(lVar9 + 0x28) + 0x1e8) *
                             (float)puVar1[3] * fVar15 * fVar16);
        *puVar8 = CONCAT44((float)((ulong)*puVar8 >> 0x20) +
                           (float)((ulong)uVar12 >> 0x20) * (float)((ulong)uVar11 >> 0x20) * fVar15
                           * fVar16,(float)*puVar8 + (float)uVar12 * (float)uVar11 * fVar15 * fVar16
                          );
        uVar11 = puVar1[6];
        fVar15 = *(float *)((long)puVar1 + 100);
        uVar12 = *(undefined8 *)(*(long *)(lVar9 + 0x30) + 0x1e0);
        fVar16 = 1.0 / *(float *)(param_4 + 0xc);
        puVar8[5] = CONCAT44((float)((ulong)puVar8[5] >> 0x20) + 0.0,
                             (float)puVar8[5] +
                             (float)*(undefined8 *)(*(long *)(lVar9 + 0x30) + 0x1e8) *
                             (float)puVar1[7] * fVar15 * fVar16);
        puVar8[4] = CONCAT44((float)((ulong)puVar8[4] >> 0x20) +
                             (float)((ulong)uVar12 >> 0x20) *
                             (float)((ulong)uVar11 >> 0x20) * fVar15 * fVar16,
                             (float)puVar8[4] + (float)uVar12 * (float)uVar11 * fVar15 * fVar16);
        uVar11 = *puVar1;
        uVar12 = *(undefined8 *)(*(long *)(lVar9 + 0x28) + 0x2b0);
        fVar15 = *(float *)((long)puVar1 + 100);
        fVar16 = 1.0 / *(float *)(param_4 + 0xc);
        puVar8[3] = CONCAT44((float)((ulong)puVar8[3] >> 0x20) + 0.0,
                             (float)puVar8[3] +
                             (float)puVar1[1] *
                             (float)*(undefined8 *)(*(long *)(lVar9 + 0x28) + 0x2b8) * fVar15 *
                             fVar16);
        puVar8[2] = CONCAT44((float)((ulong)puVar8[2] >> 0x20) +
                             (float)((ulong)uVar11 >> 0x20) * (float)((ulong)uVar12 >> 0x20) *
                             fVar15 * fVar16,
                             (float)puVar8[2] + (float)uVar11 * (float)uVar12 * fVar15 * fVar16);
        uVar11 = puVar1[4];
        uVar12 = *(undefined8 *)(*(long *)(lVar9 + 0x30) + 0x2b0);
        fVar15 = *(float *)((long)puVar1 + 100);
        fVar16 = 1.0 / *(float *)(param_4 + 0xc);
        puVar8[7] = CONCAT44((float)((ulong)puVar8[7] >> 0x20) + 0.0,
                             (float)puVar8[7] +
                             (float)puVar1[5] *
                             (float)*(undefined8 *)(*(long *)(lVar9 + 0x30) + 0x2b8) * fVar15 *
                             fVar16);
        puVar8[6] = CONCAT44((float)((ulong)puVar8[6] >> 0x20) +
                             (float)((ulong)uVar11 >> 0x20) * (float)((ulong)uVar12 >> 0x20) *
                             fVar15 * fVar16,
                             (float)puVar8[6] + (float)uVar11 * (float)uVar12 * fVar15 * fVar16);
      }
      fVar15 = *(float *)((long)puVar1 + 100);
      *(float *)(lVar9 + 0x38) = fVar15;
      if (*(float *)(lVar9 + 0x18) <= ABS(fVar15)) {
        *(undefined1 *)(lVar9 + 0x1c) = 0;
      }
      lVar6 = lVar6 + 0xa0;
    } while ((ulong)uVar2 * 0xa0 - lVar6 != 0);
  }
  uVar2 = *(uint *)(param_1 + 0xc);
  if (0 < (int)uVar2) {
    lVar6 = 0;
    lVar9 = *(long *)(param_1 + 0x18);
    do {
      if (*(long *)(lVar9 + lVar6 + 0xf0) != 0) {
        if (*(int *)(param_4 + 0x40) == 0) {
          lVar9 = lVar9 + lVar6;
          *(ulong *)(lVar9 + 0xb8) =
               CONCAT44((float)((ulong)*(undefined8 *)(lVar9 + 0xb8) >> 0x20) +
                        (float)((ulong)*(undefined8 *)(lVar9 + 0x48) >> 0x20),
                        (float)*(undefined8 *)(lVar9 + 0xb8) + (float)*(undefined8 *)(lVar9 + 0x48))
          ;
          *(ulong *)(lVar9 + 0xb0) =
               CONCAT44((float)((ulong)*(undefined8 *)(lVar9 + 0xb0) >> 0x20) +
                        (float)((ulong)*(undefined8 *)(lVar9 + 0x40) >> 0x20),
                        (float)*(undefined8 *)(lVar9 + 0xb0) + (float)*(undefined8 *)(lVar9 + 0x40))
          ;
          *(ulong *)(lVar9 + 200) =
               CONCAT44((float)((ulong)*(undefined8 *)(lVar9 + 200) >> 0x20) +
                        (float)((ulong)*(undefined8 *)(lVar9 + 0x58) >> 0x20),
                        (float)*(undefined8 *)(lVar9 + 200) + (float)*(undefined8 *)(lVar9 + 0x58));
          *(ulong *)(lVar9 + 0xc0) =
               CONCAT44((float)((ulong)*(undefined8 *)(lVar9 + 0xc0) >> 0x20) +
                        (float)((ulong)*(undefined8 *)(lVar9 + 0x50) >> 0x20),
                        (float)*(undefined8 *)(lVar9 + 0xc0) + (float)*(undefined8 *)(lVar9 + 0x50))
          ;
        }
        else {
          uVar10 = *(undefined4 *)(param_4 + 0xc);
          uVar11 = *(undefined8 *)(param_4 + 0x48);
          puVar1 = (undefined8 *)(lVar9 + lVar6);
          puVar1[0x17] = CONCAT44((float)((ulong)puVar1[0x17] >> 0x20) +
                                  (float)((ulong)puVar1[9] >> 0x20),
                                  (float)puVar1[0x17] + (float)puVar1[9]);
          puVar1[0x16] = CONCAT44((float)((ulong)puVar1[0x16] >> 0x20) +
                                  (float)((ulong)puVar1[8] >> 0x20),
                                  (float)puVar1[0x16] + (float)puVar1[8]);
          puVar1[0x19] = CONCAT44((float)((ulong)puVar1[0x19] >> 0x20) +
                                  (float)((ulong)puVar1[0xb] >> 0x20),
                                  (float)puVar1[0x19] + (float)puVar1[0xb]);
          puVar1[0x18] = CONCAT44((float)((ulong)puVar1[0x18] >> 0x20) +
                                  (float)((ulong)puVar1[10] >> 0x20),
                                  (float)puVar1[0x18] + (float)puVar1[10]);
          if (((((*(float *)(puVar1 + 0x12) != 0.0) || (*(float *)((long)puVar1 + 0x94) != 0.0)) ||
               (*(float *)(lVar9 + lVar6 + 0x98) != 0.0)) ||
              ((*(float *)(lVar9 + lVar6 + 0xa0) != 0.0 || (*(float *)(lVar9 + lVar6 + 0xa4) != 0.0)
               ))) || (*(float *)(lVar9 + lVar6 + 0xa8) != 0.0)) {
            fVar15 = (float)uVar11;
            uStack_90 = CONCAT44((float)((ulong)puVar1[0x14] >> 0x20) * fVar15,
                                 (float)puVar1[0x14] * fVar15);
            uStack_88 = (ulong)(uint)((float)puVar1[0x15] * fVar15);
            FUN_10981d990(uVar10,lVar9 + lVar6,puVar1 + 0x12,&uStack_90,&uStack_80);
            puVar1[1] = uStack_78;
            *puVar1 = uStack_80;
            puVar1[3] = uStack_68;
            puVar1[2] = uStack_70;
            puVar1[5] = uStack_58;
            puVar1[4] = uStack_60;
            puVar1[7] = uStack_48;
            puVar1[6] = uStack_50;
          }
        }
        lVar9 = *(long *)(param_1 + 0x18) + lVar6;
        lVar5 = *(long *)(lVar9 + 0xf0);
        uVar12 = *(undefined8 *)(lVar9 + 0xb8);
        uVar11 = *(undefined8 *)(lVar9 + 0xb0);
        uVar14 = *(undefined8 *)(lVar9 + 0xd8);
        uVar13 = *(undefined8 *)(lVar9 + 0xd0);
        *(int *)(lVar5 + 0x168) = *(int *)(lVar5 + 0x168) + 1;
        *(ulong *)(lVar5 + 0x1b8) =
             CONCAT44((float)((ulong)uVar12 >> 0x20) + (float)((ulong)uVar14 >> 0x20),
                      (float)uVar12 + (float)uVar14);
        *(ulong *)(lVar5 + 0x1b0) =
             CONCAT44((float)((ulong)uVar11 >> 0x20) + (float)((ulong)uVar13 >> 0x20),
                      (float)uVar11 + (float)uVar13);
        lVar9 = *(long *)(param_1 + 0x18) + lVar6;
        lVar5 = *(long *)(lVar9 + 0xf0);
        uVar12 = *(undefined8 *)(lVar9 + 200);
        uVar11 = *(undefined8 *)(lVar9 + 0xc0);
        uVar14 = *(undefined8 *)(lVar9 + 0xe8);
        uVar13 = *(undefined8 *)(lVar9 + 0xe0);
        *(int *)(lVar5 + 0x168) = *(int *)(lVar5 + 0x168) + 1;
        *(ulong *)(lVar5 + 0x1c8) =
             CONCAT44((float)((ulong)uVar12 >> 0x20) + (float)((ulong)uVar14 >> 0x20),
                      (float)uVar12 + (float)uVar14);
        *(ulong *)(lVar5 + 0x1c0) =
             CONCAT44((float)((ulong)uVar11 >> 0x20) + (float)((ulong)uVar13 >> 0x20),
                      (float)uVar11 + (float)uVar13);
        if (*(int *)(param_4 + 0x40) != 0) {
          puVar1 = (undefined8 *)(*(long *)(param_1 + 0x18) + lVar6);
          lVar9 = puVar1[0x1e];
          *(int *)(lVar9 + 0x168) = *(int *)(lVar9 + 0x168) + 1;
          uVar11 = *puVar1;
          *(undefined8 *)(lVar9 + 0x18) = puVar1[1];
          *(undefined8 *)(lVar9 + 0x10) = uVar11;
          uVar11 = puVar1[2];
          *(undefined8 *)(lVar9 + 0x28) = puVar1[3];
          *(undefined8 *)(lVar9 + 0x20) = uVar11;
          uVar11 = puVar1[4];
          *(undefined8 *)(lVar9 + 0x38) = puVar1[5];
          *(undefined8 *)(lVar9 + 0x30) = uVar11;
          uVar11 = puVar1[6];
          *(undefined8 *)(lVar9 + 0x48) = puVar1[7];
          *(undefined8 *)(lVar9 + 0x40) = uVar11;
        }
        lVar9 = *(long *)(param_1 + 0x18);
        *(undefined4 *)(*(long *)(lVar9 + lVar6 + 0xf0) + 0xf0) = 0xffffffff;
      }
      lVar6 = lVar6 + 0x100;
    } while ((ulong)uVar2 * 0x100 - lVar6 != 0);
  }
  if ((*(int *)(param_1 + 0x2c) < 0) && (*(int *)(param_1 + 0x30) < 0)) {
    if ((*(long *)(param_1 + 0x38) != 0) && (*(char *)(param_1 + 0x40) == '\x01')) {
      FUN_109825740();
    }
    *(undefined1 *)(param_1 + 0x40) = 1;
    *(undefined8 *)(param_1 + 0x38) = 0;
    *(undefined4 *)(param_1 + 0x30) = 0;
  }
  *(undefined4 *)(param_1 + 0x2c) = 0;
  if ((*(int *)(param_1 + 0x4c) < 0) && (*(int *)(param_1 + 0x50) < 0)) {
    if ((*(long *)(param_1 + 0x58) != 0) && (*(char *)(param_1 + 0x60) == '\x01')) {
      FUN_109825740();
    }
    *(undefined1 *)(param_1 + 0x60) = 1;
    *(undefined8 *)(param_1 + 0x58) = 0;
    *(undefined4 *)(param_1 + 0x50) = 0;
  }
  *(undefined4 *)(param_1 + 0x4c) = 0;
  if ((*(int *)(param_1 + 0x6c) < 0) && (*(int *)(param_1 + 0x70) < 0)) {
    if ((*(long *)(param_1 + 0x78) != 0) && (*(char *)(param_1 + 0x80) == '\x01')) {
      FUN_109825740();
    }
    *(undefined1 *)(param_1 + 0x80) = 1;
    *(undefined8 *)(param_1 + 0x78) = 0;
    *(undefined4 *)(param_1 + 0x70) = 0;
  }
  *(undefined4 *)(param_1 + 0x6c) = 0;
  if ((*(int *)(param_1 + 0x8c) < 0) && (*(int *)(param_1 + 0x90) < 0)) {
    if ((*(long *)(param_1 + 0x98) != 0) && (*(char *)(param_1 + 0xa0) == '\x01')) {
      FUN_109825740();
    }
    *(undefined1 *)(param_1 + 0xa0) = 1;
    *(undefined8 *)(param_1 + 0x98) = 0;
    *(undefined4 *)(param_1 + 0x90) = 0;
  }
  *(undefined4 *)(param_1 + 0x8c) = 0;
  if ((*(int *)(param_1 + 0xc) < 0) && (*(int *)(param_1 + 0x10) < 0)) {
    if ((*(long *)(param_1 + 0x18) != 0) && (*(char *)(param_1 + 0x20) == '\x01')) {
      FUN_109825740();
    }
    *(undefined1 *)(param_1 + 0x20) = 1;
    *(undefined8 *)(param_1 + 0x18) = 0;
    *(undefined4 *)(param_1 + 0x10) = 0;
  }
  *(undefined4 *)(param_1 + 0xc) = 0;
  return 0;
}



/* Entry: 10983396c; end: 109833a2f;  */

undefined8
FUN_10983396c(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9)

{
  (**(code **)(*param_1 + 0x68))();
  (**(code **)(*param_1 + 0x70))
            (param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9);
  (**(code **)(*param_1 + 0x58))(param_1,param_2,param_3,param_8);
  return 0;
}



/* Entry: 109833a30; end: 109833a47;  */

void FUN_109833a30(long param_1)

{
  *(undefined8 *)(param_1 + 0x170) = 0;
  return;
}



/* Entry: 109833a48; end: 109833a93;  */

long FUN_109833a48(long param_1)

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



/* Entry: 109833a94; end: 109833adf;  */

long FUN_109833a94(long param_1)

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



/* Entry: 109833ae0; end: 109833b2b;  */

long FUN_109833ae0(long param_1)

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



/* Entry: 109833b2c; end: 109833c0f;  */

void FUN_109833b2c(void)

{
  int iVar1;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  if ((bRam000000011382b4f0 & 1) == 0) {
    iVar1 = 0x1382b4f0;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      uStack_30 = 0;
      uStack_28 = 0;
      FUN_109837f0c(0,0x11382b1f0,0,0,&uStack_30);
      ___cxa_atexit(FUN_109833de8,0x11382b1f0,0x100000000);
      ___cxa_guard_release(0x11382b4f0);
    }
  }
  uRam000000011382b2d8 = uRam000000011382b2d8 | 1;
  uRam000000011382b3c0 = 0;
  uRam000000011382b3e8 = (ulong)(uint)((float)uRam000000011382b3f8 * 0.0);
  uRam000000011382b3e0 =
       CONCAT44((float)((ulong)uRam000000011382b3f0 >> 0x20) * 0.0,(float)uRam000000011382b3f0 * 0.0
               );
  uRam000000011382b408 = 0;
  uRam000000011382b400 = 0;
  uRam000000011382b4b8 = (ulong)(uint)((float)uRam000000011382b3d8 * 0.0);
  uRam000000011382b4b0 =
       CONCAT44((float)((ulong)uRam000000011382b3d0 >> 0x20) * 0.0,(float)uRam000000011382b3d0 * 0.0
               );
  return;
}



/* Entry: 109833c10; end: 109833c9f;  */

float FUN_109833c10(float param_1,float param_2,float param_3,float param_4,float param_5)

{
  if (param_3 < param_2) {
    return 1.0;
  }
  if (param_2 == param_3) {
    return 0.0;
  }
  param_4 = param_4 / param_5;
  if (0.0 <= param_4) {
    if (param_4 <= 0.0) {
      return 0.0;
    }
    if ((param_3 < param_1) || (param_2 = param_3, param_1 <= param_3 - param_4)) {
      if (param_3 < param_1) {
        return 0.0;
      }
      return 1.0;
    }
  }
  else if ((param_1 < param_2) || (param_2 - param_4 <= param_1)) {
    if (param_1 < param_2) {
      return 0.0;
    }
    return 1.0;
  }
  return (param_2 - param_1) / param_4;
}



/* Entry: 109833ca0; end: 109833de7;  */

undefined * FUN_109833ca0(long param_1,long *param_2,long *param_3)

{
  uint uVar1;
  long *plVar2;
  long *plVar3;
  ulong uVar4;
  
  plVar2 = param_3;
  (**(code **)(*param_3 + 0x38))(param_3,*(undefined8 *)(param_1 + 0x28));
  *param_2 = (long)plVar2;
  plVar2 = param_3;
  (**(code **)(*param_3 + 0x38))(param_3,*(undefined8 *)(param_1 + 0x30));
  param_2[1] = (long)plVar2;
  plVar2 = param_3;
  (**(code **)(*param_3 + 0x50))(param_3,param_1);
  plVar3 = param_3;
  (**(code **)(*param_3 + 0x38))(param_3,plVar2);
  param_2[2] = (long)plVar3;
  if (plVar3 != (long *)0x0) {
    (**(code **)(*param_3 + 0x60))(param_3,plVar2);
  }
  *(undefined4 *)(param_2 + 3) = *(undefined4 *)(param_1 + 8);
  *(uint *)((long)param_2 + 0x24) = (uint)*(byte *)(param_1 + 0x1d);
  *(undefined4 *)((long)param_2 + 0x34) = *(undefined4 *)(param_1 + 0x20);
  *(undefined4 *)(param_2 + 7) = *(undefined4 *)(param_1 + 0x18);
  *(uint *)((long)param_2 + 0x3c) = (uint)*(byte *)(param_1 + 0x1c);
  *(undefined8 *)((long)param_2 + 0x1c) = *(undefined8 *)(param_1 + 0xc);
  param_2[5] = *(long *)(param_1 + 0x38);
  *(undefined4 *)(param_2 + 6) = 0;
  uVar1 = *(uint *)(*(long *)(param_1 + 0x28) + 0x264);
  uVar4 = (ulong)uVar1;
  if (0 < (int)uVar1) {
    plVar2 = *(long **)(*(long *)(param_1 + 0x28) + 0x270);
    do {
      if (*plVar2 == param_1) {
        *(undefined4 *)(param_2 + 6) = 1;
      }
      uVar4 = uVar4 - 1;
      plVar2 = plVar2 + 1;
    } while (uVar4 != 0);
  }
  uVar1 = *(uint *)(*(long *)(param_1 + 0x30) + 0x264);
  uVar4 = (ulong)uVar1;
  if (0 < (int)uVar1) {
    plVar2 = *(long **)(*(long *)(param_1 + 0x30) + 0x270);
    do {
      if (*plVar2 == param_1) {
        *(undefined4 *)(param_2 + 6) = 1;
      }
      uVar4 = uVar4 - 1;
      plVar2 = plVar2 + 1;
    } while (uVar4 != 0);
  }
  return &UNK_10f580c56;
}



/* Entry: 109833de8; end: 109833e2f;  */

undefined8 * FUN_109833de8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110b14840;
  FUN_109833fe0(param_1 + 0x4c);
  *param_1 = &PTR_FUN_110b122a8;
  FUN_109807e94(param_1 + 0x29);
  return param_1;
}



/* Entry: 109833e30; end: 109833efb;  */

void FUN_109833e30(float param_1,float *param_2)

{
  float *pfVar1;
  undefined8 uVar2;
  float fVar4;
  undefined4 uVar3;
  
  pfVar1 = param_2 + 5;
  pfVar1[0] = 0.0;
  pfVar1[1] = 0.0;
  *(undefined1 *)(param_2 + 7) = 0;
  fVar4 = param_2[1];
  if (0.0 <= fVar4) {
    param_1 = param_1 - *param_2;
    _fmodf(param_1,0x40c90fdb);
    if (-3.1415927 <= param_1) {
      if (3.1415927 < param_1) {
        param_1 = param_1 + -6.2831855;
      }
    }
    else {
      param_1 = param_1 + 6.2831855;
    }
    if (-fVar4 <= param_1) {
      if (param_1 <= fVar4) {
        return;
      }
      *(undefined1 *)(param_2 + 7) = 1;
      fVar4 = fVar4 - param_1;
      uVar2 = NEON_fmov(0xbf800000,4);
      uVar3 = (undefined4)((ulong)uVar2 >> 0x20);
    }
    else {
      *(undefined1 *)(param_2 + 7) = 1;
      fVar4 = -(fVar4 + param_1);
      uVar2 = NEON_fmov(0x3f800000,4);
      uVar3 = (undefined4)((ulong)uVar2 >> 0x20);
    }
    *(ulong *)pfVar1 = CONCAT44(uVar3,fVar4);
  }
  return;
}



/* Entry: 109833efc; end: 109833fdf;  */

void FUN_109833efc(float *param_1,float *param_2)

{
  bool bVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  fVar3 = param_1[1];
  if (0.0 < fVar3) {
    fVar4 = *param_1;
    fVar2 = *param_2 - fVar4;
    _fmodf(fVar2,0x40c90fdb);
    if (-3.1415927 <= fVar2) {
      if (3.1415927 < fVar2) {
        fVar2 = fVar2 + -6.2831855;
      }
    }
    else {
      fVar2 = fVar2 + 6.2831855;
    }
    bVar1 = true;
    if ((fVar2 <= fVar3) && (bVar1 = false, !NAN(fVar2) && !NAN(-fVar3))) {
      bVar1 = fVar2 < -fVar3;
    }
    if (bVar1) {
      if (fVar2 <= 0.0) {
        fVar3 = fVar4 - fVar3;
      }
      else {
        fVar3 = fVar3 + fVar4;
      }
      _fmodf(fVar3,0x40c90fdb);
      if (-3.1415927 <= fVar3) {
        if (3.1415927 < fVar3) {
          fVar3 = fVar3 + -6.2831855;
        }
      }
      else {
        fVar3 = fVar3 + 6.2831855;
      }
      *param_2 = fVar3;
    }
  }
  return;
}



/* Entry: 109833fe0; end: 10983402b;  */

long FUN_109833fe0(long param_1)

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



/* Entry: 10983402c; end: 1098342c3;  */

undefined8 * FUN_10983402c(undefined8 *param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  *(undefined4 *)((long)param_1 + 0x3c) = 0x3f800000;
  *(undefined2 *)(param_1 + 10) = 0x100;
  *(undefined4 *)((long)param_1 + 0x54) = 0x3d23d70a;
  *(undefined1 *)(param_1 + 4) = 1;
  param_1[3] = 0;
  *(undefined4 *)((long)param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 2) = 0;
  param_1[5] = param_2;
  *(undefined4 *)(param_1 + 6) = 0;
  *(undefined8 *)((long)param_1 + 0x34) = 0x100000000;
  *(undefined1 *)(param_1 + 8) = 1;
  param_1[9] = 0;
  *(undefined1 *)((long)param_1 + 0x52) = 1;
  *(undefined1 *)(param_1 + 0xb) = 0;
  *(undefined4 *)((long)param_1 + 0x5c) = 0;
  *(undefined1 *)(param_1 + 0xc) = 0;
  param_1[0xd] = param_3;
  param_1[0xe] = 0;
  *(undefined1 *)(param_1 + 0xf) = 1;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x14] = 0x3c8888893e99999a;
  param_1[0x13] = 0x3f8000003f19999a;
  param_1[0x15] = 0xa00000000;
  param_1[0x1a] = 0x3e4ccccd;
  param_1[0x17] = 0x3e4ccccd3e4ccccd;
  param_1[0x16] = 0x3f80000041a00000;
  param_1[0x19] = 0x3dcccccd;
  param_1[0x18] = 0x3c23d70a3d75c28f;
  *(undefined4 *)(param_1 + 0x1b) = 1;
  *(undefined8 *)((long)param_1 + 0xe4) = 0x3f59999a00000000;
  *(undefined8 *)((long)param_1 + 0xdc) = 0x3dcccccdbd23d70a;
  *(undefined4 *)((long)param_1 + 0xec) = 0x3f59999a;
  param_1[0x1e] = 0x200000104;
  *(undefined4 *)(param_1 + 0x1f) = 0x80;
  *(undefined8 *)((long)param_1 + 0x104) = 0x3e4ccccd00000000;
  *(undefined8 *)((long)param_1 + 0xfc) = 0x7149f2ca42c80000;
  *(undefined2 *)((long)param_1 + 0x10c) = 0;
  param_1[0x22] = 0x100000000;
  *param_1 = &PTR_FUN_110b145d0;
  *(undefined1 *)(param_1 + 0x26) = 1;
  param_1[0x25] = 0;
  *(undefined8 *)((long)param_1 + 0x11c) = 0;
  param_1[0x27] = 0;
  param_1[0x28] = param_4;
  *(undefined1 *)(param_1 + 0x2d) = 1;
  param_1[0x2c] = 0;
  *(undefined8 *)((long)param_1 + 0x154) = 0;
  *(undefined1 *)(param_1 + 0x31) = 1;
  param_1[0x30] = 0;
  *(undefined8 *)((long)param_1 + 0x174) = 0;
  param_1[0x32] = 0xc120000000000000;
  *(undefined2 *)((long)param_1 + 0x1aa) = 0;
  param_1[0x33] = 0;
  param_1[0x34] = 0;
  *(undefined1 *)(param_1 + 0x39) = 1;
  param_1[0x38] = 0;
  *(undefined8 *)((long)param_1 + 0x1b4) = 0;
  *(undefined4 *)(param_1 + 0x3a) = 0;
  *(undefined1 *)((long)param_1 + 0x1d4) = 1;
  *(undefined1 *)(param_1 + 0x3e) = 1;
  param_1[0x3d] = 0;
  *(undefined8 *)((long)param_1 + 0x1dc) = 0;
  *(undefined4 *)(param_1 + 0x3f) = 0;
  if (param_4 == 0) {
    uVar1 = 0x1a0;
    FUN_1098256f4(0x1a0,0x10);
    func_0x00010982fef0();
    param_1[0x28] = uVar1;
  }
  *(bool *)((long)param_1 + 0x1a9) = param_4 == 0;
  puVar2 = (undefined8 *)0x70;
  FUN_1098256f4(0x70,0x10);
  *puVar2 = &PTR_FUN_110b12f70;
  *(undefined1 *)(puVar2 + 4) = 1;
  puVar2[3] = 0;
  *(undefined8 *)((long)puVar2 + 0xc) = 0;
  *(undefined1 *)(puVar2 + 8) = 1;
  puVar2[7] = 0;
  *(undefined8 *)((long)puVar2 + 0x2c) = 0;
  *(undefined1 *)(puVar2 + 0xc) = 1;
  puVar2[0xb] = 0;
  *(undefined8 *)((long)puVar2 + 0x4c) = 0;
  *(undefined1 *)(puVar2 + 0xd) = 1;
  param_1[0x29] = puVar2;
  *(undefined1 *)(param_1 + 0x35) = 1;
  puVar2 = (undefined8 *)0x98;
  FUN_1098256f4(0x98,0x10);
  uVar1 = param_1[0x28];
  *puVar2 = &PTR_FUN_110b14790;
  puVar2[1] = 0;
  puVar2[2] = uVar1;
  puVar2[3] = 0;
  *(undefined4 *)(puVar2 + 4) = 0;
  puVar2[5] = 0;
  puVar2[6] = param_2;
  *(undefined1 *)(puVar2 + 10) = 1;
  puVar2[9] = 0;
  *(undefined8 *)((long)puVar2 + 0x3c) = 0;
  *(undefined1 *)(puVar2 + 0xe) = 1;
  puVar2[0xd] = 0;
  *(undefined8 *)((long)puVar2 + 0x5c) = 0;
  *(undefined1 *)(puVar2 + 0x12) = 1;
  puVar2[0x11] = 0;
  *(undefined8 *)((long)puVar2 + 0x7c) = 0;
  param_1[0x27] = puVar2;
  return param_1;
}



/* Entry: 1098342c4; end: 10983438b;  */

undefined8 * FUN_1098342c4(undefined8 *param_1)

{
  long *plVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  *param_1 = &PTR_FUN_110b145d0;
  if (*(char *)(param_1 + 0x35) == '\x01') {
    (*(code *)**(undefined8 **)param_1[0x29])();
    if (param_1[0x29] != 0) {
      FUN_109825740();
    }
  }
  if ((undefined8 *)param_1[0x27] != (undefined8 *)0x0) {
    (*(code *)**(undefined8 **)param_1[0x27])();
    if (param_1[0x27] != 0) {
      FUN_109825740();
    }
  }
  if (*(char *)((long)param_1 + 0x1a9) == '\x01') {
    (*(code *)**(undefined8 **)param_1[0x28])();
    if (param_1[0x28] != 0) {
      FUN_109825740();
    }
  }
  FUN_1098079e0(param_1 + 0x3b);
  FUN_109837bb8(param_1 + 0x36);
  FUN_109837b6c(param_1 + 0x2e);
  FUN_109833fe0(param_1 + 0x2a);
  FUN_109833fe0(param_1 + 0x23);
  *param_1 = &PTR_FUN_110b12300;
  iVar2 = *(int *)((long)param_1 + 0xc);
  if (0 < iVar2) {
    lVar4 = 0;
    do {
      lVar5 = *(long *)(param_1[3] + lVar4 * 8);
      lVar3 = *(long *)(lVar5 + 200);
      if (lVar3 != 0) {
        plVar1 = (long *)param_1[0xd];
        (**(code **)(*plVar1 + 0x48))();
        (**(code **)(*plVar1 + 0x60))();
        (**(code **)(*(long *)param_1[0xd] + 0x18))((long *)param_1[0xd],lVar3,param_1[5]);
        *(undefined8 *)(lVar5 + 200) = 0;
        iVar2 = *(int *)((long)param_1 + 0xc);
      }
      lVar4 = lVar4 + 1;
    } while (lVar4 < iVar2);
  }
  FUN_10980b2c4(param_1 + 1);
  return param_1;
}



/* Entry: 10983438c; end: 10983438f;  */

undefined8 * FUN_10983438c(undefined8 *param_1)

{
  long *plVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  *param_1 = &PTR_FUN_110b145d0;
  if (*(char *)(param_1 + 0x35) == '\x01') {
    (*(code *)**(undefined8 **)param_1[0x29])();
    if (param_1[0x29] != 0) {
      FUN_109825740();
    }
  }
  if ((undefined8 *)param_1[0x27] != (undefined8 *)0x0) {
    (*(code *)**(undefined8 **)param_1[0x27])();
    if (param_1[0x27] != 0) {
      FUN_109825740();
    }
  }
  if (*(char *)((long)param_1 + 0x1a9) == '\x01') {
    (*(code *)**(undefined8 **)param_1[0x28])();
    if (param_1[0x28] != 0) {
      FUN_109825740();
    }
  }
  FUN_1098079e0(param_1 + 0x3b);
  FUN_109837bb8(param_1 + 0x36);
  FUN_109837b6c(param_1 + 0x2e);
  FUN_109833fe0(param_1 + 0x2a);
  FUN_109833fe0(param_1 + 0x23);
  *param_1 = &PTR_FUN_110b12300;
  iVar2 = *(int *)((long)param_1 + 0xc);
  if (0 < iVar2) {
    lVar4 = 0;
    do {
      lVar5 = *(long *)(param_1[3] + lVar4 * 8);
      lVar3 = *(long *)(lVar5 + 200);
      if (lVar3 != 0) {
        plVar1 = (long *)param_1[0xd];
        (**(code **)(*plVar1 + 0x48))();
        (**(code **)(*plVar1 + 0x60))();
        (**(code **)(*(long *)param_1[0xd] + 0x18))((long *)param_1[0xd],lVar3,param_1[5]);
        *(undefined8 *)(lVar5 + 200) = 0;
        iVar2 = *(int *)((long)param_1 + 0xc);
      }
      lVar4 = lVar4 + 1;
    } while (lVar4 < iVar2);
  }
  FUN_10980b2c4(param_1 + 1);
  return param_1;
}



/* Entry: 109834390; end: 1098343af;  */

void FUN_109834390(long param_1)

{
  FUN_1098342c4();
  if (param_1 != 0) {
    FUN_109825740();
  }
  return;
}



/* Entry: 1098343b0; end: 10983442f;  */

void FUN_1098343b0(undefined8 param_1,long param_2)

{
  long lVar1;
  int iVar2;
  long lVar3;
  
  iVar2 = *(int *)(param_2 + 0xc);
  if (0 < iVar2) {
    lVar3 = 0;
    do {
      lVar1 = *(long *)(*(long *)(param_2 + 0x18) + lVar3 * 8);
      if (((lVar1 != 0 && (*(uint *)(lVar1 + 0x118) & 2) != 0) && (*(int *)(lVar1 + 0xf8) != 2)) &&
         ((*(byte *)(lVar1 + 0xe8) >> 1 & 1) != 0)) {
        FUN_109838114(param_1);
        iVar2 = *(int *)(param_2 + 0xc);
      }
      lVar3 = lVar3 + 1;
    } while (lVar3 < iVar2);
  }
  return;
}



/* Entry: 109834430; end: 1098345b7;  */

void FUN_109834430(long *param_1)

{
  long *plVar1;
  uint uVar2;
  long lVar3;
  
  FUN_109809f00();
  plVar1 = param_1;
  (**(code **)(*param_1 + 0x28))();
  if (plVar1 != (long *)0x0) {
    plVar1 = param_1;
    (**(code **)(*param_1 + 0x28))();
    (**(code **)(*plVar1 + 0x70))();
    if (((ulong)plVar1 & 0x1800) != 0) {
      plVar1 = param_1;
      (**(code **)(*param_1 + 0xd8))();
      if (0 < (int)plVar1) {
        uVar2 = (int)plVar1 + 1;
        do {
          plVar1 = param_1;
          (**(code **)(*param_1 + 0xe0))(param_1,uVar2 - 2);
          (**(code **)(*param_1 + 0x160))(param_1,plVar1);
          uVar2 = uVar2 - 1;
        } while (1 < uVar2);
      }
    }
  }
  plVar1 = param_1;
  (**(code **)(*param_1 + 0x28))();
  if (plVar1 != (long *)0x0) {
    plVar1 = param_1;
    (**(code **)(*param_1 + 0x28))();
    (**(code **)(*plVar1 + 0x70))();
    if ((((ulong)plVar1 & 0x4003) != 0) &&
       (plVar1 = param_1, (**(code **)(*param_1 + 0x28))(), plVar1 != (long *)0x0)) {
      plVar1 = param_1;
      (**(code **)(*param_1 + 0x28))();
      (**(code **)(*plVar1 + 0x70))();
      if (((int)plVar1 != 0) && (0 < *(int *)((long)param_1 + 0x1b4))) {
        lVar3 = 0;
        do {
          plVar1 = *(long **)(param_1[0x38] + lVar3 * 8);
          (**(code **)(*plVar1 + 0x18))(plVar1,param_1[0xe]);
          lVar3 = lVar3 + 1;
        } while (lVar3 < *(int *)((long)param_1 + 0x1b4));
      }
    }
  }
  plVar1 = param_1;
  (**(code **)(*param_1 + 0x28))();
  if (plVar1 != (long *)0x0) {
    (**(code **)(*param_1 + 0x28))();
                    /* WARNING: Could not recover jumptable at 0x0001098345a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0xd0))();
    return;
  }
  return;
}



/* Entry: 1098345b8; end: 10983465f;  */

void FUN_1098345b8(long param_1)

{
  long lVar1;
  long lVar2;
  
  if (0 < *(int *)(param_1 + 0x174)) {
    lVar1 = 0;
    do {
      lVar2 = *(long *)(*(long *)(param_1 + 0x180) + lVar1 * 8);
      *(undefined8 *)(lVar2 + 0x228) = 0;
      *(undefined8 *)(lVar2 + 0x220) = 0;
      *(undefined8 *)(lVar2 + 0x238) = 0;
      *(undefined8 *)(lVar2 + 0x230) = 0;
      lVar1 = lVar1 + 1;
    } while (lVar1 < *(int *)(param_1 + 0x174));
  }
  return;
}



/* Entry: 109834660; end: 1098346ef;  */

void FUN_109834660(long param_1,long param_2)

{
  float fVar1;
  undefined1 auStack_60 [64];
  
  if (*(long *)(param_2 + 600) != 0) {
    if ((*(byte *)(param_2 + 0xe8) & 3) == 0) {
      if ((*(char *)(param_1 + 0x1d4) == '\x01') && (*(float *)(param_1 + 0x1a4) != 0.0)) {
        fVar1 = *(float *)(param_1 + 0x1a0) - *(float *)(param_1 + 0x1a4);
      }
      else {
        fVar1 = *(float *)(param_1 + 0x1a0) * *(float *)(param_2 + 0x134);
      }
      FUN_10981d990(fVar1,param_2 + 0x50,param_2 + 0x90,param_2 + 0xa0,auStack_60);
      (**(code **)(**(long **)(param_2 + 600) + 0x18))(*(long **)(param_2 + 600),auStack_60);
    }
  }
  return;
}



/* Entry: 1098346f0; end: 1098347b3;  */

void FUN_1098346f0(long param_1)

{
  uint uVar1;
  long lVar2;
  int iVar3;
  long lVar4;
  
  if ((*(byte *)(param_1 + 0x1aa) & 1) == 0) {
    iVar3 = *(int *)(param_1 + 0x174);
    if (0 < iVar3) {
      lVar4 = 0;
      do {
        uVar1 = *(uint *)(*(long *)(*(long *)(param_1 + 0x180) + lVar4 * 8) + 0xf8);
        if (6 < uVar1 || (1 << (ulong)(uVar1 & 0x1f) & 100U) == 0) {
          FUN_109834660(param_1);
          iVar3 = *(int *)(param_1 + 0x174);
        }
        lVar4 = lVar4 + 1;
      } while (lVar4 < iVar3);
    }
  }
  else {
    iVar3 = *(int *)(param_1 + 0xc);
    if (0 < iVar3) {
      lVar4 = 0;
      do {
        lVar2 = *(long *)(*(long *)(param_1 + 0x18) + lVar4 * 8);
        if (lVar2 != 0 && (*(uint *)(lVar2 + 0x118) & 2) != 0) {
          FUN_109834660(param_1);
          iVar3 = *(int *)(param_1 + 0xc);
        }
        lVar4 = lVar4 + 1;
      } while (lVar4 < iVar3);
    }
  }
  return;
}



/* Entry: 1098347b4; end: 109834923;  */

uint FUN_1098347b4(undefined8 param_1,undefined8 param_2,long *param_3,uint param_4)

{
  long *plVar1;
  uint uVar2;
  uint uVar3;
  float fVar4;
  float fVar5;
  
  fVar5 = (float)param_2;
  fVar4 = (float)param_1;
  if (param_4 == 0) {
    fVar5 = 0.0;
    if (*(char *)((long)param_3 + 0x1d4) == '\0') {
      fVar5 = fVar4;
    }
    *(float *)(param_3 + 0x34) = fVar5;
    *(undefined4 *)((long)param_3 + 0x1a4) = 0;
    uVar2 = (uint)(1.1920929e-07 <= ABS(fVar4));
    param_4 = (uint)(1.1920929e-07 <= ABS(fVar4));
  }
  else {
    *(float *)((long)param_3 + 0x1a4) = fVar5;
    fVar4 = fVar4 + *(float *)(param_3 + 0x34);
    *(float *)(param_3 + 0x34) = fVar4;
    param_1 = param_2;
    if (fVar5 <= fVar4) {
      uVar2 = (uint)(fVar4 / fVar5);
      *(float *)(param_3 + 0x34) = fVar4 - fVar5 * (float)(int)(fVar4 / fVar5);
    }
    else {
      uVar2 = 0;
    }
  }
  plVar1 = param_3;
  (**(code **)(*param_3 + 0x28))();
  if (plVar1 != (long *)0x0) {
    plVar1 = param_3;
    (**(code **)(*param_3 + 0x28))();
    (**(code **)(*plVar1 + 0x70))();
    bRam000000011382b4f8 = (byte)((uint)plVar1 >> 4) & 1;
  }
  if (uVar2 == 0) {
    (**(code **)(*param_3 + 0xa8))(param_3);
  }
  else {
    uVar3 = uVar2;
    if ((int)param_4 <= (int)uVar2) {
      uVar3 = param_4;
    }
    (**(code **)(*param_3 + 0x150))((float)param_1 * (float)(int)uVar3,param_3);
    (**(code **)(*param_3 + 0x168))(param_3);
    if (0 < (int)uVar3) {
      do {
        (**(code **)(*param_3 + 0x140))(param_1,param_3);
        (**(code **)(*param_3 + 0xa8))(param_3);
        uVar3 = uVar3 - 1;
      } while (uVar3 != 0);
    }
  }
  (**(code **)(*param_3 + 0xf8))(param_3);
  return uVar2;
}



/* Entry: 109834924; end: 109834a5f;  */

void FUN_109834924(undefined8 param_1,long *param_2)

{
  long *plVar1;
  long lVar2;
  
  if ((code *)param_2[0x11] != (code *)0x0) {
    (*(code *)param_2[0x11])(param_1,param_2);
  }
  (**(code **)(*param_2 + 0x120))(param_1,param_2);
  *(int *)(param_2 + 6) = (int)param_1;
  *(undefined4 *)((long)param_2 + 0x34) = 0;
  plVar1 = param_2;
  (**(code **)(*param_2 + 0x28))();
  param_2[9] = (long)plVar1;
  (**(code **)(*param_2 + 0x148))(param_1,param_2);
  (**(code **)(*param_2 + 0x60))(param_2);
  (**(code **)(*param_2 + 0x130))(param_2);
  *(int *)((long)param_2 + 0xa4) = (int)param_1;
  (**(code **)(*param_2 + 0x158))(param_2,param_2 + 0x13);
  (**(code **)(*param_2 + 0x128))(param_1,param_2);
  if (0 < *(int *)((long)param_2 + 0x1b4)) {
    lVar2 = 0;
    do {
      plVar1 = *(long **)(param_2[0x38] + lVar2 * 8);
      (**(code **)(*plVar1 + 0x10))(param_1,plVar1,param_2);
      lVar2 = lVar2 + 1;
    } while (lVar2 < *(int *)((long)param_2 + 0x1b4));
  }
  (**(code **)(*param_2 + 0x138))(param_1,param_2);
  if ((code *)param_2[0x10] != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000109834a4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)param_2[0x10])(param_1,param_2);
    return;
  }
  return;
}



/* Entry: 109834a60; end: 109834b6f;  */

void FUN_109834a60(long param_1,undefined8 *param_2)

{
  long lVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  float fVar6;
  
  uVar5 = param_2[1];
  uVar4 = *param_2;
  *(undefined8 *)(param_1 + 0x198) = uVar5;
  *(undefined8 *)(param_1 + 400) = uVar4;
  iVar2 = *(int *)(param_1 + 0x174);
  if (0 < iVar2) {
    lVar1 = 0;
    do {
      lVar3 = *(long *)(*(long *)(param_1 + 0x180) + lVar1 * 8);
      if ((6 < *(uint *)(lVar3 + 0xf8) || (1 << (ulong)(*(uint *)(lVar3 + 0xf8) & 0x1f) & 100U) == 0
          ) && ((*(byte *)(lVar3 + 0x280) & 1) == 0)) {
        if (*(float *)(lVar3 + 0x1d0) != 0.0) {
          fVar6 = 1.0 / *(float *)(lVar3 + 0x1d0);
          *(ulong *)(lVar3 + 0x1f8) = (ulong)(uint)((float)uVar5 * fVar6);
          *(ulong *)(lVar3 + 0x1f0) =
               CONCAT44((float)((ulong)uVar4 >> 0x20) * fVar6,(float)uVar4 * fVar6);
          uVar5 = param_2[1];
          uVar4 = *param_2;
        }
        *(undefined8 *)(lVar3 + 0x208) = uVar5;
        *(undefined8 *)(lVar3 + 0x200) = uVar4;
        iVar2 = *(int *)(param_1 + 0x174);
      }
      lVar1 = lVar1 + 1;
    } while (lVar1 < iVar2);
  }
  return;
}



/* Entry: 109834b70; end: 109834cdf;  */

void FUN_109834b70(long *param_1,long param_2)

{
  uint uVar1;
  bool bVar2;
  ulong uVar3;
  uint uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  uint uVar7;
  long lVar8;
  float fVar9;
  
  uVar7 = *(uint *)(param_2 + 0xe8);
  if (((uVar7 & 3) == 0) && ((*(byte *)(param_2 + 0x280) & 1) == 0)) {
    if (*(float *)(param_2 + 0x1d0) != 0.0) {
      fVar9 = 1.0 / *(float *)(param_2 + 0x1d0);
      lVar8 = param_1[0x32];
      *(ulong *)(param_2 + 0x1f8) = (ulong)(uint)((float)param_1[0x33] * fVar9);
      *(ulong *)(param_2 + 0x1f0) =
           CONCAT44((float)((ulong)lVar8 >> 0x20) * fVar9,(float)lVar8 * fVar9);
    }
    lVar8 = param_1[0x32];
    *(long *)(param_2 + 0x208) = param_1[0x33];
    *(long *)(param_2 + 0x200) = lVar8;
  }
  if (*(long *)(param_2 + 0xd0) != 0) {
    if ((uVar7 & 1) == 0) {
      uVar4 = *(uint *)((long)param_1 + 0x174);
      if (uVar4 == *(uint *)(param_1 + 0x2f)) {
        uVar1 = uVar4 << 1;
        if (uVar4 == 0) {
          uVar1 = 1;
        }
        if ((int)uVar4 < (int)uVar1) {
          if (uVar1 == 0) {
            uVar3 = 0;
          }
          else {
            uVar3 = -(ulong)(uVar1 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar1 << 3;
            FUN_1098256f4(uVar3,0x10);
            uVar4 = *(uint *)((long)param_1 + 0x174);
          }
          if (0 < (int)uVar4) {
            lVar8 = 0;
            do {
              *(undefined8 *)(uVar3 + lVar8) = *(undefined8 *)(param_1[0x30] + lVar8);
              lVar8 = lVar8 + 8;
            } while ((ulong)uVar4 << 3 != lVar8);
          }
          if ((param_1[0x30] != 0) && ((char)param_1[0x31] == '\x01')) {
            FUN_109825740();
            uVar4 = *(uint *)((long)param_1 + 0x174);
          }
          *(undefined1 *)(param_1 + 0x31) = 1;
          param_1[0x30] = uVar3;
          *(uint *)(param_1 + 0x2f) = uVar1;
          uVar7 = *(uint *)(param_2 + 0xe8);
        }
      }
      *(long *)(param_1[0x30] + (long)(int)uVar4 * 8) = param_2;
      *(uint *)((long)param_1 + 0x174) = uVar4 + 1;
    }
    else if ((*(uint *)(param_2 + 0xf8) & 0xfffffffe) != 4) {
      *(undefined4 *)(param_2 + 0xf8) = 2;
    }
    bVar2 = (uVar7 & 3) != 0;
    uVar5 = 1;
    if (bVar2) {
      uVar5 = 2;
    }
    uVar6 = 0xfffffffd;
    if (!bVar2) {
      uVar6 = 0xffffffff;
    }
                    /* WARNING: Could not recover jumptable at 0x000109834cdc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x48))(param_1,param_2,uVar5,uVar6);
    return;
  }
  return;
}



/* Entry: 109834ce0; end: 109834e53;  */

void FUN_109834ce0(long *param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  uint uVar1;
  ulong uVar2;
  uint uVar3;
  long lVar4;
  float fVar5;
  
  if (((*(uint *)(param_2 + 0xe8) & 3) == 0) && ((*(byte *)(param_2 + 0x280) & 1) == 0)) {
    if (*(float *)(param_2 + 0x1d0) != 0.0) {
      fVar5 = 1.0 / *(float *)(param_2 + 0x1d0);
      lVar4 = param_1[0x32];
      *(ulong *)(param_2 + 0x1f8) = (ulong)(uint)((float)param_1[0x33] * fVar5);
      *(ulong *)(param_2 + 0x1f0) =
           CONCAT44((float)((ulong)lVar4 >> 0x20) * fVar5,(float)lVar4 * fVar5);
    }
    lVar4 = param_1[0x32];
    *(long *)(param_2 + 0x208) = param_1[0x33];
    *(long *)(param_2 + 0x200) = lVar4;
  }
  if (*(long *)(param_2 + 0xd0) != 0) {
    if ((*(uint *)(param_2 + 0xe8) & 1) == 0) {
      uVar3 = *(uint *)((long)param_1 + 0x174);
      if (uVar3 == *(uint *)(param_1 + 0x2f)) {
        uVar1 = uVar3 << 1;
        if (uVar3 == 0) {
          uVar1 = 1;
        }
        if ((int)uVar3 < (int)uVar1) {
          if (uVar1 == 0) {
            uVar2 = 0;
          }
          else {
            uVar2 = -(ulong)(uVar1 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar1 << 3;
            FUN_1098256f4(uVar2,0x10);
            uVar3 = *(uint *)((long)param_1 + 0x174);
          }
          if (0 < (int)uVar3) {
            lVar4 = 0;
            do {
              *(undefined8 *)(uVar2 + lVar4) = *(undefined8 *)(param_1[0x30] + lVar4);
              lVar4 = lVar4 + 8;
            } while ((ulong)uVar3 << 3 != lVar4);
          }
          if ((param_1[0x30] != 0) && ((char)param_1[0x31] == '\x01')) {
            FUN_109825740();
            uVar3 = *(uint *)((long)param_1 + 0x174);
          }
          *(undefined1 *)(param_1 + 0x31) = 1;
          param_1[0x30] = uVar2;
          *(uint *)(param_1 + 0x2f) = uVar1;
        }
      }
      *(long *)(param_1[0x30] + (long)(int)uVar3 * 8) = param_2;
      *(uint *)((long)param_1 + 0x174) = uVar3 + 1;
    }
    else if ((*(uint *)(param_2 + 0xf8) & 0xfffffffe) != 4) {
      *(undefined4 *)(param_2 + 0xf8) = 2;
    }
                    /* WARNING: Could not recover jumptable at 0x000109834e50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x48))(param_1,param_2,param_3,param_4);
    return;
  }
  return;
}



/* Entry: 109834e54; end: 109834fa3;  */

void FUN_109834e54(float param_1,long param_2)

{
  float fVar1;
  byte bVar2;
  bool bVar3;
  long lVar4;
  int iVar5;
  long lVar6;
  uint uVar7;
  undefined4 uVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  
  bVar2 = bRam000000011382b4f8;
  fVar1 = fRam00000001132e04a8;
  iVar5 = *(int *)(param_2 + 0x174);
  if (0 < iVar5) {
    lVar4 = 0;
    bVar3 = fRam00000001132e04a8 == 0.0;
    do {
      lVar6 = *(long *)(*(long *)(param_2 + 0x180) + lVar4 * 8);
      if (lVar6 != 0) {
        uVar7 = *(uint *)(lVar6 + 0xf8);
        if (uVar7 != 2) {
          if (uVar7 == 4) goto LAB_109834f60;
          auVar10._0_4_ = *(float *)(lVar6 + 0x1b0) * *(float *)(lVar6 + 0x1b0);
          auVar10._4_4_ = *(float *)(lVar6 + 0x1b4) * *(float *)(lVar6 + 0x1b4);
          auVar10._8_4_ = *(float *)(lVar6 + 0x1b8) * *(float *)(lVar6 + 0x1b8);
          auVar10._12_4_ = *(float *)(lVar6 + 0x1bc) * *(float *)(lVar6 + 0x1bc);
          auVar9 = NEON_ext(auVar10,auVar10,8,1);
          if ((*(float *)(lVar6 + 0x24c) * *(float *)(lVar6 + 0x24c) <=
               auVar10._0_4_ + auVar10._4_4_ + auVar9._0_4_) ||
             (auVar9._0_4_ = *(float *)(lVar6 + 0x1c0) * *(float *)(lVar6 + 0x1c0),
             auVar9._4_4_ = *(float *)(lVar6 + 0x1c4) * *(float *)(lVar6 + 0x1c4),
             auVar9._8_4_ = *(float *)(lVar6 + 0x1c8) * *(float *)(lVar6 + 0x1c8),
             auVar9._12_4_ = *(float *)(lVar6 + 0x1cc) * *(float *)(lVar6 + 0x1cc),
             auVar10 = NEON_ext(auVar9,auVar9,8,1),
             *(float *)(lVar6 + 0x250) * *(float *)(lVar6 + 0x250) <=
             auVar9._0_4_ + auVar9._4_4_ + auVar10._0_4_)) {
            *(undefined4 *)(lVar6 + 0xfc) = 0;
            if ((uVar7 & 0xfffffffe) == 4) {
              uVar7 = 5;
            }
            else {
              uVar7 = 0;
              *(undefined4 *)(lVar6 + 0xf8) = 0;
            }
          }
          else {
            *(float *)(lVar6 + 0xfc) = param_1 + *(float *)(lVar6 + 0xfc);
          }
        }
        if (((bVar2 & 1) != 0 || bVar3) ||
           (((uVar7 & 0xfffffffe) != 2 && (*(float *)(lVar6 + 0xfc) <= fVar1)))) {
          uVar8 = 1;
        }
        else {
          if ((*(byte *)(lVar6 + 0xe8) & 3) == 0) {
            if (uVar7 == 2) {
              *(int *)(lVar6 + 0x168) = *(int *)(lVar6 + 0x168) + 2;
              *(undefined8 *)(lVar6 + 0x1b8) = 0;
              *(undefined8 *)(lVar6 + 0x1b0) = 0;
              *(undefined8 *)(lVar6 + 0x1c8) = 0;
              *(undefined8 *)(lVar6 + 0x1c0) = 0;
              iVar5 = *(int *)(param_2 + 0x174);
            }
            else if (uVar7 == 1) {
              *(undefined4 *)(lVar6 + 0xf8) = 3;
            }
            goto LAB_109834f60;
          }
          uVar8 = 2;
        }
        if ((uVar7 & 0xfffffffe) != 4) {
          *(undefined4 *)(lVar6 + 0xf8) = uVar8;
        }
      }
LAB_109834f60:
      lVar4 = lVar4 + 1;
    } while (lVar4 < iVar5);
  }
  return;
}



/* Entry: 109834fa4; end: 1098350ab;  */

/* WARNING: Removing unreachable block (ram,0x000109838c5c) */

void FUN_109834fa4(long param_1,long param_2,int param_3)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  uint uVar6;
  long lVar7;
  long *plVar8;
  long lVar9;
  
  uVar6 = *(uint *)(param_1 + 0x154);
  if (uVar6 == *(uint *)(param_1 + 0x158)) {
    uVar1 = uVar6 << 1;
    if (uVar6 == 0) {
      uVar1 = 1;
    }
    if ((int)uVar6 < (int)uVar1) {
      if (uVar1 == 0) {
        uVar2 = 0;
      }
      else {
        uVar2 = -(ulong)(uVar1 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar1 << 3;
        FUN_1098256f4(uVar2,0x10);
        uVar6 = *(uint *)(param_1 + 0x154);
      }
      if (0 < (int)uVar6) {
        lVar7 = 0;
        do {
          *(undefined8 *)(uVar2 + lVar7) = *(undefined8 *)(*(long *)(param_1 + 0x160) + lVar7);
          lVar7 = lVar7 + 8;
        } while ((ulong)uVar6 << 3 != lVar7);
      }
      if ((*(long *)(param_1 + 0x160) != 0) && (*(char *)(param_1 + 0x168) == '\x01')) {
        FUN_109825740();
        uVar6 = *(uint *)(param_1 + 0x154);
      }
      *(undefined1 *)(param_1 + 0x168) = 1;
      *(ulong *)(param_1 + 0x160) = uVar2;
      *(uint *)(param_1 + 0x158) = uVar1;
    }
  }
  *(long *)(*(long *)(param_1 + 0x160) + (long)(int)uVar6 * 8) = param_2;
  *(uint *)(param_1 + 0x154) = uVar6 + 1;
  if (param_3 == 0) {
    return;
  }
  FUN_109838acc(*(undefined8 *)(param_2 + 0x28),param_2);
  lVar7 = *(long *)(param_2 + 0x30);
  uVar6 = *(uint *)(lVar7 + 0x264);
  uVar2 = (ulong)uVar6;
  if (0 < (int)uVar6) {
    plVar8 = *(long **)(lVar7 + 0x270);
    uVar3 = uVar2;
    do {
      if (*plVar8 == param_2) {
        if ((int)uVar3 != 0) {
          return;
        }
        break;
      }
      uVar3 = uVar3 - 1;
      plVar8 = plVar8 + 1;
    } while (uVar3 != 0);
  }
  if (uVar6 == *(uint *)(lVar7 + 0x268)) {
    uVar1 = uVar6 << 1;
    if (uVar6 == 0) {
      uVar1 = 1;
    }
    if ((int)uVar6 < (int)uVar1) {
      if (uVar1 == 0) {
        uVar3 = 0;
      }
      else {
        uVar3 = -(ulong)(uVar1 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar1 << 3;
        FUN_1098256f4(uVar3,0x10);
        uVar2 = (ulong)*(uint *)(lVar7 + 0x264);
      }
      if (0 < (int)uVar2) {
        lVar9 = 0;
        do {
          *(undefined8 *)(uVar3 + lVar9) = *(undefined8 *)(*(long *)(lVar7 + 0x270) + lVar9);
          lVar9 = lVar9 + 8;
        } while (uVar2 << 3 != lVar9);
      }
      if ((*(long *)(lVar7 + 0x270) != 0) && (*(char *)(lVar7 + 0x278) == '\x01')) {
        FUN_109825740();
        uVar2 = (ulong)*(uint *)(lVar7 + 0x264);
      }
      uVar6 = (uint)uVar2;
      *(undefined1 *)(lVar7 + 0x278) = 1;
      *(ulong *)(lVar7 + 0x270) = uVar3;
      *(uint *)(lVar7 + 0x268) = uVar1;
    }
  }
  *(long *)(*(long *)(lVar7 + 0x270) + (long)(int)uVar6 * 8) = param_2;
  *(uint *)(lVar7 + 0x264) = uVar6 + 1;
  lVar9 = *(long *)(param_2 + 0x28);
  lVar5 = *(long *)(param_2 + 0x30);
  lVar4 = lVar9;
  if (lVar9 != lVar7) {
    lVar4 = lVar5;
    lVar5 = lVar9;
  }
  uVar6 = *(uint *)(lVar4 + 0x14c);
  if (uVar6 == *(uint *)(lVar4 + 0x150)) {
    uVar1 = uVar6 << 1;
    if (uVar6 == 0) {
      uVar1 = 1;
    }
    if ((int)uVar6 < (int)uVar1) {
      if (uVar1 == 0) {
        uVar2 = 0;
      }
      else {
        uVar2 = -(ulong)(uVar1 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar1 << 3;
        FUN_1098256f4(uVar2,0x10);
        uVar6 = *(uint *)(lVar4 + 0x14c);
      }
      if (0 < (int)uVar6) {
        lVar7 = 0;
        do {
          *(undefined8 *)(uVar2 + lVar7) = *(undefined8 *)(*(long *)(lVar4 + 0x158) + lVar7);
          lVar7 = lVar7 + 8;
        } while ((ulong)uVar6 << 3 != lVar7);
      }
      if ((*(long *)(lVar4 + 0x158) != 0) && (*(char *)(lVar4 + 0x160) == '\x01')) {
        FUN_109825740();
        uVar6 = *(uint *)(lVar4 + 0x14c);
      }
      *(undefined1 *)(lVar4 + 0x160) = 1;
      *(ulong *)(lVar4 + 0x158) = uVar2;
      *(uint *)(lVar4 + 0x150) = uVar1;
    }
  }
  *(long *)(*(long *)(lVar4 + 0x158) + (long)(int)uVar6 * 8) = lVar5;
  *(uint *)(lVar4 + 0x14c) = uVar6 + 1;
  *(uint *)(lVar4 + 0x140) = (uint)(0 < (int)(uVar6 + 1));
  return;
}



/* Entry: 1098350ac; end: 1098350eb;  */

void FUN_1098350ac(long param_1,long param_2)

{
  long lStack_18;
  
  lStack_18 = param_2;
  FUN_1098350ec(param_1 + 0x150,&lStack_18);
  func_0x000109838cf8(*(undefined8 *)(lStack_18 + 0x28));
  func_0x000109838cf8(*(undefined8 *)(lStack_18 + 0x30));
  return;
}



/* Entry: 1098350ec; end: 109835147;  */

void FUN_1098350ec(long param_1,long *param_2)

{
  uint uVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  
  uVar1 = *(uint *)(param_1 + 4);
  if (0 < (int)uVar1) {
    uVar2 = 0;
    lVar3 = *(long *)(param_1 + 0x10);
    do {
      if (*(long *)(lVar3 + uVar2 * 8) == *param_2) {
        if ((int)uVar1 <= (int)uVar2) {
          return;
        }
        uVar1 = uVar1 - 1;
        uVar4 = *(undefined8 *)(lVar3 + uVar2 * 8);
        *(undefined8 *)(lVar3 + uVar2 * 8) = *(undefined8 *)(lVar3 + (ulong)uVar1 * 8);
        *(undefined8 *)(*(long *)(param_1 + 0x10) + (ulong)uVar1 * 8) = uVar4;
        *(uint *)(param_1 + 4) = uVar1;
        return;
      }
      uVar2 = uVar2 + 1;
    } while (uVar1 != uVar2);
  }
  return;
}



/* Entry: 109835148; end: 109835217;  */

void FUN_109835148(long param_1,undefined8 param_2)

{
  uint uVar1;
  ulong uVar2;
  uint uVar3;
  long lVar4;
  
  uVar3 = *(uint *)(param_1 + 0x1b4);
  if (uVar3 == *(uint *)(param_1 + 0x1b8)) {
    uVar1 = uVar3 << 1;
    if (uVar3 == 0) {
      uVar1 = 1;
    }
    if ((int)uVar3 < (int)uVar1) {
      if (uVar1 == 0) {
        uVar2 = 0;
      }
      else {
        uVar2 = -(ulong)(uVar1 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar1 << 3;
        FUN_1098256f4(uVar2,0x10);
        uVar3 = *(uint *)(param_1 + 0x1b4);
      }
      if (0 < (int)uVar3) {
        lVar4 = 0;
        do {
          *(undefined8 *)(uVar2 + lVar4) = *(undefined8 *)(*(long *)(param_1 + 0x1c0) + lVar4);
          lVar4 = lVar4 + 8;
        } while ((ulong)uVar3 << 3 != lVar4);
      }
      if ((*(long *)(param_1 + 0x1c0) != 0) && (*(char *)(param_1 + 0x1c8) == '\x01')) {
        FUN_109825740();
        uVar3 = *(uint *)(param_1 + 0x1b4);
      }
      *(undefined1 *)(param_1 + 0x1c8) = 1;
      *(ulong *)(param_1 + 0x1c0) = uVar2;
      *(uint *)(param_1 + 0x1b8) = uVar1;
    }
  }
  *(undefined8 *)(*(long *)(param_1 + 0x1c0) + (long)(int)uVar3 * 8) = param_2;
  *(uint *)(param_1 + 0x1b4) = uVar3 + 1;
  return;
}



/* Entry: 109835218; end: 10983529f;  */

void FUN_109835218(long param_1,long param_2)

{
  uint uVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  
  uVar1 = *(uint *)(param_1 + 0x1b4);
  if (0 < (int)uVar1) {
    uVar2 = 0;
    lVar3 = *(long *)(param_1 + 0x1c0);
    do {
      if (*(long *)(lVar3 + uVar2 * 8) == param_2) {
        if ((int)uVar1 <= (int)uVar2) {
          return;
        }
        uVar1 = uVar1 - 1;
        uVar4 = *(undefined8 *)(lVar3 + uVar2 * 8);
        *(undefined8 *)(lVar3 + uVar2 * 8) = *(undefined8 *)(lVar3 + (ulong)uVar1 * 8);
        *(undefined8 *)(*(long *)(param_1 + 0x1c0) + (ulong)uVar1 * 8) = uVar4;
        *(uint *)(param_1 + 0x1b4) = uVar1;
        return;
      }
      uVar2 = uVar2 + 1;
    } while (uVar1 != uVar2);
  }
  return;
}



/* Entry: 1098352a0; end: 109835583;  */

void FUN_1098352a0(long *param_1,undefined8 param_2)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  long *plVar7;
  long lVar8;
  
  iVar1 = *(int *)((long)param_1 + 0x154);
  uVar2 = *(uint *)((long)param_1 + 0x11c);
  if ((int)uVar2 < iVar1) {
    lVar8 = (long)(int)uVar2;
    if ((int)param_1[0x24] < iVar1) {
      if (iVar1 == 0) {
        lVar4 = 0;
      }
      else {
        lVar4 = (long)iVar1 << 3;
        FUN_1098256f4(lVar4,0x10);
        uVar2 = *(uint *)((long)param_1 + 0x11c);
      }
      if (0 < (int)uVar2) {
        lVar6 = 0;
        do {
          *(undefined8 *)(lVar4 + lVar6) = *(undefined8 *)(param_1[0x25] + lVar6);
          lVar6 = lVar6 + 8;
        } while ((ulong)uVar2 << 3 != lVar6);
      }
      if ((param_1[0x25] != 0) && ((char)param_1[0x26] == '\x01')) {
        FUN_109825740();
      }
      *(undefined1 *)(param_1 + 0x26) = 1;
      param_1[0x25] = lVar4;
      *(int *)(param_1 + 0x24) = iVar1;
    }
    do {
      *(undefined8 *)(param_1[0x25] + lVar8 * 8) = 0;
      lVar8 = lVar8 + 1;
    } while (iVar1 != lVar8);
  }
  *(int *)((long)param_1 + 0x11c) = iVar1;
  plVar5 = param_1;
  (**(code **)(*param_1 + 0xd8))();
  if (0 < (int)plVar5) {
    lVar8 = 0;
    do {
      *(undefined8 *)(param_1[0x25] + lVar8 * 8) = *(undefined8 *)(param_1[0x2c] + lVar8 * 8);
      lVar8 = lVar8 + 1;
      plVar5 = param_1;
      (**(code **)(*param_1 + 0xd8))();
    } while (lVar8 < (int)plVar5);
  }
  iVar1 = *(int *)((long)param_1 + 0x11c) + -1;
  if (iVar1 != 0 && 0 < *(int *)((long)param_1 + 0x11c)) {
    FUN_109837c04(param_1 + 0x23,0,iVar1);
  }
  plVar5 = param_1;
  (**(code **)(*param_1 + 0xd8))();
  if ((int)plVar5 == 0) {
    lVar8 = 0;
  }
  else {
    lVar8 = param_1[0x25];
  }
  lVar4 = param_1[0x27];
  uVar3 = *(undefined4 *)((long)param_1 + 0x11c);
  plVar5 = param_1;
  (**(code **)(*param_1 + 0x28))();
  *(undefined8 *)(lVar4 + 8) = param_2;
  *(long *)(lVar4 + 0x18) = lVar8;
  *(undefined4 *)(lVar4 + 0x20) = uVar3;
  *(long **)(lVar4 + 0x28) = plVar5;
  lVar8 = (long)*(int *)(lVar4 + 0x3c);
  if (*(int *)(lVar4 + 0x3c) < 0) {
    if (*(int *)(lVar4 + 0x40) < 0) {
      if ((*(long *)(lVar4 + 0x48) != 0) && (*(char *)(lVar4 + 0x50) == '\x01')) {
        FUN_109825740();
      }
      *(undefined1 *)(lVar4 + 0x50) = 1;
      *(undefined8 *)(lVar4 + 0x48) = 0;
      *(undefined4 *)(lVar4 + 0x40) = 0;
    }
    do {
      *(undefined8 *)(*(long *)(lVar4 + 0x48) + lVar8 * 8) = 0;
      lVar8 = lVar8 + 1;
    } while ((int)lVar8 != 0);
  }
  *(undefined4 *)(lVar4 + 0x3c) = 0;
  lVar8 = (long)*(int *)(lVar4 + 0x5c);
  if (*(int *)(lVar4 + 0x5c) < 0) {
    if (*(int *)(lVar4 + 0x60) < 0) {
      if ((*(long *)(lVar4 + 0x68) != 0) && (*(char *)(lVar4 + 0x70) == '\x01')) {
        FUN_109825740();
      }
      *(undefined1 *)(lVar4 + 0x70) = 1;
      *(undefined8 *)(lVar4 + 0x68) = 0;
      *(undefined4 *)(lVar4 + 0x60) = 0;
    }
    do {
      *(undefined8 *)(*(long *)(lVar4 + 0x68) + lVar8 * 8) = 0;
      lVar8 = lVar8 + 1;
    } while ((int)lVar8 != 0);
  }
  *(undefined4 *)(lVar4 + 0x5c) = 0;
  lVar8 = (long)*(int *)(lVar4 + 0x7c);
  if (*(int *)(lVar4 + 0x7c) < 0) {
    if (*(int *)(lVar4 + 0x80) < 0) {
      if ((*(long *)(lVar4 + 0x88) != 0) && (*(char *)(lVar4 + 0x90) == '\x01')) {
        FUN_109825740();
      }
      *(undefined1 *)(lVar4 + 0x90) = 1;
      *(undefined8 *)(lVar4 + 0x88) = 0;
      *(undefined4 *)(lVar4 + 0x80) = 0;
    }
    do {
      *(undefined8 *)(*(long *)(lVar4 + 0x88) + lVar8 * 8) = 0;
      lVar8 = lVar8 + 1;
    } while ((int)lVar8 != 0);
  }
  *(undefined4 *)(lVar4 + 0x7c) = 0;
  plVar7 = (long *)param_1[0x28];
  uVar3 = *(undefined4 *)((long)param_1 + 0xc);
  plVar5 = (long *)param_1[5];
  (**(code **)(*plVar5 + 0x48))();
  (**(code **)(*plVar7 + 0x10))(plVar7,uVar3,plVar5);
  lVar8 = param_1[0x29];
  lVar4 = param_1[5];
  lVar6 = param_1[0x27];
  FUN_109813e98(lVar8,lVar4,param_1);
  func_0x00010981420c(lVar8,lVar4,param_1,lVar6);
  FUN_109835584(param_1[0x27]);
                    /* WARNING: Could not recover jumptable at 0x000109835580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)param_1[0x28] + 0x20))((long *)param_1[0x28],param_2,param_1[0xe]);
  return;
}



/* Entry: 109835584; end: 1098356df;  */

void FUN_109835584(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  
  if (*(int *)(param_1 + 0x3c) == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined8 *)(param_1 + 0x48);
  }
  if (*(int *)(param_1 + 0x5c) == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + 0x68);
  }
  if (*(int *)(param_1 + 0x7c) == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = *(undefined8 *)(param_1 + 0x88);
  }
  (**(code **)(**(long **)(param_1 + 0x10) + 0x18))
            (*(long **)(param_1 + 0x10),uVar1,*(int *)(param_1 + 0x3c),uVar2,
             *(int *)(param_1 + 0x5c),uVar3,*(int *)(param_1 + 0x7c),*(undefined8 *)(param_1 + 8),
             *(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x30));
  lVar4 = (long)*(int *)(param_1 + 0x3c);
  if (*(int *)(param_1 + 0x3c) < 0) {
    if (*(int *)(param_1 + 0x40) < 0) {
      if ((*(long *)(param_1 + 0x48) != 0) && (*(char *)(param_1 + 0x50) == '\x01')) {
        FUN_109825740();
      }
      *(undefined1 *)(param_1 + 0x50) = 1;
      *(undefined8 *)(param_1 + 0x48) = 0;
      *(undefined4 *)(param_1 + 0x40) = 0;
    }
    do {
      *(undefined8 *)(*(long *)(param_1 + 0x48) + lVar4 * 8) = 0;
      lVar4 = lVar4 + 1;
    } while ((int)lVar4 != 0);
  }
  *(undefined4 *)(param_1 + 0x3c) = 0;
  lVar4 = (long)*(int *)(param_1 + 0x5c);
  if (*(int *)(param_1 + 0x5c) < 0) {
    if (*(int *)(param_1 + 0x60) < 0) {
      if ((*(long *)(param_1 + 0x68) != 0) && (*(char *)(param_1 + 0x70) == '\x01')) {
        FUN_109825740();
      }
      *(undefined1 *)(param_1 + 0x70) = 1;
      *(undefined8 *)(param_1 + 0x68) = 0;
      *(undefined4 *)(param_1 + 0x60) = 0;
    }
    do {
      *(undefined8 *)(*(long *)(param_1 + 0x68) + lVar4 * 8) = 0;
      lVar4 = lVar4 + 1;
    } while ((int)lVar4 != 0);
  }
  *(undefined4 *)(param_1 + 0x5c) = 0;
  lVar4 = (long)*(int *)(param_1 + 0x7c);
  if (*(int *)(param_1 + 0x7c) < 0) {
    if (*(int *)(param_1 + 0x80) < 0) {
      if ((*(long *)(param_1 + 0x88) != 0) && (*(char *)(param_1 + 0x90) == '\x01')) {
        FUN_109825740();
      }
      *(undefined1 *)(param_1 + 0x90) = 1;
      *(undefined8 *)(param_1 + 0x88) = 0;
      *(undefined4 *)(param_1 + 0x80) = 0;
    }
    do {
      *(undefined8 *)(*(long *)(param_1 + 0x88) + lVar4 * 8) = 0;
      lVar4 = lVar4 + 1;
    } while ((int)lVar4 != 0);
  }
  *(undefined4 *)(param_1 + 0x7c) = 0;
  return;
}



/* Entry: 1098356e0; end: 1098357fb;  */

void FUN_1098356e0(long param_1)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  (**(code **)(**(long **)(param_1 + 0x148) + 0x10))
            (*(long **)(param_1 + 0x148),param_1,*(undefined8 *)(param_1 + 0x28));
  iVar2 = *(int *)(param_1 + 0x1dc);
  if (0 < iVar2) {
    lVar5 = 0;
    do {
      lVar4 = *(long *)(*(long *)(param_1 + 0x1e8) + lVar5 * 8);
      lVar3 = *(long *)(lVar4 + 0x350);
      if (((lVar3 != 0) &&
          (lVar4 = *(long *)(lVar4 + 0x358), (*(byte *)(lVar3 + 0xe8) & 3) == 0 && lVar4 != 0)) &&
         ((*(byte *)(lVar4 + 0xe8) & 3) == 0)) {
        FUN_109813c2c(*(long *)(param_1 + 0x148) + 8,*(undefined4 *)(lVar3 + 0xec),
                      *(undefined4 *)(lVar4 + 0xec));
        iVar2 = *(int *)(param_1 + 0x1dc);
      }
      lVar5 = lVar5 + 1;
    } while (lVar5 < iVar2);
  }
  uVar1 = *(uint *)(param_1 + 0x154);
  if (0 < (int)uVar1) {
    lVar5 = 0;
    do {
      lVar3 = *(long *)(*(long *)(param_1 + 0x160) + lVar5);
      if (((*(char *)(lVar3 + 0x1c) == '\x01') &&
          ((*(byte *)(*(long *)(lVar3 + 0x28) + 0xe8) & 3) == 0)) &&
         ((*(byte *)(*(long *)(lVar3 + 0x30) + 0xe8) & 3) == 0)) {
        FUN_109813c2c(*(long *)(param_1 + 0x148) + 8,*(undefined4 *)(*(long *)(lVar3 + 0x28) + 0xec)
                      ,*(undefined4 *)(*(long *)(lVar3 + 0x30) + 0xec));
      }
      lVar5 = lVar5 + 8;
    } while ((ulong)uVar1 * 8 - lVar5 != 0);
  }
                    /* WARNING: Could not recover jumptable at 0x0001098357f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0x148) + 0x18))(*(long **)(param_1 + 0x148),param_1);
  return;
}



/* Entry: 1098357fc; end: 1098357ff;  */

void FUN_1098357fc(void)

{
  return;
}



/* Entry: 109835800; end: 109835d03;  */

void FUN_109835800(undefined8 param_1,uint *param_2)

{
  unkbyte9 *pVar1;
  uint *puVar2;
  uint uVar3;
  float fVar4;
  float fVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  float fVar8;
  float fVar9;
  float fVar10;
  uint *puVar11;
  long *plVar12;
  long *plVar13;
  uint *puVar14;
  uint uVar15;
  long lVar16;
  uint *puVar17;
  uint *puVar18;
  undefined8 unaff_x21;
  ulong uVar19;
  float *unaff_x22;
  undefined8 *puVar20;
  uint *puVar21;
  long *unaff_x23;
  ulong uVar22;
  ulong unaff_x26;
  long lVar23;
  long unaff_x27;
  long lVar24;
  undefined8 unaff_x28;
  undefined1 (*pauVar25) [16];
  undefined4 uVar26;
  float fVar27;
  undefined8 uVar28;
  undefined8 uVar29;
  undefined1 auVar30 [12];
  undefined1 auVar32 [16];
  float fVar33;
  float fVar34;
  float fVar39;
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar40 [12];
  undefined1 auVar41 [16];
  undefined1 uVar42;
  undefined1 uVar43;
  undefined1 uVar44;
  undefined1 uVar45;
  undefined1 uVar46;
  undefined1 uVar47;
  undefined1 uVar48;
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined8 unaff_d9;
  undefined8 uVar55;
  undefined8 unaff_d10;
  undefined8 unaff_d11;
  undefined1 auVar56 [16];
  float fVar57;
  float fVar58;
  ulong uStack_510;
  undefined8 uStack_508;
  undefined8 uStack_500;
  undefined8 uStack_4f8;
  undefined8 uStack_4f0;
  undefined8 uStack_4e8;
  undefined8 uStack_4d0;
  ulong uStack_4c8;
  float fStack_4a0;
  float fStack_49c;
  float fStack_498;
  undefined **ppuStack_490;
  ulong uStack_488;
  undefined8 uStack_480;
  undefined8 uStack_478;
  undefined8 uStack_470;
  undefined4 uStack_468;
  long lStack_464;
  undefined8 uStack_45c;
  undefined4 uStack_454;
  uint uStack_450;
  undefined4 uStack_44c;
  undefined **ppuStack_440;
  undefined1 uStack_438;
  undefined1 uStack_437;
  undefined1 uStack_436;
  undefined1 uStack_435;
  undefined1 uStack_434;
  undefined1 uStack_433;
  undefined1 uStack_432;
  undefined1 uStack_431;
  undefined4 uStack_430;
  undefined8 uStack_420;
  undefined8 uStack_418;
  undefined8 uStack_3e0;
  uint *puStack_3d8;
  uint uStack_3d0;
  long *plStack_3c8;
  undefined8 uStack_3c0;
  long lStack_3b0;
  undefined8 uStack_3a0;
  undefined8 uStack_398;
  undefined8 uStack_390;
  undefined8 uStack_388;
  undefined8 uStack_380;
  long lStack_378;
  ulong uStack_370;
  ulong uStack_368;
  undefined8 uStack_360;
  long *plStack_358;
  float *pfStack_350;
  undefined8 uStack_348;
  uint *puStack_340;
  uint *puStack_338;
  undefined1 *puStack_330;
  code *pcStack_328;
  ulong uStack_318;
  undefined8 uStack_310;
  undefined8 uStack_308;
  undefined8 uStack_300;
  float fStack_2f8;
  ulong uStack_2f0;
  undefined8 uStack_2e8;
  ulong uStack_2e0;
  long lStack_2d8;
  uint *puStack_2c8;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  ulong uStack_2a8;
  ulong uStack_280;
  undefined8 uStack_278;
  float fStack_270;
  undefined8 uStack_26c;
  undefined8 uStack_264;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined4 uStack_218;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined1 auStack_1b0 [48];
  float fStack_180;
  float fStack_17c;
  float fStack_178;
  undefined **ppuStack_170;
  undefined4 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined4 uStack_148;
  long lStack_144;
  undefined8 uStack_13c;
  undefined4 uStack_134;
  uint uStack_130;
  undefined4 uStack_12c;
  undefined **ppuStack_120;
  undefined4 uStack_118;
  undefined8 uStack_114;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  ulong uStack_e0;
  undefined8 uStack_d8;
  long lStack_c0;
  uint *puStack_b8;
  uint uStack_b0;
  long *plStack_a8;
  undefined8 uStack_a0;
  long lStack_90;
  undefined1 auVar31 [16];
  
  lStack_90 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if (0 < (int)param_2[0x77]) {
    lVar16 = 0;
    do {
      (**(code **)(**(long **)(param_2 + 10) + 0x20))
                (*(long **)(param_2 + 10),*(undefined8 *)(*(long *)(param_2 + 0x7a) + lVar16 * 8));
      lVar16 = lVar16 + 1;
    } while (lVar16 < (int)param_2[0x77]);
  }
  puVar17 = param_2 + 0x77;
  puVar11 = *(uint **)(param_2 + 0x7a);
  if ((puVar11 != (uint *)0x0) && ((char)param_2[0x7c] == '\x01')) {
    FUN_109825740();
  }
  *(undefined1 *)(param_2 + 0x7c) = 1;
  param_2[0x7a] = 0;
  param_2[0x7b] = 0;
  puVar17[0] = 0;
  puVar17[1] = 0;
  uVar22 = (ulong)param_2[0x5d];
  if (0 < (int)param_2[0x5d]) {
    unaff_x26 = 0;
    unaff_x27 = *(long *)(param_2 + 0x60);
    unaff_x28 = 0x3f800000;
    unaff_x21 = 100;
    unaff_d9 = NEON_fmov(0x3f800000,4);
    unaff_d10 = 0x3f800000;
    unaff_d11 = 0;
    puStack_2c8 = puVar17;
    do {
      puVar17 = *(uint **)(unaff_x27 + unaff_x26 * 8);
      puVar17[0x4d] = 0x3f800000;
      if ((6 < puVar17[0x3e] || (1 << (ulong)(puVar17[0x3e] & 0x1f) & 100U) == 0) &&
         ((puVar17[0x3a] & 3) == 0)) {
        puVar11 = puVar17 + 4;
        FUN_10981d990(puVar11,puVar17 + 0x6c,puVar17 + 0x70,auStack_1b0);
        if (((char)param_2[0x10] == '\x01') &&
           (((fVar27 = (float)puVar17[0x4f] * (float)puVar17[0x4f], fVar27 != 0.0 &&
             (auVar38._0_4_ =
                   (fStack_180 - (float)puVar17[0x10]) * (fStack_180 - (float)puVar17[0x10]),
             auVar38._4_4_ =
                  (fStack_17c - (float)puVar17[0x11]) * (fStack_17c - (float)puVar17[0x11]),
             auVar38._8_4_ =
                  (fStack_178 - (float)puVar17[0x12]) * (fStack_178 - (float)puVar17[0x12]),
             auVar38._12_4_ = 0, auVar35 = NEON_ext(auVar38,auVar38,8,1),
             fVar27 < auVar38._0_4_ + auVar38._4_4_ + auVar35._0_4_)) &&
            (*(int *)(*(long *)(puVar17 + 0x34) + 8) < 0x14)))) {
          iRam00000001137365a8 = iRam00000001137365a8 + 1;
          plVar13 = *(long **)(param_2 + 0x1a);
          (**(code **)(*plVar13 + 0x48))();
          uStack_a0 = *(undefined8 *)(param_2 + 10);
          uStack_118 = 0x3f800000;
          uStack_100 = *(undefined8 *)(puVar17 + 0x10);
          uStack_f8 = *(undefined8 *)(puVar17 + 0x12);
          ppuStack_120 = &PTR_FUN_110b147e0;
          lStack_c0 = 0;
          uStack_130 = puVar17[0x4e];
          uStack_160 = 0;
          ppuStack_170 = &PTR_FUN_110b13f68;
          uStack_168 = 8;
          uStack_158 = 0xffffffffffffffff;
          uStack_148 = 0x3f800000;
          uStack_13c = 0;
          uStack_134 = 0;
          lStack_144 = (ulong)uStack_130 << 0x20;
          uStack_12c = 0;
          uStack_b0 = param_2[0x15];
          uStack_114 = *(undefined8 *)(*(long *)(puVar17 + 0x32) + 8);
          uStack_1f0 = *(undefined8 *)(puVar17 + 4);
          uStack_1e8 = *(undefined8 *)(puVar17 + 6);
          uStack_1e0 = *(undefined8 *)(puVar17 + 8);
          uStack_1d8 = *(undefined8 *)(puVar17 + 10);
          uStack_1d0 = *(undefined8 *)(puVar17 + 0xc);
          uStack_1c8 = *(undefined8 *)(puVar17 + 0xe);
          puVar11 = param_2;
          uStack_150 = unaff_d9;
          puStack_b8 = puVar17;
          plStack_a8 = plVar13;
          FUN_10980928c(param_2,&ppuStack_170,puVar17 + 4,&uStack_1f0,&ppuStack_120);
          if (*(float *)((ulong)&ppuStack_120 | 8) < 1.0) {
            lStack_2d8 = 0;
            uStack_300 = CONCAT44(fStack_17c,fStack_180);
            fStack_2f8 = fStack_178;
            uStack_310 = *(undefined8 *)(puVar17 + 0x10);
            uStack_308 = *(undefined8 *)(puVar17 + 0x12);
            uStack_2e8 = uStack_d8;
            uStack_2f0 = uStack_e0;
            plVar13 = *(long **)(param_2 + 10);
            uStack_2e0 = (ulong)(uint)*(float *)((ulong)&ppuStack_120 | 8);
            (**(code **)(*plVar13 + 0x18))(plVar13,puVar17,lStack_c0);
            uVar15 = param_2[0x77];
            if (uVar15 == param_2[0x78]) {
              uVar3 = uVar15 << 1;
              if (uVar15 == 0) {
                uVar3 = 1;
              }
              uVar19 = (ulong)uVar3;
              if ((int)uVar15 < (int)uVar3) {
                uStack_318 = uVar19;
                if (uVar3 == 0) {
                  uVar19 = 0;
                }
                else {
                  uVar19 = -(ulong)(uVar3 >> 0x1f) & 0xfffffff800000000 | uVar19 << 3;
                  FUN_1098256f4(uVar19,0x10);
                  uVar15 = *puStack_2c8;
                }
                if (0 < (int)uVar15) {
                  lVar16 = 0;
                  do {
                    *(undefined8 *)(uVar19 + lVar16) =
                         *(undefined8 *)(*(long *)(param_2 + 0x7a) + lVar16);
                    lVar16 = lVar16 + 8;
                  } while ((ulong)uVar15 << 3 != lVar16);
                }
                if ((*(long *)(param_2 + 0x7a) != 0) && ((char)param_2[0x7c] == '\x01')) {
                  FUN_109825740();
                  uVar15 = *puStack_2c8;
                }
                *(undefined1 *)(param_2 + 0x7c) = 1;
                *(ulong *)(param_2 + 0x7a) = uVar19;
                param_2[0x78] = (uint)uStack_318;
              }
            }
            fVar33 = ((float)uStack_300 - (float)uStack_310) * (float)uStack_2e0;
            fVar39 = (uStack_300._4_4_ - uStack_310._4_4_) * (float)uStack_2e0;
            uStack_2e0._0_4_ = (fStack_2f8 - (float)uStack_308) * (float)uStack_2e0;
            auVar30._0_8_ = uStack_2f0 ^ 0x8000000080000000;
            auVar30[8] = (undefined1)uStack_2e8;
            auVar30[9] = (undefined1)((ulong)uStack_2e8 >> 8);
            auVar30[10] = (undefined1)((ulong)uStack_2e8 >> 0x10);
            auVar30[0xb] = (byte)((ulong)uStack_2e8 >> 0x18) ^ 0x80;
            auVar31[0xc] = (undefined1)((ulong)uStack_2e8 >> 0x20);
            auVar31._0_12_ = auVar30;
            auVar31[0xd] = (undefined1)((ulong)uStack_2e8 >> 0x28);
            auVar31[0xe] = (undefined1)((ulong)uStack_2e8 >> 0x30);
            auVar31[0xf] = (byte)((ulong)uStack_2e8 >> 0x38) ^ 0x80;
            *(long **)(*(long *)(param_2 + 0x7a) + (long)(int)uVar15 * 8) = plVar13;
            auVar32._0_4_ = (float)auVar30._0_8_ * fVar33;
            auVar32._4_4_ = (float)(auVar30._0_8_ >> 0x20) * fVar39;
            auVar32._8_4_ = auVar30._8_4_ * (float)uStack_2e0;
            auVar32._12_4_ = auVar31._12_4_ * 0.0;
            param_2[0x77] = uVar15 + 1;
            unaff_x22 = (float *)(puVar17 + 0x10);
            fVar33 = *unaff_x22 + fVar33;
            fVar39 = (float)puVar17[0x11] + fVar39;
            fVar57 = (float)puVar17[0x12] + (float)uStack_2e0;
            fVar58 = (float)puVar17[0x13] + 0.0;
            fVar10 = *(float *)(lStack_c0 + 0x10);
            fVar9 = *(float *)(lStack_c0 + 0x20);
            pVar1 = (unkbyte9 *)(lStack_c0 + 0x30);
            uVar28 = *(undefined8 *)(lStack_c0 + 0x38);
            uVar42 = (undefined1)((ulong)uVar28 >> 8);
            uVar43 = (undefined1)((ulong)uVar28 >> 0x10);
            uVar44 = (undefined1)((ulong)uVar28 >> 0x18);
            uVar45 = (undefined1)((ulong)uVar28 >> 0x20);
            uVar46 = (undefined1)((ulong)uVar28 >> 0x28);
            uVar47 = (undefined1)((ulong)uVar28 >> 0x30);
            uVar48 = (undefined1)((ulong)uVar28 >> 0x38);
            fVar34 = *(float *)(lStack_c0 + 0x40);
            fVar4 = *(float *)(lStack_c0 + 0x44);
            fVar5 = *(float *)(lStack_c0 + 0x48);
            fVar8 = (float)((ulong)*(undefined8 *)pVar1 >> 0x20);
            auVar35[9] = uVar42;
            auVar35._0_9_ = *pVar1;
            auVar35[10] = uVar43;
            auVar35[0xb] = uVar44;
            auVar35[0xc] = uVar45;
            auVar35[0xd] = uVar46;
            auVar35[0xe] = uVar47;
            auVar35[0xf] = uVar48;
            auVar50[9] = uVar42;
            auVar50._0_9_ = *pVar1;
            auVar50[10] = uVar43;
            auVar50[0xb] = uVar44;
            auVar50[0xc] = uVar45;
            auVar50[0xd] = uVar46;
            auVar50[0xe] = uVar47;
            auVar50[0xf] = uVar48;
            auVar38 = NEON_ext(auVar35,auVar50,8,1);
            auVar56._4_4_ = fVar9;
            auVar56._0_4_ = fVar10;
            auVar56._8_4_ = *(undefined4 *)(lStack_c0 + 0x18);
            auVar56._12_4_ = *(undefined4 *)(lStack_c0 + 0x28);
            auVar54._4_4_ = fVar9;
            auVar54._0_4_ = fVar10;
            auVar54._8_4_ = *(undefined4 *)(lStack_c0 + 0x18);
            auVar54._12_4_ = *(undefined4 *)(lStack_c0 + 0x28);
            auVar56 = NEON_ext(auVar56,auVar54,8,1);
            fVar27 = (float)*(undefined8 *)pVar1;
            auVar49._0_4_ = fVar10 * -fVar34;
            auVar49._4_4_ = fVar9 * -fVar4;
            auVar49._8_4_ = fVar27 * -fVar5;
            auVar49._12_4_ = -*(float *)(lStack_c0 + 0x4c) * 0.0;
            auVar41._0_4_ = *(float *)(lStack_c0 + 0x14) * -fVar34;
            auVar41._4_4_ = *(float *)(lStack_c0 + 0x24) * -fVar4;
            auVar41._8_4_ = fVar8 * -fVar5;
            auVar41._12_4_ = -*(float *)(lStack_c0 + 0x4c) * 0.0;
            auVar50 = NEON_ext(auVar49,auVar49,8,1);
            auVar35 = NEON_ext(auVar41,auVar41,8,1);
            fVar34 = auVar56._0_4_ * -fVar34;
            fVar4 = auVar56._4_4_ * -fVar4;
            uVar42 = (undefined1)((uint)fVar4 >> 8);
            uVar43 = (undefined1)((uint)fVar4 >> 0x10);
            uVar44 = (undefined1)((uint)fVar4 >> 0x18);
            fVar5 = auVar38._0_4_ * -fVar5;
            uVar45 = (undefined1)((uint)fVar5 >> 8);
            uVar46 = (undefined1)((uint)fVar5 >> 0x10);
            uVar47 = (undefined1)((uint)fVar5 >> 0x18);
            auVar51[4] = SUB41(fVar4,0);
            auVar51._0_4_ = fVar34;
            auVar51[5] = uVar42;
            auVar51[6] = uVar43;
            auVar51[7] = uVar44;
            auVar51[8] = SUB41(fVar5,0);
            auVar51[9] = uVar45;
            auVar51[10] = uVar46;
            auVar51[0xb] = uVar47;
            auVar51._12_4_ = 0;
            auVar53[4] = SUB41(fVar4,0);
            auVar53._0_4_ = fVar34;
            auVar53[5] = uVar42;
            auVar53[6] = uVar43;
            auVar53[7] = uVar44;
            auVar53[8] = SUB41(fVar5,0);
            auVar53[9] = uVar45;
            auVar53[10] = uVar46;
            auVar53[0xb] = uVar47;
            auVar53._12_4_ = 0;
            auVar51 = NEON_ext(auVar51,auVar53,8,1);
            auVar52._0_4_ = fVar33 * fVar10;
            auVar52._4_4_ = fVar39 * fVar9;
            auVar52._8_4_ = fVar57 * fVar27;
            auVar52._12_4_ = fVar58 * 0.0;
            auVar36._0_4_ = fVar33 * *(float *)(lStack_c0 + 0x14);
            auVar36._4_4_ = fVar39 * *(float *)(lStack_c0 + 0x24);
            auVar36._8_4_ = fVar57 * fVar8;
            auVar36._12_4_ = fVar58 * 0.0;
            lStack_2d8 = CONCAT44(fVar58,fVar57);
            uStack_2e0 = CONCAT44(fVar39,fVar33);
            fVar33 = fVar33 * auVar56._0_4_;
            fVar39 = fVar39 * auVar56._4_4_;
            fVar57 = fVar57 * auVar38._0_4_;
            auVar56 = NEON_ext(auVar52,auVar52,8,1);
            auVar54 = NEON_ext(auVar36,auVar36,8,1);
            auVar6._4_4_ = fVar39;
            auVar6._0_4_ = fVar33;
            auVar6._8_4_ = fVar57;
            auVar6._12_4_ = 0;
            auVar7._4_4_ = fVar39;
            auVar7._0_4_ = fVar33;
            auVar7._8_4_ = fVar57;
            auVar7._12_4_ = 0;
            auVar53 = NEON_ext(auVar6,auVar7,8,1);
            uStack_2c0 = 0;
            uStack_2b8 = 0;
            auVar38 = NEON_ext(auVar32,auVar32,8,1);
            uStack_2b0 = CONCAT44(auVar36._0_4_ + auVar36._4_4_ + auVar54._0_4_ +
                                  auVar41._0_4_ + auVar41._4_4_ + auVar35._0_4_,
                                  auVar52._0_4_ + auVar52._4_4_ + auVar56._0_4_ +
                                  auVar49._0_4_ + auVar49._4_4_ + auVar50._0_4_);
            uStack_2a8 = (ulong)(uint)(fVar34 + fVar4 + auVar51._0_4_ + auVar51._4_4_ +
                                      fVar33 + fVar39 + auVar53._0_4_ + auVar53._4_4_);
            uStack_278 = uStack_d8;
            uStack_280 = uStack_e0;
            fStack_270 = auVar32._0_4_ + auVar32._4_4_ + auVar38._0_4_;
            uStack_264 = 0;
            uStack_26c = 0;
            uStack_240 = 0;
            uStack_248 = 0;
            uStack_230 = 0;
            uStack_238 = 0;
            uStack_220 = 0;
            uStack_228 = 0;
            uStack_218 = 0;
            plVar12 = plVar13;
            FUN_109822764(plVar13,&uStack_2c0,1);
            unaff_x23 = plVar13 + (long)(int)plVar12 * 0x1a;
            *(undefined4 *)(unaff_x23 + 0xe) = 0;
            puVar11 = puVar17;
            uVar26 = (*(code *)PTR_DAT_1132e0490)(puVar17,lStack_c0);
            *(undefined4 *)((long)unaff_x23 + 100) = uVar26;
            lVar16 = *(long *)unaff_x22;
            lVar23 = *(long *)(puVar17 + 0x12);
            unaff_x23[7] = lStack_2d8;
            unaff_x23[6] = uStack_2e0;
            unaff_x23[9] = lVar23;
            unaff_x23[8] = lVar16;
          }
        }
      }
      unaff_x26 = unaff_x26 + 1;
    } while (unaff_x26 != uVar22);
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_90) {
    return;
  }
  ___stack_chk_fail();
  uVar28 = __Unwind_Resume();
  uStack_360 = 1;
  pcStack_328 = FUN_109835d04;
  lStack_3b0 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar19 = (ulong)puVar11[0x5d];
  puVar14 = puVar11;
  uStack_3a0 = unaff_d11;
  uStack_398 = unaff_d10;
  uStack_390 = unaff_d9;
  uStack_388 = param_1;
  uStack_380 = unaff_x28;
  lStack_378 = unaff_x27;
  uStack_370 = unaff_x26;
  uStack_368 = uVar22;
  plStack_358 = unaff_x23;
  pfStack_350 = unaff_x22;
  uStack_348 = unaff_x21;
  puStack_340 = puVar17;
  puStack_338 = param_2;
  puStack_330 = &stack0xfffffffffffffff0;
  if (0 < (int)puVar11[0x5d]) {
    uVar55 = NEON_fmov(0x3f800000,4);
    puVar20 = *(undefined8 **)(puVar11 + 0x60);
    do {
      puVar17 = (uint *)*puVar20;
      puVar17[0x4d] = 0x3f800000;
      if ((6 < puVar17[0x3e] || (1 << (ulong)(puVar17[0x3e] & 0x1f) & 100U) == 0) &&
         ((puVar17[0x3a] & 3) == 0)) {
        FUN_10981d990(uVar28,puVar17 + 4,puVar17 + 0x6c,puVar17 + 0x70,&uStack_4d0);
        if (((char)puVar11[0x10] == '\x01') &&
           (((fVar27 = (float)puVar17[0x4f] * (float)puVar17[0x4f], fVar27 != 0.0 &&
             (auVar37._0_4_ =
                   (fStack_4a0 - (float)puVar17[0x10]) * (fStack_4a0 - (float)puVar17[0x10]),
             auVar37._4_4_ =
                  (fStack_49c - (float)puVar17[0x11]) * (fStack_49c - (float)puVar17[0x11]),
             auVar37._8_4_ =
                  (fStack_498 - (float)puVar17[0x12]) * (fStack_498 - (float)puVar17[0x12]),
             auVar37._12_4_ = 0, auVar38 = NEON_ext(auVar37,auVar37,8,1),
             fVar27 < auVar37._0_4_ + auVar37._4_4_ + auVar38._0_4_)) &&
            (*(int *)(*(long *)(puVar17 + 0x34) + 8) < 0x14)))) {
          iRam00000001137365a8 = iRam00000001137365a8 + 1;
          plVar13 = *(long **)(puVar11 + 0x1a);
          (**(code **)(*plVar13 + 0x48))();
          uStack_3c0 = *(undefined8 *)(puVar11 + 10);
          uStack_438 = 0;
          uStack_437 = 0;
          uStack_436 = 0x80;
          uStack_435 = 0x3f;
          uStack_420 = *(undefined8 *)(puVar17 + 0x10);
          uStack_418 = *(undefined8 *)(puVar17 + 0x12);
          ppuStack_440 = &PTR_FUN_110b147e0;
          uStack_3e0 = 0;
          uStack_450 = puVar17[0x4e];
          uStack_480 = 0;
          ppuStack_490 = &PTR_FUN_110b13f68;
          uStack_488 = CONCAT44(uStack_488._4_4_,8);
          uStack_478 = 0xffffffffffffffff;
          uStack_468 = 0x3f800000;
          uStack_45c = 0;
          uStack_454 = 0;
          lStack_464 = (ulong)uStack_450 << 0x20;
          uStack_44c = 0;
          uStack_3d0 = puVar11[0x15];
          uVar29 = *(undefined8 *)(*(long *)(puVar17 + 0x32) + 8);
          uStack_434 = (undefined1)uVar29;
          uStack_433 = (undefined1)((ulong)uVar29 >> 8);
          uStack_432 = (undefined1)((ulong)uVar29 >> 0x10);
          uStack_431 = (undefined1)((ulong)uVar29 >> 0x18);
          uStack_430 = (undefined4)((ulong)uVar29 >> 0x20);
          uStack_510 = *(ulong *)(puVar17 + 4);
          uStack_508 = *(ulong *)(puVar17 + 6);
          uStack_500 = *(undefined8 *)(puVar17 + 8);
          uStack_4f8 = *(undefined8 *)(puVar17 + 10);
          uStack_4f0 = *(undefined8 *)(puVar17 + 0xc);
          uStack_4e8 = *(undefined8 *)(puVar17 + 0xe);
          uStack_470 = uVar55;
          puStack_3d8 = puVar17;
          plStack_3c8 = plVar13;
          FUN_10980928c(puVar11,&ppuStack_490,puVar17 + 4,&uStack_510,&ppuStack_440);
          if (*(float *)((ulong)&ppuStack_440 | 8) < 1.0) {
            puVar17[0x4d] = (uint)*(float *)((ulong)&ppuStack_440 | 8);
            FUN_10981d990(puVar17 + 4,puVar17 + 0x6c,puVar17 + 0x70,&uStack_4d0);
            puVar17[0x4d] = 0;
          }
        }
        FUN_109838284(puVar17,&uStack_4d0);
        puVar14 = puVar17;
      }
      uVar19 = uVar19 - 1;
      puVar20 = puVar20 + 1;
    } while (uVar19 != 0);
  }
  if ((*(char *)((long)puVar11 + 0x1ab) == '\x01') && (uVar15 = puVar11[0x77], 0 < (int)uVar15)) {
    lVar16 = 0;
    do {
      lVar23 = *(long *)(*(long *)(puVar11 + 0x7a) + lVar16 * 8);
      puVar18 = *(uint **)(lVar23 + 0x350);
      puVar17 = (uint *)0x0;
      if ((puVar18[0x46] & 2) != 0) {
        puVar17 = puVar18;
      }
      puVar21 = *(uint **)(lVar23 + 0x358);
      puVar2 = (uint *)0x0;
      if ((puVar21[0x46] & 2) != 0) {
        puVar2 = puVar21;
      }
      if (0 < *(int *)(lVar23 + 0x360)) {
        lVar24 = 0;
        pauVar25 = (undefined1 (*) [16])(lVar23 + 0x50);
        do {
          puVar14 = puVar17;
          fVar27 = (float)(*(code *)PTR_DAT_1132e0488)(puVar17,puVar2);
          if ((0.0 < fVar27) && (fVar34 = *(float *)(pauVar25[4] + 4), fVar34 != 0.0)) {
            auVar38 = *pauVar25;
            auVar40._0_8_ = auVar38._0_8_ ^ 0x8000000080000000;
            auVar40[8] = auVar38[8];
            auVar40[9] = auVar38[9];
            auVar40[10] = auVar38[10];
            auVar40[0xb] = auVar38[0xb] ^ 0x80;
            ppuStack_440 = (undefined **)
                           CONCAT44((float)(auVar40._0_8_ >> 0x20) * fVar34 * fVar27,
                                    (float)auVar40._0_8_ * fVar34 * fVar27);
            fVar27 = auVar40._8_4_ * fVar34 * fVar27;
            uStack_438 = SUB41(fVar27,0);
            uStack_437 = (undefined1)((uint)fVar27 >> 8);
            uStack_436 = (undefined1)((uint)fVar27 >> 0x10);
            uStack_435 = (undefined1)((uint)fVar27 >> 0x18);
            uStack_434 = 0;
            uStack_433 = 0;
            uStack_432 = 0;
            uStack_431 = 0;
            ppuStack_490 = (undefined **)
                           CONCAT44(*(float *)(pauVar25[-1] + 4) - (float)puVar18[0x11],
                                    *(float *)pauVar25[-1] - (float)puVar18[0x10]);
            uStack_488 = (ulong)(uint)(*(float *)(pauVar25[-1] + 8) - (float)puVar18[0x12]);
            auVar38 = *(undefined1 (*) [16])(puVar21 + 0x10);
            uStack_4d0 = CONCAT44(*(float *)(pauVar25[-2] + 4) - auVar38._4_4_,
                                  *(float *)pauVar25[-2] - auVar38._0_4_);
            uStack_4c8 = (ulong)(uint)(*(float *)(pauVar25[-2] + 8) - auVar38._8_4_);
            FUN_10982bbe0(puVar18,&ppuStack_440,&ppuStack_490);
            uStack_508._0_3_ = CONCAT12(uStack_436,CONCAT11(uStack_437,uStack_438));
            uStack_508 = CONCAT17(uStack_431,
                                  CONCAT16(uStack_432,
                                           CONCAT15(uStack_433,
                                                    CONCAT14(uStack_434,
                                                             CONCAT13(uStack_435,
                                                                      (undefined3)uStack_508))))) ^
                         0x8000000080000000;
            uStack_510 = (ulong)ppuStack_440 ^ 0x8000000080000000;
            puVar14 = puVar21;
            FUN_10982bbe0(puVar21,&uStack_510,&uStack_4d0);
          }
          lVar24 = lVar24 + 1;
          pauVar25 = pauVar25 + 0xd;
        } while (lVar24 < *(int *)(lVar23 + 0x360));
        uVar15 = puVar11[0x77];
      }
      lVar16 = lVar16 + 1;
    } while (lVar16 < (int)uVar15);
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_3b0) {
    return;
  }
  ___stack_chk_fail();
  uVar28 = __Unwind_Resume();
  uVar15 = puVar14[0x5d];
  if (0 < (int)uVar15) {
    lVar16 = 0;
    do {
      lVar23 = *(long *)(*(long *)(puVar14 + 0x60) + lVar16 * 8);
      if ((*(byte *)(lVar23 + 0xe8) & 3) == 0) {
        func_0x0001098381d0(uVar28,lVar23);
        FUN_10981d990(uVar28,lVar23 + 0x10,lVar23 + 0x1b0,lVar23 + 0x1c0,lVar23 + 0x50);
        uVar15 = puVar14[0x5d];
      }
      lVar16 = lVar16 + 1;
    } while (lVar16 < (int)uVar15);
  }
  return;
}



/* Entry: 109835d04; end: 10983608b;  */

void FUN_109835d04(ulong param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  long *plVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  undefined8 *puVar13;
  float fVar14;
  undefined8 uVar16;
  float fVar17;
  float fVar20;
  float fVar21;
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined8 uVar22;
  ulong uStack_1f0;
  ulong uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1b0;
  ulong uStack_1a8;
  float fStack_180;
  float fStack_17c;
  float fStack_178;
  undefined **ppuStack_170;
  ulong uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined4 uStack_148;
  long lStack_144;
  undefined8 uStack_13c;
  undefined4 uStack_134;
  uint uStack_130;
  undefined4 uStack_12c;
  undefined **ppuStack_120;
  float fStack_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_c0;
  long lStack_b8;
  undefined4 uStack_b0;
  long *plStack_a8;
  undefined8 uStack_a0;
  long lStack_90;
  ulong uVar15;
  
  lStack_90 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar8 = (ulong)*(uint *)(param_2 + 0x174);
  lVar3 = param_2;
  uVar15 = param_1;
  if (0 < (int)*(uint *)(param_2 + 0x174)) {
    uVar22 = NEON_fmov(0x3f800000,4);
    plVar9 = *(long **)(param_2 + 0x180);
    do {
      lVar5 = *plVar9;
      *(undefined4 *)(lVar5 + 0x134) = 0x3f800000;
      if ((6 < *(uint *)(lVar5 + 0xf8) || (1 << (ulong)(*(uint *)(lVar5 + 0xf8) & 0x1f) & 100U) == 0
          ) && ((*(byte *)(lVar5 + 0xe8) & 3) == 0)) {
        uVar15 = param_1;
        FUN_10981d990(lVar5 + 0x10,lVar5 + 0x1b0,lVar5 + 0x1c0,&uStack_1b0);
        if (*(char *)(param_2 + 0x40) == '\x01') {
          fVar14 = *(float *)(lVar5 + 0x13c) * *(float *)(lVar5 + 0x13c);
          uVar15 = (ulong)(uint)fVar14;
          if (((fVar14 != 0.0) &&
              (fVar17 = fStack_180 - (float)*(undefined8 *)(lVar5 + 0x40),
              fVar20 = fStack_17c - (float)((ulong)*(undefined8 *)(lVar5 + 0x40) >> 0x20),
              fVar21 = fStack_178 - (float)*(undefined8 *)(lVar5 + 0x48),
              auVar18._0_4_ = fVar17 * fVar17, auVar18._4_4_ = fVar20 * fVar20,
              auVar18._8_4_ = fVar21 * fVar21, auVar18._12_4_ = 0,
              auVar19 = NEON_ext(auVar18,auVar18,8,1),
              fVar14 < auVar18._0_4_ + auVar18._4_4_ + auVar19._0_4_)) &&
             (*(int *)(*(long *)(lVar5 + 0xd0) + 8) < 0x14)) {
            iRam00000001137365a8 = iRam00000001137365a8 + 1;
            plVar2 = *(long **)(param_2 + 0x68);
            (**(code **)(*plVar2 + 0x48))();
            uStack_a0 = *(undefined8 *)(param_2 + 0x28);
            fStack_118 = 1.0;
            uStack_f8 = *(undefined8 *)(lVar5 + 0x48);
            uStack_100 = *(undefined8 *)(lVar5 + 0x40);
            ppuStack_120 = &PTR_FUN_110b147e0;
            uStack_c0 = 0;
            uStack_130 = *(uint *)(lVar5 + 0x138);
            uStack_160 = 0;
            ppuStack_170 = &PTR_FUN_110b13f68;
            uStack_168 = CONCAT44(uStack_168._4_4_,8);
            uStack_158 = 0xffffffffffffffff;
            uStack_148 = 0x3f800000;
            uStack_13c = 0;
            uStack_134 = 0;
            lStack_144 = (ulong)uStack_130 << 0x20;
            uStack_12c = 0;
            uStack_b0 = *(undefined4 *)(param_2 + 0x54);
            uVar16 = *(undefined8 *)(*(long *)(lVar5 + 200) + 8);
            uStack_114 = (undefined4)uVar16;
            uStack_110 = (undefined4)((ulong)uVar16 >> 0x20);
            uStack_1e8 = *(ulong *)(lVar5 + 0x18);
            uStack_1f0 = *(ulong *)(lVar5 + 0x10);
            uStack_1e0 = *(undefined8 *)(lVar5 + 0x20);
            uStack_1d8 = *(undefined8 *)(lVar5 + 0x28);
            uStack_1c8 = *(undefined8 *)(lVar5 + 0x38);
            uStack_1d0 = *(undefined8 *)(lVar5 + 0x30);
            uStack_150 = uVar22;
            lStack_b8 = lVar5;
            plStack_a8 = plVar2;
            FUN_10980928c(0,param_2,&ppuStack_170,lVar5 + 0x10,&uStack_1f0,&ppuStack_120);
            fVar14 = *(float *)((ulong)&ppuStack_120 | 8);
            uVar15 = (ulong)(uint)fVar14;
            if (fVar14 < 1.0) {
              *(float *)(lVar5 + 0x134) = fVar14;
              uVar15 = (ulong)(uint)((float)param_1 * fVar14);
              FUN_10981d990(lVar5 + 0x10,lVar5 + 0x1b0,lVar5 + 0x1c0,&uStack_1b0);
              *(undefined4 *)(lVar5 + 0x134) = 0;
            }
          }
        }
        FUN_109838284(lVar5,&uStack_1b0);
        lVar3 = lVar5;
      }
      uVar8 = uVar8 - 1;
      plVar9 = plVar9 + 1;
    } while (uVar8 != 0);
  }
  if ((*(char *)(param_2 + 0x1ab) == '\x01') && (iVar4 = *(int *)(param_2 + 0x1dc), 0 < iVar4)) {
    lVar5 = 0;
    do {
      lVar11 = *(long *)(*(long *)(param_2 + 0x1e8) + lVar5 * 8);
      lVar6 = *(long *)(lVar11 + 0x350);
      lVar7 = 0;
      if ((*(byte *)(lVar6 + 0x118) & 2) != 0) {
        lVar7 = lVar6;
      }
      lVar10 = *(long *)(lVar11 + 0x358);
      lVar1 = 0;
      if ((*(byte *)(lVar10 + 0x118) & 2) != 0) {
        lVar1 = lVar10;
      }
      if (0 < *(int *)(lVar11 + 0x360)) {
        lVar12 = 0;
        puVar13 = (undefined8 *)(lVar11 + 0x50);
        do {
          lVar3 = lVar7;
          (*(code *)PTR_DAT_1132e0488)(lVar7,lVar1);
          fVar14 = (float)uVar15;
          if ((0.0 < fVar14) && (fVar17 = *(float *)((long)puVar13 + 0x44), fVar17 != 0.0)) {
            ppuStack_120 = (undefined **)
                           CONCAT44(-(float)((ulong)*puVar13 >> 0x20) * fVar17 * fVar14,
                                    -(float)*puVar13 * fVar17 * fVar14);
            fStack_118 = -(float)puVar13[1] * fVar17 * fVar14;
            uStack_114 = 0;
            ppuStack_170 = (undefined **)
                           CONCAT44((float)((ulong)puVar13[-2] >> 0x20) - *(float *)(lVar6 + 0x44),
                                    (float)puVar13[-2] - *(float *)(lVar6 + 0x40));
            uStack_168 = (ulong)(uint)((float)puVar13[-1] - *(float *)(lVar6 + 0x48));
            auVar18 = *(undefined1 (*) [16])(lVar10 + 0x40);
            uStack_1b0 = CONCAT44((float)((ulong)puVar13[-4] >> 0x20) - auVar18._4_4_,
                                  (float)puVar13[-4] - auVar18._0_4_);
            uStack_1a8 = (ulong)(uint)((float)puVar13[-3] - auVar18._8_4_);
            FUN_10982bbe0(lVar6,&ppuStack_120,&ppuStack_170);
            uVar15 = (ulong)ppuStack_120 ^ 0x8000000080000000;
            uStack_1e8 = CONCAT44(uStack_114,fStack_118) ^ 0x8000000080000000;
            lVar3 = lVar10;
            uStack_1f0 = uVar15;
            FUN_10982bbe0(lVar10,&uStack_1f0,&uStack_1b0);
          }
          lVar12 = lVar12 + 1;
          puVar13 = puVar13 + 0x1a;
        } while (lVar12 < *(int *)(lVar11 + 0x360));
        iVar4 = *(int *)(param_2 + 0x1dc);
      }
      lVar5 = lVar5 + 1;
    } while (lVar5 < iVar4);
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_90) {
    return;
  }
  ___stack_chk_fail();
  __Unwind_Resume();
  iVar4 = *(int *)(lVar3 + 0x174);
  if (0 < iVar4) {
    lVar5 = 0;
    do {
      lVar7 = *(long *)(*(long *)(lVar3 + 0x180) + lVar5 * 8);
      if ((*(byte *)(lVar7 + 0xe8) & 3) == 0) {
        func_0x0001098381d0(uVar15,lVar7);
        FUN_10981d990(uVar15,lVar7 + 0x10,lVar7 + 0x1b0,lVar7 + 0x1c0,lVar7 + 0x50);
        iVar4 = *(int *)(lVar3 + 0x174);
      }
      lVar5 = lVar5 + 1;
    } while (lVar5 < iVar4);
  }
  return;
}



/* Entry: 10983608c; end: 109836113;  */

void FUN_10983608c(undefined8 param_1,long param_2)

{
  int iVar1;
  long lVar2;
  long lVar3;
  
  iVar1 = *(int *)(param_2 + 0x174);
  if (0 < iVar1) {
    lVar3 = 0;
    do {
      lVar2 = *(long *)(*(long *)(param_2 + 0x180) + lVar3 * 8);
      if ((*(byte *)(lVar2 + 0xe8) & 3) == 0) {
        func_0x0001098381d0(param_1,lVar2);
        FUN_10981d990(param_1,lVar2 + 0x10,lVar2 + 0x1b0,lVar2 + 0x1c0,lVar2 + 0x50);
        iVar1 = *(int *)(param_2 + 0x174);
      }
      lVar3 = lVar3 + 1;
    } while (lVar3 < iVar1);
  }
  return;
}



/* Entry: 109836114; end: 1098371eb;  */

void FUN_109836114(long *param_1,long param_2)

{
  long lVar1;
  int iVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  long *plVar14;
  long *plVar15;
  long lVar16;
  code *pcVar17;
  uint uVar18;
  uint uVar19;
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  float fVar22;
  float fVar23;
  float fVar32;
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  float fVar33;
  float fVar38;
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  float fVar44;
  undefined1 auVar45 [12];
  float fVar49;
  float fVar50;
  float fVar51;
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  ulong uVar63;
  float fVar64;
  float fVar65;
  undefined8 uVar66;
  float fVar67;
  undefined4 uVar68;
  float fVar69;
  undefined4 uVar70;
  undefined4 uVar71;
  undefined4 uVar72;
  float fVar73;
  float fVar75;
  undefined8 uVar74;
  float fVar76;
  float fVar77;
  float fVar78;
  float fVar80;
  undefined8 uVar79;
  float fVar81;
  float fVar82;
  float fVar83;
  float fVar84;
  float fVar85;
  float fVar86;
  float fVar87;
  float fVar88;
  float fVar89;
  undefined1 auVar90 [16];
  undefined8 uVar91;
  ulong uStack_f0;
  undefined1 uStack_e8;
  undefined1 uStack_e7;
  undefined1 uStack_e6;
  byte bStack_e5;
  undefined4 uStack_e4;
  undefined8 uStack_e0;
  ulong uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  float fStack_90;
  float fStack_8c;
  float fStack_88;
  float fStack_84;
  float fStack_80;
  float fStack_7c;
  float fStack_78;
  float fStack_74;
  
  plVar14 = param_1;
  (**(code **)(*param_1 + 0x28))();
  (**(code **)(*plVar14 + 0x70))();
  plVar15 = param_1;
  (**(code **)(*param_1 + 0x28))();
  (**(code **)(*plVar15 + 0x70))();
  fVar67 = *(float *)(param_2 + 0x3c);
  if (fVar67 <= 0.0) {
    return;
  }
  iVar2 = *(int *)(param_2 + 8);
  uVar19 = (uint)plVar14;
  uVar18 = (uint)plVar15;
  if (iVar2 < 6) {
    if (iVar2 == 3) {
      uStack_a8 = 0;
      uStack_b0 = 0x3f800000;
      uStack_98 = 0;
      uStack_a0 = 0x3f80000000000000;
      fStack_88 = 1.0;
      fStack_84 = 0.0;
      fStack_90 = 0.0;
      fStack_8c = 0.0;
      fVar22 = *(float *)(param_2 + 0x170);
      fVar33 = *(float *)(param_2 + 0x174);
      fVar69 = *(float *)(param_2 + 0x178);
      lVar16 = *(long *)(param_2 + 0x28);
      auVar46._0_4_ = fVar22 * *(float *)(lVar16 + 0x10);
      auVar46._4_4_ = fVar33 * *(float *)(lVar16 + 0x14);
      auVar46._8_4_ = fVar69 * *(float *)(lVar16 + 0x18);
      auVar46._12_4_ = *(float *)(param_2 + 0x17c) * *(float *)(lVar16 + 0x1c);
      auVar55._0_4_ = fVar22 * *(float *)(lVar16 + 0x20);
      auVar55._4_4_ = fVar33 * *(float *)(lVar16 + 0x24);
      auVar55._8_4_ = fVar69 * *(float *)(lVar16 + 0x28);
      auVar55._12_4_ = *(float *)(param_2 + 0x17c) * *(float *)(lVar16 + 0x2c);
      auVar48 = *(undefined1 (*) [16])(lVar16 + 0x40);
      auVar58._0_4_ = fVar22 * *(float *)(lVar16 + 0x30);
      auVar58._4_4_ = fVar33 * *(float *)(lVar16 + 0x34);
      auVar58._8_4_ = fVar69 * *(float *)(lVar16 + 0x38);
      auVar40 = NEON_ext(auVar46,auVar46,8,1);
      auVar54 = NEON_ext(auVar55,auVar55,8,1);
      auVar58._12_4_ = 0;
      auVar61 = NEON_ext(auVar58,auVar58,8,1);
      fStack_80 = auVar46._0_4_ + auVar46._4_4_ + auVar40._0_4_ + auVar48._0_4_;
      fStack_7c = auVar55._0_4_ + auVar55._4_4_ + auVar54._0_4_ + auVar48._4_4_;
      fStack_78 = auVar58._0_4_ + auVar58._4_4_ + auVar61._0_4_ + auVar61._4_4_ + auVar48._8_4_;
      fStack_74 = auVar48._12_4_ + 0.0;
      plVar14 = param_1;
      (**(code **)(*param_1 + 0x28))();
      (**(code **)(*plVar14 + 0x80))(fVar67);
      fVar22 = *(float *)(param_2 + 0x180);
      fVar33 = *(float *)(param_2 + 0x184);
      fVar69 = *(float *)(param_2 + 0x188);
      lVar16 = *(long *)(param_2 + 0x30);
      auVar40._0_4_ = fVar22 * *(float *)(lVar16 + 0x10);
      auVar40._4_4_ = fVar33 * *(float *)(lVar16 + 0x14);
      auVar40._8_4_ = fVar69 * *(float *)(lVar16 + 0x18);
      auVar40._12_4_ = *(float *)(param_2 + 0x18c) * *(float *)(lVar16 + 0x1c);
      auVar54._0_4_ = fVar22 * *(float *)(lVar16 + 0x20);
      auVar54._4_4_ = fVar33 * *(float *)(lVar16 + 0x24);
      auVar54._8_4_ = fVar69 * *(float *)(lVar16 + 0x28);
      auVar54._12_4_ = *(float *)(param_2 + 0x18c) * *(float *)(lVar16 + 0x2c);
      auVar48 = *(undefined1 (*) [16])(lVar16 + 0x40);
      auVar61._0_4_ = fVar22 * *(float *)(lVar16 + 0x30);
      auVar61._4_4_ = fVar33 * *(float *)(lVar16 + 0x34);
      auVar61._8_4_ = fVar69 * *(float *)(lVar16 + 0x38);
      auVar46 = NEON_ext(auVar40,auVar40,8,1);
      auVar55 = NEON_ext(auVar54,auVar54,8,1);
      auVar61._12_4_ = 0;
      auVar58 = NEON_ext(auVar61,auVar61,8,1);
      fStack_80 = auVar40._0_4_ + auVar40._4_4_ + auVar46._0_4_ + auVar48._0_4_;
      fStack_7c = auVar54._0_4_ + auVar54._4_4_ + auVar55._0_4_ + auVar48._4_4_;
      fStack_78 = auVar61._0_4_ + auVar61._4_4_ + auVar58._0_4_ + auVar58._4_4_ + auVar48._8_4_;
      fStack_74 = auVar48._12_4_ + 0.0;
      if ((uVar19 >> 0xb & 1) == 0) {
        return;
      }
      (**(code **)(*param_1 + 0x28))();
      (**(code **)(*param_1 + 0x80))(fVar67);
      return;
    }
    if (iVar2 == 4) {
      lVar16 = *(long *)(param_2 + 0x28);
      fVar22 = *(float *)(lVar16 + 0x10);
      fVar33 = *(float *)(lVar16 + 0x14);
      fVar69 = *(float *)(lVar16 + 0x18);
      fVar65 = *(float *)(lVar16 + 0x20);
      fVar75 = *(float *)(lVar16 + 0x24);
      fVar44 = *(float *)(lVar16 + 0x28);
      fVar50 = *(float *)(param_2 + 0x290);
      fVar77 = *(float *)(param_2 + 0x294);
      fVar80 = *(float *)(param_2 + 0x298);
      fVar82 = *(float *)(param_2 + 0x2a0);
      fVar84 = *(float *)(param_2 + 0x2a4);
      fVar83 = *(float *)(param_2 + 0x2a8);
      fVar64 = *(float *)(param_2 + 0x2b0);
      fVar87 = *(float *)(param_2 + 0x2b4);
      fVar88 = *(float *)(param_2 + 0x2b8);
      fVar23 = *(float *)(param_2 + 0x2c0);
      fVar32 = *(float *)(param_2 + 0x2c4);
      fVar38 = *(float *)(param_2 + 0x2c8);
      fVar49 = (float)*(undefined8 *)(lVar16 + 0x30);
      fVar51 = (float)((ulong)*(undefined8 *)(lVar16 + 0x30) >> 0x20);
      fVar85 = fVar22 * fVar23;
      fVar86 = fVar33 * fVar32;
      fVar89 = *(float *)(lVar16 + 0x1c) * *(float *)(param_2 + 0x2cc);
      auVar25._0_4_ = fVar65 * fVar23;
      auVar25._4_4_ = fVar75 * fVar32;
      auVar25._8_4_ = fVar44 * fVar38;
      auVar25._12_4_ = *(float *)(lVar16 + 0x2c) * *(float *)(param_2 + 0x2cc);
      auVar56._0_4_ = fVar49 * fVar23;
      auVar56._4_4_ = fVar51 * fVar32;
      fVar23 = (float)*(undefined8 *)(lVar16 + 0x38);
      auVar56._8_4_ = fVar23 * fVar38;
      auVar58 = NEON_ext(auVar25,auVar25,8,1);
      auVar56._12_4_ = 0;
      auVar61 = NEON_ext(auVar56,auVar56,8,1);
      auVar8._4_4_ = fVar86;
      auVar8._0_4_ = fVar85;
      auVar8._8_4_ = fVar69 * fVar38;
      auVar8._12_4_ = fVar89;
      auVar9._4_4_ = fVar86;
      auVar9._0_4_ = fVar85;
      auVar9._8_4_ = fVar69 * fVar38;
      auVar9._12_4_ = fVar89;
      auVar48 = NEON_ext(auVar8,auVar9,8,1);
      fStack_90 = fVar50 * fVar49 + fVar82 * fVar51 + fVar64 * fVar23;
      fStack_8c = fVar77 * fVar49 + fVar84 * fVar51 + fVar87 * fVar23;
      fStack_88 = fVar80 * fVar49 + fVar83 * fVar51 + fVar88 * fVar23;
      fStack_84 = fVar49 * 0.0 + fVar51 * 0.0 + fVar23 * 0.0;
      uStack_a8 = CONCAT44(fVar22 * 0.0 + fVar33 * 0.0 + fVar69 * 0.0,
                           fVar80 * fVar22 + fVar83 * fVar33 + fVar88 * fVar69);
      uStack_b0 = CONCAT44(fVar77 * fVar22 + fVar84 * fVar33 + fVar87 * fVar69,
                           fVar50 * fVar22 + fVar82 * fVar33 + fVar64 * fVar69);
      uStack_98 = CONCAT44(fVar65 * 0.0 + fVar75 * 0.0 + fVar44 * 0.0,
                           fVar80 * fVar65 + fVar83 * fVar75 + fVar88 * fVar44);
      uStack_a0 = CONCAT44(fVar77 * fVar65 + fVar84 * fVar75 + fVar87 * fVar44,
                           fVar50 * fVar65 + fVar82 * fVar75 + fVar64 * fVar44);
      fStack_80 = (float)*(undefined8 *)(lVar16 + 0x40) + fVar85 + fVar86 + auVar48._0_4_;
      fStack_7c = (float)((ulong)*(undefined8 *)(lVar16 + 0x40) >> 0x20) +
                  auVar25._0_4_ + auVar25._4_4_ + auVar58._0_4_;
      fStack_78 = (float)*(undefined8 *)(lVar16 + 0x48) +
                  auVar56._0_4_ + auVar56._4_4_ + auVar61._0_4_ + auVar61._4_4_;
      fStack_74 = (float)((ulong)*(undefined8 *)(lVar16 + 0x48) >> 0x20) + 0.0;
      if ((uVar19 >> 0xb & 1) == 0) {
        lVar16 = *(long *)(param_2 + 0x30);
        fVar22 = *(float *)(param_2 + 0x2d0);
        fVar33 = *(float *)(param_2 + 0x2d4);
        fVar69 = *(float *)(param_2 + 0x2d8);
        fVar65 = *(float *)(param_2 + 0x2e0);
        fVar75 = *(float *)(param_2 + 0x2e4);
        fVar44 = *(float *)(param_2 + 0x2e8);
        auVar48 = *(undefined1 (*) [16])(lVar16 + 0x10);
        fVar50 = *(float *)(lVar16 + 0x20);
        fVar77 = *(float *)(lVar16 + 0x24);
        fVar80 = *(float *)(lVar16 + 0x28);
        fVar82 = *(float *)(param_2 + 0x2f0);
        fVar84 = *(float *)(param_2 + 0x2f4);
        fVar83 = *(float *)(param_2 + 0x2f8);
        fVar64 = *(float *)(param_2 + 0x300);
        fVar87 = *(float *)(param_2 + 0x304);
        fVar88 = *(float *)(param_2 + 0x308);
        fVar49 = (float)*(undefined8 *)(lVar16 + 0x30);
        fVar51 = (float)((ulong)*(undefined8 *)(lVar16 + 0x30) >> 0x20);
        fVar23 = auVar48._0_4_;
        fVar85 = fVar23 * fVar64;
        fVar32 = auVar48._4_4_;
        fVar86 = fVar32 * fVar87;
        fVar38 = auVar48._8_4_;
        fVar89 = auVar48._12_4_ * *(float *)(param_2 + 0x30c);
        auVar41._0_4_ = fVar50 * fVar64;
        auVar41._4_4_ = fVar77 * fVar87;
        auVar41._8_4_ = fVar80 * fVar88;
        auVar41._12_4_ = *(float *)(lVar16 + 0x2c) * *(float *)(param_2 + 0x30c);
        auVar57._0_4_ = fVar49 * fVar64;
        auVar57._4_4_ = fVar51 * fVar87;
        fVar64 = (float)*(undefined8 *)(lVar16 + 0x38);
        auVar57._8_4_ = fVar64 * fVar88;
        auVar57._12_4_ = 0;
        auVar58 = NEON_ext(auVar57,auVar57,8,1);
        auVar61 = NEON_ext(auVar41,auVar41,8,1);
        auVar10._4_4_ = fVar86;
        auVar10._0_4_ = fVar85;
        auVar10._8_4_ = fVar38 * fVar88;
        auVar10._12_4_ = fVar89;
        auVar11._4_4_ = fVar86;
        auVar11._0_4_ = fVar85;
        auVar11._8_4_ = fVar38 * fVar88;
        auVar11._12_4_ = fVar89;
        auVar48 = NEON_ext(auVar10,auVar11,8,1);
        fStack_90 = fVar22 * fVar49 + fVar65 * fVar51 + fVar82 * fVar64;
        fStack_8c = fVar33 * fVar49 + fVar75 * fVar51 + fVar84 * fVar64;
        fStack_88 = fVar69 * fVar49 + fVar44 * fVar51 + fVar83 * fVar64;
        fStack_84 = fVar49 * 0.0 + fVar51 * 0.0 + fVar64 * 0.0;
        uStack_a8 = CONCAT44(fVar23 * 0.0 + fVar32 * 0.0 + fVar38 * 0.0,
                             fVar69 * fVar23 + fVar44 * fVar32 + fVar83 * fVar38);
        uStack_b0 = CONCAT44(fVar33 * fVar23 + fVar75 * fVar32 + fVar84 * fVar38,
                             fVar22 * fVar23 + fVar65 * fVar32 + fVar82 * fVar38);
        uStack_98 = CONCAT44(fVar50 * 0.0 + fVar77 * 0.0 + fVar80 * 0.0,
                             fVar69 * fVar50 + fVar44 * fVar77 + fVar83 * fVar80);
        uStack_a0 = CONCAT44(fVar33 * fVar50 + fVar75 * fVar77 + fVar84 * fVar80,
                             fVar22 * fVar50 + fVar65 * fVar77 + fVar82 * fVar80);
        fStack_80 = (float)*(undefined8 *)(lVar16 + 0x40) + fVar85 + fVar86 + auVar48._0_4_;
        fStack_7c = (float)((ulong)*(undefined8 *)(lVar16 + 0x40) >> 0x20) +
                    auVar41._0_4_ + auVar41._4_4_ + auVar61._0_4_;
        fStack_78 = (float)*(undefined8 *)(lVar16 + 0x48) +
                    auVar57._0_4_ + auVar57._4_4_ + auVar58._0_4_ + auVar58._4_4_;
        fStack_74 = (float)((ulong)*(undefined8 *)(lVar16 + 0x48) >> 0x20) + 0.0;
      }
      else {
        plVar14 = param_1;
        (**(code **)(*param_1 + 0x28))();
        (**(code **)(*plVar14 + 0x80))(fVar67);
        lVar16 = *(long *)(param_2 + 0x30);
        fVar22 = *(float *)(lVar16 + 0x10);
        fVar33 = *(float *)(lVar16 + 0x14);
        fVar69 = *(float *)(lVar16 + 0x18);
        fVar65 = *(float *)(lVar16 + 0x20);
        fVar75 = *(float *)(lVar16 + 0x24);
        fVar44 = *(float *)(lVar16 + 0x28);
        fVar50 = *(float *)(param_2 + 0x2d0);
        fVar77 = *(float *)(param_2 + 0x2d4);
        fVar80 = *(float *)(param_2 + 0x2d8);
        fVar82 = *(float *)(param_2 + 0x2e0);
        fVar84 = *(float *)(param_2 + 0x2e4);
        fVar83 = *(float *)(param_2 + 0x2e8);
        fVar64 = *(float *)(param_2 + 0x2f0);
        fVar87 = *(float *)(param_2 + 0x2f4);
        fVar88 = *(float *)(param_2 + 0x2f8);
        fVar23 = *(float *)(param_2 + 0x300);
        fVar32 = *(float *)(param_2 + 0x304);
        fVar38 = *(float *)(param_2 + 0x308);
        fVar49 = (float)*(undefined8 *)(lVar16 + 0x30);
        fVar51 = (float)((ulong)*(undefined8 *)(lVar16 + 0x30) >> 0x20);
        fVar85 = fVar22 * fVar23;
        fVar86 = fVar33 * fVar32;
        fVar89 = *(float *)(lVar16 + 0x1c) * *(float *)(param_2 + 0x30c);
        auVar31._0_4_ = fVar65 * fVar23;
        auVar31._4_4_ = fVar75 * fVar32;
        auVar31._8_4_ = fVar44 * fVar38;
        auVar31._12_4_ = *(float *)(lVar16 + 0x2c) * *(float *)(param_2 + 0x30c);
        auVar60._0_4_ = fVar49 * fVar23;
        auVar60._4_4_ = fVar51 * fVar32;
        fVar23 = (float)*(undefined8 *)(lVar16 + 0x38);
        auVar60._8_4_ = fVar23 * fVar38;
        auVar60._12_4_ = 0;
        auVar58 = NEON_ext(auVar60,auVar60,8,1);
        auVar61 = NEON_ext(auVar31,auVar31,8,1);
        fStack_90 = fVar50 * fVar49 + fVar82 * fVar51 + fVar64 * fVar23;
        fStack_8c = fVar77 * fVar49 + fVar84 * fVar51 + fVar87 * fVar23;
        fStack_88 = fVar80 * fVar49 + fVar83 * fVar51 + fVar88 * fVar23;
        fStack_84 = fVar49 * 0.0 + fVar51 * 0.0 + fVar23 * 0.0;
        auVar12._4_4_ = fVar86;
        auVar12._0_4_ = fVar85;
        auVar12._8_4_ = fVar69 * fVar38;
        auVar12._12_4_ = fVar89;
        auVar13._4_4_ = fVar86;
        auVar13._0_4_ = fVar85;
        auVar13._8_4_ = fVar69 * fVar38;
        auVar13._12_4_ = fVar89;
        auVar48 = NEON_ext(auVar12,auVar13,8,1);
        fStack_80 = (float)*(undefined8 *)(lVar16 + 0x40) + fVar85 + fVar86 + auVar48._0_4_;
        fStack_7c = (float)((ulong)*(undefined8 *)(lVar16 + 0x40) >> 0x20) +
                    auVar31._0_4_ + auVar31._4_4_ + auVar61._0_4_;
        fStack_78 = (float)*(undefined8 *)(lVar16 + 0x48) +
                    auVar60._0_4_ + auVar60._4_4_ + auVar58._0_4_ + auVar58._4_4_;
        fStack_74 = (float)((ulong)*(undefined8 *)(lVar16 + 0x48) >> 0x20) + 0.0;
        uStack_a8 = CONCAT44(fVar22 * 0.0 + fVar33 * 0.0 + fVar69 * 0.0,
                             fVar80 * fVar22 + fVar83 * fVar33 + fVar88 * fVar69);
        uStack_b0 = CONCAT44(fVar77 * fVar22 + fVar84 * fVar33 + fVar87 * fVar69,
                             fVar50 * fVar22 + fVar82 * fVar33 + fVar64 * fVar69);
        uStack_98 = CONCAT44(fVar65 * 0.0 + fVar75 * 0.0 + fVar44 * 0.0,
                             fVar80 * fVar65 + fVar83 * fVar75 + fVar88 * fVar44);
        uStack_a0 = CONCAT44(fVar77 * fVar65 + fVar84 * fVar75 + fVar87 * fVar44,
                             fVar50 * fVar65 + fVar82 * fVar75 + fVar64 * fVar44);
        plVar14 = param_1;
        (**(code **)(*param_1 + 0x28))();
        (**(code **)(*plVar14 + 0x80))(fVar67);
      }
      fVar22 = *(float *)(param_2 + 0x318);
      fVar33 = *(float *)(param_2 + 0x31c);
      fVar69 = (float)_fmodf(fVar22 - fVar33,0x40c90fdb);
      if (-3.1415927 <= fVar69) {
        if (3.1415927 < fVar69) {
          fVar69 = fVar69 + -6.2831855;
        }
      }
      else {
        fVar69 = fVar69 + 6.2831855;
      }
      fVar22 = (float)_fmodf(fVar22 + fVar33,0x40c90fdb);
      if (-3.1415927 <= fVar22) {
        if (3.1415927 < fVar22) {
          fVar22 = fVar22 + -6.2831855;
        }
      }
      else {
        fVar22 = fVar22 + 6.2831855;
      }
      if (fVar69 == fVar22) {
        return;
      }
      if ((uVar18 >> 0xc & 1) == 0) {
        return;
      }
      if (fVar33 <= 0.0) {
        fVar22 = 6.2831855;
        fVar69 = 0.0;
      }
      uStack_c0 = CONCAT44((float)uStack_98,(int)uStack_a8);
      uStack_b8 = (ulong)(uint)fStack_88;
      uStack_d0 = CONCAT44((float)uStack_a0,(int)uStack_b0);
      uStack_c8 = (ulong)(uint)fStack_90;
      (**(code **)(*param_1 + 0x28))();
      uStack_e0 = 0;
      uStack_d8 = 0;
      pcVar17 = *(code **)(*param_1 + 0x88);
    }
    else {
      if (iVar2 != 5) {
        return;
      }
      lVar16 = *(long *)(param_2 + 0x28);
      fVar22 = *(float *)(lVar16 + 0x10);
      fVar33 = *(float *)(lVar16 + 0x14);
      fVar69 = *(float *)(lVar16 + 0x18);
      fVar65 = *(float *)(lVar16 + 0x20);
      fVar75 = *(float *)(lVar16 + 0x24);
      fVar44 = *(float *)(lVar16 + 0x28);
      fVar50 = *(float *)(param_2 + 0x170);
      fVar77 = *(float *)(param_2 + 0x174);
      fVar80 = *(float *)(param_2 + 0x178);
      fVar82 = *(float *)(param_2 + 0x180);
      fVar84 = *(float *)(param_2 + 0x184);
      fVar83 = *(float *)(param_2 + 0x188);
      fVar64 = *(float *)(param_2 + 400);
      fVar87 = *(float *)(param_2 + 0x194);
      fVar88 = *(float *)(param_2 + 0x198);
      fVar23 = *(float *)(param_2 + 0x1a0);
      fVar32 = *(float *)(param_2 + 0x1a4);
      fVar38 = *(float *)(param_2 + 0x1a8);
      fVar49 = (float)*(undefined8 *)(lVar16 + 0x30);
      fVar51 = (float)((ulong)*(undefined8 *)(lVar16 + 0x30) >> 0x20);
      fVar85 = fVar22 * fVar23;
      fVar86 = fVar33 * fVar32;
      fVar89 = *(float *)(lVar16 + 0x1c) * *(float *)(param_2 + 0x1ac);
      auVar24._0_4_ = fVar65 * fVar23;
      auVar24._4_4_ = fVar75 * fVar32;
      auVar24._8_4_ = fVar44 * fVar38;
      auVar24._12_4_ = *(float *)(lVar16 + 0x2c) * *(float *)(param_2 + 0x1ac);
      auVar52._0_4_ = fVar49 * fVar23;
      auVar52._4_4_ = fVar51 * fVar32;
      fVar23 = (float)*(undefined8 *)(lVar16 + 0x38);
      auVar52._8_4_ = fVar23 * fVar38;
      auVar58 = NEON_ext(auVar24,auVar24,8,1);
      auVar52._12_4_ = 0;
      auVar61 = NEON_ext(auVar52,auVar52,8,1);
      auVar48._4_4_ = fVar86;
      auVar48._0_4_ = fVar85;
      auVar48._8_4_ = fVar69 * fVar38;
      auVar48._12_4_ = fVar89;
      auVar3._4_4_ = fVar86;
      auVar3._0_4_ = fVar85;
      auVar3._8_4_ = fVar69 * fVar38;
      auVar3._12_4_ = fVar89;
      auVar48 = NEON_ext(auVar48,auVar3,8,1);
      fStack_90 = fVar50 * fVar49 + fVar82 * fVar51 + fVar64 * fVar23;
      fStack_8c = fVar77 * fVar49 + fVar84 * fVar51 + fVar87 * fVar23;
      fStack_88 = fVar80 * fVar49 + fVar83 * fVar51 + fVar88 * fVar23;
      fStack_84 = fVar49 * 0.0 + fVar51 * 0.0 + fVar23 * 0.0;
      uStack_a8 = CONCAT44(fVar22 * 0.0 + fVar33 * 0.0 + fVar69 * 0.0,
                           fVar80 * fVar22 + fVar83 * fVar33 + fVar88 * fVar69);
      uStack_b0 = CONCAT44(fVar77 * fVar22 + fVar84 * fVar33 + fVar87 * fVar69,
                           fVar50 * fVar22 + fVar82 * fVar33 + fVar64 * fVar69);
      uStack_98 = CONCAT44(fVar65 * 0.0 + fVar75 * 0.0 + fVar44 * 0.0,
                           fVar80 * fVar65 + fVar83 * fVar75 + fVar88 * fVar44);
      uStack_a0 = CONCAT44(fVar77 * fVar65 + fVar84 * fVar75 + fVar87 * fVar44,
                           fVar50 * fVar65 + fVar82 * fVar75 + fVar64 * fVar44);
      fStack_80 = (float)*(undefined8 *)(lVar16 + 0x40) + fVar85 + fVar86 + auVar48._0_4_;
      fStack_7c = (float)((ulong)*(undefined8 *)(lVar16 + 0x40) >> 0x20) +
                  auVar24._0_4_ + auVar24._4_4_ + auVar58._0_4_;
      fStack_78 = (float)*(undefined8 *)(lVar16 + 0x48) +
                  auVar52._0_4_ + auVar52._4_4_ + auVar61._0_4_ + auVar61._4_4_;
      fStack_74 = (float)((ulong)*(undefined8 *)(lVar16 + 0x48) >> 0x20) + 0.0;
      if ((uVar19 >> 0xb & 1) == 0) {
        lVar16 = *(long *)(param_2 + 0x30);
        fVar22 = *(float *)(param_2 + 0x1b0);
        fVar33 = *(float *)(param_2 + 0x1b4);
        fVar69 = *(float *)(param_2 + 0x1b8);
        fVar65 = *(float *)(param_2 + 0x1c0);
        fVar75 = *(float *)(param_2 + 0x1c4);
        fVar44 = *(float *)(param_2 + 0x1c8);
        auVar48 = *(undefined1 (*) [16])(lVar16 + 0x10);
        fVar50 = *(float *)(lVar16 + 0x20);
        fVar77 = *(float *)(lVar16 + 0x24);
        fVar80 = *(float *)(lVar16 + 0x28);
        fVar82 = *(float *)(param_2 + 0x1d0);
        fVar84 = *(float *)(param_2 + 0x1d4);
        fVar83 = *(float *)(param_2 + 0x1d8);
        fVar64 = *(float *)(param_2 + 0x1e0);
        fVar87 = *(float *)(param_2 + 0x1e4);
        fVar88 = *(float *)(param_2 + 0x1e8);
        fVar49 = (float)*(undefined8 *)(lVar16 + 0x30);
        fVar51 = (float)((ulong)*(undefined8 *)(lVar16 + 0x30) >> 0x20);
        uStack_a0._0_4_ = fVar22 * fVar50 + fVar65 * fVar77 + fVar82 * fVar80;
        uStack_a0._4_4_ = fVar33 * fVar50 + fVar75 * fVar77 + fVar84 * fVar80;
        uStack_98._0_4_ = fVar69 * fVar50 + fVar44 * fVar77 + fVar83 * fVar80;
        uStack_98._4_4_ = fVar50 * 0.0 + fVar77 * 0.0 + fVar80 * 0.0;
        fVar23 = auVar48._0_4_;
        fVar85 = fVar23 * fVar64;
        fVar32 = auVar48._4_4_;
        fVar86 = fVar32 * fVar87;
        fVar38 = auVar48._8_4_;
        fVar89 = auVar48._12_4_ * *(float *)(param_2 + 0x1ec);
        auVar39._0_4_ = fVar50 * fVar64;
        auVar39._4_4_ = fVar77 * fVar87;
        auVar39._8_4_ = fVar80 * fVar88;
        auVar39._12_4_ = *(float *)(lVar16 + 0x2c) * *(float *)(param_2 + 0x1ec);
        auVar53._0_4_ = fVar49 * fVar64;
        auVar53._4_4_ = fVar51 * fVar87;
        fVar50 = (float)*(undefined8 *)(lVar16 + 0x38);
        auVar53._8_4_ = fVar50 * fVar88;
        auVar53._12_4_ = 0;
        auVar58 = NEON_ext(auVar53,auVar53,8,1);
        auVar61 = NEON_ext(auVar39,auVar39,8,1);
        uStack_b0._0_4_ = fVar22 * fVar23 + fVar65 * fVar32 + fVar82 * fVar38;
        uStack_b0._4_4_ = fVar33 * fVar23 + fVar75 * fVar32 + fVar84 * fVar38;
        uStack_a8._0_4_ = fVar69 * fVar23 + fVar44 * fVar32 + fVar83 * fVar38;
        uStack_a8._4_4_ = fVar23 * 0.0 + fVar32 * 0.0 + fVar38 * 0.0;
        auVar4._4_4_ = fVar86;
        auVar4._0_4_ = fVar85;
        auVar4._8_4_ = fVar38 * fVar88;
        auVar4._12_4_ = fVar89;
        auVar5._4_4_ = fVar86;
        auVar5._0_4_ = fVar85;
        auVar5._8_4_ = fVar38 * fVar88;
        auVar5._12_4_ = fVar89;
        auVar48 = NEON_ext(auVar4,auVar5,8,1);
        fStack_90 = fVar22 * fVar49 + fVar65 * fVar51 + fVar82 * fVar50;
        fStack_8c = fVar33 * fVar49 + fVar75 * fVar51 + fVar84 * fVar50;
        fStack_88 = fVar69 * fVar49 + fVar44 * fVar51 + fVar83 * fVar50;
        fStack_84 = fVar49 * 0.0 + fVar51 * 0.0 + fVar50 * 0.0;
        fStack_80 = (float)*(undefined8 *)(lVar16 + 0x40) + fVar85 + fVar86 + auVar48._0_4_;
        fStack_7c = (float)((ulong)*(undefined8 *)(lVar16 + 0x40) >> 0x20) +
                    auVar39._0_4_ + auVar39._4_4_ + auVar61._0_4_;
        fStack_78 = (float)*(undefined8 *)(lVar16 + 0x48) +
                    auVar53._0_4_ + auVar53._4_4_ + auVar58._0_4_ + auVar58._4_4_;
        fStack_74 = (float)((ulong)*(undefined8 *)(lVar16 + 0x48) >> 0x20) + 0.0;
      }
      else {
        plVar14 = param_1;
        (**(code **)(*param_1 + 0x28))();
        (**(code **)(*plVar14 + 0x80))(fVar67);
        lVar16 = *(long *)(param_2 + 0x30);
        fVar22 = *(float *)(lVar16 + 0x10);
        fVar33 = *(float *)(lVar16 + 0x14);
        fVar69 = *(float *)(lVar16 + 0x18);
        fVar65 = *(float *)(lVar16 + 0x20);
        fVar75 = *(float *)(lVar16 + 0x24);
        fVar44 = *(float *)(lVar16 + 0x28);
        fVar50 = *(float *)(param_2 + 0x1b0);
        fVar77 = *(float *)(param_2 + 0x1b4);
        fVar80 = *(float *)(param_2 + 0x1b8);
        fVar82 = *(float *)(param_2 + 0x1c0);
        fVar84 = *(float *)(param_2 + 0x1c4);
        fVar83 = *(float *)(param_2 + 0x1c8);
        fVar64 = *(float *)(param_2 + 0x1d0);
        fVar87 = *(float *)(param_2 + 0x1d4);
        fVar88 = *(float *)(param_2 + 0x1d8);
        fVar23 = *(float *)(param_2 + 0x1e0);
        fVar32 = *(float *)(param_2 + 0x1e4);
        fVar38 = *(float *)(param_2 + 0x1e8);
        fVar49 = (float)*(undefined8 *)(lVar16 + 0x30);
        fVar51 = (float)((ulong)*(undefined8 *)(lVar16 + 0x30) >> 0x20);
        uStack_a0._0_4_ = fVar50 * fVar65 + fVar82 * fVar75 + fVar64 * fVar44;
        uStack_a0._4_4_ = fVar77 * fVar65 + fVar84 * fVar75 + fVar87 * fVar44;
        uStack_98._0_4_ = fVar80 * fVar65 + fVar83 * fVar75 + fVar88 * fVar44;
        uStack_98._4_4_ = fVar65 * 0.0 + fVar75 * 0.0 + fVar44 * 0.0;
        fVar85 = fVar22 * fVar23;
        fVar86 = fVar33 * fVar32;
        fVar89 = *(float *)(lVar16 + 0x1c) * *(float *)(param_2 + 0x1ec);
        auVar28._0_4_ = fVar65 * fVar23;
        auVar28._4_4_ = fVar75 * fVar32;
        auVar28._8_4_ = fVar44 * fVar38;
        auVar28._12_4_ = *(float *)(lVar16 + 0x2c) * *(float *)(param_2 + 0x1ec);
        auVar59._0_4_ = fVar49 * fVar23;
        auVar59._4_4_ = fVar51 * fVar32;
        fVar65 = (float)*(undefined8 *)(lVar16 + 0x38);
        auVar59._8_4_ = fVar65 * fVar38;
        auVar59._12_4_ = 0;
        auVar58 = NEON_ext(auVar59,auVar59,8,1);
        auVar61 = NEON_ext(auVar28,auVar28,8,1);
        uStack_b0._0_4_ = fVar50 * fVar22 + fVar82 * fVar33 + fVar64 * fVar69;
        uStack_b0._4_4_ = fVar77 * fVar22 + fVar84 * fVar33 + fVar87 * fVar69;
        uStack_a8._0_4_ = fVar80 * fVar22 + fVar83 * fVar33 + fVar88 * fVar69;
        uStack_a8._4_4_ = fVar22 * 0.0 + fVar33 * 0.0 + fVar69 * 0.0;
        fStack_90 = fVar50 * fVar49 + fVar82 * fVar51 + fVar64 * fVar65;
        fStack_8c = fVar77 * fVar49 + fVar84 * fVar51 + fVar87 * fVar65;
        fStack_88 = fVar80 * fVar49 + fVar83 * fVar51 + fVar88 * fVar65;
        fStack_84 = fVar49 * 0.0 + fVar51 * 0.0 + fVar65 * 0.0;
        auVar6._4_4_ = fVar86;
        auVar6._0_4_ = fVar85;
        auVar6._8_4_ = fVar69 * fVar38;
        auVar6._12_4_ = fVar89;
        auVar7._4_4_ = fVar86;
        auVar7._0_4_ = fVar85;
        auVar7._8_4_ = fVar69 * fVar38;
        auVar7._12_4_ = fVar89;
        auVar48 = NEON_ext(auVar6,auVar7,8,1);
        fStack_80 = (float)*(undefined8 *)(lVar16 + 0x40) + fVar85 + fVar86 + auVar48._0_4_;
        fStack_7c = (float)((ulong)*(undefined8 *)(lVar16 + 0x40) >> 0x20) +
                    auVar28._0_4_ + auVar28._4_4_ + auVar61._0_4_;
        fStack_78 = (float)*(undefined8 *)(lVar16 + 0x48) +
                    auVar59._0_4_ + auVar59._4_4_ + auVar58._0_4_ + auVar58._4_4_;
        fStack_74 = (float)((ulong)*(undefined8 *)(lVar16 + 0x48) >> 0x20) + 0.0;
        plVar14 = param_1;
        (**(code **)(*param_1 + 0x28))();
        (**(code **)(*plVar14 + 0x80))(fVar67);
      }
      if ((uVar18 >> 0xc & 1) == 0) {
        return;
      }
      FUN_10982b3e4(&uStack_c0,0x40c2c75b,fVar67,param_2);
      uVar18 = 0;
      auVar29._0_4_ = (float)uStack_b0 * (float)uStack_c0;
      auVar29._4_4_ = uStack_b0._4_4_ * uStack_c0._4_4_;
      auVar29._8_4_ = (float)uStack_a8 * (float)uStack_b8;
      auVar29._12_4_ = uStack_a8._4_4_ * uStack_b8._4_4_;
      auVar35._0_4_ = (float)uStack_c0 * (float)uStack_a0;
      auVar35._4_4_ = uStack_c0._4_4_ * uStack_a0._4_4_;
      auVar35._8_4_ = (float)uStack_b8 * (float)uStack_98;
      auVar35._12_4_ = uStack_b8._4_4_ * uStack_98._4_4_;
      auVar20._0_4_ = (float)uStack_c0 * fStack_90;
      auVar20._4_4_ = uStack_c0._4_4_ * fStack_8c;
      auVar20._8_4_ = (float)uStack_b8 * fStack_88;
      auVar58 = NEON_ext(auVar29,auVar29,8,1);
      auVar61 = NEON_ext(auVar35,auVar35,8,1);
      auVar20._12_4_ = 0;
      auVar48 = NEON_ext(auVar20,auVar20,8,1);
      uStack_b8 = CONCAT44(fStack_74 + 0.0,
                           auVar20._0_4_ + auVar20._4_4_ + auVar48._0_4_ + auVar48._4_4_ + fStack_78
                          );
      uStack_c0 = CONCAT44(auVar35._0_4_ + auVar35._4_4_ + auVar61._0_4_ + fStack_7c,
                           auVar29._0_4_ + auVar29._4_4_ + auVar58._0_4_ + fStack_80);
      do {
        FUN_10982b3e4(&uStack_d0,(float)uVar18 * 6.283185 * 0.03125,fVar67,param_2);
        auVar30._0_4_ = (float)uStack_b0 * (float)uStack_d0;
        auVar30._4_4_ = uStack_b0._4_4_ * uStack_d0._4_4_;
        auVar30._8_4_ = (float)uStack_a8 * (float)uStack_c8;
        auVar30._12_4_ = uStack_a8._4_4_ * uStack_c8._4_4_;
        auVar36._0_4_ = (float)uStack_d0 * (float)uStack_a0;
        auVar36._4_4_ = uStack_d0._4_4_ * uStack_a0._4_4_;
        auVar36._8_4_ = (float)uStack_c8 * (float)uStack_98;
        auVar36._12_4_ = uStack_c8._4_4_ * uStack_98._4_4_;
        auVar21._0_4_ = (float)uStack_d0 * fStack_90;
        auVar21._4_4_ = uStack_d0._4_4_ * fStack_8c;
        auVar21._8_4_ = (float)uStack_c8 * fStack_88;
        auVar58 = NEON_ext(auVar30,auVar30,8,1);
        auVar61 = NEON_ext(auVar36,auVar36,8,1);
        auVar21._12_4_ = 0;
        auVar48 = NEON_ext(auVar21,auVar21,8,1);
        uStack_c8 = CONCAT44(fStack_74 + 0.0,
                             auVar21._0_4_ + auVar21._4_4_ + auVar48._0_4_ + auVar48._4_4_ +
                             fStack_78);
        uStack_d0 = CONCAT44(auVar36._0_4_ + auVar36._4_4_ + auVar61._0_4_ + fStack_7c,
                             auVar30._0_4_ + auVar30._4_4_ + auVar58._0_4_ + fStack_80);
        plVar14 = param_1;
        (**(code **)(*param_1 + 0x28))();
        uStack_e0 = 0;
        uStack_d8 = 0;
        (**(code **)(*plVar14 + 0x20))();
        if ((uVar18 & 3) == 0) {
          plVar14 = param_1;
          (**(code **)(*param_1 + 0x28))();
          uStack_e0 = 0;
          uStack_d8 = 0;
          (**(code **)(*plVar14 + 0x20))();
        }
        uStack_c0 = uStack_d0;
        uStack_b8 = uStack_c8;
        uVar18 = uVar18 + 1;
      } while (uVar18 != 0x20);
      fVar22 = *(float *)(param_2 + 0x208);
      fVar33 = *(float *)(param_2 + 0x244);
      lVar16 = *(long *)(param_2 + 0x30);
      if (*(float *)(lVar16 + 0x1d0) <= 0.0) {
        lVar16 = *(long *)(param_2 + 0x28);
        uVar66 = *(undefined8 *)(lVar16 + 0x18);
        uVar91 = *(undefined8 *)(lVar16 + 0x10);
        fVar69 = *(float *)(lVar16 + 0x20);
        fVar65 = *(float *)(lVar16 + 0x24);
        fVar75 = *(float *)(lVar16 + 0x28);
        fVar44 = *(float *)(lVar16 + 0x2c);
        fVar84 = (float)*(undefined8 *)(lVar16 + 0x38);
        uVar74 = *(undefined8 *)(lVar16 + 0x30);
        uVar79 = *(undefined8 *)(param_2 + 0x180);
        auVar45 = SUB1612(*(undefined1 (*) [16])(param_2 + 0x170),0);
        fVar83 = (float)*(undefined8 *)(param_2 + 0x188);
        fVar88 = (float)*(undefined8 *)(param_2 + 0x198);
        fVar64 = (float)*(undefined8 *)(param_2 + 400);
        fVar87 = (float)((ulong)*(undefined8 *)(param_2 + 400) >> 0x20);
        fVar50 = *(float *)(param_2 + 0x1a0);
        fVar77 = *(float *)(param_2 + 0x1a4);
        fVar80 = *(float *)(param_2 + 0x1a8);
        fVar82 = *(float *)(param_2 + 0x1ac);
      }
      else {
        uVar66 = *(undefined8 *)(lVar16 + 0x18);
        uVar91 = *(undefined8 *)(lVar16 + 0x10);
        fVar69 = *(float *)(lVar16 + 0x20);
        fVar65 = *(float *)(lVar16 + 0x24);
        fVar75 = *(float *)(lVar16 + 0x28);
        fVar44 = *(float *)(lVar16 + 0x2c);
        fVar84 = (float)*(undefined8 *)(lVar16 + 0x38);
        uVar74 = *(undefined8 *)(lVar16 + 0x30);
        uVar79 = *(undefined8 *)(param_2 + 0x1c0);
        auVar45 = SUB1612(*(undefined1 (*) [16])(param_2 + 0x1b0),0);
        fVar83 = (float)*(undefined8 *)(param_2 + 0x1c8);
        fVar88 = (float)*(undefined8 *)(param_2 + 0x1d8);
        fVar64 = (float)*(undefined8 *)(param_2 + 0x1d0);
        fVar87 = (float)((ulong)*(undefined8 *)(param_2 + 0x1d0) >> 0x20);
        fVar50 = *(float *)(param_2 + 0x1e0);
        fVar77 = *(float *)(param_2 + 0x1e4);
        fVar80 = *(float *)(param_2 + 0x1e8);
        fVar82 = *(float *)(param_2 + 0x1ec);
      }
      fVar38 = auVar45._0_4_;
      fVar49 = auVar45._4_4_;
      fVar51 = auVar45._8_4_;
      fVar73 = (float)uVar74;
      fVar78 = (float)uVar79;
      fVar81 = (float)((ulong)uVar79 >> 0x20);
      fVar76 = (float)((ulong)uVar74 >> 0x20);
      fVar23 = fVar38 * fVar69 + fVar78 * fVar65 + fVar64 * fVar75;
      fVar32 = fVar49 * fVar69 + fVar81 * fVar65 + fVar87 * fVar75;
      fVar85 = (float)uVar91;
      auVar37._0_4_ = fVar85 * fVar50;
      fVar86 = (float)((ulong)uVar91 >> 0x20);
      auVar37._4_4_ = fVar86 * fVar77;
      fVar89 = (float)uVar66;
      auVar37._8_4_ = fVar89 * fVar80;
      auVar37._12_4_ = (float)((ulong)uVar66 >> 0x20) * fVar82;
      auVar62._0_4_ = fVar69 * fVar50;
      auVar62._4_4_ = fVar65 * fVar77;
      auVar62._8_4_ = fVar75 * fVar80;
      auVar62._12_4_ = fVar44 * fVar82;
      auVar90._0_4_ = fVar73 * fVar50;
      auVar90._4_4_ = fVar76 * fVar77;
      auVar90._8_4_ = fVar84 * fVar80;
      auVar58 = NEON_ext(auVar62,auVar62,8,1);
      auVar90._12_4_ = 0;
      auVar61 = NEON_ext(auVar90,auVar90,8,1);
      fVar44 = fVar38 * fVar85 + fVar78 * fVar86 + fVar64 * fVar89;
      fVar50 = fVar49 * fVar85 + fVar81 * fVar86 + fVar87 * fVar89;
      fStack_90 = fVar38 * fVar73 + fVar78 * fVar76 + fVar64 * fVar84;
      fStack_8c = fVar49 * fVar73 + fVar81 * fVar76 + fVar87 * fVar84;
      fStack_88 = fVar51 * fVar73 + fVar83 * fVar76 + fVar88 * fVar84;
      fStack_84 = fVar73 * 0.0 + fVar76 * 0.0 + fVar84 * 0.0;
      auVar48 = NEON_ext(auVar37,auVar37,8,1);
      fStack_80 = auVar37._0_4_ + auVar37._4_4_ + auVar48._0_4_ +
                  (float)*(undefined8 *)(lVar16 + 0x40);
      fStack_7c = auVar62._0_4_ + auVar62._4_4_ + auVar58._0_4_ +
                  (float)((ulong)*(undefined8 *)(lVar16 + 0x40) >> 0x20);
      fStack_78 = auVar90._0_4_ + auVar90._4_4_ + auVar61._0_4_ + auVar61._4_4_ +
                  (float)*(undefined8 *)(lVar16 + 0x48);
      fStack_74 = (float)((ulong)*(undefined8 *)(lVar16 + 0x48) >> 0x20) + 0.0;
      uStack_a8 = CONCAT44(fVar85 * 0.0 + fVar86 * 0.0 + fVar89 * 0.0,
                           fVar51 * fVar85 + fVar83 * fVar86 + fVar88 * fVar89);
      uStack_b0 = CONCAT44(fVar50,fVar44);
      uStack_98 = CONCAT44(fVar69 * 0.0 + fVar65 * 0.0 + fVar75 * 0.0,
                           fVar51 * fVar69 + fVar83 * fVar65 + fVar88 * fVar75);
      uStack_a0 = CONCAT44(fVar32,fVar23);
      uStack_c8 = CONCAT44(fStack_74,fStack_78);
      uStack_d0 = CONCAT44(fStack_7c,fStack_80);
      uStack_e0 = CONCAT44(fVar23,fVar44);
      uStack_d8 = (ulong)(uint)fStack_90;
      uStack_f0 = CONCAT44(fVar32,fVar50);
      *(float *)((ulong)&uStack_f0 | 8) = fStack_8c;
      uStack_e4 = 0;
      (**(code **)(*param_1 + 0x28))();
      fVar69 = -fVar33 - fVar22;
      fVar22 = fVar22 - fVar33;
      pcVar17 = *(code **)(*param_1 + 0x88);
    }
LAB_1098371c4:
    (*pcVar17)(fVar67,fVar67,fVar69,fVar22);
    return;
  }
  if (iVar2 < 9) {
    if (iVar2 != 6) {
      if (iVar2 != 7) {
        return;
      }
      uStack_b0 = *(undefined8 *)(param_2 + 0x3b0);
      uStack_a8 = *(undefined8 *)(param_2 + 0x3b8);
      uStack_a0 = *(undefined8 *)(param_2 + 0x3c0);
      uStack_98 = *(undefined8 *)(param_2 + 0x3c8);
      fStack_88 = (float)*(undefined8 *)(param_2 + 0x3d8);
      fStack_84 = (float)((ulong)*(undefined8 *)(param_2 + 0x3d8) >> 0x20);
      fStack_90 = (float)*(undefined8 *)(param_2 + 0x3d0);
      fStack_8c = (float)((ulong)*(undefined8 *)(param_2 + 0x3d0) >> 0x20);
      fStack_78 = (float)*(undefined8 *)(param_2 + 1000);
      fStack_74 = (float)((ulong)*(undefined8 *)(param_2 + 1000) >> 0x20);
      fStack_80 = (float)*(undefined8 *)(param_2 + 0x3e0);
      fStack_7c = (float)((ulong)*(undefined8 *)(param_2 + 0x3e0) >> 0x20);
      if ((uVar19 >> 0xb & 1) == 0) {
        uStack_b0 = *(undefined8 *)(param_2 + 0x3f0);
        uStack_a8 = *(undefined8 *)(param_2 + 0x3f8);
        uStack_a0 = *(undefined8 *)(param_2 + 0x400);
        uStack_98 = *(undefined8 *)(param_2 + 0x408);
        fStack_88 = (float)*(undefined8 *)(param_2 + 0x418);
        fStack_84 = (float)((ulong)*(undefined8 *)(param_2 + 0x418) >> 0x20);
        fStack_90 = (float)*(undefined8 *)(param_2 + 0x410);
        fStack_8c = (float)((ulong)*(undefined8 *)(param_2 + 0x410) >> 0x20);
        fStack_78 = (float)*(undefined8 *)(param_2 + 0x428);
        fStack_74 = (float)((ulong)*(undefined8 *)(param_2 + 0x428) >> 0x20);
        fStack_80 = (float)*(undefined8 *)(param_2 + 0x420);
        fStack_7c = (float)((ulong)*(undefined8 *)(param_2 + 0x420) >> 0x20);
      }
      else {
        plVar14 = param_1;
        (**(code **)(*param_1 + 0x28))();
        (**(code **)(*plVar14 + 0x80))(fVar67);
        uStack_b0 = *(undefined8 *)(param_2 + 0x3f0);
        uStack_a8 = *(undefined8 *)(param_2 + 0x3f8);
        uStack_a0 = *(undefined8 *)(param_2 + 0x400);
        uStack_98 = *(undefined8 *)(param_2 + 0x408);
        fStack_88 = (float)*(undefined8 *)(param_2 + 0x418);
        fStack_84 = (float)((ulong)*(undefined8 *)(param_2 + 0x418) >> 0x20);
        fStack_90 = (float)*(undefined8 *)(param_2 + 0x410);
        fStack_8c = (float)((ulong)*(undefined8 *)(param_2 + 0x410) >> 0x20);
        fStack_78 = (float)*(undefined8 *)(param_2 + 0x428);
        fStack_74 = (float)((ulong)*(undefined8 *)(param_2 + 0x428) >> 0x20);
        fStack_80 = (float)*(undefined8 *)(param_2 + 0x420);
        fStack_7c = (float)((ulong)*(undefined8 *)(param_2 + 0x420) >> 0x20);
        plVar14 = param_1;
        (**(code **)(*param_1 + 0x28))();
        (**(code **)(*plVar14 + 0x80))(fVar67);
      }
      if ((uVar18 >> 0xc & 1) == 0) {
        return;
      }
      lVar16 = 0x3b0;
      lVar1 = param_2 + 0x3b0;
      if (*(char *)(param_2 + 0xd0) == '\0') {
        lVar16 = 0x3f0;
        lVar1 = param_2 + 0x3f0;
      }
      uVar66 = ((undefined8 *)(param_2 + lVar16))[1];
      uVar91 = *(undefined8 *)(param_2 + lVar16);
      uVar63 = *(ulong *)(lVar1 + 0x20);
      fVar22 = *(float *)(param_2 + 0xd4);
      fVar33 = *(float *)(param_2 + 0xd8);
      fVar65 = (float)uVar91;
      auVar42._0_4_ = fVar65 * fVar22;
      fVar75 = (float)((ulong)uVar91 >> 0x20);
      auVar42._4_4_ = fVar75 * 0.0;
      fVar44 = (float)uVar66;
      auVar42._8_4_ = fVar44 * 0.0;
      fVar50 = (float)((ulong)uVar66 >> 0x20);
      auVar42._12_4_ = fVar50 * 0.0;
      fVar77 = (float)*(undefined8 *)(lVar1 + 0x10);
      auVar47._0_4_ = fVar77 * fVar22;
      fVar80 = (float)((ulong)*(undefined8 *)(lVar1 + 0x10) >> 0x20);
      auVar47._4_4_ = fVar80 * 0.0;
      fVar82 = (float)*(undefined8 *)(lVar1 + 0x18);
      auVar47._8_4_ = fVar82 * 0.0;
      fVar84 = (float)((ulong)*(undefined8 *)(lVar1 + 0x18) >> 0x20);
      auVar47._12_4_ = fVar84 * 0.0;
      auVar26._0_4_ = (float)uVar63 * fVar22;
      fVar22 = (float)(uVar63 >> 0x20);
      auVar26._4_4_ = fVar22 * 0.0;
      fVar69 = (float)*(undefined8 *)(lVar1 + 0x28);
      auVar26._8_4_ = fVar69 * 0.0;
      auVar58 = NEON_ext(auVar42,auVar42,8,1);
      auVar61 = NEON_ext(auVar47,auVar47,8,1);
      auVar26._12_4_ = 0;
      auVar48 = NEON_ext(auVar26,auVar26,8,1);
      uStack_b8 = CONCAT44(*(float *)(lVar1 + 0x3c) + 0.0,
                           *(float *)(lVar1 + 0x38) +
                           auVar26._0_4_ + auVar26._4_4_ + auVar48._0_4_ + auVar48._4_4_);
      uStack_c0 = CONCAT44(*(float *)(lVar1 + 0x34) + auVar47._0_4_ + auVar47._4_4_ + auVar61._0_4_,
                           *(float *)(lVar1 + 0x30) + auVar42._0_4_ + auVar42._4_4_ + auVar58._0_4_)
      ;
      auVar27._0_4_ = fVar65 * fVar33;
      auVar27._4_4_ = fVar75 * 0.0;
      auVar27._8_4_ = fVar44 * 0.0;
      auVar27._12_4_ = fVar50 * 0.0;
      auVar43._0_4_ = fVar77 * fVar33;
      auVar43._4_4_ = fVar80 * 0.0;
      auVar43._8_4_ = fVar82 * 0.0;
      auVar43._12_4_ = fVar84 * 0.0;
      auVar34._0_4_ = (float)uVar63 * fVar33;
      auVar34._4_4_ = fVar22 * 0.0;
      auVar34._8_4_ = fVar69 * 0.0;
      auVar58 = NEON_ext(auVar27,auVar27,8,1);
      auVar61 = NEON_ext(auVar43,auVar43,8,1);
      auVar34._12_4_ = 0;
      auVar48 = NEON_ext(auVar34,auVar34,8,1);
      uStack_c8 = CONCAT44(*(float *)(lVar1 + 0x3c) + 0.0,
                           *(float *)(lVar1 + 0x38) +
                           auVar34._0_4_ + auVar34._4_4_ + auVar48._0_4_ + auVar48._4_4_);
      uStack_d0 = CONCAT44(*(float *)(lVar1 + 0x34) + auVar43._0_4_ + auVar43._4_4_ + auVar61._0_4_,
                           *(float *)(lVar1 + 0x30) + auVar27._0_4_ + auVar27._4_4_ + auVar58._0_4_)
      ;
      plVar14 = param_1;
      (**(code **)(*param_1 + 0x28))();
      uStack_e0 = 0;
      uStack_d8 = 0;
      (**(code **)(*plVar14 + 0x20))();
      uStack_e0 = CONCAT44(fVar77,fVar65);
      uStack_d8 = uVar63 & 0xffffffff;
      uStack_f0 = CONCAT44(fVar80,fVar75);
      *(float *)((ulong)&uStack_f0 | 8) = fVar22;
      uStack_e4 = 0;
      fVar69 = *(float *)(param_2 + 0xdc);
      fVar22 = *(float *)(param_2 + 0xe0);
      (**(code **)(*param_1 + 0x28))();
      pcVar17 = *(code **)(*param_1 + 0x88);
      goto LAB_1098371c4;
    }
  }
  else if (iVar2 != 9) {
    if (iVar2 != 0xc) {
      return;
    }
    uStack_b0 = *(undefined8 *)(param_2 + 0x560);
    uStack_a8 = *(undefined8 *)(param_2 + 0x568);
    uStack_a0 = *(undefined8 *)(param_2 + 0x570);
    uStack_98 = *(undefined8 *)(param_2 + 0x578);
    fStack_88 = (float)*(undefined8 *)(param_2 + 0x588);
    fStack_84 = (float)((ulong)*(undefined8 *)(param_2 + 0x588) >> 0x20);
    fStack_90 = (float)*(undefined8 *)(param_2 + 0x580);
    fStack_8c = (float)((ulong)*(undefined8 *)(param_2 + 0x580) >> 0x20);
    fStack_78 = (float)*(undefined8 *)(param_2 + 0x598);
    fStack_74 = (float)((ulong)*(undefined8 *)(param_2 + 0x598) >> 0x20);
    fStack_80 = (float)*(undefined8 *)(param_2 + 0x590);
    fStack_7c = (float)((ulong)*(undefined8 *)(param_2 + 0x590) >> 0x20);
    if ((uVar19 >> 0xb & 1) != 0) {
      plVar14 = param_1;
      (**(code **)(*param_1 + 0x28))();
      (**(code **)(*plVar14 + 0x80))(fVar67);
      uStack_b0 = *(undefined8 *)(param_2 + 0x5a0);
      uStack_a8 = *(undefined8 *)(param_2 + 0x5a8);
      uStack_a0 = *(undefined8 *)(param_2 + 0x5b0);
      uStack_98 = *(undefined8 *)(param_2 + 0x5b8);
      fStack_88 = (float)*(undefined8 *)(param_2 + 0x5c8);
      fStack_84 = (float)((ulong)*(undefined8 *)(param_2 + 0x5c8) >> 0x20);
      fStack_90 = (float)*(undefined8 *)(param_2 + 0x5c0);
      fStack_8c = (float)((ulong)*(undefined8 *)(param_2 + 0x5c0) >> 0x20);
      fStack_78 = (float)*(undefined8 *)(param_2 + 0x5d8);
      fStack_74 = (float)((ulong)*(undefined8 *)(param_2 + 0x5d8) >> 0x20);
      fStack_80 = (float)*(undefined8 *)(param_2 + 0x5d0);
      fStack_7c = (float)((ulong)*(undefined8 *)(param_2 + 0x5d0) >> 0x20);
      plVar14 = param_1;
      (**(code **)(*param_1 + 0x28))();
      (**(code **)(*plVar14 + 0x80))(fVar67);
    }
    if ((uVar18 >> 0xc & 1) == 0) {
      return;
    }
    auVar48 = *(undefined1 (*) [16])(param_2 + 0x560);
    auVar58 = *(undefined1 (*) [16])(param_2 + 0x570);
    uStack_a8 = auVar48._8_8_;
    uStack_b0 = auVar48._0_8_;
    uStack_98 = auVar58._8_8_;
    uStack_a0 = auVar58._0_8_;
    auVar61 = *(undefined1 (*) [16])(param_2 + 0x580);
    fStack_88 = auVar61._8_4_;
    fStack_84 = auVar61._12_4_;
    fStack_90 = auVar61._0_4_;
    fStack_8c = auVar61._4_4_;
    fStack_78 = (float)*(undefined8 *)(param_2 + 0x598);
    fStack_74 = (float)((ulong)*(undefined8 *)(param_2 + 0x598) >> 0x20);
    fStack_80 = (float)*(undefined8 *)(param_2 + 0x590);
    fStack_7c = (float)((ulong)*(undefined8 *)(param_2 + 0x590) >> 0x20);
    auVar61 = NEON_ext(auVar58,auVar58,8,1);
    auVar46 = NEON_ext(auVar48,auVar48,8,1);
    uStack_c0 = CONCAT44(auVar61._0_4_,auVar46._0_4_);
    *(float *)((ulong)&uStack_c0 | 8) = fStack_88;
    uStack_b8 = uStack_b8 & 0xffffffff;
    uStack_d0 = CONCAT44(auVar58._0_4_,auVar48._0_4_);
    uStack_c8 = (ulong)(uint)fStack_90;
    fVar22 = *(float *)(param_2 + 0x4a8);
    fVar33 = *(float *)(param_2 + 0x4ac);
    if (fVar22 <= fVar33) {
      uVar68 = *(undefined4 *)(param_2 + 0x500);
      uVar70 = *(undefined4 *)(param_2 + 0x504);
      plVar14 = param_1;
      (**(code **)(*param_1 + 0x28))();
      uStack_e0 = 0;
      uStack_d8 = 0;
      (**(code **)(*plVar14 + 0x90))(fVar67 * 0.9,fVar22,fVar33,uVar68,uVar70);
      fVar22 = uStack_b0._4_4_;
      fVar33 = uStack_a0._4_4_;
    }
    else {
      fVar22 = auVar48._4_4_;
      fVar33 = auVar58._4_4_;
    }
    fVar69 = fStack_8c;
    uStack_d0 = CONCAT44(fVar33,fVar22);
    uStack_c8._0_4_ = fStack_8c;
    uStack_c8._4_4_ = 0.0;
    uVar68 = *(undefined4 *)(param_2 + 0x5e8);
    uVar91 = ___sincosf_stret();
    fVar44 = (float)((ulong)uVar91 >> 0x20);
    fVar65 = (float)uVar91;
    uVar91 = ___sincosf_stret(uVar68);
    fVar50 = (float)((ulong)uVar91 >> 0x20);
    fVar75 = (float)uVar91;
    uStack_e0 = CONCAT44(fVar50 * fVar33 - fVar22 * fVar75,
                         (fVar44 * fVar75 * fVar33 + fVar22 * fVar44 * fVar50) - fVar65 * fVar69);
    uStack_d8 = CONCAT44(uStack_d8._4_4_,
                         fVar65 * fVar75 * fVar33 + fVar22 * fVar65 * fVar50 + fVar69 * fVar44);
    uStack_b0 = *(undefined8 *)(param_2 + 0x5a0);
    uStack_a8 = *(undefined8 *)(param_2 + 0x5a8);
    uStack_a0 = *(undefined8 *)(param_2 + 0x5b0);
    uStack_98 = *(undefined8 *)(param_2 + 0x5b8);
    auVar48 = *(undefined1 (*) [16])(param_2 + 0x5c0);
    fStack_88 = auVar48._8_4_;
    fStack_84 = auVar48._12_4_;
    fStack_90 = auVar48._0_4_;
    fStack_8c = auVar48._4_4_;
    fStack_78 = (float)*(undefined8 *)(param_2 + 0x5d8);
    fStack_74 = (float)((ulong)*(undefined8 *)(param_2 + 0x5d8) >> 0x20);
    fStack_80 = (float)*(undefined8 *)(param_2 + 0x5d0);
    fStack_7c = (float)((ulong)*(undefined8 *)(param_2 + 0x5d0) >> 0x20);
    uStack_e8 = auVar48[0];
    uStack_e7 = auVar48[1];
    uStack_e6 = auVar48[2];
    bStack_e5 = auVar48[3] ^ 0x80;
    uStack_e4 = 0x80000000;
    uStack_f0 = CONCAT17(*(undefined1 *)(param_2 + 0x5b3),
                         CONCAT16(*(undefined1 *)(param_2 + 0x5b2),
                                  CONCAT15(*(undefined1 *)(param_2 + 0x5b1),
                                           CONCAT14(*(undefined1 *)(param_2 + 0x5b0),
                                                    *(undefined4 *)(param_2 + 0x5a0))))) ^
                0x8000000080000000;
    fVar22 = *(float *)(param_2 + 0x450);
    fVar33 = *(float *)(param_2 + 0x454);
    if (fVar22 <= fVar33) {
      if (fVar22 < fVar33) {
        plVar14 = param_1;
        (**(code **)(*param_1 + 0x28))();
        pcVar17 = *(code **)(*plVar14 + 0x88);
        goto LAB_10983706c;
      }
    }
    else {
      plVar14 = param_1;
      (**(code **)(*param_1 + 0x28))();
      pcVar17 = *(code **)(*plVar14 + 0x88);
      fVar22 = -3.1415927;
      fVar33 = 3.1415927;
LAB_10983706c:
      (*pcVar17)(fVar67,fVar67,fVar22,fVar33);
    }
    uStack_b0 = *(undefined8 *)(param_2 + 0x560);
    uStack_a8 = *(undefined8 *)(param_2 + 0x568);
    uStack_a0 = *(undefined8 *)(param_2 + 0x570);
    uStack_98 = *(undefined8 *)(param_2 + 0x578);
    uVar91 = *(undefined8 *)(param_2 + 0x580);
    uVar66 = *(undefined8 *)(param_2 + 0x588);
    uVar74 = *(undefined8 *)(param_2 + 0x590);
    uVar79 = *(undefined8 *)(param_2 + 0x598);
    goto LAB_109837084;
  }
  uStack_b0 = *(undefined8 *)(param_2 + 0x4b0);
  uStack_a8 = *(undefined8 *)(param_2 + 0x4b8);
  uStack_a0 = *(undefined8 *)(param_2 + 0x4c0);
  uStack_98 = *(undefined8 *)(param_2 + 0x4c8);
  fStack_88 = (float)*(undefined8 *)(param_2 + 0x4d8);
  fStack_84 = (float)((ulong)*(undefined8 *)(param_2 + 0x4d8) >> 0x20);
  fStack_90 = (float)*(undefined8 *)(param_2 + 0x4d0);
  fStack_8c = (float)((ulong)*(undefined8 *)(param_2 + 0x4d0) >> 0x20);
  fStack_78 = (float)*(undefined8 *)(param_2 + 0x4e8);
  fStack_74 = (float)((ulong)*(undefined8 *)(param_2 + 0x4e8) >> 0x20);
  fStack_80 = (float)*(undefined8 *)(param_2 + 0x4e0);
  fStack_7c = (float)((ulong)*(undefined8 *)(param_2 + 0x4e0) >> 0x20);
  if ((uVar19 >> 0xb & 1) != 0) {
    plVar14 = param_1;
    (**(code **)(*param_1 + 0x28))();
    (**(code **)(*plVar14 + 0x80))(fVar67);
    uStack_b0 = *(undefined8 *)(param_2 + 0x4f0);
    uStack_a8 = *(undefined8 *)(param_2 + 0x4f8);
    uStack_a0 = *(undefined8 *)(param_2 + 0x500);
    uStack_98 = *(undefined8 *)(param_2 + 0x508);
    fStack_88 = (float)*(undefined8 *)(param_2 + 0x518);
    fStack_84 = (float)((ulong)*(undefined8 *)(param_2 + 0x518) >> 0x20);
    fStack_90 = (float)*(undefined8 *)(param_2 + 0x510);
    fStack_8c = (float)((ulong)*(undefined8 *)(param_2 + 0x510) >> 0x20);
    fStack_78 = (float)*(undefined8 *)(param_2 + 0x528);
    fStack_74 = (float)((ulong)*(undefined8 *)(param_2 + 0x528) >> 0x20);
    fStack_80 = (float)*(undefined8 *)(param_2 + 0x520);
    fStack_7c = (float)((ulong)*(undefined8 *)(param_2 + 0x520) >> 0x20);
    plVar14 = param_1;
    (**(code **)(*param_1 + 0x28))();
    (**(code **)(*plVar14 + 0x80))(fVar67);
  }
  if ((uVar18 >> 0xc & 1) == 0) {
    return;
  }
  auVar48 = *(undefined1 (*) [16])(param_2 + 0x4b0);
  auVar58 = *(undefined1 (*) [16])(param_2 + 0x4c0);
  uStack_a8 = auVar48._8_8_;
  uStack_b0 = auVar48._0_8_;
  uStack_98 = auVar58._8_8_;
  uStack_a0 = auVar58._0_8_;
  uStack_c8 = *(ulong *)(param_2 + 0x4d0);
  fStack_88 = (float)*(undefined8 *)(param_2 + 0x4d8);
  fStack_84 = (float)((ulong)*(undefined8 *)(param_2 + 0x4d8) >> 0x20);
  fStack_90 = (float)uStack_c8;
  fStack_8c = (float)(uStack_c8 >> 0x20);
  fStack_78 = (float)*(undefined8 *)(param_2 + 0x4e8);
  fStack_74 = (float)((ulong)*(undefined8 *)(param_2 + 0x4e8) >> 0x20);
  fStack_80 = (float)*(undefined8 *)(param_2 + 0x4e0);
  fStack_7c = (float)((ulong)*(undefined8 *)(param_2 + 0x4e0) >> 0x20);
  auVar61 = NEON_ext(auVar58,auVar58,8,1);
  auVar46 = NEON_ext(auVar48,auVar48,8,1);
  uStack_c0 = CONCAT44(auVar61._0_4_,auVar46._0_4_);
  *(float *)((ulong)&uStack_c0 | 8) = fStack_88;
  uStack_b8 = uStack_b8 & 0xffffffff;
  uStack_d0 = CONCAT44(auVar58._0_4_,auVar48._0_4_);
  uStack_c8 = uStack_c8 & 0xffffffff;
  uVar68 = *(undefined4 *)(param_2 + 0x420);
  uVar70 = *(undefined4 *)(param_2 + 0x424);
  uVar71 = *(undefined4 *)(param_2 + 0x460);
  uVar72 = *(undefined4 *)(param_2 + 0x464);
  plVar14 = param_1;
  (**(code **)(*param_1 + 0x28))();
  uStack_e0 = 0;
  uStack_d8 = 0;
  (**(code **)(*plVar14 + 0x90))(fVar67 * 0.9,uVar68,uVar70,uVar71,uVar72);
  fVar69 = fStack_8c;
  fVar22 = uStack_b0._4_4_;
  fVar33 = uStack_a0._4_4_;
  uStack_d0 = CONCAT44(uStack_a0._4_4_,uStack_b0._4_4_);
  uStack_c8._0_4_ = fStack_8c;
  uStack_c8._4_4_ = 0.0;
  uVar68 = *(undefined4 *)(param_2 + 0x538);
  uVar91 = ___sincosf_stret();
  fVar44 = (float)((ulong)uVar91 >> 0x20);
  fVar65 = (float)uVar91;
  uVar91 = ___sincosf_stret(uVar68);
  fVar50 = (float)((ulong)uVar91 >> 0x20);
  fVar75 = (float)uVar91;
  uStack_e0 = CONCAT44(fVar50 * fVar33 - fVar22 * fVar75,
                       (fVar44 * fVar75 * fVar33 + fVar22 * fVar44 * fVar50) - fVar69 * fVar65);
  uStack_d8 = CONCAT44(uStack_d8._4_4_,
                       fVar65 * fVar75 * fVar33 + fVar22 * fVar65 * fVar50 + fVar69 * fVar44);
  uStack_b0 = *(undefined8 *)(param_2 + 0x4f0);
  uStack_a8 = *(undefined8 *)(param_2 + 0x4f8);
  uStack_a0 = *(undefined8 *)(param_2 + 0x500);
  uStack_98 = *(undefined8 *)(param_2 + 0x508);
  auVar48 = *(undefined1 (*) [16])(param_2 + 0x510);
  fStack_88 = auVar48._8_4_;
  fStack_84 = auVar48._12_4_;
  fStack_90 = auVar48._0_4_;
  fStack_8c = auVar48._4_4_;
  fStack_78 = (float)*(undefined8 *)(param_2 + 0x528);
  fStack_74 = (float)((ulong)*(undefined8 *)(param_2 + 0x528) >> 0x20);
  fStack_80 = (float)*(undefined8 *)(param_2 + 0x520);
  fStack_7c = (float)((ulong)*(undefined8 *)(param_2 + 0x520) >> 0x20);
  uStack_e8 = auVar48[0];
  uStack_e7 = auVar48[1];
  uStack_e6 = auVar48[2];
  bStack_e5 = auVar48[3] ^ 0x80;
  uStack_e4 = 0x80000000;
  uStack_f0 = CONCAT17(*(undefined1 *)(param_2 + 0x503),
                       CONCAT16(*(undefined1 *)(param_2 + 0x502),
                                CONCAT15(*(undefined1 *)(param_2 + 0x501),
                                         CONCAT14(*(undefined1 *)(param_2 + 0x500),
                                                  *(undefined4 *)(param_2 + 0x4f0))))) ^
              0x8000000080000000;
  fVar22 = *(float *)(param_2 + 0x3e0);
  fVar33 = *(float *)(param_2 + 0x3e4);
  if (fVar22 <= fVar33) {
    if (fVar22 < fVar33) {
      plVar14 = param_1;
      (**(code **)(*param_1 + 0x28))();
      pcVar17 = *(code **)(*plVar14 + 0x88);
      goto LAB_1098368a0;
    }
  }
  else {
    plVar14 = param_1;
    (**(code **)(*param_1 + 0x28))();
    pcVar17 = *(code **)(*plVar14 + 0x88);
    fVar22 = -3.1415927;
    fVar33 = 3.1415927;
LAB_1098368a0:
    (*pcVar17)(fVar67,fVar67,fVar22,fVar33);
  }
  uStack_b0 = *(undefined8 *)(param_2 + 0x4b0);
  uStack_a8 = *(undefined8 *)(param_2 + 0x4b8);
  uStack_a0 = *(undefined8 *)(param_2 + 0x4c0);
  uStack_98 = *(undefined8 *)(param_2 + 0x4c8);
  uVar91 = *(undefined8 *)(param_2 + 0x4d0);
  uVar66 = *(undefined8 *)(param_2 + 0x4d8);
  uVar74 = *(undefined8 *)(param_2 + 0x4e0);
  uVar79 = *(undefined8 *)(param_2 + 0x4e8);
LAB_109837084:
  fStack_88 = (float)uVar66;
  fStack_84 = (float)((ulong)uVar66 >> 0x20);
  fStack_90 = (float)uVar91;
  fStack_8c = (float)((ulong)uVar91 >> 0x20);
  fStack_78 = (float)uVar79;
  fStack_74 = (float)((ulong)uVar79 >> 0x20);
  fStack_80 = (float)uVar74;
  fStack_7c = (float)((ulong)uVar74 >> 0x20);
  (**(code **)(*param_1 + 0x28))();
  (**(code **)(*param_1 + 0xa0))();
  return;
}



/* Entry: 1098371ec; end: 109837233;  */

void FUN_1098371ec(long param_1,undefined8 param_2)

{
  if ((*(char *)(param_1 + 0x1a9) == '\x01') && (*(long *)(param_1 + 0x140) != 0)) {
    FUN_109825740();
  }
  *(undefined1 *)(param_1 + 0x1a9) = 0;
  *(undefined8 *)(param_1 + 0x140) = param_2;
  *(undefined8 *)(*(long *)(param_1 + 0x138) + 0x10) = param_2;
  return;
}



/* Entry: 109837234; end: 10983725b;  */

undefined8 FUN_109837234(long param_1)

{
  return *(undefined8 *)(param_1 + 0x140);
}



/* Entry: 10983725c; end: 1098374bf;  */

void FUN_10983725c(long param_1,long *param_2)

{
  long *plVar1;
  undefined8 *puVar2;
  int iVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  undefined8 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  
  (**(code **)(*param_2 + 0x40))(param_2);
  plVar5 = param_2;
  (**(code **)(*param_2 + 0x20))(param_2,0x68,1);
  puVar2 = (undefined8 *)plVar5[1];
  puVar2[1] = 0;
  *puVar2 = 0;
  puVar2[3] = 0;
  puVar2[2] = 0;
  puVar2[5] = 0;
  puVar2[4] = 0;
  puVar2[7] = 0;
  puVar2[6] = 0;
  puVar2[9] = 0;
  puVar2[8] = 0;
  puVar2[0xb] = 0;
  puVar2[10] = 0;
  puVar2[0xc] = 0;
  lVar4 = 400;
  do {
    *(undefined4 *)((long)puVar2 + lVar4 + -0x138) = *(undefined4 *)(param_1 + lVar4);
    lVar4 = lVar4 + 4;
  } while (lVar4 != 0x1a0);
  uVar7 = *(undefined8 *)(param_1 + 0x98);
  puVar2[1] = *(undefined8 *)(param_1 + 0xa0);
  *puVar2 = uVar7;
  uVar8 = *(undefined4 *)(param_1 + 0xa8);
  uVar9 = *(undefined4 *)(param_1 + 0xb0);
  puVar2[3] = *(undefined8 *)(param_1 + 0xb4);
  puVar2[2] = CONCAT44(uVar9,uVar8);
  uVar8 = *(undefined4 *)(param_1 + 0xbc);
  uVar9 = *(undefined4 *)(param_1 + 0xcc);
  puVar2[5] = *(undefined8 *)(param_1 + 0xdc);
  puVar2[4] = CONCAT44(uVar9,uVar8);
  puVar2[6] = *(undefined8 *)(param_1 + 0xe4);
  *(undefined8 *)((long)puVar2 + 0x3c) = *(undefined8 *)(param_1 + 0xfc);
  *(undefined4 *)((long)puVar2 + 0x44) = *(undefined4 *)(param_1 + 0xac);
  puVar2[9] = *(undefined8 *)(param_1 + 0xf0);
  uVar8 = *(undefined4 *)(param_1 + 0xd8);
  *(undefined4 *)(puVar2 + 10) = *(undefined4 *)(param_1 + 0xf8);
  *(undefined4 *)((long)puVar2 + 0x54) = uVar8;
  (**(code **)(*param_2 + 0x28))(param_2,plVar5,&UNK_10f580c71,0x444c5744);
  FUN_10980a240(param_1,param_2);
  iVar3 = *(int *)(param_1 + 0xc);
  if (0 < iVar3) {
    lVar4 = 0;
    do {
      plVar5 = *(long **)(*(long *)(param_1 + 0x18) + lVar4 * 8);
      if ((*(byte *)(plVar5 + 0x23) >> 1 & 1) != 0) {
        plVar1 = plVar5;
        (**(code **)(*plVar5 + 0x20))(plVar5);
        plVar6 = param_2;
        (**(code **)(*param_2 + 0x20))(param_2,(long)(int)plVar1,1);
        plVar1 = plVar5;
        (**(code **)(*plVar5 + 0x28))(plVar5,plVar6[1],param_2);
        (**(code **)(*param_2 + 0x28))(param_2,plVar6,plVar1,0x59444252,plVar5);
        iVar3 = *(int *)(param_1 + 0xc);
      }
      lVar4 = lVar4 + 1;
    } while (lVar4 < iVar3);
  }
  if (0 < *(int *)(param_1 + 0x154)) {
    lVar4 = 0;
    do {
      plVar6 = *(long **)(*(long *)(param_1 + 0x160) + lVar4 * 8);
      plVar5 = plVar6;
      (**(code **)(*plVar6 + 0x48))(plVar6);
      plVar1 = param_2;
      (**(code **)(*param_2 + 0x20))(param_2,(long)(int)plVar5,1);
      plVar5 = plVar6;
      (**(code **)(*plVar6 + 0x50))(plVar6,plVar1[1],param_2);
      (**(code **)(*param_2 + 0x28))(param_2,plVar1,plVar5,0x534e4f43,plVar6);
      lVar4 = lVar4 + 1;
    } while (lVar4 < *(int *)(param_1 + 0x154));
  }
  FUN_10980a7bc(param_1,param_2);
                    /* WARNING: Could not recover jumptable at 0x0001098374bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_2 + 0x48))(param_2);
  return;
}


