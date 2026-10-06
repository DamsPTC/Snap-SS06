/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1097b6e7c; end: 1097b7143;  */

long FUN_1097b6e7c(long *param_1,long param_2)

{
  long lVar1;
  long lVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  long lVar11;
  long lVar12;
  int iVar13;
  int iVar14;
  uint uVar15;
  uint uVar16;
  int *piVar17;
  uint uVar18;
  int iVar19;
  uint uVar20;
  uint uVar21;
  uint uVar22;
  uint uVar23;
  ulong uVar24;
  uint uVar25;
  int iVar26;
  int *piVar27;
  undefined8 uStack_60;
  undefined4 uStack_58;
  
  lVar11 = *param_1;
  lVar12 = param_1[1];
  uVar9 = *(uint *)(param_1 + 3);
  *(int *)((long)param_1 + 0x14) = *(int *)((long)param_1 + 0x14) + 1;
  uStack_60 = CONCAT44((int)((ulong)param_1[2] >> 0x20) << 0x10,(int)param_1[2] << 0x10) |
              0x800000008000;
  uStack_58 = 0x10000;
  piVar27 = *(int **)(lVar11 + 0x38);
  piVar17 = piVar27;
  FUN_1097bf628(piVar27,&uStack_60);
  if (((int)piVar17 != 0) && (0 < (int)uVar9)) {
    uVar24 = 0;
    iVar13 = *piVar27;
    iVar14 = piVar27[3];
    do {
      uVar8 = *(uint *)(lVar11 + 0xa0);
      uVar10 = *(uint *)(lVar11 + 0xa4);
      if ((param_2 == 0) || (*(int *)(param_2 + uVar24 * 4) != 0)) {
        iVar3 = (int)((int)uStack_60 - 0x8000U) >> 0x10;
        uVar25 = uVar8 + iVar3;
        iVar26 = -uVar25;
        do {
          uVar25 = uVar25 - uVar8;
          iVar26 = iVar26 + uVar8;
        } while ((int)uVar8 <= (int)uVar25);
        iVar4 = (int)(uStack_60._4_4_ - 0x8000U) >> 0x10;
        uVar18 = uVar10 + iVar4;
        iVar19 = -uVar18;
        do {
          uVar18 = uVar18 - uVar10;
          iVar19 = iVar19 + uVar10;
        } while ((int)uVar10 <= (int)uVar18);
        uVar22 = uVar8 + iVar3;
        uVar20 = uVar22 + 1;
        uVar22 = ~uVar22;
        do {
          uVar20 = uVar20 - uVar8;
          uVar22 = uVar22 + uVar8;
        } while ((int)uVar8 <= (int)uVar20);
        uVar23 = uVar10 + iVar4;
        uVar21 = uVar23 + 1;
        uVar23 = ~uVar23;
        do {
          uVar21 = uVar21 - uVar10;
          uVar23 = uVar23 + uVar10;
        } while ((int)uVar10 <= (int)uVar21);
        uVar7 = uVar10;
        if (uVar10 < 2) {
          uVar7 = 1;
        }
        uVar5 = uVar21 & ((int)uVar21 >> 0x1f ^ 0xffffffffU);
        uVar15 = 0;
        if (uVar7 != 0) {
          uVar15 = ((uVar5 - (uVar5 != uVar21)) + uVar23) / uVar7;
        }
        if (uVar5 != uVar21) {
          uVar15 = uVar15 + 1;
        }
        uVar23 = uVar20 & ((int)uVar20 >> 0x1f ^ 0xffffffffU);
        uVar5 = uVar8;
        if (uVar8 < 2) {
          uVar5 = 1;
        }
        uVar6 = uVar18 & ((int)uVar18 >> 0x1f ^ 0xffffffffU);
        uVar16 = 0;
        if (uVar5 != 0) {
          uVar16 = ((uVar23 - (uVar23 != uVar20)) + uVar22) / uVar5;
        }
        if (uVar23 != uVar20) {
          uVar16 = uVar16 + 1;
        }
        uVar22 = uVar25 & ((int)uVar25 >> 0x1f ^ 0xffffffffU);
        uVar23 = 0;
        if (uVar7 != 0) {
          uVar23 = ((uVar6 - (uVar6 != uVar18)) + iVar19) / uVar7;
        }
        if (uVar6 != uVar18) {
          uVar23 = uVar23 + 1;
        }
        uVar6 = (int)uStack_60 - 0x8000U >> 9 & 0x7f;
        uVar7 = 0;
        if (uVar5 != 0) {
          uVar7 = ((uVar22 - (uVar22 != uVar25)) + iVar26) / uVar5;
        }
        if (uVar22 != uVar25) {
          uVar7 = uVar7 + 1;
        }
        uVar25 = uVar25 + uVar8 * uVar7;
        uVar20 = uVar20 + uVar8 * uVar16;
        lVar1 = *(long *)(lVar11 + 0xa8) +
                (long)(int)(*(int *)(lVar11 + 0xb8) * (uVar18 + uVar10 * uVar23)) * 4;
        lVar2 = *(long *)(lVar11 + 0xa8) +
                (long)(int)((uVar21 + uVar10 * uVar15) * *(int *)(lVar11 + 0xb8)) * 4;
        uVar8 = *(uint *)(lVar1 + (ulong)uVar25 * 4);
        uVar10 = *(uint *)(lVar1 + (ulong)uVar20 * 4);
        uVar25 = *(uint *)(lVar2 + (ulong)uVar25 * 4);
        uVar22 = uStack_60._4_4_ - 0x8000U >> 9 & 0x7f;
        uVar18 = *(uint *)(lVar2 + (ulong)uVar20 * 4);
        iVar19 = uVar6 * uVar22;
        iVar3 = iVar19 * 4;
        iVar26 = uVar6 * 0x200;
        iVar4 = iVar26 + iVar19 * -4;
        iVar19 = uVar22 * 0x200 + iVar19 * -4;
        iVar26 = (iVar3 - (iVar26 + uVar22 * 0x200)) + 0x10000;
        *(uint *)(lVar12 + uVar24 * 4) =
             (uVar8 >> 0x10 & 0xff00) * iVar26 + (uVar10 >> 0x10 & 0xff00) * iVar4 +
             (uVar25 >> 0x10 & 0xff00) * iVar19 + (uVar18 >> 0x10 & 0xff00) * iVar3 & 0xff000000 |
             (uVar8 >> 0x10 & 0xff) * iVar26 + (uVar10 >> 0x10 & 0xff) * iVar4 +
             (uVar25 >> 0x10 & 0xff) * iVar19 + (uVar18 >> 0x10 & 0xff) * iVar3 & 0xff0000 |
             ((uVar8 & 0xff00) * iVar26 + (uVar10 & 0xff00) * iVar4 + (uVar25 & 0xff00) * iVar19 +
              (uVar18 & 0xff00) * iVar3 & 0xff000000 |
             (uVar8 & 0xff) * iVar26 + (uVar10 & 0xff) * iVar4 + (uVar25 & 0xff) * iVar19 +
             (uVar18 & 0xff) * iVar3) >> 0x10;
      }
      uStack_60._0_4_ = (int)uStack_60 + iVar13;
      uStack_60._4_4_ = uStack_60._4_4_ + iVar14;
      uVar24 = uVar24 + 1;
    } while (uVar24 != uVar9);
  }
  return lVar12;
}



/* Entry: 1097b7144; end: 1097b74cf;  */

long FUN_1097b7144(long *param_1,long param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  long lVar13;
  long lVar14;
  int iVar15;
  int iVar16;
  uint uVar17;
  uint uVar18;
  short sVar19;
  short sVar20;
  uint uVar21;
  uint uVar22;
  uint uVar23;
  int *piVar24;
  int iVar25;
  uint uVar26;
  ulong uVar27;
  uint uVar28;
  uint *puVar29;
  int iVar30;
  int iVar31;
  int iVar32;
  int iVar33;
  int *piVar34;
  uint uVar35;
  int iVar36;
  uint *puVar37;
  int iVar38;
  int iVar39;
  uint *puVar40;
  undefined8 uVar41;
  undefined8 uStack_70;
  undefined4 uStack_68;
  
  lVar13 = *param_1;
  lVar14 = param_1[1];
  uVar11 = *(uint *)(param_1 + 3);
  *(int *)((long)param_1 + 0x14) = *(int *)((long)param_1 + 0x14) + 1;
  puVar37 = *(uint **)(lVar13 + 0x48);
  uVar10 = *puVar37;
  uVar12 = puVar37[1];
  sVar19 = *(short *)((long)puVar37 + 10);
  sVar20 = *(short *)((long)puVar37 + 0xe);
  uStack_70 = CONCAT44((int)((ulong)param_1[2] >> 0x20) << 0x10,(int)param_1[2] << 0x10) |
              0x800000008000;
  uStack_68 = 0x10000;
  piVar34 = *(int **)(lVar13 + 0x38);
  piVar24 = piVar34;
  FUN_1097bf628(piVar34,&uStack_70);
  if (((int)piVar24 != 0) && (0 < (int)uVar11)) {
    uVar27 = 0;
    iVar2 = (int)uVar10 >> 0x10;
    iVar3 = (int)uVar12 >> 0x10;
    uVar21 = 0x10 - (int)sVar19;
    iVar4 = (1 << (ulong)(uVar21 & 0x1f)) >> 1;
    uVar22 = 0x10 - (int)sVar20;
    iVar15 = *piVar34;
    iVar16 = piVar34[3];
    iVar5 = (1 << (ulong)(uVar22 & 0x1f)) >> 1;
    do {
      if ((param_2 == 0) || (*(int *)(param_2 + uVar27 * 4) != 0)) {
        if (iVar3 < 1) {
          uVar26 = 0;
          uVar28 = 0;
          uVar41 = 0;
        }
        else {
          iVar36 = 0;
          iVar33 = 0;
          uVar28 = (uint)uStack_70 & -1 << (ulong)(uVar21 & 0x1f);
          uVar26 = uStack_70._4_4_ & -1 << (ulong)(uVar22 & 0x1f);
          iVar6 = (int)(uVar28 + iVar4 + ((int)(0xfffe - (uVar10 & 0xffff0000)) >> 1)) >> 0x10;
          iVar39 = (int)(uVar26 + iVar5 + ((int)(0xfffe - (uVar12 & 0xffff0000)) >> 1)) >> 0x10;
          iVar1 = iVar3 + iVar39;
          iVar30 = -iVar39;
          uVar41 = 0;
          puVar40 = puVar37 + (long)(iVar2 << (ulong)((int)sVar19 & 0x1f)) +
                              (ulong)(((uVar26 + iVar5 & 0xffff) >> (ulong)(uVar22 & 0x1f)) * iVar3)
                              + 4;
          do {
            puVar29 = puVar37 + (long)(int)(((uVar28 + iVar4 & 0xffff) >> (ulong)(uVar21 & 0x1f)) *
                                           iVar2) + 4;
            iVar38 = iVar6;
            iVar25 = -iVar6;
            if (*puVar40 != 0 && 0 < iVar2) {
              do {
                if (*puVar29 != 0) {
                  uVar17 = *(uint *)(lVar13 + 0xa0);
                  uVar26 = uVar17 + iVar38;
                  iVar31 = iVar25 - uVar17;
                  do {
                    uVar26 = uVar26 - uVar17;
                    iVar31 = iVar31 + uVar17;
                  } while ((int)uVar17 <= (int)uVar26);
                  uVar18 = *(uint *)(lVar13 + 0xa4);
                  uVar35 = iVar39 + uVar18;
                  iVar32 = iVar30 - uVar18;
                  do {
                    uVar35 = uVar35 - uVar18;
                    iVar32 = iVar32 + uVar18;
                  } while ((int)uVar18 <= (int)uVar35);
                  uVar7 = uVar35 & ((int)uVar35 >> 0x1f ^ 0xffffffffU);
                  uVar9 = uVar18;
                  if (uVar18 < 2) {
                    uVar9 = 1;
                  }
                  uVar8 = uVar26 & ((int)uVar26 >> 0x1f ^ 0xffffffffU);
                  uVar23 = 0;
                  if (uVar9 != 0) {
                    uVar23 = ((uVar7 - (uVar7 != uVar35)) + iVar32) / uVar9;
                  }
                  if (uVar7 != uVar35) {
                    uVar23 = uVar23 + 1;
                  }
                  uVar7 = uVar17;
                  if (uVar17 < 2) {
                    uVar7 = 1;
                  }
                  uVar9 = 0;
                  if (uVar7 != 0) {
                    uVar9 = ((uVar8 - (uVar8 != uVar26)) + iVar31) / uVar7;
                  }
                  if (uVar8 != uVar26) {
                    uVar9 = uVar9 + 1;
                  }
                  uVar26 = *(uint *)(*(long *)(lVar13 + 0xa8) +
                                     (long)(int)((uVar35 + uVar18 * uVar23) *
                                                *(int *)(lVar13 + 0xb8)) * 4 +
                                    (ulong)(uVar26 + uVar17 * uVar9) * 4);
                  iVar31 = (int)((ulong)((long)(int)*puVar29 * (long)(int)*puVar40 + 0x8000) >> 0x10
                                );
                  iVar36 = iVar36 + (uVar26 >> 8 & 0xff) * iVar31;
                  iVar33 = iVar33 + (uVar26 & 0xff) * iVar31;
                  uVar41 = CONCAT44((int)((ulong)uVar41 >> 0x20) + (uVar26 >> 0x18) * iVar31,
                                    (int)uVar41 + (uVar26 >> 0x10 & 0xff) * iVar31);
                }
                iVar38 = iVar38 + 1;
                puVar29 = puVar29 + 1;
                iVar25 = iVar25 + -1;
              } while (iVar38 < iVar2 + iVar6);
            }
            iVar39 = iVar39 + 1;
            iVar30 = iVar30 + -1;
            puVar40 = puVar40 + 1;
          } while (iVar39 < iVar1);
          uVar41 = CONCAT44((int)((ulong)uVar41 >> 0x20) + 0x8000 >> 0x10,
                            (int)uVar41 + 0x8000 >> 0x10);
          uVar28 = iVar36 + 0x8000 >> 0x10;
          uVar26 = iVar33 + 0x8000 >> 0x10;
        }
        uVar41 = NEON_smax(uVar41,0,4);
        uVar28 = uVar28 & ((int)uVar28 >> 0x1f ^ 0xffffffffU);
        if (0xfe < (int)uVar28) {
          uVar28 = 0xff;
        }
        uVar26 = uVar26 & ((int)uVar26 >> 0x1f ^ 0xffffffffU);
        if (0xfe < (int)uVar26) {
          uVar26 = 0xff;
        }
        uVar41 = NEON_smin(uVar41,0xff000000ff,4);
        uVar41 = NEON_ushl(uVar41,0x1800000010,4);
        *(uint *)(lVar14 + uVar27 * 4) =
             uVar26 | uVar28 << 8 | (uint)uVar41 | (uint)((ulong)uVar41 >> 0x20);
      }
      uStack_70._0_4_ = (uint)uStack_70 + iVar15;
      uStack_70._4_4_ = uStack_70._4_4_ + iVar16;
      uVar27 = uVar27 + 1;
    } while (uVar27 != uVar11);
  }
  return lVar14;
}



/* Entry: 1097b74d0; end: 1097b77bf;  */

uint * FUN_1097b74d0(long *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  long lVar4;
  uint *puVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int *piVar10;
  uint *puVar11;
  int *piVar12;
  ulong uVar13;
  undefined8 uStack_50;
  undefined4 uStack_48;
  
  lVar4 = *param_1;
  puVar5 = (uint *)param_1[1];
  uVar3 = *(uint *)(param_1 + 3);
  uVar13 = (ulong)uVar3;
  *(int *)((long)param_1 + 0x14) = *(int *)((long)param_1 + 0x14) + 1;
  uStack_50 = CONCAT44((int)((ulong)param_1[2] >> 0x20) << 0x10,(int)param_1[2] << 0x10) |
              0x800000008000;
  uStack_48 = 0x10000;
  piVar12 = *(int **)(lVar4 + 0x38);
  piVar10 = piVar12;
  FUN_1097bf628(piVar12,&uStack_50);
  if (((int)piVar10 != 0) && (0 < (int)uVar3)) {
    iVar6 = *piVar12;
    iVar7 = piVar12[3];
    uStack_50._0_4_ = (int)uStack_50 + -1;
    uStack_50._4_4_ = uStack_50._4_4_ + -1;
    piVar10 = param_2;
    puVar11 = puVar5;
    do {
      if ((param_2 == (int *)0x0) || (*piVar10 != 0)) {
        iVar1 = (int)uStack_50 >> 0x10;
        iVar2 = uStack_50._4_4_ >> 0x10;
        iVar8 = *(int *)(lVar4 + 0xa0) + -1;
        iVar9 = iVar1;
        if (iVar8 <= iVar1) {
          iVar9 = iVar8;
        }
        iVar8 = 0;
        if (-1 < iVar1) {
          iVar8 = iVar9;
        }
        iVar9 = *(int *)(lVar4 + 0xa4) + -1;
        iVar1 = iVar2;
        if (iVar9 <= iVar2) {
          iVar1 = iVar9;
        }
        iVar9 = 0;
        if (-1 < iVar2) {
          iVar9 = iVar1;
        }
        *puVar11 = *(uint *)(*(long *)(lVar4 + 0xa8) + (long)(iVar9 * *(int *)(lVar4 + 0xb8)) * 4 +
                            (long)iVar8 * 4) | 0xff000000;
      }
      puVar11 = puVar11 + 1;
      piVar10 = piVar10 + 1;
      uStack_50._0_4_ = (int)uStack_50 + iVar6;
      uStack_50._4_4_ = uStack_50._4_4_ + iVar7;
      uVar13 = uVar13 - 1;
    } while (uVar13 != 0);
  }
  return puVar5;
}



/* Entry: 1097b77c0; end: 1097b7a9f;  */

long FUN_1097b77c0(long *param_1,long param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  long lVar10;
  long lVar11;
  int iVar12;
  int iVar13;
  short sVar14;
  short sVar15;
  int iVar16;
  int iVar17;
  uint uVar18;
  uint uVar19;
  int *piVar20;
  int iVar21;
  ulong uVar22;
  uint uVar23;
  uint uVar24;
  uint *puVar25;
  int iVar26;
  int *piVar27;
  int iVar28;
  uint *puVar29;
  int iVar30;
  int iVar31;
  uint *puVar32;
  undefined8 uVar33;
  undefined8 uStack_70;
  undefined4 uStack_68;
  
  lVar10 = *param_1;
  lVar11 = param_1[1];
  uVar8 = *(uint *)(param_1 + 3);
  *(int *)((long)param_1 + 0x14) = *(int *)((long)param_1 + 0x14) + 1;
  puVar29 = *(uint **)(lVar10 + 0x48);
  uVar7 = *puVar29;
  uVar9 = puVar29[1];
  sVar14 = *(short *)((long)puVar29 + 10);
  sVar15 = *(short *)((long)puVar29 + 0xe);
  uStack_70 = CONCAT44((int)((ulong)param_1[2] >> 0x20) << 0x10,(int)param_1[2] << 0x10) |
              0x800000008000;
  uStack_68 = 0x10000;
  piVar27 = *(int **)(lVar10 + 0x38);
  piVar20 = piVar27;
  FUN_1097bf628(piVar27,&uStack_70);
  if (((int)piVar20 != 0) && (0 < (int)uVar8)) {
    uVar22 = 0;
    iVar2 = (int)uVar7 >> 0x10;
    iVar3 = (int)uVar9 >> 0x10;
    uVar18 = 0x10 - (int)sVar14;
    iVar4 = (1 << (ulong)(uVar18 & 0x1f)) >> 1;
    uVar19 = 0x10 - (int)sVar15;
    iVar12 = *piVar27;
    iVar13 = piVar27[3];
    iVar5 = (1 << (ulong)(uVar19 & 0x1f)) >> 1;
    do {
      if ((param_2 == 0) || (*(int *)(param_2 + uVar22 * 4) != 0)) {
        if (iVar3 < 1) {
          uVar23 = 0;
          uVar24 = 0;
          uVar33 = 0;
        }
        else {
          iVar28 = 0;
          iVar26 = 0;
          uVar24 = (uint)uStack_70 & -1 << (ulong)(uVar18 & 0x1f);
          uVar23 = uStack_70._4_4_ & -1 << (ulong)(uVar19 & 0x1f);
          iVar6 = (int)(uVar24 + iVar4 + ((int)(0xfffe - (uVar7 & 0xffff0000)) >> 1)) >> 0x10;
          iVar31 = (int)(uVar23 + iVar5 + ((int)(0xfffe - (uVar9 & 0xffff0000)) >> 1)) >> 0x10;
          iVar1 = iVar3 + iVar31;
          uVar33 = 0;
          puVar32 = puVar29 + (long)(iVar2 << (ulong)((int)sVar14 & 0x1f)) +
                              (ulong)(((uVar23 + iVar5 & 0xffff) >> (ulong)(uVar19 & 0x1f)) * iVar3)
                              + 4;
          do {
            puVar25 = puVar29 + (long)(int)(((uVar24 + iVar4 & 0xffff) >> (ulong)(uVar18 & 0x1f)) *
                                           iVar2) + 4;
            iVar30 = iVar6;
            if (*puVar32 != 0 && 0 < iVar2) {
              do {
                if (*puVar25 != 0) {
                  iVar16 = *(int *)(lVar10 + 0xa0) + -1;
                  iVar21 = iVar30;
                  if (iVar16 <= iVar30) {
                    iVar21 = iVar16;
                  }
                  iVar16 = 0;
                  if (-1 < iVar30) {
                    iVar16 = iVar21;
                  }
                  iVar17 = *(int *)(lVar10 + 0xa4) + -1;
                  iVar21 = iVar31;
                  if (iVar17 <= iVar31) {
                    iVar21 = iVar17;
                  }
                  iVar17 = 0;
                  if (-1 < iVar31) {
                    iVar17 = iVar21;
                  }
                  uVar23 = *(uint *)(*(long *)(lVar10 + 0xa8) +
                                     (long)(iVar17 * *(int *)(lVar10 + 0xb8)) * 4 + (long)iVar16 * 4
                                    );
                  iVar21 = (int)((ulong)((long)(int)*puVar25 * (long)(int)*puVar32 + 0x8000) >> 0x10
                                );
                  iVar28 = iVar28 + (uVar23 >> 8 & 0xff) * iVar21;
                  iVar26 = iVar26 + (uVar23 & 0xff) * iVar21;
                  uVar33 = CONCAT44((int)((ulong)uVar33 >> 0x20) + iVar21 * 0xff,
                                    (int)uVar33 + (uVar23 >> 0x10 & 0xff) * iVar21);
                }
                iVar30 = iVar30 + 1;
                puVar25 = puVar25 + 1;
              } while (iVar30 < iVar2 + iVar6);
            }
            iVar31 = iVar31 + 1;
            puVar32 = puVar32 + 1;
          } while (iVar31 < iVar1);
          uVar33 = CONCAT44((int)((ulong)uVar33 >> 0x20) + 0x8000 >> 0x10,
                            (int)uVar33 + 0x8000 >> 0x10);
          uVar24 = iVar28 + 0x8000 >> 0x10;
          uVar23 = iVar26 + 0x8000 >> 0x10;
        }
        uVar33 = NEON_smax(uVar33,0,4);
        uVar24 = uVar24 & ((int)uVar24 >> 0x1f ^ 0xffffffffU);
        if (0xfe < (int)uVar24) {
          uVar24 = 0xff;
        }
        uVar23 = uVar23 & ((int)uVar23 >> 0x1f ^ 0xffffffffU);
        if (0xfe < (int)uVar23) {
          uVar23 = 0xff;
        }
        uVar33 = NEON_smin(uVar33,0xff000000ff,4);
        uVar33 = NEON_ushl(uVar33,0x1800000010,4);
        *(uint *)(lVar11 + uVar22 * 4) =
             uVar23 | uVar24 << 8 | (uint)uVar33 | (uint)((ulong)uVar33 >> 0x20);
      }
      uStack_70._0_4_ = (uint)uStack_70 + iVar12;
      uStack_70._4_4_ = uStack_70._4_4_ + iVar13;
      uVar22 = uVar22 + 1;
    } while (uVar22 != uVar8);
  }
  return lVar11;
}



/* Entry: 1097b7aa0; end: 1097b7e13;  */

uint * FUN_1097b7aa0(long *param_1,int *param_2)

{
  int iVar1;
  uint uVar2;
  long lVar3;
  uint *puVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  uint *puVar8;
  uint uVar9;
  int *piVar10;
  ulong uVar11;
  undefined8 uStack_50;
  undefined4 uStack_48;
  
  lVar3 = *param_1;
  puVar4 = (uint *)param_1[1];
  uVar9 = *(uint *)(param_1 + 3);
  uVar11 = (ulong)uVar9;
  *(int *)((long)param_1 + 0x14) = *(int *)((long)param_1 + 0x14) + 1;
  uStack_50 = CONCAT44((int)((ulong)param_1[2] >> 0x20) << 0x10,(int)param_1[2] << 0x10) |
              0x800000008000;
  uStack_48 = 0x10000;
  piVar10 = *(int **)(lVar3 + 0x38);
  piVar7 = piVar10;
  FUN_1097bf628(piVar10,&uStack_50);
  if (((int)piVar7 != 0) && (0 < (int)uVar9)) {
    iVar5 = *piVar10;
    iVar6 = piVar10[3];
    uStack_50._0_4_ = (int)uStack_50 + -1;
    uStack_50._4_4_ = uStack_50._4_4_ + -1;
    piVar7 = param_2;
    puVar8 = puVar4;
    do {
      if ((param_2 == (int *)0x0) || (*piVar7 != 0)) {
        uVar9 = 0;
        iVar1 = uStack_50._4_4_ >> 0x10;
        if ((-1 < iVar1) &&
           (((iVar1 < *(int *)(lVar3 + 0xa4) && (uVar2 = (int)uStack_50 >> 0x10, -1 < (int)uVar2))
            && ((int)uVar2 < *(int *)(lVar3 + 0xa0))))) {
          uVar9 = *(uint *)(*(long *)(lVar3 + 0xa8) + (long)(*(int *)(lVar3 + 0xb8) * iVar1) * 4 +
                           (ulong)uVar2 * 4) | 0xff000000;
        }
        *puVar8 = uVar9;
      }
      puVar8 = puVar8 + 1;
      piVar7 = piVar7 + 1;
      uStack_50._0_4_ = (int)uStack_50 + iVar5;
      uStack_50._4_4_ = uStack_50._4_4_ + iVar6;
      uVar11 = uVar11 - 1;
    } while (uVar11 != 0);
  }
  return puVar4;
}



/* Entry: 1097b7e14; end: 1097b80f3;  */

long FUN_1097b7e14(long *param_1,long param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  long lVar10;
  long lVar11;
  int iVar12;
  int iVar13;
  short sVar14;
  short sVar15;
  uint uVar16;
  uint uVar17;
  int *piVar18;
  uint uVar19;
  ulong uVar20;
  uint uVar21;
  int iVar22;
  int iVar23;
  int *piVar24;
  int iVar25;
  uint *puVar26;
  uint uVar27;
  uint *puVar28;
  uint *puVar29;
  long lVar30;
  undefined8 uVar31;
  undefined8 uStack_70;
  undefined4 uStack_68;
  
  lVar10 = *param_1;
  lVar11 = param_1[1];
  uVar8 = *(uint *)(param_1 + 3);
  *(int *)((long)param_1 + 0x14) = *(int *)((long)param_1 + 0x14) + 1;
  puVar26 = *(uint **)(lVar10 + 0x48);
  uVar7 = *puVar26;
  uVar9 = puVar26[1];
  sVar14 = *(short *)((long)puVar26 + 10);
  sVar15 = *(short *)((long)puVar26 + 0xe);
  uStack_70 = CONCAT44((int)((ulong)param_1[2] >> 0x20) << 0x10,(int)param_1[2] << 0x10) |
              0x800000008000;
  uStack_68 = 0x10000;
  piVar24 = *(int **)(lVar10 + 0x38);
  piVar18 = piVar24;
  FUN_1097bf628(piVar24,&uStack_70);
  if (((int)piVar18 != 0) && (0 < (int)uVar8)) {
    uVar20 = 0;
    iVar3 = (int)uVar7 >> 0x10;
    iVar4 = (int)uVar9 >> 0x10;
    uVar16 = 0x10 - (int)sVar14;
    iVar5 = (1 << (ulong)(uVar16 & 0x1f)) >> 1;
    uVar17 = 0x10 - (int)sVar15;
    iVar12 = *piVar24;
    iVar13 = piVar24[3];
    iVar6 = (1 << (ulong)(uVar17 & 0x1f)) >> 1;
    do {
      if ((param_2 == 0) || (*(int *)(param_2 + uVar20 * 4) != 0)) {
        if (iVar4 < 1) {
          uVar21 = 0;
          uVar27 = 0;
          uVar31 = 0;
        }
        else {
          iVar25 = 0;
          iVar23 = 0;
          uVar19 = uStack_70._4_4_ & -1 << (ulong)(uVar17 & 0x1f);
          uVar27 = (int)(uVar19 + iVar6 + ((int)(0xfffe - (uVar9 & 0xffff0000)) >> 1)) >> 0x10;
          iVar1 = iVar4 + uVar27;
          uVar2 = (uint)uStack_70 & -1 << (ulong)(uVar16 & 0x1f);
          uVar21 = uVar2 + iVar5 + ((int)(0xfffe - (uVar7 & 0xffff0000)) >> 1);
          uVar31 = 0;
          puVar28 = puVar26 + (long)(iVar3 << (ulong)((int)sVar14 & 0x1f)) +
                              (ulong)(((uVar19 + iVar6 & 0xffff) >> (ulong)(uVar17 & 0x1f)) * iVar4)
                              + 4;
          do {
            puVar29 = puVar26 + (long)(int)(((uVar2 + iVar5 & 0xffff) >> (ulong)(uVar16 & 0x1f)) *
                                           iVar3) + 4;
            lVar30 = (long)((ulong)uVar21 << 0x20) >> 0x30;
            if (*puVar28 != 0 && 0 < iVar3) {
              do {
                if (*puVar29 != 0) {
                  if ((((int)(uVar27 | (uint)lVar30) < 0) || (*(int *)(lVar10 + 0xa0) <= lVar30)) ||
                     (*(int *)(lVar10 + 0xa4) <= (int)uVar27)) {
                    uVar19 = 0;
                  }
                  else {
                    uVar19 = *(uint *)(*(long *)(lVar10 + 0xa8) +
                                       (long)(int)(uVar27 * *(int *)(lVar10 + 0xb8)) * 4 +
                                      lVar30 * 4) | 0xff000000;
                  }
                  iVar22 = (int)((ulong)((long)(int)*puVar29 * (long)(int)*puVar28 + 0x8000) >> 0x10
                                );
                  iVar25 = iVar25 + (uVar19 >> 8 & 0xff) * iVar22;
                  iVar23 = iVar23 + (uVar19 & 0xff) * iVar22;
                  uVar31 = CONCAT44((int)((ulong)uVar31 >> 0x20) + (uVar19 >> 0x18) * iVar22,
                                    (int)uVar31 + (uVar19 >> 0x10 & 0xff) * iVar22);
                }
                lVar30 = lVar30 + 1;
                puVar29 = puVar29 + 1;
              } while (lVar30 < iVar3 + ((int)uVar21 >> 0x10));
            }
            uVar27 = uVar27 + 1;
            puVar28 = puVar28 + 1;
          } while ((int)uVar27 < iVar1);
          uVar31 = CONCAT44((int)((ulong)uVar31 >> 0x20) + 0x8000 >> 0x10,
                            (int)uVar31 + 0x8000 >> 0x10);
          uVar27 = iVar25 + 0x8000 >> 0x10;
          uVar21 = iVar23 + 0x8000 >> 0x10;
        }
        uVar31 = NEON_smax(uVar31,0,4);
        uVar27 = uVar27 & ((int)uVar27 >> 0x1f ^ 0xffffffffU);
        if (0xfe < (int)uVar27) {
          uVar27 = 0xff;
        }
        uVar21 = uVar21 & ((int)uVar21 >> 0x1f ^ 0xffffffffU);
        if (0xfe < (int)uVar21) {
          uVar21 = 0xff;
        }
        uVar31 = NEON_smin(uVar31,0xff000000ff,4);
        uVar31 = NEON_ushl(uVar31,0x1800000010,4);
        *(uint *)(lVar11 + uVar20 * 4) =
             uVar21 | uVar27 << 8 | (uint)uVar31 | (uint)((ulong)uVar31 >> 0x20);
      }
      uStack_70._0_4_ = (uint)uStack_70 + iVar12;
      uStack_70._4_4_ = uStack_70._4_4_ + iVar13;
      uVar20 = uVar20 + 1;
    } while (uVar20 != uVar8);
  }
  return lVar11;
}



/* Entry: 1097b80f4; end: 1097b84c7;  */

uint * FUN_1097b80f4(long *param_1,int *param_2)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  uint *puVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int *piVar10;
  uint *puVar11;
  uint uVar12;
  int *piVar13;
  ulong uVar14;
  undefined8 uStack_50;
  undefined4 uStack_48;
  
  lVar3 = *param_1;
  puVar4 = (uint *)param_1[1];
  uVar12 = *(uint *)(param_1 + 3);
  uVar14 = (ulong)uVar12;
  *(int *)((long)param_1 + 0x14) = *(int *)((long)param_1 + 0x14) + 1;
  uStack_50 = CONCAT44((int)((ulong)param_1[2] >> 0x20) << 0x10,(int)param_1[2] << 0x10) |
              0x800000008000;
  uStack_48 = 0x10000;
  piVar13 = *(int **)(lVar3 + 0x38);
  piVar10 = piVar13;
  FUN_1097bf628(piVar13,&uStack_50);
  if (((int)piVar10 != 0) && (0 < (int)uVar12)) {
    iVar5 = *piVar13;
    iVar6 = piVar13[3];
    uStack_50._0_4_ = (int)uStack_50 + -1;
    uStack_50._4_4_ = uStack_50._4_4_ + -1;
    piVar10 = param_2;
    puVar11 = puVar4;
    do {
      if ((param_2 == (int *)0x0) || (*piVar10 != 0)) {
        uVar12 = (int)uStack_50 >> 0x10;
        iVar7 = *(int *)(lVar3 + 0xa0) * 2;
        if ((int)uVar12 < 0) {
          iVar8 = 0;
          if (iVar7 != 0) {
            iVar8 = (int)~uVar12 / iVar7;
          }
          uVar12 = iVar7 + ~(~uVar12 - iVar8 * iVar7);
        }
        else {
          iVar8 = 0;
          if (iVar7 != 0) {
            iVar8 = (int)uVar12 / iVar7;
          }
          uVar12 = uVar12 - iVar8 * iVar7;
        }
        uVar1 = uStack_50._4_4_ >> 0x10;
        if (*(int *)(lVar3 + 0xa0) <= (int)uVar12) {
          uVar12 = iVar7 + ~uVar12;
        }
        iVar7 = *(int *)(lVar3 + 0xa4) * 2;
        iVar8 = 0;
        if (iVar7 != 0) {
          iVar8 = (int)uVar1 / iVar7;
        }
        iVar9 = 0;
        if (iVar7 != 0) {
          iVar9 = (int)~uVar1 / iVar7;
        }
        uVar2 = uVar1 - iVar8 * iVar7;
        if ((uVar1 & 0x80000000) != 0) {
          uVar2 = iVar7 + ~(~uVar1 - iVar9 * iVar7);
        }
        if (*(int *)(lVar3 + 0xa4) <= (int)uVar2) {
          uVar2 = iVar7 + ~uVar2;
        }
        *puVar11 = *(uint *)(*(long *)(lVar3 + 0xa8) +
                             (long)(int)(*(int *)(lVar3 + 0xb8) * uVar2) * 4 + (long)(int)uVar12 * 4
                            ) | 0xff000000;
      }
      puVar11 = puVar11 + 1;
      piVar10 = piVar10 + 1;
      uStack_50._0_4_ = (int)uStack_50 + iVar5;
      uStack_50._4_4_ = uStack_50._4_4_ + iVar6;
      uVar14 = uVar14 - 1;
    } while (uVar14 != 0);
  }
  return puVar4;
}



/* Entry: 1097b84c8; end: 1097b880f;  */

long FUN_1097b84c8(long *param_1,long param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  long lVar10;
  long lVar11;
  int iVar12;
  int iVar13;
  uint uVar14;
  short sVar15;
  short sVar16;
  int iVar17;
  int iVar18;
  uint uVar19;
  uint uVar20;
  int *piVar21;
  uint uVar22;
  uint uVar23;
  ulong uVar24;
  uint uVar25;
  uint *puVar26;
  int iVar27;
  int iVar28;
  int *piVar29;
  int iVar30;
  uint *puVar31;
  uint uVar32;
  uint uVar33;
  uint *puVar34;
  undefined8 uVar35;
  undefined8 uStack_70;
  undefined4 uStack_68;
  
  lVar10 = *param_1;
  lVar11 = param_1[1];
  uVar8 = *(uint *)(param_1 + 3);
  *(int *)((long)param_1 + 0x14) = *(int *)((long)param_1 + 0x14) + 1;
  puVar31 = *(uint **)(lVar10 + 0x48);
  uVar7 = *puVar31;
  uVar9 = puVar31[1];
  sVar15 = *(short *)((long)puVar31 + 10);
  sVar16 = *(short *)((long)puVar31 + 0xe);
  uStack_70 = CONCAT44((int)((ulong)param_1[2] >> 0x20) << 0x10,(int)param_1[2] << 0x10) |
              0x800000008000;
  uStack_68 = 0x10000;
  piVar29 = *(int **)(lVar10 + 0x38);
  piVar21 = piVar29;
  FUN_1097bf628(piVar29,&uStack_70);
  if (((int)piVar21 != 0) && (0 < (int)uVar8)) {
    uVar24 = 0;
    iVar2 = (int)uVar7 >> 0x10;
    iVar3 = (int)uVar9 >> 0x10;
    uVar19 = 0x10 - (int)sVar15;
    iVar4 = (1 << (ulong)(uVar19 & 0x1f)) >> 1;
    uVar20 = 0x10 - (int)sVar16;
    iVar12 = *piVar29;
    iVar13 = piVar29[3];
    iVar5 = (1 << (ulong)(uVar20 & 0x1f)) >> 1;
    do {
      if ((param_2 == 0) || (*(int *)(param_2 + uVar24 * 4) != 0)) {
        if (iVar3 < 1) {
          uVar25 = 0;
          uVar33 = 0;
          uVar35 = 0;
        }
        else {
          iVar30 = 0;
          iVar28 = 0;
          uVar25 = (uint)uStack_70 & -1 << (ulong)(uVar19 & 0x1f);
          uVar32 = uStack_70._4_4_ & -1 << (ulong)(uVar20 & 0x1f);
          uVar6 = (int)(uVar25 + iVar4 + ((int)(0xfffe - (uVar7 & 0xffff0000)) >> 1)) >> 0x10;
          uVar33 = (int)(uVar32 + iVar5 + ((int)(0xfffe - (uVar9 & 0xffff0000)) >> 1)) >> 0x10;
          iVar1 = iVar3 + uVar33;
          uVar35 = 0;
          puVar34 = puVar31 + (long)(iVar2 << (ulong)((int)sVar15 & 0x1f)) +
                              (ulong)(((uVar32 + iVar5 & 0xffff) >> (ulong)(uVar20 & 0x1f)) * iVar3)
                              + 4;
          do {
            if (*puVar34 != 0 && 0 < iVar2) {
              puVar26 = puVar31 + (long)(int)(((uVar25 + iVar4 & 0xffff) >> (ulong)(uVar19 & 0x1f))
                                             * iVar2) + 4;
              uVar32 = uVar6;
              uVar22 = ~uVar6;
              do {
                if (*puVar26 != 0) {
                  iVar27 = *(int *)(lVar10 + 0xa0) * 2;
                  iVar17 = 0;
                  if (iVar27 != 0) {
                    iVar17 = (int)uVar32 / iVar27;
                  }
                  iVar18 = 0;
                  if (iVar27 != 0) {
                    iVar18 = (int)uVar22 / iVar27;
                  }
                  uVar14 = uVar32 - iVar17 * iVar27;
                  if ((uVar32 & 0x80000000) != 0) {
                    uVar14 = iVar27 + ~(uVar22 - iVar18 * iVar27);
                  }
                  if (*(int *)(lVar10 + 0xa0) <= (int)uVar14) {
                    uVar14 = iVar27 + ~uVar14;
                  }
                  iVar27 = *(int *)(lVar10 + 0xa4) * 2;
                  if ((int)uVar33 < 0) {
                    iVar17 = 0;
                    if (iVar27 != 0) {
                      iVar17 = (int)~uVar33 / iVar27;
                    }
                    uVar23 = iVar27 + ~(~uVar33 - iVar17 * iVar27);
                  }
                  else {
                    iVar17 = 0;
                    if (iVar27 != 0) {
                      iVar17 = (int)uVar33 / iVar27;
                    }
                    uVar23 = uVar33 - iVar17 * iVar27;
                  }
                  if (*(int *)(lVar10 + 0xa4) <= (int)uVar23) {
                    uVar23 = iVar27 + ~uVar23;
                  }
                  uVar14 = *(uint *)(*(long *)(lVar10 + 0xa8) +
                                     (long)(int)(*(int *)(lVar10 + 0xb8) * uVar23) * 4 +
                                    (long)(int)uVar14 * 4);
                  iVar27 = (int)((ulong)((long)(int)*puVar26 * (long)(int)*puVar34 + 0x8000) >> 0x10
                                );
                  iVar30 = iVar30 + (uVar14 >> 8 & 0xff) * iVar27;
                  iVar28 = iVar28 + (uVar14 & 0xff) * iVar27;
                  uVar35 = CONCAT44((int)((ulong)uVar35 >> 0x20) + iVar27 * 0xff,
                                    (int)uVar35 + (uVar14 >> 0x10 & 0xff) * iVar27);
                }
                uVar32 = uVar32 + 1;
                uVar22 = uVar22 - 1;
                puVar26 = puVar26 + 1;
              } while ((int)uVar32 < (int)(iVar2 + uVar6));
            }
            uVar33 = uVar33 + 1;
            puVar34 = puVar34 + 1;
          } while ((int)uVar33 < iVar1);
          uVar35 = CONCAT44((int)((ulong)uVar35 >> 0x20) + 0x8000 >> 0x10,
                            (int)uVar35 + 0x8000 >> 0x10);
          uVar33 = iVar30 + 0x8000 >> 0x10;
          uVar25 = iVar28 + 0x8000 >> 0x10;
        }
        uVar35 = NEON_smax(uVar35,0,4);
        uVar33 = uVar33 & ((int)uVar33 >> 0x1f ^ 0xffffffffU);
        if (0xfe < (int)uVar33) {
          uVar33 = 0xff;
        }
        uVar25 = uVar25 & ((int)uVar25 >> 0x1f ^ 0xffffffffU);
        if (0xfe < (int)uVar25) {
          uVar25 = 0xff;
        }
        uVar35 = NEON_smin(uVar35,0xff000000ff,4);
        uVar35 = NEON_ushl(uVar35,0x1800000010,4);
        *(uint *)(lVar11 + uVar24 * 4) =
             uVar25 | uVar33 << 8 | (uint)uVar35 | (uint)((ulong)uVar35 >> 0x20);
      }
      uStack_70._0_4_ = (uint)uStack_70 + iVar12;
      uStack_70._4_4_ = uStack_70._4_4_ + iVar13;
      uVar24 = uVar24 + 1;
    } while (uVar24 != uVar8);
  }
  return lVar11;
}



/* Entry: 1097b8810; end: 1097b896b;  */

long FUN_1097b8810(long *param_1,long param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  long lVar7;
  long lVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  int *piVar13;
  ulong uVar14;
  uint uVar15;
  int iVar16;
  uint uVar17;
  int *piVar18;
  undefined8 uStack_50;
  undefined4 uStack_48;
  
  lVar7 = *param_1;
  lVar8 = param_1[1];
  uVar5 = *(uint *)(param_1 + 3);
  *(int *)((long)param_1 + 0x14) = *(int *)((long)param_1 + 0x14) + 1;
  uStack_50 = CONCAT44((int)((ulong)param_1[2] >> 0x20) << 0x10,(int)param_1[2] << 0x10) |
              0x800000008000;
  uStack_48 = 0x10000;
  piVar18 = *(int **)(lVar7 + 0x38);
  piVar13 = piVar18;
  FUN_1097bf628(piVar18,&uStack_50);
  if (((int)piVar13 != 0) && (0 < (int)uVar5)) {
    uVar14 = 0;
    iVar9 = *piVar18;
    iVar10 = piVar18[3];
    do {
      if ((param_2 == 0) || (*(int *)(param_2 + uVar14 * 4) != 0)) {
        uVar4 = *(uint *)(lVar7 + 0xa0);
        uVar6 = *(uint *)(lVar7 + 0xa4);
        uVar15 = uVar4 + ((int)uStack_50 + -1 >> 0x10);
        iVar16 = -uVar15;
        do {
          uVar15 = uVar15 - uVar4;
          iVar16 = iVar16 + uVar4;
        } while ((int)uVar4 <= (int)uVar15);
        uVar17 = uVar6 + (uStack_50._4_4_ + -1 >> 0x10);
        iVar12 = -uVar17;
        do {
          uVar17 = uVar17 - uVar6;
          iVar12 = iVar12 + uVar6;
        } while ((int)uVar6 <= (int)uVar17);
        uVar1 = uVar17 & ((int)uVar17 >> 0x1f ^ 0xffffffffU);
        uVar3 = uVar6;
        if (uVar6 < 2) {
          uVar3 = 1;
        }
        uVar2 = uVar15 & ((int)uVar15 >> 0x1f ^ 0xffffffffU);
        uVar11 = 0;
        if (uVar3 != 0) {
          uVar11 = ((uVar1 - (uVar1 != uVar17)) + iVar12) / uVar3;
        }
        if (uVar1 != uVar17) {
          uVar11 = uVar11 + 1;
        }
        uVar1 = uVar4;
        if (uVar4 < 2) {
          uVar1 = 1;
        }
        uVar3 = 0;
        if (uVar1 != 0) {
          uVar3 = ((uVar2 - (uVar2 != uVar15)) + iVar16) / uVar1;
        }
        if (uVar2 != uVar15) {
          uVar3 = uVar3 + 1;
        }
        *(uint *)(lVar8 + uVar14 * 4) =
             *(uint *)(*(long *)(lVar7 + 0xa8) +
                       (long)(int)((uVar17 + uVar6 * uVar11) * *(int *)(lVar7 + 0xb8)) * 4 +
                      (ulong)(uVar15 + uVar4 * uVar3) * 4) | 0xff000000;
      }
      uStack_50._0_4_ = (int)uStack_50 + iVar9;
      uStack_50._4_4_ = uStack_50._4_4_ + iVar10;
      uVar14 = uVar14 + 1;
    } while (uVar14 != uVar5);
  }
  return lVar8;
}



/* Entry: 1097b896c; end: 1097b8c07;  */

long FUN_1097b896c(long *param_1,long param_2)

{
  long lVar1;
  long lVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  long lVar11;
  long lVar12;
  int iVar13;
  int iVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  int *piVar19;
  int iVar20;
  uint uVar21;
  uint uVar22;
  uint uVar23;
  uint uVar24;
  ulong uVar25;
  uint uVar26;
  int iVar27;
  int *piVar28;
  undefined8 uStack_60;
  undefined4 uStack_58;
  
  lVar11 = *param_1;
  lVar12 = param_1[1];
  uVar9 = *(uint *)(param_1 + 3);
  *(int *)((long)param_1 + 0x14) = *(int *)((long)param_1 + 0x14) + 1;
  uStack_60 = CONCAT44((int)((ulong)param_1[2] >> 0x20) << 0x10,(int)param_1[2] << 0x10) |
              0x800000008000;
  uStack_58 = 0x10000;
  piVar28 = *(int **)(lVar11 + 0x38);
  piVar19 = piVar28;
  FUN_1097bf628(piVar28,&uStack_60);
  if (((int)piVar19 != 0) && (0 < (int)uVar9)) {
    uVar25 = 0;
    iVar13 = *piVar28;
    iVar14 = piVar28[3];
    do {
      uVar8 = *(uint *)(lVar11 + 0xa0);
      uVar10 = *(uint *)(lVar11 + 0xa4);
      if ((param_2 == 0) || (*(int *)(param_2 + uVar25 * 4) != 0)) {
        iVar3 = (int)((int)uStack_60 - 0x8000U) >> 0x10;
        uVar26 = uVar8 + iVar3;
        iVar27 = -uVar26;
        do {
          uVar26 = uVar26 - uVar8;
          iVar27 = iVar27 + uVar8;
        } while ((int)uVar8 <= (int)uVar26);
        iVar4 = (int)(uStack_60._4_4_ - 0x8000U) >> 0x10;
        uVar18 = uVar10 + iVar4;
        iVar20 = -uVar18;
        do {
          uVar18 = uVar18 - uVar10;
          iVar20 = iVar20 + uVar10;
        } while ((int)uVar10 <= (int)uVar18);
        uVar23 = uVar8 + iVar3;
        uVar21 = uVar23 + 1;
        uVar23 = ~uVar23;
        do {
          uVar21 = uVar21 - uVar8;
          uVar23 = uVar23 + uVar8;
        } while ((int)uVar8 <= (int)uVar21);
        uVar24 = uVar10 + iVar4;
        uVar22 = uVar24 + 1;
        uVar24 = ~uVar24;
        do {
          uVar22 = uVar22 - uVar10;
          uVar24 = uVar24 + uVar10;
        } while ((int)uVar10 <= (int)uVar22);
        uVar7 = uVar10;
        if (uVar10 < 2) {
          uVar7 = 1;
        }
        uVar5 = uVar22 & ((int)uVar22 >> 0x1f ^ 0xffffffffU);
        uVar16 = 0;
        if (uVar7 != 0) {
          uVar16 = ((uVar5 - (uVar5 != uVar22)) + uVar24) / uVar7;
        }
        if (uVar5 != uVar22) {
          uVar16 = uVar16 + 1;
        }
        uVar24 = uVar21 & ((int)uVar21 >> 0x1f ^ 0xffffffffU);
        uVar5 = uVar8;
        if (uVar8 < 2) {
          uVar5 = 1;
        }
        uVar6 = uVar18 & ((int)uVar18 >> 0x1f ^ 0xffffffffU);
        uVar17 = 0;
        if (uVar5 != 0) {
          uVar17 = ((uVar24 - (uVar24 != uVar21)) + uVar23) / uVar5;
        }
        if (uVar24 != uVar21) {
          uVar17 = uVar17 + 1;
        }
        uVar23 = uVar26 & ((int)uVar26 >> 0x1f ^ 0xffffffffU);
        uVar24 = 0;
        if (uVar7 != 0) {
          uVar24 = ((uVar6 - (uVar6 != uVar18)) + iVar20) / uVar7;
        }
        if (uVar6 != uVar18) {
          uVar24 = uVar24 + 1;
        }
        uVar6 = (int)uStack_60 - 0x8000U >> 9 & 0x7f;
        uVar15 = uStack_60._4_4_ - 0x8000U >> 9 & 0x7f;
        uVar7 = 0;
        if (uVar5 != 0) {
          uVar7 = ((uVar23 - (uVar23 != uVar26)) + iVar27) / uVar5;
        }
        if (uVar23 != uVar26) {
          uVar7 = uVar7 + 1;
        }
        uVar26 = uVar26 + uVar8 * uVar7;
        uVar21 = uVar21 + uVar8 * uVar17;
        lVar1 = *(long *)(lVar11 + 0xa8) +
                (long)(int)(*(int *)(lVar11 + 0xb8) * (uVar18 + uVar10 * uVar24)) * 4;
        lVar2 = *(long *)(lVar11 + 0xa8) +
                (long)(int)((uVar22 + uVar10 * uVar16) * *(int *)(lVar11 + 0xb8)) * 4;
        uVar8 = *(uint *)(lVar1 + (ulong)uVar26 * 4);
        uVar10 = *(uint *)(lVar1 + (ulong)uVar21 * 4);
        uVar26 = *(uint *)(lVar2 + (ulong)uVar26 * 4);
        uVar18 = *(uint *)(lVar2 + (ulong)uVar21 * 4);
        iVar20 = uVar6 * uVar15;
        iVar3 = iVar20 * 4;
        iVar27 = uVar6 * 0x200;
        iVar4 = iVar27 + iVar20 * -4;
        iVar20 = uVar15 * 0x200 + iVar20 * -4;
        iVar27 = (iVar3 - (iVar27 + uVar15 * 0x200)) + 0x10000;
        *(uint *)(lVar12 + uVar25 * 4) =
             (uVar8 >> 0x10 & 0xff) * iVar27 + (uVar10 >> 0x10 & 0xff) * iVar4 +
             (uVar26 >> 0x10 & 0xff) * iVar20 + (uVar18 >> 0x10 & 0xff) * iVar3 & 0xff0000 |
             ((uVar8 & 0xff00) * iVar27 + (uVar10 & 0xff00) * iVar4 + (uVar26 & 0xff00) * iVar20 +
              (uVar18 & 0xff00) * iVar3 & 0xff000000 |
             (uVar8 & 0xff) * iVar27 + (uVar10 & 0xff) * iVar4 + (uVar26 & 0xff) * iVar20 +
             (uVar18 & 0xff) * iVar3) >> 0x10 | 0xff000000;
      }
      uStack_60._0_4_ = (int)uStack_60 + iVar13;
      uStack_60._4_4_ = uStack_60._4_4_ + iVar14;
      uVar25 = uVar25 + 1;
    } while (uVar25 != uVar9);
  }
  return lVar12;
}



/* Entry: 1097b8c08; end: 1097b8f8f;  */

long FUN_1097b8c08(long *param_1,long param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  long lVar13;
  long lVar14;
  int iVar15;
  int iVar16;
  uint uVar17;
  uint uVar18;
  short sVar19;
  short sVar20;
  uint uVar21;
  uint uVar22;
  uint uVar23;
  int *piVar24;
  int iVar25;
  uint uVar26;
  ulong uVar27;
  uint uVar28;
  uint *puVar29;
  int iVar30;
  int iVar31;
  int iVar32;
  int iVar33;
  int *piVar34;
  uint uVar35;
  int iVar36;
  uint *puVar37;
  int iVar38;
  int iVar39;
  uint *puVar40;
  undefined8 uVar41;
  undefined8 uStack_70;
  undefined4 uStack_68;
  
  lVar13 = *param_1;
  lVar14 = param_1[1];
  uVar11 = *(uint *)(param_1 + 3);
  *(int *)((long)param_1 + 0x14) = *(int *)((long)param_1 + 0x14) + 1;
  puVar37 = *(uint **)(lVar13 + 0x48);
  uVar10 = *puVar37;
  uVar12 = puVar37[1];
  sVar19 = *(short *)((long)puVar37 + 10);
  sVar20 = *(short *)((long)puVar37 + 0xe);
  uStack_70 = CONCAT44((int)((ulong)param_1[2] >> 0x20) << 0x10,(int)param_1[2] << 0x10) |
              0x800000008000;
  uStack_68 = 0x10000;
  piVar34 = *(int **)(lVar13 + 0x38);
  piVar24 = piVar34;
  FUN_1097bf628(piVar34,&uStack_70);
  if (((int)piVar24 != 0) && (0 < (int)uVar11)) {
    uVar27 = 0;
    iVar2 = (int)uVar10 >> 0x10;
    iVar3 = (int)uVar12 >> 0x10;
    uVar21 = 0x10 - (int)sVar19;
    iVar4 = (1 << (ulong)(uVar21 & 0x1f)) >> 1;
    uVar22 = 0x10 - (int)sVar20;
    iVar15 = *piVar34;
    iVar16 = piVar34[3];
    iVar5 = (1 << (ulong)(uVar22 & 0x1f)) >> 1;
    do {
      if ((param_2 == 0) || (*(int *)(param_2 + uVar27 * 4) != 0)) {
        if (iVar3 < 1) {
          uVar26 = 0;
          uVar28 = 0;
          uVar41 = 0;
        }
        else {
          iVar36 = 0;
          iVar33 = 0;
          uVar28 = (uint)uStack_70 & -1 << (ulong)(uVar21 & 0x1f);
          uVar26 = uStack_70._4_4_ & -1 << (ulong)(uVar22 & 0x1f);
          iVar6 = (int)(uVar28 + iVar4 + ((int)(0xfffe - (uVar10 & 0xffff0000)) >> 1)) >> 0x10;
          iVar39 = (int)(uVar26 + iVar5 + ((int)(0xfffe - (uVar12 & 0xffff0000)) >> 1)) >> 0x10;
          iVar1 = iVar3 + iVar39;
          iVar30 = -iVar39;
          uVar41 = 0;
          puVar40 = puVar37 + (long)(iVar2 << (ulong)((int)sVar19 & 0x1f)) +
                              (ulong)(((uVar26 + iVar5 & 0xffff) >> (ulong)(uVar22 & 0x1f)) * iVar3)
                              + 4;
          do {
            puVar29 = puVar37 + (long)(int)(((uVar28 + iVar4 & 0xffff) >> (ulong)(uVar21 & 0x1f)) *
                                           iVar2) + 4;
            iVar38 = iVar6;
            iVar25 = -iVar6;
            if (*puVar40 != 0 && 0 < iVar2) {
              do {
                if (*puVar29 != 0) {
                  uVar17 = *(uint *)(lVar13 + 0xa0);
                  uVar26 = uVar17 + iVar38;
                  iVar31 = iVar25 - uVar17;
                  do {
                    uVar26 = uVar26 - uVar17;
                    iVar31 = iVar31 + uVar17;
                  } while ((int)uVar17 <= (int)uVar26);
                  uVar18 = *(uint *)(lVar13 + 0xa4);
                  uVar35 = iVar39 + uVar18;
                  iVar32 = iVar30 - uVar18;
                  do {
                    uVar35 = uVar35 - uVar18;
                    iVar32 = iVar32 + uVar18;
                  } while ((int)uVar18 <= (int)uVar35);
                  uVar7 = uVar35 & ((int)uVar35 >> 0x1f ^ 0xffffffffU);
                  uVar9 = uVar18;
                  if (uVar18 < 2) {
                    uVar9 = 1;
                  }
                  uVar8 = uVar26 & ((int)uVar26 >> 0x1f ^ 0xffffffffU);
                  uVar23 = 0;
                  if (uVar9 != 0) {
                    uVar23 = ((uVar7 - (uVar7 != uVar35)) + iVar32) / uVar9;
                  }
                  if (uVar7 != uVar35) {
                    uVar23 = uVar23 + 1;
                  }
                  uVar7 = uVar17;
                  if (uVar17 < 2) {
                    uVar7 = 1;
                  }
                  uVar9 = 0;
                  if (uVar7 != 0) {
                    uVar9 = ((uVar8 - (uVar8 != uVar26)) + iVar31) / uVar7;
                  }
                  if (uVar8 != uVar26) {
                    uVar9 = uVar9 + 1;
                  }
                  uVar26 = *(uint *)(*(long *)(lVar13 + 0xa8) +
                                     (long)(int)((uVar35 + uVar18 * uVar23) *
                                                *(int *)(lVar13 + 0xb8)) * 4 +
                                    (ulong)(uVar26 + uVar17 * uVar9) * 4);
                  iVar31 = (int)((ulong)((long)(int)*puVar29 * (long)(int)*puVar40 + 0x8000) >> 0x10
                                );
                  iVar36 = iVar36 + (uVar26 >> 8 & 0xff) * iVar31;
                  iVar33 = iVar33 + (uVar26 & 0xff) * iVar31;
                  uVar41 = CONCAT44((int)((ulong)uVar41 >> 0x20) + iVar31 * 0xff,
                                    (int)uVar41 + (uVar26 >> 0x10 & 0xff) * iVar31);
                }
                iVar38 = iVar38 + 1;
                puVar29 = puVar29 + 1;
                iVar25 = iVar25 + -1;
              } while (iVar38 < iVar2 + iVar6);
            }
            iVar39 = iVar39 + 1;
            iVar30 = iVar30 + -1;
            puVar40 = puVar40 + 1;
          } while (iVar39 < iVar1);
          uVar41 = CONCAT44((int)((ulong)uVar41 >> 0x20) + 0x8000 >> 0x10,
                            (int)uVar41 + 0x8000 >> 0x10);
          uVar28 = iVar36 + 0x8000 >> 0x10;
          uVar26 = iVar33 + 0x8000 >> 0x10;
        }
        uVar41 = NEON_smax(uVar41,0,4);
        uVar28 = uVar28 & ((int)uVar28 >> 0x1f ^ 0xffffffffU);
        if (0xfe < (int)uVar28) {
          uVar28 = 0xff;
        }
        uVar26 = uVar26 & ((int)uVar26 >> 0x1f ^ 0xffffffffU);
        if (0xfe < (int)uVar26) {
          uVar26 = 0xff;
        }
        uVar41 = NEON_smin(uVar41,0xff000000ff,4);
        uVar41 = NEON_ushl(uVar41,0x1800000010,4);
        *(uint *)(lVar14 + uVar27 * 4) =
             uVar26 | uVar28 << 8 | (uint)uVar41 | (uint)((ulong)uVar41 >> 0x20);
      }
      uStack_70._0_4_ = (uint)uStack_70 + iVar15;
      uStack_70._4_4_ = uStack_70._4_4_ + iVar16;
      uVar27 = uVar27 + 1;
    } while (uVar27 != uVar11);
  }
  return lVar14;
}



/* Entry: 1097b8f90; end: 1097b9223;  */

int * FUN_1097b8f90(long *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  long lVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int *piVar10;
  int *piVar11;
  ulong uVar12;
  undefined8 uStack_50;
  undefined4 uStack_48;
  
  lVar4 = *param_1;
  piVar5 = (int *)param_1[1];
  uVar3 = *(uint *)(param_1 + 3);
  uVar12 = (ulong)uVar3;
  *(int *)((long)param_1 + 0x14) = *(int *)((long)param_1 + 0x14) + 1;
  uStack_50 = CONCAT44((int)((ulong)param_1[2] >> 0x20) << 0x10,(int)param_1[2] << 0x10) |
              0x800000008000;
  uStack_48 = 0x10000;
  piVar11 = *(int **)(lVar4 + 0x38);
  piVar10 = piVar11;
  FUN_1097bf628(piVar11,&uStack_50);
  if (((int)piVar10 != 0) && (0 < (int)uVar3)) {
    iVar6 = *piVar11;
    iVar7 = piVar11[3];
    uStack_50._0_4_ = (int)uStack_50 + -1;
    uStack_50._4_4_ = uStack_50._4_4_ + -1;
    piVar11 = param_2;
    piVar10 = piVar5;
    do {
      if ((param_2 == (int *)0x0) || (*piVar11 != 0)) {
        iVar1 = (int)uStack_50 >> 0x10;
        iVar2 = uStack_50._4_4_ >> 0x10;
        iVar8 = *(int *)(lVar4 + 0xa0) + -1;
        iVar9 = iVar1;
        if (iVar8 <= iVar1) {
          iVar9 = iVar8;
        }
        iVar8 = 0;
        if (-1 < iVar1) {
          iVar8 = iVar9;
        }
        iVar9 = *(int *)(lVar4 + 0xa4) + -1;
        iVar1 = iVar2;
        if (iVar9 <= iVar2) {
          iVar1 = iVar9;
        }
        iVar9 = 0;
        if (-1 < iVar2) {
          iVar9 = iVar1;
        }
        *piVar10 = (uint)*(byte *)(*(long *)(lVar4 + 0xa8) +
                                   (long)(iVar9 * *(int *)(lVar4 + 0xb8)) * 4 + (long)iVar8) << 0x18
        ;
      }
      piVar10 = piVar10 + 1;
      piVar11 = piVar11 + 1;
      uStack_50._0_4_ = (int)uStack_50 + iVar6;
      uStack_50._4_4_ = uStack_50._4_4_ + iVar7;
      uVar12 = uVar12 - 1;
    } while (uVar12 != 0);
  }
  return piVar5;
}



/* Entry: 1097b9224; end: 1097b947f;  */

long FUN_1097b9224(long *param_1,long param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  long lVar12;
  long lVar13;
  int iVar14;
  int iVar15;
  short sVar16;
  short sVar17;
  int iVar18;
  int iVar19;
  uint uVar20;
  uint uVar21;
  int *piVar22;
  ulong uVar23;
  uint uVar24;
  int iVar25;
  int *piVar26;
  int iVar27;
  uint *puVar28;
  int iVar29;
  uint *puVar30;
  uint *puVar31;
  undefined8 uStack_70;
  undefined4 uStack_68;
  
  lVar12 = *param_1;
  lVar13 = param_1[1];
  uVar10 = *(uint *)(param_1 + 3);
  *(int *)((long)param_1 + 0x14) = *(int *)((long)param_1 + 0x14) + 1;
  puVar28 = *(uint **)(lVar12 + 0x48);
  uVar9 = *puVar28;
  uVar11 = puVar28[1];
  sVar16 = *(short *)((long)puVar28 + 10);
  sVar17 = *(short *)((long)puVar28 + 0xe);
  uStack_70 = CONCAT44((int)((ulong)param_1[2] >> 0x20) << 0x10,(int)param_1[2] << 0x10) |
              0x800000008000;
  uStack_68 = 0x10000;
  piVar26 = *(int **)(lVar12 + 0x38);
  piVar22 = piVar26;
  FUN_1097bf628(piVar26,&uStack_70);
  if (((int)piVar22 != 0) && (0 < (int)uVar10)) {
    uVar23 = 0;
    iVar3 = (int)uVar9 >> 0x10;
    iVar4 = (int)uVar11 >> 0x10;
    uVar20 = 0x10 - (int)sVar16;
    iVar5 = (1 << (ulong)(uVar20 & 0x1f)) >> 1;
    uVar21 = 0x10 - (int)sVar17;
    iVar14 = *piVar26;
    iVar15 = piVar26[3];
    iVar6 = (1 << (ulong)(uVar21 & 0x1f)) >> 1;
    do {
      if ((param_2 == 0) || (*(int *)(param_2 + uVar23 * 4) != 0)) {
        if (iVar4 < 1) {
          uVar24 = 0;
        }
        else {
          iVar25 = 0;
          uVar24 = (uint)uStack_70 & -1 << (ulong)(uVar20 & 0x1f);
          uVar2 = uStack_70._4_4_ & -1 << (ulong)(uVar21 & 0x1f);
          iVar7 = (int)(uVar24 + iVar5 + ((int)(0xfffe - (uVar9 & 0xffff0000)) >> 1)) >> 0x10;
          iVar29 = (int)(uVar2 + iVar6 + ((int)(0xfffe - (uVar11 & 0xffff0000)) >> 1)) >> 0x10;
          iVar1 = iVar4 + iVar29;
          puVar30 = puVar28 + (long)(iVar3 << (ulong)((int)sVar16 & 0x1f)) +
                              (ulong)(((uVar2 + iVar6 & 0xffff) >> (ulong)(uVar21 & 0x1f)) * iVar4)
                              + 4;
          do {
            puVar31 = puVar28 + (long)(int)(((uVar24 + iVar5 & 0xffff) >> (ulong)(uVar20 & 0x1f)) *
                                           iVar3) + 4;
            iVar27 = iVar7;
            if (*puVar30 != 0 && 0 < iVar3) {
              do {
                if (*puVar31 != 0) {
                  iVar18 = *(int *)(lVar12 + 0xa0) + -1;
                  iVar8 = iVar27;
                  if (iVar18 <= iVar27) {
                    iVar8 = iVar18;
                  }
                  iVar18 = 0;
                  if (-1 < iVar27) {
                    iVar18 = iVar8;
                  }
                  iVar19 = *(int *)(lVar12 + 0xa4) + -1;
                  iVar8 = iVar29;
                  if (iVar19 <= iVar29) {
                    iVar8 = iVar19;
                  }
                  iVar19 = 0;
                  if (-1 < iVar29) {
                    iVar19 = iVar8;
                  }
                  iVar25 = iVar25 + (uint)*(byte *)(*(long *)(lVar12 + 0xa8) +
                                                    (long)(iVar19 * *(int *)(lVar12 + 0xb8)) * 4 +
                                                   (long)iVar18) *
                                    (int)((ulong)((long)(int)*puVar31 * (long)(int)*puVar30 + 0x8000
                                                 ) >> 0x10);
                }
                iVar27 = iVar27 + 1;
                puVar31 = puVar31 + 1;
              } while (iVar27 < iVar3 + iVar7);
            }
            iVar29 = iVar29 + 1;
            puVar30 = puVar30 + 1;
          } while (iVar29 < iVar1);
          uVar24 = iVar25 + 0x8000 >> 0x10;
        }
        uVar24 = uVar24 & ((int)uVar24 >> 0x1f ^ 0xffffffffU);
        if (0xfe < (int)uVar24) {
          uVar24 = 0xff;
        }
        *(uint *)(lVar13 + uVar23 * 4) = uVar24 << 0x18;
      }
      uStack_70._0_4_ = (uint)uStack_70 + iVar14;
      uStack_70._4_4_ = uStack_70._4_4_ + iVar15;
      uVar23 = uVar23 + 1;
    } while (uVar23 != uVar10);
  }
  return lVar13;
}



/* Entry: 1097b9480; end: 1097b9753;  */

int * FUN_1097b9480(long *param_1,int *param_2)

{
  int iVar1;
  uint uVar2;
  long lVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  int iVar8;
  int *piVar9;
  ulong uVar10;
  undefined8 uStack_50;
  undefined4 uStack_48;
  
  lVar3 = *param_1;
  piVar4 = (int *)param_1[1];
  uVar2 = *(uint *)(param_1 + 3);
  uVar10 = (ulong)uVar2;
  *(int *)((long)param_1 + 0x14) = *(int *)((long)param_1 + 0x14) + 1;
  uStack_50 = CONCAT44((int)((ulong)param_1[2] >> 0x20) << 0x10,(int)param_1[2] << 0x10) |
              0x800000008000;
  uStack_48 = 0x10000;
  piVar9 = *(int **)(lVar3 + 0x38);
  piVar7 = piVar9;
  FUN_1097bf628(piVar9,&uStack_50);
  if (((int)piVar7 != 0) && (0 < (int)uVar2)) {
    iVar5 = *piVar9;
    iVar6 = piVar9[3];
    uStack_50._0_4_ = (int)uStack_50 + -1;
    uStack_50._4_4_ = uStack_50._4_4_ + -1;
    piVar9 = param_2;
    piVar7 = piVar4;
    do {
      if ((param_2 == (int *)0x0) || (*piVar9 != 0)) {
        iVar8 = 0;
        iVar1 = uStack_50._4_4_ >> 0x10;
        if ((-1 < iVar1) &&
           (((iVar1 < *(int *)(lVar3 + 0xa4) && (uVar2 = (int)uStack_50 >> 0x10, -1 < (int)uVar2))
            && ((int)uVar2 < *(int *)(lVar3 + 0xa0))))) {
          iVar8 = (uint)*(byte *)(*(long *)(lVar3 + 0xa8) +
                                  (long)(*(int *)(lVar3 + 0xb8) * iVar1) * 4 + (ulong)uVar2) << 0x18
          ;
        }
        *piVar7 = iVar8;
      }
      piVar7 = piVar7 + 1;
      piVar9 = piVar9 + 1;
      uStack_50._0_4_ = (int)uStack_50 + iVar5;
      uStack_50._4_4_ = uStack_50._4_4_ + iVar6;
      uVar10 = uVar10 - 1;
    } while (uVar10 != 0);
  }
  return piVar4;
}



/* Entry: 1097b9754; end: 1097b99a7;  */

long FUN_1097b9754(long *param_1,long param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  long lVar11;
  long lVar12;
  int iVar13;
  int iVar14;
  short sVar15;
  short sVar16;
  uint uVar17;
  uint uVar18;
  int *piVar19;
  ulong uVar20;
  uint uVar21;
  int iVar22;
  int *piVar23;
  uint *puVar24;
  uint *puVar25;
  uint *puVar26;
  uint uVar27;
  long lVar28;
  undefined8 uStack_70;
  undefined4 uStack_68;
  
  lVar11 = *param_1;
  lVar12 = param_1[1];
  uVar9 = *(uint *)(param_1 + 3);
  *(int *)((long)param_1 + 0x14) = *(int *)((long)param_1 + 0x14) + 1;
  puVar24 = *(uint **)(lVar11 + 0x48);
  uVar8 = *puVar24;
  uVar10 = puVar24[1];
  sVar15 = *(short *)((long)puVar24 + 10);
  sVar16 = *(short *)((long)puVar24 + 0xe);
  uStack_70 = CONCAT44((int)((ulong)param_1[2] >> 0x20) << 0x10,(int)param_1[2] << 0x10) |
              0x800000008000;
  uStack_68 = 0x10000;
  piVar23 = *(int **)(lVar11 + 0x38);
  piVar19 = piVar23;
  FUN_1097bf628(piVar23,&uStack_70);
  if (((int)piVar19 != 0) && (0 < (int)uVar9)) {
    uVar20 = 0;
    iVar4 = (int)uVar8 >> 0x10;
    iVar5 = (int)uVar10 >> 0x10;
    uVar17 = 0x10 - (int)sVar15;
    iVar6 = (1 << (ulong)(uVar17 & 0x1f)) >> 1;
    uVar18 = 0x10 - (int)sVar16;
    iVar13 = *piVar23;
    iVar14 = piVar23[3];
    iVar7 = (1 << (ulong)(uVar18 & 0x1f)) >> 1;
    do {
      if ((param_2 == 0) || (*(int *)(param_2 + uVar20 * 4) != 0)) {
        if (iVar5 < 1) {
          uVar27 = 0;
        }
        else {
          iVar22 = 0;
          uVar21 = uStack_70._4_4_ & -1 << (ulong)(uVar18 & 0x1f);
          uVar27 = (int)(uVar21 + iVar7 + ((int)(0xfffe - (uVar10 & 0xffff0000)) >> 1)) >> 0x10;
          iVar1 = iVar5 + uVar27;
          uVar3 = (uint)uStack_70 & -1 << (ulong)(uVar17 & 0x1f);
          uVar2 = uVar3 + iVar6 + ((int)(0xfffe - (uVar8 & 0xffff0000)) >> 1);
          puVar25 = puVar24 + (long)(iVar4 << (ulong)((int)sVar15 & 0x1f)) +
                              (ulong)(((uVar21 + iVar7 & 0xffff) >> (ulong)(uVar18 & 0x1f)) * iVar5)
                              + 4;
          do {
            puVar26 = puVar24 + (long)(int)(((uVar3 + iVar6 & 0xffff) >> (ulong)(uVar17 & 0x1f)) *
                                           iVar4) + 4;
            lVar28 = (long)((ulong)uVar2 << 0x20) >> 0x30;
            if (*puVar25 != 0 && 0 < iVar4) {
              do {
                if (*puVar26 != 0) {
                  if ((((int)(uVar27 | (uint)lVar28) < 0) || (*(int *)(lVar11 + 0xa0) <= lVar28)) ||
                     (*(int *)(lVar11 + 0xa4) <= (int)uVar27)) {
                    uVar21 = 0;
                  }
                  else {
                    uVar21 = (uint)*(byte *)(*(long *)(lVar11 + 0xa8) +
                                             (long)(int)(uVar27 * *(int *)(lVar11 + 0xb8)) * 4 +
                                            lVar28);
                  }
                  iVar22 = iVar22 + uVar21 * (int)((ulong)((long)(int)*puVar26 * (long)(int)*puVar25
                                                          + 0x8000) >> 0x10);
                }
                lVar28 = lVar28 + 1;
                puVar26 = puVar26 + 1;
              } while (lVar28 < iVar4 + ((int)uVar2 >> 0x10));
            }
            uVar27 = uVar27 + 1;
            puVar25 = puVar25 + 1;
          } while ((int)uVar27 < iVar1);
          uVar27 = iVar22 + 0x8000 >> 0x10;
        }
        uVar27 = uVar27 & ((int)uVar27 >> 0x1f ^ 0xffffffffU);
        if (0xfe < (int)uVar27) {
          uVar27 = 0xff;
        }
        *(uint *)(lVar12 + uVar20 * 4) = uVar27 << 0x18;
      }
      uStack_70._0_4_ = (uint)uStack_70 + iVar13;
      uStack_70._4_4_ = uStack_70._4_4_ + iVar14;
      uVar20 = uVar20 + 1;
    } while (uVar20 != uVar9);
  }
  return lVar12;
}



/* Entry: 1097b99a8; end: 1097b9d1f;  */

int * FUN_1097b99a8(long *param_1,int *param_2)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int *piVar10;
  uint uVar11;
  int *piVar12;
  ulong uVar13;
  undefined8 uStack_50;
  undefined4 uStack_48;
  
  lVar3 = *param_1;
  piVar4 = (int *)param_1[1];
  uVar11 = *(uint *)(param_1 + 3);
  uVar13 = (ulong)uVar11;
  *(int *)((long)param_1 + 0x14) = *(int *)((long)param_1 + 0x14) + 1;
  uStack_50 = CONCAT44((int)((ulong)param_1[2] >> 0x20) << 0x10,(int)param_1[2] << 0x10) |
              0x800000008000;
  uStack_48 = 0x10000;
  piVar12 = *(int **)(lVar3 + 0x38);
  piVar10 = piVar12;
  FUN_1097bf628(piVar12,&uStack_50);
  if (((int)piVar10 != 0) && (0 < (int)uVar11)) {
    iVar5 = *piVar12;
    iVar6 = piVar12[3];
    uStack_50._0_4_ = (int)uStack_50 + -1;
    uStack_50._4_4_ = uStack_50._4_4_ + -1;
    piVar12 = param_2;
    piVar10 = piVar4;
    do {
      if ((param_2 == (int *)0x0) || (*piVar12 != 0)) {
        uVar11 = (int)uStack_50 >> 0x10;
        iVar7 = *(int *)(lVar3 + 0xa0) * 2;
        if ((int)uVar11 < 0) {
          iVar8 = 0;
          if (iVar7 != 0) {
            iVar8 = (int)~uVar11 / iVar7;
          }
          uVar11 = iVar7 + ~(~uVar11 - iVar8 * iVar7);
        }
        else {
          iVar8 = 0;
          if (iVar7 != 0) {
            iVar8 = (int)uVar11 / iVar7;
          }
          uVar11 = uVar11 - iVar8 * iVar7;
        }
        uVar1 = uStack_50._4_4_ >> 0x10;
        if (*(int *)(lVar3 + 0xa0) <= (int)uVar11) {
          uVar11 = iVar7 + ~uVar11;
        }
        iVar7 = *(int *)(lVar3 + 0xa4) * 2;
        iVar8 = 0;
        if (iVar7 != 0) {
          iVar8 = (int)uVar1 / iVar7;
        }
        iVar9 = 0;
        if (iVar7 != 0) {
          iVar9 = (int)~uVar1 / iVar7;
        }
        uVar2 = uVar1 - iVar8 * iVar7;
        if ((uVar1 & 0x80000000) != 0) {
          uVar2 = iVar7 + ~(~uVar1 - iVar9 * iVar7);
        }
        if (*(int *)(lVar3 + 0xa4) <= (int)uVar2) {
          uVar2 = iVar7 + ~uVar2;
        }
        *piVar10 = (uint)*(byte *)(*(long *)(lVar3 + 0xa8) +
                                   (long)(int)(*(int *)(lVar3 + 0xb8) * uVar2) * 4 +
                                  (long)(int)uVar11) << 0x18;
      }
      piVar10 = piVar10 + 1;
      piVar12 = piVar12 + 1;
      uStack_50._0_4_ = (int)uStack_50 + iVar5;
      uStack_50._4_4_ = uStack_50._4_4_ + iVar6;
      uVar13 = uVar13 - 1;
    } while (uVar13 != 0);
  }
  return piVar4;
}



/* Entry: 1097b9d20; end: 1097b9fdb;  */

long FUN_1097b9d20(long *param_1,long param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  long lVar12;
  long lVar13;
  int iVar14;
  int iVar15;
  short sVar16;
  short sVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  uint uVar21;
  uint uVar22;
  int *piVar23;
  uint uVar24;
  uint uVar25;
  ulong uVar26;
  int iVar27;
  int *piVar28;
  uint uVar29;
  uint *puVar30;
  uint uVar31;
  uint *puVar32;
  uint *puVar33;
  undefined8 uStack_70;
  undefined4 uStack_68;
  
  lVar12 = *param_1;
  lVar13 = param_1[1];
  uVar10 = *(uint *)(param_1 + 3);
  *(int *)((long)param_1 + 0x14) = *(int *)((long)param_1 + 0x14) + 1;
  puVar30 = *(uint **)(lVar12 + 0x48);
  uVar9 = *puVar30;
  uVar11 = puVar30[1];
  sVar16 = *(short *)((long)puVar30 + 10);
  sVar17 = *(short *)((long)puVar30 + 0xe);
  uStack_70 = CONCAT44((int)((ulong)param_1[2] >> 0x20) << 0x10,(int)param_1[2] << 0x10) |
              0x800000008000;
  uStack_68 = 0x10000;
  piVar28 = *(int **)(lVar12 + 0x38);
  piVar23 = piVar28;
  FUN_1097bf628(piVar28,&uStack_70);
  if (((int)piVar23 != 0) && (0 < (int)uVar10)) {
    uVar26 = 0;
    iVar3 = (int)uVar9 >> 0x10;
    iVar4 = (int)uVar11 >> 0x10;
    uVar21 = 0x10 - (int)sVar16;
    iVar5 = (1 << (ulong)(uVar21 & 0x1f)) >> 1;
    uVar22 = 0x10 - (int)sVar17;
    iVar14 = *piVar28;
    iVar15 = piVar28[3];
    iVar6 = (1 << (ulong)(uVar22 & 0x1f)) >> 1;
    do {
      if ((param_2 == 0) || (*(int *)(param_2 + uVar26 * 4) != 0)) {
        if (iVar4 < 1) {
          uVar31 = 0;
        }
        else {
          iVar27 = 0;
          uVar2 = (uint)uStack_70 & -1 << (ulong)(uVar21 & 0x1f);
          uVar29 = uStack_70._4_4_ & -1 << (ulong)(uVar22 & 0x1f);
          uVar7 = (int)(uVar2 + iVar5 + ((int)(0xfffe - (uVar9 & 0xffff0000)) >> 1)) >> 0x10;
          uVar31 = (int)(uVar29 + iVar6 + ((int)(0xfffe - (uVar11 & 0xffff0000)) >> 1)) >> 0x10;
          iVar1 = iVar4 + uVar31;
          puVar32 = puVar30 + (long)(iVar3 << (ulong)((int)sVar16 & 0x1f)) +
                              (ulong)(((uVar29 + iVar6 & 0xffff) >> (ulong)(uVar22 & 0x1f)) * iVar4)
                              + 4;
          do {
            if (*puVar32 != 0 && 0 < iVar3) {
              puVar33 = puVar30 + (long)(int)(((uVar2 + iVar5 & 0xffff) >> (ulong)(uVar21 & 0x1f)) *
                                             iVar3) + 4;
              uVar29 = uVar7;
              uVar25 = ~uVar7;
              do {
                if (*puVar33 != 0) {
                  iVar18 = *(int *)(lVar12 + 0xa0) * 2;
                  iVar19 = 0;
                  if (iVar18 != 0) {
                    iVar19 = (int)uVar29 / iVar18;
                  }
                  iVar20 = 0;
                  if (iVar18 != 0) {
                    iVar20 = (int)uVar25 / iVar18;
                  }
                  uVar8 = uVar29 - iVar19 * iVar18;
                  if ((uVar29 & 0x80000000) != 0) {
                    uVar8 = iVar18 + ~(uVar25 - iVar20 * iVar18);
                  }
                  if (*(int *)(lVar12 + 0xa0) <= (int)uVar8) {
                    uVar8 = iVar18 + ~uVar8;
                  }
                  iVar18 = *(int *)(lVar12 + 0xa4) * 2;
                  if ((int)uVar31 < 0) {
                    iVar19 = 0;
                    if (iVar18 != 0) {
                      iVar19 = (int)~uVar31 / iVar18;
                    }
                    uVar24 = iVar18 + ~(~uVar31 - iVar19 * iVar18);
                  }
                  else {
                    iVar19 = 0;
                    if (iVar18 != 0) {
                      iVar19 = (int)uVar31 / iVar18;
                    }
                    uVar24 = uVar31 - iVar19 * iVar18;
                  }
                  if (*(int *)(lVar12 + 0xa4) <= (int)uVar24) {
                    uVar24 = iVar18 + ~uVar24;
                  }
                  iVar27 = iVar27 + (uint)*(byte *)(*(long *)(lVar12 + 0xa8) +
                                                    (long)(int)(*(int *)(lVar12 + 0xb8) * uVar24) *
                                                    4 + (long)(int)uVar8) *
                                    (int)((ulong)((long)(int)*puVar33 * (long)(int)*puVar32 + 0x8000
                                                 ) >> 0x10);
                }
                uVar29 = uVar29 + 1;
                uVar25 = uVar25 - 1;
                puVar33 = puVar33 + 1;
              } while ((int)uVar29 < (int)(iVar3 + uVar7));
            }
            uVar31 = uVar31 + 1;
            puVar32 = puVar32 + 1;
          } while ((int)uVar31 < iVar1);
          uVar31 = iVar27 + 0x8000 >> 0x10;
        }
        uVar31 = uVar31 & ((int)uVar31 >> 0x1f ^ 0xffffffffU);
        if (0xfe < (int)uVar31) {
          uVar31 = 0xff;
        }
        *(uint *)(lVar13 + uVar26 * 4) = uVar31 << 0x18;
      }
      uStack_70._0_4_ = (uint)uStack_70 + iVar14;
      uStack_70._4_4_ = uStack_70._4_4_ + iVar15;
      uVar26 = uVar26 + 1;
    } while (uVar26 != uVar10);
  }
  return lVar13;
}



/* Entry: 1097b9fdc; end: 1097ba137;  */

long FUN_1097b9fdc(long *param_1,long param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  long lVar7;
  long lVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  int *piVar13;
  ulong uVar14;
  uint uVar15;
  int iVar16;
  uint uVar17;
  int *piVar18;
  undefined8 uStack_50;
  undefined4 uStack_48;
  
  lVar7 = *param_1;
  lVar8 = param_1[1];
  uVar5 = *(uint *)(param_1 + 3);
  *(int *)((long)param_1 + 0x14) = *(int *)((long)param_1 + 0x14) + 1;
  uStack_50 = CONCAT44((int)((ulong)param_1[2] >> 0x20) << 0x10,(int)param_1[2] << 0x10) |
              0x800000008000;
  uStack_48 = 0x10000;
  piVar18 = *(int **)(lVar7 + 0x38);
  piVar13 = piVar18;
  FUN_1097bf628(piVar18,&uStack_50);
  if (((int)piVar13 != 0) && (0 < (int)uVar5)) {
    uVar14 = 0;
    iVar9 = *piVar18;
    iVar10 = piVar18[3];
    do {
      if ((param_2 == 0) || (*(int *)(param_2 + uVar14 * 4) != 0)) {
        uVar4 = *(uint *)(lVar7 + 0xa0);
        uVar6 = *(uint *)(lVar7 + 0xa4);
        uVar15 = uVar4 + ((int)uStack_50 + -1 >> 0x10);
        iVar16 = -uVar15;
        do {
          uVar15 = uVar15 - uVar4;
          iVar16 = iVar16 + uVar4;
        } while ((int)uVar4 <= (int)uVar15);
        uVar17 = uVar6 + (uStack_50._4_4_ + -1 >> 0x10);
        iVar12 = -uVar17;
        do {
          uVar17 = uVar17 - uVar6;
          iVar12 = iVar12 + uVar6;
        } while ((int)uVar6 <= (int)uVar17);
        uVar1 = uVar17 & ((int)uVar17 >> 0x1f ^ 0xffffffffU);
        uVar3 = uVar6;
        if (uVar6 < 2) {
          uVar3 = 1;
        }
        uVar2 = uVar15 & ((int)uVar15 >> 0x1f ^ 0xffffffffU);
        uVar11 = 0;
        if (uVar3 != 0) {
          uVar11 = ((uVar1 - (uVar1 != uVar17)) + iVar12) / uVar3;
        }
        if (uVar1 != uVar17) {
          uVar11 = uVar11 + 1;
        }
        uVar1 = uVar4;
        if (uVar4 < 2) {
          uVar1 = 1;
        }
        uVar3 = 0;
        if (uVar1 != 0) {
          uVar3 = ((uVar2 - (uVar2 != uVar15)) + iVar16) / uVar1;
        }
        if (uVar2 != uVar15) {
          uVar3 = uVar3 + 1;
        }
        *(uint *)(lVar8 + uVar14 * 4) =
             (uint)*(byte *)(*(long *)(lVar7 + 0xa8) +
                             (long)(int)((uVar17 + uVar6 * uVar11) * *(int *)(lVar7 + 0xb8)) * 4 +
                            (ulong)(uVar15 + uVar4 * uVar3)) << 0x18;
      }
      uStack_50._0_4_ = (int)uStack_50 + iVar9;
      uStack_50._4_4_ = uStack_50._4_4_ + iVar10;
      uVar14 = uVar14 + 1;
    } while (uVar14 != uVar5);
  }
  return lVar8;
}



/* Entry: 1097ba138; end: 1097ba377;  */

long FUN_1097ba138(long *param_1,long param_2)

{
  long lVar1;
  long lVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  long lVar11;
  long lVar12;
  int iVar13;
  int iVar14;
  uint uVar15;
  uint uVar16;
  int iVar17;
  int *piVar18;
  uint uVar19;
  int iVar20;
  uint uVar21;
  uint uVar22;
  uint uVar23;
  uint uVar24;
  ulong uVar25;
  uint uVar26;
  int *piVar27;
  undefined8 uStack_60;
  undefined4 uStack_58;
  
  lVar11 = *param_1;
  lVar12 = param_1[1];
  uVar9 = *(uint *)(param_1 + 3);
  *(int *)((long)param_1 + 0x14) = *(int *)((long)param_1 + 0x14) + 1;
  uStack_60 = CONCAT44((int)((ulong)param_1[2] >> 0x20) << 0x10,(int)param_1[2] << 0x10) |
              0x800000008000;
  uStack_58 = 0x10000;
  piVar27 = *(int **)(lVar11 + 0x38);
  piVar18 = piVar27;
  FUN_1097bf628(piVar27,&uStack_60);
  if (((int)piVar18 != 0) && (0 < (int)uVar9)) {
    uVar25 = 0;
    iVar13 = *piVar27;
    iVar14 = piVar27[3];
    do {
      uVar8 = *(uint *)(lVar11 + 0xa0);
      uVar10 = *(uint *)(lVar11 + 0xa4);
      if ((param_2 == 0) || (*(int *)(param_2 + uVar25 * 4) != 0)) {
        iVar3 = (int)((int)uStack_60 - 0x8000U) >> 0x10;
        uVar26 = uVar8 + iVar3;
        iVar17 = -uVar26;
        do {
          uVar26 = uVar26 - uVar8;
          iVar17 = iVar17 + uVar8;
        } while ((int)uVar8 <= (int)uVar26);
        iVar4 = (int)(uStack_60._4_4_ - 0x8000U) >> 0x10;
        uVar19 = uVar10 + iVar4;
        iVar20 = -uVar19;
        do {
          uVar19 = uVar19 - uVar10;
          iVar20 = iVar20 + uVar10;
        } while ((int)uVar10 <= (int)uVar19);
        uVar23 = uVar8 + iVar3;
        uVar21 = uVar23 + 1;
        uVar23 = ~uVar23;
        do {
          uVar21 = uVar21 - uVar8;
          uVar23 = uVar23 + uVar8;
        } while ((int)uVar8 <= (int)uVar21);
        uVar24 = uVar10 + iVar4;
        uVar22 = uVar24 + 1;
        uVar24 = ~uVar24;
        do {
          uVar22 = uVar22 - uVar10;
          uVar24 = uVar24 + uVar10;
        } while ((int)uVar10 <= (int)uVar22);
        uVar7 = uVar10;
        if (uVar10 < 2) {
          uVar7 = 1;
        }
        uVar5 = uVar22 & ((int)uVar22 >> 0x1f ^ 0xffffffffU);
        uVar15 = 0;
        if (uVar7 != 0) {
          uVar15 = ((uVar5 - (uVar5 != uVar22)) + uVar24) / uVar7;
        }
        if (uVar5 != uVar22) {
          uVar15 = uVar15 + 1;
        }
        uVar24 = uVar21 & ((int)uVar21 >> 0x1f ^ 0xffffffffU);
        uVar5 = uVar8;
        if (uVar8 < 2) {
          uVar5 = 1;
        }
        uVar6 = uVar19 & ((int)uVar19 >> 0x1f ^ 0xffffffffU);
        uVar16 = 0;
        if (uVar5 != 0) {
          uVar16 = ((uVar24 - (uVar24 != uVar21)) + uVar23) / uVar5;
        }
        if (uVar24 != uVar21) {
          uVar16 = uVar16 + 1;
        }
        uVar23 = uVar26 & ((int)uVar26 >> 0x1f ^ 0xffffffffU);
        uVar24 = 0;
        if (uVar7 != 0) {
          uVar24 = ((uVar6 - (uVar6 != uVar19)) + iVar20) / uVar7;
        }
        if (uVar6 != uVar19) {
          uVar24 = uVar24 + 1;
        }
        uVar6 = (int)uStack_60 - 0x8000U >> 9 & 0x7f;
        uVar7 = 0;
        if (uVar5 != 0) {
          uVar7 = ((uVar23 - (uVar23 != uVar26)) + iVar17) / uVar5;
        }
        if (uVar23 != uVar26) {
          uVar7 = uVar7 + 1;
        }
        uVar26 = uVar26 + uVar8 * uVar7;
        uVar21 = uVar21 + uVar8 * uVar16;
        lVar1 = *(long *)(lVar11 + 0xa8) +
                (long)(int)(*(int *)(lVar11 + 0xb8) * (uVar19 + uVar10 * uVar24)) * 4;
        lVar2 = *(long *)(lVar11 + 0xa8) +
                (long)(int)((uVar22 + uVar10 * uVar15) * *(int *)(lVar11 + 0xb8)) * 4;
        uVar8 = uStack_60._4_4_ - 0x8000U >> 9 & 0x7f;
        iVar3 = uVar6 * uVar8;
        iVar17 = uVar6 * 0x200;
        *(uint *)(lVar12 + uVar25 * 4) =
             (((iVar3 * 4 - (iVar17 + uVar8 * 0x200)) + 0x10000) *
              (uint)*(byte *)(lVar1 + (ulong)uVar26) +
              (iVar17 + iVar3 * -4) * (uint)*(byte *)(lVar1 + (ulong)uVar21) +
              (uVar8 * 0x200 + iVar3 * -4) * (uint)*(byte *)(lVar2 + (ulong)uVar26) +
             iVar3 * 4 * (uint)*(byte *)(lVar2 + (ulong)uVar21)) * 0x100 & 0xff000000;
      }
      uStack_60._0_4_ = (int)uStack_60 + iVar13;
      uStack_60._4_4_ = uStack_60._4_4_ + iVar14;
      uVar25 = uVar25 + 1;
    } while (uVar25 != uVar9);
  }
  return lVar12;
}



/* Entry: 1097ba378; end: 1097ba66f;  */

long FUN_1097ba378(long *param_1,long param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  long lVar13;
  long lVar14;
  int iVar15;
  int iVar16;
  uint uVar17;
  uint uVar18;
  short sVar19;
  short sVar20;
  uint uVar21;
  uint uVar22;
  uint uVar23;
  int *piVar24;
  int iVar25;
  uint uVar26;
  ulong uVar27;
  uint uVar28;
  int iVar29;
  int iVar30;
  uint uVar31;
  int iVar32;
  int *piVar33;
  int iVar34;
  int iVar35;
  uint *puVar36;
  int iVar37;
  uint *puVar38;
  uint *puVar39;
  undefined8 uStack_70;
  undefined4 uStack_68;
  
  lVar13 = *param_1;
  lVar14 = param_1[1];
  uVar11 = *(uint *)(param_1 + 3);
  *(int *)((long)param_1 + 0x14) = *(int *)((long)param_1 + 0x14) + 1;
  puVar36 = *(uint **)(lVar13 + 0x48);
  uVar10 = *puVar36;
  uVar12 = puVar36[1];
  sVar19 = *(short *)((long)puVar36 + 10);
  sVar20 = *(short *)((long)puVar36 + 0xe);
  uStack_70 = CONCAT44((int)((ulong)param_1[2] >> 0x20) << 0x10,(int)param_1[2] << 0x10) |
              0x800000008000;
  uStack_68 = 0x10000;
  piVar33 = *(int **)(lVar13 + 0x38);
  piVar24 = piVar33;
  FUN_1097bf628(piVar33,&uStack_70);
  if (((int)piVar24 != 0) && (0 < (int)uVar11)) {
    uVar27 = 0;
    iVar2 = (int)uVar10 >> 0x10;
    iVar3 = (int)uVar12 >> 0x10;
    uVar21 = 0x10 - (int)sVar19;
    iVar4 = (1 << (ulong)(uVar21 & 0x1f)) >> 1;
    uVar22 = 0x10 - (int)sVar20;
    iVar15 = *piVar33;
    iVar16 = piVar33[3];
    iVar5 = (1 << (ulong)(uVar22 & 0x1f)) >> 1;
    do {
      if ((param_2 == 0) || (*(int *)(param_2 + uVar27 * 4) != 0)) {
        if (iVar3 < 1) {
          uVar28 = 0;
        }
        else {
          iVar32 = 0;
          uVar28 = (uint)uStack_70 & -1 << (ulong)(uVar21 & 0x1f);
          uVar26 = uStack_70._4_4_ & -1 << (ulong)(uVar22 & 0x1f);
          iVar6 = (int)(uVar28 + iVar4 + ((int)(0xfffe - (uVar10 & 0xffff0000)) >> 1)) >> 0x10;
          iVar37 = (int)(uVar26 + iVar5 + ((int)(0xfffe - (uVar12 & 0xffff0000)) >> 1)) >> 0x10;
          iVar1 = iVar3 + iVar37;
          iVar29 = -iVar37;
          puVar38 = puVar36 + (long)(iVar2 << (ulong)((int)sVar19 & 0x1f)) +
                              (ulong)(((uVar26 + iVar5 & 0xffff) >> (ulong)(uVar22 & 0x1f)) * iVar3)
                              + 4;
          do {
            puVar39 = puVar36 + (long)(int)(((uVar28 + iVar4 & 0xffff) >> (ulong)(uVar21 & 0x1f)) *
                                           iVar2) + 4;
            iVar35 = iVar6;
            iVar25 = -iVar6;
            if (*puVar38 != 0 && 0 < iVar2) {
              do {
                if (*puVar39 != 0) {
                  uVar17 = *(uint *)(lVar13 + 0xa0);
                  uVar26 = uVar17 + iVar35;
                  iVar30 = iVar25 - uVar17;
                  do {
                    uVar26 = uVar26 - uVar17;
                    iVar30 = iVar30 + uVar17;
                  } while ((int)uVar17 <= (int)uVar26);
                  uVar18 = *(uint *)(lVar13 + 0xa4);
                  uVar31 = iVar37 + uVar18;
                  iVar34 = iVar29 - uVar18;
                  do {
                    uVar31 = uVar31 - uVar18;
                    iVar34 = iVar34 + uVar18;
                  } while ((int)uVar18 <= (int)uVar31);
                  uVar7 = uVar31 & ((int)uVar31 >> 0x1f ^ 0xffffffffU);
                  uVar9 = uVar18;
                  if (uVar18 < 2) {
                    uVar9 = 1;
                  }
                  uVar8 = uVar26 & ((int)uVar26 >> 0x1f ^ 0xffffffffU);
                  uVar23 = 0;
                  if (uVar9 != 0) {
                    uVar23 = ((uVar7 - (uVar7 != uVar31)) + iVar34) / uVar9;
                  }
                  if (uVar7 != uVar31) {
                    uVar23 = uVar23 + 1;
                  }
                  uVar7 = uVar17;
                  if (uVar17 < 2) {
                    uVar7 = 1;
                  }
                  uVar9 = 0;
                  if (uVar7 != 0) {
                    uVar9 = ((uVar8 - (uVar8 != uVar26)) + iVar30) / uVar7;
                  }
                  if (uVar8 != uVar26) {
                    uVar9 = uVar9 + 1;
                  }
                  iVar32 = iVar32 + (uint)*(byte *)(*(long *)(lVar13 + 0xa8) +
                                                    (long)(int)((uVar31 + uVar18 * uVar23) *
                                                               *(int *)(lVar13 + 0xb8)) * 4 +
                                                   (ulong)(uVar26 + uVar17 * uVar9)) *
                                    (int)((ulong)((long)(int)*puVar39 * (long)(int)*puVar38 + 0x8000
                                                 ) >> 0x10);
                }
                iVar35 = iVar35 + 1;
                puVar39 = puVar39 + 1;
                iVar25 = iVar25 + -1;
              } while (iVar35 < iVar2 + iVar6);
            }
            iVar37 = iVar37 + 1;
            iVar29 = iVar29 + -1;
            puVar38 = puVar38 + 1;
          } while (iVar37 < iVar1);
          uVar28 = iVar32 + 0x8000 >> 0x10;
        }
        uVar28 = uVar28 & ((int)uVar28 >> 0x1f ^ 0xffffffffU);
        if (0xfe < (int)uVar28) {
          uVar28 = 0xff;
        }
        *(uint *)(lVar14 + uVar27 * 4) = uVar28 << 0x18;
      }
      uStack_70._0_4_ = (uint)uStack_70 + iVar15;
      uStack_70._4_4_ = uStack_70._4_4_ + iVar16;
      uVar27 = uVar27 + 1;
    } while (uVar27 != uVar11);
  }
  return lVar14;
}



/* Entry: 1097ba670; end: 1097ba7a7;  */

uint * FUN_1097ba670(long *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  long lVar4;
  uint *puVar5;
  int iVar6;
  int iVar7;
  ushort uVar8;
  int iVar9;
  int iVar10;
  int *piVar11;
  uint *puVar12;
  int *piVar13;
  ulong uVar14;
  undefined8 uStack_50;
  undefined4 uStack_48;
  
  lVar4 = *param_1;
  puVar5 = (uint *)param_1[1];
  uVar3 = *(uint *)(param_1 + 3);
  uVar14 = (ulong)uVar3;
  *(int *)((long)param_1 + 0x14) = *(int *)((long)param_1 + 0x14) + 1;
  uStack_50 = CONCAT44((int)((ulong)param_1[2] >> 0x20) << 0x10,(int)param_1[2] << 0x10) |
              0x800000008000;
  uStack_48 = 0x10000;
  piVar13 = *(int **)(lVar4 + 0x38);
  piVar11 = piVar13;
  FUN_1097bf628(piVar13,&uStack_50);
  if (((int)piVar11 != 0) && (0 < (int)uVar3)) {
    iVar6 = *piVar13;
    iVar7 = piVar13[3];
    uStack_50._0_4_ = (int)uStack_50 + -1;
    uStack_50._4_4_ = uStack_50._4_4_ + -1;
    piVar11 = param_2;
    puVar12 = puVar5;
    do {
      if ((param_2 == (int *)0x0) || (*piVar11 != 0)) {
        iVar1 = (int)uStack_50 >> 0x10;
        iVar2 = uStack_50._4_4_ >> 0x10;
        iVar9 = *(int *)(lVar4 + 0xa0) + -1;
        iVar10 = iVar1;
        if (iVar9 <= iVar1) {
          iVar10 = iVar9;
        }
        iVar9 = 0;
        if (-1 < iVar1) {
          iVar9 = iVar10;
        }
        iVar10 = *(int *)(lVar4 + 0xa4) + -1;
        iVar1 = iVar2;
        if (iVar10 <= iVar2) {
          iVar1 = iVar10;
        }
        iVar10 = 0;
        if (-1 < iVar2) {
          iVar10 = iVar1;
        }
        uVar8 = *(ushort *)
                 (*(long *)(lVar4 + 0xa8) + (long)(iVar10 * *(int *)(lVar4 + 0xb8)) * 4 +
                 (long)iVar9 * 2);
        *puVar12 = (uVar8 & 0xe000) << 3 | (uint)(uVar8 >> 0xb) << 0x13 |
                   uVar8 >> 2 & 7 | (uVar8 & 0x1f) << 3 | uVar8 >> 1 & 0x300 |
                   (uVar8 >> 5 & 0x3f) << 10 | 0xff000000;
      }
      puVar12 = puVar12 + 1;
      piVar11 = piVar11 + 1;
      uStack_50._0_4_ = (int)uStack_50 + iVar6;
      uStack_50._4_4_ = uStack_50._4_4_ + iVar7;
      uVar14 = uVar14 - 1;
    } while (uVar14 != 0);
  }
  return puVar5;
}



/* Entry: 1097ba7a8; end: 1097ba9ff;  */

uint * FUN_1097ba7a8(long *param_1,int *param_2)

{
  long lVar1;
  long lVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  long lVar7;
  uint *puVar8;
  int iVar9;
  int iVar10;
  ushort uVar11;
  ushort uVar12;
  ushort uVar13;
  ushort uVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  uint uVar18;
  uint uVar19;
  int *piVar20;
  uint uVar21;
  uint uVar22;
  uint *puVar23;
  int *piVar24;
  ulong uVar25;
  uint6 uVar26;
  undefined8 uStack_60;
  undefined4 uStack_58;
  
  lVar7 = *param_1;
  puVar8 = (uint *)param_1[1];
  uVar21 = *(uint *)(param_1 + 3);
  uVar25 = (ulong)uVar21;
  *(int *)((long)param_1 + 0x14) = *(int *)((long)param_1 + 0x14) + 1;
  uStack_60 = CONCAT44((int)((ulong)param_1[2] >> 0x20) << 0x10,(int)param_1[2] << 0x10) |
              0x800000008000;
  uStack_58 = 0x10000;
  piVar24 = *(int **)(lVar7 + 0x38);
  piVar20 = piVar24;
  FUN_1097bf628(piVar24,&uStack_60);
  if (((int)piVar20 != 0) && (0 < (int)uVar21)) {
    iVar9 = *piVar24;
    iVar10 = piVar24[3];
    uVar21 = (int)uStack_60 - 0x8000;
    uVar22 = uStack_60._4_4_ - 0x8000;
    piVar20 = param_2;
    puVar23 = puVar8;
    do {
      if ((param_2 == (int *)0x0) || (*piVar20 != 0)) {
        uVar18 = uVar21 >> 9 & 0x7f;
        uVar19 = uVar22 >> 9 & 0x7f;
        iVar3 = (int)uVar22 >> 0x10;
        iVar4 = (int)uVar21 >> 0x10;
        iVar16 = *(int *)(lVar7 + 0xa0) + -1;
        iVar15 = iVar4;
        if (iVar16 <= iVar4) {
          iVar15 = iVar16;
        }
        iVar5 = 0;
        if (-1 < iVar4) {
          iVar5 = iVar15;
        }
        iVar17 = *(int *)(lVar7 + 0xa4) + -1;
        iVar15 = iVar3;
        if (iVar17 <= iVar3) {
          iVar15 = iVar17;
        }
        iVar6 = 0;
        if (-1 < iVar3) {
          iVar6 = iVar15;
        }
        if (iVar4 + 1 < iVar16) {
          iVar16 = iVar4 + 1;
        }
        iVar15 = 0;
        if (-2 < iVar4) {
          iVar15 = iVar16;
        }
        if (iVar3 + 1 < iVar17) {
          iVar17 = iVar3 + 1;
        }
        iVar4 = 0;
        if (-2 < iVar3) {
          iVar4 = iVar17;
        }
        lVar1 = *(long *)(lVar7 + 0xa8) + (long)(*(int *)(lVar7 + 0xb8) * iVar6) * 4;
        lVar2 = *(long *)(lVar7 + 0xa8) + (long)(*(int *)(lVar7 + 0xb8) * iVar4) * 4;
        uVar11 = *(ushort *)(lVar1 + (long)iVar5 * 2);
        uVar12 = *(ushort *)(lVar1 + (long)iVar15 * 2);
        uVar13 = *(ushort *)(lVar2 + (long)iVar5 * 2);
        uVar14 = *(ushort *)(lVar2 + (long)iVar15 * 2);
        iVar3 = uVar18 * 0x200;
        uVar26 = CONCAT15((char)(((uint)uVar14 << 5) >> 8),
                          (uint5)((byte)(((uint)uVar13 << 5) >> 8) & 0xfc) << 8) & 0xfcffffffffff;
        iVar15 = uVar18 * uVar19;
        iVar4 = iVar15 * 4;
        iVar16 = iVar3 + iVar15 * -4;
        iVar15 = uVar19 * 0x200 + iVar15 * -4;
        iVar3 = (iVar4 - (iVar3 + uVar19 * 0x200)) + 0x10000;
        *puVar23 = (((uint)uVar11 << 3 | (uint)(uVar11 >> 0xb) << 0x13) >> 0x10) * iVar3 +
                   (((uint)uVar12 << 3 | (uint)(uVar12 >> 0xb) << 0x13) >> 0x10) * iVar16 +
                   (((uint)uVar13 << 3 | (uint)(uVar13 >> 0xb) << 0x13) >> 0x10) * iVar15 +
                   (((uint)uVar14 << 3 | (uint)(uVar14 >> 0xb) << 0x13) >> 0x10) * iVar4 & 0xff0000
                   | ((uint)((byte)(((uint)uVar12 << 5) >> 8) & 0xfc | (byte)(uVar12 >> 9) & 3) *
                      0x100 * iVar16 +
                      (uint)((byte)(((uint)uVar11 << 5) >> 8) & 0xfc | (byte)(uVar11 >> 9) & 3) *
                      0x100 * iVar3 +
                      (uint)(byte)((byte)(uVar26 >> 8) | (byte)(uVar13 >> 9) & 3) * 0x100 * iVar15 +
                      (uint)(ushort)(((uint6)(byte)((byte)(uVar26 >> 0x28) | (byte)(uVar14 >> 9) & 3
                                                   ) << 0x28) >> 0x20) * iVar4 & 0xff000000 |
                     ((uint)uVar11 << 3 & 0xf8 | uVar11 >> 2 & 7) * iVar3 +
                     ((uint)uVar12 << 3 & 0xf8 | uVar12 >> 2 & 7) * iVar16 +
                     ((uint)uVar13 << 3 & 0xf8 | uVar13 >> 2 & 7) * iVar15 +
                     ((uint)uVar14 << 3 & 0xf8 | uVar14 >> 2 & 7) * iVar4) >> 0x10 | 0xff000000;
      }
      puVar23 = puVar23 + 1;
      piVar20 = piVar20 + 1;
      uVar21 = uVar21 + iVar9;
      uVar22 = uVar22 + iVar10;
      uVar25 = uVar25 - 1;
    } while (uVar25 != 0);
  }
  return puVar8;
}



/* Entry: 1097baa00; end: 1097bacff;  */

long FUN_1097baa00(long *param_1,long param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  long lVar10;
  long lVar11;
  int iVar12;
  int iVar13;
  ushort uVar14;
  short sVar15;
  short sVar16;
  int iVar17;
  int iVar18;
  uint uVar19;
  uint uVar20;
  int *piVar21;
  ulong uVar22;
  uint uVar23;
  uint uVar24;
  uint *puVar25;
  int iVar26;
  int iVar27;
  int *piVar28;
  int iVar29;
  uint *puVar30;
  int iVar31;
  int iVar32;
  uint *puVar33;
  undefined8 uVar34;
  undefined8 uStack_70;
  undefined4 uStack_68;
  
  lVar10 = *param_1;
  lVar11 = param_1[1];
  uVar8 = *(uint *)(param_1 + 3);
  *(int *)((long)param_1 + 0x14) = *(int *)((long)param_1 + 0x14) + 1;
  puVar30 = *(uint **)(lVar10 + 0x48);
  uVar7 = *puVar30;
  uVar9 = puVar30[1];
  sVar15 = *(short *)((long)puVar30 + 10);
  sVar16 = *(short *)((long)puVar30 + 0xe);
  uStack_70 = CONCAT44((int)((ulong)param_1[2] >> 0x20) << 0x10,(int)param_1[2] << 0x10) |
              0x800000008000;
  uStack_68 = 0x10000;
  piVar28 = *(int **)(lVar10 + 0x38);
  piVar21 = piVar28;
  FUN_1097bf628(piVar28,&uStack_70);
  if (((int)piVar21 != 0) && (0 < (int)uVar8)) {
    uVar22 = 0;
    iVar2 = (int)uVar7 >> 0x10;
    iVar3 = (int)uVar9 >> 0x10;
    uVar19 = 0x10 - (int)sVar15;
    iVar4 = (1 << (ulong)(uVar19 & 0x1f)) >> 1;
    uVar20 = 0x10 - (int)sVar16;
    iVar12 = *piVar28;
    iVar13 = piVar28[3];
    iVar5 = (1 << (ulong)(uVar20 & 0x1f)) >> 1;
    do {
      if ((param_2 == 0) || (*(int *)(param_2 + uVar22 * 4) != 0)) {
        if (iVar3 < 1) {
          uVar23 = 0;
          uVar24 = 0;
          uVar34 = 0;
        }
        else {
          iVar29 = 0;
          iVar27 = 0;
          uVar24 = (uint)uStack_70 & -1 << (ulong)(uVar19 & 0x1f);
          uVar23 = uStack_70._4_4_ & -1 << (ulong)(uVar20 & 0x1f);
          iVar6 = (int)(uVar24 + iVar4 + ((int)(0xfffe - (uVar7 & 0xffff0000)) >> 1)) >> 0x10;
          iVar32 = (int)(uVar23 + iVar5 + ((int)(0xfffe - (uVar9 & 0xffff0000)) >> 1)) >> 0x10;
          iVar1 = iVar3 + iVar32;
          uVar34 = 0;
          puVar33 = puVar30 + (long)(iVar2 << (ulong)((int)sVar15 & 0x1f)) +
                              (ulong)(((uVar23 + iVar5 & 0xffff) >> (ulong)(uVar20 & 0x1f)) * iVar3)
                              + 4;
          do {
            puVar25 = puVar30 + (long)(int)(((uVar24 + iVar4 & 0xffff) >> (ulong)(uVar19 & 0x1f)) *
                                           iVar2) + 4;
            iVar31 = iVar6;
            if (*puVar33 != 0 && 0 < iVar2) {
              do {
                if (*puVar25 != 0) {
                  iVar17 = *(int *)(lVar10 + 0xa0) + -1;
                  iVar26 = iVar31;
                  if (iVar17 <= iVar31) {
                    iVar26 = iVar17;
                  }
                  iVar17 = 0;
                  if (-1 < iVar31) {
                    iVar17 = iVar26;
                  }
                  iVar18 = *(int *)(lVar10 + 0xa4) + -1;
                  iVar26 = iVar32;
                  if (iVar18 <= iVar32) {
                    iVar26 = iVar18;
                  }
                  iVar18 = 0;
                  if (-1 < iVar32) {
                    iVar18 = iVar26;
                  }
                  uVar14 = *(ushort *)
                            (*(long *)(lVar10 + 0xa8) + (long)(iVar18 * *(int *)(lVar10 + 0xb8)) * 4
                            + (long)iVar17 * 2);
                  iVar26 = (int)((ulong)((long)(int)*puVar25 * (long)(int)*puVar33 + 0x8000) >> 0x10
                                );
                  iVar29 = iVar29 + (((uVar14 & 0x7e0) << 5 | uVar14 >> 1 & 0x3ff) >> 8) * iVar26;
                  iVar27 = iVar27 + ((uint)uVar14 << 3 & 0xf8 | uVar14 >> 2 & 7) * iVar26;
                  uVar34 = CONCAT44((int)((ulong)uVar34 >> 0x20) + iVar26 * 0xff,
                                    (int)uVar34 +
                                    (((uint)uVar14 << 3 | (uint)(uVar14 >> 0xb) << 0x13) >> 0x10) *
                                    iVar26);
                }
                iVar31 = iVar31 + 1;
                puVar25 = puVar25 + 1;
              } while (iVar31 < iVar2 + iVar6);
            }
            iVar32 = iVar32 + 1;
            puVar33 = puVar33 + 1;
          } while (iVar32 < iVar1);
          uVar34 = CONCAT44((int)((ulong)uVar34 >> 0x20) + 0x8000 >> 0x10,
                            (int)uVar34 + 0x8000 >> 0x10);
          uVar24 = iVar29 + 0x8000 >> 0x10;
          uVar23 = iVar27 + 0x8000 >> 0x10;
        }
        uVar34 = NEON_smax(uVar34,0,4);
        uVar24 = uVar24 & ((int)uVar24 >> 0x1f ^ 0xffffffffU);
        if (0xfe < (int)uVar24) {
          uVar24 = 0xff;
        }
        uVar23 = uVar23 & ((int)uVar23 >> 0x1f ^ 0xffffffffU);
        if (0xfe < (int)uVar23) {
          uVar23 = 0xff;
        }
        uVar34 = NEON_smin(uVar34,0xff000000ff,4);
        uVar34 = NEON_ushl(uVar34,0x1800000010,4);
        *(uint *)(lVar11 + uVar22 * 4) =
             uVar23 | uVar24 << 8 | (uint)uVar34 | (uint)((ulong)uVar34 >> 0x20);
      }
      uStack_70._0_4_ = (uint)uStack_70 + iVar12;
      uStack_70._4_4_ = uStack_70._4_4_ + iVar13;
      uVar22 = uVar22 + 1;
    } while (uVar22 != uVar8);
  }
  return lVar11;
}



/* Entry: 1097bad00; end: 1097bb17b;  */

uint * FUN_1097bad00(long *param_1,int *param_2)

{
  int iVar1;
  uint uVar2;
  long lVar3;
  uint *puVar4;
  int iVar5;
  int iVar6;
  ushort uVar7;
  int *piVar8;
  uint *puVar9;
  uint uVar10;
  int *piVar11;
  ulong uVar12;
  undefined8 uStack_50;
  undefined4 uStack_48;
  
  lVar3 = *param_1;
  puVar4 = (uint *)param_1[1];
  uVar10 = *(uint *)(param_1 + 3);
  uVar12 = (ulong)uVar10;
  *(int *)((long)param_1 + 0x14) = *(int *)((long)param_1 + 0x14) + 1;
  uStack_50 = CONCAT44((int)((ulong)param_1[2] >> 0x20) << 0x10,(int)param_1[2] << 0x10) |
              0x800000008000;
  uStack_48 = 0x10000;
  piVar11 = *(int **)(lVar3 + 0x38);
  piVar8 = piVar11;
  FUN_1097bf628(piVar11,&uStack_50);
  if (((int)piVar8 != 0) && (0 < (int)uVar10)) {
    iVar5 = *piVar11;
    iVar6 = piVar11[3];
    uStack_50._0_4_ = (int)uStack_50 + -1;
    uStack_50._4_4_ = uStack_50._4_4_ + -1;
    piVar8 = param_2;
    puVar9 = puVar4;
    do {
      if ((param_2 == (int *)0x0) || (*piVar8 != 0)) {
        uVar10 = 0;
        iVar1 = uStack_50._4_4_ >> 0x10;
        if ((-1 < iVar1) &&
           (((iVar1 < *(int *)(lVar3 + 0xa4) && (uVar2 = (int)uStack_50 >> 0x10, -1 < (int)uVar2))
            && ((int)uVar2 < *(int *)(lVar3 + 0xa0))))) {
          uVar7 = *(ushort *)
                   (*(long *)(lVar3 + 0xa8) + (long)(*(int *)(lVar3 + 0xb8) * iVar1) * 4 +
                   (ulong)uVar2 * 2);
          uVar10 = (uVar7 & 0xe000) << 3 | (uint)(uVar7 >> 0xb) << 0x13 |
                   uVar7 >> 2 & 7 | (uVar7 & 0x1f) << 3 | uVar7 >> 1 & 0x300 |
                   (uVar7 >> 5 & 0x3f) << 10 | 0xff000000;
        }
        *puVar9 = uVar10;
      }
      puVar9 = puVar9 + 1;
      piVar8 = piVar8 + 1;
      uStack_50._0_4_ = (int)uStack_50 + iVar5;
      uStack_50._4_4_ = uStack_50._4_4_ + iVar6;
      uVar12 = uVar12 - 1;
    } while (uVar12 != 0);
  }
  return puVar4;
}



/* Entry: 1097bb17c; end: 1097bb493;  */

long FUN_1097bb17c(long *param_1,long param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  long lVar10;
  long lVar11;
  int iVar12;
  int iVar13;
  ushort uVar14;
  short sVar15;
  short sVar16;
  uint uVar17;
  uint uVar18;
  int *piVar19;
  uint uVar20;
  ulong uVar21;
  uint uVar22;
  int iVar23;
  int iVar24;
  int *piVar25;
  int iVar26;
  uint *puVar27;
  uint uVar28;
  uint *puVar29;
  uint *puVar30;
  long lVar31;
  undefined8 uVar32;
  undefined8 uStack_70;
  undefined4 uStack_68;
  
  lVar10 = *param_1;
  lVar11 = param_1[1];
  uVar8 = *(uint *)(param_1 + 3);
  *(int *)((long)param_1 + 0x14) = *(int *)((long)param_1 + 0x14) + 1;
  puVar27 = *(uint **)(lVar10 + 0x48);
  uVar7 = *puVar27;
  uVar9 = puVar27[1];
  sVar15 = *(short *)((long)puVar27 + 10);
  sVar16 = *(short *)((long)puVar27 + 0xe);
  uStack_70 = CONCAT44((int)((ulong)param_1[2] >> 0x20) << 0x10,(int)param_1[2] << 0x10) |
              0x800000008000;
  uStack_68 = 0x10000;
  piVar25 = *(int **)(lVar10 + 0x38);
  piVar19 = piVar25;
  FUN_1097bf628(piVar25,&uStack_70);
  if (((int)piVar19 != 0) && (0 < (int)uVar8)) {
    uVar21 = 0;
    iVar3 = (int)uVar7 >> 0x10;
    iVar4 = (int)uVar9 >> 0x10;
    uVar17 = 0x10 - (int)sVar15;
    iVar5 = (1 << (ulong)(uVar17 & 0x1f)) >> 1;
    uVar18 = 0x10 - (int)sVar16;
    iVar12 = *piVar25;
    iVar13 = piVar25[3];
    iVar6 = (1 << (ulong)(uVar18 & 0x1f)) >> 1;
    do {
      if ((param_2 == 0) || (*(int *)(param_2 + uVar21 * 4) != 0)) {
        if (iVar4 < 1) {
          uVar22 = 0;
          uVar28 = 0;
          uVar32 = 0;
        }
        else {
          iVar26 = 0;
          iVar24 = 0;
          uVar20 = uStack_70._4_4_ & -1 << (ulong)(uVar18 & 0x1f);
          uVar28 = (int)(uVar20 + iVar6 + ((int)(0xfffe - (uVar9 & 0xffff0000)) >> 1)) >> 0x10;
          iVar1 = iVar4 + uVar28;
          uVar2 = (uint)uStack_70 & -1 << (ulong)(uVar17 & 0x1f);
          uVar22 = uVar2 + iVar5 + ((int)(0xfffe - (uVar7 & 0xffff0000)) >> 1);
          uVar32 = 0;
          puVar29 = puVar27 + (long)(iVar3 << (ulong)((int)sVar15 & 0x1f)) +
                              (ulong)(((uVar20 + iVar6 & 0xffff) >> (ulong)(uVar18 & 0x1f)) * iVar4)
                              + 4;
          do {
            puVar30 = puVar27 + (long)(int)(((uVar2 + iVar5 & 0xffff) >> (ulong)(uVar17 & 0x1f)) *
                                           iVar3) + 4;
            lVar31 = (long)((ulong)uVar22 << 0x20) >> 0x30;
            if (*puVar29 != 0 && 0 < iVar3) {
              do {
                if (*puVar30 != 0) {
                  if ((((int)(uVar28 | (uint)lVar31) < 0) || (*(int *)(lVar10 + 0xa0) <= lVar31)) ||
                     (*(int *)(lVar10 + 0xa4) <= (int)uVar28)) {
                    uVar20 = 0;
                  }
                  else {
                    uVar14 = *(ushort *)
                              (*(long *)(lVar10 + 0xa8) +
                               (long)(int)(uVar28 * *(int *)(lVar10 + 0xb8)) * 4 + lVar31 * 2);
                    uVar20 = (uVar14 & 0xe000) << 3 | (uint)(uVar14 >> 0xb) << 0x13 |
                             uVar14 >> 2 & 7 | (uVar14 & 0x1f) << 3 | uVar14 >> 1 & 0x300 |
                             (uVar14 >> 5 & 0x3f) << 10 | 0xff000000;
                  }
                  iVar23 = (int)((ulong)((long)(int)*puVar30 * (long)(int)*puVar29 + 0x8000) >> 0x10
                                );
                  iVar26 = iVar26 + (uVar20 >> 8 & 0xff) * iVar23;
                  iVar24 = iVar24 + (uVar20 & 0xff) * iVar23;
                  uVar32 = CONCAT44((int)((ulong)uVar32 >> 0x20) + (uVar20 >> 0x18) * iVar23,
                                    (int)uVar32 + (uVar20 >> 0x10 & 0xff) * iVar23);
                }
                lVar31 = lVar31 + 1;
                puVar30 = puVar30 + 1;
              } while (lVar31 < iVar3 + ((int)uVar22 >> 0x10));
            }
            uVar28 = uVar28 + 1;
            puVar29 = puVar29 + 1;
          } while ((int)uVar28 < iVar1);
          uVar32 = CONCAT44((int)((ulong)uVar32 >> 0x20) + 0x8000 >> 0x10,
                            (int)uVar32 + 0x8000 >> 0x10);
          uVar28 = iVar26 + 0x8000 >> 0x10;
          uVar22 = iVar24 + 0x8000 >> 0x10;
        }
        uVar32 = NEON_smax(uVar32,0,4);
        uVar28 = uVar28 & ((int)uVar28 >> 0x1f ^ 0xffffffffU);
        if (0xfe < (int)uVar28) {
          uVar28 = 0xff;
        }
        uVar22 = uVar22 & ((int)uVar22 >> 0x1f ^ 0xffffffffU);
        if (0xfe < (int)uVar22) {
          uVar22 = 0xff;
        }
        uVar32 = NEON_smin(uVar32,0xff000000ff,4);
        uVar32 = NEON_ushl(uVar32,0x1800000010,4);
        *(uint *)(lVar11 + uVar21 * 4) =
             uVar22 | uVar28 << 8 | (uint)uVar32 | (uint)((ulong)uVar32 >> 0x20);
      }
      uStack_70._0_4_ = (uint)uStack_70 + iVar12;
      uStack_70._4_4_ = uStack_70._4_4_ + iVar13;
      uVar21 = uVar21 + 1;
    } while (uVar21 != uVar8);
  }
  return lVar11;
}



/* Entry: 1097bb494; end: 1097bb613;  */

uint * FUN_1097bb494(long *param_1,int *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  uint *puVar5;
  int iVar6;
  int iVar7;
  ushort uVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int *piVar12;
  uint *puVar13;
  int *piVar14;
  ulong uVar15;
  undefined8 uStack_50;
  undefined4 uStack_48;
  
  lVar4 = *param_1;
  puVar5 = (uint *)param_1[1];
  uVar3 = *(uint *)(param_1 + 3);
  uVar15 = (ulong)uVar3;
  *(int *)((long)param_1 + 0x14) = *(int *)((long)param_1 + 0x14) + 1;
  uStack_50 = CONCAT44((int)((ulong)param_1[2] >> 0x20) << 0x10,(int)param_1[2] << 0x10) |
              0x800000008000;
  uStack_48 = 0x10000;
  piVar14 = *(int **)(lVar4 + 0x38);
  piVar12 = piVar14;
  FUN_1097bf628(piVar14,&uStack_50);
  if (((int)piVar12 != 0) && (0 < (int)uVar3)) {
    iVar6 = *piVar14;
    iVar7 = piVar14[3];
    uStack_50._0_4_ = (int)uStack_50 + -1;
    uStack_50._4_4_ = uStack_50._4_4_ + -1;
    piVar12 = param_2;
    puVar13 = puVar5;
    do {
      if ((param_2 == (int *)0x0) || (*piVar12 != 0)) {
        uVar3 = (int)uStack_50 >> 0x10;
        uVar1 = uStack_50._4_4_ >> 0x10;
        iVar9 = *(int *)(lVar4 + 0xa0) * 2;
        iVar10 = 0;
        if (iVar9 != 0) {
          iVar10 = (int)uVar3 / iVar9;
        }
        iVar11 = 0;
        if (iVar9 != 0) {
          iVar11 = (int)~uVar3 / iVar9;
        }
        uVar2 = uVar3 - iVar10 * iVar9;
        if ((uVar3 & 0x80000000) != 0) {
          uVar2 = iVar9 + ~(~uVar3 - iVar11 * iVar9);
        }
        if (*(int *)(lVar4 + 0xa0) <= (int)uVar2) {
          uVar2 = iVar9 + ~uVar2;
        }
        iVar9 = *(int *)(lVar4 + 0xa4) * 2;
        iVar10 = 0;
        if (iVar9 != 0) {
          iVar10 = (int)uVar1 / iVar9;
        }
        iVar11 = 0;
        if (iVar9 != 0) {
          iVar11 = (int)~uVar1 / iVar9;
        }
        uVar3 = uVar1 - iVar10 * iVar9;
        if ((uVar1 & 0x80000000) != 0) {
          uVar3 = iVar9 + ~(~uVar1 - iVar11 * iVar9);
        }
        if (*(int *)(lVar4 + 0xa4) <= (int)uVar3) {
          uVar3 = iVar9 + ~uVar3;
        }
        uVar8 = *(ushort *)
                 (*(long *)(lVar4 + 0xa8) + (long)(int)(*(int *)(lVar4 + 0xb8) * uVar3) * 4 +
                 (long)(int)uVar2 * 2);
        *puVar13 = (uVar8 & 0xe000) << 3 | (uint)(uVar8 >> 0xb) << 0x13 |
                   uVar8 >> 2 & 7 | (uVar8 & 0x1f) << 3 | uVar8 >> 1 & 0x300 |
                   (uVar8 >> 5 & 0x3f) << 10 | 0xff000000;
      }
      puVar13 = puVar13 + 1;
      piVar12 = piVar12 + 1;
      uStack_50._0_4_ = (int)uStack_50 + iVar6;
      uStack_50._4_4_ = uStack_50._4_4_ + iVar7;
      uVar15 = uVar15 - 1;
    } while (uVar15 != 0);
  }
  return puVar5;
}



/* Entry: 1097bb614; end: 1097bb8ff;  */

uint * FUN_1097bb614(long *param_1,int *param_2)

{
  long lVar1;
  long lVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  long lVar9;
  uint *puVar10;
  int iVar11;
  int iVar12;
  ushort uVar13;
  ushort uVar14;
  ushort uVar15;
  ushort uVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  uint uVar21;
  uint uVar22;
  int *piVar23;
  uint uVar24;
  uint uVar25;
  uint uVar26;
  uint *puVar27;
  int *piVar28;
  ulong uVar29;
  uint6 uVar30;
  undefined8 uStack_60;
  undefined4 uStack_58;
  
  lVar9 = *param_1;
  puVar10 = (uint *)param_1[1];
  uVar25 = *(uint *)(param_1 + 3);
  uVar29 = (ulong)uVar25;
  *(int *)((long)param_1 + 0x14) = *(int *)((long)param_1 + 0x14) + 1;
  uStack_60 = CONCAT44((int)((ulong)param_1[2] >> 0x20) << 0x10,(int)param_1[2] << 0x10) |
              0x800000008000;
  uStack_58 = 0x10000;
  piVar28 = *(int **)(lVar9 + 0x38);
  piVar23 = piVar28;
  FUN_1097bf628(piVar28,&uStack_60);
  if (((int)piVar23 != 0) && (0 < (int)uVar25)) {
    iVar11 = *piVar28;
    iVar12 = piVar28[3];
    uVar25 = (int)uStack_60 - 0x8000;
    uVar26 = uStack_60._4_4_ - 0x8000;
    piVar23 = param_2;
    puVar27 = puVar10;
    do {
      iVar7 = *(int *)(lVar9 + 0xa0);
      iVar8 = *(int *)(lVar9 + 0xa4);
      if ((param_2 == (int *)0x0) || (*piVar23 != 0)) {
        uVar3 = (int)uVar25 >> 0x10;
        iVar17 = iVar7 * 2;
        if ((int)uVar3 < 0) {
          iVar18 = 0;
          if (iVar17 != 0) {
            iVar18 = (int)~uVar3 / iVar17;
          }
          uVar24 = iVar17 + ~(~uVar3 - iVar18 * iVar17);
        }
        else {
          iVar18 = 0;
          if (iVar17 != 0) {
            iVar18 = (int)uVar3 / iVar17;
          }
          uVar24 = uVar3 - iVar18 * iVar17;
        }
        uVar21 = uVar25 >> 9 & 0x7f;
        uVar22 = uVar26 >> 9 & 0x7f;
        uVar4 = (int)uVar26 >> 0x10;
        if (iVar7 <= (int)uVar24) {
          uVar24 = iVar17 + ~uVar24;
        }
        iVar18 = iVar8 * 2;
        iVar19 = 0;
        if (iVar18 != 0) {
          iVar19 = (int)uVar4 / iVar18;
        }
        iVar20 = 0;
        if (iVar18 != 0) {
          iVar20 = (int)~uVar4 / iVar18;
        }
        uVar5 = uVar4 - iVar19 * iVar18;
        if ((uVar4 & 0x80000000) != 0) {
          uVar5 = iVar18 + ~(~uVar4 - iVar20 * iVar18);
        }
        if (iVar8 <= (int)uVar5) {
          uVar5 = iVar18 + ~uVar5;
        }
        iVar19 = 0;
        if (iVar17 != 0) {
          iVar19 = (int)(uVar3 + 1) / iVar17;
        }
        iVar20 = 0;
        if (iVar17 != 0) {
          iVar20 = (int)(-2 - uVar3) / iVar17;
        }
        uVar6 = (uVar3 + 1) - iVar19 * iVar17;
        if ((int)uVar3 < -1) {
          uVar6 = iVar17 + ~((-2 - uVar3) - iVar20 * iVar17);
        }
        if (iVar7 <= (int)uVar6) {
          uVar6 = iVar17 + ~uVar6;
        }
        iVar7 = 0;
        if (iVar18 != 0) {
          iVar7 = (int)(uVar4 + 1) / iVar18;
        }
        iVar17 = 0;
        if (iVar18 != 0) {
          iVar17 = (int)(-2 - uVar4) / iVar18;
        }
        uVar3 = (uVar4 + 1) - iVar7 * iVar18;
        if ((int)uVar4 < -1) {
          uVar3 = iVar18 + ~((-2 - uVar4) - iVar17 * iVar18);
        }
        if (iVar8 <= (int)uVar3) {
          uVar3 = iVar18 + ~uVar3;
        }
        lVar1 = *(long *)(lVar9 + 0xa8) + (long)(int)(*(int *)(lVar9 + 0xb8) * uVar5) * 4;
        lVar2 = *(long *)(lVar9 + 0xa8) + (long)(int)(*(int *)(lVar9 + 0xb8) * uVar3) * 4;
        uVar13 = *(ushort *)(lVar1 + (long)(int)uVar24 * 2);
        uVar14 = *(ushort *)(lVar1 + (long)(int)uVar6 * 2);
        uVar15 = *(ushort *)(lVar2 + (long)(int)uVar24 * 2);
        uVar16 = *(ushort *)(lVar2 + (long)(int)uVar6 * 2);
        iVar7 = uVar21 * 0x200;
        uVar30 = CONCAT15((char)(((uint)uVar16 << 5) >> 8),
                          (uint5)((byte)(((uint)uVar15 << 5) >> 8) & 0xfc) << 8) & 0xfcffffffffff;
        iVar17 = uVar21 * uVar22;
        iVar8 = iVar17 * 4;
        iVar18 = iVar7 + iVar17 * -4;
        iVar17 = uVar22 * 0x200 + iVar17 * -4;
        iVar7 = (iVar8 - (iVar7 + uVar22 * 0x200)) + 0x10000;
        *puVar27 = (((uint)uVar13 << 3 | (uint)(uVar13 >> 0xb) << 0x13) >> 0x10) * iVar7 +
                   (((uint)uVar14 << 3 | (uint)(uVar14 >> 0xb) << 0x13) >> 0x10) * iVar18 +
                   (((uint)uVar15 << 3 | (uint)(uVar15 >> 0xb) << 0x13) >> 0x10) * iVar17 +
                   (((uint)uVar16 << 3 | (uint)(uVar16 >> 0xb) << 0x13) >> 0x10) * iVar8 & 0xff0000
                   | ((uint)((byte)(((uint)uVar14 << 5) >> 8) & 0xfc | (byte)(uVar14 >> 9) & 3) *
                      0x100 * iVar18 +
                      (uint)((byte)(((uint)uVar13 << 5) >> 8) & 0xfc | (byte)(uVar13 >> 9) & 3) *
                      0x100 * iVar7 +
                      (uint)(byte)((byte)(uVar30 >> 8) | (byte)(uVar15 >> 9) & 3) * 0x100 * iVar17 +
                      (uint)(ushort)(((uint6)(byte)((byte)(uVar30 >> 0x28) | (byte)(uVar16 >> 9) & 3
                                                   ) << 0x28) >> 0x20) * iVar8 & 0xff000000 |
                     ((uint)uVar13 << 3 & 0xf8 | uVar13 >> 2 & 7) * iVar7 +
                     ((uint)uVar14 << 3 & 0xf8 | uVar14 >> 2 & 7) * iVar18 +
                     ((uint)uVar15 << 3 & 0xf8 | uVar15 >> 2 & 7) * iVar17 +
                     ((uint)uVar16 << 3 & 0xf8 | uVar16 >> 2 & 7) * iVar8) >> 0x10 | 0xff000000;
      }
      puVar27 = puVar27 + 1;
      piVar23 = piVar23 + 1;
      uVar25 = uVar25 + iVar11;
      uVar26 = uVar26 + iVar12;
      uVar29 = uVar29 - 1;
    } while (uVar29 != 0);
  }
  return puVar10;
}



/* Entry: 1097bb900; end: 1097bbc63;  */

long FUN_1097bb900(long *param_1,long param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  long lVar11;
  long lVar12;
  int iVar13;
  int iVar14;
  ushort uVar15;
  short sVar16;
  short sVar17;
  int iVar18;
  int iVar19;
  uint uVar20;
  uint uVar21;
  int *piVar22;
  uint uVar23;
  uint uVar24;
  ulong uVar25;
  uint uVar26;
  uint *puVar27;
  int iVar28;
  int iVar29;
  int *piVar30;
  int iVar31;
  uint *puVar32;
  uint uVar33;
  uint uVar34;
  uint *puVar35;
  undefined8 uVar36;
  undefined8 uStack_70;
  undefined4 uStack_68;
  
  lVar11 = *param_1;
  lVar12 = param_1[1];
  uVar9 = *(uint *)(param_1 + 3);
  *(int *)((long)param_1 + 0x14) = *(int *)((long)param_1 + 0x14) + 1;
  puVar32 = *(uint **)(lVar11 + 0x48);
  uVar8 = *puVar32;
  uVar10 = puVar32[1];
  sVar16 = *(short *)((long)puVar32 + 10);
  sVar17 = *(short *)((long)puVar32 + 0xe);
  uStack_70 = CONCAT44((int)((ulong)param_1[2] >> 0x20) << 0x10,(int)param_1[2] << 0x10) |
              0x800000008000;
  uStack_68 = 0x10000;
  piVar30 = *(int **)(lVar11 + 0x38);
  piVar22 = piVar30;
  FUN_1097bf628(piVar30,&uStack_70);
  if (((int)piVar22 != 0) && (0 < (int)uVar9)) {
    uVar25 = 0;
    iVar2 = (int)uVar8 >> 0x10;
    iVar3 = (int)uVar10 >> 0x10;
    uVar20 = 0x10 - (int)sVar16;
    iVar4 = (1 << (ulong)(uVar20 & 0x1f)) >> 1;
    uVar21 = 0x10 - (int)sVar17;
    iVar13 = *piVar30;
    iVar14 = piVar30[3];
    iVar5 = (1 << (ulong)(uVar21 & 0x1f)) >> 1;
    do {
      if ((param_2 == 0) || (*(int *)(param_2 + uVar25 * 4) != 0)) {
        if (iVar3 < 1) {
          uVar26 = 0;
          uVar34 = 0;
          uVar36 = 0;
        }
        else {
          iVar31 = 0;
          iVar29 = 0;
          uVar26 = (uint)uStack_70 & -1 << (ulong)(uVar20 & 0x1f);
          uVar33 = uStack_70._4_4_ & -1 << (ulong)(uVar21 & 0x1f);
          uVar6 = (int)(uVar26 + iVar4 + ((int)(0xfffe - (uVar8 & 0xffff0000)) >> 1)) >> 0x10;
          uVar34 = (int)(uVar33 + iVar5 + ((int)(0xfffe - (uVar10 & 0xffff0000)) >> 1)) >> 0x10;
          iVar1 = iVar3 + uVar34;
          uVar36 = 0;
          puVar35 = puVar32 + (long)(iVar2 << (ulong)((int)sVar16 & 0x1f)) +
                              (ulong)(((uVar33 + iVar5 & 0xffff) >> (ulong)(uVar21 & 0x1f)) * iVar3)
                              + 4;
          do {
            if (*puVar35 != 0 && 0 < iVar2) {
              puVar27 = puVar32 + (long)(int)(((uVar26 + iVar4 & 0xffff) >> (ulong)(uVar20 & 0x1f))
                                             * iVar2) + 4;
              uVar33 = uVar6;
              uVar23 = ~uVar6;
              do {
                if (*puVar27 != 0) {
                  iVar28 = *(int *)(lVar11 + 0xa0) * 2;
                  iVar18 = 0;
                  if (iVar28 != 0) {
                    iVar18 = (int)uVar33 / iVar28;
                  }
                  iVar19 = 0;
                  if (iVar28 != 0) {
                    iVar19 = (int)uVar23 / iVar28;
                  }
                  uVar7 = uVar33 - iVar18 * iVar28;
                  if ((uVar33 & 0x80000000) != 0) {
                    uVar7 = iVar28 + ~(uVar23 - iVar19 * iVar28);
                  }
                  if (*(int *)(lVar11 + 0xa0) <= (int)uVar7) {
                    uVar7 = iVar28 + ~uVar7;
                  }
                  iVar28 = *(int *)(lVar11 + 0xa4) * 2;
                  if ((int)uVar34 < 0) {
                    iVar18 = 0;
                    if (iVar28 != 0) {
                      iVar18 = (int)~uVar34 / iVar28;
                    }
                    uVar24 = iVar28 + ~(~uVar34 - iVar18 * iVar28);
                  }
                  else {
                    iVar18 = 0;
                    if (iVar28 != 0) {
                      iVar18 = (int)uVar34 / iVar28;
                    }
                    uVar24 = uVar34 - iVar18 * iVar28;
                  }
                  if (*(int *)(lVar11 + 0xa4) <= (int)uVar24) {
                    uVar24 = iVar28 + ~uVar24;
                  }
                  uVar15 = *(ushort *)
                            (*(long *)(lVar11 + 0xa8) +
                             (long)(int)(*(int *)(lVar11 + 0xb8) * uVar24) * 4 +
                            (long)(int)uVar7 * 2);
                  iVar28 = (int)((ulong)((long)(int)*puVar27 * (long)(int)*puVar35 + 0x8000) >> 0x10
                                );
                  iVar31 = iVar31 + (((uVar15 & 0x7e0) << 5 | uVar15 >> 1 & 0x3ff) >> 8) * iVar28;
                  iVar29 = iVar29 + ((uint)uVar15 << 3 & 0xf8 | uVar15 >> 2 & 7) * iVar28;
                  uVar36 = CONCAT44((int)((ulong)uVar36 >> 0x20) + iVar28 * 0xff,
                                    (int)uVar36 +
                                    (((uint)uVar15 << 3 | (uint)(uVar15 >> 0xb) << 0x13) >> 0x10) *
                                    iVar28);
                }
                uVar33 = uVar33 + 1;
                uVar23 = uVar23 - 1;
                puVar27 = puVar27 + 1;
              } while ((int)uVar33 < (int)(iVar2 + uVar6));
            }
            uVar34 = uVar34 + 1;
            puVar35 = puVar35 + 1;
          } while ((int)uVar34 < iVar1);
          uVar36 = CONCAT44((int)((ulong)uVar36 >> 0x20) + 0x8000 >> 0x10,
                            (int)uVar36 + 0x8000 >> 0x10);
          uVar34 = iVar31 + 0x8000 >> 0x10;
          uVar26 = iVar29 + 0x8000 >> 0x10;
        }
        uVar36 = NEON_smax(uVar36,0,4);
        uVar34 = uVar34 & ((int)uVar34 >> 0x1f ^ 0xffffffffU);
        if (0xfe < (int)uVar34) {
          uVar34 = 0xff;
        }
        uVar26 = uVar26 & ((int)uVar26 >> 0x1f ^ 0xffffffffU);
        if (0xfe < (int)uVar26) {
          uVar26 = 0xff;
        }
        uVar36 = NEON_smin(uVar36,0xff000000ff,4);
        uVar36 = NEON_ushl(uVar36,0x1800000010,4);
        *(uint *)(lVar12 + uVar25 * 4) =
             uVar26 | uVar34 << 8 | (uint)uVar36 | (uint)((ulong)uVar36 >> 0x20);
      }
      uStack_70._0_4_ = (uint)uStack_70 + iVar13;
      uStack_70._4_4_ = uStack_70._4_4_ + iVar14;
      uVar25 = uVar25 + 1;
    } while (uVar25 != uVar9);
  }
  return lVar12;
}



/* Entry: 1097bbc64; end: 1097bbdeb;  */

long FUN_1097bbc64(long *param_1,long param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  long lVar7;
  long lVar8;
  int iVar9;
  int iVar10;
  ushort uVar11;
  uint uVar12;
  int iVar13;
  int *piVar14;
  ulong uVar15;
  uint uVar16;
  int iVar17;
  uint uVar18;
  int *piVar19;
  undefined8 uStack_50;
  undefined4 uStack_48;
  
  lVar7 = *param_1;
  lVar8 = param_1[1];
  uVar5 = *(uint *)(param_1 + 3);
  *(int *)((long)param_1 + 0x14) = *(int *)((long)param_1 + 0x14) + 1;
  uStack_50 = CONCAT44((int)((ulong)param_1[2] >> 0x20) << 0x10,(int)param_1[2] << 0x10) |
              0x800000008000;
  uStack_48 = 0x10000;
  piVar19 = *(int **)(lVar7 + 0x38);
  piVar14 = piVar19;
  FUN_1097bf628(piVar19,&uStack_50);
  if (((int)piVar14 != 0) && (0 < (int)uVar5)) {
    uVar15 = 0;
    iVar9 = *piVar19;
    iVar10 = piVar19[3];
    do {
      if ((param_2 == 0) || (*(int *)(param_2 + uVar15 * 4) != 0)) {
        uVar4 = *(uint *)(lVar7 + 0xa0);
        uVar6 = *(uint *)(lVar7 + 0xa4);
        uVar16 = uVar4 + ((int)uStack_50 + -1 >> 0x10);
        iVar17 = -uVar16;
        do {
          uVar16 = uVar16 - uVar4;
          iVar17 = iVar17 + uVar4;
        } while ((int)uVar4 <= (int)uVar16);
        uVar18 = uVar6 + (uStack_50._4_4_ + -1 >> 0x10);
        iVar13 = -uVar18;
        do {
          uVar18 = uVar18 - uVar6;
          iVar13 = iVar13 + uVar6;
        } while ((int)uVar6 <= (int)uVar18);
        uVar1 = uVar18 & ((int)uVar18 >> 0x1f ^ 0xffffffffU);
        uVar3 = uVar6;
        if (uVar6 < 2) {
          uVar3 = 1;
        }
        uVar2 = uVar16 & ((int)uVar16 >> 0x1f ^ 0xffffffffU);
        uVar12 = 0;
        if (uVar3 != 0) {
          uVar12 = ((uVar1 - (uVar1 != uVar18)) + iVar13) / uVar3;
        }
        if (uVar1 != uVar18) {
          uVar12 = uVar12 + 1;
        }
        uVar1 = uVar4;
        if (uVar4 < 2) {
          uVar1 = 1;
        }
        uVar3 = 0;
        if (uVar1 != 0) {
          uVar3 = ((uVar2 - (uVar2 != uVar16)) + iVar17) / uVar1;
        }
        if (uVar2 != uVar16) {
          uVar3 = uVar3 + 1;
        }
        uVar11 = *(ushort *)
                  (*(long *)(lVar7 + 0xa8) +
                   (long)(int)((uVar18 + uVar6 * uVar12) * *(int *)(lVar7 + 0xb8)) * 4 +
                  (ulong)(uVar16 + uVar4 * uVar3) * 2);
        *(uint *)(lVar8 + uVar15 * 4) =
             (uVar11 & 0xe000) << 3 | (uint)(uVar11 >> 0xb) << 0x13 |
             uVar11 >> 2 & 7 | (uVar11 & 0x1f) << 3 | uVar11 >> 1 & 0x300 |
             (uVar11 >> 5 & 0x3f) << 10 | 0xff000000;
      }
      uStack_50._0_4_ = (int)uStack_50 + iVar9;
      uStack_50._4_4_ = uStack_50._4_4_ + iVar10;
      uVar15 = uVar15 + 1;
    } while (uVar15 != uVar5);
  }
  return lVar8;
}



/* Entry: 1097bbdec; end: 1097bc0f3;  */

long FUN_1097bbdec(long *param_1,long param_2)

{
  long lVar1;
  long lVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  long lVar11;
  long lVar12;
  int iVar13;
  int iVar14;
  ushort uVar15;
  ushort uVar16;
  ushort uVar17;
  ushort uVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  uint uVar22;
  int *piVar23;
  int iVar24;
  uint uVar25;
  uint uVar26;
  uint uVar27;
  uint uVar28;
  ulong uVar29;
  uint uVar30;
  int iVar31;
  int *piVar32;
  uint6 uVar33;
  undefined8 uStack_60;
  undefined4 uStack_58;
  
  lVar11 = *param_1;
  lVar12 = param_1[1];
  uVar9 = *(uint *)(param_1 + 3);
  *(int *)((long)param_1 + 0x14) = *(int *)((long)param_1 + 0x14) + 1;
  uStack_60 = CONCAT44((int)((ulong)param_1[2] >> 0x20) << 0x10,(int)param_1[2] << 0x10) |
              0x800000008000;
  uStack_58 = 0x10000;
  piVar32 = *(int **)(lVar11 + 0x38);
  piVar23 = piVar32;
  FUN_1097bf628(piVar32,&uStack_60);
  if (((int)piVar23 != 0) && (0 < (int)uVar9)) {
    uVar29 = 0;
    iVar13 = *piVar32;
    iVar14 = piVar32[3];
    do {
      uVar8 = *(uint *)(lVar11 + 0xa0);
      uVar10 = *(uint *)(lVar11 + 0xa4);
      if ((param_2 == 0) || (*(int *)(param_2 + uVar29 * 4) != 0)) {
        iVar3 = (int)((int)uStack_60 - 0x8000U) >> 0x10;
        uVar30 = uVar8 + iVar3;
        iVar31 = -uVar30;
        do {
          uVar30 = uVar30 - uVar8;
          iVar31 = iVar31 + uVar8;
        } while ((int)uVar8 <= (int)uVar30);
        iVar4 = (int)(uStack_60._4_4_ - 0x8000U) >> 0x10;
        uVar22 = uVar10 + iVar4;
        iVar24 = -uVar22;
        do {
          uVar22 = uVar22 - uVar10;
          iVar24 = iVar24 + uVar10;
        } while ((int)uVar10 <= (int)uVar22);
        uVar27 = uVar8 + iVar3;
        uVar25 = uVar27 + 1;
        uVar27 = ~uVar27;
        do {
          uVar25 = uVar25 - uVar8;
          uVar27 = uVar27 + uVar8;
        } while ((int)uVar8 <= (int)uVar25);
        uVar28 = uVar10 + iVar4;
        uVar26 = uVar28 + 1;
        uVar28 = ~uVar28;
        do {
          uVar26 = uVar26 - uVar10;
          uVar28 = uVar28 + uVar10;
        } while ((int)uVar10 <= (int)uVar26);
        uVar7 = uVar10;
        if (uVar10 < 2) {
          uVar7 = 1;
        }
        uVar5 = uVar26 & ((int)uVar26 >> 0x1f ^ 0xffffffffU);
        uVar20 = 0;
        if (uVar7 != 0) {
          uVar20 = ((uVar5 - (uVar5 != uVar26)) + uVar28) / uVar7;
        }
        if (uVar5 != uVar26) {
          uVar20 = uVar20 + 1;
        }
        uVar28 = uVar25 & ((int)uVar25 >> 0x1f ^ 0xffffffffU);
        uVar5 = uVar8;
        if (uVar8 < 2) {
          uVar5 = 1;
        }
        uVar6 = uVar22 & ((int)uVar22 >> 0x1f ^ 0xffffffffU);
        uVar21 = 0;
        if (uVar5 != 0) {
          uVar21 = ((uVar28 - (uVar28 != uVar25)) + uVar27) / uVar5;
        }
        if (uVar28 != uVar25) {
          uVar21 = uVar21 + 1;
        }
        uVar27 = uVar30 & ((int)uVar30 >> 0x1f ^ 0xffffffffU);
        uVar28 = 0;
        if (uVar7 != 0) {
          uVar28 = ((uVar6 - (uVar6 != uVar22)) + iVar24) / uVar7;
        }
        if (uVar6 != uVar22) {
          uVar28 = uVar28 + 1;
        }
        uVar6 = (int)uStack_60 - 0x8000U >> 9 & 0x7f;
        uVar19 = uStack_60._4_4_ - 0x8000U >> 9 & 0x7f;
        uVar7 = 0;
        if (uVar5 != 0) {
          uVar7 = ((uVar27 - (uVar27 != uVar30)) + iVar31) / uVar5;
        }
        if (uVar27 != uVar30) {
          uVar7 = uVar7 + 1;
        }
        uVar30 = uVar30 + uVar8 * uVar7;
        uVar25 = uVar25 + uVar8 * uVar21;
        lVar1 = *(long *)(lVar11 + 0xa8) +
                (long)(int)(*(int *)(lVar11 + 0xb8) * (uVar22 + uVar10 * uVar28)) * 4;
        uVar15 = *(ushort *)(lVar1 + (ulong)uVar30 * 2);
        lVar2 = *(long *)(lVar11 + 0xa8) +
                (long)(int)((uVar26 + uVar10 * uVar20) * *(int *)(lVar11 + 0xb8)) * 4;
        uVar16 = *(ushort *)(lVar1 + (ulong)uVar25 * 2);
        uVar17 = *(ushort *)(lVar2 + (ulong)uVar30 * 2);
        uVar18 = *(ushort *)(lVar2 + (ulong)uVar25 * 2);
        iVar31 = uVar6 * 0x200;
        uVar33 = CONCAT15((char)(((uint)uVar18 << 5) >> 8),
                          (uint5)((byte)(((uint)uVar17 << 5) >> 8) & 0xfc) << 8) & 0xfcffffffffff;
        iVar24 = uVar6 * uVar19;
        iVar3 = iVar24 * 4;
        iVar4 = iVar31 + iVar24 * -4;
        iVar24 = uVar19 * 0x200 + iVar24 * -4;
        iVar31 = (iVar3 - (iVar31 + uVar19 * 0x200)) + 0x10000;
        *(uint *)(lVar12 + uVar29 * 4) =
             (((uint)uVar15 << 3 | (uint)(uVar15 >> 0xb) << 0x13) >> 0x10) * iVar31 +
             (((uint)uVar16 << 3 | (uint)(uVar16 >> 0xb) << 0x13) >> 0x10) * iVar4 +
             (((uint)uVar17 << 3 | (uint)(uVar17 >> 0xb) << 0x13) >> 0x10) * iVar24 +
             (((uint)uVar18 << 3 | (uint)(uVar18 >> 0xb) << 0x13) >> 0x10) * iVar3 & 0xff0000 |
             ((uint)((byte)(((uint)uVar16 << 5) >> 8) & 0xfc | (byte)(uVar16 >> 9) & 3) * 0x100 *
              iVar4 + (uint)((byte)(((uint)uVar15 << 5) >> 8) & 0xfc | (byte)(uVar15 >> 9) & 3) *
                      0x100 * iVar31 +
              (uint)(byte)((byte)(uVar33 >> 8) | (byte)(uVar17 >> 9) & 3) * 0x100 * iVar24 +
              (uint)(ushort)(((uint6)(byte)((byte)(uVar33 >> 0x28) | (byte)(uVar18 >> 9) & 3) <<
                             0x28) >> 0x20) * iVar3 & 0xff000000 |
             ((uint)uVar15 << 3 & 0xf8 | uVar15 >> 2 & 7) * iVar31 +
             ((uint)uVar16 << 3 & 0xf8 | uVar16 >> 2 & 7) * iVar4 +
             ((uint)uVar17 << 3 & 0xf8 | uVar17 >> 2 & 7) * iVar24 +
             ((uint)uVar18 << 3 & 0xf8 | uVar18 >> 2 & 7) * iVar3) >> 0x10 | 0xff000000;
      }
      uStack_60._0_4_ = (int)uStack_60 + iVar13;
      uStack_60._4_4_ = uStack_60._4_4_ + iVar14;
      uVar29 = uVar29 + 1;
    } while (uVar29 != uVar9);
  }
  return lVar12;
}



/* Entry: 1097bc0f4; end: 1097bc497;  */

long FUN_1097bc0f4(long *param_1,long param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  long lVar13;
  long lVar14;
  int iVar15;
  int iVar16;
  uint uVar17;
  uint uVar18;
  ushort uVar19;
  short sVar20;
  short sVar21;
  uint uVar22;
  uint uVar23;
  uint uVar24;
  int *piVar25;
  int iVar26;
  uint uVar27;
  ulong uVar28;
  int iVar29;
  uint uVar30;
  uint *puVar31;
  int iVar32;
  int iVar33;
  int iVar34;
  int *piVar35;
  uint uVar36;
  int iVar37;
  uint *puVar38;
  int iVar39;
  int iVar40;
  uint *puVar41;
  undefined8 uVar42;
  undefined8 uStack_70;
  undefined4 uStack_68;
  
  lVar13 = *param_1;
  lVar14 = param_1[1];
  uVar11 = *(uint *)(param_1 + 3);
  *(int *)((long)param_1 + 0x14) = *(int *)((long)param_1 + 0x14) + 1;
  puVar38 = *(uint **)(lVar13 + 0x48);
  uVar10 = *puVar38;
  uVar12 = puVar38[1];
  sVar20 = *(short *)((long)puVar38 + 10);
  sVar21 = *(short *)((long)puVar38 + 0xe);
  uStack_70 = CONCAT44((int)((ulong)param_1[2] >> 0x20) << 0x10,(int)param_1[2] << 0x10) |
              0x800000008000;
  uStack_68 = 0x10000;
  piVar35 = *(int **)(lVar13 + 0x38);
  piVar25 = piVar35;
  FUN_1097bf628(piVar35,&uStack_70);
  if (((int)piVar25 != 0) && (0 < (int)uVar11)) {
    uVar28 = 0;
    iVar2 = (int)uVar10 >> 0x10;
    iVar3 = (int)uVar12 >> 0x10;
    uVar22 = 0x10 - (int)sVar20;
    iVar4 = (1 << (ulong)(uVar22 & 0x1f)) >> 1;
    uVar23 = 0x10 - (int)sVar21;
    iVar15 = *piVar35;
    iVar16 = piVar35[3];
    iVar5 = (1 << (ulong)(uVar23 & 0x1f)) >> 1;
    do {
      if ((param_2 == 0) || (*(int *)(param_2 + uVar28 * 4) != 0)) {
        if (iVar3 < 1) {
          uVar27 = 0;
          uVar30 = 0;
          uVar42 = 0;
        }
        else {
          iVar37 = 0;
          iVar34 = 0;
          uVar30 = (uint)uStack_70 & -1 << (ulong)(uVar22 & 0x1f);
          uVar27 = uStack_70._4_4_ & -1 << (ulong)(uVar23 & 0x1f);
          iVar6 = (int)(uVar30 + iVar4 + ((int)(0xfffe - (uVar10 & 0xffff0000)) >> 1)) >> 0x10;
          iVar40 = (int)(uVar27 + iVar5 + ((int)(0xfffe - (uVar12 & 0xffff0000)) >> 1)) >> 0x10;
          iVar1 = iVar3 + iVar40;
          iVar32 = -iVar40;
          uVar42 = 0;
          puVar41 = puVar38 + (long)(iVar2 << (ulong)((int)sVar20 & 0x1f)) +
                              (ulong)(((uVar27 + iVar5 & 0xffff) >> (ulong)(uVar23 & 0x1f)) * iVar3)
                              + 4;
          do {
            puVar31 = puVar38 + (long)(int)(((uVar30 + iVar4 & 0xffff) >> (ulong)(uVar22 & 0x1f)) *
                                           iVar2) + 4;
            iVar39 = iVar6;
            iVar26 = -iVar6;
            if (*puVar41 != 0 && 0 < iVar2) {
              do {
                if (*puVar31 != 0) {
                  uVar17 = *(uint *)(lVar13 + 0xa0);
                  uVar27 = uVar17 + iVar39;
                  iVar29 = iVar26 - uVar17;
                  do {
                    uVar27 = uVar27 - uVar17;
                    iVar29 = iVar29 + uVar17;
                  } while ((int)uVar17 <= (int)uVar27);
                  uVar18 = *(uint *)(lVar13 + 0xa4);
                  uVar36 = iVar40 + uVar18;
                  iVar33 = iVar32 - uVar18;
                  do {
                    uVar36 = uVar36 - uVar18;
                    iVar33 = iVar33 + uVar18;
                  } while ((int)uVar18 <= (int)uVar36);
                  uVar7 = uVar36 & ((int)uVar36 >> 0x1f ^ 0xffffffffU);
                  uVar9 = uVar18;
                  if (uVar18 < 2) {
                    uVar9 = 1;
                  }
                  uVar8 = uVar27 & ((int)uVar27 >> 0x1f ^ 0xffffffffU);
                  uVar24 = 0;
                  if (uVar9 != 0) {
                    uVar24 = ((uVar7 - (uVar7 != uVar36)) + iVar33) / uVar9;
                  }
                  if (uVar7 != uVar36) {
                    uVar24 = uVar24 + 1;
                  }
                  uVar7 = uVar17;
                  if (uVar17 < 2) {
                    uVar7 = 1;
                  }
                  uVar9 = 0;
                  if (uVar7 != 0) {
                    uVar9 = ((uVar8 - (uVar8 != uVar27)) + iVar29) / uVar7;
                  }
                  if (uVar8 != uVar27) {
                    uVar9 = uVar9 + 1;
                  }
                  uVar19 = *(ushort *)
                            (*(long *)(lVar13 + 0xa8) +
                             (long)(int)((uVar36 + uVar18 * uVar24) * *(int *)(lVar13 + 0xb8)) * 4 +
                            (ulong)(uVar27 + uVar17 * uVar9) * 2);
                  iVar29 = (int)((ulong)((long)(int)*puVar31 * (long)(int)*puVar41 + 0x8000) >> 0x10
                                );
                  iVar37 = iVar37 + (((uVar19 & 0x7e0) << 5 | uVar19 >> 1 & 0x3ff) >> 8) * iVar29;
                  iVar34 = iVar34 + ((uint)uVar19 << 3 & 0xf8 | uVar19 >> 2 & 7) * iVar29;
                  uVar42 = CONCAT44((int)((ulong)uVar42 >> 0x20) + iVar29 * 0xff,
                                    (int)uVar42 +
                                    (((uint)uVar19 << 3 | (uint)(uVar19 >> 0xb) << 0x13) >> 0x10) *
                                    iVar29);
                }
                iVar39 = iVar39 + 1;
                puVar31 = puVar31 + 1;
                iVar26 = iVar26 + -1;
              } while (iVar39 < iVar2 + iVar6);
            }
            iVar40 = iVar40 + 1;
            iVar32 = iVar32 + -1;
            puVar41 = puVar41 + 1;
          } while (iVar40 < iVar1);
          uVar42 = CONCAT44((int)((ulong)uVar42 >> 0x20) + 0x8000 >> 0x10,
                            (int)uVar42 + 0x8000 >> 0x10);
          uVar30 = iVar37 + 0x8000 >> 0x10;
          uVar27 = iVar34 + 0x8000 >> 0x10;
        }
        uVar42 = NEON_smax(uVar42,0,4);
        uVar30 = uVar30 & ((int)uVar30 >> 0x1f ^ 0xffffffffU);
        if (0xfe < (int)uVar30) {
          uVar30 = 0xff;
        }
        uVar27 = uVar27 & ((int)uVar27 >> 0x1f ^ 0xffffffffU);
        if (0xfe < (int)uVar27) {
          uVar27 = 0xff;
        }
        uVar42 = NEON_smin(uVar42,0xff000000ff,4);
        uVar42 = NEON_ushl(uVar42,0x1800000010,4);
        *(uint *)(lVar14 + uVar28 * 4) =
             uVar27 | uVar30 << 8 | (uint)uVar42 | (uint)((ulong)uVar42 >> 0x20);
      }
      uStack_70._0_4_ = (uint)uStack_70 + iVar15;
      uStack_70._4_4_ = uStack_70._4_4_ + iVar16;
      uVar28 = uVar28 + 1;
    } while (uVar28 != uVar11);
  }
  return lVar14;
}



/* Entry: 1097bc498; end: 1097bc613;  */

long FUN_1097bc498(long *param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  long lVar6;
  long lVar7;
  uint *puVar8;
  uint *puVar9;
  long lVar10;
  
  lVar10 = param_1[8];
  lVar6 = *param_1;
  uVar5 = **(undefined4 **)(lVar6 + 0x38);
  uVar3 = *(uint *)(lVar10 + 0x20);
  uVar4 = *(undefined4 *)(lVar10 + 0x24);
  uVar2 = (int)uVar3 >> 0x10;
  uVar1 = uVar2 + 1;
  puVar9 = (uint *)(lVar10 + (ulong)(uVar2 & 1) * 0x10);
  puVar8 = (uint *)(lVar10 + (ulong)(uVar1 & 1) * 0x10);
  if (*puVar9 != uVar2) {
    func_0x0001097bc61c(*(undefined8 *)(lVar6 + 0xa8),*(undefined4 *)(lVar6 + 0xb8),puVar9,uVar2,
                        uVar4,uVar5,(int)param_1[3]);
  }
  if (*puVar8 != uVar1) {
    func_0x0001097bc61c(*(undefined8 *)(*param_1 + 0xa8),*(undefined4 *)(*param_1 + 0xb8),puVar8,
                        uVar1,uVar4,uVar5,(int)param_1[3]);
  }
  if ((int)param_1[3] < 1) {
    lVar6 = param_1[1];
  }
  else {
    lVar7 = 0;
    uVar1 = uVar3 >> 8 & 0xfe;
    lVar6 = param_1[1];
    puVar8 = (uint *)(*(long *)(puVar8 + 2) + 4);
    puVar9 = (uint *)(*(long *)(puVar9 + 2) + 4);
    do {
      uVar2 = puVar9[-1];
      uVar3 = *puVar9;
      *(uint *)(lVar6 + lVar7 * 4) =
           (uVar2 & 0xffff0000) + uVar1 * 0x100 * ((puVar8[-1] >> 0x10) - (uVar2 >> 0x10)) &
           0xff000000 |
           ((*puVar8 >> 0x10) - (uVar3 >> 0x10)) * uVar1 + (uVar3 >> 0x10) * 0x100 & 0xff0000 |
           uVar2 + (((puVar8[-1] & 0xffff) - (uVar2 & 0xffff)) * uVar1 >> 8) & 0xff00 |
           ((*puVar8 & 0xffff) - (uVar3 & 0xffff)) * uVar1 + uVar3 * 0x100 >> 0x10 & 0xff;
      lVar7 = lVar7 + 1;
      puVar8 = puVar8 + 2;
      puVar9 = puVar9 + 2;
    } while (lVar7 < (int)param_1[3]);
  }
  *(int *)(lVar10 + 0x20) = *(int *)(lVar10 + 0x20) + *(int *)(*(long *)(*param_1 + 0x38) + 0x10);
  return lVar6;
}



/* Entry: 1097bc614; end: 1097bc693;  */

void FUN_1097bc614(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbe294. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__free_11034c310)(*(undefined8 *)(param_1 + 0x40));
  return;
}



/* Entry: 1097bc694; end: 1097bc6fb;  */

long FUN_1097bc694(void)

{
  long *plVar1;
  long *plVar2;
  
  plVar1 = (long *)0x1;
  _calloc(1,0x810);
  if (plVar1 != (long *)0x0) {
    plVar1[2] = (long)&UNK_110b10c60;
    plVar2 = plVar1;
    do {
      *plVar2 = (long)plVar1;
      plVar2 = (long *)plVar2[1];
    } while (plVar2 != (long *)0x0);
  }
  func_0x0001097a83d8(plVar1);
  func_0x00010979bfa0(plVar1);
  plVar1[3] = (long)&UNK_110b10cb0;
  return (long)plVar1;
}



/* Entry: 1097bc6fc; end: 1097bcaaf;  */

void FUN_1097bc6fc(code *param_1,uint *param_2)

{
  ulong uVar1;
  undefined *puVar2;
  undefined *puVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  bool bVar12;
  code *pcVar13;
  code *pcVar14;
  undefined1 *puVar15;
  undefined1 *puVar16;
  undefined1 *puVar17;
  code *pcVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  byte bVar21;
  int iVar22;
  ulong uVar23;
  uint uVar24;
  long lVar25;
  long lVar26;
  long lVar27;
  long lVar28;
  undefined4 uVar29;
  byte bVar30;
  ulong uVar31;
  uint uVar32;
  ulong uVar33;
  ulong uVar34;
  double dVar35;
  undefined1 auStack_6178 [40];
  code *pcStack_6150;
  code *pcStack_6148;
  code *pcStack_6140;
  undefined1 auStack_6120 [40];
  code *pcStack_60f8;
  code *pcStack_60e8;
  undefined1 auStack_60c8 [40];
  code *pcStack_60a0;
  code *pcStack_6090;
  undefined1 auStack_6070 [24576];
  long lStack_70;
  
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar31 = (ulong)*param_2;
  lVar25 = *(long *)(param_2 + 2);
  lVar27 = *(long *)(param_2 + 4);
  lVar26 = *(long *)(param_2 + 6);
  uVar24 = param_2[0xe];
  if (((*(byte *)(lVar25 + 0x88) >> 6 & 1) == 0) ||
     ((((lVar27 != 0 && ((*(byte *)(lVar27 + 0x88) >> 6 & 1) == 0)) ||
       ((*(byte *)(lVar26 + 0x88) >> 6 & 1) == 0)) ||
      (((1L << (uVar31 & 0x3f) & 0x869ff000f000dfffU) == 0 || (*(int *)(lVar26 + 0xbc) != 0)))))) {
    uVar29 = 0;
    bVar30 = 2;
    bVar12 = true;
    iVar22 = 0x10;
  }
  else {
    bVar12 = false;
    uVar29 = 1;
    iVar22 = 4;
    bVar30 = 1;
  }
  pcVar18 = param_1;
  if (0 < (int)uVar24) {
    uVar11 = iVar22 * 3;
    uVar10 = 0;
    if (uVar11 != 0) {
      uVar10 = 0x7fffffff / uVar11;
    }
    if (uVar24 < uVar10) {
      uVar10 = param_2[8];
      uVar4 = param_2[9];
      uVar5 = param_2[10];
      uVar6 = param_2[0xb];
      uVar7 = param_2[0xc];
      uVar8 = param_2[0xd];
      uVar32 = param_2[0xf];
      uVar9 = iVar22 * uVar24;
      uVar34 = (ulong)uVar9;
      if (uVar9 >> 1 < 0xff9) {
        pcVar13 = (code *)auStack_6070;
LAB_1097bc85c:
        _bzero();
        uVar33 = (ulong)(pcVar13 + 0xf) & 0xfffffffffffffff0;
        uVar23 = uVar33 + uVar34 + 0xf & 0xfffffffffffffff0;
        uVar1 = uVar23 + uVar9 + 0xf;
        if (bVar12) {
          _bzero(uVar33,uVar34);
          _bzero(uVar23,uVar34);
          _bzero(uVar1 & 0xfffffffffffffff0,uVar34);
        }
        bVar21 = (&UNK_10dffc978)[uVar31 * 2];
        FUN_1097be89c(*(undefined8 *)param_1,auStack_60c8,lVar25,uVar10,uVar4,uVar24,uVar32,uVar33,
                      bVar30 | bVar21 | 0x20,param_2[0x10]);
        lVar25 = 0;
        if (((bVar21 ^ 0xff) & 0x18) != 0) {
          lVar25 = lVar27;
        }
        bVar21 = 0x10;
        if (lVar25 == 0) {
          bVar12 = false;
        }
        else {
          bVar12 = *(int *)(lVar27 + 0x68) != 0;
          bVar21 = 0;
          if (!bVar12) {
            bVar21 = 0x10;
          }
        }
        func_0x0001097be8a0(*(undefined8 *)param_1,auStack_6120,lVar25,uVar5,uVar6,uVar24,uVar32,
                            uVar23,bVar30 | bVar21 | 0x20,param_2[0x11]);
        func_0x0001097be8a0(*(undefined8 *)param_1,auStack_6178,lVar26,uVar7,uVar8,uVar24,uVar32,
                            uVar1 & 0xfffffffffffffff0,bVar30 | (&UNK_10dffc979)[uVar31 * 2] | 0x40,
                            param_2[0x12]);
        pcVar14 = *(code **)param_1;
        FUN_1097be7f8(pcVar14,uVar31,bVar12,uVar29);
        pcVar18 = pcVar14;
        if (0 < (int)uVar32) {
          do {
            puVar15 = auStack_6120;
            (*pcStack_60f8)(puVar15,0);
            puVar16 = auStack_60c8;
            (*pcStack_60a0)(puVar16,puVar15);
            puVar17 = auStack_6178;
            (*pcStack_6150)(puVar17,0);
            (*pcVar14)(*(undefined8 *)param_1,uVar31,puVar17,puVar16,puVar15,uVar24);
            pcVar18 = (code *)auStack_6178;
            (*pcStack_6148)();
            uVar32 = uVar32 - 1;
          } while (uVar32 != 0);
        }
        if (pcStack_6090 != (code *)0x0) {
          pcVar18 = (code *)auStack_60c8;
          (*pcStack_6090)();
        }
        if (pcStack_60e8 != (code *)0x0) {
          pcVar18 = (code *)auStack_6120;
          (*pcStack_60e8)();
        }
        if (pcStack_6140 != (code *)0x0) {
          pcVar18 = (code *)auStack_6178;
          (*pcStack_6140)();
        }
        if (pcVar13 != (code *)auStack_6070) {
          _free();
          pcVar18 = pcVar13;
        }
      }
      else if (uVar11 * uVar24 < 0x7fffffd3) {
        pcVar13 = (code *)(ulong)(uVar11 * uVar24 + 0x2d);
        _malloc();
        pcVar18 = pcVar13;
        if (pcVar13 != (code *)0x0) goto LAB_1097bc85c;
      }
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  iVar22 = **(int **)pcVar18;
  if (1 < iVar22) {
    if (iVar22 == 2) {
      uVar20 = 0x1097ab4e8;
      uVar24 = *(uint *)(pcVar18 + 0x20);
      uVar19 = 0x1097ab4f8;
    }
    else {
      if (iVar22 != 3) {
        if (iVar22 == 4) {
          if (9 < iRam000000011382add8) {
            return;
          }
          uVar19 = *(undefined8 *)PTR____stderrp_11034bdc8;
          goto LAB_1097bcbe0;
        }
LAB_1097bcbbc:
        if (9 < iRam000000011382add8) {
          return;
        }
        uVar19 = *(undefined8 *)PTR____stderrp_11034bdc8;
LAB_1097bcbe0:
        _fprintf(uVar19,&UNK_10f5808c0);
        iRam000000011382add8 = iRam000000011382add8 + 1;
        return;
      }
      uVar20 = 0x1097bf898;
      uVar24 = *(uint *)(pcVar18 + 0x20);
      uVar19 = 0x1097bf8a8;
    }
    if ((uVar24 & 1) != 0) {
      uVar19 = uVar20;
    }
LAB_1097bcb64:
    *(undefined8 *)(pcVar18 + 0x28) = uVar19;
    return;
  }
  if (iVar22 == 0) {
    uVar24 = *(uint *)(pcVar18 + 0x20);
    if ((uVar24 >> 5 & 1) == 0) {
      pcVar13 = (code *)0x1097c2bf0;
      if (((uVar24 ^ 0xffffffff) & 0x18) != 0) {
        pcVar13 = FUN_1097978c8;
      }
      bVar12 = (uVar24 & 1) != 0;
      pcVar14 = FUN_109797a28;
      if (bVar12) {
        pcVar14 = pcVar13;
      }
      pcVar13 = (code *)0x109797afc;
      if (bVar12) {
        pcVar13 = FUN_1097979a4;
      }
      *(code **)(pcVar18 + 0x28) = pcVar14;
      *(code **)(pcVar18 + 0x30) = pcVar13;
      return;
    }
    uVar10 = (*(int **)pcVar18)[0x22];
    puVar2 = &UNK_110b0eb20;
    if (((uVar10 ^ 0xffffffff) & 0x21002) != 0) {
      puVar2 = &UNK_110b0eb38;
    }
    puVar3 = &UNK_110b0eb08;
    if (((uVar10 ^ 0xffffffff) & 0x1f) != 0) {
      puVar3 = puVar2;
    }
    lVar25 = 0x10;
    if ((uVar24 & 1) != 0) {
      lVar25 = 8;
    }
    uVar19 = *(undefined8 *)(puVar3 + lVar25);
    goto LAB_1097bcb64;
  }
  if (iVar22 != 1) goto LAB_1097bcbbc;
  lVar25 = *(long *)pcVar18;
  lVar27 = *(long *)(lVar25 + 0x38);
  if (lVar27 == 0) {
    lVar26 = 0;
    dVar35 = 65536.0;
    lVar28 = 0x10000;
LAB_1097bead8:
    lVar27 = (long)*(int *)(lVar25 + 0xa8) - (long)*(int *)(lVar25 + 0xa0);
    lVar25 = (long)*(int *)(lVar25 + 0xac) - (long)*(int *)(lVar25 + 0xa4);
    uVar31 = lVar27 * lVar27 + lVar25 * lVar25;
    if ((uVar31 != 0) &&
       (ABS(((double)*(int *)(pcVar18 + 0x1c) * 65536.0 * 65536.0 *
            (double)(lVar26 * lVar27 + lVar28 * lVar25)) / (dVar35 * (double)uVar31)) < 1.0)) {
      if (((byte)pcVar18[0x20] & 1) == 0) {
        pcVar13 = (code *)0x1097bd7fc;
        uVar19 = 0x1097bd8d4;
        uVar20 = 0x10;
      }
      else {
        pcVar13 = FUN_1097bd71c;
        uVar19 = 0x1097bd8a0;
        uVar20 = 4;
      }
      FUN_1097bec6c(pcVar18,0,uVar20,pcVar13,uVar19);
      pcVar13 = (code *)0x1097c2bf0;
      goto LAB_1097beba4;
    }
  }
  else if (((*(int *)(lVar27 + 0x18) == 0) && (*(int *)(lVar27 + 0x1c) == 0)) &&
          (*(int *)(lVar27 + 0x20) != 0)) {
    lVar26 = (long)*(int *)(lVar27 + 4);
    lVar28 = (long)*(int *)(lVar27 + 0x10);
    dVar35 = (double)*(int *)(lVar27 + 0x20);
    goto LAB_1097bead8;
  }
  if (((byte)pcVar18[0x20] & 1) == 0) {
    pcVar13 = (code *)0x1097bebcc;
  }
  else {
    pcVar13 = FUN_1097bebb4;
  }
LAB_1097beba4:
  *(code **)(pcVar18 + 0x28) = pcVar13;
  return;
}



/* Entry: 1097bcab0; end: 1097bcc5b;  */

void FUN_1097bcab0(long *param_1)

{
  code *pcVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  uint uVar5;
  bool bVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  code *pcVar9;
  uint uVar10;
  long lVar11;
  ulong uVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  double dVar16;
  
  iVar4 = *(int *)*param_1;
  if (1 < iVar4) {
    if (iVar4 == 2) {
      lVar14 = 0x1097ab4e8;
      uVar10 = *(uint *)(param_1 + 4);
      lVar11 = 0x1097ab4f8;
    }
    else {
      if (iVar4 != 3) {
        if (iVar4 == 4) {
          if (9 < iRam000000011382add8) {
            return;
          }
          uVar7 = *(undefined8 *)PTR____stderrp_11034bdc8;
          goto LAB_1097bcbe0;
        }
LAB_1097bcbbc:
        if (9 < iRam000000011382add8) {
          return;
        }
        uVar7 = *(undefined8 *)PTR____stderrp_11034bdc8;
LAB_1097bcbe0:
        _fprintf(uVar7,&UNK_10f5808c0);
        iRam000000011382add8 = iRam000000011382add8 + 1;
        return;
      }
      lVar14 = 0x1097bf898;
      uVar10 = *(uint *)(param_1 + 4);
      lVar11 = 0x1097bf8a8;
    }
    if ((uVar10 & 1) != 0) {
      lVar11 = lVar14;
    }
LAB_1097bcb64:
    param_1[5] = lVar11;
    return;
  }
  if (iVar4 == 0) {
    uVar10 = *(uint *)(param_1 + 4);
    if ((uVar10 >> 5 & 1) == 0) {
      pcVar9 = (code *)0x1097c2bf0;
      if (((uVar10 ^ 0xffffffff) & 0x18) != 0) {
        pcVar9 = FUN_1097978c8;
      }
      bVar6 = (uVar10 & 1) != 0;
      pcVar1 = FUN_109797a28;
      if (bVar6) {
        pcVar1 = pcVar9;
      }
      pcVar9 = (code *)0x109797afc;
      if (bVar6) {
        pcVar9 = FUN_1097979a4;
      }
      param_1[5] = (long)pcVar1;
      param_1[6] = (long)pcVar9;
      return;
    }
    uVar5 = ((int *)*param_1)[0x22];
    puVar2 = &UNK_110b0eb20;
    if (((uVar5 ^ 0xffffffff) & 0x21002) != 0) {
      puVar2 = &UNK_110b0eb38;
    }
    puVar3 = &UNK_110b0eb08;
    if (((uVar5 ^ 0xffffffff) & 0x1f) != 0) {
      puVar3 = puVar2;
    }
    lVar11 = 0x10;
    if ((uVar10 & 1) != 0) {
      lVar11 = 8;
    }
    lVar11 = *(long *)(puVar3 + lVar11);
    goto LAB_1097bcb64;
  }
  if (iVar4 != 1) goto LAB_1097bcbbc;
  lVar11 = *param_1;
  lVar14 = *(long *)(lVar11 + 0x38);
  if (lVar14 == 0) {
    lVar13 = 0;
    dVar16 = 65536.0;
    lVar15 = 0x10000;
LAB_1097bead8:
    lVar14 = (long)*(int *)(lVar11 + 0xa8) - (long)*(int *)(lVar11 + 0xa0);
    lVar11 = (long)*(int *)(lVar11 + 0xac) - (long)*(int *)(lVar11 + 0xa4);
    uVar12 = lVar14 * lVar14 + lVar11 * lVar11;
    if ((uVar12 != 0) &&
       (ABS(((double)*(int *)((long)param_1 + 0x1c) * 65536.0 * 65536.0 *
            (double)(lVar13 * lVar14 + lVar15 * lVar11)) / (dVar16 * (double)uVar12)) < 1.0)) {
      if ((*(byte *)(param_1 + 4) & 1) == 0) {
        pcVar9 = (code *)0x1097bd7fc;
        uVar7 = 0x1097bd8d4;
        uVar8 = 0x10;
      }
      else {
        pcVar9 = FUN_1097bd71c;
        uVar7 = 0x1097bd8a0;
        uVar8 = 4;
      }
      FUN_1097bec6c(param_1,0,uVar8,pcVar9,uVar7);
      pcVar9 = (code *)0x1097c2bf0;
      goto LAB_1097beba4;
    }
  }
  else if (((*(int *)(lVar14 + 0x18) == 0) && (*(int *)(lVar14 + 0x1c) == 0)) &&
          (*(int *)(lVar14 + 0x20) != 0)) {
    lVar13 = (long)*(int *)(lVar14 + 4);
    lVar15 = (long)*(int *)(lVar14 + 0x10);
    dVar16 = (double)*(int *)(lVar14 + 0x20);
    goto LAB_1097bead8;
  }
  if ((*(byte *)(param_1 + 4) & 1) == 0) {
    pcVar9 = (code *)0x1097bebcc;
  }
  else {
    pcVar9 = FUN_1097bebb4;
  }
LAB_1097beba4:
  param_1[5] = (long)pcVar9;
  return;
}



/* Entry: 1097bcc5c; end: 1097bccdf;  */

void FUN_1097bcc5c(undefined8 *param_1)

{
  long lVar1;
  long *plVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined8 uVar5;
  long lVar6;
  
  lVar6 = 0x20;
  do {
    uVar4 = *(ulong *)((long)param_1 + lVar6);
    if (1 < uVar4) {
      lVar1 = *(long *)(uVar4 + 0x20);
      plVar2 = *(long **)(uVar4 + 0x28);
      uVar5 = *(undefined8 *)(uVar4 + 0x18);
      *plVar2 = lVar1;
      *(long **)(lVar1 + 8) = plVar2;
      uVar3 = uVar5;
      FUN_1097bdccc();
      if ((int)uVar3 != 0) {
        _free(uVar5);
      }
      _free(uVar4);
    }
    *(undefined8 *)((long)param_1 + lVar6) = 0;
    lVar6 = lVar6 + 8;
  } while (lVar6 != 0x40020);
  *param_1 = 0;
  return;
}



/* Entry: 1097bcce0; end: 1097bcd87;  */

void FUN_1097bcce0(int *param_1)

{
  long *plVar1;
  long lVar2;
  int iVar3;
  long *plVar4;
  long lVar5;
  
  iVar3 = param_1[2];
  param_1[2] = iVar3 + -1;
  if (iVar3 + -1 != 0) {
    return;
  }
  iVar3 = *param_1;
  if (0x4000 < param_1[1] + iVar3) {
    if (param_1[1] < 0x4001) goto LAB_1097bcd2c;
    FUN_1097bcc5c(param_1);
    while( true ) {
      iVar3 = *param_1;
LAB_1097bcd2c:
      if (iVar3 < 0x2001) break;
      plVar4 = *(long **)(param_1 + 6);
      FUN_1097bcd88(param_1,plVar4 + -4);
      lVar2 = *plVar4;
      plVar1 = (long *)plVar4[1];
      lVar5 = plVar4[-1];
      *plVar1 = lVar2;
      *(long **)(lVar2 + 8) = plVar1;
      lVar2 = lVar5;
      FUN_1097bdccc();
      if ((int)lVar2 != 0) {
        _free(lVar5);
      }
      _free(plVar4 + -4);
    }
  }
  return;
}



/* Entry: 1097bcd88; end: 1097bce8f;  */

void FUN_1097bcd88(undefined8 *param_1,long *param_2)

{
  ulong uVar1;
  uint uVar2;
  long lVar3;
  long *plVar4;
  uint uVar5;
  int iVar6;
  
  uVar1 = ~(param_2[1] + *param_2) + (param_2[1] + *param_2) * 0x8000;
  uVar1 = (uVar1 ^ uVar1 >> 0xc) * 5;
  lVar3 = (uVar1 ^ uVar1 >> 4) * 0x809;
  uVar2 = (uint)((ulong)lVar3 >> 0x10) ^ (uint)lVar3;
  do {
    uVar5 = uVar2;
    uVar2 = uVar5 + 1;
  } while ((long *)param_1[(ulong)(uVar5 & 0x7fff) + 4] != param_2);
  plVar4 = param_1 + (ulong)(uVar5 & 0x7fff) + 4;
  *plVar4 = 1;
  iVar6 = (int)((ulong)*param_1 >> 0x20) + 1;
  *param_1 = CONCAT44(iVar6,(int)*param_1 + -1);
  if (param_1[(ulong)(uVar5 + 1 & 0x7fff) + 4] == 0) {
    do {
      uVar5 = uVar5 - 1;
      *plVar4 = 0;
      iVar6 = iVar6 + -1;
      plVar4 = param_1 + (ulong)(uVar5 & 0x7fff) + 4;
    } while (*plVar4 == 1);
    *(int *)((long)param_1 + 4) = iVar6;
    return;
  }
  return;
}



/* Entry: 1097bce90; end: 1097bd073;  */

long * FUN_1097bce90(int *param_1,long param_2,long param_3,undefined4 param_4,undefined4 param_5,
                    int *param_6)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  long *plVar4;
  ulong uVar5;
  undefined *puVar6;
  long lVar7;
  long *plVar8;
  uint uVar9;
  long *plVar10;
  
  if (param_1[2] < 1) {
    puVar6 = &UNK_10f57ffd8;
  }
  else {
    if (*param_6 == 0) {
      if (0x7fff < *param_1) {
        return (long *)0x0;
      }
      iVar2 = param_6[0x28];
      iVar3 = param_6[0x29];
      plVar4 = (long *)0x30;
      _malloc();
      if (plVar4 != (long *)0x0) {
        *plVar4 = param_2;
        plVar4[1] = param_3;
        *(undefined4 *)(plVar4 + 2) = param_4;
        *(undefined4 *)((long)plVar4 + 0x14) = param_5;
        uVar5 = (ulong)(uint)param_6[0x24];
        FUN_109797e2c(uVar5,iVar2,iVar3,0,0xffffffff,1);
        plVar4[3] = uVar5;
        if (uVar5 == 0) {
          _free(plVar4);
          return (long *)0x0;
        }
        FUN_1097c3110(1,param_6,0,uVar5,0,0,0,0,0,iVar2,iVar3);
        if (((*(uint *)(uVar5 + 0x90) & 0xf000) != 0 && (*(uint *)(uVar5 + 0x90) & 0xfff) != 0) &&
           (*(int *)(uVar5 + 0x68) != 1)) {
          *(undefined4 *)(uVar5 + 0x68) = 1;
          *(undefined4 *)(uVar5 + 0x30) = 1;
        }
        plVar10 = (long *)(param_1 + 4);
        lVar7 = *plVar10;
        plVar8 = plVar4 + 4;
        *plVar8 = lVar7;
        plVar4[5] = (long)plVar10;
        *(long **)(lVar7 + 8) = plVar8;
        *plVar10 = (long)plVar8;
        FUN_1097bde20(uVar5);
        uVar5 = ~(plVar4[1] + *plVar4) + (plVar4[1] + *plVar4) * 0x8000;
        uVar5 = (uVar5 ^ uVar5 >> 0xc) * 5;
        lVar7 = (uVar5 ^ uVar5 >> 4) * 0x809;
        uVar9 = (uint)((ulong)lVar7 >> 0x10) ^ (uint)lVar7;
        do {
          uVar1 = uVar9 & 0x7fff;
          uVar9 = uVar9 + 1;
        } while (1 < *(ulong *)(param_1 + (ulong)uVar1 * 2 + 8));
        if (*(ulong *)(param_1 + (ulong)uVar1 * 2 + 8) == 1) {
          param_1[1] = param_1[1] + -1;
        }
        *param_1 = *param_1 + 1;
        *(long **)(param_1 + (ulong)uVar1 * 2 + 8) = plVar4;
        return plVar4;
      }
      return (long *)0x0;
    }
    puVar6 = &UNK_10f580009;
  }
  FUN_1097c2c3c(&UNK_10f57ff6e,puVar6);
  return (long *)0x0;
}



/* Entry: 1097bd074; end: 1097bd0db;  */

void FUN_1097bd074(long param_1)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  lVar3 = param_1;
  func_0x0001097bce2c();
  if (lVar3 != 0) {
    func_0x0001097bcd88(param_1,lVar3);
    lVar1 = *(long *)(lVar3 + 0x20);
    plVar2 = *(long **)(lVar3 + 0x28);
    uVar5 = *(undefined8 *)(lVar3 + 0x18);
    *plVar2 = lVar1;
    *(long **)(lVar1 + 8) = plVar2;
    uVar4 = uVar5;
    FUN_1097bdccc();
    if ((int)uVar4 != 0) {
      _free(uVar5);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbe294. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__free_11034c310)(lVar3);
    return;
  }
  return;
}



/* Entry: 1097bd0dc; end: 1097bd143;  */

uint FUN_1097bd0dc(undefined8 param_1,uint param_2,long param_3)

{
  uint uVar1;
  uint uVar2;
  ulong uVar3;
  long *plVar4;
  
  uVar2 = 0x1011000;
  if (0 < (int)param_2) {
    uVar3 = (ulong)param_2;
    plVar4 = (long *)(param_3 + 8);
    uVar1 = uVar2;
    do {
      uVar2 = *(uint *)(*(long *)(*plVar4 + 0x18) + 0x90);
      if ((uVar2 & 0x3f0000) != 0x10000) {
        return 0x20028888;
      }
      if ((uVar2 >> 0xc & 0xf) << (ulong)(uVar2 >> 0x16 & 3) <=
          (uVar1 >> 0xc & 0xf) << (ulong)(uVar1 >> 0x16 & 3)) {
        uVar2 = uVar1;
      }
      uVar3 = uVar3 - 1;
      plVar4 = plVar4 + 2;
      uVar1 = uVar2;
    } while (uVar3 != 0);
  }
  return uVar2;
}



/* Entry: 1097bd144; end: 1097bd3f3;  */

void FUN_1097bd144(undefined4 param_1,long param_2,long param_3,int param_4,int param_5,int param_6,
                  int param_7,long param_8,uint param_9,undefined4 param_10,long param_11)

{
  undefined8 *puVar1;
  int iVar2;
  int iVar3;
  long *plVar4;
  ulong uVar5;
  int iVar6;
  long lVar7;
  int iVar8;
  int iVar9;
  long lVar10;
  long *plVar11;
  long *plVar12;
  undefined8 uVar13;
  int iVar14;
  undefined8 uVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  undefined8 uVar19;
  int iVar20;
  undefined4 auStack_100 [2];
  long lStack_f8;
  long lStack_f0;
  long lStack_e8;
  int iStack_e0;
  int iStack_dc;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined4 uStack_c0;
  int iStack_bc;
  undefined4 uStack_b8;
  undefined8 uStack_b0;
  code *pcStack_a8;
  long alStack_a0 [2];
  long *plStack_90;
  
  uStack_b0 = 0;
  pcStack_a8 = (code *)0x0;
  FUN_1097bde20(param_2);
  FUN_1097bde20(param_3);
  alStack_a0[0] = 0;
  alStack_a0[1] = 0;
  plStack_90 = (long *)&UNK_10dffca88;
  plVar4 = alStack_a0;
  FUN_1097c2c98(plVar4,param_2,0,param_3,param_4 - param_6,param_5 - param_7,0,0,0,
                *(undefined4 *)(param_3 + 0xa0),*(undefined4 *)(param_3 + 0xa4));
  if ((int)plVar4 != 0) {
    uStack_c0 = *(undefined4 *)(param_2 + 0x88);
    uStack_b8 = *(undefined4 *)(param_3 + 0x88);
    auStack_100[0] = param_1;
    lStack_f8 = param_2;
    lStack_e8 = param_3;
    if (0 < (int)param_9) {
      uVar5 = 0;
      iVar9 = 0;
      iVar8 = 0;
      plVar4 = (long *)(param_8 + 0x10);
      do {
        puVar1 = (undefined8 *)(param_11 + uVar5 * 0x10);
        lVar10 = puVar1[1];
        lVar7 = *(long *)(lVar10 + 0x18);
        uVar13 = *(undefined8 *)(lVar7 + 0xa0);
        lStack_f0 = lVar7;
        if (plStack_90 == (long *)0x0) {
          plVar12 = alStack_a0;
          iVar6 = 0;
LAB_1097bd298:
          iVar17 = ((int)*puVar1 + param_6) - (int)*(undefined8 *)(lVar10 + 0x10);
          iVar18 = ((int)((ulong)*puVar1 >> 0x20) + param_7) -
                   (int)((ulong)*(undefined8 *)(lVar10 + 0x10) >> 0x20);
          iVar6 = iVar6 + 1;
          do {
            uVar15 = NEON_smax(*plVar12,CONCAT44(iVar18,iVar17),4);
            uVar19 = NEON_smin(plVar12[1],
                               CONCAT44((int)((ulong)uVar13 >> 0x20) + iVar18,(int)uVar13 + iVar17),
                               4);
            iVar14 = (int)uVar15;
            iVar16 = (int)((ulong)uVar15 >> 0x20);
            iVar20 = (int)((ulong)uVar19 >> 0x20);
            if (iVar14 < (int)uVar19 && iVar16 < iVar20) {
              iVar2 = *(int *)(lVar7 + 0x88);
              iVar3 = *(int *)(lVar7 + 0x8c);
              if (iVar3 != iVar9 || iVar2 != iVar8) {
                if (lRam000000011386a1d8 == 0) {
                  FUN_1097bea00();
                }
                FUN_1097be5b0();
                iVar8 = iVar2;
                iVar9 = iVar3;
              }
              iStack_e0 = iVar14 + (param_4 - param_6);
              iStack_dc = iVar16 + (param_5 - param_7);
              uStack_d8 = CONCAT44((iVar16 - (param_7 + (int)((ulong)*puVar1 >> 0x20))) +
                                   (int)((ulong)*(undefined8 *)(lVar10 + 0x10) >> 0x20),
                                   (iVar14 - (param_6 + (int)*puVar1)) +
                                   (int)*(undefined8 *)(lVar10 + 0x10));
              uStack_c8 = CONCAT44(iVar20 - iVar16,(int)uVar19 - iVar14);
              uStack_d0 = uVar15;
              iStack_bc = iVar8;
              (*pcStack_a8)(uStack_b0,auStack_100);
            }
            plVar12 = plVar12 + 2;
            iVar6 = iVar6 + -1;
          } while (iVar6 != 0);
        }
        else if ((int)plStack_90[1] != 0) {
          plVar12 = plStack_90 + 2;
          iVar6 = (int)plStack_90[1] + -1;
          goto LAB_1097bd298;
        }
        plVar11 = (long *)(lVar10 + 0x20);
        lVar7 = *plVar11;
        plVar12 = *(long **)(lVar10 + 0x28);
        *plVar12 = lVar7;
        *(long **)(lVar7 + 8) = plVar12;
        lVar7 = *plVar4;
        *plVar11 = lVar7;
        *(long **)(lVar10 + 0x28) = plVar4;
        *(long **)(lVar7 + 8) = plVar11;
        *plVar4 = (long)plVar11;
        uVar5 = uVar5 + 1;
      } while (uVar5 != param_9);
    }
  }
  if ((plStack_90 != (long *)0x0) && (*plStack_90 != 0)) {
    _free();
  }
  return;
}



/* Entry: 1097bd3f4; end: 1097bd71b;  */

void FUN_1097bd3f4(undefined4 param_1,undefined8 param_2,undefined8 param_3,ulong param_4,
                  undefined4 param_5,undefined4 param_6,int param_7,int param_8,undefined4 param_9,
                  undefined4 param_10,undefined4 param_11,undefined4 param_12,long param_13,
                  uint param_14,undefined4 param_15,long param_16)

{
  long *plVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  long *plVar8;
  uint uVar9;
  uint uVar10;
  bool bVar11;
  ulong uVar12;
  undefined *puVar13;
  long lVar14;
  int *piVar15;
  long lVar16;
  long *plVar17;
  int iVar18;
  ulong uVar19;
  uint uVar20;
  long lVar21;
  undefined *puStack_e8;
  long lStack_c8;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  ulong uStack_b0;
  undefined8 uStack_a8;
  int iStack_a0;
  int iStack_9c;
  uint uStack_98;
  uint uStack_94;
  int iStack_90;
  int iStack_8c;
  uint uStack_88;
  uint uStack_84;
  undefined4 uStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  
  uVar12 = param_4;
  FUN_109797e2c(param_4,param_11,param_12,0,0xffffffff,1);
  if (uVar12 != 0) {
    uVar19 = (ulong)param_14;
    if ((((param_4 & 0xf000) != 0) && ((param_4 & 0xfff) != 0)) && (*(int *)(uVar12 + 0x68) != 1)) {
      *(undefined4 *)(uVar12 + 0x68) = 1;
      *(undefined4 *)(uVar12 + 0x30) = 1;
    }
    uStack_78 = 0;
    pcStack_70 = (code *)0x0;
    FUN_1097bde20(uVar12);
    uStack_80 = *(undefined4 *)(uVar12 + 0x88);
    lStack_c8._0_4_ = 0xc;
    uStack_a8 = 0;
    uStack_b0 = uVar12;
    if (0 < (int)param_14) {
      iVar18 = 0;
      uVar20 = 0;
      puStack_e8 = (undefined *)0x0;
      bVar11 = false;
      plVar1 = (long *)(param_13 + 0x10);
      piVar15 = (int *)(param_16 + 4);
      iVar4 = *(int *)(uVar12 + 0xa0);
      iVar6 = *(int *)(uVar12 + 0xa4);
      do {
        lVar16 = *(long *)(piVar15 + 1);
        lVar21 = *(long *)(lVar16 + 0x18);
        uVar5 = *(uint *)(lVar21 + 0x88);
        iVar7 = *(int *)(lVar21 + 0x8c);
        lVar14 = lVar21;
        if (iVar7 != iVar18 || uVar5 != uVar20) {
          if (iVar7 == *(int *)(uVar12 + 0x90)) {
            bVar11 = false;
            uStack_88 = uVar5 | 0x800000;
            uStack_84 = 0x2000;
            uStack_b8 = 0;
          }
          else {
            if (puStack_e8 == (undefined *)0x0) {
              puStack_e8 = &UNK_10dffc9f6;
              FUN_1097c246c();
              if (puStack_e8 == (undefined *)0x0) goto LAB_1097bd6bc;
              FUN_1097bde20();
            }
            uStack_88 = *(uint *)(puStack_e8 + 0x88);
            uStack_84 = uVar5 | 0x800000;
            bVar11 = true;
            puStack_c0 = puStack_e8;
          }
          if (lRam000000011386a1d8 == 0) {
            FUN_1097bea00();
          }
          FUN_1097be5b0();
          lVar14 = *(long *)(lVar16 + 0x18);
          uVar20 = uVar5;
          iVar18 = iVar7;
        }
        uVar9 = (piVar15[-1] - param_7) - *(int *)(lVar16 + 0x10);
        uVar10 = (*piVar15 - param_8) - *(int *)(lVar16 + 0x14);
        iVar7 = *(int *)(lVar14 + 0xa0) + uVar9;
        iVar2 = *(int *)(lVar14 + 0xa4) + uVar10;
        uVar5 = uVar9 & ((int)uVar9 >> 0x1f ^ 0xffffffffU);
        uVar3 = uVar10 & ((int)uVar10 >> 0x1f ^ 0xffffffffU);
        if (iVar4 <= iVar7) {
          iVar7 = iVar4;
        }
        if (iVar6 <= iVar2) {
          iVar2 = iVar6;
        }
        if ((iVar7 - uVar5 != 0 && (int)uVar5 <= iVar7) && (int)uVar3 < iVar2) {
          lVar14 = 8;
          if (bVar11) {
            lVar14 = 0x10;
          }
          *(long *)((long)&lStack_c8 + lVar14) = lVar21;
          iStack_a0 = uVar5 - uVar9;
          iStack_9c = uVar3 - uVar10;
          uStack_a8 = CONCAT44(iStack_9c,iStack_a0);
          iStack_8c = iVar2 - uVar3;
          uStack_98 = uVar5;
          uStack_94 = uVar3;
          iStack_90 = iVar7 - uVar5;
          (*pcStack_70)(uStack_78,&lStack_c8);
          plVar17 = (long *)(lVar16 + 0x20);
          lVar14 = *plVar17;
          plVar8 = *(long **)(lVar16 + 0x28);
          *plVar8 = lVar14;
          *(long **)(lVar14 + 8) = plVar8;
          lVar14 = *plVar1;
          *plVar17 = lVar14;
          *(long **)(lVar16 + 0x28) = plVar1;
          *(long **)(lVar14 + 8) = plVar17;
          *plVar1 = (long)plVar17;
        }
        piVar15 = piVar15 + 4;
        uVar19 = uVar19 - 1;
      } while (uVar19 != 0);
      if ((puStack_e8 != (undefined *)0x0) &&
         (puVar13 = puStack_e8, FUN_1097bdccc(), (int)puVar13 != 0)) {
        _free(puStack_e8);
      }
    }
LAB_1097bd6bc:
    FUN_1097c3110(param_1,param_2,uVar12,param_3,param_5,param_6,0,0,param_9,param_10,param_11,
                  param_12);
    uVar19 = uVar12;
    FUN_1097bdccc();
    if ((int)uVar19 != 0) {
      _free(uVar12);
    }
  }
  return;
}



/* Entry: 1097bd71c; end: 1097bd90f;  */

void FUN_1097bd71c(undefined4 param_1,undefined8 param_2,undefined4 *param_3)

{
  func_0x0001097bd740();
  *param_3 = param_1;
  return;
}



/* Entry: 1097bd910; end: 1097bdb67;  */

void FUN_1097bd910(undefined8 *param_1,ulong param_2)

{
  ulong uVar1;
  long lVar2;
  uint uVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  bool bVar8;
  long lVar9;
  int *piVar10;
  long lVar11;
  int *piVar12;
  int *piVar13;
  ulong uVar14;
  ulong uVar15;
  int *piVar16;
  int *piVar17;
  float fVar18;
  undefined8 uVar19;
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
  
  uVar3 = *(uint *)(param_1 + 7);
  iVar4 = *(int *)((long)param_1 + 0x3c);
  uVar1 = param_2 & 0xffff;
  if ((param_2 & 0x10000) != 0) {
    uVar1 = 0x10000 - (param_2 & 0xffff);
  }
  uVar15 = param_2;
  if (iVar4 == 1) {
    uVar15 = param_2 & 0xffff;
  }
  if (iVar4 != 3) {
    uVar1 = uVar15;
  }
  if ((int)uVar3 < 1) {
    uVar15 = 0;
  }
  else {
    uVar14 = 0;
    piVar10 = (int *)param_1[6];
    do {
      uVar15 = uVar14;
      if ((long)uVar1 < (long)*piVar10) break;
      uVar14 = uVar14 + 1;
      piVar10 = piVar10 + 3;
      uVar15 = (ulong)uVar3;
    } while (uVar3 != uVar14);
  }
  piVar17 = (int *)param_1[6] + (uVar15 & 0xffffffff) * 3;
  lVar9 = (long)piVar17[-3];
  piVar16 = piVar17 + -2;
  lVar11 = (long)*piVar17;
  piVar10 = piVar17 + 1;
  piVar13 = piVar16;
  if (iVar4 == 0) {
    piVar17 = piVar10;
    if ((uint)uVar15 != uVar3) {
      piVar17 = piVar16;
    }
    piVar12 = piVar16;
    if ((uint)uVar15 != 0) {
      piVar12 = piVar10;
      piVar13 = piVar17;
    }
  }
  else {
    uVar15 = uVar1;
    lVar5 = lVar9;
    lVar6 = lVar11;
    piVar12 = piVar10;
    if ((param_2 & 0x10000) != 0) {
      uVar15 = 0x10000 - uVar1;
      lVar5 = (long)(0x10000 - *piVar17);
      lVar6 = 0x10000 - lVar9;
      piVar13 = piVar10;
      piVar12 = piVar16;
    }
    lVar2 = lVar9;
    lVar7 = lVar11;
    if (iVar4 == 1) {
      lVar2 = (param_2 - uVar1) + lVar9;
      lVar7 = (param_2 - uVar1) + lVar11;
    }
    lVar9 = (param_2 - uVar15) + lVar5;
    lVar11 = (param_2 - uVar15) + lVar6;
    if (iVar4 != 3) {
      lVar9 = lVar2;
      lVar11 = lVar7;
      piVar12 = piVar10;
      piVar13 = piVar16;
    }
  }
  uVar19 = NEON_ucvtf((ulong)CONCAT24((short)*piVar13,(uint)*(ushort *)((long)piVar13 + 6)),4);
  fVar21 = (float)uVar19 * 0.0038910506;
  fVar22 = (float)((ulong)uVar19 >> 0x20) * 0.0038910506;
  uVar19 = NEON_ucvtf((ulong)CONCAT24((short)*piVar12,(uint)*(ushort *)((long)piVar12 + 6)),4);
  fVar25 = (float)uVar19 * 0.0038910506;
  fVar26 = (float)((ulong)uVar19 >> 0x20) * 0.0038910506;
  uVar19 = NEON_ucvtf((ulong)CONCAT24((short)piVar13[1],(uint)*(ushort *)((long)piVar13 + 2)),4);
  fVar18 = (float)uVar19 * 0.0038910506;
  fVar20 = (float)((ulong)uVar19 >> 0x20) * 0.0038910506;
  uVar19 = NEON_ucvtf((ulong)CONCAT24((short)piVar12[1],(uint)*(ushort *)((long)piVar12 + 2)),4);
  fVar23 = (float)uVar19 * 0.0038910506;
  fVar24 = (float)((ulong)uVar19 >> 0x20) * 0.0038910506;
  fVar28 = (float)lVar9 / 65536.0;
  fVar27 = (float)lVar11 / 65536.0;
  fVar29 = fVar27 - fVar28;
  if (fVar29 <= -1.1754944e-38) {
    bVar8 = lVar9 == -0x80000000;
  }
  else {
    bVar8 = fVar29 < 1.1754944e-38 || lVar9 == -0x80000000;
  }
  if (bVar8 || lVar11 == 0x7fffffff) {
    *(undefined4 *)(param_1 + 3) = 0;
    *(undefined4 *)(param_1 + 2) = 0;
    *(undefined4 *)(param_1 + 1) = 0;
    *(undefined4 *)param_1 = 0;
    *(float *)((long)param_1 + 4) = (fVar21 + fVar25) / 510.0;
    *(float *)((long)param_1 + 0xc) = (fVar22 + fVar26) / 510.0;
    *(float *)((long)param_1 + 0x14) = (fVar18 + fVar23) / 510.0;
    *(float *)((long)param_1 + 0x1c) = (fVar20 + fVar24) / 510.0;
  }
  else {
    fVar29 = 1.0 / fVar29;
    param_1[1] = CONCAT44((-fVar26 * fVar28 + fVar22 * fVar27) * fVar29 * 0.003921569,
                          (fVar26 - fVar22) * fVar29 * 0.003921569);
    *param_1 = CONCAT44((-fVar25 * fVar28 + fVar21 * fVar27) * fVar29 * 0.003921569,
                        (fVar25 - fVar21) * fVar29 * 0.003921569);
    param_1[3] = CONCAT44((-fVar24 * fVar28 + fVar20 * fVar27) * fVar29 * 0.003921569,
                          (fVar24 - fVar20) * fVar29 * 0.003921569);
    param_1[2] = CONCAT44((-fVar23 * fVar28 + fVar18 * fVar27) * fVar29 * 0.003921569,
                          (fVar23 - fVar18) * fVar29 * 0.003921569);
  }
  param_1[4] = lVar9;
  param_1[5] = lVar11;
  *(undefined4 *)(param_1 + 8) = 0;
  return;
}



/* Entry: 1097bdb68; end: 1097bdc13;  */

void FUN_1097bdb68(long param_1,undefined8 param_2,uint param_3)

{
  ulong uVar1;
  
  if ((int)param_3 < 1) {
    FUN_1097c2c3c(&UNK_10f580036,&UNK_10f58008d);
  }
  else if (param_3 < 0xaaaaaa8) {
    uVar1 = (ulong)(param_3 * 0xc + 0x18);
    _malloc();
    *(ulong *)(param_1 + 0x98) = uVar1;
    if (uVar1 != 0) {
      *(ulong *)(param_1 + 0x98) = uVar1 + 0xc;
      _memcpy(uVar1 + 0xc,param_2,param_3 * 0xc);
      *(uint *)(param_1 + 0x90) = param_3;
      *(code **)(param_1 + 0x70) = FUN_1097bdc14;
    }
  }
  else {
    *(undefined8 *)(param_1 + 0x98) = 0;
  }
  return;
}



/* Entry: 1097bdc14; end: 1097bdccb;  */

void FUN_1097bdc14(long param_1)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  undefined8 uVar4;
  
  piVar3 = *(int **)(param_1 + 0x98);
  piVar1 = piVar3 + (long)*(int *)(param_1 + 0x90) * 3;
  iVar2 = *(int *)(param_1 + 0x40);
  if (iVar2 == 1) {
    piVar3[-3] = piVar1[-3] + -0x10000;
    *(undefined8 *)(piVar3 + -2) = *(undefined8 *)(piVar1 + -2);
    *piVar1 = *piVar3 + 0x10000;
    uVar4 = *(undefined8 *)(piVar3 + 1);
  }
  else {
    if (iVar2 == 2) {
      piVar3[-3] = -0x80000000;
      *(undefined8 *)(piVar3 + -2) = *(undefined8 *)(piVar3 + 1);
      iVar2 = 0x7fffffff;
    }
    else {
      if (iVar2 != 3) {
        piVar3[-3] = -0x80000000;
        piVar3[-2] = 0;
        piVar3[-1] = 0;
        *piVar1 = 0x7fffffff;
        piVar1[1] = 0;
        piVar1[2] = 0;
        return;
      }
      piVar3[-3] = -*piVar3;
      *(undefined8 *)(piVar3 + -2) = *(undefined8 *)(piVar3 + 1);
      iVar2 = 0x20000 - piVar1[-3];
    }
    *piVar1 = iVar2;
    uVar4 = *(undefined8 *)(piVar1 + -2);
  }
  *(undefined8 *)(piVar1 + 1) = uVar4;
  return;
}



/* Entry: 1097bdccc; end: 1097bddbb;  */

undefined8 FUN_1097bdccc(int *param_1)

{
  int iVar1;
  long lVar2;
  long lVar3;
  
  iVar1 = param_1[1];
  param_1[1] = iVar1 + -1;
  if (iVar1 + -1 != 0) {
    return 0;
  }
  if (*(code **)(param_1 + 0x1e) != (code *)0x0) {
    (**(code **)(param_1 + 0x1e))(param_1,*(undefined8 *)(param_1 + 0x20));
  }
  if ((*(long **)(param_1 + 6) != (long *)0x0) && (**(long **)(param_1 + 6) != 0)) {
    _free();
  }
  _free(*(undefined8 *)(param_1 + 0xe));
  _free(*(undefined8 *)(param_1 + 0x12));
  lVar3 = *(long *)(param_1 + 0x16);
  if ((lVar3 != 0) && (lVar2 = lVar3, FUN_1097bdccc(), (int)lVar2 != 0)) {
    _free(lVar3);
  }
  iVar1 = *param_1;
  if (iVar1 - 1U < 3) {
    if (*(long *)(param_1 + 0x26) == 0) {
      return 1;
    }
    _free(*(long *)(param_1 + 0x26) + -0xc);
    iVar1 = *param_1;
  }
  if ((iVar1 == 0) && (*(long *)(param_1 + 0x2c) != 0)) {
    _free();
  }
  return 1;
}



/* Entry: 1097bddbc; end: 1097bde1f;  */

void FUN_1097bddbc(void)

{
  long lVar1;
  
  lVar1 = 0x108;
  _malloc();
  if (lVar1 != 0) {
    *(undefined8 *)(lVar1 + 8) = 0;
    *(undefined8 *)(lVar1 + 0x10) = 0;
    *(undefined **)(lVar1 + 0x18) = &UNK_10dffca88;
    *(undefined8 *)(lVar1 + 0x20) = 0;
    *(undefined8 *)(lVar1 + 0x38) = 0;
    *(undefined8 *)(lVar1 + 0x40) = 0x300000000;
    *(undefined8 *)(lVar1 + 0x48) = 0;
    *(undefined4 *)(lVar1 + 0x50) = 0;
    *(undefined8 *)(lVar1 + 0x58) = 0;
    *(undefined4 *)(lVar1 + 0x68) = 0;
    *(undefined4 *)(lVar1 + 4) = 1;
    *(undefined8 *)(lVar1 + 0x28) = 0;
    *(undefined8 *)(lVar1 + 0x78) = 0;
    *(undefined8 *)(lVar1 + 0x80) = 0;
    *(undefined8 *)(lVar1 + 0x70) = 0;
    *(undefined4 *)(lVar1 + 0x30) = 1;
  }
  return;
}



/* Entry: 1097bde20; end: 1097be29b;  */

void FUN_1097bde20(int *param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint *puVar6;
  uint uVar7;
  ulong uVar8;
  uint uVar9;
  short *psVar10;
  uint uVar11;
  
  do {
    if (param_1[0xc] != 0) {
      puVar6 = *(uint **)(param_1 + 0xe);
      if (puVar6 == (uint *)0x0) {
        uVar4 = 0x70001;
      }
      else {
        if (((puVar6[6] == 0) && (puVar6[7] == 0)) && (puVar6[8] == 0x10000)) {
          uVar7 = puVar6[1];
          if ((uVar7 == 0) && (puVar6[3] == 0)) {
            if (*puVar6 == 0xffff0000) {
              uVar4 = 0x221400;
              if (puVar6[4] != 0xffff0000) {
                uVar4 = 0x21400;
              }
            }
            else {
              uVar4 = 0x21400;
            }
          }
          else {
            uVar5 = 0x21000;
            uVar4 = uVar5;
            if ((*puVar6 == 0) && (puVar6[4] == 0)) {
              if ((uVar7 == 0xffff0000) && (puVar6[3] == 0x10000)) {
                uVar4 = 0x121000;
              }
              else {
                uVar4 = 0x421000;
                if (puVar6[3] != 0xffff0000 || uVar7 != 0x10000) {
                  uVar4 = uVar5;
                }
              }
            }
          }
        }
        else {
          uVar4 = 0x1000;
        }
        uVar7 = uVar4 | 0x10000;
        if ((int)*puVar6 < 1) {
          uVar7 = uVar4;
        }
        uVar4 = uVar7 | 0x40000;
        if (puVar6[3] != 0) {
          uVar4 = uVar7;
        }
      }
      iVar1 = param_1[0x11];
      if (iVar1 < 4) {
        if (iVar1 - 1U < 2) {
LAB_1097bdf5c:
          if ((uVar4 & 1) == 0) {
            uVar5 = uVar4 | 0x80004;
            uVar7 = uVar5;
            if ((uVar4 >> 0x11 & 1) != 0) {
              if ((((puVar6[1] | *puVar6 | puVar6[2] | puVar6[3] | puVar6[4] | puVar6[5]) & 0xffff)
                   == 0 && ((int)(puVar6[4] + puVar6[3] & puVar6[1] + *puVar6) >> 0x10 & 0x80000001U
                           ) == 1) &&
                 (uVar7 = uVar4 | 0x80804,
                 0xea600000 < puVar6[5] + 0x75300000 || 0xea600000 < puVar6[2] + 0x75300000)) {
                uVar7 = uVar5;
              }
            }
          }
          else {
            uVar7 = uVar4 | 0x80804;
          }
        }
        else if ((iVar1 == 0) || (iVar1 == 3)) {
          uVar7 = uVar4 | 0x804;
        }
        else {
LAB_1097bdfdc:
          uVar7 = uVar4 | 4;
        }
      }
      else {
        if (iVar1 == 4) goto LAB_1097bdf5c;
        uVar7 = uVar4;
        if (iVar1 != 5) {
          if (iVar1 != 6) goto LAB_1097bdfdc;
          uVar7 = uVar4 | 0x4000000;
        }
      }
      uVar4 = param_1[0x10];
      if (uVar4 < 4) {
        uVar5 = *(uint *)(&UNK_10dffca30 + (ulong)uVar4 * 4);
      }
      else {
        uVar5 = 0x8018;
      }
      uVar9 = 0x100;
      if (param_1[0x1a] == 0) {
        uVar9 = 0x200;
      }
      uVar9 = uVar5 | uVar7 | uVar9;
      uVar7 = uVar9 | 0x60;
      iVar2 = *param_1;
      uVar5 = 0x40000;
      if (iVar2 < 3) {
        if (iVar2 - 1U < 2) {
          if (uVar4 != 0) {
LAB_1097be0a0:
            uVar7 = uVar9 | 0x2060;
            uVar8 = (ulong)(uint)param_1[0x24];
            if (0 < param_1[0x24]) {
              psVar10 = (short *)(*(long *)(param_1 + 0x26) + 10);
              do {
                if (*psVar10 != -1) {
                  uVar7 = uVar7 & 0xffffdfff;
                  break;
                }
                uVar8 = uVar8 - 1;
                psVar10 = psVar10 + 6;
              } while (uVar8 != 0);
            }
            uVar5 = 0x40000;
          }
        }
        else if (iVar2 == 0) {
          if (((param_1[0x28] == 1) && (uVar4 != 0)) && (param_1[0x29] == 1)) {
            uVar11 = param_1[0x24];
            uVar5 = 0x10000;
          }
          else {
            uVar11 = param_1[0x24];
            uVar7 = uVar9 | 0x2000060;
            uVar5 = uVar11;
          }
          uVar9 = 0x80;
          if (uVar4 != 0) {
            uVar9 = 0x2080;
          }
          uVar4 = 0;
          if ((uVar11 & 0x3e0000) != 0x40000 && (uVar11 & 0xf000) == 0) {
            uVar4 = uVar9;
          }
          if ((*(long *)(param_1 + 0x3e) != 0) || (uVar9 = uVar7, *(long *)(param_1 + 0x40) != 0)) {
            uVar9 = uVar7 & 0xffffffdf;
          }
          uVar7 = uVar4 | uVar9;
          uVar3 = uVar11 >> 0x16 & 3;
          if (((8 < (uVar11 >> 0xc & 0xf) << (ulong)uVar3) ||
              (8 < (uVar11 >> 8 & 0xf) << (ulong)uVar3)) ||
             ((8 < (uVar11 >> 4 & 0xf) << (ulong)uVar3 ||
              (((uVar11 & 0x3f0000) == 0xa0000 || (8 < (uVar11 & 0xf) << (ulong)uVar3)))))) {
            uVar7 = uVar4 | uVar9 & 0xffffffbf;
          }
        }
      }
      else if (iVar2 == 3) {
        if ((uVar4 != 0) && (*(double *)(param_1 + 0x32) < 0.0)) goto LAB_1097be0a0;
      }
      else if (iVar2 == 4) {
        uVar4 = uVar9 | 0x2060;
        if (*(short *)((long)param_1 + 0x96) != -1) {
          uVar4 = uVar7;
        }
        uVar5 = 0x10000;
        uVar7 = uVar4;
      }
      if (*(long *)(param_1 + 0x16) == 0) {
        uVar7 = uVar7 | 2;
        if ((iVar1 - 5U < 2) || (param_1[0x1a] != 0)) goto LAB_1097be1c0;
      }
      else {
        if (iVar2 == 0) {
          uVar4 = *(uint *)(*(long *)(param_1 + 0x16) + 0x90);
          uVar9 = uVar4 >> 0x16 & 3;
          if (((8 < (uVar4 >> 0xc & 0xf) << (ulong)uVar9 || 8 < (uVar4 >> 8 & 0xf) << (ulong)uVar9)
               || 8 < (uVar4 >> 4 & 0xf) << (ulong)uVar9) ||
             ((uVar4 & 0x3f0000) == 0xa0000 || 8 < (uVar4 & 0xf) << (ulong)uVar9)) {
            uVar7 = uVar7 & 0xffffffbf;
          }
        }
        else {
          uVar7 = uVar7 | 2;
        }
LAB_1097be1c0:
        uVar7 = uVar7 & 0xffffdf7f;
      }
      param_1[0x22] = uVar7;
      param_1[0x23] = uVar5;
      if (*(code **)(param_1 + 0x1c) != (code *)0x0) {
        (**(code **)(param_1 + 0x1c))(param_1);
      }
      param_1[0xc] = 0;
    }
    param_1 = *(int **)(param_1 + 0x16);
    if (param_1 == (int *)0x0) {
      return;
    }
  } while( true );
}



/* Entry: 1097be29c; end: 1097be34b;  */

void FUN_1097be29c(long param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  puVar3 = *(undefined8 **)(param_1 + 0x38);
  if (puVar3 == param_2) {
    return;
  }
  if (param_2 != (undefined8 *)0x0) {
    iVar1 = 0xdffca00;
    _memcmp(&UNK_10dffca00,param_2,0x24);
    if (iVar1 != 0) {
      if (puVar3 == (undefined8 *)0x0) {
        puVar3 = (undefined8 *)0x24;
        _malloc();
        *(undefined8 **)(param_1 + 0x38) = puVar3;
        if (puVar3 == (undefined8 *)0x0) goto LAB_1097be334;
      }
      else {
        puVar2 = puVar3;
        _memcmp(puVar3,param_2,0x24);
        if ((int)puVar2 == 0) {
          return;
        }
      }
      uVar5 = param_2[1];
      uVar4 = *param_2;
      uVar7 = param_2[3];
      uVar6 = param_2[2];
      *(undefined4 *)(puVar3 + 4) = *(undefined4 *)(param_2 + 4);
      puVar3[1] = uVar5;
      *puVar3 = uVar4;
      puVar3[3] = uVar7;
      puVar3[2] = uVar6;
      goto LAB_1097be334;
    }
  }
  _free(puVar3);
  *(undefined8 *)(param_1 + 0x38) = 0;
LAB_1097be334:
  *(undefined4 *)(param_1 + 0x30) = 1;
  return;
}



/* Entry: 1097be34c; end: 1097be453;  */

void FUN_1097be34c(long param_1,int param_2,undefined8 *param_3,uint param_4)

{
  undefined8 *puVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  puVar1 = *(undefined8 **)(param_1 + 0x48);
  if ((puVar1 == param_3) && (*(int *)(param_1 + 0x44) == param_2)) {
    return;
  }
  if (param_2 == 6) {
    uVar3 = NEON_ushl(CONCAT44((int)((long)*param_3 >> 0x30),(int)*param_3 >> 0x10),
                      CONCAT44((int)((long)param_3[1] >> 0x30),(int)param_3[1] >> 0x10),4);
    if ((int)uVar3 + (int)((ulong)uVar3 >> 0x20) + 4U != param_4) {
      FUN_1097c2c3c(&UNK_10f5800b2,&UNK_10f580118);
      return;
    }
  }
  else if (param_3 == (undefined8 *)0x0) {
    uVar2 = 0;
    goto LAB_1097be41c;
  }
  if (0x1ffffffe < param_4) {
    return;
  }
  uVar2 = (ulong)(param_4 << 2);
  _malloc();
  if (uVar2 == 0) {
    return;
  }
  _memcpy();
LAB_1097be41c:
  *(int *)(param_1 + 0x44) = param_2;
  if (puVar1 != (undefined8 *)0x0) {
    _free(puVar1);
  }
  *(ulong *)(param_1 + 0x48) = uVar2;
  *(uint *)(param_1 + 0x50) = param_4;
  *(undefined4 *)(param_1 + 0x30) = 1;
  return;
}



/* Entry: 1097be454; end: 1097be48f;  */

int FUN_1097be454(int *param_1)

{
  uint uVar1;
  
  if (*param_1 != 0) {
    return 0;
  }
  uVar1 = param_1[0x24];
  return (uVar1 >> 8 & 0xf) + (uVar1 & 0xf) + (uVar1 >> 0xc & 0xf) + (uVar1 >> 4 & 0xf) <<
         (ulong)(uVar1 >> 0x16 & 3);
}



/* Entry: 1097be490; end: 1097be5af;  */

uint FUN_1097be490(undefined8 param_1,int *param_2,undefined8 param_3)

{
  int iVar1;
  uint *puVar2;
  uint auStack_80 [10];
  code *pcStack_58;
  code *pcStack_48;
  uint uStack_24;
  
  if (*param_2 == 0) {
    iVar1 = param_2[0x24];
    if (iVar1 == 0x8018000) {
      uStack_24 = (uint)**(byte **)(param_2 + 0x2a) << 0x18;
      goto LAB_1097be554;
    }
    if (iVar1 == 0x20020888) {
      uStack_24 = **(uint **)(param_2 + 0x2a) | 0xff000000;
      goto LAB_1097be554;
    }
    if (iVar1 == 0x20028888) {
      uStack_24 = **(uint **)(param_2 + 0x2a);
      goto LAB_1097be554;
    }
  }
  else if (*param_2 == 4) {
    uStack_24 = param_2[0x26];
    goto LAB_1097be554;
  }
  FUN_1097be89c(param_1,auStack_80,param_2,0,0,1,1,&uStack_24,0x21,param_2[0x22]);
  puVar2 = auStack_80;
  (*pcStack_58)(puVar2,0);
  uStack_24 = *puVar2;
  if (pcStack_48 != (code *)0x0) {
    (*pcStack_48)(auStack_80);
  }
LAB_1097be554:
  if (((uint)((ulong)param_3 >> 0x10) & 0x3f | 8) != 10) {
    uStack_24 = uStack_24 & 0xff000000 |
                uStack_24 & 0xff00 | uStack_24 >> 0x10 & 0xff | (uStack_24 & 0xff) << 0x10;
  }
  return uStack_24;
}



/* Entry: 1097be5b0; end: 1097be7f3;  */

void FUN_1097be5b0(undefined8 param_1,int param_2,int param_3,uint param_4,int param_5,uint param_6,
                  int param_7,uint param_8,undefined4 param_9,undefined4 param_10,
                  undefined8 *param_11)

{
  int *piVar1;
  int iVar2;
  undefined **ppuVar3;
  long extraout_x8;
  long lVar4;
  long lVar5;
  int *piVar6;
  long *extraout_x12;
  undefined *puVar7;
  
  ppuVar3 = &PTR___tlv_bootstrap_11340d690;
  (*(code *)PTR___tlv_bootstrap_11340d690)(param_1);
  lVar5 = 0;
  piVar6 = (int *)((long)ppuVar3 + 0x14);
  do {
    if ((((piVar6[-3] == param_2) && (piVar6[-2] == param_3)) && (*piVar6 == param_5)) &&
       (((piVar6[2] == param_7 && (piVar6[-1] == param_4)) &&
        ((piVar6[1] == param_6 &&
         ((piVar6[3] == param_8 &&
          (puVar7 = *(undefined **)(piVar6 + 5), puVar7 != (undefined *)0x0)))))))) {
      *extraout_x12 = *(long *)(piVar6 + -5);
      *param_11 = puVar7;
      if (lVar5 == 0) {
        return;
      }
LAB_1097be7a8:
      _memmove(ppuVar3 + 6,ppuVar3,lVar5 * 0x30);
      *ppuVar3 = (undefined *)*extraout_x12;
      *(int *)(ppuVar3 + 1) = param_2;
      *(int *)((long)ppuVar3 + 0xc) = param_3;
      *(uint *)(ppuVar3 + 2) = param_4;
      *(int *)((long)ppuVar3 + 0x14) = param_5;
      *(uint *)(ppuVar3 + 3) = param_6;
      *(int *)((long)ppuVar3 + 0x1c) = param_7;
      *(uint *)(ppuVar3 + 4) = param_8;
      ppuVar3[5] = puVar7;
      return;
    }
    lVar5 = lVar5 + 1;
    piVar6 = piVar6 + 0xc;
    lVar4 = extraout_x8;
  } while (lVar5 != 8);
  do {
    if (lVar4 == 0) {
      if (iRam000000011382add8 < 10) {
        _fprintf(*(undefined8 *)PTR____stderrp_11034bdc8,&UNK_10f5808c0);
        iRam000000011382add8 = iRam000000011382add8 + 1;
      }
      *extraout_x12 = 0;
      *param_11 = FUN_1097be7f4;
      return;
    }
    piVar6 = *(int **)(lVar4 + 0x10) + 5;
    iVar2 = **(int **)(lVar4 + 0x10);
    while (iVar2 != 0x3f) {
      if ((((iVar2 == param_2) || (iVar2 == 0x40)) &&
          (((piVar6[-4] == param_3 || (piVar6[-4] == 0x50000)) &&
           ((piVar6[-2] == param_5 || (piVar6[-2] == 0x50000)))))) &&
         (((*piVar6 == param_7 || (*piVar6 == 0x50000)) &&
          ((((piVar6[-3] & (param_4 ^ 0xffffffff)) == 0 &&
            ((piVar6[-1] & (param_6 ^ 0xffffffff)) == 0)) &&
           ((piVar6[1] & (param_8 ^ 0xffffffff)) == 0)))))) {
        *extraout_x12 = lVar4;
        puVar7 = *(undefined **)(piVar6 + 3);
        *param_11 = puVar7;
        lVar5 = 7;
        goto LAB_1097be7a8;
      }
      piVar1 = piVar6 + 5;
      piVar6 = piVar6 + 10;
      iVar2 = *piVar1;
    }
    lVar4 = *(long *)(lVar4 + 8);
  } while( true );
}



/* Entry: 1097be7f4; end: 1097be7f7;  */

void FUN_1097be7f4(void)

{
  return;
}



/* Entry: 1097be7f8; end: 1097be89b;  */

code * FUN_1097be7f8(long param_1,ulong param_2,uint param_3,int param_4)

{
  code *pcVar1;
  
  if (param_1 != 0) {
    param_3 = param_3 | param_4 << 1;
    do {
      if ((param_3 < 4) &&
         (pcVar1 = *(code **)(param_1 + *(long *)(&UNK_10dffca68 + (ulong)param_3 * 8) +
                             (param_2 & 0xffffffff) * 8), pcVar1 != (code *)0x0)) {
        return pcVar1;
      }
      param_1 = *(long *)(param_1 + 8);
    } while (param_1 != 0);
  }
  if (iRam000000011382add8 < 10) {
    _fprintf(*(undefined8 *)PTR____stderrp_11034bdc8,&UNK_10f5808c0);
    iRam000000011382add8 = iRam000000011382add8 + 1;
  }
  return FUN_1097be89c;
}



/* Entry: 1097be89c; end: 1097be947;  */

void FUN_1097be89c(void)

{
  return;
}



/* Entry: 1097be948; end: 1097be9ff;  */

void FUN_1097be948(long param_1)

{
  long lVar1;
  char *pcVar2;
  long lVar3;
  char *pcVar4;
  int iVar5;
  
  pcVar4 = "PIXMAN_DISABLE";
  _getenv();
  if (pcVar4 != (char *)0x0) {
    lVar1 = param_1;
    _strlen();
    do {
      pcVar2 = pcVar4;
      _strchr(pcVar4,0x20);
      if (pcVar2 == (char *)0x0) {
        pcVar2 = pcVar4;
        _strlen();
        iVar5 = (int)pcVar2;
      }
      else {
        iVar5 = (int)pcVar2 - (int)pcVar4;
      }
      if ((lVar1 == iVar5) && (lVar3 = param_1, _strncmp(param_1,pcVar4,lVar1), (int)lVar3 == 0)) {
        _printf(&UNK_10f58037b);
        return;
      }
      pcVar2 = pcVar4 + iVar5;
      pcVar4 = pcVar2 + 1;
    } while (*pcVar2 != '\0');
  }
  return;
}



/* Entry: 1097bea00; end: 1097bebb3;  */

long FUN_1097bea00(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  int iVar4;
  
  FUN_1097bc694();
  iVar4 = 0xf58039f;
  FUN_1097be948();
  if (iVar4 == 0) {
    FUN_1097acc1c();
  }
  func_0x0001097bf718();
  iVar4 = 0xf5803a4;
  FUN_1097be948();
  if (iVar4 != 0) {
    lVar3 = *(long *)(param_1 + 8);
    lVar2 = param_1;
    while (lVar1 = lVar3, lVar1 != 0) {
      *(undefined **)(lVar2 + 0x10) = &UNK_10dffca40;
      lVar2 = lVar1;
      lVar3 = *(long *)(lVar1 + 8);
    }
  }
  return param_1;
}



/* Entry: 1097bebb4; end: 1097bebe7;  */

ulong FUN_1097bebb4(long *param_1,int *param_2)

{
  ulong uVar1;
  int iVar2;
  int *piVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  int iVar8;
  long lVar9;
  ulong uVar10;
  uint uVar11;
  int iVar12;
  int *piVar13;
  long lVar14;
  int iVar15;
  double dVar16;
  long lStack_e8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined8 uStack_88;
  int iStack_80;
  
  iVar15 = (int)param_1[3];
  lVar14 = *param_1;
  uVar10 = param_1[1];
  uStack_94 = *(undefined4 *)(lVar14 + 0x40);
  uStack_a0 = *(undefined8 *)(lVar14 + 0x98);
  uStack_98 = *(undefined4 *)(lVar14 + 0x90);
  uStack_c8 = 0;
  uStack_d0 = 0;
  uStack_b8 = 0;
  uStack_c0 = 0;
  uStack_a8 = 0x10000;
  uStack_b0 = 0;
  uStack_90 = 1;
  uStack_88 = CONCAT44((int)((ulong)param_1[2] >> 0x20) << 0x10,(int)param_1[2] << 0x10) |
              0x800000008000;
  lVar7 = 0x10000;
  iStack_80 = 0x10000;
  piVar13 = *(int **)(lVar14 + 0x38);
  if (piVar13 == (int *)0x0) {
    lStack_e8 = 0;
    iVar8 = 0;
  }
  else {
    piVar3 = piVar13;
    FUN_1097bf628(piVar13,&uStack_88);
    if ((int)piVar3 == 0) {
      return uVar10;
    }
    lVar7 = (long)*piVar13;
    lStack_e8 = (long)piVar13[3];
    iVar8 = piVar13[6];
  }
  uVar1 = uVar10 + (long)iVar15 * 4;
  lVar4 = (long)*(int *)(lVar14 + 0xa8) - (long)*(int *)(lVar14 + 0xa0);
  lVar6 = (long)*(int *)(lVar14 + 0xac) - (long)*(int *)(lVar14 + 0xa4);
  uVar5 = lVar4 * lVar4 + lVar6 * lVar6;
  if (uVar5 == 0 || iVar8 == 0) {
    if (uVar5 == 0 || iStack_80 == 0) {
      lVar14 = 0;
      dVar16 = 0.0;
    }
    else {
      dVar16 = 4294967296.0 / ((double)uVar5 * (double)iStack_80);
      lVar14 = (long)(dVar16 * ((double)((int)uStack_88 * lVar4 + uStack_88._4_4_ * lVar6) +
                               (double)iStack_80 * -1.52587890625e-05 *
                               (double)(lVar4 * *(int *)(lVar14 + 0xa0) +
                                       lVar6 * *(int *)(lVar14 + 0xa4))));
      dVar16 = dVar16 * (double)(lVar7 * lVar4 + lStack_e8 * lVar6);
    }
    if ((long)(dVar16 * (double)iVar15) == 0) {
      (*(code *)0x1097bd8a0)(&uStack_d0,lVar14,uVar10,uVar1);
    }
    else if (0 < iVar15) {
      lVar7 = 0;
      uVar11 = 1;
      do {
        piVar13 = param_2;
        if ((param_2 == (int *)0x0) || (piVar13 = param_2 + 1, *param_2 != 0)) {
          (*(code *)0x1097bd71c)(&uStack_d0,lVar7 + lVar14,uVar10);
        }
        lVar7 = (long)(dVar16 * (double)uVar11);
        uVar11 = uVar11 + 1;
        uVar10 = uVar10 + 4;
        param_2 = piVar13;
      } while (uVar10 < uVar1);
    }
  }
  else if (0 < iVar15) {
    lVar9 = lVar4 * (int)uStack_88 + lVar6 * uStack_88._4_4_;
    dVar16 = 0.0;
    iVar15 = (int)uStack_88;
    iVar12 = uStack_88._4_4_;
    do {
      iVar2 = iStack_80;
      iVar12 = iVar12 + (int)lStack_e8;
      iVar15 = iVar15 + (int)lVar7;
      piVar13 = param_2;
      if ((param_2 == (int *)0x0) || (piVar13 = param_2 + 1, *param_2 != 0)) {
        if (iStack_80 != 0) {
          dVar16 = (4294967296.0 / ((double)uVar5 * (double)iStack_80)) *
                   ((double)lVar9 +
                   (double)iStack_80 * -1.52587890625e-05 *
                   (double)(*(int *)(lVar14 + 0xa0) * lVar4 + *(int *)(lVar14 + 0xa4) * lVar6));
        }
        (*(code *)0x1097bd71c)(&uStack_d0,(long)dVar16,uVar10);
      }
      uStack_88 = CONCAT44(iVar12,iVar15);
      iStack_80 = iVar2 + iVar8;
      lVar9 = lVar9 + lVar7 * lVar4 + lStack_e8 * lVar6;
      uVar10 = uVar10 + 4;
      param_2 = piVar13;
    } while (uVar10 < uVar1);
  }
  *(int *)((long)param_1 + 0x14) = *(int *)((long)param_1 + 0x14) + 1;
  return param_1[1];
}



/* Entry: 1097bebe8; end: 1097bec6b;  */

undefined8 *
FUN_1097bebe8(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar2 = param_1;
  FUN_1097bddbc();
  if (puVar2 != (undefined8 *)0x0) {
    puVar1 = puVar2;
    FUN_1097bdb68(puVar2,param_3,param_4);
    if ((int)puVar1 == 0) {
      _free(puVar2);
      puVar2 = (undefined8 *)0x0;
    }
    else {
      puVar2[0x14] = *param_1;
      puVar2[0x15] = *param_2;
      *(undefined4 *)puVar2 = 1;
    }
  }
  return puVar2;
}



/* Entry: 1097bec6c; end: 1097bef83;  */

ulong FUN_1097bec6c(long *param_1,int *param_2,ulong param_3,code *param_4,code *param_5)

{
  ulong uVar1;
  int iVar2;
  int *piVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  int iVar10;
  ulong uVar11;
  uint uVar12;
  int iVar13;
  int *piVar14;
  long lVar15;
  int iVar16;
  double dVar17;
  long lStack_e8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined8 uStack_88;
  int iStack_80;
  
  lVar5 = param_1[3];
  lVar15 = *param_1;
  uVar11 = param_1[1];
  uStack_94 = *(undefined4 *)(lVar15 + 0x40);
  uStack_a0 = *(undefined8 *)(lVar15 + 0x98);
  uStack_98 = *(undefined4 *)(lVar15 + 0x90);
  uStack_c8 = 0;
  uStack_d0 = 0;
  uStack_b8 = 0;
  uStack_c0 = 0;
  uStack_a8 = 0x10000;
  uStack_b0 = 0;
  uStack_90 = 1;
  uStack_88 = CONCAT44((int)((ulong)param_1[2] >> 0x20) << 0x10,(int)param_1[2] << 0x10) |
              0x800000008000;
  lVar9 = 0x10000;
  iStack_80 = 0x10000;
  piVar14 = *(int **)(lVar15 + 0x38);
  if (piVar14 == (int *)0x0) {
    lStack_e8 = 0;
    iVar10 = 0;
  }
  else {
    piVar3 = piVar14;
    FUN_1097bf628(piVar14,&uStack_88);
    if ((int)piVar3 == 0) {
      return uVar11;
    }
    lVar9 = (long)*piVar14;
    lStack_e8 = (long)piVar14[3];
    iVar10 = piVar14[6];
  }
  uVar4 = param_3 >> 2 & 0x3fffffff;
  iVar16 = (int)lVar5 * (int)uVar4;
  uVar1 = uVar11 + (long)iVar16 * 4;
  lVar6 = (long)*(int *)(lVar15 + 0xa8) - (long)*(int *)(lVar15 + 0xa0);
  lVar8 = (long)*(int *)(lVar15 + 0xac) - (long)*(int *)(lVar15 + 0xa4);
  uVar7 = lVar6 * lVar6 + lVar8 * lVar8;
  if (uVar7 == 0 || iVar10 == 0) {
    if (uVar7 == 0 || iStack_80 == 0) {
      lVar15 = 0;
      dVar17 = 0.0;
    }
    else {
      dVar17 = 4294967296.0 / ((double)uVar7 * (double)iStack_80);
      lVar15 = (long)(dVar17 * ((double)((int)uStack_88 * lVar6 + uStack_88._4_4_ * lVar8) +
                               (double)iStack_80 * -1.52587890625e-05 *
                               (double)(lVar6 * *(int *)(lVar15 + 0xa0) +
                                       lVar8 * *(int *)(lVar15 + 0xa4))));
      dVar17 = dVar17 * (double)(lVar9 * lVar6 + lStack_e8 * lVar8);
    }
    if ((long)(dVar17 * (double)(int)lVar5) == 0) {
      (*param_5)(&uStack_d0,lVar15,uVar11,uVar1);
    }
    else if (0 < iVar16) {
      lVar5 = 0;
      uVar12 = 1;
      do {
        piVar14 = param_2;
        if ((param_2 == (int *)0x0) || (piVar14 = param_2 + 1, *param_2 != 0)) {
          (*param_4)(&uStack_d0,lVar5 + lVar15,uVar11);
        }
        lVar5 = (long)(dVar17 * (double)uVar12);
        uVar12 = uVar12 + 1;
        uVar11 = uVar11 + uVar4 * 4;
        param_2 = piVar14;
      } while (uVar11 < uVar1);
    }
  }
  else if (0 < iVar16) {
    lVar5 = lVar6 * (int)uStack_88 + lVar8 * uStack_88._4_4_;
    dVar17 = 0.0;
    iVar16 = (int)uStack_88;
    iVar13 = uStack_88._4_4_;
    do {
      iVar2 = iStack_80;
      iVar13 = iVar13 + (int)lStack_e8;
      iVar16 = iVar16 + (int)lVar9;
      piVar14 = param_2;
      if ((param_2 == (int *)0x0) || (piVar14 = param_2 + 1, *param_2 != 0)) {
        if (iStack_80 != 0) {
          dVar17 = (4294967296.0 / ((double)uVar7 * (double)iStack_80)) *
                   ((double)lVar5 +
                   (double)iStack_80 * -1.52587890625e-05 *
                   (double)(*(int *)(lVar15 + 0xa0) * lVar6 + *(int *)(lVar15 + 0xa4) * lVar8));
        }
        (*param_4)(&uStack_d0,(long)dVar17,uVar11);
      }
      uStack_88 = CONCAT44(iVar13,iVar16);
      iStack_80 = iVar2 + iVar10;
      lVar5 = lVar5 + lVar9 * lVar6 + lStack_e8 * lVar8;
      uVar11 = uVar11 + uVar4 * 4;
      param_2 = piVar14;
    } while (uVar11 < uVar1);
  }
  *(int *)((long)param_1 + 0x14) = *(int *)((long)param_1 + 0x14) + 1;
  return param_1[1];
}



/* Entry: 1097bef84; end: 1097bf627;  */

/* WARNING: Possible PIC construction at 0x0001097bf658: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001097bf65c) */
/* WARNING: Removing unreachable block (ram,0x0001097bf67c) */
/* WARNING: Removing unreachable block (ram,0x0001097bf680) */
/* WARNING: Removing unreachable block (ram,0x0001097bf688) */
/* WARNING: Removing unreachable block (ram,0x0001097bf68c) */

ulong FUN_1097bef84(long param_1,long *param_2,ulong *param_3)

{
  long lVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  ulong uVar5;
  ulong *puVar6;
  bool bVar7;
  bool bVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  long *plVar12;
  long *plVar13;
  uint uVar14;
  uint uVar15;
  ulong uVar16;
  ulong uVar17;
  ulong uVar18;
  uint uVar19;
  ulong uVar20;
  long lVar21;
  ulong uVar22;
  uint uVar23;
  int *piVar24;
  long lVar25;
  ulong uVar26;
  long *unaff_x19;
  undefined8 unaff_x20;
  undefined1 *puVar27;
  undefined8 uVar28;
  long lVar29;
  ulong auStack_50 [4];
  long *plStack_30;
  long lStack_28;
  ulong uStack_20;
  long lStack_18;
  
  lStack_18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar29 = *param_2;
  lVar1 = param_2[1];
  lVar21 = param_2[2];
  piVar24 = (int *)(param_1 + 4);
  lVar25 = 8;
  do {
    iVar2 = piVar24[-1];
    iVar3 = *piVar24;
    iVar4 = piVar24[1];
    plVar12 = (long *)((long)auStack_50 + lVar25 + 8);
    uVar9 = (lVar29 >> 0x10) * (long)iVar2 + (lVar1 >> 0x10) * (long)iVar3 +
            (lVar21 >> 0x10) * (long)iVar4;
    *(ulong *)((long)auStack_50 + lVar25) = uVar9;
    *plVar12 = (long)(int)((uint)lVar29 & 0xffff) * (long)iVar2 +
               (long)(int)((uint)lVar1 & 0xffff) * (long)iVar3 +
               (long)(int)((uint)lVar21 & 0xffff) * (long)iVar4;
    lVar25 = lVar25 + 0x10;
    piVar24 = piVar24 + 3;
  } while (lVar25 != 0x38);
  lVar25 = lStack_28 + ((long)uStack_20 >> 0x10);
  uVar26 = uStack_20 & 0xffff;
  if ((uVar26 == 0) && (lVar25 == 0x10000)) {
    uVar19 = 0;
    param_3[1] = auStack_50[3] + ((long)(plStack_30 + 0x1000) >> 0x10);
    *param_3 = auStack_50[1] + ((long)(auStack_50[2] + 0x8000) >> 0x10);
    goto LAB_1097bf4e4;
  }
  if (lVar25 != 0 || uVar26 != 0) {
    uVar15 = (uint)((ulong)lVar25 >> 0x20);
    uVar19 = uVar15 ^ (int)uVar15 >> 0x1f;
    lVar29 = (long)auStack_50[2] >> 0x10;
    if (uVar19 == 0) {
      uVar26 = uVar26 | lVar25 * 0x10000;
      uVar18 = (long)(auStack_50[1] + lVar29) >> 0x20;
      uVar16 = (ulong)(uint)((int)auStack_50[2] << 0x10) | auStack_50[1] + lVar29 << 0x20;
      uVar17 = -uVar26;
      if (-1 < (long)uVar26) {
        uVar17 = uVar26;
      }
      uVar19 = uVar15 >> 0xf & 1;
      uVar15 = uVar19;
      if ((long)uVar18 < 0) {
        uVar18 = -uVar18 - (ulong)(uVar16 != 0);
        uVar16 = -uVar16;
        uVar15 = uVar19 ^ 1;
      }
      uVar26 = 0;
      if (uVar17 != 0) {
        uVar26 = uVar18 / uVar17;
      }
      uVar10 = uVar16 >> 0x30 | (uVar18 - uVar26 * uVar17) * 0x10000;
      uVar18 = 0;
      if (uVar17 != 0) {
        uVar18 = uVar10 / uVar17;
      }
      uVar10 = uVar16 >> 0x20 & 0xffff | (uVar10 - uVar18 * uVar17) * 0x10000;
      uVar20 = 0;
      if (uVar17 != 0) {
        uVar20 = uVar10 / uVar17;
      }
      uVar16 = uVar16 >> 0x10 & 0xffff | (uVar10 - uVar20 * uVar17) * 0x10000;
      uVar10 = 0;
      if (uVar17 != 0) {
        uVar10 = uVar16 / uVar17;
      }
      uVar22 = (uVar16 - uVar10 * uVar17) * 0x10000;
      uVar16 = 0;
      if (uVar17 != 0) {
        uVar16 = uVar22 / uVar17;
      }
      uVar18 = uVar16 + (uVar20 * 0x10000 + (uVar18 << 0x20) + uVar10) * 0x10000;
      if (((uVar22 - uVar16 * uVar17) * 2 < uVar17) ||
         (bVar8 = uVar18 != 0xffffffffffffffff, uVar18 = uVar18 + 1, bVar8)) {
        if (uVar15 != 0) {
          uVar26 = -uVar26 - (ulong)(uVar18 != 0);
          goto LAB_1097bf3f4;
        }
      }
      else {
        uVar18 = 0;
        if (uVar15 == 0) {
          uVar26 = uVar26 + 1;
        }
        else {
          uVar26 = ~uVar26;
LAB_1097bf3f4:
          uVar18 = -uVar18;
        }
      }
      uVar16 = (long)uVar26 >> 0x3f ^ 0x7fffffffffffffff;
      if ((long)uVar18 >> 0x3f == uVar26) {
        uVar16 = uVar18;
      }
      *param_3 = uVar16;
      lVar25 = auStack_50[3] + ((long)plStack_30 >> 0x10);
      uVar16 = lVar25 >> 0x20;
      uVar10 = (ulong)(uint)((int)plStack_30 << 0x10) | lVar25 << 0x20;
      if ((long)uVar16 < 0) {
        uVar16 = -uVar16 - (ulong)(uVar10 != 0);
        uVar10 = -uVar10;
        uVar19 = uVar19 ^ 1;
      }
      uVar20 = 0;
      if (uVar17 != 0) {
        uVar20 = uVar16 / uVar17;
      }
      uVar22 = uVar10 >> 0x30 | (uVar16 - uVar20 * uVar17) * 0x10000;
      uVar16 = 0;
      if (uVar17 != 0) {
        uVar16 = uVar22 / uVar17;
      }
      uVar22 = uVar10 >> 0x20 & 0xffff | (uVar22 - uVar16 * uVar17) * 0x10000;
      uVar11 = 0;
      if (uVar17 != 0) {
        uVar11 = uVar22 / uVar17;
      }
      uVar10 = uVar10 >> 0x10 & 0xffff | (uVar22 - uVar11 * uVar17) * 0x10000;
      uVar22 = 0;
      if (uVar17 != 0) {
        uVar22 = uVar10 / uVar17;
      }
      uVar5 = (uVar10 - uVar22 * uVar17) * 0x10000;
      uVar10 = 0;
      if (uVar17 != 0) {
        uVar10 = uVar5 / uVar17;
      }
      uVar16 = uVar10 + (uVar11 * 0x10000 + (uVar16 << 0x20) + uVar22) * 0x10000;
      if (((uVar5 - uVar10 * uVar17) * 2 < uVar17) ||
         (bVar8 = uVar16 != 0xffffffffffffffff, uVar16 = uVar16 + 1, bVar8)) {
        if (uVar19 != 0) {
          uVar20 = -uVar20 - (ulong)(uVar16 != 0);
          goto LAB_1097bf4bc;
        }
      }
      else {
        uVar16 = 0;
        if (uVar19 == 0) {
          uVar20 = uVar20 + 1;
        }
        else {
          uVar20 = ~uVar20;
LAB_1097bf4bc:
          uVar16 = -uVar16;
        }
      }
      bVar8 = (long)uVar16 >> 0x3f != uVar20;
      uVar17 = (long)uVar20 >> 0x3f ^ 0x7fffffffffffffff;
      if (!bVar8) {
        uVar17 = uVar16;
      }
      bVar7 = (long)uVar18 >> 0x3f == uVar26;
    }
    else {
      uVar9 = 0;
      do {
        uVar17 = uVar9;
        uVar9 = uVar17 + 1;
        bVar8 = 1 < uVar19;
        uVar19 = uVar19 >> 1;
      } while (bVar8);
      uVar18 = 0x20 - uVar9;
      uVar16 = 0x10 - uVar9;
      iVar2 = (int)uVar9;
      uVar19 = iVar2 - 1;
      if (uVar19 < 0xf) {
        uVar9 = (lVar25 << (uVar16 & 0x3f)) + (uVar26 >> (uVar9 & 0x3f));
        uVar26 = (long)(auStack_50[1] + lVar29) >> (uVar17 + 0x21 & 0x3f);
        lVar29 = auStack_50[1] + lVar29 << (uVar18 & 0x3f);
LAB_1097bf13c:
        bVar8 = false;
        uVar10 = ((auStack_50[2] & 0xffff) << (uVar16 & 0x3f)) + lVar29;
      }
      else {
        uVar9 = lVar25 >> ((ulong)(iVar2 - 0x10) & 0x3f);
        lVar29 = auStack_50[1] + lVar29;
        if (uVar19 < 0x1f) {
          uVar26 = lVar29 >> (uVar17 + 0x21 & 0x3f);
          lVar29 = lVar29 << (uVar18 & 0x3f);
          if (0xf < (uint)uVar18) goto LAB_1097bf13c;
          bVar8 = false;
          uVar10 = lVar29 + ((auStack_50[2] & 0xffff) >> ((ulong)(iVar2 - 0x10) & 0x3f));
        }
        else {
          uVar10 = lVar29 >> (uVar17 - 0x1f & 0x3f);
          uVar26 = (long)uVar10 >> 0x3f;
          bVar8 = true;
        }
      }
      uVar20 = -uVar9;
      if (-1 < (long)uVar9) {
        uVar20 = uVar9;
      }
      uVar23 = (uint)(uVar9 >> 0x20);
      uVar15 = uVar23 >> 0x1f;
      uVar23 = uVar23 >> 0x1f;
      uVar14 = uVar15;
      if ((long)uVar26 < 0) {
        uVar26 = -uVar26 - (ulong)(uVar10 != 0);
        uVar10 = -uVar10;
        uVar14 = uVar23 ^ 1;
      }
      uVar22 = 0;
      if (uVar20 != 0) {
        uVar22 = uVar26 / uVar20;
      }
      uVar26 = uVar10 >> 0x30 | (uVar26 - uVar22 * uVar20) * 0x10000;
      uVar9 = 0;
      if (uVar20 != 0) {
        uVar9 = uVar26 / uVar20;
      }
      uVar26 = uVar10 >> 0x20 & 0xffff | (uVar26 - uVar9 * uVar20) * 0x10000;
      uVar11 = 0;
      if (uVar20 != 0) {
        uVar11 = uVar26 / uVar20;
      }
      uVar26 = uVar10 >> 0x10 & 0xffff | (uVar26 - uVar11 * uVar20) * 0x10000;
      uVar5 = 0;
      if (uVar20 != 0) {
        uVar5 = uVar26 / uVar20;
      }
      uVar26 = uVar10 & 0xffff | (uVar26 - uVar5 * uVar20) * 0x10000;
      uVar10 = 0;
      if (uVar20 != 0) {
        uVar10 = uVar26 / uVar20;
      }
      uVar11 = uVar10 + (uVar11 * 0x10000 + (uVar9 << 0x20) + uVar5) * 0x10000;
      if (((uVar26 - uVar10 * uVar20) * 2 < uVar20) ||
         (bVar7 = uVar11 != 0xffffffffffffffff, uVar11 = uVar11 + 1, bVar7)) {
        if (uVar14 != 0) {
          uVar22 = -uVar22 - (ulong)(uVar11 != 0);
          goto LAB_1097bf1f4;
        }
      }
      else {
        uVar11 = 0;
        if (uVar14 == 0) {
          uVar22 = uVar22 + 1;
        }
        else {
          uVar22 = ~uVar22;
LAB_1097bf1f4:
          uVar11 = -uVar11;
        }
      }
      uVar9 = (long)uVar22 >> 0x3f ^ 0x7fffffffffffffff;
      if ((long)uVar11 >> 0x3f == uVar22) {
        uVar9 = uVar11;
      }
      *param_3 = uVar9;
      uVar9 = auStack_50[3] + ((long)plStack_30 >> 0x10);
      if (bVar8) {
        uVar17 = (long)uVar9 >> (uVar17 - 0x1f & 0x3f);
        uVar26 = (long)uVar17 >> 0x3f;
      }
      else {
        uVar26 = (long)uVar9 >> (uVar17 + 0x21 & 0x3f);
        if (uVar19 < 0x10) {
          uVar17 = ((ulong)plStack_30 & 0xffff) << (uVar16 & 0x3f);
        }
        else {
          uVar17 = ((ulong)plStack_30 & 0xffff) >> ((ulong)(iVar2 - 0x10) & 0x3f);
        }
        uVar17 = (uVar9 << (uVar18 & 0x3f)) + uVar17;
      }
      if ((long)uVar26 < 0) {
        uVar26 = -uVar26 - (ulong)(uVar17 != 0);
        uVar17 = -uVar17;
        uVar15 = uVar23 ^ 1;
      }
      uVar16 = 0;
      if (uVar20 != 0) {
        uVar16 = uVar26 / uVar20;
      }
      uVar18 = uVar17 >> 0x30 | (uVar26 - uVar16 * uVar20) * 0x10000;
      uVar26 = 0;
      if (uVar20 != 0) {
        uVar26 = uVar18 / uVar20;
      }
      uVar18 = uVar17 >> 0x20 & 0xffff | (uVar18 - uVar26 * uVar20) * 0x10000;
      uVar10 = 0;
      if (uVar20 != 0) {
        uVar10 = uVar18 / uVar20;
      }
      uVar18 = uVar17 >> 0x10 & 0xffff | (uVar18 - uVar10 * uVar20) * 0x10000;
      uVar5 = 0;
      if (uVar20 != 0) {
        uVar5 = uVar18 / uVar20;
      }
      uVar17 = uVar17 & 0xffff | (uVar18 - uVar5 * uVar20) * 0x10000;
      uVar18 = 0;
      if (uVar20 != 0) {
        uVar18 = uVar17 / uVar20;
      }
      uVar26 = uVar18 + (uVar10 * 0x10000 + (uVar26 << 0x20) + uVar5) * 0x10000;
      if (((uVar17 - uVar18 * uVar20) * 2 < uVar20) ||
         (bVar8 = uVar26 != 0xffffffffffffffff, uVar26 = uVar26 + 1, bVar8)) {
        if (uVar15 != 0) {
          uVar16 = -uVar16 - (ulong)(uVar26 != 0);
          goto LAB_1097bf33c;
        }
      }
      else {
        uVar26 = 0;
        if (uVar15 == 0) {
          uVar16 = uVar16 + 1;
        }
        else {
          uVar16 = ~uVar16;
LAB_1097bf33c:
          uVar26 = -uVar26;
        }
      }
      bVar8 = (long)uVar26 >> 0x3f != uVar16;
      uVar17 = (long)uVar16 >> 0x3f ^ 0x7fffffffffffffff;
      if (!bVar8) {
        uVar17 = uVar26;
      }
      bVar7 = (long)uVar11 >> 0x3f == uVar22;
      plVar12 = plStack_30;
    }
    uVar19 = (uint)bVar8;
    if (!bVar7) {
      uVar19 = 1;
    }
    param_3[1] = uVar17;
    goto LAB_1097bf4e4;
  }
  uVar26 = auStack_50[1] + ((long)(auStack_50[2] + 0x8000) >> 0x10);
  uVar17 = auStack_50[3] + ((long)(plStack_30 + 0x1000) >> 0x10);
  *param_3 = uVar26;
  param_3[1] = uVar17;
  if ((long)uVar26 < 1) {
    if ((long)uVar26 < 0) {
      uVar26 = 0x8000000000000000;
      goto LAB_1097bf0dc;
    }
  }
  else {
    uVar26 = 0x7fffffffffffffff;
LAB_1097bf0dc:
    *param_3 = uVar26;
  }
  if ((long)uVar17 < 1) {
    if ((long)uVar17 < 0) {
      uVar26 = 0x8000000000000000;
      goto LAB_1097bf260;
    }
  }
  else {
    uVar26 = 0x7fffffffffffffff;
LAB_1097bf260:
    param_3[1] = uVar26;
  }
  uVar19 = 1;
LAB_1097bf4e4:
  param_3[2] = 0x10000;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_18) {
    return (ulong)(uVar19 ^ 1);
  }
  uVar28 = 0x1097bf550;
  ___stack_chk_fail();
  puVar6 = auStack_50;
  while( true ) {
    puVar27 = (undefined1 *)((long)register0x00000008 + -0x10);
    register0x00000008 = (BADSPACEBASE *)((long)puVar6 + -0x50);
    *(undefined1 **)((long)puVar6 + -0x10) = puVar27;
    *(undefined8 *)((long)puVar6 + -8) = uVar28;
    *(undefined8 *)((long)puVar6 + -0x18) = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
    lVar29 = *plVar12;
    lVar1 = plVar12[1];
    lVar21 = plVar12[2];
    piVar24 = (int *)(uVar9 + 4);
    lVar25 = 8;
    do {
      iVar2 = piVar24[-1];
      iVar3 = *piVar24;
      iVar4 = piVar24[1];
      plVar13 = (long *)((long)puVar6 + lVar25 + -0x48);
      uVar9 = (lVar29 >> 0x10) * (long)iVar2 + (lVar1 >> 0x10) * (long)iVar3 +
              (lVar21 >> 0x10) * (long)iVar4;
      plVar13[-1] = uVar9;
      *plVar13 = (long)(int)((uint)lVar29 & 0xffff) * (long)iVar2 +
                 (long)(int)((uint)lVar1 & 0xffff) * (long)iVar3 +
                 (long)(int)((uint)lVar21 & 0xffff) * (long)iVar4;
      lVar25 = lVar25 + 0x10;
      piVar24 = piVar24 + 3;
    } while (lVar25 != 0x38);
    lVar25 = *(long *)((long)puVar6 + -0x48);
    lVar29 = *(long *)((long)puVar6 + -0x40);
    param_3[1] = *(long *)((long)puVar6 + -0x38) +
                 (*(long *)((long)puVar6 + -0x30) + 0x8000 >> 0x10);
    *param_3 = lVar25 + (lVar29 + 0x8000 >> 0x10);
    param_3[2] = *(long *)((long)puVar6 + -0x28) +
                 (*(long *)((long)puVar6 + -0x20) + 0x8000 >> 0x10);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)((long)puVar6 + -0x18)) break;
    ___stack_chk_fail();
    plVar12 = (long *)((long)puVar6 + -0x90);
    param_3 = (ulong *)((long)puVar6 + -0x90);
    *(undefined8 *)((long)puVar6 + -0x70) = unaff_x20;
    *(long **)((long)puVar6 + -0x68) = unaff_x19;
    *(undefined1 **)((long)puVar6 + -0x60) = (undefined1 *)((long)puVar6 + -0x10);
    *(code **)((long)puVar6 + -0x58) = FUN_1097bf628;
    lVar25 = *plVar13;
    *(long *)((long)puVar6 + -0x88) = (long)(int)((ulong)lVar25 >> 0x20);
    *(long *)((long)puVar6 + -0x90) = (long)(int)lVar25;
    *(long *)((long)puVar6 + -0x80) = (long)(int)plVar13[1];
    uVar28 = 0x1097bf65c;
    puVar6 = (ulong *)((long)puVar6 + -0x90);
    unaff_x19 = plVar13;
  }
  return uVar9;
}



/* Entry: 1097bf628; end: 1097bf76b;  */

bool FUN_1097bf628(undefined8 param_1,int *param_2)

{
  long lStack_40;
  long lStack_38;
  long lStack_30;
  
  lStack_40 = (long)(int)*(undefined8 *)param_2;
  lStack_38 = (long)(int)((ulong)*(undefined8 *)param_2 >> 0x20);
  lStack_30 = (long)param_2[2];
  func_0x0001097bf550(param_1,&lStack_40,&lStack_40);
  *param_2 = (int)lStack_40;
  param_2[1] = (int)lStack_38;
  param_2[2] = (int)lStack_30;
  return (lStack_40 == (int)lStack_40 && lStack_38 + 0x80000000U >> 0x20 == 0) &&
         lStack_30 + 0x80000000U >> 0x20 == 0;
}



/* Entry: 1097bf76c; end: 1097bf76f;  */

void FUN_1097bf76c(void)

{
  return;
}



/* Entry: 1097bf770; end: 1097bf843;  */

void FUN_1097bf770(undefined8 *param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  int *piVar5;
  
  piVar3 = (int *)*param_1;
  piVar4 = (int *)param_1[1];
  iVar1 = *(int *)(param_1 + 3);
  if (*piVar3 == 4) {
    iVar2 = piVar3[0x26];
  }
  else {
    (**(code **)(piVar3 + 0x34))(piVar3,0,0);
    iVar2 = (int)piVar3;
  }
  if (0 < iVar1) {
    piVar3 = piVar4;
    do {
      piVar5 = piVar3 + 1;
      *piVar3 = iVar2;
      piVar3 = piVar5;
    } while (piVar5 < piVar4 + iVar1);
  }
  return;
}



/* Entry: 1097bf844; end: 1097bf8bb;  */

void FUN_1097bf844(long *param_1)

{
  param_1[1] = *(long *)(*param_1 + 0xa8) +
               (long)(*(int *)(*param_1 + 0xb8) * *(int *)((long)param_1 + 0x14)) * 4 +
               (long)(int)param_1[2] * 4;
  return;
}



/* Entry: 1097bf8bc; end: 1097bf9a7;  */

int * FUN_1097bf8bc(int *param_1,int *param_2,int param_3,int param_4,undefined8 param_5,
                   undefined8 param_6)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  long lVar6;
  int *piVar7;
  double dVar8;
  
  piVar7 = param_1;
  FUN_1097bddbc();
  if (piVar7 != (int *)0x0) {
    piVar5 = piVar7;
    FUN_1097bdb68(piVar7,param_5,param_6);
    if ((int)piVar5 == 0) {
      _free(piVar7);
      piVar7 = (int *)0x0;
    }
    else {
      *piVar7 = 3;
      iVar1 = *param_1;
      iVar3 = param_1[1];
      piVar7[0x28] = iVar1;
      piVar7[0x29] = iVar3;
      iVar2 = *param_2;
      iVar4 = param_2[1];
      piVar7[0x2a] = param_3;
      piVar7[0x2b] = iVar2;
      piVar7[0x2c] = iVar4;
      piVar7[0x2d] = param_4;
      iVar2 = iVar2 - iVar1;
      iVar4 = iVar4 - iVar3;
      piVar7[0x2e] = iVar2;
      piVar7[0x2f] = iVar4;
      param_4 = param_4 - param_3;
      piVar7[0x30] = param_4;
      lVar6 = (long)iVar2 * (long)iVar2 + (long)param_4 * (long)-param_4 + (long)iVar4 * (long)iVar4
      ;
      dVar8 = (double)lVar6;
      *(double *)(piVar7 + 0x32) = dVar8;
      if (lVar6 != 0) {
        *(double *)(piVar7 + 0x34) = 65536.0 / dVar8;
      }
      *(double *)(piVar7 + 0x36) = (double)param_3 * -65536.0;
    }
  }
  return piVar7;
}



/* Entry: 1097bf9a8; end: 1097bfc6f;  */

ulong FUN_1097bf9a8(long *param_1,int *param_2,uint param_3,undefined8 param_4)

{
  ulong uVar1;
  long lVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int *piVar6;
  ulong uVar7;
  int iVar8;
  int iVar9;
  long lVar10;
  int iVar11;
  int *piVar12;
  long lVar13;
  int iVar14;
  long lVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  undefined8 uStack_c0;
  int iStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  
  lVar13 = param_1[3];
  lVar2 = *param_1;
  uVar7 = param_1[1];
  uStack_c0 = CONCAT44((int)((ulong)param_1[2] >> 0x20) << 0x10,(int)param_1[2] << 0x10) |
              0x800000008000;
  iStack_b8 = 0x10000;
  uStack_74 = *(undefined4 *)(lVar2 + 0x40);
  uStack_80 = *(undefined8 *)(lVar2 + 0x98);
  uStack_78 = *(undefined4 *)(lVar2 + 0x90);
  uStack_a8 = 0;
  uStack_b0 = 0;
  uStack_98 = 0;
  uStack_a0 = 0;
  uStack_88 = 0x10000;
  uStack_90 = 0;
  uStack_70 = 1;
  piVar12 = *(int **)(lVar2 + 0x38);
  if (piVar12 == (int *)0x0) {
    iVar3 = 0;
    iVar14 = 0x10000;
    iVar11 = 0;
  }
  else {
    piVar6 = piVar12;
    FUN_1097bf628(piVar12,&uStack_c0);
    if ((int)piVar6 == 0) {
      return uVar7;
    }
    iVar14 = *piVar12;
    iVar3 = piVar12[3];
    iVar11 = piVar12[6];
  }
  uVar4 = param_3 >> 2;
  iVar8 = (int)lVar13 * uVar4;
  uVar1 = uVar7 + (long)iVar8 * 4;
  if ((iVar11 == 0) && (iStack_b8 == 0x10000)) {
    uStack_c0._0_4_ = (int)uStack_c0 - *(int *)(lVar2 + 0xa0);
    uStack_c0._4_4_ = uStack_c0._4_4_ - *(int *)(lVar2 + 0xa4);
    if (0 < iVar8) {
      iVar11 = *(int *)(lVar2 + 0xb8);
      iVar8 = *(int *)(lVar2 + 0xbc);
      lVar10 = ((long)iVar14 + (long)(int)uStack_c0 * 2) * (long)iVar14 +
               ((long)iVar3 + (long)uStack_c0._4_4_ * 2) * (long)iVar3;
      iVar9 = *(int *)(lVar2 + 0xa8);
      lVar13 = ((long)uStack_c0._4_4_ * (long)uStack_c0._4_4_ +
               (long)(int)uStack_c0 * (long)(int)uStack_c0) - (long)iVar9 * (long)iVar9;
      lVar15 = (long)iVar11 * (long)(int)uStack_c0 + (long)iVar8 * (long)uStack_c0._4_4_ +
               (long)*(int *)(lVar2 + 0xc0) * (long)iVar9;
      do {
        piVar12 = param_2;
        if ((param_2 == (int *)0x0) || (piVar12 = param_2 + 1, *param_2 != 0)) {
          FUN_1097bfc70(*(undefined8 *)(lVar2 + 200),(double)lVar15,(double)lVar13,
                        *(undefined8 *)(lVar2 + 0xd0),(double)*(int *)(lVar2 + 0xc0),
                        *(undefined8 *)(lVar2 + 0xd8),&uStack_b0,*(undefined4 *)(lVar2 + 0x40),
                        param_3,param_4,uVar7);
        }
        lVar13 = lVar13 + lVar10;
        lVar10 = lVar10 + ((long)iVar3 * (long)iVar3 + (long)iVar14 * (long)iVar14) * 2;
        uVar7 = uVar7 + (ulong)uVar4 * 4;
        lVar15 = lVar15 + (long)iVar11 * (long)iVar14 + (long)iVar8 * (long)iVar3;
        param_2 = piVar12;
      } while (uVar7 < uVar1);
    }
  }
  else if (0 < iVar8) {
    iVar8 = (int)uStack_c0;
    iVar9 = uStack_c0._4_4_;
    do {
      iVar5 = iStack_b8;
      piVar12 = param_2;
      if ((param_2 == (int *)0x0) || (piVar12 = param_2 + 1, *param_2 != 0)) {
        if (iStack_b8 == 0) {
          _bzero(uVar7,param_3);
        }
        else {
          dVar17 = (double)iVar8 * (65536.0 / (double)iStack_b8) - (double)*(int *)(lVar2 + 0xa0);
          dVar16 = (double)iVar9 * (65536.0 / (double)iStack_b8) - (double)*(int *)(lVar2 + 0xa4);
          dVar18 = (double)*(int *)(lVar2 + 0xa8);
          FUN_1097bfc70(*(undefined8 *)(lVar2 + 200),
                        dVar16 * (double)*(int *)(lVar2 + 0xbc) +
                        (double)*(int *)(lVar2 + 0xb8) * dVar17 +
                        (double)*(int *)(lVar2 + 0xc0) * dVar18,
                        dVar16 * dVar16 + dVar17 * dVar17 + dVar18 * (double)-*(int *)(lVar2 + 0xa8)
                        ,*(undefined8 *)(lVar2 + 0xd0),(double)*(int *)(lVar2 + 0xc0),
                        *(undefined8 *)(lVar2 + 0xd8),&uStack_b0,*(undefined4 *)(lVar2 + 0x40),
                        param_3,param_4,uVar7);
        }
      }
      iVar8 = iVar8 + iVar14;
      iVar9 = iVar9 + iVar3;
      uStack_c0 = CONCAT44(iVar9,iVar8);
      iStack_b8 = iVar5 + iVar11;
      uVar7 = uVar7 + (ulong)uVar4 * 4;
      param_2 = piVar12;
    } while (uVar7 < uVar1);
  }
  *(int *)((long)param_1 + 0x14) = *(int *)((long)param_1 + 0x14) + 1;
  return param_1[1];
}



/* Entry: 1097bfc70; end: 1097bfd2b;  */

void FUN_1097bfc70(double param_1,double param_2,double param_3,double param_4,double param_5,
                  double param_6,undefined8 param_7,int param_8,undefined4 param_9,
                  code *UNRECOVERED_JUMPTABLE,undefined8 param_11)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  double dVar5;
  double dVar6;
  
  if (param_1 == 0.0) {
    if (param_2 == 0.0) goto _bzero;
    param_2 = (param_3 * 32768.0) / param_2;
    if (param_8 == 0) {
      bVar1 = NAN(param_2);
      bVar3 = param_2 < 0.0;
LAB_1097bfd0c:
      bVar2 = false;
      bVar4 = true;
      if (bVar3 == bVar1) {
        bVar2 = false;
        bVar4 = true;
        if (!NAN(param_2)) {
          bVar2 = param_2 == 65536.0;
          bVar4 = 65536.0 <= param_2;
        }
      }
      dVar6 = param_2;
      if (bVar4 && !bVar2) goto _bzero;
      goto LAB_1097bfd24;
    }
  }
  else {
    dVar5 = -(param_3 * param_1) + param_2 * param_2;
    if (dVar5 < 0.0) goto _bzero;
    dVar5 = SQRT(dVar5);
    dVar6 = param_4 * (param_2 + dVar5);
    param_2 = param_4 * (param_2 - dVar5);
    if (param_8 == 0) {
      bVar1 = false;
      bVar3 = true;
      if (0.0 <= dVar6) {
        bVar1 = false;
        bVar3 = true;
        if (!NAN(dVar6)) {
          bVar1 = dVar6 == 65536.0;
          bVar3 = 65536.0 <= dVar6;
        }
      }
      if (!bVar3 || bVar1) goto LAB_1097bfd24;
      bVar3 = false;
      bVar1 = true;
      if (!NAN(param_2)) {
        bVar3 = param_2 < 0.0;
        bVar1 = false;
      }
      goto LAB_1097bfd0c;
    }
    if (param_6 <= param_5 * dVar6) goto LAB_1097bfd24;
  }
  dVar6 = param_2;
  if (param_2 * param_5 < param_6) {
_bzero:
                    /* WARNING: Could not recover jumptable at 0x00010bdbdc4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__bzero_11034bf90)(param_11,param_9);
    return;
  }
LAB_1097bfd24:
                    /* WARNING: Could not recover jumptable at 0x0001097bfd28. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(param_7,(long)dVar6,param_11);
  return;
}



/* Entry: 1097bfd2c; end: 1097bfecb;  */

void FUN_1097bfd2c(int *param_1,int param_2,int param_3,int param_4,int param_5)

{
  undefined *puVar1;
  
  *param_1 = param_2;
  param_1[1] = param_3;
  param_4 = param_4 + param_2;
  param_5 = param_5 + param_3;
  param_1[2] = param_4;
  param_1[3] = param_5;
  if ((param_2 < param_4 && param_5 != param_3) && (param_4 <= param_2 || param_3 <= param_5)) {
    puVar1 = (undefined *)0x0;
  }
  else {
    if ((param_5 < param_3 || param_4 < param_2) && (iRam000000011382add8 < 10)) {
      _fprintf(*(undefined8 *)PTR____stderrp_11034bdc8,&UNK_10f5808c0);
      iRam000000011382add8 = iRam000000011382add8 + 1;
    }
    param_1[0] = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[3] = 0;
    puVar1 = &UNK_10dffca88;
  }
  *(undefined **)(param_1 + 4) = puVar1;
  return;
}



/* Entry: 1097bfecc; end: 1097c009f;  */

/* WARNING: Type propagation algorithm not settling */

int * FUN_1097bfecc(int *param_1,int *param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  long *plVar9;
  int *piVar10;
  long *plVar11;
  undefined *puVar12;
  long lVar13;
  undefined8 uVar14;
  
  puVar12 = *(undefined **)(param_2 + 4);
  if (((puVar12 != (undefined *)0x0) && (*(long *)(puVar12 + 8) == 0)) ||
     ((lVar13 = *(long *)(param_3 + 4), lVar13 != 0 && (*(long *)(lVar13 + 8) == 0)))) {
LAB_1097bff74:
    if ((*(long **)(param_1 + 4) != (long *)0x0) && (**(long **)(param_1 + 4) != 0)) {
      _free();
      puVar12 = *(undefined **)(param_2 + 4);
    }
    *(undefined8 *)(param_1 + 2) = *(undefined8 *)param_1;
    if ((puVar12 != &UNK_10dffca98) && (*(undefined **)(param_3 + 4) != &UNK_10dffca98)) {
      *(undefined **)(param_1 + 4) = &UNK_10dffca88;
      return (int *)0x1;
    }
    *(undefined **)(param_1 + 4) = &UNK_10dffca98;
    return (int *)0x0;
  }
  iVar1 = param_2[2];
  iVar2 = *param_3;
  if (iVar1 <= iVar2) goto LAB_1097bff74;
  iVar3 = *param_2;
  iVar4 = param_3[2];
  if (iVar4 <= iVar3) goto LAB_1097bff74;
  iVar5 = param_2[3];
  iVar6 = param_3[1];
  if (iVar5 <= iVar6) goto LAB_1097bff74;
  iVar7 = param_2[1];
  iVar8 = param_3[3];
  if (iVar8 <= iVar7) goto LAB_1097bff74;
  if (puVar12 == (undefined *)0x0) {
    if (lVar13 == 0) {
      if (iVar3 <= iVar2) {
        iVar3 = iVar2;
      }
      if (iVar7 <= iVar6) {
        iVar7 = iVar6;
      }
      *param_1 = iVar3;
      param_1[1] = iVar7;
      if (iVar4 <= iVar1) {
        iVar1 = iVar4;
      }
      if (iVar8 <= iVar5) {
        iVar5 = iVar8;
      }
      param_1[2] = iVar1;
      param_1[3] = iVar5;
      if ((*(long **)(param_1 + 4) != (long *)0x0) && (**(long **)(param_1 + 4) != 0)) {
        _free();
      }
      param_1[4] = 0;
      param_1[5] = 0;
      return (int *)0x1;
    }
    if ((((iVar2 < iVar3) || (iVar1 < iVar4)) || (iVar6 < iVar7)) ||
       (piVar10 = param_3, iVar5 < iVar8)) {
LAB_1097c000c:
      piVar10 = param_2;
      if (param_2 != param_3) {
        piVar10 = param_1;
        FUN_1097c00a0(param_1,param_2,param_3,0x1097c0fe8,0,0);
        if ((int)piVar10 != 0) {
          FUN_1097c1168(param_1);
          return (int *)0x1;
        }
        return piVar10;
      }
    }
  }
  else if ((((lVar13 != 0) || (iVar3 < iVar2)) || (iVar4 < iVar1)) ||
          ((iVar7 < iVar6 || (piVar10 = param_2, iVar8 < iVar5)))) goto LAB_1097c000c;
  if (param_1 == piVar10) {
    return (int *)0x1;
  }
  uVar14 = *(undefined8 *)piVar10;
  *(undefined8 *)(param_1 + 2) = *(undefined8 *)(piVar10 + 2);
  *(undefined8 *)param_1 = uVar14;
  plVar11 = *(long **)(piVar10 + 4);
  if ((plVar11 == (long *)0x0) || (*plVar11 == 0)) {
    if ((*(long **)(param_1 + 4) != (long *)0x0) && (**(long **)(param_1 + 4) != 0)) {
      _free();
      plVar11 = *(long **)(piVar10 + 4);
    }
    *(long **)(param_1 + 4) = plVar11;
    return (int *)0x1;
  }
  plVar9 = *(long **)(param_1 + 4);
  if (plVar9 != (long *)0x0) {
    lVar13 = plVar11[1];
    if (lVar13 <= *plVar9) goto LAB_1097bfe68;
    if (*plVar9 != 0) {
      _free();
      plVar11 = *(long **)(piVar10 + 4);
    }
  }
  lVar13 = plVar11[1] * 0x10;
  if ((ulong)plVar11[1] >> 0x1c == 0 && lVar13 != 0xfffffff0) {
    plVar9 = (long *)(lVar13 + 0x10);
    _malloc();
    *(long **)(param_1 + 4) = plVar9;
    if (plVar9 != (long *)0x0) {
      plVar11 = *(long **)(piVar10 + 4);
      lVar13 = plVar11[1];
      *plVar9 = lVar13;
LAB_1097bfe68:
      plVar9[1] = lVar13;
      _memmove(plVar9 + 2,plVar11 + 2,lVar13 << 4);
      return (int *)0x1;
    }
  }
  param_1[0] = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *(undefined **)(param_1 + 4) = &UNK_10dffca98;
  return (int *)0x0;
}



/* Entry: 1097c00a0; end: 1097c1167;  */

undefined8
FUN_1097c00a0(ulong *param_1,ulong *param_2,ulong *param_3,code *param_4,int param_5,int param_6)

{
  ulong *puVar1;
  ulong *puVar2;
  ulong *puVar3;
  undefined4 uVar4;
  uint uVar5;
  bool bVar6;
  ulong *puVar7;
  ulong *puVar8;
  ulong *puVar9;
  ulong *puVar10;
  uint uVar11;
  ulong uVar12;
  ulong *puVar13;
  ulong *puVar14;
  ulong *puVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  undefined *puVar20;
  long lVar21;
  long lVar22;
  ulong uVar23;
  long *plVar24;
  int iVar25;
  undefined *puVar26;
  long lVar27;
  long lVar28;
  long lVar29;
  long lVar30;
  long lVar31;
  int *piVar32;
  undefined4 *puVar33;
  undefined4 *puVar34;
  int *piVar35;
  long *plVar36;
  ulong uVar37;
  undefined8 uVar38;
  int iVar39;
  int iVar40;
  long lVar41;
  long lVar42;
  ulong uVar43;
  ulong uStack_a8;
  
  puVar26 = (undefined *)param_2[2];
  if ((puVar26 == &UNK_10dffca98) || (puVar20 = (undefined *)param_3[2], puVar20 == &UNK_10dffca98))
  {
    if (((long *)param_1[2] != (long *)0x0) && (*(long *)param_1[2] != 0)) {
      _free();
    }
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = (ulong)&UNK_10dffca98;
    return 0;
  }
  if (puVar26 == (undefined *)0x0) {
    iVar19 = 1;
    puVar10 = param_2;
  }
  else {
    iVar19 = *(int *)(puVar26 + 8);
    puVar10 = (ulong *)(puVar26 + 0x10);
  }
  puVar9 = (ulong *)(puVar20 + 0x10);
  if (puVar20 == (undefined *)0x0) {
    iVar40 = 1;
    puVar9 = param_3;
  }
  else {
    iVar40 = *(int *)(puVar20 + 8);
  }
  if (iVar19 == 0) {
    FUN_1097c2c3c(&UNK_10f5803ad,&UNK_10f580420);
  }
  if (iVar40 == 0) {
    FUN_1097c2c3c(&UNK_10f5803ad,&UNK_10f580446);
  }
  if (((param_1 == param_2) && (1 < iVar19)) || ((param_1 == param_3 && (1 < iVar40)))) {
    uStack_a8 = param_1[2];
    plVar24 = (long *)&UNK_10dffca88;
    param_1[2] = (ulong)&UNK_10dffca88;
    iVar16 = iVar40;
    if (iVar40 <= iVar19) {
      iVar16 = iVar19;
    }
    iVar16 = iVar16 << 1;
LAB_1097c01c0:
    lVar27 = *plVar24;
    if (lVar27 != 0) {
      plVar24[1] = 0;
    }
  }
  else {
    plVar24 = (long *)param_1[2];
    iVar16 = iVar40;
    if (iVar40 <= iVar19) {
      iVar16 = iVar19;
    }
    iVar16 = iVar16 << 1;
    if (plVar24 != (long *)0x0) {
      uStack_a8 = 0;
      goto LAB_1097c01c0;
    }
    uStack_a8 = 0;
    lVar27 = 0;
    param_1[2] = (ulong)&UNK_10dffca88;
  }
  puVar13 = param_1 + 2;
  if ((lVar27 < iVar16) && (puVar7 = param_1, FUN_1097c2118(), (int)puVar7 == 0)) {
    _free(uStack_a8);
    return 0;
  }
  uVar12 = 0;
  puVar7 = puVar10 + (long)iVar19 * 2;
  puVar1 = puVar9 + (long)iVar40 * 2;
  puVar14 = puVar9;
  puVar15 = puVar10;
  iVar16 = *(int *)((long)puVar10 + 4);
  if (*(int *)((long)puVar9 + 4) <= *(int *)((long)puVar10 + 4)) {
    iVar16 = *(int *)((long)puVar9 + 4);
  }
  do {
    if (puVar15 == puVar7) {
      FUN_1097c2c3c(&UNK_10f5803ad,&UNK_10f580420);
    }
    if (puVar14 == puVar1) {
      FUN_1097c2c3c(&UNK_10f5803ad,&UNK_10f580446);
    }
    iVar39 = *(int *)((long)puVar15 + 4);
    lVar27 = 0;
    lVar30 = 0x100000000;
    lVar31 = 0x10;
    do {
      lVar42 = lVar31;
      lVar28 = lVar30;
      lVar21 = lVar27;
      puVar2 = (ulong *)((long)puVar15 + lVar21 + 0x10);
      if (puVar2 == puVar7) break;
      lVar27 = lVar21 + 0x10;
      lVar30 = lVar28 + 0x100000000;
      lVar31 = lVar42 + 0x10;
    } while (*(int *)((long)puVar15 + lVar21 + 0x14) == iVar39);
    iVar25 = *(int *)((long)puVar14 + 4);
    lVar27 = 0;
    lVar30 = 0x100000000;
    lVar31 = 0x10;
    do {
      lVar41 = lVar31;
      lVar29 = lVar30;
      lVar22 = lVar27;
      puVar3 = (ulong *)((long)puVar14 + lVar22 + 0x10);
      if (puVar3 == puVar1) break;
      lVar27 = lVar22 + 0x10;
      lVar30 = lVar29 + 0x100000000;
      lVar31 = lVar41 + 0x10;
    } while (*(int *)((long)puVar14 + lVar22 + 0x14) == iVar25);
    uVar11 = (uint)uVar12;
    uVar43 = uVar12;
    if (iVar39 < iVar25) {
      iVar18 = iVar25;
      if (param_5 != 0) {
        if (iVar39 <= iVar16) {
          iVar39 = iVar16;
        }
        iVar16 = *(int *)((long)puVar15 + 0xc);
        if (iVar25 <= *(int *)((long)puVar15 + 0xc)) {
          iVar16 = iVar25;
        }
        if (iVar39 != iVar16) {
          uVar43 = *(ulong *)(*puVar13 + 8);
          if (iVar16 <= iVar39) {
            FUN_1097c2c3c(&UNK_10f58046c,&UNK_10f5804cc);
          }
          uVar23 = lVar21 + 0x10U >> 4;
          if ((int)uVar23 == 0) {
            FUN_1097c2c3c(&UNK_10f58046c,&UNK_10f5804ed);
          }
          plVar24 = (long *)*puVar13;
          lVar28 = lVar28 >> 0x20;
          if (plVar24 == (long *)0x0) {
LAB_1097c0444:
            puVar8 = param_1;
            FUN_1097c2118(param_1,uVar23);
            if ((int)puVar8 == 0) goto LAB_1097c0dbc;
            plVar24 = (long *)*puVar13;
            lVar30 = plVar24[1];
            lVar27 = lVar30 + lVar28;
          }
          else {
            lVar30 = plVar24[1];
            lVar27 = lVar30 + lVar28;
            if (*plVar24 < lVar27) goto LAB_1097c0444;
          }
          plVar24[1] = lVar27;
          puVar8 = puVar15 + 1;
          plVar24 = plVar24 + lVar30 * 2;
          do {
            iVar17 = (int)puVar8[-1];
            iVar25 = (int)*puVar8;
            if (iVar25 <= iVar17) {
              FUN_1097c2c3c(&UNK_10f58046c,&UNK_10f580515);
              iVar17 = (int)puVar8[-1];
              iVar25 = (int)*puVar8;
            }
            *(int *)(plVar24 + 2) = iVar17;
            *(int *)((long)plVar24 + 0x14) = iVar39;
            *(int *)(plVar24 + 3) = iVar25;
            *(int *)((long)plVar24 + 0x1c) = iVar16;
            puVar8 = puVar8 + 2;
            lVar42 = lVar42 + -0x10;
            plVar24 = plVar24 + 2;
          } while (lVar42 != 0);
          iVar16 = (int)uVar43;
          iVar39 = iVar16 - uVar11;
          if (iVar39 != 0) {
            uVar23 = *puVar13;
            if (*(long *)(uVar23 + 8) - (long)iVar16 == (long)iVar39) {
              piVar32 = (int *)(uVar23 + 0x10 + (long)(int)uVar11 * 0x10);
              lVar27 = uVar23 + 0x10 + (long)iVar16 * 0x10;
              if (piVar32[3] == *(int *)(lVar27 + 4)) {
                uVar4 = *(undefined4 *)(lVar27 + 0xc);
                piVar35 = (int *)(uVar23 + (long)iVar16 * 0x10 + 0x18);
                uVar37 = uVar43;
                puVar33 = (undefined4 *)(uVar23 + (long)(int)uVar11 * 0x10 + 0x1c);
                do {
                  puVar34 = puVar33;
                  if ((*piVar32 != piVar35[-2]) || (piVar32[2] != *piVar35)) goto LAB_1097c05cc;
                  piVar32 = piVar32 + 4;
                  uVar5 = (int)uVar37 - 1;
                  uVar37 = (ulong)uVar5;
                  piVar35 = piVar35 + 4;
                  puVar33 = puVar34 + 4;
                } while (uVar11 != uVar5);
                *(long *)(uVar23 + 8) = *(long *)(uVar23 + 8) - (long)iVar39;
                iVar16 = uVar11 - iVar16;
                do {
                  *puVar34 = uVar4;
                  bVar6 = iVar16 != -1;
                  iVar16 = iVar16 + 1;
                  uVar43 = uVar12;
                  puVar34 = puVar34 + -4;
                } while (bVar6);
              }
            }
          }
        }
      }
    }
    else {
      iVar18 = iVar39;
      if ((param_6 != 0) && (iVar25 < iVar39)) {
        if (iVar25 <= iVar16) {
          iVar25 = iVar16;
        }
        iVar16 = *(int *)((long)puVar14 + 0xc);
        if (iVar39 <= *(int *)((long)puVar14 + 0xc)) {
          iVar16 = iVar39;
        }
        if (iVar25 != iVar16) {
          uVar43 = *(ulong *)(*puVar13 + 8);
          if (iVar16 <= iVar25) {
            FUN_1097c2c3c(&UNK_10f58046c,&UNK_10f5804cc);
          }
          uVar23 = lVar22 + 0x10U >> 4;
          if ((int)uVar23 == 0) {
            FUN_1097c2c3c(&UNK_10f58046c,&UNK_10f5804ed);
          }
          plVar24 = (long *)*puVar13;
          lVar29 = lVar29 >> 0x20;
          if (plVar24 == (long *)0x0) {
LAB_1097c0340:
            puVar8 = param_1;
            FUN_1097c2118(param_1,uVar23);
            if ((int)puVar8 == 0) goto LAB_1097c0dbc;
            plVar24 = (long *)*puVar13;
            lVar30 = plVar24[1];
            lVar27 = lVar30 + lVar29;
          }
          else {
            lVar30 = plVar24[1];
            lVar27 = lVar30 + lVar29;
            if (*plVar24 < lVar27) goto LAB_1097c0340;
          }
          plVar24[1] = lVar27;
          puVar8 = puVar14 + 1;
          plVar24 = plVar24 + lVar30 * 2;
          do {
            iVar17 = (int)puVar8[-1];
            iVar39 = (int)*puVar8;
            if (iVar39 <= iVar17) {
              FUN_1097c2c3c(&UNK_10f58046c,&UNK_10f580515);
              iVar17 = (int)puVar8[-1];
              iVar39 = (int)*puVar8;
            }
            *(int *)(plVar24 + 2) = iVar17;
            *(int *)((long)plVar24 + 0x14) = iVar25;
            *(int *)(plVar24 + 3) = iVar39;
            *(int *)((long)plVar24 + 0x1c) = iVar16;
            puVar8 = puVar8 + 2;
            lVar41 = lVar41 + -0x10;
            plVar24 = plVar24 + 2;
          } while (lVar41 != 0);
          iVar16 = (int)uVar43;
          iVar39 = iVar16 - uVar11;
          if (iVar39 != 0) {
            uVar23 = *puVar13;
            if (*(long *)(uVar23 + 8) - (long)iVar16 == (long)iVar39) {
              piVar32 = (int *)(uVar23 + 0x10 + (long)(int)uVar11 * 0x10);
              lVar27 = uVar23 + 0x10 + (long)iVar16 * 0x10;
              if (piVar32[3] == *(int *)(lVar27 + 4)) {
                uVar4 = *(undefined4 *)(lVar27 + 0xc);
                piVar35 = (int *)(uVar23 + (long)iVar16 * 0x10 + 0x18);
                uVar37 = uVar43;
                puVar33 = (undefined4 *)(uVar23 + (long)(int)uVar11 * 0x10 + 0x1c);
                do {
                  puVar34 = puVar33;
                  if ((*piVar32 != piVar35[-2]) || (piVar32[2] != *piVar35)) goto LAB_1097c05cc;
                  piVar32 = piVar32 + 4;
                  uVar5 = (int)uVar37 - 1;
                  uVar37 = (ulong)uVar5;
                  piVar35 = piVar35 + 4;
                  puVar33 = puVar34 + 4;
                } while (uVar11 != uVar5);
                *(long *)(uVar23 + 8) = *(long *)(uVar23 + 8) - (long)iVar39;
                iVar16 = uVar11 - iVar16;
                do {
                  *puVar34 = uVar4;
                  bVar6 = iVar16 != -1;
                  iVar16 = iVar16 + 1;
                  uVar43 = uVar12;
                  puVar34 = puVar34 + -4;
                } while (bVar6);
              }
            }
          }
        }
      }
    }
LAB_1097c05cc:
    iVar16 = *(int *)((long)puVar15 + 0xc);
    if (*(int *)((long)puVar14 + 0xc) <= *(int *)((long)puVar15 + 0xc)) {
      iVar16 = *(int *)((long)puVar14 + 0xc);
    }
    uVar12 = uVar43;
    if (iVar18 < iVar16) {
      uVar12 = *(ulong *)(param_1[2] + 8);
      puVar8 = param_1;
      (*param_4)(param_1,puVar15,puVar2,puVar14,puVar3,iVar18);
      if ((int)puVar8 == 0) goto LAB_1097c0dbc;
      uVar11 = (uint)uVar43;
      iVar39 = (int)uVar12;
      iVar25 = iVar39 - uVar11;
      uVar23 = *puVar13;
      if (iVar25 != 0 && *(long *)(uVar23 + 8) - (long)iVar39 == (long)iVar25) {
        piVar32 = (int *)(uVar23 + 0x10 + (long)(int)uVar11 * 0x10);
        lVar27 = uVar23 + 0x10 + (long)iVar39 * 0x10;
        if (piVar32[3] == *(int *)(lVar27 + 4)) {
          uVar4 = *(undefined4 *)(lVar27 + 0xc);
          piVar35 = (int *)(uVar23 + (long)iVar39 * 0x10 + 0x18);
          uVar37 = uVar12;
          puVar33 = (undefined4 *)(uVar23 + (long)(int)uVar11 * 0x10 + 0x1c);
          do {
            puVar34 = puVar33;
            if ((*piVar32 != piVar35[-2]) || (piVar32[2] != *piVar35)) goto LAB_1097c0708;
            piVar32 = piVar32 + 4;
            uVar5 = (int)uVar37 - 1;
            uVar37 = (ulong)uVar5;
            piVar35 = piVar35 + 4;
            puVar33 = puVar34 + 4;
          } while (uVar11 != uVar5);
          *(long *)(uVar23 + 8) = *(long *)(uVar23 + 8) - (long)iVar25;
          iVar39 = uVar11 - iVar39;
          do {
            *puVar34 = uVar4;
            bVar6 = iVar39 != -1;
            iVar39 = iVar39 + 1;
            uVar12 = uVar43;
            puVar34 = puVar34 + -4;
          } while (bVar6);
        }
      }
    }
LAB_1097c0708:
    if (*(int *)((long)puVar15 + 0xc) != iVar16) {
      puVar2 = puVar15;
    }
    if (*(int *)((long)puVar14 + 0xc) != iVar16) {
      puVar3 = puVar14;
    }
    puVar14 = puVar3;
    puVar15 = puVar2;
  } while (puVar2 != puVar7 && puVar3 != puVar1);
  iVar39 = (int)uVar12;
  if ((param_5 == 0) || (puVar2 == puVar7)) {
    if ((param_6 == 0) || (puVar3 == puVar1)) goto LAB_1097c0e24;
    iVar19 = *(int *)((long)puVar3 + 4);
    lVar27 = -0x10;
    lVar30 = 0x100000000;
    puVar10 = puVar3;
    do {
      lVar31 = lVar30;
      lVar28 = lVar27;
      puVar14 = puVar10 + 2;
      if (puVar14 == puVar1) break;
      piVar32 = (int *)((long)puVar10 + 0x14);
      lVar27 = lVar28 + -0x10;
      lVar30 = lVar31 + 0x100000000;
      puVar10 = puVar14;
    } while (*piVar32 == iVar19);
    uVar38 = *(undefined8 *)(*puVar13 + 8);
    if (iVar19 <= iVar16) {
      iVar19 = iVar16;
    }
    iVar16 = *(int *)((long)puVar3 + 0xc);
    uVar43 = -lVar28;
    if (iVar16 <= iVar19) {
      FUN_1097c2c3c(&UNK_10f58046c,&UNK_10f5804cc);
    }
    if ((int)(uVar43 >> 4) == 0) {
      FUN_1097c2c3c(&UNK_10f58046c,&UNK_10f5804ed);
    }
    plVar24 = (long *)*puVar13;
    if (plVar24 == (long *)0x0) {
LAB_1097c0b6c:
      puVar10 = param_1;
      FUN_1097c2118(param_1,uVar43 >> 4);
      if ((int)puVar10 == 0) goto LAB_1097c0dbc;
      plVar24 = (long *)*puVar13;
      lVar30 = plVar24[1];
      lVar27 = lVar30 + (lVar31 >> 0x20);
    }
    else {
      lVar30 = plVar24[1];
      lVar27 = lVar30 + (lVar31 >> 0x20);
      if (*plVar24 < lVar27) goto LAB_1097c0b6c;
    }
    plVar24[1] = lVar27;
    puVar10 = puVar3 + 1;
    plVar24 = plVar24 + lVar30 * 2;
    do {
      iVar18 = (int)puVar10[-1];
      iVar25 = (int)*puVar10;
      if (iVar25 <= iVar18) {
        FUN_1097c2c3c(&UNK_10f58046c,&UNK_10f580515);
        iVar18 = (int)puVar10[-1];
        iVar25 = (int)*puVar10;
      }
      *(int *)(plVar24 + 2) = iVar18;
      *(int *)((long)plVar24 + 0x14) = iVar19;
      *(int *)(plVar24 + 3) = iVar25;
      *(int *)((long)plVar24 + 0x1c) = iVar16;
      puVar10 = puVar10 + 2;
      uVar43 = uVar43 - 0x10;
      plVar24 = plVar24 + 2;
    } while (uVar43 != 0);
    iVar19 = (int)uVar38;
    if (*(long *)(*puVar13 + 8) - (long)iVar19 == (long)(iVar19 - iVar39)) {
      FUN_1097c2220(param_1,uVar12,uVar38);
    }
    uVar12 = (long)puVar9 + lVar28 + ((long)iVar40 * 0x10 - (long)puVar3);
    if ((int)(uVar12 >> 4) == 0) goto LAB_1097c0e24;
    plVar24 = (long *)*puVar13;
    if (plVar24 == (long *)0x0) goto LAB_1097c0d9c;
    lVar31 = (((long)iVar40 << 0x20) + (long)puVar9 * 0x10000000 + (long)puVar3 * -0x10000000) -
             lVar31;
    lVar27 = plVar24[1];
    if (*plVar24 < lVar27 + (lVar31 >> 0x20)) goto LAB_1097c0d9c;
  }
  else {
    iVar40 = *(int *)((long)puVar2 + 4);
    lVar27 = -0x10;
    lVar30 = 0x100000000;
    puVar9 = puVar2;
    do {
      lVar31 = lVar30;
      lVar28 = lVar27;
      puVar14 = puVar9 + 2;
      if (puVar14 == puVar7) break;
      piVar32 = (int *)((long)puVar9 + 0x14);
      lVar27 = lVar28 + -0x10;
      lVar30 = lVar31 + 0x100000000;
      puVar9 = puVar14;
    } while (*piVar32 == iVar40);
    uVar38 = *(undefined8 *)(*puVar13 + 8);
    if (iVar40 <= iVar16) {
      iVar40 = iVar16;
    }
    iVar16 = *(int *)((long)puVar2 + 0xc);
    uVar12 = -lVar28;
    if (iVar16 <= iVar40) {
      FUN_1097c2c3c(&UNK_10f58046c,&UNK_10f5804cc);
    }
    if ((int)(uVar12 >> 4) == 0) {
      FUN_1097c2c3c(&UNK_10f58046c,&UNK_10f5804ed);
    }
    plVar24 = (long *)*puVar13;
    if (plVar24 == (long *)0x0) {
LAB_1097c0a18:
      puVar9 = param_1;
      FUN_1097c2118(param_1,uVar12 >> 4);
      if ((int)puVar9 == 0) goto LAB_1097c0dbc;
      plVar24 = (long *)*puVar13;
      lVar30 = plVar24[1];
      lVar27 = lVar30 + (lVar31 >> 0x20);
    }
    else {
      lVar30 = plVar24[1];
      lVar27 = lVar30 + (lVar31 >> 0x20);
      if (*plVar24 < lVar27) goto LAB_1097c0a18;
    }
    plVar24[1] = lVar27;
    puVar9 = puVar2 + 1;
    plVar24 = plVar24 + lVar30 * 2;
    do {
      iVar18 = (int)puVar9[-1];
      iVar25 = (int)*puVar9;
      if (iVar25 <= iVar18) {
        FUN_1097c2c3c(&UNK_10f58046c,&UNK_10f580515);
        iVar18 = (int)puVar9[-1];
        iVar25 = (int)*puVar9;
      }
      *(int *)(plVar24 + 2) = iVar18;
      *(int *)((long)plVar24 + 0x14) = iVar40;
      *(int *)(plVar24 + 3) = iVar25;
      *(int *)((long)plVar24 + 0x1c) = iVar16;
      puVar9 = puVar9 + 2;
      uVar12 = uVar12 - 0x10;
      plVar24 = plVar24 + 2;
    } while (uVar12 != 0);
    plVar24 = (long *)*puVar13;
    lVar27 = plVar24[1];
    iVar16 = (int)uVar38;
    iVar40 = iVar16 - iVar39;
    if ((iVar40 != 0) && (lVar27 - iVar16 == (long)iVar40)) {
      lVar30 = (long)iVar16 * 0x10;
      if (*(int *)((long)plVar24 + (long)iVar39 * 0x10 + 0x1c) ==
          *(int *)((long)plVar24 + lVar30 + 0x14)) {
        uVar4 = *(undefined4 *)((long)plVar24 + lVar30 + 0x1c);
        puVar33 = (undefined4 *)((long)plVar24 + (long)iVar39 * 0x10 + 0xc);
        iVar39 = iVar39 - iVar16;
        plVar36 = plVar24 + (long)iVar16 * 2 + 3;
        iVar16 = iVar39;
        do {
          if ((puVar33[1] != (int)plVar36[-1]) || (puVar33[3] != (int)*plVar36)) goto LAB_1097c0cc0;
          puVar33 = puVar33 + 4;
          bVar6 = iVar16 != -1;
          iVar16 = iVar16 + 1;
          plVar36 = plVar36 + 2;
        } while (bVar6);
        lVar27 = lVar27 - iVar40;
        plVar24[1] = lVar27;
        do {
          *puVar33 = uVar4;
          bVar6 = iVar39 != -1;
          iVar39 = iVar39 + 1;
          puVar33 = puVar33 + -4;
        } while (bVar6);
      }
    }
LAB_1097c0cc0:
    uVar12 = (long)puVar10 + lVar28 + ((long)iVar19 * 0x10 - (long)puVar2);
    if ((int)(uVar12 >> 4) == 0) goto LAB_1097c0e24;
    if ((plVar24 == (long *)0x0) ||
       (lVar31 = (((long)iVar19 << 0x20) + (long)puVar10 * 0x10000000 + (long)puVar2 * -0x10000000)
                 - lVar31, *plVar24 < lVar27 + (lVar31 >> 0x20))) {
LAB_1097c0d9c:
      puVar10 = param_1;
      FUN_1097c2118();
      if ((int)puVar10 == 0) {
LAB_1097c0dbc:
        _free(uStack_a8);
        if (((long *)*puVar13 != (long *)0x0) && (*(long *)*puVar13 != 0)) {
          _free();
        }
        *param_1 = 0;
        param_1[1] = 0;
        param_1[2] = (ulong)&UNK_10dffca98;
        return 0;
      }
      plVar24 = (long *)*puVar13;
      lVar27 = plVar24[1];
      lVar31 = uVar12 << 0x1c;
    }
  }
  _memmove(plVar24 + lVar27 * 2 + 2,puVar14,(lVar31 >> 0x20) << 4);
  *(long *)(*puVar13 + 8) = *(long *)(*puVar13 + 8) + (lVar31 >> 0x20);
LAB_1097c0e24:
  _free(uStack_a8);
  puVar10 = (ulong *)*puVar13;
  iVar19 = (int)puVar10[1];
  if (iVar19 == 1) {
    uVar12 = puVar10[2];
    param_1[1] = puVar10[3];
    *param_1 = uVar12;
    if (*puVar10 != 0) {
      _free();
    }
    *puVar13 = 0;
  }
  else if (iVar19 == 0) {
    if (*puVar10 != 0) {
      _free();
    }
    *puVar13 = (ulong)&UNK_10dffca88;
  }
  else {
    uVar12 = (ulong)iVar19;
    if (((0x32 < (long)*puVar10 && (long)uVar12 < (long)*puVar10 >> 1) &&
        (lVar27 = puVar10[1] << 0x20, lVar27 != 0xfffffff00000000 && uVar12 >> 0x1c == 0)) &&
       (_realloc(puVar10,(lVar27 >> 0x1c) + 0x10), puVar10 != (ulong *)0x0)) {
      *puVar10 = uVar12;
      *puVar13 = (ulong)puVar10;
    }
  }
  return 1;
}



/* Entry: 1097c1168; end: 1097c140f;  */

void FUN_1097c1168(long *param_1)

{
  long *plVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  long *plVar5;
  int iVar6;
  long *plVar7;
  long lVar8;
  
  plVar5 = (long *)param_1[2];
  if (plVar5 != (long *)0x0) {
    if (*plVar5 == 0) {
      param_1[1] = *param_1;
    }
    else {
      plVar7 = plVar5 + 2;
      lVar8 = *plVar7;
      plVar1 = plVar5 + plVar5[1] * 2;
      iVar3 = *(int *)((long)plVar5 + 0x14);
      iVar4 = (int)*plVar7;
      iVar6 = (int)plVar1[1];
      iVar2 = *(int *)((long)plVar1 + 0xc);
      param_1[1] = plVar1[1];
      *param_1 = lVar8;
      if (iVar2 <= iVar3) {
        FUN_1097c2c3c(&UNK_10f580790,&UNK_10f5807b9);
        iVar4 = (int)*param_1;
        iVar6 = (int)param_1[1];
      }
      for (; plVar7 <= plVar1; plVar7 = plVar7 + 2) {
        iVar2 = (int)*plVar7;
        if (iVar2 < iVar4) {
          *(int *)param_1 = iVar2;
          iVar4 = iVar2;
        }
        iVar2 = (int)plVar7[1];
        if (iVar6 < iVar2) {
          *(int *)(param_1 + 1) = iVar2;
          iVar6 = iVar2;
        }
      }
      if (iVar6 <= iVar4) {
        if (iRam000000011382add8 < 10) {
          _fprintf(*(undefined8 *)PTR____stderrp_11034bdc8,&UNK_10f5808c0);
          iRam000000011382add8 = iRam000000011382add8 + 1;
        }
        return;
      }
    }
  }
  return;
}



/* Entry: 1097c1410; end: 1097c182b;  */

void FUN_1097c1410(long param_1,int *param_2,int *param_3,int *param_4,int *param_5,int param_6,
                  int param_7)

{
  int *piVar1;
  int *piVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  int iVar6;
  int iVar7;
  long *plVar8;
  
  if (param_7 <= param_6) {
    FUN_1097c2c3c(&UNK_10f580582,&UNK_10f5804cc);
  }
  if ((param_2 == param_3) || (param_4 == param_5)) {
    FUN_1097c2c3c(&UNK_10f580582,&UNK_10f58075a);
  }
  plVar8 = (long *)(*(long *)(param_1 + 0x10) + *(long *)(*(long *)(param_1 + 0x10) + 8) * 0x10 +
                   0x10);
  piVar1 = param_4;
  iVar6 = *param_4;
  piVar2 = param_4 + 4;
  if (*param_2 < *param_4) {
    piVar1 = param_2;
    iVar6 = *param_2;
    param_2 = param_2 + 4;
    piVar2 = param_4;
  }
  iVar7 = piVar1[2];
  while ((param_2 != param_3 && (piVar2 != param_5))) {
    if (*param_2 < *piVar2) {
      if (iVar7 < *param_2) {
        plVar4 = *(long **)(param_1 + 0x10);
        if (plVar4 == (long *)0x0) {
LAB_1097c14f0:
          lVar3 = param_1;
          FUN_1097c2118(param_1,1);
          if ((int)lVar3 == 0) {
            return;
          }
          plVar4 = *(long **)(param_1 + 0x10);
          lVar3 = *plVar4;
          lVar5 = plVar4[1];
          plVar8 = plVar4 + lVar5 * 2 + 2;
        }
        else {
          lVar3 = *plVar4;
          lVar5 = plVar4[1];
          if (lVar5 == lVar3) goto LAB_1097c14f0;
        }
        *(int *)plVar8 = iVar6;
        *(int *)((long)plVar8 + 4) = param_6;
        *(int *)(plVar8 + 1) = iVar7;
        *(int *)((long)plVar8 + 0xc) = param_7;
        plVar4[1] = lVar5 + 1;
        if (lVar3 <= lVar5) {
          FUN_1097c2c3c(&UNK_10f580582,&UNK_10f58053c);
        }
        plVar8 = plVar8 + 2;
        iVar6 = *param_2;
        iVar7 = param_2[2];
      }
      else if (iVar7 <= param_2[2]) {
        iVar7 = param_2[2];
      }
      param_2 = param_2 + 4;
    }
    else {
      if (iVar7 < *piVar2) {
        plVar4 = *(long **)(param_1 + 0x10);
        if (plVar4 == (long *)0x0) {
LAB_1097c155c:
          lVar3 = param_1;
          FUN_1097c2118(param_1,1);
          if ((int)lVar3 == 0) {
            return;
          }
          plVar4 = *(long **)(param_1 + 0x10);
          lVar3 = *plVar4;
          lVar5 = plVar4[1];
          plVar8 = plVar4 + lVar5 * 2 + 2;
        }
        else {
          lVar3 = *plVar4;
          lVar5 = plVar4[1];
          if (lVar5 == lVar3) goto LAB_1097c155c;
        }
        *(int *)plVar8 = iVar6;
        *(int *)((long)plVar8 + 4) = param_6;
        *(int *)(plVar8 + 1) = iVar7;
        *(int *)((long)plVar8 + 0xc) = param_7;
        plVar4[1] = lVar5 + 1;
        if (lVar3 <= lVar5) {
          FUN_1097c2c3c(&UNK_10f580582,&UNK_10f58053c);
        }
        plVar8 = plVar8 + 2;
        iVar6 = *piVar2;
        iVar7 = piVar2[2];
      }
      else if (iVar7 <= piVar2[2]) {
        iVar7 = piVar2[2];
      }
      piVar2 = piVar2 + 4;
    }
  }
  if (param_2 == param_3) {
    for (; piVar2 != param_5; piVar2 = piVar2 + 4) {
      if (iVar7 < *piVar2) {
        plVar4 = *(long **)(param_1 + 0x10);
        if (plVar4 == (long *)0x0) {
LAB_1097c16f8:
          lVar3 = param_1;
          FUN_1097c2118(param_1,1);
          if ((int)lVar3 == 0) {
            return;
          }
          plVar4 = *(long **)(param_1 + 0x10);
          lVar3 = *plVar4;
          lVar5 = plVar4[1];
          plVar8 = plVar4 + lVar5 * 2 + 2;
        }
        else {
          lVar3 = *plVar4;
          lVar5 = plVar4[1];
          if (lVar5 == lVar3) goto LAB_1097c16f8;
        }
        *(int *)plVar8 = iVar6;
        *(int *)((long)plVar8 + 4) = param_6;
        *(int *)(plVar8 + 1) = iVar7;
        *(int *)((long)plVar8 + 0xc) = param_7;
        plVar4[1] = lVar5 + 1;
        if (lVar3 <= lVar5) {
          FUN_1097c2c3c(&UNK_10f580582,&UNK_10f58053c);
        }
        plVar8 = plVar8 + 2;
        iVar6 = *piVar2;
        iVar7 = piVar2[2];
      }
      else if (iVar7 <= piVar2[2]) {
        iVar7 = piVar2[2];
      }
    }
  }
  else {
    do {
      if (iVar7 < *param_2) {
        plVar4 = *(long **)(param_1 + 0x10);
        if (plVar4 == (long *)0x0) {
LAB_1097c1648:
          lVar3 = param_1;
          FUN_1097c2118(param_1,1);
          if ((int)lVar3 == 0) {
            return;
          }
          plVar4 = *(long **)(param_1 + 0x10);
          lVar3 = *plVar4;
          lVar5 = plVar4[1];
          plVar8 = plVar4 + lVar5 * 2 + 2;
        }
        else {
          lVar3 = *plVar4;
          lVar5 = plVar4[1];
          if (lVar5 == lVar3) goto LAB_1097c1648;
        }
        *(int *)plVar8 = iVar6;
        *(int *)((long)plVar8 + 4) = param_6;
        *(int *)(plVar8 + 1) = iVar7;
        *(int *)((long)plVar8 + 0xc) = param_7;
        plVar4[1] = lVar5 + 1;
        if (lVar3 <= lVar5) {
          FUN_1097c2c3c(&UNK_10f580582,&UNK_10f58053c);
        }
        plVar8 = plVar8 + 2;
        iVar6 = *param_2;
        iVar7 = param_2[2];
      }
      else if (iVar7 <= param_2[2]) {
        iVar7 = param_2[2];
      }
      param_2 = param_2 + 4;
    } while (param_2 != param_3);
  }
  plVar4 = *(long **)(param_1 + 0x10);
  if (plVar4 != (long *)0x0) {
    lVar3 = *plVar4;
    lVar5 = plVar4[1];
    if (lVar5 != lVar3) goto LAB_1097c17a4;
  }
  lVar3 = param_1;
  FUN_1097c2118(param_1,1);
  if ((int)lVar3 == 0) {
    return;
  }
  plVar4 = *(long **)(param_1 + 0x10);
  lVar3 = *plVar4;
  lVar5 = plVar4[1];
  plVar8 = plVar4 + lVar5 * 2 + 2;
LAB_1097c17a4:
  *(int *)plVar8 = iVar6;
  *(int *)((long)plVar8 + 4) = param_6;
  *(int *)(plVar8 + 1) = iVar7;
  *(int *)((long)plVar8 + 0xc) = param_7;
  plVar4[1] = lVar5 + 1;
  if (lVar3 <= lVar5) {
    FUN_1097c2c3c(&UNK_10f580582,&UNK_10f58053c);
  }
  return;
}



/* Entry: 1097c182c; end: 1097c19f7;  */

undefined4 FUN_1097c182c(int *param_1,int *param_2)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  bool bVar7;
  bool bVar8;
  long lVar9;
  undefined4 uVar10;
  int iVar11;
  int *piVar12;
  int iVar13;
  int *piVar14;
  
  piVar12 = *(int **)(param_1 + 4);
  if (piVar12 == (int *)0x0) {
    iVar13 = 1;
  }
  else {
    iVar13 = piVar12[2];
    if (iVar13 == 0) {
      return 0;
    }
  }
  iVar4 = *param_2;
  if (param_1[2] <= iVar4) {
    return 0;
  }
  iVar5 = param_2[2];
  if (iVar5 <= *param_1) {
    return 0;
  }
  iVar11 = param_2[1];
  if (param_1[3] <= iVar11) {
    return 0;
  }
  iVar6 = param_2[3];
  if (iVar6 <= param_1[1]) {
    return 0;
  }
  if (iVar13 == 1) {
    uVar10 = 1;
    if (((param_1[3] < iVar6 || param_1[2] < iVar5) || iVar11 < param_1[1]) || iVar4 < *param_1) {
      uVar10 = 2;
    }
    return uVar10;
  }
  bVar8 = false;
  bVar7 = false;
  piVar1 = piVar12 + (long)iVar13 * 4;
  do {
    piVar3 = piVar12 + 7;
    piVar12 = piVar12 + 4;
    piVar14 = piVar1 + 4;
    if (*piVar3 <= iVar11) {
      do {
        lVar9 = (long)piVar14 - (long)piVar12;
        if (lVar9 == 0x10) {
          piVar3 = piVar12;
          if (piVar12[3] <= iVar11) {
            piVar3 = piVar14;
          }
          break;
        }
        piVar2 = piVar12 + ((ulong)((lVar9 >> 4) - (lVar9 >> 0x3f)) >> 1) * 4;
        piVar3 = piVar2;
        if (piVar2[3] <= iVar11) {
          piVar3 = piVar14;
          piVar12 = piVar2;
        }
        piVar14 = piVar3;
      } while (piVar3 != piVar12);
      piVar12 = piVar3;
      if (piVar12 == piVar1 + 4) {
LAB_1097c1998:
        if (!bVar7) {
          return 0;
        }
LAB_1097c199c:
        uVar10 = 1;
        if (iVar11 < iVar6) {
          uVar10 = 2;
        }
        return uVar10;
      }
    }
    iVar13 = piVar12[1];
    if (iVar11 < iVar13) {
      if (bVar7) goto LAB_1097c199c;
      if (iVar6 <= iVar13) {
        return 0;
      }
      bVar8 = true;
      iVar11 = iVar13;
    }
    if (iVar4 < piVar12[2]) {
      iVar13 = *piVar12;
      if (iVar4 < iVar13) {
        if ((bVar7) || (iVar13 < iVar5)) goto LAB_1097c199c;
        bVar7 = false;
        bVar8 = true;
      }
      else if (iVar13 < iVar5) {
        if (bVar8) goto LAB_1097c199c;
        bVar7 = true;
      }
      if ((piVar12[2] < iVar5) || (iVar11 = piVar12[3], iVar6 <= iVar11)) goto LAB_1097c1998;
    }
    if (piVar12 == piVar1) goto LAB_1097c1998;
  } while( true );
}



/* Entry: 1097c19f8; end: 1097c2117;  */

bool FUN_1097c19f8(ulong *param_1,ulong *param_2,ulong *param_3)

{
  uint uVar1;
  bool bVar2;
  bool bVar3;
  ulong *puVar4;
  ulong *puVar5;
  ulong *puVar6;
  int iVar7;
  long lVar8;
  long *plVar9;
  ulong uVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  long lVar14;
  uint uVar15;
  ulong *puVar16;
  uint *puVar17;
  ulong *puVar18;
  uint *puVar19;
  ulong *puVar20;
  uint uVar21;
  ulong uVar22;
  ulong *puVar23;
  ulong uStack_870;
  undefined8 uStack_868;
  ulong uStack_860;
  undefined8 uStack_858;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  iVar7 = (int)param_3;
  if (iVar7 == 1) {
    param_2 = (ulong *)(ulong)(uint)*param_2;
    FUN_1097bfd2c();
    puVar4 = param_1;
  }
  else {
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = (ulong)&UNK_10dffca88;
    puVar4 = param_1;
    if (iVar7 != 0) {
      puVar23 = param_3;
      FUN_1097c2118();
      if ((int)puVar4 == 0) {
        bVar3 = false;
      }
      else {
        puVar23 = param_1;
        if (param_1[2] != 0) {
          puVar23 = (ulong *)(param_1[2] + 0x10);
        }
        uVar22 = (ulong)iVar7;
        _memcpy(puVar23,param_2,
                -((ulong)param_3 >> 0x1f & 1) & 0xfffffff000000000 |
                ((ulong)param_3 & 0xffffffff) << 4);
        puVar4 = (ulong *)param_1[2];
        puVar4[1] = uVar22;
        if (iVar7 < 1) {
          lVar8 = 0;
        }
        else {
          iVar7 = 0;
          uVar22 = (ulong)param_3 & 0xffffffff;
          puVar4 = puVar23;
          do {
            if (((int)(uint)*puVar4 < (int)(uint)puVar4[1]) &&
               ((int)*(uint *)((long)puVar4 + 4) < (int)*(uint *)((long)puVar4 + 0xc))) {
              if (iVar7 != 0) {
                uVar10 = *puVar4;
                (puVar4 + (long)iVar7 * -2)[1] = puVar4[1];
                puVar4[(long)iVar7 * -2] = uVar10;
              }
            }
            else {
              iVar7 = iVar7 + 1;
            }
            puVar4 = puVar4 + 2;
            uVar22 = uVar22 - 1;
          } while (uVar22 != 0);
          puVar4 = (ulong *)param_1[2];
          uVar22 = puVar4[1];
          lVar8 = (long)iVar7;
        }
        puVar6 = (ulong *)(uVar22 - lVar8);
        puVar4[1] = (ulong)puVar6;
        if (puVar6 == (ulong *)0x0) {
          if (*puVar4 != 0) {
            _free();
          }
          *param_1 = 0;
          param_1[1] = 0;
          bVar3 = true;
          param_1[2] = (ulong)&UNK_10dffca88;
          puVar23 = param_2;
        }
        else {
          if (puVar6 == (ulong *)0x1) {
            uVar22 = *puVar23;
            param_1[1] = puVar23[1];
            *param_1 = uVar22;
            if (*puVar4 != 0) {
              _free();
            }
            param_1[2] = 0;
            goto LAB_1097c1b68;
          }
          *(uint *)(param_1 + 1) = 0;
          *(uint *)param_1 = 0;
          if ((int)puVar6 != 0) {
            puVar23 = puVar6;
            func_0x0001097c2310(puVar4 + 2);
            uStack_860 = param_1[2];
            uStack_858 = 0;
            uStack_868 = *(undefined8 *)(uStack_860 + 0x18);
            uStack_870 = *(ulong *)(uStack_860 + 0x10);
            *(undefined8 *)(uStack_860 + 8) = 1;
            *param_1 = 0;
            param_1[1] = 0;
            param_1[2] = (ulong)&UNK_10dffca88;
            if (1 < (int)puVar6) {
              uVar22 = 0x40;
              uVar21 = 1;
              puVar5 = &uStack_870;
              puVar16 = (ulong *)(uStack_860 + 0x10);
LAB_1097c1bfc:
              puVar18 = puVar16 + 2;
              iVar7 = (int)puVar6;
              puVar4 = puVar5;
              if (0 < (int)uVar21) {
                puVar4 = puVar5 + (ulong)(uVar21 - 1) * 4 + 4;
                uVar12 = uVar21 + 1;
                puVar6 = puVar5;
                do {
                  plVar9 = (long *)puVar6[2];
                  lVar8 = plVar9[1];
                  if (*(uint *)((long)puVar16 + 0x14) == *(uint *)((long)plVar9 + lVar8 * 0x10 + 4))
                  {
                    uVar15 = *(uint *)((long)plVar9 + lVar8 * 0x10 + 0xc);
                    if (*(uint *)((long)puVar16 + 0x1c) == uVar15) {
                      if ((int)plVar9[lVar8 * 2 + 1] < (int)(uint)*puVar18) goto LAB_1097c1d8c;
                      if ((int)plVar9[lVar8 * 2 + 1] < (int)(uint)puVar16[3]) {
                        *(uint *)(plVar9 + lVar8 * 2 + 1) = (uint)puVar16[3];
                      }
                      goto LAB_1097c1e20;
                    }
                  }
                  else {
                    uVar15 = *(uint *)((long)plVar9 + lVar8 * 0x10 + 0xc);
                  }
                  if ((int)uVar15 <= (int)*(uint *)((long)puVar16 + 0x14)) {
                    if ((int)(uint)puVar6[1] < (int)*(uint *)(plVar9 + lVar8 * 2 + 1)) {
                      *(uint *)(puVar6 + 1) = *(uint *)(plVar9 + lVar8 * 2 + 1);
                    }
                    if ((int)(uint)*puVar18 < (int)(uint)*puVar6) {
                      *(uint *)puVar6 = (uint)*puVar18;
                    }
                    uVar12 = (uint)puVar6[3];
                    uVar15 = *(uint *)((long)puVar6 + 0x1c);
                    iVar13 = uVar15 - uVar12;
                    if ((iVar13 == 0) || (lVar14 = (long)iVar13, lVar8 - (int)uVar15 != lVar14))
                    goto LAB_1097c1d74;
                    puVar17 = (uint *)(plVar9 + (long)(int)uVar12 * 2 + 2);
                    puVar19 = (uint *)(plVar9 + (long)(int)uVar15 * 2 + 2);
                    puVar4 = (ulong *)(ulong)puVar19[1];
                    if (puVar17[3] != puVar19[1]) goto LAB_1097c1d74;
                    uVar11 = puVar19[3];
                    puVar4 = (ulong *)((long)plVar9 + (long)(int)uVar12 * 0x10 + 0x1c);
                    goto LAB_1097c1d20;
                  }
                  puVar6 = puVar6 + 4;
                  uVar12 = uVar12 - 1;
                } while (1 < uVar12);
              }
              puVar6 = puVar5;
              if ((uint)uVar22 == uVar21) {
                uVar12 = uVar21 << 1;
                uVar22 = (ulong)uVar12;
                puVar4 = (ulong *)(-(ulong)((uVar21 & 0x7fffffff) >> 0x1e) & 0xffffffe000000000 |
                                  uVar22 << 5);
                uVar10 = 0;
                if ((long)(int)uVar12 != 0) {
                  uVar10 = (ulong)puVar4 / (ulong)(long)(int)uVar12;
                }
                puVar23 = puVar4;
                if (uVar10 != 0x20) goto LAB_1097c20a4;
                if (puVar5 == &uStack_870) {
                  _malloc();
                  if (puVar4 == (ulong *)0x0) goto LAB_1097c20a4;
                  _memcpy();
                  puVar6 = puVar4;
                }
                else {
                  _realloc();
                  puVar23 = puVar4;
                  if (puVar6 == (ulong *)0x0) goto LAB_1097c20a4;
                }
                puVar4 = puVar6 + (long)(int)uVar21 * 4;
              }
              uVar12 = uVar21 + 1;
              puVar4[3] = 0;
              uVar10 = *puVar18;
              puVar4[1] = puVar16[3];
              *puVar4 = uVar10;
              puVar4[2] = 0;
              uVar15 = 0;
              if (uVar12 != 0) {
                uVar15 = (int)(iVar7 + uVar21) / (int)uVar12;
              }
              puVar23 = (ulong *)(ulong)uVar15;
              FUN_1097c2118();
              puVar5 = puVar6;
              uVar21 = uVar12;
              if ((int)puVar4 != 0) goto LAB_1097c1e20;
              goto LAB_1097c20a4;
            }
            puVar6 = &uStack_870;
            uVar12 = 1;
            uVar21 = uVar12;
            puVar5 = puVar6;
            goto LAB_1097c1e78;
          }
          bVar3 = puVar4 != (ulong *)&UNK_10dffca98;
          puVar23 = param_2;
        }
      }
      goto LAB_1097c1b6c;
    }
  }
LAB_1097c1b68:
  bVar3 = true;
  puVar23 = param_2;
  goto LAB_1097c1b6c;
  while( true ) {
    puVar4 = (ulong *)(ulong)puVar17[2];
    puVar23 = (ulong *)(ulong)puVar19[2];
    if (puVar17[2] != puVar19[2]) goto LAB_1097c1d74;
    puVar17 = puVar17 + 4;
    puVar19 = puVar19 + 4;
    puVar4 = puVar20 + 2;
    iVar13 = iVar13 + -1;
    if (iVar13 == 0) break;
LAB_1097c1d20:
    puVar20 = puVar4;
    puVar4 = (ulong *)(ulong)*puVar17;
    puVar23 = (ulong *)(ulong)*puVar19;
    if (*puVar17 != *puVar19) goto LAB_1097c1d74;
  }
  lVar8 = lVar8 - lVar14;
  plVar9[1] = lVar8;
  iVar13 = uVar12 - uVar15;
  do {
    *(uint *)puVar20 = uVar11;
    bVar3 = iVar13 != -1;
    iVar13 = iVar13 + 1;
    puVar20 = puVar20 + -2;
    uVar15 = uVar12;
  } while (bVar3);
LAB_1097c1d74:
  *(uint *)(puVar6 + 3) = uVar15;
  *(uint *)((long)puVar6 + 0x1c) = (uint)lVar8;
LAB_1097c1d8c:
  if (*plVar9 <= lVar8) {
    puVar23 = (ulong *)0x1;
    puVar4 = puVar6;
    FUN_1097c2118();
    if ((int)puVar4 == 0) goto LAB_1097c20a4;
    plVar9 = (long *)puVar6[2];
    lVar8 = plVar9[1];
  }
  uVar10 = *puVar18;
  plVar9[lVar8 * 2 + 3] = puVar16[3];
  plVar9[lVar8 * 2 + 2] = uVar10;
  *(long *)(puVar6[2] + 8) = *(long *)(puVar6[2] + 8) + 1;
LAB_1097c1e20:
  puVar6 = (ulong *)(ulong)(iVar7 - 1);
  puVar16 = puVar18;
  if (iVar7 < 3) goto LAB_1097c1e68;
  goto LAB_1097c1bfc;
LAB_1097c1e68:
  puVar6 = puVar5;
  uVar12 = uVar21;
  if (0 < (int)uVar21) {
LAB_1097c1e78:
    do {
      puVar4 = (ulong *)puVar6[2];
      uVar10 = puVar4[1];
      uVar22 = puVar4[uVar10 * 2 + 1];
      *(uint *)((long)puVar6 + 0xc) = *(uint *)((long)puVar4 + uVar10 * 0x10 + 0xc);
      if ((int)(uint)puVar6[1] < (int)(uint)uVar22) {
        *(uint *)(puVar6 + 1) = (uint)uVar22;
      }
      uVar15 = (uint)puVar6[3];
      uVar11 = *(uint *)((long)puVar6 + 0x1c);
      iVar7 = uVar11 - uVar15;
      lVar8 = (long)iVar7;
      if (iVar7 != 0 && uVar10 - (long)(int)uVar11 == lVar8) {
        puVar16 = puVar4 + (long)(int)uVar15 * 2 + 2;
        puVar18 = puVar4 + (long)(int)uVar11 * 2 + 2;
        if (*(uint *)((long)puVar16 + 0xc) == *(uint *)((long)puVar18 + 4)) {
          uVar1 = *(uint *)((long)puVar18 + 0xc);
          puVar17 = (uint *)((long)puVar4 + (long)(int)uVar15 * 0x10 + 0x1c);
          do {
            puVar19 = puVar17;
            puVar23 = (ulong *)(ulong)(uint)*puVar18;
            if (((uint)*puVar16 != (uint)*puVar18) ||
               (puVar23 = (ulong *)(ulong)(uint)puVar18[1], (uint)puVar16[1] != (uint)puVar18[1]))
            goto LAB_1097c1f3c;
            puVar16 = puVar16 + 2;
            puVar18 = puVar18 + 2;
            iVar7 = iVar7 + -1;
            puVar17 = puVar19 + 4;
          } while (iVar7 != 0);
          uVar10 = uVar10 - lVar8;
          puVar4[1] = uVar10;
          iVar7 = uVar15 - uVar11;
          do {
            *puVar19 = uVar1;
            bVar3 = iVar7 != -1;
            iVar7 = iVar7 + 1;
            puVar19 = puVar19 + -4;
            uVar11 = uVar15;
          } while (bVar3);
        }
      }
LAB_1097c1f3c:
      *(uint *)(puVar6 + 3) = uVar11;
      if (uVar10 == 1) {
        if (*puVar4 != 0) {
          _free();
        }
        puVar6[2] = 0;
      }
      bVar3 = 1 < (int)uVar12;
      puVar6 = puVar6 + 4;
      uVar12 = uVar12 - 1;
    } while (bVar3);
  }
  bVar3 = true;
  do {
    if ((int)uVar21 < 2) {
      uVar10 = puVar5[1];
      uVar22 = *puVar5;
      param_1[2] = puVar5[2];
      param_1[1] = uVar10;
      *param_1 = uVar22;
      if (puVar5 != &uStack_870) {
        _free();
        puVar4 = puVar5;
      }
      goto LAB_1097c1b6c;
    }
    uVar22 = (ulong)(uVar21 & 1);
    lVar14 = uVar22 << 5;
    lVar8 = (ulong)(uVar21 >> 1) * 0x20 + uVar22 * 0x20;
    bVar2 = bVar3;
    do {
      bVar3 = bVar2;
      puVar4 = (ulong *)((long)puVar5 + lVar14);
      puVar17 = (uint *)((long)puVar5 + lVar8);
      puVar6 = puVar4;
      puVar23 = puVar4;
      FUN_1097c00a0(puVar4,puVar4,puVar17,FUN_1097c1410,1,1);
      bVar2 = false;
      if ((int)puVar6 != 0) {
        bVar2 = bVar3;
      }
      if ((int)*puVar17 < (int)(uint)*puVar4) {
        *(uint *)puVar4 = *puVar17;
      }
      if ((int)puVar17[1] < (int)*(uint *)((long)puVar4 + 4)) {
        *(uint *)((long)puVar4 + 4) = puVar17[1];
      }
      iVar7 = *(int *)((long)puVar5 + lVar8 + 8);
      if (*(int *)((long)puVar5 + lVar14 + 8) < iVar7) {
        *(int *)((long)puVar5 + lVar14 + 8) = iVar7;
      }
      iVar7 = *(int *)((long)puVar5 + lVar8 + 0xc);
      if (*(int *)((long)puVar5 + lVar14 + 0xc) < iVar7) {
        *(int *)((long)puVar5 + lVar14 + 0xc) = iVar7;
      }
      puVar4 = *(ulong **)((long)puVar5 + lVar8 + 0x10);
      if ((puVar4 != (ulong *)0x0) && (*puVar4 != 0)) {
        _free();
      }
      uVar22 = uVar22 + 1;
      lVar8 = lVar8 + 0x20;
      lVar14 = lVar14 + 0x20;
    } while (uVar22 < (uVar21 & 1) + (uVar21 >> 1));
    uVar21 = uVar21 - (uVar21 >> 1);
  } while (bVar2 != false);
LAB_1097c20a4:
  if (0 < (int)uVar21) {
    uVar22 = (ulong)uVar21;
    puVar4 = puVar5 + 2;
    do {
      if (((long *)*puVar4 != (long *)0x0) && (*(long *)*puVar4 != 0)) {
        _free();
      }
      uVar22 = uVar22 - 1;
      puVar4 = puVar4 + 4;
    } while (uVar22 != 0);
  }
  if (puVar5 != &uStack_870) {
    _free(puVar5);
  }
  puVar4 = (ulong *)param_1[2];
  if ((puVar4 != (ulong *)0x0) && (*puVar4 != 0)) {
    _free();
  }
  bVar3 = false;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = (ulong)&UNK_10dffca98;
LAB_1097c1b6c:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return bVar3;
  }
  ___stack_chk_fail();
  puVar6 = (ulong *)puVar4[2];
  uVar21 = (uint)puVar23;
  if (puVar6 == (ulong *)0x0) {
    uVar21 = uVar21 + 1;
    puVar23 = (ulong *)(ulong)uVar21;
    if (uVar21 < 0xfffffff) {
      puVar6 = (ulong *)((ulong)(uVar21 * 0x10) + 0x10);
      _malloc();
      puVar4[2] = (ulong)puVar6;
      if (puVar6 != (ulong *)0x0) {
        puVar6[1] = 1;
        uVar22 = *puVar4;
        puVar6[3] = puVar4[1];
        puVar6[2] = uVar22;
        goto LAB_1097c21e0;
      }
    }
  }
  else if (*puVar6 == 0) {
    if (uVar21 < 0xfffffff) {
      puVar6 = (ulong *)((ulong)(uVar21 << 4) + 0x10);
      _malloc();
      puVar4[2] = (ulong)puVar6;
      if (puVar6 != (ulong *)0x0) {
        puVar6[1] = 0;
        goto LAB_1097c21e0;
      }
    }
  }
  else {
    uVar15 = (uint)puVar6[1];
    uVar12 = 0xfa;
    if ((int)uVar15 < 0x1f5) {
      uVar12 = uVar15;
    }
    if (uVar21 != 1) {
      uVar12 = uVar21;
    }
    uVar12 = uVar12 + uVar15;
    puVar23 = (ulong *)(ulong)uVar12;
    if (uVar12 < 0xfffffff) {
      _realloc(puVar6,(ulong)(uVar12 * 0x10) + 0x10);
      if (puVar6 != (ulong *)0x0) {
        puVar4[2] = (ulong)puVar6;
LAB_1097c21e0:
        *puVar6 = (ulong)puVar23 & 0xffffffff;
        return true;
      }
      if (((long *)puVar4[2] == (long *)0x0) || (*(long *)puVar4[2] == 0)) goto LAB_1097c2200;
    }
    _free();
  }
LAB_1097c2200:
  *puVar4 = 0;
  puVar4[1] = 0;
  puVar4[2] = (ulong)&UNK_10dffca98;
  return false;
}



/* Entry: 1097c2118; end: 1097c221f;  */

undefined8 FUN_1097c2118(ulong *param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  ulong *puVar3;
  ulong uVar4;
  
  puVar3 = (ulong *)param_1[2];
  if (puVar3 == (ulong *)0x0) {
    param_2 = param_2 + 1;
    if (param_2 < 0xfffffff) {
      puVar3 = (ulong *)((ulong)(param_2 * 0x10) + 0x10);
      _malloc();
      param_1[2] = (ulong)puVar3;
      if (puVar3 != (ulong *)0x0) {
        puVar3[1] = 1;
        uVar4 = *param_1;
        puVar3[3] = param_1[1];
        puVar3[2] = uVar4;
        goto LAB_1097c21e0;
      }
    }
  }
  else if (*puVar3 == 0) {
    if (param_2 < 0xfffffff) {
      puVar3 = (ulong *)((ulong)(param_2 << 4) + 0x10);
      _malloc();
      param_1[2] = (ulong)puVar3;
      if (puVar3 != (ulong *)0x0) {
        puVar3[1] = 0;
        goto LAB_1097c21e0;
      }
    }
  }
  else {
    uVar2 = (uint)puVar3[1];
    uVar1 = 0xfa;
    if ((int)uVar2 < 0x1f5) {
      uVar1 = uVar2;
    }
    if (param_2 != 1) {
      uVar1 = param_2;
    }
    param_2 = uVar1 + uVar2;
    if (param_2 < 0xfffffff) {
      _realloc(puVar3,(ulong)(param_2 * 0x10) + 0x10);
      if (puVar3 != (ulong *)0x0) {
        param_1[2] = (ulong)puVar3;
LAB_1097c21e0:
        *puVar3 = (ulong)param_2;
        return 1;
      }
      if (((long *)param_1[2] == (long *)0x0) || (*(long *)param_1[2] == 0)) goto LAB_1097c2200;
    }
    _free();
  }
LAB_1097c2200:
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = (ulong)&UNK_10dffca98;
  return 0;
}



/* Entry: 1097c2220; end: 1097c246b;  */

void FUN_1097c2220(long param_1,int param_2,int param_3)

{
  long lVar1;
  undefined4 uVar2;
  int iVar3;
  bool bVar4;
  long lVar5;
  undefined4 *puVar6;
  int *piVar7;
  int iVar8;
  
  iVar3 = param_3 - param_2;
  if (*(long *)(*(long *)(param_1 + 0x10) + 8) - (long)param_3 != (long)iVar3) {
    FUN_1097c2c3c(&UNK_10f580668,&UNK_10f580697);
  }
  if (iVar3 != 0) {
    lVar5 = *(long *)(param_1 + 0x10);
    lVar1 = lVar5 + 0x10 + (long)param_3 * 0x10;
    if (*(int *)(lVar5 + 0x10 + (long)param_2 * 0x10 + 0xc) == *(int *)(lVar1 + 4)) {
      uVar2 = *(undefined4 *)(lVar1 + 0xc);
      puVar6 = (undefined4 *)(lVar5 + (long)param_2 * 0x10 + 0xc);
      param_2 = param_2 - param_3;
      piVar7 = (int *)(lVar5 + (long)param_3 * 0x10 + 0x18);
      iVar8 = param_2;
      do {
        if (puVar6[1] != piVar7[-2]) {
          return;
        }
        if (puVar6[3] != *piVar7) {
          return;
        }
        puVar6 = puVar6 + 4;
        bVar4 = iVar8 != -1;
        iVar8 = iVar8 + 1;
        piVar7 = piVar7 + 4;
      } while (bVar4);
      *(long *)(lVar5 + 8) = *(long *)(lVar5 + 8) - (long)iVar3;
      do {
        *puVar6 = uVar2;
        bVar4 = param_2 != -1;
        param_2 = param_2 + 1;
        puVar6 = puVar6 + -4;
      } while (bVar4);
    }
  }
  return;
}



/* Entry: 1097c246c; end: 1097c24ef;  */

void FUN_1097c246c(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  
  puVar1 = param_1;
  FUN_1097bddbc();
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)puVar1 = 4;
    puVar1[0x12] = *param_1;
    *(uint *)(puVar1 + 0x13) =
         (*(ushort *)((long)param_1 + 6) & 0xff00 |
         (uint)(byte)((ushort)*(undefined2 *)param_1 >> 8)) << 0x10 |
         (uint)*(byte *)((long)param_1 + 3) << 8 | (uint)*(byte *)((long)param_1 + 5);
    uVar2 = *param_1;
    auVar3._2_2_ = 0;
    auVar3._0_2_ = (ushort)uVar2;
    auVar3._4_2_ = (short)((ulong)uVar2 >> 0x10);
    auVar3._6_2_ = 0;
    auVar3._8_2_ = (short)((ulong)uVar2 >> 0x20);
    auVar3._10_2_ = 0;
    auVar3._12_2_ = (short)((ulong)uVar2 >> 0x30);
    auVar3._14_2_ = 0;
    auVar3 = NEON_ucvtf(auVar3,4);
    auVar4._0_4_ = auVar3._0_4_ * 1.5259022e-05;
    auVar4._4_4_ = auVar3._4_4_ * 1.5259022e-05;
    auVar4._8_4_ = auVar3._8_4_ * 1.5259022e-05;
    auVar4._12_4_ = auVar3._12_4_ * 1.5259022e-05;
    auVar3 = NEON_ext(auVar4,auVar4,0xc,1);
    *(long *)((long)puVar1 + 0xa4) = auVar3._8_8_;
    *(long *)((long)puVar1 + 0x9c) = auVar3._0_8_;
  }
  return;
}



/* Entry: 1097c24f0; end: 1097c28e3;  */

uint FUN_1097c24f0(uint param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  
  uVar2 = param_1 & 0xffff;
  param_1 = param_1 & 0xffff0000;
  if (param_2 == 1) {
    iVar8 = 0;
    uVar5 = 0x8000;
    uVar7 = 0x18000;
    if (uVar2 < 0x8001) {
      uVar7 = 0x8000;
    }
    uVar6 = 1;
  }
  else {
    uVar5 = -1 << (ulong)(param_2 / 2 & 0x1f);
    uVar6 = ~uVar5;
    uVar7 = 0;
    if (uVar6 != 0) {
      uVar7 = 0x10000 / uVar6;
    }
    uVar5 = (int)(uVar7 * (uVar5 + 2) + 0x10000) / 2;
    uVar1 = (uVar5 ^ 0xffffffff) + uVar2 + uVar7;
    uVar4 = 0;
    if (uVar7 != 0) {
      uVar4 = uVar1 / uVar7;
    }
    uVar3 = 0;
    if (uVar7 != 0) {
      uVar3 = (int)(uVar2 - uVar5) / (int)uVar7;
    }
    if ((int)uVar1 < 0) {
      uVar4 = uVar3;
    }
    uVar7 = uVar4 * uVar7 + uVar5;
    iVar8 = (1 << (ulong)(param_2 / 2 & 0x1f)) + -2;
  }
  uVar2 = 0;
  if (uVar6 != 0) {
    uVar2 = 0x10000 / uVar6;
  }
  if ((int)(uVar5 + uVar2 * iVar8) < (int)uVar7) {
    if (param_1 == 0x7fff0000) {
      uVar7 = 0xffff;
      param_1 = 0x7fff0000;
    }
    else {
      uVar2 = -1 << (ulong)(param_2 / 2 & 0x1f);
      iVar8 = 0;
      if (param_2 != 1) {
        iVar8 = uVar2 + 2;
      }
      uVar5 = 1;
      if (param_2 != 1) {
        uVar5 = ~uVar2;
      }
      uVar2 = 0;
      if (uVar5 != 0) {
        uVar2 = 0x10000 / uVar5;
      }
      uVar7 = (int)(uVar2 * iVar8 + 0x10000) / 2;
      param_1 = param_1 + 0x10000;
    }
  }
  return param_1 | uVar7;
}



/* Entry: 1097c28e4; end: 1097c2a17;  */

void FUN_1097c28e4(int *param_1,int *param_2,undefined8 param_3,undefined8 param_4)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  ulong uVar5;
  ulong uVar6;
  undefined1 auStack_a0 [40];
  undefined1 auStack_78 [40];
  
  if (*param_1 == 0) {
    FUN_1097bde20();
    if ((param_2[3] != param_2[5]) && (param_2[7] != param_2[9])) {
      iVar2 = param_2[1];
      if (*param_2 < iVar2) {
        iVar3 = param_1[0x29];
        iVar4 = ((uint)param_1[0x24] >> 0x18) << (ulong)((uint)param_1[0x24] >> 0x16 & 3);
        uVar1 = *param_2 + (int)param_4 * 0x10000;
        uVar5 = (ulong)(uVar1 & ((int)uVar1 >> 0x1f ^ 0xffffffffU));
        FUN_1097c24f0(uVar5,iVar4);
        uVar1 = iVar2 + (int)param_4 * 0x10000;
        if (iVar3 <= (int)uVar1 >> 0x10) {
          uVar1 = iVar3 * 0x10000 - 1;
        }
        uVar6 = (ulong)uVar1;
        func_0x0001097c25ec(uVar6,iVar4);
        if ((int)uVar5 <= (int)uVar6) {
          func_0x0001097c2890(auStack_78,iVar4,uVar5,param_2 + 2,param_3,param_4);
          func_0x0001097c2890(auStack_a0,iVar4,uVar5,param_2 + 6,param_3,param_4);
          func_0x0001097ac350(param_1,auStack_78,auStack_a0,uVar5,uVar6);
        }
      }
    }
    return;
  }
  if (iRam000000011382add8 < 10) {
    _fprintf(*(undefined8 *)PTR____stderrp_11034bdc8,&UNK_10f5808c0);
    iRam000000011382add8 = iRam000000011382add8 + 1;
  }
  return;
}



/* Entry: 1097c2a18; end: 1097c2c3b;  */

void FUN_1097c2a18(long param_1,long param_2,uint param_3,uint param_4)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  float *pfVar5;
  uint *puVar6;
  ulong uVar7;
  undefined8 uVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  ulong uVar12;
  uint uVar13;
  float fVar14;
  float fVar15;
  ulong uVar16;
  undefined8 uVar17;
  
  uVar13 = 0x20028888;
  if ((param_3 & 0xffff) != 0) {
    uVar13 = param_3;
  }
  if (0 < (int)param_4) {
    uVar4 = uVar13 >> 0xc & 0xf;
    uVar3 = uVar13 >> 0x16;
    uVar1 = uVar4 << (ulong)(uVar3 & 3);
    uVar2 = (uVar13 & 0xf) << (ulong)(uVar3 & 3);
    uVar7 = NEON_ushl(CONCAT44(uVar13,uVar13),0xfffffffcfffffff8,4);
    uVar12 = NEON_ushl(uVar7 & 0xf0000000f,CONCAT44(uVar3,uVar3) & 0x300000003,4);
    uVar13 = (uint)(uVar12 >> 0x20);
    uVar8 = NEON_ushl(0xffffffffffffffff,uVar12,4);
    fVar9 = *(float *)(&UNK_10dffcab0 + (ulong)uVar1 * 4);
    fVar10 = *(float *)(&UNK_10dffcab0 + (ulong)uVar2 * 4);
    fVar11 = *(float *)(&UNK_10dffcab0 + (uVar12 & 0xffffffff) * 4);
    fVar14 = *(float *)(&UNK_10dffcab0 + (ulong)uVar13 * 4);
    uVar7 = (ulong)param_4 + 1;
    puVar6 = (uint *)(param_2 + (ulong)param_4 * 4);
    pfVar5 = (float *)(param_1 + (ulong)param_4 * 0x10);
    do {
      puVar6 = puVar6 + -1;
      uVar3 = *puVar6;
      fVar15 = 1.0;
      if (uVar4 != 0) {
        fVar15 = fVar9 * (float)(uVar3 >> (ulong)(0x20 - uVar1 & 0x1f) &
                                ~(-1 << (ulong)(uVar1 & 0x1f)));
      }
      pfVar5[-4] = fVar15;
      uVar16 = NEON_ushl(CONCAT44(uVar3,uVar3),CONCAT44(-(0x10 - uVar13),-(0x18 - (int)uVar12)),4);
      uVar17 = NEON_ucvtf(uVar16 & CONCAT17(~(byte)((ulong)uVar8 >> 0x38),
                                            CONCAT16(~(byte)((ulong)uVar8 >> 0x30),
                                                     CONCAT15(~(byte)((ulong)uVar8 >> 0x28),
                                                              CONCAT14(~(byte)((ulong)uVar8 >> 0x20)
                                                                       ,CONCAT13(~(byte)((ulong)
                                                  uVar8 >> 0x18),
                                                  CONCAT12(~(byte)((ulong)uVar8 >> 0x10),
                                                           CONCAT11(~(byte)((ulong)uVar8 >> 8),
                                                                    ~(byte)uVar8))))))),4);
      *(ulong *)(pfVar5 + -3) =
           CONCAT44(fVar14 * (float)((ulong)uVar17 >> 0x20),fVar11 * (float)uVar17);
      pfVar5[-1] = fVar10 * (float)(uVar3 >> (ulong)(8 - uVar2 & 0x1f) &
                                   ~(-1 << (ulong)(uVar2 & 0x1f)));
      uVar7 = uVar7 - 1;
      pfVar5 = pfVar5 + -4;
    } while (1 < uVar7);
  }
  return;
}



/* Entry: 1097c2c3c; end: 1097c2c97;  */

void FUN_1097c2c3c(void)

{
  if (iRam000000011382add8 < 10) {
    _fprintf(*(undefined8 *)PTR____stderrp_11034bdc8,&UNK_10f5808c0);
    iRam000000011382add8 = iRam000000011382add8 + 1;
  }
  return;
}



/* Entry: 1097c2c98; end: 1097c2f83;  */

void FUN_1097c2c98(uint *param_1,long param_2,long param_3,long param_4,int param_5,int param_6,
                  int param_7,int param_8,uint param_9,uint param_10,int param_11,int param_12)

{
  uint uVar1;
  uint *puVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  long lVar7;
  int iStack_78;
  int iStack_74;
  int iStack_70;
  int iStack_6c;
  undefined8 uStack_68;
  
  uVar5 = param_11 + param_9;
  uVar6 = param_12 + param_10;
  param_1[2] = uVar5;
  param_1[3] = uVar6;
  uVar4 = param_9 & ((int)param_9 >> 0x1f ^ 0xffffffffU);
  uVar3 = param_10 & ((int)param_10 >> 0x1f ^ 0xffffffffU);
  *param_1 = uVar4;
  param_1[1] = uVar3;
  if ((int)*(uint *)(param_4 + 0xa0) <= (int)uVar5) {
    uVar5 = *(uint *)(param_4 + 0xa0);
  }
  param_1[2] = uVar5;
  if ((int)*(uint *)(param_4 + 0xa4) <= (int)uVar6) {
    uVar6 = *(uint *)(param_4 + 0xa4);
  }
  param_1[3] = uVar6;
  param_1[4] = 0;
  param_1[5] = 0;
  if ((int)uVar5 <= (int)uVar4 || (int)uVar6 <= (int)uVar3) {
    param_1[0] = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[3] = 0;
    return;
  }
  if (*(int *)(param_4 + 0x24) != 0) {
    lVar7 = *(long *)(param_4 + 0x18);
    if ((lVar7 == 0) || ((int)*(long *)(lVar7 + 8) == 1)) {
      puVar2 = (uint *)(param_4 + 8);
      if (lVar7 != 0) {
        puVar2 = (uint *)(lVar7 + 0x10);
      }
      uVar1 = *puVar2;
      if ((int)uVar4 < (int)uVar1) {
        *param_1 = uVar1;
        uVar4 = uVar1;
      }
      uVar1 = puVar2[2];
      if ((int)uVar1 < (int)uVar5) {
        param_1[2] = uVar1;
        uVar5 = uVar1;
      }
      uVar1 = puVar2[1];
      if ((int)uVar3 < (int)uVar1) {
        param_1[1] = uVar1;
        uVar3 = uVar1;
      }
      uVar1 = puVar2[3];
      if ((int)uVar1 < (int)uVar6) {
        param_1[3] = uVar1;
        uVar6 = uVar1;
      }
      if (((int)uVar5 <= (int)uVar4) || ((int)uVar6 <= (int)uVar3)) {
        param_1[0] = 0;
        param_1[1] = 0;
        param_1[2] = 0;
        param_1[3] = 0;
        *(undefined **)(param_1 + 4) = &UNK_10dffca88;
        return;
      }
    }
    else {
      if (*(long *)(lVar7 + 8) == 0) {
        return;
      }
      puVar2 = param_1;
      FUN_1097bfecc(param_1,param_1);
      if ((int)puVar2 == 0) {
        return;
      }
      if ((*(long *)(param_1 + 4) != 0) && (*(long *)(*(long *)(param_1 + 4) + 8) == 0)) {
        return;
      }
    }
  }
  lVar7 = *(long *)(param_4 + 0x58);
  if (lVar7 != 0) {
    iStack_78 = *(int *)(param_4 + 0x60);
    iStack_74 = *(int *)(param_4 + 100);
    uStack_68 = 0;
    iStack_70 = *(int *)(lVar7 + 0xa0) + iStack_78;
    iStack_6c = *(int *)(lVar7 + 0xa4) + iStack_74;
    puVar2 = param_1;
    FUN_1097bfecc(param_1,param_1,&iStack_78);
    if ((int)puVar2 == 0) {
      return;
    }
    if ((*(long *)(param_1 + 4) != 0) && (*(long *)(*(long *)(param_1 + 4) + 8) == 0)) {
      return;
    }
    if ((*(int *)(*(long *)(param_4 + 0x58) + 0x24) != 0) &&
       (puVar2 = param_1,
       FUN_1097c2f84(param_1,*(long *)(param_4 + 0x58) + 8,-*(int *)(param_4 + 0x60),
                     -*(int *)(param_4 + 100)), (int)puVar2 == 0)) {
      return;
    }
  }
  if ((((((*(int *)(param_2 + 0x24) == 0) || (*(int *)(param_2 + 0x2c) == 0)) ||
        (*(int *)(param_2 + 0x28) == 0)) ||
       (puVar2 = param_1, FUN_1097c2f84(param_1,param_2 + 8,param_9 - param_5,param_10 - param_6),
       (int)puVar2 != 0)) &&
      (((lVar7 = *(long *)(param_2 + 0x58), lVar7 == 0 || (*(int *)(lVar7 + 0x24) == 0)) ||
       ((*(int *)(lVar7 + 0x2c) == 0 ||
        ((*(int *)(lVar7 + 0x28) == 0 ||
         (puVar2 = param_1,
         FUN_1097c2f84(param_1,lVar7 + 8,(param_9 - param_5) + *(int *)(param_2 + 0x60),
                       (param_10 - param_6) + *(int *)(param_2 + 100)), (int)puVar2 != 0)))))))) &&
     ((param_3 != 0 && (*(int *)(param_3 + 0x24) != 0)))) {
    if (((((*(int *)(param_3 + 0x2c) == 0) || (*(int *)(param_3 + 0x28) == 0)) ||
         (puVar2 = param_1, FUN_1097c2f84(param_1,param_3 + 8,param_9 - param_7,param_10 - param_8),
         (int)puVar2 != 0)) &&
        ((lVar7 = *(long *)(param_3 + 0x58), lVar7 != 0 && (*(int *)(lVar7 + 0x24) != 0)))) &&
       ((*(int *)(lVar7 + 0x2c) != 0 && (*(int *)(lVar7 + 0x28) != 0)))) {
      FUN_1097c2f84(param_1,lVar7 + 8,*(int *)(param_3 + 0x60) + (param_9 - param_7),
                    *(int *)(param_3 + 100) + (param_10 - param_8));
    }
  }
  return;
}



/* Entry: 1097c2f84; end: 1097c310f;  */

void FUN_1097c2f84(int *param_1,int *param_2,undefined8 param_3,undefined8 param_4)

{
  int *piVar1;
  long lVar2;
  int iVar3;
  long lVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  
  lVar2 = *(long *)(param_1 + 4);
  iVar7 = (int)param_3;
  iVar8 = (int)param_4;
  if ((lVar2 == 0) || (*(int *)(lVar2 + 8) == 1)) {
    lVar4 = *(long *)(param_2 + 4);
    if ((lVar4 == 0) || (*(int *)(lVar4 + 8) == 1)) {
      piVar1 = param_1;
      if (lVar2 != 0) {
        piVar1 = (int *)(lVar2 + 0x10);
      }
      if (lVar4 != 0) {
        param_2 = (int *)(lVar4 + 0x10);
      }
      iVar5 = *param_2 + iVar7;
      iVar3 = *piVar1;
      if (*piVar1 < iVar5) {
        *piVar1 = iVar5;
        iVar3 = iVar5;
      }
      iVar7 = param_2[2] + iVar7;
      iVar5 = piVar1[2];
      if (iVar7 < piVar1[2]) {
        piVar1[2] = iVar7;
        iVar5 = iVar7;
      }
      iVar7 = param_2[1] + iVar8;
      iVar6 = piVar1[1];
      if (piVar1[1] < iVar7) {
        piVar1[1] = iVar7;
        iVar6 = iVar7;
      }
      iVar8 = param_2[3] + iVar8;
      iVar7 = piVar1[3];
      if (iVar8 < piVar1[3]) {
        piVar1[3] = iVar8;
        iVar7 = iVar8;
      }
      if (iVar3 < iVar5 && iVar6 < iVar7) {
        return;
      }
      param_1[0] = 0;
      param_1[1] = 0;
      param_1[2] = 0;
      param_1[3] = 0;
      *(undefined **)(param_1 + 4) = &UNK_10dffca88;
      return;
    }
  }
  else {
    lVar4 = *(long *)(param_2 + 4);
    if (lVar4 == 0) goto LAB_1097c3088;
  }
  if (*(long *)(lVar4 + 8) == 0) {
    return;
  }
LAB_1097c3088:
  if (iVar8 == 0 && iVar7 == 0) {
    FUN_1097bfecc(param_1,param_1,param_2);
  }
  else {
    func_0x0001097c19b4(param_1,-iVar7,-iVar8);
    piVar1 = param_1;
    FUN_1097bfecc(param_1,param_1,param_2);
    if ((int)piVar1 != 0) {
      func_0x0001097c19b4(param_1,param_3,param_4);
    }
  }
  return;
}



/* Entry: 1097c3110; end: 1097c3937;  */

void FUN_1097c3110(uint param_1,long param_2,long param_3,long param_4,undefined8 param_5,
                  undefined8 param_6,undefined8 param_7,undefined8 param_8,int param_9,int param_10,
                  undefined4 param_11,undefined4 param_12)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  long *plVar6;
  long lVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  uint auStack_f0 [2];
  long lStack_e8;
  long lStack_e0;
  long lStack_d8;
  int iStack_d0;
  int iStack_cc;
  int iStack_c8;
  int iStack_c4;
  int iStack_c0;
  int iStack_bc;
  int iStack_b8;
  int iStack_b4;
  uint uStack_b0;
  uint uStack_ac;
  uint uStack_a8;
  code *pcStack_a0;
  undefined8 uStack_98;
  int iStack_90;
  int iStack_8c;
  int iStack_88;
  int iStack_84;
  long alStack_80 [2];
  long *plStack_70;
  
  FUN_1097bde20(param_2);
  if (param_3 != 0) {
    FUN_1097bde20(param_3);
  }
  FUN_1097bde20(param_4);
  uStack_b0 = *(uint *)(param_2 + 0x88);
  iVar8 = (int)param_6;
  iVar9 = (int)param_5;
  if ((param_3 == 0) || (uStack_ac = *(uint *)(param_3 + 0x88), (uStack_ac >> 0xd & 1) != 0)) {
    uStack_a8 = *(uint *)(param_4 + 0x88);
    uStack_ac = 0x2002;
  }
  else {
    uStack_a8 = *(uint *)(param_4 + 0x88);
  }
  alStack_80[0] = 0;
  alStack_80[1] = 0;
  plStack_70 = (long *)&UNK_10dffca88;
  plVar6 = alStack_80;
  FUN_1097c2c98(plVar6,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,param_10,
                param_11,param_12);
  if ((int)plVar6 != 0) {
    iStack_90 = (int)alStack_80[0];
    iStack_8c = (int)((ulong)alStack_80[0] >> 0x20);
    iVar10 = iStack_90 - (param_9 - iVar9);
    iStack_88 = (int)alStack_80[1];
    iStack_84 = (int)((ulong)alStack_80[1] >> 0x20);
    iVar1 = iStack_88 - (param_9 - iVar9);
    iVar2 = iStack_8c - (param_10 - iVar8);
    _iStack_90 = CONCAT44(iVar2,iVar10);
    iVar3 = iStack_84 - (param_10 - iVar8);
    _iStack_88 = CONCAT44(iVar3,iVar1);
    lVar7 = param_2;
    func_0x0001097c3490(param_2,&iStack_90,&uStack_b0);
    if ((int)lVar7 != 0) {
      iVar4 = iVar9 - (int)param_7;
      iVar5 = iVar8 - (int)param_8;
      _iStack_90 = CONCAT44(iVar2 - iVar5,iVar10 - iVar4);
      _iStack_88 = CONCAT44(iVar3 - iVar5,iVar1 - iVar4);
      lVar7 = param_3;
      func_0x0001097c3490(param_3,&iStack_90,&uStack_ac);
      if ((int)lVar7 != 0) {
        if ((((uStack_b0 ^ 0xffffffff) & 0x800880) == 0) || ((uStack_b0 & 0x1080080) == 0x1080080))
        {
          uStack_b0 = uStack_b0 | 0x2000;
        }
        if ((((uStack_ac ^ 0xffffffff) & 0x800880) == 0) || ((uStack_ac & 0x1080080) == 0x1080080))
        {
          uStack_ac = uStack_ac | 0x2000;
        }
        auStack_f0[0] =
             (uint)(byte)(&UNK_10dffcaf0)
                         [((ulong)(uStack_a8 >> 0xc) & 2 |
                          (ulong)((uStack_ac & uStack_b0) >> 0xd & 1)) + (ulong)param_1 * 4];
        if (lRam000000011386a1d8 == 0) {
          FUN_1097bea00();
        }
        FUN_1097be5b0();
        lStack_e8 = param_2;
        lStack_e0 = param_3;
        lStack_d8 = param_4;
        if (plStack_70 == (long *)0x0) {
          plVar6 = alStack_80;
          iVar10 = 0;
        }
        else {
          if ((int)plStack_70[1] == 0) goto LAB_1097c3450;
          plVar6 = plStack_70 + 2;
          iVar10 = (int)plStack_70[1] + -1;
        }
        iVar10 = iVar10 + 1;
        do {
          iStack_c0 = (int)*plVar6;
          iStack_bc = *(int *)((long)plVar6 + 4);
          iStack_d0 = (iVar9 - param_9) + iStack_c0;
          iStack_cc = (iVar8 - param_10) + iStack_bc;
          iStack_c8 = ((int)param_7 - param_9) + iStack_c0;
          iStack_c4 = ((int)param_8 - param_10) + iStack_bc;
          iStack_b8 = (int)plVar6[1] - iStack_c0;
          iStack_b4 = *(int *)((long)plVar6 + 0xc) - iStack_bc;
          (*pcStack_a0)(uStack_98,auStack_f0);
          plVar6 = plVar6 + 2;
          iVar10 = iVar10 + -1;
        } while (iVar10 != 0);
      }
    }
  }
LAB_1097c3450:
  if ((plStack_70 != (long *)0x0) && (*plStack_70 != 0)) {
    _free();
  }
  return;
}



/* Entry: 1097c3938; end: 1097c3a3f;  */

void FUN_1097c3938(long param_1,undefined8 *param_2,long *param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  uint uVar7;
  ulong uVar8;
  int iVar9;
  int iVar10;
  undefined8 uStack_70;
  undefined4 uStack_68;
  
  uVar7 = (int)*param_2 << 0x10;
  uVar8 = CONCAT44((int)((ulong)*param_2 >> 0x20) << 0x10,uVar7) | 0x800000008000;
  iVar9 = (int)param_2[1] * 0x10000 + -0x8000;
  iVar10 = (int)((ulong)param_2[1] >> 0x20) * 0x10000 + -0x8000;
  if (param_1 == 0) {
    param_3[1] = (long)(int)(uVar8 >> 0x20);
    *param_3 = (long)(int)(uVar7 | 0x8000);
    param_3[3] = (long)iVar10;
    param_3[2] = (long)iVar9;
  }
  else {
    uVar7 = 0;
    lVar3 = -0x8000000000000000;
    lVar4 = 0x7fffffffffffffff;
    lVar6 = 0x7fffffffffffffff;
    lVar5 = -0x8000000000000000;
    do {
      uStack_70 = uVar8 ^ (uVar8 ^ CONCAT44(iVar10,iVar9)) &
                          CONCAT44(-(uint)((int)((uint)(uVar7 < 2) << 0x1f) < 0),
                                   -(uint)((int)((uint)((uVar7 & 1) == 0) << 0x1f) < 0));
      uStack_68 = 0x10000;
      lVar2 = param_1;
      func_0x0001097bf6a0(param_1,&uStack_70);
      if ((int)lVar2 == 0) {
        return;
      }
      lVar2 = (long)(int)uStack_70;
      lVar1 = (long)uStack_70._4_4_;
      if (lVar2 <= lVar4) {
        lVar4 = lVar2;
      }
      if (lVar1 <= lVar6) {
        lVar6 = lVar1;
      }
      if (lVar3 <= lVar2) {
        lVar3 = lVar2;
      }
      if (lVar5 <= lVar1) {
        lVar5 = lVar1;
      }
      uVar7 = uVar7 + 1;
    } while (uVar7 != 4);
    *param_3 = lVar4;
    param_3[1] = lVar6;
    param_3[2] = lVar3;
    param_3[3] = lVar5;
  }
  return;
}



/* Entry: 1097c3a40; end: 1097c3b23;  */

undefined * FUN_1097c3a40(long param_1,undefined4 param_2)

{
  uint uVar1;
  undefined *puVar2;
  
  if (*(int *)(param_1 + 0x1c) == 0) {
    puVar2 = (undefined *)0x1;
    _calloc(1,0x218);
    if (puVar2 == (undefined *)0x0) {
      puVar2 = &DAT_10dffecb8;
    }
    else {
      FUN_1097f6418();
      *(undefined8 *)(puVar2 + 0x1e8) = 0x3ff0000000000000;
      *(undefined8 *)(puVar2 + 0x1f8) = 0;
      *(undefined8 *)(puVar2 + 0x1f0) = 0;
      *(undefined8 *)(puVar2 + 0x200) = 0x3ff0000000000000;
      *(undefined8 *)(puVar2 + 0x210) = 0;
      *(undefined8 *)(puVar2 + 0x208) = 0;
      *(undefined4 *)(puVar2 + 0x1e4) = 0;
      FUN_1097f6324(param_1);
      *(long *)(puVar2 + 0x170) = param_1;
      *(undefined8 *)(puVar2 + 0x178) = 1;
      *(undefined4 *)(puVar2 + 0x180) = 0;
      *(undefined4 *)(puVar2 + 0x1d8) = param_2;
      *(undefined8 *)(puVar2 + 0x1dc) = 0;
      *(undefined8 *)(puVar2 + 0x188) = 0;
      *(undefined8 *)(puVar2 + 400) = 0;
      *(undefined8 *)(puVar2 + 0x198) = 0;
      *(undefined **)(puVar2 + 0x1a0) = &UNK_10dffca88;
      *(undefined8 *)(puVar2 + 0x1a8) = 0;
      *(undefined8 *)(puVar2 + 0x1b0) = 0;
      *(undefined8 *)(puVar2 + 0x1b8) = 0;
      *(undefined **)(puVar2 + 0x1c0) = &UNK_10dffca88;
      *(undefined8 *)(puVar2 + 0x1c8) = 0;
      *(undefined8 *)(puVar2 + 0x1d0) = 0;
    }
    return puVar2;
  }
  uVar1 = *(int *)(param_1 + 0x1c) - 6;
  if (uVar1 < 0x22) {
    return (&PTR_DAT_110b11b70)[uVar1];
  }
  return &DAT_10dffecb8;
}



/* Entry: 1097c3b24; end: 1097c3b9f;  */

void FUN_1097c3b24(long param_1,undefined8 *param_2)

{
  uint uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  if (*(int *)(param_1 + 0x1c) == 0) {
    uVar4 = param_2[2];
    uVar3 = param_2[5];
    uVar2 = param_2[4];
    uVar6 = param_2[1];
    uVar5 = *param_2;
    *(undefined8 *)(param_1 + 0x200) = param_2[3];
    *(undefined8 *)(param_1 + 0x1f8) = uVar4;
    *(undefined8 *)(param_1 + 0x210) = uVar3;
    *(undefined8 *)(param_1 + 0x208) = uVar2;
    *(undefined8 *)(param_1 + 0x1f0) = uVar6;
    *(undefined8 *)(param_1 + 0x1e8) = uVar5;
    if ((((*(double *)(param_1 + 0x1e8) == 1.0) && (*(double *)(param_1 + 0x1f0) == 0.0)) &&
        (*(double *)(param_1 + 0x1f8) == 0.0)) &&
       ((*(double *)(param_1 + 0x200) == 1.0 && (*(double *)(param_1 + 0x208) == 0.0)))) {
      uVar1 = (uint)(*(double *)(param_1 + 0x210) != 0.0);
    }
    else {
      uVar1 = 1;
    }
    *(uint *)(param_1 + 0x1e4) = uVar1;
    return;
  }
  return;
}



/* Entry: 1097c3ba0; end: 1097c3c47;  */

undefined * FUN_1097c3ba0(void)

{
  undefined *puVar1;
  
  puVar1 = (undefined *)0x1;
  _calloc(1,0x170);
  if (puVar1 == (undefined *)0x0) {
    puVar1 = &DAT_10dffecb8;
  }
  else {
    FUN_1097f6418();
  }
  return puVar1;
}



/* Entry: 1097c3c48; end: 1097c3c4f;  */

void FUN_1097c3c48(long param_1,undefined8 *param_2)

{
  long *plVar1;
  
  plVar1 = *(long **)(param_1 + 0x170);
  if (*(int *)((long)plVar1 + 0x1c) == 0) {
    if ((*(byte *)(plVar1 + 6) >> 1 & 1) == 0) {
      if ((*(code **)(*plVar1 + 0x68) != (code *)0x0) &&
         ((**(code **)(*plVar1 + 0x68))(plVar1,param_2), (int)plVar1 != 0)) {
        return;
      }
      param_2[1] = 0xffffff00ffffff;
      *param_2 = 0xff800000ff800000;
      return;
    }
    FUN_1097f610c(plVar1,0xc);
  }
  *param_2 = 0;
  param_2[1] = 0;
  return;
}



/* Entry: 1097c3c50; end: 1097c40a7;  */

long * FUN_1097c3c50(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long *plVar1;
  undefined8 uVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 auStack_60 [2];
  int iStack_50;
  int iStack_4c;
  undefined8 uStack_48;
  
  *(undefined8 *)((long)param_1 + 0x1dc) = 0;
  plVar1 = (long *)param_1[0x2e];
  if (*(code **)(*plVar1 + 0x88) == (code *)0x0) {
    FUN_1097c4988(param_1,param_2,param_3,param_4,&iStack_50);
    plVar1 = (long *)0x64;
  }
  else {
    (**(code **)(*plVar1 + 0x88))(plVar1,param_2,param_3,param_4);
    if ((int)plVar1 - 1U < 0x2c) {
      return plVar1;
    }
    FUN_1097c4988(param_1,param_2,param_3,param_4,&iStack_50);
    if ((int)plVar1 == 0x69) {
      plVar1 = param_1;
      FUN_1097c4a44(param_1,param_3,auStack_60,(undefined8 *)((long)param_1 + 0x1dc),0);
      uVar4 = NEON_smax(CONCAT44(iStack_4c,iStack_50),auStack_60[0],4);
      uVar2 = NEON_smin(CONCAT44((int)((ulong)uStack_48 >> 0x20) + iStack_4c,
                                 (int)uStack_48 + iStack_50),
                        CONCAT44((int)((ulong)auStack_60[1] >> 0x20) +
                                 (int)((ulong)auStack_60[0] >> 0x20),
                                 (int)auStack_60[1] + (int)auStack_60[0]),4);
      iStack_50 = (int)uVar4;
      iVar3 = (int)((ulong)uVar2 >> 0x20);
      iStack_4c = (int)((ulong)uVar4 >> 0x20);
      if (iStack_50 < (int)uVar2 && iStack_4c < iVar3) {
        uStack_48 = CONCAT44(iVar3 - iStack_4c,(int)uVar2 - iStack_50);
      }
      else {
        iStack_50 = 0;
        iStack_4c = 0;
        uStack_48 = 0;
      }
    }
  }
  func_0x0001097c4de4(param_1,&iStack_50,plVar1);
  return param_1;
}



/* Entry: 1097c40a8; end: 1097c42bb;  */

long * FUN_1097c40a8(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                    long *param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                    undefined8 param_9,undefined8 param_10)

{
  long *plVar1;
  uint uVar2;
  undefined8 uVar3;
  int iVar4;
  undefined8 uVar5;
  undefined8 auStack_90 [2];
  int iStack_80;
  int iStack_7c;
  undefined8 uStack_78;
  
  *(undefined8 *)((long)param_2 + 0x1dc) = 0;
  plVar1 = (long *)param_2[0x2e];
  if (*(code **)(*plVar1 + 0x98) == (code *)0x0) {
    FUN_1097c4988(param_2,param_3,param_4,param_10,&iStack_80);
    plVar1 = (long *)0x64;
  }
  else {
    (**(code **)(*plVar1 + 0x98))
              (param_1,plVar1,param_3,param_4,param_5,param_6,param_7,param_8,param_9,param_10);
    if ((int)plVar1 - 1U < 0x2c) {
      return plVar1;
    }
    FUN_1097c4988(param_2,param_3,param_4,param_10,&iStack_80);
    if ((int)plVar1 == 0x69) {
      plVar1 = param_2;
      FUN_1097c4a44(param_2,param_4,auStack_90,(undefined8 *)((long)param_2 + 0x1dc),4);
      uVar5 = NEON_smax(CONCAT44(iStack_7c,iStack_80),auStack_90[0],4);
      uVar3 = NEON_smin(CONCAT44((int)((ulong)uStack_78 >> 0x20) + iStack_7c,
                                 (int)uStack_78 + iStack_80),
                        CONCAT44((int)((ulong)auStack_90[1] >> 0x20) +
                                 (int)((ulong)auStack_90[0] >> 0x20),
                                 (int)auStack_90[1] + (int)auStack_90[0]),4);
      iStack_80 = (int)uVar5;
      iVar4 = (int)((ulong)uVar3 >> 0x20);
      iStack_7c = (int)((ulong)uVar5 >> 0x20);
      if (iStack_80 < (int)uVar3 && iStack_7c < iVar4) {
        uStack_78 = CONCAT44(iVar4 - iStack_7c,(int)uVar3 - iStack_80);
      }
      else {
        iStack_80 = 0;
        iStack_7c = 0;
        uStack_78 = 0;
      }
    }
  }
  uVar2 = (uint)param_3;
  if ((uVar2 - 0xb < 0x12) || ((uVar2 < 10 && ((1 << (ulong)(uVar2 & 0x1f) & 0x2e7U) != 0)))) {
    FUN_1097db9a4(param_1,param_5,param_6,param_7,param_8,auStack_90);
    if ((int)param_5 != 0) {
      return param_5;
    }
    uVar5 = NEON_smax(CONCAT44(iStack_7c,iStack_80),auStack_90[0],4);
    uVar3 = NEON_smin(CONCAT44((int)((ulong)uStack_78 >> 0x20) + iStack_7c,
                               (int)uStack_78 + iStack_80),
                      CONCAT44((int)((ulong)auStack_90[1] >> 0x20) +
                               (int)((ulong)auStack_90[0] >> 0x20),
                               (int)auStack_90[1] + (int)auStack_90[0]),4);
    iStack_80 = (int)uVar5;
    iVar4 = (int)((ulong)uVar3 >> 0x20);
    iStack_7c = (int)((ulong)uVar5 >> 0x20);
    if (iStack_80 < (int)uVar3 && iStack_7c < iVar4) {
      uStack_78 = CONCAT44(iVar4 - iStack_7c,(int)uVar3 - iStack_80);
    }
    else {
      iStack_80 = 0;
      iStack_7c = 0;
      uStack_78 = 0;
    }
  }
  func_0x0001097c4de4(param_2,&iStack_80,plVar1);
  return param_2;
}



/* Entry: 1097c42bc; end: 1097c44a7;  */

long * FUN_1097c42bc(long *param_1,undefined8 param_2,undefined8 param_3,long param_4,
                    undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  long *plVar1;
  uint uVar2;
  undefined8 uVar3;
  int iVar4;
  undefined8 uVar5;
  undefined8 uStack_60;
  undefined8 uStack_58;
  int iStack_50;
  int iStack_4c;
  undefined8 uStack_48;
  
  plVar1 = (long *)param_1[0x2e];
  if (*(code **)(*plVar1 + 0xa0) == (code *)0x0) {
    FUN_1097c4988(param_1,param_2,param_3,param_7,&iStack_50);
    plVar1 = (long *)0x64;
  }
  else {
    (**(code **)(*plVar1 + 0xa0))(plVar1,param_2,param_3,param_4,param_5,param_6,param_7);
    if ((int)plVar1 - 1U < 0x2c) {
      return plVar1;
    }
    FUN_1097c4988(param_1,param_2,param_3,param_7,&iStack_50);
    if ((int)plVar1 == 0x69) {
      plVar1 = param_1;
      FUN_1097c4a44(param_1,param_3,&uStack_60,(long)param_1 + 0x1dc,3);
      uVar5 = NEON_smax(CONCAT44(iStack_4c,iStack_50),uStack_60,4);
      uVar3 = NEON_smin(CONCAT44((int)((ulong)uStack_48 >> 0x20) + iStack_4c,
                                 (int)uStack_48 + iStack_50),
                        CONCAT44((int)((ulong)uStack_58 >> 0x20) + (int)((ulong)uStack_60 >> 0x20),
                                 (int)uStack_58 + (int)uStack_60),4);
      iStack_50 = (int)uVar5;
      iVar4 = (int)((ulong)uVar3 >> 0x20);
      iStack_4c = (int)((ulong)uVar5 >> 0x20);
      if (iStack_50 < (int)uVar3 && iStack_4c < iVar4) {
        uStack_48 = CONCAT44(iVar4 - iStack_4c,(int)uVar3 - iStack_50);
      }
      else {
        iStack_50 = 0;
        iStack_4c = 0;
        uStack_48 = 0;
      }
    }
  }
  uVar2 = (uint)param_2;
  if ((uVar2 - 0xb < 0x12) || ((uVar2 < 10 && ((1 << (ulong)(uVar2 & 0x1f) & 0x2e7U) != 0)))) {
    if ((*(int *)(param_4 + 0x14) < *(int *)(param_4 + 0x1c)) &&
       (*(int *)(param_4 + 0x18) < *(int *)(param_4 + 0x20))) {
      func_0x0001097ed40c((int *)(param_4 + 0x14),&uStack_60);
    }
    else {
      uStack_58 = 0;
      uStack_60 = 0;
    }
    uVar5 = NEON_smax(CONCAT44(iStack_4c,iStack_50),uStack_60,4);
    uVar3 = NEON_smin(CONCAT44((int)((ulong)uStack_48 >> 0x20) + iStack_4c,
                               (int)uStack_48 + iStack_50),
                      CONCAT44((int)((ulong)uStack_58 >> 0x20) + (int)((ulong)uStack_60 >> 0x20),
                               (int)uStack_58 + (int)uStack_60),4);
    iStack_50 = (int)uVar5;
    iVar4 = (int)((ulong)uVar3 >> 0x20);
    iStack_4c = (int)((ulong)uVar5 >> 0x20);
    if (iStack_50 < (int)uVar3 && iStack_4c < iVar4) {
      uStack_48 = CONCAT44(iVar4 - iStack_4c,(int)uVar3 - iStack_50);
    }
    else {
      iStack_50 = 0;
      iStack_4c = 0;
      uStack_48 = 0;
    }
  }
  func_0x0001097c4de4(param_1,&iStack_50,plVar1);
  return param_1;
}



/* Entry: 1097c44a8; end: 1097c46d3;  */

long * FUN_1097c44a8(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                    undefined8 param_5,long *param_6,undefined8 param_7)

{
  long *plVar1;
  code *pcVar2;
  uint uVar3;
  undefined8 uVar4;
  int iVar5;
  undefined8 uVar6;
  undefined8 auStack_80 [2];
  int iStack_70;
  int iStack_6c;
  undefined8 uStack_68;
  
  *(undefined8 *)((long)param_1 + 0x1dc) = 0;
  plVar1 = (long *)param_1[0x2e];
  pcVar2 = *(code **)(*plVar1 + 0xb0);
  if (pcVar2 == (code *)0x0) {
    pcVar2 = *(code **)(*plVar1 + 0xc0);
    if (pcVar2 == (code *)0x0) {
      FUN_1097c4988(param_1,param_2,param_3,param_7,&iStack_70);
      plVar1 = (long *)0x64;
      goto LAB_1097c4608;
    }
    (*pcVar2)(plVar1,param_2,param_3,0,0,param_4,param_5,0,0,param_6,param_7);
  }
  else {
    (*pcVar2)(plVar1,param_2,param_3,param_4,param_5,param_6,param_7);
  }
  if ((int)plVar1 - 1U < 0x2c) {
    return plVar1;
  }
  FUN_1097c4988(param_1,param_2,param_3,param_7,&iStack_70);
  if ((int)plVar1 == 0x69) {
    plVar1 = param_1;
    FUN_1097c4a44(param_1,param_3,auStack_80,(undefined8 *)((long)param_1 + 0x1dc),5);
    uVar6 = NEON_smax(CONCAT44(iStack_6c,iStack_70),auStack_80[0],4);
    uVar4 = NEON_smin(CONCAT44((int)((ulong)uStack_68 >> 0x20) + iStack_6c,
                               (int)uStack_68 + iStack_70),
                      CONCAT44((int)((ulong)auStack_80[1] >> 0x20) +
                               (int)((ulong)auStack_80[0] >> 0x20),
                               (int)auStack_80[1] + (int)auStack_80[0]),4);
    iStack_70 = (int)uVar6;
    iVar5 = (int)((ulong)uVar4 >> 0x20);
    iStack_6c = (int)((ulong)uVar6 >> 0x20);
    if (iStack_70 < (int)uVar4 && iStack_6c < iVar5) {
      uStack_68 = CONCAT44(iVar5 - iStack_6c,(int)uVar4 - iStack_70);
    }
    else {
      iStack_70 = 0;
      iStack_6c = 0;
      uStack_68 = 0;
    }
  }
LAB_1097c4608:
  uVar3 = (uint)param_2;
  if ((uVar3 - 0xb < 0x12) || ((uVar3 < 10 && ((1 << (ulong)(uVar3 & 0x1f) & 0x2e7U) != 0)))) {
    FUN_1097f0230(param_6,param_4,param_5,auStack_80,0);
    if ((int)param_6 != 0) {
      return param_6;
    }
    uVar6 = NEON_smax(CONCAT44(iStack_6c,iStack_70),auStack_80[0],4);
    uVar4 = NEON_smin(CONCAT44((int)((ulong)uStack_68 >> 0x20) + iStack_6c,
                               (int)uStack_68 + iStack_70),
                      CONCAT44((int)((ulong)auStack_80[1] >> 0x20) +
                               (int)((ulong)auStack_80[0] >> 0x20),
                               (int)auStack_80[1] + (int)auStack_80[0]),4);
    iStack_70 = (int)uVar6;
    iVar5 = (int)((ulong)uVar4 >> 0x20);
    iStack_6c = (int)((ulong)uVar6 >> 0x20);
    if (iStack_70 < (int)uVar4 && iStack_6c < iVar5) {
      uStack_68 = CONCAT44(iVar5 - iStack_6c,(int)uVar4 - iStack_70);
    }
    else {
      iStack_70 = 0;
      iStack_6c = 0;
      uStack_68 = 0;
    }
  }
  func_0x0001097c4de4(param_1,&iStack_70,plVar1);
  return param_1;
}



/* Entry: 1097c46d4; end: 1097c46db;  */

long * FUN_1097c46d4(long param_1)

{
  long *plVar1;
  code *UNRECOVERED_JUMPTABLE;
  
  plVar1 = *(long **)(param_1 + 0x170);
  if (*(int *)((long)plVar1 + 0x1c) != 0) {
    return (long *)0x0;
  }
  if ((*(byte *)(plVar1 + 6) >> 1 & 1) == 0) {
    UNRECOVERED_JUMPTABLE = *(code **)(*plVar1 + 0xb8);
    if (UNRECOVERED_JUMPTABLE != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001097f7a9c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE)();
      return plVar1;
    }
    return (long *)(ulong)(*(long *)(*plVar1 + 0xc0) != 0);
  }
  FUN_1097f610c(plVar1,0xc);
  return (long *)0x0;
}



/* Entry: 1097c46dc; end: 1097c4917;  */

long * FUN_1097c46dc(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                    undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                    undefined4 param_9,undefined4 param_10,long *param_11,undefined8 param_12)

{
  long *plVar1;
  long lVar2;
  uint uVar3;
  undefined8 uVar4;
  int iVar5;
  undefined8 uVar6;
  undefined8 auStack_80 [2];
  int iStack_70;
  int iStack_6c;
  undefined8 uStack_68;
  
  *(undefined8 *)((long)param_1 + 0x1dc) = 0;
  plVar1 = (long *)param_1[0x2e];
  lVar2 = *plVar1;
  if (*(code **)(lVar2 + 0xc0) == (code *)0x0) {
LAB_1097c476c:
    if (*(code **)(lVar2 + 0xb0) == (code *)0x0) {
      FUN_1097c4988(param_1,param_2,param_3,param_12,&iStack_70);
      plVar1 = (long *)0x64;
      goto LAB_1097c484c;
    }
    (**(code **)(lVar2 + 0xb0))(plVar1,param_2,param_3,param_6,param_7,param_11,param_12);
    if ((int)plVar1 - 1U < 0x2c) {
      return plVar1;
    }
  }
  else {
    (**(code **)(lVar2 + 0xc0))
              (plVar1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,param_10,
               param_11,param_12);
    if ((int)plVar1 - 1U < 0x2c) {
      return plVar1;
    }
    if ((int)plVar1 == 100) {
      plVar1 = (long *)param_1[0x2e];
      lVar2 = *plVar1;
      goto LAB_1097c476c;
    }
  }
  FUN_1097c4988(param_1,param_2,param_3,param_12,&iStack_70);
  if ((int)plVar1 == 0x69) {
    FUN_1097c4a44(param_1,param_3,auStack_80,(undefined8 *)((long)param_1 + 0x1dc),5);
    uVar6 = NEON_smax(CONCAT44(iStack_6c,iStack_70),auStack_80[0],4);
    uVar4 = NEON_smin(CONCAT44((int)((ulong)uStack_68 >> 0x20) + iStack_6c,
                               (int)uStack_68 + iStack_70),
                      CONCAT44((int)((ulong)auStack_80[1] >> 0x20) +
                               (int)((ulong)auStack_80[0] >> 0x20),
                               (int)auStack_80[1] + (int)auStack_80[0]),4);
    iStack_70 = (int)uVar6;
    iVar5 = (int)((ulong)uVar4 >> 0x20);
    iStack_6c = (int)((ulong)uVar6 >> 0x20);
    if (iStack_70 < (int)uVar4 && iStack_6c < iVar5) {
      uStack_68 = CONCAT44(iVar5 - iStack_6c,(int)uVar4 - iStack_70);
    }
    else {
      iStack_70 = 0;
      iStack_6c = 0;
      uStack_68 = 0;
    }
    plVar1 = (long *)0x69;
  }
LAB_1097c484c:
  uVar3 = (uint)param_2;
  if ((uVar3 - 0xb < 0x12) || ((uVar3 < 10 && ((1 << (ulong)(uVar3 & 0x1f) & 0x2e7U) != 0)))) {
    FUN_1097f0230(param_11,param_6,param_7,auStack_80,0);
    if ((int)param_11 != 0) {
      return param_11;
    }
    uVar6 = NEON_smax(CONCAT44(iStack_6c,iStack_70),auStack_80[0],4);
    uVar4 = NEON_smin(CONCAT44((int)((ulong)uStack_68 >> 0x20) + iStack_6c,
                               (int)uStack_68 + iStack_70),
                      CONCAT44((int)((ulong)auStack_80[1] >> 0x20) +
                               (int)((ulong)auStack_80[0] >> 0x20),
                               (int)auStack_80[1] + (int)auStack_80[0]),4);
    iStack_70 = (int)uVar6;
    iVar5 = (int)((ulong)uVar4 >> 0x20);
    iStack_6c = (int)((ulong)uVar6 >> 0x20);
    if (iStack_70 < (int)uVar4 && iStack_6c < iVar5) {
      uStack_68 = CONCAT44(iVar5 - iStack_6c,(int)uVar4 - iStack_70);
    }
    else {
      iStack_70 = 0;
      iStack_6c = 0;
      uStack_68 = 0;
    }
  }
  func_0x0001097c4de4(param_1,&iStack_70,plVar1);
  return param_1;
}


