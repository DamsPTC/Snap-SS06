/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 109a9702c; end: 109a97227;  */

void FUN_109a9702c(uint *param_1,long param_2)

{
  uint uVar1;
  long lVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  ulong uVar14;
  ulong uVar15;
  long lVar16;
  long lVar17;
  ulong uVar18;
  long lVar19;
  float *pfVar20;
  long lVar21;
  long lVar22;
  long lVar23;
  long lVar24;
  long lVar25;
  long lVar26;
  long lVar27;
  long lVar28;
  ulong uVar29;
  double dVar30;
  double dVar31;
  
  uVar3 = **(uint **)(param_1 + 0x10);
  if (0 < (int)uVar3) {
    uVar14 = 0;
    uVar4 = (*(uint **)(param_1 + 0x10))[1];
    uVar10 = (ulong)(*param_1 >> 3) & 0x1ff;
    uVar1 = (int)uVar10 + 1;
    uVar15 = (ulong)uVar1;
    uVar5 = uVar1 * uVar4;
    lVar16 = *(long *)(param_1 + 4);
    lVar17 = **(long **)(param_1 + 0x12);
    lVar12 = *(long *)(param_2 + 0x10);
    lVar21 = **(long **)(param_2 + 0x48);
    iVar6 = uVar1 * (uVar4 - 4);
    lVar7 = lVar16 + uVar10 * 0x14 + 0x14;
    lVar2 = uVar10 * 0x10 + 0x10;
    lVar8 = lVar16 + lVar2;
    lVar9 = lVar16 + uVar10 * 0xc + 0xc;
    lVar11 = lVar16 + uVar10 * 8 + 8;
    lVar13 = lVar12;
    lVar22 = lVar16;
    do {
      if (uVar5 == uVar1) {
        uVar18 = 0;
        do {
          *(double *)(lVar13 + uVar18 * 8) = (double)*(float *)(lVar22 + uVar18 * 4);
          uVar18 = uVar18 + 1;
        } while (uVar15 != uVar18);
      }
      else {
        uVar18 = 0;
        lVar23 = lVar16 + uVar14 * lVar17;
        lVar24 = lVar22;
        lVar25 = lVar11;
        lVar26 = lVar9;
        lVar27 = lVar8;
        lVar28 = lVar7;
        do {
          dVar30 = (double)*(float *)(lVar23 + uVar18 * 4);
          dVar31 = (double)*(float *)(lVar23 + uVar15 * 4 + uVar18 * 4);
          uVar29 = (ulong)(uVar1 * 2);
          if ((int)(uVar1 * 2) <= iVar6) {
            lVar19 = 0;
            uVar29 = uVar10 * 2 + 2;
            do {
              dVar30 = dVar30 + (double)*(float *)(lVar25 + lVar19) +
                       (double)*(float *)(lVar27 + lVar19);
              dVar31 = dVar31 + (double)*(float *)(lVar26 + lVar19) +
                       (double)*(float *)(lVar28 + lVar19);
              uVar29 = uVar29 + uVar10 * 4 + 4;
              lVar19 = lVar19 + lVar2;
            } while ((long)uVar29 <= (long)iVar6);
          }
          if ((int)uVar29 < (int)uVar5) {
            pfVar20 = (float *)(lVar24 + (uVar29 & 0xffffffff) * 4);
            do {
              dVar30 = dVar30 + (double)*pfVar20;
              uVar4 = (int)uVar29 + uVar1;
              uVar29 = (ulong)uVar4;
              pfVar20 = pfVar20 + uVar10 + 1;
            } while ((int)uVar4 < (int)uVar5);
          }
          *(double *)(lVar12 + uVar14 * lVar21 + uVar18 * 8) = dVar31 + dVar30;
          uVar18 = uVar18 + 1;
          lVar28 = lVar28 + 4;
          lVar27 = lVar27 + 4;
          lVar26 = lVar26 + 4;
          lVar25 = lVar25 + 4;
          lVar24 = lVar24 + 4;
        } while (uVar18 != uVar15);
      }
      uVar14 = uVar14 + 1;
      lVar7 = lVar7 + lVar17;
      lVar8 = lVar8 + lVar17;
      lVar9 = lVar9 + lVar17;
      lVar11 = lVar11 + lVar17;
      lVar22 = lVar22 + lVar17;
      lVar13 = lVar13 + lVar21;
    } while (uVar14 != uVar3);
  }
  return;
}



/* Entry: 109a97228; end: 109a9740b;  */

void FUN_109a97228(uint *param_1,long param_2)

{
  uint uVar1;
  long lVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  long lVar12;
  long lVar13;
  double *pdVar14;
  long lVar15;
  long lVar16;
  ulong uVar17;
  ulong uVar18;
  long lVar19;
  long lVar20;
  long lVar21;
  long lVar22;
  ulong uVar23;
  long lVar24;
  long lVar25;
  long lVar26;
  long lVar27;
  long lVar28;
  double dVar29;
  double dVar30;
  
  uVar3 = **(uint **)(param_1 + 0x10);
  if (0 < (int)uVar3) {
    uVar11 = 0;
    uVar4 = (*(uint **)(param_1 + 0x10))[1];
    uVar17 = (ulong)(*param_1 >> 3) & 0x1ff;
    uVar1 = (int)uVar17 + 1;
    uVar5 = uVar1 * uVar4;
    lVar21 = *(long *)(param_1 + 4);
    lVar15 = **(long **)(param_1 + 0x12);
    lVar19 = *(long *)(param_2 + 0x10);
    lVar16 = **(long **)(param_2 + 0x48);
    iVar6 = uVar1 * (uVar4 - 4);
    lVar7 = lVar21 + uVar17 * 0x28 + 0x28;
    lVar2 = uVar17 * 0x20 + 0x20;
    lVar8 = lVar21 + lVar2;
    lVar9 = lVar21 + uVar17 * 0x18 + 0x18;
    lVar10 = lVar21 + uVar17 * 0x10 + 0x10;
    lVar20 = lVar19;
    lVar22 = lVar21;
    do {
      if (uVar5 == uVar1) {
        lVar12 = 0;
        do {
          *(undefined8 *)(lVar20 + lVar12) = *(undefined8 *)(lVar22 + lVar12);
          lVar12 = lVar12 + 8;
        } while (uVar17 * 8 + 8 != lVar12);
      }
      else {
        uVar23 = 0;
        lVar24 = lVar21 + uVar11 * lVar15;
        lVar25 = lVar22;
        lVar26 = lVar10;
        lVar27 = lVar9;
        lVar28 = lVar8;
        lVar12 = lVar7;
        do {
          dVar29 = *(double *)(lVar24 + uVar23 * 8);
          dVar30 = *(double *)(lVar24 + (ulong)uVar1 * 8 + uVar23 * 8);
          uVar18 = (ulong)(uVar1 * 2);
          if ((int)(uVar1 * 2) <= iVar6) {
            lVar13 = 0;
            uVar18 = uVar17 * 2 + 2;
            do {
              dVar29 = dVar29 + *(double *)(lVar26 + lVar13) + *(double *)(lVar28 + lVar13);
              dVar30 = dVar30 + *(double *)(lVar27 + lVar13) + *(double *)(lVar12 + lVar13);
              uVar18 = uVar18 + uVar17 * 4 + 4;
              lVar13 = lVar13 + lVar2;
            } while ((long)uVar18 <= (long)iVar6);
          }
          if ((int)uVar18 < (int)uVar5) {
            pdVar14 = (double *)(lVar25 + (uVar18 & 0xffffffff) * 8);
            do {
              dVar29 = dVar29 + *pdVar14;
              uVar4 = (int)uVar18 + uVar1;
              uVar18 = (ulong)uVar4;
              pdVar14 = pdVar14 + uVar17 + 1;
            } while ((int)uVar4 < (int)uVar5);
          }
          *(double *)(lVar19 + uVar11 * lVar16 + uVar23 * 8) = dVar30 + dVar29;
          uVar23 = uVar23 + 1;
          lVar12 = lVar12 + 8;
          lVar28 = lVar28 + 8;
          lVar27 = lVar27 + 8;
          lVar26 = lVar26 + 8;
          lVar25 = lVar25 + 8;
        } while (uVar23 != uVar1);
      }
      uVar11 = uVar11 + 1;
      lVar7 = lVar7 + lVar15;
      lVar8 = lVar8 + lVar15;
      lVar9 = lVar9 + lVar15;
      lVar10 = lVar10 + lVar15;
      lVar22 = lVar22 + lVar15;
      lVar20 = lVar20 + lVar16;
    } while (uVar11 != uVar3);
  }
  return;
}



/* Entry: 109a9740c; end: 109a975e3;  */

void FUN_109a9740c(uint *param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  long lVar9;
  undefined1 *puVar10;
  ulong uVar11;
  int iVar12;
  ulong uVar13;
  undefined1 *puVar14;
  undefined1 *puVar15;
  undefined1 *puVar16;
  undefined1 *puVar17;
  byte bVar18;
  byte bVar19;
  uint uVar20;
  long lVar21;
  byte *pbVar22;
  
  uVar4 = **(uint **)(param_1 + 0x10);
  if (0 < (int)uVar4) {
    uVar11 = 0;
    uVar20 = (*(uint **)(param_1 + 0x10))[1];
    uVar13 = (ulong)(*param_1 >> 3) & 0x1ff;
    lVar1 = uVar13 + 1;
    iVar12 = (int)lVar1;
    iVar5 = iVar12 * uVar20;
    iVar6 = iVar12 * (uVar20 - 4);
    lVar2 = uVar13 * 2 + 2;
    lVar3 = uVar13 * 4 + 4;
    do {
      puVar7 = (undefined1 *)(*(long *)(param_1 + 4) + **(long **)(param_1 + 0x12) * uVar11);
      puVar8 = (undefined1 *)(*(long *)(param_2 + 0x10) + **(long **)(param_2 + 0x48) * uVar11);
      lVar9 = lVar1;
      if (iVar5 == iVar12) {
        do {
          *puVar8 = *puVar7;
          lVar9 = lVar9 + -1;
          puVar7 = puVar7 + 1;
          puVar8 = puVar8 + 1;
        } while (lVar9 != 0);
      }
      else {
        lVar9 = 0;
        puVar10 = puVar7 + uVar13 * 5 + 5;
        puVar14 = puVar7 + lVar3;
        puVar15 = puVar7 + (uint)(iVar12 * 3);
        puVar16 = puVar7 + lVar2;
        puVar17 = puVar7;
        do {
          bVar18 = puVar7[lVar9];
          bVar19 = puVar7[lVar9 + lVar1];
          uVar20 = iVar12 * 2;
          if (iVar12 * 2 <= iVar6) {
            lVar21 = 0;
            do {
              bVar18 = (&UNK_10e02ecdc)
                       [(ulong)(byte)puVar14[lVar21] -
                        (ulong)(byte)((&UNK_10e02ecdc)[(ulong)(byte)puVar16[lVar21] - (ulong)bVar18]
                                     + bVar18)] +
                       (&UNK_10e02ecdc)[(ulong)(byte)puVar16[lVar21] - (ulong)bVar18] + bVar18;
              bVar19 = (&UNK_10e02ecdc)
                       [(ulong)(byte)puVar10[lVar21] -
                        (ulong)(byte)((&UNK_10e02ecdc)[(ulong)(byte)puVar15[lVar21] - (ulong)bVar19]
                                     + bVar19)] +
                       (&UNK_10e02ecdc)[(ulong)(byte)puVar15[lVar21] - (ulong)bVar19] + bVar19;
              lVar21 = lVar21 + lVar3;
            } while (lVar2 + lVar21 <= (long)iVar6);
            uVar20 = (int)lVar2 + (int)lVar21;
          }
          if ((int)uVar20 < iVar5) {
            pbVar22 = puVar17 + uVar20;
            do {
              bVar18 = (&UNK_10e02ecdc)[(ulong)*pbVar22 - (ulong)bVar18] + bVar18;
              uVar20 = uVar20 + iVar12;
              pbVar22 = pbVar22 + lVar1;
            } while ((int)uVar20 < iVar5);
          }
          puVar8[lVar9] = (&UNK_10e02ebdc)[((ulong)bVar19 | 0x100) - (ulong)bVar18] + bVar18;
          lVar9 = lVar9 + 1;
          puVar10 = puVar10 + 1;
          puVar14 = puVar14 + 1;
          puVar15 = puVar15 + 1;
          puVar16 = puVar16 + 1;
          puVar17 = puVar17 + 1;
        } while (lVar9 != lVar1);
      }
      uVar11 = uVar11 + 1;
    } while (uVar11 != uVar4);
  }
  return;
}



/* Entry: 109a975e4; end: 109a977f7;  */

void FUN_109a975e4(uint *param_1,long param_2)

{
  uint uVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  ulong uVar15;
  long lVar16;
  ushort *puVar17;
  ulong uVar18;
  long lVar19;
  long lVar20;
  ushort uVar21;
  ulong uVar22;
  ulong uVar23;
  long lVar24;
  long lVar25;
  long lVar26;
  long lVar27;
  long lVar28;
  long lVar29;
  long lVar30;
  long lVar31;
  ushort uVar32;
  
  uVar5 = **(uint **)(param_1 + 0x10);
  if (0 < (int)uVar5) {
    uVar18 = 0;
    uVar6 = (*(uint **)(param_1 + 0x10))[1];
    uVar22 = (ulong)(*param_1 >> 3) & 0x1ff;
    uVar1 = (int)uVar22 + 1;
    uVar7 = uVar1 * uVar6;
    lVar24 = *(long *)(param_1 + 4);
    lVar20 = **(long **)(param_1 + 0x12);
    lVar13 = *(long *)(param_2 + 0x10);
    lVar19 = **(long **)(param_2 + 0x48);
    iVar8 = uVar1 * (uVar6 - 4);
    uVar2 = uVar22 * 2 + 2;
    lVar3 = uVar22 * 4 + 4;
    lVar9 = lVar24 + uVar22 * 10 + 10;
    lVar4 = uVar22 * 8 + 8;
    lVar10 = lVar24 + lVar4;
    lVar11 = lVar24 + uVar22 * 6 + 6;
    lVar12 = lVar24 + lVar3;
    lVar14 = lVar13;
    lVar25 = lVar24;
    do {
      if (uVar7 == uVar1) {
        uVar15 = 0;
        do {
          *(undefined2 *)(lVar14 + uVar15) = *(undefined2 *)(lVar25 + uVar15);
          uVar15 = uVar15 + 2;
        } while (uVar2 != uVar15);
      }
      else {
        uVar15 = 0;
        lVar26 = lVar24 + uVar18 * lVar20;
        lVar27 = lVar25;
        lVar28 = lVar12;
        lVar29 = lVar11;
        lVar30 = lVar10;
        lVar31 = lVar9;
        do {
          uVar21 = *(ushort *)(lVar26 + uVar15 * 2);
          uVar32 = *(ushort *)(lVar26 + (ulong)uVar1 * 2 + uVar15 * 2);
          uVar23 = (ulong)(uVar1 * 2);
          if ((int)(uVar1 * 2) <= iVar8) {
            lVar16 = 0;
            uVar23 = uVar2;
            do {
              if (uVar21 <= *(ushort *)(lVar28 + lVar16)) {
                uVar21 = *(ushort *)(lVar28 + lVar16);
              }
              if (uVar32 <= *(ushort *)(lVar29 + lVar16)) {
                uVar32 = *(ushort *)(lVar29 + lVar16);
              }
              if (uVar21 <= *(ushort *)(lVar30 + lVar16)) {
                uVar21 = *(ushort *)(lVar30 + lVar16);
              }
              if (uVar32 <= *(ushort *)(lVar31 + lVar16)) {
                uVar32 = *(ushort *)(lVar31 + lVar16);
              }
              uVar23 = uVar23 + lVar3;
              lVar16 = lVar16 + lVar4;
            } while ((long)uVar23 <= (long)iVar8);
          }
          if ((int)uVar23 < (int)uVar7) {
            puVar17 = (ushort *)(lVar27 + (uVar23 & 0xffffffff) * 2);
            do {
              if (uVar21 <= *puVar17) {
                uVar21 = *puVar17;
              }
              uVar6 = (int)uVar23 + uVar1;
              uVar23 = (ulong)uVar6;
              puVar17 = puVar17 + uVar22 + 1;
            } while ((int)uVar6 < (int)uVar7);
          }
          if (uVar21 <= uVar32) {
            uVar21 = uVar32;
          }
          *(ushort *)(lVar13 + uVar18 * lVar19 + uVar15 * 2) = uVar21;
          uVar15 = uVar15 + 1;
          lVar31 = lVar31 + 2;
          lVar30 = lVar30 + 2;
          lVar29 = lVar29 + 2;
          lVar28 = lVar28 + 2;
          lVar27 = lVar27 + 2;
        } while (uVar15 != uVar1);
      }
      uVar18 = uVar18 + 1;
      lVar9 = lVar9 + lVar20;
      lVar10 = lVar10 + lVar20;
      lVar11 = lVar11 + lVar20;
      lVar12 = lVar12 + lVar20;
      lVar25 = lVar25 + lVar20;
      lVar14 = lVar14 + lVar19;
    } while (uVar18 != uVar5);
  }
  return;
}



/* Entry: 109a977f8; end: 109a97a13;  */

void FUN_109a977f8(uint *param_1,long param_2)

{
  uint uVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  ulong uVar14;
  long lVar15;
  short *psVar16;
  ulong uVar17;
  long lVar18;
  long lVar19;
  ushort uVar20;
  uint uVar21;
  ulong uVar22;
  ulong uVar23;
  long lVar24;
  long lVar25;
  long lVar26;
  long lVar27;
  long lVar28;
  long lVar29;
  long lVar30;
  long lVar31;
  ushort uVar32;
  uint uVar33;
  
  uVar5 = **(uint **)(param_1 + 0x10);
  if (0 < (int)uVar5) {
    uVar17 = 0;
    uVar21 = (*(uint **)(param_1 + 0x10))[1];
    uVar22 = (ulong)(*param_1 >> 3) & 0x1ff;
    uVar1 = (int)uVar22 + 1;
    uVar6 = uVar1 * uVar21;
    lVar24 = *(long *)(param_1 + 4);
    lVar19 = **(long **)(param_1 + 0x12);
    lVar12 = *(long *)(param_2 + 0x10);
    lVar18 = **(long **)(param_2 + 0x48);
    iVar7 = uVar1 * (uVar21 - 4);
    uVar2 = uVar22 * 2 + 2;
    lVar3 = uVar22 * 4 + 4;
    lVar8 = lVar24 + uVar22 * 10 + 10;
    lVar4 = uVar22 * 8 + 8;
    lVar9 = lVar24 + lVar4;
    lVar10 = lVar24 + uVar22 * 6 + 6;
    lVar11 = lVar24 + lVar3;
    lVar13 = lVar12;
    lVar25 = lVar24;
    do {
      if (uVar6 == uVar1) {
        uVar14 = 0;
        do {
          *(undefined2 *)(lVar13 + uVar14) = *(undefined2 *)(lVar25 + uVar14);
          uVar14 = uVar14 + 2;
        } while (uVar2 != uVar14);
      }
      else {
        uVar14 = 0;
        lVar26 = lVar24 + uVar17 * lVar19;
        lVar27 = lVar25;
        lVar28 = lVar11;
        lVar29 = lVar10;
        lVar30 = lVar9;
        lVar31 = lVar8;
        do {
          uVar21 = (uint)*(ushort *)(lVar26 + uVar14 * 2);
          uVar32 = *(ushort *)(lVar26 + (ulong)uVar1 * 2 + uVar14 * 2);
          uVar33 = (uint)uVar32;
          uVar23 = (ulong)(uVar1 * 2);
          if ((int)(uVar1 * 2) <= iVar7) {
            lVar15 = 0;
            uVar23 = uVar2;
            do {
              uVar21 = (uint)(short)uVar21;
              if ((int)uVar21 <= (int)*(short *)(lVar28 + lVar15)) {
                uVar21 = (uint)*(short *)(lVar28 + lVar15);
              }
              uVar33 = (uint)(short)uVar33;
              if ((int)uVar33 <= (int)*(short *)(lVar29 + lVar15)) {
                uVar33 = (uint)*(short *)(lVar29 + lVar15);
              }
              if ((int)uVar21 <= (int)*(short *)(lVar30 + lVar15)) {
                uVar21 = (uint)*(short *)(lVar30 + lVar15);
              }
              if ((int)uVar33 <= (int)*(short *)(lVar31 + lVar15)) {
                uVar33 = (uint)*(short *)(lVar31 + lVar15);
              }
              uVar32 = (ushort)uVar33;
              uVar23 = uVar23 + lVar3;
              lVar15 = lVar15 + lVar4;
            } while ((long)uVar23 <= (long)iVar7);
          }
          uVar20 = (ushort)uVar21;
          if ((int)uVar23 < (int)uVar6) {
            psVar16 = (short *)(lVar27 + (uVar23 & 0xffffffff) * 2);
            do {
              uVar21 = (uint)(short)uVar21;
              if ((int)uVar21 <= (int)*psVar16) {
                uVar21 = (uint)*psVar16;
              }
              uVar20 = (ushort)uVar21;
              uVar33 = (int)uVar23 + uVar1;
              uVar23 = (ulong)uVar33;
              psVar16 = psVar16 + uVar22 + 1;
            } while ((int)uVar33 < (int)uVar6);
          }
          if ((short)uVar20 <= (short)uVar32) {
            uVar20 = uVar32;
          }
          *(ushort *)(lVar12 + uVar17 * lVar18 + uVar14 * 2) = uVar20;
          uVar14 = uVar14 + 1;
          lVar31 = lVar31 + 2;
          lVar30 = lVar30 + 2;
          lVar29 = lVar29 + 2;
          lVar28 = lVar28 + 2;
          lVar27 = lVar27 + 2;
        } while (uVar14 != uVar1);
      }
      uVar17 = uVar17 + 1;
      lVar8 = lVar8 + lVar19;
      lVar9 = lVar9 + lVar19;
      lVar10 = lVar10 + lVar19;
      lVar11 = lVar11 + lVar19;
      lVar25 = lVar25 + lVar19;
      lVar13 = lVar13 + lVar18;
    } while (uVar17 != uVar5);
  }
  return;
}



/* Entry: 109a97a14; end: 109a97c07;  */

void FUN_109a97a14(uint *param_1,long param_2)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  ulong uVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  float *pfVar20;
  long lVar21;
  long lVar22;
  ulong uVar23;
  long lVar24;
  long lVar25;
  long lVar26;
  long lVar27;
  long lVar28;
  ulong uVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  
  uVar4 = **(uint **)(param_1 + 0x10);
  if (0 < (int)uVar4) {
    uVar15 = 0;
    uVar5 = (*(uint **)(param_1 + 0x10))[1];
    uVar11 = (ulong)(*param_1 >> 3) & 0x1ff;
    uVar1 = (int)uVar11 + 1;
    uVar6 = uVar1 * uVar5;
    lVar16 = *(long *)(param_1 + 4);
    lVar17 = **(long **)(param_1 + 0x12);
    lVar13 = *(long *)(param_2 + 0x10);
    lVar21 = **(long **)(param_2 + 0x48);
    iVar7 = uVar1 * (uVar5 - 4);
    lVar2 = uVar11 * 4 + 4;
    lVar8 = lVar16 + uVar11 * 0x14 + 0x14;
    lVar3 = uVar11 * 0x10 + 0x10;
    lVar9 = lVar16 + lVar3;
    lVar10 = lVar16 + uVar11 * 0xc + 0xc;
    lVar12 = lVar16 + uVar11 * 8 + 8;
    lVar14 = lVar13;
    lVar22 = lVar16;
    do {
      if (uVar6 == uVar1) {
        lVar18 = 0;
        do {
          *(undefined4 *)(lVar14 + lVar18) = *(undefined4 *)(lVar22 + lVar18);
          lVar18 = lVar18 + 4;
        } while (lVar2 != lVar18);
      }
      else {
        uVar23 = 0;
        lVar24 = lVar16 + uVar15 * lVar17;
        lVar25 = lVar22;
        lVar26 = lVar12;
        lVar27 = lVar10;
        lVar28 = lVar9;
        lVar18 = lVar8;
        do {
          fVar32 = *(float *)(lVar24 + uVar23 * 4);
          fVar30 = *(float *)(lVar24 + (ulong)uVar1 * 4 + uVar23 * 4);
          uVar29 = (ulong)(uVar1 * 2);
          if ((int)(uVar1 * 2) <= iVar7) {
            lVar19 = 0;
            uVar29 = uVar11 * 2 + 2;
            do {
              fVar33 = *(float *)(lVar26 + lVar19);
              if (*(float *)(lVar26 + lVar19) <= fVar32) {
                fVar33 = fVar32;
              }
              fVar31 = *(float *)(lVar27 + lVar19);
              if (*(float *)(lVar27 + lVar19) <= fVar30) {
                fVar31 = fVar30;
              }
              fVar32 = *(float *)(lVar28 + lVar19);
              if (*(float *)(lVar28 + lVar19) <= fVar33) {
                fVar32 = fVar33;
              }
              fVar30 = *(float *)(lVar18 + lVar19);
              if (*(float *)(lVar18 + lVar19) <= fVar31) {
                fVar30 = fVar31;
              }
              uVar29 = uVar29 + lVar2;
              lVar19 = lVar19 + lVar3;
            } while ((long)uVar29 <= (long)iVar7);
          }
          if ((int)uVar29 < (int)uVar6) {
            pfVar20 = (float *)(lVar25 + (uVar29 & 0xffffffff) * 4);
            fVar33 = fVar32;
            do {
              fVar32 = *pfVar20;
              if (*pfVar20 <= fVar33) {
                fVar32 = fVar33;
              }
              uVar5 = (int)uVar29 + uVar1;
              uVar29 = (ulong)uVar5;
              pfVar20 = pfVar20 + uVar11 + 1;
              fVar33 = fVar32;
            } while ((int)uVar5 < (int)uVar6);
          }
          if (fVar30 <= fVar32) {
            fVar30 = fVar32;
          }
          *(float *)(lVar13 + uVar15 * lVar21 + uVar23 * 4) = fVar30;
          uVar23 = uVar23 + 1;
          lVar18 = lVar18 + 4;
          lVar28 = lVar28 + 4;
          lVar27 = lVar27 + 4;
          lVar26 = lVar26 + 4;
          lVar25 = lVar25 + 4;
        } while (uVar23 != uVar1);
      }
      uVar15 = uVar15 + 1;
      lVar8 = lVar8 + lVar17;
      lVar9 = lVar9 + lVar17;
      lVar10 = lVar10 + lVar17;
      lVar12 = lVar12 + lVar17;
      lVar22 = lVar22 + lVar17;
      lVar14 = lVar14 + lVar21;
    } while (uVar15 != uVar4);
  }
  return;
}



/* Entry: 109a97c08; end: 109a97e03;  */

void FUN_109a97c08(uint *param_1,long param_2)

{
  uint uVar1;
  long lVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  long lVar12;
  long lVar13;
  double *pdVar14;
  long lVar15;
  long lVar16;
  ulong uVar17;
  ulong uVar18;
  long lVar19;
  long lVar20;
  long lVar21;
  long lVar22;
  ulong uVar23;
  long lVar24;
  long lVar25;
  long lVar26;
  long lVar27;
  long lVar28;
  double dVar29;
  double dVar30;
  double dVar31;
  double dVar32;
  
  uVar3 = **(uint **)(param_1 + 0x10);
  if (0 < (int)uVar3) {
    uVar11 = 0;
    uVar4 = (*(uint **)(param_1 + 0x10))[1];
    uVar17 = (ulong)(*param_1 >> 3) & 0x1ff;
    uVar1 = (int)uVar17 + 1;
    uVar5 = uVar1 * uVar4;
    lVar21 = *(long *)(param_1 + 4);
    lVar15 = **(long **)(param_1 + 0x12);
    lVar19 = *(long *)(param_2 + 0x10);
    lVar16 = **(long **)(param_2 + 0x48);
    iVar6 = uVar1 * (uVar4 - 4);
    lVar7 = lVar21 + uVar17 * 0x28 + 0x28;
    lVar2 = uVar17 * 0x20 + 0x20;
    lVar8 = lVar21 + lVar2;
    lVar9 = lVar21 + uVar17 * 0x18 + 0x18;
    lVar10 = lVar21 + uVar17 * 0x10 + 0x10;
    lVar20 = lVar19;
    lVar22 = lVar21;
    do {
      if (uVar5 == uVar1) {
        lVar12 = 0;
        do {
          *(undefined8 *)(lVar20 + lVar12) = *(undefined8 *)(lVar22 + lVar12);
          lVar12 = lVar12 + 8;
        } while (uVar17 * 8 + 8 != lVar12);
      }
      else {
        uVar23 = 0;
        lVar24 = lVar21 + uVar11 * lVar15;
        lVar25 = lVar22;
        lVar26 = lVar10;
        lVar27 = lVar9;
        lVar28 = lVar8;
        lVar12 = lVar7;
        do {
          dVar31 = *(double *)(lVar24 + uVar23 * 8);
          dVar29 = *(double *)(lVar24 + (ulong)uVar1 * 8 + uVar23 * 8);
          uVar18 = (ulong)(uVar1 * 2);
          if ((int)(uVar1 * 2) <= iVar6) {
            lVar13 = 0;
            uVar18 = uVar17 * 2 + 2;
            do {
              dVar32 = *(double *)(lVar26 + lVar13);
              if (*(double *)(lVar26 + lVar13) <= dVar31) {
                dVar32 = dVar31;
              }
              dVar30 = *(double *)(lVar27 + lVar13);
              if (*(double *)(lVar27 + lVar13) <= dVar29) {
                dVar30 = dVar29;
              }
              dVar31 = *(double *)(lVar28 + lVar13);
              if (*(double *)(lVar28 + lVar13) <= dVar32) {
                dVar31 = dVar32;
              }
              dVar29 = *(double *)(lVar12 + lVar13);
              if (*(double *)(lVar12 + lVar13) <= dVar30) {
                dVar29 = dVar30;
              }
              uVar18 = uVar18 + uVar17 * 4 + 4;
              lVar13 = lVar13 + lVar2;
            } while ((long)uVar18 <= (long)iVar6);
          }
          if ((int)uVar18 < (int)uVar5) {
            pdVar14 = (double *)(lVar25 + (uVar18 & 0xffffffff) * 8);
            dVar32 = dVar31;
            do {
              dVar31 = *pdVar14;
              if (*pdVar14 <= dVar32) {
                dVar31 = dVar32;
              }
              uVar4 = (int)uVar18 + uVar1;
              uVar18 = (ulong)uVar4;
              pdVar14 = pdVar14 + uVar17 + 1;
              dVar32 = dVar31;
            } while ((int)uVar4 < (int)uVar5);
          }
          if (dVar29 <= dVar31) {
            dVar29 = dVar31;
          }
          *(double *)(lVar19 + uVar11 * lVar16 + uVar23 * 8) = dVar29;
          uVar23 = uVar23 + 1;
          lVar12 = lVar12 + 8;
          lVar28 = lVar28 + 8;
          lVar27 = lVar27 + 8;
          lVar26 = lVar26 + 8;
          lVar25 = lVar25 + 8;
        } while (uVar23 != uVar1);
      }
      uVar11 = uVar11 + 1;
      lVar7 = lVar7 + lVar15;
      lVar8 = lVar8 + lVar15;
      lVar9 = lVar9 + lVar15;
      lVar10 = lVar10 + lVar15;
      lVar22 = lVar22 + lVar15;
      lVar20 = lVar20 + lVar16;
    } while (uVar11 != uVar3);
  }
  return;
}



/* Entry: 109a97e04; end: 109a97fef;  */

void FUN_109a97e04(uint *param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  long lVar9;
  undefined1 *puVar10;
  ulong uVar11;
  int iVar12;
  ulong uVar13;
  undefined1 *puVar14;
  undefined1 *puVar15;
  undefined1 *puVar16;
  undefined1 *puVar17;
  ulong uVar18;
  byte bVar19;
  uint uVar20;
  long lVar21;
  byte *pbVar22;
  
  uVar4 = **(uint **)(param_1 + 0x10);
  if (0 < (int)uVar4) {
    uVar11 = 0;
    uVar20 = (*(uint **)(param_1 + 0x10))[1];
    uVar13 = (ulong)(*param_1 >> 3) & 0x1ff;
    lVar1 = uVar13 + 1;
    iVar12 = (int)lVar1;
    iVar5 = iVar12 * uVar20;
    iVar6 = iVar12 * (uVar20 - 4);
    lVar2 = uVar13 * 2 + 2;
    lVar3 = uVar13 * 4 + 4;
    do {
      puVar7 = (undefined1 *)(*(long *)(param_1 + 4) + **(long **)(param_1 + 0x12) * uVar11);
      puVar8 = (undefined1 *)(*(long *)(param_2 + 0x10) + **(long **)(param_2 + 0x48) * uVar11);
      lVar9 = lVar1;
      if (iVar5 == iVar12) {
        do {
          *puVar8 = *puVar7;
          lVar9 = lVar9 + -1;
          puVar7 = puVar7 + 1;
          puVar8 = puVar8 + 1;
        } while (lVar9 != 0);
      }
      else {
        lVar9 = 0;
        puVar10 = puVar7 + uVar13 * 5 + 5;
        puVar14 = puVar7 + lVar3;
        puVar15 = puVar7 + (uint)(iVar12 * 3);
        puVar16 = puVar7 + lVar2;
        puVar17 = puVar7;
        do {
          bVar19 = puVar7[lVar9];
          uVar18 = (ulong)(byte)puVar7[lVar9 + lVar1];
          uVar20 = iVar12 * 2;
          if (iVar12 * 2 <= iVar6) {
            lVar21 = 0;
            do {
              uVar20 = (int)uVar18 -
                       (uint)(byte)(&UNK_10e02ebdc)
                                   [(uVar18 & 0xff | 0x100) - (ulong)(byte)puVar15[lVar21]];
              bVar19 = (bVar19 - (&UNK_10e02ebdc)
                                 [((ulong)bVar19 | 0x100) - (ulong)(byte)puVar16[lVar21]]) -
                       (&UNK_10e02ebdc)
                       [((ulong)(byte)(bVar19 - (&UNK_10e02ebdc)
                                                [((ulong)bVar19 | 0x100) -
                                                 (ulong)(byte)puVar16[lVar21]]) | 0x100) -
                        (ulong)(byte)puVar14[lVar21]];
              uVar18 = (ulong)(uVar20 - (byte)(&UNK_10e02ebdc)
                                              [((ulong)uVar20 & 0xff | 0x100) -
                                               (ulong)(byte)puVar10[lVar21]]);
              lVar21 = lVar21 + lVar3;
            } while (lVar2 + lVar21 <= (long)iVar6);
            uVar20 = (int)lVar2 + (int)lVar21;
          }
          if ((int)uVar20 < iVar5) {
            pbVar22 = puVar17 + uVar20;
            do {
              bVar19 = bVar19 - (&UNK_10e02ebdc)[((ulong)bVar19 | 0x100) - (ulong)*pbVar22];
              uVar20 = uVar20 + iVar12;
              pbVar22 = pbVar22 + lVar1;
            } while ((int)uVar20 < iVar5);
          }
          puVar8[lVar9] = bVar19 - (&UNK_10e02ecdc)[(ulong)bVar19 - (uVar18 & 0xff)];
          lVar9 = lVar9 + 1;
          puVar10 = puVar10 + 1;
          puVar14 = puVar14 + 1;
          puVar15 = puVar15 + 1;
          puVar16 = puVar16 + 1;
          puVar17 = puVar17 + 1;
        } while (lVar9 != lVar1);
      }
      uVar11 = uVar11 + 1;
    } while (uVar11 != uVar4);
  }
  return;
}



/* Entry: 109a97ff0; end: 109a98203;  */

void FUN_109a97ff0(uint *param_1,long param_2)

{
  uint uVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  ushort uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  ushort uVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  ulong uVar17;
  long lVar18;
  ushort *puVar19;
  ulong uVar20;
  long lVar21;
  long lVar22;
  ushort uVar23;
  ulong uVar24;
  ulong uVar25;
  long lVar26;
  long lVar27;
  long lVar28;
  long lVar29;
  long lVar30;
  long lVar31;
  long lVar32;
  long lVar33;
  ushort uVar34;
  
  uVar6 = **(uint **)(param_1 + 0x10);
  if (0 < (int)uVar6) {
    uVar20 = 0;
    uVar7 = (*(uint **)(param_1 + 0x10))[1];
    uVar24 = (ulong)(*param_1 >> 3) & 0x1ff;
    uVar1 = (int)uVar24 + 1;
    uVar8 = uVar1 * uVar7;
    lVar26 = *(long *)(param_1 + 4);
    lVar22 = **(long **)(param_1 + 0x12);
    lVar15 = *(long *)(param_2 + 0x10);
    lVar21 = **(long **)(param_2 + 0x48);
    iVar9 = uVar1 * (uVar7 - 4);
    uVar2 = uVar24 * 2 + 2;
    lVar3 = uVar24 * 4 + 4;
    lVar11 = lVar26 + uVar24 * 10 + 10;
    lVar4 = uVar24 * 8 + 8;
    lVar12 = lVar26 + lVar4;
    lVar13 = lVar26 + uVar24 * 6 + 6;
    lVar14 = lVar26 + lVar3;
    lVar16 = lVar15;
    lVar27 = lVar26;
    do {
      if (uVar8 == uVar1) {
        uVar17 = 0;
        do {
          *(undefined2 *)(lVar16 + uVar17) = *(undefined2 *)(lVar27 + uVar17);
          uVar17 = uVar17 + 2;
        } while (uVar2 != uVar17);
      }
      else {
        uVar17 = 0;
        lVar28 = lVar26 + uVar20 * lVar22;
        lVar29 = lVar27;
        lVar30 = lVar14;
        lVar31 = lVar13;
        lVar32 = lVar12;
        lVar33 = lVar11;
        do {
          uVar23 = *(ushort *)(lVar28 + uVar17 * 2);
          uVar34 = *(ushort *)(lVar28 + (ulong)uVar1 * 2 + uVar17 * 2);
          uVar25 = (ulong)(uVar1 * 2);
          if ((int)(uVar1 * 2) <= iVar9) {
            lVar18 = 0;
            uVar25 = uVar2;
            do {
              uVar10 = *(ushort *)(lVar30 + lVar18);
              if (uVar23 <= *(ushort *)(lVar30 + lVar18)) {
                uVar10 = uVar23;
              }
              uVar5 = *(ushort *)(lVar31 + lVar18);
              if (uVar34 <= *(ushort *)(lVar31 + lVar18)) {
                uVar5 = uVar34;
              }
              uVar23 = *(ushort *)(lVar32 + lVar18);
              if (uVar10 <= *(ushort *)(lVar32 + lVar18)) {
                uVar23 = uVar10;
              }
              uVar34 = *(ushort *)(lVar33 + lVar18);
              if (uVar5 <= *(ushort *)(lVar33 + lVar18)) {
                uVar34 = uVar5;
              }
              uVar25 = uVar25 + lVar3;
              lVar18 = lVar18 + lVar4;
            } while ((long)uVar25 <= (long)iVar9);
          }
          if ((int)uVar25 < (int)uVar8) {
            puVar19 = (ushort *)(lVar29 + (uVar25 & 0xffffffff) * 2);
            do {
              uVar10 = *puVar19;
              if (uVar23 <= *puVar19) {
                uVar10 = uVar23;
              }
              uVar23 = uVar10;
              uVar7 = (int)uVar25 + uVar1;
              uVar25 = (ulong)uVar7;
              puVar19 = puVar19 + uVar24 + 1;
            } while ((int)uVar7 < (int)uVar8);
          }
          if (uVar23 <= uVar34) {
            uVar34 = uVar23;
          }
          *(ushort *)(lVar15 + uVar20 * lVar21 + uVar17 * 2) = uVar34;
          uVar17 = uVar17 + 1;
          lVar33 = lVar33 + 2;
          lVar32 = lVar32 + 2;
          lVar31 = lVar31 + 2;
          lVar30 = lVar30 + 2;
          lVar29 = lVar29 + 2;
        } while (uVar17 != uVar1);
      }
      uVar20 = uVar20 + 1;
      lVar11 = lVar11 + lVar22;
      lVar12 = lVar12 + lVar22;
      lVar13 = lVar13 + lVar22;
      lVar14 = lVar14 + lVar22;
      lVar27 = lVar27 + lVar22;
      lVar16 = lVar16 + lVar21;
    } while (uVar20 != uVar6);
  }
  return;
}



/* Entry: 109a98204; end: 109a9841f;  */

void FUN_109a98204(uint *param_1,long param_2)

{
  uint uVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  short sVar8;
  short sVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  ulong uVar16;
  long lVar17;
  ushort *puVar18;
  ulong uVar19;
  long lVar20;
  long lVar21;
  ushort uVar22;
  uint uVar23;
  ulong uVar24;
  ulong uVar25;
  long lVar26;
  long lVar27;
  long lVar28;
  long lVar29;
  long lVar30;
  long lVar31;
  long lVar32;
  long lVar33;
  ushort uVar34;
  uint uVar35;
  
  uVar5 = **(uint **)(param_1 + 0x10);
  if (0 < (int)uVar5) {
    uVar19 = 0;
    uVar23 = (*(uint **)(param_1 + 0x10))[1];
    uVar24 = (ulong)(*param_1 >> 3) & 0x1ff;
    uVar1 = (int)uVar24 + 1;
    uVar6 = uVar1 * uVar23;
    lVar26 = *(long *)(param_1 + 4);
    lVar21 = **(long **)(param_1 + 0x12);
    lVar14 = *(long *)(param_2 + 0x10);
    lVar20 = **(long **)(param_2 + 0x48);
    iVar7 = uVar1 * (uVar23 - 4);
    uVar2 = uVar24 * 2 + 2;
    lVar3 = uVar24 * 4 + 4;
    lVar10 = lVar26 + uVar24 * 10 + 10;
    lVar4 = uVar24 * 8 + 8;
    lVar11 = lVar26 + lVar4;
    lVar12 = lVar26 + uVar24 * 6 + 6;
    lVar13 = lVar26 + lVar3;
    lVar15 = lVar14;
    lVar27 = lVar26;
    do {
      if (uVar6 == uVar1) {
        uVar16 = 0;
        do {
          *(undefined2 *)(lVar15 + uVar16) = *(undefined2 *)(lVar27 + uVar16);
          uVar16 = uVar16 + 2;
        } while (uVar2 != uVar16);
      }
      else {
        uVar16 = 0;
        lVar28 = lVar26 + uVar19 * lVar21;
        lVar29 = lVar27;
        lVar30 = lVar13;
        lVar31 = lVar12;
        lVar32 = lVar11;
        lVar33 = lVar10;
        do {
          uVar23 = (uint)*(ushort *)(lVar28 + uVar16 * 2);
          uVar34 = *(ushort *)(lVar28 + (ulong)uVar1 * 2 + uVar16 * 2);
          uVar35 = (uint)uVar34;
          uVar25 = (ulong)(uVar1 * 2);
          if ((int)(uVar1 * 2) <= iVar7) {
            lVar17 = 0;
            uVar25 = uVar2;
            do {
              sVar8 = *(short *)(lVar30 + lVar17);
              if ((short)uVar23 <= *(short *)(lVar30 + lVar17)) {
                sVar8 = (short)uVar23;
              }
              sVar9 = *(short *)(lVar31 + lVar17);
              if ((short)uVar35 <= *(short *)(lVar31 + lVar17)) {
                sVar9 = (short)uVar35;
              }
              uVar23 = (int)*(short *)(lVar32 + lVar17);
              if ((int)sVar8 <= (int)*(short *)(lVar32 + lVar17)) {
                uVar23 = (int)sVar8;
              }
              uVar35 = (int)*(short *)(lVar33 + lVar17);
              if ((int)sVar9 <= (int)*(short *)(lVar33 + lVar17)) {
                uVar35 = (int)sVar9;
              }
              uVar34 = (ushort)uVar35;
              uVar25 = uVar25 + lVar3;
              lVar17 = lVar17 + lVar4;
            } while ((long)uVar25 <= (long)iVar7);
          }
          uVar22 = (ushort)uVar23;
          if ((int)uVar25 < (int)uVar6) {
            puVar18 = (ushort *)(lVar29 + (uVar25 & 0xffffffff) * 2);
            do {
              uVar22 = *puVar18;
              if ((short)(ushort)uVar23 <= (short)*puVar18) {
                uVar22 = (ushort)uVar23;
              }
              uVar23 = (uint)(short)uVar22;
              uVar35 = (int)uVar25 + uVar1;
              uVar25 = (ulong)uVar35;
              puVar18 = puVar18 + uVar24 + 1;
            } while ((int)uVar35 < (int)uVar6);
          }
          if ((short)uVar22 <= (short)uVar34) {
            uVar34 = uVar22;
          }
          *(ushort *)(lVar14 + uVar19 * lVar20 + uVar16 * 2) = uVar34;
          uVar16 = uVar16 + 1;
          lVar33 = lVar33 + 2;
          lVar32 = lVar32 + 2;
          lVar31 = lVar31 + 2;
          lVar30 = lVar30 + 2;
          lVar29 = lVar29 + 2;
        } while (uVar16 != uVar1);
      }
      uVar19 = uVar19 + 1;
      lVar10 = lVar10 + lVar21;
      lVar11 = lVar11 + lVar21;
      lVar12 = lVar12 + lVar21;
      lVar13 = lVar13 + lVar21;
      lVar27 = lVar27 + lVar21;
      lVar15 = lVar15 + lVar20;
    } while (uVar19 != uVar5);
  }
  return;
}



/* Entry: 109a98420; end: 109a98613;  */

void FUN_109a98420(uint *param_1,long param_2)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  ulong uVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  float *pfVar20;
  long lVar21;
  long lVar22;
  ulong uVar23;
  long lVar24;
  long lVar25;
  long lVar26;
  long lVar27;
  long lVar28;
  ulong uVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  
  uVar4 = **(uint **)(param_1 + 0x10);
  if (0 < (int)uVar4) {
    uVar15 = 0;
    uVar5 = (*(uint **)(param_1 + 0x10))[1];
    uVar11 = (ulong)(*param_1 >> 3) & 0x1ff;
    uVar1 = (int)uVar11 + 1;
    uVar6 = uVar1 * uVar5;
    lVar16 = *(long *)(param_1 + 4);
    lVar17 = **(long **)(param_1 + 0x12);
    lVar13 = *(long *)(param_2 + 0x10);
    lVar21 = **(long **)(param_2 + 0x48);
    iVar7 = uVar1 * (uVar5 - 4);
    lVar2 = uVar11 * 4 + 4;
    lVar8 = lVar16 + uVar11 * 0x14 + 0x14;
    lVar3 = uVar11 * 0x10 + 0x10;
    lVar9 = lVar16 + lVar3;
    lVar10 = lVar16 + uVar11 * 0xc + 0xc;
    lVar12 = lVar16 + uVar11 * 8 + 8;
    lVar14 = lVar13;
    lVar22 = lVar16;
    do {
      if (uVar6 == uVar1) {
        lVar18 = 0;
        do {
          *(undefined4 *)(lVar14 + lVar18) = *(undefined4 *)(lVar22 + lVar18);
          lVar18 = lVar18 + 4;
        } while (lVar2 != lVar18);
      }
      else {
        uVar23 = 0;
        lVar24 = lVar16 + uVar15 * lVar17;
        lVar25 = lVar22;
        lVar26 = lVar12;
        lVar27 = lVar10;
        lVar28 = lVar9;
        lVar18 = lVar8;
        do {
          fVar32 = *(float *)(lVar24 + uVar23 * 4);
          fVar30 = *(float *)(lVar24 + (ulong)uVar1 * 4 + uVar23 * 4);
          uVar29 = (ulong)(uVar1 * 2);
          if ((int)(uVar1 * 2) <= iVar7) {
            lVar19 = 0;
            uVar29 = uVar11 * 2 + 2;
            do {
              fVar33 = *(float *)(lVar26 + lVar19);
              if (fVar32 <= *(float *)(lVar26 + lVar19)) {
                fVar33 = fVar32;
              }
              fVar31 = *(float *)(lVar27 + lVar19);
              if (fVar30 <= *(float *)(lVar27 + lVar19)) {
                fVar31 = fVar30;
              }
              fVar32 = *(float *)(lVar28 + lVar19);
              if (fVar33 <= *(float *)(lVar28 + lVar19)) {
                fVar32 = fVar33;
              }
              fVar30 = *(float *)(lVar18 + lVar19);
              if (fVar31 <= *(float *)(lVar18 + lVar19)) {
                fVar30 = fVar31;
              }
              uVar29 = uVar29 + lVar2;
              lVar19 = lVar19 + lVar3;
            } while ((long)uVar29 <= (long)iVar7);
          }
          if ((int)uVar29 < (int)uVar6) {
            pfVar20 = (float *)(lVar25 + (uVar29 & 0xffffffff) * 4);
            fVar33 = fVar32;
            do {
              fVar32 = *pfVar20;
              if (fVar33 <= *pfVar20) {
                fVar32 = fVar33;
              }
              uVar5 = (int)uVar29 + uVar1;
              uVar29 = (ulong)uVar5;
              pfVar20 = pfVar20 + uVar11 + 1;
              fVar33 = fVar32;
            } while ((int)uVar5 < (int)uVar6);
          }
          if (fVar32 <= fVar30) {
            fVar30 = fVar32;
          }
          *(float *)(lVar13 + uVar15 * lVar21 + uVar23 * 4) = fVar30;
          uVar23 = uVar23 + 1;
          lVar18 = lVar18 + 4;
          lVar28 = lVar28 + 4;
          lVar27 = lVar27 + 4;
          lVar26 = lVar26 + 4;
          lVar25 = lVar25 + 4;
        } while (uVar23 != uVar1);
      }
      uVar15 = uVar15 + 1;
      lVar8 = lVar8 + lVar17;
      lVar9 = lVar9 + lVar17;
      lVar10 = lVar10 + lVar17;
      lVar12 = lVar12 + lVar17;
      lVar22 = lVar22 + lVar17;
      lVar14 = lVar14 + lVar21;
    } while (uVar15 != uVar4);
  }
  return;
}



/* Entry: 109a98614; end: 109a9880f;  */

void FUN_109a98614(uint *param_1,long param_2)

{
  uint uVar1;
  long lVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  long lVar12;
  long lVar13;
  double *pdVar14;
  long lVar15;
  long lVar16;
  ulong uVar17;
  ulong uVar18;
  long lVar19;
  long lVar20;
  long lVar21;
  long lVar22;
  ulong uVar23;
  long lVar24;
  long lVar25;
  long lVar26;
  long lVar27;
  long lVar28;
  double dVar29;
  double dVar30;
  double dVar31;
  double dVar32;
  
  uVar3 = **(uint **)(param_1 + 0x10);
  if (0 < (int)uVar3) {
    uVar11 = 0;
    uVar4 = (*(uint **)(param_1 + 0x10))[1];
    uVar17 = (ulong)(*param_1 >> 3) & 0x1ff;
    uVar1 = (int)uVar17 + 1;
    uVar5 = uVar1 * uVar4;
    lVar21 = *(long *)(param_1 + 4);
    lVar15 = **(long **)(param_1 + 0x12);
    lVar19 = *(long *)(param_2 + 0x10);
    lVar16 = **(long **)(param_2 + 0x48);
    iVar6 = uVar1 * (uVar4 - 4);
    lVar7 = lVar21 + uVar17 * 0x28 + 0x28;
    lVar2 = uVar17 * 0x20 + 0x20;
    lVar8 = lVar21 + lVar2;
    lVar9 = lVar21 + uVar17 * 0x18 + 0x18;
    lVar10 = lVar21 + uVar17 * 0x10 + 0x10;
    lVar20 = lVar19;
    lVar22 = lVar21;
    do {
      if (uVar5 == uVar1) {
        lVar12 = 0;
        do {
          *(undefined8 *)(lVar20 + lVar12) = *(undefined8 *)(lVar22 + lVar12);
          lVar12 = lVar12 + 8;
        } while (uVar17 * 8 + 8 != lVar12);
      }
      else {
        uVar23 = 0;
        lVar24 = lVar21 + uVar11 * lVar15;
        lVar25 = lVar22;
        lVar26 = lVar10;
        lVar27 = lVar9;
        lVar28 = lVar8;
        lVar12 = lVar7;
        do {
          dVar31 = *(double *)(lVar24 + uVar23 * 8);
          dVar29 = *(double *)(lVar24 + (ulong)uVar1 * 8 + uVar23 * 8);
          uVar18 = (ulong)(uVar1 * 2);
          if ((int)(uVar1 * 2) <= iVar6) {
            lVar13 = 0;
            uVar18 = uVar17 * 2 + 2;
            do {
              dVar32 = *(double *)(lVar26 + lVar13);
              if (dVar31 <= *(double *)(lVar26 + lVar13)) {
                dVar32 = dVar31;
              }
              dVar30 = *(double *)(lVar27 + lVar13);
              if (dVar29 <= *(double *)(lVar27 + lVar13)) {
                dVar30 = dVar29;
              }
              dVar31 = *(double *)(lVar28 + lVar13);
              if (dVar32 <= *(double *)(lVar28 + lVar13)) {
                dVar31 = dVar32;
              }
              dVar29 = *(double *)(lVar12 + lVar13);
              if (dVar30 <= *(double *)(lVar12 + lVar13)) {
                dVar29 = dVar30;
              }
              uVar18 = uVar18 + uVar17 * 4 + 4;
              lVar13 = lVar13 + lVar2;
            } while ((long)uVar18 <= (long)iVar6);
          }
          if ((int)uVar18 < (int)uVar5) {
            pdVar14 = (double *)(lVar25 + (uVar18 & 0xffffffff) * 8);
            dVar32 = dVar31;
            do {
              dVar31 = *pdVar14;
              if (dVar32 <= *pdVar14) {
                dVar31 = dVar32;
              }
              uVar4 = (int)uVar18 + uVar1;
              uVar18 = (ulong)uVar4;
              pdVar14 = pdVar14 + uVar17 + 1;
              dVar32 = dVar31;
            } while ((int)uVar4 < (int)uVar5);
          }
          if (dVar31 <= dVar29) {
            dVar29 = dVar31;
          }
          *(double *)(lVar19 + uVar11 * lVar16 + uVar23 * 8) = dVar29;
          uVar23 = uVar23 + 1;
          lVar12 = lVar12 + 8;
          lVar28 = lVar28 + 8;
          lVar27 = lVar27 + 8;
          lVar26 = lVar26 + 8;
          lVar25 = lVar25 + 8;
        } while (uVar23 != uVar1);
      }
      uVar11 = uVar11 + 1;
      lVar7 = lVar7 + lVar15;
      lVar8 = lVar8 + lVar15;
      lVar9 = lVar9 + lVar15;
      lVar10 = lVar10 + lVar15;
      lVar22 = lVar22 + lVar15;
      lVar20 = lVar20 + lVar16;
    } while (uVar11 != uVar3);
  }
  return;
}



/* Entry: 109a98810; end: 109a98d53;  */

void FUN_109a98810(uint *param_1,uint *param_2,undefined8 param_3)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  ulong uVar5;
  undefined4 *puVar6;
  ulong *puVar7;
  long lVar8;
  undefined8 *puVar9;
  code *pcVar10;
  undefined8 uStack_160;
  ulong uStack_158;
  ulong uStack_150;
  ulong uStack_148;
  ulong uStack_140;
  ulong uStack_138;
  ulong uStack_130;
  ulong uStack_128;
  ulong uStack_120;
  undefined8 *puStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  ulong uStack_f8;
  ulong uStack_f0;
  ulong uStack_e8;
  ulong uStack_e0;
  ulong uStack_d8;
  ulong uStack_d0;
  ulong uStack_c8;
  ulong uStack_c0;
  undefined8 *puStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  ulong uStack_98;
  ulong uStack_90;
  ulong uStack_88;
  ulong uStack_80;
  ulong uStack_78;
  ulong uStack_70;
  ulong uStack_68;
  undefined8 *puStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  if ((*param_1 & 0x1f0000) == 0x10000) {
    puVar7 = *(ulong **)(param_1 + 2);
    puStack_60 = (undefined8 *)((ulong)&uStack_a0 | 8);
    uStack_98 = puVar7[1];
    uStack_a0 = *puVar7;
    uStack_88 = puVar7[3];
    uStack_90 = puVar7[2];
    uStack_78 = puVar7[5];
    uStack_80 = puVar7[4];
    uStack_68 = puVar7[7];
    uStack_70 = puVar7[6];
    puStack_58 = &uStack_50;
    uStack_50 = 0;
    uStack_48 = 0;
    if (puVar7[7] != 0) {
      piVar1 = (int *)(puVar7[7] + 0x14);
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = *piVar1 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    if (*(int *)((long)puVar7 + 4) < 3) {
      uStack_50 = *(undefined8 *)puVar7[9];
      uStack_48 = ((undefined8 *)puVar7[9])[1];
    }
    else {
      uStack_a0 = uStack_a0 & 0xffffffff;
      func_0x000109a84868(&uStack_a0);
    }
  }
  else {
    FUN_109a8a180(&uStack_a0,param_1,0xffffffff);
  }
  if ((uStack_a0._4_4_ < 3 && (uStack_a0 & 0xff8) == 0) && (int)(uStack_a0 & 7) != 7) {
    pcVar10 = (code *)(&PTR_FUN_110b22988)[uStack_a0 & 7];
    if ((*param_2 & 0x1f0000) == 0x10000) {
      puVar7 = *(ulong **)(param_2 + 2);
      uStack_c0 = (ulong)&uStack_100 | 8;
      uStack_f8 = puVar7[1];
      uStack_100 = (undefined4 *)*puVar7;
      uStack_e8 = puVar7[3];
      uStack_f0 = puVar7[2];
      uStack_d8 = puVar7[5];
      uStack_e0 = puVar7[4];
      uStack_c8 = puVar7[7];
      uStack_d0 = puVar7[6];
      puStack_b8 = &uStack_b0;
      uStack_b0 = 0;
      uStack_a8 = 0;
      if (puVar7[7] != 0) {
        piVar1 = (int *)(puVar7[7] + 0x14);
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar4) {
            *piVar1 = *piVar1 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
      if (*(int *)((long)puVar7 + 4) < 3) {
        uStack_b0 = *(undefined8 *)puVar7[9];
        uStack_a8 = ((undefined8 *)puVar7[9])[1];
      }
      else {
        uStack_100 = (undefined4 *)((ulong)uStack_100 & 0xffffffff);
        func_0x000109a84868(&uStack_100);
      }
    }
    else {
      FUN_109a8a180(&uStack_100,param_2,0xffffffff);
    }
    if (uStack_f0 == uStack_90) {
      FUN_109a8e944(param_2);
    }
    uStack_160 = NEON_rev64(*puStack_60,4);
    FUN_109a8ee3c(param_2,&uStack_160,4,0xffffffff,0,0);
    if ((*param_2 & 0x1f0000) == 0x10000) {
      puVar7 = *(ulong **)(param_2 + 2);
      uStack_120 = (ulong)&uStack_160 | 8;
      uStack_158 = puVar7[1];
      uStack_160 = *puVar7;
      uStack_148 = puVar7[3];
      uStack_150 = puVar7[2];
      uStack_138 = puVar7[5];
      uStack_140 = puVar7[4];
      uStack_128 = puVar7[7];
      uStack_130 = puVar7[6];
      puStack_118 = &uStack_110;
      uStack_110 = 0;
      uStack_108 = 0;
      if (puVar7[7] != 0) {
        piVar1 = (int *)(puVar7[7] + 0x14);
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar4) {
            *piVar1 = *piVar1 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
      if (*(int *)((long)puVar7 + 4) < 3) {
        uStack_110 = *(undefined8 *)puVar7[9];
        uStack_108 = ((undefined8 *)puVar7[9])[1];
      }
      else {
        uStack_160 = uStack_160 & 0xffffffff;
        func_0x000109a84868(&uStack_160);
      }
    }
    else {
      FUN_109a8a180(&uStack_160,param_2,0xffffffff);
    }
    if (uStack_c8 != 0) {
      piVar1 = (int *)(uStack_c8 + 0x14);
      do {
        iVar2 = *piVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = iVar2 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar2 + -1 == 0) {
        func_0x000109a848d4(&uStack_100);
      }
    }
    if (0 < uStack_100._4_4_) {
      lVar8 = 0;
      do {
        *(undefined4 *)(uStack_c0 + lVar8 * 4) = 0;
        lVar8 = lVar8 + 1;
      } while (lVar8 < uStack_100._4_4_);
    }
    uStack_f8 = uStack_158;
    uStack_100 = (undefined4 *)uStack_160;
    uStack_e8 = uStack_148;
    uStack_f0 = uStack_150;
    uStack_d8 = uStack_138;
    uStack_e0 = uStack_140;
    uStack_c8 = uStack_128;
    uStack_d0 = uStack_130;
    uVar5 = uStack_c0;
    puVar9 = puStack_b8;
    if ((puStack_b8 != &uStack_b0) &&
       (uVar5 = (ulong)&uStack_100 | 8, puVar9 = &uStack_b0, puStack_b8 != (undefined8 *)0x0)) {
      _free(puStack_b8[-1]);
    }
    puStack_b8 = puVar9;
    uStack_c0 = uVar5;
    if (uStack_160._4_4_ < 3) {
      puVar9 = (undefined8 *)((ulong)&uStack_160 | 4);
      *puStack_b8 = *puStack_118;
      puStack_b8[1] = puStack_118[1];
      uStack_160 = CONCAT44(uStack_160._4_4_,0x42ff0000);
      puVar9[1] = 0;
      *puVar9 = 0;
      puVar9[3] = 0;
      puVar9[2] = 0;
      puVar9[5] = 0;
      puVar9[4] = 0;
      *(undefined8 *)((long)puVar9 + 0x34) = 0;
      *(undefined8 *)((long)puVar9 + 0x2c) = 0;
      if (puStack_118 != &uStack_110) {
        _free(puStack_118[-1]);
      }
    }
    else {
      uStack_c0 = uStack_120;
      puStack_b8 = puStack_118;
    }
    (*pcVar10)(&uStack_a0,&uStack_100,param_3);
    if (uStack_c8 != 0) {
      piVar1 = (int *)(uStack_c8 + 0x14);
      do {
        iVar2 = *piVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = iVar2 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar2 + -1 == 0) {
        func_0x000109a848d4(&uStack_100);
      }
    }
    uStack_c8 = 0;
    uStack_e8 = 0;
    uStack_f0 = 0;
    uStack_d8 = 0;
    uStack_e0 = 0;
    if (0 < uStack_100._4_4_) {
      lVar8 = 0;
      do {
        *(undefined4 *)(uStack_c0 + lVar8 * 4) = 0;
        lVar8 = lVar8 + 1;
      } while (lVar8 < uStack_100._4_4_);
    }
    if (puStack_b8 != &uStack_b0 && puStack_b8 != (undefined8 *)0x0) {
      _free(puStack_b8[-1]);
    }
    if (uStack_68 != 0) {
      piVar1 = (int *)(uStack_68 + 0x14);
      do {
        iVar2 = *piVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = iVar2 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar2 + -1 == 0) {
        func_0x000109a848d4(&uStack_a0);
      }
    }
    uStack_68 = 0;
    uStack_88 = 0;
    uStack_90 = 0;
    uStack_78 = 0;
    uStack_80 = 0;
    if (0 < uStack_a0._4_4_) {
      lVar8 = 0;
      do {
        *(undefined4 *)((long)puStack_60 + lVar8 * 4) = 0;
        lVar8 = lVar8 + 1;
      } while (lVar8 < uStack_a0._4_4_);
    }
    if (puStack_58 != &uStack_50 && puStack_58 != (undefined8 *)0x0) {
      _free(puStack_58[-1]);
    }
    return;
  }
  puVar6 = (undefined4 *)0x38;
  func_0x000107c2ae8c();
  *puVar6 = 1;
  uStack_100 = puVar6 + 1;
  uStack_f8 = 0x31;
  *(undefined8 *)(puVar6 + 3) = 0x26262032203d3c20;
  *(undefined8 *)(puVar6 + 1) = 0x736d69642e637273;
  *(undefined2 *)(puVar6 + 0xd) = 0x30;
  *(undefined8 *)(puVar6 + 7) = 0x202928736c656e6e;
  *(undefined8 *)(puVar6 + 5) = 0x6168632e63727320;
  *(undefined8 *)(puVar6 + 0xb) = 0x203d2120636e7566;
  *(undefined8 *)(puVar6 + 9) = 0x2026262031203d3d;
  FUN_109ac3188(0xffffff29,&uStack_100,&UNK_10f5987ab,&UNK_10f597913,0x102b);
                    /* WARNING: Does not return */
  pcVar10 = (code *)SoftwareBreakpoint(1,0x109a98ce8);
  (*pcVar10)();
}



/* Entry: 109a98d54; end: 109a990eb;  */

void FUN_109a98d54(long param_1,int *param_2,undefined4 **param_3)

{
  long lVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  char cVar5;
  code *pcVar6;
  bool bVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  int *piVar11;
  int *piVar12;
  long lVar13;
  undefined4 *puVar14;
  undefined4 *puVar15;
  long lVar16;
  undefined4 **ppuVar17;
  undefined4 **ppuVar18;
  long lVar19;
  ulong uVar20;
  undefined2 *puVar21;
  uint uVar22;
  ulong uVar23;
  undefined4 *unaff_x24;
  undefined4 *puVar24;
  undefined4 *puVar25;
  ulong unaff_x26;
  ulong uVar26;
  long lVar27;
  ulong unaff_x27;
  undefined4 **ppuVar28;
  undefined4 **ppuVar29;
  undefined4 *puStack_1ae8;
  undefined8 uStack_1ae0;
  undefined4 *puStack_1ad8;
  long lStack_1ad0;
  undefined4 auStack_1ac8 [264];
  undefined4 *puStack_16a8;
  long lStack_16a0;
  undefined4 auStack_1698 [262];
  undefined4 **ppuStack_1280;
  ulong uStack_1278;
  ulong uStack_1270;
  undefined4 *puStack_1268;
  undefined4 *puStack_1260;
  undefined4 *puStack_1258;
  undefined4 *puStack_1250;
  undefined4 *puStack_1248;
  int *piStack_1240;
  undefined4 *puStack_1238;
  undefined1 **ppuStack_1230;
  code *pcStack_1228;
  undefined4 *puStack_1220;
  undefined4 *puStack_1218;
  long lStack_1210;
  ulong uStack_1208;
  undefined4 *puStack_1200;
  ulong uStack_11f8;
  uint uStack_11ec;
  long lStack_11e8;
  long lStack_11e0;
  undefined4 *puStack_11d8;
  undefined8 uStack_11d0;
  undefined4 *puStack_11c8;
  undefined4 *puStack_11c0;
  undefined4 auStack_11b8 [264];
  undefined4 *puStack_d98;
  undefined4 *puStack_d90;
  undefined4 auStack_d88 [258];
  long lStack_980;
  undefined4 **ppuStack_970;
  ulong uStack_968;
  ulong uStack_960;
  undefined4 *puStack_958;
  undefined4 *puStack_950;
  undefined4 *puStack_948;
  undefined4 *puStack_940;
  long lStack_938;
  int *piStack_930;
  undefined4 *puStack_928;
  undefined1 *puStack_920;
  code *pcStack_918;
  undefined4 *puStack_910;
  undefined4 *puStack_908;
  long lStack_900;
  ulong uStack_8f8;
  undefined4 *puStack_8f0;
  ulong uStack_8e8;
  uint uStack_8dc;
  long lStack_8d8;
  long lStack_8d0;
  undefined4 *puStack_8c8;
  undefined8 uStack_8c0;
  undefined4 *puStack_8b8;
  undefined4 *puStack_8b0;
  undefined4 auStack_8a8 [264];
  undefined4 *puStack_488;
  undefined4 *puStack_480;
  undefined4 auStack_478 [258];
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_480 = (undefined4 *)0x408;
  puStack_8b0 = (undefined4 *)0x108;
  puStack_8b8 = auStack_8a8;
  puStack_488 = auStack_478;
  if (*(long *)(param_1 + 0x10) == *(long *)(param_2 + 4)) {
    puVar15 = (undefined4 *)0x1c;
    func_0x000107c2ae8c();
    *puVar15 = 1;
    puStack_8c8 = puVar15 + 1;
    uStack_8c0 = 0x14;
    *(undefined1 *)(puVar15 + 6) = 0;
    puVar15[5] = 0x61746164;
    *(undefined8 *)(puVar15 + 3) = 0x2e747364203d2120;
    *(undefined8 *)(puVar15 + 1) = 0x617461642e637273;
    FUN_109ac3188(0xffffff29,&puStack_8c8,&UNK_10f598add,&UNK_10f597913,0xfbc);
                    /* WARNING: Does not return */
    pcVar6 = (code *)SoftwareBreakpoint(1,0x109a99084);
    (*pcVar6)();
  }
  puVar15 = auStack_478;
  piVar11 = param_2;
  ppuVar17 = param_3;
  if (((ulong)param_3 & 1) == 0) {
    uVar22 = *(uint *)(param_1 + 8);
    uVar3 = *(uint *)(param_1 + 0xc);
    puVar24 = puStack_8b0;
  }
  else {
    uVar3 = *(uint *)(param_1 + 8);
    uVar22 = *(uint *)(param_1 + 0xc);
    unaff_x26 = (ulong)uVar22;
    unaff_x24 = (undefined4 *)(long)(int)uVar3;
    if (uVar3 < 0x409) {
      puVar24 = unaff_x24;
      puStack_480 = unaff_x24;
      if (uVar3 < 0x109) goto LAB_109a98e30;
    }
    else {
      puVar15 = unaff_x24;
      __Znam();
    }
    puVar24 = (undefined4 *)((long)unaff_x24 << 2);
    if ((int)uVar3 < 0) {
      puVar24 = (undefined4 *)0xffffffffffffffff;
    }
    puStack_488 = puVar15;
    puStack_480 = unaff_x24;
    __Znam();
    puStack_8b8 = puVar24;
    puVar24 = unaff_x24;
  }
LAB_109a98e30:
  puStack_8b0 = puVar24;
  ppuVar28 = (undefined4 **)(ulong)uVar3;
  puVar24 = auStack_478;
  puVar25 = auStack_8a8;
  ppuVar18 = ppuVar28;
  if (0 < (int)uVar22) {
    unaff_x26 = 0;
    unaff_x27 = 0;
    lStack_8d0 = (long)(int)uVar3;
    lStack_8d8 = 0;
    if (uVar3 != 0) {
      lStack_8d8 = LZCOUNT(lStack_8d0) * -2 + 0x7e;
    }
    uStack_8dc = (uint)(((ulong)param_3 & 0x10) == 0 || (int)uVar3 < 2);
    uStack_8f8 = (ulong)(uint)((int)uVar3 / 2);
    bVar7 = ((ulong)param_3 & 1) == 0;
    uStack_8e8 = (ulong)uVar22;
    unaff_x24 = (undefined4 *)(ulong)(bVar7 || (int)uVar3 < 1);
    lStack_900 = (-(ulong)(uVar3 >> 0x1f) & 0xfffffffc00000000 | (long)ppuVar28 << 2) - 4;
    puStack_910 = auStack_8a8;
    puStack_908 = auStack_478;
    puStack_8f0 = puStack_8b8;
    do {
      if (((ulong)param_3 & 1) == 0) {
        puStack_8c8 = (undefined4 *)
                      (*(long *)(param_1 + 0x10) + *(long *)(param_1 + 0x50) * unaff_x27);
        puVar24 = (undefined4 *)(*(long *)(param_2 + 4) + **(long **)(param_2 + 0x12) * unaff_x27);
        if (0 < (int)uVar3) {
LAB_109a98f20:
          ppuVar17 = (undefined4 **)0x0;
          do {
            puVar24[(long)ppuVar17] = (int)ppuVar17;
            ppuVar17 = (undefined4 **)((long)ppuVar17 + 1);
          } while (ppuVar28 != ppuVar17);
        }
      }
      else {
        puStack_8c8 = puVar15;
        puVar24 = puStack_8f0;
        if (0 < (int)uVar3) {
          ppuVar17 = (undefined4 **)0x0;
          do {
            *(undefined1 *)((long)puVar15 + (long)ppuVar17) =
                 *(undefined1 *)
                  (*(long *)(param_1 + 0x10) + **(long **)(param_1 + 0x48) * (long)ppuVar17 +
                  unaff_x27);
            ppuVar17 = (undefined4 **)((long)ppuVar17 + 1);
          } while (ppuVar28 != ppuVar17);
          goto LAB_109a98f20;
        }
      }
      piVar11 = puVar24 + lStack_8d0;
      ppuVar17 = &puStack_8c8;
      FUN_109a9e70c(puVar24,piVar11,ppuVar17,lStack_8d8,1);
      if ((uStack_8dc & 1) == 0) {
        puVar25 = (undefined4 *)((long)puVar24 + lStack_900);
        puVar14 = puVar24;
        uVar26 = uStack_8f8;
        do {
          uVar4 = *puVar14;
          *puVar14 = *puVar25;
          *puVar25 = uVar4;
          uVar26 = uVar26 - 1;
          puVar25 = puVar25 + -1;
          puVar14 = puVar14 + 1;
        } while (uVar26 != 0);
      }
      if (!bVar7 && (int)uVar3 >= 1) {
        lVar13 = **(long **)(param_2 + 0x12);
        puVar25 = (undefined4 *)(*(long *)(param_2 + 4) + unaff_x26);
        ppuVar18 = ppuVar28;
        do {
          *puVar25 = *puVar24;
          puVar25 = (undefined4 *)((long)puVar25 + lVar13);
          ppuVar18 = (undefined4 **)((long)ppuVar18 + -1);
          puVar24 = puVar24 + 1;
        } while (ppuVar18 != (undefined4 **)0x0);
      }
      unaff_x27 = unaff_x27 + 1;
      unaff_x26 = unaff_x26 + 4;
      puVar24 = puStack_908;
      puVar25 = puStack_910;
      ppuVar18 = param_3;
    } while (unaff_x27 != uStack_8e8);
  }
  if (puStack_8b8 != puVar25 && puStack_8b8 != (undefined4 *)0x0) {
    __ZdaPv();
  }
  puVar14 = puStack_488;
  if (puStack_488 != puVar24 && puStack_488 != (undefined4 *)0x0) {
    __ZdaPv();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  puStack_8c8 = (undefined4 *)0x0;
  uStack_8c0 = 0;
  do {
    iVar2 = *param_2;
    cVar5 = '\x01';
    bVar7 = (bool)ExclusiveMonitorPass(param_2,0x10);
    if (bVar7) {
      *param_2 = iVar2 + -1;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
  if (iVar2 + -1 == 0) {
    _free(*(undefined8 *)(param_2 + -2));
  }
  if (puStack_8b8 != puVar25 && puStack_8b8 != (undefined4 *)0x0) {
    __ZdaPv();
  }
  if (puStack_488 != puVar24 && puStack_488 != (undefined4 *)0x0) {
    __ZdaPv();
  }
  puVar8 = puVar14;
  __Unwind_Resume();
  pcStack_918 = FUN_109a990ec;
  lStack_980 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_d90 = (undefined4 *)0x408;
  puStack_11c0 = (undefined4 *)0x108;
  puStack_11c8 = auStack_11b8;
  puStack_d98 = auStack_d88;
  ppuStack_970 = ppuVar18;
  uStack_968 = unaff_x27;
  uStack_960 = unaff_x26;
  puStack_958 = puVar25;
  puStack_950 = unaff_x24;
  puStack_948 = puVar24;
  puStack_940 = puVar15;
  lStack_938 = param_1;
  piStack_930 = param_2;
  puStack_928 = puVar14;
  puStack_920 = &stack0xfffffffffffffff0;
  if (*(long *)(puVar8 + 4) == *(long *)(piVar11 + 4)) {
    puVar15 = (undefined4 *)0x1c;
    func_0x000107c2ae8c();
    *puVar15 = 1;
    puStack_11d8 = puVar15 + 1;
    uStack_11d0 = 0x14;
    *(undefined1 *)(puVar15 + 6) = 0;
    puVar15[5] = 0x61746164;
    *(undefined8 *)(puVar15 + 3) = 0x2e747364203d2120;
    *(undefined8 *)(puVar15 + 1) = 0x617461642e637273;
    FUN_109ac3188(0xffffff29,&puStack_11d8,&UNK_10f598add,&UNK_10f597913,0xfbc);
                    /* WARNING: Does not return */
    pcVar6 = (code *)SoftwareBreakpoint(1,0x109a9941c);
    (*pcVar6)();
  }
  puVar15 = auStack_d88;
  piVar12 = piVar11;
  ppuVar18 = ppuVar17;
  if (((ulong)ppuVar17 & 1) == 0) {
    uVar22 = puVar8[2];
    uVar3 = puVar8[3];
    puVar24 = unaff_x24;
    uVar26 = unaff_x26;
    puVar25 = puStack_11c0;
  }
  else {
    uVar3 = puVar8[2];
    uVar22 = puVar8[3];
    uVar26 = (ulong)uVar22;
    puVar24 = (undefined4 *)(long)(int)uVar3;
    puVar25 = puVar24;
    if (uVar3 < 0x409) {
      puStack_d90 = puVar24;
      if (uVar3 < 0x109) goto LAB_109a991c8;
    }
    else {
      puVar15 = puVar24;
      __Znam();
    }
    puVar14 = (undefined4 *)((long)puVar24 << 2);
    if ((int)uVar3 < 0) {
      puVar14 = (undefined4 *)0xffffffffffffffff;
    }
    puStack_d98 = puVar15;
    puStack_d90 = puVar24;
    __Znam();
    puStack_11c8 = puVar14;
  }
LAB_109a991c8:
  puStack_11c0 = puVar25;
  ppuVar29 = (undefined4 **)(ulong)uVar3;
  puVar25 = auStack_d88;
  puVar14 = auStack_11b8;
  ppuVar28 = ppuVar29;
  if (0 < (int)uVar22) {
    uVar26 = 0;
    unaff_x27 = 0;
    lStack_11e0 = (long)(int)uVar3;
    lStack_11e8 = 0;
    if (uVar3 != 0) {
      lStack_11e8 = LZCOUNT(lStack_11e0) * -2 + 0x7e;
    }
    uStack_11ec = (uint)(((ulong)ppuVar17 & 0x10) == 0 || (int)uVar3 < 2);
    uStack_1208 = (ulong)(uint)((int)uVar3 / 2);
    bVar7 = ((ulong)ppuVar17 & 1) == 0;
    uStack_11f8 = (ulong)uVar22;
    puVar24 = (undefined4 *)(ulong)(bVar7 || (int)uVar3 < 1);
    lStack_1210 = (-(ulong)(uVar3 >> 0x1f) & 0xfffffffc00000000 | (long)ppuVar29 << 2) - 4;
    puStack_1220 = auStack_11b8;
    puStack_1218 = auStack_d88;
    puStack_1200 = puStack_11c8;
    do {
      if (((ulong)ppuVar17 & 1) == 0) {
        puStack_11d8 = (undefined4 *)(*(long *)(puVar8 + 4) + *(long *)(puVar8 + 0x14) * unaff_x27);
        puVar25 = (undefined4 *)(*(long *)(piVar11 + 4) + **(long **)(piVar11 + 0x12) * unaff_x27);
        if (0 < (int)uVar3) {
LAB_109a992b8:
          ppuVar18 = (undefined4 **)0x0;
          do {
            puVar25[(long)ppuVar18] = (int)ppuVar18;
            ppuVar18 = (undefined4 **)((long)ppuVar18 + 1);
          } while (ppuVar29 != ppuVar18);
        }
      }
      else {
        puStack_11d8 = puVar15;
        puVar25 = puStack_1200;
        if (0 < (int)uVar3) {
          ppuVar18 = (undefined4 **)0x0;
          do {
            *(undefined1 *)((long)puVar15 + (long)ppuVar18) =
                 *(undefined1 *)
                  (*(long *)(puVar8 + 4) + **(long **)(puVar8 + 0x12) * (long)ppuVar18 + unaff_x27);
            ppuVar18 = (undefined4 **)((long)ppuVar18 + 1);
          } while (ppuVar29 != ppuVar18);
          goto LAB_109a992b8;
        }
      }
      piVar12 = puVar25 + lStack_11e0;
      ppuVar18 = &puStack_11d8;
      FUN_109a9f604(puVar25,piVar12,ppuVar18,lStack_11e8,1);
      if ((uStack_11ec & 1) == 0) {
        puVar14 = (undefined4 *)((long)puVar25 + lStack_1210);
        puVar9 = puVar25;
        uVar23 = uStack_1208;
        do {
          uVar4 = *puVar9;
          *puVar9 = *puVar14;
          *puVar14 = uVar4;
          uVar23 = uVar23 - 1;
          puVar14 = puVar14 + -1;
          puVar9 = puVar9 + 1;
        } while (uVar23 != 0);
      }
      if (!bVar7 && (int)uVar3 >= 1) {
        lVar13 = **(long **)(piVar11 + 0x12);
        puVar14 = (undefined4 *)(*(long *)(piVar11 + 4) + uVar26);
        ppuVar28 = ppuVar29;
        do {
          *puVar14 = *puVar25;
          puVar14 = (undefined4 *)((long)puVar14 + lVar13);
          ppuVar28 = (undefined4 **)((long)ppuVar28 + -1);
          puVar25 = puVar25 + 1;
        } while (ppuVar28 != (undefined4 **)0x0);
      }
      unaff_x27 = unaff_x27 + 1;
      uVar26 = uVar26 + 4;
      puVar25 = puStack_1218;
      puVar14 = puStack_1220;
      ppuVar28 = ppuVar17;
    } while (unaff_x27 != uStack_11f8);
  }
  if (puStack_11c8 != puVar14 && puStack_11c8 != (undefined4 *)0x0) {
    __ZdaPv();
  }
  puVar9 = puStack_d98;
  if (puStack_d98 != puVar25 && puStack_d98 != (undefined4 *)0x0) {
    __ZdaPv();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_980) {
    return;
  }
  ___stack_chk_fail();
  puStack_11d8 = (undefined4 *)0x0;
  uStack_11d0 = 0;
  do {
    iVar2 = *piVar11;
    cVar5 = '\x01';
    bVar7 = (bool)ExclusiveMonitorPass(piVar11,0x10);
    if (bVar7) {
      *piVar11 = iVar2 + -1;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
  if (iVar2 + -1 == 0) {
    _free(*(undefined8 *)(piVar11 + -2));
  }
  if (puStack_11c8 != puVar14 && puStack_11c8 != (undefined4 *)0x0) {
    __ZdaPv();
  }
  if (puStack_d98 != puVar25 && puStack_d98 != (undefined4 *)0x0) {
    __ZdaPv();
  }
  puVar10 = puVar9;
  __Unwind_Resume();
  pcStack_1228 = FUN_109a99484;
  lStack_16a0 = 0x208;
  lStack_1ad0 = 0x108;
  puStack_1ad8 = auStack_1ac8;
  puStack_16a8 = auStack_1698;
  ppuStack_1280 = ppuVar28;
  uStack_1278 = unaff_x27;
  uStack_1270 = uVar26;
  puStack_1268 = puVar14;
  puStack_1260 = puVar24;
  puStack_1258 = puVar25;
  puStack_1250 = puVar15;
  puStack_1248 = puVar8;
  piStack_1240 = piVar11;
  puStack_1238 = puVar9;
  ppuStack_1230 = &puStack_920;
  if (*(long *)(puVar10 + 4) == *(long *)(piVar12 + 4)) {
    puVar15 = (undefined4 *)0x1c;
    func_0x000107c2ae8c();
    *puVar15 = 1;
    puStack_1ae8 = puVar15 + 1;
    uStack_1ae0 = 0x14;
    *(undefined1 *)(puVar15 + 6) = 0;
    puVar15[5] = 0x61746164;
    *(undefined8 *)(puVar15 + 3) = 0x2e747364203d2120;
    *(undefined8 *)(puVar15 + 1) = 0x617461642e637273;
    FUN_109ac3188(0xffffff29,&puStack_1ae8,&UNK_10f598add,&UNK_10f597913,0xfbc);
                    /* WARNING: Does not return */
    pcVar6 = (code *)SoftwareBreakpoint(1,0x109a997b8);
    (*pcVar6)();
  }
  puVar15 = auStack_1698;
  if (((ulong)ppuVar18 & 1) == 0) {
    uVar22 = puVar10[2];
    uVar3 = puVar10[3];
    lVar13 = lStack_1ad0;
  }
  else {
    uVar3 = puVar10[2];
    uVar22 = puVar10[3];
    lVar13 = (long)(int)uVar3;
    if (uVar3 < 0x209) {
      lStack_16a0 = lVar13;
      if (uVar3 < 0x109) goto LAB_109a99564;
    }
    else {
      puVar15 = (undefined4 *)(lVar13 << 1);
      if (0x7fffffff < uVar3) {
        puVar15 = (undefined4 *)0xffffffffffffffff;
      }
      __Znam();
    }
    puVar24 = (undefined4 *)(lVar13 << 2);
    if ((int)uVar3 < 0) {
      puVar24 = (undefined4 *)0xffffffffffffffff;
    }
    puStack_16a8 = puVar15;
    lStack_16a0 = lVar13;
    __Znam();
    puStack_1ad8 = puVar24;
  }
LAB_109a99564:
  lStack_1ad0 = lVar13;
  puVar24 = puStack_1ad8;
  uVar26 = (ulong)uVar3;
  if (0 < (int)uVar22) {
    lVar27 = 0;
    lVar13 = 0;
    uVar23 = 0;
    lVar1 = 0;
    if (uVar3 != 0) {
      lVar1 = LZCOUNT((long)(int)uVar3) * -2 + 0x7e;
    }
    do {
      if (((ulong)ppuVar18 & 1) == 0) {
        puStack_1ae8 = (undefined4 *)(*(long *)(puVar10 + 4) + *(long *)(puVar10 + 0x14) * uVar23);
        puVar25 = (undefined4 *)(*(long *)(piVar12 + 4) + **(long **)(piVar12 + 0x12) * uVar23);
        if (0 < (int)uVar3) {
LAB_109a9965c:
          uVar20 = 0;
          do {
            puVar25[uVar20] = (int)uVar20;
            uVar20 = uVar20 + 1;
          } while (uVar26 != uVar20);
        }
      }
      else {
        puStack_1ae8 = puVar15;
        puVar25 = puVar24;
        if (0 < (int)uVar3) {
          lVar16 = 0;
          lVar19 = **(long **)(puVar10 + 0x12);
          puVar21 = (undefined2 *)(*(long *)(puVar10 + 4) + lVar13);
          do {
            *(undefined2 *)((long)puVar15 + lVar16) = *puVar21;
            lVar16 = lVar16 + 2;
            puVar21 = (undefined2 *)((long)puVar21 + lVar19);
          } while (uVar26 << 1 != lVar16);
          goto LAB_109a9965c;
        }
      }
      FUN_109aa04fc(puVar25,puVar25 + (int)uVar3,&puStack_1ae8,lVar1,1);
      if (((ulong)ppuVar18 & 0x10) != 0 && 1 < (int)uVar3) {
        puVar14 = (undefined4 *)
                  ((long)puVar25 +
                  ((-(ulong)(uVar3 >> 0x1f) & 0xfffffffc00000000 | uVar26 << 2) - 4));
        puVar8 = puVar25;
        uVar20 = (ulong)(uint)((int)uVar3 / 2);
        do {
          uVar4 = *puVar8;
          *puVar8 = *puVar14;
          *puVar14 = uVar4;
          uVar20 = uVar20 - 1;
          puVar14 = puVar14 + -1;
          puVar8 = puVar8 + 1;
        } while (uVar20 != 0);
      }
      if (((ulong)ppuVar18 & 1) != 0 && 0 < (int)uVar3) {
        lVar16 = **(long **)(piVar12 + 0x12);
        puVar14 = (undefined4 *)(*(long *)(piVar12 + 4) + lVar27);
        uVar20 = uVar26;
        do {
          *puVar14 = *puVar25;
          puVar14 = (undefined4 *)((long)puVar14 + lVar16);
          uVar20 = uVar20 - 1;
          puVar25 = puVar25 + 1;
        } while (uVar20 != 0);
      }
      uVar23 = uVar23 + 1;
      lVar13 = lVar13 + 2;
      lVar27 = lVar27 + 4;
    } while (uVar23 != uVar22);
  }
  if (puStack_1ad8 != auStack_1ac8 && puStack_1ad8 != (undefined4 *)0x0) {
    __ZdaPv();
  }
  if (puStack_16a8 != auStack_1698 && puStack_16a8 != (undefined4 *)0x0) {
    __ZdaPv();
  }
  return;
}



/* Entry: 109a990ec; end: 109a99483;  */

void FUN_109a990ec(long param_1,int *param_2,undefined4 **param_3)

{
  long lVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  char cVar5;
  code *pcVar6;
  bool bVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  int *piVar10;
  long lVar11;
  undefined4 *puVar12;
  long lVar13;
  undefined4 **ppuVar14;
  long lVar15;
  ulong uVar16;
  undefined4 *puVar17;
  undefined4 **ppuVar18;
  undefined2 *puVar19;
  uint uVar20;
  ulong uVar21;
  ulong uVar22;
  undefined4 *unaff_x24;
  undefined4 *puVar23;
  undefined4 *puVar24;
  ulong unaff_x26;
  long lVar25;
  ulong unaff_x27;
  undefined4 **ppuVar26;
  undefined4 *puStack_11d8;
  undefined8 uStack_11d0;
  undefined4 *puStack_11c8;
  long lStack_11c0;
  undefined4 auStack_11b8 [264];
  undefined4 *puStack_d98;
  long lStack_d90;
  undefined4 auStack_d88 [262];
  undefined4 **ppuStack_970;
  ulong uStack_968;
  ulong uStack_960;
  undefined4 *puStack_958;
  undefined4 *puStack_950;
  undefined4 *puStack_948;
  undefined4 *puStack_940;
  long lStack_938;
  int *piStack_930;
  undefined4 *puStack_928;
  undefined1 *puStack_920;
  code *pcStack_918;
  undefined4 *puStack_910;
  undefined4 *puStack_908;
  long lStack_900;
  ulong uStack_8f8;
  undefined4 *puStack_8f0;
  ulong uStack_8e8;
  uint uStack_8dc;
  long lStack_8d8;
  long lStack_8d0;
  undefined4 *puStack_8c8;
  undefined8 uStack_8c0;
  undefined4 *puStack_8b8;
  undefined4 *puStack_8b0;
  undefined4 auStack_8a8 [264];
  undefined4 *puStack_488;
  undefined4 *puStack_480;
  undefined4 auStack_478 [258];
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_480 = (undefined4 *)0x408;
  puStack_8b0 = (undefined4 *)0x108;
  puStack_8b8 = auStack_8a8;
  puStack_488 = auStack_478;
  if (*(long *)(param_1 + 0x10) == *(long *)(param_2 + 4)) {
    puVar12 = (undefined4 *)0x1c;
    func_0x000107c2ae8c();
    *puVar12 = 1;
    puStack_8c8 = puVar12 + 1;
    uStack_8c0 = 0x14;
    *(undefined1 *)(puVar12 + 6) = 0;
    puVar12[5] = 0x61746164;
    *(undefined8 *)(puVar12 + 3) = 0x2e747364203d2120;
    *(undefined8 *)(puVar12 + 1) = 0x617461642e637273;
    FUN_109ac3188(0xffffff29,&puStack_8c8,&UNK_10f598add,&UNK_10f597913,0xfbc);
                    /* WARNING: Does not return */
    pcVar6 = (code *)SoftwareBreakpoint(1,0x109a9941c);
    (*pcVar6)();
  }
  puVar12 = auStack_478;
  piVar10 = param_2;
  ppuVar14 = param_3;
  if (((ulong)param_3 & 1) == 0) {
    uVar20 = *(uint *)(param_1 + 8);
    uVar3 = *(uint *)(param_1 + 0xc);
    puVar23 = puStack_8b0;
  }
  else {
    uVar3 = *(uint *)(param_1 + 8);
    uVar20 = *(uint *)(param_1 + 0xc);
    unaff_x26 = (ulong)uVar20;
    unaff_x24 = (undefined4 *)(long)(int)uVar3;
    if (uVar3 < 0x409) {
      puVar23 = unaff_x24;
      puStack_480 = unaff_x24;
      if (uVar3 < 0x109) goto LAB_109a991c8;
    }
    else {
      puVar12 = unaff_x24;
      __Znam();
    }
    puVar23 = (undefined4 *)((long)unaff_x24 << 2);
    if ((int)uVar3 < 0) {
      puVar23 = (undefined4 *)0xffffffffffffffff;
    }
    puStack_488 = puVar12;
    puStack_480 = unaff_x24;
    __Znam();
    puStack_8b8 = puVar23;
    puVar23 = unaff_x24;
  }
LAB_109a991c8:
  puStack_8b0 = puVar23;
  ppuVar26 = (undefined4 **)(ulong)uVar3;
  puVar23 = auStack_478;
  puVar24 = auStack_8a8;
  ppuVar18 = ppuVar26;
  if (0 < (int)uVar20) {
    unaff_x26 = 0;
    unaff_x27 = 0;
    lStack_8d0 = (long)(int)uVar3;
    lStack_8d8 = 0;
    if (uVar3 != 0) {
      lStack_8d8 = LZCOUNT(lStack_8d0) * -2 + 0x7e;
    }
    uStack_8dc = (uint)(((ulong)param_3 & 0x10) == 0 || (int)uVar3 < 2);
    uStack_8f8 = (ulong)(uint)((int)uVar3 / 2);
    bVar7 = ((ulong)param_3 & 1) == 0;
    uStack_8e8 = (ulong)uVar20;
    unaff_x24 = (undefined4 *)(ulong)(bVar7 || (int)uVar3 < 1);
    lStack_900 = (-(ulong)(uVar3 >> 0x1f) & 0xfffffffc00000000 | (long)ppuVar26 << 2) - 4;
    puStack_910 = auStack_8a8;
    puStack_908 = auStack_478;
    puStack_8f0 = puStack_8b8;
    do {
      if (((ulong)param_3 & 1) == 0) {
        puStack_8c8 = (undefined4 *)
                      (*(long *)(param_1 + 0x10) + *(long *)(param_1 + 0x50) * unaff_x27);
        puVar23 = (undefined4 *)(*(long *)(param_2 + 4) + **(long **)(param_2 + 0x12) * unaff_x27);
        if (0 < (int)uVar3) {
LAB_109a992b8:
          ppuVar14 = (undefined4 **)0x0;
          do {
            puVar23[(long)ppuVar14] = (int)ppuVar14;
            ppuVar14 = (undefined4 **)((long)ppuVar14 + 1);
          } while (ppuVar26 != ppuVar14);
        }
      }
      else {
        puStack_8c8 = puVar12;
        puVar23 = puStack_8f0;
        if (0 < (int)uVar3) {
          ppuVar14 = (undefined4 **)0x0;
          do {
            *(undefined1 *)((long)puVar12 + (long)ppuVar14) =
                 *(undefined1 *)
                  (*(long *)(param_1 + 0x10) + **(long **)(param_1 + 0x48) * (long)ppuVar14 +
                  unaff_x27);
            ppuVar14 = (undefined4 **)((long)ppuVar14 + 1);
          } while (ppuVar26 != ppuVar14);
          goto LAB_109a992b8;
        }
      }
      piVar10 = puVar23 + lStack_8d0;
      ppuVar14 = &puStack_8c8;
      FUN_109a9f604(puVar23,piVar10,ppuVar14,lStack_8d8,1);
      if ((uStack_8dc & 1) == 0) {
        puVar24 = (undefined4 *)((long)puVar23 + lStack_900);
        puVar8 = puVar23;
        uVar21 = uStack_8f8;
        do {
          uVar4 = *puVar8;
          *puVar8 = *puVar24;
          *puVar24 = uVar4;
          uVar21 = uVar21 - 1;
          puVar24 = puVar24 + -1;
          puVar8 = puVar8 + 1;
        } while (uVar21 != 0);
      }
      if (!bVar7 && (int)uVar3 >= 1) {
        lVar11 = **(long **)(param_2 + 0x12);
        puVar24 = (undefined4 *)(*(long *)(param_2 + 4) + unaff_x26);
        ppuVar18 = ppuVar26;
        do {
          *puVar24 = *puVar23;
          puVar24 = (undefined4 *)((long)puVar24 + lVar11);
          ppuVar18 = (undefined4 **)((long)ppuVar18 + -1);
          puVar23 = puVar23 + 1;
        } while (ppuVar18 != (undefined4 **)0x0);
      }
      unaff_x27 = unaff_x27 + 1;
      unaff_x26 = unaff_x26 + 4;
      puVar23 = puStack_908;
      puVar24 = puStack_910;
      ppuVar18 = param_3;
    } while (unaff_x27 != uStack_8e8);
  }
  if (puStack_8b8 != puVar24 && puStack_8b8 != (undefined4 *)0x0) {
    __ZdaPv();
  }
  puVar8 = puStack_488;
  if (puStack_488 != puVar23 && puStack_488 != (undefined4 *)0x0) {
    __ZdaPv();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  puStack_8c8 = (undefined4 *)0x0;
  uStack_8c0 = 0;
  do {
    iVar2 = *param_2;
    cVar5 = '\x01';
    bVar7 = (bool)ExclusiveMonitorPass(param_2,0x10);
    if (bVar7) {
      *param_2 = iVar2 + -1;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
  if (iVar2 + -1 == 0) {
    _free(*(undefined8 *)(param_2 + -2));
  }
  if (puStack_8b8 != puVar24 && puStack_8b8 != (undefined4 *)0x0) {
    __ZdaPv();
  }
  if (puStack_488 != puVar23 && puStack_488 != (undefined4 *)0x0) {
    __ZdaPv();
  }
  puVar9 = puVar8;
  __Unwind_Resume();
  pcStack_918 = FUN_109a99484;
  lStack_d90 = 0x208;
  lStack_11c0 = 0x108;
  puStack_11c8 = auStack_11b8;
  puStack_d98 = auStack_d88;
  ppuStack_970 = ppuVar18;
  uStack_968 = unaff_x27;
  uStack_960 = unaff_x26;
  puStack_958 = puVar24;
  puStack_950 = unaff_x24;
  puStack_948 = puVar23;
  puStack_940 = puVar12;
  lStack_938 = param_1;
  piStack_930 = param_2;
  puStack_928 = puVar8;
  puStack_920 = &stack0xfffffffffffffff0;
  if (*(long *)(puVar9 + 4) == *(long *)(piVar10 + 4)) {
    puVar12 = (undefined4 *)0x1c;
    func_0x000107c2ae8c();
    *puVar12 = 1;
    puStack_11d8 = puVar12 + 1;
    uStack_11d0 = 0x14;
    *(undefined1 *)(puVar12 + 6) = 0;
    puVar12[5] = 0x61746164;
    *(undefined8 *)(puVar12 + 3) = 0x2e747364203d2120;
    *(undefined8 *)(puVar12 + 1) = 0x617461642e637273;
    FUN_109ac3188(0xffffff29,&puStack_11d8,&UNK_10f598add,&UNK_10f597913,0xfbc);
                    /* WARNING: Does not return */
    pcVar6 = (code *)SoftwareBreakpoint(1,0x109a997b8);
    (*pcVar6)();
  }
  puVar12 = auStack_d88;
  if (((ulong)ppuVar14 & 1) == 0) {
    uVar20 = puVar9[2];
    uVar3 = puVar9[3];
    lVar11 = lStack_11c0;
  }
  else {
    uVar3 = puVar9[2];
    uVar20 = puVar9[3];
    lVar11 = (long)(int)uVar3;
    if (uVar3 < 0x209) {
      lStack_d90 = lVar11;
      if (uVar3 < 0x109) goto LAB_109a99564;
    }
    else {
      puVar12 = (undefined4 *)(lVar11 << 1);
      if (0x7fffffff < uVar3) {
        puVar12 = (undefined4 *)0xffffffffffffffff;
      }
      __Znam();
    }
    puVar23 = (undefined4 *)(lVar11 << 2);
    if ((int)uVar3 < 0) {
      puVar23 = (undefined4 *)0xffffffffffffffff;
    }
    puStack_d98 = puVar12;
    lStack_d90 = lVar11;
    __Znam();
    puStack_11c8 = puVar23;
  }
LAB_109a99564:
  lStack_11c0 = lVar11;
  puVar23 = puStack_11c8;
  uVar21 = (ulong)uVar3;
  if (0 < (int)uVar20) {
    lVar25 = 0;
    lVar11 = 0;
    uVar22 = 0;
    lVar1 = 0;
    if (uVar3 != 0) {
      lVar1 = LZCOUNT((long)(int)uVar3) * -2 + 0x7e;
    }
    do {
      if (((ulong)ppuVar14 & 1) == 0) {
        puStack_11d8 = (undefined4 *)(*(long *)(puVar9 + 4) + *(long *)(puVar9 + 0x14) * uVar22);
        puVar24 = (undefined4 *)(*(long *)(piVar10 + 4) + **(long **)(piVar10 + 0x12) * uVar22);
        if (0 < (int)uVar3) {
LAB_109a9965c:
          uVar16 = 0;
          do {
            puVar24[uVar16] = (int)uVar16;
            uVar16 = uVar16 + 1;
          } while (uVar21 != uVar16);
        }
      }
      else {
        puStack_11d8 = puVar12;
        puVar24 = puVar23;
        if (0 < (int)uVar3) {
          lVar13 = 0;
          lVar15 = **(long **)(puVar9 + 0x12);
          puVar19 = (undefined2 *)(*(long *)(puVar9 + 4) + lVar11);
          do {
            *(undefined2 *)((long)puVar12 + lVar13) = *puVar19;
            lVar13 = lVar13 + 2;
            puVar19 = (undefined2 *)((long)puVar19 + lVar15);
          } while (uVar21 << 1 != lVar13);
          goto LAB_109a9965c;
        }
      }
      FUN_109aa04fc(puVar24,puVar24 + (int)uVar3,&puStack_11d8,lVar1,1);
      if (((ulong)ppuVar14 & 0x10) != 0 && 1 < (int)uVar3) {
        puVar8 = (undefined4 *)
                 ((long)puVar24 + ((-(ulong)(uVar3 >> 0x1f) & 0xfffffffc00000000 | uVar21 << 2) - 4)
                 );
        puVar17 = puVar24;
        uVar16 = (ulong)(uint)((int)uVar3 / 2);
        do {
          uVar4 = *puVar17;
          *puVar17 = *puVar8;
          *puVar8 = uVar4;
          uVar16 = uVar16 - 1;
          puVar8 = puVar8 + -1;
          puVar17 = puVar17 + 1;
        } while (uVar16 != 0);
      }
      if (((ulong)ppuVar14 & 1) != 0 && 0 < (int)uVar3) {
        lVar13 = **(long **)(piVar10 + 0x12);
        puVar8 = (undefined4 *)(*(long *)(piVar10 + 4) + lVar25);
        uVar16 = uVar21;
        do {
          *puVar8 = *puVar24;
          puVar8 = (undefined4 *)((long)puVar8 + lVar13);
          uVar16 = uVar16 - 1;
          puVar24 = puVar24 + 1;
        } while (uVar16 != 0);
      }
      uVar22 = uVar22 + 1;
      lVar11 = lVar11 + 2;
      lVar25 = lVar25 + 4;
    } while (uVar22 != uVar20);
  }
  if (puStack_11c8 != auStack_11b8 && puStack_11c8 != (undefined4 *)0x0) {
    __ZdaPv();
  }
  if (puStack_d98 != auStack_d88 && puStack_d98 != (undefined4 *)0x0) {
    __ZdaPv();
  }
  return;
}



/* Entry: 109a99484; end: 109a9981b;  */

void FUN_109a99484(long param_1,long param_2,ulong param_3)

{
  long lVar1;
  uint uVar2;
  undefined4 uVar3;
  code *pcVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  undefined4 *puVar11;
  undefined2 *puVar12;
  ulong uVar13;
  ulong uVar14;
  uint uVar15;
  undefined4 *puVar16;
  long lVar17;
  long lVar18;
  undefined4 *puStack_8c8;
  undefined8 uStack_8c0;
  undefined4 *puStack_8b8;
  long lStack_8b0;
  undefined4 auStack_8a8 [264];
  undefined4 *puStack_488;
  long lStack_480;
  undefined4 auStack_478 [262];
  
  lStack_480 = 0x208;
  lStack_8b0 = 0x108;
  puStack_8b8 = auStack_8a8;
  puStack_488 = auStack_478;
  if (*(long *)(param_1 + 0x10) == *(long *)(param_2 + 0x10)) {
    puVar5 = (undefined4 *)0x1c;
    func_0x000107c2ae8c();
    *puVar5 = 1;
    puStack_8c8 = puVar5 + 1;
    uStack_8c0 = 0x14;
    *(undefined1 *)(puVar5 + 6) = 0;
    puVar5[5] = 0x61746164;
    *(undefined8 *)(puVar5 + 3) = 0x2e747364203d2120;
    *(undefined8 *)(puVar5 + 1) = 0x617461642e637273;
    FUN_109ac3188(0xffffff29,&puStack_8c8,&UNK_10f598add,&UNK_10f597913,0xfbc);
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x109a997b8);
    (*pcVar4)();
  }
  puVar5 = auStack_478;
  if ((param_3 & 1) == 0) {
    uVar15 = *(uint *)(param_1 + 8);
    uVar2 = *(uint *)(param_1 + 0xc);
    lVar18 = lStack_8b0;
  }
  else {
    uVar2 = *(uint *)(param_1 + 8);
    uVar15 = *(uint *)(param_1 + 0xc);
    lVar18 = (long)(int)uVar2;
    if (uVar2 < 0x209) {
      lStack_480 = lVar18;
      if (uVar2 < 0x109) goto LAB_109a99564;
    }
    else {
      puVar5 = (undefined4 *)(lVar18 << 1);
      if (0x7fffffff < uVar2) {
        puVar5 = (undefined4 *)0xffffffffffffffff;
      }
      __Znam();
    }
    puVar6 = (undefined4 *)(lVar18 << 2);
    if ((int)uVar2 < 0) {
      puVar6 = (undefined4 *)0xffffffffffffffff;
    }
    puStack_488 = puVar5;
    lStack_480 = lVar18;
    __Znam();
    puStack_8b8 = puVar6;
  }
LAB_109a99564:
  lStack_8b0 = lVar18;
  puVar6 = puStack_8b8;
  uVar13 = (ulong)uVar2;
  if (0 < (int)uVar15) {
    lVar17 = 0;
    lVar18 = 0;
    uVar14 = 0;
    lVar1 = 0;
    if (uVar2 != 0) {
      lVar1 = LZCOUNT((long)(int)uVar2) * -2 + 0x7e;
    }
    do {
      if ((param_3 & 1) == 0) {
        puStack_8c8 = (undefined4 *)(*(long *)(param_1 + 0x10) + *(long *)(param_1 + 0x50) * uVar14)
        ;
        puVar16 = (undefined4 *)(*(long *)(param_2 + 0x10) + **(long **)(param_2 + 0x48) * uVar14);
        if (0 < (int)uVar2) {
LAB_109a9965c:
          uVar10 = 0;
          do {
            puVar16[uVar10] = (int)uVar10;
            uVar10 = uVar10 + 1;
          } while (uVar13 != uVar10);
        }
      }
      else {
        puStack_8c8 = puVar5;
        puVar16 = puVar6;
        if (0 < (int)uVar2) {
          lVar8 = 0;
          lVar9 = **(long **)(param_1 + 0x48);
          puVar12 = (undefined2 *)(*(long *)(param_1 + 0x10) + lVar18);
          do {
            *(undefined2 *)((long)puVar5 + lVar8) = *puVar12;
            lVar8 = lVar8 + 2;
            puVar12 = (undefined2 *)((long)puVar12 + lVar9);
          } while (uVar13 << 1 != lVar8);
          goto LAB_109a9965c;
        }
      }
      FUN_109aa04fc(puVar16,puVar16 + (int)uVar2,&puStack_8c8,lVar1,1);
      if ((param_3 & 0x10) != 0 && 1 < (int)uVar2) {
        puVar7 = (undefined4 *)
                 ((long)puVar16 + ((-(ulong)(uVar2 >> 0x1f) & 0xfffffffc00000000 | uVar13 << 2) - 4)
                 );
        puVar11 = puVar16;
        uVar10 = (ulong)(uint)((int)uVar2 / 2);
        do {
          uVar3 = *puVar11;
          *puVar11 = *puVar7;
          *puVar7 = uVar3;
          uVar10 = uVar10 - 1;
          puVar7 = puVar7 + -1;
          puVar11 = puVar11 + 1;
        } while (uVar10 != 0);
      }
      if ((param_3 & 1) != 0 && 0 < (int)uVar2) {
        lVar8 = **(long **)(param_2 + 0x48);
        puVar7 = (undefined4 *)(*(long *)(param_2 + 0x10) + lVar17);
        uVar10 = uVar13;
        do {
          *puVar7 = *puVar16;
          puVar7 = (undefined4 *)((long)puVar7 + lVar8);
          uVar10 = uVar10 - 1;
          puVar16 = puVar16 + 1;
        } while (uVar10 != 0);
      }
      uVar14 = uVar14 + 1;
      lVar18 = lVar18 + 2;
      lVar17 = lVar17 + 4;
    } while (uVar14 != uVar15);
  }
  if (puStack_8b8 != auStack_8a8 && puStack_8b8 != (undefined4 *)0x0) {
    __ZdaPv();
  }
  if (puStack_488 != auStack_478 && puStack_488 != (undefined4 *)0x0) {
    __ZdaPv();
  }
  return;
}



/* Entry: 109a9981c; end: 109a99bb3;  */

void FUN_109a9981c(long param_1,long param_2,ulong param_3)

{
  long lVar1;
  uint uVar2;
  undefined4 uVar3;
  code *pcVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  undefined4 *puVar11;
  undefined2 *puVar12;
  ulong uVar13;
  ulong uVar14;
  uint uVar15;
  undefined4 *puVar16;
  long lVar17;
  long lVar18;
  undefined4 *puStack_8c8;
  undefined8 uStack_8c0;
  undefined4 *puStack_8b8;
  long lStack_8b0;
  undefined4 auStack_8a8 [264];
  undefined4 *puStack_488;
  long lStack_480;
  undefined4 auStack_478 [262];
  
  lStack_480 = 0x208;
  lStack_8b0 = 0x108;
  puStack_8b8 = auStack_8a8;
  puStack_488 = auStack_478;
  if (*(long *)(param_1 + 0x10) == *(long *)(param_2 + 0x10)) {
    puVar5 = (undefined4 *)0x1c;
    func_0x000107c2ae8c();
    *puVar5 = 1;
    puStack_8c8 = puVar5 + 1;
    uStack_8c0 = 0x14;
    *(undefined1 *)(puVar5 + 6) = 0;
    puVar5[5] = 0x61746164;
    *(undefined8 *)(puVar5 + 3) = 0x2e747364203d2120;
    *(undefined8 *)(puVar5 + 1) = 0x617461642e637273;
    FUN_109ac3188(0xffffff29,&puStack_8c8,&UNK_10f598add,&UNK_10f597913,0xfbc);
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x109a99b50);
    (*pcVar4)();
  }
  puVar5 = auStack_478;
  if ((param_3 & 1) == 0) {
    uVar15 = *(uint *)(param_1 + 8);
    uVar2 = *(uint *)(param_1 + 0xc);
    lVar18 = lStack_8b0;
  }
  else {
    uVar2 = *(uint *)(param_1 + 8);
    uVar15 = *(uint *)(param_1 + 0xc);
    lVar18 = (long)(int)uVar2;
    if (uVar2 < 0x209) {
      lStack_480 = lVar18;
      if (uVar2 < 0x109) goto LAB_109a998fc;
    }
    else {
      puVar5 = (undefined4 *)(lVar18 << 1);
      if (0x7fffffff < uVar2) {
        puVar5 = (undefined4 *)0xffffffffffffffff;
      }
      __Znam();
    }
    puVar6 = (undefined4 *)(lVar18 << 2);
    if ((int)uVar2 < 0) {
      puVar6 = (undefined4 *)0xffffffffffffffff;
    }
    puStack_488 = puVar5;
    lStack_480 = lVar18;
    __Znam();
    puStack_8b8 = puVar6;
  }
LAB_109a998fc:
  lStack_8b0 = lVar18;
  puVar6 = puStack_8b8;
  uVar13 = (ulong)uVar2;
  if (0 < (int)uVar15) {
    lVar17 = 0;
    lVar18 = 0;
    uVar14 = 0;
    lVar1 = 0;
    if (uVar2 != 0) {
      lVar1 = LZCOUNT((long)(int)uVar2) * -2 + 0x7e;
    }
    do {
      if ((param_3 & 1) == 0) {
        puStack_8c8 = (undefined4 *)(*(long *)(param_1 + 0x10) + *(long *)(param_1 + 0x50) * uVar14)
        ;
        puVar16 = (undefined4 *)(*(long *)(param_2 + 0x10) + **(long **)(param_2 + 0x48) * uVar14);
        if (0 < (int)uVar2) {
LAB_109a999f4:
          uVar10 = 0;
          do {
            puVar16[uVar10] = (int)uVar10;
            uVar10 = uVar10 + 1;
          } while (uVar13 != uVar10);
        }
      }
      else {
        puStack_8c8 = puVar5;
        puVar16 = puVar6;
        if (0 < (int)uVar2) {
          lVar8 = 0;
          lVar9 = **(long **)(param_1 + 0x48);
          puVar12 = (undefined2 *)(*(long *)(param_1 + 0x10) + lVar18);
          do {
            *(undefined2 *)((long)puVar5 + lVar8) = *puVar12;
            lVar8 = lVar8 + 2;
            puVar12 = (undefined2 *)((long)puVar12 + lVar9);
          } while (uVar13 << 1 != lVar8);
          goto LAB_109a999f4;
        }
      }
      FUN_109aa1358(puVar16,puVar16 + (int)uVar2,&puStack_8c8,lVar1,1);
      if ((param_3 & 0x10) != 0 && 1 < (int)uVar2) {
        puVar7 = (undefined4 *)
                 ((long)puVar16 + ((-(ulong)(uVar2 >> 0x1f) & 0xfffffffc00000000 | uVar13 << 2) - 4)
                 );
        puVar11 = puVar16;
        uVar10 = (ulong)(uint)((int)uVar2 / 2);
        do {
          uVar3 = *puVar11;
          *puVar11 = *puVar7;
          *puVar7 = uVar3;
          uVar10 = uVar10 - 1;
          puVar7 = puVar7 + -1;
          puVar11 = puVar11 + 1;
        } while (uVar10 != 0);
      }
      if ((param_3 & 1) != 0 && 0 < (int)uVar2) {
        lVar8 = **(long **)(param_2 + 0x48);
        puVar7 = (undefined4 *)(*(long *)(param_2 + 0x10) + lVar17);
        uVar10 = uVar13;
        do {
          *puVar7 = *puVar16;
          puVar7 = (undefined4 *)((long)puVar7 + lVar8);
          uVar10 = uVar10 - 1;
          puVar16 = puVar16 + 1;
        } while (uVar10 != 0);
      }
      uVar14 = uVar14 + 1;
      lVar18 = lVar18 + 2;
      lVar17 = lVar17 + 4;
    } while (uVar14 != uVar15);
  }
  if (puStack_8b8 != auStack_8a8 && puStack_8b8 != (undefined4 *)0x0) {
    __ZdaPv();
  }
  if (puStack_488 != auStack_478 && puStack_488 != (undefined4 *)0x0) {
    __ZdaPv();
  }
  return;
}



/* Entry: 109a99bb4; end: 109a99f23;  */

void FUN_109a99bb4(long param_1,long param_2,ulong param_3)

{
  long lVar1;
  uint uVar2;
  undefined4 uVar3;
  code *pcVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  long lVar8;
  ulong uVar9;
  undefined4 *puVar10;
  long lVar11;
  uint uVar12;
  undefined4 *puVar13;
  long lVar14;
  ulong uVar15;
  ulong uVar16;
  undefined4 *puStack_8d8;
  undefined8 uStack_8d0;
  undefined4 *puStack_8c8;
  long lStack_8c0;
  undefined4 auStack_8b8 [264];
  undefined4 *puStack_498;
  long lStack_490;
  undefined4 auStack_488 [266];
  
  lStack_490 = 0x108;
  lStack_8c0 = 0x108;
  puStack_8c8 = auStack_8b8;
  puStack_498 = auStack_488;
  if (*(long *)(param_1 + 0x10) == *(long *)(param_2 + 0x10)) {
    puVar5 = (undefined4 *)0x1c;
    func_0x000107c2ae8c();
    *puVar5 = 1;
    puStack_8d8 = puVar5 + 1;
    uStack_8d0 = 0x14;
    *(undefined1 *)(puVar5 + 6) = 0;
    puVar5[5] = 0x61746164;
    *(undefined8 *)(puVar5 + 3) = 0x2e747364203d2120;
    *(undefined8 *)(puVar5 + 1) = 0x617461642e637273;
    FUN_109ac3188(0xffffff29,&puStack_8d8,&UNK_10f598add,&UNK_10f597913,0xfbc);
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x109a99ec0);
    (*pcVar4)();
  }
  puVar5 = auStack_488;
  if ((param_3 & 1) == 0) {
    uVar12 = *(uint *)(param_1 + 8);
    uVar2 = *(uint *)(param_1 + 0xc);
    lVar14 = lStack_8c0;
    lVar1 = lStack_490;
  }
  else {
    uVar2 = *(uint *)(param_1 + 8);
    uVar12 = *(uint *)(param_1 + 0xc);
    lVar14 = (long)(int)uVar2;
    lVar1 = lVar14;
    if (0x108 < uVar2) {
      puVar6 = (undefined4 *)(lVar14 << 2);
      if ((int)uVar2 < 0) {
        puVar6 = (undefined4 *)0xffffffffffffffff;
      }
      puVar5 = puVar6;
      __Znam();
      puStack_498 = puVar5;
      lStack_490 = lVar14;
      __Znam();
      puStack_8c8 = puVar6;
      lVar1 = lStack_490;
    }
  }
  lStack_490 = lVar1;
  lStack_8c0 = lVar14;
  puVar6 = puStack_8c8;
  uVar16 = (ulong)uVar2;
  if (0 < (int)uVar12) {
    lVar14 = 0;
    uVar15 = 0;
    lVar1 = 0;
    if (uVar2 != 0) {
      lVar1 = LZCOUNT((long)(int)uVar2) * -2 + 0x7e;
    }
    do {
      if ((param_3 & 1) == 0) {
        puStack_8d8 = (undefined4 *)(*(long *)(param_1 + 0x10) + *(long *)(param_1 + 0x50) * uVar15)
        ;
        puVar13 = (undefined4 *)(*(long *)(param_2 + 0x10) + **(long **)(param_2 + 0x48) * uVar15);
        if (0 < (int)uVar2) {
LAB_109a99d64:
          uVar9 = 0;
          do {
            puVar13[uVar9] = (int)uVar9;
            uVar9 = uVar9 + 1;
          } while (uVar16 != uVar9);
        }
      }
      else {
        puStack_8d8 = puVar5;
        puVar13 = puVar6;
        if (0 < (int)uVar2) {
          lVar8 = 0;
          lVar11 = **(long **)(param_1 + 0x48);
          puVar7 = (undefined4 *)(*(long *)(param_1 + 0x10) + lVar14);
          do {
            *(undefined4 *)((long)puVar5 + lVar8) = *puVar7;
            lVar8 = lVar8 + 4;
            puVar7 = (undefined4 *)((long)puVar7 + lVar11);
          } while (uVar16 << 2 != lVar8);
          goto LAB_109a99d64;
        }
      }
      FUN_109aa21b4(puVar13,puVar13 + (int)uVar2,&puStack_8d8,lVar1,1);
      if ((param_3 & 0x10) != 0 && 1 < (int)uVar2) {
        puVar7 = (undefined4 *)
                 ((long)puVar13 + ((-(ulong)(uVar2 >> 0x1f) & 0xfffffffc00000000 | uVar16 << 2) - 4)
                 );
        puVar10 = puVar13;
        uVar9 = (ulong)(uint)((int)uVar2 / 2);
        do {
          uVar3 = *puVar10;
          *puVar10 = *puVar7;
          *puVar7 = uVar3;
          uVar9 = uVar9 - 1;
          puVar7 = puVar7 + -1;
          puVar10 = puVar10 + 1;
        } while (uVar9 != 0);
      }
      if ((param_3 & 1) != 0 && 0 < (int)uVar2) {
        lVar8 = *(long *)(param_2 + 0x10);
        lVar11 = **(long **)(param_2 + 0x48);
        uVar9 = uVar16;
        do {
          *(undefined4 *)(lVar8 + lVar14) = *puVar13;
          lVar8 = lVar8 + lVar11;
          uVar9 = uVar9 - 1;
          puVar13 = puVar13 + 1;
        } while (uVar9 != 0);
      }
      uVar15 = uVar15 + 1;
      lVar14 = lVar14 + 4;
    } while (uVar15 != uVar12);
  }
  if (puStack_8c8 != auStack_8b8 && puStack_8c8 != (undefined4 *)0x0) {
    __ZdaPv();
  }
  if (puStack_498 != auStack_488 && puStack_498 != (undefined4 *)0x0) {
    __ZdaPv();
  }
  return;
}



/* Entry: 109a99f24; end: 109a9a293;  */

void FUN_109a99f24(long param_1,long param_2,ulong param_3)

{
  long lVar1;
  uint uVar2;
  undefined4 uVar3;
  code *pcVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  long lVar8;
  ulong uVar9;
  undefined4 *puVar10;
  long lVar11;
  uint uVar12;
  undefined4 *puVar13;
  long lVar14;
  ulong uVar15;
  ulong uVar16;
  undefined4 *puStack_8d8;
  undefined8 uStack_8d0;
  undefined4 *puStack_8c8;
  long lStack_8c0;
  undefined4 auStack_8b8 [264];
  undefined4 *puStack_498;
  long lStack_490;
  undefined4 auStack_488 [266];
  
  lStack_490 = 0x108;
  lStack_8c0 = 0x108;
  puStack_8c8 = auStack_8b8;
  puStack_498 = auStack_488;
  if (*(long *)(param_1 + 0x10) == *(long *)(param_2 + 0x10)) {
    puVar5 = (undefined4 *)0x1c;
    func_0x000107c2ae8c();
    *puVar5 = 1;
    puStack_8d8 = puVar5 + 1;
    uStack_8d0 = 0x14;
    *(undefined1 *)(puVar5 + 6) = 0;
    puVar5[5] = 0x61746164;
    *(undefined8 *)(puVar5 + 3) = 0x2e747364203d2120;
    *(undefined8 *)(puVar5 + 1) = 0x617461642e637273;
    FUN_109ac3188(0xffffff29,&puStack_8d8,&UNK_10f598add,&UNK_10f597913,0xfbc);
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x109a9a230);
    (*pcVar4)();
  }
  puVar5 = auStack_488;
  if ((param_3 & 1) == 0) {
    uVar12 = *(uint *)(param_1 + 8);
    uVar2 = *(uint *)(param_1 + 0xc);
    lVar14 = lStack_8c0;
    lVar1 = lStack_490;
  }
  else {
    uVar2 = *(uint *)(param_1 + 8);
    uVar12 = *(uint *)(param_1 + 0xc);
    lVar14 = (long)(int)uVar2;
    lVar1 = lVar14;
    if (0x108 < uVar2) {
      puVar6 = (undefined4 *)(lVar14 << 2);
      if ((int)uVar2 < 0) {
        puVar6 = (undefined4 *)0xffffffffffffffff;
      }
      puVar5 = puVar6;
      __Znam();
      puStack_498 = puVar5;
      lStack_490 = lVar14;
      __Znam();
      puStack_8c8 = puVar6;
      lVar1 = lStack_490;
    }
  }
  lStack_490 = lVar1;
  lStack_8c0 = lVar14;
  puVar6 = puStack_8c8;
  uVar16 = (ulong)uVar2;
  if (0 < (int)uVar12) {
    lVar14 = 0;
    uVar15 = 0;
    lVar1 = 0;
    if (uVar2 != 0) {
      lVar1 = LZCOUNT((long)(int)uVar2) * -2 + 0x7e;
    }
    do {
      if ((param_3 & 1) == 0) {
        puStack_8d8 = (undefined4 *)(*(long *)(param_1 + 0x10) + *(long *)(param_1 + 0x50) * uVar15)
        ;
        puVar13 = (undefined4 *)(*(long *)(param_2 + 0x10) + **(long **)(param_2 + 0x48) * uVar15);
        if (0 < (int)uVar2) {
LAB_109a9a0d4:
          uVar9 = 0;
          do {
            puVar13[uVar9] = (int)uVar9;
            uVar9 = uVar9 + 1;
          } while (uVar16 != uVar9);
        }
      }
      else {
        puStack_8d8 = puVar5;
        puVar13 = puVar6;
        if (0 < (int)uVar2) {
          lVar8 = 0;
          lVar11 = **(long **)(param_1 + 0x48);
          puVar7 = (undefined4 *)(*(long *)(param_1 + 0x10) + lVar14);
          do {
            *(undefined4 *)((long)puVar5 + lVar8) = *puVar7;
            lVar8 = lVar8 + 4;
            puVar7 = (undefined4 *)((long)puVar7 + lVar11);
          } while (uVar16 << 2 != lVar8);
          goto LAB_109a9a0d4;
        }
      }
      FUN_109aa30ac(puVar13,puVar13 + (int)uVar2,&puStack_8d8,lVar1,1);
      if ((param_3 & 0x10) != 0 && 1 < (int)uVar2) {
        puVar7 = (undefined4 *)
                 ((long)puVar13 + ((-(ulong)(uVar2 >> 0x1f) & 0xfffffffc00000000 | uVar16 << 2) - 4)
                 );
        puVar10 = puVar13;
        uVar9 = (ulong)(uint)((int)uVar2 / 2);
        do {
          uVar3 = *puVar10;
          *puVar10 = *puVar7;
          *puVar7 = uVar3;
          uVar9 = uVar9 - 1;
          puVar7 = puVar7 + -1;
          puVar10 = puVar10 + 1;
        } while (uVar9 != 0);
      }
      if ((param_3 & 1) != 0 && 0 < (int)uVar2) {
        lVar8 = *(long *)(param_2 + 0x10);
        lVar11 = **(long **)(param_2 + 0x48);
        uVar9 = uVar16;
        do {
          *(undefined4 *)(lVar8 + lVar14) = *puVar13;
          lVar8 = lVar8 + lVar11;
          uVar9 = uVar9 - 1;
          puVar13 = puVar13 + 1;
        } while (uVar9 != 0);
      }
      uVar15 = uVar15 + 1;
      lVar14 = lVar14 + 4;
    } while (uVar15 != uVar12);
  }
  if (puStack_8c8 != auStack_8b8 && puStack_8c8 != (undefined4 *)0x0) {
    __ZdaPv();
  }
  if (puStack_498 != auStack_488 && puStack_498 != (undefined4 *)0x0) {
    __ZdaPv();
  }
  return;
}



/* Entry: 109a9a294; end: 109a9a62f;  */

void FUN_109a9a294(long param_1,long param_2,ulong param_3)

{
  long lVar1;
  uint uVar2;
  undefined4 uVar3;
  code *pcVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  undefined4 *puVar11;
  undefined8 *puVar12;
  ulong uVar13;
  ulong uVar14;
  uint uVar15;
  undefined4 *puVar16;
  long lVar17;
  long lVar18;
  undefined4 *puStack_8f8;
  undefined8 uStack_8f0;
  undefined4 *puStack_8e8;
  long lStack_8e0;
  undefined4 auStack_8d8 [264];
  undefined4 *puStack_4b8;
  long lStack_4b0;
  undefined4 auStack_4a8 [274];
  
  lStack_4b0 = 0x88;
  lStack_8e0 = 0x108;
  puStack_8e8 = auStack_8d8;
  puStack_4b8 = auStack_4a8;
  if (*(long *)(param_1 + 0x10) == *(long *)(param_2 + 0x10)) {
    puVar5 = (undefined4 *)0x1c;
    func_0x000107c2ae8c();
    *puVar5 = 1;
    puStack_8f8 = puVar5 + 1;
    uStack_8f0 = 0x14;
    *(undefined1 *)(puVar5 + 6) = 0;
    puVar5[5] = 0x61746164;
    *(undefined8 *)(puVar5 + 3) = 0x2e747364203d2120;
    *(undefined8 *)(puVar5 + 1) = 0x617461642e637273;
    FUN_109ac3188(0xffffff29,&puStack_8f8,&UNK_10f598add,&UNK_10f597913,0xfbc);
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x109a9a5cc);
    (*pcVar4)();
  }
  puVar6 = auStack_8d8;
  puVar5 = auStack_4a8;
  if ((param_3 & 1) == 0) {
    uVar15 = *(uint *)(param_1 + 8);
    uVar2 = *(uint *)(param_1 + 0xc);
    lVar18 = lStack_8e0;
    lVar17 = lStack_4b0;
  }
  else {
    uVar2 = *(uint *)(param_1 + 8);
    uVar15 = *(uint *)(param_1 + 0xc);
    lVar18 = (long)(int)uVar2;
    lVar17 = lVar18;
    if (0x88 < uVar2) {
      puVar5 = (undefined4 *)(lVar18 << 3);
      if ((int)uVar2 < 0) {
        puVar5 = (undefined4 *)0xffffffffffffffff;
      }
      __Znam();
      puStack_4b8 = puVar5;
      if (0x108 < uVar2) {
        puVar6 = (undefined4 *)(lVar18 << 2);
        if ((int)uVar2 < 0) {
          puVar6 = (undefined4 *)0xffffffffffffffff;
        }
        lStack_4b0 = lVar18;
        __Znam();
        puStack_8e8 = puVar6;
        lVar17 = lStack_4b0;
      }
    }
  }
  lStack_4b0 = lVar17;
  lStack_8e0 = lVar18;
  uVar14 = (ulong)uVar2;
  puVar16 = puVar6;
  if (0 < (int)uVar15) {
    lVar17 = 0;
    lVar18 = 0;
    uVar13 = 0;
    lVar1 = 0;
    if (uVar2 != 0) {
      lVar1 = LZCOUNT((long)(int)uVar2) * -2 + 0x7e;
    }
    do {
      if ((param_3 & 1) == 0) {
        puStack_8f8 = (undefined4 *)(*(long *)(param_1 + 0x10) + *(long *)(param_1 + 0x50) * uVar13)
        ;
        puVar16 = (undefined4 *)(*(long *)(param_2 + 0x10) + **(long **)(param_2 + 0x48) * uVar13);
        if (0 < (int)uVar2) {
LAB_109a9a470:
          uVar10 = 0;
          do {
            puVar16[uVar10] = (int)uVar10;
            uVar10 = uVar10 + 1;
          } while (uVar14 != uVar10);
        }
      }
      else {
        puStack_8f8 = puVar5;
        puVar16 = puVar6;
        if (0 < (int)uVar2) {
          lVar8 = 0;
          lVar9 = **(long **)(param_1 + 0x48);
          puVar12 = (undefined8 *)(*(long *)(param_1 + 0x10) + lVar18);
          do {
            *(undefined8 *)((long)puVar5 + lVar8) = *puVar12;
            lVar8 = lVar8 + 8;
            puVar12 = (undefined8 *)((long)puVar12 + lVar9);
          } while (uVar14 << 3 != lVar8);
          goto LAB_109a9a470;
        }
      }
      FUN_109aa3f1c(puVar16,puVar16 + (int)uVar2,&puStack_8f8,lVar1,1);
      if ((param_3 & 0x10) != 0 && 1 < (int)uVar2) {
        puVar7 = (undefined4 *)
                 ((long)puVar16 + ((-(ulong)(uVar2 >> 0x1f) & 0xfffffffc00000000 | uVar14 << 2) - 4)
                 );
        puVar11 = puVar16;
        uVar10 = (ulong)(uint)((int)uVar2 / 2);
        do {
          uVar3 = *puVar11;
          *puVar11 = *puVar7;
          *puVar7 = uVar3;
          uVar10 = uVar10 - 1;
          puVar7 = puVar7 + -1;
          puVar11 = puVar11 + 1;
        } while (uVar10 != 0);
      }
      if ((param_3 & 1) != 0 && 0 < (int)uVar2) {
        lVar8 = **(long **)(param_2 + 0x48);
        puVar7 = (undefined4 *)(*(long *)(param_2 + 0x10) + lVar17);
        uVar10 = uVar14;
        do {
          *puVar7 = *puVar16;
          puVar7 = (undefined4 *)((long)puVar7 + lVar8);
          uVar10 = uVar10 - 1;
          puVar16 = puVar16 + 1;
        } while (uVar10 != 0);
      }
      uVar13 = uVar13 + 1;
      lVar18 = lVar18 + 8;
      lVar17 = lVar17 + 4;
      puVar16 = puStack_8e8;
    } while (uVar13 != uVar15);
  }
  if (puVar16 != auStack_8d8 && puVar16 != (undefined4 *)0x0) {
    __ZdaPv();
  }
  if (puStack_4b8 != auStack_4a8 && puStack_4b8 != (undefined4 *)0x0) {
    __ZdaPv();
  }
  return;
}



/* Entry: 109a9a630; end: 109a9a73b;  */

void FUN_109a9a630(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  undefined1 auStack_d8 [8];
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined4 auStack_b8 [2];
  undefined1 *puStack_b0;
  undefined8 uStack_a8;
  undefined1 auStack_a0 [4];
  int iStack_9c;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  long lStack_68;
  long lStack_60;
  undefined1 *puStack_58;
  undefined1 auStack_50 [16];
  
  FUN_109a85f44(auStack_a0,param_5,0,param_7,0,0);
  auStack_b8[0] = 0x3010000;
  uStack_a8 = 0;
  uStack_d0 = param_2;
  uStack_c8 = param_3;
  uStack_c0 = param_4;
  puStack_b0 = auStack_a0;
  FUN_109a92964(auStack_b8,auStack_d8);
  if (lStack_68 != 0) {
    piVar1 = (int *)(lStack_68 + 0x14);
    do {
      iVar2 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar2 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar2 + -1 == 0) {
      func_0x000109a848d4(auStack_a0);
    }
  }
  lStack_68 = 0;
  uStack_88 = 0;
  uStack_90 = 0;
  uStack_78 = 0;
  uStack_80 = 0;
  if (0 < iStack_9c) {
    lVar5 = 0;
    do {
      *(undefined4 *)(lStack_60 + lVar5 * 4) = 0;
      lVar5 = lVar5 + 1;
    } while (lVar5 < iStack_9c);
  }
  if (puStack_58 != auStack_50 && puStack_58 != (undefined1 *)0x0) {
    _free(*(undefined8 *)(puStack_58 + -8));
  }
  return;
}



/* Entry: 109a9a73c; end: 109a9a9b7;  */

void FUN_109a9a73c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  code *pcVar5;
  undefined4 *puVar6;
  long lVar7;
  undefined4 auStack_110 [2];
  uint *puStack_108;
  undefined8 uStack_100;
  undefined4 *puStack_f8;
  uint *puStack_f0;
  undefined8 uStack_e8;
  uint uStack_e0;
  int iStack_dc;
  int iStack_d8;
  int iStack_d4;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  long lStack_a8;
  long lStack_a0;
  undefined1 *puStack_98;
  undefined1 auStack_90 [16];
  uint uStack_80;
  int iStack_7c;
  int iStack_78;
  int iStack_74;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  long lStack_48;
  long lStack_40;
  undefined1 *puStack_38;
  undefined1 auStack_30 [16];
  
  FUN_109a85f44(&uStack_80,param_1,0,param_3,0,0);
  FUN_109a85f44(&uStack_e0,param_2,0);
  if (((iStack_78 == iStack_d4) && (iStack_74 == iStack_d8)) &&
     (((uStack_e0 ^ uStack_80) & 0xfff) == 0)) {
    puStack_f8 = (undefined4 *)CONCAT44(puStack_f8._4_4_,0x1010000);
    puStack_f0 = &uStack_80;
    uStack_e8 = 0;
    auStack_110[0] = 0x2010000;
    puStack_108 = &uStack_e0;
    uStack_100 = 0;
    FUN_109a895d0(&puStack_f8,auStack_110);
    if (lStack_a8 != 0) {
      piVar1 = (int *)(lStack_a8 + 0x14);
      do {
        iVar2 = *piVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = iVar2 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar2 + -1 == 0) {
        func_0x000109a848d4(&uStack_e0);
      }
    }
    lStack_a8 = 0;
    uStack_c8 = 0;
    uStack_d0 = 0;
    uStack_b8 = 0;
    uStack_c0 = 0;
    if (0 < iStack_dc) {
      lVar7 = 0;
      do {
        *(undefined4 *)(lStack_a0 + lVar7 * 4) = 0;
        lVar7 = lVar7 + 1;
      } while (lVar7 < iStack_dc);
    }
    if (puStack_98 != auStack_90 && puStack_98 != (undefined1 *)0x0) {
      _free(*(undefined8 *)(puStack_98 + -8));
    }
    if (lStack_48 != 0) {
      piVar1 = (int *)(lStack_48 + 0x14);
      do {
        iVar2 = *piVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = iVar2 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar2 + -1 == 0) {
        func_0x000109a848d4(&uStack_80);
      }
    }
    lStack_48 = 0;
    uStack_68 = 0;
    uStack_70 = 0;
    uStack_58 = 0;
    uStack_60 = 0;
    if (0 < iStack_7c) {
      lVar7 = 0;
      do {
        *(undefined4 *)(lStack_40 + lVar7 * 4) = 0;
        lVar7 = lVar7 + 1;
      } while (lVar7 < iStack_7c);
    }
    if (puStack_38 != auStack_30 && puStack_38 != (undefined1 *)0x0) {
      _free(*(undefined8 *)(puStack_38 + -8));
    }
    return;
  }
  puVar6 = (undefined4 *)0x50;
  func_0x000107c2ae8c();
  *(undefined8 *)(puVar6 + 7) = 0x736c6f632e637273;
  *(undefined8 *)(puVar6 + 5) = 0x20262620736c6f63;
  *(undefined8 *)(puVar6 + 0xb) = 0x2026262073776f72;
  *(undefined8 *)(puVar6 + 9) = 0x2e747364203d3d20;
  *(undefined8 *)(puVar6 + 0xf) = 0x7364203d3d202928;
  *(undefined8 *)(puVar6 + 0xd) = 0x657079742e637273;
  *puVar6 = 1;
  puStack_f8 = puVar6 + 1;
  puStack_f0 = (uint *)0x48;
  *(undefined1 *)(puVar6 + 0x13) = 0;
  *(undefined8 *)(puVar6 + 0x11) = 0x2928657079742e74;
  *(undefined8 *)(puVar6 + 3) = 0x2e747364203d3d20;
  *(undefined8 *)(puVar6 + 1) = 0x73776f722e637273;
  FUN_109ac3188(0xffffff29,&puStack_f8,&UNK_10f5987fc,&UNK_10f597913,0x1047);
                    /* WARNING: Does not return */
  pcVar5 = (code *)SoftwareBreakpoint(1,0x109a9a958);
  (*pcVar5)();
}



/* Entry: 109a9a9b8; end: 109a9ad83;  */

void FUN_109a9a9b8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  code *pcVar5;
  undefined4 *puVar6;
  long lVar7;
  undefined4 auStack_1e0 [2];
  uint *puStack_1d8;
  undefined8 uStack_1d0;
  undefined1 auStack_1c8 [4];
  int iStack_1c4;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  long lStack_190;
  long lStack_188;
  undefined1 *puStack_180;
  undefined1 auStack_178 [16];
  undefined4 auStack_168 [2];
  undefined1 *puStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  long lStack_118;
  long lStack_110;
  undefined1 *puStack_108;
  undefined1 auStack_100 [16];
  uint uStack_f0;
  int iStack_ec;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  long lStack_b8;
  int *piStack_b0;
  undefined1 *puStack_a8;
  undefined1 auStack_a0 [16];
  uint uStack_90;
  int iStack_8c;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  long lStack_58;
  int *piStack_50;
  undefined1 *puStack_48;
  undefined1 auStack_40 [16];
  
  FUN_109a85f44(&uStack_90,param_1,0,param_3,0,0);
  FUN_109a85f44(&uStack_f0,param_3,0);
  if ((piStack_50[1] == piStack_b0[1] && *piStack_50 == *piStack_b0) &&
     (((uStack_f0 ^ uStack_90) & 0xfff) == 0)) {
    FUN_109a85f44(auStack_1c8,param_2,0);
    uStack_158 = 0;
    auStack_168[0] = 0x1010000;
    puStack_160 = auStack_1c8;
    FUN_109a92fe4(&uStack_150,&uStack_90,auStack_168);
    auStack_1e0[0] = 0x2010000;
    puStack_1d8 = &uStack_f0;
    uStack_1d0 = 0;
    FUN_109a479a0(&uStack_150,auStack_1e0);
    if (lStack_118 != 0) {
      piVar1 = (int *)(lStack_118 + 0x14);
      do {
        iVar2 = *piVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = iVar2 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar2 + -1 == 0) {
        func_0x000109a848d4(&uStack_150);
      }
    }
    lStack_118 = 0;
    uStack_138 = 0;
    uStack_140 = 0;
    uStack_128 = 0;
    uStack_130 = 0;
    if (0 < uStack_150._4_4_) {
      lVar7 = 0;
      do {
        *(undefined4 *)(lStack_110 + lVar7 * 4) = 0;
        lVar7 = lVar7 + 1;
      } while (lVar7 < uStack_150._4_4_);
    }
    if (puStack_108 != auStack_100 && puStack_108 != (undefined1 *)0x0) {
      _free(*(undefined8 *)(puStack_108 + -8));
    }
    if (lStack_190 != 0) {
      piVar1 = (int *)(lStack_190 + 0x14);
      do {
        iVar2 = *piVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = iVar2 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar2 + -1 == 0) {
        func_0x000109a848d4(auStack_1c8);
      }
    }
    lStack_190 = 0;
    uStack_1b0 = 0;
    uStack_1b8 = 0;
    uStack_1a0 = 0;
    uStack_1a8 = 0;
    if (0 < iStack_1c4) {
      lVar7 = 0;
      do {
        *(undefined4 *)(lStack_188 + lVar7 * 4) = 0;
        lVar7 = lVar7 + 1;
      } while (lVar7 < iStack_1c4);
    }
    if (puStack_180 != auStack_178 && puStack_180 != (undefined1 *)0x0) {
      _free(*(undefined8 *)(puStack_180 + -8));
    }
    if (lStack_b8 != 0) {
      piVar1 = (int *)(lStack_b8 + 0x14);
      do {
        iVar2 = *piVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = iVar2 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar2 + -1 == 0) {
        func_0x000109a848d4(&uStack_f0);
      }
    }
    lStack_b8 = 0;
    uStack_d8 = 0;
    uStack_e0 = 0;
    uStack_c8 = 0;
    uStack_d0 = 0;
    if (0 < iStack_ec) {
      lVar7 = 0;
      do {
        piStack_b0[lVar7] = 0;
        lVar7 = lVar7 + 1;
      } while (lVar7 < iStack_ec);
    }
    if (puStack_a8 != auStack_a0 && puStack_a8 != (undefined1 *)0x0) {
      _free(*(undefined8 *)(puStack_a8 + -8));
    }
    if (lStack_58 != 0) {
      piVar1 = (int *)(lStack_58 + 0x14);
      do {
        iVar2 = *piVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = iVar2 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar2 + -1 == 0) {
        func_0x000109a848d4(&uStack_90);
      }
    }
    lStack_58 = 0;
    uStack_78 = 0;
    uStack_80 = 0;
    uStack_68 = 0;
    uStack_70 = 0;
    if (0 < iStack_8c) {
      lVar7 = 0;
      do {
        piStack_50[lVar7] = 0;
        lVar7 = lVar7 + 1;
      } while (lVar7 < iStack_8c);
    }
    if (puStack_48 != auStack_40 && puStack_48 != (undefined1 *)0x0) {
      _free(*(undefined8 *)(puStack_48 + -8));
    }
    return;
  }
  puVar6 = (undefined4 *)0x3c;
  func_0x000107c2ae8c();
  *puVar6 = 1;
  uStack_150 = puVar6 + 1;
  uStack_148 = 0x36;
  *(undefined8 *)(puVar6 + 3) = 0x64203d3d20292865;
  *(undefined8 *)(puVar6 + 1) = 0x7a69732e41637273;
  *(undefined1 *)((long)puVar6 + 0x3a) = 0;
  *(undefined8 *)(puVar6 + 7) = 0x6372732026262029;
  *(undefined8 *)(puVar6 + 5) = 0x28657a69732e7473;
  *(undefined8 *)(puVar6 + 0xb) = 0x2e747364203d3d20;
  *(undefined8 *)(puVar6 + 9) = 0x2928657079742e41;
  *(undefined8 *)((long)puVar6 + 0x32) = 0x2928657079742e74;
  FUN_109ac3188(0xffffff29,&uStack_150,&UNK_10f59883f,&UNK_10f597913,0x1057);
                    /* WARNING: Does not return */
  pcVar5 = (code *)SoftwareBreakpoint(1,0x109a9acfc);
  (*pcVar5)();
}



/* Entry: 109a9ad84; end: 109a9b367;  */

void FUN_109a9ad84(uint *param_1,uint *param_2,uint param_3,ulong param_4,uint *param_5)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  char cVar4;
  bool bVar5;
  code *pcVar6;
  undefined4 *puVar7;
  uint uVar8;
  undefined8 *puVar9;
  int *piVar10;
  ulong uVar11;
  int iVar12;
  long lVar13;
  undefined8 *puVar14;
  uint *puVar15;
  uint uVar16;
  ulong uVar17;
  ulong uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 *puStack_90;
  undefined8 uStack_88;
  undefined4 *puStack_80;
  ulong uStack_78;
  undefined4 auStack_70 [4];
  
  uVar16 = param_2[1];
  uVar17 = (ulong)uVar16;
  uVar8 = (uint)param_4;
  if (uVar16 != uVar8) {
LAB_109a9ade4:
    uVar1 = *param_2;
    if ((uVar1 >> 0xe & 1) == 0) {
      puVar7 = (undefined4 *)0x4c;
      func_0x000107c2ae8c();
      *puVar7 = 1;
      puStack_80 = puVar7 + 1;
      uStack_78 = 0x47;
      *(undefined8 *)(puVar7 + 7) = 0x632d6e6f6e206c61;
      *(undefined8 *)(puVar7 + 5) = 0x6e6f69736e656d69;
      *(undefined8 *)(puVar7 + 0xb) = 0x63697274616d2073;
      *(undefined8 *)(puVar7 + 9) = 0x756f756e69746e6f;
      *(undefined8 *)(puVar7 + 0xf) = 0x726f707075732074;
      *(undefined8 *)(puVar7 + 0xd) = 0x6f6e207369207365;
      *(undefined1 *)((long)puVar7 + 0x4b) = 0;
      *(undefined8 *)((long)puVar7 + 0x43) = 0x7465792064657472;
      *(undefined8 *)(puVar7 + 3) = 0x642d6e20666f2067;
      *(undefined8 *)(puVar7 + 1) = 0x6e69706168736552;
      FUN_109ac3188(0xffffff2b,&puStack_80,&UNK_10f596393,&UNK_10f597913,0x111a);
    }
    else if (((param_5 == (uint *)0x0) || ((int)param_3 < 0)) || (0x1f < uVar8 - 1)) {
      puVar7 = (undefined4 *)0x44;
      func_0x000107c2ae8c();
      *puVar7 = 1;
      puStack_80 = puVar7 + 1;
      uStack_78 = 0x3e;
      *(undefined8 *)(puVar7 + 3) = 0x77656e5f20262620;
      *(undefined8 *)(puVar7 + 1) = 0x30203d3e206e635f;
      *(undefined1 *)((long)puVar7 + 0x42) = 0;
      *(undefined8 *)(puVar7 + 7) = 0x656e5f2026262030;
      *(undefined8 *)(puVar7 + 5) = 0x203e20736d69646e;
      *(undefined8 *)(puVar7 + 0xb) = 0x58414d5f5643203d;
      *(undefined8 *)(puVar7 + 9) = 0x3c20736d69646e77;
      *(undefined8 *)((long)puVar7 + 0x3a) = 0x7a7377656e5f2026;
      *(undefined8 *)((long)puVar7 + 0x32) = 0x26204d49445f5841;
      FUN_109ac3188(0xffffff29,&puStack_80,&UNK_10f596393,&UNK_10f597913,0x10f6);
    }
    else {
      if (param_3 == 0) {
        param_3 = (uVar1 >> 3 & 0x1ff) + 1;
      }
      else if (0x200 < param_3) {
        puVar7 = (undefined4 *)0x18;
        func_0x000107c2ae8c();
        *puVar7 = 1;
        puStack_80 = puVar7 + 1;
        uStack_78 = 0x10;
        *(undefined1 *)(puVar7 + 5) = 0;
        *(undefined8 *)(puVar7 + 3) = 0x58414d5f4e435f56;
        *(undefined8 *)(puVar7 + 1) = 0x43203d3c206e635f;
        FUN_109ac3188(0xffffff29,&puStack_80,&UNK_10f596393,&UNK_10f597913,0x10fb);
        goto LAB_109a9b264;
      }
      if ((int)uVar16 < 3) {
        lVar13 = (long)(int)param_2[3] * (long)(int)param_2[2];
      }
      else {
        lVar13 = 1;
        piVar10 = *(int **)(param_2 + 0x10);
        do {
          lVar13 = lVar13 * *piVar10;
          uVar17 = uVar17 - 1;
          piVar10 = piVar10 + 1;
        } while (uVar17 != 0);
      }
      uVar17 = (ulong)param_3;
      uVar18 = param_4 & 0xffffffff;
      puVar7 = auStack_70;
      if (4 < uVar8) {
        puVar7 = (undefined4 *)(uVar18 << 2);
        puStack_80 = auStack_70;
        __Znam();
        param_4 = param_4 & 0xffffffff;
      }
      uVar11 = 0;
      do {
        uVar8 = param_5[uVar11];
        puStack_80 = puVar7;
        uStack_78 = uVar18;
        if ((int)uVar8 < 0) {
          puVar7 = (undefined4 *)0x14;
          func_0x000107c2ae8c();
          *puVar7 = 1;
          puStack_90 = (undefined8 *)(puVar7 + 1);
          *puStack_90 = 0x695b7a7377656e5f;
          uStack_88 = 0xe;
          *(undefined1 *)((long)puVar7 + 0x12) = 0;
          *(undefined8 *)((long)puVar7 + 10) = 0x30203d3e205d695b;
          FUN_109ac3188(0xffffff29,&puStack_90,&UNK_10f596393,&UNK_10f597913,0x1104);
          goto LAB_109a9b264;
        }
        if (uVar8 == 0) {
          if ((long)(int)uVar16 <= (long)uVar11) {
            puVar7 = (undefined4 *)0x4c;
            func_0x000107c2ae8c();
            *(undefined8 *)(puVar7 + 3) = 0x28206e6f69736e65;
            *(undefined8 *)(puVar7 + 1) = 0x6d69642079706f43;
            *(undefined8 *)(puVar7 + 7) = 0x73206f72657a2073;
            *(undefined8 *)(puVar7 + 5) = 0x6168206863696877;
            *(undefined8 *)(puVar7 + 0xb) = 0x7365727020746f6e;
            *(undefined8 *)(puVar7 + 9) = 0x2073692029657a69;
            *puVar7 = 1;
            puStack_90 = (undefined8 *)(puVar7 + 1);
            uStack_88 = 0x44;
            *(undefined1 *)(puVar7 + 0x12) = 0;
            puVar7[0x11] = 0x78697274;
            *(undefined8 *)(puVar7 + 0xf) = 0x616d20656372756f;
            *(undefined8 *)(puVar7 + 0xd) = 0x73206e6920746e65;
            FUN_109ac3188(0xffffff2d,&puStack_90,&UNK_10f596393,&UNK_10f597913,0x110b);
            goto LAB_109a9b264;
          }
          uVar8 = *(uint *)(*(long *)(param_2 + 0x10) + uVar11 * 4);
        }
        puVar7[uVar11] = uVar8;
        uVar17 = uVar17 * (long)(int)uVar8;
        uVar11 = uVar11 + 1;
      } while (uVar18 != uVar11);
      if (uVar17 - (lVar13 + lVar13 * ((ulong)(uVar1 >> 3) & 0x1ff)) == 0) {
        *param_1 = uVar1;
        param_1[1] = uVar16;
        *(undefined8 *)(param_1 + 2) = *(undefined8 *)(param_2 + 2);
        uVar19 = *(undefined8 *)(param_2 + 4);
        uVar21 = *(undefined8 *)(param_2 + 10);
        uVar20 = *(undefined8 *)(param_2 + 8);
        *(undefined8 *)(param_1 + 6) = *(undefined8 *)(param_2 + 6);
        *(undefined8 *)(param_1 + 4) = uVar19;
        *(undefined8 *)(param_1 + 10) = uVar21;
        *(undefined8 *)(param_1 + 8) = uVar20;
        lVar13 = *(long *)(param_2 + 0xe);
        uVar19 = *(undefined8 *)(param_2 + 0xc);
        *(undefined8 *)(param_1 + 0xe) = *(undefined8 *)(param_2 + 0xe);
        *(undefined8 *)(param_1 + 0xc) = uVar19;
        puVar15 = param_1 + 0x14;
        puVar15[0] = 0;
        puVar15[1] = 0;
        *(uint **)(param_1 + 0x10) = param_1 + 2;
        *(uint **)(param_1 + 0x12) = puVar15;
        param_1[0x16] = 0;
        param_1[0x17] = 0;
        if (lVar13 != 0) {
          piVar10 = (int *)(lVar13 + 0x14);
          do {
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(piVar10,0x10);
            if (bVar5) {
              *piVar10 = *piVar10 + 1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          uVar16 = param_2[1];
        }
        if ((int)uVar16 < 3) {
          puVar9 = *(undefined8 **)(param_2 + 0x12);
          puVar14 = *(undefined8 **)(param_1 + 0x12);
          *puVar14 = *puVar9;
          puVar14[1] = puVar9[1];
        }
        else {
          param_1[1] = 0;
          func_0x000109a84868(param_1,param_2);
        }
        *param_1 = *param_1 & 0xfffff007 | param_3 * 8 - 8;
        FUN_109a844cc(param_1,param_4,puStack_80,0,1);
        if ((puStack_80 != auStack_70) && (puStack_80 != (undefined4 *)0x0)) {
          __ZdaPv();
        }
        return;
      }
      puVar7 = (undefined4 *)0x44;
      func_0x000107c2ae8c();
      *(undefined8 *)(puVar7 + 3) = 0x6f7320646e612064;
      *(undefined8 *)(puVar7 + 1) = 0x6574736575716552;
      *puVar7 = 1;
      puStack_90 = (undefined8 *)(puVar7 + 1);
      uStack_88 = 0x3e;
      *(undefined1 *)((long)puVar7 + 0x42) = 0;
      *(undefined8 *)(puVar7 + 7) = 0x6168207365636972;
      *(undefined8 *)(puVar7 + 5) = 0x74616d2065637275;
      *(undefined8 *)(puVar7 + 0xb) = 0x756f6320746e6572;
      *(undefined8 *)(puVar7 + 9) = 0x6566666964206576;
      *(undefined8 *)((long)puVar7 + 0x3a) = 0x73746e656d656c65;
      *(undefined8 *)((long)puVar7 + 0x32) = 0x20666f20746e756f;
      FUN_109ac3188(0xffffff2f,&puStack_90,&UNK_10f596393,&UNK_10f597913,0x1111);
    }
LAB_109a9b264:
                    /* WARNING: Does not return */
    pcVar6 = (code *)SoftwareBreakpoint(1,0x109a9b268);
    (*pcVar6)();
  }
  if (param_5 == (uint *)0x0) {
    uVar16 = 0;
  }
  else {
    if (uVar8 != 2) goto LAB_109a9ade4;
    uVar16 = *param_5;
  }
  uVar19 = *(undefined8 *)param_2;
  uVar21 = *(undefined8 *)(param_2 + 6);
  uVar20 = *(undefined8 *)(param_2 + 4);
  *(undefined8 *)(param_1 + 2) = *(undefined8 *)(param_2 + 2);
  *(undefined8 *)param_1 = uVar19;
  *(undefined8 *)(param_1 + 6) = uVar21;
  *(undefined8 *)(param_1 + 4) = uVar20;
  lVar13 = *(long *)(param_2 + 0xe);
  uVar20 = *(undefined8 *)(param_2 + 8);
  uVar22 = *(undefined8 *)(param_2 + 0xe);
  uVar21 = *(undefined8 *)(param_2 + 0xc);
  *(undefined8 *)(param_1 + 10) = *(undefined8 *)(param_2 + 10);
  *(undefined8 *)(param_1 + 8) = uVar20;
  *(undefined8 *)(param_1 + 0xe) = uVar22;
  *(undefined8 *)(param_1 + 0xc) = uVar21;
  puVar15 = param_1 + 0x14;
  puVar15[0] = 0;
  puVar15[1] = 0;
  *(uint **)(param_1 + 0x10) = param_1 + 2;
  *(uint **)(param_1 + 0x12) = puVar15;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  if (lVar13 == 0) {
    uVar8 = (uint)((ulong)uVar19 >> 0x20);
  }
  else {
    piVar10 = (int *)(lVar13 + 0x14);
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar10,0x10);
      if (bVar5) {
        *piVar10 = *piVar10 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    uVar8 = param_2[1];
  }
  uVar1 = ((uint)uVar19 >> 3 & 0x1ff) + 1;
  if (2 < (int)uVar8) {
    param_1[1] = 0;
    func_0x000109a84868(param_1,param_2);
    uVar8 = param_2[1];
    if (((uVar16 == 0) && (param_3 != 0)) && (2 < (int)uVar8)) {
      uVar17 = (ulong)(uVar8 - 1);
      iVar12 = *(int *)(*(long *)(param_2 + 0x10) + uVar17 * 4) * uVar1;
      iVar3 = 0;
      if (param_3 != 0) {
        iVar3 = iVar12 / (int)param_3;
      }
      if (iVar12 - iVar3 * param_3 == 0) {
        uVar16 = *param_1;
        uVar8 = param_3 * 8 - 8;
        *param_1 = uVar16 & 0xfffff007 | uVar8;
        *(ulong *)(*(long *)(param_1 + 0x12) + uVar17 * 8) =
             (ulong)((uVar8 >> 3 & 0x1ff) + 1 << (ulong)(0xfa50U >> (ulong)((uVar16 & 7) << 1) & 3))
        ;
        iVar12 = 0;
        if (param_3 != 0) {
          iVar12 = (int)(*(int *)(*(long *)(param_1 + 0x10) + uVar17 * 4) * uVar1) / (int)param_3;
        }
        *(int *)(*(long *)(param_1 + 0x10) + uVar17 * 4) = iVar12;
        return;
      }
    }
    else if ((int)uVar8 < 3) goto LAB_109a8920c;
    puVar7 = (undefined4 *)0x10;
    func_0x000107c2ae8c();
    *(undefined8 *)(puVar7 + 1) = 0x203d3c20736d6964;
    *puVar7 = 1;
    *(undefined2 *)(puVar7 + 3) = 0x32;
    FUN_109ac3188(0xffffff29,&stack0xffffffffffffffb0,&UNK_10f596393,&UNK_10f597913,0x3d6);
    goto LAB_109a89510;
  }
  puVar9 = *(undefined8 **)(param_2 + 0x12);
  puVar14 = *(undefined8 **)(param_1 + 0x12);
  *puVar14 = *puVar9;
  puVar14[1] = puVar9[1];
LAB_109a8920c:
  uVar8 = uVar1;
  if (param_3 != 0) {
    uVar8 = param_3;
  }
  iVar12 = param_2[3] * uVar1;
  if (iVar12 < (int)uVar8) {
    if (uVar16 == 0) {
LAB_109a89240:
      uVar16 = 0;
      if (uVar8 != 0) {
        uVar16 = (int)(param_2[2] * iVar12) / (int)uVar8;
      }
      goto LAB_109a8924c;
    }
LAB_109a89250:
    if (uVar16 != param_2[2]) {
      uVar1 = *param_2;
      if ((uVar1 >> 0xe & 1) == 0) {
        puVar7 = (undefined4 *)0x50;
        func_0x000107c2ae8c();
        *(undefined8 *)(puVar7 + 7) = 0x6874202c73756f75;
        *(undefined8 *)(puVar7 + 5) = 0x6e69746e6f632074;
        *(undefined8 *)(puVar7 + 0xb) = 0x666f207265626d75;
        *(undefined8 *)(puVar7 + 9) = 0x6e20737469207375;
        *(undefined8 *)(puVar7 + 0xf) = 0x656220746f6e206e;
        *(undefined8 *)(puVar7 + 0xd) = 0x61632073776f7220;
        *puVar7 = 1;
        *(undefined1 *)(puVar7 + 0x13) = 0;
        *(undefined8 *)(puVar7 + 0x11) = 0x6465676e61686320;
        *(undefined8 *)(puVar7 + 3) = 0x6f6e207369207869;
        *(undefined8 *)(puVar7 + 1) = 0x7274616d20656854;
        FUN_109ac3188(0xfffffff3,&stack0xffffffffffffffb0,&UNK_10f596393,&UNK_10f597913,0x3e5);
        goto LAB_109a89510;
      }
      uVar2 = param_2[2] * iVar12;
      if (uVar2 < uVar16) {
        puVar7 = (undefined4 *)0x1c;
        func_0x000107c2ae8c();
        *puVar7 = 1;
        *(undefined1 *)((long)puVar7 + 0x1a) = 0;
        *(undefined8 *)(puVar7 + 3) = 0x6f207265626d756e;
        *(undefined8 *)(puVar7 + 1) = 0x2077656e20646142;
        *(undefined8 *)((long)puVar7 + 0x12) = 0x73776f7220666f20;
        FUN_109ac3188(0xffffff2d,&stack0xffffffffffffffb0,&UNK_10f596393,&UNK_10f597913,1000);
        goto LAB_109a89510;
      }
      iVar12 = 0;
      if (uVar16 != 0) {
        iVar12 = (int)uVar2 / (int)uVar16;
      }
      if (iVar12 * uVar16 != uVar2) {
        puVar7 = (undefined4 *)0x54;
        func_0x000107c2ae8c();
        *(undefined8 *)(puVar7 + 7) = 0x656d656c65207869;
        *(undefined8 *)(puVar7 + 5) = 0x7274616d20666f20;
        *(undefined8 *)(puVar7 + 0xb) = 0x736976696420746f;
        *(undefined8 *)(puVar7 + 9) = 0x6e2073692073746e;
        *(undefined8 *)(puVar7 + 0xf) = 0x2077656e20656874;
        *(undefined8 *)(puVar7 + 0xd) = 0x20796220656c6269;
        *(undefined8 *)((long)puVar7 + 0x4a) = 0x73776f7220666f20;
        *(undefined8 *)((long)puVar7 + 0x42) = 0x7265626d756e2077;
        *puVar7 = 1;
        *(undefined1 *)((long)puVar7 + 0x52) = 0;
        *(undefined8 *)(puVar7 + 3) = 0x7265626d756e206c;
        *(undefined8 *)(puVar7 + 1) = 0x61746f7420656854;
        FUN_109ac3188(0xfffffffb,&stack0xffffffffffffffb0,&UNK_10f596393,&UNK_10f597913,0x3ee);
        goto LAB_109a89510;
      }
      param_1[2] = uVar16;
      **(long **)(param_1 + 0x12) =
           (long)(int)(0x88442211U >> (((ulong)uVar1 & 7) << 2) & 0xf) * (long)iVar12;
    }
  }
  else {
    iVar3 = 0;
    if (uVar8 != 0) {
      iVar3 = iVar12 / (int)uVar8;
    }
    if (iVar12 - iVar3 * uVar8 != 0 && uVar16 == 0) goto LAB_109a89240;
LAB_109a8924c:
    if (uVar16 != 0) goto LAB_109a89250;
  }
  uVar16 = 0;
  if (uVar8 != 0) {
    uVar16 = iVar12 / (int)uVar8;
  }
  if (uVar16 * uVar8 == iVar12) {
    param_1[3] = uVar16;
    uVar16 = *param_1;
    uVar8 = uVar8 * 8 - 8;
    *param_1 = uVar16 & 0xfffff007 | uVar8;
    *(ulong *)(*(long *)(param_1 + 0x12) + 8) =
         (ulong)((uVar8 >> 3 & 0x1ff) + 1 << (ulong)(0xfa50U >> (ulong)((uVar16 & 7) << 1) & 3));
    return;
  }
  puVar7 = (undefined4 *)0x44;
  func_0x000107c2ae8c();
  *(undefined8 *)(puVar7 + 3) = 0x206874646977206c;
  *(undefined8 *)(puVar7 + 1) = 0x61746f7420656854;
  *puVar7 = 1;
  *(undefined1 *)((long)puVar7 + 0x42) = 0;
  *(undefined8 *)(puVar7 + 7) = 0x656c626973697669;
  *(undefined8 *)(puVar7 + 5) = 0x6420746f6e207369;
  *(undefined8 *)(puVar7 + 0xb) = 0x626d756e2077656e;
  *(undefined8 *)(puVar7 + 9) = 0x2065687420796220;
  *(undefined8 *)((long)puVar7 + 0x3a) = 0x736c656e6e616863;
  *(undefined8 *)((long)puVar7 + 0x32) = 0x20666f207265626d;
  FUN_109ac3188(0xfffffff1,&stack0xffffffffffffffb0,&UNK_10f596393,&UNK_10f597913,0x3f8);
LAB_109a89510:
                    /* WARNING: Does not return */
  pcVar6 = (code *)SoftwareBreakpoint(1,0x109a89514);
  (*pcVar6)();
}



/* Entry: 109a9b368; end: 109a9bb93;  */

void FUN_109a9b368(long *param_1,long *param_2,long param_3,long param_4,ulong param_5)

{
  bool bVar1;
  long *plVar2;
  int iVar3;
  char cVar4;
  code *pcVar5;
  uint uVar6;
  int *piVar7;
  undefined4 *puVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  uint uVar12;
  long lVar13;
  ulong uVar14;
  uint *puVar15;
  long *plVar16;
  uint uVar17;
  ulong uVar18;
  uint uVar19;
  ulong uVar20;
  ulong uVar21;
  long lVar22;
  int *piVar23;
  ulong uVar24;
  long lVar25;
  undefined8 *puVar26;
  undefined8 *puVar27;
  undefined8 uStack_d0;
  undefined4 uStack_c8;
  int iStack_c4;
  long lStack_c0;
  long lStack_b8;
  long lStack_b0;
  long lStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  ulong uStack_90;
  long *plStack_88;
  long lStack_80;
  ulong uStack_78;
  
  if ((param_2 == (long *)0x0) || (param_3 == 0 && param_4 == 0)) {
    puVar8 = (undefined4 *)0x24;
    func_0x000107c2ae8c();
    *puVar8 = 1;
    uStack_d0 = (undefined8 *)(puVar8 + 1);
    uStack_c8 = 0x1d;
    iStack_c4 = 0;
    *(undefined1 *)((long)puVar8 + 0x21) = 0;
    *(undefined8 *)(puVar8 + 3) = 0x7274705f28202626;
    *(undefined8 *)(puVar8 + 1) = 0x207379617272615f;
    *(undefined8 *)((long)puVar8 + 0x19) = 0x2973656e616c705f;
    *(undefined8 *)((long)puVar8 + 0x11) = 0x207c7c2073727470;
    FUN_109ac3188(0xffffff29,&uStack_d0,"init",&UNK_10f597913,0x1132);
LAB_109a9bac4:
                    /* WARNING: Does not return */
    pcVar5 = (code *)SoftwareBreakpoint(1,0x109a9bac8);
    (*pcVar5)();
  }
  param_1[1] = param_3;
  param_1[2] = param_4;
  *param_1 = (long)param_2;
  *(int *)(param_1 + 3) = (int)param_5;
  param_1[4] = 0;
  param_1[5] = 0;
  if ((int)param_5 < 0) {
    param_5 = 0xffffffffffffffff;
    do {
      lVar13 = *param_2;
      param_5 = param_5 + 1;
      param_2 = param_2 + 1;
    } while (lVar13 != 0);
    *(int *)(param_1 + 3) = (int)param_5;
    if (1000 < param_5) {
      puVar8 = (undefined4 *)0x14;
      func_0x000107c2ae8c();
      *puVar8 = 1;
      uStack_d0 = (undefined8 *)(puVar8 + 1);
      *uStack_d0 = 0x207379617272616e;
      uStack_c8 = 0xf;
      iStack_c4 = 0;
      *(undefined1 *)((long)puVar8 + 0x13) = 0;
      *(undefined8 *)((long)puVar8 + 0xb) = 0x30303031203d3c20;
      FUN_109ac3188(0xffffff29,&uStack_d0,"init",&UNK_10f597913,0x1141);
      goto LAB_109a9bac4;
    }
  }
  *(undefined4 *)(param_1 + 6) = 0;
  bVar1 = 0 < (int)param_5;
  if (0 < (int)param_5) {
    uVar19 = 0;
    uVar20 = 0;
    uVar14 = 0;
    uVar18 = 0xffffffff;
    uVar21 = 0xffffffff;
    do {
      lVar13 = *(long *)(*param_1 + uVar20 * 8);
      if (lVar13 == 0) {
        puVar8 = (undefined4 *)0x14;
        func_0x000107c2ae8c();
        *puVar8 = 1;
        uStack_d0 = (undefined8 *)(puVar8 + 1);
        *uStack_d0 = 0x695b737961727261;
        uStack_c8 = 0xe;
        iStack_c4 = 0;
        *(undefined1 *)((long)puVar8 + 0x12) = 0;
        *(undefined8 *)((long)puVar8 + 10) = 0x30203d21205d695b;
        FUN_109ac3188(0xffffff29,&uStack_d0,"init",&UNK_10f597913,0x1148);
        goto LAB_109a9bac4;
      }
      lVar22 = *(long *)(lVar13 + 0x10);
      if (param_1[2] != 0) {
        *(long *)(param_1[2] + uVar20 * 8) = lVar22;
      }
      if (lVar22 != 0) {
        if ((int)uVar21 < 0) {
          uVar18 = (ulong)*(uint *)(lVar13 + 4);
          uVar21 = uVar20;
          if ((int)*(uint *)(lVar13 + 4) < 1) {
            uVar14 = 0;
          }
          else {
            uVar9 = 0;
            do {
              uVar14 = uVar9;
              if (1 < *(int *)(*(long *)(lVar13 + 0x40) + uVar9 * 4)) break;
              uVar9 = uVar9 + 1;
              uVar14 = uVar18;
            } while (uVar18 != uVar9);
          }
        }
        else {
          piVar23 = *(int **)(lVar13 + 0x40);
          uVar6 = piVar23[-1];
          uVar9 = (ulong)uVar6;
          piVar7 = *(int **)(*(long *)(*param_1 + uVar21 * 8) + 0x40);
          if (uVar6 != piVar7[-1]) {
LAB_109a9b888:
            puVar8 = (undefined4 *)0x20;
            func_0x000107c2ae8c();
            *puVar8 = 1;
            uStack_d0 = (undefined8 *)(puVar8 + 1);
            uStack_c8 = 0x1a;
            iStack_c4 = 0;
            *(undefined1 *)((long)puVar8 + 0x1e) = 0;
            *(undefined8 *)(puVar8 + 3) = 0x737961727261203d;
            *(undefined8 *)(puVar8 + 1) = 0x3d20657a69732e41;
            *(undefined8 *)((long)puVar8 + 0x16) = 0x657a69733e2d5d30;
            *(undefined8 *)((long)puVar8 + 0xe) = 0x695b737961727261;
            FUN_109ac3188(0xffffff29,&uStack_d0,"init",&UNK_10f597913,0x115c);
            goto LAB_109a9bac4;
          }
          if (uVar6 == 2) {
            if ((*piVar23 != *piVar7) || (piVar23[1] != piVar7[1])) goto LAB_109a9b888;
          }
          else if (0 < (int)uVar6) {
            do {
              if (*piVar23 != *piVar7) goto LAB_109a9b888;
              uVar9 = uVar9 - 1;
              piVar7 = piVar7 + 1;
              piVar23 = piVar23 + 1;
            } while (uVar9 != 0);
          }
        }
        if ((*(byte *)(lVar13 + 1) >> 6 & 1) == 0) {
          lVar22 = *(long *)(lVar13 + 0x48);
          if ((int)*(uint *)(lVar13 + 4) < 1) {
            uVar9 = 0;
          }
          else {
            uVar9 = *(ulong *)(lVar22 + (ulong)*(uint *)(lVar13 + 4) * 8 + -8);
          }
          uVar6 = (int)uVar18 - 1;
          uVar24 = *(ulong *)(lVar22 + (long)(int)uVar6 * 8);
          if (uVar24 != uVar9) {
            puVar8 = (undefined4 *)0x20;
            func_0x000107c2ae8c();
            *puVar8 = 1;
            uStack_d0 = (undefined8 *)(puVar8 + 1);
            uStack_c8 = 0x1b;
            iStack_c4 = 0;
            *(undefined1 *)((long)puVar8 + 0x1f) = 0;
            *(undefined8 *)(puVar8 + 3) = 0x41203d3d205d312d;
            *(undefined8 *)(puVar8 + 1) = 0x645b706574732e41;
            *(undefined8 *)((long)puVar8 + 0x17) = 0x2928657a69536d65;
            *(undefined8 *)((long)puVar8 + 0xf) = 0x6c652e41203d3d20;
            FUN_109ac3188(0xffffff29,&uStack_d0,"init",&UNK_10f597913,0x1160);
            goto LAB_109a9bac4;
          }
          lVar10 = (long)(int)uVar6;
          uVar12 = (uint)uVar14;
          uVar17 = uVar12;
          if ((int)uVar6 <= (int)uVar12) {
            uVar17 = uVar6;
          }
          uVar9 = uVar18;
          do {
            uVar6 = uVar17;
            if (lVar10 <= (int)uVar12) break;
            uVar11 = uVar24 * (long)*(int *)(*(long *)(lVar13 + 0x40) + lVar10 * 4);
            uVar24 = *(ulong *)(lVar22 + -8 + lVar10 * 8);
            lVar10 = lVar10 + -1;
            uVar6 = (int)uVar9 - 1;
            uVar9 = (ulong)uVar6;
          } while (uVar24 <= uVar11);
          if ((int)uVar19 <= (int)uVar6) {
            uVar19 = uVar6;
          }
          *(uint *)(param_1 + 6) = uVar19;
        }
      }
      uVar20 = uVar20 + 1;
    } while (uVar20 < (param_5 & 0xffffffff));
    if (-1 < (int)uVar21) {
      uVar17 = (int)uVar18 - 1;
      lVar13 = *(long *)(*(long *)(*param_1 + uVar21 * 8) + 0x40);
      lVar22 = (long)(int)uVar17;
      uVar6 = *(uint *)(param_1 + 6);
      uVar19 = uVar6;
      if ((int)uVar17 <= (int)uVar6) {
        uVar19 = uVar17;
      }
      lVar10 = (long)*(int *)(lVar13 + (long)(int)uVar17 * 4);
      do {
        lVar25 = lVar10;
        uVar17 = uVar19;
        if (lVar22 <= (int)uVar6) break;
        lVar10 = lVar22 * 4;
        lVar22 = lVar22 + -1;
        lVar10 = lVar25 * *(int *)(lVar13 + -4 + lVar10);
        uVar17 = (int)uVar18 - 1;
        uVar18 = (ulong)uVar17;
      } while (lVar10 - (int)lVar10 == 0);
      param_1[5] = lVar25;
      uVar19 = 0;
      if (uVar17 != (uint)uVar14) {
        uVar19 = uVar17;
      }
      *(uint *)(param_1 + 6) = uVar19;
      if ((int)uVar19 < 1) {
        lVar13 = 1;
      }
      else {
        uVar20 = (ulong)uVar19 + 1;
        piVar7 = (int *)(lVar13 + (ulong)uVar19 * 4);
        lVar13 = 1;
        do {
          piVar7 = piVar7 + -1;
          lVar13 = lVar13 * *piVar7;
          uVar20 = uVar20 - 1;
        } while (1 < uVar20);
      }
      param_1[4] = lVar13;
      bVar1 = true;
      goto LAB_109a9b62c;
    }
  }
  *(undefined4 *)(param_1 + 6) = 0;
LAB_109a9b62c:
  param_1[7] = 0;
  if ((bVar1) && (param_1[1] != 0)) {
    lVar13 = 0;
    puVar27 = (undefined8 *)((ulong)&uStack_d0 | 4);
    uVar20 = (ulong)&uStack_d0 | 8;
    do {
      puVar15 = *(uint **)(*param_1 + lVar13 * 8);
      if (puVar15 == (uint *)0x0) {
        puVar8 = (undefined4 *)0x14;
        func_0x000107c2ae8c();
        *puVar8 = 1;
        uStack_d0 = (undefined8 *)(puVar8 + 1);
        *uStack_d0 = 0x695b737961727261;
        uStack_c8 = 0xe;
        iStack_c4 = 0;
        *(undefined1 *)((long)puVar8 + 0x12) = 0;
        *(undefined8 *)((long)puVar8 + 10) = 0x30203d21205d695b;
        FUN_109ac3188(0xffffff29,&uStack_d0,"init",&UNK_10f597913,0x1185);
        goto LAB_109a9bac4;
      }
      lVar22 = *(long *)(puVar15 + 4);
      uStack_90 = uVar20;
      plStack_88 = &lStack_80;
      if (lVar22 == 0) {
        uStack_d0._0_4_ = 0x42ff0000;
        *(undefined8 *)((long)puVar27 + 0x34) = 0;
        *(undefined8 *)((long)puVar27 + 0x2c) = 0;
        puVar27[3] = 0;
        puVar27[2] = 0;
        puVar27[5] = 0;
        puVar27[4] = 0;
        puVar27[1] = 0;
        *puVar27 = 0;
        lStack_80 = 0;
        uStack_78 = 0;
        puVar26 = (undefined8 *)(param_1[1] + lVar13 * 0x60);
        if (puVar26[7] != 0) {
          piVar7 = (int *)(puVar26[7] + 0x14);
          do {
            iVar3 = *piVar7;
            cVar4 = '\x01';
            bVar1 = (bool)ExclusiveMonitorPass(piVar7,0x10);
            if (bVar1) {
              *piVar7 = iVar3 + -1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (iVar3 + -1 == 0) {
            func_0x000109a848d4(puVar26);
          }
        }
        puVar26[7] = 0;
        puVar26[3] = 0;
        puVar26[2] = 0;
        puVar26[5] = 0;
        puVar26[4] = 0;
        if (0 < *(int *)((long)puVar26 + 4)) {
          lVar22 = 0;
          lVar10 = puVar26[8];
          do {
            *(undefined4 *)(lVar10 + lVar22 * 4) = 0;
            lVar22 = lVar22 + 1;
          } while (lVar22 < *(int *)((long)puVar26 + 4));
        }
      }
      else {
        uVar19 = *puVar15;
        uStack_d0._4_4_ = 2;
        uStack_c8 = 1;
        iStack_c4 = (int)param_1[5];
        uStack_a0 = 0;
        uStack_98 = 0;
        uVar6 = (uVar19 >> 3 & 0x1ff) + 1 << (ulong)(0xfa50U >> (ulong)((uVar19 & 7) << 1) & 3);
        uStack_78 = (ulong)uVar6;
        lStack_80 = (long)iStack_c4 * (long)(int)uVar6;
        uStack_d0._0_4_ = uVar19 & 0xfff | 0x42ff4000;
        lStack_b0 = lVar22 + (long)iStack_c4 * (long)(int)uVar6;
        puVar26 = (undefined8 *)(param_1[1] + lVar13 * 0x60);
        lStack_c0 = lVar22;
        lStack_b8 = lVar22;
        lStack_a8 = lStack_b0;
        if (puVar26[7] != 0) {
          piVar7 = (int *)(puVar26[7] + 0x14);
          do {
            iVar3 = *piVar7;
            cVar4 = '\x01';
            bVar1 = (bool)ExclusiveMonitorPass(piVar7,0x10);
            if (bVar1) {
              *piVar7 = iVar3 + -1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (iVar3 + -1 == 0) {
            func_0x000109a848d4(puVar26);
          }
        }
        puVar26[7] = 0;
        puVar26[3] = 0;
        puVar26[2] = 0;
        puVar26[5] = 0;
        puVar26[4] = 0;
        if (0 < *(int *)((long)puVar26 + 4)) {
          lVar22 = 0;
          lVar10 = puVar26[8];
          do {
            *(undefined4 *)(lVar10 + lVar22 * 4) = 0;
            lVar22 = lVar22 + 1;
          } while (lVar22 < *(int *)((long)puVar26 + 4));
        }
      }
      puVar26[1] = CONCAT44(iStack_c4,uStack_c8);
      *puVar26 = CONCAT44(uStack_d0._4_4_,(uint)uStack_d0);
      puVar26[3] = lStack_b8;
      puVar26[2] = lStack_c0;
      puVar26[5] = lStack_a8;
      puVar26[4] = lStack_b0;
      puVar26[7] = uStack_98;
      puVar26[6] = uStack_a0;
      plVar16 = (long *)puVar26[9];
      plVar2 = puVar26 + 10;
      if (plVar16 != plVar2) {
        if (plVar16 != (long *)0x0) {
          _free(plVar16[-1]);
        }
        puVar26[8] = puVar26 + 1;
        puVar26[9] = plVar2;
        plVar16 = plVar2;
      }
      if (uStack_d0._4_4_ < 3) {
        *plVar16 = *plStack_88;
        plVar16[1] = plStack_88[1];
        uStack_d0._0_4_ = 0x42ff0000;
        puVar27[1] = 0;
        *puVar27 = 0;
        puVar27[3] = 0;
        puVar27[2] = 0;
        puVar27[5] = 0;
        puVar27[4] = 0;
        *(undefined8 *)((long)puVar27 + 0x34) = 0;
        *(undefined8 *)((long)puVar27 + 0x2c) = 0;
        if (plStack_88 != &lStack_80) {
          _free(plStack_88[-1]);
        }
      }
      else {
        puVar26[9] = plStack_88;
        puVar26[8] = uStack_90;
      }
      lVar13 = lVar13 + 1;
    } while (lVar13 < (int)param_1[3]);
  }
  return;
}



/* Entry: 109a9bb94; end: 109a9bd43;  */

void FUN_109a9bb94(long *param_1,ulong param_2,uint param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  ulong *puVar8;
  long lVar9;
  ulong uVar10;
  long lVar11;
  int iVar12;
  ulong uVar13;
  long lVar14;
  ulong uVar15;
  long lVar16;
  int *piVar17;
  ulong *puVar18;
  
  lVar7 = *param_1;
  if ((*(byte *)(lVar7 + 1) >> 6 & 1) == 0) {
    uVar1 = *(uint *)(lVar7 + 4);
    uVar10 = (ulong)uVar1;
    if (uVar1 == 2) {
      if ((param_3 & 1) == 0) {
        lVar11 = (long)*(int *)(lVar7 + 0xc);
        uVar13 = **(ulong **)(lVar7 + 0x48);
        uVar10 = param_1[1];
      }
      else {
        uVar10 = param_1[1];
        uVar15 = param_1[2] - *(long *)(lVar7 + 0x10);
        uVar13 = **(ulong **)(lVar7 + 0x48);
        uVar5 = 0;
        if (uVar13 != 0) {
          uVar5 = uVar15 / uVar13;
        }
        lVar11 = (long)*(int *)(lVar7 + 0xc);
        uVar6 = 0;
        if (uVar10 != 0) {
          uVar6 = (uVar15 - uVar5 * uVar13) / uVar10;
        }
        param_2 = uVar6 + param_2 + uVar5 * lVar11;
      }
      uVar5 = 0;
      if (lVar11 != 0) {
        uVar5 = (long)param_2 / lVar11;
      }
      iVar2 = *(int *)(lVar7 + 8);
      uVar4 = iVar2 - 1;
      uVar1 = (uint)uVar5 & ((int)(uint)uVar5 >> 0x1f ^ 0xffffffffU);
      if ((int)uVar1 <= (int)uVar4) {
        uVar4 = uVar1;
      }
      lVar9 = *(long *)(lVar7 + 0x10) + uVar13 * (long)(int)uVar4;
      lVar7 = lVar9 + uVar10 * lVar11;
      param_1[3] = lVar9;
      param_1[4] = lVar7;
      if ((long)uVar5 < (long)iVar2) {
        lVar7 = lVar9 + (param_2 - uVar5 * lVar11) * uVar10;
      }
      if ((uVar5 & 0x8000000000000000) == 0) {
        lVar9 = lVar7;
      }
    }
    else {
      puVar8 = *(ulong **)(lVar7 + 0x48);
      if (param_3 != 0) {
        if ((int)uVar1 < 1) {
          lVar11 = 0;
        }
        else {
          lVar11 = 0;
          uVar13 = param_1[2] - *(long *)(lVar7 + 0x10);
          piVar17 = *(int **)(lVar7 + 0x40);
          puVar18 = puVar8;
          do {
            uVar15 = *puVar18;
            uVar5 = 0;
            if (uVar15 != 0) {
              uVar5 = uVar13 / uVar15;
            }
            uVar13 = uVar13 - uVar5 * uVar15;
            lVar11 = uVar5 + lVar11 * *piVar17;
            uVar10 = uVar10 - 1;
            piVar17 = piVar17 + 1;
            puVar18 = puVar18 + 1;
          } while (uVar10 != 0);
        }
        param_2 = lVar11 + param_2;
      }
      param_2 = param_2 & ((long)param_2 >> 0x3f ^ 0xffffffffffffffffU);
      lVar16 = *(long *)(lVar7 + 0x40);
      iVar2 = *(int *)(lVar16 + (long)(int)uVar1 * 4 + -4);
      lVar9 = (long)iVar2;
      lVar11 = 0;
      if (lVar9 != 0) {
        lVar11 = (long)param_2 / lVar9;
      }
      iVar12 = (int)lVar11;
      lVar7 = *(long *)(lVar7 + 0x10);
      param_1[3] = lVar7;
      if (1 < (int)uVar1) {
        uVar10 = (ulong)(uVar1 - 2);
        lVar14 = lVar11;
        do {
          iVar3 = *(int *)(lVar16 + uVar10 * 4);
          lVar11 = 0;
          if ((long)iVar3 != 0) {
            lVar11 = lVar14 / (long)iVar3;
          }
          lVar7 = lVar7 + (long)((int)lVar14 - (int)lVar11 * iVar3) * puVar8[uVar10];
          uVar10 = uVar10 - 1;
          lVar14 = lVar11;
        } while (uVar10 != 0xffffffffffffffff);
        param_1[3] = lVar7;
      }
      lVar9 = lVar7 + param_1[1] * lVar9;
      param_1[4] = lVar9;
      if (lVar11 < 1) {
        lVar9 = lVar7 + (long)((int)param_2 - iVar12 * iVar2) * param_1[1];
      }
    }
    param_1[2] = lVar9;
  }
  else {
    lVar7 = 0x10;
    if (param_3 == 0) {
      lVar7 = 0x18;
    }
    uVar10 = *(long *)((long)param_1 + lVar7) + param_1[1] * param_2;
    param_1[2] = uVar10;
    uVar13 = param_1[3];
    if ((uVar10 < uVar13) || (uVar13 = param_1[4], uVar13 < uVar10)) {
      param_1[2] = uVar13;
      return;
    }
  }
  return;
}



/* Entry: 109a9bd44; end: 109a9bdf3;  */

void FUN_109a9bd44(float *param_1,undefined8 *param_2)

{
  float fVar1;
  double dVar2;
  undefined4 uVar3;
  float fVar4;
  undefined4 uVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  undefined8 uVar9;
  float fVar10;
  float fVar11;
  
  uVar3 = 0;
  uVar5 = 0x40668000;
  dVar2 = ((double)param_1[4] * 3.141592653589793) / 180.0;
  ___sincos_stret();
  fVar7 = param_1[2];
  fVar1 = param_1[3];
  fVar4 = (float)(double)CONCAT44(uVar5,uVar3) * 0.5;
  fVar6 = (float)dVar2 * 0.5;
  uVar9 = NEON_ext(CONCAT44(-fVar6,-fVar4),CONCAT44(fVar6,fVar4),4,1);
  fVar10 = ((float)*(undefined8 *)param_1 + (float)uVar9 * fVar1) - fVar4 * fVar7;
  fVar11 = ((float)((ulong)*(undefined8 *)param_1 >> 0x20) + (float)((ulong)uVar9 >> 0x20) * fVar1)
           - fVar6 * fVar7;
  *param_2 = CONCAT44(fVar11,fVar10);
  fVar8 = (*param_1 + fVar1 * fVar6) - fVar7 * fVar4;
  fVar4 = (param_1[1] - fVar1 * fVar4) - fVar7 * fVar6;
  *(float *)(param_2 + 1) = fVar8;
  *(float *)((long)param_2 + 0xc) = fVar4;
  param_2[2] = CONCAT44(-fVar11 + (float)((ulong)*(undefined8 *)param_1 >> 0x20) * 2.0,
                        -fVar10 + (float)*(undefined8 *)param_1 * 2.0);
  fVar1 = param_1[1];
  *(float *)(param_2 + 3) = *param_1 * 2.0 - fVar8;
  *(float *)((long)param_2 + 0x1c) = fVar1 * 2.0 - fVar4;
  return;
}



/* Entry: 109a9bdf4; end: 109a9be17;  */

undefined8 FUN_109a9bdf4(void)

{
  return 0xffffffffffffffff;
}



/* Entry: 109a9be18; end: 109a9bf83;  */

void FUN_109a9be18(undefined8 param_1,uint param_2,long param_3,uint param_4,ulong param_5,
                  long param_6)

{
  bool bVar1;
  code *pcVar2;
  ulong uVar3;
  undefined8 *puVar4;
  undefined4 *puVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  undefined4 *puStack_40;
  undefined8 uStack_38;
  
  uVar8 = (ulong)((param_4 >> 3 & 0x1ff) + 1 << (ulong)(0xfa50U >> (ulong)((param_4 & 7) << 1) & 3))
  ;
  if (0 < (int)param_2) {
    uVar3 = (ulong)param_2;
    do {
      uVar6 = uVar3 - 1;
      uVar7 = uVar8;
      if (param_6 != 0) {
        if ((param_5 == 0) || (uVar7 = *(ulong *)(param_6 + uVar6 * 8), uVar7 == 0x7fffffff)) {
          *(ulong *)(param_6 + uVar6 * 8) = uVar8;
          uVar7 = uVar8;
        }
        else if (uVar7 < uVar8) {
          puVar5 = (undefined4 *)0x18;
          func_0x000107c2ae8c();
          *puVar5 = 1;
          puStack_40 = puVar5 + 1;
          uStack_38 = 0x10;
          *(undefined1 *)(puVar5 + 5) = 0;
          *(undefined8 *)(puVar5 + 3) = 0x5d695b7065747320;
          *(undefined8 *)(puVar5 + 1) = 0x3d3c206c61746f74;
          FUN_109ac3188(0xffffff29,&puStack_40,&DAT_10f55b088,&UNK_10f597913,0xb6);
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x109a9bf58);
          (*pcVar2)();
        }
      }
      uVar8 = uVar7 * (long)*(int *)(param_3 + uVar6 * 4);
      bVar1 = 1 < uVar3;
      uVar3 = uVar6;
    } while (bVar1);
  }
  uVar3 = param_5;
  if (param_5 == 0) {
    uVar3 = uVar8;
    func_0x000107c2ae8c();
  }
  puVar4 = (undefined8 *)0x58;
  __Znwm();
  *puVar4 = param_1;
  puVar4[1] = param_1;
  puVar4[3] = 0;
  puVar4[2] = 0;
  puVar4[5] = 0;
  puVar4[4] = 0;
  *(undefined4 *)(puVar4 + 6) = 0;
  puVar4[8] = 0;
  puVar4[7] = 0;
  puVar4[10] = 0;
  puVar4[9] = 0;
  puVar4[3] = uVar3;
  puVar4[4] = uVar3;
  puVar4[5] = uVar8;
  if (param_5 != 0) {
    *(undefined4 *)(puVar4 + 6) = 0x20;
  }
  return;
}



/* Entry: 109a9bf84; end: 109a9bf8f;  */

bool FUN_109a9bf84(undefined8 param_1,long param_2)

{
  return param_2 != 0;
}



/* Entry: 109a9bf90; end: 109a9c103;  */

void FUN_109a9bf90(undefined8 param_1,long param_2)

{
  code *pcVar1;
  undefined4 *puVar2;
  undefined4 *puStack_30;
  undefined8 uStack_28;
  
  if (param_2 == 0) {
    return;
  }
  if (*(int *)(param_2 + 0x10) == 0) {
    if (*(int *)(param_2 + 0x14) == 0) {
      if ((*(byte *)(param_2 + 0x30) >> 5 & 1) == 0) {
        if (*(long *)(param_2 + 0x20) != 0) {
          _free(*(undefined8 *)(*(long *)(param_2 + 0x20) + -8));
        }
        *(undefined8 *)(param_2 + 0x20) = 0;
      }
      FUN_109ac4440(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___ZdlPv_110352258)();
      return;
    }
    puVar2 = (undefined4 *)0x18;
    func_0x000107c2ae8c();
    *puVar2 = 1;
    puStack_30 = puVar2 + 1;
    uStack_28 = 0x10;
    *(undefined1 *)(puVar2 + 5) = 0;
    *(undefined8 *)(puVar2 + 3) = 0x30203d3d20746e75;
    *(undefined8 *)(puVar2 + 1) = 0x6f636665723e2d75;
    FUN_109ac3188(0xffffff29,&puStack_30,&UNK_10f598a10,&UNK_10f597913,0xd4);
  }
  else {
    puVar2 = (undefined4 *)0x18;
    func_0x000107c2ae8c();
    *puVar2 = 1;
    puStack_30 = puVar2 + 1;
    uStack_28 = 0x11;
    *(undefined2 *)(puVar2 + 5) = 0x30;
    *(undefined8 *)(puVar2 + 3) = 0x203d3d20746e756f;
    *(undefined8 *)(puVar2 + 1) = 0x63666572753e2d75;
    FUN_109ac3188(0xffffff29,&puStack_30,&UNK_10f598a10,&UNK_10f597913,0xd3);
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x109a9c0b0);
  (*pcVar1)();
}



/* Entry: 109a9c104; end: 109a9c14f;  */

long * FUN_109a9c104(long *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = param_1[1];
  lVar2 = param_1[2];
  while (lVar2 != lVar1) {
    param_1[2] = lVar2 + -0x50;
    FUN_109ac5638();
    lVar2 = param_1[2];
  }
  if (*param_1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 109a9c150; end: 109a9c2b3;  */

void FUN_109a9c150(long *param_1,undefined8 *param_2)

{
  long *plVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lStack_68;
  long lStack_60;
  long lStack_58;
  long lStack_50;
  long *plStack_48;
  
  lVar8 = param_1[1];
  if ((undefined8 *)((param_1[2] - lVar8 >> 3) * -0x5555555555555555) < param_2) {
    lVar8 = lVar8 - *param_1;
    uVar3 = (long)param_2 + (lVar8 >> 3) * -0x5555555555555555;
    if (0xaaaaaaaaaaaaaaa < uVar3) {
      FUN_1092a9b50();
      plVar1 = (long *)&DAT_10f62a4d8;
      func_0x000104c4f6cc();
      lVar8 = *plVar1;
      lVar7 = plVar1[1];
      lVar2 = param_2[1] + (lVar8 - lVar7);
      lVar5 = lVar2;
      if (lVar7 != lVar8) {
        do {
          lVar6 = 0;
          do {
            *(undefined1 *)(lVar5 + lVar6) = *(undefined1 *)(lVar8 + lVar6);
            lVar6 = lVar6 + 1;
          } while (lVar6 != 3);
          lVar8 = lVar8 + 3;
          lVar5 = lVar5 + 3;
        } while (lVar8 != lVar7);
        lVar8 = *plVar1;
      }
      param_2[1] = lVar2;
      *plVar1 = lVar2;
      plVar1[1] = lVar8;
      param_2[1] = lVar8;
      lVar8 = plVar1[1];
      plVar1[1] = param_2[2];
      param_2[2] = lVar8;
      lVar8 = plVar1[2];
      plVar1[2] = param_2[3];
      param_2[3] = lVar8;
      *param_2 = param_2[1];
      return;
    }
    lVar2 = param_1[2] - *param_1 >> 3;
    uVar4 = lVar2 * 0x5555555555555556;
    if (uVar4 < uVar3 || uVar4 - uVar3 == 0) {
      uVar4 = uVar3;
    }
    if (0x555555555555554 < (ulong)(lVar2 * -0x5555555555555555)) {
      uVar4 = 0xaaaaaaaaaaaaaaa;
    }
    plStack_48 = param_1;
    if (uVar4 == 0) {
      plVar1 = (long *)0x0;
    }
    else {
      plVar1 = param_1;
      FUN_1092a9b64();
    }
    lVar8 = (long)plVar1 + lVar8;
    lVar2 = (((long)param_2 * 0x18 - 0x18U) / 0x18) * 0x18 + 0x18;
    _bzero(lVar8,lVar2);
    lVar7 = lVar8 - (param_1[1] - *param_1);
    _memcpy(lVar7);
    lStack_68 = *param_1;
    *param_1 = lVar7;
    param_1[1] = lVar8 + lVar2;
    lStack_50 = param_1[2];
    param_1[2] = (long)(plVar1 + uVar4 * 3);
    lStack_60 = lStack_68;
    lStack_58 = lStack_68;
    func_0x00010528d5a4(&lStack_68);
  }
  else {
    if (param_2 != (undefined8 *)0x0) {
      lVar2 = (((long)param_2 * 0x18 - 0x18U) / 0x18) * 0x18 + 0x18;
      _bzero(lVar8,lVar2);
      lVar8 = lVar8 + lVar2;
    }
    param_1[1] = lVar8;
  }
  return;
}



/* Entry: 109a9c2b4; end: 109a9c2c7;  */

void FUN_109a9c2b4(undefined8 param_1,undefined8 *param_2)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  
  plVar3 = (long *)&DAT_10f62a4d8;
  func_0x000104c4f6cc();
  lVar4 = *plVar3;
  lVar2 = plVar3[1];
  lVar1 = param_2[1] + (lVar4 - lVar2);
  lVar5 = lVar1;
  if (lVar2 != lVar4) {
    do {
      lVar6 = 0;
      do {
        *(undefined1 *)(lVar5 + lVar6) = *(undefined1 *)(lVar4 + lVar6);
        lVar6 = lVar6 + 1;
      } while (lVar6 != 3);
      lVar4 = lVar4 + 3;
      lVar5 = lVar5 + 3;
    } while (lVar4 != lVar2);
    lVar4 = *plVar3;
  }
  param_2[1] = lVar1;
  *plVar3 = lVar1;
  plVar3[1] = lVar4;
  param_2[1] = lVar4;
  lVar4 = plVar3[1];
  plVar3[1] = param_2[2];
  param_2[2] = lVar4;
  lVar4 = plVar3[2];
  plVar3[2] = param_2[3];
  param_2[3] = lVar4;
  *param_2 = param_2[1];
  return;
}



/* Entry: 109a9c2c8; end: 109a9c347;  */

void FUN_109a9c2c8(long *param_1,undefined8 *param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  lVar3 = *param_1;
  lVar2 = param_1[1];
  lVar1 = param_2[1] + (lVar3 - lVar2);
  lVar4 = lVar1;
  if (lVar2 != lVar3) {
    do {
      lVar5 = 0;
      do {
        *(undefined1 *)(lVar4 + lVar5) = *(undefined1 *)(lVar3 + lVar5);
        lVar5 = lVar5 + 1;
      } while (lVar5 != 3);
      lVar3 = lVar3 + 3;
      lVar4 = lVar4 + 3;
    } while (lVar3 != lVar2);
    lVar3 = *param_1;
  }
  param_2[1] = lVar1;
  *param_1 = lVar1;
  param_1[1] = lVar3;
  param_2[1] = lVar3;
  lVar3 = param_1[1];
  param_1[1] = param_2[2];
  param_2[2] = lVar3;
  lVar3 = param_1[2];
  param_1[2] = param_2[3];
  param_2[3] = lVar3;
  *param_2 = param_2[1];
  return;
}



/* Entry: 109a9c348; end: 109a9c423;  */

void FUN_109a9c348(undefined8 param_1,long param_2,uint param_3)

{
  undefined1 uVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  ulong uVar9;
  
  func_0x000104c4f6cc(&DAT_10f62a4d8);
  func_0x000104c4f6cc(&DAT_10f62a4d8);
  func_0x000104c4f6cc(&DAT_10f62a4d8);
  func_0x000104c4f6cc(&DAT_10f62a4d8);
  func_0x000104c4f6cc(&DAT_10f62a4d8);
  func_0x000104c4f6cc(&DAT_10f62a4d8);
  func_0x000104c4f6cc(&DAT_10f62a4d8);
  func_0x000104c4f6cc(&DAT_10f62a4d8);
  func_0x000104c4f6cc(&DAT_10f62a4d8);
  func_0x000104c4f6cc(&DAT_10f62a4d8);
  puVar2 = &DAT_10f62a4d8;
  func_0x000104c4f6cc();
  if (0 < (int)param_3) {
    uVar3 = 0;
    uVar4 = (ulong)param_3;
    puVar6 = puVar2 + param_2;
    puVar2 = puVar2 + 1;
    uVar5 = uVar4;
    do {
      uVar5 = uVar5 - 1;
      uVar3 = uVar3 + 1;
      puVar7 = puVar2;
      puVar8 = puVar6;
      uVar9 = uVar5;
      if (uVar3 < uVar4) {
        do {
          uVar1 = *puVar7;
          *puVar7 = *puVar8;
          *puVar8 = uVar1;
          uVar9 = uVar9 - 1;
          puVar7 = puVar7 + 1;
          puVar8 = puVar8 + param_2;
        } while (uVar9 != 0);
      }
      puVar6 = puVar6 + param_2 + 1;
      puVar2 = puVar2 + param_2 + 1;
    } while (uVar3 != uVar4);
  }
  return;
}



/* Entry: 109a9c424; end: 109a9c4fb;  */

void FUN_109a9c424(long param_1,long param_2,uint param_3)

{
  undefined1 uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  ulong uVar9;
  
  if (0 < (int)param_3) {
    uVar2 = 0;
    uVar3 = (ulong)param_3;
    puVar5 = (undefined1 *)(param_1 + param_2);
    puVar6 = (undefined1 *)(param_1 + 1);
    uVar4 = uVar3;
    do {
      uVar4 = uVar4 - 1;
      uVar2 = uVar2 + 1;
      puVar7 = puVar6;
      puVar8 = puVar5;
      uVar9 = uVar4;
      if (uVar2 < uVar3) {
        do {
          uVar1 = *puVar7;
          *puVar7 = *puVar8;
          *puVar8 = uVar1;
          uVar9 = uVar9 - 1;
          puVar7 = puVar7 + 1;
          puVar8 = puVar8 + param_2;
        } while (uVar9 != 0);
      }
      puVar5 = puVar5 + param_2 + 1;
      puVar6 = puVar6 + param_2 + 1;
    } while (uVar2 != uVar3);
  }
  return;
}



/* Entry: 109a9c4fc; end: 109a9c583;  */

void FUN_109a9c4fc(long param_1,long param_2,uint param_3)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined2 uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  undefined2 *puVar7;
  undefined2 *puVar8;
  undefined2 *puVar9;
  undefined2 *puVar10;
  ulong uVar11;
  
  if (0 < (int)param_3) {
    uVar4 = 0;
    uVar5 = (ulong)param_3;
    puVar7 = (undefined2 *)(param_1 + param_2);
    puVar8 = (undefined2 *)(param_1 + 3);
    uVar6 = uVar5;
    do {
      uVar6 = uVar6 - 1;
      uVar4 = uVar4 + 1;
      puVar9 = puVar8;
      puVar10 = puVar7;
      uVar11 = uVar6;
      if (uVar4 < uVar5) {
        do {
          uVar1 = *(undefined1 *)(puVar9 + 1);
          uVar3 = *puVar9;
          uVar2 = *(undefined1 *)(puVar10 + 1);
          *puVar9 = *puVar10;
          *(undefined1 *)(puVar9 + 1) = uVar2;
          *puVar10 = uVar3;
          *(undefined1 *)(puVar10 + 1) = uVar1;
          uVar11 = uVar11 - 1;
          puVar9 = (undefined2 *)((long)puVar9 + 3);
          puVar10 = (undefined2 *)((long)puVar10 + param_2);
        } while (uVar11 != 0);
      }
      puVar7 = (undefined2 *)((long)puVar7 + param_2 + 3);
      puVar8 = (undefined2 *)((long)puVar8 + param_2 + 3);
    } while (uVar4 != uVar5);
  }
  return;
}



/* Entry: 109a9c584; end: 109a9c5ef;  */

void FUN_109a9c584(long param_1,long param_2,uint param_3)

{
  undefined4 uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  ulong uVar9;
  
  if (0 < (int)param_3) {
    uVar2 = 0;
    uVar3 = (ulong)param_3;
    puVar5 = (undefined4 *)(param_1 + param_2);
    puVar6 = (undefined4 *)(param_1 + 4);
    uVar4 = uVar3;
    do {
      uVar4 = uVar4 - 1;
      uVar2 = uVar2 + 1;
      puVar7 = puVar6;
      puVar8 = puVar5;
      uVar9 = uVar4;
      if (uVar2 < uVar3) {
        do {
          uVar1 = *puVar7;
          *puVar7 = *puVar8;
          *puVar8 = uVar1;
          uVar9 = uVar9 - 1;
          puVar7 = puVar7 + 1;
          puVar8 = (undefined4 *)((long)puVar8 + param_2);
        } while (uVar9 != 0);
      }
      puVar5 = (undefined4 *)((long)puVar5 + param_2 + 4);
      puVar6 = (undefined4 *)((long)puVar6 + param_2 + 4);
    } while (uVar2 != uVar3);
  }
  return;
}



/* Entry: 109a9c5f0; end: 109a9c677;  */

void FUN_109a9c5f0(long param_1,long param_2,uint param_3)

{
  undefined4 uVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  ulong uVar11;
  
  if (0 < (int)param_3) {
    uVar4 = 0;
    uVar5 = (ulong)param_3;
    puVar7 = (undefined4 *)(param_1 + param_2);
    puVar8 = (undefined4 *)(param_1 + 6);
    uVar6 = uVar5;
    do {
      uVar6 = uVar6 - 1;
      uVar4 = uVar4 + 1;
      puVar9 = puVar8;
      puVar10 = puVar7;
      uVar11 = uVar6;
      if (uVar4 < uVar5) {
        do {
          uVar2 = *(undefined2 *)(puVar9 + 1);
          uVar1 = *puVar9;
          uVar3 = *(undefined2 *)(puVar10 + 1);
          *puVar9 = *puVar10;
          *(undefined2 *)(puVar9 + 1) = uVar3;
          *puVar10 = uVar1;
          *(undefined2 *)(puVar10 + 1) = uVar2;
          uVar11 = uVar11 - 1;
          puVar9 = (undefined4 *)((long)puVar9 + 6);
          puVar10 = (undefined4 *)((long)puVar10 + param_2);
        } while (uVar11 != 0);
      }
      puVar7 = (undefined4 *)((long)puVar7 + param_2 + 6);
      puVar8 = (undefined4 *)((long)puVar8 + param_2 + 6);
    } while (uVar4 != uVar5);
  }
  return;
}



/* Entry: 109a9c678; end: 109a9c6e3;  */

void FUN_109a9c678(long param_1,long param_2,uint param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  ulong uVar8;
  undefined8 uVar9;
  
  if (0 < (int)param_3) {
    uVar1 = 0;
    uVar2 = (ulong)param_3;
    puVar4 = (undefined8 *)(param_1 + param_2);
    puVar5 = (undefined8 *)(param_1 + 8);
    uVar3 = uVar2;
    do {
      uVar3 = uVar3 - 1;
      uVar1 = uVar1 + 1;
      puVar6 = puVar5;
      puVar7 = puVar4;
      uVar8 = uVar3;
      if (uVar1 < uVar2) {
        do {
          uVar9 = *puVar6;
          *puVar6 = *puVar7;
          *puVar7 = uVar9;
          uVar8 = uVar8 - 1;
          puVar6 = puVar6 + 1;
          puVar7 = (undefined8 *)((long)puVar7 + param_2);
        } while (uVar8 != 0);
      }
      puVar4 = (undefined8 *)((long)puVar4 + param_2 + 8);
      puVar5 = (undefined8 *)((long)puVar5 + param_2 + 8);
    } while (uVar1 != uVar2);
  }
  return;
}



/* Entry: 109a9c6e4; end: 109a9c9bb;  */

void FUN_109a9c6e4(undefined1 *param_1,long param_2,ulong param_3,long param_4,uint *param_5)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  uint uVar5;
  uint uVar6;
  long lVar7;
  undefined1 *puVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  long *plVar14;
  undefined8 *puVar15;
  long *plVar16;
  undefined8 *puVar17;
  long *plVar18;
  undefined8 *puVar19;
  long *plVar20;
  undefined8 *puVar21;
  ulong uVar22;
  undefined8 uVar23;
  long lVar24;
  undefined1 *puVar25;
  long lVar26;
  long lVar27;
  long lVar28;
  long lVar29;
  ulong uVar30;
  undefined8 uVar31;
  undefined8 uVar32;
  undefined8 uVar33;
  undefined8 uVar34;
  undefined8 uVar35;
  undefined8 uVar36;
  
  lVar10 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if (0 < (int)param_3) {
    uVar11 = 0;
    uVar12 = param_3 & 0xffffffff;
    plVar14 = (long *)(param_1 + param_2);
    plVar16 = (long *)(param_1 + 0xc);
    uVar13 = uVar12;
    do {
      uVar13 = uVar13 - 1;
      uVar11 = uVar11 + 1;
      plVar18 = plVar16;
      plVar20 = plVar14;
      uVar22 = uVar13;
      if (uVar11 < uVar12) {
        do {
          lVar24 = plVar18[1];
          param_1 = (undefined1 *)*plVar18;
          uVar6 = *(uint *)(plVar20 + 1);
          param_3 = (ulong)uVar6;
          param_4 = *plVar20;
          *plVar18 = param_4;
          *(uint *)(plVar18 + 1) = uVar6;
          *plVar20 = (long)param_1;
          *(int *)(plVar20 + 1) = (int)lVar24;
          uVar22 = uVar22 - 1;
          plVar18 = (long *)((long)plVar18 + 0xc);
          plVar20 = (long *)((long)plVar20 + param_2);
        } while (uVar22 != 0);
      }
      plVar14 = (long *)((long)plVar14 + param_2 + 0xc);
      plVar16 = (long *)((long)plVar16 + param_2 + 0xc);
    } while (uVar11 != uVar12);
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar10) {
    return;
  }
  ___stack_chk_fail();
  lVar10 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if (0 < (int)param_3) {
    uVar11 = 0;
    uVar12 = param_3 & 0xffffffff;
    puVar15 = (undefined8 *)(param_1 + param_2);
    puVar17 = (undefined8 *)(param_1 + 0x10);
    uVar13 = uVar12;
    do {
      uVar13 = uVar13 - 1;
      uVar11 = uVar11 + 1;
      puVar19 = puVar17;
      puVar21 = puVar15;
      uVar22 = uVar13;
      if (uVar11 < uVar12) {
        do {
          uVar31 = puVar19[1];
          uVar23 = *puVar19;
          uVar32 = *puVar21;
          puVar19[1] = puVar21[1];
          *puVar19 = uVar32;
          puVar21[1] = uVar31;
          *puVar21 = uVar23;
          uVar22 = uVar22 - 1;
          puVar19 = puVar19 + 2;
          puVar21 = (undefined8 *)((long)puVar21 + param_2);
        } while (uVar22 != 0);
      }
      puVar15 = (undefined8 *)((long)puVar15 + param_2 + 0x10);
      puVar17 = (undefined8 *)((long)puVar17 + param_2 + 0x10);
    } while (uVar11 != uVar12);
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar10) {
    ___stack_chk_fail();
    lVar10 = *(long *)PTR____stack_chk_guard_11034bdc0;
    if (0 < (int)param_3) {
      uVar11 = 0;
      uVar12 = param_3 & 0xffffffff;
      puVar15 = (undefined8 *)(param_1 + param_2);
      puVar17 = (undefined8 *)(param_1 + 0x18);
      uVar13 = uVar12;
      do {
        uVar13 = uVar13 - 1;
        uVar11 = uVar11 + 1;
        puVar19 = puVar17;
        puVar21 = puVar15;
        uVar22 = uVar13;
        if (uVar11 < uVar12) {
          do {
            uVar23 = puVar19[2];
            uVar32 = puVar19[1];
            uVar31 = *puVar19;
            param_1 = (undefined1 *)puVar21[2];
            uVar33 = *puVar21;
            puVar19[1] = puVar21[1];
            *puVar19 = uVar33;
            puVar19[2] = param_1;
            puVar21[1] = uVar32;
            *puVar21 = uVar31;
            puVar21[2] = uVar23;
            uVar22 = uVar22 - 1;
            puVar19 = puVar19 + 3;
            puVar21 = (undefined8 *)((long)puVar21 + param_2);
          } while (uVar22 != 0);
        }
        puVar15 = (undefined8 *)((long)puVar15 + param_2 + 0x18);
        puVar17 = (undefined8 *)((long)puVar17 + param_2 + 0x18);
      } while (uVar11 != uVar12);
    }
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar10) {
      ___stack_chk_fail();
      lVar10 = *(long *)PTR____stack_chk_guard_11034bdc0;
      if (0 < (int)param_3) {
        uVar11 = 0;
        uVar12 = param_3 & 0xffffffff;
        puVar15 = (undefined8 *)(param_1 + param_2);
        puVar17 = (undefined8 *)(param_1 + 0x20);
        uVar13 = uVar12;
        do {
          uVar13 = uVar13 - 1;
          uVar11 = uVar11 + 1;
          puVar19 = puVar17;
          puVar21 = puVar15;
          uVar22 = uVar13;
          if (uVar11 < uVar12) {
            do {
              uVar33 = puVar19[1];
              uVar32 = *puVar19;
              uVar31 = puVar19[3];
              uVar23 = puVar19[2];
              uVar36 = *puVar21;
              uVar35 = puVar21[3];
              uVar34 = puVar21[2];
              puVar19[1] = puVar21[1];
              *puVar19 = uVar36;
              puVar19[3] = uVar35;
              puVar19[2] = uVar34;
              puVar21[1] = uVar33;
              *puVar21 = uVar32;
              puVar21[3] = uVar31;
              puVar21[2] = uVar23;
              uVar22 = uVar22 - 1;
              puVar19 = puVar19 + 4;
              puVar21 = (undefined8 *)((long)puVar21 + param_2);
            } while (uVar22 != 0);
          }
          puVar15 = (undefined8 *)((long)puVar15 + param_2 + 0x20);
          puVar17 = (undefined8 *)((long)puVar17 + param_2 + 0x20);
        } while (uVar11 != uVar12);
      }
      if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar10) {
        ___stack_chk_fail();
        uVar6 = *param_5;
        uVar5 = param_5[1];
        if ((int)uVar6 < 4) {
          uVar11 = 0;
        }
        else {
          uVar11 = 0;
          lVar7 = param_4 * 4;
          lVar10 = param_3 + param_4 * 3;
          lVar24 = param_3 + param_4;
          lVar9 = param_3 + param_4 * 2;
          puVar8 = param_1;
          uVar13 = param_3;
          do {
            if ((int)uVar5 < 4) {
              uVar12 = 0;
            }
            else {
              uVar12 = 0;
              puVar25 = puVar8;
              do {
                puVar1 = puVar25 + param_2 + 3;
                puVar2 = puVar25 + param_2 * 2 + 3;
                puVar3 = puVar25 + param_2 * 3;
                puVar4 = (undefined1 *)(uVar13 + uVar12);
                *puVar4 = *puVar25;
                puVar4[1] = puVar1[-3];
                puVar4[2] = puVar2[-3];
                puVar4[3] = *puVar3;
                puVar4 = puVar4 + param_4;
                *puVar4 = puVar25[1];
                puVar4[1] = puVar1[-2];
                puVar4[2] = puVar2[-2];
                puVar4[3] = puVar3[1];
                puVar4 = puVar4 + param_4;
                *puVar4 = puVar25[2];
                puVar4[1] = puVar1[-1];
                puVar4[2] = puVar2[-1];
                puVar4[3] = puVar3[2];
                puVar4 = puVar4 + param_4;
                *puVar4 = puVar25[3];
                puVar4[1] = *puVar1;
                puVar4[2] = *puVar2;
                puVar4[3] = puVar3[3];
                uVar12 = uVar12 + 4;
                puVar25 = puVar25 + param_2 * 4;
              } while ((long)uVar12 <= (long)(int)uVar5 + -4);
              uVar12 = uVar12 & 0xffffffff;
            }
            if ((int)uVar12 < (int)uVar5) {
              lVar26 = param_2 * uVar12;
              uVar22 = uVar13;
              lVar27 = lVar24;
              lVar28 = lVar9;
              lVar29 = lVar10;
              uVar30 = (ulong)uVar5;
              do {
                puVar25 = puVar8 + lVar26;
                *(undefined1 *)(uVar22 + uVar12) = *puVar25;
                *(undefined1 *)(lVar27 + uVar12) = puVar25[1];
                *(undefined1 *)(lVar28 + uVar12) = puVar25[2];
                *(undefined1 *)(lVar29 + uVar12) = puVar25[3];
                uVar30 = uVar30 - 1;
                lVar29 = lVar29 + 1;
                lVar28 = lVar28 + 1;
                lVar27 = lVar27 + 1;
                uVar22 = uVar22 + 1;
                lVar26 = lVar26 + param_2;
              } while (uVar12 != uVar30);
            }
            uVar11 = uVar11 + 4;
            uVar13 = uVar13 + lVar7;
            puVar8 = puVar8 + 4;
            lVar10 = lVar10 + lVar7;
            lVar9 = lVar9 + lVar7;
            lVar24 = lVar24 + lVar7;
          } while (uVar11 <= uVar6 - 4);
        }
        if ((int)uVar11 < (int)uVar6) {
          uVar13 = uVar11 & 0xffffffff;
          param_1 = param_1 + (uVar11 & 0xffffffff);
          lVar24 = param_3 + param_4 * uVar13;
          lVar10 = lVar24 + 1;
          do {
            if ((int)uVar5 < 4) {
              uVar11 = 0;
            }
            else {
              uVar11 = 0;
              puVar8 = param_1;
              do {
                puVar25 = (undefined1 *)(lVar10 + uVar11);
                puVar25[-1] = *puVar8;
                *puVar25 = puVar8[param_2];
                puVar25[1] = puVar8[param_2 * 2];
                puVar25[2] = puVar8[param_2 * 3];
                uVar11 = uVar11 + 4;
                puVar8 = puVar8 + param_2 * 4;
              } while ((long)uVar11 <= (long)(int)uVar5 + -4);
              uVar11 = uVar11 & 0xffffffff;
            }
            if ((int)uVar11 < (int)uVar5) {
              lVar7 = uVar5 - uVar11;
              lVar9 = param_2 * uVar11;
              puVar8 = (undefined1 *)(lVar24 + uVar11);
              do {
                *puVar8 = param_1[lVar9];
                lVar9 = lVar9 + param_2;
                lVar7 = lVar7 + -1;
                puVar8 = puVar8 + 1;
              } while (lVar7 != 0);
            }
            uVar13 = uVar13 + 1;
            param_1 = param_1 + 1;
            lVar10 = lVar10 + param_4;
            lVar24 = lVar24 + param_4;
          } while (uVar13 != uVar6);
        }
        return;
      }
      return;
    }
    return;
  }
  return;
}



/* Entry: 109a9c9bc; end: 109a9cc4f;  */

void FUN_109a9c9bc(undefined1 *param_1,long param_2,long param_3,long param_4,uint *param_5)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  uint uVar5;
  uint uVar6;
  long lVar7;
  long lVar8;
  undefined1 *puVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  long lVar13;
  long lVar14;
  undefined1 *puVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  ulong uVar21;
  
  uVar5 = *param_5;
  uVar6 = param_5[1];
  if ((int)uVar5 < 4) {
    uVar11 = 0;
  }
  else {
    uVar11 = 0;
    lVar13 = param_4 * 4;
    lVar7 = param_3 + param_4 * 3;
    lVar10 = param_3 + param_4;
    lVar8 = param_3 + param_4 * 2;
    puVar9 = param_1;
    lVar14 = param_3;
    do {
      if ((int)uVar6 < 4) {
        uVar12 = 0;
      }
      else {
        uVar12 = 0;
        puVar15 = puVar9;
        do {
          puVar1 = puVar15 + param_2 + 3;
          puVar2 = puVar15 + param_2 * 2 + 3;
          puVar3 = puVar15 + param_2 * 3;
          puVar4 = (undefined1 *)(lVar14 + uVar12);
          *puVar4 = *puVar15;
          puVar4[1] = puVar1[-3];
          puVar4[2] = puVar2[-3];
          puVar4[3] = *puVar3;
          puVar4 = puVar4 + param_4;
          *puVar4 = puVar15[1];
          puVar4[1] = puVar1[-2];
          puVar4[2] = puVar2[-2];
          puVar4[3] = puVar3[1];
          puVar4 = puVar4 + param_4;
          *puVar4 = puVar15[2];
          puVar4[1] = puVar1[-1];
          puVar4[2] = puVar2[-1];
          puVar4[3] = puVar3[2];
          puVar4 = puVar4 + param_4;
          *puVar4 = puVar15[3];
          puVar4[1] = *puVar1;
          puVar4[2] = *puVar2;
          puVar4[3] = puVar3[3];
          uVar12 = uVar12 + 4;
          puVar15 = puVar15 + param_2 * 4;
        } while ((long)uVar12 <= (long)(int)uVar6 + -4);
        uVar12 = uVar12 & 0xffffffff;
      }
      if ((int)uVar12 < (int)uVar6) {
        lVar16 = param_2 * uVar12;
        lVar17 = lVar14;
        lVar18 = lVar10;
        lVar19 = lVar8;
        lVar20 = lVar7;
        uVar21 = (ulong)uVar6;
        do {
          puVar15 = puVar9 + lVar16;
          *(undefined1 *)(lVar17 + uVar12) = *puVar15;
          *(undefined1 *)(lVar18 + uVar12) = puVar15[1];
          *(undefined1 *)(lVar19 + uVar12) = puVar15[2];
          *(undefined1 *)(lVar20 + uVar12) = puVar15[3];
          uVar21 = uVar21 - 1;
          lVar20 = lVar20 + 1;
          lVar19 = lVar19 + 1;
          lVar18 = lVar18 + 1;
          lVar17 = lVar17 + 1;
          lVar16 = lVar16 + param_2;
        } while (uVar12 != uVar21);
      }
      uVar11 = uVar11 + 4;
      lVar14 = lVar14 + lVar13;
      puVar9 = puVar9 + 4;
      lVar7 = lVar7 + lVar13;
      lVar8 = lVar8 + lVar13;
      lVar10 = lVar10 + lVar13;
    } while (uVar11 <= uVar5 - 4);
  }
  if ((int)uVar11 < (int)uVar5) {
    uVar12 = uVar11 & 0xffffffff;
    param_1 = param_1 + (uVar11 & 0xffffffff);
    param_3 = param_3 + param_4 * uVar12;
    lVar7 = param_3 + 1;
    do {
      if ((int)uVar6 < 4) {
        uVar11 = 0;
      }
      else {
        uVar11 = 0;
        puVar9 = param_1;
        do {
          puVar15 = (undefined1 *)(lVar7 + uVar11);
          puVar15[-1] = *puVar9;
          *puVar15 = puVar9[param_2];
          puVar15[1] = puVar9[param_2 * 2];
          puVar15[2] = puVar9[param_2 * 3];
          uVar11 = uVar11 + 4;
          puVar9 = puVar9 + param_2 * 4;
        } while ((long)uVar11 <= (long)(int)uVar6 + -4);
        uVar11 = uVar11 & 0xffffffff;
      }
      if ((int)uVar11 < (int)uVar6) {
        lVar8 = uVar6 - uVar11;
        lVar10 = param_2 * uVar11;
        puVar9 = (undefined1 *)(param_3 + uVar11);
        do {
          *puVar9 = param_1[lVar10];
          lVar10 = lVar10 + param_2;
          lVar8 = lVar8 + -1;
          puVar9 = puVar9 + 1;
        } while (lVar8 != 0);
      }
      uVar12 = uVar12 + 1;
      param_1 = param_1 + 1;
      lVar7 = lVar7 + param_4;
      param_3 = param_3 + param_4;
    } while (uVar12 != uVar5);
  }
  return;
}



/* Entry: 109a9cc50; end: 109a9ceab;  */

void FUN_109a9cc50(undefined2 *param_1,long param_2,long param_3,long param_4,uint *param_5)

{
  undefined2 *puVar1;
  undefined2 *puVar2;
  undefined2 *puVar3;
  uint uVar4;
  uint uVar5;
  long lVar6;
  undefined2 *puVar7;
  undefined2 *puVar8;
  long lVar9;
  undefined2 *puVar10;
  ulong uVar11;
  ulong uVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  
  uVar4 = *param_5;
  uVar5 = param_5[1];
  if ((int)uVar4 < 4) {
    uVar11 = 0;
  }
  else {
    uVar11 = 0;
    lVar13 = param_4 * 4;
    lVar9 = param_3 + param_4 * 3;
    lVar6 = param_3 + param_4;
    lVar15 = param_3 + param_4 * 2;
    puVar10 = param_1;
    lVar14 = param_3;
    do {
      if ((int)uVar5 < 4) {
        uVar12 = 0;
      }
      else {
        uVar12 = 0;
        puVar7 = puVar10;
        do {
          puVar8 = (undefined2 *)((long)puVar7 + param_2 + 6);
          puVar1 = puVar7 + param_2 + 3;
          puVar2 = (undefined2 *)((long)puVar7 + param_2 * 3);
          puVar3 = (undefined2 *)(lVar14 + uVar12 * 2);
          *puVar3 = *puVar7;
          puVar3[1] = puVar8[-3];
          puVar3[2] = puVar1[-3];
          puVar3[3] = *puVar2;
          puVar3 = (undefined2 *)((long)puVar3 + param_4);
          *puVar3 = puVar7[1];
          puVar3[1] = puVar8[-2];
          puVar3[2] = puVar1[-2];
          puVar3[3] = puVar2[1];
          puVar3 = (undefined2 *)((long)puVar3 + param_4);
          *puVar3 = puVar7[2];
          puVar3[1] = puVar8[-1];
          puVar3[2] = puVar1[-1];
          puVar3[3] = puVar2[2];
          puVar3 = (undefined2 *)((long)puVar3 + param_4);
          *puVar3 = puVar7[3];
          puVar3[1] = *puVar8;
          puVar3[2] = *puVar1;
          puVar3[3] = puVar2[3];
          uVar12 = uVar12 + 4;
          puVar7 = puVar7 + param_2 * 2;
        } while ((long)uVar12 <= (long)(int)uVar5 + -4);
        uVar12 = uVar12 & 0xffffffff;
      }
      if ((int)uVar12 < (int)uVar5) {
        lVar16 = param_2 * uVar12;
        do {
          puVar7 = (undefined2 *)((long)puVar10 + lVar16);
          *(undefined2 *)(lVar14 + uVar12 * 2) = *puVar7;
          *(undefined2 *)(lVar6 + uVar12 * 2) = puVar7[1];
          *(undefined2 *)(lVar15 + uVar12 * 2) = puVar7[2];
          *(undefined2 *)(lVar9 + uVar12 * 2) = puVar7[3];
          uVar12 = uVar12 + 1;
          lVar16 = lVar16 + param_2;
        } while (uVar5 != uVar12);
      }
      uVar11 = uVar11 + 4;
      lVar14 = lVar14 + lVar13;
      puVar10 = puVar10 + 4;
      lVar9 = lVar9 + lVar13;
      lVar15 = lVar15 + lVar13;
      lVar6 = lVar6 + lVar13;
    } while (uVar11 <= uVar4 - 4);
  }
  if ((int)uVar11 < (int)uVar4) {
    uVar12 = uVar11 & 0xffffffff;
    param_1 = param_1 + (uVar11 & 0xffffffff);
    param_3 = param_3 + param_4 * uVar12;
    puVar10 = (undefined2 *)(param_3 + 4);
    do {
      if ((int)uVar5 < 4) {
        uVar11 = 0;
      }
      else {
        uVar11 = 0;
        puVar7 = puVar10;
        puVar8 = param_1;
        do {
          puVar7[-2] = *puVar8;
          puVar7[-1] = *(undefined2 *)((long)puVar8 + param_2);
          *puVar7 = puVar8[param_2];
          puVar7[1] = *(undefined2 *)((long)puVar8 + param_2 * 3);
          uVar11 = uVar11 + 4;
          puVar8 = puVar8 + param_2 * 2;
          puVar7 = puVar7 + 4;
        } while ((long)uVar11 <= (long)(int)uVar5 + -4);
        uVar11 = uVar11 & 0xffffffff;
      }
      if ((int)uVar11 < (int)uVar5) {
        lVar6 = uVar5 - uVar11;
        lVar9 = param_2 * uVar11;
        puVar7 = (undefined2 *)(param_3 + uVar11 * 2);
        do {
          *puVar7 = *(undefined2 *)((long)param_1 + lVar9);
          lVar9 = lVar9 + param_2;
          lVar6 = lVar6 + -1;
          puVar7 = puVar7 + 1;
        } while (lVar6 != 0);
      }
      uVar12 = uVar12 + 1;
      param_1 = param_1 + 1;
      puVar10 = (undefined2 *)((long)puVar10 + param_4);
      param_3 = param_3 + param_4;
    } while (uVar12 != uVar4);
  }
  return;
}



/* Entry: 109a9ceac; end: 109a9d247;  */

void FUN_109a9ceac(undefined2 *param_1,long param_2,undefined2 *param_3,long param_4,uint *param_5)

{
  undefined2 *puVar1;
  undefined2 *puVar2;
  undefined2 *puVar3;
  undefined2 *puVar4;
  uint uVar5;
  uint uVar6;
  undefined2 uVar7;
  long lVar8;
  undefined2 *puVar9;
  long lVar10;
  undefined2 *puVar11;
  undefined2 *puVar12;
  long lVar13;
  ulong uVar14;
  ulong uVar15;
  long lVar16;
  undefined2 *puVar17;
  long lVar18;
  undefined2 *puVar19;
  long lVar20;
  long lVar21;
  
  uVar5 = *param_5;
  uVar6 = param_5[1];
  if ((int)uVar5 < 4) {
    uVar14 = 0;
  }
  else {
    uVar14 = 0;
    lVar13 = (long)param_3 + param_4 * 3;
    lVar10 = (long)param_3 + param_4;
    puVar11 = param_3 + param_4;
    puVar9 = param_1;
    puVar12 = param_3;
    do {
      if ((int)uVar6 < 4) {
        uVar15 = 0;
      }
      else {
        uVar15 = 0;
        puVar17 = puVar9;
        puVar19 = puVar12;
        do {
          puVar3 = (undefined2 *)((long)puVar17 + param_2 + 9);
          puVar4 = (undefined2 *)((long)puVar17 + param_2 * 2 + 9);
          puVar1 = (undefined2 *)((long)puVar17 + param_2 * 3);
          uVar7 = *puVar17;
          *(undefined1 *)(puVar19 + 1) = *(undefined1 *)(puVar17 + 1);
          *puVar19 = uVar7;
          uVar7 = *(undefined2 *)((long)puVar3 + -9);
          *(undefined1 *)((long)puVar19 + 5) = *(undefined1 *)((long)puVar3 + -7);
          *(undefined2 *)((long)puVar19 + 3) = uVar7;
          uVar7 = *(undefined2 *)((long)puVar4 + -9);
          *(undefined1 *)(puVar19 + 4) = *(undefined1 *)((long)puVar4 + -7);
          puVar19[3] = uVar7;
          uVar7 = *puVar1;
          *(undefined1 *)((long)puVar19 + 0xb) = *(undefined1 *)(puVar1 + 1);
          *(undefined2 *)((long)puVar19 + 9) = uVar7;
          puVar2 = (undefined2 *)((long)puVar19 + param_4);
          uVar7 = *(undefined2 *)((long)puVar17 + 3);
          *(undefined1 *)(puVar2 + 1) = *(undefined1 *)((long)puVar17 + 5);
          *puVar2 = uVar7;
          uVar7 = puVar3[-3];
          *(undefined1 *)((long)puVar2 + 5) = *(undefined1 *)(puVar3 + -2);
          *(undefined2 *)((long)puVar2 + 3) = uVar7;
          uVar7 = puVar4[-3];
          *(undefined1 *)(puVar2 + 4) = *(undefined1 *)(puVar4 + -2);
          puVar2[3] = uVar7;
          uVar7 = *(undefined2 *)((long)puVar1 + 3);
          *(undefined1 *)((long)puVar2 + 0xb) = *(undefined1 *)((long)puVar1 + 5);
          *(undefined2 *)((long)puVar2 + 9) = uVar7;
          puVar2 = (undefined2 *)((long)puVar2 + param_4);
          uVar7 = puVar17[3];
          *(undefined1 *)(puVar2 + 1) = *(undefined1 *)(puVar17 + 4);
          *puVar2 = uVar7;
          uVar7 = *(undefined2 *)((long)puVar3 + -3);
          *(undefined1 *)((long)puVar2 + 5) = *(undefined1 *)((long)puVar3 + -1);
          *(undefined2 *)((long)puVar2 + 3) = uVar7;
          uVar7 = *(undefined2 *)((long)puVar4 + -3);
          *(undefined1 *)(puVar2 + 4) = *(undefined1 *)((long)puVar4 + -1);
          puVar2[3] = uVar7;
          uVar7 = puVar1[3];
          *(undefined1 *)((long)puVar2 + 0xb) = *(undefined1 *)(puVar1 + 4);
          *(undefined2 *)((long)puVar2 + 9) = uVar7;
          puVar2 = (undefined2 *)((long)puVar2 + param_4);
          uVar7 = *(undefined2 *)((long)puVar17 + 9);
          *(undefined1 *)(puVar2 + 1) = *(undefined1 *)((long)puVar17 + 0xb);
          *puVar2 = uVar7;
          uVar7 = *puVar3;
          *(undefined1 *)((long)puVar2 + 5) = *(undefined1 *)(puVar3 + 1);
          *(undefined2 *)((long)puVar2 + 3) = uVar7;
          uVar7 = *puVar4;
          *(undefined1 *)(puVar2 + 4) = *(undefined1 *)(puVar4 + 1);
          puVar2[3] = uVar7;
          uVar7 = *(undefined2 *)((long)puVar1 + 9);
          *(undefined1 *)((long)puVar2 + 0xb) = *(undefined1 *)((long)puVar1 + 0xb);
          *(undefined2 *)((long)puVar2 + 9) = uVar7;
          uVar15 = uVar15 + 4;
          puVar19 = puVar19 + 6;
          puVar17 = puVar17 + param_2 * 2;
        } while ((long)uVar15 <= (long)(int)uVar6 + -4);
        uVar15 = uVar15 & 0xffffffff;
      }
      if ((int)uVar15 < (int)uVar6) {
        lVar16 = uVar6 - uVar15;
        lVar18 = param_2 * uVar15;
        lVar8 = uVar15 * 3;
        puVar17 = puVar12;
        lVar20 = lVar10;
        puVar19 = puVar11;
        lVar21 = lVar13;
        do {
          puVar3 = (undefined2 *)((long)puVar9 + lVar18);
          uVar7 = *puVar3;
          *(undefined1 *)((undefined2 *)((long)puVar17 + lVar8) + 1) = *(undefined1 *)(puVar3 + 1);
          *(undefined2 *)((long)puVar17 + lVar8) = uVar7;
          uVar7 = *(undefined2 *)((long)puVar3 + 3);
          *(undefined1 *)((undefined2 *)(lVar20 + lVar8) + 1) = *(undefined1 *)((long)puVar3 + 5);
          *(undefined2 *)(lVar20 + lVar8) = uVar7;
          uVar7 = puVar3[3];
          *(undefined1 *)((undefined2 *)((long)puVar19 + lVar8) + 1) = *(undefined1 *)(puVar3 + 4);
          *(undefined2 *)((long)puVar19 + lVar8) = uVar7;
          puVar4 = (undefined2 *)(lVar21 + lVar8);
          uVar7 = *(undefined2 *)((long)puVar3 + 9);
          lVar21 = lVar21 + 3;
          puVar19 = (undefined2 *)((long)puVar19 + 3);
          *(undefined1 *)(puVar4 + 1) = *(undefined1 *)((long)puVar3 + 0xb);
          *puVar4 = uVar7;
          lVar20 = lVar20 + 3;
          puVar17 = (undefined2 *)((long)puVar17 + 3);
          lVar18 = lVar18 + param_2;
          lVar16 = lVar16 + -1;
        } while (lVar16 != 0);
      }
      uVar14 = uVar14 + 4;
      puVar12 = puVar12 + param_4 * 2;
      puVar9 = puVar9 + 6;
      lVar13 = lVar13 + param_4 * 4;
      puVar11 = puVar11 + param_4 * 2;
      lVar10 = lVar10 + param_4 * 4;
    } while (uVar14 <= uVar5 - 4);
  }
  if ((int)uVar14 < (int)uVar5) {
    uVar15 = uVar14 & 0xffffffff;
    param_1 = (undefined2 *)((long)param_1 + (uVar14 & 0xffffffff) * 2 + (uVar14 & 0xffffffff));
    param_3 = (undefined2 *)((long)param_3 + param_4 * uVar15);
    puVar9 = param_3 + 3;
    do {
      if ((int)uVar6 < 4) {
        uVar14 = 0;
      }
      else {
        uVar14 = 0;
        puVar11 = puVar9;
        puVar12 = param_1;
        do {
          puVar19 = (undefined2 *)((long)puVar12 + param_2 * 3);
          uVar7 = *puVar12;
          *(undefined1 *)(puVar11 + -2) = *(undefined1 *)(puVar12 + 1);
          puVar11[-3] = uVar7;
          uVar7 = *(undefined2 *)((long)puVar12 + param_2);
          *(undefined1 *)((long)puVar11 + -1) =
               *(undefined1 *)((undefined2 *)((long)puVar12 + param_2) + 1);
          *(undefined2 *)((long)puVar11 + -3) = uVar7;
          uVar7 = puVar12[param_2];
          *(undefined1 *)(puVar11 + 1) = *(undefined1 *)(puVar12 + param_2 + 1);
          *puVar11 = uVar7;
          uVar7 = *puVar19;
          *(undefined1 *)((long)puVar11 + 5) = *(undefined1 *)(puVar19 + 1);
          *(undefined2 *)((long)puVar11 + 3) = uVar7;
          uVar14 = uVar14 + 4;
          puVar12 = puVar12 + param_2 * 2;
          puVar11 = puVar11 + 6;
        } while ((long)uVar14 <= (long)(int)uVar6 + -4);
        uVar14 = uVar14 & 0xffffffff;
      }
      if ((int)uVar14 < (int)uVar6) {
        lVar10 = uVar6 - uVar14;
        lVar13 = param_2 * uVar14;
        puVar11 = (undefined2 *)((long)param_3 + uVar14 * 3);
        do {
          uVar7 = *(undefined2 *)((long)param_1 + lVar13);
          *(undefined1 *)(puVar11 + 1) = *(undefined1 *)((undefined2 *)((long)param_1 + lVar13) + 1)
          ;
          *puVar11 = uVar7;
          lVar13 = lVar13 + param_2;
          lVar10 = lVar10 + -1;
          puVar11 = (undefined2 *)((long)puVar11 + 3);
        } while (lVar10 != 0);
      }
      uVar15 = uVar15 + 1;
      param_1 = (undefined2 *)((long)param_1 + 3);
      puVar9 = (undefined2 *)((long)puVar9 + param_4);
      param_3 = (undefined2 *)((long)param_3 + param_4);
    } while (uVar15 != uVar5);
  }
  return;
}



/* Entry: 109a9d248; end: 109a9d4a3;  */

void FUN_109a9d248(undefined4 *param_1,long param_2,long param_3,long param_4,uint *param_5)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  uint uVar4;
  uint uVar5;
  undefined4 *puVar6;
  long lVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  
  uVar4 = *param_5;
  uVar5 = param_5[1];
  if ((int)uVar4 < 4) {
    uVar11 = 0;
  }
  else {
    uVar11 = 0;
    lVar13 = param_4 * 4;
    lVar10 = param_3 + param_4 * 3;
    lVar7 = param_3 + param_4;
    lVar15 = param_3 + param_4 * 2;
    puVar6 = param_1;
    lVar14 = param_3;
    do {
      if ((int)uVar5 < 4) {
        uVar12 = 0;
      }
      else {
        uVar12 = 0;
        puVar8 = puVar6;
        do {
          puVar9 = (undefined4 *)((long)puVar8 + param_2 + 0xc);
          puVar1 = (undefined4 *)((long)puVar8 + param_2 * 2 + 0xc);
          puVar2 = (undefined4 *)((long)puVar8 + param_2 * 3);
          puVar3 = (undefined4 *)(lVar14 + uVar12 * 4);
          *puVar3 = *puVar8;
          puVar3[1] = puVar9[-3];
          puVar3[2] = puVar1[-3];
          puVar3[3] = *puVar2;
          puVar3 = (undefined4 *)((long)puVar3 + param_4);
          *puVar3 = puVar8[1];
          puVar3[1] = puVar9[-2];
          puVar3[2] = puVar1[-2];
          puVar3[3] = puVar2[1];
          puVar3 = (undefined4 *)((long)puVar3 + param_4);
          *puVar3 = puVar8[2];
          puVar3[1] = puVar9[-1];
          puVar3[2] = puVar1[-1];
          puVar3[3] = puVar2[2];
          puVar3 = (undefined4 *)((long)puVar3 + param_4);
          *puVar3 = puVar8[3];
          puVar3[1] = *puVar9;
          puVar3[2] = *puVar1;
          puVar3[3] = puVar2[3];
          uVar12 = uVar12 + 4;
          puVar8 = puVar8 + param_2;
        } while ((long)uVar12 <= (long)(int)uVar5 + -4);
        uVar12 = uVar12 & 0xffffffff;
      }
      if ((int)uVar12 < (int)uVar5) {
        lVar16 = param_2 * uVar12;
        do {
          puVar8 = (undefined4 *)((long)puVar6 + lVar16);
          *(undefined4 *)(lVar14 + uVar12 * 4) = *puVar8;
          *(undefined4 *)(lVar7 + uVar12 * 4) = puVar8[1];
          *(undefined4 *)(lVar15 + uVar12 * 4) = puVar8[2];
          *(undefined4 *)(lVar10 + uVar12 * 4) = puVar8[3];
          uVar12 = uVar12 + 1;
          lVar16 = lVar16 + param_2;
        } while (uVar5 != uVar12);
      }
      uVar11 = uVar11 + 4;
      lVar14 = lVar14 + lVar13;
      puVar6 = puVar6 + 4;
      lVar10 = lVar10 + lVar13;
      lVar15 = lVar15 + lVar13;
      lVar7 = lVar7 + lVar13;
    } while (uVar11 <= uVar4 - 4);
  }
  if ((int)uVar11 < (int)uVar4) {
    uVar12 = uVar11 & 0xffffffff;
    param_1 = param_1 + (uVar11 & 0xffffffff);
    param_3 = param_3 + param_4 * uVar12;
    puVar6 = (undefined4 *)(param_3 + 8);
    do {
      if ((int)uVar5 < 4) {
        uVar11 = 0;
      }
      else {
        uVar11 = 0;
        puVar8 = puVar6;
        puVar9 = param_1;
        do {
          puVar8[-2] = *puVar9;
          puVar8[-1] = *(undefined4 *)((long)puVar9 + param_2);
          *puVar8 = *(undefined4 *)((long)puVar9 + param_2 * 2);
          puVar8[1] = *(undefined4 *)((long)puVar9 + param_2 * 3);
          uVar11 = uVar11 + 4;
          puVar9 = puVar9 + param_2;
          puVar8 = puVar8 + 4;
        } while ((long)uVar11 <= (long)(int)uVar5 + -4);
        uVar11 = uVar11 & 0xffffffff;
      }
      if ((int)uVar11 < (int)uVar5) {
        lVar7 = uVar5 - uVar11;
        lVar10 = param_2 * uVar11;
        puVar8 = (undefined4 *)(param_3 + uVar11 * 4);
        do {
          *puVar8 = *(undefined4 *)((long)param_1 + lVar10);
          lVar10 = lVar10 + param_2;
          lVar7 = lVar7 + -1;
          puVar8 = puVar8 + 1;
        } while (lVar7 != 0);
      }
      uVar12 = uVar12 + 1;
      param_1 = param_1 + 1;
      puVar6 = (undefined4 *)((long)puVar6 + param_4);
      param_3 = param_3 + param_4;
    } while (uVar12 != uVar4);
  }
  return;
}



/* Entry: 109a9d4a4; end: 109a9d83b;  */

void FUN_109a9d4a4(undefined4 *param_1,long param_2,undefined4 *param_3,long param_4,uint *param_5)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  uint uVar5;
  uint uVar6;
  undefined4 uVar7;
  undefined4 *puVar8;
  long lVar9;
  undefined4 *puVar10;
  undefined4 *puVar11;
  long lVar12;
  ulong uVar13;
  ulong uVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  undefined4 *puVar18;
  long lVar19;
  long lVar20;
  long lVar21;
  long lVar22;
  long lVar23;
  
  uVar5 = *param_5;
  uVar6 = param_5[1];
  if ((int)uVar5 < 4) {
    uVar13 = 0;
  }
  else {
    uVar13 = 0;
    lVar15 = param_4 * 4;
    lVar12 = (long)param_3 + param_4 * 3;
    lVar9 = (long)param_3 + param_4;
    lVar16 = (long)param_3 + param_4 * 2;
    puVar8 = param_1;
    puVar10 = param_3;
    do {
      if ((int)uVar6 < 4) {
        uVar14 = 0;
      }
      else {
        uVar14 = 0;
        puVar18 = puVar8;
        puVar11 = puVar10;
        do {
          puVar4 = (undefined4 *)((long)puVar18 + param_2 + 0x12);
          puVar1 = (undefined4 *)((long)puVar18 + param_2 * 2 + 0x12);
          puVar2 = (undefined4 *)((long)puVar18 + param_2 * 3);
          uVar7 = *puVar18;
          *(undefined2 *)(puVar11 + 1) = *(undefined2 *)(puVar18 + 1);
          *puVar11 = uVar7;
          uVar7 = *(undefined4 *)((long)puVar4 + -0x12);
          *(undefined2 *)((long)puVar11 + 10) = *(undefined2 *)((long)puVar4 + -0xe);
          *(undefined4 *)((long)puVar11 + 6) = uVar7;
          uVar7 = *(undefined4 *)((long)puVar1 + -0x12);
          *(undefined2 *)(puVar11 + 4) = *(undefined2 *)((long)puVar1 + -0xe);
          puVar11[3] = uVar7;
          uVar7 = *puVar2;
          *(undefined2 *)((long)puVar11 + 0x16) = *(undefined2 *)(puVar2 + 1);
          *(undefined4 *)((long)puVar11 + 0x12) = uVar7;
          puVar3 = (undefined4 *)((long)puVar11 + param_4);
          uVar7 = *(undefined4 *)((long)puVar18 + 6);
          *(undefined2 *)(puVar3 + 1) = *(undefined2 *)((long)puVar18 + 10);
          *puVar3 = uVar7;
          uVar7 = puVar4[-3];
          *(undefined2 *)((long)puVar3 + 10) = *(undefined2 *)(puVar4 + -2);
          *(undefined4 *)((long)puVar3 + 6) = uVar7;
          uVar7 = puVar1[-3];
          *(undefined2 *)(puVar3 + 4) = *(undefined2 *)(puVar1 + -2);
          puVar3[3] = uVar7;
          uVar7 = *(undefined4 *)((long)puVar2 + 6);
          *(undefined2 *)((long)puVar3 + 0x16) = *(undefined2 *)((long)puVar2 + 10);
          *(undefined4 *)((long)puVar3 + 0x12) = uVar7;
          puVar3 = (undefined4 *)((long)puVar3 + param_4);
          uVar7 = puVar18[3];
          *(undefined2 *)(puVar3 + 1) = *(undefined2 *)(puVar18 + 4);
          *puVar3 = uVar7;
          uVar7 = *(undefined4 *)((long)puVar4 + -6);
          *(undefined2 *)((long)puVar3 + 10) = *(undefined2 *)((long)puVar4 + -2);
          *(undefined4 *)((long)puVar3 + 6) = uVar7;
          uVar7 = *(undefined4 *)((long)puVar1 + -6);
          *(undefined2 *)(puVar3 + 4) = *(undefined2 *)((long)puVar1 + -2);
          puVar3[3] = uVar7;
          uVar7 = puVar2[3];
          *(undefined2 *)((long)puVar3 + 0x16) = *(undefined2 *)(puVar2 + 4);
          *(undefined4 *)((long)puVar3 + 0x12) = uVar7;
          puVar3 = (undefined4 *)((long)puVar3 + param_4);
          uVar7 = *(undefined4 *)((long)puVar18 + 0x12);
          *(undefined2 *)(puVar3 + 1) = *(undefined2 *)((long)puVar18 + 0x16);
          *puVar3 = uVar7;
          uVar7 = *puVar4;
          *(undefined2 *)((long)puVar3 + 10) = *(undefined2 *)(puVar4 + 1);
          *(undefined4 *)((long)puVar3 + 6) = uVar7;
          uVar7 = *puVar1;
          *(undefined2 *)(puVar3 + 4) = *(undefined2 *)(puVar1 + 1);
          puVar3[3] = uVar7;
          uVar7 = *(undefined4 *)((long)puVar2 + 0x12);
          *(undefined2 *)((long)puVar3 + 0x16) = *(undefined2 *)((long)puVar2 + 0x16);
          *(undefined4 *)((long)puVar3 + 0x12) = uVar7;
          uVar14 = uVar14 + 4;
          puVar11 = puVar11 + 6;
          puVar18 = puVar18 + param_2;
        } while ((long)uVar14 <= (long)(int)uVar6 + -4);
        uVar14 = uVar14 & 0xffffffff;
      }
      if ((int)uVar14 < (int)uVar6) {
        lVar17 = uVar6 - uVar14;
        lVar19 = uVar14 * 6;
        lVar20 = param_2 * uVar14;
        puVar11 = puVar10;
        lVar21 = lVar9;
        lVar22 = lVar16;
        lVar23 = lVar12;
        do {
          puVar18 = (undefined4 *)((long)puVar8 + lVar20);
          uVar7 = *puVar18;
          *(undefined2 *)((undefined4 *)((long)puVar11 + lVar19) + 1) = *(undefined2 *)(puVar18 + 1)
          ;
          *(undefined4 *)((long)puVar11 + lVar19) = uVar7;
          uVar7 = *(undefined4 *)((long)puVar18 + 6);
          *(undefined2 *)((undefined4 *)(lVar21 + lVar19) + 1) = *(undefined2 *)((long)puVar18 + 10)
          ;
          *(undefined4 *)(lVar21 + lVar19) = uVar7;
          uVar7 = puVar18[3];
          *(undefined2 *)((undefined4 *)(lVar22 + lVar19) + 1) = *(undefined2 *)(puVar18 + 4);
          *(undefined4 *)(lVar22 + lVar19) = uVar7;
          puVar4 = (undefined4 *)(lVar23 + lVar19);
          uVar7 = *(undefined4 *)((long)puVar18 + 0x12);
          lVar23 = lVar23 + 6;
          lVar22 = lVar22 + 6;
          *(undefined2 *)(puVar4 + 1) = *(undefined2 *)((long)puVar18 + 0x16);
          *puVar4 = uVar7;
          lVar21 = lVar21 + 6;
          puVar11 = (undefined4 *)((long)puVar11 + 6);
          lVar20 = lVar20 + param_2;
          lVar17 = lVar17 + -1;
        } while (lVar17 != 0);
      }
      uVar13 = uVar13 + 4;
      puVar10 = puVar10 + param_4;
      puVar8 = puVar8 + 6;
      lVar12 = lVar12 + lVar15;
      lVar16 = lVar16 + lVar15;
      lVar9 = lVar9 + lVar15;
    } while (uVar13 <= uVar5 - 4);
  }
  if ((int)uVar13 < (int)uVar5) {
    uVar14 = uVar13 & 0xffffffff;
    param_1 = (undefined4 *)((long)param_1 + (uVar13 & 0xffffffff) * 6);
    param_3 = (undefined4 *)((long)param_3 + param_4 * uVar14);
    puVar8 = param_3 + 3;
    do {
      if ((int)uVar6 < 4) {
        uVar13 = 0;
      }
      else {
        uVar13 = 0;
        puVar10 = puVar8;
        puVar11 = param_1;
        do {
          puVar18 = (undefined4 *)((long)puVar11 + param_2 * 2);
          puVar4 = (undefined4 *)((long)puVar11 + param_2 * 3);
          uVar7 = *puVar11;
          *(undefined2 *)(puVar10 + -2) = *(undefined2 *)(puVar11 + 1);
          puVar10[-3] = uVar7;
          uVar7 = *(undefined4 *)((long)puVar11 + param_2);
          *(undefined2 *)((long)puVar10 + -2) =
               *(undefined2 *)((undefined4 *)((long)puVar11 + param_2) + 1);
          *(undefined4 *)((long)puVar10 + -6) = uVar7;
          uVar7 = *puVar18;
          *(undefined2 *)(puVar10 + 1) = *(undefined2 *)(puVar18 + 1);
          *puVar10 = uVar7;
          uVar7 = *puVar4;
          *(undefined2 *)((long)puVar10 + 10) = *(undefined2 *)(puVar4 + 1);
          *(undefined4 *)((long)puVar10 + 6) = uVar7;
          uVar13 = uVar13 + 4;
          puVar11 = puVar11 + param_2;
          puVar10 = puVar10 + 6;
        } while ((long)uVar13 <= (long)(int)uVar6 + -4);
        uVar13 = uVar13 & 0xffffffff;
      }
      if ((int)uVar13 < (int)uVar6) {
        lVar9 = uVar6 - uVar13;
        lVar12 = param_2 * uVar13;
        puVar10 = (undefined4 *)((long)param_3 + uVar13 * 6);
        do {
          uVar7 = *(undefined4 *)((long)param_1 + lVar12);
          *(undefined2 *)(puVar10 + 1) = *(undefined2 *)((undefined4 *)((long)param_1 + lVar12) + 1)
          ;
          *puVar10 = uVar7;
          lVar12 = lVar12 + param_2;
          lVar9 = lVar9 + -1;
          puVar10 = (undefined4 *)((long)puVar10 + 6);
        } while (lVar9 != 0);
      }
      uVar14 = uVar14 + 1;
      param_1 = (undefined4 *)((long)param_1 + 6);
      puVar8 = (undefined4 *)((long)puVar8 + param_4);
      param_3 = (undefined4 *)((long)param_3 + param_4);
    } while (uVar14 != uVar5);
  }
  return;
}



/* Entry: 109a9d83c; end: 109a9da97;  */

void FUN_109a9d83c(undefined8 *param_1,long param_2,long param_3,long param_4,uint *param_5)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  uint uVar4;
  uint uVar5;
  undefined8 *puVar6;
  long lVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  
  uVar4 = *param_5;
  uVar5 = param_5[1];
  if ((int)uVar4 < 4) {
    uVar11 = 0;
  }
  else {
    uVar11 = 0;
    lVar13 = param_4 * 4;
    lVar10 = param_3 + param_4 * 3;
    lVar7 = param_3 + param_4;
    lVar15 = param_3 + param_4 * 2;
    puVar6 = param_1;
    lVar14 = param_3;
    do {
      if ((int)uVar5 < 4) {
        uVar12 = 0;
      }
      else {
        uVar12 = 0;
        puVar8 = puVar6;
        do {
          puVar9 = (undefined8 *)((long)puVar8 + param_2 + 0x18);
          puVar1 = (undefined8 *)((long)puVar8 + param_2 * 2 + 0x18);
          puVar2 = (undefined8 *)((long)puVar8 + param_2 * 3);
          puVar3 = (undefined8 *)(lVar14 + uVar12 * 8);
          *puVar3 = *puVar8;
          puVar3[1] = puVar9[-3];
          puVar3[2] = puVar1[-3];
          puVar3[3] = *puVar2;
          puVar3 = (undefined8 *)((long)puVar3 + param_4);
          *puVar3 = puVar8[1];
          puVar3[1] = puVar9[-2];
          puVar3[2] = puVar1[-2];
          puVar3[3] = puVar2[1];
          puVar3 = (undefined8 *)((long)puVar3 + param_4);
          *puVar3 = puVar8[2];
          puVar3[1] = puVar9[-1];
          puVar3[2] = puVar1[-1];
          puVar3[3] = puVar2[2];
          puVar3 = (undefined8 *)((long)puVar3 + param_4);
          *puVar3 = puVar8[3];
          puVar3[1] = *puVar9;
          puVar3[2] = *puVar1;
          puVar3[3] = puVar2[3];
          uVar12 = uVar12 + 4;
          puVar8 = (undefined8 *)((long)puVar8 + param_2 * 4);
        } while ((long)uVar12 <= (long)(int)uVar5 + -4);
        uVar12 = uVar12 & 0xffffffff;
      }
      if ((int)uVar12 < (int)uVar5) {
        lVar16 = param_2 * uVar12;
        do {
          puVar8 = (undefined8 *)((long)puVar6 + lVar16);
          *(undefined8 *)(lVar14 + uVar12 * 8) = *puVar8;
          *(undefined8 *)(lVar7 + uVar12 * 8) = puVar8[1];
          *(undefined8 *)(lVar15 + uVar12 * 8) = puVar8[2];
          *(undefined8 *)(lVar10 + uVar12 * 8) = puVar8[3];
          uVar12 = uVar12 + 1;
          lVar16 = lVar16 + param_2;
        } while (uVar5 != uVar12);
      }
      uVar11 = uVar11 + 4;
      lVar14 = lVar14 + lVar13;
      puVar6 = puVar6 + 4;
      lVar10 = lVar10 + lVar13;
      lVar15 = lVar15 + lVar13;
      lVar7 = lVar7 + lVar13;
    } while (uVar11 <= uVar4 - 4);
  }
  if ((int)uVar11 < (int)uVar4) {
    uVar12 = uVar11 & 0xffffffff;
    param_1 = param_1 + (uVar11 & 0xffffffff);
    param_3 = param_3 + param_4 * uVar12;
    puVar6 = (undefined8 *)(param_3 + 0x10);
    do {
      if ((int)uVar5 < 4) {
        uVar11 = 0;
      }
      else {
        uVar11 = 0;
        puVar8 = puVar6;
        puVar9 = param_1;
        do {
          puVar8[-2] = *puVar9;
          puVar8[-1] = *(undefined8 *)((long)puVar9 + param_2);
          *puVar8 = *(undefined8 *)((long)puVar9 + param_2 * 2);
          puVar8[1] = *(undefined8 *)((long)puVar9 + param_2 * 3);
          uVar11 = uVar11 + 4;
          puVar9 = (undefined8 *)((long)puVar9 + param_2 * 4);
          puVar8 = puVar8 + 4;
        } while ((long)uVar11 <= (long)(int)uVar5 + -4);
        uVar11 = uVar11 & 0xffffffff;
      }
      if ((int)uVar11 < (int)uVar5) {
        lVar7 = uVar5 - uVar11;
        lVar10 = param_2 * uVar11;
        puVar8 = (undefined8 *)(param_3 + uVar11 * 8);
        do {
          *puVar8 = *(undefined8 *)((long)param_1 + lVar10);
          lVar10 = lVar10 + param_2;
          lVar7 = lVar7 + -1;
          puVar8 = puVar8 + 1;
        } while (lVar7 != 0);
      }
      uVar12 = uVar12 + 1;
      param_1 = param_1 + 1;
      puVar6 = (undefined8 *)((long)puVar6 + param_4);
      param_3 = param_3 + param_4;
    } while (uVar12 != uVar4);
  }
  return;
}



/* Entry: 109a9da98; end: 109a9de2f;  */

void FUN_109a9da98(undefined8 *param_1,long param_2,undefined8 *param_3,long param_4,uint *param_5)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  uint uVar5;
  uint uVar6;
  undefined8 *puVar7;
  long lVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  long lVar11;
  undefined8 uVar12;
  ulong uVar13;
  ulong uVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  undefined8 *puVar18;
  long lVar19;
  long lVar20;
  long lVar21;
  long lVar22;
  long lVar23;
  
  uVar5 = *param_5;
  uVar6 = param_5[1];
  if ((int)uVar5 < 4) {
    uVar13 = 0;
  }
  else {
    uVar13 = 0;
    lVar15 = param_4 * 4;
    lVar11 = (long)param_3 + param_4 * 3;
    lVar8 = (long)param_3 + param_4;
    lVar16 = (long)param_3 + param_4 * 2;
    puVar7 = param_1;
    puVar9 = param_3;
    do {
      if ((int)uVar6 < 4) {
        uVar14 = 0;
      }
      else {
        uVar14 = 0;
        puVar18 = puVar7;
        puVar10 = puVar9;
        do {
          puVar4 = (undefined8 *)((long)puVar18 + param_2 + 0x24);
          puVar1 = (undefined8 *)((long)puVar18 + param_2 * 2 + 0x24);
          puVar2 = (undefined8 *)((long)puVar18 + param_2 * 3);
          uVar12 = *puVar18;
          *(undefined4 *)(puVar10 + 1) = *(undefined4 *)(puVar18 + 1);
          *puVar10 = uVar12;
          uVar12 = *(undefined8 *)((long)puVar4 + -0x24);
          *(undefined4 *)((long)puVar10 + 0x14) = *(undefined4 *)((long)puVar4 + -0x1c);
          *(undefined8 *)((long)puVar10 + 0xc) = uVar12;
          uVar12 = *(undefined8 *)((long)puVar1 + -0x24);
          *(undefined4 *)(puVar10 + 4) = *(undefined4 *)((long)puVar1 + -0x1c);
          puVar10[3] = uVar12;
          uVar12 = *puVar2;
          *(undefined4 *)((long)puVar10 + 0x2c) = *(undefined4 *)(puVar2 + 1);
          *(undefined8 *)((long)puVar10 + 0x24) = uVar12;
          puVar3 = (undefined8 *)((long)puVar10 + param_4);
          uVar12 = *(undefined8 *)((long)puVar18 + 0xc);
          *(undefined4 *)(puVar3 + 1) = *(undefined4 *)((long)puVar18 + 0x14);
          *puVar3 = uVar12;
          uVar12 = puVar4[-3];
          *(undefined4 *)((long)puVar3 + 0x14) = *(undefined4 *)(puVar4 + -2);
          *(undefined8 *)((long)puVar3 + 0xc) = uVar12;
          uVar12 = puVar1[-3];
          *(undefined4 *)(puVar3 + 4) = *(undefined4 *)(puVar1 + -2);
          puVar3[3] = uVar12;
          uVar12 = *(undefined8 *)((long)puVar2 + 0xc);
          *(undefined4 *)((long)puVar3 + 0x2c) = *(undefined4 *)((long)puVar2 + 0x14);
          *(undefined8 *)((long)puVar3 + 0x24) = uVar12;
          puVar3 = (undefined8 *)((long)puVar3 + param_4);
          uVar12 = puVar18[3];
          *(undefined4 *)(puVar3 + 1) = *(undefined4 *)(puVar18 + 4);
          *puVar3 = uVar12;
          uVar12 = *(undefined8 *)((long)puVar4 + -0xc);
          *(undefined4 *)((long)puVar3 + 0x14) = *(undefined4 *)((long)puVar4 + -4);
          *(undefined8 *)((long)puVar3 + 0xc) = uVar12;
          uVar12 = *(undefined8 *)((long)puVar1 + -0xc);
          *(undefined4 *)(puVar3 + 4) = *(undefined4 *)((long)puVar1 + -4);
          puVar3[3] = uVar12;
          uVar12 = puVar2[3];
          *(undefined4 *)((long)puVar3 + 0x2c) = *(undefined4 *)(puVar2 + 4);
          *(undefined8 *)((long)puVar3 + 0x24) = uVar12;
          puVar3 = (undefined8 *)((long)puVar3 + param_4);
          uVar12 = *(undefined8 *)((long)puVar18 + 0x24);
          *(undefined4 *)(puVar3 + 1) = *(undefined4 *)((long)puVar18 + 0x2c);
          *puVar3 = uVar12;
          uVar12 = *puVar4;
          *(undefined4 *)((long)puVar3 + 0x14) = *(undefined4 *)(puVar4 + 1);
          *(undefined8 *)((long)puVar3 + 0xc) = uVar12;
          uVar12 = *puVar1;
          *(undefined4 *)(puVar3 + 4) = *(undefined4 *)(puVar1 + 1);
          puVar3[3] = uVar12;
          uVar12 = *(undefined8 *)((long)puVar2 + 0x24);
          *(undefined4 *)((long)puVar3 + 0x2c) = *(undefined4 *)((long)puVar2 + 0x2c);
          *(undefined8 *)((long)puVar3 + 0x24) = uVar12;
          uVar14 = uVar14 + 4;
          puVar10 = puVar10 + 6;
          puVar18 = (undefined8 *)((long)puVar18 + param_2 * 4);
        } while ((long)uVar14 <= (long)(int)uVar6 + -4);
        uVar14 = uVar14 & 0xffffffff;
      }
      if ((int)uVar14 < (int)uVar6) {
        lVar17 = uVar6 - uVar14;
        lVar19 = uVar14 * 0xc;
        lVar20 = param_2 * uVar14;
        puVar10 = puVar9;
        lVar21 = lVar8;
        lVar22 = lVar16;
        lVar23 = lVar11;
        do {
          puVar18 = (undefined8 *)((long)puVar7 + lVar20);
          uVar12 = *puVar18;
          *(undefined4 *)((undefined8 *)((long)puVar10 + lVar19) + 1) = *(undefined4 *)(puVar18 + 1)
          ;
          *(undefined8 *)((long)puVar10 + lVar19) = uVar12;
          uVar12 = *(undefined8 *)((long)puVar18 + 0xc);
          *(undefined4 *)((undefined8 *)(lVar21 + lVar19) + 1) =
               *(undefined4 *)((long)puVar18 + 0x14);
          *(undefined8 *)(lVar21 + lVar19) = uVar12;
          uVar12 = puVar18[3];
          *(undefined4 *)((undefined8 *)(lVar22 + lVar19) + 1) = *(undefined4 *)(puVar18 + 4);
          *(undefined8 *)(lVar22 + lVar19) = uVar12;
          puVar4 = (undefined8 *)(lVar23 + lVar19);
          uVar12 = *(undefined8 *)((long)puVar18 + 0x24);
          lVar23 = lVar23 + 0xc;
          lVar22 = lVar22 + 0xc;
          *(undefined4 *)(puVar4 + 1) = *(undefined4 *)((long)puVar18 + 0x2c);
          *puVar4 = uVar12;
          lVar21 = lVar21 + 0xc;
          puVar10 = (undefined8 *)((long)puVar10 + 0xc);
          lVar20 = lVar20 + param_2;
          lVar17 = lVar17 + -1;
        } while (lVar17 != 0);
      }
      uVar13 = uVar13 + 4;
      puVar9 = (undefined8 *)((long)puVar9 + lVar15);
      puVar7 = puVar7 + 6;
      lVar11 = lVar11 + lVar15;
      lVar16 = lVar16 + lVar15;
      lVar8 = lVar8 + lVar15;
    } while (uVar13 <= uVar5 - 4);
  }
  if ((int)uVar13 < (int)uVar5) {
    uVar14 = uVar13 & 0xffffffff;
    param_1 = (undefined8 *)((long)param_1 + (uVar13 & 0xffffffff) * 0xc);
    param_3 = (undefined8 *)((long)param_3 + param_4 * uVar14);
    puVar7 = param_3 + 3;
    do {
      if ((int)uVar6 < 4) {
        uVar13 = 0;
      }
      else {
        uVar13 = 0;
        puVar9 = puVar7;
        puVar10 = param_1;
        do {
          puVar18 = (undefined8 *)((long)puVar10 + param_2 * 2);
          puVar4 = (undefined8 *)((long)puVar10 + param_2 * 3);
          uVar12 = *puVar10;
          *(undefined4 *)(puVar9 + -2) = *(undefined4 *)(puVar10 + 1);
          puVar9[-3] = uVar12;
          uVar12 = *(undefined8 *)((long)puVar10 + param_2);
          *(undefined4 *)((long)puVar9 + -4) =
               *(undefined4 *)((undefined8 *)((long)puVar10 + param_2) + 1);
          *(undefined8 *)((long)puVar9 + -0xc) = uVar12;
          uVar12 = *puVar18;
          *(undefined4 *)(puVar9 + 1) = *(undefined4 *)(puVar18 + 1);
          *puVar9 = uVar12;
          uVar12 = *puVar4;
          *(undefined4 *)((long)puVar9 + 0x14) = *(undefined4 *)(puVar4 + 1);
          *(undefined8 *)((long)puVar9 + 0xc) = uVar12;
          uVar13 = uVar13 + 4;
          puVar10 = (undefined8 *)((long)puVar10 + param_2 * 4);
          puVar9 = puVar9 + 6;
        } while ((long)uVar13 <= (long)(int)uVar6 + -4);
        uVar13 = uVar13 & 0xffffffff;
      }
      if ((int)uVar13 < (int)uVar6) {
        lVar8 = uVar6 - uVar13;
        lVar11 = param_2 * uVar13;
        puVar9 = (undefined8 *)((long)param_3 + uVar13 * 0xc);
        do {
          uVar12 = *(undefined8 *)((long)param_1 + lVar11);
          *(undefined4 *)(puVar9 + 1) = *(undefined4 *)((undefined8 *)((long)param_1 + lVar11) + 1);
          *puVar9 = uVar12;
          lVar11 = lVar11 + param_2;
          lVar8 = lVar8 + -1;
          puVar9 = (undefined8 *)((long)puVar9 + 0xc);
        } while (lVar8 != 0);
      }
      uVar14 = uVar14 + 1;
      param_1 = (undefined8 *)((long)param_1 + 0xc);
      puVar7 = (undefined8 *)((long)puVar7 + param_4);
      param_3 = (undefined8 *)((long)param_3 + param_4);
    } while (uVar14 != uVar5);
  }
  return;
}



/* Entry: 109a9de30; end: 109a9e0bb;  */

void FUN_109a9de30(undefined8 *param_1,long param_2,undefined8 *param_3,long param_4,uint *param_5)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  uint uVar5;
  uint uVar6;
  undefined8 *puVar7;
  long lVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  undefined8 *puVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  long lVar21;
  long lVar22;
  undefined8 uVar23;
  
  uVar5 = *param_5;
  uVar6 = param_5[1];
  if ((int)uVar5 < 4) {
    uVar12 = 0;
  }
  else {
    uVar12 = 0;
    lVar14 = param_4 * 4;
    lVar11 = (long)param_3 + param_4 * 3;
    lVar8 = (long)param_3 + param_4;
    lVar15 = (long)param_3 + param_4 * 2;
    puVar7 = param_1;
    puVar9 = param_3;
    do {
      if ((int)uVar6 < 4) {
        uVar13 = 0;
      }
      else {
        uVar13 = 0;
        puVar17 = puVar7;
        puVar10 = puVar9;
        do {
          puVar1 = (undefined8 *)((long)puVar17 + param_2 + 0x30);
          puVar2 = (undefined8 *)((long)puVar17 + param_2 * 2 + 0x30);
          puVar3 = (undefined8 *)((long)puVar17 + param_2 * 3);
          uVar23 = *puVar17;
          puVar10[1] = puVar17[1];
          *puVar10 = uVar23;
          uVar23 = puVar1[-6];
          puVar10[3] = puVar1[-5];
          puVar10[2] = uVar23;
          uVar23 = puVar2[-6];
          puVar10[5] = puVar2[-5];
          puVar10[4] = uVar23;
          uVar23 = *puVar3;
          puVar10[7] = puVar3[1];
          puVar10[6] = uVar23;
          puVar4 = (undefined8 *)((long)puVar10 + param_4);
          uVar23 = puVar17[2];
          puVar4[1] = puVar17[3];
          *puVar4 = uVar23;
          uVar23 = puVar1[-4];
          puVar4[3] = puVar1[-3];
          puVar4[2] = uVar23;
          uVar23 = puVar2[-4];
          puVar4[5] = puVar2[-3];
          puVar4[4] = uVar23;
          uVar23 = puVar3[2];
          puVar4[7] = puVar3[3];
          puVar4[6] = uVar23;
          puVar4 = (undefined8 *)((long)puVar4 + param_4);
          uVar23 = puVar17[4];
          puVar4[1] = puVar17[5];
          *puVar4 = uVar23;
          uVar23 = puVar1[-2];
          puVar4[3] = puVar1[-1];
          puVar4[2] = uVar23;
          uVar23 = puVar2[-2];
          puVar4[5] = puVar2[-1];
          puVar4[4] = uVar23;
          uVar23 = puVar3[4];
          puVar4[7] = puVar3[5];
          puVar4[6] = uVar23;
          puVar4 = (undefined8 *)((long)puVar4 + param_4);
          uVar23 = puVar17[6];
          puVar4[1] = puVar17[7];
          *puVar4 = uVar23;
          uVar23 = *puVar1;
          puVar4[3] = puVar1[1];
          puVar4[2] = uVar23;
          uVar23 = *puVar2;
          puVar4[5] = puVar2[1];
          puVar4[4] = uVar23;
          uVar23 = puVar3[6];
          puVar4[7] = puVar3[7];
          puVar4[6] = uVar23;
          uVar13 = uVar13 + 4;
          puVar10 = puVar10 + 8;
          puVar17 = (undefined8 *)((long)puVar17 + param_2 * 4);
        } while ((long)uVar13 <= (long)(int)uVar6 + -4);
        uVar13 = uVar13 & 0xffffffff;
      }
      if ((int)uVar13 < (int)uVar6) {
        lVar16 = uVar6 - uVar13;
        lVar18 = uVar13 * 0x10;
        lVar19 = param_2 * uVar13;
        puVar10 = puVar9;
        lVar20 = lVar8;
        lVar21 = lVar15;
        lVar22 = lVar11;
        do {
          puVar17 = (undefined8 *)((long)puVar7 + lVar19);
          uVar23 = *puVar17;
          (puVar10 + uVar13 * 2)[1] = puVar17[1];
          puVar10[uVar13 * 2] = uVar23;
          uVar23 = puVar17[2];
          ((undefined8 *)(lVar20 + lVar18))[1] = puVar17[3];
          *(undefined8 *)(lVar20 + lVar18) = uVar23;
          uVar23 = puVar17[4];
          ((undefined8 *)(lVar21 + lVar18))[1] = puVar17[5];
          *(undefined8 *)(lVar21 + lVar18) = uVar23;
          uVar23 = puVar17[6];
          ((undefined8 *)(lVar22 + lVar18))[1] = puVar17[7];
          *(undefined8 *)(lVar22 + lVar18) = uVar23;
          lVar22 = lVar22 + 0x10;
          lVar21 = lVar21 + 0x10;
          lVar20 = lVar20 + 0x10;
          puVar10 = puVar10 + 2;
          lVar19 = lVar19 + param_2;
          lVar16 = lVar16 + -1;
        } while (lVar16 != 0);
      }
      uVar12 = uVar12 + 4;
      puVar9 = (undefined8 *)((long)puVar9 + lVar14);
      puVar7 = puVar7 + 8;
      lVar11 = lVar11 + lVar14;
      lVar15 = lVar15 + lVar14;
      lVar8 = lVar8 + lVar14;
    } while (uVar12 <= uVar5 - 4);
  }
  if ((int)uVar12 < (int)uVar5) {
    uVar13 = uVar12 & 0xffffffff;
    param_1 = param_1 + (uVar12 & 0xffffffff) * 2;
    param_3 = (undefined8 *)((long)param_3 + param_4 * uVar13);
    puVar7 = param_3 + 4;
    do {
      if ((int)uVar6 < 4) {
        uVar12 = 0;
      }
      else {
        uVar12 = 0;
        puVar9 = puVar7;
        puVar10 = param_1;
        do {
          uVar23 = *puVar10;
          puVar9[-3] = puVar10[1];
          puVar9[-4] = uVar23;
          uVar23 = *(undefined8 *)((long)puVar10 + param_2);
          puVar9[-1] = ((undefined8 *)((long)puVar10 + param_2))[1];
          puVar9[-2] = uVar23;
          puVar17 = (undefined8 *)((long)puVar10 + param_2 * 2);
          uVar23 = *puVar17;
          puVar9[1] = puVar17[1];
          *puVar9 = uVar23;
          puVar17 = (undefined8 *)((long)puVar10 + param_2 * 3);
          uVar23 = *puVar17;
          puVar9[3] = puVar17[1];
          puVar9[2] = uVar23;
          uVar12 = uVar12 + 4;
          puVar10 = (undefined8 *)((long)puVar10 + param_2 * 4);
          puVar9 = puVar9 + 8;
        } while ((long)uVar12 <= (long)(int)uVar6 + -4);
        uVar12 = uVar12 & 0xffffffff;
      }
      if ((int)uVar12 < (int)uVar6) {
        lVar8 = uVar6 - uVar12;
        lVar11 = param_2 * uVar12;
        puVar9 = param_3 + uVar12 * 2;
        do {
          uVar23 = *(undefined8 *)((long)param_1 + lVar11);
          puVar9[1] = ((undefined8 *)((long)param_1 + lVar11))[1];
          *puVar9 = uVar23;
          lVar11 = lVar11 + param_2;
          lVar8 = lVar8 + -1;
          puVar9 = puVar9 + 2;
        } while (lVar8 != 0);
      }
      uVar13 = uVar13 + 1;
      param_1 = param_1 + 2;
      puVar7 = (undefined8 *)((long)puVar7 + param_4);
      param_3 = (undefined8 *)((long)param_3 + param_4);
    } while (uVar13 != uVar5);
  }
  return;
}



/* Entry: 109a9e0bc; end: 109a9e44f;  */

void FUN_109a9e0bc(undefined8 *param_1,long param_2,undefined8 *param_3,long param_4,uint *param_5)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  uint uVar5;
  uint uVar6;
  undefined8 *puVar7;
  long lVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  undefined8 *puVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  long lVar21;
  long lVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  
  uVar5 = *param_5;
  uVar6 = param_5[1];
  if ((int)uVar5 < 4) {
    uVar12 = 0;
  }
  else {
    uVar12 = 0;
    lVar14 = param_4 * 4;
    lVar11 = (long)param_3 + param_4 * 3;
    lVar8 = (long)param_3 + param_4;
    lVar15 = (long)param_3 + param_4 * 2;
    puVar7 = param_1;
    puVar9 = param_3;
    do {
      if ((int)uVar6 < 4) {
        uVar13 = 0;
      }
      else {
        uVar13 = 0;
        puVar17 = puVar7;
        puVar10 = puVar9;
        do {
          puVar3 = (undefined8 *)((long)puVar17 + param_2 + 0x48);
          puVar4 = (undefined8 *)((long)puVar17 + param_2 * 2 + 0x48);
          puVar1 = (undefined8 *)((long)puVar17 + param_2 * 3);
          uVar24 = puVar17[1];
          uVar23 = *puVar17;
          puVar10[2] = puVar17[2];
          puVar10[1] = uVar24;
          *puVar10 = uVar23;
          uVar24 = puVar3[-8];
          uVar23 = puVar3[-9];
          puVar10[5] = puVar3[-7];
          puVar10[4] = uVar24;
          puVar10[3] = uVar23;
          uVar24 = puVar4[-8];
          uVar23 = puVar4[-9];
          puVar10[8] = puVar4[-7];
          puVar10[7] = uVar24;
          puVar10[6] = uVar23;
          uVar24 = puVar1[1];
          uVar23 = *puVar1;
          puVar10[0xb] = puVar1[2];
          puVar10[10] = uVar24;
          puVar10[9] = uVar23;
          puVar2 = (undefined8 *)((long)puVar10 + param_4);
          uVar24 = puVar17[4];
          uVar23 = puVar17[3];
          puVar2[2] = puVar17[5];
          puVar2[1] = uVar24;
          *puVar2 = uVar23;
          uVar24 = puVar3[-5];
          uVar23 = puVar3[-6];
          puVar2[5] = puVar3[-4];
          puVar2[4] = uVar24;
          puVar2[3] = uVar23;
          uVar24 = puVar4[-5];
          uVar23 = puVar4[-6];
          puVar2[8] = puVar4[-4];
          puVar2[7] = uVar24;
          puVar2[6] = uVar23;
          uVar24 = puVar1[4];
          uVar23 = puVar1[3];
          puVar2[0xb] = puVar1[5];
          puVar2[10] = uVar24;
          puVar2[9] = uVar23;
          puVar2 = (undefined8 *)((long)puVar2 + param_4);
          uVar24 = puVar17[7];
          uVar23 = puVar17[6];
          puVar2[2] = puVar17[8];
          puVar2[1] = uVar24;
          *puVar2 = uVar23;
          uVar24 = puVar3[-2];
          uVar23 = puVar3[-3];
          puVar2[5] = puVar3[-1];
          puVar2[4] = uVar24;
          puVar2[3] = uVar23;
          uVar24 = puVar4[-2];
          uVar23 = puVar4[-3];
          puVar2[8] = puVar4[-1];
          puVar2[7] = uVar24;
          puVar2[6] = uVar23;
          uVar24 = puVar1[7];
          uVar23 = puVar1[6];
          puVar2[0xb] = puVar1[8];
          puVar2[10] = uVar24;
          puVar2[9] = uVar23;
          puVar2 = (undefined8 *)((long)puVar2 + param_4);
          uVar24 = puVar17[10];
          uVar23 = puVar17[9];
          puVar2[2] = puVar17[0xb];
          puVar2[1] = uVar24;
          *puVar2 = uVar23;
          uVar24 = puVar3[1];
          uVar23 = *puVar3;
          puVar2[5] = puVar3[2];
          puVar2[4] = uVar24;
          puVar2[3] = uVar23;
          uVar24 = puVar4[1];
          uVar23 = *puVar4;
          puVar2[8] = puVar4[2];
          puVar2[7] = uVar24;
          puVar2[6] = uVar23;
          uVar24 = puVar1[10];
          uVar23 = puVar1[9];
          puVar2[0xb] = puVar1[0xb];
          puVar2[10] = uVar24;
          puVar2[9] = uVar23;
          uVar13 = uVar13 + 4;
          puVar10 = puVar10 + 0xc;
          puVar17 = (undefined8 *)((long)puVar17 + param_2 * 4);
        } while ((long)uVar13 <= (long)(int)uVar6 + -4);
        uVar13 = uVar13 & 0xffffffff;
      }
      if ((int)uVar13 < (int)uVar6) {
        lVar16 = uVar6 - uVar13;
        lVar18 = uVar13 * 0x18;
        lVar19 = param_2 * uVar13;
        puVar10 = puVar9;
        lVar20 = lVar8;
        lVar21 = lVar15;
        lVar22 = lVar11;
        do {
          puVar17 = (undefined8 *)((long)puVar7 + lVar19);
          puVar3 = puVar10 + uVar13 * 3;
          uVar24 = puVar17[1];
          uVar23 = *puVar17;
          puVar3[2] = puVar17[2];
          puVar3[1] = uVar24;
          *puVar3 = uVar23;
          puVar3 = (undefined8 *)(lVar20 + lVar18);
          uVar24 = puVar17[4];
          uVar23 = puVar17[3];
          puVar3[2] = puVar17[5];
          puVar3[1] = uVar24;
          *puVar3 = uVar23;
          puVar3 = (undefined8 *)(lVar21 + lVar18);
          uVar24 = puVar17[7];
          uVar23 = puVar17[6];
          puVar3[2] = puVar17[8];
          puVar3[1] = uVar24;
          *puVar3 = uVar23;
          puVar3 = (undefined8 *)(lVar22 + lVar18);
          uVar24 = puVar17[10];
          uVar23 = puVar17[9];
          lVar22 = lVar22 + 0x18;
          lVar21 = lVar21 + 0x18;
          puVar3[2] = puVar17[0xb];
          puVar3[1] = uVar24;
          *puVar3 = uVar23;
          lVar20 = lVar20 + 0x18;
          puVar10 = puVar10 + 3;
          lVar19 = lVar19 + param_2;
          lVar16 = lVar16 + -1;
        } while (lVar16 != 0);
      }
      uVar12 = uVar12 + 4;
      puVar9 = (undefined8 *)((long)puVar9 + lVar14);
      puVar7 = puVar7 + 0xc;
      lVar11 = lVar11 + lVar14;
      lVar15 = lVar15 + lVar14;
      lVar8 = lVar8 + lVar14;
    } while (uVar12 <= uVar5 - 4);
  }
  if ((int)uVar12 < (int)uVar5) {
    uVar13 = uVar12 & 0xffffffff;
    param_1 = param_1 + (uVar12 & 0xffffffff) * 3;
    param_3 = (undefined8 *)((long)param_3 + param_4 * uVar13);
    puVar7 = param_3 + 6;
    do {
      if ((int)uVar6 < 4) {
        uVar12 = 0;
      }
      else {
        uVar12 = 0;
        puVar9 = puVar7;
        puVar10 = param_1;
        do {
          puVar17 = (undefined8 *)((long)puVar10 + param_2);
          puVar3 = (undefined8 *)((long)puVar10 + param_2 * 2);
          puVar4 = (undefined8 *)((long)puVar10 + param_2 * 3);
          uVar24 = puVar10[1];
          uVar23 = *puVar10;
          puVar9[-4] = puVar10[2];
          puVar9[-5] = uVar24;
          puVar9[-6] = uVar23;
          uVar24 = puVar17[1];
          uVar23 = *puVar17;
          puVar9[-1] = puVar17[2];
          puVar9[-2] = uVar24;
          puVar9[-3] = uVar23;
          uVar24 = puVar3[1];
          uVar23 = *puVar3;
          puVar9[2] = puVar3[2];
          puVar9[1] = uVar24;
          *puVar9 = uVar23;
          uVar24 = puVar4[1];
          uVar23 = *puVar4;
          puVar9[5] = puVar4[2];
          puVar9[4] = uVar24;
          puVar9[3] = uVar23;
          uVar12 = uVar12 + 4;
          puVar10 = (undefined8 *)((long)puVar10 + param_2 * 4);
          puVar9 = puVar9 + 0xc;
        } while ((long)uVar12 <= (long)(int)uVar6 + -4);
        uVar12 = uVar12 & 0xffffffff;
      }
      if ((int)uVar12 < (int)uVar6) {
        lVar8 = uVar6 - uVar12;
        lVar11 = param_2 * uVar12;
        puVar9 = param_3 + uVar12 * 3;
        do {
          puVar10 = (undefined8 *)((long)param_1 + lVar11);
          uVar24 = puVar10[1];
          uVar23 = *puVar10;
          puVar9[2] = puVar10[2];
          puVar9[1] = uVar24;
          *puVar9 = uVar23;
          lVar11 = lVar11 + param_2;
          lVar8 = lVar8 + -1;
          puVar9 = puVar9 + 3;
        } while (lVar8 != 0);
      }
      uVar13 = uVar13 + 1;
      param_1 = param_1 + 3;
      puVar7 = (undefined8 *)((long)puVar7 + param_4);
      param_3 = (undefined8 *)((long)param_3 + param_4);
    } while (uVar13 != uVar5);
  }
  return;
}



/* Entry: 109a9e450; end: 109a9e70b;  */

void FUN_109a9e450(undefined8 *param_1,long param_2,undefined8 *param_3,long param_4,uint *param_5)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  uint uVar5;
  uint uVar6;
  undefined8 *puVar7;
  long lVar8;
  undefined8 *puVar9;
  ulong uVar10;
  undefined8 *puVar11;
  long lVar12;
  ulong uVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  undefined8 *puVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  long lVar21;
  long lVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  
  uVar5 = *param_5;
  uVar6 = param_5[1];
  if ((int)uVar5 < 4) {
    uVar13 = 0;
  }
  else {
    uVar13 = 0;
    lVar14 = param_4 * 4;
    lVar12 = (long)param_3 + param_4 * 3;
    lVar8 = (long)param_3 + param_4;
    lVar15 = (long)param_3 + param_4 * 2;
    puVar7 = param_1;
    puVar9 = param_3;
    do {
      if ((int)uVar6 < 4) {
        uVar10 = 0;
      }
      else {
        uVar10 = 0;
        puVar17 = puVar7;
        puVar11 = puVar9;
        do {
          puVar3 = (undefined8 *)((long)puVar17 + param_2 + 0x60);
          puVar4 = (undefined8 *)((long)puVar17 + param_2 * 2 + 0x60);
          puVar1 = (undefined8 *)((long)puVar17 + param_2 * 3);
          uVar23 = *puVar17;
          uVar25 = puVar17[3];
          uVar24 = puVar17[2];
          puVar11[1] = puVar17[1];
          *puVar11 = uVar23;
          puVar11[3] = uVar25;
          puVar11[2] = uVar24;
          uVar23 = puVar3[-0xc];
          uVar25 = puVar3[-9];
          uVar24 = puVar3[-10];
          puVar11[5] = puVar3[-0xb];
          puVar11[4] = uVar23;
          puVar11[7] = uVar25;
          puVar11[6] = uVar24;
          uVar23 = puVar4[-0xc];
          uVar25 = puVar4[-9];
          uVar24 = puVar4[-10];
          puVar11[9] = puVar4[-0xb];
          puVar11[8] = uVar23;
          puVar11[0xb] = uVar25;
          puVar11[10] = uVar24;
          uVar23 = *puVar1;
          uVar25 = puVar1[3];
          uVar24 = puVar1[2];
          puVar11[0xd] = puVar1[1];
          puVar11[0xc] = uVar23;
          puVar11[0xf] = uVar25;
          puVar11[0xe] = uVar24;
          puVar2 = (undefined8 *)((long)puVar11 + param_4);
          uVar23 = puVar17[4];
          uVar25 = puVar17[7];
          uVar24 = puVar17[6];
          puVar2[1] = puVar17[5];
          *puVar2 = uVar23;
          puVar2[3] = uVar25;
          puVar2[2] = uVar24;
          uVar23 = puVar3[-8];
          uVar25 = puVar3[-5];
          uVar24 = puVar3[-6];
          puVar2[5] = puVar3[-7];
          puVar2[4] = uVar23;
          puVar2[7] = uVar25;
          puVar2[6] = uVar24;
          uVar23 = puVar4[-8];
          uVar25 = puVar4[-5];
          uVar24 = puVar4[-6];
          puVar2[9] = puVar4[-7];
          puVar2[8] = uVar23;
          puVar2[0xb] = uVar25;
          puVar2[10] = uVar24;
          uVar23 = puVar1[4];
          uVar25 = puVar1[7];
          uVar24 = puVar1[6];
          puVar2[0xd] = puVar1[5];
          puVar2[0xc] = uVar23;
          puVar2[0xf] = uVar25;
          puVar2[0xe] = uVar24;
          puVar2 = (undefined8 *)((long)puVar2 + param_4);
          uVar23 = puVar17[8];
          uVar25 = puVar17[0xb];
          uVar24 = puVar17[10];
          puVar2[1] = puVar17[9];
          *puVar2 = uVar23;
          puVar2[3] = uVar25;
          puVar2[2] = uVar24;
          uVar23 = puVar3[-4];
          uVar25 = puVar3[-1];
          uVar24 = puVar3[-2];
          puVar2[5] = puVar3[-3];
          puVar2[4] = uVar23;
          puVar2[7] = uVar25;
          puVar2[6] = uVar24;
          uVar23 = puVar4[-4];
          uVar25 = puVar4[-1];
          uVar24 = puVar4[-2];
          puVar2[9] = puVar4[-3];
          puVar2[8] = uVar23;
          puVar2[0xb] = uVar25;
          puVar2[10] = uVar24;
          uVar23 = puVar1[8];
          uVar25 = puVar1[0xb];
          uVar24 = puVar1[10];
          puVar2[0xd] = puVar1[9];
          puVar2[0xc] = uVar23;
          puVar2[0xf] = uVar25;
          puVar2[0xe] = uVar24;
          puVar2 = (undefined8 *)((long)puVar2 + param_4);
          uVar23 = puVar17[0xc];
          uVar25 = puVar17[0xf];
          uVar24 = puVar17[0xe];
          puVar2[1] = puVar17[0xd];
          *puVar2 = uVar23;
          puVar2[3] = uVar25;
          puVar2[2] = uVar24;
          uVar23 = *puVar3;
          uVar25 = puVar3[3];
          uVar24 = puVar3[2];
          puVar2[5] = puVar3[1];
          puVar2[4] = uVar23;
          puVar2[7] = uVar25;
          puVar2[6] = uVar24;
          uVar23 = *puVar4;
          uVar25 = puVar4[3];
          uVar24 = puVar4[2];
          puVar2[9] = puVar4[1];
          puVar2[8] = uVar23;
          puVar2[0xb] = uVar25;
          puVar2[10] = uVar24;
          uVar23 = puVar1[0xc];
          uVar25 = puVar1[0xf];
          uVar24 = puVar1[0xe];
          puVar2[0xd] = puVar1[0xd];
          puVar2[0xc] = uVar23;
          puVar2[0xf] = uVar25;
          puVar2[0xe] = uVar24;
          uVar10 = uVar10 + 4;
          puVar11 = puVar11 + 0x10;
          puVar17 = (undefined8 *)((long)puVar17 + param_2 * 4);
        } while ((long)uVar10 <= (long)(int)uVar6 + -4);
        uVar10 = uVar10 & 0xffffffff;
      }
      if ((int)uVar10 < (int)uVar6) {
        lVar16 = uVar6 - uVar10;
        lVar18 = uVar10 * 0x20;
        lVar19 = param_2 * uVar10;
        puVar11 = puVar9;
        lVar20 = lVar8;
        lVar21 = lVar15;
        lVar22 = lVar12;
        do {
          puVar17 = (undefined8 *)((long)puVar7 + lVar19);
          puVar3 = puVar11 + uVar10 * 4;
          uVar23 = *puVar17;
          uVar25 = puVar17[3];
          uVar24 = puVar17[2];
          puVar3[1] = puVar17[1];
          *puVar3 = uVar23;
          puVar3[3] = uVar25;
          puVar3[2] = uVar24;
          puVar3 = (undefined8 *)(lVar20 + lVar18);
          uVar23 = puVar17[4];
          uVar25 = puVar17[7];
          uVar24 = puVar17[6];
          puVar3[1] = puVar17[5];
          *puVar3 = uVar23;
          puVar3[3] = uVar25;
          puVar3[2] = uVar24;
          puVar3 = (undefined8 *)(lVar21 + lVar18);
          uVar23 = puVar17[8];
          uVar25 = puVar17[0xb];
          uVar24 = puVar17[10];
          puVar3[1] = puVar17[9];
          *puVar3 = uVar23;
          puVar3[3] = uVar25;
          puVar3[2] = uVar24;
          puVar3 = (undefined8 *)(lVar22 + lVar18);
          uVar23 = puVar17[0xc];
          uVar25 = puVar17[0xf];
          uVar24 = puVar17[0xe];
          lVar22 = lVar22 + 0x20;
          lVar21 = lVar21 + 0x20;
          puVar3[1] = puVar17[0xd];
          *puVar3 = uVar23;
          puVar3[3] = uVar25;
          puVar3[2] = uVar24;
          lVar20 = lVar20 + 0x20;
          puVar11 = puVar11 + 4;
          lVar19 = lVar19 + param_2;
          lVar16 = lVar16 + -1;
        } while (lVar16 != 0);
      }
      uVar13 = uVar13 + 4;
      puVar9 = (undefined8 *)((long)puVar9 + lVar14);
      puVar7 = puVar7 + 0x10;
      lVar12 = lVar12 + lVar14;
      lVar15 = lVar15 + lVar14;
      lVar8 = lVar8 + lVar14;
    } while (uVar13 <= uVar5 - 4);
  }
  if ((int)uVar13 < (int)uVar5) {
    uVar13 = uVar13 & 0xffffffff;
    param_1 = param_1 + uVar13 * 4;
    param_3 = (undefined8 *)((long)param_3 + param_4 * uVar13);
    puVar7 = param_3 + 8;
    do {
      if ((int)uVar6 < 4) {
        uVar10 = 0;
      }
      else {
        uVar10 = 0;
        puVar9 = puVar7;
        puVar11 = param_1;
        do {
          puVar17 = (undefined8 *)((long)puVar11 + param_2);
          puVar3 = (undefined8 *)((long)puVar11 + param_2 * 2);
          puVar4 = (undefined8 *)((long)puVar11 + param_2 * 3);
          uVar23 = *puVar11;
          uVar25 = puVar11[3];
          uVar24 = puVar11[2];
          puVar9[-7] = puVar11[1];
          puVar9[-8] = uVar23;
          puVar9[-5] = uVar25;
          puVar9[-6] = uVar24;
          uVar23 = *puVar17;
          uVar25 = puVar17[3];
          uVar24 = puVar17[2];
          puVar9[-3] = puVar17[1];
          puVar9[-4] = uVar23;
          puVar9[-1] = uVar25;
          puVar9[-2] = uVar24;
          uVar23 = *puVar3;
          uVar25 = puVar3[3];
          uVar24 = puVar3[2];
          puVar9[1] = puVar3[1];
          *puVar9 = uVar23;
          puVar9[3] = uVar25;
          puVar9[2] = uVar24;
          uVar23 = *puVar4;
          uVar25 = puVar4[3];
          uVar24 = puVar4[2];
          puVar9[5] = puVar4[1];
          puVar9[4] = uVar23;
          puVar9[7] = uVar25;
          puVar9[6] = uVar24;
          uVar10 = uVar10 + 4;
          puVar11 = (undefined8 *)((long)puVar11 + param_2 * 4);
          puVar9 = puVar9 + 0x10;
        } while ((long)uVar10 <= (long)(int)uVar6 + -4);
        uVar10 = uVar10 & 0xffffffff;
      }
      if ((int)uVar10 < (int)uVar6) {
        lVar8 = uVar6 - uVar10;
        lVar12 = param_2 * uVar10;
        puVar9 = param_3 + uVar10 * 4;
        do {
          puVar11 = (undefined8 *)((long)param_1 + lVar12);
          uVar23 = *puVar11;
          uVar25 = puVar11[3];
          uVar24 = puVar11[2];
          puVar9[1] = puVar11[1];
          *puVar9 = uVar23;
          puVar9[3] = uVar25;
          puVar9[2] = uVar24;
          lVar12 = lVar12 + param_2;
          lVar8 = lVar8 + -1;
          puVar9 = puVar9 + 4;
        } while (lVar8 != 0);
      }
      uVar13 = uVar13 + 1;
      param_1 = param_1 + 4;
      puVar7 = (undefined8 *)((long)puVar7 + param_4);
      param_3 = (undefined8 *)((long)param_3 + param_4);
    } while (uVar13 != uVar5);
  }
  return;
}



/* Entry: 109a9e70c; end: 109a9f14f;  */

void FUN_109a9e70c(uint *param_1,uint *param_2,long *param_3,long param_4,uint param_5)

{
  byte *pbVar1;
  byte *pbVar2;
  ulong uVar3;
  bool bVar4;
  byte bVar5;
  uint *puVar6;
  uint *puVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  byte bVar11;
  uint *puVar12;
  uint uVar13;
  uint uVar14;
  uint *puVar15;
  long lVar16;
  ulong uVar17;
  uint uVar18;
  uint uVar19;
  long lVar20;
  long lVar21;
  long lVar22;
  ulong uVar23;
  ulong uVar24;
  uint uVar25;
  uint *puVar26;
  
LAB_109a9e73c:
  do {
    puVar12 = param_1;
    uVar10 = (long)param_2 - (long)puVar12 >> 2;
    if (uVar10 - 2 == 0 || (long)uVar10 < 2) {
      if (uVar10 < 2) {
        return;
      }
      if (uVar10 == 2) {
        uVar18 = *puVar12;
        if (*(byte *)(*param_3 + (long)(int)uVar18) <= *(byte *)(*param_3 + (long)(int)param_2[-1]))
        {
          return;
        }
        *puVar12 = param_2[-1];
        param_2[-1] = uVar18;
        return;
      }
    }
    else {
      if (uVar10 == 3) {
        uVar18 = *puVar12;
        uVar19 = puVar12[1];
        lVar8 = *param_3;
        bVar11 = *(byte *)(lVar8 + (int)uVar19);
        uVar25 = param_2[-1];
        if (bVar11 < *(byte *)(lVar8 + (int)uVar18)) {
          if (*(byte *)(lVar8 + (int)uVar25) < bVar11) {
            *puVar12 = uVar25;
          }
          else {
            *puVar12 = uVar19;
            puVar12[1] = uVar18;
            if (*(byte *)(lVar8 + (int)uVar18) <= *(byte *)(lVar8 + (int)param_2[-1])) {
              return;
            }
            puVar12[1] = param_2[-1];
          }
          param_2[-1] = uVar18;
          return;
        }
        if (bVar11 <= *(byte *)(lVar8 + (int)uVar25)) {
          return;
        }
        puVar12[1] = uVar25;
        param_2[-1] = uVar19;
        uVar18 = *puVar12;
        if (*(byte *)(lVar8 + (int)uVar18) <= *(byte *)(lVar8 + (int)puVar12[1])) {
          return;
        }
        *puVar12 = puVar12[1];
        puVar12[1] = uVar18;
        return;
      }
      if (uVar10 == 4) {
        puVar7 = puVar12 + 1;
        uVar19 = *puVar7;
        puVar15 = puVar12 + 2;
        uVar25 = *puVar15;
        uVar18 = *puVar12;
        lVar22 = *param_3;
        bVar11 = *(byte *)(lVar22 + (int)uVar19);
        lVar20 = (long)(int)uVar18;
        lVar8 = (long)(int)uVar25;
        puVar6 = puVar12;
        uVar14 = uVar25;
        if (bVar11 < *(byte *)(lVar22 + (int)uVar18)) {
          puVar26 = puVar15;
          uVar13 = uVar18;
          if (bVar11 <= *(byte *)(lVar22 + (int)uVar25)) {
            *puVar12 = uVar19;
            puVar12[1] = uVar18;
            puVar6 = puVar7;
            if (*(byte *)(lVar22 + lVar20) <= *(byte *)(lVar22 + lVar8)) goto LAB_109a9f0e8;
          }
        }
        else {
          if (bVar11 <= *(byte *)(lVar22 + (int)uVar25)) goto LAB_109a9f0e8;
          *puVar7 = uVar25;
          *puVar15 = uVar19;
          pbVar1 = (byte *)(lVar22 + lVar8);
          pbVar2 = (byte *)(lVar22 + lVar20);
          lVar20 = (long)(int)uVar19;
          lVar8 = lVar20;
          puVar26 = puVar7;
          uVar13 = uVar19;
          uVar14 = uVar19;
          if (*pbVar2 <= *pbVar1) goto LAB_109a9f0e8;
        }
        *puVar6 = uVar25;
        *puVar26 = uVar18;
        lVar8 = lVar20;
        uVar14 = uVar13;
LAB_109a9f0e8:
        if (*(byte *)(lVar22 + lVar8) <= *(byte *)(lVar22 + (int)param_2[-1])) {
          return;
        }
        *puVar15 = param_2[-1];
        param_2[-1] = uVar14;
        uVar18 = *puVar15;
        uVar19 = *puVar7;
        if (*(byte *)(lVar22 + (int)uVar19) <= *(byte *)(lVar22 + (int)uVar18)) {
          return;
        }
        puVar12[1] = uVar18;
        puVar12[2] = uVar19;
        uVar19 = *puVar12;
        if (*(byte *)(lVar22 + (int)uVar19) <= *(byte *)(lVar22 + (int)uVar18)) {
          return;
        }
        *puVar12 = uVar18;
        puVar12[1] = uVar19;
        return;
      }
      if (uVar10 == 5) {
        lVar8 = *param_3;
        puVar6 = puVar12 + 1;
        puVar7 = puVar12 + 2;
        puVar15 = puVar12 + 3;
        uVar18 = *puVar6;
        uVar19 = *puVar12;
        bVar11 = *(byte *)(lVar8 + (int)uVar18);
        uVar25 = *puVar7;
        if (bVar11 < *(byte *)(lVar8 + (int)uVar19)) {
          lVar22 = (long)(int)uVar19;
          if (*(byte *)(lVar8 + (int)uVar25) < bVar11) {
            *puVar12 = uVar25;
          }
          else {
            *puVar12 = uVar18;
            *puVar6 = uVar19;
            uVar25 = *puVar7;
            if (*(byte *)(lVar8 + lVar22) <= *(byte *)(lVar8 + (int)uVar25)) goto LAB_109a9f1f0;
            *puVar6 = uVar25;
          }
          *puVar7 = uVar19;
          uVar25 = uVar19;
        }
        else {
          if (bVar11 <= *(byte *)(lVar8 + (int)uVar25)) {
            lVar22 = (long)(int)uVar25;
            goto LAB_109a9f200;
          }
          *puVar6 = uVar25;
          *puVar7 = uVar18;
          uVar19 = *puVar12;
          if (*(byte *)(lVar8 + (int)uVar19) <= *(byte *)(lVar8 + (int)*puVar6)) {
            lVar22 = (long)(int)uVar18;
            uVar25 = uVar18;
            goto LAB_109a9f200;
          }
          *puVar12 = *puVar6;
          *puVar6 = uVar19;
          uVar25 = *puVar7;
LAB_109a9f1f0:
          lVar22 = (long)(int)uVar25;
        }
LAB_109a9f200:
        if (*(byte *)(lVar8 + (int)*puVar15) < *(byte *)(lVar8 + lVar22)) {
          *puVar7 = *puVar15;
          *puVar15 = uVar25;
          uVar18 = *puVar6;
          if (*(byte *)(lVar8 + (int)*puVar7) < *(byte *)(lVar8 + (int)uVar18)) {
            *puVar6 = *puVar7;
            *puVar7 = uVar18;
            uVar18 = *puVar12;
            if (*(byte *)(lVar8 + (int)*puVar6) < *(byte *)(lVar8 + (int)uVar18)) {
              *puVar12 = *puVar6;
              *puVar6 = uVar18;
            }
          }
        }
        uVar18 = param_2[-1];
        uVar19 = *puVar15;
        if (*(byte *)(lVar8 + (int)uVar18) < *(byte *)(lVar8 + (int)uVar19)) {
          *puVar15 = uVar18;
          param_2[-1] = uVar19;
          uVar18 = *puVar7;
          if (*(byte *)(lVar8 + (int)*puVar15) < *(byte *)(lVar8 + (int)uVar18)) {
            *puVar7 = *puVar15;
            *puVar15 = uVar18;
            uVar18 = *puVar6;
            if (*(byte *)(lVar8 + (int)*puVar7) < *(byte *)(lVar8 + (int)uVar18)) {
              *puVar6 = *puVar7;
              *puVar7 = uVar18;
              uVar18 = *puVar12;
              if (*(byte *)(lVar8 + (int)*puVar6) < *(byte *)(lVar8 + (int)uVar18)) {
                *puVar12 = *puVar6;
                *puVar6 = uVar18;
              }
            }
          }
        }
        return;
      }
    }
    if ((long)uVar10 < 0x18) {
      lVar8 = *param_3;
      puVar6 = puVar12 + 1;
      if ((param_5 & 1) == 0) {
        if (puVar12 == param_2 || puVar6 == param_2) {
          return;
        }
        do {
          puVar7 = puVar6;
          uVar18 = puVar12[1];
          lVar22 = (long)(int)*puVar12;
          puVar12 = puVar7;
          if (*(byte *)(lVar8 + (int)uVar18) < *(byte *)(lVar8 + lVar22)) {
            do {
              *puVar12 = (uint)lVar22;
              lVar22 = (long)(int)puVar12[-2];
              puVar12 = puVar12 + -1;
            } while (*(byte *)(lVar8 + (int)uVar18) < *(byte *)(lVar8 + lVar22));
            *puVar12 = uVar18;
          }
          puVar6 = puVar7 + 1;
          puVar12 = puVar7;
        } while (puVar7 + 1 != param_2);
        return;
      }
      if (puVar12 == param_2 || puVar6 == param_2) {
        return;
      }
      lVar22 = 0;
      puVar7 = puVar12;
      do {
        uVar18 = puVar7[1];
        lVar21 = (long)(int)*puVar7;
        lVar20 = lVar22;
        if (*(byte *)(lVar8 + (int)uVar18) < *(byte *)(lVar8 + lVar21)) {
          do {
            lVar16 = lVar20;
            *(int *)((long)puVar12 + lVar16 + 4) = (int)lVar21;
            puVar7 = puVar12;
            if (lVar16 == 0) goto LAB_109a9edc0;
            lVar21 = (long)*(int *)((long)puVar12 + lVar16 + -4);
            lVar20 = lVar16 + -4;
          } while (*(byte *)(lVar8 + (int)uVar18) < *(byte *)(lVar8 + lVar21));
          puVar7 = (uint *)((long)puVar12 + lVar16);
LAB_109a9edc0:
          *puVar7 = uVar18;
        }
        puVar15 = puVar6 + 1;
        lVar22 = lVar22 + 4;
        puVar7 = puVar6;
        puVar6 = puVar15;
        if (puVar15 == param_2) {
          return;
        }
      } while( true );
    }
    if (param_4 == 0) {
      if (puVar12 == param_2) {
        return;
      }
      uVar9 = uVar10 - 2 >> 1;
      lVar8 = *param_3;
      uVar17 = uVar9;
      do {
        if ((long)uVar17 <= (long)uVar9) {
          uVar24 = uVar17 << 1 | 1;
          puVar6 = puVar12 + uVar24;
          uVar3 = uVar17 * 2 + 2;
          uVar18 = *puVar6;
          puVar7 = puVar6;
          uVar23 = uVar24;
          uVar19 = uVar18;
          if ((long)uVar3 < (long)uVar10) {
            uVar19 = puVar6[1];
            puVar7 = puVar6 + 1;
            uVar23 = uVar3;
            if (*(byte *)(lVar8 + (int)uVar19) <= *(byte *)(lVar8 + (int)uVar18)) {
              puVar7 = puVar6;
              uVar23 = uVar24;
              uVar19 = uVar18;
            }
          }
          uVar18 = puVar12[uVar17];
          puVar6 = puVar12 + uVar17;
          if (*(byte *)(lVar8 + (int)uVar18) <= *(byte *)(lVar8 + (int)uVar19)) {
            do {
              puVar15 = puVar7;
              *puVar6 = uVar19;
              if ((long)uVar9 < (long)uVar23) break;
              uVar24 = uVar23 << 1 | 1;
              puVar6 = puVar12 + uVar24;
              uVar3 = uVar23 * 2 + 2;
              uVar25 = *puVar6;
              puVar7 = puVar6;
              uVar23 = uVar24;
              uVar19 = uVar25;
              if ((long)uVar3 < (long)uVar10) {
                uVar19 = puVar6[1];
                puVar7 = puVar6 + 1;
                uVar23 = uVar3;
                if (*(byte *)(lVar8 + (int)uVar19) <= *(byte *)(lVar8 + (int)uVar25)) {
                  puVar7 = puVar6;
                  uVar23 = uVar24;
                  uVar19 = uVar25;
                }
              }
              puVar6 = puVar15;
            } while (*(byte *)(lVar8 + (int)uVar18) <= *(byte *)(lVar8 + (int)uVar19));
            *puVar15 = uVar18;
            lVar8 = *param_3;
          }
        }
        bVar4 = uVar17 != 0;
        uVar17 = uVar17 - 1;
      } while (bVar4);
      do {
        uVar18 = *puVar12;
        lVar8 = *param_3;
        puVar6 = puVar12;
        uVar17 = 0;
        do {
          puVar15 = puVar6 + uVar17 + 1;
          uVar19 = *puVar15;
          uVar3 = uVar17 << 1 | 1;
          uVar9 = uVar17 * 2 + 2;
          puVar7 = puVar15;
          uVar24 = uVar3;
          uVar25 = uVar19;
          if ((long)uVar9 < (long)uVar10) {
            uVar25 = puVar6[uVar17 + 2];
            puVar7 = puVar6 + uVar17 + 2;
            uVar24 = uVar9;
            if (*(byte *)(lVar8 + (int)uVar25) <= *(byte *)(lVar8 + (int)uVar19)) {
              puVar7 = puVar15;
              uVar24 = uVar3;
              uVar25 = uVar19;
            }
          }
          *puVar6 = uVar25;
          puVar6 = puVar7;
          uVar17 = uVar24;
        } while ((long)uVar24 <= (long)(uVar10 - 2 >> 1));
        param_2 = param_2 + -1;
        if (puVar7 == param_2) {
          *puVar7 = uVar18;
        }
        else {
          *puVar7 = *param_2;
          *param_2 = uVar18;
          lVar8 = (long)puVar7 + (4 - (long)puVar12) >> 2;
          if (1 < lVar8) {
            lVar22 = *param_3;
            uVar17 = lVar8 - 2U >> 1;
            lVar8 = (long)(int)puVar12[uVar17];
            uVar18 = *puVar7;
            puVar6 = puVar12 + uVar17;
            if (*(byte *)(lVar22 + lVar8) < *(byte *)(lVar22 + (int)uVar18)) {
              do {
                puVar15 = puVar6;
                *puVar7 = (uint)lVar8;
                if (uVar17 == 0) break;
                uVar17 = uVar17 - 1 >> 1;
                lVar8 = (long)(int)puVar12[uVar17];
                puVar7 = puVar15;
                puVar6 = puVar12 + uVar17;
              } while (*(byte *)(lVar22 + lVar8) < *(byte *)(lVar22 + (int)uVar18));
              *puVar15 = uVar18;
            }
          }
        }
        bVar4 = (long)uVar10 < 3;
        uVar10 = uVar10 - 1;
        if (bVar4) {
          return;
        }
      } while( true );
    }
    puVar6 = puVar12 + (uVar10 >> 1);
    lVar8 = *param_3;
    uVar18 = param_2[-1];
    bVar11 = *(byte *)(lVar8 + (int)uVar18);
    if (uVar10 < 0x81) {
      uVar25 = *puVar12;
      uVar19 = *puVar6;
      bVar5 = *(byte *)(lVar8 + (int)uVar25);
      if (bVar5 < *(byte *)(lVar8 + (int)uVar19)) {
        if (bVar11 < bVar5) {
          *puVar6 = uVar18;
        }
        else {
          *puVar6 = uVar25;
          *puVar12 = uVar19;
          if (*(byte *)(lVar8 + (int)uVar19) <= *(byte *)(lVar8 + (int)param_2[-1]))
          goto LAB_109a9ea40;
          *puVar12 = param_2[-1];
        }
        param_2[-1] = uVar19;
      }
      else if (bVar11 < bVar5) {
        *puVar12 = uVar18;
        param_2[-1] = uVar25;
        uVar18 = *puVar6;
        if (*(byte *)(lVar8 + (int)*puVar12) < *(byte *)(lVar8 + (int)uVar18)) {
          *puVar6 = *puVar12;
          *puVar12 = uVar18;
        }
      }
    }
    else {
      uVar25 = *puVar6;
      uVar19 = *puVar12;
      bVar5 = *(byte *)(lVar8 + (int)uVar25);
      if (bVar5 < *(byte *)(lVar8 + (int)uVar19)) {
        if (bVar11 < bVar5) {
          *puVar12 = uVar18;
        }
        else {
          *puVar12 = uVar25;
          *puVar6 = uVar19;
          if (*(byte *)(lVar8 + (int)uVar19) <= *(byte *)(lVar8 + (int)param_2[-1]))
          goto LAB_109a9e87c;
          *puVar6 = param_2[-1];
        }
        param_2[-1] = uVar19;
      }
      else if (bVar11 < bVar5) {
        *puVar6 = uVar18;
        param_2[-1] = uVar25;
        uVar18 = *puVar12;
        if (*(byte *)(lVar8 + (int)*puVar6) < *(byte *)(lVar8 + (int)uVar18)) {
          *puVar12 = *puVar6;
          *puVar6 = uVar18;
        }
      }
LAB_109a9e87c:
      puVar7 = puVar6 + -1;
      uVar19 = *puVar7;
      uVar18 = puVar12[1];
      bVar11 = *(byte *)(lVar8 + (int)uVar19);
      uVar25 = param_2[-2];
      if (bVar11 < *(byte *)(lVar8 + (int)uVar18)) {
        if (*(byte *)(lVar8 + (int)uVar25) < bVar11) {
          puVar12[1] = uVar25;
        }
        else {
          puVar12[1] = uVar19;
          *puVar7 = uVar18;
          if (*(byte *)(lVar8 + (int)uVar18) <= *(byte *)(lVar8 + (int)param_2[-2]))
          goto LAB_109a9e930;
          *puVar7 = param_2[-2];
        }
        param_2[-2] = uVar18;
      }
      else if (*(byte *)(lVar8 + (int)uVar25) < bVar11) {
        *puVar7 = uVar25;
        param_2[-2] = uVar19;
        uVar18 = puVar12[1];
        if (*(byte *)(lVar8 + (int)*puVar7) < *(byte *)(lVar8 + (int)uVar18)) {
          puVar12[1] = *puVar7;
          *puVar7 = uVar18;
        }
      }
LAB_109a9e930:
      puVar15 = puVar6 + 1;
      uVar19 = *puVar15;
      uVar18 = puVar12[2];
      bVar11 = *(byte *)(lVar8 + (int)uVar19);
      uVar25 = param_2[-3];
      if (bVar11 < *(byte *)(lVar8 + (int)uVar18)) {
        if (*(byte *)(lVar8 + (int)uVar25) < bVar11) {
          puVar12[2] = uVar25;
        }
        else {
          puVar12[2] = uVar19;
          *puVar15 = uVar18;
          if (*(byte *)(lVar8 + (int)uVar18) <= *(byte *)(lVar8 + (int)param_2[-3]))
          goto LAB_109a9e9bc;
          *puVar15 = param_2[-3];
        }
        param_2[-3] = uVar18;
      }
      else if (*(byte *)(lVar8 + (int)uVar25) < bVar11) {
        *puVar15 = uVar25;
        param_2[-3] = uVar19;
        uVar18 = puVar12[2];
        if (*(byte *)(lVar8 + (int)*puVar15) < *(byte *)(lVar8 + (int)uVar18)) {
          puVar12[2] = *puVar15;
          *puVar15 = uVar18;
        }
      }
LAB_109a9e9bc:
      uVar18 = *puVar6;
      uVar19 = puVar6[1];
      uVar25 = puVar6[-1];
      bVar11 = *(byte *)(lVar8 + (int)uVar18);
      if (bVar11 < *(byte *)(lVar8 + (int)uVar25)) {
        uVar14 = uVar18;
        if (bVar11 <= *(byte *)(lVar8 + (int)uVar19)) {
          puVar6[-1] = uVar18;
          *puVar6 = uVar25;
          puVar7 = puVar6;
          uVar18 = uVar25;
          uVar14 = uVar19;
          if (*(byte *)(lVar8 + (int)uVar25) <= *(byte *)(lVar8 + (int)uVar19)) goto LAB_109a9ea34;
        }
LAB_109a9ea2c:
        *puVar7 = uVar19;
        *puVar15 = uVar25;
        uVar18 = uVar14;
      }
      else if (*(byte *)(lVar8 + (int)uVar19) < bVar11) {
        *puVar6 = uVar19;
        puVar6[1] = uVar18;
        puVar15 = puVar6;
        uVar18 = uVar19;
        uVar14 = uVar25;
        if (*(byte *)(lVar8 + (int)uVar19) < *(byte *)(lVar8 + (int)uVar25)) goto LAB_109a9ea2c;
      }
LAB_109a9ea34:
      uVar19 = *puVar12;
      *puVar12 = uVar18;
      *puVar6 = uVar19;
    }
LAB_109a9ea40:
    param_4 = param_4 + -1;
    uVar18 = *puVar12;
    param_1 = puVar12;
    if ((param_5 & 1) == 0) {
      bVar11 = *(byte *)(lVar8 + (int)uVar18);
      if (bVar11 <= *(byte *)(lVar8 + (int)puVar12[-1])) {
        if (bVar11 < *(byte *)(lVar8 + (int)param_2[-1])) {
          do {
            param_1 = param_1 + 1;
          } while (*(byte *)(lVar8 + (int)*param_1) <= bVar11);
        }
        else {
          do {
            param_1 = param_1 + 1;
            if (param_2 <= param_1) break;
          } while (*(byte *)(lVar8 + (int)*param_1) <= bVar11);
        }
        puVar6 = param_2;
        if (param_1 < param_2) {
          do {
            puVar6 = puVar6 + -1;
          } while (bVar11 < *(byte *)(lVar8 + (int)*puVar6));
        }
        if (param_1 < puVar6) {
          uVar10 = (ulong)*param_1;
          uVar17 = (ulong)*puVar6;
          do {
            *param_1 = (uint)uVar17;
            *puVar6 = (uint)uVar10;
            do {
              param_1 = param_1 + 1;
              uVar10 = (ulong)(int)*param_1;
            } while (*(byte *)(lVar8 + uVar10) <= *(byte *)(lVar8 + (int)uVar18));
            do {
              puVar6 = puVar6 + -1;
              uVar17 = (ulong)(int)*puVar6;
            } while (*(byte *)(lVar8 + (int)uVar18) < *(byte *)(lVar8 + uVar17));
          } while (param_1 < puVar6);
        }
        puVar6 = param_1 + -1;
        if (puVar6 != puVar12) {
          *puVar12 = *puVar6;
        }
        param_5 = 0;
        *puVar6 = uVar18;
        goto LAB_109a9e73c;
      }
    }
    else {
      bVar11 = *(byte *)(lVar8 + (int)uVar18);
    }
    lVar22 = 0;
    do {
      lVar20 = (long)*(int *)((long)puVar12 + lVar22 + 4);
      lVar22 = lVar22 + 4;
    } while (*(byte *)(lVar8 + lVar20) < bVar11);
    puVar6 = (uint *)((long)puVar12 + lVar22);
    puVar7 = param_2;
    if (lVar22 == 4) {
      do {
        if (puVar7 <= puVar6) break;
        puVar7 = puVar7 + -1;
      } while (bVar11 <= *(byte *)(lVar8 + (int)*puVar7));
    }
    else {
      do {
        puVar7 = puVar7 + -1;
      } while (bVar11 <= *(byte *)(lVar8 + (int)*puVar7));
    }
    param_1 = puVar6;
    if (puVar6 < puVar7) {
      uVar10 = (ulong)*puVar7;
      puVar15 = puVar7;
      do {
        *param_1 = (uint)uVar10;
        *puVar15 = (uint)lVar20;
        do {
          param_1 = param_1 + 1;
          lVar20 = (long)(int)*param_1;
        } while (*(byte *)(lVar8 + lVar20) < *(byte *)(lVar8 + (int)uVar18));
        do {
          puVar15 = puVar15 + -1;
          uVar10 = (ulong)(int)*puVar15;
        } while (*(byte *)(lVar8 + (int)uVar18) <= *(byte *)(lVar8 + uVar10));
      } while (param_1 < puVar15);
    }
    puVar15 = param_1 + -1;
    if (puVar15 != puVar12) {
      *puVar12 = *puVar15;
    }
    *puVar15 = uVar18;
    if (puVar6 < puVar7) {
LAB_109a9eb68:
      FUN_109a9e70c(puVar12,puVar15,param_3,param_4,param_5 & 1);
      param_5 = 0;
    }
    else {
      puVar6 = puVar12;
      FUN_109a9f2e0(puVar12,puVar15,*param_3);
      puVar7 = param_1;
      FUN_109a9f2e0(param_1,param_2,*param_3);
      if ((int)puVar7 == 0) {
        if (((ulong)puVar6 & 1) == 0) goto LAB_109a9eb68;
      }
      else {
        param_1 = puVar12;
        param_2 = puVar15;
        if (((ulong)puVar6 & 1) != 0) {
          return;
        }
      }
    }
  } while( true );
}



/* Entry: 109a9f150; end: 109a9f2df;  */

void FUN_109a9f150(int *param_1,int *param_2,int *param_3,int *param_4,int *param_5,long param_6)

{
  int iVar1;
  int iVar2;
  byte bVar3;
  long lVar4;
  int iVar5;
  
  iVar1 = *param_2;
  iVar2 = *param_1;
  bVar3 = *(byte *)(param_6 + iVar1);
  iVar5 = *param_3;
  if (bVar3 < *(byte *)(param_6 + iVar2)) {
    lVar4 = (long)iVar2;
    if (*(byte *)(param_6 + iVar5) < bVar3) {
      *param_1 = iVar5;
    }
    else {
      *param_1 = iVar1;
      *param_2 = iVar2;
      iVar5 = *param_3;
      if (*(byte *)(param_6 + lVar4) <= *(byte *)(param_6 + iVar5)) goto LAB_109a9f1f0;
      *param_2 = iVar5;
    }
    *param_3 = iVar2;
    iVar5 = iVar2;
  }
  else {
    if (bVar3 <= *(byte *)(param_6 + iVar5)) {
      lVar4 = (long)iVar5;
      goto LAB_109a9f200;
    }
    *param_2 = iVar5;
    *param_3 = iVar1;
    iVar2 = *param_1;
    if (*(byte *)(param_6 + iVar2) <= *(byte *)(param_6 + *param_2)) {
      lVar4 = (long)iVar1;
      iVar5 = iVar1;
      goto LAB_109a9f200;
    }
    *param_1 = *param_2;
    *param_2 = iVar2;
    iVar5 = *param_3;
LAB_109a9f1f0:
    lVar4 = (long)iVar5;
  }
LAB_109a9f200:
  if (*(byte *)(param_6 + *param_4) < *(byte *)(param_6 + lVar4)) {
    *param_3 = *param_4;
    *param_4 = iVar5;
    iVar1 = *param_2;
    if (*(byte *)(param_6 + *param_3) < *(byte *)(param_6 + iVar1)) {
      *param_2 = *param_3;
      *param_3 = iVar1;
      iVar1 = *param_1;
      if (*(byte *)(param_6 + *param_2) < *(byte *)(param_6 + iVar1)) {
        *param_1 = *param_2;
        *param_2 = iVar1;
      }
    }
  }
  iVar1 = *param_4;
  if (*(byte *)(param_6 + *param_5) < *(byte *)(param_6 + iVar1)) {
    *param_4 = *param_5;
    *param_5 = iVar1;
    iVar1 = *param_3;
    if (*(byte *)(param_6 + *param_4) < *(byte *)(param_6 + iVar1)) {
      *param_3 = *param_4;
      *param_4 = iVar1;
      iVar1 = *param_2;
      if (*(byte *)(param_6 + *param_3) < *(byte *)(param_6 + iVar1)) {
        *param_2 = *param_3;
        *param_3 = iVar1;
        iVar1 = *param_1;
        if (*(byte *)(param_6 + *param_2) < *(byte *)(param_6 + iVar1)) {
          *param_1 = *param_2;
          *param_2 = iVar1;
        }
      }
    }
  }
  return;
}



/* Entry: 109a9f2e0; end: 109a9f603;  */

bool FUN_109a9f2e0(int *param_1,int *param_2,long param_3)

{
  byte *pbVar1;
  byte *pbVar2;
  int iVar3;
  byte bVar4;
  byte bVar5;
  int iVar6;
  long lVar7;
  ulong uVar8;
  int *piVar9;
  int *piVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  int *piVar17;
  int *piVar18;
  
  uVar8 = (long)param_2 - (long)param_1 >> 2;
  if ((long)uVar8 < 3) {
    if (uVar8 < 2) {
      return true;
    }
    if (uVar8 == 2) {
      iVar11 = *param_1;
      if (*(byte *)(param_3 + iVar11) <= *(byte *)(param_3 + param_2[-1])) {
        return true;
      }
      *param_1 = param_2[-1];
      param_2[-1] = iVar11;
      return true;
    }
  }
  else {
    if (uVar8 == 3) {
      iVar11 = *param_1;
      iVar3 = param_1[1];
      bVar4 = *(byte *)(param_3 + iVar3);
      iVar6 = param_2[-1];
      if (bVar4 < *(byte *)(param_3 + iVar11)) {
        if (*(byte *)(param_3 + iVar6) < bVar4) {
          *param_1 = iVar6;
        }
        else {
          *param_1 = iVar3;
          param_1[1] = iVar11;
          if (*(byte *)(param_3 + iVar11) <= *(byte *)(param_3 + param_2[-1])) {
            return true;
          }
          param_1[1] = param_2[-1];
        }
        param_2[-1] = iVar11;
        return true;
      }
      if (bVar4 <= *(byte *)(param_3 + iVar6)) {
        return true;
      }
      param_1[1] = iVar6;
      param_2[-1] = iVar3;
      iVar11 = *param_1;
      if (*(byte *)(param_3 + iVar11) <= *(byte *)(param_3 + param_1[1])) {
        return true;
      }
      *param_1 = param_1[1];
      param_1[1] = iVar11;
      return true;
    }
    if (uVar8 == 4) {
      piVar10 = param_1 + 1;
      iVar3 = *piVar10;
      piVar17 = param_1 + 2;
      iVar6 = *piVar17;
      iVar11 = *param_1;
      bVar4 = *(byte *)(param_3 + iVar3);
      lVar15 = (long)iVar11;
      lVar14 = (long)iVar6;
      piVar9 = param_1;
      iVar13 = iVar6;
      if (bVar4 < *(byte *)(param_3 + iVar11)) {
        piVar18 = piVar17;
        iVar12 = iVar11;
        if (bVar4 <= *(byte *)(param_3 + iVar6)) {
          *param_1 = iVar3;
          param_1[1] = iVar11;
          piVar9 = piVar10;
          if (*(byte *)(param_3 + lVar15) <= *(byte *)(param_3 + lVar14)) goto LAB_109a9f598;
        }
      }
      else {
        if (bVar4 <= *(byte *)(param_3 + iVar6)) goto LAB_109a9f598;
        *piVar10 = iVar6;
        *piVar17 = iVar3;
        pbVar1 = (byte *)(param_3 + lVar14);
        pbVar2 = (byte *)(param_3 + lVar15);
        lVar15 = (long)iVar3;
        lVar14 = lVar15;
        piVar18 = piVar10;
        iVar12 = iVar3;
        iVar13 = iVar3;
        if (*pbVar2 <= *pbVar1) goto LAB_109a9f598;
      }
      *piVar9 = iVar6;
      *piVar18 = iVar11;
      lVar14 = lVar15;
      iVar13 = iVar12;
LAB_109a9f598:
      if (*(byte *)(param_3 + lVar14) <= *(byte *)(param_3 + param_2[-1])) {
        return true;
      }
      *piVar17 = param_2[-1];
      param_2[-1] = iVar13;
      iVar11 = *piVar17;
      iVar3 = *piVar10;
      if (*(byte *)(param_3 + iVar3) <= *(byte *)(param_3 + iVar11)) {
        return true;
      }
      param_1[1] = iVar11;
      param_1[2] = iVar3;
      iVar3 = *param_1;
      if (*(byte *)(param_3 + iVar3) <= *(byte *)(param_3 + iVar11)) {
        return true;
      }
      *param_1 = iVar11;
      param_1[1] = iVar3;
      return true;
    }
    if (uVar8 == 5) {
      FUN_109a9f150(param_1,param_1 + 1,param_1 + 2,param_1 + 3,param_2 + -1);
      return true;
    }
  }
  piVar9 = param_1 + 2;
  iVar3 = *piVar9;
  piVar17 = param_1 + 1;
  iVar6 = *piVar17;
  bVar4 = *(byte *)(param_3 + iVar6);
  iVar11 = *param_1;
  piVar10 = param_1;
  if (bVar4 < *(byte *)(param_3 + iVar11)) {
    piVar18 = piVar9;
    if (bVar4 <= *(byte *)(param_3 + iVar3)) {
      *param_1 = iVar6;
      param_1[1] = iVar11;
      bVar4 = *(byte *)(param_3 + iVar3);
      bVar5 = *(byte *)(param_3 + iVar11);
      piVar10 = piVar17;
      piVar17 = piVar9;
      goto LAB_109a9f470;
    }
  }
  else {
    if (bVar4 <= *(byte *)(param_3 + iVar3)) goto LAB_109a9f480;
    *piVar17 = iVar3;
    *piVar9 = iVar6;
    bVar4 = *(byte *)(param_3 + iVar3);
    bVar5 = *(byte *)(param_3 + iVar11);
LAB_109a9f470:
    piVar18 = piVar17;
    if (bVar5 <= bVar4) goto LAB_109a9f480;
  }
  *piVar10 = iVar3;
  *piVar18 = iVar11;
LAB_109a9f480:
  if (param_1 + 3 != param_2) {
    iVar11 = 0;
    lVar14 = 0xc;
    piVar10 = param_1 + 3;
    do {
      iVar3 = *piVar10;
      lVar16 = (long)*piVar9;
      lVar15 = lVar14;
      if (*(byte *)(param_3 + iVar3) < *(byte *)(param_3 + lVar16)) {
        do {
          *(int *)((long)param_1 + lVar15) = (int)lVar16;
          lVar7 = lVar15 + -4;
          piVar9 = param_1;
          if (lVar7 == 0) goto LAB_109a9f4e4;
          lVar16 = (long)*(int *)((long)param_1 + lVar15 + -8);
          lVar15 = lVar7;
        } while (*(byte *)(param_3 + iVar3) < *(byte *)(param_3 + lVar16));
        piVar9 = (int *)((long)param_1 + lVar7);
LAB_109a9f4e4:
        *piVar9 = iVar3;
        iVar11 = iVar11 + 1;
        if (iVar11 == 8) {
          return piVar10 + 1 == param_2;
        }
      }
      piVar17 = piVar10 + 1;
      lVar14 = lVar14 + 4;
      piVar9 = piVar10;
      piVar10 = piVar17;
    } while (piVar17 != param_2);
  }
  return true;
}



/* Entry: 109a9f604; end: 109aa0047;  */

void FUN_109a9f604(uint *param_1,uint *param_2,long *param_3,long param_4,uint param_5)

{
  char *pcVar1;
  char *pcVar2;
  ulong uVar3;
  bool bVar4;
  char cVar5;
  uint *puVar6;
  uint *puVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  char cVar11;
  uint *puVar12;
  uint uVar13;
  uint uVar14;
  uint *puVar15;
  long lVar16;
  ulong uVar17;
  uint uVar18;
  uint uVar19;
  long lVar20;
  long lVar21;
  long lVar22;
  ulong uVar23;
  ulong uVar24;
  uint uVar25;
  uint *puVar26;
  
LAB_109a9f634:
  do {
    puVar12 = param_1;
    uVar10 = (long)param_2 - (long)puVar12 >> 2;
    if (uVar10 - 2 == 0 || (long)uVar10 < 2) {
      if (uVar10 < 2) {
        return;
      }
      if (uVar10 == 2) {
        uVar18 = *puVar12;
        if (*(char *)(*param_3 + (long)(int)uVar18) <= *(char *)(*param_3 + (long)(int)param_2[-1]))
        {
          return;
        }
        *puVar12 = param_2[-1];
        param_2[-1] = uVar18;
        return;
      }
    }
    else {
      if (uVar10 == 3) {
        uVar18 = *puVar12;
        uVar19 = puVar12[1];
        lVar8 = *param_3;
        cVar11 = *(char *)(lVar8 + (int)uVar19);
        uVar25 = param_2[-1];
        if (cVar11 < *(char *)(lVar8 + (int)uVar18)) {
          if (*(char *)(lVar8 + (int)uVar25) < cVar11) {
            *puVar12 = uVar25;
          }
          else {
            *puVar12 = uVar19;
            puVar12[1] = uVar18;
            if (*(char *)(lVar8 + (int)uVar18) <= *(char *)(lVar8 + (int)param_2[-1])) {
              return;
            }
            puVar12[1] = param_2[-1];
          }
          param_2[-1] = uVar18;
          return;
        }
        if (cVar11 <= *(char *)(lVar8 + (int)uVar25)) {
          return;
        }
        puVar12[1] = uVar25;
        param_2[-1] = uVar19;
        uVar18 = *puVar12;
        if (*(char *)(lVar8 + (int)uVar18) <= *(char *)(lVar8 + (int)puVar12[1])) {
          return;
        }
        *puVar12 = puVar12[1];
        puVar12[1] = uVar18;
        return;
      }
      if (uVar10 == 4) {
        puVar7 = puVar12 + 1;
        uVar19 = *puVar7;
        puVar15 = puVar12 + 2;
        uVar25 = *puVar15;
        uVar18 = *puVar12;
        lVar22 = *param_3;
        cVar11 = *(char *)(lVar22 + (int)uVar19);
        lVar20 = (long)(int)uVar18;
        lVar8 = (long)(int)uVar25;
        puVar6 = puVar12;
        uVar14 = uVar25;
        if (cVar11 < *(char *)(lVar22 + (int)uVar18)) {
          puVar26 = puVar15;
          uVar13 = uVar18;
          if (cVar11 <= *(char *)(lVar22 + (int)uVar25)) {
            *puVar12 = uVar19;
            puVar12[1] = uVar18;
            puVar6 = puVar7;
            if (*(char *)(lVar22 + lVar20) <= *(char *)(lVar22 + lVar8)) goto LAB_109a9ffe0;
          }
        }
        else {
          if (cVar11 <= *(char *)(lVar22 + (int)uVar25)) goto LAB_109a9ffe0;
          *puVar7 = uVar25;
          *puVar15 = uVar19;
          pcVar1 = (char *)(lVar22 + lVar8);
          pcVar2 = (char *)(lVar22 + lVar20);
          lVar20 = (long)(int)uVar19;
          lVar8 = lVar20;
          puVar26 = puVar7;
          uVar13 = uVar19;
          uVar14 = uVar19;
          if (*pcVar2 <= *pcVar1) goto LAB_109a9ffe0;
        }
        *puVar6 = uVar25;
        *puVar26 = uVar18;
        lVar8 = lVar20;
        uVar14 = uVar13;
LAB_109a9ffe0:
        if (*(char *)(lVar22 + lVar8) <= *(char *)(lVar22 + (int)param_2[-1])) {
          return;
        }
        *puVar15 = param_2[-1];
        param_2[-1] = uVar14;
        uVar18 = *puVar15;
        uVar19 = *puVar7;
        if (*(char *)(lVar22 + (int)uVar19) <= *(char *)(lVar22 + (int)uVar18)) {
          return;
        }
        puVar12[1] = uVar18;
        puVar12[2] = uVar19;
        uVar19 = *puVar12;
        if (*(char *)(lVar22 + (int)uVar19) <= *(char *)(lVar22 + (int)uVar18)) {
          return;
        }
        *puVar12 = uVar18;
        puVar12[1] = uVar19;
        return;
      }
      if (uVar10 == 5) {
        lVar8 = *param_3;
        puVar6 = puVar12 + 1;
        puVar7 = puVar12 + 2;
        puVar15 = puVar12 + 3;
        uVar18 = *puVar6;
        uVar19 = *puVar12;
        cVar11 = *(char *)(lVar8 + (int)uVar18);
        uVar25 = *puVar7;
        if (cVar11 < *(char *)(lVar8 + (int)uVar19)) {
          lVar22 = (long)(int)uVar19;
          if (*(char *)(lVar8 + (int)uVar25) < cVar11) {
            *puVar12 = uVar25;
          }
          else {
            *puVar12 = uVar18;
            *puVar6 = uVar19;
            uVar25 = *puVar7;
            if (*(char *)(lVar8 + lVar22) <= *(char *)(lVar8 + (int)uVar25)) goto LAB_109aa00e8;
            *puVar6 = uVar25;
          }
          *puVar7 = uVar19;
          uVar25 = uVar19;
        }
        else {
          if (cVar11 <= *(char *)(lVar8 + (int)uVar25)) {
            lVar22 = (long)(int)uVar25;
            goto LAB_109aa00f8;
          }
          *puVar6 = uVar25;
          *puVar7 = uVar18;
          uVar19 = *puVar12;
          if (*(char *)(lVar8 + (int)uVar19) <= *(char *)(lVar8 + (int)*puVar6)) {
            lVar22 = (long)(int)uVar18;
            uVar25 = uVar18;
            goto LAB_109aa00f8;
          }
          *puVar12 = *puVar6;
          *puVar6 = uVar19;
          uVar25 = *puVar7;
LAB_109aa00e8:
          lVar22 = (long)(int)uVar25;
        }
LAB_109aa00f8:
        if (*(char *)(lVar8 + (int)*puVar15) < *(char *)(lVar8 + lVar22)) {
          *puVar7 = *puVar15;
          *puVar15 = uVar25;
          uVar18 = *puVar6;
          if (*(char *)(lVar8 + (int)*puVar7) < *(char *)(lVar8 + (int)uVar18)) {
            *puVar6 = *puVar7;
            *puVar7 = uVar18;
            uVar18 = *puVar12;
            if (*(char *)(lVar8 + (int)*puVar6) < *(char *)(lVar8 + (int)uVar18)) {
              *puVar12 = *puVar6;
              *puVar6 = uVar18;
            }
          }
        }
        uVar18 = param_2[-1];
        uVar19 = *puVar15;
        if (*(char *)(lVar8 + (int)uVar18) < *(char *)(lVar8 + (int)uVar19)) {
          *puVar15 = uVar18;
          param_2[-1] = uVar19;
          uVar18 = *puVar7;
          if (*(char *)(lVar8 + (int)*puVar15) < *(char *)(lVar8 + (int)uVar18)) {
            *puVar7 = *puVar15;
            *puVar15 = uVar18;
            uVar18 = *puVar6;
            if (*(char *)(lVar8 + (int)*puVar7) < *(char *)(lVar8 + (int)uVar18)) {
              *puVar6 = *puVar7;
              *puVar7 = uVar18;
              uVar18 = *puVar12;
              if (*(char *)(lVar8 + (int)*puVar6) < *(char *)(lVar8 + (int)uVar18)) {
                *puVar12 = *puVar6;
                *puVar6 = uVar18;
              }
            }
          }
        }
        return;
      }
    }
    if ((long)uVar10 < 0x18) {
      lVar8 = *param_3;
      puVar6 = puVar12 + 1;
      if ((param_5 & 1) == 0) {
        if (puVar12 == param_2 || puVar6 == param_2) {
          return;
        }
        do {
          puVar7 = puVar6;
          uVar18 = puVar12[1];
          lVar22 = (long)(int)*puVar12;
          puVar12 = puVar7;
          if (*(char *)(lVar8 + (int)uVar18) < *(char *)(lVar8 + lVar22)) {
            do {
              *puVar12 = (uint)lVar22;
              lVar22 = (long)(int)puVar12[-2];
              puVar12 = puVar12 + -1;
            } while (*(char *)(lVar8 + (int)uVar18) < *(char *)(lVar8 + lVar22));
            *puVar12 = uVar18;
          }
          puVar6 = puVar7 + 1;
          puVar12 = puVar7;
        } while (puVar7 + 1 != param_2);
        return;
      }
      if (puVar12 == param_2 || puVar6 == param_2) {
        return;
      }
      lVar22 = 0;
      puVar7 = puVar12;
      do {
        uVar18 = puVar7[1];
        lVar21 = (long)(int)*puVar7;
        lVar20 = lVar22;
        if (*(char *)(lVar8 + (int)uVar18) < *(char *)(lVar8 + lVar21)) {
          do {
            lVar16 = lVar20;
            *(int *)((long)puVar12 + lVar16 + 4) = (int)lVar21;
            puVar7 = puVar12;
            if (lVar16 == 0) goto LAB_109a9fcb8;
            lVar21 = (long)*(int *)((long)puVar12 + lVar16 + -4);
            lVar20 = lVar16 + -4;
          } while (*(char *)(lVar8 + (int)uVar18) < *(char *)(lVar8 + lVar21));
          puVar7 = (uint *)((long)puVar12 + lVar16);
LAB_109a9fcb8:
          *puVar7 = uVar18;
        }
        puVar15 = puVar6 + 1;
        lVar22 = lVar22 + 4;
        puVar7 = puVar6;
        puVar6 = puVar15;
        if (puVar15 == param_2) {
          return;
        }
      } while( true );
    }
    if (param_4 == 0) {
      if (puVar12 == param_2) {
        return;
      }
      uVar9 = uVar10 - 2 >> 1;
      lVar8 = *param_3;
      uVar17 = uVar9;
      do {
        if ((long)uVar17 <= (long)uVar9) {
          uVar24 = uVar17 << 1 | 1;
          puVar6 = puVar12 + uVar24;
          uVar3 = uVar17 * 2 + 2;
          uVar18 = *puVar6;
          puVar7 = puVar6;
          uVar23 = uVar24;
          uVar19 = uVar18;
          if ((long)uVar3 < (long)uVar10) {
            uVar19 = puVar6[1];
            puVar7 = puVar6 + 1;
            uVar23 = uVar3;
            if (*(char *)(lVar8 + (int)uVar19) <= *(char *)(lVar8 + (int)uVar18)) {
              puVar7 = puVar6;
              uVar23 = uVar24;
              uVar19 = uVar18;
            }
          }
          uVar18 = puVar12[uVar17];
          puVar6 = puVar12 + uVar17;
          if (*(char *)(lVar8 + (int)uVar18) <= *(char *)(lVar8 + (int)uVar19)) {
            do {
              puVar15 = puVar7;
              *puVar6 = uVar19;
              if ((long)uVar9 < (long)uVar23) break;
              uVar24 = uVar23 << 1 | 1;
              puVar6 = puVar12 + uVar24;
              uVar3 = uVar23 * 2 + 2;
              uVar25 = *puVar6;
              puVar7 = puVar6;
              uVar23 = uVar24;
              uVar19 = uVar25;
              if ((long)uVar3 < (long)uVar10) {
                uVar19 = puVar6[1];
                puVar7 = puVar6 + 1;
                uVar23 = uVar3;
                if (*(char *)(lVar8 + (int)uVar19) <= *(char *)(lVar8 + (int)uVar25)) {
                  puVar7 = puVar6;
                  uVar23 = uVar24;
                  uVar19 = uVar25;
                }
              }
              puVar6 = puVar15;
            } while (*(char *)(lVar8 + (int)uVar18) <= *(char *)(lVar8 + (int)uVar19));
            *puVar15 = uVar18;
            lVar8 = *param_3;
          }
        }
        bVar4 = uVar17 != 0;
        uVar17 = uVar17 - 1;
      } while (bVar4);
      do {
        uVar18 = *puVar12;
        lVar8 = *param_3;
        puVar6 = puVar12;
        uVar17 = 0;
        do {
          puVar15 = puVar6 + uVar17 + 1;
          uVar19 = *puVar15;
          uVar3 = uVar17 << 1 | 1;
          uVar9 = uVar17 * 2 + 2;
          puVar7 = puVar15;
          uVar24 = uVar3;
          uVar25 = uVar19;
          if ((long)uVar9 < (long)uVar10) {
            uVar25 = puVar6[uVar17 + 2];
            puVar7 = puVar6 + uVar17 + 2;
            uVar24 = uVar9;
            if (*(char *)(lVar8 + (int)uVar25) <= *(char *)(lVar8 + (int)uVar19)) {
              puVar7 = puVar15;
              uVar24 = uVar3;
              uVar25 = uVar19;
            }
          }
          *puVar6 = uVar25;
          puVar6 = puVar7;
          uVar17 = uVar24;
        } while ((long)uVar24 <= (long)(uVar10 - 2 >> 1));
        param_2 = param_2 + -1;
        if (puVar7 == param_2) {
          *puVar7 = uVar18;
        }
        else {
          *puVar7 = *param_2;
          *param_2 = uVar18;
          lVar8 = (long)puVar7 + (4 - (long)puVar12) >> 2;
          if (1 < lVar8) {
            lVar22 = *param_3;
            uVar17 = lVar8 - 2U >> 1;
            lVar8 = (long)(int)puVar12[uVar17];
            uVar18 = *puVar7;
            puVar6 = puVar12 + uVar17;
            if (*(char *)(lVar22 + lVar8) < *(char *)(lVar22 + (int)uVar18)) {
              do {
                puVar15 = puVar6;
                *puVar7 = (uint)lVar8;
                if (uVar17 == 0) break;
                uVar17 = uVar17 - 1 >> 1;
                lVar8 = (long)(int)puVar12[uVar17];
                puVar7 = puVar15;
                puVar6 = puVar12 + uVar17;
              } while (*(char *)(lVar22 + lVar8) < *(char *)(lVar22 + (int)uVar18));
              *puVar15 = uVar18;
            }
          }
        }
        bVar4 = (long)uVar10 < 3;
        uVar10 = uVar10 - 1;
        if (bVar4) {
          return;
        }
      } while( true );
    }
    puVar6 = puVar12 + (uVar10 >> 1);
    lVar8 = *param_3;
    uVar18 = param_2[-1];
    cVar11 = *(char *)(lVar8 + (int)uVar18);
    if (uVar10 < 0x81) {
      uVar25 = *puVar12;
      uVar19 = *puVar6;
      cVar5 = *(char *)(lVar8 + (int)uVar25);
      if (cVar5 < *(char *)(lVar8 + (int)uVar19)) {
        if (cVar11 < cVar5) {
          *puVar6 = uVar18;
        }
        else {
          *puVar6 = uVar25;
          *puVar12 = uVar19;
          if (*(char *)(lVar8 + (int)uVar19) <= *(char *)(lVar8 + (int)param_2[-1]))
          goto LAB_109a9f938;
          *puVar12 = param_2[-1];
        }
        param_2[-1] = uVar19;
      }
      else if (cVar11 < cVar5) {
        *puVar12 = uVar18;
        param_2[-1] = uVar25;
        uVar18 = *puVar6;
        if (*(char *)(lVar8 + (int)*puVar12) < *(char *)(lVar8 + (int)uVar18)) {
          *puVar6 = *puVar12;
          *puVar12 = uVar18;
        }
      }
    }
    else {
      uVar25 = *puVar6;
      uVar19 = *puVar12;
      cVar5 = *(char *)(lVar8 + (int)uVar25);
      if (cVar5 < *(char *)(lVar8 + (int)uVar19)) {
        if (cVar11 < cVar5) {
          *puVar12 = uVar18;
        }
        else {
          *puVar12 = uVar25;
          *puVar6 = uVar19;
          if (*(char *)(lVar8 + (int)uVar19) <= *(char *)(lVar8 + (int)param_2[-1]))
          goto LAB_109a9f774;
          *puVar6 = param_2[-1];
        }
        param_2[-1] = uVar19;
      }
      else if (cVar11 < cVar5) {
        *puVar6 = uVar18;
        param_2[-1] = uVar25;
        uVar18 = *puVar12;
        if (*(char *)(lVar8 + (int)*puVar6) < *(char *)(lVar8 + (int)uVar18)) {
          *puVar12 = *puVar6;
          *puVar6 = uVar18;
        }
      }
LAB_109a9f774:
      puVar7 = puVar6 + -1;
      uVar19 = *puVar7;
      uVar18 = puVar12[1];
      cVar11 = *(char *)(lVar8 + (int)uVar19);
      uVar25 = param_2[-2];
      if (cVar11 < *(char *)(lVar8 + (int)uVar18)) {
        if (*(char *)(lVar8 + (int)uVar25) < cVar11) {
          puVar12[1] = uVar25;
        }
        else {
          puVar12[1] = uVar19;
          *puVar7 = uVar18;
          if (*(char *)(lVar8 + (int)uVar18) <= *(char *)(lVar8 + (int)param_2[-2]))
          goto LAB_109a9f828;
          *puVar7 = param_2[-2];
        }
        param_2[-2] = uVar18;
      }
      else if (*(char *)(lVar8 + (int)uVar25) < cVar11) {
        *puVar7 = uVar25;
        param_2[-2] = uVar19;
        uVar18 = puVar12[1];
        if (*(char *)(lVar8 + (int)*puVar7) < *(char *)(lVar8 + (int)uVar18)) {
          puVar12[1] = *puVar7;
          *puVar7 = uVar18;
        }
      }
LAB_109a9f828:
      puVar15 = puVar6 + 1;
      uVar19 = *puVar15;
      uVar18 = puVar12[2];
      cVar11 = *(char *)(lVar8 + (int)uVar19);
      uVar25 = param_2[-3];
      if (cVar11 < *(char *)(lVar8 + (int)uVar18)) {
        if (*(char *)(lVar8 + (int)uVar25) < cVar11) {
          puVar12[2] = uVar25;
        }
        else {
          puVar12[2] = uVar19;
          *puVar15 = uVar18;
          if (*(char *)(lVar8 + (int)uVar18) <= *(char *)(lVar8 + (int)param_2[-3]))
          goto LAB_109a9f8b4;
          *puVar15 = param_2[-3];
        }
        param_2[-3] = uVar18;
      }
      else if (*(char *)(lVar8 + (int)uVar25) < cVar11) {
        *puVar15 = uVar25;
        param_2[-3] = uVar19;
        uVar18 = puVar12[2];
        if (*(char *)(lVar8 + (int)*puVar15) < *(char *)(lVar8 + (int)uVar18)) {
          puVar12[2] = *puVar15;
          *puVar15 = uVar18;
        }
      }
LAB_109a9f8b4:
      uVar18 = *puVar6;
      uVar19 = puVar6[1];
      uVar25 = puVar6[-1];
      cVar11 = *(char *)(lVar8 + (int)uVar18);
      if (cVar11 < *(char *)(lVar8 + (int)uVar25)) {
        uVar14 = uVar18;
        if (cVar11 <= *(char *)(lVar8 + (int)uVar19)) {
          puVar6[-1] = uVar18;
          *puVar6 = uVar25;
          puVar7 = puVar6;
          uVar18 = uVar25;
          uVar14 = uVar19;
          if (*(char *)(lVar8 + (int)uVar25) <= *(char *)(lVar8 + (int)uVar19)) goto LAB_109a9f92c;
        }
LAB_109a9f924:
        *puVar7 = uVar19;
        *puVar15 = uVar25;
        uVar18 = uVar14;
      }
      else if (*(char *)(lVar8 + (int)uVar19) < cVar11) {
        *puVar6 = uVar19;
        puVar6[1] = uVar18;
        puVar15 = puVar6;
        uVar18 = uVar19;
        uVar14 = uVar25;
        if (*(char *)(lVar8 + (int)uVar19) < *(char *)(lVar8 + (int)uVar25)) goto LAB_109a9f924;
      }
LAB_109a9f92c:
      uVar19 = *puVar12;
      *puVar12 = uVar18;
      *puVar6 = uVar19;
    }
LAB_109a9f938:
    param_4 = param_4 + -1;
    uVar18 = *puVar12;
    param_1 = puVar12;
    if ((param_5 & 1) == 0) {
      cVar11 = *(char *)(lVar8 + (int)uVar18);
      if (cVar11 <= *(char *)(lVar8 + (int)puVar12[-1])) {
        if (cVar11 < *(char *)(lVar8 + (int)param_2[-1])) {
          do {
            param_1 = param_1 + 1;
          } while (*(char *)(lVar8 + (int)*param_1) <= cVar11);
        }
        else {
          do {
            param_1 = param_1 + 1;
            if (param_2 <= param_1) break;
          } while (*(char *)(lVar8 + (int)*param_1) <= cVar11);
        }
        puVar6 = param_2;
        if (param_1 < param_2) {
          do {
            puVar6 = puVar6 + -1;
          } while (cVar11 < *(char *)(lVar8 + (int)*puVar6));
        }
        if (param_1 < puVar6) {
          uVar10 = (ulong)*param_1;
          uVar17 = (ulong)*puVar6;
          do {
            *param_1 = (uint)uVar17;
            *puVar6 = (uint)uVar10;
            do {
              param_1 = param_1 + 1;
              uVar10 = (ulong)(int)*param_1;
            } while (*(char *)(lVar8 + uVar10) <= *(char *)(lVar8 + (int)uVar18));
            do {
              puVar6 = puVar6 + -1;
              uVar17 = (ulong)(int)*puVar6;
            } while (*(char *)(lVar8 + (int)uVar18) < *(char *)(lVar8 + uVar17));
          } while (param_1 < puVar6);
        }
        puVar6 = param_1 + -1;
        if (puVar6 != puVar12) {
          *puVar12 = *puVar6;
        }
        param_5 = 0;
        *puVar6 = uVar18;
        goto LAB_109a9f634;
      }
    }
    else {
      cVar11 = *(char *)(lVar8 + (int)uVar18);
    }
    lVar22 = 0;
    do {
      lVar20 = (long)*(int *)((long)puVar12 + lVar22 + 4);
      lVar22 = lVar22 + 4;
    } while (*(char *)(lVar8 + lVar20) < cVar11);
    puVar6 = (uint *)((long)puVar12 + lVar22);
    puVar7 = param_2;
    if (lVar22 == 4) {
      do {
        if (puVar7 <= puVar6) break;
        puVar7 = puVar7 + -1;
      } while (cVar11 <= *(char *)(lVar8 + (int)*puVar7));
    }
    else {
      do {
        puVar7 = puVar7 + -1;
      } while (cVar11 <= *(char *)(lVar8 + (int)*puVar7));
    }
    param_1 = puVar6;
    if (puVar6 < puVar7) {
      uVar10 = (ulong)*puVar7;
      puVar15 = puVar7;
      do {
        *param_1 = (uint)uVar10;
        *puVar15 = (uint)lVar20;
        do {
          param_1 = param_1 + 1;
          lVar20 = (long)(int)*param_1;
        } while (*(char *)(lVar8 + lVar20) < *(char *)(lVar8 + (int)uVar18));
        do {
          puVar15 = puVar15 + -1;
          uVar10 = (ulong)(int)*puVar15;
        } while (*(char *)(lVar8 + (int)uVar18) <= *(char *)(lVar8 + uVar10));
      } while (param_1 < puVar15);
    }
    puVar15 = param_1 + -1;
    if (puVar15 != puVar12) {
      *puVar12 = *puVar15;
    }
    *puVar15 = uVar18;
    if (puVar6 < puVar7) {
LAB_109a9fa60:
      FUN_109a9f604(puVar12,puVar15,param_3,param_4,param_5 & 1);
      param_5 = 0;
    }
    else {
      puVar6 = puVar12;
      FUN_109aa01d8(puVar12,puVar15,*param_3);
      puVar7 = param_1;
      FUN_109aa01d8(param_1,param_2,*param_3);
      if ((int)puVar7 == 0) {
        if (((ulong)puVar6 & 1) == 0) goto LAB_109a9fa60;
      }
      else {
        param_1 = puVar12;
        param_2 = puVar15;
        if (((ulong)puVar6 & 1) != 0) {
          return;
        }
      }
    }
  } while( true );
}



/* Entry: 109aa0048; end: 109aa01d7;  */

void FUN_109aa0048(int *param_1,int *param_2,int *param_3,int *param_4,int *param_5,long param_6)

{
  int iVar1;
  int iVar2;
  char cVar3;
  long lVar4;
  int iVar5;
  
  iVar1 = *param_2;
  iVar2 = *param_1;
  cVar3 = *(char *)(param_6 + iVar1);
  iVar5 = *param_3;
  if (cVar3 < *(char *)(param_6 + iVar2)) {
    lVar4 = (long)iVar2;
    if (*(char *)(param_6 + iVar5) < cVar3) {
      *param_1 = iVar5;
    }
    else {
      *param_1 = iVar1;
      *param_2 = iVar2;
      iVar5 = *param_3;
      if (*(char *)(param_6 + lVar4) <= *(char *)(param_6 + iVar5)) goto LAB_109aa00e8;
      *param_2 = iVar5;
    }
    *param_3 = iVar2;
    iVar5 = iVar2;
  }
  else {
    if (cVar3 <= *(char *)(param_6 + iVar5)) {
      lVar4 = (long)iVar5;
      goto LAB_109aa00f8;
    }
    *param_2 = iVar5;
    *param_3 = iVar1;
    iVar2 = *param_1;
    if (*(char *)(param_6 + iVar2) <= *(char *)(param_6 + *param_2)) {
      lVar4 = (long)iVar1;
      iVar5 = iVar1;
      goto LAB_109aa00f8;
    }
    *param_1 = *param_2;
    *param_2 = iVar2;
    iVar5 = *param_3;
LAB_109aa00e8:
    lVar4 = (long)iVar5;
  }
LAB_109aa00f8:
  if (*(char *)(param_6 + *param_4) < *(char *)(param_6 + lVar4)) {
    *param_3 = *param_4;
    *param_4 = iVar5;
    iVar1 = *param_2;
    if (*(char *)(param_6 + *param_3) < *(char *)(param_6 + iVar1)) {
      *param_2 = *param_3;
      *param_3 = iVar1;
      iVar1 = *param_1;
      if (*(char *)(param_6 + *param_2) < *(char *)(param_6 + iVar1)) {
        *param_1 = *param_2;
        *param_2 = iVar1;
      }
    }
  }
  iVar1 = *param_4;
  if (*(char *)(param_6 + *param_5) < *(char *)(param_6 + iVar1)) {
    *param_4 = *param_5;
    *param_5 = iVar1;
    iVar1 = *param_3;
    if (*(char *)(param_6 + *param_4) < *(char *)(param_6 + iVar1)) {
      *param_3 = *param_4;
      *param_4 = iVar1;
      iVar1 = *param_2;
      if (*(char *)(param_6 + *param_3) < *(char *)(param_6 + iVar1)) {
        *param_2 = *param_3;
        *param_3 = iVar1;
        iVar1 = *param_1;
        if (*(char *)(param_6 + *param_2) < *(char *)(param_6 + iVar1)) {
          *param_1 = *param_2;
          *param_2 = iVar1;
        }
      }
    }
  }
  return;
}



/* Entry: 109aa01d8; end: 109aa04fb;  */

bool FUN_109aa01d8(int *param_1,int *param_2,long param_3)

{
  char *pcVar1;
  char *pcVar2;
  int iVar3;
  char cVar4;
  char cVar5;
  int iVar6;
  long lVar7;
  ulong uVar8;
  int *piVar9;
  int *piVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  int *piVar17;
  int *piVar18;
  
  uVar8 = (long)param_2 - (long)param_1 >> 2;
  if ((long)uVar8 < 3) {
    if (uVar8 < 2) {
      return true;
    }
    if (uVar8 == 2) {
      iVar11 = *param_1;
      if (*(char *)(param_3 + iVar11) <= *(char *)(param_3 + param_2[-1])) {
        return true;
      }
      *param_1 = param_2[-1];
      param_2[-1] = iVar11;
      return true;
    }
  }
  else {
    if (uVar8 == 3) {
      iVar11 = *param_1;
      iVar3 = param_1[1];
      cVar4 = *(char *)(param_3 + iVar3);
      iVar6 = param_2[-1];
      if (cVar4 < *(char *)(param_3 + iVar11)) {
        if (*(char *)(param_3 + iVar6) < cVar4) {
          *param_1 = iVar6;
        }
        else {
          *param_1 = iVar3;
          param_1[1] = iVar11;
          if (*(char *)(param_3 + iVar11) <= *(char *)(param_3 + param_2[-1])) {
            return true;
          }
          param_1[1] = param_2[-1];
        }
        param_2[-1] = iVar11;
        return true;
      }
      if (cVar4 <= *(char *)(param_3 + iVar6)) {
        return true;
      }
      param_1[1] = iVar6;
      param_2[-1] = iVar3;
      iVar11 = *param_1;
      if (*(char *)(param_3 + iVar11) <= *(char *)(param_3 + param_1[1])) {
        return true;
      }
      *param_1 = param_1[1];
      param_1[1] = iVar11;
      return true;
    }
    if (uVar8 == 4) {
      piVar10 = param_1 + 1;
      iVar3 = *piVar10;
      piVar17 = param_1 + 2;
      iVar6 = *piVar17;
      iVar11 = *param_1;
      cVar4 = *(char *)(param_3 + iVar3);
      lVar15 = (long)iVar11;
      lVar14 = (long)iVar6;
      piVar9 = param_1;
      iVar13 = iVar6;
      if (cVar4 < *(char *)(param_3 + iVar11)) {
        piVar18 = piVar17;
        iVar12 = iVar11;
        if (cVar4 <= *(char *)(param_3 + iVar6)) {
          *param_1 = iVar3;
          param_1[1] = iVar11;
          piVar9 = piVar10;
          if (*(char *)(param_3 + lVar15) <= *(char *)(param_3 + lVar14)) goto LAB_109aa0490;
        }
      }
      else {
        if (cVar4 <= *(char *)(param_3 + iVar6)) goto LAB_109aa0490;
        *piVar10 = iVar6;
        *piVar17 = iVar3;
        pcVar1 = (char *)(param_3 + lVar14);
        pcVar2 = (char *)(param_3 + lVar15);
        lVar15 = (long)iVar3;
        lVar14 = lVar15;
        piVar18 = piVar10;
        iVar12 = iVar3;
        iVar13 = iVar3;
        if (*pcVar2 <= *pcVar1) goto LAB_109aa0490;
      }
      *piVar9 = iVar6;
      *piVar18 = iVar11;
      lVar14 = lVar15;
      iVar13 = iVar12;
LAB_109aa0490:
      if (*(char *)(param_3 + lVar14) <= *(char *)(param_3 + param_2[-1])) {
        return true;
      }
      *piVar17 = param_2[-1];
      param_2[-1] = iVar13;
      iVar11 = *piVar17;
      iVar3 = *piVar10;
      if (*(char *)(param_3 + iVar3) <= *(char *)(param_3 + iVar11)) {
        return true;
      }
      param_1[1] = iVar11;
      param_1[2] = iVar3;
      iVar3 = *param_1;
      if (*(char *)(param_3 + iVar3) <= *(char *)(param_3 + iVar11)) {
        return true;
      }
      *param_1 = iVar11;
      param_1[1] = iVar3;
      return true;
    }
    if (uVar8 == 5) {
      FUN_109aa0048(param_1,param_1 + 1,param_1 + 2,param_1 + 3,param_2 + -1);
      return true;
    }
  }
  piVar9 = param_1 + 2;
  iVar3 = *piVar9;
  piVar17 = param_1 + 1;
  iVar6 = *piVar17;
  cVar4 = *(char *)(param_3 + iVar6);
  iVar11 = *param_1;
  piVar10 = param_1;
  if (cVar4 < *(char *)(param_3 + iVar11)) {
    piVar18 = piVar9;
    if (cVar4 <= *(char *)(param_3 + iVar3)) {
      *param_1 = iVar6;
      param_1[1] = iVar11;
      cVar4 = *(char *)(param_3 + iVar3);
      cVar5 = *(char *)(param_3 + iVar11);
      piVar10 = piVar17;
      piVar17 = piVar9;
      goto LAB_109aa0368;
    }
  }
  else {
    if (cVar4 <= *(char *)(param_3 + iVar3)) goto LAB_109aa0378;
    *piVar17 = iVar3;
    *piVar9 = iVar6;
    cVar4 = *(char *)(param_3 + iVar3);
    cVar5 = *(char *)(param_3 + iVar11);
LAB_109aa0368:
    piVar18 = piVar17;
    if (cVar5 <= cVar4) goto LAB_109aa0378;
  }
  *piVar10 = iVar3;
  *piVar18 = iVar11;
LAB_109aa0378:
  if (param_1 + 3 != param_2) {
    iVar11 = 0;
    lVar14 = 0xc;
    piVar10 = param_1 + 3;
    do {
      iVar3 = *piVar10;
      lVar16 = (long)*piVar9;
      lVar15 = lVar14;
      if (*(char *)(param_3 + iVar3) < *(char *)(param_3 + lVar16)) {
        do {
          *(int *)((long)param_1 + lVar15) = (int)lVar16;
          lVar7 = lVar15 + -4;
          piVar9 = param_1;
          if (lVar7 == 0) goto LAB_109aa03dc;
          lVar16 = (long)*(int *)((long)param_1 + lVar15 + -8);
          lVar15 = lVar7;
        } while (*(char *)(param_3 + iVar3) < *(char *)(param_3 + lVar16));
        piVar9 = (int *)((long)param_1 + lVar7);
LAB_109aa03dc:
        *piVar9 = iVar3;
        iVar11 = iVar11 + 1;
        if (iVar11 == 8) {
          return piVar10 + 1 == param_2;
        }
      }
      piVar17 = piVar10 + 1;
      lVar14 = lVar14 + 4;
      piVar9 = piVar10;
      piVar10 = piVar17;
    } while (piVar17 != param_2);
  }
  return true;
}



/* Entry: 109aa04fc; end: 109aa0ed7;  */

void FUN_109aa04fc(uint *param_1,uint *param_2,long *param_3,long param_4,uint param_5)

{
  ulong uVar1;
  bool bVar2;
  ushort uVar3;
  ushort uVar4;
  ushort uVar5;
  long lVar6;
  uint *puVar7;
  uint *puVar8;
  uint *puVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  uint uVar13;
  uint uVar14;
  uint *puVar15;
  uint *puVar16;
  uint uVar17;
  uint uVar18;
  long lVar19;
  ulong uVar20;
  long lVar21;
  long lVar22;
  ulong uVar23;
  ulong uVar24;
  uint uVar25;
  
LAB_109aa052c:
  do {
    puVar16 = param_1;
    uVar12 = (long)param_2 - (long)puVar16 >> 2;
    if (uVar12 - 2 != 0 && 1 < (long)uVar12) {
      if (uVar12 == 3) {
        uVar17 = *puVar16;
        uVar18 = puVar16[1];
        lVar10 = *param_3;
        uVar3 = *(ushort *)(lVar10 + (long)(int)uVar18 * 2);
        uVar4 = *(ushort *)(lVar10 + (long)(int)uVar17 * 2);
        uVar25 = param_2[-1];
        uVar5 = *(ushort *)(lVar10 + (long)(int)uVar25 * 2);
        if (uVar4 <= uVar3) {
          if (uVar3 <= uVar5) {
            return;
          }
          puVar16[1] = uVar25;
          param_2[-1] = uVar18;
          uVar17 = *puVar16;
          if (*(ushort *)(lVar10 + (long)(int)puVar16[1] * 2) <
              *(ushort *)(lVar10 + (long)(int)uVar17 * 2)) {
            *puVar16 = puVar16[1];
            puVar16[1] = uVar17;
            return;
          }
          return;
        }
        if (uVar5 < uVar3) {
          *puVar16 = uVar25;
        }
        else {
          *puVar16 = uVar18;
          puVar16[1] = uVar17;
          if (uVar4 <= *(ushort *)(lVar10 + (long)(int)param_2[-1] * 2)) {
            return;
          }
          puVar16[1] = param_2[-1];
        }
        goto LAB_109aa0e40;
      }
      if (uVar12 != 4) {
        if (uVar12 != 5) goto LAB_109aa0568;
        lVar10 = *param_3;
        puVar7 = puVar16 + 1;
        puVar8 = puVar16 + 2;
        puVar15 = puVar16 + 3;
        uVar17 = *puVar7;
        uVar18 = *puVar16;
        uVar3 = *(ushort *)(lVar10 + (long)(int)uVar17 * 2);
        uVar4 = *(ushort *)(lVar10 + (long)(int)uVar18 * 2);
        uVar25 = *puVar8;
        uVar5 = *(ushort *)(lVar10 + (long)(int)uVar25 * 2);
        if (uVar3 < uVar4) {
          lVar22 = (long)(int)uVar18;
          if (uVar5 < uVar3) {
            *puVar16 = uVar25;
          }
          else {
            *puVar16 = uVar17;
            *puVar7 = uVar18;
            uVar25 = *puVar8;
            if (uVar4 <= *(ushort *)(lVar10 + (long)(int)uVar25 * 2)) goto LAB_109aa0f74;
            *puVar7 = uVar25;
          }
          *puVar8 = uVar18;
          uVar25 = uVar18;
        }
        else {
          if (uVar3 <= uVar5) {
            lVar22 = (long)(int)uVar25;
            goto LAB_109aa0f84;
          }
          *puVar7 = uVar25;
          *puVar8 = uVar17;
          uVar18 = *puVar16;
          if (*(ushort *)(lVar10 + (long)(int)uVar18 * 2) <=
              *(ushort *)(lVar10 + (long)(int)*puVar7 * 2)) {
            lVar22 = (long)(int)uVar17;
            uVar25 = uVar17;
            goto LAB_109aa0f84;
          }
          *puVar16 = *puVar7;
          *puVar7 = uVar18;
          uVar25 = *puVar8;
LAB_109aa0f74:
          lVar22 = (long)(int)uVar25;
        }
LAB_109aa0f84:
        if (*(ushort *)(lVar10 + (long)(int)*puVar15 * 2) < *(ushort *)(lVar10 + lVar22 * 2)) {
          *puVar8 = *puVar15;
          *puVar15 = uVar25;
          uVar17 = *puVar7;
          if (*(ushort *)(lVar10 + (long)(int)*puVar8 * 2) <
              *(ushort *)(lVar10 + (long)(int)uVar17 * 2)) {
            *puVar7 = *puVar8;
            *puVar8 = uVar17;
            uVar17 = *puVar16;
            if (*(ushort *)(lVar10 + (long)(int)*puVar7 * 2) <
                *(ushort *)(lVar10 + (long)(int)uVar17 * 2)) {
              *puVar16 = *puVar7;
              *puVar7 = uVar17;
            }
          }
        }
        uVar17 = param_2[-1];
        uVar18 = *puVar15;
        if (*(ushort *)(lVar10 + (long)(int)uVar17 * 2) <
            *(ushort *)(lVar10 + (long)(int)uVar18 * 2)) {
          *puVar15 = uVar17;
          param_2[-1] = uVar18;
          uVar17 = *puVar8;
          if (*(ushort *)(lVar10 + (long)(int)*puVar15 * 2) <
              *(ushort *)(lVar10 + (long)(int)uVar17 * 2)) {
            *puVar8 = *puVar15;
            *puVar15 = uVar17;
            uVar17 = *puVar7;
            if (*(ushort *)(lVar10 + (long)(int)*puVar8 * 2) <
                *(ushort *)(lVar10 + (long)(int)uVar17 * 2)) {
              *puVar7 = *puVar8;
              *puVar8 = uVar17;
              uVar17 = *puVar16;
              if (*(ushort *)(lVar10 + (long)(int)*puVar7 * 2) <
                  *(ushort *)(lVar10 + (long)(int)uVar17 * 2)) {
                *puVar16 = *puVar7;
                *puVar7 = uVar17;
              }
            }
          }
        }
        return;
      }
      puVar8 = puVar16 + 1;
      uVar18 = *puVar8;
      puVar15 = puVar16 + 2;
      uVar25 = *puVar15;
      uVar17 = *puVar16;
      lVar22 = *param_3;
      uVar3 = *(ushort *)(lVar22 + (long)(int)uVar18 * 2);
      uVar4 = *(ushort *)(lVar22 + (long)(int)uVar17 * 2);
      lVar10 = (long)(int)uVar25;
      uVar5 = *(ushort *)(lVar22 + (long)(int)uVar25 * 2);
      puVar7 = puVar16;
      if (uVar3 < uVar4) {
        lVar19 = (long)(int)uVar17;
        puVar9 = puVar15;
        uVar13 = uVar17;
        if (uVar3 <= uVar5) {
          *puVar16 = uVar18;
          puVar16[1] = uVar17;
          uVar18 = uVar25;
          puVar7 = puVar8;
          goto joined_r0x000109aa0dd4;
        }
      }
      else {
        uVar14 = uVar25;
        if (uVar3 <= uVar5) goto LAB_109aa0e74;
        lVar10 = (long)(int)uVar18;
        *puVar8 = uVar25;
        *puVar15 = uVar18;
        puVar9 = puVar8;
        uVar13 = uVar18;
        lVar19 = lVar10;
joined_r0x000109aa0dd4:
        uVar14 = uVar18;
        if (uVar4 <= uVar5) goto LAB_109aa0e74;
      }
      lVar10 = lVar19;
      *puVar7 = uVar25;
      *puVar9 = uVar17;
      uVar14 = uVar13;
LAB_109aa0e74:
      if (*(ushort *)(lVar22 + lVar10 * 2) <= *(ushort *)(lVar22 + (long)(int)param_2[-1] * 2)) {
        return;
      }
      *puVar15 = param_2[-1];
      param_2[-1] = uVar14;
      uVar17 = *puVar15;
      uVar18 = *puVar8;
      uVar3 = *(ushort *)(lVar22 + (long)(int)uVar17 * 2);
      if (uVar3 < *(ushort *)(lVar22 + (long)(int)uVar18 * 2)) {
        puVar16[1] = uVar17;
        puVar16[2] = uVar18;
        uVar18 = *puVar16;
        if (uVar3 < *(ushort *)(lVar22 + (long)(int)uVar18 * 2)) {
          *puVar16 = uVar17;
          puVar16[1] = uVar18;
          return;
        }
        return;
      }
      return;
    }
    if (uVar12 < 2) {
      return;
    }
    if (uVar12 == 2) {
      uVar17 = *puVar16;
      if (*(ushort *)(*param_3 + (long)(int)uVar17 * 2) <=
          *(ushort *)(*param_3 + (long)(int)param_2[-1] * 2)) {
        return;
      }
      *puVar16 = param_2[-1];
LAB_109aa0e40:
      param_2[-1] = uVar17;
      return;
    }
LAB_109aa0568:
    if ((long)uVar12 < 0x18) {
      lVar10 = *param_3;
      puVar7 = puVar16 + 1;
      if ((param_5 & 1) == 0) {
        if (puVar16 != param_2 && puVar7 != param_2) {
          do {
            puVar8 = puVar7;
            lVar22 = (long)(int)*puVar16;
            uVar17 = puVar16[1];
            uVar3 = *(ushort *)(lVar10 + (long)(int)uVar17 * 2);
            puVar16 = puVar8;
            if (uVar3 < *(ushort *)(lVar10 + lVar22 * 2)) {
              do {
                *puVar16 = (uint)lVar22;
                lVar22 = (long)(int)puVar16[-2];
                puVar16 = puVar16 + -1;
              } while (uVar3 < *(ushort *)(lVar10 + lVar22 * 2));
              *puVar16 = uVar17;
            }
            puVar7 = puVar8 + 1;
            puVar16 = puVar8;
          } while (puVar8 + 1 != param_2);
          return;
        }
        return;
      }
      if (puVar16 == param_2 || puVar7 == param_2) {
        return;
      }
      lVar22 = 0;
      puVar8 = puVar16;
      do {
        lVar19 = (long)(int)*puVar8;
        uVar17 = puVar8[1];
        uVar3 = *(ushort *)(lVar10 + (long)(int)uVar17 * 2);
        lVar6 = lVar22;
        if (uVar3 < *(ushort *)(lVar10 + lVar19 * 2)) {
          do {
            lVar21 = lVar6;
            *(int *)((long)puVar16 + lVar21 + 4) = (int)lVar19;
            puVar8 = puVar16;
            if (lVar21 == 0) goto LAB_109aa0b74;
            lVar19 = (long)*(int *)((long)puVar16 + lVar21 + -4);
            lVar6 = lVar21 + -4;
          } while (uVar3 < *(ushort *)(lVar10 + lVar19 * 2));
          puVar8 = (uint *)((long)puVar16 + lVar21);
LAB_109aa0b74:
          *puVar8 = uVar17;
        }
        puVar15 = puVar7 + 1;
        lVar22 = lVar22 + 4;
        puVar8 = puVar7;
        puVar7 = puVar15;
        if (puVar15 == param_2) {
          return;
        }
      } while( true );
    }
    if (param_4 == 0) {
      if (puVar16 == param_2) {
        return;
      }
      uVar11 = uVar12 - 2 >> 1;
      lVar10 = *param_3;
      uVar20 = uVar11;
      do {
        if ((long)uVar20 <= (long)uVar11) {
          uVar24 = uVar20 << 1 | 1;
          puVar7 = puVar16 + uVar24;
          uVar1 = uVar20 * 2 + 2;
          uVar17 = *puVar7;
          puVar8 = puVar7;
          uVar23 = uVar24;
          uVar18 = uVar17;
          if ((long)uVar1 < (long)uVar12) {
            uVar18 = puVar7[1];
            puVar8 = puVar7 + 1;
            uVar23 = uVar1;
            if (*(ushort *)(lVar10 + (long)(int)uVar18 * 2) <=
                *(ushort *)(lVar10 + (long)(int)uVar17 * 2)) {
              puVar8 = puVar7;
              uVar23 = uVar24;
              uVar18 = uVar17;
            }
          }
          uVar17 = puVar16[uVar20];
          uVar3 = *(ushort *)(lVar10 + (long)(int)uVar17 * 2);
          puVar7 = puVar16 + uVar20;
          if (uVar3 <= *(ushort *)(lVar10 + (long)(int)uVar18 * 2)) {
            do {
              puVar15 = puVar8;
              *puVar7 = uVar18;
              if ((long)uVar11 < (long)uVar23) break;
              uVar24 = uVar23 << 1 | 1;
              puVar7 = puVar16 + uVar24;
              uVar1 = uVar23 * 2 + 2;
              uVar25 = *puVar7;
              puVar8 = puVar7;
              uVar23 = uVar24;
              uVar18 = uVar25;
              if ((long)uVar1 < (long)uVar12) {
                uVar18 = puVar7[1];
                puVar8 = puVar7 + 1;
                uVar23 = uVar1;
                if (*(ushort *)(lVar10 + (long)(int)uVar18 * 2) <=
                    *(ushort *)(lVar10 + (long)(int)uVar25 * 2)) {
                  puVar8 = puVar7;
                  uVar23 = uVar24;
                  uVar18 = uVar25;
                }
              }
              puVar7 = puVar15;
            } while (uVar3 <= *(ushort *)(lVar10 + (long)(int)uVar18 * 2));
            *puVar15 = uVar17;
            lVar10 = *param_3;
          }
        }
        bVar2 = uVar20 != 0;
        uVar20 = uVar20 - 1;
      } while (bVar2);
      do {
        uVar17 = *puVar16;
        lVar10 = *param_3;
        puVar7 = puVar16;
        uVar20 = 0;
        do {
          puVar15 = puVar7 + uVar20 + 1;
          uVar18 = *puVar15;
          uVar1 = uVar20 << 1 | 1;
          uVar11 = uVar20 * 2 + 2;
          puVar8 = puVar15;
          uVar24 = uVar1;
          uVar25 = uVar18;
          if ((long)uVar11 < (long)uVar12) {
            uVar25 = puVar7[uVar20 + 2];
            puVar8 = puVar7 + uVar20 + 2;
            uVar24 = uVar11;
            if (*(ushort *)(lVar10 + (long)(int)uVar25 * 2) <=
                *(ushort *)(lVar10 + (long)(int)uVar18 * 2)) {
              puVar8 = puVar15;
              uVar24 = uVar1;
              uVar25 = uVar18;
            }
          }
          *puVar7 = uVar25;
          puVar7 = puVar8;
          uVar20 = uVar24;
        } while ((long)uVar24 <= (long)(uVar12 - 2 >> 1));
        param_2 = param_2 + -1;
        if (puVar8 == param_2) {
          *puVar8 = uVar17;
        }
        else {
          *puVar8 = *param_2;
          *param_2 = uVar17;
          lVar10 = (long)puVar8 + (4 - (long)puVar16) >> 2;
          if (1 < lVar10) {
            lVar22 = *param_3;
            uVar20 = lVar10 - 2U >> 1;
            lVar10 = (long)(int)puVar16[uVar20];
            uVar17 = *puVar8;
            uVar3 = *(ushort *)(lVar22 + (long)(int)uVar17 * 2);
            puVar7 = puVar16 + uVar20;
            if (*(ushort *)(lVar22 + lVar10 * 2) < uVar3) {
              do {
                puVar15 = puVar7;
                *puVar8 = (uint)lVar10;
                if (uVar20 == 0) break;
                uVar20 = uVar20 - 1 >> 1;
                lVar10 = (long)(int)puVar16[uVar20];
                puVar8 = puVar15;
                puVar7 = puVar16 + uVar20;
              } while (*(ushort *)(lVar22 + lVar10 * 2) < uVar3);
              *puVar15 = uVar17;
            }
          }
        }
        bVar2 = (long)uVar12 < 3;
        uVar12 = uVar12 - 1;
        if (bVar2) {
          return;
        }
      } while( true );
    }
    puVar7 = puVar16 + (uVar12 >> 1);
    lVar10 = *param_3;
    uVar17 = param_2[-1];
    uVar3 = *(ushort *)(lVar10 + (long)(int)uVar17 * 2);
    if (uVar12 < 0x81) {
      uVar18 = *puVar16;
      uVar25 = *puVar7;
      uVar4 = *(ushort *)(lVar10 + (long)(int)uVar18 * 2);
      uVar5 = *(ushort *)(lVar10 + (long)(int)uVar25 * 2);
      if (uVar4 < uVar5) {
        if (uVar3 < uVar4) {
          *puVar7 = uVar17;
        }
        else {
          *puVar7 = uVar18;
          *puVar16 = uVar25;
          if (uVar5 <= *(ushort *)(lVar10 + (long)(int)param_2[-1] * 2)) goto LAB_109aa080c;
          *puVar16 = param_2[-1];
        }
        param_2[-1] = uVar25;
      }
      else if (uVar3 < uVar4) {
        *puVar16 = uVar17;
        param_2[-1] = uVar18;
        uVar17 = *puVar7;
        if (*(ushort *)(lVar10 + (long)(int)*puVar16 * 2) <
            *(ushort *)(lVar10 + (long)(int)uVar17 * 2)) {
          *puVar7 = *puVar16;
          *puVar16 = uVar17;
        }
      }
    }
    else {
      uVar18 = *puVar7;
      uVar25 = *puVar16;
      uVar4 = *(ushort *)(lVar10 + (long)(int)uVar18 * 2);
      uVar5 = *(ushort *)(lVar10 + (long)(int)uVar25 * 2);
      if (uVar4 < uVar5) {
        if (uVar3 < uVar4) {
          *puVar16 = uVar17;
        }
        else {
          *puVar16 = uVar18;
          *puVar7 = uVar25;
          if (uVar5 <= *(ushort *)(lVar10 + (long)(int)param_2[-1] * 2)) goto LAB_109aa0668;
          *puVar7 = param_2[-1];
        }
        param_2[-1] = uVar25;
      }
      else if (uVar3 < uVar4) {
        *puVar7 = uVar17;
        param_2[-1] = uVar18;
        uVar17 = *puVar16;
        if (*(ushort *)(lVar10 + (long)(int)*puVar7 * 2) <
            *(ushort *)(lVar10 + (long)(int)uVar17 * 2)) {
          *puVar16 = *puVar7;
          *puVar7 = uVar17;
        }
      }
LAB_109aa0668:
      puVar8 = puVar7 + -1;
      uVar17 = *puVar8;
      uVar18 = puVar16[1];
      uVar3 = *(ushort *)(lVar10 + (long)(int)uVar17 * 2);
      uVar4 = *(ushort *)(lVar10 + (long)(int)uVar18 * 2);
      uVar25 = param_2[-2];
      uVar5 = *(ushort *)(lVar10 + (long)(int)uVar25 * 2);
      if (uVar3 < uVar4) {
        if (uVar5 < uVar3) {
          puVar16[1] = uVar25;
        }
        else {
          puVar16[1] = uVar17;
          *puVar8 = uVar18;
          if (uVar4 <= *(ushort *)(lVar10 + (long)(int)param_2[-2] * 2)) goto LAB_109aa0714;
          *puVar8 = param_2[-2];
        }
        param_2[-2] = uVar18;
      }
      else if (uVar5 < uVar3) {
        *puVar8 = uVar25;
        param_2[-2] = uVar17;
        uVar17 = puVar16[1];
        if (*(ushort *)(lVar10 + (long)(int)*puVar8 * 2) <
            *(ushort *)(lVar10 + (long)(int)uVar17 * 2)) {
          puVar16[1] = *puVar8;
          *puVar8 = uVar17;
        }
      }
LAB_109aa0714:
      puVar15 = puVar7 + 1;
      uVar17 = *puVar15;
      uVar18 = puVar16[2];
      uVar3 = *(ushort *)(lVar10 + (long)(int)uVar17 * 2);
      uVar4 = *(ushort *)(lVar10 + (long)(int)uVar18 * 2);
      uVar25 = param_2[-3];
      uVar5 = *(ushort *)(lVar10 + (long)(int)uVar25 * 2);
      if (uVar3 < uVar4) {
        if (uVar5 < uVar3) {
          puVar16[2] = uVar25;
        }
        else {
          puVar16[2] = uVar17;
          *puVar15 = uVar18;
          if (uVar4 <= *(ushort *)(lVar10 + (long)(int)param_2[-3] * 2)) goto LAB_109aa079c;
          *puVar15 = param_2[-3];
        }
        param_2[-3] = uVar18;
      }
      else if (uVar5 < uVar3) {
        *puVar15 = uVar25;
        param_2[-3] = uVar17;
        uVar17 = puVar16[2];
        if (*(ushort *)(lVar10 + (long)(int)*puVar15 * 2) <
            *(ushort *)(lVar10 + (long)(int)uVar17 * 2)) {
          puVar16[2] = *puVar15;
          *puVar15 = uVar17;
        }
      }
LAB_109aa079c:
      uVar17 = *puVar7;
      uVar18 = puVar7[1];
      uVar3 = *(ushort *)(lVar10 + (long)(int)uVar17 * 2);
      uVar25 = puVar7[-1];
      uVar4 = *(ushort *)(lVar10 + (long)(int)uVar25 * 2);
      uVar5 = *(ushort *)(lVar10 + (long)(int)uVar18 * 2);
      if (uVar3 < uVar4) {
        uVar14 = uVar17;
        if (uVar3 <= uVar5) {
          puVar7[-1] = uVar17;
          *puVar7 = uVar25;
          puVar8 = puVar7;
          uVar17 = uVar25;
          uVar14 = uVar18;
          if (uVar4 <= uVar5) goto LAB_109aa0800;
        }
LAB_109aa07f8:
        *puVar8 = uVar18;
        *puVar15 = uVar25;
        uVar17 = uVar14;
      }
      else if (uVar5 < uVar3) {
        *puVar7 = uVar18;
        puVar7[1] = uVar17;
        puVar15 = puVar7;
        uVar17 = uVar18;
        uVar14 = uVar25;
        if (uVar5 < uVar4) goto LAB_109aa07f8;
      }
LAB_109aa0800:
      uVar18 = *puVar16;
      *puVar16 = uVar17;
      *puVar7 = uVar18;
    }
LAB_109aa080c:
    param_4 = param_4 + -1;
    uVar17 = *puVar16;
    param_1 = puVar16;
    if ((param_5 & 1) == 0) {
      uVar3 = *(ushort *)(lVar10 + (long)(int)uVar17 * 2);
      if (uVar3 <= *(ushort *)(lVar10 + (long)(int)puVar16[-1] * 2)) {
        if (uVar3 < *(ushort *)(lVar10 + (long)(int)param_2[-1] * 2)) {
          do {
            param_1 = param_1 + 1;
          } while (*(ushort *)(lVar10 + (long)(int)*param_1 * 2) <= uVar3);
        }
        else {
          do {
            param_1 = param_1 + 1;
            if (param_2 <= param_1) break;
          } while (*(ushort *)(lVar10 + (long)(int)*param_1 * 2) <= uVar3);
        }
        puVar7 = param_2;
        if (param_1 < param_2) {
          do {
            puVar7 = puVar7 + -1;
          } while (uVar3 < *(ushort *)(lVar10 + (long)(int)*puVar7 * 2));
        }
        if (param_1 < puVar7) {
          uVar12 = (ulong)*param_1;
          uVar20 = (ulong)*puVar7;
          do {
            *param_1 = (uint)uVar20;
            *puVar7 = (uint)uVar12;
            do {
              param_1 = param_1 + 1;
              uVar12 = (ulong)(int)*param_1;
            } while (*(ushort *)(lVar10 + uVar12 * 2) <= uVar3);
            do {
              puVar7 = puVar7 + -1;
              uVar20 = (ulong)(int)*puVar7;
            } while (uVar3 < *(ushort *)(lVar10 + uVar20 * 2));
          } while (param_1 < puVar7);
        }
        puVar7 = param_1 + -1;
        if (puVar7 != puVar16) {
          *puVar16 = *puVar7;
        }
        param_5 = 0;
        *puVar7 = uVar17;
        goto LAB_109aa052c;
      }
    }
    else {
      uVar3 = *(ushort *)(lVar10 + (long)(int)uVar17 * 2);
    }
    lVar22 = 0;
    do {
      lVar19 = (long)*(int *)((long)puVar16 + lVar22 + 4);
      lVar22 = lVar22 + 4;
    } while (*(ushort *)(lVar10 + lVar19 * 2) < uVar3);
    puVar7 = (uint *)((long)puVar16 + lVar22);
    puVar8 = param_2;
    if (lVar22 == 4) {
      do {
        if (puVar8 <= puVar7) break;
        puVar8 = puVar8 + -1;
      } while (uVar3 <= *(ushort *)(lVar10 + (long)(int)*puVar8 * 2));
    }
    else {
      do {
        puVar8 = puVar8 + -1;
      } while (uVar3 <= *(ushort *)(lVar10 + (long)(int)*puVar8 * 2));
    }
    param_1 = puVar7;
    if (puVar7 < puVar8) {
      uVar12 = (ulong)*puVar8;
      puVar15 = puVar8;
      do {
        *param_1 = (uint)uVar12;
        *puVar15 = (uint)lVar19;
        do {
          param_1 = param_1 + 1;
          lVar19 = (long)(int)*param_1;
        } while (*(ushort *)(lVar10 + lVar19 * 2) < uVar3);
        do {
          puVar15 = puVar15 + -1;
          uVar12 = (ulong)(int)*puVar15;
        } while (uVar3 <= *(ushort *)(lVar10 + uVar12 * 2));
      } while (param_1 < puVar15);
    }
    puVar15 = param_1 + -1;
    if (puVar15 != puVar16) {
      *puVar16 = *puVar15;
    }
    *puVar15 = uVar17;
    if (puVar7 < puVar8) {
LAB_109aa0930:
      FUN_109aa04fc(puVar16,puVar15,param_3,param_4,param_5 & 1);
      param_5 = 0;
    }
    else {
      puVar7 = puVar16;
      FUN_109aa1064(puVar16,puVar15,*param_3);
      puVar8 = param_1;
      FUN_109aa1064(param_1,param_2,*param_3);
      if ((int)puVar8 == 0) {
        if (((ulong)puVar7 & 1) == 0) goto LAB_109aa0930;
      }
      else {
        param_1 = puVar16;
        param_2 = puVar15;
        if (((ulong)puVar7 & 1) != 0) {
          return;
        }
      }
    }
  } while( true );
}



/* Entry: 109aa0ed8; end: 109aa1063;  */

void FUN_109aa0ed8(int *param_1,int *param_2,int *param_3,int *param_4,int *param_5,long param_6)

{
  int iVar1;
  int iVar2;
  ushort uVar3;
  ushort uVar4;
  ushort uVar5;
  long lVar6;
  int iVar7;
  
  iVar1 = *param_2;
  iVar2 = *param_1;
  uVar3 = *(ushort *)(param_6 + (long)iVar1 * 2);
  uVar4 = *(ushort *)(param_6 + (long)iVar2 * 2);
  iVar7 = *param_3;
  uVar5 = *(ushort *)(param_6 + (long)iVar7 * 2);
  if (uVar3 < uVar4) {
    lVar6 = (long)iVar2;
    if (uVar5 < uVar3) {
      *param_1 = iVar7;
    }
    else {
      *param_1 = iVar1;
      *param_2 = iVar2;
      iVar7 = *param_3;
      if (uVar4 <= *(ushort *)(param_6 + (long)iVar7 * 2)) goto LAB_109aa0f74;
      *param_2 = iVar7;
    }
    *param_3 = iVar2;
    iVar7 = iVar2;
  }
  else {
    if (uVar3 <= uVar5) {
      lVar6 = (long)iVar7;
      goto LAB_109aa0f84;
    }
    *param_2 = iVar7;
    *param_3 = iVar1;
    iVar2 = *param_1;
    if (*(ushort *)(param_6 + (long)iVar2 * 2) <= *(ushort *)(param_6 + (long)*param_2 * 2)) {
      lVar6 = (long)iVar1;
      iVar7 = iVar1;
      goto LAB_109aa0f84;
    }
    *param_1 = *param_2;
    *param_2 = iVar2;
    iVar7 = *param_3;
LAB_109aa0f74:
    lVar6 = (long)iVar7;
  }
LAB_109aa0f84:
  if (*(ushort *)(param_6 + (long)*param_4 * 2) < *(ushort *)(param_6 + lVar6 * 2)) {
    *param_3 = *param_4;
    *param_4 = iVar7;
    iVar1 = *param_2;
    if (*(ushort *)(param_6 + (long)*param_3 * 2) < *(ushort *)(param_6 + (long)iVar1 * 2)) {
      *param_2 = *param_3;
      *param_3 = iVar1;
      iVar1 = *param_1;
      if (*(ushort *)(param_6 + (long)*param_2 * 2) < *(ushort *)(param_6 + (long)iVar1 * 2)) {
        *param_1 = *param_2;
        *param_2 = iVar1;
      }
    }
  }
  iVar1 = *param_4;
  if (*(ushort *)(param_6 + (long)*param_5 * 2) < *(ushort *)(param_6 + (long)iVar1 * 2)) {
    *param_4 = *param_5;
    *param_5 = iVar1;
    iVar1 = *param_3;
    if (*(ushort *)(param_6 + (long)*param_4 * 2) < *(ushort *)(param_6 + (long)iVar1 * 2)) {
      *param_3 = *param_4;
      *param_4 = iVar1;
      iVar1 = *param_2;
      if (*(ushort *)(param_6 + (long)*param_3 * 2) < *(ushort *)(param_6 + (long)iVar1 * 2)) {
        *param_2 = *param_3;
        *param_3 = iVar1;
        iVar1 = *param_1;
        if (*(ushort *)(param_6 + (long)*param_2 * 2) < *(ushort *)(param_6 + (long)iVar1 * 2)) {
          *param_1 = *param_2;
          *param_2 = iVar1;
        }
      }
    }
  }
  return;
}



/* Entry: 109aa1064; end: 109aa1357;  */

bool FUN_109aa1064(int *param_1,int *param_2,long param_3)

{
  ushort uVar1;
  ushort uVar2;
  ushort uVar3;
  int iVar4;
  int iVar5;
  long lVar6;
  int *piVar7;
  ulong uVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int *piVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  int *piVar16;
  int *piVar17;
  
  uVar8 = (long)param_2 - (long)param_1 >> 2;
  if ((long)uVar8 < 3) {
    if (uVar8 < 2) {
      return true;
    }
    if (uVar8 == 2) {
      iVar9 = *param_1;
      if (*(ushort *)(param_3 + (long)param_2[-1] * 2) < *(ushort *)(param_3 + (long)iVar9 * 2)) {
        *param_1 = param_2[-1];
        param_2[-1] = iVar9;
        return true;
      }
      return true;
    }
  }
  else {
    if (uVar8 == 3) {
      iVar9 = *param_1;
      iVar4 = param_1[1];
      uVar1 = *(ushort *)(param_3 + (long)iVar4 * 2);
      uVar2 = *(ushort *)(param_3 + (long)iVar9 * 2);
      iVar5 = param_2[-1];
      uVar3 = *(ushort *)(param_3 + (long)iVar5 * 2);
      if (uVar1 < uVar2) {
        if (uVar3 < uVar1) {
          *param_1 = iVar5;
        }
        else {
          *param_1 = iVar4;
          param_1[1] = iVar9;
          if (uVar2 <= *(ushort *)(param_3 + (long)param_2[-1] * 2)) {
            return true;
          }
          param_1[1] = param_2[-1];
        }
        param_2[-1] = iVar9;
        return true;
      }
      if (uVar3 < uVar1) {
        param_1[1] = iVar5;
        param_2[-1] = iVar4;
        iVar9 = *param_1;
        if (*(ushort *)(param_3 + (long)param_1[1] * 2) < *(ushort *)(param_3 + (long)iVar9 * 2)) {
          *param_1 = param_1[1];
          param_1[1] = iVar9;
          return true;
        }
        return true;
      }
      return true;
    }
    if (uVar8 == 4) {
      piVar16 = param_1 + 1;
      iVar4 = *piVar16;
      piVar17 = param_1 + 2;
      iVar5 = *piVar17;
      iVar9 = *param_1;
      uVar1 = *(ushort *)(param_3 + (long)iVar4 * 2);
      uVar2 = *(ushort *)(param_3 + (long)iVar9 * 2);
      lVar13 = (long)iVar5;
      uVar3 = *(ushort *)(param_3 + (long)iVar5 * 2);
      piVar12 = param_1;
      if (uVar1 < uVar2) {
        lVar14 = (long)iVar9;
        piVar7 = piVar17;
        iVar10 = iVar9;
        if (uVar1 <= uVar3) {
          *param_1 = iVar4;
          param_1[1] = iVar9;
          iVar4 = iVar5;
          piVar12 = piVar16;
          goto joined_r0x000109aa129c;
        }
      }
      else {
        iVar11 = iVar5;
        if (uVar1 <= uVar3) goto LAB_109aa12f0;
        lVar13 = (long)iVar4;
        *piVar16 = iVar5;
        *piVar17 = iVar4;
        piVar7 = piVar16;
        iVar10 = iVar4;
        lVar14 = lVar13;
joined_r0x000109aa129c:
        iVar11 = iVar4;
        if (uVar2 <= uVar3) goto LAB_109aa12f0;
      }
      lVar13 = lVar14;
      *piVar12 = iVar5;
      *piVar7 = iVar9;
      iVar11 = iVar10;
LAB_109aa12f0:
      if (*(ushort *)(param_3 + lVar13 * 2) <= *(ushort *)(param_3 + (long)param_2[-1] * 2)) {
        return true;
      }
      *piVar17 = param_2[-1];
      param_2[-1] = iVar11;
      iVar9 = *piVar17;
      iVar4 = *piVar16;
      uVar1 = *(ushort *)(param_3 + (long)iVar9 * 2);
      if (uVar1 < *(ushort *)(param_3 + (long)iVar4 * 2)) {
        param_1[1] = iVar9;
        param_1[2] = iVar4;
        iVar4 = *param_1;
        if (uVar1 < *(ushort *)(param_3 + (long)iVar4 * 2)) {
          *param_1 = iVar9;
          param_1[1] = iVar4;
          return true;
        }
        return true;
      }
      return true;
    }
    if (uVar8 == 5) {
      FUN_109aa0ed8(param_1,param_1 + 1,param_1 + 2,param_1 + 3,param_2 + -1);
      return true;
    }
  }
  piVar12 = param_1 + 2;
  iVar9 = *piVar12;
  piVar17 = param_1 + 1;
  iVar4 = *piVar17;
  uVar1 = *(ushort *)(param_3 + (long)iVar4 * 2);
  iVar5 = *param_1;
  uVar2 = *(ushort *)(param_3 + (long)iVar5 * 2);
  uVar3 = *(ushort *)(param_3 + (long)iVar9 * 2);
  piVar16 = param_1;
  if (uVar1 < uVar2) {
    piVar7 = piVar12;
    if (uVar1 <= uVar3) {
      *param_1 = iVar4;
      param_1[1] = iVar5;
      piVar16 = piVar17;
      piVar17 = piVar12;
      goto LAB_109aa11e0;
    }
  }
  else {
    if (uVar1 <= uVar3) goto LAB_109aa11f0;
    *piVar17 = iVar9;
    *piVar12 = iVar4;
LAB_109aa11e0:
    piVar7 = piVar17;
    if (uVar2 <= uVar3) goto LAB_109aa11f0;
  }
  *piVar16 = iVar9;
  *piVar7 = iVar5;
LAB_109aa11f0:
  if (param_1 + 3 != param_2) {
    iVar9 = 0;
    lVar13 = 0xc;
    piVar16 = param_1 + 3;
    do {
      piVar17 = piVar16;
      iVar4 = *piVar17;
      lVar15 = (long)*piVar12;
      uVar1 = *(ushort *)(param_3 + (long)iVar4 * 2);
      lVar14 = lVar13;
      if (uVar1 < *(ushort *)(param_3 + lVar15 * 2)) {
        do {
          *(int *)((long)param_1 + lVar14) = (int)lVar15;
          lVar6 = lVar14 + -4;
          piVar12 = param_1;
          if (lVar6 == 0) goto LAB_109aa1250;
          lVar15 = (long)*(int *)((long)param_1 + lVar14 + -8);
          lVar14 = lVar6;
        } while (uVar1 < *(ushort *)(param_3 + lVar15 * 2));
        piVar12 = (int *)((long)param_1 + lVar6);
LAB_109aa1250:
        *piVar12 = iVar4;
        iVar9 = iVar9 + 1;
        if (iVar9 == 8) {
          return piVar17 + 1 == param_2;
        }
      }
      lVar13 = lVar13 + 4;
      piVar16 = piVar17 + 1;
      piVar12 = piVar17;
    } while (piVar17 + 1 != param_2);
  }
  return true;
}



/* Entry: 109aa1358; end: 109aa1d33;  */

void FUN_109aa1358(uint *param_1,uint *param_2,long *param_3,long param_4,uint param_5)

{
  ulong uVar1;
  bool bVar2;
  short sVar3;
  short sVar4;
  long lVar5;
  uint *puVar6;
  uint *puVar7;
  uint *puVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  short sVar12;
  uint uVar13;
  uint uVar14;
  uint *puVar15;
  uint *puVar16;
  uint uVar17;
  uint uVar18;
  long lVar19;
  ulong uVar20;
  long lVar21;
  long lVar22;
  ulong uVar23;
  ulong uVar24;
  uint uVar25;
  
LAB_109aa1388:
  do {
    puVar16 = param_1;
    uVar11 = (long)param_2 - (long)puVar16 >> 2;
    if (uVar11 - 2 != 0 && 1 < (long)uVar11) {
      if (uVar11 == 3) {
        uVar17 = *puVar16;
        uVar18 = puVar16[1];
        lVar9 = *param_3;
        sVar12 = *(short *)(lVar9 + (long)(int)uVar18 * 2);
        sVar3 = *(short *)(lVar9 + (long)(int)uVar17 * 2);
        uVar25 = param_2[-1];
        sVar4 = *(short *)(lVar9 + (long)(int)uVar25 * 2);
        if (sVar3 <= sVar12) {
          if (sVar12 <= sVar4) {
            return;
          }
          puVar16[1] = uVar25;
          param_2[-1] = uVar18;
          uVar17 = *puVar16;
          if (*(short *)(lVar9 + (long)(int)puVar16[1] * 2) <
              *(short *)(lVar9 + (long)(int)uVar17 * 2)) {
            *puVar16 = puVar16[1];
            puVar16[1] = uVar17;
            return;
          }
          return;
        }
        if (sVar4 < sVar12) {
          *puVar16 = uVar25;
        }
        else {
          *puVar16 = uVar18;
          puVar16[1] = uVar17;
          if (sVar3 <= *(short *)(lVar9 + (long)(int)param_2[-1] * 2)) {
            return;
          }
          puVar16[1] = param_2[-1];
        }
        goto LAB_109aa1c9c;
      }
      if (uVar11 != 4) {
        if (uVar11 != 5) goto LAB_109aa13c4;
        lVar9 = *param_3;
        puVar6 = puVar16 + 1;
        puVar7 = puVar16 + 2;
        puVar15 = puVar16 + 3;
        uVar17 = *puVar6;
        uVar18 = *puVar16;
        sVar12 = *(short *)(lVar9 + (long)(int)uVar17 * 2);
        sVar3 = *(short *)(lVar9 + (long)(int)uVar18 * 2);
        uVar25 = *puVar7;
        sVar4 = *(short *)(lVar9 + (long)(int)uVar25 * 2);
        if (sVar12 < sVar3) {
          lVar22 = (long)(int)uVar18;
          if (sVar4 < sVar12) {
            *puVar16 = uVar25;
          }
          else {
            *puVar16 = uVar17;
            *puVar6 = uVar18;
            uVar25 = *puVar7;
            if (sVar3 <= *(short *)(lVar9 + (long)(int)uVar25 * 2)) goto LAB_109aa1dd0;
            *puVar6 = uVar25;
          }
          *puVar7 = uVar18;
          uVar25 = uVar18;
        }
        else {
          if (sVar12 <= sVar4) {
            lVar22 = (long)(int)uVar25;
            goto LAB_109aa1de0;
          }
          *puVar6 = uVar25;
          *puVar7 = uVar17;
          uVar18 = *puVar16;
          if (*(short *)(lVar9 + (long)(int)uVar18 * 2) <=
              *(short *)(lVar9 + (long)(int)*puVar6 * 2)) {
            lVar22 = (long)(int)uVar17;
            uVar25 = uVar17;
            goto LAB_109aa1de0;
          }
          *puVar16 = *puVar6;
          *puVar6 = uVar18;
          uVar25 = *puVar7;
LAB_109aa1dd0:
          lVar22 = (long)(int)uVar25;
        }
LAB_109aa1de0:
        if (*(short *)(lVar9 + (long)(int)*puVar15 * 2) < *(short *)(lVar9 + lVar22 * 2)) {
          *puVar7 = *puVar15;
          *puVar15 = uVar25;
          uVar17 = *puVar6;
          if (*(short *)(lVar9 + (long)(int)*puVar7 * 2) < *(short *)(lVar9 + (long)(int)uVar17 * 2)
             ) {
            *puVar6 = *puVar7;
            *puVar7 = uVar17;
            uVar17 = *puVar16;
            if (*(short *)(lVar9 + (long)(int)*puVar6 * 2) <
                *(short *)(lVar9 + (long)(int)uVar17 * 2)) {
              *puVar16 = *puVar6;
              *puVar6 = uVar17;
            }
          }
        }
        uVar17 = param_2[-1];
        uVar18 = *puVar15;
        if (*(short *)(lVar9 + (long)(int)uVar17 * 2) < *(short *)(lVar9 + (long)(int)uVar18 * 2)) {
          *puVar15 = uVar17;
          param_2[-1] = uVar18;
          uVar17 = *puVar7;
          if (*(short *)(lVar9 + (long)(int)*puVar15 * 2) <
              *(short *)(lVar9 + (long)(int)uVar17 * 2)) {
            *puVar7 = *puVar15;
            *puVar15 = uVar17;
            uVar17 = *puVar6;
            if (*(short *)(lVar9 + (long)(int)*puVar7 * 2) <
                *(short *)(lVar9 + (long)(int)uVar17 * 2)) {
              *puVar6 = *puVar7;
              *puVar7 = uVar17;
              uVar17 = *puVar16;
              if (*(short *)(lVar9 + (long)(int)*puVar6 * 2) <
                  *(short *)(lVar9 + (long)(int)uVar17 * 2)) {
                *puVar16 = *puVar6;
                *puVar6 = uVar17;
              }
            }
          }
        }
        return;
      }
      puVar7 = puVar16 + 1;
      uVar18 = *puVar7;
      puVar15 = puVar16 + 2;
      uVar25 = *puVar15;
      uVar17 = *puVar16;
      lVar22 = *param_3;
      sVar12 = *(short *)(lVar22 + (long)(int)uVar18 * 2);
      sVar3 = *(short *)(lVar22 + (long)(int)uVar17 * 2);
      lVar9 = (long)(int)uVar25;
      sVar4 = *(short *)(lVar22 + (long)(int)uVar25 * 2);
      puVar6 = puVar16;
      if (sVar12 < sVar3) {
        lVar19 = (long)(int)uVar17;
        puVar8 = puVar15;
        uVar13 = uVar17;
        if (sVar12 <= sVar4) {
          *puVar16 = uVar18;
          puVar16[1] = uVar17;
          uVar18 = uVar25;
          puVar6 = puVar7;
          goto joined_r0x000109aa1c30;
        }
      }
      else {
        uVar14 = uVar25;
        if (sVar12 <= sVar4) goto LAB_109aa1cd0;
        lVar9 = (long)(int)uVar18;
        *puVar7 = uVar25;
        *puVar15 = uVar18;
        puVar8 = puVar7;
        uVar13 = uVar18;
        lVar19 = lVar9;
joined_r0x000109aa1c30:
        uVar14 = uVar18;
        if (sVar3 <= sVar4) goto LAB_109aa1cd0;
      }
      lVar9 = lVar19;
      *puVar6 = uVar25;
      *puVar8 = uVar17;
      uVar14 = uVar13;
LAB_109aa1cd0:
      if (*(short *)(lVar22 + lVar9 * 2) <= *(short *)(lVar22 + (long)(int)param_2[-1] * 2)) {
        return;
      }
      *puVar15 = param_2[-1];
      param_2[-1] = uVar14;
      uVar17 = *puVar15;
      uVar18 = *puVar7;
      sVar12 = *(short *)(lVar22 + (long)(int)uVar17 * 2);
      if (sVar12 < *(short *)(lVar22 + (long)(int)uVar18 * 2)) {
        puVar16[1] = uVar17;
        puVar16[2] = uVar18;
        uVar18 = *puVar16;
        if (sVar12 < *(short *)(lVar22 + (long)(int)uVar18 * 2)) {
          *puVar16 = uVar17;
          puVar16[1] = uVar18;
          return;
        }
        return;
      }
      return;
    }
    if (uVar11 < 2) {
      return;
    }
    if (uVar11 == 2) {
      uVar17 = *puVar16;
      if (*(short *)(*param_3 + (long)(int)uVar17 * 2) <=
          *(short *)(*param_3 + (long)(int)param_2[-1] * 2)) {
        return;
      }
      *puVar16 = param_2[-1];
LAB_109aa1c9c:
      param_2[-1] = uVar17;
      return;
    }
LAB_109aa13c4:
    if ((long)uVar11 < 0x18) {
      lVar9 = *param_3;
      puVar6 = puVar16 + 1;
      if ((param_5 & 1) == 0) {
        if (puVar16 != param_2 && puVar6 != param_2) {
          do {
            puVar7 = puVar6;
            lVar22 = (long)(int)*puVar16;
            uVar17 = puVar16[1];
            sVar12 = *(short *)(lVar9 + (long)(int)uVar17 * 2);
            puVar16 = puVar7;
            if (sVar12 < *(short *)(lVar9 + lVar22 * 2)) {
              do {
                *puVar16 = (uint)lVar22;
                lVar22 = (long)(int)puVar16[-2];
                puVar16 = puVar16 + -1;
              } while (sVar12 < *(short *)(lVar9 + lVar22 * 2));
              *puVar16 = uVar17;
            }
            puVar6 = puVar7 + 1;
            puVar16 = puVar7;
          } while (puVar7 + 1 != param_2);
          return;
        }
        return;
      }
      if (puVar16 == param_2 || puVar6 == param_2) {
        return;
      }
      lVar22 = 0;
      puVar7 = puVar16;
      do {
        lVar19 = (long)(int)*puVar7;
        uVar17 = puVar7[1];
        sVar12 = *(short *)(lVar9 + (long)(int)uVar17 * 2);
        lVar5 = lVar22;
        if (sVar12 < *(short *)(lVar9 + lVar19 * 2)) {
          do {
            lVar21 = lVar5;
            *(int *)((long)puVar16 + lVar21 + 4) = (int)lVar19;
            puVar7 = puVar16;
            if (lVar21 == 0) goto LAB_109aa19d0;
            lVar19 = (long)*(int *)((long)puVar16 + lVar21 + -4);
            lVar5 = lVar21 + -4;
          } while (sVar12 < *(short *)(lVar9 + lVar19 * 2));
          puVar7 = (uint *)((long)puVar16 + lVar21);
LAB_109aa19d0:
          *puVar7 = uVar17;
        }
        puVar15 = puVar6 + 1;
        lVar22 = lVar22 + 4;
        puVar7 = puVar6;
        puVar6 = puVar15;
        if (puVar15 == param_2) {
          return;
        }
      } while( true );
    }
    if (param_4 == 0) {
      if (puVar16 == param_2) {
        return;
      }
      uVar10 = uVar11 - 2 >> 1;
      lVar9 = *param_3;
      uVar20 = uVar10;
      do {
        if ((long)uVar20 <= (long)uVar10) {
          uVar24 = uVar20 << 1 | 1;
          puVar6 = puVar16 + uVar24;
          uVar1 = uVar20 * 2 + 2;
          uVar17 = *puVar6;
          puVar7 = puVar6;
          uVar23 = uVar24;
          uVar18 = uVar17;
          if ((long)uVar1 < (long)uVar11) {
            uVar18 = puVar6[1];
            puVar7 = puVar6 + 1;
            uVar23 = uVar1;
            if (*(short *)(lVar9 + (long)(int)uVar18 * 2) <=
                *(short *)(lVar9 + (long)(int)uVar17 * 2)) {
              puVar7 = puVar6;
              uVar23 = uVar24;
              uVar18 = uVar17;
            }
          }
          uVar17 = puVar16[uVar20];
          sVar12 = *(short *)(lVar9 + (long)(int)uVar17 * 2);
          puVar6 = puVar16 + uVar20;
          if (sVar12 <= *(short *)(lVar9 + (long)(int)uVar18 * 2)) {
            do {
              puVar15 = puVar7;
              *puVar6 = uVar18;
              if ((long)uVar10 < (long)uVar23) break;
              uVar24 = uVar23 << 1 | 1;
              puVar6 = puVar16 + uVar24;
              uVar1 = uVar23 * 2 + 2;
              uVar25 = *puVar6;
              puVar7 = puVar6;
              uVar23 = uVar24;
              uVar18 = uVar25;
              if ((long)uVar1 < (long)uVar11) {
                uVar18 = puVar6[1];
                puVar7 = puVar6 + 1;
                uVar23 = uVar1;
                if (*(short *)(lVar9 + (long)(int)uVar18 * 2) <=
                    *(short *)(lVar9 + (long)(int)uVar25 * 2)) {
                  puVar7 = puVar6;
                  uVar23 = uVar24;
                  uVar18 = uVar25;
                }
              }
              puVar6 = puVar15;
            } while (sVar12 <= *(short *)(lVar9 + (long)(int)uVar18 * 2));
            *puVar15 = uVar17;
            lVar9 = *param_3;
          }
        }
        bVar2 = uVar20 != 0;
        uVar20 = uVar20 - 1;
      } while (bVar2);
      do {
        uVar17 = *puVar16;
        lVar9 = *param_3;
        puVar6 = puVar16;
        uVar20 = 0;
        do {
          puVar15 = puVar6 + uVar20 + 1;
          uVar18 = *puVar15;
          uVar1 = uVar20 << 1 | 1;
          uVar10 = uVar20 * 2 + 2;
          puVar7 = puVar15;
          uVar24 = uVar1;
          uVar25 = uVar18;
          if ((long)uVar10 < (long)uVar11) {
            uVar25 = puVar6[uVar20 + 2];
            puVar7 = puVar6 + uVar20 + 2;
            uVar24 = uVar10;
            if (*(short *)(lVar9 + (long)(int)uVar25 * 2) <=
                *(short *)(lVar9 + (long)(int)uVar18 * 2)) {
              puVar7 = puVar15;
              uVar24 = uVar1;
              uVar25 = uVar18;
            }
          }
          *puVar6 = uVar25;
          puVar6 = puVar7;
          uVar20 = uVar24;
        } while ((long)uVar24 <= (long)(uVar11 - 2 >> 1));
        param_2 = param_2 + -1;
        if (puVar7 == param_2) {
          *puVar7 = uVar17;
        }
        else {
          *puVar7 = *param_2;
          *param_2 = uVar17;
          lVar9 = (long)puVar7 + (4 - (long)puVar16) >> 2;
          if (1 < lVar9) {
            lVar22 = *param_3;
            uVar20 = lVar9 - 2U >> 1;
            lVar9 = (long)(int)puVar16[uVar20];
            uVar17 = *puVar7;
            sVar12 = *(short *)(lVar22 + (long)(int)uVar17 * 2);
            puVar6 = puVar16 + uVar20;
            if (*(short *)(lVar22 + lVar9 * 2) < sVar12) {
              do {
                puVar15 = puVar6;
                *puVar7 = (uint)lVar9;
                if (uVar20 == 0) break;
                uVar20 = uVar20 - 1 >> 1;
                lVar9 = (long)(int)puVar16[uVar20];
                puVar7 = puVar15;
                puVar6 = puVar16 + uVar20;
              } while (*(short *)(lVar22 + lVar9 * 2) < sVar12);
              *puVar15 = uVar17;
            }
          }
        }
        bVar2 = (long)uVar11 < 3;
        uVar11 = uVar11 - 1;
        if (bVar2) {
          return;
        }
      } while( true );
    }
    puVar6 = puVar16 + (uVar11 >> 1);
    lVar9 = *param_3;
    uVar17 = param_2[-1];
    sVar12 = *(short *)(lVar9 + (long)(int)uVar17 * 2);
    if (uVar11 < 0x81) {
      uVar18 = *puVar16;
      uVar25 = *puVar6;
      sVar3 = *(short *)(lVar9 + (long)(int)uVar18 * 2);
      sVar4 = *(short *)(lVar9 + (long)(int)uVar25 * 2);
      if (sVar3 < sVar4) {
        if (sVar12 < sVar3) {
          *puVar6 = uVar17;
        }
        else {
          *puVar6 = uVar18;
          *puVar16 = uVar25;
          if (sVar4 <= *(short *)(lVar9 + (long)(int)param_2[-1] * 2)) goto LAB_109aa1668;
          *puVar16 = param_2[-1];
        }
        param_2[-1] = uVar25;
      }
      else if (sVar12 < sVar3) {
        *puVar16 = uVar17;
        param_2[-1] = uVar18;
        uVar17 = *puVar6;
        if (*(short *)(lVar9 + (long)(int)*puVar16 * 2) < *(short *)(lVar9 + (long)(int)uVar17 * 2))
        {
          *puVar6 = *puVar16;
          *puVar16 = uVar17;
        }
      }
    }
    else {
      uVar18 = *puVar6;
      uVar25 = *puVar16;
      sVar3 = *(short *)(lVar9 + (long)(int)uVar18 * 2);
      sVar4 = *(short *)(lVar9 + (long)(int)uVar25 * 2);
      if (sVar3 < sVar4) {
        if (sVar12 < sVar3) {
          *puVar16 = uVar17;
        }
        else {
          *puVar16 = uVar18;
          *puVar6 = uVar25;
          if (sVar4 <= *(short *)(lVar9 + (long)(int)param_2[-1] * 2)) goto LAB_109aa14c4;
          *puVar6 = param_2[-1];
        }
        param_2[-1] = uVar25;
      }
      else if (sVar12 < sVar3) {
        *puVar6 = uVar17;
        param_2[-1] = uVar18;
        uVar17 = *puVar16;
        if (*(short *)(lVar9 + (long)(int)*puVar6 * 2) < *(short *)(lVar9 + (long)(int)uVar17 * 2))
        {
          *puVar16 = *puVar6;
          *puVar6 = uVar17;
        }
      }
LAB_109aa14c4:
      puVar7 = puVar6 + -1;
      uVar17 = *puVar7;
      uVar18 = puVar16[1];
      sVar12 = *(short *)(lVar9 + (long)(int)uVar17 * 2);
      sVar3 = *(short *)(lVar9 + (long)(int)uVar18 * 2);
      uVar25 = param_2[-2];
      sVar4 = *(short *)(lVar9 + (long)(int)uVar25 * 2);
      if (sVar12 < sVar3) {
        if (sVar4 < sVar12) {
          puVar16[1] = uVar25;
        }
        else {
          puVar16[1] = uVar17;
          *puVar7 = uVar18;
          if (sVar3 <= *(short *)(lVar9 + (long)(int)param_2[-2] * 2)) goto LAB_109aa1570;
          *puVar7 = param_2[-2];
        }
        param_2[-2] = uVar18;
      }
      else if (sVar4 < sVar12) {
        *puVar7 = uVar25;
        param_2[-2] = uVar17;
        uVar17 = puVar16[1];
        if (*(short *)(lVar9 + (long)(int)*puVar7 * 2) < *(short *)(lVar9 + (long)(int)uVar17 * 2))
        {
          puVar16[1] = *puVar7;
          *puVar7 = uVar17;
        }
      }
LAB_109aa1570:
      puVar15 = puVar6 + 1;
      uVar17 = *puVar15;
      uVar18 = puVar16[2];
      sVar12 = *(short *)(lVar9 + (long)(int)uVar17 * 2);
      sVar3 = *(short *)(lVar9 + (long)(int)uVar18 * 2);
      uVar25 = param_2[-3];
      sVar4 = *(short *)(lVar9 + (long)(int)uVar25 * 2);
      if (sVar12 < sVar3) {
        if (sVar4 < sVar12) {
          puVar16[2] = uVar25;
        }
        else {
          puVar16[2] = uVar17;
          *puVar15 = uVar18;
          if (sVar3 <= *(short *)(lVar9 + (long)(int)param_2[-3] * 2)) goto LAB_109aa15f8;
          *puVar15 = param_2[-3];
        }
        param_2[-3] = uVar18;
      }
      else if (sVar4 < sVar12) {
        *puVar15 = uVar25;
        param_2[-3] = uVar17;
        uVar17 = puVar16[2];
        if (*(short *)(lVar9 + (long)(int)*puVar15 * 2) < *(short *)(lVar9 + (long)(int)uVar17 * 2))
        {
          puVar16[2] = *puVar15;
          *puVar15 = uVar17;
        }
      }
LAB_109aa15f8:
      uVar17 = *puVar6;
      uVar18 = puVar6[1];
      sVar12 = *(short *)(lVar9 + (long)(int)uVar17 * 2);
      uVar25 = puVar6[-1];
      sVar3 = *(short *)(lVar9 + (long)(int)uVar25 * 2);
      sVar4 = *(short *)(lVar9 + (long)(int)uVar18 * 2);
      if (sVar12 < sVar3) {
        uVar14 = uVar17;
        if (sVar12 <= sVar4) {
          puVar6[-1] = uVar17;
          *puVar6 = uVar25;
          puVar7 = puVar6;
          uVar17 = uVar25;
          uVar14 = uVar18;
          if (sVar3 <= sVar4) goto LAB_109aa165c;
        }
LAB_109aa1654:
        *puVar7 = uVar18;
        *puVar15 = uVar25;
        uVar17 = uVar14;
      }
      else if (sVar4 < sVar12) {
        *puVar6 = uVar18;
        puVar6[1] = uVar17;
        puVar15 = puVar6;
        uVar17 = uVar18;
        uVar14 = uVar25;
        if (sVar4 < sVar3) goto LAB_109aa1654;
      }
LAB_109aa165c:
      uVar18 = *puVar16;
      *puVar16 = uVar17;
      *puVar6 = uVar18;
    }
LAB_109aa1668:
    param_4 = param_4 + -1;
    uVar17 = *puVar16;
    param_1 = puVar16;
    if ((param_5 & 1) == 0) {
      sVar12 = *(short *)(lVar9 + (long)(int)uVar17 * 2);
      if (sVar12 <= *(short *)(lVar9 + (long)(int)puVar16[-1] * 2)) {
        if (sVar12 < *(short *)(lVar9 + (long)(int)param_2[-1] * 2)) {
          do {
            param_1 = param_1 + 1;
          } while (*(short *)(lVar9 + (long)(int)*param_1 * 2) <= sVar12);
        }
        else {
          do {
            param_1 = param_1 + 1;
            if (param_2 <= param_1) break;
          } while (*(short *)(lVar9 + (long)(int)*param_1 * 2) <= sVar12);
        }
        puVar6 = param_2;
        if (param_1 < param_2) {
          do {
            puVar6 = puVar6 + -1;
          } while (sVar12 < *(short *)(lVar9 + (long)(int)*puVar6 * 2));
        }
        if (param_1 < puVar6) {
          uVar11 = (ulong)*param_1;
          uVar20 = (ulong)*puVar6;
          do {
            *param_1 = (uint)uVar20;
            *puVar6 = (uint)uVar11;
            do {
              param_1 = param_1 + 1;
              uVar11 = (ulong)(int)*param_1;
            } while (*(short *)(lVar9 + uVar11 * 2) <= sVar12);
            do {
              puVar6 = puVar6 + -1;
              uVar20 = (ulong)(int)*puVar6;
            } while (sVar12 < *(short *)(lVar9 + uVar20 * 2));
          } while (param_1 < puVar6);
        }
        puVar6 = param_1 + -1;
        if (puVar6 != puVar16) {
          *puVar16 = *puVar6;
        }
        param_5 = 0;
        *puVar6 = uVar17;
        goto LAB_109aa1388;
      }
    }
    else {
      sVar12 = *(short *)(lVar9 + (long)(int)uVar17 * 2);
    }
    lVar22 = 0;
    do {
      lVar19 = (long)*(int *)((long)puVar16 + lVar22 + 4);
      lVar22 = lVar22 + 4;
    } while (*(short *)(lVar9 + lVar19 * 2) < sVar12);
    puVar6 = (uint *)((long)puVar16 + lVar22);
    puVar7 = param_2;
    if (lVar22 == 4) {
      do {
        if (puVar7 <= puVar6) break;
        puVar7 = puVar7 + -1;
      } while (sVar12 <= *(short *)(lVar9 + (long)(int)*puVar7 * 2));
    }
    else {
      do {
        puVar7 = puVar7 + -1;
      } while (sVar12 <= *(short *)(lVar9 + (long)(int)*puVar7 * 2));
    }
    param_1 = puVar6;
    if (puVar6 < puVar7) {
      uVar11 = (ulong)*puVar7;
      puVar15 = puVar7;
      do {
        *param_1 = (uint)uVar11;
        *puVar15 = (uint)lVar19;
        do {
          param_1 = param_1 + 1;
          lVar19 = (long)(int)*param_1;
        } while (*(short *)(lVar9 + lVar19 * 2) < sVar12);
        do {
          puVar15 = puVar15 + -1;
          uVar11 = (ulong)(int)*puVar15;
        } while (sVar12 <= *(short *)(lVar9 + uVar11 * 2));
      } while (param_1 < puVar15);
    }
    puVar15 = param_1 + -1;
    if (puVar15 != puVar16) {
      *puVar16 = *puVar15;
    }
    *puVar15 = uVar17;
    if (puVar6 < puVar7) {
LAB_109aa178c:
      FUN_109aa1358(puVar16,puVar15,param_3,param_4,param_5 & 1);
      param_5 = 0;
    }
    else {
      puVar6 = puVar16;
      FUN_109aa1ec0(puVar16,puVar15,*param_3);
      puVar7 = param_1;
      FUN_109aa1ec0(param_1,param_2,*param_3);
      if ((int)puVar7 == 0) {
        if (((ulong)puVar6 & 1) == 0) goto LAB_109aa178c;
      }
      else {
        param_1 = puVar16;
        param_2 = puVar15;
        if (((ulong)puVar6 & 1) != 0) {
          return;
        }
      }
    }
  } while( true );
}



/* Entry: 109aa1d34; end: 109aa1ebf;  */

void FUN_109aa1d34(int *param_1,int *param_2,int *param_3,int *param_4,int *param_5,long param_6)

{
  int iVar1;
  int iVar2;
  short sVar3;
  short sVar4;
  short sVar5;
  long lVar6;
  int iVar7;
  
  iVar1 = *param_2;
  iVar2 = *param_1;
  sVar3 = *(short *)(param_6 + (long)iVar1 * 2);
  sVar4 = *(short *)(param_6 + (long)iVar2 * 2);
  iVar7 = *param_3;
  sVar5 = *(short *)(param_6 + (long)iVar7 * 2);
  if (sVar3 < sVar4) {
    lVar6 = (long)iVar2;
    if (sVar5 < sVar3) {
      *param_1 = iVar7;
    }
    else {
      *param_1 = iVar1;
      *param_2 = iVar2;
      iVar7 = *param_3;
      if (sVar4 <= *(short *)(param_6 + (long)iVar7 * 2)) goto LAB_109aa1dd0;
      *param_2 = iVar7;
    }
    *param_3 = iVar2;
    iVar7 = iVar2;
  }
  else {
    if (sVar3 <= sVar5) {
      lVar6 = (long)iVar7;
      goto LAB_109aa1de0;
    }
    *param_2 = iVar7;
    *param_3 = iVar1;
    iVar2 = *param_1;
    if (*(short *)(param_6 + (long)iVar2 * 2) <= *(short *)(param_6 + (long)*param_2 * 2)) {
      lVar6 = (long)iVar1;
      iVar7 = iVar1;
      goto LAB_109aa1de0;
    }
    *param_1 = *param_2;
    *param_2 = iVar2;
    iVar7 = *param_3;
LAB_109aa1dd0:
    lVar6 = (long)iVar7;
  }
LAB_109aa1de0:
  if (*(short *)(param_6 + (long)*param_4 * 2) < *(short *)(param_6 + lVar6 * 2)) {
    *param_3 = *param_4;
    *param_4 = iVar7;
    iVar1 = *param_2;
    if (*(short *)(param_6 + (long)*param_3 * 2) < *(short *)(param_6 + (long)iVar1 * 2)) {
      *param_2 = *param_3;
      *param_3 = iVar1;
      iVar1 = *param_1;
      if (*(short *)(param_6 + (long)*param_2 * 2) < *(short *)(param_6 + (long)iVar1 * 2)) {
        *param_1 = *param_2;
        *param_2 = iVar1;
      }
    }
  }
  iVar1 = *param_4;
  if (*(short *)(param_6 + (long)*param_5 * 2) < *(short *)(param_6 + (long)iVar1 * 2)) {
    *param_4 = *param_5;
    *param_5 = iVar1;
    iVar1 = *param_3;
    if (*(short *)(param_6 + (long)*param_4 * 2) < *(short *)(param_6 + (long)iVar1 * 2)) {
      *param_3 = *param_4;
      *param_4 = iVar1;
      iVar1 = *param_2;
      if (*(short *)(param_6 + (long)*param_3 * 2) < *(short *)(param_6 + (long)iVar1 * 2)) {
        *param_2 = *param_3;
        *param_3 = iVar1;
        iVar1 = *param_1;
        if (*(short *)(param_6 + (long)*param_2 * 2) < *(short *)(param_6 + (long)iVar1 * 2)) {
          *param_1 = *param_2;
          *param_2 = iVar1;
        }
      }
    }
  }
  return;
}



/* Entry: 109aa1ec0; end: 109aa21b3;  */

bool FUN_109aa1ec0(int *param_1,int *param_2,long param_3)

{
  short sVar1;
  short sVar2;
  short sVar3;
  int iVar4;
  int iVar5;
  long lVar6;
  int *piVar7;
  ulong uVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int *piVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  int *piVar16;
  int *piVar17;
  
  uVar8 = (long)param_2 - (long)param_1 >> 2;
  if ((long)uVar8 < 3) {
    if (uVar8 < 2) {
      return true;
    }
    if (uVar8 == 2) {
      iVar9 = *param_1;
      if (*(short *)(param_3 + (long)param_2[-1] * 2) < *(short *)(param_3 + (long)iVar9 * 2)) {
        *param_1 = param_2[-1];
        param_2[-1] = iVar9;
        return true;
      }
      return true;
    }
  }
  else {
    if (uVar8 == 3) {
      iVar9 = *param_1;
      iVar4 = param_1[1];
      sVar1 = *(short *)(param_3 + (long)iVar4 * 2);
      sVar2 = *(short *)(param_3 + (long)iVar9 * 2);
      iVar5 = param_2[-1];
      sVar3 = *(short *)(param_3 + (long)iVar5 * 2);
      if (sVar1 < sVar2) {
        if (sVar3 < sVar1) {
          *param_1 = iVar5;
        }
        else {
          *param_1 = iVar4;
          param_1[1] = iVar9;
          if (sVar2 <= *(short *)(param_3 + (long)param_2[-1] * 2)) {
            return true;
          }
          param_1[1] = param_2[-1];
        }
        param_2[-1] = iVar9;
        return true;
      }
      if (sVar3 < sVar1) {
        param_1[1] = iVar5;
        param_2[-1] = iVar4;
        iVar9 = *param_1;
        if (*(short *)(param_3 + (long)param_1[1] * 2) < *(short *)(param_3 + (long)iVar9 * 2)) {
          *param_1 = param_1[1];
          param_1[1] = iVar9;
          return true;
        }
        return true;
      }
      return true;
    }
    if (uVar8 == 4) {
      piVar16 = param_1 + 1;
      iVar4 = *piVar16;
      piVar17 = param_1 + 2;
      iVar5 = *piVar17;
      iVar9 = *param_1;
      sVar1 = *(short *)(param_3 + (long)iVar4 * 2);
      sVar2 = *(short *)(param_3 + (long)iVar9 * 2);
      lVar13 = (long)iVar5;
      sVar3 = *(short *)(param_3 + (long)iVar5 * 2);
      piVar12 = param_1;
      if (sVar1 < sVar2) {
        lVar14 = (long)iVar9;
        piVar7 = piVar17;
        iVar10 = iVar9;
        if (sVar1 <= sVar3) {
          *param_1 = iVar4;
          param_1[1] = iVar9;
          iVar4 = iVar5;
          piVar12 = piVar16;
          goto joined_r0x000109aa20f8;
        }
      }
      else {
        iVar11 = iVar5;
        if (sVar1 <= sVar3) goto LAB_109aa214c;
        lVar13 = (long)iVar4;
        *piVar16 = iVar5;
        *piVar17 = iVar4;
        piVar7 = piVar16;
        iVar10 = iVar4;
        lVar14 = lVar13;
joined_r0x000109aa20f8:
        iVar11 = iVar4;
        if (sVar2 <= sVar3) goto LAB_109aa214c;
      }
      lVar13 = lVar14;
      *piVar12 = iVar5;
      *piVar7 = iVar9;
      iVar11 = iVar10;
LAB_109aa214c:
      if (*(short *)(param_3 + lVar13 * 2) <= *(short *)(param_3 + (long)param_2[-1] * 2)) {
        return true;
      }
      *piVar17 = param_2[-1];
      param_2[-1] = iVar11;
      iVar9 = *piVar17;
      iVar4 = *piVar16;
      sVar1 = *(short *)(param_3 + (long)iVar9 * 2);
      if (sVar1 < *(short *)(param_3 + (long)iVar4 * 2)) {
        param_1[1] = iVar9;
        param_1[2] = iVar4;
        iVar4 = *param_1;
        if (sVar1 < *(short *)(param_3 + (long)iVar4 * 2)) {
          *param_1 = iVar9;
          param_1[1] = iVar4;
          return true;
        }
        return true;
      }
      return true;
    }
    if (uVar8 == 5) {
      FUN_109aa1d34(param_1,param_1 + 1,param_1 + 2,param_1 + 3,param_2 + -1);
      return true;
    }
  }
  piVar12 = param_1 + 2;
  iVar9 = *piVar12;
  piVar17 = param_1 + 1;
  iVar4 = *piVar17;
  sVar1 = *(short *)(param_3 + (long)iVar4 * 2);
  iVar5 = *param_1;
  sVar2 = *(short *)(param_3 + (long)iVar5 * 2);
  sVar3 = *(short *)(param_3 + (long)iVar9 * 2);
  piVar16 = param_1;
  if (sVar1 < sVar2) {
    piVar7 = piVar12;
    if (sVar1 <= sVar3) {
      *param_1 = iVar4;
      param_1[1] = iVar5;
      piVar16 = piVar17;
      piVar17 = piVar12;
      goto LAB_109aa203c;
    }
  }
  else {
    if (sVar1 <= sVar3) goto LAB_109aa204c;
    *piVar17 = iVar9;
    *piVar12 = iVar4;
LAB_109aa203c:
    piVar7 = piVar17;
    if (sVar2 <= sVar3) goto LAB_109aa204c;
  }
  *piVar16 = iVar9;
  *piVar7 = iVar5;
LAB_109aa204c:
  if (param_1 + 3 != param_2) {
    iVar9 = 0;
    lVar13 = 0xc;
    piVar16 = param_1 + 3;
    do {
      piVar17 = piVar16;
      iVar4 = *piVar17;
      lVar15 = (long)*piVar12;
      sVar1 = *(short *)(param_3 + (long)iVar4 * 2);
      lVar14 = lVar13;
      if (sVar1 < *(short *)(param_3 + lVar15 * 2)) {
        do {
          *(int *)((long)param_1 + lVar14) = (int)lVar15;
          lVar6 = lVar14 + -4;
          piVar12 = param_1;
          if (lVar6 == 0) goto LAB_109aa20ac;
          lVar15 = (long)*(int *)((long)param_1 + lVar14 + -8);
          lVar14 = lVar6;
        } while (sVar1 < *(short *)(param_3 + lVar15 * 2));
        piVar12 = (int *)((long)param_1 + lVar6);
LAB_109aa20ac:
        *piVar12 = iVar4;
        iVar9 = iVar9 + 1;
        if (iVar9 == 8) {
          return piVar17 + 1 == param_2;
        }
      }
      lVar13 = lVar13 + 4;
      piVar16 = piVar17 + 1;
      piVar12 = piVar17;
    } while (piVar17 + 1 != param_2);
  }
  return true;
}



/* Entry: 109aa21b4; end: 109aa2bf7;  */

void FUN_109aa21b4(uint *param_1,uint *param_2,long *param_3,long param_4,uint param_5)

{
  ulong uVar1;
  bool bVar2;
  int iVar3;
  uint *puVar4;
  uint *puVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  int iVar9;
  uint *puVar10;
  uint uVar11;
  uint uVar12;
  uint *puVar13;
  long lVar14;
  ulong uVar15;
  uint uVar16;
  uint uVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  ulong uVar21;
  ulong uVar22;
  uint uVar23;
  uint *puVar24;
  
LAB_109aa21e4:
  do {
    puVar10 = param_1;
    uVar8 = (long)param_2 - (long)puVar10 >> 2;
    if (uVar8 - 2 == 0 || (long)uVar8 < 2) {
      if (uVar8 < 2) {
        return;
      }
      if (uVar8 == 2) {
        uVar16 = *puVar10;
        if (*(int *)(*param_3 + (long)(int)uVar16 * 4) <=
            *(int *)(*param_3 + (long)(int)param_2[-1] * 4)) {
          return;
        }
        *puVar10 = param_2[-1];
        param_2[-1] = uVar16;
        return;
      }
    }
    else {
      if (uVar8 == 3) {
        uVar16 = *puVar10;
        uVar17 = puVar10[1];
        lVar6 = *param_3;
        iVar9 = *(int *)(lVar6 + (long)(int)uVar17 * 4);
        uVar23 = param_2[-1];
        iVar3 = *(int *)(lVar6 + (long)(int)uVar23 * 4);
        if (iVar9 < *(int *)(lVar6 + (long)(int)uVar16 * 4)) {
          if (iVar3 < iVar9) {
            *puVar10 = uVar23;
          }
          else {
            *puVar10 = uVar17;
            puVar10[1] = uVar16;
            if (*(int *)(lVar6 + (long)(int)uVar16 * 4) <=
                *(int *)(lVar6 + (long)(int)param_2[-1] * 4)) {
              return;
            }
            puVar10[1] = param_2[-1];
          }
          param_2[-1] = uVar16;
          return;
        }
        if (iVar9 <= iVar3) {
          return;
        }
        puVar10[1] = uVar23;
        param_2[-1] = uVar17;
        uVar16 = *puVar10;
        if (*(int *)(lVar6 + (long)(int)uVar16 * 4) <= *(int *)(lVar6 + (long)(int)puVar10[1] * 4))
        {
          return;
        }
        *puVar10 = puVar10[1];
        puVar10[1] = uVar16;
        return;
      }
      if (uVar8 == 4) {
        puVar5 = puVar10 + 1;
        uVar17 = *puVar5;
        puVar13 = puVar10 + 2;
        uVar23 = *puVar13;
        uVar16 = *puVar10;
        lVar20 = *param_3;
        iVar9 = *(int *)(lVar20 + (long)(int)uVar17 * 4);
        lVar18 = (long)(int)uVar16;
        lVar6 = (long)(int)uVar23;
        iVar3 = *(int *)(lVar20 + (long)(int)uVar23 * 4);
        puVar4 = puVar10;
        uVar12 = uVar23;
        if (iVar9 < *(int *)(lVar20 + (long)(int)uVar16 * 4)) {
          puVar24 = puVar13;
          uVar11 = uVar16;
          if (iVar9 <= iVar3) {
            *puVar10 = uVar17;
            puVar10[1] = uVar16;
            puVar4 = puVar5;
            if (*(int *)(lVar20 + lVar18 * 4) <= *(int *)(lVar20 + lVar6 * 4)) goto LAB_109aa2b90;
          }
        }
        else {
          if (iVar9 <= iVar3) goto LAB_109aa2b90;
          *puVar5 = uVar23;
          *puVar13 = uVar17;
          lVar19 = lVar6 * 4;
          lVar14 = lVar18 * 4;
          lVar18 = (long)(int)uVar17;
          lVar6 = lVar18;
          puVar24 = puVar5;
          uVar11 = uVar17;
          uVar12 = uVar17;
          if (*(int *)(lVar20 + lVar14) <= *(int *)(lVar20 + lVar19)) goto LAB_109aa2b90;
        }
        *puVar4 = uVar23;
        *puVar24 = uVar16;
        lVar6 = lVar18;
        uVar12 = uVar11;
LAB_109aa2b90:
        if (*(int *)(lVar20 + lVar6 * 4) <= *(int *)(lVar20 + (long)(int)param_2[-1] * 4)) {
          return;
        }
        *puVar13 = param_2[-1];
        param_2[-1] = uVar12;
        uVar16 = *puVar13;
        uVar17 = *puVar5;
        if (*(int *)(lVar20 + (long)(int)uVar17 * 4) <= *(int *)(lVar20 + (long)(int)uVar16 * 4)) {
          return;
        }
        puVar10[1] = uVar16;
        puVar10[2] = uVar17;
        uVar17 = *puVar10;
        if (*(int *)(lVar20 + (long)(int)uVar17 * 4) <= *(int *)(lVar20 + (long)(int)uVar16 * 4)) {
          return;
        }
        *puVar10 = uVar16;
        puVar10[1] = uVar17;
        return;
      }
      if (uVar8 == 5) {
        lVar6 = *param_3;
        puVar4 = puVar10 + 1;
        puVar5 = puVar10 + 2;
        puVar13 = puVar10 + 3;
        uVar16 = *puVar4;
        uVar17 = *puVar10;
        iVar9 = *(int *)(lVar6 + (long)(int)uVar16 * 4);
        uVar23 = *puVar5;
        iVar3 = *(int *)(lVar6 + (long)(int)uVar23 * 4);
        if (iVar9 < *(int *)(lVar6 + (long)(int)uVar17 * 4)) {
          lVar20 = (long)(int)uVar17;
          if (iVar3 < iVar9) {
            *puVar10 = uVar23;
          }
          else {
            *puVar10 = uVar16;
            *puVar4 = uVar17;
            uVar23 = *puVar5;
            if (*(int *)(lVar6 + lVar20 * 4) <= *(int *)(lVar6 + (long)(int)uVar23 * 4))
            goto LAB_109aa2c98;
            *puVar4 = uVar23;
          }
          *puVar5 = uVar17;
          uVar23 = uVar17;
        }
        else {
          if (iVar9 <= iVar3) {
            lVar20 = (long)(int)uVar23;
            goto LAB_109aa2ca8;
          }
          *puVar4 = uVar23;
          *puVar5 = uVar16;
          uVar17 = *puVar10;
          if (*(int *)(lVar6 + (long)(int)uVar17 * 4) <= *(int *)(lVar6 + (long)(int)*puVar4 * 4)) {
            lVar20 = (long)(int)uVar16;
            uVar23 = uVar16;
            goto LAB_109aa2ca8;
          }
          *puVar10 = *puVar4;
          *puVar4 = uVar17;
          uVar23 = *puVar5;
LAB_109aa2c98:
          lVar20 = (long)(int)uVar23;
        }
LAB_109aa2ca8:
        if (*(int *)(lVar6 + (long)(int)*puVar13 * 4) < *(int *)(lVar6 + lVar20 * 4)) {
          *puVar5 = *puVar13;
          *puVar13 = uVar23;
          uVar16 = *puVar4;
          if (*(int *)(lVar6 + (long)(int)*puVar5 * 4) < *(int *)(lVar6 + (long)(int)uVar16 * 4)) {
            *puVar4 = *puVar5;
            *puVar5 = uVar16;
            uVar16 = *puVar10;
            if (*(int *)(lVar6 + (long)(int)*puVar4 * 4) < *(int *)(lVar6 + (long)(int)uVar16 * 4))
            {
              *puVar10 = *puVar4;
              *puVar4 = uVar16;
            }
          }
        }
        uVar16 = param_2[-1];
        uVar17 = *puVar13;
        if (*(int *)(lVar6 + (long)(int)uVar16 * 4) < *(int *)(lVar6 + (long)(int)uVar17 * 4)) {
          *puVar13 = uVar16;
          param_2[-1] = uVar17;
          uVar16 = *puVar5;
          if (*(int *)(lVar6 + (long)(int)*puVar13 * 4) < *(int *)(lVar6 + (long)(int)uVar16 * 4)) {
            *puVar5 = *puVar13;
            *puVar13 = uVar16;
            uVar16 = *puVar4;
            if (*(int *)(lVar6 + (long)(int)*puVar5 * 4) < *(int *)(lVar6 + (long)(int)uVar16 * 4))
            {
              *puVar4 = *puVar5;
              *puVar5 = uVar16;
              uVar16 = *puVar10;
              if (*(int *)(lVar6 + (long)(int)*puVar4 * 4) < *(int *)(lVar6 + (long)(int)uVar16 * 4)
                 ) {
                *puVar10 = *puVar4;
                *puVar4 = uVar16;
              }
            }
          }
        }
        return;
      }
    }
    if ((long)uVar8 < 0x18) {
      lVar6 = *param_3;
      puVar4 = puVar10 + 1;
      if ((param_5 & 1) == 0) {
        if (puVar10 == param_2 || puVar4 == param_2) {
          return;
        }
        do {
          puVar5 = puVar4;
          uVar16 = puVar10[1];
          lVar20 = (long)(int)*puVar10;
          puVar10 = puVar5;
          if (*(int *)(lVar6 + (long)(int)uVar16 * 4) < *(int *)(lVar6 + lVar20 * 4)) {
            do {
              *puVar10 = (uint)lVar20;
              lVar20 = (long)(int)puVar10[-2];
              puVar10 = puVar10 + -1;
            } while (*(int *)(lVar6 + (long)(int)uVar16 * 4) < *(int *)(lVar6 + lVar20 * 4));
            *puVar10 = uVar16;
          }
          puVar4 = puVar5 + 1;
          puVar10 = puVar5;
        } while (puVar5 + 1 != param_2);
        return;
      }
      if (puVar10 == param_2 || puVar4 == param_2) {
        return;
      }
      lVar20 = 0;
      puVar5 = puVar10;
      do {
        uVar16 = puVar5[1];
        lVar19 = (long)(int)*puVar5;
        lVar18 = lVar20;
        if (*(int *)(lVar6 + (long)(int)uVar16 * 4) < *(int *)(lVar6 + lVar19 * 4)) {
          do {
            lVar14 = lVar18;
            *(int *)((long)puVar10 + lVar14 + 4) = (int)lVar19;
            puVar5 = puVar10;
            if (lVar14 == 0) goto LAB_109aa2868;
            lVar19 = (long)*(int *)((long)puVar10 + lVar14 + -4);
            lVar18 = lVar14 + -4;
          } while (*(int *)(lVar6 + (long)(int)uVar16 * 4) < *(int *)(lVar6 + lVar19 * 4));
          puVar5 = (uint *)((long)puVar10 + lVar14);
LAB_109aa2868:
          *puVar5 = uVar16;
        }
        puVar13 = puVar4 + 1;
        lVar20 = lVar20 + 4;
        puVar5 = puVar4;
        puVar4 = puVar13;
        if (puVar13 == param_2) {
          return;
        }
      } while( true );
    }
    if (param_4 == 0) {
      if (puVar10 == param_2) {
        return;
      }
      uVar7 = uVar8 - 2 >> 1;
      lVar6 = *param_3;
      uVar15 = uVar7;
      do {
        if ((long)uVar15 <= (long)uVar7) {
          uVar22 = uVar15 << 1 | 1;
          puVar4 = puVar10 + uVar22;
          uVar1 = uVar15 * 2 + 2;
          uVar16 = *puVar4;
          puVar5 = puVar4;
          uVar21 = uVar22;
          uVar17 = uVar16;
          if ((long)uVar1 < (long)uVar8) {
            uVar17 = puVar4[1];
            puVar5 = puVar4 + 1;
            uVar21 = uVar1;
            if (*(int *)(lVar6 + (long)(int)uVar17 * 4) <= *(int *)(lVar6 + (long)(int)uVar16 * 4))
            {
              puVar5 = puVar4;
              uVar21 = uVar22;
              uVar17 = uVar16;
            }
          }
          uVar16 = puVar10[uVar15];
          puVar4 = puVar10 + uVar15;
          if (*(int *)(lVar6 + (long)(int)uVar16 * 4) <= *(int *)(lVar6 + (long)(int)uVar17 * 4)) {
            do {
              puVar13 = puVar5;
              *puVar4 = uVar17;
              if ((long)uVar7 < (long)uVar21) break;
              uVar22 = uVar21 << 1 | 1;
              puVar4 = puVar10 + uVar22;
              uVar1 = uVar21 * 2 + 2;
              uVar23 = *puVar4;
              puVar5 = puVar4;
              uVar21 = uVar22;
              uVar17 = uVar23;
              if ((long)uVar1 < (long)uVar8) {
                uVar17 = puVar4[1];
                puVar5 = puVar4 + 1;
                uVar21 = uVar1;
                if (*(int *)(lVar6 + (long)(int)uVar17 * 4) <=
                    *(int *)(lVar6 + (long)(int)uVar23 * 4)) {
                  puVar5 = puVar4;
                  uVar21 = uVar22;
                  uVar17 = uVar23;
                }
              }
              puVar4 = puVar13;
            } while (*(int *)(lVar6 + (long)(int)uVar16 * 4) <=
                     *(int *)(lVar6 + (long)(int)uVar17 * 4));
            *puVar13 = uVar16;
            lVar6 = *param_3;
          }
        }
        bVar2 = uVar15 != 0;
        uVar15 = uVar15 - 1;
      } while (bVar2);
      do {
        uVar16 = *puVar10;
        lVar6 = *param_3;
        puVar4 = puVar10;
        uVar15 = 0;
        do {
          puVar13 = puVar4 + uVar15 + 1;
          uVar17 = *puVar13;
          uVar1 = uVar15 << 1 | 1;
          uVar7 = uVar15 * 2 + 2;
          puVar5 = puVar13;
          uVar22 = uVar1;
          uVar23 = uVar17;
          if ((long)uVar7 < (long)uVar8) {
            uVar23 = puVar4[uVar15 + 2];
            puVar5 = puVar4 + uVar15 + 2;
            uVar22 = uVar7;
            if (*(int *)(lVar6 + (long)(int)uVar23 * 4) <= *(int *)(lVar6 + (long)(int)uVar17 * 4))
            {
              puVar5 = puVar13;
              uVar22 = uVar1;
              uVar23 = uVar17;
            }
          }
          *puVar4 = uVar23;
          puVar4 = puVar5;
          uVar15 = uVar22;
        } while ((long)uVar22 <= (long)(uVar8 - 2 >> 1));
        param_2 = param_2 + -1;
        if (puVar5 == param_2) {
          *puVar5 = uVar16;
        }
        else {
          *puVar5 = *param_2;
          *param_2 = uVar16;
          lVar6 = (long)puVar5 + (4 - (long)puVar10) >> 2;
          if (1 < lVar6) {
            lVar20 = *param_3;
            uVar15 = lVar6 - 2U >> 1;
            lVar6 = (long)(int)puVar10[uVar15];
            uVar16 = *puVar5;
            puVar4 = puVar10 + uVar15;
            if (*(int *)(lVar20 + lVar6 * 4) < *(int *)(lVar20 + (long)(int)uVar16 * 4)) {
              do {
                puVar13 = puVar4;
                *puVar5 = (uint)lVar6;
                if (uVar15 == 0) break;
                uVar15 = uVar15 - 1 >> 1;
                lVar6 = (long)(int)puVar10[uVar15];
                puVar5 = puVar13;
                puVar4 = puVar10 + uVar15;
              } while (*(int *)(lVar20 + lVar6 * 4) < *(int *)(lVar20 + (long)(int)uVar16 * 4));
              *puVar13 = uVar16;
            }
          }
        }
        bVar2 = (long)uVar8 < 3;
        uVar8 = uVar8 - 1;
        if (bVar2) {
          return;
        }
      } while( true );
    }
    puVar4 = puVar10 + (uVar8 >> 1);
    lVar6 = *param_3;
    uVar16 = param_2[-1];
    iVar9 = *(int *)(lVar6 + (long)(int)uVar16 * 4);
    if (uVar8 < 0x81) {
      uVar23 = *puVar10;
      uVar17 = *puVar4;
      iVar3 = *(int *)(lVar6 + (long)(int)uVar23 * 4);
      if (iVar3 < *(int *)(lVar6 + (long)(int)uVar17 * 4)) {
        if (iVar9 < iVar3) {
          *puVar4 = uVar16;
        }
        else {
          *puVar4 = uVar23;
          *puVar10 = uVar17;
          if (*(int *)(lVar6 + (long)(int)uVar17 * 4) <=
              *(int *)(lVar6 + (long)(int)param_2[-1] * 4)) goto LAB_109aa24e8;
          *puVar10 = param_2[-1];
        }
        param_2[-1] = uVar17;
      }
      else if (iVar9 < iVar3) {
        *puVar10 = uVar16;
        param_2[-1] = uVar23;
        uVar16 = *puVar4;
        if (*(int *)(lVar6 + (long)(int)*puVar10 * 4) < *(int *)(lVar6 + (long)(int)uVar16 * 4)) {
          *puVar4 = *puVar10;
          *puVar10 = uVar16;
        }
      }
    }
    else {
      uVar23 = *puVar4;
      uVar17 = *puVar10;
      iVar3 = *(int *)(lVar6 + (long)(int)uVar23 * 4);
      if (iVar3 < *(int *)(lVar6 + (long)(int)uVar17 * 4)) {
        if (iVar9 < iVar3) {
          *puVar10 = uVar16;
        }
        else {
          *puVar10 = uVar23;
          *puVar4 = uVar17;
          if (*(int *)(lVar6 + (long)(int)uVar17 * 4) <=
              *(int *)(lVar6 + (long)(int)param_2[-1] * 4)) goto LAB_109aa2324;
          *puVar4 = param_2[-1];
        }
        param_2[-1] = uVar17;
      }
      else if (iVar9 < iVar3) {
        *puVar4 = uVar16;
        param_2[-1] = uVar23;
        uVar16 = *puVar10;
        if (*(int *)(lVar6 + (long)(int)*puVar4 * 4) < *(int *)(lVar6 + (long)(int)uVar16 * 4)) {
          *puVar10 = *puVar4;
          *puVar4 = uVar16;
        }
      }
LAB_109aa2324:
      puVar5 = puVar4 + -1;
      uVar17 = *puVar5;
      uVar16 = puVar10[1];
      iVar9 = *(int *)(lVar6 + (long)(int)uVar17 * 4);
      uVar23 = param_2[-2];
      iVar3 = *(int *)(lVar6 + (long)(int)uVar23 * 4);
      if (iVar9 < *(int *)(lVar6 + (long)(int)uVar16 * 4)) {
        if (iVar3 < iVar9) {
          puVar10[1] = uVar23;
        }
        else {
          puVar10[1] = uVar17;
          *puVar5 = uVar16;
          if (*(int *)(lVar6 + (long)(int)uVar16 * 4) <=
              *(int *)(lVar6 + (long)(int)param_2[-2] * 4)) goto LAB_109aa23d8;
          *puVar5 = param_2[-2];
        }
        param_2[-2] = uVar16;
      }
      else if (iVar3 < iVar9) {
        *puVar5 = uVar23;
        param_2[-2] = uVar17;
        uVar16 = puVar10[1];
        if (*(int *)(lVar6 + (long)(int)*puVar5 * 4) < *(int *)(lVar6 + (long)(int)uVar16 * 4)) {
          puVar10[1] = *puVar5;
          *puVar5 = uVar16;
        }
      }
LAB_109aa23d8:
      puVar13 = puVar4 + 1;
      uVar17 = *puVar13;
      uVar16 = puVar10[2];
      iVar9 = *(int *)(lVar6 + (long)(int)uVar17 * 4);
      uVar23 = param_2[-3];
      iVar3 = *(int *)(lVar6 + (long)(int)uVar23 * 4);
      if (iVar9 < *(int *)(lVar6 + (long)(int)uVar16 * 4)) {
        if (iVar3 < iVar9) {
          puVar10[2] = uVar23;
        }
        else {
          puVar10[2] = uVar17;
          *puVar13 = uVar16;
          if (*(int *)(lVar6 + (long)(int)uVar16 * 4) <=
              *(int *)(lVar6 + (long)(int)param_2[-3] * 4)) goto LAB_109aa2464;
          *puVar13 = param_2[-3];
        }
        param_2[-3] = uVar16;
      }
      else if (iVar3 < iVar9) {
        *puVar13 = uVar23;
        param_2[-3] = uVar17;
        uVar16 = puVar10[2];
        if (*(int *)(lVar6 + (long)(int)*puVar13 * 4) < *(int *)(lVar6 + (long)(int)uVar16 * 4)) {
          puVar10[2] = *puVar13;
          *puVar13 = uVar16;
        }
      }
LAB_109aa2464:
      uVar16 = *puVar4;
      uVar17 = puVar4[1];
      uVar23 = puVar4[-1];
      iVar9 = *(int *)(lVar6 + (long)(int)uVar16 * 4);
      iVar3 = *(int *)(lVar6 + (long)(int)uVar17 * 4);
      if (iVar9 < *(int *)(lVar6 + (long)(int)uVar23 * 4)) {
        uVar12 = uVar16;
        if (iVar9 <= iVar3) {
          puVar4[-1] = uVar16;
          *puVar4 = uVar23;
          puVar5 = puVar4;
          uVar16 = uVar23;
          uVar12 = uVar17;
          if (*(int *)(lVar6 + (long)(int)uVar23 * 4) <= *(int *)(lVar6 + (long)(int)uVar17 * 4))
          goto LAB_109aa24dc;
        }
LAB_109aa24d4:
        *puVar5 = uVar17;
        *puVar13 = uVar23;
        uVar16 = uVar12;
      }
      else if (iVar3 < iVar9) {
        *puVar4 = uVar17;
        puVar4[1] = uVar16;
        puVar13 = puVar4;
        uVar16 = uVar17;
        uVar12 = uVar23;
        if (*(int *)(lVar6 + (long)(int)uVar17 * 4) < *(int *)(lVar6 + (long)(int)uVar23 * 4))
        goto LAB_109aa24d4;
      }
LAB_109aa24dc:
      uVar17 = *puVar10;
      *puVar10 = uVar16;
      *puVar4 = uVar17;
    }
LAB_109aa24e8:
    param_4 = param_4 + -1;
    uVar16 = *puVar10;
    param_1 = puVar10;
    if ((param_5 & 1) == 0) {
      iVar9 = *(int *)(lVar6 + (long)(int)uVar16 * 4);
      if (iVar9 <= *(int *)(lVar6 + (long)(int)puVar10[-1] * 4)) {
        if (iVar9 < *(int *)(lVar6 + (long)(int)param_2[-1] * 4)) {
          do {
            param_1 = param_1 + 1;
          } while (*(int *)(lVar6 + (long)(int)*param_1 * 4) <= iVar9);
        }
        else {
          do {
            param_1 = param_1 + 1;
            if (param_2 <= param_1) break;
          } while (*(int *)(lVar6 + (long)(int)*param_1 * 4) <= iVar9);
        }
        puVar4 = param_2;
        if (param_1 < param_2) {
          do {
            puVar4 = puVar4 + -1;
          } while (iVar9 < *(int *)(lVar6 + (long)(int)*puVar4 * 4));
        }
        if (param_1 < puVar4) {
          uVar8 = (ulong)*param_1;
          uVar15 = (ulong)*puVar4;
          do {
            *param_1 = (uint)uVar15;
            *puVar4 = (uint)uVar8;
            iVar9 = *(int *)(lVar6 + (long)(int)uVar16 * 4);
            do {
              param_1 = param_1 + 1;
              uVar8 = (ulong)(int)*param_1;
            } while (*(int *)(lVar6 + uVar8 * 4) <= iVar9);
            do {
              puVar4 = puVar4 + -1;
              uVar15 = (ulong)(int)*puVar4;
            } while (iVar9 < *(int *)(lVar6 + uVar15 * 4));
          } while (param_1 < puVar4);
        }
        puVar4 = param_1 + -1;
        if (puVar4 != puVar10) {
          *puVar10 = *puVar4;
        }
        param_5 = 0;
        *puVar4 = uVar16;
        goto LAB_109aa21e4;
      }
    }
    else {
      iVar9 = *(int *)(lVar6 + (long)(int)uVar16 * 4);
    }
    lVar20 = 0;
    do {
      lVar18 = (long)*(int *)((long)puVar10 + lVar20 + 4);
      lVar20 = lVar20 + 4;
    } while (*(int *)(lVar6 + lVar18 * 4) < iVar9);
    puVar4 = (uint *)((long)puVar10 + lVar20);
    puVar5 = param_2;
    if (lVar20 == 4) {
      do {
        if (puVar5 <= puVar4) break;
        puVar5 = puVar5 + -1;
      } while (iVar9 <= *(int *)(lVar6 + (long)(int)*puVar5 * 4));
    }
    else {
      do {
        puVar5 = puVar5 + -1;
      } while (iVar9 <= *(int *)(lVar6 + (long)(int)*puVar5 * 4));
    }
    param_1 = puVar4;
    if (puVar4 < puVar5) {
      uVar8 = (ulong)*puVar5;
      puVar13 = puVar5;
      do {
        *param_1 = (uint)uVar8;
        *puVar13 = (uint)lVar18;
        iVar9 = *(int *)(lVar6 + (long)(int)uVar16 * 4);
        do {
          param_1 = param_1 + 1;
          lVar18 = (long)(int)*param_1;
        } while (*(int *)(lVar6 + lVar18 * 4) < iVar9);
        do {
          puVar13 = puVar13 + -1;
          uVar8 = (ulong)(int)*puVar13;
        } while (iVar9 <= *(int *)(lVar6 + uVar8 * 4));
      } while (param_1 < puVar13);
    }
    puVar13 = param_1 + -1;
    if (puVar13 != puVar10) {
      *puVar10 = *puVar13;
    }
    *puVar13 = uVar16;
    if (puVar4 < puVar5) {
LAB_109aa2610:
      FUN_109aa21b4(puVar10,puVar13,param_3,param_4,param_5 & 1);
      param_5 = 0;
    }
    else {
      puVar4 = puVar10;
      FUN_109aa2d88(puVar10,puVar13,*param_3);
      puVar5 = param_1;
      FUN_109aa2d88(param_1,param_2,*param_3);
      if ((int)puVar5 == 0) {
        if (((ulong)puVar4 & 1) == 0) goto LAB_109aa2610;
      }
      else {
        param_1 = puVar10;
        param_2 = puVar13;
        if (((ulong)puVar4 & 1) != 0) {
          return;
        }
      }
    }
  } while( true );
}



/* Entry: 109aa2bf8; end: 109aa2d87;  */

void FUN_109aa2bf8(int *param_1,int *param_2,int *param_3,int *param_4,int *param_5,long param_6)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  int iVar6;
  
  iVar1 = *param_2;
  iVar2 = *param_1;
  iVar3 = *(int *)(param_6 + (long)iVar1 * 4);
  iVar6 = *param_3;
  iVar4 = *(int *)(param_6 + (long)iVar6 * 4);
  if (iVar3 < *(int *)(param_6 + (long)iVar2 * 4)) {
    lVar5 = (long)iVar2;
    if (iVar4 < iVar3) {
      *param_1 = iVar6;
    }
    else {
      *param_1 = iVar1;
      *param_2 = iVar2;
      iVar6 = *param_3;
      if (*(int *)(param_6 + lVar5 * 4) <= *(int *)(param_6 + (long)iVar6 * 4)) goto LAB_109aa2c98;
      *param_2 = iVar6;
    }
    *param_3 = iVar2;
    iVar6 = iVar2;
  }
  else {
    if (iVar3 <= iVar4) {
      lVar5 = (long)iVar6;
      goto LAB_109aa2ca8;
    }
    *param_2 = iVar6;
    *param_3 = iVar1;
    iVar2 = *param_1;
    if (*(int *)(param_6 + (long)iVar2 * 4) <= *(int *)(param_6 + (long)*param_2 * 4)) {
      lVar5 = (long)iVar1;
      iVar6 = iVar1;
      goto LAB_109aa2ca8;
    }
    *param_1 = *param_2;
    *param_2 = iVar2;
    iVar6 = *param_3;
LAB_109aa2c98:
    lVar5 = (long)iVar6;
  }
LAB_109aa2ca8:
  if (*(int *)(param_6 + (long)*param_4 * 4) < *(int *)(param_6 + lVar5 * 4)) {
    *param_3 = *param_4;
    *param_4 = iVar6;
    iVar1 = *param_2;
    if (*(int *)(param_6 + (long)*param_3 * 4) < *(int *)(param_6 + (long)iVar1 * 4)) {
      *param_2 = *param_3;
      *param_3 = iVar1;
      iVar1 = *param_1;
      if (*(int *)(param_6 + (long)*param_2 * 4) < *(int *)(param_6 + (long)iVar1 * 4)) {
        *param_1 = *param_2;
        *param_2 = iVar1;
      }
    }
  }
  iVar1 = *param_4;
  if (*(int *)(param_6 + (long)*param_5 * 4) < *(int *)(param_6 + (long)iVar1 * 4)) {
    *param_4 = *param_5;
    *param_5 = iVar1;
    iVar1 = *param_3;
    if (*(int *)(param_6 + (long)*param_4 * 4) < *(int *)(param_6 + (long)iVar1 * 4)) {
      *param_3 = *param_4;
      *param_4 = iVar1;
      iVar1 = *param_2;
      if (*(int *)(param_6 + (long)*param_3 * 4) < *(int *)(param_6 + (long)iVar1 * 4)) {
        *param_2 = *param_3;
        *param_3 = iVar1;
        iVar1 = *param_1;
        if (*(int *)(param_6 + (long)*param_2 * 4) < *(int *)(param_6 + (long)iVar1 * 4)) {
          *param_1 = *param_2;
          *param_2 = iVar1;
        }
      }
    }
  }
  return;
}



/* Entry: 109aa2d88; end: 109aa30ab;  */

bool FUN_109aa2d88(int *param_1,int *param_2,long param_3)

{
  int iVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  int *piVar5;
  int *piVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  long lVar10;
  int iVar11;
  long lVar12;
  long lVar13;
  int *piVar14;
  int *piVar15;
  int iVar16;
  
  uVar4 = (long)param_2 - (long)param_1 >> 2;
  if ((long)uVar4 < 3) {
    if (uVar4 < 2) {
      return true;
    }
    if (uVar4 == 2) {
      iVar7 = *param_1;
      if (*(int *)(param_3 + (long)iVar7 * 4) <= *(int *)(param_3 + (long)param_2[-1] * 4)) {
        return true;
      }
      *param_1 = param_2[-1];
      param_2[-1] = iVar7;
      return true;
    }
  }
  else {
    if (uVar4 == 3) {
      iVar7 = *param_1;
      iVar1 = param_1[1];
      iVar11 = *(int *)(param_3 + (long)iVar1 * 4);
      iVar2 = param_2[-1];
      iVar16 = *(int *)(param_3 + (long)iVar2 * 4);
      if (iVar11 < *(int *)(param_3 + (long)iVar7 * 4)) {
        if (iVar16 < iVar11) {
          *param_1 = iVar2;
        }
        else {
          *param_1 = iVar1;
          param_1[1] = iVar7;
          if (*(int *)(param_3 + (long)iVar7 * 4) <= *(int *)(param_3 + (long)param_2[-1] * 4)) {
            return true;
          }
          param_1[1] = param_2[-1];
        }
        param_2[-1] = iVar7;
        return true;
      }
      if (iVar11 <= iVar16) {
        return true;
      }
      param_1[1] = iVar2;
      param_2[-1] = iVar1;
      iVar7 = *param_1;
      if (*(int *)(param_3 + (long)iVar7 * 4) <= *(int *)(param_3 + (long)param_1[1] * 4)) {
        return true;
      }
      *param_1 = param_1[1];
      param_1[1] = iVar7;
      return true;
    }
    if (uVar4 == 4) {
      piVar6 = param_1 + 1;
      iVar1 = *piVar6;
      piVar14 = param_1 + 2;
      iVar11 = *piVar14;
      iVar7 = *param_1;
      iVar16 = *(int *)(param_3 + (long)iVar1 * 4);
      lVar12 = (long)iVar7;
      lVar10 = (long)iVar11;
      iVar2 = *(int *)(param_3 + (long)iVar11 * 4);
      piVar5 = param_1;
      iVar9 = iVar11;
      if (iVar16 < *(int *)(param_3 + (long)iVar7 * 4)) {
        piVar15 = piVar14;
        iVar8 = iVar7;
        if (iVar16 <= iVar2) {
          *param_1 = iVar1;
          param_1[1] = iVar7;
          piVar5 = piVar6;
          if (*(int *)(param_3 + lVar12 * 4) <= *(int *)(param_3 + lVar10 * 4)) goto LAB_109aa3040;
        }
      }
      else {
        if (iVar16 <= iVar2) goto LAB_109aa3040;
        *piVar6 = iVar11;
        *piVar14 = iVar1;
        lVar13 = lVar10 * 4;
        lVar3 = lVar12 * 4;
        lVar12 = (long)iVar1;
        lVar10 = lVar12;
        piVar15 = piVar6;
        iVar8 = iVar1;
        iVar9 = iVar1;
        if (*(int *)(param_3 + lVar3) <= *(int *)(param_3 + lVar13)) goto LAB_109aa3040;
      }
      *piVar5 = iVar11;
      *piVar15 = iVar7;
      lVar10 = lVar12;
      iVar9 = iVar8;
LAB_109aa3040:
      if (*(int *)(param_3 + lVar10 * 4) <= *(int *)(param_3 + (long)param_2[-1] * 4)) {
        return true;
      }
      *piVar14 = param_2[-1];
      param_2[-1] = iVar9;
      iVar7 = *piVar14;
      iVar1 = *piVar6;
      if (*(int *)(param_3 + (long)iVar1 * 4) <= *(int *)(param_3 + (long)iVar7 * 4)) {
        return true;
      }
      param_1[1] = iVar7;
      param_1[2] = iVar1;
      iVar1 = *param_1;
      if (*(int *)(param_3 + (long)iVar1 * 4) <= *(int *)(param_3 + (long)iVar7 * 4)) {
        return true;
      }
      *param_1 = iVar7;
      param_1[1] = iVar1;
      return true;
    }
    if (uVar4 == 5) {
      FUN_109aa2bf8(param_1,param_1 + 1,param_1 + 2,param_1 + 3,param_2 + -1);
      return true;
    }
  }
  piVar5 = param_1 + 2;
  iVar1 = *piVar5;
  piVar14 = param_1 + 1;
  iVar2 = *piVar14;
  iVar11 = *(int *)(param_3 + (long)iVar2 * 4);
  iVar7 = *param_1;
  iVar16 = *(int *)(param_3 + (long)iVar1 * 4);
  piVar6 = param_1;
  if (iVar11 < *(int *)(param_3 + (long)iVar7 * 4)) {
    piVar15 = piVar5;
    if (iVar11 <= iVar16) {
      *param_1 = iVar2;
      param_1[1] = iVar7;
      iVar11 = *(int *)(param_3 + (long)iVar1 * 4);
      iVar16 = *(int *)(param_3 + (long)iVar7 * 4);
      piVar6 = piVar14;
      piVar14 = piVar5;
      goto LAB_109aa2f18;
    }
  }
  else {
    if (iVar11 <= iVar16) goto LAB_109aa2f28;
    *piVar14 = iVar1;
    *piVar5 = iVar2;
    iVar11 = *(int *)(param_3 + (long)iVar1 * 4);
    iVar16 = *(int *)(param_3 + (long)iVar7 * 4);
LAB_109aa2f18:
    piVar15 = piVar14;
    if (iVar16 <= iVar11) goto LAB_109aa2f28;
  }
  *piVar6 = iVar1;
  *piVar15 = iVar7;
LAB_109aa2f28:
  if (param_1 + 3 != param_2) {
    iVar7 = 0;
    lVar10 = 0xc;
    piVar6 = param_1 + 3;
    do {
      iVar1 = *piVar6;
      lVar13 = (long)*piVar5;
      lVar12 = lVar10;
      if (*(int *)(param_3 + (long)iVar1 * 4) < *(int *)(param_3 + lVar13 * 4)) {
        do {
          *(int *)((long)param_1 + lVar12) = (int)lVar13;
          lVar3 = lVar12 + -4;
          piVar5 = param_1;
          if (lVar3 == 0) goto LAB_109aa2f8c;
          lVar13 = (long)*(int *)((long)param_1 + lVar12 + -8);
          lVar12 = lVar3;
        } while (*(int *)(param_3 + (long)iVar1 * 4) < *(int *)(param_3 + lVar13 * 4));
        piVar5 = (int *)((long)param_1 + lVar3);
LAB_109aa2f8c:
        *piVar5 = iVar1;
        iVar7 = iVar7 + 1;
        if (iVar7 == 8) {
          return piVar6 + 1 == param_2;
        }
      }
      piVar14 = piVar6 + 1;
      lVar10 = lVar10 + 4;
      piVar5 = piVar6;
      piVar6 = piVar14;
    } while (piVar14 != param_2);
  }
  return true;
}



/* Entry: 109aa30ac; end: 109aa3a93;  */

void FUN_109aa30ac(uint *param_1,uint *param_2,long *param_3,long param_4,uint param_5)

{
  ulong uVar1;
  bool bVar2;
  uint uVar3;
  long lVar4;
  uint *puVar5;
  uint *puVar6;
  long lVar7;
  ulong uVar8;
  uint uVar9;
  ulong uVar10;
  uint *puVar11;
  uint uVar12;
  uint uVar13;
  uint *puVar14;
  long lVar15;
  ulong uVar16;
  uint uVar17;
  long lVar18;
  ulong uVar19;
  ulong uVar20;
  long lVar21;
  uint *puVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  
LAB_109aa30dc:
  puVar11 = param_1;
  uVar10 = (long)param_2 - (long)puVar11 >> 2;
  if (uVar10 - 2 != 0 && 1 < (long)uVar10) {
    if (uVar10 == 3) {
      uVar17 = *puVar11;
      uVar3 = puVar11[1];
      lVar7 = *param_3;
      fVar24 = *(float *)(lVar7 + (long)(int)uVar3 * 4);
      fVar23 = *(float *)(lVar7 + (long)(int)uVar17 * 4);
      uVar9 = param_2[-1];
      fVar25 = *(float *)(lVar7 + (long)(int)uVar9 * 4);
      if (fVar23 <= fVar24) {
        if (fVar24 <= fVar25) {
          return;
        }
        puVar11[1] = uVar9;
        param_2[-1] = uVar3;
        uVar17 = *puVar11;
        if (*(float *)(lVar7 + (long)(int)puVar11[1] * 4) <
            *(float *)(lVar7 + (long)(int)uVar17 * 4)) {
          *puVar11 = puVar11[1];
          puVar11[1] = uVar17;
          return;
        }
        return;
      }
      if (fVar24 <= fVar25) {
        *puVar11 = uVar3;
        puVar11[1] = uVar17;
        if (fVar23 <= *(float *)(lVar7 + (long)(int)param_2[-1] * 4)) {
          return;
        }
        puVar11[1] = param_2[-1];
      }
      else {
        *puVar11 = uVar9;
      }
      goto LAB_109aa39fc;
    }
    if (uVar10 != 4) {
      if (uVar10 != 5) goto LAB_109aa3118;
      lVar7 = *param_3;
      puVar5 = puVar11 + 1;
      puVar6 = puVar11 + 2;
      puVar14 = puVar11 + 3;
      uVar17 = *puVar5;
      uVar3 = *puVar11;
      fVar24 = *(float *)(lVar7 + (long)(int)uVar17 * 4);
      fVar23 = *(float *)(lVar7 + (long)(int)uVar3 * 4);
      uVar9 = *puVar6;
      fVar25 = *(float *)(lVar7 + (long)(int)uVar9 * 4);
      if (fVar23 <= fVar24) {
        if (fVar24 <= fVar25) {
          lVar21 = (long)(int)uVar9;
          goto LAB_109aa3b40;
        }
        *puVar5 = uVar9;
        *puVar6 = uVar17;
        uVar3 = *puVar11;
        if (*(float *)(lVar7 + (long)(int)uVar3 * 4) <= *(float *)(lVar7 + (long)(int)*puVar5 * 4))
        {
          lVar21 = (long)(int)uVar17;
          uVar9 = uVar17;
          goto LAB_109aa3b40;
        }
        *puVar11 = *puVar5;
        *puVar5 = uVar3;
        uVar9 = *puVar6;
LAB_109aa3b30:
        lVar21 = (long)(int)uVar9;
      }
      else {
        lVar21 = (long)(int)uVar3;
        if (fVar24 <= fVar25) {
          *puVar11 = uVar17;
          *puVar5 = uVar3;
          uVar9 = *puVar6;
          if (fVar23 <= *(float *)(lVar7 + (long)(int)uVar9 * 4)) goto LAB_109aa3b30;
          *puVar5 = uVar9;
        }
        else {
          *puVar11 = uVar9;
        }
        *puVar6 = uVar3;
        uVar9 = uVar3;
      }
LAB_109aa3b40:
      if (*(float *)(lVar7 + (long)(int)*puVar14 * 4) < *(float *)(lVar7 + lVar21 * 4)) {
        *puVar6 = *puVar14;
        *puVar14 = uVar9;
        uVar17 = *puVar5;
        if (*(float *)(lVar7 + (long)(int)*puVar6 * 4) < *(float *)(lVar7 + (long)(int)uVar17 * 4))
        {
          *puVar5 = *puVar6;
          *puVar6 = uVar17;
          uVar17 = *puVar11;
          if (*(float *)(lVar7 + (long)(int)*puVar5 * 4) < *(float *)(lVar7 + (long)(int)uVar17 * 4)
             ) {
            *puVar11 = *puVar5;
            *puVar5 = uVar17;
          }
        }
      }
      uVar17 = param_2[-1];
      uVar3 = *puVar14;
      if (*(float *)(lVar7 + (long)(int)uVar17 * 4) < *(float *)(lVar7 + (long)(int)uVar3 * 4)) {
        *puVar14 = uVar17;
        param_2[-1] = uVar3;
        uVar17 = *puVar6;
        if (*(float *)(lVar7 + (long)(int)*puVar14 * 4) < *(float *)(lVar7 + (long)(int)uVar17 * 4))
        {
          *puVar6 = *puVar14;
          *puVar14 = uVar17;
          uVar17 = *puVar5;
          if (*(float *)(lVar7 + (long)(int)*puVar6 * 4) < *(float *)(lVar7 + (long)(int)uVar17 * 4)
             ) {
            *puVar5 = *puVar6;
            *puVar6 = uVar17;
            uVar17 = *puVar11;
            if (*(float *)(lVar7 + (long)(int)*puVar5 * 4) <
                *(float *)(lVar7 + (long)(int)uVar17 * 4)) {
              *puVar11 = *puVar5;
              *puVar5 = uVar17;
            }
          }
        }
      }
      return;
    }
    puVar6 = puVar11 + 1;
    uVar3 = *puVar6;
    puVar14 = puVar11 + 2;
    uVar9 = *puVar14;
    uVar17 = *puVar11;
    lVar21 = *param_3;
    fVar25 = *(float *)(lVar21 + (long)(int)uVar3 * 4);
    fVar23 = *(float *)(lVar21 + (long)(int)uVar17 * 4);
    lVar7 = (long)(int)uVar9;
    fVar24 = *(float *)(lVar21 + (long)(int)uVar9 * 4);
    puVar5 = puVar11;
    if (fVar23 <= fVar25) {
      uVar13 = uVar9;
      if (fVar25 <= fVar24) goto LAB_109aa3a30;
      lVar7 = (long)(int)uVar3;
      *puVar6 = uVar9;
      *puVar14 = uVar3;
      puVar22 = puVar6;
      uVar12 = uVar3;
      lVar18 = lVar7;
joined_r0x000109aa398c:
      uVar13 = uVar3;
      if (fVar23 <= fVar24) goto LAB_109aa3a30;
    }
    else {
      lVar18 = (long)(int)uVar17;
      puVar22 = puVar14;
      uVar12 = uVar17;
      if (fVar25 <= fVar24) {
        *puVar11 = uVar3;
        puVar11[1] = uVar17;
        uVar3 = uVar9;
        puVar5 = puVar6;
        goto joined_r0x000109aa398c;
      }
    }
    lVar7 = lVar18;
    *puVar5 = uVar9;
    *puVar22 = uVar17;
    uVar13 = uVar12;
LAB_109aa3a30:
    if (*(float *)(lVar21 + lVar7 * 4) <= *(float *)(lVar21 + (long)(int)param_2[-1] * 4)) {
      return;
    }
    *puVar14 = param_2[-1];
    param_2[-1] = uVar13;
    uVar17 = *puVar14;
    uVar3 = *puVar6;
    fVar23 = *(float *)(lVar21 + (long)(int)uVar17 * 4);
    if (fVar23 < *(float *)(lVar21 + (long)(int)uVar3 * 4)) {
      puVar11[1] = uVar17;
      puVar11[2] = uVar3;
      uVar3 = *puVar11;
      if (fVar23 < *(float *)(lVar21 + (long)(int)uVar3 * 4)) {
        *puVar11 = uVar17;
        puVar11[1] = uVar3;
        return;
      }
      return;
    }
    return;
  }
  if (uVar10 < 2) {
    return;
  }
  if (uVar10 == 2) {
    uVar17 = *puVar11;
    if (*(float *)(*param_3 + (long)(int)uVar17 * 4) <=
        *(float *)(*param_3 + (long)(int)param_2[-1] * 4)) {
      return;
    }
    *puVar11 = param_2[-1];
LAB_109aa39fc:
    param_2[-1] = uVar17;
    return;
  }
LAB_109aa3118:
  if ((long)uVar10 < 0x18) {
    lVar7 = *param_3;
    puVar5 = puVar11 + 1;
    if ((param_5 & 1) == 0) {
      if (puVar11 != param_2 && puVar5 != param_2) {
        do {
          puVar6 = puVar5;
          lVar21 = (long)(int)*puVar11;
          uVar17 = puVar11[1];
          fVar23 = *(float *)(lVar7 + (long)(int)uVar17 * 4);
          puVar11 = puVar6;
          if (fVar23 < *(float *)(lVar7 + lVar21 * 4)) {
            do {
              *puVar11 = (uint)lVar21;
              lVar21 = (long)(int)puVar11[-2];
              puVar11 = puVar11 + -1;
            } while (fVar23 < *(float *)(lVar7 + lVar21 * 4));
            *puVar11 = uVar17;
          }
          puVar5 = puVar6 + 1;
          puVar11 = puVar6;
        } while (puVar6 + 1 != param_2);
        return;
      }
      return;
    }
    if (puVar11 == param_2 || puVar5 == param_2) {
      return;
    }
    lVar21 = 0;
    puVar6 = puVar11;
    do {
      lVar18 = (long)(int)*puVar6;
      uVar17 = puVar6[1];
      fVar23 = *(float *)(lVar7 + (long)(int)uVar17 * 4);
      lVar4 = lVar21;
      if (fVar23 < *(float *)(lVar7 + lVar18 * 4)) {
        do {
          lVar15 = lVar4;
          *(int *)((long)puVar11 + lVar15 + 4) = (int)lVar18;
          puVar6 = puVar11;
          if (lVar15 == 0) goto LAB_109aa3728;
          lVar18 = (long)*(int *)((long)puVar11 + lVar15 + -4);
          lVar4 = lVar15 + -4;
        } while (fVar23 < *(float *)(lVar7 + lVar18 * 4));
        puVar6 = (uint *)((long)puVar11 + lVar15);
LAB_109aa3728:
        *puVar6 = uVar17;
      }
      puVar14 = puVar5 + 1;
      lVar21 = lVar21 + 4;
      puVar6 = puVar5;
      puVar5 = puVar14;
      if (puVar14 == param_2) {
        return;
      }
    } while( true );
  }
  if (param_4 == 0) {
    if (puVar11 == param_2) {
      return;
    }
    uVar8 = uVar10 - 2 >> 1;
    lVar7 = *param_3;
    uVar19 = uVar8;
    do {
      if ((long)uVar19 <= (long)uVar8) {
        uVar20 = uVar19 << 1 | 1;
        puVar5 = puVar11 + uVar20;
        uVar16 = uVar19 * 2 + 2;
        if (((long)uVar16 < (long)uVar10) &&
           (*(float *)(lVar7 + (long)(int)*puVar5 * 4) <
            *(float *)(lVar7 + (long)(int)puVar5[1] * 4))) {
          uVar20 = uVar16;
          puVar5 = puVar5 + 1;
        }
        lVar21 = (long)(int)*puVar5;
        uVar17 = puVar11[uVar19];
        fVar23 = *(float *)(lVar7 + (long)(int)uVar17 * 4);
        puVar6 = puVar11 + uVar19;
        if (fVar23 <= *(float *)(lVar7 + lVar21 * 4)) {
          do {
            puVar14 = puVar5;
            *puVar6 = (uint)lVar21;
            if ((long)uVar8 < (long)uVar20) break;
            uVar1 = uVar20 << 1 | 1;
            puVar5 = puVar11 + uVar1;
            uVar16 = uVar20 * 2 + 2;
            uVar20 = uVar1;
            if (((long)uVar16 < (long)uVar10) &&
               (*(float *)(lVar7 + (long)(int)*puVar5 * 4) <
                *(float *)(lVar7 + (long)(int)puVar5[1] * 4))) {
              uVar20 = uVar16;
              puVar5 = puVar5 + 1;
            }
            lVar21 = (long)(int)*puVar5;
            puVar6 = puVar14;
          } while (fVar23 <= *(float *)(lVar7 + lVar21 * 4));
          *puVar14 = uVar17;
          lVar7 = *param_3;
        }
      }
      bVar2 = uVar19 != 0;
      uVar19 = uVar19 - 1;
    } while (bVar2);
    do {
      uVar17 = *puVar11;
      lVar7 = *param_3;
      puVar5 = puVar11;
      uVar19 = 0;
      do {
        uVar16 = uVar19 << 1 | 1;
        uVar8 = uVar19 * 2 + 2;
        puVar6 = puVar5 + uVar19 + 1;
        if (((long)uVar8 < (long)uVar10) &&
           (*(float *)(lVar7 + (long)(int)puVar5[uVar19 + 1] * 4) <
            *(float *)(lVar7 + (long)(int)puVar5[uVar19 + 2] * 4))) {
          puVar6 = puVar5 + uVar19 + 2;
          uVar16 = uVar8;
        }
        *puVar5 = *puVar6;
        puVar5 = puVar6;
        uVar19 = uVar16;
      } while ((long)uVar16 <= (long)(uVar10 - 2 >> 1));
      param_2 = param_2 + -1;
      if (puVar6 == param_2) {
        *puVar6 = uVar17;
      }
      else {
        *puVar6 = *param_2;
        *param_2 = uVar17;
        lVar7 = (long)puVar6 + (4 - (long)puVar11) >> 2;
        if (1 < lVar7) {
          lVar21 = *param_3;
          uVar19 = lVar7 - 2U >> 1;
          lVar7 = (long)(int)puVar11[uVar19];
          uVar17 = *puVar6;
          fVar23 = *(float *)(lVar21 + (long)(int)uVar17 * 4);
          puVar5 = puVar11 + uVar19;
          if (*(float *)(lVar21 + lVar7 * 4) < fVar23) {
            do {
              puVar14 = puVar5;
              *puVar6 = (uint)lVar7;
              if (uVar19 == 0) break;
              uVar19 = uVar19 - 1 >> 1;
              lVar7 = (long)(int)puVar11[uVar19];
              puVar6 = puVar14;
              puVar5 = puVar11 + uVar19;
            } while (*(float *)(lVar21 + lVar7 * 4) < fVar23);
            *puVar14 = uVar17;
          }
        }
      }
      bVar2 = (long)uVar10 < 3;
      uVar10 = uVar10 - 1;
      if (bVar2) {
        return;
      }
    } while( true );
  }
  puVar5 = puVar11 + (uVar10 >> 1);
  lVar7 = *param_3;
  uVar17 = param_2[-1];
  fVar23 = *(float *)(lVar7 + (long)(int)uVar17 * 4);
  if (uVar10 < 0x81) {
    uVar3 = *puVar11;
    uVar9 = *puVar5;
    fVar25 = *(float *)(lVar7 + (long)(int)uVar3 * 4);
    fVar24 = *(float *)(lVar7 + (long)(int)uVar9 * 4);
    if (fVar24 <= fVar25) {
      if (fVar23 < fVar25) {
        *puVar11 = uVar17;
        param_2[-1] = uVar3;
        uVar17 = *puVar5;
        if (*(float *)(lVar7 + (long)(int)*puVar11 * 4) < *(float *)(lVar7 + (long)(int)uVar17 * 4))
        {
          *puVar5 = *puVar11;
          *puVar11 = uVar17;
        }
      }
    }
    else {
      if (fVar25 <= fVar23) {
        *puVar5 = uVar3;
        *puVar11 = uVar9;
        if (fVar24 <= *(float *)(lVar7 + (long)(int)param_2[-1] * 4)) goto LAB_109aa33bc;
        *puVar11 = param_2[-1];
      }
      else {
        *puVar5 = uVar17;
      }
      param_2[-1] = uVar9;
    }
  }
  else {
    uVar3 = *puVar5;
    uVar9 = *puVar11;
    fVar25 = *(float *)(lVar7 + (long)(int)uVar3 * 4);
    fVar24 = *(float *)(lVar7 + (long)(int)uVar9 * 4);
    if (fVar24 <= fVar25) {
      if (fVar23 < fVar25) {
        *puVar5 = uVar17;
        param_2[-1] = uVar3;
        uVar17 = *puVar11;
        if (*(float *)(lVar7 + (long)(int)*puVar5 * 4) < *(float *)(lVar7 + (long)(int)uVar17 * 4))
        {
          *puVar11 = *puVar5;
          *puVar5 = uVar17;
        }
      }
    }
    else {
      if (fVar25 <= fVar23) {
        *puVar11 = uVar3;
        *puVar5 = uVar9;
        if (fVar24 <= *(float *)(lVar7 + (long)(int)param_2[-1] * 4)) goto LAB_109aa3218;
        *puVar5 = param_2[-1];
      }
      else {
        *puVar11 = uVar17;
      }
      param_2[-1] = uVar9;
    }
LAB_109aa3218:
    puVar6 = puVar5 + -1;
    uVar17 = *puVar6;
    uVar3 = puVar11[1];
    fVar24 = *(float *)(lVar7 + (long)(int)uVar17 * 4);
    fVar23 = *(float *)(lVar7 + (long)(int)uVar3 * 4);
    uVar9 = param_2[-2];
    fVar25 = *(float *)(lVar7 + (long)(int)uVar9 * 4);
    if (fVar23 <= fVar24) {
      if (fVar25 < fVar24) {
        *puVar6 = uVar9;
        param_2[-2] = uVar17;
        uVar17 = puVar11[1];
        if (*(float *)(lVar7 + (long)(int)*puVar6 * 4) < *(float *)(lVar7 + (long)(int)uVar17 * 4))
        {
          puVar11[1] = *puVar6;
          *puVar6 = uVar17;
        }
      }
    }
    else {
      if (fVar24 <= fVar25) {
        puVar11[1] = uVar17;
        *puVar6 = uVar3;
        if (fVar23 <= *(float *)(lVar7 + (long)(int)param_2[-2] * 4)) goto LAB_109aa32c4;
        *puVar6 = param_2[-2];
      }
      else {
        puVar11[1] = uVar9;
      }
      param_2[-2] = uVar3;
    }
LAB_109aa32c4:
    puVar14 = puVar5 + 1;
    uVar17 = *puVar14;
    uVar3 = puVar11[2];
    fVar24 = *(float *)(lVar7 + (long)(int)uVar17 * 4);
    fVar23 = *(float *)(lVar7 + (long)(int)uVar3 * 4);
    uVar9 = param_2[-3];
    fVar25 = *(float *)(lVar7 + (long)(int)uVar9 * 4);
    if (fVar23 <= fVar24) {
      if (fVar25 < fVar24) {
        *puVar14 = uVar9;
        param_2[-3] = uVar17;
        uVar17 = puVar11[2];
        if (*(float *)(lVar7 + (long)(int)*puVar14 * 4) < *(float *)(lVar7 + (long)(int)uVar17 * 4))
        {
          puVar11[2] = *puVar14;
          *puVar14 = uVar17;
        }
      }
    }
    else {
      if (fVar24 <= fVar25) {
        puVar11[2] = uVar17;
        *puVar14 = uVar3;
        if (fVar23 <= *(float *)(lVar7 + (long)(int)param_2[-3] * 4)) goto LAB_109aa334c;
        *puVar14 = param_2[-3];
      }
      else {
        puVar11[2] = uVar9;
      }
      param_2[-3] = uVar3;
    }
LAB_109aa334c:
    uVar17 = *puVar5;
    uVar3 = puVar5[1];
    fVar25 = *(float *)(lVar7 + (long)(int)uVar17 * 4);
    uVar9 = puVar5[-1];
    fVar23 = *(float *)(lVar7 + (long)(int)uVar9 * 4);
    fVar24 = *(float *)(lVar7 + (long)(int)uVar3 * 4);
    if (fVar23 <= fVar25) {
      if (fVar24 < fVar25) {
        *puVar5 = uVar3;
        puVar5[1] = uVar17;
        puVar14 = puVar5;
        uVar17 = uVar3;
        uVar13 = uVar9;
        if (fVar24 < fVar23) goto LAB_109aa33a8;
      }
    }
    else {
      uVar13 = uVar17;
      if (fVar25 <= fVar24) {
        puVar5[-1] = uVar17;
        *puVar5 = uVar9;
        puVar6 = puVar5;
        uVar17 = uVar9;
        uVar13 = uVar3;
        if (fVar23 <= fVar24) goto LAB_109aa33b0;
      }
LAB_109aa33a8:
      *puVar6 = uVar3;
      *puVar14 = uVar9;
      uVar17 = uVar13;
    }
LAB_109aa33b0:
    uVar3 = *puVar11;
    *puVar11 = uVar17;
    *puVar5 = uVar3;
  }
LAB_109aa33bc:
  param_4 = param_4 + -1;
  uVar17 = *puVar11;
  param_1 = puVar11;
  if ((param_5 & 1) == 0) {
    fVar23 = *(float *)(lVar7 + (long)(int)uVar17 * 4);
    if (fVar23 <= *(float *)(lVar7 + (long)(int)puVar11[-1] * 4)) {
      if (*(float *)(lVar7 + (long)(int)param_2[-1] * 4) <= fVar23) {
        do {
          param_1 = param_1 + 1;
          if (param_2 <= param_1) break;
        } while (*(float *)(lVar7 + (long)(int)*param_1 * 4) <= fVar23);
      }
      else {
        do {
          param_1 = param_1 + 1;
        } while (*(float *)(lVar7 + (long)(int)*param_1 * 4) <= fVar23);
      }
      puVar5 = param_2;
      if (param_1 < param_2) {
        do {
          puVar5 = puVar5 + -1;
        } while (fVar23 < *(float *)(lVar7 + (long)(int)*puVar5 * 4));
      }
      if (param_1 < puVar5) {
        uVar10 = (ulong)*param_1;
        uVar19 = (ulong)*puVar5;
        do {
          *param_1 = (uint)uVar19;
          *puVar5 = (uint)uVar10;
          do {
            param_1 = param_1 + 1;
            uVar10 = (ulong)(int)*param_1;
          } while (*(float *)(lVar7 + uVar10 * 4) <= fVar23);
          do {
            puVar5 = puVar5 + -1;
            uVar19 = (ulong)(int)*puVar5;
          } while (fVar23 < *(float *)(lVar7 + uVar19 * 4));
        } while (param_1 < puVar5);
      }
      puVar5 = param_1 + -1;
      if (puVar5 != puVar11) {
        *puVar11 = *puVar5;
      }
      param_5 = 0;
      *puVar5 = uVar17;
      goto LAB_109aa30dc;
    }
  }
  else {
    fVar23 = *(float *)(lVar7 + (long)(int)uVar17 * 4);
  }
  lVar21 = 0;
  do {
    lVar18 = (long)*(int *)((long)puVar11 + lVar21 + 4);
    lVar21 = lVar21 + 4;
  } while (*(float *)(lVar7 + lVar18 * 4) < fVar23);
  puVar5 = (uint *)((long)puVar11 + lVar21);
  puVar6 = param_2;
  if (lVar21 == 4) {
    do {
      if (puVar6 <= puVar5) break;
      puVar6 = puVar6 + -1;
    } while (fVar23 <= *(float *)(lVar7 + (long)(int)*puVar6 * 4));
  }
  else {
    do {
      puVar6 = puVar6 + -1;
    } while (fVar23 <= *(float *)(lVar7 + (long)(int)*puVar6 * 4));
  }
  param_1 = puVar5;
  if (puVar5 < puVar6) {
    uVar10 = (ulong)*puVar6;
    puVar14 = puVar6;
    do {
      *param_1 = (uint)uVar10;
      *puVar14 = (uint)lVar18;
      do {
        param_1 = param_1 + 1;
        lVar18 = (long)(int)*param_1;
      } while (*(float *)(lVar7 + lVar18 * 4) < fVar23);
      do {
        puVar14 = puVar14 + -1;
        uVar10 = (ulong)(int)*puVar14;
      } while (fVar23 <= *(float *)(lVar7 + uVar10 * 4));
    } while (param_1 < puVar14);
  }
  puVar14 = param_1 + -1;
  if (puVar14 != puVar11) {
    *puVar11 = *puVar14;
  }
  *puVar14 = uVar17;
  if (puVar5 < puVar6) {
LAB_109aa34e4:
    FUN_109aa30ac(puVar11,puVar14,param_3,param_4,param_5 & 1);
    param_5 = 0;
  }
  else {
    puVar5 = puVar11;
    FUN_109aa3c20(puVar11,puVar14,*param_3);
    puVar6 = param_1;
    FUN_109aa3c20(param_1,param_2,*param_3);
    if ((int)puVar6 == 0) {
      if (((ulong)puVar5 & 1) == 0) goto LAB_109aa34e4;
    }
    else {
      param_1 = puVar11;
      param_2 = puVar14;
      if (((ulong)puVar5 & 1) != 0) {
        return;
      }
    }
  }
  goto LAB_109aa30dc;
}



/* Entry: 109aa3a94; end: 109aa3c1f;  */

void FUN_109aa3a94(int *param_1,int *param_2,int *param_3,int *param_4,int *param_5,long param_6)

{
  int iVar1;
  int iVar2;
  long lVar3;
  int iVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  
  iVar1 = *param_2;
  iVar2 = *param_1;
  fVar6 = *(float *)(param_6 + (long)iVar1 * 4);
  fVar5 = *(float *)(param_6 + (long)iVar2 * 4);
  iVar4 = *param_3;
  fVar7 = *(float *)(param_6 + (long)iVar4 * 4);
  if (fVar5 <= fVar6) {
    if (fVar6 <= fVar7) {
      lVar3 = (long)iVar4;
      goto LAB_109aa3b40;
    }
    *param_2 = iVar4;
    *param_3 = iVar1;
    iVar2 = *param_1;
    if (*(float *)(param_6 + (long)iVar2 * 4) <= *(float *)(param_6 + (long)*param_2 * 4)) {
      lVar3 = (long)iVar1;
      iVar4 = iVar1;
      goto LAB_109aa3b40;
    }
    *param_1 = *param_2;
    *param_2 = iVar2;
    iVar4 = *param_3;
LAB_109aa3b30:
    lVar3 = (long)iVar4;
  }
  else {
    lVar3 = (long)iVar2;
    if (fVar6 <= fVar7) {
      *param_1 = iVar1;
      *param_2 = iVar2;
      iVar4 = *param_3;
      if (fVar5 <= *(float *)(param_6 + (long)iVar4 * 4)) goto LAB_109aa3b30;
      *param_2 = iVar4;
    }
    else {
      *param_1 = iVar4;
    }
    *param_3 = iVar2;
    iVar4 = iVar2;
  }
LAB_109aa3b40:
  if (*(float *)(param_6 + (long)*param_4 * 4) < *(float *)(param_6 + lVar3 * 4)) {
    *param_3 = *param_4;
    *param_4 = iVar4;
    iVar1 = *param_2;
    if (*(float *)(param_6 + (long)*param_3 * 4) < *(float *)(param_6 + (long)iVar1 * 4)) {
      *param_2 = *param_3;
      *param_3 = iVar1;
      iVar1 = *param_1;
      if (*(float *)(param_6 + (long)*param_2 * 4) < *(float *)(param_6 + (long)iVar1 * 4)) {
        *param_1 = *param_2;
        *param_2 = iVar1;
      }
    }
  }
  iVar1 = *param_4;
  if (*(float *)(param_6 + (long)*param_5 * 4) < *(float *)(param_6 + (long)iVar1 * 4)) {
    *param_4 = *param_5;
    *param_5 = iVar1;
    iVar1 = *param_3;
    if (*(float *)(param_6 + (long)*param_4 * 4) < *(float *)(param_6 + (long)iVar1 * 4)) {
      *param_3 = *param_4;
      *param_4 = iVar1;
      iVar1 = *param_2;
      if (*(float *)(param_6 + (long)*param_3 * 4) < *(float *)(param_6 + (long)iVar1 * 4)) {
        *param_2 = *param_3;
        *param_3 = iVar1;
        iVar1 = *param_1;
        if (*(float *)(param_6 + (long)*param_2 * 4) < *(float *)(param_6 + (long)iVar1 * 4)) {
          *param_1 = *param_2;
          *param_2 = iVar1;
        }
      }
    }
  }
  return;
}



/* Entry: 109aa3c20; end: 109aa3f1b;  */

bool FUN_109aa3c20(int *param_1,int *param_2,long param_3)

{
  int iVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int *piVar8;
  long lVar9;
  int *piVar10;
  int *piVar11;
  long lVar12;
  long lVar13;
  int *piVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  
  uVar4 = (long)param_2 - (long)param_1 >> 2;
  if ((long)uVar4 < 3) {
    if (uVar4 < 2) {
      return true;
    }
    if (uVar4 == 2) {
      iVar5 = *param_1;
      if (*(float *)(param_3 + (long)param_2[-1] * 4) < *(float *)(param_3 + (long)iVar5 * 4)) {
        *param_1 = param_2[-1];
        param_2[-1] = iVar5;
        return true;
      }
      return true;
    }
  }
  else {
    if (uVar4 == 3) {
      iVar5 = *param_1;
      iVar1 = param_1[1];
      fVar16 = *(float *)(param_3 + (long)iVar1 * 4);
      fVar15 = *(float *)(param_3 + (long)iVar5 * 4);
      iVar2 = param_2[-1];
      fVar17 = *(float *)(param_3 + (long)iVar2 * 4);
      if (fVar16 < fVar15) {
        if (fVar16 <= fVar17) {
          *param_1 = iVar1;
          param_1[1] = iVar5;
          if (fVar15 <= *(float *)(param_3 + (long)param_2[-1] * 4)) {
            return true;
          }
          param_1[1] = param_2[-1];
        }
        else {
          *param_1 = iVar2;
        }
        param_2[-1] = iVar5;
        return true;
      }
      if (fVar17 < fVar16) {
        param_1[1] = iVar2;
        param_2[-1] = iVar1;
        iVar5 = *param_1;
        if (*(float *)(param_3 + (long)param_1[1] * 4) < *(float *)(param_3 + (long)iVar5 * 4)) {
          *param_1 = param_1[1];
          param_1[1] = iVar5;
          return true;
        }
        return true;
      }
      return true;
    }
    if (uVar4 == 4) {
      piVar10 = param_1 + 1;
      iVar1 = *piVar10;
      piVar8 = param_1 + 2;
      iVar2 = *piVar8;
      iVar5 = *param_1;
      fVar17 = *(float *)(param_3 + (long)iVar1 * 4);
      fVar15 = *(float *)(param_3 + (long)iVar5 * 4);
      lVar9 = (long)iVar2;
      fVar16 = *(float *)(param_3 + (long)iVar2 * 4);
      piVar11 = param_1;
      if (fVar15 <= fVar17) {
        iVar7 = iVar2;
        if (fVar17 <= fVar16) goto LAB_109aa3eb4;
        lVar9 = (long)iVar1;
        *piVar10 = iVar2;
        *piVar8 = iVar1;
        piVar14 = piVar10;
        iVar6 = iVar1;
        lVar13 = lVar9;
joined_r0x000109aa3e60:
        iVar7 = iVar1;
        if (fVar15 <= fVar16) goto LAB_109aa3eb4;
      }
      else {
        lVar13 = (long)iVar5;
        piVar14 = piVar8;
        iVar6 = iVar5;
        if (fVar17 <= fVar16) {
          *param_1 = iVar1;
          param_1[1] = iVar5;
          iVar1 = iVar2;
          piVar11 = piVar10;
          goto joined_r0x000109aa3e60;
        }
      }
      lVar9 = lVar13;
      *piVar11 = iVar2;
      *piVar14 = iVar5;
      iVar7 = iVar6;
LAB_109aa3eb4:
      if (*(float *)(param_3 + lVar9 * 4) <= *(float *)(param_3 + (long)param_2[-1] * 4)) {
        return true;
      }
      *piVar8 = param_2[-1];
      param_2[-1] = iVar7;
      iVar5 = *piVar8;
      iVar1 = *piVar10;
      fVar15 = *(float *)(param_3 + (long)iVar5 * 4);
      if (fVar15 < *(float *)(param_3 + (long)iVar1 * 4)) {
        param_1[1] = iVar5;
        param_1[2] = iVar1;
        iVar1 = *param_1;
        if (fVar15 < *(float *)(param_3 + (long)iVar1 * 4)) {
          *param_1 = iVar5;
          param_1[1] = iVar1;
          return true;
        }
        return true;
      }
      return true;
    }
    if (uVar4 == 5) {
      FUN_109aa3a94(param_1,param_1 + 1,param_1 + 2,param_1 + 3,param_2 + -1);
      return true;
    }
  }
  piVar10 = param_1 + 2;
  iVar5 = *piVar10;
  piVar8 = param_1 + 1;
  iVar1 = *piVar8;
  fVar17 = *(float *)(param_3 + (long)iVar1 * 4);
  iVar2 = *param_1;
  fVar15 = *(float *)(param_3 + (long)iVar2 * 4);
  fVar16 = *(float *)(param_3 + (long)iVar5 * 4);
  piVar11 = param_1;
  if (fVar15 <= fVar17) {
    if (fVar17 <= fVar16) goto LAB_109aa3db4;
    *piVar8 = iVar5;
    *piVar10 = iVar1;
    piVar14 = piVar8;
joined_r0x000109aa3da8:
    if (fVar15 <= fVar16) goto LAB_109aa3db4;
  }
  else {
    piVar14 = piVar10;
    if (fVar17 <= fVar16) {
      *param_1 = iVar1;
      param_1[1] = iVar2;
      piVar11 = piVar8;
      goto joined_r0x000109aa3da8;
    }
  }
  *piVar11 = iVar5;
  *piVar14 = iVar2;
LAB_109aa3db4:
  if (param_1 + 3 != param_2) {
    iVar5 = 0;
    lVar9 = 0xc;
    piVar11 = param_1 + 3;
    do {
      piVar8 = piVar11;
      iVar1 = *piVar8;
      lVar12 = (long)*piVar10;
      fVar15 = *(float *)(param_3 + (long)iVar1 * 4);
      lVar13 = lVar9;
      if (fVar15 < *(float *)(param_3 + lVar12 * 4)) {
        do {
          *(int *)((long)param_1 + lVar13) = (int)lVar12;
          lVar3 = lVar13 + -4;
          piVar11 = param_1;
          if (lVar3 == 0) goto LAB_109aa3e14;
          lVar12 = (long)*(int *)((long)param_1 + lVar13 + -8);
          lVar13 = lVar3;
        } while (fVar15 < *(float *)(param_3 + lVar12 * 4));
        piVar11 = (int *)((long)param_1 + lVar3);
LAB_109aa3e14:
        *piVar11 = iVar1;
        iVar5 = iVar5 + 1;
        if (iVar5 == 8) {
          return piVar8 + 1 == param_2;
        }
      }
      lVar9 = lVar9 + 4;
      piVar11 = piVar8 + 1;
      piVar10 = piVar8;
    } while (piVar8 + 1 != param_2);
  }
  return true;
}



/* Entry: 109aa3f1c; end: 109aa48ff;  */

void FUN_109aa3f1c(uint *param_1,uint *param_2,long *param_3,long param_4,uint param_5)

{
  ulong uVar1;
  bool bVar2;
  uint uVar3;
  long lVar4;
  uint *puVar5;
  uint *puVar6;
  long lVar7;
  ulong uVar8;
  uint uVar9;
  ulong uVar10;
  uint *puVar11;
  uint uVar12;
  uint uVar13;
  uint *puVar14;
  long lVar15;
  ulong uVar16;
  uint uVar17;
  long lVar18;
  ulong uVar19;
  ulong uVar20;
  long lVar21;
  uint *puVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  
LAB_109aa3f4c:
  puVar11 = param_1;
  uVar10 = (long)param_2 - (long)puVar11 >> 2;
  if (uVar10 - 2 != 0 && 1 < (long)uVar10) {
    if (uVar10 == 3) {
      uVar17 = *puVar11;
      uVar3 = puVar11[1];
      lVar7 = *param_3;
      dVar24 = *(double *)(lVar7 + (long)(int)uVar3 * 8);
      dVar23 = *(double *)(lVar7 + (long)(int)uVar17 * 8);
      uVar9 = param_2[-1];
      dVar25 = *(double *)(lVar7 + (long)(int)uVar9 * 8);
      if (dVar23 <= dVar24) {
        if (dVar24 <= dVar25) {
          return;
        }
        puVar11[1] = uVar9;
        param_2[-1] = uVar3;
        uVar17 = *puVar11;
        if (*(double *)(lVar7 + (long)(int)puVar11[1] * 8) <
            *(double *)(lVar7 + (long)(int)uVar17 * 8)) {
          *puVar11 = puVar11[1];
          puVar11[1] = uVar17;
          return;
        }
        return;
      }
      if (dVar24 <= dVar25) {
        *puVar11 = uVar3;
        puVar11[1] = uVar17;
        if (dVar23 <= *(double *)(lVar7 + (long)(int)param_2[-1] * 8)) {
          return;
        }
        puVar11[1] = param_2[-1];
      }
      else {
        *puVar11 = uVar9;
      }
      goto LAB_109aa4868;
    }
    if (uVar10 != 4) {
      if (uVar10 != 5) goto LAB_109aa3f88;
      lVar7 = *param_3;
      puVar5 = puVar11 + 1;
      puVar6 = puVar11 + 2;
      puVar14 = puVar11 + 3;
      uVar17 = *puVar5;
      uVar3 = *puVar11;
      dVar24 = *(double *)(lVar7 + (long)(int)uVar17 * 8);
      dVar23 = *(double *)(lVar7 + (long)(int)uVar3 * 8);
      uVar9 = *puVar6;
      dVar25 = *(double *)(lVar7 + (long)(int)uVar9 * 8);
      if (dVar23 <= dVar24) {
        if (dVar24 <= dVar25) {
          lVar21 = (long)(int)uVar9;
          goto LAB_109aa49ac;
        }
        *puVar5 = uVar9;
        *puVar6 = uVar17;
        uVar3 = *puVar11;
        if (*(double *)(lVar7 + (long)(int)uVar3 * 8) <= *(double *)(lVar7 + (long)(int)*puVar5 * 8)
           ) {
          lVar21 = (long)(int)uVar17;
          uVar9 = uVar17;
          goto LAB_109aa49ac;
        }
        *puVar11 = *puVar5;
        *puVar5 = uVar3;
        uVar9 = *puVar6;
LAB_109aa499c:
        lVar21 = (long)(int)uVar9;
      }
      else {
        lVar21 = (long)(int)uVar3;
        if (dVar24 <= dVar25) {
          *puVar11 = uVar17;
          *puVar5 = uVar3;
          uVar9 = *puVar6;
          if (dVar23 <= *(double *)(lVar7 + (long)(int)uVar9 * 8)) goto LAB_109aa499c;
          *puVar5 = uVar9;
        }
        else {
          *puVar11 = uVar9;
        }
        *puVar6 = uVar3;
        uVar9 = uVar3;
      }
LAB_109aa49ac:
      if (*(double *)(lVar7 + (long)(int)*puVar14 * 8) < *(double *)(lVar7 + lVar21 * 8)) {
        *puVar6 = *puVar14;
        *puVar14 = uVar9;
        uVar17 = *puVar5;
        if (*(double *)(lVar7 + (long)(int)*puVar6 * 8) < *(double *)(lVar7 + (long)(int)uVar17 * 8)
           ) {
          *puVar5 = *puVar6;
          *puVar6 = uVar17;
          uVar17 = *puVar11;
          if (*(double *)(lVar7 + (long)(int)*puVar5 * 8) <
              *(double *)(lVar7 + (long)(int)uVar17 * 8)) {
            *puVar11 = *puVar5;
            *puVar5 = uVar17;
          }
        }
      }
      uVar17 = param_2[-1];
      uVar3 = *puVar14;
      if (*(double *)(lVar7 + (long)(int)uVar17 * 8) < *(double *)(lVar7 + (long)(int)uVar3 * 8)) {
        *puVar14 = uVar17;
        param_2[-1] = uVar3;
        uVar17 = *puVar6;
        if (*(double *)(lVar7 + (long)(int)*puVar14 * 8) <
            *(double *)(lVar7 + (long)(int)uVar17 * 8)) {
          *puVar6 = *puVar14;
          *puVar14 = uVar17;
          uVar17 = *puVar5;
          if (*(double *)(lVar7 + (long)(int)*puVar6 * 8) <
              *(double *)(lVar7 + (long)(int)uVar17 * 8)) {
            *puVar5 = *puVar6;
            *puVar6 = uVar17;
            uVar17 = *puVar11;
            if (*(double *)(lVar7 + (long)(int)*puVar5 * 8) <
                *(double *)(lVar7 + (long)(int)uVar17 * 8)) {
              *puVar11 = *puVar5;
              *puVar5 = uVar17;
            }
          }
        }
      }
      return;
    }
    puVar6 = puVar11 + 1;
    uVar3 = *puVar6;
    puVar14 = puVar11 + 2;
    uVar9 = *puVar14;
    uVar17 = *puVar11;
    lVar21 = *param_3;
    dVar25 = *(double *)(lVar21 + (long)(int)uVar3 * 8);
    dVar23 = *(double *)(lVar21 + (long)(int)uVar17 * 8);
    lVar7 = (long)(int)uVar9;
    dVar24 = *(double *)(lVar21 + (long)(int)uVar9 * 8);
    puVar5 = puVar11;
    if (dVar23 <= dVar25) {
      uVar13 = uVar9;
      if (dVar25 <= dVar24) goto LAB_109aa489c;
      lVar7 = (long)(int)uVar3;
      *puVar6 = uVar9;
      *puVar14 = uVar3;
      puVar22 = puVar6;
      uVar12 = uVar3;
      lVar18 = lVar7;
joined_r0x000109aa47f8:
      uVar13 = uVar3;
      if (dVar23 <= dVar24) goto LAB_109aa489c;
    }
    else {
      lVar18 = (long)(int)uVar17;
      puVar22 = puVar14;
      uVar12 = uVar17;
      if (dVar25 <= dVar24) {
        *puVar11 = uVar3;
        puVar11[1] = uVar17;
        uVar3 = uVar9;
        puVar5 = puVar6;
        goto joined_r0x000109aa47f8;
      }
    }
    lVar7 = lVar18;
    *puVar5 = uVar9;
    *puVar22 = uVar17;
    uVar13 = uVar12;
LAB_109aa489c:
    if (*(double *)(lVar21 + lVar7 * 8) <= *(double *)(lVar21 + (long)(int)param_2[-1] * 8)) {
      return;
    }
    *puVar14 = param_2[-1];
    param_2[-1] = uVar13;
    uVar17 = *puVar14;
    uVar3 = *puVar6;
    dVar23 = *(double *)(lVar21 + (long)(int)uVar17 * 8);
    if (dVar23 < *(double *)(lVar21 + (long)(int)uVar3 * 8)) {
      puVar11[1] = uVar17;
      puVar11[2] = uVar3;
      uVar3 = *puVar11;
      if (dVar23 < *(double *)(lVar21 + (long)(int)uVar3 * 8)) {
        *puVar11 = uVar17;
        puVar11[1] = uVar3;
        return;
      }
      return;
    }
    return;
  }
  if (uVar10 < 2) {
    return;
  }
  if (uVar10 == 2) {
    uVar17 = *puVar11;
    if (*(double *)(*param_3 + (long)(int)uVar17 * 8) <=
        *(double *)(*param_3 + (long)(int)param_2[-1] * 8)) {
      return;
    }
    *puVar11 = param_2[-1];
LAB_109aa4868:
    param_2[-1] = uVar17;
    return;
  }
LAB_109aa3f88:
  if ((long)uVar10 < 0x18) {
    lVar7 = *param_3;
    puVar5 = puVar11 + 1;
    if ((param_5 & 1) == 0) {
      if (puVar11 != param_2 && puVar5 != param_2) {
        do {
          puVar6 = puVar5;
          lVar21 = (long)(int)*puVar11;
          uVar17 = puVar11[1];
          dVar23 = *(double *)(lVar7 + (long)(int)uVar17 * 8);
          puVar11 = puVar6;
          if (dVar23 < *(double *)(lVar7 + lVar21 * 8)) {
            do {
              *puVar11 = (uint)lVar21;
              lVar21 = (long)(int)puVar11[-2];
              puVar11 = puVar11 + -1;
            } while (dVar23 < *(double *)(lVar7 + lVar21 * 8));
            *puVar11 = uVar17;
          }
          puVar5 = puVar6 + 1;
          puVar11 = puVar6;
        } while (puVar6 + 1 != param_2);
        return;
      }
      return;
    }
    if (puVar11 == param_2 || puVar5 == param_2) {
      return;
    }
    lVar21 = 0;
    puVar6 = puVar11;
    do {
      lVar18 = (long)(int)*puVar6;
      uVar17 = puVar6[1];
      dVar23 = *(double *)(lVar7 + (long)(int)uVar17 * 8);
      lVar4 = lVar21;
      if (dVar23 < *(double *)(lVar7 + lVar18 * 8)) {
        do {
          lVar15 = lVar4;
          *(int *)((long)puVar11 + lVar15 + 4) = (int)lVar18;
          puVar6 = puVar11;
          if (lVar15 == 0) goto LAB_109aa4594;
          lVar18 = (long)*(int *)((long)puVar11 + lVar15 + -4);
          lVar4 = lVar15 + -4;
        } while (dVar23 < *(double *)(lVar7 + lVar18 * 8));
        puVar6 = (uint *)((long)puVar11 + lVar15);
LAB_109aa4594:
        *puVar6 = uVar17;
      }
      puVar14 = puVar5 + 1;
      lVar21 = lVar21 + 4;
      puVar6 = puVar5;
      puVar5 = puVar14;
      if (puVar14 == param_2) {
        return;
      }
    } while( true );
  }
  if (param_4 == 0) {
    if (puVar11 == param_2) {
      return;
    }
    uVar8 = uVar10 - 2 >> 1;
    lVar7 = *param_3;
    uVar19 = uVar8;
    do {
      if ((long)uVar19 <= (long)uVar8) {
        uVar20 = uVar19 << 1 | 1;
        puVar5 = puVar11 + uVar20;
        uVar16 = uVar19 * 2 + 2;
        if (((long)uVar16 < (long)uVar10) &&
           (*(double *)(lVar7 + (long)(int)*puVar5 * 8) <
            *(double *)(lVar7 + (long)(int)puVar5[1] * 8))) {
          uVar20 = uVar16;
          puVar5 = puVar5 + 1;
        }
        lVar21 = (long)(int)*puVar5;
        uVar17 = puVar11[uVar19];
        dVar23 = *(double *)(lVar7 + (long)(int)uVar17 * 8);
        puVar6 = puVar11 + uVar19;
        if (dVar23 <= *(double *)(lVar7 + lVar21 * 8)) {
          do {
            puVar14 = puVar5;
            *puVar6 = (uint)lVar21;
            if ((long)uVar8 < (long)uVar20) break;
            uVar1 = uVar20 << 1 | 1;
            puVar5 = puVar11 + uVar1;
            uVar16 = uVar20 * 2 + 2;
            uVar20 = uVar1;
            if (((long)uVar16 < (long)uVar10) &&
               (*(double *)(lVar7 + (long)(int)*puVar5 * 8) <
                *(double *)(lVar7 + (long)(int)puVar5[1] * 8))) {
              uVar20 = uVar16;
              puVar5 = puVar5 + 1;
            }
            lVar21 = (long)(int)*puVar5;
            puVar6 = puVar14;
          } while (dVar23 <= *(double *)(lVar7 + lVar21 * 8));
          *puVar14 = uVar17;
          lVar7 = *param_3;
        }
      }
      bVar2 = uVar19 != 0;
      uVar19 = uVar19 - 1;
    } while (bVar2);
    do {
      uVar17 = *puVar11;
      lVar7 = *param_3;
      puVar5 = puVar11;
      uVar19 = 0;
      do {
        uVar16 = uVar19 << 1 | 1;
        uVar8 = uVar19 * 2 + 2;
        puVar6 = puVar5 + uVar19 + 1;
        if (((long)uVar8 < (long)uVar10) &&
           (*(double *)(lVar7 + (long)(int)puVar5[uVar19 + 1] * 8) <
            *(double *)(lVar7 + (long)(int)puVar5[uVar19 + 2] * 8))) {
          puVar6 = puVar5 + uVar19 + 2;
          uVar16 = uVar8;
        }
        *puVar5 = *puVar6;
        puVar5 = puVar6;
        uVar19 = uVar16;
      } while ((long)uVar16 <= (long)(uVar10 - 2 >> 1));
      param_2 = param_2 + -1;
      if (puVar6 == param_2) {
        *puVar6 = uVar17;
      }
      else {
        *puVar6 = *param_2;
        *param_2 = uVar17;
        lVar7 = (long)puVar6 + (4 - (long)puVar11) >> 2;
        if (1 < lVar7) {
          lVar21 = *param_3;
          uVar19 = lVar7 - 2U >> 1;
          lVar7 = (long)(int)puVar11[uVar19];
          uVar17 = *puVar6;
          dVar23 = *(double *)(lVar21 + (long)(int)uVar17 * 8);
          puVar5 = puVar11 + uVar19;
          if (*(double *)(lVar21 + lVar7 * 8) < dVar23) {
            do {
              puVar14 = puVar5;
              *puVar6 = (uint)lVar7;
              if (uVar19 == 0) break;
              uVar19 = uVar19 - 1 >> 1;
              lVar7 = (long)(int)puVar11[uVar19];
              puVar6 = puVar14;
              puVar5 = puVar11 + uVar19;
            } while (*(double *)(lVar21 + lVar7 * 8) < dVar23);
            *puVar14 = uVar17;
          }
        }
      }
      bVar2 = (long)uVar10 < 3;
      uVar10 = uVar10 - 1;
      if (bVar2) {
        return;
      }
    } while( true );
  }
  puVar5 = puVar11 + (uVar10 >> 1);
  lVar7 = *param_3;
  uVar17 = param_2[-1];
  dVar23 = *(double *)(lVar7 + (long)(int)uVar17 * 8);
  if (uVar10 < 0x81) {
    uVar3 = *puVar11;
    uVar9 = *puVar5;
    dVar25 = *(double *)(lVar7 + (long)(int)uVar3 * 8);
    dVar24 = *(double *)(lVar7 + (long)(int)uVar9 * 8);
    if (dVar24 <= dVar25) {
      if (dVar23 < dVar25) {
        *puVar11 = uVar17;
        param_2[-1] = uVar3;
        uVar17 = *puVar5;
        if (*(double *)(lVar7 + (long)(int)*puVar11 * 8) <
            *(double *)(lVar7 + (long)(int)uVar17 * 8)) {
          *puVar5 = *puVar11;
          *puVar11 = uVar17;
        }
      }
    }
    else {
      if (dVar25 <= dVar23) {
        *puVar5 = uVar3;
        *puVar11 = uVar9;
        if (dVar24 <= *(double *)(lVar7 + (long)(int)param_2[-1] * 8)) goto LAB_109aa422c;
        *puVar11 = param_2[-1];
      }
      else {
        *puVar5 = uVar17;
      }
      param_2[-1] = uVar9;
    }
  }
  else {
    uVar3 = *puVar5;
    uVar9 = *puVar11;
    dVar25 = *(double *)(lVar7 + (long)(int)uVar3 * 8);
    dVar24 = *(double *)(lVar7 + (long)(int)uVar9 * 8);
    if (dVar24 <= dVar25) {
      if (dVar23 < dVar25) {
        *puVar5 = uVar17;
        param_2[-1] = uVar3;
        uVar17 = *puVar11;
        if (*(double *)(lVar7 + (long)(int)*puVar5 * 8) < *(double *)(lVar7 + (long)(int)uVar17 * 8)
           ) {
          *puVar11 = *puVar5;
          *puVar5 = uVar17;
        }
      }
    }
    else {
      if (dVar25 <= dVar23) {
        *puVar11 = uVar3;
        *puVar5 = uVar9;
        if (dVar24 <= *(double *)(lVar7 + (long)(int)param_2[-1] * 8)) goto LAB_109aa4088;
        *puVar5 = param_2[-1];
      }
      else {
        *puVar11 = uVar17;
      }
      param_2[-1] = uVar9;
    }
LAB_109aa4088:
    puVar6 = puVar5 + -1;
    uVar17 = *puVar6;
    uVar3 = puVar11[1];
    dVar24 = *(double *)(lVar7 + (long)(int)uVar17 * 8);
    dVar23 = *(double *)(lVar7 + (long)(int)uVar3 * 8);
    uVar9 = param_2[-2];
    dVar25 = *(double *)(lVar7 + (long)(int)uVar9 * 8);
    if (dVar23 <= dVar24) {
      if (dVar25 < dVar24) {
        *puVar6 = uVar9;
        param_2[-2] = uVar17;
        uVar17 = puVar11[1];
        if (*(double *)(lVar7 + (long)(int)*puVar6 * 8) < *(double *)(lVar7 + (long)(int)uVar17 * 8)
           ) {
          puVar11[1] = *puVar6;
          *puVar6 = uVar17;
        }
      }
    }
    else {
      if (dVar24 <= dVar25) {
        puVar11[1] = uVar17;
        *puVar6 = uVar3;
        if (dVar23 <= *(double *)(lVar7 + (long)(int)param_2[-2] * 8)) goto LAB_109aa4134;
        *puVar6 = param_2[-2];
      }
      else {
        puVar11[1] = uVar9;
      }
      param_2[-2] = uVar3;
    }
LAB_109aa4134:
    puVar14 = puVar5 + 1;
    uVar17 = *puVar14;
    uVar3 = puVar11[2];
    dVar24 = *(double *)(lVar7 + (long)(int)uVar17 * 8);
    dVar23 = *(double *)(lVar7 + (long)(int)uVar3 * 8);
    uVar9 = param_2[-3];
    dVar25 = *(double *)(lVar7 + (long)(int)uVar9 * 8);
    if (dVar23 <= dVar24) {
      if (dVar25 < dVar24) {
        *puVar14 = uVar9;
        param_2[-3] = uVar17;
        uVar17 = puVar11[2];
        if (*(double *)(lVar7 + (long)(int)*puVar14 * 8) <
            *(double *)(lVar7 + (long)(int)uVar17 * 8)) {
          puVar11[2] = *puVar14;
          *puVar14 = uVar17;
        }
      }
    }
    else {
      if (dVar24 <= dVar25) {
        puVar11[2] = uVar17;
        *puVar14 = uVar3;
        if (dVar23 <= *(double *)(lVar7 + (long)(int)param_2[-3] * 8)) goto LAB_109aa41bc;
        *puVar14 = param_2[-3];
      }
      else {
        puVar11[2] = uVar9;
      }
      param_2[-3] = uVar3;
    }
LAB_109aa41bc:
    uVar17 = *puVar5;
    uVar3 = puVar5[1];
    dVar25 = *(double *)(lVar7 + (long)(int)uVar17 * 8);
    uVar9 = puVar5[-1];
    dVar23 = *(double *)(lVar7 + (long)(int)uVar9 * 8);
    dVar24 = *(double *)(lVar7 + (long)(int)uVar3 * 8);
    if (dVar23 <= dVar25) {
      if (dVar24 < dVar25) {
        *puVar5 = uVar3;
        puVar5[1] = uVar17;
        puVar14 = puVar5;
        uVar17 = uVar3;
        uVar13 = uVar9;
        if (dVar24 < dVar23) goto LAB_109aa4218;
      }
    }
    else {
      uVar13 = uVar17;
      if (dVar25 <= dVar24) {
        puVar5[-1] = uVar17;
        *puVar5 = uVar9;
        puVar6 = puVar5;
        uVar17 = uVar9;
        uVar13 = uVar3;
        if (dVar23 <= dVar24) goto LAB_109aa4220;
      }
LAB_109aa4218:
      *puVar6 = uVar3;
      *puVar14 = uVar9;
      uVar17 = uVar13;
    }
LAB_109aa4220:
    uVar3 = *puVar11;
    *puVar11 = uVar17;
    *puVar5 = uVar3;
  }
LAB_109aa422c:
  param_4 = param_4 + -1;
  uVar17 = *puVar11;
  param_1 = puVar11;
  if ((param_5 & 1) == 0) {
    dVar23 = *(double *)(lVar7 + (long)(int)uVar17 * 8);
    if (dVar23 <= *(double *)(lVar7 + (long)(int)puVar11[-1] * 8)) {
      if (*(double *)(lVar7 + (long)(int)param_2[-1] * 8) <= dVar23) {
        do {
          param_1 = param_1 + 1;
          if (param_2 <= param_1) break;
        } while (*(double *)(lVar7 + (long)(int)*param_1 * 8) <= dVar23);
      }
      else {
        do {
          param_1 = param_1 + 1;
        } while (*(double *)(lVar7 + (long)(int)*param_1 * 8) <= dVar23);
      }
      puVar5 = param_2;
      if (param_1 < param_2) {
        do {
          puVar5 = puVar5 + -1;
        } while (dVar23 < *(double *)(lVar7 + (long)(int)*puVar5 * 8));
      }
      if (param_1 < puVar5) {
        uVar10 = (ulong)*param_1;
        uVar19 = (ulong)*puVar5;
        do {
          *param_1 = (uint)uVar19;
          *puVar5 = (uint)uVar10;
          do {
            param_1 = param_1 + 1;
            uVar10 = (ulong)(int)*param_1;
          } while (*(double *)(lVar7 + uVar10 * 8) <= dVar23);
          do {
            puVar5 = puVar5 + -1;
            uVar19 = (ulong)(int)*puVar5;
          } while (dVar23 < *(double *)(lVar7 + uVar19 * 8));
        } while (param_1 < puVar5);
      }
      puVar5 = param_1 + -1;
      if (puVar5 != puVar11) {
        *puVar11 = *puVar5;
      }
      param_5 = 0;
      *puVar5 = uVar17;
      goto LAB_109aa3f4c;
    }
  }
  else {
    dVar23 = *(double *)(lVar7 + (long)(int)uVar17 * 8);
  }
  lVar21 = 0;
  do {
    lVar18 = (long)*(int *)((long)puVar11 + lVar21 + 4);
    lVar21 = lVar21 + 4;
  } while (*(double *)(lVar7 + lVar18 * 8) < dVar23);
  puVar5 = (uint *)((long)puVar11 + lVar21);
  puVar6 = param_2;
  if (lVar21 == 4) {
    do {
      if (puVar6 <= puVar5) break;
      puVar6 = puVar6 + -1;
    } while (dVar23 <= *(double *)(lVar7 + (long)(int)*puVar6 * 8));
  }
  else {
    do {
      puVar6 = puVar6 + -1;
    } while (dVar23 <= *(double *)(lVar7 + (long)(int)*puVar6 * 8));
  }
  param_1 = puVar5;
  if (puVar5 < puVar6) {
    uVar10 = (ulong)*puVar6;
    puVar14 = puVar6;
    do {
      *param_1 = (uint)uVar10;
      *puVar14 = (uint)lVar18;
      do {
        param_1 = param_1 + 1;
        lVar18 = (long)(int)*param_1;
      } while (*(double *)(lVar7 + lVar18 * 8) < dVar23);
      do {
        puVar14 = puVar14 + -1;
        uVar10 = (ulong)(int)*puVar14;
      } while (dVar23 <= *(double *)(lVar7 + uVar10 * 8));
    } while (param_1 < puVar14);
  }
  puVar14 = param_1 + -1;
  if (puVar14 != puVar11) {
    *puVar11 = *puVar14;
  }
  *puVar14 = uVar17;
  if (puVar5 < puVar6) {
LAB_109aa4350:
    FUN_109aa3f1c(puVar11,puVar14,param_3,param_4,param_5 & 1);
    param_5 = 0;
  }
  else {
    puVar5 = puVar11;
    FUN_109aa4a8c(puVar11,puVar14,*param_3);
    puVar6 = param_1;
    FUN_109aa4a8c(param_1,param_2,*param_3);
    if ((int)puVar6 == 0) {
      if (((ulong)puVar5 & 1) == 0) goto LAB_109aa4350;
    }
    else {
      param_1 = puVar11;
      param_2 = puVar14;
      if (((ulong)puVar5 & 1) != 0) {
        return;
      }
    }
  }
  goto LAB_109aa3f4c;
}



/* Entry: 109aa4900; end: 109aa4a8b;  */

void FUN_109aa4900(int *param_1,int *param_2,int *param_3,int *param_4,int *param_5,long param_6)

{
  int iVar1;
  int iVar2;
  long lVar3;
  int iVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  
  iVar1 = *param_2;
  iVar2 = *param_1;
  dVar6 = *(double *)(param_6 + (long)iVar1 * 8);
  dVar5 = *(double *)(param_6 + (long)iVar2 * 8);
  iVar4 = *param_3;
  dVar7 = *(double *)(param_6 + (long)iVar4 * 8);
  if (dVar5 <= dVar6) {
    if (dVar6 <= dVar7) {
      lVar3 = (long)iVar4;
      goto LAB_109aa49ac;
    }
    *param_2 = iVar4;
    *param_3 = iVar1;
    iVar2 = *param_1;
    if (*(double *)(param_6 + (long)iVar2 * 8) <= *(double *)(param_6 + (long)*param_2 * 8)) {
      lVar3 = (long)iVar1;
      iVar4 = iVar1;
      goto LAB_109aa49ac;
    }
    *param_1 = *param_2;
    *param_2 = iVar2;
    iVar4 = *param_3;
LAB_109aa499c:
    lVar3 = (long)iVar4;
  }
  else {
    lVar3 = (long)iVar2;
    if (dVar6 <= dVar7) {
      *param_1 = iVar1;
      *param_2 = iVar2;
      iVar4 = *param_3;
      if (dVar5 <= *(double *)(param_6 + (long)iVar4 * 8)) goto LAB_109aa499c;
      *param_2 = iVar4;
    }
    else {
      *param_1 = iVar4;
    }
    *param_3 = iVar2;
    iVar4 = iVar2;
  }
LAB_109aa49ac:
  if (*(double *)(param_6 + (long)*param_4 * 8) < *(double *)(param_6 + lVar3 * 8)) {
    *param_3 = *param_4;
    *param_4 = iVar4;
    iVar1 = *param_2;
    if (*(double *)(param_6 + (long)*param_3 * 8) < *(double *)(param_6 + (long)iVar1 * 8)) {
      *param_2 = *param_3;
      *param_3 = iVar1;
      iVar1 = *param_1;
      if (*(double *)(param_6 + (long)*param_2 * 8) < *(double *)(param_6 + (long)iVar1 * 8)) {
        *param_1 = *param_2;
        *param_2 = iVar1;
      }
    }
  }
  iVar1 = *param_4;
  if (*(double *)(param_6 + (long)*param_5 * 8) < *(double *)(param_6 + (long)iVar1 * 8)) {
    *param_4 = *param_5;
    *param_5 = iVar1;
    iVar1 = *param_3;
    if (*(double *)(param_6 + (long)*param_4 * 8) < *(double *)(param_6 + (long)iVar1 * 8)) {
      *param_3 = *param_4;
      *param_4 = iVar1;
      iVar1 = *param_2;
      if (*(double *)(param_6 + (long)*param_3 * 8) < *(double *)(param_6 + (long)iVar1 * 8)) {
        *param_2 = *param_3;
        *param_3 = iVar1;
        iVar1 = *param_1;
        if (*(double *)(param_6 + (long)*param_2 * 8) < *(double *)(param_6 + (long)iVar1 * 8)) {
          *param_1 = *param_2;
          *param_2 = iVar1;
        }
      }
    }
  }
  return;
}



/* Entry: 109aa4a8c; end: 109aa4d87;  */

bool FUN_109aa4a8c(int *param_1,int *param_2,long param_3)

{
  int iVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int *piVar8;
  long lVar9;
  int *piVar10;
  int *piVar11;
  long lVar12;
  long lVar13;
  int *piVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  
  uVar4 = (long)param_2 - (long)param_1 >> 2;
  if ((long)uVar4 < 3) {
    if (uVar4 < 2) {
      return true;
    }
    if (uVar4 == 2) {
      iVar5 = *param_1;
      if (*(double *)(param_3 + (long)param_2[-1] * 8) < *(double *)(param_3 + (long)iVar5 * 8)) {
        *param_1 = param_2[-1];
        param_2[-1] = iVar5;
        return true;
      }
      return true;
    }
  }
  else {
    if (uVar4 == 3) {
      iVar5 = *param_1;
      iVar1 = param_1[1];
      dVar16 = *(double *)(param_3 + (long)iVar1 * 8);
      dVar15 = *(double *)(param_3 + (long)iVar5 * 8);
      iVar2 = param_2[-1];
      dVar17 = *(double *)(param_3 + (long)iVar2 * 8);
      if (dVar16 < dVar15) {
        if (dVar16 <= dVar17) {
          *param_1 = iVar1;
          param_1[1] = iVar5;
          if (dVar15 <= *(double *)(param_3 + (long)param_2[-1] * 8)) {
            return true;
          }
          param_1[1] = param_2[-1];
        }
        else {
          *param_1 = iVar2;
        }
        param_2[-1] = iVar5;
        return true;
      }
      if (dVar17 < dVar16) {
        param_1[1] = iVar2;
        param_2[-1] = iVar1;
        iVar5 = *param_1;
        if (*(double *)(param_3 + (long)param_1[1] * 8) < *(double *)(param_3 + (long)iVar5 * 8)) {
          *param_1 = param_1[1];
          param_1[1] = iVar5;
          return true;
        }
        return true;
      }
      return true;
    }
    if (uVar4 == 4) {
      piVar10 = param_1 + 1;
      iVar1 = *piVar10;
      piVar8 = param_1 + 2;
      iVar2 = *piVar8;
      iVar5 = *param_1;
      dVar17 = *(double *)(param_3 + (long)iVar1 * 8);
      dVar15 = *(double *)(param_3 + (long)iVar5 * 8);
      lVar9 = (long)iVar2;
      dVar16 = *(double *)(param_3 + (long)iVar2 * 8);
      piVar11 = param_1;
      if (dVar15 <= dVar17) {
        iVar7 = iVar2;
        if (dVar17 <= dVar16) goto LAB_109aa4d20;
        lVar9 = (long)iVar1;
        *piVar10 = iVar2;
        *piVar8 = iVar1;
        piVar14 = piVar10;
        iVar6 = iVar1;
        lVar13 = lVar9;
joined_r0x000109aa4ccc:
        iVar7 = iVar1;
        if (dVar15 <= dVar16) goto LAB_109aa4d20;
      }
      else {
        lVar13 = (long)iVar5;
        piVar14 = piVar8;
        iVar6 = iVar5;
        if (dVar17 <= dVar16) {
          *param_1 = iVar1;
          param_1[1] = iVar5;
          iVar1 = iVar2;
          piVar11 = piVar10;
          goto joined_r0x000109aa4ccc;
        }
      }
      lVar9 = lVar13;
      *piVar11 = iVar2;
      *piVar14 = iVar5;
      iVar7 = iVar6;
LAB_109aa4d20:
      if (*(double *)(param_3 + lVar9 * 8) <= *(double *)(param_3 + (long)param_2[-1] * 8)) {
        return true;
      }
      *piVar8 = param_2[-1];
      param_2[-1] = iVar7;
      iVar5 = *piVar8;
      iVar1 = *piVar10;
      dVar15 = *(double *)(param_3 + (long)iVar5 * 8);
      if (dVar15 < *(double *)(param_3 + (long)iVar1 * 8)) {
        param_1[1] = iVar5;
        param_1[2] = iVar1;
        iVar1 = *param_1;
        if (dVar15 < *(double *)(param_3 + (long)iVar1 * 8)) {
          *param_1 = iVar5;
          param_1[1] = iVar1;
          return true;
        }
        return true;
      }
      return true;
    }
    if (uVar4 == 5) {
      FUN_109aa4900(param_1,param_1 + 1,param_1 + 2,param_1 + 3,param_2 + -1);
      return true;
    }
  }
  piVar10 = param_1 + 2;
  iVar5 = *piVar10;
  piVar8 = param_1 + 1;
  iVar1 = *piVar8;
  dVar17 = *(double *)(param_3 + (long)iVar1 * 8);
  iVar2 = *param_1;
  dVar15 = *(double *)(param_3 + (long)iVar2 * 8);
  dVar16 = *(double *)(param_3 + (long)iVar5 * 8);
  piVar11 = param_1;
  if (dVar15 <= dVar17) {
    if (dVar17 <= dVar16) goto LAB_109aa4c20;
    *piVar8 = iVar5;
    *piVar10 = iVar1;
    piVar14 = piVar8;
joined_r0x000109aa4c14:
    if (dVar15 <= dVar16) goto LAB_109aa4c20;
  }
  else {
    piVar14 = piVar10;
    if (dVar17 <= dVar16) {
      *param_1 = iVar1;
      param_1[1] = iVar2;
      piVar11 = piVar8;
      goto joined_r0x000109aa4c14;
    }
  }
  *piVar11 = iVar5;
  *piVar14 = iVar2;
LAB_109aa4c20:
  if (param_1 + 3 != param_2) {
    iVar5 = 0;
    lVar9 = 0xc;
    piVar11 = param_1 + 3;
    do {
      piVar8 = piVar11;
      iVar1 = *piVar8;
      lVar12 = (long)*piVar10;
      dVar15 = *(double *)(param_3 + (long)iVar1 * 8);
      lVar13 = lVar9;
      if (dVar15 < *(double *)(param_3 + lVar12 * 8)) {
        do {
          *(int *)((long)param_1 + lVar13) = (int)lVar12;
          lVar3 = lVar13 + -4;
          piVar11 = param_1;
          if (lVar3 == 0) goto LAB_109aa4c80;
          lVar12 = (long)*(int *)((long)param_1 + lVar13 + -8);
          lVar13 = lVar3;
        } while (dVar15 < *(double *)(param_3 + lVar12 * 8));
        piVar11 = (int *)((long)param_1 + lVar3);
LAB_109aa4c80:
        *piVar11 = iVar1;
        iVar5 = iVar5 + 1;
        if (iVar5 == 8) {
          return piVar8 + 1 == param_2;
        }
      }
      lVar9 = lVar9 + 4;
      piVar11 = piVar8 + 1;
      piVar10 = piVar8;
    } while (piVar8 + 1 != param_2);
  }
  return true;
}



/* Entry: 109aa4d88; end: 109aa534f;  */

int FUN_109aa4d88(undefined4 *param_1,ulong param_2,uint param_3,undefined4 *param_4,ulong param_5,
                 uint param_6)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  int iVar6;
  ulong uVar7;
  float *pfVar8;
  float *pfVar9;
  undefined4 *puVar10;
  ulong uVar11;
  float *pfVar12;
  float *pfVar13;
  undefined4 *puVar14;
  float *pfVar15;
  ulong uVar16;
  uint uVar17;
  long lVar18;
  undefined4 *puVar19;
  undefined4 *puVar20;
  ulong uVar21;
  ulong uVar22;
  undefined4 uVar23;
  float fVar24;
  float fVar25;
  
  if ((int)param_3 < 1) {
    iVar6 = 1;
  }
  else {
    uVar7 = (ulong)param_3;
    param_2 = param_2 >> 2;
    uVar2 = 1;
    param_5 = param_5 >> 2;
    iVar6 = 1;
    pfVar8 = (float *)(param_1 + param_2);
    puVar4 = param_4;
    puVar5 = param_1;
    uVar3 = 0;
    puVar10 = param_1;
    uVar11 = uVar7;
    puVar14 = param_4;
    do {
      puVar14 = puVar14 + param_5;
      uVar16 = uVar3 + 1;
      uVar22 = uVar3;
      pfVar9 = pfVar8;
      uVar21 = uVar2;
      if (uVar16 < uVar7) {
        do {
          uVar17 = (uint)uVar21;
          if (ABS(*pfVar9) <= ABS((float)param_1[uVar3 + param_2 * (long)(int)(uint)uVar22])) {
            uVar17 = (uint)uVar22;
          }
          uVar21 = uVar21 + 1;
          uVar22 = (ulong)uVar17;
          pfVar9 = pfVar9 + param_2;
        } while (uVar7 != uVar21);
      }
      else {
        uVar17 = (uint)uVar3;
      }
      lVar18 = (long)(int)uVar17;
      if (ABS((float)param_1[param_2 * lVar18 + uVar3]) < 1.1920929e-06) {
        return 0;
      }
      if (uVar3 != uVar17) {
        puVar19 = (undefined4 *)((long)puVar10 + param_2 * 4 * lVar18);
        puVar20 = puVar5;
        uVar21 = uVar11;
        do {
          uVar23 = *puVar20;
          *puVar20 = *puVar19;
          *puVar19 = uVar23;
          uVar21 = uVar21 - 1;
          puVar19 = puVar19 + 1;
          puVar20 = puVar20 + 1;
        } while (uVar21 != 0);
        if (param_4 != (undefined4 *)0x0 && 0 < (int)param_6) {
          puVar19 = param_4 + param_5 * lVar18;
          puVar20 = puVar4;
          uVar21 = (ulong)param_6;
          do {
            uVar23 = *puVar20;
            *puVar20 = *puVar19;
            *puVar19 = uVar23;
            uVar21 = uVar21 - 1;
            puVar19 = puVar19 + 1;
            puVar20 = puVar20 + 1;
          } while (uVar21 != 0);
        }
        iVar6 = -iVar6;
      }
      fVar24 = (float)param_1[uVar3 * param_2 + uVar3];
      puVar19 = puVar14;
      pfVar9 = pfVar8;
      uVar21 = uVar2;
      if (uVar16 < uVar7) {
        do {
          fVar25 = (-1.0 / fVar24) * (float)param_1[uVar21 * param_2 + uVar3];
          uVar22 = 1;
          do {
            pfVar9[uVar22] = pfVar9[uVar22] + (float)puVar5[uVar22] * fVar25;
            uVar22 = uVar22 + 1;
          } while (uVar11 != uVar22);
          if (param_4 != (undefined4 *)0x0 && 0 < (int)param_6) {
            lVar18 = 0;
            do {
              *(float *)((long)puVar19 + lVar18) =
                   *(float *)((long)puVar19 + lVar18) + *(float *)((long)puVar4 + lVar18) * fVar25;
              lVar18 = lVar18 + 4;
            } while ((ulong)param_6 << 2 != lVar18);
          }
          uVar21 = uVar21 + 1;
          puVar19 = puVar19 + param_5;
          pfVar9 = pfVar9 + param_2;
        } while (uVar21 != uVar7);
      }
      param_1[uVar3 * param_2 + uVar3] = -(-1.0 / fVar24);
      uVar2 = uVar2 + 1;
      pfVar8 = pfVar8 + param_2 + 1;
      uVar11 = uVar11 - 1;
      puVar10 = puVar10 + 1;
      puVar5 = puVar5 + param_2 + 1;
      puVar4 = puVar4 + param_5;
      uVar3 = uVar16;
    } while (uVar16 != uVar7);
    if (param_4 != (undefined4 *)0x0) {
      pfVar8 = (float *)(param_4 + param_5 * uVar7);
      pfVar9 = (float *)(param_1 + uVar7 + param_2 * (uVar7 - 1));
      uVar2 = uVar7;
      do {
        uVar3 = uVar2 - 1;
        if (0 < (int)param_6) {
          uVar11 = 0;
          pfVar12 = pfVar8;
          do {
            fVar24 = (float)param_4[uVar3 * param_5 + uVar11];
            pfVar13 = pfVar9;
            pfVar15 = pfVar12;
            uVar16 = uVar2;
            if ((long)uVar2 < (long)uVar7) {
              do {
                fVar24 = fVar24 - *pfVar15 * *pfVar13;
                uVar17 = (int)uVar16 + 1;
                pfVar13 = pfVar13 + 1;
                pfVar15 = pfVar15 + param_5;
                uVar16 = (ulong)uVar17;
              } while ((int)uVar17 < (int)param_3);
            }
            param_4[uVar3 * param_5 + uVar11] = fVar24 * (float)param_1[uVar3 * (param_2 + 1)];
            uVar11 = uVar11 + 1;
            pfVar12 = pfVar12 + 1;
          } while (uVar11 != param_6);
        }
        pfVar8 = pfVar8 + -param_5;
        pfVar9 = pfVar9 + ~param_2;
        bVar1 = 1 < (long)uVar2;
        uVar2 = uVar3;
      } while (bVar1);
    }
  }
  return iVar6;
}



/* Entry: 109aa5350; end: 109aa57eb;  */

bool FUN_109aa5350(long param_1,ulong param_2,uint param_3,float *param_4,ulong param_5,uint param_6
                  )

{
  long lVar1;
  float *pfVar2;
  float *pfVar3;
  ulong uVar4;
  bool bVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  float *pfVar9;
  float *pfVar10;
  ulong uVar11;
  long lVar12;
  ulong uVar13;
  ulong uVar14;
  long lVar15;
  float fVar16;
  float fVar17;
  
  uVar11 = (ulong)(param_3 - 1);
  if (0 < (int)param_3) {
    uVar14 = 0;
    bVar5 = false;
    param_2 = param_2 >> 2;
    param_5 = param_5 >> 2;
    lVar1 = param_2 + 1;
    lVar12 = param_2 * 4;
    uVar13 = (ulong)param_3;
    lVar15 = param_1;
    do {
      pfVar9 = (float *)(param_1 + uVar14 * param_2 * 4);
      if (uVar14 == 0) {
        fVar16 = *pfVar9;
      }
      else {
        uVar6 = 0;
        lVar7 = param_1;
        do {
          fVar16 = pfVar9[uVar6];
          if (uVar6 != 0) {
            uVar8 = 0;
            do {
              fVar16 = fVar16 - *(float *)(lVar15 + uVar8 * 4) * *(float *)(lVar7 + uVar8 * 4);
              uVar8 = uVar8 + 1;
            } while (uVar6 != uVar8);
          }
          pfVar9[uVar6] = fVar16 * *(float *)(param_1 + uVar6 * lVar1 * 4);
          uVar6 = uVar6 + 1;
          lVar7 = lVar7 + lVar12;
        } while (uVar6 != uVar14);
        uVar6 = 0;
        pfVar9 = pfVar9 + uVar14;
        fVar16 = *pfVar9;
        do {
          fVar17 = *(float *)(lVar15 + uVar6 * 4);
          fVar16 = fVar16 - fVar17 * fVar17;
          uVar6 = uVar6 + 1;
        } while (uVar14 != uVar6);
      }
      if (fVar16 < 1.1920929e-07) {
        return bVar5;
      }
      *pfVar9 = 1.0 / SQRT(fVar16);
      uVar14 = uVar14 + 1;
      lVar15 = lVar15 + lVar12;
      bVar5 = uVar13 <= uVar14;
    } while (uVar14 != uVar13);
    if (param_4 != (float *)0x0) {
      uVar14 = 0;
      lVar15 = param_1;
      do {
        if (0 < (int)param_6) {
          uVar6 = 0;
          pfVar9 = param_4;
          do {
            fVar16 = param_4[uVar14 * param_5 + uVar6];
            if (uVar14 != 0) {
              uVar8 = 0;
              pfVar10 = pfVar9;
              do {
                fVar16 = fVar16 - *(float *)(lVar15 + uVar8 * 4) * *pfVar10;
                uVar8 = uVar8 + 1;
                pfVar10 = pfVar10 + param_5;
              } while (uVar14 != uVar8);
            }
            param_4[uVar14 * param_5 + uVar6] = fVar16 * *(float *)(param_1 + uVar14 * lVar1 * 4);
            uVar6 = uVar6 + 1;
            pfVar9 = pfVar9 + 1;
          } while (uVar6 != param_6);
        }
        uVar14 = uVar14 + 1;
        lVar15 = lVar15 + lVar12;
      } while (uVar14 != uVar13);
      uVar13 = uVar13 - 1;
      pfVar9 = (float *)(param_1 + param_2 * uVar13 * 4 + uVar11 * 4);
      uVar14 = uVar11;
      do {
        if (0 < (int)param_6) {
          uVar6 = 0;
          pfVar10 = param_4 + param_5 * uVar13;
          do {
            fVar16 = param_4[uVar14 * param_5 + uVar6];
            uVar8 = uVar13;
            pfVar3 = pfVar10;
            pfVar2 = pfVar9;
            uVar4 = uVar11;
            while ((long)uVar14 < (long)uVar4) {
              fVar16 = fVar16 - *pfVar2 * *pfVar3;
              pfVar2 = pfVar2 + -param_2;
              pfVar3 = pfVar3 + -param_5;
              uVar8 = uVar8 - 1;
              uVar4 = uVar8;
            }
            param_4[uVar14 * param_5 + uVar6] = fVar16 * *(float *)(param_1 + uVar14 * lVar1 * 4);
            uVar6 = uVar6 + 1;
            pfVar10 = pfVar10 + 1;
          } while (uVar6 != param_6);
        }
        pfVar9 = pfVar9 + -1;
        bVar5 = 0 < (long)uVar14;
        uVar14 = uVar14 - 1;
      } while (bVar5);
    }
  }
  return true;
}



/* Entry: 109aa57ec; end: 109aa6383;  */

void FUN_109aa57ec(undefined8 *param_1,undefined1 *param_2,uint param_3,uint param_4)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  long lVar7;
  undefined1 *puVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  undefined1 *puVar12;
  undefined1 *puVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  
  uVar1 = param_4 & 3;
  if (-1 < (int)-param_4) {
    uVar1 = -(-param_4 & 3);
  }
  uVar2 = 4;
  if (uVar1 != 0) {
    uVar2 = uVar1;
  }
  puVar6 = (undefined1 *)*param_1;
  if (uVar1 == 3) {
    uVar11 = 0;
    lVar7 = 0;
    lVar9 = param_1[1];
    lVar3 = param_1[2];
    if ((0x10 < (int)param_3) && (param_4 == 3)) {
      lVar7 = 0;
      uVar11 = 0;
      puVar5 = param_2;
      do {
        uVar15 = *(undefined8 *)((long)(puVar6 + uVar11) + 8);
        uVar14 = *(undefined8 *)(puVar6 + uVar11);
        puVar4 = (undefined8 *)(lVar9 + uVar11);
        uVar17 = puVar4[1];
        uVar16 = *puVar4;
        puVar4 = (undefined8 *)(lVar3 + uVar11);
        uVar19 = puVar4[1];
        uVar18 = *puVar4;
        *puVar5 = (char)uVar14;
        puVar5[1] = (char)uVar16;
        puVar5[2] = (char)uVar18;
        puVar5[3] = (char)((ulong)uVar14 >> 8);
        puVar5[4] = (char)((ulong)uVar16 >> 8);
        puVar5[5] = (char)((ulong)uVar18 >> 8);
        puVar5[6] = (char)((ulong)uVar14 >> 0x10);
        puVar5[7] = (char)((ulong)uVar16 >> 0x10);
        puVar5[8] = (char)((ulong)uVar18 >> 0x10);
        puVar5[9] = (char)((ulong)uVar14 >> 0x18);
        puVar5[10] = (char)((ulong)uVar16 >> 0x18);
        puVar5[0xb] = (char)((ulong)uVar18 >> 0x18);
        puVar5[0xc] = (char)((ulong)uVar14 >> 0x20);
        puVar5[0xd] = (char)((ulong)uVar16 >> 0x20);
        puVar5[0xe] = (char)((ulong)uVar18 >> 0x20);
        puVar5[0xf] = (char)((ulong)uVar14 >> 0x28);
        puVar5[0x10] = (char)((ulong)uVar16 >> 0x28);
        puVar5[0x11] = (char)((ulong)uVar18 >> 0x28);
        puVar5[0x12] = (char)((ulong)uVar14 >> 0x30);
        puVar5[0x13] = (char)((ulong)uVar16 >> 0x30);
        puVar5[0x14] = (char)((ulong)uVar18 >> 0x30);
        puVar5[0x15] = (char)((ulong)uVar14 >> 0x38);
        puVar5[0x16] = (char)((ulong)uVar16 >> 0x38);
        puVar5[0x17] = (char)((ulong)uVar18 >> 0x38);
        puVar5[0x18] = (char)uVar15;
        puVar5[0x19] = (char)uVar17;
        puVar5[0x1a] = (char)uVar19;
        puVar5[0x1b] = (char)((ulong)uVar15 >> 8);
        puVar5[0x1c] = (char)((ulong)uVar17 >> 8);
        puVar5[0x1d] = (char)((ulong)uVar19 >> 8);
        puVar5[0x1e] = (char)((ulong)uVar15 >> 0x10);
        puVar5[0x1f] = (char)((ulong)uVar17 >> 0x10);
        puVar5[0x20] = (char)((ulong)uVar19 >> 0x10);
        puVar5[0x21] = (char)((ulong)uVar15 >> 0x18);
        puVar5[0x22] = (char)((ulong)uVar17 >> 0x18);
        puVar5[0x23] = (char)((ulong)uVar19 >> 0x18);
        puVar5[0x24] = (char)((ulong)uVar15 >> 0x20);
        puVar5[0x25] = (char)((ulong)uVar17 >> 0x20);
        puVar5[0x26] = (char)((ulong)uVar19 >> 0x20);
        puVar5[0x27] = (char)((ulong)uVar15 >> 0x28);
        puVar5[0x28] = (char)((ulong)uVar17 >> 0x28);
        puVar5[0x29] = (char)((ulong)uVar19 >> 0x28);
        puVar5[0x2a] = (char)((ulong)uVar15 >> 0x30);
        puVar5[0x2b] = (char)((ulong)uVar17 >> 0x30);
        puVar5[0x2c] = (char)((ulong)uVar19 >> 0x30);
        puVar5[0x2d] = (char)((ulong)uVar15 >> 0x38);
        puVar5[0x2e] = (char)((ulong)uVar17 >> 0x38);
        puVar5[0x2f] = (char)((ulong)uVar19 >> 0x38);
        puVar5 = puVar5 + 0x30;
        uVar11 = uVar11 + 0x10;
        lVar7 = lVar7 + 0x3000000000;
      } while (uVar11 < param_3 - 0x10);
      lVar7 = lVar7 >> 0x20;
    }
    if ((int)uVar11 < (int)param_3) {
      puVar5 = param_2 + lVar7 + 2;
      lVar7 = (ulong)param_3 - (uVar11 & 0xffffffff);
      puVar6 = puVar6 + (uVar11 & 0xffffffff);
      puVar8 = (undefined1 *)(lVar3 + (uVar11 & 0xffffffff));
      puVar12 = (undefined1 *)(lVar9 + (uVar11 & 0xffffffff));
      do {
        puVar5[-2] = *puVar6;
        puVar5[-1] = *puVar12;
        *puVar5 = *puVar8;
        puVar5 = puVar5 + (int)param_4;
        lVar7 = lVar7 + -1;
        puVar6 = puVar6 + 1;
        puVar8 = puVar8 + 1;
        puVar12 = puVar12 + 1;
      } while (lVar7 != 0);
    }
  }
  else if (uVar1 == 2) {
    uVar11 = 0;
    lVar7 = 0;
    lVar9 = param_1[1];
    if ((0x10 < (int)param_3) && (param_4 == 2)) {
      lVar7 = 0;
      uVar11 = 0;
      puVar5 = param_2;
      do {
        uVar15 = *(undefined8 *)((long)(puVar6 + uVar11) + 8);
        uVar14 = *(undefined8 *)(puVar6 + uVar11);
        puVar4 = (undefined8 *)(lVar9 + uVar11);
        uVar17 = puVar4[1];
        uVar16 = *puVar4;
        *puVar5 = (char)uVar14;
        puVar5[1] = (char)uVar16;
        puVar5[2] = (char)((ulong)uVar14 >> 8);
        puVar5[3] = (char)((ulong)uVar16 >> 8);
        puVar5[4] = (char)((ulong)uVar14 >> 0x10);
        puVar5[5] = (char)((ulong)uVar16 >> 0x10);
        puVar5[6] = (char)((ulong)uVar14 >> 0x18);
        puVar5[7] = (char)((ulong)uVar16 >> 0x18);
        puVar5[8] = (char)((ulong)uVar14 >> 0x20);
        puVar5[9] = (char)((ulong)uVar16 >> 0x20);
        puVar5[10] = (char)((ulong)uVar14 >> 0x28);
        puVar5[0xb] = (char)((ulong)uVar16 >> 0x28);
        puVar5[0xc] = (char)((ulong)uVar14 >> 0x30);
        puVar5[0xd] = (char)((ulong)uVar16 >> 0x30);
        puVar5[0xe] = (char)((ulong)uVar14 >> 0x38);
        puVar5[0xf] = (char)((ulong)uVar16 >> 0x38);
        puVar5[0x10] = (char)uVar15;
        puVar5[0x11] = (char)uVar17;
        puVar5[0x12] = (char)((ulong)uVar15 >> 8);
        puVar5[0x13] = (char)((ulong)uVar17 >> 8);
        puVar5[0x14] = (char)((ulong)uVar15 >> 0x10);
        puVar5[0x15] = (char)((ulong)uVar17 >> 0x10);
        puVar5[0x16] = (char)((ulong)uVar15 >> 0x18);
        puVar5[0x17] = (char)((ulong)uVar17 >> 0x18);
        puVar5[0x18] = (char)((ulong)uVar15 >> 0x20);
        puVar5[0x19] = (char)((ulong)uVar17 >> 0x20);
        puVar5[0x1a] = (char)((ulong)uVar15 >> 0x28);
        puVar5[0x1b] = (char)((ulong)uVar17 >> 0x28);
        puVar5[0x1c] = (char)((ulong)uVar15 >> 0x30);
        puVar5[0x1d] = (char)((ulong)uVar17 >> 0x30);
        puVar5[0x1e] = (char)((ulong)uVar15 >> 0x38);
        puVar5[0x1f] = (char)((ulong)uVar17 >> 0x38);
        puVar5 = puVar5 + 0x20;
        uVar11 = uVar11 + 0x10;
        lVar7 = lVar7 + 0x2000000000;
      } while (uVar11 < param_3 - 0x10);
      lVar7 = lVar7 >> 0x20;
    }
    if ((int)uVar11 < (int)param_3) {
      puVar5 = param_2 + lVar7 + 1;
      lVar7 = (ulong)param_3 - (uVar11 & 0xffffffff);
      puVar6 = puVar6 + (uVar11 & 0xffffffff);
      puVar8 = (undefined1 *)(lVar9 + (uVar11 & 0xffffffff));
      do {
        puVar5[-1] = *puVar6;
        *puVar5 = *puVar8;
        puVar5 = puVar5 + (int)param_4;
        lVar7 = lVar7 + -1;
        puVar6 = puVar6 + 1;
        puVar8 = puVar8 + 1;
      } while (lVar7 != 0);
    }
  }
  else if (uVar1 == 1) {
    if (0 < (int)param_3) {
      uVar11 = (ulong)param_3;
      puVar5 = param_2;
      do {
        *puVar5 = *puVar6;
        puVar5 = puVar5 + (int)param_4;
        uVar11 = uVar11 - 1;
        puVar6 = puVar6 + 1;
      } while (uVar11 != 0);
    }
  }
  else {
    uVar11 = 0;
    lVar7 = 0;
    lVar9 = param_1[1];
    lVar3 = param_1[2];
    lVar10 = param_1[3];
    if ((0x10 < (int)param_3) && (param_4 == 4)) {
      lVar7 = 0;
      uVar11 = 0;
      puVar5 = param_2;
      do {
        uVar15 = *(undefined8 *)((long)(puVar6 + uVar11) + 8);
        uVar14 = *(undefined8 *)(puVar6 + uVar11);
        puVar4 = (undefined8 *)(lVar9 + uVar11);
        uVar17 = puVar4[1];
        uVar16 = *puVar4;
        puVar4 = (undefined8 *)(lVar3 + uVar11);
        uVar19 = puVar4[1];
        uVar18 = *puVar4;
        puVar4 = (undefined8 *)(lVar10 + uVar11);
        uVar21 = puVar4[1];
        uVar20 = *puVar4;
        *puVar5 = (char)uVar14;
        puVar5[1] = (char)uVar16;
        puVar5[2] = (char)uVar18;
        puVar5[3] = (char)uVar20;
        puVar5[4] = (char)((ulong)uVar14 >> 8);
        puVar5[5] = (char)((ulong)uVar16 >> 8);
        puVar5[6] = (char)((ulong)uVar18 >> 8);
        puVar5[7] = (char)((ulong)uVar20 >> 8);
        puVar5[8] = (char)((ulong)uVar14 >> 0x10);
        puVar5[9] = (char)((ulong)uVar16 >> 0x10);
        puVar5[10] = (char)((ulong)uVar18 >> 0x10);
        puVar5[0xb] = (char)((ulong)uVar20 >> 0x10);
        puVar5[0xc] = (char)((ulong)uVar14 >> 0x18);
        puVar5[0xd] = (char)((ulong)uVar16 >> 0x18);
        puVar5[0xe] = (char)((ulong)uVar18 >> 0x18);
        puVar5[0xf] = (char)((ulong)uVar20 >> 0x18);
        puVar5[0x10] = (char)((ulong)uVar14 >> 0x20);
        puVar5[0x11] = (char)((ulong)uVar16 >> 0x20);
        puVar5[0x12] = (char)((ulong)uVar18 >> 0x20);
        puVar5[0x13] = (char)((ulong)uVar20 >> 0x20);
        puVar5[0x14] = (char)((ulong)uVar14 >> 0x28);
        puVar5[0x15] = (char)((ulong)uVar16 >> 0x28);
        puVar5[0x16] = (char)((ulong)uVar18 >> 0x28);
        puVar5[0x17] = (char)((ulong)uVar20 >> 0x28);
        puVar5[0x18] = (char)((ulong)uVar14 >> 0x30);
        puVar5[0x19] = (char)((ulong)uVar16 >> 0x30);
        puVar5[0x1a] = (char)((ulong)uVar18 >> 0x30);
        puVar5[0x1b] = (char)((ulong)uVar20 >> 0x30);
        puVar5[0x1c] = (char)((ulong)uVar14 >> 0x38);
        puVar5[0x1d] = (char)((ulong)uVar16 >> 0x38);
        puVar5[0x1e] = (char)((ulong)uVar18 >> 0x38);
        puVar5[0x1f] = (char)((ulong)uVar20 >> 0x38);
        puVar5[0x20] = (char)uVar15;
        puVar5[0x21] = (char)uVar17;
        puVar5[0x22] = (char)uVar19;
        puVar5[0x23] = (char)uVar21;
        puVar5[0x24] = (char)((ulong)uVar15 >> 8);
        puVar5[0x25] = (char)((ulong)uVar17 >> 8);
        puVar5[0x26] = (char)((ulong)uVar19 >> 8);
        puVar5[0x27] = (char)((ulong)uVar21 >> 8);
        puVar5[0x28] = (char)((ulong)uVar15 >> 0x10);
        puVar5[0x29] = (char)((ulong)uVar17 >> 0x10);
        puVar5[0x2a] = (char)((ulong)uVar19 >> 0x10);
        puVar5[0x2b] = (char)((ulong)uVar21 >> 0x10);
        puVar5[0x2c] = (char)((ulong)uVar15 >> 0x18);
        puVar5[0x2d] = (char)((ulong)uVar17 >> 0x18);
        puVar5[0x2e] = (char)((ulong)uVar19 >> 0x18);
        puVar5[0x2f] = (char)((ulong)uVar21 >> 0x18);
        puVar5[0x30] = (char)((ulong)uVar15 >> 0x20);
        puVar5[0x31] = (char)((ulong)uVar17 >> 0x20);
        puVar5[0x32] = (char)((ulong)uVar19 >> 0x20);
        puVar5[0x33] = (char)((ulong)uVar21 >> 0x20);
        puVar5[0x34] = (char)((ulong)uVar15 >> 0x28);
        puVar5[0x35] = (char)((ulong)uVar17 >> 0x28);
        puVar5[0x36] = (char)((ulong)uVar19 >> 0x28);
        puVar5[0x37] = (char)((ulong)uVar21 >> 0x28);
        puVar5[0x38] = (char)((ulong)uVar15 >> 0x30);
        puVar5[0x39] = (char)((ulong)uVar17 >> 0x30);
        puVar5[0x3a] = (char)((ulong)uVar19 >> 0x30);
        puVar5[0x3b] = (char)((ulong)uVar21 >> 0x30);
        puVar5[0x3c] = (char)((ulong)uVar15 >> 0x38);
        puVar5[0x3d] = (char)((ulong)uVar17 >> 0x38);
        puVar5[0x3e] = (char)((ulong)uVar19 >> 0x38);
        puVar5[0x3f] = (char)((ulong)uVar21 >> 0x38);
        puVar5 = puVar5 + 0x40;
        uVar11 = uVar11 + 0x10;
        lVar7 = lVar7 + 0x4000000000;
      } while (uVar11 < param_3 - 0x10);
      lVar7 = lVar7 >> 0x20;
    }
    if ((int)uVar11 < (int)param_3) {
      puVar5 = param_2 + lVar7 + 3;
      lVar7 = (ulong)param_3 - (uVar11 & 0xffffffff);
      puVar6 = puVar6 + (uVar11 & 0xffffffff);
      puVar8 = (undefined1 *)(lVar10 + (uVar11 & 0xffffffff));
      puVar12 = (undefined1 *)(lVar3 + (uVar11 & 0xffffffff));
      puVar13 = (undefined1 *)(lVar9 + (uVar11 & 0xffffffff));
      do {
        puVar5[-3] = *puVar6;
        puVar5[-2] = *puVar13;
        puVar5[-1] = *puVar12;
        *puVar5 = *puVar8;
        puVar5 = puVar5 + (int)param_4;
        lVar7 = lVar7 + -1;
        puVar6 = puVar6 + 1;
        puVar8 = puVar8 + 1;
        puVar12 = puVar12 + 1;
        puVar13 = puVar13 + 1;
      } while (lVar7 != 0);
    }
  }
  if ((int)uVar2 < (int)param_4) {
    lVar7 = (long)(int)uVar2;
    param_2 = param_2 + (long)(int)uVar2 + 3;
    do {
      if (0 < (int)param_3) {
        puVar4 = param_1 + lVar7;
        puVar5 = (undefined1 *)*puVar4;
        puVar8 = (undefined1 *)puVar4[1];
        puVar12 = (undefined1 *)puVar4[2];
        puVar13 = (undefined1 *)puVar4[3];
        uVar11 = (ulong)param_3;
        puVar6 = param_2;
        do {
          puVar6[-3] = *puVar5;
          puVar6[-2] = *puVar8;
          puVar6[-1] = *puVar12;
          *puVar6 = *puVar13;
          puVar6 = puVar6 + (int)param_4;
          uVar11 = uVar11 - 1;
          puVar5 = puVar5 + 1;
          puVar8 = puVar8 + 1;
          puVar12 = puVar12 + 1;
          puVar13 = puVar13 + 1;
        } while (uVar11 != 0);
      }
      lVar7 = lVar7 + 4;
      param_2 = param_2 + 4;
    } while (lVar7 < (int)param_4);
  }
  return;
}



/* Entry: 109aa6384; end: 109aa63f3;  */

bool FUN_109aa6384(long param_1)

{
  int iVar1;
  
  FUN_109ac3f0c();
  FUN_109ac3ae8();
  iVar1 = *(int *)(param_1 + 0x18);
  if (iVar1 < 0) {
    iVar1 = 0;
    *(undefined4 *)(param_1 + 0x18) = 0;
  }
  return iVar1 != 0;
}



/* Entry: 109aa63f4; end: 109aa650f;  */

char * FUN_109aa63f4(long param_1)

{
  char *pcVar1;
  char *pcVar2;
  
  if (pcRam000000011374c7e0 == (char *)0x0) {
    if ((bRam000000011374c7d8 & 1) != 0) {
      return (char *)0x0;
    }
    pcVar1 = "OPENCV_OPENCL_RUNTIME";
    _getenv();
    pcVar2 = "/System/Library/Frameworks/OpenCL.framework/Versions/Current/OpenCL";
    if ((pcVar1 != (char *)0x0) && (*pcVar1 != '\0')) {
      pcVar2 = pcVar1;
    }
    _dlopen(pcVar2,1);
    bRam000000011374c7d8 = 1;
    pcRam000000011374c7e0 = pcVar2;
    if (pcVar2 == (char *)0x0) {
      uRam000000011374c7d9 = false;
    }
    else {
      _dlsym();
      uRam000000011374c7d9 = pcVar2 != (char *)0x0;
    }
    if ((bool)uRam000000011374c7d9 == true) {
      _fprintf(*(undefined8 *)PTR____stderrp_11034bdc8,&UNK_10f598b40);
    }
    else {
      _fwrite(&UNK_10f598b72,0x1e,1);
    }
    if (pcRam000000011374c7e0 == (char *)0x0) {
      return (char *)0x0;
    }
  }
  if (param_1 == 0) {
    return (char *)0x0;
  }
  pcVar1 = pcRam000000011374c7e0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbe120. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__dlsym_11034c1f8)(pcRam000000011374c7e0,param_1);
  return pcVar1;
}



/* Entry: 109aa6510; end: 109aa65a3;  */

long FUN_109aa6510(long param_1)

{
  code *pcVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar2 = *(long *)(param_1 + 8);
  if (lVar2 == 0) {
    return param_1;
  }
  if (pcRam000000011382bbb8 == (code *)0x0) {
    pcVar1 = (code *)&UNK_10f598bbf;
    FUN_109aa63f4();
    pcRam000000011382bbb8 = pcVar1;
    if (pcVar1 != (code *)0x0) goto LAB_109aa6550;
  }
  else {
LAB_109aa6550:
    (*pcRam000000011382bbb8)(lVar2);
  }
  uVar3 = *(undefined8 *)(param_1 + 8);
  if (pcRam000000011382bbb0 == (code *)0x0) {
    pcVar1 = (code *)&UNK_10f598ba9;
    FUN_109aa63f4();
    pcRam000000011382bbb0 = pcVar1;
    if (pcVar1 == (code *)0x0) goto LAB_109aa6588;
  }
  (*pcRam000000011382bbb0)(uVar3);
LAB_109aa6588:
  *(undefined8 *)(param_1 + 8) = 0;
  return param_1;
}



/* Entry: 109aa65a4; end: 109aa6643;  */

void FUN_109aa65a4(void)

{
  code *pcVar1;
  undefined4 *puVar2;
  undefined4 *puStack_30;
  undefined8 uStack_28;
  
  puVar2 = (undefined4 *)0x34;
  func_0x000107c2ae8c();
  *(undefined8 *)(puVar2 + 3) = 0x6320736920797261;
  *(undefined8 *)(puVar2 + 1) = 0x7262696c20656854;
  *puVar2 = 1;
  puStack_30 = puVar2 + 1;
  uStack_28 = 0x2e;
  *(undefined1 *)((long)puVar2 + 0x32) = 0;
  *(undefined8 *)(puVar2 + 7) = 0x2074756f68746977;
  *(undefined8 *)(puVar2 + 5) = 0x2064656c69706d6f;
  *(undefined8 *)((long)puVar2 + 0x2a) = 0x74726f7070757320;
  *(undefined8 *)((long)puVar2 + 0x22) = 0x4c476e65704f2074;
  FUN_109ac3188(0xffffff26,&puStack_30,&UNK_10f598c75,&UNK_10f598bc8,0x3c);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x109aa6618);
  (*pcVar1)();
}



/* Entry: 109aa6644; end: 109aa6a1f;  */

void FUN_109aa6644(undefined8 *param_1,int param_2)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  undefined8 *puVar4;
  long *plVar5;
  undefined8 *puVar6;
  long *plVar7;
  int *piVar8;
  undefined8 *puStack_40;
  undefined8 *puStack_38;
  
  if (param_2 < 3) {
    if (param_2 == 0) {
      puVar4 = (undefined8 *)0x18;
      __Znwm();
      puVar4[2] = 1;
      puVar4[1] = 0x1000000008;
      *puVar4 = &PTR_FUN_110b22af0;
      puVar6 = (undefined8 *)0x20;
      __Znwm();
      *puVar6 = &PTR_FUN_110b22be8;
      puVar6[2] = puVar4;
      piVar8 = (int *)(puVar6 + 1);
      *piVar8 = 1;
      *param_1 = puVar6;
      param_1[1] = puVar4;
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(piVar8,0x10);
        if (bVar2) {
          *piVar8 = *piVar8 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
        puStack_40 = puVar6;
        puStack_38 = puVar4;
      } while (cVar1 != '\0');
      goto LAB_109aa68e8;
    }
    if (param_2 == 1) {
      puVar4 = (undefined8 *)0x18;
      __Znwm();
      puVar4[2] = 1;
      puVar4[1] = 0x1000000008;
      *puVar4 = &PTR_FUN_110b22c28;
      plVar5 = (long *)0x20;
      __Znwm();
      plVar7 = plVar5 + 1;
      *(int *)plVar7 = 1;
      *plVar5 = (long)&PTR_FUN_110b22c80;
      plVar5[2] = (long)puVar4;
      *param_1 = plVar5;
      param_1[1] = puVar4;
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar7,0x10);
        if (bVar2) {
          *(int *)plVar7 = (int)*plVar7 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      do {
        iVar3 = (int)*plVar7 + -1;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar7,0x10);
        if (bVar2) {
          *(int *)plVar7 = iVar3;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (iVar3 != 0) {
        return;
      }
      (**(code **)(*plVar5 + 0x10))();
      return;
    }
    if (param_2 == 2) {
      puVar4 = (undefined8 *)0x18;
      __Znwm();
      puVar4[2] = 1;
      puVar4[1] = 0x1000000008;
      *puVar4 = &PTR_FUN_110b22cc0;
      plVar5 = (long *)0x20;
      __Znwm();
      plVar7 = plVar5 + 1;
      *(int *)plVar7 = 1;
      *plVar5 = (long)&PTR_FUN_110b22d18;
      plVar5[2] = (long)puVar4;
      *param_1 = plVar5;
      param_1[1] = puVar4;
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar7,0x10);
        if (bVar2) {
          *(int *)plVar7 = (int)*plVar7 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      do {
        iVar3 = (int)*plVar7 + -1;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar7,0x10);
        if (bVar2) {
          *(int *)plVar7 = iVar3;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (iVar3 != 0) {
        return;
      }
      (**(code **)(*plVar5 + 0x10))();
      return;
    }
  }
  else {
    if (param_2 == 3) {
      puVar4 = (undefined8 *)0x18;
      __Znwm();
      puVar4[2] = 1;
      puVar4[1] = 0x1000000008;
      *puVar4 = &PTR_FUN_110b22d58;
      plVar5 = (long *)0x20;
      __Znwm();
      plVar7 = plVar5 + 1;
      *(int *)plVar7 = 1;
      *plVar5 = (long)&PTR_FUN_110b22db0;
      plVar5[2] = (long)puVar4;
      *param_1 = plVar5;
      param_1[1] = puVar4;
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar7,0x10);
        if (bVar2) {
          *(int *)plVar7 = (int)*plVar7 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      do {
        iVar3 = (int)*plVar7 + -1;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar7,0x10);
        if (bVar2) {
          *(int *)plVar7 = iVar3;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (iVar3 != 0) {
        return;
      }
      (**(code **)(*plVar5 + 0x10))();
      return;
    }
    if (param_2 == 4) {
      puVar4 = (undefined8 *)0x18;
      __Znwm();
      puVar4[2] = 1;
      puVar4[1] = 0x1000000008;
      *puVar4 = &PTR_FUN_110b22df0;
      plVar5 = (long *)0x20;
      __Znwm();
      plVar7 = plVar5 + 1;
      *(int *)plVar7 = 1;
      *plVar5 = (long)&PTR_FUN_110b22e88;
      plVar5[2] = (long)puVar4;
      *param_1 = plVar5;
      param_1[1] = puVar4;
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar7,0x10);
        if (bVar2) {
          *(int *)plVar7 = (int)*plVar7 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      do {
        iVar3 = (int)*plVar7 + -1;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar7,0x10);
        if (bVar2) {
          *(int *)plVar7 = iVar3;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (iVar3 != 0) {
        return;
      }
      (**(code **)(*plVar5 + 0x10))();
      return;
    }
    if (param_2 == 5) {
      puVar4 = (undefined8 *)0x18;
      __Znwm();
      puVar4[2] = 1;
      puVar4[1] = 0x1000000008;
      *puVar4 = &PTR_FUN_110b22ec8;
      plVar5 = (long *)0x20;
      __Znwm();
      plVar7 = plVar5 + 1;
      *(int *)plVar7 = 1;
      *plVar5 = (long)&PTR_FUN_110b22f20;
      plVar5[2] = (long)puVar4;
      *param_1 = plVar5;
      param_1[1] = puVar4;
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar7,0x10);
        if (bVar2) {
          *(int *)plVar7 = (int)*plVar7 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      do {
        iVar3 = (int)*plVar7 + -1;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar7,0x10);
        if (bVar2) {
          *(int *)plVar7 = iVar3;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (iVar3 != 0) {
        return;
      }
      (**(code **)(*plVar5 + 0x10))();
      return;
    }
  }
  puVar4 = (undefined8 *)0x18;
  __Znwm();
  puVar4[2] = 1;
  puVar4[1] = 0x1000000008;
  *puVar4 = &PTR_FUN_110b22af0;
  puVar6 = (undefined8 *)0x20;
  __Znwm();
  *puVar6 = &PTR_FUN_110b22be8;
  puVar6[2] = puVar4;
  piVar8 = (int *)(puVar6 + 1);
  *piVar8 = 1;
  *param_1 = puVar6;
  param_1[1] = puVar4;
  do {
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(piVar8,0x10);
    if (bVar2) {
      *piVar8 = *piVar8 + 1;
      cVar1 = ExclusiveMonitorsStatus();
    }
    puStack_40 = puVar6;
    puStack_38 = puVar4;
  } while (cVar1 != '\0');
LAB_109aa68e8:
  FUN_109aa79cc(&puStack_40);
  return;
}



/* Entry: 109aa6a20; end: 109aa6a27;  */

void FUN_109aa6a20(void)

{
  return;
}



/* Entry: 109aa6a28; end: 109aa6adf;  */

void FUN_109aa6a28(long *param_1,long param_2,uint *param_3)

{
  int *piVar1;
  long lVar2;
  char cVar3;
  bool bVar4;
  long lStack_30;
  long lStack_28;
  
  if (param_3[2] == 1) {
    bVar4 = true;
  }
  else {
    bVar4 = *(int *)(param_2 + 0x10) == 0;
  }
  lVar2 = 0xc;
  if ((*param_3 & 7) != 6) {
    lVar2 = 8;
  }
  FUN_109aa6af8(&lStack_30,&DAT_10f62a9e8,&DAT_10f62a9ea,param_3,&UNK_10e02e10e,bVar4,0,
                param_2 + lVar2);
  param_1[1] = lStack_28;
  *param_1 = lStack_30;
  if (lStack_30 != 0) {
    piVar1 = (int *)(lStack_30 + 8);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = *piVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  FUN_109aa7934(&lStack_30);
  return;
}



/* Entry: 109aa6ae0; end: 109aa6af7;  */

void FUN_109aa6ae0(long param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 8) = param_2;
  return;
}



/* Entry: 109aa6af8; end: 109aa6dff;  */

void FUN_109aa6af8(undefined8 *param_1,ulong param_2,ulong param_3,ulong *param_4,undefined8 param_5
                  ,uint param_6,uint param_7,undefined4 *param_8)

{
  int iVar1;
  char cVar2;
  bool bVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined4 *puVar6;
  undefined8 *puVar7;
  long lVar8;
  int *piVar9;
  undefined8 uStack_e0;
  ulong uStack_d8;
  ulong uStack_d0;
  ulong uStack_c8;
  ulong uStack_c0;
  ulong uStack_b8;
  ulong uStack_b0;
  ulong uStack_a8;
  ulong uStack_a0;
  undefined8 *puStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined4 *puStack_80;
  ulong uStack_78;
  undefined4 *puStack_70;
  ulong uStack_68;
  
  uVar4 = 0xe0;
  __Znwm();
  uVar5 = param_2;
  _strlen();
  puVar6 = (undefined4 *)((uVar5 & 0xfffffffffffffffc) + 8);
  func_0x000107c2ae8c();
  puStack_70 = puVar6 + 1;
  *puVar6 = 1;
  *(undefined1 *)((long)puStack_70 + uVar5) = 0;
  uStack_68 = uVar5;
  _memcpy(puStack_70,param_2,uVar5);
  puStack_80 = (undefined4 *)0x0;
  uStack_78 = 0;
  uVar5 = param_3;
  _strlen();
  puVar6 = (undefined4 *)((uVar5 & 0xfffffffffffffffc) + 8);
  func_0x000107c2ae8c();
  puStack_80 = puVar6 + 1;
  *puVar6 = 1;
  *(undefined1 *)((long)puStack_80 + uVar5) = 0;
  uStack_78 = uVar5;
  _memcpy(puStack_80,param_3,uVar5);
  uStack_d8 = param_4[1];
  uStack_e0 = *param_4;
  uStack_c8 = param_4[3];
  uStack_d0 = param_4[2];
  uStack_a0 = (ulong)&uStack_e0 | 8;
  iVar1 = *(int *)((long)param_4 + 4);
  uStack_b8 = param_4[5];
  uStack_c0 = param_4[4];
  uStack_a8 = param_4[7];
  uStack_b0 = param_4[6];
  uStack_90 = 0;
  uStack_88 = 0;
  if (param_4[7] != 0) {
    piVar9 = (int *)(param_4[7] + 0x14);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar9,0x10);
      if (bVar3) {
        *piVar9 = *piVar9 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    iVar1 = *(int *)((long)param_4 + 4);
  }
  puStack_98 = &uStack_90;
  if (iVar1 < 3) {
    uStack_90 = *(undefined8 *)param_4[9];
    uStack_88 = ((undefined8 *)param_4[9])[1];
  }
  else {
    uStack_e0 = uStack_e0 & 0xffffffff;
    func_0x000109a84868(&uStack_e0,param_4);
  }
  FUN_109aa6e00(uVar4,&puStack_70,&puStack_80,&uStack_e0,param_5,param_6 & 1,param_7 & 1,*param_8);
  puVar7 = (undefined8 *)0x20;
  __Znwm();
  *(undefined4 *)(puVar7 + 1) = 1;
  *puVar7 = &PTR_FUN_110b22ba8;
  puVar7[2] = uVar4;
  *param_1 = puVar7;
  param_1[1] = uVar4;
  if (uStack_a8 != 0) {
    piVar9 = (int *)(uStack_a8 + 0x14);
    do {
      iVar1 = *piVar9;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar9,0x10);
      if (bVar3) {
        *piVar9 = iVar1 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar1 + -1 == 0) {
      func_0x000109a848d4(&uStack_e0);
    }
  }
  uStack_a8 = 0;
  uStack_c8 = 0;
  uStack_d0 = 0;
  uStack_b8 = 0;
  uStack_c0 = 0;
  if (0 < uStack_e0._4_4_) {
    lVar8 = 0;
    do {
      *(undefined4 *)(uStack_a0 + lVar8 * 4) = 0;
      lVar8 = lVar8 + 1;
    } while (lVar8 < uStack_e0._4_4_);
  }
  if (puStack_98 != &uStack_90 && puStack_98 != (undefined8 *)0x0) {
    _free(puStack_98[-1]);
  }
  puVar6 = puStack_80;
  puStack_80 = (undefined4 *)0x0;
  uStack_78 = 0;
  if (puVar6 != (undefined4 *)0x0) {
    piVar9 = puVar6 + -1;
    do {
      iVar1 = *piVar9;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar9,0x10);
      if (bVar3) {
        *piVar9 = iVar1 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar1 + -1 == 0) {
      _free(*(undefined8 *)(puVar6 + -3));
    }
  }
  puVar6 = puStack_70;
  puStack_70 = (undefined4 *)0x0;
  uStack_68 = 0;
  if (puVar6 != (undefined4 *)0x0) {
    piVar9 = puVar6 + -1;
    do {
      iVar1 = *piVar9;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar9,0x10);
      if (bVar3) {
        *piVar9 = iVar1 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar1 + -1 == 0) {
      _free(*(undefined8 *)(puVar6 + -3));
    }
  }
  return;
}



/* Entry: 109aa6e00; end: 109aa723f;  */

undefined8 *
FUN_109aa6e00(undefined8 *param_1,long *param_2,long *param_3,uint *param_4,undefined4 *param_5,
             undefined1 param_6,undefined1 param_7,int param_8)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  char cVar4;
  bool bVar5;
  undefined4 *puVar6;
  int *piVar7;
  long lVar8;
  undefined8 *puVar9;
  code *pcVar10;
  long lVar11;
  undefined8 *puVar12;
  uint *puVar13;
  int *piVar14;
  long *plVar15;
  long *plVar16;
  undefined8 uVar17;
  undefined8 *puStack_70;
  undefined8 uStack_68;
  
  *param_1 = &PTR_FUN_110b22b60;
  puVar13 = (uint *)(param_1 + 6);
  *puVar13 = 0x42ff0000;
  piVar14 = (int *)((long)param_1 + 0x34);
  *(undefined8 *)((long)param_1 + 0x3c) = 0;
  piVar14[0] = 0;
  piVar14[1] = 0;
  param_1[0xd] = 0;
  param_1[0xc] = 0;
  *(undefined8 *)((long)param_1 + 0x5c) = 0;
  *(undefined8 *)((long)param_1 + 0x54) = 0;
  param_1[0x10] = 0;
  *(undefined8 *)((long)param_1 + 0x4c) = 0;
  *(undefined8 *)((long)param_1 + 0x44) = 0;
  param_1[0xe] = param_1 + 7;
  param_1[0xf] = param_1 + 0x10;
  plVar15 = param_1 + 0x15;
  param_1[0x16] = 0;
  *plVar15 = 0;
  param_1[0x11] = 0;
  plVar16 = param_1 + 0x17;
  param_1[0x18] = 0;
  *plVar16 = 0;
  if (2 < (int)param_4[1]) {
    puVar6 = (undefined4 *)0x10;
    func_0x000107c2ae8c();
    *puVar6 = 1;
    puStack_70 = (undefined8 *)(puVar6 + 1);
    *puStack_70 = 0x3c20736d69642e6d;
    uStack_68 = 0xb;
    *(undefined1 *)((long)puVar6 + 0xf) = 0;
    *(undefined4 *)((long)puVar6 + 0xb) = 0x32203d3c;
    FUN_109ac3188(0xffffff29,&puStack_70,&UNK_10f598c82,&UNK_10f598c90,0x56);
                    /* WARNING: Does not return */
    pcVar10 = (code *)SoftwareBreakpoint(1,0x109aa71a8);
    (*pcVar10)();
  }
  if (plVar15 != param_2) {
    *plVar15 = 0;
    param_1[0x16] = 0;
    lVar8 = 0;
    if (*param_2 != 0) {
      piVar7 = (int *)(*param_2 + -4);
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar7,0x10);
        if (bVar5) {
          *piVar7 = *piVar7 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      lVar8 = *param_2;
    }
    lVar11 = param_2[1];
    param_1[0x15] = lVar8;
    param_1[0x16] = lVar11;
  }
  if (plVar16 != param_3) {
    lVar8 = *plVar16;
    *plVar16 = 0;
    param_1[0x18] = 0;
    if (lVar8 != 0) {
      piVar7 = (int *)(lVar8 + -4);
      do {
        iVar2 = *piVar7;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar7,0x10);
        if (bVar5) {
          *piVar7 = iVar2 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar2 + -1 == 0) {
        _free(*(undefined8 *)(lVar8 + -0xc));
      }
    }
    lVar8 = 0;
    if (*param_3 != 0) {
      piVar7 = (int *)(*param_3 + -4);
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar7,0x10);
        if (bVar5) {
          *piVar7 = *piVar7 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      lVar8 = *param_3;
    }
    lVar11 = param_3[1];
    param_1[0x17] = lVar8;
    param_1[0x18] = lVar11;
  }
  if (puVar13 == param_4) goto LAB_109aa7020;
  if (*(long *)(param_4 + 0xe) != 0) {
    piVar7 = (int *)(*(long *)(param_4 + 0xe) + 0x14);
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar7,0x10);
      if (bVar5) {
        *piVar7 = *piVar7 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  if (param_1[0xd] != 0) {
    piVar7 = (int *)(param_1[0xd] + 0x14);
    do {
      iVar2 = *piVar7;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar7,0x10);
      if (bVar5) {
        *piVar7 = iVar2 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar2 + -1 == 0) {
      func_0x000109a848d4(puVar13);
    }
  }
  param_1[0xd] = 0;
  param_1[9] = 0;
  param_1[8] = 0;
  param_1[0xb] = 0;
  param_1[10] = 0;
  if (*(int *)((long)param_1 + 0x34) < 1) {
    *puVar13 = *param_4;
LAB_109aa6fc8:
    if (2 < (int)param_4[1]) goto LAB_109aa6ffc;
    *(uint *)((long)param_1 + 0x34) = param_4[1];
    param_1[7] = *(undefined8 *)(param_4 + 2);
    puVar9 = *(undefined8 **)(param_4 + 0x12);
    puVar12 = (undefined8 *)param_1[0xf];
    *puVar12 = *puVar9;
    puVar12[1] = puVar9[1];
  }
  else {
    lVar8 = 0;
    lVar11 = param_1[0xe];
    do {
      *(undefined4 *)(lVar11 + lVar8 * 4) = 0;
      lVar8 = lVar8 + 1;
    } while (lVar8 < *piVar14);
    *puVar13 = *param_4;
    if (*piVar14 < 3) goto LAB_109aa6fc8;
LAB_109aa6ffc:
    func_0x000109a84868(puVar13,param_4);
  }
  uVar17 = *(undefined8 *)(param_4 + 4);
  param_1[9] = *(undefined8 *)(param_4 + 6);
  param_1[8] = uVar17;
  uVar17 = *(undefined8 *)(param_4 + 8);
  param_1[0xb] = *(undefined8 *)(param_4 + 10);
  param_1[10] = uVar17;
  uVar17 = *(undefined8 *)(param_4 + 0xc);
  param_1[0xd] = *(undefined8 *)(param_4 + 0xe);
  param_1[0xc] = uVar17;
LAB_109aa7020:
  *(uint *)(param_1 + 0x12) = (*param_4 >> 3 & 0x1ff) + 1;
  uVar3 = *param_5;
  *(undefined1 *)((long)param_1 + 0xcc) = *(undefined1 *)(param_5 + 1);
  *(undefined4 *)(param_1 + 0x19) = uVar3;
  *(undefined1 *)((long)param_1 + 0x94) = param_6;
  *(undefined1 *)((long)param_1 + 0x95) = param_7;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  if (param_8 < 0) {
    *(undefined2 *)(param_1 + 1) = 0x6125;
    *(undefined1 *)((long)param_1 + 10) = 0;
  }
  else {
    _sprintf(param_1 + 1,&UNK_10f598d0b);
  }
  uVar1 = *puVar13 & 7;
  if (uVar1 < 4) {
    if (uVar1 < 2) {
      if (uVar1 == 0) {
        pcVar10 = FUN_109aa7240;
      }
      else {
        pcVar10 = (code *)0x109aa728c;
      }
    }
    else if (uVar1 == 2) {
      pcVar10 = (code *)0x109aa72d8;
    }
    else {
      pcVar10 = (code *)0x109aa7324;
    }
  }
  else if (uVar1 < 6) {
    if (uVar1 == 4) {
      pcVar10 = (code *)0x109aa7370;
    }
    else {
      pcVar10 = (code *)0x109aa73bc;
    }
  }
  else if (uVar1 == 6) {
    pcVar10 = (code *)0x109aa740c;
  }
  else {
    pcVar10 = FUN_109aa7458;
  }
  param_1[0x1a] = pcVar10;
  param_1[0x1b] = 0;
  return param_1;
}



/* Entry: 109aa7240; end: 109aa7457;  */

void FUN_109aa7240(long param_1)

{
  _sprintf(param_1 + 0x10,&UNK_10f598d12);
  return;
}



/* Entry: 109aa7458; end: 109aa745f;  */

void FUN_109aa7458(long param_1)

{
  *(undefined1 *)(param_1 + 0x10) = 0;
  return;
}



/* Entry: 109aa7460; end: 109aa77cf;  */

char * FUN_109aa7460(char *param_1)

{
  int iVar1;
  undefined *puVar2;
  char cVar3;
  undefined4 uVar4;
  ulong uVar5;
  char *pcVar6;
  code *pcVar7;
  ulong uVar8;
  long lVar9;
  int *piVar10;
  char *pcVar11;
  
  pcVar11 = (char *)0x0;
  switch(*(undefined4 *)(param_1 + 0x98)) {
  case 0:
    param_1[0x9c] = '\0';
    param_1[0x9d] = '\0';
    param_1[0x9e] = '\0';
    param_1[0x9f] = '\0';
    if (*(long *)(param_1 + 0x40) == 0) {
code_r0x000109aa7790:
      uVar4 = 1;
    }
    else {
      uVar8 = (ulong)*(uint *)(param_1 + 0x34);
      if ((int)*(uint *)(param_1 + 0x34) < 3) {
        lVar9 = (long)*(int *)(param_1 + 0x3c) * (long)*(int *)(param_1 + 0x38);
      }
      else {
        lVar9 = 1;
        piVar10 = *(int **)(param_1 + 0x70);
        do {
          lVar9 = lVar9 * *piVar10;
          uVar8 = uVar8 - 1;
          piVar10 = piVar10 + 1;
        } while (uVar8 != 0);
      }
      if (lVar9 == 0) goto code_r0x000109aa7790;
      uVar4 = 2;
      if (param_1[0x95] == '\0') {
        uVar4 = 3;
      }
    }
    *(undefined4 *)(param_1 + 0x98) = uVar4;
    pcVar6 = *(char **)(param_1 + 0xa8);
    goto code_r0x000109aa779c;
  case 1:
    param_1[0x98] = '\b';
    param_1[0x99] = '\0';
    param_1[0x9a] = '\0';
    param_1[0x9b] = '\0';
    pcVar6 = *(char **)(param_1 + 0xb8);
code_r0x000109aa779c:
    pcVar11 = "";
    if (pcVar6 != (char *)0x0) {
      pcVar11 = pcVar6;
    }
    break;
  case 2:
    param_1[0x98] = '\x03';
    param_1[0x99] = '\0';
    param_1[0x9a] = '\0';
    param_1[0x9b] = '\0';
    if (*(int *)(param_1 + 0x9c) < *(int *)(param_1 + 0x38)) {
      puVar2 = &UNK_10f598d26;
    }
    else {
      iVar1 = *(int *)(param_1 + 0xa4);
      *(int *)(param_1 + 0xa4) = iVar1 + 1;
      if (*(int *)(param_1 + 0x90) <= iVar1 + 1) {
        param_1[0x98] = '\x01';
        param_1[0x99] = '\0';
        param_1[0x9a] = '\0';
        param_1[0x9b] = '\0';
        param_1[0x10] = '\0';
        return param_1 + 0x10;
      }
      param_1[0x9c] = '\0';
      param_1[0x9d] = '\0';
      param_1[0x9e] = '\0';
      param_1[0x9f] = '\0';
      puVar2 = &UNK_10f598d16;
    }
    _sprintf(param_1 + 0x10,puVar2);
    pcVar11 = param_1 + 0x10;
    break;
  case 3:
    param_1[0xa0] = '\0';
    param_1[0xa1] = '\0';
    param_1[0xa2] = '\0';
    param_1[0xa3] = '\0';
    param_1[0x98] = '\x05';
    param_1[0x99] = '\0';
    param_1[0x9a] = '\0';
    param_1[0x9b] = '\0';
    if (*(int *)(param_1 + 0x9c) < 1) {
      uVar8 = 0;
    }
    else {
      uVar8 = 0;
      if (*(long *)(param_1 + 0xb0) != 0) {
        uVar5 = 0;
        do {
          param_1[uVar5 + 0x10] = ' ';
          uVar8 = uVar5 + 1;
          if (0x1c < uVar5) break;
          uVar5 = uVar8;
        } while (uVar8 < *(ulong *)(param_1 + 0xb0));
      }
    }
    if (param_1[200] == '\0') {
      if (uVar8 == 0) goto code_r0x000109aa7744;
    }
    else {
      param_1[uVar8 + 0x10] = param_1[200];
      uVar8 = uVar8 + 1;
    }
    (param_1 + 0x10)[uVar8] = '\0';
    pcVar11 = param_1 + 0x10;
    break;
  case 4:
    iVar1 = *(int *)(param_1 + 0x9c) + 1;
    param_1[0x98] = '\t';
    param_1[0x99] = '\0';
    param_1[0x9a] = '\0';
    param_1[0x9b] = '\0';
    *(int *)(param_1 + 0x9c) = iVar1;
    if (param_1[0xc9] == '\0') {
      if ((param_1[0xca] == '\0') || (*(int *)(param_1 + 0x38) <= iVar1)) goto code_r0x000109aa7744;
      param_1[0x10] = param_1[0xca];
      goto code_r0x000109aa769c;
    }
    param_1[0x10] = param_1[0xc9];
    cVar3 = ',';
    if (*(int *)(param_1 + 0x38) <= iVar1) {
      cVar3 = '\0';
    }
    param_1[0x11] = cVar3;
    goto code_r0x000109aa7664;
  case 5:
    param_1[0x98] = '\a';
    param_1[0x99] = '\0';
    param_1[0x9a] = '\0';
    param_1[0x9b] = '\0';
    if ((param_1[0x95] & 1U) == 0) {
      param_1[0xa4] = '\0';
      param_1[0xa5] = '\0';
      param_1[0xa6] = '\0';
      param_1[0xa7] = '\0';
    }
    if (*(int *)(param_1 + 0x90) < 2) goto code_r0x000109aa7744;
    cVar3 = param_1[0xcb];
    goto joined_r0x000109aa75f4;
  case 6:
    iVar1 = *(int *)(param_1 + 0xa0);
    *(int *)(param_1 + 0xa0) = iVar1 + 1;
    uVar4 = 10;
    if (*(int *)(param_1 + 0x3c) <= iVar1 + 1) {
      uVar4 = 4;
    }
    *(undefined4 *)(param_1 + 0x98) = uVar4;
    if (*(int *)(param_1 + 0x90) < 2) goto code_r0x000109aa7744;
    cVar3 = param_1[0xcc];
joined_r0x000109aa75f4:
    if (cVar3 == '\0') {
code_r0x000109aa7744:
                    /* WARNING: Could not recover jumptable at 0x000109aa775c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)**(undefined8 **)param_1)(param_1);
      return param_1;
    }
    param_1[0x10] = cVar3;
code_r0x000109aa769c:
    param_1[0x11] = '\0';
code_r0x000109aa76a0:
    pcVar11 = param_1 + 0x10;
    break;
  case 7:
    pcVar7 = *(code **)(param_1 + 0xd0);
    if ((*(ulong *)(param_1 + 0xd8) & 1) != 0) {
      pcVar7 = *(code **)(*(long *)(param_1 + ((long)*(ulong *)(param_1 + 0xd8) >> 1)) +
                         ((ulong)pcVar7 & 0xffffffff));
    }
    (*pcVar7)();
    param_1[0x98] = '\x06';
    param_1[0x99] = '\0';
    param_1[0x9a] = '\0';
    param_1[0x9b] = '\0';
    if ((param_1[0x95] != '\x01') &&
       (iVar1 = *(int *)(param_1 + 0xa4), *(int *)(param_1 + 0xa4) = iVar1 + 1,
       iVar1 + 1 < *(int *)(param_1 + 0x90))) {
      param_1[0x98] = '\v';
      param_1[0x99] = '\0';
      param_1[0x9a] = '\0';
      param_1[0x9b] = '\0';
    }
    pcVar11 = param_1 + 0x10;
    break;
  case 9:
    if (*(int *)(param_1 + 0x38) <= *(int *)(param_1 + 0x9c)) {
      uVar4 = 1;
      if (param_1[0x95] != '\0') {
        uVar4 = 2;
      }
      *(undefined4 *)(param_1 + 0x98) = uVar4;
      goto code_r0x000109aa7744;
    }
    cVar3 = ' ';
    if (param_1[0x94] == '\0') {
      cVar3 = '\n';
    }
    param_1[0x10] = cVar3;
    param_1[0x98] = '\x03';
    param_1[0x99] = '\0';
    param_1[0x9a] = '\0';
    param_1[0x9b] = '\0';
    goto code_r0x000109aa769c;
  case 10:
    param_1[0x10] = ',';
    param_1[0x11] = ' ';
    uVar4 = 5;
    goto code_r0x000109aa7660;
  case 0xb:
    param_1[0x10] = ',';
    param_1[0x11] = ' ';
    uVar4 = 7;
code_r0x000109aa7660:
    *(undefined4 *)(param_1 + 0x98) = uVar4;
code_r0x000109aa7664:
    param_1[0x12] = '\0';
    goto code_r0x000109aa76a0;
  }
  return pcVar11;
}



/* Entry: 109aa77d0; end: 109aa77db;  */

void FUN_109aa77d0(long param_1)

{
  *(undefined4 *)(param_1 + 0x98) = 0;
  return;
}



/* Entry: 109aa77dc; end: 109aa77ef;  */

void FUN_109aa77dc(void)

{
  FUN_109aa77f0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 109aa77f0; end: 109aa78ef;  */

undefined8 * FUN_109aa77f0(undefined8 *param_1)

{
  int iVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined8 *puVar5;
  int *piVar6;
  long lVar7;
  
  *param_1 = &PTR_FUN_110b22b60;
  lVar4 = param_1[0x17];
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  if (lVar4 != 0) {
    piVar6 = (int *)(lVar4 + -4);
    do {
      iVar1 = *piVar6;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar6,0x10);
      if (bVar3) {
        *piVar6 = iVar1 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar1 + -1 == 0) {
      _free(*(undefined8 *)(lVar4 + -0xc));
    }
  }
  lVar4 = param_1[0x15];
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  if (lVar4 != 0) {
    piVar6 = (int *)(lVar4 + -4);
    do {
      iVar1 = *piVar6;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar6,0x10);
      if (bVar3) {
        *piVar6 = iVar1 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar1 + -1 == 0) {
      _free(*(undefined8 *)(lVar4 + -0xc));
    }
  }
  if (param_1[0xd] != 0) {
    piVar6 = (int *)(param_1[0xd] + 0x14);
    do {
      iVar1 = *piVar6;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar6,0x10);
      if (bVar3) {
        *piVar6 = iVar1 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar1 + -1 == 0) {
      func_0x000109a848d4(param_1 + 6);
    }
  }
  param_1[0xd] = 0;
  param_1[9] = 0;
  param_1[8] = 0;
  param_1[0xb] = 0;
  param_1[10] = 0;
  if (0 < *(int *)((long)param_1 + 0x34)) {
    lVar4 = 0;
    lVar7 = param_1[0xe];
    do {
      *(undefined4 *)(lVar7 + lVar4 * 4) = 0;
      lVar4 = lVar4 + 1;
    } while (lVar4 < *(int *)((long)param_1 + 0x34));
  }
  puVar5 = (undefined8 *)param_1[0xf];
  if (puVar5 != param_1 + 0x10 && puVar5 != (undefined8 *)0x0) {
    _free(puVar5[-1]);
  }
  return param_1;
}



/* Entry: 109aa78f0; end: 109aa78f7;  */

void FUN_109aa78f0(void)

{
  return;
}



/* Entry: 109aa78f8; end: 109aa7933;  */

void FUN_109aa78f8(long *param_1)

{
  if ((long *)param_1[2] != (long *)0x0) {
    (**(code **)(*(long *)param_1[2] + 0x18))();
  }
                    /* WARNING: Could not recover jumptable at 0x000109aa7930. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 8))(param_1);
  return;
}



/* Entry: 109aa7934; end: 109aa7987;  */

long * FUN_109aa7934(long *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  long *plVar5;
  
  plVar5 = (long *)*param_1;
  if (plVar5 != (long *)0x0) {
    plVar1 = plVar5 + 1;
    do {
      iVar4 = (int)*plVar1 + -1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *(int *)plVar1 = iVar4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar4 == 0) {
      (**(code **)(*plVar5 + 0x10))();
    }
  }
  *param_1 = 0;
  param_1[1] = 0;
  return param_1;
}



/* Entry: 109aa7988; end: 109aa798f;  */

void FUN_109aa7988(void)

{
  return;
}



/* Entry: 109aa7990; end: 109aa79cb;  */

void FUN_109aa7990(long *param_1)

{
  if ((long *)param_1[2] != (long *)0x0) {
    (**(code **)(*(long *)param_1[2] + 8))();
  }
                    /* WARNING: Could not recover jumptable at 0x000109aa79c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 8))(param_1);
  return;
}



/* Entry: 109aa79cc; end: 109aa7a1f;  */

long * FUN_109aa79cc(long *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  long *plVar5;
  
  plVar5 = (long *)*param_1;
  if (plVar5 != (long *)0x0) {
    plVar1 = plVar5 + 1;
    do {
      iVar4 = (int)*plVar1 + -1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *(int *)plVar1 = iVar4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar4 == 0) {
      (**(code **)(*plVar5 + 0x10))();
    }
  }
  *param_1 = 0;
  param_1[1] = 0;
  return param_1;
}



/* Entry: 109aa7a20; end: 109aa7a27;  */

void FUN_109aa7a20(void)

{
  return;
}



/* Entry: 109aa7a28; end: 109aa7d43;  */

void FUN_109aa7a28(undefined8 *param_1,long param_2,ulong *param_3)

{
  int iVar1;
  uint uVar2;
  char cVar3;
  bool bVar4;
  bool bVar5;
  undefined8 uVar6;
  undefined4 *puVar7;
  undefined8 *puVar8;
  long lVar9;
  int *piVar10;
  undefined8 *puStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  ulong uStack_c8;
  ulong uStack_c0;
  ulong uStack_b8;
  ulong uStack_b0;
  ulong uStack_a8;
  ulong uStack_a0;
  ulong uStack_98;
  ulong uStack_90;
  undefined8 *puStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined4 *puStack_70;
  undefined8 uStack_68;
  undefined4 *puStack_60;
  undefined8 uStack_58;
  
  if ((uint)param_3[1] == 1) {
    bVar5 = true;
  }
  else {
    bVar5 = *(int *)(param_2 + 0x10) == 0;
  }
  lVar9 = 0xc;
  if ((*param_3 & 7) != 6) {
    lVar9 = 8;
  }
  uVar6 = 0xe0;
  __Znwm();
  puVar7 = (undefined4 *)0x8;
  func_0x000107c2ae8c();
  *puVar7 = 1;
  puStack_60 = puVar7 + 1;
  *(undefined1 *)puStack_60 = 0;
  uStack_58 = 0;
  puStack_70 = (undefined4 *)0x0;
  uStack_68 = 0;
  puVar7 = (undefined4 *)0x8;
  func_0x000107c2ae8c();
  *puVar7 = 1;
  puStack_70 = puVar7 + 1;
  *(undefined1 *)puStack_70 = 0;
  uStack_68 = 0;
  uStack_90 = (ulong)&uStack_d0 | 8;
  uStack_c8 = param_3[1];
  uStack_d0 = *param_3;
  uStack_b8 = param_3[3];
  uStack_c0 = param_3[2];
  uVar2 = *(uint *)((long)param_3 + 4);
  uStack_a8 = param_3[5];
  uStack_b0 = param_3[4];
  uStack_98 = param_3[7];
  uStack_a0 = param_3[6];
  uStack_80 = 0;
  uStack_78 = 0;
  if (param_3[7] != 0) {
    piVar10 = (int *)(param_3[7] + 0x14);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar10,0x10);
      if (bVar4) {
        *piVar10 = *piVar10 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    uVar2 = *(uint *)((long)param_3 + 4);
  }
  puStack_88 = &uStack_80;
  if ((int)uVar2 < 3) {
    uStack_80 = *(undefined8 *)param_3[9];
    uStack_78 = ((undefined8 *)param_3[9])[1];
  }
  else {
    uStack_d0 = uStack_d0 & 0xffffffff;
    func_0x000109a84868(&uStack_d0,param_3);
  }
  FUN_109aa6e00(uVar6,&puStack_60,&puStack_70,&uStack_d0,&UNK_10e02e10e,bVar5,1,
                *(undefined4 *)(param_2 + lVar9));
  puVar8 = (undefined8 *)0x20;
  __Znwm();
  *(undefined4 *)(puVar8 + 1) = 1;
  *puVar8 = &PTR_FUN_110b22ba8;
  puVar8[2] = uVar6;
  puStack_e0 = puVar8;
  uStack_d8 = uVar6;
  if (uStack_98 != 0) {
    piVar10 = (int *)(uStack_98 + 0x14);
    do {
      iVar1 = *piVar10;
      cVar3 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar10,0x10);
      if (bVar5) {
        *piVar10 = iVar1 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar1 + -1 == 0) {
      func_0x000109a848d4(&uStack_d0);
    }
  }
  uStack_98 = 0;
  uStack_b8 = 0;
  uStack_c0 = 0;
  uStack_a8 = 0;
  uStack_b0 = 0;
  if (0 < uStack_d0._4_4_) {
    lVar9 = 0;
    do {
      *(undefined4 *)(uStack_90 + lVar9 * 4) = 0;
      lVar9 = lVar9 + 1;
    } while (lVar9 < uStack_d0._4_4_);
  }
  if (puStack_88 != &uStack_80 && puStack_88 != (undefined8 *)0x0) {
    _free(puStack_88[-1]);
  }
  puVar7 = puStack_70;
  puStack_70 = (undefined4 *)0x0;
  uStack_68 = 0;
  if (puVar7 != (undefined4 *)0x0) {
    piVar10 = puVar7 + -1;
    do {
      iVar1 = *piVar10;
      cVar3 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar10,0x10);
      if (bVar5) {
        *piVar10 = iVar1 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar1 + -1 == 0) {
      _free(*(undefined8 *)(puVar7 + -3));
    }
  }
  puVar7 = puStack_60;
  puStack_60 = (undefined4 *)0x0;
  uStack_58 = 0;
  if (puVar7 != (undefined4 *)0x0) {
    piVar10 = puVar7 + -1;
    do {
      iVar1 = *piVar10;
      cVar3 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar10,0x10);
      if (bVar5) {
        *piVar10 = iVar1 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar1 + -1 == 0) {
      _free(*(undefined8 *)(puVar7 + -3));
    }
  }
  param_1[1] = uStack_d8;
  *param_1 = puStack_e0;
  if (puStack_e0 != (undefined8 *)0x0) {
    piVar10 = (int *)(puStack_e0 + 1);
    do {
      cVar3 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar10,0x10);
      if (bVar5) {
        *piVar10 = *piVar10 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  FUN_109aa7934(&puStack_e0);
  return;
}


